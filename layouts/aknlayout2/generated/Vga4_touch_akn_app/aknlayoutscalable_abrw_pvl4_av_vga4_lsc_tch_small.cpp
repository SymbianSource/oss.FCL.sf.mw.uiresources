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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00031a01 };

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
0xada7,	// (0x0003c7a8) Screen

0xadb3,	// (0x0003c7b4) application_window_ParamLimits

0xadb3,	// (0x0003c7b4) application_window

0xe084,	// (0x0003fa85) screen_g1

0xadeb,	// (0x0003c7ec) area_bottom_pane_ParamLimits

0xadeb,	// (0x0003c7ec) area_bottom_pane

0xef1f,	// (0x00040920) area_top_pane_ParamLimits

0xef1f,	// (0x00040920) area_top_pane

0xf35e,	// (0x00040d5f) main_pane_ParamLimits

0xf35e,	// (0x00040d5f) main_pane

0xe08e,	// (0x0003fa8f) misc_graphics

0xce9e,	// (0x0003e89f) battery_pane_ParamLimits

0xce9e,	// (0x0003e89f) battery_pane

0x50c2,	// (0x00036ac3) bg_status_flat_pane_g8

0x50ca,	// (0x00036acb) bg_status_flat_pane_g9

0x4477,	// (0x00035e78) context_pane_ParamLimits

0x4477,	// (0x00035e78) context_pane

0xd015,	// (0x0003ea16) navi_pane_ParamLimits

0xd015,	// (0x0003ea16) navi_pane

0xd09e,	// (0x0003ea9f) signal_pane_ParamLimits

0xd09e,	// (0x0003ea9f) signal_pane

0x0008,

0xf880,	// (0x00041281) bg_status_flat_pane_g

0xd12e,	// (0x0003eb2f) status_pane_g1_ParamLimits

0xd12e,	// (0x0003eb2f) status_pane_g1

0xd144,	// (0x0003eb45) status_pane_g2_ParamLimits

0xd144,	// (0x0003eb45) status_pane_g2

0x46b7,	// (0x000360b8) status_pane_g3_ParamLimits

0x46b7,	// (0x000360b8) status_pane_g3

0x0004,

0xf7b3,	// (0x000411b4) status_pane_g_ParamLimits

0xf7b3,	// (0x000411b4) status_pane_g

0xd150,	// (0x0003eb51) title_pane_ParamLimits

0xd150,	// (0x0003eb51) title_pane

0xd1ad,	// (0x0003ebae) uni_indicator_pane_ParamLimits

0xd1ad,	// (0x0003ebae) uni_indicator_pane

0x3ca4,	// (0x000356a5) bg_list_pane_ParamLimits

0x3ca4,	// (0x000356a5) bg_list_pane

0xbab9,	// (0x0003d4ba) find_pane

0xc6e9,	// (0x0003e0ea) listscroll_app_pane_ParamLimits

0xc6e9,	// (0x0003e0ea) listscroll_app_pane

0x3cd8,	// (0x000356d9) listscroll_form_pane

0xbac1,	// (0x0003d4c2) listscroll_gen_pane_ParamLimits

0xbac1,	// (0x0003d4c2) listscroll_gen_pane

0x3cd8,	// (0x000356d9) listscroll_set_pane

0x5c7b,	// (0x0003767c) main_idle_act_pane

0x3980,	// (0x00035381) main_idle_trad_pane

0x3980,	// (0x00035381) main_list_empty_pane

0x3d06,	// (0x00035707) main_midp_pane

0x3d12,	// (0x00035713) main_pane_g1_ParamLimits

0x3d12,	// (0x00035713) main_pane_g1

0xc703,	// (0x0003e104) popup_ai_message_window_ParamLimits

0xc703,	// (0x0003e104) popup_ai_message_window

0xc7a3,	// (0x0003e1a4) popup_fep_china_uni_window_ParamLimits

0xc7a3,	// (0x0003e1a4) popup_fep_china_uni_window

0x3e30,	// (0x00035831) popup_fep_japan_candidate_window_ParamLimits

0x3e30,	// (0x00035831) popup_fep_japan_candidate_window

0x3e5a,	// (0x0003585b) popup_fep_japan_predictive_window_ParamLimits

0x3e5a,	// (0x0003585b) popup_fep_japan_predictive_window

0xc803,	// (0x0003e204) popup_find_window

0xc820,	// (0x0003e221) popup_grid_graphic_window_ParamLimits

0xc820,	// (0x0003e221) popup_grid_graphic_window

0x3ecb,	// (0x000358cc) popup_large_graphic_colour_window

0xc8c4,	// (0x0003e2c5) popup_menu_window_ParamLimits

0xc8c4,	// (0x0003e2c5) popup_menu_window

0xcab0,	// (0x0003e4b1) popup_note_image_window

0xca70,	// (0x0003e471) popup_note_wait_window_ParamLimits

0xca70,	// (0x0003e471) popup_note_wait_window

0xcac8,	// (0x0003e4c9) popup_note_window_ParamLimits

0xcac8,	// (0x0003e4c9) popup_note_window

0xcb76,	// (0x0003e577) popup_query_code_window_ParamLimits

0xcb76,	// (0x0003e577) popup_query_code_window

0x4137,	// (0x00035b38) popup_query_data_code_window_ParamLimits

0x4137,	// (0x00035b38) popup_query_data_code_window

0xcbb6,	// (0x0003e5b7) popup_query_data_window_ParamLimits

0xcbb6,	// (0x0003e5b7) popup_query_data_window

0xcc4a,	// (0x0003e64b) popup_query_sat_info_window_ParamLimits

0xcc4a,	// (0x0003e64b) popup_query_sat_info_window

0xccf5,	// (0x0003e6f6) popup_snote_single_graphic_window_ParamLimits

0xccf5,	// (0x0003e6f6) popup_snote_single_graphic_window

0xccf5,	// (0x0003e6f6) popup_snote_single_text_window_ParamLimits

0xccf5,	// (0x0003e6f6) popup_snote_single_text_window

0x41d2,	// (0x00035bd3) popup_sub_window_general

0x4318,	// (0x00035d19) popup_window_general_ParamLimits

0x4318,	// (0x00035d19) popup_window_general

0x4331,	// (0x00035d32) power_save_pane

0xb97d,	// (0x0003d37e) control_pane_g1_ParamLimits

0xb97d,	// (0x0003d37e) control_pane_g1

0x096d,	// (0x0003236e) control_pane_g2_ParamLimits

0x096d,	// (0x0003236e) control_pane_g2

0x3c4d,	// (0x0003564e) control_pane_g3_ParamLimits

0x3c4d,	// (0x0003564e) control_pane_g3

0x0007,

0xf79b,	// (0x0004119c) control_pane_g_ParamLimits

0xf79b,	// (0x0004119c) control_pane_g

0xb9bc,	// (0x0003d3bd) control_pane_t1_ParamLimits

0xb9bc,	// (0x0003d3bd) control_pane_t1

0xba1a,	// (0x0003d41b) control_pane_t2_ParamLimits

0xba1a,	// (0x0003d41b) control_pane_t2

0x0002,

0xf7ac,	// (0x000411ad) control_pane_t_ParamLimits

0xf7ac,	// (0x000411ad) control_pane_t

0x3b6e,	// (0x0003556f) navi_navi_volume_pane_cp1

0x3b77,	// (0x00035578) status_small_icon_pane

0x3b7f,	// (0x00035580) status_small_pane_g1_ParamLimits

0x3b7f,	// (0x00035580) status_small_pane_g1

0x3bb3,	// (0x000355b4) status_small_pane_g2_ParamLimits

0x3bb3,	// (0x000355b4) status_small_pane_g2

0x3bbf,	// (0x000355c0) status_small_pane_g3_ParamLimits

0x3bbf,	// (0x000355c0) status_small_pane_g3

0x3bcb,	// (0x000355cc) status_small_pane_g4_ParamLimits

0x3bcb,	// (0x000355cc) status_small_pane_g4

0x3bd7,	// (0x000355d8) status_small_pane_g5_ParamLimits

0x3bd7,	// (0x000355d8) status_small_pane_g5

0x3be6,	// (0x000355e7) status_small_pane_g6_ParamLimits

0x3be6,	// (0x000355e7) status_small_pane_g6

0x0007,

0xf78a,	// (0x0004118b) status_small_pane_g_ParamLimits

0xf78a,	// (0x0004118b) status_small_pane_g

0x3c16,	// (0x00035617) status_small_pane_t1

0x3c39,	// (0x0003563a) status_small_wait_pane_ParamLimits

0x3c39,	// (0x0003563a) status_small_wait_pane

0xc52d,	// (0x0003df2e) aid_levels_signal_ParamLimits

0xc52d,	// (0x0003df2e) aid_levels_signal

0xc545,	// (0x0003df46) signal_pane_g1_ParamLimits

0xc545,	// (0x0003df46) signal_pane_g1

0xc560,	// (0x0003df61) signal_pane_g2_ParamLimits

0xc560,	// (0x0003df61) signal_pane_g2

0x0001,

0xf71f,	// (0x00041120) signal_pane_g_ParamLimits

0xf71f,	// (0x00041120) signal_pane_g

0x3453,	// (0x00034e54) context_pane_g1

0xaf68,	// (0x0003c969) title_pane_g1

0xaf9d,	// (0x0003c99e) title_pane_t1

0x2205,	// (0x00033c06) title_pane_t2

0x222b,	// (0x00033c2c) title_pane_t3

0x0002,

0xf573,	// (0x00040f74) title_pane_t

0xd1d5,	// (0x0003ebd6) aid_levels_battery_ParamLimits

0xd1d5,	// (0x0003ebd6) aid_levels_battery

0xd1f1,	// (0x0003ebf2) battery_pane_g1_ParamLimits

0xd1f1,	// (0x0003ebf2) battery_pane_g1

0xd20e,	// (0x0003ec0f) battery_pane_g2_ParamLimits

0xd20e,	// (0x0003ec0f) battery_pane_g2

0x0001,

0xf7be,	// (0x000411bf) battery_pane_g_ParamLimits

0xf7be,	// (0x000411bf) battery_pane_g

0xd431,	// (0x0003ee32) uni_indicator_pane_g1

0xd446,	// (0x0003ee47) uni_indicator_pane_g2

0xd45b,	// (0x0003ee5c) uni_indicator_pane_g3

0x0005,

0xf928,	// (0x00041329) uni_indicator_pane_g

0x37ee,	// (0x000351ef) navi_icon_pane_ParamLimits

0x37ee,	// (0x000351ef) navi_icon_pane

0x3735,	// (0x00035136) navi_midp_pane

0x380a,	// (0x0003520b) navi_navi_pane

0x3814,	// (0x00035215) navi_text_pane_ParamLimits

0x3814,	// (0x00035215) navi_text_pane

0xe084,	// (0x0003fa85) status_small_wait_pane_g1

0x266f,	// (0x00034070) status_small_wait_pane_g2

0x0001,

0xf923,	// (0x00041324) status_small_wait_pane_g

0xd3d0,	// (0x0003edd1) navi_navi_icon_text_pane

0xd3d8,	// (0x0003edd9) navi_navi_pane_g1_ParamLimits

0xd3d8,	// (0x0003edd9) navi_navi_pane_g1

0xd3ea,	// (0x0003edeb) navi_navi_pane_g2_ParamLimits

0xd3ea,	// (0x0003edeb) navi_navi_pane_g2

0x0001,

0xf8f1,	// (0x000412f2) navi_navi_pane_g_ParamLimits

0xf8f1,	// (0x000412f2) navi_navi_pane_g

0x5751,	// (0x00037152) navi_navi_tabs_pane

0xd3fc,	// (0x0003edfd) navi_navi_text_pane

0xd3d0,	// (0x0003edd1) navi_navi_volume_pane

0xd3be,	// (0x0003edbf) navi_text_pane_t1

0xd3b2,	// (0x0003edb3) navi_icon_pane_g1

0x5642,	// (0x00037043) navi_navi_text_pane_t1

0xbcba,	// (0x0003d6bb) navi_navi_volume_pane_g1

0xbcc2,	// (0x0003d6c3) volume_small_pane

0xd30e,	// (0x0003ed0f) navi_navi_icon_text_pane_g1

0xd316,	// (0x0003ed17) navi_navi_icon_text_pane_t1

0x380a,	// (0x0003520b) navi_tabs_2_long_pane

0x380a,	// (0x0003520b) navi_tabs_2_pane

0x380a,	// (0x0003520b) navi_tabs_3_long_pane

0x380a,	// (0x0003520b) navi_tabs_3_pane

0x380a,	// (0x0003520b) navi_tabs_4_pane

0xbc9a,	// (0x0003d69b) tabs_2_active_pane_ParamLimits

0xbc9a,	// (0x0003d69b) tabs_2_active_pane

0xbcaa,	// (0x0003d6ab) tabs_2_passive_pane_ParamLimits

0xbcaa,	// (0x0003d6ab) tabs_2_passive_pane

0xbc68,	// (0x0003d669) tabs_3_active_pane_ParamLimits

0xbc68,	// (0x0003d669) tabs_3_active_pane

0xbc78,	// (0x0003d679) tabs_3_passive_pane_ParamLimits

0xbc78,	// (0x0003d679) tabs_3_passive_pane

0xbc89,	// (0x0003d68a) tabs_3_passive_pane_cp_ParamLimits

0xbc89,	// (0x0003d68a) tabs_3_passive_pane_cp

0xbc24,	// (0x0003d625) tabs_4_active_pane_ParamLimits

0xbc24,	// (0x0003d625) tabs_4_active_pane

0xbc35,	// (0x0003d636) tabs_4_passive_pane_ParamLimits

0xbc35,	// (0x0003d636) tabs_4_passive_pane

0xbc46,	// (0x0003d647) tabs_4_passive_pane_cp_ParamLimits

0xbc46,	// (0x0003d647) tabs_4_passive_pane_cp

0xbc57,	// (0x0003d658) tabs_4_passive_pane_cp2_ParamLimits

0xbc57,	// (0x0003d658) tabs_4_passive_pane_cp2

0xbc00,	// (0x0003d601) tabs_2_long_active_pane_ParamLimits

0xbc00,	// (0x0003d601) tabs_2_long_active_pane

0xbc12,	// (0x0003d613) tabs_2_long_passive_pane_ParamLimits

0xbc12,	// (0x0003d613) tabs_2_long_passive_pane

0xbbb5,	// (0x0003d5b6) tabs_3_long_active_pane_ParamLimits

0xbbb5,	// (0x0003d5b6) tabs_3_long_active_pane

0xbbce,	// (0x0003d5cf) tabs_3_long_passive_pane_ParamLimits

0xbbce,	// (0x0003d5cf) tabs_3_long_passive_pane

0xbbe7,	// (0x0003d5e8) tabs_3_long_passive_pane_cp_ParamLimits

0xbbe7,	// (0x0003d5e8) tabs_3_long_passive_pane_cp

0x0ca1,	// (0x000326a2) volume_small_pane_g1

0xbb64,	// (0x0003d565) volume_small_pane_g2

0xbb6d,	// (0x0003d56e) volume_small_pane_g3

0xbb76,	// (0x0003d577) volume_small_pane_g4

0xbb7f,	// (0x0003d580) volume_small_pane_g5

0xbb88,	// (0x0003d589) volume_small_pane_g6

0xbb91,	// (0x0003d592) volume_small_pane_g7

0xbb9a,	// (0x0003d59b) volume_small_pane_g8

0xbba3,	// (0x0003d5a4) volume_small_pane_g9

0xbbac,	// (0x0003d5ad) volume_small_pane_g10

0x0009,

0xf8bd,	// (0x000412be) volume_small_pane_g

0x24b9,	// (0x00033eba) bg_active_tab_pane_cp2_ParamLimits

0x24b9,	// (0x00033eba) bg_active_tab_pane_cp2

0xb029,	// (0x0003ca2a) tabs_3_active_pane_g1

0xb031,	// (0x0003ca32) tabs_3_active_pane_t1

0x24b9,	// (0x00033eba) bg_passive_tab_pane_cp2_ParamLimits

0x24b9,	// (0x00033eba) bg_passive_tab_pane_cp2

0xb029,	// (0x0003ca2a) tabs_3_passive_pane_g1

0xb031,	// (0x0003ca32) tabs_3_passive_pane_t1

0x24b9,	// (0x00033eba) bg_active_tab_pane_cp3_ParamLimits

0x24b9,	// (0x00033eba) bg_active_tab_pane_cp3

0xb043,	// (0x0003ca44) tabs_4_active_pane_g1

0xb04b,	// (0x0003ca4c) tabs_4_active_pane_t1

0x24b9,	// (0x00033eba) bg_passive_tab_pane_cp3_ParamLimits

0x24b9,	// (0x00033eba) bg_passive_tab_pane_cp3

0xb043,	// (0x0003ca44) tabs_4_1_passive_pane_g1

0xb04b,	// (0x0003ca4c) tabs_4_1_passive_pane_t1

0x3d06,	// (0x00035707) list_highlight_pane_cp2

0xd519,	// (0x0003ef1a) list_set_pane_ParamLimits

0xd519,	// (0x0003ef1a) list_set_pane

0xd5e1,	// (0x0003efe2) main_pane_set_t1_ParamLimits

0xd5e1,	// (0x0003efe2) main_pane_set_t1

0xd601,	// (0x0003f002) main_pane_set_t2_ParamLimits

0xd601,	// (0x0003f002) main_pane_set_t2

0xd615,	// (0x0003f016) main_pane_set_t3_ParamLimits

0xd615,	// (0x0003f016) main_pane_set_t3

0xd629,	// (0x0003f02a) main_pane_set_t4_ParamLimits

0xd629,	// (0x0003f02a) main_pane_set_t4

0x0003,

0xf98d,	// (0x0004138e) main_pane_set_t_ParamLimits

0xf98d,	// (0x0004138e) main_pane_set_t

0xd63d,	// (0x0003f03e) setting_code_pane

0x5ddb,	// (0x000377dc) setting_slider_graphic_pane

0x5ddb,	// (0x000377dc) setting_slider_pane

0x5ddb,	// (0x000377dc) setting_text_pane

0x5ddb,	// (0x000377dc) setting_volume_pane

0xf4da,	// (0x00040edb) volume_set_pane

0x223d,	// (0x00033c3e) bg_set_opt_pane_cp

0xf4e4,	// (0x00040ee5) setting_slider_pane_t1

0xf4fa,	// (0x00040efb) setting_slider_pane_t2

0xf514,	// (0x00040f15) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x00040f7b) setting_slider_pane_t

0xf52c,	// (0x00040f2d) slider_set_pane

0xe08e,	// (0x0003fa8f) bg_set_opt_pane_cp2

0x227f,	// (0x00033c80) setting_slider_graphic_pane_g1

0xf542,	// (0x00040f43) setting_slider_graphic_pane_t1

0xf552,	// (0x00040f53) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x00040f82) setting_slider_graphic_pane_t

0xf562,	// (0x00040f63) slider_set_pane_cp

0xe08e,	// (0x0003fa8f) input_focus_pane_cp1

0x5c62,	// (0x00037663) list_set_text_pane

0xe084,	// (0x0003fa85) setting_text_pane_g1

0xe08e,	// (0x0003fa8f) input_focus_pane_cp2

0xe084,	// (0x0003fa85) setting_code_pane_g1

0x2288,	// (0x00033c89) setting_code_pane_t1

0xefb3,	// (0x000409b4) set_text_pane_t1_ParamLimits

0xefb3,	// (0x000409b4) set_text_pane_t1

0x2b2b,	// (0x0003452c) set_opt_bg_pane_g1

0x2b33,	// (0x00034534) set_opt_bg_pane_g2

0x5c3a,	// (0x0003763b) set_opt_bg_pane_g3

0x2b43,	// (0x00034544) set_opt_bg_pane_g4

0x2b4b,	// (0x0003454c) set_opt_bg_pane_g5

0x2b53,	// (0x00034554) set_opt_bg_pane_g6

0x5c44,	// (0x00037645) set_opt_bg_pane_g7

0x5c4e,	// (0x0003764f) set_opt_bg_pane_g8

0x5c58,	// (0x00037659) set_opt_bg_pane_g9

0x0008,

0xf97a,	// (0x0004137b) set_opt_bg_pane_g

0x5c2d,	// (0x0003762e) slider_set_pane_g1

0x0ead,	// (0x000328ae) slider_set_pane_g2

0x0006,

0xf96b,	// (0x0004136c) slider_set_pane_g

0x0e0d,	// (0x0003280e) volume_set_pane_g1

0x0e17,	// (0x00032818) volume_set_pane_g2

0x0e21,	// (0x00032822) volume_set_pane_g3

0x0e2b,	// (0x0003282c) volume_set_pane_g4

0x0e35,	// (0x00032836) volume_set_pane_g5

0x0e3f,	// (0x00032840) volume_set_pane_g6

0x0e49,	// (0x0003284a) volume_set_pane_g7

0x0e53,	// (0x00032854) volume_set_pane_g8

0x0e5d,	// (0x0003285e) volume_set_pane_g9

0x0e67,	// (0x00032868) volume_set_pane_g10

0x0009,

0xf943,	// (0x00041344) volume_set_pane_g

0xb05d,	// (0x0003ca5e) indicator_pane_ParamLimits

0xb05d,	// (0x0003ca5e) indicator_pane

0xb089,	// (0x0003ca8a) main_idle_pane_g2_ParamLimits

0xb089,	// (0x0003ca8a) main_idle_pane_g2

0xb0c1,	// (0x0003cac2) main_pane_idle_g1_ParamLimits

0xb0c1,	// (0x0003cac2) main_pane_idle_g1

0x22d8,	// (0x00033cd9) popup_clock_digital_analogue_window_ParamLimits

0x22d8,	// (0x00033cd9) popup_clock_digital_analogue_window

0xb0ef,	// (0x0003caf0) soft_indicator_pane_ParamLimits

0xb0ef,	// (0x0003caf0) soft_indicator_pane

0xb10b,	// (0x0003cb0c) wallpaper_pane_ParamLimits

0xb10b,	// (0x0003cb0c) wallpaper_pane

0xe084,	// (0x0003fa85) wallpaper_pane_g1

0xb11d,	// (0x0003cb1e) indicator_pane_g1_ParamLimits

0xb11d,	// (0x0003cb1e) indicator_pane_g1

0x609f,	// (0x00037aa0) navi_navi_icon_text_pane_srt_g1

0x232c,	// (0x00033d2d) soft_indicator_pane_t1

0x2346,	// (0x00033d47) aid_ps_area_pane

0xb136,	// (0x0003cb37) aid_ps_clock_pane

0x2365,	// (0x00033d66) aid_ps_indicator_pane

0x2371,	// (0x00033d72) indicator_ps_pane_ParamLimits

0x2371,	// (0x00033d72) indicator_ps_pane

0x2380,	// (0x00033d81) power_save_pane_g1_ParamLimits

0x2380,	// (0x00033d81) power_save_pane_g1

0x238c,	// (0x00033d8d) power_save_pane_g2_ParamLimits

0x238c,	// (0x00033d8d) power_save_pane_g2

0xeeff,	// (0x00040900) aid_navinavi_width_pane

0x2346,	// (0x00033d47) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x00040f87) power_save_pane_g_ParamLimits

0xf586,	// (0x00040f87) power_save_pane_g

0x239a,	// (0x00033d9b) power_save_pane_t1_ParamLimits

0x239a,	// (0x00033d9b) power_save_pane_t1

0xb136,	// (0x0003cb37) aid_ps_clock_pane_ParamLimits

0x2365,	// (0x00033d66) aid_ps_indicator_pane_ParamLimits

0x23ac,	// (0x00033dad) power_save_pane_t4_ParamLimits

0x23ac,	// (0x00033dad) power_save_pane_t4

0x0001,

0xf58b,	// (0x00040f8c) power_save_pane_t_ParamLimits

0xf58b,	// (0x00040f8c) power_save_pane_t

0x23d6,	// (0x00033dd7) power_save_t3_ParamLimits

0x23d6,	// (0x00033dd7) power_save_t3

0x23c1,	// (0x00033dc2) power_save_t2_ParamLimits

0x23c1,	// (0x00033dc2) power_save_t2

0x23eb,	// (0x00033dec) indicator_ps_pane_g1

0xb144,	// (0x0003cb45) ai_gene_pane_ParamLimits

0xb144,	// (0x0003cb45) ai_gene_pane

0xb15b,	// (0x0003cb5c) ai_links_pane_ParamLimits

0xb15b,	// (0x0003cb5c) ai_links_pane

0xb173,	// (0x0003cb74) indicator_pane_cp1_ParamLimits

0xb173,	// (0x0003cb74) indicator_pane_cp1

0xb182,	// (0x0003cb83) main_pane_idle_g1_cp_ParamLimits

0xb182,	// (0x0003cb83) main_pane_idle_g1_cp

0x2424,	// (0x00033e25) popup_ai_links_title_window

0xb19a,	// (0x0003cb9b) soft_indicator_pane_cp1_ParamLimits

0xb19a,	// (0x0003cb9b) soft_indicator_pane_cp1

0x5a00,	// (0x00037401) ai_links_pane_g1

0x5a09,	// (0x0003740a) grid_ai_links_pane

0xd428,	// (0x0003ee29) ai_gene_pane_1

0x59ee,	// (0x000373ef) ai_gene_pane_2

0x59f7,	// (0x000373f8) list_highlight_pane_cp4

0xd404,	// (0x0003ee05) cell_ai_link_pane_ParamLimits

0xd404,	// (0x0003ee05) cell_ai_link_pane

0x59bd,	// (0x000373be) cell_ai_link_pane_g1

0x266f,	// (0x00034070) cell_ai_link_pane_g2

0x0001,

0xf91e,	// (0x0004131f) cell_ai_link_pane_g

0xe08e,	// (0x0003fa8f) grid_highlight_cp2

0xe08e,	// (0x0003fa8f) bg_popup_sub_pane_cp1

0x2447,	// (0x00033e48) popup_ai_links_title_window_t1

0x5909,	// (0x0003730a) ai_gene_pane_1_g1_ParamLimits

0x5909,	// (0x0003730a) ai_gene_pane_1_g1

0x5915,	// (0x00037316) ai_gene_pane_1_g2_ParamLimits

0x5915,	// (0x00037316) ai_gene_pane_1_g2

0x0001,

0xf914,	// (0x00041315) ai_gene_pane_1_g_ParamLimits

0xf914,	// (0x00041315) ai_gene_pane_1_g

0x5922,	// (0x00037323) ai_gene_pane_1_t1_ParamLimits

0x5922,	// (0x00037323) ai_gene_pane_1_t1

0x5956,	// (0x00037357) grid_ai_soft_ind_pane

0x58f4,	// (0x000372f5) ai_gene_pane_2_t1_ParamLimits

0x58f4,	// (0x000372f5) ai_gene_pane_2_t1

0xb1ae,	// (0x0003cbaf) main_pane_empty_t1_ParamLimits

0xb1ae,	// (0x0003cbaf) main_pane_empty_t1

0xb1c6,	// (0x0003cbc7) main_pane_empty_t2_ParamLimits

0xb1c6,	// (0x0003cbc7) main_pane_empty_t2

0xb1db,	// (0x0003cbdc) main_pane_empty_t3_ParamLimits

0xb1db,	// (0x0003cbdc) main_pane_empty_t3

0xb1ed,	// (0x0003cbee) main_pane_empty_t4_ParamLimits

0xb1ed,	// (0x0003cbee) main_pane_empty_t4

0xb1ff,	// (0x0003cc00) main_pane_empty_t5_ParamLimits

0xb1ff,	// (0x0003cc00) main_pane_empty_t5

0x0004,

0xf590,	// (0x00040f91) main_pane_empty_t_ParamLimits

0xf590,	// (0x00040f91) main_pane_empty_t

0x2b7c,	// (0x0003457d) bg_popup_window_pane_ParamLimits

0x2b7c,	// (0x0003457d) bg_popup_window_pane

0x5650,	// (0x00037051) find_popup_pane_cp2_ParamLimits

0x5650,	// (0x00037051) find_popup_pane_cp2

0x565c,	// (0x0003705d) heading_pane_ParamLimits

0x565c,	// (0x0003705d) heading_pane

0xe08e,	// (0x0003fa8f) bg_popup_sub_pane

0xd333,	// (0x0003ed34) bg_popup_window_pane_g1_ParamLimits

0xd333,	// (0x0003ed34) bg_popup_window_pane_g1

0xd342,	// (0x0003ed43) bg_popup_window_pane_g2_ParamLimits

0xd342,	// (0x0003ed43) bg_popup_window_pane_g2

0xd34e,	// (0x0003ed4f) bg_popup_window_pane_g3_ParamLimits

0xd34e,	// (0x0003ed4f) bg_popup_window_pane_g3

0xd35a,	// (0x0003ed5b) bg_popup_window_pane_g4_ParamLimits

0xd35a,	// (0x0003ed5b) bg_popup_window_pane_g4

0xd369,	// (0x0003ed6a) bg_popup_window_pane_g5_ParamLimits

0xd369,	// (0x0003ed6a) bg_popup_window_pane_g5

0xd379,	// (0x0003ed7a) bg_popup_window_pane_g6_ParamLimits

0xd379,	// (0x0003ed7a) bg_popup_window_pane_g6

0xd385,	// (0x0003ed86) bg_popup_window_pane_g7_ParamLimits

0xd385,	// (0x0003ed86) bg_popup_window_pane_g7

0xd394,	// (0x0003ed95) bg_popup_window_pane_g8_ParamLimits

0xd394,	// (0x0003ed95) bg_popup_window_pane_g8

0xd3a3,	// (0x0003eda4) bg_popup_window_pane_g9_ParamLimits

0xd3a3,	// (0x0003eda4) bg_popup_window_pane_g9

0x5636,	// (0x00037037) bg_popup_window_pane_g10_ParamLimits

0x5636,	// (0x00037037) bg_popup_window_pane_g10

0x0009,

0xf8dc,	// (0x000412dd) bg_popup_window_pane_g_ParamLimits

0xf8dc,	// (0x000412dd) bg_popup_window_pane_g

0x555f,	// (0x00036f60) bg_popup_heading_pane_ParamLimits

0x555f,	// (0x00036f60) bg_popup_heading_pane

0x0fd3,	// (0x000329d4) tabs_4_passive_pane_cp_srt_ParamLimits

0x0fd3,	// (0x000329d4) tabs_4_passive_pane_cp_srt

0x0fe5,	// (0x000329e6) tabs_4_passive_pane_srt_ParamLimits

0x5573,	// (0x00036f74) heading_pane_g2

0x0fe5,	// (0x000329e6) tabs_4_passive_pane_srt

0x4934,	// (0x00036335) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4934,	// (0x00036335) bg_passive_tab_pane_cp3_srt

0x557b,	// (0x00036f7c) heading_pane_t1_ParamLimits

0x557b,	// (0x00036f7c) heading_pane_t1

0x5592,	// (0x00036f93) heading_pane_t2_ParamLimits

0x5592,	// (0x00036f93) heading_pane_t2

0x0001,

0xf8d7,	// (0x000412d8) heading_pane_t_ParamLimits

0xf8d7,	// (0x000412d8) heading_pane_t

0x508a,	// (0x00036a8b) bg_popup_heading_pane_g1

0x5139,	// (0x00036b3a) bg_popup_heading_pane_g2

0x5143,	// (0x00036b44) bg_popup_heading_pane_g3

0x514d,	// (0x00036b4e) bg_popup_heading_pane_g4

0x5157,	// (0x00036b58) bg_popup_heading_pane_g5

0x5161,	// (0x00036b62) bg_popup_heading_pane_g6

0x5169,	// (0x00036b6a) bg_popup_heading_pane_g7

0x5171,	// (0x00036b72) bg_popup_heading_pane_g8

0x517b,	// (0x00036b7c) bg_popup_heading_pane_g9

0x0008,

0xf893,	// (0x00041294) bg_popup_heading_pane_g

0x4842,	// (0x00036243) bg_popup_sub_pane_g1

0x4852,	// (0x00036253) bg_popup_sub_pane_g2

0x484a,	// (0x0003624b) bg_popup_sub_pane_g3

0x4862,	// (0x00036263) bg_popup_sub_pane_g4

0x485a,	// (0x0003625b) bg_popup_sub_pane_g5

0x486a,	// (0x0003626b) bg_popup_sub_pane_g6

0x4872,	// (0x00036273) bg_popup_sub_pane_g7

0x4882,	// (0x00036283) bg_popup_sub_pane_g8

0x487a,	// (0x0003627b) bg_popup_sub_pane_g9

0x0008,

0xf86d,	// (0x0004126e) bg_popup_sub_pane_g

0x24b9,	// (0x00033eba) bg_popup_window_pane_cp5_ParamLimits

0x24b9,	// (0x00033eba) bg_popup_window_pane_cp5

0x24d5,	// (0x00033ed6) popup_note_window_g1_ParamLimits

0x24d5,	// (0x00033ed6) popup_note_window_g1

0x24e1,	// (0x00033ee2) popup_note_window_t1_ParamLimits

0x24e1,	// (0x00033ee2) popup_note_window_t1

0x24f7,	// (0x00033ef8) popup_note_window_t2_ParamLimits

0x24f7,	// (0x00033ef8) popup_note_window_t2

0x250d,	// (0x00033f0e) popup_note_window_t3_ParamLimits

0x250d,	// (0x00033f0e) popup_note_window_t3

0x2523,	// (0x00033f24) popup_note_window_t4_ParamLimits

0x2523,	// (0x00033f24) popup_note_window_t4

0x254b,	// (0x00033f4c) popup_note_window_t5_ParamLimits

0x254b,	// (0x00033f4c) popup_note_window_t5

0x0004,

0xf59b,	// (0x00040f9c) popup_note_window_t_ParamLimits

0xf59b,	// (0x00040f9c) popup_note_window_t

0x256f,	// (0x00033f70) bg_popup_window_pane_cp6_ParamLimits

0x256f,	// (0x00033f70) bg_popup_window_pane_cp6

0x5006,	// (0x00036a07) popup_note_image_window_g1_ParamLimits

0x5006,	// (0x00036a07) popup_note_image_window_g1

0x5012,	// (0x00036a13) popup_note_image_window_g2_ParamLimits

0x5012,	// (0x00036a13) popup_note_image_window_g2

0x0001,

0xf861,	// (0x00041262) popup_note_image_window_g_ParamLimits

0xf861,	// (0x00041262) popup_note_image_window_g

0x502b,	// (0x00036a2c) popup_note_image_window_t1_ParamLimits

0x502b,	// (0x00036a2c) popup_note_image_window_t1

0x5044,	// (0x00036a45) popup_note_image_window_t2_ParamLimits

0x5044,	// (0x00036a45) popup_note_image_window_t2

0x505d,	// (0x00036a5e) popup_note_image_window_t3_ParamLimits

0x505d,	// (0x00036a5e) popup_note_image_window_t3

0x0002,

0xf866,	// (0x00041267) popup_note_image_window_t_ParamLimits

0xf866,	// (0x00041267) popup_note_image_window_t

0x4ec6,	// (0x000368c7) bg_popup_window_pane_cp7_ParamLimits

0x4ec6,	// (0x000368c7) bg_popup_window_pane_cp7

0x4ef6,	// (0x000368f7) popup_note_wait_window_g1_ParamLimits

0x4ef6,	// (0x000368f7) popup_note_wait_window_g1

0x4f02,	// (0x00036903) popup_note_wait_window_g2_ParamLimits

0x4f02,	// (0x00036903) popup_note_wait_window_g2

0x0002,

0xf84f,	// (0x00041250) popup_note_wait_window_g_ParamLimits

0xf84f,	// (0x00041250) popup_note_wait_window_g

0x4f1a,	// (0x0003691b) popup_note_wait_window_t1_ParamLimits

0x4f1a,	// (0x0003691b) popup_note_wait_window_t1

0x4f41,	// (0x00036942) popup_note_wait_window_t2_ParamLimits

0x4f41,	// (0x00036942) popup_note_wait_window_t2

0x4f5f,	// (0x00036960) popup_note_wait_window_t3_ParamLimits

0x4f5f,	// (0x00036960) popup_note_wait_window_t3

0x4f72,	// (0x00036973) popup_note_wait_window_t4_ParamLimits

0x4f72,	// (0x00036973) popup_note_wait_window_t4

0x0004,

0xf856,	// (0x00041257) popup_note_wait_window_t_ParamLimits

0xf856,	// (0x00041257) popup_note_wait_window_t

0x4f97,	// (0x00036998) wait_bar_pane_ParamLimits

0x4f97,	// (0x00036998) wait_bar_pane

0xe08e,	// (0x0003fa8f) wait_anim_pane

0xe08e,	// (0x0003fa8f) wait_border_pane

0xe084,	// (0x0003fa85) wait_anim_pane_g1

0xe084,	// (0x0003fa85) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x0004111b) wait_anim_pane_g

0x4e6a,	// (0x0003686b) wait_border_pane_g1

0x4e75,	// (0x00036876) wait_border_pane_g2

0x4e7e,	// (0x0003687f) wait_border_pane_g3

0x0002,

0xf848,	// (0x00041249) wait_border_pane_g

0x4cd4,	// (0x000366d5) bg_popup_window_pane_cp16_ParamLimits

0x4cd4,	// (0x000366d5) bg_popup_window_pane_cp16

0x4dd4,	// (0x000367d5) indicator_popup_pane_cp4_ParamLimits

0x4dd4,	// (0x000367d5) indicator_popup_pane_cp4

0x4de8,	// (0x000367e9) popup_query_data_window_t1_ParamLimits

0x4de8,	// (0x000367e9) popup_query_data_window_t1

0x4dfa,	// (0x000367fb) popup_query_data_window_t2_ParamLimits

0x4dfa,	// (0x000367fb) popup_query_data_window_t2

0x4e13,	// (0x00036814) popup_query_data_window_t3_ParamLimits

0x4e13,	// (0x00036814) popup_query_data_window_t3

0x0002,

0xf841,	// (0x00041242) popup_query_data_window_t_ParamLimits

0xf841,	// (0x00041242) popup_query_data_window_t

0x4e2d,	// (0x0003682e) query_popup_data_pane_ParamLimits

0x4e2d,	// (0x0003682e) query_popup_data_pane

0x4e41,	// (0x00036842) query_popup_data_pane_cp1_ParamLimits

0x4e41,	// (0x00036842) query_popup_data_pane_cp1

0x4cd4,	// (0x000366d5) bg_popup_window_pane_cp10_ParamLimits

0x4cd4,	// (0x000366d5) bg_popup_window_pane_cp10

0x4d06,	// (0x00036707) indicator_popup_pane_ParamLimits

0x4d06,	// (0x00036707) indicator_popup_pane

0x4d28,	// (0x00036729) popup_query_code_window_t1_ParamLimits

0x4d28,	// (0x00036729) popup_query_code_window_t1

0x4d42,	// (0x00036743) popup_query_code_window_t2_ParamLimits

0x4d42,	// (0x00036743) popup_query_code_window_t2

0x4d8b,	// (0x0003678c) popup_query_code_window_t3_ParamLimits

0x4d8b,	// (0x0003678c) popup_query_code_window_t3

0x0002,

0xf83a,	// (0x0004123b) popup_query_code_window_t_ParamLimits

0xf83a,	// (0x0004123b) popup_query_code_window_t

0x4dba,	// (0x000367bb) query_popup_pane_ParamLimits

0x4dba,	// (0x000367bb) query_popup_pane

0x256f,	// (0x00033f70) bg_popup_window_pane_cp15_ParamLimits

0x256f,	// (0x00033f70) bg_popup_window_pane_cp15

0x258f,	// (0x00033f90) indicator_popup_pane_cp1_ParamLimits

0x258f,	// (0x00033f90) indicator_popup_pane_cp1

0x25a2,	// (0x00033fa3) indicator_popup_pane_cp2_ParamLimits

0x25a2,	// (0x00033fa3) indicator_popup_pane_cp2

0x25bd,	// (0x00033fbe) popup_query_data_code_window_g1_ParamLimits

0x25bd,	// (0x00033fbe) popup_query_data_code_window_g1

0x25d0,	// (0x00033fd1) popup_query_data_code_window_t1_ParamLimits

0x25d0,	// (0x00033fd1) popup_query_data_code_window_t1

0x25e2,	// (0x00033fe3) popup_query_data_code_window_t2_ParamLimits

0x25e2,	// (0x00033fe3) popup_query_data_code_window_t2

0x25f4,	// (0x00033ff5) popup_query_data_code_window_t3_ParamLimits

0x25f4,	// (0x00033ff5) popup_query_data_code_window_t3

0x260a,	// (0x0003400b) popup_query_data_code_window_t4_ParamLimits

0x260a,	// (0x0003400b) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x00040fa7) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x00040fa7) popup_query_data_code_window_t

0x0b39,	// (0x0003253a) list_single_midp_graphic_pane_g3

0x2624,	// (0x00034025) query_popup_data_pane_cp2_ParamLimits

0x2637,	// (0x00034038) query_popup_pane_cp2_ParamLimits

0x2637,	// (0x00034038) query_popup_pane_cp2

0xe08e,	// (0x0003fa8f) bg_popup_window_pane_cp11

0x4ccc,	// (0x000366cd) heading_pane_cp5

0x2727,	// (0x00034128) listscroll_popup_info_pane

0xe08e,	// (0x0003fa8f) input_focus_pane_cp3

0x2652,	// (0x00034053) query_popup_pane_t1

0x2660,	// (0x00034061) list_popup_info_pane_ParamLimits

0x2660,	// (0x00034061) list_popup_info_pane

0x266f,	// (0x00034070) listscroll_popup_info_pane_g1

0x2677,	// (0x00034078) scroll_pane_cp7

0x2681,	// (0x00034082) popup_info_list_pane_t1_ParamLimits

0x2681,	// (0x00034082) popup_info_list_pane_t1

0x269b,	// (0x0003409c) popup_info_list_pane_t2_ParamLimits

0x269b,	// (0x0003409c) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x00040fb0) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x00040fb0) popup_info_list_pane_t

0xe08e,	// (0x0003fa8f) bg_popup_window_pane_cp12

0x60b9,	// (0x00037aba) find_popup_pane

0x223d,	// (0x00033c3e) bg_popup_window_pane_cp3

0x26b5,	// (0x000340b6) heading_pane_cp3

0x26c1,	// (0x000340c2) listscroll_popup_graphic_pane

0xe08e,	// (0x0003fa8f) bg_popup_window_pane_cp4

0xb261,	// (0x0003cc62) heading_pane_cp4

0x2727,	// (0x00034128) listscroll_popup_colour_pane

0xb26b,	// (0x0003cc6c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb26b,	// (0x0003cc6c) cell_large_graphic_colour_none_popup_pane

0xb27f,	// (0x0003cc80) grid_large_graphic_colour_popup_pane_ParamLimits

0xb27f,	// (0x0003cc80) grid_large_graphic_colour_popup_pane

0xb2ab,	// (0x0003ccac) listscroll_popup_colour_pane_g1_ParamLimits

0xb2ab,	// (0x0003ccac) listscroll_popup_colour_pane_g1

0xb2c2,	// (0x0003ccc3) listscroll_popup_colour_pane_g2_ParamLimits

0xb2c2,	// (0x0003ccc3) listscroll_popup_colour_pane_g2

0xb2d9,	// (0x0003ccda) listscroll_popup_colour_pane_g3_ParamLimits

0xb2d9,	// (0x0003ccda) listscroll_popup_colour_pane_g3

0xb2e9,	// (0x0003ccea) listscroll_popup_colour_pane_g4_ParamLimits

0xb2e9,	// (0x0003ccea) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x00040fb5) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x00040fb5) listscroll_popup_colour_pane_g

0x27c1,	// (0x000341c2) scroll_pane_cp6_ParamLimits

0x27c1,	// (0x000341c2) scroll_pane_cp6

0xb2fd,	// (0x0003ccfe) cell_large_graphic_colour_popup_pane_ParamLimits

0xb2fd,	// (0x0003ccfe) cell_large_graphic_colour_popup_pane

0x27f8,	// (0x000341f9) cell_large_graphic_colour_none_popup_pane_t1

0xe08e,	// (0x0003fa8f) grid_highlight_pane_cp5

0x2807,	// (0x00034208) cell_large_graphic_colour_popup_pane_g1

0x280f,	// (0x00034210) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x00040fbe) cell_large_graphic_colour_popup_pane_g

0x2817,	// (0x00034218) cell_large_graphic_colour_popup_pane_g2_copy1

0x2820,	// (0x00034221) grid_highlight_pane_cp4

0x2828,	// (0x00034229) bg_popup_window_pane_cp8_ParamLimits

0x2828,	// (0x00034229) bg_popup_window_pane_cp8

0x2843,	// (0x00034244) popup_snote_single_text_window_g1_ParamLimits

0x2843,	// (0x00034244) popup_snote_single_text_window_g1

0x2855,	// (0x00034256) popup_snote_single_text_window_t1_ParamLimits

0x2855,	// (0x00034256) popup_snote_single_text_window_t1

0x2868,	// (0x00034269) popup_snote_single_text_window_t2_ParamLimits

0x2868,	// (0x00034269) popup_snote_single_text_window_t2

0x287b,	// (0x0003427c) popup_snote_single_text_window_t3_ParamLimits

0x287b,	// (0x0003427c) popup_snote_single_text_window_t3

0x28b4,	// (0x000342b5) popup_snote_single_text_window_t4_ParamLimits

0x28b4,	// (0x000342b5) popup_snote_single_text_window_t4

0x28e8,	// (0x000342e9) popup_snote_single_text_window_t5_ParamLimits

0x28e8,	// (0x000342e9) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x00040fc3) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x00040fc3) popup_snote_single_text_window_t

0x2917,	// (0x00034318) bg_popup_window_pane_cp9_ParamLimits

0x2917,	// (0x00034318) bg_popup_window_pane_cp9

0x2843,	// (0x00034244) popup_snote_single_graphic_window_g1_ParamLimits

0x2843,	// (0x00034244) popup_snote_single_graphic_window_g1

0x2925,	// (0x00034326) popup_snote_single_graphic_window_g2_ParamLimits

0x2925,	// (0x00034326) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x00040fce) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x00040fce) popup_snote_single_graphic_window_g

0x2931,	// (0x00034332) popup_snote_single_graphic_window_t1_ParamLimits

0x2931,	// (0x00034332) popup_snote_single_graphic_window_t1

0x2944,	// (0x00034345) popup_snote_single_graphic_window_t2_ParamLimits

0x2944,	// (0x00034345) popup_snote_single_graphic_window_t2

0x2957,	// (0x00034358) popup_snote_single_graphic_window_t3_ParamLimits

0x2957,	// (0x00034358) popup_snote_single_graphic_window_t3

0x2990,	// (0x00034391) popup_snote_single_graphic_window_t4_ParamLimits

0x2990,	// (0x00034391) popup_snote_single_graphic_window_t4

0x29c4,	// (0x000343c5) popup_snote_single_graphic_window_t5_ParamLimits

0x29c4,	// (0x000343c5) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x00040fd3) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x00040fd3) popup_snote_single_graphic_window_t

0x5ff7,	// (0x000379f8) grid_graphic_popup_pane_ParamLimits

0x5ff7,	// (0x000379f8) grid_graphic_popup_pane

0x6025,	// (0x00037a26) listscroll_popup_graphic_pane_g1_ParamLimits

0x6025,	// (0x00037a26) listscroll_popup_graphic_pane_g1

0xd73d,	// (0x0003f13e) listscroll_popup_graphic_pane_g2_ParamLimits

0xd73d,	// (0x0003f13e) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b7,	// (0x000413b8) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b7,	// (0x000413b8) listscroll_popup_graphic_pane_g

0x604d,	// (0x00037a4e) scroll_pane_cp5

0xd6fd,	// (0x0003f0fe) cell_graphic_popup_pane_ParamLimits

0xd6fd,	// (0x0003f0fe) cell_graphic_popup_pane

0x5f80,	// (0x00037981) cell_graphic_popup_pane_g1

0x5f88,	// (0x00037989) cell_graphic_popup_pane_g2

0x2817,	// (0x00034218) cell_graphic_popup_pane_g3

0x0002,

0xf9b0,	// (0x000413b1) cell_graphic_popup_pane_g

0x5f91,	// (0x00037992) cell_graphic_popup_pane_t2

0x2820,	// (0x00034221) grid_highlight_pane_cp3

0x2a05,	// (0x00034406) list_gen_pane_ParamLimits

0x2a05,	// (0x00034406) list_gen_pane

0x2a37,	// (0x00034438) scroll_pane

0xd6b8,	// (0x0003f0b9) bg_list_pane_g1_ParamLimits

0xd6b8,	// (0x0003f0b9) bg_list_pane_g1

0x5efd,	// (0x000378fe) bg_list_pane_g2_ParamLimits

0x5efd,	// (0x000378fe) bg_list_pane_g2

0x5f10,	// (0x00037911) bg_list_pane_g3_ParamLimits

0x5f10,	// (0x00037911) bg_list_pane_g3

0x5f22,	// (0x00037923) bg_list_pane_g4_ParamLimits

0x5f22,	// (0x00037923) bg_list_pane_g4

0xd6d3,	// (0x0003f0d4) bg_list_pane_g5_ParamLimits

0xd6d3,	// (0x0003f0d4) bg_list_pane_g5

0x0004,

0xf9a5,	// (0x000413a6) bg_list_pane_g_ParamLimits

0xf9a5,	// (0x000413a6) bg_list_pane_g

0xd67b,	// (0x0003f07c) list_double2_graphic_large_graphic_pane_ParamLimits

0xd67b,	// (0x0003f07c) list_double2_graphic_large_graphic_pane

0xd67b,	// (0x0003f07c) list_double2_graphic_pane_ParamLimits

0xd67b,	// (0x0003f07c) list_double2_graphic_pane

0xd67b,	// (0x0003f07c) list_double2_large_graphic_pane_ParamLimits

0xd67b,	// (0x0003f07c) list_double2_large_graphic_pane

0xd67b,	// (0x0003f07c) list_double2_pane_ParamLimits

0xd67b,	// (0x0003f07c) list_double2_pane

0xd67b,	// (0x0003f07c) list_double_graphic_heading_pane_ParamLimits

0xd67b,	// (0x0003f07c) list_double_graphic_heading_pane

0xd67b,	// (0x0003f07c) list_double_graphic_pane_ParamLimits

0xd67b,	// (0x0003f07c) list_double_graphic_pane

0xd67b,	// (0x0003f07c) list_double_heading_pane_ParamLimits

0xd67b,	// (0x0003f07c) list_double_heading_pane

0xd67b,	// (0x0003f07c) list_double_large_graphic_pane_ParamLimits

0xd67b,	// (0x0003f07c) list_double_large_graphic_pane

0xd67b,	// (0x0003f07c) list_double_number_pane_ParamLimits

0xd67b,	// (0x0003f07c) list_double_number_pane

0xd67b,	// (0x0003f07c) list_double_pane_ParamLimits

0xd67b,	// (0x0003f07c) list_double_pane

0xd67b,	// (0x0003f07c) list_double_time_pane_ParamLimits

0xd67b,	// (0x0003f07c) list_double_time_pane

0xd67b,	// (0x0003f07c) list_setting_number_pane_ParamLimits

0xd67b,	// (0x0003f07c) list_setting_number_pane

0xd67b,	// (0x0003f07c) list_setting_pane_ParamLimits

0xd67b,	// (0x0003f07c) list_setting_pane

0xbd09,	// (0x0003d70a) list_single_2graphic_pane_ParamLimits

0xbd09,	// (0x0003d70a) list_single_2graphic_pane

0xbd09,	// (0x0003d70a) list_single_graphic_heading_pane_ParamLimits

0xbd09,	// (0x0003d70a) list_single_graphic_heading_pane

0xbd09,	// (0x0003d70a) list_single_graphic_pane_ParamLimits

0xbd09,	// (0x0003d70a) list_single_graphic_pane

0xbd09,	// (0x0003d70a) list_single_heading_pane_ParamLimits

0xbd09,	// (0x0003d70a) list_single_heading_pane

0xd6a3,	// (0x0003f0a4) list_single_large_graphic_pane_ParamLimits

0xd6a3,	// (0x0003f0a4) list_single_large_graphic_pane

0xbd09,	// (0x0003d70a) list_single_number_heading_pane_ParamLimits

0xbd09,	// (0x0003d70a) list_single_number_heading_pane

0xbd09,	// (0x0003d70a) list_single_number_pane_ParamLimits

0xbd09,	// (0x0003d70a) list_single_number_pane

0xbd09,	// (0x0003d70a) list_single_pane_ParamLimits

0xbd09,	// (0x0003d70a) list_single_pane

0xe08e,	// (0x0003fa8f) list_highlight_pane_cp1

0x0b68,	// (0x00032569) list_single_pane_g1_ParamLimits

0x0b68,	// (0x00032569) list_single_pane_g1

0x0b74,	// (0x00032575) list_single_pane_g2_ParamLimits

0x0b74,	// (0x00032575) list_single_pane_g2

0x0001,

0xf5e4,	// (0x00040fe5) list_single_pane_g_ParamLimits

0xf5e4,	// (0x00040fe5) list_single_pane_g

0x10c6,	// (0x00032ac7) list_single_pane_t1_ParamLimits

0x10c6,	// (0x00032ac7) list_single_pane_t1

0x0b68,	// (0x00032569) list_single_number_pane_g1_ParamLimits

0x0b68,	// (0x00032569) list_single_number_pane_g1

0x0b74,	// (0x00032575) list_single_number_pane_g2_ParamLimits

0x0b74,	// (0x00032575) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x00040fe5) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x00040fe5) list_single_number_pane_g

0x0afe,	// (0x000324ff) list_single_number_pane_t1_ParamLimits

0x0afe,	// (0x000324ff) list_single_number_pane_t1

0xbccb,	// (0x0003d6cc) list_single_number_pane_t2_ParamLimits

0xbccb,	// (0x0003d6cc) list_single_number_pane_t2

0x0001,

0xf966,	// (0x00041367) list_single_number_pane_t_ParamLimits

0xf966,	// (0x00041367) list_single_number_pane_t

0xb328,	// (0x0003cd29) list_single_graphic_pane_g1_ParamLimits

0xb328,	// (0x0003cd29) list_single_graphic_pane_g1

0x0b68,	// (0x00032569) list_single_graphic_pane_g2_ParamLimits

0x0b68,	// (0x00032569) list_single_graphic_pane_g2

0x0b74,	// (0x00032575) list_single_graphic_pane_g3_ParamLimits

0x0b74,	// (0x00032575) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x00040fde) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x00040fde) list_single_graphic_pane_g

0xb334,	// (0x0003cd35) list_single_graphic_pane_t1_ParamLimits

0xb334,	// (0x0003cd35) list_single_graphic_pane_t1

0x0b68,	// (0x00032569) list_single_heading_pane_g1_ParamLimits

0x0b68,	// (0x00032569) list_single_heading_pane_g1

0x0b74,	// (0x00032575) list_single_heading_pane_g2_ParamLimits

0x0b74,	// (0x00032575) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x00040fe5) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x00040fe5) list_single_heading_pane_g

0xb34a,	// (0x0003cd4b) list_single_heading_pane_t1_ParamLimits

0xb34a,	// (0x0003cd4b) list_single_heading_pane_t1

0xb360,	// (0x0003cd61) list_single_heading_pane_t2_ParamLimits

0xb360,	// (0x0003cd61) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x00040fea) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x00040fea) list_single_heading_pane_t

0x0b68,	// (0x00032569) list_single_number_heading_pane_g1_ParamLimits

0x0b68,	// (0x00032569) list_single_number_heading_pane_g1

0x0b74,	// (0x00032575) list_single_number_heading_pane_g2_ParamLimits

0x0b74,	// (0x00032575) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x00040fe5) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x00040fe5) list_single_number_heading_pane_g

0xb34a,	// (0x0003cd4b) list_single_number_heading_pane_t1_ParamLimits

0xb34a,	// (0x0003cd4b) list_single_number_heading_pane_t1

0xb372,	// (0x0003cd73) list_single_number_heading_pane_t2_ParamLimits

0xb372,	// (0x0003cd73) list_single_number_heading_pane_t2

0x10a0,	// (0x00032aa1) list_single_number_heading_pane_t3_ParamLimits

0x10a0,	// (0x00032aa1) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x00040fef) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x00040fef) list_single_number_heading_pane_t

0x0ada,	// (0x000324db) list_single_graphic_heading_pane_g1_ParamLimits

0x0ada,	// (0x000324db) list_single_graphic_heading_pane_g1

0xb384,	// (0x0003cd85) list_single_graphic_heading_pane_g4_ParamLimits

0xb384,	// (0x0003cd85) list_single_graphic_heading_pane_g4

0x0b74,	// (0x00032575) list_single_graphic_heading_pane_g5_ParamLimits

0x0b74,	// (0x00032575) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x00040ff6) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x00040ff6) list_single_graphic_heading_pane_g

0xb34a,	// (0x0003cd4b) list_single_graphic_heading_pane_t1_ParamLimits

0xb34a,	// (0x0003cd4b) list_single_graphic_heading_pane_t1

0xb395,	// (0x0003cd96) list_single_graphic_heading_pane_t2_ParamLimits

0xb395,	// (0x0003cd96) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x00040ffd) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x00040ffd) list_single_graphic_heading_pane_t

0x10dc,	// (0x00032add) list_single_large_graphic_pane_g1_ParamLimits

0x10dc,	// (0x00032add) list_single_large_graphic_pane_g1

0x10e8,	// (0x00032ae9) list_single_large_graphic_pane_g2_ParamLimits

0x10e8,	// (0x00032ae9) list_single_large_graphic_pane_g2

0x10f4,	// (0x00032af5) list_single_large_graphic_pane_g3_ParamLimits

0x10f4,	// (0x00032af5) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x00041002) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00041002) list_single_large_graphic_pane_g

0x4e75,	// (0x00036876) wait_border_pane_g2_copy1

0xb3a7,	// (0x0003cda8) list_single_large_graphic_pane_g4_cp2

0x1100,	// (0x00032b01) list_single_large_graphic_pane_t1_ParamLimits

0x1100,	// (0x00032b01) list_single_large_graphic_pane_t1

0xb3af,	// (0x0003cdb0) list_double_pane_g1_ParamLimits

0xb3af,	// (0x0003cdb0) list_double_pane_g1

0xb3bb,	// (0x0003cdbc) list_double_pane_g2_ParamLimits

0xb3bb,	// (0x0003cdbc) list_double_pane_g2

0x0001,

0xf608,	// (0x00041009) list_double_pane_g_ParamLimits

0xf608,	// (0x00041009) list_double_pane_g

0xb3c7,	// (0x0003cdc8) list_double_pane_t1_ParamLimits

0xb3c7,	// (0x0003cdc8) list_double_pane_t1

0xb3dd,	// (0x0003cdde) list_double_pane_t2_ParamLimits

0xb3dd,	// (0x0003cdde) list_double_pane_t2

0x0001,

0xf60d,	// (0x0004100e) list_double_pane_t_ParamLimits

0xf60d,	// (0x0004100e) list_double_pane_t

0xb3ef,	// (0x0003cdf0) list_double2_pane_g1_ParamLimits

0xb3ef,	// (0x0003cdf0) list_double2_pane_g1

0xb3bb,	// (0x0003cdbc) list_double2_pane_g2_ParamLimits

0xb3bb,	// (0x0003cdbc) list_double2_pane_g2

0x0001,

0xf612,	// (0x00041013) list_double2_pane_g_ParamLimits

0xf612,	// (0x00041013) list_double2_pane_g

0xb3c7,	// (0x0003cdc8) list_double2_pane_t1_ParamLimits

0xb3c7,	// (0x0003cdc8) list_double2_pane_t1

0xb400,	// (0x0003ce01) list_double2_pane_t2_ParamLimits

0xb400,	// (0x0003ce01) list_double2_pane_t2

0x0001,

0xf617,	// (0x00041018) list_double2_pane_t_ParamLimits

0xf617,	// (0x00041018) list_double2_pane_t

0xb3af,	// (0x0003cdb0) list_double_number_pane_g1_ParamLimits

0xb3af,	// (0x0003cdb0) list_double_number_pane_g1

0xb3bb,	// (0x0003cdbc) list_double_number_pane_g2_ParamLimits

0xb3bb,	// (0x0003cdbc) list_double_number_pane_g2

0x0001,

0xf608,	// (0x00041009) list_double_number_pane_g_ParamLimits

0xf608,	// (0x00041009) list_double_number_pane_g

0xb412,	// (0x0003ce13) list_double_number_pane_t1_ParamLimits

0xb412,	// (0x0003ce13) list_double_number_pane_t1

0xb424,	// (0x0003ce25) list_double_number_pane_t2_ParamLimits

0xb424,	// (0x0003ce25) list_double_number_pane_t2

0xb43a,	// (0x0003ce3b) list_double_number_pane_t3_ParamLimits

0xb43a,	// (0x0003ce3b) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0004101d) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0004101d) list_double_number_pane_t

0xb44c,	// (0x0003ce4d) list_double_graphic_pane_g1_ParamLimits

0xb44c,	// (0x0003ce4d) list_double_graphic_pane_g1

0xb458,	// (0x0003ce59) list_double_graphic_pane_g2_ParamLimits

0xb458,	// (0x0003ce59) list_double_graphic_pane_g2

0xb467,	// (0x0003ce68) list_double_graphic_pane_g3_ParamLimits

0xb467,	// (0x0003ce68) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x00041024) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x00041024) list_double_graphic_pane_g

0xb47f,	// (0x0003ce80) list_double_graphic_pane_t1_ParamLimits

0xb47f,	// (0x0003ce80) list_double_graphic_pane_t1

0xb495,	// (0x0003ce96) list_double_graphic_pane_t2_ParamLimits

0xb495,	// (0x0003ce96) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0004102d) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0004102d) list_double_graphic_pane_t

0xb44c,	// (0x0003ce4d) list_double2_graphic_pane_g1_ParamLimits

0xb44c,	// (0x0003ce4d) list_double2_graphic_pane_g1

0xb4a7,	// (0x0003cea8) list_double2_graphic_pane_g2_ParamLimits

0xb4a7,	// (0x0003cea8) list_double2_graphic_pane_g2

0xb4b3,	// (0x0003ceb4) list_double2_graphic_pane_g3_ParamLimits

0xb4b3,	// (0x0003ceb4) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x00041032) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x00041032) list_double2_graphic_pane_g

0xb424,	// (0x0003ce25) list_double2_graphic_pane_t1_ParamLimits

0xb424,	// (0x0003ce25) list_double2_graphic_pane_t1

0xb4bf,	// (0x0003cec0) list_double2_graphic_pane_t2_ParamLimits

0xb4bf,	// (0x0003cec0) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x00041039) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x00041039) list_double2_graphic_pane_t

0xb4d1,	// (0x0003ced2) list_double_large_graphic_pane_g1_ParamLimits

0xb4d1,	// (0x0003ced2) list_double_large_graphic_pane_g1

0xb3ef,	// (0x0003cdf0) list_double_large_graphic_pane_g2_ParamLimits

0xb3ef,	// (0x0003cdf0) list_double_large_graphic_pane_g2

0xb3bb,	// (0x0003cdbc) list_double_large_graphic_pane_g3_ParamLimits

0xb3bb,	// (0x0003cdbc) list_double_large_graphic_pane_g3

0xb4fc,	// (0x0003cefd) list_double_large_graphic_pane_g4_ParamLimits

0xb4fc,	// (0x0003cefd) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0004103e) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0004103e) list_double_large_graphic_pane_g

0xb50e,	// (0x0003cf0f) list_double_large_graphic_pane_t1_ParamLimits

0xb50e,	// (0x0003cf0f) list_double_large_graphic_pane_t1

0xb527,	// (0x0003cf28) list_double_large_graphic_pane_t2_ParamLimits

0xb527,	// (0x0003cf28) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x00041049) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x00041049) list_double_large_graphic_pane_t

0xb539,	// (0x0003cf3a) list_double2_large_graphic_pane_g1_ParamLimits

0xb539,	// (0x0003cf3a) list_double2_large_graphic_pane_g1

0xb3ef,	// (0x0003cdf0) list_double2_large_graphic_pane_g2_ParamLimits

0xb3ef,	// (0x0003cdf0) list_double2_large_graphic_pane_g2

0xb3bb,	// (0x0003cdbc) list_double2_large_graphic_pane_g3_ParamLimits

0xb3bb,	// (0x0003cdbc) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0004104e) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0004104e) list_double2_large_graphic_pane_g

0xb545,	// (0x0003cf46) list_double2_large_graphic_pane_t1_ParamLimits

0xb545,	// (0x0003cf46) list_double2_large_graphic_pane_t1

0xb55b,	// (0x0003cf5c) list_double2_large_graphic_pane_t2_ParamLimits

0xb55b,	// (0x0003cf5c) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x00041055) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x00041055) list_double2_large_graphic_pane_t

0xb56d,	// (0x0003cf6e) list_double_heading_pane_g1_ParamLimits

0xb56d,	// (0x0003cf6e) list_double_heading_pane_g1

0xb57e,	// (0x0003cf7f) list_double_heading_pane_g2_ParamLimits

0xb57e,	// (0x0003cf7f) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0004105a) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0004105a) list_double_heading_pane_g

0xb58a,	// (0x0003cf8b) list_double_heading_pane_t1_ParamLimits

0xb58a,	// (0x0003cf8b) list_double_heading_pane_t1

0xb5a0,	// (0x0003cfa1) list_double_heading_pane_t2_ParamLimits

0xb5a0,	// (0x0003cfa1) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0004105f) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0004105f) list_double_heading_pane_t

0xb5b2,	// (0x0003cfb3) list_double_graphic_heading_pane_g1_ParamLimits

0xb5b2,	// (0x0003cfb3) list_double_graphic_heading_pane_g1

0xb56d,	// (0x0003cf6e) list_double_graphic_heading_pane_g2_ParamLimits

0xb56d,	// (0x0003cf6e) list_double_graphic_heading_pane_g2

0xb57e,	// (0x0003cf7f) list_double_graphic_heading_pane_g3_ParamLimits

0xb57e,	// (0x0003cf7f) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x00041064) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x00041064) list_double_graphic_heading_pane_g

0xb5be,	// (0x0003cfbf) list_double_graphic_heading_pane_t1_ParamLimits

0xb5be,	// (0x0003cfbf) list_double_graphic_heading_pane_t1

0xb5d4,	// (0x0003cfd5) list_double_graphic_heading_pane_t2_ParamLimits

0xb5d4,	// (0x0003cfd5) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0004106b) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0004106b) list_double_graphic_heading_pane_t

0xb3ef,	// (0x0003cdf0) list_double_time_pane_g1_ParamLimits

0xb3ef,	// (0x0003cdf0) list_double_time_pane_g1

0xb3bb,	// (0x0003cdbc) list_double_time_pane_g2_ParamLimits

0xb3bb,	// (0x0003cdbc) list_double_time_pane_g2

0x0001,

0xf612,	// (0x00041013) list_double_time_pane_g_ParamLimits

0xf612,	// (0x00041013) list_double_time_pane_g

0xb545,	// (0x0003cf46) list_double_time_pane_t1_ParamLimits

0xb545,	// (0x0003cf46) list_double_time_pane_t1

0xb5e6,	// (0x0003cfe7) list_double_time_pane_t2_ParamLimits

0xb5e6,	// (0x0003cfe7) list_double_time_pane_t2

0xb5f8,	// (0x0003cff9) list_double_time_pane_t3_ParamLimits

0xb5f8,	// (0x0003cff9) list_double_time_pane_t3

0xb60a,	// (0x0003d00b) list_double_time_pane_t4_ParamLimits

0xb60a,	// (0x0003d00b) list_double_time_pane_t4

0x0003,

0xf66f,	// (0x00041070) list_double_time_pane_t_ParamLimits

0xf66f,	// (0x00041070) list_double_time_pane_t

0xb61c,	// (0x0003d01d) list_setting_pane_g1_ParamLimits

0xb61c,	// (0x0003d01d) list_setting_pane_g1

0xb628,	// (0x0003d029) list_setting_pane_g2_ParamLimits

0xb628,	// (0x0003d029) list_setting_pane_g2

0x0001,

0xf678,	// (0x00041079) list_setting_pane_g_ParamLimits

0xf678,	// (0x00041079) list_setting_pane_g

0xb634,	// (0x0003d035) list_setting_pane_t1_ParamLimits

0xb634,	// (0x0003d035) list_setting_pane_t1

0xb64e,	// (0x0003d04f) list_setting_pane_t2_ParamLimits

0xb64e,	// (0x0003d04f) list_setting_pane_t2

0x0002,

0xf67d,	// (0x0004107e) list_setting_pane_t_ParamLimits

0xf67d,	// (0x0004107e) list_setting_pane_t

0xb68d,	// (0x0003d08e) set_value_pane_cp_ParamLimits

0xb68d,	// (0x0003d08e) set_value_pane_cp

0xb69b,	// (0x0003d09c) list_setting_number_pane_g1_ParamLimits

0xb69b,	// (0x0003d09c) list_setting_number_pane_g1

0xb6a7,	// (0x0003d0a8) list_setting_number_pane_g2_ParamLimits

0xb6a7,	// (0x0003d0a8) list_setting_number_pane_g2

0x0001,

0xf684,	// (0x00041085) list_setting_number_pane_g_ParamLimits

0xf684,	// (0x00041085) list_setting_number_pane_g

0xb6b3,	// (0x0003d0b4) list_setting_number_pane_t1_ParamLimits

0xb6b3,	// (0x0003d0b4) list_setting_number_pane_t1

0xb6cc,	// (0x0003d0cd) list_setting_number_pane_t2_ParamLimits

0xb6cc,	// (0x0003d0cd) list_setting_number_pane_t2

0xb6e6,	// (0x0003d0e7) list_setting_number_pane_t3_ParamLimits

0xb6e6,	// (0x0003d0e7) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x0004108a) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x0004108a) list_setting_number_pane_t

0xb68d,	// (0x0003d08e) set_value_pane_ParamLimits

0xb68d,	// (0x0003d08e) set_value_pane

0x2a6b,	// (0x0003446c) bg_set_opt_pane_ParamLimits

0x2a6b,	// (0x0003446c) bg_set_opt_pane

0x01c4,	// (0x00031bc5) set_value_pane_t1

0x2a8c,	// (0x0003448d) slider_set_pane_cp3

0x2a95,	// (0x00034496) volume_small_pane_cp

0x2a9e,	// (0x0003449f) list_form_gen_pane

0x2aa7,	// (0x000344a8) scroll_pane_cp8

0xb729,	// (0x0003d12a) form_field_data_pane_ParamLimits

0xb729,	// (0x0003d12a) form_field_data_pane

0xb744,	// (0x0003d145) form_field_data_wide_pane_ParamLimits

0xb744,	// (0x0003d145) form_field_data_wide_pane

0x021f,	// (0x00031c20) form_field_popup_pane_ParamLimits

0x021f,	// (0x00031c20) form_field_popup_pane

0xb768,	// (0x0003d169) form_field_popup_wide_pane_ParamLimits

0xb768,	// (0x0003d169) form_field_popup_wide_pane

0x0262,	// (0x00031c63) form_field_slider_pane_ParamLimits

0x0262,	// (0x00031c63) form_field_slider_pane

0x0275,	// (0x00031c76) form_field_slider_wide_pane_ParamLimits

0x0275,	// (0x00031c76) form_field_slider_wide_pane

0x2ab8,	// (0x000344b9) data_form_pane

0xb793,	// (0x0003d194) form_field_data_pane_t1

0x2ac4,	// (0x000344c5) input_focus_pane

0x2ad2,	// (0x000344d3) data_form_wide_pane

0x02b8,	// (0x00031cb9) form_field_data_wide_pane_t1

0x2835,	// (0x00034236) input_focus_pane_cp6

0xb7ad,	// (0x0003d1ae) form_field_popup_pane_t1

0x2ac4,	// (0x000344c5) input_focus_pane_cp7

0x2afe,	// (0x000344ff) list_form_pane

0x02fc,	// (0x00031cfd) form_field_popup_wide_pane_t1

0x2ac4,	// (0x000344c5) input_focus_pane_cp8

0x2b0a,	// (0x0003450b) list_form_wide_pane

0xb7cf,	// (0x0003d1d0) form_field_slider_pane_t1_ParamLimits

0xb7cf,	// (0x0003d1d0) form_field_slider_pane_t1

0xb7e7,	// (0x0003d1e8) form_field_slider_pane_t2_ParamLimits

0xb7e7,	// (0x0003d1e8) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x0004109a) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x0004109a) form_field_slider_pane_t

0x24b9,	// (0x00033eba) input_focus_pane_cp9_ParamLimits

0x24b9,	// (0x00033eba) input_focus_pane_cp9

0xb7fc,	// (0x0003d1fd) slider_cont_pane_ParamLimits

0xb7fc,	// (0x0003d1fd) slider_cont_pane

0x2b19,	// (0x0003451a) form_field_slider_wide_pane_t1_ParamLimits

0x2b19,	// (0x0003451a) form_field_slider_wide_pane_t1

0x035a,	// (0x00031d5b) form_field_slider_wide_pane_t2_ParamLimits

0x035a,	// (0x00031d5b) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x0004109f) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x0004109f) form_field_slider_wide_pane_t

0x24b9,	// (0x00033eba) input_focus_pane_cp10_ParamLimits

0x24b9,	// (0x00033eba) input_focus_pane_cp10

0xb810,	// (0x0003d211) slider_cont_pane_cp1_ParamLimits

0xb810,	// (0x0003d211) slider_cont_pane_cp1

0xb824,	// (0x0003d225) slider_form_pane_cp

0x2b2b,	// (0x0003452c) input_focus_pane_g1

0x2b33,	// (0x00034534) input_focus_pane_g2

0x2b3b,	// (0x0003453c) input_focus_pane_g3

0x2b43,	// (0x00034544) input_focus_pane_g4

0x2b4b,	// (0x0003454c) input_focus_pane_g5

0x2b53,	// (0x00034554) input_focus_pane_g6

0x2b5b,	// (0x0003455c) input_focus_pane_g7

0x2b63,	// (0x00034564) input_focus_pane_g8

0x2b6b,	// (0x0003456c) input_focus_pane_g9

0xe084,	// (0x0003fa85) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x000410a4) input_focus_pane_g

0x4e7e,	// (0x0003687f) wait_border_pane_g3_copy1

0xb82c,	// (0x0003d22d) data_form_pane_t1

0xe084,	// (0x0003fa85) wait_anim_pane_g1_copy1

0xbcdd,	// (0x0003d6de) data_form_wide_pane_t1

0x03ba,	// (0x00031dbb) list_form_graphic_pane_cp_ParamLimits

0x03ba,	// (0x00031dbb) list_form_graphic_pane_cp

0x5e03,	// (0x00037804) slider_form_pane_g1

0x5e0c,	// (0x0003780d) slider_form_pane_g2

0x0006,

0xf996,	// (0x00041397) slider_form_pane_g

0x03ba,	// (0x00031dbb) list_form_graphic_pane_ParamLimits

0x03ba,	// (0x00031dbb) list_form_graphic_pane

0x03cc,	// (0x00031dcd) list_form_graphic_pane_g1

0x03d4,	// (0x00031dd5) list_form_graphic_pane_t1_ParamLimits

0x03d4,	// (0x00031dd5) list_form_graphic_pane_t1

0x223d,	// (0x00033c3e) list_highlight_pane_cp5_ParamLimits

0x223d,	// (0x00033c3e) list_highlight_pane_cp5

0xb846,	// (0x0003d247) find_pane_g1

0x2b73,	// (0x00034574) input_find_pane

0xb84f,	// (0x0003d250) input_find_pane_g1_ParamLimits

0xb84f,	// (0x0003d250) input_find_pane_g1

0xb85b,	// (0x0003d25c) input_find_pane_t1_ParamLimits

0xb85b,	// (0x0003d25c) input_find_pane_t1

0xb870,	// (0x0003d271) input_find_pane_t2_ParamLimits

0xb870,	// (0x0003d271) input_find_pane_t2

0x0001,

0xf6b8,	// (0x000410b9) input_find_pane_t_ParamLimits

0xf6b8,	// (0x000410b9) input_find_pane_t

0x2b7c,	// (0x0003457d) input_focus_pane_cp5_ParamLimits

0x2b7c,	// (0x0003457d) input_focus_pane_cp5

0xb891,	// (0x0003d292) bg_popup_window_pane_cp2_ParamLimits

0xb891,	// (0x0003d292) bg_popup_window_pane_cp2

0xb89e,	// (0x0003d29f) listscroll_menu_pane_ParamLimits

0xb89e,	// (0x0003d29f) listscroll_menu_pane

0xb8aa,	// (0x0003d2ab) popup_submenu_window_ParamLimits

0xb8aa,	// (0x0003d2ab) popup_submenu_window

0x2bdf,	// (0x000345e0) find_popup_pane_g1

0x2be7,	// (0x000345e8) input_popup_find_pane_cp

0x2b7c,	// (0x0003457d) input_focus_pane_cp4_ParamLimits

0x2b7c,	// (0x0003457d) input_focus_pane_cp4

0x2bff,	// (0x00034600) input_popup_find_pane_t1_ParamLimits

0x2bff,	// (0x00034600) input_popup_find_pane_t1

0xe08e,	// (0x0003fa8f) bg_popup_sub_pane_cp

0x2c2d,	// (0x0003462e) listscroll_popup_sub_pane

0x2c35,	// (0x00034636) list_submenu_pane_ParamLimits

0x2c35,	// (0x00034636) list_submenu_pane

0x2c46,	// (0x00034647) scroll_pane_cp4

0x2c4e,	// (0x0003464f) list_single_popup_submenu_pane_ParamLimits

0x2c4e,	// (0x0003464f) list_single_popup_submenu_pane

0x2c63,	// (0x00034664) list_single_popup_submenu_pane_g1

0x2c6b,	// (0x0003466c) list_single_popup_submenu_pane_t1_ParamLimits

0x2c6b,	// (0x0003466c) list_single_popup_submenu_pane_t1

0x24b9,	// (0x00033eba) bg_active_tab_pane_cp1_ParamLimits

0x24b9,	// (0x00033eba) bg_active_tab_pane_cp1

0xc39c,	// (0x0003dd9d) tabs_2_active_pane_g1

0xc3a4,	// (0x0003dda5) tabs_2_active_pane_t1

0x24b9,	// (0x00033eba) bg_passive_tab_pane_cp1_ParamLimits

0x24b9,	// (0x00033eba) bg_passive_tab_pane_cp1

0xc39c,	// (0x0003dd9d) tabs_2_passive_pane_g1

0xc3a4,	// (0x0003dda5) tabs_2_passive_pane_t1

0x223d,	// (0x00033c3e) bg_active_tab_pane_cp4

0xc3b6,	// (0x0003ddb7) tabs_2_long_active_pane_t1

0x3d06,	// (0x00035707) bg_passive_tab_pane_cp4

0x0b41,	// (0x00032542) list_single_midp_graphic_pane_g4_ParamLimits

0x223d,	// (0x00033c3e) bg_active_tab_pane_cp5

0xc3c9,	// (0x0003ddca) tabs_3_long_active_pane_t1

0x3d06,	// (0x00035707) bg_passive_tab_pane_cp5

0x0b41,	// (0x00032542) list_single_midp_graphic_pane_g4

0x223d,	// (0x00033c3e) bg_popup_window_pane_cp13_ParamLimits

0x223d,	// (0x00033c3e) bg_popup_window_pane_cp13

0x2ce2,	// (0x000346e3) listscroll_popup_fast_pane_ParamLimits

0x2ce2,	// (0x000346e3) listscroll_popup_fast_pane

0x2cf1,	// (0x000346f2) grid_popup_fast_pane_ParamLimits

0x2cf1,	// (0x000346f2) grid_popup_fast_pane

0x2d03,	// (0x00034704) scroll_pane_cp9_ParamLimits

0x2d03,	// (0x00034704) scroll_pane_cp9

0x7759,	// (0x0003915a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7759,	// (0x0003915a) list_single_graphic_hl_pane_t1_cp2

0x2d27,	// (0x00034728) input_focus_pane_cp20_ParamLimits

0x2d27,	// (0x00034728) input_focus_pane_cp20

0x2d35,	// (0x00034736) query_popup_data_pane_t1_ParamLimits

0x2d35,	// (0x00034736) query_popup_data_pane_t1

0x2d48,	// (0x00034749) query_popup_data_pane_t2_ParamLimits

0x2d48,	// (0x00034749) query_popup_data_pane_t2

0x2fec,	// (0x000349ed) query_popup_data_pane_t3_ParamLimits

0x2fec,	// (0x000349ed) query_popup_data_pane_t3

0x302d,	// (0x00034a2e) query_popup_data_pane_t4_ParamLimits

0x302d,	// (0x00034a2e) query_popup_data_pane_t4

0x3069,	// (0x00034a6a) query_popup_data_pane_t5_ParamLimits

0x3069,	// (0x00034a6a) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x000410be) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x000410be) query_popup_data_pane_t

0x2b2b,	// (0x0003452c) bg_set_opt_pane_g1

0x2b33,	// (0x00034534) bg_set_opt_pane_g2

0x2b3b,	// (0x0003453c) bg_set_opt_pane_g3

0x2b43,	// (0x00034544) bg_set_opt_pane_g4

0x2b4b,	// (0x0003454c) bg_set_opt_pane_g5

0x2b53,	// (0x00034554) bg_set_opt_pane_g6

0x2b5b,	// (0x0003455c) bg_set_opt_pane_g7

0x2b63,	// (0x00034564) bg_set_opt_pane_g8

0x2b6b,	// (0x0003456c) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x000410c9) bg_set_opt_pane_g

0x0757,	// (0x00032158) control_top_pane_stacon_ParamLimits

0x0757,	// (0x00032158) control_top_pane_stacon

0x07aa,	// (0x000321ab) signal_pane_stacon_ParamLimits

0x07aa,	// (0x000321ab) signal_pane_stacon

0x3615,	// (0x00035016) stacon_top_pane_g1_ParamLimits

0x3615,	// (0x00035016) stacon_top_pane_g1

0x07cf,	// (0x000321d0) title_pane_stacon_ParamLimits

0x07cf,	// (0x000321d0) title_pane_stacon

0x07f9,	// (0x000321fa) uni_indicator_pane_stacon_ParamLimits

0x07f9,	// (0x000321fa) uni_indicator_pane_stacon

0x0811,	// (0x00032212) battery_pane_stacon_ParamLimits

0x0811,	// (0x00032212) battery_pane_stacon

0x0855,	// (0x00032256) control_bottom_pane_stacon_ParamLimits

0x0855,	// (0x00032256) control_bottom_pane_stacon

0x0878,	// (0x00032279) navi_pane_stacon_ParamLimits

0x0878,	// (0x00032279) navi_pane_stacon

0x3637,	// (0x00035038) stacon_bottom_pane_g1_ParamLimits

0x3637,	// (0x00035038) stacon_bottom_pane_g1

0x0428,	// (0x00031e29) aid_levels_signal_lsc_ParamLimits

0x0428,	// (0x00031e29) aid_levels_signal_lsc

0x043f,	// (0x00031e40) signal_pane_stacon_g1_ParamLimits

0x043f,	// (0x00031e40) signal_pane_stacon_g1

0x0453,	// (0x00031e54) signal_pane_stacon_g2_ParamLimits

0x0453,	// (0x00031e54) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x000410dc) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x000410dc) signal_pane_stacon_g

0x0488,	// (0x00031e89) title_pane_stacon_t1_ParamLimits

0x0488,	// (0x00031e89) title_pane_stacon_t1

0x30ad,	// (0x00034aae) uni_indicator_pane_stacon_g1

0x30b7,	// (0x00034ab8) uni_indicator_pane_stacon_g2

0x30c1,	// (0x00034ac2) uni_indicator_pane_stacon_g3

0x30cb,	// (0x00034acc) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x000410e8) uni_indicator_pane_stacon_g

0x04ad,	// (0x00031eae) control_top_pane_stacon_g1

0x04b5,	// (0x00031eb6) control_top_pane_stacon_t1_ParamLimits

0x04b5,	// (0x00031eb6) control_top_pane_stacon_t1

0x04ec,	// (0x00031eed) aid_levels_battery_lsc_ParamLimits

0x04ec,	// (0x00031eed) aid_levels_battery_lsc

0x0504,	// (0x00031f05) battery_pane_stacon_g1_ParamLimits

0x0504,	// (0x00031f05) battery_pane_stacon_g1

0x0517,	// (0x00031f18) battery_pane_stacon_g2_ParamLimits

0x0517,	// (0x00031f18) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x000410f1) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x000410f1) battery_pane_stacon_g

0x0555,	// (0x00031f56) navi_icon_pane_stacon

0x0569,	// (0x00031f6a) navi_navi_pane_stacon

0x0555,	// (0x00031f56) navi_text_pane_stacon

0x04ad,	// (0x00031eae) control_bottom_pane_stacon_g1

0x057f,	// (0x00031f80) control_bottom_pane_stacon_t1_ParamLimits

0x057f,	// (0x00031f80) control_bottom_pane_stacon_t1

0xc3db,	// (0x0003dddc) grid_app_pane_ParamLimits

0xc3db,	// (0x0003dddc) grid_app_pane

0xc413,	// (0x0003de14) scroll_pane_cp15_ParamLimits

0xc413,	// (0x0003de14) scroll_pane_cp15

0xc430,	// (0x0003de31) cell_app_pane_ParamLimits

0xc430,	// (0x0003de31) cell_app_pane

0xc471,	// (0x0003de72) cell_app_pane_g1_ParamLimits

0xc471,	// (0x0003de72) cell_app_pane_g1

0x3178,	// (0x00034b79) cell_app_pane_g2_ParamLimits

0x3178,	// (0x00034b79) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x000410f6) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x000410f6) cell_app_pane_g

0x3184,	// (0x00034b85) cell_app_pane_t1_ParamLimits

0x3184,	// (0x00034b85) cell_app_pane_t1

0x3196,	// (0x00034b97) grid_highlight_pane_ParamLimits

0x3196,	// (0x00034b97) grid_highlight_pane

0x2b2b,	// (0x0003452c) cell_highlight_pane_g1

0x2b33,	// (0x00034534) cell_highlight_pane_g2

0x2b3b,	// (0x0003453c) cell_highlight_pane_g3

0x2b43,	// (0x00034544) cell_highlight_pane_g4

0x2b4b,	// (0x0003454c) cell_highlight_pane_g5

0x2b53,	// (0x00034554) cell_highlight_pane_g6

0x2b5b,	// (0x0003455c) cell_highlight_pane_g7

0x2b63,	// (0x00034564) cell_highlight_pane_g8

0x2b6b,	// (0x0003456c) cell_highlight_pane_g9

0xe084,	// (0x0003fa85) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x000410a4) cell_highlight_pane_g

0x31a7,	// (0x00034ba8) bg_scroll_pane

0x05c9,	// (0x00031fca) scroll_handle_pane

0x31ee,	// (0x00034bef) scroll_bg_pane_g1

0x3203,	// (0x00034c04) scroll_bg_pane_g2

0x321b,	// (0x00034c1c) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x000410fb) scroll_bg_pane_g

0x3230,	// (0x00034c31) scroll_handle_focus_pane_ParamLimits

0x3230,	// (0x00034c31) scroll_handle_focus_pane

0x31ee,	// (0x00034bef) scroll_handle_pane_g1

0x323d,	// (0x00034c3e) scroll_handle_pane_g2

0x321b,	// (0x00034c1c) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x00041102) scroll_handle_pane_g

0x2b7c,	// (0x0003457d) bg_popup_sub_pane_cp21_ParamLimits

0x2b7c,	// (0x0003457d) bg_popup_sub_pane_cp21

0x3251,	// (0x00034c52) popup_fep_japan_predictive_window_t1_ParamLimits

0x3251,	// (0x00034c52) popup_fep_japan_predictive_window_t1

0x3268,	// (0x00034c69) popup_fep_japan_predictive_window_t2_ParamLimits

0x3268,	// (0x00034c69) popup_fep_japan_predictive_window_t2

0x329b,	// (0x00034c9c) popup_fep_japan_predictive_window_t3_ParamLimits

0x329b,	// (0x00034c9c) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x00041109) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x00041109) popup_fep_japan_predictive_window_t

0xe08e,	// (0x0003fa8f) bg_popup_sub_pane_cp23

0x32d2,	// (0x00034cd3) listscroll_japin_cand_pane

0x32da,	// (0x00034cdb) popup_fep_japan_candidate_window_t1

0x32e8,	// (0x00034ce9) candidate_pane_ParamLimits

0x32e8,	// (0x00034ce9) candidate_pane

0x32fa,	// (0x00034cfb) scroll_pane_cp30

0x3304,	// (0x00034d05) list_single_popup_jap_candidate_pane_ParamLimits

0x3304,	// (0x00034d05) list_single_popup_jap_candidate_pane

0xe08e,	// (0x0003fa8f) list_highlight_pane_cp30

0x3318,	// (0x00034d19) list_single_popup_jap_candidate_pane_t1

0xc495,	// (0x0003de96) level_1_signal

0xc4a7,	// (0x0003dea8) level_2_signal

0xc4ba,	// (0x0003debb) level_3_signal

0xc4cd,	// (0x0003dece) level_4_signal

0xc4e0,	// (0x0003dee1) level_5_signal

0xc4f3,	// (0x0003def4) level_6_signal

0xc506,	// (0x0003df07) level_7_signal

0xc495,	// (0x0003de96) level_1_battery

0xc4a7,	// (0x0003dea8) level_2_battery

0xc4ba,	// (0x0003debb) level_3_battery

0xc4cd,	// (0x0003dece) level_4_battery

0xc4e0,	// (0x0003dee1) level_5_battery

0xc4f3,	// (0x0003def4) level_6_battery

0xc506,	// (0x0003df07) level_7_battery

0x339a,	// (0x00034d9b) list_menu_pane_ParamLimits

0x339a,	// (0x00034d9b) list_menu_pane

0x33ab,	// (0x00034dac) scroll_pane_cp25_ParamLimits

0x33ab,	// (0x00034dac) scroll_pane_cp25

0x33c4,	// (0x00034dc5) list_double2_graphic_pane_cp2_ParamLimits

0x33c4,	// (0x00034dc5) list_double2_graphic_pane_cp2

0x33c4,	// (0x00034dc5) list_double2_large_graphic_pane_cp2_ParamLimits

0x33c4,	// (0x00034dc5) list_double2_large_graphic_pane_cp2

0x33c4,	// (0x00034dc5) list_double2_pane_cp2_ParamLimits

0x33c4,	// (0x00034dc5) list_double2_pane_cp2

0x33c4,	// (0x00034dc5) list_double_graphic_pane_cp2_ParamLimits

0x33c4,	// (0x00034dc5) list_double_graphic_pane_cp2

0x33c4,	// (0x00034dc5) list_double_large_graphic_pane_cp2_ParamLimits

0x33c4,	// (0x00034dc5) list_double_large_graphic_pane_cp2

0x33c4,	// (0x00034dc5) list_double_number_pane_cp2_ParamLimits

0x33c4,	// (0x00034dc5) list_double_number_pane_cp2

0x33c4,	// (0x00034dc5) list_double_pane_cp2_ParamLimits

0x33c4,	// (0x00034dc5) list_double_pane_cp2

0xc519,	// (0x0003df1a) list_single_2graphic_pane_cp2_ParamLimits

0xc519,	// (0x0003df1a) list_single_2graphic_pane_cp2

0xc519,	// (0x0003df1a) list_single_graphic_heading_pane_cp2_ParamLimits

0xc519,	// (0x0003df1a) list_single_graphic_heading_pane_cp2

0xc519,	// (0x0003df1a) list_single_graphic_pane_cp2_ParamLimits

0xc519,	// (0x0003df1a) list_single_graphic_pane_cp2

0xc519,	// (0x0003df1a) list_single_heading_pane_cp2_ParamLimits

0xc519,	// (0x0003df1a) list_single_heading_pane_cp2

0x3407,	// (0x00034e08) list_single_large_graphic_pane_cp2_ParamLimits

0x3407,	// (0x00034e08) list_single_large_graphic_pane_cp2

0xc519,	// (0x0003df1a) list_single_number_heading_pane_cp2_ParamLimits

0xc519,	// (0x0003df1a) list_single_number_heading_pane_cp2

0xc519,	// (0x0003df1a) list_single_number_pane_cp2_ParamLimits

0xc519,	// (0x0003df1a) list_single_number_pane_cp2

0xc519,	// (0x0003df1a) list_single_pane_cp2_ParamLimits

0xc519,	// (0x0003df1a) list_single_pane_cp2

0x345c,	// (0x00034e5d) bg_popup_sub_pane_cp22

0x067b,	// (0x0003207c) popup_side_volume_key_window_g1

0x06a5,	// (0x000320a6) popup_side_volume_key_window_t1

0x06c3,	// (0x000320c4) volume_small_pane_cp1

0x24b9,	// (0x00033eba) bg_popup_sub_pane_cp24_ParamLimits

0x24b9,	// (0x00033eba) bg_popup_sub_pane_cp24

0x3472,	// (0x00034e73) fep_china_uni_candidate_pane_ParamLimits

0x3472,	// (0x00034e73) fep_china_uni_candidate_pane

0x3486,	// (0x00034e87) fep_china_uni_entry_pane

0x3496,	// (0x00034e97) popup_fep_china_uni_window_g1

0x34b2,	// (0x00034eb3) fep_china_uni_entry_pane_g1

0x34bc,	// (0x00034ebd) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x00041136) fep_china_uni_entry_pane_g

0x34c6,	// (0x00034ec7) fep_entry_item_pane

0x34d0,	// (0x00034ed1) fep_candidate_item_pane

0x34d8,	// (0x00034ed9) fep_china_uni_candidate_pane_g1

0x34e2,	// (0x00034ee3) fep_china_uni_candidate_pane_g2

0x34ea,	// (0x00034eeb) fep_china_uni_candidate_pane_g3

0x34f2,	// (0x00034ef3) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0004113b) fep_china_uni_candidate_pane_g

0xe084,	// (0x0003fa85) fep_entry_item_pane_g1

0x34fc,	// (0x00034efd) fep_entry_item_pane_t1_ParamLimits

0x34fc,	// (0x00034efd) fep_entry_item_pane_t1

0x3512,	// (0x00034f13) fep_candidate_item_pane_t1_ParamLimits

0x3512,	// (0x00034f13) fep_candidate_item_pane_t1

0x3527,	// (0x00034f28) fep_candidate_item_pane_t2_ParamLimits

0x3527,	// (0x00034f28) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x00041144) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x00041144) fep_candidate_item_pane_t

0x223d,	// (0x00033c3e) list_highlight_pane_cp31_ParamLimits

0x223d,	// (0x00033c3e) list_highlight_pane_cp31

0x3539,	// (0x00034f3a) level_1_signal_lsc

0x3542,	// (0x00034f43) level_2_signal_lsc

0x354b,	// (0x00034f4c) level_3_signal_lsc

0x3554,	// (0x00034f55) level_4_signal_lsc

0x355d,	// (0x00034f5e) level_5_signal_lsc

0x3566,	// (0x00034f67) level_6_signal_lsc

0x356f,	// (0x00034f70) level_7_signal_lsc

0x356f,	// (0x00034f70) level_1_battery_lsc

0x3578,	// (0x00034f79) level_2_battery_lsc

0x3581,	// (0x00034f82) level_3_battery_lsc

0x358a,	// (0x00034f8b) level_4_battery_lsc

0x3593,	// (0x00034f94) level_5_battery_lsc

0x359c,	// (0x00034f9d) level_6_battery_lsc

0x3539,	// (0x00034f3a) level_7_battery_lsc

0x35a5,	// (0x00034fa6) scroll_handle_focus_pane_g1

0x35ae,	// (0x00034faf) scroll_handle_focus_pane_g2

0x35b7,	// (0x00034fb8) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x00041149) scroll_handle_focus_pane_g

0xb8f1,	// (0x0003d2f2) list_single_2graphic_pane_g1_ParamLimits

0xb8f1,	// (0x0003d2f2) list_single_2graphic_pane_g1

0xb384,	// (0x0003cd85) list_single_2graphic_pane_g2_ParamLimits

0xb384,	// (0x0003cd85) list_single_2graphic_pane_g2

0x0b74,	// (0x00032575) list_single_2graphic_pane_g3_ParamLimits

0x0b74,	// (0x00032575) list_single_2graphic_pane_g3

0xb8fd,	// (0x0003d2fe) list_single_2graphic_pane_g4_ParamLimits

0xb8fd,	// (0x0003d2fe) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x00041150) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x00041150) list_single_2graphic_pane_g

0xb909,	// (0x0003d30a) list_single_2graphic_pane_t1_ParamLimits

0xb909,	// (0x0003d30a) list_single_2graphic_pane_t1

0xb937,	// (0x0003d338) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb937,	// (0x0003d338) list_double2_graphic_large_graphic_pane_g1

0xb3ef,	// (0x0003cdf0) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb3ef,	// (0x0003cdf0) list_double2_graphic_large_graphic_pane_g2

0xb3bb,	// (0x0003cdbc) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb3bb,	// (0x0003cdbc) list_double2_graphic_large_graphic_pane_g3

0xb949,	// (0x0003d34a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb949,	// (0x0003d34a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x00041159) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x00041159) list_double2_graphic_large_graphic_pane_g

0xb955,	// (0x0003d356) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb955,	// (0x0003d356) list_double2_graphic_large_graphic_pane_t1

0xb96b,	// (0x0003d36c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb96b,	// (0x0003d36c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x00041162) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x00041162) list_double2_graphic_large_graphic_pane_t

0x36f9,	// (0x000350fa) popup_fast_swap_window_ParamLimits

0x36f9,	// (0x000350fa) popup_fast_swap_window

0x3717,	// (0x00035118) popup_side_volume_key_window

0x3735,	// (0x00035136) stacon_top_pane

0x373f,	// (0x00035140) status_pane_ParamLimits

0x373f,	// (0x00035140) status_pane

0x3735,	// (0x00035136) status_small_pane

0xe08e,	// (0x0003fa8f) control_pane

0xe08e,	// (0x0003fa8f) stacon_bottom_pane

0x2aa7,	// (0x000344a8) scroll_pane_cp121

0x2a9e,	// (0x0003449f) set_content_pane

0xc57c,	// (0x0003df7d) bg_active_tab_pane_g1_cp1

0x35c9,	// (0x00034fca) bg_active_tab_pane_g2_cp1

0xc585,	// (0x0003df86) bg_active_tab_pane_g3_cp1

0xc57c,	// (0x0003df7d) bg_passive_tab_pane_g1_cp1

0x35c9,	// (0x00034fca) bg_passive_tab_pane_g2_cp1

0xc585,	// (0x0003df86) bg_passive_tab_pane_g3_cp1

0xc58e,	// (0x0003df8f) bg_active_tab_pane_g1_cp2

0x35c9,	// (0x00034fca) bg_active_tab_pane_g2_cp2

0xc597,	// (0x0003df98) bg_active_tab_pane_g3_cp2

0xc58e,	// (0x0003df8f) bg_passive_tab_pane_g1_cp2

0x35c9,	// (0x00034fca) bg_passive_tab_pane_g2_cp2

0xc597,	// (0x0003df98) bg_passive_tab_pane_g3_cp2

0xc5a0,	// (0x0003dfa1) bg_active_tab_pane_g1_cp3

0x35c9,	// (0x00034fca) bg_active_tab_pane_g2_cp3

0xc5a9,	// (0x0003dfaa) bg_active_tab_pane_g3_cp3

0xc5a0,	// (0x0003dfa1) bg_passive_tab_pane_g1_cp3

0x35c9,	// (0x00034fca) bg_passive_tab_pane_g2_cp3

0xc5a9,	// (0x0003dfaa) bg_passive_tab_pane_g3_cp3

0xc5b2,	// (0x0003dfb3) bg_active_tab_pane_g1_cp4

0x35c9,	// (0x00034fca) bg_active_tab_pane_g2_cp4

0xc5bb,	// (0x0003dfbc) bg_active_tab_pane_g3_cp4

0xc5b2,	// (0x0003dfb3) bg_passive_tab_pane_g1_cp4

0x35c9,	// (0x00034fca) bg_passive_tab_pane_g2_cp4

0xc5bb,	// (0x0003dfbc) bg_passive_tab_pane_g3_cp4

0x3653,	// (0x00035054) bg_active_tab_pane_g1_cp5

0x35c9,	// (0x00034fca) bg_active_tab_pane_g2_cp5

0x365c,	// (0x0003505d) bg_active_tab_pane_g3_cp5

0x3653,	// (0x00035054) bg_passive_tab_pane_g1_cp5

0x35c9,	// (0x00034fca) bg_passive_tab_pane_g2_cp5

0x365c,	// (0x0003505d) bg_passive_tab_pane_g3_cp5

0x2c4e,	// (0x0003464f) list_set_graphic_pane_ParamLimits

0x2c4e,	// (0x0003464f) list_set_graphic_pane

0xe08e,	// (0x0003fa8f) bg_set_opt_pane_cp4

0xc5c4,	// (0x0003dfc5) list_set_graphic_pane_g1_ParamLimits

0xc5c4,	// (0x0003dfc5) list_set_graphic_pane_g1

0xc5d0,	// (0x0003dfd1) list_set_graphic_pane_g2_ParamLimits

0xc5d0,	// (0x0003dfd1) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x00041167) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x00041167) list_set_graphic_pane_g

0x0009,

0xfad9,	// (0x000414da) volume_small_pane_cp_g

0x36aa,	// (0x000350ab) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x36aa,	// (0x000350ab) list_double2_large_graphic_pane_g1_cp2

0x36b8,	// (0x000350b9) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x36b8,	// (0x000350b9) list_double2_large_graphic_pane_g2_cp2

0x36c9,	// (0x000350ca) list_double2_large_graphic_pane_g3_cp2

0x36d1,	// (0x000350d2) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x36d1,	// (0x000350d2) list_double2_large_graphic_pane_t1_cp2

0x36e7,	// (0x000350e8) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x36e7,	// (0x000350e8) list_double2_large_graphic_pane_t2_cp2

0x5968,	// (0x00037369) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5968,	// (0x00037369) list_double_large_graphic_pane_g1_cp2

0x597b,	// (0x0003737c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x597b,	// (0x0003737c) list_double_large_graphic_pane_g2_cp2

0x385d,	// (0x0003525e) list_double_large_graphic_pane_g3_cp2

0x598c,	// (0x0003738d) list_double_large_graphic_pane_g4_cp

0x5994,	// (0x00037395) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5994,	// (0x00037395) list_double_large_graphic_pane_t1_cp2

0x59ab,	// (0x000373ac) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x59ab,	// (0x000373ac) list_double_large_graphic_pane_t2_cp2

0x374d,	// (0x0003514e) list_double2_graphic_pane_g1_cp2_ParamLimits

0x374d,	// (0x0003514e) list_double2_graphic_pane_g1_cp2

0x375b,	// (0x0003515c) list_double2_graphic_pane_g2_cp2_ParamLimits

0x375b,	// (0x0003515c) list_double2_graphic_pane_g2_cp2

0x376c,	// (0x0003516d) list_double2_graphic_pane_g3_cp2

0x3776,	// (0x00035177) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3776,	// (0x00035177) list_double2_graphic_pane_t1_cp2

0x378c,	// (0x0003518d) list_double2_graphic_pane_t2_cp2_ParamLimits

0x378c,	// (0x0003518d) list_double2_graphic_pane_t2_cp2

0x379e,	// (0x0003519f) list_single_number_heading_pane_g1_cp2_ParamLimits

0x379e,	// (0x0003519f) list_single_number_heading_pane_g1_cp2

0x37aa,	// (0x000351ab) list_single_number_heading_pane_g2_cp2

0x37b2,	// (0x000351b3) list_single_number_heading_pane_t1_cp2_ParamLimits

0x37b2,	// (0x000351b3) list_single_number_heading_pane_t1_cp2

0x37c8,	// (0x000351c9) list_single_number_heading_pane_t2_cp2_ParamLimits

0x37c8,	// (0x000351c9) list_single_number_heading_pane_t2_cp2

0x37dc,	// (0x000351dd) list_single_number_heading_pane_t3_cp2_ParamLimits

0x37dc,	// (0x000351dd) list_single_number_heading_pane_t3_cp2

0x379e,	// (0x0003519f) list_single_heading_pane_g1_cp2_ParamLimits

0x379e,	// (0x0003519f) list_single_heading_pane_g1_cp2

0x37aa,	// (0x000351ab) list_single_heading_pane_g2_cp2

0x37b2,	// (0x000351b3) list_single_heading_pane_t1_cp2_ParamLimits

0x37b2,	// (0x000351b3) list_single_heading_pane_t1_cp2

0x5762,	// (0x00037163) list_single_heading_pane_t2_cp2_ParamLimits

0x5762,	// (0x00037163) list_single_heading_pane_t2_cp2

0x56a4,	// (0x000370a5) list_double_graphic_pane_g1_cp2_ParamLimits

0x56a4,	// (0x000370a5) list_double_graphic_pane_g1_cp2

0x56b0,	// (0x000370b1) list_double_graphic_pane_g2_cp2_ParamLimits

0x56b0,	// (0x000370b1) list_double_graphic_pane_g2_cp2

0x56bf,	// (0x000370c0) list_double_graphic_pane_g3_cp2

0x56c7,	// (0x000370c8) list_double_graphic_pane_t1_cp2_ParamLimits

0x56c7,	// (0x000370c8) list_double_graphic_pane_t1_cp2

0x56dd,	// (0x000370de) list_double_graphic_pane_t2_cp2_ParamLimits

0x56dd,	// (0x000370de) list_double_graphic_pane_t2_cp2

0x3851,	// (0x00035252) list_double_number_pane_g1_cp2_ParamLimits

0x3851,	// (0x00035252) list_double_number_pane_g1_cp2

0x385d,	// (0x0003525e) list_double_number_pane_g2_cp2

0x5668,	// (0x00037069) list_double_number_pane_t1_cp2_ParamLimits

0x5668,	// (0x00037069) list_double_number_pane_t1_cp2

0x567c,	// (0x0003707d) list_double_number_pane_t2_cp2_ParamLimits

0x567c,	// (0x0003707d) list_double_number_pane_t2_cp2

0x5692,	// (0x00037093) list_double_number_pane_t3_cp2_ParamLimits

0x5692,	// (0x00037093) list_double_number_pane_t3_cp2

0x5551,	// (0x00036f52) list_single_graphic_pane_g1_cp2_ParamLimits

0x5551,	// (0x00036f52) list_single_graphic_pane_g1_cp2

0x38b7,	// (0x000352b8) list_single_graphic_pane_g2_cp2_ParamLimits

0x38b7,	// (0x000352b8) list_single_graphic_pane_g2_cp2

0x38c3,	// (0x000352c4) list_single_graphic_pane_g3_cp2

0x5527,	// (0x00036f28) list_single_graphic_pane_t1_cp2_ParamLimits

0x5527,	// (0x00036f28) list_single_graphic_pane_t1_cp2

0x38b7,	// (0x000352b8) list_single_number_pane_g1_cp2_ParamLimits

0x38b7,	// (0x000352b8) list_single_number_pane_g1_cp2

0x38c3,	// (0x000352c4) list_single_number_pane_g2_cp2

0x5527,	// (0x00036f28) list_single_number_pane_t1_cp2_ParamLimits

0x5527,	// (0x00036f28) list_single_number_pane_t1_cp2

0x553d,	// (0x00036f3e) list_single_number_pane_t2_cp2_ParamLimits

0x553d,	// (0x00036f3e) list_single_number_pane_t2_cp2

0x36b8,	// (0x000350b9) list_double2_pane_g1_cp2_ParamLimits

0x36b8,	// (0x000350b9) list_double2_pane_g1_cp2

0x36c9,	// (0x000350ca) list_double2_pane_g2_cp2

0x3829,	// (0x0003522a) list_double2_pane_t1_cp2_ParamLimits

0x3829,	// (0x0003522a) list_double2_pane_t1_cp2

0x383f,	// (0x00035240) list_double2_pane_t2_cp2_ParamLimits

0x383f,	// (0x00035240) list_double2_pane_t2_cp2

0x3851,	// (0x00035252) list_double_pane_g1_cp2_ParamLimits

0x3851,	// (0x00035252) list_double_pane_g1_cp2

0x385d,	// (0x0003525e) list_double_pane_g2_cp2

0x3865,	// (0x00035266) list_double_pane_t1_cp2_ParamLimits

0x3865,	// (0x00035266) list_double_pane_t1_cp2

0x387b,	// (0x0003527c) list_double_pane_t2_cp2_ParamLimits

0x387b,	// (0x0003527c) list_double_pane_t2_cp2

0x38a7,	// (0x000352a8) list_single_pane_cp2_g3

0x38b7,	// (0x000352b8) list_single_pane_g1_cp2_ParamLimits

0x38b7,	// (0x000352b8) list_single_pane_g1_cp2

0x38c3,	// (0x000352c4) list_single_pane_g2_cp2

0x38cb,	// (0x000352cc) list_single_pane_t1_cp2_ParamLimits

0x38cb,	// (0x000352cc) list_single_pane_t1_cp2

0x38e3,	// (0x000352e4) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x38e3,	// (0x000352e4) list_single_large_graphic_pane_g1_cp2

0x38f1,	// (0x000352f2) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x38f1,	// (0x000352f2) list_single_large_graphic_pane_g2_cp2

0x38fd,	// (0x000352fe) list_single_large_graphic_pane_g3_cp2

0x3905,	// (0x00035306) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3905,	// (0x00035306) list_single_large_graphic_pane_g4_cp1

0x391f,	// (0x00035320) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x391f,	// (0x00035320) list_single_large_graphic_pane_t1_cp2

0x54f1,	// (0x00036ef2) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x54f1,	// (0x00036ef2) list_single_graphic_heading_pane_g1_cp2

0x54be,	// (0x00036ebf) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x54be,	// (0x00036ebf) list_single_graphic_heading_pane_g4_cp2

0x38c3,	// (0x000352c4) list_single_graphic_heading_pane_g5_cp2

0x54fd,	// (0x00036efe) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x54fd,	// (0x00036efe) list_single_graphic_heading_pane_t1_cp2

0x5513,	// (0x00036f14) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5513,	// (0x00036f14) list_single_graphic_heading_pane_t2_cp2

0x54b2,	// (0x00036eb3) list_single_2graphic_pane_g1_cp2_ParamLimits

0x54b2,	// (0x00036eb3) list_single_2graphic_pane_g1_cp2

0x54be,	// (0x00036ebf) list_single_2graphic_pane_g2_cp2_ParamLimits

0x54be,	// (0x00036ebf) list_single_2graphic_pane_g2_cp2

0x38c3,	// (0x000352c4) list_single_2graphic_pane_g3_cp2

0x54cf,	// (0x00036ed0) list_single_2graphic_pane_g4_cp2_ParamLimits

0x54cf,	// (0x00036ed0) list_single_2graphic_pane_g4_cp2

0x54db,	// (0x00036edc) list_single_2graphic_pane_t1_cp2_ParamLimits

0x54db,	// (0x00036edc) list_single_2graphic_pane_t1_cp2

0xe084,	// (0x0003fa85) list_highlight_pane_g10_cp1

0x508a,	// (0x00036a8b) list_highlight_pane_g1_cp1

0x5092,	// (0x00036a93) list_highlight_pane_g2_cp1

0x509a,	// (0x00036a9b) list_highlight_pane_g3_cp1

0x50a2,	// (0x00036aa3) list_highlight_pane_g4_cp1

0x50aa,	// (0x00036aab) list_highlight_pane_g5_cp1

0x50b2,	// (0x00036ab3) list_highlight_pane_g6_cp1

0x50ba,	// (0x00036abb) list_highlight_pane_g7_cp1

0x50c2,	// (0x00036ac3) list_highlight_pane_g8_cp1

0x50ca,	// (0x00036acb) list_highlight_pane_g9_cp1

0xd2d4,	// (0x0003ecd5) form_field_slider_pane_t3

0xd2e2,	// (0x0003ece3) form_field_slider_pane_t4

0x4fc6,	// (0x000369c7) slider_form_pane_ParamLimits

0x4fc6,	// (0x000369c7) slider_form_pane

0xe08e,	// (0x0003fa8f) control_abbreviations

0xe08e,	// (0x0003fa8f) control_conventions

0xe08e,	// (0x0003fa8f) control_definitions

0xe08e,	// (0x0003fa8f) format_table_attribute

0x57b8,	// (0x000371b9) bg_popup_preview_window_pane_g9

0xe08e,	// (0x0003fa8f) format_table_data2

0xe08e,	// (0x0003fa8f) format_table_data3

0xe08e,	// (0x0003fa8f) format_table_data_example

0x0008,

0xe08e,	// (0x0003fa8f) intro_purpose

0xf8f6,	// (0x000412f7) bg_popup_preview_window_pane_g

0xe08e,	// (0x0003fa8f) texts_category

0xe08e,	// (0x0003fa8f) texts_graphics

0x3935,	// (0x00035336) text_digital

0x3944,	// (0x00035345) text_primary

0x3953,	// (0x00035354) text_primary_small

0x3962,	// (0x00035363) text_secondary

0x3971,	// (0x00035372) text_title

0x5f54,	// (0x00037955) bg_passive_tab_pane_g1_cp3_srt

0x35c9,	// (0x00034fca) bg_passive_tab_pane_g2_cp3_srt

0x5f5d,	// (0x0003795e) bg_passive_tab_pane_g3_cp3_srt

0x24b9,	// (0x00033eba) bg_active_tab_pane_cp3_srt_ParamLimits

0x24b9,	// (0x00033eba) bg_active_tab_pane_cp3_srt

0x5f66,	// (0x00037967) tabs_4_active_pane_srt_g1

0xd6e7,	// (0x0003f0e8) tabs_4_active_pane_srt_t1_ParamLimits

0xd6e7,	// (0x0003f0e8) tabs_4_active_pane_srt_t1

0x5f54,	// (0x00037955) bg_active_tab_pane_g1_cp3_copy1

0x35c9,	// (0x00034fca) bg_active_tab_pane_g2_cp3_copy1

0x5f5d,	// (0x0003795e) bg_active_tab_pane_g3_cp3_copy1

0x223d,	// (0x00033c3e) tabs_2_long_active_pane_srt_ParamLimits

0x223d,	// (0x00033c3e) tabs_2_long_active_pane_srt

0x223d,	// (0x00033c3e) tabs_2_long_passive_pane_srt_ParamLimits

0x223d,	// (0x00033c3e) tabs_2_long_passive_pane_srt

0x3d06,	// (0x00035707) bg_passive_tab_pane_cp4_srt_ParamLimits

0x3d06,	// (0x00035707) bg_passive_tab_pane_cp4_srt

0x5c08,	// (0x00037609) bg_passive_tab_pane_g1_cp4_srt

0x35c9,	// (0x00034fca) bg_passive_tab_pane_g2_cp4_srt

0x5c11,	// (0x00037612) bg_passive_tab_pane_g3_cp4_srt

0x223d,	// (0x00033c3e) bg_active_tab_pane_cp4_srt_ParamLimits

0x223d,	// (0x00033c3e) bg_active_tab_pane_cp4_srt

0xd4dd,	// (0x0003eede) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd4dd,	// (0x0003eede) tabs_2_long_active_pane_srt_t1

0x5c08,	// (0x00037609) bg_active_tab_pane_g1_cp4_srt

0x35c9,	// (0x00034fca) bg_active_tab_pane_g2_cp4_srt

0x5c11,	// (0x00037612) bg_active_tab_pane_g3_cp4_srt

0x24b9,	// (0x00033eba) tabs_3_long_active_pane_srt_ParamLimits

0x24b9,	// (0x00033eba) tabs_3_long_active_pane_srt

0x24b9,	// (0x00033eba) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x24b9,	// (0x00033eba) tabs_3_long_passive_pane_cp_srt

0x24b9,	// (0x00033eba) tabs_3_long_passive_pane_srt_ParamLimits

0x24b9,	// (0x00033eba) tabs_3_long_passive_pane_srt

0x3d06,	// (0x00035707) bg_passive_tab_pane_cp5_srt_ParamLimits

0x3d06,	// (0x00035707) bg_passive_tab_pane_cp5_srt

0x3653,	// (0x00035054) bg_passive_tab_pane_g1_cp5_srt

0x35c9,	// (0x00034fca) bg_passive_tab_pane_g2_cp5_srt

0x365c,	// (0x0003505d) bg_passive_tab_pane_g3_cp5_srt

0x223d,	// (0x00033c3e) bg_active_tab_pane_cp5_srt_ParamLimits

0x223d,	// (0x00033c3e) bg_active_tab_pane_cp5_srt

0xd4c7,	// (0x0003eec8) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd4c7,	// (0x0003eec8) tabs_3_long_active_pane_srt_t1

0x3653,	// (0x00035054) bg_active_tab_pane_g1_cp5_srt

0x35c9,	// (0x00034fca) bg_active_tab_pane_g2_cp5_srt

0x365c,	// (0x0003505d) bg_active_tab_pane_g3_cp5_srt

0x5be8,	// (0x000375e9) navi_text_pane_srt_t1

0x5be0,	// (0x000375e1) navi_icon_pane_srt_g1

0x3b48,	// (0x00035549) midp_editing_number_pane_srt

0x3980,	// (0x00035381) midp_ticker_pane_srt

0x3b50,	// (0x00035551) midp_ticker_pane_srt_g1

0x3b58,	// (0x00035559) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x00041186) midp_ticker_pane_srt_g

0x3b60,	// (0x00035561) midp_ticker_pane_srt_t1

0x5bd1,	// (0x000375d2) midp_editing_number_pane_t1_copy1

0xc5f4,	// (0x0003dff5) listscroll_midp_pane

0xc5f4,	// (0x0003dff5) midp_form_pane

0x39f6,	// (0x000353f7) midp_info_popup_window_ParamLimits

0x39f6,	// (0x000353f7) midp_info_popup_window

0x2b7c,	// (0x0003457d) bg_popup_sub_pane_cp50_ParamLimits

0x2b7c,	// (0x0003457d) bg_popup_sub_pane_cp50

0x4cc0,	// (0x000366c1) listscroll_midp_info_pane_ParamLimits

0x4cc0,	// (0x000366c1) listscroll_midp_info_pane

0x4ca8,	// (0x000366a9) listscroll_form_midp_pane_ParamLimits

0x4ca8,	// (0x000366a9) listscroll_form_midp_pane

0x4cb4,	// (0x000366b5) scroll_bar_cp050

0xd2c8,	// (0x0003ecc9) list_midp_pane

0x69de,	// (0x000383df) signal_pane_g2_cp

0x4bc2,	// (0x000365c3) listscroll_midp_info_pane_t1_ParamLimits

0x4bc2,	// (0x000365c3) listscroll_midp_info_pane_t1

0x4bda,	// (0x000365db) listscroll_midp_info_pane_t2_ParamLimits

0x4bda,	// (0x000365db) listscroll_midp_info_pane_t2

0x4c18,	// (0x00036619) listscroll_midp_info_pane_t3_ParamLimits

0x4c18,	// (0x00036619) listscroll_midp_info_pane_t3

0x4c52,	// (0x00036653) listscroll_midp_info_pane_t4_ParamLimits

0x4c52,	// (0x00036653) listscroll_midp_info_pane_t4

0x0003,

0xf831,	// (0x00041232) listscroll_midp_info_pane_t_ParamLimits

0xf831,	// (0x00041232) listscroll_midp_info_pane_t

0x2c46,	// (0x00034647) scroll_pane_cp21

0x4b5c,	// (0x0003655d) form_midp_field_choice_group_pane

0x4b65,	// (0x00036566) form_midp_field_text_pane

0x4ba8,	// (0x000365a9) form_midp_field_time_pane

0x4bb0,	// (0x000365b1) form_midp_gauge_slider_pane

0x4bb9,	// (0x000365ba) form_midp_gauge_wait_pane

0xe08e,	// (0x0003fa8f) form_midp_image_pane

0xbb47,	// (0x0003d548) list_single_midp_pane_ParamLimits

0xbb47,	// (0x0003d548) list_single_midp_pane

0xd2a0,	// (0x0003eca1) form_midp_field_text_pane_t1

0x4934,	// (0x00036335) input_focus_pane_cp050

0x4b4b,	// (0x0003654c) list_midp_form_text_pane

0x4aef,	// (0x000364f0) form_midp_field_choice_group_pane_t1

0x4afd,	// (0x000364fe) input_focus_pane_cp051

0x4b11,	// (0x00036512) list_midp_choice_pane

0xe08e,	// (0x0003fa8f) status_idle_pane

0x4ad3,	// (0x000364d4) form_midp_field_time_pane_t1

0xe084,	// (0x0003fa85) wait_anim_pane_g2_copy1

0x4ae1,	// (0x000364e2) form_midp_field_time_pane_t2

0x0001,

0x3aa6,	// (0x000354a7) aid_navinavi_width_2_pane

0xf82c,	// (0x0004122d) form_midp_field_time_pane_t

0xe08e,	// (0x0003fa8f) input_focus_pane_cp052

0xe08e,	// (0x0003fa8f) bg_input_focus_pane_cp040

0x4a93,	// (0x00036494) form_midp_gauge_slider_pane_t1

0x4aa1,	// (0x000364a2) form_midp_gauge_slider_pane_t2

0xd284,	// (0x0003ec85) form_midp_gauge_slider_pane_t3

0xd292,	// (0x0003ec93) form_midp_gauge_slider_pane_t4

0x0003,

0xf823,	// (0x00041224) form_midp_gauge_slider_pane_t

0x4acb,	// (0x000364cc) form_midp_slider_pane

0x223d,	// (0x00033c3e) bg_input_focus_pane_cp041_ParamLimits

0x223d,	// (0x00033c3e) bg_input_focus_pane_cp041

0x4a60,	// (0x00036461) form_midp_gauge_wait_pane_t1_ParamLimits

0x4a60,	// (0x00036461) form_midp_gauge_wait_pane_t1

0x4a72,	// (0x00036473) form_midp_gauge_wait_pane_t2_ParamLimits

0x4a72,	// (0x00036473) form_midp_gauge_wait_pane_t2

0x0001,

0xf81e,	// (0x0004121f) form_midp_gauge_wait_pane_t_ParamLimits

0xf81e,	// (0x0004121f) form_midp_gauge_wait_pane_t

0x4a84,	// (0x00036485) form_midp_wait_pane_ParamLimits

0x4a84,	// (0x00036485) form_midp_wait_pane

0x4a28,	// (0x00036429) form_midp_image_pane_g1

0x4a31,	// (0x00036432) form_midp_image_pane_t1

0x4a40,	// (0x00036441) form_midp_image_pane_t2

0x4a4f,	// (0x00036450) form_midp_image_pane_t3

0x0002,

0xf817,	// (0x00041218) form_midp_image_pane_t

0x4a1f,	// (0x00036420) list_single_midp_pane_g1

0x0c6f,	// (0x00032670) list_single_midp_pane_t1

0xd26d,	// (0x0003ec6e) list_midp_form_item_pane_ParamLimits

0xd26d,	// (0x0003ec6e) list_midp_form_item_pane

0x3a4e,	// (0x0003544f) list_midp_form_item_pane_t1

0x3a5d,	// (0x0003545e) midp_ticker_pane_g1

0x3a69,	// (0x0003546a) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0004116c) midp_ticker_pane_g

0xc69c,	// (0x0003e09d) midp_ticker_pane_t1

0xd66c,	// (0x0003f06d) midp_editing_number_pane_t1

0x5e2e,	// (0x0003782f) midp_editing_number_pane

0x5e3d,	// (0x0003783e) midp_ticker_pane

0x5bc1,	// (0x000375c2) ai_message_heading_pane

0xe08e,	// (0x0003fa8f) bg_popup_window_pane_cp14

0x5bc9,	// (0x000375ca) listscroll_ai_message_pane

0x5b47,	// (0x00037548) ai_message_heading_pane_g1_ParamLimits

0x5b47,	// (0x00037548) ai_message_heading_pane_g1

0x5b53,	// (0x00037554) ai_message_heading_pane_g2_ParamLimits

0x5b53,	// (0x00037554) ai_message_heading_pane_g2

0x5b61,	// (0x00037562) ai_message_heading_pane_g3_ParamLimits

0x5b61,	// (0x00037562) ai_message_heading_pane_g3

0x5b6d,	// (0x0003756e) ai_message_heading_pane_g4_ParamLimits

0x5b6d,	// (0x0003756e) ai_message_heading_pane_g4

0x0003,

0xf958,	// (0x00041359) ai_message_heading_pane_g_ParamLimits

0xf958,	// (0x00041359) ai_message_heading_pane_g

0x5b79,	// (0x0003757a) ai_message_heading_pane_t1_ParamLimits

0x5b79,	// (0x0003757a) ai_message_heading_pane_t1

0x5b93,	// (0x00037594) ai_message_heading_pane_t2_ParamLimits

0x5b93,	// (0x00037594) ai_message_heading_pane_t2

0x0001,

0xf961,	// (0x00041362) ai_message_heading_pane_t_ParamLimits

0xf961,	// (0x00041362) ai_message_heading_pane_t

0x5ba7,	// (0x000375a8) bg_popup_heading_pane_cp1_ParamLimits

0x5ba7,	// (0x000375a8) bg_popup_heading_pane_cp1

0x5b35,	// (0x00037536) list_ai_message_pane_ParamLimits

0x5b35,	// (0x00037536) list_ai_message_pane

0x2c46,	// (0x00034647) scroll_pane_cp10

0x5ad1,	// (0x000374d2) list_ai_message_pane_g1

0x5ad9,	// (0x000374da) list_ai_message_pane_g2

0x0001,

0xf935,	// (0x00041336) list_ai_message_pane_g

0x5ae1,	// (0x000374e2) list_ai_message_pane_t1_ParamLimits

0x5ae1,	// (0x000374e2) list_ai_message_pane_t1

0x5af6,	// (0x000374f7) list_ai_message_pane_t2_ParamLimits

0x5af6,	// (0x000374f7) list_ai_message_pane_t2

0x5b0b,	// (0x0003750c) list_ai_message_pane_t3_ParamLimits

0x5b0b,	// (0x0003750c) list_ai_message_pane_t3

0x5b20,	// (0x00037521) list_ai_message_pane_t4_ParamLimits

0x5b20,	// (0x00037521) list_ai_message_pane_t4

0x0003,

0xf93a,	// (0x0004133b) list_ai_message_pane_t_ParamLimits

0xf93a,	// (0x0004133b) list_ai_message_pane_t

0xd4ad,	// (0x0003eeae) cell_ai_soft_ind_pane_ParamLimits

0xd4ad,	// (0x0003eeae) cell_ai_soft_ind_pane

0x3a87,	// (0x00035488) cell_ai_soft_ind_pane_g1_ParamLimits

0x3a87,	// (0x00035488) cell_ai_soft_ind_pane_g1

0xe08e,	// (0x0003fa8f) grid_highlight_cp1

0x3a94,	// (0x00035495) text_secondary_cp56_ParamLimits

0x3a94,	// (0x00035495) text_secondary_cp56

0x5a8f,	// (0x00037490) example_general_pane_ParamLimits

0x5a8f,	// (0x00037490) example_general_pane

0x5a9b,	// (0x0003749c) example_parent_pane_g1_ParamLimits

0x5a9b,	// (0x0003749c) example_parent_pane_g1

0x5aa7,	// (0x000374a8) example_parent_pane_t1_ParamLimits

0x5aa7,	// (0x000374a8) example_parent_pane_t1

0xcb00,	// (0x0003e501) popup_preview_text_window_ParamLimits

0xcb00,	// (0x0003e501) popup_preview_text_window

0x38af,	// (0x000352b0) list_single_pane_cp2_g4

0x256f,	// (0x00033f70) bg_popup_preview_window_pane_ParamLimits

0x256f,	// (0x00033f70) bg_popup_preview_window_pane

0x57c2,	// (0x000371c3) popup_preview_text_window_t1_ParamLimits

0x57c2,	// (0x000371c3) popup_preview_text_window_t1

0x57e0,	// (0x000371e1) popup_preview_text_window_t2_ParamLimits

0x57e0,	// (0x000371e1) popup_preview_text_window_t2

0x5829,	// (0x0003722a) popup_preview_text_window_t3_ParamLimits

0x5829,	// (0x0003722a) popup_preview_text_window_t3

0x586e,	// (0x0003726f) popup_preview_text_window_t4_ParamLimits

0x586e,	// (0x0003726f) popup_preview_text_window_t4

0x0004,

0xf909,	// (0x0004130a) popup_preview_text_window_t_ParamLimits

0xf909,	// (0x0004130a) popup_preview_text_window_t

0x58ec,	// (0x000372ed) scroll_pane_cp11

0x4842,	// (0x00036243) bg_popup_preview_window_pane_g1

0x5776,	// (0x00037177) bg_popup_preview_window_pane_g2

0x5780,	// (0x00037181) bg_popup_preview_window_pane_g3

0x578a,	// (0x0003718b) bg_popup_preview_window_pane_g4

0x5794,	// (0x00037195) bg_popup_preview_window_pane_g5

0x579e,	// (0x0003719f) bg_popup_preview_window_pane_g6

0x57a6,	// (0x000371a7) bg_popup_preview_window_pane_g7

0x57ae,	// (0x000371af) bg_popup_preview_window_pane_g8

0xef0b,	// (0x0004090c) aid_popup_width_pane

0xca70,	// (0x0003e471) popup_midp_note_alarm_window_ParamLimits

0xca70,	// (0x0003e471) popup_midp_note_alarm_window

0x2ab8,	// (0x000344b9) data_form_pane_ParamLimits

0xb789,	// (0x0003d18a) form_field_data_pane_g1

0xb793,	// (0x0003d194) form_field_data_pane_t1_ParamLimits

0x2ac4,	// (0x000344c5) input_focus_pane_ParamLimits

0x2ad2,	// (0x000344d3) data_form_wide_pane_ParamLimits

0x02ac,	// (0x00031cad) form_field_data_wide_pane_g1

0x02b8,	// (0x00031cb9) form_field_data_wide_pane_t1_ParamLimits

0x2835,	// (0x00034236) input_focus_pane_cp6_ParamLimits

0xb8da,	// (0x0003d2db) input_popup_find_pane_g1_ParamLimits

0xb8da,	// (0x0003d2db) input_popup_find_pane_g1

0x0528,	// (0x00031f29) aid_navi_side_left_pane

0x053d,	// (0x00031f3e) aid_navi_side_right_pane

0x5185,	// (0x00036b86) bg_popup_window_pane_cp30_ParamLimits

0x5185,	// (0x00036b86) bg_popup_window_pane_cp30

0x51ff,	// (0x00036c00) popup_midp_note_alarm_window_g1_ParamLimits

0x51ff,	// (0x00036c00) popup_midp_note_alarm_window_g1

0x522f,	// (0x00036c30) popup_midp_note_alarm_window_t1_ParamLimits

0x522f,	// (0x00036c30) popup_midp_note_alarm_window_t1

0x52d0,	// (0x00036cd1) popup_midp_note_alarm_window_t2_ParamLimits

0x52d0,	// (0x00036cd1) popup_midp_note_alarm_window_t2

0x537e,	// (0x00036d7f) popup_midp_note_alarm_window_t3_ParamLimits

0x537e,	// (0x00036d7f) popup_midp_note_alarm_window_t3

0x53b0,	// (0x00036db1) popup_midp_note_alarm_window_t4_ParamLimits

0x53b0,	// (0x00036db1) popup_midp_note_alarm_window_t4

0x53d6,	// (0x00036dd7) popup_midp_note_alarm_window_t5_ParamLimits

0x53d6,	// (0x00036dd7) popup_midp_note_alarm_window_t5

0x000a,

0xf8a6,	// (0x000412a7) popup_midp_note_alarm_window_t_ParamLimits

0xf8a6,	// (0x000412a7) popup_midp_note_alarm_window_t

0x5482,	// (0x00036e83) wait_bar_pane_cp1_ParamLimits

0x5482,	// (0x00036e83) wait_bar_pane_cp1

0xe08e,	// (0x0003fa8f) wait_anim_pane_copy1

0xe08e,	// (0x0003fa8f) wait_border_pane_copy1

0x4e6a,	// (0x0003686b) wait_border_pane_g1_copy1

0x02d2,	// (0x00031cd3) form_field_popup_pane_g1

0xb7ad,	// (0x0003d1ae) form_field_popup_pane_t1_ParamLimits

0x2ac4,	// (0x000344c5) input_focus_pane_cp7_ParamLimits

0x2afe,	// (0x000344ff) list_form_pane_ParamLimits

0x02f4,	// (0x00031cf5) form_field_popup_wide_pane_g1

0x02fc,	// (0x00031cfd) form_field_popup_wide_pane_t1_ParamLimits

0x2ac4,	// (0x000344c5) input_focus_pane_cp8_ParamLimits

0x2b0a,	// (0x0003450b) list_form_wide_pane_ParamLimits

0x5fe1,	// (0x000379e2) aid_size_cell_graphic_pane

0xb82c,	// (0x0003d22d) data_form_pane_t1_ParamLimits

0xbcdd,	// (0x0003d6de) data_form_wide_pane_t1_ParamLimits

0xcefd,	// (0x0003e8fe) bg_status_flat_pane

0xaf9d,	// (0x0003c99e) title_pane_t1_ParamLimits

0x2205,	// (0x00033c06) title_pane_t2_ParamLimits

0x222b,	// (0x00033c2c) title_pane_t3_ParamLimits

0xf573,	// (0x00040f74) title_pane_t_ParamLimits

0xc495,	// (0x0003de96) level_1_signal_ParamLimits

0xc4a7,	// (0x0003dea8) level_2_signal_ParamLimits

0xc4ba,	// (0x0003debb) level_3_signal_ParamLimits

0xc4cd,	// (0x0003dece) level_4_signal_ParamLimits

0xc4e0,	// (0x0003dee1) level_5_signal_ParamLimits

0xc4f3,	// (0x0003def4) level_6_signal_ParamLimits

0xc506,	// (0x0003df07) level_7_signal_ParamLimits

0xc495,	// (0x0003de96) level_1_battery_ParamLimits

0xc4a7,	// (0x0003dea8) level_2_battery_ParamLimits

0xc4ba,	// (0x0003debb) level_3_battery_ParamLimits

0xc4cd,	// (0x0003dece) level_4_battery_ParamLimits

0xc4e0,	// (0x0003dee1) level_5_battery_ParamLimits

0xc4f3,	// (0x0003def4) level_6_battery_ParamLimits

0xc506,	// (0x0003df07) level_7_battery_ParamLimits

0x508a,	// (0x00036a8b) bg_status_flat_pane_g1

0x5092,	// (0x00036a93) bg_status_flat_pane_g2

0x509a,	// (0x00036a9b) bg_status_flat_pane_g3

0x50a2,	// (0x00036aa3) bg_status_flat_pane_g4

0x50aa,	// (0x00036aab) bg_status_flat_pane_g5

0x50b2,	// (0x00036ab3) bg_status_flat_pane_g6

0x50ba,	// (0x00036abb) bg_status_flat_pane_g7

0xb031,	// (0x0003ca32) tabs_3_active_pane_t1_ParamLimits

0xb031,	// (0x0003ca32) tabs_3_passive_pane_t1_ParamLimits

0xb04b,	// (0x0003ca4c) tabs_4_active_pane_t1_ParamLimits

0xb04b,	// (0x0003ca4c) tabs_4_1_passive_pane_t1_ParamLimits

0xc3a4,	// (0x0003dda5) tabs_2_active_pane_t1_ParamLimits

0xc3a4,	// (0x0003dda5) tabs_2_passive_pane_t1_ParamLimits

0x223d,	// (0x00033c3e) bg_active_tab_pane_cp4_ParamLimits

0xc3b6,	// (0x0003ddb7) tabs_2_long_active_pane_t1_ParamLimits

0x3d06,	// (0x00035707) bg_passive_tab_pane_cp4_ParamLimits

0x0bb6,	// (0x000325b7) list_single_midp_graphic_pane_t1_ParamLimits

0x223d,	// (0x00033c3e) bg_active_tab_pane_cp5_ParamLimits

0xc3c9,	// (0x0003ddca) tabs_3_long_active_pane_t1_ParamLimits

0x3d06,	// (0x00035707) bg_passive_tab_pane_cp5_ParamLimits

0x0bb6,	// (0x000325b7) list_single_midp_graphic_pane_t1

0xcefd,	// (0x0003e8fe) bg_status_flat_pane_ParamLimits

0x44bb,	// (0x00035ebc) indicator_pane_cp2_ParamLimits

0x44bb,	// (0x00035ebc) indicator_pane_cp2

0xd092,	// (0x0003ea93) navi_pane_srt_ParamLimits

0xd092,	// (0x0003ea93) navi_pane_srt

0x4621,	// (0x00036022) popup_clock_digital_analogue_window_cp1

0x231d,	// (0x00033d1e) indicator_pane_t1

0x3980,	// (0x00035381) copy_highlight_pane

0x3980,	// (0x00035381) cursor_graphics_pane

0x3980,	// (0x00035381) graphic_within_text_pane

0x3980,	// (0x00035381) link_highlight_pane

0x58af,	// (0x000372b0) popup_preview_text_window_t5_ParamLimits

0x58af,	// (0x000372b0) popup_preview_text_window_t5

0x3ab0,	// (0x000354b1) cursor_digital_pane

0x3ab0,	// (0x000354b1) cursor_primary_pane

0x3ac1,	// (0x000354c2) cursor_primary_small_pane

0x3ac9,	// (0x000354ca) cursor_secondary_pane

0x3ad1,	// (0x000354d2) cursor_title_pane

0x3ab0,	// (0x000354b1) link_highlight_digital_pane

0x3ab8,	// (0x000354b9) link_highlight_primary_pane

0x3ac1,	// (0x000354c2) link_highlight_primary_small_pane

0x3ac9,	// (0x000354ca) link_highlight_secondary_pane

0x3ad1,	// (0x000354d2) link_highlight_title_pane

0x3ab0,	// (0x000354b1) copy_highlight_digital_pane

0x3ab0,	// (0x000354b1) copy_highlight_primary_pane

0x3ac1,	// (0x000354c2) copy_highlight_primary_small_pane

0x3ac9,	// (0x000354ca) copy_highlight_secondary_pane

0x3ad1,	// (0x000354d2) copy_highlight_title_pane

0x3ac9,	// (0x000354ca) graphic_text_digital_pane

0x5128,	// (0x00036b29) graphic_text_primary_pane

0x5131,	// (0x00036b32) graphic_text_primary_small_pane

0x3ac1,	// (0x000354c2) graphic_text_secondary_pane

0x3ab0,	// (0x000354b1) graphic_text_title_pane

0xc6ae,	// (0x0003e0af) cursor_primary_pane_g1

0x511a,	// (0x00036b1b) cursor_text_primary_t1

0xd304,	// (0x0003ed05) cursor_primary_small_pane_g1

0x510c,	// (0x00036b0d) cursor_text_primary_small_t1

0xd2fa,	// (0x0003ecfb) cursor_primary_small_pane_g1_copy1

0x50f4,	// (0x00036af5) cursor_text_primary_small_t1_copy1

0x50d2,	// (0x00036ad3) cursor_text_title_t1

0xd2f0,	// (0x0003ecf1) cursor_title_pane_g1

0xc6ae,	// (0x0003e0af) cursor_digital_pane_g1

0x3ae3,	// (0x000354e4) cursor_text_digital_t1

0x3af1,	// (0x000354f2) link_highlight_primary_pane_g1

0x507b,	// (0x00036a7c) link_highlight_primary_pane_t1

0x3af1,	// (0x000354f2) link_highlight_primary_small_pane_g1

0x3af9,	// (0x000354fa) link_highlight_primary_small_pane_t1

0x3b08,	// (0x00035509) link_highlight_secondary_pane_g1

0x3b10,	// (0x00035511) link_highlight_secondary_pane_t1

0x4fef,	// (0x000369f0) link_highlight_title_pane_g1

0x4ff7,	// (0x000369f8) link_highlight_title_pane_t1

0x4fd8,	// (0x000369d9) link_highlight_digital_pane_g1

0x4fe0,	// (0x000369e1) link_highlight_digital_pane_t1

0x4ea0,	// (0x000368a1) copy_highlight_primary_pane_g1

0x4eb7,	// (0x000368b8) copy_highlight_primary_pane_t1

0x4ea0,	// (0x000368a1) copy_highlight_primary_small_pane_g1

0x4ea8,	// (0x000368a9) copy_highlight_primary_small_pane_t1

0x3b1f,	// (0x00035520) copy_highlight_secondary_pane_g1

0x3b27,	// (0x00035528) copy_highlight_secondary_pane_t1

0x4e89,	// (0x0003688a) copy_highlight_title_pane_g1

0x4e91,	// (0x00036892) copy_highlight_title_pane_t1

0x4ea0,	// (0x000368a1) copy_highlight_digital_pane_g1

0x61b1,	// (0x00037bb2) copy_highlight_digital_pane_t1

0x6105,	// (0x00037b06) graphic_text_primary_pane_g1

0x6195,	// (0x00037b96) graphic_text_primary_pane_t1

0x61a3,	// (0x00037ba4) graphic_text_primary_pane_t2

0x0001,

0xf9d5,	// (0x000413d6) graphic_text_primary_pane_t

0x6171,	// (0x00037b72) graphic_text_primary_small_pane_g1

0x6179,	// (0x00037b7a) graphic_text_primary_small_pane_t1

0x6187,	// (0x00037b88) graphic_text_primary_small_pane_t2

0x0001,

0xf9d0,	// (0x000413d1) graphic_text_primary_small_pane_t

0x614d,	// (0x00037b4e) graphic_text_secondary_pane_g1

0x6155,	// (0x00037b56) graphic_text_secondary_pane_t1

0x6163,	// (0x00037b64) graphic_text_secondary_pane_t2

0x0001,

0xf9cb,	// (0x000413cc) graphic_text_secondary_pane_t

0x6129,	// (0x00037b2a) graphic_text_title_pane_g1

0x6131,	// (0x00037b32) graphic_text_title_pane_t1

0x613f,	// (0x00037b40) graphic_text_title_pane_t2

0x0001,

0xf9c6,	// (0x000413c7) graphic_text_title_pane_t

0x6105,	// (0x00037b06) graphic_text_digital_pane_g1

0x610d,	// (0x00037b0e) graphic_text_digital_pane_t1

0x611b,	// (0x00037b1c) graphic_text_digital_pane_t2

0x0001,

0xf9c1,	// (0x000413c2) graphic_text_digital_pane_t

0x223d,	// (0x00033c3e) navi_icon_pane_srt_ParamLimits

0x223d,	// (0x00033c3e) navi_icon_pane_srt

0xe08e,	// (0x0003fa8f) navi_midp_pane_srt

0xe08e,	// (0x0003fa8f) navi_navi_pane_srt

0x223d,	// (0x00033c3e) navi_text_pane_srt_ParamLimits

0x223d,	// (0x00033c3e) navi_text_pane_srt

0x60d0,	// (0x00037ad1) navi_navi_icon_text_pane_srt

0x60d8,	// (0x00037ad9) navi_navi_pane_srt_g1_ParamLimits

0x60d8,	// (0x00037ad9) navi_navi_pane_srt_g1

0x60ea,	// (0x00037aeb) navi_navi_pane_srt_g2_ParamLimits

0x60ea,	// (0x00037aeb) navi_navi_pane_srt_g2

0x0001,

0xf9bc,	// (0x000413bd) navi_navi_pane_srt_g_ParamLimits

0xf9bc,	// (0x000413bd) navi_navi_pane_srt_g

0x60fc,	// (0x00037afd) navi_navi_tabs_pane_srt

0x60d0,	// (0x00037ad1) navi_navi_text_pane_srt

0x60d0,	// (0x00037ad1) navi_navi_volume_pane_srt

0x60c1,	// (0x00037ac2) navi_navi_text_pane_srt_t1

0x104a,	// (0x00032a4b) navi_navi_volume_pane_srt_g1

0x1052,	// (0x00032a53) volume_small_pane_srt_ParamLimits

0x1052,	// (0x00032a53) volume_small_pane_srt

0x089b,	// (0x0003229c) volume_small_pane_srt_g1_ParamLimits

0x089b,	// (0x0003229c) volume_small_pane_srt_g1

0x08ab,	// (0x000322ac) volume_small_pane_srt_g2_ParamLimits

0x08ab,	// (0x000322ac) volume_small_pane_srt_g2

0x08bc,	// (0x000322bd) volume_small_pane_srt_g3_ParamLimits

0x08bc,	// (0x000322bd) volume_small_pane_srt_g3

0x08cd,	// (0x000322ce) volume_small_pane_srt_g4_ParamLimits

0x08cd,	// (0x000322ce) volume_small_pane_srt_g4

0x08de,	// (0x000322df) volume_small_pane_srt_g5_ParamLimits

0x08de,	// (0x000322df) volume_small_pane_srt_g5

0x08ef,	// (0x000322f0) volume_small_pane_srt_g6_ParamLimits

0x08ef,	// (0x000322f0) volume_small_pane_srt_g6

0x0900,	// (0x00032301) volume_small_pane_srt_g7_ParamLimits

0x0900,	// (0x00032301) volume_small_pane_srt_g7

0x0911,	// (0x00032312) volume_small_pane_srt_g8_ParamLimits

0x0911,	// (0x00032312) volume_small_pane_srt_g8

0x0922,	// (0x00032323) volume_small_pane_srt_g9_ParamLimits

0x0922,	// (0x00032323) volume_small_pane_srt_g9

0x0933,	// (0x00032334) volume_small_pane_srt_g10_ParamLimits

0x0933,	// (0x00032334) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x00041171) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x00041171) volume_small_pane_srt_g

0x2624,	// (0x00034025) query_popup_data_pane_cp2

0x60a7,	// (0x00037aa8) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x60a7,	// (0x00037aa8) navi_navi_icon_text_pane_srt_t1

0x5128,	// (0x00036b29) navi_tabs_2_long_pane_srt

0x5128,	// (0x00036b29) navi_tabs_2_pane_srt

0x5128,	// (0x00036b29) navi_tabs_3_long_pane_srt

0x5128,	// (0x00036b29) navi_tabs_3_pane_srt

0x5128,	// (0x00036b29) navi_tabs_4_pane_srt

0x102a,	// (0x00032a2b) tabs_2_active_pane_srt_ParamLimits

0x102a,	// (0x00032a2b) tabs_2_active_pane_srt

0x103a,	// (0x00032a3b) tabs_2_passive_pane_srt_ParamLimits

0x103a,	// (0x00032a3b) tabs_2_passive_pane_srt

0x4934,	// (0x00036335) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4934,	// (0x00036335) bg_passive_tab_pane_cp1_srt

0x6073,	// (0x00037a74) bg_passive_tab_pane_g1_cp1_srt

0x35c9,	// (0x00034fca) bg_passive_tab_pane_g2_cp1_srt

0x607c,	// (0x00037a7d) bg_passive_tab_pane_g3_cp1_srt

0x24b9,	// (0x00033eba) bg_active_tab_pane_cp1_srt_ParamLimits

0x24b9,	// (0x00033eba) bg_active_tab_pane_cp1_srt

0x6085,	// (0x00037a86) tabs_2_active_pane_srt_g1

0xd767,	// (0x0003f168) tabs_2_active_pane_srt_t1_ParamLimits

0xd767,	// (0x0003f168) tabs_2_active_pane_srt_t1

0x6073,	// (0x00037a74) bg_active_tab_pane_g1_cp1_srt

0x35c9,	// (0x00034fca) bg_active_tab_pane_g2_cp1_srt

0x607c,	// (0x00037a7d) bg_active_tab_pane_g3_cp1_srt

0x0ff7,	// (0x000329f8) tabs_3_active_pane_srt_ParamLimits

0x0ff7,	// (0x000329f8) tabs_3_active_pane_srt

0x1008,	// (0x00032a09) tabs_3_passive_pane_cp_srt_ParamLimits

0x1008,	// (0x00032a09) tabs_3_passive_pane_cp_srt

0x1019,	// (0x00032a1a) tabs_3_passive_pane_srt_ParamLimits

0x1019,	// (0x00032a1a) tabs_3_passive_pane_srt

0x4934,	// (0x00036335) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4934,	// (0x00036335) bg_passive_tab_pane_cp2_srt

0x3b36,	// (0x00035537) bg_passive_tab_pane_g1_cp2_srt

0x35c9,	// (0x00034fca) bg_passive_tab_pane_g2_cp2_srt

0x3b3f,	// (0x00035540) bg_passive_tab_pane_g3_cp2_srt

0x24b9,	// (0x00033eba) bg_active_tab_pane_cp2_srt_ParamLimits

0x24b9,	// (0x00033eba) bg_active_tab_pane_cp2_srt

0x6059,	// (0x00037a5a) tabs_3_active_pane_srt_g1

0xd751,	// (0x0003f152) tabs_3_active_pane_srt_t1_ParamLimits

0xd751,	// (0x0003f152) tabs_3_active_pane_srt_t1

0x3b36,	// (0x00035537) bg_active_tab_pane_g1_cp2_srt

0x35c9,	// (0x00034fca) bg_active_tab_pane_g2_cp2_srt

0x3b3f,	// (0x00035540) bg_active_tab_pane_g3_cp2_srt

0x0faf,	// (0x000329b0) tabs_4_active_pane_srt_ParamLimits

0x0faf,	// (0x000329b0) tabs_4_active_pane_srt

0x0fc1,	// (0x000329c2) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0fc1,	// (0x000329c2) tabs_4_passive_pane_cp2_srt

0x3c94,	// (0x00035695) aid_size_cell_toolbar

0x5c7b,	// (0x0003767c) main_idle_act_pane_ParamLimits

0x3ecb,	// (0x000358cc) popup_large_graphic_colour_window_ParamLimits

0xcdc6,	// (0x0003e7c7) popup_toolbar_window_ParamLimits

0xcdc6,	// (0x0003e7c7) popup_toolbar_window

0x0f6a,	// (0x0003296b) list_single_graphic_2heading_pane_ParamLimits

0x0f6a,	// (0x0003296b) list_single_graphic_2heading_pane

0x30d5,	// (0x00034ad6) aid_size_cell_apps_grid_lsc_pane

0x30e7,	// (0x00034ae8) aid_size_cell_apps_grid_prt_pane

0x3d06,	// (0x00035707) bg_wml_button_pane_cp1_ParamLimits

0x3d06,	// (0x00035707) bg_wml_button_pane_cp1

0xd2a0,	// (0x0003eca1) form_midp_field_text_pane_t1_ParamLimits

0x4934,	// (0x00036335) input_focus_pane_cp050_ParamLimits

0x4b4b,	// (0x0003654c) list_midp_form_text_pane_ParamLimits

0x4afd,	// (0x000364fe) input_focus_pane_cp051_ParamLimits

0x4b11,	// (0x00036512) list_midp_choice_pane_ParamLimits

0xd257,	// (0x0003ec58) list_single_2graphic_pane_cp3_ParamLimits

0xd257,	// (0x0003ec58) list_single_2graphic_pane_cp3

0x6d07,	// (0x00038708) list_single_midp_graphic_pane_ParamLimits

0x6d07,	// (0x00038708) list_single_midp_graphic_pane

0xefe3,	// (0x000409e4) list_single_graphic_2heading_pane_g1_ParamLimits

0xefe3,	// (0x000409e4) list_single_graphic_2heading_pane_g1

0xefef,	// (0x000409f0) list_single_graphic_2heading_pane_g4_ParamLimits

0xefef,	// (0x000409f0) list_single_graphic_2heading_pane_g4

0xeffb,	// (0x000409fc) list_single_graphic_2heading_pane_g5_ParamLimits

0xeffb,	// (0x000409fc) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x000411c4) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x000411c4) list_single_graphic_2heading_pane_g

0xf007,	// (0x00040a08) list_single_graphic_2heading_pane_t1_ParamLimits

0xf007,	// (0x00040a08) list_single_graphic_2heading_pane_t1

0xf01b,	// (0x00040a1c) list_single_graphic_2heading_pane_t2_ParamLimits

0xf01b,	// (0x00040a1c) list_single_graphic_2heading_pane_t2

0xf037,	// (0x00040a38) list_single_graphic_2heading_pane_t3_ParamLimits

0xf037,	// (0x00040a38) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x000411cb) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x000411cb) list_single_graphic_2heading_pane_t

0x4780,	// (0x00036181) bg_popup_sub_pane_cp2

0x47aa,	// (0x000361ab) grid_toobar_pane

0x0aaa,	// (0x000324ab) cell_toolbar_pane_ParamLimits

0x0aaa,	// (0x000324ab) cell_toolbar_pane

0x47e6,	// (0x000361e7) cell_toolbar_pane_g1_ParamLimits

0x47e6,	// (0x000361e7) cell_toolbar_pane_g1

0x47fa,	// (0x000361fb) cell_toolbar_pane_g2_ParamLimits

0x47fa,	// (0x000361fb) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x000411d9) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x000411d9) cell_toolbar_pane_g

0x481c,	// (0x0003621d) grid_highlight_pane_cp2_ParamLimits

0x481c,	// (0x0003621d) grid_highlight_pane_cp2

0x4836,	// (0x00036237) toolbar_button_pane

0x4842,	// (0x00036243) toolbar_button_pane_g1

0x484a,	// (0x0003624b) toolbar_button_pane_g2

0x4852,	// (0x00036253) toolbar_button_pane_g3

0x485a,	// (0x0003625b) toolbar_button_pane_g4

0x4862,	// (0x00036263) toolbar_button_pane_g5

0x486a,	// (0x0003626b) toolbar_button_pane_g6

0x4872,	// (0x00036273) toolbar_button_pane_g7

0x487a,	// (0x0003627b) toolbar_button_pane_g8

0x4882,	// (0x00036283) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x000411de) toolbar_button_pane_g

0x0b1c,	// (0x0003251d) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0b1c,	// (0x0003251d) list_single_2graphic_pane_g1_cp3

0xbad5,	// (0x0003d4d6) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbad5,	// (0x0003d4d6) list_single_2graphic_pane_g2_cp3

0x0b39,	// (0x0003253a) list_single_2graphic_pane_g3_cp3

0x0b41,	// (0x00032542) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0b41,	// (0x00032542) list_single_2graphic_pane_g4_cp3

0x0b4d,	// (0x0003254e) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0b4d,	// (0x0003254e) list_single_2graphic_pane_t1_cp3

0x0baa,	// (0x000325ab) list_single_midp_graphic_pane_g2_ParamLimits

0x0baa,	// (0x000325ab) list_single_midp_graphic_pane_g2

0x3c9c,	// (0x0003569d) aid_zoom_text_primary

0x0a9a,	// (0x0003249b) aid_zoom_text_secondary

0x3bf3,	// (0x000355f4) status_small_pane_g7_ParamLimits

0x3bf3,	// (0x000355f4) status_small_pane_g7

0x3c16,	// (0x00035617) status_small_pane_t1_ParamLimits

0xaf79,	// (0x0003c97a) title_pane_g2

0x0003,

0xf56a,	// (0x00040f6b) title_pane_g

0xb211,	// (0x0003cc12) aid_size_cell_colour_1_pane_ParamLimits

0xb211,	// (0x0003cc12) aid_size_cell_colour_1_pane

0xb225,	// (0x0003cc26) aid_size_cell_colour_2_pane_ParamLimits

0xb225,	// (0x0003cc26) aid_size_cell_colour_2_pane

0xb239,	// (0x0003cc3a) aid_size_cell_colour_3_pane_ParamLimits

0xb239,	// (0x0003cc3a) aid_size_cell_colour_3_pane

0xb24d,	// (0x0003cc4e) aid_size_cell_colour_4_pane_ParamLimits

0xb24d,	// (0x0003cc4e) aid_size_cell_colour_4_pane

0x0464,	// (0x00031e65) title_pane_stacon_g1_ParamLimits

0x0464,	// (0x00031e65) title_pane_stacon_g1

0x4f0e,	// (0x0003690f) popup_note_wait_window_g3_ParamLimits

0x4f0e,	// (0x0003690f) popup_note_wait_window_g3

0x4f85,	// (0x00036986) popup_note_wait_window_t5_ParamLimits

0x4f85,	// (0x00036986) popup_note_wait_window_t5

0xe08e,	// (0x0003fa8f) main_feb_china_hwr_fs_writing_pane

0xc761,	// (0x0003e162) popup_feb_china_hwr_fs_window_ParamLimits

0xc761,	// (0x0003e162) popup_feb_china_hwr_fs_window

0xbae6,	// (0x0003d4e7) aid_size_cell_hwr_fs_ParamLimits

0xbae6,	// (0x0003d4e7) aid_size_cell_hwr_fs

0x4934,	// (0x00036335) bg_popup_sub_pane_cp3_ParamLimits

0x4934,	// (0x00036335) bg_popup_sub_pane_cp3

0xbafb,	// (0x0003d4fc) grid_hwr_fs_pane_ParamLimits

0xbafb,	// (0x0003d4fc) grid_hwr_fs_pane

0x0bf9,	// (0x000325fa) linegrid_hwr_fs_pane_ParamLimits

0x0bf9,	// (0x000325fa) linegrid_hwr_fs_pane

0xbb13,	// (0x0003d514) cell_hwr_fs_pane_ParamLimits

0xbb13,	// (0x0003d514) cell_hwr_fs_pane

0x4940,	// (0x00036341) linegrid_hwr_fs_pane_g1_ParamLimits

0x4940,	// (0x00036341) linegrid_hwr_fs_pane_g1

0xd22b,	// (0x0003ec2c) linegrid_hwr_fs_pane_g2_ParamLimits

0xd22b,	// (0x0003ec2c) linegrid_hwr_fs_pane_g2

0x495e,	// (0x0003635f) linegrid_hwr_fs_pane_g3_ParamLimits

0x495e,	// (0x0003635f) linegrid_hwr_fs_pane_g3

0x0c2d,	// (0x0003262e) linegrid_hwr_fs_pane_g4_ParamLimits

0x0c2d,	// (0x0003262e) linegrid_hwr_fs_pane_g4

0x0c4b,	// (0x0003264c) linegrid_hwr_fs_pane_g5_ParamLimits

0x0c4b,	// (0x0003264c) linegrid_hwr_fs_pane_g5

0x0004,

0xf803,	// (0x00041204) linegrid_hwr_fs_pane_g_ParamLimits

0xf803,	// (0x00041204) linegrid_hwr_fs_pane_g

0x496a,	// (0x0003636b) cell_hwr_fs_pane_g1_ParamLimits

0x496a,	// (0x0003636b) cell_hwr_fs_pane_g1

0x46b7,	// (0x000360b8) cell_hwr_fs_pane_g2_ParamLimits

0x46b7,	// (0x000360b8) cell_hwr_fs_pane_g2

0xd23d,	// (0x0003ec3e) cell_hwr_fs_pane_g3_ParamLimits

0xd23d,	// (0x0003ec3e) cell_hwr_fs_pane_g3

0xd24a,	// (0x0003ec4b) cell_hwr_fs_pane_g4_ParamLimits

0xd24a,	// (0x0003ec4b) cell_hwr_fs_pane_g4

0x0003,

0xf80e,	// (0x0004120f) cell_hwr_fs_pane_g_ParamLimits

0xf80e,	// (0x0004120f) cell_hwr_fs_pane_g

0xbb39,	// (0x0003d53a) cell_hwr_fs_pane_t1

0xe08e,	// (0x0003fa8f) grid_highlight_pane_cp6

0xe08e,	// (0x0003fa8f) main_idle_act2_pane

0x2c2d,	// (0x0003462e) aid_inside_area_popup_secondary

0xd324,	// (0x0003ed25) aid_inside_area_window_primary_ParamLimits

0xd324,	// (0x0003ed25) aid_inside_area_window_primary

0x61c0,	// (0x00037bc1) ai2_news_ticker_pane

0x61c8,	// (0x00037bc9) aid_size_cell_ai1_link_ParamLimits

0x61c8,	// (0x00037bc9) aid_size_cell_ai1_link

0x61e2,	// (0x00037be3) popup_ai2_data_window_ParamLimits

0x61e2,	// (0x00037be3) popup_ai2_data_window

0x6200,	// (0x00037c01) popup_ai2_link_window_ParamLimits

0x6200,	// (0x00037c01) popup_ai2_link_window

0x4934,	// (0x00036335) bg_popup_sub_pane_cp4_ParamLimits

0x4934,	// (0x00036335) bg_popup_sub_pane_cp4

0x6216,	// (0x00037c17) grid_ai2_link_pane_ParamLimits

0x6216,	// (0x00037c17) grid_ai2_link_pane

0x622d,	// (0x00037c2e) popup_ai2_link_window_g1_ParamLimits

0x622d,	// (0x00037c2e) popup_ai2_link_window_g1

0x6239,	// (0x00037c3a) popup_ai2_link_window_g2_ParamLimits

0x6239,	// (0x00037c3a) popup_ai2_link_window_g2

0x0001,

0xf9da,	// (0x000413db) popup_ai2_link_window_g_ParamLimits

0xf9da,	// (0x000413db) popup_ai2_link_window_g

0x624a,	// (0x00037c4b) ai2_mp_button_pane

0x6252,	// (0x00037c53) ai2_mp_volume_pane

0x4afd,	// (0x000364fe) bg_popup_sub_pane_cp5_ParamLimits

0x4afd,	// (0x000364fe) bg_popup_sub_pane_cp5

0x625a,	// (0x00037c5b) heading_ai2_gene_pane_ParamLimits

0x625a,	// (0x00037c5b) heading_ai2_gene_pane

0x6266,	// (0x00037c67) list_ai2_gene_pane_ParamLimits

0x6266,	// (0x00037c67) list_ai2_gene_pane

0x62ae,	// (0x00037caf) cell_ai2_link_pane_ParamLimits

0x62ae,	// (0x00037caf) cell_ai2_link_pane

0x62c4,	// (0x00037cc5) cell_ai2_link_pane_g1

0xe08e,	// (0x0003fa8f) grid_highlight_pane_cp7

0x1067,	// (0x00032a68) ai2_mp_volume_pane_g1

0x6397,	// (0x00037d98) ai2_mp_volume_pane_g2

0x630c,	// (0x00037d0d) list_ai2_gene_pane_t1

0x639f,	// (0x00037da0) ai2_mp_volume_pane_g3

0x0002,

0xf9f3,	// (0x000413f4) ai2_mp_volume_pane_g

0x106f,	// (0x00032a70) volume_small_pane_cp3

0x63a7,	// (0x00037da8) aid_size_cell_ai2_button

0x63af,	// (0x00037db0) grid_ai2_button_pane

0x63b8,	// (0x00037db9) cell_ai2_button_pane_ParamLimits

0x63b8,	// (0x00037db9) cell_ai2_button_pane

0xe084,	// (0x0003fa85) cell_ai2_button_pane_g1

0xe08e,	// (0x0003fa8f) grid_highlight_pane_cp8

0x6357,	// (0x00037d58) ai2_gene_pane_t1_ParamLimits

0x6357,	// (0x00037d58) ai2_gene_pane_t1

0xc6df,	// (0x0003e0e0) aid_height_parent_landscape

0xd4f4,	// (0x0003eef5) aid_height_set_list

0x5c7b,	// (0x0003767c) aid_size_parent

0x5fe1,	// (0x000379e2) aid_size_cell_graphic_pane_ParamLimits

0x6276,	// (0x00037c77) popup_ai2_data_window_g1_ParamLimits

0x6276,	// (0x00037c77) popup_ai2_data_window_g1

0x6282,	// (0x00037c83) ai2_news_ticker_pane_g1

0x628a,	// (0x00037c8b) ai2_news_ticker_pane_g2

0x0001,

0xf9df,	// (0x000413e0) ai2_news_ticker_pane_g

0x6292,	// (0x00037c93) ai2_news_ticker_pane_t1

0x62a0,	// (0x00037ca1) ai2_news_ticker_pane_t2

0x0001,

0xf9e4,	// (0x000413e5) ai2_news_ticker_pane_t

0x62cd,	// (0x00037cce) heading_ai2_gene_pane_g1

0x62d5,	// (0x00037cd6) heading_ai2_gene_pane_t1_ParamLimits

0x62d5,	// (0x00037cd6) heading_ai2_gene_pane_t1

0x62ea,	// (0x00037ceb) list_highlight_pane_cp6

0x62f2,	// (0x00037cf3) ai2_gene_pane_ParamLimits

0x62f2,	// (0x00037cf3) ai2_gene_pane

0x631a,	// (0x00037d1b) list_ai2_gene_pane_t2

0x0001,

0xf9e9,	// (0x000413ea) list_ai2_gene_pane_t

0x6328,	// (0x00037d29) list_highlight_pane_cp8_ParamLimits

0x6328,	// (0x00037d29) list_highlight_pane_cp8

0x6339,	// (0x00037d3a) ai2_gene_pane_g1_ParamLimits

0x6339,	// (0x00037d3a) ai2_gene_pane_g1

0x634b,	// (0x00037d4c) ai2_gene_pane_g2_ParamLimits

0x634b,	// (0x00037d4c) ai2_gene_pane_g2

0x0001,

0xf9ee,	// (0x000413ef) ai2_gene_pane_g_ParamLimits

0xf9ee,	// (0x000413ef) ai2_gene_pane_g

0x2a5a,	// (0x0003445b) scroll_pane_cp12

0xba78,	// (0x0003d479) control_pane_t3_ParamLimits

0xba78,	// (0x0003d479) control_pane_t3

0x3c07,	// (0x00035608) status_small_pane_g8_ParamLimits

0x3c07,	// (0x00035608) status_small_pane_g8

0xc803,	// (0x0003e204) popup_find_window_ParamLimits

0xcab0,	// (0x0003e4b1) popup_note_image_window_ParamLimits

0x0ada,	// (0x000324db) list_double2_graphic_pane_vc_g1_ParamLimits

0x0ada,	// (0x000324db) list_double2_graphic_pane_vc_g1

0x0ae6,	// (0x000324e7) list_double2_graphic_pane_vc_g2_ParamLimits

0x0ae6,	// (0x000324e7) list_double2_graphic_pane_vc_g2

0x0af2,	// (0x000324f3) list_double2_graphic_pane_vc_g3_ParamLimits

0x0af2,	// (0x000324f3) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x000411d2) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x000411d2) list_double2_graphic_pane_vc_g

0x0afe,	// (0x000324ff) list_double2_graphic_pane_vc_t1_ParamLimits

0x0afe,	// (0x000324ff) list_double2_graphic_pane_vc_t1

0x0b68,	// (0x00032569) list_single_heading_pane_vc_g1_ParamLimits

0x0b68,	// (0x00032569) list_single_heading_pane_vc_g1

0x0b74,	// (0x00032575) list_single_heading_pane_vc_g2_ParamLimits

0x0b74,	// (0x00032575) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x00040fe5) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x00040fe5) list_single_heading_pane_vc_g

0x0b80,	// (0x00032581) list_single_heading_pane_vc_t1_ParamLimits

0x0b80,	// (0x00032581) list_single_heading_pane_vc_t1

0x0b96,	// (0x00032597) list_single_heading_pane_vc_t2_ParamLimits

0x0b96,	// (0x00032597) list_single_heading_pane_vc_t2

0x0001,

0xf7f2,	// (0x000411f3) list_single_heading_pane_vc_t_ParamLimits

0xf7f2,	// (0x000411f3) list_single_heading_pane_vc_t

0x488a,	// (0x0003628b) list_setting_number_pane_vc_g1_ParamLimits

0x488a,	// (0x0003628b) list_setting_number_pane_vc_g1

0x4896,	// (0x00036297) list_setting_number_pane_vc_g2_ParamLimits

0x4896,	// (0x00036297) list_setting_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x000411f8) list_setting_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x000411f8) list_setting_number_pane_vc_g

0x48a2,	// (0x000362a3) list_setting_number_pane_vc_t1_ParamLimits

0x48a2,	// (0x000362a3) list_setting_number_pane_vc_t1

0x48b6,	// (0x000362b7) list_setting_number_pane_vc_t2_ParamLimits

0x48b6,	// (0x000362b7) list_setting_number_pane_vc_t2

0x48d2,	// (0x000362d3) list_setting_number_pane_vc_t3_ParamLimits

0x48d2,	// (0x000362d3) list_setting_number_pane_vc_t3

0x0002,

0xf7fc,	// (0x000411fd) list_setting_number_pane_vc_t_ParamLimits

0xf7fc,	// (0x000411fd) list_setting_number_pane_vc_t

0x48fa,	// (0x000362fb) set_value_pane_vc_ParamLimits

0x48fa,	// (0x000362fb) set_value_pane_vc

0x0f6a,	// (0x0003296b) list_double2_graphic_pane_vc_ParamLimits

0x0f6a,	// (0x0003296b) list_double2_graphic_pane_vc

0x5e5f,	// (0x00037860) list_double2_large_graphic_pane_vc_ParamLimits

0x5e5f,	// (0x00037860) list_double2_large_graphic_pane_vc

0x0f6a,	// (0x0003296b) list_double2_pane_vc_ParamLimits

0x0f6a,	// (0x0003296b) list_double2_pane_vc

0x0f6a,	// (0x0003296b) list_double_graphic_heading_pane_vc_ParamLimits

0x0f6a,	// (0x0003296b) list_double_graphic_heading_pane_vc

0x0f6a,	// (0x0003296b) list_double_graphic_pane_vc_ParamLimits

0x0f6a,	// (0x0003296b) list_double_graphic_pane_vc

0x0f6a,	// (0x0003296b) list_double_heading_pane_vc_ParamLimits

0x0f6a,	// (0x0003296b) list_double_heading_pane_vc

0x5e5f,	// (0x00037860) list_double_large_graphic_pane_vc_ParamLimits

0x5e5f,	// (0x00037860) list_double_large_graphic_pane_vc

0x0f6a,	// (0x0003296b) list_double_number_pane_vc_ParamLimits

0x0f6a,	// (0x0003296b) list_double_number_pane_vc

0x0f6a,	// (0x0003296b) list_double_pane_vc_ParamLimits

0x0f6a,	// (0x0003296b) list_double_pane_vc

0x0f6a,	// (0x0003296b) list_double_time_pane_vc_ParamLimits

0x0f6a,	// (0x0003296b) list_double_time_pane_vc

0x0f6a,	// (0x0003296b) list_setting_number_pane_vc_ParamLimits

0x0f6a,	// (0x0003296b) list_setting_number_pane_vc

0x0f6a,	// (0x0003296b) list_setting_pane_vc_ParamLimits

0x0f6a,	// (0x0003296b) list_setting_pane_vc

0x0f6a,	// (0x0003296b) list_single_graphic_heading_pane_vc_ParamLimits

0x0f6a,	// (0x0003296b) list_single_graphic_heading_pane_vc

0x0f6a,	// (0x0003296b) list_single_heading_pane_vc_ParamLimits

0x0f6a,	// (0x0003296b) list_single_heading_pane_vc

0x0f6a,	// (0x0003296b) list_single_number_heading_pane_vc_ParamLimits

0x0f6a,	// (0x0003296b) list_single_number_heading_pane_vc

0x0ada,	// (0x000324db) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0ada,	// (0x000324db) list_double_graphic_heading_pane_vc_g1

0x0b68,	// (0x00032569) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0b68,	// (0x00032569) list_double_graphic_heading_pane_vc_g2

0x0b74,	// (0x00032575) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0b74,	// (0x00032575) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9fa,	// (0x000413fb) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9fa,	// (0x000413fb) list_double_graphic_heading_pane_vc_g

0x1078,	// (0x00032a79) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x1078,	// (0x00032a79) list_double_graphic_heading_pane_vc_t1

0x0b80,	// (0x00032581) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0b80,	// (0x00032581) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa01,	// (0x00041402) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x00041402) list_double_graphic_heading_pane_vc_t

0x488a,	// (0x0003628b) list_setting_pane_vc_g1_ParamLimits

0x488a,	// (0x0003628b) list_setting_pane_vc_g1

0x4896,	// (0x00036297) list_setting_pane_vc_g2_ParamLimits

0x4896,	// (0x00036297) list_setting_pane_vc_g2

0x0001,

0xf7f7,	// (0x000411f8) list_setting_pane_vc_g_ParamLimits

0xf7f7,	// (0x000411f8) list_setting_pane_vc_g

0x65f4,	// (0x00037ff5) list_setting_pane_vc_t1_ParamLimits

0x65f4,	// (0x00037ff5) list_setting_pane_vc_t1

0x6608,	// (0x00038009) list_setting_pane_vc_t2_ParamLimits

0x6608,	// (0x00038009) list_setting_pane_vc_t2

0x0001,

0xfa44,	// (0x00041445) list_setting_pane_vc_t_ParamLimits

0xfa44,	// (0x00041445) list_setting_pane_vc_t

0x48fa,	// (0x000362fb) set_value_pane_cp_vc_ParamLimits

0x48fa,	// (0x000362fb) set_value_pane_cp_vc

0x0b68,	// (0x00032569) list_single_number_heading_pane_vc_g1_ParamLimits

0x0b68,	// (0x00032569) list_single_number_heading_pane_vc_g1

0x0b74,	// (0x00032575) list_single_number_heading_pane_vc_g2_ParamLimits

0x0b74,	// (0x00032575) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x00040fe5) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x00040fe5) list_single_number_heading_pane_vc_g

0x0b80,	// (0x00032581) list_single_number_heading_pane_vc_t1_ParamLimits

0x0b80,	// (0x00032581) list_single_number_heading_pane_vc_t1

0x108c,	// (0x00032a8d) list_single_number_heading_pane_vc_t2_ParamLimits

0x108c,	// (0x00032a8d) list_single_number_heading_pane_vc_t2

0x10a0,	// (0x00032aa1) list_single_number_heading_pane_vc_t3_ParamLimits

0x10a0,	// (0x00032aa1) list_single_number_heading_pane_vc_t3

0x0002,

0xfa49,	// (0x0004144a) list_single_number_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0004144a) list_single_number_heading_pane_vc_t

0x0ada,	// (0x000324db) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0ada,	// (0x000324db) list_single_graphic_heading_pane_vc_g1

0x0b68,	// (0x00032569) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0b68,	// (0x00032569) list_single_graphic_heading_pane_vc_g4

0x0b74,	// (0x00032575) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0b74,	// (0x00032575) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9fa,	// (0x000413fb) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9fa,	// (0x000413fb) list_single_graphic_heading_pane_vc_g

0x0b80,	// (0x00032581) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0b80,	// (0x00032581) list_single_graphic_heading_pane_vc_t1

0x10b2,	// (0x00032ab3) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x10b2,	// (0x00032ab3) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa50,	// (0x00041451) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa50,	// (0x00041451) list_single_graphic_heading_pane_vc_t

0x0b68,	// (0x00032569) list_double2_pane_vc_g1_ParamLimits

0x0b68,	// (0x00032569) list_double2_pane_vc_g1

0x0b74,	// (0x00032575) list_double2_pane_vc_g2_ParamLimits

0x0b74,	// (0x00032575) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x00040fe5) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x00040fe5) list_double2_pane_vc_g

0x10c6,	// (0x00032ac7) list_double2_pane_vc_t1_ParamLimits

0x10c6,	// (0x00032ac7) list_double2_pane_vc_t1

0x10dc,	// (0x00032add) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x10dc,	// (0x00032add) list_double2_large_graphic_pane_vc_g1

0x10e8,	// (0x00032ae9) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x10e8,	// (0x00032ae9) list_double2_large_graphic_pane_vc_g2

0x10f4,	// (0x00032af5) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x10f4,	// (0x00032af5) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf601,	// (0x00041002) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf601,	// (0x00041002) list_double2_large_graphic_pane_vc_g

0x1100,	// (0x00032b01) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x1100,	// (0x00032b01) list_double2_large_graphic_pane_vc_t1

0x1116,	// (0x00032b17) list_double_time_pane_vc_g1_ParamLimits

0x1116,	// (0x00032b17) list_double_time_pane_vc_g1

0x1122,	// (0x00032b23) list_double_time_pane_vc_g2_ParamLimits

0x1122,	// (0x00032b23) list_double_time_pane_vc_g2

0x0001,

0xfa55,	// (0x00041456) list_double_time_pane_vc_g_ParamLimits

0xfa55,	// (0x00041456) list_double_time_pane_vc_g

0x112e,	// (0x00032b2f) list_double_time_pane_vc_t1_ParamLimits

0x112e,	// (0x00032b2f) list_double_time_pane_vc_t1

0x1147,	// (0x00032b48) list_double_time_pane_vc_t2_ParamLimits

0x1147,	// (0x00032b48) list_double_time_pane_vc_t2

0x1187,	// (0x00032b88) list_double_time_pane_vc_t3_ParamLimits

0x1187,	// (0x00032b88) list_double_time_pane_vc_t3

0x119f,	// (0x00032ba0) list_double_time_pane_vc_t4_ParamLimits

0x119f,	// (0x00032ba0) list_double_time_pane_vc_t4

0x0003,

0xfa5a,	// (0x0004145b) list_double_time_pane_vc_t_ParamLimits

0xfa5a,	// (0x0004145b) list_double_time_pane_vc_t

0x0b68,	// (0x00032569) list_double_pane_vc_g1_ParamLimits

0x0b68,	// (0x00032569) list_double_pane_vc_g1

0x0b74,	// (0x00032575) list_double_pane_vc_g2_ParamLimits

0x0b74,	// (0x00032575) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x00040fe5) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x00040fe5) list_double_pane_vc_g

0x11b3,	// (0x00032bb4) list_double_pane_vc_t1_ParamLimits

0x11b3,	// (0x00032bb4) list_double_pane_vc_t1

0x11c5,	// (0x00032bc6) list_double_pane_vc_t2_ParamLimits

0x11c5,	// (0x00032bc6) list_double_pane_vc_t2

0x0001,

0xfa63,	// (0x00041464) list_double_pane_vc_t_ParamLimits

0xfa63,	// (0x00041464) list_double_pane_vc_t

0x0b68,	// (0x00032569) list_double_number_pane_vc_g1_ParamLimits

0x0b68,	// (0x00032569) list_double_number_pane_vc_g1

0x0b74,	// (0x00032575) list_double_number_pane_vc_g2_ParamLimits

0x0b74,	// (0x00032575) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x00040fe5) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x00040fe5) list_double_number_pane_vc_g

0x11dd,	// (0x00032bde) list_double_number_pane_vc_t1_ParamLimits

0x11dd,	// (0x00032bde) list_double_number_pane_vc_t1

0x11f1,	// (0x00032bf2) list_double_number_pane_vc_t2_ParamLimits

0x11f1,	// (0x00032bf2) list_double_number_pane_vc_t2

0x11c5,	// (0x00032bc6) list_double_number_pane_vc_t3_ParamLimits

0x11c5,	// (0x00032bc6) list_double_number_pane_vc_t3

0x0002,

0xfa68,	// (0x00041469) list_double_number_pane_vc_t_ParamLimits

0xfa68,	// (0x00041469) list_double_number_pane_vc_t

0x1203,	// (0x00032c04) list_double_large_graphic_pane_vc_g1_ParamLimits

0x1203,	// (0x00032c04) list_double_large_graphic_pane_vc_g1

0x120f,	// (0x00032c10) list_double_large_graphic_pane_vc_g2_ParamLimits

0x120f,	// (0x00032c10) list_double_large_graphic_pane_vc_g2

0x10f4,	// (0x00032af5) list_double_large_graphic_pane_vc_g3_ParamLimits

0x10f4,	// (0x00032af5) list_double_large_graphic_pane_vc_g3

0x121e,	// (0x00032c1f) list_double_large_graphic_pane_vc_g4_ParamLimits

0x121e,	// (0x00032c1f) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6f,	// (0x00041470) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x00041470) list_double_large_graphic_pane_vc_g

0x122a,	// (0x00032c2b) list_double_large_graphic_pane_vc_t1_ParamLimits

0x122a,	// (0x00032c2b) list_double_large_graphic_pane_vc_t1

0x123c,	// (0x00032c3d) list_double_large_graphic_pane_vc_t2_ParamLimits

0x123c,	// (0x00032c3d) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x00041479) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x00041479) list_double_large_graphic_pane_vc_t

0x0b68,	// (0x00032569) list_double_heading_pane_vc_g1_ParamLimits

0x0b68,	// (0x00032569) list_double_heading_pane_vc_g1

0x0b74,	// (0x00032575) list_double_heading_pane_vc_g2_ParamLimits

0x0b74,	// (0x00032575) list_double_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x00040fe5) list_double_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x00040fe5) list_double_heading_pane_vc_g

0x1255,	// (0x00032c56) list_double_heading_pane_vc_t1_ParamLimits

0x1255,	// (0x00032c56) list_double_heading_pane_vc_t1

0x0b80,	// (0x00032581) list_double_heading_pane_vc_t2_ParamLimits

0x0b80,	// (0x00032581) list_double_heading_pane_vc_t2

0x0001,

0xfa7d,	// (0x0004147e) list_double_heading_pane_vc_t_ParamLimits

0xfa7d,	// (0x0004147e) list_double_heading_pane_vc_t

0x1269,	// (0x00032c6a) list_double_graphic_pane_vc_g1_ParamLimits

0x1269,	// (0x00032c6a) list_double_graphic_pane_vc_g1

0x1279,	// (0x00032c7a) list_double_graphic_pane_vc_g2_ParamLimits

0x1279,	// (0x00032c7a) list_double_graphic_pane_vc_g2

0x1288,	// (0x00032c89) list_double_graphic_pane_vc_g3_ParamLimits

0x1288,	// (0x00032c89) list_double_graphic_pane_vc_g3

0x0002,

0xfa82,	// (0x00041483) list_double_graphic_pane_vc_g_ParamLimits

0xfa82,	// (0x00041483) list_double_graphic_pane_vc_g

0x1294,	// (0x00032c95) list_double_graphic_pane_vc_t1_ParamLimits

0x1294,	// (0x00032c95) list_double_graphic_pane_vc_t1

0x11c5,	// (0x00032bc6) list_double_graphic_pane_vc_t2_ParamLimits

0x11c5,	// (0x00032bc6) list_double_graphic_pane_vc_t2

0x0001,

0xfa89,	// (0x0004148a) list_double_graphic_pane_vc_t_ParamLimits

0xfa89,	// (0x0004148a) list_double_graphic_pane_vc_t

0xef17,	// (0x00040918) aid_size_cell_fastswap

0xadc3,	// (0x0003c7c4) aid_size_cell_touch_ParamLimits

0xadc3,	// (0x0003c7c4) aid_size_cell_touch

0xf43f,	// (0x00040e40) popup_fast_swap_wide_window_ParamLimits

0xf43f,	// (0x00040e40) popup_fast_swap_wide_window

0xaf12,	// (0x0003c913) touch_pane_ParamLimits

0xaf12,	// (0x0003c913) touch_pane

0x2ab0,	// (0x000344b1) button_value_adjust_pane_cp2

0x2ab0,	// (0x000344b1) button_value_adjust_pane_cp4

0x01f0,	// (0x00031bf1) form_field_data_pane_cp2

0xb75e,	// (0x0003d15f) form_field_data_wide_pane_cp2

0x31a7,	// (0x00034ba8) bg_scroll_pane_ParamLimits

0x05c9,	// (0x00031fca) scroll_handle_pane_ParamLimits

0x05dd,	// (0x00031fde) scroll_sc2_down_pane_ParamLimits

0x05dd,	// (0x00031fde) scroll_sc2_down_pane

0x31d8,	// (0x00034bd9) scroll_sc2_up_pane_ParamLimits

0x31d8,	// (0x00034bd9) scroll_sc2_up_pane

0xd8a8,	// (0x0003f2a9) grid_wheel_folder_pane_g1_ParamLimits

0xd8a8,	// (0x0003f2a9) grid_wheel_folder_pane_g1

0x0833,	// (0x00032234) clock_nsta_pane_cp2_ParamLimits

0x0833,	// (0x00032234) clock_nsta_pane_cp2

0xc5f4,	// (0x0003dff5) listscroll_midp_pane_ParamLimits

0xc605,	// (0x0003e006) midp_canvas_pane

0x3c82,	// (0x00035683) nsta_clock_indic_pane

0x3cd8,	// (0x000356d9) listscroll_form_pane_vc

0x3cf4,	// (0x000356f5) listscroll_set_pane_vc_ParamLimits

0x3cf4,	// (0x000356f5) listscroll_set_pane_vc

0xcf25,	// (0x0003e926) clock_nsta_pane

0xcf4f,	// (0x0003e950) indicator_nsta_pane

0x4780,	// (0x00036181) bg_popup_sub_pane_cp2_ParamLimits

0x4794,	// (0x00036195) find_pane_cp2_ParamLimits

0x4794,	// (0x00036195) find_pane_cp2

0x47aa,	// (0x000361ab) grid_toobar_pane_ParamLimits

0x4908,	// (0x00036309) list_form_gen_pane_vc_ParamLimits

0x4908,	// (0x00036309) list_form_gen_pane_vc

0x491e,	// (0x0003631f) scroll_pane_cp8_vc_ParamLimits

0x491e,	// (0x0003631f) scroll_pane_cp8_vc

0x499a,	// (0x0003639b) data_form_wide_pane_vc_ParamLimits

0x499a,	// (0x0003639b) data_form_wide_pane_vc

0x49a6,	// (0x000363a7) form_field_data_wide_pane_vc_g1

0x49ae,	// (0x000363af) form_field_data_wide_pane_vc_t1_ParamLimits

0x49ae,	// (0x000363af) form_field_data_wide_pane_vc_t1

0x2ac4,	// (0x000344c5) input_focus_pane_cp6_vc_ParamLimits

0x2ac4,	// (0x000344c5) input_focus_pane_cp6_vc

0xd2c8,	// (0x0003ecc9) list_midp_pane_ParamLimits

0x604d,	// (0x00037a4e) scroll_pane_cp16_ParamLimits

0x604d,	// (0x00037a4e) scroll_pane_cp16

0x4ce2,	// (0x000366e3) button_value_adjust_pane_ParamLimits

0x4ce2,	// (0x000366e3) button_value_adjust_pane

0xd505,	// (0x0003ef06) button_value_adjust_pane_cp6_ParamLimits

0xd505,	// (0x0003ef06) button_value_adjust_pane_cp6

0xd647,	// (0x0003f048) settings_code_pane_cp_ParamLimits

0xd647,	// (0x0003f048) settings_code_pane_cp

0xe084,	// (0x0003fa85) cell_touch_pane_g1

0xe084,	// (0x0003fa85) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x0004111b) cell_touch_pane_g

0xd77d,	// (0x0003f17e) cell_touch_pane_cp_ParamLimits

0xd77d,	// (0x0003f17e) cell_touch_pane_cp

0xd799,	// (0x0003f19a) cell_touch_pane_ParamLimits

0xd799,	// (0x0003f19a) cell_touch_pane

0xe084,	// (0x0003fa85) scroll_sc2_down_pane_g1

0xe084,	// (0x0003fa85) scroll_sc2_up_pane_g1

0xe08e,	// (0x0003fa8f) bg_set_opt_pane_cp4_vc

0x63eb,	// (0x00037dec) list_set_graphic_pane_vc_g1_ParamLimits

0x63eb,	// (0x00037dec) list_set_graphic_pane_vc_g1

0x63f7,	// (0x00037df8) list_set_graphic_pane_vc_g2_ParamLimits

0x63f7,	// (0x00037df8) list_set_graphic_pane_vc_g2

0x0001,

0xfa06,	// (0x00041407) list_set_graphic_pane_vc_g_ParamLimits

0xfa06,	// (0x00041407) list_set_graphic_pane_vc_g

0x6403,	// (0x00037e04) text_primary_small_cp13_vc_ParamLimits

0x6403,	// (0x00037e04) text_primary_small_cp13_vc

0x641b,	// (0x00037e1c) list_set_graphic_pane_vc_ParamLimits

0x641b,	// (0x00037e1c) list_set_graphic_pane_vc

0xe08e,	// (0x0003fa8f) input_focus_pane_cp2_vc

0xe084,	// (0x0003fa85) setting_code_pane_vc_g1

0x642f,	// (0x00037e30) setting_code_pane_vc_t1

0x643d,	// (0x00037e3e) set_text_pane_vc_t1_ParamLimits

0x643d,	// (0x00037e3e) set_text_pane_vc_t1

0xe08e,	// (0x0003fa8f) input_focus_pane_cp1_vc

0x645b,	// (0x00037e5c) list_set_text_pane_vc

0xe084,	// (0x0003fa85) setting_text_pane_vc_g1

0xe08e,	// (0x0003fa8f) bg_set_opt_pane_cp2_vc

0x6465,	// (0x00037e66) setting_slider_graphic_pane_vc_g1

0x646d,	// (0x00037e6e) setting_slider_graphic_pane_vc_t1

0x647b,	// (0x00037e7c) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0b,	// (0x0004140c) setting_slider_graphic_pane_vc_t

0x6489,	// (0x00037e8a) slider_set_pane_cp_vc

0x6491,	// (0x00037e92) slider_set_pane_vc_g1

0x649a,	// (0x00037e9b) slider_set_pane_vc_g2

0x0006,

0xfa10,	// (0x00041411) slider_set_pane_vc_g

0x2b2b,	// (0x0003452c) set_opt_bg_pane_g1_copy1

0x2b33,	// (0x00034534) set_opt_bg_pane_g2_copy1

0x64c6,	// (0x00037ec7) set_opt_bg_pane_g3_copy1

0x2b43,	// (0x00034544) set_opt_bg_pane_g4_copy1

0x2b4b,	// (0x0003454c) set_opt_bg_pane_g5_copy1

0x2b53,	// (0x00034554) set_opt_bg_pane_g6_copy1

0x64d0,	// (0x00037ed1) set_opt_bg_pane_g7_copy1

0x64da,	// (0x00037edb) set_opt_bg_pane_g8_copy1

0x64e4,	// (0x00037ee5) set_opt_bg_pane_g9_copy1

0xe08e,	// (0x0003fa8f) bg_set_opt_pane_cp_vc

0x64ee,	// (0x00037eef) setting_slider_pane_vc_t1

0x646d,	// (0x00037e6e) setting_slider_pane_vc_t2

0x647b,	// (0x00037e7c) setting_slider_pane_vc_t3

0x0002,

0xfa1f,	// (0x00041420) setting_slider_pane_vc_t

0x6489,	// (0x00037e8a) slider_set_pane_vc

0x0ca1,	// (0x000326a2) volume_set_pane_vc_g1

0x0caa,	// (0x000326ab) volume_set_pane_vc_g2

0x0cb3,	// (0x000326b4) volume_set_pane_vc_g3

0x0cbc,	// (0x000326bd) volume_set_pane_vc_g4

0x0cc5,	// (0x000326c6) volume_set_pane_vc_g5

0x0cce,	// (0x000326cf) volume_set_pane_vc_g6

0x0cd7,	// (0x000326d8) volume_set_pane_vc_g7

0x0ce0,	// (0x000326e1) volume_set_pane_vc_g8

0x0ce9,	// (0x000326ea) volume_set_pane_vc_g9

0x0cf2,	// (0x000326f3) volume_set_pane_vc_g10

0x0009,

0xfa26,	// (0x00041427) volume_set_pane_vc_g

0x64fd,	// (0x00037efe) volume_set_pane_vc

0x6505,	// (0x00037f06) button_value_adjust_pane_cp1_vc

0x650f,	// (0x00037f10) list_highlight_pane_cp2_vc

0x6518,	// (0x00037f19) list_set_pane_vc_ParamLimits

0x6518,	// (0x00037f19) list_set_pane_vc

0x6582,	// (0x00037f83) main_pane_set_vc_t1_ParamLimits

0x6582,	// (0x00037f83) main_pane_set_vc_t1

0x6597,	// (0x00037f98) main_pane_set_vc_t2_ParamLimits

0x6597,	// (0x00037f98) main_pane_set_vc_t2

0x65a9,	// (0x00037faa) main_pane_set_vc_t3_ParamLimits

0x65a9,	// (0x00037faa) main_pane_set_vc_t3

0x65bd,	// (0x00037fbe) main_pane_set_vc_t4_ParamLimits

0x65bd,	// (0x00037fbe) main_pane_set_vc_t4

0x0003,

0xfa3b,	// (0x0004143c) main_pane_set_vc_t_ParamLimits

0xfa3b,	// (0x0004143c) main_pane_set_vc_t

0x65d1,	// (0x00037fd2) setting_code_pane_vc_ParamLimits

0x65d1,	// (0x00037fd2) setting_code_pane_vc

0x65e2,	// (0x00037fe3) setting_slider_graphic_pane_vc

0x65e2,	// (0x00037fe3) setting_slider_pane_vc

0x65e2,	// (0x00037fe3) setting_text_pane_vc

0x65e2,	// (0x00037fe3) setting_volume_pane_vc

0x65ec,	// (0x00037fed) scroll_pane_cp121_vc

0x2a9e,	// (0x0003449f) set_content_pane_vc

0x662a,	// (0x0003802b) button_value_adjust_pane_g1

0x6633,	// (0x00038034) button_value_adjust_pane_g2

0x0001,

0xfa8e,	// (0x0004148f) button_value_adjust_pane_g

0x663c,	// (0x0003803d) form_field_slider_wide_pane_vc_t1_ParamLimits

0x663c,	// (0x0003803d) form_field_slider_wide_pane_vc_t1

0x6650,	// (0x00038051) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6650,	// (0x00038051) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa93,	// (0x00041494) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa93,	// (0x00041494) form_field_slider_wide_pane_vc_t

0x24b9,	// (0x00033eba) input_focus_pane_cp10_vc_ParamLimits

0x24b9,	// (0x00033eba) input_focus_pane_cp10_vc

0x6662,	// (0x00038063) slider_cont_pane_cp1_vc_ParamLimits

0x6662,	// (0x00038063) slider_cont_pane_cp1_vc

0x6491,	// (0x00037e92) slider_form_pane_g1_cp2

0x649a,	// (0x00037e9b) slider_form_pane_g2_cp2

0x667b,	// (0x0003807c) form_field_slider_pane_vc_t3

0x6689,	// (0x0003808a) form_field_slider_pane_vc_t4

0x6697,	// (0x00038098) slider_form_pane_vc_ParamLimits

0x6697,	// (0x00038098) slider_form_pane_vc

0x66a4,	// (0x000380a5) form_field_slider_pane_vc_t1_ParamLimits

0x66a4,	// (0x000380a5) form_field_slider_pane_vc_t1

0x6650,	// (0x00038051) form_field_slider_pane_vc_t2_ParamLimits

0x6650,	// (0x00038051) form_field_slider_pane_vc_t2

0x0001,

0xfaa3,	// (0x000414a4) form_field_slider_pane_vc_t_ParamLimits

0xfaa3,	// (0x000414a4) form_field_slider_pane_vc_t

0x24b9,	// (0x00033eba) input_focus_pane_cp9_vc_ParamLimits

0x24b9,	// (0x00033eba) input_focus_pane_cp9_vc

0x66c0,	// (0x000380c1) slider_cont_pane_vc_ParamLimits

0x66c0,	// (0x000380c1) slider_cont_pane_vc

0x66d2,	// (0x000380d3) list_form_graphic_pane_cp_vc_ParamLimits

0x66d2,	// (0x000380d3) list_form_graphic_pane_cp_vc

0x49a6,	// (0x000363a7) form_field_popup_wide_pane_vc_g1

0x66e7,	// (0x000380e8) form_field_popup_wide_pane_vc_t1_ParamLimits

0x66e7,	// (0x000380e8) form_field_popup_wide_pane_vc_t1

0x2ac4,	// (0x000344c5) input_focus_pane_cp8_vc_ParamLimits

0x2ac4,	// (0x000344c5) input_focus_pane_cp8_vc

0x66fe,	// (0x000380ff) list_form_wide_pane_vc_ParamLimits

0x66fe,	// (0x000380ff) list_form_wide_pane_vc

0x670a,	// (0x0003810b) list_form_graphic_pane_vc_g1

0x6712,	// (0x00038113) list_form_graphic_pane_vc_t1_ParamLimits

0x6712,	// (0x00038113) list_form_graphic_pane_vc_t1

0x223d,	// (0x00033c3e) list_highlight_pane_cp5_vc_ParamLimits

0x223d,	// (0x00033c3e) list_highlight_pane_cp5_vc

0x672e,	// (0x0003812f) list_form_graphic_pane_vc_ParamLimits

0x672e,	// (0x0003812f) list_form_graphic_pane_vc

0x49a6,	// (0x000363a7) form_field_popup_pane_vc_g1

0x6744,	// (0x00038145) form_field_popup_pane_vc_t1_ParamLimits

0x6744,	// (0x00038145) form_field_popup_pane_vc_t1

0x2ac4,	// (0x000344c5) input_focus_pane_cp7_vc_ParamLimits

0x2ac4,	// (0x000344c5) input_focus_pane_cp7_vc

0x675b,	// (0x0003815c) list_form_pane_vc_ParamLimits

0x675b,	// (0x0003815c) list_form_pane_vc

0x6767,	// (0x00038168) data_form_pane_vc_t1_ParamLimits

0x6767,	// (0x00038168) data_form_pane_vc_t1

0x2b2b,	// (0x0003452c) input_focus_pane_vc_g1

0x2b33,	// (0x00034534) input_focus_pane_vc_g2

0x2b3b,	// (0x0003453c) input_focus_pane_vc_g3

0x2b43,	// (0x00034544) input_focus_pane_vc_g4

0x2b4b,	// (0x0003454c) input_focus_pane_vc_g5

0x2b53,	// (0x00034554) input_focus_pane_vc_g6

0x2b5b,	// (0x0003455c) input_focus_pane_vc_g7

0x2b63,	// (0x00034564) input_focus_pane_vc_g8

0x2b6b,	// (0x0003456c) input_focus_pane_vc_g9

0xe084,	// (0x0003fa85) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x000410a4) input_focus_pane_vc_g

0x499a,	// (0x0003639b) data_form_pane_vc_ParamLimits

0x499a,	// (0x0003639b) data_form_pane_vc

0x49a6,	// (0x000363a7) form_field_data_pane_vc_g1

0x6784,	// (0x00038185) form_field_data_pane_vc_t1_ParamLimits

0x6784,	// (0x00038185) form_field_data_pane_vc_t1

0x2ac4,	// (0x000344c5) input_focus_pane_vc_ParamLimits

0x2ac4,	// (0x000344c5) input_focus_pane_vc

0x679e,	// (0x0003819f) button_value_adjust_pane_cp3_vc

0x67a6,	// (0x000381a7) button_value_adjust_pane_cp5_vc

0x67ae,	// (0x000381af) form_field_data_pane_vc_ParamLimits

0x67ae,	// (0x000381af) form_field_data_pane_vc

0x67c9,	// (0x000381ca) form_field_data_pane_vc_cp2

0x67d1,	// (0x000381d2) form_field_data_wide_pane_vc_ParamLimits

0x67d1,	// (0x000381d2) form_field_data_wide_pane_vc

0x67eb,	// (0x000381ec) form_field_data_wide_pane_vc_cp2

0x67f3,	// (0x000381f4) form_field_popup_pane_vc_ParamLimits

0x67f3,	// (0x000381f4) form_field_popup_pane_vc

0x680e,	// (0x0003820f) form_field_popup_wide_pane_vc_ParamLimits

0x680e,	// (0x0003820f) form_field_popup_wide_pane_vc

0x6828,	// (0x00038229) form_field_slider_pane_vc_ParamLimits

0x6828,	// (0x00038229) form_field_slider_pane_vc

0x683b,	// (0x0003823c) form_field_slider_wide_pane_vc_ParamLimits

0x683b,	// (0x0003823c) form_field_slider_wide_pane_vc

0xd7b7,	// (0x0003f1b8) grid_touch_1_pane_ParamLimits

0xd7b7,	// (0x0003f1b8) grid_touch_1_pane

0xd7cb,	// (0x0003f1cc) grid_touch_2_pane_ParamLimits

0xd7cb,	// (0x0003f1cc) grid_touch_2_pane

0x6912,	// (0x00038313) touch_pane_g1_ParamLimits

0x6912,	// (0x00038313) touch_pane_g1

0x6874,	// (0x00038275) cell_app_pane_cp_wide_ParamLimits

0x6874,	// (0x00038275) cell_app_pane_cp_wide

0x6885,	// (0x00038286) grid_popup_fast_wide_pane_ParamLimits

0x6885,	// (0x00038286) grid_popup_fast_wide_pane

0x6899,	// (0x0003829a) scroll_pane_cp19_ParamLimits

0x6899,	// (0x0003829a) scroll_pane_cp19

0xe08e,	// (0x0003fa8f) bg_popup_window_pane_cp20

0x68ad,	// (0x000382ae) listscroll_popup_fast_wide_pane

0x2c9a,	// (0x0003469b) grid_indicator_nsta_pane

0x68b5,	// (0x000382b6) clock_nsta_pane_g1

0x68be,	// (0x000382bf) clock_nsta_pane_t1

0xd7f7,	// (0x0003f1f8) cell_indicator_nsta_pane_ParamLimits

0xd7f7,	// (0x0003f1f8) cell_indicator_nsta_pane

0x6912,	// (0x00038313) cell_indicator_nsta_pane_g1

0xd814,	// (0x0003f215) cell_indicator_nsta_pane_g2

0x0001,

0xfaad,	// (0x000414ae) cell_indicator_nsta_pane_g

0x6977,	// (0x00038378) clock_nsta_pane_cp

0x697f,	// (0x00038380) indicator_nsta_pane_cp

0x6987,	// (0x00038388) nsta_clock_indic_pane_g1

0x2309,	// (0x00033d0a) grid_indicator_pane

0x32ca,	// (0x00034ccb) scroll_pane_cp29

0x077f,	// (0x00032180) indicator_nsta_pane_cp2_ParamLimits

0x077f,	// (0x00032180) indicator_nsta_pane_cp2

0x223d,	// (0x00033c3e) main_apps_wheel_pane

0x4b65,	// (0x00036566) form_midp_field_text_pane_ParamLimits

0x4cb4,	// (0x000366b5) scroll_bar_cp050_ParamLimits

0x69f0,	// (0x000383f1) cell_indicator_pane_ParamLimits

0x69f0,	// (0x000383f1) cell_indicator_pane

0x6a08,	// (0x00038409) cell_indicator_pane_g1

0xd82a,	// (0x0003f22b) grid_wheel_folder_pane_ParamLimits

0xd82a,	// (0x0003f22b) grid_wheel_folder_pane

0xd838,	// (0x0003f239) list_wheel_apps_pane_ParamLimits

0xd838,	// (0x0003f239) list_wheel_apps_pane

0xd846,	// (0x0003f247) main_apps_wheel_pane_g1_ParamLimits

0xd846,	// (0x0003f247) main_apps_wheel_pane_g1

0xd856,	// (0x0003f257) main_apps_wheel_pane_g2_ParamLimits

0xd856,	// (0x0003f257) main_apps_wheel_pane_g2

0x0001,

0xfac9,	// (0x000414ca) main_apps_wheel_pane_g_ParamLimits

0xfac9,	// (0x000414ca) main_apps_wheel_pane_g

0xd866,	// (0x0003f267) main_apps_wheel_pane_t1_ParamLimits

0xd866,	// (0x0003f267) main_apps_wheel_pane_t1

0xd87e,	// (0x0003f27f) list_wheel_apps_pane_g1

0xd886,	// (0x0003f287) list_wheel_apps_pane_g2

0xd88e,	// (0x0003f28f) list_wheel_apps_pane_g3

0xd896,	// (0x0003f297) list_wheel_apps_pane_g4

0xd89e,	// (0x0003f29f) list_wheel_apps_pane_g5

0x0004,

0xface,	// (0x000414cf) list_wheel_apps_pane_g

0x37fc,	// (0x000351fd) navi_icon_text_pane

0xce1e,	// (0x0003e81f) aid_fill_nsta

0xd8bb,	// (0x0003f2bc) navi_icon_text_pane_g1

0xd8c7,	// (0x0003f2c8) navi_icon_text_pane_t1

0xc5dc,	// (0x0003dfdd) list_set_graphic_pane_t1_ParamLimits

0xc5dc,	// (0x0003dfdd) list_set_graphic_pane_t1

0x5405,	// (0x00036e06) popup_midp_note_alarm_window_t6_ParamLimits

0x5405,	// (0x00036e06) popup_midp_note_alarm_window_t6

0x5417,	// (0x00036e18) popup_midp_note_alarm_window_t7_ParamLimits

0x5417,	// (0x00036e18) popup_midp_note_alarm_window_t7

0x5429,	// (0x00036e2a) popup_midp_note_alarm_window_t8_ParamLimits

0x5429,	// (0x00036e2a) popup_midp_note_alarm_window_t8

0x543b,	// (0x00036e3c) popup_midp_note_alarm_window_t9_ParamLimits

0x543b,	// (0x00036e3c) popup_midp_note_alarm_window_t9

0x544d,	// (0x00036e4e) popup_midp_note_alarm_window_t10_ParamLimits

0x544d,	// (0x00036e4e) popup_midp_note_alarm_window_t10

0x545f,	// (0x00036e60) popup_midp_note_alarm_window_t11_ParamLimits

0x545f,	// (0x00036e60) popup_midp_note_alarm_window_t11

0x5471,	// (0x00036e72) scroll_pane_cp17_ParamLimits

0x5471,	// (0x00036e72) scroll_pane_cp17

0x0ca1,	// (0x000326a2) volume_small_pane_cp_g1

0x12a6,	// (0x00032ca7) volume_small_pane_cp_g2

0x12af,	// (0x00032cb0) volume_small_pane_cp_g3

0x12b8,	// (0x00032cb9) volume_small_pane_cp_g4

0x12c1,	// (0x00032cc2) volume_small_pane_cp_g5

0x12ca,	// (0x00032ccb) volume_small_pane_cp_g6

0x12d3,	// (0x00032cd4) volume_small_pane_cp_g7

0x12dc,	// (0x00032cdd) volume_small_pane_cp_g8

0x12e5,	// (0x00032ce6) volume_small_pane_cp_g9

0x12ee,	// (0x00032cef) volume_small_pane_cp_g10

0x3a5d,	// (0x0003545e) midp_ticker_pane_g1_ParamLimits

0x3a69,	// (0x0003546a) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0004116c) midp_ticker_pane_g_ParamLimits

0xc69c,	// (0x0003e09d) midp_ticker_pane_t1_ParamLimits

0xce3e,	// (0x0003e83f) aid_fill_nsta_2

0x4ca0,	// (0x000366a1) list_form2_midp_pane

0x5e2e,	// (0x0003782f) midp_editing_number_pane_ParamLimits

0x5e3d,	// (0x0003783e) midp_ticker_pane_ParamLimits

0x6b01,	// (0x00038502) form2_midp_field_pane

0x6b25,	// (0x00038526) scroll_pane_cp51

0x6b45,	// (0x00038546) form2_midp_button_pane_ParamLimits

0x6b45,	// (0x00038546) form2_midp_button_pane

0x6b57,	// (0x00038558) form2_midp_content_pane_ParamLimits

0x6b57,	// (0x00038558) form2_midp_content_pane

0x6b71,	// (0x00038572) form2_midp_field_choice_group_pane

0x6b79,	// (0x0003857a) form2_midp_field_pane_g1

0x6b81,	// (0x00038582) form2_midp_field_pane_g2

0x6b89,	// (0x0003858a) form2_midp_field_pane_g3

0x6b91,	// (0x00038592) form2_midp_field_pane_g4

0x0003,

0xfaf3,	// (0x000414f4) form2_midp_field_pane_g

0x6b99,	// (0x0003859a) form2_midp_gauge_slider_pane

0x6ba1,	// (0x000385a2) form2_midp_gauge_wait_pane

0x6ba9,	// (0x000385aa) form2_midp_image_pane_ParamLimits

0x6ba9,	// (0x000385aa) form2_midp_image_pane

0x6bc4,	// (0x000385c5) form2_midp_label_pane_ParamLimits

0x6bc4,	// (0x000385c5) form2_midp_label_pane

0xd8f5,	// (0x0003f2f6) form2_midp_label_pane_cp_ParamLimits

0xd8f5,	// (0x0003f2f6) form2_midp_label_pane_cp

0x6c04,	// (0x00038605) form2_midp_string_pane_ParamLimits

0x6c04,	// (0x00038605) form2_midp_string_pane

0x12f7,	// (0x00032cf8) form2_midp_text_pane_ParamLimits

0x12f7,	// (0x00032cf8) form2_midp_text_pane

0x6c16,	// (0x00038617) form2_midp_time_pane

0x6c26,	// (0x00038627) input_focus_pane_cp51_ParamLimits

0x6c26,	// (0x00038627) input_focus_pane_cp51

0x6c3e,	// (0x0003863f) form2_midp_label_pane_t1_ParamLimits

0x6c3e,	// (0x0003863f) form2_midp_label_pane_t1

0x1318,	// (0x00032d19) form2_mdip_text_pane_t1_ParamLimits

0x1318,	// (0x00032d19) form2_mdip_text_pane_t1

0x133c,	// (0x00032d3d) form2_midp_time_pane_t1

0x6c8c,	// (0x0003868d) form2_midp_gauge_slider_pane_t1

0xd916,	// (0x0003f317) form2_midp_gauge_slider_pane_t2

0xd928,	// (0x0003f329) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafc,	// (0x000414fd) form2_midp_gauge_slider_pane_t

0x6cc2,	// (0x000386c3) form2_midp_slider_pane

0x6cce,	// (0x000386cf) form2_midp_gauge_wait_pane_t1

0x6cdc,	// (0x000386dd) form2_midp_wait_pane_ParamLimits

0x6cdc,	// (0x000386dd) form2_midp_wait_pane

0xd257,	// (0x0003ec58) list_single_2graphic_pane_cp4_ParamLimits

0xd257,	// (0x0003ec58) list_single_2graphic_pane_cp4

0xd93a,	// (0x0003f33b) list_single_midp_graphic_pane_cp_ParamLimits

0xd93a,	// (0x0003f33b) list_single_midp_graphic_pane_cp

0xe08e,	// (0x0003fa8f) list_highlight_pane_cp20

0x6d2b,	// (0x0003872c) list_single_2graphic_pane_g1_cp4

0x62cd,	// (0x00037cce) list_single_2graphic_pane_g2_cp4

0x6d33,	// (0x00038734) list_single_2graphic_pane_t1_cp4

0x223d,	// (0x00033c3e) list_highlight_pane_cp21

0x6d42,	// (0x00038743) list_single_midp_graphic_pane_g4_cp

0x6d51,	// (0x00038752) list_single_midp_graphic_pane_t1_cp

0xd95b,	// (0x0003f35c) form2_mdip_string_pane_t1_ParamLimits

0xd95b,	// (0x0003f35c) form2_mdip_string_pane_t1

0xe08e,	// (0x0003fa8f) bg_wml_button_pane_cp2

0xe084,	// (0x0003fa85) form2_midp_image_pane_g1

0xefce,	// (0x000409cf) list_double_large_graphic_pane_g5_ParamLimits

0xefce,	// (0x000409cf) list_double_large_graphic_pane_g5

0xc5f4,	// (0x0003dff5) midp_form_pane_ParamLimits

0x223d,	// (0x00033c3e) main_apps_wheel_pane_ParamLimits

0xcb36,	// (0x0003e537) popup_preview_window_ParamLimits

0xcb36,	// (0x0003e537) popup_preview_window

0x42ca,	// (0x00035ccb) popup_touch_info_window_ParamLimits

0x42ca,	// (0x00035ccb) popup_touch_info_window

0x42ec,	// (0x00035ced) popup_touch_menu_window_ParamLimits

0x42ec,	// (0x00035ced) popup_touch_menu_window

0xe07a,	// (0x0003fa7b) bg_popup_sub_pane_cp6

0x6e0b,	// (0x0003880c) list_touch_menu_pane

0x6e13,	// (0x00038814) list_single_touch_menu_pane_ParamLimits

0x6e13,	// (0x00038814) list_single_touch_menu_pane

0x6e2e,	// (0x0003882f) list_single_touch_menu_pane_t1

0x223d,	// (0x00033c3e) bg_popup_sub_pane_cp7_ParamLimits

0x223d,	// (0x00033c3e) bg_popup_sub_pane_cp7

0x6e3c,	// (0x0003883d) heading_sub_pane

0x6e44,	// (0x00038845) list_touch_info_pane_ParamLimits

0x6e44,	// (0x00038845) list_touch_info_pane

0x6e53,	// (0x00038854) list_single_touch_info_pane_ParamLimits

0x6e53,	// (0x00038854) list_single_touch_info_pane

0x6e65,	// (0x00038866) list_single_touch_info_pane_t1

0x6e73,	// (0x00038874) list_single_touch_info_pane_t2

0x0001,

0xfb0a,	// (0x0004150b) list_single_touch_info_pane_t

0x3980,	// (0x00035381) bg_popup_heading_pane_cp

0x6e81,	// (0x00038882) heading_sub_pane_t1

0x4934,	// (0x00036335) bg_popup_preview_window_pane_cp_ParamLimits

0x4934,	// (0x00036335) bg_popup_preview_window_pane_cp

0x6e3c,	// (0x0003883d) heading_preview_pane

0x6e44,	// (0x00038845) list_preview_pane_ParamLimits

0x6e44,	// (0x00038845) list_preview_pane

0x6e8f,	// (0x00038890) popup_preview_window_g1

0x6e53,	// (0x00038854) list_single_preview_pane_ParamLimits

0x6e53,	// (0x00038854) list_single_preview_pane

0x6e97,	// (0x00038898) list_single_preview_pane_g1

0x6e9f,	// (0x000388a0) list_single_preview_pane_t1

0x6e65,	// (0x00038866) list_single_preview_pane_t2

0x0001,

0xfb0f,	// (0x00041510) list_single_preview_pane_t

0x6ead,	// (0x000388ae) bg_popup_heading_pane_cp2_ParamLimits

0x6ead,	// (0x000388ae) bg_popup_heading_pane_cp2

0x6ec3,	// (0x000388c4) heading_preview_pane_g1

0x6ecb,	// (0x000388cc) heading_preview_pane_t1_ParamLimits

0x6ecb,	// (0x000388cc) heading_preview_pane_t1

0x232c,	// (0x00033d2d) soft_indicator_pane_t1_ParamLimits

0x2a37,	// (0x00034438) scroll_pane_ParamLimits

0x31c6,	// (0x00034bc7) scroll_sc2_left_pane

0x31cf,	// (0x00034bd0) scroll_sc2_right_pane

0x31ee,	// (0x00034bef) scroll_bg_pane_g1_ParamLimits

0x3203,	// (0x00034c04) scroll_bg_pane_g2_ParamLimits

0x321b,	// (0x00034c1c) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x000410fb) scroll_bg_pane_g_ParamLimits

0x31ee,	// (0x00034bef) scroll_handle_pane_g1_ParamLimits

0x323d,	// (0x00034c3e) scroll_handle_pane_g2_ParamLimits

0x321b,	// (0x00034c1c) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x00041102) scroll_handle_pane_g_ParamLimits

0x3d2e,	// (0x0003572f) popup_choice_list_window_ParamLimits

0x3d2e,	// (0x0003572f) popup_choice_list_window

0x478c,	// (0x0003618d) choice_list_pane

0x480e,	// (0x0003620f) cell_toolbar_pane_t1

0x4836,	// (0x00036237) toolbar_button_pane_ParamLimits

0x5941,	// (0x00037342) ai_gene_pane_1_t2_ParamLimits

0x5941,	// (0x00037342) ai_gene_pane_1_t2

0x0001,

0xf919,	// (0x0004131a) ai_gene_pane_1_t_ParamLimits

0xf919,	// (0x0004131a) ai_gene_pane_1_t

0x6ee8,	// (0x000388e9) scroll_sc2_left_pane_g1

0x6ee8,	// (0x000388e9) scroll_sc2_right_pane_g1

0x3d06,	// (0x00035707) bg_popup_sub_pane_cp10

0x6ef2,	// (0x000388f3) list_choice_list_pane

0x6f09,	// (0x0003890a) list_single_choice_list_pane_ParamLimits

0x6f09,	// (0x0003890a) list_single_choice_list_pane

0x6f1d,	// (0x0003891e) list_single_choice_list_pane_g1

0x6f25,	// (0x00038926) list_single_choice_list_pane_t1_ParamLimits

0x6f25,	// (0x00038926) list_single_choice_list_pane_t1

0x6f3a,	// (0x0003893b) choice_list_pane_g1

0x6f42,	// (0x00038943) choice_list_pane_t1

0xe07a,	// (0x0003fa7b) input_focus_pane_cp11

0x30a0,	// (0x00034aa1) title_pane_stacon_g2_ParamLimits

0x30a0,	// (0x00034aa1) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x000410e1) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x000410e1) title_pane_stacon_g

0x3980,	// (0x00035381) cursor_press_pane

0xc7b7,	// (0x0003e1b8) popup_fep_hwr_window_ParamLimits

0xc7b7,	// (0x0003e1b8) popup_fep_hwr_window

0x3e6e,	// (0x0003586f) popup_fep_vkb_window_ParamLimits

0x3e6e,	// (0x0003586f) popup_fep_vkb_window

0x6f50,	// (0x00038951) cursor_press_pane_g1

0x0002,

0xfb38,	// (0x00041539) fep_vkb_side_pane_g_ParamLimits

0x1388,	// (0x00032d89) fep_hwr_candidate_pane_ParamLimits

0x1388,	// (0x00032d89) fep_hwr_candidate_pane

0x13b2,	// (0x00032db3) fep_hwr_side_pane_ParamLimits

0x13b2,	// (0x00032db3) fep_hwr_side_pane

0x13d4,	// (0x00032dd5) fep_hwr_top_pane_ParamLimits

0x13d4,	// (0x00032dd5) fep_hwr_top_pane

0x13ec,	// (0x00032ded) fep_hwr_write_pane_ParamLimits

0x13ec,	// (0x00032ded) fep_hwr_write_pane

0xfb38,	// (0x00041539) fep_vkb_side_pane_g

0x6f58,	// (0x00038959) fep_hwr_top_pane_g1

0x6f6a,	// (0x0003896b) fep_hwr_top_pane_g2

0x1426,	// (0x00032e27) fep_hwr_top_pane_g3

0x0002,

0xfb14,	// (0x00041515) fep_hwr_top_pane_g

0x143b,	// (0x00032e3c) fep_hwr_top_text_pane

0x3392,	// (0x00034d93) fep_hwr_top_text_pane_g1

0x6fa0,	// (0x000389a1) fep_hwr_top_text_pane_t1

0x1545,	// (0x00032f46) fep_hwr_candidate_pane_g1

0x71eb,	// (0x00038bec) fep_vkb_keypad_pane_g3_ParamLimits

0x71eb,	// (0x00038bec) fep_vkb_keypad_pane_g3

0x7217,	// (0x00038c18) fep_vkb_keypad_pane_g4_ParamLimits

0x7217,	// (0x00038c18) fep_vkb_keypad_pane_g4

0x728e,	// (0x00038c8f) fep_vkb_bottom_pane_g2_ParamLimits

0x728e,	// (0x00038c8f) fep_vkb_bottom_pane_g2

0x0001,

0xfb3f,	// (0x00041540) fep_vkb_bottom_pane_g_ParamLimits

0xfb3f,	// (0x00041540) fep_vkb_bottom_pane_g

0x6ee8,	// (0x000388e9) cell_vkb_side_pane_g2

0x0001,

0xfb49,	// (0x0004154a) cell_vkb_side_pane_g

0x7319,	// (0x00038d1a) cell_vkb_side_pane_t1

0x7327,	// (0x00038d28) cell_vkb_side_pane_t1_copy1

0x6ee8,	// (0x000388e9) bg_fep_vkb_candidate_pane_g2

0x746b,	// (0x00038e6c) cell_vkb_candidate_pane_ParamLimits

0x6fae,	// (0x000389af) aid_size_cell_vkb_ParamLimits

0x6fae,	// (0x000389af) aid_size_cell_vkb

0x746b,	// (0x00038e6c) cell_vkb_candidate_pane

0x156c,	// (0x00032f6d) bg_popup_fep_shadow_pane_g1

0xd9f7,	// (0x0003f3f8) fep_vkb_bottom_pane_ParamLimits

0xd9f7,	// (0x0003f3f8) fep_vkb_bottom_pane

0x707d,	// (0x00038a7e) fep_vkb_candidate_pane_ParamLimits

0x707d,	// (0x00038a7e) fep_vkb_candidate_pane

0xda23,	// (0x0003f424) fep_vkb_keypad_pane_ParamLimits

0xda23,	// (0x0003f424) fep_vkb_keypad_pane

0xda4a,	// (0x0003f44b) fep_vkb_side_pane_ParamLimits

0xda4a,	// (0x0003f44b) fep_vkb_side_pane

0xda86,	// (0x0003f487) fep_vkb_top_pane_ParamLimits

0xda86,	// (0x0003f487) fep_vkb_top_pane

0x7144,	// (0x00038b45) fep_vkb_top_pane_g1_ParamLimits

0x7144,	// (0x00038b45) fep_vkb_top_pane_g1

0x7153,	// (0x00038b54) fep_vkb_top_pane_g2_ParamLimits

0x7153,	// (0x00038b54) fep_vkb_top_pane_g2

0x7162,	// (0x00038b63) fep_vkb_top_pane_g3_ParamLimits

0x7162,	// (0x00038b63) fep_vkb_top_pane_g3

0x0003,

0xfb2f,	// (0x00041530) fep_vkb_top_pane_g_ParamLimits

0xfb2f,	// (0x00041530) fep_vkb_top_pane_g

0x7180,	// (0x00038b81) fep_vkb_top_text_pane_ParamLimits

0x7180,	// (0x00038b81) fep_vkb_top_text_pane

0xdac2,	// (0x0003f4c3) fep_vkb_side_pane_g1_ParamLimits

0xdac2,	// (0x0003f4c3) fep_vkb_side_pane_g1

0x71da,	// (0x00038bdb) grid_vkb_side_pane_ParamLimits

0x71da,	// (0x00038bdb) grid_vkb_side_pane

0x1574,	// (0x00032f75) bg_popup_fep_shadow_pane_g2

0x157d,	// (0x00032f7e) bg_popup_fep_shadow_pane_g3

0x1585,	// (0x00032f86) bg_popup_fep_shadow_pane_g4

0x158e,	// (0x00032f8f) bg_popup_fep_shadow_pane_g5

0x1598,	// (0x00032f99) bg_popup_fep_shadow_pane_g6

0x15a0,	// (0x00032fa1) bg_popup_fep_shadow_pane_g7

0x2b43,	// (0x00034544) bg_popup_fep_shadow_pane_g8

0x7239,	// (0x00038c3a) grid_vkb_keypad_number_pane_ParamLimits

0x7239,	// (0x00038c3a) grid_vkb_keypad_number_pane

0x724d,	// (0x00038c4e) grid_vkb_keypad_pane_ParamLimits

0x724d,	// (0x00038c4e) grid_vkb_keypad_pane

0x7273,	// (0x00038c74) fep_vkb_bottom_pane_g1_ParamLimits

0x7273,	// (0x00038c74) fep_vkb_bottom_pane_g1

0x729c,	// (0x00038c9d) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x729c,	// (0x00038c9d) grid_vkb_keypad_bottom_left_pane

0x72b1,	// (0x00038cb2) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x72b1,	// (0x00038cb2) grid_vkb_keypad_bottom_right_pane

0x72c6,	// (0x00038cc7) fep_vkb_top_text_pane_g1

0xdb09,	// (0x0003f50a) fep_vkb_top_text_pane_t1

0xdb1b,	// (0x0003f51c) cell_vkb_side_pane_ParamLimits

0xdb1b,	// (0x0003f51c) cell_vkb_side_pane

0x6ee8,	// (0x000388e9) cell_vkb_side_pane_g1

0x7335,	// (0x00038d36) cell_vkb_keypad_pane_ParamLimits

0x7335,	// (0x00038d36) cell_vkb_keypad_pane

0x73c2,	// (0x00038dc3) cell_vkb_keypad_pane_g1

0x0008,

0xfb5c,	// (0x0004155d) bg_popup_fep_shadow_pane_g

0x15b2,	// (0x00032fb3) cell_hwr_side_pane_g1

0x15b2,	// (0x00032fb3) cell_hwr_side_pane_g2

0x73cc,	// (0x00038dcd) cell_vkb_keypad_pane_t1

0xdb31,	// (0x0003f532) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdb31,	// (0x0003f532) cell_vkb_keypad_bottom_left_pane

0xdb46,	// (0x0003f547) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdb46,	// (0x0003f547) cell_vkb_keypad_bottom_right_pane

0x6ee8,	// (0x000388e9) cell_vkb_keypad_bottom_left_pane_g1

0x6ee8,	// (0x000388e9) cell_vkb_keypad_bottom_right_pane_g1

0x7430,	// (0x00038e31) cell_vkb_keypad_number_pane_ParamLimits

0x7430,	// (0x00038e31) cell_vkb_keypad_number_pane

0x744f,	// (0x00038e50) cell_vkb_keypad_number_pane_g1

0x7459,	// (0x00038e5a) cell_vkb_keypad_number_pane_g2

0x7462,	// (0x00038e63) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4e,	// (0x0004154f) cell_vkb_keypad_number_pane_g

0x73cc,	// (0x00038dcd) cell_vkb_keypad_number_pane_t1

0x748c,	// (0x00038e8d) fep_vkb_candidate_pane_g1

0x0001,

0xfb6f,	// (0x00041570) cell_hwr_side_pane_g

0x74a5,	// (0x00038ea6) cell_hwr_side_pane_t1

0x15bc,	// (0x00032fbd) cell_hwr_side_pane_t1_copy1

0x15ca,	// (0x00032fcb) cell_hwr_candidate_pane_g1

0x15f9,	// (0x00032ffa) cell_hwr_candidate_pane_t1

0x6ee8,	// (0x000388e9) cell_vkb_candidate_pane_g2

0x74e9,	// (0x00038eea) cell_vkb_candidate_pane_t1

0x134f,	// (0x00032d50) bg_popup_fep_shadow_pane_ParamLimits

0x134f,	// (0x00032d50) bg_popup_fep_shadow_pane

0x1406,	// (0x00032e07) bg_fep_hwr_top_pane_g4

0x6f7c,	// (0x0003897d) bg_hwr_side_pane_g1_ParamLimits

0x6f7c,	// (0x0003897d) bg_hwr_side_pane_g1

0xbd61,	// (0x0003d762) cell_hwr_side_pane_ParamLimits

0xbd61,	// (0x0003d762) cell_hwr_side_pane

0x14b6,	// (0x00032eb7) fep_hwr_write_pane_g1_ParamLimits

0x14b6,	// (0x00032eb7) fep_hwr_write_pane_g1

0x14c3,	// (0x00032ec4) fep_hwr_write_pane_g2_ParamLimits

0x14c3,	// (0x00032ec4) fep_hwr_write_pane_g2

0x14d0,	// (0x00032ed1) fep_hwr_write_pane_g3_ParamLimits

0x14d0,	// (0x00032ed1) fep_hwr_write_pane_g3

0xbd81,	// (0x0003d782) fep_hwr_write_pane_g4_ParamLimits

0xbd81,	// (0x0003d782) fep_hwr_write_pane_g4

0x0005,

0xfb1b,	// (0x0004151c) fep_hwr_write_pane_g_ParamLimits

0xfb1b,	// (0x0004151c) fep_hwr_write_pane_g

0x1406,	// (0x00032e07) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1406,	// (0x00032e07) bg_fep_hwr_candidate_pane_g2

0x14f3,	// (0x00032ef4) cell_hwr_candidate_pane_ParamLimits

0x14f3,	// (0x00032ef4) cell_hwr_candidate_pane

0x1545,	// (0x00032f46) fep_hwr_candidate_pane_g1_ParamLimits

0x6fdc,	// (0x000389dd) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6fdc,	// (0x000389dd) bg_popup_fep_shadow_pane_cp2

0x7172,	// (0x00038b73) fep_vkb_top_pane_g4_ParamLimits

0x7172,	// (0x00038b73) fep_vkb_top_pane_g4

0x71b8,	// (0x00038bb9) fep_vkb_side_pane_g2_ParamLimits

0x71b8,	// (0x00038bb9) fep_vkb_side_pane_g2

0xb662,	// (0x0003d063) list_setting_pane_t4_ParamLimits

0xb662,	// (0x0003d063) list_setting_pane_t4

0xb6fe,	// (0x0003d0ff) list_setting_number_pane_t5_ParamLimits

0xb6fe,	// (0x0003d0ff) list_setting_number_pane_t5

0x33c4,	// (0x00034dc5) list_double_heading_pane_cp2_ParamLimits

0x33c4,	// (0x00034dc5) list_double_heading_pane_cp2

0x2ade,	// (0x000344df) list_double_heading_pane_g1_cp2_ParamLimits

0x2ade,	// (0x000344df) list_double_heading_pane_g1_cp2

0x2aea,	// (0x000344eb) list_double_heading_pane_g2_cp2_ParamLimits

0x2aea,	// (0x000344eb) list_double_heading_pane_g2_cp2

0x74f7,	// (0x00038ef8) list_double_heading_pane_t1_cp2_ParamLimits

0x74f7,	// (0x00038ef8) list_double_heading_pane_t1_cp2

0x750d,	// (0x00038f0e) list_double_heading_pane_t2_cp2_ParamLimits

0x750d,	// (0x00038f0e) list_double_heading_pane_t2_cp2

0xe072,	// (0x0003fa73) aid_value_unit2

0xf463,	// (0x00040e64) popup_preview_fixed_window

0x24c7,	// (0x00033ec8) bg_popup_preview_window_pane_cp02

0x751f,	// (0x00038f20) list_preview_fixed_pane

0x7565,	// (0x00038f66) list_empty_pane_fp_ParamLimits

0x7565,	// (0x00038f66) list_empty_pane_fp

0x7565,	// (0x00038f66) list_single_cale_day_pane_fp_ParamLimits

0x7565,	// (0x00038f66) list_single_cale_day_pane_fp

0x7565,	// (0x00038f66) list_single_graphic_heading_pane_fp_ParamLimits

0x7565,	// (0x00038f66) list_single_graphic_heading_pane_fp

0x7565,	// (0x00038f66) list_single_graphic_pane_fp_ParamLimits

0x7565,	// (0x00038f66) list_single_graphic_pane_fp

0x7565,	// (0x00038f66) list_single_heading_pane_fp_ParamLimits

0x7565,	// (0x00038f66) list_single_heading_pane_fp

0x7565,	// (0x00038f66) list_single_pane_fp_ParamLimits

0x7565,	// (0x00038f66) list_single_pane_fp

0x757e,	// (0x00038f7f) list_single_pane_fp_g1_ParamLimits

0x757e,	// (0x00038f7f) list_single_pane_fp_g1

0x1617,	// (0x00033018) list_single_pane_fp_g2_ParamLimits

0x1617,	// (0x00033018) list_single_pane_fp_g2

0x1623,	// (0x00033024) list_single_pane_fp_g3_ParamLimits

0x1623,	// (0x00033024) list_single_pane_fp_g3

0x758a,	// (0x00038f8b) list_single_pane_fp_g4_ParamLimits

0x758a,	// (0x00038f8b) list_single_pane_fp_g4

0x0003,

0xfb82,	// (0x00041583) list_single_pane_fp_g_ParamLimits

0xfb82,	// (0x00041583) list_single_pane_fp_g

0x1637,	// (0x00033038) list_single_pane_fp_t1_ParamLimits

0x1637,	// (0x00033038) list_single_pane_fp_t1

0x164e,	// (0x0003304f) list_single_graphic_pane_fp_g1_ParamLimits

0x164e,	// (0x0003304f) list_single_graphic_pane_fp_g1

0x757e,	// (0x00038f7f) list_single_graphic_pane_fp_g2_ParamLimits

0x757e,	// (0x00038f7f) list_single_graphic_pane_fp_g2

0x1617,	// (0x00033018) list_single_graphic_pane_fp_g3_ParamLimits

0x1617,	// (0x00033018) list_single_graphic_pane_fp_g3

0x1623,	// (0x00033024) list_single_graphic_pane_fp_g4_ParamLimits

0x1623,	// (0x00033024) list_single_graphic_pane_fp_g4

0x758a,	// (0x00038f8b) list_single_graphic_pane_fp_g5_ParamLimits

0x758a,	// (0x00038f8b) list_single_graphic_pane_fp_g5

0x0004,

0xfb8b,	// (0x0004158c) list_single_graphic_pane_fp_g_ParamLimits

0xfb8b,	// (0x0004158c) list_single_graphic_pane_fp_g

0x165a,	// (0x0003305b) list_single_graphic_pane_fp_t1_ParamLimits

0x165a,	// (0x0003305b) list_single_graphic_pane_fp_t1

0x164e,	// (0x0003304f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x164e,	// (0x0003304f) list_single_graphic_heading_pane_fp_g1

0x757e,	// (0x00038f7f) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x757e,	// (0x00038f7f) list_single_graphic_heading_pane_fp_g2

0x1617,	// (0x00033018) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x1617,	// (0x00033018) list_single_graphic_heading_pane_fp_g3

0x1623,	// (0x00033024) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x1623,	// (0x00033024) list_single_graphic_heading_pane_fp_g4

0x758a,	// (0x00038f8b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x758a,	// (0x00038f8b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x0004158c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x0004158c) list_single_graphic_heading_pane_fp_g

0x1670,	// (0x00033071) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x1670,	// (0x00033071) list_single_graphic_heading_pane_fp_t1

0x1686,	// (0x00033087) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x1686,	// (0x00033087) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb96,	// (0x00041597) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb96,	// (0x00041597) list_single_graphic_heading_pane_fp_t

0x1698,	// (0x00033099) list_single_cale_day_pane_fp_g1_ParamLimits

0x1698,	// (0x00033099) list_single_cale_day_pane_fp_g1

0x7596,	// (0x00038f97) list_single_cale_day_pane_fp_g2_ParamLimits

0x7596,	// (0x00038f97) list_single_cale_day_pane_fp_g2

0x16d0,	// (0x000330d1) list_single_cale_day_pane_fp_g3_ParamLimits

0x16d0,	// (0x000330d1) list_single_cale_day_pane_fp_g3

0x16f8,	// (0x000330f9) list_single_cale_day_pane_fp_g4_ParamLimits

0x16f8,	// (0x000330f9) list_single_cale_day_pane_fp_g4

0x171c,	// (0x0003311d) list_single_cale_day_pane_fp_g5_ParamLimits

0x171c,	// (0x0003311d) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9b,	// (0x0004159c) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9b,	// (0x0004159c) list_single_cale_day_pane_fp_g

0x1740,	// (0x00033141) list_single_cale_day_pane_fp_t1_ParamLimits

0x1740,	// (0x00033141) list_single_cale_day_pane_fp_t1

0x2d8e,	// (0x0003478f) list_single_cale_day_pane_fp_t2_ParamLimits

0x2d8e,	// (0x0003478f) list_single_cale_day_pane_fp_t2

0x2da7,	// (0x000347a8) list_single_cale_day_pane_fp_t3_ParamLimits

0x2da7,	// (0x000347a8) list_single_cale_day_pane_fp_t3

0x0002,

0xfba6,	// (0x000415a7) list_single_cale_day_pane_fp_t_ParamLimits

0xfba6,	// (0x000415a7) list_single_cale_day_pane_fp_t

0x757e,	// (0x00038f7f) list_empty_pane_fp_g1_ParamLimits

0x757e,	// (0x00038f7f) list_empty_pane_fp_g1

0x2dc0,	// (0x000347c1) list_empty_pane_fp_t1

0x2dce,	// (0x000347cf) list_empty_pane_fp_t2

0x0001,

0xfbad,	// (0x000415ae) list_empty_pane_fp_t

0x757e,	// (0x00038f7f) list_single_heading_pane_fp_g1_ParamLimits

0x757e,	// (0x00038f7f) list_single_heading_pane_fp_g1

0x1617,	// (0x00033018) list_single_heading_pane_fp_g2_ParamLimits

0x1617,	// (0x00033018) list_single_heading_pane_fp_g2

0x1623,	// (0x00033024) list_single_heading_pane_fp_g3_ParamLimits

0x1623,	// (0x00033024) list_single_heading_pane_fp_g3

0x0002,

0xfbb2,	// (0x000415b3) list_single_heading_pane_fp_g_ParamLimits

0xfbb2,	// (0x000415b3) list_single_heading_pane_fp_g

0x2ddc,	// (0x000347dd) list_single_heading_pane_fp_t1_ParamLimits

0x2ddc,	// (0x000347dd) list_single_heading_pane_fp_t1

0x2dee,	// (0x000347ef) list_single_heading_pane_fp_t2_ParamLimits

0x2dee,	// (0x000347ef) list_single_heading_pane_fp_t2

0x0001,

0xfbb9,	// (0x000415ba) list_single_heading_pane_fp_t_ParamLimits

0xfbb9,	// (0x000415ba) list_single_heading_pane_fp_t

0x2cd9,	// (0x000346da) aid_size_cell_fast

0x2439,	// (0x00033e3a) soft_indicator_pane_cp1_t1

0x2d16,	// (0x00034717) cell_app_pane_cp2_ParamLimits

0x2d16,	// (0x00034717) cell_app_pane_cp2

0x1371,	// (0x00032d72) fep_hwr_candidate_drop_down_list_pane

0x155f,	// (0x00032f60) fep_hwr_candidate_pane_g3_ParamLimits

0x155f,	// (0x00032f60) fep_hwr_candidate_pane_g3

0xe0a4,	// (0x0003faa5) fep_hwr_candidate_pane_g4_ParamLimits

0xe0a4,	// (0x0003faa5) fep_hwr_candidate_pane_g4

0x0002,

0xfb28,	// (0x00041529) fep_hwr_candidate_pane_g_ParamLimits

0xfb28,	// (0x00041529) fep_hwr_candidate_pane_g

0x706c,	// (0x00038a6d) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x706c,	// (0x00038a6d) fep_vkb_candidate_drop_down_list_pane

0x7494,	// (0x00038e95) fep_vkb_candidate_pane_g3

0x749c,	// (0x00038e9d) fep_vkb_candidate_pane_g4

0x0002,

0xfb55,	// (0x00041556) fep_vkb_candidate_pane_g

0x15ca,	// (0x00032fcb) cell_hwr_candidate_pane_g1_ParamLimits

0x15d8,	// (0x00032fd9) cell_hwr_candidate_pane_g3_ParamLimits

0x15d8,	// (0x00032fd9) cell_hwr_candidate_pane_g3

0x862a,	// (0x0003a02b) cell_hwr_candidate_pane_g4_ParamLimits

0x862a,	// (0x0003a02b) cell_hwr_candidate_pane_g4

0x0002,

0xfb74,	// (0x00041575) cell_hwr_candidate_pane_g_ParamLimits

0xfb74,	// (0x00041575) cell_hwr_candidate_pane_g

0x74b3,	// (0x00038eb4) cell_vkb_candidate_pane_g3_ParamLimits

0x74b3,	// (0x00038eb4) cell_vkb_candidate_pane_g3

0x74ce,	// (0x00038ecf) cell_vkb_candidate_pane_g4_ParamLimits

0x74ce,	// (0x00038ecf) cell_vkb_candidate_pane_g4

0x75a2,	// (0x00038fa3) cell_app_pane_cp2_g1_ParamLimits

0x75a2,	// (0x00038fa3) cell_app_pane_cp2_g1

0x75c0,	// (0x00038fc1) cell_app_pane_cp2_g2_ParamLimits

0x75c0,	// (0x00038fc1) cell_app_pane_cp2_g2

0x0001,

0xfbbe,	// (0x000415bf) cell_app_pane_cp2_g_ParamLimits

0xfbbe,	// (0x000415bf) cell_app_pane_cp2_g

0x75cc,	// (0x00038fcd) cell_app_pane_cp2_t1_ParamLimits

0x75cc,	// (0x00038fcd) cell_app_pane_cp2_t1

0x2ac4,	// (0x000344c5) grid_highlight_pane_cp1_ParamLimits

0x2ac4,	// (0x000344c5) grid_highlight_pane_cp1

0x1766,	// (0x00033167) cell_hwr_candidate_pane_cp1_ParamLimits

0x1766,	// (0x00033167) cell_hwr_candidate_pane_cp1

0x15ca,	// (0x00032fcb) fep_hwr_candidate_drop_down_list_pane_g1

0x178a,	// (0x0003318b) fep_hwr_candidate_drop_down_list_pane_g2

0x1797,	// (0x00033198) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x000415c4) fep_hwr_candidate_drop_down_list_pane_g

0x17a4,	// (0x000331a5) fep_hwr_candidate_drop_down_list_scroll_pane

0x17ad,	// (0x000331ae) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x17ad,	// (0x000331ae) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x17ba,	// (0x000331bb) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x17ba,	// (0x000331bb) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x17c7,	// (0x000331c8) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x17c7,	// (0x000331c8) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x17d4,	// (0x000331d5) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x17d4,	// (0x000331d5) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x17ef,	// (0x000331f0) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x17ef,	// (0x000331f0) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x180a,	// (0x0003320b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x180a,	// (0x0003320b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1825,	// (0x00033226) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1825,	// (0x00033226) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1840,	// (0x00033241) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1840,	// (0x00033241) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x000415cb) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x000415cb) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x75de,	// (0x00038fdf) cell_vkb_candidate_pane_cp1_ParamLimits

0x75de,	// (0x00038fdf) cell_vkb_candidate_pane_cp1

0x7172,	// (0x00038b73) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7172,	// (0x00038b73) fep_vkb_candidate_drop_down_list_pane_g1

0x7604,	// (0x00039005) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7604,	// (0x00039005) fep_vkb_candidate_drop_down_list_pane_g2

0x7611,	// (0x00039012) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7611,	// (0x00039012) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdb,	// (0x000415dc) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdb,	// (0x000415dc) fep_vkb_candidate_drop_down_list_pane_g

0x761e,	// (0x0003901f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x761e,	// (0x0003901f) fep_vkb_candidate_drop_down_list_scroll_pane

0x762b,	// (0x0003902c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x762b,	// (0x0003902c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7638,	// (0x00039039) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7638,	// (0x00039039) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7644,	// (0x00039045) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7644,	// (0x00039045) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7650,	// (0x00039051) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7650,	// (0x00039051) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7671,	// (0x00039072) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7671,	// (0x00039072) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7692,	// (0x00039093) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7692,	// (0x00039093) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x76b3,	// (0x000390b4) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x76b3,	// (0x000390b4) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x76d4,	// (0x000390d5) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x76d4,	// (0x000390d5) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe2,	// (0x000415e3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe2,	// (0x000415e3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xaf68,	// (0x0003c969) title_pane_g1_ParamLimits

0xaf79,	// (0x0003c97a) title_pane_g2_ParamLimits

0xf56a,	// (0x00040f6b) title_pane_g_ParamLimits

0x3382,	// (0x00034d83) aid_call2_pane

0x338a,	// (0x00034d8b) aid_call_pane

0x3392,	// (0x00034d93) popup_clock_analogue_window_g1

0x3392,	// (0x00034d93) popup_clock_analogue_window_g2

0x05f2,	// (0x00031ff3) popup_clock_analogue_window_g3

0x05fb,	// (0x00031ffc) popup_clock_analogue_window_g4

0xe084,	// (0x0003fa85) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x00041110) popup_clock_analogue_window_g

0x0603,	// (0x00032004) popup_clock_analogue_window_t1

0x0611,	// (0x00032012) clock_digital_number_pane_ParamLimits

0x0611,	// (0x00032012) clock_digital_number_pane

0x061d,	// (0x0003201e) clock_digital_number_pane_cp02_ParamLimits

0x061d,	// (0x0003201e) clock_digital_number_pane_cp02

0x0629,	// (0x0003202a) clock_digital_number_pane_cp03_ParamLimits

0x0629,	// (0x0003202a) clock_digital_number_pane_cp03

0x0635,	// (0x00032036) clock_digital_number_pane_cp04_ParamLimits

0x0635,	// (0x00032036) clock_digital_number_pane_cp04

0x0641,	// (0x00032042) clock_digital_separator_pane_ParamLimits

0x0641,	// (0x00032042) clock_digital_separator_pane

0x064d,	// (0x0003204e) popup_clock_digital_window_t1_ParamLimits

0x064d,	// (0x0003204e) popup_clock_digital_window_t1

0xe084,	// (0x0003fa85) clock_digital_number_pane_g1

0xe084,	// (0x0003fa85) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x0004111b) clock_digital_number_pane_g

0xe084,	// (0x0003fa85) clock_digital_separator_pane_g1

0xe084,	// (0x0003fa85) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x0004111b) clock_digital_separator_pane_g

0xce1e,	// (0x0003e81f) aid_fill_nsta_ParamLimits

0xcf4f,	// (0x0003e950) indicator_nsta_pane_ParamLimits

0x4619,	// (0x0003601a) popup_clock_analogue_window

0x4619,	// (0x0003601a) popup_clock_digital_window

0x2c9a,	// (0x0003469b) grid_indicator_nsta_pane_ParamLimits

0x68cc,	// (0x000382cd) clock_nsta_pane_t2

0x0001,

0xfaa8,	// (0x000414a9) clock_nsta_pane_t

0x05b6,	// (0x00031fb7) aid_size_max_handle

0xb8e8,	// (0x0003d2e9) aid_size_min_handle

0x3980,	// (0x00035381) editor_scroll_pane

0x76ef,	// (0x000390f0) ex_editor_pane

0x2c46,	// (0x00034647) scroll_pane_cp13

0x2a63,	// (0x00034464) scroll_pane_cp14

0x33bc,	// (0x00034dbd) scroll_pane_cp36

0xc519,	// (0x0003df1a) list_single_graphic_hl_pane_cp2_ParamLimits

0xc519,	// (0x0003df1a) list_single_graphic_hl_pane_cp2

0xd68f,	// (0x0003f090) list_single_graphic_hl_pane_ParamLimits

0xd68f,	// (0x0003f090) list_single_graphic_hl_pane

0x2e04,	// (0x00034805) aid_size_min_hl_cp1

0x76f7,	// (0x000390f8) list_highlight_pane_cp34_ParamLimits

0x76f7,	// (0x000390f8) list_highlight_pane_cp34

0x7708,	// (0x00039109) list_single_graphic_hl_pane_g1_ParamLimits

0x7708,	// (0x00039109) list_single_graphic_hl_pane_g1

0xbd96,	// (0x0003d797) list_single_graphic_hl_pane_g2_ParamLimits

0xbd96,	// (0x0003d797) list_single_graphic_hl_pane_g2

0xbd96,	// (0x0003d797) list_single_graphic_hl_pane_g3_ParamLimits

0xbd96,	// (0x0003d797) list_single_graphic_hl_pane_g3

0xf04f,	// (0x00040a50) list_single_graphic_hl_pane_g4_ParamLimits

0xf04f,	// (0x00040a50) list_single_graphic_hl_pane_g4

0xbda2,	// (0x0003d7a3) list_single_graphic_hl_pane_g5_ParamLimits

0xbda2,	// (0x0003d7a3) list_single_graphic_hl_pane_g5

0x0004,

0xfbf3,	// (0x000415f4) list_single_graphic_hl_pane_g_ParamLimits

0xfbf3,	// (0x000415f4) list_single_graphic_hl_pane_g

0xbdb6,	// (0x0003d7b7) list_single_graphic_hl_pane_t1_ParamLimits

0xbdb6,	// (0x0003d7b7) list_single_graphic_hl_pane_t1

0x7715,	// (0x00039116) aid_size_min_hl_cp2

0x771e,	// (0x0003911f) list_highlight_pane_cp34_cp2_ParamLimits

0x771e,	// (0x0003911f) list_highlight_pane_cp34_cp2

0x7708,	// (0x00039109) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7708,	// (0x00039109) list_single_graphic_hl_pane_g1_cp2

0x772b,	// (0x0003912c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x772b,	// (0x0003912c) list_single_graphic_hl_pane_g2_cp2

0x7737,	// (0x00039138) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7737,	// (0x00039138) list_single_graphic_hl_pane_g3_cp2

0x2e43,	// (0x00034844) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x2e43,	// (0x00034844) list_single_graphic_hl_pane_g4_cp2

0x7745,	// (0x00039146) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7745,	// (0x00039146) list_single_graphic_hl_pane_g5_cp2

0xb9a6,	// (0x0003d3a7) control_pane_g4_ParamLimits

0xb9a6,	// (0x0003d3a7) control_pane_g4

0x3d06,	// (0x00035707) bg_popup_sub_pane_cp10_ParamLimits

0x6ef2,	// (0x000388f3) list_choice_list_pane_ParamLimits

0x6f01,	// (0x00038902) scroll_pane_cp23

0x24c7,	// (0x00033ec8) bg_popup_preview_window_pane_cp02_ParamLimits

0x751f,	// (0x00038f20) list_preview_fixed_pane_ParamLimits

0x7535,	// (0x00038f36) list_preview_fixed_pane_cp_ParamLimits

0x7535,	// (0x00038f36) list_preview_fixed_pane_cp

0x7541,	// (0x00038f42) popup_preview_fixed_window_g1_ParamLimits

0x7541,	// (0x00038f42) popup_preview_fixed_window_g1

0x754d,	// (0x00038f4e) popup_preview_fixed_window_g2_ParamLimits

0x754d,	// (0x00038f4e) popup_preview_fixed_window_g2

0x0002,

0xfb7b,	// (0x0004157c) popup_preview_fixed_window_g_ParamLimits

0xfb7b,	// (0x0004157c) popup_preview_fixed_window_g

0x0528,	// (0x00031f29) aid_navi_side_left_pane_ParamLimits

0x053d,	// (0x00031f3e) aid_navi_side_right_pane_ParamLimits

0x0555,	// (0x00031f56) navi_icon_pane_stacon_ParamLimits

0x0569,	// (0x00031f6a) navi_navi_pane_stacon_ParamLimits

0x0555,	// (0x00031f56) navi_text_pane_stacon_ParamLimits

0xe07a,	// (0x0003fa7b) main_text_info_pane

0x776f,	// (0x00039170) listscroll_text_info_pane

0x7777,	// (0x00039178) list_text_info_pane_ParamLimits

0x7777,	// (0x00039178) list_text_info_pane

0x7786,	// (0x00039187) scroll_pane_cp24_ParamLimits

0x7786,	// (0x00039187) scroll_pane_cp24

0xdb61,	// (0x0003f562) list_text_info_pane_t1_ParamLimits

0xdb61,	// (0x0003f562) list_text_info_pane_t1

0xc71b,	// (0x0003e11c) popup_fast_swap2_window_ParamLimits

0xc71b,	// (0x0003e11c) popup_fast_swap2_window

0x77c9,	// (0x000391ca) aid_size_cell_fast2

0xe07a,	// (0x0003fa7b) bg_popup_window_pane_cp17

0x4ccc,	// (0x000366cd) heading_pane_cp2

0x2727,	// (0x00034128) listscroll_fast2_pane

0x77d3,	// (0x000391d4) grid_fast2_pane

0x77dd,	// (0x000391de) listscroll_fast2_pane_g1

0x77e7,	// (0x000391e8) listscroll_fast2_pane_g2

0x0001,

0xfbfe,	// (0x000415ff) listscroll_fast2_pane_g

0x2c46,	// (0x00034647) scroll_pane_cp26

0x77f1,	// (0x000391f2) cell_fast2_pane_ParamLimits

0x77f1,	// (0x000391f2) cell_fast2_pane

0x7808,	// (0x00039209) cell_fast2_pane_g1

0x7811,	// (0x00039212) cell_fast2_pane_g2

0x781a,	// (0x0003921b) cell_fast2_pane_g3

0x0002,

0xfc03,	// (0x00041604) cell_fast2_pane_g

0x2820,	// (0x00034221) grid_highlight_pane_cp9

0x2835,	// (0x00034236) main_eswt_pane_ParamLimits

0x2835,	// (0x00034236) main_eswt_pane

0x779b,	// (0x0003919c) list_single_text_info_pane

0x7822,	// (0x00039223) eswt_ctrl_button_pane

0x7822,	// (0x00039223) eswt_ctrl_canvas_pane

0x782a,	// (0x0003922b) eswt_ctrl_combo_pane

0x7822,	// (0x00039223) eswt_ctrl_default_pane

0x7822,	// (0x00039223) eswt_ctrl_label_pane

0x7832,	// (0x00039233) eswt_ctrl_wait_pane

0x783a,	// (0x0003923b) eswt_shell_pane

0xe07a,	// (0x0003fa7b) listscroll_eswt_app_pane

0x785a,	// (0x0003925b) popup_eswt_tasktip_window_ParamLimits

0x785a,	// (0x0003925b) popup_eswt_tasktip_window

0x4934,	// (0x00036335) bg_popup_window_pane_cp18

0x786b,	// (0x0003926c) eswt_control_pane_g1_ParamLimits

0x786b,	// (0x0003926c) eswt_control_pane_g1

0x7878,	// (0x00039279) eswt_control_pane_g2_ParamLimits

0x7878,	// (0x00039279) eswt_control_pane_g2

0x7885,	// (0x00039286) eswt_control_pane_g3_ParamLimits

0x7885,	// (0x00039286) eswt_control_pane_g3

0x7892,	// (0x00039293) eswt_control_pane_g4_ParamLimits

0x7892,	// (0x00039293) eswt_control_pane_g4

0x0003,

0xfc0a,	// (0x0004160b) eswt_control_pane_g_ParamLimits

0xfc0a,	// (0x0004160b) eswt_control_pane_g

0x2ac4,	// (0x000344c5) bg_button_pane_ParamLimits

0x2ac4,	// (0x000344c5) bg_button_pane

0x2835,	// (0x00034236) common_borders_pane_copy2_ParamLimits

0x2835,	// (0x00034236) common_borders_pane_copy2

0x789f,	// (0x000392a0) control_button_pane_g1_ParamLimits

0x789f,	// (0x000392a0) control_button_pane_g1

0x78ab,	// (0x000392ac) control_button_pane_g2_ParamLimits

0x78ab,	// (0x000392ac) control_button_pane_g2

0x78b7,	// (0x000392b8) control_button_pane_g3_ParamLimits

0x78b7,	// (0x000392b8) control_button_pane_g3

0x0002,

0xfc13,	// (0x00041614) control_button_pane_g_ParamLimits

0xfc13,	// (0x00041614) control_button_pane_g

0x78cb,	// (0x000392cc) control_button_pane_t1

0x78d9,	// (0x000392da) control_button_pane_t2

0x0001,

0xfc1a,	// (0x0004161b) control_button_pane_t

0x4842,	// (0x00036243) bg_button_pane_g1

0x4852,	// (0x00036253) bg_button_pane_g2

0x484a,	// (0x0003624b) bg_button_pane_g3

0x4862,	// (0x00036263) bg_button_pane_g4

0x485a,	// (0x0003625b) bg_button_pane_g5

0x486a,	// (0x0003626b) bg_button_pane_g6

0x4872,	// (0x00036273) bg_button_pane_g7

0x4882,	// (0x00036283) bg_button_pane_g8

0x487a,	// (0x0003627b) bg_button_pane_g9

0x0008,

0xf86d,	// (0x0004126e) bg_button_pane_g

0x6ead,	// (0x000388ae) common_borders_pane_ParamLimits

0x6ead,	// (0x000388ae) common_borders_pane

0x786b,	// (0x0003926c) eswt_control_pane_g1_copy1_ParamLimits

0x786b,	// (0x0003926c) eswt_control_pane_g1_copy1

0x7878,	// (0x00039279) eswt_control_pane_g2_copy1_ParamLimits

0x7878,	// (0x00039279) eswt_control_pane_g2_copy1

0x7885,	// (0x00039286) eswt_control_pane_g3_copy1_ParamLimits

0x7885,	// (0x00039286) eswt_control_pane_g3_copy1

0x7892,	// (0x00039293) eswt_control_pane_g4_copy1_ParamLimits

0x7892,	// (0x00039293) eswt_control_pane_g4_copy1

0x6ee8,	// (0x000388e9) bg_eswt_ctrl_canvas_pane_g1

0x6ead,	// (0x000388ae) common_borders_pane_cp2_ParamLimits

0x6ead,	// (0x000388ae) common_borders_pane_cp2

0x6ead,	// (0x000388ae) common_borders_pane_cp3_ParamLimits

0x6ead,	// (0x000388ae) common_borders_pane_cp3

0x78e7,	// (0x000392e8) separator_horizontal_pane

0x78ef,	// (0x000392f0) separator_vertical_pane

0x786b,	// (0x0003926c) eswt_control_pane_g1_copy2_ParamLimits

0x786b,	// (0x0003926c) eswt_control_pane_g1_copy2

0x7878,	// (0x00039279) eswt_control_pane_g2_copy2_ParamLimits

0x7878,	// (0x00039279) eswt_control_pane_g2_copy2

0x7885,	// (0x00039286) eswt_control_pane_g3_copy2_ParamLimits

0x7885,	// (0x00039286) eswt_control_pane_g3_copy2

0x7892,	// (0x00039293) eswt_control_pane_g4_copy2_ParamLimits

0x7892,	// (0x00039293) eswt_control_pane_g4_copy2

0xe07a,	// (0x0003fa7b) common_borders_pane_cp4

0x78f8,	// (0x000392f9) separator_horizontal_pane_g1

0x7901,	// (0x00039302) separator_horizontal_pane_g2

0x790a,	// (0x0003930b) separator_horizontal_pane_g3

0x0002,

0xfc1f,	// (0x00041620) separator_horizontal_pane_g

0x786b,	// (0x0003926c) eswt_control_pane_g1_copy3_ParamLimits

0x786b,	// (0x0003926c) eswt_control_pane_g1_copy3

0x7878,	// (0x00039279) eswt_control_pane_g2_copy3_ParamLimits

0x7878,	// (0x00039279) eswt_control_pane_g2_copy3

0x7885,	// (0x00039286) eswt_control_pane_g3_copy3_ParamLimits

0x7885,	// (0x00039286) eswt_control_pane_g3_copy3

0x7892,	// (0x00039293) eswt_control_pane_g4_copy3_ParamLimits

0x7892,	// (0x00039293) eswt_control_pane_g4_copy3

0xe07a,	// (0x0003fa7b) common_borders_pane_cp5

0x7913,	// (0x00039314) separator_vertical_pane_g1

0x791c,	// (0x0003931d) separator_vertical_pane_g2

0x7925,	// (0x00039326) separator_vertical_pane_g3

0x0002,

0xfc26,	// (0x00041627) separator_vertical_pane_g

0x786b,	// (0x0003926c) eswt_control_pane_g1_copy4_ParamLimits

0x786b,	// (0x0003926c) eswt_control_pane_g1_copy4

0x7878,	// (0x00039279) eswt_control_pane_g2_copy4_ParamLimits

0x7878,	// (0x00039279) eswt_control_pane_g2_copy4

0x7885,	// (0x00039286) eswt_control_pane_g3_copy4_ParamLimits

0x7885,	// (0x00039286) eswt_control_pane_g3_copy4

0x7892,	// (0x00039293) eswt_control_pane_g4_copy4_ParamLimits

0x7892,	// (0x00039293) eswt_control_pane_g4_copy4

0xdb83,	// (0x0003f584) eswt_ctrl_combo_button_pane

0xdb8b,	// (0x0003f58c) eswt_ctrl_input_pane

0xdb93,	// (0x0003f594) popup_choice_list_window_cp70

0xdb9b,	// (0x0003f59c) eswt_ctrl_input_pane_t1

0xe07a,	// (0x0003fa7b) input_focus_pane_cp70

0x6ead,	// (0x000388ae) bg_button_pane_cp70_ParamLimits

0x6ead,	// (0x000388ae) bg_button_pane_cp70

0xdba9,	// (0x0003f5aa) eswt_ctrl_combo_button_pane_g1

0x795c,	// (0x0003935d) wait_bar_pane_cp70

0x4934,	// (0x00036335) bg_popup_window_pane_cp70_ParamLimits

0x4934,	// (0x00036335) bg_popup_window_pane_cp70

0x7964,	// (0x00039365) popup_eswt_tasktip_window_t1

0x797a,	// (0x0003937b) wait_bar_pane_cp71_ParamLimits

0x797a,	// (0x0003937b) wait_bar_pane_cp71

0x7986,	// (0x00039387) grid_eswt_app_pane

0x31c6,	// (0x00034bc7) scroll_pane_cp70

0xdbb1,	// (0x0003f5b2) cell_eswt_app_pane_ParamLimits

0xdbb1,	// (0x0003f5b2) cell_eswt_app_pane

0xdbe3,	// (0x0003f5e4) cell_eswt_app_pane_g1_ParamLimits

0xdbe3,	// (0x0003f5e4) cell_eswt_app_pane_g1

0xdc12,	// (0x0003f613) cell_eswt_app_pane_g2_ParamLimits

0xdc12,	// (0x0003f613) cell_eswt_app_pane_g2

0x0001,

0xfc2d,	// (0x0004162e) cell_eswt_app_pane_g_ParamLimits

0xfc2d,	// (0x0004162e) cell_eswt_app_pane_g

0xdc3b,	// (0x0003f63c) cell_eswt_app_pane_t1_ParamLimits

0xdc3b,	// (0x0003f63c) cell_eswt_app_pane_t1

0x7a4b,	// (0x0003944c) grid_highlight_pane_cp70_ParamLimits

0x7a4b,	// (0x0003944c) grid_highlight_pane_cp70

0x5dc5,	// (0x000377c6) set_content_pane_g1

0x3c30,	// (0x00035631) status_small_volume_pane

0x185b,	// (0x0003325c) status_small_volume_pane_g1

0x1863,	// (0x00033264) volume_small2_pane

0x186c,	// (0x0003326d) volume_small2_pane_g1

0x1875,	// (0x00033276) volume_small2_pane_g2

0x187e,	// (0x0003327f) volume_small2_pane_g3

0x1887,	// (0x00033288) volume_small2_pane_g4

0x1890,	// (0x00033291) volume_small2_pane_g5

0x1899,	// (0x0003329a) volume_small2_pane_g6

0x18a2,	// (0x000332a3) volume_small2_pane_g7

0x18ab,	// (0x000332ac) volume_small2_pane_g8

0x18b4,	// (0x000332b5) volume_small2_pane_g9

0x18bd,	// (0x000332be) volume_small2_pane_g10

0x0009,

0xfc32,	// (0x00041633) volume_small2_pane_g

0x72c6,	// (0x00038cc7) fep_vkb_top_text_pane_g1_ParamLimits

0xdb09,	// (0x0003f50a) fep_vkb_top_text_pane_t1_ParamLimits

0x7559,	// (0x00038f5a) popup_preview_fixed_window_g3_ParamLimits

0x7559,	// (0x00038f5a) popup_preview_fixed_window_g3

0xcdb1,	// (0x0003e7b2) popup_toolbar_trans_pane

0xd4f4,	// (0x0003eef5) aid_height_set_list_ParamLimits

0x5c7b,	// (0x0003767c) aid_size_parent_ParamLimits

0x3d06,	// (0x00035707) list_highlight_pane_cp2_ParamLimits

0x5dc5,	// (0x000377c6) set_content_pane_g1_ParamLimits

0xbd35,	// (0x0003d736) list_single_image_pane_ParamLimits

0xbd35,	// (0x0003d736) list_single_image_pane

0xdc6d,	// (0x0003f66e) aid_size_cell_image_ParamLimits

0xdc6d,	// (0x0003f66e) aid_size_cell_image

0xdc7a,	// (0x0003f67b) grid_single_image_pane_ParamLimits

0xdc7a,	// (0x0003f67b) grid_single_image_pane

0x2ade,	// (0x000344df) list_single_image_pane_g1_ParamLimits

0x2ade,	// (0x000344df) list_single_image_pane_g1

0x2aea,	// (0x000344eb) list_single_image_pane_g2_ParamLimits

0x2aea,	// (0x000344eb) list_single_image_pane_g2

0x0001,

0xfc47,	// (0x00041648) list_single_image_pane_g_ParamLimits

0xfc47,	// (0x00041648) list_single_image_pane_g

0x7a72,	// (0x00039473) list_single_image_pane_t1_ParamLimits

0x7a72,	// (0x00039473) list_single_image_pane_t1

0xdc88,	// (0x0003f689) cell_image_list_pane_ParamLimits

0xdc88,	// (0x0003f689) cell_image_list_pane

0xdca2,	// (0x0003f6a3) cell_image_list_pane_g1

0xdcab,	// (0x0003f6ac) cell_image_list_pane_g2

0x0001,

0xfc4c,	// (0x0004164d) cell_image_list_pane_g

0x7ab0,	// (0x000394b1) aid_size_cell_tb_trans_pane

0x2ac4,	// (0x000344c5) bg_tb_trans_pane

0x7ac2,	// (0x000394c3) grid_tb_trans_pane

0x4842,	// (0x00036243) bg_tb_trans_pane_g1

0x4852,	// (0x00036253) bg_tb_trans_pane_g2

0x484a,	// (0x0003624b) bg_tb_trans_pane_g3

0x4862,	// (0x00036263) bg_tb_trans_pane_g4

0x485a,	// (0x0003625b) bg_tb_trans_pane_g5

0x4882,	// (0x00036283) bg_tb_trans_pane_g6

0x487a,	// (0x0003627b) bg_tb_trans_pane_g7

0x486a,	// (0x0003626b) bg_tb_trans_pane_g8

0x4872,	// (0x00036273) bg_tb_trans_pane_g9

0x0008,

0xfc51,	// (0x00041652) bg_tb_trans_pane_g

0x7ad6,	// (0x000394d7) cell_toolbar_trans_pane_ParamLimits

0x7ad6,	// (0x000394d7) cell_toolbar_trans_pane

0x6ee8,	// (0x000388e9) cell_toolbar_trans_pane_g1

0xd8d9,	// (0x0003f2da) list_form2_midp_pane_t1

0xd8e7,	// (0x0003f2e8) list_form2_midp_pane_t2

0x0001,

0xfaee,	// (0x000414ef) list_form2_midp_pane_t

0x6b25,	// (0x00038526) scroll_pane_cp51_ParamLimits

0x6cec,	// (0x000386ed) form2_midp_wait_pane_g1

0x6cf5,	// (0x000386f6) form2_midp_wait_pane_g2

0x6cfe,	// (0x000386ff) form2_midp_wait_pane_g3

0x0002,

0xfb03,	// (0x00041504) form2_midp_wait_pane_g

0x223d,	// (0x00033c3e) list_highlight_pane_cp21_ParamLimits

0x6d42,	// (0x00038743) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6d51,	// (0x00038752) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x0f6a,	// (0x0003296b) list_single_2graphic_im_pane_ParamLimits

0x0f6a,	// (0x0003296b) list_single_2graphic_im_pane

0xdcb4,	// (0x0003f6b5) list_single_2graphic_im_pane_g1_ParamLimits

0xdcb4,	// (0x0003f6b5) list_single_2graphic_im_pane_g1

0xdcc5,	// (0x0003f6c6) list_single_2graphic_im_pane_g2_ParamLimits

0xdcc5,	// (0x0003f6c6) list_single_2graphic_im_pane_g2

0xdcd1,	// (0x0003f6d2) list_single_2graphic_im_pane_g3_ParamLimits

0xdcd1,	// (0x0003f6d2) list_single_2graphic_im_pane_g3

0x0003,

0xfc64,	// (0x00041665) list_single_2graphic_im_pane_g_ParamLimits

0xfc64,	// (0x00041665) list_single_2graphic_im_pane_g

0xdce5,	// (0x0003f6e6) list_single_2graphic_im_pane_t1_ParamLimits

0xdce5,	// (0x0003f6e6) list_single_2graphic_im_pane_t1

0x7565,	// (0x00038f66) list_single_graphic_2heading_pane_fp_ParamLimits

0x7565,	// (0x00038f66) list_single_graphic_2heading_pane_fp

0x164e,	// (0x0003304f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x164e,	// (0x0003304f) list_single_graphic_2heading_pane_fp_g1

0x757e,	// (0x00038f7f) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x757e,	// (0x00038f7f) list_single_graphic_2heading_pane_fp_g2

0x1617,	// (0x00033018) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x1617,	// (0x00033018) list_single_graphic_2heading_pane_fp_g3

0x1623,	// (0x00033024) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x1623,	// (0x00033024) list_single_graphic_2heading_pane_fp_g4

0x758a,	// (0x00038f8b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x758a,	// (0x00038f8b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x0004158c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x0004158c) list_single_graphic_2heading_pane_fp_g

0x2e4f,	// (0x00034850) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x2e4f,	// (0x00034850) list_single_graphic_2heading_pane_fp_t1

0x1686,	// (0x00033087) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x1686,	// (0x00033087) list_single_graphic_2heading_pane_fp_t2

0x2e65,	// (0x00034866) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x2e65,	// (0x00034866) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6d,	// (0x0004166e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6d,	// (0x0004166e) list_single_graphic_2heading_pane_fp_t

0x6f88,	// (0x00038989) fep_hwr_write_pane_g5_ParamLimits

0x6f88,	// (0x00038989) fep_hwr_write_pane_g5

0x6f94,	// (0x00038995) fep_hwr_write_pane_g6_ParamLimits

0x6f94,	// (0x00038995) fep_hwr_write_pane_g6

0x783a,	// (0x0003923b) eswt_shell_pane_ParamLimits

0x4934,	// (0x00036335) bg_popup_window_pane_cp18_ParamLimits

0x5bc1,	// (0x000375c2) heading_pane_cp70

0x7964,	// (0x00039365) popup_eswt_tasktip_window_t1_ParamLimits

0xce74,	// (0x0003e875) aid_touch_tab_arrow_left

0xce8a,	// (0x0003e88b) aid_touch_tab_arrow_right

0xaf91,	// (0x0003c992) title_pane_g3_ParamLimits

0xaf91,	// (0x0003c992) title_pane_g3

0x2a83,	// (0x00034484) set_value_pane_g1

0xcdb1,	// (0x0003e7b2) popup_toolbar_trans_pane_ParamLimits

0x7ab0,	// (0x000394b1) aid_size_cell_tb_trans_pane_ParamLimits

0x2ac4,	// (0x000344c5) bg_tb_trans_pane_ParamLimits

0x7ac2,	// (0x000394c3) grid_tb_trans_pane_ParamLimits

0x24c7,	// (0x00033ec8) cont_note_pane_ParamLimits

0x24c7,	// (0x00033ec8) cont_note_pane

0x2835,	// (0x00034236) cont_snote2_single_text_pane_ParamLimits

0x2835,	// (0x00034236) cont_snote2_single_text_pane

0x2835,	// (0x00034236) cont_snote2_single_graphic_pane_ParamLimits

0x2835,	// (0x00034236) cont_snote2_single_graphic_pane

0x4ee8,	// (0x000368e9) cont_note_wait_pane_ParamLimits

0x4ee8,	// (0x000368e9) cont_note_wait_pane

0x4ee8,	// (0x000368e9) cont_note_image_pane_ParamLimits

0x4ee8,	// (0x000368e9) cont_note_image_pane

0x7b6a,	// (0x0003956b) popup_note2_window_g1_ParamLimits

0x7b6a,	// (0x0003956b) popup_note2_window_g1

0x7b9b,	// (0x0003959c) popup_note2_window_t1_ParamLimits

0x7b9b,	// (0x0003959c) popup_note2_window_t1

0x7be0,	// (0x000395e1) popup_note2_window_t2_ParamLimits

0x7be0,	// (0x000395e1) popup_note2_window_t2

0x7c25,	// (0x00039626) popup_note2_window_t3_ParamLimits

0x7c25,	// (0x00039626) popup_note2_window_t3

0x7c6a,	// (0x0003966b) popup_note2_window_t4_ParamLimits

0x7c6a,	// (0x0003966b) popup_note2_window_t4

0x254b,	// (0x00033f4c) popup_note2_window_t5_ParamLimits

0x254b,	// (0x00033f4c) popup_note2_window_t5

0x0004,

0xfc79,	// (0x0004167a) popup_note2_window_t_ParamLimits

0xfc79,	// (0x0004167a) popup_note2_window_t

0x7c99,	// (0x0003969a) popup_note2_image_window_g1_ParamLimits

0x7c99,	// (0x0003969a) popup_note2_image_window_g1

0x7ca5,	// (0x000396a6) popup_note2_image_window_g2_ParamLimits

0x7ca5,	// (0x000396a6) popup_note2_image_window_g2

0x0001,

0xfc84,	// (0x00041685) popup_note2_image_window_g_ParamLimits

0xfc84,	// (0x00041685) popup_note2_image_window_g

0x7cb7,	// (0x000396b8) popup_note2_image_window_t1_ParamLimits

0x7cb7,	// (0x000396b8) popup_note2_image_window_t1

0x7ccf,	// (0x000396d0) popup_note2_image_window_t2_ParamLimits

0x7ccf,	// (0x000396d0) popup_note2_image_window_t2

0x7ce7,	// (0x000396e8) popup_note2_image_window_t3_ParamLimits

0x7ce7,	// (0x000396e8) popup_note2_image_window_t3

0x0002,

0xfc89,	// (0x0004168a) popup_note2_image_window_t_ParamLimits

0xfc89,	// (0x0004168a) popup_note2_image_window_t

0x4ef6,	// (0x000368f7) popup_note2_wait_window_g1_ParamLimits

0x4ef6,	// (0x000368f7) popup_note2_wait_window_g1

0x7d03,	// (0x00039704) popup_note2_wait_window_g2_ParamLimits

0x7d03,	// (0x00039704) popup_note2_wait_window_g2

0x4f0e,	// (0x0003690f) popup_note2_wait_window_g3_ParamLimits

0x4f0e,	// (0x0003690f) popup_note2_wait_window_g3

0x0002,

0xfc90,	// (0x00041691) popup_note2_wait_window_g_ParamLimits

0xfc90,	// (0x00041691) popup_note2_wait_window_g

0x7d0f,	// (0x00039710) popup_note2_wait_window_t1_ParamLimits

0x7d0f,	// (0x00039710) popup_note2_wait_window_t1

0x7d2d,	// (0x0003972e) popup_note2_wait_window_t2_ParamLimits

0x7d2d,	// (0x0003972e) popup_note2_wait_window_t2

0x7d4b,	// (0x0003974c) popup_note2_wait_window_t3_ParamLimits

0x7d4b,	// (0x0003974c) popup_note2_wait_window_t3

0x7d5d,	// (0x0003975e) popup_note2_wait_window_t4_ParamLimits

0x7d5d,	// (0x0003975e) popup_note2_wait_window_t4

0x0003,

0xfc97,	// (0x00041698) popup_note2_wait_window_t_ParamLimits

0xfc97,	// (0x00041698) popup_note2_wait_window_t

0x7d6f,	// (0x00039770) wait_bar2_pane_ParamLimits

0x7d6f,	// (0x00039770) wait_bar2_pane

0x7d87,	// (0x00039788) popup_snote2_single_text_window_g1_ParamLimits

0x7d87,	// (0x00039788) popup_snote2_single_text_window_g1

0x7daf,	// (0x000397b0) popup_snote2_single_text_window_t1_ParamLimits

0x7daf,	// (0x000397b0) popup_snote2_single_text_window_t1

0x7dfb,	// (0x000397fc) popup_snote2_single_text_window_t2_ParamLimits

0x7dfb,	// (0x000397fc) popup_snote2_single_text_window_t2

0x7e47,	// (0x00039848) popup_snote2_single_text_window_t3_ParamLimits

0x7e47,	// (0x00039848) popup_snote2_single_text_window_t3

0x7e88,	// (0x00039889) popup_snote2_single_text_window_t4_ParamLimits

0x7e88,	// (0x00039889) popup_snote2_single_text_window_t4

0x7ebe,	// (0x000398bf) popup_snote2_single_text_window_t5_ParamLimits

0x7ebe,	// (0x000398bf) popup_snote2_single_text_window_t5

0x0004,

0xfca0,	// (0x000416a1) popup_snote2_single_text_window_t_ParamLimits

0xfca0,	// (0x000416a1) popup_snote2_single_text_window_t

0x7ee9,	// (0x000398ea) popup_snote2_single_graphic_window_g1_ParamLimits

0x7ee9,	// (0x000398ea) popup_snote2_single_graphic_window_g1

0x7f11,	// (0x00039912) popup_snote2_single_graphic_window_g2_ParamLimits

0x7f11,	// (0x00039912) popup_snote2_single_graphic_window_g2

0x0001,

0xfcab,	// (0x000416ac) popup_snote2_single_graphic_window_g_ParamLimits

0xfcab,	// (0x000416ac) popup_snote2_single_graphic_window_g

0x7f39,	// (0x0003993a) popup_snote2_single_graphic_window_t1_ParamLimits

0x7f39,	// (0x0003993a) popup_snote2_single_graphic_window_t1

0x7f85,	// (0x00039986) popup_snote2_single_graphic_window_t2_ParamLimits

0x7f85,	// (0x00039986) popup_snote2_single_graphic_window_t2

0x7e47,	// (0x00039848) popup_snote2_single_graphic_window_t3_ParamLimits

0x7e47,	// (0x00039848) popup_snote2_single_graphic_window_t3

0x7e88,	// (0x00039889) popup_snote2_single_graphic_window_t4_ParamLimits

0x7e88,	// (0x00039889) popup_snote2_single_graphic_window_t4

0x7ebe,	// (0x000398bf) popup_snote2_single_graphic_window_t5_ParamLimits

0x7ebe,	// (0x000398bf) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb0,	// (0x000416b1) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb0,	// (0x000416b1) popup_snote2_single_graphic_window_t

0x69cf,	// (0x000383d0) clock_nsta_pane_cp2_t1

0x69cf,	// (0x000383d0) clock_nsta_pane_cp2_t2

0x0001,

0xfac4,	// (0x000414c5) clock_nsta_pane_cp2_t

0x02ac,	// (0x00031cad) form_field_data_wide_pane_g1_ParamLimits

0x2ade,	// (0x000344df) form_field_data_wide_pane_g2_ParamLimits

0x2ade,	// (0x000344df) form_field_data_wide_pane_g2

0x2aea,	// (0x000344eb) form_field_data_wide_pane_g3_ParamLimits

0x2aea,	// (0x000344eb) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x00041093) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x00041093) form_field_data_wide_pane_g

0xd7e1,	// (0x0003f1e2) grid_touch_3_pane_ParamLimits

0xd7e1,	// (0x0003f1e2) grid_touch_3_pane

0xdd16,	// (0x0003f717) cell_touch_3_pane_ParamLimits

0xdd16,	// (0x0003f717) cell_touch_3_pane

0x6ee8,	// (0x000388e9) cell_touch_3_pane_g1

0x6ee8,	// (0x000388e9) cell_touch_3_pane_g2

0x0001,

0xfb49,	// (0x0004154a) cell_touch_3_pane_g

0x257d,	// (0x00033f7e) cont_query_data_pane

0x2585,	// (0x00033f86) cont_query_data_pane_cp1

0x8004,	// (0x00039a05) button_value_adjust_pane_cp7

0x800c,	// (0x00039a0d) query_popup_pane_cp3

0x345c,	// (0x00034e5d) bg_popup_sub_pane_cp22_ParamLimits

0x066c,	// (0x0003206d) navi_navi_volume_pane_cp2

0x0687,	// (0x00032088) popup_side_volume_key_window_g2

0x0696,	// (0x00032097) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x00041125) popup_side_volume_key_window_g

0x06b3,	// (0x000320b4) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0004112c) popup_side_volume_key_window_t

0x3717,	// (0x00035118) popup_side_volume_key_window_ParamLimits

0xb473,	// (0x0003ce74) list_double_graphic_pane_g4_ParamLimits

0xb473,	// (0x0003ce74) list_double_graphic_pane_g4

0xbd1f,	// (0x0003d720) list_single_2heading_msg_pane_ParamLimits

0xbd1f,	// (0x0003d720) list_single_2heading_msg_pane

0xbdcc,	// (0x0003d7cd) list_single_2heading_msg_pane_g1_ParamLimits

0xbdcc,	// (0x0003d7cd) list_single_2heading_msg_pane_g1

0xbdd8,	// (0x0003d7d9) list_single_2heading_msg_pane_g2_ParamLimits

0xbdd8,	// (0x0003d7d9) list_single_2heading_msg_pane_g2

0xbdeb,	// (0x0003d7ec) list_single_2heading_msg_pane_g3_ParamLimits

0xbdeb,	// (0x0003d7ec) list_single_2heading_msg_pane_g3

0xbdf7,	// (0x0003d7f8) list_single_2heading_msg_pane_g4_ParamLimits

0xbdf7,	// (0x0003d7f8) list_single_2heading_msg_pane_g4

0x0003,

0xfcbb,	// (0x000416bc) list_single_2heading_msg_pane_g_ParamLimits

0xfcbb,	// (0x000416bc) list_single_2heading_msg_pane_g

0xbe0f,	// (0x0003d810) list_single_2heading_msg_pane_t1_ParamLimits

0xbe0f,	// (0x0003d810) list_single_2heading_msg_pane_t1

0xbe37,	// (0x0003d838) list_single_2heading_msg_pane_t2_ParamLimits

0xbe37,	// (0x0003d838) list_single_2heading_msg_pane_t2

0xbea2,	// (0x0003d8a3) list_single_2heading_msg_pane_t3_ParamLimits

0xbea2,	// (0x0003d8a3) list_single_2heading_msg_pane_t3

0x2f4a,	// (0x0003494b) list_single_2heading_msg_pane_t4_ParamLimits

0x2f4a,	// (0x0003494b) list_single_2heading_msg_pane_t4

0x0003,

0xfcc4,	// (0x000416c5) list_single_2heading_msg_pane_t_ParamLimits

0xfcc4,	// (0x000416c5) list_single_2heading_msg_pane_t

0xe098,	// (0x0003fa99) title_pane_g4_ParamLimits

0xe098,	// (0x0003fa99) title_pane_g4

0x0478,	// (0x00031e79) title_pane_stacon_g3_ParamLimits

0x0478,	// (0x00031e79) title_pane_stacon_g3

0x7b2d,	// (0x0003952e) list_single_2graphic_im_pane_g4_ParamLimits

0x7b2d,	// (0x0003952e) list_single_2graphic_im_pane_g4

0x595e,	// (0x0003735f) popup_side_volume_key_window_cp

0x61d4,	// (0x00037bd5) main_idle_act2_pane_t1

0x0b14,	// (0x00032515) toolbar_button_pane_g10

0xb31e,	// (0x0003cd1f) popup_toolbar_window_cp1

0x69c0,	// (0x000383c1) clock_nsta_pane_cp_t1

0x69c0,	// (0x000383c1) clock_nsta_pane_cp_t2

0x0001,

0xfabf,	// (0x000414c0) clock_nsta_pane_cp_t

0x066c,	// (0x0003206d) navi_navi_volume_pane_cp2_ParamLimits

0x067b,	// (0x0003207c) popup_side_volume_key_window_g1_ParamLimits

0x0687,	// (0x00032088) popup_side_volume_key_window_g2_ParamLimits

0x0696,	// (0x00032097) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x00041125) popup_side_volume_key_window_g_ParamLimits

0x135d,	// (0x00032d5e) fep_hwr_aid_pane

0x1406,	// (0x00032e07) bg_fep_hwr_top_pane_g4_ParamLimits

0x6f58,	// (0x00038959) fep_hwr_top_pane_g1_ParamLimits

0x6f6a,	// (0x0003896b) fep_hwr_top_pane_g2_ParamLimits

0x1426,	// (0x00032e27) fep_hwr_top_pane_g3_ParamLimits

0xfb14,	// (0x00041515) fep_hwr_top_pane_g_ParamLimits

0x143b,	// (0x00032e3c) fep_hwr_top_text_pane_ParamLimits

0x5713,	// (0x00037114) aid_touch_tab_arrow_arrow_2

0x571c,	// (0x0003711d) aid_touch_tab_arrow_left_2

0x1371,	// (0x00032d72) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x13a8,	// (0x00032da9) fep_hwr_prediction_pane

0x70c0,	// (0x00038ac1) fep_vkb_prediction_pane

0xdae9,	// (0x0003f4ea) fep_vkb_side_pane_g3_ParamLimits

0xdae9,	// (0x0003f4ea) fep_vkb_side_pane_g3

0x15ca,	// (0x00032fcb) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x178a,	// (0x0003318b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1797,	// (0x00033198) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc3,	// (0x000415c4) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x18c6,	// (0x000332c7) fep_hwr_prediction_pane_g1

0x18d0,	// (0x000332d1) fep_hwr_prediction_pane_g2

0x18d8,	// (0x000332d9) fep_hwr_prediction_pane_g3

0x18e0,	// (0x000332e1) fep_hwr_prediction_pane_g4

0x0003,

0xfccd,	// (0x000416ce) fep_hwr_prediction_pane_g

0x8033,	// (0x00039a34) fep_vkb_prediction_pane_g1

0x803d,	// (0x00039a3e) fep_vkb_prediction_pane_g2

0x8045,	// (0x00039a46) fep_vkb_prediction_pane_g3

0x804d,	// (0x00039a4e) fep_vkb_prediction_pane_g4

0x0003,

0xfcd6,	// (0x000416d7) fep_vkb_prediction_pane_g

0x0eb9,	// (0x000328ba) slider_set_pane_g3

0x0ecd,	// (0x000328ce) slider_set_pane_g4

0x0ee5,	// (0x000328e6) slider_set_pane_g5

0x0eb9,	// (0x000328ba) slider_set_pane_g6

0x0efb,	// (0x000328fc) slider_set_pane_g7

0x5e0c,	// (0x0003780d) slider_form_pane_g3

0x5e15,	// (0x00037816) slider_form_pane_g4

0x5e1d,	// (0x0003781e) slider_form_pane_g5

0x5e0c,	// (0x0003780d) slider_form_pane_g6

0xd663,	// (0x0003f064) slider_form_pane_g7

0x64a2,	// (0x00037ea3) slider_set_pane_vc_g3

0x64ab,	// (0x00037eac) slider_set_pane_vc_g4

0x64b4,	// (0x00037eb5) slider_set_pane_vc_g5

0x64a2,	// (0x00037ea3) slider_set_pane_vc_g6

0x64bd,	// (0x00037ebe) slider_set_pane_vc_g7

0x64a2,	// (0x00037ea3) slider_form_pane_vc_g1

0x64ab,	// (0x00037eac) slider_form_pane_vc_g2

0x64b4,	// (0x00037eb5) slider_form_pane_vc_g3

0x64a2,	// (0x00037ea3) slider_form_pane_vc_g4

0x6672,	// (0x00038073) slider_form_pane_vc_g5

0x0004,

0xfa98,	// (0x00041499) slider_form_pane_vc_g

0xe07a,	// (0x0003fa7b) main_idle_act3_pane

0x8055,	// (0x00039a56) ai3_links_pane

0xdd60,	// (0x0003f761) popup_ai3_data_window_ParamLimits

0xdd60,	// (0x0003f761) popup_ai3_data_window

0xe07a,	// (0x0003fa7b) grid_ai3_links_pane

0xdd7e,	// (0x0003f77f) cell_ai3_links_pane_ParamLimits

0xdd7e,	// (0x0003f77f) cell_ai3_links_pane

0x8096,	// (0x00039a97) bg_popup_sub_pane_cp11

0x80a3,	// (0x00039aa4) cell_ai3_links_pane_g1

0xe07a,	// (0x0003fa7b) bg_popup_sub_pane_cp12

0x80c8,	// (0x00039ac9) heading_ai3_data_pane

0x80d0,	// (0x00039ad1) list_ai3_gene_pane

0x80dc,	// (0x00039add) popup_ai3_data_window_g1

0x80e4,	// (0x00039ae5) heading_ai3_data_pane_g1

0x80ec,	// (0x00039aed) heading_ai3_data_pane_t1

0x80fa,	// (0x00039afb) list_double_ai3_gene_pane_ParamLimits

0x80fa,	// (0x00039afb) list_double_ai3_gene_pane

0x8107,	// (0x00039b08) list_single_ai3_gene_pane_ParamLimits

0x8107,	// (0x00039b08) list_single_ai3_gene_pane

0x6ead,	// (0x000388ae) list_highlight_pane_cp7_ParamLimits

0x6ead,	// (0x000388ae) list_highlight_pane_cp7

0x8114,	// (0x00039b15) list_single_a13_gene_pane_t1_ParamLimits

0x8114,	// (0x00039b15) list_single_a13_gene_pane_t1

0x812b,	// (0x00039b2c) list_single_ai3_gene_pane_g1

0x8134,	// (0x00039b35) list_single_ai3_gene_pane_g2

0x0001,

0xfcdf,	// (0x000416e0) list_single_ai3_gene_pane_g

0x813c,	// (0x00039b3d) list_double_ai3_gene_pane_g1_ParamLimits

0x813c,	// (0x00039b3d) list_double_ai3_gene_pane_g1

0x8148,	// (0x00039b49) list_double_ai3_gene_pane_t1_ParamLimits

0x8148,	// (0x00039b49) list_double_ai3_gene_pane_t1

0x8164,	// (0x00039b65) list_double_ai3_gene_pane_t2_ParamLimits

0x8164,	// (0x00039b65) list_double_ai3_gene_pane_t2

0x8179,	// (0x00039b7a) list_double_ai3_gene_pane_t3_ParamLimits

0x8179,	// (0x00039b7a) list_double_ai3_gene_pane_t3

0x0002,

0xfce4,	// (0x000416e5) list_double_ai3_gene_pane_t_ParamLimits

0xfce4,	// (0x000416e5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x2e7b,	// (0x0003487c) aid_size_min_col_2

0xdd4a,	// (0x0003f74b) aid_size_min_msg_ParamLimits

0xdd4a,	// (0x0003f74b) aid_size_min_msg

0xdafd,	// (0x0003f4fe) fep_vkb_top_text_pane_g2_ParamLimits

0xdafd,	// (0x0003f4fe) fep_vkb_top_text_pane_g2

0x0001,

0xfb44,	// (0x00041545) fep_vkb_top_text_pane_g_ParamLimits

0xfb44,	// (0x00041545) fep_vkb_top_text_pane_g

0xe07a,	// (0x0003fa7b) main_hc_apps_shell_pane

0x8196,	// (0x00039b97) grid_hc_apps_pane_ParamLimits

0x8196,	// (0x00039b97) grid_hc_apps_pane

0x81a5,	// (0x00039ba6) list_hc_apps_pane

0x81ad,	// (0x00039bae) scroll_pane_cp37_ParamLimits

0x81ad,	// (0x00039bae) scroll_pane_cp37

0xdd98,	// (0x0003f799) cell_hc_apps_pane_ParamLimits

0xdd98,	// (0x0003f799) cell_hc_apps_pane

0xde62,	// (0x0003f863) cell_hc_apps_pane_g1_ParamLimits

0xde62,	// (0x0003f863) cell_hc_apps_pane_g1

0x82a2,	// (0x00039ca3) cell_hc_apps_pane_g2_ParamLimits

0x82a2,	// (0x00039ca3) cell_hc_apps_pane_g2

0x82be,	// (0x00039cbf) cell_hc_apps_pane_g3_ParamLimits

0x82be,	// (0x00039cbf) cell_hc_apps_pane_g3

0x0002,

0xfceb,	// (0x000416ec) cell_hc_apps_pane_g_ParamLimits

0xfceb,	// (0x000416ec) cell_hc_apps_pane_g

0xde8f,	// (0x0003f890) cell_hc_apps_pane_t1_ParamLimits

0xde8f,	// (0x0003f890) cell_hc_apps_pane_t1

0x24c7,	// (0x00033ec8) grid_highlight_pane_cp10_ParamLimits

0x24c7,	// (0x00033ec8) grid_highlight_pane_cp10

0xdecf,	// (0x0003f8d0) list_single_hc_apps_pane_ParamLimits

0xdecf,	// (0x0003f8d0) list_single_hc_apps_pane

0xdf09,	// (0x0003f90a) list_single_hc_apps_pane_g1

0xbf10,	// (0x0003d911) list_single_hc_apps_pane_g2

0x0001,

0xfcf2,	// (0x000416f3) list_single_hc_apps_pane_g

0xbf29,	// (0x0003d92a) list_single_hc_apps_pane_g2_copy1

0xbf45,	// (0x0003d946) list_single_hc_apps_pane_t1

0x223d,	// (0x00033c3e) bg_set_opt_pane_cp_ParamLimits

0xf4e4,	// (0x00040ee5) setting_slider_pane_t1_ParamLimits

0xf4fa,	// (0x00040efb) setting_slider_pane_t2_ParamLimits

0xf514,	// (0x00040f15) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x00040f7b) setting_slider_pane_t_ParamLimits

0xf52c,	// (0x00040f2d) slider_set_pane_ParamLimits

0x09a6,	// (0x000323a7) control_pane_g5_ParamLimits

0x09a6,	// (0x000323a7) control_pane_g5

0x5c2d,	// (0x0003762e) slider_set_pane_g1_ParamLimits

0x0ead,	// (0x000328ae) slider_set_pane_g2_ParamLimits

0x0eb9,	// (0x000328ba) slider_set_pane_g3_ParamLimits

0x0ecd,	// (0x000328ce) slider_set_pane_g4_ParamLimits

0x0ee5,	// (0x000328e6) slider_set_pane_g5_ParamLimits

0x0eb9,	// (0x000328ba) slider_set_pane_g6_ParamLimits

0x0efb,	// (0x000328fc) slider_set_pane_g7_ParamLimits

0xf96b,	// (0x0004136c) slider_set_pane_g_ParamLimits

0x37fc,	// (0x000351fd) navi_icon_text_pane_ParamLimits

0xce3e,	// (0x0003e83f) aid_fill_nsta_2_ParamLimits

0xce74,	// (0x0003e875) aid_touch_tab_arrow_left_ParamLimits

0xce8a,	// (0x0003e88b) aid_touch_tab_arrow_right_ParamLimits

0xcf25,	// (0x0003e926) clock_nsta_pane_ParamLimits

0xd3b2,	// (0x0003edb3) navi_icon_pane_g1_ParamLimits

0xd3be,	// (0x0003edbf) navi_text_pane_t1_ParamLimits

0xd8bb,	// (0x0003f2bc) navi_icon_text_pane_g1_ParamLimits

0xd8c7,	// (0x0003f2c8) navi_icon_text_pane_t1_ParamLimits

0xdf09,	// (0x0003f90a) list_single_hc_apps_pane_g1_ParamLimits

0xbf10,	// (0x0003d911) list_single_hc_apps_pane_g2_ParamLimits

0xfcf2,	// (0x000416f3) list_single_hc_apps_pane_g_ParamLimits

0xbf29,	// (0x0003d92a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbf45,	// (0x0003d946) list_single_hc_apps_pane_t1_ParamLimits

0xaefd,	// (0x0003c8fe) popup_toolbar2_fixed_window_ParamLimits

0xaefd,	// (0x0003c8fe) popup_toolbar2_fixed_window

0xcda7,	// (0x0003e7a8) popup_toolbar2_float_window

0xe07a,	// (0x0003fa7b) bg_popup_sub_pane_cp27

0x8378,	// (0x00039d79) grid_toolbar2_float_pane

0xe07a,	// (0x0003fa7b) bg_popup_sub_pane_cp26

0x8378,	// (0x00039d79) grid_toolbar2_fixed_pane

0xdf22,	// (0x0003f923) cell_toolbar2_fixed_pane_ParamLimits

0xdf22,	// (0x0003f923) cell_toolbar2_fixed_pane

0xdf3f,	// (0x0003f940) cell_toolbar2_fixed_pane_g1

0x8399,	// (0x00039d9a) toolbar2_fixed_button_pane

0x4842,	// (0x00036243) toolbar2_fixed_button_pane_g1

0x4852,	// (0x00036253) toolbar2_fixed_button_pane_g2

0x484a,	// (0x0003624b) toolbar2_fixed_button_pane_g3

0x4862,	// (0x00036263) toolbar2_fixed_button_pane_g4

0x485a,	// (0x0003625b) toolbar2_fixed_button_pane_g5

0x486a,	// (0x0003626b) toolbar2_fixed_button_pane_g6

0x4872,	// (0x00036273) toolbar2_fixed_button_pane_g7

0x4882,	// (0x00036283) toolbar2_fixed_button_pane_g8

0x487a,	// (0x0003627b) toolbar2_fixed_button_pane_g9

0x0008,

0xf86d,	// (0x0004126e) toolbar2_fixed_button_pane_g

0x83a1,	// (0x00039da2) cell_toolbar2_float_pane_ParamLimits

0x83a1,	// (0x00039da2) cell_toolbar2_float_pane

0x83b2,	// (0x00039db3) cell_toolbar2_float_pane_g1

0x8399,	// (0x00039d9a) toolbar2_fixed_button_pane_cp

0xd9e5,	// (0x0003f3e6) fep_vkb_accented_list_pane_ParamLimits

0xd9e5,	// (0x0003f3e6) fep_vkb_accented_list_pane

0x15aa,	// (0x00032fab) bg_popup_fep_shadow_pane_g9

0x3980,	// (0x00035381) bg_popup_fep_shadow_pane_cp3

0x2c2d,	// (0x0003462e) list_accented_list_pane

0x83bb,	// (0x00039dbc) list_single_accented_list_pane_ParamLimits

0x83bb,	// (0x00039dbc) list_single_accented_list_pane

0x3980,	// (0x00035381) list_highlight_pane_cp10

0x83cc,	// (0x00039dcd) list_single_accented_list_pane_t1

0xccc3,	// (0x0003e6c4) popup_slider_window_ParamLimits

0xccc3,	// (0x0003e6c4) popup_slider_window

0x8014,	// (0x00039a15) aid_indentation_list_msg

0xe0b1,	// (0x0003fab2) bg_popup_window_pane_cp19

0x8506,	// (0x00039f07) popup_slider_window_g1

0x8522,	// (0x00039f23) popup_slider_window_g2

0x853e,	// (0x00039f3f) popup_slider_window_g3

0x0005,

0xfcf7,	// (0x000416f8) popup_slider_window_g

0x859a,	// (0x00039f9b) popup_slider_window_t1

0x860e,	// (0x0003a00f) small_volume_slider_vertical_pane

0x6ee8,	// (0x000388e9) small_volume_slider_vertical_pane_g1

0x6ee8,	// (0x000388e9) small_volume_slider_vertical_pane_g2

0x864b,	// (0x0003a04c) small_volume_slider_vertical_pane_g3

0x0002,

0xfd09,	// (0x0004170a) small_volume_slider_vertical_pane_g

0xae67,	// (0x0003c868) area_side_right_pane_ParamLimits

0xae67,	// (0x0003c868) area_side_right_pane

0xbf73,	// (0x0003d974) aid_size_side_button_ParamLimits

0xbf73,	// (0x0003d974) aid_size_side_button

0xbf8c,	// (0x0003d98d) grid_sctrl_middle_pane_ParamLimits

0xbf8c,	// (0x0003d98d) grid_sctrl_middle_pane

0x191c,	// (0x0003331d) sctrl_sk_bottom_pane

0x192d,	// (0x0003332e) sctrl_sk_top_pane

0x193f,	// (0x00033340) aid_touch_sctrl_top

0x194c,	// (0x0003334d) bg_sctrl_sk_pane_ParamLimits

0x194c,	// (0x0003334d) bg_sctrl_sk_pane

0x195a,	// (0x0003335b) sctrl_sk_top_pane_g1

0x1967,	// (0x00033368) sctrl_sk_top_pane_t1

0x193f,	// (0x00033340) aid_touch_sctrl_bottom

0x194c,	// (0x0003334d) bg_sctrl_sk_pane_cp_ParamLimits

0x194c,	// (0x0003334d) bg_sctrl_sk_pane_cp

0x1982,	// (0x00033383) sctrl_sk_bottom_pane_g1

0x1967,	// (0x00033368) sctrl_sk_bottom_pane_t1

0xbfa6,	// (0x0003d9a7) cell_sctrl_middle_pane_ParamLimits

0xbfa6,	// (0x0003d9a7) cell_sctrl_middle_pane

0xbfb9,	// (0x0003d9ba) aid_touch_sctrl_middle_ParamLimits

0xbfb9,	// (0x0003d9ba) aid_touch_sctrl_middle

0xbfc6,	// (0x0003d9c7) bg_sctrl_middle_pane_ParamLimits

0xbfc6,	// (0x0003d9c7) bg_sctrl_middle_pane

0x1ffc,	// (0x000339fd) cell_sctrl_middle_pane_g1_ParamLimits

0x1ffc,	// (0x000339fd) cell_sctrl_middle_pane_g1

0xbfd4,	// (0x0003d9d5) cell_sctrl_middle_pane_g2_ParamLimits

0xbfd4,	// (0x0003d9d5) cell_sctrl_middle_pane_g2

0x0001,

0xfd15,	// (0x00041716) cell_sctrl_middle_pane_g_ParamLimits

0xfd15,	// (0x00041716) cell_sctrl_middle_pane_g

0x4842,	// (0x00036243) bg_sctrl_middle_pane_g1

0x484a,	// (0x0003624b) bg_sctrl_middle_pane_g2

0x4852,	// (0x00036253) bg_sctrl_middle_pane_g3

0x485a,	// (0x0003625b) bg_sctrl_middle_pane_g4

0x4862,	// (0x00036263) bg_sctrl_middle_pane_g5

0x486a,	// (0x0003626b) bg_sctrl_middle_pane_g6

0x4872,	// (0x00036273) bg_sctrl_middle_pane_g7

0x487a,	// (0x0003627b) bg_sctrl_middle_pane_g8

0x0007,

0xfd1a,	// (0x0004171b) bg_sctrl_middle_pane_g

0x4882,	// (0x00036283) bg_sctrl_middle_pane_g8_copy1

0x4842,	// (0x00036243) bg_sctrl_sk_pane_g1

0x4852,	// (0x00036253) bg_sctrl_sk_pane_g2

0x484a,	// (0x0003624b) bg_sctrl_sk_pane_g3

0x0008,

0xf86d,	// (0x0004126e) bg_sctrl_sk_pane_g

0x29f3,	// (0x000343f4) aid_size_touch_scroll_bar

0x4862,	// (0x00036263) bg_sctrl_sk_pane_g4

0x485a,	// (0x0003625b) bg_sctrl_sk_pane_g5

0x486a,	// (0x0003626b) bg_sctrl_sk_pane_g6

0x4872,	// (0x00036273) bg_sctrl_sk_pane_g7

0x4882,	// (0x00036283) bg_sctrl_sk_pane_g8

0x487a,	// (0x0003627b) bg_sctrl_sk_pane_g9

0x3db0,	// (0x000357b1) popup_fep_china_hwr2_fs_candidate_window

0xc77f,	// (0x0003e180) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc77f,	// (0x0003e180) popup_fep_china_hwr2_fs_control_window

0x15ca,	// (0x00032fcb) sctrl_sk_top_pane_g2

0x0001,

0xfd10,	// (0x00041711) sctrl_sk_top_pane_g

0xe169,	// (0x0003fb6a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe169,	// (0x0003fb6a) aid_fep_china_hwr2_fs_cell

0xe17f,	// (0x0003fb80) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe17f,	// (0x0003fb80) bg_popup_fep_shadow_pane_cp4

0xe196,	// (0x0003fb97) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe196,	// (0x0003fb97) bg_popup_fep_shadow_pane_cp5

0xe1a8,	// (0x0003fba9) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe1a8,	// (0x0003fba9) popup_fep_china_hwr2_fs_control_bar_grid

0xe1bc,	// (0x0003fbbd) popup_fep_china_hwr2_fs_control_funtion_grid

0x86aa,	// (0x0003a0ab) aid_fep_china_hwr2_fs_candi_cell

0xe07a,	// (0x0003fa7b) bg_popup_fep_shadow_pane_cp6

0x86b4,	// (0x0003a0b5) popup_fep_china_hwr2_fs_candidate_grid

0xe1c4,	// (0x0003fbc5) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe1c4,	// (0x0003fbc5) cell_fep_china_hwr2_fs_funtion_grid

0x6ee8,	// (0x000388e9) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x86d6,	// (0x0003a0d7) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x86d6,	// (0x0003a0d7) cell_fep_china_hwr2_fs_funtion_grid_g1

0x86e4,	// (0x0003a0e5) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x86e4,	// (0x0003a0e5) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2b,	// (0x0004172c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2b,	// (0x0004172c) cell_fep_china_hwr2_fs_funtion_grid_g

0xe1dc,	// (0x0003fbdd) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe1dc,	// (0x0003fbdd) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe1f1,	// (0x0003fbf2) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe1f1,	// (0x0003fbf2) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd30,	// (0x00041731) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd30,	// (0x00041731) cell_fep_china_hwr2_fs_funtion_grid_t

0x872b,	// (0x0003a12c) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8733,	// (0x0003a134) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x873b,	// (0x0003a13c) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd35,	// (0x00041736) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8743,	// (0x0003a144) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8743,	// (0x0003a144) cell_fep_china_hwr2_fs_candidate_grid

0x8762,	// (0x0003a163) popup_fep_china_hwr2_fs_candidate_grid_g20

0x876a,	// (0x0003a16b) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6ee8,	// (0x000388e9) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6ee8,	// (0x000388e9) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb49,	// (0x0004154a) cell_fep_china_hwr2_fs_candidate_grid_g

0x8772,	// (0x0003a173) cell_fep_china_hwr2_fs_candidate_grid_t1

0x441f,	// (0x00035e20) clock_nsta_pane_cp_24_ParamLimits

0x441f,	// (0x00035e20) clock_nsta_pane_cp_24

0x449f,	// (0x00035ea0) indicator_nsta_pane_cp_24_ParamLimits

0x449f,	// (0x00035ea0) indicator_nsta_pane_cp_24

0x556b,	// (0x00036f6c) heading_pane_g1

0x0001,

0xf8d2,	// (0x000412d3) heading_pane_g

0x601b,	// (0x00037a1c) grid_sct_catagory_button_pane

0x604d,	// (0x00037a4e) scroll_pane_cp5_ParamLimits

0x6b31,	// (0x00038532) button_value_adjust_pane_cp5_ParamLimits

0x6b31,	// (0x00038532) button_value_adjust_pane_cp5

0x6c16,	// (0x00038617) form2_midp_time_pane_ParamLimits

0x8780,	// (0x0003a181) cell_sct_catagory_button_pane_ParamLimits

0x8780,	// (0x0003a181) cell_sct_catagory_button_pane

0x6ead,	// (0x000388ae) bg_button_pane_cp01_ParamLimits

0x6ead,	// (0x000388ae) bg_button_pane_cp01

0x6ee8,	// (0x000388e9) cell_sct_catagory_button_pane_g1

0xcd44,	// (0x0003e745) popup_tb_extension_window

0xe20d,	// (0x0003fc0e) aid_size_cell_ext_ParamLimits

0xe20d,	// (0x0003fc0e) aid_size_cell_ext

0x2835,	// (0x00034236) bg_tb_trans_pane_cp1_ParamLimits

0x2835,	// (0x00034236) bg_tb_trans_pane_cp1

0xe233,	// (0x0003fc34) grid_tb_ext_pane_ParamLimits

0xe233,	// (0x0003fc34) grid_tb_ext_pane

0xe273,	// (0x0003fc74) cell_tb_ext_pane_ParamLimits

0xe273,	// (0x0003fc74) cell_tb_ext_pane

0xe29d,	// (0x0003fc9e) cell_tb_ext_pane_g1_ParamLimits

0xe29d,	// (0x0003fc9e) cell_tb_ext_pane_g1

0x8816,	// (0x0003a217) cell_tb_ext_pane_t1

0x24c7,	// (0x00033ec8) list_highlight_pane_cp11_ParamLimits

0x24c7,	// (0x00033ec8) list_highlight_pane_cp11

0xf46d,	// (0x00040e6e) popup_uni_indicator_window_ParamLimits

0xf46d,	// (0x00040e6e) popup_uni_indicator_window

0x2ac4,	// (0x000344c5) bg_popup_sub_pane_cp14

0x8831,	// (0x0003a232) list_uniindi_pane

0x883d,	// (0x0003a23e) uniindi_top_pane

0x24c7,	// (0x00033ec8) bg_uniindi_top_pane

0x885e,	// (0x0003a25f) uniindi_top_pane_g1

0x8874,	// (0x0003a275) uniindi_top_pane_g2

0x0003,

0xfd3c,	// (0x0004173d) uniindi_top_pane_g

0x889e,	// (0x0003a29f) uniindi_top_pane_t1

0x88ca,	// (0x0003a2cb) list_single_uniindi_pane_ParamLimits

0x88ca,	// (0x0003a2cb) list_single_uniindi_pane

0x6ee8,	// (0x000388e9) bg_uniindi_top_pane_g1

0x88dc,	// (0x0003a2dd) list_single_uniindi_pane_g1

0x88ef,	// (0x0003a2f0) list_single_uniindi_pane_t1

0xf354,	// (0x00040d55) control_bg_pane

0x8914,	// (0x0003a315) bg_sctrl_sk_pane_cp1

0x891d,	// (0x0003a31e) bg_sctrl_sk_pane_cp2

0x8926,	// (0x0003a327) control_bg_pane_g1

0x892f,	// (0x0003a330) control_bg_pane_g2

0x0001,

0xfd45,	// (0x00041746) control_bg_pane_g

0x6912,	// (0x00038313) cell_indicator_nsta_pane_g1_ParamLimits

0xd814,	// (0x0003f215) cell_indicator_nsta_pane_g2_ParamLimits

0xfaad,	// (0x000414ae) cell_indicator_nsta_pane_g_ParamLimits

0x133c,	// (0x00032d3d) form2_midp_time_pane_t1_ParamLimits

0xc6f5,	// (0x0003e0f6) main_idle_act4_pane_ParamLimits

0xc6f5,	// (0x0003e0f6) main_idle_act4_pane

0xcd44,	// (0x0003e745) popup_tb_extension_window_ParamLimits

0xe25b,	// (0x0003fc5c) tb_ext_find_pane_ParamLimits

0xe25b,	// (0x0003fc5c) tb_ext_find_pane

0x8938,	// (0x0003a339) ai_gene_pane_1_cp1

0x3ac9,	// (0x000354ca) ai_gene_pane_2_cp1

0x8940,	// (0x0003a341) list_single_idle_plugin_calendar_pane

0x8949,	// (0x0003a34a) list_single_idle_plugin_notification_pane

0x8952,	// (0x0003a353) list_single_idle_plugin_player_pane

0xe2ba,	// (0x0003fcbb) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe2ba,	// (0x0003fcbb) list_single_idle_plugin_shortcut_pane

0xe2e2,	// (0x0003fce3) main_idle_act4_pane_t1

0xe2fa,	// (0x0003fcfb) main_idle_act4_pane_t2

0x0001,

0xfd4a,	// (0x0004174b) main_idle_act4_pane_t

0xe312,	// (0x0003fd13) middle_sk_idle_act4_pane_ParamLimits

0xe312,	// (0x0003fd13) middle_sk_idle_act4_pane

0xe32e,	// (0x0003fd2f) popup_clock_digital_analogue_window_cp2

0xe355,	// (0x0003fd56) shortcut_wheel_idle_act4_pane_ParamLimits

0xe355,	// (0x0003fd56) shortcut_wheel_idle_act4_pane

0x6ee8,	// (0x000388e9) shortcut_wheel_idle_act4_pane_g1

0x6ee8,	// (0x000388e9) shortcut_wheel_idle_act4_pane_g2

0x6ee8,	// (0x000388e9) shortcut_wheel_idle_act4_pane_g3

0x6ee8,	// (0x000388e9) shortcut_wheel_idle_act4_pane_g4

0x6ee8,	// (0x000388e9) shortcut_wheel_idle_act4_pane_g5

0x89e5,	// (0x0003a3e6) shortcut_wheel_idle_act4_pane_g6

0x89ed,	// (0x0003a3ee) shortcut_wheel_idle_act4_pane_g7

0x89f5,	// (0x0003a3f6) shortcut_wheel_idle_act4_pane_g8

0x89fd,	// (0x0003a3fe) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4f,	// (0x00041750) shortcut_wheel_idle_act4_pane_g

0xe04a,	// (0x0003fa4b) middle_sk_idle_act4_pane_g1_ParamLimits

0xe04a,	// (0x0003fa4b) middle_sk_idle_act4_pane_g1

0xe3d2,	// (0x0003fdd3) middle_sk_idle_act4_pane_g2_ParamLimits

0xe3d2,	// (0x0003fdd3) middle_sk_idle_act4_pane_g2

0x0001,

0xfd72,	// (0x00041773) middle_sk_idle_act4_pane_g_ParamLimits

0xfd72,	// (0x00041773) middle_sk_idle_act4_pane_g

0xe3ea,	// (0x0003fdeb) middle_sk_idle_act4_pane_t1_ParamLimits

0xe3ea,	// (0x0003fdeb) middle_sk_idle_act4_pane_t1

0xe419,	// (0x0003fe1a) grid_ai_shortcut_pane_ParamLimits

0xe419,	// (0x0003fe1a) grid_ai_shortcut_pane

0xe436,	// (0x0003fe37) list_highlight_pane_cp16_ParamLimits

0xe436,	// (0x0003fe37) list_highlight_pane_cp16

0xe443,	// (0x0003fe44) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe443,	// (0x0003fe44) list_single_idle_plugin_shortcut_pane_g1

0xe44f,	// (0x0003fe50) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe44f,	// (0x0003fe50) list_single_idle_plugin_shortcut_pane_g2

0xe46d,	// (0x0003fe6e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe46d,	// (0x0003fe6e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd77,	// (0x00041778) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd77,	// (0x00041778) list_single_idle_plugin_shortcut_pane_g

0xe482,	// (0x0003fe83) cell_ai_shortcut_pane_ParamLimits

0xe482,	// (0x0003fe83) cell_ai_shortcut_pane

0xe498,	// (0x0003fe99) cell_ai_shortcut_pane_g1_ParamLimits

0xe498,	// (0x0003fe99) cell_ai_shortcut_pane_g1

0x8938,	// (0x0003a339) ai_gene_pane_1_cp2

0x8b2e,	// (0x0003a52f) ai_gene_pane_2_cp2

0x8b36,	// (0x0003a537) list_highlight_pane_cp15

0x8b3f,	// (0x0003a540) list_single_idle_plugin_calendar_pane_g1

0x8b36,	// (0x0003a537) list_highlight_pane_cp17

0x8b47,	// (0x0003a548) list_single_idle_plugin_calendar_pane_g1_copy1

0x8b4f,	// (0x0003a550) list_single_idle_plugin_player_pane_g1

0x6282,	// (0x00037c83) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7e,	// (0x0004177f) list_single_idle_plugin_player_pane_g

0x8b57,	// (0x0003a558) list_single_idle_plugin_player_pane_t1

0x8b65,	// (0x0003a566) list_single_idle_plugin_player_pane_t2

0x8b73,	// (0x0003a574) list_single_idle_plugin_player_pane_t3

0x8b81,	// (0x0003a582) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd83,	// (0x00041784) list_single_idle_plugin_player_pane_t

0x8b8f,	// (0x0003a590) wait_bar_pane_cp15

0x8b97,	// (0x0003a598) grid_ai_notification_pane

0x6282,	// (0x00037c83) list_single_idle_plugin_notification_pane_g1

0xe4ba,	// (0x0003febb) cell_ai_notification_pane_ParamLimits

0xe4ba,	// (0x0003febb) cell_ai_notification_pane

0x8bad,	// (0x0003a5ae) cell_ai_notification_pane_g1

0x8bb5,	// (0x0003a5b6) cell_ai_notification_pane_t1

0xe4c7,	// (0x0003fec8) tb_ext_find_button_pane

0xe4cf,	// (0x0003fed0) tb_ext_find_pane_g1

0xe4d7,	// (0x0003fed8) tb_ext_find_pane_t1

0x3392,	// (0x00034d93) tb_ext_find_button_pane_g1

0x8be1,	// (0x0003a5e2) tb_ext_find_button_pane_g2

0x0001,

0xfd8c,	// (0x0004178d) tb_ext_find_button_pane_g

0xe2e2,	// (0x0003fce3) main_idle_act4_pane_t1_ParamLimits

0xe2fa,	// (0x0003fcfb) main_idle_act4_pane_t2_ParamLimits

0xfd4a,	// (0x0004174b) main_idle_act4_pane_t_ParamLimits

0xe32e,	// (0x0003fd2f) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe345,	// (0x0003fd46) sat_plugin_idle_act4_pane_ParamLimits

0xe345,	// (0x0003fd46) sat_plugin_idle_act4_pane

0xe4e5,	// (0x0003fee6) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe4e5,	// (0x0003fee6) sat_plugin_idle_act4_pane_t1

0xe4fd,	// (0x0003fefe) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe4fd,	// (0x0003fefe) sat_plugin_idle_act4_pane_t2

0xe515,	// (0x0003ff16) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe515,	// (0x0003ff16) sat_plugin_idle_act4_pane_t3

0xe52d,	// (0x0003ff2e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe52d,	// (0x0003ff2e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd91,	// (0x00041792) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd91,	// (0x00041792) sat_plugin_idle_act4_pane_t

0xf419,	// (0x00040e1a) popup_battery_window_ParamLimits

0xf419,	// (0x00040e1a) popup_battery_window

0x24c7,	// (0x00033ec8) bg_popup_sub_pane_cp25_ParamLimits

0x24c7,	// (0x00033ec8) bg_popup_sub_pane_cp25

0x8c36,	// (0x0003a637) popup_battery_window_g1_ParamLimits

0x8c36,	// (0x0003a637) popup_battery_window_g1

0x8c42,	// (0x0003a643) popup_battery_window_t1_ParamLimits

0x8c42,	// (0x0003a643) popup_battery_window_t1

0x8c54,	// (0x0003a655) popup_battery_window_t2_ParamLimits

0x8c54,	// (0x0003a655) popup_battery_window_t2

0x0001,

0xfd9a,	// (0x0004179b) popup_battery_window_t_ParamLimits

0xfd9a,	// (0x0004179b) popup_battery_window_t

0xc605,	// (0x0003e006) midp_canvas_pane_ParamLimits

0xc660,	// (0x0003e061) midp_keypad_pane_ParamLimits

0xc660,	// (0x0003e061) midp_keypad_pane

0x3d06,	// (0x00035707) main_midp_pane_ParamLimits

0x69de,	// (0x000383df) signal_pane_g2_cp_ParamLimits

0xe545,	// (0x0003ff46) aid_size_cell_midp_keypad_ParamLimits

0xe545,	// (0x0003ff46) aid_size_cell_midp_keypad

0xe563,	// (0x0003ff64) midp_keyp_game_grid_pane_ParamLimits

0xe563,	// (0x0003ff64) midp_keyp_game_grid_pane

0xe58a,	// (0x0003ff8b) midp_keyp_rocker_pane_ParamLimits

0xe58a,	// (0x0003ff8b) midp_keyp_rocker_pane

0xe5cf,	// (0x0003ffd0) midp_keyp_sk_left_pane_ParamLimits

0xe5cf,	// (0x0003ffd0) midp_keyp_sk_left_pane

0xe623,	// (0x00040024) midp_keyp_sk_right_pane_ParamLimits

0xe623,	// (0x00040024) midp_keyp_sk_right_pane

0xe07a,	// (0x0003fa7b) bg_button_pane_cp03

0xe677,	// (0x00040078) midp_keyp_sk_left_pane_g1

0xe07a,	// (0x0003fa7b) bg_button_pane_cp04

0xe677,	// (0x00040078) midp_keyp_sk_right_pane_g1

0x6ee8,	// (0x000388e9) midp_keyp_rocker_pane_g1

0xe680,	// (0x00040081) keyp_game_cell_pane_ParamLimits

0xe680,	// (0x00040081) keyp_game_cell_pane

0xe07a,	// (0x0003fa7b) bg_button_pane_cp02

0xe6a6,	// (0x000400a7) keyp_game_cell_pane_g1

0xaea9,	// (0x0003c8aa) popup_fep_vkb2_window_ParamLimits

0xaea9,	// (0x0003c8aa) popup_fep_vkb2_window

0xbfe0,	// (0x0003d9e1) aid_size_cell_vkb2_ParamLimits

0xbfe0,	// (0x0003d9e1) aid_size_cell_vkb2

0xc00e,	// (0x0003da0f) popup_fep_vkb2_window_g1_ParamLimits

0xc00e,	// (0x0003da0f) popup_fep_vkb2_window_g1

0xc05e,	// (0x0003da5f) vkb2_area_bottom_pane_ParamLimits

0xc05e,	// (0x0003da5f) vkb2_area_bottom_pane

0xc0ba,	// (0x0003dabb) vkb2_area_keypad_pane_ParamLimits

0xc0ba,	// (0x0003dabb) vkb2_area_keypad_pane

0xc108,	// (0x0003db09) vkb2_area_top_pane_ParamLimits

0xc108,	// (0x0003db09) vkb2_area_top_pane

0xc18e,	// (0x0003db8f) vkb2_top_entry_pane_ParamLimits

0xc18e,	// (0x0003db8f) vkb2_top_entry_pane

0xc1bb,	// (0x0003dbbc) vkb2_top_grid_left_pane_ParamLimits

0xc1bb,	// (0x0003dbbc) vkb2_top_grid_left_pane

0xc1db,	// (0x0003dbdc) vkb2_top_grid_right_pane_ParamLimits

0xc1db,	// (0x0003dbdc) vkb2_top_grid_right_pane

0x1bf8,	// (0x000335f9) vkb2_cell_keypad_pane_ParamLimits

0x1bf8,	// (0x000335f9) vkb2_cell_keypad_pane

0xc221,	// (0x0003dc22) vkb2_area_bottom_grid_pane_ParamLimits

0xc221,	// (0x0003dc22) vkb2_area_bottom_grid_pane

0xc24b,	// (0x0003dc4c) vkb2_area_bottom_pane_g1_ParamLimits

0xc24b,	// (0x0003dc4c) vkb2_area_bottom_pane_g1

0xc271,	// (0x0003dc72) vkb2_area_bottom_pane_g2_ParamLimits

0xc271,	// (0x0003dc72) vkb2_area_bottom_pane_g2

0xc2a2,	// (0x0003dca3) vkb2_area_bottom_pane_g3_ParamLimits

0xc2a2,	// (0x0003dca3) vkb2_area_bottom_pane_g3

0x0002,

0xfd9f,	// (0x000417a0) vkb2_area_bottom_pane_g_ParamLimits

0xfd9f,	// (0x000417a0) vkb2_area_bottom_pane_g

0x1d87,	// (0x00033788) vkb2_top_cell_left_pane_ParamLimits

0x1d87,	// (0x00033788) vkb2_top_cell_left_pane

0xe6af,	// (0x000400b0) vkb2_top_entry_pane_g1_ParamLimits

0xe6af,	// (0x000400b0) vkb2_top_entry_pane_g1

0xe6bd,	// (0x000400be) vkb2_top_entry_pane_t1_ParamLimits

0xe6bd,	// (0x000400be) vkb2_top_entry_pane_t1

0x8de1,	// (0x0003a7e2) vkb2_top_entry_pane_t2_ParamLimits

0x8de1,	// (0x0003a7e2) vkb2_top_entry_pane_t2

0x8df9,	// (0x0003a7fa) vkb2_top_entry_pane_t3_ParamLimits

0x8df9,	// (0x0003a7fa) vkb2_top_entry_pane_t3

0x0002,

0xfda6,	// (0x000417a7) vkb2_top_entry_pane_t_ParamLimits

0xfda6,	// (0x000417a7) vkb2_top_entry_pane_t

0xc30c,	// (0x0003dd0d) vkb2_top_grid_right_pane_g1_ParamLimits

0xc30c,	// (0x0003dd0d) vkb2_top_grid_right_pane_g1

0x1dea,	// (0x000337eb) vkb2_top_grid_right_pane_g2_ParamLimits

0x1dea,	// (0x000337eb) vkb2_top_grid_right_pane_g2

0x1e02,	// (0x00033803) vkb2_top_grid_right_pane_g3_ParamLimits

0x1e02,	// (0x00033803) vkb2_top_grid_right_pane_g3

0xc322,	// (0x0003dd23) vkb2_top_grid_right_pane_g4_ParamLimits

0xc322,	// (0x0003dd23) vkb2_top_grid_right_pane_g4

0x0003,

0xfdad,	// (0x000417ae) vkb2_top_grid_right_pane_g_ParamLimits

0xfdad,	// (0x000417ae) vkb2_top_grid_right_pane_g

0x1e30,	// (0x00033831) vkb2_top_cell_left_pane_g1

0x1e47,	// (0x00033848) vkb2_cell_keypad_pane_g1_ParamLimits

0x1e47,	// (0x00033848) vkb2_cell_keypad_pane_g1

0x8e0f,	// (0x0003a810) vkb2_cell_keypad_pane_t1_ParamLimits

0x8e0f,	// (0x0003a810) vkb2_cell_keypad_pane_t1

0x1e6b,	// (0x0003386c) vkb2_cell_bottom_grid_pane_ParamLimits

0x1e6b,	// (0x0003386c) vkb2_cell_bottom_grid_pane

0x1ea4,	// (0x000338a5) vkb2_cell_bottom_grid_pane_g1

0xe376,	// (0x0003fd77) aid_call2_pane_cp02

0xe37e,	// (0x0003fd7f) aid_call_pane_cp02

0xe386,	// (0x0003fd87) clock_digital_number_pane_cp10

0xe38e,	// (0x0003fd8f) clock_digital_number_pane_cp11

0xe396,	// (0x0003fd97) clock_digital_number_pane_cp12

0xe39e,	// (0x0003fd9f) clock_digital_number_pane_cp13

0xe3a6,	// (0x0003fda7) clock_digital_separator_pane_cp10

0x3392,	// (0x00034d93) popup_clock_digital_analogue_window_cp2_g1

0x3392,	// (0x00034d93) popup_clock_digital_analogue_window_cp2_g2

0xe3ae,	// (0x0003fdaf) popup_clock_digital_analogue_window_cp2_g3

0x3392,	// (0x00034d93) popup_clock_digital_analogue_window_cp2_g4

0xe3ae,	// (0x0003fdaf) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd62,	// (0x00041763) popup_clock_digital_analogue_window_cp2_g

0xe3b6,	// (0x0003fdb7) popup_clock_digital_analogue_window_cp2_t1

0xe3c4,	// (0x0003fdc5) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6d,	// (0x0004176e) popup_clock_digital_analogue_window_cp2_t

0x6ee8,	// (0x000388e9) clock_digital_number_pane_cp10_g1

0x6ee8,	// (0x000388e9) clock_digital_number_pane_cp10_g2

0x0001,

0xfb49,	// (0x0004154a) clock_digital_number_pane_cp10_g

0x6ee8,	// (0x000388e9) clock_digital_separator_pane_cp10_g1

0x6ee8,	// (0x000388e9) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb49,	// (0x0004154a) clock_digital_separator_pane_cp10_g

0x8880,	// (0x0003a281) uniindi_top_pane_g3

0x8891,	// (0x0003a292) uniindi_top_pane_g4

0x1c68,	// (0x00033669) vkb2_row_keypad_pane_ParamLimits

0x1c68,	// (0x00033669) vkb2_row_keypad_pane

0x1ec0,	// (0x000338c1) vkb2_cell_t_keypad_pane_ParamLimits

0x1ec0,	// (0x000338c1) vkb2_cell_t_keypad_pane

0x1ed0,	// (0x000338d1) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1ed0,	// (0x000338d1) vkb2_cell_t_keypad_pane_cp08

0x1ee5,	// (0x000338e6) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1ee5,	// (0x000338e6) vkb2_cell_t_keypad_pane_cp09

0x1ef9,	// (0x000338fa) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1ef9,	// (0x000338fa) vkb2_cell_t_keypad_pane_cp01

0x1f0a,	// (0x0003390b) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1f0a,	// (0x0003390b) vkb2_cell_t_keypad_pane_cp02

0x1f1b,	// (0x0003391c) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1f1b,	// (0x0003391c) vkb2_cell_t_keypad_pane_cp03

0x1f2c,	// (0x0003392d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1f2c,	// (0x0003392d) vkb2_cell_t_keypad_pane_cp04

0x1f3d,	// (0x0003393e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1f3d,	// (0x0003393e) vkb2_cell_t_keypad_pane_cp05

0x1f4e,	// (0x0003394f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1f4e,	// (0x0003394f) vkb2_cell_t_keypad_pane_cp06

0x1f61,	// (0x00033962) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1f61,	// (0x00033962) vkb2_cell_t_keypad_pane_cp07

0x1f76,	// (0x00033977) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1f76,	// (0x00033977) vkb2_cell_t_keypad_pane_cp10

0x15ca,	// (0x00032fcb) vkb2_cell_t_keypad_pane_g1

0x8e26,	// (0x0003a827) vkb2_cell_t_keypad_pane_t1

0xf354,	// (0x00040d55) popup_grid_graphic2_window

0xe6f6,	// (0x000400f7) aid_size_cell_graphic2_ParamLimits

0xe6f6,	// (0x000400f7) aid_size_cell_graphic2

0xe734,	// (0x00040135) bg_popup_window_pane_cp21_ParamLimits

0xe734,	// (0x00040135) bg_popup_window_pane_cp21

0xe742,	// (0x00040143) graphic2_pages_pane_ParamLimits

0xe742,	// (0x00040143) graphic2_pages_pane

0xe79a,	// (0x0004019b) grid_graphic2_control_pane_ParamLimits

0xe79a,	// (0x0004019b) grid_graphic2_control_pane

0xe7e2,	// (0x000401e3) grid_graphic2_pane_ParamLimits

0xe7e2,	// (0x000401e3) grid_graphic2_pane

0xe86d,	// (0x0004026e) cell_graphic2_pane

0xe07a,	// (0x0003fa7b) main_comp_mode_pane

0x80d0,	// (0x00039ad1) list_ai3_gene_pane_ParamLimits

0xe0b1,	// (0x0003fab2) bg_popup_window_pane_cp19_ParamLimits

0x84a4,	// (0x00039ea5) bg_touch_area_indi_pane_ParamLimits

0x84a4,	// (0x00039ea5) bg_touch_area_indi_pane

0x84ba,	// (0x00039ebb) bg_touch_area_indi_pane_cp01_ParamLimits

0x84ba,	// (0x00039ebb) bg_touch_area_indi_pane_cp01

0x84d2,	// (0x00039ed3) bg_touch_area_indi_pane_cp02_ParamLimits

0x84d2,	// (0x00039ed3) bg_touch_area_indi_pane_cp02

0x84ec,	// (0x00039eed) bg_touch_area_indi_pane_cp03_ParamLimits

0x84ec,	// (0x00039eed) bg_touch_area_indi_pane_cp03

0x8506,	// (0x00039f07) popup_slider_window_g1_ParamLimits

0x8522,	// (0x00039f23) popup_slider_window_g2_ParamLimits

0x853e,	// (0x00039f3f) popup_slider_window_g3_ParamLimits

0xfcf7,	// (0x000416f8) popup_slider_window_g_ParamLimits

0x859a,	// (0x00039f9b) popup_slider_window_t1_ParamLimits

0x860e,	// (0x0003a00f) small_volume_slider_vertical_pane_ParamLimits

0xe86d,	// (0x0004026e) cell_graphic2_pane_ParamLimits

0xe8d0,	// (0x000402d1) bg_button_pane_cp10_ParamLimits

0xe8d0,	// (0x000402d1) bg_button_pane_cp10

0xe8e3,	// (0x000402e4) bg_button_pane_cp11_ParamLimits

0xe8e3,	// (0x000402e4) bg_button_pane_cp11

0xe8f6,	// (0x000402f7) graphic2_pages_pane_g1_ParamLimits

0xe8f6,	// (0x000402f7) graphic2_pages_pane_g1

0xe911,	// (0x00040312) graphic2_pages_pane_g2_ParamLimits

0xe911,	// (0x00040312) graphic2_pages_pane_g2

0x0001,

0xfdbb,	// (0x000417bc) graphic2_pages_pane_g_ParamLimits

0xfdbb,	// (0x000417bc) graphic2_pages_pane_g

0xe929,	// (0x0004032a) graphic2_pages_pane_t1_ParamLimits

0xe929,	// (0x0004032a) graphic2_pages_pane_t1

0xe941,	// (0x00040342) cell_graphic2_control_pane_ParamLimits

0xe941,	// (0x00040342) cell_graphic2_control_pane

0xe95d,	// (0x0004035e) cell_graphic2_pane_g1_ParamLimits

0xe95d,	// (0x0004035e) cell_graphic2_pane_g1

0xe058,	// (0x0003fa59) cell_graphic2_pane_g2_ParamLimits

0xe058,	// (0x0003fa59) cell_graphic2_pane_g2

0xe0a4,	// (0x0003faa5) cell_graphic2_pane_g3_ParamLimits

0xe0a4,	// (0x0003faa5) cell_graphic2_pane_g3

0xe065,	// (0x0003fa66) cell_graphic2_pane_g4_ParamLimits

0xe065,	// (0x0003fa66) cell_graphic2_pane_g4

0xe96a,	// (0x0004036b) cell_graphic2_pane_g5_ParamLimits

0xe96a,	// (0x0004036b) cell_graphic2_pane_g5

0x0004,

0xfdc0,	// (0x000417c1) cell_graphic2_pane_g_ParamLimits

0xfdc0,	// (0x000417c1) cell_graphic2_pane_g

0xe98a,	// (0x0004038b) cell_graphic2_pane_t1_ParamLimits

0xe98a,	// (0x0004038b) cell_graphic2_pane_t1

0x555f,	// (0x00036f60) grid_highlight_pane_cp11_ParamLimits

0x555f,	// (0x00036f60) grid_highlight_pane_cp11

0x24c7,	// (0x00033ec8) bg_button_pane_cp05

0xe9bf,	// (0x000403c0) cell_graphic2_control_pane_g1

0x6ee8,	// (0x000388e9) bg_touch_area_indi_pane_g1

0x90f7,	// (0x0003aaf8) aid_cmod_rocker_key_size

0x9101,	// (0x0003ab02) aid_cmode_itu_key_size

0x910b,	// (0x0003ab0c) main_cmode_video_pane

0x9115,	// (0x0003ab16) main_comp_mode_itu_pane

0x9121,	// (0x0003ab22) main_comp_mode_rocker_pane

0x912d,	// (0x0003ab2e) cell_cmode_rocker_pane_ParamLimits

0x912d,	// (0x0003ab2e) cell_cmode_rocker_pane

0x9141,	// (0x0003ab42) cell_cmode_itu_pane_ParamLimits

0x9141,	// (0x0003ab42) cell_cmode_itu_pane

0x2ac4,	// (0x000344c5) bg_button_pane_cp06_ParamLimits

0x2ac4,	// (0x000344c5) bg_button_pane_cp06

0x7172,	// (0x00038b73) cell_cmode_rocker_pane_g1_ParamLimits

0x7172,	// (0x00038b73) cell_cmode_rocker_pane_g1

0x86d6,	// (0x0003a0d7) cell_cmode_rocker_pane_g2_ParamLimits

0x86d6,	// (0x0003a0d7) cell_cmode_rocker_pane_g2

0x0001,

0xfdd0,	// (0x000417d1) cell_cmode_rocker_pane_g_ParamLimits

0xfdd0,	// (0x000417d1) cell_cmode_rocker_pane_g

0xe07a,	// (0x0003fa7b) bg_button_pane_cp07

0x9158,	// (0x0003ab59) cell_cmode_itu_pane_g1

0x9161,	// (0x0003ab62) cell_cmode_itu_pane_t1

0x916f,	// (0x0003ab70) cell_cmode_itu_pane_t2

0x0001,

0xfdd5,	// (0x000417d6) cell_cmode_itu_pane_t

0x8904,	// (0x0003a305) aid_touch_ctrl_left

0x890c,	// (0x0003a30d) aid_touch_ctrl_right

0xe07a,	// (0x0003fa7b) compa_mode_pane

0xe9e5,	// (0x000403e6) aid_cmod_rocker_key_size_cp

0xe9ef,	// (0x000403f0) aid_cmode_itu_key_size_cp

0x9191,	// (0x0003ab92) compa_mode_pane_g1

0x9199,	// (0x0003ab9a) compa_mode_pane_g2

0x91a1,	// (0x0003aba2) compa_mode_pane_g3

0x0002,

0xfdda,	// (0x000417db) compa_mode_pane_g

0xe9f9,	// (0x000403fa) main_comp_mode_itu_pane_cp

0xea01,	// (0x00040402) main_comp_mode_rocker_pane_cp

0xea09,	// (0x0004040a) cell_cmode_itu_pane_cp_ParamLimits

0xea09,	// (0x0004040a) cell_cmode_itu_pane_cp

0xea1e,	// (0x0004041f) cell_cmode_rocker_pane_cp_ParamLimits

0xea1e,	// (0x0004041f) cell_cmode_rocker_pane_cp

0x2ac4,	// (0x000344c5) bg_button_pane_cp06_cp_ParamLimits

0x2ac4,	// (0x000344c5) bg_button_pane_cp06_cp

0x7172,	// (0x00038b73) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7172,	// (0x00038b73) cell_cmode_rocker_pane_g1_cp

0x6ee8,	// (0x000388e9) cell_cmode_rocker_pane_g2_cp

0xe07a,	// (0x0003fa7b) bg_button_pane_cp07_cp

0xea30,	// (0x00040431) cell_cmode_itu_pane_g1_cp

0xea39,	// (0x0004043a) cell_cmode_itu_pane_t1_cp

0xea39,	// (0x0004043a) cell_cmode_itu_pane_t2_cp

0xd65b,	// (0x0003f05c) settings_code_pane_cp2

0x223d,	// (0x00033c3e) bg_popup_window_pane_cp3_ParamLimits

0x26b5,	// (0x000340b6) heading_pane_cp3_ParamLimits

0x26c1,	// (0x000340c2) listscroll_popup_graphic_pane_ParamLimits

0x135d,	// (0x00032d5e) fep_hwr_aid_pane_ParamLimits

0x193f,	// (0x00033340) aid_touch_sctrl_top_ParamLimits

0x195a,	// (0x0003335b) sctrl_sk_top_pane_g1_ParamLimits

0x15ca,	// (0x00032fcb) sctrl_sk_top_pane_g2_ParamLimits

0xfd10,	// (0x00041711) sctrl_sk_top_pane_g_ParamLimits

0x1967,	// (0x00033368) sctrl_sk_top_pane_t1_ParamLimits

0x193f,	// (0x00033340) aid_touch_sctrl_bottom_ParamLimits

0x1967,	// (0x00033368) sctrl_sk_bottom_pane_t1_ParamLimits

0x884a,	// (0x0003a24b) aid_area_touch_clock

0xc150,	// (0x0003db51) aid_vkb2_area_top_pane_cell_ParamLimits

0xc150,	// (0x0003db51) aid_vkb2_area_top_pane_cell

0xc1fb,	// (0x0003dbfc) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc1fb,	// (0x0003dbfc) aid_vkb2_area_bottom_pane_cell

0x8db3,	// (0x0003a7b4) popup_char_count_window

0x91f7,	// (0x0003abf8) popup_char_count_window_g1

0x9200,	// (0x0003ac01) popup_char_count_window_g2

0x9209,	// (0x0003ac0a) popup_char_count_window_g3

0x0002,

0xfde1,	// (0x000417e2) popup_char_count_window_g

0x9212,	// (0x0003ac13) popup_char_count_window_t1

0x1a14,	// (0x00033415) popup_fep_char_preview_window_ParamLimits

0x1a14,	// (0x00033415) popup_fep_char_preview_window

0xc170,	// (0x0003db71) vkb2_top_candi_pane_ParamLimits

0xc170,	// (0x0003db71) vkb2_top_candi_pane

0xea47,	// (0x00040448) cell_vkb2_top_candi_pane_ParamLimits

0xea47,	// (0x00040448) cell_vkb2_top_candi_pane

0x1f8b,	// (0x0003398c) bg_popup_fep_char_preview_window_ParamLimits

0x1f8b,	// (0x0003398c) bg_popup_fep_char_preview_window

0x1f99,	// (0x0003399a) popup_fep_char_preview_window_t1_ParamLimits

0x1f99,	// (0x0003399a) popup_fep_char_preview_window_t1

0x9271,	// (0x0003ac72) bg_popup_fep_char_preview_window_g1

0x9279,	// (0x0003ac7a) bg_popup_fep_char_preview_window_g2

0x9281,	// (0x0003ac82) bg_popup_fep_char_preview_window_g3

0x9289,	// (0x0003ac8a) bg_popup_fep_char_preview_window_g4

0x9291,	// (0x0003ac92) bg_popup_fep_char_preview_window_g5

0x1fd3,	// (0x000339d4) bg_popup_fep_char_preview_window_g6

0x9299,	// (0x0003ac9a) bg_popup_fep_char_preview_window_g7

0x92a1,	// (0x0003aca2) bg_popup_fep_char_preview_window_g8

0x92a9,	// (0x0003acaa) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde8,	// (0x000417e9) bg_popup_fep_char_preview_window_g

0x15ca,	// (0x00032fcb) cell_vkb2_top_candi_pane_g1_ParamLimits

0x15ca,	// (0x00032fcb) cell_vkb2_top_candi_pane_g1

0x15d8,	// (0x00032fd9) cell_vkb2_top_candi_pane_g2_ParamLimits

0x15d8,	// (0x00032fd9) cell_vkb2_top_candi_pane_g2

0x862a,	// (0x0003a02b) cell_vkb2_top_candi_pane_g3_ParamLimits

0x862a,	// (0x0003a02b) cell_vkb2_top_candi_pane_g3

0x1fdb,	// (0x000339dc) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1fdb,	// (0x000339dc) cell_vkb2_top_candi_pane_g4

0x7671,	// (0x00039072) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7671,	// (0x00039072) cell_vkb2_top_candi_pane_g5

0x1ffc,	// (0x000339fd) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1ffc,	// (0x000339fd) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfb,	// (0x000417fc) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfb,	// (0x000417fc) cell_vkb2_top_candi_pane_g

0x200a,	// (0x00033a0b) cell_vkb2_top_candi_pane_t1

0x0e99,	// (0x0003289a) aid_size_touch_slider_mark_ParamLimits

0x0e99,	// (0x0003289a) aid_size_touch_slider_mark

0xe77e,	// (0x0004017f) grid_graphic2_catg_pane_ParamLimits

0xe77e,	// (0x0004017f) grid_graphic2_catg_pane

0xe83c,	// (0x0004023d) popup_grid_graphic2_window_t1_ParamLimits

0xe83c,	// (0x0004023d) popup_grid_graphic2_window_t1

0xe852,	// (0x00040253) popup_grid_graphic2_window_t2_ParamLimits

0xe852,	// (0x00040253) popup_grid_graphic2_window_t2

0x0001,

0xfdb6,	// (0x000417b7) popup_grid_graphic2_window_t_ParamLimits

0xfdb6,	// (0x000417b7) popup_grid_graphic2_window_t

0x24c7,	// (0x00033ec8) bg_button_pane_cp05_ParamLimits

0xe9bf,	// (0x000403c0) cell_graphic2_control_pane_g1_ParamLimits

0xea9b,	// (0x0004049c) cell_graphic2_catg_pane_ParamLimits

0xea9b,	// (0x0004049c) cell_graphic2_catg_pane

0xe07a,	// (0x0003fa7b) bg_button_pane_cp12

0xeaad,	// (0x000404ae) cell_graphic2_catg_pane_g1

0x8816,	// (0x0003a217) cell_tb_ext_pane_t1_ParamLimits

0x1da7,	// (0x000337a8) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1da7,	// (0x000337a8) vkb2_top_cell_right_narrow_pane

0x1dbf,	// (0x000337c0) vkb2_top_cell_right_wide_pane_ParamLimits

0x1dbf,	// (0x000337c0) vkb2_top_cell_right_wide_pane

0x134f,	// (0x00032d50) bg_vkb2_func_pane_ParamLimits

0x134f,	// (0x00032d50) bg_vkb2_func_pane

0x1e30,	// (0x00033831) vkb2_top_cell_left_pane_g1_ParamLimits

0x134f,	// (0x00032d50) bg_vkb2_fuc_pane_cp03_ParamLimits

0x134f,	// (0x00032d50) bg_vkb2_fuc_pane_cp03

0x1ea4,	// (0x000338a5) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x484a,	// (0x0003624b) bg_vkb2_func_pane_g1

0x4852,	// (0x00036253) bg_vkb2_func_pane_g2

0x4862,	// (0x00036263) bg_vkb2_func_pane_g3

0x485a,	// (0x0003625b) bg_vkb2_func_pane_g4

0x486a,	// (0x0003626b) bg_vkb2_func_pane_g5

0x4872,	// (0x00036273) bg_vkb2_func_pane_g6

0x487a,	// (0x0003627b) bg_vkb2_func_pane_g7

0x4882,	// (0x00036283) bg_vkb2_func_pane_g8

0x4842,	// (0x00036243) bg_vkb2_func_pane_g9

0x0008,

0xfe08,	// (0x00041809) bg_vkb2_func_pane_g

0x134f,	// (0x00032d50) bg_vkb2_fuc_pane_cp01_ParamLimits

0x134f,	// (0x00032d50) bg_vkb2_fuc_pane_cp01

0x1e30,	// (0x00033831) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1e30,	// (0x00033831) vkb2_top_cell_right_wide_pane_g1

0x134f,	// (0x00032d50) bg_vkb2_fuc_pane_cp02_ParamLimits

0x134f,	// (0x00032d50) bg_vkb2_fuc_pane_cp02

0x1ea4,	// (0x000338a5) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1ea4,	// (0x000338a5) vkb2_top_cell_right_narrow_pane_g1

0xdf84,	// (0x0003f985) aid_touch_area_decrease_ParamLimits

0xdf84,	// (0x0003f985) aid_touch_area_decrease

0xdfbe,	// (0x0003f9bf) aid_touch_area_increase_ParamLimits

0xdfbe,	// (0x0003f9bf) aid_touch_area_increase

0xdfe6,	// (0x0003f9e7) aid_touch_area_mute_ParamLimits

0xdfe6,	// (0x0003f9e7) aid_touch_area_mute

0xe016,	// (0x0003fa17) aid_touch_area_slider_ParamLimits

0xe016,	// (0x0003fa17) aid_touch_area_slider

0xe0bd,	// (0x0003fabe) popup_slider_window_g4_ParamLimits

0xe0bd,	// (0x0003fabe) popup_slider_window_g4

0xe0e5,	// (0x0003fae6) popup_slider_window_g5_ParamLimits

0xe0e5,	// (0x0003fae6) popup_slider_window_g5

0xe119,	// (0x0003fb1a) popup_slider_window_g6_ParamLimits

0xe119,	// (0x0003fb1a) popup_slider_window_g6

0x85c8,	// (0x00039fc9) popup_slider_window_t2_ParamLimits

0x85c8,	// (0x00039fc9) popup_slider_window_t2

0x0001,

0xfd04,	// (0x00041705) popup_slider_window_t_ParamLimits

0xfd04,	// (0x00041705) popup_slider_window_t

0xe135,	// (0x0003fb36) slider_pane_ParamLimits

0xe135,	// (0x0003fb36) slider_pane

0x92cc,	// (0x0003accd) slider_pane_g1_ParamLimits

0x92cc,	// (0x0003accd) slider_pane_g1

0x92e0,	// (0x0003ace1) slider_pane_g2_ParamLimits

0x92e0,	// (0x0003ace1) slider_pane_g2

0x92f6,	// (0x0003acf7) slider_pane_g3_ParamLimits

0x92f6,	// (0x0003acf7) slider_pane_g3

0x0003,

0xfe1b,	// (0x0004181c) slider_pane_g_ParamLimits

0xfe1b,	// (0x0004181c) slider_pane_g

0xcd90,	// (0x0003e791) popup_tb_float_extension_window_ParamLimits

0xcd90,	// (0x0003e791) popup_tb_float_extension_window

0x9322,	// (0x0003ad23) aid_size_cell_tb_float_ext

0xe07a,	// (0x0003fa7b) bg_popup_sub_window_cp28

0x932e,	// (0x0003ad2f) grid_tb_float_ext_pane

0x933a,	// (0x0003ad3b) cell_tb_float_ext_pane_ParamLimits

0x933a,	// (0x0003ad3b) cell_tb_float_ext_pane

0x9356,	// (0x0003ad57) cell_tb_float_ext_pane_g1

0x935f,	// (0x0003ad60) grid_highlight_pane_cp12

0xbd74,	// (0x0003d775) cell_last_hwr_side_pane_ParamLimits

0xbd74,	// (0x0003d775) cell_last_hwr_side_pane

0x6ee8,	// (0x000388e9) cell_last_hwr_side_pane_g1

0x9368,	// (0x0003ad69) cell_last_hwr_side_pane_g2

0x0001,

0xfe24,	// (0x00041825) cell_last_hwr_side_pane_g

0xc2d7,	// (0x0003dcd8) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc2d7,	// (0x0003dcd8) vkb2_area_bottom_space_btn_pane

0x15ca,	// (0x00032fcb) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x8e26,	// (0x0003a827) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x200a,	// (0x00033a0b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2028,	// (0x00033a29) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2028,	// (0x00033a29) vkb2_area_bottom_space_btn_pane_g1

0x2062,	// (0x00033a63) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2062,	// (0x00033a63) vkb2_area_bottom_space_btn_pane_g2

0x2098,	// (0x00033a99) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2098,	// (0x00033a99) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe29,	// (0x0004182a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe29,	// (0x0004182a) vkb2_area_bottom_space_btn_pane_g

0x1414,	// (0x00032e15) cel_fep_hwr_func_pane_ParamLimits

0x1414,	// (0x00032e15) cel_fep_hwr_func_pane

0xbd49,	// (0x0003d74a) cell_hwr_side_button_pane_ParamLimits

0xbd49,	// (0x0003d74a) cell_hwr_side_button_pane

0x884a,	// (0x0003a24b) aid_area_touch_clock_ParamLimits

0x24c7,	// (0x00033ec8) bg_uniindi_top_pane_ParamLimits

0x885e,	// (0x0003a25f) uniindi_top_pane_g1_ParamLimits

0x8874,	// (0x0003a275) uniindi_top_pane_g2_ParamLimits

0x8880,	// (0x0003a281) uniindi_top_pane_g3_ParamLimits

0x8891,	// (0x0003a292) uniindi_top_pane_g4_ParamLimits

0xfd3c,	// (0x0004173d) uniindi_top_pane_g_ParamLimits

0x889e,	// (0x0003a29f) uniindi_top_pane_t1_ParamLimits

0x24c7,	// (0x00033ec8) bg_vkb2_func_pane_cp01_ParamLimits

0x24c7,	// (0x00033ec8) bg_vkb2_func_pane_cp01

0x9371,	// (0x0003ad72) cel_fep_hwr_func_pane_g1_ParamLimits

0x9371,	// (0x0003ad72) cel_fep_hwr_func_pane_g1

0x24c7,	// (0x00033ec8) bg_vkb2_func_pane_cp02_ParamLimits

0x24c7,	// (0x00033ec8) bg_vkb2_func_pane_cp02

0x9371,	// (0x0003ad72) cell_hwr_side_button_pane_g1_ParamLimits

0x9371,	// (0x0003ad72) cell_hwr_side_button_pane_g1

0x46c3,	// (0x000360c4) status_pane_g4_ParamLimits

0x46c3,	// (0x000360c4) status_pane_g4

0x46dd,	// (0x000360de) status_pane_t1

0x6c84,	// (0x00038685) form2_midp_gauge_slider_cont_pane

0x6c8c,	// (0x0003868d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd916,	// (0x0003f317) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd928,	// (0x0003f329) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafc,	// (0x000414fd) form2_midp_gauge_slider_pane_t_ParamLimits

0x6cc2,	// (0x000386c3) form2_midp_slider_pane_ParamLimits

0x19dc,	// (0x000333dd) aid_size_cell_func_vkb2_ParamLimits

0x19dc,	// (0x000333dd) aid_size_cell_func_vkb2

0x930e,	// (0x0003ad0f) slider_pane_g4_ParamLimits

0x930e,	// (0x0003ad0f) slider_pane_g4

0xc338,	// (0x0003dd39) form2_midp_gauge_slider_pane_t2_cp01

0xc346,	// (0x0003dd47) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc346,	// (0x0003dd47) form2_midp_gauge_slider_pane_t3_cp01

0x210d,	// (0x00033b0e) form2_midp_slider_pane_cp01

0xe07a,	// (0x0003fa7b) navi_smil_pane

0x93aa,	// (0x0003adab) navi_smil_pane_g1

0x93b2,	// (0x0003adb3) navi_smil_pane_t1

0x937f,	// (0x0003ad80) form2_midp_slider_pane_g1

0x9388,	// (0x0003ad89) form2_midp_slider_pane_g2

0x9390,	// (0x0003ad91) form2_midp_slider_pane_g3

0x937f,	// (0x0003ad80) form2_midp_slider_pane_g4

0xeab6,	// (0x000404b7) form2_midp_slider_pane_g5

0x0004,

0xfe32,	// (0x00041833) form2_midp_slider_pane_g

0x20d2,	// (0x00033ad3) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x20d2,	// (0x00033ad3) vkb2_area_bottom_space_btn_pane_g4

0xcf70,	// (0x0003e971) lc0_navi_pane_ParamLimits

0xcf70,	// (0x0003e971) lc0_navi_pane

0xcfe0,	// (0x0003e9e1) lc0_stat_indi_pane_ParamLimits

0xcfe0,	// (0x0003e9e1) lc0_stat_indi_pane

0xcff5,	// (0x0003e9f6) ls0_title_pane_ParamLimits

0xcff5,	// (0x0003e9f6) ls0_title_pane

0x2ac4,	// (0x000344c5) bg_popup_sub_pane_cp14_ParamLimits

0x8831,	// (0x0003a232) list_uniindi_pane_ParamLimits

0x883d,	// (0x0003a23e) uniindi_top_pane_ParamLimits

0x88dc,	// (0x0003a2dd) list_single_uniindi_pane_g1_ParamLimits

0x88ef,	// (0x0003a2f0) list_single_uniindi_pane_t1_ParamLimits

0xc363,	// (0x0003dd64) lc0_stat_clock_pane_ParamLimits

0xc363,	// (0x0003dd64) lc0_stat_clock_pane

0xeabf,	// (0x000404c0) lc0_stat_indi_pane_g1_ParamLimits

0xeabf,	// (0x000404c0) lc0_stat_indi_pane_g1

0xeacc,	// (0x000404cd) lc0_stat_indi_pane_g2_ParamLimits

0xeacc,	// (0x000404cd) lc0_stat_indi_pane_g2

0x0001,

0xfe3d,	// (0x0004183e) lc0_stat_indi_pane_g_ParamLimits

0xfe3d,	// (0x0004183e) lc0_stat_indi_pane_g

0xc370,	// (0x0003dd71) lc0_uni_indicator_pane_ParamLimits

0xc370,	// (0x0003dd71) lc0_uni_indicator_pane

0xead9,	// (0x000404da) ls0_title_pane_g1_ParamLimits

0xead9,	// (0x000404da) ls0_title_pane_g1

0xeaed,	// (0x000404ee) ls0_title_pane_t1_ParamLimits

0xeaed,	// (0x000404ee) ls0_title_pane_t1

0xc37d,	// (0x0003dd7e) lc0_uni_indicator_pane_g1_ParamLimits

0xc37d,	// (0x0003dd7e) lc0_uni_indicator_pane_g1

0x9424,	// (0x0003ae25) lc0_stat_clock_pane_t1

0xe07a,	// (0x0003fa7b) main_ai5_pane

0x9432,	// (0x0003ae33) ai5_sk_pane_ParamLimits

0x9432,	// (0x0003ae33) ai5_sk_pane

0xeb1b,	// (0x0004051c) cell_ai5_widget_pane_ParamLimits

0xeb1b,	// (0x0004051c) cell_ai5_widget_pane

0x94b5,	// (0x0003aeb6) aid_size_cell_widget_grid

0x94c9,	// (0x0003aeca) bg_ai5_widget_pane_ParamLimits

0x94c9,	// (0x0003aeca) bg_ai5_widget_pane

0xeba8,	// (0x000405a9) cell_ai5_widget_pane_g2

0xebb8,	// (0x000405b9) cell_ai5_widget_pane_g3

0xebd7,	// (0x000405d8) cell_ai5_widget_pane_g4

0xebe3,	// (0x000405e4) cell_ai5_widget_pane_g5

0xebef,	// (0x000405f0) cell_ai5_widget_pane_g6

0xebfb,	// (0x000405fc) cell_ai5_widget_pane_g7

0xec43,	// (0x00040644) cell_ai5_widget_pane_t1_ParamLimits

0xec43,	// (0x00040644) cell_ai5_widget_pane_t1

0xec60,	// (0x00040661) cell_ai5_widget_pane_t2_ParamLimits

0xec60,	// (0x00040661) cell_ai5_widget_pane_t2

0xec78,	// (0x00040679) cell_ai5_widget_pane_t3_ParamLimits

0xec78,	// (0x00040679) cell_ai5_widget_pane_t3

0xec90,	// (0x00040691) cell_ai5_widget_pane_t4_ParamLimits

0xec90,	// (0x00040691) cell_ai5_widget_pane_t4

0xecaa,	// (0x000406ab) cell_ai5_widget_pane_t5_ParamLimits

0xecaa,	// (0x000406ab) cell_ai5_widget_pane_t5

0x9614,	// (0x0003b015) cell_ai5_widget_pane_t6_ParamLimits

0x9614,	// (0x0003b015) cell_ai5_widget_pane_t6

0x9626,	// (0x0003b027) cell_ai5_widget_pane_t7_ParamLimits

0x9626,	// (0x0003b027) cell_ai5_widget_pane_t7

0xecc9,	// (0x000406ca) cell_ai5_widget_pane_t8_ParamLimits

0xecc9,	// (0x000406ca) cell_ai5_widget_pane_t8

0x0009,

0xfe57,	// (0x00041858) cell_ai5_widget_pane_t_ParamLimits

0xfe57,	// (0x00041858) cell_ai5_widget_pane_t

0xed15,	// (0x00040716) grid_ai5_widget_pane

0x2ac4,	// (0x000344c5) highlight_cell_ai5_widget_pane_ParamLimits

0x2ac4,	// (0x000344c5) highlight_cell_ai5_widget_pane

0xed2c,	// (0x0004072d) ai5_sk_left_pane

0xed36,	// (0x00040737) ai5_sk_middle_pane

0xed40,	// (0x00040741) ai5_sk_right_pane

0x96c0,	// (0x0003b0c1) bg_ai5_widget_pane_g1_ParamLimits

0x96c0,	// (0x0003b0c1) bg_ai5_widget_pane_g1

0x96cc,	// (0x0003b0cd) bg_ai5_widget_pane_g2_ParamLimits

0x96cc,	// (0x0003b0cd) bg_ai5_widget_pane_g2

0x96d8,	// (0x0003b0d9) bg_ai5_widget_pane_g3_ParamLimits

0x96d8,	// (0x0003b0d9) bg_ai5_widget_pane_g3

0x96e4,	// (0x0003b0e5) bg_ai5_widget_pane_g4_ParamLimits

0x96e4,	// (0x0003b0e5) bg_ai5_widget_pane_g4

0x96f0,	// (0x0003b0f1) bg_ai5_widget_pane_g5_ParamLimits

0x96f0,	// (0x0003b0f1) bg_ai5_widget_pane_g5

0x96fc,	// (0x0003b0fd) bg_ai5_widget_pane_g6_ParamLimits

0x96fc,	// (0x0003b0fd) bg_ai5_widget_pane_g6

0x9708,	// (0x0003b109) bg_ai5_widget_pane_g7_ParamLimits

0x9708,	// (0x0003b109) bg_ai5_widget_pane_g7

0x9714,	// (0x0003b115) bg_ai5_widget_pane_g8_ParamLimits

0x9714,	// (0x0003b115) bg_ai5_widget_pane_g8

0x9720,	// (0x0003b121) bg_ai5_widget_pane_g9_ParamLimits

0x9720,	// (0x0003b121) bg_ai5_widget_pane_g9

0x0008,

0xfe6c,	// (0x0004186d) bg_ai5_widget_pane_g_ParamLimits

0xfe6c,	// (0x0004186d) bg_ai5_widget_pane_g

0x9747,	// (0x0003b148) cell_shortcut_ai5_widget_pane_ParamLimits

0x9747,	// (0x0003b148) cell_shortcut_ai5_widget_pane

0x2309,	// (0x00033d0a) bg_cell_shortcut_ai5_widget_pane

0x9759,	// (0x0003b15a) cell_grid_ai5_widget_pane_g1

0x9762,	// (0x0003b163) highlight_cell_shortcut_ai5_widget_pane

0x484a,	// (0x0003624b) ai5_sk_left_pane_g1

0x976a,	// (0x0003b16b) ai5_sk_left_pane_g2

0x9772,	// (0x0003b173) ai5_sk_left_pane_g3

0x977a,	// (0x0003b17b) ai5_sk_left_pane_g4

0x0003,

0xfe7f,	// (0x00041880) ai5_sk_left_pane_g

0x9782,	// (0x0003b183) ai5_sk_left_pane_t1

0x4852,	// (0x00036253) ai5_sk_right_pane_g1

0x9790,	// (0x0003b191) ai5_sk_right_pane_g2

0x9798,	// (0x0003b199) ai5_sk_right_pane_g3

0x97a0,	// (0x0003b1a1) ai5_sk_right_pane_g4

0x0003,

0xfe88,	// (0x00041889) ai5_sk_right_pane_g

0x97a8,	// (0x0003b1a9) ai5_sk_right_pane_t1

0x4852,	// (0x00036253) ai5_sk_middle_pane_g1

0x484a,	// (0x0003624b) ai5_sk_middle_pane_g2

0x486a,	// (0x0003626b) ai5_sk_middle_pane_g3

0x9798,	// (0x0003b199) ai5_sk_middle_pane_g4

0x9772,	// (0x0003b173) ai5_sk_middle_pane_g5

0x97b6,	// (0x0003b1b7) ai5_sk_middle_pane_g6

0xed4a,	// (0x0004074b) ai5_sk_middle_pane_g7

0x0006,

0xfe91,	// (0x00041892) ai5_sk_middle_pane_g

0xce5a,	// (0x0003e85b) aid_touch_area_size_lc0_ParamLimits

0xce5a,	// (0x0003e85b) aid_touch_area_size_lc0

0x15f9,	// (0x00032ffa) cell_hwr_candidate_pane_t1_ParamLimits

0x437b,	// (0x00035d7c) aid_touch_navi_pane

0xd0ff,	// (0x0003eb00) status_dt_navi_pane_ParamLimits

0xd0ff,	// (0x0003eb00) status_dt_navi_pane

0xd117,	// (0x0003eb18) status_dt_sta_pane_ParamLimits

0xd117,	// (0x0003eb18) status_dt_sta_pane

0xed52,	// (0x00040753) dt_sta_controll_pane

0xed5f,	// (0x00040760) dt_sta_indi_pane

0xed6c,	// (0x0004076d) dt_sta_title_pane

0x24c7,	// (0x00033ec8) bg_dt_sta_indi_pane_ParamLimits

0x24c7,	// (0x00033ec8) bg_dt_sta_indi_pane

0xed7e,	// (0x0004077f) dt_sta_battery_pane

0xed86,	// (0x00040787) dt_sta_indi_pane_g1

0xed8f,	// (0x00040790) dt_sta_indi_pane_g2

0xed98,	// (0x00040799) dt_sta_indi_pane_g3

0x0002,

0xfea0,	// (0x000418a1) dt_sta_indi_pane_g

0xeda1,	// (0x000407a2) dt_sta_signal_pane

0x2ac4,	// (0x000344c5) bg_dt_sta_title_pane_ParamLimits

0x2ac4,	// (0x000344c5) bg_dt_sta_title_pane

0xedaa,	// (0x000407ab) dt_sta_title_pane_g1

0xedb2,	// (0x000407b3) dt_sta_title_pane_t1_ParamLimits

0xedb2,	// (0x000407b3) dt_sta_title_pane_t1

0xe07a,	// (0x0003fa7b) bg_dt_sta_control_pane

0xedc7,	// (0x000407c8) dt_sta_controll_pane_g1

0xedd0,	// (0x000407d1) bg_dt_sta_title_pane_g1

0xedd9,	// (0x000407da) bg_dt_sta_title_pane_g2

0xede2,	// (0x000407e3) bg_dt_sta_title_pane_g3

0x0002,

0xfea7,	// (0x000418a8) bg_dt_sta_title_pane_g

0x6ee8,	// (0x000388e9) bg_dt_sta_indi_pane_g1

0x9864,	// (0x0003b265) dt_sta_signal_pane_g1

0x986c,	// (0x0003b26d) dt_sta_signal_pane_g2

0x0001,

0xfeae,	// (0x000418af) dt_sta_signal_pane_g

0x9874,	// (0x0003b275) dt_sta_battery_pane_g1

0x987d,	// (0x0003b27e) dt_sta_battery_pane_t1

0x6ee8,	// (0x000388e9) bg_dt_sta_control_pane_g1

0x347e,	// (0x00034e7f) fep_china_uni_eep_pane

0x3486,	// (0x00034e87) fep_china_uni_entry_pane_ParamLimits

0x3496,	// (0x00034e97) popup_fep_china_uni_window_g1_ParamLimits

0x34a6,	// (0x00034ea7) popup_fep_china_uni_window_g2_ParamLimits

0x34a6,	// (0x00034ea7) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x00041131) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x00041131) popup_fep_china_uni_window_g

0x988c,	// (0x0003b28d) fep_china_uni_eep_pane_g1

0x9894,	// (0x0003b295) fep_china_uni_eep_pane_t1

0x93a1,	// (0x0003ada2) aid_touch_area_size_smil_player

0x44d3,	// (0x00035ed4) lc0_clock_pane

0x46d1,	// (0x000360d2) status_pane_g5_ParamLimits

0x46d1,	// (0x000360d2) status_pane_g5

0xc8ba,	// (0x0003e2bb) popup_keymap_window

0x468f,	// (0x00036090) status_icon_pane

0xebb8,	// (0x000405b9) cell_ai5_widget_pane_g3_ParamLimits

0xebd7,	// (0x000405d8) cell_ai5_widget_pane_g4_ParamLimits

0xebe3,	// (0x000405e4) cell_ai5_widget_pane_g5_ParamLimits

0xec07,	// (0x00040608) cell_ai5_widget_pane_g8_ParamLimits

0xec07,	// (0x00040608) cell_ai5_widget_pane_g8

0xec1b,	// (0x0004061c) cell_ai5_widget_pane_g9_ParamLimits

0xec1b,	// (0x0004061c) cell_ai5_widget_pane_g9

0xec2f,	// (0x00040630) cell_ai5_widget_pane_g10_ParamLimits

0xec2f,	// (0x00040630) cell_ai5_widget_pane_g10

0x98a3,	// (0x0003b2a4) status_icon_pane_g1

0xe07a,	// (0x0003fa7b) bg_popup_sub_pane_cp13

0x98ab,	// (0x0003b2ac) popup_keymap_window_t1

0xc6b8,	// (0x0003e0b9) control_pane_g6_ParamLimits

0xc6b8,	// (0x0003e0b9) control_pane_g6

0xc6c5,	// (0x0003e0c6) control_pane_g7_ParamLimits

0xc6c5,	// (0x0003e0c6) control_pane_g7

0xc6d2,	// (0x0003e0d3) control_pane_g8_ParamLimits

0xc6d2,	// (0x0003e0d3) control_pane_g8

0xed52,	// (0x00040753) dt_sta_controll_pane_ParamLimits

0xed5f,	// (0x00040760) dt_sta_indi_pane_ParamLimits

0xed6c,	// (0x0004076d) dt_sta_title_pane_ParamLimits

0x29fc,	// (0x000343fd) aid_size_touch_scroll_bar_cale

0xf431,	// (0x00040e32) popup_discreet_window_ParamLimits

0xf431,	// (0x00040e32) popup_discreet_window

0xaef3,	// (0x0003c8f4) popup_sk_window

0x4ee8,	// (0x000368e9) bg_popup_sub_pane_cp28_ParamLimits

0x4ee8,	// (0x000368e9) bg_popup_sub_pane_cp28

0x98b9,	// (0x0003b2ba) popup_discreet_window_g1_ParamLimits

0x98b9,	// (0x0003b2ba) popup_discreet_window_g1

0x98d9,	// (0x0003b2da) popup_discreet_window_t1_ParamLimits

0x98d9,	// (0x0003b2da) popup_discreet_window_t1

0x98f7,	// (0x0003b2f8) popup_discreet_window_t2_ParamLimits

0x98f7,	// (0x0003b2f8) popup_discreet_window_t2

0x0002,

0xfeb3,	// (0x000418b4) popup_discreet_window_t_ParamLimits

0xfeb3,	// (0x000418b4) popup_discreet_window_t

0x2143,	// (0x00033b44) popup_sk_window_g1

0x214d,	// (0x00033b4e) popup_sk_window_g2

0x0001,

0xfeba,	// (0x000418bb) popup_sk_window_g

0x9949,	// (0x0003b34a) popup_sk_window_t1

0x9957,	// (0x0003b358) popup_sk_window_t1_copy1

0xeba8,	// (0x000405a9) cell_ai5_widget_pane_g2_ParamLimits

0xecdb,	// (0x000406dc) cell_ai5_widget_pane_t9_ParamLimits

0xecdb,	// (0x000406dc) cell_ai5_widget_pane_t9

0xe07a,	// (0x0003fa7b) main_fep_fshwr2_pane

0xedeb,	// (0x000407ec) aid_fshwr2_btn_pane

0xedf3,	// (0x000407f4) aid_fshwr2_syb_pane

0xedfb,	// (0x000407fc) aid_fshwr2_txt_pane

0xee03,	// (0x00040804) fshwr2_func_candi_pane

0xee0d,	// (0x0004080e) fshwr2_hwr_syb_pane

0xee19,	// (0x0004081a) fshwr2_icf_pane

0xe07a,	// (0x0003fa7b) fshwr2_icf_bg_pane

0xee23,	// (0x00040824) fshwr2_icf_pane_t1_ParamLimits

0xee23,	// (0x00040824) fshwr2_icf_pane_t1

0x6ee8,	// (0x000388e9) fshwr2_func_candi_pane_g1

0x99ca,	// (0x0003b3cb) fshwr2_func_candi_row_pane_ParamLimits

0x99ca,	// (0x0003b3cb) fshwr2_func_candi_row_pane

0xee3b,	// (0x0004083c) cell_fshwr2_syb_pane_ParamLimits

0xee3b,	// (0x0004083c) cell_fshwr2_syb_pane

0x7172,	// (0x00038b73) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7172,	// (0x00038b73) fshwr2_hwr_syb_pane_g1

0xe07a,	// (0x0003fa7b) bg_popup_call_pane_cp01

0x99f5,	// (0x0003b3f6) fshwr2_func_candi_cell_pane_ParamLimits

0x99f5,	// (0x0003b3f6) fshwr2_func_candi_cell_pane

0x9a27,	// (0x0003b428) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9a27,	// (0x0003b428) fshwr2_func_candi_cell_bg_pane

0x9a41,	// (0x0003b442) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9a41,	// (0x0003b442) fshwr2_func_candi_cell_pane_g1

0x9a61,	// (0x0003b462) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9a61,	// (0x0003b462) fshwr2_func_candi_cell_pane_t1

0xe07a,	// (0x0003fa7b) bg_button_pane_cp08

0x3980,	// (0x00035381) cell_fshwr2_syb_bg_pane

0xee54,	// (0x00040855) cell_fshwr2_syb_bg_pane_g1

0xee5c,	// (0x0004085d) cell_fshwr2_syb_bg_pane_t1

0x2ac4,	// (0x000344c5) main_tmo_pane

0xd431,	// (0x0003ee32) uni_indicator_pane_g1_ParamLimits

0xd446,	// (0x0003ee47) uni_indicator_pane_g2_ParamLimits

0xd45b,	// (0x0003ee5c) uni_indicator_pane_g3_ParamLimits

0xd471,	// (0x0003ee72) uni_indicator_pane_g4_ParamLimits

0xd471,	// (0x0003ee72) uni_indicator_pane_g4

0xd485,	// (0x0003ee86) uni_indicator_pane_g5_ParamLimits

0xd485,	// (0x0003ee86) uni_indicator_pane_g5

0xd499,	// (0x0003ee9a) uni_indicator_pane_g6_ParamLimits

0xd499,	// (0x0003ee9a) uni_indicator_pane_g6

0xf928,	// (0x00041329) uni_indicator_pane_g_ParamLimits

0xdf54,	// (0x0003f955) popup_tmo_note_window_ParamLimits

0xdf54,	// (0x0003f955) popup_tmo_note_window

0xe07a,	// (0x0003fa7b) fshwr2_bg_pane

0x9a52,	// (0x0003b453) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9a52,	// (0x0003b453) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebf,	// (0x000418c0) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebf,	// (0x000418c0) fshwr2_func_candi_cell_pane_g

0x6ee8,	// (0x000388e9) bg_popup_window_pane_cp01

0x9a8b,	// (0x0003b48c) bg_popup_window_pane_g1_cp01

0x9a94,	// (0x0003b495) bg_popup_window_pane_cp22_ParamLimits

0x9a94,	// (0x0003b495) bg_popup_window_pane_cp22

0x9aa2,	// (0x0003b4a3) listscroll_tmo_link_pane_ParamLimits

0x9aa2,	// (0x0003b4a3) listscroll_tmo_link_pane

0x9ae2,	// (0x0003b4e3) popup_tmo_note_window_g1_ParamLimits

0x9ae2,	// (0x0003b4e3) popup_tmo_note_window_g1

0x9aef,	// (0x0003b4f0) tmo_note_info_pane_ParamLimits

0x9aef,	// (0x0003b4f0) tmo_note_info_pane

0xee6b,	// (0x0004086c) list_tmo_note_info_pane_g1_ParamLimits

0xee6b,	// (0x0004086c) list_tmo_note_info_pane_g1

0x9b20,	// (0x0003b521) list_tmo_note_info_pane_g2_ParamLimits

0x9b20,	// (0x0003b521) list_tmo_note_info_pane_g2

0x0001,

0xfec4,	// (0x000418c5) list_tmo_note_info_pane_g_ParamLimits

0xfec4,	// (0x000418c5) list_tmo_note_info_pane_g

0x9b3c,	// (0x0003b53d) list_tmo_note_info_text_pane_ParamLimits

0x9b3c,	// (0x0003b53d) list_tmo_note_info_text_pane

0x9bc1,	// (0x0003b5c2) list_tmo_link_pane

0x9bce,	// (0x0003b5cf) scroll_pane_cp20

0x9bdb,	// (0x0003b5dc) list_single_tmo_link_pane_ParamLimits

0x9bdb,	// (0x0003b5dc) list_single_tmo_link_pane

0x9beb,	// (0x0003b5ec) list_single_tmo_link_pane_t1

0x9bf9,	// (0x0003b5fa) list_tmo_note_info_text_pane_t1_ParamLimits

0x9bf9,	// (0x0003b5fa) list_tmo_note_info_text_pane_t1

0xb885,	// (0x0003d286) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb885,	// (0x0003d286) aid_size_touch_scroll_bar_cp01

0xb7c7,	// (0x0003d1c8) aid_size_touch_slider_marker

0xaee3,	// (0x0003c8e4) popup_settings_window_ParamLimits

0xaee3,	// (0x0003c8e4) popup_settings_window

0x0aa2,	// (0x000324a3) popup_candi_list_indi_window

0x437b,	// (0x00035d7c) aid_touch_navi_pane_ParamLimits

0x1913,	// (0x00033314) rs_clock_indi_pane

0x191c,	// (0x0003331d) sctrl_sk_bottom_pane_ParamLimits

0x192d,	// (0x0003332e) sctrl_sk_top_pane_ParamLimits

0x1a2e,	// (0x0003342f) popup_fep_tooltip_window

0x94b5,	// (0x0003aeb6) aid_size_cell_widget_grid_ParamLimits

0xeb9c,	// (0x0004059d) cell_ai5_widget_pane_g1_ParamLimits

0xeb9c,	// (0x0004059d) cell_ai5_widget_pane_g1

0xebef,	// (0x000405f0) cell_ai5_widget_pane_g6_ParamLimits

0xebfb,	// (0x000405fc) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe42,	// (0x00041843) cell_ai5_widget_pane_g_ParamLimits

0xfe42,	// (0x00041843) cell_ai5_widget_pane_g

0xecff,	// (0x00040700) cell_ai5_widget_pane_t10_ParamLimits

0xecff,	// (0x00040700) cell_ai5_widget_pane_t10

0xed15,	// (0x00040716) grid_ai5_widget_pane_ParamLimits

0x972c,	// (0x0003b12d) cell_contacts_ai5_widget_pane_ParamLimits

0x972c,	// (0x0003b12d) cell_contacts_ai5_widget_pane

0x990c,	// (0x0003b30d) popup_discreet_window_t3_ParamLimits

0x990c,	// (0x0003b30d) popup_discreet_window_t3

0x999b,	// (0x0003b39c) popup_fshwr2_char_preview_window_ParamLimits

0x999b,	// (0x0003b39c) popup_fshwr2_char_preview_window

0xee82,	// (0x00040883) tmo_note_info_pane_t1

0xee97,	// (0x00040898) tmo_note_info_pane_t2

0xeeb0,	// (0x000408b1) tmo_note_info_pane_t3

0x9b9d,	// (0x0003b59e) tmo_note_info_pane_t4

0x9baf,	// (0x0003b5b0) tmo_note_info_pane_t5

0x0004,

0xfec9,	// (0x000418ca) tmo_note_info_pane_t

0x9bc1,	// (0x0003b5c2) list_tmo_link_pane_ParamLimits

0x9bce,	// (0x0003b5cf) scroll_pane_cp20_ParamLimits

0xe07a,	// (0x0003fa7b) bg_popup_fep_char_preview_window_cp01

0x9c12,	// (0x0003b613) popup_fshwr2_char_preview_window_t1

0x9c20,	// (0x0003b621) popup_candi_list_indi_window_g1

0x9c29,	// (0x0003b62a) bg_cell_contacts_ai5_widget_pane

0x9c35,	// (0x0003b636) cell_contacts_ai5_widget_pane_g1

0x9c49,	// (0x0003b64a) cell_contacts_ai5_widget_pane_g2

0x9c58,	// (0x0003b659) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed4,	// (0x000418d5) cell_contacts_ai5_widget_pane_g

0x9c6b,	// (0x0003b66c) cell_contacts_ai5_widget_pane_t1

0x2ac4,	// (0x000344c5) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf086,	// (0x00040a87) settings_container_pane

0x3980,	// (0x00035381) listscroll_set_pane_copy1

0x65ec,	// (0x00037fed) scroll_pane_cp121_copy1

0x9cf1,	// (0x0003b6f2) set_content_pane_copy1

0xf092,	// (0x00040a93) aid_height_set_list_copy1_ParamLimits

0xf092,	// (0x00040a93) aid_height_set_list_copy1

0x5c7b,	// (0x0003767c) aid_size_parent_copy1_ParamLimits

0x5c7b,	// (0x0003767c) aid_size_parent_copy1

0xf09e,	// (0x00040a9f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf09e,	// (0x00040a9f) button_value_adjust_pane_cp6_copy1

0x3d06,	// (0x00035707) list_highlight_pane_cp2_copy1_ParamLimits

0x3d06,	// (0x00035707) list_highlight_pane_cp2_copy1

0xf0b2,	// (0x00040ab3) list_set_pane_copy1_ParamLimits

0xf0b2,	// (0x00040ab3) list_set_pane_copy1

0xeec5,	// (0x000408c6) main_pane_set_t1_copy1_ParamLimits

0xeec5,	// (0x000408c6) main_pane_set_t1_copy1

0xf05b,	// (0x00040a5c) main_pane_set_t2_copy1_ParamLimits

0xf05b,	// (0x00040a5c) main_pane_set_t2_copy1

0xf179,	// (0x00040b7a) main_pane_set_t3_copy1

0xf187,	// (0x00040b88) main_pane_set_t4_copy1

0xf07a,	// (0x00040a7b) set_content_pane_g1_copy1_ParamLimits

0xf07a,	// (0x00040a7b) set_content_pane_g1_copy1

0xf195,	// (0x00040b96) setting_code_pane_copy1

0x9e06,	// (0x0003b807) setting_slider_graphic_pane_copy1

0x9e06,	// (0x0003b807) setting_slider_pane_copy1

0x9e06,	// (0x0003b807) setting_text_pane_copy1

0x9e10,	// (0x0003b811) setting_volume_pane_copy1

0xf19f,	// (0x00040ba0) settings_code_pane_cp2_copy1

0xf1a7,	// (0x00040ba8) settings_code_pane_cp_copy1_ParamLimits

0xf1a7,	// (0x00040ba8) settings_code_pane_cp_copy1

0xf1bb,	// (0x00040bbc) volume_set_pane_copy1

0xf1c7,	// (0x00040bc8) volume_set_pane_g10_copy1

0xf1d3,	// (0x00040bd4) volume_set_pane_g1_copy1

0xf1dd,	// (0x00040bde) volume_set_pane_g2_copy1

0xf1e7,	// (0x00040be8) volume_set_pane_g3_copy1

0xf1f1,	// (0x00040bf2) volume_set_pane_g4_copy1

0xf1fb,	// (0x00040bfc) volume_set_pane_g5_copy1

0xf205,	// (0x00040c06) volume_set_pane_g6_copy1

0xf20f,	// (0x00040c10) volume_set_pane_g7_copy1

0xf219,	// (0x00040c1a) volume_set_pane_g8_copy1

0xf223,	// (0x00040c24) volume_set_pane_g9_copy1

0x223d,	// (0x00033c3e) bg_set_opt_pane_cp_copy1_ParamLimits

0x223d,	// (0x00033c3e) bg_set_opt_pane_cp_copy1

0x9ea7,	// (0x0003b8a8) setting_slider_pane_t1_copy1_ParamLimits

0x9ea7,	// (0x0003b8a8) setting_slider_pane_t1_copy1

0xf22d,	// (0x00040c2e) setting_slider_pane_t2_copy1_ParamLimits

0xf22d,	// (0x00040c2e) setting_slider_pane_t2_copy1

0xf247,	// (0x00040c48) setting_slider_pane_t3_copy1_ParamLimits

0xf247,	// (0x00040c48) setting_slider_pane_t3_copy1

0xf25f,	// (0x00040c60) slider_set_pane_copy1_ParamLimits

0xf25f,	// (0x00040c60) slider_set_pane_copy1

0x2b2b,	// (0x0003452c) set_opt_bg_pane_g1_copy2

0x2b33,	// (0x00034534) set_opt_bg_pane_g2_copy2

0x9f0d,	// (0x0003b90e) set_opt_bg_pane_g3_copy2

0x2b43,	// (0x00034544) set_opt_bg_pane_g4_copy2

0x2b4b,	// (0x0003454c) set_opt_bg_pane_g5_copy2

0x2b53,	// (0x00034554) set_opt_bg_pane_g6_copy2

0xf275,	// (0x00040c76) set_opt_bg_pane_g7_copy2

0x9f21,	// (0x0003b922) set_opt_bg_pane_g8_copy2

0x9f2b,	// (0x0003b92c) set_opt_bg_pane_g9_copy2

0x9f35,	// (0x0003b936) aid_size_touch_slider_mark_copy1_ParamLimits

0x9f35,	// (0x0003b936) aid_size_touch_slider_mark_copy1

0x9f49,	// (0x0003b94a) slider_set_pane_g1_copy1

0x9f52,	// (0x0003b953) slider_set_pane_g2_copy1

0x6920,	// (0x00038321) slider_set_pane_g3_copy1_ParamLimits

0x6920,	// (0x00038321) slider_set_pane_g3_copy1

0x6934,	// (0x00038335) slider_set_pane_g4_copy1_ParamLimits

0x6934,	// (0x00038335) slider_set_pane_g4_copy1

0x694c,	// (0x0003834d) slider_set_pane_g5_copy1_ParamLimits

0x694c,	// (0x0003834d) slider_set_pane_g5_copy1

0x6920,	// (0x00038321) slider_set_pane_g6_copy1_ParamLimits

0x6920,	// (0x00038321) slider_set_pane_g6_copy1

0xf27f,	// (0x00040c80) slider_set_pane_g7_copy1_ParamLimits

0xf27f,	// (0x00040c80) slider_set_pane_g7_copy1

0xe08e,	// (0x0003fa8f) bg_set_opt_pane_cp2_copy1

0x9f70,	// (0x0003b971) setting_slider_graphic_pane_g1_copy1

0xf295,	// (0x00040c96) setting_slider_graphic_pane_t1_copy1

0xf2a5,	// (0x00040ca6) setting_slider_graphic_pane_t2_copy1

0xf2b5,	// (0x00040cb6) slider_set_pane_cp_copy1

0x9fa9,	// (0x0003b9aa) input_focus_pane_cp1_copy1

0x9fb2,	// (0x0003b9b3) list_set_text_pane_copy1

0x9fba,	// (0x0003b9bb) setting_text_pane_g1_copy1

0x2fd2,	// (0x000349d3) set_text_pane_t1_copy1

0x9fa9,	// (0x0003b9aa) input_focus_pane_cp2_copy1

0x9fba,	// (0x0003b9bb) setting_code_pane_g1_copy1

0xf2bd,	// (0x00040cbe) setting_code_pane_t1_copy1

0xf2cb,	// (0x00040ccc) list_set_graphic_pane_copy1

0xe08e,	// (0x0003fa8f) bg_set_opt_pane_cp4_copy1

0xc5c4,	// (0x0003dfc5) list_set_graphic_pane_g1_copy1_ParamLimits

0xc5c4,	// (0x0003dfc5) list_set_graphic_pane_g1_copy1

0xf2dd,	// (0x00040cde) list_set_graphic_pane_g2_copy1

0xc5dc,	// (0x0003dfdd) list_set_graphic_pane_t1_copy1_ParamLimits

0xc5dc,	// (0x0003dfdd) list_set_graphic_pane_t1_copy1

0x6ee8,	// (0x000388e9) rs_clock_indi_pane_g1

0x9feb,	// (0x0003b9ec) rs_clock_indi_pane_t1

0x9ff9,	// (0x0003b9fa) rs_indi_pane

0xa001,	// (0x0003ba02) rs_indi_pane_g1

0xa00a,	// (0x0003ba0b) rs_indi_pane_g2

0xa013,	// (0x0003ba14) rs_indi_pane_g3

0x0002,

0xfedb,	// (0x000418dc) rs_indi_pane_g

0x3980,	// (0x00035381) bg_popup_preview_window_pane_cp03

0xa01c,	// (0x0003ba1d) popup_fep_tooltip_window_t1

0x7b8e,	// (0x0003958f) popup_note2_window_g2_ParamLimits

0x7b8e,	// (0x0003958f) popup_note2_window_g2

0x0001,

0xfc74,	// (0x00041675) popup_note2_window_g_ParamLimits

0xfc74,	// (0x00041675) popup_note2_window_g

0x8096,	// (0x00039a97) bg_popup_sub_pane_cp11_ParamLimits

0x80a3,	// (0x00039aa4) cell_ai3_links_pane_g1_ParamLimits

0x80ba,	// (0x00039abb) cell_ai3_links_pane_t1

0x2fd2,	// (0x000349d3) set_text_pane_t1_copy1_ParamLimits

0x388d,	// (0x0003528e) cell_graphic_popup_pane_cp2_ParamLimits

0x388d,	// (0x0003528e) cell_graphic_popup_pane_cp2

0xa02a,	// (0x0003ba2b) cell_graphic_popup_pane_g1_cp2

0x280f,	// (0x00034210) cell_graphic_popup_pane_g2_cp2

0xa032,	// (0x0003ba33) cell_graphic_popup_pane_g3_cp2

0xa03a,	// (0x0003ba3b) cell_graphic_popup_pane_t2_cp2

0x2820,	// (0x00034221) grid_highlight_pane_cp3_cp2

0x30d5,	// (0x00034ad6) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2ac4,	// (0x000344c5) main_tmo_pane_ParamLimits

0xdf48,	// (0x0003f949) popup_tmo_big_image_note_window

0xeb8c,	// (0x0004058d) cell_ai5_widget_list_pane

0xeb94,	// (0x00040595) cell_ai5_widget_lrg_icon_pane

0xee82,	// (0x00040883) tmo_note_info_pane_t1_ParamLimits

0xee97,	// (0x00040898) tmo_note_info_pane_t2_ParamLimits

0xeeb0,	// (0x000408b1) tmo_note_info_pane_t3_ParamLimits

0x9b9d,	// (0x0003b59e) tmo_note_info_pane_t4_ParamLimits

0x9baf,	// (0x0003b5b0) tmo_note_info_pane_t5_ParamLimits

0xfec9,	// (0x000418ca) tmo_note_info_pane_t_ParamLimits

0xf086,	// (0x00040a87) settings_container_pane_ParamLimits

0x9fa1,	// (0x0003b9a2) indicator_popup_pane_cp5

0x9fa1,	// (0x0003b9a2) indicator_popup_pane_cp6

0xf2cb,	// (0x00040ccc) list_set_graphic_pane_copy1_ParamLimits

0xe07a,	// (0x0003fa7b) bg_popup_window_pane_cp23

0xa048,	// (0x0003ba49) popup_tmo_big_image_note_window_g1

0xa054,	// (0x0003ba55) popup_tmo_big_image_note_window_t1

0xa064,	// (0x0003ba65) popup_tmo_big_image_note_window_t2

0xa074,	// (0x0003ba75) popup_tmo_big_image_note_window_t3

0x0002,

0xfee2,	// (0x000418e3) popup_tmo_big_image_note_window_t

0xf2e5,	// (0x00040ce6) cell_ai5_widget_lrg_icon_pane_g1

0xf2ed,	// (0x00040cee) cell_ai5_widget_lrg_icon_pane_t1

0xf2fb,	// (0x00040cfc) cell_ai5_widget_list_row_pane_ParamLimits

0xf2fb,	// (0x00040cfc) cell_ai5_widget_list_row_pane

0xf314,	// (0x00040d15) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf314,	// (0x00040d15) cell_ai5_widget_list_row_pane_g1

0xf321,	// (0x00040d22) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf321,	// (0x00040d22) cell_ai5_widget_list_row_pane_t1

0xf339,	// (0x00040d3a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf339,	// (0x00040d3a) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee9,	// (0x000418ea) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee9,	// (0x000418ea) cell_ai5_widget_list_row_pane_t

0xf354,	// (0x00040d55) main_fep_vtchi_ss_pane

0xa0ea,	// (0x0003baeb) popup_fep_char_pre_window

0xa0f2,	// (0x0003baf3) popup_fep_ituss_window

0xa113,	// (0x0003bb14) popup_fep_vkbss_window

0xa134,	// (0x0003bb35) grid_vkbss_keypad_pane_ParamLimits

0xa134,	// (0x0003bb35) grid_vkbss_keypad_pane

0xa144,	// (0x0003bb45) ituss_keypad_pane

0xa15c,	// (0x0003bb5d) aid_vkbss_key_offset_ParamLimits

0xa15c,	// (0x0003bb5d) aid_vkbss_key_offset

0xa168,	// (0x0003bb69) cell_vkbss_key_pane_ParamLimits

0xa168,	// (0x0003bb69) cell_vkbss_key_pane

0xa17e,	// (0x0003bb7f) bg_cell_vkbss_key_g1_ParamLimits

0xa17e,	// (0x0003bb7f) bg_cell_vkbss_key_g1

0xa18a,	// (0x0003bb8b) cell_vkbss_key_3p_pane_ParamLimits

0xa18a,	// (0x0003bb8b) cell_vkbss_key_3p_pane

0xa1a4,	// (0x0003bba5) cell_vkbss_key_g1_ParamLimits

0xa1a4,	// (0x0003bba5) cell_vkbss_key_g1

0xa1be,	// (0x0003bbbf) cell_vkbss_key_t1_ParamLimits

0xa1be,	// (0x0003bbbf) cell_vkbss_key_t1

0xa1e9,	// (0x0003bbea) cell_ituss_key_pane_ParamLimits

0xa1e9,	// (0x0003bbea) cell_ituss_key_pane

0xa1f9,	// (0x0003bbfa) bg_cell_ituss_key_g1_ParamLimits

0xa1f9,	// (0x0003bbfa) bg_cell_ituss_key_g1

0xa205,	// (0x0003bc06) cell_ituss_key_pane_g1_ParamLimits

0xa205,	// (0x0003bc06) cell_ituss_key_pane_g1

0xa211,	// (0x0003bc12) cell_ituss_key_pane_g2_ParamLimits

0xa211,	// (0x0003bc12) cell_ituss_key_pane_g2

0x0001,

0xfeee,	// (0x000418ef) cell_ituss_key_pane_g_ParamLimits

0xfeee,	// (0x000418ef) cell_ituss_key_pane_g

0xa22a,	// (0x0003bc2b) cell_ituss_key_t1_ParamLimits

0xa22a,	// (0x0003bc2b) cell_ituss_key_t1

0xa258,	// (0x0003bc59) cell_ituss_key_t2_ParamLimits

0xa258,	// (0x0003bc59) cell_ituss_key_t2

0xa289,	// (0x0003bc8a) cell_ituss_key_t3_ParamLimits

0xa289,	// (0x0003bc8a) cell_ituss_key_t3

0xa2ba,	// (0x0003bcbb) cell_ituss_key_t4_ParamLimits

0xa2ba,	// (0x0003bcbb) cell_ituss_key_t4

0x0003,

0xfef3,	// (0x000418f4) cell_ituss_key_t_ParamLimits

0xfef3,	// (0x000418f4) cell_ituss_key_t

0xa2eb,	// (0x0003bcec) cell_vkbss_key_3p_pane_g1

0xa2f3,	// (0x0003bcf4) cell_vkbss_key_3p_pane_g2

0xa2fb,	// (0x0003bcfc) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefc,	// (0x000418fd) cell_vkbss_key_3p_pane_g

0xe07a,	// (0x0003fa7b) bg_popup_fep_char_preview_window_cp02

0xa303,	// (0x0003bd04) popup_fep_char_pre_window_t1

0xeb82,	// (0x00040583) main_ai5_sk_pane

0x9c29,	// (0x0003b62a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9c35,	// (0x0003b636) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9c49,	// (0x0003b64a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9c58,	// (0x0003b659) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed4,	// (0x000418d5) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9c6b,	// (0x0003b66c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2ac4,	// (0x000344c5) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf34b,	// (0x00040d4c) main_ai5_sk_pane_g1

0x4d20,	// (0x00036721) popup_query_code_window_g1

0xa108,	// (0x0003bb09) popup_fep_vkb_icf_pane

0xa11e,	// (0x0003bb1f) popup_fep_vtchi_icf_pane

0x2ac4,	// (0x000344c5) bg_icf_pane

0xa32a,	// (0x0003bd2b) list_vkb_icf_pane

0x2ac4,	// (0x000344c5) bg_icf_pane_cp01

0xa342,	// (0x0003bd43) vtchi_icf_list_pane

0xa352,	// (0x0003bd53) list_vkb_icf_pane_t1_ParamLimits

0xa352,	// (0x0003bd53) list_vkb_icf_pane_t1

0xa369,	// (0x0003bd6a) vtchi_icf_list_pane_t1_ParamLimits

0xa369,	// (0x0003bd6a) vtchi_icf_list_pane_t1

0xa0f2,	// (0x0003baf3) popup_fep_ituss_window_ParamLimits

0xa11e,	// (0x0003bb1f) popup_fep_vtchi_icf_pane_ParamLimits

0xa144,	// (0x0003bb45) ituss_keypad_pane_ParamLimits

0xa153,	// (0x0003bb54) ituss_sks_pane

0x2ac4,	// (0x000344c5) bg_icf_pane_ParamLimits

0xa31b,	// (0x0003bd1c) icf_edit_indi_pane_ParamLimits

0xa31b,	// (0x0003bd1c) icf_edit_indi_pane

0xa32a,	// (0x0003bd2b) list_vkb_icf_pane_ParamLimits

0x2ac4,	// (0x000344c5) bg_icf_pane_cp01_ParamLimits

0xa336,	// (0x0003bd37) icf_edit_indi_pane_cp01_ParamLimits

0xa336,	// (0x0003bd37) icf_edit_indi_pane_cp01

0xa34a,	// (0x0003bd4b) vtchi_query_pane

0x7172,	// (0x00038b73) icf_edit_indi_pane_g1_ParamLimits

0x7172,	// (0x00038b73) icf_edit_indi_pane_g1

0xa382,	// (0x0003bd83) icf_edit_indi_pane_g2_ParamLimits

0xa382,	// (0x0003bd83) icf_edit_indi_pane_g2

0x0001,

0xff03,	// (0x00041904) icf_edit_indi_pane_g_ParamLimits

0xff03,	// (0x00041904) icf_edit_indi_pane_g

0xa38e,	// (0x0003bd8f) icf_edit_indi_pane_t1

0xa39c,	// (0x0003bd9d) bg_input_focus_pane_cp042

0x29f3,	// (0x000343f4) vtchi_button_pane

0xa3a5,	// (0x0003bda6) vtchi_query_pane_t1

0xa3b3,	// (0x0003bdb4) vtchi_query_pane_t2

0xa3c1,	// (0x0003bdc2) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x00041909) vtchi_query_pane_t

0xe07a,	// (0x0003fa7b) bg_button_pane_cp13

0xa3cf,	// (0x0003bdd0) vtchi_button_pane_g1

0x8926,	// (0x0003a327) ituss_sks_pane_g1

0xa3d7,	// (0x0003bdd8) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x00041910) ituss_sks_pane_g

0xa3e0,	// (0x0003bde1) ituss_sks_pane_t1

0xa3ee,	// (0x0003bdef) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x00041915) ituss_sks_pane_t

0x698f,	// (0x00038390) indicator_nsta_pane_cp_g1

0x6998,	// (0x00038399) indicator_nsta_pane_cp_g2

0x69a0,	// (0x000383a1) indicator_nsta_pane_cp_g3

0x69a8,	// (0x000383a9) indicator_nsta_pane_cp_g4

0x69b0,	// (0x000383b1) indicator_nsta_pane_cp_g5

0x69b8,	// (0x000383b9) indicator_nsta_pane_cp_g6

0x0005,

0xfab2,	// (0x000414b3) indicator_nsta_pane_cp_g

0xe9a1,	// (0x000403a2) cell_graphic2_pane_t2_ParamLimits

0xe9a1,	// (0x000403a2) cell_graphic2_pane_t2

0x0001,

0xfdcb,	// (0x000417cc) cell_graphic2_pane_t_ParamLimits

0xfdcb,	// (0x000417cc) cell_graphic2_pane_t

0xe9d7,	// (0x000403d8) cell_graphic2_control_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small

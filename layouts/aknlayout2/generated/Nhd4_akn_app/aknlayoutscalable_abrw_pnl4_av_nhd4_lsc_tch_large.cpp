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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00047b83 };

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
0x8506,	// (0x00050089) Screen

0x8512,	// (0x00050095) application_window_ParamLimits

0x8512,	// (0x00050095) application_window

0x8e85,	// (0x00050a08) screen_g1

0x70da,	// (0x0004ec5d) area_bottom_pane_ParamLimits

0x70da,	// (0x0004ec5d) area_bottom_pane

0x0633,	// (0x000481b6) area_top_pane_ParamLimits

0x0633,	// (0x000481b6) area_top_pane

0x06d1,	// (0x00048254) main_pane_ParamLimits

0x06d1,	// (0x00048254) main_pane

0x8e8f,	// (0x00050a12) misc_graphics

0x9547,	// (0x000510ca) battery_pane_ParamLimits

0x9547,	// (0x000510ca) battery_pane

0xc8b4,	// (0x00054437) bg_status_flat_pane_g8

0xc8bc,	// (0x0005443f) bg_status_flat_pane_g9

0xc03c,	// (0x00053bbf) context_pane_ParamLimits

0xc03c,	// (0x00053bbf) context_pane

0x96b2,	// (0x00051235) navi_pane_ParamLimits

0x96b2,	// (0x00051235) navi_pane

0x9730,	// (0x000512b3) signal_pane_ParamLimits

0x9730,	// (0x000512b3) signal_pane

0x0008,

0xf87a,	// (0x000573fd) bg_status_flat_pane_g

0x97c0,	// (0x00051343) status_pane_g1_ParamLimits

0x97c0,	// (0x00051343) status_pane_g1

0x97d6,	// (0x00051359) status_pane_g2_ParamLimits

0x97d6,	// (0x00051359) status_pane_g2

0xc0a1,	// (0x00053c24) status_pane_g3_ParamLimits

0xc0a1,	// (0x00053c24) status_pane_g3

0x0004,

0xf7a6,	// (0x00057329) status_pane_g_ParamLimits

0xf7a6,	// (0x00057329) status_pane_g

0x97e2,	// (0x00051365) title_pane_ParamLimits

0x97e2,	// (0x00051365) title_pane

0x9845,	// (0x000513c8) uni_indicator_pane_ParamLimits

0x9845,	// (0x000513c8) uni_indicator_pane

0xbf65,	// (0x00053ae8) bg_list_pane_ParamLimits

0xbf65,	// (0x00053ae8) bg_list_pane

0xbf85,	// (0x00053b08) find_pane

0x77eb,	// (0x0004f36e) listscroll_app_pane_ParamLimits

0x77eb,	// (0x0004f36e) listscroll_app_pane

0xbf8d,	// (0x00053b10) listscroll_form_pane

0x1337,	// (0x00048eba) listscroll_gen_pane_ParamLimits

0x1337,	// (0x00048eba) listscroll_gen_pane

0x134b,	// (0x00048ece) listscroll_set_pane

0xbfa7,	// (0x00053b2a) main_idle_act_pane

0xbd49,	// (0x000538cc) main_idle_trad_pane

0xbd49,	// (0x000538cc) main_list_empty_pane

0xb20b,	// (0x00052d8e) main_midp_pane

0xbfb9,	// (0x00053b3c) main_pane_g1_ParamLimits

0xbfb9,	// (0x00053b3c) main_pane_g1

0x77fb,	// (0x0004f37e) popup_ai_message_window_ParamLimits

0x77fb,	// (0x0004f37e) popup_ai_message_window

0x788c,	// (0x0004f40f) popup_fep_china_uni_window_ParamLimits

0x788c,	// (0x0004f40f) popup_fep_china_uni_window

0x145f,	// (0x00048fe2) popup_fep_japan_candidate_window_ParamLimits

0x145f,	// (0x00048fe2) popup_fep_japan_candidate_window

0x147d,	// (0x00049000) popup_fep_japan_predictive_window_ParamLimits

0x147d,	// (0x00049000) popup_fep_japan_predictive_window

0x78e6,	// (0x0004f469) popup_find_window

0x7903,	// (0x0004f486) popup_grid_graphic_window_ParamLimits

0x7903,	// (0x0004f486) popup_grid_graphic_window

0x14e2,	// (0x00049065) popup_large_graphic_colour_window

0x799b,	// (0x0004f51e) popup_menu_window_ParamLimits

0x799b,	// (0x0004f51e) popup_menu_window

0x7b67,	// (0x0004f6ea) popup_note_image_window

0x7b2d,	// (0x0004f6b0) popup_note_wait_window_ParamLimits

0x7b2d,	// (0x0004f6b0) popup_note_wait_window

0x7b7f,	// (0x0004f702) popup_note_window_ParamLimits

0x7b7f,	// (0x0004f702) popup_note_window

0x7c25,	// (0x0004f7a8) popup_query_code_window_ParamLimits

0x7c25,	// (0x0004f7a8) popup_query_code_window

0x172c,	// (0x000492af) popup_query_data_code_window_ParamLimits

0x172c,	// (0x000492af) popup_query_data_code_window

0x7c5f,	// (0x0004f7e2) popup_query_data_window_ParamLimits

0x7c5f,	// (0x0004f7e2) popup_query_data_window

0x7cdb,	// (0x0004f85e) popup_query_sat_info_window_ParamLimits

0x7cdb,	// (0x0004f85e) popup_query_sat_info_window

0x7d72,	// (0x0004f8f5) popup_snote_single_graphic_window_ParamLimits

0x7d72,	// (0x0004f8f5) popup_snote_single_graphic_window

0x7d72,	// (0x0004f8f5) popup_snote_single_text_window_ParamLimits

0x7d72,	// (0x0004f8f5) popup_snote_single_text_window

0x17af,	// (0x00049332) popup_sub_window_general

0x18dd,	// (0x00049460) popup_window_general_ParamLimits

0x18dd,	// (0x00049460) popup_window_general

0xbfc7,	// (0x00053b4a) power_save_pane

0x767a,	// (0x0004f1fd) control_pane_g1_ParamLimits

0x767a,	// (0x0004f1fd) control_pane_g1

0x76a3,	// (0x0004f226) control_pane_g2_ParamLimits

0x76a3,	// (0x0004f226) control_pane_g2

0xbf4f,	// (0x00053ad2) control_pane_g3_ParamLimits

0xbf4f,	// (0x00053ad2) control_pane_g3

0x0007,

0xf78e,	// (0x00057311) control_pane_g_ParamLimits

0xf78e,	// (0x00057311) control_pane_g

0x76e4,	// (0x0004f267) control_pane_t1_ParamLimits

0x76e4,	// (0x0004f267) control_pane_t1

0x7742,	// (0x0004f2c5) control_pane_t2_ParamLimits

0x7742,	// (0x0004f2c5) control_pane_t2

0x0002,

0xf79f,	// (0x00057322) control_pane_t_ParamLimits

0xf79f,	// (0x00057322) control_pane_t

0xbe70,	// (0x000539f3) navi_navi_volume_pane_cp1

0xbe79,	// (0x000539fc) status_small_icon_pane

0xbe81,	// (0x00053a04) status_small_pane_g1_ParamLimits

0xbe81,	// (0x00053a04) status_small_pane_g1

0xbeb5,	// (0x00053a38) status_small_pane_g2_ParamLimits

0xbeb5,	// (0x00053a38) status_small_pane_g2

0xbec1,	// (0x00053a44) status_small_pane_g3_ParamLimits

0xbec1,	// (0x00053a44) status_small_pane_g3

0xbecd,	// (0x00053a50) status_small_pane_g4_ParamLimits

0xbecd,	// (0x00053a50) status_small_pane_g4

0xbed9,	// (0x00053a5c) status_small_pane_g5_ParamLimits

0xbed9,	// (0x00053a5c) status_small_pane_g5

0xbee8,	// (0x00053a6b) status_small_pane_g6_ParamLimits

0xbee8,	// (0x00053a6b) status_small_pane_g6

0x0007,

0xf77d,	// (0x00057300) status_small_pane_g_ParamLimits

0xf77d,	// (0x00057300) status_small_pane_g

0xbf18,	// (0x00053a9b) status_small_pane_t1

0xbf3b,	// (0x00053abe) status_small_wait_pane_ParamLimits

0xbf3b,	// (0x00053abe) status_small_wait_pane

0x8b08,	// (0x0005068b) aid_levels_signal_ParamLimits

0x8b08,	// (0x0005068b) aid_levels_signal

0x8b20,	// (0x000506a3) signal_pane_g1_ParamLimits

0x8b20,	// (0x000506a3) signal_pane_g1

0x8b3b,	// (0x000506be) signal_pane_g2_ParamLimits

0x8b3b,	// (0x000506be) signal_pane_g2

0x0003,

0xf70e,	// (0x00057291) signal_pane_g_ParamLimits

0xf70e,	// (0x00057291) signal_pane_g

0xb88f,	// (0x00053412) context_pane_g1

0x8522,	// (0x000500a5) title_pane_g1

0x8559,	// (0x000500dc) title_pane_t1

0x8ea5,	// (0x00050a28) title_pane_t2

0x8ecb,	// (0x00050a4e) title_pane_t3

0x0002,

0xf55d,	// (0x000570e0) title_pane_t

0x986d,	// (0x000513f0) aid_levels_battery_ParamLimits

0x986d,	// (0x000513f0) aid_levels_battery

0x9889,	// (0x0005140c) battery_pane_g1_ParamLimits

0x9889,	// (0x0005140c) battery_pane_g1

0x98a6,	// (0x00051429) battery_pane_g2_ParamLimits

0x98a6,	// (0x00051429) battery_pane_g2

0x0001,

0xf7b1,	// (0x00057334) battery_pane_g_ParamLimits

0xf7b1,	// (0x00057334) battery_pane_g

0x9b74,	// (0x000516f7) uni_indicator_pane_g1

0x9b8b,	// (0x0005170e) uni_indicator_pane_g2

0x9ba1,	// (0x00051724) uni_indicator_pane_g3

0x0005,

0xf922,	// (0x000574a5) uni_indicator_pane_g

0xbbc7,	// (0x0005374a) navi_icon_pane_ParamLimits

0xbbc7,	// (0x0005374a) navi_icon_pane

0xbb10,	// (0x00053693) navi_midp_pane

0xbbe3,	// (0x00053766) navi_navi_pane

0xbbed,	// (0x00053770) navi_text_pane_ParamLimits

0xbbed,	// (0x00053770) navi_text_pane

0x8e85,	// (0x00050a08) status_small_wait_pane_g1

0x9260,	// (0x00050de3) status_small_wait_pane_g2

0x0001,

0xf91d,	// (0x000574a0) status_small_wait_pane_g

0xce90,	// (0x00054a13) navi_navi_icon_text_pane

0xce98,	// (0x00054a1b) navi_navi_pane_g1_ParamLimits

0xce98,	// (0x00054a1b) navi_navi_pane_g1

0xceaa,	// (0x00054a2d) navi_navi_pane_g2_ParamLimits

0xceaa,	// (0x00054a2d) navi_navi_pane_g2

0x0001,

0xf8eb,	// (0x0005746e) navi_navi_pane_g_ParamLimits

0xf8eb,	// (0x0005746e) navi_navi_pane_g

0xcebc,	// (0x00054a3f) navi_navi_tabs_pane

0xcec5,	// (0x00054a48) navi_navi_text_pane

0xce90,	// (0x00054a13) navi_navi_volume_pane

0xce4d,	// (0x000549d0) navi_text_pane_t1

0xce41,	// (0x000549c4) navi_icon_pane_g1

0xcd94,	// (0x00054917) navi_navi_text_pane_t1

0x1b81,	// (0x00049704) navi_navi_volume_pane_g1

0x7fe9,	// (0x0004fb6c) volume_small_pane

0x9ab1,	// (0x00051634) navi_navi_icon_text_pane_g1

0xcd7a,	// (0x000548fd) navi_navi_icon_text_pane_t1

0xbbe3,	// (0x00053766) navi_tabs_2_long_pane

0xbbe3,	// (0x00053766) navi_tabs_2_pane

0xbbe3,	// (0x00053766) navi_tabs_3_long_pane

0xbbe3,	// (0x00053766) navi_tabs_3_pane

0xbbe3,	// (0x00053766) navi_tabs_4_pane

0x7fc9,	// (0x0004fb4c) tabs_2_active_pane_ParamLimits

0x7fc9,	// (0x0004fb4c) tabs_2_active_pane

0x7fd9,	// (0x0004fb5c) tabs_2_passive_pane_ParamLimits

0x7fd9,	// (0x0004fb5c) tabs_2_passive_pane

0x7f97,	// (0x0004fb1a) tabs_3_active_pane_ParamLimits

0x7f97,	// (0x0004fb1a) tabs_3_active_pane

0x7fa7,	// (0x0004fb2a) tabs_3_passive_pane_ParamLimits

0x7fa7,	// (0x0004fb2a) tabs_3_passive_pane

0x7fb8,	// (0x0004fb3b) tabs_3_passive_pane_cp_ParamLimits

0x7fb8,	// (0x0004fb3b) tabs_3_passive_pane_cp

0x7f64,	// (0x0004fae7) tabs_4_active_pane_ParamLimits

0x7f64,	// (0x0004fae7) tabs_4_active_pane

0x7f75,	// (0x0004faf8) tabs_4_passive_pane_ParamLimits

0x7f75,	// (0x0004faf8) tabs_4_passive_pane

0x1b0d,	// (0x00049690) tabs_4_passive_pane_cp_ParamLimits

0x1b0d,	// (0x00049690) tabs_4_passive_pane_cp

0x7f86,	// (0x0004fb09) tabs_4_passive_pane_cp2_ParamLimits

0x7f86,	// (0x0004fb09) tabs_4_passive_pane_cp2

0x7f40,	// (0x0004fac3) tabs_2_long_active_pane_ParamLimits

0x7f40,	// (0x0004fac3) tabs_2_long_active_pane

0x7f52,	// (0x0004fad5) tabs_2_long_passive_pane_ParamLimits

0x7f52,	// (0x0004fad5) tabs_2_long_passive_pane

0x7f01,	// (0x0004fa84) tabs_3_long_active_pane_ParamLimits

0x7f01,	// (0x0004fa84) tabs_3_long_active_pane

0x7f14,	// (0x0004fa97) tabs_3_long_passive_pane_ParamLimits

0x7f14,	// (0x0004fa97) tabs_3_long_passive_pane

0x7f2d,	// (0x0004fab0) tabs_3_long_passive_pane_cp_ParamLimits

0x7f2d,	// (0x0004fab0) tabs_3_long_passive_pane_cp

0x1a34,	// (0x000495b7) volume_small_pane_g1

0x1a3d,	// (0x000495c0) volume_small_pane_g2

0x1a46,	// (0x000495c9) volume_small_pane_g3

0x1a4f,	// (0x000495d2) volume_small_pane_g4

0x1a58,	// (0x000495db) volume_small_pane_g5

0x1a61,	// (0x000495e4) volume_small_pane_g6

0x1a6a,	// (0x000495ed) volume_small_pane_g7

0x1a73,	// (0x000495f6) volume_small_pane_g8

0x1a7c,	// (0x000495ff) volume_small_pane_g9

0x1a85,	// (0x00049608) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x0005743a) volume_small_pane_g

0x8edd,	// (0x00050a60) bg_active_tab_pane_cp2_ParamLimits

0x8edd,	// (0x00050a60) bg_active_tab_pane_cp2

0x8eeb,	// (0x00050a6e) tabs_3_active_pane_g1

0x85e5,	// (0x00050168) tabs_3_active_pane_t1

0x8edd,	// (0x00050a60) bg_passive_tab_pane_cp2_ParamLimits

0x8edd,	// (0x00050a60) bg_passive_tab_pane_cp2

0x8eeb,	// (0x00050a6e) tabs_3_passive_pane_g1

0x85e5,	// (0x00050168) tabs_3_passive_pane_t1

0x8edd,	// (0x00050a60) bg_active_tab_pane_cp3_ParamLimits

0x8edd,	// (0x00050a60) bg_active_tab_pane_cp3

0x8ef3,	// (0x00050a76) tabs_4_active_pane_g1

0x85f7,	// (0x0005017a) tabs_4_active_pane_t1

0x8edd,	// (0x00050a60) bg_passive_tab_pane_cp3_ParamLimits

0x8edd,	// (0x00050a60) bg_passive_tab_pane_cp3

0x8ef3,	// (0x00050a76) tabs_4_1_passive_pane_g1

0x85f7,	// (0x0005017a) tabs_4_1_passive_pane_t1

0xb20b,	// (0x00052d8e) list_highlight_pane_cp2

0x9c2a,	// (0x000517ad) list_set_pane_ParamLimits

0x9c2a,	// (0x000517ad) list_set_pane

0x9cc4,	// (0x00051847) main_pane_set_t1_ParamLimits

0x9cc4,	// (0x00051847) main_pane_set_t1

0x9ce4,	// (0x00051867) main_pane_set_t2_ParamLimits

0x9ce4,	// (0x00051867) main_pane_set_t2

0x9cf8,	// (0x0005187b) main_pane_set_t3_ParamLimits

0x9cf8,	// (0x0005187b) main_pane_set_t3

0x9d0a,	// (0x0005188d) main_pane_set_t4_ParamLimits

0x9d0a,	// (0x0005188d) main_pane_set_t4

0x0003,

0xf987,	// (0x0005750a) main_pane_set_t_ParamLimits

0xf987,	// (0x0005750a) main_pane_set_t

0x9d1c,	// (0x0005189f) setting_code_pane

0x9d24,	// (0x000518a7) setting_slider_graphic_pane

0x9d24,	// (0x000518a7) setting_slider_pane

0x9d24,	// (0x000518a7) setting_text_pane

0x9d24,	// (0x000518a7) setting_volume_pane

0x0912,	// (0x00048495) volume_set_pane

0x8efb,	// (0x00050a7e) bg_set_opt_pane_cp

0x091a,	// (0x0004849d) setting_slider_pane_t1

0x0933,	// (0x000484b6) setting_slider_pane_t2

0x094d,	// (0x000484d0) setting_slider_pane_t3

0x0002,

0xf564,	// (0x000570e7) setting_slider_pane_t

0x0965,	// (0x000484e8) slider_set_pane

0x8e8f,	// (0x00050a12) bg_set_opt_pane_cp2

0x8f09,	// (0x00050a8c) setting_slider_graphic_pane_g1

0x097b,	// (0x000484fe) setting_slider_graphic_pane_t1

0x098b,	// (0x0004850e) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x000570ee) setting_slider_graphic_pane_t

0x099b,	// (0x0004851e) slider_set_pane_cp

0x8e8f,	// (0x00050a12) input_focus_pane_cp1

0xd2f5,	// (0x00054e78) list_set_text_pane

0x8e85,	// (0x00050a08) setting_text_pane_g1

0x8e8f,	// (0x00050a12) input_focus_pane_cp2

0x8e85,	// (0x00050a08) setting_code_pane_g1

0x8f12,	// (0x00050a95) setting_code_pane_t1

0x09a3,	// (0x00048526) set_text_pane_t1_ParamLimits

0x09a3,	// (0x00048526) set_text_pane_t1

0xb101,	// (0x00052c84) set_opt_bg_pane_g1

0xb109,	// (0x00052c8c) set_opt_bg_pane_g2

0xd2d5,	// (0x00054e58) set_opt_bg_pane_g3

0xb119,	// (0x00052c9c) set_opt_bg_pane_g4

0xb121,	// (0x00052ca4) set_opt_bg_pane_g5

0xb129,	// (0x00052cac) set_opt_bg_pane_g6

0xd2dd,	// (0x00054e60) set_opt_bg_pane_g7

0xd2e5,	// (0x00054e68) set_opt_bg_pane_g8

0xd2ed,	// (0x00054e70) set_opt_bg_pane_g9

0x0008,

0xf974,	// (0x000574f7) set_opt_bg_pane_g

0xd2c8,	// (0x00054e4b) slider_set_pane_g1

0x1bf6,	// (0x00049779) slider_set_pane_g2

0x0006,

0xf965,	// (0x000574e8) slider_set_pane_g

0x1b92,	// (0x00049715) volume_set_pane_g1

0x1b9a,	// (0x0004971d) volume_set_pane_g2

0x1ba2,	// (0x00049725) volume_set_pane_g3

0x1baa,	// (0x0004972d) volume_set_pane_g4

0x1bb2,	// (0x00049735) volume_set_pane_g5

0x1bba,	// (0x0004973d) volume_set_pane_g6

0x1bc2,	// (0x00049745) volume_set_pane_g7

0x1bca,	// (0x0004974d) volume_set_pane_g8

0x1bd2,	// (0x00049755) volume_set_pane_g9

0x1bda,	// (0x0004975d) volume_set_pane_g10

0x0009,

0xf93d,	// (0x000574c0) volume_set_pane_g

0x8609,	// (0x0005018c) indicator_pane_ParamLimits

0x8609,	// (0x0005018c) indicator_pane

0x8631,	// (0x000501b4) main_idle_pane_g2_ParamLimits

0x8631,	// (0x000501b4) main_idle_pane_g2

0x8669,	// (0x000501ec) main_pane_idle_g1_ParamLimits

0x8669,	// (0x000501ec) main_pane_idle_g1

0x8f20,	// (0x00050aa3) popup_clock_digital_analogue_window_ParamLimits

0x8f20,	// (0x00050aa3) popup_clock_digital_analogue_window

0x8690,	// (0x00050213) soft_indicator_pane_ParamLimits

0x8690,	// (0x00050213) soft_indicator_pane

0x86aa,	// (0x0005022d) wallpaper_pane_ParamLimits

0x86aa,	// (0x0005022d) wallpaper_pane

0x8e85,	// (0x00050a08) wallpaper_pane_g1

0x86bc,	// (0x0005023f) indicator_pane_g1_ParamLimits

0x86bc,	// (0x0005023f) indicator_pane_g1

0xd447,	// (0x00054fca) navi_navi_icon_text_pane_srt_g1

0x8f4e,	// (0x00050ad1) soft_indicator_pane_t1

0x8f68,	// (0x00050aeb) aid_ps_area_pane

0x86d2,	// (0x00050255) aid_ps_clock_pane

0x8f79,	// (0x00050afc) aid_ps_indicator_pane

0x8f85,	// (0x00050b08) indicator_ps_pane_ParamLimits

0x8f85,	// (0x00050b08) indicator_ps_pane

0x8f94,	// (0x00050b17) power_save_pane_g1_ParamLimits

0x8f94,	// (0x00050b17) power_save_pane_g1

0x8fa0,	// (0x00050b23) power_save_pane_g2_ParamLimits

0x8fa0,	// (0x00050b23) power_save_pane_g2

0x0527,	// (0x000480aa) aid_navinavi_width_pane

0x8f68,	// (0x00050aeb) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x000570f3) power_save_pane_g_ParamLimits

0xf570,	// (0x000570f3) power_save_pane_g

0x8fae,	// (0x00050b31) power_save_pane_t1_ParamLimits

0x8fae,	// (0x00050b31) power_save_pane_t1

0x86d2,	// (0x00050255) aid_ps_clock_pane_ParamLimits

0x8f79,	// (0x00050afc) aid_ps_indicator_pane_ParamLimits

0x8fc0,	// (0x00050b43) power_save_pane_t4_ParamLimits

0x8fc0,	// (0x00050b43) power_save_pane_t4

0x0001,

0xf575,	// (0x000570f8) power_save_pane_t_ParamLimits

0xf575,	// (0x000570f8) power_save_pane_t

0x8fea,	// (0x00050b6d) power_save_t3_ParamLimits

0x8fea,	// (0x00050b6d) power_save_t3

0x8fd5,	// (0x00050b58) power_save_t2_ParamLimits

0x8fd5,	// (0x00050b58) power_save_t2

0x8fff,	// (0x00050b82) indicator_ps_pane_g1

0x86e0,	// (0x00050263) ai_gene_pane_ParamLimits

0x86e0,	// (0x00050263) ai_gene_pane

0x86f7,	// (0x0005027a) ai_links_pane_ParamLimits

0x86f7,	// (0x0005027a) ai_links_pane

0x870f,	// (0x00050292) indicator_pane_cp1_ParamLimits

0x870f,	// (0x00050292) indicator_pane_cp1

0x871e,	// (0x000502a1) main_pane_idle_g1_cp_ParamLimits

0x871e,	// (0x000502a1) main_pane_idle_g1_cp

0x9008,	// (0x00050b8b) popup_ai_links_title_window

0x8736,	// (0x000502b9) soft_indicator_pane_cp1_ParamLimits

0x8736,	// (0x000502b9) soft_indicator_pane_cp1

0xd130,	// (0x00054cb3) ai_links_pane_g1

0xd139,	// (0x00054cbc) grid_ai_links_pane

0x9b6b,	// (0x000516ee) ai_gene_pane_1

0xd11e,	// (0x00054ca1) ai_gene_pane_2

0xd127,	// (0x00054caa) list_highlight_pane_cp4

0x9b47,	// (0x000516ca) cell_ai_link_pane_ParamLimits

0x9b47,	// (0x000516ca) cell_ai_link_pane

0xd116,	// (0x00054c99) cell_ai_link_pane_g1

0x9260,	// (0x00050de3) cell_ai_link_pane_g2

0x0001,

0xf918,	// (0x0005749b) cell_ai_link_pane_g

0x8e8f,	// (0x00050a12) grid_highlight_cp2

0x8e8f,	// (0x00050a12) bg_popup_sub_pane_cp1

0x901f,	// (0x00050ba2) popup_ai_links_title_window_t1

0xd066,	// (0x00054be9) ai_gene_pane_1_g1_ParamLimits

0xd066,	// (0x00054be9) ai_gene_pane_1_g1

0xd072,	// (0x00054bf5) ai_gene_pane_1_g2_ParamLimits

0xd072,	// (0x00054bf5) ai_gene_pane_1_g2

0x0001,

0xf90e,	// (0x00057491) ai_gene_pane_1_g_ParamLimits

0xf90e,	// (0x00057491) ai_gene_pane_1_g

0xd07f,	// (0x00054c02) ai_gene_pane_1_t1_ParamLimits

0xd07f,	// (0x00054c02) ai_gene_pane_1_t1

0xd0b3,	// (0x00054c36) grid_ai_soft_ind_pane

0xd051,	// (0x00054bd4) ai_gene_pane_2_t1_ParamLimits

0xd051,	// (0x00054bd4) ai_gene_pane_2_t1

0x874a,	// (0x000502cd) main_pane_empty_t1_ParamLimits

0x874a,	// (0x000502cd) main_pane_empty_t1

0x8762,	// (0x000502e5) main_pane_empty_t2_ParamLimits

0x8762,	// (0x000502e5) main_pane_empty_t2

0x8777,	// (0x000502fa) main_pane_empty_t3_ParamLimits

0x8777,	// (0x000502fa) main_pane_empty_t3

0x8789,	// (0x0005030c) main_pane_empty_t4_ParamLimits

0x8789,	// (0x0005030c) main_pane_empty_t4

0x879b,	// (0x0005031e) main_pane_empty_t5_ParamLimits

0x879b,	// (0x0005031e) main_pane_empty_t5

0x0004,

0xf57a,	// (0x000570fd) main_pane_empty_t_ParamLimits

0xf57a,	// (0x000570fd) main_pane_empty_t

0xb152,	// (0x00052cd5) bg_popup_window_pane_ParamLimits

0xb152,	// (0x00052cd5) bg_popup_window_pane

0xcda2,	// (0x00054925) find_popup_pane_cp2_ParamLimits

0xcda2,	// (0x00054925) find_popup_pane_cp2

0xcdae,	// (0x00054931) heading_pane_ParamLimits

0xcdae,	// (0x00054931) heading_pane

0x8e8f,	// (0x00050a12) bg_popup_sub_pane

0x9ac8,	// (0x0005164b) bg_popup_window_pane_g1_ParamLimits

0x9ac8,	// (0x0005164b) bg_popup_window_pane_g1

0x9ad7,	// (0x0005165a) bg_popup_window_pane_g2_ParamLimits

0x9ad7,	// (0x0005165a) bg_popup_window_pane_g2

0x9ae3,	// (0x00051666) bg_popup_window_pane_g3_ParamLimits

0x9ae3,	// (0x00051666) bg_popup_window_pane_g3

0x9aef,	// (0x00051672) bg_popup_window_pane_g4_ParamLimits

0x9aef,	// (0x00051672) bg_popup_window_pane_g4

0x9afe,	// (0x00051681) bg_popup_window_pane_g5_ParamLimits

0x9afe,	// (0x00051681) bg_popup_window_pane_g5

0x9b0e,	// (0x00051691) bg_popup_window_pane_g6_ParamLimits

0x9b0e,	// (0x00051691) bg_popup_window_pane_g6

0x9b1a,	// (0x0005169d) bg_popup_window_pane_g7_ParamLimits

0x9b1a,	// (0x0005169d) bg_popup_window_pane_g7

0x9b29,	// (0x000516ac) bg_popup_window_pane_g8_ParamLimits

0x9b29,	// (0x000516ac) bg_popup_window_pane_g8

0x9b38,	// (0x000516bb) bg_popup_window_pane_g9_ParamLimits

0x9b38,	// (0x000516bb) bg_popup_window_pane_g9

0xcd88,	// (0x0005490b) bg_popup_window_pane_g10_ParamLimits

0xcd88,	// (0x0005490b) bg_popup_window_pane_g10

0x0009,

0xf8d6,	// (0x00057459) bg_popup_window_pane_g_ParamLimits

0xf8d6,	// (0x00057459) bg_popup_window_pane_g

0xcd31,	// (0x000548b4) bg_popup_heading_pane_ParamLimits

0xcd31,	// (0x000548b4) bg_popup_heading_pane

0x1c7e,	// (0x00049801) tabs_4_passive_pane_cp_srt_ParamLimits

0x1c7e,	// (0x00049801) tabs_4_passive_pane_cp_srt

0x1c90,	// (0x00049813) tabs_4_passive_pane_srt_ParamLimits

0xcd45,	// (0x000548c8) heading_pane_g2

0x1c90,	// (0x00049813) tabs_4_passive_pane_srt

0xc20b,	// (0x00053d8e) bg_passive_tab_pane_cp3_srt_ParamLimits

0xc20b,	// (0x00053d8e) bg_passive_tab_pane_cp3_srt

0xcd4d,	// (0x000548d0) heading_pane_t1_ParamLimits

0xcd4d,	// (0x000548d0) heading_pane_t1

0xcd64,	// (0x000548e7) heading_pane_t2_ParamLimits

0xcd64,	// (0x000548e7) heading_pane_t2

0x0001,

0xf8d1,	// (0x00057454) heading_pane_t_ParamLimits

0xf8d1,	// (0x00057454) heading_pane_t

0xc87c,	// (0x000543ff) bg_popup_heading_pane_g1

0xc90d,	// (0x00054490) bg_popup_heading_pane_g2

0xc917,	// (0x0005449a) bg_popup_heading_pane_g3

0xc921,	// (0x000544a4) bg_popup_heading_pane_g4

0xc92b,	// (0x000544ae) bg_popup_heading_pane_g5

0xc935,	// (0x000544b8) bg_popup_heading_pane_g6

0xc93d,	// (0x000544c0) bg_popup_heading_pane_g7

0xc945,	// (0x000544c8) bg_popup_heading_pane_g8

0xc94f,	// (0x000544d2) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x00057410) bg_popup_heading_pane_g

0xc197,	// (0x00053d1a) bg_popup_sub_pane_g1

0xc1a7,	// (0x00053d2a) bg_popup_sub_pane_g2

0xc19f,	// (0x00053d22) bg_popup_sub_pane_g3

0xc1b7,	// (0x00053d3a) bg_popup_sub_pane_g4

0xc1af,	// (0x00053d32) bg_popup_sub_pane_g5

0xc1bf,	// (0x00053d42) bg_popup_sub_pane_g6

0xc1c7,	// (0x00053d4a) bg_popup_sub_pane_g7

0xc1d7,	// (0x00053d5a) bg_popup_sub_pane_g8

0xc1cf,	// (0x00053d52) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x000573ea) bg_popup_sub_pane_g

0x8edd,	// (0x00050a60) bg_popup_window_pane_cp5_ParamLimits

0x8edd,	// (0x00050a60) bg_popup_window_pane_cp5

0x903c,	// (0x00050bbf) popup_note_window_g1_ParamLimits

0x903c,	// (0x00050bbf) popup_note_window_g1

0x9048,	// (0x00050bcb) popup_note_window_t1_ParamLimits

0x9048,	// (0x00050bcb) popup_note_window_t1

0x905a,	// (0x00050bdd) popup_note_window_t2_ParamLimits

0x905a,	// (0x00050bdd) popup_note_window_t2

0x906c,	// (0x00050bef) popup_note_window_t3_ParamLimits

0x906c,	// (0x00050bef) popup_note_window_t3

0x907e,	// (0x00050c01) popup_note_window_t4_ParamLimits

0x907e,	// (0x00050c01) popup_note_window_t4

0x90a6,	// (0x00050c29) popup_note_window_t5_ParamLimits

0x90a6,	// (0x00050c29) popup_note_window_t5

0x0004,

0xf585,	// (0x00057108) popup_note_window_t_ParamLimits

0xf585,	// (0x00057108) popup_note_window_t

0x90ca,	// (0x00050c4d) bg_popup_window_pane_cp6_ParamLimits

0x90ca,	// (0x00050c4d) bg_popup_window_pane_cp6

0xc7f0,	// (0x00054373) popup_note_image_window_g1_ParamLimits

0xc7f0,	// (0x00054373) popup_note_image_window_g1

0xc7fc,	// (0x0005437f) popup_note_image_window_g2_ParamLimits

0xc7fc,	// (0x0005437f) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x000573de) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x000573de) popup_note_image_window_g

0xc815,	// (0x00054398) popup_note_image_window_t1_ParamLimits

0xc815,	// (0x00054398) popup_note_image_window_t1

0xc82e,	// (0x000543b1) popup_note_image_window_t2_ParamLimits

0xc82e,	// (0x000543b1) popup_note_image_window_t2

0xc847,	// (0x000543ca) popup_note_image_window_t3_ParamLimits

0xc847,	// (0x000543ca) popup_note_image_window_t3

0x0002,

0xf860,	// (0x000573e3) popup_note_image_window_t_ParamLimits

0xf860,	// (0x000573e3) popup_note_image_window_t

0xc6cd,	// (0x00054250) bg_popup_window_pane_cp7_ParamLimits

0xc6cd,	// (0x00054250) bg_popup_window_pane_cp7

0xc6fd,	// (0x00054280) popup_note_wait_window_g1_ParamLimits

0xc6fd,	// (0x00054280) popup_note_wait_window_g1

0xc709,	// (0x0005428c) popup_note_wait_window_g2_ParamLimits

0xc709,	// (0x0005428c) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x000573cc) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x000573cc) popup_note_wait_window_g

0xc721,	// (0x000542a4) popup_note_wait_window_t1_ParamLimits

0xc721,	// (0x000542a4) popup_note_wait_window_t1

0xc748,	// (0x000542cb) popup_note_wait_window_t2_ParamLimits

0xc748,	// (0x000542cb) popup_note_wait_window_t2

0xc765,	// (0x000542e8) popup_note_wait_window_t3_ParamLimits

0xc765,	// (0x000542e8) popup_note_wait_window_t3

0xc778,	// (0x000542fb) popup_note_wait_window_t4_ParamLimits

0xc778,	// (0x000542fb) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x000573d3) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x000573d3) popup_note_wait_window_t

0xc79d,	// (0x00054320) wait_bar_pane_ParamLimits

0xc79d,	// (0x00054320) wait_bar_pane

0x8e8f,	// (0x00050a12) wait_anim_pane

0x8e8f,	// (0x00050a12) wait_border_pane

0x8e85,	// (0x00050a08) wait_anim_pane_g1

0x8e85,	// (0x00050a08) wait_anim_pane_g2

0x0001,

0xf709,	// (0x0005728c) wait_anim_pane_g

0xc671,	// (0x000541f4) wait_border_pane_g1

0xc67c,	// (0x000541ff) wait_border_pane_g2

0xc685,	// (0x00054208) wait_border_pane_g3

0x0002,

0xf842,	// (0x000573c5) wait_border_pane_g

0xc4e1,	// (0x00054064) bg_popup_window_pane_cp16_ParamLimits

0xc4e1,	// (0x00054064) bg_popup_window_pane_cp16

0xc5e1,	// (0x00054164) indicator_popup_pane_cp4_ParamLimits

0xc5e1,	// (0x00054164) indicator_popup_pane_cp4

0xc5f5,	// (0x00054178) popup_query_data_window_t1_ParamLimits

0xc5f5,	// (0x00054178) popup_query_data_window_t1

0xc607,	// (0x0005418a) popup_query_data_window_t2_ParamLimits

0xc607,	// (0x0005418a) popup_query_data_window_t2

0xc620,	// (0x000541a3) popup_query_data_window_t3_ParamLimits

0xc620,	// (0x000541a3) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x000573be) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x000573be) popup_query_data_window_t

0xc63a,	// (0x000541bd) query_popup_data_pane_ParamLimits

0xc63a,	// (0x000541bd) query_popup_data_pane

0xc64e,	// (0x000541d1) query_popup_data_pane_cp1_ParamLimits

0xc64e,	// (0x000541d1) query_popup_data_pane_cp1

0xc4e1,	// (0x00054064) bg_popup_window_pane_cp10_ParamLimits

0xc4e1,	// (0x00054064) bg_popup_window_pane_cp10

0xc513,	// (0x00054096) indicator_popup_pane_ParamLimits

0xc513,	// (0x00054096) indicator_popup_pane

0xc535,	// (0x000540b8) popup_query_code_window_t1_ParamLimits

0xc535,	// (0x000540b8) popup_query_code_window_t1

0xc54f,	// (0x000540d2) popup_query_code_window_t2_ParamLimits

0xc54f,	// (0x000540d2) popup_query_code_window_t2

0xc598,	// (0x0005411b) popup_query_code_window_t3_ParamLimits

0xc598,	// (0x0005411b) popup_query_code_window_t3

0x0002,

0xf834,	// (0x000573b7) popup_query_code_window_t_ParamLimits

0xf834,	// (0x000573b7) popup_query_code_window_t

0xc5c7,	// (0x0005414a) query_popup_pane_ParamLimits

0xc5c7,	// (0x0005414a) query_popup_pane

0x90ca,	// (0x00050c4d) bg_popup_window_pane_cp15_ParamLimits

0x90ca,	// (0x00050c4d) bg_popup_window_pane_cp15

0x90e8,	// (0x00050c6b) indicator_popup_pane_cp1_ParamLimits

0x90e8,	// (0x00050c6b) indicator_popup_pane_cp1

0x90fb,	// (0x00050c7e) indicator_popup_pane_cp2_ParamLimits

0x90fb,	// (0x00050c7e) indicator_popup_pane_cp2

0x910e,	// (0x00050c91) popup_query_data_code_window_g1_ParamLimits

0x910e,	// (0x00050c91) popup_query_data_code_window_g1

0x9121,	// (0x00050ca4) popup_query_data_code_window_t1_ParamLimits

0x9121,	// (0x00050ca4) popup_query_data_code_window_t1

0x9133,	// (0x00050cb6) popup_query_data_code_window_t2_ParamLimits

0x9133,	// (0x00050cb6) popup_query_data_code_window_t2

0x9145,	// (0x00050cc8) popup_query_data_code_window_t3_ParamLimits

0x9145,	// (0x00050cc8) popup_query_data_code_window_t3

0x915b,	// (0x00050cde) popup_query_data_code_window_t4_ParamLimits

0x915b,	// (0x00050cde) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x00057113) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x00057113) popup_query_data_code_window_t

0x1947,	// (0x000494ca) list_single_midp_graphic_pane_g3

0x9173,	// (0x00050cf6) query_popup_data_pane_cp2_ParamLimits

0x9230,	// (0x00050db3) query_popup_pane_cp2_ParamLimits

0x9230,	// (0x00050db3) query_popup_pane_cp2

0x8e8f,	// (0x00050a12) bg_popup_window_pane_cp11

0xc4d9,	// (0x0005405c) heading_pane_cp5

0x92be,	// (0x00050e41) listscroll_popup_info_pane

0x8e8f,	// (0x00050a12) input_focus_pane_cp3

0x9243,	// (0x00050dc6) query_popup_pane_t1

0x9251,	// (0x00050dd4) list_popup_info_pane_ParamLimits

0x9251,	// (0x00050dd4) list_popup_info_pane

0x9260,	// (0x00050de3) listscroll_popup_info_pane_g1

0x9268,	// (0x00050deb) scroll_pane_cp7

0x9272,	// (0x00050df5) popup_info_list_pane_t1_ParamLimits

0x9272,	// (0x00050df5) popup_info_list_pane_t1

0x928c,	// (0x00050e0f) popup_info_list_pane_t2_ParamLimits

0x928c,	// (0x00050e0f) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0005711c) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0005711c) popup_info_list_pane_t

0x8e8f,	// (0x00050a12) bg_popup_window_pane_cp12

0xd461,	// (0x00054fe4) find_popup_pane

0x8efb,	// (0x00050a7e) bg_popup_window_pane_cp3

0x92a6,	// (0x00050e29) heading_pane_cp3

0x92b2,	// (0x00050e35) listscroll_popup_graphic_pane

0x8e8f,	// (0x00050a12) bg_popup_window_pane_cp4

0x87fd,	// (0x00050380) heading_pane_cp4

0x92be,	// (0x00050e41) listscroll_popup_colour_pane

0x92c6,	// (0x00050e49) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x92c6,	// (0x00050e49) cell_large_graphic_colour_none_popup_pane

0x8805,	// (0x00050388) grid_large_graphic_colour_popup_pane_ParamLimits

0x8805,	// (0x00050388) grid_large_graphic_colour_popup_pane

0x92da,	// (0x00050e5d) listscroll_popup_colour_pane_g1_ParamLimits

0x92da,	// (0x00050e5d) listscroll_popup_colour_pane_g1

0x92f1,	// (0x00050e74) listscroll_popup_colour_pane_g2_ParamLimits

0x92f1,	// (0x00050e74) listscroll_popup_colour_pane_g2

0x9308,	// (0x00050e8b) listscroll_popup_colour_pane_g3_ParamLimits

0x9308,	// (0x00050e8b) listscroll_popup_colour_pane_g3

0x8829,	// (0x000503ac) listscroll_popup_colour_pane_g4_ParamLimits

0x8829,	// (0x000503ac) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x00057121) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x00057121) listscroll_popup_colour_pane_g

0x9318,	// (0x00050e9b) scroll_pane_cp6_ParamLimits

0x9318,	// (0x00050e9b) scroll_pane_cp6

0x8838,	// (0x000503bb) cell_large_graphic_colour_popup_pane_ParamLimits

0x8838,	// (0x000503bb) cell_large_graphic_colour_popup_pane

0x932a,	// (0x00050ead) cell_large_graphic_colour_none_popup_pane_t1

0x8e8f,	// (0x00050a12) grid_highlight_pane_cp5

0x9339,	// (0x00050ebc) cell_large_graphic_colour_popup_pane_g1

0x9341,	// (0x00050ec4) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0005712a) cell_large_graphic_colour_popup_pane_g

0x9349,	// (0x00050ecc) cell_large_graphic_colour_popup_pane_g2_copy1

0x9352,	// (0x00050ed5) grid_highlight_pane_cp4

0x935a,	// (0x00050edd) bg_popup_window_pane_cp8_ParamLimits

0x935a,	// (0x00050edd) bg_popup_window_pane_cp8

0x9375,	// (0x00050ef8) popup_snote_single_text_window_g1_ParamLimits

0x9375,	// (0x00050ef8) popup_snote_single_text_window_g1

0x9387,	// (0x00050f0a) popup_snote_single_text_window_t1_ParamLimits

0x9387,	// (0x00050f0a) popup_snote_single_text_window_t1

0x939a,	// (0x00050f1d) popup_snote_single_text_window_t2_ParamLimits

0x939a,	// (0x00050f1d) popup_snote_single_text_window_t2

0x93ad,	// (0x00050f30) popup_snote_single_text_window_t3_ParamLimits

0x93ad,	// (0x00050f30) popup_snote_single_text_window_t3

0x93e6,	// (0x00050f69) popup_snote_single_text_window_t4_ParamLimits

0x93e6,	// (0x00050f69) popup_snote_single_text_window_t4

0x941a,	// (0x00050f9d) popup_snote_single_text_window_t5_ParamLimits

0x941a,	// (0x00050f9d) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0005712f) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0005712f) popup_snote_single_text_window_t

0x9449,	// (0x00050fcc) bg_popup_window_pane_cp9_ParamLimits

0x9449,	// (0x00050fcc) bg_popup_window_pane_cp9

0x9375,	// (0x00050ef8) popup_snote_single_graphic_window_g1_ParamLimits

0x9375,	// (0x00050ef8) popup_snote_single_graphic_window_g1

0x9457,	// (0x00050fda) popup_snote_single_graphic_window_g2_ParamLimits

0x9457,	// (0x00050fda) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0005713a) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0005713a) popup_snote_single_graphic_window_g

0x9463,	// (0x00050fe6) popup_snote_single_graphic_window_t1_ParamLimits

0x9463,	// (0x00050fe6) popup_snote_single_graphic_window_t1

0x9476,	// (0x00050ff9) popup_snote_single_graphic_window_t2_ParamLimits

0x9476,	// (0x00050ff9) popup_snote_single_graphic_window_t2

0x9489,	// (0x0005100c) popup_snote_single_graphic_window_t3_ParamLimits

0x9489,	// (0x0005100c) popup_snote_single_graphic_window_t3

0x99b4,	// (0x00051537) popup_snote_single_graphic_window_t4_ParamLimits

0x99b4,	// (0x00051537) popup_snote_single_graphic_window_t4

0x99e8,	// (0x0005156b) popup_snote_single_graphic_window_t5_ParamLimits

0x99e8,	// (0x0005156b) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0005713f) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0005713f) popup_snote_single_graphic_window_t

0xd3e9,	// (0x00054f6c) grid_graphic_popup_pane_ParamLimits

0xd3e9,	// (0x00054f6c) grid_graphic_popup_pane

0xd411,	// (0x00054f94) listscroll_popup_graphic_pane_g1_ParamLimits

0xd411,	// (0x00054f94) listscroll_popup_graphic_pane_g1

0x9e3b,	// (0x000519be) listscroll_popup_graphic_pane_g2_ParamLimits

0x9e3b,	// (0x000519be) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b1,	// (0x00057534) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b1,	// (0x00057534) listscroll_popup_graphic_pane_g

0xce72,	// (0x000549f5) scroll_pane_cp5

0x9dff,	// (0x00051982) cell_graphic_popup_pane_ParamLimits

0x9dff,	// (0x00051982) cell_graphic_popup_pane

0xd3b4,	// (0x00054f37) cell_graphic_popup_pane_g1

0xd3bc,	// (0x00054f3f) cell_graphic_popup_pane_g2

0x9349,	// (0x00050ecc) cell_graphic_popup_pane_g3

0x0002,

0xf9aa,	// (0x0005752d) cell_graphic_popup_pane_g

0xd3c5,	// (0x00054f48) cell_graphic_popup_pane_t2

0x9352,	// (0x00050ed5) grid_highlight_pane_cp3

0x9a29,	// (0x000515ac) list_gen_pane_ParamLimits

0x9a29,	// (0x000515ac) list_gen_pane

0x9a51,	// (0x000515d4) scroll_pane

0x9dba,	// (0x0005193d) bg_list_pane_g1_ParamLimits

0x9dba,	// (0x0005193d) bg_list_pane_g1

0xd363,	// (0x00054ee6) bg_list_pane_g2_ParamLimits

0xd363,	// (0x00054ee6) bg_list_pane_g2

0xd376,	// (0x00054ef9) bg_list_pane_g3_ParamLimits

0xd376,	// (0x00054ef9) bg_list_pane_g3

0xd388,	// (0x00054f0b) bg_list_pane_g4_ParamLimits

0xd388,	// (0x00054f0b) bg_list_pane_g4

0x9dd5,	// (0x00051958) bg_list_pane_g5_ParamLimits

0x9dd5,	// (0x00051958) bg_list_pane_g5

0x0004,

0xf99f,	// (0x00057522) bg_list_pane_g_ParamLimits

0xf99f,	// (0x00057522) bg_list_pane_g

0x9186,	// (0x00050d09) list_double2_graphic_large_graphic_pane_ParamLimits

0x9186,	// (0x00050d09) list_double2_graphic_large_graphic_pane

0x9186,	// (0x00050d09) list_double2_graphic_pane_ParamLimits

0x9186,	// (0x00050d09) list_double2_graphic_pane

0x9186,	// (0x00050d09) list_double2_large_graphic_pane_ParamLimits

0x9186,	// (0x00050d09) list_double2_large_graphic_pane

0x9186,	// (0x00050d09) list_double2_pane_ParamLimits

0x9186,	// (0x00050d09) list_double2_pane

0x9186,	// (0x00050d09) list_double_graphic_heading_pane_ParamLimits

0x9186,	// (0x00050d09) list_double_graphic_heading_pane

0x9186,	// (0x00050d09) list_double_graphic_pane_ParamLimits

0x9186,	// (0x00050d09) list_double_graphic_pane

0x9186,	// (0x00050d09) list_double_heading_pane_ParamLimits

0x9186,	// (0x00050d09) list_double_heading_pane

0x9186,	// (0x00050d09) list_double_large_graphic_pane_ParamLimits

0x9186,	// (0x00050d09) list_double_large_graphic_pane

0x9186,	// (0x00050d09) list_double_number_pane_ParamLimits

0x9186,	// (0x00050d09) list_double_number_pane

0x9186,	// (0x00050d09) list_double_pane_ParamLimits

0x9186,	// (0x00050d09) list_double_pane

0x9186,	// (0x00050d09) list_double_time_pane_ParamLimits

0x9186,	// (0x00050d09) list_double_time_pane

0x9186,	// (0x00050d09) list_setting_number_pane_ParamLimits

0x9186,	// (0x00050d09) list_setting_number_pane

0x9186,	// (0x00050d09) list_setting_pane_ParamLimits

0x9186,	// (0x00050d09) list_setting_pane

0x9d7f,	// (0x00051902) list_single_2graphic_pane_ParamLimits

0x9d7f,	// (0x00051902) list_single_2graphic_pane

0x9d7f,	// (0x00051902) list_single_graphic_heading_pane_ParamLimits

0x9d7f,	// (0x00051902) list_single_graphic_heading_pane

0x9d7f,	// (0x00051902) list_single_graphic_pane_ParamLimits

0x9d7f,	// (0x00051902) list_single_graphic_pane

0x9d7f,	// (0x00051902) list_single_heading_pane_ParamLimits

0x9d7f,	// (0x00051902) list_single_heading_pane

0x9da7,	// (0x0005192a) list_single_large_graphic_pane_ParamLimits

0x9da7,	// (0x0005192a) list_single_large_graphic_pane

0x9d7f,	// (0x00051902) list_single_number_heading_pane_ParamLimits

0x9d7f,	// (0x00051902) list_single_number_heading_pane

0x9d7f,	// (0x00051902) list_single_number_pane_ParamLimits

0x9d7f,	// (0x00051902) list_single_number_pane

0x9d7f,	// (0x00051902) list_single_pane_ParamLimits

0x9d7f,	// (0x00051902) list_single_pane

0x8e8f,	// (0x00050a12) list_highlight_pane_cp1

0x2e70,	// (0x0004a9f3) list_single_pane_g1_ParamLimits

0x2e70,	// (0x0004a9f3) list_single_pane_g1

0x2e7c,	// (0x0004a9ff) list_single_pane_g2_ParamLimits

0x2e7c,	// (0x0004a9ff) list_single_pane_g2

0x0001,

0xf5d8,	// (0x0005715b) list_single_pane_g_ParamLimits

0xf5d8,	// (0x0005715b) list_single_pane_g

0x36ee,	// (0x0004b271) list_single_pane_t1_ParamLimits

0x36ee,	// (0x0004b271) list_single_pane_t1

0x2e70,	// (0x0004a9f3) list_single_number_pane_g1_ParamLimits

0x2e70,	// (0x0004a9f3) list_single_number_pane_g1

0x2e7c,	// (0x0004a9ff) list_single_number_pane_g2_ParamLimits

0x2e7c,	// (0x0004a9ff) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x0005715b) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x0005715b) list_single_number_pane_g

0x35bd,	// (0x0004b140) list_single_number_pane_t1_ParamLimits

0x35bd,	// (0x0004b140) list_single_number_pane_t1

0x36ac,	// (0x0004b22f) list_single_number_pane_t2_ParamLimits

0x36ac,	// (0x0004b22f) list_single_number_pane_t2

0x0001,

0xf960,	// (0x000574e3) list_single_number_pane_t_ParamLimits

0xf960,	// (0x000574e3) list_single_number_pane_t

0x09bc,	// (0x0004853f) list_single_graphic_pane_g1_ParamLimits

0x09bc,	// (0x0004853f) list_single_graphic_pane_g1

0x2e70,	// (0x0004a9f3) list_single_graphic_pane_g2_ParamLimits

0x2e70,	// (0x0004a9f3) list_single_graphic_pane_g2

0x2e7c,	// (0x0004a9ff) list_single_graphic_pane_g3_ParamLimits

0x2e7c,	// (0x0004a9ff) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0005714a) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0005714a) list_single_graphic_pane_g

0x09c8,	// (0x0004854b) list_single_graphic_pane_t1_ParamLimits

0x09c8,	// (0x0004854b) list_single_graphic_pane_t1

0x09de,	// (0x00048561) list_single_heading_pane_g1_ParamLimits

0x09de,	// (0x00048561) list_single_heading_pane_g1

0x2e7c,	// (0x0004a9ff) list_single_heading_pane_g2_ParamLimits

0x2e7c,	// (0x0004a9ff) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00057151) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00057151) list_single_heading_pane_g

0x09f1,	// (0x00048574) list_single_heading_pane_t1_ParamLimits

0x09f1,	// (0x00048574) list_single_heading_pane_t1

0x2e88,	// (0x0004aa0b) list_single_heading_pane_t2_ParamLimits

0x2e88,	// (0x0004aa0b) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00057156) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00057156) list_single_heading_pane_t

0x2e70,	// (0x0004a9f3) list_single_number_heading_pane_g1_ParamLimits

0x2e70,	// (0x0004a9f3) list_single_number_heading_pane_g1

0x2e7c,	// (0x0004a9ff) list_single_number_heading_pane_g2_ParamLimits

0x2e7c,	// (0x0004a9ff) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x0005715b) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x0005715b) list_single_number_heading_pane_g

0x0a07,	// (0x0004858a) list_single_number_heading_pane_t1_ParamLimits

0x0a07,	// (0x0004858a) list_single_number_heading_pane_t1

0x0a1d,	// (0x000485a0) list_single_number_heading_pane_t2_ParamLimits

0x0a1d,	// (0x000485a0) list_single_number_heading_pane_t2

0x0a2f,	// (0x000485b2) list_single_number_heading_pane_t3_ParamLimits

0x0a2f,	// (0x000485b2) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x00057160) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x00057160) list_single_number_heading_pane_t

0x0a41,	// (0x000485c4) list_single_graphic_heading_pane_g1_ParamLimits

0x0a41,	// (0x000485c4) list_single_graphic_heading_pane_g1

0x72b8,	// (0x0004ee3b) list_single_graphic_heading_pane_g4_ParamLimits

0x72b8,	// (0x0004ee3b) list_single_graphic_heading_pane_g4

0x2e7c,	// (0x0004a9ff) list_single_graphic_heading_pane_g5_ParamLimits

0x2e7c,	// (0x0004a9ff) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x00057167) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x00057167) list_single_graphic_heading_pane_g

0x0a07,	// (0x0004858a) list_single_graphic_heading_pane_t1_ParamLimits

0x0a07,	// (0x0004858a) list_single_graphic_heading_pane_t1

0x0a68,	// (0x000485eb) list_single_graphic_heading_pane_t2_ParamLimits

0x0a68,	// (0x000485eb) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x0005716e) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x0005716e) list_single_graphic_heading_pane_t

0x3886,	// (0x0004b409) list_single_large_graphic_pane_g1_ParamLimits

0x3886,	// (0x0004b409) list_single_large_graphic_pane_g1

0x3892,	// (0x0004b415) list_single_large_graphic_pane_g2_ParamLimits

0x3892,	// (0x0004b415) list_single_large_graphic_pane_g2

0x389e,	// (0x0004b421) list_single_large_graphic_pane_g3_ParamLimits

0x389e,	// (0x0004b421) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00057173) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00057173) list_single_large_graphic_pane_g

0xc67c,	// (0x000541ff) wait_border_pane_g2_copy1

0x8861,	// (0x000503e4) list_single_large_graphic_pane_g4_cp2

0x38aa,	// (0x0004b42d) list_single_large_graphic_pane_t1_ParamLimits

0x38aa,	// (0x0004b42d) list_single_large_graphic_pane_t1

0x72c9,	// (0x0004ee4c) list_double_pane_g1_ParamLimits

0x72c9,	// (0x0004ee4c) list_double_pane_g1

0x72d5,	// (0x0004ee58) list_double_pane_g2_ParamLimits

0x72d5,	// (0x0004ee58) list_double_pane_g2

0x0001,

0xf5f7,	// (0x0005717a) list_double_pane_g_ParamLimits

0xf5f7,	// (0x0005717a) list_double_pane_g

0x72e1,	// (0x0004ee64) list_double_pane_t1_ParamLimits

0x72e1,	// (0x0004ee64) list_double_pane_t1

0x72f7,	// (0x0004ee7a) list_double_pane_t2_ParamLimits

0x72f7,	// (0x0004ee7a) list_double_pane_t2

0x0001,

0xf5fc,	// (0x0005717f) list_double_pane_t_ParamLimits

0xf5fc,	// (0x0005717f) list_double_pane_t

0x7309,	// (0x0004ee8c) list_double2_pane_g1_ParamLimits

0x7309,	// (0x0004ee8c) list_double2_pane_g1

0x731a,	// (0x0004ee9d) list_double2_pane_g2_ParamLimits

0x731a,	// (0x0004ee9d) list_double2_pane_g2

0x0001,

0xf601,	// (0x00057184) list_double2_pane_g_ParamLimits

0xf601,	// (0x00057184) list_double2_pane_g

0x7326,	// (0x0004eea9) list_double2_pane_t1_ParamLimits

0x7326,	// (0x0004eea9) list_double2_pane_t1

0x733c,	// (0x0004eebf) list_double2_pane_t2_ParamLimits

0x733c,	// (0x0004eebf) list_double2_pane_t2

0x0001,

0xf606,	// (0x00057189) list_double2_pane_t_ParamLimits

0xf606,	// (0x00057189) list_double2_pane_t

0x72c9,	// (0x0004ee4c) list_double_number_pane_g1_ParamLimits

0x72c9,	// (0x0004ee4c) list_double_number_pane_g1

0x72d5,	// (0x0004ee58) list_double_number_pane_g2_ParamLimits

0x72d5,	// (0x0004ee58) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x0005717a) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x0005717a) list_double_number_pane_g

0x734e,	// (0x0004eed1) list_double_number_pane_t1_ParamLimits

0x734e,	// (0x0004eed1) list_double_number_pane_t1

0x7360,	// (0x0004eee3) list_double_number_pane_t2_ParamLimits

0x7360,	// (0x0004eee3) list_double_number_pane_t2

0x7376,	// (0x0004eef9) list_double_number_pane_t3_ParamLimits

0x7376,	// (0x0004eef9) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x0005718e) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x0005718e) list_double_number_pane_t

0x7388,	// (0x0004ef0b) list_double_graphic_pane_g1_ParamLimits

0x7388,	// (0x0004ef0b) list_double_graphic_pane_g1

0x7394,	// (0x0004ef17) list_double_graphic_pane_g2_ParamLimits

0x7394,	// (0x0004ef17) list_double_graphic_pane_g2

0x73a3,	// (0x0004ef26) list_double_graphic_pane_g3_ParamLimits

0x73a3,	// (0x0004ef26) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x00057195) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x00057195) list_double_graphic_pane_g

0x73bb,	// (0x0004ef3e) list_double_graphic_pane_t1_ParamLimits

0x73bb,	// (0x0004ef3e) list_double_graphic_pane_t1

0x73d1,	// (0x0004ef54) list_double_graphic_pane_t2_ParamLimits

0x73d1,	// (0x0004ef54) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x0005719e) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x0005719e) list_double_graphic_pane_t

0x7388,	// (0x0004ef0b) list_double2_graphic_pane_g1_ParamLimits

0x7388,	// (0x0004ef0b) list_double2_graphic_pane_g1

0x72c9,	// (0x0004ee4c) list_double2_graphic_pane_g2_ParamLimits

0x72c9,	// (0x0004ee4c) list_double2_graphic_pane_g2

0x72d5,	// (0x0004ee58) list_double2_graphic_pane_g3_ParamLimits

0x72d5,	// (0x0004ee58) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x000571a3) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x000571a3) list_double2_graphic_pane_g

0x7360,	// (0x0004eee3) list_double2_graphic_pane_t1_ParamLimits

0x7360,	// (0x0004eee3) list_double2_graphic_pane_t1

0x73e3,	// (0x0004ef66) list_double2_graphic_pane_t2_ParamLimits

0x73e3,	// (0x0004ef66) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x000571aa) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x000571aa) list_double2_graphic_pane_t

0x73f5,	// (0x0004ef78) list_double_large_graphic_pane_g1_ParamLimits

0x73f5,	// (0x0004ef78) list_double_large_graphic_pane_g1

0x7414,	// (0x0004ef97) list_double_large_graphic_pane_g2_ParamLimits

0x7414,	// (0x0004ef97) list_double_large_graphic_pane_g2

0x72d5,	// (0x0004ee58) list_double_large_graphic_pane_g3_ParamLimits

0x72d5,	// (0x0004ee58) list_double_large_graphic_pane_g3

0x742a,	// (0x0004efad) list_double_large_graphic_pane_g4_ParamLimits

0x742a,	// (0x0004efad) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x000571af) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x000571af) list_double_large_graphic_pane_g

0x743d,	// (0x0004efc0) list_double_large_graphic_pane_t1_ParamLimits

0x743d,	// (0x0004efc0) list_double_large_graphic_pane_t1

0x7456,	// (0x0004efd9) list_double_large_graphic_pane_t2_ParamLimits

0x7456,	// (0x0004efd9) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x000571ba) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x000571ba) list_double_large_graphic_pane_t

0x7468,	// (0x0004efeb) list_double2_large_graphic_pane_g1_ParamLimits

0x7468,	// (0x0004efeb) list_double2_large_graphic_pane_g1

0x7474,	// (0x0004eff7) list_double2_large_graphic_pane_g2_ParamLimits

0x7474,	// (0x0004eff7) list_double2_large_graphic_pane_g2

0x72d5,	// (0x0004ee58) list_double2_large_graphic_pane_g3_ParamLimits

0x72d5,	// (0x0004ee58) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x000571bf) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x000571bf) list_double2_large_graphic_pane_g

0x7485,	// (0x0004f008) list_double2_large_graphic_pane_t1_ParamLimits

0x7485,	// (0x0004f008) list_double2_large_graphic_pane_t1

0x749b,	// (0x0004f01e) list_double2_large_graphic_pane_t2_ParamLimits

0x749b,	// (0x0004f01e) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x000571c6) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x000571c6) list_double2_large_graphic_pane_t

0x74ad,	// (0x0004f030) list_double_heading_pane_g1_ParamLimits

0x74ad,	// (0x0004f030) list_double_heading_pane_g1

0x8869,	// (0x000503ec) list_double_heading_pane_g2_ParamLimits

0x8869,	// (0x000503ec) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x000571cb) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x000571cb) list_double_heading_pane_g

0x74be,	// (0x0004f041) list_double_heading_pane_t1_ParamLimits

0x74be,	// (0x0004f041) list_double_heading_pane_t1

0x74d4,	// (0x0004f057) list_double_heading_pane_t2_ParamLimits

0x74d4,	// (0x0004f057) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x000571d0) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x000571d0) list_double_heading_pane_t

0x7388,	// (0x0004ef0b) list_double_graphic_heading_pane_g1_ParamLimits

0x7388,	// (0x0004ef0b) list_double_graphic_heading_pane_g1

0x74ad,	// (0x0004f030) list_double_graphic_heading_pane_g2_ParamLimits

0x74ad,	// (0x0004f030) list_double_graphic_heading_pane_g2

0x8869,	// (0x000503ec) list_double_graphic_heading_pane_g3_ParamLimits

0x8869,	// (0x000503ec) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x000571d5) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x000571d5) list_double_graphic_heading_pane_g

0x74e6,	// (0x0004f069) list_double_graphic_heading_pane_t1_ParamLimits

0x74e6,	// (0x0004f069) list_double_graphic_heading_pane_t1

0x74fc,	// (0x0004f07f) list_double_graphic_heading_pane_t2_ParamLimits

0x74fc,	// (0x0004f07f) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x000571dc) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x000571dc) list_double_graphic_heading_pane_t

0x7309,	// (0x0004ee8c) list_double_time_pane_g1_ParamLimits

0x7309,	// (0x0004ee8c) list_double_time_pane_g1

0x731a,	// (0x0004ee9d) list_double_time_pane_g2_ParamLimits

0x731a,	// (0x0004ee9d) list_double_time_pane_g2

0x0001,

0xf601,	// (0x00057184) list_double_time_pane_g_ParamLimits

0xf601,	// (0x00057184) list_double_time_pane_g

0x750e,	// (0x0004f091) list_double_time_pane_t1_ParamLimits

0x750e,	// (0x0004f091) list_double_time_pane_t1

0x7524,	// (0x0004f0a7) list_double_time_pane_t2_ParamLimits

0x7524,	// (0x0004f0a7) list_double_time_pane_t2

0x7536,	// (0x0004f0b9) list_double_time_pane_t3_ParamLimits

0x7536,	// (0x0004f0b9) list_double_time_pane_t3

0x7548,	// (0x0004f0cb) list_double_time_pane_t4_ParamLimits

0x7548,	// (0x0004f0cb) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x000571e1) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x000571e1) list_double_time_pane_t

0x755a,	// (0x0004f0dd) list_setting_pane_g1_ParamLimits

0x755a,	// (0x0004f0dd) list_setting_pane_g1

0x7566,	// (0x0004f0e9) list_setting_pane_g2_ParamLimits

0x7566,	// (0x0004f0e9) list_setting_pane_g2

0x0001,

0xf667,	// (0x000571ea) list_setting_pane_g_ParamLimits

0xf667,	// (0x000571ea) list_setting_pane_g

0x7572,	// (0x0004f0f5) list_setting_pane_t1_ParamLimits

0x7572,	// (0x0004f0f5) list_setting_pane_t1

0x758c,	// (0x0004f10f) list_setting_pane_t2_ParamLimits

0x758c,	// (0x0004f10f) list_setting_pane_t2

0x0002,

0xf66c,	// (0x000571ef) list_setting_pane_t_ParamLimits

0xf66c,	// (0x000571ef) list_setting_pane_t

0x75c9,	// (0x0004f14c) set_value_pane_cp_ParamLimits

0x75c9,	// (0x0004f14c) set_value_pane_cp

0x75d5,	// (0x0004f158) list_setting_number_pane_g1_ParamLimits

0x75d5,	// (0x0004f158) list_setting_number_pane_g1

0x75e1,	// (0x0004f164) list_setting_number_pane_g2_ParamLimits

0x75e1,	// (0x0004f164) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x000571f6) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x000571f6) list_setting_number_pane_g

0x75ed,	// (0x0004f170) list_setting_number_pane_t1_ParamLimits

0x75ed,	// (0x0004f170) list_setting_number_pane_t1

0x7606,	// (0x0004f189) list_setting_number_pane_t2_ParamLimits

0x7606,	// (0x0004f189) list_setting_number_pane_t2

0x7620,	// (0x0004f1a3) list_setting_number_pane_t3_ParamLimits

0x7620,	// (0x0004f1a3) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x000571fb) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x000571fb) list_setting_number_pane_t

0x75c9,	// (0x0004f14c) set_value_pane_ParamLimits

0x75c9,	// (0x0004f14c) set_value_pane

0xb059,	// (0x00052bdc) bg_set_opt_pane_ParamLimits

0xb059,	// (0x00052bdc) bg_set_opt_pane

0x2fe1,	// (0x0004ab64) set_value_pane_t1

0xb07a,	// (0x00052bfd) slider_set_pane_cp3

0xb083,	// (0x00052c06) volume_small_pane_cp

0xb08c,	// (0x00052c0f) list_form_gen_pane

0xb095,	// (0x00052c18) scroll_pane_cp8

0x7663,	// (0x0004f1e6) form_field_data_pane_ParamLimits

0x7663,	// (0x0004f1e6) form_field_data_pane

0x8875,	// (0x000503f8) form_field_data_wide_pane_ParamLimits

0x8875,	// (0x000503f8) form_field_data_wide_pane

0x8895,	// (0x00050418) form_field_popup_pane_ParamLimits

0x8895,	// (0x00050418) form_field_popup_pane

0x88b5,	// (0x00050438) form_field_popup_wide_pane_ParamLimits

0x88b5,	// (0x00050438) form_field_popup_wide_pane

0x3077,	// (0x0004abfa) form_field_slider_pane_ParamLimits

0x3077,	// (0x0004abfa) form_field_slider_pane

0x308a,	// (0x0004ac0d) form_field_slider_wide_pane_ParamLimits

0x308a,	// (0x0004ac0d) form_field_slider_wide_pane

0xb0a6,	// (0x00052c29) data_form_pane

0x88d6,	// (0x00050459) form_field_data_pane_t1

0xb0b2,	// (0x00052c35) input_focus_pane

0x30c1,	// (0x0004ac44) data_form_wide_pane

0x30de,	// (0x0004ac61) form_field_data_wide_pane_t1

0x9367,	// (0x00050eea) input_focus_pane_cp6

0x88f0,	// (0x00050473) form_field_popup_pane_t1

0xb0b2,	// (0x00052c35) input_focus_pane_cp7

0xb0d4,	// (0x00052c57) list_form_pane

0x3122,	// (0x0004aca5) form_field_popup_wide_pane_t1

0xb0b2,	// (0x00052c35) input_focus_pane_cp8

0xb0e0,	// (0x00052c63) list_form_wide_pane

0x8912,	// (0x00050495) form_field_slider_pane_t1_ParamLimits

0x8912,	// (0x00050495) form_field_slider_pane_t1

0x892a,	// (0x000504ad) form_field_slider_pane_t2_ParamLimits

0x892a,	// (0x000504ad) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x0005720b) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x0005720b) form_field_slider_pane_t

0x8edd,	// (0x00050a60) input_focus_pane_cp9_ParamLimits

0x8edd,	// (0x00050a60) input_focus_pane_cp9

0x893f,	// (0x000504c2) slider_cont_pane_ParamLimits

0x893f,	// (0x000504c2) slider_cont_pane

0xb0ef,	// (0x00052c72) form_field_slider_wide_pane_t1_ParamLimits

0xb0ef,	// (0x00052c72) form_field_slider_wide_pane_t1

0x3180,	// (0x0004ad03) form_field_slider_wide_pane_t2_ParamLimits

0x3180,	// (0x0004ad03) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x00057210) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x00057210) form_field_slider_wide_pane_t

0x8edd,	// (0x00050a60) input_focus_pane_cp10_ParamLimits

0x8edd,	// (0x00050a60) input_focus_pane_cp10

0x8953,	// (0x000504d6) slider_cont_pane_cp1_ParamLimits

0x8953,	// (0x000504d6) slider_cont_pane_cp1

0x8967,	// (0x000504ea) slider_form_pane_cp

0xb101,	// (0x00052c84) input_focus_pane_g1

0xb109,	// (0x00052c8c) input_focus_pane_g2

0xb111,	// (0x00052c94) input_focus_pane_g3

0xb119,	// (0x00052c9c) input_focus_pane_g4

0xb121,	// (0x00052ca4) input_focus_pane_g5

0xb129,	// (0x00052cac) input_focus_pane_g6

0xb131,	// (0x00052cb4) input_focus_pane_g7

0xb139,	// (0x00052cbc) input_focus_pane_g8

0xb141,	// (0x00052cc4) input_focus_pane_g9

0x8e85,	// (0x00050a08) input_focus_pane_g10

0x0009,

0xf692,	// (0x00057215) input_focus_pane_g

0xc685,	// (0x00054208) wait_border_pane_g3_copy1

0x896f,	// (0x000504f2) data_form_pane_t1

0x8e85,	// (0x00050a08) wait_anim_pane_g1_copy1

0x8ce8,	// (0x0005086b) data_form_wide_pane_t1

0x8989,	// (0x0005050c) list_form_graphic_pane_cp_ParamLimits

0x8989,	// (0x0005050c) list_form_graphic_pane_cp

0xd2fd,	// (0x00054e80) slider_form_pane_g1

0xd306,	// (0x00054e89) slider_form_pane_g2

0x0006,

0xf990,	// (0x00057513) slider_form_pane_g

0x8989,	// (0x0005050c) list_form_graphic_pane_ParamLimits

0x8989,	// (0x0005050c) list_form_graphic_pane

0x31e0,	// (0x0004ad63) list_form_graphic_pane_g1

0x31e8,	// (0x0004ad6b) list_form_graphic_pane_t1_ParamLimits

0x31e8,	// (0x0004ad6b) list_form_graphic_pane_t1

0x8efb,	// (0x00050a7e) list_highlight_pane_cp5_ParamLimits

0x8efb,	// (0x00050a7e) list_highlight_pane_cp5

0x31fd,	// (0x0004ad80) find_pane_g1

0xb149,	// (0x00052ccc) input_find_pane

0x3206,	// (0x0004ad89) input_find_pane_g1_ParamLimits

0x3206,	// (0x0004ad89) input_find_pane_g1

0x3212,	// (0x0004ad95) input_find_pane_t1_ParamLimits

0x3212,	// (0x0004ad95) input_find_pane_t1

0x3227,	// (0x0004adaa) input_find_pane_t2_ParamLimits

0x3227,	// (0x0004adaa) input_find_pane_t2

0x0001,

0xf6a7,	// (0x0005722a) input_find_pane_t_ParamLimits

0xf6a7,	// (0x0005722a) input_find_pane_t

0xb152,	// (0x00052cd5) input_focus_pane_cp5_ParamLimits

0xb152,	// (0x00052cd5) input_focus_pane_cp5

0xb160,	// (0x00052ce3) bg_popup_window_pane_cp2_ParamLimits

0xb160,	// (0x00052ce3) bg_popup_window_pane_cp2

0xb16d,	// (0x00052cf0) listscroll_menu_pane_ParamLimits

0xb16d,	// (0x00052cf0) listscroll_menu_pane

0x89a7,	// (0x0005052a) popup_submenu_window_ParamLimits

0x89a7,	// (0x0005052a) popup_submenu_window

0xb179,	// (0x00052cfc) find_popup_pane_g1

0xb181,	// (0x00052d04) input_popup_find_pane_cp

0xb152,	// (0x00052cd5) input_focus_pane_cp4_ParamLimits

0xb152,	// (0x00052cd5) input_focus_pane_cp4

0xb18b,	// (0x00052d0e) input_popup_find_pane_t1_ParamLimits

0xb18b,	// (0x00052d0e) input_popup_find_pane_t1

0x8e8f,	// (0x00050a12) bg_popup_sub_pane_cp

0xb1b9,	// (0x00052d3c) listscroll_popup_sub_pane

0xb1c1,	// (0x00052d44) list_submenu_pane_ParamLimits

0xb1c1,	// (0x00052d44) list_submenu_pane

0xb1d2,	// (0x00052d55) scroll_pane_cp4

0xb1da,	// (0x00052d5d) list_single_popup_submenu_pane_ParamLimits

0xb1da,	// (0x00052d5d) list_single_popup_submenu_pane

0xb1ee,	// (0x00052d71) list_single_popup_submenu_pane_g1

0xb1f6,	// (0x00052d79) list_single_popup_submenu_pane_t1_ParamLimits

0xb1f6,	// (0x00052d79) list_single_popup_submenu_pane_t1

0x8edd,	// (0x00050a60) bg_active_tab_pane_cp1_ParamLimits

0x8edd,	// (0x00050a60) bg_active_tab_pane_cp1

0x89dd,	// (0x00050560) tabs_2_active_pane_g1

0x89e5,	// (0x00050568) tabs_2_active_pane_t1

0x8edd,	// (0x00050a60) bg_passive_tab_pane_cp1_ParamLimits

0x8edd,	// (0x00050a60) bg_passive_tab_pane_cp1

0x89dd,	// (0x00050560) tabs_2_passive_pane_g1

0x89e5,	// (0x00050568) tabs_2_passive_pane_t1

0x8efb,	// (0x00050a7e) bg_active_tab_pane_cp4

0x89f7,	// (0x0005057a) tabs_2_long_active_pane_t1

0xb20b,	// (0x00052d8e) bg_passive_tab_pane_cp4

0x194f,	// (0x000494d2) list_single_midp_graphic_pane_g4_ParamLimits

0x8efb,	// (0x00050a7e) bg_active_tab_pane_cp5

0x8a0a,	// (0x0005058d) tabs_3_long_active_pane_t1

0xb20b,	// (0x00052d8e) bg_passive_tab_pane_cp5

0x194f,	// (0x000494d2) list_single_midp_graphic_pane_g4

0x8efb,	// (0x00050a7e) bg_popup_window_pane_cp13_ParamLimits

0x8efb,	// (0x00050a7e) bg_popup_window_pane_cp13

0xb41f,	// (0x00052fa2) listscroll_popup_fast_pane_ParamLimits

0xb41f,	// (0x00052fa2) listscroll_popup_fast_pane

0xb42b,	// (0x00052fae) grid_popup_fast_pane_ParamLimits

0xb42b,	// (0x00052fae) grid_popup_fast_pane

0xb43d,	// (0x00052fc0) scroll_pane_cp9_ParamLimits

0xb43d,	// (0x00052fc0) scroll_pane_cp9

0xe66c,	// (0x000561ef) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xe66c,	// (0x000561ef) list_single_graphic_hl_pane_t1_cp2

0xb461,	// (0x00052fe4) input_focus_pane_cp20_ParamLimits

0xb461,	// (0x00052fe4) input_focus_pane_cp20

0xb46f,	// (0x00052ff2) query_popup_data_pane_t1_ParamLimits

0xb46f,	// (0x00052ff2) query_popup_data_pane_t1

0xb482,	// (0x00053005) query_popup_data_pane_t2_ParamLimits

0xb482,	// (0x00053005) query_popup_data_pane_t2

0xb4c8,	// (0x0005304b) query_popup_data_pane_t3_ParamLimits

0xb4c8,	// (0x0005304b) query_popup_data_pane_t3

0xb509,	// (0x0005308c) query_popup_data_pane_t4_ParamLimits

0xb509,	// (0x0005308c) query_popup_data_pane_t4

0xb545,	// (0x000530c8) query_popup_data_pane_t5_ParamLimits

0xb545,	// (0x000530c8) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x0005722f) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x0005722f) query_popup_data_pane_t

0xb101,	// (0x00052c84) bg_set_opt_pane_g1

0xb109,	// (0x00052c8c) bg_set_opt_pane_g2

0xb111,	// (0x00052c94) bg_set_opt_pane_g3

0xb119,	// (0x00052c9c) bg_set_opt_pane_g4

0xb121,	// (0x00052ca4) bg_set_opt_pane_g5

0xb129,	// (0x00052cac) bg_set_opt_pane_g6

0xb131,	// (0x00052cb4) bg_set_opt_pane_g7

0xb139,	// (0x00052cbc) bg_set_opt_pane_g8

0xb141,	// (0x00052cc4) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x0005723a) bg_set_opt_pane_g

0x0ff3,	// (0x00048b76) control_top_pane_stacon_ParamLimits

0x0ff3,	// (0x00048b76) control_top_pane_stacon

0x1046,	// (0x00048bc9) signal_pane_stacon_ParamLimits

0x1046,	// (0x00048bc9) signal_pane_stacon

0xba0f,	// (0x00053592) stacon_top_pane_g1_ParamLimits

0xba0f,	// (0x00053592) stacon_top_pane_g1

0x106b,	// (0x00048bee) title_pane_stacon_ParamLimits

0x106b,	// (0x00048bee) title_pane_stacon

0x1095,	// (0x00048c18) uni_indicator_pane_stacon_ParamLimits

0x1095,	// (0x00048c18) uni_indicator_pane_stacon

0x10aa,	// (0x00048c2d) battery_pane_stacon_ParamLimits

0x10aa,	// (0x00048c2d) battery_pane_stacon

0x10ee,	// (0x00048c71) control_bottom_pane_stacon_ParamLimits

0x10ee,	// (0x00048c71) control_bottom_pane_stacon

0x1111,	// (0x00048c94) navi_pane_stacon_ParamLimits

0x1111,	// (0x00048c94) navi_pane_stacon

0xba31,	// (0x000535b4) stacon_bottom_pane_g1_ParamLimits

0xba31,	// (0x000535b4) stacon_bottom_pane_g1

0x0d5d,	// (0x000488e0) aid_levels_signal_lsc_ParamLimits

0x0d5d,	// (0x000488e0) aid_levels_signal_lsc

0x0d74,	// (0x000488f7) signal_pane_stacon_g1_ParamLimits

0x0d74,	// (0x000488f7) signal_pane_stacon_g1

0x0d88,	// (0x0004890b) signal_pane_stacon_g2_ParamLimits

0x0d88,	// (0x0004890b) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x0005724d) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0005724d) signal_pane_stacon_g

0x0dbd,	// (0x00048940) title_pane_stacon_t1_ParamLimits

0x0dbd,	// (0x00048940) title_pane_stacon_t1

0xb589,	// (0x0005310c) uni_indicator_pane_stacon_g1

0xb593,	// (0x00053116) uni_indicator_pane_stacon_g2

0xb59d,	// (0x00053120) uni_indicator_pane_stacon_g3

0xb5a7,	// (0x0005312a) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x00057259) uni_indicator_pane_stacon_g

0x0de2,	// (0x00048965) control_top_pane_stacon_g1

0x0dea,	// (0x0004896d) control_top_pane_stacon_t1_ParamLimits

0x0dea,	// (0x0004896d) control_top_pane_stacon_t1

0x0e21,	// (0x000489a4) aid_levels_battery_lsc_ParamLimits

0x0e21,	// (0x000489a4) aid_levels_battery_lsc

0x0e39,	// (0x000489bc) battery_pane_stacon_g1_ParamLimits

0x0e39,	// (0x000489bc) battery_pane_stacon_g1

0x0e4c,	// (0x000489cf) battery_pane_stacon_g2_ParamLimits

0x0e4c,	// (0x000489cf) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x00057262) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x00057262) battery_pane_stacon_g

0x0e8a,	// (0x00048a0d) navi_icon_pane_stacon

0x0e9e,	// (0x00048a21) navi_navi_pane_stacon

0x0e8a,	// (0x00048a0d) navi_text_pane_stacon

0x0de2,	// (0x00048965) control_bottom_pane_stacon_g1

0x0eb2,	// (0x00048a35) control_bottom_pane_stacon_t1_ParamLimits

0x0eb2,	// (0x00048a35) control_bottom_pane_stacon_t1

0x8a1c,	// (0x0005059f) grid_app_pane_ParamLimits

0x8a1c,	// (0x0005059f) grid_app_pane

0x8a52,	// (0x000505d5) scroll_pane_cp15_ParamLimits

0x8a52,	// (0x000505d5) scroll_pane_cp15

0x8a67,	// (0x000505ea) cell_app_pane_ParamLimits

0x8a67,	// (0x000505ea) cell_app_pane

0x8aae,	// (0x00050631) cell_app_pane_g1_ParamLimits

0x8aae,	// (0x00050631) cell_app_pane_g1

0xb5cb,	// (0x0005314e) cell_app_pane_g2_ParamLimits

0xb5cb,	// (0x0005314e) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x00057267) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x00057267) cell_app_pane_g

0x8ace,	// (0x00050651) cell_app_pane_t1_ParamLimits

0x8ace,	// (0x00050651) cell_app_pane_t1

0xb5d7,	// (0x0005315a) grid_highlight_pane_ParamLimits

0xb5d7,	// (0x0005315a) grid_highlight_pane

0xb101,	// (0x00052c84) cell_highlight_pane_g1

0xb109,	// (0x00052c8c) cell_highlight_pane_g2

0xb111,	// (0x00052c94) cell_highlight_pane_g3

0xb119,	// (0x00052c9c) cell_highlight_pane_g4

0xb121,	// (0x00052ca4) cell_highlight_pane_g5

0xb129,	// (0x00052cac) cell_highlight_pane_g6

0xb131,	// (0x00052cb4) cell_highlight_pane_g7

0xb139,	// (0x00052cbc) cell_highlight_pane_g8

0xb141,	// (0x00052cc4) cell_highlight_pane_g9

0x8e85,	// (0x00050a08) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x00057215) cell_highlight_pane_g

0xb5e8,	// (0x0005316b) bg_scroll_pane

0x0efc,	// (0x00048a7f) scroll_handle_pane

0xb62f,	// (0x000531b2) scroll_bg_pane_g1

0xb644,	// (0x000531c7) scroll_bg_pane_g2

0xb65c,	// (0x000531df) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x0005726c) scroll_bg_pane_g

0xb671,	// (0x000531f4) scroll_handle_focus_pane_ParamLimits

0xb671,	// (0x000531f4) scroll_handle_focus_pane

0xb62f,	// (0x000531b2) scroll_handle_pane_g1

0xb67e,	// (0x00053201) scroll_handle_pane_g2

0xb65c,	// (0x000531df) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x00057273) scroll_handle_pane_g

0xb152,	// (0x00052cd5) bg_popup_sub_pane_cp21_ParamLimits

0xb152,	// (0x00052cd5) bg_popup_sub_pane_cp21

0xb692,	// (0x00053215) popup_fep_japan_predictive_window_t1_ParamLimits

0xb692,	// (0x00053215) popup_fep_japan_predictive_window_t1

0xb6ac,	// (0x0005322f) popup_fep_japan_predictive_window_t2_ParamLimits

0xb6ac,	// (0x0005322f) popup_fep_japan_predictive_window_t2

0xb6df,	// (0x00053262) popup_fep_japan_predictive_window_t3_ParamLimits

0xb6df,	// (0x00053262) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x0005727a) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x0005727a) popup_fep_japan_predictive_window_t

0x8e8f,	// (0x00050a12) bg_popup_sub_pane_cp23

0xb716,	// (0x00053299) listscroll_japin_cand_pane

0xb71e,	// (0x000532a1) popup_fep_japan_candidate_window_t1

0xb72c,	// (0x000532af) candidate_pane_ParamLimits

0xb72c,	// (0x000532af) candidate_pane

0xb73e,	// (0x000532c1) scroll_pane_cp30

0xb746,	// (0x000532c9) list_single_popup_jap_candidate_pane_ParamLimits

0xb746,	// (0x000532c9) list_single_popup_jap_candidate_pane

0x8e8f,	// (0x00050a12) list_highlight_pane_cp30

0xb75a,	// (0x000532dd) list_single_popup_jap_candidate_pane_t1

0xb7cc,	// (0x0005334f) level_1_signal

0xb7d9,	// (0x0005335c) level_2_signal

0xb7e6,	// (0x00053369) level_3_signal

0xb7f3,	// (0x00053376) level_4_signal

0xb800,	// (0x00053383) level_5_signal

0xb80d,	// (0x00053390) level_6_signal

0xb81a,	// (0x0005339d) level_7_signal

0xb7cc,	// (0x0005334f) level_1_battery

0xb7d9,	// (0x0005335c) level_2_battery

0xb7e6,	// (0x00053369) level_3_battery

0xb7f3,	// (0x00053376) level_4_battery

0xb800,	// (0x00053383) level_5_battery

0xb80d,	// (0x00053390) level_6_battery

0xb81a,	// (0x0005339d) level_7_battery

0xb83f,	// (0x000533c2) list_menu_pane_ParamLimits

0xb83f,	// (0x000533c2) list_menu_pane

0xb855,	// (0x000533d8) scroll_pane_cp25_ParamLimits

0xb855,	// (0x000533d8) scroll_pane_cp25

0xb86e,	// (0x000533f1) list_double2_graphic_pane_cp2_ParamLimits

0xb86e,	// (0x000533f1) list_double2_graphic_pane_cp2

0xb86e,	// (0x000533f1) list_double2_large_graphic_pane_cp2_ParamLimits

0xb86e,	// (0x000533f1) list_double2_large_graphic_pane_cp2

0xb86e,	// (0x000533f1) list_double2_pane_cp2_ParamLimits

0xb86e,	// (0x000533f1) list_double2_pane_cp2

0xb86e,	// (0x000533f1) list_double_graphic_pane_cp2_ParamLimits

0xb86e,	// (0x000533f1) list_double_graphic_pane_cp2

0xb86e,	// (0x000533f1) list_double_large_graphic_pane_cp2_ParamLimits

0xb86e,	// (0x000533f1) list_double_large_graphic_pane_cp2

0xb86e,	// (0x000533f1) list_double_number_pane_cp2_ParamLimits

0xb86e,	// (0x000533f1) list_double_number_pane_cp2

0xb86e,	// (0x000533f1) list_double_pane_cp2_ParamLimits

0xb86e,	// (0x000533f1) list_double_pane_cp2

0x8af6,	// (0x00050679) list_single_2graphic_pane_cp2_ParamLimits

0x8af6,	// (0x00050679) list_single_2graphic_pane_cp2

0x8af6,	// (0x00050679) list_single_graphic_heading_pane_cp2_ParamLimits

0x8af6,	// (0x00050679) list_single_graphic_heading_pane_cp2

0x8af6,	// (0x00050679) list_single_graphic_pane_cp2_ParamLimits

0x8af6,	// (0x00050679) list_single_graphic_pane_cp2

0x8af6,	// (0x00050679) list_single_heading_pane_cp2_ParamLimits

0x8af6,	// (0x00050679) list_single_heading_pane_cp2

0xb87e,	// (0x00053401) list_single_large_graphic_pane_cp2_ParamLimits

0xb87e,	// (0x00053401) list_single_large_graphic_pane_cp2

0x8af6,	// (0x00050679) list_single_number_heading_pane_cp2_ParamLimits

0x8af6,	// (0x00050679) list_single_number_heading_pane_cp2

0x8af6,	// (0x00050679) list_single_number_pane_cp2_ParamLimits

0x8af6,	// (0x00050679) list_single_number_pane_cp2

0x8af6,	// (0x00050679) list_single_pane_cp2_ParamLimits

0x8af6,	// (0x00050679) list_single_pane_cp2

0xb898,	// (0x0005341b) bg_popup_sub_pane_cp22

0x0fab,	// (0x00048b2e) popup_side_volume_key_window_g1

0x0fcf,	// (0x00048b52) popup_side_volume_key_window_t1

0x0feb,	// (0x00048b6e) volume_small_pane_cp1

0x8edd,	// (0x00050a60) bg_popup_sub_pane_cp24_ParamLimits

0x8edd,	// (0x00050a60) bg_popup_sub_pane_cp24

0xb8ae,	// (0x00053431) fep_china_uni_candidate_pane_ParamLimits

0xb8ae,	// (0x00053431) fep_china_uni_candidate_pane

0xb8c2,	// (0x00053445) fep_china_uni_entry_pane

0xb8d2,	// (0x00053455) popup_fep_china_uni_window_g1

0xb8ee,	// (0x00053471) fep_china_uni_entry_pane_g1

0xb8f6,	// (0x00053479) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x000572ab) fep_china_uni_entry_pane_g

0xb8fe,	// (0x00053481) fep_entry_item_pane

0xb908,	// (0x0005348b) fep_candidate_item_pane

0xb910,	// (0x00053493) fep_china_uni_candidate_pane_g1

0xb918,	// (0x0005349b) fep_china_uni_candidate_pane_g2

0xb920,	// (0x000534a3) fep_china_uni_candidate_pane_g3

0xb928,	// (0x000534ab) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x000572b0) fep_china_uni_candidate_pane_g

0x8e85,	// (0x00050a08) fep_entry_item_pane_g1

0xb930,	// (0x000534b3) fep_entry_item_pane_t1_ParamLimits

0xb930,	// (0x000534b3) fep_entry_item_pane_t1

0xb946,	// (0x000534c9) fep_candidate_item_pane_t1_ParamLimits

0xb946,	// (0x000534c9) fep_candidate_item_pane_t1

0xb95b,	// (0x000534de) fep_candidate_item_pane_t2_ParamLimits

0xb95b,	// (0x000534de) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x000572b9) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x000572b9) fep_candidate_item_pane_t

0x8efb,	// (0x00050a7e) list_highlight_pane_cp31_ParamLimits

0x8efb,	// (0x00050a7e) list_highlight_pane_cp31

0xb96d,	// (0x000534f0) level_1_signal_lsc

0xb976,	// (0x000534f9) level_2_signal_lsc

0xb97f,	// (0x00053502) level_3_signal_lsc

0xb988,	// (0x0005350b) level_4_signal_lsc

0xb991,	// (0x00053514) level_5_signal_lsc

0xb99a,	// (0x0005351d) level_6_signal_lsc

0xb9a3,	// (0x00053526) level_7_signal_lsc

0xb9a3,	// (0x00053526) level_1_battery_lsc

0xb9ac,	// (0x0005352f) level_2_battery_lsc

0xb9b5,	// (0x00053538) level_3_battery_lsc

0xb9be,	// (0x00053541) level_4_battery_lsc

0xb9c7,	// (0x0005354a) level_5_battery_lsc

0xb9d0,	// (0x00053553) level_6_battery_lsc

0xb96d,	// (0x000534f0) level_7_battery_lsc

0xb9d9,	// (0x0005355c) scroll_handle_focus_pane_g1

0xb9e2,	// (0x00053565) scroll_handle_focus_pane_g2

0xb9eb,	// (0x0005356e) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x000572be) scroll_handle_focus_pane_g

0x33e6,	// (0x0004af69) list_single_2graphic_pane_g1_ParamLimits

0x33e6,	// (0x0004af69) list_single_2graphic_pane_g1

0x72b8,	// (0x0004ee3b) list_single_2graphic_pane_g2_ParamLimits

0x72b8,	// (0x0004ee3b) list_single_2graphic_pane_g2

0x2e7c,	// (0x0004a9ff) list_single_2graphic_pane_g3_ParamLimits

0x2e7c,	// (0x0004a9ff) list_single_2graphic_pane_g3

0x33f2,	// (0x0004af75) list_single_2graphic_pane_g4_ParamLimits

0x33f2,	// (0x0004af75) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x000572c5) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x000572c5) list_single_2graphic_pane_g

0x3403,	// (0x0004af86) list_single_2graphic_pane_t1_ParamLimits

0x3403,	// (0x0004af86) list_single_2graphic_pane_t1

0x8b83,	// (0x00050706) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8b83,	// (0x00050706) list_double2_graphic_large_graphic_pane_g1

0x7474,	// (0x0004eff7) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7474,	// (0x0004eff7) list_double2_graphic_large_graphic_pane_g2

0x72d5,	// (0x0004ee58) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x72d5,	// (0x0004ee58) list_double2_graphic_large_graphic_pane_g3

0x8b95,	// (0x00050718) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8b95,	// (0x00050718) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x000572ce) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x000572ce) list_double2_graphic_large_graphic_pane_g

0x8ba1,	// (0x00050724) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8ba1,	// (0x00050724) list_double2_graphic_large_graphic_pane_t1

0x8bb7,	// (0x0005073a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8bb7,	// (0x0005073a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x000572d7) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x000572d7) list_double2_graphic_large_graphic_pane_t

0xbada,	// (0x0005365d) popup_fast_swap_window_ParamLimits

0xbada,	// (0x0005365d) popup_fast_swap_window

0xbaf6,	// (0x00053679) popup_side_volume_key_window

0xbb10,	// (0x00053693) stacon_top_pane

0xbb1a,	// (0x0005369d) status_pane_ParamLimits

0xbb1a,	// (0x0005369d) status_pane

0xbb10,	// (0x00053693) status_small_pane

0x8e8f,	// (0x00050a12) control_pane

0x8e8f,	// (0x00050a12) stacon_bottom_pane

0xb095,	// (0x00052c18) scroll_pane_cp121

0xb08c,	// (0x00052c0f) set_content_pane

0x8bc9,	// (0x0005074c) bg_active_tab_pane_g1_cp1

0xb9f4,	// (0x00053577) bg_active_tab_pane_g2_cp1

0x8bd2,	// (0x00050755) bg_active_tab_pane_g3_cp1

0x8bc9,	// (0x0005074c) bg_passive_tab_pane_g1_cp1

0xb9f4,	// (0x00053577) bg_passive_tab_pane_g2_cp1

0x8bd2,	// (0x00050755) bg_passive_tab_pane_g3_cp1

0x8bdb,	// (0x0005075e) bg_active_tab_pane_g1_cp2

0xb9f4,	// (0x00053577) bg_active_tab_pane_g2_cp2

0x8be4,	// (0x00050767) bg_active_tab_pane_g3_cp2

0x8bdb,	// (0x0005075e) bg_passive_tab_pane_g1_cp2

0xb9f4,	// (0x00053577) bg_passive_tab_pane_g2_cp2

0x8be4,	// (0x00050767) bg_passive_tab_pane_g3_cp2

0xb9fd,	// (0x00053580) bg_active_tab_pane_g1_cp3

0xb9f4,	// (0x00053577) bg_active_tab_pane_g2_cp3

0xba06,	// (0x00053589) bg_active_tab_pane_g3_cp3

0xb9fd,	// (0x00053580) bg_passive_tab_pane_g1_cp3

0xb9f4,	// (0x00053577) bg_passive_tab_pane_g2_cp3

0xba06,	// (0x00053589) bg_passive_tab_pane_g3_cp3

0x8bed,	// (0x00050770) bg_active_tab_pane_g1_cp4

0xb9f4,	// (0x00053577) bg_active_tab_pane_g2_cp4

0x8bf8,	// (0x0005077b) bg_active_tab_pane_g3_cp4

0x8bed,	// (0x00050770) bg_passive_tab_pane_g1_cp4

0xb9f4,	// (0x00053577) bg_passive_tab_pane_g2_cp4

0x8bf8,	// (0x0005077b) bg_passive_tab_pane_g3_cp4

0xba4d,	// (0x000535d0) bg_active_tab_pane_g1_cp5

0xb9f4,	// (0x00053577) bg_active_tab_pane_g2_cp5

0xba56,	// (0x000535d9) bg_active_tab_pane_g3_cp5

0xba4d,	// (0x000535d0) bg_passive_tab_pane_g1_cp5

0xb9f4,	// (0x00053577) bg_passive_tab_pane_g2_cp5

0xba56,	// (0x000535d9) bg_passive_tab_pane_g3_cp5

0xce5f,	// (0x000549e2) list_set_graphic_pane_ParamLimits

0xce5f,	// (0x000549e2) list_set_graphic_pane

0x8e8f,	// (0x00050a12) bg_set_opt_pane_cp4

0xba5f,	// (0x000535e2) list_set_graphic_pane_g1_ParamLimits

0xba5f,	// (0x000535e2) list_set_graphic_pane_g1

0xba6b,	// (0x000535ee) list_set_graphic_pane_g2_ParamLimits

0xba6b,	// (0x000535ee) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x000572dc) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x000572dc) list_set_graphic_pane_g

0x0009,

0xfa96,	// (0x00057619) volume_small_pane_cp_g

0xba8d,	// (0x00053610) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xba8d,	// (0x00053610) list_double2_large_graphic_pane_g1_cp2

0xba99,	// (0x0005361c) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xba99,	// (0x0005361c) list_double2_large_graphic_pane_g2_cp2

0xbaaa,	// (0x0005362d) list_double2_large_graphic_pane_g3_cp2

0xbab2,	// (0x00053635) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xbab2,	// (0x00053635) list_double2_large_graphic_pane_t1_cp2

0xbac8,	// (0x0005364b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xbac8,	// (0x0005364b) list_double2_large_graphic_pane_t2_cp2

0xd0c3,	// (0x00054c46) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd0c3,	// (0x00054c46) list_double_large_graphic_pane_g1_cp2

0xd0d4,	// (0x00054c57) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd0d4,	// (0x00054c57) list_double_large_graphic_pane_g2_cp2

0xbc36,	// (0x000537b9) list_double_large_graphic_pane_g3_cp2

0xd0e5,	// (0x00054c68) list_double_large_graphic_pane_g4_cp

0xd0ed,	// (0x00054c70) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xd0ed,	// (0x00054c70) list_double_large_graphic_pane_t1_cp2

0xd104,	// (0x00054c87) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xd104,	// (0x00054c87) list_double_large_graphic_pane_t2_cp2

0xbb28,	// (0x000536ab) list_double2_graphic_pane_g1_cp2_ParamLimits

0xbb28,	// (0x000536ab) list_double2_graphic_pane_g1_cp2

0xbb36,	// (0x000536b9) list_double2_graphic_pane_g2_cp2_ParamLimits

0xbb36,	// (0x000536b9) list_double2_graphic_pane_g2_cp2

0xbb47,	// (0x000536ca) list_double2_graphic_pane_g3_cp2

0xbb51,	// (0x000536d4) list_double2_graphic_pane_t1_cp2_ParamLimits

0xbb51,	// (0x000536d4) list_double2_graphic_pane_t1_cp2

0xbb67,	// (0x000536ea) list_double2_graphic_pane_t2_cp2_ParamLimits

0xbb67,	// (0x000536ea) list_double2_graphic_pane_t2_cp2

0xbb79,	// (0x000536fc) list_single_number_heading_pane_g1_cp2_ParamLimits

0xbb79,	// (0x000536fc) list_single_number_heading_pane_g1_cp2

0xbb85,	// (0x00053708) list_single_number_heading_pane_g2_cp2

0xbb8d,	// (0x00053710) list_single_number_heading_pane_t1_cp2_ParamLimits

0xbb8d,	// (0x00053710) list_single_number_heading_pane_t1_cp2

0xbba3,	// (0x00053726) list_single_number_heading_pane_t2_cp2_ParamLimits

0xbba3,	// (0x00053726) list_single_number_heading_pane_t2_cp2

0xbbb5,	// (0x00053738) list_single_number_heading_pane_t3_cp2_ParamLimits

0xbbb5,	// (0x00053738) list_single_number_heading_pane_t3_cp2

0xbb79,	// (0x000536fc) list_single_heading_pane_g1_cp2_ParamLimits

0xbb79,	// (0x000536fc) list_single_heading_pane_g1_cp2

0xbb85,	// (0x00053708) list_single_heading_pane_g2_cp2

0xbb8d,	// (0x00053710) list_single_heading_pane_t1_cp2_ParamLimits

0xbb8d,	// (0x00053710) list_single_heading_pane_t1_cp2

0xcecd,	// (0x00054a50) list_single_heading_pane_t2_cp2_ParamLimits

0xcecd,	// (0x00054a50) list_single_heading_pane_t2_cp2

0xcdf6,	// (0x00054979) list_double_graphic_pane_g1_cp2_ParamLimits

0xcdf6,	// (0x00054979) list_double_graphic_pane_g1_cp2

0xce02,	// (0x00054985) list_double_graphic_pane_g2_cp2_ParamLimits

0xce02,	// (0x00054985) list_double_graphic_pane_g2_cp2

0xce11,	// (0x00054994) list_double_graphic_pane_g3_cp2

0xce19,	// (0x0005499c) list_double_graphic_pane_t1_cp2_ParamLimits

0xce19,	// (0x0005499c) list_double_graphic_pane_t1_cp2

0xce2f,	// (0x000549b2) list_double_graphic_pane_t2_cp2_ParamLimits

0xce2f,	// (0x000549b2) list_double_graphic_pane_t2_cp2

0xbc2a,	// (0x000537ad) list_double_number_pane_g1_cp2_ParamLimits

0xbc2a,	// (0x000537ad) list_double_number_pane_g1_cp2

0xbc36,	// (0x000537b9) list_double_number_pane_g2_cp2

0xcdba,	// (0x0005493d) list_double_number_pane_t1_cp2_ParamLimits

0xcdba,	// (0x0005493d) list_double_number_pane_t1_cp2

0xcdce,	// (0x00054951) list_double_number_pane_t2_cp2_ParamLimits

0xcdce,	// (0x00054951) list_double_number_pane_t2_cp2

0xcde4,	// (0x00054967) list_double_number_pane_t3_cp2_ParamLimits

0xcde4,	// (0x00054967) list_double_number_pane_t3_cp2

0xcd23,	// (0x000548a6) list_single_graphic_pane_g1_cp2_ParamLimits

0xcd23,	// (0x000548a6) list_single_graphic_pane_g1_cp2

0x9a91,	// (0x00051614) list_single_graphic_pane_g2_cp2_ParamLimits

0x9a91,	// (0x00051614) list_single_graphic_pane_g2_cp2

0xbc8e,	// (0x00053811) list_single_graphic_pane_g3_cp2

0xccf9,	// (0x0005487c) list_single_graphic_pane_t1_cp2_ParamLimits

0xccf9,	// (0x0005487c) list_single_graphic_pane_t1_cp2

0x9a91,	// (0x00051614) list_single_number_pane_g1_cp2_ParamLimits

0x9a91,	// (0x00051614) list_single_number_pane_g1_cp2

0xbc8e,	// (0x00053811) list_single_number_pane_g2_cp2

0xccf9,	// (0x0005487c) list_single_number_pane_t1_cp2_ParamLimits

0xccf9,	// (0x0005487c) list_single_number_pane_t1_cp2

0xcd0f,	// (0x00054892) list_single_number_pane_t2_cp2_ParamLimits

0xcd0f,	// (0x00054892) list_single_number_pane_t2_cp2

0xba99,	// (0x0005361c) list_double2_pane_g1_cp2_ParamLimits

0xba99,	// (0x0005361c) list_double2_pane_g1_cp2

0xbaaa,	// (0x0005362d) list_double2_pane_g2_cp2

0xbc02,	// (0x00053785) list_double2_pane_t1_cp2_ParamLimits

0xbc02,	// (0x00053785) list_double2_pane_t1_cp2

0xbc18,	// (0x0005379b) list_double2_pane_t2_cp2_ParamLimits

0xbc18,	// (0x0005379b) list_double2_pane_t2_cp2

0xbc2a,	// (0x000537ad) list_double_pane_g1_cp2_ParamLimits

0xbc2a,	// (0x000537ad) list_double_pane_g1_cp2

0xbc36,	// (0x000537b9) list_double_pane_g2_cp2

0xbc3e,	// (0x000537c1) list_double_pane_t1_cp2_ParamLimits

0xbc3e,	// (0x000537c1) list_double_pane_t1_cp2

0xbc54,	// (0x000537d7) list_double_pane_t2_cp2_ParamLimits

0xbc54,	// (0x000537d7) list_double_pane_t2_cp2

0xbc7e,	// (0x00053801) list_single_pane_cp2_g3

0x9a91,	// (0x00051614) list_single_pane_g1_cp2_ParamLimits

0x9a91,	// (0x00051614) list_single_pane_g1_cp2

0xbc8e,	// (0x00053811) list_single_pane_g2_cp2

0xbc96,	// (0x00053819) list_single_pane_t1_cp2_ParamLimits

0xbc96,	// (0x00053819) list_single_pane_t1_cp2

0xbcae,	// (0x00053831) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xbcae,	// (0x00053831) list_single_large_graphic_pane_g1_cp2

0xbcba,	// (0x0005383d) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xbcba,	// (0x0005383d) list_single_large_graphic_pane_g2_cp2

0xbcc6,	// (0x00053849) list_single_large_graphic_pane_g3_cp2

0xbcce,	// (0x00053851) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xbcce,	// (0x00053851) list_single_large_graphic_pane_g4_cp1

0xbce8,	// (0x0005386b) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xbce8,	// (0x0005386b) list_single_large_graphic_pane_t1_cp2

0xccc5,	// (0x00054848) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xccc5,	// (0x00054848) list_single_graphic_heading_pane_g1_cp2

0xcc92,	// (0x00054815) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xcc92,	// (0x00054815) list_single_graphic_heading_pane_g4_cp2

0xbc8e,	// (0x00053811) list_single_graphic_heading_pane_g5_cp2

0xccd1,	// (0x00054854) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xccd1,	// (0x00054854) list_single_graphic_heading_pane_t1_cp2

0xcce7,	// (0x0005486a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xcce7,	// (0x0005486a) list_single_graphic_heading_pane_t2_cp2

0xcc86,	// (0x00054809) list_single_2graphic_pane_g1_cp2_ParamLimits

0xcc86,	// (0x00054809) list_single_2graphic_pane_g1_cp2

0xcc92,	// (0x00054815) list_single_2graphic_pane_g2_cp2_ParamLimits

0xcc92,	// (0x00054815) list_single_2graphic_pane_g2_cp2

0xbc8e,	// (0x00053811) list_single_2graphic_pane_g3_cp2

0xcca3,	// (0x00054826) list_single_2graphic_pane_g4_cp2_ParamLimits

0xcca3,	// (0x00054826) list_single_2graphic_pane_g4_cp2

0xccaf,	// (0x00054832) list_single_2graphic_pane_t1_cp2_ParamLimits

0xccaf,	// (0x00054832) list_single_2graphic_pane_t1_cp2

0x8e85,	// (0x00050a08) list_highlight_pane_g10_cp1

0xc87c,	// (0x000543ff) list_highlight_pane_g1_cp1

0xc884,	// (0x00054407) list_highlight_pane_g2_cp1

0xc88c,	// (0x0005440f) list_highlight_pane_g3_cp1

0xc894,	// (0x00054417) list_highlight_pane_g4_cp1

0xc89c,	// (0x0005441f) list_highlight_pane_g5_cp1

0xc8a4,	// (0x00054427) list_highlight_pane_g6_cp1

0xc8ac,	// (0x0005442f) list_highlight_pane_g7_cp1

0xc8b4,	// (0x00054437) list_highlight_pane_g8_cp1

0xc8bc,	// (0x0005443f) list_highlight_pane_g9_cp1

0x998a,	// (0x0005150d) form_field_slider_pane_t3

0x999a,	// (0x0005151d) form_field_slider_pane_t4

0xc7b0,	// (0x00054333) slider_form_pane_ParamLimits

0xc7b0,	// (0x00054333) slider_form_pane

0x8e8f,	// (0x00050a12) control_abbreviations

0x8e8f,	// (0x00050a12) control_conventions

0x8e8f,	// (0x00050a12) control_definitions

0x8e8f,	// (0x00050a12) format_table_attribute

0xcf17,	// (0x00054a9a) bg_popup_preview_window_pane_g9

0x8e8f,	// (0x00050a12) format_table_data2

0x8e8f,	// (0x00050a12) format_table_data3

0x8e8f,	// (0x00050a12) format_table_data_example

0x0008,

0x8e8f,	// (0x00050a12) intro_purpose

0xf8f0,	// (0x00057473) bg_popup_preview_window_pane_g

0x8e8f,	// (0x00050a12) texts_category

0x8e8f,	// (0x00050a12) texts_graphics

0xbcfe,	// (0x00053881) text_digital

0xbd0d,	// (0x00053890) text_primary

0xbd1c,	// (0x0005389f) text_primary_small

0xbd2b,	// (0x000538ae) text_secondary

0xbd3a,	// (0x000538bd) text_title

0xd39a,	// (0x00054f1d) bg_passive_tab_pane_g1_cp3_srt

0xb9f4,	// (0x00053577) bg_passive_tab_pane_g2_cp3_srt

0xd3a3,	// (0x00054f26) bg_passive_tab_pane_g3_cp3_srt

0x8edd,	// (0x00050a60) bg_active_tab_pane_cp3_srt_ParamLimits

0x8edd,	// (0x00050a60) bg_active_tab_pane_cp3_srt

0xd3ac,	// (0x00054f2f) tabs_4_active_pane_srt_g1

0x9de9,	// (0x0005196c) tabs_4_active_pane_srt_t1_ParamLimits

0x9de9,	// (0x0005196c) tabs_4_active_pane_srt_t1

0xd39a,	// (0x00054f1d) bg_active_tab_pane_g1_cp3_copy1

0xb9f4,	// (0x00053577) bg_active_tab_pane_g2_cp3_copy1

0xd3a3,	// (0x00054f26) bg_active_tab_pane_g3_cp3_copy1

0x8efb,	// (0x00050a7e) tabs_2_long_active_pane_srt_ParamLimits

0x8efb,	// (0x00050a7e) tabs_2_long_active_pane_srt

0x8efb,	// (0x00050a7e) tabs_2_long_passive_pane_srt_ParamLimits

0x8efb,	// (0x00050a7e) tabs_2_long_passive_pane_srt

0xb20b,	// (0x00052d8e) bg_passive_tab_pane_cp4_srt_ParamLimits

0xb20b,	// (0x00052d8e) bg_passive_tab_pane_cp4_srt

0xd2b6,	// (0x00054e39) bg_passive_tab_pane_g1_cp4_srt

0xb9f4,	// (0x00053577) bg_passive_tab_pane_g2_cp4_srt

0xd2bf,	// (0x00054e42) bg_passive_tab_pane_g3_cp4_srt

0x8efb,	// (0x00050a7e) bg_active_tab_pane_cp4_srt_ParamLimits

0x8efb,	// (0x00050a7e) bg_active_tab_pane_cp4_srt

0x9bee,	// (0x00051771) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9bee,	// (0x00051771) tabs_2_long_active_pane_srt_t1

0xd2b6,	// (0x00054e39) bg_active_tab_pane_g1_cp4_srt

0xb9f4,	// (0x00053577) bg_active_tab_pane_g2_cp4_srt

0xd2bf,	// (0x00054e42) bg_active_tab_pane_g3_cp4_srt

0x8edd,	// (0x00050a60) tabs_3_long_active_pane_srt_ParamLimits

0x8edd,	// (0x00050a60) tabs_3_long_active_pane_srt

0x8edd,	// (0x00050a60) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8edd,	// (0x00050a60) tabs_3_long_passive_pane_cp_srt

0x8edd,	// (0x00050a60) tabs_3_long_passive_pane_srt_ParamLimits

0x8edd,	// (0x00050a60) tabs_3_long_passive_pane_srt

0xb20b,	// (0x00052d8e) bg_passive_tab_pane_cp5_srt_ParamLimits

0xb20b,	// (0x00052d8e) bg_passive_tab_pane_cp5_srt

0xba4d,	// (0x000535d0) bg_passive_tab_pane_g1_cp5_srt

0xb9f4,	// (0x00053577) bg_passive_tab_pane_g2_cp5_srt

0xba56,	// (0x000535d9) bg_passive_tab_pane_g3_cp5_srt

0x8efb,	// (0x00050a7e) bg_active_tab_pane_cp5_srt_ParamLimits

0x8efb,	// (0x00050a7e) bg_active_tab_pane_cp5_srt

0x9bd8,	// (0x0005175b) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9bd8,	// (0x0005175b) tabs_3_long_active_pane_srt_t1

0xba4d,	// (0x000535d0) bg_active_tab_pane_g1_cp5_srt

0xb9f4,	// (0x00053577) bg_active_tab_pane_g2_cp5_srt

0xba56,	// (0x000535d9) bg_active_tab_pane_g3_cp5_srt

0xd2a8,	// (0x00054e2b) navi_text_pane_srt_t1

0xd2a0,	// (0x00054e23) navi_icon_pane_srt_g1

0xbe4a,	// (0x000539cd) midp_editing_number_pane_srt

0xbd49,	// (0x000538cc) midp_ticker_pane_srt

0xbe52,	// (0x000539d5) midp_ticker_pane_srt_g1

0xbe5a,	// (0x000539dd) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x000572fb) midp_ticker_pane_srt_g

0xbe62,	// (0x000539e5) midp_ticker_pane_srt_t1

0xd291,	// (0x00054e14) midp_editing_number_pane_t1_copy1

0xb20b,	// (0x00052d8e) listscroll_midp_pane

0xb20b,	// (0x00052d8e) midp_form_pane

0xbd51,	// (0x000538d4) midp_info_popup_window_ParamLimits

0xbd51,	// (0x000538d4) midp_info_popup_window

0xb152,	// (0x00052cd5) bg_popup_sub_pane_cp50_ParamLimits

0xb152,	// (0x00052cd5) bg_popup_sub_pane_cp50

0xc4cd,	// (0x00054050) listscroll_midp_info_pane_ParamLimits

0xc4cd,	// (0x00054050) listscroll_midp_info_pane

0xc4b5,	// (0x00054038) listscroll_form_midp_pane_ParamLimits

0xc4b5,	// (0x00054038) listscroll_form_midp_pane

0xc4c1,	// (0x00054044) scroll_bar_cp050

0x997e,	// (0x00051501) list_midp_pane

0xdcff,	// (0x00055882) signal_pane_g2_cp

0xc3e7,	// (0x00053f6a) listscroll_midp_info_pane_t1_ParamLimits

0xc3e7,	// (0x00053f6a) listscroll_midp_info_pane_t1

0xc3ff,	// (0x00053f82) listscroll_midp_info_pane_t2_ParamLimits

0xc3ff,	// (0x00053f82) listscroll_midp_info_pane_t2

0xc43d,	// (0x00053fc0) listscroll_midp_info_pane_t3_ParamLimits

0xc43d,	// (0x00053fc0) listscroll_midp_info_pane_t3

0xc477,	// (0x00053ffa) listscroll_midp_info_pane_t4_ParamLimits

0xc477,	// (0x00053ffa) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x000573ae) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x000573ae) listscroll_midp_info_pane_t

0xb1d2,	// (0x00052d55) scroll_pane_cp21

0xc389,	// (0x00053f0c) form_midp_field_choice_group_pane

0xc392,	// (0x00053f15) form_midp_field_text_pane

0xc3cd,	// (0x00053f50) form_midp_field_time_pane

0xc3d5,	// (0x00053f58) form_midp_gauge_slider_pane

0xc3de,	// (0x00053f61) form_midp_gauge_wait_pane

0x8e8f,	// (0x00050a12) form_midp_image_pane

0x8ccf,	// (0x00050852) list_single_midp_pane_ParamLimits

0x8ccf,	// (0x00050852) list_single_midp_pane

0x995b,	// (0x000514de) form_midp_field_text_pane_t1

0xc20b,	// (0x00053d8e) input_focus_pane_cp050

0xc378,	// (0x00053efb) list_midp_form_text_pane

0xc347,	// (0x00053eca) form_midp_field_choice_group_pane_t1

0xc355,	// (0x00053ed8) input_focus_pane_cp051

0xc369,	// (0x00053eec) list_midp_choice_pane

0x8e8f,	// (0x00050a12) status_idle_pane

0xc32b,	// (0x00053eae) form_midp_field_time_pane_t1

0x8e85,	// (0x00050a08) wait_anim_pane_g2_copy1

0xc339,	// (0x00053ebc) form_midp_field_time_pane_t2

0x0001,

0xbdbc,	// (0x0005393f) aid_navinavi_width_2_pane

0xf826,	// (0x000573a9) form_midp_field_time_pane_t

0x8e8f,	// (0x00050a12) input_focus_pane_cp052

0x8e8f,	// (0x00050a12) bg_input_focus_pane_cp040

0xc307,	// (0x00053e8a) form_midp_gauge_slider_pane_t1

0xc315,	// (0x00053e98) form_midp_gauge_slider_pane_t2

0x993b,	// (0x000514be) form_midp_gauge_slider_pane_t3

0x994b,	// (0x000514ce) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x000573a0) form_midp_gauge_slider_pane_t

0xc323,	// (0x00053ea6) form_midp_slider_pane

0x8efb,	// (0x00050a7e) bg_input_focus_pane_cp041_ParamLimits

0x8efb,	// (0x00050a7e) bg_input_focus_pane_cp041

0xc2d4,	// (0x00053e57) form_midp_gauge_wait_pane_t1_ParamLimits

0xc2d4,	// (0x00053e57) form_midp_gauge_wait_pane_t1

0xc2e6,	// (0x00053e69) form_midp_gauge_wait_pane_t2_ParamLimits

0xc2e6,	// (0x00053e69) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x0005739b) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x0005739b) form_midp_gauge_wait_pane_t

0xc2f8,	// (0x00053e7b) form_midp_wait_pane_ParamLimits

0xc2f8,	// (0x00053e7b) form_midp_wait_pane

0xc29e,	// (0x00053e21) form_midp_image_pane_g1

0xc2a7,	// (0x00053e2a) form_midp_image_pane_t1

0xc2b6,	// (0x00053e39) form_midp_image_pane_t2

0xc2c5,	// (0x00053e48) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x00057394) form_midp_image_pane_t

0xc295,	// (0x00053e18) list_single_midp_pane_g1

0x366b,	// (0x0004b1ee) list_single_midp_pane_t1

0x9925,	// (0x000514a8) list_midp_form_item_pane_ParamLimits

0x9925,	// (0x000514a8) list_midp_form_item_pane

0xbd64,	// (0x000538e7) list_midp_form_item_pane_t1

0xbd73,	// (0x000538f6) midp_ticker_pane_g1

0xbd7f,	// (0x00053902) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x000572e1) midp_ticker_pane_g

0xbd8b,	// (0x0005390e) midp_ticker_pane_t1

0xd341,	// (0x00054ec4) midp_editing_number_pane_t1

0xd31f,	// (0x00054ea2) midp_editing_number_pane

0xd32e,	// (0x00054eb1) midp_ticker_pane

0xd281,	// (0x00054e04) ai_message_heading_pane

0x8e8f,	// (0x00050a12) bg_popup_window_pane_cp14

0xd289,	// (0x00054e0c) listscroll_ai_message_pane

0xd20b,	// (0x00054d8e) ai_message_heading_pane_g1_ParamLimits

0xd20b,	// (0x00054d8e) ai_message_heading_pane_g1

0xd217,	// (0x00054d9a) ai_message_heading_pane_g2_ParamLimits

0xd217,	// (0x00054d9a) ai_message_heading_pane_g2

0xd223,	// (0x00054da6) ai_message_heading_pane_g3_ParamLimits

0xd223,	// (0x00054da6) ai_message_heading_pane_g3

0xd22f,	// (0x00054db2) ai_message_heading_pane_g4_ParamLimits

0xd22f,	// (0x00054db2) ai_message_heading_pane_g4

0x0003,

0xf952,	// (0x000574d5) ai_message_heading_pane_g_ParamLimits

0xf952,	// (0x000574d5) ai_message_heading_pane_g

0xd23b,	// (0x00054dbe) ai_message_heading_pane_t1_ParamLimits

0xd23b,	// (0x00054dbe) ai_message_heading_pane_t1

0xd255,	// (0x00054dd8) ai_message_heading_pane_t2_ParamLimits

0xd255,	// (0x00054dd8) ai_message_heading_pane_t2

0x0001,

0xf95b,	// (0x000574de) ai_message_heading_pane_t_ParamLimits

0xf95b,	// (0x000574de) ai_message_heading_pane_t

0xd267,	// (0x00054dea) bg_popup_heading_pane_cp1_ParamLimits

0xd267,	// (0x00054dea) bg_popup_heading_pane_cp1

0xd1f9,	// (0x00054d7c) list_ai_message_pane_ParamLimits

0xd1f9,	// (0x00054d7c) list_ai_message_pane

0xb1d2,	// (0x00052d55) scroll_pane_cp10

0xd195,	// (0x00054d18) list_ai_message_pane_g1

0xd19d,	// (0x00054d20) list_ai_message_pane_g2

0x0001,

0xf92f,	// (0x000574b2) list_ai_message_pane_g

0xd1a5,	// (0x00054d28) list_ai_message_pane_t1_ParamLimits

0xd1a5,	// (0x00054d28) list_ai_message_pane_t1

0xd1ba,	// (0x00054d3d) list_ai_message_pane_t2_ParamLimits

0xd1ba,	// (0x00054d3d) list_ai_message_pane_t2

0xd1cf,	// (0x00054d52) list_ai_message_pane_t3_ParamLimits

0xd1cf,	// (0x00054d52) list_ai_message_pane_t3

0xd1e4,	// (0x00054d67) list_ai_message_pane_t4_ParamLimits

0xd1e4,	// (0x00054d67) list_ai_message_pane_t4

0x0003,

0xf934,	// (0x000574b7) list_ai_message_pane_t_ParamLimits

0xf934,	// (0x000574b7) list_ai_message_pane_t

0x9bb6,	// (0x00051739) cell_ai_soft_ind_pane_ParamLimits

0x9bb6,	// (0x00051739) cell_ai_soft_ind_pane

0xbd9d,	// (0x00053920) cell_ai_soft_ind_pane_g1_ParamLimits

0xbd9d,	// (0x00053920) cell_ai_soft_ind_pane_g1

0x8e8f,	// (0x00050a12) grid_highlight_cp1

0xbdaa,	// (0x0005392d) text_secondary_cp56_ParamLimits

0xbdaa,	// (0x0005392d) text_secondary_cp56

0xd16a,	// (0x00054ced) example_general_pane_ParamLimits

0xd16a,	// (0x00054ced) example_general_pane

0xd176,	// (0x00054cf9) example_parent_pane_g1_ParamLimits

0xd176,	// (0x00054cf9) example_parent_pane_g1

0xd182,	// (0x00054d05) example_parent_pane_t1_ParamLimits

0xd182,	// (0x00054d05) example_parent_pane_t1

0x7bb1,	// (0x0004f734) popup_preview_text_window_ParamLimits

0x7bb1,	// (0x0004f734) popup_preview_text_window

0xbc86,	// (0x00053809) list_single_pane_cp2_g4

0x90ca,	// (0x00050c4d) bg_popup_preview_window_pane_ParamLimits

0x90ca,	// (0x00050c4d) bg_popup_preview_window_pane

0xcf1f,	// (0x00054aa2) popup_preview_text_window_t1_ParamLimits

0xcf1f,	// (0x00054aa2) popup_preview_text_window_t1

0xcf3d,	// (0x00054ac0) popup_preview_text_window_t2_ParamLimits

0xcf3d,	// (0x00054ac0) popup_preview_text_window_t2

0xcf86,	// (0x00054b09) popup_preview_text_window_t3_ParamLimits

0xcf86,	// (0x00054b09) popup_preview_text_window_t3

0xcfcb,	// (0x00054b4e) popup_preview_text_window_t4_ParamLimits

0xcfcb,	// (0x00054b4e) popup_preview_text_window_t4

0x0004,

0xf903,	// (0x00057486) popup_preview_text_window_t_ParamLimits

0xf903,	// (0x00057486) popup_preview_text_window_t

0xd049,	// (0x00054bcc) scroll_pane_cp11

0xc197,	// (0x00053d1a) bg_popup_preview_window_pane_g1

0xcedf,	// (0x00054a62) bg_popup_preview_window_pane_g2

0xcee7,	// (0x00054a6a) bg_popup_preview_window_pane_g3

0xceef,	// (0x00054a72) bg_popup_preview_window_pane_g4

0xcef7,	// (0x00054a7a) bg_popup_preview_window_pane_g5

0xceff,	// (0x00054a82) bg_popup_preview_window_pane_g6

0xcf07,	// (0x00054a8a) bg_popup_preview_window_pane_g7

0xcf0f,	// (0x00054a92) bg_popup_preview_window_pane_g8

0x0533,	// (0x000480b6) aid_popup_width_pane

0x7b2d,	// (0x0004f6b0) popup_midp_note_alarm_window_ParamLimits

0x7b2d,	// (0x0004f6b0) popup_midp_note_alarm_window

0xb0a6,	// (0x00052c29) data_form_pane_ParamLimits

0x88cc,	// (0x0005044f) form_field_data_pane_g1

0x88d6,	// (0x00050459) form_field_data_pane_t1_ParamLimits

0xb0b2,	// (0x00052c35) input_focus_pane_ParamLimits

0x30c1,	// (0x0004ac44) data_form_wide_pane_ParamLimits

0x30d2,	// (0x0004ac55) form_field_data_wide_pane_g1

0x30de,	// (0x0004ac61) form_field_data_wide_pane_t1_ParamLimits

0x9367,	// (0x00050eea) input_focus_pane_cp6_ParamLimits

0x89cf,	// (0x00050552) input_popup_find_pane_g1_ParamLimits

0x89cf,	// (0x00050552) input_popup_find_pane_g1

0x0e5d,	// (0x000489e0) aid_navi_side_left_pane

0x0e72,	// (0x000489f5) aid_navi_side_right_pane

0xc959,	// (0x000544dc) bg_popup_window_pane_cp30_ParamLimits

0xc959,	// (0x000544dc) bg_popup_window_pane_cp30

0xc9d3,	// (0x00054556) popup_midp_note_alarm_window_g1_ParamLimits

0xc9d3,	// (0x00054556) popup_midp_note_alarm_window_g1

0xca03,	// (0x00054586) popup_midp_note_alarm_window_t1_ParamLimits

0xca03,	// (0x00054586) popup_midp_note_alarm_window_t1

0xcaa4,	// (0x00054627) popup_midp_note_alarm_window_t2_ParamLimits

0xcaa4,	// (0x00054627) popup_midp_note_alarm_window_t2

0xcb52,	// (0x000546d5) popup_midp_note_alarm_window_t3_ParamLimits

0xcb52,	// (0x000546d5) popup_midp_note_alarm_window_t3

0xcb84,	// (0x00054707) popup_midp_note_alarm_window_t4_ParamLimits

0xcb84,	// (0x00054707) popup_midp_note_alarm_window_t4

0xcbaa,	// (0x0005472d) popup_midp_note_alarm_window_t5_ParamLimits

0xcbaa,	// (0x0005472d) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x00057423) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x00057423) popup_midp_note_alarm_window_t

0xcc56,	// (0x000547d9) wait_bar_pane_cp1_ParamLimits

0xcc56,	// (0x000547d9) wait_bar_pane_cp1

0x8e8f,	// (0x00050a12) wait_anim_pane_copy1

0x8e8f,	// (0x00050a12) wait_border_pane_copy1

0xc671,	// (0x000541f4) wait_border_pane_g1_copy1

0x30f8,	// (0x0004ac7b) form_field_popup_pane_g1

0x88f0,	// (0x00050473) form_field_popup_pane_t1_ParamLimits

0xb0b2,	// (0x00052c35) input_focus_pane_cp7_ParamLimits

0xb0d4,	// (0x00052c57) list_form_pane_ParamLimits

0x311a,	// (0x0004ac9d) form_field_popup_wide_pane_g1

0x3122,	// (0x0004aca5) form_field_popup_wide_pane_t1_ParamLimits

0xb0b2,	// (0x00052c35) input_focus_pane_cp8_ParamLimits

0xb0e0,	// (0x00052c63) list_form_wide_pane_ParamLimits

0xd3d3,	// (0x00054f56) aid_size_cell_graphic_pane

0x896f,	// (0x000504f2) data_form_pane_t1_ParamLimits

0x8ce8,	// (0x0005086b) data_form_wide_pane_t1_ParamLimits

0x95a6,	// (0x00051129) bg_status_flat_pane

0x8559,	// (0x000500dc) title_pane_t1_ParamLimits

0x8ea5,	// (0x00050a28) title_pane_t2_ParamLimits

0x8ecb,	// (0x00050a4e) title_pane_t3_ParamLimits

0xf55d,	// (0x000570e0) title_pane_t_ParamLimits

0xb7cc,	// (0x0005334f) level_1_signal_ParamLimits

0xb7d9,	// (0x0005335c) level_2_signal_ParamLimits

0xb7e6,	// (0x00053369) level_3_signal_ParamLimits

0xb7f3,	// (0x00053376) level_4_signal_ParamLimits

0xb800,	// (0x00053383) level_5_signal_ParamLimits

0xb80d,	// (0x00053390) level_6_signal_ParamLimits

0xb81a,	// (0x0005339d) level_7_signal_ParamLimits

0xb7cc,	// (0x0005334f) level_1_battery_ParamLimits

0xb7d9,	// (0x0005335c) level_2_battery_ParamLimits

0xb7e6,	// (0x00053369) level_3_battery_ParamLimits

0xb7f3,	// (0x00053376) level_4_battery_ParamLimits

0xb800,	// (0x00053383) level_5_battery_ParamLimits

0xb80d,	// (0x00053390) level_6_battery_ParamLimits

0xb81a,	// (0x0005339d) level_7_battery_ParamLimits

0xc87c,	// (0x000543ff) bg_status_flat_pane_g1

0xc884,	// (0x00054407) bg_status_flat_pane_g2

0xc88c,	// (0x0005440f) bg_status_flat_pane_g3

0xc894,	// (0x00054417) bg_status_flat_pane_g4

0xc89c,	// (0x0005441f) bg_status_flat_pane_g5

0xc8a4,	// (0x00054427) bg_status_flat_pane_g6

0xc8ac,	// (0x0005442f) bg_status_flat_pane_g7

0x85e5,	// (0x00050168) tabs_3_active_pane_t1_ParamLimits

0x85e5,	// (0x00050168) tabs_3_passive_pane_t1_ParamLimits

0x85f7,	// (0x0005017a) tabs_4_active_pane_t1_ParamLimits

0x85f7,	// (0x0005017a) tabs_4_1_passive_pane_t1_ParamLimits

0x89e5,	// (0x00050568) tabs_2_active_pane_t1_ParamLimits

0x89e5,	// (0x00050568) tabs_2_passive_pane_t1_ParamLimits

0x8efb,	// (0x00050a7e) bg_active_tab_pane_cp4_ParamLimits

0x89f7,	// (0x0005057a) tabs_2_long_active_pane_t1_ParamLimits

0xb20b,	// (0x00052d8e) bg_passive_tab_pane_cp4_ParamLimits

0x1981,	// (0x00049504) list_single_midp_graphic_pane_t1_ParamLimits

0x8efb,	// (0x00050a7e) bg_active_tab_pane_cp5_ParamLimits

0x8a0a,	// (0x0005058d) tabs_3_long_active_pane_t1_ParamLimits

0xb20b,	// (0x00052d8e) bg_passive_tab_pane_cp5_ParamLimits

0x1981,	// (0x00049504) list_single_midp_graphic_pane_t1

0x95a6,	// (0x00051129) bg_status_flat_pane_ParamLimits

0xc068,	// (0x00053beb) indicator_pane_cp2_ParamLimits

0xc068,	// (0x00053beb) indicator_pane_cp2

0x9724,	// (0x000512a7) navi_pane_srt_ParamLimits

0x9724,	// (0x000512a7) navi_pane_srt

0xc090,	// (0x00053c13) popup_clock_digital_analogue_window_cp1

0x8f3f,	// (0x00050ac2) indicator_pane_t1

0xbd49,	// (0x000538cc) copy_highlight_pane

0xbd49,	// (0x000538cc) cursor_graphics_pane

0xbd49,	// (0x000538cc) graphic_within_text_pane

0xbd49,	// (0x000538cc) link_highlight_pane

0xd00c,	// (0x00054b8f) popup_preview_text_window_t5_ParamLimits

0xd00c,	// (0x00054b8f) popup_preview_text_window_t5

0xbdc4,	// (0x00053947) cursor_digital_pane

0xbdc4,	// (0x00053947) cursor_primary_pane

0xbdd5,	// (0x00053958) cursor_primary_small_pane

0xbddd,	// (0x00053960) cursor_secondary_pane

0xbde5,	// (0x00053968) cursor_title_pane

0xbdc4,	// (0x00053947) link_highlight_digital_pane

0xbdcc,	// (0x0005394f) link_highlight_primary_pane

0xbdd5,	// (0x00053958) link_highlight_primary_small_pane

0xbddd,	// (0x00053960) link_highlight_secondary_pane

0xbde5,	// (0x00053968) link_highlight_title_pane

0xbdc4,	// (0x00053947) copy_highlight_digital_pane

0xbdc4,	// (0x00053947) copy_highlight_primary_pane

0xbdd5,	// (0x00053958) copy_highlight_primary_small_pane

0xbddd,	// (0x00053960) copy_highlight_secondary_pane

0xbde5,	// (0x00053968) copy_highlight_title_pane

0xbddd,	// (0x00053960) graphic_text_digital_pane

0xc8fc,	// (0x0005447f) graphic_text_primary_pane

0xc905,	// (0x00054488) graphic_text_primary_small_pane

0xbdd5,	// (0x00053958) graphic_text_secondary_pane

0xbdc4,	// (0x00053947) graphic_text_title_pane

0x8c9e,	// (0x00050821) cursor_primary_pane_g1

0xc8ee,	// (0x00054471) cursor_text_primary_t1

0x9aa7,	// (0x0005162a) cursor_primary_small_pane_g1

0xc8e0,	// (0x00054463) cursor_text_primary_small_t1

0x9a9d,	// (0x00051620) cursor_primary_small_pane_g1_copy1

0xc8d2,	// (0x00054455) cursor_text_primary_small_t1_copy1

0xc8c4,	// (0x00054447) cursor_text_title_t1

0x99aa,	// (0x0005152d) cursor_title_pane_g1

0x8c9e,	// (0x00050821) cursor_digital_pane_g1

0xbded,	// (0x00053970) cursor_text_digital_t1

0xc865,	// (0x000543e8) link_highlight_primary_pane_g1

0xc86d,	// (0x000543f0) link_highlight_primary_pane_t1

0xbdfb,	// (0x0005397e) link_highlight_primary_small_pane_g1

0xbe03,	// (0x00053986) link_highlight_primary_small_pane_t1

0xbdfb,	// (0x0005397e) link_highlight_secondary_pane_g1

0xbe12,	// (0x00053995) link_highlight_secondary_pane_t1

0xc7d9,	// (0x0005435c) link_highlight_title_pane_g1

0xc7e1,	// (0x00054364) link_highlight_title_pane_t1

0xc7c2,	// (0x00054345) link_highlight_digital_pane_g1

0xc7ca,	// (0x0005434d) link_highlight_digital_pane_t1

0xc6b6,	// (0x00054239) copy_highlight_primary_pane_g1

0xc6be,	// (0x00054241) copy_highlight_primary_pane_t1

0xc690,	// (0x00054213) copy_highlight_primary_small_pane_g1

0xc6a7,	// (0x0005422a) copy_highlight_primary_small_pane_t1

0xbe21,	// (0x000539a4) copy_highlight_secondary_pane_g1

0xbe29,	// (0x000539ac) copy_highlight_secondary_pane_t1

0xc690,	// (0x00054213) copy_highlight_title_pane_g1

0xc698,	// (0x0005421b) copy_highlight_title_pane_t1

0xc6b6,	// (0x00054239) copy_highlight_digital_pane_g1

0xd559,	// (0x000550dc) copy_highlight_digital_pane_t1

0xd4ad,	// (0x00055030) graphic_text_primary_pane_g1

0xd53d,	// (0x000550c0) graphic_text_primary_pane_t1

0xd54b,	// (0x000550ce) graphic_text_primary_pane_t2

0x0001,

0xf9cf,	// (0x00057552) graphic_text_primary_pane_t

0xd519,	// (0x0005509c) graphic_text_primary_small_pane_g1

0xd521,	// (0x000550a4) graphic_text_primary_small_pane_t1

0xd52f,	// (0x000550b2) graphic_text_primary_small_pane_t2

0x0001,

0xf9ca,	// (0x0005754d) graphic_text_primary_small_pane_t

0xd4f5,	// (0x00055078) graphic_text_secondary_pane_g1

0xd4fd,	// (0x00055080) graphic_text_secondary_pane_t1

0xd50b,	// (0x0005508e) graphic_text_secondary_pane_t2

0x0001,

0xf9c5,	// (0x00057548) graphic_text_secondary_pane_t

0xd4d1,	// (0x00055054) graphic_text_title_pane_g1

0xd4d9,	// (0x0005505c) graphic_text_title_pane_t1

0xd4e7,	// (0x0005506a) graphic_text_title_pane_t2

0x0001,

0xf9c0,	// (0x00057543) graphic_text_title_pane_t

0xd4ad,	// (0x00055030) graphic_text_digital_pane_g1

0xd4b5,	// (0x00055038) graphic_text_digital_pane_t1

0xd4c3,	// (0x00055046) graphic_text_digital_pane_t2

0x0001,

0xf9bb,	// (0x0005753e) graphic_text_digital_pane_t

0x8efb,	// (0x00050a7e) navi_icon_pane_srt_ParamLimits

0x8efb,	// (0x00050a7e) navi_icon_pane_srt

0x8e8f,	// (0x00050a12) navi_midp_pane_srt

0x8e8f,	// (0x00050a12) navi_navi_pane_srt

0x8efb,	// (0x00050a7e) navi_text_pane_srt_ParamLimits

0x8efb,	// (0x00050a7e) navi_text_pane_srt

0xd478,	// (0x00054ffb) navi_navi_icon_text_pane_srt

0xd480,	// (0x00055003) navi_navi_pane_srt_g1_ParamLimits

0xd480,	// (0x00055003) navi_navi_pane_srt_g1

0xd492,	// (0x00055015) navi_navi_pane_srt_g2_ParamLimits

0xd492,	// (0x00055015) navi_navi_pane_srt_g2

0x0001,

0xf9b6,	// (0x00057539) navi_navi_pane_srt_g_ParamLimits

0xf9b6,	// (0x00057539) navi_navi_pane_srt_g

0xd4a4,	// (0x00055027) navi_navi_tabs_pane_srt

0xd478,	// (0x00054ffb) navi_navi_text_pane_srt

0xd478,	// (0x00054ffb) navi_navi_volume_pane_srt

0xd469,	// (0x00054fec) navi_navi_text_pane_srt_t1

0x1cf5,	// (0x00049878) navi_navi_volume_pane_srt_g1

0x1cfd,	// (0x00049880) volume_small_pane_srt_ParamLimits

0x1cfd,	// (0x00049880) volume_small_pane_srt

0x1134,	// (0x00048cb7) volume_small_pane_srt_g1_ParamLimits

0x1134,	// (0x00048cb7) volume_small_pane_srt_g1

0x1144,	// (0x00048cc7) volume_small_pane_srt_g2_ParamLimits

0x1144,	// (0x00048cc7) volume_small_pane_srt_g2

0x1155,	// (0x00048cd8) volume_small_pane_srt_g3_ParamLimits

0x1155,	// (0x00048cd8) volume_small_pane_srt_g3

0x1166,	// (0x00048ce9) volume_small_pane_srt_g4_ParamLimits

0x1166,	// (0x00048ce9) volume_small_pane_srt_g4

0x1177,	// (0x00048cfa) volume_small_pane_srt_g5_ParamLimits

0x1177,	// (0x00048cfa) volume_small_pane_srt_g5

0x1188,	// (0x00048d0b) volume_small_pane_srt_g6_ParamLimits

0x1188,	// (0x00048d0b) volume_small_pane_srt_g6

0x1199,	// (0x00048d1c) volume_small_pane_srt_g7_ParamLimits

0x1199,	// (0x00048d1c) volume_small_pane_srt_g7

0x11aa,	// (0x00048d2d) volume_small_pane_srt_g8_ParamLimits

0x11aa,	// (0x00048d2d) volume_small_pane_srt_g8

0x11bb,	// (0x00048d3e) volume_small_pane_srt_g9_ParamLimits

0x11bb,	// (0x00048d3e) volume_small_pane_srt_g9

0x11cc,	// (0x00048d4f) volume_small_pane_srt_g10_ParamLimits

0x11cc,	// (0x00048d4f) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x000572e6) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x000572e6) volume_small_pane_srt_g

0x9173,	// (0x00050cf6) query_popup_data_pane_cp2

0xd44f,	// (0x00054fd2) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xd44f,	// (0x00054fd2) navi_navi_icon_text_pane_srt_t1

0xc8fc,	// (0x0005447f) navi_tabs_2_long_pane_srt

0xc8fc,	// (0x0005447f) navi_tabs_2_pane_srt

0xc8fc,	// (0x0005447f) navi_tabs_3_long_pane_srt

0xc8fc,	// (0x0005447f) navi_tabs_3_pane_srt

0xc8fc,	// (0x0005447f) navi_tabs_4_pane_srt

0x1cd5,	// (0x00049858) tabs_2_active_pane_srt_ParamLimits

0x1cd5,	// (0x00049858) tabs_2_active_pane_srt

0x1ce5,	// (0x00049868) tabs_2_passive_pane_srt_ParamLimits

0x1ce5,	// (0x00049868) tabs_2_passive_pane_srt

0xc20b,	// (0x00053d8e) bg_passive_tab_pane_cp1_srt_ParamLimits

0xc20b,	// (0x00053d8e) bg_passive_tab_pane_cp1_srt

0xd42d,	// (0x00054fb0) bg_passive_tab_pane_g1_cp1_srt

0xb9f4,	// (0x00053577) bg_passive_tab_pane_g2_cp1_srt

0xd436,	// (0x00054fb9) bg_passive_tab_pane_g3_cp1_srt

0x8edd,	// (0x00050a60) bg_active_tab_pane_cp1_srt_ParamLimits

0x8edd,	// (0x00050a60) bg_active_tab_pane_cp1_srt

0xd43f,	// (0x00054fc2) tabs_2_active_pane_srt_g1

0x9e65,	// (0x000519e8) tabs_2_active_pane_srt_t1_ParamLimits

0x9e65,	// (0x000519e8) tabs_2_active_pane_srt_t1

0xd42d,	// (0x00054fb0) bg_active_tab_pane_g1_cp1_srt

0xb9f4,	// (0x00053577) bg_active_tab_pane_g2_cp1_srt

0xd436,	// (0x00054fb9) bg_active_tab_pane_g3_cp1_srt

0x1ca2,	// (0x00049825) tabs_3_active_pane_srt_ParamLimits

0x1ca2,	// (0x00049825) tabs_3_active_pane_srt

0x1cb3,	// (0x00049836) tabs_3_passive_pane_cp_srt_ParamLimits

0x1cb3,	// (0x00049836) tabs_3_passive_pane_cp_srt

0x1cc4,	// (0x00049847) tabs_3_passive_pane_srt_ParamLimits

0x1cc4,	// (0x00049847) tabs_3_passive_pane_srt

0xc20b,	// (0x00053d8e) bg_passive_tab_pane_cp2_srt_ParamLimits

0xc20b,	// (0x00053d8e) bg_passive_tab_pane_cp2_srt

0xbe38,	// (0x000539bb) bg_passive_tab_pane_g1_cp2_srt

0xb9f4,	// (0x00053577) bg_passive_tab_pane_g2_cp2_srt

0xbe41,	// (0x000539c4) bg_passive_tab_pane_g3_cp2_srt

0x8edd,	// (0x00050a60) bg_active_tab_pane_cp2_srt_ParamLimits

0x8edd,	// (0x00050a60) bg_active_tab_pane_cp2_srt

0xd425,	// (0x00054fa8) tabs_3_active_pane_srt_g1

0x9e4f,	// (0x000519d2) tabs_3_active_pane_srt_t1_ParamLimits

0x9e4f,	// (0x000519d2) tabs_3_active_pane_srt_t1

0xbe38,	// (0x000539bb) bg_active_tab_pane_g1_cp2_srt

0xb9f4,	// (0x00053577) bg_active_tab_pane_g2_cp2_srt

0xbe41,	// (0x000539c4) bg_active_tab_pane_g3_cp2_srt

0x1c5a,	// (0x000497dd) tabs_4_active_pane_srt_ParamLimits

0x1c5a,	// (0x000497dd) tabs_4_active_pane_srt

0x1c6c,	// (0x000497ef) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1c6c,	// (0x000497ef) tabs_4_passive_pane_cp2_srt

0x132f,	// (0x00048eb2) aid_size_cell_toolbar

0xbfa7,	// (0x00053b2a) main_idle_act_pane_ParamLimits

0x14e2,	// (0x00049065) popup_large_graphic_colour_window_ParamLimits

0x7e37,	// (0x0004f9ba) popup_toolbar_window_ParamLimits

0x7e37,	// (0x0004f9ba) popup_toolbar_window

0xd350,	// (0x00054ed3) list_single_graphic_2heading_pane_ParamLimits

0xd350,	// (0x00054ed3) list_single_graphic_2heading_pane

0xb5b1,	// (0x00053134) aid_size_cell_apps_grid_lsc_pane

0xb5c3,	// (0x00053146) aid_size_cell_apps_grid_prt_pane

0xb20b,	// (0x00052d8e) bg_wml_button_pane_cp1_ParamLimits

0xb20b,	// (0x00052d8e) bg_wml_button_pane_cp1

0x995b,	// (0x000514de) form_midp_field_text_pane_t1_ParamLimits

0xc20b,	// (0x00053d8e) input_focus_pane_cp050_ParamLimits

0xc378,	// (0x00053efb) list_midp_form_text_pane_ParamLimits

0xc355,	// (0x00053ed8) input_focus_pane_cp051_ParamLimits

0xc369,	// (0x00053eec) list_midp_choice_pane_ParamLimits

0x98ef,	// (0x00051472) list_single_2graphic_pane_cp3_ParamLimits

0x98ef,	// (0x00051472) list_single_2graphic_pane_cp3

0x9904,	// (0x00051487) list_single_midp_graphic_pane_ParamLimits

0x9904,	// (0x00051487) list_single_midp_graphic_pane

0x04bb,	// (0x0004803e) list_single_graphic_2heading_pane_g1_ParamLimits

0x04bb,	// (0x0004803e) list_single_graphic_2heading_pane_g1

0x04c7,	// (0x0004804a) list_single_graphic_2heading_pane_g4_ParamLimits

0x04c7,	// (0x0004804a) list_single_graphic_2heading_pane_g4

0x04d3,	// (0x00048056) list_single_graphic_2heading_pane_g5_ParamLimits

0x04d3,	// (0x00048056) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x00057339) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x00057339) list_single_graphic_2heading_pane_g

0x04df,	// (0x00048062) list_single_graphic_2heading_pane_t1_ParamLimits

0x04df,	// (0x00048062) list_single_graphic_2heading_pane_t1

0x04f3,	// (0x00048076) list_single_graphic_2heading_pane_t2_ParamLimits

0x04f3,	// (0x00048076) list_single_graphic_2heading_pane_t2

0x050f,	// (0x00048092) list_single_graphic_2heading_pane_t3_ParamLimits

0x050f,	// (0x00048092) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x00057340) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x00057340) list_single_graphic_2heading_pane_t

0xc0d5,	// (0x00053c58) bg_popup_sub_pane_cp2

0xc0ff,	// (0x00053c82) grid_toobar_pane

0x18f2,	// (0x00049475) cell_toolbar_pane_ParamLimits

0x18f2,	// (0x00049475) cell_toolbar_pane

0xc13b,	// (0x00053cbe) cell_toolbar_pane_g1_ParamLimits

0xc13b,	// (0x00053cbe) cell_toolbar_pane_g1

0xc14f,	// (0x00053cd2) cell_toolbar_pane_g2_ParamLimits

0xc14f,	// (0x00053cd2) cell_toolbar_pane_g2

0x0001,

0xf7cb,	// (0x0005734e) cell_toolbar_pane_g_ParamLimits

0xf7cb,	// (0x0005734e) cell_toolbar_pane_g

0xc171,	// (0x00053cf4) grid_highlight_pane_cp2_ParamLimits

0xc171,	// (0x00053cf4) grid_highlight_pane_cp2

0xc18b,	// (0x00053d0e) toolbar_button_pane

0xc197,	// (0x00053d1a) toolbar_button_pane_g1

0xc19f,	// (0x00053d22) toolbar_button_pane_g2

0xc1a7,	// (0x00053d2a) toolbar_button_pane_g3

0xc1af,	// (0x00053d32) toolbar_button_pane_g4

0xc1b7,	// (0x00053d3a) toolbar_button_pane_g5

0xc1bf,	// (0x00053d42) toolbar_button_pane_g6

0xc1c7,	// (0x00053d4a) toolbar_button_pane_g7

0xc1cf,	// (0x00053d52) toolbar_button_pane_g8

0xc1d7,	// (0x00053d5a) toolbar_button_pane_g9

0x0009,

0xf7d0,	// (0x00057353) toolbar_button_pane_g

0x192a,	// (0x000494ad) list_single_2graphic_pane_g1_cp3_ParamLimits

0x192a,	// (0x000494ad) list_single_2graphic_pane_g1_cp3

0x7e8f,	// (0x0004fa12) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7e8f,	// (0x0004fa12) list_single_2graphic_pane_g2_cp3

0x1947,	// (0x000494ca) list_single_2graphic_pane_g3_cp3

0x194f,	// (0x000494d2) list_single_2graphic_pane_g4_cp3_ParamLimits

0x194f,	// (0x000494d2) list_single_2graphic_pane_g4_cp3

0x195b,	// (0x000494de) list_single_2graphic_pane_t1_cp3_ParamLimits

0x195b,	// (0x000494de) list_single_2graphic_pane_t1_cp3

0x1975,	// (0x000494f8) list_single_midp_graphic_pane_g2_ParamLimits

0x1975,	// (0x000494f8) list_single_midp_graphic_pane_g2

0x04ab,	// (0x0004802e) aid_zoom_text_primary

0x04b3,	// (0x00048036) aid_zoom_text_secondary

0xbef5,	// (0x00053a78) status_small_pane_g7_ParamLimits

0xbef5,	// (0x00053a78) status_small_pane_g7

0xbf18,	// (0x00053a9b) status_small_pane_t1_ParamLimits

0x8535,	// (0x000500b8) title_pane_g2

0x0003,

0xf554,	// (0x000570d7) title_pane_g

0x87ad,	// (0x00050330) aid_size_cell_colour_1_pane_ParamLimits

0x87ad,	// (0x00050330) aid_size_cell_colour_1_pane

0x87c1,	// (0x00050344) aid_size_cell_colour_2_pane_ParamLimits

0x87c1,	// (0x00050344) aid_size_cell_colour_2_pane

0x87d5,	// (0x00050358) aid_size_cell_colour_3_pane_ParamLimits

0x87d5,	// (0x00050358) aid_size_cell_colour_3_pane

0x87e9,	// (0x0005036c) aid_size_cell_colour_4_pane_ParamLimits

0x87e9,	// (0x0005036c) aid_size_cell_colour_4_pane

0x0d99,	// (0x0004891c) title_pane_stacon_g1_ParamLimits

0x0d99,	// (0x0004891c) title_pane_stacon_g1

0xc715,	// (0x00054298) popup_note_wait_window_g3_ParamLimits

0xc715,	// (0x00054298) popup_note_wait_window_g3

0xc78b,	// (0x0005430e) popup_note_wait_window_t5_ParamLimits

0xc78b,	// (0x0005430e) popup_note_wait_window_t5

0x8e8f,	// (0x00050a12) main_feb_china_hwr_fs_writing_pane

0x7853,	// (0x0004f3d6) popup_feb_china_hwr_fs_window_ParamLimits

0x7853,	// (0x0004f3d6) popup_feb_china_hwr_fs_window

0x7ea0,	// (0x0004fa23) aid_size_cell_hwr_fs_ParamLimits

0x7ea0,	// (0x0004fa23) aid_size_cell_hwr_fs

0xc20b,	// (0x00053d8e) bg_popup_sub_pane_cp3_ParamLimits

0xc20b,	// (0x00053d8e) bg_popup_sub_pane_cp3

0x7eb5,	// (0x0004fa38) grid_hwr_fs_pane_ParamLimits

0x7eb5,	// (0x0004fa38) grid_hwr_fs_pane

0x19c4,	// (0x00049547) linegrid_hwr_fs_pane_ParamLimits

0x19c4,	// (0x00049547) linegrid_hwr_fs_pane

0x7ecd,	// (0x0004fa50) cell_hwr_fs_pane_ParamLimits

0x7ecd,	// (0x0004fa50) cell_hwr_fs_pane

0xc217,	// (0x00053d9a) linegrid_hwr_fs_pane_g1_ParamLimits

0xc217,	// (0x00053d9a) linegrid_hwr_fs_pane_g1

0x98c3,	// (0x00051446) linegrid_hwr_fs_pane_g2_ParamLimits

0x98c3,	// (0x00051446) linegrid_hwr_fs_pane_g2

0xc223,	// (0x00053da6) linegrid_hwr_fs_pane_g3_ParamLimits

0xc223,	// (0x00053da6) linegrid_hwr_fs_pane_g3

0x19f6,	// (0x00049579) linegrid_hwr_fs_pane_g4_ParamLimits

0x19f6,	// (0x00049579) linegrid_hwr_fs_pane_g4

0x1a10,	// (0x00049593) linegrid_hwr_fs_pane_g5_ParamLimits

0x1a10,	// (0x00049593) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x00057379) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x00057379) linegrid_hwr_fs_pane_g

0xc22f,	// (0x00053db2) cell_hwr_fs_pane_g1_ParamLimits

0xc22f,	// (0x00053db2) cell_hwr_fs_pane_g1

0xc0a1,	// (0x00053c24) cell_hwr_fs_pane_g2_ParamLimits

0xc0a1,	// (0x00053c24) cell_hwr_fs_pane_g2

0x98d5,	// (0x00051458) cell_hwr_fs_pane_g3_ParamLimits

0x98d5,	// (0x00051458) cell_hwr_fs_pane_g3

0x98e2,	// (0x00051465) cell_hwr_fs_pane_g4_ParamLimits

0x98e2,	// (0x00051465) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x00057384) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x00057384) cell_hwr_fs_pane_g

0x7ef3,	// (0x0004fa76) cell_hwr_fs_pane_t1

0x8e8f,	// (0x00050a12) grid_highlight_pane_cp6

0x8e8f,	// (0x00050a12) main_idle_act2_pane

0xb1b9,	// (0x00052d3c) aid_inside_area_popup_secondary

0x9ab9,	// (0x0005163c) aid_inside_area_window_primary_ParamLimits

0x9ab9,	// (0x0005163c) aid_inside_area_window_primary

0xd568,	// (0x000550eb) ai2_news_ticker_pane

0xd570,	// (0x000550f3) aid_size_cell_ai1_link_ParamLimits

0xd570,	// (0x000550f3) aid_size_cell_ai1_link

0xd5cc,	// (0x0005514f) popup_ai2_data_window_ParamLimits

0xd5cc,	// (0x0005514f) popup_ai2_data_window

0xd5e0,	// (0x00055163) popup_ai2_link_window_ParamLimits

0xd5e0,	// (0x00055163) popup_ai2_link_window

0xc20b,	// (0x00053d8e) bg_popup_sub_pane_cp4_ParamLimits

0xc20b,	// (0x00053d8e) bg_popup_sub_pane_cp4

0xd5f4,	// (0x00055177) grid_ai2_link_pane_ParamLimits

0xd5f4,	// (0x00055177) grid_ai2_link_pane

0xd60b,	// (0x0005518e) popup_ai2_link_window_g1_ParamLimits

0xd60b,	// (0x0005518e) popup_ai2_link_window_g1

0xd617,	// (0x0005519a) popup_ai2_link_window_g2_ParamLimits

0xd617,	// (0x0005519a) popup_ai2_link_window_g2

0x0001,

0xf9d4,	// (0x00057557) popup_ai2_link_window_g_ParamLimits

0xf9d4,	// (0x00057557) popup_ai2_link_window_g

0xd626,	// (0x000551a9) ai2_mp_button_pane

0xd62e,	// (0x000551b1) ai2_mp_volume_pane

0xc355,	// (0x00053ed8) bg_popup_sub_pane_cp5_ParamLimits

0xc355,	// (0x00053ed8) bg_popup_sub_pane_cp5

0xd636,	// (0x000551b9) heading_ai2_gene_pane_ParamLimits

0xd636,	// (0x000551b9) heading_ai2_gene_pane

0xd642,	// (0x000551c5) list_ai2_gene_pane_ParamLimits

0xd642,	// (0x000551c5) list_ai2_gene_pane

0xd68a,	// (0x0005520d) cell_ai2_link_pane_ParamLimits

0xd68a,	// (0x0005520d) cell_ai2_link_pane

0xd6a0,	// (0x00055223) cell_ai2_link_pane_g1

0x8e8f,	// (0x00050a12) grid_highlight_pane_cp7

0x1d12,	// (0x00049895) ai2_mp_volume_pane_g1

0xd771,	// (0x000552f4) ai2_mp_volume_pane_g2

0xd6e6,	// (0x00055269) list_ai2_gene_pane_t1

0xd779,	// (0x000552fc) ai2_mp_volume_pane_g3

0x0002,

0xf9ed,	// (0x00057570) ai2_mp_volume_pane_g

0x1d1a,	// (0x0004989d) volume_small_pane_cp3

0xd781,	// (0x00055304) aid_size_cell_ai2_button

0xd789,	// (0x0005530c) grid_ai2_button_pane

0xd792,	// (0x00055315) cell_ai2_button_pane_ParamLimits

0xd792,	// (0x00055315) cell_ai2_button_pane

0x8e85,	// (0x00050a08) cell_ai2_button_pane_g1

0x8e8f,	// (0x00050a12) grid_highlight_pane_cp8

0xd731,	// (0x000552b4) ai2_gene_pane_t1_ParamLimits

0xd731,	// (0x000552b4) ai2_gene_pane_t1

0x77e1,	// (0x0004f364) aid_height_parent_landscape

0x9c05,	// (0x00051788) aid_height_set_list

0xbfa7,	// (0x00053b2a) aid_size_parent

0xd3d3,	// (0x00054f56) aid_size_cell_graphic_pane_ParamLimits

0xd652,	// (0x000551d5) popup_ai2_data_window_g1_ParamLimits

0xd652,	// (0x000551d5) popup_ai2_data_window_g1

0xd65e,	// (0x000551e1) ai2_news_ticker_pane_g1

0xd666,	// (0x000551e9) ai2_news_ticker_pane_g2

0x0001,

0xf9d9,	// (0x0005755c) ai2_news_ticker_pane_g

0xd66e,	// (0x000551f1) ai2_news_ticker_pane_t1

0xd67c,	// (0x000551ff) ai2_news_ticker_pane_t2

0x0001,

0xf9de,	// (0x00057561) ai2_news_ticker_pane_t

0xd6a9,	// (0x0005522c) heading_ai2_gene_pane_g1

0xd6b1,	// (0x00055234) heading_ai2_gene_pane_t1_ParamLimits

0xd6b1,	// (0x00055234) heading_ai2_gene_pane_t1

0xd6c6,	// (0x00055249) list_highlight_pane_cp6

0xd6ce,	// (0x00055251) ai2_gene_pane_ParamLimits

0xd6ce,	// (0x00055251) ai2_gene_pane

0xd6f4,	// (0x00055277) list_ai2_gene_pane_t2

0x0001,

0xf9e3,	// (0x00057566) list_ai2_gene_pane_t

0xd702,	// (0x00055285) list_highlight_pane_cp8_ParamLimits

0xd702,	// (0x00055285) list_highlight_pane_cp8

0xd713,	// (0x00055296) ai2_gene_pane_g1_ParamLimits

0xd713,	// (0x00055296) ai2_gene_pane_g1

0xd725,	// (0x000552a8) ai2_gene_pane_g2_ParamLimits

0xd725,	// (0x000552a8) ai2_gene_pane_g2

0x0001,

0xf9e8,	// (0x0005756b) ai2_gene_pane_g_ParamLimits

0xf9e8,	// (0x0005756b) ai2_gene_pane_g

0x9a74,	// (0x000515f7) scroll_pane_cp12

0x77a0,	// (0x0004f323) control_pane_t3_ParamLimits

0x77a0,	// (0x0004f323) control_pane_t3

0xbf09,	// (0x00053a8c) status_small_pane_g8_ParamLimits

0xbf09,	// (0x00053a8c) status_small_pane_g8

0x78e6,	// (0x0004f469) popup_find_window_ParamLimits

0x7b67,	// (0x0004f6ea) popup_note_image_window_ParamLimits

0x35b1,	// (0x0004b134) list_double2_graphic_pane_vc_g1_ParamLimits

0x35b1,	// (0x0004b134) list_double2_graphic_pane_vc_g1

0x2e70,	// (0x0004a9f3) list_double2_graphic_pane_vc_g2_ParamLimits

0x2e70,	// (0x0004a9f3) list_double2_graphic_pane_vc_g2

0x2e7c,	// (0x0004a9ff) list_double2_graphic_pane_vc_g3_ParamLimits

0x2e7c,	// (0x0004a9ff) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c4,	// (0x00057347) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c4,	// (0x00057347) list_double2_graphic_pane_vc_g

0x35bd,	// (0x0004b140) list_double2_graphic_pane_vc_t1_ParamLimits

0x35bd,	// (0x0004b140) list_double2_graphic_pane_vc_t1

0x2e70,	// (0x0004a9f3) list_single_heading_pane_vc_g1_ParamLimits

0x2e70,	// (0x0004a9f3) list_single_heading_pane_vc_g1

0x2e7c,	// (0x0004a9ff) list_single_heading_pane_vc_g2_ParamLimits

0x2e7c,	// (0x0004a9ff) list_single_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005715b) list_single_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005715b) list_single_heading_pane_vc_g

0x35d3,	// (0x0004b156) list_single_heading_pane_vc_t1_ParamLimits

0x35d3,	// (0x0004b156) list_single_heading_pane_vc_t1

0x35e9,	// (0x0004b16c) list_single_heading_pane_vc_t2_ParamLimits

0x35e9,	// (0x0004b16c) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x00057368) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x00057368) list_single_heading_pane_vc_t

0x5549,	// (0x0004d0cc) list_setting_number_pane_vc_g1_ParamLimits

0x5549,	// (0x0004d0cc) list_setting_number_pane_vc_g1

0x5555,	// (0x0004d0d8) list_setting_number_pane_vc_g2_ParamLimits

0x5555,	// (0x0004d0d8) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x0005736d) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x0005736d) list_setting_number_pane_vc_g

0x3605,	// (0x0004b188) list_setting_number_pane_vc_t1_ParamLimits

0x3605,	// (0x0004b188) list_setting_number_pane_vc_t1

0x3619,	// (0x0004b19c) list_setting_number_pane_vc_t2_ParamLimits

0x3619,	// (0x0004b19c) list_setting_number_pane_vc_t2

0x3633,	// (0x0004b1b6) list_setting_number_pane_vc_t3_ParamLimits

0x3633,	// (0x0004b1b6) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x00057372) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x00057372) list_setting_number_pane_vc_t

0x365b,	// (0x0004b1de) set_value_pane_vc_ParamLimits

0x365b,	// (0x0004b1de) set_value_pane_vc

0xd350,	// (0x00054ed3) list_double2_graphic_pane_vc_ParamLimits

0xd350,	// (0x00054ed3) list_double2_graphic_pane_vc

0x3720,	// (0x0004b2a3) list_double2_large_graphic_pane_vc_ParamLimits

0x3720,	// (0x0004b2a3) list_double2_large_graphic_pane_vc

0xd350,	// (0x00054ed3) list_double2_pane_vc_ParamLimits

0xd350,	// (0x00054ed3) list_double2_pane_vc

0xd350,	// (0x00054ed3) list_double_graphic_heading_pane_vc_ParamLimits

0xd350,	// (0x00054ed3) list_double_graphic_heading_pane_vc

0xd350,	// (0x00054ed3) list_double_graphic_pane_vc_ParamLimits

0xd350,	// (0x00054ed3) list_double_graphic_pane_vc

0xd350,	// (0x00054ed3) list_double_heading_pane_vc_ParamLimits

0xd350,	// (0x00054ed3) list_double_heading_pane_vc

0x3720,	// (0x0004b2a3) list_double_large_graphic_pane_vc_ParamLimits

0x3720,	// (0x0004b2a3) list_double_large_graphic_pane_vc

0xd350,	// (0x00054ed3) list_double_number_pane_vc_ParamLimits

0xd350,	// (0x00054ed3) list_double_number_pane_vc

0xd350,	// (0x00054ed3) list_double_pane_vc_ParamLimits

0xd350,	// (0x00054ed3) list_double_pane_vc

0xd350,	// (0x00054ed3) list_double_time_pane_vc_ParamLimits

0xd350,	// (0x00054ed3) list_double_time_pane_vc

0xd350,	// (0x00054ed3) list_setting_number_pane_vc_ParamLimits

0xd350,	// (0x00054ed3) list_setting_number_pane_vc

0xd350,	// (0x00054ed3) list_setting_pane_vc_ParamLimits

0xd350,	// (0x00054ed3) list_setting_pane_vc

0xd350,	// (0x00054ed3) list_single_graphic_heading_pane_vc_ParamLimits

0xd350,	// (0x00054ed3) list_single_graphic_heading_pane_vc

0xd350,	// (0x00054ed3) list_single_heading_pane_vc_ParamLimits

0xd350,	// (0x00054ed3) list_single_heading_pane_vc

0xd350,	// (0x00054ed3) list_single_number_heading_pane_vc_ParamLimits

0xd350,	// (0x00054ed3) list_single_number_heading_pane_vc

0x35b1,	// (0x0004b134) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x35b1,	// (0x0004b134) list_double_graphic_heading_pane_vc_g1

0x2e70,	// (0x0004a9f3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x2e70,	// (0x0004a9f3) list_double_graphic_heading_pane_vc_g2

0x2e7c,	// (0x0004a9ff) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2e7c,	// (0x0004a9ff) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c4,	// (0x00057347) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c4,	// (0x00057347) list_double_graphic_heading_pane_vc_g

0x37f8,	// (0x0004b37b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x37f8,	// (0x0004b37b) list_double_graphic_heading_pane_vc_t1

0x3814,	// (0x0004b397) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3814,	// (0x0004b397) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f4,	// (0x00057577) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f4,	// (0x00057577) list_double_graphic_heading_pane_vc_t

0x5549,	// (0x0004d0cc) list_setting_pane_vc_g1_ParamLimits

0x5549,	// (0x0004d0cc) list_setting_pane_vc_g1

0x5555,	// (0x0004d0d8) list_setting_pane_vc_g2_ParamLimits

0x5555,	// (0x0004d0d8) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x0005736d) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x0005736d) list_setting_pane_vc_g

0x382c,	// (0x0004b3af) list_setting_pane_vc_t1_ParamLimits

0x382c,	// (0x0004b3af) list_setting_pane_vc_t1

0x3846,	// (0x0004b3c9) list_setting_pane_vc_t2_ParamLimits

0x3846,	// (0x0004b3c9) list_setting_pane_vc_t2

0x0001,

0xfa37,	// (0x000575ba) list_setting_pane_vc_t_ParamLimits

0xfa37,	// (0x000575ba) list_setting_pane_vc_t

0x365b,	// (0x0004b1de) set_value_pane_cp_vc_ParamLimits

0x365b,	// (0x0004b1de) set_value_pane_cp_vc

0x2e70,	// (0x0004a9f3) list_single_number_heading_pane_vc_g1_ParamLimits

0x2e70,	// (0x0004a9f3) list_single_number_heading_pane_vc_g1

0x2e7c,	// (0x0004a9ff) list_single_number_heading_pane_vc_g2_ParamLimits

0x2e7c,	// (0x0004a9ff) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005715b) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005715b) list_single_number_heading_pane_vc_g

0x35d3,	// (0x0004b156) list_single_number_heading_pane_vc_t1_ParamLimits

0x35d3,	// (0x0004b156) list_single_number_heading_pane_vc_t1

0x385e,	// (0x0004b3e1) list_single_number_heading_pane_vc_t2_ParamLimits

0x385e,	// (0x0004b3e1) list_single_number_heading_pane_vc_t2

0x0a2f,	// (0x000485b2) list_single_number_heading_pane_vc_t3_ParamLimits

0x0a2f,	// (0x000485b2) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3c,	// (0x000575bf) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3c,	// (0x000575bf) list_single_number_heading_pane_vc_t

0x35b1,	// (0x0004b134) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x35b1,	// (0x0004b134) list_single_graphic_heading_pane_vc_g1

0x2e70,	// (0x0004a9f3) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2e70,	// (0x0004a9f3) list_single_graphic_heading_pane_vc_g4

0x2e7c,	// (0x0004a9ff) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2e7c,	// (0x0004a9ff) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c4,	// (0x00057347) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c4,	// (0x00057347) list_single_graphic_heading_pane_vc_g

0x35d3,	// (0x0004b156) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x35d3,	// (0x0004b156) list_single_graphic_heading_pane_vc_t1

0x3872,	// (0x0004b3f5) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3872,	// (0x0004b3f5) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x000575c6) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x000575c6) list_single_graphic_heading_pane_vc_t

0x2e70,	// (0x0004a9f3) list_double2_pane_vc_g1_ParamLimits

0x2e70,	// (0x0004a9f3) list_double2_pane_vc_g1

0x2e7c,	// (0x0004a9ff) list_double2_pane_vc_g2_ParamLimits

0x2e7c,	// (0x0004a9ff) list_double2_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005715b) list_double2_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005715b) list_double2_pane_vc_g

0x36ee,	// (0x0004b271) list_double2_pane_vc_t1_ParamLimits

0x36ee,	// (0x0004b271) list_double2_pane_vc_t1

0x3886,	// (0x0004b409) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3886,	// (0x0004b409) list_double2_large_graphic_pane_vc_g1

0x3892,	// (0x0004b415) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3892,	// (0x0004b415) list_double2_large_graphic_pane_vc_g2

0x389e,	// (0x0004b421) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x389e,	// (0x0004b421) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5f0,	// (0x00057173) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5f0,	// (0x00057173) list_double2_large_graphic_pane_vc_g

0x38aa,	// (0x0004b42d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x38aa,	// (0x0004b42d) list_double2_large_graphic_pane_vc_t1

0x38c0,	// (0x0004b443) list_double_time_pane_vc_g1_ParamLimits

0x38c0,	// (0x0004b443) list_double_time_pane_vc_g1

0x38cc,	// (0x0004b44f) list_double_time_pane_vc_g2_ParamLimits

0x38cc,	// (0x0004b44f) list_double_time_pane_vc_g2

0x0001,

0xfa48,	// (0x000575cb) list_double_time_pane_vc_g_ParamLimits

0xfa48,	// (0x000575cb) list_double_time_pane_vc_g

0x38d8,	// (0x0004b45b) list_double_time_pane_vc_t1_ParamLimits

0x38d8,	// (0x0004b45b) list_double_time_pane_vc_t1

0x38fc,	// (0x0004b47f) list_double_time_pane_vc_t2_ParamLimits

0x38fc,	// (0x0004b47f) list_double_time_pane_vc_t2

0x3946,	// (0x0004b4c9) list_double_time_pane_vc_t3_ParamLimits

0x3946,	// (0x0004b4c9) list_double_time_pane_vc_t3

0x3958,	// (0x0004b4db) list_double_time_pane_vc_t4_ParamLimits

0x3958,	// (0x0004b4db) list_double_time_pane_vc_t4

0x0003,

0xfa4d,	// (0x000575d0) list_double_time_pane_vc_t_ParamLimits

0xfa4d,	// (0x000575d0) list_double_time_pane_vc_t

0x2e70,	// (0x0004a9f3) list_double_pane_vc_g1_ParamLimits

0x2e70,	// (0x0004a9f3) list_double_pane_vc_g1

0x2e7c,	// (0x0004a9ff) list_double_pane_vc_g2_ParamLimits

0x2e7c,	// (0x0004a9ff) list_double_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005715b) list_double_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005715b) list_double_pane_vc_g

0x396c,	// (0x0004b4ef) list_double_pane_vc_t1_ParamLimits

0x396c,	// (0x0004b4ef) list_double_pane_vc_t1

0x3980,	// (0x0004b503) list_double_pane_vc_t2_ParamLimits

0x3980,	// (0x0004b503) list_double_pane_vc_t2

0x0001,

0xfa56,	// (0x000575d9) list_double_pane_vc_t_ParamLimits

0xfa56,	// (0x000575d9) list_double_pane_vc_t

0x2e70,	// (0x0004a9f3) list_double_number_pane_vc_g1_ParamLimits

0x2e70,	// (0x0004a9f3) list_double_number_pane_vc_g1

0x2e7c,	// (0x0004a9ff) list_double_number_pane_vc_g2_ParamLimits

0x2e7c,	// (0x0004a9ff) list_double_number_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005715b) list_double_number_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005715b) list_double_number_pane_vc_g

0x3998,	// (0x0004b51b) list_double_number_pane_vc_t1_ParamLimits

0x3998,	// (0x0004b51b) list_double_number_pane_vc_t1

0x39aa,	// (0x0004b52d) list_double_number_pane_vc_t2_ParamLimits

0x39aa,	// (0x0004b52d) list_double_number_pane_vc_t2

0x3980,	// (0x0004b503) list_double_number_pane_vc_t3_ParamLimits

0x3980,	// (0x0004b503) list_double_number_pane_vc_t3

0x0002,

0xfa5b,	// (0x000575de) list_double_number_pane_vc_t_ParamLimits

0xfa5b,	// (0x000575de) list_double_number_pane_vc_t

0x39be,	// (0x0004b541) list_double_large_graphic_pane_vc_g1_ParamLimits

0x39be,	// (0x0004b541) list_double_large_graphic_pane_vc_g1

0x39ca,	// (0x0004b54d) list_double_large_graphic_pane_vc_g2_ParamLimits

0x39ca,	// (0x0004b54d) list_double_large_graphic_pane_vc_g2

0x389e,	// (0x0004b421) list_double_large_graphic_pane_vc_g3_ParamLimits

0x389e,	// (0x0004b421) list_double_large_graphic_pane_vc_g3

0x39d9,	// (0x0004b55c) list_double_large_graphic_pane_vc_g4_ParamLimits

0x39d9,	// (0x0004b55c) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa62,	// (0x000575e5) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa62,	// (0x000575e5) list_double_large_graphic_pane_vc_g

0x39e5,	// (0x0004b568) list_double_large_graphic_pane_vc_t1_ParamLimits

0x39e5,	// (0x0004b568) list_double_large_graphic_pane_vc_t1

0x39f9,	// (0x0004b57c) list_double_large_graphic_pane_vc_t2_ParamLimits

0x39f9,	// (0x0004b57c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6b,	// (0x000575ee) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6b,	// (0x000575ee) list_double_large_graphic_pane_vc_t

0x2e70,	// (0x0004a9f3) list_double_heading_pane_vc_g1_ParamLimits

0x2e70,	// (0x0004a9f3) list_double_heading_pane_vc_g1

0x2e7c,	// (0x0004a9ff) list_double_heading_pane_vc_g2_ParamLimits

0x2e7c,	// (0x0004a9ff) list_double_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005715b) list_double_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005715b) list_double_heading_pane_vc_g

0x3a12,	// (0x0004b595) list_double_heading_pane_vc_t1_ParamLimits

0x3a12,	// (0x0004b595) list_double_heading_pane_vc_t1

0x35d3,	// (0x0004b156) list_double_heading_pane_vc_t2_ParamLimits

0x35d3,	// (0x0004b156) list_double_heading_pane_vc_t2

0x0001,

0xfa70,	// (0x000575f3) list_double_heading_pane_vc_t_ParamLimits

0xfa70,	// (0x000575f3) list_double_heading_pane_vc_t

0x35b1,	// (0x0004b134) list_double_graphic_pane_vc_g1_ParamLimits

0x35b1,	// (0x0004b134) list_double_graphic_pane_vc_g1

0x3a26,	// (0x0004b5a9) list_double_graphic_pane_vc_g2_ParamLimits

0x3a26,	// (0x0004b5a9) list_double_graphic_pane_vc_g2

0xd7b0,	// (0x00055333) list_double_graphic_pane_vc_g3_ParamLimits

0xd7b0,	// (0x00055333) list_double_graphic_pane_vc_g3

0x0002,

0xfa75,	// (0x000575f8) list_double_graphic_pane_vc_g_ParamLimits

0xfa75,	// (0x000575f8) list_double_graphic_pane_vc_g

0x3a35,	// (0x0004b5b8) list_double_graphic_pane_vc_t1_ParamLimits

0x3a35,	// (0x0004b5b8) list_double_graphic_pane_vc_t1

0x3a49,	// (0x0004b5cc) list_double_graphic_pane_vc_t2_ParamLimits

0x3a49,	// (0x0004b5cc) list_double_graphic_pane_vc_t2

0x0001,

0xfa7c,	// (0x000575ff) list_double_graphic_pane_vc_t_ParamLimits

0xfa7c,	// (0x000575ff) list_double_graphic_pane_vc_t

0x053f,	// (0x000480c2) aid_size_cell_fastswap

0x70b2,	// (0x0004ec35) aid_size_cell_touch_ParamLimits

0x70b2,	// (0x0004ec35) aid_size_cell_touch

0x07ac,	// (0x0004832f) popup_fast_swap_wide_window_ParamLimits

0x07ac,	// (0x0004832f) popup_fast_swap_wide_window

0x7262,	// (0x0004ede5) touch_pane_ParamLimits

0x7262,	// (0x0004ede5) touch_pane

0xb09e,	// (0x00052c21) button_value_adjust_pane_cp2

0x2fef,	// (0x0004ab72) button_value_adjust_pane_cp4

0x3011,	// (0x0004ab94) form_field_data_pane_cp2

0x888b,	// (0x0005040e) form_field_data_wide_pane_cp2

0xb5e8,	// (0x0005316b) bg_scroll_pane_ParamLimits

0x0efc,	// (0x00048a7f) scroll_handle_pane_ParamLimits

0x0f10,	// (0x00048a93) scroll_sc2_down_pane_ParamLimits

0x0f10,	// (0x00048a93) scroll_sc2_down_pane

0xb619,	// (0x0005319c) scroll_sc2_up_pane_ParamLimits

0xb619,	// (0x0005319c) scroll_sc2_up_pane

0x9f9c,	// (0x00051b1f) grid_wheel_folder_pane_g1_ParamLimits

0x9f9c,	// (0x00051b1f) grid_wheel_folder_pane_g1

0x10cc,	// (0x00048c4f) clock_nsta_pane_cp2_ParamLimits

0x10cc,	// (0x00048c4f) clock_nsta_pane_cp2

0xb20b,	// (0x00052d8e) listscroll_midp_pane_ParamLimits

0x8c03,	// (0x00050786) midp_canvas_pane

0xbf5d,	// (0x00053ae0) nsta_clock_indic_pane

0xbf8d,	// (0x00053b10) listscroll_form_pane_vc

0xbf95,	// (0x00053b18) listscroll_set_pane_vc_ParamLimits

0xbf95,	// (0x00053b18) listscroll_set_pane_vc

0x95ce,	// (0x00051151) clock_nsta_pane

0x95f8,	// (0x0005117b) indicator_nsta_pane

0xc0d5,	// (0x00053c58) bg_popup_sub_pane_cp2_ParamLimits

0xc0e9,	// (0x00053c6c) find_pane_cp2_ParamLimits

0xc0e9,	// (0x00053c6c) find_pane_cp2

0xc0ff,	// (0x00053c82) grid_toobar_pane_ParamLimits

0xc1df,	// (0x00053d62) list_form_gen_pane_vc_ParamLimits

0xc1df,	// (0x00053d62) list_form_gen_pane_vc

0xc1f5,	// (0x00053d78) scroll_pane_cp8_vc_ParamLimits

0xc1f5,	// (0x00053d78) scroll_pane_cp8_vc

0xc245,	// (0x00053dc8) data_form_wide_pane_vc_ParamLimits

0xc245,	// (0x00053dc8) data_form_wide_pane_vc

0xc251,	// (0x00053dd4) form_field_data_wide_pane_vc_g1

0xc259,	// (0x00053ddc) form_field_data_wide_pane_vc_t1_ParamLimits

0xc259,	// (0x00053ddc) form_field_data_wide_pane_vc_t1

0xb0b2,	// (0x00052c35) input_focus_pane_cp6_vc_ParamLimits

0xb0b2,	// (0x00052c35) input_focus_pane_cp6_vc

0x997e,	// (0x00051501) list_midp_pane_ParamLimits

0xce72,	// (0x000549f5) scroll_pane_cp16_ParamLimits

0xce72,	// (0x000549f5) scroll_pane_cp16

0xc4ef,	// (0x00054072) button_value_adjust_pane_ParamLimits

0xc4ef,	// (0x00054072) button_value_adjust_pane

0x9c16,	// (0x00051799) button_value_adjust_pane_cp6_ParamLimits

0x9c16,	// (0x00051799) button_value_adjust_pane_cp6

0x9d2c,	// (0x000518af) settings_code_pane_cp_ParamLimits

0x9d2c,	// (0x000518af) settings_code_pane_cp

0x8e85,	// (0x00050a08) cell_touch_pane_g1

0x8e85,	// (0x00050a08) cell_touch_pane_g2

0x0001,

0xf709,	// (0x0005728c) cell_touch_pane_g

0x9e7b,	// (0x000519fe) cell_touch_pane_cp_ParamLimits

0x9e7b,	// (0x000519fe) cell_touch_pane_cp

0x9e97,	// (0x00051a1a) cell_touch_pane_ParamLimits

0x9e97,	// (0x00051a1a) cell_touch_pane

0x8e85,	// (0x00050a08) scroll_sc2_down_pane_g1

0x8e85,	// (0x00050a08) scroll_sc2_up_pane_g1

0x8e8f,	// (0x00050a12) bg_set_opt_pane_cp4_vc

0xd7a4,	// (0x00055327) list_set_graphic_pane_vc_g1_ParamLimits

0xd7a4,	// (0x00055327) list_set_graphic_pane_vc_g1

0xd7b0,	// (0x00055333) list_set_graphic_pane_vc_g2_ParamLimits

0xd7b0,	// (0x00055333) list_set_graphic_pane_vc_g2

0x0001,

0xf9f9,	// (0x0005757c) list_set_graphic_pane_vc_g_ParamLimits

0xf9f9,	// (0x0005757c) list_set_graphic_pane_vc_g

0xd7bc,	// (0x0005533f) text_primary_small_cp13_vc_ParamLimits

0xd7bc,	// (0x0005533f) text_primary_small_cp13_vc

0xce5f,	// (0x000549e2) list_set_graphic_pane_vc_ParamLimits

0xce5f,	// (0x000549e2) list_set_graphic_pane_vc

0x8e8f,	// (0x00050a12) input_focus_pane_cp2_vc

0x8e85,	// (0x00050a08) setting_code_pane_vc_g1

0x8f12,	// (0x00050a95) setting_code_pane_vc_t1

0xd7d4,	// (0x00055357) set_text_pane_vc_t1_ParamLimits

0xd7d4,	// (0x00055357) set_text_pane_vc_t1

0x8e8f,	// (0x00050a12) input_focus_pane_cp1_vc

0xd7f1,	// (0x00055374) list_set_text_pane_vc

0x8e85,	// (0x00050a08) setting_text_pane_vc_g1

0x8e8f,	// (0x00050a12) bg_set_opt_pane_cp2_vc

0x8f09,	// (0x00050a8c) setting_slider_graphic_pane_vc_g1

0xd7fb,	// (0x0005537e) setting_slider_graphic_pane_vc_t1

0xd80b,	// (0x0005538e) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fe,	// (0x00057581) setting_slider_graphic_pane_vc_t

0xd81b,	// (0x0005539e) slider_set_pane_cp_vc

0xd823,	// (0x000553a6) slider_set_pane_vc_g1

0xd82c,	// (0x000553af) slider_set_pane_vc_g2

0x0006,

0xfa03,	// (0x00057586) slider_set_pane_vc_g

0xb101,	// (0x00052c84) set_opt_bg_pane_g1_copy1

0xb109,	// (0x00052c8c) set_opt_bg_pane_g2_copy1

0xd858,	// (0x000553db) set_opt_bg_pane_g3_copy1

0xb119,	// (0x00052c9c) set_opt_bg_pane_g4_copy1

0xb121,	// (0x00052ca4) set_opt_bg_pane_g5_copy1

0xb129,	// (0x00052cac) set_opt_bg_pane_g6_copy1

0xd860,	// (0x000553e3) set_opt_bg_pane_g7_copy1

0xd86a,	// (0x000553ed) set_opt_bg_pane_g8_copy1

0xd872,	// (0x000553f5) set_opt_bg_pane_g9_copy1

0x8e8f,	// (0x00050a12) bg_set_opt_pane_cp_vc

0xd87a,	// (0x000553fd) setting_slider_pane_vc_t1

0xd889,	// (0x0005540c) setting_slider_pane_vc_t2

0xd899,	// (0x0005541c) setting_slider_pane_vc_t3

0x0002,

0xfa12,	// (0x00057595) setting_slider_pane_vc_t

0xd8a9,	// (0x0005542c) slider_set_pane_vc

0x1a34,	// (0x000495b7) volume_set_pane_vc_g1

0x1d23,	// (0x000498a6) volume_set_pane_vc_g2

0x1d2c,	// (0x000498af) volume_set_pane_vc_g3

0x1d35,	// (0x000498b8) volume_set_pane_vc_g4

0x1d3e,	// (0x000498c1) volume_set_pane_vc_g5

0x1d47,	// (0x000498ca) volume_set_pane_vc_g6

0x1a61,	// (0x000495e4) volume_set_pane_vc_g7

0x1d50,	// (0x000498d3) volume_set_pane_vc_g8

0x1d59,	// (0x000498dc) volume_set_pane_vc_g9

0x1d62,	// (0x000498e5) volume_set_pane_vc_g10

0x0009,

0xfa19,	// (0x0005759c) volume_set_pane_vc_g

0xd8b1,	// (0x00055434) volume_set_pane_vc

0xd8b9,	// (0x0005543c) button_value_adjust_pane_cp1_vc

0xd8c3,	// (0x00055446) list_highlight_pane_cp2_vc

0xd8cc,	// (0x0005544f) list_set_pane_vc_ParamLimits

0xd8cc,	// (0x0005544f) list_set_pane_vc

0xd92a,	// (0x000554ad) main_pane_set_vc_t1_ParamLimits

0xd92a,	// (0x000554ad) main_pane_set_vc_t1

0xd93f,	// (0x000554c2) main_pane_set_vc_t2_ParamLimits

0xd93f,	// (0x000554c2) main_pane_set_vc_t2

0xd951,	// (0x000554d4) main_pane_set_vc_t3_ParamLimits

0xd951,	// (0x000554d4) main_pane_set_vc_t3

0xd963,	// (0x000554e6) main_pane_set_vc_t4_ParamLimits

0xd963,	// (0x000554e6) main_pane_set_vc_t4

0x0003,

0xfa2e,	// (0x000575b1) main_pane_set_vc_t_ParamLimits

0xfa2e,	// (0x000575b1) main_pane_set_vc_t

0xd98f,	// (0x00055512) setting_code_pane_vc_ParamLimits

0xd98f,	// (0x00055512) setting_code_pane_vc

0xd99e,	// (0x00055521) setting_slider_graphic_pane_vc

0xd99e,	// (0x00055521) setting_slider_pane_vc

0xd99e,	// (0x00055521) setting_text_pane_vc

0xd99e,	// (0x00055521) setting_volume_pane_vc

0xd9a6,	// (0x00055529) scroll_pane_cp121_vc

0xb08c,	// (0x00052c0f) set_content_pane_vc

0xd9ae,	// (0x00055531) button_value_adjust_pane_g1

0xd9b7,	// (0x0005553a) button_value_adjust_pane_g2

0x0001,

0x00b1,	// (0x00047c34) button_value_adjust_pane_g

0xd9c0,	// (0x00055543) form_field_slider_wide_pane_vc_t1_ParamLimits

0xd9c0,	// (0x00055543) form_field_slider_wide_pane_vc_t1

0xd9d4,	// (0x00055557) form_field_slider_wide_pane_vc_t2_ParamLimits

0xd9d4,	// (0x00055557) form_field_slider_wide_pane_vc_t2

0x0002,

0x00b6,	// (0x00047c39) form_field_slider_wide_pane_vc_t_ParamLimits

0x00b6,	// (0x00047c39) form_field_slider_wide_pane_vc_t

0x8edd,	// (0x00050a60) input_focus_pane_cp10_vc_ParamLimits

0x8edd,	// (0x00050a60) input_focus_pane_cp10_vc

0xda00,	// (0x00055583) slider_cont_pane_cp1_vc_ParamLimits

0xda00,	// (0x00055583) slider_cont_pane_cp1_vc

0xda10,	// (0x00055593) slider_form_pane_g1_cp2

0xd82c,	// (0x000553af) slider_form_pane_g2_cp2

0xda3d,	// (0x000555c0) form_field_slider_pane_vc_t3

0xda4b,	// (0x000555ce) form_field_slider_pane_vc_t4

0xda59,	// (0x000555dc) slider_form_pane_vc_ParamLimits

0xda59,	// (0x000555dc) slider_form_pane_vc

0xda66,	// (0x000555e9) form_field_slider_pane_vc_t1_ParamLimits

0xda66,	// (0x000555e9) form_field_slider_pane_vc_t1

0xd9d4,	// (0x00055557) form_field_slider_pane_vc_t2_ParamLimits

0xd9d4,	// (0x00055557) form_field_slider_pane_vc_t2

0x0001,

0x00c8,	// (0x00047c4b) form_field_slider_pane_vc_t_ParamLimits

0x00c8,	// (0x00047c4b) form_field_slider_pane_vc_t

0x8edd,	// (0x00050a60) input_focus_pane_cp9_vc_ParamLimits

0x8edd,	// (0x00050a60) input_focus_pane_cp9_vc

0xda82,	// (0x00055605) slider_cont_pane_vc_ParamLimits

0xda82,	// (0x00055605) slider_cont_pane_vc

0xda94,	// (0x00055617) list_form_graphic_pane_cp_vc_ParamLimits

0xda94,	// (0x00055617) list_form_graphic_pane_cp_vc

0xc251,	// (0x00053dd4) form_field_popup_wide_pane_vc_g1

0xdaa9,	// (0x0005562c) form_field_popup_wide_pane_vc_t1_ParamLimits

0xdaa9,	// (0x0005562c) form_field_popup_wide_pane_vc_t1

0xb0b2,	// (0x00052c35) input_focus_pane_cp8_vc_ParamLimits

0xb0b2,	// (0x00052c35) input_focus_pane_cp8_vc

0xdaee,	// (0x00055671) list_form_wide_pane_vc_ParamLimits

0xdaee,	// (0x00055671) list_form_wide_pane_vc

0xdafa,	// (0x0005567d) list_form_graphic_pane_vc_g1

0xdb02,	// (0x00055685) list_form_graphic_pane_vc_t1_ParamLimits

0xdb02,	// (0x00055685) list_form_graphic_pane_vc_t1

0x8efb,	// (0x00050a7e) list_highlight_pane_cp5_vc_ParamLimits

0x8efb,	// (0x00050a7e) list_highlight_pane_cp5_vc

0xdb1e,	// (0x000556a1) list_form_graphic_pane_vc_ParamLimits

0xdb1e,	// (0x000556a1) list_form_graphic_pane_vc

0xc251,	// (0x00053dd4) form_field_popup_pane_vc_g1

0xdb34,	// (0x000556b7) form_field_popup_pane_vc_t1_ParamLimits

0xdb34,	// (0x000556b7) form_field_popup_pane_vc_t1

0xb0b2,	// (0x00052c35) input_focus_pane_cp7_vc_ParamLimits

0xb0b2,	// (0x00052c35) input_focus_pane_cp7_vc

0xdb4b,	// (0x000556ce) list_form_pane_vc_ParamLimits

0xdb4b,	// (0x000556ce) list_form_pane_vc

0xdb57,	// (0x000556da) data_form_pane_vc_t1_ParamLimits

0xdb57,	// (0x000556da) data_form_pane_vc_t1

0xb101,	// (0x00052c84) input_focus_pane_vc_g1

0xb109,	// (0x00052c8c) input_focus_pane_vc_g2

0xb111,	// (0x00052c94) input_focus_pane_vc_g3

0xb119,	// (0x00052c9c) input_focus_pane_vc_g4

0xb121,	// (0x00052ca4) input_focus_pane_vc_g5

0xb129,	// (0x00052cac) input_focus_pane_vc_g6

0xb131,	// (0x00052cb4) input_focus_pane_vc_g7

0xb139,	// (0x00052cbc) input_focus_pane_vc_g8

0xb141,	// (0x00052cc4) input_focus_pane_vc_g9

0x8e85,	// (0x00050a08) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x00057215) input_focus_pane_vc_g

0xc245,	// (0x00053dc8) data_form_pane_vc_ParamLimits

0xc245,	// (0x00053dc8) data_form_pane_vc

0xc251,	// (0x00053dd4) form_field_data_pane_vc_g1

0xdb72,	// (0x000556f5) form_field_data_pane_vc_t1_ParamLimits

0xdb72,	// (0x000556f5) form_field_data_pane_vc_t1

0xb0b2,	// (0x00052c35) input_focus_pane_vc_ParamLimits

0xb0b2,	// (0x00052c35) input_focus_pane_vc

0xdb8c,	// (0x0005570f) button_value_adjust_pane_cp3_vc

0xdb94,	// (0x00055717) button_value_adjust_pane_cp5_vc

0xdb9c,	// (0x0005571f) form_field_data_pane_vc_ParamLimits

0xdb9c,	// (0x0005571f) form_field_data_pane_vc

0xdbb3,	// (0x00055736) form_field_data_pane_vc_cp2

0xdbbb,	// (0x0005573e) form_field_data_wide_pane_vc_ParamLimits

0xdbbb,	// (0x0005573e) form_field_data_wide_pane_vc

0xdbd1,	// (0x00055754) form_field_data_wide_pane_vc_cp2

0xdbd9,	// (0x0005575c) form_field_popup_pane_vc_ParamLimits

0xdbd9,	// (0x0005575c) form_field_popup_pane_vc

0xdbf0,	// (0x00055773) form_field_popup_wide_pane_vc_ParamLimits

0xdbf0,	// (0x00055773) form_field_popup_wide_pane_vc

0xdc06,	// (0x00055789) form_field_slider_pane_vc_ParamLimits

0xdc06,	// (0x00055789) form_field_slider_pane_vc

0xdc19,	// (0x0005579c) form_field_slider_wide_pane_vc_ParamLimits

0xdc19,	// (0x0005579c) form_field_slider_wide_pane_vc

0x9eb5,	// (0x00051a38) grid_touch_1_pane_ParamLimits

0x9eb5,	// (0x00051a38) grid_touch_1_pane

0x9ec9,	// (0x00051a4c) grid_touch_2_pane_ParamLimits

0x9ec9,	// (0x00051a4c) grid_touch_2_pane

0xdc2c,	// (0x000557af) touch_pane_g1_ParamLimits

0xdc2c,	// (0x000557af) touch_pane_g1

0xdc3a,	// (0x000557bd) cell_app_pane_cp_wide_ParamLimits

0xdc3a,	// (0x000557bd) cell_app_pane_cp_wide

0xdc4b,	// (0x000557ce) grid_popup_fast_wide_pane_ParamLimits

0xdc4b,	// (0x000557ce) grid_popup_fast_wide_pane

0xdc5f,	// (0x000557e2) scroll_pane_cp19_ParamLimits

0xdc5f,	// (0x000557e2) scroll_pane_cp19

0x8e8f,	// (0x00050a12) bg_popup_window_pane_cp20

0xdc73,	// (0x000557f6) listscroll_popup_fast_wide_pane

0xd975,	// (0x000554f8) grid_indicator_nsta_pane

0xdc7b,	// (0x000557fe) clock_nsta_pane_g1

0xdc84,	// (0x00055807) clock_nsta_pane_t1

0x9ef3,	// (0x00051a76) cell_indicator_nsta_pane_ParamLimits

0x9ef3,	// (0x00051a76) cell_indicator_nsta_pane

0xdc2c,	// (0x000557af) cell_indicator_nsta_pane_g1

0x9f10,	// (0x00051a93) cell_indicator_nsta_pane_g2

0x0001,

0xfa81,	// (0x00057604) cell_indicator_nsta_pane_g

0xdca0,	// (0x00055823) clock_nsta_pane_cp

0xdca8,	// (0x0005582b) indicator_nsta_pane_cp

0xdcb0,	// (0x00055833) nsta_clock_indic_pane_g1

0x8f37,	// (0x00050aba) grid_indicator_pane

0xb70e,	// (0x00053291) scroll_pane_cp29

0x101b,	// (0x00048b9e) indicator_nsta_pane_cp2_ParamLimits

0x101b,	// (0x00048b9e) indicator_nsta_pane_cp2

0x8efb,	// (0x00050a7e) main_apps_wheel_pane

0xc392,	// (0x00053f15) form_midp_field_text_pane_ParamLimits

0xc4c1,	// (0x00054044) scroll_bar_cp050_ParamLimits

0xdd11,	// (0x00055894) cell_indicator_pane_ParamLimits

0xdd11,	// (0x00055894) cell_indicator_pane

0xdd2c,	// (0x000558af) cell_indicator_pane_g1

0x9f26,	// (0x00051aa9) grid_wheel_folder_pane_ParamLimits

0x9f26,	// (0x00051aa9) grid_wheel_folder_pane

0x9f34,	// (0x00051ab7) list_wheel_apps_pane_ParamLimits

0x9f34,	// (0x00051ab7) list_wheel_apps_pane

0x9f42,	// (0x00051ac5) main_apps_wheel_pane_g1_ParamLimits

0x9f42,	// (0x00051ac5) main_apps_wheel_pane_g1

0x9f4e,	// (0x00051ad1) main_apps_wheel_pane_g2_ParamLimits

0x9f4e,	// (0x00051ad1) main_apps_wheel_pane_g2

0x0001,

0xfa86,	// (0x00057609) main_apps_wheel_pane_g_ParamLimits

0xfa86,	// (0x00057609) main_apps_wheel_pane_g

0x9f5c,	// (0x00051adf) main_apps_wheel_pane_t1_ParamLimits

0x9f5c,	// (0x00051adf) main_apps_wheel_pane_t1

0x9f70,	// (0x00051af3) list_wheel_apps_pane_g1

0x9f78,	// (0x00051afb) list_wheel_apps_pane_g2

0x9f80,	// (0x00051b03) list_wheel_apps_pane_g3

0x9f88,	// (0x00051b0b) list_wheel_apps_pane_g4

0x9f92,	// (0x00051b15) list_wheel_apps_pane_g5

0x0004,

0xfa8b,	// (0x0005760e) list_wheel_apps_pane_g

0xbbd5,	// (0x00053758) navi_icon_text_pane

0x94c2,	// (0x00051045) aid_fill_nsta

0xdd36,	// (0x000558b9) navi_icon_text_pane_g1

0xdd42,	// (0x000558c5) navi_icon_text_pane_t1

0xba77,	// (0x000535fa) list_set_graphic_pane_t1_ParamLimits

0xba77,	// (0x000535fa) list_set_graphic_pane_t1

0xcbd9,	// (0x0005475c) popup_midp_note_alarm_window_t6_ParamLimits

0xcbd9,	// (0x0005475c) popup_midp_note_alarm_window_t6

0xcbeb,	// (0x0005476e) popup_midp_note_alarm_window_t7_ParamLimits

0xcbeb,	// (0x0005476e) popup_midp_note_alarm_window_t7

0xcbfd,	// (0x00054780) popup_midp_note_alarm_window_t8_ParamLimits

0xcbfd,	// (0x00054780) popup_midp_note_alarm_window_t8

0xcc0f,	// (0x00054792) popup_midp_note_alarm_window_t9_ParamLimits

0xcc0f,	// (0x00054792) popup_midp_note_alarm_window_t9

0xcc21,	// (0x000547a4) popup_midp_note_alarm_window_t10_ParamLimits

0xcc21,	// (0x000547a4) popup_midp_note_alarm_window_t10

0xcc33,	// (0x000547b6) popup_midp_note_alarm_window_t11_ParamLimits

0xcc33,	// (0x000547b6) popup_midp_note_alarm_window_t11

0xcc45,	// (0x000547c8) scroll_pane_cp17_ParamLimits

0xcc45,	// (0x000547c8) scroll_pane_cp17

0x1a34,	// (0x000495b7) volume_small_pane_cp_g1

0x1d6b,	// (0x000498ee) volume_small_pane_cp_g2

0x1d74,	// (0x000498f7) volume_small_pane_cp_g3

0x1a46,	// (0x000495c9) volume_small_pane_cp_g4

0x1d7d,	// (0x00049900) volume_small_pane_cp_g5

0x1d3e,	// (0x000498c1) volume_small_pane_cp_g6

0x1a58,	// (0x000495db) volume_small_pane_cp_g7

0x1d86,	// (0x00049909) volume_small_pane_cp_g8

0x1d8f,	// (0x00049912) volume_small_pane_cp_g9

0x1a6a,	// (0x000495ed) volume_small_pane_cp_g10

0xbd73,	// (0x000538f6) midp_ticker_pane_g1_ParamLimits

0xbd7f,	// (0x00053902) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x000572e1) midp_ticker_pane_g_ParamLimits

0xbd8b,	// (0x0005390e) midp_ticker_pane_t1_ParamLimits

0x94e6,	// (0x00051069) aid_fill_nsta_2

0xc4ad,	// (0x00054030) list_form2_midp_pane

0xd31f,	// (0x00054ea2) midp_editing_number_pane_ParamLimits

0xd32e,	// (0x00054eb1) midp_ticker_pane_ParamLimits

0xdd54,	// (0x000558d7) form2_midp_field_pane

0xdd5c,	// (0x000558df) scroll_pane_cp51

0xdd7c,	// (0x000558ff) form2_midp_button_pane_ParamLimits

0xdd7c,	// (0x000558ff) form2_midp_button_pane

0xdd8e,	// (0x00055911) form2_midp_content_pane_ParamLimits

0xdd8e,	// (0x00055911) form2_midp_content_pane

0xdda8,	// (0x0005592b) form2_midp_field_choice_group_pane

0xddb0,	// (0x00055933) form2_midp_field_pane_g1

0xddb8,	// (0x0005593b) form2_midp_field_pane_g2

0xddc0,	// (0x00055943) form2_midp_field_pane_g3

0xddc8,	// (0x0005594b) form2_midp_field_pane_g4

0x0003,

0x0105,	// (0x00047c88) form2_midp_field_pane_g

0xddd0,	// (0x00055953) form2_midp_gauge_slider_pane

0xddd8,	// (0x0005595b) form2_midp_gauge_wait_pane

0xdde0,	// (0x00055963) form2_midp_image_pane_ParamLimits

0xdde0,	// (0x00055963) form2_midp_image_pane

0xddfb,	// (0x0005597e) form2_midp_label_pane_ParamLimits

0xddfb,	// (0x0005597e) form2_midp_label_pane

0x9fc5,	// (0x00051b48) form2_midp_label_pane_cp_ParamLimits

0x9fc5,	// (0x00051b48) form2_midp_label_pane_cp

0xde14,	// (0x00055997) form2_midp_string_pane_ParamLimits

0xde14,	// (0x00055997) form2_midp_string_pane

0x8d16,	// (0x00050899) form2_midp_text_pane_ParamLimits

0x8d16,	// (0x00050899) form2_midp_text_pane

0xde26,	// (0x000559a9) form2_midp_time_pane

0xde36,	// (0x000559b9) input_focus_pane_cp51_ParamLimits

0xde36,	// (0x000559b9) input_focus_pane_cp51

0xde4e,	// (0x000559d1) form2_midp_label_pane_t1_ParamLimits

0xde4e,	// (0x000559d1) form2_midp_label_pane_t1

0x8d2f,	// (0x000508b2) form2_mdip_text_pane_t1_ParamLimits

0x8d2f,	// (0x000508b2) form2_mdip_text_pane_t1

0x3a98,	// (0x0004b61b) form2_midp_time_pane_t1

0xde96,	// (0x00055a19) form2_midp_gauge_slider_pane_t1

0x9fe6,	// (0x00051b69) form2_midp_gauge_slider_pane_t2

0x9ffa,	// (0x00051b7d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfab0,	// (0x00057633) form2_midp_gauge_slider_pane_t

0xdea8,	// (0x00055a2b) form2_midp_slider_pane

0xdeb4,	// (0x00055a37) form2_midp_gauge_wait_pane_t1

0xdec2,	// (0x00055a45) form2_midp_wait_pane_ParamLimits

0xdec2,	// (0x00055a45) form2_midp_wait_pane

0xa00e,	// (0x00051b91) list_single_2graphic_pane_cp4_ParamLimits

0xa00e,	// (0x00051b91) list_single_2graphic_pane_cp4

0x9904,	// (0x00051487) list_single_midp_graphic_pane_cp_ParamLimits

0x9904,	// (0x00051487) list_single_midp_graphic_pane_cp

0x8e8f,	// (0x00050a12) list_highlight_pane_cp20

0xdeee,	// (0x00055a71) list_single_2graphic_pane_g1_cp4

0xd6a9,	// (0x0005522c) list_single_2graphic_pane_g2_cp4

0xdef6,	// (0x00055a79) list_single_2graphic_pane_t1_cp4

0x8efb,	// (0x00050a7e) list_highlight_pane_cp21

0xdf05,	// (0x00055a88) list_single_midp_graphic_pane_g4_cp

0xdf14,	// (0x00055a97) list_single_midp_graphic_pane_t1_cp

0xa024,	// (0x00051ba7) form2_mdip_string_pane_t1_ParamLimits

0xa024,	// (0x00051ba7) form2_mdip_string_pane_t1

0x8e8f,	// (0x00050a12) bg_wml_button_pane_cp2

0x8e85,	// (0x00050a08) form2_midp_image_pane_g1

0x2ede,	// (0x0004aa61) list_double_large_graphic_pane_g5_ParamLimits

0x2ede,	// (0x0004aa61) list_double_large_graphic_pane_g5

0xb20b,	// (0x00052d8e) midp_form_pane_ParamLimits

0x8efb,	// (0x00050a7e) main_apps_wheel_pane_ParamLimits

0x7be5,	// (0x0004f768) popup_preview_window_ParamLimits

0x7be5,	// (0x0004f768) popup_preview_window

0x189f,	// (0x00049422) popup_touch_info_window_ParamLimits

0x189f,	// (0x00049422) popup_touch_info_window

0x18bd,	// (0x00049440) popup_touch_menu_window_ParamLimits

0x18bd,	// (0x00049440) popup_touch_menu_window

0x8e7b,	// (0x000509fe) bg_popup_sub_pane_cp6

0xdf29,	// (0x00055aac) list_touch_menu_pane

0xdf31,	// (0x00055ab4) list_single_touch_menu_pane_ParamLimits

0xdf31,	// (0x00055ab4) list_single_touch_menu_pane

0xdf45,	// (0x00055ac8) list_single_touch_menu_pane_t1

0x8efb,	// (0x00050a7e) bg_popup_sub_pane_cp7_ParamLimits

0x8efb,	// (0x00050a7e) bg_popup_sub_pane_cp7

0xdf53,	// (0x00055ad6) heading_sub_pane

0xdf5b,	// (0x00055ade) list_touch_info_pane_ParamLimits

0xdf5b,	// (0x00055ade) list_touch_info_pane

0xdf6a,	// (0x00055aed) list_single_touch_info_pane_ParamLimits

0xdf6a,	// (0x00055aed) list_single_touch_info_pane

0xdf7c,	// (0x00055aff) list_single_touch_info_pane_t1

0xdf8a,	// (0x00055b0d) list_single_touch_info_pane_t2

0x0001,

0x0115,	// (0x00047c98) list_single_touch_info_pane_t

0xbd49,	// (0x000538cc) bg_popup_heading_pane_cp

0xdf98,	// (0x00055b1b) heading_sub_pane_t1

0xc20b,	// (0x00053d8e) bg_popup_preview_window_pane_cp_ParamLimits

0xc20b,	// (0x00053d8e) bg_popup_preview_window_pane_cp

0xdf53,	// (0x00055ad6) heading_preview_pane

0xdf5b,	// (0x00055ade) list_preview_pane_ParamLimits

0xdf5b,	// (0x00055ade) list_preview_pane

0xdfa6,	// (0x00055b29) popup_preview_window_g1

0xdf6a,	// (0x00055aed) list_single_preview_pane_ParamLimits

0xdf6a,	// (0x00055aed) list_single_preview_pane

0xdfae,	// (0x00055b31) list_single_preview_pane_g1

0xdfb6,	// (0x00055b39) list_single_preview_pane_t1

0xdf7c,	// (0x00055aff) list_single_preview_pane_t2

0x0001,

0x011a,	// (0x00047c9d) list_single_preview_pane_t

0xdfc4,	// (0x00055b47) bg_popup_heading_pane_cp2_ParamLimits

0xdfc4,	// (0x00055b47) bg_popup_heading_pane_cp2

0xdfda,	// (0x00055b5d) heading_preview_pane_g1

0xdfe2,	// (0x00055b65) heading_preview_pane_t1_ParamLimits

0xdfe2,	// (0x00055b65) heading_preview_pane_t1

0x8f4e,	// (0x00050ad1) soft_indicator_pane_t1_ParamLimits

0x9a51,	// (0x000515d4) scroll_pane_ParamLimits

0xb607,	// (0x0005318a) scroll_sc2_left_pane

0xb610,	// (0x00053193) scroll_sc2_right_pane

0xb62f,	// (0x000531b2) scroll_bg_pane_g1_ParamLimits

0xb644,	// (0x000531c7) scroll_bg_pane_g2_ParamLimits

0xb65c,	// (0x000531df) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x0005726c) scroll_bg_pane_g_ParamLimits

0xb62f,	// (0x000531b2) scroll_handle_pane_g1_ParamLimits

0xb67e,	// (0x00053201) scroll_handle_pane_g2_ParamLimits

0xb65c,	// (0x000531df) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x00057273) scroll_handle_pane_g_ParamLimits

0x136f,	// (0x00048ef2) popup_choice_list_window_ParamLimits

0x136f,	// (0x00048ef2) popup_choice_list_window

0xc0e1,	// (0x00053c64) choice_list_pane

0xc163,	// (0x00053ce6) cell_toolbar_pane_t1

0xc18b,	// (0x00053d0e) toolbar_button_pane_ParamLimits

0xd09e,	// (0x00054c21) ai_gene_pane_1_t2_ParamLimits

0xd09e,	// (0x00054c21) ai_gene_pane_1_t2

0x0001,

0xf913,	// (0x00057496) ai_gene_pane_1_t_ParamLimits

0xf913,	// (0x00057496) ai_gene_pane_1_t

0xdfff,	// (0x00055b82) scroll_sc2_left_pane_g1

0xdfff,	// (0x00055b82) scroll_sc2_right_pane_g1

0xb20b,	// (0x00052d8e) bg_popup_sub_pane_cp10

0xe009,	// (0x00055b8c) list_choice_list_pane

0xe022,	// (0x00055ba5) list_single_choice_list_pane_ParamLimits

0xe022,	// (0x00055ba5) list_single_choice_list_pane

0xe035,	// (0x00055bb8) list_single_choice_list_pane_g1

0xb1f6,	// (0x00052d79) list_single_choice_list_pane_t1_ParamLimits

0xb1f6,	// (0x00052d79) list_single_choice_list_pane_t1

0xe03d,	// (0x00055bc0) choice_list_pane_g1

0xe045,	// (0x00055bc8) choice_list_pane_t1

0x8e7b,	// (0x000509fe) input_focus_pane_cp11

0xb57c,	// (0x000530ff) title_pane_stacon_g2_ParamLimits

0xb57c,	// (0x000530ff) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x00057252) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x00057252) title_pane_stacon_g

0xbd49,	// (0x000538cc) cursor_press_pane

0x789e,	// (0x0004f421) popup_fep_hwr_window_ParamLimits

0x789e,	// (0x0004f421) popup_fep_hwr_window

0x148f,	// (0x00049012) popup_fep_vkb_window_ParamLimits

0x148f,	// (0x00049012) popup_fep_vkb_window

0xe053,	// (0x00055bd6) cursor_press_pane_g1

0x0002,

0xfad2,	// (0x00057655) fep_vkb_side_pane_g_ParamLimits

0x1dd1,	// (0x00049954) fep_hwr_candidate_pane_ParamLimits

0x1dd1,	// (0x00049954) fep_hwr_candidate_pane

0x1dfb,	// (0x0004997e) fep_hwr_side_pane_ParamLimits

0x1dfb,	// (0x0004997e) fep_hwr_side_pane

0x1e1b,	// (0x0004999e) fep_hwr_top_pane_ParamLimits

0x1e1b,	// (0x0004999e) fep_hwr_top_pane

0x1e33,	// (0x000499b6) fep_hwr_write_pane_ParamLimits

0x1e33,	// (0x000499b6) fep_hwr_write_pane

0xfad2,	// (0x00057655) fep_vkb_side_pane_g

0xe05b,	// (0x00055bde) fep_hwr_top_pane_g1

0xe06d,	// (0x00055bf0) fep_hwr_top_pane_g2

0x1e6d,	// (0x000499f0) fep_hwr_top_pane_g3

0x0002,

0xfab7,	// (0x0005763a) fep_hwr_top_pane_g

0x1e82,	// (0x00049a05) fep_hwr_top_text_pane

0xb837,	// (0x000533ba) fep_hwr_top_text_pane_g1

0xe0a3,	// (0x00055c26) fep_hwr_top_text_pane_t1

0x1f78,	// (0x00049afb) fep_hwr_candidate_pane_g1

0xe1ce,	// (0x00055d51) fep_vkb_keypad_pane_g3_ParamLimits

0xe1ce,	// (0x00055d51) fep_vkb_keypad_pane_g3

0xe1f6,	// (0x00055d79) fep_vkb_keypad_pane_g4_ParamLimits

0xe1f6,	// (0x00055d79) fep_vkb_keypad_pane_g4

0xe265,	// (0x00055de8) fep_vkb_bottom_pane_g2_ParamLimits

0xe265,	// (0x00055de8) fep_vkb_bottom_pane_g2

0x0001,

0x0143,	// (0x00047cc6) fep_vkb_bottom_pane_g_ParamLimits

0x0143,	// (0x00047cc6) fep_vkb_bottom_pane_g

0xdfff,	// (0x00055b82) cell_vkb_side_pane_g2

0x0001,

0x0148,	// (0x00047ccb) cell_vkb_side_pane_g

0xe2a9,	// (0x00055e2c) cell_vkb_side_pane_t1

0xe2b7,	// (0x00055e3a) cell_vkb_side_pane_t1_copy1

0xdfff,	// (0x00055b82) bg_fep_vkb_candidate_pane_g2

0xe38d,	// (0x00055f10) cell_vkb_candidate_pane_ParamLimits

0xe0b1,	// (0x00055c34) aid_size_cell_vkb_ParamLimits

0xe0b1,	// (0x00055c34) aid_size_cell_vkb

0xe38d,	// (0x00055f10) cell_vkb_candidate_pane

0x1f9f,	// (0x00049b22) bg_popup_fep_shadow_pane_g1

0xa0b4,	// (0x00051c37) fep_vkb_bottom_pane_ParamLimits

0xa0b4,	// (0x00051c37) fep_vkb_bottom_pane

0xe13c,	// (0x00055cbf) fep_vkb_candidate_pane_ParamLimits

0xe13c,	// (0x00055cbf) fep_vkb_candidate_pane

0xa0d9,	// (0x00051c5c) fep_vkb_keypad_pane_ParamLimits

0xa0d9,	// (0x00051c5c) fep_vkb_keypad_pane

0xa10e,	// (0x00051c91) fep_vkb_side_pane_ParamLimits

0xa10e,	// (0x00051c91) fep_vkb_side_pane

0xa14a,	// (0x00051ccd) fep_vkb_top_pane_ParamLimits

0xa14a,	// (0x00051ccd) fep_vkb_top_pane

0xe162,	// (0x00055ce5) fep_vkb_top_pane_g1_ParamLimits

0xe162,	// (0x00055ce5) fep_vkb_top_pane_g1

0xe171,	// (0x00055cf4) fep_vkb_top_pane_g2_ParamLimits

0xe171,	// (0x00055cf4) fep_vkb_top_pane_g2

0xe180,	// (0x00055d03) fep_vkb_top_pane_g3_ParamLimits

0xe180,	// (0x00055d03) fep_vkb_top_pane_g3

0x0003,

0x013a,	// (0x00047cbd) fep_vkb_top_pane_g_ParamLimits

0x013a,	// (0x00047cbd) fep_vkb_top_pane_g

0xe19e,	// (0x00055d21) fep_vkb_top_text_pane_ParamLimits

0xe19e,	// (0x00055d21) fep_vkb_top_text_pane

0xa17f,	// (0x00051d02) fep_vkb_side_pane_g1_ParamLimits

0xa17f,	// (0x00051d02) fep_vkb_side_pane_g1

0xe1bd,	// (0x00055d40) grid_vkb_side_pane_ParamLimits

0xe1bd,	// (0x00055d40) grid_vkb_side_pane

0x1fa7,	// (0x00049b2a) bg_popup_fep_shadow_pane_g2

0x1fb0,	// (0x00049b33) bg_popup_fep_shadow_pane_g3

0x1fb8,	// (0x00049b3b) bg_popup_fep_shadow_pane_g4

0x1fc1,	// (0x00049b44) bg_popup_fep_shadow_pane_g5

0x1fcb,	// (0x00049b4e) bg_popup_fep_shadow_pane_g6

0x1fd3,	// (0x00049b56) bg_popup_fep_shadow_pane_g7

0xb119,	// (0x00052c9c) bg_popup_fep_shadow_pane_g8

0xe214,	// (0x00055d97) grid_vkb_keypad_number_pane_ParamLimits

0xe214,	// (0x00055d97) grid_vkb_keypad_number_pane

0xe224,	// (0x00055da7) grid_vkb_keypad_pane_ParamLimits

0xe224,	// (0x00055da7) grid_vkb_keypad_pane

0xe24a,	// (0x00055dcd) fep_vkb_bottom_pane_g1_ParamLimits

0xe24a,	// (0x00055dcd) fep_vkb_bottom_pane_g1

0xe273,	// (0x00055df6) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xe273,	// (0x00055df6) grid_vkb_keypad_bottom_left_pane

0xe288,	// (0x00055e0b) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xe288,	// (0x00055e0b) grid_vkb_keypad_bottom_right_pane

0xe29d,	// (0x00055e20) fep_vkb_top_text_pane_g1

0xa1c6,	// (0x00051d49) fep_vkb_top_text_pane_t1

0xa1d8,	// (0x00051d5b) cell_vkb_side_pane_ParamLimits

0xa1d8,	// (0x00051d5b) cell_vkb_side_pane

0xdfff,	// (0x00055b82) cell_vkb_side_pane_g1

0xe2c5,	// (0x00055e48) cell_vkb_keypad_pane_ParamLimits

0xe2c5,	// (0x00055e48) cell_vkb_keypad_pane

0xe33a,	// (0x00055ebd) cell_vkb_keypad_pane_g1

0x0008,

0xfade,	// (0x00057661) bg_popup_fep_shadow_pane_g

0x1fe5,	// (0x00049b68) cell_hwr_side_pane_g1

0x1fe5,	// (0x00049b68) cell_hwr_side_pane_g2

0xe344,	// (0x00055ec7) cell_vkb_keypad_pane_t1

0xa1ee,	// (0x00051d71) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xa1ee,	// (0x00051d71) cell_vkb_keypad_bottom_left_pane

0xa203,	// (0x00051d86) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xa203,	// (0x00051d86) cell_vkb_keypad_bottom_right_pane

0xdfff,	// (0x00055b82) cell_vkb_keypad_bottom_left_pane_g1

0xdfff,	// (0x00055b82) cell_vkb_keypad_bottom_right_pane_g1

0xe352,	// (0x00055ed5) cell_vkb_keypad_number_pane_ParamLimits

0xe352,	// (0x00055ed5) cell_vkb_keypad_number_pane

0xe371,	// (0x00055ef4) cell_vkb_keypad_number_pane_g1

0xe37b,	// (0x00055efe) cell_vkb_keypad_number_pane_g2

0xe384,	// (0x00055f07) cell_vkb_keypad_number_pane_g3

0x0002,

0x014d,	// (0x00047cd0) cell_vkb_keypad_number_pane_g

0xe344,	// (0x00055ec7) cell_vkb_keypad_number_pane_t1

0xe3a8,	// (0x00055f2b) fep_vkb_candidate_pane_g1

0x0001,

0xfaf1,	// (0x00057674) cell_hwr_side_pane_g

0xe3c1,	// (0x00055f44) cell_hwr_side_pane_t1

0x1fef,	// (0x00049b72) cell_hwr_side_pane_t1_copy1

0x1ffd,	// (0x00049b80) cell_hwr_candidate_pane_g1

0x202c,	// (0x00049baf) cell_hwr_candidate_pane_t1

0xdfff,	// (0x00055b82) cell_vkb_candidate_pane_g2

0xe405,	// (0x00055f88) cell_vkb_candidate_pane_t1

0x1d98,	// (0x0004991b) bg_popup_fep_shadow_pane_ParamLimits

0x1d98,	// (0x0004991b) bg_popup_fep_shadow_pane

0x1e4d,	// (0x000499d0) bg_fep_hwr_top_pane_g4

0xe07f,	// (0x00055c02) bg_hwr_side_pane_g1_ParamLimits

0xe07f,	// (0x00055c02) bg_hwr_side_pane_g1

0x800a,	// (0x0004fb8d) cell_hwr_side_pane_ParamLimits

0x800a,	// (0x0004fb8d) cell_hwr_side_pane

0x1ef9,	// (0x00049a7c) fep_hwr_write_pane_g1_ParamLimits

0x1ef9,	// (0x00049a7c) fep_hwr_write_pane_g1

0x1f06,	// (0x00049a89) fep_hwr_write_pane_g2_ParamLimits

0x1f06,	// (0x00049a89) fep_hwr_write_pane_g2

0x1f13,	// (0x00049a96) fep_hwr_write_pane_g3_ParamLimits

0x1f13,	// (0x00049a96) fep_hwr_write_pane_g3

0x802a,	// (0x0004fbad) fep_hwr_write_pane_g4_ParamLimits

0x802a,	// (0x0004fbad) fep_hwr_write_pane_g4

0x0005,

0xfabe,	// (0x00057641) fep_hwr_write_pane_g_ParamLimits

0xfabe,	// (0x00057641) fep_hwr_write_pane_g

0x1e4d,	// (0x000499d0) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1e4d,	// (0x000499d0) bg_fep_hwr_candidate_pane_g2

0x1f36,	// (0x00049ab9) cell_hwr_candidate_pane_ParamLimits

0x1f36,	// (0x00049ab9) cell_hwr_candidate_pane

0x1f78,	// (0x00049afb) fep_hwr_candidate_pane_g1_ParamLimits

0xe0df,	// (0x00055c62) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xe0df,	// (0x00055c62) bg_popup_fep_shadow_pane_cp2

0xe190,	// (0x00055d13) fep_vkb_top_pane_g4_ParamLimits

0xe190,	// (0x00055d13) fep_vkb_top_pane_g4

0xe1af,	// (0x00055d32) fep_vkb_side_pane_g2_ParamLimits

0xe1af,	// (0x00055d32) fep_vkb_side_pane_g2

0x759e,	// (0x0004f121) list_setting_pane_t4_ParamLimits

0x759e,	// (0x0004f121) list_setting_pane_t4

0x7638,	// (0x0004f1bb) list_setting_number_pane_t5_ParamLimits

0x7638,	// (0x0004f1bb) list_setting_number_pane_t5

0x8ae5,	// (0x00050668) list_double_heading_pane_cp2_ParamLimits

0x8ae5,	// (0x00050668) list_double_heading_pane_cp2

0x9a85,	// (0x00051608) list_double_heading_pane_g1_cp2_ParamLimits

0x9a85,	// (0x00051608) list_double_heading_pane_g1_cp2

0xb0c0,	// (0x00052c43) list_double_heading_pane_g2_cp2_ParamLimits

0xb0c0,	// (0x00052c43) list_double_heading_pane_g2_cp2

0xe413,	// (0x00055f96) list_double_heading_pane_t1_cp2_ParamLimits

0xe413,	// (0x00055f96) list_double_heading_pane_t1_cp2

0xe429,	// (0x00055fac) list_double_heading_pane_t2_cp2_ParamLimits

0xe429,	// (0x00055fac) list_double_heading_pane_t2_cp2

0x8e73,	// (0x000509f6) aid_value_unit2

0x07f8,	// (0x0004837b) popup_preview_fixed_window

0x902e,	// (0x00050bb1) bg_popup_preview_window_pane_cp02

0xe43b,	// (0x00055fbe) list_preview_fixed_pane

0xe481,	// (0x00056004) list_empty_pane_fp_ParamLimits

0xe481,	// (0x00056004) list_empty_pane_fp

0xe481,	// (0x00056004) list_single_cale_day_pane_fp_ParamLimits

0xe481,	// (0x00056004) list_single_cale_day_pane_fp

0xe481,	// (0x00056004) list_single_graphic_heading_pane_fp_ParamLimits

0xe481,	// (0x00056004) list_single_graphic_heading_pane_fp

0xe481,	// (0x00056004) list_single_graphic_pane_fp_ParamLimits

0xe481,	// (0x00056004) list_single_graphic_pane_fp

0xe481,	// (0x00056004) list_single_heading_pane_fp_ParamLimits

0xe481,	// (0x00056004) list_single_heading_pane_fp

0xe481,	// (0x00056004) list_single_pane_fp_ParamLimits

0xe481,	// (0x00056004) list_single_pane_fp

0xe497,	// (0x0005601a) list_single_pane_fp_g1_ParamLimits

0xe497,	// (0x0005601a) list_single_pane_fp_g1

0x9a85,	// (0x00051608) list_single_pane_fp_g2_ParamLimits

0x9a85,	// (0x00051608) list_single_pane_fp_g2

0xb0c0,	// (0x00052c43) list_single_pane_fp_g3_ParamLimits

0xb0c0,	// (0x00052c43) list_single_pane_fp_g3

0xe4e5,	// (0x00056068) list_single_pane_fp_g4_ParamLimits

0xe4e5,	// (0x00056068) list_single_pane_fp_g4

0x0003,

0xfb04,	// (0x00057687) list_single_pane_fp_g_ParamLimits

0xfb04,	// (0x00057687) list_single_pane_fp_g

0x3aab,	// (0x0004b62e) list_single_pane_fp_t1_ParamLimits

0x3aab,	// (0x0004b62e) list_single_pane_fp_t1

0x3ac2,	// (0x0004b645) list_single_graphic_pane_fp_g1_ParamLimits

0x3ac2,	// (0x0004b645) list_single_graphic_pane_fp_g1

0xe497,	// (0x0005601a) list_single_graphic_pane_fp_g2_ParamLimits

0xe497,	// (0x0005601a) list_single_graphic_pane_fp_g2

0x9a85,	// (0x00051608) list_single_graphic_pane_fp_g3_ParamLimits

0x9a85,	// (0x00051608) list_single_graphic_pane_fp_g3

0xb0c0,	// (0x00052c43) list_single_graphic_pane_fp_g4_ParamLimits

0xb0c0,	// (0x00052c43) list_single_graphic_pane_fp_g4

0xe4e5,	// (0x00056068) list_single_graphic_pane_fp_g5_ParamLimits

0xe4e5,	// (0x00056068) list_single_graphic_pane_fp_g5

0x0004,

0xfb0d,	// (0x00057690) list_single_graphic_pane_fp_g_ParamLimits

0xfb0d,	// (0x00057690) list_single_graphic_pane_fp_g

0x3ace,	// (0x0004b651) list_single_graphic_pane_fp_t1_ParamLimits

0x3ace,	// (0x0004b651) list_single_graphic_pane_fp_t1

0x3ac2,	// (0x0004b645) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3ac2,	// (0x0004b645) list_single_graphic_heading_pane_fp_g1

0xe497,	// (0x0005601a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xe497,	// (0x0005601a) list_single_graphic_heading_pane_fp_g2

0x9a85,	// (0x00051608) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x9a85,	// (0x00051608) list_single_graphic_heading_pane_fp_g3

0xb0c0,	// (0x00052c43) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xb0c0,	// (0x00052c43) list_single_graphic_heading_pane_fp_g4

0xe4e5,	// (0x00056068) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xe4e5,	// (0x00056068) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb0d,	// (0x00057690) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb0d,	// (0x00057690) list_single_graphic_heading_pane_fp_g

0x3ae4,	// (0x0004b667) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3ae4,	// (0x0004b667) list_single_graphic_heading_pane_fp_t1

0x3afa,	// (0x0004b67d) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3afa,	// (0x0004b67d) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb18,	// (0x0005769b) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb18,	// (0x0005769b) list_single_graphic_heading_pane_fp_t

0x3b0c,	// (0x0004b68f) list_single_cale_day_pane_fp_g1_ParamLimits

0x3b0c,	// (0x0004b68f) list_single_cale_day_pane_fp_g1

0xe4f1,	// (0x00056074) list_single_cale_day_pane_fp_g2_ParamLimits

0xe4f1,	// (0x00056074) list_single_cale_day_pane_fp_g2

0x3e08,	// (0x0004b98b) list_single_cale_day_pane_fp_g3_ParamLimits

0x3e08,	// (0x0004b98b) list_single_cale_day_pane_fp_g3

0x3e30,	// (0x0004b9b3) list_single_cale_day_pane_fp_g4_ParamLimits

0x3e30,	// (0x0004b9b3) list_single_cale_day_pane_fp_g4

0x3e54,	// (0x0004b9d7) list_single_cale_day_pane_fp_g5_ParamLimits

0x3e54,	// (0x0004b9d7) list_single_cale_day_pane_fp_g5

0x0004,

0xfb1d,	// (0x000576a0) list_single_cale_day_pane_fp_g_ParamLimits

0xfb1d,	// (0x000576a0) list_single_cale_day_pane_fp_g

0x3b44,	// (0x0004b6c7) list_single_cale_day_pane_fp_t1_ParamLimits

0x3b44,	// (0x0004b6c7) list_single_cale_day_pane_fp_t1

0x3b6a,	// (0x0004b6ed) list_single_cale_day_pane_fp_t2_ParamLimits

0x3b6a,	// (0x0004b6ed) list_single_cale_day_pane_fp_t2

0x3b83,	// (0x0004b706) list_single_cale_day_pane_fp_t3_ParamLimits

0x3b83,	// (0x0004b706) list_single_cale_day_pane_fp_t3

0x0002,

0xfb28,	// (0x000576ab) list_single_cale_day_pane_fp_t_ParamLimits

0xfb28,	// (0x000576ab) list_single_cale_day_pane_fp_t

0xe497,	// (0x0005601a) list_empty_pane_fp_g1_ParamLimits

0xe497,	// (0x0005601a) list_empty_pane_fp_g1

0x3b9c,	// (0x0004b71f) list_empty_pane_fp_t1

0x3baa,	// (0x0004b72d) list_empty_pane_fp_t2

0x0001,

0xfb2f,	// (0x000576b2) list_empty_pane_fp_t

0xe497,	// (0x0005601a) list_single_heading_pane_fp_g1_ParamLimits

0xe497,	// (0x0005601a) list_single_heading_pane_fp_g1

0x9a85,	// (0x00051608) list_single_heading_pane_fp_g2_ParamLimits

0x9a85,	// (0x00051608) list_single_heading_pane_fp_g2

0xb0c0,	// (0x00052c43) list_single_heading_pane_fp_g3_ParamLimits

0xb0c0,	// (0x00052c43) list_single_heading_pane_fp_g3

0x0002,

0xfb34,	// (0x000576b7) list_single_heading_pane_fp_g_ParamLimits

0xfb34,	// (0x000576b7) list_single_heading_pane_fp_g

0x3bb8,	// (0x0004b73b) list_single_heading_pane_fp_t1_ParamLimits

0x3bb8,	// (0x0004b73b) list_single_heading_pane_fp_t1

0x3bca,	// (0x0004b74d) list_single_heading_pane_fp_t2_ParamLimits

0x3bca,	// (0x0004b74d) list_single_heading_pane_fp_t2

0x0001,

0xfb3b,	// (0x000576be) list_single_heading_pane_fp_t_ParamLimits

0xfb3b,	// (0x000576be) list_single_heading_pane_fp_t

0xb416,	// (0x00052f99) aid_size_cell_fast

0x9011,	// (0x00050b94) soft_indicator_pane_cp1_t1

0xb450,	// (0x00052fd3) cell_app_pane_cp2_ParamLimits

0xb450,	// (0x00052fd3) cell_app_pane_cp2

0x1dba,	// (0x0004993d) fep_hwr_candidate_drop_down_list_pane

0x1f92,	// (0x00049b15) fep_hwr_candidate_pane_g3_ParamLimits

0x1f92,	// (0x00049b15) fep_hwr_candidate_pane_g3

0xaca6,	// (0x00052829) fep_hwr_candidate_pane_g4_ParamLimits

0xaca6,	// (0x00052829) fep_hwr_candidate_pane_g4

0x0002,

0xfacb,	// (0x0005764e) fep_hwr_candidate_pane_g_ParamLimits

0xfacb,	// (0x0005764e) fep_hwr_candidate_pane_g

0xe12b,	// (0x00055cae) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xe12b,	// (0x00055cae) fep_vkb_candidate_drop_down_list_pane

0xe3b0,	// (0x00055f33) fep_vkb_candidate_pane_g3

0xe3b8,	// (0x00055f3b) fep_vkb_candidate_pane_g4

0x0002,

0x0154,	// (0x00047cd7) fep_vkb_candidate_pane_g

0x1ffd,	// (0x00049b80) cell_hwr_candidate_pane_g1_ParamLimits

0x200b,	// (0x00049b8e) cell_hwr_candidate_pane_g3_ParamLimits

0x200b,	// (0x00049b8e) cell_hwr_candidate_pane_g3

0xf41e,	// (0x00056fa1) cell_hwr_candidate_pane_g4_ParamLimits

0xf41e,	// (0x00056fa1) cell_hwr_candidate_pane_g4

0x0002,

0xfaf6,	// (0x00057679) cell_hwr_candidate_pane_g_ParamLimits

0xfaf6,	// (0x00057679) cell_hwr_candidate_pane_g

0xe3cf,	// (0x00055f52) cell_vkb_candidate_pane_g3_ParamLimits

0xe3cf,	// (0x00055f52) cell_vkb_candidate_pane_g3

0xe3ea,	// (0x00055f6d) cell_vkb_candidate_pane_g4_ParamLimits

0xe3ea,	// (0x00055f6d) cell_vkb_candidate_pane_g4

0xe4fd,	// (0x00056080) cell_app_pane_cp2_g1_ParamLimits

0xe4fd,	// (0x00056080) cell_app_pane_cp2_g1

0xe51b,	// (0x0005609e) cell_app_pane_cp2_g2_ParamLimits

0xe51b,	// (0x0005609e) cell_app_pane_cp2_g2

0x0001,

0x01b8,	// (0x00047d3b) cell_app_pane_cp2_g_ParamLimits

0x01b8,	// (0x00047d3b) cell_app_pane_cp2_g

0xe527,	// (0x000560aa) cell_app_pane_cp2_t1_ParamLimits

0xe527,	// (0x000560aa) cell_app_pane_cp2_t1

0xb0b2,	// (0x00052c35) grid_highlight_pane_cp1_ParamLimits

0xb0b2,	// (0x00052c35) grid_highlight_pane_cp1

0x204a,	// (0x00049bcd) cell_hwr_candidate_pane_cp1_ParamLimits

0x204a,	// (0x00049bcd) cell_hwr_candidate_pane_cp1

0x1ffd,	// (0x00049b80) fep_hwr_candidate_drop_down_list_pane_g1

0x2069,	// (0x00049bec) fep_hwr_candidate_drop_down_list_pane_g2

0x2076,	// (0x00049bf9) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb40,	// (0x000576c3) fep_hwr_candidate_drop_down_list_pane_g

0x2083,	// (0x00049c06) fep_hwr_candidate_drop_down_list_scroll_pane

0x208c,	// (0x00049c0f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x208c,	// (0x00049c0f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2099,	// (0x00049c1c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2099,	// (0x00049c1c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x20a6,	// (0x00049c29) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x20a6,	// (0x00049c29) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x20b3,	// (0x00049c36) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x20b3,	// (0x00049c36) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x20ce,	// (0x00049c51) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x20ce,	// (0x00049c51) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x20e9,	// (0x00049c6c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x20e9,	// (0x00049c6c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2104,	// (0x00049c87) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2104,	// (0x00049c87) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x211f,	// (0x00049ca2) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x211f,	// (0x00049ca2) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb47,	// (0x000576ca) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb47,	// (0x000576ca) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xe539,	// (0x000560bc) cell_vkb_candidate_pane_cp1_ParamLimits

0xe539,	// (0x000560bc) cell_vkb_candidate_pane_cp1

0xe190,	// (0x00055d13) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xe190,	// (0x00055d13) fep_vkb_candidate_drop_down_list_pane_g1

0xe559,	// (0x000560dc) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xe559,	// (0x000560dc) fep_vkb_candidate_drop_down_list_pane_g2

0xe566,	// (0x000560e9) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xe566,	// (0x000560e9) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb58,	// (0x000576db) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb58,	// (0x000576db) fep_vkb_candidate_drop_down_list_pane_g

0xe573,	// (0x000560f6) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xe573,	// (0x000560f6) fep_vkb_candidate_drop_down_list_scroll_pane

0xe580,	// (0x00056103) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe580,	// (0x00056103) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xe58d,	// (0x00056110) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe58d,	// (0x00056110) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xe599,	// (0x0005611c) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe599,	// (0x0005611c) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xe4a3,	// (0x00056026) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe4a3,	// (0x00056026) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xe4c4,	// (0x00056047) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe4c4,	// (0x00056047) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xe5a5,	// (0x00056128) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe5a5,	// (0x00056128) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xe5c6,	// (0x00056149) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe5c6,	// (0x00056149) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xe5e7,	// (0x0005616a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe5e7,	// (0x0005616a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb5f,	// (0x000576e2) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb5f,	// (0x000576e2) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8522,	// (0x000500a5) title_pane_g1_ParamLimits

0x8535,	// (0x000500b8) title_pane_g2_ParamLimits

0xf554,	// (0x000570d7) title_pane_g_ParamLimits

0xb827,	// (0x000533aa) aid_call2_pane

0xb82f,	// (0x000533b2) aid_call_pane

0xb837,	// (0x000533ba) popup_clock_analogue_window_g1

0xb837,	// (0x000533ba) popup_clock_analogue_window_g2

0x0f25,	// (0x00048aa8) popup_clock_analogue_window_g3

0x0f2e,	// (0x00048ab1) popup_clock_analogue_window_g4

0x8e85,	// (0x00050a08) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x00057281) popup_clock_analogue_window_g

0x0f36,	// (0x00048ab9) popup_clock_analogue_window_t1

0x0f44,	// (0x00048ac7) clock_digital_number_pane_ParamLimits

0x0f44,	// (0x00048ac7) clock_digital_number_pane

0x0f50,	// (0x00048ad3) clock_digital_number_pane_cp02_ParamLimits

0x0f50,	// (0x00048ad3) clock_digital_number_pane_cp02

0x0f5c,	// (0x00048adf) clock_digital_number_pane_cp03_ParamLimits

0x0f5c,	// (0x00048adf) clock_digital_number_pane_cp03

0x0f68,	// (0x00048aeb) clock_digital_number_pane_cp04_ParamLimits

0x0f68,	// (0x00048aeb) clock_digital_number_pane_cp04

0x0f74,	// (0x00048af7) clock_digital_separator_pane_ParamLimits

0x0f74,	// (0x00048af7) clock_digital_separator_pane

0x0f80,	// (0x00048b03) popup_clock_digital_window_t1_ParamLimits

0x0f80,	// (0x00048b03) popup_clock_digital_window_t1

0x8e85,	// (0x00050a08) clock_digital_number_pane_g1

0x8e85,	// (0x00050a08) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x0005728c) clock_digital_number_pane_g

0x8e85,	// (0x00050a08) clock_digital_separator_pane_g1

0x8e85,	// (0x00050a08) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x0005728c) clock_digital_separator_pane_g

0x94c2,	// (0x00051045) aid_fill_nsta_ParamLimits

0x95f8,	// (0x0005117b) indicator_nsta_pane_ParamLimits

0xc088,	// (0x00053c0b) popup_clock_analogue_window

0xc088,	// (0x00053c0b) popup_clock_digital_window

0xd975,	// (0x000554f8) grid_indicator_nsta_pane_ParamLimits

0xdc92,	// (0x00055815) clock_nsta_pane_t2

0x0001,

0x00d4,	// (0x00047c57) clock_nsta_pane_t

0x0ee9,	// (0x00048a6c) aid_size_max_handle

0x0ef3,	// (0x00048a76) aid_size_min_handle

0xbd49,	// (0x000538cc) editor_scroll_pane

0xe602,	// (0x00056185) ex_editor_pane

0xb1d2,	// (0x00052d55) scroll_pane_cp13

0x9a7d,	// (0x00051600) scroll_pane_cp14

0xb866,	// (0x000533e9) scroll_pane_cp36

0x8af6,	// (0x00050679) list_single_graphic_hl_pane_cp2_ParamLimits

0x8af6,	// (0x00050679) list_single_graphic_hl_pane_cp2

0x9198,	// (0x00050d1b) list_single_graphic_hl_pane_ParamLimits

0x9198,	// (0x00050d1b) list_single_graphic_hl_pane

0x3be0,	// (0x0004b763) aid_size_min_hl_cp1

0xe60a,	// (0x0005618d) list_highlight_pane_cp34_ParamLimits

0xe60a,	// (0x0005618d) list_highlight_pane_cp34

0xe61b,	// (0x0005619e) list_single_graphic_hl_pane_g1_ParamLimits

0xe61b,	// (0x0005619e) list_single_graphic_hl_pane_g1

0x8d4a,	// (0x000508cd) list_single_graphic_hl_pane_g2_ParamLimits

0x8d4a,	// (0x000508cd) list_single_graphic_hl_pane_g2

0x8d4a,	// (0x000508cd) list_single_graphic_hl_pane_g3_ParamLimits

0x8d4a,	// (0x000508cd) list_single_graphic_hl_pane_g3

0xbcba,	// (0x0005383d) list_single_graphic_hl_pane_g4_ParamLimits

0xbcba,	// (0x0005383d) list_single_graphic_hl_pane_g4

0x91bc,	// (0x00050d3f) list_single_graphic_hl_pane_g5_ParamLimits

0x91bc,	// (0x00050d3f) list_single_graphic_hl_pane_g5

0x0004,

0xfb70,	// (0x000576f3) list_single_graphic_hl_pane_g_ParamLimits

0xfb70,	// (0x000576f3) list_single_graphic_hl_pane_g

0x8d56,	// (0x000508d9) list_single_graphic_hl_pane_t1_ParamLimits

0x8d56,	// (0x000508d9) list_single_graphic_hl_pane_t1

0xe628,	// (0x000561ab) aid_size_min_hl_cp2

0xe631,	// (0x000561b4) list_highlight_pane_cp34_cp2_ParamLimits

0xe631,	// (0x000561b4) list_highlight_pane_cp34_cp2

0xe61b,	// (0x0005619e) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xe61b,	// (0x0005619e) list_single_graphic_hl_pane_g1_cp2

0xe63e,	// (0x000561c1) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xe63e,	// (0x000561c1) list_single_graphic_hl_pane_g2_cp2

0xe64a,	// (0x000561cd) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xe64a,	// (0x000561cd) list_single_graphic_hl_pane_g3_cp2

0x9a91,	// (0x00051614) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x9a91,	// (0x00051614) list_single_graphic_hl_pane_g4_cp2

0xe658,	// (0x000561db) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xe658,	// (0x000561db) list_single_graphic_hl_pane_g5_cp2

0x76cc,	// (0x0004f24f) control_pane_g4_ParamLimits

0x76cc,	// (0x0004f24f) control_pane_g4

0xb20b,	// (0x00052d8e) bg_popup_sub_pane_cp10_ParamLimits

0xe009,	// (0x00055b8c) list_choice_list_pane_ParamLimits

0xe018,	// (0x00055b9b) scroll_pane_cp23

0x902e,	// (0x00050bb1) bg_popup_preview_window_pane_cp02_ParamLimits

0xe43b,	// (0x00055fbe) list_preview_fixed_pane_ParamLimits

0xe451,	// (0x00055fd4) list_preview_fixed_pane_cp_ParamLimits

0xe451,	// (0x00055fd4) list_preview_fixed_pane_cp

0xe45d,	// (0x00055fe0) popup_preview_fixed_window_g1_ParamLimits

0xe45d,	// (0x00055fe0) popup_preview_fixed_window_g1

0xe469,	// (0x00055fec) popup_preview_fixed_window_g2_ParamLimits

0xe469,	// (0x00055fec) popup_preview_fixed_window_g2

0x0002,

0xfafd,	// (0x00057680) popup_preview_fixed_window_g_ParamLimits

0xfafd,	// (0x00057680) popup_preview_fixed_window_g

0x0e5d,	// (0x000489e0) aid_navi_side_left_pane_ParamLimits

0x0e72,	// (0x000489f5) aid_navi_side_right_pane_ParamLimits

0x0e8a,	// (0x00048a0d) navi_icon_pane_stacon_ParamLimits

0x0e9e,	// (0x00048a21) navi_navi_pane_stacon_ParamLimits

0x0e8a,	// (0x00048a0d) navi_text_pane_stacon_ParamLimits

0x06c7,	// (0x0004824a) main_text_info_pane

0xe682,	// (0x00056205) listscroll_text_info_pane

0xe68a,	// (0x0005620d) list_text_info_pane_ParamLimits

0xe68a,	// (0x0005620d) list_text_info_pane

0xe699,	// (0x0005621c) scroll_pane_cp24_ParamLimits

0xe699,	// (0x0005621c) scroll_pane_cp24

0xa21e,	// (0x00051da1) list_text_info_pane_t1_ParamLimits

0xa21e,	// (0x00051da1) list_text_info_pane_t1

0x7813,	// (0x0004f396) popup_fast_swap2_window_ParamLimits

0x7813,	// (0x0004f396) popup_fast_swap2_window

0xe6b7,	// (0x0005623a) aid_size_cell_fast2

0x8e7b,	// (0x000509fe) bg_popup_window_pane_cp17

0xc4d9,	// (0x0005405c) heading_pane_cp2

0x92be,	// (0x00050e41) listscroll_fast2_pane

0xe6c1,	// (0x00056244) grid_fast2_pane

0xe6cb,	// (0x0005624e) listscroll_fast2_pane_g1

0xe6d3,	// (0x00056256) listscroll_fast2_pane_g2

0x0001,

0x01f1,	// (0x00047d74) listscroll_fast2_pane_g

0xb1d2,	// (0x00052d55) scroll_pane_cp26

0xe6dd,	// (0x00056260) cell_fast2_pane_ParamLimits

0xe6dd,	// (0x00056260) cell_fast2_pane

0xe6f2,	// (0x00056275) cell_fast2_pane_g1

0xe6fb,	// (0x0005627e) cell_fast2_pane_g2

0xe704,	// (0x00056287) cell_fast2_pane_g3

0x0002,

0x01f6,	// (0x00047d79) cell_fast2_pane_g

0x9352,	// (0x00050ed5) grid_highlight_pane_cp9

0x1353,	// (0x00048ed6) main_eswt_pane_ParamLimits

0x1353,	// (0x00048ed6) main_eswt_pane

0xe6ae,	// (0x00056231) list_single_text_info_pane

0xe70c,	// (0x0005628f) eswt_ctrl_button_pane

0xe70c,	// (0x0005628f) eswt_ctrl_canvas_pane

0xe714,	// (0x00056297) eswt_ctrl_combo_pane

0xe70c,	// (0x0005628f) eswt_ctrl_default_pane

0xe70c,	// (0x0005628f) eswt_ctrl_label_pane

0xe71c,	// (0x0005629f) eswt_ctrl_wait_pane

0xe724,	// (0x000562a7) eswt_shell_pane

0x8e7b,	// (0x000509fe) listscroll_eswt_app_pane

0xe744,	// (0x000562c7) popup_eswt_tasktip_window_ParamLimits

0xe744,	// (0x000562c7) popup_eswt_tasktip_window

0xc20b,	// (0x00053d8e) bg_popup_window_pane_cp18

0xe755,	// (0x000562d8) eswt_control_pane_g1_ParamLimits

0xe755,	// (0x000562d8) eswt_control_pane_g1

0xe762,	// (0x000562e5) eswt_control_pane_g2_ParamLimits

0xe762,	// (0x000562e5) eswt_control_pane_g2

0xe76f,	// (0x000562f2) eswt_control_pane_g3_ParamLimits

0xe76f,	// (0x000562f2) eswt_control_pane_g3

0xe77c,	// (0x000562ff) eswt_control_pane_g4_ParamLimits

0xe77c,	// (0x000562ff) eswt_control_pane_g4

0x0003,

0x01fd,	// (0x00047d80) eswt_control_pane_g_ParamLimits

0x01fd,	// (0x00047d80) eswt_control_pane_g

0xb0b2,	// (0x00052c35) bg_button_pane_ParamLimits

0xb0b2,	// (0x00052c35) bg_button_pane

0x9367,	// (0x00050eea) common_borders_pane_copy2_ParamLimits

0x9367,	// (0x00050eea) common_borders_pane_copy2

0xe789,	// (0x0005630c) control_button_pane_g1_ParamLimits

0xe789,	// (0x0005630c) control_button_pane_g1

0xe795,	// (0x00056318) control_button_pane_g2_ParamLimits

0xe795,	// (0x00056318) control_button_pane_g2

0xe7a1,	// (0x00056324) control_button_pane_g3_ParamLimits

0xe7a1,	// (0x00056324) control_button_pane_g3

0x0002,

0x0206,	// (0x00047d89) control_button_pane_g_ParamLimits

0x0206,	// (0x00047d89) control_button_pane_g

0xe7b5,	// (0x00056338) control_button_pane_t1

0xe7c3,	// (0x00056346) control_button_pane_t2

0x0001,

0x020d,	// (0x00047d90) control_button_pane_t

0xc197,	// (0x00053d1a) bg_button_pane_g1

0xc1a7,	// (0x00053d2a) bg_button_pane_g2

0xc19f,	// (0x00053d22) bg_button_pane_g3

0xc1b7,	// (0x00053d3a) bg_button_pane_g4

0xc1af,	// (0x00053d32) bg_button_pane_g5

0xc1bf,	// (0x00053d42) bg_button_pane_g6

0xc1c7,	// (0x00053d4a) bg_button_pane_g7

0xc1d7,	// (0x00053d5a) bg_button_pane_g8

0xc1cf,	// (0x00053d52) bg_button_pane_g9

0x0008,

0xf867,	// (0x000573ea) bg_button_pane_g

0xdfc4,	// (0x00055b47) common_borders_pane_ParamLimits

0xdfc4,	// (0x00055b47) common_borders_pane

0xe755,	// (0x000562d8) eswt_control_pane_g1_copy1_ParamLimits

0xe755,	// (0x000562d8) eswt_control_pane_g1_copy1

0xe762,	// (0x000562e5) eswt_control_pane_g2_copy1_ParamLimits

0xe762,	// (0x000562e5) eswt_control_pane_g2_copy1

0xe76f,	// (0x000562f2) eswt_control_pane_g3_copy1_ParamLimits

0xe76f,	// (0x000562f2) eswt_control_pane_g3_copy1

0xe77c,	// (0x000562ff) eswt_control_pane_g4_copy1_ParamLimits

0xe77c,	// (0x000562ff) eswt_control_pane_g4_copy1

0xdfff,	// (0x00055b82) bg_eswt_ctrl_canvas_pane_g1

0xdfc4,	// (0x00055b47) common_borders_pane_cp2_ParamLimits

0xdfc4,	// (0x00055b47) common_borders_pane_cp2

0xdfc4,	// (0x00055b47) common_borders_pane_cp3_ParamLimits

0xdfc4,	// (0x00055b47) common_borders_pane_cp3

0xe7d1,	// (0x00056354) separator_horizontal_pane

0xe7d9,	// (0x0005635c) separator_vertical_pane

0xe755,	// (0x000562d8) eswt_control_pane_g1_copy2_ParamLimits

0xe755,	// (0x000562d8) eswt_control_pane_g1_copy2

0xe762,	// (0x000562e5) eswt_control_pane_g2_copy2_ParamLimits

0xe762,	// (0x000562e5) eswt_control_pane_g2_copy2

0xe76f,	// (0x000562f2) eswt_control_pane_g3_copy2_ParamLimits

0xe76f,	// (0x000562f2) eswt_control_pane_g3_copy2

0xe77c,	// (0x000562ff) eswt_control_pane_g4_copy2_ParamLimits

0xe77c,	// (0x000562ff) eswt_control_pane_g4_copy2

0x8e7b,	// (0x000509fe) common_borders_pane_cp4

0xe7e2,	// (0x00056365) separator_horizontal_pane_g1

0xe7eb,	// (0x0005636e) separator_horizontal_pane_g2

0xe7f4,	// (0x00056377) separator_horizontal_pane_g3

0x0002,

0x0212,	// (0x00047d95) separator_horizontal_pane_g

0xe755,	// (0x000562d8) eswt_control_pane_g1_copy3_ParamLimits

0xe755,	// (0x000562d8) eswt_control_pane_g1_copy3

0xe762,	// (0x000562e5) eswt_control_pane_g2_copy3_ParamLimits

0xe762,	// (0x000562e5) eswt_control_pane_g2_copy3

0xe76f,	// (0x000562f2) eswt_control_pane_g3_copy3_ParamLimits

0xe76f,	// (0x000562f2) eswt_control_pane_g3_copy3

0xe77c,	// (0x000562ff) eswt_control_pane_g4_copy3_ParamLimits

0xe77c,	// (0x000562ff) eswt_control_pane_g4_copy3

0x8e7b,	// (0x000509fe) common_borders_pane_cp5

0xe7fd,	// (0x00056380) separator_vertical_pane_g1

0xe806,	// (0x00056389) separator_vertical_pane_g2

0xe80f,	// (0x00056392) separator_vertical_pane_g3

0x0002,

0x0219,	// (0x00047d9c) separator_vertical_pane_g

0xe755,	// (0x000562d8) eswt_control_pane_g1_copy4_ParamLimits

0xe755,	// (0x000562d8) eswt_control_pane_g1_copy4

0xe762,	// (0x000562e5) eswt_control_pane_g2_copy4_ParamLimits

0xe762,	// (0x000562e5) eswt_control_pane_g2_copy4

0xe76f,	// (0x000562f2) eswt_control_pane_g3_copy4_ParamLimits

0xe76f,	// (0x000562f2) eswt_control_pane_g3_copy4

0xe77c,	// (0x000562ff) eswt_control_pane_g4_copy4_ParamLimits

0xe77c,	// (0x000562ff) eswt_control_pane_g4_copy4

0xe818,	// (0x0005639b) eswt_ctrl_combo_button_pane

0xe820,	// (0x000563a3) eswt_ctrl_input_pane

0xe828,	// (0x000563ab) popup_choice_list_window_cp70

0xe830,	// (0x000563b3) eswt_ctrl_input_pane_t1

0x8e7b,	// (0x000509fe) input_focus_pane_cp70

0xdfc4,	// (0x00055b47) bg_button_pane_cp70_ParamLimits

0xdfc4,	// (0x00055b47) bg_button_pane_cp70

0xe83e,	// (0x000563c1) eswt_ctrl_combo_button_pane_g1

0xe846,	// (0x000563c9) wait_bar_pane_cp70

0xc20b,	// (0x00053d8e) bg_popup_window_pane_cp70_ParamLimits

0xc20b,	// (0x00053d8e) bg_popup_window_pane_cp70

0xe84e,	// (0x000563d1) popup_eswt_tasktip_window_t1

0xe864,	// (0x000563e7) wait_bar_pane_cp71_ParamLimits

0xe864,	// (0x000563e7) wait_bar_pane_cp71

0xe870,	// (0x000563f3) grid_eswt_app_pane

0xb607,	// (0x0005318a) scroll_pane_cp70

0xa23b,	// (0x00051dbe) cell_eswt_app_pane_ParamLimits

0xa23b,	// (0x00051dbe) cell_eswt_app_pane

0xa265,	// (0x00051de8) cell_eswt_app_pane_g1_ParamLimits

0xa265,	// (0x00051de8) cell_eswt_app_pane_g1

0xa294,	// (0x00051e17) cell_eswt_app_pane_g2_ParamLimits

0xa294,	// (0x00051e17) cell_eswt_app_pane_g2

0x0001,

0xfb7b,	// (0x000576fe) cell_eswt_app_pane_g_ParamLimits

0xfb7b,	// (0x000576fe) cell_eswt_app_pane_g

0xa2b8,	// (0x00051e3b) cell_eswt_app_pane_t1_ParamLimits

0xa2b8,	// (0x00051e3b) cell_eswt_app_pane_t1

0xe879,	// (0x000563fc) grid_highlight_pane_cp70_ParamLimits

0xe879,	// (0x000563fc) grid_highlight_pane_cp70

0xbc2a,	// (0x000537ad) set_content_pane_g1

0xbf32,	// (0x00053ab5) status_small_volume_pane

0x213a,	// (0x00049cbd) status_small_volume_pane_g1

0x2142,	// (0x00049cc5) volume_small2_pane

0x214b,	// (0x00049cce) volume_small2_pane_g1

0x2154,	// (0x00049cd7) volume_small2_pane_g2

0x215d,	// (0x00049ce0) volume_small2_pane_g3

0x2166,	// (0x00049ce9) volume_small2_pane_g4

0x216f,	// (0x00049cf2) volume_small2_pane_g5

0x2178,	// (0x00049cfb) volume_small2_pane_g6

0x2181,	// (0x00049d04) volume_small2_pane_g7

0x218a,	// (0x00049d0d) volume_small2_pane_g8

0x2193,	// (0x00049d16) volume_small2_pane_g9

0x219c,	// (0x00049d1f) volume_small2_pane_g10

0x0009,

0xfb80,	// (0x00057703) volume_small2_pane_g

0xe29d,	// (0x00055e20) fep_vkb_top_text_pane_g1_ParamLimits

0xa1c6,	// (0x00051d49) fep_vkb_top_text_pane_t1_ParamLimits

0xe475,	// (0x00055ff8) popup_preview_fixed_window_g3_ParamLimits

0xe475,	// (0x00055ff8) popup_preview_fixed_window_g3

0x7e22,	// (0x0004f9a5) popup_toolbar_trans_pane

0x9c05,	// (0x00051788) aid_height_set_list_ParamLimits

0xbfa7,	// (0x00053b2a) aid_size_parent_ParamLimits

0xb20b,	// (0x00052d8e) list_highlight_pane_cp2_ParamLimits

0xbc2a,	// (0x000537ad) set_content_pane_g1_ParamLimits

0x91aa,	// (0x00050d2d) list_single_image_pane_ParamLimits

0x91aa,	// (0x00050d2d) list_single_image_pane

0xa2ea,	// (0x00051e6d) aid_size_cell_image_ParamLimits

0xa2ea,	// (0x00051e6d) aid_size_cell_image

0xa2f7,	// (0x00051e7a) grid_single_image_pane_ParamLimits

0xa2f7,	// (0x00051e7a) grid_single_image_pane

0xe885,	// (0x00056408) list_single_image_pane_g1_ParamLimits

0xe885,	// (0x00056408) list_single_image_pane_g1

0xe891,	// (0x00056414) list_single_image_pane_g2_ParamLimits

0xe891,	// (0x00056414) list_single_image_pane_g2

0x0001,

0x0235,	// (0x00047db8) list_single_image_pane_g_ParamLimits

0x0235,	// (0x00047db8) list_single_image_pane_g

0xe8a5,	// (0x00056428) list_single_image_pane_t1_ParamLimits

0xe8a5,	// (0x00056428) list_single_image_pane_t1

0xa303,	// (0x00051e86) cell_image_list_pane_ParamLimits

0xa303,	// (0x00051e86) cell_image_list_pane

0xa317,	// (0x00051e9a) cell_image_list_pane_g1

0xa320,	// (0x00051ea3) cell_image_list_pane_g2

0x0001,

0xfb95,	// (0x00057718) cell_image_list_pane_g

0xe8bb,	// (0x0005643e) aid_size_cell_tb_trans_pane

0xb0b2,	// (0x00052c35) bg_tb_trans_pane

0xe8cd,	// (0x00056450) grid_tb_trans_pane

0xc197,	// (0x00053d1a) bg_tb_trans_pane_g1

0xc1a7,	// (0x00053d2a) bg_tb_trans_pane_g2

0xc19f,	// (0x00053d22) bg_tb_trans_pane_g3

0xc1b7,	// (0x00053d3a) bg_tb_trans_pane_g4

0xc1af,	// (0x00053d32) bg_tb_trans_pane_g5

0xc1d7,	// (0x00053d5a) bg_tb_trans_pane_g6

0xc1cf,	// (0x00053d52) bg_tb_trans_pane_g7

0xc1bf,	// (0x00053d42) bg_tb_trans_pane_g8

0xc1c7,	// (0x00053d4a) bg_tb_trans_pane_g9

0x0008,

0xfb9a,	// (0x0005771d) bg_tb_trans_pane_g

0xe8e1,	// (0x00056464) cell_toolbar_trans_pane_ParamLimits

0xe8e1,	// (0x00056464) cell_toolbar_trans_pane

0xdfff,	// (0x00055b82) cell_toolbar_trans_pane_g1

0x9fa9,	// (0x00051b2c) list_form2_midp_pane_t1

0x9fb7,	// (0x00051b3a) list_form2_midp_pane_t2

0x0001,

0xfaab,	// (0x0005762e) list_form2_midp_pane_t

0xdd5c,	// (0x000558df) scroll_pane_cp51_ParamLimits

0xded3,	// (0x00055a56) form2_midp_wait_pane_g1

0xdedc,	// (0x00055a5f) form2_midp_wait_pane_g2

0xdee5,	// (0x00055a68) form2_midp_wait_pane_g3

0x0002,

0x010e,	// (0x00047c91) form2_midp_wait_pane_g

0x8efb,	// (0x00050a7e) list_highlight_pane_cp21_ParamLimits

0xdf05,	// (0x00055a88) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xdf14,	// (0x00055a97) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd350,	// (0x00054ed3) list_single_2graphic_im_pane_ParamLimits

0xd350,	// (0x00054ed3) list_single_2graphic_im_pane

0xe907,	// (0x0005648a) list_single_2graphic_im_pane_g1_ParamLimits

0xe907,	// (0x0005648a) list_single_2graphic_im_pane_g1

0xe918,	// (0x0005649b) list_single_2graphic_im_pane_g2_ParamLimits

0xe918,	// (0x0005649b) list_single_2graphic_im_pane_g2

0xe924,	// (0x000564a7) list_single_2graphic_im_pane_g3_ParamLimits

0xe924,	// (0x000564a7) list_single_2graphic_im_pane_g3

0x0003,

0x024d,	// (0x00047dd0) list_single_2graphic_im_pane_g_ParamLimits

0x024d,	// (0x00047dd0) list_single_2graphic_im_pane_g

0xe944,	// (0x000564c7) list_single_2graphic_im_pane_t1_ParamLimits

0xe944,	// (0x000564c7) list_single_2graphic_im_pane_t1

0xe481,	// (0x00056004) list_single_graphic_2heading_pane_fp_ParamLimits

0xe481,	// (0x00056004) list_single_graphic_2heading_pane_fp

0x3ac2,	// (0x0004b645) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3ac2,	// (0x0004b645) list_single_graphic_2heading_pane_fp_g1

0xe497,	// (0x0005601a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xe497,	// (0x0005601a) list_single_graphic_2heading_pane_fp_g2

0x9a85,	// (0x00051608) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x9a85,	// (0x00051608) list_single_graphic_2heading_pane_fp_g3

0xb0c0,	// (0x00052c43) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xb0c0,	// (0x00052c43) list_single_graphic_2heading_pane_fp_g4

0xe4e5,	// (0x00056068) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xe4e5,	// (0x00056068) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb0d,	// (0x00057690) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb0d,	// (0x00057690) list_single_graphic_2heading_pane_fp_g

0x3c0b,	// (0x0004b78e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x3c0b,	// (0x0004b78e) list_single_graphic_2heading_pane_fp_t1

0x3afa,	// (0x0004b67d) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3afa,	// (0x0004b67d) list_single_graphic_2heading_pane_fp_t2

0x3c21,	// (0x0004b7a4) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3c21,	// (0x0004b7a4) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfbad,	// (0x00057730) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfbad,	// (0x00057730) list_single_graphic_2heading_pane_fp_t

0xe08b,	// (0x00055c0e) fep_hwr_write_pane_g5_ParamLimits

0xe08b,	// (0x00055c0e) fep_hwr_write_pane_g5

0xe097,	// (0x00055c1a) fep_hwr_write_pane_g6_ParamLimits

0xe097,	// (0x00055c1a) fep_hwr_write_pane_g6

0xe724,	// (0x000562a7) eswt_shell_pane_ParamLimits

0xc20b,	// (0x00053d8e) bg_popup_window_pane_cp18_ParamLimits

0xd281,	// (0x00054e04) heading_pane_cp70

0xe84e,	// (0x000563d1) popup_eswt_tasktip_window_t1_ParamLimits

0x951d,	// (0x000510a0) aid_touch_tab_arrow_left

0x9533,	// (0x000510b6) aid_touch_tab_arrow_right

0x854d,	// (0x000500d0) title_pane_g3_ParamLimits

0x854d,	// (0x000500d0) title_pane_g3

0xb071,	// (0x00052bf4) set_value_pane_g1

0x7e22,	// (0x0004f9a5) popup_toolbar_trans_pane_ParamLimits

0xe8bb,	// (0x0005643e) aid_size_cell_tb_trans_pane_ParamLimits

0xb0b2,	// (0x00052c35) bg_tb_trans_pane_ParamLimits

0xe8cd,	// (0x00056450) grid_tb_trans_pane_ParamLimits

0x902e,	// (0x00050bb1) cont_note_pane_ParamLimits

0x902e,	// (0x00050bb1) cont_note_pane

0x9367,	// (0x00050eea) cont_snote2_single_text_pane_ParamLimits

0x9367,	// (0x00050eea) cont_snote2_single_text_pane

0x9367,	// (0x00050eea) cont_snote2_single_graphic_pane_ParamLimits

0x9367,	// (0x00050eea) cont_snote2_single_graphic_pane

0xc6ef,	// (0x00054272) cont_note_wait_pane_ParamLimits

0xc6ef,	// (0x00054272) cont_note_wait_pane

0xc6ef,	// (0x00054272) cont_note_image_pane_ParamLimits

0xc6ef,	// (0x00054272) cont_note_image_pane

0xe975,	// (0x000564f8) popup_note2_window_g1_ParamLimits

0xe975,	// (0x000564f8) popup_note2_window_g1

0xe9a6,	// (0x00056529) popup_note2_window_t1_ParamLimits

0xe9a6,	// (0x00056529) popup_note2_window_t1

0xe9eb,	// (0x0005656e) popup_note2_window_t2_ParamLimits

0xe9eb,	// (0x0005656e) popup_note2_window_t2

0xea30,	// (0x000565b3) popup_note2_window_t3_ParamLimits

0xea30,	// (0x000565b3) popup_note2_window_t3

0xea75,	// (0x000565f8) popup_note2_window_t4_ParamLimits

0xea75,	// (0x000565f8) popup_note2_window_t4

0x90a6,	// (0x00050c29) popup_note2_window_t5_ParamLimits

0x90a6,	// (0x00050c29) popup_note2_window_t5

0x0004,

0xfbb4,	// (0x00057737) popup_note2_window_t_ParamLimits

0xfbb4,	// (0x00057737) popup_note2_window_t

0xeaa4,	// (0x00056627) popup_note2_image_window_g1_ParamLimits

0xeaa4,	// (0x00056627) popup_note2_image_window_g1

0xeab0,	// (0x00056633) popup_note2_image_window_g2_ParamLimits

0xeab0,	// (0x00056633) popup_note2_image_window_g2

0x0001,

0x026d,	// (0x00047df0) popup_note2_image_window_g_ParamLimits

0x026d,	// (0x00047df0) popup_note2_image_window_g

0xeac2,	// (0x00056645) popup_note2_image_window_t1_ParamLimits

0xeac2,	// (0x00056645) popup_note2_image_window_t1

0xeada,	// (0x0005665d) popup_note2_image_window_t2_ParamLimits

0xeada,	// (0x0005665d) popup_note2_image_window_t2

0xeaf2,	// (0x00056675) popup_note2_image_window_t3_ParamLimits

0xeaf2,	// (0x00056675) popup_note2_image_window_t3

0x0002,

0x0272,	// (0x00047df5) popup_note2_image_window_t_ParamLimits

0x0272,	// (0x00047df5) popup_note2_image_window_t

0xc6fd,	// (0x00054280) popup_note2_wait_window_g1_ParamLimits

0xc6fd,	// (0x00054280) popup_note2_wait_window_g1

0xeb0e,	// (0x00056691) popup_note2_wait_window_g2_ParamLimits

0xeb0e,	// (0x00056691) popup_note2_wait_window_g2

0xc715,	// (0x00054298) popup_note2_wait_window_g3_ParamLimits

0xc715,	// (0x00054298) popup_note2_wait_window_g3

0x0002,

0x0279,	// (0x00047dfc) popup_note2_wait_window_g_ParamLimits

0x0279,	// (0x00047dfc) popup_note2_wait_window_g

0xeb1a,	// (0x0005669d) popup_note2_wait_window_t1_ParamLimits

0xeb1a,	// (0x0005669d) popup_note2_wait_window_t1

0xeb38,	// (0x000566bb) popup_note2_wait_window_t2_ParamLimits

0xeb38,	// (0x000566bb) popup_note2_wait_window_t2

0xeb56,	// (0x000566d9) popup_note2_wait_window_t3_ParamLimits

0xeb56,	// (0x000566d9) popup_note2_wait_window_t3

0xeb68,	// (0x000566eb) popup_note2_wait_window_t4_ParamLimits

0xeb68,	// (0x000566eb) popup_note2_wait_window_t4

0x0003,

0x0280,	// (0x00047e03) popup_note2_wait_window_t_ParamLimits

0x0280,	// (0x00047e03) popup_note2_wait_window_t

0xeb7a,	// (0x000566fd) wait_bar2_pane_ParamLimits

0xeb7a,	// (0x000566fd) wait_bar2_pane

0xeb92,	// (0x00056715) popup_snote2_single_text_window_g1_ParamLimits

0xeb92,	// (0x00056715) popup_snote2_single_text_window_g1

0xebba,	// (0x0005673d) popup_snote2_single_text_window_t1_ParamLimits

0xebba,	// (0x0005673d) popup_snote2_single_text_window_t1

0xec06,	// (0x00056789) popup_snote2_single_text_window_t2_ParamLimits

0xec06,	// (0x00056789) popup_snote2_single_text_window_t2

0xec52,	// (0x000567d5) popup_snote2_single_text_window_t3_ParamLimits

0xec52,	// (0x000567d5) popup_snote2_single_text_window_t3

0xec93,	// (0x00056816) popup_snote2_single_text_window_t4_ParamLimits

0xec93,	// (0x00056816) popup_snote2_single_text_window_t4

0xecc9,	// (0x0005684c) popup_snote2_single_text_window_t5_ParamLimits

0xecc9,	// (0x0005684c) popup_snote2_single_text_window_t5

0x0004,

0x0289,	// (0x00047e0c) popup_snote2_single_text_window_t_ParamLimits

0x0289,	// (0x00047e0c) popup_snote2_single_text_window_t

0xecf4,	// (0x00056877) popup_snote2_single_graphic_window_g1_ParamLimits

0xecf4,	// (0x00056877) popup_snote2_single_graphic_window_g1

0xed1c,	// (0x0005689f) popup_snote2_single_graphic_window_g2_ParamLimits

0xed1c,	// (0x0005689f) popup_snote2_single_graphic_window_g2

0x0001,

0x0294,	// (0x00047e17) popup_snote2_single_graphic_window_g_ParamLimits

0x0294,	// (0x00047e17) popup_snote2_single_graphic_window_g

0xed44,	// (0x000568c7) popup_snote2_single_graphic_window_t1_ParamLimits

0xed44,	// (0x000568c7) popup_snote2_single_graphic_window_t1

0xed90,	// (0x00056913) popup_snote2_single_graphic_window_t2_ParamLimits

0xed90,	// (0x00056913) popup_snote2_single_graphic_window_t2

0xec52,	// (0x000567d5) popup_snote2_single_graphic_window_t3_ParamLimits

0xec52,	// (0x000567d5) popup_snote2_single_graphic_window_t3

0xec93,	// (0x00056816) popup_snote2_single_graphic_window_t4_ParamLimits

0xec93,	// (0x00056816) popup_snote2_single_graphic_window_t4

0xecc9,	// (0x0005684c) popup_snote2_single_graphic_window_t5_ParamLimits

0xecc9,	// (0x0005684c) popup_snote2_single_graphic_window_t5

0x0004,

0x0299,	// (0x00047e1c) popup_snote2_single_graphic_window_t_ParamLimits

0x0299,	// (0x00047e1c) popup_snote2_single_graphic_window_t

0xdcf0,	// (0x00055873) clock_nsta_pane_cp2_t1

0xdcf0,	// (0x00055873) clock_nsta_pane_cp2_t2

0x0001,

0x00eb,	// (0x00047c6e) clock_nsta_pane_cp2_t

0x30d2,	// (0x0004ac55) form_field_data_wide_pane_g1_ParamLimits

0x9a85,	// (0x00051608) form_field_data_wide_pane_g2_ParamLimits

0x9a85,	// (0x00051608) form_field_data_wide_pane_g2

0xb0c0,	// (0x00052c43) form_field_data_wide_pane_g3_ParamLimits

0xb0c0,	// (0x00052c43) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x00057204) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x00057204) form_field_data_wide_pane_g

0x9edd,	// (0x00051a60) grid_touch_3_pane_ParamLimits

0x9edd,	// (0x00051a60) grid_touch_3_pane

0xa329,	// (0x00051eac) cell_touch_3_pane_ParamLimits

0xa329,	// (0x00051eac) cell_touch_3_pane

0xdfff,	// (0x00055b82) cell_touch_3_pane_g1

0xdfff,	// (0x00055b82) cell_touch_3_pane_g2

0x0001,

0x0148,	// (0x00047ccb) cell_touch_3_pane_g

0x90d8,	// (0x00050c5b) cont_query_data_pane

0x90e0,	// (0x00050c63) cont_query_data_pane_cp1

0xeddc,	// (0x0005695f) button_value_adjust_pane_cp7

0xede4,	// (0x00056967) query_popup_pane_cp3

0xb898,	// (0x0005341b) bg_popup_sub_pane_cp22_ParamLimits

0x0f9f,	// (0x00048b22) navi_navi_volume_pane_cp2

0x0fb7,	// (0x00048b3a) popup_side_volume_key_window_g2

0x0fc3,	// (0x00048b46) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x0005729a) popup_side_volume_key_window_g

0x0fdd,	// (0x00048b60) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x000572a1) popup_side_volume_key_window_t

0xbaf6,	// (0x00053679) popup_side_volume_key_window_ParamLimits

0x73af,	// (0x0004ef32) list_double_graphic_pane_g4_ParamLimits

0x73af,	// (0x0004ef32) list_double_graphic_pane_g4

0x9d93,	// (0x00051916) list_single_2heading_msg_pane_ParamLimits

0x9d93,	// (0x00051916) list_single_2heading_msg_pane

0x91d0,	// (0x00050d53) list_single_2heading_msg_pane_g1_ParamLimits

0x91d0,	// (0x00050d53) list_single_2heading_msg_pane_g1

0x91dc,	// (0x00050d5f) list_single_2heading_msg_pane_g2_ParamLimits

0x91dc,	// (0x00050d5f) list_single_2heading_msg_pane_g2

0x91ef,	// (0x00050d72) list_single_2heading_msg_pane_g3_ParamLimits

0x91ef,	// (0x00050d72) list_single_2heading_msg_pane_g3

0x3ea4,	// (0x0004ba27) list_single_2heading_msg_pane_g4_ParamLimits

0x3ea4,	// (0x0004ba27) list_single_2heading_msg_pane_g4

0x0003,

0xfbbf,	// (0x00057742) list_single_2heading_msg_pane_g_ParamLimits

0xfbbf,	// (0x00057742) list_single_2heading_msg_pane_g

0x3c41,	// (0x0004b7c4) list_single_2heading_msg_pane_t1_ParamLimits

0x3c41,	// (0x0004b7c4) list_single_2heading_msg_pane_t1

0x8d6c,	// (0x000508ef) list_single_2heading_msg_pane_t2_ParamLimits

0x8d6c,	// (0x000508ef) list_single_2heading_msg_pane_t2

0x8dd7,	// (0x0005095a) list_single_2heading_msg_pane_t3_ParamLimits

0x8dd7,	// (0x0005095a) list_single_2heading_msg_pane_t3

0x3cd6,	// (0x0004b859) list_single_2heading_msg_pane_t4_ParamLimits

0x3cd6,	// (0x0004b859) list_single_2heading_msg_pane_t4

0x0003,

0xfbc8,	// (0x0005774b) list_single_2heading_msg_pane_t_ParamLimits

0xfbc8,	// (0x0005774b) list_single_2heading_msg_pane_t

0x8e99,	// (0x00050a1c) title_pane_g4_ParamLimits

0x8e99,	// (0x00050a1c) title_pane_g4

0x0dad,	// (0x00048930) title_pane_stacon_g3_ParamLimits

0x0dad,	// (0x00048930) title_pane_stacon_g3

0xe938,	// (0x000564bb) list_single_2graphic_im_pane_g4_ParamLimits

0xe938,	// (0x000564bb) list_single_2graphic_im_pane_g4

0xd0bb,	// (0x00054c3e) popup_side_volume_key_window_cp

0xd57c,	// (0x000550ff) main_idle_act2_pane_t1

0x1922,	// (0x000494a5) toolbar_button_pane_g10

0x8857,	// (0x000503da) popup_toolbar_window_cp1

0xdce1,	// (0x00055864) clock_nsta_pane_cp_t1

0xdce1,	// (0x00055864) clock_nsta_pane_cp_t2

0x0001,

0x00e6,	// (0x00047c69) clock_nsta_pane_cp_t

0x0f9f,	// (0x00048b22) navi_navi_volume_pane_cp2_ParamLimits

0x0fab,	// (0x00048b2e) popup_side_volume_key_window_g1_ParamLimits

0x0fb7,	// (0x00048b3a) popup_side_volume_key_window_g2_ParamLimits

0x0fc3,	// (0x00048b46) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x0005729a) popup_side_volume_key_window_g_ParamLimits

0x1da6,	// (0x00049929) fep_hwr_aid_pane

0x1e4d,	// (0x000499d0) bg_fep_hwr_top_pane_g4_ParamLimits

0xe05b,	// (0x00055bde) fep_hwr_top_pane_g1_ParamLimits

0xe06d,	// (0x00055bf0) fep_hwr_top_pane_g2_ParamLimits

0x1e6d,	// (0x000499f0) fep_hwr_top_pane_g3_ParamLimits

0xfab7,	// (0x0005763a) fep_hwr_top_pane_g_ParamLimits

0x1e82,	// (0x00049a05) fep_hwr_top_text_pane_ParamLimits

0xce7e,	// (0x00054a01) aid_touch_tab_arrow_arrow_2

0xce87,	// (0x00054a0a) aid_touch_tab_arrow_left_2

0x1dba,	// (0x0004993d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1df1,	// (0x00049974) fep_hwr_prediction_pane

0xe158,	// (0x00055cdb) fep_vkb_prediction_pane

0xa1a6,	// (0x00051d29) fep_vkb_side_pane_g3_ParamLimits

0xa1a6,	// (0x00051d29) fep_vkb_side_pane_g3

0x1ffd,	// (0x00049b80) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x2069,	// (0x00049bec) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x2076,	// (0x00049bf9) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb40,	// (0x000576c3) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x21a5,	// (0x00049d28) fep_hwr_prediction_pane_g1

0x21af,	// (0x00049d32) fep_hwr_prediction_pane_g2

0x21b7,	// (0x00049d3a) fep_hwr_prediction_pane_g3

0x21bf,	// (0x00049d42) fep_hwr_prediction_pane_g4

0x0003,

0xfbd1,	// (0x00057754) fep_hwr_prediction_pane_g

0xedf5,	// (0x00056978) fep_vkb_prediction_pane_g1

0xedff,	// (0x00056982) fep_vkb_prediction_pane_g2

0xee07,	// (0x0005698a) fep_vkb_prediction_pane_g3

0xee0f,	// (0x00056992) fep_vkb_prediction_pane_g4

0x0003,

0x02bf,	// (0x00047e42) fep_vkb_prediction_pane_g

0x1c02,	// (0x00049785) slider_set_pane_g3

0x1c16,	// (0x00049799) slider_set_pane_g4

0x1c2e,	// (0x000497b1) slider_set_pane_g5

0x1c02,	// (0x00049785) slider_set_pane_g6

0x1c44,	// (0x000497c7) slider_set_pane_g7

0xd306,	// (0x00054e89) slider_form_pane_g3

0xd30f,	// (0x00054e92) slider_form_pane_g4

0xd317,	// (0x00054e9a) slider_form_pane_g5

0xd306,	// (0x00054e89) slider_form_pane_g6

0x9d74,	// (0x000518f7) slider_form_pane_g7

0xd834,	// (0x000553b7) slider_set_pane_vc_g3

0xd83d,	// (0x000553c0) slider_set_pane_vc_g4

0xd846,	// (0x000553c9) slider_set_pane_vc_g5

0xd834,	// (0x000553b7) slider_set_pane_vc_g6

0xd84f,	// (0x000553d2) slider_set_pane_vc_g7

0xda19,	// (0x0005559c) slider_form_pane_vc_g1

0xda22,	// (0x000555a5) slider_form_pane_vc_g2

0xda2b,	// (0x000555ae) slider_form_pane_vc_g3

0xda19,	// (0x0005559c) slider_form_pane_vc_g4

0xda34,	// (0x000555b7) slider_form_pane_vc_g5

0x0004,

0x00bd,	// (0x00047c40) slider_form_pane_vc_g

0x06c7,	// (0x0004824a) main_idle_act3_pane

0xee17,	// (0x0005699a) ai3_links_pane

0xa372,	// (0x00051ef5) popup_ai3_data_window_ParamLimits

0xa372,	// (0x00051ef5) popup_ai3_data_window

0x8e7b,	// (0x000509fe) grid_ai3_links_pane

0xa38a,	// (0x00051f0d) cell_ai3_links_pane_ParamLimits

0xa38a,	// (0x00051f0d) cell_ai3_links_pane

0xee20,	// (0x000569a3) bg_popup_sub_pane_cp11

0xee2d,	// (0x000569b0) cell_ai3_links_pane_g1

0x8e7b,	// (0x000509fe) bg_popup_sub_pane_cp12

0xee52,	// (0x000569d5) heading_ai3_data_pane

0xee5a,	// (0x000569dd) list_ai3_gene_pane

0xee66,	// (0x000569e9) popup_ai3_data_window_g1

0xee6e,	// (0x000569f1) heading_ai3_data_pane_g1

0xee76,	// (0x000569f9) heading_ai3_data_pane_t1

0xee84,	// (0x00056a07) list_double_ai3_gene_pane_ParamLimits

0xee84,	// (0x00056a07) list_double_ai3_gene_pane

0xee91,	// (0x00056a14) list_single_ai3_gene_pane_ParamLimits

0xee91,	// (0x00056a14) list_single_ai3_gene_pane

0xdfc4,	// (0x00055b47) list_highlight_pane_cp7_ParamLimits

0xdfc4,	// (0x00055b47) list_highlight_pane_cp7

0xee9e,	// (0x00056a21) list_single_a13_gene_pane_t1_ParamLimits

0xee9e,	// (0x00056a21) list_single_a13_gene_pane_t1

0xeeb5,	// (0x00056a38) list_single_ai3_gene_pane_g1

0xeebe,	// (0x00056a41) list_single_ai3_gene_pane_g2

0x0001,

0x02c8,	// (0x00047e4b) list_single_ai3_gene_pane_g

0xeec6,	// (0x00056a49) list_double_ai3_gene_pane_g1_ParamLimits

0xeec6,	// (0x00056a49) list_double_ai3_gene_pane_g1

0xeed2,	// (0x00056a55) list_double_ai3_gene_pane_t1_ParamLimits

0xeed2,	// (0x00056a55) list_double_ai3_gene_pane_t1

0xeeee,	// (0x00056a71) list_double_ai3_gene_pane_t2_ParamLimits

0xeeee,	// (0x00056a71) list_double_ai3_gene_pane_t2

0xef03,	// (0x00056a86) list_double_ai3_gene_pane_t3_ParamLimits

0xef03,	// (0x00056a86) list_double_ai3_gene_pane_t3

0x0002,

0x02cd,	// (0x00047e50) list_double_ai3_gene_pane_t_ParamLimits

0x02cd,	// (0x00047e50) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3c37,	// (0x0004b7ba) aid_size_min_col_2

0xa35c,	// (0x00051edf) aid_size_min_msg_ParamLimits

0xa35c,	// (0x00051edf) aid_size_min_msg

0xa1ba,	// (0x00051d3d) fep_vkb_top_text_pane_g2_ParamLimits

0xa1ba,	// (0x00051d3d) fep_vkb_top_text_pane_g2

0x0001,

0xfad9,	// (0x0005765c) fep_vkb_top_text_pane_g_ParamLimits

0xfad9,	// (0x0005765c) fep_vkb_top_text_pane_g

0x06c7,	// (0x0004824a) main_hc_apps_shell_pane

0xef20,	// (0x00056aa3) grid_hc_apps_pane_ParamLimits

0xef20,	// (0x00056aa3) grid_hc_apps_pane

0xef2f,	// (0x00056ab2) list_hc_apps_pane

0xef37,	// (0x00056aba) scroll_pane_cp37_ParamLimits

0xef37,	// (0x00056aba) scroll_pane_cp37

0xa3a4,	// (0x00051f27) cell_hc_apps_pane_ParamLimits

0xa3a4,	// (0x00051f27) cell_hc_apps_pane

0xa462,	// (0x00051fe5) cell_hc_apps_pane_g1_ParamLimits

0xa462,	// (0x00051fe5) cell_hc_apps_pane_g1

0xef43,	// (0x00056ac6) cell_hc_apps_pane_g2_ParamLimits

0xef43,	// (0x00056ac6) cell_hc_apps_pane_g2

0xef5f,	// (0x00056ae2) cell_hc_apps_pane_g3_ParamLimits

0xef5f,	// (0x00056ae2) cell_hc_apps_pane_g3

0x0002,

0xfbda,	// (0x0005775d) cell_hc_apps_pane_g_ParamLimits

0xfbda,	// (0x0005775d) cell_hc_apps_pane_g

0xa48f,	// (0x00052012) cell_hc_apps_pane_t1_ParamLimits

0xa48f,	// (0x00052012) cell_hc_apps_pane_t1

0x902e,	// (0x00050bb1) grid_highlight_pane_cp10_ParamLimits

0x902e,	// (0x00050bb1) grid_highlight_pane_cp10

0xa4cd,	// (0x00052050) list_single_hc_apps_pane_ParamLimits

0xa4cd,	// (0x00052050) list_single_hc_apps_pane

0xa4fe,	// (0x00052081) list_single_hc_apps_pane_g1

0x91fb,	// (0x00050d7e) list_single_hc_apps_pane_g2

0x0001,

0xfbe1,	// (0x00057764) list_single_hc_apps_pane_g

0x9214,	// (0x00050d97) list_single_hc_apps_pane_g2_copy1

0x8e45,	// (0x000509c8) list_single_hc_apps_pane_t1

0x8efb,	// (0x00050a7e) bg_set_opt_pane_cp_ParamLimits

0x091a,	// (0x0004849d) setting_slider_pane_t1_ParamLimits

0x0933,	// (0x000484b6) setting_slider_pane_t2_ParamLimits

0x094d,	// (0x000484d0) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x000570e7) setting_slider_pane_t_ParamLimits

0x0965,	// (0x000484e8) slider_set_pane_ParamLimits

0x123f,	// (0x00048dc2) control_pane_g5_ParamLimits

0x123f,	// (0x00048dc2) control_pane_g5

0xd2c8,	// (0x00054e4b) slider_set_pane_g1_ParamLimits

0x1bf6,	// (0x00049779) slider_set_pane_g2_ParamLimits

0x1c02,	// (0x00049785) slider_set_pane_g3_ParamLimits

0x1c16,	// (0x00049799) slider_set_pane_g4_ParamLimits

0x1c2e,	// (0x000497b1) slider_set_pane_g5_ParamLimits

0x1c02,	// (0x00049785) slider_set_pane_g6_ParamLimits

0x1c44,	// (0x000497c7) slider_set_pane_g7_ParamLimits

0xf965,	// (0x000574e8) slider_set_pane_g_ParamLimits

0xbbd5,	// (0x00053758) navi_icon_text_pane_ParamLimits

0x94e6,	// (0x00051069) aid_fill_nsta_2_ParamLimits

0x951d,	// (0x000510a0) aid_touch_tab_arrow_left_ParamLimits

0x9533,	// (0x000510b6) aid_touch_tab_arrow_right_ParamLimits

0x95ce,	// (0x00051151) clock_nsta_pane_ParamLimits

0xce41,	// (0x000549c4) navi_icon_pane_g1_ParamLimits

0xce4d,	// (0x000549d0) navi_text_pane_t1_ParamLimits

0xdd36,	// (0x000558b9) navi_icon_text_pane_g1_ParamLimits

0xdd42,	// (0x000558c5) navi_icon_text_pane_t1_ParamLimits

0xa4fe,	// (0x00052081) list_single_hc_apps_pane_g1_ParamLimits

0x91fb,	// (0x00050d7e) list_single_hc_apps_pane_g2_ParamLimits

0xfbe1,	// (0x00057764) list_single_hc_apps_pane_g_ParamLimits

0x9214,	// (0x00050d97) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8e45,	// (0x000509c8) list_single_hc_apps_pane_t1_ParamLimits

0x71e8,	// (0x0004ed6b) popup_toolbar2_fixed_window_ParamLimits

0x71e8,	// (0x0004ed6b) popup_toolbar2_fixed_window

0x7e18,	// (0x0004f99b) popup_toolbar2_float_window

0x8e7b,	// (0x000509fe) bg_popup_sub_pane_cp27

0xef81,	// (0x00056b04) grid_toolbar2_float_pane

0x8e7b,	// (0x000509fe) bg_popup_sub_pane_cp26

0xef81,	// (0x00056b04) grid_toolbar2_fixed_pane

0xa517,	// (0x0005209a) cell_toolbar2_fixed_pane_ParamLimits

0xa517,	// (0x0005209a) cell_toolbar2_fixed_pane

0xa532,	// (0x000520b5) cell_toolbar2_fixed_pane_g1

0x16fe,	// (0x00049281) toolbar2_fixed_button_pane

0xc197,	// (0x00053d1a) toolbar2_fixed_button_pane_g1

0xc1a7,	// (0x00053d2a) toolbar2_fixed_button_pane_g2

0xc19f,	// (0x00053d22) toolbar2_fixed_button_pane_g3

0xc1b7,	// (0x00053d3a) toolbar2_fixed_button_pane_g4

0xc1af,	// (0x00053d32) toolbar2_fixed_button_pane_g5

0xc1bf,	// (0x00053d42) toolbar2_fixed_button_pane_g6

0xc1c7,	// (0x00053d4a) toolbar2_fixed_button_pane_g7

0xc1d7,	// (0x00053d5a) toolbar2_fixed_button_pane_g8

0xc1cf,	// (0x00053d52) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x000573ea) toolbar2_fixed_button_pane_g

0xef89,	// (0x00056b0c) cell_toolbar2_float_pane_ParamLimits

0xef89,	// (0x00056b0c) cell_toolbar2_float_pane

0xef9d,	// (0x00056b20) cell_toolbar2_float_pane_g1

0x16fe,	// (0x00049281) toolbar2_fixed_button_pane_cp

0xa0a2,	// (0x00051c25) fep_vkb_accented_list_pane_ParamLimits

0xa0a2,	// (0x00051c25) fep_vkb_accented_list_pane

0x1fdd,	// (0x00049b60) bg_popup_fep_shadow_pane_g9

0xbd49,	// (0x000538cc) bg_popup_fep_shadow_pane_cp3

0xb1b9,	// (0x00052d3c) list_accented_list_pane

0xefa6,	// (0x00056b29) list_single_accented_list_pane_ParamLimits

0xefa6,	// (0x00056b29) list_single_accented_list_pane

0xbd49,	// (0x000538cc) list_highlight_pane_cp10

0xefb7,	// (0x00056b3a) list_single_accented_list_pane_t1

0x7d42,	// (0x0004f8c5) popup_slider_window_ParamLimits

0x7d42,	// (0x0004f8c5) popup_slider_window

0xedec,	// (0x0005696f) aid_indentation_list_msg

0xa62b,	// (0x000521ae) bg_popup_window_pane_cp19

0xf023,	// (0x00056ba6) popup_slider_window_g1

0xf03f,	// (0x00056bc2) popup_slider_window_g2

0xf05b,	// (0x00056bde) popup_slider_window_g3

0x0005,

0xfbe6,	// (0x00057769) popup_slider_window_g

0xf077,	// (0x00056bfa) popup_slider_window_t1

0xf0bd,	// (0x00056c40) small_volume_slider_vertical_pane

0xdfff,	// (0x00055b82) small_volume_slider_vertical_pane_g1

0xdfff,	// (0x00055b82) small_volume_slider_vertical_pane_g2

0xf0d9,	// (0x00056c5c) small_volume_slider_vertical_pane_g3

0x0002,

0x02de,	// (0x00047e61) small_volume_slider_vertical_pane_g

0x7156,	// (0x0004ecd9) area_side_right_pane_ParamLimits

0x7156,	// (0x0004ecd9) area_side_right_pane

0x803f,	// (0x0004fbc2) aid_size_side_button_ParamLimits

0x803f,	// (0x0004fbc2) aid_size_side_button

0x8058,	// (0x0004fbdb) grid_sctrl_middle_pane_ParamLimits

0x8058,	// (0x0004fbdb) grid_sctrl_middle_pane

0x21fa,	// (0x00049d7d) sctrl_sk_bottom_pane

0x220b,	// (0x00049d8e) sctrl_sk_top_pane

0x221d,	// (0x00049da0) aid_touch_sctrl_top

0x222a,	// (0x00049dad) bg_sctrl_sk_pane_ParamLimits

0x222a,	// (0x00049dad) bg_sctrl_sk_pane

0x2238,	// (0x00049dbb) sctrl_sk_top_pane_g1

0x2245,	// (0x00049dc8) sctrl_sk_top_pane_t1

0x221d,	// (0x00049da0) aid_touch_sctrl_bottom

0x222a,	// (0x00049dad) bg_sctrl_sk_pane_cp_ParamLimits

0x222a,	// (0x00049dad) bg_sctrl_sk_pane_cp

0x2260,	// (0x00049de3) sctrl_sk_bottom_pane_g1

0x2245,	// (0x00049dc8) sctrl_sk_bottom_pane_t1

0x8072,	// (0x0004fbf5) cell_sctrl_middle_pane_ParamLimits

0x8072,	// (0x0004fbf5) cell_sctrl_middle_pane

0x8083,	// (0x0004fc06) aid_touch_sctrl_middle_ParamLimits

0x8083,	// (0x0004fc06) aid_touch_sctrl_middle

0x8090,	// (0x0004fc13) bg_sctrl_middle_pane_ParamLimits

0x8090,	// (0x0004fc13) bg_sctrl_middle_pane

0x28d1,	// (0x0004a454) cell_sctrl_middle_pane_g1_ParamLimits

0x28d1,	// (0x0004a454) cell_sctrl_middle_pane_g1

0x809e,	// (0x0004fc21) cell_sctrl_middle_pane_g2_ParamLimits

0x809e,	// (0x0004fc21) cell_sctrl_middle_pane_g2

0x0001,

0xfbf8,	// (0x0005777b) cell_sctrl_middle_pane_g_ParamLimits

0xfbf8,	// (0x0005777b) cell_sctrl_middle_pane_g

0xc197,	// (0x00053d1a) bg_sctrl_middle_pane_g1

0xc19f,	// (0x00053d22) bg_sctrl_middle_pane_g2

0xc1a7,	// (0x00053d2a) bg_sctrl_middle_pane_g3

0xc1af,	// (0x00053d32) bg_sctrl_middle_pane_g4

0xc1b7,	// (0x00053d3a) bg_sctrl_middle_pane_g5

0xc1bf,	// (0x00053d42) bg_sctrl_middle_pane_g6

0xc1c7,	// (0x00053d4a) bg_sctrl_middle_pane_g7

0xc1cf,	// (0x00053d52) bg_sctrl_middle_pane_g8

0x0007,

0x02ef,	// (0x00047e72) bg_sctrl_middle_pane_g

0xc1d7,	// (0x00053d5a) bg_sctrl_middle_pane_g8_copy1

0xc197,	// (0x00053d1a) bg_sctrl_sk_pane_g1

0xc1a7,	// (0x00053d2a) bg_sctrl_sk_pane_g2

0xc19f,	// (0x00053d22) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x000573ea) bg_sctrl_sk_pane_g

0x9a17,	// (0x0005159a) aid_size_touch_scroll_bar

0xc1b7,	// (0x00053d3a) bg_sctrl_sk_pane_g4

0xc1af,	// (0x00053d32) bg_sctrl_sk_pane_g5

0xc1bf,	// (0x00053d42) bg_sctrl_sk_pane_g6

0xc1c7,	// (0x00053d4a) bg_sctrl_sk_pane_g7

0xc1d7,	// (0x00053d5a) bg_sctrl_sk_pane_g8

0xc1cf,	// (0x00053d52) bg_sctrl_sk_pane_g9

0x13e9,	// (0x00048f6c) popup_fep_china_hwr2_fs_candidate_window

0x7870,	// (0x0004f3f3) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7870,	// (0x0004f3f3) popup_fep_china_hwr2_fs_control_window

0x1ffd,	// (0x00049b80) sctrl_sk_top_pane_g2

0x0001,

0xfbf3,	// (0x00057776) sctrl_sk_top_pane_g

0xa6e3,	// (0x00052266) aid_fep_china_hwr2_fs_cell_ParamLimits

0xa6e3,	// (0x00052266) aid_fep_china_hwr2_fs_cell

0xa6f7,	// (0x0005227a) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xa6f7,	// (0x0005227a) bg_popup_fep_shadow_pane_cp4

0xa70e,	// (0x00052291) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xa70e,	// (0x00052291) bg_popup_fep_shadow_pane_cp5

0xa720,	// (0x000522a3) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xa720,	// (0x000522a3) popup_fep_china_hwr2_fs_control_bar_grid

0xa734,	// (0x000522b7) popup_fep_china_hwr2_fs_control_funtion_grid

0xf0e2,	// (0x00056c65) aid_fep_china_hwr2_fs_candi_cell

0x8e7b,	// (0x000509fe) bg_popup_fep_shadow_pane_cp6

0xf0ec,	// (0x00056c6f) popup_fep_china_hwr2_fs_candidate_grid

0xa73c,	// (0x000522bf) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xa73c,	// (0x000522bf) cell_fep_china_hwr2_fs_funtion_grid

0xdfff,	// (0x00055b82) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xf0f6,	// (0x00056c79) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xf0f6,	// (0x00056c79) cell_fep_china_hwr2_fs_funtion_grid_g1

0xf104,	// (0x00056c87) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xf104,	// (0x00056c87) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfbfd,	// (0x00057780) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfbfd,	// (0x00057780) cell_fep_china_hwr2_fs_funtion_grid_g

0xa754,	// (0x000522d7) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xa754,	// (0x000522d7) cell_fep_china_hwr2_fs_funtion_grid_t1

0xa769,	// (0x000522ec) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xa769,	// (0x000522ec) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfc02,	// (0x00057785) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfc02,	// (0x00057785) cell_fep_china_hwr2_fs_funtion_grid_t

0xf11a,	// (0x00056c9d) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xf122,	// (0x00056ca5) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xf12a,	// (0x00056cad) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0x0305,	// (0x00047e88) popup_fep_china_hwr2_fs_control_bar_grid_g

0xf132,	// (0x00056cb5) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xf132,	// (0x00056cb5) cell_fep_china_hwr2_fs_candidate_grid

0xf14b,	// (0x00056cce) popup_fep_china_hwr2_fs_candidate_grid_g20

0xf153,	// (0x00056cd6) popup_fep_china_hwr2_fs_candidate_grid_g21

0xdfff,	// (0x00055b82) cell_fep_china_hwr2_fs_candidate_grid_g1

0xdfff,	// (0x00055b82) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0x0148,	// (0x00047ccb) cell_fep_china_hwr2_fs_candidate_grid_g

0xf15b,	// (0x00056cde) cell_fep_china_hwr2_fs_candidate_grid_t1

0xbfe4,	// (0x00053b67) clock_nsta_pane_cp_24_ParamLimits

0xbfe4,	// (0x00053b67) clock_nsta_pane_cp_24

0xc04c,	// (0x00053bcf) indicator_nsta_pane_cp_24_ParamLimits

0xc04c,	// (0x00053bcf) indicator_nsta_pane_cp_24

0xcd3d,	// (0x000548c0) heading_pane_g1

0x0001,

0xf8cc,	// (0x0005744f) heading_pane_g

0xd409,	// (0x00054f8c) grid_sct_catagory_button_pane

0xce72,	// (0x000549f5) scroll_pane_cp5_ParamLimits

0xdd68,	// (0x000558eb) button_value_adjust_pane_cp5_ParamLimits

0xdd68,	// (0x000558eb) button_value_adjust_pane_cp5

0xde26,	// (0x000559a9) form2_midp_time_pane_ParamLimits

0xf169,	// (0x00056cec) cell_sct_catagory_button_pane_ParamLimits

0xf169,	// (0x00056cec) cell_sct_catagory_button_pane

0xdfc4,	// (0x00055b47) bg_button_pane_cp01_ParamLimits

0xdfc4,	// (0x00055b47) bg_button_pane_cp01

0xdfff,	// (0x00055b82) cell_sct_catagory_button_pane_g1

0x7dbb,	// (0x0004f93e) popup_tb_extension_window

0xa785,	// (0x00052308) aid_size_cell_ext_ParamLimits

0xa785,	// (0x00052308) aid_size_cell_ext

0x9367,	// (0x00050eea) bg_tb_trans_pane_cp1_ParamLimits

0x9367,	// (0x00050eea) bg_tb_trans_pane_cp1

0xa7ab,	// (0x0005232e) grid_tb_ext_pane_ParamLimits

0xa7ab,	// (0x0005232e) grid_tb_ext_pane

0xa7ed,	// (0x00052370) cell_tb_ext_pane_ParamLimits

0xa7ed,	// (0x00052370) cell_tb_ext_pane

0xa815,	// (0x00052398) cell_tb_ext_pane_g1_ParamLimits

0xa815,	// (0x00052398) cell_tb_ext_pane_g1

0xf17b,	// (0x00056cfe) cell_tb_ext_pane_t1

0x902e,	// (0x00050bb1) list_highlight_pane_cp11_ParamLimits

0x902e,	// (0x00050bb1) list_highlight_pane_cp11

0x71fd,	// (0x0004ed80) popup_uni_indicator_window_ParamLimits

0x71fd,	// (0x0004ed80) popup_uni_indicator_window

0xb0b2,	// (0x00052c35) bg_popup_sub_pane_cp14

0xf196,	// (0x00056d19) list_uniindi_pane

0xf1a2,	// (0x00056d25) uniindi_top_pane

0x902e,	// (0x00050bb1) bg_uniindi_top_pane

0xf1c1,	// (0x00056d44) uniindi_top_pane_g1

0xf1d7,	// (0x00056d5a) uniindi_top_pane_g2

0x0003,

0x030c,	// (0x00047e8f) uniindi_top_pane_g

0xf201,	// (0x00056d84) uniindi_top_pane_t1

0xf22b,	// (0x00056dae) list_single_uniindi_pane_ParamLimits

0xf22b,	// (0x00056dae) list_single_uniindi_pane

0xdfff,	// (0x00055b82) bg_uniindi_top_pane_g1

0xf23e,	// (0x00056dc1) list_single_uniindi_pane_g1

0xf251,	// (0x00056dd4) list_single_uniindi_pane_t1

0x06c7,	// (0x0004824a) control_bg_pane

0xf276,	// (0x00056df9) bg_sctrl_sk_pane_cp1

0xf27f,	// (0x00056e02) bg_sctrl_sk_pane_cp2

0xf288,	// (0x00056e0b) control_bg_pane_g1

0xf291,	// (0x00056e14) control_bg_pane_g2

0x0001,

0x0315,	// (0x00047e98) control_bg_pane_g

0xdc2c,	// (0x000557af) cell_indicator_nsta_pane_g1_ParamLimits

0x9f10,	// (0x00051a93) cell_indicator_nsta_pane_g2_ParamLimits

0xfa81,	// (0x00057604) cell_indicator_nsta_pane_g_ParamLimits

0x3a98,	// (0x0004b61b) form2_midp_time_pane_t1_ParamLimits

0x1d98,	// (0x0004991b) main_idle_act4_pane_ParamLimits

0x1d98,	// (0x0004991b) main_idle_act4_pane

0x7dbb,	// (0x0004f93e) popup_tb_extension_window_ParamLimits

0xa7d3,	// (0x00052356) tb_ext_find_pane_ParamLimits

0xa7d3,	// (0x00052356) tb_ext_find_pane

0xf29a,	// (0x00056e1d) ai_gene_pane_1_cp1

0xbddd,	// (0x00053960) ai_gene_pane_2_cp1

0xf2a2,	// (0x00056e25) list_single_idle_plugin_calendar_pane

0xf2ab,	// (0x00056e2e) list_single_idle_plugin_notification_pane

0xf2b4,	// (0x00056e37) list_single_idle_plugin_player_pane

0xa832,	// (0x000523b5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xa832,	// (0x000523b5) list_single_idle_plugin_shortcut_pane

0xa85a,	// (0x000523dd) main_idle_act4_pane_t1

0xa870,	// (0x000523f3) main_idle_act4_pane_t2

0x0001,

0xfc07,	// (0x0005778a) main_idle_act4_pane_t

0xa888,	// (0x0005240b) middle_sk_idle_act4_pane_ParamLimits

0xa888,	// (0x0005240b) middle_sk_idle_act4_pane

0xa8a4,	// (0x00052427) popup_clock_digital_analogue_window_cp2

0xa8cb,	// (0x0005244e) shortcut_wheel_idle_act4_pane_ParamLimits

0xa8cb,	// (0x0005244e) shortcut_wheel_idle_act4_pane

0xdfff,	// (0x00055b82) shortcut_wheel_idle_act4_pane_g1

0xdfff,	// (0x00055b82) shortcut_wheel_idle_act4_pane_g2

0xdfff,	// (0x00055b82) shortcut_wheel_idle_act4_pane_g3

0xdfff,	// (0x00055b82) shortcut_wheel_idle_act4_pane_g4

0xdfff,	// (0x00055b82) shortcut_wheel_idle_act4_pane_g5

0xf2bd,	// (0x00056e40) shortcut_wheel_idle_act4_pane_g6

0xf2c5,	// (0x00056e48) shortcut_wheel_idle_act4_pane_g7

0xf2cd,	// (0x00056e50) shortcut_wheel_idle_act4_pane_g8

0xf2d5,	// (0x00056e58) shortcut_wheel_idle_act4_pane_g9

0x0008,

0x031a,	// (0x00047e9d) shortcut_wheel_idle_act4_pane_g

0x9d42,	// (0x000518c5) middle_sk_idle_act4_pane_g1_ParamLimits

0x9d42,	// (0x000518c5) middle_sk_idle_act4_pane_g1

0xa948,	// (0x000524cb) middle_sk_idle_act4_pane_g2_ParamLimits

0xa948,	// (0x000524cb) middle_sk_idle_act4_pane_g2

0x0001,

0xfc1c,	// (0x0005779f) middle_sk_idle_act4_pane_g_ParamLimits

0xfc1c,	// (0x0005779f) middle_sk_idle_act4_pane_g

0xa960,	// (0x000524e3) middle_sk_idle_act4_pane_t1_ParamLimits

0xa960,	// (0x000524e3) middle_sk_idle_act4_pane_t1

0xa98f,	// (0x00052512) grid_ai_shortcut_pane_ParamLimits

0xa98f,	// (0x00052512) grid_ai_shortcut_pane

0xa9ac,	// (0x0005252f) list_highlight_pane_cp16_ParamLimits

0xa9ac,	// (0x0005252f) list_highlight_pane_cp16

0xa9b9,	// (0x0005253c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xa9b9,	// (0x0005253c) list_single_idle_plugin_shortcut_pane_g1

0xa9c5,	// (0x00052548) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xa9c5,	// (0x00052548) list_single_idle_plugin_shortcut_pane_g2

0xa9e1,	// (0x00052564) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xa9e1,	// (0x00052564) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfc21,	// (0x000577a4) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfc21,	// (0x000577a4) list_single_idle_plugin_shortcut_pane_g

0xa9f6,	// (0x00052579) cell_ai_shortcut_pane_ParamLimits

0xa9f6,	// (0x00052579) cell_ai_shortcut_pane

0xaa0c,	// (0x0005258f) cell_ai_shortcut_pane_g1_ParamLimits

0xaa0c,	// (0x0005258f) cell_ai_shortcut_pane_g1

0xf29a,	// (0x00056e1d) ai_gene_pane_1_cp2

0xf2dd,	// (0x00056e60) ai_gene_pane_2_cp2

0xf2e5,	// (0x00056e68) list_highlight_pane_cp15

0xf2ee,	// (0x00056e71) list_single_idle_plugin_calendar_pane_g1

0xf2e5,	// (0x00056e68) list_highlight_pane_cp17

0xf2f6,	// (0x00056e79) list_single_idle_plugin_calendar_pane_g1_copy1

0xf2fe,	// (0x00056e81) list_single_idle_plugin_player_pane_g1

0xd65e,	// (0x000551e1) list_single_idle_plugin_player_pane_g2

0x0001,

0xfc28,	// (0x000577ab) list_single_idle_plugin_player_pane_g

0xf306,	// (0x00056e89) list_single_idle_plugin_player_pane_t1

0xf314,	// (0x00056e97) list_single_idle_plugin_player_pane_t2

0xf322,	// (0x00056ea5) list_single_idle_plugin_player_pane_t3

0xf330,	// (0x00056eb3) list_single_idle_plugin_player_pane_t4

0x0003,

0x0337,	// (0x00047eba) list_single_idle_plugin_player_pane_t

0xf33e,	// (0x00056ec1) wait_bar_pane_cp15

0xf346,	// (0x00056ec9) grid_ai_notification_pane

0xd65e,	// (0x000551e1) list_single_idle_plugin_notification_pane_g1

0xaa2e,	// (0x000525b1) cell_ai_notification_pane_ParamLimits

0xaa2e,	// (0x000525b1) cell_ai_notification_pane

0xf34f,	// (0x00056ed2) cell_ai_notification_pane_g1

0xf357,	// (0x00056eda) cell_ai_notification_pane_t1

0xaa3b,	// (0x000525be) tb_ext_find_button_pane

0xaa43,	// (0x000525c6) tb_ext_find_pane_g1

0xaa4b,	// (0x000525ce) tb_ext_find_pane_t1

0xb837,	// (0x000533ba) tb_ext_find_button_pane_g1

0xf365,	// (0x00056ee8) tb_ext_find_button_pane_g2

0x0001,

0x0340,	// (0x00047ec3) tb_ext_find_button_pane_g

0xa85a,	// (0x000523dd) main_idle_act4_pane_t1_ParamLimits

0xa870,	// (0x000523f3) main_idle_act4_pane_t2_ParamLimits

0xfc07,	// (0x0005778a) main_idle_act4_pane_t_ParamLimits

0xa8a4,	// (0x00052427) popup_clock_digital_analogue_window_cp2_ParamLimits

0xa8bb,	// (0x0005243e) sat_plugin_idle_act4_pane_ParamLimits

0xa8bb,	// (0x0005243e) sat_plugin_idle_act4_pane

0xaa59,	// (0x000525dc) sat_plugin_idle_act4_pane_t1_ParamLimits

0xaa59,	// (0x000525dc) sat_plugin_idle_act4_pane_t1

0xaa71,	// (0x000525f4) sat_plugin_idle_act4_pane_t2_ParamLimits

0xaa71,	// (0x000525f4) sat_plugin_idle_act4_pane_t2

0xaa89,	// (0x0005260c) sat_plugin_idle_act4_pane_t3_ParamLimits

0xaa89,	// (0x0005260c) sat_plugin_idle_act4_pane_t3

0xaaa1,	// (0x00052624) sat_plugin_idle_act4_pane_t4_ParamLimits

0xaaa1,	// (0x00052624) sat_plugin_idle_act4_pane_t4

0x0003,

0xfc2d,	// (0x000577b0) sat_plugin_idle_act4_pane_t_ParamLimits

0xfc2d,	// (0x000577b0) sat_plugin_idle_act4_pane_t

0x078c,	// (0x0004830f) popup_battery_window_ParamLimits

0x078c,	// (0x0004830f) popup_battery_window

0x902e,	// (0x00050bb1) bg_popup_sub_pane_cp25_ParamLimits

0x902e,	// (0x00050bb1) bg_popup_sub_pane_cp25

0xf36e,	// (0x00056ef1) popup_battery_window_g1_ParamLimits

0xf36e,	// (0x00056ef1) popup_battery_window_g1

0xf37a,	// (0x00056efd) popup_battery_window_t1_ParamLimits

0xf37a,	// (0x00056efd) popup_battery_window_t1

0xf38c,	// (0x00056f0f) popup_battery_window_t2_ParamLimits

0xf38c,	// (0x00056f0f) popup_battery_window_t2

0x0001,

0x0345,	// (0x00047ec8) popup_battery_window_t_ParamLimits

0x0345,	// (0x00047ec8) popup_battery_window_t

0x8c03,	// (0x00050786) midp_canvas_pane_ParamLimits

0x8c60,	// (0x000507e3) midp_keypad_pane_ParamLimits

0x8c60,	// (0x000507e3) midp_keypad_pane

0xb20b,	// (0x00052d8e) main_midp_pane_ParamLimits

0xdcff,	// (0x00055882) signal_pane_g2_cp_ParamLimits

0xaab9,	// (0x0005263c) aid_size_cell_midp_keypad_ParamLimits

0xaab9,	// (0x0005263c) aid_size_cell_midp_keypad

0xaad7,	// (0x0005265a) midp_keyp_game_grid_pane_ParamLimits

0xaad7,	// (0x0005265a) midp_keyp_game_grid_pane

0xaafe,	// (0x00052681) midp_keyp_rocker_pane_ParamLimits

0xaafe,	// (0x00052681) midp_keyp_rocker_pane

0xab47,	// (0x000526ca) midp_keyp_sk_left_pane_ParamLimits

0xab47,	// (0x000526ca) midp_keyp_sk_left_pane

0xab99,	// (0x0005271c) midp_keyp_sk_right_pane_ParamLimits

0xab99,	// (0x0005271c) midp_keyp_sk_right_pane

0x8e7b,	// (0x000509fe) bg_button_pane_cp03

0xabeb,	// (0x0005276e) midp_keyp_sk_left_pane_g1

0x8e7b,	// (0x000509fe) bg_button_pane_cp04

0xabeb,	// (0x0005276e) midp_keyp_sk_right_pane_g1

0xdfff,	// (0x00055b82) midp_keyp_rocker_pane_g1

0xabf4,	// (0x00052777) keyp_game_cell_pane_ParamLimits

0xabf4,	// (0x00052777) keyp_game_cell_pane

0x8e7b,	// (0x000509fe) bg_button_pane_cp02

0xac18,	// (0x0005279b) keyp_game_cell_pane_g1

0x7198,	// (0x0004ed1b) popup_fep_vkb2_window_ParamLimits

0x7198,	// (0x0004ed1b) popup_fep_vkb2_window

0x80aa,	// (0x0004fc2d) aid_size_cell_vkb2_ParamLimits

0x80aa,	// (0x0004fc2d) aid_size_cell_vkb2

0x80e0,	// (0x0004fc63) popup_fep_vkb2_window_g1_ParamLimits

0x80e0,	// (0x0004fc63) popup_fep_vkb2_window_g1

0x8130,	// (0x0004fcb3) vkb2_area_bottom_pane_ParamLimits

0x8130,	// (0x0004fcb3) vkb2_area_bottom_pane

0x8184,	// (0x0004fd07) vkb2_area_keypad_pane_ParamLimits

0x8184,	// (0x0004fd07) vkb2_area_keypad_pane

0x81cc,	// (0x0004fd4f) vkb2_area_top_pane_ParamLimits

0x81cc,	// (0x0004fd4f) vkb2_area_top_pane

0x8252,	// (0x0004fdd5) vkb2_top_entry_pane_ParamLimits

0x8252,	// (0x0004fdd5) vkb2_top_entry_pane

0x827f,	// (0x0004fe02) vkb2_top_grid_left_pane_ParamLimits

0x827f,	// (0x0004fe02) vkb2_top_grid_left_pane

0x829f,	// (0x0004fe22) vkb2_top_grid_right_pane_ParamLimits

0x829f,	// (0x0004fe22) vkb2_top_grid_right_pane

0x24cc,	// (0x0004a04f) vkb2_cell_keypad_pane_ParamLimits

0x24cc,	// (0x0004a04f) vkb2_cell_keypad_pane

0x82e5,	// (0x0004fe68) vkb2_area_bottom_grid_pane_ParamLimits

0x82e5,	// (0x0004fe68) vkb2_area_bottom_grid_pane

0x830f,	// (0x0004fe92) vkb2_area_bottom_pane_g1_ParamLimits

0x830f,	// (0x0004fe92) vkb2_area_bottom_pane_g1

0x8335,	// (0x0004feb8) vkb2_area_bottom_pane_g2_ParamLimits

0x8335,	// (0x0004feb8) vkb2_area_bottom_pane_g2

0x8366,	// (0x0004fee9) vkb2_area_bottom_pane_g3_ParamLimits

0x8366,	// (0x0004fee9) vkb2_area_bottom_pane_g3

0x0002,

0xfc36,	// (0x000577b9) vkb2_area_bottom_pane_g_ParamLimits

0xfc36,	// (0x000577b9) vkb2_area_bottom_pane_g

0x2676,	// (0x0004a1f9) vkb2_top_cell_left_pane_ParamLimits

0x2676,	// (0x0004a1f9) vkb2_top_cell_left_pane

0xac21,	// (0x000527a4) vkb2_top_entry_pane_g1_ParamLimits

0xac21,	// (0x000527a4) vkb2_top_entry_pane_g1

0xac2f,	// (0x000527b2) vkb2_top_entry_pane_t1_ParamLimits

0xac2f,	// (0x000527b2) vkb2_top_entry_pane_t1

0xf3b1,	// (0x00056f34) vkb2_top_entry_pane_t2_ParamLimits

0xf3b1,	// (0x00056f34) vkb2_top_entry_pane_t2

0xf3e3,	// (0x00056f66) vkb2_top_entry_pane_t3_ParamLimits

0xf3e3,	// (0x00056f66) vkb2_top_entry_pane_t3

0x0002,

0x0351,	// (0x00047ed4) vkb2_top_entry_pane_t_ParamLimits

0x0351,	// (0x00047ed4) vkb2_top_entry_pane_t

0x83d0,	// (0x0004ff53) vkb2_top_grid_right_pane_g1_ParamLimits

0x83d0,	// (0x0004ff53) vkb2_top_grid_right_pane_g1

0x26d9,	// (0x0004a25c) vkb2_top_grid_right_pane_g2_ParamLimits

0x26d9,	// (0x0004a25c) vkb2_top_grid_right_pane_g2

0x26f1,	// (0x0004a274) vkb2_top_grid_right_pane_g3_ParamLimits

0x26f1,	// (0x0004a274) vkb2_top_grid_right_pane_g3

0x83e6,	// (0x0004ff69) vkb2_top_grid_right_pane_g4_ParamLimits

0x83e6,	// (0x0004ff69) vkb2_top_grid_right_pane_g4

0x0003,

0xfc3d,	// (0x000577c0) vkb2_top_grid_right_pane_g_ParamLimits

0xfc3d,	// (0x000577c0) vkb2_top_grid_right_pane_g

0x271f,	// (0x0004a2a2) vkb2_top_cell_left_pane_g1

0x2736,	// (0x0004a2b9) vkb2_cell_keypad_pane_g1_ParamLimits

0x2736,	// (0x0004a2b9) vkb2_cell_keypad_pane_g1

0xf407,	// (0x00056f8a) vkb2_cell_keypad_pane_t1_ParamLimits

0xf407,	// (0x00056f8a) vkb2_cell_keypad_pane_t1

0x2744,	// (0x0004a2c7) vkb2_cell_bottom_grid_pane_ParamLimits

0x2744,	// (0x0004a2c7) vkb2_cell_bottom_grid_pane

0x277d,	// (0x0004a300) vkb2_cell_bottom_grid_pane_g1

0xa8ec,	// (0x0005246f) aid_call2_pane_cp02

0xa8f4,	// (0x00052477) aid_call_pane_cp02

0xa8fc,	// (0x0005247f) clock_digital_number_pane_cp10

0xa904,	// (0x00052487) clock_digital_number_pane_cp11

0xa90c,	// (0x0005248f) clock_digital_number_pane_cp12

0xa914,	// (0x00052497) clock_digital_number_pane_cp13

0xa91c,	// (0x0005249f) clock_digital_separator_pane_cp10

0xb837,	// (0x000533ba) popup_clock_digital_analogue_window_cp2_g1

0xb837,	// (0x000533ba) popup_clock_digital_analogue_window_cp2_g2

0xa924,	// (0x000524a7) popup_clock_digital_analogue_window_cp2_g3

0xb837,	// (0x000533ba) popup_clock_digital_analogue_window_cp2_g4

0xa924,	// (0x000524a7) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfc0c,	// (0x0005778f) popup_clock_digital_analogue_window_cp2_g

0xa92c,	// (0x000524af) popup_clock_digital_analogue_window_cp2_t1

0xa93a,	// (0x000524bd) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfc17,	// (0x0005779a) popup_clock_digital_analogue_window_cp2_t

0xdfff,	// (0x00055b82) clock_digital_number_pane_cp10_g1

0xdfff,	// (0x00055b82) clock_digital_number_pane_cp10_g2

0x0001,

0x0148,	// (0x00047ccb) clock_digital_number_pane_cp10_g

0xdfff,	// (0x00055b82) clock_digital_separator_pane_cp10_g1

0xdfff,	// (0x00055b82) clock_digital_separator_pane_cp10_g2

0x0001,

0x0148,	// (0x00047ccb) clock_digital_separator_pane_cp10_g

0xf1e3,	// (0x00056d66) uniindi_top_pane_g3

0xf1f4,	// (0x00056d77) uniindi_top_pane_g4

0x2557,	// (0x0004a0da) vkb2_row_keypad_pane_ParamLimits

0x2557,	// (0x0004a0da) vkb2_row_keypad_pane

0x279d,	// (0x0004a320) vkb2_cell_t_keypad_pane_ParamLimits

0x279d,	// (0x0004a320) vkb2_cell_t_keypad_pane

0x27ad,	// (0x0004a330) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x27ad,	// (0x0004a330) vkb2_cell_t_keypad_pane_cp08

0x27c0,	// (0x0004a343) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x27c0,	// (0x0004a343) vkb2_cell_t_keypad_pane_cp09

0x27d4,	// (0x0004a357) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x27d4,	// (0x0004a357) vkb2_cell_t_keypad_pane_cp01

0x27e5,	// (0x0004a368) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x27e5,	// (0x0004a368) vkb2_cell_t_keypad_pane_cp02

0x27f6,	// (0x0004a379) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x27f6,	// (0x0004a379) vkb2_cell_t_keypad_pane_cp03

0x2807,	// (0x0004a38a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2807,	// (0x0004a38a) vkb2_cell_t_keypad_pane_cp04

0x2818,	// (0x0004a39b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2818,	// (0x0004a39b) vkb2_cell_t_keypad_pane_cp05

0x2829,	// (0x0004a3ac) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2829,	// (0x0004a3ac) vkb2_cell_t_keypad_pane_cp06

0x283a,	// (0x0004a3bd) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x283a,	// (0x0004a3bd) vkb2_cell_t_keypad_pane_cp07

0x284b,	// (0x0004a3ce) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x284b,	// (0x0004a3ce) vkb2_cell_t_keypad_pane_cp10

0x1ffd,	// (0x00049b80) vkb2_cell_t_keypad_pane_g1

0xf43f,	// (0x00056fc2) vkb2_cell_t_keypad_pane_t1

0x06c7,	// (0x0004824a) popup_grid_graphic2_window

0xac68,	// (0x000527eb) aid_size_cell_graphic2_ParamLimits

0xac68,	// (0x000527eb) aid_size_cell_graphic2

0xacb3,	// (0x00052836) bg_popup_window_pane_cp21_ParamLimits

0xacb3,	// (0x00052836) bg_popup_window_pane_cp21

0xacc1,	// (0x00052844) graphic2_pages_pane_ParamLimits

0xacc1,	// (0x00052844) graphic2_pages_pane

0xad17,	// (0x0005289a) grid_graphic2_control_pane_ParamLimits

0xad17,	// (0x0005289a) grid_graphic2_control_pane

0xad5f,	// (0x000528e2) grid_graphic2_pane_ParamLimits

0xad5f,	// (0x000528e2) grid_graphic2_pane

0xade6,	// (0x00052969) cell_graphic2_pane

0x06c7,	// (0x0004824a) main_comp_mode_pane

0xee5a,	// (0x000569dd) list_ai3_gene_pane_ParamLimits

0xa62b,	// (0x000521ae) bg_popup_window_pane_cp19_ParamLimits

0xefc5,	// (0x00056b48) bg_touch_area_indi_pane_ParamLimits

0xefc5,	// (0x00056b48) bg_touch_area_indi_pane

0xefdb,	// (0x00056b5e) bg_touch_area_indi_pane_cp01_ParamLimits

0xefdb,	// (0x00056b5e) bg_touch_area_indi_pane_cp01

0xeff1,	// (0x00056b74) bg_touch_area_indi_pane_cp02_ParamLimits

0xeff1,	// (0x00056b74) bg_touch_area_indi_pane_cp02

0xf009,	// (0x00056b8c) bg_touch_area_indi_pane_cp03_ParamLimits

0xf009,	// (0x00056b8c) bg_touch_area_indi_pane_cp03

0xf023,	// (0x00056ba6) popup_slider_window_g1_ParamLimits

0xf03f,	// (0x00056bc2) popup_slider_window_g2_ParamLimits

0xf05b,	// (0x00056bde) popup_slider_window_g3_ParamLimits

0xfbe6,	// (0x00057769) popup_slider_window_g_ParamLimits

0xf077,	// (0x00056bfa) popup_slider_window_t1_ParamLimits

0xf0bd,	// (0x00056c40) small_volume_slider_vertical_pane_ParamLimits

0xade6,	// (0x00052969) cell_graphic2_pane_ParamLimits

0xae43,	// (0x000529c6) bg_button_pane_cp10_ParamLimits

0xae43,	// (0x000529c6) bg_button_pane_cp10

0xae56,	// (0x000529d9) bg_button_pane_cp11_ParamLimits

0xae56,	// (0x000529d9) bg_button_pane_cp11

0xae69,	// (0x000529ec) graphic2_pages_pane_g1_ParamLimits

0xae69,	// (0x000529ec) graphic2_pages_pane_g1

0xae84,	// (0x00052a07) graphic2_pages_pane_g2_ParamLimits

0xae84,	// (0x00052a07) graphic2_pages_pane_g2

0x0001,

0xfc4b,	// (0x000577ce) graphic2_pages_pane_g_ParamLimits

0xfc4b,	// (0x000577ce) graphic2_pages_pane_g

0xae9c,	// (0x00052a1f) graphic2_pages_pane_t1_ParamLimits

0xae9c,	// (0x00052a1f) graphic2_pages_pane_t1

0xaeb4,	// (0x00052a37) cell_graphic2_control_pane_ParamLimits

0xaeb4,	// (0x00052a37) cell_graphic2_control_pane

0xaee6,	// (0x00052a69) cell_graphic2_pane_g1_ParamLimits

0xaee6,	// (0x00052a69) cell_graphic2_pane_g1

0x9d50,	// (0x000518d3) cell_graphic2_pane_g2_ParamLimits

0x9d50,	// (0x000518d3) cell_graphic2_pane_g2

0xaca6,	// (0x00052829) cell_graphic2_pane_g3_ParamLimits

0xaca6,	// (0x00052829) cell_graphic2_pane_g3

0x9d5d,	// (0x000518e0) cell_graphic2_pane_g4_ParamLimits

0x9d5d,	// (0x000518e0) cell_graphic2_pane_g4

0xaef3,	// (0x00052a76) cell_graphic2_pane_g5_ParamLimits

0xaef3,	// (0x00052a76) cell_graphic2_pane_g5

0x0004,

0xfc50,	// (0x000577d3) cell_graphic2_pane_g_ParamLimits

0xfc50,	// (0x000577d3) cell_graphic2_pane_g

0xaf13,	// (0x00052a96) cell_graphic2_pane_t1_ParamLimits

0xaf13,	// (0x00052a96) cell_graphic2_pane_t1

0xcd31,	// (0x000548b4) grid_highlight_pane_cp11_ParamLimits

0xcd31,	// (0x000548b4) grid_highlight_pane_cp11

0x902e,	// (0x00050bb1) bg_button_pane_cp05

0xaf47,	// (0x00052aca) cell_graphic2_control_pane_g1

0xdfff,	// (0x00055b82) bg_touch_area_indi_pane_g1

0xf451,	// (0x00056fd4) aid_cmod_rocker_key_size

0xf45b,	// (0x00056fde) aid_cmode_itu_key_size

0xf465,	// (0x00056fe8) main_cmode_video_pane

0xf46f,	// (0x00056ff2) main_comp_mode_itu_pane

0xf47b,	// (0x00056ffe) main_comp_mode_rocker_pane

0xf487,	// (0x0005700a) cell_cmode_rocker_pane_ParamLimits

0xf487,	// (0x0005700a) cell_cmode_rocker_pane

0xf499,	// (0x0005701c) cell_cmode_itu_pane_ParamLimits

0xf499,	// (0x0005701c) cell_cmode_itu_pane

0xb0b2,	// (0x00052c35) bg_button_pane_cp06_ParamLimits

0xb0b2,	// (0x00052c35) bg_button_pane_cp06

0xe190,	// (0x00055d13) cell_cmode_rocker_pane_g1_ParamLimits

0xe190,	// (0x00055d13) cell_cmode_rocker_pane_g1

0xf0f6,	// (0x00056c79) cell_cmode_rocker_pane_g2_ParamLimits

0xf0f6,	// (0x00056c79) cell_cmode_rocker_pane_g2

0x0001,

0xfc60,	// (0x000577e3) cell_cmode_rocker_pane_g_ParamLimits

0xfc60,	// (0x000577e3) cell_cmode_rocker_pane_g

0x8e7b,	// (0x000509fe) bg_button_pane_cp07

0xf4ae,	// (0x00057031) cell_cmode_itu_pane_g1

0xf4b7,	// (0x0005703a) cell_cmode_itu_pane_t1

0xf4c5,	// (0x00057048) cell_cmode_itu_pane_t2

0x0001,

0xfc65,	// (0x000577e8) cell_cmode_itu_pane_t

0xf266,	// (0x00056de9) aid_touch_ctrl_left

0xf26e,	// (0x00056df1) aid_touch_ctrl_right

0x8e7b,	// (0x000509fe) compa_mode_pane

0xaf6b,	// (0x00052aee) aid_cmod_rocker_key_size_cp

0xaf75,	// (0x00052af8) aid_cmode_itu_key_size_cp

0xf4d3,	// (0x00057056) compa_mode_pane_g1

0xf4db,	// (0x0005705e) compa_mode_pane_g2

0xf4e3,	// (0x00057066) compa_mode_pane_g3

0x0002,

0xfc6a,	// (0x000577ed) compa_mode_pane_g

0xaf7f,	// (0x00052b02) main_comp_mode_itu_pane_cp

0xaf87,	// (0x00052b0a) main_comp_mode_rocker_pane_cp

0xaf8f,	// (0x00052b12) cell_cmode_itu_pane_cp_ParamLimits

0xaf8f,	// (0x00052b12) cell_cmode_itu_pane_cp

0xafa4,	// (0x00052b27) cell_cmode_rocker_pane_cp_ParamLimits

0xafa4,	// (0x00052b27) cell_cmode_rocker_pane_cp

0xb0b2,	// (0x00052c35) bg_button_pane_cp06_cp_ParamLimits

0xb0b2,	// (0x00052c35) bg_button_pane_cp06_cp

0xe190,	// (0x00055d13) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xe190,	// (0x00055d13) cell_cmode_rocker_pane_g1_cp

0xdfff,	// (0x00055b82) cell_cmode_rocker_pane_g2_cp

0x8e7b,	// (0x000509fe) bg_button_pane_cp07_cp

0xafb6,	// (0x00052b39) cell_cmode_itu_pane_g1_cp

0xafbf,	// (0x00052b42) cell_cmode_itu_pane_t1_cp

0xafbf,	// (0x00052b42) cell_cmode_itu_pane_t2_cp

0x9d6a,	// (0x000518ed) settings_code_pane_cp2

0x8efb,	// (0x00050a7e) bg_popup_window_pane_cp3_ParamLimits

0x92a6,	// (0x00050e29) heading_pane_cp3_ParamLimits

0x92b2,	// (0x00050e35) listscroll_popup_graphic_pane_ParamLimits

0x1da6,	// (0x00049929) fep_hwr_aid_pane_ParamLimits

0x221d,	// (0x00049da0) aid_touch_sctrl_top_ParamLimits

0x2238,	// (0x00049dbb) sctrl_sk_top_pane_g1_ParamLimits

0x1ffd,	// (0x00049b80) sctrl_sk_top_pane_g2_ParamLimits

0xfbf3,	// (0x00057776) sctrl_sk_top_pane_g_ParamLimits

0x2245,	// (0x00049dc8) sctrl_sk_top_pane_t1_ParamLimits

0x221d,	// (0x00049da0) aid_touch_sctrl_bottom_ParamLimits

0x2245,	// (0x00049dc8) sctrl_sk_bottom_pane_t1_ParamLimits

0xf1af,	// (0x00056d32) aid_area_touch_clock

0x8214,	// (0x0004fd97) aid_vkb2_area_top_pane_cell_ParamLimits

0x8214,	// (0x0004fd97) aid_vkb2_area_top_pane_cell

0x82bf,	// (0x0004fe42) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x82bf,	// (0x0004fe42) aid_vkb2_area_bottom_pane_cell

0xf3a9,	// (0x00056f2c) popup_char_count_window

0xf4eb,	// (0x0005706e) popup_char_count_window_g1

0xf4f4,	// (0x00057077) popup_char_count_window_g2

0xf4fd,	// (0x00057080) popup_char_count_window_g3

0x0002,

0xfc71,	// (0x000577f4) popup_char_count_window_g

0xf506,	// (0x00057089) popup_char_count_window_t1

0x22f4,	// (0x00049e77) popup_fep_char_preview_window_ParamLimits

0x22f4,	// (0x00049e77) popup_fep_char_preview_window

0x8234,	// (0x0004fdb7) vkb2_top_candi_pane_ParamLimits

0x8234,	// (0x0004fdb7) vkb2_top_candi_pane

0xafcd,	// (0x00052b50) cell_vkb2_top_candi_pane_ParamLimits

0xafcd,	// (0x00052b50) cell_vkb2_top_candi_pane

0x2860,	// (0x0004a3e3) bg_popup_fep_char_preview_window_ParamLimits

0x2860,	// (0x0004a3e3) bg_popup_fep_char_preview_window

0x286e,	// (0x0004a3f1) popup_fep_char_preview_window_t1_ParamLimits

0x286e,	// (0x0004a3f1) popup_fep_char_preview_window_t1

0xf514,	// (0x00057097) bg_popup_fep_char_preview_window_g1

0xf51c,	// (0x0005709f) bg_popup_fep_char_preview_window_g2

0xf524,	// (0x000570a7) bg_popup_fep_char_preview_window_g3

0xf52c,	// (0x000570af) bg_popup_fep_char_preview_window_g4

0xf534,	// (0x000570b7) bg_popup_fep_char_preview_window_g5

0x28a8,	// (0x0004a42b) bg_popup_fep_char_preview_window_g6

0xf53c,	// (0x000570bf) bg_popup_fep_char_preview_window_g7

0xf544,	// (0x000570c7) bg_popup_fep_char_preview_window_g8

0xf54c,	// (0x000570cf) bg_popup_fep_char_preview_window_g9

0x0008,

0xfc78,	// (0x000577fb) bg_popup_fep_char_preview_window_g

0x1ffd,	// (0x00049b80) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1ffd,	// (0x00049b80) cell_vkb2_top_candi_pane_g1

0x200b,	// (0x00049b8e) cell_vkb2_top_candi_pane_g2_ParamLimits

0x200b,	// (0x00049b8e) cell_vkb2_top_candi_pane_g2

0xf41e,	// (0x00056fa1) cell_vkb2_top_candi_pane_g3_ParamLimits

0xf41e,	// (0x00056fa1) cell_vkb2_top_candi_pane_g3

0x28b0,	// (0x0004a433) cell_vkb2_top_candi_pane_g4_ParamLimits

0x28b0,	// (0x0004a433) cell_vkb2_top_candi_pane_g4

0xe4c4,	// (0x00056047) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe4c4,	// (0x00056047) cell_vkb2_top_candi_pane_g5

0x28d1,	// (0x0004a454) cell_vkb2_top_candi_pane_g6_ParamLimits

0x28d1,	// (0x0004a454) cell_vkb2_top_candi_pane_g6

0x0005,

0xfc8b,	// (0x0005780e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfc8b,	// (0x0005780e) cell_vkb2_top_candi_pane_g

0x28df,	// (0x0004a462) cell_vkb2_top_candi_pane_t1

0x1be2,	// (0x00049765) aid_size_touch_slider_mark_ParamLimits

0x1be2,	// (0x00049765) aid_size_touch_slider_mark

0xacfd,	// (0x00052880) grid_graphic2_catg_pane_ParamLimits

0xacfd,	// (0x00052880) grid_graphic2_catg_pane

0xadb9,	// (0x0005293c) popup_grid_graphic2_window_t1_ParamLimits

0xadb9,	// (0x0005293c) popup_grid_graphic2_window_t1

0xadcf,	// (0x00052952) popup_grid_graphic2_window_t2_ParamLimits

0xadcf,	// (0x00052952) popup_grid_graphic2_window_t2

0x0001,

0xfc46,	// (0x000577c9) popup_grid_graphic2_window_t_ParamLimits

0xfc46,	// (0x000577c9) popup_grid_graphic2_window_t

0x902e,	// (0x00050bb1) bg_button_pane_cp05_ParamLimits

0xaf47,	// (0x00052aca) cell_graphic2_control_pane_g1_ParamLimits

0xb033,	// (0x00052bb6) cell_graphic2_catg_pane_ParamLimits

0xb033,	// (0x00052bb6) cell_graphic2_catg_pane

0x8e7b,	// (0x000509fe) bg_button_pane_cp12

0xb045,	// (0x00052bc8) cell_graphic2_catg_pane_g1

0xf17b,	// (0x00056cfe) cell_tb_ext_pane_t1_ParamLimits

0x2696,	// (0x0004a219) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2696,	// (0x0004a219) vkb2_top_cell_right_narrow_pane

0x26ae,	// (0x0004a231) vkb2_top_cell_right_wide_pane_ParamLimits

0x26ae,	// (0x0004a231) vkb2_top_cell_right_wide_pane

0x1d98,	// (0x0004991b) bg_vkb2_func_pane_ParamLimits

0x1d98,	// (0x0004991b) bg_vkb2_func_pane

0x271f,	// (0x0004a2a2) vkb2_top_cell_left_pane_g1_ParamLimits

0x1d98,	// (0x0004991b) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1d98,	// (0x0004991b) bg_vkb2_fuc_pane_cp03

0x277d,	// (0x0004a300) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xc19f,	// (0x00053d22) bg_vkb2_func_pane_g1

0xc1a7,	// (0x00053d2a) bg_vkb2_func_pane_g2

0xc1b7,	// (0x00053d3a) bg_vkb2_func_pane_g3

0xc1af,	// (0x00053d32) bg_vkb2_func_pane_g4

0xc1bf,	// (0x00053d42) bg_vkb2_func_pane_g5

0xc1c7,	// (0x00053d4a) bg_vkb2_func_pane_g6

0xc1cf,	// (0x00053d52) bg_vkb2_func_pane_g7

0xc1d7,	// (0x00053d5a) bg_vkb2_func_pane_g8

0xc197,	// (0x00053d1a) bg_vkb2_func_pane_g9

0x0008,

0x03a4,	// (0x00047f27) bg_vkb2_func_pane_g

0x1d98,	// (0x0004991b) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1d98,	// (0x0004991b) bg_vkb2_fuc_pane_cp01

0x271f,	// (0x0004a2a2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x271f,	// (0x0004a2a2) vkb2_top_cell_right_wide_pane_g1

0x1d98,	// (0x0004991b) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1d98,	// (0x0004991b) bg_vkb2_fuc_pane_cp02

0x277d,	// (0x0004a300) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x277d,	// (0x0004a300) vkb2_top_cell_right_narrow_pane_g1

0xa565,	// (0x000520e8) aid_touch_area_decrease_ParamLimits

0xa565,	// (0x000520e8) aid_touch_area_decrease

0xa59f,	// (0x00052122) aid_touch_area_increase_ParamLimits

0xa59f,	// (0x00052122) aid_touch_area_increase

0xa5c7,	// (0x0005214a) aid_touch_area_mute_ParamLimits

0xa5c7,	// (0x0005214a) aid_touch_area_mute

0xa5f7,	// (0x0005217a) aid_touch_area_slider_ParamLimits

0xa5f7,	// (0x0005217a) aid_touch_area_slider

0xa637,	// (0x000521ba) popup_slider_window_g4_ParamLimits

0xa637,	// (0x000521ba) popup_slider_window_g4

0xa65f,	// (0x000521e2) popup_slider_window_g5_ParamLimits

0xa65f,	// (0x000521e2) popup_slider_window_g5

0xa693,	// (0x00052216) popup_slider_window_g6_ParamLimits

0xa693,	// (0x00052216) popup_slider_window_g6

0xf0a5,	// (0x00056c28) popup_slider_window_t2_ParamLimits

0xf0a5,	// (0x00056c28) popup_slider_window_t2

0x0001,

0x02d9,	// (0x00047e5c) popup_slider_window_t_ParamLimits

0x02d9,	// (0x00047e5c) popup_slider_window_t

0xa6af,	// (0x00052232) slider_pane_ParamLimits

0xa6af,	// (0x00052232) slider_pane

0x5a63,	// (0x0004d5e6) slider_pane_g1_ParamLimits

0x5a63,	// (0x0004d5e6) slider_pane_g1

0x5a77,	// (0x0004d5fa) slider_pane_g2_ParamLimits

0x5a77,	// (0x0004d5fa) slider_pane_g2

0x5a8d,	// (0x0004d610) slider_pane_g3_ParamLimits

0x5a8d,	// (0x0004d610) slider_pane_g3

0x0003,

0xfc98,	// (0x0005781b) slider_pane_g_ParamLimits

0xfc98,	// (0x0005781b) slider_pane_g

0x7e03,	// (0x0004f986) popup_tb_float_extension_window_ParamLimits

0x7e03,	// (0x0004f986) popup_tb_float_extension_window

0x5ab9,	// (0x0004d63c) aid_size_cell_tb_float_ext

0x8e7b,	// (0x000509fe) bg_popup_sub_window_cp28

0x5ac5,	// (0x0004d648) grid_tb_float_ext_pane

0x5acf,	// (0x0004d652) cell_tb_float_ext_pane_ParamLimits

0x5acf,	// (0x0004d652) cell_tb_float_ext_pane

0x5ae9,	// (0x0004d66c) cell_tb_float_ext_pane_g1

0x5af2,	// (0x0004d675) grid_highlight_pane_cp12

0x801d,	// (0x0004fba0) cell_last_hwr_side_pane_ParamLimits

0x801d,	// (0x0004fba0) cell_last_hwr_side_pane

0xdfff,	// (0x00055b82) cell_last_hwr_side_pane_g1

0x5afb,	// (0x0004d67e) cell_last_hwr_side_pane_g2

0x0001,

0xfca1,	// (0x00057824) cell_last_hwr_side_pane_g

0x839b,	// (0x0004ff1e) vkb2_area_bottom_space_btn_pane_ParamLimits

0x839b,	// (0x0004ff1e) vkb2_area_bottom_space_btn_pane

0x1ffd,	// (0x00049b80) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xf43f,	// (0x00056fc2) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x28df,	// (0x0004a462) cell_vkb2_top_candi_pane_t1_ParamLimits

0x28fe,	// (0x0004a481) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x28fe,	// (0x0004a481) vkb2_area_bottom_space_btn_pane_g1

0x2938,	// (0x0004a4bb) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2938,	// (0x0004a4bb) vkb2_area_bottom_space_btn_pane_g2

0x296e,	// (0x0004a4f1) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x296e,	// (0x0004a4f1) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfca6,	// (0x00057829) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfca6,	// (0x00057829) vkb2_area_bottom_space_btn_pane_g

0x1e5b,	// (0x000499de) cel_fep_hwr_func_pane_ParamLimits

0x1e5b,	// (0x000499de) cel_fep_hwr_func_pane

0x7ff2,	// (0x0004fb75) cell_hwr_side_button_pane_ParamLimits

0x7ff2,	// (0x0004fb75) cell_hwr_side_button_pane

0xf1af,	// (0x00056d32) aid_area_touch_clock_ParamLimits

0x902e,	// (0x00050bb1) bg_uniindi_top_pane_ParamLimits

0xf1c1,	// (0x00056d44) uniindi_top_pane_g1_ParamLimits

0xf1d7,	// (0x00056d5a) uniindi_top_pane_g2_ParamLimits

0xf1e3,	// (0x00056d66) uniindi_top_pane_g3_ParamLimits

0xf1f4,	// (0x00056d77) uniindi_top_pane_g4_ParamLimits

0x030c,	// (0x00047e8f) uniindi_top_pane_g_ParamLimits

0xf201,	// (0x00056d84) uniindi_top_pane_t1_ParamLimits

0x902e,	// (0x00050bb1) bg_vkb2_func_pane_cp01_ParamLimits

0x902e,	// (0x00050bb1) bg_vkb2_func_pane_cp01

0x5b04,	// (0x0004d687) cel_fep_hwr_func_pane_g1_ParamLimits

0x5b04,	// (0x0004d687) cel_fep_hwr_func_pane_g1

0x902e,	// (0x00050bb1) bg_vkb2_func_pane_cp02_ParamLimits

0x902e,	// (0x00050bb1) bg_vkb2_func_pane_cp02

0x5b04,	// (0x0004d687) cell_hwr_side_button_pane_g1_ParamLimits

0x5b04,	// (0x0004d687) cell_hwr_side_button_pane_g1

0xc0ad,	// (0x00053c30) status_pane_g4_ParamLimits

0xc0ad,	// (0x00053c30) status_pane_g4

0xc0c7,	// (0x00053c4a) status_pane_t1

0xde8e,	// (0x00055a11) form2_midp_gauge_slider_cont_pane

0xde96,	// (0x00055a19) form2_midp_gauge_slider_pane_t1_ParamLimits

0x9fe6,	// (0x00051b69) form2_midp_gauge_slider_pane_t2_ParamLimits

0x9ffa,	// (0x00051b7d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfab0,	// (0x00057633) form2_midp_gauge_slider_pane_t_ParamLimits

0xdea8,	// (0x00055a2b) form2_midp_slider_pane_ParamLimits

0x22b4,	// (0x00049e37) aid_size_cell_func_vkb2_ParamLimits

0x22b4,	// (0x00049e37) aid_size_cell_func_vkb2

0x5aa5,	// (0x0004d628) slider_pane_g4_ParamLimits

0x5aa5,	// (0x0004d628) slider_pane_g4

0x83fc,	// (0x0004ff7f) form2_midp_gauge_slider_pane_t2_cp01

0x840c,	// (0x0004ff8f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x840c,	// (0x0004ff8f) form2_midp_gauge_slider_pane_t3_cp01

0x29e3,	// (0x0004a566) form2_midp_slider_pane_cp01

0x8e7b,	// (0x000509fe) navi_smil_pane

0x5b34,	// (0x0004d6b7) navi_smil_pane_g1

0x5b3c,	// (0x0004d6bf) navi_smil_pane_t1

0x5b12,	// (0x0004d695) form2_midp_slider_pane_g1

0x5b1b,	// (0x0004d69e) form2_midp_slider_pane_g2

0x5b23,	// (0x0004d6a6) form2_midp_slider_pane_g3

0x5b12,	// (0x0004d695) form2_midp_slider_pane_g4

0xb04e,	// (0x00052bd1) form2_midp_slider_pane_g5

0x0004,

0xfcaf,	// (0x00057832) form2_midp_slider_pane_g

0x29a8,	// (0x0004a52b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x29a8,	// (0x0004a52b) vkb2_area_bottom_space_btn_pane_g4

0x9619,	// (0x0005119c) lc0_navi_pane_ParamLimits

0x9619,	// (0x0005119c) lc0_navi_pane

0x9683,	// (0x00051206) lc0_stat_indi_pane_ParamLimits

0x9683,	// (0x00051206) lc0_stat_indi_pane

0x9698,	// (0x0005121b) ls0_title_pane_ParamLimits

0x9698,	// (0x0005121b) ls0_title_pane

0xb0b2,	// (0x00052c35) bg_popup_sub_pane_cp14_ParamLimits

0xf196,	// (0x00056d19) list_uniindi_pane_ParamLimits

0xf1a2,	// (0x00056d25) uniindi_top_pane_ParamLimits

0xf23e,	// (0x00056dc1) list_single_uniindi_pane_g1_ParamLimits

0xf251,	// (0x00056dd4) list_single_uniindi_pane_t1_ParamLimits

0x842b,	// (0x0004ffae) lc0_stat_clock_pane_ParamLimits

0x842b,	// (0x0004ffae) lc0_stat_clock_pane

0xb217,	// (0x00052d9a) lc0_stat_indi_pane_g1_ParamLimits

0xb217,	// (0x00052d9a) lc0_stat_indi_pane_g1

0xb224,	// (0x00052da7) lc0_stat_indi_pane_g2_ParamLimits

0xb224,	// (0x00052da7) lc0_stat_indi_pane_g2

0x0001,

0xfcba,	// (0x0005783d) lc0_stat_indi_pane_g_ParamLimits

0xfcba,	// (0x0005783d) lc0_stat_indi_pane_g

0x8438,	// (0x0004ffbb) lc0_uni_indicator_pane_ParamLimits

0x8438,	// (0x0004ffbb) lc0_uni_indicator_pane

0xb231,	// (0x00052db4) ls0_title_pane_g1_ParamLimits

0xb231,	// (0x00052db4) ls0_title_pane_g1

0xb245,	// (0x00052dc8) ls0_title_pane_t1_ParamLimits

0xb245,	// (0x00052dc8) ls0_title_pane_t1

0x8445,	// (0x0004ffc8) lc0_uni_indicator_pane_g1_ParamLimits

0x8445,	// (0x0004ffc8) lc0_uni_indicator_pane_g1

0x5b4a,	// (0x0004d6cd) lc0_stat_clock_pane_t1

0x06c7,	// (0x0004824a) main_ai5_pane

0x5b58,	// (0x0004d6db) ai5_sk_pane_ParamLimits

0x5b58,	// (0x0004d6db) ai5_sk_pane

0xb273,	// (0x00052df6) cell_ai5_widget_pane_ParamLimits

0xb273,	// (0x00052df6) cell_ai5_widget_pane

0x5b65,	// (0x0004d6e8) aid_size_cell_widget_grid

0x5b73,	// (0x0004d6f6) bg_ai5_widget_pane_ParamLimits

0x5b73,	// (0x0004d6f6) bg_ai5_widget_pane

0x5be7,	// (0x0004d76a) cell_ai5_widget_pane_g2

0x5bf7,	// (0x0004d77a) cell_ai5_widget_pane_g3

0x5c0e,	// (0x0004d791) cell_ai5_widget_pane_g4

0x5c1a,	// (0x0004d79d) cell_ai5_widget_pane_g5

0x5c26,	// (0x0004d7a9) cell_ai5_widget_pane_g6

0x5c32,	// (0x0004d7b5) cell_ai5_widget_pane_g7

0x5c7a,	// (0x0004d7fd) cell_ai5_widget_pane_t1_ParamLimits

0x5c7a,	// (0x0004d7fd) cell_ai5_widget_pane_t1

0x5c97,	// (0x0004d81a) cell_ai5_widget_pane_t2_ParamLimits

0x5c97,	// (0x0004d81a) cell_ai5_widget_pane_t2

0x5caf,	// (0x0004d832) cell_ai5_widget_pane_t3_ParamLimits

0x5caf,	// (0x0004d832) cell_ai5_widget_pane_t3

0x5cc7,	// (0x0004d84a) cell_ai5_widget_pane_t4_ParamLimits

0x5cc7,	// (0x0004d84a) cell_ai5_widget_pane_t4

0x5ce4,	// (0x0004d867) cell_ai5_widget_pane_t5_ParamLimits

0x5ce4,	// (0x0004d867) cell_ai5_widget_pane_t5

0x5d03,	// (0x0004d886) cell_ai5_widget_pane_t6_ParamLimits

0x5d03,	// (0x0004d886) cell_ai5_widget_pane_t6

0x5d15,	// (0x0004d898) cell_ai5_widget_pane_t7_ParamLimits

0x5d15,	// (0x0004d898) cell_ai5_widget_pane_t7

0x5d2e,	// (0x0004d8b1) cell_ai5_widget_pane_t8_ParamLimits

0x5d2e,	// (0x0004d8b1) cell_ai5_widget_pane_t8

0x0009,

0xfcd4,	// (0x00057857) cell_ai5_widget_pane_t_ParamLimits

0xfcd4,	// (0x00057857) cell_ai5_widget_pane_t

0x5d82,	// (0x0004d905) grid_ai5_widget_pane

0xb0b2,	// (0x00052c35) highlight_cell_ai5_widget_pane_ParamLimits

0xb0b2,	// (0x00052c35) highlight_cell_ai5_widget_pane

0xb2dd,	// (0x00052e60) ai5_sk_left_pane

0xb2e7,	// (0x00052e6a) ai5_sk_middle_pane

0xb2f1,	// (0x00052e74) ai5_sk_right_pane

0x5d96,	// (0x0004d919) bg_ai5_widget_pane_g1_ParamLimits

0x5d96,	// (0x0004d919) bg_ai5_widget_pane_g1

0x5da2,	// (0x0004d925) bg_ai5_widget_pane_g2_ParamLimits

0x5da2,	// (0x0004d925) bg_ai5_widget_pane_g2

0x5dae,	// (0x0004d931) bg_ai5_widget_pane_g3_ParamLimits

0x5dae,	// (0x0004d931) bg_ai5_widget_pane_g3

0x5dba,	// (0x0004d93d) bg_ai5_widget_pane_g4_ParamLimits

0x5dba,	// (0x0004d93d) bg_ai5_widget_pane_g4

0x5dc6,	// (0x0004d949) bg_ai5_widget_pane_g5_ParamLimits

0x5dc6,	// (0x0004d949) bg_ai5_widget_pane_g5

0x5dd2,	// (0x0004d955) bg_ai5_widget_pane_g6_ParamLimits

0x5dd2,	// (0x0004d955) bg_ai5_widget_pane_g6

0x5dde,	// (0x0004d961) bg_ai5_widget_pane_g7_ParamLimits

0x5dde,	// (0x0004d961) bg_ai5_widget_pane_g7

0x5dea,	// (0x0004d96d) bg_ai5_widget_pane_g8_ParamLimits

0x5dea,	// (0x0004d96d) bg_ai5_widget_pane_g8

0x5df6,	// (0x0004d979) bg_ai5_widget_pane_g9_ParamLimits

0x5df6,	// (0x0004d979) bg_ai5_widget_pane_g9

0x0008,

0xfce9,	// (0x0005786c) bg_ai5_widget_pane_g_ParamLimits

0xfce9,	// (0x0005786c) bg_ai5_widget_pane_g

0x5e28,	// (0x0004d9ab) cell_shortcut_ai5_widget_pane_ParamLimits

0x5e28,	// (0x0004d9ab) cell_shortcut_ai5_widget_pane

0xbd49,	// (0x000538cc) bg_cell_shortcut_ai5_widget_pane

0x5e39,	// (0x0004d9bc) cell_grid_ai5_widget_pane_g1

0x5e42,	// (0x0004d9c5) highlight_cell_shortcut_ai5_widget_pane

0xc19f,	// (0x00053d22) ai5_sk_left_pane_g1

0x5e4a,	// (0x0004d9cd) ai5_sk_left_pane_g2

0x5e52,	// (0x0004d9d5) ai5_sk_left_pane_g3

0x5e5a,	// (0x0004d9dd) ai5_sk_left_pane_g4

0x0003,

0xfcfc,	// (0x0005787f) ai5_sk_left_pane_g

0x5e62,	// (0x0004d9e5) ai5_sk_left_pane_t1

0xc1a7,	// (0x00053d2a) ai5_sk_right_pane_g1

0x5e70,	// (0x0004d9f3) ai5_sk_right_pane_g2

0x5e78,	// (0x0004d9fb) ai5_sk_right_pane_g3

0x5e80,	// (0x0004da03) ai5_sk_right_pane_g4

0x0003,

0xfd05,	// (0x00057888) ai5_sk_right_pane_g

0x5e88,	// (0x0004da0b) ai5_sk_right_pane_t1

0xc1a7,	// (0x00053d2a) ai5_sk_middle_pane_g1

0xc19f,	// (0x00053d22) ai5_sk_middle_pane_g2

0xc1bf,	// (0x00053d42) ai5_sk_middle_pane_g3

0x5e78,	// (0x0004d9fb) ai5_sk_middle_pane_g4

0x5e52,	// (0x0004d9d5) ai5_sk_middle_pane_g5

0x5e96,	// (0x0004da19) ai5_sk_middle_pane_g6

0xb2fb,	// (0x00052e7e) ai5_sk_middle_pane_g7

0x0006,

0xfd0e,	// (0x00057891) ai5_sk_middle_pane_g

0x9505,	// (0x00051088) aid_touch_area_size_lc0_ParamLimits

0x9505,	// (0x00051088) aid_touch_area_size_lc0

0x202c,	// (0x00049baf) cell_hwr_candidate_pane_t1_ParamLimits

0xbfcf,	// (0x00053b52) aid_touch_navi_pane

0x9791,	// (0x00051314) status_dt_navi_pane_ParamLimits

0x9791,	// (0x00051314) status_dt_navi_pane

0x97a9,	// (0x0005132c) status_dt_sta_pane_ParamLimits

0x97a9,	// (0x0005132c) status_dt_sta_pane

0xb303,	// (0x00052e86) dt_sta_controll_pane

0xb310,	// (0x00052e93) dt_sta_indi_pane

0xb31d,	// (0x00052ea0) dt_sta_title_pane

0x902e,	// (0x00050bb1) bg_dt_sta_indi_pane_ParamLimits

0x902e,	// (0x00050bb1) bg_dt_sta_indi_pane

0x5e9e,	// (0x0004da21) dt_sta_battery_pane

0xb32f,	// (0x00052eb2) dt_sta_indi_pane_g1

0xb338,	// (0x00052ebb) dt_sta_indi_pane_g2

0xb341,	// (0x00052ec4) dt_sta_indi_pane_g3

0x0002,

0xfd1d,	// (0x000578a0) dt_sta_indi_pane_g

0xb34a,	// (0x00052ecd) dt_sta_signal_pane

0xb0b2,	// (0x00052c35) bg_dt_sta_title_pane_ParamLimits

0xb0b2,	// (0x00052c35) bg_dt_sta_title_pane

0x5ea6,	// (0x0004da29) dt_sta_title_pane_g1

0xb353,	// (0x00052ed6) dt_sta_title_pane_t1_ParamLimits

0xb353,	// (0x00052ed6) dt_sta_title_pane_t1

0x8e7b,	// (0x000509fe) bg_dt_sta_control_pane

0xb368,	// (0x00052eeb) dt_sta_controll_pane_g1

0x5eae,	// (0x0004da31) bg_dt_sta_title_pane_g1

0x5eb7,	// (0x0004da3a) bg_dt_sta_title_pane_g2

0x5ec0,	// (0x0004da43) bg_dt_sta_title_pane_g3

0x0002,

0xfd24,	// (0x000578a7) bg_dt_sta_title_pane_g

0xdfff,	// (0x00055b82) bg_dt_sta_indi_pane_g1

0x5ec9,	// (0x0004da4c) dt_sta_signal_pane_g1

0x5ed1,	// (0x0004da54) dt_sta_signal_pane_g2

0x0001,

0xfd2b,	// (0x000578ae) dt_sta_signal_pane_g

0x5ed9,	// (0x0004da5c) dt_sta_battery_pane_g1

0x5ee2,	// (0x0004da65) dt_sta_battery_pane_t1

0xdfff,	// (0x00055b82) bg_dt_sta_control_pane_g1

0xb8ba,	// (0x0005343d) fep_china_uni_eep_pane

0xb8c2,	// (0x00053445) fep_china_uni_entry_pane_ParamLimits

0xb8d2,	// (0x00053455) popup_fep_china_uni_window_g1_ParamLimits

0xb8e2,	// (0x00053465) popup_fep_china_uni_window_g2_ParamLimits

0xb8e2,	// (0x00053465) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x000572a6) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x000572a6) popup_fep_china_uni_window_g

0x5ef1,	// (0x0004da74) fep_china_uni_eep_pane_g1

0x5ef9,	// (0x0004da7c) fep_china_uni_eep_pane_t1

0x5b2b,	// (0x0004d6ae) aid_touch_area_size_smil_player

0xc080,	// (0x00053c03) lc0_clock_pane

0xc0bb,	// (0x00053c3e) status_pane_g5_ParamLimits

0xc0bb,	// (0x00053c3e) status_pane_g5

0x7991,	// (0x0004f514) popup_keymap_window

0xc099,	// (0x00053c1c) status_icon_pane

0x5bf7,	// (0x0004d77a) cell_ai5_widget_pane_g3_ParamLimits

0x5c0e,	// (0x0004d791) cell_ai5_widget_pane_g4_ParamLimits

0x5c1a,	// (0x0004d79d) cell_ai5_widget_pane_g5_ParamLimits

0x5c3e,	// (0x0004d7c1) cell_ai5_widget_pane_g8_ParamLimits

0x5c3e,	// (0x0004d7c1) cell_ai5_widget_pane_g8

0x5c52,	// (0x0004d7d5) cell_ai5_widget_pane_g9_ParamLimits

0x5c52,	// (0x0004d7d5) cell_ai5_widget_pane_g9

0x5c66,	// (0x0004d7e9) cell_ai5_widget_pane_g10_ParamLimits

0x5c66,	// (0x0004d7e9) cell_ai5_widget_pane_g10

0x5f08,	// (0x0004da8b) status_icon_pane_g1

0x8e7b,	// (0x000509fe) bg_popup_sub_pane_cp13

0x5f10,	// (0x0004da93) popup_keymap_window_t1

0x8ca8,	// (0x0005082b) control_pane_g6_ParamLimits

0x8ca8,	// (0x0005082b) control_pane_g6

0x8cb5,	// (0x00050838) control_pane_g7_ParamLimits

0x8cb5,	// (0x00050838) control_pane_g7

0x8cc2,	// (0x00050845) control_pane_g8_ParamLimits

0x8cc2,	// (0x00050845) control_pane_g8

0xb303,	// (0x00052e86) dt_sta_controll_pane_ParamLimits

0xb310,	// (0x00052e93) dt_sta_indi_pane_ParamLimits

0xb31d,	// (0x00052ea0) dt_sta_title_pane_ParamLimits

0x9a20,	// (0x000515a3) aid_size_touch_scroll_bar_cale

0x07a0,	// (0x00048323) popup_discreet_window_ParamLimits

0x07a0,	// (0x00048323) popup_discreet_window

0x71de,	// (0x0004ed61) popup_sk_window

0xc6ef,	// (0x00054272) bg_popup_sub_pane_cp28_ParamLimits

0xc6ef,	// (0x00054272) bg_popup_sub_pane_cp28

0x5f1e,	// (0x0004daa1) popup_discreet_window_g1_ParamLimits

0x5f1e,	// (0x0004daa1) popup_discreet_window_g1

0x5f3e,	// (0x0004dac1) popup_discreet_window_t1_ParamLimits

0x5f3e,	// (0x0004dac1) popup_discreet_window_t1

0x5f5c,	// (0x0004dadf) popup_discreet_window_t2_ParamLimits

0x5f5c,	// (0x0004dadf) popup_discreet_window_t2

0x0002,

0xfd30,	// (0x000578b3) popup_discreet_window_t_ParamLimits

0xfd30,	// (0x000578b3) popup_discreet_window_t

0x2a1b,	// (0x0004a59e) popup_sk_window_g1

0x2a25,	// (0x0004a5a8) popup_sk_window_g2

0x0001,

0xfd37,	// (0x000578ba) popup_sk_window_g

0x2a2f,	// (0x0004a5b2) popup_sk_window_t1

0x2a3d,	// (0x0004a5c0) popup_sk_window_t1_copy1

0x5be7,	// (0x0004d76a) cell_ai5_widget_pane_g2_ParamLimits

0x5d40,	// (0x0004d8c3) cell_ai5_widget_pane_t9_ParamLimits

0x5d40,	// (0x0004d8c3) cell_ai5_widget_pane_t9

0x8e7b,	// (0x000509fe) main_fep_fshwr2_pane

0x8473,	// (0x0004fff6) aid_fshwr2_btn_pane

0x8484,	// (0x00050007) aid_fshwr2_syb_pane

0x8495,	// (0x00050018) aid_fshwr2_txt_pane

0x84a1,	// (0x00050024) fshwr2_func_candi_pane

0x84c0,	// (0x00050043) fshwr2_hwr_syb_pane

0x84db,	// (0x0005005e) fshwr2_icf_pane

0x8e7b,	// (0x000509fe) fshwr2_icf_bg_pane

0xb371,	// (0x00052ef4) fshwr2_icf_pane_t1_ParamLimits

0xb371,	// (0x00052ef4) fshwr2_icf_pane_t1

0xb837,	// (0x000533ba) fshwr2_func_candi_pane_g1

0xb38a,	// (0x00052f0d) fshwr2_func_candi_row_pane_ParamLimits

0xb38a,	// (0x00052f0d) fshwr2_func_candi_row_pane

0xb39a,	// (0x00052f1d) cell_fshwr2_syb_pane_ParamLimits

0xb39a,	// (0x00052f1d) cell_fshwr2_syb_pane

0xe190,	// (0x00055d13) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe190,	// (0x00055d13) fshwr2_hwr_syb_pane_g1

0x8e7b,	// (0x000509fe) bg_popup_call_pane_cp01

0xb3b4,	// (0x00052f37) fshwr2_func_candi_cell_pane_ParamLimits

0xb3b4,	// (0x00052f37) fshwr2_func_candi_cell_pane

0xcd31,	// (0x000548b4) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xcd31,	// (0x000548b4) fshwr2_func_candi_cell_bg_pane

0xb3df,	// (0x00052f62) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb3df,	// (0x00052f62) fshwr2_func_candi_cell_pane_g1

0x5fae,	// (0x0004db31) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x5fae,	// (0x0004db31) fshwr2_func_candi_cell_pane_t1

0x8e7b,	// (0x000509fe) bg_button_pane_cp08

0xbd49,	// (0x000538cc) cell_fshwr2_syb_bg_pane

0xb3ff,	// (0x00052f82) cell_fshwr2_syb_bg_pane_g1

0xb407,	// (0x00052f8a) cell_fshwr2_syb_bg_pane_t1

0xb0b2,	// (0x00052c35) main_tmo_pane

0x9b74,	// (0x000516f7) uni_indicator_pane_g1_ParamLimits

0x9b8b,	// (0x0005170e) uni_indicator_pane_g2_ParamLimits

0x9ba1,	// (0x00051724) uni_indicator_pane_g3_ParamLimits

0xd142,	// (0x00054cc5) uni_indicator_pane_g4_ParamLimits

0xd142,	// (0x00054cc5) uni_indicator_pane_g4

0xd156,	// (0x00054cd9) uni_indicator_pane_g5_ParamLimits

0xd156,	// (0x00054cd9) uni_indicator_pane_g5

0xd156,	// (0x00054cd9) uni_indicator_pane_g6_ParamLimits

0xd156,	// (0x00054cd9) uni_indicator_pane_g6

0xf922,	// (0x000574a5) uni_indicator_pane_g_ParamLimits

0xa547,	// (0x000520ca) popup_tmo_note_window_ParamLimits

0xa547,	// (0x000520ca) popup_tmo_note_window

0x2296,	// (0x00049e19) fshwr2_bg_pane

0xb3f0,	// (0x00052f73) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb3f0,	// (0x00052f73) fshwr2_func_candi_cell_pane_g2

0x0001,

0x044f,	// (0x00047fd2) fshwr2_func_candi_cell_pane_g_ParamLimits

0x044f,	// (0x00047fd2) fshwr2_func_candi_cell_pane_g

0xdfff,	// (0x00055b82) bg_popup_window_pane_cp01

0x5fc1,	// (0x0004db44) bg_popup_window_pane_g1_cp01

0x5fca,	// (0x0004db4d) bg_popup_window_pane_cp22_ParamLimits

0x5fca,	// (0x0004db4d) bg_popup_window_pane_cp22

0x5fd8,	// (0x0004db5b) listscroll_tmo_link_pane_ParamLimits

0x5fd8,	// (0x0004db5b) listscroll_tmo_link_pane

0x6018,	// (0x0004db9b) popup_tmo_note_window_g1_ParamLimits

0x6018,	// (0x0004db9b) popup_tmo_note_window_g1

0x6025,	// (0x0004dba8) tmo_note_info_pane_ParamLimits

0x6025,	// (0x0004dba8) tmo_note_info_pane

0xb769,	// (0x000532ec) list_tmo_note_info_pane_g1_ParamLimits

0xb769,	// (0x000532ec) list_tmo_note_info_pane_g1

0x603f,	// (0x0004dbc2) list_tmo_note_info_pane_g2_ParamLimits

0x603f,	// (0x0004dbc2) list_tmo_note_info_pane_g2

0x0001,

0xfd3c,	// (0x000578bf) list_tmo_note_info_pane_g_ParamLimits

0xfd3c,	// (0x000578bf) list_tmo_note_info_pane_g

0x605b,	// (0x0004dbde) list_tmo_note_info_text_pane_ParamLimits

0x605b,	// (0x0004dbde) list_tmo_note_info_text_pane

0x609d,	// (0x0004dc20) list_tmo_link_pane

0x60aa,	// (0x0004dc2d) scroll_pane_cp20

0x60b7,	// (0x0004dc3a) list_single_tmo_link_pane_ParamLimits

0x60b7,	// (0x0004dc3a) list_single_tmo_link_pane

0x60c7,	// (0x0004dc4a) list_single_tmo_link_pane_t1

0x60d5,	// (0x0004dc58) list_tmo_note_info_text_pane_t1_ParamLimits

0x60d5,	// (0x0004dc58) list_tmo_note_info_text_pane_t1

0x899b,	// (0x0005051e) aid_size_touch_scroll_bar_cp01_ParamLimits

0x899b,	// (0x0005051e) aid_size_touch_scroll_bar_cp01

0x890a,	// (0x0005048d) aid_size_touch_slider_marker

0x71ce,	// (0x0004ed51) popup_settings_window_ParamLimits

0x71ce,	// (0x0004ed51) popup_settings_window

0x35a9,	// (0x0004b12c) popup_candi_list_indi_window

0xbfcf,	// (0x00053b52) aid_touch_navi_pane_ParamLimits

0x21f1,	// (0x00049d74) rs_clock_indi_pane

0x21fa,	// (0x00049d7d) sctrl_sk_bottom_pane_ParamLimits

0x220b,	// (0x00049d8e) sctrl_sk_top_pane_ParamLimits

0x230e,	// (0x00049e91) popup_fep_tooltip_window

0x5b65,	// (0x0004d6e8) aid_size_cell_widget_grid_ParamLimits

0x5bd2,	// (0x0004d755) cell_ai5_widget_pane_g1_ParamLimits

0x5bd2,	// (0x0004d755) cell_ai5_widget_pane_g1

0x5c26,	// (0x0004d7a9) cell_ai5_widget_pane_g6_ParamLimits

0x5c32,	// (0x0004d7b5) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfcbf,	// (0x00057842) cell_ai5_widget_pane_g_ParamLimits

0xfcbf,	// (0x00057842) cell_ai5_widget_pane_g

0x5d64,	// (0x0004d8e7) cell_ai5_widget_pane_t10_ParamLimits

0x5d64,	// (0x0004d8e7) cell_ai5_widget_pane_t10

0x5d82,	// (0x0004d905) grid_ai5_widget_pane_ParamLimits

0x5e02,	// (0x0004d985) cell_contacts_ai5_widget_pane_ParamLimits

0x5e02,	// (0x0004d985) cell_contacts_ai5_widget_pane

0x5f71,	// (0x0004daf4) popup_discreet_window_t3_ParamLimits

0x5f71,	// (0x0004daf4) popup_discreet_window_t3

0x84f0,	// (0x00050073) popup_fshwr2_char_preview_window_ParamLimits

0x84f0,	// (0x00050073) popup_fshwr2_char_preview_window

0xb780,	// (0x00053303) tmo_note_info_pane_t1

0xb795,	// (0x00053318) tmo_note_info_pane_t2

0xb7ae,	// (0x00053331) tmo_note_info_pane_t3

0x6079,	// (0x0004dbfc) tmo_note_info_pane_t4

0x608b,	// (0x0004dc0e) tmo_note_info_pane_t5

0x0004,

0xfd41,	// (0x000578c4) tmo_note_info_pane_t

0x609d,	// (0x0004dc20) list_tmo_link_pane_ParamLimits

0x60aa,	// (0x0004dc2d) scroll_pane_cp20_ParamLimits

0x8e7b,	// (0x000509fe) bg_popup_fep_char_preview_window_cp01

0x60ee,	// (0x0004dc71) popup_fshwr2_char_preview_window_t1

0x60fc,	// (0x0004dc7f) popup_candi_list_indi_window_g1

0x6105,	// (0x0004dc88) bg_cell_contacts_ai5_widget_pane

0x6111,	// (0x0004dc94) cell_contacts_ai5_widget_pane_g1

0x6124,	// (0x0004dca7) cell_contacts_ai5_widget_pane_g2

0x6130,	// (0x0004dcb3) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfd4c,	// (0x000578cf) cell_contacts_ai5_widget_pane_g

0x6142,	// (0x0004dcc5) cell_contacts_ai5_widget_pane_t1

0xb0b2,	// (0x00052c35) highlight_cell_shortcut_ai5_widget_pane_cp01

0x61bc,	// (0x0004dd3f) settings_container_pane

0xbd49,	// (0x000538cc) listscroll_set_pane_copy1

0xd9a6,	// (0x00055529) scroll_pane_cp121_copy1

0x61c8,	// (0x0004dd4b) set_content_pane_copy1

0x61d0,	// (0x0004dd53) aid_height_set_list_copy1_ParamLimits

0x61d0,	// (0x0004dd53) aid_height_set_list_copy1

0xbfa7,	// (0x00053b2a) aid_size_parent_copy1_ParamLimits

0xbfa7,	// (0x00053b2a) aid_size_parent_copy1

0x61dc,	// (0x0004dd5f) button_value_adjust_pane_cp6_copy1_ParamLimits

0x61dc,	// (0x0004dd5f) button_value_adjust_pane_cp6_copy1

0xb20b,	// (0x00052d8e) list_highlight_pane_cp2_copy1_ParamLimits

0xb20b,	// (0x00052d8e) list_highlight_pane_cp2_copy1

0x61f0,	// (0x0004dd73) list_set_pane_copy1_ParamLimits

0x61f0,	// (0x0004dd73) list_set_pane_copy1

0x6157,	// (0x0004dcda) main_pane_set_t1_copy1_ParamLimits

0x6157,	// (0x0004dcda) main_pane_set_t1_copy1

0x6191,	// (0x0004dd14) main_pane_set_t2_copy1_ParamLimits

0x6191,	// (0x0004dd14) main_pane_set_t2_copy1

0x629d,	// (0x0004de20) main_pane_set_t3_copy1

0x62ab,	// (0x0004de2e) main_pane_set_t4_copy1

0x61b0,	// (0x0004dd33) set_content_pane_g1_copy1_ParamLimits

0x61b0,	// (0x0004dd33) set_content_pane_g1_copy1

0x62b9,	// (0x0004de3c) setting_code_pane_copy1

0x62c1,	// (0x0004de44) setting_slider_graphic_pane_copy1

0x62c1,	// (0x0004de44) setting_slider_pane_copy1

0x62c1,	// (0x0004de44) setting_text_pane_copy1

0x62c1,	// (0x0004de44) setting_volume_pane_copy1

0x62b9,	// (0x0004de3c) settings_code_pane_cp2_copy1

0x62c9,	// (0x0004de4c) settings_code_pane_cp_copy1_ParamLimits

0x62c9,	// (0x0004de4c) settings_code_pane_cp_copy1

0x2acc,	// (0x0004a64f) volume_set_pane_copy1

0x62dd,	// (0x0004de60) volume_set_pane_g10_copy1

0x62e5,	// (0x0004de68) volume_set_pane_g1_copy1

0x62ed,	// (0x0004de70) volume_set_pane_g2_copy1

0x62f5,	// (0x0004de78) volume_set_pane_g3_copy1

0x62fd,	// (0x0004de80) volume_set_pane_g4_copy1

0x6305,	// (0x0004de88) volume_set_pane_g5_copy1

0x630d,	// (0x0004de90) volume_set_pane_g6_copy1

0x6315,	// (0x0004de98) volume_set_pane_g7_copy1

0x631d,	// (0x0004dea0) volume_set_pane_g8_copy1

0x6325,	// (0x0004dea8) volume_set_pane_g9_copy1

0x8efb,	// (0x00050a7e) bg_set_opt_pane_cp_copy1_ParamLimits

0x8efb,	// (0x00050a7e) bg_set_opt_pane_cp_copy1

0x2ad4,	// (0x0004a657) setting_slider_pane_t1_copy1_ParamLimits

0x2ad4,	// (0x0004a657) setting_slider_pane_t1_copy1

0x2af2,	// (0x0004a675) setting_slider_pane_t2_copy1_ParamLimits

0x2af2,	// (0x0004a675) setting_slider_pane_t2_copy1

0x2b0c,	// (0x0004a68f) setting_slider_pane_t3_copy1_ParamLimits

0x2b0c,	// (0x0004a68f) setting_slider_pane_t3_copy1

0x2b24,	// (0x0004a6a7) slider_set_pane_copy1_ParamLimits

0x2b24,	// (0x0004a6a7) slider_set_pane_copy1

0xb101,	// (0x00052c84) set_opt_bg_pane_g1_copy2

0xb109,	// (0x00052c8c) set_opt_bg_pane_g2_copy2

0x632d,	// (0x0004deb0) set_opt_bg_pane_g3_copy2

0xb119,	// (0x00052c9c) set_opt_bg_pane_g4_copy2

0xb121,	// (0x00052ca4) set_opt_bg_pane_g5_copy2

0xb129,	// (0x00052cac) set_opt_bg_pane_g6_copy2

0x6337,	// (0x0004deba) set_opt_bg_pane_g7_copy2

0x633f,	// (0x0004dec2) set_opt_bg_pane_g8_copy2

0x6349,	// (0x0004decc) set_opt_bg_pane_g9_copy2

0x6353,	// (0x0004ded6) aid_size_touch_slider_mark_copy1_ParamLimits

0x6353,	// (0x0004ded6) aid_size_touch_slider_mark_copy1

0x6367,	// (0x0004deea) slider_set_pane_g1_copy1

0x6370,	// (0x0004def3) slider_set_pane_g2_copy1

0xd58a,	// (0x0005510d) slider_set_pane_g3_copy1_ParamLimits

0xd58a,	// (0x0005510d) slider_set_pane_g3_copy1

0xd59e,	// (0x00055121) slider_set_pane_g4_copy1_ParamLimits

0xd59e,	// (0x00055121) slider_set_pane_g4_copy1

0xd5b6,	// (0x00055139) slider_set_pane_g5_copy1_ParamLimits

0xd5b6,	// (0x00055139) slider_set_pane_g5_copy1

0xd58a,	// (0x0005510d) slider_set_pane_g6_copy1_ParamLimits

0xd58a,	// (0x0005510d) slider_set_pane_g6_copy1

0x6378,	// (0x0004defb) slider_set_pane_g7_copy1_ParamLimits

0x6378,	// (0x0004defb) slider_set_pane_g7_copy1

0x8e8f,	// (0x00050a12) bg_set_opt_pane_cp2_copy1

0x638e,	// (0x0004df11) setting_slider_graphic_pane_g1_copy1

0x6397,	// (0x0004df1a) setting_slider_graphic_pane_t1_copy1

0x63a7,	// (0x0004df2a) setting_slider_graphic_pane_t2_copy1

0x63b7,	// (0x0004df3a) slider_set_pane_cp_copy1

0x63c7,	// (0x0004df4a) input_focus_pane_cp1_copy1

0x63d0,	// (0x0004df53) list_set_text_pane_copy1

0x63d8,	// (0x0004df5b) setting_text_pane_g1_copy1

0x3d29,	// (0x0004b8ac) set_text_pane_t1_copy1

0x63c7,	// (0x0004df4a) input_focus_pane_cp2_copy1

0x63d8,	// (0x0004df5b) setting_code_pane_g1_copy1

0x63e1,	// (0x0004df64) setting_code_pane_t1_copy1

0xce5f,	// (0x000549e2) list_set_graphic_pane_copy1

0x8e8f,	// (0x00050a12) bg_set_opt_pane_cp4_copy1

0xba5f,	// (0x000535e2) list_set_graphic_pane_g1_copy1_ParamLimits

0xba5f,	// (0x000535e2) list_set_graphic_pane_g1_copy1

0x63ef,	// (0x0004df72) list_set_graphic_pane_g2_copy1

0xba77,	// (0x000535fa) list_set_graphic_pane_t1_copy1_ParamLimits

0xba77,	// (0x000535fa) list_set_graphic_pane_t1_copy1

0xdfff,	// (0x00055b82) rs_clock_indi_pane_g1

0x63f7,	// (0x0004df7a) rs_clock_indi_pane_t1

0x6405,	// (0x0004df88) rs_indi_pane

0x640d,	// (0x0004df90) rs_indi_pane_g1

0x6416,	// (0x0004df99) rs_indi_pane_g2

0x641f,	// (0x0004dfa2) rs_indi_pane_g3

0x0002,

0xfd53,	// (0x000578d6) rs_indi_pane_g

0xbd49,	// (0x000538cc) bg_popup_preview_window_pane_cp03

0x6428,	// (0x0004dfab) popup_fep_tooltip_window_t1

0xe999,	// (0x0005651c) popup_note2_window_g2_ParamLimits

0xe999,	// (0x0005651c) popup_note2_window_g2

0x0001,

0x025d,	// (0x00047de0) popup_note2_window_g_ParamLimits

0x025d,	// (0x00047de0) popup_note2_window_g

0xee20,	// (0x000569a3) bg_popup_sub_pane_cp11_ParamLimits

0xee2d,	// (0x000569b0) cell_ai3_links_pane_g1_ParamLimits

0xee44,	// (0x000569c7) cell_ai3_links_pane_t1

0x3d29,	// (0x0004b8ac) set_text_pane_t1_copy1_ParamLimits

0xbc66,	// (0x000537e9) cell_graphic_popup_pane_cp2_ParamLimits

0xbc66,	// (0x000537e9) cell_graphic_popup_pane_cp2

0x6436,	// (0x0004dfb9) cell_graphic_popup_pane_g1_cp2

0x9341,	// (0x00050ec4) cell_graphic_popup_pane_g2_cp2

0x643e,	// (0x0004dfc1) cell_graphic_popup_pane_g3_cp2

0x6446,	// (0x0004dfc9) cell_graphic_popup_pane_t2_cp2

0x9352,	// (0x00050ed5) grid_highlight_pane_cp3_cp2

0xb5b1,	// (0x00053134) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb0b2,	// (0x00052c35) main_tmo_pane_ParamLimits

0xa53b,	// (0x000520be) popup_tmo_big_image_note_window

0x5bc1,	// (0x0004d744) cell_ai5_widget_list_pane

0x5bc9,	// (0x0004d74c) cell_ai5_widget_lrg_icon_pane

0xb780,	// (0x00053303) tmo_note_info_pane_t1_ParamLimits

0xb795,	// (0x00053318) tmo_note_info_pane_t2_ParamLimits

0xb7ae,	// (0x00053331) tmo_note_info_pane_t3_ParamLimits

0x6079,	// (0x0004dbfc) tmo_note_info_pane_t4_ParamLimits

0x608b,	// (0x0004dc0e) tmo_note_info_pane_t5_ParamLimits

0xfd41,	// (0x000578c4) tmo_note_info_pane_t_ParamLimits

0x61bc,	// (0x0004dd3f) settings_container_pane_ParamLimits

0x63bf,	// (0x0004df42) indicator_popup_pane_cp5

0x63bf,	// (0x0004df42) indicator_popup_pane_cp6

0xce5f,	// (0x000549e2) list_set_graphic_pane_copy1_ParamLimits

0x8e7b,	// (0x000509fe) bg_popup_window_pane_cp23

0x6454,	// (0x0004dfd7) popup_tmo_big_image_note_window_g1

0x645d,	// (0x0004dfe0) popup_tmo_big_image_note_window_t1

0x646d,	// (0x0004dff0) popup_tmo_big_image_note_window_t2

0x647d,	// (0x0004e000) popup_tmo_big_image_note_window_t3

0x0002,

0xfd5a,	// (0x000578dd) popup_tmo_big_image_note_window_t

0xdfff,	// (0x00055b82) cell_ai5_widget_lrg_icon_pane_g1

0x648d,	// (0x0004e010) cell_ai5_widget_lrg_icon_pane_t1

0x649b,	// (0x0004e01e) cell_ai5_widget_list_row_pane_ParamLimits

0x649b,	// (0x0004e01e) cell_ai5_widget_list_row_pane

0x64b4,	// (0x0004e037) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x64b4,	// (0x0004e037) cell_ai5_widget_list_row_pane_g1

0x64c1,	// (0x0004e044) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x64c1,	// (0x0004e044) cell_ai5_widget_list_row_pane_t1

0x64ef,	// (0x0004e072) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x64ef,	// (0x0004e072) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfd61,	// (0x000578e4) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfd61,	// (0x000578e4) cell_ai5_widget_list_row_pane_t

0x06c7,	// (0x0004824a) main_fep_vtchi_ss_pane

0x2b49,	// (0x0004a6cc) popup_fep_char_pre_window

0x2b51,	// (0x0004a6d4) popup_fep_ituss_window

0x2b72,	// (0x0004a6f5) popup_fep_vkbss_window

0x6517,	// (0x0004e09a) grid_vkbss_keypad_pane_ParamLimits

0x6517,	// (0x0004e09a) grid_vkbss_keypad_pane

0x6527,	// (0x0004e0aa) ituss_keypad_pane

0x2b9d,	// (0x0004a720) aid_vkbss_key_offset_ParamLimits

0x2b9d,	// (0x0004a720) aid_vkbss_key_offset

0x2ba9,	// (0x0004a72c) cell_vkbss_key_pane_ParamLimits

0x2ba9,	// (0x0004a72c) cell_vkbss_key_pane

0xd983,	// (0x00055506) bg_cell_vkbss_key_g1_ParamLimits

0xd983,	// (0x00055506) bg_cell_vkbss_key_g1

0x6537,	// (0x0004e0ba) cell_vkbss_key_3p_pane_ParamLimits

0x6537,	// (0x0004e0ba) cell_vkbss_key_3p_pane

0x6551,	// (0x0004e0d4) cell_vkbss_key_g1_ParamLimits

0x6551,	// (0x0004e0d4) cell_vkbss_key_g1

0x656b,	// (0x0004e0ee) cell_vkbss_key_t1_ParamLimits

0x656b,	// (0x0004e0ee) cell_vkbss_key_t1

0x2bbf,	// (0x0004a742) cell_ituss_key_pane_ParamLimits

0x2bbf,	// (0x0004a742) cell_ituss_key_pane

0x6596,	// (0x0004e119) bg_cell_ituss_key_g1_ParamLimits

0x6596,	// (0x0004e119) bg_cell_ituss_key_g1

0x65a2,	// (0x0004e125) cell_ituss_key_pane_g1_ParamLimits

0x65a2,	// (0x0004e125) cell_ituss_key_pane_g1

0x65b6,	// (0x0004e139) cell_ituss_key_pane_g2_ParamLimits

0x65b6,	// (0x0004e139) cell_ituss_key_pane_g2

0x0001,

0xfd68,	// (0x000578eb) cell_ituss_key_pane_g_ParamLimits

0xfd68,	// (0x000578eb) cell_ituss_key_pane_g

0x65e4,	// (0x0004e167) cell_ituss_key_t1_ParamLimits

0x65e4,	// (0x0004e167) cell_ituss_key_t1

0x661e,	// (0x0004e1a1) cell_ituss_key_t2_ParamLimits

0x661e,	// (0x0004e1a1) cell_ituss_key_t2

0x664f,	// (0x0004e1d2) cell_ituss_key_t3_ParamLimits

0x664f,	// (0x0004e1d2) cell_ituss_key_t3

0x6689,	// (0x0004e20c) cell_ituss_key_t4_ParamLimits

0x6689,	// (0x0004e20c) cell_ituss_key_t4

0x0003,

0xfd6d,	// (0x000578f0) cell_ituss_key_t_ParamLimits

0xfd6d,	// (0x000578f0) cell_ituss_key_t

0x66c3,	// (0x0004e246) cell_vkbss_key_3p_pane_g1

0x66cb,	// (0x0004e24e) cell_vkbss_key_3p_pane_g2

0x66d3,	// (0x0004e256) cell_vkbss_key_3p_pane_g3

0x0002,

0xfd76,	// (0x000578f9) cell_vkbss_key_3p_pane_g

0x8e7b,	// (0x000509fe) bg_popup_fep_char_preview_window_cp02

0x66db,	// (0x0004e25e) popup_fep_char_pre_window_t1

0xb2d3,	// (0x00052e56) main_ai5_sk_pane

0x6105,	// (0x0004dc88) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x6111,	// (0x0004dc94) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x6124,	// (0x0004dca7) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x6130,	// (0x0004dcb3) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfd4c,	// (0x000578cf) cell_contacts_ai5_widget_pane_g_ParamLimits

0x6142,	// (0x0004dcc5) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb0b2,	// (0x00052c35) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xb7c3,	// (0x00053346) main_ai5_sk_pane_g1

0xc52d,	// (0x000540b0) popup_query_code_window_g1

0x2b67,	// (0x0004a6ea) popup_fep_vkb_icf_pane

0x2b7b,	// (0x0004a6fe) popup_fep_vtchi_icf_pane

0xb0b2,	// (0x00052c35) bg_icf_pane

0x66ea,	// (0x0004e26d) list_vkb_icf_pane

0xb0b2,	// (0x00052c35) bg_icf_pane_cp01

0x66f6,	// (0x0004e279) vtchi_icf_list_pane

0x6707,	// (0x0004e28a) list_vkb_icf_pane_t1_ParamLimits

0x6707,	// (0x0004e28a) list_vkb_icf_pane_t1

0x671f,	// (0x0004e2a2) vtchi_icf_list_pane_t1_ParamLimits

0x671f,	// (0x0004e2a2) vtchi_icf_list_pane_t1

0x2b51,	// (0x0004a6d4) popup_fep_ituss_window_ParamLimits

0x2b7b,	// (0x0004a6fe) popup_fep_vtchi_icf_pane_ParamLimits

0x6527,	// (0x0004e0aa) ituss_keypad_pane_ParamLimits

0x2b91,	// (0x0004a714) ituss_sks_pane

0xb0b2,	// (0x00052c35) bg_icf_pane_ParamLimits

0x2b3a,	// (0x0004a6bd) icf_edit_indi_pane_ParamLimits

0x2b3a,	// (0x0004a6bd) icf_edit_indi_pane

0x66ea,	// (0x0004e26d) list_vkb_icf_pane_ParamLimits

0xb0b2,	// (0x00052c35) bg_icf_pane_cp01_ParamLimits

0x2b3a,	// (0x0004a6bd) icf_edit_indi_pane_cp01_ParamLimits

0x2b3a,	// (0x0004a6bd) icf_edit_indi_pane_cp01

0x66fe,	// (0x0004e281) vtchi_query_pane

0xe190,	// (0x00055d13) icf_edit_indi_pane_g1_ParamLimits

0xe190,	// (0x00055d13) icf_edit_indi_pane_g1

0x67ab,	// (0x0004e32e) icf_edit_indi_pane_g2_ParamLimits

0x67ab,	// (0x0004e32e) icf_edit_indi_pane_g2

0x0001,

0xfd8e,	// (0x00057911) icf_edit_indi_pane_g_ParamLimits

0xfd8e,	// (0x00057911) icf_edit_indi_pane_g

0x67ba,	// (0x0004e33d) icf_edit_indi_pane_t1

0x6741,	// (0x0004e2c4) bg_input_focus_pane_cp042

0x9a17,	// (0x0005159a) vtchi_button_pane

0x674a,	// (0x0004e2cd) vtchi_query_pane_t1

0x6758,	// (0x0004e2db) vtchi_query_pane_t2

0x6766,	// (0x0004e2e9) vtchi_query_pane_t3

0x0002,

0xfd7d,	// (0x00057900) vtchi_query_pane_t

0x8e7b,	// (0x000509fe) bg_button_pane_cp13

0x6774,	// (0x0004e2f7) vtchi_button_pane_g1

0x677c,	// (0x0004e2ff) ituss_sks_pane_g1

0x6787,	// (0x0004e30a) ituss_sks_pane_g2

0x0001,

0xfd84,	// (0x00057907) ituss_sks_pane_g

0x678f,	// (0x0004e312) ituss_sks_pane_t1

0x679d,	// (0x0004e320) ituss_sks_pane_t2

0x0001,

0xfd89,	// (0x0005790c) ituss_sks_pane_t

0xdcb8,	// (0x0005583b) indicator_nsta_pane_cp_g1

0xdcc1,	// (0x00055844) indicator_nsta_pane_cp_g2

0xdcc9,	// (0x0005584c) indicator_nsta_pane_cp_g3

0xdcd1,	// (0x00055854) indicator_nsta_pane_cp_g4

0xdcd9,	// (0x0005585c) indicator_nsta_pane_cp_g5

0xdcd9,	// (0x0005585c) indicator_nsta_pane_cp_g6

0x0005,

0x00d9,	// (0x00047c5c) indicator_nsta_pane_cp_g

0xaf2a,	// (0x00052aad) cell_graphic2_pane_t2_ParamLimits

0xaf2a,	// (0x00052aad) cell_graphic2_pane_t2

0x0001,

0xfc5b,	// (0x000577de) cell_graphic2_pane_t_ParamLimits

0xfc5b,	// (0x000577de) cell_graphic2_pane_t

0xaf5d,	// (0x00052ae0) cell_graphic2_control_pane_t1

0x8b57,	// (0x000506da) signal_pane_g3_ParamLimits

0x8b57,	// (0x000506da) signal_pane_g3

0x8b6b,	// (0x000506ee) signal_pane_g4_ParamLimits

0x8b6b,	// (0x000506ee) signal_pane_g4

0x6501,	// (0x0004e084) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x6501,	// (0x0004e084) cell_ai5_widget_list_row_pane_t3

0x65d2,	// (0x0004e155) cell_ituss_key_pane_t1_ParamLimits

0x65d2,	// (0x0004e155) cell_ituss_key_pane_t1

0xc26d,	// (0x00053df0) form_field_data_wide_pane_vc_t2_ParamLimits

0xc26d,	// (0x00053df0) form_field_data_wide_pane_vc_t2

0xc281,	// (0x00053e04) form_field_data_wide_pane_vc_t3_ParamLimits

0xc281,	// (0x00053e04) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x0005738d) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x0005738d) form_field_data_wide_pane_vc_t

0xd9e6,	// (0x00055569) form_field_slider_wide_pane_vc_t3_ParamLimits

0xd9e6,	// (0x00055569) form_field_slider_wide_pane_vc_t3

0xdac0,	// (0x00055643) form_field_popup_wide_pane_vc_t2_ParamLimits

0xdac0,	// (0x00055643) form_field_popup_wide_pane_vc_t2

0xdad7,	// (0x0005565a) form_field_popup_wide_pane_vc_t3_ParamLimits

0xdad7,	// (0x0005565a) form_field_popup_wide_pane_vc_t3

0x0002,

0x00cd,	// (0x00047c50) form_field_popup_wide_pane_vc_t_ParamLimits

0x00cd,	// (0x00047c50) form_field_popup_wide_pane_vc_t

0x8473,	// (0x0004fff6) aid_fshwr2_btn_pane_ParamLimits

0x8484,	// (0x00050007) aid_fshwr2_syb_pane_ParamLimits

0x8495,	// (0x00050018) aid_fshwr2_txt_pane_ParamLimits

0x2296,	// (0x00049e19) fshwr2_bg_pane_ParamLimits

0x84a1,	// (0x00050024) fshwr2_func_candi_pane_ParamLimits

0x84c0,	// (0x00050043) fshwr2_hwr_syb_pane_ParamLimits

0x84db,	// (0x0005005e) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large

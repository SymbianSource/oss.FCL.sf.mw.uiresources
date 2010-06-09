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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000f3d0 };

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
0xc8b7,	// (0x0001bc87) Screen

0xc8c3,	// (0x0001bc93) application_window_ParamLimits

0xc8c3,	// (0x0001bc93) application_window

0x26b7,	// (0x00011a87) screen_g1

0xb829,	// (0x0001abf9) area_bottom_pane_ParamLimits

0xb829,	// (0x0001abf9) area_bottom_pane

0x0284,	// (0x0000f654) area_top_pane_ParamLimits

0x0284,	// (0x0000f654) area_top_pane

0x0322,	// (0x0000f6f2) main_pane_ParamLimits

0x0322,	// (0x0000f6f2) main_pane

0x26c1,	// (0x00011a91) misc_graphics

0xd5f7,	// (0x0001c9c7) battery_pane_ParamLimits

0xd5f7,	// (0x0001c9c7) battery_pane

0x5618,	// (0x000149e8) bg_status_flat_pane_g8

0x5620,	// (0x000149f0) bg_status_flat_pane_g9

0x48f9,	// (0x00013cc9) context_pane_ParamLimits

0x48f9,	// (0x00013cc9) context_pane

0xd762,	// (0x0001cb32) navi_pane_ParamLimits

0xd762,	// (0x0001cb32) navi_pane

0xd7e0,	// (0x0001cbb0) signal_pane_ParamLimits

0xd7e0,	// (0x0001cbb0) signal_pane

0x0008,

0xf86f,	// (0x0001ec3f) bg_status_flat_pane_g

0xd870,	// (0x0001cc40) status_pane_g1_ParamLimits

0xd870,	// (0x0001cc40) status_pane_g1

0xd886,	// (0x0001cc56) status_pane_g2_ParamLimits

0xd886,	// (0x0001cc56) status_pane_g2

0x4b20,	// (0x00013ef0) status_pane_g3_ParamLimits

0x4b20,	// (0x00013ef0) status_pane_g3

0x0004,

0xf79b,	// (0x0001eb6b) status_pane_g_ParamLimits

0xf79b,	// (0x0001eb6b) status_pane_g

0xd892,	// (0x0001cc62) title_pane_ParamLimits

0xd892,	// (0x0001cc62) title_pane

0xd8f5,	// (0x0001ccc5) uni_indicator_pane_ParamLimits

0xd8f5,	// (0x0001ccc5) uni_indicator_pane

0x4746,	// (0x00013b16) bg_list_pane_ParamLimits

0x4746,	// (0x00013b16) bg_list_pane

0xd542,	// (0x0001c912) find_pane

0xbb8b,	// (0x0001af5b) listscroll_app_pane_ParamLimits

0xbb8b,	// (0x0001af5b) listscroll_app_pane

0x477f,	// (0x00013b4f) listscroll_form_pane

0xbb9f,	// (0x0001af6f) listscroll_gen_pane_ParamLimits

0xbb9f,	// (0x0001af6f) listscroll_gen_pane

0x0c13,	// (0x0000ffe3) listscroll_set_pane

0x61cd,	// (0x0001559d) main_idle_act_pane

0x4442,	// (0x00013812) main_idle_trad_pane

0x4442,	// (0x00013812) main_list_empty_pane

0x4799,	// (0x00013b69) main_midp_pane

0x47a5,	// (0x00013b75) main_pane_g1_ParamLimits

0x47a5,	// (0x00013b75) main_pane_g1

0xbbb3,	// (0x0001af83) popup_ai_message_window_ParamLimits

0xbbb3,	// (0x0001af83) popup_ai_message_window

0xbc44,	// (0x0001b014) popup_fep_china_uni_window_ParamLimits

0xbc44,	// (0x0001b014) popup_fep_china_uni_window

0x0d2b,	// (0x000100fb) popup_fep_japan_candidate_window_ParamLimits

0x0d2b,	// (0x000100fb) popup_fep_japan_candidate_window

0x0d4b,	// (0x0001011b) popup_fep_japan_predictive_window_ParamLimits

0x0d4b,	// (0x0001011b) popup_fep_japan_predictive_window

0xbca0,	// (0x0001b070) popup_find_window

0xbcbd,	// (0x0001b08d) popup_grid_graphic_window_ParamLimits

0xbcbd,	// (0x0001b08d) popup_grid_graphic_window

0x0db2,	// (0x00010182) popup_large_graphic_colour_window

0xbd5b,	// (0x0001b12b) popup_menu_window_ParamLimits

0xbd5b,	// (0x0001b12b) popup_menu_window

0xbf2d,	// (0x0001b2fd) popup_note_image_window

0xbef3,	// (0x0001b2c3) popup_note_wait_window_ParamLimits

0xbef3,	// (0x0001b2c3) popup_note_wait_window

0xbf45,	// (0x0001b315) popup_note_window_ParamLimits

0xbf45,	// (0x0001b315) popup_note_window

0xbfeb,	// (0x0001b3bb) popup_query_code_window_ParamLimits

0xbfeb,	// (0x0001b3bb) popup_query_code_window

0x0ffa,	// (0x000103ca) popup_query_data_code_window_ParamLimits

0x0ffa,	// (0x000103ca) popup_query_data_code_window

0xc025,	// (0x0001b3f5) popup_query_data_window_ParamLimits

0xc025,	// (0x0001b3f5) popup_query_data_window

0xc0a7,	// (0x0001b477) popup_query_sat_info_window_ParamLimits

0xc0a7,	// (0x0001b477) popup_query_sat_info_window

0xc13e,	// (0x0001b50e) popup_snote_single_graphic_window_ParamLimits

0xc13e,	// (0x0001b50e) popup_snote_single_graphic_window

0xc13e,	// (0x0001b50e) popup_snote_single_text_window_ParamLimits

0xc13e,	// (0x0001b50e) popup_snote_single_text_window

0x1081,	// (0x00010451) popup_sub_window_general

0x11b1,	// (0x00010581) popup_window_general_ParamLimits

0x11b1,	// (0x00010581) popup_window_general

0x47bb,	// (0x00013b8b) power_save_pane

0xba10,	// (0x0001ade0) control_pane_g1_ParamLimits

0xba10,	// (0x0001ade0) control_pane_g1

0xba39,	// (0x0001ae09) control_pane_g2_ParamLimits

0xba39,	// (0x0001ae09) control_pane_g2

0x4709,	// (0x00013ad9) control_pane_g3_ParamLimits

0x4709,	// (0x00013ad9) control_pane_g3

0x0007,

0xf783,	// (0x0001eb53) control_pane_g_ParamLimits

0xf783,	// (0x0001eb53) control_pane_g

0xba7a,	// (0x0001ae4a) control_pane_t1_ParamLimits

0xba7a,	// (0x0001ae4a) control_pane_t1

0xbae0,	// (0x0001aeb0) control_pane_t2_ParamLimits

0xbae0,	// (0x0001aeb0) control_pane_t2

0x0002,

0xf794,	// (0x0001eb64) control_pane_t_ParamLimits

0xf794,	// (0x0001eb64) control_pane_t

0xd474,	// (0x0001c844) navi_navi_volume_pane_cp1

0xd47c,	// (0x0001c84c) status_small_icon_pane

0x463e,	// (0x00013a0e) status_small_pane_g1_ParamLimits

0x463e,	// (0x00013a0e) status_small_pane_g1

0xd484,	// (0x0001c854) status_small_pane_g2_ParamLimits

0xd484,	// (0x0001c854) status_small_pane_g2

0xd490,	// (0x0001c860) status_small_pane_g3_ParamLimits

0xd490,	// (0x0001c860) status_small_pane_g3

0xd49c,	// (0x0001c86c) status_small_pane_g4_ParamLimits

0xd49c,	// (0x0001c86c) status_small_pane_g4

0xd4a8,	// (0x0001c878) status_small_pane_g5_ParamLimits

0xd4a8,	// (0x0001c878) status_small_pane_g5

0xd4b6,	// (0x0001c886) status_small_pane_g6_ParamLimits

0xd4b6,	// (0x0001c886) status_small_pane_g6

0x0007,

0xf772,	// (0x0001eb42) status_small_pane_g_ParamLimits

0xf772,	// (0x0001eb42) status_small_pane_g

0xd4e5,	// (0x0001c8b5) status_small_pane_t1

0xd507,	// (0x0001c8d7) status_small_wait_pane_ParamLimits

0xd507,	// (0x0001c8d7) status_small_wait_pane

0xd2ae,	// (0x0001c67e) aid_levels_signal_ParamLimits

0xd2ae,	// (0x0001c67e) aid_levels_signal

0xd2c6,	// (0x0001c696) signal_pane_g1_ParamLimits

0xd2c6,	// (0x0001c696) signal_pane_g1

0xd2e1,	// (0x0001c6b1) signal_pane_g2_ParamLimits

0xd2e1,	// (0x0001c6b1) signal_pane_g2

0x0003,

0xf703,	// (0x0001ead3) signal_pane_g_ParamLimits

0xf703,	// (0x0001ead3) signal_pane_g

0x3e87,	// (0x00013257) context_pane_g1

0xc8d3,	// (0x0001bca3) title_pane_g1

0xc90a,	// (0x0001bcda) title_pane_t1

0x2769,	// (0x00011b39) title_pane_t2

0x278f,	// (0x00011b5f) title_pane_t3

0x0002,

0xf557,	// (0x0001e927) title_pane_t

0xd91d,	// (0x0001cced) aid_levels_battery_ParamLimits

0xd91d,	// (0x0001cced) aid_levels_battery

0xd939,	// (0x0001cd09) battery_pane_g1_ParamLimits

0xd939,	// (0x0001cd09) battery_pane_g1

0xd956,	// (0x0001cd26) battery_pane_g2_ParamLimits

0xd956,	// (0x0001cd26) battery_pane_g2

0x0001,

0xf7a6,	// (0x0001eb76) battery_pane_g_ParamLimits

0xf7a6,	// (0x0001eb76) battery_pane_g

0xdb2d,	// (0x0001cefd) uni_indicator_pane_g1

0xdb43,	// (0x0001cf13) uni_indicator_pane_g2

0xdb59,	// (0x0001cf29) uni_indicator_pane_g3

0x0005,

0xf917,	// (0x0001ece7) uni_indicator_pane_g

0x42b4,	// (0x00013684) navi_icon_pane_ParamLimits

0x42b4,	// (0x00013684) navi_icon_pane

0x41f2,	// (0x000135c2) navi_midp_pane

0x42d0,	// (0x000136a0) navi_navi_pane

0x42da,	// (0x000136aa) navi_text_pane_ParamLimits

0x42da,	// (0x000136aa) navi_text_pane

0x26b7,	// (0x00011a87) status_small_wait_pane_g1

0x2bd8,	// (0x00011fa8) status_small_wait_pane_g2

0x0001,

0xf912,	// (0x0001ece2) status_small_wait_pane_g

0x5c7f,	// (0x0001504f) navi_navi_icon_text_pane

0x5c87,	// (0x00015057) navi_navi_pane_g1_ParamLimits

0x5c87,	// (0x00015057) navi_navi_pane_g1

0x5c99,	// (0x00015069) navi_navi_pane_g2_ParamLimits

0x5c99,	// (0x00015069) navi_navi_pane_g2

0x0001,

0xf8e0,	// (0x0001ecb0) navi_navi_pane_g_ParamLimits

0xf8e0,	// (0x0001ecb0) navi_navi_pane_g

0x5cab,	// (0x0001507b) navi_navi_tabs_pane

0x5cb4,	// (0x00015084) navi_navi_text_pane

0x5c7f,	// (0x0001504f) navi_navi_volume_pane

0x5c5b,	// (0x0001502b) navi_text_pane_t1

0x5c4f,	// (0x0001501f) navi_icon_pane_g1

0x5ba2,	// (0x00014f72) navi_navi_text_pane_t1

0x14c9,	// (0x00010899) navi_navi_volume_pane_g1

0x14d1,	// (0x000108a1) volume_small_pane

0x5b08,	// (0x00014ed8) navi_navi_icon_text_pane_g1

0x5b10,	// (0x00014ee0) navi_navi_icon_text_pane_t1

0x42d0,	// (0x000136a0) navi_tabs_2_long_pane

0x42d0,	// (0x000136a0) navi_tabs_2_pane

0x42d0,	// (0x000136a0) navi_tabs_3_long_pane

0x42d0,	// (0x000136a0) navi_tabs_3_pane

0x42d0,	// (0x000136a0) navi_tabs_4_pane

0x14a9,	// (0x00010879) tabs_2_active_pane_ParamLimits

0x14a9,	// (0x00010879) tabs_2_active_pane

0x14b9,	// (0x00010889) tabs_2_passive_pane_ParamLimits

0x14b9,	// (0x00010889) tabs_2_passive_pane

0x1477,	// (0x00010847) tabs_3_active_pane_ParamLimits

0x1477,	// (0x00010847) tabs_3_active_pane

0x1487,	// (0x00010857) tabs_3_passive_pane_ParamLimits

0x1487,	// (0x00010857) tabs_3_passive_pane

0x1498,	// (0x00010868) tabs_3_passive_pane_cp_ParamLimits

0x1498,	// (0x00010868) tabs_3_passive_pane_cp

0x1433,	// (0x00010803) tabs_4_active_pane_ParamLimits

0x1433,	// (0x00010803) tabs_4_active_pane

0x1444,	// (0x00010814) tabs_4_passive_pane_ParamLimits

0x1444,	// (0x00010814) tabs_4_passive_pane

0x1455,	// (0x00010825) tabs_4_passive_pane_cp_ParamLimits

0x1455,	// (0x00010825) tabs_4_passive_pane_cp

0x1466,	// (0x00010836) tabs_4_passive_pane_cp2_ParamLimits

0x1466,	// (0x00010836) tabs_4_passive_pane_cp2

0x140f,	// (0x000107df) tabs_2_long_active_pane_ParamLimits

0x140f,	// (0x000107df) tabs_2_long_active_pane

0x1421,	// (0x000107f1) tabs_2_long_passive_pane_ParamLimits

0x1421,	// (0x000107f1) tabs_2_long_passive_pane

0x13d0,	// (0x000107a0) tabs_3_long_active_pane_ParamLimits

0x13d0,	// (0x000107a0) tabs_3_long_active_pane

0x13e3,	// (0x000107b3) tabs_3_long_passive_pane_ParamLimits

0x13e3,	// (0x000107b3) tabs_3_long_passive_pane

0x13fc,	// (0x000107cc) tabs_3_long_passive_pane_cp_ParamLimits

0x13fc,	// (0x000107cc) tabs_3_long_passive_pane_cp

0x1376,	// (0x00010746) volume_small_pane_g1

0x137f,	// (0x0001074f) volume_small_pane_g2

0x1388,	// (0x00010758) volume_small_pane_g3

0x1391,	// (0x00010761) volume_small_pane_g4

0x139a,	// (0x0001076a) volume_small_pane_g5

0x13a3,	// (0x00010773) volume_small_pane_g6

0x13ac,	// (0x0001077c) volume_small_pane_g7

0x13b5,	// (0x00010785) volume_small_pane_g8

0x13be,	// (0x0001078e) volume_small_pane_g9

0x13c7,	// (0x00010797) volume_small_pane_g10

0x0009,

0xf8ac,	// (0x0001ec7c) volume_small_pane_g

0x2a36,	// (0x00011e06) bg_active_tab_pane_cp2_ParamLimits

0x2a36,	// (0x00011e06) bg_active_tab_pane_cp2

0x27af,	// (0x00011b7f) tabs_3_active_pane_g1

0xc996,	// (0x0001bd66) tabs_3_active_pane_t1

0x2a36,	// (0x00011e06) bg_passive_tab_pane_cp2_ParamLimits

0x2a36,	// (0x00011e06) bg_passive_tab_pane_cp2

0x27af,	// (0x00011b7f) tabs_3_passive_pane_g1

0xc996,	// (0x0001bd66) tabs_3_passive_pane_t1

0x2a36,	// (0x00011e06) bg_active_tab_pane_cp3_ParamLimits

0x2a36,	// (0x00011e06) bg_active_tab_pane_cp3

0x27c9,	// (0x00011b99) tabs_4_active_pane_g1

0xc9a8,	// (0x0001bd78) tabs_4_active_pane_t1

0x2a36,	// (0x00011e06) bg_passive_tab_pane_cp3_ParamLimits

0x2a36,	// (0x00011e06) bg_passive_tab_pane_cp3

0x27c9,	// (0x00011b99) tabs_4_1_passive_pane_g1

0xc9a8,	// (0x0001bd78) tabs_4_1_passive_pane_t1

0x4799,	// (0x00013b69) list_highlight_pane_cp2

0xdbf1,	// (0x0001cfc1) list_set_pane_ParamLimits

0xdbf1,	// (0x0001cfc1) list_set_pane

0xdc8b,	// (0x0001d05b) main_pane_set_t1_ParamLimits

0xdc8b,	// (0x0001d05b) main_pane_set_t1

0xdcab,	// (0x0001d07b) main_pane_set_t2_ParamLimits

0xdcab,	// (0x0001d07b) main_pane_set_t2

0xdcbf,	// (0x0001d08f) main_pane_set_t3_ParamLimits

0xdcbf,	// (0x0001d08f) main_pane_set_t3

0xdcd1,	// (0x0001d0a1) main_pane_set_t4_ParamLimits

0xdcd1,	// (0x0001d0a1) main_pane_set_t4

0x0003,

0xf97c,	// (0x0001ed4c) main_pane_set_t_ParamLimits

0xf97c,	// (0x0001ed4c) main_pane_set_t

0xdce3,	// (0x0001d0b3) setting_code_pane

0xdced,	// (0x0001d0bd) setting_slider_graphic_pane

0xdced,	// (0x0001d0bd) setting_slider_pane

0xdced,	// (0x0001d0bd) setting_text_pane

0xdced,	// (0x0001d0bd) setting_volume_pane

0x0571,	// (0x0000f941) volume_set_pane

0x27a1,	// (0x00011b71) bg_set_opt_pane_cp

0x0579,	// (0x0000f949) setting_slider_pane_t1

0x0592,	// (0x0000f962) setting_slider_pane_t2

0x05ac,	// (0x0000f97c) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001e92e) setting_slider_pane_t

0x05c4,	// (0x0000f994) slider_set_pane

0x26c1,	// (0x00011a91) bg_set_opt_pane_cp2

0x27e3,	// (0x00011bb3) setting_slider_graphic_pane_g1

0x05da,	// (0x0000f9aa) setting_slider_graphic_pane_t1

0x05ea,	// (0x0000f9ba) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001e935) setting_slider_graphic_pane_t

0x05fa,	// (0x0000f9ca) slider_set_pane_cp

0x26c1,	// (0x00011a91) input_focus_pane_cp1

0x61b4,	// (0x00015584) list_set_text_pane

0x26b7,	// (0x00011a87) setting_text_pane_g1

0x26c1,	// (0x00011a91) input_focus_pane_cp2

0x26b7,	// (0x00011a87) setting_code_pane_g1

0x27ec,	// (0x00011bbc) setting_code_pane_t1

0x27fa,	// (0x00011bca) set_text_pane_t1_ParamLimits

0x27fa,	// (0x00011bca) set_text_pane_t1

0x36c8,	// (0x00012a98) set_opt_bg_pane_g1

0x36d0,	// (0x00012aa0) set_opt_bg_pane_g2

0x618e,	// (0x0001555e) set_opt_bg_pane_g3

0x36e0,	// (0x00012ab0) set_opt_bg_pane_g4

0x36e8,	// (0x00012ab8) set_opt_bg_pane_g5

0x36f0,	// (0x00012ac0) set_opt_bg_pane_g6

0x6198,	// (0x00015568) set_opt_bg_pane_g7

0x61a0,	// (0x00015570) set_opt_bg_pane_g8

0x61aa,	// (0x0001557a) set_opt_bg_pane_g9

0x0008,

0xf969,	// (0x0001ed39) set_opt_bg_pane_g

0x6181,	// (0x00015551) slider_set_pane_g1

0x153e,	// (0x0001090e) slider_set_pane_g2

0x0006,

0xf95a,	// (0x0001ed2a) slider_set_pane_g

0x14da,	// (0x000108aa) volume_set_pane_g1

0x14e2,	// (0x000108b2) volume_set_pane_g2

0x14ea,	// (0x000108ba) volume_set_pane_g3

0x14f2,	// (0x000108c2) volume_set_pane_g4

0x14fa,	// (0x000108ca) volume_set_pane_g5

0x1502,	// (0x000108d2) volume_set_pane_g6

0x150a,	// (0x000108da) volume_set_pane_g7

0x1512,	// (0x000108e2) volume_set_pane_g8

0x151a,	// (0x000108ea) volume_set_pane_g9

0x1522,	// (0x000108f2) volume_set_pane_g10

0x0009,

0xf932,	// (0x0001ed02) volume_set_pane_g

0xc9ba,	// (0x0001bd8a) indicator_pane_ParamLimits

0xc9ba,	// (0x0001bd8a) indicator_pane

0xc9e2,	// (0x0001bdb2) main_idle_pane_g2_ParamLimits

0xc9e2,	// (0x0001bdb2) main_idle_pane_g2

0xca1a,	// (0x0001bdea) main_pane_idle_g1_ParamLimits

0xca1a,	// (0x0001bdea) main_pane_idle_g1

0x2855,	// (0x00011c25) popup_clock_digital_analogue_window_ParamLimits

0x2855,	// (0x00011c25) popup_clock_digital_analogue_window

0xca41,	// (0x0001be11) soft_indicator_pane_ParamLimits

0xca41,	// (0x0001be11) soft_indicator_pane

0xca5b,	// (0x0001be2b) wallpaper_pane_ParamLimits

0xca5b,	// (0x0001be2b) wallpaper_pane

0x26b7,	// (0x00011a87) wallpaper_pane_g1

0xca6d,	// (0x0001be3d) indicator_pane_g1_ParamLimits

0xca6d,	// (0x0001be3d) indicator_pane_g1

0x6681,	// (0x00015a51) navi_navi_icon_text_pane_srt_g1

0x28a7,	// (0x00011c77) soft_indicator_pane_t1

0x28c1,	// (0x00011c91) aid_ps_area_pane

0xca83,	// (0x0001be53) aid_ps_clock_pane

0x28e0,	// (0x00011cb0) aid_ps_indicator_pane

0x28ec,	// (0x00011cbc) indicator_ps_pane_ParamLimits

0x28ec,	// (0x00011cbc) indicator_ps_pane

0x28fb,	// (0x00011ccb) power_save_pane_g1_ParamLimits

0x28fb,	// (0x00011ccb) power_save_pane_g1

0x2907,	// (0x00011cd7) power_save_pane_g2_ParamLimits

0x2907,	// (0x00011cd7) power_save_pane_g2

0x0178,	// (0x0000f548) aid_navinavi_width_pane

0x28c1,	// (0x00011c91) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001e93a) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001e93a) power_save_pane_g

0x2915,	// (0x00011ce5) power_save_pane_t1_ParamLimits

0x2915,	// (0x00011ce5) power_save_pane_t1

0xca83,	// (0x0001be53) aid_ps_clock_pane_ParamLimits

0x28e0,	// (0x00011cb0) aid_ps_indicator_pane_ParamLimits

0x2927,	// (0x00011cf7) power_save_pane_t4_ParamLimits

0x2927,	// (0x00011cf7) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001e93f) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001e93f) power_save_pane_t

0x2951,	// (0x00011d21) power_save_t3_ParamLimits

0x2951,	// (0x00011d21) power_save_t3

0x293c,	// (0x00011d0c) power_save_t2_ParamLimits

0x293c,	// (0x00011d0c) power_save_t2

0x2966,	// (0x00011d36) indicator_ps_pane_g1

0xca91,	// (0x0001be61) ai_gene_pane_ParamLimits

0xca91,	// (0x0001be61) ai_gene_pane

0xcaa8,	// (0x0001be78) ai_links_pane_ParamLimits

0xcaa8,	// (0x0001be78) ai_links_pane

0xcac0,	// (0x0001be90) indicator_pane_cp1_ParamLimits

0xcac0,	// (0x0001be90) indicator_pane_cp1

0xcacf,	// (0x0001be9f) main_pane_idle_g1_cp_ParamLimits

0xcacf,	// (0x0001be9f) main_pane_idle_g1_cp

0x299f,	// (0x00011d6f) popup_ai_links_title_window

0xcae7,	// (0x0001beb7) soft_indicator_pane_cp1_ParamLimits

0xcae7,	// (0x0001beb7) soft_indicator_pane_cp1

0x5f48,	// (0x00015318) ai_links_pane_g1

0x5f51,	// (0x00015321) grid_ai_links_pane

0xdb24,	// (0x0001cef4) ai_gene_pane_1

0x5f36,	// (0x00015306) ai_gene_pane_2

0x5f3f,	// (0x0001530f) list_highlight_pane_cp4

0xdb00,	// (0x0001ced0) cell_ai_link_pane_ParamLimits

0xdb00,	// (0x0001ced0) cell_ai_link_pane

0x5f07,	// (0x000152d7) cell_ai_link_pane_g1

0x2bd8,	// (0x00011fa8) cell_ai_link_pane_g2

0x0001,

0xf90d,	// (0x0001ecdd) cell_ai_link_pane_g

0x26c1,	// (0x00011a91) grid_highlight_cp2

0x26c1,	// (0x00011a91) bg_popup_sub_pane_cp1

0x29c2,	// (0x00011d92) popup_ai_links_title_window_t1

0x5e55,	// (0x00015225) ai_gene_pane_1_g1_ParamLimits

0x5e55,	// (0x00015225) ai_gene_pane_1_g1

0x5e61,	// (0x00015231) ai_gene_pane_1_g2_ParamLimits

0x5e61,	// (0x00015231) ai_gene_pane_1_g2

0x0001,

0xf903,	// (0x0001ecd3) ai_gene_pane_1_g_ParamLimits

0xf903,	// (0x0001ecd3) ai_gene_pane_1_g

0x5e6e,	// (0x0001523e) ai_gene_pane_1_t1_ParamLimits

0x5e6e,	// (0x0001523e) ai_gene_pane_1_t1

0x5ea2,	// (0x00015272) grid_ai_soft_ind_pane

0x5e40,	// (0x00015210) ai_gene_pane_2_t1_ParamLimits

0x5e40,	// (0x00015210) ai_gene_pane_2_t1

0xcafb,	// (0x0001becb) main_pane_empty_t1_ParamLimits

0xcafb,	// (0x0001becb) main_pane_empty_t1

0xcb13,	// (0x0001bee3) main_pane_empty_t2_ParamLimits

0xcb13,	// (0x0001bee3) main_pane_empty_t2

0xcb28,	// (0x0001bef8) main_pane_empty_t3_ParamLimits

0xcb28,	// (0x0001bef8) main_pane_empty_t3

0xcb3a,	// (0x0001bf0a) main_pane_empty_t4_ParamLimits

0xcb3a,	// (0x0001bf0a) main_pane_empty_t4

0xcb4c,	// (0x0001bf1c) main_pane_empty_t5_ParamLimits

0xcb4c,	// (0x0001bf1c) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001e944) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001e944) main_pane_empty_t

0x37c5,	// (0x00012b95) bg_popup_window_pane_ParamLimits

0x37c5,	// (0x00012b95) bg_popup_window_pane

0x5bb0,	// (0x00014f80) find_popup_pane_cp2_ParamLimits

0x5bb0,	// (0x00014f80) find_popup_pane_cp2

0x5bbc,	// (0x00014f8c) heading_pane_ParamLimits

0x5bbc,	// (0x00014f8c) heading_pane

0x26c1,	// (0x00011a91) bg_popup_sub_pane

0xda81,	// (0x0001ce51) bg_popup_window_pane_g1_ParamLimits

0xda81,	// (0x0001ce51) bg_popup_window_pane_g1

0xda90,	// (0x0001ce60) bg_popup_window_pane_g2_ParamLimits

0xda90,	// (0x0001ce60) bg_popup_window_pane_g2

0xda9c,	// (0x0001ce6c) bg_popup_window_pane_g3_ParamLimits

0xda9c,	// (0x0001ce6c) bg_popup_window_pane_g3

0xdaa8,	// (0x0001ce78) bg_popup_window_pane_g4_ParamLimits

0xdaa8,	// (0x0001ce78) bg_popup_window_pane_g4

0xdab7,	// (0x0001ce87) bg_popup_window_pane_g5_ParamLimits

0xdab7,	// (0x0001ce87) bg_popup_window_pane_g5

0xdac7,	// (0x0001ce97) bg_popup_window_pane_g6_ParamLimits

0xdac7,	// (0x0001ce97) bg_popup_window_pane_g6

0xdad3,	// (0x0001cea3) bg_popup_window_pane_g7_ParamLimits

0xdad3,	// (0x0001cea3) bg_popup_window_pane_g7

0xdae2,	// (0x0001ceb2) bg_popup_window_pane_g8_ParamLimits

0xdae2,	// (0x0001ceb2) bg_popup_window_pane_g8

0xdaf1,	// (0x0001cec1) bg_popup_window_pane_g9_ParamLimits

0xdaf1,	// (0x0001cec1) bg_popup_window_pane_g9

0x5b96,	// (0x00014f66) bg_popup_window_pane_g10_ParamLimits

0x5b96,	// (0x00014f66) bg_popup_window_pane_g10

0x0009,

0xf8cb,	// (0x0001ec9b) bg_popup_window_pane_g_ParamLimits

0xf8cb,	// (0x0001ec9b) bg_popup_window_pane_g

0x5abf,	// (0x00014e8f) bg_popup_heading_pane_ParamLimits

0x5abf,	// (0x00014e8f) bg_popup_heading_pane

0x15c6,	// (0x00010996) tabs_4_passive_pane_cp_srt_ParamLimits

0x15c6,	// (0x00010996) tabs_4_passive_pane_cp_srt

0x15d8,	// (0x000109a8) tabs_4_passive_pane_srt_ParamLimits

0x5ad3,	// (0x00014ea3) heading_pane_g2

0x15d8,	// (0x000109a8) tabs_4_passive_pane_srt

0x4dfb,	// (0x000141cb) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4dfb,	// (0x000141cb) bg_passive_tab_pane_cp3_srt

0x5adb,	// (0x00014eab) heading_pane_t1_ParamLimits

0x5adb,	// (0x00014eab) heading_pane_t1

0x5af2,	// (0x00014ec2) heading_pane_t2_ParamLimits

0x5af2,	// (0x00014ec2) heading_pane_t2

0x0001,

0xf8c6,	// (0x0001ec96) heading_pane_t_ParamLimits

0xf8c6,	// (0x0001ec96) heading_pane_t

0x55e0,	// (0x000149b0) bg_popup_heading_pane_g1

0x569b,	// (0x00014a6b) bg_popup_heading_pane_g2

0x56a5,	// (0x00014a75) bg_popup_heading_pane_g3

0x56af,	// (0x00014a7f) bg_popup_heading_pane_g4

0x56b9,	// (0x00014a89) bg_popup_heading_pane_g5

0x56c3,	// (0x00014a93) bg_popup_heading_pane_g6

0x56cb,	// (0x00014a9b) bg_popup_heading_pane_g7

0x56d3,	// (0x00014aa3) bg_popup_heading_pane_g8

0x56dd,	// (0x00014aad) bg_popup_heading_pane_g9

0x0008,

0xf882,	// (0x0001ec52) bg_popup_heading_pane_g

0x4cd9,	// (0x000140a9) bg_popup_sub_pane_g1

0x4ce9,	// (0x000140b9) bg_popup_sub_pane_g2

0x4ce1,	// (0x000140b1) bg_popup_sub_pane_g3

0x4cf9,	// (0x000140c9) bg_popup_sub_pane_g4

0x4cf1,	// (0x000140c1) bg_popup_sub_pane_g5

0x4d01,	// (0x000140d1) bg_popup_sub_pane_g6

0x4d09,	// (0x000140d9) bg_popup_sub_pane_g7

0x4d19,	// (0x000140e9) bg_popup_sub_pane_g8

0x4d11,	// (0x000140e1) bg_popup_sub_pane_g9

0x0008,

0xf85c,	// (0x0001ec2c) bg_popup_sub_pane_g

0x2a36,	// (0x00011e06) bg_popup_window_pane_cp5_ParamLimits

0x2a36,	// (0x00011e06) bg_popup_window_pane_cp5

0x2a52,	// (0x00011e22) popup_note_window_g1_ParamLimits

0x2a52,	// (0x00011e22) popup_note_window_g1

0x2a5e,	// (0x00011e2e) popup_note_window_t1_ParamLimits

0x2a5e,	// (0x00011e2e) popup_note_window_t1

0x2a74,	// (0x00011e44) popup_note_window_t2_ParamLimits

0x2a74,	// (0x00011e44) popup_note_window_t2

0x2a8a,	// (0x00011e5a) popup_note_window_t3_ParamLimits

0x2a8a,	// (0x00011e5a) popup_note_window_t3

0x2aa0,	// (0x00011e70) popup_note_window_t4_ParamLimits

0x2aa0,	// (0x00011e70) popup_note_window_t4

0x2ac8,	// (0x00011e98) popup_note_window_t5_ParamLimits

0x2ac8,	// (0x00011e98) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001e94f) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001e94f) popup_note_window_t

0x2aec,	// (0x00011ebc) bg_popup_window_pane_cp6_ParamLimits

0x2aec,	// (0x00011ebc) bg_popup_window_pane_cp6

0x555c,	// (0x0001492c) popup_note_image_window_g1_ParamLimits

0x555c,	// (0x0001492c) popup_note_image_window_g1

0x5568,	// (0x00014938) popup_note_image_window_g2_ParamLimits

0x5568,	// (0x00014938) popup_note_image_window_g2

0x0001,

0xf850,	// (0x0001ec20) popup_note_image_window_g_ParamLimits

0xf850,	// (0x0001ec20) popup_note_image_window_g

0x5581,	// (0x00014951) popup_note_image_window_t1_ParamLimits

0x5581,	// (0x00014951) popup_note_image_window_t1

0x559a,	// (0x0001496a) popup_note_image_window_t2_ParamLimits

0x559a,	// (0x0001496a) popup_note_image_window_t2

0x55b3,	// (0x00014983) popup_note_image_window_t3_ParamLimits

0x55b3,	// (0x00014983) popup_note_image_window_t3

0x0002,

0xf855,	// (0x0001ec25) popup_note_image_window_t_ParamLimits

0xf855,	// (0x0001ec25) popup_note_image_window_t

0x541d,	// (0x000147ed) bg_popup_window_pane_cp7_ParamLimits

0x541d,	// (0x000147ed) bg_popup_window_pane_cp7

0x544d,	// (0x0001481d) popup_note_wait_window_g1_ParamLimits

0x544d,	// (0x0001481d) popup_note_wait_window_g1

0x5459,	// (0x00014829) popup_note_wait_window_g2_ParamLimits

0x5459,	// (0x00014829) popup_note_wait_window_g2

0x0002,

0xf83e,	// (0x0001ec0e) popup_note_wait_window_g_ParamLimits

0xf83e,	// (0x0001ec0e) popup_note_wait_window_g

0x5471,	// (0x00014841) popup_note_wait_window_t1_ParamLimits

0x5471,	// (0x00014841) popup_note_wait_window_t1

0x5498,	// (0x00014868) popup_note_wait_window_t2_ParamLimits

0x5498,	// (0x00014868) popup_note_wait_window_t2

0x54b5,	// (0x00014885) popup_note_wait_window_t3_ParamLimits

0x54b5,	// (0x00014885) popup_note_wait_window_t3

0x54c8,	// (0x00014898) popup_note_wait_window_t4_ParamLimits

0x54c8,	// (0x00014898) popup_note_wait_window_t4

0x0004,

0xf845,	// (0x0001ec15) popup_note_wait_window_t_ParamLimits

0xf845,	// (0x0001ec15) popup_note_wait_window_t

0x54ed,	// (0x000148bd) wait_bar_pane_ParamLimits

0x54ed,	// (0x000148bd) wait_bar_pane

0x26c1,	// (0x00011a91) wait_anim_pane

0x26c1,	// (0x00011a91) wait_border_pane

0x26b7,	// (0x00011a87) wait_anim_pane_g1

0x26b7,	// (0x00011a87) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0001eace) wait_anim_pane_g

0x53c1,	// (0x00014791) wait_border_pane_g1

0x53cc,	// (0x0001479c) wait_border_pane_g2

0x53d5,	// (0x000147a5) wait_border_pane_g3

0x0002,

0xf837,	// (0x0001ec07) wait_border_pane_g

0x522c,	// (0x000145fc) bg_popup_window_pane_cp16_ParamLimits

0x522c,	// (0x000145fc) bg_popup_window_pane_cp16

0x532c,	// (0x000146fc) indicator_popup_pane_cp4_ParamLimits

0x532c,	// (0x000146fc) indicator_popup_pane_cp4

0x5340,	// (0x00014710) popup_query_data_window_t1_ParamLimits

0x5340,	// (0x00014710) popup_query_data_window_t1

0x5352,	// (0x00014722) popup_query_data_window_t2_ParamLimits

0x5352,	// (0x00014722) popup_query_data_window_t2

0x536b,	// (0x0001473b) popup_query_data_window_t3_ParamLimits

0x536b,	// (0x0001473b) popup_query_data_window_t3

0x0002,

0xf830,	// (0x0001ec00) popup_query_data_window_t_ParamLimits

0xf830,	// (0x0001ec00) popup_query_data_window_t

0x5385,	// (0x00014755) query_popup_data_pane_ParamLimits

0x5385,	// (0x00014755) query_popup_data_pane

0x5399,	// (0x00014769) query_popup_data_pane_cp1_ParamLimits

0x5399,	// (0x00014769) query_popup_data_pane_cp1

0x522c,	// (0x000145fc) bg_popup_window_pane_cp10_ParamLimits

0x522c,	// (0x000145fc) bg_popup_window_pane_cp10

0x525e,	// (0x0001462e) indicator_popup_pane_ParamLimits

0x525e,	// (0x0001462e) indicator_popup_pane

0x5280,	// (0x00014650) popup_query_code_window_t1_ParamLimits

0x5280,	// (0x00014650) popup_query_code_window_t1

0x529a,	// (0x0001466a) popup_query_code_window_t2_ParamLimits

0x529a,	// (0x0001466a) popup_query_code_window_t2

0x52e3,	// (0x000146b3) popup_query_code_window_t3_ParamLimits

0x52e3,	// (0x000146b3) popup_query_code_window_t3

0x0002,

0xf829,	// (0x0001ebf9) popup_query_code_window_t_ParamLimits

0xf829,	// (0x0001ebf9) popup_query_code_window_t

0x5312,	// (0x000146e2) query_popup_pane_ParamLimits

0x5312,	// (0x000146e2) query_popup_pane

0x2aec,	// (0x00011ebc) bg_popup_window_pane_cp15_ParamLimits

0x2aec,	// (0x00011ebc) bg_popup_window_pane_cp15

0x2b0a,	// (0x00011eda) indicator_popup_pane_cp1_ParamLimits

0x2b0a,	// (0x00011eda) indicator_popup_pane_cp1

0x2b1d,	// (0x00011eed) indicator_popup_pane_cp2_ParamLimits

0x2b1d,	// (0x00011eed) indicator_popup_pane_cp2

0x2b30,	// (0x00011f00) popup_query_data_code_window_g1_ParamLimits

0x2b30,	// (0x00011f00) popup_query_data_code_window_g1

0x2b43,	// (0x00011f13) popup_query_data_code_window_t1_ParamLimits

0x2b43,	// (0x00011f13) popup_query_data_code_window_t1

0x2b55,	// (0x00011f25) popup_query_data_code_window_t2_ParamLimits

0x2b55,	// (0x00011f25) popup_query_data_code_window_t2

0x2b67,	// (0x00011f37) popup_query_data_code_window_t3_ParamLimits

0x2b67,	// (0x00011f37) popup_query_data_code_window_t3

0x2b7d,	// (0x00011f4d) popup_query_data_code_window_t4_ParamLimits

0x2b7d,	// (0x00011f4d) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001e95a) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001e95a) popup_query_data_code_window_t

0x1287,	// (0x00010657) list_single_midp_graphic_pane_g3

0x2b95,	// (0x00011f65) query_popup_data_pane_cp2_ParamLimits

0x2ba8,	// (0x00011f78) query_popup_pane_cp2_ParamLimits

0x2ba8,	// (0x00011f78) query_popup_pane_cp2

0x26c1,	// (0x00011a91) bg_popup_window_pane_cp11

0x5224,	// (0x000145f4) heading_pane_cp5

0x2c93,	// (0x00012063) listscroll_popup_info_pane

0x26c1,	// (0x00011a91) input_focus_pane_cp3

0x2bbb,	// (0x00011f8b) query_popup_pane_t1

0x2bc9,	// (0x00011f99) list_popup_info_pane_ParamLimits

0x2bc9,	// (0x00011f99) list_popup_info_pane

0x2bd8,	// (0x00011fa8) listscroll_popup_info_pane_g1

0x2be0,	// (0x00011fb0) scroll_pane_cp7

0x2bea,	// (0x00011fba) popup_info_list_pane_t1_ParamLimits

0x2bea,	// (0x00011fba) popup_info_list_pane_t1

0x2c04,	// (0x00011fd4) popup_info_list_pane_t2_ParamLimits

0x2c04,	// (0x00011fd4) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001e963) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001e963) popup_info_list_pane_t

0x26c1,	// (0x00011a91) bg_popup_window_pane_cp12

0x669b,	// (0x00015a6b) find_popup_pane

0x27a1,	// (0x00011b71) bg_popup_window_pane_cp3

0x2c1e,	// (0x00011fee) heading_pane_cp3

0x2c2a,	// (0x00011ffa) listscroll_popup_graphic_pane

0x26c1,	// (0x00011a91) bg_popup_window_pane_cp4

0xcbae,	// (0x0001bf7e) heading_pane_cp4

0x2c93,	// (0x00012063) listscroll_popup_colour_pane

0x2c9b,	// (0x0001206b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x2c9b,	// (0x0001206b) cell_large_graphic_colour_none_popup_pane

0xcbb6,	// (0x0001bf86) grid_large_graphic_colour_popup_pane_ParamLimits

0xcbb6,	// (0x0001bf86) grid_large_graphic_colour_popup_pane

0x2cdb,	// (0x000120ab) listscroll_popup_colour_pane_g1_ParamLimits

0x2cdb,	// (0x000120ab) listscroll_popup_colour_pane_g1

0x2cf2,	// (0x000120c2) listscroll_popup_colour_pane_g2_ParamLimits

0x2cf2,	// (0x000120c2) listscroll_popup_colour_pane_g2

0x2d09,	// (0x000120d9) listscroll_popup_colour_pane_g3_ParamLimits

0x2d09,	// (0x000120d9) listscroll_popup_colour_pane_g3

0xcbda,	// (0x0001bfaa) listscroll_popup_colour_pane_g4_ParamLimits

0xcbda,	// (0x0001bfaa) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001e968) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001e968) listscroll_popup_colour_pane_g

0x2d2d,	// (0x000120fd) scroll_pane_cp6_ParamLimits

0x2d2d,	// (0x000120fd) scroll_pane_cp6

0xcbea,	// (0x0001bfba) cell_large_graphic_colour_popup_pane_ParamLimits

0xcbea,	// (0x0001bfba) cell_large_graphic_colour_popup_pane

0x2d5e,	// (0x0001212e) cell_large_graphic_colour_none_popup_pane_t1

0x26c1,	// (0x00011a91) grid_highlight_pane_cp5

0x2d6d,	// (0x0001213d) cell_large_graphic_colour_popup_pane_g1

0x2d75,	// (0x00012145) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001e971) cell_large_graphic_colour_popup_pane_g

0x2d7d,	// (0x0001214d) cell_large_graphic_colour_popup_pane_g2_copy1

0x2d86,	// (0x00012156) grid_highlight_pane_cp4

0x2d8e,	// (0x0001215e) bg_popup_window_pane_cp8_ParamLimits

0x2d8e,	// (0x0001215e) bg_popup_window_pane_cp8

0x2da9,	// (0x00012179) popup_snote_single_text_window_g1_ParamLimits

0x2da9,	// (0x00012179) popup_snote_single_text_window_g1

0x2dbb,	// (0x0001218b) popup_snote_single_text_window_t1_ParamLimits

0x2dbb,	// (0x0001218b) popup_snote_single_text_window_t1

0x2dce,	// (0x0001219e) popup_snote_single_text_window_t2_ParamLimits

0x2dce,	// (0x0001219e) popup_snote_single_text_window_t2

0x2de1,	// (0x000121b1) popup_snote_single_text_window_t3_ParamLimits

0x2de1,	// (0x000121b1) popup_snote_single_text_window_t3

0x2e1a,	// (0x000121ea) popup_snote_single_text_window_t4_ParamLimits

0x2e1a,	// (0x000121ea) popup_snote_single_text_window_t4

0x2e4e,	// (0x0001221e) popup_snote_single_text_window_t5_ParamLimits

0x2e4e,	// (0x0001221e) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001e976) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001e976) popup_snote_single_text_window_t

0x2e7d,	// (0x0001224d) bg_popup_window_pane_cp9_ParamLimits

0x2e7d,	// (0x0001224d) bg_popup_window_pane_cp9

0x2da9,	// (0x00012179) popup_snote_single_graphic_window_g1_ParamLimits

0x2da9,	// (0x00012179) popup_snote_single_graphic_window_g1

0x2e8b,	// (0x0001225b) popup_snote_single_graphic_window_g2_ParamLimits

0x2e8b,	// (0x0001225b) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001e981) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001e981) popup_snote_single_graphic_window_g

0x2e97,	// (0x00012267) popup_snote_single_graphic_window_t1_ParamLimits

0x2e97,	// (0x00012267) popup_snote_single_graphic_window_t1

0x2eaa,	// (0x0001227a) popup_snote_single_graphic_window_t2_ParamLimits

0x2eaa,	// (0x0001227a) popup_snote_single_graphic_window_t2

0x2ebd,	// (0x0001228d) popup_snote_single_graphic_window_t3_ParamLimits

0x2ebd,	// (0x0001228d) popup_snote_single_graphic_window_t3

0x2ef6,	// (0x000122c6) popup_snote_single_graphic_window_t4_ParamLimits

0x2ef6,	// (0x000122c6) popup_snote_single_graphic_window_t4

0x2f2a,	// (0x000122fa) popup_snote_single_graphic_window_t5_ParamLimits

0x2f2a,	// (0x000122fa) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001e986) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001e986) popup_snote_single_graphic_window_t

0x65dd,	// (0x000159ad) grid_graphic_popup_pane_ParamLimits

0x65dd,	// (0x000159ad) grid_graphic_popup_pane

0x6607,	// (0x000159d7) listscroll_popup_graphic_pane_g1_ParamLimits

0x6607,	// (0x000159d7) listscroll_popup_graphic_pane_g1

0xde3a,	// (0x0001d20a) listscroll_popup_graphic_pane_g2_ParamLimits

0xde3a,	// (0x0001d20a) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a6,	// (0x0001ed76) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a6,	// (0x0001ed76) listscroll_popup_graphic_pane_g

0x662f,	// (0x000159ff) scroll_pane_cp5

0xdddf,	// (0x0001d1af) cell_graphic_popup_pane_ParamLimits

0xdddf,	// (0x0001d1af) cell_graphic_popup_pane

0x655d,	// (0x0001592d) cell_graphic_popup_pane_g1

0x6565,	// (0x00015935) cell_graphic_popup_pane_g2

0x2d7d,	// (0x0001214d) cell_graphic_popup_pane_g3

0x0002,

0xf99f,	// (0x0001ed6f) cell_graphic_popup_pane_g

0x656e,	// (0x0001593e) cell_graphic_popup_pane_t2

0x2d86,	// (0x00012156) grid_highlight_pane_cp3

0x2f6b,	// (0x0001233b) list_gen_pane_ParamLimits

0x2f6b,	// (0x0001233b) list_gen_pane

0x2f9d,	// (0x0001236d) scroll_pane

0xdd96,	// (0x0001d166) bg_list_pane_g1_ParamLimits

0xdd96,	// (0x0001d166) bg_list_pane_g1

0x64d2,	// (0x000158a2) bg_list_pane_g2_ParamLimits

0x64d2,	// (0x000158a2) bg_list_pane_g2

0x64e7,	// (0x000158b7) bg_list_pane_g3_ParamLimits

0x64e7,	// (0x000158b7) bg_list_pane_g3

0x64fb,	// (0x000158cb) bg_list_pane_g4_ParamLimits

0x64fb,	// (0x000158cb) bg_list_pane_g4

0xddb3,	// (0x0001d183) bg_list_pane_g5_ParamLimits

0xddb3,	// (0x0001d183) bg_list_pane_g5

0x0004,

0xf994,	// (0x0001ed64) bg_list_pane_g_ParamLimits

0xf994,	// (0x0001ed64) bg_list_pane_g

0xdd3c,	// (0x0001d10c) list_double2_graphic_large_graphic_pane_ParamLimits

0xdd3c,	// (0x0001d10c) list_double2_graphic_large_graphic_pane

0xdd3c,	// (0x0001d10c) list_double2_graphic_pane_ParamLimits

0xdd3c,	// (0x0001d10c) list_double2_graphic_pane

0xdd3c,	// (0x0001d10c) list_double2_large_graphic_pane_ParamLimits

0xdd3c,	// (0x0001d10c) list_double2_large_graphic_pane

0xdd3c,	// (0x0001d10c) list_double2_pane_ParamLimits

0xdd3c,	// (0x0001d10c) list_double2_pane

0xdd3c,	// (0x0001d10c) list_double_graphic_heading_pane_ParamLimits

0xdd3c,	// (0x0001d10c) list_double_graphic_heading_pane

0xdd3c,	// (0x0001d10c) list_double_graphic_pane_ParamLimits

0xdd3c,	// (0x0001d10c) list_double_graphic_pane

0xdd3c,	// (0x0001d10c) list_double_heading_pane_ParamLimits

0xdd3c,	// (0x0001d10c) list_double_heading_pane

0xdd3c,	// (0x0001d10c) list_double_large_graphic_pane_ParamLimits

0xdd3c,	// (0x0001d10c) list_double_large_graphic_pane

0xdd3c,	// (0x0001d10c) list_double_number_pane_ParamLimits

0xdd3c,	// (0x0001d10c) list_double_number_pane

0xdd3c,	// (0x0001d10c) list_double_pane_ParamLimits

0xdd3c,	// (0x0001d10c) list_double_pane

0xdd3c,	// (0x0001d10c) list_double_time_pane_ParamLimits

0xdd3c,	// (0x0001d10c) list_double_time_pane

0xdd3c,	// (0x0001d10c) list_setting_number_pane_ParamLimits

0xdd3c,	// (0x0001d10c) list_setting_number_pane

0xdd3c,	// (0x0001d10c) list_setting_pane_ParamLimits

0xdd3c,	// (0x0001d10c) list_setting_pane

0xdd4e,	// (0x0001d11e) list_single_2graphic_pane_ParamLimits

0xdd4e,	// (0x0001d11e) list_single_2graphic_pane

0xdd4e,	// (0x0001d11e) list_single_graphic_heading_pane_ParamLimits

0xdd4e,	// (0x0001d11e) list_single_graphic_heading_pane

0xdd4e,	// (0x0001d11e) list_single_graphic_pane_ParamLimits

0xdd4e,	// (0x0001d11e) list_single_graphic_pane

0xdd4e,	// (0x0001d11e) list_single_heading_pane_ParamLimits

0xdd4e,	// (0x0001d11e) list_single_heading_pane

0xdd4e,	// (0x0001d11e) list_single_large_graphic_pane_ParamLimits

0xdd4e,	// (0x0001d11e) list_single_large_graphic_pane

0xdd4e,	// (0x0001d11e) list_single_number_heading_pane_ParamLimits

0xdd4e,	// (0x0001d11e) list_single_number_heading_pane

0xdd4e,	// (0x0001d11e) list_single_number_pane_ParamLimits

0xdd4e,	// (0x0001d11e) list_single_number_pane

0xdd4e,	// (0x0001d11e) list_single_pane_ParamLimits

0xdd4e,	// (0x0001d11e) list_single_pane

0x26c1,	// (0x00011a91) list_highlight_pane_cp1

0x437b,	// (0x0001374b) list_single_pane_g1_ParamLimits

0x437b,	// (0x0001374b) list_single_pane_g1

0x4c5b,	// (0x0001402b) list_single_pane_g2_ParamLimits

0x4c5b,	// (0x0001402b) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001e998) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001e998) list_single_pane_g

0x6cb8,	// (0x00016088) list_single_pane_t1_ParamLimits

0x6cb8,	// (0x00016088) list_single_pane_t1

0x437b,	// (0x0001374b) list_single_number_pane_g1_ParamLimits

0x437b,	// (0x0001374b) list_single_number_pane_g1

0x4c5b,	// (0x0001402b) list_single_number_pane_g2_ParamLimits

0x4c5b,	// (0x0001402b) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001e998) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001e998) list_single_number_pane_g

0x4c67,	// (0x00014037) list_single_number_pane_t1_ParamLimits

0x4c67,	// (0x00014037) list_single_number_pane_t1

0xdb8d,	// (0x0001cf5d) list_single_number_pane_t2_ParamLimits

0xdb8d,	// (0x0001cf5d) list_single_number_pane_t2

0x0001,

0xf955,	// (0x0001ed25) list_single_number_pane_t_ParamLimits

0xf955,	// (0x0001ed25) list_single_number_pane_t

0xcc13,	// (0x0001bfe3) list_single_graphic_pane_g1_ParamLimits

0xcc13,	// (0x0001bfe3) list_single_graphic_pane_g1

0x437b,	// (0x0001374b) list_single_graphic_pane_g2_ParamLimits

0x437b,	// (0x0001374b) list_single_graphic_pane_g2

0x4c5b,	// (0x0001402b) list_single_graphic_pane_g3_ParamLimits

0x4c5b,	// (0x0001402b) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001e991) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001e991) list_single_graphic_pane_g

0xcc1f,	// (0x0001bfef) list_single_graphic_pane_t1_ParamLimits

0xcc1f,	// (0x0001bfef) list_single_graphic_pane_t1

0x437b,	// (0x0001374b) list_single_heading_pane_g1_ParamLimits

0x437b,	// (0x0001374b) list_single_heading_pane_g1

0x4c5b,	// (0x0001402b) list_single_heading_pane_g2_ParamLimits

0x4c5b,	// (0x0001402b) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001e998) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001e998) list_single_heading_pane_g

0xcc35,	// (0x0001c005) list_single_heading_pane_t1_ParamLimits

0xcc35,	// (0x0001c005) list_single_heading_pane_t1

0xcc4b,	// (0x0001c01b) list_single_heading_pane_t2_ParamLimits

0xcc4b,	// (0x0001c01b) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001e99d) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001e99d) list_single_heading_pane_t

0x437b,	// (0x0001374b) list_single_number_heading_pane_g1_ParamLimits

0x437b,	// (0x0001374b) list_single_number_heading_pane_g1

0x4c5b,	// (0x0001402b) list_single_number_heading_pane_g2_ParamLimits

0x4c5b,	// (0x0001402b) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001e998) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001e998) list_single_number_heading_pane_g

0xcc35,	// (0x0001c005) list_single_number_heading_pane_t1_ParamLimits

0xcc35,	// (0x0001c005) list_single_number_heading_pane_t1

0x6c6c,	// (0x0001603c) list_single_number_heading_pane_t2_ParamLimits

0x6c6c,	// (0x0001603c) list_single_number_heading_pane_t2

0x6c7e,	// (0x0001604e) list_single_number_heading_pane_t3_ParamLimits

0x6c7e,	// (0x0001604e) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001e9a2) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001e9a2) list_single_number_heading_pane_t

0x4c4f,	// (0x0001401f) list_single_graphic_heading_pane_g1_ParamLimits

0x4c4f,	// (0x0001401f) list_single_graphic_heading_pane_g1

0xcc5d,	// (0x0001c02d) list_single_graphic_heading_pane_g4_ParamLimits

0xcc5d,	// (0x0001c02d) list_single_graphic_heading_pane_g4

0x4c5b,	// (0x0001402b) list_single_graphic_heading_pane_g5_ParamLimits

0x4c5b,	// (0x0001402b) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001e9a9) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001e9a9) list_single_graphic_heading_pane_g

0xcc35,	// (0x0001c005) list_single_graphic_heading_pane_t1_ParamLimits

0xcc35,	// (0x0001c005) list_single_graphic_heading_pane_t1

0xcc6e,	// (0x0001c03e) list_single_graphic_heading_pane_t2_ParamLimits

0xcc6e,	// (0x0001c03e) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001e9b0) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001e9b0) list_single_graphic_heading_pane_t

0x6cce,	// (0x0001609e) list_single_large_graphic_pane_g1_ParamLimits

0x6cce,	// (0x0001609e) list_single_large_graphic_pane_g1

0x437b,	// (0x0001374b) list_single_large_graphic_pane_g2_ParamLimits

0x437b,	// (0x0001374b) list_single_large_graphic_pane_g2

0x4c5b,	// (0x0001402b) list_single_large_graphic_pane_g3_ParamLimits

0x4c5b,	// (0x0001402b) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001e9b5) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001e9b5) list_single_large_graphic_pane_g

0x53cc,	// (0x0001479c) wait_border_pane_g2_copy1

0xcc80,	// (0x0001c050) list_single_large_graphic_pane_g4_cp2

0x6cda,	// (0x000160aa) list_single_large_graphic_pane_t1_ParamLimits

0x6cda,	// (0x000160aa) list_single_large_graphic_pane_t1

0x568f,	// (0x00014a5f) list_double_pane_g1_ParamLimits

0x568f,	// (0x00014a5f) list_double_pane_g1

0xcc88,	// (0x0001c058) list_double_pane_g2_ParamLimits

0xcc88,	// (0x0001c058) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001e9bc) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001e9bc) list_double_pane_g

0x858b,	// (0x0001795b) list_double_pane_t1_ParamLimits

0x858b,	// (0x0001795b) list_double_pane_t1

0xcc94,	// (0x0001c064) list_double_pane_t2_ParamLimits

0xcc94,	// (0x0001c064) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001e9c1) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001e9c1) list_double_pane_t

0xcca6,	// (0x0001c076) list_double2_pane_g1_ParamLimits

0xcca6,	// (0x0001c076) list_double2_pane_g1

0xccb7,	// (0x0001c087) list_double2_pane_g2_ParamLimits

0xccb7,	// (0x0001c087) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001e9c6) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001e9c6) list_double2_pane_g

0xccc3,	// (0x0001c093) list_double2_pane_t1_ParamLimits

0xccc3,	// (0x0001c093) list_double2_pane_t1

0xccd9,	// (0x0001c0a9) list_double2_pane_t2_ParamLimits

0xccd9,	// (0x0001c0a9) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001e9cb) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001e9cb) list_double2_pane_t

0x568f,	// (0x00014a5f) list_double_number_pane_g1_ParamLimits

0x568f,	// (0x00014a5f) list_double_number_pane_g1

0xcc88,	// (0x0001c058) list_double_number_pane_g2_ParamLimits

0xcc88,	// (0x0001c058) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001e9bc) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001e9bc) list_double_number_pane_g

0xcceb,	// (0x0001c0bb) list_double_number_pane_t1_ParamLimits

0xcceb,	// (0x0001c0bb) list_double_number_pane_t1

0xccfd,	// (0x0001c0cd) list_double_number_pane_t2_ParamLimits

0xccfd,	// (0x0001c0cd) list_double_number_pane_t2

0xcd13,	// (0x0001c0e3) list_double_number_pane_t3_ParamLimits

0xcd13,	// (0x0001c0e3) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001e9d0) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001e9d0) list_double_number_pane_t

0xcd25,	// (0x0001c0f5) list_double_graphic_pane_g1_ParamLimits

0xcd25,	// (0x0001c0f5) list_double_graphic_pane_g1

0xcd31,	// (0x0001c101) list_double_graphic_pane_g2_ParamLimits

0xcd31,	// (0x0001c101) list_double_graphic_pane_g2

0xcd40,	// (0x0001c110) list_double_graphic_pane_g3_ParamLimits

0xcd40,	// (0x0001c110) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001e9d7) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001e9d7) list_double_graphic_pane_g

0xcd58,	// (0x0001c128) list_double_graphic_pane_t1_ParamLimits

0xcd58,	// (0x0001c128) list_double_graphic_pane_t1

0xcd6e,	// (0x0001c13e) list_double_graphic_pane_t2_ParamLimits

0xcd6e,	// (0x0001c13e) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001e9e0) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001e9e0) list_double_graphic_pane_t

0xcd80,	// (0x0001c150) list_double2_graphic_pane_g1_ParamLimits

0xcd80,	// (0x0001c150) list_double2_graphic_pane_g1

0x4266,	// (0x00013636) list_double2_graphic_pane_g2_ParamLimits

0x4266,	// (0x00013636) list_double2_graphic_pane_g2

0xccb7,	// (0x0001c087) list_double2_graphic_pane_g3_ParamLimits

0xccb7,	// (0x0001c087) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001e9e5) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001e9e5) list_double2_graphic_pane_g

0xcd8c,	// (0x0001c15c) list_double2_graphic_pane_t1_ParamLimits

0xcd8c,	// (0x0001c15c) list_double2_graphic_pane_t1

0xcda2,	// (0x0001c172) list_double2_graphic_pane_t2_ParamLimits

0xcda2,	// (0x0001c172) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001e9ec) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001e9ec) list_double2_graphic_pane_t

0xcdb4,	// (0x0001c184) list_double_large_graphic_pane_g1_ParamLimits

0xcdb4,	// (0x0001c184) list_double_large_graphic_pane_g1

0xcdd3,	// (0x0001c1a3) list_double_large_graphic_pane_g2_ParamLimits

0xcdd3,	// (0x0001c1a3) list_double_large_graphic_pane_g2

0xcc88,	// (0x0001c058) list_double_large_graphic_pane_g3_ParamLimits

0xcc88,	// (0x0001c058) list_double_large_graphic_pane_g3

0xcde4,	// (0x0001c1b4) list_double_large_graphic_pane_g4_ParamLimits

0xcde4,	// (0x0001c1b4) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001e9f1) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001e9f1) list_double_large_graphic_pane_g

0xcdf6,	// (0x0001c1c6) list_double_large_graphic_pane_t1_ParamLimits

0xcdf6,	// (0x0001c1c6) list_double_large_graphic_pane_t1

0xce0f,	// (0x0001c1df) list_double_large_graphic_pane_t2_ParamLimits

0xce0f,	// (0x0001c1df) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001e9fc) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001e9fc) list_double_large_graphic_pane_t

0xce21,	// (0x0001c1f1) list_double2_large_graphic_pane_g1_ParamLimits

0xce21,	// (0x0001c1f1) list_double2_large_graphic_pane_g1

0xcca6,	// (0x0001c076) list_double2_large_graphic_pane_g2_ParamLimits

0xcca6,	// (0x0001c076) list_double2_large_graphic_pane_g2

0xccb7,	// (0x0001c087) list_double2_large_graphic_pane_g3_ParamLimits

0xccb7,	// (0x0001c087) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001ea01) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001ea01) list_double2_large_graphic_pane_g

0xce2d,	// (0x0001c1fd) list_double2_large_graphic_pane_t1_ParamLimits

0xce2d,	// (0x0001c1fd) list_double2_large_graphic_pane_t1

0xce43,	// (0x0001c213) list_double2_large_graphic_pane_t2_ParamLimits

0xce43,	// (0x0001c213) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001ea08) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001ea08) list_double2_large_graphic_pane_t

0xce55,	// (0x0001c225) list_double_heading_pane_g1_ParamLimits

0xce55,	// (0x0001c225) list_double_heading_pane_g1

0xce66,	// (0x0001c236) list_double_heading_pane_g2_ParamLimits

0xce66,	// (0x0001c236) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001ea0d) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001ea0d) list_double_heading_pane_g

0xce72,	// (0x0001c242) list_double_heading_pane_t1_ParamLimits

0xce72,	// (0x0001c242) list_double_heading_pane_t1

0xce88,	// (0x0001c258) list_double_heading_pane_t2_ParamLimits

0xce88,	// (0x0001c258) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001ea12) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001ea12) list_double_heading_pane_t

0x3187,	// (0x00012557) list_double_graphic_heading_pane_g1_ParamLimits

0x3187,	// (0x00012557) list_double_graphic_heading_pane_g1

0xce55,	// (0x0001c225) list_double_graphic_heading_pane_g2_ParamLimits

0xce55,	// (0x0001c225) list_double_graphic_heading_pane_g2

0xce66,	// (0x0001c236) list_double_graphic_heading_pane_g3_ParamLimits

0xce66,	// (0x0001c236) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001ea17) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001ea17) list_double_graphic_heading_pane_g

0xce9a,	// (0x0001c26a) list_double_graphic_heading_pane_t1_ParamLimits

0xce9a,	// (0x0001c26a) list_double_graphic_heading_pane_t1

0xceb0,	// (0x0001c280) list_double_graphic_heading_pane_t2_ParamLimits

0xceb0,	// (0x0001c280) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001ea1e) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001ea1e) list_double_graphic_heading_pane_t

0xcdd3,	// (0x0001c1a3) list_double_time_pane_g1_ParamLimits

0xcdd3,	// (0x0001c1a3) list_double_time_pane_g1

0xcc88,	// (0x0001c058) list_double_time_pane_g2_ParamLimits

0xcc88,	// (0x0001c058) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0001ea23) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0001ea23) list_double_time_pane_g

0xcec2,	// (0x0001c292) list_double_time_pane_t1_ParamLimits

0xcec2,	// (0x0001c292) list_double_time_pane_t1

0xced8,	// (0x0001c2a8) list_double_time_pane_t2_ParamLimits

0xced8,	// (0x0001c2a8) list_double_time_pane_t2

0xceea,	// (0x0001c2ba) list_double_time_pane_t3_ParamLimits

0xceea,	// (0x0001c2ba) list_double_time_pane_t3

0xcefc,	// (0x0001c2cc) list_double_time_pane_t4_ParamLimits

0xcefc,	// (0x0001c2cc) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001ea28) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001ea28) list_double_time_pane_t

0x4266,	// (0x00013636) list_setting_pane_g1_ParamLimits

0x4266,	// (0x00013636) list_setting_pane_g1

0xccb7,	// (0x0001c087) list_setting_pane_g2_ParamLimits

0xccb7,	// (0x0001c087) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001ea31) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001ea31) list_setting_pane_g

0xcf0e,	// (0x0001c2de) list_setting_pane_t1_ParamLimits

0xcf0e,	// (0x0001c2de) list_setting_pane_t1

0xcf25,	// (0x0001c2f5) list_setting_pane_t2_ParamLimits

0xcf25,	// (0x0001c2f5) list_setting_pane_t2

0x0002,

0xf666,	// (0x0001ea36) list_setting_pane_t_ParamLimits

0xf666,	// (0x0001ea36) list_setting_pane_t

0xcf64,	// (0x0001c334) set_value_pane_cp_ParamLimits

0xcf64,	// (0x0001c334) set_value_pane_cp

0x4266,	// (0x00013636) list_setting_number_pane_g1_ParamLimits

0x4266,	// (0x00013636) list_setting_number_pane_g1

0xccb7,	// (0x0001c087) list_setting_number_pane_g2_ParamLimits

0xccb7,	// (0x0001c087) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0001ea31) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0001ea31) list_setting_number_pane_g

0xcf70,	// (0x0001c340) list_setting_number_pane_t1_ParamLimits

0xcf70,	// (0x0001c340) list_setting_number_pane_t1

0xcf84,	// (0x0001c354) list_setting_number_pane_t2_ParamLimits

0xcf84,	// (0x0001c354) list_setting_number_pane_t2

0xcf9b,	// (0x0001c36b) list_setting_number_pane_t3_ParamLimits

0xcf9b,	// (0x0001c36b) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001ea3d) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001ea3d) list_setting_number_pane_t

0xcf64,	// (0x0001c334) set_value_pane_ParamLimits

0xcf64,	// (0x0001c334) set_value_pane

0x346c,	// (0x0001283c) bg_set_opt_pane_ParamLimits

0x346c,	// (0x0001283c) bg_set_opt_pane

0x348d,	// (0x0001285d) set_value_pane_t1

0x349b,	// (0x0001286b) slider_set_pane_cp3

0x34a4,	// (0x00012874) volume_small_pane_cp

0x34ad,	// (0x0001287d) list_form_gen_pane

0x34b6,	// (0x00012886) scroll_pane_cp8

0xcfde,	// (0x0001c3ae) form_field_data_pane_ParamLimits

0xcfde,	// (0x0001c3ae) form_field_data_pane

0xcff5,	// (0x0001c3c5) form_field_data_wide_pane_ParamLimits

0xcff5,	// (0x0001c3c5) form_field_data_wide_pane

0xd015,	// (0x0001c3e5) form_field_popup_pane_ParamLimits

0xd015,	// (0x0001c3e5) form_field_popup_pane

0xd02d,	// (0x0001c3fd) form_field_popup_wide_pane_ParamLimits

0xd02d,	// (0x0001c3fd) form_field_popup_wide_pane

0x3551,	// (0x00012921) form_field_slider_pane_ParamLimits

0x3551,	// (0x00012921) form_field_slider_pane

0x3564,	// (0x00012934) form_field_slider_wide_pane_ParamLimits

0x3564,	// (0x00012934) form_field_slider_wide_pane

0x3577,	// (0x00012947) data_form_pane

0xd04e,	// (0x0001c41e) form_field_data_pane_t1

0x35a5,	// (0x00012975) input_focus_pane

0x35b3,	// (0x00012983) data_form_wide_pane

0x35df,	// (0x000129af) form_field_data_wide_pane_t1

0x2d9b,	// (0x0001216b) input_focus_pane_cp6

0xd068,	// (0x0001c438) form_field_popup_pane_t1

0x35a5,	// (0x00012975) input_focus_pane_cp7

0x3616,	// (0x000129e6) list_form_pane

0x362a,	// (0x000129fa) form_field_popup_wide_pane_t1

0x35a5,	// (0x00012975) input_focus_pane_cp8

0x363c,	// (0x00012a0c) list_form_wide_pane

0xd08a,	// (0x0001c45a) form_field_slider_pane_t1_ParamLimits

0xd08a,	// (0x0001c45a) form_field_slider_pane_t1

0xd0a2,	// (0x0001c472) form_field_slider_pane_t2_ParamLimits

0xd0a2,	// (0x0001c472) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001ea4d) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001ea4d) form_field_slider_pane_t

0x2a36,	// (0x00011e06) input_focus_pane_cp9_ParamLimits

0x2a36,	// (0x00011e06) input_focus_pane_cp9

0xd0b7,	// (0x0001c487) slider_cont_pane_ParamLimits

0xd0b7,	// (0x0001c487) slider_cont_pane

0x3688,	// (0x00012a58) form_field_slider_wide_pane_t1_ParamLimits

0x3688,	// (0x00012a58) form_field_slider_wide_pane_t1

0x369a,	// (0x00012a6a) form_field_slider_wide_pane_t2_ParamLimits

0x369a,	// (0x00012a6a) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001ea52) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001ea52) form_field_slider_wide_pane_t

0x2a36,	// (0x00011e06) input_focus_pane_cp10_ParamLimits

0x2a36,	// (0x00011e06) input_focus_pane_cp10

0xd0cb,	// (0x0001c49b) slider_cont_pane_cp1_ParamLimits

0xd0cb,	// (0x0001c49b) slider_cont_pane_cp1

0xd0df,	// (0x0001c4af) slider_form_pane_cp

0x36c8,	// (0x00012a98) input_focus_pane_g1

0x36d0,	// (0x00012aa0) input_focus_pane_g2

0x36d8,	// (0x00012aa8) input_focus_pane_g3

0x36e0,	// (0x00012ab0) input_focus_pane_g4

0x36e8,	// (0x00012ab8) input_focus_pane_g5

0x36f0,	// (0x00012ac0) input_focus_pane_g6

0x36f8,	// (0x00012ac8) input_focus_pane_g7

0x3700,	// (0x00012ad0) input_focus_pane_g8

0x3708,	// (0x00012ad8) input_focus_pane_g9

0x26b7,	// (0x00011a87) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001ea57) input_focus_pane_g

0x53d5,	// (0x000147a5) wait_border_pane_g3_copy1

0xd0e7,	// (0x0001c4b7) data_form_pane_t1

0x26b7,	// (0x00011a87) wait_anim_pane_g1_copy1

0xdd20,	// (0x0001d0f0) data_form_wide_pane_t1

0xd101,	// (0x0001c4d1) list_form_graphic_pane_cp_ParamLimits

0xd101,	// (0x0001c4d1) list_form_graphic_pane_cp

0x6329,	// (0x000156f9) slider_form_pane_g1

0x6332,	// (0x00015702) slider_form_pane_g2

0x0006,

0xf985,	// (0x0001ed55) slider_form_pane_g

0xd101,	// (0x0001c4d1) list_form_graphic_pane_ParamLimits

0xd101,	// (0x0001c4d1) list_form_graphic_pane

0x3760,	// (0x00012b30) list_form_graphic_pane_g1

0x3768,	// (0x00012b38) list_form_graphic_pane_t1_ParamLimits

0x3768,	// (0x00012b38) list_form_graphic_pane_t1

0x27a1,	// (0x00011b71) list_highlight_pane_cp5_ParamLimits

0x27a1,	// (0x00011b71) list_highlight_pane_cp5

0xd113,	// (0x0001c4e3) find_pane_g1

0x3786,	// (0x00012b56) input_find_pane

0xd11c,	// (0x0001c4ec) input_find_pane_g1_ParamLimits

0xd11c,	// (0x0001c4ec) input_find_pane_g1

0xd128,	// (0x0001c4f8) input_find_pane_t1_ParamLimits

0xd128,	// (0x0001c4f8) input_find_pane_t1

0xd13d,	// (0x0001c50d) input_find_pane_t2_ParamLimits

0xd13d,	// (0x0001c50d) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001ea6c) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001ea6c) input_find_pane_t

0x37c5,	// (0x00012b95) input_focus_pane_cp5_ParamLimits

0x37c5,	// (0x00012b95) input_focus_pane_cp5

0x37df,	// (0x00012baf) bg_popup_window_pane_cp2_ParamLimits

0x37df,	// (0x00012baf) bg_popup_window_pane_cp2

0x37ec,	// (0x00012bbc) listscroll_menu_pane_ParamLimits

0x37ec,	// (0x00012bbc) listscroll_menu_pane

0xd15e,	// (0x0001c52e) popup_submenu_window_ParamLimits

0xd15e,	// (0x0001c52e) popup_submenu_window

0x3824,	// (0x00012bf4) find_popup_pane_g1

0x382c,	// (0x00012bfc) input_popup_find_pane_cp

0x37c5,	// (0x00012b95) input_focus_pane_cp4_ParamLimits

0x37c5,	// (0x00012b95) input_focus_pane_cp4

0x3842,	// (0x00012c12) input_popup_find_pane_t1_ParamLimits

0x3842,	// (0x00012c12) input_popup_find_pane_t1

0x26c1,	// (0x00011a91) bg_popup_sub_pane_cp

0x3870,	// (0x00012c40) listscroll_popup_sub_pane

0x3878,	// (0x00012c48) list_submenu_pane_ParamLimits

0x3878,	// (0x00012c48) list_submenu_pane

0x3889,	// (0x00012c59) scroll_pane_cp4

0x3891,	// (0x00012c61) list_single_popup_submenu_pane_ParamLimits

0x3891,	// (0x00012c61) list_single_popup_submenu_pane

0x38a5,	// (0x00012c75) list_single_popup_submenu_pane_g1

0x38ad,	// (0x00012c7d) list_single_popup_submenu_pane_t1_ParamLimits

0x38ad,	// (0x00012c7d) list_single_popup_submenu_pane_t1

0x2a36,	// (0x00011e06) bg_active_tab_pane_cp1_ParamLimits

0x2a36,	// (0x00011e06) bg_active_tab_pane_cp1

0x38c2,	// (0x00012c92) tabs_2_active_pane_g1

0xd198,	// (0x0001c568) tabs_2_active_pane_t1

0x2a36,	// (0x00011e06) bg_passive_tab_pane_cp1_ParamLimits

0x2a36,	// (0x00011e06) bg_passive_tab_pane_cp1

0x38c2,	// (0x00012c92) tabs_2_passive_pane_g1

0xd198,	// (0x0001c568) tabs_2_passive_pane_t1

0x27a1,	// (0x00011b71) bg_active_tab_pane_cp4

0xd1aa,	// (0x0001c57a) tabs_2_long_active_pane_t1

0x4799,	// (0x00013b69) bg_passive_tab_pane_cp4

0x128f,	// (0x0001065f) list_single_midp_graphic_pane_g4_ParamLimits

0x27a1,	// (0x00011b71) bg_active_tab_pane_cp5

0xd1bd,	// (0x0001c58d) tabs_3_long_active_pane_t1

0x4799,	// (0x00013b69) bg_passive_tab_pane_cp5

0x128f,	// (0x0001065f) list_single_midp_graphic_pane_g4

0x27a1,	// (0x00011b71) bg_popup_window_pane_cp13_ParamLimits

0x27a1,	// (0x00011b71) bg_popup_window_pane_cp13

0x3924,	// (0x00012cf4) listscroll_popup_fast_pane_ParamLimits

0x3924,	// (0x00012cf4) listscroll_popup_fast_pane

0x3933,	// (0x00012d03) grid_popup_fast_pane_ParamLimits

0x3933,	// (0x00012d03) grid_popup_fast_pane

0x3945,	// (0x00012d15) scroll_pane_cp9_ParamLimits

0x3945,	// (0x00012d15) scroll_pane_cp9

0x825a,	// (0x0001762a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x825a,	// (0x0001762a) list_single_graphic_hl_pane_t1_cp2

0x3969,	// (0x00012d39) input_focus_pane_cp20_ParamLimits

0x3969,	// (0x00012d39) input_focus_pane_cp20

0x3977,	// (0x00012d47) query_popup_data_pane_t1_ParamLimits

0x3977,	// (0x00012d47) query_popup_data_pane_t1

0x398a,	// (0x00012d5a) query_popup_data_pane_t2_ParamLimits

0x398a,	// (0x00012d5a) query_popup_data_pane_t2

0x39d0,	// (0x00012da0) query_popup_data_pane_t3_ParamLimits

0x39d0,	// (0x00012da0) query_popup_data_pane_t3

0x3a11,	// (0x00012de1) query_popup_data_pane_t4_ParamLimits

0x3a11,	// (0x00012de1) query_popup_data_pane_t4

0x3a4d,	// (0x00012e1d) query_popup_data_pane_t5_ParamLimits

0x3a4d,	// (0x00012e1d) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001ea71) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001ea71) query_popup_data_pane_t

0x36c8,	// (0x00012a98) bg_set_opt_pane_g1

0x36d0,	// (0x00012aa0) bg_set_opt_pane_g2

0x36d8,	// (0x00012aa8) bg_set_opt_pane_g3

0x36e0,	// (0x00012ab0) bg_set_opt_pane_g4

0x36e8,	// (0x00012ab8) bg_set_opt_pane_g5

0x36f0,	// (0x00012ac0) bg_set_opt_pane_g6

0x36f8,	// (0x00012ac8) bg_set_opt_pane_g7

0x3700,	// (0x00012ad0) bg_set_opt_pane_g8

0x3708,	// (0x00012ad8) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001ea7c) bg_set_opt_pane_g

0x089f,	// (0x0000fc6f) control_top_pane_stacon_ParamLimits

0x089f,	// (0x0000fc6f) control_top_pane_stacon

0x08f2,	// (0x0000fcc2) signal_pane_stacon_ParamLimits

0x08f2,	// (0x0000fcc2) signal_pane_stacon

0x40d0,	// (0x000134a0) stacon_top_pane_g1_ParamLimits

0x40d0,	// (0x000134a0) stacon_top_pane_g1

0x0917,	// (0x0000fce7) title_pane_stacon_ParamLimits

0x0917,	// (0x0000fce7) title_pane_stacon

0x0941,	// (0x0000fd11) uni_indicator_pane_stacon_ParamLimits

0x0941,	// (0x0000fd11) uni_indicator_pane_stacon

0x0956,	// (0x0000fd26) battery_pane_stacon_ParamLimits

0x0956,	// (0x0000fd26) battery_pane_stacon

0x099a,	// (0x0000fd6a) control_bottom_pane_stacon_ParamLimits

0x099a,	// (0x0000fd6a) control_bottom_pane_stacon

0x09bd,	// (0x0000fd8d) navi_pane_stacon_ParamLimits

0x09bd,	// (0x0000fd8d) navi_pane_stacon

0x40f2,	// (0x000134c2) stacon_bottom_pane_g1_ParamLimits

0x40f2,	// (0x000134c2) stacon_bottom_pane_g1

0x0602,	// (0x0000f9d2) aid_levels_signal_lsc_ParamLimits

0x0602,	// (0x0000f9d2) aid_levels_signal_lsc

0x0618,	// (0x0000f9e8) signal_pane_stacon_g1_ParamLimits

0x0618,	// (0x0000f9e8) signal_pane_stacon_g1

0x062c,	// (0x0000f9fc) signal_pane_stacon_g2_ParamLimits

0x062c,	// (0x0000f9fc) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001ea8f) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001ea8f) signal_pane_stacon_g

0x0661,	// (0x0000fa31) title_pane_stacon_t1_ParamLimits

0x0661,	// (0x0000fa31) title_pane_stacon_t1

0x3a91,	// (0x00012e61) uni_indicator_pane_stacon_g1

0x3a9b,	// (0x00012e6b) uni_indicator_pane_stacon_g2

0x3aa5,	// (0x00012e75) uni_indicator_pane_stacon_g3

0x3aaf,	// (0x00012e7f) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001ea9b) uni_indicator_pane_stacon_g

0x0686,	// (0x0000fa56) control_top_pane_stacon_g1

0x068e,	// (0x0000fa5e) control_top_pane_stacon_t1_ParamLimits

0x068e,	// (0x0000fa5e) control_top_pane_stacon_t1

0x06c5,	// (0x0000fa95) aid_levels_battery_lsc_ParamLimits

0x06c5,	// (0x0000fa95) aid_levels_battery_lsc

0x06dc,	// (0x0000faac) battery_pane_stacon_g1_ParamLimits

0x06dc,	// (0x0000faac) battery_pane_stacon_g1

0x06ef,	// (0x0000fabf) battery_pane_stacon_g2_ParamLimits

0x06ef,	// (0x0000fabf) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001eaa4) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001eaa4) battery_pane_stacon_g

0x072d,	// (0x0000fafd) navi_icon_pane_stacon

0x0741,	// (0x0000fb11) navi_navi_pane_stacon

0x072d,	// (0x0000fafd) navi_text_pane_stacon

0x0686,	// (0x0000fa56) control_bottom_pane_stacon_g1

0x0755,	// (0x0000fb25) control_bottom_pane_stacon_t1_ParamLimits

0x0755,	// (0x0000fb25) control_bottom_pane_stacon_t1

0xd1cf,	// (0x0001c59f) grid_app_pane_ParamLimits

0xd1cf,	// (0x0001c59f) grid_app_pane

0xd207,	// (0x0001c5d7) scroll_pane_cp15_ParamLimits

0xd207,	// (0x0001c5d7) scroll_pane_cp15

0xd21c,	// (0x0001c5ec) cell_app_pane_ParamLimits

0xd21c,	// (0x0001c5ec) cell_app_pane

0xd261,	// (0x0001c631) cell_app_pane_g1_ParamLimits

0xd261,	// (0x0001c631) cell_app_pane_g1

0x3b56,	// (0x00012f26) cell_app_pane_g2_ParamLimits

0x3b56,	// (0x00012f26) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001eaa9) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001eaa9) cell_app_pane_g

0xd285,	// (0x0001c655) cell_app_pane_t1_ParamLimits

0xd285,	// (0x0001c655) cell_app_pane_t1

0x3b79,	// (0x00012f49) grid_highlight_pane_ParamLimits

0x3b79,	// (0x00012f49) grid_highlight_pane

0x36c8,	// (0x00012a98) cell_highlight_pane_g1

0x36d0,	// (0x00012aa0) cell_highlight_pane_g2

0x36d8,	// (0x00012aa8) cell_highlight_pane_g3

0x36e0,	// (0x00012ab0) cell_highlight_pane_g4

0x36e8,	// (0x00012ab8) cell_highlight_pane_g5

0x36f0,	// (0x00012ac0) cell_highlight_pane_g6

0x36f8,	// (0x00012ac8) cell_highlight_pane_g7

0x3700,	// (0x00012ad0) cell_highlight_pane_g8

0x3708,	// (0x00012ad8) cell_highlight_pane_g9

0x26b7,	// (0x00011a87) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001ea57) cell_highlight_pane_g

0x3b8a,	// (0x00012f5a) bg_scroll_pane

0x079f,	// (0x0000fb6f) scroll_handle_pane

0x3bd1,	// (0x00012fa1) scroll_bg_pane_g1

0x3be6,	// (0x00012fb6) scroll_bg_pane_g2

0x3bfe,	// (0x00012fce) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001eaae) scroll_bg_pane_g

0x3c13,	// (0x00012fe3) scroll_handle_focus_pane_ParamLimits

0x3c13,	// (0x00012fe3) scroll_handle_focus_pane

0x3bd1,	// (0x00012fa1) scroll_handle_pane_g1

0x3c20,	// (0x00012ff0) scroll_handle_pane_g2

0x3bfe,	// (0x00012fce) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001eab5) scroll_handle_pane_g

0x37c5,	// (0x00012b95) bg_popup_sub_pane_cp21_ParamLimits

0x37c5,	// (0x00012b95) bg_popup_sub_pane_cp21

0x3c34,	// (0x00013004) popup_fep_japan_predictive_window_t1_ParamLimits

0x3c34,	// (0x00013004) popup_fep_japan_predictive_window_t1

0x3c4e,	// (0x0001301e) popup_fep_japan_predictive_window_t2_ParamLimits

0x3c4e,	// (0x0001301e) popup_fep_japan_predictive_window_t2

0x3c81,	// (0x00013051) popup_fep_japan_predictive_window_t3_ParamLimits

0x3c81,	// (0x00013051) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001eabc) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001eabc) popup_fep_japan_predictive_window_t

0x26c1,	// (0x00011a91) bg_popup_sub_pane_cp23

0x3cb8,	// (0x00013088) listscroll_japin_cand_pane

0x3cc0,	// (0x00013090) popup_fep_japan_candidate_window_t1

0x3cce,	// (0x0001309e) candidate_pane_ParamLimits

0x3cce,	// (0x0001309e) candidate_pane

0x3ce0,	// (0x000130b0) scroll_pane_cp30

0x3ce8,	// (0x000130b8) list_single_popup_jap_candidate_pane_ParamLimits

0x3ce8,	// (0x000130b8) list_single_popup_jap_candidate_pane

0x26c1,	// (0x00011a91) list_highlight_pane_cp30

0x3cfd,	// (0x000130cd) list_single_popup_jap_candidate_pane_t1

0x3d0c,	// (0x000130dc) level_1_signal

0x3d1e,	// (0x000130ee) level_2_signal

0x3d31,	// (0x00013101) level_3_signal

0x3d44,	// (0x00013114) level_4_signal

0x3d57,	// (0x00013127) level_5_signal

0x3d6a,	// (0x0001313a) level_6_signal

0x3d7d,	// (0x0001314d) level_7_signal

0x3d0c,	// (0x000130dc) level_1_battery

0x3d1e,	// (0x000130ee) level_2_battery

0x3d31,	// (0x00013101) level_3_battery

0x3d44,	// (0x00013114) level_4_battery

0x3d57,	// (0x00013127) level_5_battery

0x3d6a,	// (0x0001313a) level_6_battery

0x3d7d,	// (0x0001314d) level_7_battery

0x3da8,	// (0x00013178) list_menu_pane_ParamLimits

0x3da8,	// (0x00013178) list_menu_pane

0x3dbe,	// (0x0001318e) scroll_pane_cp25_ParamLimits

0x3dbe,	// (0x0001318e) scroll_pane_cp25

0x3dd7,	// (0x000131a7) list_double2_graphic_pane_cp2_ParamLimits

0x3dd7,	// (0x000131a7) list_double2_graphic_pane_cp2

0x3dd7,	// (0x000131a7) list_double2_large_graphic_pane_cp2_ParamLimits

0x3dd7,	// (0x000131a7) list_double2_large_graphic_pane_cp2

0x3dd7,	// (0x000131a7) list_double2_pane_cp2_ParamLimits

0x3dd7,	// (0x000131a7) list_double2_pane_cp2

0x3dd7,	// (0x000131a7) list_double_graphic_pane_cp2_ParamLimits

0x3dd7,	// (0x000131a7) list_double_graphic_pane_cp2

0x3dd7,	// (0x000131a7) list_double_large_graphic_pane_cp2_ParamLimits

0x3dd7,	// (0x000131a7) list_double_large_graphic_pane_cp2

0x3dd7,	// (0x000131a7) list_double_number_pane_cp2_ParamLimits

0x3dd7,	// (0x000131a7) list_double_number_pane_cp2

0x3dd7,	// (0x000131a7) list_double_pane_cp2_ParamLimits

0x3dd7,	// (0x000131a7) list_double_pane_cp2

0xd29c,	// (0x0001c66c) list_single_2graphic_pane_cp2_ParamLimits

0xd29c,	// (0x0001c66c) list_single_2graphic_pane_cp2

0xd29c,	// (0x0001c66c) list_single_graphic_heading_pane_cp2_ParamLimits

0xd29c,	// (0x0001c66c) list_single_graphic_heading_pane_cp2

0xd29c,	// (0x0001c66c) list_single_graphic_pane_cp2_ParamLimits

0xd29c,	// (0x0001c66c) list_single_graphic_pane_cp2

0xd29c,	// (0x0001c66c) list_single_heading_pane_cp2_ParamLimits

0xd29c,	// (0x0001c66c) list_single_heading_pane_cp2

0x3e14,	// (0x000131e4) list_single_large_graphic_pane_cp2_ParamLimits

0x3e14,	// (0x000131e4) list_single_large_graphic_pane_cp2

0xd29c,	// (0x0001c66c) list_single_number_heading_pane_cp2_ParamLimits

0xd29c,	// (0x0001c66c) list_single_number_heading_pane_cp2

0xd29c,	// (0x0001c66c) list_single_number_pane_cp2_ParamLimits

0xd29c,	// (0x0001c66c) list_single_number_pane_cp2

0xd29c,	// (0x0001c66c) list_single_pane_cp2_ParamLimits

0xd29c,	// (0x0001c66c) list_single_pane_cp2

0x3e90,	// (0x00013260) bg_popup_sub_pane_cp22

0x0851,	// (0x0000fc21) popup_side_volume_key_window_g1

0x087b,	// (0x0000fc4b) popup_side_volume_key_window_t1

0x0897,	// (0x0000fc67) volume_small_pane_cp1

0x2a36,	// (0x00011e06) bg_popup_sub_pane_cp24_ParamLimits

0x2a36,	// (0x00011e06) bg_popup_sub_pane_cp24

0x3ea6,	// (0x00013276) fep_china_uni_candidate_pane_ParamLimits

0x3ea6,	// (0x00013276) fep_china_uni_candidate_pane

0x3eba,	// (0x0001328a) fep_china_uni_entry_pane

0x3eca,	// (0x0001329a) popup_fep_china_uni_window_g1

0x3ee6,	// (0x000132b6) fep_china_uni_entry_pane_g1

0x3eee,	// (0x000132be) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0001eaed) fep_china_uni_entry_pane_g

0x3ef6,	// (0x000132c6) fep_entry_item_pane

0x3f00,	// (0x000132d0) fep_candidate_item_pane

0x3f08,	// (0x000132d8) fep_china_uni_candidate_pane_g1

0x3f10,	// (0x000132e0) fep_china_uni_candidate_pane_g2

0x3f18,	// (0x000132e8) fep_china_uni_candidate_pane_g3

0x3f20,	// (0x000132f0) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0001eaf2) fep_china_uni_candidate_pane_g

0x26b7,	// (0x00011a87) fep_entry_item_pane_g1

0x3f28,	// (0x000132f8) fep_entry_item_pane_t1_ParamLimits

0x3f28,	// (0x000132f8) fep_entry_item_pane_t1

0x3f3e,	// (0x0001330e) fep_candidate_item_pane_t1_ParamLimits

0x3f3e,	// (0x0001330e) fep_candidate_item_pane_t1

0x3f53,	// (0x00013323) fep_candidate_item_pane_t2_ParamLimits

0x3f53,	// (0x00013323) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001eafb) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001eafb) fep_candidate_item_pane_t

0x27a1,	// (0x00011b71) list_highlight_pane_cp31_ParamLimits

0x27a1,	// (0x00011b71) list_highlight_pane_cp31

0x3f65,	// (0x00013335) level_1_signal_lsc

0x3f6e,	// (0x0001333e) level_2_signal_lsc

0x3f77,	// (0x00013347) level_3_signal_lsc

0x3f80,	// (0x00013350) level_4_signal_lsc

0x3f89,	// (0x00013359) level_5_signal_lsc

0x3f92,	// (0x00013362) level_6_signal_lsc

0x3f9b,	// (0x0001336b) level_7_signal_lsc

0x3f9b,	// (0x0001336b) level_1_battery_lsc

0x3fa4,	// (0x00013374) level_2_battery_lsc

0x3fad,	// (0x0001337d) level_3_battery_lsc

0x3fb6,	// (0x00013386) level_4_battery_lsc

0x3fbf,	// (0x0001338f) level_5_battery_lsc

0x3fc8,	// (0x00013398) level_6_battery_lsc

0x3f65,	// (0x00013335) level_7_battery_lsc

0x3fd1,	// (0x000133a1) scroll_handle_focus_pane_g1

0x3fda,	// (0x000133aa) scroll_handle_focus_pane_g2

0x3fe3,	// (0x000133b3) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0001eb00) scroll_handle_focus_pane_g

0xd329,	// (0x0001c6f9) list_single_2graphic_pane_g1_ParamLimits

0xd329,	// (0x0001c6f9) list_single_2graphic_pane_g1

0xcc5d,	// (0x0001c02d) list_single_2graphic_pane_g2_ParamLimits

0xcc5d,	// (0x0001c02d) list_single_2graphic_pane_g2

0x4c5b,	// (0x0001402b) list_single_2graphic_pane_g3_ParamLimits

0x4c5b,	// (0x0001402b) list_single_2graphic_pane_g3

0xd335,	// (0x0001c705) list_single_2graphic_pane_g4_ParamLimits

0xd335,	// (0x0001c705) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001eb07) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001eb07) list_single_2graphic_pane_g

0xd346,	// (0x0001c716) list_single_2graphic_pane_t1_ParamLimits

0xd346,	// (0x0001c716) list_single_2graphic_pane_t1

0xd374,	// (0x0001c744) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd374,	// (0x0001c744) list_double2_graphic_large_graphic_pane_g1

0xcca6,	// (0x0001c076) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xcca6,	// (0x0001c076) list_double2_graphic_large_graphic_pane_g2

0xccb7,	// (0x0001c087) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xccb7,	// (0x0001c087) list_double2_graphic_large_graphic_pane_g3

0xd386,	// (0x0001c756) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd386,	// (0x0001c756) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0001eb10) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0001eb10) list_double2_graphic_large_graphic_pane_g

0xd392,	// (0x0001c762) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xd392,	// (0x0001c762) list_double2_graphic_large_graphic_pane_t1

0xd3a8,	// (0x0001c778) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xd3a8,	// (0x0001c778) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001eb19) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001eb19) list_double2_graphic_large_graphic_pane_t

0x41ba,	// (0x0001358a) popup_fast_swap_window_ParamLimits

0x41ba,	// (0x0001358a) popup_fast_swap_window

0x41d6,	// (0x000135a6) popup_side_volume_key_window

0x41f2,	// (0x000135c2) stacon_top_pane

0x41fc,	// (0x000135cc) status_pane_ParamLimits

0x41fc,	// (0x000135cc) status_pane

0xd3ba,	// (0x0001c78a) status_small_pane

0x26c1,	// (0x00011a91) control_pane

0x26c1,	// (0x00011a91) stacon_bottom_pane

0x34b6,	// (0x00012886) scroll_pane_cp121

0x34ad,	// (0x0001287d) set_content_pane

0x407b,	// (0x0001344b) bg_active_tab_pane_g1_cp1

0x4084,	// (0x00013454) bg_active_tab_pane_g2_cp1

0x408d,	// (0x0001345d) bg_active_tab_pane_g3_cp1

0x407b,	// (0x0001344b) bg_passive_tab_pane_g1_cp1

0x4084,	// (0x00013454) bg_passive_tab_pane_g2_cp1

0x408d,	// (0x0001345d) bg_passive_tab_pane_g3_cp1

0x4096,	// (0x00013466) bg_active_tab_pane_g1_cp2

0x4084,	// (0x00013454) bg_active_tab_pane_g2_cp2

0x409f,	// (0x0001346f) bg_active_tab_pane_g3_cp2

0x4096,	// (0x00013466) bg_passive_tab_pane_g1_cp2

0x4084,	// (0x00013454) bg_passive_tab_pane_g2_cp2

0x409f,	// (0x0001346f) bg_passive_tab_pane_g3_cp2

0x40a8,	// (0x00013478) bg_active_tab_pane_g1_cp3

0x4084,	// (0x00013454) bg_active_tab_pane_g2_cp3

0x40b1,	// (0x00013481) bg_active_tab_pane_g3_cp3

0x40a8,	// (0x00013478) bg_passive_tab_pane_g1_cp3

0x4084,	// (0x00013454) bg_passive_tab_pane_g2_cp3

0x40b1,	// (0x00013481) bg_passive_tab_pane_g3_cp3

0x40ba,	// (0x0001348a) bg_active_tab_pane_g1_cp4

0x4084,	// (0x00013454) bg_active_tab_pane_g2_cp4

0x40c5,	// (0x00013495) bg_active_tab_pane_g3_cp4

0x40ba,	// (0x0001348a) bg_passive_tab_pane_g1_cp4

0x4084,	// (0x00013454) bg_passive_tab_pane_g2_cp4

0x40c5,	// (0x00013495) bg_passive_tab_pane_g3_cp4

0x410e,	// (0x000134de) bg_active_tab_pane_g1_cp5

0x4084,	// (0x00013454) bg_active_tab_pane_g2_cp5

0x4117,	// (0x000134e7) bg_active_tab_pane_g3_cp5

0x410e,	// (0x000134de) bg_passive_tab_pane_g1_cp5

0x4084,	// (0x00013454) bg_passive_tab_pane_g2_cp5

0x4117,	// (0x000134e7) bg_passive_tab_pane_g3_cp5

0x6a41,	// (0x00015e11) list_set_graphic_pane_ParamLimits

0x6a41,	// (0x00015e11) list_set_graphic_pane

0x26c1,	// (0x00011a91) bg_set_opt_pane_cp4

0x413d,	// (0x0001350d) list_set_graphic_pane_g1_ParamLimits

0x413d,	// (0x0001350d) list_set_graphic_pane_g1

0x4149,	// (0x00013519) list_set_graphic_pane_g2_ParamLimits

0x4149,	// (0x00013519) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0001eb1e) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0001eb1e) list_set_graphic_pane_g

0x0009,

0xfac3,	// (0x0001ee93) volume_small_pane_cp_g

0x416d,	// (0x0001353d) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x416d,	// (0x0001353d) list_double2_large_graphic_pane_g1_cp2

0x4179,	// (0x00013549) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4179,	// (0x00013549) list_double2_large_graphic_pane_g2_cp2

0x418a,	// (0x0001355a) list_double2_large_graphic_pane_g3_cp2

0x4192,	// (0x00013562) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4192,	// (0x00013562) list_double2_large_graphic_pane_t1_cp2

0x41a8,	// (0x00013578) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x41a8,	// (0x00013578) list_double2_large_graphic_pane_t2_cp2

0x5eb4,	// (0x00015284) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5eb4,	// (0x00015284) list_double_large_graphic_pane_g1_cp2

0x5ec5,	// (0x00015295) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5ec5,	// (0x00015295) list_double_large_graphic_pane_g2_cp2

0x4323,	// (0x000136f3) list_double_large_graphic_pane_g3_cp2

0x5ed6,	// (0x000152a6) list_double_large_graphic_pane_g4_cp

0x5ede,	// (0x000152ae) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5ede,	// (0x000152ae) list_double_large_graphic_pane_t1_cp2

0x5ef5,	// (0x000152c5) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5ef5,	// (0x000152c5) list_double_large_graphic_pane_t2_cp2

0x4215,	// (0x000135e5) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4215,	// (0x000135e5) list_double2_graphic_pane_g1_cp2

0x4223,	// (0x000135f3) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4223,	// (0x000135f3) list_double2_graphic_pane_g2_cp2

0x4234,	// (0x00013604) list_double2_graphic_pane_g3_cp2

0x423e,	// (0x0001360e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x423e,	// (0x0001360e) list_double2_graphic_pane_t1_cp2

0x4254,	// (0x00013624) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4254,	// (0x00013624) list_double2_graphic_pane_t2_cp2

0x4266,	// (0x00013636) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4266,	// (0x00013636) list_single_number_heading_pane_g1_cp2

0x4272,	// (0x00013642) list_single_number_heading_pane_g2_cp2

0x427a,	// (0x0001364a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x427a,	// (0x0001364a) list_single_number_heading_pane_t1_cp2

0x4290,	// (0x00013660) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4290,	// (0x00013660) list_single_number_heading_pane_t2_cp2

0x42a2,	// (0x00013672) list_single_number_heading_pane_t3_cp2_ParamLimits

0x42a2,	// (0x00013672) list_single_number_heading_pane_t3_cp2

0x4266,	// (0x00013636) list_single_heading_pane_g1_cp2_ParamLimits

0x4266,	// (0x00013636) list_single_heading_pane_g1_cp2

0x4272,	// (0x00013642) list_single_heading_pane_g2_cp2

0x427a,	// (0x0001364a) list_single_heading_pane_t1_cp2_ParamLimits

0x427a,	// (0x0001364a) list_single_heading_pane_t1_cp2

0x5cbc,	// (0x0001508c) list_single_heading_pane_t2_cp2_ParamLimits

0x5cbc,	// (0x0001508c) list_single_heading_pane_t2_cp2

0x5c04,	// (0x00014fd4) list_double_graphic_pane_g1_cp2_ParamLimits

0x5c04,	// (0x00014fd4) list_double_graphic_pane_g1_cp2

0x5c10,	// (0x00014fe0) list_double_graphic_pane_g2_cp2_ParamLimits

0x5c10,	// (0x00014fe0) list_double_graphic_pane_g2_cp2

0x5c1f,	// (0x00014fef) list_double_graphic_pane_g3_cp2

0x5c27,	// (0x00014ff7) list_double_graphic_pane_t1_cp2_ParamLimits

0x5c27,	// (0x00014ff7) list_double_graphic_pane_t1_cp2

0x5c3d,	// (0x0001500d) list_double_graphic_pane_t2_cp2_ParamLimits

0x5c3d,	// (0x0001500d) list_double_graphic_pane_t2_cp2

0x4317,	// (0x000136e7) list_double_number_pane_g1_cp2_ParamLimits

0x4317,	// (0x000136e7) list_double_number_pane_g1_cp2

0x4323,	// (0x000136f3) list_double_number_pane_g2_cp2

0x5bc8,	// (0x00014f98) list_double_number_pane_t1_cp2_ParamLimits

0x5bc8,	// (0x00014f98) list_double_number_pane_t1_cp2

0x5bdc,	// (0x00014fac) list_double_number_pane_t2_cp2_ParamLimits

0x5bdc,	// (0x00014fac) list_double_number_pane_t2_cp2

0x5bf2,	// (0x00014fc2) list_double_number_pane_t3_cp2_ParamLimits

0x5bf2,	// (0x00014fc2) list_double_number_pane_t3_cp2

0x5ab1,	// (0x00014e81) list_single_graphic_pane_g1_cp2_ParamLimits

0x5ab1,	// (0x00014e81) list_single_graphic_pane_g1_cp2

0x437b,	// (0x0001374b) list_single_graphic_pane_g2_cp2_ParamLimits

0x437b,	// (0x0001374b) list_single_graphic_pane_g2_cp2

0x4387,	// (0x00013757) list_single_graphic_pane_g3_cp2

0x5a87,	// (0x00014e57) list_single_graphic_pane_t1_cp2_ParamLimits

0x5a87,	// (0x00014e57) list_single_graphic_pane_t1_cp2

0x437b,	// (0x0001374b) list_single_number_pane_g1_cp2_ParamLimits

0x437b,	// (0x0001374b) list_single_number_pane_g1_cp2

0x4387,	// (0x00013757) list_single_number_pane_g2_cp2

0x5a87,	// (0x00014e57) list_single_number_pane_t1_cp2_ParamLimits

0x5a87,	// (0x00014e57) list_single_number_pane_t1_cp2

0x5a9d,	// (0x00014e6d) list_single_number_pane_t2_cp2_ParamLimits

0x5a9d,	// (0x00014e6d) list_single_number_pane_t2_cp2

0x4179,	// (0x00013549) list_double2_pane_g1_cp2_ParamLimits

0x4179,	// (0x00013549) list_double2_pane_g1_cp2

0x418a,	// (0x0001355a) list_double2_pane_g2_cp2

0x42ef,	// (0x000136bf) list_double2_pane_t1_cp2_ParamLimits

0x42ef,	// (0x000136bf) list_double2_pane_t1_cp2

0x4305,	// (0x000136d5) list_double2_pane_t2_cp2_ParamLimits

0x4305,	// (0x000136d5) list_double2_pane_t2_cp2

0x4317,	// (0x000136e7) list_double_pane_g1_cp2_ParamLimits

0x4317,	// (0x000136e7) list_double_pane_g1_cp2

0x4323,	// (0x000136f3) list_double_pane_g2_cp2

0x432b,	// (0x000136fb) list_double_pane_t1_cp2_ParamLimits

0x432b,	// (0x000136fb) list_double_pane_t1_cp2

0x4341,	// (0x00013711) list_double_pane_t2_cp2_ParamLimits

0x4341,	// (0x00013711) list_double_pane_t2_cp2

0x436b,	// (0x0001373b) list_single_pane_cp2_g3

0x437b,	// (0x0001374b) list_single_pane_g1_cp2_ParamLimits

0x437b,	// (0x0001374b) list_single_pane_g1_cp2

0x4387,	// (0x00013757) list_single_pane_g2_cp2

0x438f,	// (0x0001375f) list_single_pane_t1_cp2_ParamLimits

0x438f,	// (0x0001375f) list_single_pane_t1_cp2

0x43a7,	// (0x00013777) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x43a7,	// (0x00013777) list_single_large_graphic_pane_g1_cp2

0x43b3,	// (0x00013783) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x43b3,	// (0x00013783) list_single_large_graphic_pane_g2_cp2

0x43bf,	// (0x0001378f) list_single_large_graphic_pane_g3_cp2

0x43c7,	// (0x00013797) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x43c7,	// (0x00013797) list_single_large_graphic_pane_g4_cp1

0x43e1,	// (0x000137b1) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x43e1,	// (0x000137b1) list_single_large_graphic_pane_t1_cp2

0x5a53,	// (0x00014e23) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5a53,	// (0x00014e23) list_single_graphic_heading_pane_g1_cp2

0x5a20,	// (0x00014df0) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5a20,	// (0x00014df0) list_single_graphic_heading_pane_g4_cp2

0x4387,	// (0x00013757) list_single_graphic_heading_pane_g5_cp2

0x5a5f,	// (0x00014e2f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5a5f,	// (0x00014e2f) list_single_graphic_heading_pane_t1_cp2

0x5a75,	// (0x00014e45) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5a75,	// (0x00014e45) list_single_graphic_heading_pane_t2_cp2

0x5a14,	// (0x00014de4) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5a14,	// (0x00014de4) list_single_2graphic_pane_g1_cp2

0x5a20,	// (0x00014df0) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5a20,	// (0x00014df0) list_single_2graphic_pane_g2_cp2

0x4387,	// (0x00013757) list_single_2graphic_pane_g3_cp2

0x5a31,	// (0x00014e01) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5a31,	// (0x00014e01) list_single_2graphic_pane_g4_cp2

0x5a3d,	// (0x00014e0d) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5a3d,	// (0x00014e0d) list_single_2graphic_pane_t1_cp2

0x26b7,	// (0x00011a87) list_highlight_pane_g10_cp1

0x55e0,	// (0x000149b0) list_highlight_pane_g1_cp1

0x55e8,	// (0x000149b8) list_highlight_pane_g2_cp1

0x55f0,	// (0x000149c0) list_highlight_pane_g3_cp1

0x55f8,	// (0x000149c8) list_highlight_pane_g4_cp1

0x5600,	// (0x000149d0) list_highlight_pane_g5_cp1

0x5608,	// (0x000149d8) list_highlight_pane_g6_cp1

0x5610,	// (0x000149e0) list_highlight_pane_g7_cp1

0x5618,	// (0x000149e8) list_highlight_pane_g8_cp1

0x5620,	// (0x000149f0) list_highlight_pane_g9_cp1

0xda38,	// (0x0001ce08) form_field_slider_pane_t3

0xda46,	// (0x0001ce16) form_field_slider_pane_t4

0x551c,	// (0x000148ec) slider_form_pane_ParamLimits

0x551c,	// (0x000148ec) slider_form_pane

0x26c1,	// (0x00011a91) control_abbreviations

0x26c1,	// (0x00011a91) control_conventions

0x26c1,	// (0x00011a91) control_definitions

0x26c1,	// (0x00011a91) format_table_attribute

0x5d06,	// (0x000150d6) bg_popup_preview_window_pane_g9

0x26c1,	// (0x00011a91) format_table_data2

0x26c1,	// (0x00011a91) format_table_data3

0x26c1,	// (0x00011a91) format_table_data_example

0x0008,

0x26c1,	// (0x00011a91) intro_purpose

0xf8e5,	// (0x0001ecb5) bg_popup_preview_window_pane_g

0x26c1,	// (0x00011a91) texts_category

0x26c1,	// (0x00011a91) texts_graphics

0x43f7,	// (0x000137c7) text_digital

0x4406,	// (0x000137d6) text_primary

0x4415,	// (0x000137e5) text_primary_small

0x4424,	// (0x000137f4) text_secondary

0x4433,	// (0x00013803) text_title

0x6531,	// (0x00015901) bg_passive_tab_pane_g1_cp3_srt

0x4084,	// (0x00013454) bg_passive_tab_pane_g2_cp3_srt

0x653a,	// (0x0001590a) bg_passive_tab_pane_g3_cp3_srt

0x2a36,	// (0x00011e06) bg_active_tab_pane_cp3_srt_ParamLimits

0x2a36,	// (0x00011e06) bg_active_tab_pane_cp3_srt

0x6543,	// (0x00015913) tabs_4_active_pane_srt_g1

0xddc9,	// (0x0001d199) tabs_4_active_pane_srt_t1_ParamLimits

0xddc9,	// (0x0001d199) tabs_4_active_pane_srt_t1

0x6531,	// (0x00015901) bg_active_tab_pane_g1_cp3_copy1

0x4084,	// (0x00013454) bg_active_tab_pane_g2_cp3_copy1

0x653a,	// (0x0001590a) bg_active_tab_pane_g3_cp3_copy1

0x27a1,	// (0x00011b71) tabs_2_long_active_pane_srt_ParamLimits

0x27a1,	// (0x00011b71) tabs_2_long_active_pane_srt

0x27a1,	// (0x00011b71) tabs_2_long_passive_pane_srt_ParamLimits

0x27a1,	// (0x00011b71) tabs_2_long_passive_pane_srt

0x4799,	// (0x00013b69) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4799,	// (0x00013b69) bg_passive_tab_pane_cp4_srt

0x615c,	// (0x0001552c) bg_passive_tab_pane_g1_cp4_srt

0x4084,	// (0x00013454) bg_passive_tab_pane_g2_cp4_srt

0x6165,	// (0x00015535) bg_passive_tab_pane_g3_cp4_srt

0x27a1,	// (0x00011b71) bg_active_tab_pane_cp4_srt_ParamLimits

0x27a1,	// (0x00011b71) bg_active_tab_pane_cp4_srt

0xdbb5,	// (0x0001cf85) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdbb5,	// (0x0001cf85) tabs_2_long_active_pane_srt_t1

0x615c,	// (0x0001552c) bg_active_tab_pane_g1_cp4_srt

0x4084,	// (0x00013454) bg_active_tab_pane_g2_cp4_srt

0x6165,	// (0x00015535) bg_active_tab_pane_g3_cp4_srt

0x2a36,	// (0x00011e06) tabs_3_long_active_pane_srt_ParamLimits

0x2a36,	// (0x00011e06) tabs_3_long_active_pane_srt

0x2a36,	// (0x00011e06) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2a36,	// (0x00011e06) tabs_3_long_passive_pane_cp_srt

0x2a36,	// (0x00011e06) tabs_3_long_passive_pane_srt_ParamLimits

0x2a36,	// (0x00011e06) tabs_3_long_passive_pane_srt

0x4799,	// (0x00013b69) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4799,	// (0x00013b69) bg_passive_tab_pane_cp5_srt

0x410e,	// (0x000134de) bg_passive_tab_pane_g1_cp5_srt

0x4084,	// (0x00013454) bg_passive_tab_pane_g2_cp5_srt

0x4117,	// (0x000134e7) bg_passive_tab_pane_g3_cp5_srt

0x27a1,	// (0x00011b71) bg_active_tab_pane_cp5_srt_ParamLimits

0x27a1,	// (0x00011b71) bg_active_tab_pane_cp5_srt

0xdb9f,	// (0x0001cf6f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdb9f,	// (0x0001cf6f) tabs_3_long_active_pane_srt_t1

0x410e,	// (0x000134de) bg_active_tab_pane_g1_cp5_srt

0x4084,	// (0x00013454) bg_active_tab_pane_g2_cp5_srt

0x4117,	// (0x000134e7) bg_active_tab_pane_g3_cp5_srt

0x613c,	// (0x0001550c) navi_text_pane_srt_t1

0x6134,	// (0x00015504) navi_icon_pane_srt_g1

0x4608,	// (0x000139d8) midp_editing_number_pane_srt

0x4442,	// (0x00013812) midp_ticker_pane_srt

0x4610,	// (0x000139e0) midp_ticker_pane_srt_g1

0x4618,	// (0x000139e8) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001eb3d) midp_ticker_pane_srt_g

0x4620,	// (0x000139f0) midp_ticker_pane_srt_t1

0x6125,	// (0x000154f5) midp_editing_number_pane_t1_copy1

0xd3c5,	// (0x0001c795) listscroll_midp_pane

0xd3c5,	// (0x0001c795) midp_form_pane

0x44ba,	// (0x0001388a) midp_info_popup_window_ParamLimits

0x44ba,	// (0x0001388a) midp_info_popup_window

0x37c5,	// (0x00012b95) bg_popup_sub_pane_cp50_ParamLimits

0x37c5,	// (0x00012b95) bg_popup_sub_pane_cp50

0x5218,	// (0x000145e8) listscroll_midp_info_pane_ParamLimits

0x5218,	// (0x000145e8) listscroll_midp_info_pane

0x51f8,	// (0x000145c8) listscroll_form_midp_pane_ParamLimits

0x51f8,	// (0x000145c8) listscroll_form_midp_pane

0x5204,	// (0x000145d4) scroll_bar_cp050

0x51f8,	// (0x000145c8) list_midp_pane

0x72cb,	// (0x0001669b) signal_pane_g2_cp

0x5112,	// (0x000144e2) listscroll_midp_info_pane_t1_ParamLimits

0x5112,	// (0x000144e2) listscroll_midp_info_pane_t1

0x512a,	// (0x000144fa) listscroll_midp_info_pane_t2_ParamLimits

0x512a,	// (0x000144fa) listscroll_midp_info_pane_t2

0x5168,	// (0x00014538) listscroll_midp_info_pane_t3_ParamLimits

0x5168,	// (0x00014538) listscroll_midp_info_pane_t3

0x51a2,	// (0x00014572) listscroll_midp_info_pane_t4_ParamLimits

0x51a2,	// (0x00014572) listscroll_midp_info_pane_t4

0x0003,

0xf820,	// (0x0001ebf0) listscroll_midp_info_pane_t_ParamLimits

0xf820,	// (0x0001ebf0) listscroll_midp_info_pane_t

0x3889,	// (0x00012c59) scroll_pane_cp21

0x50b0,	// (0x00014480) form_midp_field_choice_group_pane

0x50b9,	// (0x00014489) form_midp_field_text_pane

0x50f8,	// (0x000144c8) form_midp_field_time_pane

0x5100,	// (0x000144d0) form_midp_gauge_slider_pane

0x5109,	// (0x000144d9) form_midp_gauge_wait_pane

0x26c1,	// (0x00011a91) form_midp_image_pane

0xda22,	// (0x0001cdf2) list_single_midp_pane_ParamLimits

0xda22,	// (0x0001cdf2) list_single_midp_pane

0xda01,	// (0x0001cdd1) form_midp_field_text_pane_t1

0x4dfb,	// (0x000141cb) input_focus_pane_cp050

0x5071,	// (0x00014441) list_midp_form_text_pane

0x5009,	// (0x000143d9) form_midp_field_choice_group_pane_t1

0x5017,	// (0x000143e7) input_focus_pane_cp051

0x502b,	// (0x000143fb) list_midp_choice_pane

0x26c1,	// (0x00011a91) status_idle_pane

0x4fed,	// (0x000143bd) form_midp_field_time_pane_t1

0x26b7,	// (0x00011a87) wait_anim_pane_g2_copy1

0x4ffb,	// (0x000143cb) form_midp_field_time_pane_t2

0x0001,

0x4568,	// (0x00013938) aid_navinavi_width_2_pane

0xf81b,	// (0x0001ebeb) form_midp_field_time_pane_t

0x26c1,	// (0x00011a91) input_focus_pane_cp052

0x26c1,	// (0x00011a91) bg_input_focus_pane_cp040

0x4fad,	// (0x0001437d) form_midp_gauge_slider_pane_t1

0x4fbb,	// (0x0001438b) form_midp_gauge_slider_pane_t2

0xd9e5,	// (0x0001cdb5) form_midp_gauge_slider_pane_t3

0xd9f3,	// (0x0001cdc3) form_midp_gauge_slider_pane_t4

0x0003,

0xf812,	// (0x0001ebe2) form_midp_gauge_slider_pane_t

0x4fe5,	// (0x000143b5) form_midp_slider_pane

0x27a1,	// (0x00011b71) bg_input_focus_pane_cp041_ParamLimits

0x27a1,	// (0x00011b71) bg_input_focus_pane_cp041

0x4f7a,	// (0x0001434a) form_midp_gauge_wait_pane_t1_ParamLimits

0x4f7a,	// (0x0001434a) form_midp_gauge_wait_pane_t1

0x4f8c,	// (0x0001435c) form_midp_gauge_wait_pane_t2_ParamLimits

0x4f8c,	// (0x0001435c) form_midp_gauge_wait_pane_t2

0x0001,

0xf80d,	// (0x0001ebdd) form_midp_gauge_wait_pane_t_ParamLimits

0xf80d,	// (0x0001ebdd) form_midp_gauge_wait_pane_t

0x4f9e,	// (0x0001436e) form_midp_wait_pane_ParamLimits

0x4f9e,	// (0x0001436e) form_midp_wait_pane

0x4f44,	// (0x00014314) form_midp_image_pane_g1

0x4f4d,	// (0x0001431d) form_midp_image_pane_t1

0x4f5c,	// (0x0001432c) form_midp_image_pane_t2

0x4f6b,	// (0x0001433b) form_midp_image_pane_t3

0x0002,

0xf806,	// (0x0001ebd6) form_midp_image_pane_t

0x4f2c,	// (0x000142fc) list_single_midp_pane_g1

0x4f35,	// (0x00014305) list_single_midp_pane_t1

0xd9d1,	// (0x0001cda1) list_midp_form_item_pane_ParamLimits

0xd9d1,	// (0x0001cda1) list_midp_form_item_pane

0x4510,	// (0x000138e0) list_midp_form_item_pane_t1

0x451f,	// (0x000138ef) midp_ticker_pane_g1

0x452b,	// (0x000138fb) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0001eb23) midp_ticker_pane_g

0x4537,	// (0x00013907) midp_ticker_pane_t1

0x63a9,	// (0x00015779) midp_editing_number_pane_t1

0x6387,	// (0x00015757) midp_editing_number_pane

0x6396,	// (0x00015766) midp_ticker_pane

0x60ed,	// (0x000154bd) ai_message_heading_pane

0x26c1,	// (0x00011a91) bg_popup_window_pane_cp14

0x60f5,	// (0x000154c5) listscroll_ai_message_pane

0x6077,	// (0x00015447) ai_message_heading_pane_g1_ParamLimits

0x6077,	// (0x00015447) ai_message_heading_pane_g1

0x6083,	// (0x00015453) ai_message_heading_pane_g2_ParamLimits

0x6083,	// (0x00015453) ai_message_heading_pane_g2

0x608f,	// (0x0001545f) ai_message_heading_pane_g3_ParamLimits

0x608f,	// (0x0001545f) ai_message_heading_pane_g3

0x609b,	// (0x0001546b) ai_message_heading_pane_g4_ParamLimits

0x609b,	// (0x0001546b) ai_message_heading_pane_g4

0x0003,

0xf947,	// (0x0001ed17) ai_message_heading_pane_g_ParamLimits

0xf947,	// (0x0001ed17) ai_message_heading_pane_g

0x60a7,	// (0x00015477) ai_message_heading_pane_t1_ParamLimits

0x60a7,	// (0x00015477) ai_message_heading_pane_t1

0x60c1,	// (0x00015491) ai_message_heading_pane_t2_ParamLimits

0x60c1,	// (0x00015491) ai_message_heading_pane_t2

0x0001,

0xf950,	// (0x0001ed20) ai_message_heading_pane_t_ParamLimits

0xf950,	// (0x0001ed20) ai_message_heading_pane_t

0x60d3,	// (0x000154a3) bg_popup_heading_pane_cp1_ParamLimits

0x60d3,	// (0x000154a3) bg_popup_heading_pane_cp1

0x6065,	// (0x00015435) list_ai_message_pane_ParamLimits

0x6065,	// (0x00015435) list_ai_message_pane

0x3889,	// (0x00012c59) scroll_pane_cp10

0x6001,	// (0x000153d1) list_ai_message_pane_g1

0x6009,	// (0x000153d9) list_ai_message_pane_g2

0x0001,

0xf924,	// (0x0001ecf4) list_ai_message_pane_g

0x6011,	// (0x000153e1) list_ai_message_pane_t1_ParamLimits

0x6011,	// (0x000153e1) list_ai_message_pane_t1

0x6026,	// (0x000153f6) list_ai_message_pane_t2_ParamLimits

0x6026,	// (0x000153f6) list_ai_message_pane_t2

0x603b,	// (0x0001540b) list_ai_message_pane_t3_ParamLimits

0x603b,	// (0x0001540b) list_ai_message_pane_t3

0x6050,	// (0x00015420) list_ai_message_pane_t4_ParamLimits

0x6050,	// (0x00015420) list_ai_message_pane_t4

0x0003,

0xf929,	// (0x0001ecf9) list_ai_message_pane_t_ParamLimits

0xf929,	// (0x0001ecf9) list_ai_message_pane_t

0xdb6c,	// (0x0001cf3c) cell_ai_soft_ind_pane_ParamLimits

0xdb6c,	// (0x0001cf3c) cell_ai_soft_ind_pane

0x4549,	// (0x00013919) cell_ai_soft_ind_pane_g1_ParamLimits

0x4549,	// (0x00013919) cell_ai_soft_ind_pane_g1

0x26c1,	// (0x00011a91) grid_highlight_cp1

0x4556,	// (0x00013926) text_secondary_cp56_ParamLimits

0x4556,	// (0x00013926) text_secondary_cp56

0x5fc1,	// (0x00015391) example_general_pane_ParamLimits

0x5fc1,	// (0x00015391) example_general_pane

0x5fcd,	// (0x0001539d) example_parent_pane_g1_ParamLimits

0x5fcd,	// (0x0001539d) example_parent_pane_g1

0x5fd9,	// (0x000153a9) example_parent_pane_t1_ParamLimits

0x5fd9,	// (0x000153a9) example_parent_pane_t1

0xbf77,	// (0x0001b347) popup_preview_text_window_ParamLimits

0xbf77,	// (0x0001b347) popup_preview_text_window

0x4373,	// (0x00013743) list_single_pane_cp2_g4

0x2aec,	// (0x00011ebc) bg_popup_preview_window_pane_ParamLimits

0x2aec,	// (0x00011ebc) bg_popup_preview_window_pane

0x5d0e,	// (0x000150de) popup_preview_text_window_t1_ParamLimits

0x5d0e,	// (0x000150de) popup_preview_text_window_t1

0x5d2c,	// (0x000150fc) popup_preview_text_window_t2_ParamLimits

0x5d2c,	// (0x000150fc) popup_preview_text_window_t2

0x5d75,	// (0x00015145) popup_preview_text_window_t3_ParamLimits

0x5d75,	// (0x00015145) popup_preview_text_window_t3

0x5dba,	// (0x0001518a) popup_preview_text_window_t4_ParamLimits

0x5dba,	// (0x0001518a) popup_preview_text_window_t4

0x0004,

0xf8f8,	// (0x0001ecc8) popup_preview_text_window_t_ParamLimits

0xf8f8,	// (0x0001ecc8) popup_preview_text_window_t

0x5e38,	// (0x00015208) scroll_pane_cp11

0x4cd9,	// (0x000140a9) bg_popup_preview_window_pane_g1

0x5cce,	// (0x0001509e) bg_popup_preview_window_pane_g2

0x5cd6,	// (0x000150a6) bg_popup_preview_window_pane_g3

0x5cde,	// (0x000150ae) bg_popup_preview_window_pane_g4

0x5ce6,	// (0x000150b6) bg_popup_preview_window_pane_g5

0x5cee,	// (0x000150be) bg_popup_preview_window_pane_g6

0x5cf6,	// (0x000150c6) bg_popup_preview_window_pane_g7

0x5cfe,	// (0x000150ce) bg_popup_preview_window_pane_g8

0x0184,	// (0x0000f554) aid_popup_width_pane

0xbef3,	// (0x0001b2c3) popup_midp_note_alarm_window_ParamLimits

0xbef3,	// (0x0001b2c3) popup_midp_note_alarm_window

0x3577,	// (0x00012947) data_form_pane_ParamLimits

0xd044,	// (0x0001c414) form_field_data_pane_g1

0xd04e,	// (0x0001c41e) form_field_data_pane_t1_ParamLimits

0x35a5,	// (0x00012975) input_focus_pane_ParamLimits

0x35b3,	// (0x00012983) data_form_wide_pane_ParamLimits

0x35bf,	// (0x0001298f) form_field_data_wide_pane_g1

0x35df,	// (0x000129af) form_field_data_wide_pane_t1_ParamLimits

0x2d9b,	// (0x0001216b) input_focus_pane_cp6_ParamLimits

0xd18a,	// (0x0001c55a) input_popup_find_pane_g1_ParamLimits

0xd18a,	// (0x0001c55a) input_popup_find_pane_g1

0x0700,	// (0x0000fad0) aid_navi_side_left_pane

0x0715,	// (0x0000fae5) aid_navi_side_right_pane

0x56e7,	// (0x00014ab7) bg_popup_window_pane_cp30_ParamLimits

0x56e7,	// (0x00014ab7) bg_popup_window_pane_cp30

0x5761,	// (0x00014b31) popup_midp_note_alarm_window_g1_ParamLimits

0x5761,	// (0x00014b31) popup_midp_note_alarm_window_g1

0x5791,	// (0x00014b61) popup_midp_note_alarm_window_t1_ParamLimits

0x5791,	// (0x00014b61) popup_midp_note_alarm_window_t1

0x5832,	// (0x00014c02) popup_midp_note_alarm_window_t2_ParamLimits

0x5832,	// (0x00014c02) popup_midp_note_alarm_window_t2

0x58e0,	// (0x00014cb0) popup_midp_note_alarm_window_t3_ParamLimits

0x58e0,	// (0x00014cb0) popup_midp_note_alarm_window_t3

0x5912,	// (0x00014ce2) popup_midp_note_alarm_window_t4_ParamLimits

0x5912,	// (0x00014ce2) popup_midp_note_alarm_window_t4

0x5938,	// (0x00014d08) popup_midp_note_alarm_window_t5_ParamLimits

0x5938,	// (0x00014d08) popup_midp_note_alarm_window_t5

0x000a,

0xf895,	// (0x0001ec65) popup_midp_note_alarm_window_t_ParamLimits

0xf895,	// (0x0001ec65) popup_midp_note_alarm_window_t

0x59e4,	// (0x00014db4) wait_bar_pane_cp1_ParamLimits

0x59e4,	// (0x00014db4) wait_bar_pane_cp1

0x26c1,	// (0x00011a91) wait_anim_pane_copy1

0x26c1,	// (0x00011a91) wait_border_pane_copy1

0x53c1,	// (0x00014791) wait_border_pane_g1_copy1

0x35f6,	// (0x000129c6) form_field_popup_pane_g1

0xd068,	// (0x0001c438) form_field_popup_pane_t1_ParamLimits

0x35a5,	// (0x00012975) input_focus_pane_cp7_ParamLimits

0x3616,	// (0x000129e6) list_form_pane_ParamLimits

0x3622,	// (0x000129f2) form_field_popup_wide_pane_g1

0x362a,	// (0x000129fa) form_field_popup_wide_pane_t1_ParamLimits

0x35a5,	// (0x00012975) input_focus_pane_cp8_ParamLimits

0x363c,	// (0x00012a0c) list_form_wide_pane_ParamLimits

0xde22,	// (0x0001d1f2) aid_size_cell_graphic_pane

0xd0e7,	// (0x0001c4b7) data_form_pane_t1_ParamLimits

0xdd20,	// (0x0001d0f0) data_form_wide_pane_t1_ParamLimits

0xd656,	// (0x0001ca26) bg_status_flat_pane

0xc90a,	// (0x0001bcda) title_pane_t1_ParamLimits

0x2769,	// (0x00011b39) title_pane_t2_ParamLimits

0x278f,	// (0x00011b5f) title_pane_t3_ParamLimits

0xf557,	// (0x0001e927) title_pane_t_ParamLimits

0x3d0c,	// (0x000130dc) level_1_signal_ParamLimits

0x3d1e,	// (0x000130ee) level_2_signal_ParamLimits

0x3d31,	// (0x00013101) level_3_signal_ParamLimits

0x3d44,	// (0x00013114) level_4_signal_ParamLimits

0x3d57,	// (0x00013127) level_5_signal_ParamLimits

0x3d6a,	// (0x0001313a) level_6_signal_ParamLimits

0x3d7d,	// (0x0001314d) level_7_signal_ParamLimits

0x3d0c,	// (0x000130dc) level_1_battery_ParamLimits

0x3d1e,	// (0x000130ee) level_2_battery_ParamLimits

0x3d31,	// (0x00013101) level_3_battery_ParamLimits

0x3d44,	// (0x00013114) level_4_battery_ParamLimits

0x3d57,	// (0x00013127) level_5_battery_ParamLimits

0x3d6a,	// (0x0001313a) level_6_battery_ParamLimits

0x3d7d,	// (0x0001314d) level_7_battery_ParamLimits

0x55e0,	// (0x000149b0) bg_status_flat_pane_g1

0x55e8,	// (0x000149b8) bg_status_flat_pane_g2

0x55f0,	// (0x000149c0) bg_status_flat_pane_g3

0x55f8,	// (0x000149c8) bg_status_flat_pane_g4

0x5600,	// (0x000149d0) bg_status_flat_pane_g5

0x5608,	// (0x000149d8) bg_status_flat_pane_g6

0x5610,	// (0x000149e0) bg_status_flat_pane_g7

0xc996,	// (0x0001bd66) tabs_3_active_pane_t1_ParamLimits

0xc996,	// (0x0001bd66) tabs_3_passive_pane_t1_ParamLimits

0xc9a8,	// (0x0001bd78) tabs_4_active_pane_t1_ParamLimits

0xc9a8,	// (0x0001bd78) tabs_4_1_passive_pane_t1_ParamLimits

0xd198,	// (0x0001c568) tabs_2_active_pane_t1_ParamLimits

0xd198,	// (0x0001c568) tabs_2_passive_pane_t1_ParamLimits

0x27a1,	// (0x00011b71) bg_active_tab_pane_cp4_ParamLimits

0xd1aa,	// (0x0001c57a) tabs_2_long_active_pane_t1_ParamLimits

0x4799,	// (0x00013b69) bg_passive_tab_pane_cp4_ParamLimits

0x12c3,	// (0x00010693) list_single_midp_graphic_pane_t1_ParamLimits

0x27a1,	// (0x00011b71) bg_active_tab_pane_cp5_ParamLimits

0xd1bd,	// (0x0001c58d) tabs_3_long_active_pane_t1_ParamLimits

0x4799,	// (0x00013b69) bg_passive_tab_pane_cp5_ParamLimits

0x12c3,	// (0x00010693) list_single_midp_graphic_pane_t1

0xd656,	// (0x0001ca26) bg_status_flat_pane_ParamLimits

0x493b,	// (0x00013d0b) indicator_pane_cp2_ParamLimits

0x493b,	// (0x00013d0b) indicator_pane_cp2

0xd7d4,	// (0x0001cba4) navi_pane_srt_ParamLimits

0xd7d4,	// (0x0001cba4) navi_pane_srt

0x4a8a,	// (0x00013e5a) popup_clock_digital_analogue_window_cp1

0x2898,	// (0x00011c68) indicator_pane_t1

0x4442,	// (0x00013812) copy_highlight_pane

0x4442,	// (0x00013812) cursor_graphics_pane

0x4442,	// (0x00013812) graphic_within_text_pane

0x4442,	// (0x00013812) link_highlight_pane

0x5dfb,	// (0x000151cb) popup_preview_text_window_t5_ParamLimits

0x5dfb,	// (0x000151cb) popup_preview_text_window_t5

0x4570,	// (0x00013940) cursor_digital_pane

0x4570,	// (0x00013940) cursor_primary_pane

0x4581,	// (0x00013951) cursor_primary_small_pane

0x4589,	// (0x00013959) cursor_secondary_pane

0x4591,	// (0x00013961) cursor_title_pane

0x4570,	// (0x00013940) link_highlight_digital_pane

0x4578,	// (0x00013948) link_highlight_primary_pane

0x4581,	// (0x00013951) link_highlight_primary_small_pane

0x4589,	// (0x00013959) link_highlight_secondary_pane

0x4591,	// (0x00013961) link_highlight_title_pane

0x4570,	// (0x00013940) copy_highlight_digital_pane

0x4570,	// (0x00013940) copy_highlight_primary_pane

0x4581,	// (0x00013951) copy_highlight_primary_small_pane

0x4589,	// (0x00013959) copy_highlight_secondary_pane

0x4591,	// (0x00013961) copy_highlight_title_pane

0x4589,	// (0x00013959) graphic_text_digital_pane

0x567e,	// (0x00014a4e) graphic_text_primary_pane

0x5687,	// (0x00014a57) graphic_text_primary_small_pane

0x4581,	// (0x00013951) graphic_text_secondary_pane

0x4570,	// (0x00013940) graphic_text_title_pane

0xd46a,	// (0x0001c83a) cursor_primary_pane_g1

0x5670,	// (0x00014a40) cursor_text_primary_t1

0xda68,	// (0x0001ce38) cursor_primary_small_pane_g1

0x5662,	// (0x00014a32) cursor_text_primary_small_t1

0xda5e,	// (0x0001ce2e) cursor_primary_small_pane_g1_copy1

0x564a,	// (0x00014a1a) cursor_text_primary_small_t1_copy1

0x5628,	// (0x000149f8) cursor_text_title_t1

0xda54,	// (0x0001ce24) cursor_title_pane_g1

0xd46a,	// (0x0001c83a) cursor_digital_pane_g1

0x45a3,	// (0x00013973) cursor_text_digital_t1

0x45c8,	// (0x00013998) link_highlight_primary_pane_g1

0x55d1,	// (0x000149a1) link_highlight_primary_pane_t1

0x45b1,	// (0x00013981) link_highlight_primary_small_pane_g1

0x45b9,	// (0x00013989) link_highlight_primary_small_pane_t1

0x45c8,	// (0x00013998) link_highlight_secondary_pane_g1

0x45d0,	// (0x000139a0) link_highlight_secondary_pane_t1

0x5545,	// (0x00014915) link_highlight_title_pane_g1

0x554d,	// (0x0001491d) link_highlight_title_pane_t1

0x552e,	// (0x000148fe) link_highlight_digital_pane_g1

0x5536,	// (0x00014906) link_highlight_digital_pane_t1

0x5406,	// (0x000147d6) copy_highlight_primary_pane_g1

0x540e,	// (0x000147de) copy_highlight_primary_pane_t1

0x53e0,	// (0x000147b0) copy_highlight_primary_small_pane_g1

0x53f7,	// (0x000147c7) copy_highlight_primary_small_pane_t1

0x45df,	// (0x000139af) copy_highlight_secondary_pane_g1

0x45e7,	// (0x000139b7) copy_highlight_secondary_pane_t1

0x53e0,	// (0x000147b0) copy_highlight_title_pane_g1

0x53e8,	// (0x000147b8) copy_highlight_title_pane_t1

0x5406,	// (0x000147d6) copy_highlight_digital_pane_g1

0x6793,	// (0x00015b63) copy_highlight_digital_pane_t1

0x66e7,	// (0x00015ab7) graphic_text_primary_pane_g1

0x6777,	// (0x00015b47) graphic_text_primary_pane_t1

0x6785,	// (0x00015b55) graphic_text_primary_pane_t2

0x0001,

0xf9c4,	// (0x0001ed94) graphic_text_primary_pane_t

0x6753,	// (0x00015b23) graphic_text_primary_small_pane_g1

0x675b,	// (0x00015b2b) graphic_text_primary_small_pane_t1

0x6769,	// (0x00015b39) graphic_text_primary_small_pane_t2

0x0001,

0xf9bf,	// (0x0001ed8f) graphic_text_primary_small_pane_t

0x672f,	// (0x00015aff) graphic_text_secondary_pane_g1

0x6737,	// (0x00015b07) graphic_text_secondary_pane_t1

0x6745,	// (0x00015b15) graphic_text_secondary_pane_t2

0x0001,

0xf9ba,	// (0x0001ed8a) graphic_text_secondary_pane_t

0x670b,	// (0x00015adb) graphic_text_title_pane_g1

0x6713,	// (0x00015ae3) graphic_text_title_pane_t1

0x6721,	// (0x00015af1) graphic_text_title_pane_t2

0x0001,

0xf9b5,	// (0x0001ed85) graphic_text_title_pane_t

0x66e7,	// (0x00015ab7) graphic_text_digital_pane_g1

0x66ef,	// (0x00015abf) graphic_text_digital_pane_t1

0x66fd,	// (0x00015acd) graphic_text_digital_pane_t2

0x0001,

0xf9b0,	// (0x0001ed80) graphic_text_digital_pane_t

0x27a1,	// (0x00011b71) navi_icon_pane_srt_ParamLimits

0x27a1,	// (0x00011b71) navi_icon_pane_srt

0x26c1,	// (0x00011a91) navi_midp_pane_srt

0x26c1,	// (0x00011a91) navi_navi_pane_srt

0x27a1,	// (0x00011b71) navi_text_pane_srt_ParamLimits

0x27a1,	// (0x00011b71) navi_text_pane_srt

0x66b2,	// (0x00015a82) navi_navi_icon_text_pane_srt

0x66ba,	// (0x00015a8a) navi_navi_pane_srt_g1_ParamLimits

0x66ba,	// (0x00015a8a) navi_navi_pane_srt_g1

0x66cc,	// (0x00015a9c) navi_navi_pane_srt_g2_ParamLimits

0x66cc,	// (0x00015a9c) navi_navi_pane_srt_g2

0x0001,

0xf9ab,	// (0x0001ed7b) navi_navi_pane_srt_g_ParamLimits

0xf9ab,	// (0x0001ed7b) navi_navi_pane_srt_g

0x66de,	// (0x00015aae) navi_navi_tabs_pane_srt

0x66b2,	// (0x00015a82) navi_navi_text_pane_srt

0x66b2,	// (0x00015a82) navi_navi_volume_pane_srt

0x66a3,	// (0x00015a73) navi_navi_text_pane_srt_t1

0x163d,	// (0x00010a0d) navi_navi_volume_pane_srt_g1

0x1645,	// (0x00010a15) volume_small_pane_srt_ParamLimits

0x1645,	// (0x00010a15) volume_small_pane_srt

0x09e0,	// (0x0000fdb0) volume_small_pane_srt_g1_ParamLimits

0x09e0,	// (0x0000fdb0) volume_small_pane_srt_g1

0x09f0,	// (0x0000fdc0) volume_small_pane_srt_g2_ParamLimits

0x09f0,	// (0x0000fdc0) volume_small_pane_srt_g2

0x0a01,	// (0x0000fdd1) volume_small_pane_srt_g3_ParamLimits

0x0a01,	// (0x0000fdd1) volume_small_pane_srt_g3

0x0a12,	// (0x0000fde2) volume_small_pane_srt_g4_ParamLimits

0x0a12,	// (0x0000fde2) volume_small_pane_srt_g4

0x0a23,	// (0x0000fdf3) volume_small_pane_srt_g5_ParamLimits

0x0a23,	// (0x0000fdf3) volume_small_pane_srt_g5

0x0a34,	// (0x0000fe04) volume_small_pane_srt_g6_ParamLimits

0x0a34,	// (0x0000fe04) volume_small_pane_srt_g6

0x0a45,	// (0x0000fe15) volume_small_pane_srt_g7_ParamLimits

0x0a45,	// (0x0000fe15) volume_small_pane_srt_g7

0x0a56,	// (0x0000fe26) volume_small_pane_srt_g8_ParamLimits

0x0a56,	// (0x0000fe26) volume_small_pane_srt_g8

0x0a67,	// (0x0000fe37) volume_small_pane_srt_g9_ParamLimits

0x0a67,	// (0x0000fe37) volume_small_pane_srt_g9

0x0a78,	// (0x0000fe48) volume_small_pane_srt_g10_ParamLimits

0x0a78,	// (0x0000fe48) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001eb28) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001eb28) volume_small_pane_srt_g

0x2b95,	// (0x00011f65) query_popup_data_pane_cp2

0x6689,	// (0x00015a59) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6689,	// (0x00015a59) navi_navi_icon_text_pane_srt_t1

0x567e,	// (0x00014a4e) navi_tabs_2_long_pane_srt

0x567e,	// (0x00014a4e) navi_tabs_2_pane_srt

0x567e,	// (0x00014a4e) navi_tabs_3_long_pane_srt

0x567e,	// (0x00014a4e) navi_tabs_3_pane_srt

0x567e,	// (0x00014a4e) navi_tabs_4_pane_srt

0x161d,	// (0x000109ed) tabs_2_active_pane_srt_ParamLimits

0x161d,	// (0x000109ed) tabs_2_active_pane_srt

0x162d,	// (0x000109fd) tabs_2_passive_pane_srt_ParamLimits

0x162d,	// (0x000109fd) tabs_2_passive_pane_srt

0x4dfb,	// (0x000141cb) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4dfb,	// (0x000141cb) bg_passive_tab_pane_cp1_srt

0x6655,	// (0x00015a25) bg_passive_tab_pane_g1_cp1_srt

0x4084,	// (0x00013454) bg_passive_tab_pane_g2_cp1_srt

0x665e,	// (0x00015a2e) bg_passive_tab_pane_g3_cp1_srt

0x2a36,	// (0x00011e06) bg_active_tab_pane_cp1_srt_ParamLimits

0x2a36,	// (0x00011e06) bg_active_tab_pane_cp1_srt

0x6667,	// (0x00015a37) tabs_2_active_pane_srt_g1

0xde64,	// (0x0001d234) tabs_2_active_pane_srt_t1_ParamLimits

0xde64,	// (0x0001d234) tabs_2_active_pane_srt_t1

0x6655,	// (0x00015a25) bg_active_tab_pane_g1_cp1_srt

0x4084,	// (0x00013454) bg_active_tab_pane_g2_cp1_srt

0x665e,	// (0x00015a2e) bg_active_tab_pane_g3_cp1_srt

0x15ea,	// (0x000109ba) tabs_3_active_pane_srt_ParamLimits

0x15ea,	// (0x000109ba) tabs_3_active_pane_srt

0x15fb,	// (0x000109cb) tabs_3_passive_pane_cp_srt_ParamLimits

0x15fb,	// (0x000109cb) tabs_3_passive_pane_cp_srt

0x160c,	// (0x000109dc) tabs_3_passive_pane_srt_ParamLimits

0x160c,	// (0x000109dc) tabs_3_passive_pane_srt

0x4dfb,	// (0x000141cb) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4dfb,	// (0x000141cb) bg_passive_tab_pane_cp2_srt

0x45f6,	// (0x000139c6) bg_passive_tab_pane_g1_cp2_srt

0x4084,	// (0x00013454) bg_passive_tab_pane_g2_cp2_srt

0x45ff,	// (0x000139cf) bg_passive_tab_pane_g3_cp2_srt

0x2a36,	// (0x00011e06) bg_active_tab_pane_cp2_srt_ParamLimits

0x2a36,	// (0x00011e06) bg_active_tab_pane_cp2_srt

0x663b,	// (0x00015a0b) tabs_3_active_pane_srt_g1

0xde4e,	// (0x0001d21e) tabs_3_active_pane_srt_t1_ParamLimits

0xde4e,	// (0x0001d21e) tabs_3_active_pane_srt_t1

0x45f6,	// (0x000139c6) bg_active_tab_pane_g1_cp2_srt

0x4084,	// (0x00013454) bg_active_tab_pane_g2_cp2_srt

0x45ff,	// (0x000139cf) bg_active_tab_pane_g3_cp2_srt

0x15a2,	// (0x00010972) tabs_4_active_pane_srt_ParamLimits

0x15a2,	// (0x00010972) tabs_4_active_pane_srt

0x15b4,	// (0x00010984) tabs_4_passive_pane_cp2_srt_ParamLimits

0x15b4,	// (0x00010984) tabs_4_passive_pane_cp2_srt

0x0be7,	// (0x0000ffb7) aid_size_cell_toolbar

0x61cd,	// (0x0001559d) main_idle_act_pane_ParamLimits

0x0db2,	// (0x00010182) popup_large_graphic_colour_window_ParamLimits

0xc203,	// (0x0001b5d3) popup_toolbar_window_ParamLimits

0xc203,	// (0x0001b5d3) popup_toolbar_window

0x63d3,	// (0x000157a3) list_single_graphic_2heading_pane_ParamLimits

0x63d3,	// (0x000157a3) list_single_graphic_2heading_pane

0x3ab9,	// (0x00012e89) aid_size_cell_apps_grid_lsc_pane

0x3acb,	// (0x00012e9b) aid_size_cell_apps_grid_prt_pane

0x4799,	// (0x00013b69) bg_wml_button_pane_cp1_ParamLimits

0x4799,	// (0x00013b69) bg_wml_button_pane_cp1

0xda01,	// (0x0001cdd1) form_midp_field_text_pane_t1_ParamLimits

0x4dfb,	// (0x000141cb) input_focus_pane_cp050_ParamLimits

0x5071,	// (0x00014441) list_midp_form_text_pane_ParamLimits

0x5017,	// (0x000143e7) input_focus_pane_cp051_ParamLimits

0x502b,	// (0x000143fb) list_midp_choice_pane_ParamLimits

0xd99f,	// (0x0001cd6f) list_single_2graphic_pane_cp3_ParamLimits

0xd99f,	// (0x0001cd6f) list_single_2graphic_pane_cp3

0xd9b2,	// (0x0001cd82) list_single_midp_graphic_pane_ParamLimits

0xd9b2,	// (0x0001cd82) list_single_midp_graphic_pane

0x11c6,	// (0x00010596) list_single_graphic_2heading_pane_g1_ParamLimits

0x11c6,	// (0x00010596) list_single_graphic_2heading_pane_g1

0x11d2,	// (0x000105a2) list_single_graphic_2heading_pane_g4_ParamLimits

0x11d2,	// (0x000105a2) list_single_graphic_2heading_pane_g4

0x11de,	// (0x000105ae) list_single_graphic_2heading_pane_g5_ParamLimits

0x11de,	// (0x000105ae) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001eb7b) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001eb7b) list_single_graphic_2heading_pane_g

0x11ea,	// (0x000105ba) list_single_graphic_2heading_pane_t1_ParamLimits

0x11ea,	// (0x000105ba) list_single_graphic_2heading_pane_t1

0x11fe,	// (0x000105ce) list_single_graphic_2heading_pane_t2_ParamLimits

0x11fe,	// (0x000105ce) list_single_graphic_2heading_pane_t2

0x121a,	// (0x000105ea) list_single_graphic_2heading_pane_t3_ParamLimits

0x121a,	// (0x000105ea) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001eb82) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001eb82) list_single_graphic_2heading_pane_t

0x4be9,	// (0x00013fb9) bg_popup_sub_pane_cp2

0x4c13,	// (0x00013fe3) grid_toobar_pane

0x1232,	// (0x00010602) cell_toolbar_pane_ParamLimits

0x1232,	// (0x00010602) cell_toolbar_pane

0x4c7d,	// (0x0001404d) cell_toolbar_pane_g1_ParamLimits

0x4c7d,	// (0x0001404d) cell_toolbar_pane_g1

0x4c91,	// (0x00014061) cell_toolbar_pane_g2_ParamLimits

0x4c91,	// (0x00014061) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0001eb90) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0001eb90) cell_toolbar_pane_g

0x4cb3,	// (0x00014083) grid_highlight_pane_cp2_ParamLimits

0x4cb3,	// (0x00014083) grid_highlight_pane_cp2

0x4ccd,	// (0x0001409d) toolbar_button_pane

0x4cd9,	// (0x000140a9) toolbar_button_pane_g1

0x4ce1,	// (0x000140b1) toolbar_button_pane_g2

0x4ce9,	// (0x000140b9) toolbar_button_pane_g3

0x4cf1,	// (0x000140c1) toolbar_button_pane_g4

0x4cf9,	// (0x000140c9) toolbar_button_pane_g5

0x4d01,	// (0x000140d1) toolbar_button_pane_g6

0x4d09,	// (0x000140d9) toolbar_button_pane_g7

0x4d11,	// (0x000140e1) toolbar_button_pane_g8

0x4d19,	// (0x000140e9) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0001eb95) toolbar_button_pane_g

0x126a,	// (0x0001063a) list_single_2graphic_pane_g1_cp3_ParamLimits

0x126a,	// (0x0001063a) list_single_2graphic_pane_g1_cp3

0xc25b,	// (0x0001b62b) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc25b,	// (0x0001b62b) list_single_2graphic_pane_g2_cp3

0x1287,	// (0x00010657) list_single_2graphic_pane_g3_cp3

0x128f,	// (0x0001065f) list_single_2graphic_pane_g4_cp3_ParamLimits

0x128f,	// (0x0001065f) list_single_2graphic_pane_g4_cp3

0x129b,	// (0x0001066b) list_single_2graphic_pane_t1_cp3_ParamLimits

0x129b,	// (0x0001066b) list_single_2graphic_pane_t1_cp3

0x12b7,	// (0x00010687) list_single_midp_graphic_pane_g2_ParamLimits

0x12b7,	// (0x00010687) list_single_midp_graphic_pane_g2

0x0bef,	// (0x0000ffbf) aid_zoom_text_primary

0x0bf7,	// (0x0000ffc7) aid_zoom_text_secondary

0xd4c2,	// (0x0001c892) status_small_pane_g7_ParamLimits

0xd4c2,	// (0x0001c892) status_small_pane_g7

0xd4e5,	// (0x0001c8b5) status_small_pane_t1_ParamLimits

0xc8e6,	// (0x0001bcb6) title_pane_g2

0x0003,

0xf54e,	// (0x0001e91e) title_pane_g

0xcb5e,	// (0x0001bf2e) aid_size_cell_colour_1_pane_ParamLimits

0xcb5e,	// (0x0001bf2e) aid_size_cell_colour_1_pane

0xcb72,	// (0x0001bf42) aid_size_cell_colour_2_pane_ParamLimits

0xcb72,	// (0x0001bf42) aid_size_cell_colour_2_pane

0xcb86,	// (0x0001bf56) aid_size_cell_colour_3_pane_ParamLimits

0xcb86,	// (0x0001bf56) aid_size_cell_colour_3_pane

0xcb9a,	// (0x0001bf6a) aid_size_cell_colour_4_pane_ParamLimits

0xcb9a,	// (0x0001bf6a) aid_size_cell_colour_4_pane

0x063d,	// (0x0000fa0d) title_pane_stacon_g1_ParamLimits

0x063d,	// (0x0000fa0d) title_pane_stacon_g1

0x5465,	// (0x00014835) popup_note_wait_window_g3_ParamLimits

0x5465,	// (0x00014835) popup_note_wait_window_g3

0x54db,	// (0x000148ab) popup_note_wait_window_t5_ParamLimits

0x54db,	// (0x000148ab) popup_note_wait_window_t5

0x26c1,	// (0x00011a91) main_feb_china_hwr_fs_writing_pane

0xbc0b,	// (0x0001afdb) popup_feb_china_hwr_fs_window_ParamLimits

0xbc0b,	// (0x0001afdb) popup_feb_china_hwr_fs_window

0xc26c,	// (0x0001b63c) aid_size_cell_hwr_fs_ParamLimits

0xc26c,	// (0x0001b63c) aid_size_cell_hwr_fs

0x4dfb,	// (0x000141cb) bg_popup_sub_pane_cp3_ParamLimits

0x4dfb,	// (0x000141cb) bg_popup_sub_pane_cp3

0xc281,	// (0x0001b651) grid_hwr_fs_pane_ParamLimits

0xc281,	// (0x0001b651) grid_hwr_fs_pane

0x1306,	// (0x000106d6) linegrid_hwr_fs_pane_ParamLimits

0x1306,	// (0x000106d6) linegrid_hwr_fs_pane

0xc299,	// (0x0001b669) cell_hwr_fs_pane_ParamLimits

0xc299,	// (0x0001b669) cell_hwr_fs_pane

0x4e07,	// (0x000141d7) linegrid_hwr_fs_pane_g1_ParamLimits

0x4e07,	// (0x000141d7) linegrid_hwr_fs_pane_g1

0xd973,	// (0x0001cd43) linegrid_hwr_fs_pane_g2_ParamLimits

0xd973,	// (0x0001cd43) linegrid_hwr_fs_pane_g2

0x4e25,	// (0x000141f5) linegrid_hwr_fs_pane_g3_ParamLimits

0x4e25,	// (0x000141f5) linegrid_hwr_fs_pane_g3

0x1338,	// (0x00010708) linegrid_hwr_fs_pane_g4_ParamLimits

0x1338,	// (0x00010708) linegrid_hwr_fs_pane_g4

0x1352,	// (0x00010722) linegrid_hwr_fs_pane_g5_ParamLimits

0x1352,	// (0x00010722) linegrid_hwr_fs_pane_g5

0x0004,

0xf7eb,	// (0x0001ebbb) linegrid_hwr_fs_pane_g_ParamLimits

0xf7eb,	// (0x0001ebbb) linegrid_hwr_fs_pane_g

0x4e31,	// (0x00014201) cell_hwr_fs_pane_g1_ParamLimits

0x4e31,	// (0x00014201) cell_hwr_fs_pane_g1

0x4b20,	// (0x00013ef0) cell_hwr_fs_pane_g2_ParamLimits

0x4b20,	// (0x00013ef0) cell_hwr_fs_pane_g2

0xd985,	// (0x0001cd55) cell_hwr_fs_pane_g3_ParamLimits

0xd985,	// (0x0001cd55) cell_hwr_fs_pane_g3

0xd992,	// (0x0001cd62) cell_hwr_fs_pane_g4_ParamLimits

0xd992,	// (0x0001cd62) cell_hwr_fs_pane_g4

0x0003,

0xf7f6,	// (0x0001ebc6) cell_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0001ebc6) cell_hwr_fs_pane_g

0xc2bf,	// (0x0001b68f) cell_hwr_fs_pane_t1

0x26c1,	// (0x00011a91) grid_highlight_pane_cp6

0x26c1,	// (0x00011a91) main_idle_act2_pane

0x3870,	// (0x00012c40) aid_inside_area_popup_secondary

0xda72,	// (0x0001ce42) aid_inside_area_window_primary_ParamLimits

0xda72,	// (0x0001ce42) aid_inside_area_window_primary

0x67a2,	// (0x00015b72) ai2_news_ticker_pane

0x67aa,	// (0x00015b7a) aid_size_cell_ai1_link_ParamLimits

0x67aa,	// (0x00015b7a) aid_size_cell_ai1_link

0xde7a,	// (0x0001d24a) popup_ai2_data_window_ParamLimits

0xde7a,	// (0x0001d24a) popup_ai2_data_window

0x67da,	// (0x00015baa) popup_ai2_link_window_ParamLimits

0x67da,	// (0x00015baa) popup_ai2_link_window

0x4dfb,	// (0x000141cb) bg_popup_sub_pane_cp4_ParamLimits

0x4dfb,	// (0x000141cb) bg_popup_sub_pane_cp4

0x67ee,	// (0x00015bbe) grid_ai2_link_pane_ParamLimits

0x67ee,	// (0x00015bbe) grid_ai2_link_pane

0x6805,	// (0x00015bd5) popup_ai2_link_window_g1_ParamLimits

0x6805,	// (0x00015bd5) popup_ai2_link_window_g1

0x6811,	// (0x00015be1) popup_ai2_link_window_g2_ParamLimits

0x6811,	// (0x00015be1) popup_ai2_link_window_g2

0x0001,

0xf9c9,	// (0x0001ed99) popup_ai2_link_window_g_ParamLimits

0xf9c9,	// (0x0001ed99) popup_ai2_link_window_g

0x6820,	// (0x00015bf0) ai2_mp_button_pane

0x6828,	// (0x00015bf8) ai2_mp_volume_pane

0x5017,	// (0x000143e7) bg_popup_sub_pane_cp5_ParamLimits

0x5017,	// (0x000143e7) bg_popup_sub_pane_cp5

0x6830,	// (0x00015c00) heading_ai2_gene_pane_ParamLimits

0x6830,	// (0x00015c00) heading_ai2_gene_pane

0x683c,	// (0x00015c0c) list_ai2_gene_pane_ParamLimits

0x683c,	// (0x00015c0c) list_ai2_gene_pane

0x6884,	// (0x00015c54) cell_ai2_link_pane_ParamLimits

0x6884,	// (0x00015c54) cell_ai2_link_pane

0x689a,	// (0x00015c6a) cell_ai2_link_pane_g1

0x26c1,	// (0x00011a91) grid_highlight_pane_cp7

0x165a,	// (0x00010a2a) ai2_mp_volume_pane_g1

0x696a,	// (0x00015d3a) ai2_mp_volume_pane_g2

0xdea4,	// (0x0001d274) list_ai2_gene_pane_t1

0x6972,	// (0x00015d42) ai2_mp_volume_pane_g3

0x0002,

0xf9e2,	// (0x0001edb2) ai2_mp_volume_pane_g

0x1662,	// (0x00010a32) volume_small_pane_cp3

0x697a,	// (0x00015d4a) aid_size_cell_ai2_button

0x6982,	// (0x00015d52) grid_ai2_button_pane

0x698b,	// (0x00015d5b) cell_ai2_button_pane_ParamLimits

0x698b,	// (0x00015d5b) cell_ai2_button_pane

0x26b7,	// (0x00011a87) cell_ai2_button_pane_g1

0x26c1,	// (0x00011a91) grid_highlight_pane_cp8

0x692a,	// (0x00015cfa) ai2_gene_pane_t1_ParamLimits

0x692a,	// (0x00015cfa) ai2_gene_pane_t1

0xbb81,	// (0x0001af51) aid_height_parent_landscape

0xdbcc,	// (0x0001cf9c) aid_height_set_list

0x61cd,	// (0x0001559d) aid_size_parent

0xde22,	// (0x0001d1f2) aid_size_cell_graphic_pane_ParamLimits

0x684c,	// (0x00015c1c) popup_ai2_data_window_g1_ParamLimits

0x684c,	// (0x00015c1c) popup_ai2_data_window_g1

0x6858,	// (0x00015c28) ai2_news_ticker_pane_g1

0x6860,	// (0x00015c30) ai2_news_ticker_pane_g2

0x0001,

0xf9ce,	// (0x0001ed9e) ai2_news_ticker_pane_g

0x6868,	// (0x00015c38) ai2_news_ticker_pane_t1

0x6876,	// (0x00015c46) ai2_news_ticker_pane_t2

0x0001,

0xf9d3,	// (0x0001eda3) ai2_news_ticker_pane_t

0x68a3,	// (0x00015c73) heading_ai2_gene_pane_g1

0x68ab,	// (0x00015c7b) heading_ai2_gene_pane_t1_ParamLimits

0x68ab,	// (0x00015c7b) heading_ai2_gene_pane_t1

0x68c0,	// (0x00015c90) list_highlight_pane_cp6

0xde8e,	// (0x0001d25e) ai2_gene_pane_ParamLimits

0xde8e,	// (0x0001d25e) ai2_gene_pane

0xdeb2,	// (0x0001d282) list_ai2_gene_pane_t2

0x0001,

0xf9d8,	// (0x0001eda8) list_ai2_gene_pane_t

0x68fb,	// (0x00015ccb) list_highlight_pane_cp8_ParamLimits

0x68fb,	// (0x00015ccb) list_highlight_pane_cp8

0x690c,	// (0x00015cdc) ai2_gene_pane_g1_ParamLimits

0x690c,	// (0x00015cdc) ai2_gene_pane_g1

0x691e,	// (0x00015cee) ai2_gene_pane_g2_ParamLimits

0x691e,	// (0x00015cee) ai2_gene_pane_g2

0x0001,

0xf9dd,	// (0x0001edad) ai2_gene_pane_g_ParamLimits

0xf9dd,	// (0x0001edad) ai2_gene_pane_g

0x2fc0,	// (0x00012390) scroll_pane_cp12

0xbb3e,	// (0x0001af0e) control_pane_t3_ParamLimits

0xbb3e,	// (0x0001af0e) control_pane_t3

0xd4d6,	// (0x0001c8a6) status_small_pane_g8_ParamLimits

0xd4d6,	// (0x0001c8a6) status_small_pane_g8

0xbca0,	// (0x0001b070) popup_find_window_ParamLimits

0xbf2d,	// (0x0001b2fd) popup_note_image_window_ParamLimits

0x4c4f,	// (0x0001401f) list_double2_graphic_pane_vc_g1_ParamLimits

0x4c4f,	// (0x0001401f) list_double2_graphic_pane_vc_g1

0x437b,	// (0x0001374b) list_double2_graphic_pane_vc_g2_ParamLimits

0x437b,	// (0x0001374b) list_double2_graphic_pane_vc_g2

0x4c5b,	// (0x0001402b) list_double2_graphic_pane_vc_g3_ParamLimits

0x4c5b,	// (0x0001402b) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0001eb89) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001eb89) list_double2_graphic_pane_vc_g

0x4c67,	// (0x00014037) list_double2_graphic_pane_vc_t1_ParamLimits

0x4c67,	// (0x00014037) list_double2_graphic_pane_vc_t1

0x437b,	// (0x0001374b) list_single_heading_pane_vc_g1_ParamLimits

0x437b,	// (0x0001374b) list_single_heading_pane_vc_g1

0x4c5b,	// (0x0001402b) list_single_heading_pane_vc_g2_ParamLimits

0x4c5b,	// (0x0001402b) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001e998) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001e998) list_single_heading_pane_vc_g

0x4d21,	// (0x000140f1) list_single_heading_pane_vc_t1_ParamLimits

0x4d21,	// (0x000140f1) list_single_heading_pane_vc_t1

0x4d37,	// (0x00014107) list_single_heading_pane_vc_t2_ParamLimits

0x4d37,	// (0x00014107) list_single_heading_pane_vc_t2

0x0001,

0xf7da,	// (0x0001ebaa) list_single_heading_pane_vc_t_ParamLimits

0xf7da,	// (0x0001ebaa) list_single_heading_pane_vc_t

0x4d49,	// (0x00014119) list_setting_number_pane_vc_g1_ParamLimits

0x4d49,	// (0x00014119) list_setting_number_pane_vc_g1

0x4d55,	// (0x00014125) list_setting_number_pane_vc_g2_ParamLimits

0x4d55,	// (0x00014125) list_setting_number_pane_vc_g2

0x0001,

0xf7df,	// (0x0001ebaf) list_setting_number_pane_vc_g_ParamLimits

0xf7df,	// (0x0001ebaf) list_setting_number_pane_vc_g

0x4d61,	// (0x00014131) list_setting_number_pane_vc_t1_ParamLimits

0x4d61,	// (0x00014131) list_setting_number_pane_vc_t1

0x4d75,	// (0x00014145) list_setting_number_pane_vc_t2_ParamLimits

0x4d75,	// (0x00014145) list_setting_number_pane_vc_t2

0x4d91,	// (0x00014161) list_setting_number_pane_vc_t3_ParamLimits

0x4d91,	// (0x00014161) list_setting_number_pane_vc_t3

0x0002,

0xf7e4,	// (0x0001ebb4) list_setting_number_pane_vc_t_ParamLimits

0xf7e4,	// (0x0001ebb4) list_setting_number_pane_vc_t

0x4dbf,	// (0x0001418f) set_value_pane_vc_ParamLimits

0x4dbf,	// (0x0001418f) set_value_pane_vc

0x63d3,	// (0x000157a3) list_double2_graphic_pane_vc_ParamLimits

0x63d3,	// (0x000157a3) list_double2_graphic_pane_vc

0x63d3,	// (0x000157a3) list_double2_large_graphic_pane_vc_ParamLimits

0x63d3,	// (0x000157a3) list_double2_large_graphic_pane_vc

0x63d3,	// (0x000157a3) list_double2_pane_vc_ParamLimits

0x63d3,	// (0x000157a3) list_double2_pane_vc

0x63d3,	// (0x000157a3) list_double_graphic_heading_pane_vc_ParamLimits

0x63d3,	// (0x000157a3) list_double_graphic_heading_pane_vc

0x63d3,	// (0x000157a3) list_double_graphic_pane_vc_ParamLimits

0x63d3,	// (0x000157a3) list_double_graphic_pane_vc

0x63d3,	// (0x000157a3) list_double_heading_pane_vc_ParamLimits

0x63d3,	// (0x000157a3) list_double_heading_pane_vc

0x63e5,	// (0x000157b5) list_double_large_graphic_pane_vc_ParamLimits

0x63e5,	// (0x000157b5) list_double_large_graphic_pane_vc

0x63d3,	// (0x000157a3) list_double_number_pane_vc_ParamLimits

0x63d3,	// (0x000157a3) list_double_number_pane_vc

0x63d3,	// (0x000157a3) list_double_pane_vc_ParamLimits

0x63d3,	// (0x000157a3) list_double_pane_vc

0x63d3,	// (0x000157a3) list_double_time_pane_vc_ParamLimits

0x63d3,	// (0x000157a3) list_double_time_pane_vc

0x63d3,	// (0x000157a3) list_setting_number_pane_vc_ParamLimits

0x63d3,	// (0x000157a3) list_setting_number_pane_vc

0x63d3,	// (0x000157a3) list_setting_pane_vc_ParamLimits

0x63d3,	// (0x000157a3) list_setting_pane_vc

0x63d3,	// (0x000157a3) list_single_graphic_heading_pane_vc_ParamLimits

0x63d3,	// (0x000157a3) list_single_graphic_heading_pane_vc

0x63d3,	// (0x000157a3) list_single_heading_pane_vc_ParamLimits

0x63d3,	// (0x000157a3) list_single_heading_pane_vc

0x63d3,	// (0x000157a3) list_single_number_heading_pane_vc_ParamLimits

0x63d3,	// (0x000157a3) list_single_number_heading_pane_vc

0x4c4f,	// (0x0001401f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4c4f,	// (0x0001401f) list_double_graphic_heading_pane_vc_g1

0x69bf,	// (0x00015d8f) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x69bf,	// (0x00015d8f) list_double_graphic_heading_pane_vc_g2

0x69cb,	// (0x00015d9b) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x69cb,	// (0x00015d9b) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e9,	// (0x0001edb9) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e9,	// (0x0001edb9) list_double_graphic_heading_pane_vc_g

0x69d7,	// (0x00015da7) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x69d7,	// (0x00015da7) list_double_graphic_heading_pane_vc_t1

0x69f3,	// (0x00015dc3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x69f3,	// (0x00015dc3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f0,	// (0x0001edc0) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f0,	// (0x0001edc0) list_double_graphic_heading_pane_vc_t

0x4d49,	// (0x00014119) list_setting_pane_vc_g1_ParamLimits

0x4d49,	// (0x00014119) list_setting_pane_vc_g1

0x4d55,	// (0x00014125) list_setting_pane_vc_g2_ParamLimits

0x4d55,	// (0x00014125) list_setting_pane_vc_g2

0x0001,

0xf7df,	// (0x0001ebaf) list_setting_pane_vc_g_ParamLimits

0xf7df,	// (0x0001ebaf) list_setting_pane_vc_g

0x6c1e,	// (0x00015fee) list_setting_pane_vc_t1_ParamLimits

0x6c1e,	// (0x00015fee) list_setting_pane_vc_t1

0x6c3a,	// (0x0001600a) list_setting_pane_vc_t2_ParamLimits

0x6c3a,	// (0x0001600a) list_setting_pane_vc_t2

0x0001,

0xfa1e,	// (0x0001edee) list_setting_pane_vc_t_ParamLimits

0xfa1e,	// (0x0001edee) list_setting_pane_vc_t

0x4dbf,	// (0x0001418f) set_value_pane_cp_vc_ParamLimits

0x4dbf,	// (0x0001418f) set_value_pane_cp_vc

0x437b,	// (0x0001374b) list_single_number_heading_pane_vc_g1_ParamLimits

0x437b,	// (0x0001374b) list_single_number_heading_pane_vc_g1

0x4c5b,	// (0x0001402b) list_single_number_heading_pane_vc_g2_ParamLimits

0x4c5b,	// (0x0001402b) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001e998) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001e998) list_single_number_heading_pane_vc_g

0x6c56,	// (0x00016026) list_single_number_heading_pane_vc_t1_ParamLimits

0x6c56,	// (0x00016026) list_single_number_heading_pane_vc_t1

0x6c6c,	// (0x0001603c) list_single_number_heading_pane_vc_t2_ParamLimits

0x6c6c,	// (0x0001603c) list_single_number_heading_pane_vc_t2

0x6c7e,	// (0x0001604e) list_single_number_heading_pane_vc_t3_ParamLimits

0x6c7e,	// (0x0001604e) list_single_number_heading_pane_vc_t3

0x0002,

0xfa23,	// (0x0001edf3) list_single_number_heading_pane_vc_t_ParamLimits

0xfa23,	// (0x0001edf3) list_single_number_heading_pane_vc_t

0x4c4f,	// (0x0001401f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4c4f,	// (0x0001401f) list_single_graphic_heading_pane_vc_g1

0x437b,	// (0x0001374b) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x437b,	// (0x0001374b) list_single_graphic_heading_pane_vc_g4

0x4c5b,	// (0x0001402b) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4c5b,	// (0x0001402b) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x0001eb89) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001eb89) list_single_graphic_heading_pane_vc_g

0x6c90,	// (0x00016060) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x6c90,	// (0x00016060) list_single_graphic_heading_pane_vc_t1

0x6ca6,	// (0x00016076) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6ca6,	// (0x00016076) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2a,	// (0x0001edfa) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2a,	// (0x0001edfa) list_single_graphic_heading_pane_vc_t

0x437b,	// (0x0001374b) list_double2_pane_vc_g1_ParamLimits

0x437b,	// (0x0001374b) list_double2_pane_vc_g1

0x4c5b,	// (0x0001402b) list_double2_pane_vc_g2_ParamLimits

0x4c5b,	// (0x0001402b) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001e998) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001e998) list_double2_pane_vc_g

0x6cb8,	// (0x00016088) list_double2_pane_vc_t1_ParamLimits

0x6cb8,	// (0x00016088) list_double2_pane_vc_t1

0x6cce,	// (0x0001609e) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6cce,	// (0x0001609e) list_double2_large_graphic_pane_vc_g1

0x437b,	// (0x0001374b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x437b,	// (0x0001374b) list_double2_large_graphic_pane_vc_g2

0x4c5b,	// (0x0001402b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4c5b,	// (0x0001402b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0001e9b5) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0001e9b5) list_double2_large_graphic_pane_vc_g

0x6cda,	// (0x000160aa) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6cda,	// (0x000160aa) list_double2_large_graphic_pane_vc_t1

0x6cf0,	// (0x000160c0) list_double_time_pane_vc_g1_ParamLimits

0x6cf0,	// (0x000160c0) list_double_time_pane_vc_g1

0x6cfc,	// (0x000160cc) list_double_time_pane_vc_g2_ParamLimits

0x6cfc,	// (0x000160cc) list_double_time_pane_vc_g2

0x0001,

0xfa2f,	// (0x0001edff) list_double_time_pane_vc_g_ParamLimits

0xfa2f,	// (0x0001edff) list_double_time_pane_vc_g

0x6d08,	// (0x000160d8) list_double_time_pane_vc_t1_ParamLimits

0x6d08,	// (0x000160d8) list_double_time_pane_vc_t1

0x6d2c,	// (0x000160fc) list_double_time_pane_vc_t2_ParamLimits

0x6d2c,	// (0x000160fc) list_double_time_pane_vc_t2

0x6d5b,	// (0x0001612b) list_double_time_pane_vc_t3_ParamLimits

0x6d5b,	// (0x0001612b) list_double_time_pane_vc_t3

0x6d6d,	// (0x0001613d) list_double_time_pane_vc_t4_ParamLimits

0x6d6d,	// (0x0001613d) list_double_time_pane_vc_t4

0x0003,

0xfa34,	// (0x0001ee04) list_double_time_pane_vc_t_ParamLimits

0xfa34,	// (0x0001ee04) list_double_time_pane_vc_t

0x437b,	// (0x0001374b) list_double_pane_vc_g1_ParamLimits

0x437b,	// (0x0001374b) list_double_pane_vc_g1

0x4c5b,	// (0x0001402b) list_double_pane_vc_g2_ParamLimits

0x4c5b,	// (0x0001402b) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001e998) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001e998) list_double_pane_vc_g

0x6d81,	// (0x00016151) list_double_pane_vc_t1_ParamLimits

0x6d81,	// (0x00016151) list_double_pane_vc_t1

0x6d95,	// (0x00016165) list_double_pane_vc_t2_ParamLimits

0x6d95,	// (0x00016165) list_double_pane_vc_t2

0x0001,

0xfa3d,	// (0x0001ee0d) list_double_pane_vc_t_ParamLimits

0xfa3d,	// (0x0001ee0d) list_double_pane_vc_t

0x437b,	// (0x0001374b) list_double_number_pane_vc_g1_ParamLimits

0x437b,	// (0x0001374b) list_double_number_pane_vc_g1

0x4c5b,	// (0x0001402b) list_double_number_pane_vc_g2_ParamLimits

0x4c5b,	// (0x0001402b) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001e998) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001e998) list_double_number_pane_vc_g

0x6dad,	// (0x0001617d) list_double_number_pane_vc_t1_ParamLimits

0x6dad,	// (0x0001617d) list_double_number_pane_vc_t1

0x6dbf,	// (0x0001618f) list_double_number_pane_vc_t2_ParamLimits

0x6dbf,	// (0x0001618f) list_double_number_pane_vc_t2

0x6dd3,	// (0x000161a3) list_double_number_pane_vc_t3_ParamLimits

0x6dd3,	// (0x000161a3) list_double_number_pane_vc_t3

0x0002,

0xfa42,	// (0x0001ee12) list_double_number_pane_vc_t_ParamLimits

0xfa42,	// (0x0001ee12) list_double_number_pane_vc_t

0x6deb,	// (0x000161bb) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6deb,	// (0x000161bb) list_double_large_graphic_pane_vc_g1

0x6e0d,	// (0x000161dd) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6e0d,	// (0x000161dd) list_double_large_graphic_pane_vc_g2

0x6e21,	// (0x000161f1) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6e21,	// (0x000161f1) list_double_large_graphic_pane_vc_g3

0x6e30,	// (0x00016200) list_double_large_graphic_pane_vc_g4_ParamLimits

0x6e30,	// (0x00016200) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa49,	// (0x0001ee19) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa49,	// (0x0001ee19) list_double_large_graphic_pane_vc_g

0x6e3c,	// (0x0001620c) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6e3c,	// (0x0001620c) list_double_large_graphic_pane_vc_t1

0x6e58,	// (0x00016228) list_double_large_graphic_pane_vc_t2_ParamLimits

0x6e58,	// (0x00016228) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa52,	// (0x0001ee22) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa52,	// (0x0001ee22) list_double_large_graphic_pane_vc_t

0x69bf,	// (0x00015d8f) list_double_heading_pane_vc_g1_ParamLimits

0x69bf,	// (0x00015d8f) list_double_heading_pane_vc_g1

0x69cb,	// (0x00015d9b) list_double_heading_pane_vc_g2_ParamLimits

0x69cb,	// (0x00015d9b) list_double_heading_pane_vc_g2

0x0001,

0xfa57,	// (0x0001ee27) list_double_heading_pane_vc_g_ParamLimits

0xfa57,	// (0x0001ee27) list_double_heading_pane_vc_g

0x6e7a,	// (0x0001624a) list_double_heading_pane_vc_t1_ParamLimits

0x6e7a,	// (0x0001624a) list_double_heading_pane_vc_t1

0x6e8e,	// (0x0001625e) list_double_heading_pane_vc_t2_ParamLimits

0x6e8e,	// (0x0001625e) list_double_heading_pane_vc_t2

0x0001,

0xfa5c,	// (0x0001ee2c) list_double_heading_pane_vc_t_ParamLimits

0xfa5c,	// (0x0001ee2c) list_double_heading_pane_vc_t

0x6ea6,	// (0x00016276) list_double_graphic_pane_vc_g1_ParamLimits

0x6ea6,	// (0x00016276) list_double_graphic_pane_vc_g1

0x6eb2,	// (0x00016282) list_double_graphic_pane_vc_g2_ParamLimits

0x6eb2,	// (0x00016282) list_double_graphic_pane_vc_g2

0x437b,	// (0x0001374b) list_double_graphic_pane_vc_g3_ParamLimits

0x437b,	// (0x0001374b) list_double_graphic_pane_vc_g3

0x0003,

0xfa61,	// (0x0001ee31) list_double_graphic_pane_vc_g_ParamLimits

0xfa61,	// (0x0001ee31) list_double_graphic_pane_vc_g

0x6ecf,	// (0x0001629f) list_double_graphic_pane_vc_t1_ParamLimits

0x6ecf,	// (0x0001629f) list_double_graphic_pane_vc_t1

0x6ef9,	// (0x000162c9) list_double_graphic_pane_vc_t2_ParamLimits

0x6ef9,	// (0x000162c9) list_double_graphic_pane_vc_t2

0x0001,

0xfa6a,	// (0x0001ee3a) list_double_graphic_pane_vc_t_ParamLimits

0xfa6a,	// (0x0001ee3a) list_double_graphic_pane_vc_t

0x0190,	// (0x0000f560) aid_size_cell_fastswap

0xb801,	// (0x0001abd1) aid_size_cell_touch_ParamLimits

0xb801,	// (0x0001abd1) aid_size_cell_touch

0x03fd,	// (0x0000f7cd) popup_fast_swap_wide_window_ParamLimits

0x03fd,	// (0x0000f7cd) popup_fast_swap_wide_window

0xb9b1,	// (0x0001ad81) touch_pane_ParamLimits

0xb9b1,	// (0x0001ad81) touch_pane

0x34bf,	// (0x0001288f) button_value_adjust_pane_cp2

0x34c7,	// (0x00012897) button_value_adjust_pane_cp4

0x34e9,	// (0x000128b9) form_field_data_pane_cp2

0xd00b,	// (0x0001c3db) form_field_data_wide_pane_cp2

0x3b8a,	// (0x00012f5a) bg_scroll_pane_ParamLimits

0x079f,	// (0x0000fb6f) scroll_handle_pane_ParamLimits

0x07b3,	// (0x0000fb83) scroll_sc2_down_pane_ParamLimits

0x07b3,	// (0x0000fb83) scroll_sc2_down_pane

0x3bbb,	// (0x00012f8b) scroll_sc2_up_pane_ParamLimits

0x3bbb,	// (0x00012f8b) scroll_sc2_up_pane

0xdfd2,	// (0x0001d3a2) grid_wheel_folder_pane_g1_ParamLimits

0xdfd2,	// (0x0001d3a2) grid_wheel_folder_pane_g1

0x0978,	// (0x0000fd48) clock_nsta_pane_cp2_ParamLimits

0x0978,	// (0x0000fd48) clock_nsta_pane_cp2

0xd3c5,	// (0x0001c795) listscroll_midp_pane_ParamLimits

0xd3d1,	// (0x0001c7a1) midp_canvas_pane

0x473e,	// (0x00013b0e) nsta_clock_indic_pane

0x477f,	// (0x00013b4f) listscroll_form_pane_vc

0x4787,	// (0x00013b57) listscroll_set_pane_vc_ParamLimits

0x4787,	// (0x00013b57) listscroll_set_pane_vc

0xd67e,	// (0x0001ca4e) clock_nsta_pane

0xd6a8,	// (0x0001ca78) indicator_nsta_pane

0x4be9,	// (0x00013fb9) bg_popup_sub_pane_cp2_ParamLimits

0x4bfd,	// (0x00013fcd) find_pane_cp2_ParamLimits

0x4bfd,	// (0x00013fcd) find_pane_cp2

0x4c13,	// (0x00013fe3) grid_toobar_pane_ParamLimits

0x4dcf,	// (0x0001419f) list_form_gen_pane_vc_ParamLimits

0x4dcf,	// (0x0001419f) list_form_gen_pane_vc

0x4de5,	// (0x000141b5) scroll_pane_cp8_vc_ParamLimits

0x4de5,	// (0x000141b5) scroll_pane_cp8_vc

0x4e61,	// (0x00014231) data_form_wide_pane_vc_ParamLimits

0x4e61,	// (0x00014231) data_form_wide_pane_vc

0x4e6d,	// (0x0001423d) form_field_data_wide_pane_vc_g1

0x4e75,	// (0x00014245) form_field_data_wide_pane_vc_t1_ParamLimits

0x4e75,	// (0x00014245) form_field_data_wide_pane_vc_t1

0x35a5,	// (0x00012975) input_focus_pane_cp6_vc_ParamLimits

0x35a5,	// (0x00012975) input_focus_pane_cp6_vc

0x51f8,	// (0x000145c8) list_midp_pane_ParamLimits

0x662f,	// (0x000159ff) scroll_pane_cp16_ParamLimits

0x662f,	// (0x000159ff) scroll_pane_cp16

0x523a,	// (0x0001460a) button_value_adjust_pane_ParamLimits

0x523a,	// (0x0001460a) button_value_adjust_pane

0xdbdd,	// (0x0001cfad) button_value_adjust_pane_cp6_ParamLimits

0xdbdd,	// (0x0001cfad) button_value_adjust_pane_cp6

0xdcf7,	// (0x0001d0c7) settings_code_pane_cp_ParamLimits

0xdcf7,	// (0x0001d0c7) settings_code_pane_cp

0x26b7,	// (0x00011a87) cell_touch_pane_g1

0x26b7,	// (0x00011a87) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0001eace) cell_touch_pane_g

0xdec0,	// (0x0001d290) cell_touch_pane_cp_ParamLimits

0xdec0,	// (0x0001d290) cell_touch_pane_cp

0xdedc,	// (0x0001d2ac) cell_touch_pane_ParamLimits

0xdedc,	// (0x0001d2ac) cell_touch_pane

0x26b7,	// (0x00011a87) scroll_sc2_down_pane_g1

0x26b7,	// (0x00011a87) scroll_sc2_up_pane_g1

0x26c1,	// (0x00011a91) bg_set_opt_pane_cp4_vc

0x6a11,	// (0x00015de1) list_set_graphic_pane_vc_g1_ParamLimits

0x6a11,	// (0x00015de1) list_set_graphic_pane_vc_g1

0x6a1d,	// (0x00015ded) list_set_graphic_pane_vc_g2_ParamLimits

0x6a1d,	// (0x00015ded) list_set_graphic_pane_vc_g2

0x0001,

0xf9f5,	// (0x0001edc5) list_set_graphic_pane_vc_g_ParamLimits

0xf9f5,	// (0x0001edc5) list_set_graphic_pane_vc_g

0x6a29,	// (0x00015df9) text_primary_small_cp13_vc_ParamLimits

0x6a29,	// (0x00015df9) text_primary_small_cp13_vc

0x6a41,	// (0x00015e11) list_set_graphic_pane_vc_ParamLimits

0x6a41,	// (0x00015e11) list_set_graphic_pane_vc

0x26c1,	// (0x00011a91) input_focus_pane_cp2_vc

0x26b7,	// (0x00011a87) setting_code_pane_vc_g1

0x27ec,	// (0x00011bbc) setting_code_pane_vc_t1

0x6a53,	// (0x00015e23) set_text_pane_vc_t1_ParamLimits

0x6a53,	// (0x00015e23) set_text_pane_vc_t1

0x26c1,	// (0x00011a91) input_focus_pane_cp1_vc

0x6a6f,	// (0x00015e3f) list_set_text_pane_vc

0x26b7,	// (0x00011a87) setting_text_pane_vc_g1

0x26c1,	// (0x00011a91) bg_set_opt_pane_cp2_vc

0x27e3,	// (0x00011bb3) setting_slider_graphic_pane_vc_g1

0x6a79,	// (0x00015e49) setting_slider_graphic_pane_vc_t1

0x6a89,	// (0x00015e59) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fa,	// (0x0001edca) setting_slider_graphic_pane_vc_t

0x6a99,	// (0x00015e69) slider_set_pane_cp_vc

0x6aa1,	// (0x00015e71) slider_set_pane_vc_g1

0x6aaa,	// (0x00015e7a) slider_set_pane_vc_g2

0x0006,

0xf9ff,	// (0x0001edcf) slider_set_pane_vc_g

0x36c8,	// (0x00012a98) set_opt_bg_pane_g1_copy1

0x36d0,	// (0x00012aa0) set_opt_bg_pane_g2_copy1

0x6ad6,	// (0x00015ea6) set_opt_bg_pane_g3_copy1

0x36e0,	// (0x00012ab0) set_opt_bg_pane_g4_copy1

0x36e8,	// (0x00012ab8) set_opt_bg_pane_g5_copy1

0x36f0,	// (0x00012ac0) set_opt_bg_pane_g6_copy1

0x6ae0,	// (0x00015eb0) set_opt_bg_pane_g7_copy1

0x6ae8,	// (0x00015eb8) set_opt_bg_pane_g8_copy1

0x6af2,	// (0x00015ec2) set_opt_bg_pane_g9_copy1

0x26c1,	// (0x00011a91) bg_set_opt_pane_cp_vc

0x6afc,	// (0x00015ecc) setting_slider_pane_vc_t1

0x6b0b,	// (0x00015edb) setting_slider_pane_vc_t2

0x6b1b,	// (0x00015eeb) setting_slider_pane_vc_t3

0x0002,

0xfa0e,	// (0x0001edde) setting_slider_pane_vc_t

0x6b2b,	// (0x00015efb) slider_set_pane_vc

0x1376,	// (0x00010746) volume_set_pane_vc_g1

0x137f,	// (0x0001074f) volume_set_pane_vc_g2

0x1388,	// (0x00010758) volume_set_pane_vc_g3

0x1391,	// (0x00010761) volume_set_pane_vc_g4

0x139a,	// (0x0001076a) volume_set_pane_vc_g5

0x13a3,	// (0x00010773) volume_set_pane_vc_g6

0x13ac,	// (0x0001077c) volume_set_pane_vc_g7

0x13b5,	// (0x00010785) volume_set_pane_vc_g8

0x13be,	// (0x0001078e) volume_set_pane_vc_g9

0x13c7,	// (0x00010797) volume_set_pane_vc_g10

0x0009,

0xf8ac,	// (0x0001ec7c) volume_set_pane_vc_g

0x6b33,	// (0x00015f03) volume_set_pane_vc

0x6b3b,	// (0x00015f0b) button_value_adjust_pane_cp1_vc

0x6b45,	// (0x00015f15) list_highlight_pane_cp2_vc

0x6b4e,	// (0x00015f1e) list_set_pane_vc_ParamLimits

0x6b4e,	// (0x00015f1e) list_set_pane_vc

0x6bac,	// (0x00015f7c) main_pane_set_vc_t1_ParamLimits

0x6bac,	// (0x00015f7c) main_pane_set_vc_t1

0x6bc1,	// (0x00015f91) main_pane_set_vc_t2_ParamLimits

0x6bc1,	// (0x00015f91) main_pane_set_vc_t2

0x6bd3,	// (0x00015fa3) main_pane_set_vc_t3_ParamLimits

0x6bd3,	// (0x00015fa3) main_pane_set_vc_t3

0x6be7,	// (0x00015fb7) main_pane_set_vc_t4_ParamLimits

0x6be7,	// (0x00015fb7) main_pane_set_vc_t4

0x0003,

0xfa15,	// (0x0001ede5) main_pane_set_vc_t_ParamLimits

0xfa15,	// (0x0001ede5) main_pane_set_vc_t

0x6bfb,	// (0x00015fcb) setting_code_pane_vc_ParamLimits

0x6bfb,	// (0x00015fcb) setting_code_pane_vc

0x6c0c,	// (0x00015fdc) setting_slider_graphic_pane_vc

0x6c0c,	// (0x00015fdc) setting_slider_pane_vc

0x6c0c,	// (0x00015fdc) setting_text_pane_vc

0x6c0c,	// (0x00015fdc) setting_volume_pane_vc

0x6c16,	// (0x00015fe6) scroll_pane_cp121_vc

0x34ad,	// (0x0001287d) set_content_pane_vc

0x6f23,	// (0x000162f3) button_value_adjust_pane_g1

0x6f2c,	// (0x000162fc) button_value_adjust_pane_g2

0x0001,

0xfa6f,	// (0x0001ee3f) button_value_adjust_pane_g

0x6f35,	// (0x00016305) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6f35,	// (0x00016305) form_field_slider_wide_pane_vc_t1

0x6f49,	// (0x00016319) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6f49,	// (0x00016319) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa74,	// (0x0001ee44) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa74,	// (0x0001ee44) form_field_slider_wide_pane_vc_t

0x2a36,	// (0x00011e06) input_focus_pane_cp10_vc_ParamLimits

0x2a36,	// (0x00011e06) input_focus_pane_cp10_vc

0x6f77,	// (0x00016347) slider_cont_pane_cp1_vc_ParamLimits

0x6f77,	// (0x00016347) slider_cont_pane_cp1_vc

0x6f89,	// (0x00016359) slider_form_pane_g1_cp2

0x6aaa,	// (0x00015e7a) slider_form_pane_g2_cp2

0x6fb6,	// (0x00016386) form_field_slider_pane_vc_t3

0x6fc4,	// (0x00016394) form_field_slider_pane_vc_t4

0x6fd2,	// (0x000163a2) slider_form_pane_vc_ParamLimits

0x6fd2,	// (0x000163a2) slider_form_pane_vc

0x6fdf,	// (0x000163af) form_field_slider_pane_vc_t1_ParamLimits

0x6fdf,	// (0x000163af) form_field_slider_pane_vc_t1

0x6f49,	// (0x00016319) form_field_slider_pane_vc_t2_ParamLimits

0x6f49,	// (0x00016319) form_field_slider_pane_vc_t2

0x0001,

0xfa86,	// (0x0001ee56) form_field_slider_pane_vc_t_ParamLimits

0xfa86,	// (0x0001ee56) form_field_slider_pane_vc_t

0x2a36,	// (0x00011e06) input_focus_pane_cp9_vc_ParamLimits

0x2a36,	// (0x00011e06) input_focus_pane_cp9_vc

0x6ffb,	// (0x000163cb) slider_cont_pane_vc_ParamLimits

0x6ffb,	// (0x000163cb) slider_cont_pane_vc

0x700f,	// (0x000163df) list_form_graphic_pane_cp_vc_ParamLimits

0x700f,	// (0x000163df) list_form_graphic_pane_cp_vc

0x4e6d,	// (0x0001423d) form_field_popup_wide_pane_vc_g1

0x7024,	// (0x000163f4) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7024,	// (0x000163f4) form_field_popup_wide_pane_vc_t1

0x35a5,	// (0x00012975) input_focus_pane_cp8_vc_ParamLimits

0x35a5,	// (0x00012975) input_focus_pane_cp8_vc

0x7069,	// (0x00016439) list_form_wide_pane_vc_ParamLimits

0x7069,	// (0x00016439) list_form_wide_pane_vc

0x7075,	// (0x00016445) list_form_graphic_pane_vc_g1

0x707d,	// (0x0001644d) list_form_graphic_pane_vc_t1_ParamLimits

0x707d,	// (0x0001644d) list_form_graphic_pane_vc_t1

0x27a1,	// (0x00011b71) list_highlight_pane_cp5_vc_ParamLimits

0x27a1,	// (0x00011b71) list_highlight_pane_cp5_vc

0x7099,	// (0x00016469) list_form_graphic_pane_vc_ParamLimits

0x7099,	// (0x00016469) list_form_graphic_pane_vc

0x4e6d,	// (0x0001423d) form_field_popup_pane_vc_g1

0x70af,	// (0x0001647f) form_field_popup_pane_vc_t1_ParamLimits

0x70af,	// (0x0001647f) form_field_popup_pane_vc_t1

0x35a5,	// (0x00012975) input_focus_pane_cp7_vc_ParamLimits

0x35a5,	// (0x00012975) input_focus_pane_cp7_vc

0x70c6,	// (0x00016496) list_form_pane_vc_ParamLimits

0x70c6,	// (0x00016496) list_form_pane_vc

0x70d2,	// (0x000164a2) data_form_pane_vc_t1_ParamLimits

0x70d2,	// (0x000164a2) data_form_pane_vc_t1

0x36c8,	// (0x00012a98) input_focus_pane_vc_g1

0x36d0,	// (0x00012aa0) input_focus_pane_vc_g2

0x36d8,	// (0x00012aa8) input_focus_pane_vc_g3

0x36e0,	// (0x00012ab0) input_focus_pane_vc_g4

0x36e8,	// (0x00012ab8) input_focus_pane_vc_g5

0x36f0,	// (0x00012ac0) input_focus_pane_vc_g6

0x36f8,	// (0x00012ac8) input_focus_pane_vc_g7

0x3700,	// (0x00012ad0) input_focus_pane_vc_g8

0x3708,	// (0x00012ad8) input_focus_pane_vc_g9

0x26b7,	// (0x00011a87) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001ea57) input_focus_pane_vc_g

0x4e61,	// (0x00014231) data_form_pane_vc_ParamLimits

0x4e61,	// (0x00014231) data_form_pane_vc

0x4e6d,	// (0x0001423d) form_field_data_pane_vc_g1

0x70ed,	// (0x000164bd) form_field_data_pane_vc_t1_ParamLimits

0x70ed,	// (0x000164bd) form_field_data_pane_vc_t1

0x35a5,	// (0x00012975) input_focus_pane_vc_ParamLimits

0x35a5,	// (0x00012975) input_focus_pane_vc

0x7107,	// (0x000164d7) button_value_adjust_pane_cp3_vc

0x710f,	// (0x000164df) button_value_adjust_pane_cp5_vc

0x7117,	// (0x000164e7) form_field_data_pane_vc_ParamLimits

0x7117,	// (0x000164e7) form_field_data_pane_vc

0x712e,	// (0x000164fe) form_field_data_pane_vc_cp2

0x7136,	// (0x00016506) form_field_data_wide_pane_vc_ParamLimits

0x7136,	// (0x00016506) form_field_data_wide_pane_vc

0x714c,	// (0x0001651c) form_field_data_wide_pane_vc_cp2

0x7154,	// (0x00016524) form_field_popup_pane_vc_ParamLimits

0x7154,	// (0x00016524) form_field_popup_pane_vc

0x716b,	// (0x0001653b) form_field_popup_wide_pane_vc_ParamLimits

0x716b,	// (0x0001653b) form_field_popup_wide_pane_vc

0x7181,	// (0x00016551) form_field_slider_pane_vc_ParamLimits

0x7181,	// (0x00016551) form_field_slider_pane_vc

0x7194,	// (0x00016564) form_field_slider_wide_pane_vc_ParamLimits

0x7194,	// (0x00016564) form_field_slider_wide_pane_vc

0xdefa,	// (0x0001d2ca) grid_touch_1_pane_ParamLimits

0xdefa,	// (0x0001d2ca) grid_touch_1_pane

0xdf0e,	// (0x0001d2de) grid_touch_2_pane_ParamLimits

0xdf0e,	// (0x0001d2de) grid_touch_2_pane

0x7262,	// (0x00016632) touch_pane_g1_ParamLimits

0x7262,	// (0x00016632) touch_pane_g1

0x71cb,	// (0x0001659b) cell_app_pane_cp_wide_ParamLimits

0x71cb,	// (0x0001659b) cell_app_pane_cp_wide

0x71dc,	// (0x000165ac) grid_popup_fast_wide_pane_ParamLimits

0x71dc,	// (0x000165ac) grid_popup_fast_wide_pane

0x71f0,	// (0x000165c0) scroll_pane_cp19_ParamLimits

0x71f0,	// (0x000165c0) scroll_pane_cp19

0x26c1,	// (0x00011a91) bg_popup_window_pane_cp20

0x7204,	// (0x000165d4) listscroll_popup_fast_wide_pane

0x38dc,	// (0x00012cac) grid_indicator_nsta_pane

0x720c,	// (0x000165dc) clock_nsta_pane_g1

0x7215,	// (0x000165e5) clock_nsta_pane_t1

0xdf38,	// (0x0001d308) cell_indicator_nsta_pane_ParamLimits

0xdf38,	// (0x0001d308) cell_indicator_nsta_pane

0x7262,	// (0x00016632) cell_indicator_nsta_pane_g1

0xdf4f,	// (0x0001d31f) cell_indicator_nsta_pane_g2

0x0001,

0xfa97,	// (0x0001ee67) cell_indicator_nsta_pane_g

0x727d,	// (0x0001664d) clock_nsta_pane_cp

0x7285,	// (0x00016655) indicator_nsta_pane_cp

0x728d,	// (0x0001665d) nsta_clock_indic_pane_g1

0x2884,	// (0x00011c54) grid_indicator_pane

0x3cb0,	// (0x00013080) scroll_pane_cp29

0x08c7,	// (0x0000fc97) indicator_nsta_pane_cp2_ParamLimits

0x08c7,	// (0x0000fc97) indicator_nsta_pane_cp2

0x27a1,	// (0x00011b71) main_apps_wheel_pane

0x50b9,	// (0x00014489) form_midp_field_text_pane_ParamLimits

0x5204,	// (0x000145d4) scroll_bar_cp050_ParamLimits

0x72dd,	// (0x000166ad) cell_indicator_pane_ParamLimits

0x72dd,	// (0x000166ad) cell_indicator_pane

0x72f4,	// (0x000166c4) cell_indicator_pane_g1

0xdf5c,	// (0x0001d32c) grid_wheel_folder_pane_ParamLimits

0xdf5c,	// (0x0001d32c) grid_wheel_folder_pane

0xdf6a,	// (0x0001d33a) list_wheel_apps_pane_ParamLimits

0xdf6a,	// (0x0001d33a) list_wheel_apps_pane

0xdf78,	// (0x0001d348) main_apps_wheel_pane_g1_ParamLimits

0xdf78,	// (0x0001d348) main_apps_wheel_pane_g1

0xdf84,	// (0x0001d354) main_apps_wheel_pane_g2_ParamLimits

0xdf84,	// (0x0001d354) main_apps_wheel_pane_g2

0x0001,

0xfab3,	// (0x0001ee83) main_apps_wheel_pane_g_ParamLimits

0xfab3,	// (0x0001ee83) main_apps_wheel_pane_g

0xdf92,	// (0x0001d362) main_apps_wheel_pane_t1_ParamLimits

0xdf92,	// (0x0001d362) main_apps_wheel_pane_t1

0xdfa6,	// (0x0001d376) list_wheel_apps_pane_g1

0xdfae,	// (0x0001d37e) list_wheel_apps_pane_g2

0xdfb6,	// (0x0001d386) list_wheel_apps_pane_g3

0xdfbe,	// (0x0001d38e) list_wheel_apps_pane_g4

0xdfc8,	// (0x0001d398) list_wheel_apps_pane_g5

0x0004,

0xfab8,	// (0x0001ee88) list_wheel_apps_pane_g

0x42c2,	// (0x00013692) navi_icon_text_pane

0xd572,	// (0x0001c942) aid_fill_nsta

0x73b9,	// (0x00016789) navi_icon_text_pane_g1

0x73c5,	// (0x00016795) navi_icon_text_pane_t1

0x4155,	// (0x00013525) list_set_graphic_pane_t1_ParamLimits

0x4155,	// (0x00013525) list_set_graphic_pane_t1

0x5967,	// (0x00014d37) popup_midp_note_alarm_window_t6_ParamLimits

0x5967,	// (0x00014d37) popup_midp_note_alarm_window_t6

0x5979,	// (0x00014d49) popup_midp_note_alarm_window_t7_ParamLimits

0x5979,	// (0x00014d49) popup_midp_note_alarm_window_t7

0x598b,	// (0x00014d5b) popup_midp_note_alarm_window_t8_ParamLimits

0x598b,	// (0x00014d5b) popup_midp_note_alarm_window_t8

0x599d,	// (0x00014d6d) popup_midp_note_alarm_window_t9_ParamLimits

0x599d,	// (0x00014d6d) popup_midp_note_alarm_window_t9

0x59af,	// (0x00014d7f) popup_midp_note_alarm_window_t10_ParamLimits

0x59af,	// (0x00014d7f) popup_midp_note_alarm_window_t10

0x59c1,	// (0x00014d91) popup_midp_note_alarm_window_t11_ParamLimits

0x59c1,	// (0x00014d91) popup_midp_note_alarm_window_t11

0x59d3,	// (0x00014da3) scroll_pane_cp17_ParamLimits

0x59d3,	// (0x00014da3) scroll_pane_cp17

0x1376,	// (0x00010746) volume_small_pane_cp_g1

0x166b,	// (0x00010a3b) volume_small_pane_cp_g2

0x1674,	// (0x00010a44) volume_small_pane_cp_g3

0x167d,	// (0x00010a4d) volume_small_pane_cp_g4

0x1686,	// (0x00010a56) volume_small_pane_cp_g5

0x168f,	// (0x00010a5f) volume_small_pane_cp_g6

0x1698,	// (0x00010a68) volume_small_pane_cp_g7

0x16a1,	// (0x00010a71) volume_small_pane_cp_g8

0x16aa,	// (0x00010a7a) volume_small_pane_cp_g9

0x16b3,	// (0x00010a83) volume_small_pane_cp_g10

0x451f,	// (0x000138ef) midp_ticker_pane_g1_ParamLimits

0x452b,	// (0x000138fb) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0001eb23) midp_ticker_pane_g_ParamLimits

0x4537,	// (0x00013907) midp_ticker_pane_t1_ParamLimits

0xd596,	// (0x0001c966) aid_fill_nsta_2

0x51f0,	// (0x000145c0) list_form2_midp_pane

0x6387,	// (0x00015757) midp_editing_number_pane_ParamLimits

0x6396,	// (0x00015766) midp_ticker_pane_ParamLimits

0x73d7,	// (0x000167a7) form2_midp_field_pane

0x73fb,	// (0x000167cb) scroll_pane_cp51

0x741b,	// (0x000167eb) form2_midp_button_pane_ParamLimits

0x741b,	// (0x000167eb) form2_midp_button_pane

0x742d,	// (0x000167fd) form2_midp_content_pane_ParamLimits

0x742d,	// (0x000167fd) form2_midp_content_pane

0x7447,	// (0x00016817) form2_midp_field_choice_group_pane

0x744f,	// (0x0001681f) form2_midp_field_pane_g1

0x7457,	// (0x00016827) form2_midp_field_pane_g2

0x745f,	// (0x0001682f) form2_midp_field_pane_g3

0x7467,	// (0x00016837) form2_midp_field_pane_g4

0x0003,

0xfadd,	// (0x0001eead) form2_midp_field_pane_g

0x746f,	// (0x0001683f) form2_midp_gauge_slider_pane

0x7477,	// (0x00016847) form2_midp_gauge_wait_pane

0x747f,	// (0x0001684f) form2_midp_image_pane_ParamLimits

0x747f,	// (0x0001684f) form2_midp_image_pane

0x749a,	// (0x0001686a) form2_midp_label_pane_ParamLimits

0x749a,	// (0x0001686a) form2_midp_label_pane

0xdffb,	// (0x0001d3cb) form2_midp_label_pane_cp_ParamLimits

0xdffb,	// (0x0001d3cb) form2_midp_label_pane_cp

0x74d4,	// (0x000168a4) form2_midp_string_pane_ParamLimits

0x74d4,	// (0x000168a4) form2_midp_string_pane

0xe01a,	// (0x0001d3ea) form2_midp_text_pane_ParamLimits

0xe01a,	// (0x0001d3ea) form2_midp_text_pane

0x7503,	// (0x000168d3) form2_midp_time_pane

0x7513,	// (0x000168e3) input_focus_pane_cp51_ParamLimits

0x7513,	// (0x000168e3) input_focus_pane_cp51

0x752b,	// (0x000168fb) form2_midp_label_pane_t1_ParamLimits

0x752b,	// (0x000168fb) form2_midp_label_pane_t1

0xe033,	// (0x0001d403) form2_mdip_text_pane_t1_ParamLimits

0xe033,	// (0x0001d403) form2_mdip_text_pane_t1

0x758b,	// (0x0001695b) form2_midp_time_pane_t1

0x75a6,	// (0x00016976) form2_midp_gauge_slider_pane_t1

0xe04e,	// (0x0001d41e) form2_midp_gauge_slider_pane_t2

0xe060,	// (0x0001d430) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae6,	// (0x0001eeb6) form2_midp_gauge_slider_pane_t

0x75dc,	// (0x000169ac) form2_midp_slider_pane

0x75e8,	// (0x000169b8) form2_midp_gauge_wait_pane_t1

0x75f6,	// (0x000169c6) form2_midp_wait_pane_ParamLimits

0x75f6,	// (0x000169c6) form2_midp_wait_pane

0xe072,	// (0x0001d442) list_single_2graphic_pane_cp4_ParamLimits

0xe072,	// (0x0001d442) list_single_2graphic_pane_cp4

0xd9b2,	// (0x0001cd82) list_single_midp_graphic_pane_cp_ParamLimits

0xd9b2,	// (0x0001cd82) list_single_midp_graphic_pane_cp

0x26c1,	// (0x00011a91) list_highlight_pane_cp20

0x7645,	// (0x00016a15) list_single_2graphic_pane_g1_cp4

0x764d,	// (0x00016a1d) list_single_2graphic_pane_g2_cp4

0x7655,	// (0x00016a25) list_single_2graphic_pane_t1_cp4

0x27a1,	// (0x00011b71) list_highlight_pane_cp21

0x7664,	// (0x00016a34) list_single_midp_graphic_pane_g4_cp

0x7673,	// (0x00016a43) list_single_midp_graphic_pane_t1_cp

0xe086,	// (0x0001d456) form2_mdip_string_pane_t1_ParamLimits

0xe086,	// (0x0001d456) form2_mdip_string_pane_t1

0x26c1,	// (0x00011a91) bg_wml_button_pane_cp2

0x26b7,	// (0x00011a87) form2_midp_image_pane_g1

0x3263,	// (0x00012633) list_double_large_graphic_pane_g5_ParamLimits

0x3263,	// (0x00012633) list_double_large_graphic_pane_g5

0xd3c5,	// (0x0001c795) midp_form_pane_ParamLimits

0x27a1,	// (0x00011b71) main_apps_wheel_pane_ParamLimits

0xbfab,	// (0x0001b37b) popup_preview_window_ParamLimits

0xbfab,	// (0x0001b37b) popup_preview_window

0x1171,	// (0x00010541) popup_touch_info_window_ParamLimits

0x1171,	// (0x00010541) popup_touch_info_window

0x118f,	// (0x0001055f) popup_touch_menu_window_ParamLimits

0x118f,	// (0x0001055f) popup_touch_menu_window

0x26ad,	// (0x00011a7d) bg_popup_sub_pane_cp6

0x7781,	// (0x00016b51) list_touch_menu_pane

0x7789,	// (0x00016b59) list_single_touch_menu_pane_ParamLimits

0x7789,	// (0x00016b59) list_single_touch_menu_pane

0x779f,	// (0x00016b6f) list_single_touch_menu_pane_t1

0x27a1,	// (0x00011b71) bg_popup_sub_pane_cp7_ParamLimits

0x27a1,	// (0x00011b71) bg_popup_sub_pane_cp7

0x77ad,	// (0x00016b7d) heading_sub_pane

0x77b5,	// (0x00016b85) list_touch_info_pane_ParamLimits

0x77b5,	// (0x00016b85) list_touch_info_pane

0x77c4,	// (0x00016b94) list_single_touch_info_pane_ParamLimits

0x77c4,	// (0x00016b94) list_single_touch_info_pane

0x77d6,	// (0x00016ba6) list_single_touch_info_pane_t1

0x77e4,	// (0x00016bb4) list_single_touch_info_pane_t2

0x0001,

0xfaf4,	// (0x0001eec4) list_single_touch_info_pane_t

0x4442,	// (0x00013812) bg_popup_heading_pane_cp

0x77f2,	// (0x00016bc2) heading_sub_pane_t1

0x4dfb,	// (0x000141cb) bg_popup_preview_window_pane_cp_ParamLimits

0x4dfb,	// (0x000141cb) bg_popup_preview_window_pane_cp

0x77ad,	// (0x00016b7d) heading_preview_pane

0x77b5,	// (0x00016b85) list_preview_pane_ParamLimits

0x77b5,	// (0x00016b85) list_preview_pane

0x7800,	// (0x00016bd0) popup_preview_window_g1

0x77c4,	// (0x00016b94) list_single_preview_pane_ParamLimits

0x77c4,	// (0x00016b94) list_single_preview_pane

0x7808,	// (0x00016bd8) list_single_preview_pane_g1

0x7810,	// (0x00016be0) list_single_preview_pane_t1

0x77d6,	// (0x00016ba6) list_single_preview_pane_t2

0x0001,

0xfaf9,	// (0x0001eec9) list_single_preview_pane_t

0x781e,	// (0x00016bee) bg_popup_heading_pane_cp2_ParamLimits

0x781e,	// (0x00016bee) bg_popup_heading_pane_cp2

0x7834,	// (0x00016c04) heading_preview_pane_g1

0x783c,	// (0x00016c0c) heading_preview_pane_t1_ParamLimits

0x783c,	// (0x00016c0c) heading_preview_pane_t1

0x28a7,	// (0x00011c77) soft_indicator_pane_t1_ParamLimits

0x2f9d,	// (0x0001236d) scroll_pane_ParamLimits

0x3ba9,	// (0x00012f79) scroll_sc2_left_pane

0x3bb2,	// (0x00012f82) scroll_sc2_right_pane

0x3bd1,	// (0x00012fa1) scroll_bg_pane_g1_ParamLimits

0x3be6,	// (0x00012fb6) scroll_bg_pane_g2_ParamLimits

0x3bfe,	// (0x00012fce) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001eaae) scroll_bg_pane_g_ParamLimits

0x3bd1,	// (0x00012fa1) scroll_handle_pane_g1_ParamLimits

0x3c20,	// (0x00012ff0) scroll_handle_pane_g2_ParamLimits

0x3bfe,	// (0x00012fce) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001eab5) scroll_handle_pane_g_ParamLimits

0x0c37,	// (0x00010007) popup_choice_list_window_ParamLimits

0x0c37,	// (0x00010007) popup_choice_list_window

0x4bf5,	// (0x00013fc5) choice_list_pane

0x4ca5,	// (0x00014075) cell_toolbar_pane_t1

0x4ccd,	// (0x0001409d) toolbar_button_pane_ParamLimits

0x5e8d,	// (0x0001525d) ai_gene_pane_1_t2_ParamLimits

0x5e8d,	// (0x0001525d) ai_gene_pane_1_t2

0x0001,

0xf908,	// (0x0001ecd8) ai_gene_pane_1_t_ParamLimits

0xf908,	// (0x0001ecd8) ai_gene_pane_1_t

0x7859,	// (0x00016c29) scroll_sc2_left_pane_g1

0x7859,	// (0x00016c29) scroll_sc2_right_pane_g1

0x4799,	// (0x00013b69) bg_popup_sub_pane_cp10

0x7863,	// (0x00016c33) list_choice_list_pane

0x787c,	// (0x00016c4c) list_single_choice_list_pane_ParamLimits

0x787c,	// (0x00016c4c) list_single_choice_list_pane

0x788f,	// (0x00016c5f) list_single_choice_list_pane_g1

0x38ad,	// (0x00012c7d) list_single_choice_list_pane_t1_ParamLimits

0x38ad,	// (0x00012c7d) list_single_choice_list_pane_t1

0x7897,	// (0x00016c67) choice_list_pane_g1

0x789f,	// (0x00016c6f) choice_list_pane_t1

0x26ad,	// (0x00011a7d) input_focus_pane_cp11

0x3a84,	// (0x00012e54) title_pane_stacon_g2_ParamLimits

0x3a84,	// (0x00012e54) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0001ea94) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001ea94) title_pane_stacon_g

0x4442,	// (0x00013812) cursor_press_pane

0xbc58,	// (0x0001b028) popup_fep_hwr_window_ParamLimits

0xbc58,	// (0x0001b028) popup_fep_hwr_window

0x0d5d,	// (0x0001012d) popup_fep_vkb_window_ParamLimits

0x0d5d,	// (0x0001012d) popup_fep_vkb_window

0x78ad,	// (0x00016c7d) cursor_press_pane_g1

0x0002,

0xfb22,	// (0x0001eef2) fep_vkb_side_pane_g_ParamLimits

0x16f5,	// (0x00010ac5) fep_hwr_candidate_pane_ParamLimits

0x16f5,	// (0x00010ac5) fep_hwr_candidate_pane

0x171f,	// (0x00010aef) fep_hwr_side_pane_ParamLimits

0x171f,	// (0x00010aef) fep_hwr_side_pane

0x173f,	// (0x00010b0f) fep_hwr_top_pane_ParamLimits

0x173f,	// (0x00010b0f) fep_hwr_top_pane

0x1757,	// (0x00010b27) fep_hwr_write_pane_ParamLimits

0x1757,	// (0x00010b27) fep_hwr_write_pane

0xfb22,	// (0x0001eef2) fep_vkb_side_pane_g

0x78b5,	// (0x00016c85) fep_hwr_top_pane_g1

0x78c7,	// (0x00016c97) fep_hwr_top_pane_g2

0x1791,	// (0x00010b61) fep_hwr_top_pane_g3

0x0002,

0xfafe,	// (0x0001eece) fep_hwr_top_pane_g

0x17a6,	// (0x00010b76) fep_hwr_top_text_pane

0x3da0,	// (0x00013170) fep_hwr_top_text_pane_g1

0x78fd,	// (0x00016ccd) fep_hwr_top_text_pane_t1

0x189c,	// (0x00010c6c) fep_hwr_candidate_pane_g1

0x7b50,	// (0x00016f20) fep_vkb_keypad_pane_g3_ParamLimits

0x7b50,	// (0x00016f20) fep_vkb_keypad_pane_g3

0x7b78,	// (0x00016f48) fep_vkb_keypad_pane_g4_ParamLimits

0x7b78,	// (0x00016f48) fep_vkb_keypad_pane_g4

0x7be7,	// (0x00016fb7) fep_vkb_bottom_pane_g2_ParamLimits

0x7be7,	// (0x00016fb7) fep_vkb_bottom_pane_g2

0x0001,

0xfb29,	// (0x0001eef9) fep_vkb_bottom_pane_g_ParamLimits

0xfb29,	// (0x0001eef9) fep_vkb_bottom_pane_g

0x7859,	// (0x00016c29) cell_vkb_side_pane_g2

0x0001,

0xfb33,	// (0x0001ef03) cell_vkb_side_pane_g

0x7c72,	// (0x00017042) cell_vkb_side_pane_t1

0x7c80,	// (0x00017050) cell_vkb_side_pane_t1_copy1

0x7859,	// (0x00016c29) bg_fep_vkb_candidate_pane_g2

0x7dac,	// (0x0001717c) cell_vkb_candidate_pane_ParamLimits

0x790b,	// (0x00016cdb) aid_size_cell_vkb_ParamLimits

0x790b,	// (0x00016cdb) aid_size_cell_vkb

0x7dac,	// (0x0001717c) cell_vkb_candidate_pane

0x18c3,	// (0x00010c93) bg_popup_fep_shadow_pane_g1

0xe108,	// (0x0001d4d8) fep_vkb_bottom_pane_ParamLimits

0xe108,	// (0x0001d4d8) fep_vkb_bottom_pane

0x79cf,	// (0x00016d9f) fep_vkb_candidate_pane_ParamLimits

0x79cf,	// (0x00016d9f) fep_vkb_candidate_pane

0xe12d,	// (0x0001d4fd) fep_vkb_keypad_pane_ParamLimits

0xe12d,	// (0x0001d4fd) fep_vkb_keypad_pane

0xe169,	// (0x0001d539) fep_vkb_side_pane_ParamLimits

0xe169,	// (0x0001d539) fep_vkb_side_pane

0xe1a5,	// (0x0001d575) fep_vkb_top_pane_ParamLimits

0xe1a5,	// (0x0001d575) fep_vkb_top_pane

0x7aa9,	// (0x00016e79) fep_vkb_top_pane_g1_ParamLimits

0x7aa9,	// (0x00016e79) fep_vkb_top_pane_g1

0x7ab8,	// (0x00016e88) fep_vkb_top_pane_g2_ParamLimits

0x7ab8,	// (0x00016e88) fep_vkb_top_pane_g2

0x7ac7,	// (0x00016e97) fep_vkb_top_pane_g3_ParamLimits

0x7ac7,	// (0x00016e97) fep_vkb_top_pane_g3

0x0003,

0xfb19,	// (0x0001eee9) fep_vkb_top_pane_g_ParamLimits

0xfb19,	// (0x0001eee9) fep_vkb_top_pane_g

0x7ae5,	// (0x00016eb5) fep_vkb_top_text_pane_ParamLimits

0x7ae5,	// (0x00016eb5) fep_vkb_top_text_pane

0xe1e1,	// (0x0001d5b1) fep_vkb_side_pane_g1_ParamLimits

0xe1e1,	// (0x0001d5b1) fep_vkb_side_pane_g1

0x7b3f,	// (0x00016f0f) grid_vkb_side_pane_ParamLimits

0x7b3f,	// (0x00016f0f) grid_vkb_side_pane

0x18cb,	// (0x00010c9b) bg_popup_fep_shadow_pane_g2

0x18d4,	// (0x00010ca4) bg_popup_fep_shadow_pane_g3

0x18dc,	// (0x00010cac) bg_popup_fep_shadow_pane_g4

0x18e5,	// (0x00010cb5) bg_popup_fep_shadow_pane_g5

0x18ef,	// (0x00010cbf) bg_popup_fep_shadow_pane_g6

0x18f7,	// (0x00010cc7) bg_popup_fep_shadow_pane_g7

0x36e0,	// (0x00012ab0) bg_popup_fep_shadow_pane_g8

0x7b96,	// (0x00016f66) grid_vkb_keypad_number_pane_ParamLimits

0x7b96,	// (0x00016f66) grid_vkb_keypad_number_pane

0x7ba6,	// (0x00016f76) grid_vkb_keypad_pane_ParamLimits

0x7ba6,	// (0x00016f76) grid_vkb_keypad_pane

0x7bcc,	// (0x00016f9c) fep_vkb_bottom_pane_g1_ParamLimits

0x7bcc,	// (0x00016f9c) fep_vkb_bottom_pane_g1

0x7bf5,	// (0x00016fc5) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7bf5,	// (0x00016fc5) grid_vkb_keypad_bottom_left_pane

0x7c0a,	// (0x00016fda) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7c0a,	// (0x00016fda) grid_vkb_keypad_bottom_right_pane

0x7c1f,	// (0x00016fef) fep_vkb_top_text_pane_g1

0xe228,	// (0x0001d5f8) fep_vkb_top_text_pane_t1

0xe23a,	// (0x0001d60a) cell_vkb_side_pane_ParamLimits

0xe23a,	// (0x0001d60a) cell_vkb_side_pane

0x7859,	// (0x00016c29) cell_vkb_side_pane_g1

0x7c8e,	// (0x0001705e) cell_vkb_keypad_pane_ParamLimits

0x7c8e,	// (0x0001705e) cell_vkb_keypad_pane

0x7d03,	// (0x000170d3) cell_vkb_keypad_pane_g1

0x0008,

0xfb46,	// (0x0001ef16) bg_popup_fep_shadow_pane_g

0x1909,	// (0x00010cd9) cell_hwr_side_pane_g1

0x1909,	// (0x00010cd9) cell_hwr_side_pane_g2

0x7d0d,	// (0x000170dd) cell_vkb_keypad_pane_t1

0xe250,	// (0x0001d620) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe250,	// (0x0001d620) cell_vkb_keypad_bottom_left_pane

0xe265,	// (0x0001d635) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe265,	// (0x0001d635) cell_vkb_keypad_bottom_right_pane

0x7859,	// (0x00016c29) cell_vkb_keypad_bottom_left_pane_g1

0x7859,	// (0x00016c29) cell_vkb_keypad_bottom_right_pane_g1

0x7d71,	// (0x00017141) cell_vkb_keypad_number_pane_ParamLimits

0x7d71,	// (0x00017141) cell_vkb_keypad_number_pane

0x7d90,	// (0x00017160) cell_vkb_keypad_number_pane_g1

0x7d9a,	// (0x0001716a) cell_vkb_keypad_number_pane_g2

0x7da3,	// (0x00017173) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb38,	// (0x0001ef08) cell_vkb_keypad_number_pane_g

0x7d0d,	// (0x000170dd) cell_vkb_keypad_number_pane_t1

0x7dc7,	// (0x00017197) fep_vkb_candidate_pane_g1

0x0001,

0xfb59,	// (0x0001ef29) cell_hwr_side_pane_g

0x7de0,	// (0x000171b0) cell_hwr_side_pane_t1

0x1913,	// (0x00010ce3) cell_hwr_side_pane_t1_copy1

0x1921,	// (0x00010cf1) cell_hwr_candidate_pane_g1

0x1950,	// (0x00010d20) cell_hwr_candidate_pane_t1

0x7859,	// (0x00016c29) cell_vkb_candidate_pane_g2

0x7e24,	// (0x000171f4) cell_vkb_candidate_pane_t1

0x16bc,	// (0x00010a8c) bg_popup_fep_shadow_pane_ParamLimits

0x16bc,	// (0x00010a8c) bg_popup_fep_shadow_pane

0x1771,	// (0x00010b41) bg_fep_hwr_top_pane_g4

0x78d9,	// (0x00016ca9) bg_hwr_side_pane_g1_ParamLimits

0x78d9,	// (0x00016ca9) bg_hwr_side_pane_g1

0xc2e5,	// (0x0001b6b5) cell_hwr_side_pane_ParamLimits

0xc2e5,	// (0x0001b6b5) cell_hwr_side_pane

0x181d,	// (0x00010bed) fep_hwr_write_pane_g1_ParamLimits

0x181d,	// (0x00010bed) fep_hwr_write_pane_g1

0x182a,	// (0x00010bfa) fep_hwr_write_pane_g2_ParamLimits

0x182a,	// (0x00010bfa) fep_hwr_write_pane_g2

0x1837,	// (0x00010c07) fep_hwr_write_pane_g3_ParamLimits

0x1837,	// (0x00010c07) fep_hwr_write_pane_g3

0xc305,	// (0x0001b6d5) fep_hwr_write_pane_g4_ParamLimits

0xc305,	// (0x0001b6d5) fep_hwr_write_pane_g4

0x0005,

0xfb05,	// (0x0001eed5) fep_hwr_write_pane_g_ParamLimits

0xfb05,	// (0x0001eed5) fep_hwr_write_pane_g

0x1771,	// (0x00010b41) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1771,	// (0x00010b41) bg_fep_hwr_candidate_pane_g2

0x185a,	// (0x00010c2a) cell_hwr_candidate_pane_ParamLimits

0x185a,	// (0x00010c2a) cell_hwr_candidate_pane

0x189c,	// (0x00010c6c) fep_hwr_candidate_pane_g1_ParamLimits

0x7939,	// (0x00016d09) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7939,	// (0x00016d09) bg_popup_fep_shadow_pane_cp2

0x7ad7,	// (0x00016ea7) fep_vkb_top_pane_g4_ParamLimits

0x7ad7,	// (0x00016ea7) fep_vkb_top_pane_g4

0x7b1d,	// (0x00016eed) fep_vkb_side_pane_g2_ParamLimits

0x7b1d,	// (0x00016eed) fep_vkb_side_pane_g2

0xcf39,	// (0x0001c309) list_setting_pane_t4_ParamLimits

0xcf39,	// (0x0001c309) list_setting_pane_t4

0xcfb3,	// (0x0001c383) list_setting_number_pane_t5_ParamLimits

0xcfb3,	// (0x0001c383) list_setting_number_pane_t5

0x3dd7,	// (0x000131a7) list_double_heading_pane_cp2_ParamLimits

0x3dd7,	// (0x000131a7) list_double_heading_pane_cp2

0x31ee,	// (0x000125be) list_double_heading_pane_g1_cp2_ParamLimits

0x31ee,	// (0x000125be) list_double_heading_pane_g1_cp2

0x35cb,	// (0x0001299b) list_double_heading_pane_g2_cp2_ParamLimits

0x35cb,	// (0x0001299b) list_double_heading_pane_g2_cp2

0x7e32,	// (0x00017202) list_double_heading_pane_t1_cp2_ParamLimits

0x7e32,	// (0x00017202) list_double_heading_pane_t1_cp2

0x7e48,	// (0x00017218) list_double_heading_pane_t2_cp2_ParamLimits

0x7e48,	// (0x00017218) list_double_heading_pane_t2_cp2

0x2695,	// (0x00011a65) aid_value_unit2

0x0457,	// (0x0000f827) popup_preview_fixed_window

0x2a44,	// (0x00011e14) bg_popup_preview_window_pane_cp02

0x7e5a,	// (0x0001722a) list_preview_fixed_pane

0x7ea0,	// (0x00017270) list_empty_pane_fp_ParamLimits

0x7ea0,	// (0x00017270) list_empty_pane_fp

0x7ea0,	// (0x00017270) list_single_cale_day_pane_fp_ParamLimits

0x7ea0,	// (0x00017270) list_single_cale_day_pane_fp

0x7ea0,	// (0x00017270) list_single_graphic_heading_pane_fp_ParamLimits

0x7ea0,	// (0x00017270) list_single_graphic_heading_pane_fp

0x7ea0,	// (0x00017270) list_single_graphic_pane_fp_ParamLimits

0x7ea0,	// (0x00017270) list_single_graphic_pane_fp

0x7ea0,	// (0x00017270) list_single_heading_pane_fp_ParamLimits

0x7ea0,	// (0x00017270) list_single_heading_pane_fp

0x7ea0,	// (0x00017270) list_single_pane_fp_ParamLimits

0x7ea0,	// (0x00017270) list_single_pane_fp

0x7eb5,	// (0x00017285) list_single_pane_fp_g1_ParamLimits

0x7eb5,	// (0x00017285) list_single_pane_fp_g1

0x31ee,	// (0x000125be) list_single_pane_fp_g2_ParamLimits

0x31ee,	// (0x000125be) list_single_pane_fp_g2

0x35cb,	// (0x0001299b) list_single_pane_fp_g3_ParamLimits

0x35cb,	// (0x0001299b) list_single_pane_fp_g3

0x7ec1,	// (0x00017291) list_single_pane_fp_g4_ParamLimits

0x7ec1,	// (0x00017291) list_single_pane_fp_g4

0x0003,

0xfb6c,	// (0x0001ef3c) list_single_pane_fp_g_ParamLimits

0xfb6c,	// (0x0001ef3c) list_single_pane_fp_g

0x7ecd,	// (0x0001729d) list_single_pane_fp_t1_ParamLimits

0x7ecd,	// (0x0001729d) list_single_pane_fp_t1

0x7ee4,	// (0x000172b4) list_single_graphic_pane_fp_g1_ParamLimits

0x7ee4,	// (0x000172b4) list_single_graphic_pane_fp_g1

0x7eb5,	// (0x00017285) list_single_graphic_pane_fp_g2_ParamLimits

0x7eb5,	// (0x00017285) list_single_graphic_pane_fp_g2

0x31ee,	// (0x000125be) list_single_graphic_pane_fp_g3_ParamLimits

0x31ee,	// (0x000125be) list_single_graphic_pane_fp_g3

0x35cb,	// (0x0001299b) list_single_graphic_pane_fp_g4_ParamLimits

0x35cb,	// (0x0001299b) list_single_graphic_pane_fp_g4

0x7ec1,	// (0x00017291) list_single_graphic_pane_fp_g5_ParamLimits

0x7ec1,	// (0x00017291) list_single_graphic_pane_fp_g5

0x0004,

0xfb75,	// (0x0001ef45) list_single_graphic_pane_fp_g_ParamLimits

0xfb75,	// (0x0001ef45) list_single_graphic_pane_fp_g

0x7ef0,	// (0x000172c0) list_single_graphic_pane_fp_t1_ParamLimits

0x7ef0,	// (0x000172c0) list_single_graphic_pane_fp_t1

0x7ee4,	// (0x000172b4) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7ee4,	// (0x000172b4) list_single_graphic_heading_pane_fp_g1

0x7eb5,	// (0x00017285) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7eb5,	// (0x00017285) list_single_graphic_heading_pane_fp_g2

0x31ee,	// (0x000125be) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x31ee,	// (0x000125be) list_single_graphic_heading_pane_fp_g3

0x35cb,	// (0x0001299b) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x35cb,	// (0x0001299b) list_single_graphic_heading_pane_fp_g4

0x7ec1,	// (0x00017291) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7ec1,	// (0x00017291) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb75,	// (0x0001ef45) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb75,	// (0x0001ef45) list_single_graphic_heading_pane_fp_g

0x7f06,	// (0x000172d6) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7f06,	// (0x000172d6) list_single_graphic_heading_pane_fp_t1

0x7f1c,	// (0x000172ec) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7f1c,	// (0x000172ec) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb80,	// (0x0001ef50) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb80,	// (0x0001ef50) list_single_graphic_heading_pane_fp_t

0x7f2e,	// (0x000172fe) list_single_cale_day_pane_fp_g1_ParamLimits

0x7f2e,	// (0x000172fe) list_single_cale_day_pane_fp_g1

0x7f66,	// (0x00017336) list_single_cale_day_pane_fp_g2_ParamLimits

0x7f66,	// (0x00017336) list_single_cale_day_pane_fp_g2

0x7f72,	// (0x00017342) list_single_cale_day_pane_fp_g3_ParamLimits

0x7f72,	// (0x00017342) list_single_cale_day_pane_fp_g3

0x7f9a,	// (0x0001736a) list_single_cale_day_pane_fp_g4_ParamLimits

0x7f9a,	// (0x0001736a) list_single_cale_day_pane_fp_g4

0x7fbe,	// (0x0001738e) list_single_cale_day_pane_fp_g5_ParamLimits

0x7fbe,	// (0x0001738e) list_single_cale_day_pane_fp_g5

0x0004,

0xfb85,	// (0x0001ef55) list_single_cale_day_pane_fp_g_ParamLimits

0xfb85,	// (0x0001ef55) list_single_cale_day_pane_fp_g

0x7fe2,	// (0x000173b2) list_single_cale_day_pane_fp_t1_ParamLimits

0x7fe2,	// (0x000173b2) list_single_cale_day_pane_fp_t1

0x8008,	// (0x000173d8) list_single_cale_day_pane_fp_t2_ParamLimits

0x8008,	// (0x000173d8) list_single_cale_day_pane_fp_t2

0x8021,	// (0x000173f1) list_single_cale_day_pane_fp_t3_ParamLimits

0x8021,	// (0x000173f1) list_single_cale_day_pane_fp_t3

0x0002,

0xfb90,	// (0x0001ef60) list_single_cale_day_pane_fp_t_ParamLimits

0xfb90,	// (0x0001ef60) list_single_cale_day_pane_fp_t

0x7eb5,	// (0x00017285) list_empty_pane_fp_g1_ParamLimits

0x7eb5,	// (0x00017285) list_empty_pane_fp_g1

0x803a,	// (0x0001740a) list_empty_pane_fp_t1

0x8048,	// (0x00017418) list_empty_pane_fp_t2

0x0001,

0xfb97,	// (0x0001ef67) list_empty_pane_fp_t

0x7eb5,	// (0x00017285) list_single_heading_pane_fp_g1_ParamLimits

0x7eb5,	// (0x00017285) list_single_heading_pane_fp_g1

0x31ee,	// (0x000125be) list_single_heading_pane_fp_g2_ParamLimits

0x31ee,	// (0x000125be) list_single_heading_pane_fp_g2

0x35cb,	// (0x0001299b) list_single_heading_pane_fp_g3_ParamLimits

0x35cb,	// (0x0001299b) list_single_heading_pane_fp_g3

0x0002,

0xfb9c,	// (0x0001ef6c) list_single_heading_pane_fp_g_ParamLimits

0xfb9c,	// (0x0001ef6c) list_single_heading_pane_fp_g

0x8056,	// (0x00017426) list_single_heading_pane_fp_t1_ParamLimits

0x8056,	// (0x00017426) list_single_heading_pane_fp_t1

0x8068,	// (0x00017438) list_single_heading_pane_fp_t2_ParamLimits

0x8068,	// (0x00017438) list_single_heading_pane_fp_t2

0x0001,

0xfba3,	// (0x0001ef73) list_single_heading_pane_fp_t_ParamLimits

0xfba3,	// (0x0001ef73) list_single_heading_pane_fp_t

0x391b,	// (0x00012ceb) aid_size_cell_fast

0x29b4,	// (0x00011d84) soft_indicator_pane_cp1_t1

0x3958,	// (0x00012d28) cell_app_pane_cp2_ParamLimits

0x3958,	// (0x00012d28) cell_app_pane_cp2

0x16de,	// (0x00010aae) fep_hwr_candidate_drop_down_list_pane

0x18b6,	// (0x00010c86) fep_hwr_candidate_pane_g3_ParamLimits

0x18b6,	// (0x00010c86) fep_hwr_candidate_pane_g3

0xeec9,	// (0x0001e299) fep_hwr_candidate_pane_g4_ParamLimits

0xeec9,	// (0x0001e299) fep_hwr_candidate_pane_g4

0x0002,

0xfb12,	// (0x0001eee2) fep_hwr_candidate_pane_g_ParamLimits

0xfb12,	// (0x0001eee2) fep_hwr_candidate_pane_g

0x79be,	// (0x00016d8e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x79be,	// (0x00016d8e) fep_vkb_candidate_drop_down_list_pane

0x7dcf,	// (0x0001719f) fep_vkb_candidate_pane_g3

0x7dd7,	// (0x000171a7) fep_vkb_candidate_pane_g4

0x0002,

0xfb3f,	// (0x0001ef0f) fep_vkb_candidate_pane_g

0x1921,	// (0x00010cf1) cell_hwr_candidate_pane_g1_ParamLimits

0x192f,	// (0x00010cff) cell_hwr_candidate_pane_g3_ParamLimits

0x192f,	// (0x00010cff) cell_hwr_candidate_pane_g3

0x9a07,	// (0x00018dd7) cell_hwr_candidate_pane_g4_ParamLimits

0x9a07,	// (0x00018dd7) cell_hwr_candidate_pane_g4

0x0002,

0xfb5e,	// (0x0001ef2e) cell_hwr_candidate_pane_g_ParamLimits

0xfb5e,	// (0x0001ef2e) cell_hwr_candidate_pane_g

0x7dee,	// (0x000171be) cell_vkb_candidate_pane_g3_ParamLimits

0x7dee,	// (0x000171be) cell_vkb_candidate_pane_g3

0x7e09,	// (0x000171d9) cell_vkb_candidate_pane_g4_ParamLimits

0x7e09,	// (0x000171d9) cell_vkb_candidate_pane_g4

0x807e,	// (0x0001744e) cell_app_pane_cp2_g1_ParamLimits

0x807e,	// (0x0001744e) cell_app_pane_cp2_g1

0x809c,	// (0x0001746c) cell_app_pane_cp2_g2_ParamLimits

0x809c,	// (0x0001746c) cell_app_pane_cp2_g2

0x0001,

0xfba8,	// (0x0001ef78) cell_app_pane_cp2_g_ParamLimits

0xfba8,	// (0x0001ef78) cell_app_pane_cp2_g

0x80a8,	// (0x00017478) cell_app_pane_cp2_t1_ParamLimits

0x80a8,	// (0x00017478) cell_app_pane_cp2_t1

0x35a5,	// (0x00012975) grid_highlight_pane_cp1_ParamLimits

0x35a5,	// (0x00012975) grid_highlight_pane_cp1

0x196e,	// (0x00010d3e) cell_hwr_candidate_pane_cp1_ParamLimits

0x196e,	// (0x00010d3e) cell_hwr_candidate_pane_cp1

0x1921,	// (0x00010cf1) fep_hwr_candidate_drop_down_list_pane_g1

0x198d,	// (0x00010d5d) fep_hwr_candidate_drop_down_list_pane_g2

0x199a,	// (0x00010d6a) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbad,	// (0x0001ef7d) fep_hwr_candidate_drop_down_list_pane_g

0x19a7,	// (0x00010d77) fep_hwr_candidate_drop_down_list_scroll_pane

0x19b0,	// (0x00010d80) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x19b0,	// (0x00010d80) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x19bd,	// (0x00010d8d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x19bd,	// (0x00010d8d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x19ca,	// (0x00010d9a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x19ca,	// (0x00010d9a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x19d7,	// (0x00010da7) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x19d7,	// (0x00010da7) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x19f2,	// (0x00010dc2) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x19f2,	// (0x00010dc2) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1a0d,	// (0x00010ddd) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1a0d,	// (0x00010ddd) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1a28,	// (0x00010df8) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1a28,	// (0x00010df8) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1a43,	// (0x00010e13) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1a43,	// (0x00010e13) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb4,	// (0x0001ef84) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb4,	// (0x0001ef84) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x80ba,	// (0x0001748a) cell_vkb_candidate_pane_cp1_ParamLimits

0x80ba,	// (0x0001748a) cell_vkb_candidate_pane_cp1

0x7ad7,	// (0x00016ea7) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7ad7,	// (0x00016ea7) fep_vkb_candidate_drop_down_list_pane_g1

0x80da,	// (0x000174aa) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x80da,	// (0x000174aa) fep_vkb_candidate_drop_down_list_pane_g2

0x80e7,	// (0x000174b7) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x80e7,	// (0x000174b7) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc5,	// (0x0001ef95) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc5,	// (0x0001ef95) fep_vkb_candidate_drop_down_list_pane_g

0x80f4,	// (0x000174c4) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x80f4,	// (0x000174c4) fep_vkb_candidate_drop_down_list_scroll_pane

0x8101,	// (0x000174d1) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8101,	// (0x000174d1) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x810e,	// (0x000174de) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x810e,	// (0x000174de) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x811a,	// (0x000174ea) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x811a,	// (0x000174ea) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x8126,	// (0x000174f6) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8126,	// (0x000174f6) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x8147,	// (0x00017517) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8147,	// (0x00017517) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x8168,	// (0x00017538) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8168,	// (0x00017538) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x8189,	// (0x00017559) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8189,	// (0x00017559) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x81aa,	// (0x0001757a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x81aa,	// (0x0001757a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcc,	// (0x0001ef9c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcc,	// (0x0001ef9c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xc8d3,	// (0x0001bca3) title_pane_g1_ParamLimits

0xc8e6,	// (0x0001bcb6) title_pane_g2_ParamLimits

0xf54e,	// (0x0001e91e) title_pane_g_ParamLimits

0x3d90,	// (0x00013160) aid_call2_pane

0x3d98,	// (0x00013168) aid_call_pane

0x3da0,	// (0x00013170) popup_clock_analogue_window_g1

0x3da0,	// (0x00013170) popup_clock_analogue_window_g2

0x07c8,	// (0x0000fb98) popup_clock_analogue_window_g3

0x07d1,	// (0x0000fba1) popup_clock_analogue_window_g4

0x26b7,	// (0x00011a87) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001eac3) popup_clock_analogue_window_g

0x07d9,	// (0x0000fba9) popup_clock_analogue_window_t1

0x07e7,	// (0x0000fbb7) clock_digital_number_pane_ParamLimits

0x07e7,	// (0x0000fbb7) clock_digital_number_pane

0x07f3,	// (0x0000fbc3) clock_digital_number_pane_cp02_ParamLimits

0x07f3,	// (0x0000fbc3) clock_digital_number_pane_cp02

0x07ff,	// (0x0000fbcf) clock_digital_number_pane_cp03_ParamLimits

0x07ff,	// (0x0000fbcf) clock_digital_number_pane_cp03

0x080b,	// (0x0000fbdb) clock_digital_number_pane_cp04_ParamLimits

0x080b,	// (0x0000fbdb) clock_digital_number_pane_cp04

0x0817,	// (0x0000fbe7) clock_digital_separator_pane_ParamLimits

0x0817,	// (0x0000fbe7) clock_digital_separator_pane

0x0823,	// (0x0000fbf3) popup_clock_digital_window_t1_ParamLimits

0x0823,	// (0x0000fbf3) popup_clock_digital_window_t1

0x26b7,	// (0x00011a87) clock_digital_number_pane_g1

0x26b7,	// (0x00011a87) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0001eace) clock_digital_number_pane_g

0x26b7,	// (0x00011a87) clock_digital_separator_pane_g1

0x26b7,	// (0x00011a87) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0001eace) clock_digital_separator_pane_g

0xd572,	// (0x0001c942) aid_fill_nsta_ParamLimits

0xd6a8,	// (0x0001ca78) indicator_nsta_pane_ParamLimits

0x4a82,	// (0x00013e52) popup_clock_analogue_window

0x4a82,	// (0x00013e52) popup_clock_digital_window

0x38dc,	// (0x00012cac) grid_indicator_nsta_pane_ParamLimits

0x7223,	// (0x000165f3) clock_nsta_pane_t2

0x0001,

0xfa92,	// (0x0001ee62) clock_nsta_pane_t

0x078c,	// (0x0000fb5c) aid_size_max_handle

0xba07,	// (0x0001add7) aid_size_min_handle

0x4442,	// (0x00013812) editor_scroll_pane

0x81c5,	// (0x00017595) ex_editor_pane

0x3889,	// (0x00012c59) scroll_pane_cp13

0x2fc9,	// (0x00012399) scroll_pane_cp14

0x3dcf,	// (0x0001319f) scroll_pane_cp36

0xd29c,	// (0x0001c66c) list_single_graphic_hl_pane_cp2_ParamLimits

0xd29c,	// (0x0001c66c) list_single_graphic_hl_pane_cp2

0xdd74,	// (0x0001d144) list_single_graphic_hl_pane_ParamLimits

0xdd74,	// (0x0001d144) list_single_graphic_hl_pane

0x81cd,	// (0x0001759d) aid_size_min_hl_cp1

0x81d6,	// (0x000175a6) list_highlight_pane_cp34_ParamLimits

0x81d6,	// (0x000175a6) list_highlight_pane_cp34

0x81e7,	// (0x000175b7) list_single_graphic_hl_pane_g1_ParamLimits

0x81e7,	// (0x000175b7) list_single_graphic_hl_pane_g1

0xe280,	// (0x0001d650) list_single_graphic_hl_pane_g2_ParamLimits

0xe280,	// (0x0001d650) list_single_graphic_hl_pane_g2

0xe280,	// (0x0001d650) list_single_graphic_hl_pane_g3_ParamLimits

0xe280,	// (0x0001d650) list_single_graphic_hl_pane_g3

0x43b3,	// (0x00013783) list_single_graphic_hl_pane_g4_ParamLimits

0x43b3,	// (0x00013783) list_single_graphic_hl_pane_g4

0xe28c,	// (0x0001d65c) list_single_graphic_hl_pane_g5_ParamLimits

0xe28c,	// (0x0001d65c) list_single_graphic_hl_pane_g5

0x0004,

0xfbdd,	// (0x0001efad) list_single_graphic_hl_pane_g_ParamLimits

0xfbdd,	// (0x0001efad) list_single_graphic_hl_pane_g

0xe2a0,	// (0x0001d670) list_single_graphic_hl_pane_t1_ParamLimits

0xe2a0,	// (0x0001d670) list_single_graphic_hl_pane_t1

0x822a,	// (0x000175fa) aid_size_min_hl_cp2

0x8233,	// (0x00017603) list_highlight_pane_cp34_cp2_ParamLimits

0x8233,	// (0x00017603) list_highlight_pane_cp34_cp2

0x81e7,	// (0x000175b7) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x81e7,	// (0x000175b7) list_single_graphic_hl_pane_g1_cp2

0x8240,	// (0x00017610) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8240,	// (0x00017610) list_single_graphic_hl_pane_g2_cp2

0x824c,	// (0x0001761c) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x824c,	// (0x0001761c) list_single_graphic_hl_pane_g3_cp2

0x69bf,	// (0x00015d8f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x69bf,	// (0x00015d8f) list_single_graphic_hl_pane_g4_cp2

0x8200,	// (0x000175d0) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8200,	// (0x000175d0) list_single_graphic_hl_pane_g5_cp2

0xba62,	// (0x0001ae32) control_pane_g4_ParamLimits

0xba62,	// (0x0001ae32) control_pane_g4

0x4799,	// (0x00013b69) bg_popup_sub_pane_cp10_ParamLimits

0x7863,	// (0x00016c33) list_choice_list_pane_ParamLimits

0x7872,	// (0x00016c42) scroll_pane_cp23

0x2a44,	// (0x00011e14) bg_popup_preview_window_pane_cp02_ParamLimits

0x7e5a,	// (0x0001722a) list_preview_fixed_pane_ParamLimits

0x7e70,	// (0x00017240) list_preview_fixed_pane_cp_ParamLimits

0x7e70,	// (0x00017240) list_preview_fixed_pane_cp

0x7e7c,	// (0x0001724c) popup_preview_fixed_window_g1_ParamLimits

0x7e7c,	// (0x0001724c) popup_preview_fixed_window_g1

0x7e88,	// (0x00017258) popup_preview_fixed_window_g2_ParamLimits

0x7e88,	// (0x00017258) popup_preview_fixed_window_g2

0x0002,

0xfb65,	// (0x0001ef35) popup_preview_fixed_window_g_ParamLimits

0xfb65,	// (0x0001ef35) popup_preview_fixed_window_g

0x0700,	// (0x0000fad0) aid_navi_side_left_pane_ParamLimits

0x0715,	// (0x0000fae5) aid_navi_side_right_pane_ParamLimits

0x072d,	// (0x0000fafd) navi_icon_pane_stacon_ParamLimits

0x0741,	// (0x0000fb11) navi_navi_pane_stacon_ParamLimits

0x072d,	// (0x0000fafd) navi_text_pane_stacon_ParamLimits

0x0318,	// (0x0000f6e8) main_text_info_pane

0x8270,	// (0x00017640) listscroll_text_info_pane

0x8278,	// (0x00017648) list_text_info_pane_ParamLimits

0x8278,	// (0x00017648) list_text_info_pane

0x8287,	// (0x00017657) scroll_pane_cp24_ParamLimits

0x8287,	// (0x00017657) scroll_pane_cp24

0xe2b6,	// (0x0001d686) list_text_info_pane_t1_ParamLimits

0xe2b6,	// (0x0001d686) list_text_info_pane_t1

0xbbcb,	// (0x0001af9b) popup_fast_swap2_window_ParamLimits

0xbbcb,	// (0x0001af9b) popup_fast_swap2_window

0x82d6,	// (0x000176a6) aid_size_cell_fast2

0x26ad,	// (0x00011a7d) bg_popup_window_pane_cp17

0x5224,	// (0x000145f4) heading_pane_cp2

0x2c93,	// (0x00012063) listscroll_fast2_pane

0x82e0,	// (0x000176b0) grid_fast2_pane

0x82ea,	// (0x000176ba) listscroll_fast2_pane_g1

0x82f2,	// (0x000176c2) listscroll_fast2_pane_g2

0x0001,

0xfbe8,	// (0x0001efb8) listscroll_fast2_pane_g

0x3889,	// (0x00012c59) scroll_pane_cp26

0x82fc,	// (0x000176cc) cell_fast2_pane_ParamLimits

0x82fc,	// (0x000176cc) cell_fast2_pane

0x8311,	// (0x000176e1) cell_fast2_pane_g1

0x831a,	// (0x000176ea) cell_fast2_pane_g2

0x8323,	// (0x000176f3) cell_fast2_pane_g3

0x0002,

0xfbed,	// (0x0001efbd) cell_fast2_pane_g

0x2d86,	// (0x00012156) grid_highlight_pane_cp9

0x0c1b,	// (0x0000ffeb) main_eswt_pane_ParamLimits

0x0c1b,	// (0x0000ffeb) main_eswt_pane

0x829c,	// (0x0001766c) list_single_text_info_pane

0x832b,	// (0x000176fb) eswt_ctrl_button_pane

0x832b,	// (0x000176fb) eswt_ctrl_canvas_pane

0x8333,	// (0x00017703) eswt_ctrl_combo_pane

0x832b,	// (0x000176fb) eswt_ctrl_default_pane

0x832b,	// (0x000176fb) eswt_ctrl_label_pane

0x833b,	// (0x0001770b) eswt_ctrl_wait_pane

0x8343,	// (0x00017713) eswt_shell_pane

0x26ad,	// (0x00011a7d) listscroll_eswt_app_pane

0x8363,	// (0x00017733) popup_eswt_tasktip_window_ParamLimits

0x8363,	// (0x00017733) popup_eswt_tasktip_window

0x4dfb,	// (0x000141cb) bg_popup_window_pane_cp18

0x8374,	// (0x00017744) eswt_control_pane_g1_ParamLimits

0x8374,	// (0x00017744) eswt_control_pane_g1

0x8381,	// (0x00017751) eswt_control_pane_g2_ParamLimits

0x8381,	// (0x00017751) eswt_control_pane_g2

0x838e,	// (0x0001775e) eswt_control_pane_g3_ParamLimits

0x838e,	// (0x0001775e) eswt_control_pane_g3

0x839b,	// (0x0001776b) eswt_control_pane_g4_ParamLimits

0x839b,	// (0x0001776b) eswt_control_pane_g4

0x0003,

0xfbf4,	// (0x0001efc4) eswt_control_pane_g_ParamLimits

0xfbf4,	// (0x0001efc4) eswt_control_pane_g

0x35a5,	// (0x00012975) bg_button_pane_ParamLimits

0x35a5,	// (0x00012975) bg_button_pane

0x2d9b,	// (0x0001216b) common_borders_pane_copy2_ParamLimits

0x2d9b,	// (0x0001216b) common_borders_pane_copy2

0x83a8,	// (0x00017778) control_button_pane_g1_ParamLimits

0x83a8,	// (0x00017778) control_button_pane_g1

0x83b4,	// (0x00017784) control_button_pane_g2_ParamLimits

0x83b4,	// (0x00017784) control_button_pane_g2

0x83c0,	// (0x00017790) control_button_pane_g3_ParamLimits

0x83c0,	// (0x00017790) control_button_pane_g3

0x0002,

0xfbfd,	// (0x0001efcd) control_button_pane_g_ParamLimits

0xfbfd,	// (0x0001efcd) control_button_pane_g

0x83d4,	// (0x000177a4) control_button_pane_t1

0x83e2,	// (0x000177b2) control_button_pane_t2

0x0001,

0xfc04,	// (0x0001efd4) control_button_pane_t

0x4cd9,	// (0x000140a9) bg_button_pane_g1

0x4ce9,	// (0x000140b9) bg_button_pane_g2

0x4ce1,	// (0x000140b1) bg_button_pane_g3

0x4cf9,	// (0x000140c9) bg_button_pane_g4

0x4cf1,	// (0x000140c1) bg_button_pane_g5

0x4d01,	// (0x000140d1) bg_button_pane_g6

0x4d09,	// (0x000140d9) bg_button_pane_g7

0x4d19,	// (0x000140e9) bg_button_pane_g8

0x4d11,	// (0x000140e1) bg_button_pane_g9

0x0008,

0xf85c,	// (0x0001ec2c) bg_button_pane_g

0x781e,	// (0x00016bee) common_borders_pane_ParamLimits

0x781e,	// (0x00016bee) common_borders_pane

0x8374,	// (0x00017744) eswt_control_pane_g1_copy1_ParamLimits

0x8374,	// (0x00017744) eswt_control_pane_g1_copy1

0x8381,	// (0x00017751) eswt_control_pane_g2_copy1_ParamLimits

0x8381,	// (0x00017751) eswt_control_pane_g2_copy1

0x838e,	// (0x0001775e) eswt_control_pane_g3_copy1_ParamLimits

0x838e,	// (0x0001775e) eswt_control_pane_g3_copy1

0x839b,	// (0x0001776b) eswt_control_pane_g4_copy1_ParamLimits

0x839b,	// (0x0001776b) eswt_control_pane_g4_copy1

0x7859,	// (0x00016c29) bg_eswt_ctrl_canvas_pane_g1

0x781e,	// (0x00016bee) common_borders_pane_cp2_ParamLimits

0x781e,	// (0x00016bee) common_borders_pane_cp2

0x781e,	// (0x00016bee) common_borders_pane_cp3_ParamLimits

0x781e,	// (0x00016bee) common_borders_pane_cp3

0x83f0,	// (0x000177c0) separator_horizontal_pane

0x83f8,	// (0x000177c8) separator_vertical_pane

0x8374,	// (0x00017744) eswt_control_pane_g1_copy2_ParamLimits

0x8374,	// (0x00017744) eswt_control_pane_g1_copy2

0x8381,	// (0x00017751) eswt_control_pane_g2_copy2_ParamLimits

0x8381,	// (0x00017751) eswt_control_pane_g2_copy2

0x838e,	// (0x0001775e) eswt_control_pane_g3_copy2_ParamLimits

0x838e,	// (0x0001775e) eswt_control_pane_g3_copy2

0x839b,	// (0x0001776b) eswt_control_pane_g4_copy2_ParamLimits

0x839b,	// (0x0001776b) eswt_control_pane_g4_copy2

0x26ad,	// (0x00011a7d) common_borders_pane_cp4

0x8401,	// (0x000177d1) separator_horizontal_pane_g1

0x840a,	// (0x000177da) separator_horizontal_pane_g2

0x8413,	// (0x000177e3) separator_horizontal_pane_g3

0x0002,

0xfc09,	// (0x0001efd9) separator_horizontal_pane_g

0x8374,	// (0x00017744) eswt_control_pane_g1_copy3_ParamLimits

0x8374,	// (0x00017744) eswt_control_pane_g1_copy3

0x8381,	// (0x00017751) eswt_control_pane_g2_copy3_ParamLimits

0x8381,	// (0x00017751) eswt_control_pane_g2_copy3

0x838e,	// (0x0001775e) eswt_control_pane_g3_copy3_ParamLimits

0x838e,	// (0x0001775e) eswt_control_pane_g3_copy3

0x839b,	// (0x0001776b) eswt_control_pane_g4_copy3_ParamLimits

0x839b,	// (0x0001776b) eswt_control_pane_g4_copy3

0x26ad,	// (0x00011a7d) common_borders_pane_cp5

0x841c,	// (0x000177ec) separator_vertical_pane_g1

0x8425,	// (0x000177f5) separator_vertical_pane_g2

0x842e,	// (0x000177fe) separator_vertical_pane_g3

0x0002,

0xfc10,	// (0x0001efe0) separator_vertical_pane_g

0x8374,	// (0x00017744) eswt_control_pane_g1_copy4_ParamLimits

0x8374,	// (0x00017744) eswt_control_pane_g1_copy4

0x8381,	// (0x00017751) eswt_control_pane_g2_copy4_ParamLimits

0x8381,	// (0x00017751) eswt_control_pane_g2_copy4

0x838e,	// (0x0001775e) eswt_control_pane_g3_copy4_ParamLimits

0x838e,	// (0x0001775e) eswt_control_pane_g3_copy4

0x839b,	// (0x0001776b) eswt_control_pane_g4_copy4_ParamLimits

0x839b,	// (0x0001776b) eswt_control_pane_g4_copy4

0xe2d1,	// (0x0001d6a1) eswt_ctrl_combo_button_pane

0xe2d9,	// (0x0001d6a9) eswt_ctrl_input_pane

0xe2e1,	// (0x0001d6b1) popup_choice_list_window_cp70

0xe2e9,	// (0x0001d6b9) eswt_ctrl_input_pane_t1

0x26ad,	// (0x00011a7d) input_focus_pane_cp70

0x781e,	// (0x00016bee) bg_button_pane_cp70_ParamLimits

0x781e,	// (0x00016bee) bg_button_pane_cp70

0xe2f7,	// (0x0001d6c7) eswt_ctrl_combo_button_pane_g1

0x8465,	// (0x00017835) wait_bar_pane_cp70

0x4dfb,	// (0x000141cb) bg_popup_window_pane_cp70_ParamLimits

0x4dfb,	// (0x000141cb) bg_popup_window_pane_cp70

0x846d,	// (0x0001783d) popup_eswt_tasktip_window_t1

0x8483,	// (0x00017853) wait_bar_pane_cp71_ParamLimits

0x8483,	// (0x00017853) wait_bar_pane_cp71

0x848f,	// (0x0001785f) grid_eswt_app_pane

0x3ba9,	// (0x00012f79) scroll_pane_cp70

0xe2ff,	// (0x0001d6cf) cell_eswt_app_pane_ParamLimits

0xe2ff,	// (0x0001d6cf) cell_eswt_app_pane

0xe329,	// (0x0001d6f9) cell_eswt_app_pane_g1_ParamLimits

0xe329,	// (0x0001d6f9) cell_eswt_app_pane_g1

0xe358,	// (0x0001d728) cell_eswt_app_pane_g2_ParamLimits

0xe358,	// (0x0001d728) cell_eswt_app_pane_g2

0x0001,

0xfc17,	// (0x0001efe7) cell_eswt_app_pane_g_ParamLimits

0xfc17,	// (0x0001efe7) cell_eswt_app_pane_g

0xe381,	// (0x0001d751) cell_eswt_app_pane_t1_ParamLimits

0xe381,	// (0x0001d751) cell_eswt_app_pane_t1

0x8552,	// (0x00017922) grid_highlight_pane_cp70_ParamLimits

0x8552,	// (0x00017922) grid_highlight_pane_cp70

0x4317,	// (0x000136e7) set_content_pane_g1

0xd4ff,	// (0x0001c8cf) status_small_volume_pane

0x1a5e,	// (0x00010e2e) status_small_volume_pane_g1

0x1a66,	// (0x00010e36) volume_small2_pane

0x1a6f,	// (0x00010e3f) volume_small2_pane_g1

0x1a78,	// (0x00010e48) volume_small2_pane_g2

0x1a81,	// (0x00010e51) volume_small2_pane_g3

0x1a8a,	// (0x00010e5a) volume_small2_pane_g4

0x1a93,	// (0x00010e63) volume_small2_pane_g5

0x1a9c,	// (0x00010e6c) volume_small2_pane_g6

0x1aa5,	// (0x00010e75) volume_small2_pane_g7

0x1aae,	// (0x00010e7e) volume_small2_pane_g8

0x1ab7,	// (0x00010e87) volume_small2_pane_g9

0x1ac0,	// (0x00010e90) volume_small2_pane_g10

0x0009,

0xfc1c,	// (0x0001efec) volume_small2_pane_g

0x7c1f,	// (0x00016fef) fep_vkb_top_text_pane_g1_ParamLimits

0xe228,	// (0x0001d5f8) fep_vkb_top_text_pane_t1_ParamLimits

0x7e94,	// (0x00017264) popup_preview_fixed_window_g3_ParamLimits

0x7e94,	// (0x00017264) popup_preview_fixed_window_g3

0xc1ee,	// (0x0001b5be) popup_toolbar_trans_pane

0xdbcc,	// (0x0001cf9c) aid_height_set_list_ParamLimits

0x61cd,	// (0x0001559d) aid_size_parent_ParamLimits

0x4799,	// (0x00013b69) list_highlight_pane_cp2_ParamLimits

0x4317,	// (0x000136e7) set_content_pane_g1_ParamLimits

0xdd85,	// (0x0001d155) list_single_image_pane_ParamLimits

0xdd85,	// (0x0001d155) list_single_image_pane

0xe3b3,	// (0x0001d783) aid_size_cell_image_ParamLimits

0xe3b3,	// (0x0001d783) aid_size_cell_image

0xe3c0,	// (0x0001d790) grid_single_image_pane_ParamLimits

0xe3c0,	// (0x0001d790) grid_single_image_pane

0x568f,	// (0x00014a5f) list_single_image_pane_g1_ParamLimits

0x568f,	// (0x00014a5f) list_single_image_pane_g1

0x8577,	// (0x00017947) list_single_image_pane_g2_ParamLimits

0x8577,	// (0x00017947) list_single_image_pane_g2

0x0001,

0xfc31,	// (0x0001f001) list_single_image_pane_g_ParamLimits

0xfc31,	// (0x0001f001) list_single_image_pane_g

0x858b,	// (0x0001795b) list_single_image_pane_t1_ParamLimits

0x858b,	// (0x0001795b) list_single_image_pane_t1

0xe3ce,	// (0x0001d79e) cell_image_list_pane_ParamLimits

0xe3ce,	// (0x0001d79e) cell_image_list_pane

0xe3e4,	// (0x0001d7b4) cell_image_list_pane_g1

0xe3ed,	// (0x0001d7bd) cell_image_list_pane_g2

0x0001,

0xfc36,	// (0x0001f006) cell_image_list_pane_g

0x85c7,	// (0x00017997) aid_size_cell_tb_trans_pane

0x35a5,	// (0x00012975) bg_tb_trans_pane

0x85d9,	// (0x000179a9) grid_tb_trans_pane

0x4cd9,	// (0x000140a9) bg_tb_trans_pane_g1

0x4ce9,	// (0x000140b9) bg_tb_trans_pane_g2

0x4ce1,	// (0x000140b1) bg_tb_trans_pane_g3

0x4cf9,	// (0x000140c9) bg_tb_trans_pane_g4

0x4cf1,	// (0x000140c1) bg_tb_trans_pane_g5

0x4d19,	// (0x000140e9) bg_tb_trans_pane_g6

0x4d11,	// (0x000140e1) bg_tb_trans_pane_g7

0x4d01,	// (0x000140d1) bg_tb_trans_pane_g8

0x4d09,	// (0x000140d9) bg_tb_trans_pane_g9

0x0008,

0xfc3b,	// (0x0001f00b) bg_tb_trans_pane_g

0x85ed,	// (0x000179bd) cell_toolbar_trans_pane_ParamLimits

0x85ed,	// (0x000179bd) cell_toolbar_trans_pane

0x7859,	// (0x00016c29) cell_toolbar_trans_pane_g1

0xdfdf,	// (0x0001d3af) list_form2_midp_pane_t1

0xdfed,	// (0x0001d3bd) list_form2_midp_pane_t2

0x0001,

0xfad8,	// (0x0001eea8) list_form2_midp_pane_t

0x73fb,	// (0x000167cb) scroll_pane_cp51_ParamLimits

0x7606,	// (0x000169d6) form2_midp_wait_pane_g1

0x760f,	// (0x000169df) form2_midp_wait_pane_g2

0x7618,	// (0x000169e8) form2_midp_wait_pane_g3

0x0002,

0xfaed,	// (0x0001eebd) form2_midp_wait_pane_g

0x27a1,	// (0x00011b71) list_highlight_pane_cp21_ParamLimits

0x7664,	// (0x00016a34) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7673,	// (0x00016a43) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x63d3,	// (0x000157a3) list_single_2graphic_im_pane_ParamLimits

0x63d3,	// (0x000157a3) list_single_2graphic_im_pane

0xe3f6,	// (0x0001d7c6) list_single_2graphic_im_pane_g1_ParamLimits

0xe3f6,	// (0x0001d7c6) list_single_2graphic_im_pane_g1

0xe407,	// (0x0001d7d7) list_single_2graphic_im_pane_g2_ParamLimits

0xe407,	// (0x0001d7d7) list_single_2graphic_im_pane_g2

0xe413,	// (0x0001d7e3) list_single_2graphic_im_pane_g3_ParamLimits

0xe413,	// (0x0001d7e3) list_single_2graphic_im_pane_g3

0x0003,

0xfc4e,	// (0x0001f01e) list_single_2graphic_im_pane_g_ParamLimits

0xfc4e,	// (0x0001f01e) list_single_2graphic_im_pane_g

0xe427,	// (0x0001d7f7) list_single_2graphic_im_pane_t1_ParamLimits

0xe427,	// (0x0001d7f7) list_single_2graphic_im_pane_t1

0x7ea0,	// (0x00017270) list_single_graphic_2heading_pane_fp_ParamLimits

0x7ea0,	// (0x00017270) list_single_graphic_2heading_pane_fp

0x7ee4,	// (0x000172b4) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7ee4,	// (0x000172b4) list_single_graphic_2heading_pane_fp_g1

0x7eb5,	// (0x00017285) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7eb5,	// (0x00017285) list_single_graphic_2heading_pane_fp_g2

0x31ee,	// (0x000125be) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x31ee,	// (0x000125be) list_single_graphic_2heading_pane_fp_g3

0x35cb,	// (0x0001299b) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x35cb,	// (0x0001299b) list_single_graphic_2heading_pane_fp_g4

0x7ec1,	// (0x00017291) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7ec1,	// (0x00017291) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb75,	// (0x0001ef45) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb75,	// (0x0001ef45) list_single_graphic_2heading_pane_fp_g

0x8681,	// (0x00017a51) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x8681,	// (0x00017a51) list_single_graphic_2heading_pane_fp_t1

0x7f1c,	// (0x000172ec) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7f1c,	// (0x000172ec) list_single_graphic_2heading_pane_fp_t2

0x8697,	// (0x00017a67) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x8697,	// (0x00017a67) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc57,	// (0x0001f027) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc57,	// (0x0001f027) list_single_graphic_2heading_pane_fp_t

0x78e5,	// (0x00016cb5) fep_hwr_write_pane_g5_ParamLimits

0x78e5,	// (0x00016cb5) fep_hwr_write_pane_g5

0x78f1,	// (0x00016cc1) fep_hwr_write_pane_g6_ParamLimits

0x78f1,	// (0x00016cc1) fep_hwr_write_pane_g6

0x8343,	// (0x00017713) eswt_shell_pane_ParamLimits

0x4dfb,	// (0x000141cb) bg_popup_window_pane_cp18_ParamLimits

0x60ed,	// (0x000154bd) heading_pane_cp70

0x846d,	// (0x0001783d) popup_eswt_tasktip_window_t1_ParamLimits

0xd5cd,	// (0x0001c99d) aid_touch_tab_arrow_left

0xd5e3,	// (0x0001c9b3) aid_touch_tab_arrow_right

0xc8fe,	// (0x0001bcce) title_pane_g3_ParamLimits

0xc8fe,	// (0x0001bcce) title_pane_g3

0x3484,	// (0x00012854) set_value_pane_g1

0xc1ee,	// (0x0001b5be) popup_toolbar_trans_pane_ParamLimits

0x85c7,	// (0x00017997) aid_size_cell_tb_trans_pane_ParamLimits

0x35a5,	// (0x00012975) bg_tb_trans_pane_ParamLimits

0x85d9,	// (0x000179a9) grid_tb_trans_pane_ParamLimits

0x2a44,	// (0x00011e14) cont_note_pane_ParamLimits

0x2a44,	// (0x00011e14) cont_note_pane

0x2d9b,	// (0x0001216b) cont_snote2_single_text_pane_ParamLimits

0x2d9b,	// (0x0001216b) cont_snote2_single_text_pane

0x2d9b,	// (0x0001216b) cont_snote2_single_graphic_pane_ParamLimits

0x2d9b,	// (0x0001216b) cont_snote2_single_graphic_pane

0x543f,	// (0x0001480f) cont_note_wait_pane_ParamLimits

0x543f,	// (0x0001480f) cont_note_wait_pane

0x543f,	// (0x0001480f) cont_note_image_pane_ParamLimits

0x543f,	// (0x0001480f) cont_note_image_pane

0x86ad,	// (0x00017a7d) popup_note2_window_g1_ParamLimits

0x86ad,	// (0x00017a7d) popup_note2_window_g1

0x86de,	// (0x00017aae) popup_note2_window_t1_ParamLimits

0x86de,	// (0x00017aae) popup_note2_window_t1

0x8723,	// (0x00017af3) popup_note2_window_t2_ParamLimits

0x8723,	// (0x00017af3) popup_note2_window_t2

0x8768,	// (0x00017b38) popup_note2_window_t3_ParamLimits

0x8768,	// (0x00017b38) popup_note2_window_t3

0x87ad,	// (0x00017b7d) popup_note2_window_t4_ParamLimits

0x87ad,	// (0x00017b7d) popup_note2_window_t4

0x2ac8,	// (0x00011e98) popup_note2_window_t5_ParamLimits

0x2ac8,	// (0x00011e98) popup_note2_window_t5

0x0004,

0xfc63,	// (0x0001f033) popup_note2_window_t_ParamLimits

0xfc63,	// (0x0001f033) popup_note2_window_t

0x87dc,	// (0x00017bac) popup_note2_image_window_g1_ParamLimits

0x87dc,	// (0x00017bac) popup_note2_image_window_g1

0x87e8,	// (0x00017bb8) popup_note2_image_window_g2_ParamLimits

0x87e8,	// (0x00017bb8) popup_note2_image_window_g2

0x0001,

0xfc6e,	// (0x0001f03e) popup_note2_image_window_g_ParamLimits

0xfc6e,	// (0x0001f03e) popup_note2_image_window_g

0x87fa,	// (0x00017bca) popup_note2_image_window_t1_ParamLimits

0x87fa,	// (0x00017bca) popup_note2_image_window_t1

0x8812,	// (0x00017be2) popup_note2_image_window_t2_ParamLimits

0x8812,	// (0x00017be2) popup_note2_image_window_t2

0x882a,	// (0x00017bfa) popup_note2_image_window_t3_ParamLimits

0x882a,	// (0x00017bfa) popup_note2_image_window_t3

0x0002,

0xfc73,	// (0x0001f043) popup_note2_image_window_t_ParamLimits

0xfc73,	// (0x0001f043) popup_note2_image_window_t

0x544d,	// (0x0001481d) popup_note2_wait_window_g1_ParamLimits

0x544d,	// (0x0001481d) popup_note2_wait_window_g1

0x8846,	// (0x00017c16) popup_note2_wait_window_g2_ParamLimits

0x8846,	// (0x00017c16) popup_note2_wait_window_g2

0x5465,	// (0x00014835) popup_note2_wait_window_g3_ParamLimits

0x5465,	// (0x00014835) popup_note2_wait_window_g3

0x0002,

0xfc7a,	// (0x0001f04a) popup_note2_wait_window_g_ParamLimits

0xfc7a,	// (0x0001f04a) popup_note2_wait_window_g

0x8852,	// (0x00017c22) popup_note2_wait_window_t1_ParamLimits

0x8852,	// (0x00017c22) popup_note2_wait_window_t1

0x8870,	// (0x00017c40) popup_note2_wait_window_t2_ParamLimits

0x8870,	// (0x00017c40) popup_note2_wait_window_t2

0x888e,	// (0x00017c5e) popup_note2_wait_window_t3_ParamLimits

0x888e,	// (0x00017c5e) popup_note2_wait_window_t3

0x88a0,	// (0x00017c70) popup_note2_wait_window_t4_ParamLimits

0x88a0,	// (0x00017c70) popup_note2_wait_window_t4

0x0003,

0xfc81,	// (0x0001f051) popup_note2_wait_window_t_ParamLimits

0xfc81,	// (0x0001f051) popup_note2_wait_window_t

0x88b2,	// (0x00017c82) wait_bar2_pane_ParamLimits

0x88b2,	// (0x00017c82) wait_bar2_pane

0x88ca,	// (0x00017c9a) popup_snote2_single_text_window_g1_ParamLimits

0x88ca,	// (0x00017c9a) popup_snote2_single_text_window_g1

0x88f2,	// (0x00017cc2) popup_snote2_single_text_window_t1_ParamLimits

0x88f2,	// (0x00017cc2) popup_snote2_single_text_window_t1

0x893e,	// (0x00017d0e) popup_snote2_single_text_window_t2_ParamLimits

0x893e,	// (0x00017d0e) popup_snote2_single_text_window_t2

0x898a,	// (0x00017d5a) popup_snote2_single_text_window_t3_ParamLimits

0x898a,	// (0x00017d5a) popup_snote2_single_text_window_t3

0x89cb,	// (0x00017d9b) popup_snote2_single_text_window_t4_ParamLimits

0x89cb,	// (0x00017d9b) popup_snote2_single_text_window_t4

0x8a01,	// (0x00017dd1) popup_snote2_single_text_window_t5_ParamLimits

0x8a01,	// (0x00017dd1) popup_snote2_single_text_window_t5

0x0004,

0xfc8a,	// (0x0001f05a) popup_snote2_single_text_window_t_ParamLimits

0xfc8a,	// (0x0001f05a) popup_snote2_single_text_window_t

0x8a2c,	// (0x00017dfc) popup_snote2_single_graphic_window_g1_ParamLimits

0x8a2c,	// (0x00017dfc) popup_snote2_single_graphic_window_g1

0x8a54,	// (0x00017e24) popup_snote2_single_graphic_window_g2_ParamLimits

0x8a54,	// (0x00017e24) popup_snote2_single_graphic_window_g2

0x0001,

0xfc95,	// (0x0001f065) popup_snote2_single_graphic_window_g_ParamLimits

0xfc95,	// (0x0001f065) popup_snote2_single_graphic_window_g

0x8a7c,	// (0x00017e4c) popup_snote2_single_graphic_window_t1_ParamLimits

0x8a7c,	// (0x00017e4c) popup_snote2_single_graphic_window_t1

0x8ac8,	// (0x00017e98) popup_snote2_single_graphic_window_t2_ParamLimits

0x8ac8,	// (0x00017e98) popup_snote2_single_graphic_window_t2

0x898a,	// (0x00017d5a) popup_snote2_single_graphic_window_t3_ParamLimits

0x898a,	// (0x00017d5a) popup_snote2_single_graphic_window_t3

0x89cb,	// (0x00017d9b) popup_snote2_single_graphic_window_t4_ParamLimits

0x89cb,	// (0x00017d9b) popup_snote2_single_graphic_window_t4

0x8a01,	// (0x00017dd1) popup_snote2_single_graphic_window_t5_ParamLimits

0x8a01,	// (0x00017dd1) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9a,	// (0x0001f06a) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9a,	// (0x0001f06a) popup_snote2_single_graphic_window_t

0x72bc,	// (0x0001668c) clock_nsta_pane_cp2_t1

0x72bc,	// (0x0001668c) clock_nsta_pane_cp2_t2

0x0001,

0xfaae,	// (0x0001ee7e) clock_nsta_pane_cp2_t

0x35bf,	// (0x0001298f) form_field_data_wide_pane_g1_ParamLimits

0x31ee,	// (0x000125be) form_field_data_wide_pane_g2_ParamLimits

0x31ee,	// (0x000125be) form_field_data_wide_pane_g2

0x35cb,	// (0x0001299b) form_field_data_wide_pane_g3_ParamLimits

0x35cb,	// (0x0001299b) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0001ea46) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0001ea46) form_field_data_wide_pane_g

0xdf22,	// (0x0001d2f2) grid_touch_3_pane_ParamLimits

0xdf22,	// (0x0001d2f2) grid_touch_3_pane

0xe458,	// (0x0001d828) cell_touch_3_pane_ParamLimits

0xe458,	// (0x0001d828) cell_touch_3_pane

0x7859,	// (0x00016c29) cell_touch_3_pane_g1

0x7859,	// (0x00016c29) cell_touch_3_pane_g2

0x0001,

0xfb33,	// (0x0001ef03) cell_touch_3_pane_g

0x2afa,	// (0x00011eca) cont_query_data_pane

0x2b02,	// (0x00011ed2) cont_query_data_pane_cp1

0x8b42,	// (0x00017f12) button_value_adjust_pane_cp7

0x8b4a,	// (0x00017f1a) query_popup_pane_cp3

0x3e90,	// (0x00013260) bg_popup_sub_pane_cp22_ParamLimits

0x0842,	// (0x0000fc12) navi_navi_volume_pane_cp2

0x085d,	// (0x0000fc2d) popup_side_volume_key_window_g2

0x086c,	// (0x0000fc3c) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001eadc) popup_side_volume_key_window_g

0x0889,	// (0x0000fc59) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0001eae3) popup_side_volume_key_window_t

0x41d6,	// (0x000135a6) popup_side_volume_key_window_ParamLimits

0xcd4c,	// (0x0001c11c) list_double_graphic_pane_g4_ParamLimits

0xcd4c,	// (0x0001c11c) list_double_graphic_pane_g4

0xdd61,	// (0x0001d131) list_single_2heading_msg_pane_ParamLimits

0xdd61,	// (0x0001d131) list_single_2heading_msg_pane

0xe4a0,	// (0x0001d870) list_single_2heading_msg_pane_g1_ParamLimits

0xe4a0,	// (0x0001d870) list_single_2heading_msg_pane_g1

0xe4ac,	// (0x0001d87c) list_single_2heading_msg_pane_g2_ParamLimits

0xe4ac,	// (0x0001d87c) list_single_2heading_msg_pane_g2

0xe4bf,	// (0x0001d88f) list_single_2heading_msg_pane_g3_ParamLimits

0xe4bf,	// (0x0001d88f) list_single_2heading_msg_pane_g3

0xe4cb,	// (0x0001d89b) list_single_2heading_msg_pane_g4_ParamLimits

0xe4cb,	// (0x0001d89b) list_single_2heading_msg_pane_g4

0x0003,

0xfca5,	// (0x0001f075) list_single_2heading_msg_pane_g_ParamLimits

0xfca5,	// (0x0001f075) list_single_2heading_msg_pane_g

0xe4e3,	// (0x0001d8b3) list_single_2heading_msg_pane_t1_ParamLimits

0xe4e3,	// (0x0001d8b3) list_single_2heading_msg_pane_t1

0xe50b,	// (0x0001d8db) list_single_2heading_msg_pane_t2_ParamLimits

0xe50b,	// (0x0001d8db) list_single_2heading_msg_pane_t2

0xe576,	// (0x0001d946) list_single_2heading_msg_pane_t3_ParamLimits

0xe576,	// (0x0001d946) list_single_2heading_msg_pane_t3

0x8c2d,	// (0x00017ffd) list_single_2heading_msg_pane_t4_ParamLimits

0x8c2d,	// (0x00017ffd) list_single_2heading_msg_pane_t4

0x0003,

0xfcae,	// (0x0001f07e) list_single_2heading_msg_pane_t_ParamLimits

0xfcae,	// (0x0001f07e) list_single_2heading_msg_pane_t

0x26f5,	// (0x00011ac5) title_pane_g4_ParamLimits

0x26f5,	// (0x00011ac5) title_pane_g4

0x0651,	// (0x0000fa21) title_pane_stacon_g3_ParamLimits

0x0651,	// (0x0000fa21) title_pane_stacon_g3

0x8644,	// (0x00017a14) list_single_2graphic_im_pane_g4_ParamLimits

0x8644,	// (0x00017a14) list_single_2graphic_im_pane_g4

0x5eaa,	// (0x0001527a) popup_side_volume_key_window_cp

0x67b6,	// (0x00015b86) main_idle_act2_pane_t1

0x1262,	// (0x00010632) toolbar_button_pane_g10

0xcc09,	// (0x0001bfd9) popup_toolbar_window_cp1

0x72ad,	// (0x0001667d) clock_nsta_pane_cp_t1

0x72ad,	// (0x0001667d) clock_nsta_pane_cp_t2

0x0001,

0xfaa9,	// (0x0001ee79) clock_nsta_pane_cp_t

0x0842,	// (0x0000fc12) navi_navi_volume_pane_cp2_ParamLimits

0x0851,	// (0x0000fc21) popup_side_volume_key_window_g1_ParamLimits

0x085d,	// (0x0000fc2d) popup_side_volume_key_window_g2_ParamLimits

0x086c,	// (0x0000fc3c) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001eadc) popup_side_volume_key_window_g_ParamLimits

0x16ca,	// (0x00010a9a) fep_hwr_aid_pane

0x1771,	// (0x00010b41) bg_fep_hwr_top_pane_g4_ParamLimits

0x78b5,	// (0x00016c85) fep_hwr_top_pane_g1_ParamLimits

0x78c7,	// (0x00016c97) fep_hwr_top_pane_g2_ParamLimits

0x1791,	// (0x00010b61) fep_hwr_top_pane_g3_ParamLimits

0xfafe,	// (0x0001eece) fep_hwr_top_pane_g_ParamLimits

0x17a6,	// (0x00010b76) fep_hwr_top_text_pane_ParamLimits

0x5c6d,	// (0x0001503d) aid_touch_tab_arrow_arrow_2

0x5c76,	// (0x00015046) aid_touch_tab_arrow_left_2

0x16de,	// (0x00010aae) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1715,	// (0x00010ae5) fep_hwr_prediction_pane

0x7a27,	// (0x00016df7) fep_vkb_prediction_pane

0xe208,	// (0x0001d5d8) fep_vkb_side_pane_g3_ParamLimits

0xe208,	// (0x0001d5d8) fep_vkb_side_pane_g3

0x1921,	// (0x00010cf1) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x198d,	// (0x00010d5d) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x199a,	// (0x00010d6a) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbad,	// (0x0001ef7d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1ac9,	// (0x00010e99) fep_hwr_prediction_pane_g1

0x1ad3,	// (0x00010ea3) fep_hwr_prediction_pane_g2

0x1adb,	// (0x00010eab) fep_hwr_prediction_pane_g3

0x1ae3,	// (0x00010eb3) fep_hwr_prediction_pane_g4

0x0003,

0xfcb7,	// (0x0001f087) fep_hwr_prediction_pane_g

0x8c52,	// (0x00018022) fep_vkb_prediction_pane_g1

0x8c5c,	// (0x0001802c) fep_vkb_prediction_pane_g2

0x8c64,	// (0x00018034) fep_vkb_prediction_pane_g3

0x8c6c,	// (0x0001803c) fep_vkb_prediction_pane_g4

0x0003,

0xfcc0,	// (0x0001f090) fep_vkb_prediction_pane_g

0x154a,	// (0x0001091a) slider_set_pane_g3

0x155e,	// (0x0001092e) slider_set_pane_g4

0x1576,	// (0x00010946) slider_set_pane_g5

0x154a,	// (0x0001091a) slider_set_pane_g6

0x158c,	// (0x0001095c) slider_set_pane_g7

0x6332,	// (0x00015702) slider_form_pane_g3

0x633b,	// (0x0001570b) slider_form_pane_g4

0x6343,	// (0x00015713) slider_form_pane_g5

0x6332,	// (0x00015702) slider_form_pane_g6

0xdd17,	// (0x0001d0e7) slider_form_pane_g7

0x6ab2,	// (0x00015e82) slider_set_pane_vc_g3

0x6abb,	// (0x00015e8b) slider_set_pane_vc_g4

0x6ac4,	// (0x00015e94) slider_set_pane_vc_g5

0x6ab2,	// (0x00015e82) slider_set_pane_vc_g6

0x6acd,	// (0x00015e9d) slider_set_pane_vc_g7

0x6f92,	// (0x00016362) slider_form_pane_vc_g1

0x6f9b,	// (0x0001636b) slider_form_pane_vc_g2

0x6fa4,	// (0x00016374) slider_form_pane_vc_g3

0x6f92,	// (0x00016362) slider_form_pane_vc_g4

0x6fad,	// (0x0001637d) slider_form_pane_vc_g5

0x0004,

0xfa7b,	// (0x0001ee4b) slider_form_pane_vc_g

0x0318,	// (0x0000f6e8) main_idle_act3_pane

0x8c74,	// (0x00018044) ai3_links_pane

0xe5e4,	// (0x0001d9b4) popup_ai3_data_window_ParamLimits

0xe5e4,	// (0x0001d9b4) popup_ai3_data_window

0x26ad,	// (0x00011a7d) grid_ai3_links_pane

0xe5fe,	// (0x0001d9ce) cell_ai3_links_pane_ParamLimits

0xe5fe,	// (0x0001d9ce) cell_ai3_links_pane

0x8caf,	// (0x0001807f) bg_popup_sub_pane_cp11

0x8cbc,	// (0x0001808c) cell_ai3_links_pane_g1

0x26ad,	// (0x00011a7d) bg_popup_sub_pane_cp12

0x8ce1,	// (0x000180b1) heading_ai3_data_pane

0x8ce9,	// (0x000180b9) list_ai3_gene_pane

0x8cf5,	// (0x000180c5) popup_ai3_data_window_g1

0x8cfd,	// (0x000180cd) heading_ai3_data_pane_g1

0x8d05,	// (0x000180d5) heading_ai3_data_pane_t1

0x8d13,	// (0x000180e3) list_double_ai3_gene_pane_ParamLimits

0x8d13,	// (0x000180e3) list_double_ai3_gene_pane

0x8d20,	// (0x000180f0) list_single_ai3_gene_pane_ParamLimits

0x8d20,	// (0x000180f0) list_single_ai3_gene_pane

0x781e,	// (0x00016bee) list_highlight_pane_cp7_ParamLimits

0x781e,	// (0x00016bee) list_highlight_pane_cp7

0x8d2d,	// (0x000180fd) list_single_a13_gene_pane_t1_ParamLimits

0x8d2d,	// (0x000180fd) list_single_a13_gene_pane_t1

0x8d44,	// (0x00018114) list_single_ai3_gene_pane_g1

0x8d4d,	// (0x0001811d) list_single_ai3_gene_pane_g2

0x0001,

0xfcc9,	// (0x0001f099) list_single_ai3_gene_pane_g

0x8d55,	// (0x00018125) list_double_ai3_gene_pane_g1_ParamLimits

0x8d55,	// (0x00018125) list_double_ai3_gene_pane_g1

0x8d61,	// (0x00018131) list_double_ai3_gene_pane_t1_ParamLimits

0x8d61,	// (0x00018131) list_double_ai3_gene_pane_t1

0x8d7d,	// (0x0001814d) list_double_ai3_gene_pane_t2_ParamLimits

0x8d7d,	// (0x0001814d) list_double_ai3_gene_pane_t2

0x8d93,	// (0x00018163) list_double_ai3_gene_pane_t3_ParamLimits

0x8d93,	// (0x00018163) list_double_ai3_gene_pane_t3

0x0002,

0xfcce,	// (0x0001f09e) list_double_ai3_gene_pane_t_ParamLimits

0xfcce,	// (0x0001f09e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x8b5b,	// (0x00017f2b) aid_size_min_col_2

0xe48a,	// (0x0001d85a) aid_size_min_msg_ParamLimits

0xe48a,	// (0x0001d85a) aid_size_min_msg

0xe21c,	// (0x0001d5ec) fep_vkb_top_text_pane_g2_ParamLimits

0xe21c,	// (0x0001d5ec) fep_vkb_top_text_pane_g2

0x0001,

0xfb2e,	// (0x0001eefe) fep_vkb_top_text_pane_g_ParamLimits

0xfb2e,	// (0x0001eefe) fep_vkb_top_text_pane_g

0x0318,	// (0x0000f6e8) main_hc_apps_shell_pane

0x8db0,	// (0x00018180) grid_hc_apps_pane_ParamLimits

0x8db0,	// (0x00018180) grid_hc_apps_pane

0x8dbf,	// (0x0001818f) list_hc_apps_pane

0x8dc7,	// (0x00018197) scroll_pane_cp37_ParamLimits

0x8dc7,	// (0x00018197) scroll_pane_cp37

0xe618,	// (0x0001d9e8) cell_hc_apps_pane_ParamLimits

0xe618,	// (0x0001d9e8) cell_hc_apps_pane

0xe6d6,	// (0x0001daa6) cell_hc_apps_pane_g1_ParamLimits

0xe6d6,	// (0x0001daa6) cell_hc_apps_pane_g1

0x8eb2,	// (0x00018282) cell_hc_apps_pane_g2_ParamLimits

0x8eb2,	// (0x00018282) cell_hc_apps_pane_g2

0x8ece,	// (0x0001829e) cell_hc_apps_pane_g3_ParamLimits

0x8ece,	// (0x0001829e) cell_hc_apps_pane_g3

0x0002,

0xfcd5,	// (0x0001f0a5) cell_hc_apps_pane_g_ParamLimits

0xfcd5,	// (0x0001f0a5) cell_hc_apps_pane_g

0xe703,	// (0x0001dad3) cell_hc_apps_pane_t1_ParamLimits

0xe703,	// (0x0001dad3) cell_hc_apps_pane_t1

0x2a44,	// (0x00011e14) grid_highlight_pane_cp10_ParamLimits

0x2a44,	// (0x00011e14) grid_highlight_pane_cp10

0xe741,	// (0x0001db11) list_single_hc_apps_pane_ParamLimits

0xe741,	// (0x0001db11) list_single_hc_apps_pane

0xe76e,	// (0x0001db3e) list_single_hc_apps_pane_g1

0xe787,	// (0x0001db57) list_single_hc_apps_pane_g2

0x0001,

0xfcdc,	// (0x0001f0ac) list_single_hc_apps_pane_g

0xe7a0,	// (0x0001db70) list_single_hc_apps_pane_g2_copy1

0x8fda,	// (0x000183aa) list_single_hc_apps_pane_t1

0x27a1,	// (0x00011b71) bg_set_opt_pane_cp_ParamLimits

0x0579,	// (0x0000f949) setting_slider_pane_t1_ParamLimits

0x0592,	// (0x0000f962) setting_slider_pane_t2_ParamLimits

0x05ac,	// (0x0000f97c) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001e92e) setting_slider_pane_t_ParamLimits

0x05c4,	// (0x0000f994) slider_set_pane_ParamLimits

0x0aeb,	// (0x0000febb) control_pane_g5_ParamLimits

0x0aeb,	// (0x0000febb) control_pane_g5

0x6181,	// (0x00015551) slider_set_pane_g1_ParamLimits

0x153e,	// (0x0001090e) slider_set_pane_g2_ParamLimits

0x154a,	// (0x0001091a) slider_set_pane_g3_ParamLimits

0x155e,	// (0x0001092e) slider_set_pane_g4_ParamLimits

0x1576,	// (0x00010946) slider_set_pane_g5_ParamLimits

0x154a,	// (0x0001091a) slider_set_pane_g6_ParamLimits

0x158c,	// (0x0001095c) slider_set_pane_g7_ParamLimits

0xf95a,	// (0x0001ed2a) slider_set_pane_g_ParamLimits

0x42c2,	// (0x00013692) navi_icon_text_pane_ParamLimits

0xd596,	// (0x0001c966) aid_fill_nsta_2_ParamLimits

0xd5cd,	// (0x0001c99d) aid_touch_tab_arrow_left_ParamLimits

0xd5e3,	// (0x0001c9b3) aid_touch_tab_arrow_right_ParamLimits

0xd67e,	// (0x0001ca4e) clock_nsta_pane_ParamLimits

0x5c4f,	// (0x0001501f) navi_icon_pane_g1_ParamLimits

0x5c5b,	// (0x0001502b) navi_text_pane_t1_ParamLimits

0x73b9,	// (0x00016789) navi_icon_text_pane_g1_ParamLimits

0x73c5,	// (0x00016795) navi_icon_text_pane_t1_ParamLimits

0xe76e,	// (0x0001db3e) list_single_hc_apps_pane_g1_ParamLimits

0xe787,	// (0x0001db57) list_single_hc_apps_pane_g2_ParamLimits

0xfcdc,	// (0x0001f0ac) list_single_hc_apps_pane_g_ParamLimits

0xe7a0,	// (0x0001db70) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8fda,	// (0x000183aa) list_single_hc_apps_pane_t1_ParamLimits

0xb937,	// (0x0001ad07) popup_toolbar2_fixed_window_ParamLimits

0xb937,	// (0x0001ad07) popup_toolbar2_fixed_window

0xc1e4,	// (0x0001b5b4) popup_toolbar2_float_window

0x26ad,	// (0x00011a7d) bg_popup_sub_pane_cp27

0x9008,	// (0x000183d8) grid_toolbar2_float_pane

0x26ad,	// (0x00011a7d) bg_popup_sub_pane_cp26

0x9008,	// (0x000183d8) grid_toolbar2_fixed_pane

0xe7bc,	// (0x0001db8c) cell_toolbar2_fixed_pane_ParamLimits

0xe7bc,	// (0x0001db8c) cell_toolbar2_fixed_pane

0xe7d6,	// (0x0001dba6) cell_toolbar2_fixed_pane_g1

0x9029,	// (0x000183f9) toolbar2_fixed_button_pane

0x4cd9,	// (0x000140a9) toolbar2_fixed_button_pane_g1

0x4ce9,	// (0x000140b9) toolbar2_fixed_button_pane_g2

0x4ce1,	// (0x000140b1) toolbar2_fixed_button_pane_g3

0x4cf9,	// (0x000140c9) toolbar2_fixed_button_pane_g4

0x4cf1,	// (0x000140c1) toolbar2_fixed_button_pane_g5

0x4d01,	// (0x000140d1) toolbar2_fixed_button_pane_g6

0x4d09,	// (0x000140d9) toolbar2_fixed_button_pane_g7

0x4d19,	// (0x000140e9) toolbar2_fixed_button_pane_g8

0x4d11,	// (0x000140e1) toolbar2_fixed_button_pane_g9

0x0008,

0xf85c,	// (0x0001ec2c) toolbar2_fixed_button_pane_g

0x9031,	// (0x00018401) cell_toolbar2_float_pane_ParamLimits

0x9031,	// (0x00018401) cell_toolbar2_float_pane

0x9042,	// (0x00018412) cell_toolbar2_float_pane_g1

0x9029,	// (0x000183f9) toolbar2_fixed_button_pane_cp

0xe0f6,	// (0x0001d4c6) fep_vkb_accented_list_pane_ParamLimits

0xe0f6,	// (0x0001d4c6) fep_vkb_accented_list_pane

0x1901,	// (0x00010cd1) bg_popup_fep_shadow_pane_g9

0x4442,	// (0x00013812) bg_popup_fep_shadow_pane_cp3

0x3870,	// (0x00012c40) list_accented_list_pane

0x904b,	// (0x0001841b) list_single_accented_list_pane_ParamLimits

0x904b,	// (0x0001841b) list_single_accented_list_pane

0x4442,	// (0x00013812) list_highlight_pane_cp10

0x905c,	// (0x0001842c) list_single_accented_list_pane_t1

0xc10e,	// (0x0001b4de) popup_slider_window_ParamLimits

0xc10e,	// (0x0001b4de) popup_slider_window

0x8b52,	// (0x00017f22) aid_indentation_list_msg

0xe8cf,	// (0x0001dc9f) bg_popup_window_pane_cp19

0x9180,	// (0x00018550) popup_slider_window_g1

0x919c,	// (0x0001856c) popup_slider_window_g2

0x91b8,	// (0x00018588) popup_slider_window_g3

0x0005,

0xfce1,	// (0x0001f0b1) popup_slider_window_g

0x9214,	// (0x000185e4) popup_slider_window_t1

0x9288,	// (0x00018658) small_volume_slider_vertical_pane

0x7859,	// (0x00016c29) small_volume_slider_vertical_pane_g1

0x7859,	// (0x00016c29) small_volume_slider_vertical_pane_g2

0x92a4,	// (0x00018674) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf3,	// (0x0001f0c3) small_volume_slider_vertical_pane_g

0xb8a5,	// (0x0001ac75) area_side_right_pane_ParamLimits

0xb8a5,	// (0x0001ac75) area_side_right_pane

0xc31a,	// (0x0001b6ea) aid_size_side_button_ParamLimits

0xc31a,	// (0x0001b6ea) aid_size_side_button

0xc333,	// (0x0001b703) grid_sctrl_middle_pane_ParamLimits

0xc333,	// (0x0001b703) grid_sctrl_middle_pane

0x1b1e,	// (0x00010eee) sctrl_sk_bottom_pane

0x1b2f,	// (0x00010eff) sctrl_sk_top_pane

0x1b41,	// (0x00010f11) aid_touch_sctrl_top

0x1b4e,	// (0x00010f1e) bg_sctrl_sk_pane_ParamLimits

0x1b4e,	// (0x00010f1e) bg_sctrl_sk_pane

0x1b5c,	// (0x00010f2c) sctrl_sk_top_pane_g1

0x1b69,	// (0x00010f39) sctrl_sk_top_pane_t1

0x1b41,	// (0x00010f11) aid_touch_sctrl_bottom

0x1b4e,	// (0x00010f1e) bg_sctrl_sk_pane_cp_ParamLimits

0x1b4e,	// (0x00010f1e) bg_sctrl_sk_pane_cp

0x1b84,	// (0x00010f54) sctrl_sk_bottom_pane_g1

0x1b69,	// (0x00010f39) sctrl_sk_bottom_pane_t1

0xc34d,	// (0x0001b71d) cell_sctrl_middle_pane_ParamLimits

0xc34d,	// (0x0001b71d) cell_sctrl_middle_pane

0xc35e,	// (0x0001b72e) aid_touch_sctrl_middle_ParamLimits

0xc35e,	// (0x0001b72e) aid_touch_sctrl_middle

0xc36b,	// (0x0001b73b) bg_sctrl_middle_pane_ParamLimits

0xc36b,	// (0x0001b73b) bg_sctrl_middle_pane

0x21f1,	// (0x000115c1) cell_sctrl_middle_pane_g1_ParamLimits

0x21f1,	// (0x000115c1) cell_sctrl_middle_pane_g1

0xc379,	// (0x0001b749) cell_sctrl_middle_pane_g2_ParamLimits

0xc379,	// (0x0001b749) cell_sctrl_middle_pane_g2

0x0001,

0xfcff,	// (0x0001f0cf) cell_sctrl_middle_pane_g_ParamLimits

0xfcff,	// (0x0001f0cf) cell_sctrl_middle_pane_g

0x4cd9,	// (0x000140a9) bg_sctrl_middle_pane_g1

0x4ce1,	// (0x000140b1) bg_sctrl_middle_pane_g2

0x4ce9,	// (0x000140b9) bg_sctrl_middle_pane_g3

0x4cf1,	// (0x000140c1) bg_sctrl_middle_pane_g4

0x4cf9,	// (0x000140c9) bg_sctrl_middle_pane_g5

0x4d01,	// (0x000140d1) bg_sctrl_middle_pane_g6

0x4d09,	// (0x000140d9) bg_sctrl_middle_pane_g7

0x4d11,	// (0x000140e1) bg_sctrl_middle_pane_g8

0x0007,

0xfd04,	// (0x0001f0d4) bg_sctrl_middle_pane_g

0x4d19,	// (0x000140e9) bg_sctrl_middle_pane_g8_copy1

0x4cd9,	// (0x000140a9) bg_sctrl_sk_pane_g1

0x4ce9,	// (0x000140b9) bg_sctrl_sk_pane_g2

0x4ce1,	// (0x000140b1) bg_sctrl_sk_pane_g3

0x0008,

0xf85c,	// (0x0001ec2c) bg_sctrl_sk_pane_g

0x2f59,	// (0x00012329) aid_size_touch_scroll_bar

0x4cf9,	// (0x000140c9) bg_sctrl_sk_pane_g4

0x4cf1,	// (0x000140c1) bg_sctrl_sk_pane_g5

0x4d01,	// (0x000140d1) bg_sctrl_sk_pane_g6

0x4d09,	// (0x000140d9) bg_sctrl_sk_pane_g7

0x4d19,	// (0x000140e9) bg_sctrl_sk_pane_g8

0x4d11,	// (0x000140e1) bg_sctrl_sk_pane_g9

0x0cb3,	// (0x00010083) popup_fep_china_hwr2_fs_candidate_window

0xbc28,	// (0x0001aff8) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbc28,	// (0x0001aff8) popup_fep_china_hwr2_fs_control_window

0x1921,	// (0x00010cf1) sctrl_sk_top_pane_g2

0x0001,

0xfcfa,	// (0x0001f0ca) sctrl_sk_top_pane_g

0xe987,	// (0x0001dd57) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe987,	// (0x0001dd57) aid_fep_china_hwr2_fs_cell

0xe99b,	// (0x0001dd6b) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe99b,	// (0x0001dd6b) bg_popup_fep_shadow_pane_cp4

0xe9b2,	// (0x0001dd82) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe9b2,	// (0x0001dd82) bg_popup_fep_shadow_pane_cp5

0xe9c4,	// (0x0001dd94) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe9c4,	// (0x0001dd94) popup_fep_china_hwr2_fs_control_bar_grid

0xe9d8,	// (0x0001dda8) popup_fep_china_hwr2_fs_control_funtion_grid

0x9300,	// (0x000186d0) aid_fep_china_hwr2_fs_candi_cell

0x26ad,	// (0x00011a7d) bg_popup_fep_shadow_pane_cp6

0x930a,	// (0x000186da) popup_fep_china_hwr2_fs_candidate_grid

0xe9e0,	// (0x0001ddb0) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe9e0,	// (0x0001ddb0) cell_fep_china_hwr2_fs_funtion_grid

0x7859,	// (0x00016c29) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x932c,	// (0x000186fc) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x932c,	// (0x000186fc) cell_fep_china_hwr2_fs_funtion_grid_g1

0x933a,	// (0x0001870a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x933a,	// (0x0001870a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd15,	// (0x0001f0e5) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd15,	// (0x0001f0e5) cell_fep_china_hwr2_fs_funtion_grid_g

0xe9f8,	// (0x0001ddc8) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe9f8,	// (0x0001ddc8) cell_fep_china_hwr2_fs_funtion_grid_t1

0xea0d,	// (0x0001dddd) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xea0d,	// (0x0001dddd) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1a,	// (0x0001f0ea) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1a,	// (0x0001f0ea) cell_fep_china_hwr2_fs_funtion_grid_t

0x9381,	// (0x00018751) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9389,	// (0x00018759) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9391,	// (0x00018761) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1f,	// (0x0001f0ef) popup_fep_china_hwr2_fs_control_bar_grid_g

0x9399,	// (0x00018769) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x9399,	// (0x00018769) cell_fep_china_hwr2_fs_candidate_grid

0x93b2,	// (0x00018782) popup_fep_china_hwr2_fs_candidate_grid_g20

0x93ba,	// (0x0001878a) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7859,	// (0x00016c29) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7859,	// (0x00016c29) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb33,	// (0x0001ef03) cell_fep_china_hwr2_fs_candidate_grid_g

0x93c2,	// (0x00018792) cell_fep_china_hwr2_fs_candidate_grid_t1

0x48a1,	// (0x00013c71) clock_nsta_pane_cp_24_ParamLimits

0x48a1,	// (0x00013c71) clock_nsta_pane_cp_24

0x491f,	// (0x00013cef) indicator_nsta_pane_cp_24_ParamLimits

0x491f,	// (0x00013cef) indicator_nsta_pane_cp_24

0x5acb,	// (0x00014e9b) heading_pane_g1

0x0001,

0xf8c1,	// (0x0001ec91) heading_pane_g

0x65ff,	// (0x000159cf) grid_sct_catagory_button_pane

0x662f,	// (0x000159ff) scroll_pane_cp5_ParamLimits

0x7407,	// (0x000167d7) button_value_adjust_pane_cp5_ParamLimits

0x7407,	// (0x000167d7) button_value_adjust_pane_cp5

0x7503,	// (0x000168d3) form2_midp_time_pane_ParamLimits

0x93d0,	// (0x000187a0) cell_sct_catagory_button_pane_ParamLimits

0x93d0,	// (0x000187a0) cell_sct_catagory_button_pane

0x781e,	// (0x00016bee) bg_button_pane_cp01_ParamLimits

0x781e,	// (0x00016bee) bg_button_pane_cp01

0x7859,	// (0x00016c29) cell_sct_catagory_button_pane_g1

0xc187,	// (0x0001b557) popup_tb_extension_window

0xea29,	// (0x0001ddf9) aid_size_cell_ext_ParamLimits

0xea29,	// (0x0001ddf9) aid_size_cell_ext

0x2d9b,	// (0x0001216b) bg_tb_trans_pane_cp1_ParamLimits

0x2d9b,	// (0x0001216b) bg_tb_trans_pane_cp1

0xea4f,	// (0x0001de1f) grid_tb_ext_pane_ParamLimits

0xea4f,	// (0x0001de1f) grid_tb_ext_pane

0xea8a,	// (0x0001de5a) cell_tb_ext_pane_ParamLimits

0xea8a,	// (0x0001de5a) cell_tb_ext_pane

0xeab2,	// (0x0001de82) cell_tb_ext_pane_g1_ParamLimits

0xeab2,	// (0x0001de82) cell_tb_ext_pane_g1

0x9464,	// (0x00018834) cell_tb_ext_pane_t1

0x2a44,	// (0x00011e14) list_highlight_pane_cp11_ParamLimits

0x2a44,	// (0x00011e14) list_highlight_pane_cp11

0xb94c,	// (0x0001ad1c) popup_uni_indicator_window_ParamLimits

0xb94c,	// (0x0001ad1c) popup_uni_indicator_window

0x35a5,	// (0x00012975) bg_popup_sub_pane_cp14

0x947f,	// (0x0001884f) list_uniindi_pane

0x948b,	// (0x0001885b) uniindi_top_pane

0x2a44,	// (0x00011e14) bg_uniindi_top_pane

0x94aa,	// (0x0001887a) uniindi_top_pane_g1

0x94c0,	// (0x00018890) uniindi_top_pane_g2

0x0003,

0xfd26,	// (0x0001f0f6) uniindi_top_pane_g

0x94ea,	// (0x000188ba) uniindi_top_pane_t1

0x9514,	// (0x000188e4) list_single_uniindi_pane_ParamLimits

0x9514,	// (0x000188e4) list_single_uniindi_pane

0x7859,	// (0x00016c29) bg_uniindi_top_pane_g1

0x9527,	// (0x000188f7) list_single_uniindi_pane_g1

0x953a,	// (0x0001890a) list_single_uniindi_pane_t1

0x0318,	// (0x0000f6e8) control_bg_pane

0x955f,	// (0x0001892f) bg_sctrl_sk_pane_cp1

0x9568,	// (0x00018938) bg_sctrl_sk_pane_cp2

0x9571,	// (0x00018941) control_bg_pane_g1

0x957a,	// (0x0001894a) control_bg_pane_g2

0x0001,

0xfd2f,	// (0x0001f0ff) control_bg_pane_g

0x7262,	// (0x00016632) cell_indicator_nsta_pane_g1_ParamLimits

0xdf4f,	// (0x0001d31f) cell_indicator_nsta_pane_g2_ParamLimits

0xfa97,	// (0x0001ee67) cell_indicator_nsta_pane_g_ParamLimits

0x758b,	// (0x0001695b) form2_midp_time_pane_t1_ParamLimits

0x16bc,	// (0x00010a8c) main_idle_act4_pane_ParamLimits

0x16bc,	// (0x00010a8c) main_idle_act4_pane

0xc187,	// (0x0001b557) popup_tb_extension_window_ParamLimits

0xea71,	// (0x0001de41) tb_ext_find_pane_ParamLimits

0xea71,	// (0x0001de41) tb_ext_find_pane

0x9583,	// (0x00018953) ai_gene_pane_1_cp1

0x4589,	// (0x00013959) ai_gene_pane_2_cp1

0x958b,	// (0x0001895b) list_single_idle_plugin_calendar_pane

0x9594,	// (0x00018964) list_single_idle_plugin_notification_pane

0x959d,	// (0x0001896d) list_single_idle_plugin_player_pane

0xeacf,	// (0x0001de9f) list_single_idle_plugin_shortcut_pane_ParamLimits

0xeacf,	// (0x0001de9f) list_single_idle_plugin_shortcut_pane

0xeaf7,	// (0x0001dec7) main_idle_act4_pane_t1

0xeb0d,	// (0x0001dedd) main_idle_act4_pane_t2

0x0001,

0xfd34,	// (0x0001f104) main_idle_act4_pane_t

0xeb23,	// (0x0001def3) middle_sk_idle_act4_pane_ParamLimits

0xeb23,	// (0x0001def3) middle_sk_idle_act4_pane

0xeb3f,	// (0x0001df0f) popup_clock_digital_analogue_window_cp2

0xeb67,	// (0x0001df37) shortcut_wheel_idle_act4_pane_ParamLimits

0xeb67,	// (0x0001df37) shortcut_wheel_idle_act4_pane

0x7859,	// (0x00016c29) shortcut_wheel_idle_act4_pane_g1

0x7859,	// (0x00016c29) shortcut_wheel_idle_act4_pane_g2

0x7859,	// (0x00016c29) shortcut_wheel_idle_act4_pane_g3

0x7859,	// (0x00016c29) shortcut_wheel_idle_act4_pane_g4

0x7859,	// (0x00016c29) shortcut_wheel_idle_act4_pane_g5

0x9630,	// (0x00018a00) shortcut_wheel_idle_act4_pane_g6

0x9638,	// (0x00018a08) shortcut_wheel_idle_act4_pane_g7

0x9640,	// (0x00018a10) shortcut_wheel_idle_act4_pane_g8

0x9648,	// (0x00018a18) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd39,	// (0x0001f109) shortcut_wheel_idle_act4_pane_g

0xd54a,	// (0x0001c91a) middle_sk_idle_act4_pane_g1_ParamLimits

0xd54a,	// (0x0001c91a) middle_sk_idle_act4_pane_g1

0xebe4,	// (0x0001dfb4) middle_sk_idle_act4_pane_g2_ParamLimits

0xebe4,	// (0x0001dfb4) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5c,	// (0x0001f12c) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5c,	// (0x0001f12c) middle_sk_idle_act4_pane_g

0xebfc,	// (0x0001dfcc) middle_sk_idle_act4_pane_t1_ParamLimits

0xebfc,	// (0x0001dfcc) middle_sk_idle_act4_pane_t1

0xec2b,	// (0x0001dffb) grid_ai_shortcut_pane_ParamLimits

0xec2b,	// (0x0001dffb) grid_ai_shortcut_pane

0xec48,	// (0x0001e018) list_highlight_pane_cp16_ParamLimits

0xec48,	// (0x0001e018) list_highlight_pane_cp16

0xec55,	// (0x0001e025) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xec55,	// (0x0001e025) list_single_idle_plugin_shortcut_pane_g1

0xec61,	// (0x0001e031) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xec61,	// (0x0001e031) list_single_idle_plugin_shortcut_pane_g2

0xec7d,	// (0x0001e04d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xec7d,	// (0x0001e04d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd61,	// (0x0001f131) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd61,	// (0x0001f131) list_single_idle_plugin_shortcut_pane_g

0xec92,	// (0x0001e062) cell_ai_shortcut_pane_ParamLimits

0xec92,	// (0x0001e062) cell_ai_shortcut_pane

0xeca8,	// (0x0001e078) cell_ai_shortcut_pane_g1_ParamLimits

0xeca8,	// (0x0001e078) cell_ai_shortcut_pane_g1

0x9583,	// (0x00018953) ai_gene_pane_1_cp2

0x9778,	// (0x00018b48) ai_gene_pane_2_cp2

0x9780,	// (0x00018b50) list_highlight_pane_cp15

0x9789,	// (0x00018b59) list_single_idle_plugin_calendar_pane_g1

0x9780,	// (0x00018b50) list_highlight_pane_cp17

0x9791,	// (0x00018b61) list_single_idle_plugin_calendar_pane_g1_copy1

0x9799,	// (0x00018b69) list_single_idle_plugin_player_pane_g1

0x6858,	// (0x00015c28) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd68,	// (0x0001f138) list_single_idle_plugin_player_pane_g

0x97a1,	// (0x00018b71) list_single_idle_plugin_player_pane_t1

0x97af,	// (0x00018b7f) list_single_idle_plugin_player_pane_t2

0x97bd,	// (0x00018b8d) list_single_idle_plugin_player_pane_t3

0x97cb,	// (0x00018b9b) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6d,	// (0x0001f13d) list_single_idle_plugin_player_pane_t

0x97d9,	// (0x00018ba9) wait_bar_pane_cp15

0x97e1,	// (0x00018bb1) grid_ai_notification_pane

0x6858,	// (0x00015c28) list_single_idle_plugin_notification_pane_g1

0xecca,	// (0x0001e09a) cell_ai_notification_pane_ParamLimits

0xecca,	// (0x0001e09a) cell_ai_notification_pane

0x97f7,	// (0x00018bc7) cell_ai_notification_pane_g1

0x97ff,	// (0x00018bcf) cell_ai_notification_pane_t1

0xecd7,	// (0x0001e0a7) tb_ext_find_button_pane

0xecdf,	// (0x0001e0af) tb_ext_find_pane_g1

0xece7,	// (0x0001e0b7) tb_ext_find_pane_t1

0x3da0,	// (0x00013170) tb_ext_find_button_pane_g1

0x982b,	// (0x00018bfb) tb_ext_find_button_pane_g2

0x0001,

0xfd76,	// (0x0001f146) tb_ext_find_button_pane_g

0xeaf7,	// (0x0001dec7) main_idle_act4_pane_t1_ParamLimits

0xeb0d,	// (0x0001dedd) main_idle_act4_pane_t2_ParamLimits

0xfd34,	// (0x0001f104) main_idle_act4_pane_t_ParamLimits

0xeb3f,	// (0x0001df0f) popup_clock_digital_analogue_window_cp2_ParamLimits

0xeb57,	// (0x0001df27) sat_plugin_idle_act4_pane_ParamLimits

0xeb57,	// (0x0001df27) sat_plugin_idle_act4_pane

0xecf5,	// (0x0001e0c5) sat_plugin_idle_act4_pane_t1_ParamLimits

0xecf5,	// (0x0001e0c5) sat_plugin_idle_act4_pane_t1

0xed0d,	// (0x0001e0dd) sat_plugin_idle_act4_pane_t2_ParamLimits

0xed0d,	// (0x0001e0dd) sat_plugin_idle_act4_pane_t2

0xed25,	// (0x0001e0f5) sat_plugin_idle_act4_pane_t3_ParamLimits

0xed25,	// (0x0001e0f5) sat_plugin_idle_act4_pane_t3

0xed3d,	// (0x0001e10d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xed3d,	// (0x0001e10d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7b,	// (0x0001f14b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7b,	// (0x0001f14b) sat_plugin_idle_act4_pane_t

0x03dd,	// (0x0000f7ad) popup_battery_window_ParamLimits

0x03dd,	// (0x0000f7ad) popup_battery_window

0x2a44,	// (0x00011e14) bg_popup_sub_pane_cp25_ParamLimits

0x2a44,	// (0x00011e14) bg_popup_sub_pane_cp25

0x9880,	// (0x00018c50) popup_battery_window_g1_ParamLimits

0x9880,	// (0x00018c50) popup_battery_window_g1

0x988c,	// (0x00018c5c) popup_battery_window_t1_ParamLimits

0x988c,	// (0x00018c5c) popup_battery_window_t1

0x989e,	// (0x00018c6e) popup_battery_window_t2_ParamLimits

0x989e,	// (0x00018c6e) popup_battery_window_t2

0x0001,

0xfd84,	// (0x0001f154) popup_battery_window_t_ParamLimits

0xfd84,	// (0x0001f154) popup_battery_window_t

0xd3d1,	// (0x0001c7a1) midp_canvas_pane_ParamLimits

0xd42e,	// (0x0001c7fe) midp_keypad_pane_ParamLimits

0xd42e,	// (0x0001c7fe) midp_keypad_pane

0x4799,	// (0x00013b69) main_midp_pane_ParamLimits

0x72cb,	// (0x0001669b) signal_pane_g2_cp_ParamLimits

0xed55,	// (0x0001e125) aid_size_cell_midp_keypad_ParamLimits

0xed55,	// (0x0001e125) aid_size_cell_midp_keypad

0xed73,	// (0x0001e143) midp_keyp_game_grid_pane_ParamLimits

0xed73,	// (0x0001e143) midp_keyp_game_grid_pane

0xed9a,	// (0x0001e16a) midp_keyp_rocker_pane_ParamLimits

0xed9a,	// (0x0001e16a) midp_keyp_rocker_pane

0xedeb,	// (0x0001e1bb) midp_keyp_sk_left_pane_ParamLimits

0xedeb,	// (0x0001e1bb) midp_keyp_sk_left_pane

0xee3f,	// (0x0001e20f) midp_keyp_sk_right_pane_ParamLimits

0xee3f,	// (0x0001e20f) midp_keyp_sk_right_pane

0x26ad,	// (0x00011a7d) bg_button_pane_cp03

0xee93,	// (0x0001e263) midp_keyp_sk_left_pane_g1

0x26ad,	// (0x00011a7d) bg_button_pane_cp04

0xee93,	// (0x0001e263) midp_keyp_sk_right_pane_g1

0x7859,	// (0x00016c29) midp_keyp_rocker_pane_g1

0xee9c,	// (0x0001e26c) keyp_game_cell_pane_ParamLimits

0xee9c,	// (0x0001e26c) keyp_game_cell_pane

0x26ad,	// (0x00011a7d) bg_button_pane_cp02

0xeec0,	// (0x0001e290) keyp_game_cell_pane_g1

0xb8e7,	// (0x0001acb7) popup_fep_vkb2_window_ParamLimits

0xb8e7,	// (0x0001acb7) popup_fep_vkb2_window

0xc385,	// (0x0001b755) aid_size_cell_vkb2_ParamLimits

0xc385,	// (0x0001b755) aid_size_cell_vkb2

0xc3bb,	// (0x0001b78b) popup_fep_vkb2_window_g1_ParamLimits

0xc3bb,	// (0x0001b78b) popup_fep_vkb2_window_g1

0xc40b,	// (0x0001b7db) vkb2_area_bottom_pane_ParamLimits

0xc40b,	// (0x0001b7db) vkb2_area_bottom_pane

0xc45f,	// (0x0001b82f) vkb2_area_keypad_pane_ParamLimits

0xc45f,	// (0x0001b82f) vkb2_area_keypad_pane

0xc4a7,	// (0x0001b877) vkb2_area_top_pane_ParamLimits

0xc4a7,	// (0x0001b877) vkb2_area_top_pane

0xc52d,	// (0x0001b8fd) vkb2_top_entry_pane_ParamLimits

0xc52d,	// (0x0001b8fd) vkb2_top_entry_pane

0xc55a,	// (0x0001b92a) vkb2_top_grid_left_pane_ParamLimits

0xc55a,	// (0x0001b92a) vkb2_top_grid_left_pane

0xc57a,	// (0x0001b94a) vkb2_top_grid_right_pane_ParamLimits

0xc57a,	// (0x0001b94a) vkb2_top_grid_right_pane

0x1df0,	// (0x000111c0) vkb2_cell_keypad_pane_ParamLimits

0x1df0,	// (0x000111c0) vkb2_cell_keypad_pane

0xc5c0,	// (0x0001b990) vkb2_area_bottom_grid_pane_ParamLimits

0xc5c0,	// (0x0001b990) vkb2_area_bottom_grid_pane

0xc5ea,	// (0x0001b9ba) vkb2_area_bottom_pane_g1_ParamLimits

0xc5ea,	// (0x0001b9ba) vkb2_area_bottom_pane_g1

0xc610,	// (0x0001b9e0) vkb2_area_bottom_pane_g2_ParamLimits

0xc610,	// (0x0001b9e0) vkb2_area_bottom_pane_g2

0xc641,	// (0x0001ba11) vkb2_area_bottom_pane_g3_ParamLimits

0xc641,	// (0x0001ba11) vkb2_area_bottom_pane_g3

0x0002,

0xfd89,	// (0x0001f159) vkb2_area_bottom_pane_g_ParamLimits

0xfd89,	// (0x0001f159) vkb2_area_bottom_pane_g

0x1f9a,	// (0x0001136a) vkb2_top_cell_left_pane_ParamLimits

0x1f9a,	// (0x0001136a) vkb2_top_cell_left_pane

0xeed6,	// (0x0001e2a6) vkb2_top_entry_pane_g1_ParamLimits

0xeed6,	// (0x0001e2a6) vkb2_top_entry_pane_g1

0xeee4,	// (0x0001e2b4) vkb2_top_entry_pane_t1_ParamLimits

0xeee4,	// (0x0001e2b4) vkb2_top_entry_pane_t1

0x9a70,	// (0x00018e40) vkb2_top_entry_pane_t2_ParamLimits

0x9a70,	// (0x00018e40) vkb2_top_entry_pane_t2

0x9aa2,	// (0x00018e72) vkb2_top_entry_pane_t3_ParamLimits

0x9aa2,	// (0x00018e72) vkb2_top_entry_pane_t3

0x0002,

0xfd90,	// (0x0001f160) vkb2_top_entry_pane_t_ParamLimits

0xfd90,	// (0x0001f160) vkb2_top_entry_pane_t

0xc6ab,	// (0x0001ba7b) vkb2_top_grid_right_pane_g1_ParamLimits

0xc6ab,	// (0x0001ba7b) vkb2_top_grid_right_pane_g1

0x1ffd,	// (0x000113cd) vkb2_top_grid_right_pane_g2_ParamLimits

0x1ffd,	// (0x000113cd) vkb2_top_grid_right_pane_g2

0x2015,	// (0x000113e5) vkb2_top_grid_right_pane_g3_ParamLimits

0x2015,	// (0x000113e5) vkb2_top_grid_right_pane_g3

0xc6c1,	// (0x0001ba91) vkb2_top_grid_right_pane_g4_ParamLimits

0xc6c1,	// (0x0001ba91) vkb2_top_grid_right_pane_g4

0x0003,

0xfd97,	// (0x0001f167) vkb2_top_grid_right_pane_g_ParamLimits

0xfd97,	// (0x0001f167) vkb2_top_grid_right_pane_g

0x2043,	// (0x00011413) vkb2_top_cell_left_pane_g1

0x205a,	// (0x0001142a) vkb2_cell_keypad_pane_g1_ParamLimits

0x205a,	// (0x0001142a) vkb2_cell_keypad_pane_g1

0x9ac6,	// (0x00018e96) vkb2_cell_keypad_pane_t1_ParamLimits

0x9ac6,	// (0x00018e96) vkb2_cell_keypad_pane_t1

0x2068,	// (0x00011438) vkb2_cell_bottom_grid_pane_ParamLimits

0x2068,	// (0x00011438) vkb2_cell_bottom_grid_pane

0x20a1,	// (0x00011471) vkb2_cell_bottom_grid_pane_g1

0xeb88,	// (0x0001df58) aid_call2_pane_cp02

0xeb90,	// (0x0001df60) aid_call_pane_cp02

0xeb98,	// (0x0001df68) clock_digital_number_pane_cp10

0xeba0,	// (0x0001df70) clock_digital_number_pane_cp11

0xeba8,	// (0x0001df78) clock_digital_number_pane_cp12

0xebb0,	// (0x0001df80) clock_digital_number_pane_cp13

0xebb8,	// (0x0001df88) clock_digital_separator_pane_cp10

0x3da0,	// (0x00013170) popup_clock_digital_analogue_window_cp2_g1

0x3da0,	// (0x00013170) popup_clock_digital_analogue_window_cp2_g2

0xebc0,	// (0x0001df90) popup_clock_digital_analogue_window_cp2_g3

0x3da0,	// (0x00013170) popup_clock_digital_analogue_window_cp2_g4

0xebc0,	// (0x0001df90) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4c,	// (0x0001f11c) popup_clock_digital_analogue_window_cp2_g

0xebc8,	// (0x0001df98) popup_clock_digital_analogue_window_cp2_t1

0xebd6,	// (0x0001dfa6) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd57,	// (0x0001f127) popup_clock_digital_analogue_window_cp2_t

0x7859,	// (0x00016c29) clock_digital_number_pane_cp10_g1

0x7859,	// (0x00016c29) clock_digital_number_pane_cp10_g2

0x0001,

0xfb33,	// (0x0001ef03) clock_digital_number_pane_cp10_g

0x7859,	// (0x00016c29) clock_digital_separator_pane_cp10_g1

0x7859,	// (0x00016c29) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb33,	// (0x0001ef03) clock_digital_separator_pane_cp10_g

0x94cc,	// (0x0001889c) uniindi_top_pane_g3

0x94dd,	// (0x000188ad) uniindi_top_pane_g4

0x1e7b,	// (0x0001124b) vkb2_row_keypad_pane_ParamLimits

0x1e7b,	// (0x0001124b) vkb2_row_keypad_pane

0x20bd,	// (0x0001148d) vkb2_cell_t_keypad_pane_ParamLimits

0x20bd,	// (0x0001148d) vkb2_cell_t_keypad_pane

0x20cd,	// (0x0001149d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x20cd,	// (0x0001149d) vkb2_cell_t_keypad_pane_cp08

0x20e0,	// (0x000114b0) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x20e0,	// (0x000114b0) vkb2_cell_t_keypad_pane_cp09

0x20f4,	// (0x000114c4) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x20f4,	// (0x000114c4) vkb2_cell_t_keypad_pane_cp01

0x2105,	// (0x000114d5) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2105,	// (0x000114d5) vkb2_cell_t_keypad_pane_cp02

0x2116,	// (0x000114e6) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2116,	// (0x000114e6) vkb2_cell_t_keypad_pane_cp03

0x2127,	// (0x000114f7) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2127,	// (0x000114f7) vkb2_cell_t_keypad_pane_cp04

0x2138,	// (0x00011508) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2138,	// (0x00011508) vkb2_cell_t_keypad_pane_cp05

0x2149,	// (0x00011519) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2149,	// (0x00011519) vkb2_cell_t_keypad_pane_cp06

0x215a,	// (0x0001152a) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x215a,	// (0x0001152a) vkb2_cell_t_keypad_pane_cp07

0x216b,	// (0x0001153b) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x216b,	// (0x0001153b) vkb2_cell_t_keypad_pane_cp10

0x1921,	// (0x00010cf1) vkb2_cell_t_keypad_pane_g1

0x9add,	// (0x00018ead) vkb2_cell_t_keypad_pane_t1

0x0318,	// (0x0000f6e8) popup_grid_graphic2_window

0xef1d,	// (0x0001e2ed) aid_size_cell_graphic2_ParamLimits

0xef1d,	// (0x0001e2ed) aid_size_cell_graphic2

0xef5b,	// (0x0001e32b) bg_popup_window_pane_cp21_ParamLimits

0xef5b,	// (0x0001e32b) bg_popup_window_pane_cp21

0xef69,	// (0x0001e339) graphic2_pages_pane_ParamLimits

0xef69,	// (0x0001e339) graphic2_pages_pane

0xefbf,	// (0x0001e38f) grid_graphic2_control_pane_ParamLimits

0xefbf,	// (0x0001e38f) grid_graphic2_control_pane

0xf007,	// (0x0001e3d7) grid_graphic2_pane_ParamLimits

0xf007,	// (0x0001e3d7) grid_graphic2_pane

0xf08e,	// (0x0001e45e) cell_graphic2_pane

0x0318,	// (0x0000f6e8) main_comp_mode_pane

0x8ce9,	// (0x000180b9) list_ai3_gene_pane_ParamLimits

0xe8cf,	// (0x0001dc9f) bg_popup_window_pane_cp19_ParamLimits

0x9122,	// (0x000184f2) bg_touch_area_indi_pane_ParamLimits

0x9122,	// (0x000184f2) bg_touch_area_indi_pane

0x9138,	// (0x00018508) bg_touch_area_indi_pane_cp01_ParamLimits

0x9138,	// (0x00018508) bg_touch_area_indi_pane_cp01

0x914e,	// (0x0001851e) bg_touch_area_indi_pane_cp02_ParamLimits

0x914e,	// (0x0001851e) bg_touch_area_indi_pane_cp02

0x9166,	// (0x00018536) bg_touch_area_indi_pane_cp03_ParamLimits

0x9166,	// (0x00018536) bg_touch_area_indi_pane_cp03

0x9180,	// (0x00018550) popup_slider_window_g1_ParamLimits

0x919c,	// (0x0001856c) popup_slider_window_g2_ParamLimits

0x91b8,	// (0x00018588) popup_slider_window_g3_ParamLimits

0xfce1,	// (0x0001f0b1) popup_slider_window_g_ParamLimits

0x9214,	// (0x000185e4) popup_slider_window_t1_ParamLimits

0x9288,	// (0x00018658) small_volume_slider_vertical_pane_ParamLimits

0xf08e,	// (0x0001e45e) cell_graphic2_pane_ParamLimits

0xf0e9,	// (0x0001e4b9) bg_button_pane_cp10_ParamLimits

0xf0e9,	// (0x0001e4b9) bg_button_pane_cp10

0xf0fc,	// (0x0001e4cc) bg_button_pane_cp11_ParamLimits

0xf0fc,	// (0x0001e4cc) bg_button_pane_cp11

0xf10f,	// (0x0001e4df) graphic2_pages_pane_g1_ParamLimits

0xf10f,	// (0x0001e4df) graphic2_pages_pane_g1

0xf12a,	// (0x0001e4fa) graphic2_pages_pane_g2_ParamLimits

0xf12a,	// (0x0001e4fa) graphic2_pages_pane_g2

0x0001,

0xfda5,	// (0x0001f175) graphic2_pages_pane_g_ParamLimits

0xfda5,	// (0x0001f175) graphic2_pages_pane_g

0xf142,	// (0x0001e512) graphic2_pages_pane_t1_ParamLimits

0xf142,	// (0x0001e512) graphic2_pages_pane_t1

0xf15a,	// (0x0001e52a) cell_graphic2_control_pane_ParamLimits

0xf15a,	// (0x0001e52a) cell_graphic2_control_pane

0xf18c,	// (0x0001e55c) cell_graphic2_pane_g1_ParamLimits

0xf18c,	// (0x0001e55c) cell_graphic2_pane_g1

0xd558,	// (0x0001c928) cell_graphic2_pane_g2_ParamLimits

0xd558,	// (0x0001c928) cell_graphic2_pane_g2

0xeec9,	// (0x0001e299) cell_graphic2_pane_g3_ParamLimits

0xeec9,	// (0x0001e299) cell_graphic2_pane_g3

0xd565,	// (0x0001c935) cell_graphic2_pane_g4_ParamLimits

0xd565,	// (0x0001c935) cell_graphic2_pane_g4

0xf199,	// (0x0001e569) cell_graphic2_pane_g5_ParamLimits

0xf199,	// (0x0001e569) cell_graphic2_pane_g5

0x0004,

0xfdaa,	// (0x0001f17a) cell_graphic2_pane_g_ParamLimits

0xfdaa,	// (0x0001f17a) cell_graphic2_pane_g

0xf1b9,	// (0x0001e589) cell_graphic2_pane_t1_ParamLimits

0xf1b9,	// (0x0001e589) cell_graphic2_pane_t1

0x5abf,	// (0x00014e8f) grid_highlight_pane_cp11_ParamLimits

0x5abf,	// (0x00014e8f) grid_highlight_pane_cp11

0x2a44,	// (0x00011e14) bg_button_pane_cp05

0xf202,	// (0x0001e5d2) cell_graphic2_control_pane_g1

0x7859,	// (0x00016c29) bg_touch_area_indi_pane_g1

0x9db9,	// (0x00019189) aid_cmod_rocker_key_size

0x9dc3,	// (0x00019193) aid_cmode_itu_key_size

0x9dcd,	// (0x0001919d) main_cmode_video_pane

0x9dd7,	// (0x000191a7) main_comp_mode_itu_pane

0x9de3,	// (0x000191b3) main_comp_mode_rocker_pane

0x9def,	// (0x000191bf) cell_cmode_rocker_pane_ParamLimits

0x9def,	// (0x000191bf) cell_cmode_rocker_pane

0x9e01,	// (0x000191d1) cell_cmode_itu_pane_ParamLimits

0x9e01,	// (0x000191d1) cell_cmode_itu_pane

0x35a5,	// (0x00012975) bg_button_pane_cp06_ParamLimits

0x35a5,	// (0x00012975) bg_button_pane_cp06

0x7ad7,	// (0x00016ea7) cell_cmode_rocker_pane_g1_ParamLimits

0x7ad7,	// (0x00016ea7) cell_cmode_rocker_pane_g1

0x932c,	// (0x000186fc) cell_cmode_rocker_pane_g2_ParamLimits

0x932c,	// (0x000186fc) cell_cmode_rocker_pane_g2

0x0001,

0xfdba,	// (0x0001f18a) cell_cmode_rocker_pane_g_ParamLimits

0xfdba,	// (0x0001f18a) cell_cmode_rocker_pane_g

0x26ad,	// (0x00011a7d) bg_button_pane_cp07

0x9e16,	// (0x000191e6) cell_cmode_itu_pane_g1

0x9e1f,	// (0x000191ef) cell_cmode_itu_pane_t1

0x9e2d,	// (0x000191fd) cell_cmode_itu_pane_t2

0x0001,

0xfdbf,	// (0x0001f18f) cell_cmode_itu_pane_t

0x954f,	// (0x0001891f) aid_touch_ctrl_left

0x9557,	// (0x00018927) aid_touch_ctrl_right

0x26ad,	// (0x00011a7d) compa_mode_pane

0xf226,	// (0x0001e5f6) aid_cmod_rocker_key_size_cp

0xf230,	// (0x0001e600) aid_cmode_itu_key_size_cp

0x9e4f,	// (0x0001921f) compa_mode_pane_g1

0x9e57,	// (0x00019227) compa_mode_pane_g2

0x9e5f,	// (0x0001922f) compa_mode_pane_g3

0x0002,

0xfdc4,	// (0x0001f194) compa_mode_pane_g

0xf23a,	// (0x0001e60a) main_comp_mode_itu_pane_cp

0xf242,	// (0x0001e612) main_comp_mode_rocker_pane_cp

0xf24a,	// (0x0001e61a) cell_cmode_itu_pane_cp_ParamLimits

0xf24a,	// (0x0001e61a) cell_cmode_itu_pane_cp

0xf25f,	// (0x0001e62f) cell_cmode_rocker_pane_cp_ParamLimits

0xf25f,	// (0x0001e62f) cell_cmode_rocker_pane_cp

0x35a5,	// (0x00012975) bg_button_pane_cp06_cp_ParamLimits

0x35a5,	// (0x00012975) bg_button_pane_cp06_cp

0x7ad7,	// (0x00016ea7) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7ad7,	// (0x00016ea7) cell_cmode_rocker_pane_g1_cp

0x7859,	// (0x00016c29) cell_cmode_rocker_pane_g2_cp

0x26ad,	// (0x00011a7d) bg_button_pane_cp07_cp

0xf271,	// (0x0001e641) cell_cmode_itu_pane_g1_cp

0xf27a,	// (0x0001e64a) cell_cmode_itu_pane_t1_cp

0xf27a,	// (0x0001e64a) cell_cmode_itu_pane_t2_cp

0xdd0d,	// (0x0001d0dd) settings_code_pane_cp2

0x27a1,	// (0x00011b71) bg_popup_window_pane_cp3_ParamLimits

0x2c1e,	// (0x00011fee) heading_pane_cp3_ParamLimits

0x2c2a,	// (0x00011ffa) listscroll_popup_graphic_pane_ParamLimits

0x16ca,	// (0x00010a9a) fep_hwr_aid_pane_ParamLimits

0x1b41,	// (0x00010f11) aid_touch_sctrl_top_ParamLimits

0x1b5c,	// (0x00010f2c) sctrl_sk_top_pane_g1_ParamLimits

0x1921,	// (0x00010cf1) sctrl_sk_top_pane_g2_ParamLimits

0xfcfa,	// (0x0001f0ca) sctrl_sk_top_pane_g_ParamLimits

0x1b69,	// (0x00010f39) sctrl_sk_top_pane_t1_ParamLimits

0x1b41,	// (0x00010f11) aid_touch_sctrl_bottom_ParamLimits

0x1b69,	// (0x00010f39) sctrl_sk_bottom_pane_t1_ParamLimits

0x9498,	// (0x00018868) aid_area_touch_clock

0xc4ef,	// (0x0001b8bf) aid_vkb2_area_top_pane_cell_ParamLimits

0xc4ef,	// (0x0001b8bf) aid_vkb2_area_top_pane_cell

0xc59a,	// (0x0001b96a) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc59a,	// (0x0001b96a) aid_vkb2_area_bottom_pane_cell

0x9a28,	// (0x00018df8) popup_char_count_window

0x9eac,	// (0x0001927c) popup_char_count_window_g1

0x9eb5,	// (0x00019285) popup_char_count_window_g2

0x9ebe,	// (0x0001928e) popup_char_count_window_g3

0x0002,

0xfdcb,	// (0x0001f19b) popup_char_count_window_g

0x9ec7,	// (0x00019297) popup_char_count_window_t1

0x1c18,	// (0x00010fe8) popup_fep_char_preview_window_ParamLimits

0x1c18,	// (0x00010fe8) popup_fep_char_preview_window

0xc50f,	// (0x0001b8df) vkb2_top_candi_pane_ParamLimits

0xc50f,	// (0x0001b8df) vkb2_top_candi_pane

0xf288,	// (0x0001e658) cell_vkb2_top_candi_pane_ParamLimits

0xf288,	// (0x0001e658) cell_vkb2_top_candi_pane

0x2180,	// (0x00011550) bg_popup_fep_char_preview_window_ParamLimits

0x2180,	// (0x00011550) bg_popup_fep_char_preview_window

0x218e,	// (0x0001155e) popup_fep_char_preview_window_t1_ParamLimits

0x218e,	// (0x0001155e) popup_fep_char_preview_window_t1

0x9f22,	// (0x000192f2) bg_popup_fep_char_preview_window_g1

0x9f2a,	// (0x000192fa) bg_popup_fep_char_preview_window_g2

0x9f32,	// (0x00019302) bg_popup_fep_char_preview_window_g3

0x9f3a,	// (0x0001930a) bg_popup_fep_char_preview_window_g4

0x9f42,	// (0x00019312) bg_popup_fep_char_preview_window_g5

0x21c8,	// (0x00011598) bg_popup_fep_char_preview_window_g6

0x9f4a,	// (0x0001931a) bg_popup_fep_char_preview_window_g7

0x9f52,	// (0x00019322) bg_popup_fep_char_preview_window_g8

0x9f5a,	// (0x0001932a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd2,	// (0x0001f1a2) bg_popup_fep_char_preview_window_g

0x1921,	// (0x00010cf1) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1921,	// (0x00010cf1) cell_vkb2_top_candi_pane_g1

0x192f,	// (0x00010cff) cell_vkb2_top_candi_pane_g2_ParamLimits

0x192f,	// (0x00010cff) cell_vkb2_top_candi_pane_g2

0x9a07,	// (0x00018dd7) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9a07,	// (0x00018dd7) cell_vkb2_top_candi_pane_g3

0x21d0,	// (0x000115a0) cell_vkb2_top_candi_pane_g4_ParamLimits

0x21d0,	// (0x000115a0) cell_vkb2_top_candi_pane_g4

0x8147,	// (0x00017517) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8147,	// (0x00017517) cell_vkb2_top_candi_pane_g5

0x21f1,	// (0x000115c1) cell_vkb2_top_candi_pane_g6_ParamLimits

0x21f1,	// (0x000115c1) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde5,	// (0x0001f1b5) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde5,	// (0x0001f1b5) cell_vkb2_top_candi_pane_g

0x21ff,	// (0x000115cf) cell_vkb2_top_candi_pane_t1

0x152a,	// (0x000108fa) aid_size_touch_slider_mark_ParamLimits

0x152a,	// (0x000108fa) aid_size_touch_slider_mark

0xefa5,	// (0x0001e375) grid_graphic2_catg_pane_ParamLimits

0xefa5,	// (0x0001e375) grid_graphic2_catg_pane

0xf061,	// (0x0001e431) popup_grid_graphic2_window_t1_ParamLimits

0xf061,	// (0x0001e431) popup_grid_graphic2_window_t1

0xf077,	// (0x0001e447) popup_grid_graphic2_window_t2_ParamLimits

0xf077,	// (0x0001e447) popup_grid_graphic2_window_t2

0x0001,

0xfda0,	// (0x0001f170) popup_grid_graphic2_window_t_ParamLimits

0xfda0,	// (0x0001f170) popup_grid_graphic2_window_t

0x2a44,	// (0x00011e14) bg_button_pane_cp05_ParamLimits

0xf202,	// (0x0001e5d2) cell_graphic2_control_pane_g1_ParamLimits

0xf2ee,	// (0x0001e6be) cell_graphic2_catg_pane_ParamLimits

0xf2ee,	// (0x0001e6be) cell_graphic2_catg_pane

0x26ad,	// (0x00011a7d) bg_button_pane_cp12

0xf300,	// (0x0001e6d0) cell_graphic2_catg_pane_g1

0x9464,	// (0x00018834) cell_tb_ext_pane_t1_ParamLimits

0x1fba,	// (0x0001138a) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1fba,	// (0x0001138a) vkb2_top_cell_right_narrow_pane

0x1fd2,	// (0x000113a2) vkb2_top_cell_right_wide_pane_ParamLimits

0x1fd2,	// (0x000113a2) vkb2_top_cell_right_wide_pane

0x16bc,	// (0x00010a8c) bg_vkb2_func_pane_ParamLimits

0x16bc,	// (0x00010a8c) bg_vkb2_func_pane

0x2043,	// (0x00011413) vkb2_top_cell_left_pane_g1_ParamLimits

0x16bc,	// (0x00010a8c) bg_vkb2_fuc_pane_cp03_ParamLimits

0x16bc,	// (0x00010a8c) bg_vkb2_fuc_pane_cp03

0x20a1,	// (0x00011471) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4ce1,	// (0x000140b1) bg_vkb2_func_pane_g1

0x4ce9,	// (0x000140b9) bg_vkb2_func_pane_g2

0x4cf9,	// (0x000140c9) bg_vkb2_func_pane_g3

0x4cf1,	// (0x000140c1) bg_vkb2_func_pane_g4

0x4d01,	// (0x000140d1) bg_vkb2_func_pane_g5

0x4d09,	// (0x000140d9) bg_vkb2_func_pane_g6

0x4d11,	// (0x000140e1) bg_vkb2_func_pane_g7

0x4d19,	// (0x000140e9) bg_vkb2_func_pane_g8

0x4cd9,	// (0x000140a9) bg_vkb2_func_pane_g9

0x0008,

0xfdf2,	// (0x0001f1c2) bg_vkb2_func_pane_g

0x16bc,	// (0x00010a8c) bg_vkb2_fuc_pane_cp01_ParamLimits

0x16bc,	// (0x00010a8c) bg_vkb2_fuc_pane_cp01

0x2043,	// (0x00011413) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2043,	// (0x00011413) vkb2_top_cell_right_wide_pane_g1

0x16bc,	// (0x00010a8c) bg_vkb2_fuc_pane_cp02_ParamLimits

0x16bc,	// (0x00010a8c) bg_vkb2_fuc_pane_cp02

0x20a1,	// (0x00011471) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x20a1,	// (0x00011471) vkb2_top_cell_right_narrow_pane_g1

0xe80f,	// (0x0001dbdf) aid_touch_area_decrease_ParamLimits

0xe80f,	// (0x0001dbdf) aid_touch_area_decrease

0xe843,	// (0x0001dc13) aid_touch_area_increase_ParamLimits

0xe843,	// (0x0001dc13) aid_touch_area_increase

0xe86b,	// (0x0001dc3b) aid_touch_area_mute_ParamLimits

0xe86b,	// (0x0001dc3b) aid_touch_area_mute

0xe89b,	// (0x0001dc6b) aid_touch_area_slider_ParamLimits

0xe89b,	// (0x0001dc6b) aid_touch_area_slider

0xe8db,	// (0x0001dcab) popup_slider_window_g4_ParamLimits

0xe8db,	// (0x0001dcab) popup_slider_window_g4

0xe903,	// (0x0001dcd3) popup_slider_window_g5_ParamLimits

0xe903,	// (0x0001dcd3) popup_slider_window_g5

0xe937,	// (0x0001dd07) popup_slider_window_g6_ParamLimits

0xe937,	// (0x0001dd07) popup_slider_window_g6

0x9242,	// (0x00018612) popup_slider_window_t2_ParamLimits

0x9242,	// (0x00018612) popup_slider_window_t2

0x0001,

0xfcee,	// (0x0001f0be) popup_slider_window_t_ParamLimits

0xfcee,	// (0x0001f0be) popup_slider_window_t

0xe953,	// (0x0001dd23) slider_pane_ParamLimits

0xe953,	// (0x0001dd23) slider_pane

0x9f7d,	// (0x0001934d) slider_pane_g1_ParamLimits

0x9f7d,	// (0x0001934d) slider_pane_g1

0x9f91,	// (0x00019361) slider_pane_g2_ParamLimits

0x9f91,	// (0x00019361) slider_pane_g2

0x9fa7,	// (0x00019377) slider_pane_g3_ParamLimits

0x9fa7,	// (0x00019377) slider_pane_g3

0x0003,

0xfe05,	// (0x0001f1d5) slider_pane_g_ParamLimits

0xfe05,	// (0x0001f1d5) slider_pane_g

0xc1cf,	// (0x0001b59f) popup_tb_float_extension_window_ParamLimits

0xc1cf,	// (0x0001b59f) popup_tb_float_extension_window

0x9fd3,	// (0x000193a3) aid_size_cell_tb_float_ext

0x26ad,	// (0x00011a7d) bg_popup_sub_window_cp28

0x9fdf,	// (0x000193af) grid_tb_float_ext_pane

0x9fe9,	// (0x000193b9) cell_tb_float_ext_pane_ParamLimits

0x9fe9,	// (0x000193b9) cell_tb_float_ext_pane

0xa003,	// (0x000193d3) cell_tb_float_ext_pane_g1

0xa00c,	// (0x000193dc) grid_highlight_pane_cp12

0xc2f8,	// (0x0001b6c8) cell_last_hwr_side_pane_ParamLimits

0xc2f8,	// (0x0001b6c8) cell_last_hwr_side_pane

0x7859,	// (0x00016c29) cell_last_hwr_side_pane_g1

0xa015,	// (0x000193e5) cell_last_hwr_side_pane_g2

0x0001,

0xfe0e,	// (0x0001f1de) cell_last_hwr_side_pane_g

0xc676,	// (0x0001ba46) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc676,	// (0x0001ba46) vkb2_area_bottom_space_btn_pane

0x1921,	// (0x00010cf1) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9add,	// (0x00018ead) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x21ff,	// (0x000115cf) cell_vkb2_top_candi_pane_t1_ParamLimits

0x221e,	// (0x000115ee) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x221e,	// (0x000115ee) vkb2_area_bottom_space_btn_pane_g1

0x2258,	// (0x00011628) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2258,	// (0x00011628) vkb2_area_bottom_space_btn_pane_g2

0x228e,	// (0x0001165e) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x228e,	// (0x0001165e) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe13,	// (0x0001f1e3) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe13,	// (0x0001f1e3) vkb2_area_bottom_space_btn_pane_g

0x177f,	// (0x00010b4f) cel_fep_hwr_func_pane_ParamLimits

0x177f,	// (0x00010b4f) cel_fep_hwr_func_pane

0xc2cd,	// (0x0001b69d) cell_hwr_side_button_pane_ParamLimits

0xc2cd,	// (0x0001b69d) cell_hwr_side_button_pane

0x9498,	// (0x00018868) aid_area_touch_clock_ParamLimits

0x2a44,	// (0x00011e14) bg_uniindi_top_pane_ParamLimits

0x94aa,	// (0x0001887a) uniindi_top_pane_g1_ParamLimits

0x94c0,	// (0x00018890) uniindi_top_pane_g2_ParamLimits

0x94cc,	// (0x0001889c) uniindi_top_pane_g3_ParamLimits

0x94dd,	// (0x000188ad) uniindi_top_pane_g4_ParamLimits

0xfd26,	// (0x0001f0f6) uniindi_top_pane_g_ParamLimits

0x94ea,	// (0x000188ba) uniindi_top_pane_t1_ParamLimits

0x2a44,	// (0x00011e14) bg_vkb2_func_pane_cp01_ParamLimits

0x2a44,	// (0x00011e14) bg_vkb2_func_pane_cp01

0xa01e,	// (0x000193ee) cel_fep_hwr_func_pane_g1_ParamLimits

0xa01e,	// (0x000193ee) cel_fep_hwr_func_pane_g1

0x2a44,	// (0x00011e14) bg_vkb2_func_pane_cp02_ParamLimits

0x2a44,	// (0x00011e14) bg_vkb2_func_pane_cp02

0xa01e,	// (0x000193ee) cell_hwr_side_button_pane_g1_ParamLimits

0xa01e,	// (0x000193ee) cell_hwr_side_button_pane_g1

0x4b2c,	// (0x00013efc) status_pane_g4_ParamLimits

0x4b2c,	// (0x00013efc) status_pane_g4

0x4b46,	// (0x00013f16) status_pane_t1

0x759e,	// (0x0001696e) form2_midp_gauge_slider_cont_pane

0x75a6,	// (0x00016976) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe04e,	// (0x0001d41e) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe060,	// (0x0001d430) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae6,	// (0x0001eeb6) form2_midp_gauge_slider_pane_t_ParamLimits

0x75dc,	// (0x000169ac) form2_midp_slider_pane_ParamLimits

0x1bd8,	// (0x00010fa8) aid_size_cell_func_vkb2_ParamLimits

0x1bd8,	// (0x00010fa8) aid_size_cell_func_vkb2

0x9fbf,	// (0x0001938f) slider_pane_g4_ParamLimits

0x9fbf,	// (0x0001938f) slider_pane_g4

0xc6d7,	// (0x0001baa7) form2_midp_gauge_slider_pane_t2_cp01

0xc6e5,	// (0x0001bab5) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc6e5,	// (0x0001bab5) form2_midp_gauge_slider_pane_t3_cp01

0x2303,	// (0x000116d3) form2_midp_slider_pane_cp01

0x26ad,	// (0x00011a7d) navi_smil_pane

0xa057,	// (0x00019427) navi_smil_pane_g1

0xa05f,	// (0x0001942f) navi_smil_pane_t1

0xa02c,	// (0x000193fc) form2_midp_slider_pane_g1

0xa035,	// (0x00019405) form2_midp_slider_pane_g2

0xa03d,	// (0x0001940d) form2_midp_slider_pane_g3

0xa02c,	// (0x000193fc) form2_midp_slider_pane_g4

0xf309,	// (0x0001e6d9) form2_midp_slider_pane_g5

0x0004,

0xfe1c,	// (0x0001f1ec) form2_midp_slider_pane_g

0x22c8,	// (0x00011698) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x22c8,	// (0x00011698) vkb2_area_bottom_space_btn_pane_g4

0xd6c9,	// (0x0001ca99) lc0_navi_pane_ParamLimits

0xd6c9,	// (0x0001ca99) lc0_navi_pane

0xd733,	// (0x0001cb03) lc0_stat_indi_pane_ParamLimits

0xd733,	// (0x0001cb03) lc0_stat_indi_pane

0xd748,	// (0x0001cb18) ls0_title_pane_ParamLimits

0xd748,	// (0x0001cb18) ls0_title_pane

0x35a5,	// (0x00012975) bg_popup_sub_pane_cp14_ParamLimits

0x947f,	// (0x0001884f) list_uniindi_pane_ParamLimits

0x948b,	// (0x0001885b) uniindi_top_pane_ParamLimits

0x9527,	// (0x000188f7) list_single_uniindi_pane_g1_ParamLimits

0x953a,	// (0x0001890a) list_single_uniindi_pane_t1_ParamLimits

0xc702,	// (0x0001bad2) lc0_stat_clock_pane_ParamLimits

0xc702,	// (0x0001bad2) lc0_stat_clock_pane

0xf314,	// (0x0001e6e4) lc0_stat_indi_pane_g1_ParamLimits

0xf314,	// (0x0001e6e4) lc0_stat_indi_pane_g1

0xf321,	// (0x0001e6f1) lc0_stat_indi_pane_g2_ParamLimits

0xf321,	// (0x0001e6f1) lc0_stat_indi_pane_g2

0x0001,

0xfe27,	// (0x0001f1f7) lc0_stat_indi_pane_g_ParamLimits

0xfe27,	// (0x0001f1f7) lc0_stat_indi_pane_g

0xc70f,	// (0x0001badf) lc0_uni_indicator_pane_ParamLimits

0xc70f,	// (0x0001badf) lc0_uni_indicator_pane

0xf32e,	// (0x0001e6fe) ls0_title_pane_g1_ParamLimits

0xf32e,	// (0x0001e6fe) ls0_title_pane_g1

0xf342,	// (0x0001e712) ls0_title_pane_t1_ParamLimits

0xf342,	// (0x0001e712) ls0_title_pane_t1

0xc71c,	// (0x0001baec) lc0_uni_indicator_pane_g1_ParamLimits

0xc71c,	// (0x0001baec) lc0_uni_indicator_pane_g1

0xa0d1,	// (0x000194a1) lc0_stat_clock_pane_t1

0x0318,	// (0x0000f6e8) main_ai5_pane

0xa0df,	// (0x000194af) ai5_sk_pane_ParamLimits

0xa0df,	// (0x000194af) ai5_sk_pane

0xf370,	// (0x0001e740) cell_ai5_widget_pane_ParamLimits

0xf370,	// (0x0001e740) cell_ai5_widget_pane

0xa19e,	// (0x0001956e) aid_size_cell_widget_grid

0xa1b4,	// (0x00019584) bg_ai5_widget_pane_ParamLimits

0xa1b4,	// (0x00019584) bg_ai5_widget_pane

0xa228,	// (0x000195f8) cell_ai5_widget_pane_g2

0xa238,	// (0x00019608) cell_ai5_widget_pane_g3

0xa24f,	// (0x0001961f) cell_ai5_widget_pane_g4

0xa25b,	// (0x0001962b) cell_ai5_widget_pane_g5

0xa267,	// (0x00019637) cell_ai5_widget_pane_g6

0xa273,	// (0x00019643) cell_ai5_widget_pane_g7

0xa2bb,	// (0x0001968b) cell_ai5_widget_pane_t1_ParamLimits

0xa2bb,	// (0x0001968b) cell_ai5_widget_pane_t1

0xa2d8,	// (0x000196a8) cell_ai5_widget_pane_t2_ParamLimits

0xa2d8,	// (0x000196a8) cell_ai5_widget_pane_t2

0xa2f0,	// (0x000196c0) cell_ai5_widget_pane_t3_ParamLimits

0xa2f0,	// (0x000196c0) cell_ai5_widget_pane_t3

0xa308,	// (0x000196d8) cell_ai5_widget_pane_t4_ParamLimits

0xa308,	// (0x000196d8) cell_ai5_widget_pane_t4

0xa325,	// (0x000196f5) cell_ai5_widget_pane_t5_ParamLimits

0xa325,	// (0x000196f5) cell_ai5_widget_pane_t5

0xa344,	// (0x00019714) cell_ai5_widget_pane_t6_ParamLimits

0xa344,	// (0x00019714) cell_ai5_widget_pane_t6

0xa356,	// (0x00019726) cell_ai5_widget_pane_t7_ParamLimits

0xa356,	// (0x00019726) cell_ai5_widget_pane_t7

0xa36f,	// (0x0001973f) cell_ai5_widget_pane_t8_ParamLimits

0xa36f,	// (0x0001973f) cell_ai5_widget_pane_t8

0x0009,

0xfe41,	// (0x0001f211) cell_ai5_widget_pane_t_ParamLimits

0xfe41,	// (0x0001f211) cell_ai5_widget_pane_t

0xa3c3,	// (0x00019793) grid_ai5_widget_pane

0x35a5,	// (0x00012975) highlight_cell_ai5_widget_pane_ParamLimits

0x35a5,	// (0x00012975) highlight_cell_ai5_widget_pane

0xf3d6,	// (0x0001e7a6) ai5_sk_left_pane

0xf3e0,	// (0x0001e7b0) ai5_sk_middle_pane

0xf3ea,	// (0x0001e7ba) ai5_sk_right_pane

0xa3f8,	// (0x000197c8) bg_ai5_widget_pane_g1_ParamLimits

0xa3f8,	// (0x000197c8) bg_ai5_widget_pane_g1

0xa404,	// (0x000197d4) bg_ai5_widget_pane_g2_ParamLimits

0xa404,	// (0x000197d4) bg_ai5_widget_pane_g2

0xa410,	// (0x000197e0) bg_ai5_widget_pane_g3_ParamLimits

0xa410,	// (0x000197e0) bg_ai5_widget_pane_g3

0xa41c,	// (0x000197ec) bg_ai5_widget_pane_g4_ParamLimits

0xa41c,	// (0x000197ec) bg_ai5_widget_pane_g4

0xa428,	// (0x000197f8) bg_ai5_widget_pane_g5_ParamLimits

0xa428,	// (0x000197f8) bg_ai5_widget_pane_g5

0xa434,	// (0x00019804) bg_ai5_widget_pane_g6_ParamLimits

0xa434,	// (0x00019804) bg_ai5_widget_pane_g6

0xa440,	// (0x00019810) bg_ai5_widget_pane_g7_ParamLimits

0xa440,	// (0x00019810) bg_ai5_widget_pane_g7

0xa44c,	// (0x0001981c) bg_ai5_widget_pane_g8_ParamLimits

0xa44c,	// (0x0001981c) bg_ai5_widget_pane_g8

0xa458,	// (0x00019828) bg_ai5_widget_pane_g9_ParamLimits

0xa458,	// (0x00019828) bg_ai5_widget_pane_g9

0x0008,

0xfe56,	// (0x0001f226) bg_ai5_widget_pane_g_ParamLimits

0xfe56,	// (0x0001f226) bg_ai5_widget_pane_g

0xa48a,	// (0x0001985a) cell_shortcut_ai5_widget_pane_ParamLimits

0xa48a,	// (0x0001985a) cell_shortcut_ai5_widget_pane

0x4442,	// (0x00013812) bg_cell_shortcut_ai5_widget_pane

0xa49b,	// (0x0001986b) cell_grid_ai5_widget_pane_g1

0x4442,	// (0x00013812) highlight_cell_shortcut_ai5_widget_pane

0x4ce1,	// (0x000140b1) ai5_sk_left_pane_g1

0xa4a4,	// (0x00019874) ai5_sk_left_pane_g2

0xa4ac,	// (0x0001987c) ai5_sk_left_pane_g3

0xa4b4,	// (0x00019884) ai5_sk_left_pane_g4

0x0003,

0xfe69,	// (0x0001f239) ai5_sk_left_pane_g

0xa4bc,	// (0x0001988c) ai5_sk_left_pane_t1

0x4ce9,	// (0x000140b9) ai5_sk_right_pane_g1

0xa4ca,	// (0x0001989a) ai5_sk_right_pane_g2

0xa4d2,	// (0x000198a2) ai5_sk_right_pane_g3

0xa4da,	// (0x000198aa) ai5_sk_right_pane_g4

0x0003,

0xfe72,	// (0x0001f242) ai5_sk_right_pane_g

0xa4e2,	// (0x000198b2) ai5_sk_right_pane_t1

0x4ce9,	// (0x000140b9) ai5_sk_middle_pane_g1

0x4ce1,	// (0x000140b1) ai5_sk_middle_pane_g2

0x4d01,	// (0x000140d1) ai5_sk_middle_pane_g3

0xa4d2,	// (0x000198a2) ai5_sk_middle_pane_g4

0xa4ac,	// (0x0001987c) ai5_sk_middle_pane_g5

0xa4f0,	// (0x000198c0) ai5_sk_middle_pane_g6

0xf3f4,	// (0x0001e7c4) ai5_sk_middle_pane_g7

0x0006,

0xfe7b,	// (0x0001f24b) ai5_sk_middle_pane_g

0xd5b5,	// (0x0001c985) aid_touch_area_size_lc0_ParamLimits

0xd5b5,	// (0x0001c985) aid_touch_area_size_lc0

0x1950,	// (0x00010d20) cell_hwr_candidate_pane_t1_ParamLimits

0x4803,	// (0x00013bd3) aid_touch_navi_pane

0xd841,	// (0x0001cc11) status_dt_navi_pane_ParamLimits

0xd841,	// (0x0001cc11) status_dt_navi_pane

0xd859,	// (0x0001cc29) status_dt_sta_pane_ParamLimits

0xd859,	// (0x0001cc29) status_dt_sta_pane

0xf3fc,	// (0x0001e7cc) dt_sta_controll_pane

0xf409,	// (0x0001e7d9) dt_sta_indi_pane

0xf416,	// (0x0001e7e6) dt_sta_title_pane

0x2a44,	// (0x00011e14) bg_dt_sta_indi_pane_ParamLimits

0x2a44,	// (0x00011e14) bg_dt_sta_indi_pane

0xf428,	// (0x0001e7f8) dt_sta_battery_pane

0xf430,	// (0x0001e800) dt_sta_indi_pane_g1

0xa542,	// (0x00019912) dt_sta_indi_pane_g2

0xa54b,	// (0x0001991b) dt_sta_indi_pane_g3

0x0002,

0xfe8a,	// (0x0001f25a) dt_sta_indi_pane_g

0xa554,	// (0x00019924) dt_sta_signal_pane

0x35a5,	// (0x00012975) bg_dt_sta_title_pane_ParamLimits

0x35a5,	// (0x00012975) bg_dt_sta_title_pane

0xa55d,	// (0x0001992d) dt_sta_title_pane_g1

0xa565,	// (0x00019935) dt_sta_title_pane_t1_ParamLimits

0xa565,	// (0x00019935) dt_sta_title_pane_t1

0x26ad,	// (0x00011a7d) bg_dt_sta_control_pane

0xf439,	// (0x0001e809) dt_sta_controll_pane_g1

0xa583,	// (0x00019953) bg_dt_sta_title_pane_g1

0xa58c,	// (0x0001995c) bg_dt_sta_title_pane_g2

0xa595,	// (0x00019965) bg_dt_sta_title_pane_g3

0x0002,

0xfe91,	// (0x0001f261) bg_dt_sta_title_pane_g

0x7859,	// (0x00016c29) bg_dt_sta_indi_pane_g1

0xa59e,	// (0x0001996e) dt_sta_signal_pane_g1

0xa5a6,	// (0x00019976) dt_sta_signal_pane_g2

0x0001,

0xfe98,	// (0x0001f268) dt_sta_signal_pane_g

0xa5ae,	// (0x0001997e) dt_sta_battery_pane_g1

0xa5b7,	// (0x00019987) dt_sta_battery_pane_t1

0x7859,	// (0x00016c29) bg_dt_sta_control_pane_g1

0x3eb2,	// (0x00013282) fep_china_uni_eep_pane

0x3eba,	// (0x0001328a) fep_china_uni_entry_pane_ParamLimits

0x3eca,	// (0x0001329a) popup_fep_china_uni_window_g1_ParamLimits

0x3eda,	// (0x000132aa) popup_fep_china_uni_window_g2_ParamLimits

0x3eda,	// (0x000132aa) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001eae8) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001eae8) popup_fep_china_uni_window_g

0xa5c6,	// (0x00019996) fep_china_uni_eep_pane_g1

0xa5ce,	// (0x0001999e) fep_china_uni_eep_pane_t1

0xa04e,	// (0x0001941e) aid_touch_area_size_smil_player

0x4953,	// (0x00013d23) lc0_clock_pane

0x4b3a,	// (0x00013f0a) status_pane_g5_ParamLimits

0x4b3a,	// (0x00013f0a) status_pane_g5

0xbd51,	// (0x0001b121) popup_keymap_window

0x4af8,	// (0x00013ec8) status_icon_pane

0xa238,	// (0x00019608) cell_ai5_widget_pane_g3_ParamLimits

0xa24f,	// (0x0001961f) cell_ai5_widget_pane_g4_ParamLimits

0xa25b,	// (0x0001962b) cell_ai5_widget_pane_g5_ParamLimits

0xa27f,	// (0x0001964f) cell_ai5_widget_pane_g8_ParamLimits

0xa27f,	// (0x0001964f) cell_ai5_widget_pane_g8

0xa293,	// (0x00019663) cell_ai5_widget_pane_g9_ParamLimits

0xa293,	// (0x00019663) cell_ai5_widget_pane_g9

0xa2a7,	// (0x00019677) cell_ai5_widget_pane_g10_ParamLimits

0xa2a7,	// (0x00019677) cell_ai5_widget_pane_g10

0xa5dd,	// (0x000199ad) status_icon_pane_g1

0x26ad,	// (0x00011a7d) bg_popup_sub_pane_cp13

0xa5e5,	// (0x000199b5) popup_keymap_window_t1

0xd51b,	// (0x0001c8eb) control_pane_g6_ParamLimits

0xd51b,	// (0x0001c8eb) control_pane_g6

0xd528,	// (0x0001c8f8) control_pane_g7_ParamLimits

0xd528,	// (0x0001c8f8) control_pane_g7

0xd535,	// (0x0001c905) control_pane_g8_ParamLimits

0xd535,	// (0x0001c905) control_pane_g8

0xf3fc,	// (0x0001e7cc) dt_sta_controll_pane_ParamLimits

0xf409,	// (0x0001e7d9) dt_sta_indi_pane_ParamLimits

0xf416,	// (0x0001e7e6) dt_sta_title_pane_ParamLimits

0x2f62,	// (0x00012332) aid_size_touch_scroll_bar_cale

0x03f1,	// (0x0000f7c1) popup_discreet_window_ParamLimits

0x03f1,	// (0x0000f7c1) popup_discreet_window

0xb92d,	// (0x0001acfd) popup_sk_window

0x543f,	// (0x0001480f) bg_popup_sub_pane_cp28_ParamLimits

0x543f,	// (0x0001480f) bg_popup_sub_pane_cp28

0xa5f3,	// (0x000199c3) popup_discreet_window_g1_ParamLimits

0xa5f3,	// (0x000199c3) popup_discreet_window_g1

0xa613,	// (0x000199e3) popup_discreet_window_t1_ParamLimits

0xa613,	// (0x000199e3) popup_discreet_window_t1

0xa631,	// (0x00019a01) popup_discreet_window_t2_ParamLimits

0xa631,	// (0x00019a01) popup_discreet_window_t2

0x0002,

0xfe9d,	// (0x0001f26d) popup_discreet_window_t_ParamLimits

0xfe9d,	// (0x0001f26d) popup_discreet_window_t

0x233a,	// (0x0001170a) popup_sk_window_g1

0x2344,	// (0x00011714) popup_sk_window_g2

0x0001,

0xfea4,	// (0x0001f274) popup_sk_window_g

0x234c,	// (0x0001171c) popup_sk_window_t1

0x235a,	// (0x0001172a) popup_sk_window_t1_copy1

0xa228,	// (0x000195f8) cell_ai5_widget_pane_g2_ParamLimits

0xa381,	// (0x00019751) cell_ai5_widget_pane_t9_ParamLimits

0xa381,	// (0x00019751) cell_ai5_widget_pane_t9

0x26ad,	// (0x00011a7d) main_fep_fshwr2_pane

0xc743,	// (0x0001bb13) aid_fshwr2_btn_pane

0xc754,	// (0x0001bb24) aid_fshwr2_syb_pane

0xc765,	// (0x0001bb35) aid_fshwr2_txt_pane

0xc771,	// (0x0001bb41) fshwr2_func_candi_pane

0xc790,	// (0x0001bb60) fshwr2_hwr_syb_pane

0xc7ab,	// (0x0001bb7b) fshwr2_icf_pane

0x0318,	// (0x0000f6e8) fshwr2_icf_bg_pane

0x23da,	// (0x000117aa) fshwr2_icf_pane_t1_ParamLimits

0x23da,	// (0x000117aa) fshwr2_icf_pane_t1

0x3da0,	// (0x00013170) fshwr2_func_candi_pane_g1

0xf442,	// (0x0001e812) fshwr2_func_candi_row_pane_ParamLimits

0xf442,	// (0x0001e812) fshwr2_func_candi_row_pane

0xc7d7,	// (0x0001bba7) cell_fshwr2_syb_pane_ParamLimits

0xc7d7,	// (0x0001bba7) cell_fshwr2_syb_pane

0x1921,	// (0x00010cf1) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1921,	// (0x00010cf1) fshwr2_hwr_syb_pane_g1

0x0318,	// (0x0000f6e8) bg_popup_call_pane_cp01

0xc7ed,	// (0x0001bbbd) fshwr2_func_candi_cell_pane_ParamLimits

0xc7ed,	// (0x0001bbbd) fshwr2_func_candi_cell_pane

0xf465,	// (0x0001e835) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf465,	// (0x0001e835) fshwr2_func_candi_cell_bg_pane

0xc838,	// (0x0001bc08) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc838,	// (0x0001bc08) fshwr2_func_candi_cell_pane_g1

0xc86f,	// (0x0001bc3f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc86f,	// (0x0001bc3f) fshwr2_func_candi_cell_pane_t1

0x0318,	// (0x0000f6e8) bg_button_pane_cp08

0xa69f,	// (0x00019a6f) cell_fshwr2_syb_bg_pane

0xc88a,	// (0x0001bc5a) cell_fshwr2_syb_bg_pane_g1

0xc892,	// (0x0001bc62) cell_fshwr2_syb_bg_pane_t1

0x35a5,	// (0x00012975) main_tmo_pane

0xdb2d,	// (0x0001cefd) uni_indicator_pane_g1_ParamLimits

0xdb43,	// (0x0001cf13) uni_indicator_pane_g2_ParamLimits

0xdb59,	// (0x0001cf29) uni_indicator_pane_g3_ParamLimits

0x5f99,	// (0x00015369) uni_indicator_pane_g4_ParamLimits

0x5f99,	// (0x00015369) uni_indicator_pane_g4

0x5fad,	// (0x0001537d) uni_indicator_pane_g5_ParamLimits

0x5fad,	// (0x0001537d) uni_indicator_pane_g5

0x5fad,	// (0x0001537d) uni_indicator_pane_g6_ParamLimits

0x5fad,	// (0x0001537d) uni_indicator_pane_g6

0xf917,	// (0x0001ece7) uni_indicator_pane_g_ParamLimits

0xe7eb,	// (0x0001dbbb) popup_tmo_note_window_ParamLimits

0xe7eb,	// (0x0001dbbb) popup_tmo_note_window

0x1bba,	// (0x00010f8a) fshwr2_bg_pane

0xc860,	// (0x0001bc30) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc860,	// (0x0001bc30) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea9,	// (0x0001f279) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea9,	// (0x0001f279) fshwr2_func_candi_cell_pane_g

0x1909,	// (0x00010cd9) bg_popup_window_pane_cp01

0x24a5,	// (0x00011875) bg_popup_window_pane_g1_cp01

0xa6a7,	// (0x00019a77) bg_popup_window_pane_cp22_ParamLimits

0xa6a7,	// (0x00019a77) bg_popup_window_pane_cp22

0xa6b5,	// (0x00019a85) listscroll_tmo_link_pane_ParamLimits

0xa6b5,	// (0x00019a85) listscroll_tmo_link_pane

0xa6f5,	// (0x00019ac5) popup_tmo_note_window_g1_ParamLimits

0xa6f5,	// (0x00019ac5) popup_tmo_note_window_g1

0xa702,	// (0x00019ad2) tmo_note_info_pane_ParamLimits

0xa702,	// (0x00019ad2) tmo_note_info_pane

0xf471,	// (0x0001e841) list_tmo_note_info_pane_g1_ParamLimits

0xf471,	// (0x0001e841) list_tmo_note_info_pane_g1

0xa733,	// (0x00019b03) list_tmo_note_info_pane_g2_ParamLimits

0xa733,	// (0x00019b03) list_tmo_note_info_pane_g2

0x0001,

0xfeae,	// (0x0001f27e) list_tmo_note_info_pane_g_ParamLimits

0xfeae,	// (0x0001f27e) list_tmo_note_info_pane_g

0xa74f,	// (0x00019b1f) list_tmo_note_info_text_pane_ParamLimits

0xa74f,	// (0x00019b1f) list_tmo_note_info_text_pane

0xa7d0,	// (0x00019ba0) list_tmo_link_pane

0xa7dd,	// (0x00019bad) scroll_pane_cp20

0xa7ea,	// (0x00019bba) list_single_tmo_link_pane_ParamLimits

0xa7ea,	// (0x00019bba) list_single_tmo_link_pane

0xa7fa,	// (0x00019bca) list_single_tmo_link_pane_t1

0xa808,	// (0x00019bd8) list_tmo_note_info_text_pane_t1_ParamLimits

0xa808,	// (0x00019bd8) list_tmo_note_info_text_pane_t1

0xd152,	// (0x0001c522) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd152,	// (0x0001c522) aid_size_touch_scroll_bar_cp01

0xd082,	// (0x0001c452) aid_size_touch_slider_marker

0xb91d,	// (0x0001aced) popup_settings_window_ParamLimits

0xb91d,	// (0x0001aced) popup_settings_window

0x47b3,	// (0x00013b83) popup_candi_list_indi_window

0x4803,	// (0x00013bd3) aid_touch_navi_pane_ParamLimits

0x1b15,	// (0x00010ee5) rs_clock_indi_pane

0x1b1e,	// (0x00010eee) sctrl_sk_bottom_pane_ParamLimits

0x1b2f,	// (0x00010eff) sctrl_sk_top_pane_ParamLimits

0x1c32,	// (0x00011002) popup_fep_tooltip_window

0xa19e,	// (0x0001956e) aid_size_cell_widget_grid_ParamLimits

0xa213,	// (0x000195e3) cell_ai5_widget_pane_g1_ParamLimits

0xa213,	// (0x000195e3) cell_ai5_widget_pane_g1

0xa267,	// (0x00019637) cell_ai5_widget_pane_g6_ParamLimits

0xa273,	// (0x00019643) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2c,	// (0x0001f1fc) cell_ai5_widget_pane_g_ParamLimits

0xfe2c,	// (0x0001f1fc) cell_ai5_widget_pane_g

0xa3a5,	// (0x00019775) cell_ai5_widget_pane_t10_ParamLimits

0xa3a5,	// (0x00019775) cell_ai5_widget_pane_t10

0xa3c3,	// (0x00019793) grid_ai5_widget_pane_ParamLimits

0xa464,	// (0x00019834) cell_contacts_ai5_widget_pane_ParamLimits

0xa464,	// (0x00019834) cell_contacts_ai5_widget_pane

0xa646,	// (0x00019a16) popup_discreet_window_t3_ParamLimits

0xa646,	// (0x00019a16) popup_discreet_window_t3

0xc7c3,	// (0x0001bb93) popup_fshwr2_char_preview_window_ParamLimits

0xc7c3,	// (0x0001bb93) popup_fshwr2_char_preview_window

0xf488,	// (0x0001e858) tmo_note_info_pane_t1

0xf49d,	// (0x0001e86d) tmo_note_info_pane_t2

0xf4b4,	// (0x0001e884) tmo_note_info_pane_t3

0xa7ac,	// (0x00019b7c) tmo_note_info_pane_t4

0xa7be,	// (0x00019b8e) tmo_note_info_pane_t5

0x0004,

0xfeb3,	// (0x0001f283) tmo_note_info_pane_t

0xa7d0,	// (0x00019ba0) list_tmo_link_pane_ParamLimits

0xa7dd,	// (0x00019bad) scroll_pane_cp20_ParamLimits

0x0318,	// (0x0000f6e8) bg_popup_fep_char_preview_window_cp01

0xa821,	// (0x00019bf1) popup_fshwr2_char_preview_window_t1

0xa82f,	// (0x00019bff) popup_candi_list_indi_window_g1

0xa838,	// (0x00019c08) bg_cell_contacts_ai5_widget_pane

0xa844,	// (0x00019c14) cell_contacts_ai5_widget_pane_g1

0x809c,	// (0x0001746c) cell_contacts_ai5_widget_pane_g2

0xa859,	// (0x00019c29) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebe,	// (0x0001f28e) cell_contacts_ai5_widget_pane_g

0xa865,	// (0x00019c35) cell_contacts_ai5_widget_pane_t1

0x35a5,	// (0x00012975) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa8dc,	// (0x00019cac) settings_container_pane

0x4442,	// (0x00013812) listscroll_set_pane_copy1

0x6c16,	// (0x00015fe6) scroll_pane_cp121_copy1

0x51f0,	// (0x000145c0) set_content_pane_copy1

0xa8e8,	// (0x00019cb8) aid_height_set_list_copy1_ParamLimits

0xa8e8,	// (0x00019cb8) aid_height_set_list_copy1

0x61cd,	// (0x0001559d) aid_size_parent_copy1_ParamLimits

0x61cd,	// (0x0001559d) aid_size_parent_copy1

0xa8f4,	// (0x00019cc4) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa8f4,	// (0x00019cc4) button_value_adjust_pane_cp6_copy1

0x4799,	// (0x00013b69) list_highlight_pane_cp2_copy1_ParamLimits

0x4799,	// (0x00013b69) list_highlight_pane_cp2_copy1

0xa908,	// (0x00019cd8) list_set_pane_copy1_ParamLimits

0xa908,	// (0x00019cd8) list_set_pane_copy1

0xa877,	// (0x00019c47) main_pane_set_t1_copy1_ParamLimits

0xa877,	// (0x00019c47) main_pane_set_t1_copy1

0xa8b1,	// (0x00019c81) main_pane_set_t2_copy1_ParamLimits

0xa8b1,	// (0x00019c81) main_pane_set_t2_copy1

0xa9b5,	// (0x00019d85) main_pane_set_t3_copy1

0xa9c3,	// (0x00019d93) main_pane_set_t4_copy1

0xa8d0,	// (0x00019ca0) set_content_pane_g1_copy1_ParamLimits

0xa8d0,	// (0x00019ca0) set_content_pane_g1_copy1

0xa9d1,	// (0x00019da1) setting_code_pane_copy1

0xa9d9,	// (0x00019da9) setting_slider_graphic_pane_copy1

0xa9d9,	// (0x00019da9) setting_slider_pane_copy1

0xa9d9,	// (0x00019da9) setting_text_pane_copy1

0xa9d9,	// (0x00019da9) setting_volume_pane_copy1

0xa9d1,	// (0x00019da1) settings_code_pane_cp2_copy1

0xa9e1,	// (0x00019db1) settings_code_pane_cp_copy1_ParamLimits

0xa9e1,	// (0x00019db1) settings_code_pane_cp_copy1

0x24ae,	// (0x0001187e) volume_set_pane_copy1

0xa9f5,	// (0x00019dc5) volume_set_pane_g10_copy1

0xa9fd,	// (0x00019dcd) volume_set_pane_g1_copy1

0xaa05,	// (0x00019dd5) volume_set_pane_g2_copy1

0xaa0d,	// (0x00019ddd) volume_set_pane_g3_copy1

0xaa15,	// (0x00019de5) volume_set_pane_g4_copy1

0xaa1d,	// (0x00019ded) volume_set_pane_g5_copy1

0xaa25,	// (0x00019df5) volume_set_pane_g6_copy1

0xaa2d,	// (0x00019dfd) volume_set_pane_g7_copy1

0xaa35,	// (0x00019e05) volume_set_pane_g8_copy1

0xaa3d,	// (0x00019e0d) volume_set_pane_g9_copy1

0x27a1,	// (0x00011b71) bg_set_opt_pane_cp_copy1_ParamLimits

0x27a1,	// (0x00011b71) bg_set_opt_pane_cp_copy1

0x24b6,	// (0x00011886) setting_slider_pane_t1_copy1_ParamLimits

0x24b6,	// (0x00011886) setting_slider_pane_t1_copy1

0x24d4,	// (0x000118a4) setting_slider_pane_t2_copy1_ParamLimits

0x24d4,	// (0x000118a4) setting_slider_pane_t2_copy1

0x24ee,	// (0x000118be) setting_slider_pane_t3_copy1_ParamLimits

0x24ee,	// (0x000118be) setting_slider_pane_t3_copy1

0x2506,	// (0x000118d6) slider_set_pane_copy1_ParamLimits

0x2506,	// (0x000118d6) slider_set_pane_copy1

0x36c8,	// (0x00012a98) set_opt_bg_pane_g1_copy2

0x36d0,	// (0x00012aa0) set_opt_bg_pane_g2_copy2

0xaa45,	// (0x00019e15) set_opt_bg_pane_g3_copy2

0x36e0,	// (0x00012ab0) set_opt_bg_pane_g4_copy2

0x36e8,	// (0x00012ab8) set_opt_bg_pane_g5_copy2

0x36f0,	// (0x00012ac0) set_opt_bg_pane_g6_copy2

0xaa4f,	// (0x00019e1f) set_opt_bg_pane_g7_copy2

0xaa57,	// (0x00019e27) set_opt_bg_pane_g8_copy2

0xaa61,	// (0x00019e31) set_opt_bg_pane_g9_copy2

0x251c,	// (0x000118ec) aid_size_touch_slider_mark_copy1_ParamLimits

0x251c,	// (0x000118ec) aid_size_touch_slider_mark_copy1

0xaa6b,	// (0x00019e3b) slider_set_pane_g1_copy1

0x2530,	// (0x00011900) slider_set_pane_g2_copy1

0x154a,	// (0x0001091a) slider_set_pane_g3_copy1_ParamLimits

0x154a,	// (0x0001091a) slider_set_pane_g3_copy1

0x155e,	// (0x0001092e) slider_set_pane_g4_copy1_ParamLimits

0x155e,	// (0x0001092e) slider_set_pane_g4_copy1

0x1576,	// (0x00010946) slider_set_pane_g5_copy1_ParamLimits

0x1576,	// (0x00010946) slider_set_pane_g5_copy1

0x154a,	// (0x0001091a) slider_set_pane_g6_copy1_ParamLimits

0x154a,	// (0x0001091a) slider_set_pane_g6_copy1

0x2538,	// (0x00011908) slider_set_pane_g7_copy1_ParamLimits

0x2538,	// (0x00011908) slider_set_pane_g7_copy1

0x26c1,	// (0x00011a91) bg_set_opt_pane_cp2_copy1

0xaa74,	// (0x00019e44) setting_slider_graphic_pane_g1_copy1

0xaa7d,	// (0x00019e4d) setting_slider_graphic_pane_t1_copy1

0xaa8d,	// (0x00019e5d) setting_slider_graphic_pane_t2_copy1

0xaa9d,	// (0x00019e6d) slider_set_pane_cp_copy1

0xaaad,	// (0x00019e7d) input_focus_pane_cp1_copy1

0xaab6,	// (0x00019e86) list_set_text_pane_copy1

0xaabe,	// (0x00019e8e) setting_text_pane_g1_copy1

0x27fa,	// (0x00011bca) set_text_pane_t1_copy1

0xaaad,	// (0x00019e7d) input_focus_pane_cp2_copy1

0xaabe,	// (0x00019e8e) setting_code_pane_g1_copy1

0xaac7,	// (0x00019e97) setting_code_pane_t1_copy1

0xaad5,	// (0x00019ea5) list_set_graphic_pane_copy1

0x26c1,	// (0x00011a91) bg_set_opt_pane_cp4_copy1

0x413d,	// (0x0001350d) list_set_graphic_pane_g1_copy1_ParamLimits

0x413d,	// (0x0001350d) list_set_graphic_pane_g1_copy1

0xaae8,	// (0x00019eb8) list_set_graphic_pane_g2_copy1

0x4155,	// (0x00013525) list_set_graphic_pane_t1_copy1_ParamLimits

0x4155,	// (0x00013525) list_set_graphic_pane_t1_copy1

0x7859,	// (0x00016c29) rs_clock_indi_pane_g1

0xaaf0,	// (0x00019ec0) rs_clock_indi_pane_t1

0xaafe,	// (0x00019ece) rs_indi_pane

0xab06,	// (0x00019ed6) rs_indi_pane_g1

0xab0f,	// (0x00019edf) rs_indi_pane_g2

0xab18,	// (0x00019ee8) rs_indi_pane_g3

0x0002,

0xfec5,	// (0x0001f295) rs_indi_pane_g

0x4442,	// (0x00013812) bg_popup_preview_window_pane_cp03

0xab21,	// (0x00019ef1) popup_fep_tooltip_window_t1

0x86d1,	// (0x00017aa1) popup_note2_window_g2_ParamLimits

0x86d1,	// (0x00017aa1) popup_note2_window_g2

0x0001,

0xfc5e,	// (0x0001f02e) popup_note2_window_g_ParamLimits

0xfc5e,	// (0x0001f02e) popup_note2_window_g

0x8caf,	// (0x0001807f) bg_popup_sub_pane_cp11_ParamLimits

0x8cbc,	// (0x0001808c) cell_ai3_links_pane_g1_ParamLimits

0x8cd3,	// (0x000180a3) cell_ai3_links_pane_t1

0x27fa,	// (0x00011bca) set_text_pane_t1_copy1_ParamLimits

0x4353,	// (0x00013723) cell_graphic_popup_pane_cp2_ParamLimits

0x4353,	// (0x00013723) cell_graphic_popup_pane_cp2

0xab2f,	// (0x00019eff) cell_graphic_popup_pane_g1_cp2

0x2d75,	// (0x00012145) cell_graphic_popup_pane_g2_cp2

0xab37,	// (0x00019f07) cell_graphic_popup_pane_g3_cp2

0xab3f,	// (0x00019f0f) cell_graphic_popup_pane_t2_cp2

0x2d86,	// (0x00012156) grid_highlight_pane_cp3_cp2

0x3ab9,	// (0x00012e89) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x35a5,	// (0x00012975) main_tmo_pane_ParamLimits

0xe7df,	// (0x0001dbaf) popup_tmo_big_image_note_window

0xa202,	// (0x000195d2) cell_ai5_widget_list_pane

0xa20a,	// (0x000195da) cell_ai5_widget_lrg_icon_pane

0xf488,	// (0x0001e858) tmo_note_info_pane_t1_ParamLimits

0xf49d,	// (0x0001e86d) tmo_note_info_pane_t2_ParamLimits

0xf4b4,	// (0x0001e884) tmo_note_info_pane_t3_ParamLimits

0xa7ac,	// (0x00019b7c) tmo_note_info_pane_t4_ParamLimits

0xa7be,	// (0x00019b8e) tmo_note_info_pane_t5_ParamLimits

0xfeb3,	// (0x0001f283) tmo_note_info_pane_t_ParamLimits

0xa8dc,	// (0x00019cac) settings_container_pane_ParamLimits

0xaaa5,	// (0x00019e75) indicator_popup_pane_cp5

0xaaa5,	// (0x00019e75) indicator_popup_pane_cp6

0xaad5,	// (0x00019ea5) list_set_graphic_pane_copy1_ParamLimits

0x26ad,	// (0x00011a7d) bg_popup_window_pane_cp23

0xab4d,	// (0x00019f1d) popup_tmo_big_image_note_window_g1

0xab57,	// (0x00019f27) popup_tmo_big_image_note_window_t1

0xab67,	// (0x00019f37) popup_tmo_big_image_note_window_t2

0xab77,	// (0x00019f47) popup_tmo_big_image_note_window_t3

0x0002,

0xfecc,	// (0x0001f29c) popup_tmo_big_image_note_window_t

0x7859,	// (0x00016c29) cell_ai5_widget_lrg_icon_pane_g1

0xab87,	// (0x00019f57) cell_ai5_widget_lrg_icon_pane_t1

0xab95,	// (0x00019f65) cell_ai5_widget_list_row_pane_ParamLimits

0xab95,	// (0x00019f65) cell_ai5_widget_list_row_pane

0xabac,	// (0x00019f7c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xabac,	// (0x00019f7c) cell_ai5_widget_list_row_pane_g1

0xabb9,	// (0x00019f89) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xabb9,	// (0x00019f89) cell_ai5_widget_list_row_pane_t1

0xabea,	// (0x00019fba) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xabea,	// (0x00019fba) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed3,	// (0x0001f2a3) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed3,	// (0x0001f2a3) cell_ai5_widget_list_row_pane_t

0x0318,	// (0x0000f6e8) main_fep_vtchi_ss_pane

0xac2e,	// (0x00019ffe) popup_fep_char_pre_window

0xac36,	// (0x0001a006) popup_fep_ituss_window

0xf4c9,	// (0x0001e899) popup_fep_vkbss_window

0xf4d6,	// (0x0001e8a6) grid_vkbss_keypad_pane_ParamLimits

0xf4d6,	// (0x0001e8a6) grid_vkbss_keypad_pane

0xac91,	// (0x0001a061) ituss_keypad_pane

0x255a,	// (0x0001192a) aid_vkbss_key_offset_ParamLimits

0x255a,	// (0x0001192a) aid_vkbss_key_offset

0xc8a1,	// (0x0001bc71) cell_vkbss_key_pane_ParamLimits

0xc8a1,	// (0x0001bc71) cell_vkbss_key_pane

0xaca0,	// (0x0001a070) bg_cell_vkbss_key_g1_ParamLimits

0xaca0,	// (0x0001a070) bg_cell_vkbss_key_g1

0xf4e6,	// (0x0001e8b6) cell_vkbss_key_3p_pane_ParamLimits

0xf4e6,	// (0x0001e8b6) cell_vkbss_key_3p_pane

0xf500,	// (0x0001e8d0) cell_vkbss_key_g1_ParamLimits

0xf500,	// (0x0001e8d0) cell_vkbss_key_g1

0xf51a,	// (0x0001e8ea) cell_vkbss_key_t1_ParamLimits

0xf51a,	// (0x0001e8ea) cell_vkbss_key_t1

0x257c,	// (0x0001194c) cell_ituss_key_pane_ParamLimits

0x257c,	// (0x0001194c) cell_ituss_key_pane

0xacff,	// (0x0001a0cf) bg_cell_ituss_key_g1_ParamLimits

0xacff,	// (0x0001a0cf) bg_cell_ituss_key_g1

0xad0b,	// (0x0001a0db) cell_ituss_key_pane_g1_ParamLimits

0xad0b,	// (0x0001a0db) cell_ituss_key_pane_g1

0x258d,	// (0x0001195d) cell_ituss_key_pane_g2_ParamLimits

0x258d,	// (0x0001195d) cell_ituss_key_pane_g2

0x0002,

0xfeda,	// (0x0001f2aa) cell_ituss_key_pane_g_ParamLimits

0xfeda,	// (0x0001f2aa) cell_ituss_key_pane_g

0x25b9,	// (0x00011989) cell_ituss_key_t1_ParamLimits

0x25b9,	// (0x00011989) cell_ituss_key_t1

0x25f3,	// (0x000119c3) cell_ituss_key_t2_ParamLimits

0x25f3,	// (0x000119c3) cell_ituss_key_t2

0x2624,	// (0x000119f4) cell_ituss_key_t3_ParamLimits

0x2624,	// (0x000119f4) cell_ituss_key_t3

0x25f3,	// (0x000119c3) cell_ituss_key_t4_ParamLimits

0x25f3,	// (0x000119c3) cell_ituss_key_t4

0x0004,

0xfee1,	// (0x0001f2b1) cell_ituss_key_t_ParamLimits

0xfee1,	// (0x0001f2b1) cell_ituss_key_t

0xad37,	// (0x0001a107) cell_vkbss_key_3p_pane_g1

0xad3f,	// (0x0001a10f) cell_vkbss_key_3p_pane_g2

0xad47,	// (0x0001a117) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeec,	// (0x0001f2bc) cell_vkbss_key_3p_pane_g

0x0318,	// (0x0000f6e8) bg_popup_fep_char_preview_window_cp02

0x2667,	// (0x00011a37) popup_fep_char_pre_window_t1

0xf3cc,	// (0x0001e79c) main_ai5_sk_pane

0xa838,	// (0x00019c08) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa844,	// (0x00019c14) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x809c,	// (0x0001746c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa859,	// (0x00019c29) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebe,	// (0x0001f28e) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa865,	// (0x00019c35) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x35a5,	// (0x00012975) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf545,	// (0x0001e915) main_ai5_sk_pane_g1

0x5278,	// (0x00014648) popup_query_code_window_g1

0xac4c,	// (0x0001a01c) popup_fep_vkb_icf_pane

0xac6b,	// (0x0001a03b) popup_fep_vtchi_icf_pane

0xad58,	// (0x0001a128) bg_icf_pane

0xad64,	// (0x0001a134) list_vkb_icf_pane

0xad73,	// (0x0001a143) bg_icf_pane_cp01

0xad86,	// (0x0001a156) vtchi_icf_list_pane

0xad96,	// (0x0001a166) list_vkb_icf_pane_t1_ParamLimits

0xad96,	// (0x0001a166) list_vkb_icf_pane_t1

0xadac,	// (0x0001a17c) vtchi_icf_list_pane_t1_ParamLimits

0xadac,	// (0x0001a17c) vtchi_icf_list_pane_t1

0xac36,	// (0x0001a006) popup_fep_ituss_window_ParamLimits

0xac6b,	// (0x0001a03b) popup_fep_vtchi_icf_pane_ParamLimits

0xac91,	// (0x0001a061) ituss_keypad_pane_ParamLimits

0x254e,	// (0x0001191e) ituss_sks_pane

0xad58,	// (0x0001a128) bg_icf_pane_ParamLimits

0xac12,	// (0x00019fe2) icf_edit_indi_pane_ParamLimits

0xac12,	// (0x00019fe2) icf_edit_indi_pane

0xad64,	// (0x0001a134) list_vkb_icf_pane_ParamLimits

0xad73,	// (0x0001a143) bg_icf_pane_cp01_ParamLimits

0xac21,	// (0x00019ff1) icf_edit_indi_pane_cp01_ParamLimits

0xac21,	// (0x00019ff1) icf_edit_indi_pane_cp01

0xad8e,	// (0x0001a15e) vtchi_query_pane

0x7ad7,	// (0x00016ea7) icf_edit_indi_pane_g1_ParamLimits

0x7ad7,	// (0x00016ea7) icf_edit_indi_pane_g1

0xae1d,	// (0x0001a1ed) icf_edit_indi_pane_g2_ParamLimits

0xae1d,	// (0x0001a1ed) icf_edit_indi_pane_g2

0x0001,

0xff04,	// (0x0001f2d4) icf_edit_indi_pane_g_ParamLimits

0xff04,	// (0x0001f2d4) icf_edit_indi_pane_g

0xae2c,	// (0x0001a1fc) icf_edit_indi_pane_t1

0xadc6,	// (0x0001a196) bg_input_focus_pane_cp042

0x2f59,	// (0x00012329) vtchi_button_pane

0xadcf,	// (0x0001a19f) vtchi_query_pane_t1

0xaddd,	// (0x0001a1ad) vtchi_query_pane_t2

0xadeb,	// (0x0001a1bb) vtchi_query_pane_t3

0x0002,

0xfef3,	// (0x0001f2c3) vtchi_query_pane_t

0x0318,	// (0x0000f6e8) bg_button_pane_cp13

0xadf9,	// (0x0001a1c9) vtchi_button_pane_g1

0x2676,	// (0x00011a46) ituss_sks_pane_g1

0x2681,	// (0x00011a51) ituss_sks_pane_g2

0x0001,

0xfefa,	// (0x0001f2ca) ituss_sks_pane_g

0xae01,	// (0x0001a1d1) ituss_sks_pane_t1

0xae0f,	// (0x0001a1df) ituss_sks_pane_t2

0x0001,

0xfeff,	// (0x0001f2cf) ituss_sks_pane_t

0x7295,	// (0x00016665) indicator_nsta_pane_cp_g1

0x729d,	// (0x0001666d) indicator_nsta_pane_cp_g2

0x72a5,	// (0x00016675) indicator_nsta_pane_cp_g3

0x7295,	// (0x00016665) indicator_nsta_pane_cp_g4

0x729d,	// (0x0001666d) indicator_nsta_pane_cp_g5

0x72a5,	// (0x00016675) indicator_nsta_pane_cp_g6

0x0005,

0xfa9c,	// (0x0001ee6c) indicator_nsta_pane_cp_g

0xf1e4,	// (0x0001e5b4) cell_graphic2_pane_t2_ParamLimits

0xf1e4,	// (0x0001e5b4) cell_graphic2_pane_t2

0x0001,

0xfdb5,	// (0x0001f185) cell_graphic2_pane_t_ParamLimits

0xfdb5,	// (0x0001f185) cell_graphic2_pane_t

0xf218,	// (0x0001e5e8) cell_graphic2_control_pane_t1

0xd2fd,	// (0x0001c6cd) signal_pane_g3_ParamLimits

0xd2fd,	// (0x0001c6cd) signal_pane_g3

0xd311,	// (0x0001c6e1) signal_pane_g4_ParamLimits

0xd311,	// (0x0001c6e1) signal_pane_g4

0xabfc,	// (0x00019fcc) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xabfc,	// (0x00019fcc) cell_ai5_widget_list_row_pane_t3

0xad25,	// (0x0001a0f5) cell_ituss_key_pane_t1_ParamLimits

0xad25,	// (0x0001a0f5) cell_ituss_key_pane_t1

0x4e8c,	// (0x0001425c) form_field_data_wide_pane_vc_t2_ParamLimits

0x4e8c,	// (0x0001425c) form_field_data_wide_pane_vc_t2

0x4ea0,	// (0x00014270) form_field_data_wide_pane_vc_t3_ParamLimits

0x4ea0,	// (0x00014270) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ff,	// (0x0001ebcf) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ff,	// (0x0001ebcf) form_field_data_wide_pane_vc_t

0x6f5d,	// (0x0001632d) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6f5d,	// (0x0001632d) form_field_slider_wide_pane_vc_t3

0x703b,	// (0x0001640b) form_field_popup_wide_pane_vc_t2_ParamLimits

0x703b,	// (0x0001640b) form_field_popup_wide_pane_vc_t2

0x7052,	// (0x00016422) form_field_popup_wide_pane_vc_t3_ParamLimits

0x7052,	// (0x00016422) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa8b,	// (0x0001ee5b) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa8b,	// (0x0001ee5b) form_field_popup_wide_pane_vc_t

0xc743,	// (0x0001bb13) aid_fshwr2_btn_pane_ParamLimits

0xc754,	// (0x0001bb24) aid_fshwr2_syb_pane_ParamLimits

0xc765,	// (0x0001bb35) aid_fshwr2_txt_pane_ParamLimits

0x1bba,	// (0x00010f8a) fshwr2_bg_pane_ParamLimits

0xc771,	// (0x0001bb41) fshwr2_func_candi_pane_ParamLimits

0xc790,	// (0x0001bb60) fshwr2_hwr_syb_pane_ParamLimits

0xc7ab,	// (0x0001bb7b) fshwr2_icf_pane_ParamLimits

0x6ec3,	// (0x00016293) list_double_graphic_pane_vc_g4_ParamLimits

0x6ec3,	// (0x00016293) list_double_graphic_pane_vc_g4

0x25ad,	// (0x0001197d) cell_ituss_key_pane_g3_ParamLimits

0x25ad,	// (0x0001197d) cell_ituss_key_pane_g3

0x2655,	// (0x00011a25) cell_ituss_key_t5_ParamLimits

0x2655,	// (0x00011a25) cell_ituss_key_t5

0xf4c9,	// (0x0001e899) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal

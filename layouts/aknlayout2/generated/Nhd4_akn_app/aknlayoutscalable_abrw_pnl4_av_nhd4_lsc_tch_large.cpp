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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0004ebc8 };

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
0xcf3b,	// (0x0005bb03) Screen

0xcf47,	// (0x0005bb0f) application_window_ParamLimits

0xcf47,	// (0x0005bb0f) application_window

0x3731,	// (0x000522f9) screen_g1

0xb6e8,	// (0x0005a2b0) area_bottom_pane_ParamLimits

0xb6e8,	// (0x0005a2b0) area_bottom_pane

0x01f0,	// (0x0004edb8) area_top_pane_ParamLimits

0x01f0,	// (0x0004edb8) area_top_pane

0x028e,	// (0x0004ee56) main_pane_ParamLimits

0x028e,	// (0x0004ee56) main_pane

0x373b,	// (0x00052303) misc_graphics

0xd6f3,	// (0x0005c2bb) battery_pane_ParamLimits

0xd6f3,	// (0x0005c2bb) battery_pane

0x5d94,	// (0x0005495c) bg_status_flat_pane_g8

0x5d9c,	// (0x00054964) bg_status_flat_pane_g9

0x5177,	// (0x00053d3f) context_pane_ParamLimits

0x5177,	// (0x00053d3f) context_pane

0xd908,	// (0x0005c4d0) navi_pane_ParamLimits

0xd908,	// (0x0005c4d0) navi_pane

0xd986,	// (0x0005c54e) signal_pane_ParamLimits

0xd986,	// (0x0005c54e) signal_pane

0x0008,

0xf874,	// (0x0005e43c) bg_status_flat_pane_g

0xda16,	// (0x0005c5de) status_pane_g1_ParamLimits

0xda16,	// (0x0005c5de) status_pane_g1

0xda2c,	// (0x0005c5f4) status_pane_g2_ParamLimits

0xda2c,	// (0x0005c5f4) status_pane_g2

0x5396,	// (0x00053f5e) status_pane_g3_ParamLimits

0x5396,	// (0x00053f5e) status_pane_g3

0x0004,

0xf7a0,	// (0x0005e368) status_pane_g_ParamLimits

0xf7a0,	// (0x0005e368) status_pane_g

0xda38,	// (0x0005c600) title_pane_ParamLimits

0xda38,	// (0x0005c600) title_pane

0xda9b,	// (0x0005c663) uni_indicator_pane_ParamLimits

0xda9b,	// (0x0005c663) uni_indicator_pane

0x4fdd,	// (0x00053ba5) bg_list_pane_ParamLimits

0x4fdd,	// (0x00053ba5) bg_list_pane

0xd666,	// (0x0005c22e) find_pane

0xbf71,	// (0x0005ab39) listscroll_app_pane_ParamLimits

0xbf71,	// (0x0005ab39) listscroll_app_pane

0x5009,	// (0x00053bd1) listscroll_form_pane

0x1287,	// (0x0004fe4f) listscroll_gen_pane_ParamLimits

0x1287,	// (0x0004fe4f) listscroll_gen_pane

0x129b,	// (0x0004fe63) listscroll_set_pane

0x6910,	// (0x000554d8) main_idle_act_pane

0x4ce9,	// (0x000538b1) main_idle_trad_pane

0x4ce9,	// (0x000538b1) main_list_empty_pane

0x5023,	// (0x00053beb) main_midp_pane

0x502f,	// (0x00053bf7) main_pane_g1_ParamLimits

0x502f,	// (0x00053bf7) main_pane_g1

0xbf81,	// (0x0005ab49) popup_ai_message_window_ParamLimits

0xbf81,	// (0x0005ab49) popup_ai_message_window

0xc012,	// (0x0005abda) popup_fep_china_uni_window_ParamLimits

0xc012,	// (0x0005abda) popup_fep_china_uni_window

0x13b7,	// (0x0004ff7f) popup_fep_japan_candidate_window_ParamLimits

0x13b7,	// (0x0004ff7f) popup_fep_japan_candidate_window

0x13d5,	// (0x0004ff9d) popup_fep_japan_predictive_window_ParamLimits

0x13d5,	// (0x0004ff9d) popup_fep_japan_predictive_window

0xc06c,	// (0x0005ac34) popup_find_window

0xc089,	// (0x0005ac51) popup_grid_graphic_window_ParamLimits

0xc089,	// (0x0005ac51) popup_grid_graphic_window

0x143a,	// (0x00050002) popup_large_graphic_colour_window

0xc121,	// (0x0005ace9) popup_menu_window_ParamLimits

0xc121,	// (0x0005ace9) popup_menu_window

0xc2ed,	// (0x0005aeb5) popup_note_image_window

0xc2b3,	// (0x0005ae7b) popup_note_wait_window_ParamLimits

0xc2b3,	// (0x0005ae7b) popup_note_wait_window

0xc305,	// (0x0005aecd) popup_note_window_ParamLimits

0xc305,	// (0x0005aecd) popup_note_window

0xc3ab,	// (0x0005af73) popup_query_code_window_ParamLimits

0xc3ab,	// (0x0005af73) popup_query_code_window

0x1684,	// (0x0005024c) popup_query_data_code_window_ParamLimits

0x1684,	// (0x0005024c) popup_query_data_code_window

0xc3e5,	// (0x0005afad) popup_query_data_window_ParamLimits

0xc3e5,	// (0x0005afad) popup_query_data_window

0xc461,	// (0x0005b029) popup_query_sat_info_window_ParamLimits

0xc461,	// (0x0005b029) popup_query_sat_info_window

0xc4f8,	// (0x0005b0c0) popup_snote_single_graphic_window_ParamLimits

0xc4f8,	// (0x0005b0c0) popup_snote_single_graphic_window

0xc4f8,	// (0x0005b0c0) popup_snote_single_text_window_ParamLimits

0xc4f8,	// (0x0005b0c0) popup_snote_single_text_window

0x1707,	// (0x000502cf) popup_sub_window_general

0x1835,	// (0x000503fd) popup_window_general_ParamLimits

0x1835,	// (0x000503fd) popup_window_general

0x503d,	// (0x00053c05) power_save_pane

0xbe00,	// (0x0005a9c8) control_pane_g1_ParamLimits

0xbe00,	// (0x0005a9c8) control_pane_g1

0xbe29,	// (0x0005a9f1) control_pane_g2_ParamLimits

0xbe29,	// (0x0005a9f1) control_pane_g2

0x4fa0,	// (0x00053b68) control_pane_g3_ParamLimits

0x4fa0,	// (0x00053b68) control_pane_g3

0x0007,

0xf788,	// (0x0005e350) control_pane_g_ParamLimits

0xf788,	// (0x0005e350) control_pane_g

0xbe6a,	// (0x0005aa32) control_pane_t1_ParamLimits

0xbe6a,	// (0x0005aa32) control_pane_t1

0xbec8,	// (0x0005aa90) control_pane_t2_ParamLimits

0xbec8,	// (0x0005aa90) control_pane_t2

0x0002,

0xf799,	// (0x0005e361) control_pane_t_ParamLimits

0xf799,	// (0x0005e361) control_pane_t

0xd598,	// (0x0005c160) navi_navi_volume_pane_cp1

0xd5a0,	// (0x0005c168) status_small_icon_pane

0x4ed5,	// (0x00053a9d) status_small_pane_g1_ParamLimits

0x4ed5,	// (0x00053a9d) status_small_pane_g1

0xd5a8,	// (0x0005c170) status_small_pane_g2_ParamLimits

0xd5a8,	// (0x0005c170) status_small_pane_g2

0xd5b4,	// (0x0005c17c) status_small_pane_g3_ParamLimits

0xd5b4,	// (0x0005c17c) status_small_pane_g3

0xd5c0,	// (0x0005c188) status_small_pane_g4_ParamLimits

0xd5c0,	// (0x0005c188) status_small_pane_g4

0xd5cc,	// (0x0005c194) status_small_pane_g5_ParamLimits

0xd5cc,	// (0x0005c194) status_small_pane_g5

0xd5da,	// (0x0005c1a2) status_small_pane_g6_ParamLimits

0xd5da,	// (0x0005c1a2) status_small_pane_g6

0x0007,

0xf777,	// (0x0005e33f) status_small_pane_g_ParamLimits

0xf777,	// (0x0005e33f) status_small_pane_g

0xd609,	// (0x0005c1d1) status_small_pane_t1

0xd62b,	// (0x0005c1f3) status_small_wait_pane_ParamLimits

0xd62b,	// (0x0005c1f3) status_small_wait_pane

0xd403,	// (0x0005bfcb) aid_levels_signal_ParamLimits

0xd403,	// (0x0005bfcb) aid_levels_signal

0xd41b,	// (0x0005bfe3) signal_pane_g1_ParamLimits

0xd41b,	// (0x0005bfe3) signal_pane_g1

0xd436,	// (0x0005bffe) signal_pane_g2_ParamLimits

0xd436,	// (0x0005bffe) signal_pane_g2

0x0003,

0xf708,	// (0x0005e2d0) signal_pane_g_ParamLimits

0xf708,	// (0x0005e2d0) signal_pane_g

0x47a8,	// (0x00053370) context_pane_g1

0xcf57,	// (0x0005bb1f) title_pane_g1

0xcf8e,	// (0x0005bb56) title_pane_t1

0x37e3,	// (0x000523ab) title_pane_t2

0x3809,	// (0x000523d1) title_pane_t3

0x0002,

0xf557,	// (0x0005e11f) title_pane_t

0xdac3,	// (0x0005c68b) aid_levels_battery_ParamLimits

0xdac3,	// (0x0005c68b) aid_levels_battery

0xdadf,	// (0x0005c6a7) battery_pane_g1_ParamLimits

0xdadf,	// (0x0005c6a7) battery_pane_g1

0xdafc,	// (0x0005c6c4) battery_pane_g2_ParamLimits

0xdafc,	// (0x0005c6c4) battery_pane_g2

0x0001,

0xf7ab,	// (0x0005e373) battery_pane_g_ParamLimits

0xf7ab,	// (0x0005e373) battery_pane_g

0xdce1,	// (0x0005c8a9) uni_indicator_pane_g1

0xdcf7,	// (0x0005c8bf) uni_indicator_pane_g2

0xdd0d,	// (0x0005c8d5) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0005e4e4) uni_indicator_pane_g

0x4b5b,	// (0x00053723) navi_icon_pane_ParamLimits

0x4b5b,	// (0x00053723) navi_icon_pane

0x4a99,	// (0x00053661) navi_midp_pane

0x4b77,	// (0x0005373f) navi_navi_pane

0x4b81,	// (0x00053749) navi_text_pane_ParamLimits

0x4b81,	// (0x00053749) navi_text_pane

0x3731,	// (0x000522f9) status_small_wait_pane_g1

0x3c2c,	// (0x000527f4) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0005e4df) status_small_wait_pane_g

0x63ef,	// (0x00054fb7) navi_navi_icon_text_pane

0x63f7,	// (0x00054fbf) navi_navi_pane_g1_ParamLimits

0x63f7,	// (0x00054fbf) navi_navi_pane_g1

0x6409,	// (0x00054fd1) navi_navi_pane_g2_ParamLimits

0x6409,	// (0x00054fd1) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0005e4ad) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0005e4ad) navi_navi_pane_g

0x641b,	// (0x00054fe3) navi_navi_tabs_pane

0x6424,	// (0x00054fec) navi_navi_text_pane

0x63ef,	// (0x00054fb7) navi_navi_volume_pane

0x63cb,	// (0x00054f93) navi_text_pane_t1

0x63bf,	// (0x00054f87) navi_icon_pane_g1

0x6312,	// (0x00054eda) navi_navi_text_pane_t1

0x1b5b,	// (0x00050723) navi_navi_volume_pane_g1

0xc788,	// (0x0005b350) volume_small_pane

0xdc1e,	// (0x0005c7e6) navi_navi_icon_text_pane_g1

0x6280,	// (0x00054e48) navi_navi_icon_text_pane_t1

0x4b77,	// (0x0005373f) navi_tabs_2_long_pane

0x4b77,	// (0x0005373f) navi_tabs_2_pane

0x4b77,	// (0x0005373f) navi_tabs_3_long_pane

0x4b77,	// (0x0005373f) navi_tabs_3_pane

0x4b77,	// (0x0005373f) navi_tabs_4_pane

0xc768,	// (0x0005b330) tabs_2_active_pane_ParamLimits

0xc768,	// (0x0005b330) tabs_2_active_pane

0xc778,	// (0x0005b340) tabs_2_passive_pane_ParamLimits

0xc778,	// (0x0005b340) tabs_2_passive_pane

0xc736,	// (0x0005b2fe) tabs_3_active_pane_ParamLimits

0xc736,	// (0x0005b2fe) tabs_3_active_pane

0xc746,	// (0x0005b30e) tabs_3_passive_pane_ParamLimits

0xc746,	// (0x0005b30e) tabs_3_passive_pane

0xc757,	// (0x0005b31f) tabs_3_passive_pane_cp_ParamLimits

0xc757,	// (0x0005b31f) tabs_3_passive_pane_cp

0xc703,	// (0x0005b2cb) tabs_4_active_pane_ParamLimits

0xc703,	// (0x0005b2cb) tabs_4_active_pane

0xc714,	// (0x0005b2dc) tabs_4_passive_pane_ParamLimits

0xc714,	// (0x0005b2dc) tabs_4_passive_pane

0x1ae7,	// (0x000506af) tabs_4_passive_pane_cp_ParamLimits

0x1ae7,	// (0x000506af) tabs_4_passive_pane_cp

0xc725,	// (0x0005b2ed) tabs_4_passive_pane_cp2_ParamLimits

0xc725,	// (0x0005b2ed) tabs_4_passive_pane_cp2

0xc6df,	// (0x0005b2a7) tabs_2_long_active_pane_ParamLimits

0xc6df,	// (0x0005b2a7) tabs_2_long_active_pane

0xc6f1,	// (0x0005b2b9) tabs_2_long_passive_pane_ParamLimits

0xc6f1,	// (0x0005b2b9) tabs_2_long_passive_pane

0xc6a0,	// (0x0005b268) tabs_3_long_active_pane_ParamLimits

0xc6a0,	// (0x0005b268) tabs_3_long_active_pane

0xc6b3,	// (0x0005b27b) tabs_3_long_passive_pane_ParamLimits

0xc6b3,	// (0x0005b27b) tabs_3_long_passive_pane

0xc6cc,	// (0x0005b294) tabs_3_long_passive_pane_cp_ParamLimits

0xc6cc,	// (0x0005b294) tabs_3_long_passive_pane_cp

0x1a0e,	// (0x000505d6) volume_small_pane_g1

0x1a17,	// (0x000505df) volume_small_pane_g2

0x1a20,	// (0x000505e8) volume_small_pane_g3

0x1a29,	// (0x000505f1) volume_small_pane_g4

0x1a32,	// (0x000505fa) volume_small_pane_g5

0x1a3b,	// (0x00050603) volume_small_pane_g6

0x1a44,	// (0x0005060c) volume_small_pane_g7

0x1a4d,	// (0x00050615) volume_small_pane_g8

0x1a56,	// (0x0005061e) volume_small_pane_g9

0x1a5f,	// (0x00050627) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0005e479) volume_small_pane_g

0x3a96,	// (0x0005265e) bg_active_tab_pane_cp2_ParamLimits

0x3a96,	// (0x0005265e) bg_active_tab_pane_cp2

0x3829,	// (0x000523f1) tabs_3_active_pane_g1

0xd01a,	// (0x0005bbe2) tabs_3_active_pane_t1

0x3a96,	// (0x0005265e) bg_passive_tab_pane_cp2_ParamLimits

0x3a96,	// (0x0005265e) bg_passive_tab_pane_cp2

0x3829,	// (0x000523f1) tabs_3_passive_pane_g1

0xd01a,	// (0x0005bbe2) tabs_3_passive_pane_t1

0x3a96,	// (0x0005265e) bg_active_tab_pane_cp3_ParamLimits

0x3a96,	// (0x0005265e) bg_active_tab_pane_cp3

0x3843,	// (0x0005240b) tabs_4_active_pane_g1

0xd02c,	// (0x0005bbf4) tabs_4_active_pane_t1

0x3a96,	// (0x0005265e) bg_passive_tab_pane_cp3_ParamLimits

0x3a96,	// (0x0005265e) bg_passive_tab_pane_cp3

0x3843,	// (0x0005240b) tabs_4_1_passive_pane_g1

0xd02c,	// (0x0005bbf4) tabs_4_1_passive_pane_t1

0x5023,	// (0x00053beb) list_highlight_pane_cp2

0xdd96,	// (0x0005c95e) list_set_pane_ParamLimits

0xdd96,	// (0x0005c95e) list_set_pane

0xde30,	// (0x0005c9f8) main_pane_set_t1_ParamLimits

0xde30,	// (0x0005c9f8) main_pane_set_t1

0xde50,	// (0x0005ca18) main_pane_set_t2_ParamLimits

0xde50,	// (0x0005ca18) main_pane_set_t2

0xde64,	// (0x0005ca2c) main_pane_set_t3_ParamLimits

0xde64,	// (0x0005ca2c) main_pane_set_t3

0xde76,	// (0x0005ca3e) main_pane_set_t4_ParamLimits

0xde76,	// (0x0005ca3e) main_pane_set_t4

0x0003,

0xf981,	// (0x0005e549) main_pane_set_t_ParamLimits

0xf981,	// (0x0005e549) main_pane_set_t

0xde88,	// (0x0005ca50) setting_code_pane

0xde90,	// (0x0005ca58) setting_slider_graphic_pane

0xde90,	// (0x0005ca58) setting_slider_pane

0xde90,	// (0x0005ca58) setting_text_pane

0xde90,	// (0x0005ca58) setting_volume_pane

0x04cf,	// (0x0004f097) volume_set_pane

0x381b,	// (0x000523e3) bg_set_opt_pane_cp

0x04d7,	// (0x0004f09f) setting_slider_pane_t1

0x04f0,	// (0x0004f0b8) setting_slider_pane_t2

0x050a,	// (0x0004f0d2) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0005e126) setting_slider_pane_t

0x0522,	// (0x0004f0ea) slider_set_pane

0x373b,	// (0x00052303) bg_set_opt_pane_cp2

0x385d,	// (0x00052425) setting_slider_graphic_pane_g1

0x0538,	// (0x0004f100) setting_slider_graphic_pane_t1

0x0548,	// (0x0004f110) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0005e12d) setting_slider_graphic_pane_t

0x0558,	// (0x0004f120) slider_set_pane_cp

0x373b,	// (0x00052303) input_focus_pane_cp1

0x68f7,	// (0x000554bf) list_set_text_pane

0x3731,	// (0x000522f9) setting_text_pane_g1

0x373b,	// (0x00052303) input_focus_pane_cp2

0x3731,	// (0x000522f9) setting_code_pane_g1

0x3866,	// (0x0005242e) setting_code_pane_t1

0x0560,	// (0x0004f128) set_text_pane_t1_ParamLimits

0x0560,	// (0x0004f128) set_text_pane_t1

0x40d0,	// (0x00052c98) set_opt_bg_pane_g1

0x40d8,	// (0x00052ca0) set_opt_bg_pane_g2

0x68d7,	// (0x0005549f) set_opt_bg_pane_g3

0x40e8,	// (0x00052cb0) set_opt_bg_pane_g4

0x40f0,	// (0x00052cb8) set_opt_bg_pane_g5

0x40f8,	// (0x00052cc0) set_opt_bg_pane_g6

0x68df,	// (0x000554a7) set_opt_bg_pane_g7

0x68e7,	// (0x000554af) set_opt_bg_pane_g8

0x68ef,	// (0x000554b7) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0005e536) set_opt_bg_pane_g

0x68ca,	// (0x00055492) slider_set_pane_g1

0x1bd0,	// (0x00050798) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0005e527) slider_set_pane_g

0x1b6c,	// (0x00050734) volume_set_pane_g1

0x1b74,	// (0x0005073c) volume_set_pane_g2

0x1b7c,	// (0x00050744) volume_set_pane_g3

0x1b84,	// (0x0005074c) volume_set_pane_g4

0x1b8c,	// (0x00050754) volume_set_pane_g5

0x1b94,	// (0x0005075c) volume_set_pane_g6

0x1b9c,	// (0x00050764) volume_set_pane_g7

0x1ba4,	// (0x0005076c) volume_set_pane_g8

0x1bac,	// (0x00050774) volume_set_pane_g9

0x1bb4,	// (0x0005077c) volume_set_pane_g10

0x0009,

0xf937,	// (0x0005e4ff) volume_set_pane_g

0xd03e,	// (0x0005bc06) indicator_pane_ParamLimits

0xd03e,	// (0x0005bc06) indicator_pane

0xd066,	// (0x0005bc2e) main_idle_pane_g2_ParamLimits

0xd066,	// (0x0005bc2e) main_idle_pane_g2

0xd09e,	// (0x0005bc66) main_pane_idle_g1_ParamLimits

0xd09e,	// (0x0005bc66) main_pane_idle_g1

0x38b5,	// (0x0005247d) popup_clock_digital_analogue_window_ParamLimits

0x38b5,	// (0x0005247d) popup_clock_digital_analogue_window

0xd0c5,	// (0x0005bc8d) soft_indicator_pane_ParamLimits

0xd0c5,	// (0x0005bc8d) soft_indicator_pane

0xd0df,	// (0x0005bca7) wallpaper_pane_ParamLimits

0xd0df,	// (0x0005bca7) wallpaper_pane

0x3731,	// (0x000522f9) wallpaper_pane_g1

0xd0f1,	// (0x0005bcb9) indicator_pane_g1_ParamLimits

0xd0f1,	// (0x0005bcb9) indicator_pane_g1

0x6c93,	// (0x0005585b) navi_navi_icon_text_pane_srt_g1

0x3907,	// (0x000524cf) soft_indicator_pane_t1

0x3921,	// (0x000524e9) aid_ps_area_pane

0xd107,	// (0x0005bccf) aid_ps_clock_pane

0x3940,	// (0x00052508) aid_ps_indicator_pane

0x394c,	// (0x00052514) indicator_ps_pane_ParamLimits

0x394c,	// (0x00052514) indicator_ps_pane

0x395b,	// (0x00052523) power_save_pane_g1_ParamLimits

0x395b,	// (0x00052523) power_save_pane_g1

0x3967,	// (0x0005252f) power_save_pane_g2_ParamLimits

0x3967,	// (0x0005252f) power_save_pane_g2

0x00e4,	// (0x0004ecac) aid_navinavi_width_pane

0x3921,	// (0x000524e9) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0005e132) power_save_pane_g_ParamLimits

0xf56a,	// (0x0005e132) power_save_pane_g

0x3975,	// (0x0005253d) power_save_pane_t1_ParamLimits

0x3975,	// (0x0005253d) power_save_pane_t1

0xd107,	// (0x0005bccf) aid_ps_clock_pane_ParamLimits

0x3940,	// (0x00052508) aid_ps_indicator_pane_ParamLimits

0x3987,	// (0x0005254f) power_save_pane_t4_ParamLimits

0x3987,	// (0x0005254f) power_save_pane_t4

0x0001,

0xf56f,	// (0x0005e137) power_save_pane_t_ParamLimits

0xf56f,	// (0x0005e137) power_save_pane_t

0x39b1,	// (0x00052579) power_save_t3_ParamLimits

0x39b1,	// (0x00052579) power_save_t3

0x399c,	// (0x00052564) power_save_t2_ParamLimits

0x399c,	// (0x00052564) power_save_t2

0x39c6,	// (0x0005258e) indicator_ps_pane_g1

0xd115,	// (0x0005bcdd) ai_gene_pane_ParamLimits

0xd115,	// (0x0005bcdd) ai_gene_pane

0xd12c,	// (0x0005bcf4) ai_links_pane_ParamLimits

0xd12c,	// (0x0005bcf4) ai_links_pane

0xd144,	// (0x0005bd0c) indicator_pane_cp1_ParamLimits

0xd144,	// (0x0005bd0c) indicator_pane_cp1

0xd153,	// (0x0005bd1b) main_pane_idle_g1_cp_ParamLimits

0xd153,	// (0x0005bd1b) main_pane_idle_g1_cp

0x39ff,	// (0x000525c7) popup_ai_links_title_window

0xd16b,	// (0x0005bd33) soft_indicator_pane_cp1_ParamLimits

0xd16b,	// (0x0005bd33) soft_indicator_pane_cp1

0x66b6,	// (0x0005527e) ai_links_pane_g1

0x66bf,	// (0x00055287) grid_ai_links_pane

0xdcd8,	// (0x0005c8a0) ai_gene_pane_1

0x66a4,	// (0x0005526c) ai_gene_pane_2

0x66ad,	// (0x00055275) list_highlight_pane_cp4

0xdcb4,	// (0x0005c87c) cell_ai_link_pane_ParamLimits

0xdcb4,	// (0x0005c87c) cell_ai_link_pane

0x6675,	// (0x0005523d) cell_ai_link_pane_g1

0x3c2c,	// (0x000527f4) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0005e4da) cell_ai_link_pane_g

0x373b,	// (0x00052303) grid_highlight_cp2

0x373b,	// (0x00052303) bg_popup_sub_pane_cp1

0x3a22,	// (0x000525ea) popup_ai_links_title_window_t1

0x65c5,	// (0x0005518d) ai_gene_pane_1_g1_ParamLimits

0x65c5,	// (0x0005518d) ai_gene_pane_1_g1

0x65d1,	// (0x00055199) ai_gene_pane_1_g2_ParamLimits

0x65d1,	// (0x00055199) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0005e4d0) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0005e4d0) ai_gene_pane_1_g

0x65de,	// (0x000551a6) ai_gene_pane_1_t1_ParamLimits

0x65de,	// (0x000551a6) ai_gene_pane_1_t1

0x6612,	// (0x000551da) grid_ai_soft_ind_pane

0x65b0,	// (0x00055178) ai_gene_pane_2_t1_ParamLimits

0x65b0,	// (0x00055178) ai_gene_pane_2_t1

0xd17f,	// (0x0005bd47) main_pane_empty_t1_ParamLimits

0xd17f,	// (0x0005bd47) main_pane_empty_t1

0xd197,	// (0x0005bd5f) main_pane_empty_t2_ParamLimits

0xd197,	// (0x0005bd5f) main_pane_empty_t2

0xd1ac,	// (0x0005bd74) main_pane_empty_t3_ParamLimits

0xd1ac,	// (0x0005bd74) main_pane_empty_t3

0xd1be,	// (0x0005bd86) main_pane_empty_t4_ParamLimits

0xd1be,	// (0x0005bd86) main_pane_empty_t4

0xd1d0,	// (0x0005bd98) main_pane_empty_t5_ParamLimits

0xd1d0,	// (0x0005bd98) main_pane_empty_t5

0x0004,

0xf574,	// (0x0005e13c) main_pane_empty_t_ParamLimits

0xf574,	// (0x0005e13c) main_pane_empty_t

0x4121,	// (0x00052ce9) bg_popup_window_pane_ParamLimits

0x4121,	// (0x00052ce9) bg_popup_window_pane

0x6320,	// (0x00054ee8) find_popup_pane_cp2_ParamLimits

0x6320,	// (0x00054ee8) find_popup_pane_cp2

0x632c,	// (0x00054ef4) heading_pane_ParamLimits

0x632c,	// (0x00054ef4) heading_pane

0x373b,	// (0x00052303) bg_popup_sub_pane

0xdc35,	// (0x0005c7fd) bg_popup_window_pane_g1_ParamLimits

0xdc35,	// (0x0005c7fd) bg_popup_window_pane_g1

0xdc44,	// (0x0005c80c) bg_popup_window_pane_g2_ParamLimits

0xdc44,	// (0x0005c80c) bg_popup_window_pane_g2

0xdc50,	// (0x0005c818) bg_popup_window_pane_g3_ParamLimits

0xdc50,	// (0x0005c818) bg_popup_window_pane_g3

0xdc5c,	// (0x0005c824) bg_popup_window_pane_g4_ParamLimits

0xdc5c,	// (0x0005c824) bg_popup_window_pane_g4

0xdc6b,	// (0x0005c833) bg_popup_window_pane_g5_ParamLimits

0xdc6b,	// (0x0005c833) bg_popup_window_pane_g5

0xdc7b,	// (0x0005c843) bg_popup_window_pane_g6_ParamLimits

0xdc7b,	// (0x0005c843) bg_popup_window_pane_g6

0xdc87,	// (0x0005c84f) bg_popup_window_pane_g7_ParamLimits

0xdc87,	// (0x0005c84f) bg_popup_window_pane_g7

0xdc96,	// (0x0005c85e) bg_popup_window_pane_g8_ParamLimits

0xdc96,	// (0x0005c85e) bg_popup_window_pane_g8

0xdca5,	// (0x0005c86d) bg_popup_window_pane_g9_ParamLimits

0xdca5,	// (0x0005c86d) bg_popup_window_pane_g9

0x6306,	// (0x00054ece) bg_popup_window_pane_g10_ParamLimits

0x6306,	// (0x00054ece) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0005e498) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0005e498) bg_popup_window_pane_g

0x622f,	// (0x00054df7) bg_popup_heading_pane_ParamLimits

0x622f,	// (0x00054df7) bg_popup_heading_pane

0x1c58,	// (0x00050820) tabs_4_passive_pane_cp_srt_ParamLimits

0x1c58,	// (0x00050820) tabs_4_passive_pane_cp_srt

0x1c6a,	// (0x00050832) tabs_4_passive_pane_srt_ParamLimits

0x6243,	// (0x00054e0b) heading_pane_g2

0x1c6a,	// (0x00050832) tabs_4_passive_pane_srt

0x5595,	// (0x0005415d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5595,	// (0x0005415d) bg_passive_tab_pane_cp3_srt

0x624b,	// (0x00054e13) heading_pane_t1_ParamLimits

0x624b,	// (0x00054e13) heading_pane_t1

0x6262,	// (0x00054e2a) heading_pane_t2_ParamLimits

0x6262,	// (0x00054e2a) heading_pane_t2

0x0001,

0xf8cb,	// (0x0005e493) heading_pane_t_ParamLimits

0xf8cb,	// (0x0005e493) heading_pane_t

0x5d5c,	// (0x00054924) bg_popup_heading_pane_g1

0x5e0b,	// (0x000549d3) bg_popup_heading_pane_g2

0x5e15,	// (0x000549dd) bg_popup_heading_pane_g3

0x5e1f,	// (0x000549e7) bg_popup_heading_pane_g4

0x5e29,	// (0x000549f1) bg_popup_heading_pane_g5

0x5e33,	// (0x000549fb) bg_popup_heading_pane_g6

0x5e3b,	// (0x00054a03) bg_popup_heading_pane_g7

0x5e43,	// (0x00054a0b) bg_popup_heading_pane_g8

0x5e4d,	// (0x00054a15) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0005e44f) bg_popup_heading_pane_g

0x5521,	// (0x000540e9) bg_popup_sub_pane_g1

0x5531,	// (0x000540f9) bg_popup_sub_pane_g2

0x5529,	// (0x000540f1) bg_popup_sub_pane_g3

0x5541,	// (0x00054109) bg_popup_sub_pane_g4

0x5539,	// (0x00054101) bg_popup_sub_pane_g5

0x5549,	// (0x00054111) bg_popup_sub_pane_g6

0x5551,	// (0x00054119) bg_popup_sub_pane_g7

0x5561,	// (0x00054129) bg_popup_sub_pane_g8

0x5559,	// (0x00054121) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0005e429) bg_popup_sub_pane_g

0x3a96,	// (0x0005265e) bg_popup_window_pane_cp5_ParamLimits

0x3a96,	// (0x0005265e) bg_popup_window_pane_cp5

0x3ab2,	// (0x0005267a) popup_note_window_g1_ParamLimits

0x3ab2,	// (0x0005267a) popup_note_window_g1

0x3abe,	// (0x00052686) popup_note_window_t1_ParamLimits

0x3abe,	// (0x00052686) popup_note_window_t1

0x3ad0,	// (0x00052698) popup_note_window_t2_ParamLimits

0x3ad0,	// (0x00052698) popup_note_window_t2

0x3ae2,	// (0x000526aa) popup_note_window_t3_ParamLimits

0x3ae2,	// (0x000526aa) popup_note_window_t3

0x3af4,	// (0x000526bc) popup_note_window_t4_ParamLimits

0x3af4,	// (0x000526bc) popup_note_window_t4

0x3b1c,	// (0x000526e4) popup_note_window_t5_ParamLimits

0x3b1c,	// (0x000526e4) popup_note_window_t5

0x0004,

0xf57f,	// (0x0005e147) popup_note_window_t_ParamLimits

0xf57f,	// (0x0005e147) popup_note_window_t

0x3b40,	// (0x00052708) bg_popup_window_pane_cp6_ParamLimits

0x3b40,	// (0x00052708) bg_popup_window_pane_cp6

0x5cd0,	// (0x00054898) popup_note_image_window_g1_ParamLimits

0x5cd0,	// (0x00054898) popup_note_image_window_g1

0x5cdc,	// (0x000548a4) popup_note_image_window_g2_ParamLimits

0x5cdc,	// (0x000548a4) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0005e41d) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0005e41d) popup_note_image_window_g

0x5cf5,	// (0x000548bd) popup_note_image_window_t1_ParamLimits

0x5cf5,	// (0x000548bd) popup_note_image_window_t1

0x5d0e,	// (0x000548d6) popup_note_image_window_t2_ParamLimits

0x5d0e,	// (0x000548d6) popup_note_image_window_t2

0x5d27,	// (0x000548ef) popup_note_image_window_t3_ParamLimits

0x5d27,	// (0x000548ef) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0005e422) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0005e422) popup_note_image_window_t

0x5b91,	// (0x00054759) bg_popup_window_pane_cp7_ParamLimits

0x5b91,	// (0x00054759) bg_popup_window_pane_cp7

0x5bc1,	// (0x00054789) popup_note_wait_window_g1_ParamLimits

0x5bc1,	// (0x00054789) popup_note_wait_window_g1

0x5bcd,	// (0x00054795) popup_note_wait_window_g2_ParamLimits

0x5bcd,	// (0x00054795) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0005e40b) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0005e40b) popup_note_wait_window_g

0x5be5,	// (0x000547ad) popup_note_wait_window_t1_ParamLimits

0x5be5,	// (0x000547ad) popup_note_wait_window_t1

0x5c0c,	// (0x000547d4) popup_note_wait_window_t2_ParamLimits

0x5c0c,	// (0x000547d4) popup_note_wait_window_t2

0x5c29,	// (0x000547f1) popup_note_wait_window_t3_ParamLimits

0x5c29,	// (0x000547f1) popup_note_wait_window_t3

0x5c3c,	// (0x00054804) popup_note_wait_window_t4_ParamLimits

0x5c3c,	// (0x00054804) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0005e412) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0005e412) popup_note_wait_window_t

0x5c61,	// (0x00054829) wait_bar_pane_ParamLimits

0x5c61,	// (0x00054829) wait_bar_pane

0x373b,	// (0x00052303) wait_anim_pane

0x373b,	// (0x00052303) wait_border_pane

0x3731,	// (0x000522f9) wait_anim_pane_g1

0x3731,	// (0x000522f9) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0005e2cb) wait_anim_pane_g

0x5b29,	// (0x000546f1) wait_border_pane_g1

0x5b40,	// (0x00054708) wait_border_pane_g2

0x5b49,	// (0x00054711) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0005e404) wait_border_pane_g

0x5999,	// (0x00054561) bg_popup_window_pane_cp16_ParamLimits

0x5999,	// (0x00054561) bg_popup_window_pane_cp16

0x5a99,	// (0x00054661) indicator_popup_pane_cp4_ParamLimits

0x5a99,	// (0x00054661) indicator_popup_pane_cp4

0x5aad,	// (0x00054675) popup_query_data_window_t1_ParamLimits

0x5aad,	// (0x00054675) popup_query_data_window_t1

0x5abf,	// (0x00054687) popup_query_data_window_t2_ParamLimits

0x5abf,	// (0x00054687) popup_query_data_window_t2

0x5ad8,	// (0x000546a0) popup_query_data_window_t3_ParamLimits

0x5ad8,	// (0x000546a0) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0005e3fd) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0005e3fd) popup_query_data_window_t

0x5af2,	// (0x000546ba) query_popup_data_pane_ParamLimits

0x5af2,	// (0x000546ba) query_popup_data_pane

0x5b06,	// (0x000546ce) query_popup_data_pane_cp1_ParamLimits

0x5b06,	// (0x000546ce) query_popup_data_pane_cp1

0x5999,	// (0x00054561) bg_popup_window_pane_cp10_ParamLimits

0x5999,	// (0x00054561) bg_popup_window_pane_cp10

0x59cb,	// (0x00054593) indicator_popup_pane_ParamLimits

0x59cb,	// (0x00054593) indicator_popup_pane

0x59ed,	// (0x000545b5) popup_query_code_window_t1_ParamLimits

0x59ed,	// (0x000545b5) popup_query_code_window_t1

0x5a07,	// (0x000545cf) popup_query_code_window_t2_ParamLimits

0x5a07,	// (0x000545cf) popup_query_code_window_t2

0x5a50,	// (0x00054618) popup_query_code_window_t3_ParamLimits

0x5a50,	// (0x00054618) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0005e3f6) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0005e3f6) popup_query_code_window_t

0x5a7f,	// (0x00054647) query_popup_pane_ParamLimits

0x5a7f,	// (0x00054647) query_popup_pane

0x3b40,	// (0x00052708) bg_popup_window_pane_cp15_ParamLimits

0x3b40,	// (0x00052708) bg_popup_window_pane_cp15

0x3b5e,	// (0x00052726) indicator_popup_pane_cp1_ParamLimits

0x3b5e,	// (0x00052726) indicator_popup_pane_cp1

0x3b71,	// (0x00052739) indicator_popup_pane_cp2_ParamLimits

0x3b71,	// (0x00052739) indicator_popup_pane_cp2

0x3b84,	// (0x0005274c) popup_query_data_code_window_g1_ParamLimits

0x3b84,	// (0x0005274c) popup_query_data_code_window_g1

0x3b97,	// (0x0005275f) popup_query_data_code_window_t1_ParamLimits

0x3b97,	// (0x0005275f) popup_query_data_code_window_t1

0x3ba9,	// (0x00052771) popup_query_data_code_window_t2_ParamLimits

0x3ba9,	// (0x00052771) popup_query_data_code_window_t2

0x3bbb,	// (0x00052783) popup_query_data_code_window_t3_ParamLimits

0x3bbb,	// (0x00052783) popup_query_data_code_window_t3

0x3bd1,	// (0x00052799) popup_query_data_code_window_t4_ParamLimits

0x3bd1,	// (0x00052799) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0005e152) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0005e152) popup_query_data_code_window_t

0x18c1,	// (0x00050489) list_single_midp_graphic_pane_g3

0x3be9,	// (0x000527b1) query_popup_data_pane_cp2_ParamLimits

0x3bfc,	// (0x000527c4) query_popup_pane_cp2_ParamLimits

0x3bfc,	// (0x000527c4) query_popup_pane_cp2

0x373b,	// (0x00052303) bg_popup_window_pane_cp11

0x5991,	// (0x00054559) heading_pane_cp5

0x3ce7,	// (0x000528af) listscroll_popup_info_pane

0x373b,	// (0x00052303) input_focus_pane_cp3

0x3c0f,	// (0x000527d7) query_popup_pane_t1

0x3c1d,	// (0x000527e5) list_popup_info_pane_ParamLimits

0x3c1d,	// (0x000527e5) list_popup_info_pane

0x3c2c,	// (0x000527f4) listscroll_popup_info_pane_g1

0x3c34,	// (0x000527fc) scroll_pane_cp7

0x3c3e,	// (0x00052806) popup_info_list_pane_t1_ParamLimits

0x3c3e,	// (0x00052806) popup_info_list_pane_t1

0x3c58,	// (0x00052820) popup_info_list_pane_t2_ParamLimits

0x3c58,	// (0x00052820) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0005e15b) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0005e15b) popup_info_list_pane_t

0x373b,	// (0x00052303) bg_popup_window_pane_cp12

0x6cad,	// (0x00055875) find_popup_pane

0x381b,	// (0x000523e3) bg_popup_window_pane_cp3

0x3c72,	// (0x0005283a) heading_pane_cp3

0x3c7e,	// (0x00052846) listscroll_popup_graphic_pane

0x373b,	// (0x00052303) bg_popup_window_pane_cp4

0xd232,	// (0x0005bdfa) heading_pane_cp4

0x3ce7,	// (0x000528af) listscroll_popup_colour_pane

0x3cef,	// (0x000528b7) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3cef,	// (0x000528b7) cell_large_graphic_colour_none_popup_pane

0xd23a,	// (0x0005be02) grid_large_graphic_colour_popup_pane_ParamLimits

0xd23a,	// (0x0005be02) grid_large_graphic_colour_popup_pane

0x3d2b,	// (0x000528f3) listscroll_popup_colour_pane_g1_ParamLimits

0x3d2b,	// (0x000528f3) listscroll_popup_colour_pane_g1

0x3d42,	// (0x0005290a) listscroll_popup_colour_pane_g2_ParamLimits

0x3d42,	// (0x0005290a) listscroll_popup_colour_pane_g2

0x3d59,	// (0x00052921) listscroll_popup_colour_pane_g3_ParamLimits

0x3d59,	// (0x00052921) listscroll_popup_colour_pane_g3

0xd25e,	// (0x0005be26) listscroll_popup_colour_pane_g4_ParamLimits

0xd25e,	// (0x0005be26) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0005e160) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0005e160) listscroll_popup_colour_pane_g

0x3d78,	// (0x00052940) scroll_pane_cp6_ParamLimits

0x3d78,	// (0x00052940) scroll_pane_cp6

0xd26d,	// (0x0005be35) cell_large_graphic_colour_popup_pane_ParamLimits

0xd26d,	// (0x0005be35) cell_large_graphic_colour_popup_pane

0x3da9,	// (0x00052971) cell_large_graphic_colour_none_popup_pane_t1

0x373b,	// (0x00052303) grid_highlight_pane_cp5

0x3db8,	// (0x00052980) cell_large_graphic_colour_popup_pane_g1

0x3dc0,	// (0x00052988) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0005e169) cell_large_graphic_colour_popup_pane_g

0x3dc8,	// (0x00052990) cell_large_graphic_colour_popup_pane_g2_copy1

0x3dd1,	// (0x00052999) grid_highlight_pane_cp4

0x3dd9,	// (0x000529a1) bg_popup_window_pane_cp8_ParamLimits

0x3dd9,	// (0x000529a1) bg_popup_window_pane_cp8

0x3df4,	// (0x000529bc) popup_snote_single_text_window_g1_ParamLimits

0x3df4,	// (0x000529bc) popup_snote_single_text_window_g1

0x3e06,	// (0x000529ce) popup_snote_single_text_window_t1_ParamLimits

0x3e06,	// (0x000529ce) popup_snote_single_text_window_t1

0x3e19,	// (0x000529e1) popup_snote_single_text_window_t2_ParamLimits

0x3e19,	// (0x000529e1) popup_snote_single_text_window_t2

0x3e2c,	// (0x000529f4) popup_snote_single_text_window_t3_ParamLimits

0x3e2c,	// (0x000529f4) popup_snote_single_text_window_t3

0x3e65,	// (0x00052a2d) popup_snote_single_text_window_t4_ParamLimits

0x3e65,	// (0x00052a2d) popup_snote_single_text_window_t4

0x3e99,	// (0x00052a61) popup_snote_single_text_window_t5_ParamLimits

0x3e99,	// (0x00052a61) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0005e16e) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0005e16e) popup_snote_single_text_window_t

0x3ec8,	// (0x00052a90) bg_popup_window_pane_cp9_ParamLimits

0x3ec8,	// (0x00052a90) bg_popup_window_pane_cp9

0x3df4,	// (0x000529bc) popup_snote_single_graphic_window_g1_ParamLimits

0x3df4,	// (0x000529bc) popup_snote_single_graphic_window_g1

0x3ed6,	// (0x00052a9e) popup_snote_single_graphic_window_g2_ParamLimits

0x3ed6,	// (0x00052a9e) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0005e179) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0005e179) popup_snote_single_graphic_window_g

0x3ee2,	// (0x00052aaa) popup_snote_single_graphic_window_t1_ParamLimits

0x3ee2,	// (0x00052aaa) popup_snote_single_graphic_window_t1

0x3ef5,	// (0x00052abd) popup_snote_single_graphic_window_t2_ParamLimits

0x3ef5,	// (0x00052abd) popup_snote_single_graphic_window_t2

0x3f08,	// (0x00052ad0) popup_snote_single_graphic_window_t3_ParamLimits

0x3f08,	// (0x00052ad0) popup_snote_single_graphic_window_t3

0x3f41,	// (0x00052b09) popup_snote_single_graphic_window_t4_ParamLimits

0x3f41,	// (0x00052b09) popup_snote_single_graphic_window_t4

0x3f75,	// (0x00052b3d) popup_snote_single_graphic_window_t5_ParamLimits

0x3f75,	// (0x00052b3d) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0005e17e) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0005e17e) popup_snote_single_graphic_window_t

0xdf88,	// (0x0005cb50) grid_graphic_popup_pane_ParamLimits

0xdf88,	// (0x0005cb50) grid_graphic_popup_pane

0x6c19,	// (0x000557e1) listscroll_popup_graphic_pane_g1_ParamLimits

0x6c19,	// (0x000557e1) listscroll_popup_graphic_pane_g1

0xdfa7,	// (0x0005cb6f) listscroll_popup_graphic_pane_g2_ParamLimits

0xdfa7,	// (0x0005cb6f) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0005e573) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0005e573) listscroll_popup_graphic_pane_g

0x6c41,	// (0x00055809) scroll_pane_cp5

0xdf43,	// (0x0005cb0b) cell_graphic_popup_pane_ParamLimits

0xdf43,	// (0x0005cb0b) cell_graphic_popup_pane

0x6b71,	// (0x00055739) cell_graphic_popup_pane_g1

0x6b79,	// (0x00055741) cell_graphic_popup_pane_g2

0x3dc8,	// (0x00052990) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0005e56c) cell_graphic_popup_pane_g

0x6b82,	// (0x0005574a) cell_graphic_popup_pane_t2

0x3dd1,	// (0x00052999) grid_highlight_pane_cp3

0x3fb6,	// (0x00052b7e) list_gen_pane_ParamLimits

0x3fb6,	// (0x00052b7e) list_gen_pane

0x3fe8,	// (0x00052bb0) scroll_pane

0xdefe,	// (0x0005cac6) bg_list_pane_g1_ParamLimits

0xdefe,	// (0x0005cac6) bg_list_pane_g1

0x6aee,	// (0x000556b6) bg_list_pane_g2_ParamLimits

0x6aee,	// (0x000556b6) bg_list_pane_g2

0x6b01,	// (0x000556c9) bg_list_pane_g3_ParamLimits

0x6b01,	// (0x000556c9) bg_list_pane_g3

0x6b13,	// (0x000556db) bg_list_pane_g4_ParamLimits

0x6b13,	// (0x000556db) bg_list_pane_g4

0xdf19,	// (0x0005cae1) bg_list_pane_g5_ParamLimits

0xdf19,	// (0x0005cae1) bg_list_pane_g5

0x0004,

0xf999,	// (0x0005e561) bg_list_pane_g_ParamLimits

0xf999,	// (0x0005e561) bg_list_pane_g

0xd82f,	// (0x0005c3f7) list_double2_graphic_large_graphic_pane_ParamLimits

0xd82f,	// (0x0005c3f7) list_double2_graphic_large_graphic_pane

0xd82f,	// (0x0005c3f7) list_double2_graphic_pane_ParamLimits

0xd82f,	// (0x0005c3f7) list_double2_graphic_pane

0xd82f,	// (0x0005c3f7) list_double2_large_graphic_pane_ParamLimits

0xd82f,	// (0x0005c3f7) list_double2_large_graphic_pane

0xd82f,	// (0x0005c3f7) list_double2_pane_ParamLimits

0xd82f,	// (0x0005c3f7) list_double2_pane

0xd82f,	// (0x0005c3f7) list_double_graphic_heading_pane_ParamLimits

0xd82f,	// (0x0005c3f7) list_double_graphic_heading_pane

0xd82f,	// (0x0005c3f7) list_double_graphic_pane_ParamLimits

0xd82f,	// (0x0005c3f7) list_double_graphic_pane

0xd82f,	// (0x0005c3f7) list_double_heading_pane_ParamLimits

0xd82f,	// (0x0005c3f7) list_double_heading_pane

0xd82f,	// (0x0005c3f7) list_double_large_graphic_pane_ParamLimits

0xd82f,	// (0x0005c3f7) list_double_large_graphic_pane

0xd82f,	// (0x0005c3f7) list_double_number_pane_ParamLimits

0xd82f,	// (0x0005c3f7) list_double_number_pane

0xd82f,	// (0x0005c3f7) list_double_pane_ParamLimits

0xd82f,	// (0x0005c3f7) list_double_pane

0xd82f,	// (0x0005c3f7) list_double_time_pane_ParamLimits

0xd82f,	// (0x0005c3f7) list_double_time_pane

0xd82f,	// (0x0005c3f7) list_setting_number_pane_ParamLimits

0xd82f,	// (0x0005c3f7) list_setting_number_pane

0xd82f,	// (0x0005c3f7) list_setting_pane_ParamLimits

0xd82f,	// (0x0005c3f7) list_setting_pane

0xdec3,	// (0x0005ca8b) list_single_2graphic_pane_ParamLimits

0xdec3,	// (0x0005ca8b) list_single_2graphic_pane

0xdec3,	// (0x0005ca8b) list_single_graphic_heading_pane_ParamLimits

0xdec3,	// (0x0005ca8b) list_single_graphic_heading_pane

0xdec3,	// (0x0005ca8b) list_single_graphic_pane_ParamLimits

0xdec3,	// (0x0005ca8b) list_single_graphic_pane

0xdec3,	// (0x0005ca8b) list_single_heading_pane_ParamLimits

0xdec3,	// (0x0005ca8b) list_single_heading_pane

0xdeeb,	// (0x0005cab3) list_single_large_graphic_pane_ParamLimits

0xdeeb,	// (0x0005cab3) list_single_large_graphic_pane

0xdec3,	// (0x0005ca8b) list_single_number_heading_pane_ParamLimits

0xdec3,	// (0x0005ca8b) list_single_number_heading_pane

0xdec3,	// (0x0005ca8b) list_single_number_pane_ParamLimits

0xdec3,	// (0x0005ca8b) list_single_number_pane

0xdec3,	// (0x0005ca8b) list_single_pane_ParamLimits

0xdec3,	// (0x0005ca8b) list_single_pane

0x373b,	// (0x00052303) list_highlight_pane_cp1

0x2da9,	// (0x00051971) list_single_pane_g1_ParamLimits

0x2da9,	// (0x00051971) list_single_pane_g1

0x2db5,	// (0x0005197d) list_single_pane_g2_ParamLimits

0x2db5,	// (0x0005197d) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0005e19a) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0005e19a) list_single_pane_g

0x2f2c,	// (0x00051af4) list_single_pane_t1_ParamLimits

0x2f2c,	// (0x00051af4) list_single_pane_t1

0x2da9,	// (0x00051971) list_single_number_pane_g1_ParamLimits

0x2da9,	// (0x00051971) list_single_number_pane_g1

0x2db5,	// (0x0005197d) list_single_number_pane_g2_ParamLimits

0x2db5,	// (0x0005197d) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0005e19a) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0005e19a) list_single_number_pane_g

0x1886,	// (0x0005044e) list_single_number_pane_t1_ParamLimits

0x1886,	// (0x0005044e) list_single_number_pane_t1

0x2eea,	// (0x00051ab2) list_single_number_pane_t2_ParamLimits

0x2eea,	// (0x00051ab2) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0005e522) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0005e522) list_single_number_pane_t

0x0579,	// (0x0004f141) list_single_graphic_pane_g1_ParamLimits

0x0579,	// (0x0004f141) list_single_graphic_pane_g1

0x2da9,	// (0x00051971) list_single_graphic_pane_g2_ParamLimits

0x2da9,	// (0x00051971) list_single_graphic_pane_g2

0x2db5,	// (0x0005197d) list_single_graphic_pane_g3_ParamLimits

0x2db5,	// (0x0005197d) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0005e189) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0005e189) list_single_graphic_pane_g

0x0585,	// (0x0004f14d) list_single_graphic_pane_t1_ParamLimits

0x0585,	// (0x0004f14d) list_single_graphic_pane_t1

0x059b,	// (0x0004f163) list_single_heading_pane_g1_ParamLimits

0x059b,	// (0x0004f163) list_single_heading_pane_g1

0x2db5,	// (0x0005197d) list_single_heading_pane_g2_ParamLimits

0x2db5,	// (0x0005197d) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0005e190) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0005e190) list_single_heading_pane_g

0x05ae,	// (0x0004f176) list_single_heading_pane_t1_ParamLimits

0x05ae,	// (0x0004f176) list_single_heading_pane_t1

0x2dc1,	// (0x00051989) list_single_heading_pane_t2_ParamLimits

0x2dc1,	// (0x00051989) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0005e195) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0005e195) list_single_heading_pane_t

0x2da9,	// (0x00051971) list_single_number_heading_pane_g1_ParamLimits

0x2da9,	// (0x00051971) list_single_number_heading_pane_g1

0x2db5,	// (0x0005197d) list_single_number_heading_pane_g2_ParamLimits

0x2db5,	// (0x0005197d) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0005e19a) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0005e19a) list_single_number_heading_pane_g

0x05c4,	// (0x0004f18c) list_single_number_heading_pane_t1_ParamLimits

0x05c4,	// (0x0004f18c) list_single_number_heading_pane_t1

0x05da,	// (0x0004f1a2) list_single_number_heading_pane_t2_ParamLimits

0x05da,	// (0x0004f1a2) list_single_number_heading_pane_t2

0x05ec,	// (0x0004f1b4) list_single_number_heading_pane_t3_ParamLimits

0x05ec,	// (0x0004f1b4) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0005e19f) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0005e19f) list_single_number_heading_pane_t

0x05fe,	// (0x0004f1c6) list_single_graphic_heading_pane_g1_ParamLimits

0x05fe,	// (0x0004f1c6) list_single_graphic_heading_pane_g1

0xb8c6,	// (0x0005a48e) list_single_graphic_heading_pane_g4_ParamLimits

0xb8c6,	// (0x0005a48e) list_single_graphic_heading_pane_g4

0x2db5,	// (0x0005197d) list_single_graphic_heading_pane_g5_ParamLimits

0x2db5,	// (0x0005197d) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0005e1a6) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0005e1a6) list_single_graphic_heading_pane_g

0x05c4,	// (0x0004f18c) list_single_graphic_heading_pane_t1_ParamLimits

0x05c4,	// (0x0004f18c) list_single_graphic_heading_pane_t1

0x0625,	// (0x0004f1ed) list_single_graphic_heading_pane_t2_ParamLimits

0x0625,	// (0x0004f1ed) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0005e1ad) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0005e1ad) list_single_graphic_heading_pane_t

0x30e2,	// (0x00051caa) list_single_large_graphic_pane_g1_ParamLimits

0x30e2,	// (0x00051caa) list_single_large_graphic_pane_g1

0x30ee,	// (0x00051cb6) list_single_large_graphic_pane_g2_ParamLimits

0x30ee,	// (0x00051cb6) list_single_large_graphic_pane_g2

0x30fa,	// (0x00051cc2) list_single_large_graphic_pane_g3_ParamLimits

0x30fa,	// (0x00051cc2) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0005e1b2) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0005e1b2) list_single_large_graphic_pane_g

0x5b40,	// (0x00054708) wait_border_pane_g2_copy1

0x2df7,	// (0x000519bf) list_single_large_graphic_pane_g4_cp2

0x3106,	// (0x00051cce) list_single_large_graphic_pane_t1_ParamLimits

0x3106,	// (0x00051cce) list_single_large_graphic_pane_t1

0xb8d7,	// (0x0005a49f) list_double_pane_g1_ParamLimits

0xb8d7,	// (0x0005a49f) list_double_pane_g1

0xb8e3,	// (0x0005a4ab) list_double_pane_g2_ParamLimits

0xb8e3,	// (0x0005a4ab) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0005e1b9) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0005e1b9) list_double_pane_g

0xb8ef,	// (0x0005a4b7) list_double_pane_t1_ParamLimits

0xb8ef,	// (0x0005a4b7) list_double_pane_t1

0xb905,	// (0x0005a4cd) list_double_pane_t2_ParamLimits

0xb905,	// (0x0005a4cd) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0005e1be) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0005e1be) list_double_pane_t

0xb917,	// (0x0005a4df) list_double2_pane_g1_ParamLimits

0xb917,	// (0x0005a4df) list_double2_pane_g1

0xb928,	// (0x0005a4f0) list_double2_pane_g2_ParamLimits

0xb928,	// (0x0005a4f0) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0005e1c3) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0005e1c3) list_double2_pane_g

0xb934,	// (0x0005a4fc) list_double2_pane_t1_ParamLimits

0xb934,	// (0x0005a4fc) list_double2_pane_t1

0xb94a,	// (0x0005a512) list_double2_pane_t2_ParamLimits

0xb94a,	// (0x0005a512) list_double2_pane_t2

0x0001,

0xf600,	// (0x0005e1c8) list_double2_pane_t_ParamLimits

0xf600,	// (0x0005e1c8) list_double2_pane_t

0xb8d7,	// (0x0005a49f) list_double_number_pane_g1_ParamLimits

0xb8d7,	// (0x0005a49f) list_double_number_pane_g1

0xb8e3,	// (0x0005a4ab) list_double_number_pane_g2_ParamLimits

0xb8e3,	// (0x0005a4ab) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0005e1b9) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0005e1b9) list_double_number_pane_g

0xb95c,	// (0x0005a524) list_double_number_pane_t1_ParamLimits

0xb95c,	// (0x0005a524) list_double_number_pane_t1

0xb96e,	// (0x0005a536) list_double_number_pane_t2_ParamLimits

0xb96e,	// (0x0005a536) list_double_number_pane_t2

0xb984,	// (0x0005a54c) list_double_number_pane_t3_ParamLimits

0xb984,	// (0x0005a54c) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0005e1cd) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0005e1cd) list_double_number_pane_t

0xb996,	// (0x0005a55e) list_double_graphic_pane_g1_ParamLimits

0xb996,	// (0x0005a55e) list_double_graphic_pane_g1

0xb9a2,	// (0x0005a56a) list_double_graphic_pane_g2_ParamLimits

0xb9a2,	// (0x0005a56a) list_double_graphic_pane_g2

0xb9b1,	// (0x0005a579) list_double_graphic_pane_g3_ParamLimits

0xb9b1,	// (0x0005a579) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0005e1d4) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0005e1d4) list_double_graphic_pane_g

0xb9c9,	// (0x0005a591) list_double_graphic_pane_t1_ParamLimits

0xb9c9,	// (0x0005a591) list_double_graphic_pane_t1

0xb9df,	// (0x0005a5a7) list_double_graphic_pane_t2_ParamLimits

0xb9df,	// (0x0005a5a7) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0005e1dd) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0005e1dd) list_double_graphic_pane_t

0xb996,	// (0x0005a55e) list_double2_graphic_pane_g1_ParamLimits

0xb996,	// (0x0005a55e) list_double2_graphic_pane_g1

0xb8d7,	// (0x0005a49f) list_double2_graphic_pane_g2_ParamLimits

0xb8d7,	// (0x0005a49f) list_double2_graphic_pane_g2

0xb8e3,	// (0x0005a4ab) list_double2_graphic_pane_g3_ParamLimits

0xb8e3,	// (0x0005a4ab) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0005e1e2) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0005e1e2) list_double2_graphic_pane_g

0xb96e,	// (0x0005a536) list_double2_graphic_pane_t1_ParamLimits

0xb96e,	// (0x0005a536) list_double2_graphic_pane_t1

0xb9f1,	// (0x0005a5b9) list_double2_graphic_pane_t2_ParamLimits

0xb9f1,	// (0x0005a5b9) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0005e1e9) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0005e1e9) list_double2_graphic_pane_t

0xba03,	// (0x0005a5cb) list_double_large_graphic_pane_g1_ParamLimits

0xba03,	// (0x0005a5cb) list_double_large_graphic_pane_g1

0xba22,	// (0x0005a5ea) list_double_large_graphic_pane_g2_ParamLimits

0xba22,	// (0x0005a5ea) list_double_large_graphic_pane_g2

0xb8e3,	// (0x0005a4ab) list_double_large_graphic_pane_g3_ParamLimits

0xb8e3,	// (0x0005a4ab) list_double_large_graphic_pane_g3

0xba38,	// (0x0005a600) list_double_large_graphic_pane_g4_ParamLimits

0xba38,	// (0x0005a600) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0005e1ee) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0005e1ee) list_double_large_graphic_pane_g

0xba4b,	// (0x0005a613) list_double_large_graphic_pane_t1_ParamLimits

0xba4b,	// (0x0005a613) list_double_large_graphic_pane_t1

0xba64,	// (0x0005a62c) list_double_large_graphic_pane_t2_ParamLimits

0xba64,	// (0x0005a62c) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0005e1f9) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0005e1f9) list_double_large_graphic_pane_t

0xba76,	// (0x0005a63e) list_double2_large_graphic_pane_g1_ParamLimits

0xba76,	// (0x0005a63e) list_double2_large_graphic_pane_g1

0xba82,	// (0x0005a64a) list_double2_large_graphic_pane_g2_ParamLimits

0xba82,	// (0x0005a64a) list_double2_large_graphic_pane_g2

0xb8e3,	// (0x0005a4ab) list_double2_large_graphic_pane_g3_ParamLimits

0xb8e3,	// (0x0005a4ab) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0005e1fe) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0005e1fe) list_double2_large_graphic_pane_g

0xba93,	// (0x0005a65b) list_double2_large_graphic_pane_t1_ParamLimits

0xba93,	// (0x0005a65b) list_double2_large_graphic_pane_t1

0xbaa9,	// (0x0005a671) list_double2_large_graphic_pane_t2_ParamLimits

0xbaa9,	// (0x0005a671) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0005e205) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0005e205) list_double2_large_graphic_pane_t

0xbabb,	// (0x0005a683) list_double_heading_pane_g1_ParamLimits

0xbabb,	// (0x0005a683) list_double_heading_pane_g1

0xbacc,	// (0x0005a694) list_double_heading_pane_g2_ParamLimits

0xbacc,	// (0x0005a694) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0005e20a) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0005e20a) list_double_heading_pane_g

0xbad8,	// (0x0005a6a0) list_double_heading_pane_t1_ParamLimits

0xbad8,	// (0x0005a6a0) list_double_heading_pane_t1

0xbaee,	// (0x0005a6b6) list_double_heading_pane_t2_ParamLimits

0xbaee,	// (0x0005a6b6) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0005e20f) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0005e20f) list_double_heading_pane_t

0xb996,	// (0x0005a55e) list_double_graphic_heading_pane_g1_ParamLimits

0xb996,	// (0x0005a55e) list_double_graphic_heading_pane_g1

0xbabb,	// (0x0005a683) list_double_graphic_heading_pane_g2_ParamLimits

0xbabb,	// (0x0005a683) list_double_graphic_heading_pane_g2

0xbacc,	// (0x0005a694) list_double_graphic_heading_pane_g3_ParamLimits

0xbacc,	// (0x0005a694) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0005e214) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0005e214) list_double_graphic_heading_pane_g

0xbb00,	// (0x0005a6c8) list_double_graphic_heading_pane_t1_ParamLimits

0xbb00,	// (0x0005a6c8) list_double_graphic_heading_pane_t1

0xbb16,	// (0x0005a6de) list_double_graphic_heading_pane_t2_ParamLimits

0xbb16,	// (0x0005a6de) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0005e21b) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0005e21b) list_double_graphic_heading_pane_t

0xb917,	// (0x0005a4df) list_double_time_pane_g1_ParamLimits

0xb917,	// (0x0005a4df) list_double_time_pane_g1

0xb928,	// (0x0005a4f0) list_double_time_pane_g2_ParamLimits

0xb928,	// (0x0005a4f0) list_double_time_pane_g2

0x0001,

0xf5fb,	// (0x0005e1c3) list_double_time_pane_g_ParamLimits

0xf5fb,	// (0x0005e1c3) list_double_time_pane_g

0xbb28,	// (0x0005a6f0) list_double_time_pane_t1_ParamLimits

0xbb28,	// (0x0005a6f0) list_double_time_pane_t1

0xbb3e,	// (0x0005a706) list_double_time_pane_t2_ParamLimits

0xbb3e,	// (0x0005a706) list_double_time_pane_t2

0xbb50,	// (0x0005a718) list_double_time_pane_t3_ParamLimits

0xbb50,	// (0x0005a718) list_double_time_pane_t3

0xbb62,	// (0x0005a72a) list_double_time_pane_t4_ParamLimits

0xbb62,	// (0x0005a72a) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0005e220) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0005e220) list_double_time_pane_t

0xbb74,	// (0x0005a73c) list_setting_pane_g1_ParamLimits

0xbb74,	// (0x0005a73c) list_setting_pane_g1

0xbb80,	// (0x0005a748) list_setting_pane_g2_ParamLimits

0xbb80,	// (0x0005a748) list_setting_pane_g2

0x0001,

0xf661,	// (0x0005e229) list_setting_pane_g_ParamLimits

0xf661,	// (0x0005e229) list_setting_pane_g

0xbb8c,	// (0x0005a754) list_setting_pane_t1_ParamLimits

0xbb8c,	// (0x0005a754) list_setting_pane_t1

0xbba6,	// (0x0005a76e) list_setting_pane_t2_ParamLimits

0xbba6,	// (0x0005a76e) list_setting_pane_t2

0x0002,

0xf666,	// (0x0005e22e) list_setting_pane_t_ParamLimits

0xf666,	// (0x0005e22e) list_setting_pane_t

0xbbe3,	// (0x0005a7ab) set_value_pane_cp_ParamLimits

0xbbe3,	// (0x0005a7ab) set_value_pane_cp

0xbbef,	// (0x0005a7b7) list_setting_number_pane_g1_ParamLimits

0xbbef,	// (0x0005a7b7) list_setting_number_pane_g1

0xbbfb,	// (0x0005a7c3) list_setting_number_pane_g2_ParamLimits

0xbbfb,	// (0x0005a7c3) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0005e235) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0005e235) list_setting_number_pane_g

0xbc07,	// (0x0005a7cf) list_setting_number_pane_t1_ParamLimits

0xbc07,	// (0x0005a7cf) list_setting_number_pane_t1

0xbc20,	// (0x0005a7e8) list_setting_number_pane_t2_ParamLimits

0xbc20,	// (0x0005a7e8) list_setting_number_pane_t2

0xbc3a,	// (0x0005a802) list_setting_number_pane_t3_ParamLimits

0xbc3a,	// (0x0005a802) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0005e23a) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0005e23a) list_setting_number_pane_t

0xbbe3,	// (0x0005a7ab) set_value_pane_ParamLimits

0xbbe3,	// (0x0005a7ab) set_value_pane

0x4028,	// (0x00052bf0) bg_set_opt_pane_ParamLimits

0x4028,	// (0x00052bf0) bg_set_opt_pane

0x09df,	// (0x0004f5a7) set_value_pane_t1

0x4049,	// (0x00052c11) slider_set_pane_cp3

0x4052,	// (0x00052c1a) volume_small_pane_cp

0x405b,	// (0x00052c23) list_form_gen_pane

0x4064,	// (0x00052c2c) scroll_pane_cp8

0xbc7d,	// (0x0005a845) form_field_data_pane_ParamLimits

0xbc7d,	// (0x0005a845) form_field_data_pane

0xbc94,	// (0x0005a85c) form_field_data_wide_pane_ParamLimits

0xbc94,	// (0x0005a85c) form_field_data_wide_pane

0xbcb4,	// (0x0005a87c) form_field_popup_pane_ParamLimits

0xbcb4,	// (0x0005a87c) form_field_popup_pane

0xbcd4,	// (0x0005a89c) form_field_popup_wide_pane_ParamLimits

0xbcd4,	// (0x0005a89c) form_field_popup_wide_pane

0x0a75,	// (0x0004f63d) form_field_slider_pane_ParamLimits

0x0a75,	// (0x0004f63d) form_field_slider_pane

0x0a88,	// (0x0004f650) form_field_slider_wide_pane_ParamLimits

0x0a88,	// (0x0004f650) form_field_slider_wide_pane

0x4075,	// (0x00052c3d) data_form_pane

0xbcf5,	// (0x0005a8bd) form_field_data_pane_t1

0x4081,	// (0x00052c49) input_focus_pane

0x0abf,	// (0x0004f687) data_form_wide_pane

0x0adc,	// (0x0004f6a4) form_field_data_wide_pane_t1

0x3de6,	// (0x000529ae) input_focus_pane_cp6

0xbd0f,	// (0x0005a8d7) form_field_popup_pane_t1

0x4081,	// (0x00052c49) input_focus_pane_cp7

0x40a3,	// (0x00052c6b) list_form_pane

0x0b20,	// (0x0004f6e8) form_field_popup_wide_pane_t1

0x4081,	// (0x00052c49) input_focus_pane_cp8

0x40af,	// (0x00052c77) list_form_wide_pane

0xbd31,	// (0x0005a8f9) form_field_slider_pane_t1_ParamLimits

0xbd31,	// (0x0005a8f9) form_field_slider_pane_t1

0xbd49,	// (0x0005a911) form_field_slider_pane_t2_ParamLimits

0xbd49,	// (0x0005a911) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0005e24a) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0005e24a) form_field_slider_pane_t

0x3a96,	// (0x0005265e) input_focus_pane_cp9_ParamLimits

0x3a96,	// (0x0005265e) input_focus_pane_cp9

0xbd5e,	// (0x0005a926) slider_cont_pane_ParamLimits

0xbd5e,	// (0x0005a926) slider_cont_pane

0x40be,	// (0x00052c86) form_field_slider_wide_pane_t1_ParamLimits

0x40be,	// (0x00052c86) form_field_slider_wide_pane_t1

0x0b7e,	// (0x0004f746) form_field_slider_wide_pane_t2_ParamLimits

0x0b7e,	// (0x0004f746) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0005e24f) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0005e24f) form_field_slider_wide_pane_t

0x3a96,	// (0x0005265e) input_focus_pane_cp10_ParamLimits

0x3a96,	// (0x0005265e) input_focus_pane_cp10

0xbd72,	// (0x0005a93a) slider_cont_pane_cp1_ParamLimits

0xbd72,	// (0x0005a93a) slider_cont_pane_cp1

0xbd86,	// (0x0005a94e) slider_form_pane_cp

0x40d0,	// (0x00052c98) input_focus_pane_g1

0x40d8,	// (0x00052ca0) input_focus_pane_g2

0x40e0,	// (0x00052ca8) input_focus_pane_g3

0x40e8,	// (0x00052cb0) input_focus_pane_g4

0x40f0,	// (0x00052cb8) input_focus_pane_g5

0x40f8,	// (0x00052cc0) input_focus_pane_g6

0x4100,	// (0x00052cc8) input_focus_pane_g7

0x4108,	// (0x00052cd0) input_focus_pane_g8

0x4110,	// (0x00052cd8) input_focus_pane_g9

0x3731,	// (0x000522f9) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0005e254) input_focus_pane_g

0x5b49,	// (0x00054711) wait_border_pane_g3_copy1

0xbd8e,	// (0x0005a956) data_form_pane_t1

0x3731,	// (0x000522f9) wait_anim_pane_g1_copy1

0xc791,	// (0x0005b359) data_form_wide_pane_t1

0xbda8,	// (0x0005a970) list_form_graphic_pane_cp_ParamLimits

0xbda8,	// (0x0005a970) list_form_graphic_pane_cp

0x6a64,	// (0x0005562c) slider_form_pane_g1

0x6a6d,	// (0x00055635) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0005e552) slider_form_pane_g

0xbda8,	// (0x0005a970) list_form_graphic_pane_ParamLimits

0xbda8,	// (0x0005a970) list_form_graphic_pane

0x0bde,	// (0x0004f7a6) list_form_graphic_pane_g1

0x0be6,	// (0x0004f7ae) list_form_graphic_pane_t1_ParamLimits

0x0be6,	// (0x0004f7ae) list_form_graphic_pane_t1

0x381b,	// (0x000523e3) list_highlight_pane_cp5_ParamLimits

0x381b,	// (0x000523e3) list_highlight_pane_cp5

0x0bfb,	// (0x0004f7c3) find_pane_g1

0x4118,	// (0x00052ce0) input_find_pane

0x0c04,	// (0x0004f7cc) input_find_pane_g1_ParamLimits

0x0c04,	// (0x0004f7cc) input_find_pane_g1

0x0c10,	// (0x0004f7d8) input_find_pane_t1_ParamLimits

0x0c10,	// (0x0004f7d8) input_find_pane_t1

0x0c25,	// (0x0004f7ed) input_find_pane_t2_ParamLimits

0x0c25,	// (0x0004f7ed) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0005e269) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0005e269) input_find_pane_t

0x4121,	// (0x00052ce9) input_focus_pane_cp5_ParamLimits

0x4121,	// (0x00052ce9) input_focus_pane_cp5

0x413b,	// (0x00052d03) bg_popup_window_pane_cp2_ParamLimits

0x413b,	// (0x00052d03) bg_popup_window_pane_cp2

0x4148,	// (0x00052d10) listscroll_menu_pane_ParamLimits

0x4148,	// (0x00052d10) listscroll_menu_pane

0xd2a2,	// (0x0005be6a) popup_submenu_window_ParamLimits

0xd2a2,	// (0x0005be6a) popup_submenu_window

0x417c,	// (0x00052d44) find_popup_pane_g1

0x4184,	// (0x00052d4c) input_popup_find_pane_cp

0x4121,	// (0x00052ce9) input_focus_pane_cp4_ParamLimits

0x4121,	// (0x00052ce9) input_focus_pane_cp4

0x419c,	// (0x00052d64) input_popup_find_pane_t1_ParamLimits

0x419c,	// (0x00052d64) input_popup_find_pane_t1

0x373b,	// (0x00052303) bg_popup_sub_pane_cp

0x41ca,	// (0x00052d92) listscroll_popup_sub_pane

0x41d2,	// (0x00052d9a) list_submenu_pane_ParamLimits

0x41d2,	// (0x00052d9a) list_submenu_pane

0x41e3,	// (0x00052dab) scroll_pane_cp4

0x41eb,	// (0x00052db3) list_single_popup_submenu_pane_ParamLimits

0x41eb,	// (0x00052db3) list_single_popup_submenu_pane

0x41ff,	// (0x00052dc7) list_single_popup_submenu_pane_g1

0x4207,	// (0x00052dcf) list_single_popup_submenu_pane_t1_ParamLimits

0x4207,	// (0x00052dcf) list_single_popup_submenu_pane_t1

0x3a96,	// (0x0005265e) bg_active_tab_pane_cp1_ParamLimits

0x3a96,	// (0x0005265e) bg_active_tab_pane_cp1

0xd2d8,	// (0x0005bea0) tabs_2_active_pane_g1

0xd2e0,	// (0x0005bea8) tabs_2_active_pane_t1

0x3a96,	// (0x0005265e) bg_passive_tab_pane_cp1_ParamLimits

0x3a96,	// (0x0005265e) bg_passive_tab_pane_cp1

0xd2d8,	// (0x0005bea0) tabs_2_passive_pane_g1

0xd2e0,	// (0x0005bea8) tabs_2_passive_pane_t1

0x381b,	// (0x000523e3) bg_active_tab_pane_cp4

0xd2f2,	// (0x0005beba) tabs_2_long_active_pane_t1

0x5023,	// (0x00053beb) bg_passive_tab_pane_cp4

0x18c9,	// (0x00050491) list_single_midp_graphic_pane_g4_ParamLimits

0x381b,	// (0x000523e3) bg_active_tab_pane_cp5

0xd305,	// (0x0005becd) tabs_3_long_active_pane_t1

0x5023,	// (0x00053beb) bg_passive_tab_pane_cp5

0x18c9,	// (0x00050491) list_single_midp_graphic_pane_g4

0x381b,	// (0x000523e3) bg_popup_window_pane_cp13_ParamLimits

0x381b,	// (0x000523e3) bg_popup_window_pane_cp13

0x427e,	// (0x00052e46) listscroll_popup_fast_pane_ParamLimits

0x427e,	// (0x00052e46) listscroll_popup_fast_pane

0x428a,	// (0x00052e52) grid_popup_fast_pane_ParamLimits

0x428a,	// (0x00052e52) grid_popup_fast_pane

0x429c,	// (0x00052e64) scroll_pane_cp9_ParamLimits

0x429c,	// (0x00052e64) scroll_pane_cp9

0x830b,	// (0x00056ed3) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x830b,	// (0x00056ed3) list_single_graphic_hl_pane_t1_cp2

0x42c0,	// (0x00052e88) input_focus_pane_cp20_ParamLimits

0x42c0,	// (0x00052e88) input_focus_pane_cp20

0x42ce,	// (0x00052e96) query_popup_data_pane_t1_ParamLimits

0x42ce,	// (0x00052e96) query_popup_data_pane_t1

0x42e1,	// (0x00052ea9) query_popup_data_pane_t2_ParamLimits

0x42e1,	// (0x00052ea9) query_popup_data_pane_t2

0x4327,	// (0x00052eef) query_popup_data_pane_t3_ParamLimits

0x4327,	// (0x00052eef) query_popup_data_pane_t3

0x4368,	// (0x00052f30) query_popup_data_pane_t4_ParamLimits

0x4368,	// (0x00052f30) query_popup_data_pane_t4

0x43a4,	// (0x00052f6c) query_popup_data_pane_t5_ParamLimits

0x43a4,	// (0x00052f6c) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0005e26e) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0005e26e) query_popup_data_pane_t

0x40d0,	// (0x00052c98) bg_set_opt_pane_g1

0x40d8,	// (0x00052ca0) bg_set_opt_pane_g2

0x40e0,	// (0x00052ca8) bg_set_opt_pane_g3

0x40e8,	// (0x00052cb0) bg_set_opt_pane_g4

0x40f0,	// (0x00052cb8) bg_set_opt_pane_g5

0x40f8,	// (0x00052cc0) bg_set_opt_pane_g6

0x4100,	// (0x00052cc8) bg_set_opt_pane_g7

0x4108,	// (0x00052cd0) bg_set_opt_pane_g8

0x4110,	// (0x00052cd8) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0005e279) bg_set_opt_pane_g

0x0f43,	// (0x0004fb0b) control_top_pane_stacon_ParamLimits

0x0f43,	// (0x0004fb0b) control_top_pane_stacon

0x0f96,	// (0x0004fb5e) signal_pane_stacon_ParamLimits

0x0f96,	// (0x0004fb5e) signal_pane_stacon

0x497a,	// (0x00053542) stacon_top_pane_g1_ParamLimits

0x497a,	// (0x00053542) stacon_top_pane_g1

0x0fbb,	// (0x0004fb83) title_pane_stacon_ParamLimits

0x0fbb,	// (0x0004fb83) title_pane_stacon

0x0fe5,	// (0x0004fbad) uni_indicator_pane_stacon_ParamLimits

0x0fe5,	// (0x0004fbad) uni_indicator_pane_stacon

0x0ffa,	// (0x0004fbc2) battery_pane_stacon_ParamLimits

0x0ffa,	// (0x0004fbc2) battery_pane_stacon

0x103e,	// (0x0004fc06) control_bottom_pane_stacon_ParamLimits

0x103e,	// (0x0004fc06) control_bottom_pane_stacon

0x1061,	// (0x0004fc29) navi_pane_stacon_ParamLimits

0x1061,	// (0x0004fc29) navi_pane_stacon

0x499c,	// (0x00053564) stacon_bottom_pane_g1_ParamLimits

0x499c,	// (0x00053564) stacon_bottom_pane_g1

0x0c3a,	// (0x0004f802) aid_levels_signal_lsc_ParamLimits

0x0c3a,	// (0x0004f802) aid_levels_signal_lsc

0x0c51,	// (0x0004f819) signal_pane_stacon_g1_ParamLimits

0x0c51,	// (0x0004f819) signal_pane_stacon_g1

0x0c65,	// (0x0004f82d) signal_pane_stacon_g2_ParamLimits

0x0c65,	// (0x0004f82d) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0005e28c) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0005e28c) signal_pane_stacon_g

0x0c9a,	// (0x0004f862) title_pane_stacon_t1_ParamLimits

0x0c9a,	// (0x0004f862) title_pane_stacon_t1

0x43e8,	// (0x00052fb0) uni_indicator_pane_stacon_g1

0x43f2,	// (0x00052fba) uni_indicator_pane_stacon_g2

0x43fc,	// (0x00052fc4) uni_indicator_pane_stacon_g3

0x4406,	// (0x00052fce) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0005e298) uni_indicator_pane_stacon_g

0x0cbf,	// (0x0004f887) control_top_pane_stacon_g1

0x0cc7,	// (0x0004f88f) control_top_pane_stacon_t1_ParamLimits

0x0cc7,	// (0x0004f88f) control_top_pane_stacon_t1

0x0cfe,	// (0x0004f8c6) aid_levels_battery_lsc_ParamLimits

0x0cfe,	// (0x0004f8c6) aid_levels_battery_lsc

0x0d16,	// (0x0004f8de) battery_pane_stacon_g1_ParamLimits

0x0d16,	// (0x0004f8de) battery_pane_stacon_g1

0x0d29,	// (0x0004f8f1) battery_pane_stacon_g2_ParamLimits

0x0d29,	// (0x0004f8f1) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0005e2a1) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0005e2a1) battery_pane_stacon_g

0x0d67,	// (0x0004f92f) navi_icon_pane_stacon

0x0d7b,	// (0x0004f943) navi_navi_pane_stacon

0x0d67,	// (0x0004f92f) navi_text_pane_stacon

0x0cbf,	// (0x0004f887) control_bottom_pane_stacon_g1

0x0d8f,	// (0x0004f957) control_bottom_pane_stacon_t1_ParamLimits

0x0d8f,	// (0x0004f957) control_bottom_pane_stacon_t1

0xd317,	// (0x0005bedf) grid_app_pane_ParamLimits

0xd317,	// (0x0005bedf) grid_app_pane

0xd34d,	// (0x0005bf15) scroll_pane_cp15_ParamLimits

0xd34d,	// (0x0005bf15) scroll_pane_cp15

0xd362,	// (0x0005bf2a) cell_app_pane_ParamLimits

0xd362,	// (0x0005bf2a) cell_app_pane

0xd3a9,	// (0x0005bf71) cell_app_pane_g1_ParamLimits

0xd3a9,	// (0x0005bf71) cell_app_pane_g1

0x44a5,	// (0x0005306d) cell_app_pane_g2_ParamLimits

0x44a5,	// (0x0005306d) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0005e2a6) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0005e2a6) cell_app_pane_g

0xd3c9,	// (0x0005bf91) cell_app_pane_t1_ParamLimits

0xd3c9,	// (0x0005bf91) cell_app_pane_t1

0x44c8,	// (0x00053090) grid_highlight_pane_ParamLimits

0x44c8,	// (0x00053090) grid_highlight_pane

0x40d0,	// (0x00052c98) cell_highlight_pane_g1

0x40d8,	// (0x00052ca0) cell_highlight_pane_g2

0x40e0,	// (0x00052ca8) cell_highlight_pane_g3

0x40e8,	// (0x00052cb0) cell_highlight_pane_g4

0x40f0,	// (0x00052cb8) cell_highlight_pane_g5

0x40f8,	// (0x00052cc0) cell_highlight_pane_g6

0x4100,	// (0x00052cc8) cell_highlight_pane_g7

0x4108,	// (0x00052cd0) cell_highlight_pane_g8

0x4110,	// (0x00052cd8) cell_highlight_pane_g9

0x3731,	// (0x000522f9) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0005e254) cell_highlight_pane_g

0x44d9,	// (0x000530a1) bg_scroll_pane

0x0dd9,	// (0x0004f9a1) scroll_handle_pane

0x4520,	// (0x000530e8) scroll_bg_pane_g1

0x4535,	// (0x000530fd) scroll_bg_pane_g2

0x454d,	// (0x00053115) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0005e2ab) scroll_bg_pane_g

0x4562,	// (0x0005312a) scroll_handle_focus_pane_ParamLimits

0x4562,	// (0x0005312a) scroll_handle_focus_pane

0x4520,	// (0x000530e8) scroll_handle_pane_g1

0x456f,	// (0x00053137) scroll_handle_pane_g2

0x454d,	// (0x00053115) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0005e2b2) scroll_handle_pane_g

0x4121,	// (0x00052ce9) bg_popup_sub_pane_cp21_ParamLimits

0x4121,	// (0x00052ce9) bg_popup_sub_pane_cp21

0x4583,	// (0x0005314b) popup_fep_japan_predictive_window_t1_ParamLimits

0x4583,	// (0x0005314b) popup_fep_japan_predictive_window_t1

0x459d,	// (0x00053165) popup_fep_japan_predictive_window_t2_ParamLimits

0x459d,	// (0x00053165) popup_fep_japan_predictive_window_t2

0x45d0,	// (0x00053198) popup_fep_japan_predictive_window_t3_ParamLimits

0x45d0,	// (0x00053198) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0005e2b9) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0005e2b9) popup_fep_japan_predictive_window_t

0x373b,	// (0x00052303) bg_popup_sub_pane_cp23

0x4607,	// (0x000531cf) listscroll_japin_cand_pane

0x460f,	// (0x000531d7) popup_fep_japan_candidate_window_t1

0x461d,	// (0x000531e5) candidate_pane_ParamLimits

0x461d,	// (0x000531e5) candidate_pane

0x462f,	// (0x000531f7) scroll_pane_cp30

0x4637,	// (0x000531ff) list_single_popup_jap_candidate_pane_ParamLimits

0x4637,	// (0x000531ff) list_single_popup_jap_candidate_pane

0x373b,	// (0x00052303) list_highlight_pane_cp30

0x464b,	// (0x00053213) list_single_popup_jap_candidate_pane_t1

0x465a,	// (0x00053222) level_1_signal

0x4667,	// (0x0005322f) level_2_signal

0x4674,	// (0x0005323c) level_3_signal

0x4681,	// (0x00053249) level_4_signal

0x468e,	// (0x00053256) level_5_signal

0x469b,	// (0x00053263) level_6_signal

0x46a8,	// (0x00053270) level_7_signal

0x465a,	// (0x00053222) level_1_battery

0x4667,	// (0x0005322f) level_2_battery

0x4674,	// (0x0005323c) level_3_battery

0x4681,	// (0x00053249) level_4_battery

0x468e,	// (0x00053256) level_5_battery

0x469b,	// (0x00053263) level_6_battery

0x46a8,	// (0x00053270) level_7_battery

0x46cd,	// (0x00053295) list_menu_pane_ParamLimits

0x46cd,	// (0x00053295) list_menu_pane

0x46e3,	// (0x000532ab) scroll_pane_cp25_ParamLimits

0x46e3,	// (0x000532ab) scroll_pane_cp25

0x46fc,	// (0x000532c4) list_double2_graphic_pane_cp2_ParamLimits

0x46fc,	// (0x000532c4) list_double2_graphic_pane_cp2

0x46fc,	// (0x000532c4) list_double2_large_graphic_pane_cp2_ParamLimits

0x46fc,	// (0x000532c4) list_double2_large_graphic_pane_cp2

0x46fc,	// (0x000532c4) list_double2_pane_cp2_ParamLimits

0x46fc,	// (0x000532c4) list_double2_pane_cp2

0x46fc,	// (0x000532c4) list_double_graphic_pane_cp2_ParamLimits

0x46fc,	// (0x000532c4) list_double_graphic_pane_cp2

0x46fc,	// (0x000532c4) list_double_large_graphic_pane_cp2_ParamLimits

0x46fc,	// (0x000532c4) list_double_large_graphic_pane_cp2

0x46fc,	// (0x000532c4) list_double_number_pane_cp2_ParamLimits

0x46fc,	// (0x000532c4) list_double_number_pane_cp2

0x46fc,	// (0x000532c4) list_double_pane_cp2_ParamLimits

0x46fc,	// (0x000532c4) list_double_pane_cp2

0xd3f1,	// (0x0005bfb9) list_single_2graphic_pane_cp2_ParamLimits

0xd3f1,	// (0x0005bfb9) list_single_2graphic_pane_cp2

0xd3f1,	// (0x0005bfb9) list_single_graphic_heading_pane_cp2_ParamLimits

0xd3f1,	// (0x0005bfb9) list_single_graphic_heading_pane_cp2

0xd3f1,	// (0x0005bfb9) list_single_graphic_pane_cp2_ParamLimits

0xd3f1,	// (0x0005bfb9) list_single_graphic_pane_cp2

0xd3f1,	// (0x0005bfb9) list_single_heading_pane_cp2_ParamLimits

0xd3f1,	// (0x0005bfb9) list_single_heading_pane_cp2

0x4736,	// (0x000532fe) list_single_large_graphic_pane_cp2_ParamLimits

0x4736,	// (0x000532fe) list_single_large_graphic_pane_cp2

0xd3f1,	// (0x0005bfb9) list_single_number_heading_pane_cp2_ParamLimits

0xd3f1,	// (0x0005bfb9) list_single_number_heading_pane_cp2

0xd3f1,	// (0x0005bfb9) list_single_number_pane_cp2_ParamLimits

0xd3f1,	// (0x0005bfb9) list_single_number_pane_cp2

0xd3f1,	// (0x0005bfb9) list_single_pane_cp2_ParamLimits

0xd3f1,	// (0x0005bfb9) list_single_pane_cp2

0x47b1,	// (0x00053379) bg_popup_sub_pane_cp22

0x0e88,	// (0x0004fa50) popup_side_volume_key_window_g1

0x0eac,	// (0x0004fa74) popup_side_volume_key_window_t1

0x0ec8,	// (0x0004fa90) volume_small_pane_cp1

0x3a96,	// (0x0005265e) bg_popup_sub_pane_cp24_ParamLimits

0x3a96,	// (0x0005265e) bg_popup_sub_pane_cp24

0x47c7,	// (0x0005338f) fep_china_uni_candidate_pane_ParamLimits

0x47c7,	// (0x0005338f) fep_china_uni_candidate_pane

0x47db,	// (0x000533a3) fep_china_uni_entry_pane

0x47eb,	// (0x000533b3) popup_fep_china_uni_window_g1

0x4807,	// (0x000533cf) fep_china_uni_entry_pane_g1

0x480f,	// (0x000533d7) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0005e2ea) fep_china_uni_entry_pane_g

0x4817,	// (0x000533df) fep_entry_item_pane

0x4821,	// (0x000533e9) fep_candidate_item_pane

0x4829,	// (0x000533f1) fep_china_uni_candidate_pane_g1

0x4831,	// (0x000533f9) fep_china_uni_candidate_pane_g2

0x4839,	// (0x00053401) fep_china_uni_candidate_pane_g3

0x4841,	// (0x00053409) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0005e2ef) fep_china_uni_candidate_pane_g

0x3731,	// (0x000522f9) fep_entry_item_pane_g1

0x4849,	// (0x00053411) fep_entry_item_pane_t1_ParamLimits

0x4849,	// (0x00053411) fep_entry_item_pane_t1

0x485f,	// (0x00053427) fep_candidate_item_pane_t1_ParamLimits

0x485f,	// (0x00053427) fep_candidate_item_pane_t1

0x4874,	// (0x0005343c) fep_candidate_item_pane_t2_ParamLimits

0x4874,	// (0x0005343c) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0005e2f8) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0005e2f8) fep_candidate_item_pane_t

0x381b,	// (0x000523e3) list_highlight_pane_cp31_ParamLimits

0x381b,	// (0x000523e3) list_highlight_pane_cp31

0x4886,	// (0x0005344e) level_1_signal_lsc

0x488f,	// (0x00053457) level_2_signal_lsc

0x4898,	// (0x00053460) level_3_signal_lsc

0x48a1,	// (0x00053469) level_4_signal_lsc

0x48aa,	// (0x00053472) level_5_signal_lsc

0x48b3,	// (0x0005347b) level_6_signal_lsc

0x48bc,	// (0x00053484) level_7_signal_lsc

0x48bc,	// (0x00053484) level_1_battery_lsc

0x48c5,	// (0x0005348d) level_2_battery_lsc

0x48ce,	// (0x00053496) level_3_battery_lsc

0x48d7,	// (0x0005349f) level_4_battery_lsc

0x48f8,	// (0x000534c0) level_5_battery_lsc

0x4901,	// (0x000534c9) level_6_battery_lsc

0x4886,	// (0x0005344e) level_7_battery_lsc

0x490a,	// (0x000534d2) scroll_handle_focus_pane_g1

0x4913,	// (0x000534db) scroll_handle_focus_pane_g2

0x491c,	// (0x000534e4) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0005e2fd) scroll_handle_focus_pane_g

0x0ed0,	// (0x0004fa98) list_single_2graphic_pane_g1_ParamLimits

0x0ed0,	// (0x0004fa98) list_single_2graphic_pane_g1

0xb8c6,	// (0x0005a48e) list_single_2graphic_pane_g2_ParamLimits

0xb8c6,	// (0x0005a48e) list_single_2graphic_pane_g2

0x2db5,	// (0x0005197d) list_single_2graphic_pane_g3_ParamLimits

0x2db5,	// (0x0005197d) list_single_2graphic_pane_g3

0x0edc,	// (0x0004faa4) list_single_2graphic_pane_g4_ParamLimits

0x0edc,	// (0x0004faa4) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0005e304) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0005e304) list_single_2graphic_pane_g

0x0eed,	// (0x0004fab5) list_single_2graphic_pane_t1_ParamLimits

0x0eed,	// (0x0004fab5) list_single_2graphic_pane_t1

0xbdba,	// (0x0005a982) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbdba,	// (0x0005a982) list_double2_graphic_large_graphic_pane_g1

0xba82,	// (0x0005a64a) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xba82,	// (0x0005a64a) list_double2_graphic_large_graphic_pane_g2

0xb8e3,	// (0x0005a4ab) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb8e3,	// (0x0005a4ab) list_double2_graphic_large_graphic_pane_g3

0xbdcc,	// (0x0005a994) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbdcc,	// (0x0005a994) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0005e30d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0005e30d) list_double2_graphic_large_graphic_pane_g

0xbdd8,	// (0x0005a9a0) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbdd8,	// (0x0005a9a0) list_double2_graphic_large_graphic_pane_t1

0xbdee,	// (0x0005a9b6) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbdee,	// (0x0005a9b6) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0005e316) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0005e316) list_double2_graphic_large_graphic_pane_t

0x4a63,	// (0x0005362b) popup_fast_swap_window_ParamLimits

0x4a63,	// (0x0005362b) popup_fast_swap_window

0x4a7f,	// (0x00053647) popup_side_volume_key_window

0x4a99,	// (0x00053661) stacon_top_pane

0x4aa3,	// (0x0005366b) status_pane_ParamLimits

0x4aa3,	// (0x0005366b) status_pane

0xd4e6,	// (0x0005c0ae) status_small_pane

0x373b,	// (0x00052303) control_pane

0x373b,	// (0x00052303) stacon_bottom_pane

0x4064,	// (0x00052c2c) scroll_pane_cp121

0x405b,	// (0x00052c23) set_content_pane

0xd47e,	// (0x0005c046) bg_active_tab_pane_g1_cp1

0x492e,	// (0x000534f6) bg_active_tab_pane_g2_cp1

0xd487,	// (0x0005c04f) bg_active_tab_pane_g3_cp1

0xd47e,	// (0x0005c046) bg_passive_tab_pane_g1_cp1

0x492e,	// (0x000534f6) bg_passive_tab_pane_g2_cp1

0xd487,	// (0x0005c04f) bg_passive_tab_pane_g3_cp1

0xd490,	// (0x0005c058) bg_active_tab_pane_g1_cp2

0x492e,	// (0x000534f6) bg_active_tab_pane_g2_cp2

0xd499,	// (0x0005c061) bg_active_tab_pane_g3_cp2

0xd490,	// (0x0005c058) bg_passive_tab_pane_g1_cp2

0x492e,	// (0x000534f6) bg_passive_tab_pane_g2_cp2

0xd499,	// (0x0005c061) bg_passive_tab_pane_g3_cp2

0x4952,	// (0x0005351a) bg_active_tab_pane_g1_cp3

0x492e,	// (0x000534f6) bg_active_tab_pane_g2_cp3

0x495b,	// (0x00053523) bg_active_tab_pane_g3_cp3

0x4952,	// (0x0005351a) bg_passive_tab_pane_g1_cp3

0x492e,	// (0x000534f6) bg_passive_tab_pane_g2_cp3

0x495b,	// (0x00053523) bg_passive_tab_pane_g3_cp3

0xd4a2,	// (0x0005c06a) bg_active_tab_pane_g1_cp4

0x492e,	// (0x000534f6) bg_active_tab_pane_g2_cp4

0xd4ad,	// (0x0005c075) bg_active_tab_pane_g3_cp4

0xd4a2,	// (0x0005c06a) bg_passive_tab_pane_g1_cp4

0x492e,	// (0x000534f6) bg_passive_tab_pane_g2_cp4

0xd4ad,	// (0x0005c075) bg_passive_tab_pane_g3_cp4

0x49b8,	// (0x00053580) bg_active_tab_pane_g1_cp5

0x492e,	// (0x000534f6) bg_active_tab_pane_g2_cp5

0x49c1,	// (0x00053589) bg_active_tab_pane_g3_cp5

0x49b8,	// (0x00053580) bg_passive_tab_pane_g1_cp5

0x492e,	// (0x000534f6) bg_passive_tab_pane_g2_cp5

0x49c1,	// (0x00053589) bg_passive_tab_pane_g3_cp5

0x6ff3,	// (0x00055bbb) list_set_graphic_pane_ParamLimits

0x6ff3,	// (0x00055bbb) list_set_graphic_pane

0x373b,	// (0x00052303) bg_set_opt_pane_cp4

0xd4b8,	// (0x0005c080) list_set_graphic_pane_g1_ParamLimits

0xd4b8,	// (0x0005c080) list_set_graphic_pane_g1

0xd4c4,	// (0x0005c08c) list_set_graphic_pane_g2_ParamLimits

0xd4c4,	// (0x0005c08c) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0005e31b) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0005e31b) list_set_graphic_pane_g

0x0009,

0xfad1,	// (0x0005e699) volume_small_pane_cp_g

0x4a16,	// (0x000535de) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4a16,	// (0x000535de) list_double2_large_graphic_pane_g1_cp2

0x4a22,	// (0x000535ea) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4a22,	// (0x000535ea) list_double2_large_graphic_pane_g2_cp2

0x4a33,	// (0x000535fb) list_double2_large_graphic_pane_g3_cp2

0x4a3b,	// (0x00053603) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4a3b,	// (0x00053603) list_double2_large_graphic_pane_t1_cp2

0x4a51,	// (0x00053619) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4a51,	// (0x00053619) list_double2_large_graphic_pane_t2_cp2

0x6622,	// (0x000551ea) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6622,	// (0x000551ea) list_double_large_graphic_pane_g1_cp2

0x6633,	// (0x000551fb) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6633,	// (0x000551fb) list_double_large_graphic_pane_g2_cp2

0x4bca,	// (0x00053792) list_double_large_graphic_pane_g3_cp2

0x6644,	// (0x0005520c) list_double_large_graphic_pane_g4_cp

0x664c,	// (0x00055214) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x664c,	// (0x00055214) list_double_large_graphic_pane_t1_cp2

0x6663,	// (0x0005522b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6663,	// (0x0005522b) list_double_large_graphic_pane_t2_cp2

0x4abc,	// (0x00053684) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4abc,	// (0x00053684) list_double2_graphic_pane_g1_cp2

0x4aca,	// (0x00053692) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4aca,	// (0x00053692) list_double2_graphic_pane_g2_cp2

0x4adb,	// (0x000536a3) list_double2_graphic_pane_g3_cp2

0x4ae5,	// (0x000536ad) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4ae5,	// (0x000536ad) list_double2_graphic_pane_t1_cp2

0x4afb,	// (0x000536c3) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4afb,	// (0x000536c3) list_double2_graphic_pane_t2_cp2

0x4b0d,	// (0x000536d5) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4b0d,	// (0x000536d5) list_single_number_heading_pane_g1_cp2

0x4b19,	// (0x000536e1) list_single_number_heading_pane_g2_cp2

0x4b21,	// (0x000536e9) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4b21,	// (0x000536e9) list_single_number_heading_pane_t1_cp2

0x4b37,	// (0x000536ff) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4b37,	// (0x000536ff) list_single_number_heading_pane_t2_cp2

0x4b49,	// (0x00053711) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4b49,	// (0x00053711) list_single_number_heading_pane_t3_cp2

0x4b0d,	// (0x000536d5) list_single_heading_pane_g1_cp2_ParamLimits

0x4b0d,	// (0x000536d5) list_single_heading_pane_g1_cp2

0x4b19,	// (0x000536e1) list_single_heading_pane_g2_cp2

0x4b21,	// (0x000536e9) list_single_heading_pane_t1_cp2_ParamLimits

0x4b21,	// (0x000536e9) list_single_heading_pane_t1_cp2

0x642c,	// (0x00054ff4) list_single_heading_pane_t2_cp2_ParamLimits

0x642c,	// (0x00054ff4) list_single_heading_pane_t2_cp2

0x6374,	// (0x00054f3c) list_double_graphic_pane_g1_cp2_ParamLimits

0x6374,	// (0x00054f3c) list_double_graphic_pane_g1_cp2

0x6380,	// (0x00054f48) list_double_graphic_pane_g2_cp2_ParamLimits

0x6380,	// (0x00054f48) list_double_graphic_pane_g2_cp2

0x638f,	// (0x00054f57) list_double_graphic_pane_g3_cp2

0x6397,	// (0x00054f5f) list_double_graphic_pane_t1_cp2_ParamLimits

0x6397,	// (0x00054f5f) list_double_graphic_pane_t1_cp2

0x63ad,	// (0x00054f75) list_double_graphic_pane_t2_cp2_ParamLimits

0x63ad,	// (0x00054f75) list_double_graphic_pane_t2_cp2

0x4bbe,	// (0x00053786) list_double_number_pane_g1_cp2_ParamLimits

0x4bbe,	// (0x00053786) list_double_number_pane_g1_cp2

0x4bca,	// (0x00053792) list_double_number_pane_g2_cp2

0x6338,	// (0x00054f00) list_double_number_pane_t1_cp2_ParamLimits

0x6338,	// (0x00054f00) list_double_number_pane_t1_cp2

0x634c,	// (0x00054f14) list_double_number_pane_t2_cp2_ParamLimits

0x634c,	// (0x00054f14) list_double_number_pane_t2_cp2

0x6362,	// (0x00054f2a) list_double_number_pane_t3_cp2_ParamLimits

0x6362,	// (0x00054f2a) list_double_number_pane_t3_cp2

0x6221,	// (0x00054de9) list_single_graphic_pane_g1_cp2_ParamLimits

0x6221,	// (0x00054de9) list_single_graphic_pane_g1_cp2

0x4c22,	// (0x000537ea) list_single_graphic_pane_g2_cp2_ParamLimits

0x4c22,	// (0x000537ea) list_single_graphic_pane_g2_cp2

0x4c2e,	// (0x000537f6) list_single_graphic_pane_g3_cp2

0x61f7,	// (0x00054dbf) list_single_graphic_pane_t1_cp2_ParamLimits

0x61f7,	// (0x00054dbf) list_single_graphic_pane_t1_cp2

0x4c22,	// (0x000537ea) list_single_number_pane_g1_cp2_ParamLimits

0x4c22,	// (0x000537ea) list_single_number_pane_g1_cp2

0x4c2e,	// (0x000537f6) list_single_number_pane_g2_cp2

0x61f7,	// (0x00054dbf) list_single_number_pane_t1_cp2_ParamLimits

0x61f7,	// (0x00054dbf) list_single_number_pane_t1_cp2

0x620d,	// (0x00054dd5) list_single_number_pane_t2_cp2_ParamLimits

0x620d,	// (0x00054dd5) list_single_number_pane_t2_cp2

0x4a22,	// (0x000535ea) list_double2_pane_g1_cp2_ParamLimits

0x4a22,	// (0x000535ea) list_double2_pane_g1_cp2

0x4a33,	// (0x000535fb) list_double2_pane_g2_cp2

0x4b96,	// (0x0005375e) list_double2_pane_t1_cp2_ParamLimits

0x4b96,	// (0x0005375e) list_double2_pane_t1_cp2

0x4bac,	// (0x00053774) list_double2_pane_t2_cp2_ParamLimits

0x4bac,	// (0x00053774) list_double2_pane_t2_cp2

0x4bbe,	// (0x00053786) list_double_pane_g1_cp2_ParamLimits

0x4bbe,	// (0x00053786) list_double_pane_g1_cp2

0x4bca,	// (0x00053792) list_double_pane_g2_cp2

0x4bd2,	// (0x0005379a) list_double_pane_t1_cp2_ParamLimits

0x4bd2,	// (0x0005379a) list_double_pane_t1_cp2

0x4be8,	// (0x000537b0) list_double_pane_t2_cp2_ParamLimits

0x4be8,	// (0x000537b0) list_double_pane_t2_cp2

0x4c12,	// (0x000537da) list_single_pane_cp2_g3

0x4c22,	// (0x000537ea) list_single_pane_g1_cp2_ParamLimits

0x4c22,	// (0x000537ea) list_single_pane_g1_cp2

0x4c2e,	// (0x000537f6) list_single_pane_g2_cp2

0x4c36,	// (0x000537fe) list_single_pane_t1_cp2_ParamLimits

0x4c36,	// (0x000537fe) list_single_pane_t1_cp2

0x4c4e,	// (0x00053816) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4c4e,	// (0x00053816) list_single_large_graphic_pane_g1_cp2

0x4c5a,	// (0x00053822) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4c5a,	// (0x00053822) list_single_large_graphic_pane_g2_cp2

0x4c66,	// (0x0005382e) list_single_large_graphic_pane_g3_cp2

0x4c6e,	// (0x00053836) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4c6e,	// (0x00053836) list_single_large_graphic_pane_g4_cp1

0x4c88,	// (0x00053850) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4c88,	// (0x00053850) list_single_large_graphic_pane_t1_cp2

0x61c3,	// (0x00054d8b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x61c3,	// (0x00054d8b) list_single_graphic_heading_pane_g1_cp2

0x6190,	// (0x00054d58) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x6190,	// (0x00054d58) list_single_graphic_heading_pane_g4_cp2

0x4c2e,	// (0x000537f6) list_single_graphic_heading_pane_g5_cp2

0x61cf,	// (0x00054d97) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x61cf,	// (0x00054d97) list_single_graphic_heading_pane_t1_cp2

0x61e5,	// (0x00054dad) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x61e5,	// (0x00054dad) list_single_graphic_heading_pane_t2_cp2

0x6184,	// (0x00054d4c) list_single_2graphic_pane_g1_cp2_ParamLimits

0x6184,	// (0x00054d4c) list_single_2graphic_pane_g1_cp2

0x6190,	// (0x00054d58) list_single_2graphic_pane_g2_cp2_ParamLimits

0x6190,	// (0x00054d58) list_single_2graphic_pane_g2_cp2

0x4c2e,	// (0x000537f6) list_single_2graphic_pane_g3_cp2

0x61a1,	// (0x00054d69) list_single_2graphic_pane_g4_cp2_ParamLimits

0x61a1,	// (0x00054d69) list_single_2graphic_pane_g4_cp2

0x61ad,	// (0x00054d75) list_single_2graphic_pane_t1_cp2_ParamLimits

0x61ad,	// (0x00054d75) list_single_2graphic_pane_t1_cp2

0x3731,	// (0x000522f9) list_highlight_pane_g10_cp1

0x5d5c,	// (0x00054924) list_highlight_pane_g1_cp1

0x5d64,	// (0x0005492c) list_highlight_pane_g2_cp1

0x5d6c,	// (0x00054934) list_highlight_pane_g3_cp1

0x5d74,	// (0x0005493c) list_highlight_pane_g4_cp1

0x5d7c,	// (0x00054944) list_highlight_pane_g5_cp1

0x5d84,	// (0x0005494c) list_highlight_pane_g6_cp1

0x5d8c,	// (0x00054954) list_highlight_pane_g7_cp1

0x5d94,	// (0x0005495c) list_highlight_pane_g8_cp1

0x5d9c,	// (0x00054964) list_highlight_pane_g9_cp1

0xdbe0,	// (0x0005c7a8) form_field_slider_pane_t3

0xdbf0,	// (0x0005c7b8) form_field_slider_pane_t4

0x5c90,	// (0x00054858) slider_form_pane_ParamLimits

0x5c90,	// (0x00054858) slider_form_pane

0x373b,	// (0x00052303) control_abbreviations

0x373b,	// (0x00052303) control_conventions

0x373b,	// (0x00052303) control_definitions

0x373b,	// (0x00052303) format_table_attribute

0x6476,	// (0x0005503e) bg_popup_preview_window_pane_g9

0x373b,	// (0x00052303) format_table_data2

0x373b,	// (0x00052303) format_table_data3

0x373b,	// (0x00052303) format_table_data_example

0x0008,

0x373b,	// (0x00052303) intro_purpose

0xf8ea,	// (0x0005e4b2) bg_popup_preview_window_pane_g

0x373b,	// (0x00052303) texts_category

0x373b,	// (0x00052303) texts_graphics

0x4c9e,	// (0x00053866) text_digital

0x4cad,	// (0x00053875) text_primary

0x4cbc,	// (0x00053884) text_primary_small

0x4ccb,	// (0x00053893) text_secondary

0x4cda,	// (0x000538a2) text_title

0x6b45,	// (0x0005570d) bg_passive_tab_pane_g1_cp3_srt

0x492e,	// (0x000534f6) bg_passive_tab_pane_g2_cp3_srt

0x6b4e,	// (0x00055716) bg_passive_tab_pane_g3_cp3_srt

0x3a96,	// (0x0005265e) bg_active_tab_pane_cp3_srt_ParamLimits

0x3a96,	// (0x0005265e) bg_active_tab_pane_cp3_srt

0x6b57,	// (0x0005571f) tabs_4_active_pane_srt_g1

0xdf2d,	// (0x0005caf5) tabs_4_active_pane_srt_t1_ParamLimits

0xdf2d,	// (0x0005caf5) tabs_4_active_pane_srt_t1

0x6b45,	// (0x0005570d) bg_active_tab_pane_g1_cp3_copy1

0x492e,	// (0x000534f6) bg_active_tab_pane_g2_cp3_copy1

0x6b4e,	// (0x00055716) bg_active_tab_pane_g3_cp3_copy1

0x381b,	// (0x000523e3) tabs_2_long_active_pane_srt_ParamLimits

0x381b,	// (0x000523e3) tabs_2_long_active_pane_srt

0x381b,	// (0x000523e3) tabs_2_long_passive_pane_srt_ParamLimits

0x381b,	// (0x000523e3) tabs_2_long_passive_pane_srt

0x5023,	// (0x00053beb) bg_passive_tab_pane_cp4_srt_ParamLimits

0x5023,	// (0x00053beb) bg_passive_tab_pane_cp4_srt

0x68a5,	// (0x0005546d) bg_passive_tab_pane_g1_cp4_srt

0x492e,	// (0x000534f6) bg_passive_tab_pane_g2_cp4_srt

0x68ae,	// (0x00055476) bg_passive_tab_pane_g3_cp4_srt

0x381b,	// (0x000523e3) bg_active_tab_pane_cp4_srt_ParamLimits

0x381b,	// (0x000523e3) bg_active_tab_pane_cp4_srt

0xdd5a,	// (0x0005c922) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdd5a,	// (0x0005c922) tabs_2_long_active_pane_srt_t1

0x68a5,	// (0x0005546d) bg_active_tab_pane_g1_cp4_srt

0x492e,	// (0x000534f6) bg_active_tab_pane_g2_cp4_srt

0x68ae,	// (0x00055476) bg_active_tab_pane_g3_cp4_srt

0x3a96,	// (0x0005265e) tabs_3_long_active_pane_srt_ParamLimits

0x3a96,	// (0x0005265e) tabs_3_long_active_pane_srt

0x3a96,	// (0x0005265e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3a96,	// (0x0005265e) tabs_3_long_passive_pane_cp_srt

0x3a96,	// (0x0005265e) tabs_3_long_passive_pane_srt_ParamLimits

0x3a96,	// (0x0005265e) tabs_3_long_passive_pane_srt

0x5023,	// (0x00053beb) bg_passive_tab_pane_cp5_srt_ParamLimits

0x5023,	// (0x00053beb) bg_passive_tab_pane_cp5_srt

0x49b8,	// (0x00053580) bg_passive_tab_pane_g1_cp5_srt

0x492e,	// (0x000534f6) bg_passive_tab_pane_g2_cp5_srt

0x49c1,	// (0x00053589) bg_passive_tab_pane_g3_cp5_srt

0x381b,	// (0x000523e3) bg_active_tab_pane_cp5_srt_ParamLimits

0x381b,	// (0x000523e3) bg_active_tab_pane_cp5_srt

0xdd44,	// (0x0005c90c) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdd44,	// (0x0005c90c) tabs_3_long_active_pane_srt_t1

0x49b8,	// (0x00053580) bg_active_tab_pane_g1_cp5_srt

0x492e,	// (0x000534f6) bg_active_tab_pane_g2_cp5_srt

0x49c1,	// (0x00053589) bg_active_tab_pane_g3_cp5_srt

0x6885,	// (0x0005544d) navi_text_pane_srt_t1

0x687d,	// (0x00055445) navi_icon_pane_srt_g1

0x4e9f,	// (0x00053a67) midp_editing_number_pane_srt

0x4ce9,	// (0x000538b1) midp_ticker_pane_srt

0x4ea7,	// (0x00053a6f) midp_ticker_pane_srt_g1

0x4eaf,	// (0x00053a77) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0005e33a) midp_ticker_pane_srt_g

0x4eb7,	// (0x00053a7f) midp_ticker_pane_srt_t1

0x686e,	// (0x00055436) midp_editing_number_pane_t1_copy1

0x5023,	// (0x00053beb) listscroll_midp_pane

0x5023,	// (0x00053beb) midp_form_pane

0x4d57,	// (0x0005391f) midp_info_popup_window_ParamLimits

0x4d57,	// (0x0005391f) midp_info_popup_window

0x4121,	// (0x00052ce9) bg_popup_sub_pane_cp50_ParamLimits

0x4121,	// (0x00052ce9) bg_popup_sub_pane_cp50

0x5985,	// (0x0005454d) listscroll_midp_info_pane_ParamLimits

0x5985,	// (0x0005454d) listscroll_midp_info_pane

0x596d,	// (0x00054535) listscroll_form_midp_pane_ParamLimits

0x596d,	// (0x00054535) listscroll_form_midp_pane

0x5979,	// (0x00054541) scroll_bar_cp050

0xdbd4,	// (0x0005c79c) list_midp_pane

0x757a,	// (0x00056142) signal_pane_g2_cp

0x5887,	// (0x0005444f) listscroll_midp_info_pane_t1_ParamLimits

0x5887,	// (0x0005444f) listscroll_midp_info_pane_t1

0x589f,	// (0x00054467) listscroll_midp_info_pane_t2_ParamLimits

0x589f,	// (0x00054467) listscroll_midp_info_pane_t2

0x58dd,	// (0x000544a5) listscroll_midp_info_pane_t3_ParamLimits

0x58dd,	// (0x000544a5) listscroll_midp_info_pane_t3

0x5917,	// (0x000544df) listscroll_midp_info_pane_t4_ParamLimits

0x5917,	// (0x000544df) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0005e3ed) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0005e3ed) listscroll_midp_info_pane_t

0x41e3,	// (0x00052dab) scroll_pane_cp21

0x5829,	// (0x000543f1) form_midp_field_choice_group_pane

0x5832,	// (0x000543fa) form_midp_field_text_pane

0x586d,	// (0x00054435) form_midp_field_time_pane

0x5875,	// (0x0005443d) form_midp_gauge_slider_pane

0x587e,	// (0x00054446) form_midp_gauge_wait_pane

0x373b,	// (0x00052303) form_midp_image_pane

0xc687,	// (0x0005b24f) list_single_midp_pane_ParamLimits

0xc687,	// (0x0005b24f) list_single_midp_pane

0xdbb1,	// (0x0005c779) form_midp_field_text_pane_t1

0x5595,	// (0x0005415d) input_focus_pane_cp050

0x5818,	// (0x000543e0) list_midp_form_text_pane

0x57ac,	// (0x00054374) form_midp_field_choice_group_pane_t1

0x57ba,	// (0x00054382) input_focus_pane_cp051

0x57ce,	// (0x00054396) list_midp_choice_pane

0x373b,	// (0x00052303) status_idle_pane

0x5790,	// (0x00054358) form_midp_field_time_pane_t1

0x3731,	// (0x000522f9) wait_anim_pane_g2_copy1

0x579e,	// (0x00054366) form_midp_field_time_pane_t2

0x0001,

0x4e07,	// (0x000539cf) aid_navinavi_width_2_pane

0xf820,	// (0x0005e3e8) form_midp_field_time_pane_t

0x373b,	// (0x00052303) input_focus_pane_cp052

0x373b,	// (0x00052303) bg_input_focus_pane_cp040

0x5750,	// (0x00054318) form_midp_gauge_slider_pane_t1

0x575e,	// (0x00054326) form_midp_gauge_slider_pane_t2

0xdb91,	// (0x0005c759) form_midp_gauge_slider_pane_t3

0xdba1,	// (0x0005c769) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0005e3df) form_midp_gauge_slider_pane_t

0x5788,	// (0x00054350) form_midp_slider_pane

0x381b,	// (0x000523e3) bg_input_focus_pane_cp041_ParamLimits

0x381b,	// (0x000523e3) bg_input_focus_pane_cp041

0x571d,	// (0x000542e5) form_midp_gauge_wait_pane_t1_ParamLimits

0x571d,	// (0x000542e5) form_midp_gauge_wait_pane_t1

0x572f,	// (0x000542f7) form_midp_gauge_wait_pane_t2_ParamLimits

0x572f,	// (0x000542f7) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0005e3da) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0005e3da) form_midp_gauge_wait_pane_t

0x5741,	// (0x00054309) form_midp_wait_pane_ParamLimits

0x5741,	// (0x00054309) form_midp_wait_pane

0x56e7,	// (0x000542af) form_midp_image_pane_g1

0x56f0,	// (0x000542b8) form_midp_image_pane_t1

0x56ff,	// (0x000542c7) form_midp_image_pane_t2

0x570e,	// (0x000542d6) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0005e3d3) form_midp_image_pane_t

0x56de,	// (0x000542a6) list_single_midp_pane_g1

0x2ea9,	// (0x00051a71) list_single_midp_pane_t1

0xdb7b,	// (0x0005c743) list_midp_form_item_pane_ParamLimits

0xdb7b,	// (0x0005c743) list_midp_form_item_pane

0x4daf,	// (0x00053977) list_midp_form_item_pane_t1

0x4dbe,	// (0x00053986) midp_ticker_pane_g1

0x4dca,	// (0x00053992) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0005e320) midp_ticker_pane_g

0x4dd6,	// (0x0005399e) midp_ticker_pane_t1

0x6ab1,	// (0x00055679) midp_editing_number_pane_t1

0x6a8f,	// (0x00055657) midp_editing_number_pane

0x6a9e,	// (0x00055666) midp_ticker_pane

0x685e,	// (0x00055426) ai_message_heading_pane

0x373b,	// (0x00052303) bg_popup_window_pane_cp14

0x6866,	// (0x0005542e) listscroll_ai_message_pane

0x67e8,	// (0x000553b0) ai_message_heading_pane_g1_ParamLimits

0x67e8,	// (0x000553b0) ai_message_heading_pane_g1

0x67f4,	// (0x000553bc) ai_message_heading_pane_g2_ParamLimits

0x67f4,	// (0x000553bc) ai_message_heading_pane_g2

0x6800,	// (0x000553c8) ai_message_heading_pane_g3_ParamLimits

0x6800,	// (0x000553c8) ai_message_heading_pane_g3

0x680c,	// (0x000553d4) ai_message_heading_pane_g4_ParamLimits

0x680c,	// (0x000553d4) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0005e514) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0005e514) ai_message_heading_pane_g

0x6818,	// (0x000553e0) ai_message_heading_pane_t1_ParamLimits

0x6818,	// (0x000553e0) ai_message_heading_pane_t1

0x6832,	// (0x000553fa) ai_message_heading_pane_t2_ParamLimits

0x6832,	// (0x000553fa) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0005e51d) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0005e51d) ai_message_heading_pane_t

0x6844,	// (0x0005540c) bg_popup_heading_pane_cp1_ParamLimits

0x6844,	// (0x0005540c) bg_popup_heading_pane_cp1

0x67d6,	// (0x0005539e) list_ai_message_pane_ParamLimits

0x67d6,	// (0x0005539e) list_ai_message_pane

0x41e3,	// (0x00052dab) scroll_pane_cp10

0x6772,	// (0x0005533a) list_ai_message_pane_g1

0x677a,	// (0x00055342) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0005e4f1) list_ai_message_pane_g

0x6782,	// (0x0005534a) list_ai_message_pane_t1_ParamLimits

0x6782,	// (0x0005534a) list_ai_message_pane_t1

0x6797,	// (0x0005535f) list_ai_message_pane_t2_ParamLimits

0x6797,	// (0x0005535f) list_ai_message_pane_t2

0x67ac,	// (0x00055374) list_ai_message_pane_t3_ParamLimits

0x67ac,	// (0x00055374) list_ai_message_pane_t3

0x67c1,	// (0x00055389) list_ai_message_pane_t4_ParamLimits

0x67c1,	// (0x00055389) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0005e4f6) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0005e4f6) list_ai_message_pane_t

0xdd22,	// (0x0005c8ea) cell_ai_soft_ind_pane_ParamLimits

0xdd22,	// (0x0005c8ea) cell_ai_soft_ind_pane

0x4de8,	// (0x000539b0) cell_ai_soft_ind_pane_g1_ParamLimits

0x4de8,	// (0x000539b0) cell_ai_soft_ind_pane_g1

0x373b,	// (0x00052303) grid_highlight_cp1

0x4df5,	// (0x000539bd) text_secondary_cp56_ParamLimits

0x4df5,	// (0x000539bd) text_secondary_cp56

0x6731,	// (0x000552f9) example_general_pane_ParamLimits

0x6731,	// (0x000552f9) example_general_pane

0x673d,	// (0x00055305) example_parent_pane_g1_ParamLimits

0x673d,	// (0x00055305) example_parent_pane_g1

0x6749,	// (0x00055311) example_parent_pane_t1_ParamLimits

0x6749,	// (0x00055311) example_parent_pane_t1

0xc337,	// (0x0005aeff) popup_preview_text_window_ParamLimits

0xc337,	// (0x0005aeff) popup_preview_text_window

0x4c1a,	// (0x000537e2) list_single_pane_cp2_g4

0x3b40,	// (0x00052708) bg_popup_preview_window_pane_ParamLimits

0x3b40,	// (0x00052708) bg_popup_preview_window_pane

0x647e,	// (0x00055046) popup_preview_text_window_t1_ParamLimits

0x647e,	// (0x00055046) popup_preview_text_window_t1

0x649c,	// (0x00055064) popup_preview_text_window_t2_ParamLimits

0x649c,	// (0x00055064) popup_preview_text_window_t2

0x64e5,	// (0x000550ad) popup_preview_text_window_t3_ParamLimits

0x64e5,	// (0x000550ad) popup_preview_text_window_t3

0x652a,	// (0x000550f2) popup_preview_text_window_t4_ParamLimits

0x652a,	// (0x000550f2) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0005e4c5) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0005e4c5) popup_preview_text_window_t

0x65a8,	// (0x00055170) scroll_pane_cp11

0x5521,	// (0x000540e9) bg_popup_preview_window_pane_g1

0x643e,	// (0x00055006) bg_popup_preview_window_pane_g2

0x6446,	// (0x0005500e) bg_popup_preview_window_pane_g3

0x644e,	// (0x00055016) bg_popup_preview_window_pane_g4

0x6456,	// (0x0005501e) bg_popup_preview_window_pane_g5

0x645e,	// (0x00055026) bg_popup_preview_window_pane_g6

0x6466,	// (0x0005502e) bg_popup_preview_window_pane_g7

0x646e,	// (0x00055036) bg_popup_preview_window_pane_g8

0x00f0,	// (0x0004ecb8) aid_popup_width_pane

0xc2b3,	// (0x0005ae7b) popup_midp_note_alarm_window_ParamLimits

0xc2b3,	// (0x0005ae7b) popup_midp_note_alarm_window

0x4075,	// (0x00052c3d) data_form_pane_ParamLimits

0xbceb,	// (0x0005a8b3) form_field_data_pane_g1

0xbcf5,	// (0x0005a8bd) form_field_data_pane_t1_ParamLimits

0x4081,	// (0x00052c49) input_focus_pane_ParamLimits

0x0abf,	// (0x0004f687) data_form_wide_pane_ParamLimits

0x0ad0,	// (0x0004f698) form_field_data_wide_pane_g1

0x0adc,	// (0x0004f6a4) form_field_data_wide_pane_t1_ParamLimits

0x3de6,	// (0x000529ae) input_focus_pane_cp6_ParamLimits

0xd2ca,	// (0x0005be92) input_popup_find_pane_g1_ParamLimits

0xd2ca,	// (0x0005be92) input_popup_find_pane_g1

0x0d3a,	// (0x0004f902) aid_navi_side_left_pane

0x0d4f,	// (0x0004f917) aid_navi_side_right_pane

0x5e57,	// (0x00054a1f) bg_popup_window_pane_cp30_ParamLimits

0x5e57,	// (0x00054a1f) bg_popup_window_pane_cp30

0x5ed1,	// (0x00054a99) popup_midp_note_alarm_window_g1_ParamLimits

0x5ed1,	// (0x00054a99) popup_midp_note_alarm_window_g1

0x5f01,	// (0x00054ac9) popup_midp_note_alarm_window_t1_ParamLimits

0x5f01,	// (0x00054ac9) popup_midp_note_alarm_window_t1

0x5fa2,	// (0x00054b6a) popup_midp_note_alarm_window_t2_ParamLimits

0x5fa2,	// (0x00054b6a) popup_midp_note_alarm_window_t2

0x6050,	// (0x00054c18) popup_midp_note_alarm_window_t3_ParamLimits

0x6050,	// (0x00054c18) popup_midp_note_alarm_window_t3

0x6082,	// (0x00054c4a) popup_midp_note_alarm_window_t4_ParamLimits

0x6082,	// (0x00054c4a) popup_midp_note_alarm_window_t4

0x60a8,	// (0x00054c70) popup_midp_note_alarm_window_t5_ParamLimits

0x60a8,	// (0x00054c70) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0005e462) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0005e462) popup_midp_note_alarm_window_t

0x6154,	// (0x00054d1c) wait_bar_pane_cp1_ParamLimits

0x6154,	// (0x00054d1c) wait_bar_pane_cp1

0x373b,	// (0x00052303) wait_anim_pane_copy1

0x373b,	// (0x00052303) wait_border_pane_copy1

0x5b29,	// (0x000546f1) wait_border_pane_g1_copy1

0x0af6,	// (0x0004f6be) form_field_popup_pane_g1

0xbd0f,	// (0x0005a8d7) form_field_popup_pane_t1_ParamLimits

0x4081,	// (0x00052c49) input_focus_pane_cp7_ParamLimits

0x40a3,	// (0x00052c6b) list_form_pane_ParamLimits

0x0b18,	// (0x0004f6e0) form_field_popup_wide_pane_g1

0x0b20,	// (0x0004f6e8) form_field_popup_wide_pane_t1_ParamLimits

0x4081,	// (0x00052c49) input_focus_pane_cp8_ParamLimits

0x40af,	// (0x00052c77) list_form_wide_pane_ParamLimits

0x6bda,	// (0x000557a2) aid_size_cell_graphic_pane

0xbd8e,	// (0x0005a956) data_form_pane_t1_ParamLimits

0xc791,	// (0x0005b359) data_form_wide_pane_t1_ParamLimits

0xd752,	// (0x0005c31a) bg_status_flat_pane

0xcf8e,	// (0x0005bb56) title_pane_t1_ParamLimits

0x37e3,	// (0x000523ab) title_pane_t2_ParamLimits

0x3809,	// (0x000523d1) title_pane_t3_ParamLimits

0xf557,	// (0x0005e11f) title_pane_t_ParamLimits

0x465a,	// (0x00053222) level_1_signal_ParamLimits

0x4667,	// (0x0005322f) level_2_signal_ParamLimits

0x4674,	// (0x0005323c) level_3_signal_ParamLimits

0x4681,	// (0x00053249) level_4_signal_ParamLimits

0x468e,	// (0x00053256) level_5_signal_ParamLimits

0x469b,	// (0x00053263) level_6_signal_ParamLimits

0x46a8,	// (0x00053270) level_7_signal_ParamLimits

0x465a,	// (0x00053222) level_1_battery_ParamLimits

0x4667,	// (0x0005322f) level_2_battery_ParamLimits

0x4674,	// (0x0005323c) level_3_battery_ParamLimits

0x4681,	// (0x00053249) level_4_battery_ParamLimits

0x468e,	// (0x00053256) level_5_battery_ParamLimits

0x469b,	// (0x00053263) level_6_battery_ParamLimits

0x46a8,	// (0x00053270) level_7_battery_ParamLimits

0x5d5c,	// (0x00054924) bg_status_flat_pane_g1

0x5d64,	// (0x0005492c) bg_status_flat_pane_g2

0x5d6c,	// (0x00054934) bg_status_flat_pane_g3

0x5d74,	// (0x0005493c) bg_status_flat_pane_g4

0x5d7c,	// (0x00054944) bg_status_flat_pane_g5

0x5d84,	// (0x0005494c) bg_status_flat_pane_g6

0x5d8c,	// (0x00054954) bg_status_flat_pane_g7

0xd01a,	// (0x0005bbe2) tabs_3_active_pane_t1_ParamLimits

0xd01a,	// (0x0005bbe2) tabs_3_passive_pane_t1_ParamLimits

0xd02c,	// (0x0005bbf4) tabs_4_active_pane_t1_ParamLimits

0xd02c,	// (0x0005bbf4) tabs_4_1_passive_pane_t1_ParamLimits

0xd2e0,	// (0x0005bea8) tabs_2_active_pane_t1_ParamLimits

0xd2e0,	// (0x0005bea8) tabs_2_passive_pane_t1_ParamLimits

0x381b,	// (0x000523e3) bg_active_tab_pane_cp4_ParamLimits

0xd2f2,	// (0x0005beba) tabs_2_long_active_pane_t1_ParamLimits

0x5023,	// (0x00053beb) bg_passive_tab_pane_cp4_ParamLimits

0x192d,	// (0x000504f5) list_single_midp_graphic_pane_t1_ParamLimits

0x381b,	// (0x000523e3) bg_active_tab_pane_cp5_ParamLimits

0xd305,	// (0x0005becd) tabs_3_long_active_pane_t1_ParamLimits

0x5023,	// (0x00053beb) bg_passive_tab_pane_cp5_ParamLimits

0x192d,	// (0x000504f5) list_single_midp_graphic_pane_t1

0xd752,	// (0x0005c31a) bg_status_flat_pane_ParamLimits

0x51b9,	// (0x00053d81) indicator_pane_cp2_ParamLimits

0x51b9,	// (0x00053d81) indicator_pane_cp2

0xd97a,	// (0x0005c542) navi_pane_srt_ParamLimits

0xd97a,	// (0x0005c542) navi_pane_srt

0x5308,	// (0x00053ed0) popup_clock_digital_analogue_window_cp1

0x38f8,	// (0x000524c0) indicator_pane_t1

0x4ce9,	// (0x000538b1) copy_highlight_pane

0x4ce9,	// (0x000538b1) cursor_graphics_pane

0x4ce9,	// (0x000538b1) graphic_within_text_pane

0x4ce9,	// (0x000538b1) link_highlight_pane

0x656b,	// (0x00055133) popup_preview_text_window_t5_ParamLimits

0x656b,	// (0x00055133) popup_preview_text_window_t5

0x4e0f,	// (0x000539d7) cursor_digital_pane

0x4e0f,	// (0x000539d7) cursor_primary_pane

0x4e20,	// (0x000539e8) cursor_primary_small_pane

0x4e28,	// (0x000539f0) cursor_secondary_pane

0x4e30,	// (0x000539f8) cursor_title_pane

0x4e0f,	// (0x000539d7) link_highlight_digital_pane

0x4e17,	// (0x000539df) link_highlight_primary_pane

0x4e20,	// (0x000539e8) link_highlight_primary_small_pane

0x4e28,	// (0x000539f0) link_highlight_secondary_pane

0x4e30,	// (0x000539f8) link_highlight_title_pane

0x4e0f,	// (0x000539d7) copy_highlight_digital_pane

0x4e0f,	// (0x000539d7) copy_highlight_primary_pane

0x4e20,	// (0x000539e8) copy_highlight_primary_small_pane

0x4e28,	// (0x000539f0) copy_highlight_secondary_pane

0x4e30,	// (0x000539f8) copy_highlight_title_pane

0x4e28,	// (0x000539f0) graphic_text_digital_pane

0x5dfa,	// (0x000549c2) graphic_text_primary_pane

0x5e03,	// (0x000549cb) graphic_text_primary_small_pane

0x4e20,	// (0x000539e8) graphic_text_secondary_pane

0x4e0f,	// (0x000539d7) graphic_text_title_pane

0xd58e,	// (0x0005c156) cursor_primary_pane_g1

0x5dec,	// (0x000549b4) cursor_text_primary_t1

0xdc14,	// (0x0005c7dc) cursor_primary_small_pane_g1

0x5dde,	// (0x000549a6) cursor_text_primary_small_t1

0xdc0a,	// (0x0005c7d2) cursor_primary_small_pane_g1_copy1

0x5dc6,	// (0x0005498e) cursor_text_primary_small_t1_copy1

0x5da4,	// (0x0005496c) cursor_text_title_t1

0xdc00,	// (0x0005c7c8) cursor_title_pane_g1

0xd58e,	// (0x0005c156) cursor_digital_pane_g1

0x4e42,	// (0x00053a0a) cursor_text_digital_t1

0x5d45,	// (0x0005490d) link_highlight_primary_pane_g1

0x5d4d,	// (0x00054915) link_highlight_primary_pane_t1

0x4e50,	// (0x00053a18) link_highlight_primary_small_pane_g1

0x4e58,	// (0x00053a20) link_highlight_primary_small_pane_t1

0x4e50,	// (0x00053a18) link_highlight_secondary_pane_g1

0x4e67,	// (0x00053a2f) link_highlight_secondary_pane_t1

0x5cb9,	// (0x00054881) link_highlight_title_pane_g1

0x5cc1,	// (0x00054889) link_highlight_title_pane_t1

0x5ca2,	// (0x0005486a) link_highlight_digital_pane_g1

0x5caa,	// (0x00054872) link_highlight_digital_pane_t1

0x5b7a,	// (0x00054742) copy_highlight_primary_pane_g1

0x5b82,	// (0x0005474a) copy_highlight_primary_pane_t1

0x5b54,	// (0x0005471c) copy_highlight_primary_small_pane_g1

0x5b6b,	// (0x00054733) copy_highlight_primary_small_pane_t1

0x4e76,	// (0x00053a3e) copy_highlight_secondary_pane_g1

0x4e7e,	// (0x00053a46) copy_highlight_secondary_pane_t1

0x5b54,	// (0x0005471c) copy_highlight_title_pane_g1

0x5b5c,	// (0x00054724) copy_highlight_title_pane_t1

0x5b7a,	// (0x00054742) copy_highlight_digital_pane_g1

0x6da5,	// (0x0005596d) copy_highlight_digital_pane_t1

0x6cf9,	// (0x000558c1) graphic_text_primary_pane_g1

0x6d89,	// (0x00055951) graphic_text_primary_pane_t1

0x6d97,	// (0x0005595f) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0005e591) graphic_text_primary_pane_t

0x6d65,	// (0x0005592d) graphic_text_primary_small_pane_g1

0x6d6d,	// (0x00055935) graphic_text_primary_small_pane_t1

0x6d7b,	// (0x00055943) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0005e58c) graphic_text_primary_small_pane_t

0x6d41,	// (0x00055909) graphic_text_secondary_pane_g1

0x6d49,	// (0x00055911) graphic_text_secondary_pane_t1

0x6d57,	// (0x0005591f) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0005e587) graphic_text_secondary_pane_t

0x6d1d,	// (0x000558e5) graphic_text_title_pane_g1

0x6d25,	// (0x000558ed) graphic_text_title_pane_t1

0x6d33,	// (0x000558fb) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0005e582) graphic_text_title_pane_t

0x6cf9,	// (0x000558c1) graphic_text_digital_pane_g1

0x6d01,	// (0x000558c9) graphic_text_digital_pane_t1

0x6d0f,	// (0x000558d7) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0005e57d) graphic_text_digital_pane_t

0x381b,	// (0x000523e3) navi_icon_pane_srt_ParamLimits

0x381b,	// (0x000523e3) navi_icon_pane_srt

0x373b,	// (0x00052303) navi_midp_pane_srt

0x373b,	// (0x00052303) navi_navi_pane_srt

0x381b,	// (0x000523e3) navi_text_pane_srt_ParamLimits

0x381b,	// (0x000523e3) navi_text_pane_srt

0x6cc4,	// (0x0005588c) navi_navi_icon_text_pane_srt

0x6ccc,	// (0x00055894) navi_navi_pane_srt_g1_ParamLimits

0x6ccc,	// (0x00055894) navi_navi_pane_srt_g1

0x6cde,	// (0x000558a6) navi_navi_pane_srt_g2_ParamLimits

0x6cde,	// (0x000558a6) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0005e578) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0005e578) navi_navi_pane_srt_g

0x6cf0,	// (0x000558b8) navi_navi_tabs_pane_srt

0x6cc4,	// (0x0005588c) navi_navi_text_pane_srt

0x6cc4,	// (0x0005588c) navi_navi_volume_pane_srt

0x6cb5,	// (0x0005587d) navi_navi_text_pane_srt_t1

0x1ccf,	// (0x00050897) navi_navi_volume_pane_srt_g1

0x1cd7,	// (0x0005089f) volume_small_pane_srt_ParamLimits

0x1cd7,	// (0x0005089f) volume_small_pane_srt

0x1084,	// (0x0004fc4c) volume_small_pane_srt_g1_ParamLimits

0x1084,	// (0x0004fc4c) volume_small_pane_srt_g1

0x1094,	// (0x0004fc5c) volume_small_pane_srt_g2_ParamLimits

0x1094,	// (0x0004fc5c) volume_small_pane_srt_g2

0x10a5,	// (0x0004fc6d) volume_small_pane_srt_g3_ParamLimits

0x10a5,	// (0x0004fc6d) volume_small_pane_srt_g3

0x10b6,	// (0x0004fc7e) volume_small_pane_srt_g4_ParamLimits

0x10b6,	// (0x0004fc7e) volume_small_pane_srt_g4

0x10c7,	// (0x0004fc8f) volume_small_pane_srt_g5_ParamLimits

0x10c7,	// (0x0004fc8f) volume_small_pane_srt_g5

0x10d8,	// (0x0004fca0) volume_small_pane_srt_g6_ParamLimits

0x10d8,	// (0x0004fca0) volume_small_pane_srt_g6

0x10e9,	// (0x0004fcb1) volume_small_pane_srt_g7_ParamLimits

0x10e9,	// (0x0004fcb1) volume_small_pane_srt_g7

0x10fa,	// (0x0004fcc2) volume_small_pane_srt_g8_ParamLimits

0x10fa,	// (0x0004fcc2) volume_small_pane_srt_g8

0x110b,	// (0x0004fcd3) volume_small_pane_srt_g9_ParamLimits

0x110b,	// (0x0004fcd3) volume_small_pane_srt_g9

0x111c,	// (0x0004fce4) volume_small_pane_srt_g10_ParamLimits

0x111c,	// (0x0004fce4) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0005e325) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0005e325) volume_small_pane_srt_g

0x3be9,	// (0x000527b1) query_popup_data_pane_cp2

0x6c9b,	// (0x00055863) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6c9b,	// (0x00055863) navi_navi_icon_text_pane_srt_t1

0x5dfa,	// (0x000549c2) navi_tabs_2_long_pane_srt

0x5dfa,	// (0x000549c2) navi_tabs_2_pane_srt

0x5dfa,	// (0x000549c2) navi_tabs_3_long_pane_srt

0x5dfa,	// (0x000549c2) navi_tabs_3_pane_srt

0x5dfa,	// (0x000549c2) navi_tabs_4_pane_srt

0x1caf,	// (0x00050877) tabs_2_active_pane_srt_ParamLimits

0x1caf,	// (0x00050877) tabs_2_active_pane_srt

0x1cbf,	// (0x00050887) tabs_2_passive_pane_srt_ParamLimits

0x1cbf,	// (0x00050887) tabs_2_passive_pane_srt

0x5595,	// (0x0005415d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5595,	// (0x0005415d) bg_passive_tab_pane_cp1_srt

0x6c67,	// (0x0005582f) bg_passive_tab_pane_g1_cp1_srt

0x492e,	// (0x000534f6) bg_passive_tab_pane_g2_cp1_srt

0x6c70,	// (0x00055838) bg_passive_tab_pane_g3_cp1_srt

0x3a96,	// (0x0005265e) bg_active_tab_pane_cp1_srt_ParamLimits

0x3a96,	// (0x0005265e) bg_active_tab_pane_cp1_srt

0x6c79,	// (0x00055841) tabs_2_active_pane_srt_g1

0xdfd1,	// (0x0005cb99) tabs_2_active_pane_srt_t1_ParamLimits

0xdfd1,	// (0x0005cb99) tabs_2_active_pane_srt_t1

0x6c67,	// (0x0005582f) bg_active_tab_pane_g1_cp1_srt

0x492e,	// (0x000534f6) bg_active_tab_pane_g2_cp1_srt

0x6c70,	// (0x00055838) bg_active_tab_pane_g3_cp1_srt

0x1c7c,	// (0x00050844) tabs_3_active_pane_srt_ParamLimits

0x1c7c,	// (0x00050844) tabs_3_active_pane_srt

0x1c8d,	// (0x00050855) tabs_3_passive_pane_cp_srt_ParamLimits

0x1c8d,	// (0x00050855) tabs_3_passive_pane_cp_srt

0x1c9e,	// (0x00050866) tabs_3_passive_pane_srt_ParamLimits

0x1c9e,	// (0x00050866) tabs_3_passive_pane_srt

0x5595,	// (0x0005415d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5595,	// (0x0005415d) bg_passive_tab_pane_cp2_srt

0x4e8d,	// (0x00053a55) bg_passive_tab_pane_g1_cp2_srt

0x492e,	// (0x000534f6) bg_passive_tab_pane_g2_cp2_srt

0x4e96,	// (0x00053a5e) bg_passive_tab_pane_g3_cp2_srt

0x3a96,	// (0x0005265e) bg_active_tab_pane_cp2_srt_ParamLimits

0x3a96,	// (0x0005265e) bg_active_tab_pane_cp2_srt

0x6c4d,	// (0x00055815) tabs_3_active_pane_srt_g1

0xdfbb,	// (0x0005cb83) tabs_3_active_pane_srt_t1_ParamLimits

0xdfbb,	// (0x0005cb83) tabs_3_active_pane_srt_t1

0x4e8d,	// (0x00053a55) bg_active_tab_pane_g1_cp2_srt

0x492e,	// (0x000534f6) bg_active_tab_pane_g2_cp2_srt

0x4e96,	// (0x00053a5e) bg_active_tab_pane_g3_cp2_srt

0x1c34,	// (0x000507fc) tabs_4_active_pane_srt_ParamLimits

0x1c34,	// (0x000507fc) tabs_4_active_pane_srt

0x1c46,	// (0x0005080e) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1c46,	// (0x0005080e) tabs_4_passive_pane_cp2_srt

0x127f,	// (0x0004fe47) aid_size_cell_toolbar

0x6910,	// (0x000554d8) main_idle_act_pane_ParamLimits

0x143a,	// (0x00050002) popup_large_graphic_colour_window_ParamLimits

0xc5bd,	// (0x0005b185) popup_toolbar_window_ParamLimits

0xc5bd,	// (0x0005b185) popup_toolbar_window

0x6ac0,	// (0x00055688) list_single_graphic_2heading_pane_ParamLimits

0x6ac0,	// (0x00055688) list_single_graphic_2heading_pane

0x4410,	// (0x00052fd8) aid_size_cell_apps_grid_lsc_pane

0x4422,	// (0x00052fea) aid_size_cell_apps_grid_prt_pane

0x5023,	// (0x00053beb) bg_wml_button_pane_cp1_ParamLimits

0x5023,	// (0x00053beb) bg_wml_button_pane_cp1

0xdbb1,	// (0x0005c779) form_midp_field_text_pane_t1_ParamLimits

0x5595,	// (0x0005415d) input_focus_pane_cp050_ParamLimits

0x5818,	// (0x000543e0) list_midp_form_text_pane_ParamLimits

0x57ba,	// (0x00054382) input_focus_pane_cp051_ParamLimits

0x57ce,	// (0x00054396) list_midp_choice_pane_ParamLimits

0xdb45,	// (0x0005c70d) list_single_2graphic_pane_cp3_ParamLimits

0xdb45,	// (0x0005c70d) list_single_2graphic_pane_cp3

0xdb5a,	// (0x0005c722) list_single_midp_graphic_pane_ParamLimits

0xdb5a,	// (0x0005c722) list_single_midp_graphic_pane

0x007a,	// (0x0004ec42) list_single_graphic_2heading_pane_g1_ParamLimits

0x007a,	// (0x0004ec42) list_single_graphic_2heading_pane_g1

0x0086,	// (0x0004ec4e) list_single_graphic_2heading_pane_g4_ParamLimits

0x0086,	// (0x0004ec4e) list_single_graphic_2heading_pane_g4

0x0092,	// (0x0004ec5a) list_single_graphic_2heading_pane_g5_ParamLimits

0x0092,	// (0x0004ec5a) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0005e378) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0005e378) list_single_graphic_2heading_pane_g

0x009e,	// (0x0004ec66) list_single_graphic_2heading_pane_t1_ParamLimits

0x009e,	// (0x0004ec66) list_single_graphic_2heading_pane_t1

0x00b2,	// (0x0004ec7a) list_single_graphic_2heading_pane_t2_ParamLimits

0x00b2,	// (0x0004ec7a) list_single_graphic_2heading_pane_t2

0x00cc,	// (0x0004ec94) list_single_graphic_2heading_pane_t3_ParamLimits

0x00cc,	// (0x0004ec94) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0005e37f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0005e37f) list_single_graphic_2heading_pane_t

0x545f,	// (0x00054027) bg_popup_sub_pane_cp2

0x5489,	// (0x00054051) grid_toobar_pane

0x184a,	// (0x00050412) cell_toolbar_pane_ParamLimits

0x184a,	// (0x00050412) cell_toolbar_pane

0x54c5,	// (0x0005408d) cell_toolbar_pane_g1_ParamLimits

0x54c5,	// (0x0005408d) cell_toolbar_pane_g1

0x54d9,	// (0x000540a1) cell_toolbar_pane_g2_ParamLimits

0x54d9,	// (0x000540a1) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x0005e38d) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x0005e38d) cell_toolbar_pane_g

0x54fb,	// (0x000540c3) grid_highlight_pane_cp2_ParamLimits

0x54fb,	// (0x000540c3) grid_highlight_pane_cp2

0x5515,	// (0x000540dd) toolbar_button_pane

0x5521,	// (0x000540e9) toolbar_button_pane_g1

0x5529,	// (0x000540f1) toolbar_button_pane_g2

0x5531,	// (0x000540f9) toolbar_button_pane_g3

0x5539,	// (0x00054101) toolbar_button_pane_g4

0x5541,	// (0x00054109) toolbar_button_pane_g5

0x5549,	// (0x00054111) toolbar_button_pane_g6

0x5551,	// (0x00054119) toolbar_button_pane_g7

0x5559,	// (0x00054121) toolbar_button_pane_g8

0x5561,	// (0x00054129) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x0005e392) toolbar_button_pane_g

0x18a4,	// (0x0005046c) list_single_2graphic_pane_g1_cp3_ParamLimits

0x18a4,	// (0x0005046c) list_single_2graphic_pane_g1_cp3

0xc615,	// (0x0005b1dd) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc615,	// (0x0005b1dd) list_single_2graphic_pane_g2_cp3

0x18c1,	// (0x00050489) list_single_2graphic_pane_g3_cp3

0x18c9,	// (0x00050491) list_single_2graphic_pane_g4_cp3_ParamLimits

0x18c9,	// (0x00050491) list_single_2graphic_pane_g4_cp3

0x18d5,	// (0x0005049d) list_single_2graphic_pane_t1_cp3_ParamLimits

0x18d5,	// (0x0005049d) list_single_2graphic_pane_t1_cp3

0x1921,	// (0x000504e9) list_single_midp_graphic_pane_g2_ParamLimits

0x1921,	// (0x000504e9) list_single_midp_graphic_pane_g2

0x006a,	// (0x0004ec32) aid_zoom_text_primary

0x0072,	// (0x0004ec3a) aid_zoom_text_secondary

0xd5e6,	// (0x0005c1ae) status_small_pane_g7_ParamLimits

0xd5e6,	// (0x0005c1ae) status_small_pane_g7

0xd609,	// (0x0005c1d1) status_small_pane_t1_ParamLimits

0xcf6a,	// (0x0005bb32) title_pane_g2

0x0003,

0xf54e,	// (0x0005e116) title_pane_g

0xd1e2,	// (0x0005bdaa) aid_size_cell_colour_1_pane_ParamLimits

0xd1e2,	// (0x0005bdaa) aid_size_cell_colour_1_pane

0xd1f6,	// (0x0005bdbe) aid_size_cell_colour_2_pane_ParamLimits

0xd1f6,	// (0x0005bdbe) aid_size_cell_colour_2_pane

0xd20a,	// (0x0005bdd2) aid_size_cell_colour_3_pane_ParamLimits

0xd20a,	// (0x0005bdd2) aid_size_cell_colour_3_pane

0xd21e,	// (0x0005bde6) aid_size_cell_colour_4_pane_ParamLimits

0xd21e,	// (0x0005bde6) aid_size_cell_colour_4_pane

0x0c76,	// (0x0004f83e) title_pane_stacon_g1_ParamLimits

0x0c76,	// (0x0004f83e) title_pane_stacon_g1

0x5bd9,	// (0x000547a1) popup_note_wait_window_g3_ParamLimits

0x5bd9,	// (0x000547a1) popup_note_wait_window_g3

0x5c4f,	// (0x00054817) popup_note_wait_window_t5_ParamLimits

0x5c4f,	// (0x00054817) popup_note_wait_window_t5

0x373b,	// (0x00052303) main_feb_china_hwr_fs_writing_pane

0xbfd9,	// (0x0005aba1) popup_feb_china_hwr_fs_window_ParamLimits

0xbfd9,	// (0x0005aba1) popup_feb_china_hwr_fs_window

0xc626,	// (0x0005b1ee) aid_size_cell_hwr_fs_ParamLimits

0xc626,	// (0x0005b1ee) aid_size_cell_hwr_fs

0x5595,	// (0x0005415d) bg_popup_sub_pane_cp3_ParamLimits

0x5595,	// (0x0005415d) bg_popup_sub_pane_cp3

0xc63b,	// (0x0005b203) grid_hwr_fs_pane_ParamLimits

0xc63b,	// (0x0005b203) grid_hwr_fs_pane

0x199e,	// (0x00050566) linegrid_hwr_fs_pane_ParamLimits

0x199e,	// (0x00050566) linegrid_hwr_fs_pane

0xc653,	// (0x0005b21b) cell_hwr_fs_pane_ParamLimits

0xc653,	// (0x0005b21b) cell_hwr_fs_pane

0x55a1,	// (0x00054169) linegrid_hwr_fs_pane_g1_ParamLimits

0x55a1,	// (0x00054169) linegrid_hwr_fs_pane_g1

0xdb19,	// (0x0005c6e1) linegrid_hwr_fs_pane_g2_ParamLimits

0xdb19,	// (0x0005c6e1) linegrid_hwr_fs_pane_g2

0x55bf,	// (0x00054187) linegrid_hwr_fs_pane_g3_ParamLimits

0x55bf,	// (0x00054187) linegrid_hwr_fs_pane_g3

0x19d0,	// (0x00050598) linegrid_hwr_fs_pane_g4_ParamLimits

0x19d0,	// (0x00050598) linegrid_hwr_fs_pane_g4

0x19ea,	// (0x000505b2) linegrid_hwr_fs_pane_g5_ParamLimits

0x19ea,	// (0x000505b2) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0005e3b8) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0005e3b8) linegrid_hwr_fs_pane_g

0x55cb,	// (0x00054193) cell_hwr_fs_pane_g1_ParamLimits

0x55cb,	// (0x00054193) cell_hwr_fs_pane_g1

0x5396,	// (0x00053f5e) cell_hwr_fs_pane_g2_ParamLimits

0x5396,	// (0x00053f5e) cell_hwr_fs_pane_g2

0xdb2b,	// (0x0005c6f3) cell_hwr_fs_pane_g3_ParamLimits

0xdb2b,	// (0x0005c6f3) cell_hwr_fs_pane_g3

0xdb38,	// (0x0005c700) cell_hwr_fs_pane_g4_ParamLimits

0xdb38,	// (0x0005c700) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0005e3c3) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0005e3c3) cell_hwr_fs_pane_g

0xc679,	// (0x0005b241) cell_hwr_fs_pane_t1

0x373b,	// (0x00052303) grid_highlight_pane_cp6

0x373b,	// (0x00052303) main_idle_act2_pane

0x41ca,	// (0x00052d92) aid_inside_area_popup_secondary

0xdc26,	// (0x0005c7ee) aid_inside_area_window_primary_ParamLimits

0xdc26,	// (0x0005c7ee) aid_inside_area_window_primary

0x6db4,	// (0x0005597c) ai2_news_ticker_pane

0x6dbc,	// (0x00055984) aid_size_cell_ai1_link_ParamLimits

0x6dbc,	// (0x00055984) aid_size_cell_ai1_link

0x6dd6,	// (0x0005599e) popup_ai2_data_window_ParamLimits

0x6dd6,	// (0x0005599e) popup_ai2_data_window

0x6dea,	// (0x000559b2) popup_ai2_link_window_ParamLimits

0x6dea,	// (0x000559b2) popup_ai2_link_window

0x5595,	// (0x0005415d) bg_popup_sub_pane_cp4_ParamLimits

0x5595,	// (0x0005415d) bg_popup_sub_pane_cp4

0x6dfe,	// (0x000559c6) grid_ai2_link_pane_ParamLimits

0x6dfe,	// (0x000559c6) grid_ai2_link_pane

0x6e15,	// (0x000559dd) popup_ai2_link_window_g1_ParamLimits

0x6e15,	// (0x000559dd) popup_ai2_link_window_g1

0x6e21,	// (0x000559e9) popup_ai2_link_window_g2_ParamLimits

0x6e21,	// (0x000559e9) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0005e596) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0005e596) popup_ai2_link_window_g

0x6e30,	// (0x000559f8) ai2_mp_button_pane

0x6e38,	// (0x00055a00) ai2_mp_volume_pane

0x57ba,	// (0x00054382) bg_popup_sub_pane_cp5_ParamLimits

0x57ba,	// (0x00054382) bg_popup_sub_pane_cp5

0x6e40,	// (0x00055a08) heading_ai2_gene_pane_ParamLimits

0x6e40,	// (0x00055a08) heading_ai2_gene_pane

0x6e4c,	// (0x00055a14) list_ai2_gene_pane_ParamLimits

0x6e4c,	// (0x00055a14) list_ai2_gene_pane

0x6e94,	// (0x00055a5c) cell_ai2_link_pane_ParamLimits

0x6e94,	// (0x00055a5c) cell_ai2_link_pane

0x6eaa,	// (0x00055a72) cell_ai2_link_pane_g1

0x373b,	// (0x00052303) grid_highlight_pane_cp7

0x1cec,	// (0x000508b4) ai2_mp_volume_pane_g1

0x6f7b,	// (0x00055b43) ai2_mp_volume_pane_g2

0x6ef0,	// (0x00055ab8) list_ai2_gene_pane_t1

0x6f83,	// (0x00055b4b) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0005e5af) ai2_mp_volume_pane_g

0x1cf4,	// (0x000508bc) volume_small_pane_cp3

0x6f8b,	// (0x00055b53) aid_size_cell_ai2_button

0x6f93,	// (0x00055b5b) grid_ai2_button_pane

0x6f9c,	// (0x00055b64) cell_ai2_button_pane_ParamLimits

0x6f9c,	// (0x00055b64) cell_ai2_button_pane

0x3731,	// (0x000522f9) cell_ai2_button_pane_g1

0x373b,	// (0x00052303) grid_highlight_pane_cp8

0x6f3b,	// (0x00055b03) ai2_gene_pane_t1_ParamLimits

0x6f3b,	// (0x00055b03) ai2_gene_pane_t1

0xbf67,	// (0x0005ab2f) aid_height_parent_landscape

0xdd71,	// (0x0005c939) aid_height_set_list

0x6910,	// (0x000554d8) aid_size_parent

0x6bda,	// (0x000557a2) aid_size_cell_graphic_pane_ParamLimits

0x6e5c,	// (0x00055a24) popup_ai2_data_window_g1_ParamLimits

0x6e5c,	// (0x00055a24) popup_ai2_data_window_g1

0x6e68,	// (0x00055a30) ai2_news_ticker_pane_g1

0x6e70,	// (0x00055a38) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0005e59b) ai2_news_ticker_pane_g

0x6e78,	// (0x00055a40) ai2_news_ticker_pane_t1

0x6e86,	// (0x00055a4e) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0005e5a0) ai2_news_ticker_pane_t

0x6eb3,	// (0x00055a7b) heading_ai2_gene_pane_g1

0x6ebb,	// (0x00055a83) heading_ai2_gene_pane_t1_ParamLimits

0x6ebb,	// (0x00055a83) heading_ai2_gene_pane_t1

0x6ed0,	// (0x00055a98) list_highlight_pane_cp6

0x6ed8,	// (0x00055aa0) ai2_gene_pane_ParamLimits

0x6ed8,	// (0x00055aa0) ai2_gene_pane

0x6efe,	// (0x00055ac6) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0005e5a5) list_ai2_gene_pane_t

0x6f0c,	// (0x00055ad4) list_highlight_pane_cp8_ParamLimits

0x6f0c,	// (0x00055ad4) list_highlight_pane_cp8

0x6f1d,	// (0x00055ae5) ai2_gene_pane_g1_ParamLimits

0x6f1d,	// (0x00055ae5) ai2_gene_pane_g1

0x6f2f,	// (0x00055af7) ai2_gene_pane_g2_ParamLimits

0x6f2f,	// (0x00055af7) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0005e5aa) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0005e5aa) ai2_gene_pane_g

0x400b,	// (0x00052bd3) scroll_pane_cp12

0xbf26,	// (0x0005aaee) control_pane_t3_ParamLimits

0xbf26,	// (0x0005aaee) control_pane_t3

0xd5fa,	// (0x0005c1c2) status_small_pane_g8_ParamLimits

0xd5fa,	// (0x0005c1c2) status_small_pane_g8

0xc06c,	// (0x0005ac34) popup_find_window_ParamLimits

0xc2ed,	// (0x0005aeb5) popup_note_image_window_ParamLimits

0x187a,	// (0x00050442) list_double2_graphic_pane_vc_g1_ParamLimits

0x187a,	// (0x00050442) list_double2_graphic_pane_vc_g1

0x2da9,	// (0x00051971) list_double2_graphic_pane_vc_g2_ParamLimits

0x2da9,	// (0x00051971) list_double2_graphic_pane_vc_g2

0x2db5,	// (0x0005197d) list_double2_graphic_pane_vc_g3_ParamLimits

0x2db5,	// (0x0005197d) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x0005e386) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x0005e386) list_double2_graphic_pane_vc_g

0x1886,	// (0x0005044e) list_double2_graphic_pane_vc_t1_ParamLimits

0x1886,	// (0x0005044e) list_double2_graphic_pane_vc_t1

0x2da9,	// (0x00051971) list_single_heading_pane_vc_g1_ParamLimits

0x2da9,	// (0x00051971) list_single_heading_pane_vc_g1

0x2db5,	// (0x0005197d) list_single_heading_pane_vc_g2_ParamLimits

0x2db5,	// (0x0005197d) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005e19a) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005e19a) list_single_heading_pane_vc_g

0x18ef,	// (0x000504b7) list_single_heading_pane_vc_t1_ParamLimits

0x18ef,	// (0x000504b7) list_single_heading_pane_vc_t1

0x1905,	// (0x000504cd) list_single_heading_pane_vc_t2_ParamLimits

0x1905,	// (0x000504cd) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0005e3a7) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0005e3a7) list_single_heading_pane_vc_t

0x48e0,	// (0x000534a8) list_setting_number_pane_vc_g1_ParamLimits

0x48e0,	// (0x000534a8) list_setting_number_pane_vc_g1

0x48ec,	// (0x000534b4) list_setting_number_pane_vc_g2_ParamLimits

0x48ec,	// (0x000534b4) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005e3ac) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005e3ac) list_setting_number_pane_vc_g

0x1943,	// (0x0005050b) list_setting_number_pane_vc_t1_ParamLimits

0x1943,	// (0x0005050b) list_setting_number_pane_vc_t1

0x1957,	// (0x0005051f) list_setting_number_pane_vc_t2_ParamLimits

0x1957,	// (0x0005051f) list_setting_number_pane_vc_t2

0x2e71,	// (0x00051a39) list_setting_number_pane_vc_t3_ParamLimits

0x2e71,	// (0x00051a39) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0005e3b1) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0005e3b1) list_setting_number_pane_vc_t

0x2e99,	// (0x00051a61) set_value_pane_vc_ParamLimits

0x2e99,	// (0x00051a61) set_value_pane_vc

0x6ac0,	// (0x00055688) list_double2_graphic_pane_vc_ParamLimits

0x6ac0,	// (0x00055688) list_double2_graphic_pane_vc

0x2f5e,	// (0x00051b26) list_double2_large_graphic_pane_vc_ParamLimits

0x2f5e,	// (0x00051b26) list_double2_large_graphic_pane_vc

0x6ac0,	// (0x00055688) list_double2_pane_vc_ParamLimits

0x6ac0,	// (0x00055688) list_double2_pane_vc

0x6ac0,	// (0x00055688) list_double_graphic_heading_pane_vc_ParamLimits

0x6ac0,	// (0x00055688) list_double_graphic_heading_pane_vc

0x6ac0,	// (0x00055688) list_double_graphic_pane_vc_ParamLimits

0x6ac0,	// (0x00055688) list_double_graphic_pane_vc

0x6ac0,	// (0x00055688) list_double_heading_pane_vc_ParamLimits

0x6ac0,	// (0x00055688) list_double_heading_pane_vc

0x2f70,	// (0x00051b38) list_double_large_graphic_pane_vc_ParamLimits

0x2f70,	// (0x00051b38) list_double_large_graphic_pane_vc

0x6ac0,	// (0x00055688) list_double_number_pane_vc_ParamLimits

0x6ac0,	// (0x00055688) list_double_number_pane_vc

0x6ac0,	// (0x00055688) list_double_pane_vc_ParamLimits

0x6ac0,	// (0x00055688) list_double_pane_vc

0x6ac0,	// (0x00055688) list_double_time_pane_vc_ParamLimits

0x6ac0,	// (0x00055688) list_double_time_pane_vc

0x6ac0,	// (0x00055688) list_setting_number_pane_vc_ParamLimits

0x6ac0,	// (0x00055688) list_setting_number_pane_vc

0x6ac0,	// (0x00055688) list_setting_pane_vc_ParamLimits

0x6ac0,	// (0x00055688) list_setting_pane_vc

0x6ac0,	// (0x00055688) list_single_graphic_heading_pane_vc_ParamLimits

0x6ac0,	// (0x00055688) list_single_graphic_heading_pane_vc

0x6ac0,	// (0x00055688) list_single_heading_pane_vc_ParamLimits

0x6ac0,	// (0x00055688) list_single_heading_pane_vc

0x6ac0,	// (0x00055688) list_single_number_heading_pane_vc_ParamLimits

0x6ac0,	// (0x00055688) list_single_number_heading_pane_vc

0x187a,	// (0x00050442) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x187a,	// (0x00050442) list_double_graphic_heading_pane_vc_g1

0x2da9,	// (0x00051971) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x2da9,	// (0x00051971) list_double_graphic_heading_pane_vc_g2

0x2db5,	// (0x0005197d) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2db5,	// (0x0005197d) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7be,	// (0x0005e386) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0005e386) list_double_graphic_heading_pane_vc_g

0x3054,	// (0x00051c1c) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3054,	// (0x00051c1c) list_double_graphic_heading_pane_vc_t1

0x3070,	// (0x00051c38) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3070,	// (0x00051c38) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ee,	// (0x0005e5b6) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ee,	// (0x0005e5b6) list_double_graphic_heading_pane_vc_t

0x48e0,	// (0x000534a8) list_setting_pane_vc_g1_ParamLimits

0x48e0,	// (0x000534a8) list_setting_pane_vc_g1

0x48ec,	// (0x000534b4) list_setting_pane_vc_g2_ParamLimits

0x48ec,	// (0x000534b4) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005e3ac) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005e3ac) list_setting_pane_vc_g

0x3088,	// (0x00051c50) list_setting_pane_vc_t1_ParamLimits

0x3088,	// (0x00051c50) list_setting_pane_vc_t1

0x30a2,	// (0x00051c6a) list_setting_pane_vc_t2_ParamLimits

0x30a2,	// (0x00051c6a) list_setting_pane_vc_t2

0x0001,

0xfa31,	// (0x0005e5f9) list_setting_pane_vc_t_ParamLimits

0xfa31,	// (0x0005e5f9) list_setting_pane_vc_t

0x2e99,	// (0x00051a61) set_value_pane_cp_vc_ParamLimits

0x2e99,	// (0x00051a61) set_value_pane_cp_vc

0x2da9,	// (0x00051971) list_single_number_heading_pane_vc_g1_ParamLimits

0x2da9,	// (0x00051971) list_single_number_heading_pane_vc_g1

0x2db5,	// (0x0005197d) list_single_number_heading_pane_vc_g2_ParamLimits

0x2db5,	// (0x0005197d) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005e19a) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005e19a) list_single_number_heading_pane_vc_g

0x18ef,	// (0x000504b7) list_single_number_heading_pane_vc_t1_ParamLimits

0x18ef,	// (0x000504b7) list_single_number_heading_pane_vc_t1

0x30ba,	// (0x00051c82) list_single_number_heading_pane_vc_t2_ParamLimits

0x30ba,	// (0x00051c82) list_single_number_heading_pane_vc_t2

0x05ec,	// (0x0004f1b4) list_single_number_heading_pane_vc_t3_ParamLimits

0x05ec,	// (0x0004f1b4) list_single_number_heading_pane_vc_t3

0x0002,

0xfa36,	// (0x0005e5fe) list_single_number_heading_pane_vc_t_ParamLimits

0xfa36,	// (0x0005e5fe) list_single_number_heading_pane_vc_t

0x187a,	// (0x00050442) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x187a,	// (0x00050442) list_single_graphic_heading_pane_vc_g1

0x2da9,	// (0x00051971) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2da9,	// (0x00051971) list_single_graphic_heading_pane_vc_g4

0x2db5,	// (0x0005197d) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2db5,	// (0x0005197d) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x0005e386) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0005e386) list_single_graphic_heading_pane_vc_g

0x18ef,	// (0x000504b7) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x18ef,	// (0x000504b7) list_single_graphic_heading_pane_vc_t1

0x30ce,	// (0x00051c96) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x30ce,	// (0x00051c96) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3d,	// (0x0005e605) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x0005e605) list_single_graphic_heading_pane_vc_t

0x2da9,	// (0x00051971) list_double2_pane_vc_g1_ParamLimits

0x2da9,	// (0x00051971) list_double2_pane_vc_g1

0x2db5,	// (0x0005197d) list_double2_pane_vc_g2_ParamLimits

0x2db5,	// (0x0005197d) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005e19a) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005e19a) list_double2_pane_vc_g

0x2f2c,	// (0x00051af4) list_double2_pane_vc_t1_ParamLimits

0x2f2c,	// (0x00051af4) list_double2_pane_vc_t1

0x30e2,	// (0x00051caa) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x30e2,	// (0x00051caa) list_double2_large_graphic_pane_vc_g1

0x30ee,	// (0x00051cb6) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x30ee,	// (0x00051cb6) list_double2_large_graphic_pane_vc_g2

0x30fa,	// (0x00051cc2) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x30fa,	// (0x00051cc2) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0005e1b2) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0005e1b2) list_double2_large_graphic_pane_vc_g

0x3106,	// (0x00051cce) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3106,	// (0x00051cce) list_double2_large_graphic_pane_vc_t1

0x311c,	// (0x00051ce4) list_double_time_pane_vc_g1_ParamLimits

0x311c,	// (0x00051ce4) list_double_time_pane_vc_g1

0x3128,	// (0x00051cf0) list_double_time_pane_vc_g2_ParamLimits

0x3128,	// (0x00051cf0) list_double_time_pane_vc_g2

0x0001,

0xfa42,	// (0x0005e60a) list_double_time_pane_vc_g_ParamLimits

0xfa42,	// (0x0005e60a) list_double_time_pane_vc_g

0x3134,	// (0x00051cfc) list_double_time_pane_vc_t1_ParamLimits

0x3134,	// (0x00051cfc) list_double_time_pane_vc_t1

0x3152,	// (0x00051d1a) list_double_time_pane_vc_t2_ParamLimits

0x3152,	// (0x00051d1a) list_double_time_pane_vc_t2

0x319c,	// (0x00051d64) list_double_time_pane_vc_t3_ParamLimits

0x319c,	// (0x00051d64) list_double_time_pane_vc_t3

0x31ae,	// (0x00051d76) list_double_time_pane_vc_t4_ParamLimits

0x31ae,	// (0x00051d76) list_double_time_pane_vc_t4

0x0003,

0xfa47,	// (0x0005e60f) list_double_time_pane_vc_t_ParamLimits

0xfa47,	// (0x0005e60f) list_double_time_pane_vc_t

0x2da9,	// (0x00051971) list_double_pane_vc_g1_ParamLimits

0x2da9,	// (0x00051971) list_double_pane_vc_g1

0x2db5,	// (0x0005197d) list_double_pane_vc_g2_ParamLimits

0x2db5,	// (0x0005197d) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005e19a) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005e19a) list_double_pane_vc_g

0x31c2,	// (0x00051d8a) list_double_pane_vc_t1_ParamLimits

0x31c2,	// (0x00051d8a) list_double_pane_vc_t1

0x31d4,	// (0x00051d9c) list_double_pane_vc_t2_ParamLimits

0x31d4,	// (0x00051d9c) list_double_pane_vc_t2

0x0001,

0xfa50,	// (0x0005e618) list_double_pane_vc_t_ParamLimits

0xfa50,	// (0x0005e618) list_double_pane_vc_t

0x2da9,	// (0x00051971) list_double_number_pane_vc_g1_ParamLimits

0x2da9,	// (0x00051971) list_double_number_pane_vc_g1

0x2db5,	// (0x0005197d) list_double_number_pane_vc_g2_ParamLimits

0x2db5,	// (0x0005197d) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005e19a) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005e19a) list_double_number_pane_vc_g

0x31ec,	// (0x00051db4) list_double_number_pane_vc_t1_ParamLimits

0x31ec,	// (0x00051db4) list_double_number_pane_vc_t1

0x31fe,	// (0x00051dc6) list_double_number_pane_vc_t2_ParamLimits

0x31fe,	// (0x00051dc6) list_double_number_pane_vc_t2

0x3210,	// (0x00051dd8) list_double_number_pane_vc_t3_ParamLimits

0x3210,	// (0x00051dd8) list_double_number_pane_vc_t3

0x0002,

0xfa55,	// (0x0005e61d) list_double_number_pane_vc_t_ParamLimits

0xfa55,	// (0x0005e61d) list_double_number_pane_vc_t

0x3228,	// (0x00051df0) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3228,	// (0x00051df0) list_double_large_graphic_pane_vc_g1

0x3244,	// (0x00051e0c) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3244,	// (0x00051e0c) list_double_large_graphic_pane_vc_g2

0x3258,	// (0x00051e20) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3258,	// (0x00051e20) list_double_large_graphic_pane_vc_g3

0x3267,	// (0x00051e2f) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3267,	// (0x00051e2f) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5c,	// (0x0005e624) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5c,	// (0x0005e624) list_double_large_graphic_pane_vc_g

0x3276,	// (0x00051e3e) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3276,	// (0x00051e3e) list_double_large_graphic_pane_vc_t1

0x3290,	// (0x00051e58) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3290,	// (0x00051e58) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa65,	// (0x0005e62d) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa65,	// (0x0005e62d) list_double_large_graphic_pane_vc_t

0x2da9,	// (0x00051971) list_double_heading_pane_vc_g1_ParamLimits

0x2da9,	// (0x00051971) list_double_heading_pane_vc_g1

0x2db5,	// (0x0005197d) list_double_heading_pane_vc_g2_ParamLimits

0x2db5,	// (0x0005197d) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005e19a) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005e19a) list_double_heading_pane_vc_g

0x32b2,	// (0x00051e7a) list_double_heading_pane_vc_t1_ParamLimits

0x32b2,	// (0x00051e7a) list_double_heading_pane_vc_t1

0x18ef,	// (0x000504b7) list_double_heading_pane_vc_t2_ParamLimits

0x18ef,	// (0x000504b7) list_double_heading_pane_vc_t2

0x0001,

0xfa6a,	// (0x0005e632) list_double_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x0005e632) list_double_heading_pane_vc_t

0x32c6,	// (0x00051e8e) list_double_graphic_pane_vc_g1_ParamLimits

0x32c6,	// (0x00051e8e) list_double_graphic_pane_vc_g1

0x32d2,	// (0x00051e9a) list_double_graphic_pane_vc_g2_ParamLimits

0x32d2,	// (0x00051e9a) list_double_graphic_pane_vc_g2

0x2da9,	// (0x00051971) list_double_graphic_pane_vc_g3_ParamLimits

0x2da9,	// (0x00051971) list_double_graphic_pane_vc_g3

0x0003,

0xfa6f,	// (0x0005e637) list_double_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x0005e637) list_double_graphic_pane_vc_g

0x32ef,	// (0x00051eb7) list_double_graphic_pane_vc_t1_ParamLimits

0x32ef,	// (0x00051eb7) list_double_graphic_pane_vc_t1

0x330d,	// (0x00051ed5) list_double_graphic_pane_vc_t2_ParamLimits

0x330d,	// (0x00051ed5) list_double_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x0005e640) list_double_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x0005e640) list_double_graphic_pane_vc_t

0x00fc,	// (0x0004ecc4) aid_size_cell_fastswap

0xb6c0,	// (0x0005a288) aid_size_cell_touch_ParamLimits

0xb6c0,	// (0x0005a288) aid_size_cell_touch

0x0369,	// (0x0004ef31) popup_fast_swap_wide_window_ParamLimits

0x0369,	// (0x0004ef31) popup_fast_swap_wide_window

0xb870,	// (0x0005a438) touch_pane_ParamLimits

0xb870,	// (0x0005a438) touch_pane

0x406d,	// (0x00052c35) button_value_adjust_pane_cp2

0x09ed,	// (0x0004f5b5) button_value_adjust_pane_cp4

0x0a0f,	// (0x0004f5d7) form_field_data_pane_cp2

0xbcaa,	// (0x0005a872) form_field_data_wide_pane_cp2

0x44d9,	// (0x000530a1) bg_scroll_pane_ParamLimits

0x0dd9,	// (0x0004f9a1) scroll_handle_pane_ParamLimits

0x0ded,	// (0x0004f9b5) scroll_sc2_down_pane_ParamLimits

0x0ded,	// (0x0004f9b5) scroll_sc2_down_pane

0x450a,	// (0x000530d2) scroll_sc2_up_pane_ParamLimits

0x450a,	// (0x000530d2) scroll_sc2_up_pane

0xe0f9,	// (0x0005ccc1) grid_wheel_folder_pane_g1_ParamLimits

0xe0f9,	// (0x0005ccc1) grid_wheel_folder_pane_g1

0x101c,	// (0x0004fbe4) clock_nsta_pane_cp2_ParamLimits

0x101c,	// (0x0004fbe4) clock_nsta_pane_cp2

0x5023,	// (0x00053beb) listscroll_midp_pane_ParamLimits

0xd4f1,	// (0x0005c0b9) midp_canvas_pane

0x4fd5,	// (0x00053b9d) nsta_clock_indic_pane

0x5009,	// (0x00053bd1) listscroll_form_pane_vc

0x5011,	// (0x00053bd9) listscroll_set_pane_vc_ParamLimits

0x5011,	// (0x00053bd9) listscroll_set_pane_vc

0xd77a,	// (0x0005c342) clock_nsta_pane

0xd7a4,	// (0x0005c36c) indicator_nsta_pane

0x545f,	// (0x00054027) bg_popup_sub_pane_cp2_ParamLimits

0x5473,	// (0x0005403b) find_pane_cp2_ParamLimits

0x5473,	// (0x0005403b) find_pane_cp2

0x5489,	// (0x00054051) grid_toobar_pane_ParamLimits

0x5569,	// (0x00054131) list_form_gen_pane_vc_ParamLimits

0x5569,	// (0x00054131) list_form_gen_pane_vc

0x557f,	// (0x00054147) scroll_pane_cp8_vc_ParamLimits

0x557f,	// (0x00054147) scroll_pane_cp8_vc

0x55fb,	// (0x000541c3) data_form_wide_pane_vc_ParamLimits

0x55fb,	// (0x000541c3) data_form_wide_pane_vc

0x5607,	// (0x000541cf) form_field_data_wide_pane_vc_g1

0x560f,	// (0x000541d7) form_field_data_wide_pane_vc_t1_ParamLimits

0x560f,	// (0x000541d7) form_field_data_wide_pane_vc_t1

0x4081,	// (0x00052c49) input_focus_pane_cp6_vc_ParamLimits

0x4081,	// (0x00052c49) input_focus_pane_cp6_vc

0xdbd4,	// (0x0005c79c) list_midp_pane_ParamLimits

0x6c41,	// (0x00055809) scroll_pane_cp16_ParamLimits

0x6c41,	// (0x00055809) scroll_pane_cp16

0x59a7,	// (0x0005456f) button_value_adjust_pane_ParamLimits

0x59a7,	// (0x0005456f) button_value_adjust_pane

0xdd82,	// (0x0005c94a) button_value_adjust_pane_cp6_ParamLimits

0xdd82,	// (0x0005c94a) button_value_adjust_pane_cp6

0xde98,	// (0x0005ca60) settings_code_pane_cp_ParamLimits

0xde98,	// (0x0005ca60) settings_code_pane_cp

0x3731,	// (0x000522f9) cell_touch_pane_g1

0x3731,	// (0x000522f9) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0005e2cb) cell_touch_pane_g

0xdfe7,	// (0x0005cbaf) cell_touch_pane_cp_ParamLimits

0xdfe7,	// (0x0005cbaf) cell_touch_pane_cp

0xe003,	// (0x0005cbcb) cell_touch_pane_ParamLimits

0xe003,	// (0x0005cbcb) cell_touch_pane

0x3731,	// (0x000522f9) scroll_sc2_down_pane_g1

0x3731,	// (0x000522f9) scroll_sc2_up_pane_g1

0x373b,	// (0x00052303) bg_set_opt_pane_cp4_vc

0x6fcf,	// (0x00055b97) list_set_graphic_pane_vc_g1_ParamLimits

0x6fcf,	// (0x00055b97) list_set_graphic_pane_vc_g1

0x5b34,	// (0x000546fc) list_set_graphic_pane_vc_g2_ParamLimits

0x5b34,	// (0x000546fc) list_set_graphic_pane_vc_g2

0x0001,

0xf9f3,	// (0x0005e5bb) list_set_graphic_pane_vc_g_ParamLimits

0xf9f3,	// (0x0005e5bb) list_set_graphic_pane_vc_g

0x6fdb,	// (0x00055ba3) text_primary_small_cp13_vc_ParamLimits

0x6fdb,	// (0x00055ba3) text_primary_small_cp13_vc

0x6ff3,	// (0x00055bbb) list_set_graphic_pane_vc_ParamLimits

0x6ff3,	// (0x00055bbb) list_set_graphic_pane_vc

0x373b,	// (0x00052303) input_focus_pane_cp2_vc

0x3731,	// (0x000522f9) setting_code_pane_vc_g1

0x3866,	// (0x0005242e) setting_code_pane_vc_t1

0x7007,	// (0x00055bcf) set_text_pane_vc_t1_ParamLimits

0x7007,	// (0x00055bcf) set_text_pane_vc_t1

0x373b,	// (0x00052303) input_focus_pane_cp1_vc

0x7024,	// (0x00055bec) list_set_text_pane_vc

0x3731,	// (0x000522f9) setting_text_pane_vc_g1

0x373b,	// (0x00052303) bg_set_opt_pane_cp2_vc

0x385d,	// (0x00052425) setting_slider_graphic_pane_vc_g1

0x702e,	// (0x00055bf6) setting_slider_graphic_pane_vc_t1

0x703e,	// (0x00055c06) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f8,	// (0x0005e5c0) setting_slider_graphic_pane_vc_t

0x704e,	// (0x00055c16) slider_set_pane_cp_vc

0x7056,	// (0x00055c1e) slider_set_pane_vc_g1

0x705f,	// (0x00055c27) slider_set_pane_vc_g2

0x0006,

0xf9fd,	// (0x0005e5c5) slider_set_pane_vc_g

0x40d0,	// (0x00052c98) set_opt_bg_pane_g1_copy1

0x40d8,	// (0x00052ca0) set_opt_bg_pane_g2_copy1

0x708b,	// (0x00055c53) set_opt_bg_pane_g3_copy1

0x40e8,	// (0x00052cb0) set_opt_bg_pane_g4_copy1

0x40f0,	// (0x00052cb8) set_opt_bg_pane_g5_copy1

0x40f8,	// (0x00052cc0) set_opt_bg_pane_g6_copy1

0x7093,	// (0x00055c5b) set_opt_bg_pane_g7_copy1

0x709d,	// (0x00055c65) set_opt_bg_pane_g8_copy1

0x70a5,	// (0x00055c6d) set_opt_bg_pane_g9_copy1

0x373b,	// (0x00052303) bg_set_opt_pane_cp_vc

0x70ad,	// (0x00055c75) setting_slider_pane_vc_t1

0x70bc,	// (0x00055c84) setting_slider_pane_vc_t2

0x70cc,	// (0x00055c94) setting_slider_pane_vc_t3

0x0002,

0xfa0c,	// (0x0005e5d4) setting_slider_pane_vc_t

0x70dc,	// (0x00055ca4) slider_set_pane_vc

0x1a0e,	// (0x000505d6) volume_set_pane_vc_g1

0x1cfd,	// (0x000508c5) volume_set_pane_vc_g2

0x1d06,	// (0x000508ce) volume_set_pane_vc_g3

0x1d0f,	// (0x000508d7) volume_set_pane_vc_g4

0x1d18,	// (0x000508e0) volume_set_pane_vc_g5

0x1d21,	// (0x000508e9) volume_set_pane_vc_g6

0x1a3b,	// (0x00050603) volume_set_pane_vc_g7

0x1d2a,	// (0x000508f2) volume_set_pane_vc_g8

0x1d33,	// (0x000508fb) volume_set_pane_vc_g9

0x1d3c,	// (0x00050904) volume_set_pane_vc_g10

0x0009,

0xfa13,	// (0x0005e5db) volume_set_pane_vc_g

0x70e4,	// (0x00055cac) volume_set_pane_vc

0x70ec,	// (0x00055cb4) button_value_adjust_pane_cp1_vc

0x70f6,	// (0x00055cbe) list_highlight_pane_cp2_vc

0x70ff,	// (0x00055cc7) list_set_pane_vc_ParamLimits

0x70ff,	// (0x00055cc7) list_set_pane_vc

0x715d,	// (0x00055d25) main_pane_set_vc_t1_ParamLimits

0x715d,	// (0x00055d25) main_pane_set_vc_t1

0x7172,	// (0x00055d3a) main_pane_set_vc_t2_ParamLimits

0x7172,	// (0x00055d3a) main_pane_set_vc_t2

0x7184,	// (0x00055d4c) main_pane_set_vc_t3_ParamLimits

0x7184,	// (0x00055d4c) main_pane_set_vc_t3

0x7196,	// (0x00055d5e) main_pane_set_vc_t4_ParamLimits

0x7196,	// (0x00055d5e) main_pane_set_vc_t4

0x0003,

0xfa28,	// (0x0005e5f0) main_pane_set_vc_t_ParamLimits

0xfa28,	// (0x0005e5f0) main_pane_set_vc_t

0x71a8,	// (0x00055d70) setting_code_pane_vc_ParamLimits

0x71a8,	// (0x00055d70) setting_code_pane_vc

0x71b7,	// (0x00055d7f) setting_slider_graphic_pane_vc

0x71b7,	// (0x00055d7f) setting_slider_pane_vc

0x71b7,	// (0x00055d7f) setting_text_pane_vc

0x71b7,	// (0x00055d7f) setting_volume_pane_vc

0x71bf,	// (0x00055d87) scroll_pane_cp121_vc

0x405b,	// (0x00052c23) set_content_pane_vc

0x71c7,	// (0x00055d8f) button_value_adjust_pane_g1

0x71d0,	// (0x00055d98) button_value_adjust_pane_g2

0x0001,

0xfa7d,	// (0x0005e645) button_value_adjust_pane_g

0x71d9,	// (0x00055da1) form_field_slider_wide_pane_vc_t1_ParamLimits

0x71d9,	// (0x00055da1) form_field_slider_wide_pane_vc_t1

0x71ed,	// (0x00055db5) form_field_slider_wide_pane_vc_t2_ParamLimits

0x71ed,	// (0x00055db5) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa82,	// (0x0005e64a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa82,	// (0x0005e64a) form_field_slider_wide_pane_vc_t

0x3a96,	// (0x0005265e) input_focus_pane_cp10_vc_ParamLimits

0x3a96,	// (0x0005265e) input_focus_pane_cp10_vc

0x7219,	// (0x00055de1) slider_cont_pane_cp1_vc_ParamLimits

0x7219,	// (0x00055de1) slider_cont_pane_cp1_vc

0x7229,	// (0x00055df1) slider_form_pane_g1_cp2

0x705f,	// (0x00055c27) slider_form_pane_g2_cp2

0x7256,	// (0x00055e1e) form_field_slider_pane_vc_t3

0x7264,	// (0x00055e2c) form_field_slider_pane_vc_t4

0x7272,	// (0x00055e3a) slider_form_pane_vc_ParamLimits

0x7272,	// (0x00055e3a) slider_form_pane_vc

0x727f,	// (0x00055e47) form_field_slider_pane_vc_t1_ParamLimits

0x727f,	// (0x00055e47) form_field_slider_pane_vc_t1

0x71ed,	// (0x00055db5) form_field_slider_pane_vc_t2_ParamLimits

0x71ed,	// (0x00055db5) form_field_slider_pane_vc_t2

0x0001,

0xfa94,	// (0x0005e65c) form_field_slider_pane_vc_t_ParamLimits

0xfa94,	// (0x0005e65c) form_field_slider_pane_vc_t

0x3a96,	// (0x0005265e) input_focus_pane_cp9_vc_ParamLimits

0x3a96,	// (0x0005265e) input_focus_pane_cp9_vc

0x729b,	// (0x00055e63) slider_cont_pane_vc_ParamLimits

0x729b,	// (0x00055e63) slider_cont_pane_vc

0x72ad,	// (0x00055e75) list_form_graphic_pane_cp_vc_ParamLimits

0x72ad,	// (0x00055e75) list_form_graphic_pane_cp_vc

0x5607,	// (0x000541cf) form_field_popup_wide_pane_vc_g1

0x72c2,	// (0x00055e8a) form_field_popup_wide_pane_vc_t1_ParamLimits

0x72c2,	// (0x00055e8a) form_field_popup_wide_pane_vc_t1

0x4081,	// (0x00052c49) input_focus_pane_cp8_vc_ParamLimits

0x4081,	// (0x00052c49) input_focus_pane_cp8_vc

0x7307,	// (0x00055ecf) list_form_wide_pane_vc_ParamLimits

0x7307,	// (0x00055ecf) list_form_wide_pane_vc

0x7313,	// (0x00055edb) list_form_graphic_pane_vc_g1

0x731b,	// (0x00055ee3) list_form_graphic_pane_vc_t1_ParamLimits

0x731b,	// (0x00055ee3) list_form_graphic_pane_vc_t1

0x381b,	// (0x000523e3) list_highlight_pane_cp5_vc_ParamLimits

0x381b,	// (0x000523e3) list_highlight_pane_cp5_vc

0x7337,	// (0x00055eff) list_form_graphic_pane_vc_ParamLimits

0x7337,	// (0x00055eff) list_form_graphic_pane_vc

0x5607,	// (0x000541cf) form_field_popup_pane_vc_g1

0x734d,	// (0x00055f15) form_field_popup_pane_vc_t1_ParamLimits

0x734d,	// (0x00055f15) form_field_popup_pane_vc_t1

0x4081,	// (0x00052c49) input_focus_pane_cp7_vc_ParamLimits

0x4081,	// (0x00052c49) input_focus_pane_cp7_vc

0x7364,	// (0x00055f2c) list_form_pane_vc_ParamLimits

0x7364,	// (0x00055f2c) list_form_pane_vc

0x7370,	// (0x00055f38) data_form_pane_vc_t1_ParamLimits

0x7370,	// (0x00055f38) data_form_pane_vc_t1

0x40d0,	// (0x00052c98) input_focus_pane_vc_g1

0x40d8,	// (0x00052ca0) input_focus_pane_vc_g2

0x40e0,	// (0x00052ca8) input_focus_pane_vc_g3

0x40e8,	// (0x00052cb0) input_focus_pane_vc_g4

0x40f0,	// (0x00052cb8) input_focus_pane_vc_g5

0x40f8,	// (0x00052cc0) input_focus_pane_vc_g6

0x4100,	// (0x00052cc8) input_focus_pane_vc_g7

0x4108,	// (0x00052cd0) input_focus_pane_vc_g8

0x4110,	// (0x00052cd8) input_focus_pane_vc_g9

0x3731,	// (0x000522f9) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0005e254) input_focus_pane_vc_g

0x55fb,	// (0x000541c3) data_form_pane_vc_ParamLimits

0x55fb,	// (0x000541c3) data_form_pane_vc

0x5607,	// (0x000541cf) form_field_data_pane_vc_g1

0x738b,	// (0x00055f53) form_field_data_pane_vc_t1_ParamLimits

0x738b,	// (0x00055f53) form_field_data_pane_vc_t1

0x4081,	// (0x00052c49) input_focus_pane_vc_ParamLimits

0x4081,	// (0x00052c49) input_focus_pane_vc

0x73a5,	// (0x00055f6d) button_value_adjust_pane_cp3_vc

0x73ad,	// (0x00055f75) button_value_adjust_pane_cp5_vc

0x73b5,	// (0x00055f7d) form_field_data_pane_vc_ParamLimits

0x73b5,	// (0x00055f7d) form_field_data_pane_vc

0x73cc,	// (0x00055f94) form_field_data_pane_vc_cp2

0x73d4,	// (0x00055f9c) form_field_data_wide_pane_vc_ParamLimits

0x73d4,	// (0x00055f9c) form_field_data_wide_pane_vc

0x73ea,	// (0x00055fb2) form_field_data_wide_pane_vc_cp2

0x73f2,	// (0x00055fba) form_field_popup_pane_vc_ParamLimits

0x73f2,	// (0x00055fba) form_field_popup_pane_vc

0x7409,	// (0x00055fd1) form_field_popup_wide_pane_vc_ParamLimits

0x7409,	// (0x00055fd1) form_field_popup_wide_pane_vc

0x741f,	// (0x00055fe7) form_field_slider_pane_vc_ParamLimits

0x741f,	// (0x00055fe7) form_field_slider_pane_vc

0x7432,	// (0x00055ffa) form_field_slider_wide_pane_vc_ParamLimits

0x7432,	// (0x00055ffa) form_field_slider_wide_pane_vc

0xe021,	// (0x0005cbe9) grid_touch_1_pane_ParamLimits

0xe021,	// (0x0005cbe9) grid_touch_1_pane

0xe035,	// (0x0005cbfd) grid_touch_2_pane_ParamLimits

0xe035,	// (0x0005cbfd) grid_touch_2_pane

0x7500,	// (0x000560c8) touch_pane_g1_ParamLimits

0x7500,	// (0x000560c8) touch_pane_g1

0x7469,	// (0x00056031) cell_app_pane_cp_wide_ParamLimits

0x7469,	// (0x00056031) cell_app_pane_cp_wide

0x747a,	// (0x00056042) grid_popup_fast_wide_pane_ParamLimits

0x747a,	// (0x00056042) grid_popup_fast_wide_pane

0x748e,	// (0x00056056) scroll_pane_cp19_ParamLimits

0x748e,	// (0x00056056) scroll_pane_cp19

0x373b,	// (0x00052303) bg_popup_window_pane_cp20

0x74a2,	// (0x0005606a) listscroll_popup_fast_wide_pane

0x4236,	// (0x00052dfe) grid_indicator_nsta_pane

0x74aa,	// (0x00056072) clock_nsta_pane_g1

0x74b3,	// (0x0005607b) clock_nsta_pane_t1

0xe05f,	// (0x0005cc27) cell_indicator_nsta_pane_ParamLimits

0xe05f,	// (0x0005cc27) cell_indicator_nsta_pane

0x7500,	// (0x000560c8) cell_indicator_nsta_pane_g1

0xe076,	// (0x0005cc3e) cell_indicator_nsta_pane_g2

0x0001,

0xfaa5,	// (0x0005e66d) cell_indicator_nsta_pane_g

0x751b,	// (0x000560e3) clock_nsta_pane_cp

0x7523,	// (0x000560eb) indicator_nsta_pane_cp

0x752b,	// (0x000560f3) nsta_clock_indic_pane_g1

0x38e4,	// (0x000524ac) grid_indicator_pane

0x45ff,	// (0x000531c7) scroll_pane_cp29

0x0f6b,	// (0x0004fb33) indicator_nsta_pane_cp2_ParamLimits

0x0f6b,	// (0x0004fb33) indicator_nsta_pane_cp2

0x381b,	// (0x000523e3) main_apps_wheel_pane

0x5832,	// (0x000543fa) form_midp_field_text_pane_ParamLimits

0x5979,	// (0x00054541) scroll_bar_cp050_ParamLimits

0x758c,	// (0x00056154) cell_indicator_pane_ParamLimits

0x758c,	// (0x00056154) cell_indicator_pane

0x75a7,	// (0x0005616f) cell_indicator_pane_g1

0xe083,	// (0x0005cc4b) grid_wheel_folder_pane_ParamLimits

0xe083,	// (0x0005cc4b) grid_wheel_folder_pane

0xe091,	// (0x0005cc59) list_wheel_apps_pane_ParamLimits

0xe091,	// (0x0005cc59) list_wheel_apps_pane

0xe09f,	// (0x0005cc67) main_apps_wheel_pane_g1_ParamLimits

0xe09f,	// (0x0005cc67) main_apps_wheel_pane_g1

0xe0ab,	// (0x0005cc73) main_apps_wheel_pane_g2_ParamLimits

0xe0ab,	// (0x0005cc73) main_apps_wheel_pane_g2

0x0001,

0xfac1,	// (0x0005e689) main_apps_wheel_pane_g_ParamLimits

0xfac1,	// (0x0005e689) main_apps_wheel_pane_g

0xe0b9,	// (0x0005cc81) main_apps_wheel_pane_t1_ParamLimits

0xe0b9,	// (0x0005cc81) main_apps_wheel_pane_t1

0xe0cd,	// (0x0005cc95) list_wheel_apps_pane_g1

0xe0d5,	// (0x0005cc9d) list_wheel_apps_pane_g2

0xe0dd,	// (0x0005cca5) list_wheel_apps_pane_g3

0xe0e5,	// (0x0005ccad) list_wheel_apps_pane_g4

0xe0ef,	// (0x0005ccb7) list_wheel_apps_pane_g5

0x0004,

0xfac6,	// (0x0005e68e) list_wheel_apps_pane_g

0x4b69,	// (0x00053731) navi_icon_text_pane

0xd66e,	// (0x0005c236) aid_fill_nsta

0x766e,	// (0x00056236) navi_icon_text_pane_g1

0x767a,	// (0x00056242) navi_icon_text_pane_t1

0xd4d0,	// (0x0005c098) list_set_graphic_pane_t1_ParamLimits

0xd4d0,	// (0x0005c098) list_set_graphic_pane_t1

0x60d7,	// (0x00054c9f) popup_midp_note_alarm_window_t6_ParamLimits

0x60d7,	// (0x00054c9f) popup_midp_note_alarm_window_t6

0x60e9,	// (0x00054cb1) popup_midp_note_alarm_window_t7_ParamLimits

0x60e9,	// (0x00054cb1) popup_midp_note_alarm_window_t7

0x60fb,	// (0x00054cc3) popup_midp_note_alarm_window_t8_ParamLimits

0x60fb,	// (0x00054cc3) popup_midp_note_alarm_window_t8

0x610d,	// (0x00054cd5) popup_midp_note_alarm_window_t9_ParamLimits

0x610d,	// (0x00054cd5) popup_midp_note_alarm_window_t9

0x611f,	// (0x00054ce7) popup_midp_note_alarm_window_t10_ParamLimits

0x611f,	// (0x00054ce7) popup_midp_note_alarm_window_t10

0x6131,	// (0x00054cf9) popup_midp_note_alarm_window_t11_ParamLimits

0x6131,	// (0x00054cf9) popup_midp_note_alarm_window_t11

0x6143,	// (0x00054d0b) scroll_pane_cp17_ParamLimits

0x6143,	// (0x00054d0b) scroll_pane_cp17

0x1a0e,	// (0x000505d6) volume_small_pane_cp_g1

0x1d45,	// (0x0005090d) volume_small_pane_cp_g2

0x1d4e,	// (0x00050916) volume_small_pane_cp_g3

0x1a20,	// (0x000505e8) volume_small_pane_cp_g4

0x1d57,	// (0x0005091f) volume_small_pane_cp_g5

0x1d18,	// (0x000508e0) volume_small_pane_cp_g6

0x1a32,	// (0x000505fa) volume_small_pane_cp_g7

0x1d60,	// (0x00050928) volume_small_pane_cp_g8

0x1d69,	// (0x00050931) volume_small_pane_cp_g9

0x1a44,	// (0x0005060c) volume_small_pane_cp_g10

0x4dbe,	// (0x00053986) midp_ticker_pane_g1_ParamLimits

0x4dca,	// (0x00053992) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0005e320) midp_ticker_pane_g_ParamLimits

0x4dd6,	// (0x0005399e) midp_ticker_pane_t1_ParamLimits

0xd692,	// (0x0005c25a) aid_fill_nsta_2

0x5965,	// (0x0005452d) list_form2_midp_pane

0x6a8f,	// (0x00055657) midp_editing_number_pane_ParamLimits

0x6a9e,	// (0x00055666) midp_ticker_pane_ParamLimits

0x768c,	// (0x00056254) form2_midp_field_pane

0x76b0,	// (0x00056278) scroll_pane_cp51

0x76d0,	// (0x00056298) form2_midp_button_pane_ParamLimits

0x76d0,	// (0x00056298) form2_midp_button_pane

0x76e2,	// (0x000562aa) form2_midp_content_pane_ParamLimits

0x76e2,	// (0x000562aa) form2_midp_content_pane

0x76fc,	// (0x000562c4) form2_midp_field_choice_group_pane

0x7704,	// (0x000562cc) form2_midp_field_pane_g1

0x770c,	// (0x000562d4) form2_midp_field_pane_g2

0x7714,	// (0x000562dc) form2_midp_field_pane_g3

0x771c,	// (0x000562e4) form2_midp_field_pane_g4

0x0003,

0xfaeb,	// (0x0005e6b3) form2_midp_field_pane_g

0x7724,	// (0x000562ec) form2_midp_gauge_slider_pane

0x772c,	// (0x000562f4) form2_midp_gauge_wait_pane

0x7734,	// (0x000562fc) form2_midp_image_pane_ParamLimits

0x7734,	// (0x000562fc) form2_midp_image_pane

0x774f,	// (0x00056317) form2_midp_label_pane_ParamLimits

0x774f,	// (0x00056317) form2_midp_label_pane

0xe122,	// (0x0005ccea) form2_midp_label_pane_cp_ParamLimits

0xe122,	// (0x0005ccea) form2_midp_label_pane_cp

0x7789,	// (0x00056351) form2_midp_string_pane_ParamLimits

0x7789,	// (0x00056351) form2_midp_string_pane

0xc7bf,	// (0x0005b387) form2_midp_text_pane_ParamLimits

0xc7bf,	// (0x0005b387) form2_midp_text_pane

0x779b,	// (0x00056363) form2_midp_time_pane

0x77ab,	// (0x00056373) input_focus_pane_cp51_ParamLimits

0x77ab,	// (0x00056373) input_focus_pane_cp51

0x77c3,	// (0x0005638b) form2_midp_label_pane_t1_ParamLimits

0x77c3,	// (0x0005638b) form2_midp_label_pane_t1

0xc7d8,	// (0x0005b3a0) form2_mdip_text_pane_t1_ParamLimits

0xc7d8,	// (0x0005b3a0) form2_mdip_text_pane_t1

0x336e,	// (0x00051f36) form2_midp_time_pane_t1

0x780b,	// (0x000563d3) form2_midp_gauge_slider_pane_t1

0xe143,	// (0x0005cd0b) form2_midp_gauge_slider_pane_t2

0xe157,	// (0x0005cd1f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf4,	// (0x0005e6bc) form2_midp_gauge_slider_pane_t

0x7841,	// (0x00056409) form2_midp_slider_pane

0x784d,	// (0x00056415) form2_midp_gauge_wait_pane_t1

0x785b,	// (0x00056423) form2_midp_wait_pane_ParamLimits

0x785b,	// (0x00056423) form2_midp_wait_pane

0xe16b,	// (0x0005cd33) list_single_2graphic_pane_cp4_ParamLimits

0xe16b,	// (0x0005cd33) list_single_2graphic_pane_cp4

0xdb5a,	// (0x0005c722) list_single_midp_graphic_pane_cp_ParamLimits

0xdb5a,	// (0x0005c722) list_single_midp_graphic_pane_cp

0x373b,	// (0x00052303) list_highlight_pane_cp20

0x78b5,	// (0x0005647d) list_single_2graphic_pane_g1_cp4

0x6eb3,	// (0x00055a7b) list_single_2graphic_pane_g2_cp4

0x78bd,	// (0x00056485) list_single_2graphic_pane_t1_cp4

0x381b,	// (0x000523e3) list_highlight_pane_cp21

0x78cc,	// (0x00056494) list_single_midp_graphic_pane_g4_cp

0x78db,	// (0x000564a3) list_single_midp_graphic_pane_t1_cp

0xe181,	// (0x0005cd49) form2_mdip_string_pane_t1_ParamLimits

0xe181,	// (0x0005cd49) form2_mdip_string_pane_t1

0x373b,	// (0x00052303) bg_wml_button_pane_cp2

0x3731,	// (0x000522f9) form2_midp_image_pane_g1

0x2e17,	// (0x000519df) list_double_large_graphic_pane_g5_ParamLimits

0x2e17,	// (0x000519df) list_double_large_graphic_pane_g5

0x5023,	// (0x00053beb) midp_form_pane_ParamLimits

0x381b,	// (0x000523e3) main_apps_wheel_pane_ParamLimits

0xc36b,	// (0x0005af33) popup_preview_window_ParamLimits

0xc36b,	// (0x0005af33) popup_preview_window

0x17f7,	// (0x000503bf) popup_touch_info_window_ParamLimits

0x17f7,	// (0x000503bf) popup_touch_info_window

0x1815,	// (0x000503dd) popup_touch_menu_window_ParamLimits

0x1815,	// (0x000503dd) popup_touch_menu_window

0x3727,	// (0x000522ef) bg_popup_sub_pane_cp6

0x7a13,	// (0x000565db) list_touch_menu_pane

0x7a1b,	// (0x000565e3) list_single_touch_menu_pane_ParamLimits

0x7a1b,	// (0x000565e3) list_single_touch_menu_pane

0x7a2f,	// (0x000565f7) list_single_touch_menu_pane_t1

0x381b,	// (0x000523e3) bg_popup_sub_pane_cp7_ParamLimits

0x381b,	// (0x000523e3) bg_popup_sub_pane_cp7

0x7a3d,	// (0x00056605) heading_sub_pane

0x7a45,	// (0x0005660d) list_touch_info_pane_ParamLimits

0x7a45,	// (0x0005660d) list_touch_info_pane

0x7a54,	// (0x0005661c) list_single_touch_info_pane_ParamLimits

0x7a54,	// (0x0005661c) list_single_touch_info_pane

0x7a66,	// (0x0005662e) list_single_touch_info_pane_t1

0x7a74,	// (0x0005663c) list_single_touch_info_pane_t2

0x0001,

0xfb02,	// (0x0005e6ca) list_single_touch_info_pane_t

0x4ce9,	// (0x000538b1) bg_popup_heading_pane_cp

0x7a82,	// (0x0005664a) heading_sub_pane_t1

0x5595,	// (0x0005415d) bg_popup_preview_window_pane_cp_ParamLimits

0x5595,	// (0x0005415d) bg_popup_preview_window_pane_cp

0x7a3d,	// (0x00056605) heading_preview_pane

0x7a45,	// (0x0005660d) list_preview_pane_ParamLimits

0x7a45,	// (0x0005660d) list_preview_pane

0x7a90,	// (0x00056658) popup_preview_window_g1

0x7a54,	// (0x0005661c) list_single_preview_pane_ParamLimits

0x7a54,	// (0x0005661c) list_single_preview_pane

0x7a98,	// (0x00056660) list_single_preview_pane_g1

0x7aa0,	// (0x00056668) list_single_preview_pane_t1

0x7a66,	// (0x0005662e) list_single_preview_pane_t2

0x0001,

0xfb07,	// (0x0005e6cf) list_single_preview_pane_t

0x7aae,	// (0x00056676) bg_popup_heading_pane_cp2_ParamLimits

0x7aae,	// (0x00056676) bg_popup_heading_pane_cp2

0x7ac4,	// (0x0005668c) heading_preview_pane_g1

0x7acc,	// (0x00056694) heading_preview_pane_t1_ParamLimits

0x7acc,	// (0x00056694) heading_preview_pane_t1

0x3907,	// (0x000524cf) soft_indicator_pane_t1_ParamLimits

0x3fe8,	// (0x00052bb0) scroll_pane_ParamLimits

0x44f8,	// (0x000530c0) scroll_sc2_left_pane

0x4501,	// (0x000530c9) scroll_sc2_right_pane

0x4520,	// (0x000530e8) scroll_bg_pane_g1_ParamLimits

0x4535,	// (0x000530fd) scroll_bg_pane_g2_ParamLimits

0x454d,	// (0x00053115) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0005e2ab) scroll_bg_pane_g_ParamLimits

0x4520,	// (0x000530e8) scroll_handle_pane_g1_ParamLimits

0x456f,	// (0x00053137) scroll_handle_pane_g2_ParamLimits

0x454d,	// (0x00053115) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0005e2b2) scroll_handle_pane_g_ParamLimits

0x12c7,	// (0x0004fe8f) popup_choice_list_window_ParamLimits

0x12c7,	// (0x0004fe8f) popup_choice_list_window

0x546b,	// (0x00054033) choice_list_pane

0x54ed,	// (0x000540b5) cell_toolbar_pane_t1

0x5515,	// (0x000540dd) toolbar_button_pane_ParamLimits

0x65fd,	// (0x000551c5) ai_gene_pane_1_t2_ParamLimits

0x65fd,	// (0x000551c5) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0005e4d5) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0005e4d5) ai_gene_pane_1_t

0x7ae9,	// (0x000566b1) scroll_sc2_left_pane_g1

0x7ae9,	// (0x000566b1) scroll_sc2_right_pane_g1

0x5023,	// (0x00053beb) bg_popup_sub_pane_cp10

0x7af3,	// (0x000566bb) list_choice_list_pane

0x7b0c,	// (0x000566d4) list_single_choice_list_pane_ParamLimits

0x7b0c,	// (0x000566d4) list_single_choice_list_pane

0x7b1f,	// (0x000566e7) list_single_choice_list_pane_g1

0x4207,	// (0x00052dcf) list_single_choice_list_pane_t1_ParamLimits

0x4207,	// (0x00052dcf) list_single_choice_list_pane_t1

0x7b27,	// (0x000566ef) choice_list_pane_g1

0x7b2f,	// (0x000566f7) choice_list_pane_t1

0x3727,	// (0x000522ef) input_focus_pane_cp11

0x43db,	// (0x00052fa3) title_pane_stacon_g2_ParamLimits

0x43db,	// (0x00052fa3) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0005e291) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0005e291) title_pane_stacon_g

0x4ce9,	// (0x000538b1) cursor_press_pane

0xc024,	// (0x0005abec) popup_fep_hwr_window_ParamLimits

0xc024,	// (0x0005abec) popup_fep_hwr_window

0x13e7,	// (0x0004ffaf) popup_fep_vkb_window_ParamLimits

0x13e7,	// (0x0004ffaf) popup_fep_vkb_window

0x7b3d,	// (0x00056705) cursor_press_pane_g1

0x0002,

0xfb30,	// (0x0005e6f8) fep_vkb_side_pane_g_ParamLimits

0x1dab,	// (0x00050973) fep_hwr_candidate_pane_ParamLimits

0x1dab,	// (0x00050973) fep_hwr_candidate_pane

0x1dd5,	// (0x0005099d) fep_hwr_side_pane_ParamLimits

0x1dd5,	// (0x0005099d) fep_hwr_side_pane

0x1df5,	// (0x000509bd) fep_hwr_top_pane_ParamLimits

0x1df5,	// (0x000509bd) fep_hwr_top_pane

0x1e0d,	// (0x000509d5) fep_hwr_write_pane_ParamLimits

0x1e0d,	// (0x000509d5) fep_hwr_write_pane

0xfb30,	// (0x0005e6f8) fep_vkb_side_pane_g

0x7b45,	// (0x0005670d) fep_hwr_top_pane_g1

0x7b57,	// (0x0005671f) fep_hwr_top_pane_g2

0x1e47,	// (0x00050a0f) fep_hwr_top_pane_g3

0x0002,

0xfb0c,	// (0x0005e6d4) fep_hwr_top_pane_g

0x1e5c,	// (0x00050a24) fep_hwr_top_text_pane

0x46c5,	// (0x0005328d) fep_hwr_top_text_pane_g1

0x7b8d,	// (0x00056755) fep_hwr_top_text_pane_t1

0x1f52,	// (0x00050b1a) fep_hwr_candidate_pane_g1

0x7dd0,	// (0x00056998) fep_vkb_keypad_pane_g3_ParamLimits

0x7dd0,	// (0x00056998) fep_vkb_keypad_pane_g3

0x7df8,	// (0x000569c0) fep_vkb_keypad_pane_g4_ParamLimits

0x7df8,	// (0x000569c0) fep_vkb_keypad_pane_g4

0x7e67,	// (0x00056a2f) fep_vkb_bottom_pane_g2_ParamLimits

0x7e67,	// (0x00056a2f) fep_vkb_bottom_pane_g2

0x0001,

0xfb37,	// (0x0005e6ff) fep_vkb_bottom_pane_g_ParamLimits

0xfb37,	// (0x0005e6ff) fep_vkb_bottom_pane_g

0x7ae9,	// (0x000566b1) cell_vkb_side_pane_g2

0x0001,

0xfb41,	// (0x0005e709) cell_vkb_side_pane_g

0x7ef2,	// (0x00056aba) cell_vkb_side_pane_t1

0x7f00,	// (0x00056ac8) cell_vkb_side_pane_t1_copy1

0x7ae9,	// (0x000566b1) bg_fep_vkb_candidate_pane_g2

0x802c,	// (0x00056bf4) cell_vkb_candidate_pane_ParamLimits

0x7b9b,	// (0x00056763) aid_size_cell_vkb_ParamLimits

0x7b9b,	// (0x00056763) aid_size_cell_vkb

0x802c,	// (0x00056bf4) cell_vkb_candidate_pane

0x1f79,	// (0x00050b41) bg_popup_fep_shadow_pane_g1

0xe239,	// (0x0005ce01) fep_vkb_bottom_pane_ParamLimits

0xe239,	// (0x0005ce01) fep_vkb_bottom_pane

0x7c5d,	// (0x00056825) fep_vkb_candidate_pane_ParamLimits

0x7c5d,	// (0x00056825) fep_vkb_candidate_pane

0xe25e,	// (0x0005ce26) fep_vkb_keypad_pane_ParamLimits

0xe25e,	// (0x0005ce26) fep_vkb_keypad_pane

0xe293,	// (0x0005ce5b) fep_vkb_side_pane_ParamLimits

0xe293,	// (0x0005ce5b) fep_vkb_side_pane

0xe2cf,	// (0x0005ce97) fep_vkb_top_pane_ParamLimits

0xe2cf,	// (0x0005ce97) fep_vkb_top_pane

0x7d29,	// (0x000568f1) fep_vkb_top_pane_g1_ParamLimits

0x7d29,	// (0x000568f1) fep_vkb_top_pane_g1

0x7d38,	// (0x00056900) fep_vkb_top_pane_g2_ParamLimits

0x7d38,	// (0x00056900) fep_vkb_top_pane_g2

0x7d47,	// (0x0005690f) fep_vkb_top_pane_g3_ParamLimits

0x7d47,	// (0x0005690f) fep_vkb_top_pane_g3

0x0003,

0xfb27,	// (0x0005e6ef) fep_vkb_top_pane_g_ParamLimits

0xfb27,	// (0x0005e6ef) fep_vkb_top_pane_g

0x7d65,	// (0x0005692d) fep_vkb_top_text_pane_ParamLimits

0x7d65,	// (0x0005692d) fep_vkb_top_text_pane

0xe304,	// (0x0005cecc) fep_vkb_side_pane_g1_ParamLimits

0xe304,	// (0x0005cecc) fep_vkb_side_pane_g1

0x7dbf,	// (0x00056987) grid_vkb_side_pane_ParamLimits

0x7dbf,	// (0x00056987) grid_vkb_side_pane

0x1f81,	// (0x00050b49) bg_popup_fep_shadow_pane_g2

0x1f8a,	// (0x00050b52) bg_popup_fep_shadow_pane_g3

0x1f92,	// (0x00050b5a) bg_popup_fep_shadow_pane_g4

0x1f9b,	// (0x00050b63) bg_popup_fep_shadow_pane_g5

0x1fa5,	// (0x00050b6d) bg_popup_fep_shadow_pane_g6

0x1fad,	// (0x00050b75) bg_popup_fep_shadow_pane_g7

0x40e8,	// (0x00052cb0) bg_popup_fep_shadow_pane_g8

0x7e16,	// (0x000569de) grid_vkb_keypad_number_pane_ParamLimits

0x7e16,	// (0x000569de) grid_vkb_keypad_number_pane

0x7e26,	// (0x000569ee) grid_vkb_keypad_pane_ParamLimits

0x7e26,	// (0x000569ee) grid_vkb_keypad_pane

0x7e4c,	// (0x00056a14) fep_vkb_bottom_pane_g1_ParamLimits

0x7e4c,	// (0x00056a14) fep_vkb_bottom_pane_g1

0x7e75,	// (0x00056a3d) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7e75,	// (0x00056a3d) grid_vkb_keypad_bottom_left_pane

0x7e8a,	// (0x00056a52) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7e8a,	// (0x00056a52) grid_vkb_keypad_bottom_right_pane

0x7e9f,	// (0x00056a67) fep_vkb_top_text_pane_g1

0xe34b,	// (0x0005cf13) fep_vkb_top_text_pane_t1

0xe35d,	// (0x0005cf25) cell_vkb_side_pane_ParamLimits

0xe35d,	// (0x0005cf25) cell_vkb_side_pane

0x7ae9,	// (0x000566b1) cell_vkb_side_pane_g1

0x7f0e,	// (0x00056ad6) cell_vkb_keypad_pane_ParamLimits

0x7f0e,	// (0x00056ad6) cell_vkb_keypad_pane

0x7f83,	// (0x00056b4b) cell_vkb_keypad_pane_g1

0x0008,

0xfb54,	// (0x0005e71c) bg_popup_fep_shadow_pane_g

0x1fbf,	// (0x00050b87) cell_hwr_side_pane_g1

0x1fbf,	// (0x00050b87) cell_hwr_side_pane_g2

0x7f8d,	// (0x00056b55) cell_vkb_keypad_pane_t1

0xe373,	// (0x0005cf3b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe373,	// (0x0005cf3b) cell_vkb_keypad_bottom_left_pane

0xe388,	// (0x0005cf50) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe388,	// (0x0005cf50) cell_vkb_keypad_bottom_right_pane

0x7ae9,	// (0x000566b1) cell_vkb_keypad_bottom_left_pane_g1

0x7ae9,	// (0x000566b1) cell_vkb_keypad_bottom_right_pane_g1

0x7ff1,	// (0x00056bb9) cell_vkb_keypad_number_pane_ParamLimits

0x7ff1,	// (0x00056bb9) cell_vkb_keypad_number_pane

0x8010,	// (0x00056bd8) cell_vkb_keypad_number_pane_g1

0x801a,	// (0x00056be2) cell_vkb_keypad_number_pane_g2

0x8023,	// (0x00056beb) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb46,	// (0x0005e70e) cell_vkb_keypad_number_pane_g

0x7f8d,	// (0x00056b55) cell_vkb_keypad_number_pane_t1

0x8047,	// (0x00056c0f) fep_vkb_candidate_pane_g1

0x0001,

0xfb67,	// (0x0005e72f) cell_hwr_side_pane_g

0x8060,	// (0x00056c28) cell_hwr_side_pane_t1

0x1fc9,	// (0x00050b91) cell_hwr_side_pane_t1_copy1

0x1fd7,	// (0x00050b9f) cell_hwr_candidate_pane_g1

0x2006,	// (0x00050bce) cell_hwr_candidate_pane_t1

0x7ae9,	// (0x000566b1) cell_vkb_candidate_pane_g2

0x80a4,	// (0x00056c6c) cell_vkb_candidate_pane_t1

0x1d72,	// (0x0005093a) bg_popup_fep_shadow_pane_ParamLimits

0x1d72,	// (0x0005093a) bg_popup_fep_shadow_pane

0x1e27,	// (0x000509ef) bg_fep_hwr_top_pane_g4

0x7b69,	// (0x00056731) bg_hwr_side_pane_g1_ParamLimits

0x7b69,	// (0x00056731) bg_hwr_side_pane_g1

0xc80b,	// (0x0005b3d3) cell_hwr_side_pane_ParamLimits

0xc80b,	// (0x0005b3d3) cell_hwr_side_pane

0x1ed3,	// (0x00050a9b) fep_hwr_write_pane_g1_ParamLimits

0x1ed3,	// (0x00050a9b) fep_hwr_write_pane_g1

0x1ee0,	// (0x00050aa8) fep_hwr_write_pane_g2_ParamLimits

0x1ee0,	// (0x00050aa8) fep_hwr_write_pane_g2

0x1eed,	// (0x00050ab5) fep_hwr_write_pane_g3_ParamLimits

0x1eed,	// (0x00050ab5) fep_hwr_write_pane_g3

0xc82b,	// (0x0005b3f3) fep_hwr_write_pane_g4_ParamLimits

0xc82b,	// (0x0005b3f3) fep_hwr_write_pane_g4

0x0005,

0xfb13,	// (0x0005e6db) fep_hwr_write_pane_g_ParamLimits

0xfb13,	// (0x0005e6db) fep_hwr_write_pane_g

0x1e27,	// (0x000509ef) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1e27,	// (0x000509ef) bg_fep_hwr_candidate_pane_g2

0x1f10,	// (0x00050ad8) cell_hwr_candidate_pane_ParamLimits

0x1f10,	// (0x00050ad8) cell_hwr_candidate_pane

0x1f52,	// (0x00050b1a) fep_hwr_candidate_pane_g1_ParamLimits

0x7bc9,	// (0x00056791) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7bc9,	// (0x00056791) bg_popup_fep_shadow_pane_cp2

0x7d57,	// (0x0005691f) fep_vkb_top_pane_g4_ParamLimits

0x7d57,	// (0x0005691f) fep_vkb_top_pane_g4

0x7d9d,	// (0x00056965) fep_vkb_side_pane_g2_ParamLimits

0x7d9d,	// (0x00056965) fep_vkb_side_pane_g2

0xbbb8,	// (0x0005a780) list_setting_pane_t4_ParamLimits

0xbbb8,	// (0x0005a780) list_setting_pane_t4

0xbc52,	// (0x0005a81a) list_setting_number_pane_t5_ParamLimits

0xbc52,	// (0x0005a81a) list_setting_number_pane_t5

0xd3e0,	// (0x0005bfa8) list_double_heading_pane_cp2_ParamLimits

0xd3e0,	// (0x0005bfa8) list_double_heading_pane_cp2

0x401c,	// (0x00052be4) list_double_heading_pane_g1_cp2_ParamLimits

0x401c,	// (0x00052be4) list_double_heading_pane_g1_cp2

0x408f,	// (0x00052c57) list_double_heading_pane_g2_cp2_ParamLimits

0x408f,	// (0x00052c57) list_double_heading_pane_g2_cp2

0x80b2,	// (0x00056c7a) list_double_heading_pane_t1_cp2_ParamLimits

0x80b2,	// (0x00056c7a) list_double_heading_pane_t1_cp2

0x80c8,	// (0x00056c90) list_double_heading_pane_t2_cp2_ParamLimits

0x80c8,	// (0x00056c90) list_double_heading_pane_t2_cp2

0x370f,	// (0x000522d7) aid_value_unit2

0x03b5,	// (0x0004ef7d) popup_preview_fixed_window

0x3aa4,	// (0x0005266c) bg_popup_preview_window_pane_cp02

0x80da,	// (0x00056ca2) list_preview_fixed_pane

0x8120,	// (0x00056ce8) list_empty_pane_fp_ParamLimits

0x8120,	// (0x00056ce8) list_empty_pane_fp

0x8120,	// (0x00056ce8) list_single_cale_day_pane_fp_ParamLimits

0x8120,	// (0x00056ce8) list_single_cale_day_pane_fp

0x8120,	// (0x00056ce8) list_single_graphic_heading_pane_fp_ParamLimits

0x8120,	// (0x00056ce8) list_single_graphic_heading_pane_fp

0x8120,	// (0x00056ce8) list_single_graphic_pane_fp_ParamLimits

0x8120,	// (0x00056ce8) list_single_graphic_pane_fp

0x8120,	// (0x00056ce8) list_single_heading_pane_fp_ParamLimits

0x8120,	// (0x00056ce8) list_single_heading_pane_fp

0x8120,	// (0x00056ce8) list_single_pane_fp_ParamLimits

0x8120,	// (0x00056ce8) list_single_pane_fp

0x8136,	// (0x00056cfe) list_single_pane_fp_g1_ParamLimits

0x8136,	// (0x00056cfe) list_single_pane_fp_g1

0x401c,	// (0x00052be4) list_single_pane_fp_g2_ParamLimits

0x401c,	// (0x00052be4) list_single_pane_fp_g2

0x408f,	// (0x00052c57) list_single_pane_fp_g3_ParamLimits

0x408f,	// (0x00052c57) list_single_pane_fp_g3

0x8142,	// (0x00056d0a) list_single_pane_fp_g4_ParamLimits

0x8142,	// (0x00056d0a) list_single_pane_fp_g4

0x0003,

0xfb7a,	// (0x0005e742) list_single_pane_fp_g_ParamLimits

0xfb7a,	// (0x0005e742) list_single_pane_fp_g

0x3381,	// (0x00051f49) list_single_pane_fp_t1_ParamLimits

0x3381,	// (0x00051f49) list_single_pane_fp_t1

0x3398,	// (0x00051f60) list_single_graphic_pane_fp_g1_ParamLimits

0x3398,	// (0x00051f60) list_single_graphic_pane_fp_g1

0x8136,	// (0x00056cfe) list_single_graphic_pane_fp_g2_ParamLimits

0x8136,	// (0x00056cfe) list_single_graphic_pane_fp_g2

0x401c,	// (0x00052be4) list_single_graphic_pane_fp_g3_ParamLimits

0x401c,	// (0x00052be4) list_single_graphic_pane_fp_g3

0x408f,	// (0x00052c57) list_single_graphic_pane_fp_g4_ParamLimits

0x408f,	// (0x00052c57) list_single_graphic_pane_fp_g4

0x8142,	// (0x00056d0a) list_single_graphic_pane_fp_g5_ParamLimits

0x8142,	// (0x00056d0a) list_single_graphic_pane_fp_g5

0x0004,

0xfb83,	// (0x0005e74b) list_single_graphic_pane_fp_g_ParamLimits

0xfb83,	// (0x0005e74b) list_single_graphic_pane_fp_g

0x33a4,	// (0x00051f6c) list_single_graphic_pane_fp_t1_ParamLimits

0x33a4,	// (0x00051f6c) list_single_graphic_pane_fp_t1

0x3398,	// (0x00051f60) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3398,	// (0x00051f60) list_single_graphic_heading_pane_fp_g1

0x8136,	// (0x00056cfe) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x8136,	// (0x00056cfe) list_single_graphic_heading_pane_fp_g2

0x401c,	// (0x00052be4) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x401c,	// (0x00052be4) list_single_graphic_heading_pane_fp_g3

0x408f,	// (0x00052c57) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x408f,	// (0x00052c57) list_single_graphic_heading_pane_fp_g4

0x8142,	// (0x00056d0a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x8142,	// (0x00056d0a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb83,	// (0x0005e74b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb83,	// (0x0005e74b) list_single_graphic_heading_pane_fp_g

0x33ba,	// (0x00051f82) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x33ba,	// (0x00051f82) list_single_graphic_heading_pane_fp_t1

0x33d0,	// (0x00051f98) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x33d0,	// (0x00051f98) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8e,	// (0x0005e756) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8e,	// (0x0005e756) list_single_graphic_heading_pane_fp_t

0x33e2,	// (0x00051faa) list_single_cale_day_pane_fp_g1_ParamLimits

0x33e2,	// (0x00051faa) list_single_cale_day_pane_fp_g1

0x814e,	// (0x00056d16) list_single_cale_day_pane_fp_g2_ParamLimits

0x814e,	// (0x00056d16) list_single_cale_day_pane_fp_g2

0x341a,	// (0x00051fe2) list_single_cale_day_pane_fp_g3_ParamLimits

0x341a,	// (0x00051fe2) list_single_cale_day_pane_fp_g3

0x3442,	// (0x0005200a) list_single_cale_day_pane_fp_g4_ParamLimits

0x3442,	// (0x0005200a) list_single_cale_day_pane_fp_g4

0x3466,	// (0x0005202e) list_single_cale_day_pane_fp_g5_ParamLimits

0x3466,	// (0x0005202e) list_single_cale_day_pane_fp_g5

0x0004,

0xfb93,	// (0x0005e75b) list_single_cale_day_pane_fp_g_ParamLimits

0xfb93,	// (0x0005e75b) list_single_cale_day_pane_fp_g

0x348a,	// (0x00052052) list_single_cale_day_pane_fp_t1_ParamLimits

0x348a,	// (0x00052052) list_single_cale_day_pane_fp_t1

0x34b0,	// (0x00052078) list_single_cale_day_pane_fp_t2_ParamLimits

0x34b0,	// (0x00052078) list_single_cale_day_pane_fp_t2

0x34c9,	// (0x00052091) list_single_cale_day_pane_fp_t3_ParamLimits

0x34c9,	// (0x00052091) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9e,	// (0x0005e766) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9e,	// (0x0005e766) list_single_cale_day_pane_fp_t

0x8136,	// (0x00056cfe) list_empty_pane_fp_g1_ParamLimits

0x8136,	// (0x00056cfe) list_empty_pane_fp_g1

0x34e2,	// (0x000520aa) list_empty_pane_fp_t1

0x34f0,	// (0x000520b8) list_empty_pane_fp_t2

0x0001,

0xfba5,	// (0x0005e76d) list_empty_pane_fp_t

0x8136,	// (0x00056cfe) list_single_heading_pane_fp_g1_ParamLimits

0x8136,	// (0x00056cfe) list_single_heading_pane_fp_g1

0x401c,	// (0x00052be4) list_single_heading_pane_fp_g2_ParamLimits

0x401c,	// (0x00052be4) list_single_heading_pane_fp_g2

0x408f,	// (0x00052c57) list_single_heading_pane_fp_g3_ParamLimits

0x408f,	// (0x00052c57) list_single_heading_pane_fp_g3

0x0002,

0xfbaa,	// (0x0005e772) list_single_heading_pane_fp_g_ParamLimits

0xfbaa,	// (0x0005e772) list_single_heading_pane_fp_g

0x34fe,	// (0x000520c6) list_single_heading_pane_fp_t1_ParamLimits

0x34fe,	// (0x000520c6) list_single_heading_pane_fp_t1

0x3510,	// (0x000520d8) list_single_heading_pane_fp_t2_ParamLimits

0x3510,	// (0x000520d8) list_single_heading_pane_fp_t2

0x0001,

0xfbb1,	// (0x0005e779) list_single_heading_pane_fp_t_ParamLimits

0xfbb1,	// (0x0005e779) list_single_heading_pane_fp_t

0x4275,	// (0x00052e3d) aid_size_cell_fast

0x3a14,	// (0x000525dc) soft_indicator_pane_cp1_t1

0x42af,	// (0x00052e77) cell_app_pane_cp2_ParamLimits

0x42af,	// (0x00052e77) cell_app_pane_cp2

0x1d94,	// (0x0005095c) fep_hwr_candidate_drop_down_list_pane

0x1f6c,	// (0x00050b34) fep_hwr_candidate_pane_g3_ParamLimits

0x1f6c,	// (0x00050b34) fep_hwr_candidate_pane_g3

0xeb91,	// (0x0005d759) fep_hwr_candidate_pane_g4_ParamLimits

0xeb91,	// (0x0005d759) fep_hwr_candidate_pane_g4

0x0002,

0xfb20,	// (0x0005e6e8) fep_hwr_candidate_pane_g_ParamLimits

0xfb20,	// (0x0005e6e8) fep_hwr_candidate_pane_g

0x7c4c,	// (0x00056814) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7c4c,	// (0x00056814) fep_vkb_candidate_drop_down_list_pane

0x804f,	// (0x00056c17) fep_vkb_candidate_pane_g3

0x8057,	// (0x00056c1f) fep_vkb_candidate_pane_g4

0x0002,

0xfb4d,	// (0x0005e715) fep_vkb_candidate_pane_g

0x1fd7,	// (0x00050b9f) cell_hwr_candidate_pane_g1_ParamLimits

0x1fe5,	// (0x00050bad) cell_hwr_candidate_pane_g3_ParamLimits

0x1fe5,	// (0x00050bad) cell_hwr_candidate_pane_g3

0x9a5d,	// (0x00058625) cell_hwr_candidate_pane_g4_ParamLimits

0x9a5d,	// (0x00058625) cell_hwr_candidate_pane_g4

0x0002,

0xfb6c,	// (0x0005e734) cell_hwr_candidate_pane_g_ParamLimits

0xfb6c,	// (0x0005e734) cell_hwr_candidate_pane_g

0x806e,	// (0x00056c36) cell_vkb_candidate_pane_g3_ParamLimits

0x806e,	// (0x00056c36) cell_vkb_candidate_pane_g3

0x8089,	// (0x00056c51) cell_vkb_candidate_pane_g4_ParamLimits

0x8089,	// (0x00056c51) cell_vkb_candidate_pane_g4

0x815a,	// (0x00056d22) cell_app_pane_cp2_g1_ParamLimits

0x815a,	// (0x00056d22) cell_app_pane_cp2_g1

0x8178,	// (0x00056d40) cell_app_pane_cp2_g2_ParamLimits

0x8178,	// (0x00056d40) cell_app_pane_cp2_g2

0x0001,

0xfbb6,	// (0x0005e77e) cell_app_pane_cp2_g_ParamLimits

0xfbb6,	// (0x0005e77e) cell_app_pane_cp2_g

0x8184,	// (0x00056d4c) cell_app_pane_cp2_t1_ParamLimits

0x8184,	// (0x00056d4c) cell_app_pane_cp2_t1

0x4081,	// (0x00052c49) grid_highlight_pane_cp1_ParamLimits

0x4081,	// (0x00052c49) grid_highlight_pane_cp1

0x2024,	// (0x00050bec) cell_hwr_candidate_pane_cp1_ParamLimits

0x2024,	// (0x00050bec) cell_hwr_candidate_pane_cp1

0x1fd7,	// (0x00050b9f) fep_hwr_candidate_drop_down_list_pane_g1

0x2043,	// (0x00050c0b) fep_hwr_candidate_drop_down_list_pane_g2

0x2050,	// (0x00050c18) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbb,	// (0x0005e783) fep_hwr_candidate_drop_down_list_pane_g

0x205d,	// (0x00050c25) fep_hwr_candidate_drop_down_list_scroll_pane

0x2066,	// (0x00050c2e) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2066,	// (0x00050c2e) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2073,	// (0x00050c3b) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2073,	// (0x00050c3b) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2080,	// (0x00050c48) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2080,	// (0x00050c48) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x208d,	// (0x00050c55) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x208d,	// (0x00050c55) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x20a8,	// (0x00050c70) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x20a8,	// (0x00050c70) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x20c3,	// (0x00050c8b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x20c3,	// (0x00050c8b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x20de,	// (0x00050ca6) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x20de,	// (0x00050ca6) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x20f9,	// (0x00050cc1) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x20f9,	// (0x00050cc1) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc2,	// (0x0005e78a) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc2,	// (0x0005e78a) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x8196,	// (0x00056d5e) cell_vkb_candidate_pane_cp1_ParamLimits

0x8196,	// (0x00056d5e) cell_vkb_candidate_pane_cp1

0x7d57,	// (0x0005691f) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7d57,	// (0x0005691f) fep_vkb_candidate_drop_down_list_pane_g1

0x81b6,	// (0x00056d7e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x81b6,	// (0x00056d7e) fep_vkb_candidate_drop_down_list_pane_g2

0x81c3,	// (0x00056d8b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x81c3,	// (0x00056d8b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd3,	// (0x0005e79b) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd3,	// (0x0005e79b) fep_vkb_candidate_drop_down_list_pane_g

0x81d0,	// (0x00056d98) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x81d0,	// (0x00056d98) fep_vkb_candidate_drop_down_list_scroll_pane

0x81dd,	// (0x00056da5) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x81dd,	// (0x00056da5) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x81ea,	// (0x00056db2) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x81ea,	// (0x00056db2) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x81f6,	// (0x00056dbe) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x81f6,	// (0x00056dbe) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x8202,	// (0x00056dca) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8202,	// (0x00056dca) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x8223,	// (0x00056deb) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8223,	// (0x00056deb) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x8244,	// (0x00056e0c) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8244,	// (0x00056e0c) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x8265,	// (0x00056e2d) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8265,	// (0x00056e2d) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x8286,	// (0x00056e4e) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8286,	// (0x00056e4e) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbda,	// (0x0005e7a2) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbda,	// (0x0005e7a2) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xcf57,	// (0x0005bb1f) title_pane_g1_ParamLimits

0xcf6a,	// (0x0005bb32) title_pane_g2_ParamLimits

0xf54e,	// (0x0005e116) title_pane_g_ParamLimits

0x46b5,	// (0x0005327d) aid_call2_pane

0x46bd,	// (0x00053285) aid_call_pane

0x46c5,	// (0x0005328d) popup_clock_analogue_window_g1

0x46c5,	// (0x0005328d) popup_clock_analogue_window_g2

0x0e02,	// (0x0004f9ca) popup_clock_analogue_window_g3

0x0e0b,	// (0x0004f9d3) popup_clock_analogue_window_g4

0x3731,	// (0x000522f9) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0005e2c0) popup_clock_analogue_window_g

0x0e13,	// (0x0004f9db) popup_clock_analogue_window_t1

0x0e21,	// (0x0004f9e9) clock_digital_number_pane_ParamLimits

0x0e21,	// (0x0004f9e9) clock_digital_number_pane

0x0e2d,	// (0x0004f9f5) clock_digital_number_pane_cp02_ParamLimits

0x0e2d,	// (0x0004f9f5) clock_digital_number_pane_cp02

0x0e39,	// (0x0004fa01) clock_digital_number_pane_cp03_ParamLimits

0x0e39,	// (0x0004fa01) clock_digital_number_pane_cp03

0x0e45,	// (0x0004fa0d) clock_digital_number_pane_cp04_ParamLimits

0x0e45,	// (0x0004fa0d) clock_digital_number_pane_cp04

0x0e51,	// (0x0004fa19) clock_digital_separator_pane_ParamLimits

0x0e51,	// (0x0004fa19) clock_digital_separator_pane

0x0e5d,	// (0x0004fa25) popup_clock_digital_window_t1_ParamLimits

0x0e5d,	// (0x0004fa25) popup_clock_digital_window_t1

0x3731,	// (0x000522f9) clock_digital_number_pane_g1

0x3731,	// (0x000522f9) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0005e2cb) clock_digital_number_pane_g

0x3731,	// (0x000522f9) clock_digital_separator_pane_g1

0x3731,	// (0x000522f9) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0005e2cb) clock_digital_separator_pane_g

0xd66e,	// (0x0005c236) aid_fill_nsta_ParamLimits

0xd7a4,	// (0x0005c36c) indicator_nsta_pane_ParamLimits

0x5300,	// (0x00053ec8) popup_clock_analogue_window

0x5300,	// (0x00053ec8) popup_clock_digital_window

0x4236,	// (0x00052dfe) grid_indicator_nsta_pane_ParamLimits

0x74c1,	// (0x00056089) clock_nsta_pane_t2

0x0001,

0xfaa0,	// (0x0005e668) clock_nsta_pane_t

0x0dc6,	// (0x0004f98e) aid_size_max_handle

0x0dd0,	// (0x0004f998) aid_size_min_handle

0x4ce9,	// (0x000538b1) editor_scroll_pane

0x82a1,	// (0x00056e69) ex_editor_pane

0x41e3,	// (0x00052dab) scroll_pane_cp13

0x4014,	// (0x00052bdc) scroll_pane_cp14

0x46f4,	// (0x000532bc) scroll_pane_cp36

0xd3f1,	// (0x0005bfb9) list_single_graphic_hl_pane_cp2_ParamLimits

0xd3f1,	// (0x0005bfb9) list_single_graphic_hl_pane_cp2

0xd841,	// (0x0005c409) list_single_graphic_hl_pane_ParamLimits

0xd841,	// (0x0005c409) list_single_graphic_hl_pane

0x3526,	// (0x000520ee) aid_size_min_hl_cp1

0x82a9,	// (0x00056e71) list_highlight_pane_cp34_ParamLimits

0x82a9,	// (0x00056e71) list_highlight_pane_cp34

0x82ba,	// (0x00056e82) list_single_graphic_hl_pane_g1_ParamLimits

0x82ba,	// (0x00056e82) list_single_graphic_hl_pane_g1

0xc840,	// (0x0005b408) list_single_graphic_hl_pane_g2_ParamLimits

0xc840,	// (0x0005b408) list_single_graphic_hl_pane_g2

0xc840,	// (0x0005b408) list_single_graphic_hl_pane_g3_ParamLimits

0xc840,	// (0x0005b408) list_single_graphic_hl_pane_g3

0x4c5a,	// (0x00053822) list_single_graphic_hl_pane_g4_ParamLimits

0x4c5a,	// (0x00053822) list_single_graphic_hl_pane_g4

0xd865,	// (0x0005c42d) list_single_graphic_hl_pane_g5_ParamLimits

0xd865,	// (0x0005c42d) list_single_graphic_hl_pane_g5

0x0004,

0xfbeb,	// (0x0005e7b3) list_single_graphic_hl_pane_g_ParamLimits

0xfbeb,	// (0x0005e7b3) list_single_graphic_hl_pane_g

0xc84c,	// (0x0005b414) list_single_graphic_hl_pane_t1_ParamLimits

0xc84c,	// (0x0005b414) list_single_graphic_hl_pane_t1

0x82c7,	// (0x00056e8f) aid_size_min_hl_cp2

0x82d0,	// (0x00056e98) list_highlight_pane_cp34_cp2_ParamLimits

0x82d0,	// (0x00056e98) list_highlight_pane_cp34_cp2

0x82ba,	// (0x00056e82) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x82ba,	// (0x00056e82) list_single_graphic_hl_pane_g1_cp2

0x82dd,	// (0x00056ea5) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x82dd,	// (0x00056ea5) list_single_graphic_hl_pane_g2_cp2

0x82e9,	// (0x00056eb1) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x82e9,	// (0x00056eb1) list_single_graphic_hl_pane_g3_cp2

0x4c22,	// (0x000537ea) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4c22,	// (0x000537ea) list_single_graphic_hl_pane_g4_cp2

0x82f7,	// (0x00056ebf) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x82f7,	// (0x00056ebf) list_single_graphic_hl_pane_g5_cp2

0xbe52,	// (0x0005aa1a) control_pane_g4_ParamLimits

0xbe52,	// (0x0005aa1a) control_pane_g4

0x5023,	// (0x00053beb) bg_popup_sub_pane_cp10_ParamLimits

0x7af3,	// (0x000566bb) list_choice_list_pane_ParamLimits

0x7b02,	// (0x000566ca) scroll_pane_cp23

0x3aa4,	// (0x0005266c) bg_popup_preview_window_pane_cp02_ParamLimits

0x80da,	// (0x00056ca2) list_preview_fixed_pane_ParamLimits

0x80f0,	// (0x00056cb8) list_preview_fixed_pane_cp_ParamLimits

0x80f0,	// (0x00056cb8) list_preview_fixed_pane_cp

0x80fc,	// (0x00056cc4) popup_preview_fixed_window_g1_ParamLimits

0x80fc,	// (0x00056cc4) popup_preview_fixed_window_g1

0x8108,	// (0x00056cd0) popup_preview_fixed_window_g2_ParamLimits

0x8108,	// (0x00056cd0) popup_preview_fixed_window_g2

0x0002,

0xfb73,	// (0x0005e73b) popup_preview_fixed_window_g_ParamLimits

0xfb73,	// (0x0005e73b) popup_preview_fixed_window_g

0x0d3a,	// (0x0004f902) aid_navi_side_left_pane_ParamLimits

0x0d4f,	// (0x0004f917) aid_navi_side_right_pane_ParamLimits

0x0d67,	// (0x0004f92f) navi_icon_pane_stacon_ParamLimits

0x0d7b,	// (0x0004f943) navi_navi_pane_stacon_ParamLimits

0x0d67,	// (0x0004f92f) navi_text_pane_stacon_ParamLimits

0x0284,	// (0x0004ee4c) main_text_info_pane

0x8321,	// (0x00056ee9) listscroll_text_info_pane

0x8329,	// (0x00056ef1) list_text_info_pane_ParamLimits

0x8329,	// (0x00056ef1) list_text_info_pane

0x8338,	// (0x00056f00) scroll_pane_cp24_ParamLimits

0x8338,	// (0x00056f00) scroll_pane_cp24

0xe3a3,	// (0x0005cf6b) list_text_info_pane_t1_ParamLimits

0xe3a3,	// (0x0005cf6b) list_text_info_pane_t1

0xbf99,	// (0x0005ab61) popup_fast_swap2_window_ParamLimits

0xbf99,	// (0x0005ab61) popup_fast_swap2_window

0x838b,	// (0x00056f53) aid_size_cell_fast2

0x3727,	// (0x000522ef) bg_popup_window_pane_cp17

0x5991,	// (0x00054559) heading_pane_cp2

0x3ce7,	// (0x000528af) listscroll_fast2_pane

0x8395,	// (0x00056f5d) grid_fast2_pane

0x839f,	// (0x00056f67) listscroll_fast2_pane_g1

0x83a7,	// (0x00056f6f) listscroll_fast2_pane_g2

0x0001,

0xfbf6,	// (0x0005e7be) listscroll_fast2_pane_g

0x41e3,	// (0x00052dab) scroll_pane_cp26

0x83b1,	// (0x00056f79) cell_fast2_pane_ParamLimits

0x83b1,	// (0x00056f79) cell_fast2_pane

0x83c6,	// (0x00056f8e) cell_fast2_pane_g1

0x83cf,	// (0x00056f97) cell_fast2_pane_g2

0x83d8,	// (0x00056fa0) cell_fast2_pane_g3

0x0002,

0xfbfb,	// (0x0005e7c3) cell_fast2_pane_g

0x3dd1,	// (0x00052999) grid_highlight_pane_cp9

0x12a3,	// (0x0004fe6b) main_eswt_pane_ParamLimits

0x12a3,	// (0x0004fe6b) main_eswt_pane

0x834d,	// (0x00056f15) list_single_text_info_pane

0x83e0,	// (0x00056fa8) eswt_ctrl_button_pane

0x83e0,	// (0x00056fa8) eswt_ctrl_canvas_pane

0x83e8,	// (0x00056fb0) eswt_ctrl_combo_pane

0x83e0,	// (0x00056fa8) eswt_ctrl_default_pane

0x83e0,	// (0x00056fa8) eswt_ctrl_label_pane

0x83f0,	// (0x00056fb8) eswt_ctrl_wait_pane

0x83f8,	// (0x00056fc0) eswt_shell_pane

0x3727,	// (0x000522ef) listscroll_eswt_app_pane

0x8418,	// (0x00056fe0) popup_eswt_tasktip_window_ParamLimits

0x8418,	// (0x00056fe0) popup_eswt_tasktip_window

0x5595,	// (0x0005415d) bg_popup_window_pane_cp18

0x8429,	// (0x00056ff1) eswt_control_pane_g1_ParamLimits

0x8429,	// (0x00056ff1) eswt_control_pane_g1

0x8436,	// (0x00056ffe) eswt_control_pane_g2_ParamLimits

0x8436,	// (0x00056ffe) eswt_control_pane_g2

0x8443,	// (0x0005700b) eswt_control_pane_g3_ParamLimits

0x8443,	// (0x0005700b) eswt_control_pane_g3

0x8450,	// (0x00057018) eswt_control_pane_g4_ParamLimits

0x8450,	// (0x00057018) eswt_control_pane_g4

0x0003,

0xfc02,	// (0x0005e7ca) eswt_control_pane_g_ParamLimits

0xfc02,	// (0x0005e7ca) eswt_control_pane_g

0x4081,	// (0x00052c49) bg_button_pane_ParamLimits

0x4081,	// (0x00052c49) bg_button_pane

0x3de6,	// (0x000529ae) common_borders_pane_copy2_ParamLimits

0x3de6,	// (0x000529ae) common_borders_pane_copy2

0x845d,	// (0x00057025) control_button_pane_g1_ParamLimits

0x845d,	// (0x00057025) control_button_pane_g1

0x8469,	// (0x00057031) control_button_pane_g2_ParamLimits

0x8469,	// (0x00057031) control_button_pane_g2

0x8475,	// (0x0005703d) control_button_pane_g3_ParamLimits

0x8475,	// (0x0005703d) control_button_pane_g3

0x0002,

0xfc0b,	// (0x0005e7d3) control_button_pane_g_ParamLimits

0xfc0b,	// (0x0005e7d3) control_button_pane_g

0x8489,	// (0x00057051) control_button_pane_t1

0x8497,	// (0x0005705f) control_button_pane_t2

0x0001,

0xfc12,	// (0x0005e7da) control_button_pane_t

0x5521,	// (0x000540e9) bg_button_pane_g1

0x5531,	// (0x000540f9) bg_button_pane_g2

0x5529,	// (0x000540f1) bg_button_pane_g3

0x5541,	// (0x00054109) bg_button_pane_g4

0x5539,	// (0x00054101) bg_button_pane_g5

0x5549,	// (0x00054111) bg_button_pane_g6

0x5551,	// (0x00054119) bg_button_pane_g7

0x5561,	// (0x00054129) bg_button_pane_g8

0x5559,	// (0x00054121) bg_button_pane_g9

0x0008,

0xf861,	// (0x0005e429) bg_button_pane_g

0x7aae,	// (0x00056676) common_borders_pane_ParamLimits

0x7aae,	// (0x00056676) common_borders_pane

0x8429,	// (0x00056ff1) eswt_control_pane_g1_copy1_ParamLimits

0x8429,	// (0x00056ff1) eswt_control_pane_g1_copy1

0x8436,	// (0x00056ffe) eswt_control_pane_g2_copy1_ParamLimits

0x8436,	// (0x00056ffe) eswt_control_pane_g2_copy1

0x8443,	// (0x0005700b) eswt_control_pane_g3_copy1_ParamLimits

0x8443,	// (0x0005700b) eswt_control_pane_g3_copy1

0x8450,	// (0x00057018) eswt_control_pane_g4_copy1_ParamLimits

0x8450,	// (0x00057018) eswt_control_pane_g4_copy1

0x7ae9,	// (0x000566b1) bg_eswt_ctrl_canvas_pane_g1

0x7aae,	// (0x00056676) common_borders_pane_cp2_ParamLimits

0x7aae,	// (0x00056676) common_borders_pane_cp2

0x7aae,	// (0x00056676) common_borders_pane_cp3_ParamLimits

0x7aae,	// (0x00056676) common_borders_pane_cp3

0x84a5,	// (0x0005706d) separator_horizontal_pane

0x84ad,	// (0x00057075) separator_vertical_pane

0x8429,	// (0x00056ff1) eswt_control_pane_g1_copy2_ParamLimits

0x8429,	// (0x00056ff1) eswt_control_pane_g1_copy2

0x8436,	// (0x00056ffe) eswt_control_pane_g2_copy2_ParamLimits

0x8436,	// (0x00056ffe) eswt_control_pane_g2_copy2

0x8443,	// (0x0005700b) eswt_control_pane_g3_copy2_ParamLimits

0x8443,	// (0x0005700b) eswt_control_pane_g3_copy2

0x8450,	// (0x00057018) eswt_control_pane_g4_copy2_ParamLimits

0x8450,	// (0x00057018) eswt_control_pane_g4_copy2

0x3727,	// (0x000522ef) common_borders_pane_cp4

0x84b6,	// (0x0005707e) separator_horizontal_pane_g1

0x84bf,	// (0x00057087) separator_horizontal_pane_g2

0x84c8,	// (0x00057090) separator_horizontal_pane_g3

0x0002,

0xfc17,	// (0x0005e7df) separator_horizontal_pane_g

0x8429,	// (0x00056ff1) eswt_control_pane_g1_copy3_ParamLimits

0x8429,	// (0x00056ff1) eswt_control_pane_g1_copy3

0x8436,	// (0x00056ffe) eswt_control_pane_g2_copy3_ParamLimits

0x8436,	// (0x00056ffe) eswt_control_pane_g2_copy3

0x8443,	// (0x0005700b) eswt_control_pane_g3_copy3_ParamLimits

0x8443,	// (0x0005700b) eswt_control_pane_g3_copy3

0x8450,	// (0x00057018) eswt_control_pane_g4_copy3_ParamLimits

0x8450,	// (0x00057018) eswt_control_pane_g4_copy3

0x3727,	// (0x000522ef) common_borders_pane_cp5

0x84d1,	// (0x00057099) separator_vertical_pane_g1

0x84da,	// (0x000570a2) separator_vertical_pane_g2

0x84e3,	// (0x000570ab) separator_vertical_pane_g3

0x0002,

0xfc1e,	// (0x0005e7e6) separator_vertical_pane_g

0x8429,	// (0x00056ff1) eswt_control_pane_g1_copy4_ParamLimits

0x8429,	// (0x00056ff1) eswt_control_pane_g1_copy4

0x8436,	// (0x00056ffe) eswt_control_pane_g2_copy4_ParamLimits

0x8436,	// (0x00056ffe) eswt_control_pane_g2_copy4

0x8443,	// (0x0005700b) eswt_control_pane_g3_copy4_ParamLimits

0x8443,	// (0x0005700b) eswt_control_pane_g3_copy4

0x8450,	// (0x00057018) eswt_control_pane_g4_copy4_ParamLimits

0x8450,	// (0x00057018) eswt_control_pane_g4_copy4

0x84ec,	// (0x000570b4) eswt_ctrl_combo_button_pane

0x84f4,	// (0x000570bc) eswt_ctrl_input_pane

0x84fc,	// (0x000570c4) popup_choice_list_window_cp70

0x8504,	// (0x000570cc) eswt_ctrl_input_pane_t1

0x3727,	// (0x000522ef) input_focus_pane_cp70

0x7aae,	// (0x00056676) bg_button_pane_cp70_ParamLimits

0x7aae,	// (0x00056676) bg_button_pane_cp70

0x8512,	// (0x000570da) eswt_ctrl_combo_button_pane_g1

0x851a,	// (0x000570e2) wait_bar_pane_cp70

0x5595,	// (0x0005415d) bg_popup_window_pane_cp70_ParamLimits

0x5595,	// (0x0005415d) bg_popup_window_pane_cp70

0x8522,	// (0x000570ea) popup_eswt_tasktip_window_t1

0x8538,	// (0x00057100) wait_bar_pane_cp71_ParamLimits

0x8538,	// (0x00057100) wait_bar_pane_cp71

0x8544,	// (0x0005710c) grid_eswt_app_pane

0x44f8,	// (0x000530c0) scroll_pane_cp70

0xe3c0,	// (0x0005cf88) cell_eswt_app_pane_ParamLimits

0xe3c0,	// (0x0005cf88) cell_eswt_app_pane

0xe3ea,	// (0x0005cfb2) cell_eswt_app_pane_g1_ParamLimits

0xe3ea,	// (0x0005cfb2) cell_eswt_app_pane_g1

0xe419,	// (0x0005cfe1) cell_eswt_app_pane_g2_ParamLimits

0xe419,	// (0x0005cfe1) cell_eswt_app_pane_g2

0x0001,

0xfc25,	// (0x0005e7ed) cell_eswt_app_pane_g_ParamLimits

0xfc25,	// (0x0005e7ed) cell_eswt_app_pane_g

0xe43d,	// (0x0005d005) cell_eswt_app_pane_t1_ParamLimits

0xe43d,	// (0x0005d005) cell_eswt_app_pane_t1

0x8606,	// (0x000571ce) grid_highlight_pane_cp70_ParamLimits

0x8606,	// (0x000571ce) grid_highlight_pane_cp70

0x4bbe,	// (0x00053786) set_content_pane_g1

0xd623,	// (0x0005c1eb) status_small_volume_pane

0x2114,	// (0x00050cdc) status_small_volume_pane_g1

0x211c,	// (0x00050ce4) volume_small2_pane

0x2125,	// (0x00050ced) volume_small2_pane_g1

0x212e,	// (0x00050cf6) volume_small2_pane_g2

0x2137,	// (0x00050cff) volume_small2_pane_g3

0x2140,	// (0x00050d08) volume_small2_pane_g4

0x2149,	// (0x00050d11) volume_small2_pane_g5

0x2152,	// (0x00050d1a) volume_small2_pane_g6

0x215b,	// (0x00050d23) volume_small2_pane_g7

0x2164,	// (0x00050d2c) volume_small2_pane_g8

0x216d,	// (0x00050d35) volume_small2_pane_g9

0x2176,	// (0x00050d3e) volume_small2_pane_g10

0x0009,

0xfc2a,	// (0x0005e7f2) volume_small2_pane_g

0x7e9f,	// (0x00056a67) fep_vkb_top_text_pane_g1_ParamLimits

0xe34b,	// (0x0005cf13) fep_vkb_top_text_pane_t1_ParamLimits

0x8114,	// (0x00056cdc) popup_preview_fixed_window_g3_ParamLimits

0x8114,	// (0x00056cdc) popup_preview_fixed_window_g3

0xc5a8,	// (0x0005b170) popup_toolbar_trans_pane

0xdd71,	// (0x0005c939) aid_height_set_list_ParamLimits

0x6910,	// (0x000554d8) aid_size_parent_ParamLimits

0x5023,	// (0x00053beb) list_highlight_pane_cp2_ParamLimits

0x4bbe,	// (0x00053786) set_content_pane_g1_ParamLimits

0xd853,	// (0x0005c41b) list_single_image_pane_ParamLimits

0xd853,	// (0x0005c41b) list_single_image_pane

0xe46f,	// (0x0005d037) aid_size_cell_image_ParamLimits

0xe46f,	// (0x0005d037) aid_size_cell_image

0xe47c,	// (0x0005d044) grid_single_image_pane_ParamLimits

0xe47c,	// (0x0005d044) grid_single_image_pane

0x862b,	// (0x000571f3) list_single_image_pane_g1_ParamLimits

0x862b,	// (0x000571f3) list_single_image_pane_g1

0x8637,	// (0x000571ff) list_single_image_pane_g2_ParamLimits

0x8637,	// (0x000571ff) list_single_image_pane_g2

0x0001,

0xfc3f,	// (0x0005e807) list_single_image_pane_g_ParamLimits

0xfc3f,	// (0x0005e807) list_single_image_pane_g

0x864b,	// (0x00057213) list_single_image_pane_t1_ParamLimits

0x864b,	// (0x00057213) list_single_image_pane_t1

0xe488,	// (0x0005d050) cell_image_list_pane_ParamLimits

0xe488,	// (0x0005d050) cell_image_list_pane

0xe49c,	// (0x0005d064) cell_image_list_pane_g1

0xe4a5,	// (0x0005d06d) cell_image_list_pane_g2

0x0001,

0xfc44,	// (0x0005e80c) cell_image_list_pane_g

0x8687,	// (0x0005724f) aid_size_cell_tb_trans_pane

0x4081,	// (0x00052c49) bg_tb_trans_pane

0x8699,	// (0x00057261) grid_tb_trans_pane

0x5521,	// (0x000540e9) bg_tb_trans_pane_g1

0x5531,	// (0x000540f9) bg_tb_trans_pane_g2

0x5529,	// (0x000540f1) bg_tb_trans_pane_g3

0x5541,	// (0x00054109) bg_tb_trans_pane_g4

0x5539,	// (0x00054101) bg_tb_trans_pane_g5

0x5561,	// (0x00054129) bg_tb_trans_pane_g6

0x5559,	// (0x00054121) bg_tb_trans_pane_g7

0x5549,	// (0x00054111) bg_tb_trans_pane_g8

0x5551,	// (0x00054119) bg_tb_trans_pane_g9

0x0008,

0xfc49,	// (0x0005e811) bg_tb_trans_pane_g

0x86ad,	// (0x00057275) cell_toolbar_trans_pane_ParamLimits

0x86ad,	// (0x00057275) cell_toolbar_trans_pane

0x7ae9,	// (0x000566b1) cell_toolbar_trans_pane_g1

0xe106,	// (0x0005ccce) list_form2_midp_pane_t1

0xe114,	// (0x0005ccdc) list_form2_midp_pane_t2

0x0001,

0xfae6,	// (0x0005e6ae) list_form2_midp_pane_t

0x76b0,	// (0x00056278) scroll_pane_cp51_ParamLimits

0x786c,	// (0x00056434) form2_midp_wait_pane_g1

0x7875,	// (0x0005643d) form2_midp_wait_pane_g2

0x787e,	// (0x00056446) form2_midp_wait_pane_g3

0x0002,

0xfafb,	// (0x0005e6c3) form2_midp_wait_pane_g

0x381b,	// (0x000523e3) list_highlight_pane_cp21_ParamLimits

0x78cc,	// (0x00056494) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x78db,	// (0x000564a3) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6ac0,	// (0x00055688) list_single_2graphic_im_pane_ParamLimits

0x6ac0,	// (0x00055688) list_single_2graphic_im_pane

0x86d3,	// (0x0005729b) list_single_2graphic_im_pane_g1_ParamLimits

0x86d3,	// (0x0005729b) list_single_2graphic_im_pane_g1

0x86e4,	// (0x000572ac) list_single_2graphic_im_pane_g2_ParamLimits

0x86e4,	// (0x000572ac) list_single_2graphic_im_pane_g2

0x86f0,	// (0x000572b8) list_single_2graphic_im_pane_g3_ParamLimits

0x86f0,	// (0x000572b8) list_single_2graphic_im_pane_g3

0x0003,

0xfc5c,	// (0x0005e824) list_single_2graphic_im_pane_g_ParamLimits

0xfc5c,	// (0x0005e824) list_single_2graphic_im_pane_g

0x8710,	// (0x000572d8) list_single_2graphic_im_pane_t1_ParamLimits

0x8710,	// (0x000572d8) list_single_2graphic_im_pane_t1

0x8120,	// (0x00056ce8) list_single_graphic_2heading_pane_fp_ParamLimits

0x8120,	// (0x00056ce8) list_single_graphic_2heading_pane_fp

0x3398,	// (0x00051f60) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3398,	// (0x00051f60) list_single_graphic_2heading_pane_fp_g1

0x8136,	// (0x00056cfe) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x8136,	// (0x00056cfe) list_single_graphic_2heading_pane_fp_g2

0x401c,	// (0x00052be4) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x401c,	// (0x00052be4) list_single_graphic_2heading_pane_fp_g3

0x408f,	// (0x00052c57) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x408f,	// (0x00052c57) list_single_graphic_2heading_pane_fp_g4

0x8142,	// (0x00056d0a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x8142,	// (0x00056d0a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb83,	// (0x0005e74b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb83,	// (0x0005e74b) list_single_graphic_2heading_pane_fp_g

0x3565,	// (0x0005212d) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x3565,	// (0x0005212d) list_single_graphic_2heading_pane_fp_t1

0x33d0,	// (0x00051f98) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x33d0,	// (0x00051f98) list_single_graphic_2heading_pane_fp_t2

0x357b,	// (0x00052143) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x357b,	// (0x00052143) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc65,	// (0x0005e82d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc65,	// (0x0005e82d) list_single_graphic_2heading_pane_fp_t

0x7b75,	// (0x0005673d) fep_hwr_write_pane_g5_ParamLimits

0x7b75,	// (0x0005673d) fep_hwr_write_pane_g5

0x7b81,	// (0x00056749) fep_hwr_write_pane_g6_ParamLimits

0x7b81,	// (0x00056749) fep_hwr_write_pane_g6

0x83f8,	// (0x00056fc0) eswt_shell_pane_ParamLimits

0x5595,	// (0x0005415d) bg_popup_window_pane_cp18_ParamLimits

0x685e,	// (0x00055426) heading_pane_cp70

0x8522,	// (0x000570ea) popup_eswt_tasktip_window_t1_ParamLimits

0xd6c9,	// (0x0005c291) aid_touch_tab_arrow_left

0xd6df,	// (0x0005c2a7) aid_touch_tab_arrow_right

0xcf82,	// (0x0005bb4a) title_pane_g3_ParamLimits

0xcf82,	// (0x0005bb4a) title_pane_g3

0x4040,	// (0x00052c08) set_value_pane_g1

0xc5a8,	// (0x0005b170) popup_toolbar_trans_pane_ParamLimits

0x8687,	// (0x0005724f) aid_size_cell_tb_trans_pane_ParamLimits

0x4081,	// (0x00052c49) bg_tb_trans_pane_ParamLimits

0x8699,	// (0x00057261) grid_tb_trans_pane_ParamLimits

0x3aa4,	// (0x0005266c) cont_note_pane_ParamLimits

0x3aa4,	// (0x0005266c) cont_note_pane

0x3de6,	// (0x000529ae) cont_snote2_single_text_pane_ParamLimits

0x3de6,	// (0x000529ae) cont_snote2_single_text_pane

0x3de6,	// (0x000529ae) cont_snote2_single_graphic_pane_ParamLimits

0x3de6,	// (0x000529ae) cont_snote2_single_graphic_pane

0x5bb3,	// (0x0005477b) cont_note_wait_pane_ParamLimits

0x5bb3,	// (0x0005477b) cont_note_wait_pane

0x5bb3,	// (0x0005477b) cont_note_image_pane_ParamLimits

0x5bb3,	// (0x0005477b) cont_note_image_pane

0x8741,	// (0x00057309) popup_note2_window_g1_ParamLimits

0x8741,	// (0x00057309) popup_note2_window_g1

0x8772,	// (0x0005733a) popup_note2_window_t1_ParamLimits

0x8772,	// (0x0005733a) popup_note2_window_t1

0x87b7,	// (0x0005737f) popup_note2_window_t2_ParamLimits

0x87b7,	// (0x0005737f) popup_note2_window_t2

0x87fc,	// (0x000573c4) popup_note2_window_t3_ParamLimits

0x87fc,	// (0x000573c4) popup_note2_window_t3

0x8841,	// (0x00057409) popup_note2_window_t4_ParamLimits

0x8841,	// (0x00057409) popup_note2_window_t4

0x3b1c,	// (0x000526e4) popup_note2_window_t5_ParamLimits

0x3b1c,	// (0x000526e4) popup_note2_window_t5

0x0004,

0xfc71,	// (0x0005e839) popup_note2_window_t_ParamLimits

0xfc71,	// (0x0005e839) popup_note2_window_t

0x8870,	// (0x00057438) popup_note2_image_window_g1_ParamLimits

0x8870,	// (0x00057438) popup_note2_image_window_g1

0x887c,	// (0x00057444) popup_note2_image_window_g2_ParamLimits

0x887c,	// (0x00057444) popup_note2_image_window_g2

0x0001,

0xfc7c,	// (0x0005e844) popup_note2_image_window_g_ParamLimits

0xfc7c,	// (0x0005e844) popup_note2_image_window_g

0x888e,	// (0x00057456) popup_note2_image_window_t1_ParamLimits

0x888e,	// (0x00057456) popup_note2_image_window_t1

0x88a6,	// (0x0005746e) popup_note2_image_window_t2_ParamLimits

0x88a6,	// (0x0005746e) popup_note2_image_window_t2

0x88be,	// (0x00057486) popup_note2_image_window_t3_ParamLimits

0x88be,	// (0x00057486) popup_note2_image_window_t3

0x0002,

0xfc81,	// (0x0005e849) popup_note2_image_window_t_ParamLimits

0xfc81,	// (0x0005e849) popup_note2_image_window_t

0x5bc1,	// (0x00054789) popup_note2_wait_window_g1_ParamLimits

0x5bc1,	// (0x00054789) popup_note2_wait_window_g1

0x88da,	// (0x000574a2) popup_note2_wait_window_g2_ParamLimits

0x88da,	// (0x000574a2) popup_note2_wait_window_g2

0x5bd9,	// (0x000547a1) popup_note2_wait_window_g3_ParamLimits

0x5bd9,	// (0x000547a1) popup_note2_wait_window_g3

0x0002,

0xfc88,	// (0x0005e850) popup_note2_wait_window_g_ParamLimits

0xfc88,	// (0x0005e850) popup_note2_wait_window_g

0x88e6,	// (0x000574ae) popup_note2_wait_window_t1_ParamLimits

0x88e6,	// (0x000574ae) popup_note2_wait_window_t1

0x8904,	// (0x000574cc) popup_note2_wait_window_t2_ParamLimits

0x8904,	// (0x000574cc) popup_note2_wait_window_t2

0x8922,	// (0x000574ea) popup_note2_wait_window_t3_ParamLimits

0x8922,	// (0x000574ea) popup_note2_wait_window_t3

0x8934,	// (0x000574fc) popup_note2_wait_window_t4_ParamLimits

0x8934,	// (0x000574fc) popup_note2_wait_window_t4

0x0003,

0xfc8f,	// (0x0005e857) popup_note2_wait_window_t_ParamLimits

0xfc8f,	// (0x0005e857) popup_note2_wait_window_t

0x8946,	// (0x0005750e) wait_bar2_pane_ParamLimits

0x8946,	// (0x0005750e) wait_bar2_pane

0x895e,	// (0x00057526) popup_snote2_single_text_window_g1_ParamLimits

0x895e,	// (0x00057526) popup_snote2_single_text_window_g1

0x8986,	// (0x0005754e) popup_snote2_single_text_window_t1_ParamLimits

0x8986,	// (0x0005754e) popup_snote2_single_text_window_t1

0x89d2,	// (0x0005759a) popup_snote2_single_text_window_t2_ParamLimits

0x89d2,	// (0x0005759a) popup_snote2_single_text_window_t2

0x8a1e,	// (0x000575e6) popup_snote2_single_text_window_t3_ParamLimits

0x8a1e,	// (0x000575e6) popup_snote2_single_text_window_t3

0x8a5f,	// (0x00057627) popup_snote2_single_text_window_t4_ParamLimits

0x8a5f,	// (0x00057627) popup_snote2_single_text_window_t4

0x8a95,	// (0x0005765d) popup_snote2_single_text_window_t5_ParamLimits

0x8a95,	// (0x0005765d) popup_snote2_single_text_window_t5

0x0004,

0xfc98,	// (0x0005e860) popup_snote2_single_text_window_t_ParamLimits

0xfc98,	// (0x0005e860) popup_snote2_single_text_window_t

0x8ac0,	// (0x00057688) popup_snote2_single_graphic_window_g1_ParamLimits

0x8ac0,	// (0x00057688) popup_snote2_single_graphic_window_g1

0x8ae8,	// (0x000576b0) popup_snote2_single_graphic_window_g2_ParamLimits

0x8ae8,	// (0x000576b0) popup_snote2_single_graphic_window_g2

0x0001,

0xfca3,	// (0x0005e86b) popup_snote2_single_graphic_window_g_ParamLimits

0xfca3,	// (0x0005e86b) popup_snote2_single_graphic_window_g

0x8b10,	// (0x000576d8) popup_snote2_single_graphic_window_t1_ParamLimits

0x8b10,	// (0x000576d8) popup_snote2_single_graphic_window_t1

0x8b5c,	// (0x00057724) popup_snote2_single_graphic_window_t2_ParamLimits

0x8b5c,	// (0x00057724) popup_snote2_single_graphic_window_t2

0x8a1e,	// (0x000575e6) popup_snote2_single_graphic_window_t3_ParamLimits

0x8a1e,	// (0x000575e6) popup_snote2_single_graphic_window_t3

0x8a5f,	// (0x00057627) popup_snote2_single_graphic_window_t4_ParamLimits

0x8a5f,	// (0x00057627) popup_snote2_single_graphic_window_t4

0x8a95,	// (0x0005765d) popup_snote2_single_graphic_window_t5_ParamLimits

0x8a95,	// (0x0005765d) popup_snote2_single_graphic_window_t5

0x0004,

0xfca8,	// (0x0005e870) popup_snote2_single_graphic_window_t_ParamLimits

0xfca8,	// (0x0005e870) popup_snote2_single_graphic_window_t

0x756b,	// (0x00056133) clock_nsta_pane_cp2_t1

0x756b,	// (0x00056133) clock_nsta_pane_cp2_t2

0x0001,

0xfabc,	// (0x0005e684) clock_nsta_pane_cp2_t

0x0ad0,	// (0x0004f698) form_field_data_wide_pane_g1_ParamLimits

0x401c,	// (0x00052be4) form_field_data_wide_pane_g2_ParamLimits

0x401c,	// (0x00052be4) form_field_data_wide_pane_g2

0x408f,	// (0x00052c57) form_field_data_wide_pane_g3_ParamLimits

0x408f,	// (0x00052c57) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0005e243) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0005e243) form_field_data_wide_pane_g

0xe049,	// (0x0005cc11) grid_touch_3_pane_ParamLimits

0xe049,	// (0x0005cc11) grid_touch_3_pane

0xe4ae,	// (0x0005d076) cell_touch_3_pane_ParamLimits

0xe4ae,	// (0x0005d076) cell_touch_3_pane

0x7ae9,	// (0x000566b1) cell_touch_3_pane_g1

0x7ae9,	// (0x000566b1) cell_touch_3_pane_g2

0x0001,

0xfb41,	// (0x0005e709) cell_touch_3_pane_g

0x3b4e,	// (0x00052716) cont_query_data_pane

0x3b56,	// (0x0005271e) cont_query_data_pane_cp1

0x8bd9,	// (0x000577a1) button_value_adjust_pane_cp7

0x8be1,	// (0x000577a9) query_popup_pane_cp3

0x47b1,	// (0x00053379) bg_popup_sub_pane_cp22_ParamLimits

0x0e7c,	// (0x0004fa44) navi_navi_volume_pane_cp2

0x0e94,	// (0x0004fa5c) popup_side_volume_key_window_g2

0x0ea0,	// (0x0004fa68) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0005e2d9) popup_side_volume_key_window_g

0x0eba,	// (0x0004fa82) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0005e2e0) popup_side_volume_key_window_t

0x4a7f,	// (0x00053647) popup_side_volume_key_window_ParamLimits

0xb9bd,	// (0x0005a585) list_double_graphic_pane_g4_ParamLimits

0xb9bd,	// (0x0005a585) list_double_graphic_pane_g4

0xded7,	// (0x0005ca9f) list_single_2heading_msg_pane_ParamLimits

0xded7,	// (0x0005ca9f) list_single_2heading_msg_pane

0xd879,	// (0x0005c441) list_single_2heading_msg_pane_g1_ParamLimits

0xd879,	// (0x0005c441) list_single_2heading_msg_pane_g1

0xd885,	// (0x0005c44d) list_single_2heading_msg_pane_g2_ParamLimits

0xd885,	// (0x0005c44d) list_single_2heading_msg_pane_g2

0xd898,	// (0x0005c460) list_single_2heading_msg_pane_g3_ParamLimits

0xd898,	// (0x0005c460) list_single_2heading_msg_pane_g3

0x35b3,	// (0x0005217b) list_single_2heading_msg_pane_g4_ParamLimits

0x35b3,	// (0x0005217b) list_single_2heading_msg_pane_g4

0x0003,

0xfcb3,	// (0x0005e87b) list_single_2heading_msg_pane_g_ParamLimits

0xfcb3,	// (0x0005e87b) list_single_2heading_msg_pane_g

0x35cb,	// (0x00052193) list_single_2heading_msg_pane_t1_ParamLimits

0x35cb,	// (0x00052193) list_single_2heading_msg_pane_t1

0xc862,	// (0x0005b42a) list_single_2heading_msg_pane_t2_ParamLimits

0xc862,	// (0x0005b42a) list_single_2heading_msg_pane_t2

0xc8cd,	// (0x0005b495) list_single_2heading_msg_pane_t3_ParamLimits

0xc8cd,	// (0x0005b495) list_single_2heading_msg_pane_t3

0x3660,	// (0x00052228) list_single_2heading_msg_pane_t4_ParamLimits

0x3660,	// (0x00052228) list_single_2heading_msg_pane_t4

0x0003,

0xfcbc,	// (0x0005e884) list_single_2heading_msg_pane_t_ParamLimits

0xfcbc,	// (0x0005e884) list_single_2heading_msg_pane_t

0x376f,	// (0x00052337) title_pane_g4_ParamLimits

0x376f,	// (0x00052337) title_pane_g4

0x0c8a,	// (0x0004f852) title_pane_stacon_g3_ParamLimits

0x0c8a,	// (0x0004f852) title_pane_stacon_g3

0x8704,	// (0x000572cc) list_single_2graphic_im_pane_g4_ParamLimits

0x8704,	// (0x000572cc) list_single_2graphic_im_pane_g4

0x661a,	// (0x000551e2) popup_side_volume_key_window_cp

0x6dc8,	// (0x00055990) main_idle_act2_pane_t1

0x189c,	// (0x00050464) toolbar_button_pane_g10

0xd28c,	// (0x0005be54) popup_toolbar_window_cp1

0x755c,	// (0x00056124) clock_nsta_pane_cp_t1

0x755c,	// (0x00056124) clock_nsta_pane_cp_t2

0x0001,

0xfab7,	// (0x0005e67f) clock_nsta_pane_cp_t

0x0e7c,	// (0x0004fa44) navi_navi_volume_pane_cp2_ParamLimits

0x0e88,	// (0x0004fa50) popup_side_volume_key_window_g1_ParamLimits

0x0e94,	// (0x0004fa5c) popup_side_volume_key_window_g2_ParamLimits

0x0ea0,	// (0x0004fa68) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0005e2d9) popup_side_volume_key_window_g_ParamLimits

0x1d80,	// (0x00050948) fep_hwr_aid_pane

0x1e27,	// (0x000509ef) bg_fep_hwr_top_pane_g4_ParamLimits

0x7b45,	// (0x0005670d) fep_hwr_top_pane_g1_ParamLimits

0x7b57,	// (0x0005671f) fep_hwr_top_pane_g2_ParamLimits

0x1e47,	// (0x00050a0f) fep_hwr_top_pane_g3_ParamLimits

0xfb0c,	// (0x0005e6d4) fep_hwr_top_pane_g_ParamLimits

0x1e5c,	// (0x00050a24) fep_hwr_top_text_pane_ParamLimits

0x63dd,	// (0x00054fa5) aid_touch_tab_arrow_arrow_2

0x63e6,	// (0x00054fae) aid_touch_tab_arrow_left_2

0x1d94,	// (0x0005095c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1dcb,	// (0x00050993) fep_hwr_prediction_pane

0x7cae,	// (0x00056876) fep_vkb_prediction_pane

0xe32b,	// (0x0005cef3) fep_vkb_side_pane_g3_ParamLimits

0xe32b,	// (0x0005cef3) fep_vkb_side_pane_g3

0x1fd7,	// (0x00050b9f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x2043,	// (0x00050c0b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x2050,	// (0x00050c18) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbb,	// (0x0005e783) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x217f,	// (0x00050d47) fep_hwr_prediction_pane_g1

0x2189,	// (0x00050d51) fep_hwr_prediction_pane_g2

0x2191,	// (0x00050d59) fep_hwr_prediction_pane_g3

0x2199,	// (0x00050d61) fep_hwr_prediction_pane_g4

0x0003,

0xfcc5,	// (0x0005e88d) fep_hwr_prediction_pane_g

0x8c06,	// (0x000577ce) fep_vkb_prediction_pane_g1

0x8c10,	// (0x000577d8) fep_vkb_prediction_pane_g2

0x8c18,	// (0x000577e0) fep_vkb_prediction_pane_g3

0x8c20,	// (0x000577e8) fep_vkb_prediction_pane_g4

0x0003,

0xfcce,	// (0x0005e896) fep_vkb_prediction_pane_g

0x1bdc,	// (0x000507a4) slider_set_pane_g3

0x1bf0,	// (0x000507b8) slider_set_pane_g4

0x1c08,	// (0x000507d0) slider_set_pane_g5

0x1bdc,	// (0x000507a4) slider_set_pane_g6

0x1c1e,	// (0x000507e6) slider_set_pane_g7

0x6a6d,	// (0x00055635) slider_form_pane_g3

0x6a76,	// (0x0005563e) slider_form_pane_g4

0x6a7e,	// (0x00055646) slider_form_pane_g5

0x6a6d,	// (0x00055635) slider_form_pane_g6

0xdeb8,	// (0x0005ca80) slider_form_pane_g7

0x7067,	// (0x00055c2f) slider_set_pane_vc_g3

0x7070,	// (0x00055c38) slider_set_pane_vc_g4

0x7079,	// (0x00055c41) slider_set_pane_vc_g5

0x7067,	// (0x00055c2f) slider_set_pane_vc_g6

0x7082,	// (0x00055c4a) slider_set_pane_vc_g7

0x7232,	// (0x00055dfa) slider_form_pane_vc_g1

0x723b,	// (0x00055e03) slider_form_pane_vc_g2

0x7244,	// (0x00055e0c) slider_form_pane_vc_g3

0x7232,	// (0x00055dfa) slider_form_pane_vc_g4

0x724d,	// (0x00055e15) slider_form_pane_vc_g5

0x0004,

0xfa89,	// (0x0005e651) slider_form_pane_vc_g

0x0284,	// (0x0004ee4c) main_idle_act3_pane

0x8c28,	// (0x000577f0) ai3_links_pane

0xe4f7,	// (0x0005d0bf) popup_ai3_data_window_ParamLimits

0xe4f7,	// (0x0005d0bf) popup_ai3_data_window

0x3727,	// (0x000522ef) grid_ai3_links_pane

0xe50f,	// (0x0005d0d7) cell_ai3_links_pane_ParamLimits

0xe50f,	// (0x0005d0d7) cell_ai3_links_pane

0x8c61,	// (0x00057829) bg_popup_sub_pane_cp11

0x8c6e,	// (0x00057836) cell_ai3_links_pane_g1

0x3727,	// (0x000522ef) bg_popup_sub_pane_cp12

0x8c93,	// (0x0005785b) heading_ai3_data_pane

0x8c9b,	// (0x00057863) list_ai3_gene_pane

0x8ca7,	// (0x0005786f) popup_ai3_data_window_g1

0x8caf,	// (0x00057877) heading_ai3_data_pane_g1

0x8cb7,	// (0x0005787f) heading_ai3_data_pane_t1

0x8cc5,	// (0x0005788d) list_double_ai3_gene_pane_ParamLimits

0x8cc5,	// (0x0005788d) list_double_ai3_gene_pane

0x8cd2,	// (0x0005789a) list_single_ai3_gene_pane_ParamLimits

0x8cd2,	// (0x0005789a) list_single_ai3_gene_pane

0x7aae,	// (0x00056676) list_highlight_pane_cp7_ParamLimits

0x7aae,	// (0x00056676) list_highlight_pane_cp7

0x8cdf,	// (0x000578a7) list_single_a13_gene_pane_t1_ParamLimits

0x8cdf,	// (0x000578a7) list_single_a13_gene_pane_t1

0x8cf6,	// (0x000578be) list_single_ai3_gene_pane_g1

0x8cff,	// (0x000578c7) list_single_ai3_gene_pane_g2

0x0001,

0xfcd7,	// (0x0005e89f) list_single_ai3_gene_pane_g

0x8d07,	// (0x000578cf) list_double_ai3_gene_pane_g1_ParamLimits

0x8d07,	// (0x000578cf) list_double_ai3_gene_pane_g1

0x8d13,	// (0x000578db) list_double_ai3_gene_pane_t1_ParamLimits

0x8d13,	// (0x000578db) list_double_ai3_gene_pane_t1

0x8d2f,	// (0x000578f7) list_double_ai3_gene_pane_t2_ParamLimits

0x8d2f,	// (0x000578f7) list_double_ai3_gene_pane_t2

0x8d44,	// (0x0005790c) list_double_ai3_gene_pane_t3_ParamLimits

0x8d44,	// (0x0005790c) list_double_ai3_gene_pane_t3

0x0002,

0xfcdc,	// (0x0005e8a4) list_double_ai3_gene_pane_t_ParamLimits

0xfcdc,	// (0x0005e8a4) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3591,	// (0x00052159) aid_size_min_col_2

0xe4e1,	// (0x0005d0a9) aid_size_min_msg_ParamLimits

0xe4e1,	// (0x0005d0a9) aid_size_min_msg

0xe33f,	// (0x0005cf07) fep_vkb_top_text_pane_g2_ParamLimits

0xe33f,	// (0x0005cf07) fep_vkb_top_text_pane_g2

0x0001,

0xfb3c,	// (0x0005e704) fep_vkb_top_text_pane_g_ParamLimits

0xfb3c,	// (0x0005e704) fep_vkb_top_text_pane_g

0x0284,	// (0x0004ee4c) main_hc_apps_shell_pane

0x8d61,	// (0x00057929) grid_hc_apps_pane_ParamLimits

0x8d61,	// (0x00057929) grid_hc_apps_pane

0x8d70,	// (0x00057938) list_hc_apps_pane

0x8d78,	// (0x00057940) scroll_pane_cp37_ParamLimits

0x8d78,	// (0x00057940) scroll_pane_cp37

0xe529,	// (0x0005d0f1) cell_hc_apps_pane_ParamLimits

0xe529,	// (0x0005d0f1) cell_hc_apps_pane

0xe5e7,	// (0x0005d1af) cell_hc_apps_pane_g1_ParamLimits

0xe5e7,	// (0x0005d1af) cell_hc_apps_pane_g1

0x8e63,	// (0x00057a2b) cell_hc_apps_pane_g2_ParamLimits

0x8e63,	// (0x00057a2b) cell_hc_apps_pane_g2

0x8e7f,	// (0x00057a47) cell_hc_apps_pane_g3_ParamLimits

0x8e7f,	// (0x00057a47) cell_hc_apps_pane_g3

0x0002,

0xfce3,	// (0x0005e8ab) cell_hc_apps_pane_g_ParamLimits

0xfce3,	// (0x0005e8ab) cell_hc_apps_pane_g

0xe614,	// (0x0005d1dc) cell_hc_apps_pane_t1_ParamLimits

0xe614,	// (0x0005d1dc) cell_hc_apps_pane_t1

0x3aa4,	// (0x0005266c) grid_highlight_pane_cp10_ParamLimits

0x3aa4,	// (0x0005266c) grid_highlight_pane_cp10

0xe652,	// (0x0005d21a) list_single_hc_apps_pane_ParamLimits

0xe652,	// (0x0005d21a) list_single_hc_apps_pane

0xe683,	// (0x0005d24b) list_single_hc_apps_pane_g1

0xd8a4,	// (0x0005c46c) list_single_hc_apps_pane_g2

0x0001,

0xfcea,	// (0x0005e8b2) list_single_hc_apps_pane_g

0xd8bd,	// (0x0005c485) list_single_hc_apps_pane_g2_copy1

0xc93b,	// (0x0005b503) list_single_hc_apps_pane_t1

0x381b,	// (0x000523e3) bg_set_opt_pane_cp_ParamLimits

0x04d7,	// (0x0004f09f) setting_slider_pane_t1_ParamLimits

0x04f0,	// (0x0004f0b8) setting_slider_pane_t2_ParamLimits

0x050a,	// (0x0004f0d2) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0005e126) setting_slider_pane_t_ParamLimits

0x0522,	// (0x0004f0ea) slider_set_pane_ParamLimits

0x118f,	// (0x0004fd57) control_pane_g5_ParamLimits

0x118f,	// (0x0004fd57) control_pane_g5

0x68ca,	// (0x00055492) slider_set_pane_g1_ParamLimits

0x1bd0,	// (0x00050798) slider_set_pane_g2_ParamLimits

0x1bdc,	// (0x000507a4) slider_set_pane_g3_ParamLimits

0x1bf0,	// (0x000507b8) slider_set_pane_g4_ParamLimits

0x1c08,	// (0x000507d0) slider_set_pane_g5_ParamLimits

0x1bdc,	// (0x000507a4) slider_set_pane_g6_ParamLimits

0x1c1e,	// (0x000507e6) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0005e527) slider_set_pane_g_ParamLimits

0x4b69,	// (0x00053731) navi_icon_text_pane_ParamLimits

0xd692,	// (0x0005c25a) aid_fill_nsta_2_ParamLimits

0xd6c9,	// (0x0005c291) aid_touch_tab_arrow_left_ParamLimits

0xd6df,	// (0x0005c2a7) aid_touch_tab_arrow_right_ParamLimits

0xd77a,	// (0x0005c342) clock_nsta_pane_ParamLimits

0x63bf,	// (0x00054f87) navi_icon_pane_g1_ParamLimits

0x63cb,	// (0x00054f93) navi_text_pane_t1_ParamLimits

0x766e,	// (0x00056236) navi_icon_text_pane_g1_ParamLimits

0x767a,	// (0x00056242) navi_icon_text_pane_t1_ParamLimits

0xe683,	// (0x0005d24b) list_single_hc_apps_pane_g1_ParamLimits

0xd8a4,	// (0x0005c46c) list_single_hc_apps_pane_g2_ParamLimits

0xfcea,	// (0x0005e8b2) list_single_hc_apps_pane_g_ParamLimits

0xd8bd,	// (0x0005c485) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc93b,	// (0x0005b503) list_single_hc_apps_pane_t1_ParamLimits

0xb7f6,	// (0x0005a3be) popup_toolbar2_fixed_window_ParamLimits

0xb7f6,	// (0x0005a3be) popup_toolbar2_fixed_window

0xc59e,	// (0x0005b166) popup_toolbar2_float_window

0x3727,	// (0x000522ef) bg_popup_sub_pane_cp27

0x8f62,	// (0x00057b2a) grid_toolbar2_float_pane

0x3727,	// (0x000522ef) bg_popup_sub_pane_cp26

0x8f62,	// (0x00057b2a) grid_toolbar2_fixed_pane

0xe69c,	// (0x0005d264) cell_toolbar2_fixed_pane_ParamLimits

0xe69c,	// (0x0005d264) cell_toolbar2_fixed_pane

0xe6b7,	// (0x0005d27f) cell_toolbar2_fixed_pane_g1

0x1656,	// (0x0005021e) toolbar2_fixed_button_pane

0x5521,	// (0x000540e9) toolbar2_fixed_button_pane_g1

0x5531,	// (0x000540f9) toolbar2_fixed_button_pane_g2

0x5529,	// (0x000540f1) toolbar2_fixed_button_pane_g3

0x5541,	// (0x00054109) toolbar2_fixed_button_pane_g4

0x5539,	// (0x00054101) toolbar2_fixed_button_pane_g5

0x5549,	// (0x00054111) toolbar2_fixed_button_pane_g6

0x5551,	// (0x00054119) toolbar2_fixed_button_pane_g7

0x5561,	// (0x00054129) toolbar2_fixed_button_pane_g8

0x5559,	// (0x00054121) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0005e429) toolbar2_fixed_button_pane_g

0x8f84,	// (0x00057b4c) cell_toolbar2_float_pane_ParamLimits

0x8f84,	// (0x00057b4c) cell_toolbar2_float_pane

0x8f98,	// (0x00057b60) cell_toolbar2_float_pane_g1

0x1656,	// (0x0005021e) toolbar2_fixed_button_pane_cp

0xe1ff,	// (0x0005cdc7) fep_vkb_accented_list_pane_ParamLimits

0xe1ff,	// (0x0005cdc7) fep_vkb_accented_list_pane

0x1fb7,	// (0x00050b7f) bg_popup_fep_shadow_pane_g9

0x4ce9,	// (0x000538b1) bg_popup_fep_shadow_pane_cp3

0x41ca,	// (0x00052d92) list_accented_list_pane

0x8fa1,	// (0x00057b69) list_single_accented_list_pane_ParamLimits

0x8fa1,	// (0x00057b69) list_single_accented_list_pane

0x4ce9,	// (0x000538b1) list_highlight_pane_cp10

0x8fb2,	// (0x00057b7a) list_single_accented_list_pane_t1

0xc4c8,	// (0x0005b090) popup_slider_window_ParamLimits

0xc4c8,	// (0x0005b090) popup_slider_window

0x8be9,	// (0x000577b1) aid_indentation_list_msg

0xe7b0,	// (0x0005d378) bg_popup_window_pane_cp19

0x90d6,	// (0x00057c9e) popup_slider_window_g1

0x90f2,	// (0x00057cba) popup_slider_window_g2

0x910e,	// (0x00057cd6) popup_slider_window_g3

0x0005,

0xfcef,	// (0x0005e8b7) popup_slider_window_g

0x916a,	// (0x00057d32) popup_slider_window_t1

0x91de,	// (0x00057da6) small_volume_slider_vertical_pane

0x7ae9,	// (0x000566b1) small_volume_slider_vertical_pane_g1

0x7ae9,	// (0x000566b1) small_volume_slider_vertical_pane_g2

0x91fa,	// (0x00057dc2) small_volume_slider_vertical_pane_g3

0x0002,

0xfd01,	// (0x0005e8c9) small_volume_slider_vertical_pane_g

0xb764,	// (0x0005a32c) area_side_right_pane_ParamLimits

0xb764,	// (0x0005a32c) area_side_right_pane

0xc969,	// (0x0005b531) aid_size_side_button_ParamLimits

0xc969,	// (0x0005b531) aid_size_side_button

0xc982,	// (0x0005b54a) grid_sctrl_middle_pane_ParamLimits

0xc982,	// (0x0005b54a) grid_sctrl_middle_pane

0x21d4,	// (0x00050d9c) sctrl_sk_bottom_pane

0x21e5,	// (0x00050dad) sctrl_sk_top_pane

0x21f7,	// (0x00050dbf) aid_touch_sctrl_top

0x2204,	// (0x00050dcc) bg_sctrl_sk_pane_ParamLimits

0x2204,	// (0x00050dcc) bg_sctrl_sk_pane

0x2212,	// (0x00050dda) sctrl_sk_top_pane_g1

0x221f,	// (0x00050de7) sctrl_sk_top_pane_t1

0x21f7,	// (0x00050dbf) aid_touch_sctrl_bottom

0x2204,	// (0x00050dcc) bg_sctrl_sk_pane_cp_ParamLimits

0x2204,	// (0x00050dcc) bg_sctrl_sk_pane_cp

0x223a,	// (0x00050e02) sctrl_sk_bottom_pane_g1

0x221f,	// (0x00050de7) sctrl_sk_bottom_pane_t1

0xc99c,	// (0x0005b564) cell_sctrl_middle_pane_ParamLimits

0xc99c,	// (0x0005b564) cell_sctrl_middle_pane

0xc9ad,	// (0x0005b575) aid_touch_sctrl_middle_ParamLimits

0xc9ad,	// (0x0005b575) aid_touch_sctrl_middle

0xc9ba,	// (0x0005b582) bg_sctrl_middle_pane_ParamLimits

0xc9ba,	// (0x0005b582) bg_sctrl_middle_pane

0x28ab,	// (0x00051473) cell_sctrl_middle_pane_g1_ParamLimits

0x28ab,	// (0x00051473) cell_sctrl_middle_pane_g1

0xc9c8,	// (0x0005b590) cell_sctrl_middle_pane_g2_ParamLimits

0xc9c8,	// (0x0005b590) cell_sctrl_middle_pane_g2

0x0001,

0xfd0d,	// (0x0005e8d5) cell_sctrl_middle_pane_g_ParamLimits

0xfd0d,	// (0x0005e8d5) cell_sctrl_middle_pane_g

0x5521,	// (0x000540e9) bg_sctrl_middle_pane_g1

0x5529,	// (0x000540f1) bg_sctrl_middle_pane_g2

0x5531,	// (0x000540f9) bg_sctrl_middle_pane_g3

0x5539,	// (0x00054101) bg_sctrl_middle_pane_g4

0x5541,	// (0x00054109) bg_sctrl_middle_pane_g5

0x5549,	// (0x00054111) bg_sctrl_middle_pane_g6

0x5551,	// (0x00054119) bg_sctrl_middle_pane_g7

0x5559,	// (0x00054121) bg_sctrl_middle_pane_g8

0x0007,

0xfd12,	// (0x0005e8da) bg_sctrl_middle_pane_g

0x5561,	// (0x00054129) bg_sctrl_middle_pane_g8_copy1

0x5521,	// (0x000540e9) bg_sctrl_sk_pane_g1

0x5531,	// (0x000540f9) bg_sctrl_sk_pane_g2

0x5529,	// (0x000540f1) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0005e429) bg_sctrl_sk_pane_g

0x3fa4,	// (0x00052b6c) aid_size_touch_scroll_bar

0x5541,	// (0x00054109) bg_sctrl_sk_pane_g4

0x5539,	// (0x00054101) bg_sctrl_sk_pane_g5

0x5549,	// (0x00054111) bg_sctrl_sk_pane_g6

0x5551,	// (0x00054119) bg_sctrl_sk_pane_g7

0x5561,	// (0x00054129) bg_sctrl_sk_pane_g8

0x5559,	// (0x00054121) bg_sctrl_sk_pane_g9

0x1341,	// (0x0004ff09) popup_fep_china_hwr2_fs_candidate_window

0xbff6,	// (0x0005abbe) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbff6,	// (0x0005abbe) popup_fep_china_hwr2_fs_control_window

0x1fd7,	// (0x00050b9f) sctrl_sk_top_pane_g2

0x0001,

0xfd08,	// (0x0005e8d0) sctrl_sk_top_pane_g

0xe868,	// (0x0005d430) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe868,	// (0x0005d430) aid_fep_china_hwr2_fs_cell

0xe87c,	// (0x0005d444) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe87c,	// (0x0005d444) bg_popup_fep_shadow_pane_cp4

0xe893,	// (0x0005d45b) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe893,	// (0x0005d45b) bg_popup_fep_shadow_pane_cp5

0xe8a5,	// (0x0005d46d) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe8a5,	// (0x0005d46d) popup_fep_china_hwr2_fs_control_bar_grid

0xe8b9,	// (0x0005d481) popup_fep_china_hwr2_fs_control_funtion_grid

0x9256,	// (0x00057e1e) aid_fep_china_hwr2_fs_candi_cell

0x3727,	// (0x000522ef) bg_popup_fep_shadow_pane_cp6

0x9260,	// (0x00057e28) popup_fep_china_hwr2_fs_candidate_grid

0xe8c1,	// (0x0005d489) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe8c1,	// (0x0005d489) cell_fep_china_hwr2_fs_funtion_grid

0x7ae9,	// (0x000566b1) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x9282,	// (0x00057e4a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x9282,	// (0x00057e4a) cell_fep_china_hwr2_fs_funtion_grid_g1

0x9290,	// (0x00057e58) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x9290,	// (0x00057e58) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd23,	// (0x0005e8eb) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd23,	// (0x0005e8eb) cell_fep_china_hwr2_fs_funtion_grid_g

0xe8d9,	// (0x0005d4a1) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe8d9,	// (0x0005d4a1) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe8ee,	// (0x0005d4b6) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe8ee,	// (0x0005d4b6) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd28,	// (0x0005e8f0) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd28,	// (0x0005e8f0) cell_fep_china_hwr2_fs_funtion_grid_t

0x92d7,	// (0x00057e9f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x92df,	// (0x00057ea7) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x92e7,	// (0x00057eaf) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2d,	// (0x0005e8f5) popup_fep_china_hwr2_fs_control_bar_grid_g

0x92ef,	// (0x00057eb7) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x92ef,	// (0x00057eb7) cell_fep_china_hwr2_fs_candidate_grid

0x9308,	// (0x00057ed0) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9310,	// (0x00057ed8) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7ae9,	// (0x000566b1) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7ae9,	// (0x000566b1) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb41,	// (0x0005e709) cell_fep_china_hwr2_fs_candidate_grid_g

0x9318,	// (0x00057ee0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x511f,	// (0x00053ce7) clock_nsta_pane_cp_24_ParamLimits

0x511f,	// (0x00053ce7) clock_nsta_pane_cp_24

0x519d,	// (0x00053d65) indicator_nsta_pane_cp_24_ParamLimits

0x519d,	// (0x00053d65) indicator_nsta_pane_cp_24

0x623b,	// (0x00054e03) heading_pane_g1

0x0001,

0xf8c6,	// (0x0005e48e) heading_pane_g

0x6c11,	// (0x000557d9) grid_sct_catagory_button_pane

0x6c41,	// (0x00055809) scroll_pane_cp5_ParamLimits

0x76bc,	// (0x00056284) button_value_adjust_pane_cp5_ParamLimits

0x76bc,	// (0x00056284) button_value_adjust_pane_cp5

0x779b,	// (0x00056363) form2_midp_time_pane_ParamLimits

0x9326,	// (0x00057eee) cell_sct_catagory_button_pane_ParamLimits

0x9326,	// (0x00057eee) cell_sct_catagory_button_pane

0x7aae,	// (0x00056676) bg_button_pane_cp01_ParamLimits

0x7aae,	// (0x00056676) bg_button_pane_cp01

0x7ae9,	// (0x000566b1) cell_sct_catagory_button_pane_g1

0xc541,	// (0x0005b109) popup_tb_extension_window

0xe90a,	// (0x0005d4d2) aid_size_cell_ext_ParamLimits

0xe90a,	// (0x0005d4d2) aid_size_cell_ext

0x3de6,	// (0x000529ae) bg_tb_trans_pane_cp1_ParamLimits

0x3de6,	// (0x000529ae) bg_tb_trans_pane_cp1

0xe930,	// (0x0005d4f8) grid_tb_ext_pane_ParamLimits

0xe930,	// (0x0005d4f8) grid_tb_ext_pane

0xe972,	// (0x0005d53a) cell_tb_ext_pane_ParamLimits

0xe972,	// (0x0005d53a) cell_tb_ext_pane

0xe99a,	// (0x0005d562) cell_tb_ext_pane_g1_ParamLimits

0xe99a,	// (0x0005d562) cell_tb_ext_pane_g1

0x93be,	// (0x00057f86) cell_tb_ext_pane_t1

0x3aa4,	// (0x0005266c) list_highlight_pane_cp11_ParamLimits

0x3aa4,	// (0x0005266c) list_highlight_pane_cp11

0xb80b,	// (0x0005a3d3) popup_uni_indicator_window_ParamLimits

0xb80b,	// (0x0005a3d3) popup_uni_indicator_window

0x4081,	// (0x00052c49) bg_popup_sub_pane_cp14

0x93d9,	// (0x00057fa1) list_uniindi_pane

0x93e5,	// (0x00057fad) uniindi_top_pane

0x3aa4,	// (0x0005266c) bg_uniindi_top_pane

0x9404,	// (0x00057fcc) uniindi_top_pane_g1

0x941a,	// (0x00057fe2) uniindi_top_pane_g2

0x0003,

0xfd34,	// (0x0005e8fc) uniindi_top_pane_g

0x9444,	// (0x0005800c) uniindi_top_pane_t1

0x946e,	// (0x00058036) list_single_uniindi_pane_ParamLimits

0x946e,	// (0x00058036) list_single_uniindi_pane

0x7ae9,	// (0x000566b1) bg_uniindi_top_pane_g1

0x9481,	// (0x00058049) list_single_uniindi_pane_g1

0x9494,	// (0x0005805c) list_single_uniindi_pane_t1

0x0284,	// (0x0004ee4c) control_bg_pane

0x94b9,	// (0x00058081) bg_sctrl_sk_pane_cp1

0x94c2,	// (0x0005808a) bg_sctrl_sk_pane_cp2

0x94cb,	// (0x00058093) control_bg_pane_g1

0x94d4,	// (0x0005809c) control_bg_pane_g2

0x0001,

0xfd3d,	// (0x0005e905) control_bg_pane_g

0x7500,	// (0x000560c8) cell_indicator_nsta_pane_g1_ParamLimits

0xe076,	// (0x0005cc3e) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa5,	// (0x0005e66d) cell_indicator_nsta_pane_g_ParamLimits

0x336e,	// (0x00051f36) form2_midp_time_pane_t1_ParamLimits

0x1d72,	// (0x0005093a) main_idle_act4_pane_ParamLimits

0x1d72,	// (0x0005093a) main_idle_act4_pane

0xc541,	// (0x0005b109) popup_tb_extension_window_ParamLimits

0xe958,	// (0x0005d520) tb_ext_find_pane_ParamLimits

0xe958,	// (0x0005d520) tb_ext_find_pane

0x94dd,	// (0x000580a5) ai_gene_pane_1_cp1

0x4e28,	// (0x000539f0) ai_gene_pane_2_cp1

0x94e5,	// (0x000580ad) list_single_idle_plugin_calendar_pane

0x94ee,	// (0x000580b6) list_single_idle_plugin_notification_pane

0x94f7,	// (0x000580bf) list_single_idle_plugin_player_pane

0xe9b7,	// (0x0005d57f) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe9b7,	// (0x0005d57f) list_single_idle_plugin_shortcut_pane

0xe9df,	// (0x0005d5a7) main_idle_act4_pane_t1

0xe9f5,	// (0x0005d5bd) main_idle_act4_pane_t2

0x0001,

0xfd42,	// (0x0005e90a) main_idle_act4_pane_t

0xea0d,	// (0x0005d5d5) middle_sk_idle_act4_pane_ParamLimits

0xea0d,	// (0x0005d5d5) middle_sk_idle_act4_pane

0xea29,	// (0x0005d5f1) popup_clock_digital_analogue_window_cp2

0xea50,	// (0x0005d618) shortcut_wheel_idle_act4_pane_ParamLimits

0xea50,	// (0x0005d618) shortcut_wheel_idle_act4_pane

0x7ae9,	// (0x000566b1) shortcut_wheel_idle_act4_pane_g1

0x7ae9,	// (0x000566b1) shortcut_wheel_idle_act4_pane_g2

0x7ae9,	// (0x000566b1) shortcut_wheel_idle_act4_pane_g3

0x7ae9,	// (0x000566b1) shortcut_wheel_idle_act4_pane_g4

0x7ae9,	// (0x000566b1) shortcut_wheel_idle_act4_pane_g5

0x958a,	// (0x00058152) shortcut_wheel_idle_act4_pane_g6

0x9592,	// (0x0005815a) shortcut_wheel_idle_act4_pane_g7

0x959a,	// (0x00058162) shortcut_wheel_idle_act4_pane_g8

0x95a2,	// (0x0005816a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd47,	// (0x0005e90f) shortcut_wheel_idle_act4_pane_g

0xe211,	// (0x0005cdd9) middle_sk_idle_act4_pane_g1_ParamLimits

0xe211,	// (0x0005cdd9) middle_sk_idle_act4_pane_g1

0xeacd,	// (0x0005d695) middle_sk_idle_act4_pane_g2_ParamLimits

0xeacd,	// (0x0005d695) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6a,	// (0x0005e932) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6a,	// (0x0005e932) middle_sk_idle_act4_pane_g

0xeae5,	// (0x0005d6ad) middle_sk_idle_act4_pane_t1_ParamLimits

0xeae5,	// (0x0005d6ad) middle_sk_idle_act4_pane_t1

0xeb14,	// (0x0005d6dc) grid_ai_shortcut_pane_ParamLimits

0xeb14,	// (0x0005d6dc) grid_ai_shortcut_pane

0xeb31,	// (0x0005d6f9) list_highlight_pane_cp16_ParamLimits

0xeb31,	// (0x0005d6f9) list_highlight_pane_cp16

0xeb3e,	// (0x0005d706) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xeb3e,	// (0x0005d706) list_single_idle_plugin_shortcut_pane_g1

0xeb4a,	// (0x0005d712) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xeb4a,	// (0x0005d712) list_single_idle_plugin_shortcut_pane_g2

0xeb66,	// (0x0005d72e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeb66,	// (0x0005d72e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6f,	// (0x0005e937) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6f,	// (0x0005e937) list_single_idle_plugin_shortcut_pane_g

0xeb7b,	// (0x0005d743) cell_ai_shortcut_pane_ParamLimits

0xeb7b,	// (0x0005d743) cell_ai_shortcut_pane

0xeb9e,	// (0x0005d766) cell_ai_shortcut_pane_g1_ParamLimits

0xeb9e,	// (0x0005d766) cell_ai_shortcut_pane_g1

0x94dd,	// (0x000580a5) ai_gene_pane_1_cp2

0x96cf,	// (0x00058297) ai_gene_pane_2_cp2

0x96d7,	// (0x0005829f) list_highlight_pane_cp15

0x96e0,	// (0x000582a8) list_single_idle_plugin_calendar_pane_g1

0x96d7,	// (0x0005829f) list_highlight_pane_cp17

0x96e8,	// (0x000582b0) list_single_idle_plugin_calendar_pane_g1_copy1

0x96f0,	// (0x000582b8) list_single_idle_plugin_player_pane_g1

0x6e68,	// (0x00055a30) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd76,	// (0x0005e93e) list_single_idle_plugin_player_pane_g

0x96f8,	// (0x000582c0) list_single_idle_plugin_player_pane_t1

0x9706,	// (0x000582ce) list_single_idle_plugin_player_pane_t2

0x9714,	// (0x000582dc) list_single_idle_plugin_player_pane_t3

0x9722,	// (0x000582ea) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7b,	// (0x0005e943) list_single_idle_plugin_player_pane_t

0x9730,	// (0x000582f8) wait_bar_pane_cp15

0x9738,	// (0x00058300) grid_ai_notification_pane

0x6e68,	// (0x00055a30) list_single_idle_plugin_notification_pane_g1

0xebc0,	// (0x0005d788) cell_ai_notification_pane_ParamLimits

0xebc0,	// (0x0005d788) cell_ai_notification_pane

0x974e,	// (0x00058316) cell_ai_notification_pane_g1

0x9756,	// (0x0005831e) cell_ai_notification_pane_t1

0xebcd,	// (0x0005d795) tb_ext_find_button_pane

0xebd5,	// (0x0005d79d) tb_ext_find_pane_g1

0xebdd,	// (0x0005d7a5) tb_ext_find_pane_t1

0x46c5,	// (0x0005328d) tb_ext_find_button_pane_g1

0x9782,	// (0x0005834a) tb_ext_find_button_pane_g2

0x0001,

0xfd84,	// (0x0005e94c) tb_ext_find_button_pane_g

0xe9df,	// (0x0005d5a7) main_idle_act4_pane_t1_ParamLimits

0xe9f5,	// (0x0005d5bd) main_idle_act4_pane_t2_ParamLimits

0xfd42,	// (0x0005e90a) main_idle_act4_pane_t_ParamLimits

0xea29,	// (0x0005d5f1) popup_clock_digital_analogue_window_cp2_ParamLimits

0xea40,	// (0x0005d608) sat_plugin_idle_act4_pane_ParamLimits

0xea40,	// (0x0005d608) sat_plugin_idle_act4_pane

0xebeb,	// (0x0005d7b3) sat_plugin_idle_act4_pane_t1_ParamLimits

0xebeb,	// (0x0005d7b3) sat_plugin_idle_act4_pane_t1

0xec03,	// (0x0005d7cb) sat_plugin_idle_act4_pane_t2_ParamLimits

0xec03,	// (0x0005d7cb) sat_plugin_idle_act4_pane_t2

0xec1b,	// (0x0005d7e3) sat_plugin_idle_act4_pane_t3_ParamLimits

0xec1b,	// (0x0005d7e3) sat_plugin_idle_act4_pane_t3

0xec33,	// (0x0005d7fb) sat_plugin_idle_act4_pane_t4_ParamLimits

0xec33,	// (0x0005d7fb) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd89,	// (0x0005e951) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd89,	// (0x0005e951) sat_plugin_idle_act4_pane_t

0x0349,	// (0x0004ef11) popup_battery_window_ParamLimits

0x0349,	// (0x0004ef11) popup_battery_window

0x3aa4,	// (0x0005266c) bg_popup_sub_pane_cp25_ParamLimits

0x3aa4,	// (0x0005266c) bg_popup_sub_pane_cp25

0x97d7,	// (0x0005839f) popup_battery_window_g1_ParamLimits

0x97d7,	// (0x0005839f) popup_battery_window_g1

0x97e3,	// (0x000583ab) popup_battery_window_t1_ParamLimits

0x97e3,	// (0x000583ab) popup_battery_window_t1

0x97f5,	// (0x000583bd) popup_battery_window_t2_ParamLimits

0x97f5,	// (0x000583bd) popup_battery_window_t2

0x0001,

0xfd92,	// (0x0005e95a) popup_battery_window_t_ParamLimits

0xfd92,	// (0x0005e95a) popup_battery_window_t

0xd4f1,	// (0x0005c0b9) midp_canvas_pane_ParamLimits

0xd550,	// (0x0005c118) midp_keypad_pane_ParamLimits

0xd550,	// (0x0005c118) midp_keypad_pane

0x5023,	// (0x00053beb) main_midp_pane_ParamLimits

0x757a,	// (0x00056142) signal_pane_g2_cp_ParamLimits

0xec4b,	// (0x0005d813) aid_size_cell_midp_keypad_ParamLimits

0xec4b,	// (0x0005d813) aid_size_cell_midp_keypad

0xec69,	// (0x0005d831) midp_keyp_game_grid_pane_ParamLimits

0xec69,	// (0x0005d831) midp_keyp_game_grid_pane

0xec90,	// (0x0005d858) midp_keyp_rocker_pane_ParamLimits

0xec90,	// (0x0005d858) midp_keyp_rocker_pane

0xece1,	// (0x0005d8a9) midp_keyp_sk_left_pane_ParamLimits

0xece1,	// (0x0005d8a9) midp_keyp_sk_left_pane

0xed35,	// (0x0005d8fd) midp_keyp_sk_right_pane_ParamLimits

0xed35,	// (0x0005d8fd) midp_keyp_sk_right_pane

0x3727,	// (0x000522ef) bg_button_pane_cp03

0xed89,	// (0x0005d951) midp_keyp_sk_left_pane_g1

0x3727,	// (0x000522ef) bg_button_pane_cp04

0xed89,	// (0x0005d951) midp_keyp_sk_right_pane_g1

0x7ae9,	// (0x000566b1) midp_keyp_rocker_pane_g1

0xed92,	// (0x0005d95a) keyp_game_cell_pane_ParamLimits

0xed92,	// (0x0005d95a) keyp_game_cell_pane

0x3727,	// (0x000522ef) bg_button_pane_cp02

0xedb6,	// (0x0005d97e) keyp_game_cell_pane_g1

0xb7a6,	// (0x0005a36e) popup_fep_vkb2_window_ParamLimits

0xb7a6,	// (0x0005a36e) popup_fep_vkb2_window

0xc9d4,	// (0x0005b59c) aid_size_cell_vkb2_ParamLimits

0xc9d4,	// (0x0005b59c) aid_size_cell_vkb2

0xca0a,	// (0x0005b5d2) popup_fep_vkb2_window_g1_ParamLimits

0xca0a,	// (0x0005b5d2) popup_fep_vkb2_window_g1

0xca5a,	// (0x0005b622) vkb2_area_bottom_pane_ParamLimits

0xca5a,	// (0x0005b622) vkb2_area_bottom_pane

0xcaae,	// (0x0005b676) vkb2_area_keypad_pane_ParamLimits

0xcaae,	// (0x0005b676) vkb2_area_keypad_pane

0xcaf6,	// (0x0005b6be) vkb2_area_top_pane_ParamLimits

0xcaf6,	// (0x0005b6be) vkb2_area_top_pane

0xcb7c,	// (0x0005b744) vkb2_top_entry_pane_ParamLimits

0xcb7c,	// (0x0005b744) vkb2_top_entry_pane

0xcba9,	// (0x0005b771) vkb2_top_grid_left_pane_ParamLimits

0xcba9,	// (0x0005b771) vkb2_top_grid_left_pane

0xcbc9,	// (0x0005b791) vkb2_top_grid_right_pane_ParamLimits

0xcbc9,	// (0x0005b791) vkb2_top_grid_right_pane

0x24a6,	// (0x0005106e) vkb2_cell_keypad_pane_ParamLimits

0x24a6,	// (0x0005106e) vkb2_cell_keypad_pane

0xcc0f,	// (0x0005b7d7) vkb2_area_bottom_grid_pane_ParamLimits

0xcc0f,	// (0x0005b7d7) vkb2_area_bottom_grid_pane

0xcc39,	// (0x0005b801) vkb2_area_bottom_pane_g1_ParamLimits

0xcc39,	// (0x0005b801) vkb2_area_bottom_pane_g1

0xcc5f,	// (0x0005b827) vkb2_area_bottom_pane_g2_ParamLimits

0xcc5f,	// (0x0005b827) vkb2_area_bottom_pane_g2

0xcc90,	// (0x0005b858) vkb2_area_bottom_pane_g3_ParamLimits

0xcc90,	// (0x0005b858) vkb2_area_bottom_pane_g3

0x0002,

0xfd97,	// (0x0005e95f) vkb2_area_bottom_pane_g_ParamLimits

0xfd97,	// (0x0005e95f) vkb2_area_bottom_pane_g

0x2650,	// (0x00051218) vkb2_top_cell_left_pane_ParamLimits

0x2650,	// (0x00051218) vkb2_top_cell_left_pane

0xedbf,	// (0x0005d987) vkb2_top_entry_pane_g1_ParamLimits

0xedbf,	// (0x0005d987) vkb2_top_entry_pane_g1

0xedcd,	// (0x0005d995) vkb2_top_entry_pane_t1_ParamLimits

0xedcd,	// (0x0005d995) vkb2_top_entry_pane_t1

0x99a6,	// (0x0005856e) vkb2_top_entry_pane_t2_ParamLimits

0x99a6,	// (0x0005856e) vkb2_top_entry_pane_t2

0x99d8,	// (0x000585a0) vkb2_top_entry_pane_t3_ParamLimits

0x99d8,	// (0x000585a0) vkb2_top_entry_pane_t3

0x0002,

0xfd9e,	// (0x0005e966) vkb2_top_entry_pane_t_ParamLimits

0xfd9e,	// (0x0005e966) vkb2_top_entry_pane_t

0xccfa,	// (0x0005b8c2) vkb2_top_grid_right_pane_g1_ParamLimits

0xccfa,	// (0x0005b8c2) vkb2_top_grid_right_pane_g1

0x26b3,	// (0x0005127b) vkb2_top_grid_right_pane_g2_ParamLimits

0x26b3,	// (0x0005127b) vkb2_top_grid_right_pane_g2

0x26cb,	// (0x00051293) vkb2_top_grid_right_pane_g3_ParamLimits

0x26cb,	// (0x00051293) vkb2_top_grid_right_pane_g3

0xcd10,	// (0x0005b8d8) vkb2_top_grid_right_pane_g4_ParamLimits

0xcd10,	// (0x0005b8d8) vkb2_top_grid_right_pane_g4

0x0003,

0xfda5,	// (0x0005e96d) vkb2_top_grid_right_pane_g_ParamLimits

0xfda5,	// (0x0005e96d) vkb2_top_grid_right_pane_g

0x26f9,	// (0x000512c1) vkb2_top_cell_left_pane_g1

0x2710,	// (0x000512d8) vkb2_cell_keypad_pane_g1_ParamLimits

0x2710,	// (0x000512d8) vkb2_cell_keypad_pane_g1

0x99fc,	// (0x000585c4) vkb2_cell_keypad_pane_t1_ParamLimits

0x99fc,	// (0x000585c4) vkb2_cell_keypad_pane_t1

0x271e,	// (0x000512e6) vkb2_cell_bottom_grid_pane_ParamLimits

0x271e,	// (0x000512e6) vkb2_cell_bottom_grid_pane

0x2757,	// (0x0005131f) vkb2_cell_bottom_grid_pane_g1

0xea71,	// (0x0005d639) aid_call2_pane_cp02

0xea79,	// (0x0005d641) aid_call_pane_cp02

0xea81,	// (0x0005d649) clock_digital_number_pane_cp10

0xea89,	// (0x0005d651) clock_digital_number_pane_cp11

0xea91,	// (0x0005d659) clock_digital_number_pane_cp12

0xea99,	// (0x0005d661) clock_digital_number_pane_cp13

0xeaa1,	// (0x0005d669) clock_digital_separator_pane_cp10

0x46c5,	// (0x0005328d) popup_clock_digital_analogue_window_cp2_g1

0x46c5,	// (0x0005328d) popup_clock_digital_analogue_window_cp2_g2

0xeaa9,	// (0x0005d671) popup_clock_digital_analogue_window_cp2_g3

0x46c5,	// (0x0005328d) popup_clock_digital_analogue_window_cp2_g4

0xeaa9,	// (0x0005d671) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5a,	// (0x0005e922) popup_clock_digital_analogue_window_cp2_g

0xeab1,	// (0x0005d679) popup_clock_digital_analogue_window_cp2_t1

0xeabf,	// (0x0005d687) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd65,	// (0x0005e92d) popup_clock_digital_analogue_window_cp2_t

0x7ae9,	// (0x000566b1) clock_digital_number_pane_cp10_g1

0x7ae9,	// (0x000566b1) clock_digital_number_pane_cp10_g2

0x0001,

0xfb41,	// (0x0005e709) clock_digital_number_pane_cp10_g

0x7ae9,	// (0x000566b1) clock_digital_separator_pane_cp10_g1

0x7ae9,	// (0x000566b1) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb41,	// (0x0005e709) clock_digital_separator_pane_cp10_g

0x9426,	// (0x00057fee) uniindi_top_pane_g3

0x9437,	// (0x00057fff) uniindi_top_pane_g4

0x2531,	// (0x000510f9) vkb2_row_keypad_pane_ParamLimits

0x2531,	// (0x000510f9) vkb2_row_keypad_pane

0x2777,	// (0x0005133f) vkb2_cell_t_keypad_pane_ParamLimits

0x2777,	// (0x0005133f) vkb2_cell_t_keypad_pane

0x2787,	// (0x0005134f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2787,	// (0x0005134f) vkb2_cell_t_keypad_pane_cp08

0x279a,	// (0x00051362) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x279a,	// (0x00051362) vkb2_cell_t_keypad_pane_cp09

0x27ae,	// (0x00051376) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x27ae,	// (0x00051376) vkb2_cell_t_keypad_pane_cp01

0x27bf,	// (0x00051387) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x27bf,	// (0x00051387) vkb2_cell_t_keypad_pane_cp02

0x27d0,	// (0x00051398) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x27d0,	// (0x00051398) vkb2_cell_t_keypad_pane_cp03

0x27e1,	// (0x000513a9) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x27e1,	// (0x000513a9) vkb2_cell_t_keypad_pane_cp04

0x27f2,	// (0x000513ba) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x27f2,	// (0x000513ba) vkb2_cell_t_keypad_pane_cp05

0x2803,	// (0x000513cb) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2803,	// (0x000513cb) vkb2_cell_t_keypad_pane_cp06

0x2814,	// (0x000513dc) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2814,	// (0x000513dc) vkb2_cell_t_keypad_pane_cp07

0x2825,	// (0x000513ed) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2825,	// (0x000513ed) vkb2_cell_t_keypad_pane_cp10

0x1fd7,	// (0x00050b9f) vkb2_cell_t_keypad_pane_g1

0x9a13,	// (0x000585db) vkb2_cell_t_keypad_pane_t1

0x0284,	// (0x0004ee4c) popup_grid_graphic2_window

0xee06,	// (0x0005d9ce) aid_size_cell_graphic2_ParamLimits

0xee06,	// (0x0005d9ce) aid_size_cell_graphic2

0xee44,	// (0x0005da0c) bg_popup_window_pane_cp21_ParamLimits

0xee44,	// (0x0005da0c) bg_popup_window_pane_cp21

0xee52,	// (0x0005da1a) graphic2_pages_pane_ParamLimits

0xee52,	// (0x0005da1a) graphic2_pages_pane

0xeea8,	// (0x0005da70) grid_graphic2_control_pane_ParamLimits

0xeea8,	// (0x0005da70) grid_graphic2_control_pane

0xeef0,	// (0x0005dab8) grid_graphic2_pane_ParamLimits

0xeef0,	// (0x0005dab8) grid_graphic2_pane

0xef77,	// (0x0005db3f) cell_graphic2_pane

0x0284,	// (0x0004ee4c) main_comp_mode_pane

0x8c9b,	// (0x00057863) list_ai3_gene_pane_ParamLimits

0xe7b0,	// (0x0005d378) bg_popup_window_pane_cp19_ParamLimits

0x9078,	// (0x00057c40) bg_touch_area_indi_pane_ParamLimits

0x9078,	// (0x00057c40) bg_touch_area_indi_pane

0x908e,	// (0x00057c56) bg_touch_area_indi_pane_cp01_ParamLimits

0x908e,	// (0x00057c56) bg_touch_area_indi_pane_cp01

0x90a4,	// (0x00057c6c) bg_touch_area_indi_pane_cp02_ParamLimits

0x90a4,	// (0x00057c6c) bg_touch_area_indi_pane_cp02

0x90bc,	// (0x00057c84) bg_touch_area_indi_pane_cp03_ParamLimits

0x90bc,	// (0x00057c84) bg_touch_area_indi_pane_cp03

0x90d6,	// (0x00057c9e) popup_slider_window_g1_ParamLimits

0x90f2,	// (0x00057cba) popup_slider_window_g2_ParamLimits

0x910e,	// (0x00057cd6) popup_slider_window_g3_ParamLimits

0xfcef,	// (0x0005e8b7) popup_slider_window_g_ParamLimits

0x916a,	// (0x00057d32) popup_slider_window_t1_ParamLimits

0x91de,	// (0x00057da6) small_volume_slider_vertical_pane_ParamLimits

0xef77,	// (0x0005db3f) cell_graphic2_pane_ParamLimits

0xefd4,	// (0x0005db9c) bg_button_pane_cp10_ParamLimits

0xefd4,	// (0x0005db9c) bg_button_pane_cp10

0xefe7,	// (0x0005dbaf) bg_button_pane_cp11_ParamLimits

0xefe7,	// (0x0005dbaf) bg_button_pane_cp11

0xeffa,	// (0x0005dbc2) graphic2_pages_pane_g1_ParamLimits

0xeffa,	// (0x0005dbc2) graphic2_pages_pane_g1

0xf015,	// (0x0005dbdd) graphic2_pages_pane_g2_ParamLimits

0xf015,	// (0x0005dbdd) graphic2_pages_pane_g2

0x0001,

0xfdb3,	// (0x0005e97b) graphic2_pages_pane_g_ParamLimits

0xfdb3,	// (0x0005e97b) graphic2_pages_pane_g

0xf02d,	// (0x0005dbf5) graphic2_pages_pane_t1_ParamLimits

0xf02d,	// (0x0005dbf5) graphic2_pages_pane_t1

0xf045,	// (0x0005dc0d) cell_graphic2_control_pane_ParamLimits

0xf045,	// (0x0005dc0d) cell_graphic2_control_pane

0xf077,	// (0x0005dc3f) cell_graphic2_pane_g1_ParamLimits

0xf077,	// (0x0005dc3f) cell_graphic2_pane_g1

0xe21f,	// (0x0005cde7) cell_graphic2_pane_g2_ParamLimits

0xe21f,	// (0x0005cde7) cell_graphic2_pane_g2

0xeb91,	// (0x0005d759) cell_graphic2_pane_g3_ParamLimits

0xeb91,	// (0x0005d759) cell_graphic2_pane_g3

0xe22c,	// (0x0005cdf4) cell_graphic2_pane_g4_ParamLimits

0xe22c,	// (0x0005cdf4) cell_graphic2_pane_g4

0xf084,	// (0x0005dc4c) cell_graphic2_pane_g5_ParamLimits

0xf084,	// (0x0005dc4c) cell_graphic2_pane_g5

0x0004,

0xfdb8,	// (0x0005e980) cell_graphic2_pane_g_ParamLimits

0xfdb8,	// (0x0005e980) cell_graphic2_pane_g

0xf0a4,	// (0x0005dc6c) cell_graphic2_pane_t1_ParamLimits

0xf0a4,	// (0x0005dc6c) cell_graphic2_pane_t1

0x622f,	// (0x00054df7) grid_highlight_pane_cp11_ParamLimits

0x622f,	// (0x00054df7) grid_highlight_pane_cp11

0x3aa4,	// (0x0005266c) bg_button_pane_cp05

0xf0d8,	// (0x0005dca0) cell_graphic2_control_pane_g1

0x7ae9,	// (0x000566b1) bg_touch_area_indi_pane_g1

0x9d02,	// (0x000588ca) aid_cmod_rocker_key_size

0x9d0c,	// (0x000588d4) aid_cmode_itu_key_size

0x9d16,	// (0x000588de) main_cmode_video_pane

0x9d20,	// (0x000588e8) main_comp_mode_itu_pane

0x9d2c,	// (0x000588f4) main_comp_mode_rocker_pane

0x9d38,	// (0x00058900) cell_cmode_rocker_pane_ParamLimits

0x9d38,	// (0x00058900) cell_cmode_rocker_pane

0x9d4a,	// (0x00058912) cell_cmode_itu_pane_ParamLimits

0x9d4a,	// (0x00058912) cell_cmode_itu_pane

0x4081,	// (0x00052c49) bg_button_pane_cp06_ParamLimits

0x4081,	// (0x00052c49) bg_button_pane_cp06

0x7d57,	// (0x0005691f) cell_cmode_rocker_pane_g1_ParamLimits

0x7d57,	// (0x0005691f) cell_cmode_rocker_pane_g1

0x9282,	// (0x00057e4a) cell_cmode_rocker_pane_g2_ParamLimits

0x9282,	// (0x00057e4a) cell_cmode_rocker_pane_g2

0x0001,

0xfdc8,	// (0x0005e990) cell_cmode_rocker_pane_g_ParamLimits

0xfdc8,	// (0x0005e990) cell_cmode_rocker_pane_g

0x3727,	// (0x000522ef) bg_button_pane_cp07

0x9d5f,	// (0x00058927) cell_cmode_itu_pane_g1

0x9d68,	// (0x00058930) cell_cmode_itu_pane_t1

0x9d76,	// (0x0005893e) cell_cmode_itu_pane_t2

0x0001,

0xfdcd,	// (0x0005e995) cell_cmode_itu_pane_t

0x94a9,	// (0x00058071) aid_touch_ctrl_left

0x94b1,	// (0x00058079) aid_touch_ctrl_right

0x3727,	// (0x000522ef) compa_mode_pane

0xf0fc,	// (0x0005dcc4) aid_cmod_rocker_key_size_cp

0xf106,	// (0x0005dcce) aid_cmode_itu_key_size_cp

0x9d98,	// (0x00058960) compa_mode_pane_g1

0x9da0,	// (0x00058968) compa_mode_pane_g2

0x9da8,	// (0x00058970) compa_mode_pane_g3

0x0002,

0xfdd2,	// (0x0005e99a) compa_mode_pane_g

0xf110,	// (0x0005dcd8) main_comp_mode_itu_pane_cp

0xf118,	// (0x0005dce0) main_comp_mode_rocker_pane_cp

0xf120,	// (0x0005dce8) cell_cmode_itu_pane_cp_ParamLimits

0xf120,	// (0x0005dce8) cell_cmode_itu_pane_cp

0xf135,	// (0x0005dcfd) cell_cmode_rocker_pane_cp_ParamLimits

0xf135,	// (0x0005dcfd) cell_cmode_rocker_pane_cp

0x4081,	// (0x00052c49) bg_button_pane_cp06_cp_ParamLimits

0x4081,	// (0x00052c49) bg_button_pane_cp06_cp

0x7d57,	// (0x0005691f) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7d57,	// (0x0005691f) cell_cmode_rocker_pane_g1_cp

0x7ae9,	// (0x000566b1) cell_cmode_rocker_pane_g2_cp

0x3727,	// (0x000522ef) bg_button_pane_cp07_cp

0xf147,	// (0x0005dd0f) cell_cmode_itu_pane_g1_cp

0xf150,	// (0x0005dd18) cell_cmode_itu_pane_t1_cp

0xf150,	// (0x0005dd18) cell_cmode_itu_pane_t2_cp

0xdeae,	// (0x0005ca76) settings_code_pane_cp2

0x381b,	// (0x000523e3) bg_popup_window_pane_cp3_ParamLimits

0x3c72,	// (0x0005283a) heading_pane_cp3_ParamLimits

0x3c7e,	// (0x00052846) listscroll_popup_graphic_pane_ParamLimits

0x1d80,	// (0x00050948) fep_hwr_aid_pane_ParamLimits

0x21f7,	// (0x00050dbf) aid_touch_sctrl_top_ParamLimits

0x2212,	// (0x00050dda) sctrl_sk_top_pane_g1_ParamLimits

0x1fd7,	// (0x00050b9f) sctrl_sk_top_pane_g2_ParamLimits

0xfd08,	// (0x0005e8d0) sctrl_sk_top_pane_g_ParamLimits

0x221f,	// (0x00050de7) sctrl_sk_top_pane_t1_ParamLimits

0x21f7,	// (0x00050dbf) aid_touch_sctrl_bottom_ParamLimits

0x221f,	// (0x00050de7) sctrl_sk_bottom_pane_t1_ParamLimits

0x93f2,	// (0x00057fba) aid_area_touch_clock

0xcb3e,	// (0x0005b706) aid_vkb2_area_top_pane_cell_ParamLimits

0xcb3e,	// (0x0005b706) aid_vkb2_area_top_pane_cell

0xcbe9,	// (0x0005b7b1) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcbe9,	// (0x0005b7b1) aid_vkb2_area_bottom_pane_cell

0x995e,	// (0x00058526) popup_char_count_window

0x9dfe,	// (0x000589c6) popup_char_count_window_g1

0x9e07,	// (0x000589cf) popup_char_count_window_g2

0x9e10,	// (0x000589d8) popup_char_count_window_g3

0x0002,

0xfdd9,	// (0x0005e9a1) popup_char_count_window_g

0x9e19,	// (0x000589e1) popup_char_count_window_t1

0x22ce,	// (0x00050e96) popup_fep_char_preview_window_ParamLimits

0x22ce,	// (0x00050e96) popup_fep_char_preview_window

0xcb5e,	// (0x0005b726) vkb2_top_candi_pane_ParamLimits

0xcb5e,	// (0x0005b726) vkb2_top_candi_pane

0xf15e,	// (0x0005dd26) cell_vkb2_top_candi_pane_ParamLimits

0xf15e,	// (0x0005dd26) cell_vkb2_top_candi_pane

0x283a,	// (0x00051402) bg_popup_fep_char_preview_window_ParamLimits

0x283a,	// (0x00051402) bg_popup_fep_char_preview_window

0x2848,	// (0x00051410) popup_fep_char_preview_window_t1_ParamLimits

0x2848,	// (0x00051410) popup_fep_char_preview_window_t1

0x9e74,	// (0x00058a3c) bg_popup_fep_char_preview_window_g1

0x9e7c,	// (0x00058a44) bg_popup_fep_char_preview_window_g2

0x9e84,	// (0x00058a4c) bg_popup_fep_char_preview_window_g3

0x9e8c,	// (0x00058a54) bg_popup_fep_char_preview_window_g4

0x9e94,	// (0x00058a5c) bg_popup_fep_char_preview_window_g5

0x2882,	// (0x0005144a) bg_popup_fep_char_preview_window_g6

0x9e9c,	// (0x00058a64) bg_popup_fep_char_preview_window_g7

0x9ea4,	// (0x00058a6c) bg_popup_fep_char_preview_window_g8

0x9eac,	// (0x00058a74) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde0,	// (0x0005e9a8) bg_popup_fep_char_preview_window_g

0x1fd7,	// (0x00050b9f) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1fd7,	// (0x00050b9f) cell_vkb2_top_candi_pane_g1

0x1fe5,	// (0x00050bad) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1fe5,	// (0x00050bad) cell_vkb2_top_candi_pane_g2

0x9a5d,	// (0x00058625) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9a5d,	// (0x00058625) cell_vkb2_top_candi_pane_g3

0x288a,	// (0x00051452) cell_vkb2_top_candi_pane_g4_ParamLimits

0x288a,	// (0x00051452) cell_vkb2_top_candi_pane_g4

0x8223,	// (0x00056deb) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8223,	// (0x00056deb) cell_vkb2_top_candi_pane_g5

0x28ab,	// (0x00051473) cell_vkb2_top_candi_pane_g6_ParamLimits

0x28ab,	// (0x00051473) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf3,	// (0x0005e9bb) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf3,	// (0x0005e9bb) cell_vkb2_top_candi_pane_g

0x28b9,	// (0x00051481) cell_vkb2_top_candi_pane_t1

0x1bbc,	// (0x00050784) aid_size_touch_slider_mark_ParamLimits

0x1bbc,	// (0x00050784) aid_size_touch_slider_mark

0xee8e,	// (0x0005da56) grid_graphic2_catg_pane_ParamLimits

0xee8e,	// (0x0005da56) grid_graphic2_catg_pane

0xef4a,	// (0x0005db12) popup_grid_graphic2_window_t1_ParamLimits

0xef4a,	// (0x0005db12) popup_grid_graphic2_window_t1

0xef60,	// (0x0005db28) popup_grid_graphic2_window_t2_ParamLimits

0xef60,	// (0x0005db28) popup_grid_graphic2_window_t2

0x0001,

0xfdae,	// (0x0005e976) popup_grid_graphic2_window_t_ParamLimits

0xfdae,	// (0x0005e976) popup_grid_graphic2_window_t

0x3aa4,	// (0x0005266c) bg_button_pane_cp05_ParamLimits

0xf0d8,	// (0x0005dca0) cell_graphic2_control_pane_g1_ParamLimits

0xf1c4,	// (0x0005dd8c) cell_graphic2_catg_pane_ParamLimits

0xf1c4,	// (0x0005dd8c) cell_graphic2_catg_pane

0x3727,	// (0x000522ef) bg_button_pane_cp12

0xf1d6,	// (0x0005dd9e) cell_graphic2_catg_pane_g1

0x93be,	// (0x00057f86) cell_tb_ext_pane_t1_ParamLimits

0x2670,	// (0x00051238) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2670,	// (0x00051238) vkb2_top_cell_right_narrow_pane

0x2688,	// (0x00051250) vkb2_top_cell_right_wide_pane_ParamLimits

0x2688,	// (0x00051250) vkb2_top_cell_right_wide_pane

0x1d72,	// (0x0005093a) bg_vkb2_func_pane_ParamLimits

0x1d72,	// (0x0005093a) bg_vkb2_func_pane

0x26f9,	// (0x000512c1) vkb2_top_cell_left_pane_g1_ParamLimits

0x1d72,	// (0x0005093a) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1d72,	// (0x0005093a) bg_vkb2_fuc_pane_cp03

0x2757,	// (0x0005131f) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5529,	// (0x000540f1) bg_vkb2_func_pane_g1

0x5531,	// (0x000540f9) bg_vkb2_func_pane_g2

0x5541,	// (0x00054109) bg_vkb2_func_pane_g3

0x5539,	// (0x00054101) bg_vkb2_func_pane_g4

0x5549,	// (0x00054111) bg_vkb2_func_pane_g5

0x5551,	// (0x00054119) bg_vkb2_func_pane_g6

0x5559,	// (0x00054121) bg_vkb2_func_pane_g7

0x5561,	// (0x00054129) bg_vkb2_func_pane_g8

0x5521,	// (0x000540e9) bg_vkb2_func_pane_g9

0x0008,

0xfe00,	// (0x0005e9c8) bg_vkb2_func_pane_g

0x1d72,	// (0x0005093a) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1d72,	// (0x0005093a) bg_vkb2_fuc_pane_cp01

0x26f9,	// (0x000512c1) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x26f9,	// (0x000512c1) vkb2_top_cell_right_wide_pane_g1

0x1d72,	// (0x0005093a) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1d72,	// (0x0005093a) bg_vkb2_fuc_pane_cp02

0x2757,	// (0x0005131f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2757,	// (0x0005131f) vkb2_top_cell_right_narrow_pane_g1

0xe6ea,	// (0x0005d2b2) aid_touch_area_decrease_ParamLimits

0xe6ea,	// (0x0005d2b2) aid_touch_area_decrease

0xe724,	// (0x0005d2ec) aid_touch_area_increase_ParamLimits

0xe724,	// (0x0005d2ec) aid_touch_area_increase

0xe74c,	// (0x0005d314) aid_touch_area_mute_ParamLimits

0xe74c,	// (0x0005d314) aid_touch_area_mute

0xe77c,	// (0x0005d344) aid_touch_area_slider_ParamLimits

0xe77c,	// (0x0005d344) aid_touch_area_slider

0xe7bc,	// (0x0005d384) popup_slider_window_g4_ParamLimits

0xe7bc,	// (0x0005d384) popup_slider_window_g4

0xe7e4,	// (0x0005d3ac) popup_slider_window_g5_ParamLimits

0xe7e4,	// (0x0005d3ac) popup_slider_window_g5

0xe818,	// (0x0005d3e0) popup_slider_window_g6_ParamLimits

0xe818,	// (0x0005d3e0) popup_slider_window_g6

0x9198,	// (0x00057d60) popup_slider_window_t2_ParamLimits

0x9198,	// (0x00057d60) popup_slider_window_t2

0x0001,

0xfcfc,	// (0x0005e8c4) popup_slider_window_t_ParamLimits

0xfcfc,	// (0x0005e8c4) popup_slider_window_t

0xe834,	// (0x0005d3fc) slider_pane_ParamLimits

0xe834,	// (0x0005d3fc) slider_pane

0x9ecf,	// (0x00058a97) slider_pane_g1_ParamLimits

0x9ecf,	// (0x00058a97) slider_pane_g1

0x9ee3,	// (0x00058aab) slider_pane_g2_ParamLimits

0x9ee3,	// (0x00058aab) slider_pane_g2

0x9ef9,	// (0x00058ac1) slider_pane_g3_ParamLimits

0x9ef9,	// (0x00058ac1) slider_pane_g3

0x0003,

0xfe13,	// (0x0005e9db) slider_pane_g_ParamLimits

0xfe13,	// (0x0005e9db) slider_pane_g

0xc589,	// (0x0005b151) popup_tb_float_extension_window_ParamLimits

0xc589,	// (0x0005b151) popup_tb_float_extension_window

0x9f25,	// (0x00058aed) aid_size_cell_tb_float_ext

0x3727,	// (0x000522ef) bg_popup_sub_window_cp28

0x9f31,	// (0x00058af9) grid_tb_float_ext_pane

0x9f3b,	// (0x00058b03) cell_tb_float_ext_pane_ParamLimits

0x9f3b,	// (0x00058b03) cell_tb_float_ext_pane

0x9f55,	// (0x00058b1d) cell_tb_float_ext_pane_g1

0x9f5e,	// (0x00058b26) grid_highlight_pane_cp12

0xc81e,	// (0x0005b3e6) cell_last_hwr_side_pane_ParamLimits

0xc81e,	// (0x0005b3e6) cell_last_hwr_side_pane

0x7ae9,	// (0x000566b1) cell_last_hwr_side_pane_g1

0x9f67,	// (0x00058b2f) cell_last_hwr_side_pane_g2

0x0001,

0xfe1c,	// (0x0005e9e4) cell_last_hwr_side_pane_g

0xccc5,	// (0x0005b88d) vkb2_area_bottom_space_btn_pane_ParamLimits

0xccc5,	// (0x0005b88d) vkb2_area_bottom_space_btn_pane

0x1fd7,	// (0x00050b9f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9a13,	// (0x000585db) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x28b9,	// (0x00051481) cell_vkb2_top_candi_pane_t1_ParamLimits

0x28d8,	// (0x000514a0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x28d8,	// (0x000514a0) vkb2_area_bottom_space_btn_pane_g1

0x2912,	// (0x000514da) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2912,	// (0x000514da) vkb2_area_bottom_space_btn_pane_g2

0x2948,	// (0x00051510) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2948,	// (0x00051510) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe21,	// (0x0005e9e9) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe21,	// (0x0005e9e9) vkb2_area_bottom_space_btn_pane_g

0x1e35,	// (0x000509fd) cel_fep_hwr_func_pane_ParamLimits

0x1e35,	// (0x000509fd) cel_fep_hwr_func_pane

0xc7f3,	// (0x0005b3bb) cell_hwr_side_button_pane_ParamLimits

0xc7f3,	// (0x0005b3bb) cell_hwr_side_button_pane

0x93f2,	// (0x00057fba) aid_area_touch_clock_ParamLimits

0x3aa4,	// (0x0005266c) bg_uniindi_top_pane_ParamLimits

0x9404,	// (0x00057fcc) uniindi_top_pane_g1_ParamLimits

0x941a,	// (0x00057fe2) uniindi_top_pane_g2_ParamLimits

0x9426,	// (0x00057fee) uniindi_top_pane_g3_ParamLimits

0x9437,	// (0x00057fff) uniindi_top_pane_g4_ParamLimits

0xfd34,	// (0x0005e8fc) uniindi_top_pane_g_ParamLimits

0x9444,	// (0x0005800c) uniindi_top_pane_t1_ParamLimits

0x3aa4,	// (0x0005266c) bg_vkb2_func_pane_cp01_ParamLimits

0x3aa4,	// (0x0005266c) bg_vkb2_func_pane_cp01

0x9f70,	// (0x00058b38) cel_fep_hwr_func_pane_g1_ParamLimits

0x9f70,	// (0x00058b38) cel_fep_hwr_func_pane_g1

0x3aa4,	// (0x0005266c) bg_vkb2_func_pane_cp02_ParamLimits

0x3aa4,	// (0x0005266c) bg_vkb2_func_pane_cp02

0x9f70,	// (0x00058b38) cell_hwr_side_button_pane_g1_ParamLimits

0x9f70,	// (0x00058b38) cell_hwr_side_button_pane_g1

0x53a2,	// (0x00053f6a) status_pane_g4_ParamLimits

0x53a2,	// (0x00053f6a) status_pane_g4

0x53bc,	// (0x00053f84) status_pane_t1

0x7803,	// (0x000563cb) form2_midp_gauge_slider_cont_pane

0x780b,	// (0x000563d3) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe143,	// (0x0005cd0b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe157,	// (0x0005cd1f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf4,	// (0x0005e6bc) form2_midp_gauge_slider_pane_t_ParamLimits

0x7841,	// (0x00056409) form2_midp_slider_pane_ParamLimits

0x228e,	// (0x00050e56) aid_size_cell_func_vkb2_ParamLimits

0x228e,	// (0x00050e56) aid_size_cell_func_vkb2

0x9f11,	// (0x00058ad9) slider_pane_g4_ParamLimits

0x9f11,	// (0x00058ad9) slider_pane_g4

0xcd26,	// (0x0005b8ee) form2_midp_gauge_slider_pane_t2_cp01

0xcd36,	// (0x0005b8fe) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcd36,	// (0x0005b8fe) form2_midp_gauge_slider_pane_t3_cp01

0x29bd,	// (0x00051585) form2_midp_slider_pane_cp01

0x3727,	// (0x000522ef) navi_smil_pane

0x9fa9,	// (0x00058b71) navi_smil_pane_g1

0x9fb1,	// (0x00058b79) navi_smil_pane_t1

0x9f7e,	// (0x00058b46) form2_midp_slider_pane_g1

0x9f87,	// (0x00058b4f) form2_midp_slider_pane_g2

0x9f8f,	// (0x00058b57) form2_midp_slider_pane_g3

0x9f7e,	// (0x00058b46) form2_midp_slider_pane_g4

0xf1df,	// (0x0005dda7) form2_midp_slider_pane_g5

0x0004,

0xfe2a,	// (0x0005e9f2) form2_midp_slider_pane_g

0x2982,	// (0x0005154a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2982,	// (0x0005154a) vkb2_area_bottom_space_btn_pane_g4

0xd7c5,	// (0x0005c38d) lc0_navi_pane_ParamLimits

0xd7c5,	// (0x0005c38d) lc0_navi_pane

0xd8d9,	// (0x0005c4a1) lc0_stat_indi_pane_ParamLimits

0xd8d9,	// (0x0005c4a1) lc0_stat_indi_pane

0xd8ee,	// (0x0005c4b6) ls0_title_pane_ParamLimits

0xd8ee,	// (0x0005c4b6) ls0_title_pane

0x4081,	// (0x00052c49) bg_popup_sub_pane_cp14_ParamLimits

0x93d9,	// (0x00057fa1) list_uniindi_pane_ParamLimits

0x93e5,	// (0x00057fad) uniindi_top_pane_ParamLimits

0x9481,	// (0x00058049) list_single_uniindi_pane_g1_ParamLimits

0x9494,	// (0x0005805c) list_single_uniindi_pane_t1_ParamLimits

0xcd55,	// (0x0005b91d) lc0_stat_clock_pane_ParamLimits

0xcd55,	// (0x0005b91d) lc0_stat_clock_pane

0xf1ea,	// (0x0005ddb2) lc0_stat_indi_pane_g1_ParamLimits

0xf1ea,	// (0x0005ddb2) lc0_stat_indi_pane_g1

0xf1f7,	// (0x0005ddbf) lc0_stat_indi_pane_g2_ParamLimits

0xf1f7,	// (0x0005ddbf) lc0_stat_indi_pane_g2

0x0001,

0xfe35,	// (0x0005e9fd) lc0_stat_indi_pane_g_ParamLimits

0xfe35,	// (0x0005e9fd) lc0_stat_indi_pane_g

0xcd62,	// (0x0005b92a) lc0_uni_indicator_pane_ParamLimits

0xcd62,	// (0x0005b92a) lc0_uni_indicator_pane

0xf204,	// (0x0005ddcc) ls0_title_pane_g1_ParamLimits

0xf204,	// (0x0005ddcc) ls0_title_pane_g1

0xf218,	// (0x0005dde0) ls0_title_pane_t1_ParamLimits

0xf218,	// (0x0005dde0) ls0_title_pane_t1

0xcd6f,	// (0x0005b937) lc0_uni_indicator_pane_g1_ParamLimits

0xcd6f,	// (0x0005b937) lc0_uni_indicator_pane_g1

0xa023,	// (0x00058beb) lc0_stat_clock_pane_t1

0x0284,	// (0x0004ee4c) main_ai5_pane

0xa031,	// (0x00058bf9) ai5_sk_pane_ParamLimits

0xa031,	// (0x00058bf9) ai5_sk_pane

0xf246,	// (0x0005de0e) cell_ai5_widget_pane_ParamLimits

0xf246,	// (0x0005de0e) cell_ai5_widget_pane

0xa108,	// (0x00058cd0) aid_size_cell_widget_grid

0xa11e,	// (0x00058ce6) bg_ai5_widget_pane_ParamLimits

0xa11e,	// (0x00058ce6) bg_ai5_widget_pane

0xa192,	// (0x00058d5a) cell_ai5_widget_pane_g2

0xa1a2,	// (0x00058d6a) cell_ai5_widget_pane_g3

0xa1b9,	// (0x00058d81) cell_ai5_widget_pane_g4

0xa1c5,	// (0x00058d8d) cell_ai5_widget_pane_g5

0xa1d1,	// (0x00058d99) cell_ai5_widget_pane_g6

0xa1dd,	// (0x00058da5) cell_ai5_widget_pane_g7

0xa225,	// (0x00058ded) cell_ai5_widget_pane_t1_ParamLimits

0xa225,	// (0x00058ded) cell_ai5_widget_pane_t1

0xa242,	// (0x00058e0a) cell_ai5_widget_pane_t2_ParamLimits

0xa242,	// (0x00058e0a) cell_ai5_widget_pane_t2

0xa25a,	// (0x00058e22) cell_ai5_widget_pane_t3_ParamLimits

0xa25a,	// (0x00058e22) cell_ai5_widget_pane_t3

0xa272,	// (0x00058e3a) cell_ai5_widget_pane_t4_ParamLimits

0xa272,	// (0x00058e3a) cell_ai5_widget_pane_t4

0xa28f,	// (0x00058e57) cell_ai5_widget_pane_t5_ParamLimits

0xa28f,	// (0x00058e57) cell_ai5_widget_pane_t5

0xa2ae,	// (0x00058e76) cell_ai5_widget_pane_t6_ParamLimits

0xa2ae,	// (0x00058e76) cell_ai5_widget_pane_t6

0xa2c0,	// (0x00058e88) cell_ai5_widget_pane_t7_ParamLimits

0xa2c0,	// (0x00058e88) cell_ai5_widget_pane_t7

0xa2d9,	// (0x00058ea1) cell_ai5_widget_pane_t8_ParamLimits

0xa2d9,	// (0x00058ea1) cell_ai5_widget_pane_t8

0x0009,

0xfe4f,	// (0x0005ea17) cell_ai5_widget_pane_t_ParamLimits

0xfe4f,	// (0x0005ea17) cell_ai5_widget_pane_t

0xa32d,	// (0x00058ef5) grid_ai5_widget_pane

0x4081,	// (0x00052c49) highlight_cell_ai5_widget_pane_ParamLimits

0x4081,	// (0x00052c49) highlight_cell_ai5_widget_pane

0xf2b0,	// (0x0005de78) ai5_sk_left_pane

0xf2ba,	// (0x0005de82) ai5_sk_middle_pane

0xf2c4,	// (0x0005de8c) ai5_sk_right_pane

0xa363,	// (0x00058f2b) bg_ai5_widget_pane_g1_ParamLimits

0xa363,	// (0x00058f2b) bg_ai5_widget_pane_g1

0xa36f,	// (0x00058f37) bg_ai5_widget_pane_g2_ParamLimits

0xa36f,	// (0x00058f37) bg_ai5_widget_pane_g2

0xa37b,	// (0x00058f43) bg_ai5_widget_pane_g3_ParamLimits

0xa37b,	// (0x00058f43) bg_ai5_widget_pane_g3

0xa387,	// (0x00058f4f) bg_ai5_widget_pane_g4_ParamLimits

0xa387,	// (0x00058f4f) bg_ai5_widget_pane_g4

0xa393,	// (0x00058f5b) bg_ai5_widget_pane_g5_ParamLimits

0xa393,	// (0x00058f5b) bg_ai5_widget_pane_g5

0xa39f,	// (0x00058f67) bg_ai5_widget_pane_g6_ParamLimits

0xa39f,	// (0x00058f67) bg_ai5_widget_pane_g6

0xa3ab,	// (0x00058f73) bg_ai5_widget_pane_g7_ParamLimits

0xa3ab,	// (0x00058f73) bg_ai5_widget_pane_g7

0xa3b7,	// (0x00058f7f) bg_ai5_widget_pane_g8_ParamLimits

0xa3b7,	// (0x00058f7f) bg_ai5_widget_pane_g8

0xa3c3,	// (0x00058f8b) bg_ai5_widget_pane_g9_ParamLimits

0xa3c3,	// (0x00058f8b) bg_ai5_widget_pane_g9

0x0008,

0xfe64,	// (0x0005ea2c) bg_ai5_widget_pane_g_ParamLimits

0xfe64,	// (0x0005ea2c) bg_ai5_widget_pane_g

0xa3f5,	// (0x00058fbd) cell_shortcut_ai5_widget_pane_ParamLimits

0xa3f5,	// (0x00058fbd) cell_shortcut_ai5_widget_pane

0x4ce9,	// (0x000538b1) bg_cell_shortcut_ai5_widget_pane

0xa406,	// (0x00058fce) cell_grid_ai5_widget_pane_g1

0x4ce9,	// (0x000538b1) highlight_cell_shortcut_ai5_widget_pane

0x5529,	// (0x000540f1) ai5_sk_left_pane_g1

0xa40f,	// (0x00058fd7) ai5_sk_left_pane_g2

0xa417,	// (0x00058fdf) ai5_sk_left_pane_g3

0xa41f,	// (0x00058fe7) ai5_sk_left_pane_g4

0x0003,

0xfe77,	// (0x0005ea3f) ai5_sk_left_pane_g

0xa427,	// (0x00058fef) ai5_sk_left_pane_t1

0x5531,	// (0x000540f9) ai5_sk_right_pane_g1

0xa435,	// (0x00058ffd) ai5_sk_right_pane_g2

0xa43d,	// (0x00059005) ai5_sk_right_pane_g3

0xa445,	// (0x0005900d) ai5_sk_right_pane_g4

0x0003,

0xfe80,	// (0x0005ea48) ai5_sk_right_pane_g

0xa44d,	// (0x00059015) ai5_sk_right_pane_t1

0x5531,	// (0x000540f9) ai5_sk_middle_pane_g1

0x5529,	// (0x000540f1) ai5_sk_middle_pane_g2

0x5549,	// (0x00054111) ai5_sk_middle_pane_g3

0xa43d,	// (0x00059005) ai5_sk_middle_pane_g4

0xa417,	// (0x00058fdf) ai5_sk_middle_pane_g5

0xa45b,	// (0x00059023) ai5_sk_middle_pane_g6

0xf2ce,	// (0x0005de96) ai5_sk_middle_pane_g7

0x0006,

0xfe89,	// (0x0005ea51) ai5_sk_middle_pane_g

0xd6b1,	// (0x0005c279) aid_touch_area_size_lc0_ParamLimits

0xd6b1,	// (0x0005c279) aid_touch_area_size_lc0

0x2006,	// (0x00050bce) cell_hwr_candidate_pane_t1_ParamLimits

0x5085,	// (0x00053c4d) aid_touch_navi_pane

0xd9e7,	// (0x0005c5af) status_dt_navi_pane_ParamLimits

0xd9e7,	// (0x0005c5af) status_dt_navi_pane

0xd9ff,	// (0x0005c5c7) status_dt_sta_pane_ParamLimits

0xd9ff,	// (0x0005c5c7) status_dt_sta_pane

0xf2d6,	// (0x0005de9e) dt_sta_controll_pane

0xf2e3,	// (0x0005deab) dt_sta_indi_pane

0xf2f0,	// (0x0005deb8) dt_sta_title_pane

0x3aa4,	// (0x0005266c) bg_dt_sta_indi_pane_ParamLimits

0x3aa4,	// (0x0005266c) bg_dt_sta_indi_pane

0xa49c,	// (0x00059064) dt_sta_battery_pane

0xf302,	// (0x0005deca) dt_sta_indi_pane_g1

0xf30b,	// (0x0005ded3) dt_sta_indi_pane_g2

0xf314,	// (0x0005dedc) dt_sta_indi_pane_g3

0x0002,

0xfe98,	// (0x0005ea60) dt_sta_indi_pane_g

0xf31d,	// (0x0005dee5) dt_sta_signal_pane

0x4081,	// (0x00052c49) bg_dt_sta_title_pane_ParamLimits

0x4081,	// (0x00052c49) bg_dt_sta_title_pane

0xa4c8,	// (0x00059090) dt_sta_title_pane_g1

0xf326,	// (0x0005deee) dt_sta_title_pane_t1_ParamLimits

0xf326,	// (0x0005deee) dt_sta_title_pane_t1

0x3727,	// (0x000522ef) bg_dt_sta_control_pane

0xf33b,	// (0x0005df03) dt_sta_controll_pane_g1

0xa4ee,	// (0x000590b6) bg_dt_sta_title_pane_g1

0xa4f7,	// (0x000590bf) bg_dt_sta_title_pane_g2

0xa500,	// (0x000590c8) bg_dt_sta_title_pane_g3

0x0002,

0xfe9f,	// (0x0005ea67) bg_dt_sta_title_pane_g

0x7ae9,	// (0x000566b1) bg_dt_sta_indi_pane_g1

0xa509,	// (0x000590d1) dt_sta_signal_pane_g1

0xa511,	// (0x000590d9) dt_sta_signal_pane_g2

0x0001,

0xfea6,	// (0x0005ea6e) dt_sta_signal_pane_g

0xa519,	// (0x000590e1) dt_sta_battery_pane_g1

0xa522,	// (0x000590ea) dt_sta_battery_pane_t1

0x7ae9,	// (0x000566b1) bg_dt_sta_control_pane_g1

0x47d3,	// (0x0005339b) fep_china_uni_eep_pane

0x47db,	// (0x000533a3) fep_china_uni_entry_pane_ParamLimits

0x47eb,	// (0x000533b3) popup_fep_china_uni_window_g1_ParamLimits

0x47fb,	// (0x000533c3) popup_fep_china_uni_window_g2_ParamLimits

0x47fb,	// (0x000533c3) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0005e2e5) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0005e2e5) popup_fep_china_uni_window_g

0xa531,	// (0x000590f9) fep_china_uni_eep_pane_g1

0xa539,	// (0x00059101) fep_china_uni_eep_pane_t1

0x9fa0,	// (0x00058b68) aid_touch_area_size_smil_player

0x51d1,	// (0x00053d99) lc0_clock_pane

0x53b0,	// (0x00053f78) status_pane_g5_ParamLimits

0x53b0,	// (0x00053f78) status_pane_g5

0xc117,	// (0x0005acdf) popup_keymap_window

0x5376,	// (0x00053f3e) status_icon_pane

0xa1a2,	// (0x00058d6a) cell_ai5_widget_pane_g3_ParamLimits

0xa1b9,	// (0x00058d81) cell_ai5_widget_pane_g4_ParamLimits

0xa1c5,	// (0x00058d8d) cell_ai5_widget_pane_g5_ParamLimits

0xa1e9,	// (0x00058db1) cell_ai5_widget_pane_g8_ParamLimits

0xa1e9,	// (0x00058db1) cell_ai5_widget_pane_g8

0xa1fd,	// (0x00058dc5) cell_ai5_widget_pane_g9_ParamLimits

0xa1fd,	// (0x00058dc5) cell_ai5_widget_pane_g9

0xa211,	// (0x00058dd9) cell_ai5_widget_pane_g10_ParamLimits

0xa211,	// (0x00058dd9) cell_ai5_widget_pane_g10

0xa548,	// (0x00059110) status_icon_pane_g1

0x3727,	// (0x000522ef) bg_popup_sub_pane_cp13

0xa550,	// (0x00059118) popup_keymap_window_t1

0xd63f,	// (0x0005c207) control_pane_g6_ParamLimits

0xd63f,	// (0x0005c207) control_pane_g6

0xd64c,	// (0x0005c214) control_pane_g7_ParamLimits

0xd64c,	// (0x0005c214) control_pane_g7

0xd659,	// (0x0005c221) control_pane_g8_ParamLimits

0xd659,	// (0x0005c221) control_pane_g8

0xf2d6,	// (0x0005de9e) dt_sta_controll_pane_ParamLimits

0xf2e3,	// (0x0005deab) dt_sta_indi_pane_ParamLimits

0xf2f0,	// (0x0005deb8) dt_sta_title_pane_ParamLimits

0x3fad,	// (0x00052b75) aid_size_touch_scroll_bar_cale

0x035d,	// (0x0004ef25) popup_discreet_window_ParamLimits

0x035d,	// (0x0004ef25) popup_discreet_window

0xb7ec,	// (0x0005a3b4) popup_sk_window

0x5bb3,	// (0x0005477b) bg_popup_sub_pane_cp28_ParamLimits

0x5bb3,	// (0x0005477b) bg_popup_sub_pane_cp28

0xa55e,	// (0x00059126) popup_discreet_window_g1_ParamLimits

0xa55e,	// (0x00059126) popup_discreet_window_g1

0xa57e,	// (0x00059146) popup_discreet_window_t1_ParamLimits

0xa57e,	// (0x00059146) popup_discreet_window_t1

0xa59c,	// (0x00059164) popup_discreet_window_t2_ParamLimits

0xa59c,	// (0x00059164) popup_discreet_window_t2

0x0002,

0xfeab,	// (0x0005ea73) popup_discreet_window_t_ParamLimits

0xfeab,	// (0x0005ea73) popup_discreet_window_t

0x29f5,	// (0x000515bd) popup_sk_window_g1

0x29ff,	// (0x000515c7) popup_sk_window_g2

0x0001,

0xfeb2,	// (0x0005ea7a) popup_sk_window_g

0x2a09,	// (0x000515d1) popup_sk_window_t1

0x2a17,	// (0x000515df) popup_sk_window_t1_copy1

0xa192,	// (0x00058d5a) cell_ai5_widget_pane_g2_ParamLimits

0xa2eb,	// (0x00058eb3) cell_ai5_widget_pane_t9_ParamLimits

0xa2eb,	// (0x00058eb3) cell_ai5_widget_pane_t9

0x3727,	// (0x000522ef) main_fep_fshwr2_pane

0xcd9d,	// (0x0005b965) aid_fshwr2_btn_pane

0xcdae,	// (0x0005b976) aid_fshwr2_syb_pane

0xcdbf,	// (0x0005b987) aid_fshwr2_txt_pane

0xcdcb,	// (0x0005b993) fshwr2_func_candi_pane

0xcdea,	// (0x0005b9b2) fshwr2_hwr_syb_pane

0xce05,	// (0x0005b9cd) fshwr2_icf_pane

0x0284,	// (0x0004ee4c) fshwr2_icf_bg_pane

0xce2e,	// (0x0005b9f6) fshwr2_icf_pane_t1_ParamLimits

0xce2e,	// (0x0005b9f6) fshwr2_icf_pane_t1

0x46c5,	// (0x0005328d) fshwr2_func_candi_pane_g1

0xf344,	// (0x0005df0c) fshwr2_func_candi_row_pane_ParamLimits

0xf344,	// (0x0005df0c) fshwr2_func_candi_row_pane

0xce47,	// (0x0005ba0f) cell_fshwr2_syb_pane_ParamLimits

0xce47,	// (0x0005ba0f) cell_fshwr2_syb_pane

0x1fd7,	// (0x00050b9f) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1fd7,	// (0x00050b9f) fshwr2_hwr_syb_pane_g1

0x0284,	// (0x0004ee4c) bg_popup_call_pane_cp01

0xce5d,	// (0x0005ba25) fshwr2_func_candi_cell_pane_ParamLimits

0xce5d,	// (0x0005ba25) fshwr2_func_candi_cell_pane

0xf354,	// (0x0005df1c) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf354,	// (0x0005df1c) fshwr2_func_candi_cell_bg_pane

0xce92,	// (0x0005ba5a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xce92,	// (0x0005ba5a) fshwr2_func_candi_cell_pane_g1

0xcec1,	// (0x0005ba89) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcec1,	// (0x0005ba89) fshwr2_func_candi_cell_pane_t1

0x0284,	// (0x0004ee4c) bg_button_pane_cp08

0x6ed0,	// (0x00055a98) cell_fshwr2_syb_bg_pane

0xced4,	// (0x0005ba9c) cell_fshwr2_syb_bg_pane_g1

0xcedc,	// (0x0005baa4) cell_fshwr2_syb_bg_pane_t1

0x4081,	// (0x00052c49) main_tmo_pane

0xdce1,	// (0x0005c8a9) uni_indicator_pane_g1_ParamLimits

0xdcf7,	// (0x0005c8bf) uni_indicator_pane_g2_ParamLimits

0xdd0d,	// (0x0005c8d5) uni_indicator_pane_g3_ParamLimits

0x6709,	// (0x000552d1) uni_indicator_pane_g4_ParamLimits

0x6709,	// (0x000552d1) uni_indicator_pane_g4

0x671d,	// (0x000552e5) uni_indicator_pane_g5_ParamLimits

0x671d,	// (0x000552e5) uni_indicator_pane_g5

0x671d,	// (0x000552e5) uni_indicator_pane_g6_ParamLimits

0x671d,	// (0x000552e5) uni_indicator_pane_g6

0xf91c,	// (0x0005e4e4) uni_indicator_pane_g_ParamLimits

0xe6cc,	// (0x0005d294) popup_tmo_note_window_ParamLimits

0xe6cc,	// (0x0005d294) popup_tmo_note_window

0x2270,	// (0x00050e38) fshwr2_bg_pane

0xceb2,	// (0x0005ba7a) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xceb2,	// (0x0005ba7a) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb7,	// (0x0005ea7f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb7,	// (0x0005ea7f) fshwr2_func_candi_cell_pane_g

0x1fbf,	// (0x00050b87) bg_popup_window_pane_cp01

0x2b44,	// (0x0005170c) bg_popup_window_pane_g1_cp01

0xa5fe,	// (0x000591c6) bg_popup_window_pane_cp22_ParamLimits

0xa5fe,	// (0x000591c6) bg_popup_window_pane_cp22

0xa60c,	// (0x000591d4) listscroll_tmo_link_pane_ParamLimits

0xa60c,	// (0x000591d4) listscroll_tmo_link_pane

0xa64c,	// (0x00059214) popup_tmo_note_window_g1_ParamLimits

0xa64c,	// (0x00059214) popup_tmo_note_window_g1

0xa659,	// (0x00059221) tmo_note_info_pane_ParamLimits

0xa659,	// (0x00059221) tmo_note_info_pane

0xf360,	// (0x0005df28) list_tmo_note_info_pane_g1_ParamLimits

0xf360,	// (0x0005df28) list_tmo_note_info_pane_g1

0xa68a,	// (0x00059252) list_tmo_note_info_pane_g2_ParamLimits

0xa68a,	// (0x00059252) list_tmo_note_info_pane_g2

0x0001,

0xfebc,	// (0x0005ea84) list_tmo_note_info_pane_g_ParamLimits

0xfebc,	// (0x0005ea84) list_tmo_note_info_pane_g

0xa6a6,	// (0x0005926e) list_tmo_note_info_text_pane_ParamLimits

0xa6a6,	// (0x0005926e) list_tmo_note_info_text_pane

0xa729,	// (0x000592f1) list_tmo_link_pane

0xa736,	// (0x000592fe) scroll_pane_cp20

0xa743,	// (0x0005930b) list_single_tmo_link_pane_ParamLimits

0xa743,	// (0x0005930b) list_single_tmo_link_pane

0xa753,	// (0x0005931b) list_single_tmo_link_pane_t1

0xa761,	// (0x00059329) list_tmo_note_info_text_pane_t1_ParamLimits

0xa761,	// (0x00059329) list_tmo_note_info_text_pane_t1

0xd296,	// (0x0005be5e) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd296,	// (0x0005be5e) aid_size_touch_scroll_bar_cp01

0xbd29,	// (0x0005a8f1) aid_size_touch_slider_marker

0xb7dc,	// (0x0005a3a4) popup_settings_window_ParamLimits

0xb7dc,	// (0x0005a3a4) popup_settings_window

0x12bf,	// (0x0004fe87) popup_candi_list_indi_window

0x5085,	// (0x00053c4d) aid_touch_navi_pane_ParamLimits

0x21cb,	// (0x00050d93) rs_clock_indi_pane

0x21d4,	// (0x00050d9c) sctrl_sk_bottom_pane_ParamLimits

0x21e5,	// (0x00050dad) sctrl_sk_top_pane_ParamLimits

0x22e8,	// (0x00050eb0) popup_fep_tooltip_window

0xa108,	// (0x00058cd0) aid_size_cell_widget_grid_ParamLimits

0xa17d,	// (0x00058d45) cell_ai5_widget_pane_g1_ParamLimits

0xa17d,	// (0x00058d45) cell_ai5_widget_pane_g1

0xa1d1,	// (0x00058d99) cell_ai5_widget_pane_g6_ParamLimits

0xa1dd,	// (0x00058da5) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3a,	// (0x0005ea02) cell_ai5_widget_pane_g_ParamLimits

0xfe3a,	// (0x0005ea02) cell_ai5_widget_pane_g

0xa30f,	// (0x00058ed7) cell_ai5_widget_pane_t10_ParamLimits

0xa30f,	// (0x00058ed7) cell_ai5_widget_pane_t10

0xa32d,	// (0x00058ef5) grid_ai5_widget_pane_ParamLimits

0xa3cf,	// (0x00058f97) cell_contacts_ai5_widget_pane_ParamLimits

0xa3cf,	// (0x00058f97) cell_contacts_ai5_widget_pane

0xa5b1,	// (0x00059179) popup_discreet_window_t3_ParamLimits

0xa5b1,	// (0x00059179) popup_discreet_window_t3

0xce1a,	// (0x0005b9e2) popup_fshwr2_char_preview_window_ParamLimits

0xce1a,	// (0x0005b9e2) popup_fshwr2_char_preview_window

0xf377,	// (0x0005df3f) tmo_note_info_pane_t1

0xf38c,	// (0x0005df54) tmo_note_info_pane_t2

0xf3a5,	// (0x0005df6d) tmo_note_info_pane_t3

0xa705,	// (0x000592cd) tmo_note_info_pane_t4

0xa717,	// (0x000592df) tmo_note_info_pane_t5

0x0004,

0xfec1,	// (0x0005ea89) tmo_note_info_pane_t

0xa729,	// (0x000592f1) list_tmo_link_pane_ParamLimits

0xa736,	// (0x000592fe) scroll_pane_cp20_ParamLimits

0x0284,	// (0x0004ee4c) bg_popup_fep_char_preview_window_cp01

0xa77a,	// (0x00059342) popup_fshwr2_char_preview_window_t1

0xa788,	// (0x00059350) popup_candi_list_indi_window_g1

0xa791,	// (0x00059359) bg_cell_contacts_ai5_widget_pane

0xa79d,	// (0x00059365) cell_contacts_ai5_widget_pane_g1

0xa7b2,	// (0x0005937a) cell_contacts_ai5_widget_pane_g2

0xa7be,	// (0x00059386) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecc,	// (0x0005ea94) cell_contacts_ai5_widget_pane_g

0xa7ca,	// (0x00059392) cell_contacts_ai5_widget_pane_t1

0x4081,	// (0x00052c49) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf3ba,	// (0x0005df82) settings_container_pane

0x4ce9,	// (0x000538b1) listscroll_set_pane_copy1

0x71bf,	// (0x00055d87) scroll_pane_cp121_copy1

0xa84d,	// (0x00059415) set_content_pane_copy1

0xf3c6,	// (0x0005df8e) aid_height_set_list_copy1_ParamLimits

0xf3c6,	// (0x0005df8e) aid_height_set_list_copy1

0x6910,	// (0x000554d8) aid_size_parent_copy1_ParamLimits

0x6910,	// (0x000554d8) aid_size_parent_copy1

0xf3d2,	// (0x0005df9a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf3d2,	// (0x0005df9a) button_value_adjust_pane_cp6_copy1

0x5023,	// (0x00053beb) list_highlight_pane_cp2_copy1_ParamLimits

0x5023,	// (0x00053beb) list_highlight_pane_cp2_copy1

0xf3e6,	// (0x0005dfae) list_set_pane_copy1_ParamLimits

0xf3e6,	// (0x0005dfae) list_set_pane_copy1

0xa7dc,	// (0x000593a4) main_pane_set_t1_copy1_ParamLimits

0xa7dc,	// (0x000593a4) main_pane_set_t1_copy1

0xa816,	// (0x000593de) main_pane_set_t2_copy1_ParamLimits

0xa816,	// (0x000593de) main_pane_set_t2_copy1

0xa922,	// (0x000594ea) main_pane_set_t3_copy1

0xa930,	// (0x000594f8) main_pane_set_t4_copy1

0xa835,	// (0x000593fd) set_content_pane_g1_copy1_ParamLimits

0xa835,	// (0x000593fd) set_content_pane_g1_copy1

0xf493,	// (0x0005e05b) setting_code_pane_copy1

0xa946,	// (0x0005950e) setting_slider_graphic_pane_copy1

0xa946,	// (0x0005950e) setting_slider_pane_copy1

0xa946,	// (0x0005950e) setting_text_pane_copy1

0xa946,	// (0x0005950e) setting_volume_pane_copy1

0xf493,	// (0x0005e05b) settings_code_pane_cp2_copy1

0xf49b,	// (0x0005e063) settings_code_pane_cp_copy1_ParamLimits

0xf49b,	// (0x0005e063) settings_code_pane_cp_copy1

0xceeb,	// (0x0005bab3) volume_set_pane_copy1

0xf4af,	// (0x0005e077) volume_set_pane_g10_copy1

0xf4b7,	// (0x0005e07f) volume_set_pane_g1_copy1

0xf4bf,	// (0x0005e087) volume_set_pane_g2_copy1

0xf4c7,	// (0x0005e08f) volume_set_pane_g3_copy1

0xf4cf,	// (0x0005e097) volume_set_pane_g4_copy1

0xf4d7,	// (0x0005e09f) volume_set_pane_g5_copy1

0xf4df,	// (0x0005e0a7) volume_set_pane_g6_copy1

0xf4e7,	// (0x0005e0af) volume_set_pane_g7_copy1

0xf4ef,	// (0x0005e0b7) volume_set_pane_g8_copy1

0xf4f7,	// (0x0005e0bf) volume_set_pane_g9_copy1

0x381b,	// (0x000523e3) bg_set_opt_pane_cp_copy1_ParamLimits

0x381b,	// (0x000523e3) bg_set_opt_pane_cp_copy1

0x2b55,	// (0x0005171d) setting_slider_pane_t1_copy1_ParamLimits

0x2b55,	// (0x0005171d) setting_slider_pane_t1_copy1

0xcef3,	// (0x0005babb) setting_slider_pane_t2_copy1_ParamLimits

0xcef3,	// (0x0005babb) setting_slider_pane_t2_copy1

0xcf0d,	// (0x0005bad5) setting_slider_pane_t3_copy1_ParamLimits

0xcf0d,	// (0x0005bad5) setting_slider_pane_t3_copy1

0xcf25,	// (0x0005baed) slider_set_pane_copy1_ParamLimits

0xcf25,	// (0x0005baed) slider_set_pane_copy1

0x40d0,	// (0x00052c98) set_opt_bg_pane_g1_copy2

0x40d8,	// (0x00052ca0) set_opt_bg_pane_g2_copy2

0xa9b2,	// (0x0005957a) set_opt_bg_pane_g3_copy2

0x40e8,	// (0x00052cb0) set_opt_bg_pane_g4_copy2

0x40f0,	// (0x00052cb8) set_opt_bg_pane_g5_copy2

0x40f8,	// (0x00052cc0) set_opt_bg_pane_g6_copy2

0xf4ff,	// (0x0005e0c7) set_opt_bg_pane_g7_copy2

0xa9c4,	// (0x0005958c) set_opt_bg_pane_g8_copy2

0xa9ce,	// (0x00059596) set_opt_bg_pane_g9_copy2

0x2bbb,	// (0x00051783) aid_size_touch_slider_mark_copy1_ParamLimits

0x2bbb,	// (0x00051783) aid_size_touch_slider_mark_copy1

0xa9d8,	// (0x000595a0) slider_set_pane_g1_copy1

0x2bcf,	// (0x00051797) slider_set_pane_g2_copy1

0x1bdc,	// (0x000507a4) slider_set_pane_g3_copy1_ParamLimits

0x1bdc,	// (0x000507a4) slider_set_pane_g3_copy1

0x1bf0,	// (0x000507b8) slider_set_pane_g4_copy1_ParamLimits

0x1bf0,	// (0x000507b8) slider_set_pane_g4_copy1

0x1c08,	// (0x000507d0) slider_set_pane_g5_copy1_ParamLimits

0x1c08,	// (0x000507d0) slider_set_pane_g5_copy1

0x1bdc,	// (0x000507a4) slider_set_pane_g6_copy1_ParamLimits

0x1bdc,	// (0x000507a4) slider_set_pane_g6_copy1

0x2bd7,	// (0x0005179f) slider_set_pane_g7_copy1_ParamLimits

0x2bd7,	// (0x0005179f) slider_set_pane_g7_copy1

0x373b,	// (0x00052303) bg_set_opt_pane_cp2_copy1

0xa9e1,	// (0x000595a9) setting_slider_graphic_pane_g1_copy1

0xf507,	// (0x0005e0cf) setting_slider_graphic_pane_t1_copy1

0xf517,	// (0x0005e0df) setting_slider_graphic_pane_t2_copy1

0xf527,	// (0x0005e0ef) slider_set_pane_cp_copy1

0xaa1a,	// (0x000595e2) input_focus_pane_cp1_copy1

0xaa23,	// (0x000595eb) list_set_text_pane_copy1

0xaa2b,	// (0x000595f3) setting_text_pane_g1_copy1

0x36e8,	// (0x000522b0) set_text_pane_t1_copy1

0xaa1a,	// (0x000595e2) input_focus_pane_cp2_copy1

0xaa2b,	// (0x000595f3) setting_code_pane_g1_copy1

0xf52f,	// (0x0005e0f7) setting_code_pane_t1_copy1

0x6ff3,	// (0x00055bbb) list_set_graphic_pane_copy1

0x373b,	// (0x00052303) bg_set_opt_pane_cp4_copy1

0xd4b8,	// (0x0005c080) list_set_graphic_pane_g1_copy1_ParamLimits

0xd4b8,	// (0x0005c080) list_set_graphic_pane_g1_copy1

0xf53d,	// (0x0005e105) list_set_graphic_pane_g2_copy1

0xd4d0,	// (0x0005c098) list_set_graphic_pane_t1_copy1_ParamLimits

0xd4d0,	// (0x0005c098) list_set_graphic_pane_t1_copy1

0x7ae9,	// (0x000566b1) rs_clock_indi_pane_g1

0xaa5e,	// (0x00059626) rs_clock_indi_pane_t1

0xaa6c,	// (0x00059634) rs_indi_pane

0xaa74,	// (0x0005963c) rs_indi_pane_g1

0xaa7d,	// (0x00059645) rs_indi_pane_g2

0xaa86,	// (0x0005964e) rs_indi_pane_g3

0x0002,

0xfed3,	// (0x0005ea9b) rs_indi_pane_g

0x4ce9,	// (0x000538b1) bg_popup_preview_window_pane_cp03

0xaa8f,	// (0x00059657) popup_fep_tooltip_window_t1

0x8765,	// (0x0005732d) popup_note2_window_g2_ParamLimits

0x8765,	// (0x0005732d) popup_note2_window_g2

0x0001,

0xfc6c,	// (0x0005e834) popup_note2_window_g_ParamLimits

0xfc6c,	// (0x0005e834) popup_note2_window_g

0x8c61,	// (0x00057829) bg_popup_sub_pane_cp11_ParamLimits

0x8c6e,	// (0x00057836) cell_ai3_links_pane_g1_ParamLimits

0x8c85,	// (0x0005784d) cell_ai3_links_pane_t1

0x36e8,	// (0x000522b0) set_text_pane_t1_copy1_ParamLimits

0x4bfa,	// (0x000537c2) cell_graphic_popup_pane_cp2_ParamLimits

0x4bfa,	// (0x000537c2) cell_graphic_popup_pane_cp2

0xaa9d,	// (0x00059665) cell_graphic_popup_pane_g1_cp2

0x3dc0,	// (0x00052988) cell_graphic_popup_pane_g2_cp2

0xaaa5,	// (0x0005966d) cell_graphic_popup_pane_g3_cp2

0xaaad,	// (0x00059675) cell_graphic_popup_pane_t2_cp2

0x3dd1,	// (0x00052999) grid_highlight_pane_cp3_cp2

0x4410,	// (0x00052fd8) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4081,	// (0x00052c49) main_tmo_pane_ParamLimits

0xe6c0,	// (0x0005d288) popup_tmo_big_image_note_window

0xa16c,	// (0x00058d34) cell_ai5_widget_list_pane

0xa174,	// (0x00058d3c) cell_ai5_widget_lrg_icon_pane

0xf377,	// (0x0005df3f) tmo_note_info_pane_t1_ParamLimits

0xf38c,	// (0x0005df54) tmo_note_info_pane_t2_ParamLimits

0xf3a5,	// (0x0005df6d) tmo_note_info_pane_t3_ParamLimits

0xa705,	// (0x000592cd) tmo_note_info_pane_t4_ParamLimits

0xa717,	// (0x000592df) tmo_note_info_pane_t5_ParamLimits

0xfec1,	// (0x0005ea89) tmo_note_info_pane_t_ParamLimits

0xf3ba,	// (0x0005df82) settings_container_pane_ParamLimits

0xaa12,	// (0x000595da) indicator_popup_pane_cp5

0xaa12,	// (0x000595da) indicator_popup_pane_cp6

0x6ff3,	// (0x00055bbb) list_set_graphic_pane_copy1_ParamLimits

0x3727,	// (0x000522ef) bg_popup_window_pane_cp23

0xaabb,	// (0x00059683) popup_tmo_big_image_note_window_g1

0xaac4,	// (0x0005968c) popup_tmo_big_image_note_window_t1

0xaad4,	// (0x0005969c) popup_tmo_big_image_note_window_t2

0xaae4,	// (0x000596ac) popup_tmo_big_image_note_window_t3

0x0002,

0xfeda,	// (0x0005eaa2) popup_tmo_big_image_note_window_t

0x7ae9,	// (0x000566b1) cell_ai5_widget_lrg_icon_pane_g1

0xaaf4,	// (0x000596bc) cell_ai5_widget_lrg_icon_pane_t1

0xab02,	// (0x000596ca) cell_ai5_widget_list_row_pane_ParamLimits

0xab02,	// (0x000596ca) cell_ai5_widget_list_row_pane

0xab19,	// (0x000596e1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xab19,	// (0x000596e1) cell_ai5_widget_list_row_pane_g1

0xab26,	// (0x000596ee) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xab26,	// (0x000596ee) cell_ai5_widget_list_row_pane_t1

0xab54,	// (0x0005971c) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xab54,	// (0x0005971c) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee1,	// (0x0005eaa9) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee1,	// (0x0005eaa9) cell_ai5_widget_list_row_pane_t

0x0284,	// (0x0004ee4c) main_fep_vtchi_ss_pane

0x2c09,	// (0x000517d1) popup_fep_char_pre_window

0x2c11,	// (0x000517d9) popup_fep_ituss_window

0x2c32,	// (0x000517fa) popup_fep_vkbss_window

0xab7c,	// (0x00059744) grid_vkbss_keypad_pane_ParamLimits

0xab7c,	// (0x00059744) grid_vkbss_keypad_pane

0xab8c,	// (0x00059754) ituss_keypad_pane

0x2c5d,	// (0x00051825) aid_vkbss_key_offset_ParamLimits

0x2c5d,	// (0x00051825) aid_vkbss_key_offset

0x2c69,	// (0x00051831) cell_vkbss_key_pane_ParamLimits

0x2c69,	// (0x00051831) cell_vkbss_key_pane

0x538a,	// (0x00053f52) bg_cell_vkbss_key_g1_ParamLimits

0x538a,	// (0x00053f52) bg_cell_vkbss_key_g1

0xab9b,	// (0x00059763) cell_vkbss_key_3p_pane_ParamLimits

0xab9b,	// (0x00059763) cell_vkbss_key_3p_pane

0xabb5,	// (0x0005977d) cell_vkbss_key_g1_ParamLimits

0xabb5,	// (0x0005977d) cell_vkbss_key_g1

0xabcf,	// (0x00059797) cell_vkbss_key_t1_ParamLimits

0xabcf,	// (0x00059797) cell_vkbss_key_t1

0x2c7f,	// (0x00051847) cell_ituss_key_pane_ParamLimits

0x2c7f,	// (0x00051847) cell_ituss_key_pane

0xabfa,	// (0x000597c2) bg_cell_ituss_key_g1_ParamLimits

0xabfa,	// (0x000597c2) bg_cell_ituss_key_g1

0xac06,	// (0x000597ce) cell_ituss_key_pane_g1_ParamLimits

0xac06,	// (0x000597ce) cell_ituss_key_pane_g1

0x2c90,	// (0x00051858) cell_ituss_key_pane_g2_ParamLimits

0x2c90,	// (0x00051858) cell_ituss_key_pane_g2

0x0002,

0xfee8,	// (0x0005eab0) cell_ituss_key_pane_g_ParamLimits

0xfee8,	// (0x0005eab0) cell_ituss_key_pane_g

0x2cbc,	// (0x00051884) cell_ituss_key_t1_ParamLimits

0x2cbc,	// (0x00051884) cell_ituss_key_t1

0x2cf6,	// (0x000518be) cell_ituss_key_t2_ParamLimits

0x2cf6,	// (0x000518be) cell_ituss_key_t2

0x2d27,	// (0x000518ef) cell_ituss_key_t3_ParamLimits

0x2d27,	// (0x000518ef) cell_ituss_key_t3

0x2cf6,	// (0x000518be) cell_ituss_key_t4_ParamLimits

0x2cf6,	// (0x000518be) cell_ituss_key_t4

0x0004,

0xfeef,	// (0x0005eab7) cell_ituss_key_t_ParamLimits

0xfeef,	// (0x0005eab7) cell_ituss_key_t

0xac3c,	// (0x00059804) cell_vkbss_key_3p_pane_g1

0xac2c,	// (0x000597f4) cell_vkbss_key_3p_pane_g2

0xac34,	// (0x000597fc) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefa,	// (0x0005eac2) cell_vkbss_key_3p_pane_g

0x0284,	// (0x0004ee4c) bg_popup_fep_char_preview_window_cp02

0x2d6a,	// (0x00051932) popup_fep_char_pre_window_t1

0xf2a6,	// (0x0005de6e) main_ai5_sk_pane

0xa791,	// (0x00059359) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa79d,	// (0x00059365) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa7b2,	// (0x0005937a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa7be,	// (0x00059386) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecc,	// (0x0005ea94) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa7ca,	// (0x00059392) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4081,	// (0x00052c49) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf545,	// (0x0005e10d) main_ai5_sk_pane_g1

0x59e5,	// (0x000545ad) popup_query_code_window_g1

0x2c27,	// (0x000517ef) popup_fep_vkb_icf_pane

0x2c3b,	// (0x00051803) popup_fep_vtchi_icf_pane

0xac4d,	// (0x00059815) bg_icf_pane

0xac59,	// (0x00059821) list_vkb_icf_pane

0x5023,	// (0x00053beb) bg_icf_pane_cp01

0xac65,	// (0x0005982d) vtchi_icf_list_pane

0xac76,	// (0x0005983e) list_vkb_icf_pane_t1_ParamLimits

0xac76,	// (0x0005983e) list_vkb_icf_pane_t1

0xac8e,	// (0x00059856) vtchi_icf_list_pane_t1_ParamLimits

0xac8e,	// (0x00059856) vtchi_icf_list_pane_t1

0x2c11,	// (0x000517d9) popup_fep_ituss_window_ParamLimits

0x2c3b,	// (0x00051803) popup_fep_vtchi_icf_pane_ParamLimits

0xab8c,	// (0x00059754) ituss_keypad_pane_ParamLimits

0x2c51,	// (0x00051819) ituss_sks_pane

0xac4d,	// (0x00059815) bg_icf_pane_ParamLimits

0x2bed,	// (0x000517b5) icf_edit_indi_pane_ParamLimits

0x2bed,	// (0x000517b5) icf_edit_indi_pane

0xac59,	// (0x00059821) list_vkb_icf_pane_ParamLimits

0x5023,	// (0x00053beb) bg_icf_pane_cp01_ParamLimits

0x2bfc,	// (0x000517c4) icf_edit_indi_pane_cp01_ParamLimits

0x2bfc,	// (0x000517c4) icf_edit_indi_pane_cp01

0xac6d,	// (0x00059835) vtchi_query_pane

0x1fd7,	// (0x00050b9f) icf_edit_indi_pane_g1_ParamLimits

0x1fd7,	// (0x00050b9f) icf_edit_indi_pane_g1

0x2d8c,	// (0x00051954) icf_edit_indi_pane_g2_ParamLimits

0x2d8c,	// (0x00051954) icf_edit_indi_pane_g2

0x0001,

0xff12,	// (0x0005eada) icf_edit_indi_pane_g_ParamLimits

0xff12,	// (0x0005eada) icf_edit_indi_pane_g

0x2d9b,	// (0x00051963) icf_edit_indi_pane_t1

0xacb0,	// (0x00059878) bg_input_focus_pane_cp042

0x3fa4,	// (0x00052b6c) vtchi_button_pane

0xacb9,	// (0x00059881) vtchi_query_pane_t1

0xacc7,	// (0x0005988f) vtchi_query_pane_t2

0xacd5,	// (0x0005989d) vtchi_query_pane_t3

0x0002,

0xff01,	// (0x0005eac9) vtchi_query_pane_t

0x0284,	// (0x0004ee4c) bg_button_pane_cp13

0xace3,	// (0x000598ab) vtchi_button_pane_g1

0x2d79,	// (0x00051941) ituss_sks_pane_g1

0x2d84,	// (0x0005194c) ituss_sks_pane_g2

0x0001,

0xff08,	// (0x0005ead0) ituss_sks_pane_g

0xaceb,	// (0x000598b3) ituss_sks_pane_t1

0xacf9,	// (0x000598c1) ituss_sks_pane_t2

0x0001,

0xff0d,	// (0x0005ead5) ituss_sks_pane_t

0x7533,	// (0x000560fb) indicator_nsta_pane_cp_g1

0x753c,	// (0x00056104) indicator_nsta_pane_cp_g2

0x7544,	// (0x0005610c) indicator_nsta_pane_cp_g3

0x754c,	// (0x00056114) indicator_nsta_pane_cp_g4

0x7554,	// (0x0005611c) indicator_nsta_pane_cp_g5

0x7554,	// (0x0005611c) indicator_nsta_pane_cp_g6

0x0005,

0xfaaa,	// (0x0005e672) indicator_nsta_pane_cp_g

0xf0bb,	// (0x0005dc83) cell_graphic2_pane_t2_ParamLimits

0xf0bb,	// (0x0005dc83) cell_graphic2_pane_t2

0x0001,

0xfdc3,	// (0x0005e98b) cell_graphic2_pane_t_ParamLimits

0xfdc3,	// (0x0005e98b) cell_graphic2_pane_t

0xf0ee,	// (0x0005dcb6) cell_graphic2_control_pane_t1

0xd452,	// (0x0005c01a) signal_pane_g3_ParamLimits

0xd452,	// (0x0005c01a) signal_pane_g3

0xd466,	// (0x0005c02e) signal_pane_g4_ParamLimits

0xd466,	// (0x0005c02e) signal_pane_g4

0xab66,	// (0x0005972e) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xab66,	// (0x0005972e) cell_ai5_widget_list_row_pane_t3

0xac1a,	// (0x000597e2) cell_ituss_key_pane_t1_ParamLimits

0xac1a,	// (0x000597e2) cell_ituss_key_pane_t1

0x5623,	// (0x000541eb) form_field_data_wide_pane_vc_t2_ParamLimits

0x5623,	// (0x000541eb) form_field_data_wide_pane_vc_t2

0x5637,	// (0x000541ff) form_field_data_wide_pane_vc_t3_ParamLimits

0x5637,	// (0x000541ff) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0005e3cc) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0005e3cc) form_field_data_wide_pane_vc_t

0x71ff,	// (0x00055dc7) form_field_slider_wide_pane_vc_t3_ParamLimits

0x71ff,	// (0x00055dc7) form_field_slider_wide_pane_vc_t3

0x72d9,	// (0x00055ea1) form_field_popup_wide_pane_vc_t2_ParamLimits

0x72d9,	// (0x00055ea1) form_field_popup_wide_pane_vc_t2

0x72f0,	// (0x00055eb8) form_field_popup_wide_pane_vc_t3_ParamLimits

0x72f0,	// (0x00055eb8) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa99,	// (0x0005e661) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x0005e661) form_field_popup_wide_pane_vc_t

0xcd9d,	// (0x0005b965) aid_fshwr2_btn_pane_ParamLimits

0xcdae,	// (0x0005b976) aid_fshwr2_syb_pane_ParamLimits

0xcdbf,	// (0x0005b987) aid_fshwr2_txt_pane_ParamLimits

0x2270,	// (0x00050e38) fshwr2_bg_pane_ParamLimits

0xcdcb,	// (0x0005b993) fshwr2_func_candi_pane_ParamLimits

0xcdea,	// (0x0005b9b2) fshwr2_hwr_syb_pane_ParamLimits

0xce05,	// (0x0005b9cd) fshwr2_icf_pane_ParamLimits

0x32e3,	// (0x00051eab) list_double_graphic_pane_vc_g4_ParamLimits

0x32e3,	// (0x00051eab) list_double_graphic_pane_vc_g4

0x2cb0,	// (0x00051878) cell_ituss_key_pane_g3_ParamLimits

0x2cb0,	// (0x00051878) cell_ituss_key_pane_g3

0x2d58,	// (0x00051920) cell_ituss_key_t5_ParamLimits

0x2d58,	// (0x00051920) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large

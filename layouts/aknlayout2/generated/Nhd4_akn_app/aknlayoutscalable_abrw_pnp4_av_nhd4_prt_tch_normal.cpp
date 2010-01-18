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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00009005 };

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
0x7d74,	// (0x00010d79) Screen

0x7d88,	// (0x00010d8d) application_window_ParamLimits

0x7d88,	// (0x00010d8d) application_window

0x7da2,	// (0x00010da7) screen_g1

0x6172,	// (0x0000f177) area_bottom_pane_ParamLimits

0x6172,	// (0x0000f177) area_bottom_pane

0x6232,	// (0x0000f237) area_top_pane_ParamLimits

0x6232,	// (0x0000f237) area_top_pane

0x62d0,	// (0x0000f2d5) main_pane_ParamLimits

0x62d0,	// (0x0000f2d5) main_pane

0x7dac,	// (0x00010db1) misc_graphics

0xa45b,	// (0x00013460) battery_pane_ParamLimits

0xa45b,	// (0x00013460) battery_pane

0xb220,	// (0x00014225) bg_status_flat_pane_g8

0xb228,	// (0x0001422d) bg_status_flat_pane_g9

0xa51d,	// (0x00013522) context_pane_ParamLimits

0xa51d,	// (0x00013522) context_pane

0xa633,	// (0x00013638) navi_pane_ParamLimits

0xa633,	// (0x00013638) navi_pane

0xa6b0,	// (0x000136b5) signal_pane_ParamLimits

0xa6b0,	// (0x000136b5) signal_pane

0x0008,

0xf885,	// (0x0001888a) bg_status_flat_pane_g

0xa71d,	// (0x00013722) status_pane_g1_ParamLimits

0xa71d,	// (0x00013722) status_pane_g1

0xa731,	// (0x00013736) status_pane_g2_ParamLimits

0xa731,	// (0x00013736) status_pane_g2

0xa73d,	// (0x00013742) status_pane_g3_ParamLimits

0xa73d,	// (0x00013742) status_pane_g3

0x0004,

0xf7b3,	// (0x000187b8) status_pane_g_ParamLimits

0xf7b3,	// (0x000187b8) status_pane_g

0xa76f,	// (0x00013774) title_pane_ParamLimits

0xa76f,	// (0x00013774) title_pane

0xa7ac,	// (0x000137b1) uni_indicator_pane_ParamLimits

0xa7ac,	// (0x000137b1) uni_indicator_pane

0x9dd4,	// (0x00012dd9) bg_list_pane_ParamLimits

0x9dd4,	// (0x00012dd9) bg_list_pane

0x9df4,	// (0x00012df9) find_pane

0x9dfc,	// (0x00012e01) listscroll_app_pane_ParamLimits

0x9dfc,	// (0x00012e01) listscroll_app_pane

0x9e08,	// (0x00012e0d) listscroll_form_pane

0x9e10,	// (0x00012e15) listscroll_gen_pane_ParamLimits

0x9e10,	// (0x00012e15) listscroll_gen_pane

0x9e08,	// (0x00012e0d) listscroll_set_pane

0x8fcb,	// (0x00011fd0) main_idle_act_pane

0x9ab0,	// (0x00012ab5) main_idle_trad_pane

0x9ab0,	// (0x00012ab5) main_list_empty_pane

0x9e36,	// (0x00012e3b) main_midp_pane

0x9e42,	// (0x00012e47) main_pane_g1_ParamLimits

0x9e42,	// (0x00012e47) main_pane_g1

0x9e50,	// (0x00012e55) popup_ai_message_window_ParamLimits

0x9e50,	// (0x00012e55) popup_ai_message_window

0x9efa,	// (0x00012eff) popup_fep_china_uni_window_ParamLimits

0x9efa,	// (0x00012eff) popup_fep_china_uni_window

0x9f54,	// (0x00012f59) popup_fep_japan_candidate_window_ParamLimits

0x9f54,	// (0x00012f59) popup_fep_japan_candidate_window

0x9f72,	// (0x00012f77) popup_fep_japan_predictive_window_ParamLimits

0x9f72,	// (0x00012f77) popup_fep_japan_predictive_window

0x9fa2,	// (0x00012fa7) popup_find_window

0x9faf,	// (0x00012fb4) popup_grid_graphic_window_ParamLimits

0x9faf,	// (0x00012fb4) popup_grid_graphic_window

0x9fd5,	// (0x00012fda) popup_large_graphic_colour_window

0x9ffb,	// (0x00013000) popup_menu_window_ParamLimits

0x9ffb,	// (0x00013000) popup_menu_window

0xa1b5,	// (0x000131ba) popup_note_image_window

0xa1a1,	// (0x000131a6) popup_note_wait_window_ParamLimits

0xa1a1,	// (0x000131a6) popup_note_wait_window

0xa1a1,	// (0x000131a6) popup_note_window_ParamLimits

0xa1a1,	// (0x000131a6) popup_note_window

0xa20b,	// (0x00013210) popup_query_code_window_ParamLimits

0xa20b,	// (0x00013210) popup_query_code_window

0xa21f,	// (0x00013224) popup_query_data_code_window_ParamLimits

0xa21f,	// (0x00013224) popup_query_data_code_window

0xa236,	// (0x0001323b) popup_query_data_window_ParamLimits

0xa236,	// (0x0001323b) popup_query_data_window

0xa24e,	// (0x00013253) popup_query_sat_info_window_ParamLimits

0xa24e,	// (0x00013253) popup_query_sat_info_window

0xa287,	// (0x0001328c) popup_snote_single_graphic_window_ParamLimits

0xa287,	// (0x0001328c) popup_snote_single_graphic_window

0xa287,	// (0x0001328c) popup_snote_single_text_window_ParamLimits

0xa287,	// (0x0001328c) popup_snote_single_text_window

0xa29c,	// (0x000132a1) popup_sub_window_general

0xa3ca,	// (0x000133cf) popup_window_general_ParamLimits

0xa3ca,	// (0x000133cf) popup_window_general

0xa3df,	// (0x000133e4) power_save_pane

0x6a17,	// (0x0000fa1c) control_pane_g1_ParamLimits

0x6a17,	// (0x0000fa1c) control_pane_g1

0x6a40,	// (0x0000fa45) control_pane_g2_ParamLimits

0x6a40,	// (0x0000fa45) control_pane_g2

0x9d75,	// (0x00012d7a) control_pane_g3_ParamLimits

0x9d75,	// (0x00012d7a) control_pane_g3

0x0007,

0xf79b,	// (0x000187a0) control_pane_g_ParamLimits

0xf79b,	// (0x000187a0) control_pane_g

0x6a85,	// (0x0000fa8a) control_pane_t1_ParamLimits

0x6a85,	// (0x0000fa8a) control_pane_t1

0x6ad7,	// (0x0000fadc) control_pane_t2_ParamLimits

0x6ad7,	// (0x0000fadc) control_pane_t2

0x0002,

0xf7ac,	// (0x000187b1) control_pane_t_ParamLimits

0xf7ac,	// (0x000187b1) control_pane_t

0x9c96,	// (0x00012c9b) navi_navi_volume_pane_cp1

0x9c9f,	// (0x00012ca4) status_small_icon_pane

0x9ca7,	// (0x00012cac) status_small_pane_g1_ParamLimits

0x9ca7,	// (0x00012cac) status_small_pane_g1

0x9cdb,	// (0x00012ce0) status_small_pane_g2_ParamLimits

0x9cdb,	// (0x00012ce0) status_small_pane_g2

0x9ce7,	// (0x00012cec) status_small_pane_g3_ParamLimits

0x9ce7,	// (0x00012cec) status_small_pane_g3

0x9cf3,	// (0x00012cf8) status_small_pane_g4_ParamLimits

0x9cf3,	// (0x00012cf8) status_small_pane_g4

0x9cff,	// (0x00012d04) status_small_pane_g5_ParamLimits

0x9cff,	// (0x00012d04) status_small_pane_g5

0x9d0e,	// (0x00012d13) status_small_pane_g6_ParamLimits

0x9d0e,	// (0x00012d13) status_small_pane_g6

0x0007,

0xf78a,	// (0x0001878f) status_small_pane_g_ParamLimits

0xf78a,	// (0x0001878f) status_small_pane_g

0x9d3e,	// (0x00012d43) status_small_pane_t1

0x9d61,	// (0x00012d66) status_small_wait_pane_ParamLimits

0x9d61,	// (0x00012d66) status_small_wait_pane

0x94bf,	// (0x000124c4) aid_levels_signal_ParamLimits

0x94bf,	// (0x000124c4) aid_levels_signal

0x94d1,	// (0x000124d6) signal_pane_g1_ParamLimits

0x94d1,	// (0x000124d6) signal_pane_g1

0x94e6,	// (0x000124eb) signal_pane_g2_ParamLimits

0x94e6,	// (0x000124eb) signal_pane_g2

0x0001,

0xf71f,	// (0x00018724) signal_pane_g_ParamLimits

0xf71f,	// (0x00018724) signal_pane_g

0x94fb,	// (0x00012500) context_pane_g1

0x7db6,	// (0x00010dbb) title_pane_g1

0x7dec,	// (0x00010df1) title_pane_t1

0x7e54,	// (0x00010e59) title_pane_t2

0x7e7a,	// (0x00010e7f) title_pane_t3

0x0002,

0xf573,	// (0x00018578) title_pane_t

0xa7c4,	// (0x000137c9) aid_levels_battery_ParamLimits

0xa7c4,	// (0x000137c9) aid_levels_battery

0xa7d8,	// (0x000137dd) battery_pane_g1_ParamLimits

0xa7d8,	// (0x000137dd) battery_pane_g1

0xa7ee,	// (0x000137f3) battery_pane_g2_ParamLimits

0xa7ee,	// (0x000137f3) battery_pane_g2

0x0001,

0xf7be,	// (0x000187c3) battery_pane_g_ParamLimits

0xf7be,	// (0x000187c3) battery_pane_g

0xbb50,	// (0x00014b55) uni_indicator_pane_g1

0xbb65,	// (0x00014b6a) uni_indicator_pane_g2

0xbb7b,	// (0x00014b80) uni_indicator_pane_g3

0x0005,

0xf92d,	// (0x00018932) uni_indicator_pane_g

0x9920,	// (0x00012925) navi_icon_pane_ParamLimits

0x9920,	// (0x00012925) navi_icon_pane

0x9867,	// (0x0001286c) navi_midp_pane

0x993c,	// (0x00012941) navi_navi_pane

0x9946,	// (0x0001294b) navi_text_pane_ParamLimits

0x9946,	// (0x0001294b) navi_text_pane

0x7da2,	// (0x00010da7) status_small_wait_pane_g1

0x82b7,	// (0x000112bc) status_small_wait_pane_g2

0x0001,

0xf928,	// (0x0001892d) status_small_wait_pane_g

0xb873,	// (0x00014878) navi_navi_icon_text_pane

0xb87b,	// (0x00014880) navi_navi_pane_g1_ParamLimits

0xb87b,	// (0x00014880) navi_navi_pane_g1

0xb88d,	// (0x00014892) navi_navi_pane_g2_ParamLimits

0xb88d,	// (0x00014892) navi_navi_pane_g2

0x0001,

0xf8f6,	// (0x000188fb) navi_navi_pane_g_ParamLimits

0xf8f6,	// (0x000188fb) navi_navi_pane_g

0xb89f,	// (0x000148a4) navi_navi_tabs_pane

0xb8a8,	// (0x000148ad) navi_navi_text_pane

0xb873,	// (0x00014878) navi_navi_volume_pane

0xb84c,	// (0x00014851) navi_text_pane_t1

0xb83d,	// (0x00014842) navi_icon_pane_g1

0xb790,	// (0x00014795) navi_navi_text_pane_t1

0x6e71,	// (0x0000fe76) navi_navi_volume_pane_g1

0x6e79,	// (0x0000fe7e) volume_small_pane

0xb6f6,	// (0x000146fb) navi_navi_icon_text_pane_g1

0xb6fe,	// (0x00014703) navi_navi_icon_text_pane_t1

0x993c,	// (0x00012941) navi_tabs_2_long_pane

0x993c,	// (0x00012941) navi_tabs_2_pane

0x993c,	// (0x00012941) navi_tabs_3_long_pane

0x993c,	// (0x00012941) navi_tabs_3_pane

0x993c,	// (0x00012941) navi_tabs_4_pane

0x6e51,	// (0x0000fe56) tabs_2_active_pane_ParamLimits

0x6e51,	// (0x0000fe56) tabs_2_active_pane

0x6e61,	// (0x0000fe66) tabs_2_passive_pane_ParamLimits

0x6e61,	// (0x0000fe66) tabs_2_passive_pane

0x6e1f,	// (0x0000fe24) tabs_3_active_pane_ParamLimits

0x6e1f,	// (0x0000fe24) tabs_3_active_pane

0x6e2f,	// (0x0000fe34) tabs_3_passive_pane_ParamLimits

0x6e2f,	// (0x0000fe34) tabs_3_passive_pane

0x6e40,	// (0x0000fe45) tabs_3_passive_pane_cp_ParamLimits

0x6e40,	// (0x0000fe45) tabs_3_passive_pane_cp

0x6ddb,	// (0x0000fde0) tabs_4_active_pane_ParamLimits

0x6ddb,	// (0x0000fde0) tabs_4_active_pane

0x6dec,	// (0x0000fdf1) tabs_4_passive_pane_ParamLimits

0x6dec,	// (0x0000fdf1) tabs_4_passive_pane

0x6dfd,	// (0x0000fe02) tabs_4_passive_pane_cp_ParamLimits

0x6dfd,	// (0x0000fe02) tabs_4_passive_pane_cp

0x6e0e,	// (0x0000fe13) tabs_4_passive_pane_cp2_ParamLimits

0x6e0e,	// (0x0000fe13) tabs_4_passive_pane_cp2

0x6db7,	// (0x0000fdbc) tabs_2_long_active_pane_ParamLimits

0x6db7,	// (0x0000fdbc) tabs_2_long_active_pane

0x6dc9,	// (0x0000fdce) tabs_2_long_passive_pane_ParamLimits

0x6dc9,	// (0x0000fdce) tabs_2_long_passive_pane

0x6d72,	// (0x0000fd77) tabs_3_long_active_pane_ParamLimits

0x6d72,	// (0x0000fd77) tabs_3_long_active_pane

0x6d8b,	// (0x0000fd90) tabs_3_long_passive_pane_ParamLimits

0x6d8b,	// (0x0000fd90) tabs_3_long_passive_pane

0x6d9e,	// (0x0000fda3) tabs_3_long_passive_pane_cp_ParamLimits

0x6d9e,	// (0x0000fda3) tabs_3_long_passive_pane_cp

0x6d18,	// (0x0000fd1d) volume_small_pane_g1

0x6d21,	// (0x0000fd26) volume_small_pane_g2

0x6d2a,	// (0x0000fd2f) volume_small_pane_g3

0x6d33,	// (0x0000fd38) volume_small_pane_g4

0x6d3c,	// (0x0000fd41) volume_small_pane_g5

0x6d45,	// (0x0000fd4a) volume_small_pane_g6

0x6d4e,	// (0x0000fd53) volume_small_pane_g7

0x6d57,	// (0x0000fd5c) volume_small_pane_g8

0x6d60,	// (0x0000fd65) volume_small_pane_g9

0x6d69,	// (0x0000fd6e) volume_small_pane_g10

0x0009,

0xf8c2,	// (0x000188c7) volume_small_pane_g

0x7e8c,	// (0x00010e91) bg_active_tab_pane_cp2_ParamLimits

0x7e8c,	// (0x00010e91) bg_active_tab_pane_cp2

0x7e9a,	// (0x00010e9f) tabs_3_active_pane_g1

0x7ea2,	// (0x00010ea7) tabs_3_active_pane_t1

0x7e8c,	// (0x00010e91) bg_passive_tab_pane_cp2_ParamLimits

0x7e8c,	// (0x00010e91) bg_passive_tab_pane_cp2

0x7e9a,	// (0x00010e9f) tabs_3_passive_pane_g1

0x7ea2,	// (0x00010ea7) tabs_3_passive_pane_t1

0x7e8c,	// (0x00010e91) bg_active_tab_pane_cp3_ParamLimits

0x7e8c,	// (0x00010e91) bg_active_tab_pane_cp3

0x7eb4,	// (0x00010eb9) tabs_4_active_pane_g1

0x7ebc,	// (0x00010ec1) tabs_4_active_pane_t1

0x7e8c,	// (0x00010e91) bg_passive_tab_pane_cp3_ParamLimits

0x7e8c,	// (0x00010e91) bg_passive_tab_pane_cp3

0x7eb4,	// (0x00010eb9) tabs_4_1_passive_pane_g1

0x7ebc,	// (0x00010ec1) tabs_4_1_passive_pane_t1

0x9e36,	// (0x00012e3b) list_highlight_pane_cp2

0xbdfc,	// (0x00014e01) list_set_pane_ParamLimits

0xbdfc,	// (0x00014e01) list_set_pane

0xbe9e,	// (0x00014ea3) main_pane_set_t1_ParamLimits

0xbe9e,	// (0x00014ea3) main_pane_set_t1

0xbebe,	// (0x00014ec3) main_pane_set_t2_ParamLimits

0xbebe,	// (0x00014ec3) main_pane_set_t2

0xbed2,	// (0x00014ed7) main_pane_set_t3_ParamLimits

0xbed2,	// (0x00014ed7) main_pane_set_t3

0xbee4,	// (0x00014ee9) main_pane_set_t4_ParamLimits

0xbee4,	// (0x00014ee9) main_pane_set_t4

0x0003,

0xf992,	// (0x00018997) main_pane_set_t_ParamLimits

0xf992,	// (0x00018997) main_pane_set_t

0xbef6,	// (0x00014efb) setting_code_pane

0xbf00,	// (0x00014f05) setting_slider_graphic_pane

0xbf00,	// (0x00014f05) setting_slider_pane

0xbf00,	// (0x00014f05) setting_text_pane

0xbf00,	// (0x00014f05) setting_volume_pane

0x6501,	// (0x0000f506) volume_set_pane

0x7e8c,	// (0x00010e91) bg_set_opt_pane_cp

0x6509,	// (0x0000f50e) setting_slider_pane_t1

0x6522,	// (0x0000f527) setting_slider_pane_t2

0x653b,	// (0x0000f540) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0001857f) setting_slider_pane_t

0x6552,	// (0x0000f557) slider_set_pane

0x7dac,	// (0x00010db1) bg_set_opt_pane_cp2

0x7ece,	// (0x00010ed3) setting_slider_graphic_pane_g1

0x6568,	// (0x0000f56d) setting_slider_graphic_pane_t1

0x6577,	// (0x0000f57c) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x00018586) setting_slider_graphic_pane_t

0x6586,	// (0x0000f58b) slider_set_pane_cp

0x7dac,	// (0x00010db1) input_focus_pane_cp1

0xbdbb,	// (0x00014dc0) list_set_text_pane

0x7da2,	// (0x00010da7) setting_text_pane_g1

0x7dac,	// (0x00010db1) input_focus_pane_cp2

0x7da2,	// (0x00010da7) setting_code_pane_g1

0x7ed7,	// (0x00010edc) setting_code_pane_t1

0x7ee5,	// (0x00010eea) set_text_pane_t1_ParamLimits

0x7ee5,	// (0x00010eea) set_text_pane_t1

0x8da1,	// (0x00011da6) set_opt_bg_pane_g1

0x8da9,	// (0x00011dae) set_opt_bg_pane_g2

0xbd9b,	// (0x00014da0) set_opt_bg_pane_g3

0x8db9,	// (0x00011dbe) set_opt_bg_pane_g4

0x8dc1,	// (0x00011dc6) set_opt_bg_pane_g5

0x8dc9,	// (0x00011dce) set_opt_bg_pane_g6

0xbda3,	// (0x00014da8) set_opt_bg_pane_g7

0xbdab,	// (0x00014db0) set_opt_bg_pane_g8

0xbdb3,	// (0x00014db8) set_opt_bg_pane_g9

0x0008,

0xf97f,	// (0x00018984) set_opt_bg_pane_g

0xbd8e,	// (0x00014d93) slider_set_pane_g1

0x6ee6,	// (0x0000feeb) slider_set_pane_g2

0x0006,

0xf970,	// (0x00018975) slider_set_pane_g

0x6e82,	// (0x0000fe87) volume_set_pane_g1

0x6e8a,	// (0x0000fe8f) volume_set_pane_g2

0x6e92,	// (0x0000fe97) volume_set_pane_g3

0x6e9a,	// (0x0000fe9f) volume_set_pane_g4

0x6ea2,	// (0x0000fea7) volume_set_pane_g5

0x6eaa,	// (0x0000feaf) volume_set_pane_g6

0x6eb2,	// (0x0000feb7) volume_set_pane_g7

0x6eba,	// (0x0000febf) volume_set_pane_g8

0x6ec2,	// (0x0000fec7) volume_set_pane_g9

0x6eca,	// (0x0000fecf) volume_set_pane_g10

0x0009,

0xf948,	// (0x0001894d) volume_set_pane_g

0x7eff,	// (0x00010f04) indicator_pane_ParamLimits

0x7eff,	// (0x00010f04) indicator_pane

0x7f0b,	// (0x00010f10) main_idle_pane_g2_ParamLimits

0x7f0b,	// (0x00010f10) main_idle_pane_g2

0x7f33,	// (0x00010f38) main_pane_idle_g1_ParamLimits

0x7f33,	// (0x00010f38) main_pane_idle_g1

0x7f40,	// (0x00010f45) popup_clock_digital_analogue_window_ParamLimits

0x7f40,	// (0x00010f45) popup_clock_digital_analogue_window

0x7f57,	// (0x00010f5c) soft_indicator_pane_ParamLimits

0x7f57,	// (0x00010f5c) soft_indicator_pane

0x7f63,	// (0x00010f68) wallpaper_pane_ParamLimits

0x7f63,	// (0x00010f68) wallpaper_pane

0x7da2,	// (0x00010da7) wallpaper_pane_g1

0x7f77,	// (0x00010f7c) indicator_pane_g1_ParamLimits

0x7f77,	// (0x00010f7c) indicator_pane_g1

0xc27a,	// (0x0001527f) navi_navi_icon_text_pane_srt_g1

0x7f92,	// (0x00010f97) soft_indicator_pane_t1

0x7fac,	// (0x00010fb1) aid_ps_area_pane

0x7fbd,	// (0x00010fc2) aid_ps_clock_pane

0x7fcb,	// (0x00010fd0) aid_ps_indicator_pane

0x7fd7,	// (0x00010fdc) indicator_ps_pane_ParamLimits

0x7fd7,	// (0x00010fdc) indicator_ps_pane

0x7fe6,	// (0x00010feb) power_save_pane_g1_ParamLimits

0x7fe6,	// (0x00010feb) power_save_pane_g1

0x7ff2,	// (0x00010ff7) power_save_pane_g2_ParamLimits

0x7ff2,	// (0x00010ff7) power_save_pane_g2

0x6126,	// (0x0000f12b) aid_navinavi_width_pane

0x7fac,	// (0x00010fb1) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0001858b) power_save_pane_g_ParamLimits

0xf586,	// (0x0001858b) power_save_pane_g

0x8000,	// (0x00011005) power_save_pane_t1_ParamLimits

0x8000,	// (0x00011005) power_save_pane_t1

0x7fbd,	// (0x00010fc2) aid_ps_clock_pane_ParamLimits

0x7fcb,	// (0x00010fd0) aid_ps_indicator_pane_ParamLimits

0x8012,	// (0x00011017) power_save_pane_t4_ParamLimits

0x8012,	// (0x00011017) power_save_pane_t4

0x0001,

0xf58b,	// (0x00018590) power_save_pane_t_ParamLimits

0xf58b,	// (0x00018590) power_save_pane_t

0x803c,	// (0x00011041) power_save_t3_ParamLimits

0x803c,	// (0x00011041) power_save_t3

0x8027,	// (0x0001102c) power_save_t2_ParamLimits

0x8027,	// (0x0001102c) power_save_t2

0x8051,	// (0x00011056) indicator_ps_pane_g1

0x805a,	// (0x0001105f) ai_gene_pane_ParamLimits

0x805a,	// (0x0001105f) ai_gene_pane

0x8066,	// (0x0001106b) ai_links_pane_ParamLimits

0x8066,	// (0x0001106b) ai_links_pane

0x8072,	// (0x00011077) indicator_pane_cp1_ParamLimits

0x8072,	// (0x00011077) indicator_pane_cp1

0x807e,	// (0x00011083) main_pane_idle_g1_cp_ParamLimits

0x807e,	// (0x00011083) main_pane_idle_g1_cp

0x808a,	// (0x0001108f) popup_ai_links_title_window

0x8093,	// (0x00011098) soft_indicator_pane_cp1_ParamLimits

0x8093,	// (0x00011098) soft_indicator_pane_cp1

0xbb3e,	// (0x00014b43) ai_links_pane_g1

0xbb47,	// (0x00014b4c) grid_ai_links_pane

0xbb21,	// (0x00014b26) ai_gene_pane_1

0xbb2c,	// (0x00014b31) ai_gene_pane_2

0xbb35,	// (0x00014b3a) list_highlight_pane_cp4

0xbb05,	// (0x00014b0a) cell_ai_link_pane_ParamLimits

0xbb05,	// (0x00014b0a) cell_ai_link_pane

0xbafd,	// (0x00014b02) cell_ai_link_pane_g1

0x82b7,	// (0x000112bc) cell_ai_link_pane_g2

0x0001,

0xf923,	// (0x00018928) cell_ai_link_pane_g

0x7dac,	// (0x00010db1) grid_highlight_cp2

0x7dac,	// (0x00010db1) bg_popup_sub_pane_cp1

0x80ad,	// (0x000110b2) popup_ai_links_title_window_t1

0xba4b,	// (0x00014a50) ai_gene_pane_1_g1_ParamLimits

0xba4b,	// (0x00014a50) ai_gene_pane_1_g1

0xba57,	// (0x00014a5c) ai_gene_pane_1_g2_ParamLimits

0xba57,	// (0x00014a5c) ai_gene_pane_1_g2

0x0001,

0xf919,	// (0x0001891e) ai_gene_pane_1_g_ParamLimits

0xf919,	// (0x0001891e) ai_gene_pane_1_g

0xba64,	// (0x00014a69) ai_gene_pane_1_t1_ParamLimits

0xba64,	// (0x00014a69) ai_gene_pane_1_t1

0xba98,	// (0x00014a9d) grid_ai_soft_ind_pane

0xba36,	// (0x00014a3b) ai_gene_pane_2_t1_ParamLimits

0xba36,	// (0x00014a3b) ai_gene_pane_2_t1

0x80bc,	// (0x000110c1) main_pane_empty_t1_ParamLimits

0x80bc,	// (0x000110c1) main_pane_empty_t1

0x80d4,	// (0x000110d9) main_pane_empty_t2_ParamLimits

0x80d4,	// (0x000110d9) main_pane_empty_t2

0x80e9,	// (0x000110ee) main_pane_empty_t3_ParamLimits

0x80e9,	// (0x000110ee) main_pane_empty_t3

0x80fb,	// (0x00011100) main_pane_empty_t4_ParamLimits

0x80fb,	// (0x00011100) main_pane_empty_t4

0x810d,	// (0x00011112) main_pane_empty_t5_ParamLimits

0x810d,	// (0x00011112) main_pane_empty_t5

0x0004,

0xf590,	// (0x00018595) main_pane_empty_t_ParamLimits

0xf590,	// (0x00018595) main_pane_empty_t

0x8e9a,	// (0x00011e9f) bg_popup_window_pane_ParamLimits

0x8e9a,	// (0x00011e9f) bg_popup_window_pane

0xb79e,	// (0x000147a3) find_popup_pane_cp2_ParamLimits

0xb79e,	// (0x000147a3) find_popup_pane_cp2

0xb7aa,	// (0x000147af) heading_pane_ParamLimits

0xb7aa,	// (0x000147af) heading_pane

0x7dac,	// (0x00010db1) bg_popup_sub_pane

0xb718,	// (0x0001471d) bg_popup_window_pane_g1_ParamLimits

0xb718,	// (0x0001471d) bg_popup_window_pane_g1

0xb724,	// (0x00014729) bg_popup_window_pane_g2_ParamLimits

0xb724,	// (0x00014729) bg_popup_window_pane_g2

0xb730,	// (0x00014735) bg_popup_window_pane_g3_ParamLimits

0xb730,	// (0x00014735) bg_popup_window_pane_g3

0xb73c,	// (0x00014741) bg_popup_window_pane_g4_ParamLimits

0xb73c,	// (0x00014741) bg_popup_window_pane_g4

0xb748,	// (0x0001474d) bg_popup_window_pane_g5_ParamLimits

0xb748,	// (0x0001474d) bg_popup_window_pane_g5

0xb754,	// (0x00014759) bg_popup_window_pane_g6_ParamLimits

0xb754,	// (0x00014759) bg_popup_window_pane_g6

0xb760,	// (0x00014765) bg_popup_window_pane_g7_ParamLimits

0xb760,	// (0x00014765) bg_popup_window_pane_g7

0xb76c,	// (0x00014771) bg_popup_window_pane_g8_ParamLimits

0xb76c,	// (0x00014771) bg_popup_window_pane_g8

0xb778,	// (0x0001477d) bg_popup_window_pane_g9_ParamLimits

0xb778,	// (0x0001477d) bg_popup_window_pane_g9

0xb784,	// (0x00014789) bg_popup_window_pane_g10_ParamLimits

0xb784,	// (0x00014789) bg_popup_window_pane_g10

0x0009,

0xf8e1,	// (0x000188e6) bg_popup_window_pane_g_ParamLimits

0xf8e1,	// (0x000188e6) bg_popup_window_pane_g

0xb6ad,	// (0x000146b2) bg_popup_heading_pane_ParamLimits

0xb6ad,	// (0x000146b2) bg_popup_heading_pane

0x6f6e,	// (0x0000ff73) tabs_4_passive_pane_cp_srt_ParamLimits

0x6f6e,	// (0x0000ff73) tabs_4_passive_pane_cp_srt

0x6f80,	// (0x0000ff85) tabs_4_passive_pane_srt_ParamLimits

0xb6c1,	// (0x000146c6) heading_pane_g2

0x6f80,	// (0x0000ff85) tabs_4_passive_pane_srt

0x9e36,	// (0x00012e3b) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9e36,	// (0x00012e3b) bg_passive_tab_pane_cp3_srt

0xb6c9,	// (0x000146ce) heading_pane_t1_ParamLimits

0xb6c9,	// (0x000146ce) heading_pane_t1

0xb6e0,	// (0x000146e5) heading_pane_t2_ParamLimits

0xb6e0,	// (0x000146e5) heading_pane_t2

0x0001,

0xf8dc,	// (0x000188e1) heading_pane_t_ParamLimits

0xf8dc,	// (0x000188e1) heading_pane_t

0xb1e8,	// (0x000141ed) bg_popup_heading_pane_g1

0xb297,	// (0x0001429c) bg_popup_heading_pane_g2

0xb2a1,	// (0x000142a6) bg_popup_heading_pane_g3

0xb2ab,	// (0x000142b0) bg_popup_heading_pane_g4

0xb2b5,	// (0x000142ba) bg_popup_heading_pane_g5

0xb2bf,	// (0x000142c4) bg_popup_heading_pane_g6

0xb2c7,	// (0x000142cc) bg_popup_heading_pane_g7

0xb2cf,	// (0x000142d4) bg_popup_heading_pane_g8

0xb2d9,	// (0x000142de) bg_popup_heading_pane_g9

0x0008,

0xf898,	// (0x0001889d) bg_popup_heading_pane_g

0xa8e8,	// (0x000138ed) bg_popup_sub_pane_g1

0xa8f8,	// (0x000138fd) bg_popup_sub_pane_g2

0xa8f0,	// (0x000138f5) bg_popup_sub_pane_g3

0xa908,	// (0x0001390d) bg_popup_sub_pane_g4

0xa900,	// (0x00013905) bg_popup_sub_pane_g5

0xa910,	// (0x00013915) bg_popup_sub_pane_g6

0xa918,	// (0x0001391d) bg_popup_sub_pane_g7

0xa928,	// (0x0001392d) bg_popup_sub_pane_g8

0xa920,	// (0x00013925) bg_popup_sub_pane_g9

0x0008,

0xf872,	// (0x00018877) bg_popup_sub_pane_g

0x8121,	// (0x00011126) bg_popup_window_pane_cp5_ParamLimits

0x8121,	// (0x00011126) bg_popup_window_pane_cp5

0x813d,	// (0x00011142) popup_note_window_g1_ParamLimits

0x813d,	// (0x00011142) popup_note_window_g1

0x8149,	// (0x0001114e) popup_note_window_t1_ParamLimits

0x8149,	// (0x0001114e) popup_note_window_t1

0x815b,	// (0x00011160) popup_note_window_t2_ParamLimits

0x815b,	// (0x00011160) popup_note_window_t2

0x816d,	// (0x00011172) popup_note_window_t3_ParamLimits

0x816d,	// (0x00011172) popup_note_window_t3

0x817f,	// (0x00011184) popup_note_window_t4_ParamLimits

0x817f,	// (0x00011184) popup_note_window_t4

0x81a7,	// (0x000111ac) popup_note_window_t5_ParamLimits

0x81a7,	// (0x000111ac) popup_note_window_t5

0x0004,

0xf59b,	// (0x000185a0) popup_note_window_t_ParamLimits

0xf59b,	// (0x000185a0) popup_note_window_t

0x81cb,	// (0x000111d0) bg_popup_window_pane_cp6_ParamLimits

0x81cb,	// (0x000111d0) bg_popup_window_pane_cp6

0xb15c,	// (0x00014161) popup_note_image_window_g1_ParamLimits

0xb15c,	// (0x00014161) popup_note_image_window_g1

0xb168,	// (0x0001416d) popup_note_image_window_g2_ParamLimits

0xb168,	// (0x0001416d) popup_note_image_window_g2

0x0001,

0xf866,	// (0x0001886b) popup_note_image_window_g_ParamLimits

0xf866,	// (0x0001886b) popup_note_image_window_g

0xb181,	// (0x00014186) popup_note_image_window_t1_ParamLimits

0xb181,	// (0x00014186) popup_note_image_window_t1

0xb19a,	// (0x0001419f) popup_note_image_window_t2_ParamLimits

0xb19a,	// (0x0001419f) popup_note_image_window_t2

0xb1b3,	// (0x000141b8) popup_note_image_window_t3_ParamLimits

0xb1b3,	// (0x000141b8) popup_note_image_window_t3

0x0002,

0xf86b,	// (0x00018870) popup_note_image_window_t_ParamLimits

0xf86b,	// (0x00018870) popup_note_image_window_t

0xb01d,	// (0x00014022) bg_popup_window_pane_cp7_ParamLimits

0xb01d,	// (0x00014022) bg_popup_window_pane_cp7

0xb04d,	// (0x00014052) popup_note_wait_window_g1_ParamLimits

0xb04d,	// (0x00014052) popup_note_wait_window_g1

0xb059,	// (0x0001405e) popup_note_wait_window_g2_ParamLimits

0xb059,	// (0x0001405e) popup_note_wait_window_g2

0x0002,

0xf854,	// (0x00018859) popup_note_wait_window_g_ParamLimits

0xf854,	// (0x00018859) popup_note_wait_window_g

0xb071,	// (0x00014076) popup_note_wait_window_t1_ParamLimits

0xb071,	// (0x00014076) popup_note_wait_window_t1

0xb098,	// (0x0001409d) popup_note_wait_window_t2_ParamLimits

0xb098,	// (0x0001409d) popup_note_wait_window_t2

0xb0b5,	// (0x000140ba) popup_note_wait_window_t3_ParamLimits

0xb0b5,	// (0x000140ba) popup_note_wait_window_t3

0xb0c8,	// (0x000140cd) popup_note_wait_window_t4_ParamLimits

0xb0c8,	// (0x000140cd) popup_note_wait_window_t4

0x0004,

0xf85b,	// (0x00018860) popup_note_wait_window_t_ParamLimits

0xf85b,	// (0x00018860) popup_note_wait_window_t

0xb0ed,	// (0x000140f2) wait_bar_pane_ParamLimits

0xb0ed,	// (0x000140f2) wait_bar_pane

0x7dac,	// (0x00010db1) wait_anim_pane

0x7dac,	// (0x00010db1) wait_border_pane

0x7da2,	// (0x00010da7) wait_anim_pane_g1

0x7da2,	// (0x00010da7) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x0001871f) wait_anim_pane_g

0xafc1,	// (0x00013fc6) wait_border_pane_g1

0xafcc,	// (0x00013fd1) wait_border_pane_g2

0xafd5,	// (0x00013fda) wait_border_pane_g3

0x0002,

0xf84d,	// (0x00018852) wait_border_pane_g

0xae31,	// (0x00013e36) bg_popup_window_pane_cp16_ParamLimits

0xae31,	// (0x00013e36) bg_popup_window_pane_cp16

0xaf31,	// (0x00013f36) indicator_popup_pane_cp4_ParamLimits

0xaf31,	// (0x00013f36) indicator_popup_pane_cp4

0xaf45,	// (0x00013f4a) popup_query_data_window_t1_ParamLimits

0xaf45,	// (0x00013f4a) popup_query_data_window_t1

0xaf57,	// (0x00013f5c) popup_query_data_window_t2_ParamLimits

0xaf57,	// (0x00013f5c) popup_query_data_window_t2

0xaf70,	// (0x00013f75) popup_query_data_window_t3_ParamLimits

0xaf70,	// (0x00013f75) popup_query_data_window_t3

0x0002,

0xf846,	// (0x0001884b) popup_query_data_window_t_ParamLimits

0xf846,	// (0x0001884b) popup_query_data_window_t

0xaf8a,	// (0x00013f8f) query_popup_data_pane_ParamLimits

0xaf8a,	// (0x00013f8f) query_popup_data_pane

0xaf9e,	// (0x00013fa3) query_popup_data_pane_cp1_ParamLimits

0xaf9e,	// (0x00013fa3) query_popup_data_pane_cp1

0xae31,	// (0x00013e36) bg_popup_window_pane_cp10_ParamLimits

0xae31,	// (0x00013e36) bg_popup_window_pane_cp10

0xae63,	// (0x00013e68) indicator_popup_pane_ParamLimits

0xae63,	// (0x00013e68) indicator_popup_pane

0xae85,	// (0x00013e8a) popup_query_code_window_t1_ParamLimits

0xae85,	// (0x00013e8a) popup_query_code_window_t1

0xae9f,	// (0x00013ea4) popup_query_code_window_t2_ParamLimits

0xae9f,	// (0x00013ea4) popup_query_code_window_t2

0xaee8,	// (0x00013eed) popup_query_code_window_t3_ParamLimits

0xaee8,	// (0x00013eed) popup_query_code_window_t3

0x0002,

0xf83f,	// (0x00018844) popup_query_code_window_t_ParamLimits

0xf83f,	// (0x00018844) popup_query_code_window_t

0xaf17,	// (0x00013f1c) query_popup_pane_ParamLimits

0xaf17,	// (0x00013f1c) query_popup_pane

0x81cb,	// (0x000111d0) bg_popup_window_pane_cp15_ParamLimits

0x81cb,	// (0x000111d0) bg_popup_window_pane_cp15

0x81e9,	// (0x000111ee) indicator_popup_pane_cp1_ParamLimits

0x81e9,	// (0x000111ee) indicator_popup_pane_cp1

0x81fc,	// (0x00011201) indicator_popup_pane_cp2_ParamLimits

0x81fc,	// (0x00011201) indicator_popup_pane_cp2

0x820f,	// (0x00011214) popup_query_data_code_window_g1_ParamLimits

0x820f,	// (0x00011214) popup_query_data_code_window_g1

0x8222,	// (0x00011227) popup_query_data_code_window_t1_ParamLimits

0x8222,	// (0x00011227) popup_query_data_code_window_t1

0x8234,	// (0x00011239) popup_query_data_code_window_t2_ParamLimits

0x8234,	// (0x00011239) popup_query_data_code_window_t2

0x8246,	// (0x0001124b) popup_query_data_code_window_t3_ParamLimits

0x8246,	// (0x0001124b) popup_query_data_code_window_t3

0x825c,	// (0x00011261) popup_query_data_code_window_t4_ParamLimits

0x825c,	// (0x00011261) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x000185ab) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x000185ab) popup_query_data_code_window_t

0x6c2b,	// (0x0000fc30) list_single_midp_graphic_pane_g3

0x8274,	// (0x00011279) query_popup_data_pane_cp2_ParamLimits

0x8287,	// (0x0001128c) query_popup_pane_cp2_ParamLimits

0x8287,	// (0x0001128c) query_popup_pane_cp2

0x7dac,	// (0x00010db1) bg_popup_window_pane_cp11

0xae29,	// (0x00013e2e) heading_pane_cp5

0x836f,	// (0x00011374) listscroll_popup_info_pane

0x7dac,	// (0x00010db1) input_focus_pane_cp3

0x829a,	// (0x0001129f) query_popup_pane_t1

0x82a8,	// (0x000112ad) list_popup_info_pane_ParamLimits

0x82a8,	// (0x000112ad) list_popup_info_pane

0x82b7,	// (0x000112bc) listscroll_popup_info_pane_g1

0x82bf,	// (0x000112c4) scroll_pane_cp7

0x82c9,	// (0x000112ce) popup_info_list_pane_t1_ParamLimits

0x82c9,	// (0x000112ce) popup_info_list_pane_t1

0x82e3,	// (0x000112e8) popup_info_list_pane_t2_ParamLimits

0x82e3,	// (0x000112e8) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x000185b4) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x000185b4) popup_info_list_pane_t

0x7dac,	// (0x00010db1) bg_popup_window_pane_cp12

0xc294,	// (0x00015299) find_popup_pane

0x7e8c,	// (0x00010e91) bg_popup_window_pane_cp3

0x82fd,	// (0x00011302) heading_pane_cp3

0x8309,	// (0x0001130e) listscroll_popup_graphic_pane

0x7dac,	// (0x00010db1) bg_popup_window_pane_cp4

0x8365,	// (0x0001136a) heading_pane_cp4

0x836f,	// (0x00011374) listscroll_popup_colour_pane

0x8377,	// (0x0001137c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8377,	// (0x0001137c) cell_large_graphic_colour_none_popup_pane

0x838b,	// (0x00011390) grid_large_graphic_colour_popup_pane_ParamLimits

0x838b,	// (0x00011390) grid_large_graphic_colour_popup_pane

0x83af,	// (0x000113b4) listscroll_popup_colour_pane_g1_ParamLimits

0x83af,	// (0x000113b4) listscroll_popup_colour_pane_g1

0x83c6,	// (0x000113cb) listscroll_popup_colour_pane_g2_ParamLimits

0x83c6,	// (0x000113cb) listscroll_popup_colour_pane_g2

0x83dd,	// (0x000113e2) listscroll_popup_colour_pane_g3_ParamLimits

0x83dd,	// (0x000113e2) listscroll_popup_colour_pane_g3

0x83ed,	// (0x000113f2) listscroll_popup_colour_pane_g4_ParamLimits

0x83ed,	// (0x000113f2) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x000185b9) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x000185b9) listscroll_popup_colour_pane_g

0x83fc,	// (0x00011401) scroll_pane_cp6_ParamLimits

0x83fc,	// (0x00011401) scroll_pane_cp6

0x840e,	// (0x00011413) cell_large_graphic_colour_popup_pane_ParamLimits

0x840e,	// (0x00011413) cell_large_graphic_colour_popup_pane

0x842d,	// (0x00011432) cell_large_graphic_colour_none_popup_pane_t1

0x7dac,	// (0x00010db1) grid_highlight_pane_cp5

0x843c,	// (0x00011441) cell_large_graphic_colour_popup_pane_g1

0x8444,	// (0x00011449) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x000185c2) cell_large_graphic_colour_popup_pane_g

0x844c,	// (0x00011451) cell_large_graphic_colour_popup_pane_g2_copy1

0x8455,	// (0x0001145a) grid_highlight_pane_cp4

0x845d,	// (0x00011462) bg_popup_window_pane_cp8_ParamLimits

0x845d,	// (0x00011462) bg_popup_window_pane_cp8

0x8478,	// (0x0001147d) popup_snote_single_text_window_g1_ParamLimits

0x8478,	// (0x0001147d) popup_snote_single_text_window_g1

0x848a,	// (0x0001148f) popup_snote_single_text_window_t1_ParamLimits

0x848a,	// (0x0001148f) popup_snote_single_text_window_t1

0x849d,	// (0x000114a2) popup_snote_single_text_window_t2_ParamLimits

0x849d,	// (0x000114a2) popup_snote_single_text_window_t2

0x84b0,	// (0x000114b5) popup_snote_single_text_window_t3_ParamLimits

0x84b0,	// (0x000114b5) popup_snote_single_text_window_t3

0x84e9,	// (0x000114ee) popup_snote_single_text_window_t4_ParamLimits

0x84e9,	// (0x000114ee) popup_snote_single_text_window_t4

0x851d,	// (0x00011522) popup_snote_single_text_window_t5_ParamLimits

0x851d,	// (0x00011522) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x000185c7) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x000185c7) popup_snote_single_text_window_t

0x854c,	// (0x00011551) bg_popup_window_pane_cp9_ParamLimits

0x854c,	// (0x00011551) bg_popup_window_pane_cp9

0x8478,	// (0x0001147d) popup_snote_single_graphic_window_g1_ParamLimits

0x8478,	// (0x0001147d) popup_snote_single_graphic_window_g1

0x855a,	// (0x0001155f) popup_snote_single_graphic_window_g2_ParamLimits

0x855a,	// (0x0001155f) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x000185d2) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x000185d2) popup_snote_single_graphic_window_g

0x8566,	// (0x0001156b) popup_snote_single_graphic_window_t1_ParamLimits

0x8566,	// (0x0001156b) popup_snote_single_graphic_window_t1

0x8579,	// (0x0001157e) popup_snote_single_graphic_window_t2_ParamLimits

0x8579,	// (0x0001157e) popup_snote_single_graphic_window_t2

0x858c,	// (0x00011591) popup_snote_single_graphic_window_t3_ParamLimits

0x858c,	// (0x00011591) popup_snote_single_graphic_window_t3

0x85c5,	// (0x000115ca) popup_snote_single_graphic_window_t4_ParamLimits

0x85c5,	// (0x000115ca) popup_snote_single_graphic_window_t4

0x85f9,	// (0x000115fe) popup_snote_single_graphic_window_t5_ParamLimits

0x85f9,	// (0x000115fe) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x000185d7) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x000185d7) popup_snote_single_graphic_window_t

0xc1d4,	// (0x000151d9) grid_graphic_popup_pane_ParamLimits

0xc1d4,	// (0x000151d9) grid_graphic_popup_pane

0xc200,	// (0x00015205) listscroll_popup_graphic_pane_g1_ParamLimits

0xc200,	// (0x00015205) listscroll_popup_graphic_pane_g1

0xc214,	// (0x00015219) listscroll_popup_graphic_pane_g2_ParamLimits

0xc214,	// (0x00015219) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bc,	// (0x000189c1) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bc,	// (0x000189c1) listscroll_popup_graphic_pane_g

0xc228,	// (0x0001522d) scroll_pane_cp5

0xc17f,	// (0x00015184) cell_graphic_popup_pane_ParamLimits

0xc17f,	// (0x00015184) cell_graphic_popup_pane

0xc160,	// (0x00015165) cell_graphic_popup_pane_g1

0xc168,	// (0x0001516d) cell_graphic_popup_pane_g2

0x844c,	// (0x00011451) cell_graphic_popup_pane_g3

0x0002,

0xf9b5,	// (0x000189ba) cell_graphic_popup_pane_g

0xc171,	// (0x00015176) cell_graphic_popup_pane_t2

0x8455,	// (0x0001145a) grid_highlight_pane_cp3

0x863a,	// (0x0001163f) list_gen_pane_ParamLimits

0x863a,	// (0x0001163f) list_gen_pane

0x866c,	// (0x00011671) scroll_pane

0xc0c2,	// (0x000150c7) bg_list_pane_g1_ParamLimits

0xc0c2,	// (0x000150c7) bg_list_pane_g1

0xc0dd,	// (0x000150e2) bg_list_pane_g2_ParamLimits

0xc0dd,	// (0x000150e2) bg_list_pane_g2

0xc0f0,	// (0x000150f5) bg_list_pane_g3_ParamLimits

0xc0f0,	// (0x000150f5) bg_list_pane_g3

0xc102,	// (0x00015107) bg_list_pane_g4_ParamLimits

0xc102,	// (0x00015107) bg_list_pane_g4

0xc114,	// (0x00015119) bg_list_pane_g5_ParamLimits

0xc114,	// (0x00015119) bg_list_pane_g5

0x0004,

0xf9aa,	// (0x000189af) bg_list_pane_g_ParamLimits

0xf9aa,	// (0x000189af) bg_list_pane_g

0xbfb7,	// (0x00014fbc) list_double2_graphic_large_graphic_pane_ParamLimits

0xbfb7,	// (0x00014fbc) list_double2_graphic_large_graphic_pane

0xbfb7,	// (0x00014fbc) list_double2_graphic_pane_ParamLimits

0xbfb7,	// (0x00014fbc) list_double2_graphic_pane

0xbfb7,	// (0x00014fbc) list_double2_large_graphic_pane_ParamLimits

0xbfb7,	// (0x00014fbc) list_double2_large_graphic_pane

0xbfb7,	// (0x00014fbc) list_double2_pane_ParamLimits

0xbfb7,	// (0x00014fbc) list_double2_pane

0xbfb7,	// (0x00014fbc) list_double_graphic_heading_pane_ParamLimits

0xbfb7,	// (0x00014fbc) list_double_graphic_heading_pane

0xbfb7,	// (0x00014fbc) list_double_graphic_pane_ParamLimits

0xbfb7,	// (0x00014fbc) list_double_graphic_pane

0xbfb7,	// (0x00014fbc) list_double_heading_pane_ParamLimits

0xbfb7,	// (0x00014fbc) list_double_heading_pane

0xbfb7,	// (0x00014fbc) list_double_large_graphic_pane_ParamLimits

0xbfb7,	// (0x00014fbc) list_double_large_graphic_pane

0xbfb7,	// (0x00014fbc) list_double_number_pane_ParamLimits

0xbfb7,	// (0x00014fbc) list_double_number_pane

0xbfb7,	// (0x00014fbc) list_double_pane_ParamLimits

0xbfb7,	// (0x00014fbc) list_double_pane

0xbfb7,	// (0x00014fbc) list_double_time_pane_ParamLimits

0xbfb7,	// (0x00014fbc) list_double_time_pane

0xbfb7,	// (0x00014fbc) list_setting_number_pane_ParamLimits

0xbfb7,	// (0x00014fbc) list_setting_number_pane

0xbfb7,	// (0x00014fbc) list_setting_pane_ParamLimits

0xbfb7,	// (0x00014fbc) list_setting_pane

0xc00e,	// (0x00015013) list_single_2graphic_pane_ParamLimits

0xc00e,	// (0x00015013) list_single_2graphic_pane

0xc00e,	// (0x00015013) list_single_graphic_heading_pane_ParamLimits

0xc00e,	// (0x00015013) list_single_graphic_heading_pane

0xc00e,	// (0x00015013) list_single_graphic_pane_ParamLimits

0xc00e,	// (0x00015013) list_single_graphic_pane

0xc00e,	// (0x00015013) list_single_heading_pane_ParamLimits

0xc00e,	// (0x00015013) list_single_heading_pane

0xc09c,	// (0x000150a1) list_single_large_graphic_pane_ParamLimits

0xc09c,	// (0x000150a1) list_single_large_graphic_pane

0xc00e,	// (0x00015013) list_single_number_heading_pane_ParamLimits

0xc00e,	// (0x00015013) list_single_number_heading_pane

0xc00e,	// (0x00015013) list_single_number_pane_ParamLimits

0xc00e,	// (0x00015013) list_single_number_pane

0xc00e,	// (0x00015013) list_single_pane_ParamLimits

0xc00e,	// (0x00015013) list_single_pane

0x7dac,	// (0x00010db1) list_highlight_pane_cp1

0x86ac,	// (0x000116b1) list_single_pane_g1_ParamLimits

0x86ac,	// (0x000116b1) list_single_pane_g1

0x86b8,	// (0x000116bd) list_single_pane_g2_ParamLimits

0x86b8,	// (0x000116bd) list_single_pane_g2

0x0001,

0xf5e4,	// (0x000185e9) list_single_pane_g_ParamLimits

0xf5e4,	// (0x000185e9) list_single_pane_g

0xbf70,	// (0x00014f75) list_single_pane_t1_ParamLimits

0xbf70,	// (0x00014f75) list_single_pane_t1

0x86ac,	// (0x000116b1) list_single_number_pane_g1_ParamLimits

0x86ac,	// (0x000116b1) list_single_number_pane_g1

0x86b8,	// (0x000116bd) list_single_number_pane_g2_ParamLimits

0x86b8,	// (0x000116bd) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x000185e9) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x000185e9) list_single_number_pane_g

0xbd0a,	// (0x00014d0f) list_single_number_pane_t1_ParamLimits

0xbd0a,	// (0x00014d0f) list_single_number_pane_t1

0xbd20,	// (0x00014d25) list_single_number_pane_t2_ParamLimits

0xbd20,	// (0x00014d25) list_single_number_pane_t2

0x0001,

0xf96b,	// (0x00018970) list_single_number_pane_t_ParamLimits

0xf96b,	// (0x00018970) list_single_number_pane_t

0x86a0,	// (0x000116a5) list_single_graphic_pane_g1_ParamLimits

0x86a0,	// (0x000116a5) list_single_graphic_pane_g1

0x86ac,	// (0x000116b1) list_single_graphic_pane_g2_ParamLimits

0x86ac,	// (0x000116b1) list_single_graphic_pane_g2

0x86b8,	// (0x000116bd) list_single_graphic_pane_g3_ParamLimits

0x86b8,	// (0x000116bd) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x000185e2) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x000185e2) list_single_graphic_pane_g

0x86c4,	// (0x000116c9) list_single_graphic_pane_t1_ParamLimits

0x86c4,	// (0x000116c9) list_single_graphic_pane_t1

0x86ac,	// (0x000116b1) list_single_heading_pane_g1_ParamLimits

0x86ac,	// (0x000116b1) list_single_heading_pane_g1

0x86b8,	// (0x000116bd) list_single_heading_pane_g2_ParamLimits

0x86b8,	// (0x000116bd) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x000185e9) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x000185e9) list_single_heading_pane_g

0x86da,	// (0x000116df) list_single_heading_pane_t1_ParamLimits

0x86da,	// (0x000116df) list_single_heading_pane_t1

0x86f0,	// (0x000116f5) list_single_heading_pane_t2_ParamLimits

0x86f0,	// (0x000116f5) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x000185ee) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x000185ee) list_single_heading_pane_t

0x86ac,	// (0x000116b1) list_single_number_heading_pane_g1_ParamLimits

0x86ac,	// (0x000116b1) list_single_number_heading_pane_g1

0x86b8,	// (0x000116bd) list_single_number_heading_pane_g2_ParamLimits

0x86b8,	// (0x000116bd) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x000185e9) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x000185e9) list_single_number_heading_pane_g

0x86da,	// (0x000116df) list_single_number_heading_pane_t1_ParamLimits

0x86da,	// (0x000116df) list_single_number_heading_pane_t1

0x8702,	// (0x00011707) list_single_number_heading_pane_t2_ParamLimits

0x8702,	// (0x00011707) list_single_number_heading_pane_t2

0x8714,	// (0x00011719) list_single_number_heading_pane_t3_ParamLimits

0x8714,	// (0x00011719) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x000185f3) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x000185f3) list_single_number_heading_pane_t

0x8726,	// (0x0001172b) list_single_graphic_heading_pane_g1_ParamLimits

0x8726,	// (0x0001172b) list_single_graphic_heading_pane_g1

0x8732,	// (0x00011737) list_single_graphic_heading_pane_g4_ParamLimits

0x8732,	// (0x00011737) list_single_graphic_heading_pane_g4

0x86b8,	// (0x000116bd) list_single_graphic_heading_pane_g5_ParamLimits

0x86b8,	// (0x000116bd) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x000185fa) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x000185fa) list_single_graphic_heading_pane_g

0x86da,	// (0x000116df) list_single_graphic_heading_pane_t1_ParamLimits

0x86da,	// (0x000116df) list_single_graphic_heading_pane_t1

0x8743,	// (0x00011748) list_single_graphic_heading_pane_t2_ParamLimits

0x8743,	// (0x00011748) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x00018601) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x00018601) list_single_graphic_heading_pane_t

0x8755,	// (0x0001175a) list_single_large_graphic_pane_g1_ParamLimits

0x8755,	// (0x0001175a) list_single_large_graphic_pane_g1

0x8761,	// (0x00011766) list_single_large_graphic_pane_g2_ParamLimits

0x8761,	// (0x00011766) list_single_large_graphic_pane_g2

0x876d,	// (0x00011772) list_single_large_graphic_pane_g3_ParamLimits

0x876d,	// (0x00011772) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x00018606) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00018606) list_single_large_graphic_pane_g

0xafcc,	// (0x00013fd1) wait_border_pane_g2_copy1

0x8779,	// (0x0001177e) list_single_large_graphic_pane_g4_cp2

0x8781,	// (0x00011786) list_single_large_graphic_pane_t1_ParamLimits

0x8781,	// (0x00011786) list_single_large_graphic_pane_t1

0x8797,	// (0x0001179c) list_double_pane_g1_ParamLimits

0x8797,	// (0x0001179c) list_double_pane_g1

0x87a3,	// (0x000117a8) list_double_pane_g2_ParamLimits

0x87a3,	// (0x000117a8) list_double_pane_g2

0x0001,

0xf608,	// (0x0001860d) list_double_pane_g_ParamLimits

0xf608,	// (0x0001860d) list_double_pane_g

0x87af,	// (0x000117b4) list_double_pane_t1_ParamLimits

0x87af,	// (0x000117b4) list_double_pane_t1

0x87c5,	// (0x000117ca) list_double_pane_t2_ParamLimits

0x87c5,	// (0x000117ca) list_double_pane_t2

0x0001,

0xf60d,	// (0x00018612) list_double_pane_t_ParamLimits

0xf60d,	// (0x00018612) list_double_pane_t

0x87d7,	// (0x000117dc) list_double2_pane_g1_ParamLimits

0x87d7,	// (0x000117dc) list_double2_pane_g1

0x87e8,	// (0x000117ed) list_double2_pane_g2_ParamLimits

0x87e8,	// (0x000117ed) list_double2_pane_g2

0x0001,

0xf612,	// (0x00018617) list_double2_pane_g_ParamLimits

0xf612,	// (0x00018617) list_double2_pane_g

0x87f4,	// (0x000117f9) list_double2_pane_t1_ParamLimits

0x87f4,	// (0x000117f9) list_double2_pane_t1

0x880a,	// (0x0001180f) list_double2_pane_t2_ParamLimits

0x880a,	// (0x0001180f) list_double2_pane_t2

0x0001,

0xf617,	// (0x0001861c) list_double2_pane_t_ParamLimits

0xf617,	// (0x0001861c) list_double2_pane_t

0x8797,	// (0x0001179c) list_double_number_pane_g1_ParamLimits

0x8797,	// (0x0001179c) list_double_number_pane_g1

0x87a3,	// (0x000117a8) list_double_number_pane_g2_ParamLimits

0x87a3,	// (0x000117a8) list_double_number_pane_g2

0x0001,

0xf608,	// (0x0001860d) list_double_number_pane_g_ParamLimits

0xf608,	// (0x0001860d) list_double_number_pane_g

0x881c,	// (0x00011821) list_double_number_pane_t1_ParamLimits

0x881c,	// (0x00011821) list_double_number_pane_t1

0x882e,	// (0x00011833) list_double_number_pane_t2_ParamLimits

0x882e,	// (0x00011833) list_double_number_pane_t2

0x8844,	// (0x00011849) list_double_number_pane_t3_ParamLimits

0x8844,	// (0x00011849) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x00018621) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x00018621) list_double_number_pane_t

0x8856,	// (0x0001185b) list_double_graphic_pane_g1_ParamLimits

0x8856,	// (0x0001185b) list_double_graphic_pane_g1

0x8862,	// (0x00011867) list_double_graphic_pane_g2_ParamLimits

0x8862,	// (0x00011867) list_double_graphic_pane_g2

0x8871,	// (0x00011876) list_double_graphic_pane_g3_ParamLimits

0x8871,	// (0x00011876) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x00018628) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x00018628) list_double_graphic_pane_g

0x8889,	// (0x0001188e) list_double_graphic_pane_t1_ParamLimits

0x8889,	// (0x0001188e) list_double_graphic_pane_t1

0x889f,	// (0x000118a4) list_double_graphic_pane_t2_ParamLimits

0x889f,	// (0x000118a4) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x00018631) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x00018631) list_double_graphic_pane_t

0x88b1,	// (0x000118b6) list_double2_graphic_pane_g1_ParamLimits

0x88b1,	// (0x000118b6) list_double2_graphic_pane_g1

0x88bd,	// (0x000118c2) list_double2_graphic_pane_g2_ParamLimits

0x88bd,	// (0x000118c2) list_double2_graphic_pane_g2

0x87e8,	// (0x000117ed) list_double2_graphic_pane_g3_ParamLimits

0x87e8,	// (0x000117ed) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x00018636) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x00018636) list_double2_graphic_pane_g

0x88c9,	// (0x000118ce) list_double2_graphic_pane_t1_ParamLimits

0x88c9,	// (0x000118ce) list_double2_graphic_pane_t1

0x88df,	// (0x000118e4) list_double2_graphic_pane_t2_ParamLimits

0x88df,	// (0x000118e4) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0001863d) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0001863d) list_double2_graphic_pane_t

0x88f1,	// (0x000118f6) list_double_large_graphic_pane_g1_ParamLimits

0x88f1,	// (0x000118f6) list_double_large_graphic_pane_g1

0x891c,	// (0x00011921) list_double_large_graphic_pane_g2_ParamLimits

0x891c,	// (0x00011921) list_double_large_graphic_pane_g2

0x87a3,	// (0x000117a8) list_double_large_graphic_pane_g3_ParamLimits

0x87a3,	// (0x000117a8) list_double_large_graphic_pane_g3

0x892d,	// (0x00011932) list_double_large_graphic_pane_g4_ParamLimits

0x892d,	// (0x00011932) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x00018642) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x00018642) list_double_large_graphic_pane_g

0x8954,	// (0x00011959) list_double_large_graphic_pane_t1_ParamLimits

0x8954,	// (0x00011959) list_double_large_graphic_pane_t1

0x896d,	// (0x00011972) list_double_large_graphic_pane_t2_ParamLimits

0x896d,	// (0x00011972) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0001864d) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0001864d) list_double_large_graphic_pane_t

0x897f,	// (0x00011984) list_double2_large_graphic_pane_g1_ParamLimits

0x897f,	// (0x00011984) list_double2_large_graphic_pane_g1

0x87d7,	// (0x000117dc) list_double2_large_graphic_pane_g2_ParamLimits

0x87d7,	// (0x000117dc) list_double2_large_graphic_pane_g2

0x87e8,	// (0x000117ed) list_double2_large_graphic_pane_g3_ParamLimits

0x87e8,	// (0x000117ed) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x00018652) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x00018652) list_double2_large_graphic_pane_g

0x898b,	// (0x00011990) list_double2_large_graphic_pane_t1_ParamLimits

0x898b,	// (0x00011990) list_double2_large_graphic_pane_t1

0x89a1,	// (0x000119a6) list_double2_large_graphic_pane_t2_ParamLimits

0x89a1,	// (0x000119a6) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x00018659) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x00018659) list_double2_large_graphic_pane_t

0x89b3,	// (0x000119b8) list_double_heading_pane_g1_ParamLimits

0x89b3,	// (0x000119b8) list_double_heading_pane_g1

0x89c4,	// (0x000119c9) list_double_heading_pane_g2_ParamLimits

0x89c4,	// (0x000119c9) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0001865e) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0001865e) list_double_heading_pane_g

0x89d0,	// (0x000119d5) list_double_heading_pane_t1_ParamLimits

0x89d0,	// (0x000119d5) list_double_heading_pane_t1

0x89e6,	// (0x000119eb) list_double_heading_pane_t2_ParamLimits

0x89e6,	// (0x000119eb) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x00018663) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x00018663) list_double_heading_pane_t

0x8856,	// (0x0001185b) list_double_graphic_heading_pane_g1_ParamLimits

0x8856,	// (0x0001185b) list_double_graphic_heading_pane_g1

0x89b3,	// (0x000119b8) list_double_graphic_heading_pane_g2_ParamLimits

0x89b3,	// (0x000119b8) list_double_graphic_heading_pane_g2

0x89c4,	// (0x000119c9) list_double_graphic_heading_pane_g3_ParamLimits

0x89c4,	// (0x000119c9) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x00018668) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x00018668) list_double_graphic_heading_pane_g

0x89f8,	// (0x000119fd) list_double_graphic_heading_pane_t1_ParamLimits

0x89f8,	// (0x000119fd) list_double_graphic_heading_pane_t1

0x8a0e,	// (0x00011a13) list_double_graphic_heading_pane_t2_ParamLimits

0x8a0e,	// (0x00011a13) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0001866f) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0001866f) list_double_graphic_heading_pane_t

0x891c,	// (0x00011921) list_double_time_pane_g1_ParamLimits

0x891c,	// (0x00011921) list_double_time_pane_g1

0x87a3,	// (0x000117a8) list_double_time_pane_g2_ParamLimits

0x87a3,	// (0x000117a8) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x00018674) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x00018674) list_double_time_pane_g

0x8a20,	// (0x00011a25) list_double_time_pane_t1_ParamLimits

0x8a20,	// (0x00011a25) list_double_time_pane_t1

0x8a36,	// (0x00011a3b) list_double_time_pane_t2_ParamLimits

0x8a36,	// (0x00011a3b) list_double_time_pane_t2

0x8a48,	// (0x00011a4d) list_double_time_pane_t3_ParamLimits

0x8a48,	// (0x00011a4d) list_double_time_pane_t3

0x8a5a,	// (0x00011a5f) list_double_time_pane_t4_ParamLimits

0x8a5a,	// (0x00011a5f) list_double_time_pane_t4

0x0003,

0xf674,	// (0x00018679) list_double_time_pane_t_ParamLimits

0xf674,	// (0x00018679) list_double_time_pane_t

0x88bd,	// (0x000118c2) list_setting_pane_g1_ParamLimits

0x88bd,	// (0x000118c2) list_setting_pane_g1

0x87e8,	// (0x000117ed) list_setting_pane_g2_ParamLimits

0x87e8,	// (0x000117ed) list_setting_pane_g2

0x0001,

0xf67d,	// (0x00018682) list_setting_pane_g_ParamLimits

0xf67d,	// (0x00018682) list_setting_pane_g

0x8a6c,	// (0x00011a71) list_setting_pane_t1_ParamLimits

0x8a6c,	// (0x00011a71) list_setting_pane_t1

0x8a83,	// (0x00011a88) list_setting_pane_t2_ParamLimits

0x8a83,	// (0x00011a88) list_setting_pane_t2

0x0002,

0xf682,	// (0x00018687) list_setting_pane_t_ParamLimits

0xf682,	// (0x00018687) list_setting_pane_t

0x8ac0,	// (0x00011ac5) set_value_pane_cp_ParamLimits

0x8ac0,	// (0x00011ac5) set_value_pane_cp

0x88bd,	// (0x000118c2) list_setting_number_pane_g1_ParamLimits

0x88bd,	// (0x000118c2) list_setting_number_pane_g1

0x87e8,	// (0x000117ed) list_setting_number_pane_g2_ParamLimits

0x87e8,	// (0x000117ed) list_setting_number_pane_g2

0x0001,

0xf67d,	// (0x00018682) list_setting_number_pane_g_ParamLimits

0xf67d,	// (0x00018682) list_setting_number_pane_g

0x8acc,	// (0x00011ad1) list_setting_number_pane_t1_ParamLimits

0x8acc,	// (0x00011ad1) list_setting_number_pane_t1

0x8ae0,	// (0x00011ae5) list_setting_number_pane_t2_ParamLimits

0x8ae0,	// (0x00011ae5) list_setting_number_pane_t2

0x8af7,	// (0x00011afc) list_setting_number_pane_t3_ParamLimits

0x8af7,	// (0x00011afc) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x0001868e) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x0001868e) list_setting_number_pane_t

0x8ac0,	// (0x00011ac5) set_value_pane_ParamLimits

0x8ac0,	// (0x00011ac5) set_value_pane

0x8b3a,	// (0x00011b3f) bg_set_opt_pane_ParamLimits

0x8b3a,	// (0x00011b3f) bg_set_opt_pane

0x8b5b,	// (0x00011b60) set_value_pane_t1

0x8b69,	// (0x00011b6e) slider_set_pane_cp3

0x8b72,	// (0x00011b77) volume_small_pane_cp

0x8b7b,	// (0x00011b80) list_form_gen_pane

0x8b84,	// (0x00011b89) scroll_pane_cp8

0x8b95,	// (0x00011b9a) form_field_data_pane_ParamLimits

0x8b95,	// (0x00011b9a) form_field_data_pane

0x8bb5,	// (0x00011bba) form_field_data_wide_pane_ParamLimits

0x8bb5,	// (0x00011bba) form_field_data_wide_pane

0x8bd6,	// (0x00011bdb) form_field_popup_pane_ParamLimits

0x8bd6,	// (0x00011bdb) form_field_popup_pane

0x8bf4,	// (0x00011bf9) form_field_popup_wide_pane_ParamLimits

0x8bf4,	// (0x00011bf9) form_field_popup_wide_pane

0x8c0f,	// (0x00011c14) form_field_slider_pane_ParamLimits

0x8c0f,	// (0x00011c14) form_field_slider_pane

0x8c22,	// (0x00011c27) form_field_slider_wide_pane_ParamLimits

0x8c22,	// (0x00011c27) form_field_slider_wide_pane

0x8c35,	// (0x00011c3a) data_form_pane

0x8c4b,	// (0x00011c50) form_field_data_pane_t1

0x8c65,	// (0x00011c6a) input_focus_pane

0x8c73,	// (0x00011c78) data_form_wide_pane

0x8cab,	// (0x00011cb0) form_field_data_wide_pane_t1

0x846a,	// (0x0001146f) input_focus_pane_cp6

0x8ccd,	// (0x00011cd2) form_field_popup_pane_t1

0x8c65,	// (0x00011c6a) input_focus_pane_cp7

0x8ce7,	// (0x00011cec) list_form_pane

0x8cfb,	// (0x00011d00) form_field_popup_wide_pane_t1

0x8c65,	// (0x00011c6a) input_focus_pane_cp8

0x8d10,	// (0x00011d15) list_form_wide_pane

0x8d27,	// (0x00011d2c) form_field_slider_pane_t1_ParamLimits

0x8d27,	// (0x00011d2c) form_field_slider_pane_t1

0x8d3b,	// (0x00011d40) form_field_slider_pane_t2_ParamLimits

0x8d3b,	// (0x00011d40) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x0001869e) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x0001869e) form_field_slider_pane_t

0x8121,	// (0x00011126) input_focus_pane_cp9_ParamLimits

0x8121,	// (0x00011126) input_focus_pane_cp9

0x8d4d,	// (0x00011d52) slider_cont_pane_ParamLimits

0x8d4d,	// (0x00011d52) slider_cont_pane

0x8d61,	// (0x00011d66) form_field_slider_wide_pane_t1_ParamLimits

0x8d61,	// (0x00011d66) form_field_slider_wide_pane_t1

0x8d73,	// (0x00011d78) form_field_slider_wide_pane_t2_ParamLimits

0x8d73,	// (0x00011d78) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x000186a3) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x000186a3) form_field_slider_wide_pane_t

0x8121,	// (0x00011126) input_focus_pane_cp10_ParamLimits

0x8121,	// (0x00011126) input_focus_pane_cp10

0x8d85,	// (0x00011d8a) slider_cont_pane_cp1_ParamLimits

0x8d85,	// (0x00011d8a) slider_cont_pane_cp1

0x8d99,	// (0x00011d9e) slider_form_pane_cp

0x8da1,	// (0x00011da6) input_focus_pane_g1

0x8da9,	// (0x00011dae) input_focus_pane_g2

0x8db1,	// (0x00011db6) input_focus_pane_g3

0x8db9,	// (0x00011dbe) input_focus_pane_g4

0x8dc1,	// (0x00011dc6) input_focus_pane_g5

0x8dc9,	// (0x00011dce) input_focus_pane_g6

0x8dd1,	// (0x00011dd6) input_focus_pane_g7

0x8dd9,	// (0x00011dde) input_focus_pane_g8

0x8de1,	// (0x00011de6) input_focus_pane_g9

0x7da2,	// (0x00010da7) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x000186a8) input_focus_pane_g

0xafd5,	// (0x00013fda) wait_border_pane_g3_copy1

0x8de9,	// (0x00011dee) data_form_pane_t1

0x7da2,	// (0x00010da7) wait_anim_pane_g1_copy1

0xbf53,	// (0x00014f58) data_form_wide_pane_t1

0x8e04,	// (0x00011e09) list_form_graphic_pane_cp_ParamLimits

0x8e04,	// (0x00011e09) list_form_graphic_pane_cp

0xbf28,	// (0x00014f2d) slider_form_pane_g1

0xbf31,	// (0x00014f36) slider_form_pane_g2

0x0006,

0xf99b,	// (0x000189a0) slider_form_pane_g

0x8e1b,	// (0x00011e20) list_form_graphic_pane_ParamLimits

0x8e1b,	// (0x00011e20) list_form_graphic_pane

0x8e35,	// (0x00011e3a) list_form_graphic_pane_g1

0x8e3d,	// (0x00011e42) list_form_graphic_pane_t1_ParamLimits

0x8e3d,	// (0x00011e42) list_form_graphic_pane_t1

0x7e8c,	// (0x00010e91) list_highlight_pane_cp5_ParamLimits

0x7e8c,	// (0x00010e91) list_highlight_pane_cp5

0x8e52,	// (0x00011e57) find_pane_g1

0x8e5b,	// (0x00011e60) input_find_pane

0x8e64,	// (0x00011e69) input_find_pane_g1_ParamLimits

0x8e64,	// (0x00011e69) input_find_pane_g1

0x8e70,	// (0x00011e75) input_find_pane_t1_ParamLimits

0x8e70,	// (0x00011e75) input_find_pane_t1

0x8e85,	// (0x00011e8a) input_find_pane_t2_ParamLimits

0x8e85,	// (0x00011e8a) input_find_pane_t2

0x0001,

0xf6b8,	// (0x000186bd) input_find_pane_t_ParamLimits

0xf6b8,	// (0x000186bd) input_find_pane_t

0x8e9a,	// (0x00011e9f) input_focus_pane_cp5_ParamLimits

0x8e9a,	// (0x00011e9f) input_focus_pane_cp5

0x8eb4,	// (0x00011eb9) bg_popup_window_pane_cp2_ParamLimits

0x8eb4,	// (0x00011eb9) bg_popup_window_pane_cp2

0x8ec1,	// (0x00011ec6) listscroll_menu_pane_ParamLimits

0x8ec1,	// (0x00011ec6) listscroll_menu_pane

0x8ecd,	// (0x00011ed2) popup_submenu_window_ParamLimits

0x8ecd,	// (0x00011ed2) popup_submenu_window

0x8ef1,	// (0x00011ef6) find_popup_pane_g1

0x8ef9,	// (0x00011efe) input_popup_find_pane_cp

0x8e9a,	// (0x00011e9f) input_focus_pane_cp4_ParamLimits

0x8e9a,	// (0x00011e9f) input_focus_pane_cp4

0x8f11,	// (0x00011f16) input_popup_find_pane_t1_ParamLimits

0x8f11,	// (0x00011f16) input_popup_find_pane_t1

0x7dac,	// (0x00010db1) bg_popup_sub_pane_cp

0x8f3f,	// (0x00011f44) listscroll_popup_sub_pane

0x8f47,	// (0x00011f4c) list_submenu_pane_ParamLimits

0x8f47,	// (0x00011f4c) list_submenu_pane

0x8f58,	// (0x00011f5d) scroll_pane_cp4

0x8f60,	// (0x00011f65) list_single_popup_submenu_pane_ParamLimits

0x8f60,	// (0x00011f65) list_single_popup_submenu_pane

0x8f73,	// (0x00011f78) list_single_popup_submenu_pane_g1

0x8f7b,	// (0x00011f80) list_single_popup_submenu_pane_t1_ParamLimits

0x8f7b,	// (0x00011f80) list_single_popup_submenu_pane_t1

0x7e8c,	// (0x00010e91) bg_active_tab_pane_cp1_ParamLimits

0x7e8c,	// (0x00010e91) bg_active_tab_pane_cp1

0x8f90,	// (0x00011f95) tabs_2_active_pane_g1

0x8f98,	// (0x00011f9d) tabs_2_active_pane_t1

0x7e8c,	// (0x00010e91) bg_passive_tab_pane_cp1_ParamLimits

0x7e8c,	// (0x00010e91) bg_passive_tab_pane_cp1

0x8f90,	// (0x00011f95) tabs_2_passive_pane_g1

0x8f98,	// (0x00011f9d) tabs_2_passive_pane_t1

0x8faa,	// (0x00011faf) bg_active_tab_pane_cp4

0x8fb8,	// (0x00011fbd) tabs_2_long_active_pane_t1

0x8fcb,	// (0x00011fd0) bg_passive_tab_pane_cp4

0x6c33,	// (0x0000fc38) list_single_midp_graphic_pane_g4_ParamLimits

0x8faa,	// (0x00011faf) bg_active_tab_pane_cp5

0x8fd7,	// (0x00011fdc) tabs_3_long_active_pane_t1

0x8fcb,	// (0x00011fd0) bg_passive_tab_pane_cp5

0x6c33,	// (0x0000fc38) list_single_midp_graphic_pane_g4

0x7e8c,	// (0x00010e91) bg_popup_window_pane_cp13_ParamLimits

0x7e8c,	// (0x00010e91) bg_popup_window_pane_cp13

0x8ff2,	// (0x00011ff7) listscroll_popup_fast_pane_ParamLimits

0x8ff2,	// (0x00011ff7) listscroll_popup_fast_pane

0x9001,	// (0x00012006) grid_popup_fast_pane_ParamLimits

0x9001,	// (0x00012006) grid_popup_fast_pane

0x9013,	// (0x00012018) scroll_pane_cp9_ParamLimits

0x9013,	// (0x00012018) scroll_pane_cp9

0xdd0a,	// (0x00016d0f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xdd0a,	// (0x00016d0f) list_single_graphic_hl_pane_t1_cp2

0x9037,	// (0x0001203c) input_focus_pane_cp20_ParamLimits

0x9037,	// (0x0001203c) input_focus_pane_cp20

0x9045,	// (0x0001204a) query_popup_data_pane_t1_ParamLimits

0x9045,	// (0x0001204a) query_popup_data_pane_t1

0x9058,	// (0x0001205d) query_popup_data_pane_t2_ParamLimits

0x9058,	// (0x0001205d) query_popup_data_pane_t2

0x909e,	// (0x000120a3) query_popup_data_pane_t3_ParamLimits

0x909e,	// (0x000120a3) query_popup_data_pane_t3

0x90df,	// (0x000120e4) query_popup_data_pane_t4_ParamLimits

0x90df,	// (0x000120e4) query_popup_data_pane_t4

0x911b,	// (0x00012120) query_popup_data_pane_t5_ParamLimits

0x911b,	// (0x00012120) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x000186c2) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x000186c2) query_popup_data_pane_t

0x8da1,	// (0x00011da6) bg_set_opt_pane_g1

0x8da9,	// (0x00011dae) bg_set_opt_pane_g2

0x8db1,	// (0x00011db6) bg_set_opt_pane_g3

0x8db9,	// (0x00011dbe) bg_set_opt_pane_g4

0x8dc1,	// (0x00011dc6) bg_set_opt_pane_g5

0x8dc9,	// (0x00011dce) bg_set_opt_pane_g6

0x8dd1,	// (0x00011dd6) bg_set_opt_pane_g7

0x8dd9,	// (0x00011dde) bg_set_opt_pane_g8

0x8de1,	// (0x00011de6) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x000186cd) bg_set_opt_pane_g

0x682d,	// (0x0000f832) control_top_pane_stacon_ParamLimits

0x682d,	// (0x0000f832) control_top_pane_stacon

0x6880,	// (0x0000f885) signal_pane_stacon_ParamLimits

0x6880,	// (0x0000f885) signal_pane_stacon

0x9744,	// (0x00012749) stacon_top_pane_g1_ParamLimits

0x9744,	// (0x00012749) stacon_top_pane_g1

0x68a5,	// (0x0000f8aa) title_pane_stacon_ParamLimits

0x68a5,	// (0x0000f8aa) title_pane_stacon

0x68cf,	// (0x0000f8d4) uni_indicator_pane_stacon_ParamLimits

0x68cf,	// (0x0000f8d4) uni_indicator_pane_stacon

0x68e4,	// (0x0000f8e9) battery_pane_stacon_ParamLimits

0x68e4,	// (0x0000f8e9) battery_pane_stacon

0x6928,	// (0x0000f92d) control_bottom_pane_stacon_ParamLimits

0x6928,	// (0x0000f92d) control_bottom_pane_stacon

0x694b,	// (0x0000f950) navi_pane_stacon_ParamLimits

0x694b,	// (0x0000f950) navi_pane_stacon

0x9766,	// (0x0001276b) stacon_bottom_pane_g1_ParamLimits

0x9766,	// (0x0001276b) stacon_bottom_pane_g1

0x658e,	// (0x0000f593) aid_levels_signal_lsc_ParamLimits

0x658e,	// (0x0000f593) aid_levels_signal_lsc

0x65a5,	// (0x0000f5aa) signal_pane_stacon_g1_ParamLimits

0x65a5,	// (0x0000f5aa) signal_pane_stacon_g1

0x65b9,	// (0x0000f5be) signal_pane_stacon_g2_ParamLimits

0x65b9,	// (0x0000f5be) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x000186e0) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x000186e0) signal_pane_stacon_g

0x65ee,	// (0x0000f5f3) title_pane_stacon_t1_ParamLimits

0x65ee,	// (0x0000f5f3) title_pane_stacon_t1

0x915f,	// (0x00012164) uni_indicator_pane_stacon_g1

0x9169,	// (0x0001216e) uni_indicator_pane_stacon_g2

0x9173,	// (0x00012178) uni_indicator_pane_stacon_g3

0x917d,	// (0x00012182) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x000186ec) uni_indicator_pane_stacon_g

0x6613,	// (0x0000f618) control_top_pane_stacon_g1

0x661b,	// (0x0000f620) control_top_pane_stacon_t1_ParamLimits

0x661b,	// (0x0000f620) control_top_pane_stacon_t1

0x6652,	// (0x0000f657) aid_levels_battery_lsc_ParamLimits

0x6652,	// (0x0000f657) aid_levels_battery_lsc

0x666a,	// (0x0000f66f) battery_pane_stacon_g1_ParamLimits

0x666a,	// (0x0000f66f) battery_pane_stacon_g1

0x667d,	// (0x0000f682) battery_pane_stacon_g2_ParamLimits

0x667d,	// (0x0000f682) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x000186f5) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x000186f5) battery_pane_stacon_g

0x66bb,	// (0x0000f6c0) navi_icon_pane_stacon

0x66cf,	// (0x0000f6d4) navi_navi_pane_stacon

0x66bb,	// (0x0000f6c0) navi_text_pane_stacon

0x6613,	// (0x0000f618) control_bottom_pane_stacon_g1

0x66e3,	// (0x0000f6e8) control_bottom_pane_stacon_t1_ParamLimits

0x66e3,	// (0x0000f6e8) control_bottom_pane_stacon_t1

0x91a1,	// (0x000121a6) grid_app_pane_ParamLimits

0x91a1,	// (0x000121a6) grid_app_pane

0x91c3,	// (0x000121c8) scroll_pane_cp15_ParamLimits

0x91c3,	// (0x000121c8) scroll_pane_cp15

0x91d8,	// (0x000121dd) cell_app_pane_ParamLimits

0x91d8,	// (0x000121dd) cell_app_pane

0x9202,	// (0x00012207) cell_app_pane_g1_ParamLimits

0x9202,	// (0x00012207) cell_app_pane_g1

0x9226,	// (0x0001222b) cell_app_pane_g2_ParamLimits

0x9226,	// (0x0001222b) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x000186fa) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x000186fa) cell_app_pane_g

0x9232,	// (0x00012237) cell_app_pane_t1_ParamLimits

0x9232,	// (0x00012237) cell_app_pane_t1

0x9249,	// (0x0001224e) grid_highlight_pane_ParamLimits

0x9249,	// (0x0001224e) grid_highlight_pane

0x8da1,	// (0x00011da6) cell_highlight_pane_g1

0x8da9,	// (0x00011dae) cell_highlight_pane_g2

0x8db1,	// (0x00011db6) cell_highlight_pane_g3

0x8db9,	// (0x00011dbe) cell_highlight_pane_g4

0x8dc1,	// (0x00011dc6) cell_highlight_pane_g5

0x8dc9,	// (0x00011dce) cell_highlight_pane_g6

0x8dd1,	// (0x00011dd6) cell_highlight_pane_g7

0x8dd9,	// (0x00011dde) cell_highlight_pane_g8

0x8de1,	// (0x00011de6) cell_highlight_pane_g9

0x7da2,	// (0x00010da7) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x000186a8) cell_highlight_pane_g

0x925a,	// (0x0001225f) bg_scroll_pane

0x672d,	// (0x0000f732) scroll_handle_pane

0x92a1,	// (0x000122a6) scroll_bg_pane_g1

0x92b6,	// (0x000122bb) scroll_bg_pane_g2

0x92ce,	// (0x000122d3) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x000186ff) scroll_bg_pane_g

0x92e3,	// (0x000122e8) scroll_handle_focus_pane_ParamLimits

0x92e3,	// (0x000122e8) scroll_handle_focus_pane

0x92a1,	// (0x000122a6) scroll_handle_pane_g1

0x92f0,	// (0x000122f5) scroll_handle_pane_g2

0x92ce,	// (0x000122d3) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x00018706) scroll_handle_pane_g

0x8e9a,	// (0x00011e9f) bg_popup_sub_pane_cp21_ParamLimits

0x8e9a,	// (0x00011e9f) bg_popup_sub_pane_cp21

0x9304,	// (0x00012309) popup_fep_japan_predictive_window_t1_ParamLimits

0x9304,	// (0x00012309) popup_fep_japan_predictive_window_t1

0x931b,	// (0x00012320) popup_fep_japan_predictive_window_t2_ParamLimits

0x931b,	// (0x00012320) popup_fep_japan_predictive_window_t2

0x934e,	// (0x00012353) popup_fep_japan_predictive_window_t3_ParamLimits

0x934e,	// (0x00012353) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x0001870d) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x0001870d) popup_fep_japan_predictive_window_t

0x7dac,	// (0x00010db1) bg_popup_sub_pane_cp23

0x9385,	// (0x0001238a) listscroll_japin_cand_pane

0x938d,	// (0x00012392) popup_fep_japan_candidate_window_t1

0x939b,	// (0x000123a0) candidate_pane_ParamLimits

0x939b,	// (0x000123a0) candidate_pane

0x93ad,	// (0x000123b2) scroll_pane_cp30

0x93b5,	// (0x000123ba) list_single_popup_jap_candidate_pane_ParamLimits

0x93b5,	// (0x000123ba) list_single_popup_jap_candidate_pane

0x7dac,	// (0x00010db1) list_highlight_pane_cp30

0x93c9,	// (0x000123ce) list_single_popup_jap_candidate_pane_t1

0x93d8,	// (0x000123dd) level_1_signal

0x93e5,	// (0x000123ea) level_2_signal

0x93f2,	// (0x000123f7) level_3_signal

0x93ff,	// (0x00012404) level_4_signal

0x940c,	// (0x00012411) level_5_signal

0x9419,	// (0x0001241e) level_6_signal

0x9426,	// (0x0001242b) level_7_signal

0x93d8,	// (0x000123dd) level_1_battery

0x93e5,	// (0x000123ea) level_2_battery

0x93f2,	// (0x000123f7) level_3_battery

0x93ff,	// (0x00012404) level_4_battery

0x940c,	// (0x00012411) level_5_battery

0x9419,	// (0x0001241e) level_6_battery

0x9426,	// (0x0001242b) level_7_battery

0x944b,	// (0x00012450) list_menu_pane_ParamLimits

0x944b,	// (0x00012450) list_menu_pane

0x945c,	// (0x00012461) scroll_pane_cp25_ParamLimits

0x945c,	// (0x00012461) scroll_pane_cp25

0x9475,	// (0x0001247a) list_double2_graphic_pane_cp2_ParamLimits

0x9475,	// (0x0001247a) list_double2_graphic_pane_cp2

0x9475,	// (0x0001247a) list_double2_large_graphic_pane_cp2_ParamLimits

0x9475,	// (0x0001247a) list_double2_large_graphic_pane_cp2

0x9475,	// (0x0001247a) list_double2_pane_cp2_ParamLimits

0x9475,	// (0x0001247a) list_double2_pane_cp2

0x9475,	// (0x0001247a) list_double_graphic_pane_cp2_ParamLimits

0x9475,	// (0x0001247a) list_double_graphic_pane_cp2

0x9475,	// (0x0001247a) list_double_large_graphic_pane_cp2_ParamLimits

0x9475,	// (0x0001247a) list_double_large_graphic_pane_cp2

0x9475,	// (0x0001247a) list_double_number_pane_cp2_ParamLimits

0x9475,	// (0x0001247a) list_double_number_pane_cp2

0x9475,	// (0x0001247a) list_double_pane_cp2_ParamLimits

0x9475,	// (0x0001247a) list_double_pane_cp2

0x9497,	// (0x0001249c) list_single_2graphic_pane_cp2_ParamLimits

0x9497,	// (0x0001249c) list_single_2graphic_pane_cp2

0x9497,	// (0x0001249c) list_single_graphic_heading_pane_cp2_ParamLimits

0x9497,	// (0x0001249c) list_single_graphic_heading_pane_cp2

0x9497,	// (0x0001249c) list_single_graphic_pane_cp2_ParamLimits

0x9497,	// (0x0001249c) list_single_graphic_pane_cp2

0x9497,	// (0x0001249c) list_single_heading_pane_cp2_ParamLimits

0x9497,	// (0x0001249c) list_single_heading_pane_cp2

0x94ae,	// (0x000124b3) list_single_large_graphic_pane_cp2_ParamLimits

0x94ae,	// (0x000124b3) list_single_large_graphic_pane_cp2

0x9497,	// (0x0001249c) list_single_number_heading_pane_cp2_ParamLimits

0x9497,	// (0x0001249c) list_single_number_heading_pane_cp2

0x9497,	// (0x0001249c) list_single_number_pane_cp2_ParamLimits

0x9497,	// (0x0001249c) list_single_number_pane_cp2

0x9497,	// (0x0001249c) list_single_pane_cp2_ParamLimits

0x9497,	// (0x0001249c) list_single_pane_cp2

0x9504,	// (0x00012509) bg_popup_sub_pane_cp22

0x67df,	// (0x0000f7e4) popup_side_volume_key_window_g1

0x6809,	// (0x0000f80e) popup_side_volume_key_window_t1

0x6825,	// (0x0000f82a) volume_small_pane_cp1

0x8121,	// (0x00011126) bg_popup_sub_pane_cp24_ParamLimits

0x8121,	// (0x00011126) bg_popup_sub_pane_cp24

0x951a,	// (0x0001251f) fep_china_uni_candidate_pane_ParamLimits

0x951a,	// (0x0001251f) fep_china_uni_candidate_pane

0x952e,	// (0x00012533) fep_china_uni_entry_pane

0x953e,	// (0x00012543) popup_fep_china_uni_window_g1

0x955a,	// (0x0001255f) fep_china_uni_entry_pane_g1

0x9562,	// (0x00012567) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0001873a) fep_china_uni_entry_pane_g

0x956a,	// (0x0001256f) fep_entry_item_pane

0x9574,	// (0x00012579) fep_candidate_item_pane

0x957c,	// (0x00012581) fep_china_uni_candidate_pane_g1

0x9584,	// (0x00012589) fep_china_uni_candidate_pane_g2

0x958c,	// (0x00012591) fep_china_uni_candidate_pane_g3

0x9594,	// (0x00012599) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0001873f) fep_china_uni_candidate_pane_g

0x7da2,	// (0x00010da7) fep_entry_item_pane_g1

0x959c,	// (0x000125a1) fep_entry_item_pane_t1_ParamLimits

0x959c,	// (0x000125a1) fep_entry_item_pane_t1

0x95b2,	// (0x000125b7) fep_candidate_item_pane_t1_ParamLimits

0x95b2,	// (0x000125b7) fep_candidate_item_pane_t1

0x95c7,	// (0x000125cc) fep_candidate_item_pane_t2_ParamLimits

0x95c7,	// (0x000125cc) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x00018748) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x00018748) fep_candidate_item_pane_t

0x7e8c,	// (0x00010e91) list_highlight_pane_cp31_ParamLimits

0x7e8c,	// (0x00010e91) list_highlight_pane_cp31

0x95d9,	// (0x000125de) level_1_signal_lsc

0x95e2,	// (0x000125e7) level_2_signal_lsc

0x95eb,	// (0x000125f0) level_3_signal_lsc

0x95f4,	// (0x000125f9) level_4_signal_lsc

0x95fd,	// (0x00012602) level_5_signal_lsc

0x9606,	// (0x0001260b) level_6_signal_lsc

0x960f,	// (0x00012614) level_7_signal_lsc

0x960f,	// (0x00012614) level_1_battery_lsc

0x9618,	// (0x0001261d) level_2_battery_lsc

0x9621,	// (0x00012626) level_3_battery_lsc

0x962a,	// (0x0001262f) level_4_battery_lsc

0x9633,	// (0x00012638) level_5_battery_lsc

0x963c,	// (0x00012641) level_6_battery_lsc

0x95d9,	// (0x000125de) level_7_battery_lsc

0x9645,	// (0x0001264a) scroll_handle_focus_pane_g1

0x964e,	// (0x00012653) scroll_handle_focus_pane_g2

0x9657,	// (0x0001265c) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0001874d) scroll_handle_focus_pane_g

0x9660,	// (0x00012665) list_single_2graphic_pane_g1_ParamLimits

0x9660,	// (0x00012665) list_single_2graphic_pane_g1

0x8732,	// (0x00011737) list_single_2graphic_pane_g2_ParamLimits

0x8732,	// (0x00011737) list_single_2graphic_pane_g2

0x86b8,	// (0x000116bd) list_single_2graphic_pane_g3_ParamLimits

0x86b8,	// (0x000116bd) list_single_2graphic_pane_g3

0x966c,	// (0x00012671) list_single_2graphic_pane_g4_ParamLimits

0x966c,	// (0x00012671) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x00018754) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x00018754) list_single_2graphic_pane_g

0x967d,	// (0x00012682) list_single_2graphic_pane_t1_ParamLimits

0x967d,	// (0x00012682) list_single_2graphic_pane_t1

0x96ab,	// (0x000126b0) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x96ab,	// (0x000126b0) list_double2_graphic_large_graphic_pane_g1

0x87d7,	// (0x000117dc) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x87d7,	// (0x000117dc) list_double2_graphic_large_graphic_pane_g2

0x87e8,	// (0x000117ed) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x87e8,	// (0x000117ed) list_double2_graphic_large_graphic_pane_g3

0x96bb,	// (0x000126c0) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x96bb,	// (0x000126c0) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0001875d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0001875d) list_double2_graphic_large_graphic_pane_g

0x96c7,	// (0x000126cc) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x96c7,	// (0x000126cc) list_double2_graphic_large_graphic_pane_t1

0x96dd,	// (0x000126e2) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x96dd,	// (0x000126e2) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x00018766) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x00018766) list_double2_graphic_large_graphic_pane_t

0x9831,	// (0x00012836) popup_fast_swap_window_ParamLimits

0x9831,	// (0x00012836) popup_fast_swap_window

0x984d,	// (0x00012852) popup_side_volume_key_window

0x9867,	// (0x0001286c) stacon_top_pane

0x9871,	// (0x00012876) status_pane_ParamLimits

0x9871,	// (0x00012876) status_pane

0x9867,	// (0x0001286c) status_small_pane

0x7dac,	// (0x00010db1) control_pane

0x7dac,	// (0x00010db1) stacon_bottom_pane

0x8b84,	// (0x00011b89) scroll_pane_cp121

0x8b7b,	// (0x00011b80) set_content_pane

0x96ef,	// (0x000126f4) bg_active_tab_pane_g1_cp1

0x96f8,	// (0x000126fd) bg_active_tab_pane_g2_cp1

0x9701,	// (0x00012706) bg_active_tab_pane_g3_cp1

0x96ef,	// (0x000126f4) bg_passive_tab_pane_g1_cp1

0x96f8,	// (0x000126fd) bg_passive_tab_pane_g2_cp1

0x9701,	// (0x00012706) bg_passive_tab_pane_g3_cp1

0x970a,	// (0x0001270f) bg_active_tab_pane_g1_cp2

0x96f8,	// (0x000126fd) bg_active_tab_pane_g2_cp2

0x9713,	// (0x00012718) bg_active_tab_pane_g3_cp2

0x970a,	// (0x0001270f) bg_passive_tab_pane_g1_cp2

0x96f8,	// (0x000126fd) bg_passive_tab_pane_g2_cp2

0x9713,	// (0x00012718) bg_passive_tab_pane_g3_cp2

0x971c,	// (0x00012721) bg_active_tab_pane_g1_cp3

0x96f8,	// (0x000126fd) bg_active_tab_pane_g2_cp3

0x9725,	// (0x0001272a) bg_active_tab_pane_g3_cp3

0x971c,	// (0x00012721) bg_passive_tab_pane_g1_cp3

0x96f8,	// (0x000126fd) bg_passive_tab_pane_g2_cp3

0x9725,	// (0x0001272a) bg_passive_tab_pane_g3_cp3

0x972e,	// (0x00012733) bg_active_tab_pane_g1_cp4

0x96f8,	// (0x000126fd) bg_active_tab_pane_g2_cp4

0x9739,	// (0x0001273e) bg_active_tab_pane_g3_cp4

0x972e,	// (0x00012733) bg_passive_tab_pane_g1_cp4

0x96f8,	// (0x000126fd) bg_passive_tab_pane_g2_cp4

0x9739,	// (0x0001273e) bg_passive_tab_pane_g3_cp4

0x9782,	// (0x00012787) bg_active_tab_pane_g1_cp5

0x96f8,	// (0x000126fd) bg_active_tab_pane_g2_cp5

0x978b,	// (0x00012790) bg_active_tab_pane_g3_cp5

0x9782,	// (0x00012787) bg_passive_tab_pane_g1_cp5

0x96f8,	// (0x000126fd) bg_passive_tab_pane_g2_cp5

0x978b,	// (0x00012790) bg_passive_tab_pane_g3_cp5

0x9794,	// (0x00012799) list_set_graphic_pane_ParamLimits

0x9794,	// (0x00012799) list_set_graphic_pane

0x7dac,	// (0x00010db1) bg_set_opt_pane_cp4

0x97b2,	// (0x000127b7) list_set_graphic_pane_g1_ParamLimits

0x97b2,	// (0x000127b7) list_set_graphic_pane_g1

0x97be,	// (0x000127c3) list_set_graphic_pane_g2_ParamLimits

0x97be,	// (0x000127c3) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0001876b) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0001876b) list_set_graphic_pane_g

0x0009,

0xfade,	// (0x00018ae3) volume_small_pane_cp_g

0x97e2,	// (0x000127e7) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x97e2,	// (0x000127e7) list_double2_large_graphic_pane_g1_cp2

0x97f0,	// (0x000127f5) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x97f0,	// (0x000127f5) list_double2_large_graphic_pane_g2_cp2

0x9801,	// (0x00012806) list_double2_large_graphic_pane_g3_cp2

0x9809,	// (0x0001280e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x9809,	// (0x0001280e) list_double2_large_graphic_pane_t1_cp2

0x981f,	// (0x00012824) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x981f,	// (0x00012824) list_double2_large_graphic_pane_t2_cp2

0xbaa8,	// (0x00014aad) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xbaa8,	// (0x00014aad) list_double_large_graphic_pane_g1_cp2

0xbabb,	// (0x00014ac0) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xbabb,	// (0x00014ac0) list_double_large_graphic_pane_g2_cp2

0x998f,	// (0x00012994) list_double_large_graphic_pane_g3_cp2

0xbacc,	// (0x00014ad1) list_double_large_graphic_pane_g4_cp

0xbad4,	// (0x00014ad9) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xbad4,	// (0x00014ad9) list_double_large_graphic_pane_t1_cp2

0xbaeb,	// (0x00014af0) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xbaeb,	// (0x00014af0) list_double_large_graphic_pane_t2_cp2

0x987f,	// (0x00012884) list_double2_graphic_pane_g1_cp2_ParamLimits

0x987f,	// (0x00012884) list_double2_graphic_pane_g1_cp2

0x988d,	// (0x00012892) list_double2_graphic_pane_g2_cp2_ParamLimits

0x988d,	// (0x00012892) list_double2_graphic_pane_g2_cp2

0x989e,	// (0x000128a3) list_double2_graphic_pane_g3_cp2

0x98a8,	// (0x000128ad) list_double2_graphic_pane_t1_cp2_ParamLimits

0x98a8,	// (0x000128ad) list_double2_graphic_pane_t1_cp2

0x98be,	// (0x000128c3) list_double2_graphic_pane_t2_cp2_ParamLimits

0x98be,	// (0x000128c3) list_double2_graphic_pane_t2_cp2

0x98d0,	// (0x000128d5) list_single_number_heading_pane_g1_cp2_ParamLimits

0x98d0,	// (0x000128d5) list_single_number_heading_pane_g1_cp2

0x98dc,	// (0x000128e1) list_single_number_heading_pane_g2_cp2

0x98e4,	// (0x000128e9) list_single_number_heading_pane_t1_cp2_ParamLimits

0x98e4,	// (0x000128e9) list_single_number_heading_pane_t1_cp2

0x98fa,	// (0x000128ff) list_single_number_heading_pane_t2_cp2_ParamLimits

0x98fa,	// (0x000128ff) list_single_number_heading_pane_t2_cp2

0x990e,	// (0x00012913) list_single_number_heading_pane_t3_cp2_ParamLimits

0x990e,	// (0x00012913) list_single_number_heading_pane_t3_cp2

0x98d0,	// (0x000128d5) list_single_heading_pane_g1_cp2_ParamLimits

0x98d0,	// (0x000128d5) list_single_heading_pane_g1_cp2

0x98dc,	// (0x000128e1) list_single_heading_pane_g2_cp2

0x98e4,	// (0x000128e9) list_single_heading_pane_t1_cp2_ParamLimits

0x98e4,	// (0x000128e9) list_single_heading_pane_t1_cp2

0xb8b0,	// (0x000148b5) list_single_heading_pane_t2_cp2_ParamLimits

0xb8b0,	// (0x000148b5) list_single_heading_pane_t2_cp2

0xb7f2,	// (0x000147f7) list_double_graphic_pane_g1_cp2_ParamLimits

0xb7f2,	// (0x000147f7) list_double_graphic_pane_g1_cp2

0xb7fe,	// (0x00014803) list_double_graphic_pane_g2_cp2_ParamLimits

0xb7fe,	// (0x00014803) list_double_graphic_pane_g2_cp2

0xb80d,	// (0x00014812) list_double_graphic_pane_g3_cp2

0xb815,	// (0x0001481a) list_double_graphic_pane_t1_cp2_ParamLimits

0xb815,	// (0x0001481a) list_double_graphic_pane_t1_cp2

0xb82b,	// (0x00014830) list_double_graphic_pane_t2_cp2_ParamLimits

0xb82b,	// (0x00014830) list_double_graphic_pane_t2_cp2

0x9983,	// (0x00012988) list_double_number_pane_g1_cp2_ParamLimits

0x9983,	// (0x00012988) list_double_number_pane_g1_cp2

0x998f,	// (0x00012994) list_double_number_pane_g2_cp2

0xb7b6,	// (0x000147bb) list_double_number_pane_t1_cp2_ParamLimits

0xb7b6,	// (0x000147bb) list_double_number_pane_t1_cp2

0xb7ca,	// (0x000147cf) list_double_number_pane_t2_cp2_ParamLimits

0xb7ca,	// (0x000147cf) list_double_number_pane_t2_cp2

0xb7e0,	// (0x000147e5) list_double_number_pane_t3_cp2_ParamLimits

0xb7e0,	// (0x000147e5) list_double_number_pane_t3_cp2

0xb69f,	// (0x000146a4) list_single_graphic_pane_g1_cp2_ParamLimits

0xb69f,	// (0x000146a4) list_single_graphic_pane_g1_cp2

0x99e7,	// (0x000129ec) list_single_graphic_pane_g2_cp2_ParamLimits

0x99e7,	// (0x000129ec) list_single_graphic_pane_g2_cp2

0x99f3,	// (0x000129f8) list_single_graphic_pane_g3_cp2

0xb675,	// (0x0001467a) list_single_graphic_pane_t1_cp2_ParamLimits

0xb675,	// (0x0001467a) list_single_graphic_pane_t1_cp2

0x99e7,	// (0x000129ec) list_single_number_pane_g1_cp2_ParamLimits

0x99e7,	// (0x000129ec) list_single_number_pane_g1_cp2

0x99f3,	// (0x000129f8) list_single_number_pane_g2_cp2

0xb675,	// (0x0001467a) list_single_number_pane_t1_cp2_ParamLimits

0xb675,	// (0x0001467a) list_single_number_pane_t1_cp2

0xb68b,	// (0x00014690) list_single_number_pane_t2_cp2_ParamLimits

0xb68b,	// (0x00014690) list_single_number_pane_t2_cp2

0x97f0,	// (0x000127f5) list_double2_pane_g1_cp2_ParamLimits

0x97f0,	// (0x000127f5) list_double2_pane_g1_cp2

0x9801,	// (0x00012806) list_double2_pane_g2_cp2

0x995b,	// (0x00012960) list_double2_pane_t1_cp2_ParamLimits

0x995b,	// (0x00012960) list_double2_pane_t1_cp2

0x9971,	// (0x00012976) list_double2_pane_t2_cp2_ParamLimits

0x9971,	// (0x00012976) list_double2_pane_t2_cp2

0x9983,	// (0x00012988) list_double_pane_g1_cp2_ParamLimits

0x9983,	// (0x00012988) list_double_pane_g1_cp2

0x998f,	// (0x00012994) list_double_pane_g2_cp2

0x9997,	// (0x0001299c) list_double_pane_t1_cp2_ParamLimits

0x9997,	// (0x0001299c) list_double_pane_t1_cp2

0x99ad,	// (0x000129b2) list_double_pane_t2_cp2_ParamLimits

0x99ad,	// (0x000129b2) list_double_pane_t2_cp2

0x99d7,	// (0x000129dc) list_single_pane_cp2_g3

0x99e7,	// (0x000129ec) list_single_pane_g1_cp2_ParamLimits

0x99e7,	// (0x000129ec) list_single_pane_g1_cp2

0x99f3,	// (0x000129f8) list_single_pane_g2_cp2

0x99fb,	// (0x00012a00) list_single_pane_t1_cp2_ParamLimits

0x99fb,	// (0x00012a00) list_single_pane_t1_cp2

0x9a13,	// (0x00012a18) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9a13,	// (0x00012a18) list_single_large_graphic_pane_g1_cp2

0x9a21,	// (0x00012a26) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9a21,	// (0x00012a26) list_single_large_graphic_pane_g2_cp2

0x9a2d,	// (0x00012a32) list_single_large_graphic_pane_g3_cp2

0x9a35,	// (0x00012a3a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9a35,	// (0x00012a3a) list_single_large_graphic_pane_g4_cp1

0x9a4f,	// (0x00012a54) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9a4f,	// (0x00012a54) list_single_large_graphic_pane_t1_cp2

0xb63f,	// (0x00014644) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xb63f,	// (0x00014644) list_single_graphic_heading_pane_g1_cp2

0xb60c,	// (0x00014611) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb60c,	// (0x00014611) list_single_graphic_heading_pane_g4_cp2

0x99f3,	// (0x000129f8) list_single_graphic_heading_pane_g5_cp2

0xb64b,	// (0x00014650) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xb64b,	// (0x00014650) list_single_graphic_heading_pane_t1_cp2

0xb661,	// (0x00014666) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb661,	// (0x00014666) list_single_graphic_heading_pane_t2_cp2

0xb600,	// (0x00014605) list_single_2graphic_pane_g1_cp2_ParamLimits

0xb600,	// (0x00014605) list_single_2graphic_pane_g1_cp2

0xb60c,	// (0x00014611) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb60c,	// (0x00014611) list_single_2graphic_pane_g2_cp2

0x99f3,	// (0x000129f8) list_single_2graphic_pane_g3_cp2

0xb61d,	// (0x00014622) list_single_2graphic_pane_g4_cp2_ParamLimits

0xb61d,	// (0x00014622) list_single_2graphic_pane_g4_cp2

0xb629,	// (0x0001462e) list_single_2graphic_pane_t1_cp2_ParamLimits

0xb629,	// (0x0001462e) list_single_2graphic_pane_t1_cp2

0x7da2,	// (0x00010da7) list_highlight_pane_g10_cp1

0xb1e8,	// (0x000141ed) list_highlight_pane_g1_cp1

0xb1f0,	// (0x000141f5) list_highlight_pane_g2_cp1

0xb1f8,	// (0x000141fd) list_highlight_pane_g3_cp1

0xb200,	// (0x00014205) list_highlight_pane_g4_cp1

0xb208,	// (0x0001420d) list_highlight_pane_g5_cp1

0xb210,	// (0x00014215) list_highlight_pane_g6_cp1

0xb218,	// (0x0001421d) list_highlight_pane_g7_cp1

0xb220,	// (0x00014225) list_highlight_pane_g8_cp1

0xb228,	// (0x0001422d) list_highlight_pane_g9_cp1

0xb100,	// (0x00014105) form_field_slider_pane_t3

0xb10e,	// (0x00014113) form_field_slider_pane_t4

0xb11c,	// (0x00014121) slider_form_pane_ParamLimits

0xb11c,	// (0x00014121) slider_form_pane

0x7dac,	// (0x00010db1) control_abbreviations

0x7dac,	// (0x00010db1) control_conventions

0x7dac,	// (0x00010db1) control_definitions

0x7dac,	// (0x00010db1) format_table_attribute

0xb8fc,	// (0x00014901) bg_popup_preview_window_pane_g9

0x7dac,	// (0x00010db1) format_table_data2

0x7dac,	// (0x00010db1) format_table_data3

0x7dac,	// (0x00010db1) format_table_data_example

0x0008,

0x7dac,	// (0x00010db1) intro_purpose

0xf8fb,	// (0x00018900) bg_popup_preview_window_pane_g

0x7dac,	// (0x00010db1) texts_category

0x7dac,	// (0x00010db1) texts_graphics

0x9a65,	// (0x00012a6a) text_digital

0x9a74,	// (0x00012a79) text_primary

0x9a83,	// (0x00012a88) text_primary_small

0x9a92,	// (0x00012a97) text_secondary

0x9aa1,	// (0x00012aa6) text_title

0xc134,	// (0x00015139) bg_passive_tab_pane_g1_cp3_srt

0x96f8,	// (0x000126fd) bg_passive_tab_pane_g2_cp3_srt

0xc13d,	// (0x00015142) bg_passive_tab_pane_g3_cp3_srt

0x7e8c,	// (0x00010e91) bg_active_tab_pane_cp3_srt_ParamLimits

0x7e8c,	// (0x00010e91) bg_active_tab_pane_cp3_srt

0xc146,	// (0x0001514b) tabs_4_active_pane_srt_g1

0xc14e,	// (0x00015153) tabs_4_active_pane_srt_t1_ParamLimits

0xc14e,	// (0x00015153) tabs_4_active_pane_srt_t1

0xc134,	// (0x00015139) bg_active_tab_pane_g1_cp3_copy1

0x96f8,	// (0x000126fd) bg_active_tab_pane_g2_cp3_copy1

0xc13d,	// (0x00015142) bg_active_tab_pane_g3_cp3_copy1

0x7e8c,	// (0x00010e91) tabs_2_long_active_pane_srt_ParamLimits

0x7e8c,	// (0x00010e91) tabs_2_long_active_pane_srt

0x7e8c,	// (0x00010e91) tabs_2_long_passive_pane_srt_ParamLimits

0x7e8c,	// (0x00010e91) tabs_2_long_passive_pane_srt

0x8fcb,	// (0x00011fd0) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8fcb,	// (0x00011fd0) bg_passive_tab_pane_cp4_srt

0xbd69,	// (0x00014d6e) bg_passive_tab_pane_g1_cp4_srt

0x96f8,	// (0x000126fd) bg_passive_tab_pane_g2_cp4_srt

0xbd72,	// (0x00014d77) bg_passive_tab_pane_g3_cp4_srt

0x8faa,	// (0x00011faf) bg_active_tab_pane_cp4_srt_ParamLimits

0x8faa,	// (0x00011faf) bg_active_tab_pane_cp4_srt

0xbd7b,	// (0x00014d80) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbd7b,	// (0x00014d80) tabs_2_long_active_pane_srt_t1

0xbd69,	// (0x00014d6e) bg_active_tab_pane_g1_cp4_srt

0x96f8,	// (0x000126fd) bg_active_tab_pane_g2_cp4_srt

0xbd72,	// (0x00014d77) bg_active_tab_pane_g3_cp4_srt

0x8121,	// (0x00011126) tabs_3_long_active_pane_srt_ParamLimits

0x8121,	// (0x00011126) tabs_3_long_active_pane_srt

0x8121,	// (0x00011126) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8121,	// (0x00011126) tabs_3_long_passive_pane_cp_srt

0x8121,	// (0x00011126) tabs_3_long_passive_pane_srt_ParamLimits

0x8121,	// (0x00011126) tabs_3_long_passive_pane_srt

0x8fcb,	// (0x00011fd0) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8fcb,	// (0x00011fd0) bg_passive_tab_pane_cp5_srt

0x9782,	// (0x00012787) bg_passive_tab_pane_g1_cp5_srt

0x96f8,	// (0x000126fd) bg_passive_tab_pane_g2_cp5_srt

0x978b,	// (0x00012790) bg_passive_tab_pane_g3_cp5_srt

0x8faa,	// (0x00011faf) bg_active_tab_pane_cp5_srt_ParamLimits

0x8faa,	// (0x00011faf) bg_active_tab_pane_cp5_srt

0xbd57,	// (0x00014d5c) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbd57,	// (0x00014d5c) tabs_3_long_active_pane_srt_t1

0x9782,	// (0x00012787) bg_active_tab_pane_g1_cp5_srt

0x96f8,	// (0x000126fd) bg_active_tab_pane_g2_cp5_srt

0x978b,	// (0x00012790) bg_active_tab_pane_g3_cp5_srt

0xbd49,	// (0x00014d4e) navi_text_pane_srt_t1

0xbd41,	// (0x00014d46) navi_icon_pane_srt_g1

0x9c70,	// (0x00012c75) midp_editing_number_pane_srt

0x9ab0,	// (0x00012ab5) midp_ticker_pane_srt

0x9c78,	// (0x00012c7d) midp_ticker_pane_srt_g1

0x9c80,	// (0x00012c85) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0001878a) midp_ticker_pane_srt_g

0x9c88,	// (0x00012c8d) midp_ticker_pane_srt_t1

0xbd32,	// (0x00014d37) midp_editing_number_pane_t1_copy1

0x9ab8,	// (0x00012abd) listscroll_midp_pane

0x9ab8,	// (0x00012abd) midp_form_pane

0x9b28,	// (0x00012b2d) midp_info_popup_window_ParamLimits

0x9b28,	// (0x00012b2d) midp_info_popup_window

0x8e9a,	// (0x00011e9f) bg_popup_sub_pane_cp50_ParamLimits

0x8e9a,	// (0x00011e9f) bg_popup_sub_pane_cp50

0xae1d,	// (0x00013e22) listscroll_midp_info_pane_ParamLimits

0xae1d,	// (0x00013e22) listscroll_midp_info_pane

0xae05,	// (0x00013e0a) listscroll_form_midp_pane_ParamLimits

0xae05,	// (0x00013e0a) listscroll_form_midp_pane

0xae11,	// (0x00013e16) scroll_bar_cp050

0xade5,	// (0x00013dea) list_midp_pane

0xcd17,	// (0x00015d1c) signal_pane_g2_cp

0xad1f,	// (0x00013d24) listscroll_midp_info_pane_t1_ParamLimits

0xad1f,	// (0x00013d24) listscroll_midp_info_pane_t1

0xad37,	// (0x00013d3c) listscroll_midp_info_pane_t2_ParamLimits

0xad37,	// (0x00013d3c) listscroll_midp_info_pane_t2

0xad75,	// (0x00013d7a) listscroll_midp_info_pane_t3_ParamLimits

0xad75,	// (0x00013d7a) listscroll_midp_info_pane_t3

0xadaf,	// (0x00013db4) listscroll_midp_info_pane_t4_ParamLimits

0xadaf,	// (0x00013db4) listscroll_midp_info_pane_t4

0x0003,

0xf836,	// (0x0001883b) listscroll_midp_info_pane_t_ParamLimits

0xf836,	// (0x0001883b) listscroll_midp_info_pane_t

0x8f58,	// (0x00011f5d) scroll_pane_cp21

0xacc3,	// (0x00013cc8) form_midp_field_choice_group_pane

0xaccc,	// (0x00013cd1) form_midp_field_text_pane

0xad05,	// (0x00013d0a) form_midp_field_time_pane

0xad0d,	// (0x00013d12) form_midp_gauge_slider_pane

0xad16,	// (0x00013d1b) form_midp_gauge_wait_pane

0x7dac,	// (0x00010db1) form_midp_image_pane

0xac87,	// (0x00013c8c) list_single_midp_pane_ParamLimits

0xac87,	// (0x00013c8c) list_single_midp_pane

0xac37,	// (0x00013c3c) form_midp_field_text_pane_t1

0xaa02,	// (0x00013a07) input_focus_pane_cp050

0xac76,	// (0x00013c7b) list_midp_form_text_pane

0xac06,	// (0x00013c0b) form_midp_field_choice_group_pane_t1

0xac14,	// (0x00013c19) input_focus_pane_cp051

0xac28,	// (0x00013c2d) list_midp_choice_pane

0x7dac,	// (0x00010db1) status_idle_pane

0xabea,	// (0x00013bef) form_midp_field_time_pane_t1

0x7da2,	// (0x00010da7) wait_anim_pane_g2_copy1

0xabf8,	// (0x00013bfd) form_midp_field_time_pane_t2

0x0001,

0x9bd8,	// (0x00012bdd) aid_navinavi_width_2_pane

0xf831,	// (0x00018836) form_midp_field_time_pane_t

0x7dac,	// (0x00010db1) input_focus_pane_cp052

0x7dac,	// (0x00010db1) bg_input_focus_pane_cp040

0xabaa,	// (0x00013baf) form_midp_gauge_slider_pane_t1

0xabb8,	// (0x00013bbd) form_midp_gauge_slider_pane_t2

0xabc6,	// (0x00013bcb) form_midp_gauge_slider_pane_t3

0xabd4,	// (0x00013bd9) form_midp_gauge_slider_pane_t4

0x0003,

0xf828,	// (0x0001882d) form_midp_gauge_slider_pane_t

0xabe2,	// (0x00013be7) form_midp_slider_pane

0x7e8c,	// (0x00010e91) bg_input_focus_pane_cp041_ParamLimits

0x7e8c,	// (0x00010e91) bg_input_focus_pane_cp041

0xab77,	// (0x00013b7c) form_midp_gauge_wait_pane_t1_ParamLimits

0xab77,	// (0x00013b7c) form_midp_gauge_wait_pane_t1

0xab89,	// (0x00013b8e) form_midp_gauge_wait_pane_t2_ParamLimits

0xab89,	// (0x00013b8e) form_midp_gauge_wait_pane_t2

0x0001,

0xf823,	// (0x00018828) form_midp_gauge_wait_pane_t_ParamLimits

0xf823,	// (0x00018828) form_midp_gauge_wait_pane_t

0xab9b,	// (0x00013ba0) form_midp_wait_pane_ParamLimits

0xab9b,	// (0x00013ba0) form_midp_wait_pane

0xab41,	// (0x00013b46) form_midp_image_pane_g1

0xab4a,	// (0x00013b4f) form_midp_image_pane_t1

0xab59,	// (0x00013b5e) form_midp_image_pane_t2

0xab68,	// (0x00013b6d) form_midp_image_pane_t3

0x0002,

0xf81c,	// (0x00018821) form_midp_image_pane_t

0xab29,	// (0x00013b2e) list_single_midp_pane_g1

0xab32,	// (0x00013b37) list_single_midp_pane_t1

0xaaf9,	// (0x00013afe) list_midp_form_item_pane_ParamLimits

0xaaf9,	// (0x00013afe) list_midp_form_item_pane

0x9b80,	// (0x00012b85) list_midp_form_item_pane_t1

0x9b8f,	// (0x00012b94) midp_ticker_pane_g1

0x9b9b,	// (0x00012ba0) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x00018770) midp_ticker_pane_g

0x9ba7,	// (0x00012bac) midp_ticker_pane_t1

0xbfa8,	// (0x00014fad) midp_editing_number_pane_t1

0xbf86,	// (0x00014f8b) midp_editing_number_pane

0xbf95,	// (0x00014f9a) midp_ticker_pane

0xbcfa,	// (0x00014cff) ai_message_heading_pane

0x7dac,	// (0x00010db1) bg_popup_window_pane_cp14

0xbd02,	// (0x00014d07) listscroll_ai_message_pane

0xbc84,	// (0x00014c89) ai_message_heading_pane_g1_ParamLimits

0xbc84,	// (0x00014c89) ai_message_heading_pane_g1

0xbc90,	// (0x00014c95) ai_message_heading_pane_g2_ParamLimits

0xbc90,	// (0x00014c95) ai_message_heading_pane_g2

0xbc9c,	// (0x00014ca1) ai_message_heading_pane_g3_ParamLimits

0xbc9c,	// (0x00014ca1) ai_message_heading_pane_g3

0xbca8,	// (0x00014cad) ai_message_heading_pane_g4_ParamLimits

0xbca8,	// (0x00014cad) ai_message_heading_pane_g4

0x0003,

0xf95d,	// (0x00018962) ai_message_heading_pane_g_ParamLimits

0xf95d,	// (0x00018962) ai_message_heading_pane_g

0xbcb4,	// (0x00014cb9) ai_message_heading_pane_t1_ParamLimits

0xbcb4,	// (0x00014cb9) ai_message_heading_pane_t1

0xbcce,	// (0x00014cd3) ai_message_heading_pane_t2_ParamLimits

0xbcce,	// (0x00014cd3) ai_message_heading_pane_t2

0x0001,

0xf966,	// (0x0001896b) ai_message_heading_pane_t_ParamLimits

0xf966,	// (0x0001896b) ai_message_heading_pane_t

0xbce0,	// (0x00014ce5) bg_popup_heading_pane_cp1_ParamLimits

0xbce0,	// (0x00014ce5) bg_popup_heading_pane_cp1

0xbc72,	// (0x00014c77) list_ai_message_pane_ParamLimits

0xbc72,	// (0x00014c77) list_ai_message_pane

0x8f58,	// (0x00011f5d) scroll_pane_cp10

0xbc0e,	// (0x00014c13) list_ai_message_pane_g1

0xbc16,	// (0x00014c1b) list_ai_message_pane_g2

0x0001,

0xf93a,	// (0x0001893f) list_ai_message_pane_g

0xbc1e,	// (0x00014c23) list_ai_message_pane_t1_ParamLimits

0xbc1e,	// (0x00014c23) list_ai_message_pane_t1

0xbc33,	// (0x00014c38) list_ai_message_pane_t2_ParamLimits

0xbc33,	// (0x00014c38) list_ai_message_pane_t2

0xbc48,	// (0x00014c4d) list_ai_message_pane_t3_ParamLimits

0xbc48,	// (0x00014c4d) list_ai_message_pane_t3

0xbc5d,	// (0x00014c62) list_ai_message_pane_t4_ParamLimits

0xbc5d,	// (0x00014c62) list_ai_message_pane_t4

0x0003,

0xf93f,	// (0x00018944) list_ai_message_pane_t_ParamLimits

0xf93f,	// (0x00018944) list_ai_message_pane_t

0xbbf8,	// (0x00014bfd) cell_ai_soft_ind_pane_ParamLimits

0xbbf8,	// (0x00014bfd) cell_ai_soft_ind_pane

0x9bb9,	// (0x00012bbe) cell_ai_soft_ind_pane_g1_ParamLimits

0x9bb9,	// (0x00012bbe) cell_ai_soft_ind_pane_g1

0x7dac,	// (0x00010db1) grid_highlight_cp1

0x9bc6,	// (0x00012bcb) text_secondary_cp56_ParamLimits

0x9bc6,	// (0x00012bcb) text_secondary_cp56

0xbbcd,	// (0x00014bd2) example_general_pane_ParamLimits

0xbbcd,	// (0x00014bd2) example_general_pane

0xbbd9,	// (0x00014bde) example_parent_pane_g1_ParamLimits

0xbbd9,	// (0x00014bde) example_parent_pane_g1

0xbbe5,	// (0x00014bea) example_parent_pane_t1_ParamLimits

0xbbe5,	// (0x00014bea) example_parent_pane_t1

0xa1c3,	// (0x000131c8) popup_preview_text_window_ParamLimits

0xa1c3,	// (0x000131c8) popup_preview_text_window

0x99df,	// (0x000129e4) list_single_pane_cp2_g4

0x81cb,	// (0x000111d0) bg_popup_preview_window_pane_ParamLimits

0x81cb,	// (0x000111d0) bg_popup_preview_window_pane

0xb904,	// (0x00014909) popup_preview_text_window_t1_ParamLimits

0xb904,	// (0x00014909) popup_preview_text_window_t1

0xb922,	// (0x00014927) popup_preview_text_window_t2_ParamLimits

0xb922,	// (0x00014927) popup_preview_text_window_t2

0xb96b,	// (0x00014970) popup_preview_text_window_t3_ParamLimits

0xb96b,	// (0x00014970) popup_preview_text_window_t3

0xb9b0,	// (0x000149b5) popup_preview_text_window_t4_ParamLimits

0xb9b0,	// (0x000149b5) popup_preview_text_window_t4

0x0004,

0xf90e,	// (0x00018913) popup_preview_text_window_t_ParamLimits

0xf90e,	// (0x00018913) popup_preview_text_window_t

0xba2e,	// (0x00014a33) scroll_pane_cp11

0xa8e8,	// (0x000138ed) bg_popup_preview_window_pane_g1

0xb8c4,	// (0x000148c9) bg_popup_preview_window_pane_g2

0xb8cc,	// (0x000148d1) bg_popup_preview_window_pane_g3

0xb8d4,	// (0x000148d9) bg_popup_preview_window_pane_g4

0xb8dc,	// (0x000148e1) bg_popup_preview_window_pane_g5

0xb8e4,	// (0x000148e9) bg_popup_preview_window_pane_g6

0xb8ec,	// (0x000148f1) bg_popup_preview_window_pane_g7

0xb8f4,	// (0x000148f9) bg_popup_preview_window_pane_g8

0x6132,	// (0x0000f137) aid_popup_width_pane

0xa1a1,	// (0x000131a6) popup_midp_note_alarm_window_ParamLimits

0xa1a1,	// (0x000131a6) popup_midp_note_alarm_window

0x8c35,	// (0x00011c3a) data_form_pane_ParamLimits

0x8c41,	// (0x00011c46) form_field_data_pane_g1

0x8c4b,	// (0x00011c50) form_field_data_pane_t1_ParamLimits

0x8c65,	// (0x00011c6a) input_focus_pane_ParamLimits

0x8c73,	// (0x00011c78) data_form_wide_pane_ParamLimits

0x8c7f,	// (0x00011c84) form_field_data_wide_pane_g1

0x8cab,	// (0x00011cb0) form_field_data_wide_pane_t1_ParamLimits

0x846a,	// (0x0001146f) input_focus_pane_cp6_ParamLimits

0x8f03,	// (0x00011f08) input_popup_find_pane_g1_ParamLimits

0x8f03,	// (0x00011f08) input_popup_find_pane_g1

0x668e,	// (0x0000f693) aid_navi_side_left_pane

0x66a3,	// (0x0000f6a8) aid_navi_side_right_pane

0xb2e3,	// (0x000142e8) bg_popup_window_pane_cp30_ParamLimits

0xb2e3,	// (0x000142e8) bg_popup_window_pane_cp30

0xb35d,	// (0x00014362) popup_midp_note_alarm_window_g1_ParamLimits

0xb35d,	// (0x00014362) popup_midp_note_alarm_window_g1

0xb38d,	// (0x00014392) popup_midp_note_alarm_window_t1_ParamLimits

0xb38d,	// (0x00014392) popup_midp_note_alarm_window_t1

0xb42e,	// (0x00014433) popup_midp_note_alarm_window_t2_ParamLimits

0xb42e,	// (0x00014433) popup_midp_note_alarm_window_t2

0xb4dc,	// (0x000144e1) popup_midp_note_alarm_window_t3_ParamLimits

0xb4dc,	// (0x000144e1) popup_midp_note_alarm_window_t3

0xb504,	// (0x00014509) popup_midp_note_alarm_window_t4_ParamLimits

0xb504,	// (0x00014509) popup_midp_note_alarm_window_t4

0xb524,	// (0x00014529) popup_midp_note_alarm_window_t5_ParamLimits

0xb524,	// (0x00014529) popup_midp_note_alarm_window_t5

0x000a,

0xf8ab,	// (0x000188b0) popup_midp_note_alarm_window_t_ParamLimits

0xf8ab,	// (0x000188b0) popup_midp_note_alarm_window_t

0xb5d0,	// (0x000145d5) wait_bar_pane_cp1_ParamLimits

0xb5d0,	// (0x000145d5) wait_bar_pane_cp1

0x7dac,	// (0x00010db1) wait_anim_pane_copy1

0x7dac,	// (0x00010db1) wait_border_pane_copy1

0xafc1,	// (0x00013fc6) wait_border_pane_g1_copy1

0x8cc5,	// (0x00011cca) form_field_popup_pane_g1

0x8ccd,	// (0x00011cd2) form_field_popup_pane_t1_ParamLimits

0x8c65,	// (0x00011c6a) input_focus_pane_cp7_ParamLimits

0x8ce7,	// (0x00011cec) list_form_pane_ParamLimits

0x8cf3,	// (0x00011cf8) form_field_popup_wide_pane_g1

0x8cfb,	// (0x00011d00) form_field_popup_wide_pane_t1_ParamLimits

0x8c65,	// (0x00011c6a) input_focus_pane_cp8_ParamLimits

0x8d10,	// (0x00011d15) list_form_wide_pane_ParamLimits

0xc1be,	// (0x000151c3) aid_size_cell_graphic_pane

0x8de9,	// (0x00011dee) data_form_pane_t1_ParamLimits

0xbf53,	// (0x00014f58) data_form_wide_pane_t1_ParamLimits

0xa49c,	// (0x000134a1) bg_status_flat_pane

0x7dec,	// (0x00010df1) title_pane_t1_ParamLimits

0x7e54,	// (0x00010e59) title_pane_t2_ParamLimits

0x7e7a,	// (0x00010e7f) title_pane_t3_ParamLimits

0xf573,	// (0x00018578) title_pane_t_ParamLimits

0x93d8,	// (0x000123dd) level_1_signal_ParamLimits

0x93e5,	// (0x000123ea) level_2_signal_ParamLimits

0x93f2,	// (0x000123f7) level_3_signal_ParamLimits

0x93ff,	// (0x00012404) level_4_signal_ParamLimits

0x940c,	// (0x00012411) level_5_signal_ParamLimits

0x9419,	// (0x0001241e) level_6_signal_ParamLimits

0x9426,	// (0x0001242b) level_7_signal_ParamLimits

0x93d8,	// (0x000123dd) level_1_battery_ParamLimits

0x93e5,	// (0x000123ea) level_2_battery_ParamLimits

0x93f2,	// (0x000123f7) level_3_battery_ParamLimits

0x93ff,	// (0x00012404) level_4_battery_ParamLimits

0x940c,	// (0x00012411) level_5_battery_ParamLimits

0x9419,	// (0x0001241e) level_6_battery_ParamLimits

0x9426,	// (0x0001242b) level_7_battery_ParamLimits

0xb1e8,	// (0x000141ed) bg_status_flat_pane_g1

0xb1f0,	// (0x000141f5) bg_status_flat_pane_g2

0xb1f8,	// (0x000141fd) bg_status_flat_pane_g3

0xb200,	// (0x00014205) bg_status_flat_pane_g4

0xb208,	// (0x0001420d) bg_status_flat_pane_g5

0xb210,	// (0x00014215) bg_status_flat_pane_g6

0xb218,	// (0x0001421d) bg_status_flat_pane_g7

0x7ea2,	// (0x00010ea7) tabs_3_active_pane_t1_ParamLimits

0x7ea2,	// (0x00010ea7) tabs_3_passive_pane_t1_ParamLimits

0x7ebc,	// (0x00010ec1) tabs_4_active_pane_t1_ParamLimits

0x7ebc,	// (0x00010ec1) tabs_4_1_passive_pane_t1_ParamLimits

0x8f98,	// (0x00011f9d) tabs_2_active_pane_t1_ParamLimits

0x8f98,	// (0x00011f9d) tabs_2_passive_pane_t1_ParamLimits

0x8faa,	// (0x00011faf) bg_active_tab_pane_cp4_ParamLimits

0x8fb8,	// (0x00011fbd) tabs_2_long_active_pane_t1_ParamLimits

0x8fcb,	// (0x00011fd0) bg_passive_tab_pane_cp4_ParamLimits

0x6c65,	// (0x0000fc6a) list_single_midp_graphic_pane_t1_ParamLimits

0x8faa,	// (0x00011faf) bg_active_tab_pane_cp5_ParamLimits

0x8fd7,	// (0x00011fdc) tabs_3_long_active_pane_t1_ParamLimits

0x8fcb,	// (0x00011fd0) bg_passive_tab_pane_cp5_ParamLimits

0x6c65,	// (0x0000fc6a) list_single_midp_graphic_pane_t1

0xa49c,	// (0x000134a1) bg_status_flat_pane_ParamLimits

0xa55f,	// (0x00013564) indicator_pane_cp2_ParamLimits

0xa55f,	// (0x00013564) indicator_pane_cp2

0xa683,	// (0x00013688) navi_pane_srt_ParamLimits

0xa683,	// (0x00013688) navi_pane_srt

0xa6a7,	// (0x000136ac) popup_clock_digital_analogue_window_cp1

0x7f83,	// (0x00010f88) indicator_pane_t1

0x9ab0,	// (0x00012ab5) copy_highlight_pane

0x9ab0,	// (0x00012ab5) cursor_graphics_pane

0x9ab0,	// (0x00012ab5) graphic_within_text_pane

0x9ab0,	// (0x00012ab5) link_highlight_pane

0xb9f1,	// (0x000149f6) popup_preview_text_window_t5_ParamLimits

0xb9f1,	// (0x000149f6) popup_preview_text_window_t5

0x9be0,	// (0x00012be5) cursor_digital_pane

0x9be0,	// (0x00012be5) cursor_primary_pane

0x9bf1,	// (0x00012bf6) cursor_primary_small_pane

0x9bf9,	// (0x00012bfe) cursor_secondary_pane

0x9c01,	// (0x00012c06) cursor_title_pane

0x9be0,	// (0x00012be5) link_highlight_digital_pane

0x9be8,	// (0x00012bed) link_highlight_primary_pane

0x9bf1,	// (0x00012bf6) link_highlight_primary_small_pane

0x9bf9,	// (0x00012bfe) link_highlight_secondary_pane

0x9c01,	// (0x00012c06) link_highlight_title_pane

0x9be0,	// (0x00012be5) copy_highlight_digital_pane

0x9be0,	// (0x00012be5) copy_highlight_primary_pane

0x9bf1,	// (0x00012bf6) copy_highlight_primary_small_pane

0x9bf9,	// (0x00012bfe) copy_highlight_secondary_pane

0x9c01,	// (0x00012c06) copy_highlight_title_pane

0x9bf9,	// (0x00012bfe) graphic_text_digital_pane

0xb286,	// (0x0001428b) graphic_text_primary_pane

0xb28f,	// (0x00014294) graphic_text_primary_small_pane

0x9bf1,	// (0x00012bf6) graphic_text_secondary_pane

0x9be0,	// (0x00012be5) graphic_text_title_pane

0x9c09,	// (0x00012c0e) cursor_primary_pane_g1

0xb278,	// (0x0001427d) cursor_text_primary_t1

0xb260,	// (0x00014265) cursor_primary_small_pane_g1

0xb26a,	// (0x0001426f) cursor_text_primary_small_t1

0xb248,	// (0x0001424d) cursor_primary_small_pane_g1_copy1

0xb252,	// (0x00014257) cursor_text_primary_small_t1_copy1

0xb230,	// (0x00014235) cursor_text_title_t1

0xb23e,	// (0x00014243) cursor_title_pane_g1

0x9c09,	// (0x00012c0e) cursor_digital_pane_g1

0x9c13,	// (0x00012c18) cursor_text_digital_t1

0xb1d1,	// (0x000141d6) link_highlight_primary_pane_g1

0xb1d9,	// (0x000141de) link_highlight_primary_pane_t1

0x9c21,	// (0x00012c26) link_highlight_primary_small_pane_g1

0x9c29,	// (0x00012c2e) link_highlight_primary_small_pane_t1

0x9c21,	// (0x00012c26) link_highlight_secondary_pane_g1

0x9c38,	// (0x00012c3d) link_highlight_secondary_pane_t1

0xb145,	// (0x0001414a) link_highlight_title_pane_g1

0xb14d,	// (0x00014152) link_highlight_title_pane_t1

0xb12e,	// (0x00014133) link_highlight_digital_pane_g1

0xb136,	// (0x0001413b) link_highlight_digital_pane_t1

0xb006,	// (0x0001400b) copy_highlight_primary_pane_g1

0xb00e,	// (0x00014013) copy_highlight_primary_pane_t1

0xafe0,	// (0x00013fe5) copy_highlight_primary_small_pane_g1

0xaff7,	// (0x00013ffc) copy_highlight_primary_small_pane_t1

0x9c47,	// (0x00012c4c) copy_highlight_secondary_pane_g1

0x9c4f,	// (0x00012c54) copy_highlight_secondary_pane_t1

0xafe0,	// (0x00013fe5) copy_highlight_title_pane_g1

0xafe8,	// (0x00013fed) copy_highlight_title_pane_t1

0xb006,	// (0x0001400b) copy_highlight_digital_pane_g1

0xc38c,	// (0x00015391) copy_highlight_digital_pane_t1

0xc2e0,	// (0x000152e5) graphic_text_primary_pane_g1

0xc370,	// (0x00015375) graphic_text_primary_pane_t1

0xc37e,	// (0x00015383) graphic_text_primary_pane_t2

0x0001,

0xf9da,	// (0x000189df) graphic_text_primary_pane_t

0xc34c,	// (0x00015351) graphic_text_primary_small_pane_g1

0xc354,	// (0x00015359) graphic_text_primary_small_pane_t1

0xc362,	// (0x00015367) graphic_text_primary_small_pane_t2

0x0001,

0xf9d5,	// (0x000189da) graphic_text_primary_small_pane_t

0xc328,	// (0x0001532d) graphic_text_secondary_pane_g1

0xc330,	// (0x00015335) graphic_text_secondary_pane_t1

0xc33e,	// (0x00015343) graphic_text_secondary_pane_t2

0x0001,

0xf9d0,	// (0x000189d5) graphic_text_secondary_pane_t

0xc304,	// (0x00015309) graphic_text_title_pane_g1

0xc30c,	// (0x00015311) graphic_text_title_pane_t1

0xc31a,	// (0x0001531f) graphic_text_title_pane_t2

0x0001,

0xf9cb,	// (0x000189d0) graphic_text_title_pane_t

0xc2e0,	// (0x000152e5) graphic_text_digital_pane_g1

0xc2e8,	// (0x000152ed) graphic_text_digital_pane_t1

0xc2f6,	// (0x000152fb) graphic_text_digital_pane_t2

0x0001,

0xf9c6,	// (0x000189cb) graphic_text_digital_pane_t

0x7e8c,	// (0x00010e91) navi_icon_pane_srt_ParamLimits

0x7e8c,	// (0x00010e91) navi_icon_pane_srt

0x7dac,	// (0x00010db1) navi_midp_pane_srt

0x7dac,	// (0x00010db1) navi_navi_pane_srt

0x7e8c,	// (0x00010e91) navi_text_pane_srt_ParamLimits

0x7e8c,	// (0x00010e91) navi_text_pane_srt

0xc2ab,	// (0x000152b0) navi_navi_icon_text_pane_srt

0xc2b3,	// (0x000152b8) navi_navi_pane_srt_g1_ParamLimits

0xc2b3,	// (0x000152b8) navi_navi_pane_srt_g1

0xc2c5,	// (0x000152ca) navi_navi_pane_srt_g2_ParamLimits

0xc2c5,	// (0x000152ca) navi_navi_pane_srt_g2

0x0001,

0xf9c1,	// (0x000189c6) navi_navi_pane_srt_g_ParamLimits

0xf9c1,	// (0x000189c6) navi_navi_pane_srt_g

0xc2d7,	// (0x000152dc) navi_navi_tabs_pane_srt

0xc2ab,	// (0x000152b0) navi_navi_text_pane_srt

0xc2ab,	// (0x000152b0) navi_navi_volume_pane_srt

0xc29c,	// (0x000152a1) navi_navi_text_pane_srt_t1

0x6fe5,	// (0x0000ffea) navi_navi_volume_pane_srt_g1

0x6fed,	// (0x0000fff2) volume_small_pane_srt_ParamLimits

0x6fed,	// (0x0000fff2) volume_small_pane_srt

0x696e,	// (0x0000f973) volume_small_pane_srt_g1_ParamLimits

0x696e,	// (0x0000f973) volume_small_pane_srt_g1

0x697e,	// (0x0000f983) volume_small_pane_srt_g2_ParamLimits

0x697e,	// (0x0000f983) volume_small_pane_srt_g2

0x698f,	// (0x0000f994) volume_small_pane_srt_g3_ParamLimits

0x698f,	// (0x0000f994) volume_small_pane_srt_g3

0x69a0,	// (0x0000f9a5) volume_small_pane_srt_g4_ParamLimits

0x69a0,	// (0x0000f9a5) volume_small_pane_srt_g4

0x69b1,	// (0x0000f9b6) volume_small_pane_srt_g5_ParamLimits

0x69b1,	// (0x0000f9b6) volume_small_pane_srt_g5

0x69c2,	// (0x0000f9c7) volume_small_pane_srt_g6_ParamLimits

0x69c2,	// (0x0000f9c7) volume_small_pane_srt_g6

0x69d3,	// (0x0000f9d8) volume_small_pane_srt_g7_ParamLimits

0x69d3,	// (0x0000f9d8) volume_small_pane_srt_g7

0x69e4,	// (0x0000f9e9) volume_small_pane_srt_g8_ParamLimits

0x69e4,	// (0x0000f9e9) volume_small_pane_srt_g8

0x69f5,	// (0x0000f9fa) volume_small_pane_srt_g9_ParamLimits

0x69f5,	// (0x0000f9fa) volume_small_pane_srt_g9

0x6a06,	// (0x0000fa0b) volume_small_pane_srt_g10_ParamLimits

0x6a06,	// (0x0000fa0b) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x00018775) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x00018775) volume_small_pane_srt_g

0x8274,	// (0x00011279) query_popup_data_pane_cp2

0xc282,	// (0x00015287) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xc282,	// (0x00015287) navi_navi_icon_text_pane_srt_t1

0xb286,	// (0x0001428b) navi_tabs_2_long_pane_srt

0xb286,	// (0x0001428b) navi_tabs_2_pane_srt

0xb286,	// (0x0001428b) navi_tabs_3_long_pane_srt

0xb286,	// (0x0001428b) navi_tabs_3_pane_srt

0xb286,	// (0x0001428b) navi_tabs_4_pane_srt

0x6fc5,	// (0x0000ffca) tabs_2_active_pane_srt_ParamLimits

0x6fc5,	// (0x0000ffca) tabs_2_active_pane_srt

0x6fd5,	// (0x0000ffda) tabs_2_passive_pane_srt_ParamLimits

0x6fd5,	// (0x0000ffda) tabs_2_passive_pane_srt

0x9e36,	// (0x00012e3b) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9e36,	// (0x00012e3b) bg_passive_tab_pane_cp1_srt

0xc24e,	// (0x00015253) bg_passive_tab_pane_g1_cp1_srt

0x96f8,	// (0x000126fd) bg_passive_tab_pane_g2_cp1_srt

0xc257,	// (0x0001525c) bg_passive_tab_pane_g3_cp1_srt

0x7e8c,	// (0x00010e91) bg_active_tab_pane_cp1_srt_ParamLimits

0x7e8c,	// (0x00010e91) bg_active_tab_pane_cp1_srt

0xc260,	// (0x00015265) tabs_2_active_pane_srt_g1

0xc268,	// (0x0001526d) tabs_2_active_pane_srt_t1_ParamLimits

0xc268,	// (0x0001526d) tabs_2_active_pane_srt_t1

0xc24e,	// (0x00015253) bg_active_tab_pane_g1_cp1_srt

0x96f8,	// (0x000126fd) bg_active_tab_pane_g2_cp1_srt

0xc257,	// (0x0001525c) bg_active_tab_pane_g3_cp1_srt

0x6f92,	// (0x0000ff97) tabs_3_active_pane_srt_ParamLimits

0x6f92,	// (0x0000ff97) tabs_3_active_pane_srt

0x6fa3,	// (0x0000ffa8) tabs_3_passive_pane_cp_srt_ParamLimits

0x6fa3,	// (0x0000ffa8) tabs_3_passive_pane_cp_srt

0x6fb4,	// (0x0000ffb9) tabs_3_passive_pane_srt_ParamLimits

0x6fb4,	// (0x0000ffb9) tabs_3_passive_pane_srt

0x9e36,	// (0x00012e3b) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9e36,	// (0x00012e3b) bg_passive_tab_pane_cp2_srt

0x9c5e,	// (0x00012c63) bg_passive_tab_pane_g1_cp2_srt

0x96f8,	// (0x000126fd) bg_passive_tab_pane_g2_cp2_srt

0x9c67,	// (0x00012c6c) bg_passive_tab_pane_g3_cp2_srt

0x7e8c,	// (0x00010e91) bg_active_tab_pane_cp2_srt_ParamLimits

0x7e8c,	// (0x00010e91) bg_active_tab_pane_cp2_srt

0xc234,	// (0x00015239) tabs_3_active_pane_srt_g1

0xc23c,	// (0x00015241) tabs_3_active_pane_srt_t1_ParamLimits

0xc23c,	// (0x00015241) tabs_3_active_pane_srt_t1

0x9c5e,	// (0x00012c63) bg_active_tab_pane_g1_cp2_srt

0x96f8,	// (0x000126fd) bg_active_tab_pane_g2_cp2_srt

0x9c67,	// (0x00012c6c) bg_active_tab_pane_g3_cp2_srt

0x6f4a,	// (0x0000ff4f) tabs_4_active_pane_srt_ParamLimits

0x6f4a,	// (0x0000ff4f) tabs_4_active_pane_srt

0x6f5c,	// (0x0000ff61) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6f5c,	// (0x0000ff61) tabs_4_passive_pane_cp2_srt

0x9dbc,	// (0x00012dc1) aid_size_cell_toolbar

0x8fcb,	// (0x00011fd0) main_idle_act_pane_ParamLimits

0x9fd5,	// (0x00012fda) popup_large_graphic_colour_window_ParamLimits

0xa334,	// (0x00013339) popup_toolbar_window_ParamLimits

0xa334,	// (0x00013339) popup_toolbar_window

0xbfd6,	// (0x00014fdb) list_single_graphic_2heading_pane_ParamLimits

0xbfd6,	// (0x00014fdb) list_single_graphic_2heading_pane

0x9187,	// (0x0001218c) aid_size_cell_apps_grid_lsc_pane

0x9199,	// (0x0001219e) aid_size_cell_apps_grid_prt_pane

0x9e36,	// (0x00012e3b) bg_wml_button_pane_cp1_ParamLimits

0x9e36,	// (0x00012e3b) bg_wml_button_pane_cp1

0xac37,	// (0x00013c3c) form_midp_field_text_pane_t1_ParamLimits

0xaa02,	// (0x00013a07) input_focus_pane_cp050_ParamLimits

0xac76,	// (0x00013c7b) list_midp_form_text_pane_ParamLimits

0xac14,	// (0x00013c19) input_focus_pane_cp051_ParamLimits

0xac28,	// (0x00013c2d) list_midp_choice_pane_ParamLimits

0xaa93,	// (0x00013a98) list_single_2graphic_pane_cp3_ParamLimits

0xaa93,	// (0x00013a98) list_single_2graphic_pane_cp3

0xaabf,	// (0x00013ac4) list_single_midp_graphic_pane_ParamLimits

0xaabf,	// (0x00013ac4) list_single_midp_graphic_pane

0x6b6a,	// (0x0000fb6f) list_single_graphic_2heading_pane_g1_ParamLimits

0x6b6a,	// (0x0000fb6f) list_single_graphic_2heading_pane_g1

0x6b76,	// (0x0000fb7b) list_single_graphic_2heading_pane_g4_ParamLimits

0x6b76,	// (0x0000fb7b) list_single_graphic_2heading_pane_g4

0x6b82,	// (0x0000fb87) list_single_graphic_2heading_pane_g5_ParamLimits

0x6b82,	// (0x0000fb87) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x000187c8) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x000187c8) list_single_graphic_2heading_pane_g

0x6b8e,	// (0x0000fb93) list_single_graphic_2heading_pane_t1_ParamLimits

0x6b8e,	// (0x0000fb93) list_single_graphic_2heading_pane_t1

0x6ba2,	// (0x0000fba7) list_single_graphic_2heading_pane_t2_ParamLimits

0x6ba2,	// (0x0000fba7) list_single_graphic_2heading_pane_t2

0x6bbe,	// (0x0000fbc3) list_single_graphic_2heading_pane_t3_ParamLimits

0x6bbe,	// (0x0000fbc3) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x000187cf) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x000187cf) list_single_graphic_2heading_pane_t

0xa804,	// (0x00013809) bg_popup_sub_pane_cp2

0xa82e,	// (0x00013833) grid_toobar_pane

0x6bd6,	// (0x0000fbdb) cell_toolbar_pane_ParamLimits

0x6bd6,	// (0x0000fbdb) cell_toolbar_pane

0xa88c,	// (0x00013891) cell_toolbar_pane_g1_ParamLimits

0xa88c,	// (0x00013891) cell_toolbar_pane_g1

0xa8a0,	// (0x000138a5) cell_toolbar_pane_g2_ParamLimits

0xa8a0,	// (0x000138a5) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x000187dd) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x000187dd) cell_toolbar_pane_g

0xa8c2,	// (0x000138c7) grid_highlight_pane_cp2_ParamLimits

0xa8c2,	// (0x000138c7) grid_highlight_pane_cp2

0xa8dc,	// (0x000138e1) toolbar_button_pane

0xa8e8,	// (0x000138ed) toolbar_button_pane_g1

0xa8f0,	// (0x000138f5) toolbar_button_pane_g2

0xa8f8,	// (0x000138fd) toolbar_button_pane_g3

0xa900,	// (0x00013905) toolbar_button_pane_g4

0xa908,	// (0x0001390d) toolbar_button_pane_g5

0xa910,	// (0x00013915) toolbar_button_pane_g6

0xa918,	// (0x0001391d) toolbar_button_pane_g7

0xa920,	// (0x00013925) toolbar_button_pane_g8

0xa928,	// (0x0001392d) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x000187e2) toolbar_button_pane_g

0x6c0e,	// (0x0000fc13) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6c0e,	// (0x0000fc13) list_single_2graphic_pane_g1_cp3

0x6c1a,	// (0x0000fc1f) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6c1a,	// (0x0000fc1f) list_single_2graphic_pane_g2_cp3

0x6c2b,	// (0x0000fc30) list_single_2graphic_pane_g3_cp3

0x6c33,	// (0x0000fc38) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6c33,	// (0x0000fc38) list_single_2graphic_pane_g4_cp3

0x6c3f,	// (0x0000fc44) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6c3f,	// (0x0000fc44) list_single_2graphic_pane_t1_cp3

0x6c59,	// (0x0000fc5e) list_single_midp_graphic_pane_g2_ParamLimits

0x6c59,	// (0x0000fc5e) list_single_midp_graphic_pane_g2

0x9dc4,	// (0x00012dc9) aid_zoom_text_primary

0x9dcc,	// (0x00012dd1) aid_zoom_text_secondary

0x9d1b,	// (0x00012d20) status_small_pane_g7_ParamLimits

0x9d1b,	// (0x00012d20) status_small_pane_g7

0x9d3e,	// (0x00012d43) status_small_pane_t1_ParamLimits

0x7dc3,	// (0x00010dc8) title_pane_g2

0x0003,

0xf56a,	// (0x0001856f) title_pane_g

0x8315,	// (0x0001131a) aid_size_cell_colour_1_pane_ParamLimits

0x8315,	// (0x0001131a) aid_size_cell_colour_1_pane

0x8329,	// (0x0001132e) aid_size_cell_colour_2_pane_ParamLimits

0x8329,	// (0x0001132e) aid_size_cell_colour_2_pane

0x833d,	// (0x00011342) aid_size_cell_colour_3_pane_ParamLimits

0x833d,	// (0x00011342) aid_size_cell_colour_3_pane

0x8351,	// (0x00011356) aid_size_cell_colour_4_pane_ParamLimits

0x8351,	// (0x00011356) aid_size_cell_colour_4_pane

0x65ca,	// (0x0000f5cf) title_pane_stacon_g1_ParamLimits

0x65ca,	// (0x0000f5cf) title_pane_stacon_g1

0xb065,	// (0x0001406a) popup_note_wait_window_g3_ParamLimits

0xb065,	// (0x0001406a) popup_note_wait_window_g3

0xb0db,	// (0x000140e0) popup_note_wait_window_t5_ParamLimits

0xb0db,	// (0x000140e0) popup_note_wait_window_t5

0x7dac,	// (0x00010db1) main_feb_china_hwr_fs_writing_pane

0x9ec0,	// (0x00012ec5) popup_feb_china_hwr_fs_window_ParamLimits

0x9ec0,	// (0x00012ec5) popup_feb_china_hwr_fs_window

0x6c7b,	// (0x0000fc80) aid_size_cell_hwr_fs_ParamLimits

0x6c7b,	// (0x0000fc80) aid_size_cell_hwr_fs

0xaa02,	// (0x00013a07) bg_popup_sub_pane_cp3_ParamLimits

0xaa02,	// (0x00013a07) bg_popup_sub_pane_cp3

0x6c90,	// (0x0000fc95) grid_hwr_fs_pane_ParamLimits

0x6c90,	// (0x0000fc95) grid_hwr_fs_pane

0x6ca8,	// (0x0000fcad) linegrid_hwr_fs_pane_ParamLimits

0x6ca8,	// (0x0000fcad) linegrid_hwr_fs_pane

0x6cb8,	// (0x0000fcbd) cell_hwr_fs_pane_ParamLimits

0x6cb8,	// (0x0000fcbd) cell_hwr_fs_pane

0xaa0e,	// (0x00013a13) linegrid_hwr_fs_pane_g1_ParamLimits

0xaa0e,	// (0x00013a13) linegrid_hwr_fs_pane_g1

0xaa1a,	// (0x00013a1f) linegrid_hwr_fs_pane_g2_ParamLimits

0xaa1a,	// (0x00013a1f) linegrid_hwr_fs_pane_g2

0xaa2c,	// (0x00013a31) linegrid_hwr_fs_pane_g3_ParamLimits

0xaa2c,	// (0x00013a31) linegrid_hwr_fs_pane_g3

0x6cda,	// (0x0000fcdf) linegrid_hwr_fs_pane_g4_ParamLimits

0x6cda,	// (0x0000fcdf) linegrid_hwr_fs_pane_g4

0x6cf4,	// (0x0000fcf9) linegrid_hwr_fs_pane_g5_ParamLimits

0x6cf4,	// (0x0000fcf9) linegrid_hwr_fs_pane_g5

0x0004,

0xf808,	// (0x0001880d) linegrid_hwr_fs_pane_g_ParamLimits

0xf808,	// (0x0001880d) linegrid_hwr_fs_pane_g

0xaa38,	// (0x00013a3d) cell_hwr_fs_pane_g1_ParamLimits

0xaa38,	// (0x00013a3d) cell_hwr_fs_pane_g1

0xa73d,	// (0x00013742) cell_hwr_fs_pane_g2_ParamLimits

0xa73d,	// (0x00013742) cell_hwr_fs_pane_g2

0xaa4e,	// (0x00013a53) cell_hwr_fs_pane_g3_ParamLimits

0xaa4e,	// (0x00013a53) cell_hwr_fs_pane_g3

0xaa5b,	// (0x00013a60) cell_hwr_fs_pane_g4_ParamLimits

0xaa5b,	// (0x00013a60) cell_hwr_fs_pane_g4

0x0003,

0xf813,	// (0x00018818) cell_hwr_fs_pane_g_ParamLimits

0xf813,	// (0x00018818) cell_hwr_fs_pane_g

0x6d0a,	// (0x0000fd0f) cell_hwr_fs_pane_t1

0x7dac,	// (0x00010db1) grid_highlight_pane_cp6

0x7dac,	// (0x00010db1) main_idle_act2_pane

0x8f3f,	// (0x00011f44) aid_inside_area_popup_secondary

0xb70c,	// (0x00014711) aid_inside_area_window_primary_ParamLimits

0xb70c,	// (0x00014711) aid_inside_area_window_primary

0xc39b,	// (0x000153a0) ai2_news_ticker_pane

0xc3a3,	// (0x000153a8) aid_size_cell_ai1_link_ParamLimits

0xc3a3,	// (0x000153a8) aid_size_cell_ai1_link

0xc3bd,	// (0x000153c2) popup_ai2_data_window_ParamLimits

0xc3bd,	// (0x000153c2) popup_ai2_data_window

0xc3d1,	// (0x000153d6) popup_ai2_link_window_ParamLimits

0xc3d1,	// (0x000153d6) popup_ai2_link_window

0xaa02,	// (0x00013a07) bg_popup_sub_pane_cp4_ParamLimits

0xaa02,	// (0x00013a07) bg_popup_sub_pane_cp4

0xc3e5,	// (0x000153ea) grid_ai2_link_pane_ParamLimits

0xc3e5,	// (0x000153ea) grid_ai2_link_pane

0xc3fc,	// (0x00015401) popup_ai2_link_window_g1_ParamLimits

0xc3fc,	// (0x00015401) popup_ai2_link_window_g1

0xc408,	// (0x0001540d) popup_ai2_link_window_g2_ParamLimits

0xc408,	// (0x0001540d) popup_ai2_link_window_g2

0x0001,

0xf9df,	// (0x000189e4) popup_ai2_link_window_g_ParamLimits

0xf9df,	// (0x000189e4) popup_ai2_link_window_g

0xc417,	// (0x0001541c) ai2_mp_button_pane

0xc41f,	// (0x00015424) ai2_mp_volume_pane

0xac14,	// (0x00013c19) bg_popup_sub_pane_cp5_ParamLimits

0xac14,	// (0x00013c19) bg_popup_sub_pane_cp5

0xc427,	// (0x0001542c) heading_ai2_gene_pane_ParamLimits

0xc427,	// (0x0001542c) heading_ai2_gene_pane

0xc433,	// (0x00015438) list_ai2_gene_pane_ParamLimits

0xc433,	// (0x00015438) list_ai2_gene_pane

0xc47b,	// (0x00015480) cell_ai2_link_pane_ParamLimits

0xc47b,	// (0x00015480) cell_ai2_link_pane

0xc491,	// (0x00015496) cell_ai2_link_pane_g1

0x7dac,	// (0x00010db1) grid_highlight_pane_cp7

0x7002,	// (0x00010007) ai2_mp_volume_pane_g1

0xc562,	// (0x00015567) ai2_mp_volume_pane_g2

0xc4d7,	// (0x000154dc) list_ai2_gene_pane_t1

0xc56a,	// (0x0001556f) ai2_mp_volume_pane_g3

0x0002,

0xf9f8,	// (0x000189fd) ai2_mp_volume_pane_g

0x700a,	// (0x0001000f) volume_small_pane_cp3

0xc572,	// (0x00015577) aid_size_cell_ai2_button

0xc57a,	// (0x0001557f) grid_ai2_button_pane

0xc583,	// (0x00015588) cell_ai2_button_pane_ParamLimits

0xc583,	// (0x00015588) cell_ai2_button_pane

0x7da2,	// (0x00010da7) cell_ai2_button_pane_g1

0x7dac,	// (0x00010db1) grid_highlight_pane_cp8

0xc522,	// (0x00015527) ai2_gene_pane_t1_ParamLimits

0xc522,	// (0x00015527) ai2_gene_pane_t1

0x9db2,	// (0x00012db7) aid_height_parent_landscape

0xbdc3,	// (0x00014dc8) aid_height_set_list

0xbdd4,	// (0x00014dd9) aid_size_parent

0xc1be,	// (0x000151c3) aid_size_cell_graphic_pane_ParamLimits

0xc443,	// (0x00015448) popup_ai2_data_window_g1_ParamLimits

0xc443,	// (0x00015448) popup_ai2_data_window_g1

0xc44f,	// (0x00015454) ai2_news_ticker_pane_g1

0xc457,	// (0x0001545c) ai2_news_ticker_pane_g2

0x0001,

0xf9e4,	// (0x000189e9) ai2_news_ticker_pane_g

0xc45f,	// (0x00015464) ai2_news_ticker_pane_t1

0xc46d,	// (0x00015472) ai2_news_ticker_pane_t2

0x0001,

0xf9e9,	// (0x000189ee) ai2_news_ticker_pane_t

0xc49a,	// (0x0001549f) heading_ai2_gene_pane_g1

0xc4a2,	// (0x000154a7) heading_ai2_gene_pane_t1_ParamLimits

0xc4a2,	// (0x000154a7) heading_ai2_gene_pane_t1

0xc4b7,	// (0x000154bc) list_highlight_pane_cp6

0xc4bf,	// (0x000154c4) ai2_gene_pane_ParamLimits

0xc4bf,	// (0x000154c4) ai2_gene_pane

0xc4e5,	// (0x000154ea) list_ai2_gene_pane_t2

0x0001,

0xf9ee,	// (0x000189f3) list_ai2_gene_pane_t

0xc4f3,	// (0x000154f8) list_highlight_pane_cp8_ParamLimits

0xc4f3,	// (0x000154f8) list_highlight_pane_cp8

0xc504,	// (0x00015509) ai2_gene_pane_g1_ParamLimits

0xc504,	// (0x00015509) ai2_gene_pane_g1

0xc516,	// (0x0001551b) ai2_gene_pane_g2_ParamLimits

0xc516,	// (0x0001551b) ai2_gene_pane_g2

0x0001,

0xf9f3,	// (0x000189f8) ai2_gene_pane_g_ParamLimits

0xf9f3,	// (0x000189f8) ai2_gene_pane_g

0x868f,	// (0x00011694) scroll_pane_cp12

0x6b29,	// (0x0000fb2e) control_pane_t3_ParamLimits

0x6b29,	// (0x0000fb2e) control_pane_t3

0x9d2f,	// (0x00012d34) status_small_pane_g8_ParamLimits

0x9d2f,	// (0x00012d34) status_small_pane_g8

0x9fa2,	// (0x00012fa7) popup_find_window_ParamLimits

0xa1b5,	// (0x000131ba) popup_note_image_window_ParamLimits

0xa86a,	// (0x0001386f) list_double2_graphic_pane_vc_g1_ParamLimits

0xa86a,	// (0x0001386f) list_double2_graphic_pane_vc_g1

0x8761,	// (0x00011766) list_double2_graphic_pane_vc_g2_ParamLimits

0x8761,	// (0x00011766) list_double2_graphic_pane_vc_g2

0x876d,	// (0x00011772) list_double2_graphic_pane_vc_g3_ParamLimits

0x876d,	// (0x00011772) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x000187d6) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x000187d6) list_double2_graphic_pane_vc_g

0xa876,	// (0x0001387b) list_double2_graphic_pane_vc_t1_ParamLimits

0xa876,	// (0x0001387b) list_double2_graphic_pane_vc_t1

0x8761,	// (0x00011766) list_single_heading_pane_vc_g1_ParamLimits

0x8761,	// (0x00011766) list_single_heading_pane_vc_g1

0x876d,	// (0x00011772) list_single_heading_pane_vc_g2_ParamLimits

0x876d,	// (0x00011772) list_single_heading_pane_vc_g2

0x0001,

0xf7f2,	// (0x000187f7) list_single_heading_pane_vc_g_ParamLimits

0xf7f2,	// (0x000187f7) list_single_heading_pane_vc_g

0xa930,	// (0x00013935) list_single_heading_pane_vc_t1_ParamLimits

0xa930,	// (0x00013935) list_single_heading_pane_vc_t1

0xa946,	// (0x0001394b) list_single_heading_pane_vc_t2_ParamLimits

0xa946,	// (0x0001394b) list_single_heading_pane_vc_t2

0x0001,

0xf7f7,	// (0x000187fc) list_single_heading_pane_vc_t_ParamLimits

0xf7f7,	// (0x000187fc) list_single_heading_pane_vc_t

0xa95a,	// (0x0001395f) list_setting_number_pane_vc_g1_ParamLimits

0xa95a,	// (0x0001395f) list_setting_number_pane_vc_g1

0xa966,	// (0x0001396b) list_setting_number_pane_vc_g2_ParamLimits

0xa966,	// (0x0001396b) list_setting_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x00018801) list_setting_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x00018801) list_setting_number_pane_vc_g

0xa972,	// (0x00013977) list_setting_number_pane_vc_t1_ParamLimits

0xa972,	// (0x00013977) list_setting_number_pane_vc_t1

0xa986,	// (0x0001398b) list_setting_number_pane_vc_t2_ParamLimits

0xa986,	// (0x0001398b) list_setting_number_pane_vc_t2

0xa9a2,	// (0x000139a7) list_setting_number_pane_vc_t3_ParamLimits

0xa9a2,	// (0x000139a7) list_setting_number_pane_vc_t3

0x0002,

0xf801,	// (0x00018806) list_setting_number_pane_vc_t_ParamLimits

0xf801,	// (0x00018806) list_setting_number_pane_vc_t

0xa9ca,	// (0x000139cf) set_value_pane_vc_ParamLimits

0xa9ca,	// (0x000139cf) set_value_pane_vc

0xbfd6,	// (0x00014fdb) list_double2_graphic_pane_vc_ParamLimits

0xbfd6,	// (0x00014fdb) list_double2_graphic_pane_vc

0xbfd6,	// (0x00014fdb) list_double2_large_graphic_pane_vc_ParamLimits

0xbfd6,	// (0x00014fdb) list_double2_large_graphic_pane_vc

0xbfd6,	// (0x00014fdb) list_double2_pane_vc_ParamLimits

0xbfd6,	// (0x00014fdb) list_double2_pane_vc

0xbfd6,	// (0x00014fdb) list_double_graphic_heading_pane_vc_ParamLimits

0xbfd6,	// (0x00014fdb) list_double_graphic_heading_pane_vc

0xbfd6,	// (0x00014fdb) list_double_graphic_pane_vc_ParamLimits

0xbfd6,	// (0x00014fdb) list_double_graphic_pane_vc

0xbfd6,	// (0x00014fdb) list_double_heading_pane_vc_ParamLimits

0xbfd6,	// (0x00014fdb) list_double_heading_pane_vc

0xbfd6,	// (0x00014fdb) list_double_large_graphic_pane_vc_ParamLimits

0xbfd6,	// (0x00014fdb) list_double_large_graphic_pane_vc

0xbfd6,	// (0x00014fdb) list_double_number_pane_vc_ParamLimits

0xbfd6,	// (0x00014fdb) list_double_number_pane_vc

0xbfd6,	// (0x00014fdb) list_double_pane_vc_ParamLimits

0xbfd6,	// (0x00014fdb) list_double_pane_vc

0xbfd6,	// (0x00014fdb) list_double_time_pane_vc_ParamLimits

0xbfd6,	// (0x00014fdb) list_double_time_pane_vc

0xbfd6,	// (0x00014fdb) list_setting_number_pane_vc_ParamLimits

0xbfd6,	// (0x00014fdb) list_setting_number_pane_vc

0xbfd6,	// (0x00014fdb) list_setting_pane_vc_ParamLimits

0xbfd6,	// (0x00014fdb) list_setting_pane_vc

0xbfd6,	// (0x00014fdb) list_single_graphic_heading_pane_vc_ParamLimits

0xbfd6,	// (0x00014fdb) list_single_graphic_heading_pane_vc

0xbfd6,	// (0x00014fdb) list_single_heading_pane_vc_ParamLimits

0xbfd6,	// (0x00014fdb) list_single_heading_pane_vc

0xbfe9,	// (0x00014fee) list_single_number_heading_pane_vc_ParamLimits

0xbfe9,	// (0x00014fee) list_single_number_heading_pane_vc

0xa86a,	// (0x0001386f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xa86a,	// (0x0001386f) list_double_graphic_heading_pane_vc_g1

0x8761,	// (0x00011766) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x8761,	// (0x00011766) list_double_graphic_heading_pane_vc_g2

0x876d,	// (0x00011772) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x876d,	// (0x00011772) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7d1,	// (0x000187d6) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x000187d6) list_double_graphic_heading_pane_vc_g

0xc5b7,	// (0x000155bc) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xc5b7,	// (0x000155bc) list_double_graphic_heading_pane_vc_t1

0xa930,	// (0x00013935) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xa930,	// (0x00013935) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ff,	// (0x00018a04) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ff,	// (0x00018a04) list_double_graphic_heading_pane_vc_t

0xa95a,	// (0x0001395f) list_setting_pane_vc_g1_ParamLimits

0xa95a,	// (0x0001395f) list_setting_pane_vc_g1

0xa966,	// (0x0001396b) list_setting_pane_vc_g2_ParamLimits

0xa966,	// (0x0001396b) list_setting_pane_vc_g2

0x0001,

0xf7fc,	// (0x00018801) list_setting_pane_vc_g_ParamLimits

0xf7fc,	// (0x00018801) list_setting_pane_vc_g

0xc7af,	// (0x000157b4) list_setting_pane_vc_t1_ParamLimits

0xc7af,	// (0x000157b4) list_setting_pane_vc_t1

0xc7c3,	// (0x000157c8) list_setting_pane_vc_t2_ParamLimits

0xc7c3,	// (0x000157c8) list_setting_pane_vc_t2

0x0001,

0xfa42,	// (0x00018a47) list_setting_pane_vc_t_ParamLimits

0xfa42,	// (0x00018a47) list_setting_pane_vc_t

0xa9ca,	// (0x000139cf) set_value_pane_cp_vc_ParamLimits

0xa9ca,	// (0x000139cf) set_value_pane_cp_vc

0x8761,	// (0x00011766) list_single_number_heading_pane_vc_g1_ParamLimits

0x8761,	// (0x00011766) list_single_number_heading_pane_vc_g1

0x876d,	// (0x00011772) list_single_number_heading_pane_vc_g2_ParamLimits

0x876d,	// (0x00011772) list_single_number_heading_pane_vc_g2

0x0001,

0xf7f2,	// (0x000187f7) list_single_number_heading_pane_vc_g_ParamLimits

0xf7f2,	// (0x000187f7) list_single_number_heading_pane_vc_g

0xa930,	// (0x00013935) list_single_number_heading_pane_vc_t1_ParamLimits

0xa930,	// (0x00013935) list_single_number_heading_pane_vc_t1

0xc7e5,	// (0x000157ea) list_single_number_heading_pane_vc_t2_ParamLimits

0xc7e5,	// (0x000157ea) list_single_number_heading_pane_vc_t2

0xc7f9,	// (0x000157fe) list_single_number_heading_pane_vc_t3_ParamLimits

0xc7f9,	// (0x000157fe) list_single_number_heading_pane_vc_t3

0x0002,

0xfa47,	// (0x00018a4c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa47,	// (0x00018a4c) list_single_number_heading_pane_vc_t

0xa86a,	// (0x0001386f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xa86a,	// (0x0001386f) list_single_graphic_heading_pane_vc_g1

0x8761,	// (0x00011766) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8761,	// (0x00011766) list_single_graphic_heading_pane_vc_g4

0x876d,	// (0x00011772) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x876d,	// (0x00011772) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7d1,	// (0x000187d6) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x000187d6) list_single_graphic_heading_pane_vc_g

0xa930,	// (0x00013935) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xa930,	// (0x00013935) list_single_graphic_heading_pane_vc_t1

0xc80b,	// (0x00015810) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xc80b,	// (0x00015810) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4e,	// (0x00018a53) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4e,	// (0x00018a53) list_single_graphic_heading_pane_vc_t

0x8761,	// (0x00011766) list_double2_pane_vc_g1_ParamLimits

0x8761,	// (0x00011766) list_double2_pane_vc_g1

0x876d,	// (0x00011772) list_double2_pane_vc_g2_ParamLimits

0x876d,	// (0x00011772) list_double2_pane_vc_g2

0x0001,

0xf7f2,	// (0x000187f7) list_double2_pane_vc_g_ParamLimits

0xf7f2,	// (0x000187f7) list_double2_pane_vc_g

0xc81f,	// (0x00015824) list_double2_pane_vc_t1_ParamLimits

0xc81f,	// (0x00015824) list_double2_pane_vc_t1

0xc835,	// (0x0001583a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xc835,	// (0x0001583a) list_double2_large_graphic_pane_vc_g1

0x8761,	// (0x00011766) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8761,	// (0x00011766) list_double2_large_graphic_pane_vc_g2

0x876d,	// (0x00011772) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x876d,	// (0x00011772) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa53,	// (0x00018a58) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa53,	// (0x00018a58) list_double2_large_graphic_pane_vc_g

0xc841,	// (0x00015846) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xc841,	// (0x00015846) list_double2_large_graphic_pane_vc_t1

0xc857,	// (0x0001585c) list_double_time_pane_vc_g1_ParamLimits

0xc857,	// (0x0001585c) list_double_time_pane_vc_g1

0xc863,	// (0x00015868) list_double_time_pane_vc_g2_ParamLimits

0xc863,	// (0x00015868) list_double_time_pane_vc_g2

0x0001,

0xfa5a,	// (0x00018a5f) list_double_time_pane_vc_g_ParamLimits

0xfa5a,	// (0x00018a5f) list_double_time_pane_vc_g

0xc86f,	// (0x00015874) list_double_time_pane_vc_t1_ParamLimits

0xc86f,	// (0x00015874) list_double_time_pane_vc_t1

0xc888,	// (0x0001588d) list_double_time_pane_vc_t2_ParamLimits

0xc888,	// (0x0001588d) list_double_time_pane_vc_t2

0xc8a8,	// (0x000158ad) list_double_time_pane_vc_t3_ParamLimits

0xc8a8,	// (0x000158ad) list_double_time_pane_vc_t3

0xc8c0,	// (0x000158c5) list_double_time_pane_vc_t4_ParamLimits

0xc8c0,	// (0x000158c5) list_double_time_pane_vc_t4

0x0003,

0xfa5f,	// (0x00018a64) list_double_time_pane_vc_t_ParamLimits

0xfa5f,	// (0x00018a64) list_double_time_pane_vc_t

0x8761,	// (0x00011766) list_double_pane_vc_g1_ParamLimits

0x8761,	// (0x00011766) list_double_pane_vc_g1

0x876d,	// (0x00011772) list_double_pane_vc_g2_ParamLimits

0x876d,	// (0x00011772) list_double_pane_vc_g2

0x0001,

0xf7f2,	// (0x000187f7) list_double_pane_vc_g_ParamLimits

0xf7f2,	// (0x000187f7) list_double_pane_vc_g

0xc8d4,	// (0x000158d9) list_double_pane_vc_t1_ParamLimits

0xc8d4,	// (0x000158d9) list_double_pane_vc_t1

0xc8e6,	// (0x000158eb) list_double_pane_vc_t2_ParamLimits

0xc8e6,	// (0x000158eb) list_double_pane_vc_t2

0x0001,

0xfa68,	// (0x00018a6d) list_double_pane_vc_t_ParamLimits

0xfa68,	// (0x00018a6d) list_double_pane_vc_t

0x8761,	// (0x00011766) list_double_number_pane_vc_g1_ParamLimits

0x8761,	// (0x00011766) list_double_number_pane_vc_g1

0x876d,	// (0x00011772) list_double_number_pane_vc_g2_ParamLimits

0x876d,	// (0x00011772) list_double_number_pane_vc_g2

0x0001,

0xf7f2,	// (0x000187f7) list_double_number_pane_vc_g_ParamLimits

0xf7f2,	// (0x000187f7) list_double_number_pane_vc_g

0xc8fe,	// (0x00015903) list_double_number_pane_vc_t1_ParamLimits

0xc8fe,	// (0x00015903) list_double_number_pane_vc_t1

0xc912,	// (0x00015917) list_double_number_pane_vc_t2_ParamLimits

0xc912,	// (0x00015917) list_double_number_pane_vc_t2

0xc8e6,	// (0x000158eb) list_double_number_pane_vc_t3_ParamLimits

0xc8e6,	// (0x000158eb) list_double_number_pane_vc_t3

0x0002,

0xfa6d,	// (0x00018a72) list_double_number_pane_vc_t_ParamLimits

0xfa6d,	// (0x00018a72) list_double_number_pane_vc_t

0xc924,	// (0x00015929) list_double_large_graphic_pane_vc_g1_ParamLimits

0xc924,	// (0x00015929) list_double_large_graphic_pane_vc_g1

0xc930,	// (0x00015935) list_double_large_graphic_pane_vc_g2_ParamLimits

0xc930,	// (0x00015935) list_double_large_graphic_pane_vc_g2

0x876d,	// (0x00011772) list_double_large_graphic_pane_vc_g3_ParamLimits

0x876d,	// (0x00011772) list_double_large_graphic_pane_vc_g3

0xc93f,	// (0x00015944) list_double_large_graphic_pane_vc_g4_ParamLimits

0xc93f,	// (0x00015944) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa74,	// (0x00018a79) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa74,	// (0x00018a79) list_double_large_graphic_pane_vc_g

0xc94b,	// (0x00015950) list_double_large_graphic_pane_vc_t1_ParamLimits

0xc94b,	// (0x00015950) list_double_large_graphic_pane_vc_t1

0xc95d,	// (0x00015962) list_double_large_graphic_pane_vc_t2_ParamLimits

0xc95d,	// (0x00015962) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa7d,	// (0x00018a82) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa7d,	// (0x00018a82) list_double_large_graphic_pane_vc_t

0x8761,	// (0x00011766) list_double_heading_pane_vc_g1_ParamLimits

0x8761,	// (0x00011766) list_double_heading_pane_vc_g1

0x876d,	// (0x00011772) list_double_heading_pane_vc_g2_ParamLimits

0x876d,	// (0x00011772) list_double_heading_pane_vc_g2

0x0001,

0xf7f2,	// (0x000187f7) list_double_heading_pane_vc_g_ParamLimits

0xf7f2,	// (0x000187f7) list_double_heading_pane_vc_g

0xc976,	// (0x0001597b) list_double_heading_pane_vc_t1_ParamLimits

0xc976,	// (0x0001597b) list_double_heading_pane_vc_t1

0xa930,	// (0x00013935) list_double_heading_pane_vc_t2_ParamLimits

0xa930,	// (0x00013935) list_double_heading_pane_vc_t2

0x0001,

0xfa82,	// (0x00018a87) list_double_heading_pane_vc_t_ParamLimits

0xfa82,	// (0x00018a87) list_double_heading_pane_vc_t

0xa86a,	// (0x0001386f) list_double_graphic_pane_vc_g1_ParamLimits

0xa86a,	// (0x0001386f) list_double_graphic_pane_vc_g1

0xc98a,	// (0x0001598f) list_double_graphic_pane_vc_g2_ParamLimits

0xc98a,	// (0x0001598f) list_double_graphic_pane_vc_g2

0xc999,	// (0x0001599e) list_double_graphic_pane_vc_g3_ParamLimits

0xc999,	// (0x0001599e) list_double_graphic_pane_vc_g3

0x0002,

0xfa87,	// (0x00018a8c) list_double_graphic_pane_vc_g_ParamLimits

0xfa87,	// (0x00018a8c) list_double_graphic_pane_vc_g

0xc9a5,	// (0x000159aa) list_double_graphic_pane_vc_t1_ParamLimits

0xc9a5,	// (0x000159aa) list_double_graphic_pane_vc_t1

0xc8e6,	// (0x000158eb) list_double_graphic_pane_vc_t2_ParamLimits

0xc8e6,	// (0x000158eb) list_double_graphic_pane_vc_t2

0x0001,

0xfa8e,	// (0x00018a93) list_double_graphic_pane_vc_t_ParamLimits

0xfa8e,	// (0x00018a93) list_double_graphic_pane_vc_t

0x613e,	// (0x0000f143) aid_size_cell_fastswap

0x6146,	// (0x0000f14b) aid_size_cell_touch_ParamLimits

0x6146,	// (0x0000f14b) aid_size_cell_touch

0x63ab,	// (0x0000f3b0) popup_fast_swap_wide_window_ParamLimits

0x63ab,	// (0x0000f3b0) popup_fast_swap_wide_window

0x64a1,	// (0x0000f4a6) touch_pane_ParamLimits

0x64a1,	// (0x0000f4a6) touch_pane

0x8b8d,	// (0x00011b92) button_value_adjust_pane_cp2

0x8b8d,	// (0x00011b92) button_value_adjust_pane_cp4

0x8bad,	// (0x00011bb2) form_field_data_pane_cp2

0x8bcc,	// (0x00011bd1) form_field_data_wide_pane_cp2

0x925a,	// (0x0001225f) bg_scroll_pane_ParamLimits

0x672d,	// (0x0000f732) scroll_handle_pane_ParamLimits

0x6741,	// (0x0000f746) scroll_sc2_down_pane_ParamLimits

0x6741,	// (0x0000f746) scroll_sc2_down_pane

0x928b,	// (0x00012290) scroll_sc2_up_pane_ParamLimits

0x928b,	// (0x00012290) scroll_sc2_up_pane

0xcdf2,	// (0x00015df7) grid_wheel_folder_pane_g1_ParamLimits

0xcdf2,	// (0x00015df7) grid_wheel_folder_pane_g1

0x6906,	// (0x0000f90b) clock_nsta_pane_cp2_ParamLimits

0x6906,	// (0x0000f90b) clock_nsta_pane_cp2

0x9ab8,	// (0x00012abd) listscroll_midp_pane_ParamLimits

0x9ac4,	// (0x00012ac9) midp_canvas_pane

0x9daa,	// (0x00012daf) nsta_clock_indic_pane

0x9e08,	// (0x00012e0d) listscroll_form_pane_vc

0x9e24,	// (0x00012e29) listscroll_set_pane_vc_ParamLimits

0x9e24,	// (0x00012e29) listscroll_set_pane_vc

0xa4b8,	// (0x000134bd) clock_nsta_pane

0xa52d,	// (0x00013532) indicator_nsta_pane

0xa804,	// (0x00013809) bg_popup_sub_pane_cp2_ParamLimits

0xa818,	// (0x0001381d) find_pane_cp2_ParamLimits

0xa818,	// (0x0001381d) find_pane_cp2

0xa82e,	// (0x00013833) grid_toobar_pane_ParamLimits

0xa9d6,	// (0x000139db) list_form_gen_pane_vc_ParamLimits

0xa9d6,	// (0x000139db) list_form_gen_pane_vc

0xa9ec,	// (0x000139f1) scroll_pane_cp8_vc_ParamLimits

0xa9ec,	// (0x000139f1) scroll_pane_cp8_vc

0xaa68,	// (0x00013a6d) data_form_wide_pane_vc_ParamLimits

0xaa68,	// (0x00013a6d) data_form_wide_pane_vc

0xaa74,	// (0x00013a79) form_field_data_wide_pane_vc_g1

0xaa7c,	// (0x00013a81) form_field_data_wide_pane_vc_t1_ParamLimits

0xaa7c,	// (0x00013a81) form_field_data_wide_pane_vc_t1

0x8c65,	// (0x00011c6a) input_focus_pane_cp6_vc_ParamLimits

0x8c65,	// (0x00011c6a) input_focus_pane_cp6_vc

0xade5,	// (0x00013dea) list_midp_pane_ParamLimits

0xadf1,	// (0x00013df6) scroll_pane_cp16_ParamLimits

0xadf1,	// (0x00013df6) scroll_pane_cp16

0xae3f,	// (0x00013e44) button_value_adjust_pane_ParamLimits

0xae3f,	// (0x00013e44) button_value_adjust_pane

0xbde6,	// (0x00014deb) button_value_adjust_pane_cp6_ParamLimits

0xbde6,	// (0x00014deb) button_value_adjust_pane_cp6

0xbf08,	// (0x00014f0d) settings_code_pane_cp_ParamLimits

0xbf08,	// (0x00014f0d) settings_code_pane_cp

0x7da2,	// (0x00010da7) cell_touch_pane_g1

0x7da2,	// (0x00010da7) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x0001871f) cell_touch_pane_g

0xc595,	// (0x0001559a) cell_touch_pane_cp_ParamLimits

0xc595,	// (0x0001559a) cell_touch_pane_cp

0xc5a5,	// (0x000155aa) cell_touch_pane_ParamLimits

0xc5a5,	// (0x000155aa) cell_touch_pane

0x7da2,	// (0x00010da7) scroll_sc2_down_pane_g1

0x7da2,	// (0x00010da7) scroll_sc2_up_pane_g1

0x7dac,	// (0x00010db1) bg_set_opt_pane_cp4_vc

0xc5cb,	// (0x000155d0) list_set_graphic_pane_vc_g1_ParamLimits

0xc5cb,	// (0x000155d0) list_set_graphic_pane_vc_g1

0xc5d7,	// (0x000155dc) list_set_graphic_pane_vc_g2_ParamLimits

0xc5d7,	// (0x000155dc) list_set_graphic_pane_vc_g2

0x0001,

0xfa04,	// (0x00018a09) list_set_graphic_pane_vc_g_ParamLimits

0xfa04,	// (0x00018a09) list_set_graphic_pane_vc_g

0xc5e3,	// (0x000155e8) text_primary_small_cp13_vc_ParamLimits

0xc5e3,	// (0x000155e8) text_primary_small_cp13_vc

0xc5fb,	// (0x00015600) list_set_graphic_pane_vc_ParamLimits

0xc5fb,	// (0x00015600) list_set_graphic_pane_vc

0x7dac,	// (0x00010db1) input_focus_pane_cp2_vc

0x7da2,	// (0x00010da7) setting_code_pane_vc_g1

0xc60f,	// (0x00015614) setting_code_pane_vc_t1

0xc61d,	// (0x00015622) set_text_pane_vc_t1_ParamLimits

0xc61d,	// (0x00015622) set_text_pane_vc_t1

0x7dac,	// (0x00010db1) input_focus_pane_cp1_vc

0xc63c,	// (0x00015641) list_set_text_pane_vc

0x7da2,	// (0x00010da7) setting_text_pane_vc_g1

0x7dac,	// (0x00010db1) bg_set_opt_pane_cp2_vc

0xc646,	// (0x0001564b) setting_slider_graphic_pane_vc_g1

0xc64e,	// (0x00015653) setting_slider_graphic_pane_vc_t1

0xc65c,	// (0x00015661) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa09,	// (0x00018a0e) setting_slider_graphic_pane_vc_t

0xc66a,	// (0x0001566f) slider_set_pane_cp_vc

0xc672,	// (0x00015677) slider_set_pane_vc_g1

0xc67b,	// (0x00015680) slider_set_pane_vc_g2

0x0006,

0xfa0e,	// (0x00018a13) slider_set_pane_vc_g

0x8da1,	// (0x00011da6) set_opt_bg_pane_g1_copy1

0x8da9,	// (0x00011dae) set_opt_bg_pane_g2_copy1

0xc6a7,	// (0x000156ac) set_opt_bg_pane_g3_copy1

0x8db9,	// (0x00011dbe) set_opt_bg_pane_g4_copy1

0x8dc1,	// (0x00011dc6) set_opt_bg_pane_g5_copy1

0x8dc9,	// (0x00011dce) set_opt_bg_pane_g6_copy1

0xc6af,	// (0x000156b4) set_opt_bg_pane_g7_copy1

0xc6b9,	// (0x000156be) set_opt_bg_pane_g8_copy1

0xc6c1,	// (0x000156c6) set_opt_bg_pane_g9_copy1

0x7dac,	// (0x00010db1) bg_set_opt_pane_cp_vc

0xc6c9,	// (0x000156ce) setting_slider_pane_vc_t1

0xc64e,	// (0x00015653) setting_slider_pane_vc_t2

0xc65c,	// (0x00015661) setting_slider_pane_vc_t3

0x0002,

0xfa1d,	// (0x00018a22) setting_slider_pane_vc_t

0xc66a,	// (0x0001566f) slider_set_pane_vc

0x6d18,	// (0x0000fd1d) volume_set_pane_vc_g1

0x7013,	// (0x00010018) volume_set_pane_vc_g2

0x701c,	// (0x00010021) volume_set_pane_vc_g3

0x7025,	// (0x0001002a) volume_set_pane_vc_g4

0x702e,	// (0x00010033) volume_set_pane_vc_g5

0x7037,	// (0x0001003c) volume_set_pane_vc_g6

0x7040,	// (0x00010045) volume_set_pane_vc_g7

0x7049,	// (0x0001004e) volume_set_pane_vc_g8

0x7052,	// (0x00010057) volume_set_pane_vc_g9

0x705b,	// (0x00010060) volume_set_pane_vc_g10

0x0009,

0xfa24,	// (0x00018a29) volume_set_pane_vc_g

0xc6d8,	// (0x000156dd) volume_set_pane_vc

0xc6e0,	// (0x000156e5) button_value_adjust_pane_cp1_vc

0xc6ea,	// (0x000156ef) list_highlight_pane_cp2_vc

0xc6f3,	// (0x000156f8) list_set_pane_vc_ParamLimits

0xc6f3,	// (0x000156f8) list_set_pane_vc

0xc745,	// (0x0001574a) main_pane_set_vc_t1_ParamLimits

0xc745,	// (0x0001574a) main_pane_set_vc_t1

0xc75a,	// (0x0001575f) main_pane_set_vc_t2_ParamLimits

0xc75a,	// (0x0001575f) main_pane_set_vc_t2

0xc76c,	// (0x00015771) main_pane_set_vc_t3_ParamLimits

0xc76c,	// (0x00015771) main_pane_set_vc_t3

0xc77e,	// (0x00015783) main_pane_set_vc_t4_ParamLimits

0xc77e,	// (0x00015783) main_pane_set_vc_t4

0x0003,

0xfa39,	// (0x00018a3e) main_pane_set_vc_t_ParamLimits

0xfa39,	// (0x00018a3e) main_pane_set_vc_t

0xc790,	// (0x00015795) setting_code_pane_vc_ParamLimits

0xc790,	// (0x00015795) setting_code_pane_vc

0xc79f,	// (0x000157a4) setting_slider_graphic_pane_vc

0xc79f,	// (0x000157a4) setting_slider_pane_vc

0xc79f,	// (0x000157a4) setting_text_pane_vc

0xc79f,	// (0x000157a4) setting_volume_pane_vc

0xc7a7,	// (0x000157ac) scroll_pane_cp121_vc

0x8b7b,	// (0x00011b80) set_content_pane_vc

0xc9b7,	// (0x000159bc) button_value_adjust_pane_g1

0xc9c0,	// (0x000159c5) button_value_adjust_pane_g2

0x0001,

0xfa93,	// (0x00018a98) button_value_adjust_pane_g

0xc9c9,	// (0x000159ce) form_field_slider_wide_pane_vc_t1_ParamLimits

0xc9c9,	// (0x000159ce) form_field_slider_wide_pane_vc_t1

0xc9dd,	// (0x000159e2) form_field_slider_wide_pane_vc_t2_ParamLimits

0xc9dd,	// (0x000159e2) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa98,	// (0x00018a9d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa98,	// (0x00018a9d) form_field_slider_wide_pane_vc_t

0x8121,	// (0x00011126) input_focus_pane_cp10_vc_ParamLimits

0x8121,	// (0x00011126) input_focus_pane_cp10_vc

0xc9ef,	// (0x000159f4) slider_cont_pane_cp1_vc_ParamLimits

0xc9ef,	// (0x000159f4) slider_cont_pane_cp1_vc

0xc672,	// (0x00015677) slider_form_pane_g1_cp2

0xc67b,	// (0x00015680) slider_form_pane_g2_cp2

0xca08,	// (0x00015a0d) form_field_slider_pane_vc_t3

0xca16,	// (0x00015a1b) form_field_slider_pane_vc_t4

0xca24,	// (0x00015a29) slider_form_pane_vc_ParamLimits

0xca24,	// (0x00015a29) slider_form_pane_vc

0xca31,	// (0x00015a36) form_field_slider_pane_vc_t1_ParamLimits

0xca31,	// (0x00015a36) form_field_slider_pane_vc_t1

0xc9dd,	// (0x000159e2) form_field_slider_pane_vc_t2_ParamLimits

0xc9dd,	// (0x000159e2) form_field_slider_pane_vc_t2

0x0001,

0xfaa8,	// (0x00018aad) form_field_slider_pane_vc_t_ParamLimits

0xfaa8,	// (0x00018aad) form_field_slider_pane_vc_t

0x8121,	// (0x00011126) input_focus_pane_cp9_vc_ParamLimits

0x8121,	// (0x00011126) input_focus_pane_cp9_vc

0xca4d,	// (0x00015a52) slider_cont_pane_vc_ParamLimits

0xca4d,	// (0x00015a52) slider_cont_pane_vc

0xca5f,	// (0x00015a64) list_form_graphic_pane_cp_vc_ParamLimits

0xca5f,	// (0x00015a64) list_form_graphic_pane_cp_vc

0xaa74,	// (0x00013a79) form_field_popup_wide_pane_vc_g1

0xca74,	// (0x00015a79) form_field_popup_wide_pane_vc_t1_ParamLimits

0xca74,	// (0x00015a79) form_field_popup_wide_pane_vc_t1

0x8c65,	// (0x00011c6a) input_focus_pane_cp8_vc_ParamLimits

0x8c65,	// (0x00011c6a) input_focus_pane_cp8_vc

0xca8b,	// (0x00015a90) list_form_wide_pane_vc_ParamLimits

0xca8b,	// (0x00015a90) list_form_wide_pane_vc

0xca97,	// (0x00015a9c) list_form_graphic_pane_vc_g1

0xca9f,	// (0x00015aa4) list_form_graphic_pane_vc_t1_ParamLimits

0xca9f,	// (0x00015aa4) list_form_graphic_pane_vc_t1

0x7e8c,	// (0x00010e91) list_highlight_pane_cp5_vc_ParamLimits

0x7e8c,	// (0x00010e91) list_highlight_pane_cp5_vc

0xcabb,	// (0x00015ac0) list_form_graphic_pane_vc_ParamLimits

0xcabb,	// (0x00015ac0) list_form_graphic_pane_vc

0xaa74,	// (0x00013a79) form_field_popup_pane_vc_g1

0xcad1,	// (0x00015ad6) form_field_popup_pane_vc_t1_ParamLimits

0xcad1,	// (0x00015ad6) form_field_popup_pane_vc_t1

0x8c65,	// (0x00011c6a) input_focus_pane_cp7_vc_ParamLimits

0x8c65,	// (0x00011c6a) input_focus_pane_cp7_vc

0xcae8,	// (0x00015aed) list_form_pane_vc_ParamLimits

0xcae8,	// (0x00015aed) list_form_pane_vc

0xcaf4,	// (0x00015af9) data_form_pane_vc_t1_ParamLimits

0xcaf4,	// (0x00015af9) data_form_pane_vc_t1

0x8da1,	// (0x00011da6) input_focus_pane_vc_g1

0x8da9,	// (0x00011dae) input_focus_pane_vc_g2

0x8db1,	// (0x00011db6) input_focus_pane_vc_g3

0x8db9,	// (0x00011dbe) input_focus_pane_vc_g4

0x8dc1,	// (0x00011dc6) input_focus_pane_vc_g5

0x8dc9,	// (0x00011dce) input_focus_pane_vc_g6

0x8dd1,	// (0x00011dd6) input_focus_pane_vc_g7

0x8dd9,	// (0x00011dde) input_focus_pane_vc_g8

0x8de1,	// (0x00011de6) input_focus_pane_vc_g9

0x7da2,	// (0x00010da7) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x000186a8) input_focus_pane_vc_g

0xaa68,	// (0x00013a6d) data_form_pane_vc_ParamLimits

0xaa68,	// (0x00013a6d) data_form_pane_vc

0xaa74,	// (0x00013a79) form_field_data_pane_vc_g1

0xcb0f,	// (0x00015b14) form_field_data_pane_vc_t1_ParamLimits

0xcb0f,	// (0x00015b14) form_field_data_pane_vc_t1

0x8c65,	// (0x00011c6a) input_focus_pane_vc_ParamLimits

0x8c65,	// (0x00011c6a) input_focus_pane_vc

0xcb29,	// (0x00015b2e) button_value_adjust_pane_cp3_vc

0xcb31,	// (0x00015b36) button_value_adjust_pane_cp5_vc

0xcb39,	// (0x00015b3e) form_field_data_pane_vc_ParamLimits

0xcb39,	// (0x00015b3e) form_field_data_pane_vc

0xcb50,	// (0x00015b55) form_field_data_pane_vc_cp2

0xcb58,	// (0x00015b5d) form_field_data_wide_pane_vc_ParamLimits

0xcb58,	// (0x00015b5d) form_field_data_wide_pane_vc

0xcb6e,	// (0x00015b73) form_field_data_wide_pane_vc_cp2

0xcb76,	// (0x00015b7b) form_field_popup_pane_vc_ParamLimits

0xcb76,	// (0x00015b7b) form_field_popup_pane_vc

0xcb8d,	// (0x00015b92) form_field_popup_wide_pane_vc_ParamLimits

0xcb8d,	// (0x00015b92) form_field_popup_wide_pane_vc

0xcba3,	// (0x00015ba8) form_field_slider_pane_vc_ParamLimits

0xcba3,	// (0x00015ba8) form_field_slider_pane_vc

0xcbb6,	// (0x00015bbb) form_field_slider_wide_pane_vc_ParamLimits

0xcbb6,	// (0x00015bbb) form_field_slider_wide_pane_vc

0xcbc9,	// (0x00015bce) grid_touch_1_pane_ParamLimits

0xcbc9,	// (0x00015bce) grid_touch_1_pane

0xcbd5,	// (0x00015bda) grid_touch_2_pane_ParamLimits

0xcbd5,	// (0x00015bda) grid_touch_2_pane

0x9d75,	// (0x00012d7a) touch_pane_g1_ParamLimits

0x9d75,	// (0x00012d7a) touch_pane_g1

0xcbed,	// (0x00015bf2) cell_app_pane_cp_wide_ParamLimits

0xcbed,	// (0x00015bf2) cell_app_pane_cp_wide

0xcbfe,	// (0x00015c03) grid_popup_fast_wide_pane_ParamLimits

0xcbfe,	// (0x00015c03) grid_popup_fast_wide_pane

0xcc12,	// (0x00015c17) scroll_pane_cp19_ParamLimits

0xcc12,	// (0x00015c17) scroll_pane_cp19

0x7dac,	// (0x00010db1) bg_popup_window_pane_cp20

0xcc26,	// (0x00015c2b) listscroll_popup_fast_wide_pane

0x7e8c,	// (0x00010e91) grid_indicator_nsta_pane

0xcc2e,	// (0x00015c33) clock_nsta_pane_g1

0xcc37,	// (0x00015c3c) clock_nsta_pane_t1

0xcc53,	// (0x00015c58) cell_indicator_nsta_pane_ParamLimits

0xcc53,	// (0x00015c58) cell_indicator_nsta_pane

0xcc8b,	// (0x00015c90) cell_indicator_nsta_pane_g1

0xcc99,	// (0x00015c9e) cell_indicator_nsta_pane_g2

0x0001,

0xfab2,	// (0x00018ab7) cell_indicator_nsta_pane_g

0xccaf,	// (0x00015cb4) clock_nsta_pane_cp

0xccb7,	// (0x00015cbc) indicator_nsta_pane_cp

0xccc0,	// (0x00015cc5) nsta_clock_indic_pane_g1

0x7f6f,	// (0x00010f74) grid_indicator_pane

0x937d,	// (0x00012382) scroll_pane_cp29

0x6855,	// (0x0000f85a) indicator_nsta_pane_cp2_ParamLimits

0x6855,	// (0x0000f85a) indicator_nsta_pane_cp2

0x7e8c,	// (0x00010e91) main_apps_wheel_pane

0xaccc,	// (0x00013cd1) form_midp_field_text_pane_ParamLimits

0xae11,	// (0x00013e16) scroll_bar_cp050_ParamLimits

0xcd29,	// (0x00015d2e) cell_indicator_pane_ParamLimits

0xcd29,	// (0x00015d2e) cell_indicator_pane

0xcd46,	// (0x00015d4b) cell_indicator_pane_g1

0xcd50,	// (0x00015d55) grid_wheel_folder_pane_ParamLimits

0xcd50,	// (0x00015d55) grid_wheel_folder_pane

0xcd66,	// (0x00015d6b) list_wheel_apps_pane_ParamLimits

0xcd66,	// (0x00015d6b) list_wheel_apps_pane

0xcd77,	// (0x00015d7c) main_apps_wheel_pane_g1_ParamLimits

0xcd77,	// (0x00015d7c) main_apps_wheel_pane_g1

0xcd8b,	// (0x00015d90) main_apps_wheel_pane_g2_ParamLimits

0xcd8b,	// (0x00015d90) main_apps_wheel_pane_g2

0x0001,

0xface,	// (0x00018ad3) main_apps_wheel_pane_g_ParamLimits

0xface,	// (0x00018ad3) main_apps_wheel_pane_g

0xcda3,	// (0x00015da8) main_apps_wheel_pane_t1_ParamLimits

0xcda3,	// (0x00015da8) main_apps_wheel_pane_t1

0xcdc6,	// (0x00015dcb) list_wheel_apps_pane_g1

0xcdce,	// (0x00015dd3) list_wheel_apps_pane_g2

0xcdd6,	// (0x00015ddb) list_wheel_apps_pane_g3

0xcdde,	// (0x00015de3) list_wheel_apps_pane_g4

0xcde8,	// (0x00015ded) list_wheel_apps_pane_g5

0x0004,

0xfad3,	// (0x00018ad8) list_wheel_apps_pane_g

0x992e,	// (0x00012933) navi_icon_text_pane

0xa3e7,	// (0x000133ec) aid_fill_nsta

0xce0b,	// (0x00015e10) navi_icon_text_pane_g1

0xce1a,	// (0x00015e1f) navi_icon_text_pane_t1

0x97ca,	// (0x000127cf) list_set_graphic_pane_t1_ParamLimits

0x97ca,	// (0x000127cf) list_set_graphic_pane_t1

0xb553,	// (0x00014558) popup_midp_note_alarm_window_t6_ParamLimits

0xb553,	// (0x00014558) popup_midp_note_alarm_window_t6

0xb565,	// (0x0001456a) popup_midp_note_alarm_window_t7_ParamLimits

0xb565,	// (0x0001456a) popup_midp_note_alarm_window_t7

0xb577,	// (0x0001457c) popup_midp_note_alarm_window_t8_ParamLimits

0xb577,	// (0x0001457c) popup_midp_note_alarm_window_t8

0xb589,	// (0x0001458e) popup_midp_note_alarm_window_t9_ParamLimits

0xb589,	// (0x0001458e) popup_midp_note_alarm_window_t9

0xb59b,	// (0x000145a0) popup_midp_note_alarm_window_t10_ParamLimits

0xb59b,	// (0x000145a0) popup_midp_note_alarm_window_t10

0xb5ad,	// (0x000145b2) popup_midp_note_alarm_window_t11_ParamLimits

0xb5ad,	// (0x000145b2) popup_midp_note_alarm_window_t11

0xb5bf,	// (0x000145c4) scroll_pane_cp17_ParamLimits

0xb5bf,	// (0x000145c4) scroll_pane_cp17

0x6d18,	// (0x0000fd1d) volume_small_pane_cp_g1

0x7064,	// (0x00010069) volume_small_pane_cp_g2

0x706d,	// (0x00010072) volume_small_pane_cp_g3

0x7076,	// (0x0001007b) volume_small_pane_cp_g4

0x707f,	// (0x00010084) volume_small_pane_cp_g5

0x7088,	// (0x0001008d) volume_small_pane_cp_g6

0x7091,	// (0x00010096) volume_small_pane_cp_g7

0x709a,	// (0x0001009f) volume_small_pane_cp_g8

0x70a3,	// (0x000100a8) volume_small_pane_cp_g9

0x70ac,	// (0x000100b1) volume_small_pane_cp_g10

0x9b8f,	// (0x00012b94) midp_ticker_pane_g1_ParamLimits

0x9b9b,	// (0x00012ba0) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x00018770) midp_ticker_pane_g_ParamLimits

0x9ba7,	// (0x00012bac) midp_ticker_pane_t1_ParamLimits

0xa3fd,	// (0x00013402) aid_fill_nsta_2

0xadfd,	// (0x00013e02) list_form2_midp_pane

0xbf86,	// (0x00014f8b) midp_editing_number_pane_ParamLimits

0xbf95,	// (0x00014f9a) midp_ticker_pane_ParamLimits

0xce2f,	// (0x00015e34) form2_midp_field_pane

0xce53,	// (0x00015e58) scroll_pane_cp51

0xce73,	// (0x00015e78) form2_midp_button_pane_ParamLimits

0xce73,	// (0x00015e78) form2_midp_button_pane

0xce85,	// (0x00015e8a) form2_midp_content_pane_ParamLimits

0xce85,	// (0x00015e8a) form2_midp_content_pane

0xce9f,	// (0x00015ea4) form2_midp_field_choice_group_pane

0xcea7,	// (0x00015eac) form2_midp_field_pane_g1

0xceaf,	// (0x00015eb4) form2_midp_field_pane_g2

0xceb7,	// (0x00015ebc) form2_midp_field_pane_g3

0xcebf,	// (0x00015ec4) form2_midp_field_pane_g4

0x0003,

0xfaf8,	// (0x00018afd) form2_midp_field_pane_g

0xcec7,	// (0x00015ecc) form2_midp_gauge_slider_pane

0xcecf,	// (0x00015ed4) form2_midp_gauge_wait_pane

0xced7,	// (0x00015edc) form2_midp_image_pane_ParamLimits

0xced7,	// (0x00015edc) form2_midp_image_pane

0xcef2,	// (0x00015ef7) form2_midp_label_pane_ParamLimits

0xcef2,	// (0x00015ef7) form2_midp_label_pane

0xcf0b,	// (0x00015f10) form2_midp_label_pane_cp_ParamLimits

0xcf0b,	// (0x00015f10) form2_midp_label_pane_cp

0xcf2c,	// (0x00015f31) form2_midp_string_pane_ParamLimits

0xcf2c,	// (0x00015f31) form2_midp_string_pane

0xcf3e,	// (0x00015f43) form2_midp_text_pane_ParamLimits

0xcf3e,	// (0x00015f43) form2_midp_text_pane

0xcf57,	// (0x00015f5c) form2_midp_time_pane

0xcf67,	// (0x00015f6c) input_focus_pane_cp51_ParamLimits

0xcf67,	// (0x00015f6c) input_focus_pane_cp51

0xcf7f,	// (0x00015f84) form2_midp_label_pane_t1_ParamLimits

0xcf7f,	// (0x00015f84) form2_midp_label_pane_t1

0xcfbf,	// (0x00015fc4) form2_mdip_text_pane_t1_ParamLimits

0xcfbf,	// (0x00015fc4) form2_mdip_text_pane_t1

0xcfdb,	// (0x00015fe0) form2_midp_time_pane_t1

0xcff6,	// (0x00015ffb) form2_midp_gauge_slider_pane_t1

0xd008,	// (0x0001600d) form2_midp_gauge_slider_pane_t2

0xd01a,	// (0x0001601f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb01,	// (0x00018b06) form2_midp_gauge_slider_pane_t

0xd02c,	// (0x00016031) form2_midp_slider_pane

0xd038,	// (0x0001603d) form2_midp_gauge_wait_pane_t1

0xd046,	// (0x0001604b) form2_midp_wait_pane_ParamLimits

0xd046,	// (0x0001604b) form2_midp_wait_pane

0xd071,	// (0x00016076) list_single_2graphic_pane_cp4_ParamLimits

0xd071,	// (0x00016076) list_single_2graphic_pane_cp4

0xaabf,	// (0x00013ac4) list_single_midp_graphic_pane_cp_ParamLimits

0xaabf,	// (0x00013ac4) list_single_midp_graphic_pane_cp

0x7dac,	// (0x00010db1) list_highlight_pane_cp20

0xd0a0,	// (0x000160a5) list_single_2graphic_pane_g1_cp4

0xc49a,	// (0x0001549f) list_single_2graphic_pane_g2_cp4

0xd0a8,	// (0x000160ad) list_single_2graphic_pane_t1_cp4

0x7e8c,	// (0x00010e91) list_highlight_pane_cp21

0xd0b7,	// (0x000160bc) list_single_midp_graphic_pane_g4_cp

0xd0c6,	// (0x000160cb) list_single_midp_graphic_pane_t1_cp

0xd0db,	// (0x000160e0) form2_mdip_string_pane_t1_ParamLimits

0xd0db,	// (0x000160e0) form2_mdip_string_pane_t1

0x7dac,	// (0x00010db1) bg_wml_button_pane_cp2

0x7da2,	// (0x00010da7) form2_midp_image_pane_g1

0x893f,	// (0x00011944) list_double_large_graphic_pane_g5_ParamLimits

0x893f,	// (0x00011944) list_double_large_graphic_pane_g5

0x9ab8,	// (0x00012abd) midp_form_pane_ParamLimits

0x7e8c,	// (0x00010e91) main_apps_wheel_pane_ParamLimits

0xa1db,	// (0x000131e0) popup_preview_window_ParamLimits

0xa1db,	// (0x000131e0) popup_preview_window

0xa38c,	// (0x00013391) popup_touch_info_window_ParamLimits

0xa38c,	// (0x00013391) popup_touch_info_window

0xa3aa,	// (0x000133af) popup_touch_menu_window_ParamLimits

0xa3aa,	// (0x000133af) popup_touch_menu_window

0x7d98,	// (0x00010d9d) bg_popup_sub_pane_cp6

0xd215,	// (0x0001621a) list_touch_menu_pane

0xd21d,	// (0x00016222) list_single_touch_menu_pane_ParamLimits

0xd21d,	// (0x00016222) list_single_touch_menu_pane

0xd232,	// (0x00016237) list_single_touch_menu_pane_t1

0x7e8c,	// (0x00010e91) bg_popup_sub_pane_cp7_ParamLimits

0x7e8c,	// (0x00010e91) bg_popup_sub_pane_cp7

0xd240,	// (0x00016245) heading_sub_pane

0xd248,	// (0x0001624d) list_touch_info_pane_ParamLimits

0xd248,	// (0x0001624d) list_touch_info_pane

0xd257,	// (0x0001625c) list_single_touch_info_pane_ParamLimits

0xd257,	// (0x0001625c) list_single_touch_info_pane

0xd269,	// (0x0001626e) list_single_touch_info_pane_t1

0xd277,	// (0x0001627c) list_single_touch_info_pane_t2

0x0001,

0xfb0f,	// (0x00018b14) list_single_touch_info_pane_t

0x9ab0,	// (0x00012ab5) bg_popup_heading_pane_cp

0xd285,	// (0x0001628a) heading_sub_pane_t1

0xaa02,	// (0x00013a07) bg_popup_preview_window_pane_cp_ParamLimits

0xaa02,	// (0x00013a07) bg_popup_preview_window_pane_cp

0xd240,	// (0x00016245) heading_preview_pane

0xd248,	// (0x0001624d) list_preview_pane_ParamLimits

0xd248,	// (0x0001624d) list_preview_pane

0xd293,	// (0x00016298) popup_preview_window_g1

0xd257,	// (0x0001625c) list_single_preview_pane_ParamLimits

0xd257,	// (0x0001625c) list_single_preview_pane

0xd29b,	// (0x000162a0) list_single_preview_pane_g1

0xd2a3,	// (0x000162a8) list_single_preview_pane_t1

0xd269,	// (0x0001626e) list_single_preview_pane_t2

0x0001,

0xfb14,	// (0x00018b19) list_single_preview_pane_t

0xd2b1,	// (0x000162b6) bg_popup_heading_pane_cp2_ParamLimits

0xd2b1,	// (0x000162b6) bg_popup_heading_pane_cp2

0xd2c7,	// (0x000162cc) heading_preview_pane_g1

0xd2cf,	// (0x000162d4) heading_preview_pane_t1_ParamLimits

0xd2cf,	// (0x000162d4) heading_preview_pane_t1

0x7f92,	// (0x00010f97) soft_indicator_pane_t1_ParamLimits

0x866c,	// (0x00011671) scroll_pane_ParamLimits

0x9279,	// (0x0001227e) scroll_sc2_left_pane

0x9282,	// (0x00012287) scroll_sc2_right_pane

0x92a1,	// (0x000122a6) scroll_bg_pane_g1_ParamLimits

0x92b6,	// (0x000122bb) scroll_bg_pane_g2_ParamLimits

0x92ce,	// (0x000122d3) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x000186ff) scroll_bg_pane_g_ParamLimits

0x92a1,	// (0x000122a6) scroll_handle_pane_g1_ParamLimits

0x92f0,	// (0x000122f5) scroll_handle_pane_g2_ParamLimits

0x92ce,	// (0x000122d3) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x00018706) scroll_handle_pane_g_ParamLimits

0x9e66,	// (0x00012e6b) popup_choice_list_window_ParamLimits

0x9e66,	// (0x00012e6b) popup_choice_list_window

0xa810,	// (0x00013815) choice_list_pane

0xa8b4,	// (0x000138b9) cell_toolbar_pane_t1

0xa8dc,	// (0x000138e1) toolbar_button_pane_ParamLimits

0xba83,	// (0x00014a88) ai_gene_pane_1_t2_ParamLimits

0xba83,	// (0x00014a88) ai_gene_pane_1_t2

0x0001,

0xf91e,	// (0x00018923) ai_gene_pane_1_t_ParamLimits

0xf91e,	// (0x00018923) ai_gene_pane_1_t

0xd2ec,	// (0x000162f1) scroll_sc2_left_pane_g1

0xd2ec,	// (0x000162f1) scroll_sc2_right_pane_g1

0x9e36,	// (0x00012e3b) bg_popup_sub_pane_cp10

0xd2f6,	// (0x000162fb) list_choice_list_pane

0xd30d,	// (0x00016312) list_single_choice_list_pane_ParamLimits

0xd30d,	// (0x00016312) list_single_choice_list_pane

0xd321,	// (0x00016326) list_single_choice_list_pane_g1

0xd329,	// (0x0001632e) list_single_choice_list_pane_t1_ParamLimits

0xd329,	// (0x0001632e) list_single_choice_list_pane_t1

0xd33e,	// (0x00016343) choice_list_pane_g1

0xd346,	// (0x0001634b) choice_list_pane_t1

0x7d98,	// (0x00010d9d) input_focus_pane_cp11

0x9152,	// (0x00012157) title_pane_stacon_g2_ParamLimits

0x9152,	// (0x00012157) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x000186e5) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x000186e5) title_pane_stacon_g

0x9ab0,	// (0x00012ab5) cursor_press_pane

0x9f0c,	// (0x00012f11) popup_fep_hwr_window_ParamLimits

0x9f0c,	// (0x00012f11) popup_fep_hwr_window

0x9f84,	// (0x00012f89) popup_fep_vkb_window_ParamLimits

0x9f84,	// (0x00012f89) popup_fep_vkb_window

0xd354,	// (0x00016359) cursor_press_pane_g1

0x0002,

0xfb3d,	// (0x00018b42) fep_vkb_side_pane_g_ParamLimits

0x70ee,	// (0x000100f3) fep_hwr_candidate_pane_ParamLimits

0x70ee,	// (0x000100f3) fep_hwr_candidate_pane

0x7118,	// (0x0001011d) fep_hwr_side_pane_ParamLimits

0x7118,	// (0x0001011d) fep_hwr_side_pane

0x7138,	// (0x0001013d) fep_hwr_top_pane_ParamLimits

0x7138,	// (0x0001013d) fep_hwr_top_pane

0x7150,	// (0x00010155) fep_hwr_write_pane_ParamLimits

0x7150,	// (0x00010155) fep_hwr_write_pane

0xfb3d,	// (0x00018b42) fep_vkb_side_pane_g

0xd35c,	// (0x00016361) fep_hwr_top_pane_g1

0xd36e,	// (0x00016373) fep_hwr_top_pane_g2

0x718a,	// (0x0001018f) fep_hwr_top_pane_g3

0x0002,

0xfb19,	// (0x00018b1e) fep_hwr_top_pane_g

0x719f,	// (0x000101a4) fep_hwr_top_text_pane

0x9443,	// (0x00012448) fep_hwr_top_text_pane_g1

0xd3a4,	// (0x000163a9) fep_hwr_top_text_pane_t1

0x7295,	// (0x0001029a) fep_hwr_candidate_pane_g1

0xd5fe,	// (0x00016603) fep_vkb_keypad_pane_g3_ParamLimits

0xd5fe,	// (0x00016603) fep_vkb_keypad_pane_g3

0xd626,	// (0x0001662b) fep_vkb_keypad_pane_g4_ParamLimits

0xd626,	// (0x0001662b) fep_vkb_keypad_pane_g4

0xd695,	// (0x0001669a) fep_vkb_bottom_pane_g2_ParamLimits

0xd695,	// (0x0001669a) fep_vkb_bottom_pane_g2

0x0001,

0xfb44,	// (0x00018b49) fep_vkb_bottom_pane_g_ParamLimits

0xfb44,	// (0x00018b49) fep_vkb_bottom_pane_g

0xd2ec,	// (0x000162f1) cell_vkb_side_pane_g2

0x0001,

0xfb4e,	// (0x00018b53) cell_vkb_side_pane_g

0xd720,	// (0x00016725) cell_vkb_side_pane_t1

0xd72e,	// (0x00016733) cell_vkb_side_pane_t1_copy1

0xd2ec,	// (0x000162f1) bg_fep_vkb_candidate_pane_g2

0xd860,	// (0x00016865) cell_vkb_candidate_pane_ParamLimits

0xd3b2,	// (0x000163b7) aid_size_cell_vkb_ParamLimits

0xd3b2,	// (0x000163b7) aid_size_cell_vkb

0xd860,	// (0x00016865) cell_vkb_candidate_pane

0x72bc,	// (0x000102c1) bg_popup_fep_shadow_pane_g1

0xd440,	// (0x00016445) fep_vkb_bottom_pane_ParamLimits

0xd440,	// (0x00016445) fep_vkb_bottom_pane

0xd47d,	// (0x00016482) fep_vkb_candidate_pane_ParamLimits

0xd47d,	// (0x00016482) fep_vkb_candidate_pane

0xd499,	// (0x0001649e) fep_vkb_keypad_pane_ParamLimits

0xd499,	// (0x0001649e) fep_vkb_keypad_pane

0xd4df,	// (0x000164e4) fep_vkb_side_pane_ParamLimits

0xd4df,	// (0x000164e4) fep_vkb_side_pane

0xd51b,	// (0x00016520) fep_vkb_top_pane_ParamLimits

0xd51b,	// (0x00016520) fep_vkb_top_pane

0xd557,	// (0x0001655c) fep_vkb_top_pane_g1_ParamLimits

0xd557,	// (0x0001655c) fep_vkb_top_pane_g1

0xd566,	// (0x0001656b) fep_vkb_top_pane_g2_ParamLimits

0xd566,	// (0x0001656b) fep_vkb_top_pane_g2

0xd575,	// (0x0001657a) fep_vkb_top_pane_g3_ParamLimits

0xd575,	// (0x0001657a) fep_vkb_top_pane_g3

0x0003,

0xfb34,	// (0x00018b39) fep_vkb_top_pane_g_ParamLimits

0xfb34,	// (0x00018b39) fep_vkb_top_pane_g

0xd593,	// (0x00016598) fep_vkb_top_text_pane_ParamLimits

0xd593,	// (0x00016598) fep_vkb_top_text_pane

0xd5a4,	// (0x000165a9) fep_vkb_side_pane_g1_ParamLimits

0xd5a4,	// (0x000165a9) fep_vkb_side_pane_g1

0xd5ed,	// (0x000165f2) grid_vkb_side_pane_ParamLimits

0xd5ed,	// (0x000165f2) grid_vkb_side_pane

0x72c4,	// (0x000102c9) bg_popup_fep_shadow_pane_g2

0x72cd,	// (0x000102d2) bg_popup_fep_shadow_pane_g3

0x72d5,	// (0x000102da) bg_popup_fep_shadow_pane_g4

0x72de,	// (0x000102e3) bg_popup_fep_shadow_pane_g5

0x72e8,	// (0x000102ed) bg_popup_fep_shadow_pane_g6

0x72f0,	// (0x000102f5) bg_popup_fep_shadow_pane_g7

0x8db9,	// (0x00011dbe) bg_popup_fep_shadow_pane_g8

0xd644,	// (0x00016649) grid_vkb_keypad_number_pane_ParamLimits

0xd644,	// (0x00016649) grid_vkb_keypad_number_pane

0xd654,	// (0x00016659) grid_vkb_keypad_pane_ParamLimits

0xd654,	// (0x00016659) grid_vkb_keypad_pane

0xd67a,	// (0x0001667f) fep_vkb_bottom_pane_g1_ParamLimits

0xd67a,	// (0x0001667f) fep_vkb_bottom_pane_g1

0xd6a3,	// (0x000166a8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xd6a3,	// (0x000166a8) grid_vkb_keypad_bottom_left_pane

0xd6b8,	// (0x000166bd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xd6b8,	// (0x000166bd) grid_vkb_keypad_bottom_right_pane

0xd6cd,	// (0x000166d2) fep_vkb_top_text_pane_g1

0xd6e8,	// (0x000166ed) fep_vkb_top_text_pane_t1

0xd6fd,	// (0x00016702) cell_vkb_side_pane_ParamLimits

0xd6fd,	// (0x00016702) cell_vkb_side_pane

0xd2ec,	// (0x000162f1) cell_vkb_side_pane_g1

0xd73c,	// (0x00016741) cell_vkb_keypad_pane_ParamLimits

0xd73c,	// (0x00016741) cell_vkb_keypad_pane

0xd7b7,	// (0x000167bc) cell_vkb_keypad_pane_g1

0x0008,

0xfb61,	// (0x00018b66) bg_popup_fep_shadow_pane_g

0x7302,	// (0x00010307) cell_hwr_side_pane_g1

0x7302,	// (0x00010307) cell_hwr_side_pane_g2

0xd7c1,	// (0x000167c6) cell_vkb_keypad_pane_t1

0xd7cf,	// (0x000167d4) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd7cf,	// (0x000167d4) cell_vkb_keypad_bottom_left_pane

0xd7ec,	// (0x000167f1) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd7ec,	// (0x000167f1) cell_vkb_keypad_bottom_right_pane

0xd2ec,	// (0x000162f1) cell_vkb_keypad_bottom_left_pane_g1

0xd2ec,	// (0x000162f1) cell_vkb_keypad_bottom_right_pane_g1

0xd825,	// (0x0001682a) cell_vkb_keypad_number_pane_ParamLimits

0xd825,	// (0x0001682a) cell_vkb_keypad_number_pane

0xd844,	// (0x00016849) cell_vkb_keypad_number_pane_g1

0xd84e,	// (0x00016853) cell_vkb_keypad_number_pane_g2

0xd857,	// (0x0001685c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb53,	// (0x00018b58) cell_vkb_keypad_number_pane_g

0xd7c1,	// (0x000167c6) cell_vkb_keypad_number_pane_t1

0xd87d,	// (0x00016882) fep_vkb_candidate_pane_g1

0x0001,

0xfb74,	// (0x00018b79) cell_hwr_side_pane_g

0xd896,	// (0x0001689b) cell_hwr_side_pane_t1

0x730c,	// (0x00010311) cell_hwr_side_pane_t1_copy1

0x731a,	// (0x0001031f) cell_hwr_candidate_pane_g1

0x7349,	// (0x0001034e) cell_hwr_candidate_pane_t1

0xd2ec,	// (0x000162f1) cell_vkb_candidate_pane_g2

0xd92a,	// (0x0001692f) cell_vkb_candidate_pane_t1

0x70b5,	// (0x000100ba) bg_popup_fep_shadow_pane_ParamLimits

0x70b5,	// (0x000100ba) bg_popup_fep_shadow_pane

0x716a,	// (0x0001016f) bg_fep_hwr_top_pane_g4

0xd380,	// (0x00016385) bg_hwr_side_pane_g1_ParamLimits

0xd380,	// (0x00016385) bg_hwr_side_pane_g1

0x71db,	// (0x000101e0) cell_hwr_side_pane_ParamLimits

0x71db,	// (0x000101e0) cell_hwr_side_pane

0x7216,	// (0x0001021b) fep_hwr_write_pane_g1_ParamLimits

0x7216,	// (0x0001021b) fep_hwr_write_pane_g1

0x7223,	// (0x00010228) fep_hwr_write_pane_g2_ParamLimits

0x7223,	// (0x00010228) fep_hwr_write_pane_g2

0x7230,	// (0x00010235) fep_hwr_write_pane_g3_ParamLimits

0x7230,	// (0x00010235) fep_hwr_write_pane_g3

0x723e,	// (0x00010243) fep_hwr_write_pane_g4_ParamLimits

0x723e,	// (0x00010243) fep_hwr_write_pane_g4

0x0005,

0xfb20,	// (0x00018b25) fep_hwr_write_pane_g_ParamLimits

0xfb20,	// (0x00018b25) fep_hwr_write_pane_g

0x716a,	// (0x0001016f) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x716a,	// (0x0001016f) bg_fep_hwr_candidate_pane_g2

0x7253,	// (0x00010258) cell_hwr_candidate_pane_ParamLimits

0x7253,	// (0x00010258) cell_hwr_candidate_pane

0x7295,	// (0x0001029a) fep_hwr_candidate_pane_g1_ParamLimits

0xd3e0,	// (0x000163e5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xd3e0,	// (0x000163e5) bg_popup_fep_shadow_pane_cp2

0xd585,	// (0x0001658a) fep_vkb_top_pane_g4_ParamLimits

0xd585,	// (0x0001658a) fep_vkb_top_pane_g4

0xd5cb,	// (0x000165d0) fep_vkb_side_pane_g2_ParamLimits

0xd5cb,	// (0x000165d0) fep_vkb_side_pane_g2

0x8a95,	// (0x00011a9a) list_setting_pane_t4_ParamLimits

0x8a95,	// (0x00011a9a) list_setting_pane_t4

0x8b0f,	// (0x00011b14) list_setting_number_pane_t5_ParamLimits

0x8b0f,	// (0x00011b14) list_setting_number_pane_t5

0x9485,	// (0x0001248a) list_double_heading_pane_cp2_ParamLimits

0x9485,	// (0x0001248a) list_double_heading_pane_cp2

0x8c8b,	// (0x00011c90) list_double_heading_pane_g1_cp2_ParamLimits

0x8c8b,	// (0x00011c90) list_double_heading_pane_g1_cp2

0x8c97,	// (0x00011c9c) list_double_heading_pane_g2_cp2_ParamLimits

0x8c97,	// (0x00011c9c) list_double_heading_pane_g2_cp2

0xd938,	// (0x0001693d) list_double_heading_pane_t1_cp2_ParamLimits

0xd938,	// (0x0001693d) list_double_heading_pane_t1_cp2

0xd94e,	// (0x00016953) list_double_heading_pane_t2_cp2_ParamLimits

0xd94e,	// (0x00016953) list_double_heading_pane_t2_cp2

0x7d80,	// (0x00010d85) aid_value_unit2

0x63f7,	// (0x0000f3fc) popup_preview_fixed_window

0x812f,	// (0x00011134) bg_popup_preview_window_pane_cp02

0xd960,	// (0x00016965) list_preview_fixed_pane

0xd9a6,	// (0x000169ab) list_empty_pane_fp_ParamLimits

0xd9a6,	// (0x000169ab) list_empty_pane_fp

0xd9a6,	// (0x000169ab) list_single_cale_day_pane_fp_ParamLimits

0xd9a6,	// (0x000169ab) list_single_cale_day_pane_fp

0xd9a6,	// (0x000169ab) list_single_graphic_heading_pane_fp_ParamLimits

0xd9a6,	// (0x000169ab) list_single_graphic_heading_pane_fp

0xd9a6,	// (0x000169ab) list_single_graphic_pane_fp_ParamLimits

0xd9a6,	// (0x000169ab) list_single_graphic_pane_fp

0xd9a6,	// (0x000169ab) list_single_heading_pane_fp_ParamLimits

0xd9a6,	// (0x000169ab) list_single_heading_pane_fp

0xd9a6,	// (0x000169ab) list_single_pane_fp_ParamLimits

0xd9a6,	// (0x000169ab) list_single_pane_fp

0xd9bd,	// (0x000169c2) list_single_pane_fp_g1_ParamLimits

0xd9bd,	// (0x000169c2) list_single_pane_fp_g1

0x8c8b,	// (0x00011c90) list_single_pane_fp_g2_ParamLimits

0x8c8b,	// (0x00011c90) list_single_pane_fp_g2

0x8c97,	// (0x00011c9c) list_single_pane_fp_g3_ParamLimits

0x8c97,	// (0x00011c9c) list_single_pane_fp_g3

0xd9c9,	// (0x000169ce) list_single_pane_fp_g4_ParamLimits

0xd9c9,	// (0x000169ce) list_single_pane_fp_g4

0x0003,

0xfb87,	// (0x00018b8c) list_single_pane_fp_g_ParamLimits

0xfb87,	// (0x00018b8c) list_single_pane_fp_g

0xd9d5,	// (0x000169da) list_single_pane_fp_t1_ParamLimits

0xd9d5,	// (0x000169da) list_single_pane_fp_t1

0xd9ec,	// (0x000169f1) list_single_graphic_pane_fp_g1_ParamLimits

0xd9ec,	// (0x000169f1) list_single_graphic_pane_fp_g1

0xd9bd,	// (0x000169c2) list_single_graphic_pane_fp_g2_ParamLimits

0xd9bd,	// (0x000169c2) list_single_graphic_pane_fp_g2

0x8c8b,	// (0x00011c90) list_single_graphic_pane_fp_g3_ParamLimits

0x8c8b,	// (0x00011c90) list_single_graphic_pane_fp_g3

0x8c97,	// (0x00011c9c) list_single_graphic_pane_fp_g4_ParamLimits

0x8c97,	// (0x00011c9c) list_single_graphic_pane_fp_g4

0xd9c9,	// (0x000169ce) list_single_graphic_pane_fp_g5_ParamLimits

0xd9c9,	// (0x000169ce) list_single_graphic_pane_fp_g5

0x0004,

0xfb90,	// (0x00018b95) list_single_graphic_pane_fp_g_ParamLimits

0xfb90,	// (0x00018b95) list_single_graphic_pane_fp_g

0xd9f8,	// (0x000169fd) list_single_graphic_pane_fp_t1_ParamLimits

0xd9f8,	// (0x000169fd) list_single_graphic_pane_fp_t1

0xd9ec,	// (0x000169f1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd9ec,	// (0x000169f1) list_single_graphic_heading_pane_fp_g1

0xd9bd,	// (0x000169c2) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xd9bd,	// (0x000169c2) list_single_graphic_heading_pane_fp_g2

0x8c8b,	// (0x00011c90) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x8c8b,	// (0x00011c90) list_single_graphic_heading_pane_fp_g3

0x8c97,	// (0x00011c9c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x8c97,	// (0x00011c9c) list_single_graphic_heading_pane_fp_g4

0xd9c9,	// (0x000169ce) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xd9c9,	// (0x000169ce) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb90,	// (0x00018b95) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb90,	// (0x00018b95) list_single_graphic_heading_pane_fp_g

0xda0e,	// (0x00016a13) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xda0e,	// (0x00016a13) list_single_graphic_heading_pane_fp_t1

0xda24,	// (0x00016a29) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xda24,	// (0x00016a29) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9b,	// (0x00018ba0) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9b,	// (0x00018ba0) list_single_graphic_heading_pane_fp_t

0xda36,	// (0x00016a3b) list_single_cale_day_pane_fp_g1_ParamLimits

0xda36,	// (0x00016a3b) list_single_cale_day_pane_fp_g1

0xda6e,	// (0x00016a73) list_single_cale_day_pane_fp_g2_ParamLimits

0xda6e,	// (0x00016a73) list_single_cale_day_pane_fp_g2

0xda7a,	// (0x00016a7f) list_single_cale_day_pane_fp_g3_ParamLimits

0xda7a,	// (0x00016a7f) list_single_cale_day_pane_fp_g3

0xdaa2,	// (0x00016aa7) list_single_cale_day_pane_fp_g4_ParamLimits

0xdaa2,	// (0x00016aa7) list_single_cale_day_pane_fp_g4

0xdac6,	// (0x00016acb) list_single_cale_day_pane_fp_g5_ParamLimits

0xdac6,	// (0x00016acb) list_single_cale_day_pane_fp_g5

0x0004,

0xfba0,	// (0x00018ba5) list_single_cale_day_pane_fp_g_ParamLimits

0xfba0,	// (0x00018ba5) list_single_cale_day_pane_fp_g

0xdaea,	// (0x00016aef) list_single_cale_day_pane_fp_t1_ParamLimits

0xdaea,	// (0x00016aef) list_single_cale_day_pane_fp_t1

0xdb10,	// (0x00016b15) list_single_cale_day_pane_fp_t2_ParamLimits

0xdb10,	// (0x00016b15) list_single_cale_day_pane_fp_t2

0xdb29,	// (0x00016b2e) list_single_cale_day_pane_fp_t3_ParamLimits

0xdb29,	// (0x00016b2e) list_single_cale_day_pane_fp_t3

0x0002,

0xfbab,	// (0x00018bb0) list_single_cale_day_pane_fp_t_ParamLimits

0xfbab,	// (0x00018bb0) list_single_cale_day_pane_fp_t

0xd9bd,	// (0x000169c2) list_empty_pane_fp_g1_ParamLimits

0xd9bd,	// (0x000169c2) list_empty_pane_fp_g1

0xdb42,	// (0x00016b47) list_empty_pane_fp_t1

0xdb50,	// (0x00016b55) list_empty_pane_fp_t2

0x0001,

0xfbb2,	// (0x00018bb7) list_empty_pane_fp_t

0xd9bd,	// (0x000169c2) list_single_heading_pane_fp_g1_ParamLimits

0xd9bd,	// (0x000169c2) list_single_heading_pane_fp_g1

0x8c8b,	// (0x00011c90) list_single_heading_pane_fp_g2_ParamLimits

0x8c8b,	// (0x00011c90) list_single_heading_pane_fp_g2

0x8c97,	// (0x00011c9c) list_single_heading_pane_fp_g3_ParamLimits

0x8c97,	// (0x00011c9c) list_single_heading_pane_fp_g3

0x0002,

0xfbb7,	// (0x00018bbc) list_single_heading_pane_fp_g_ParamLimits

0xfbb7,	// (0x00018bbc) list_single_heading_pane_fp_g

0xdb5e,	// (0x00016b63) list_single_heading_pane_fp_t1_ParamLimits

0xdb5e,	// (0x00016b63) list_single_heading_pane_fp_t1

0xdb70,	// (0x00016b75) list_single_heading_pane_fp_t2_ParamLimits

0xdb70,	// (0x00016b75) list_single_heading_pane_fp_t2

0x0001,

0xfbbe,	// (0x00018bc3) list_single_heading_pane_fp_t_ParamLimits

0xfbbe,	// (0x00018bc3) list_single_heading_pane_fp_t

0x8fe9,	// (0x00011fee) aid_size_cell_fast

0x809f,	// (0x000110a4) soft_indicator_pane_cp1_t1

0x9026,	// (0x0001202b) cell_app_pane_cp2_ParamLimits

0x9026,	// (0x0001202b) cell_app_pane_cp2

0x70d7,	// (0x000100dc) fep_hwr_candidate_drop_down_list_pane

0x72af,	// (0x000102b4) fep_hwr_candidate_pane_g3_ParamLimits

0x72af,	// (0x000102b4) fep_hwr_candidate_pane_g3

0x5846,	// (0x0000e84b) fep_hwr_candidate_pane_g4_ParamLimits

0x5846,	// (0x0000e84b) fep_hwr_candidate_pane_g4

0x0002,

0xfb2d,	// (0x00018b32) fep_hwr_candidate_pane_g_ParamLimits

0xfb2d,	// (0x00018b32) fep_hwr_candidate_pane_g

0xd46c,	// (0x00016471) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xd46c,	// (0x00016471) fep_vkb_candidate_drop_down_list_pane

0xd885,	// (0x0001688a) fep_vkb_candidate_pane_g3

0xd88d,	// (0x00016892) fep_vkb_candidate_pane_g4

0x0002,

0xfb5a,	// (0x00018b5f) fep_vkb_candidate_pane_g

0x731a,	// (0x0001031f) cell_hwr_candidate_pane_g1_ParamLimits

0x7328,	// (0x0001032d) cell_hwr_candidate_pane_g3_ParamLimits

0x7328,	// (0x0001032d) cell_hwr_candidate_pane_g3

0x05d3,	// (0x000095d8) cell_hwr_candidate_pane_g4_ParamLimits

0x05d3,	// (0x000095d8) cell_hwr_candidate_pane_g4

0x0002,

0xfb79,	// (0x00018b7e) cell_hwr_candidate_pane_g_ParamLimits

0xfb79,	// (0x00018b7e) cell_hwr_candidate_pane_g

0xd8a4,	// (0x000168a9) cell_vkb_candidate_pane_g3_ParamLimits

0xd8a4,	// (0x000168a9) cell_vkb_candidate_pane_g3

0xd8bf,	// (0x000168c4) cell_vkb_candidate_pane_g4_ParamLimits

0xd8bf,	// (0x000168c4) cell_vkb_candidate_pane_g4

0xdb86,	// (0x00016b8b) cell_app_pane_cp2_g1_ParamLimits

0xdb86,	// (0x00016b8b) cell_app_pane_cp2_g1

0xdba4,	// (0x00016ba9) cell_app_pane_cp2_g2_ParamLimits

0xdba4,	// (0x00016ba9) cell_app_pane_cp2_g2

0x0001,

0xfbc3,	// (0x00018bc8) cell_app_pane_cp2_g_ParamLimits

0xfbc3,	// (0x00018bc8) cell_app_pane_cp2_g

0xdbb0,	// (0x00016bb5) cell_app_pane_cp2_t1_ParamLimits

0xdbb0,	// (0x00016bb5) cell_app_pane_cp2_t1

0x8c65,	// (0x00011c6a) grid_highlight_pane_cp1_ParamLimits

0x8c65,	// (0x00011c6a) grid_highlight_pane_cp1

0x7367,	// (0x0001036c) cell_hwr_candidate_pane_cp1_ParamLimits

0x7367,	// (0x0001036c) cell_hwr_candidate_pane_cp1

0x731a,	// (0x0001031f) fep_hwr_candidate_drop_down_list_pane_g1

0x7386,	// (0x0001038b) fep_hwr_candidate_drop_down_list_pane_g2

0x7393,	// (0x00010398) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc8,	// (0x00018bcd) fep_hwr_candidate_drop_down_list_pane_g

0x73a0,	// (0x000103a5) fep_hwr_candidate_drop_down_list_scroll_pane

0x73a9,	// (0x000103ae) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x73a9,	// (0x000103ae) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x73b6,	// (0x000103bb) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x73b6,	// (0x000103bb) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x73c3,	// (0x000103c8) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x73c3,	// (0x000103c8) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x73d0,	// (0x000103d5) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x73d0,	// (0x000103d5) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x73eb,	// (0x000103f0) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x73eb,	// (0x000103f0) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7406,	// (0x0001040b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7406,	// (0x0001040b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7421,	// (0x00010426) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7421,	// (0x00010426) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x743c,	// (0x00010441) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x743c,	// (0x00010441) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcf,	// (0x00018bd4) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcf,	// (0x00018bd4) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xdbc2,	// (0x00016bc7) cell_vkb_candidate_pane_cp1_ParamLimits

0xdbc2,	// (0x00016bc7) cell_vkb_candidate_pane_cp1

0xd585,	// (0x0001658a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xd585,	// (0x0001658a) fep_vkb_candidate_drop_down_list_pane_g1

0xdbe2,	// (0x00016be7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xdbe2,	// (0x00016be7) fep_vkb_candidate_drop_down_list_pane_g2

0xdbef,	// (0x00016bf4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xdbef,	// (0x00016bf4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe0,	// (0x00018be5) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe0,	// (0x00018be5) fep_vkb_candidate_drop_down_list_pane_g

0xdbfc,	// (0x00016c01) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xdbfc,	// (0x00016c01) fep_vkb_candidate_drop_down_list_scroll_pane

0xdc09,	// (0x00016c0e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xdc09,	// (0x00016c0e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xdc16,	// (0x00016c1b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xdc16,	// (0x00016c1b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xdc22,	// (0x00016c27) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xdc22,	// (0x00016c27) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xd8da,	// (0x000168df) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xd8da,	// (0x000168df) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xd8fb,	// (0x00016900) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xd8fb,	// (0x00016900) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xdc2e,	// (0x00016c33) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xdc2e,	// (0x00016c33) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xdc4f,	// (0x00016c54) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xdc4f,	// (0x00016c54) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xdc70,	// (0x00016c75) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xdc70,	// (0x00016c75) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe7,	// (0x00018bec) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe7,	// (0x00018bec) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7db6,	// (0x00010dbb) title_pane_g1_ParamLimits

0x7dc3,	// (0x00010dc8) title_pane_g2_ParamLimits

0xf56a,	// (0x0001856f) title_pane_g_ParamLimits

0x9433,	// (0x00012438) aid_call2_pane

0x943b,	// (0x00012440) aid_call_pane

0x9443,	// (0x00012448) popup_clock_analogue_window_g1

0x9443,	// (0x00012448) popup_clock_analogue_window_g2

0x6756,	// (0x0000f75b) popup_clock_analogue_window_g3

0x675f,	// (0x0000f764) popup_clock_analogue_window_g4

0x7da2,	// (0x00010da7) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x00018714) popup_clock_analogue_window_g

0x6767,	// (0x0000f76c) popup_clock_analogue_window_t1

0x6775,	// (0x0000f77a) clock_digital_number_pane_ParamLimits

0x6775,	// (0x0000f77a) clock_digital_number_pane

0x6781,	// (0x0000f786) clock_digital_number_pane_cp02_ParamLimits

0x6781,	// (0x0000f786) clock_digital_number_pane_cp02

0x678d,	// (0x0000f792) clock_digital_number_pane_cp03_ParamLimits

0x678d,	// (0x0000f792) clock_digital_number_pane_cp03

0x6799,	// (0x0000f79e) clock_digital_number_pane_cp04_ParamLimits

0x6799,	// (0x0000f79e) clock_digital_number_pane_cp04

0x67a5,	// (0x0000f7aa) clock_digital_separator_pane_ParamLimits

0x67a5,	// (0x0000f7aa) clock_digital_separator_pane

0x67b1,	// (0x0000f7b6) popup_clock_digital_window_t1_ParamLimits

0x67b1,	// (0x0000f7b6) popup_clock_digital_window_t1

0x7da2,	// (0x00010da7) clock_digital_number_pane_g1

0x7da2,	// (0x00010da7) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x0001871f) clock_digital_number_pane_g

0x7da2,	// (0x00010da7) clock_digital_separator_pane_g1

0x7da2,	// (0x00010da7) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x0001871f) clock_digital_separator_pane_g

0xa3e7,	// (0x000133ec) aid_fill_nsta_ParamLimits

0xa52d,	// (0x00013532) indicator_nsta_pane_ParamLimits

0xa69f,	// (0x000136a4) popup_clock_analogue_window

0xa69f,	// (0x000136a4) popup_clock_digital_window

0x7e8c,	// (0x00010e91) grid_indicator_nsta_pane_ParamLimits

0xcc45,	// (0x00015c4a) clock_nsta_pane_t2

0x0001,

0xfaad,	// (0x00018ab2) clock_nsta_pane_t

0x671a,	// (0x0000f71f) aid_size_max_handle

0x6724,	// (0x0000f729) aid_size_min_handle

0x9ab0,	// (0x00012ab5) editor_scroll_pane

0xdc8b,	// (0x00016c90) ex_editor_pane

0x8f58,	// (0x00011f5d) scroll_pane_cp13

0x8698,	// (0x0001169d) scroll_pane_cp14

0x946d,	// (0x00012472) scroll_pane_cp36

0x9497,	// (0x0001249c) list_single_graphic_hl_pane_cp2_ParamLimits

0x9497,	// (0x0001249c) list_single_graphic_hl_pane_cp2

0xc05a,	// (0x0001505f) list_single_graphic_hl_pane_ParamLimits

0xc05a,	// (0x0001505f) list_single_graphic_hl_pane

0xdc93,	// (0x00016c98) aid_size_min_hl_cp1

0xdc9c,	// (0x00016ca1) list_highlight_pane_cp34_ParamLimits

0xdc9c,	// (0x00016ca1) list_highlight_pane_cp34

0xdcad,	// (0x00016cb2) list_single_graphic_hl_pane_g1_ParamLimits

0xdcad,	// (0x00016cb2) list_single_graphic_hl_pane_g1

0xdcba,	// (0x00016cbf) list_single_graphic_hl_pane_g2_ParamLimits

0xdcba,	// (0x00016cbf) list_single_graphic_hl_pane_g2

0xdcba,	// (0x00016cbf) list_single_graphic_hl_pane_g3_ParamLimits

0xdcba,	// (0x00016cbf) list_single_graphic_hl_pane_g3

0x99e7,	// (0x000129ec) list_single_graphic_hl_pane_g4_ParamLimits

0x99e7,	// (0x000129ec) list_single_graphic_hl_pane_g4

0xdcc6,	// (0x00016ccb) list_single_graphic_hl_pane_g5_ParamLimits

0xdcc6,	// (0x00016ccb) list_single_graphic_hl_pane_g5

0x0004,

0xfbf8,	// (0x00018bfd) list_single_graphic_hl_pane_g_ParamLimits

0xfbf8,	// (0x00018bfd) list_single_graphic_hl_pane_g

0xb675,	// (0x0001467a) list_single_graphic_hl_pane_t1_ParamLimits

0xb675,	// (0x0001467a) list_single_graphic_hl_pane_t1

0xdcda,	// (0x00016cdf) aid_size_min_hl_cp2

0xdce3,	// (0x00016ce8) list_highlight_pane_cp34_cp2_ParamLimits

0xdce3,	// (0x00016ce8) list_highlight_pane_cp34_cp2

0xdcad,	// (0x00016cb2) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xdcad,	// (0x00016cb2) list_single_graphic_hl_pane_g1_cp2

0xdcf0,	// (0x00016cf5) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xdcf0,	// (0x00016cf5) list_single_graphic_hl_pane_g2_cp2

0xdcfc,	// (0x00016d01) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xdcfc,	// (0x00016d01) list_single_graphic_hl_pane_g3_cp2

0x99e7,	// (0x000129ec) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x99e7,	// (0x000129ec) list_single_graphic_hl_pane_g4_cp2

0xdcc6,	// (0x00016ccb) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xdcc6,	// (0x00016ccb) list_single_graphic_hl_pane_g5_cp2

0x6a63,	// (0x0000fa68) control_pane_g4_ParamLimits

0x6a63,	// (0x0000fa68) control_pane_g4

0x9e36,	// (0x00012e3b) bg_popup_sub_pane_cp10_ParamLimits

0xd2f6,	// (0x000162fb) list_choice_list_pane_ParamLimits

0xd305,	// (0x0001630a) scroll_pane_cp23

0x812f,	// (0x00011134) bg_popup_preview_window_pane_cp02_ParamLimits

0xd960,	// (0x00016965) list_preview_fixed_pane_ParamLimits

0xd976,	// (0x0001697b) list_preview_fixed_pane_cp_ParamLimits

0xd976,	// (0x0001697b) list_preview_fixed_pane_cp

0xd982,	// (0x00016987) popup_preview_fixed_window_g1_ParamLimits

0xd982,	// (0x00016987) popup_preview_fixed_window_g1

0xd98e,	// (0x00016993) popup_preview_fixed_window_g2_ParamLimits

0xd98e,	// (0x00016993) popup_preview_fixed_window_g2

0x0002,

0xfb80,	// (0x00018b85) popup_preview_fixed_window_g_ParamLimits

0xfb80,	// (0x00018b85) popup_preview_fixed_window_g

0x668e,	// (0x0000f693) aid_navi_side_left_pane_ParamLimits

0x66a3,	// (0x0000f6a8) aid_navi_side_right_pane_ParamLimits

0x66bb,	// (0x0000f6c0) navi_icon_pane_stacon_ParamLimits

0x66cf,	// (0x0000f6d4) navi_navi_pane_stacon_ParamLimits

0x66bb,	// (0x0000f6c0) navi_text_pane_stacon_ParamLimits

0x7d98,	// (0x00010d9d) main_text_info_pane

0xdd20,	// (0x00016d25) listscroll_text_info_pane

0xdd28,	// (0x00016d2d) list_text_info_pane_ParamLimits

0xdd28,	// (0x00016d2d) list_text_info_pane

0xdd37,	// (0x00016d3c) scroll_pane_cp24_ParamLimits

0xdd37,	// (0x00016d3c) scroll_pane_cp24

0xdd55,	// (0x00016d5a) list_text_info_pane_t1_ParamLimits

0xdd55,	// (0x00016d5a) list_text_info_pane_t1

0x9e80,	// (0x00012e85) popup_fast_swap2_window_ParamLimits

0x9e80,	// (0x00012e85) popup_fast_swap2_window

0xdd8e,	// (0x00016d93) aid_size_cell_fast2

0x7d98,	// (0x00010d9d) bg_popup_window_pane_cp17

0xae29,	// (0x00013e2e) heading_pane_cp2

0x836f,	// (0x00011374) listscroll_fast2_pane

0xdd98,	// (0x00016d9d) grid_fast2_pane

0xdda2,	// (0x00016da7) listscroll_fast2_pane_g1

0xddaa,	// (0x00016daf) listscroll_fast2_pane_g2

0x0001,

0xfc03,	// (0x00018c08) listscroll_fast2_pane_g

0x8f58,	// (0x00011f5d) scroll_pane_cp26

0xddb4,	// (0x00016db9) cell_fast2_pane_ParamLimits

0xddb4,	// (0x00016db9) cell_fast2_pane

0xddc9,	// (0x00016dce) cell_fast2_pane_g1

0xddd2,	// (0x00016dd7) cell_fast2_pane_g2

0xdddb,	// (0x00016de0) cell_fast2_pane_g3

0x0002,

0xfc08,	// (0x00018c0d) cell_fast2_pane_g

0x8455,	// (0x0001145a) grid_highlight_pane_cp9

0x846a,	// (0x0001146f) main_eswt_pane_ParamLimits

0x846a,	// (0x0001146f) main_eswt_pane

0xdd4c,	// (0x00016d51) list_single_text_info_pane

0xdde3,	// (0x00016de8) eswt_ctrl_button_pane

0xdde3,	// (0x00016de8) eswt_ctrl_canvas_pane

0xddeb,	// (0x00016df0) eswt_ctrl_combo_pane

0xdde3,	// (0x00016de8) eswt_ctrl_default_pane

0xdde3,	// (0x00016de8) eswt_ctrl_label_pane

0xddf3,	// (0x00016df8) eswt_ctrl_wait_pane

0xddfb,	// (0x00016e00) eswt_shell_pane

0x7d98,	// (0x00010d9d) listscroll_eswt_app_pane

0xde1b,	// (0x00016e20) popup_eswt_tasktip_window_ParamLimits

0xde1b,	// (0x00016e20) popup_eswt_tasktip_window

0xaa02,	// (0x00013a07) bg_popup_window_pane_cp18

0xde2c,	// (0x00016e31) eswt_control_pane_g1_ParamLimits

0xde2c,	// (0x00016e31) eswt_control_pane_g1

0xde39,	// (0x00016e3e) eswt_control_pane_g2_ParamLimits

0xde39,	// (0x00016e3e) eswt_control_pane_g2

0xde46,	// (0x00016e4b) eswt_control_pane_g3_ParamLimits

0xde46,	// (0x00016e4b) eswt_control_pane_g3

0xde53,	// (0x00016e58) eswt_control_pane_g4_ParamLimits

0xde53,	// (0x00016e58) eswt_control_pane_g4

0x0003,

0xfc0f,	// (0x00018c14) eswt_control_pane_g_ParamLimits

0xfc0f,	// (0x00018c14) eswt_control_pane_g

0x8c65,	// (0x00011c6a) bg_button_pane_ParamLimits

0x8c65,	// (0x00011c6a) bg_button_pane

0x846a,	// (0x0001146f) common_borders_pane_copy2_ParamLimits

0x846a,	// (0x0001146f) common_borders_pane_copy2

0xde60,	// (0x00016e65) control_button_pane_g1_ParamLimits

0xde60,	// (0x00016e65) control_button_pane_g1

0xde6c,	// (0x00016e71) control_button_pane_g2_ParamLimits

0xde6c,	// (0x00016e71) control_button_pane_g2

0xde78,	// (0x00016e7d) control_button_pane_g3_ParamLimits

0xde78,	// (0x00016e7d) control_button_pane_g3

0x0002,

0xfc18,	// (0x00018c1d) control_button_pane_g_ParamLimits

0xfc18,	// (0x00018c1d) control_button_pane_g

0xde8c,	// (0x00016e91) control_button_pane_t1

0xde9a,	// (0x00016e9f) control_button_pane_t2

0x0001,

0xfc1f,	// (0x00018c24) control_button_pane_t

0xa8e8,	// (0x000138ed) bg_button_pane_g1

0xa8f8,	// (0x000138fd) bg_button_pane_g2

0xa8f0,	// (0x000138f5) bg_button_pane_g3

0xa908,	// (0x0001390d) bg_button_pane_g4

0xa900,	// (0x00013905) bg_button_pane_g5

0xa910,	// (0x00013915) bg_button_pane_g6

0xa918,	// (0x0001391d) bg_button_pane_g7

0xa928,	// (0x0001392d) bg_button_pane_g8

0xa920,	// (0x00013925) bg_button_pane_g9

0x0008,

0xf872,	// (0x00018877) bg_button_pane_g

0xd2b1,	// (0x000162b6) common_borders_pane_ParamLimits

0xd2b1,	// (0x000162b6) common_borders_pane

0xde2c,	// (0x00016e31) eswt_control_pane_g1_copy1_ParamLimits

0xde2c,	// (0x00016e31) eswt_control_pane_g1_copy1

0xde39,	// (0x00016e3e) eswt_control_pane_g2_copy1_ParamLimits

0xde39,	// (0x00016e3e) eswt_control_pane_g2_copy1

0xde46,	// (0x00016e4b) eswt_control_pane_g3_copy1_ParamLimits

0xde46,	// (0x00016e4b) eswt_control_pane_g3_copy1

0xde53,	// (0x00016e58) eswt_control_pane_g4_copy1_ParamLimits

0xde53,	// (0x00016e58) eswt_control_pane_g4_copy1

0xd2ec,	// (0x000162f1) bg_eswt_ctrl_canvas_pane_g1

0xd2b1,	// (0x000162b6) common_borders_pane_cp2_ParamLimits

0xd2b1,	// (0x000162b6) common_borders_pane_cp2

0xd2b1,	// (0x000162b6) common_borders_pane_cp3_ParamLimits

0xd2b1,	// (0x000162b6) common_borders_pane_cp3

0xdea8,	// (0x00016ead) separator_horizontal_pane

0xdeb0,	// (0x00016eb5) separator_vertical_pane

0xde2c,	// (0x00016e31) eswt_control_pane_g1_copy2_ParamLimits

0xde2c,	// (0x00016e31) eswt_control_pane_g1_copy2

0xde39,	// (0x00016e3e) eswt_control_pane_g2_copy2_ParamLimits

0xde39,	// (0x00016e3e) eswt_control_pane_g2_copy2

0xde46,	// (0x00016e4b) eswt_control_pane_g3_copy2_ParamLimits

0xde46,	// (0x00016e4b) eswt_control_pane_g3_copy2

0xde53,	// (0x00016e58) eswt_control_pane_g4_copy2_ParamLimits

0xde53,	// (0x00016e58) eswt_control_pane_g4_copy2

0x7d98,	// (0x00010d9d) common_borders_pane_cp4

0xdeb9,	// (0x00016ebe) separator_horizontal_pane_g1

0xdec2,	// (0x00016ec7) separator_horizontal_pane_g2

0xdecb,	// (0x00016ed0) separator_horizontal_pane_g3

0x0002,

0xfc24,	// (0x00018c29) separator_horizontal_pane_g

0xde2c,	// (0x00016e31) eswt_control_pane_g1_copy3_ParamLimits

0xde2c,	// (0x00016e31) eswt_control_pane_g1_copy3

0xde39,	// (0x00016e3e) eswt_control_pane_g2_copy3_ParamLimits

0xde39,	// (0x00016e3e) eswt_control_pane_g2_copy3

0xde46,	// (0x00016e4b) eswt_control_pane_g3_copy3_ParamLimits

0xde46,	// (0x00016e4b) eswt_control_pane_g3_copy3

0xde53,	// (0x00016e58) eswt_control_pane_g4_copy3_ParamLimits

0xde53,	// (0x00016e58) eswt_control_pane_g4_copy3

0x7d98,	// (0x00010d9d) common_borders_pane_cp5

0xded4,	// (0x00016ed9) separator_vertical_pane_g1

0xdedd,	// (0x00016ee2) separator_vertical_pane_g2

0xdee6,	// (0x00016eeb) separator_vertical_pane_g3

0x0002,

0xfc2b,	// (0x00018c30) separator_vertical_pane_g

0xde2c,	// (0x00016e31) eswt_control_pane_g1_copy4_ParamLimits

0xde2c,	// (0x00016e31) eswt_control_pane_g1_copy4

0xde39,	// (0x00016e3e) eswt_control_pane_g2_copy4_ParamLimits

0xde39,	// (0x00016e3e) eswt_control_pane_g2_copy4

0xde46,	// (0x00016e4b) eswt_control_pane_g3_copy4_ParamLimits

0xde46,	// (0x00016e4b) eswt_control_pane_g3_copy4

0xde53,	// (0x00016e58) eswt_control_pane_g4_copy4_ParamLimits

0xde53,	// (0x00016e58) eswt_control_pane_g4_copy4

0xdeef,	// (0x00016ef4) eswt_ctrl_combo_button_pane

0xdef7,	// (0x00016efc) eswt_ctrl_input_pane

0xdeff,	// (0x00016f04) popup_choice_list_window_cp70

0xdf07,	// (0x00016f0c) eswt_ctrl_input_pane_t1

0x7d98,	// (0x00010d9d) input_focus_pane_cp70

0xd2b1,	// (0x000162b6) bg_button_pane_cp70_ParamLimits

0xd2b1,	// (0x000162b6) bg_button_pane_cp70

0xdf15,	// (0x00016f1a) eswt_ctrl_combo_button_pane_g1

0xdf1d,	// (0x00016f22) wait_bar_pane_cp70

0xaa02,	// (0x00013a07) bg_popup_window_pane_cp70_ParamLimits

0xaa02,	// (0x00013a07) bg_popup_window_pane_cp70

0xdf25,	// (0x00016f2a) popup_eswt_tasktip_window_t1

0xdf3b,	// (0x00016f40) wait_bar_pane_cp71_ParamLimits

0xdf3b,	// (0x00016f40) wait_bar_pane_cp71

0xdf47,	// (0x00016f4c) grid_eswt_app_pane

0x9279,	// (0x0001227e) scroll_pane_cp70

0xdf50,	// (0x00016f55) cell_eswt_app_pane_ParamLimits

0xdf50,	// (0x00016f55) cell_eswt_app_pane

0xdf84,	// (0x00016f89) cell_eswt_app_pane_g1_ParamLimits

0xdf84,	// (0x00016f89) cell_eswt_app_pane_g1

0xdfb3,	// (0x00016fb8) cell_eswt_app_pane_g2_ParamLimits

0xdfb3,	// (0x00016fb8) cell_eswt_app_pane_g2

0x0001,

0xfc32,	// (0x00018c37) cell_eswt_app_pane_g_ParamLimits

0xfc32,	// (0x00018c37) cell_eswt_app_pane_g

0xdfdc,	// (0x00016fe1) cell_eswt_app_pane_t1_ParamLimits

0xdfdc,	// (0x00016fe1) cell_eswt_app_pane_t1

0xe00e,	// (0x00017013) grid_highlight_pane_cp70_ParamLimits

0xe00e,	// (0x00017013) grid_highlight_pane_cp70

0x9983,	// (0x00012988) set_content_pane_g1

0x9d58,	// (0x00012d5d) status_small_volume_pane

0x7457,	// (0x0001045c) status_small_volume_pane_g1

0x745f,	// (0x00010464) volume_small2_pane

0x7468,	// (0x0001046d) volume_small2_pane_g1

0x7471,	// (0x00010476) volume_small2_pane_g2

0x747a,	// (0x0001047f) volume_small2_pane_g3

0x7483,	// (0x00010488) volume_small2_pane_g4

0x748c,	// (0x00010491) volume_small2_pane_g5

0x7495,	// (0x0001049a) volume_small2_pane_g6

0x749e,	// (0x000104a3) volume_small2_pane_g7

0x74a7,	// (0x000104ac) volume_small2_pane_g8

0x74b0,	// (0x000104b5) volume_small2_pane_g9

0x74b9,	// (0x000104be) volume_small2_pane_g10

0x0009,

0xfc37,	// (0x00018c3c) volume_small2_pane_g

0xd6cd,	// (0x000166d2) fep_vkb_top_text_pane_g1_ParamLimits

0xd6e8,	// (0x000166ed) fep_vkb_top_text_pane_t1_ParamLimits

0xd99a,	// (0x0001699f) popup_preview_fixed_window_g3_ParamLimits

0xd99a,	// (0x0001699f) popup_preview_fixed_window_g3

0xa31f,	// (0x00013324) popup_toolbar_trans_pane

0xbdc3,	// (0x00014dc8) aid_height_set_list_ParamLimits

0xbdd4,	// (0x00014dd9) aid_size_parent_ParamLimits

0x9e36,	// (0x00012e3b) list_highlight_pane_cp2_ParamLimits

0x9983,	// (0x00012988) set_content_pane_g1_ParamLimits

0xc07d,	// (0x00015082) list_single_image_pane_ParamLimits

0xc07d,	// (0x00015082) list_single_image_pane

0xe01a,	// (0x0001701f) aid_size_cell_image_ParamLimits

0xe01a,	// (0x0001701f) aid_size_cell_image

0xe027,	// (0x0001702c) grid_single_image_pane_ParamLimits

0xe027,	// (0x0001702c) grid_single_image_pane

0x8c8b,	// (0x00011c90) list_single_image_pane_g1_ParamLimits

0x8c8b,	// (0x00011c90) list_single_image_pane_g1

0x8c97,	// (0x00011c9c) list_single_image_pane_g2_ParamLimits

0x8c97,	// (0x00011c9c) list_single_image_pane_g2

0x0001,

0xfc4c,	// (0x00018c51) list_single_image_pane_g_ParamLimits

0xfc4c,	// (0x00018c51) list_single_image_pane_g

0xe033,	// (0x00017038) list_single_image_pane_t1_ParamLimits

0xe033,	// (0x00017038) list_single_image_pane_t1

0xe049,	// (0x0001704e) cell_image_list_pane_ParamLimits

0xe049,	// (0x0001704e) cell_image_list_pane

0xe05d,	// (0x00017062) cell_image_list_pane_g1

0xe066,	// (0x0001706b) cell_image_list_pane_g2

0x0001,

0xfc51,	// (0x00018c56) cell_image_list_pane_g

0xe06f,	// (0x00017074) aid_size_cell_tb_trans_pane

0x8c65,	// (0x00011c6a) bg_tb_trans_pane

0xe081,	// (0x00017086) grid_tb_trans_pane

0xa8e8,	// (0x000138ed) bg_tb_trans_pane_g1

0xa8f8,	// (0x000138fd) bg_tb_trans_pane_g2

0xa8f0,	// (0x000138f5) bg_tb_trans_pane_g3

0xa908,	// (0x0001390d) bg_tb_trans_pane_g4

0xa900,	// (0x00013905) bg_tb_trans_pane_g5

0xa928,	// (0x0001392d) bg_tb_trans_pane_g6

0xa920,	// (0x00013925) bg_tb_trans_pane_g7

0xa910,	// (0x00013915) bg_tb_trans_pane_g8

0xa918,	// (0x0001391d) bg_tb_trans_pane_g9

0x0008,

0xfc56,	// (0x00018c5b) bg_tb_trans_pane_g

0xe095,	// (0x0001709a) cell_toolbar_trans_pane_ParamLimits

0xe095,	// (0x0001709a) cell_toolbar_trans_pane

0xd2ec,	// (0x000162f1) cell_toolbar_trans_pane_g1

0xce37,	// (0x00015e3c) list_form2_midp_pane_t1

0xce45,	// (0x00015e4a) list_form2_midp_pane_t2

0x0001,

0xfaf3,	// (0x00018af8) list_form2_midp_pane_t

0xce53,	// (0x00015e58) scroll_pane_cp51_ParamLimits

0xd056,	// (0x0001605b) form2_midp_wait_pane_g1

0xd05f,	// (0x00016064) form2_midp_wait_pane_g2

0xd068,	// (0x0001606d) form2_midp_wait_pane_g3

0x0002,

0xfb08,	// (0x00018b0d) form2_midp_wait_pane_g

0x7e8c,	// (0x00010e91) list_highlight_pane_cp21_ParamLimits

0xd0b7,	// (0x000160bc) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xd0c6,	// (0x000160cb) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xbfe9,	// (0x00014fee) list_single_2graphic_im_pane_ParamLimits

0xbfe9,	// (0x00014fee) list_single_2graphic_im_pane

0xe0bb,	// (0x000170c0) list_single_2graphic_im_pane_g1_ParamLimits

0xe0bb,	// (0x000170c0) list_single_2graphic_im_pane_g1

0xe0cc,	// (0x000170d1) list_single_2graphic_im_pane_g2_ParamLimits

0xe0cc,	// (0x000170d1) list_single_2graphic_im_pane_g2

0xe0d8,	// (0x000170dd) list_single_2graphic_im_pane_g3_ParamLimits

0xe0d8,	// (0x000170dd) list_single_2graphic_im_pane_g3

0x0003,

0xfc69,	// (0x00018c6e) list_single_2graphic_im_pane_g_ParamLimits

0xfc69,	// (0x00018c6e) list_single_2graphic_im_pane_g

0xe0f8,	// (0x000170fd) list_single_2graphic_im_pane_t1_ParamLimits

0xe0f8,	// (0x000170fd) list_single_2graphic_im_pane_t1

0xd9a6,	// (0x000169ab) list_single_graphic_2heading_pane_fp_ParamLimits

0xd9a6,	// (0x000169ab) list_single_graphic_2heading_pane_fp

0xd9ec,	// (0x000169f1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd9ec,	// (0x000169f1) list_single_graphic_2heading_pane_fp_g1

0xd9bd,	// (0x000169c2) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xd9bd,	// (0x000169c2) list_single_graphic_2heading_pane_fp_g2

0x8c8b,	// (0x00011c90) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x8c8b,	// (0x00011c90) list_single_graphic_2heading_pane_fp_g3

0x8c97,	// (0x00011c9c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x8c97,	// (0x00011c9c) list_single_graphic_2heading_pane_fp_g4

0xd9c9,	// (0x000169ce) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xd9c9,	// (0x000169ce) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb90,	// (0x00018b95) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb90,	// (0x00018b95) list_single_graphic_2heading_pane_fp_g

0xe129,	// (0x0001712e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe129,	// (0x0001712e) list_single_graphic_2heading_pane_fp_t1

0xda24,	// (0x00016a29) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xda24,	// (0x00016a29) list_single_graphic_2heading_pane_fp_t2

0xe13f,	// (0x00017144) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe13f,	// (0x00017144) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc72,	// (0x00018c77) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc72,	// (0x00018c77) list_single_graphic_2heading_pane_fp_t

0xd38c,	// (0x00016391) fep_hwr_write_pane_g5_ParamLimits

0xd38c,	// (0x00016391) fep_hwr_write_pane_g5

0xd398,	// (0x0001639d) fep_hwr_write_pane_g6_ParamLimits

0xd398,	// (0x0001639d) fep_hwr_write_pane_g6

0xddfb,	// (0x00016e00) eswt_shell_pane_ParamLimits

0xaa02,	// (0x00013a07) bg_popup_window_pane_cp18_ParamLimits

0xbcfa,	// (0x00014cff) heading_pane_cp70

0xdf25,	// (0x00016f2a) popup_eswt_tasktip_window_t1_ParamLimits

0xa43c,	// (0x00013441) aid_touch_tab_arrow_left

0xa44b,	// (0x00013450) aid_touch_tab_arrow_right

0x7dd4,	// (0x00010dd9) title_pane_g3_ParamLimits

0x7dd4,	// (0x00010dd9) title_pane_g3

0x8b52,	// (0x00011b57) set_value_pane_g1

0xa31f,	// (0x00013324) popup_toolbar_trans_pane_ParamLimits

0xe06f,	// (0x00017074) aid_size_cell_tb_trans_pane_ParamLimits

0x8c65,	// (0x00011c6a) bg_tb_trans_pane_ParamLimits

0xe081,	// (0x00017086) grid_tb_trans_pane_ParamLimits

0x812f,	// (0x00011134) cont_note_pane_ParamLimits

0x812f,	// (0x00011134) cont_note_pane

0x846a,	// (0x0001146f) cont_snote2_single_text_pane_ParamLimits

0x846a,	// (0x0001146f) cont_snote2_single_text_pane

0x846a,	// (0x0001146f) cont_snote2_single_graphic_pane_ParamLimits

0x846a,	// (0x0001146f) cont_snote2_single_graphic_pane

0xb03f,	// (0x00014044) cont_note_wait_pane_ParamLimits

0xb03f,	// (0x00014044) cont_note_wait_pane

0xb03f,	// (0x00014044) cont_note_image_pane_ParamLimits

0xb03f,	// (0x00014044) cont_note_image_pane

0xe155,	// (0x0001715a) popup_note2_window_g1_ParamLimits

0xe155,	// (0x0001715a) popup_note2_window_g1

0xe186,	// (0x0001718b) popup_note2_window_t1_ParamLimits

0xe186,	// (0x0001718b) popup_note2_window_t1

0xe1cb,	// (0x000171d0) popup_note2_window_t2_ParamLimits

0xe1cb,	// (0x000171d0) popup_note2_window_t2

0xe210,	// (0x00017215) popup_note2_window_t3_ParamLimits

0xe210,	// (0x00017215) popup_note2_window_t3

0xe255,	// (0x0001725a) popup_note2_window_t4_ParamLimits

0xe255,	// (0x0001725a) popup_note2_window_t4

0x81a7,	// (0x000111ac) popup_note2_window_t5_ParamLimits

0x81a7,	// (0x000111ac) popup_note2_window_t5

0x0004,

0xfc7e,	// (0x00018c83) popup_note2_window_t_ParamLimits

0xfc7e,	// (0x00018c83) popup_note2_window_t

0xe284,	// (0x00017289) popup_note2_image_window_g1_ParamLimits

0xe284,	// (0x00017289) popup_note2_image_window_g1

0xe290,	// (0x00017295) popup_note2_image_window_g2_ParamLimits

0xe290,	// (0x00017295) popup_note2_image_window_g2

0x0001,

0xfc89,	// (0x00018c8e) popup_note2_image_window_g_ParamLimits

0xfc89,	// (0x00018c8e) popup_note2_image_window_g

0xe2a2,	// (0x000172a7) popup_note2_image_window_t1_ParamLimits

0xe2a2,	// (0x000172a7) popup_note2_image_window_t1

0xe2ba,	// (0x000172bf) popup_note2_image_window_t2_ParamLimits

0xe2ba,	// (0x000172bf) popup_note2_image_window_t2

0xe2d2,	// (0x000172d7) popup_note2_image_window_t3_ParamLimits

0xe2d2,	// (0x000172d7) popup_note2_image_window_t3

0x0002,

0xfc8e,	// (0x00018c93) popup_note2_image_window_t_ParamLimits

0xfc8e,	// (0x00018c93) popup_note2_image_window_t

0xb04d,	// (0x00014052) popup_note2_wait_window_g1_ParamLimits

0xb04d,	// (0x00014052) popup_note2_wait_window_g1

0xb059,	// (0x0001405e) popup_note2_wait_window_g2_ParamLimits

0xb059,	// (0x0001405e) popup_note2_wait_window_g2

0xb065,	// (0x0001406a) popup_note2_wait_window_g3_ParamLimits

0xb065,	// (0x0001406a) popup_note2_wait_window_g3

0x0002,

0xf854,	// (0x00018859) popup_note2_wait_window_g_ParamLimits

0xf854,	// (0x00018859) popup_note2_wait_window_g

0xe2ee,	// (0x000172f3) popup_note2_wait_window_t1_ParamLimits

0xe2ee,	// (0x000172f3) popup_note2_wait_window_t1

0xe30c,	// (0x00017311) popup_note2_wait_window_t2_ParamLimits

0xe30c,	// (0x00017311) popup_note2_wait_window_t2

0xe32a,	// (0x0001732f) popup_note2_wait_window_t3_ParamLimits

0xe32a,	// (0x0001732f) popup_note2_wait_window_t3

0xe33c,	// (0x00017341) popup_note2_wait_window_t4_ParamLimits

0xe33c,	// (0x00017341) popup_note2_wait_window_t4

0x0003,

0xfc95,	// (0x00018c9a) popup_note2_wait_window_t_ParamLimits

0xfc95,	// (0x00018c9a) popup_note2_wait_window_t

0xe34e,	// (0x00017353) wait_bar2_pane_ParamLimits

0xe34e,	// (0x00017353) wait_bar2_pane

0xe366,	// (0x0001736b) popup_snote2_single_text_window_g1_ParamLimits

0xe366,	// (0x0001736b) popup_snote2_single_text_window_g1

0xe38e,	// (0x00017393) popup_snote2_single_text_window_t1_ParamLimits

0xe38e,	// (0x00017393) popup_snote2_single_text_window_t1

0xe3da,	// (0x000173df) popup_snote2_single_text_window_t2_ParamLimits

0xe3da,	// (0x000173df) popup_snote2_single_text_window_t2

0xe426,	// (0x0001742b) popup_snote2_single_text_window_t3_ParamLimits

0xe426,	// (0x0001742b) popup_snote2_single_text_window_t3

0xe467,	// (0x0001746c) popup_snote2_single_text_window_t4_ParamLimits

0xe467,	// (0x0001746c) popup_snote2_single_text_window_t4

0xe49d,	// (0x000174a2) popup_snote2_single_text_window_t5_ParamLimits

0xe49d,	// (0x000174a2) popup_snote2_single_text_window_t5

0x0004,

0xfc9e,	// (0x00018ca3) popup_snote2_single_text_window_t_ParamLimits

0xfc9e,	// (0x00018ca3) popup_snote2_single_text_window_t

0xe4c8,	// (0x000174cd) popup_snote2_single_graphic_window_g1_ParamLimits

0xe4c8,	// (0x000174cd) popup_snote2_single_graphic_window_g1

0xe4f0,	// (0x000174f5) popup_snote2_single_graphic_window_g2_ParamLimits

0xe4f0,	// (0x000174f5) popup_snote2_single_graphic_window_g2

0x0001,

0xfca9,	// (0x00018cae) popup_snote2_single_graphic_window_g_ParamLimits

0xfca9,	// (0x00018cae) popup_snote2_single_graphic_window_g

0xe518,	// (0x0001751d) popup_snote2_single_graphic_window_t1_ParamLimits

0xe518,	// (0x0001751d) popup_snote2_single_graphic_window_t1

0xe564,	// (0x00017569) popup_snote2_single_graphic_window_t2_ParamLimits

0xe564,	// (0x00017569) popup_snote2_single_graphic_window_t2

0xe426,	// (0x0001742b) popup_snote2_single_graphic_window_t3_ParamLimits

0xe426,	// (0x0001742b) popup_snote2_single_graphic_window_t3

0xe467,	// (0x0001746c) popup_snote2_single_graphic_window_t4_ParamLimits

0xe467,	// (0x0001746c) popup_snote2_single_graphic_window_t4

0xe49d,	// (0x000174a2) popup_snote2_single_graphic_window_t5_ParamLimits

0xe49d,	// (0x000174a2) popup_snote2_single_graphic_window_t5

0x0004,

0xfcae,	// (0x00018cb3) popup_snote2_single_graphic_window_t_ParamLimits

0xfcae,	// (0x00018cb3) popup_snote2_single_graphic_window_t

0xcd08,	// (0x00015d0d) clock_nsta_pane_cp2_t1

0xcd08,	// (0x00015d0d) clock_nsta_pane_cp2_t2

0x0001,

0xfac9,	// (0x00018ace) clock_nsta_pane_cp2_t

0x8c7f,	// (0x00011c84) form_field_data_wide_pane_g1_ParamLimits

0x8c8b,	// (0x00011c90) form_field_data_wide_pane_g2_ParamLimits

0x8c8b,	// (0x00011c90) form_field_data_wide_pane_g2

0x8c97,	// (0x00011c9c) form_field_data_wide_pane_g3_ParamLimits

0x8c97,	// (0x00011c9c) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x00018697) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x00018697) form_field_data_wide_pane_g

0xcbe1,	// (0x00015be6) grid_touch_3_pane_ParamLimits

0xcbe1,	// (0x00015be6) grid_touch_3_pane

0xe5b0,	// (0x000175b5) cell_touch_3_pane_ParamLimits

0xe5b0,	// (0x000175b5) cell_touch_3_pane

0xd2ec,	// (0x000162f1) cell_touch_3_pane_g1

0xd2ec,	// (0x000162f1) cell_touch_3_pane_g2

0x0001,

0xfb4e,	// (0x00018b53) cell_touch_3_pane_g

0x81d9,	// (0x000111de) cont_query_data_pane

0x81e1,	// (0x000111e6) cont_query_data_pane_cp1

0xe5df,	// (0x000175e4) button_value_adjust_pane_cp7

0xe5e7,	// (0x000175ec) query_popup_pane_cp3

0x9504,	// (0x00012509) bg_popup_sub_pane_cp22_ParamLimits

0x67d0,	// (0x0000f7d5) navi_navi_volume_pane_cp2

0x67eb,	// (0x0000f7f0) popup_side_volume_key_window_g2

0x67fa,	// (0x0000f7ff) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x00018729) popup_side_volume_key_window_g

0x6817,	// (0x0000f81c) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x00018730) popup_side_volume_key_window_t

0x984d,	// (0x00012852) popup_side_volume_key_window_ParamLimits

0x887d,	// (0x00011882) list_double_graphic_pane_g4_ParamLimits

0x887d,	// (0x00011882) list_double_graphic_pane_g4

0xc034,	// (0x00015039) list_single_2heading_msg_pane_ParamLimits

0xc034,	// (0x00015039) list_single_2heading_msg_pane

0xe616,	// (0x0001761b) list_single_2heading_msg_pane_g1_ParamLimits

0xe616,	// (0x0001761b) list_single_2heading_msg_pane_g1

0x86ac,	// (0x000116b1) list_single_2heading_msg_pane_g2_ParamLimits

0x86ac,	// (0x000116b1) list_single_2heading_msg_pane_g2

0xe622,	// (0x00017627) list_single_2heading_msg_pane_g3_ParamLimits

0xe622,	// (0x00017627) list_single_2heading_msg_pane_g3

0xe62e,	// (0x00017633) list_single_2heading_msg_pane_g4_ParamLimits

0xe62e,	// (0x00017633) list_single_2heading_msg_pane_g4

0x0003,

0xfcb9,	// (0x00018cbe) list_single_2heading_msg_pane_g_ParamLimits

0xfcb9,	// (0x00018cbe) list_single_2heading_msg_pane_g

0xe646,	// (0x0001764b) list_single_2heading_msg_pane_t1_ParamLimits

0xe646,	// (0x0001764b) list_single_2heading_msg_pane_t1

0xe66e,	// (0x00017673) list_single_2heading_msg_pane_t2_ParamLimits

0xe66e,	// (0x00017673) list_single_2heading_msg_pane_t2

0xe6a2,	// (0x000176a7) list_single_2heading_msg_pane_t3_ParamLimits

0xe6a2,	// (0x000176a7) list_single_2heading_msg_pane_t3

0xe6db,	// (0x000176e0) list_single_2heading_msg_pane_t4_ParamLimits

0xe6db,	// (0x000176e0) list_single_2heading_msg_pane_t4

0x0003,

0xfcc2,	// (0x00018cc7) list_single_2heading_msg_pane_t_ParamLimits

0xfcc2,	// (0x00018cc7) list_single_2heading_msg_pane_t

0x7de0,	// (0x00010de5) title_pane_g4_ParamLimits

0x7de0,	// (0x00010de5) title_pane_g4

0x65de,	// (0x0000f5e3) title_pane_stacon_g3_ParamLimits

0x65de,	// (0x0000f5e3) title_pane_stacon_g3

0xe0ec,	// (0x000170f1) list_single_2graphic_im_pane_g4_ParamLimits

0xe0ec,	// (0x000170f1) list_single_2graphic_im_pane_g4

0xbaa0,	// (0x00014aa5) popup_side_volume_key_window_cp

0xc3af,	// (0x000153b4) main_idle_act2_pane_t1

0x6c06,	// (0x0000fc0b) toolbar_button_pane_g10

0x8662,	// (0x00011667) popup_toolbar_window_cp1

0xccf9,	// (0x00015cfe) clock_nsta_pane_cp_t1

0xccf9,	// (0x00015cfe) clock_nsta_pane_cp_t2

0x0001,

0xfac4,	// (0x00018ac9) clock_nsta_pane_cp_t

0x67d0,	// (0x0000f7d5) navi_navi_volume_pane_cp2_ParamLimits

0x67df,	// (0x0000f7e4) popup_side_volume_key_window_g1_ParamLimits

0x67eb,	// (0x0000f7f0) popup_side_volume_key_window_g2_ParamLimits

0x67fa,	// (0x0000f7ff) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x00018729) popup_side_volume_key_window_g_ParamLimits

0x70c3,	// (0x000100c8) fep_hwr_aid_pane

0x716a,	// (0x0001016f) bg_fep_hwr_top_pane_g4_ParamLimits

0xd35c,	// (0x00016361) fep_hwr_top_pane_g1_ParamLimits

0xd36e,	// (0x00016373) fep_hwr_top_pane_g2_ParamLimits

0x718a,	// (0x0001018f) fep_hwr_top_pane_g3_ParamLimits

0xfb19,	// (0x00018b1e) fep_hwr_top_pane_g_ParamLimits

0x719f,	// (0x000101a4) fep_hwr_top_text_pane_ParamLimits

0xb861,	// (0x00014866) aid_touch_tab_arrow_arrow_2

0xb86a,	// (0x0001486f) aid_touch_tab_arrow_left_2

0x70d7,	// (0x000100dc) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x710e,	// (0x00010113) fep_hwr_prediction_pane

0xd4d5,	// (0x000164da) fep_vkb_prediction_pane

0xd5d9,	// (0x000165de) fep_vkb_side_pane_g3_ParamLimits

0xd5d9,	// (0x000165de) fep_vkb_side_pane_g3

0x731a,	// (0x0001031f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7386,	// (0x0001038b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7393,	// (0x00010398) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc8,	// (0x00018bcd) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x74c2,	// (0x000104c7) fep_hwr_prediction_pane_g1

0x74cc,	// (0x000104d1) fep_hwr_prediction_pane_g2

0xd354,	// (0x00016359) fep_hwr_prediction_pane_g3

0x74d4,	// (0x000104d9) fep_hwr_prediction_pane_g4

0x0003,

0xfccb,	// (0x00018cd0) fep_hwr_prediction_pane_g

0xe700,	// (0x00017705) fep_vkb_prediction_pane_g1

0xe70a,	// (0x0001770f) fep_vkb_prediction_pane_g2

0xe712,	// (0x00017717) fep_vkb_prediction_pane_g3

0xe71a,	// (0x0001771f) fep_vkb_prediction_pane_g4

0x0003,

0xfcd4,	// (0x00018cd9) fep_vkb_prediction_pane_g

0x6ef2,	// (0x0000fef7) slider_set_pane_g3

0x6f06,	// (0x0000ff0b) slider_set_pane_g4

0x6f1e,	// (0x0000ff23) slider_set_pane_g5

0x6ef2,	// (0x0000fef7) slider_set_pane_g6

0x6f34,	// (0x0000ff39) slider_set_pane_g7

0xbf31,	// (0x00014f36) slider_form_pane_g3

0xbf3a,	// (0x00014f3f) slider_form_pane_g4

0xbf42,	// (0x00014f47) slider_form_pane_g5

0xbf31,	// (0x00014f36) slider_form_pane_g6

0xbf4a,	// (0x00014f4f) slider_form_pane_g7

0xc683,	// (0x00015688) slider_set_pane_vc_g3

0xc68c,	// (0x00015691) slider_set_pane_vc_g4

0xc695,	// (0x0001569a) slider_set_pane_vc_g5

0xc683,	// (0x00015688) slider_set_pane_vc_g6

0xc69e,	// (0x000156a3) slider_set_pane_vc_g7

0xc683,	// (0x00015688) slider_form_pane_vc_g1

0xc68c,	// (0x00015691) slider_form_pane_vc_g2

0xc695,	// (0x0001569a) slider_form_pane_vc_g3

0xc683,	// (0x00015688) slider_form_pane_vc_g4

0xc9ff,	// (0x00015a04) slider_form_pane_vc_g5

0x0004,

0xfa9d,	// (0x00018aa2) slider_form_pane_vc_g

0x7d98,	// (0x00010d9d) main_idle_act3_pane

0xe722,	// (0x00017727) ai3_links_pane

0xe72b,	// (0x00017730) popup_ai3_data_window_ParamLimits

0xe72b,	// (0x00017730) popup_ai3_data_window

0x7d98,	// (0x00010d9d) grid_ai3_links_pane

0xe743,	// (0x00017748) cell_ai3_links_pane_ParamLimits

0xe743,	// (0x00017748) cell_ai3_links_pane

0xe75b,	// (0x00017760) bg_popup_sub_pane_cp11

0xe768,	// (0x0001776d) cell_ai3_links_pane_g1

0x7d98,	// (0x00010d9d) bg_popup_sub_pane_cp12

0xe78d,	// (0x00017792) heading_ai3_data_pane

0xe795,	// (0x0001779a) list_ai3_gene_pane

0xe7a1,	// (0x000177a6) popup_ai3_data_window_g1

0xe7a9,	// (0x000177ae) heading_ai3_data_pane_g1

0xe7b1,	// (0x000177b6) heading_ai3_data_pane_t1

0xe7bf,	// (0x000177c4) list_double_ai3_gene_pane_ParamLimits

0xe7bf,	// (0x000177c4) list_double_ai3_gene_pane

0xe7cc,	// (0x000177d1) list_single_ai3_gene_pane_ParamLimits

0xe7cc,	// (0x000177d1) list_single_ai3_gene_pane

0xd2b1,	// (0x000162b6) list_highlight_pane_cp7_ParamLimits

0xd2b1,	// (0x000162b6) list_highlight_pane_cp7

0xe7d9,	// (0x000177de) list_single_a13_gene_pane_t1_ParamLimits

0xe7d9,	// (0x000177de) list_single_a13_gene_pane_t1

0xe7f0,	// (0x000177f5) list_single_ai3_gene_pane_g1

0xe7f9,	// (0x000177fe) list_single_ai3_gene_pane_g2

0x0001,

0xfcdd,	// (0x00018ce2) list_single_ai3_gene_pane_g

0xe801,	// (0x00017806) list_double_ai3_gene_pane_g1_ParamLimits

0xe801,	// (0x00017806) list_double_ai3_gene_pane_g1

0xe80d,	// (0x00017812) list_double_ai3_gene_pane_t1_ParamLimits

0xe80d,	// (0x00017812) list_double_ai3_gene_pane_t1

0xe829,	// (0x0001782e) list_double_ai3_gene_pane_t2_ParamLimits

0xe829,	// (0x0001782e) list_double_ai3_gene_pane_t2

0xe83e,	// (0x00017843) list_double_ai3_gene_pane_t3_ParamLimits

0xe83e,	// (0x00017843) list_double_ai3_gene_pane_t3

0x0002,

0xfce2,	// (0x00018ce7) list_double_ai3_gene_pane_t_ParamLimits

0xfce2,	// (0x00018ce7) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe5f8,	// (0x000175fd) aid_size_min_col_2

0xe602,	// (0x00017607) aid_size_min_msg_ParamLimits

0xe602,	// (0x00017607) aid_size_min_msg

0xd6d9,	// (0x000166de) fep_vkb_top_text_pane_g2_ParamLimits

0xd6d9,	// (0x000166de) fep_vkb_top_text_pane_g2

0x0001,

0xfb49,	// (0x00018b4e) fep_vkb_top_text_pane_g_ParamLimits

0xfb49,	// (0x00018b4e) fep_vkb_top_text_pane_g

0x7d98,	// (0x00010d9d) main_hc_apps_shell_pane

0xe85b,	// (0x00017860) grid_hc_apps_pane_ParamLimits

0xe85b,	// (0x00017860) grid_hc_apps_pane

0xe86a,	// (0x0001786f) list_hc_apps_pane

0xe872,	// (0x00017877) scroll_pane_cp37_ParamLimits

0xe872,	// (0x00017877) scroll_pane_cp37

0xe87e,	// (0x00017883) cell_hc_apps_pane_ParamLimits

0xe87e,	// (0x00017883) cell_hc_apps_pane

0xe92e,	// (0x00017933) cell_hc_apps_pane_g1_ParamLimits

0xe92e,	// (0x00017933) cell_hc_apps_pane_g1

0xe95f,	// (0x00017964) cell_hc_apps_pane_g2_ParamLimits

0xe95f,	// (0x00017964) cell_hc_apps_pane_g2

0xe97b,	// (0x00017980) cell_hc_apps_pane_g3_ParamLimits

0xe97b,	// (0x00017980) cell_hc_apps_pane_g3

0x0002,

0xfce9,	// (0x00018cee) cell_hc_apps_pane_g_ParamLimits

0xfce9,	// (0x00018cee) cell_hc_apps_pane_g

0xe99d,	// (0x000179a2) cell_hc_apps_pane_t1_ParamLimits

0xe99d,	// (0x000179a2) cell_hc_apps_pane_t1

0x812f,	// (0x00011134) grid_highlight_pane_cp10_ParamLimits

0x812f,	// (0x00011134) grid_highlight_pane_cp10

0xe9dd,	// (0x000179e2) list_single_hc_apps_pane_ParamLimits

0xe9dd,	// (0x000179e2) list_single_hc_apps_pane

0xea50,	// (0x00017a55) list_single_hc_apps_pane_g1

0xea69,	// (0x00017a6e) list_single_hc_apps_pane_g2

0x0001,

0xfcf0,	// (0x00018cf5) list_single_hc_apps_pane_g

0xea82,	// (0x00017a87) list_single_hc_apps_pane_g2_copy1

0xea9e,	// (0x00017aa3) list_single_hc_apps_pane_t1

0x7e8c,	// (0x00010e91) bg_set_opt_pane_cp_ParamLimits

0x6509,	// (0x0000f50e) setting_slider_pane_t1_ParamLimits

0x6522,	// (0x0000f527) setting_slider_pane_t2_ParamLimits

0x653b,	// (0x0000f540) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0001857f) setting_slider_pane_t_ParamLimits

0x6552,	// (0x0000f557) slider_set_pane_ParamLimits

0x6a78,	// (0x0000fa7d) control_pane_g5_ParamLimits

0x6a78,	// (0x0000fa7d) control_pane_g5

0xbd8e,	// (0x00014d93) slider_set_pane_g1_ParamLimits

0x6ee6,	// (0x0000feeb) slider_set_pane_g2_ParamLimits

0x6ef2,	// (0x0000fef7) slider_set_pane_g3_ParamLimits

0x6f06,	// (0x0000ff0b) slider_set_pane_g4_ParamLimits

0x6f1e,	// (0x0000ff23) slider_set_pane_g5_ParamLimits

0x6ef2,	// (0x0000fef7) slider_set_pane_g6_ParamLimits

0x6f34,	// (0x0000ff39) slider_set_pane_g7_ParamLimits

0xf970,	// (0x00018975) slider_set_pane_g_ParamLimits

0x992e,	// (0x00012933) navi_icon_text_pane_ParamLimits

0xa3fd,	// (0x00013402) aid_fill_nsta_2_ParamLimits

0xa43c,	// (0x00013441) aid_touch_tab_arrow_left_ParamLimits

0xa44b,	// (0x00013450) aid_touch_tab_arrow_right_ParamLimits

0xa4b8,	// (0x000134bd) clock_nsta_pane_ParamLimits

0xb83d,	// (0x00014842) navi_icon_pane_g1_ParamLimits

0xb84c,	// (0x00014851) navi_text_pane_t1_ParamLimits

0xce0b,	// (0x00015e10) navi_icon_text_pane_g1_ParamLimits

0xce1a,	// (0x00015e1f) navi_icon_text_pane_t1_ParamLimits

0xea50,	// (0x00017a55) list_single_hc_apps_pane_g1_ParamLimits

0xea69,	// (0x00017a6e) list_single_hc_apps_pane_g2_ParamLimits

0xfcf0,	// (0x00018cf5) list_single_hc_apps_pane_g_ParamLimits

0xea82,	// (0x00017a87) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xea9e,	// (0x00017aa3) list_single_hc_apps_pane_t1_ParamLimits

0x6423,	// (0x0000f428) popup_toolbar2_fixed_window_ParamLimits

0x6423,	// (0x0000f428) popup_toolbar2_fixed_window

0xa315,	// (0x0001331a) popup_toolbar2_float_window

0x7d98,	// (0x00010d9d) bg_popup_sub_pane_cp27

0xeacc,	// (0x00017ad1) grid_toolbar2_float_pane

0x7d98,	// (0x00010d9d) bg_popup_sub_pane_cp26

0xeacc,	// (0x00017ad1) grid_toolbar2_fixed_pane

0xead4,	// (0x00017ad9) cell_toolbar2_fixed_pane_ParamLimits

0xead4,	// (0x00017ad9) cell_toolbar2_fixed_pane

0xeae5,	// (0x00017aea) cell_toolbar2_fixed_pane_g1

0xeaee,	// (0x00017af3) toolbar2_fixed_button_pane

0xa8e8,	// (0x000138ed) toolbar2_fixed_button_pane_g1

0xa8f8,	// (0x000138fd) toolbar2_fixed_button_pane_g2

0xa8f0,	// (0x000138f5) toolbar2_fixed_button_pane_g3

0xa908,	// (0x0001390d) toolbar2_fixed_button_pane_g4

0xa900,	// (0x00013905) toolbar2_fixed_button_pane_g5

0xa910,	// (0x00013915) toolbar2_fixed_button_pane_g6

0xa918,	// (0x0001391d) toolbar2_fixed_button_pane_g7

0xa928,	// (0x0001392d) toolbar2_fixed_button_pane_g8

0xa920,	// (0x00013925) toolbar2_fixed_button_pane_g9

0x0008,

0xf872,	// (0x00018877) toolbar2_fixed_button_pane_g

0xeaf6,	// (0x00017afb) cell_toolbar2_float_pane_ParamLimits

0xeaf6,	// (0x00017afb) cell_toolbar2_float_pane

0xeb07,	// (0x00017b0c) cell_toolbar2_float_pane_g1

0xeaee,	// (0x00017af3) toolbar2_fixed_button_pane_cp

0xd42e,	// (0x00016433) fep_vkb_accented_list_pane_ParamLimits

0xd42e,	// (0x00016433) fep_vkb_accented_list_pane

0x72fa,	// (0x000102ff) bg_popup_fep_shadow_pane_g9

0x9ab0,	// (0x00012ab5) bg_popup_fep_shadow_pane_cp3

0x8f3f,	// (0x00011f44) list_accented_list_pane

0xeb10,	// (0x00017b15) list_single_accented_list_pane_ParamLimits

0xeb10,	// (0x00017b15) list_single_accented_list_pane

0x9ab0,	// (0x00012ab5) list_highlight_pane_cp10

0xeb21,	// (0x00017b26) list_single_accented_list_pane_t1

0xa265,	// (0x0001326a) popup_slider_window_ParamLimits

0xa265,	// (0x0001326a) popup_slider_window

0xe5ef,	// (0x000175f4) aid_indentation_list_msg

0xebdb,	// (0x00017be0) bg_popup_window_pane_cp19

0xec45,	// (0x00017c4a) popup_slider_window_g1

0xec61,	// (0x00017c66) popup_slider_window_g2

0xec7d,	// (0x00017c82) popup_slider_window_g3

0x0005,

0xfcf5,	// (0x00018cfa) popup_slider_window_g

0xecd9,	// (0x00017cde) popup_slider_window_t1

0xed4d,	// (0x00017d52) small_volume_slider_vertical_pane

0xd2ec,	// (0x000162f1) small_volume_slider_vertical_pane_g1

0xd2ec,	// (0x000162f1) small_volume_slider_vertical_pane_g2

0xed69,	// (0x00017d6e) small_volume_slider_vertical_pane_g3

0x0002,

0xfd07,	// (0x00018d0c) small_volume_slider_vertical_pane_g

0x61e9,	// (0x0000f1ee) area_side_right_pane_ParamLimits

0x61e9,	// (0x0000f1ee) area_side_right_pane

0x74dc,	// (0x000104e1) aid_size_side_button_ParamLimits

0x74dc,	// (0x000104e1) aid_size_side_button

0x74f0,	// (0x000104f5) grid_sctrl_middle_pane_ParamLimits

0x74f0,	// (0x000104f5) grid_sctrl_middle_pane

0x7510,	// (0x00010515) sctrl_sk_bottom_pane

0x7521,	// (0x00010526) sctrl_sk_top_pane

0x7533,	// (0x00010538) aid_touch_sctrl_top

0x7540,	// (0x00010545) bg_sctrl_sk_pane_ParamLimits

0x7540,	// (0x00010545) bg_sctrl_sk_pane

0x754e,	// (0x00010553) sctrl_sk_top_pane_g1

0x755b,	// (0x00010560) sctrl_sk_top_pane_t1

0x7533,	// (0x00010538) aid_touch_sctrl_bottom

0x7540,	// (0x00010545) bg_sctrl_sk_pane_cp_ParamLimits

0x7540,	// (0x00010545) bg_sctrl_sk_pane_cp

0x7576,	// (0x0001057b) sctrl_sk_bottom_pane_g1

0x755b,	// (0x00010560) sctrl_sk_bottom_pane_t1

0x757f,	// (0x00010584) cell_sctrl_middle_pane_ParamLimits

0x757f,	// (0x00010584) cell_sctrl_middle_pane

0x759a,	// (0x0001059f) aid_touch_sctrl_middle_ParamLimits

0x759a,	// (0x0001059f) aid_touch_sctrl_middle

0x75ac,	// (0x000105b1) bg_sctrl_middle_pane_ParamLimits

0x75ac,	// (0x000105b1) bg_sctrl_middle_pane

0x731a,	// (0x0001031f) cell_sctrl_middle_pane_g1_ParamLimits

0x731a,	// (0x0001031f) cell_sctrl_middle_pane_g1

0x75ba,	// (0x000105bf) cell_sctrl_middle_pane_g2_ParamLimits

0x75ba,	// (0x000105bf) cell_sctrl_middle_pane_g2

0x0001,

0xfd13,	// (0x00018d18) cell_sctrl_middle_pane_g_ParamLimits

0xfd13,	// (0x00018d18) cell_sctrl_middle_pane_g

0xa8e8,	// (0x000138ed) bg_sctrl_middle_pane_g1

0xa8f0,	// (0x000138f5) bg_sctrl_middle_pane_g2

0xa8f8,	// (0x000138fd) bg_sctrl_middle_pane_g3

0xa900,	// (0x00013905) bg_sctrl_middle_pane_g4

0xa908,	// (0x0001390d) bg_sctrl_middle_pane_g5

0xa910,	// (0x00013915) bg_sctrl_middle_pane_g6

0xa918,	// (0x0001391d) bg_sctrl_middle_pane_g7

0xa920,	// (0x00013925) bg_sctrl_middle_pane_g8

0x0007,

0xfd18,	// (0x00018d1d) bg_sctrl_middle_pane_g

0xa928,	// (0x0001392d) bg_sctrl_middle_pane_g8_copy1

0xa8e8,	// (0x000138ed) bg_sctrl_sk_pane_g1

0xa8f8,	// (0x000138fd) bg_sctrl_sk_pane_g2

0xa8f0,	// (0x000138f5) bg_sctrl_sk_pane_g3

0x0008,

0xf872,	// (0x00018877) bg_sctrl_sk_pane_g

0x8628,	// (0x0001162d) aid_size_touch_scroll_bar

0xa908,	// (0x0001390d) bg_sctrl_sk_pane_g4

0xa900,	// (0x00013905) bg_sctrl_sk_pane_g5

0xa910,	// (0x00013915) bg_sctrl_sk_pane_g6

0xa918,	// (0x0001391d) bg_sctrl_sk_pane_g7

0xa928,	// (0x0001392d) bg_sctrl_sk_pane_g8

0xa920,	// (0x00013925) bg_sctrl_sk_pane_g9

0x9ede,	// (0x00012ee3) popup_fep_china_hwr2_fs_candidate_window

0x9ee8,	// (0x00012eed) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9ee8,	// (0x00012eed) popup_fep_china_hwr2_fs_control_window

0x731a,	// (0x0001031f) sctrl_sk_top_pane_g2

0x0001,

0xfd0e,	// (0x00018d13) sctrl_sk_top_pane_g

0xed72,	// (0x00017d77) aid_fep_china_hwr2_fs_cell_ParamLimits

0xed72,	// (0x00017d77) aid_fep_china_hwr2_fs_cell

0xed84,	// (0x00017d89) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xed84,	// (0x00017d89) bg_popup_fep_shadow_pane_cp4

0xed9b,	// (0x00017da0) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xed9b,	// (0x00017da0) bg_popup_fep_shadow_pane_cp5

0xedad,	// (0x00017db2) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xedad,	// (0x00017db2) popup_fep_china_hwr2_fs_control_bar_grid

0xedbd,	// (0x00017dc2) popup_fep_china_hwr2_fs_control_funtion_grid

0xedc5,	// (0x00017dca) aid_fep_china_hwr2_fs_candi_cell

0x7d98,	// (0x00010d9d) bg_popup_fep_shadow_pane_cp6

0xedcf,	// (0x00017dd4) popup_fep_china_hwr2_fs_candidate_grid

0xedd9,	// (0x00017dde) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xedd9,	// (0x00017dde) cell_fep_china_hwr2_fs_funtion_grid

0xd2ec,	// (0x000162f1) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xedf1,	// (0x00017df6) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xedf1,	// (0x00017df6) cell_fep_china_hwr2_fs_funtion_grid_g1

0xedff,	// (0x00017e04) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xedff,	// (0x00017e04) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd29,	// (0x00018d2e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd29,	// (0x00018d2e) cell_fep_china_hwr2_fs_funtion_grid_g

0xee15,	// (0x00017e1a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xee15,	// (0x00017e1a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xee2a,	// (0x00017e2f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xee2a,	// (0x00017e2f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2e,	// (0x00018d33) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2e,	// (0x00018d33) cell_fep_china_hwr2_fs_funtion_grid_t

0xee46,	// (0x00017e4b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xee4e,	// (0x00017e53) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xee56,	// (0x00017e5b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd33,	// (0x00018d38) popup_fep_china_hwr2_fs_control_bar_grid_g

0xee5e,	// (0x00017e63) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xee5e,	// (0x00017e63) cell_fep_china_hwr2_fs_candidate_grid

0xee77,	// (0x00017e7c) popup_fep_china_hwr2_fs_candidate_grid_g20

0xee7f,	// (0x00017e84) popup_fep_china_hwr2_fs_candidate_grid_g21

0xd2ec,	// (0x000162f1) cell_fep_china_hwr2_fs_candidate_grid_g1

0xd2ec,	// (0x000162f1) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4e,	// (0x00018b53) cell_fep_china_hwr2_fs_candidate_grid_g

0xee87,	// (0x00017e8c) cell_fep_china_hwr2_fs_candidate_grid_t1

0xa4c5,	// (0x000134ca) clock_nsta_pane_cp_24_ParamLimits

0xa4c5,	// (0x000134ca) clock_nsta_pane_cp_24

0xa543,	// (0x00013548) indicator_nsta_pane_cp_24_ParamLimits

0xa543,	// (0x00013548) indicator_nsta_pane_cp_24

0xb6b9,	// (0x000146be) heading_pane_g1

0x0001,

0xf8d7,	// (0x000188dc) heading_pane_g

0xc1f6,	// (0x000151fb) grid_sct_catagory_button_pane

0xc228,	// (0x0001522d) scroll_pane_cp5_ParamLimits

0xce5f,	// (0x00015e64) button_value_adjust_pane_cp5_ParamLimits

0xce5f,	// (0x00015e64) button_value_adjust_pane_cp5

0xcf57,	// (0x00015f5c) form2_midp_time_pane_ParamLimits

0xee95,	// (0x00017e9a) cell_sct_catagory_button_pane_ParamLimits

0xee95,	// (0x00017e9a) cell_sct_catagory_button_pane

0xd2b1,	// (0x000162b6) bg_button_pane_cp01_ParamLimits

0xd2b1,	// (0x000162b6) bg_button_pane_cp01

0xd2ec,	// (0x000162f1) cell_sct_catagory_button_pane_g1

0xa2a4,	// (0x000132a9) popup_tb_extension_window

0xeea7,	// (0x00017eac) aid_size_cell_ext_ParamLimits

0xeea7,	// (0x00017eac) aid_size_cell_ext

0x812f,	// (0x00011134) bg_tb_trans_pane_cp1_ParamLimits

0x812f,	// (0x00011134) bg_tb_trans_pane_cp1

0xeec7,	// (0x00017ecc) grid_tb_ext_pane_ParamLimits

0xeec7,	// (0x00017ecc) grid_tb_ext_pane

0xeef9,	// (0x00017efe) cell_tb_ext_pane_ParamLimits

0xeef9,	// (0x00017efe) cell_tb_ext_pane

0xef10,	// (0x00017f15) cell_tb_ext_pane_g1_ParamLimits

0xef10,	// (0x00017f15) cell_tb_ext_pane_g1

0xef2d,	// (0x00017f32) cell_tb_ext_pane_t1

0x812f,	// (0x00011134) list_highlight_pane_cp11_ParamLimits

0x812f,	// (0x00011134) list_highlight_pane_cp11

0x6442,	// (0x0000f447) popup_uni_indicator_window_ParamLimits

0x6442,	// (0x0000f447) popup_uni_indicator_window

0x8c65,	// (0x00011c6a) bg_popup_sub_pane_cp14

0xef48,	// (0x00017f4d) list_uniindi_pane

0xef54,	// (0x00017f59) uniindi_top_pane

0x812f,	// (0x00011134) bg_uniindi_top_pane

0xef73,	// (0x00017f78) uniindi_top_pane_g1

0xef89,	// (0x00017f8e) uniindi_top_pane_g2

0x0003,

0xfd3a,	// (0x00018d3f) uniindi_top_pane_g

0xefb3,	// (0x00017fb8) uniindi_top_pane_t1

0xefdd,	// (0x00017fe2) list_single_uniindi_pane_ParamLimits

0xefdd,	// (0x00017fe2) list_single_uniindi_pane

0xd2ec,	// (0x000162f1) bg_uniindi_top_pane_g1

0xefef,	// (0x00017ff4) list_single_uniindi_pane_g1

0xf002,	// (0x00018007) list_single_uniindi_pane_t1

0x62c6,	// (0x0000f2cb) control_bg_pane

0xf027,	// (0x0001802c) bg_sctrl_sk_pane_cp1

0xf030,	// (0x00018035) bg_sctrl_sk_pane_cp2

0xf039,	// (0x0001803e) control_bg_pane_g1

0xf042,	// (0x00018047) control_bg_pane_g2

0x0001,

0xfd43,	// (0x00018d48) control_bg_pane_g

0xcc8b,	// (0x00015c90) cell_indicator_nsta_pane_g1_ParamLimits

0xcc99,	// (0x00015c9e) cell_indicator_nsta_pane_g2_ParamLimits

0xfab2,	// (0x00018ab7) cell_indicator_nsta_pane_g_ParamLimits

0xcfdb,	// (0x00015fe0) form2_midp_time_pane_t1_ParamLimits

0x846a,	// (0x0001146f) main_idle_act4_pane_ParamLimits

0x846a,	// (0x0001146f) main_idle_act4_pane

0xa2a4,	// (0x000132a9) popup_tb_extension_window_ParamLimits

0xeee9,	// (0x00017eee) tb_ext_find_pane_ParamLimits

0xeee9,	// (0x00017eee) tb_ext_find_pane

0xf04b,	// (0x00018050) ai_gene_pane_1_cp1

0x9bf9,	// (0x00012bfe) ai_gene_pane_2_cp1

0xf053,	// (0x00018058) list_single_idle_plugin_calendar_pane

0xf05c,	// (0x00018061) list_single_idle_plugin_notification_pane

0xf065,	// (0x0001806a) list_single_idle_plugin_player_pane

0xf06e,	// (0x00018073) list_single_idle_plugin_shortcut_pane_ParamLimits

0xf06e,	// (0x00018073) list_single_idle_plugin_shortcut_pane

0xf090,	// (0x00018095) main_idle_act4_pane_t1

0xf0a2,	// (0x000180a7) main_idle_act4_pane_t2

0x0001,

0xfd48,	// (0x00018d4d) main_idle_act4_pane_t

0xf0b4,	// (0x000180b9) middle_sk_idle_act4_pane_ParamLimits

0xf0b4,	// (0x000180b9) middle_sk_idle_act4_pane

0xf0ca,	// (0x000180cf) popup_clock_digital_analogue_window_cp2

0xf0e4,	// (0x000180e9) shortcut_wheel_idle_act4_pane_ParamLimits

0xf0e4,	// (0x000180e9) shortcut_wheel_idle_act4_pane

0xd2ec,	// (0x000162f1) shortcut_wheel_idle_act4_pane_g1

0xd2ec,	// (0x000162f1) shortcut_wheel_idle_act4_pane_g2

0xd2ec,	// (0x000162f1) shortcut_wheel_idle_act4_pane_g3

0xd2ec,	// (0x000162f1) shortcut_wheel_idle_act4_pane_g4

0xd2ec,	// (0x000162f1) shortcut_wheel_idle_act4_pane_g5

0xf0f8,	// (0x000180fd) shortcut_wheel_idle_act4_pane_g6

0xf100,	// (0x00018105) shortcut_wheel_idle_act4_pane_g7

0xf108,	// (0x0001810d) shortcut_wheel_idle_act4_pane_g8

0xf110,	// (0x00018115) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4d,	// (0x00018d52) shortcut_wheel_idle_act4_pane_g

0xd585,	// (0x0001658a) middle_sk_idle_act4_pane_g1_ParamLimits

0xd585,	// (0x0001658a) middle_sk_idle_act4_pane_g1

0xf174,	// (0x00018179) middle_sk_idle_act4_pane_g2_ParamLimits

0xf174,	// (0x00018179) middle_sk_idle_act4_pane_g2

0x0001,

0xfd70,	// (0x00018d75) middle_sk_idle_act4_pane_g_ParamLimits

0xfd70,	// (0x00018d75) middle_sk_idle_act4_pane_g

0xf180,	// (0x00018185) middle_sk_idle_act4_pane_t1_ParamLimits

0xf180,	// (0x00018185) middle_sk_idle_act4_pane_t1

0xf19d,	// (0x000181a2) grid_ai_shortcut_pane_ParamLimits

0xf19d,	// (0x000181a2) grid_ai_shortcut_pane

0xf1b6,	// (0x000181bb) list_highlight_pane_cp16_ParamLimits

0xf1b6,	// (0x000181bb) list_highlight_pane_cp16

0xf1c3,	// (0x000181c8) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xf1c3,	// (0x000181c8) list_single_idle_plugin_shortcut_pane_g1

0xf1cf,	// (0x000181d4) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xf1cf,	// (0x000181d4) list_single_idle_plugin_shortcut_pane_g2

0xf1e7,	// (0x000181ec) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xf1e7,	// (0x000181ec) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd75,	// (0x00018d7a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd75,	// (0x00018d7a) list_single_idle_plugin_shortcut_pane_g

0xf1fa,	// (0x000181ff) cell_ai_shortcut_pane_ParamLimits

0xf1fa,	// (0x000181ff) cell_ai_shortcut_pane

0xf21b,	// (0x00018220) cell_ai_shortcut_pane_g1_ParamLimits

0xf21b,	// (0x00018220) cell_ai_shortcut_pane_g1

0xf04b,	// (0x00018050) ai_gene_pane_1_cp2

0xf23d,	// (0x00018242) ai_gene_pane_2_cp2

0xf245,	// (0x0001824a) list_highlight_pane_cp15

0xf24e,	// (0x00018253) list_single_idle_plugin_calendar_pane_g1

0xf245,	// (0x0001824a) list_highlight_pane_cp17

0xf256,	// (0x0001825b) list_single_idle_plugin_calendar_pane_g1_copy1

0xf25e,	// (0x00018263) list_single_idle_plugin_player_pane_g1

0xc44f,	// (0x00015454) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7c,	// (0x00018d81) list_single_idle_plugin_player_pane_g

0xf266,	// (0x0001826b) list_single_idle_plugin_player_pane_t1

0xf274,	// (0x00018279) list_single_idle_plugin_player_pane_t2

0xf282,	// (0x00018287) list_single_idle_plugin_player_pane_t3

0xf290,	// (0x00018295) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd81,	// (0x00018d86) list_single_idle_plugin_player_pane_t

0xf29e,	// (0x000182a3) wait_bar_pane_cp15

0xf2a6,	// (0x000182ab) grid_ai_notification_pane

0xc44f,	// (0x00015454) list_single_idle_plugin_notification_pane_g1

0xf2af,	// (0x000182b4) cell_ai_notification_pane_ParamLimits

0xf2af,	// (0x000182b4) cell_ai_notification_pane

0xf2bc,	// (0x000182c1) cell_ai_notification_pane_g1

0xf2c4,	// (0x000182c9) cell_ai_notification_pane_t1

0xf2d2,	// (0x000182d7) tb_ext_find_button_pane

0xf2da,	// (0x000182df) tb_ext_find_pane_g1

0xf2e2,	// (0x000182e7) tb_ext_find_pane_t1

0x9443,	// (0x00012448) tb_ext_find_button_pane_g1

0xf2f0,	// (0x000182f5) tb_ext_find_button_pane_g2

0x0001,

0xfd8a,	// (0x00018d8f) tb_ext_find_button_pane_g

0xf090,	// (0x00018095) main_idle_act4_pane_t1_ParamLimits

0xf0a2,	// (0x000180a7) main_idle_act4_pane_t2_ParamLimits

0xfd48,	// (0x00018d4d) main_idle_act4_pane_t_ParamLimits

0xf0ca,	// (0x000180cf) popup_clock_digital_analogue_window_cp2_ParamLimits

0xf0d8,	// (0x000180dd) sat_plugin_idle_act4_pane_ParamLimits

0xf0d8,	// (0x000180dd) sat_plugin_idle_act4_pane

0xf2f9,	// (0x000182fe) sat_plugin_idle_act4_pane_t1_ParamLimits

0xf2f9,	// (0x000182fe) sat_plugin_idle_act4_pane_t1

0xf30c,	// (0x00018311) sat_plugin_idle_act4_pane_t2_ParamLimits

0xf30c,	// (0x00018311) sat_plugin_idle_act4_pane_t2

0xf31f,	// (0x00018324) sat_plugin_idle_act4_pane_t3_ParamLimits

0xf31f,	// (0x00018324) sat_plugin_idle_act4_pane_t3

0xf332,	// (0x00018337) sat_plugin_idle_act4_pane_t4_ParamLimits

0xf332,	// (0x00018337) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8f,	// (0x00018d94) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8f,	// (0x00018d94) sat_plugin_idle_act4_pane_t

0x638b,	// (0x0000f390) popup_battery_window_ParamLimits

0x638b,	// (0x0000f390) popup_battery_window

0x812f,	// (0x00011134) bg_popup_sub_pane_cp25_ParamLimits

0x812f,	// (0x00011134) bg_popup_sub_pane_cp25

0xf345,	// (0x0001834a) popup_battery_window_g1_ParamLimits

0xf345,	// (0x0001834a) popup_battery_window_g1

0xf351,	// (0x00018356) popup_battery_window_t1_ParamLimits

0xf351,	// (0x00018356) popup_battery_window_t1

0xf363,	// (0x00018368) popup_battery_window_t2_ParamLimits

0xf363,	// (0x00018368) popup_battery_window_t2

0x0001,

0xfd98,	// (0x00018d9d) popup_battery_window_t_ParamLimits

0xfd98,	// (0x00018d9d) popup_battery_window_t

0x9ac4,	// (0x00012ac9) midp_canvas_pane_ParamLimits

0x9b3b,	// (0x00012b40) midp_keypad_pane_ParamLimits

0x9b3b,	// (0x00012b40) midp_keypad_pane

0x9e36,	// (0x00012e3b) main_midp_pane_ParamLimits

0xcd17,	// (0x00015d1c) signal_pane_g2_cp_ParamLimits

0xf380,	// (0x00018385) aid_size_cell_midp_keypad_ParamLimits

0xf380,	// (0x00018385) aid_size_cell_midp_keypad

0xf39a,	// (0x0001839f) midp_keyp_game_grid_pane_ParamLimits

0xf39a,	// (0x0001839f) midp_keyp_game_grid_pane

0xf3ba,	// (0x000183bf) midp_keyp_rocker_pane_ParamLimits

0xf3ba,	// (0x000183bf) midp_keyp_rocker_pane

0xf3f3,	// (0x000183f8) midp_keyp_sk_left_pane_ParamLimits

0xf3f3,	// (0x000183f8) midp_keyp_sk_left_pane

0xf44d,	// (0x00018452) midp_keyp_sk_right_pane_ParamLimits

0xf44d,	// (0x00018452) midp_keyp_sk_right_pane

0x7d98,	// (0x00010d9d) bg_button_pane_cp03

0xf4a7,	// (0x000184ac) midp_keyp_sk_left_pane_g1

0x7d98,	// (0x00010d9d) bg_button_pane_cp04

0xf4a7,	// (0x000184ac) midp_keyp_sk_right_pane_g1

0xd2ec,	// (0x000162f1) midp_keyp_rocker_pane_g1

0xf4b0,	// (0x000184b5) keyp_game_cell_pane_ParamLimits

0xf4b0,	// (0x000184b5) keyp_game_cell_pane

0x7d98,	// (0x00010d9d) bg_button_pane_cp02

0xf4c3,	// (0x000184c8) keyp_game_cell_pane_g1

0x63c1,	// (0x0000f3c6) popup_fep_vkb2_window_ParamLimits

0x63c1,	// (0x0000f3c6) popup_fep_vkb2_window

0x75dc,	// (0x000105e1) aid_size_cell_vkb2_ParamLimits

0x75dc,	// (0x000105e1) aid_size_cell_vkb2

0x7630,	// (0x00010635) popup_fep_vkb2_window_g1_ParamLimits

0x7630,	// (0x00010635) popup_fep_vkb2_window_g1

0x7670,	// (0x00010675) vkb2_area_bottom_pane_ParamLimits

0x7670,	// (0x00010675) vkb2_area_bottom_pane

0x76bc,	// (0x000106c1) vkb2_area_keypad_pane_ParamLimits

0x76bc,	// (0x000106c1) vkb2_area_keypad_pane

0x76fe,	// (0x00010703) vkb2_area_top_pane_ParamLimits

0x76fe,	// (0x00010703) vkb2_area_top_pane

0x7778,	// (0x0001077d) vkb2_top_entry_pane_ParamLimits

0x7778,	// (0x0001077d) vkb2_top_entry_pane

0x77a2,	// (0x000107a7) vkb2_top_grid_left_pane_ParamLimits

0x77a2,	// (0x000107a7) vkb2_top_grid_left_pane

0x77c0,	// (0x000107c5) vkb2_top_grid_right_pane_ParamLimits

0x77c0,	// (0x000107c5) vkb2_top_grid_right_pane

0x77de,	// (0x000107e3) vkb2_cell_keypad_pane_ParamLimits

0x77de,	// (0x000107e3) vkb2_cell_keypad_pane

0x78af,	// (0x000108b4) vkb2_area_bottom_grid_pane_ParamLimits

0x78af,	// (0x000108b4) vkb2_area_bottom_grid_pane

0x78d5,	// (0x000108da) vkb2_area_bottom_pane_g1_ParamLimits

0x78d5,	// (0x000108da) vkb2_area_bottom_pane_g1

0x78f9,	// (0x000108fe) vkb2_area_bottom_pane_g2_ParamLimits

0x78f9,	// (0x000108fe) vkb2_area_bottom_pane_g2

0x7927,	// (0x0001092c) vkb2_area_bottom_pane_g3_ParamLimits

0x7927,	// (0x0001092c) vkb2_area_bottom_pane_g3

0x0002,

0xfd9d,	// (0x00018da2) vkb2_area_bottom_pane_g_ParamLimits

0xfd9d,	// (0x00018da2) vkb2_area_bottom_pane_g

0x7988,	// (0x0001098d) vkb2_top_cell_left_pane_ParamLimits

0x7988,	// (0x0001098d) vkb2_top_cell_left_pane

0xf4d4,	// (0x000184d9) vkb2_top_entry_pane_g1_ParamLimits

0xf4d4,	// (0x000184d9) vkb2_top_entry_pane_g1

0xf4e2,	// (0x000184e7) vkb2_top_entry_pane_t1_ParamLimits

0xf4e2,	// (0x000184e7) vkb2_top_entry_pane_t1

0xf514,	// (0x00018519) vkb2_top_entry_pane_t2_ParamLimits

0xf514,	// (0x00018519) vkb2_top_entry_pane_t2

0xf546,	// (0x0001854b) vkb2_top_entry_pane_t3_ParamLimits

0xf546,	// (0x0001854b) vkb2_top_entry_pane_t3

0x0002,

0xfda4,	// (0x00018da9) vkb2_top_entry_pane_t_ParamLimits

0xfda4,	// (0x00018da9) vkb2_top_entry_pane_t

0x79d5,	// (0x000109da) vkb2_top_grid_right_pane_g1_ParamLimits

0x79d5,	// (0x000109da) vkb2_top_grid_right_pane_g1

0x79eb,	// (0x000109f0) vkb2_top_grid_right_pane_g2_ParamLimits

0x79eb,	// (0x000109f0) vkb2_top_grid_right_pane_g2

0x7a03,	// (0x00010a08) vkb2_top_grid_right_pane_g3_ParamLimits

0x7a03,	// (0x00010a08) vkb2_top_grid_right_pane_g3

0x7a1b,	// (0x00010a20) vkb2_top_grid_right_pane_g4_ParamLimits

0x7a1b,	// (0x00010a20) vkb2_top_grid_right_pane_g4

0x0003,

0xfdab,	// (0x00018db0) vkb2_top_grid_right_pane_g_ParamLimits

0xfdab,	// (0x00018db0) vkb2_top_grid_right_pane_g

0x7a31,	// (0x00010a36) vkb2_top_cell_left_pane_g1

0x7a48,	// (0x00010a4d) vkb2_cell_keypad_pane_g1_ParamLimits

0x7a48,	// (0x00010a4d) vkb2_cell_keypad_pane_g1

0x001c,	// (0x00009021) vkb2_cell_keypad_pane_t1_ParamLimits

0x001c,	// (0x00009021) vkb2_cell_keypad_pane_t1

0x7a56,	// (0x00010a5b) vkb2_cell_bottom_grid_pane_ParamLimits

0x7a56,	// (0x00010a5b) vkb2_cell_bottom_grid_pane

0x7a8f,	// (0x00010a94) vkb2_cell_bottom_grid_pane_g1

0xf118,	// (0x0001811d) aid_call2_pane_cp02

0xf120,	// (0x00018125) aid_call_pane_cp02

0xf128,	// (0x0001812d) clock_digital_number_pane_cp10

0xf130,	// (0x00018135) clock_digital_number_pane_cp11

0xf138,	// (0x0001813d) clock_digital_number_pane_cp12

0xf140,	// (0x00018145) clock_digital_number_pane_cp13

0xf148,	// (0x0001814d) clock_digital_separator_pane_cp10

0x9443,	// (0x00012448) popup_clock_digital_analogue_window_cp2_g1

0x9443,	// (0x00012448) popup_clock_digital_analogue_window_cp2_g2

0xf150,	// (0x00018155) popup_clock_digital_analogue_window_cp2_g3

0x9443,	// (0x00012448) popup_clock_digital_analogue_window_cp2_g4

0xf150,	// (0x00018155) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd60,	// (0x00018d65) popup_clock_digital_analogue_window_cp2_g

0xf158,	// (0x0001815d) popup_clock_digital_analogue_window_cp2_t1

0xf166,	// (0x0001816b) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6b,	// (0x00018d70) popup_clock_digital_analogue_window_cp2_t

0xd2ec,	// (0x000162f1) clock_digital_number_pane_cp10_g1

0xd2ec,	// (0x000162f1) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4e,	// (0x00018b53) clock_digital_number_pane_cp10_g

0xd2ec,	// (0x000162f1) clock_digital_separator_pane_cp10_g1

0xd2ec,	// (0x000162f1) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4e,	// (0x00018b53) clock_digital_separator_pane_cp10_g

0xef95,	// (0x00017f9a) uniindi_top_pane_g3

0xefa6,	// (0x00017fab) uniindi_top_pane_g4

0x7869,	// (0x0001086e) vkb2_row_keypad_pane_ParamLimits

0x7869,	// (0x0001086e) vkb2_row_keypad_pane

0x7aaf,	// (0x00010ab4) vkb2_cell_t_keypad_pane_ParamLimits

0x7aaf,	// (0x00010ab4) vkb2_cell_t_keypad_pane

0x7abf,	// (0x00010ac4) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7abf,	// (0x00010ac4) vkb2_cell_t_keypad_pane_cp08

0x7ad2,	// (0x00010ad7) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7ad2,	// (0x00010ad7) vkb2_cell_t_keypad_pane_cp09

0x7ae6,	// (0x00010aeb) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7ae6,	// (0x00010aeb) vkb2_cell_t_keypad_pane_cp01

0x7af7,	// (0x00010afc) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7af7,	// (0x00010afc) vkb2_cell_t_keypad_pane_cp02

0x7b08,	// (0x00010b0d) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7b08,	// (0x00010b0d) vkb2_cell_t_keypad_pane_cp03

0x7b19,	// (0x00010b1e) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7b19,	// (0x00010b1e) vkb2_cell_t_keypad_pane_cp04

0x7b2a,	// (0x00010b2f) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7b2a,	// (0x00010b2f) vkb2_cell_t_keypad_pane_cp05

0x7b3b,	// (0x00010b40) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7b3b,	// (0x00010b40) vkb2_cell_t_keypad_pane_cp06

0x7b4c,	// (0x00010b51) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7b4c,	// (0x00010b51) vkb2_cell_t_keypad_pane_cp07

0x7b5d,	// (0x00010b62) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7b5d,	// (0x00010b62) vkb2_cell_t_keypad_pane_cp10

0x731a,	// (0x0001031f) vkb2_cell_t_keypad_pane_g1

0x014f,	// (0x00009154) vkb2_cell_t_keypad_pane_t1

0x62c6,	// (0x0000f2cb) popup_grid_graphic2_window

0x0161,	// (0x00009166) aid_size_cell_graphic2_ParamLimits

0x0161,	// (0x00009166) aid_size_cell_graphic2

0xd91c,	// (0x00016921) bg_popup_window_pane_cp21_ParamLimits

0xd91c,	// (0x00016921) bg_popup_window_pane_cp21

0x018d,	// (0x00009192) graphic2_pages_pane_ParamLimits

0x018d,	// (0x00009192) graphic2_pages_pane

0x01d3,	// (0x000091d8) grid_graphic2_control_pane_ParamLimits

0x01d3,	// (0x000091d8) grid_graphic2_control_pane

0x0201,	// (0x00009206) grid_graphic2_pane_ParamLimits

0x0201,	// (0x00009206) grid_graphic2_pane

0x0261,	// (0x00009266) cell_graphic2_pane

0x7d98,	// (0x00010d9d) main_comp_mode_pane

0xe795,	// (0x0001779a) list_ai3_gene_pane_ParamLimits

0xebdb,	// (0x00017be0) bg_popup_window_pane_cp19_ParamLimits

0xebe7,	// (0x00017bec) bg_touch_area_indi_pane_ParamLimits

0xebe7,	// (0x00017bec) bg_touch_area_indi_pane

0xebfd,	// (0x00017c02) bg_touch_area_indi_pane_cp01_ParamLimits

0xebfd,	// (0x00017c02) bg_touch_area_indi_pane_cp01

0xec13,	// (0x00017c18) bg_touch_area_indi_pane_cp02_ParamLimits

0xec13,	// (0x00017c18) bg_touch_area_indi_pane_cp02

0xec2b,	// (0x00017c30) bg_touch_area_indi_pane_cp03_ParamLimits

0xec2b,	// (0x00017c30) bg_touch_area_indi_pane_cp03

0xec45,	// (0x00017c4a) popup_slider_window_g1_ParamLimits

0xec61,	// (0x00017c66) popup_slider_window_g2_ParamLimits

0xec7d,	// (0x00017c82) popup_slider_window_g3_ParamLimits

0xfcf5,	// (0x00018cfa) popup_slider_window_g_ParamLimits

0xecd9,	// (0x00017cde) popup_slider_window_t1_ParamLimits

0xed4d,	// (0x00017d52) small_volume_slider_vertical_pane_ParamLimits

0x0261,	// (0x00009266) cell_graphic2_pane_ParamLimits

0x02b0,	// (0x000092b5) bg_button_pane_cp10_ParamLimits

0x02b0,	// (0x000092b5) bg_button_pane_cp10

0x02c3,	// (0x000092c8) bg_button_pane_cp11_ParamLimits

0x02c3,	// (0x000092c8) bg_button_pane_cp11

0x02d6,	// (0x000092db) graphic2_pages_pane_g1_ParamLimits

0x02d6,	// (0x000092db) graphic2_pages_pane_g1

0x02f1,	// (0x000092f6) graphic2_pages_pane_g2_ParamLimits

0x02f1,	// (0x000092f6) graphic2_pages_pane_g2

0x0001,

0xfdb9,	// (0x00018dbe) graphic2_pages_pane_g_ParamLimits

0xfdb9,	// (0x00018dbe) graphic2_pages_pane_g

0x0309,	// (0x0000930e) graphic2_pages_pane_t1_ParamLimits

0x0309,	// (0x0000930e) graphic2_pages_pane_t1

0x031f,	// (0x00009324) cell_graphic2_control_pane_ParamLimits

0x031f,	// (0x00009324) cell_graphic2_control_pane

0x0339,	// (0x0000933e) cell_graphic2_pane_g1_ParamLimits

0x0339,	// (0x0000933e) cell_graphic2_pane_g1

0x0346,	// (0x0000934b) cell_graphic2_pane_g2_ParamLimits

0x0346,	// (0x0000934b) cell_graphic2_pane_g2

0x0353,	// (0x00009358) cell_graphic2_pane_g3_ParamLimits

0x0353,	// (0x00009358) cell_graphic2_pane_g3

0x0360,	// (0x00009365) cell_graphic2_pane_g4_ParamLimits

0x0360,	// (0x00009365) cell_graphic2_pane_g4

0x036d,	// (0x00009372) cell_graphic2_pane_g5_ParamLimits

0x036d,	// (0x00009372) cell_graphic2_pane_g5

0x0004,

0xfdbe,	// (0x00018dc3) cell_graphic2_pane_g_ParamLimits

0xfdbe,	// (0x00018dc3) cell_graphic2_pane_g

0x0388,	// (0x0000938d) cell_graphic2_pane_t1_ParamLimits

0x0388,	// (0x0000938d) cell_graphic2_pane_t1

0xaa02,	// (0x00013a07) grid_highlight_pane_cp11_ParamLimits

0xaa02,	// (0x00013a07) grid_highlight_pane_cp11

0x8c65,	// (0x00011c6a) bg_button_pane_cp05

0x03b1,	// (0x000093b6) cell_graphic2_control_pane_g1

0xd2ec,	// (0x000162f1) bg_touch_area_indi_pane_g1

0x03be,	// (0x000093c3) aid_cmod_rocker_key_size

0x03c8,	// (0x000093cd) aid_cmode_itu_key_size

0x03d2,	// (0x000093d7) main_cmode_video_pane

0x03dc,	// (0x000093e1) main_comp_mode_itu_pane

0x03e8,	// (0x000093ed) main_comp_mode_rocker_pane

0x03f4,	// (0x000093f9) cell_cmode_rocker_pane_ParamLimits

0x03f4,	// (0x000093f9) cell_cmode_rocker_pane

0x0406,	// (0x0000940b) cell_cmode_itu_pane_ParamLimits

0x0406,	// (0x0000940b) cell_cmode_itu_pane

0x8c65,	// (0x00011c6a) bg_button_pane_cp06_ParamLimits

0x8c65,	// (0x00011c6a) bg_button_pane_cp06

0xd585,	// (0x0001658a) cell_cmode_rocker_pane_g1_ParamLimits

0xd585,	// (0x0001658a) cell_cmode_rocker_pane_g1

0xedf1,	// (0x00017df6) cell_cmode_rocker_pane_g2_ParamLimits

0xedf1,	// (0x00017df6) cell_cmode_rocker_pane_g2

0x0001,

0xfdce,	// (0x00018dd3) cell_cmode_rocker_pane_g_ParamLimits

0xfdce,	// (0x00018dd3) cell_cmode_rocker_pane_g

0x7d98,	// (0x00010d9d) bg_button_pane_cp07

0x041b,	// (0x00009420) cell_cmode_itu_pane_g1

0x0424,	// (0x00009429) cell_cmode_itu_pane_t1

0x0432,	// (0x00009437) cell_cmode_itu_pane_t2

0x0001,

0xfdd3,	// (0x00018dd8) cell_cmode_itu_pane_t

0xf017,	// (0x0001801c) aid_touch_ctrl_left

0xf01f,	// (0x00018024) aid_touch_ctrl_right

0x7d98,	// (0x00010d9d) compa_mode_pane

0x0440,	// (0x00009445) aid_cmod_rocker_key_size_cp

0x044a,	// (0x0000944f) aid_cmode_itu_key_size_cp

0x0454,	// (0x00009459) compa_mode_pane_g1

0x045c,	// (0x00009461) compa_mode_pane_g2

0x0464,	// (0x00009469) compa_mode_pane_g3

0x0002,

0xfdd8,	// (0x00018ddd) compa_mode_pane_g

0x046c,	// (0x00009471) main_comp_mode_itu_pane_cp

0x0474,	// (0x00009479) main_comp_mode_rocker_pane_cp

0x047c,	// (0x00009481) cell_cmode_itu_pane_cp_ParamLimits

0x047c,	// (0x00009481) cell_cmode_itu_pane_cp

0x0491,	// (0x00009496) cell_cmode_rocker_pane_cp_ParamLimits

0x0491,	// (0x00009496) cell_cmode_rocker_pane_cp

0x8c65,	// (0x00011c6a) bg_button_pane_cp06_cp_ParamLimits

0x8c65,	// (0x00011c6a) bg_button_pane_cp06_cp

0xd585,	// (0x0001658a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xd585,	// (0x0001658a) cell_cmode_rocker_pane_g1_cp

0xd2ec,	// (0x000162f1) cell_cmode_rocker_pane_g2_cp

0x7d98,	// (0x00010d9d) bg_button_pane_cp07_cp

0x04a3,	// (0x000094a8) cell_cmode_itu_pane_g1_cp

0x04ac,	// (0x000094b1) cell_cmode_itu_pane_t1_cp

0x04ac,	// (0x000094b1) cell_cmode_itu_pane_t2_cp

0xbf1e,	// (0x00014f23) settings_code_pane_cp2

0x7e8c,	// (0x00010e91) bg_popup_window_pane_cp3_ParamLimits

0x82fd,	// (0x00011302) heading_pane_cp3_ParamLimits

0x8309,	// (0x0001130e) listscroll_popup_graphic_pane_ParamLimits

0x70c3,	// (0x000100c8) fep_hwr_aid_pane_ParamLimits

0x7533,	// (0x00010538) aid_touch_sctrl_top_ParamLimits

0x754e,	// (0x00010553) sctrl_sk_top_pane_g1_ParamLimits

0x731a,	// (0x0001031f) sctrl_sk_top_pane_g2_ParamLimits

0xfd0e,	// (0x00018d13) sctrl_sk_top_pane_g_ParamLimits

0x755b,	// (0x00010560) sctrl_sk_top_pane_t1_ParamLimits

0x7533,	// (0x00010538) aid_touch_sctrl_bottom_ParamLimits

0x755b,	// (0x00010560) sctrl_sk_bottom_pane_t1_ParamLimits

0xef61,	// (0x00017f66) aid_area_touch_clock

0x7740,	// (0x00010745) aid_vkb2_area_top_pane_cell_ParamLimits

0x7740,	// (0x00010745) aid_vkb2_area_top_pane_cell

0x788b,	// (0x00010890) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x788b,	// (0x00010890) aid_vkb2_area_bottom_pane_cell

0xf4cc,	// (0x000184d1) popup_char_count_window

0x04ba,	// (0x000094bf) popup_char_count_window_g1

0x04c3,	// (0x000094c8) popup_char_count_window_g2

0x04cc,	// (0x000094d1) popup_char_count_window_g3

0x0002,

0xfddf,	// (0x00018de4) popup_char_count_window_g

0x04d5,	// (0x000094da) popup_char_count_window_t1

0x760e,	// (0x00010613) popup_fep_char_preview_window_ParamLimits

0x760e,	// (0x00010613) popup_fep_char_preview_window

0x775e,	// (0x00010763) vkb2_top_candi_pane_ParamLimits

0x775e,	// (0x00010763) vkb2_top_candi_pane

0x04e3,	// (0x000094e8) cell_vkb2_top_candi_pane_ParamLimits

0x04e3,	// (0x000094e8) cell_vkb2_top_candi_pane

0x7b72,	// (0x00010b77) bg_popup_fep_char_preview_window_ParamLimits

0x7b72,	// (0x00010b77) bg_popup_fep_char_preview_window

0x7b80,	// (0x00010b85) popup_fep_char_preview_window_t1_ParamLimits

0x7b80,	// (0x00010b85) popup_fep_char_preview_window_t1

0x057a,	// (0x0000957f) bg_popup_fep_char_preview_window_g1

0x0572,	// (0x00009577) bg_popup_fep_char_preview_window_g2

0x056a,	// (0x0000956f) bg_popup_fep_char_preview_window_g3

0x05a2,	// (0x000095a7) bg_popup_fep_char_preview_window_g4

0x059a,	// (0x0000959f) bg_popup_fep_char_preview_window_g5

0x7bba,	// (0x00010bbf) bg_popup_fep_char_preview_window_g6

0x058a,	// (0x0000958f) bg_popup_fep_char_preview_window_g7

0x0582,	// (0x00009587) bg_popup_fep_char_preview_window_g8

0x05aa,	// (0x000095af) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde6,	// (0x00018deb) bg_popup_fep_char_preview_window_g

0x731a,	// (0x0001031f) cell_vkb2_top_candi_pane_g1_ParamLimits

0x731a,	// (0x0001031f) cell_vkb2_top_candi_pane_g1

0x7328,	// (0x0001032d) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7328,	// (0x0001032d) cell_vkb2_top_candi_pane_g2

0x05d3,	// (0x000095d8) cell_vkb2_top_candi_pane_g3_ParamLimits

0x05d3,	// (0x000095d8) cell_vkb2_top_candi_pane_g3

0x7bc2,	// (0x00010bc7) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7bc2,	// (0x00010bc7) cell_vkb2_top_candi_pane_g4

0xd8fb,	// (0x00016900) cell_vkb2_top_candi_pane_g5_ParamLimits

0xd8fb,	// (0x00016900) cell_vkb2_top_candi_pane_g5

0x7be3,	// (0x00010be8) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7be3,	// (0x00010be8) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf9,	// (0x00018dfe) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf9,	// (0x00018dfe) cell_vkb2_top_candi_pane_g

0x7bf1,	// (0x00010bf6) cell_vkb2_top_candi_pane_t1

0x6ed2,	// (0x0000fed7) aid_size_touch_slider_mark_ParamLimits

0x6ed2,	// (0x0000fed7) aid_size_touch_slider_mark

0x01c3,	// (0x000091c8) grid_graphic2_catg_pane_ParamLimits

0x01c3,	// (0x000091c8) grid_graphic2_catg_pane

0x023d,	// (0x00009242) popup_grid_graphic2_window_t1_ParamLimits

0x023d,	// (0x00009242) popup_grid_graphic2_window_t1

0x024f,	// (0x00009254) popup_grid_graphic2_window_t2_ParamLimits

0x024f,	// (0x00009254) popup_grid_graphic2_window_t2

0x0001,

0xfdb4,	// (0x00018db9) popup_grid_graphic2_window_t_ParamLimits

0xfdb4,	// (0x00018db9) popup_grid_graphic2_window_t

0x8c65,	// (0x00011c6a) bg_button_pane_cp05_ParamLimits

0x03b1,	// (0x000093b6) cell_graphic2_control_pane_g1_ParamLimits

0x0613,	// (0x00009618) cell_graphic2_catg_pane_ParamLimits

0x0613,	// (0x00009618) cell_graphic2_catg_pane

0x7d98,	// (0x00010d9d) bg_button_pane_cp12

0x0625,	// (0x0000962a) cell_graphic2_catg_pane_g1

0xef2d,	// (0x00017f32) cell_tb_ext_pane_t1_ParamLimits

0x79a8,	// (0x000109ad) vkb2_top_cell_right_narrow_pane_ParamLimits

0x79a8,	// (0x000109ad) vkb2_top_cell_right_narrow_pane

0x79c0,	// (0x000109c5) vkb2_top_cell_right_wide_pane_ParamLimits

0x79c0,	// (0x000109c5) vkb2_top_cell_right_wide_pane

0x70b5,	// (0x000100ba) bg_vkb2_func_pane_ParamLimits

0x70b5,	// (0x000100ba) bg_vkb2_func_pane

0x7a31,	// (0x00010a36) vkb2_top_cell_left_pane_g1_ParamLimits

0x70b5,	// (0x000100ba) bg_vkb2_fuc_pane_cp03_ParamLimits

0x70b5,	// (0x000100ba) bg_vkb2_fuc_pane_cp03

0x7a8f,	// (0x00010a94) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xa8f0,	// (0x000138f5) bg_vkb2_func_pane_g1

0xa8f8,	// (0x000138fd) bg_vkb2_func_pane_g2

0xa908,	// (0x0001390d) bg_vkb2_func_pane_g3

0xa900,	// (0x00013905) bg_vkb2_func_pane_g4

0xa910,	// (0x00013915) bg_vkb2_func_pane_g5

0xa918,	// (0x0001391d) bg_vkb2_func_pane_g6

0xa920,	// (0x00013925) bg_vkb2_func_pane_g7

0xa928,	// (0x0001392d) bg_vkb2_func_pane_g8

0xa8e8,	// (0x000138ed) bg_vkb2_func_pane_g9

0x0008,

0xfe06,	// (0x00018e0b) bg_vkb2_func_pane_g

0x70b5,	// (0x000100ba) bg_vkb2_fuc_pane_cp01_ParamLimits

0x70b5,	// (0x000100ba) bg_vkb2_fuc_pane_cp01

0x7a31,	// (0x00010a36) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7a31,	// (0x00010a36) vkb2_top_cell_right_wide_pane_g1

0x70b5,	// (0x000100ba) bg_vkb2_fuc_pane_cp02_ParamLimits

0x70b5,	// (0x000100ba) bg_vkb2_fuc_pane_cp02

0x7a8f,	// (0x00010a94) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7a8f,	// (0x00010a94) vkb2_top_cell_right_narrow_pane_g1

0xeb59,	// (0x00017b5e) aid_touch_area_decrease_ParamLimits

0xeb59,	// (0x00017b5e) aid_touch_area_decrease

0xeb7d,	// (0x00017b82) aid_touch_area_increase_ParamLimits

0xeb7d,	// (0x00017b82) aid_touch_area_increase

0xeb89,	// (0x00017b8e) aid_touch_area_mute_ParamLimits

0xeb89,	// (0x00017b8e) aid_touch_area_mute

0xebad,	// (0x00017bb2) aid_touch_area_slider_ParamLimits

0xebad,	// (0x00017bb2) aid_touch_area_slider

0xec99,	// (0x00017c9e) popup_slider_window_g4_ParamLimits

0xec99,	// (0x00017c9e) popup_slider_window_g4

0xeca5,	// (0x00017caa) popup_slider_window_g5_ParamLimits

0xeca5,	// (0x00017caa) popup_slider_window_g5

0xecc7,	// (0x00017ccc) popup_slider_window_g6_ParamLimits

0xecc7,	// (0x00017ccc) popup_slider_window_g6

0xed07,	// (0x00017d0c) popup_slider_window_t2_ParamLimits

0xed07,	// (0x00017d0c) popup_slider_window_t2

0x0001,

0xfd02,	// (0x00018d07) popup_slider_window_t_ParamLimits

0xfd02,	// (0x00018d07) popup_slider_window_t

0xed1f,	// (0x00017d24) slider_pane_ParamLimits

0xed1f,	// (0x00017d24) slider_pane

0x062e,	// (0x00009633) slider_pane_g1_ParamLimits

0x062e,	// (0x00009633) slider_pane_g1

0x0642,	// (0x00009647) slider_pane_g2_ParamLimits

0x0642,	// (0x00009647) slider_pane_g2

0x0658,	// (0x0000965d) slider_pane_g3_ParamLimits

0x0658,	// (0x0000965d) slider_pane_g3

0x0003,

0xfe19,	// (0x00018e1e) slider_pane_g_ParamLimits

0xfe19,	// (0x00018e1e) slider_pane_g

0xa300,	// (0x00013305) popup_tb_float_extension_window_ParamLimits

0xa300,	// (0x00013305) popup_tb_float_extension_window

0x0684,	// (0x00009689) aid_size_cell_tb_float_ext

0x7d98,	// (0x00010d9d) bg_popup_sub_window_cp28

0x0690,	// (0x00009695) grid_tb_float_ext_pane

0x069a,	// (0x0000969f) cell_tb_float_ext_pane_ParamLimits

0x069a,	// (0x0000969f) cell_tb_float_ext_pane

0x06b4,	// (0x000096b9) cell_tb_float_ext_pane_g1

0x06bd,	// (0x000096c2) grid_highlight_pane_cp12

0x7204,	// (0x00010209) cell_last_hwr_side_pane_ParamLimits

0x7204,	// (0x00010209) cell_last_hwr_side_pane

0xd2ec,	// (0x000162f1) cell_last_hwr_side_pane_g1

0x06c6,	// (0x000096cb) cell_last_hwr_side_pane_g2

0x0001,

0xfe22,	// (0x00018e27) cell_last_hwr_side_pane_g

0x7957,	// (0x0001095c) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7957,	// (0x0001095c) vkb2_area_bottom_space_btn_pane

0x731a,	// (0x0001031f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x014f,	// (0x00009154) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7bf1,	// (0x00010bf6) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7c10,	// (0x00010c15) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7c10,	// (0x00010c15) vkb2_area_bottom_space_btn_pane_g1

0x7c4a,	// (0x00010c4f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7c4a,	// (0x00010c4f) vkb2_area_bottom_space_btn_pane_g2

0x7c80,	// (0x00010c85) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7c80,	// (0x00010c85) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe27,	// (0x00018e2c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe27,	// (0x00018e2c) vkb2_area_bottom_space_btn_pane_g

0x7178,	// (0x0001017d) cel_fep_hwr_func_pane_ParamLimits

0x7178,	// (0x0001017d) cel_fep_hwr_func_pane

0x71b4,	// (0x000101b9) cell_hwr_side_button_pane_ParamLimits

0x71b4,	// (0x000101b9) cell_hwr_side_button_pane

0xef61,	// (0x00017f66) aid_area_touch_clock_ParamLimits

0x812f,	// (0x00011134) bg_uniindi_top_pane_ParamLimits

0xef73,	// (0x00017f78) uniindi_top_pane_g1_ParamLimits

0xef89,	// (0x00017f8e) uniindi_top_pane_g2_ParamLimits

0xef95,	// (0x00017f9a) uniindi_top_pane_g3_ParamLimits

0xefa6,	// (0x00017fab) uniindi_top_pane_g4_ParamLimits

0xfd3a,	// (0x00018d3f) uniindi_top_pane_g_ParamLimits

0xefb3,	// (0x00017fb8) uniindi_top_pane_t1_ParamLimits

0x812f,	// (0x00011134) bg_vkb2_func_pane_cp01_ParamLimits

0x812f,	// (0x00011134) bg_vkb2_func_pane_cp01

0x0789,	// (0x0000978e) cel_fep_hwr_func_pane_g1_ParamLimits

0x0789,	// (0x0000978e) cel_fep_hwr_func_pane_g1

0x812f,	// (0x00011134) bg_vkb2_func_pane_cp02_ParamLimits

0x812f,	// (0x00011134) bg_vkb2_func_pane_cp02

0x0789,	// (0x0000978e) cell_hwr_side_button_pane_g1_ParamLimits

0x0789,	// (0x0000978e) cell_hwr_side_button_pane_g1

0xa749,	// (0x0001374e) status_pane_g4_ParamLimits

0xa749,	// (0x0001374e) status_pane_g4

0xa761,	// (0x00013766) status_pane_t1

0xcfee,	// (0x00015ff3) form2_midp_gauge_slider_cont_pane

0xcff6,	// (0x00015ffb) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd008,	// (0x0001600d) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd01a,	// (0x0001601f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb01,	// (0x00018b06) form2_midp_gauge_slider_pane_t_ParamLimits

0xd02c,	// (0x00016031) form2_midp_slider_pane_ParamLimits

0x75ce,	// (0x000105d3) aid_size_cell_func_vkb2_ParamLimits

0x75ce,	// (0x000105d3) aid_size_cell_func_vkb2

0x0670,	// (0x00009675) slider_pane_g4_ParamLimits

0x0670,	// (0x00009675) slider_pane_g4

0x7cca,	// (0x00010ccf) form2_midp_gauge_slider_pane_t2_cp01

0x7cd8,	// (0x00010cdd) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7cd8,	// (0x00010cdd) form2_midp_gauge_slider_pane_t3_cp01

0x7cf5,	// (0x00010cfa) form2_midp_slider_pane_cp01

0x7d98,	// (0x00010d9d) navi_smil_pane

0x07f6,	// (0x000097fb) navi_smil_pane_g1

0x07fe,	// (0x00009803) navi_smil_pane_t1

0x07cb,	// (0x000097d0) form2_midp_slider_pane_g1

0x07d4,	// (0x000097d9) form2_midp_slider_pane_g2

0x07dc,	// (0x000097e1) form2_midp_slider_pane_g3

0x07cb,	// (0x000097d0) form2_midp_slider_pane_g4

0x07e4,	// (0x000097e9) form2_midp_slider_pane_g5

0x0004,

0xfe30,	// (0x00018e35) form2_midp_slider_pane_g

0x7cba,	// (0x00010cbf) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7cba,	// (0x00010cbf) vkb2_area_bottom_space_btn_pane_g4

0xa57f,	// (0x00013584) lc0_navi_pane_ParamLimits

0xa57f,	// (0x00013584) lc0_navi_pane

0xa5f5,	// (0x000135fa) lc0_stat_indi_pane_ParamLimits

0xa5f5,	// (0x000135fa) lc0_stat_indi_pane

0xa60c,	// (0x00013611) ls0_title_pane_ParamLimits

0xa60c,	// (0x00013611) ls0_title_pane

0x8c65,	// (0x00011c6a) bg_popup_sub_pane_cp14_ParamLimits

0xef48,	// (0x00017f4d) list_uniindi_pane_ParamLimits

0xef54,	// (0x00017f59) uniindi_top_pane_ParamLimits

0xefef,	// (0x00017ff4) list_single_uniindi_pane_g1_ParamLimits

0xf002,	// (0x00018007) list_single_uniindi_pane_t1_ParamLimits

0x7cfe,	// (0x00010d03) lc0_stat_clock_pane_ParamLimits

0x7cfe,	// (0x00010d03) lc0_stat_clock_pane

0x0826,	// (0x0000982b) lc0_stat_indi_pane_g1_ParamLimits

0x0826,	// (0x0000982b) lc0_stat_indi_pane_g1

0x0819,	// (0x0000981e) lc0_stat_indi_pane_g2_ParamLimits

0x0819,	// (0x0000981e) lc0_stat_indi_pane_g2

0x0001,

0xfe3b,	// (0x00018e40) lc0_stat_indi_pane_g_ParamLimits

0xfe3b,	// (0x00018e40) lc0_stat_indi_pane_g

0x7d0b,	// (0x00010d10) lc0_uni_indicator_pane_ParamLimits

0x7d0b,	// (0x00010d10) lc0_uni_indicator_pane

0x0840,	// (0x00009845) ls0_title_pane_g1_ParamLimits

0x0840,	// (0x00009845) ls0_title_pane_g1

0x0854,	// (0x00009859) ls0_title_pane_t1_ParamLimits

0x0854,	// (0x00009859) ls0_title_pane_t1

0x7d18,	// (0x00010d1d) lc0_uni_indicator_pane_g1_ParamLimits

0x7d18,	// (0x00010d1d) lc0_uni_indicator_pane_g1

0x08a0,	// (0x000098a5) lc0_stat_clock_pane_t1

0x7d98,	// (0x00010d9d) main_ai5_pane

0x08ae,	// (0x000098b3) ai5_sk_pane_ParamLimits

0x08ae,	// (0x000098b3) ai5_sk_pane

0x08bb,	// (0x000098c0) cell_ai5_widget_pane_ParamLimits

0x08bb,	// (0x000098c0) cell_ai5_widget_pane

0x0949,	// (0x0000994e) aid_size_cell_widget_grid

0x095d,	// (0x00009962) bg_ai5_widget_pane_ParamLimits

0x095d,	// (0x00009962) bg_ai5_widget_pane

0x0985,	// (0x0000998a) cell_ai5_widget_pane_g2

0x0995,	// (0x0000999a) cell_ai5_widget_pane_g3

0x09b4,	// (0x000099b9) cell_ai5_widget_pane_g4

0x09c0,	// (0x000099c5) cell_ai5_widget_pane_g5

0x09cc,	// (0x000099d1) cell_ai5_widget_pane_g6

0x09d8,	// (0x000099dd) cell_ai5_widget_pane_g7

0x0a20,	// (0x00009a25) cell_ai5_widget_pane_t1_ParamLimits

0x0a20,	// (0x00009a25) cell_ai5_widget_pane_t1

0x0a3d,	// (0x00009a42) cell_ai5_widget_pane_t2_ParamLimits

0x0a3d,	// (0x00009a42) cell_ai5_widget_pane_t2

0x0a55,	// (0x00009a5a) cell_ai5_widget_pane_t3_ParamLimits

0x0a55,	// (0x00009a5a) cell_ai5_widget_pane_t3

0x0a6d,	// (0x00009a72) cell_ai5_widget_pane_t4_ParamLimits

0x0a6d,	// (0x00009a72) cell_ai5_widget_pane_t4

0x0a87,	// (0x00009a8c) cell_ai5_widget_pane_t5_ParamLimits

0x0a87,	// (0x00009a8c) cell_ai5_widget_pane_t5

0x0aa6,	// (0x00009aab) cell_ai5_widget_pane_t6_ParamLimits

0x0aa6,	// (0x00009aab) cell_ai5_widget_pane_t6

0x0ab8,	// (0x00009abd) cell_ai5_widget_pane_t7_ParamLimits

0x0ab8,	// (0x00009abd) cell_ai5_widget_pane_t7

0x0ad1,	// (0x00009ad6) cell_ai5_widget_pane_t8_ParamLimits

0x0ad1,	// (0x00009ad6) cell_ai5_widget_pane_t8

0x0009,

0xfe55,	// (0x00018e5a) cell_ai5_widget_pane_t_ParamLimits

0xfe55,	// (0x00018e5a) cell_ai5_widget_pane_t

0x0b1d,	// (0x00009b22) grid_ai5_widget_pane

0x8c65,	// (0x00011c6a) highlight_cell_ai5_widget_pane_ParamLimits

0x8c65,	// (0x00011c6a) highlight_cell_ai5_widget_pane

0x0b33,	// (0x00009b38) ai5_sk_left_pane

0x0b3d,	// (0x00009b42) ai5_sk_middle_pane

0x0b47,	// (0x00009b4c) ai5_sk_right_pane

0x0b51,	// (0x00009b56) bg_ai5_widget_pane_g1_ParamLimits

0x0b51,	// (0x00009b56) bg_ai5_widget_pane_g1

0x0b5d,	// (0x00009b62) bg_ai5_widget_pane_g2_ParamLimits

0x0b5d,	// (0x00009b62) bg_ai5_widget_pane_g2

0x0b69,	// (0x00009b6e) bg_ai5_widget_pane_g3_ParamLimits

0x0b69,	// (0x00009b6e) bg_ai5_widget_pane_g3

0x0b75,	// (0x00009b7a) bg_ai5_widget_pane_g4_ParamLimits

0x0b75,	// (0x00009b7a) bg_ai5_widget_pane_g4

0x0b81,	// (0x00009b86) bg_ai5_widget_pane_g5_ParamLimits

0x0b81,	// (0x00009b86) bg_ai5_widget_pane_g5

0x0b8d,	// (0x00009b92) bg_ai5_widget_pane_g6_ParamLimits

0x0b8d,	// (0x00009b92) bg_ai5_widget_pane_g6

0x0b99,	// (0x00009b9e) bg_ai5_widget_pane_g7_ParamLimits

0x0b99,	// (0x00009b9e) bg_ai5_widget_pane_g7

0x0ba5,	// (0x00009baa) bg_ai5_widget_pane_g8_ParamLimits

0x0ba5,	// (0x00009baa) bg_ai5_widget_pane_g8

0x0bb1,	// (0x00009bb6) bg_ai5_widget_pane_g9_ParamLimits

0x0bb1,	// (0x00009bb6) bg_ai5_widget_pane_g9

0x0008,

0xfe6a,	// (0x00018e6f) bg_ai5_widget_pane_g_ParamLimits

0xfe6a,	// (0x00018e6f) bg_ai5_widget_pane_g

0x0be4,	// (0x00009be9) cell_shortcut_ai5_widget_pane_ParamLimits

0x0be4,	// (0x00009be9) cell_shortcut_ai5_widget_pane

0x7f6f,	// (0x00010f74) bg_cell_shortcut_ai5_widget_pane

0x0bf5,	// (0x00009bfa) cell_grid_ai5_widget_pane_g1

0x0bfe,	// (0x00009c03) highlight_cell_shortcut_ai5_widget_pane

0xa8f0,	// (0x000138f5) ai5_sk_left_pane_g1

0x0c06,	// (0x00009c0b) ai5_sk_left_pane_g2

0x0c0e,	// (0x00009c13) ai5_sk_left_pane_g3

0x0c16,	// (0x00009c1b) ai5_sk_left_pane_g4

0x0003,

0xfe7d,	// (0x00018e82) ai5_sk_left_pane_g

0x0c1e,	// (0x00009c23) ai5_sk_left_pane_t1

0xa8f8,	// (0x000138fd) ai5_sk_right_pane_g1

0x0c2c,	// (0x00009c31) ai5_sk_right_pane_g2

0x0c34,	// (0x00009c39) ai5_sk_right_pane_g3

0x0c3c,	// (0x00009c41) ai5_sk_right_pane_g4

0x0003,

0xfe86,	// (0x00018e8b) ai5_sk_right_pane_g

0x0c44,	// (0x00009c49) ai5_sk_right_pane_t1

0xa8f8,	// (0x000138fd) ai5_sk_middle_pane_g1

0xa8f0,	// (0x000138f5) ai5_sk_middle_pane_g2

0xa910,	// (0x00013915) ai5_sk_middle_pane_g3

0x0c34,	// (0x00009c39) ai5_sk_middle_pane_g4

0x0c0e,	// (0x00009c13) ai5_sk_middle_pane_g5

0x0c52,	// (0x00009c57) ai5_sk_middle_pane_g6

0x0c5a,	// (0x00009c5f) ai5_sk_middle_pane_g7

0x0006,

0xfe8f,	// (0x00018e94) ai5_sk_middle_pane_g

0xa40b,	// (0x00013410) aid_touch_area_size_lc0_ParamLimits

0xa40b,	// (0x00013410) aid_touch_area_size_lc0

0x7349,	// (0x0001034e) cell_hwr_candidate_pane_t1_ParamLimits

0xa427,	// (0x0001342c) aid_touch_navi_pane

0xa6f3,	// (0x000136f8) status_dt_navi_pane_ParamLimits

0xa6f3,	// (0x000136f8) status_dt_navi_pane

0xa700,	// (0x00013705) status_dt_sta_pane_ParamLimits

0xa700,	// (0x00013705) status_dt_sta_pane

0x0c62,	// (0x00009c67) dt_sta_controll_pane

0x0c6f,	// (0x00009c74) dt_sta_indi_pane

0x0c80,	// (0x00009c85) dt_sta_title_pane

0x812f,	// (0x00011134) bg_dt_sta_indi_pane_ParamLimits

0x812f,	// (0x00011134) bg_dt_sta_indi_pane

0x0c93,	// (0x00009c98) dt_sta_battery_pane

0x0c9b,	// (0x00009ca0) dt_sta_indi_pane_g1

0x0ca4,	// (0x00009ca9) dt_sta_indi_pane_g2

0x0cad,	// (0x00009cb2) dt_sta_indi_pane_g3

0x0002,

0xfe9e,	// (0x00018ea3) dt_sta_indi_pane_g

0x0cb6,	// (0x00009cbb) dt_sta_signal_pane

0x8c65,	// (0x00011c6a) bg_dt_sta_title_pane_ParamLimits

0x8c65,	// (0x00011c6a) bg_dt_sta_title_pane

0xb80d,	// (0x00014812) dt_sta_title_pane_g1

0x0cbf,	// (0x00009cc4) dt_sta_title_pane_t1_ParamLimits

0x0cbf,	// (0x00009cc4) dt_sta_title_pane_t1

0x7d98,	// (0x00010d9d) bg_dt_sta_control_pane

0x0cd4,	// (0x00009cd9) dt_sta_controll_pane_g1

0x0cdd,	// (0x00009ce2) bg_dt_sta_title_pane_g1

0x0ce6,	// (0x00009ceb) bg_dt_sta_title_pane_g2

0x0cef,	// (0x00009cf4) bg_dt_sta_title_pane_g3

0x0002,

0xfea5,	// (0x00018eaa) bg_dt_sta_title_pane_g

0xd2ec,	// (0x000162f1) bg_dt_sta_indi_pane_g1

0x0cf8,	// (0x00009cfd) dt_sta_signal_pane_g1

0x0d00,	// (0x00009d05) dt_sta_signal_pane_g2

0x0001,

0xfeac,	// (0x00018eb1) dt_sta_signal_pane_g

0x0d08,	// (0x00009d0d) dt_sta_battery_pane_g1

0x0d11,	// (0x00009d16) dt_sta_battery_pane_t1

0xd2ec,	// (0x000162f1) bg_dt_sta_control_pane_g1

0x9526,	// (0x0001252b) fep_china_uni_eep_pane

0x952e,	// (0x00012533) fep_china_uni_entry_pane_ParamLimits

0x953e,	// (0x00012543) popup_fep_china_uni_window_g1_ParamLimits

0x954e,	// (0x00012553) popup_fep_china_uni_window_g2_ParamLimits

0x954e,	// (0x00012553) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x00018735) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x00018735) popup_fep_china_uni_window_g

0x0d20,	// (0x00009d25) fep_china_uni_eep_pane_g1

0x0d28,	// (0x00009d2d) fep_china_uni_eep_pane_t1

0x07ed,	// (0x000097f2) aid_touch_area_size_smil_player

0xa577,	// (0x0001357c) lc0_clock_pane

0xa755,	// (0x0001375a) status_pane_g5_ParamLimits

0xa755,	// (0x0001375a) status_pane_g5

0x9fcd,	// (0x00012fd2) popup_keymap_window

0xa715,	// (0x0001371a) status_icon_pane

0x0995,	// (0x0000999a) cell_ai5_widget_pane_g3_ParamLimits

0x09b4,	// (0x000099b9) cell_ai5_widget_pane_g4_ParamLimits

0x09c0,	// (0x000099c5) cell_ai5_widget_pane_g5_ParamLimits

0x09e4,	// (0x000099e9) cell_ai5_widget_pane_g8_ParamLimits

0x09e4,	// (0x000099e9) cell_ai5_widget_pane_g8

0x09f8,	// (0x000099fd) cell_ai5_widget_pane_g9_ParamLimits

0x09f8,	// (0x000099fd) cell_ai5_widget_pane_g9

0x0a0c,	// (0x00009a11) cell_ai5_widget_pane_g10_ParamLimits

0x0a0c,	// (0x00009a11) cell_ai5_widget_pane_g10

0x0d37,	// (0x00009d3c) status_icon_pane_g1

0x7d98,	// (0x00010d9d) bg_popup_sub_pane_cp13

0x0d3f,	// (0x00009d44) popup_keymap_window_t1

0x9d83,	// (0x00012d88) control_pane_g6_ParamLimits

0x9d83,	// (0x00012d88) control_pane_g6

0x9d90,	// (0x00012d95) control_pane_g7_ParamLimits

0x9d90,	// (0x00012d95) control_pane_g7

0x9d9d,	// (0x00012da2) control_pane_g8_ParamLimits

0x9d9d,	// (0x00012da2) control_pane_g8

0x0c62,	// (0x00009c67) dt_sta_controll_pane_ParamLimits

0x0c6f,	// (0x00009c74) dt_sta_indi_pane_ParamLimits

0x0c80,	// (0x00009c85) dt_sta_title_pane_ParamLimits

0x8631,	// (0x00011636) aid_size_touch_scroll_bar_cale

0x639f,	// (0x0000f3a4) popup_discreet_window_ParamLimits

0x639f,	// (0x0000f3a4) popup_discreet_window

0x6419,	// (0x0000f41e) popup_sk_window

0xb03f,	// (0x00014044) bg_popup_sub_pane_cp28_ParamLimits

0xb03f,	// (0x00014044) bg_popup_sub_pane_cp28

0x0d4d,	// (0x00009d52) popup_discreet_window_g1_ParamLimits

0x0d4d,	// (0x00009d52) popup_discreet_window_g1

0x0d6d,	// (0x00009d72) popup_discreet_window_t1_ParamLimits

0x0d6d,	// (0x00009d72) popup_discreet_window_t1

0x0d8b,	// (0x00009d90) popup_discreet_window_t2_ParamLimits

0x0d8b,	// (0x00009d90) popup_discreet_window_t2

0x0002,

0xfeb1,	// (0x00018eb6) popup_discreet_window_t_ParamLimits

0xfeb1,	// (0x00018eb6) popup_discreet_window_t

0x7d2e,	// (0x00010d33) popup_sk_window_g1

0x7d38,	// (0x00010d3d) popup_sk_window_g2

0x0001,

0xfeb8,	// (0x00018ebd) popup_sk_window_g

0x0dff,	// (0x00009e04) popup_sk_window_t1

0x0df1,	// (0x00009df6) popup_sk_window_t1_copy1

0x0985,	// (0x0000998a) cell_ai5_widget_pane_g2_ParamLimits

0x0ae3,	// (0x00009ae8) cell_ai5_widget_pane_t9_ParamLimits

0x0ae3,	// (0x00009ae8) cell_ai5_widget_pane_t9

0x7d98,	// (0x00010d9d) main_fep_fshwr2_pane

0x0e0d,	// (0x00009e12) aid_fshwr2_btn_pane

0x0e15,	// (0x00009e1a) aid_fshwr2_syb_pane

0x0e1d,	// (0x00009e22) aid_fshwr2_txt_pane

0x0e25,	// (0x00009e2a) fshwr2_func_candi_pane

0x0e31,	// (0x00009e36) fshwr2_hwr_syb_pane

0x0e3d,	// (0x00009e42) fshwr2_icf_pane

0x7d98,	// (0x00010d9d) fshwr2_icf_bg_pane

0x0e5b,	// (0x00009e60) fshwr2_icf_pane_t1_ParamLimits

0x0e5b,	// (0x00009e60) fshwr2_icf_pane_t1

0xd2ec,	// (0x000162f1) fshwr2_func_candi_pane_g1

0x0e72,	// (0x00009e77) fshwr2_func_candi_row_pane_ParamLimits

0x0e72,	// (0x00009e77) fshwr2_func_candi_row_pane

0x0e83,	// (0x00009e88) cell_fshwr2_syb_pane_ParamLimits

0x0e83,	// (0x00009e88) cell_fshwr2_syb_pane

0xd585,	// (0x0001658a) fshwr2_hwr_syb_pane_g1_ParamLimits

0xd585,	// (0x0001658a) fshwr2_hwr_syb_pane_g1

0x7d98,	// (0x00010d9d) bg_popup_call_pane_cp01

0x0e9f,	// (0x00009ea4) fshwr2_func_candi_cell_pane_ParamLimits

0x0e9f,	// (0x00009ea4) fshwr2_func_candi_cell_pane

0x0ed0,	// (0x00009ed5) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x0ed0,	// (0x00009ed5) fshwr2_func_candi_cell_bg_pane

0x0eea,	// (0x00009eef) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x0eea,	// (0x00009eef) fshwr2_func_candi_cell_pane_g1

0x0f0a,	// (0x00009f0f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x0f0a,	// (0x00009f0f) fshwr2_func_candi_cell_pane_t1

0x7d98,	// (0x00010d9d) bg_button_pane_cp08

0x9ab0,	// (0x00012ab5) cell_fshwr2_syb_bg_pane

0x0f1d,	// (0x00009f22) cell_fshwr2_syb_bg_pane_g1

0x0f25,	// (0x00009f2a) cell_fshwr2_syb_bg_pane_t1

0x8c65,	// (0x00011c6a) main_tmo_pane

0xbb50,	// (0x00014b55) uni_indicator_pane_g1_ParamLimits

0xbb65,	// (0x00014b6a) uni_indicator_pane_g2_ParamLimits

0xbb7b,	// (0x00014b80) uni_indicator_pane_g3_ParamLimits

0xbb91,	// (0x00014b96) uni_indicator_pane_g4_ParamLimits

0xbb91,	// (0x00014b96) uni_indicator_pane_g4

0xbba5,	// (0x00014baa) uni_indicator_pane_g5_ParamLimits

0xbba5,	// (0x00014baa) uni_indicator_pane_g5

0xbbb9,	// (0x00014bbe) uni_indicator_pane_g6_ParamLimits

0xbbb9,	// (0x00014bbe) uni_indicator_pane_g6

0xf92d,	// (0x00018932) uni_indicator_pane_g_ParamLimits

0xeb3b,	// (0x00017b40) popup_tmo_note_window_ParamLimits

0xeb3b,	// (0x00017b40) popup_tmo_note_window

0x7d98,	// (0x00010d9d) fshwr2_bg_pane

0x0efb,	// (0x00009f00) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x0efb,	// (0x00009f00) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebd,	// (0x00018ec2) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebd,	// (0x00018ec2) fshwr2_func_candi_cell_pane_g

0xd2ec,	// (0x000162f1) bg_popup_window_pane_cp01

0x0f34,	// (0x00009f39) bg_popup_window_pane_g1_cp01

0x0f3d,	// (0x00009f42) bg_popup_window_pane_cp22_ParamLimits

0x0f3d,	// (0x00009f42) bg_popup_window_pane_cp22

0x0f4b,	// (0x00009f50) listscroll_tmo_link_pane_ParamLimits

0x0f4b,	// (0x00009f50) listscroll_tmo_link_pane

0x0f8b,	// (0x00009f90) popup_tmo_note_window_g1_ParamLimits

0x0f8b,	// (0x00009f90) popup_tmo_note_window_g1

0x0f98,	// (0x00009f9d) tmo_note_info_pane_ParamLimits

0x0f98,	// (0x00009f9d) tmo_note_info_pane

0x0fb2,	// (0x00009fb7) list_tmo_note_info_pane_g1_ParamLimits

0x0fb2,	// (0x00009fb7) list_tmo_note_info_pane_g1

0x0fc9,	// (0x00009fce) list_tmo_note_info_pane_g2_ParamLimits

0x0fc9,	// (0x00009fce) list_tmo_note_info_pane_g2

0x0001,

0xfec2,	// (0x00018ec7) list_tmo_note_info_pane_g_ParamLimits

0xfec2,	// (0x00018ec7) list_tmo_note_info_pane_g

0x0fe5,	// (0x00009fea) list_tmo_note_info_text_pane_ParamLimits

0x0fe5,	// (0x00009fea) list_tmo_note_info_text_pane

0x106a,	// (0x0000a06f) list_tmo_link_pane

0x1077,	// (0x0000a07c) scroll_pane_cp20

0x1084,	// (0x0000a089) list_single_tmo_link_pane_ParamLimits

0x1084,	// (0x0000a089) list_single_tmo_link_pane

0x1094,	// (0x0000a099) list_single_tmo_link_pane_t1

0x10a2,	// (0x0000a0a7) list_tmo_note_info_text_pane_t1_ParamLimits

0x10a2,	// (0x0000a0a7) list_tmo_note_info_text_pane_t1

0x8ea8,	// (0x00011ead) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8ea8,	// (0x00011ead) aid_size_touch_scroll_bar_cp01

0x8d1f,	// (0x00011d24) aid_size_touch_slider_marker

0x6401,	// (0x0000f406) popup_settings_window_ParamLimits

0x6401,	// (0x0000f406) popup_settings_window

0x9e5e,	// (0x00012e63) popup_candi_list_indi_window

0xa427,	// (0x0001342c) aid_touch_navi_pane_ParamLimits

0x7507,	// (0x0001050c) rs_clock_indi_pane

0x7510,	// (0x00010515) sctrl_sk_bottom_pane_ParamLimits

0x7521,	// (0x00010526) sctrl_sk_top_pane_ParamLimits

0x7628,	// (0x0001062d) popup_fep_tooltip_window

0x0949,	// (0x0000994e) aid_size_cell_widget_grid_ParamLimits

0x0979,	// (0x0000997e) cell_ai5_widget_pane_g1_ParamLimits

0x0979,	// (0x0000997e) cell_ai5_widget_pane_g1

0x09cc,	// (0x000099d1) cell_ai5_widget_pane_g6_ParamLimits

0x09d8,	// (0x000099dd) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe40,	// (0x00018e45) cell_ai5_widget_pane_g_ParamLimits

0xfe40,	// (0x00018e45) cell_ai5_widget_pane_g

0x0b07,	// (0x00009b0c) cell_ai5_widget_pane_t10_ParamLimits

0x0b07,	// (0x00009b0c) cell_ai5_widget_pane_t10

0x0b1d,	// (0x00009b22) grid_ai5_widget_pane_ParamLimits

0x0bbd,	// (0x00009bc2) cell_contacts_ai5_widget_pane_ParamLimits

0x0bbd,	// (0x00009bc2) cell_contacts_ai5_widget_pane

0x0da0,	// (0x00009da5) popup_discreet_window_t3_ParamLimits

0x0da0,	// (0x00009da5) popup_discreet_window_t3

0x0e47,	// (0x00009e4c) popup_fshwr2_char_preview_window_ParamLimits

0x0e47,	// (0x00009e4c) popup_fshwr2_char_preview_window

0x1003,	// (0x0000a008) tmo_note_info_pane_t1

0x1018,	// (0x0000a01d) tmo_note_info_pane_t2

0x1031,	// (0x0000a036) tmo_note_info_pane_t3

0x1046,	// (0x0000a04b) tmo_note_info_pane_t4

0x1058,	// (0x0000a05d) tmo_note_info_pane_t5

0x0004,

0xfec7,	// (0x00018ecc) tmo_note_info_pane_t

0x106a,	// (0x0000a06f) list_tmo_link_pane_ParamLimits

0x1077,	// (0x0000a07c) scroll_pane_cp20_ParamLimits

0x7d98,	// (0x00010d9d) bg_popup_fep_char_preview_window_cp01

0x10bb,	// (0x0000a0c0) popup_fshwr2_char_preview_window_t1

0x10c9,	// (0x0000a0ce) popup_candi_list_indi_window_g1

0x10d2,	// (0x0000a0d7) bg_cell_contacts_ai5_widget_pane

0x10de,	// (0x0000a0e3) cell_contacts_ai5_widget_pane_g1

0x10f2,	// (0x0000a0f7) cell_contacts_ai5_widget_pane_g2

0x1101,	// (0x0000a106) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed2,	// (0x00018ed7) cell_contacts_ai5_widget_pane_g

0x1114,	// (0x0000a119) cell_contacts_ai5_widget_pane_t1

0x8c65,	// (0x00011c6a) highlight_cell_shortcut_ai5_widget_pane_cp01

0x118e,	// (0x0000a193) settings_container_pane

0x9ab0,	// (0x00012ab5) listscroll_set_pane_copy1

0xc7a7,	// (0x000157ac) scroll_pane_cp121_copy1

0x119a,	// (0x0000a19f) set_content_pane_copy1

0x11a2,	// (0x0000a1a7) aid_height_set_list_copy1_ParamLimits

0x11a2,	// (0x0000a1a7) aid_height_set_list_copy1

0xbdd4,	// (0x00014dd9) aid_size_parent_copy1_ParamLimits

0xbdd4,	// (0x00014dd9) aid_size_parent_copy1

0x11ae,	// (0x0000a1b3) button_value_adjust_pane_cp6_copy1_ParamLimits

0x11ae,	// (0x0000a1b3) button_value_adjust_pane_cp6_copy1

0x9e36,	// (0x00012e3b) list_highlight_pane_cp2_copy1_ParamLimits

0x9e36,	// (0x00012e3b) list_highlight_pane_cp2_copy1

0x11c2,	// (0x0000a1c7) list_set_pane_copy1_ParamLimits

0x11c2,	// (0x0000a1c7) list_set_pane_copy1

0x1129,	// (0x0000a12e) main_pane_set_t1_copy1_ParamLimits

0x1129,	// (0x0000a12e) main_pane_set_t1_copy1

0x1163,	// (0x0000a168) main_pane_set_t2_copy1_ParamLimits

0x1163,	// (0x0000a168) main_pane_set_t2_copy1

0x126f,	// (0x0000a274) main_pane_set_t3_copy1

0x127d,	// (0x0000a282) main_pane_set_t4_copy1

0x1182,	// (0x0000a187) set_content_pane_g1_copy1_ParamLimits

0x1182,	// (0x0000a187) set_content_pane_g1_copy1

0x128b,	// (0x0000a290) setting_code_pane_copy1

0x1295,	// (0x0000a29a) setting_slider_graphic_pane_copy1

0x1295,	// (0x0000a29a) setting_slider_pane_copy1

0x1295,	// (0x0000a29a) setting_text_pane_copy1

0x129f,	// (0x0000a2a4) setting_volume_pane_copy1

0x12a8,	// (0x0000a2ad) settings_code_pane_cp2_copy1

0x12b0,	// (0x0000a2b5) settings_code_pane_cp_copy1_ParamLimits

0x12b0,	// (0x0000a2b5) settings_code_pane_cp_copy1

0x12c4,	// (0x0000a2c9) volume_set_pane_copy1

0x12cc,	// (0x0000a2d1) volume_set_pane_g10_copy1

0x12d4,	// (0x0000a2d9) volume_set_pane_g1_copy1

0x12dc,	// (0x0000a2e1) volume_set_pane_g2_copy1

0x12e4,	// (0x0000a2e9) volume_set_pane_g3_copy1

0x12ec,	// (0x0000a2f1) volume_set_pane_g4_copy1

0x12f4,	// (0x0000a2f9) volume_set_pane_g5_copy1

0x12fc,	// (0x0000a301) volume_set_pane_g6_copy1

0x1304,	// (0x0000a309) volume_set_pane_g7_copy1

0x130c,	// (0x0000a311) volume_set_pane_g8_copy1

0x1314,	// (0x0000a319) volume_set_pane_g9_copy1

0x7e8c,	// (0x00010e91) bg_set_opt_pane_cp_copy1_ParamLimits

0x7e8c,	// (0x00010e91) bg_set_opt_pane_cp_copy1

0x131c,	// (0x0000a321) setting_slider_pane_t1_copy1_ParamLimits

0x131c,	// (0x0000a321) setting_slider_pane_t1_copy1

0x133a,	// (0x0000a33f) setting_slider_pane_t2_copy1_ParamLimits

0x133a,	// (0x0000a33f) setting_slider_pane_t2_copy1

0x1354,	// (0x0000a359) setting_slider_pane_t3_copy1_ParamLimits

0x1354,	// (0x0000a359) setting_slider_pane_t3_copy1

0x136c,	// (0x0000a371) slider_set_pane_copy1_ParamLimits

0x136c,	// (0x0000a371) slider_set_pane_copy1

0x8da1,	// (0x00011da6) set_opt_bg_pane_g1_copy2

0x8da9,	// (0x00011dae) set_opt_bg_pane_g2_copy2

0x1382,	// (0x0000a387) set_opt_bg_pane_g3_copy2

0x8db9,	// (0x00011dbe) set_opt_bg_pane_g4_copy2

0x8dc1,	// (0x00011dc6) set_opt_bg_pane_g5_copy2

0x8dc9,	// (0x00011dce) set_opt_bg_pane_g6_copy2

0x138c,	// (0x0000a391) set_opt_bg_pane_g7_copy2

0x1394,	// (0x0000a399) set_opt_bg_pane_g8_copy2

0x139e,	// (0x0000a3a3) set_opt_bg_pane_g9_copy2

0x7d42,	// (0x00010d47) aid_size_touch_slider_mark_copy1_ParamLimits

0x7d42,	// (0x00010d47) aid_size_touch_slider_mark_copy1

0x13bc,	// (0x0000a3c1) slider_set_pane_g1_copy1

0x7d56,	// (0x00010d5b) slider_set_pane_g2_copy1

0x6ef2,	// (0x0000fef7) slider_set_pane_g3_copy1_ParamLimits

0x6ef2,	// (0x0000fef7) slider_set_pane_g3_copy1

0x6f06,	// (0x0000ff0b) slider_set_pane_g4_copy1_ParamLimits

0x6f06,	// (0x0000ff0b) slider_set_pane_g4_copy1

0x6f1e,	// (0x0000ff23) slider_set_pane_g5_copy1_ParamLimits

0x6f1e,	// (0x0000ff23) slider_set_pane_g5_copy1

0x6ef2,	// (0x0000fef7) slider_set_pane_g6_copy1_ParamLimits

0x6ef2,	// (0x0000fef7) slider_set_pane_g6_copy1

0x7d5e,	// (0x00010d63) slider_set_pane_g7_copy1_ParamLimits

0x7d5e,	// (0x00010d63) slider_set_pane_g7_copy1

0x7dac,	// (0x00010db1) bg_set_opt_pane_cp2_copy1

0x13e3,	// (0x0000a3e8) setting_slider_graphic_pane_g1_copy1

0x13ec,	// (0x0000a3f1) setting_slider_graphic_pane_t1_copy1

0x13fc,	// (0x0000a401) setting_slider_graphic_pane_t2_copy1

0x140c,	// (0x0000a411) slider_set_pane_cp_copy1

0x141c,	// (0x0000a421) input_focus_pane_cp1_copy1

0x1425,	// (0x0000a42a) list_set_text_pane_copy1

0x142d,	// (0x0000a432) setting_text_pane_g1_copy1

0x1436,	// (0x0000a43b) set_text_pane_t1_copy1

0x141c,	// (0x0000a421) input_focus_pane_cp2_copy1

0x142d,	// (0x0000a432) setting_code_pane_g1_copy1

0x1453,	// (0x0000a458) setting_code_pane_t1_copy1

0x1461,	// (0x0000a466) list_set_graphic_pane_copy1

0x7dac,	// (0x00010db1) bg_set_opt_pane_cp4_copy1

0x97b2,	// (0x000127b7) list_set_graphic_pane_g1_copy1_ParamLimits

0x97b2,	// (0x000127b7) list_set_graphic_pane_g1_copy1

0x1475,	// (0x0000a47a) list_set_graphic_pane_g2_copy1

0x97ca,	// (0x000127cf) list_set_graphic_pane_t1_copy1_ParamLimits

0x97ca,	// (0x000127cf) list_set_graphic_pane_t1_copy1

0xd2ec,	// (0x000162f1) rs_clock_indi_pane_g1

0x147d,	// (0x0000a482) rs_clock_indi_pane_t1

0x148b,	// (0x0000a490) rs_indi_pane

0x1493,	// (0x0000a498) rs_indi_pane_g1

0x149c,	// (0x0000a4a1) rs_indi_pane_g2

0x14a5,	// (0x0000a4aa) rs_indi_pane_g3

0x0002,

0xfed9,	// (0x00018ede) rs_indi_pane_g

0x9ab0,	// (0x00012ab5) bg_popup_preview_window_pane_cp03

0x14ae,	// (0x0000a4b3) popup_fep_tooltip_window_t1

0xe179,	// (0x0001717e) popup_note2_window_g2_ParamLimits

0xe179,	// (0x0001717e) popup_note2_window_g2

0x0001,

0xfc79,	// (0x00018c7e) popup_note2_window_g_ParamLimits

0xfc79,	// (0x00018c7e) popup_note2_window_g

0xe75b,	// (0x00017760) bg_popup_sub_pane_cp11_ParamLimits

0xe768,	// (0x0001776d) cell_ai3_links_pane_g1_ParamLimits

0xe77f,	// (0x00017784) cell_ai3_links_pane_t1

0x1436,	// (0x0000a43b) set_text_pane_t1_copy1_ParamLimits

0x99bf,	// (0x000129c4) cell_graphic_popup_pane_cp2_ParamLimits

0x99bf,	// (0x000129c4) cell_graphic_popup_pane_cp2

0x14bc,	// (0x0000a4c1) cell_graphic_popup_pane_g1_cp2

0x8444,	// (0x00011449) cell_graphic_popup_pane_g2_cp2

0x14c4,	// (0x0000a4c9) cell_graphic_popup_pane_g3_cp2

0x14cc,	// (0x0000a4d1) cell_graphic_popup_pane_t2_cp2

0x8455,	// (0x0001145a) grid_highlight_pane_cp3_cp2

0x9187,	// (0x0001218c) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8c65,	// (0x00011c6a) main_tmo_pane_ParamLimits

0xeb2f,	// (0x00017b34) popup_tmo_big_image_note_window

0x0969,	// (0x0000996e) cell_ai5_widget_list_pane

0x0971,	// (0x00009976) cell_ai5_widget_lrg_icon_pane

0x1003,	// (0x0000a008) tmo_note_info_pane_t1_ParamLimits

0x1018,	// (0x0000a01d) tmo_note_info_pane_t2_ParamLimits

0x1031,	// (0x0000a036) tmo_note_info_pane_t3_ParamLimits

0x1046,	// (0x0000a04b) tmo_note_info_pane_t4_ParamLimits

0x1058,	// (0x0000a05d) tmo_note_info_pane_t5_ParamLimits

0xfec7,	// (0x00018ecc) tmo_note_info_pane_t_ParamLimits

0x118e,	// (0x0000a193) settings_container_pane_ParamLimits

0x1414,	// (0x0000a419) indicator_popup_pane_cp5

0x1414,	// (0x0000a419) indicator_popup_pane_cp6

0x1461,	// (0x0000a466) list_set_graphic_pane_copy1_ParamLimits

0x7d98,	// (0x00010d9d) bg_popup_window_pane_cp23

0x14da,	// (0x0000a4df) popup_tmo_big_image_note_window_g1

0x14e5,	// (0x0000a4ea) popup_tmo_big_image_note_window_t1

0x14f5,	// (0x0000a4fa) popup_tmo_big_image_note_window_t2

0x1505,	// (0x0000a50a) popup_tmo_big_image_note_window_t3

0x0002,

0xfee0,	// (0x00018ee5) popup_tmo_big_image_note_window_t

0x1515,	// (0x0000a51a) cell_ai5_widget_lrg_icon_pane_g1

0x151d,	// (0x0000a522) cell_ai5_widget_lrg_icon_pane_t1

0x152b,	// (0x0000a530) cell_ai5_widget_list_row_pane_ParamLimits

0x152b,	// (0x0000a530) cell_ai5_widget_list_row_pane

0x1544,	// (0x0000a549) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x1544,	// (0x0000a549) cell_ai5_widget_list_row_pane_g1

0x1551,	// (0x0000a556) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x1551,	// (0x0000a556) cell_ai5_widget_list_row_pane_t1

0x1569,	// (0x0000a56e) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x1569,	// (0x0000a56e) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee7,	// (0x00018eec) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee7,	// (0x00018eec) cell_ai5_widget_list_row_pane_t

0x62c6,	// (0x0000f2cb) main_fep_vtchi_ss_pane

0x157b,	// (0x0000a580) popup_fep_char_pre_window

0x1583,	// (0x0000a588) popup_fep_ituss_window

0x15a4,	// (0x0000a5a9) popup_fep_vkbss_window

0x15c3,	// (0x0000a5c8) grid_vkbss_keypad_pane_ParamLimits

0x15c3,	// (0x0000a5c8) grid_vkbss_keypad_pane

0x15d3,	// (0x0000a5d8) ituss_keypad_pane

0x15eb,	// (0x0000a5f0) aid_vkbss_key_offset_ParamLimits

0x15eb,	// (0x0000a5f0) aid_vkbss_key_offset

0x15f7,	// (0x0000a5fc) cell_vkbss_key_pane_ParamLimits

0x15f7,	// (0x0000a5fc) cell_vkbss_key_pane

0x160d,	// (0x0000a612) bg_cell_vkbss_key_g1_ParamLimits

0x160d,	// (0x0000a612) bg_cell_vkbss_key_g1

0x1619,	// (0x0000a61e) cell_vkbss_key_3p_pane_ParamLimits

0x1619,	// (0x0000a61e) cell_vkbss_key_3p_pane

0x1633,	// (0x0000a638) cell_vkbss_key_g1_ParamLimits

0x1633,	// (0x0000a638) cell_vkbss_key_g1

0x164d,	// (0x0000a652) cell_vkbss_key_t1_ParamLimits

0x164d,	// (0x0000a652) cell_vkbss_key_t1

0x1678,	// (0x0000a67d) cell_ituss_key_pane_ParamLimits

0x1678,	// (0x0000a67d) cell_ituss_key_pane

0x1688,	// (0x0000a68d) bg_cell_ituss_key_g1_ParamLimits

0x1688,	// (0x0000a68d) bg_cell_ituss_key_g1

0x1694,	// (0x0000a699) cell_ituss_key_pane_g1_ParamLimits

0x1694,	// (0x0000a699) cell_ituss_key_pane_g1

0x16a0,	// (0x0000a6a5) cell_ituss_key_pane_g2_ParamLimits

0x16a0,	// (0x0000a6a5) cell_ituss_key_pane_g2

0x0001,

0xfeec,	// (0x00018ef1) cell_ituss_key_pane_g_ParamLimits

0xfeec,	// (0x00018ef1) cell_ituss_key_pane_g

0x16b9,	// (0x0000a6be) cell_ituss_key_t1_ParamLimits

0x16b9,	// (0x0000a6be) cell_ituss_key_t1

0x16e7,	// (0x0000a6ec) cell_ituss_key_t2_ParamLimits

0x16e7,	// (0x0000a6ec) cell_ituss_key_t2

0x1718,	// (0x0000a71d) cell_ituss_key_t3_ParamLimits

0x1718,	// (0x0000a71d) cell_ituss_key_t3

0x1749,	// (0x0000a74e) cell_ituss_key_t4_ParamLimits

0x1749,	// (0x0000a74e) cell_ituss_key_t4

0x0003,

0xfef1,	// (0x00018ef6) cell_ituss_key_t_ParamLimits

0xfef1,	// (0x00018ef6) cell_ituss_key_t

0x177a,	// (0x0000a77f) cell_vkbss_key_3p_pane_g1

0x1782,	// (0x0000a787) cell_vkbss_key_3p_pane_g2

0x178a,	// (0x0000a78f) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefa,	// (0x00018eff) cell_vkbss_key_3p_pane_g

0x7d98,	// (0x00010d9d) bg_popup_fep_char_preview_window_cp02

0x1792,	// (0x0000a797) popup_fep_char_pre_window_t1

0x093f,	// (0x00009944) main_ai5_sk_pane

0x10d2,	// (0x0000a0d7) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x10de,	// (0x0000a0e3) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x10f2,	// (0x0000a0f7) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x1101,	// (0x0000a106) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed2,	// (0x00018ed7) cell_contacts_ai5_widget_pane_g_ParamLimits

0x1114,	// (0x0000a119) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8c65,	// (0x00011c6a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x17a1,	// (0x0000a7a6) main_ai5_sk_pane_g1

0xae7d,	// (0x00013e82) popup_query_code_window_g1

0x1599,	// (0x0000a59e) popup_fep_vkb_icf_pane

0x15ad,	// (0x0000a5b2) popup_fep_vtchi_icf_pane

0x8c65,	// (0x00011c6a) bg_icf_pane

0x17b9,	// (0x0000a7be) list_vkb_icf_pane

0x8c65,	// (0x00011c6a) bg_icf_pane_cp01

0xeaee,	// (0x00017af3) vtchi_icf_list_pane

0x17d9,	// (0x0000a7de) list_vkb_icf_pane_t1_ParamLimits

0x17d9,	// (0x0000a7de) list_vkb_icf_pane_t1

0x17f3,	// (0x0000a7f8) vtchi_icf_list_pane_t1_ParamLimits

0x17f3,	// (0x0000a7f8) vtchi_icf_list_pane_t1

0x1583,	// (0x0000a588) popup_fep_ituss_window_ParamLimits

0x15ad,	// (0x0000a5b2) popup_fep_vtchi_icf_pane_ParamLimits

0x15d3,	// (0x0000a5d8) ituss_keypad_pane_ParamLimits

0x15e2,	// (0x0000a5e7) ituss_sks_pane

0x8c65,	// (0x00011c6a) bg_icf_pane_ParamLimits

0x17aa,	// (0x0000a7af) icf_edit_indi_pane_ParamLimits

0x17aa,	// (0x0000a7af) icf_edit_indi_pane

0x17b9,	// (0x0000a7be) list_vkb_icf_pane_ParamLimits

0x8c65,	// (0x00011c6a) bg_icf_pane_cp01_ParamLimits

0x17c5,	// (0x0000a7ca) icf_edit_indi_pane_cp01_ParamLimits

0x17c5,	// (0x0000a7ca) icf_edit_indi_pane_cp01

0x17d1,	// (0x0000a7d6) vtchi_query_pane

0xd585,	// (0x0001658a) icf_edit_indi_pane_g1_ParamLimits

0xd585,	// (0x0001658a) icf_edit_indi_pane_g1

0x1818,	// (0x0000a81d) icf_edit_indi_pane_g2_ParamLimits

0x1818,	// (0x0000a81d) icf_edit_indi_pane_g2

0x0001,

0xff01,	// (0x00018f06) icf_edit_indi_pane_g_ParamLimits

0xff01,	// (0x00018f06) icf_edit_indi_pane_g

0x1824,	// (0x0000a829) icf_edit_indi_pane_t1

0x1832,	// (0x0000a837) bg_input_focus_pane_cp042

0x8628,	// (0x0001162d) vtchi_button_pane

0x183b,	// (0x0000a840) vtchi_query_pane_t1

0x1849,	// (0x0000a84e) vtchi_query_pane_t2

0x1857,	// (0x0000a85c) vtchi_query_pane_t3

0x0002,

0xff06,	// (0x00018f0b) vtchi_query_pane_t

0x7d98,	// (0x00010d9d) bg_button_pane_cp13

0x1865,	// (0x0000a86a) vtchi_button_pane_g1

0xf039,	// (0x0001803e) ituss_sks_pane_g1

0x186d,	// (0x0000a872) ituss_sks_pane_g2

0x0001,

0xff0d,	// (0x00018f12) ituss_sks_pane_g

0x1876,	// (0x0000a87b) ituss_sks_pane_t1

0x1884,	// (0x0000a889) ituss_sks_pane_t2

0x0001,

0xff12,	// (0x00018f17) ituss_sks_pane_t

0xccc8,	// (0x00015ccd) indicator_nsta_pane_cp_g1

0xccd1,	// (0x00015cd6) indicator_nsta_pane_cp_g2

0xccd9,	// (0x00015cde) indicator_nsta_pane_cp_g3

0xcce1,	// (0x00015ce6) indicator_nsta_pane_cp_g4

0xcce9,	// (0x00015cee) indicator_nsta_pane_cp_g5

0xccf1,	// (0x00015cf6) indicator_nsta_pane_cp_g6

0x0005,

0xfab7,	// (0x00018abc) indicator_nsta_pane_cp_g

0x039e,	// (0x000093a3) cell_graphic2_pane_t2_ParamLimits

0x039e,	// (0x000093a3) cell_graphic2_pane_t2

0x0001,

0xfdc9,	// (0x00018dce) cell_graphic2_pane_t_ParamLimits

0xfdc9,	// (0x00018dce) cell_graphic2_pane_t
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal

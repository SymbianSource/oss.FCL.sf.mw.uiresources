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

#include "aknlayoutscalable_elaf_pql_av_qvga_lsc_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x00000000 };

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
0xad69,	// (0x0000ad69) Screen

0xad73,	// (0x0000ad73) application_window_ParamLimits

0xad73,	// (0x0000ad73) application_window

0x002a,	// (0x0000002a) screen_g1

0xada1,	// (0x0000ada1) area_bottom_pane_ParamLimits

0xada1,	// (0x0000ada1) area_bottom_pane

0x011d,	// (0x0000011d) area_top_pane_ParamLimits

0x011d,	// (0x0000011d) area_top_pane

0x0195,	// (0x00000195) main_pane_ParamLimits

0x0195,	// (0x00000195) main_pane

0x024e,	// (0x0000024e) misc_graphics

0xc31d,	// (0x0000c31d) battery_pane_ParamLimits

0xc31d,	// (0x0000c31d) battery_pane

0x3c73,	// (0x00003c73) bg_status_flat_pane_g8

0x3c7b,	// (0x00003c7b) bg_status_flat_pane_g9

0x2e9c,	// (0x00002e9c) context_pane_ParamLimits

0x2e9c,	// (0x00002e9c) context_pane

0xc477,	// (0x0000c477) navi_pane_ParamLimits

0xc477,	// (0x0000c477) navi_pane

0xc4ec,	// (0x0000c4ec) signal_pane_ParamLimits

0xc4ec,	// (0x0000c4ec) signal_pane

0x0008,

0xa6b9,	// (0x0000a6b9) bg_status_flat_pane_g

0xc578,	// (0x0000c578) status_pane_g1_ParamLimits

0xc578,	// (0x0000c578) status_pane_g1

0xc584,	// (0x0000c584) status_pane_g2_ParamLimits

0xc584,	// (0x0000c584) status_pane_g2

0x30b1,	// (0x000030b1) status_pane_g3_ParamLimits

0x30b1,	// (0x000030b1) status_pane_g3

0x0004,

0xeb48,	// (0x0000eb48) status_pane_g_ParamLimits

0xeb48,	// (0x0000eb48) status_pane_g

0xc590,	// (0x0000c590) title_pane_ParamLimits

0xc590,	// (0x0000c590) title_pane

0xc5eb,	// (0x0000c5eb) uni_indicator_pane_ParamLimits

0xc5eb,	// (0x0000c5eb) uni_indicator_pane

0x2860,	// (0x00002860) bg_list_pane_ParamLimits

0x2860,	// (0x00002860) bg_list_pane

0xbce1,	// (0x0000bce1) find_pane

0xbce9,	// (0x0000bce9) listscroll_app_pane_ParamLimits

0xbce9,	// (0x0000bce9) listscroll_app_pane

0x2894,	// (0x00002894) listscroll_form_pane

0xbcf9,	// (0x0000bcf9) listscroll_gen_pane_ParamLimits

0xbcf9,	// (0x0000bcf9) listscroll_gen_pane

0x28b1,	// (0x000028b1) listscroll_set_pane

0xbd0e,	// (0x0000bd0e) main_idle_act_pane

0x235b,	// (0x0000235b) main_idle_trad_pane

0x235b,	// (0x0000235b) main_list_empty_pane

0x28cb,	// (0x000028cb) main_midp_pane

0x28d7,	// (0x000028d7) main_pane_g1_ParamLimits

0x28d7,	// (0x000028d7) main_pane_g1

0xbd21,	// (0x0000bd21) popup_ai_message_window_ParamLimits

0xbd21,	// (0x0000bd21) popup_ai_message_window

0xbda5,	// (0x0000bda5) popup_fep_china_uni_window_ParamLimits

0xbda5,	// (0x0000bda5) popup_fep_china_uni_window

0x29c1,	// (0x000029c1) popup_fep_japan_candidate_window_ParamLimits

0x29c1,	// (0x000029c1) popup_fep_japan_candidate_window

0x29df,	// (0x000029df) popup_fep_japan_predictive_window_ParamLimits

0x29df,	// (0x000029df) popup_fep_japan_predictive_window

0xbde3,	// (0x0000bde3) popup_find_window

0xbdfc,	// (0x0000bdfc) popup_grid_graphic_window_ParamLimits

0xbdfc,	// (0x0000bdfc) popup_grid_graphic_window

0x2a36,	// (0x00002a36) popup_large_graphic_colour_window

0xbe78,	// (0x0000be78) popup_menu_window_ParamLimits

0xbe78,	// (0x0000be78) popup_menu_window

0xbfd6,	// (0x0000bfd6) popup_note_image_window

0xbf9e,	// (0x0000bf9e) popup_note_wait_window_ParamLimits

0xbf9e,	// (0x0000bf9e) popup_note_wait_window

0xbfec,	// (0x0000bfec) popup_note_window_ParamLimits

0xbfec,	// (0x0000bfec) popup_note_window

0xc080,	// (0x0000c080) popup_query_code_window_ParamLimits

0xc080,	// (0x0000c080) popup_query_code_window

0x2bf6,	// (0x00002bf6) popup_query_data_code_window_ParamLimits

0x2bf6,	// (0x00002bf6) popup_query_data_code_window

0xc0b8,	// (0x0000c0b8) popup_query_data_window_ParamLimits

0xc0b8,	// (0x0000c0b8) popup_query_data_window

0xc12c,	// (0x0000c12c) popup_query_sat_info_window_ParamLimits

0xc12c,	// (0x0000c12c) popup_query_sat_info_window

0xc1b9,	// (0x0000c1b9) popup_snote_single_graphic_window_ParamLimits

0xc1b9,	// (0x0000c1b9) popup_snote_single_graphic_window

0xc1b9,	// (0x0000c1b9) popup_snote_single_text_window_ParamLimits

0xc1b9,	// (0x0000c1b9) popup_snote_single_text_window

0x2c65,	// (0x00002c65) popup_sub_window_general

0x2d69,	// (0x00002d69) popup_window_general_ParamLimits

0x2d69,	// (0x00002d69) popup_window_general

0x2d7c,	// (0x00002d7c) power_save_pane

0xbb87,	// (0x0000bb87) control_pane_g1_ParamLimits

0xbb87,	// (0x0000bb87) control_pane_g1

0x26dc,	// (0x000026dc) control_pane_g2_ParamLimits

0x26dc,	// (0x000026dc) control_pane_g2

0x26fd,	// (0x000026fd) control_pane_g3_ParamLimits

0x26fd,	// (0x000026fd) control_pane_g3

0x0007,

0xeb30,	// (0x0000eb30) control_pane_g_ParamLimits

0xeb30,	// (0x0000eb30) control_pane_g

0xbbe3,	// (0x0000bbe3) control_pane_t1_ParamLimits

0xbbe3,	// (0x0000bbe3) control_pane_t1

0xbc41,	// (0x0000bc41) control_pane_t2_ParamLimits

0xbc41,	// (0x0000bc41) control_pane_t2

0x0002,

0xeb41,	// (0x0000eb41) control_pane_t_ParamLimits

0xeb41,	// (0x0000eb41) control_pane_t

0x25e2,	// (0x000025e2) navi_navi_volume_pane_cp1

0x25ea,	// (0x000025ea) status_small_icon_pane

0x25f2,	// (0x000025f2) status_small_pane_g1_ParamLimits

0x25f2,	// (0x000025f2) status_small_pane_g1

0x2626,	// (0x00002626) status_small_pane_g2_ParamLimits

0x2626,	// (0x00002626) status_small_pane_g2

0x2632,	// (0x00002632) status_small_pane_g3_ParamLimits

0x2632,	// (0x00002632) status_small_pane_g3

0xbb51,	// (0x0000bb51) status_small_pane_g4_ParamLimits

0xbb51,	// (0x0000bb51) status_small_pane_g4

0xbb5d,	// (0x0000bb5d) status_small_pane_g5_ParamLimits

0xbb5d,	// (0x0000bb5d) status_small_pane_g5

0x2656,	// (0x00002656) status_small_pane_g6_ParamLimits

0x2656,	// (0x00002656) status_small_pane_g6

0x0007,

0xeb1f,	// (0x0000eb1f) status_small_pane_g_ParamLimits

0xeb1f,	// (0x0000eb1f) status_small_pane_g

0x2685,	// (0x00002685) status_small_pane_t1

0xbb73,	// (0x0000bb73) status_small_wait_pane_ParamLimits

0xbb73,	// (0x0000bb73) status_small_wait_pane

0xb976,	// (0x0000b976) aid_levels_signal_ParamLimits

0xb976,	// (0x0000b976) aid_levels_signal

0xb98a,	// (0x0000b98a) signal_pane_g1_ParamLimits

0xb98a,	// (0x0000b98a) signal_pane_g1

0xb9a4,	// (0x0000b9a4) signal_pane_g2_ParamLimits

0xb9a4,	// (0x0000b9a4) signal_pane_g2

0x0003,

0xeaff,	// (0x0000eaff) signal_pane_g_ParamLimits

0xeaff,	// (0x0000eaff) signal_pane_g

0x1c8f,	// (0x00001c8f) context_pane_g1

0xaf38,	// (0x0000af38) title_pane_g1

0xaf7a,	// (0x0000af7a) title_pane_t1

0x043c,	// (0x0000043c) title_pane_t2

0x0462,	// (0x00000462) title_pane_t3

0x0002,

0xea2c,	// (0x0000ea2c) title_pane_t

0xc611,	// (0x0000c611) aid_levels_battery_ParamLimits

0xc611,	// (0x0000c611) aid_levels_battery

0xc629,	// (0x0000c629) battery_pane_g1_ParamLimits

0xc629,	// (0x0000c629) battery_pane_g1

0xc644,	// (0x0000c644) battery_pane_g2_ParamLimits

0xc644,	// (0x0000c644) battery_pane_g2

0x0001,

0xeb53,	// (0x0000eb53) battery_pane_g_ParamLimits

0xeb53,	// (0x0000eb53) battery_pane_g

0xc962,	// (0x0000c962) uni_indicator_pane_g1

0xc976,	// (0x0000c976) uni_indicator_pane_g2

0xc98b,	// (0x0000c98b) uni_indicator_pane_g3

0x0005,

0xeb8f,	// (0x0000eb8f) uni_indicator_pane_g

0x1473,	// (0x00001473) navi_icon_pane_ParamLimits

0x1473,	// (0x00001473) navi_icon_pane

0x024e,	// (0x0000024e) navi_midp_pane

0x024e,	// (0x0000024e) navi_navi_pane

0x1473,	// (0x00001473) navi_text_pane_ParamLimits

0x1473,	// (0x00001473) navi_text_pane

0x002a,	// (0x0000002a) status_small_wait_pane_g1

0x0960,	// (0x00000960) status_small_wait_pane_g2

0x0001,

0xa75c,	// (0x0000a75c) status_small_wait_pane_g

0xc908,	// (0x0000c908) navi_navi_icon_text_pane

0xc910,	// (0x0000c910) navi_navi_pane_g1_ParamLimits

0xc910,	// (0x0000c910) navi_navi_pane_g1

0xc922,	// (0x0000c922) navi_navi_pane_g2_ParamLimits

0xc922,	// (0x0000c922) navi_navi_pane_g2

0x0001,

0xeb8a,	// (0x0000eb8a) navi_navi_pane_g_ParamLimits

0xeb8a,	// (0x0000eb8a) navi_navi_pane_g

0xc934,	// (0x0000c934) navi_navi_tabs_pane

0xc908,	// (0x0000c908) navi_navi_text_pane

0xc908,	// (0x0000c908) navi_navi_volume_pane

0x43a9,	// (0x000043a9) navi_text_pane_t1

0x439d,	// (0x0000439d) navi_icon_pane_g1

0x42f1,	// (0x000042f1) navi_navi_text_pane_t1

0x42e0,	// (0x000042e0) navi_navi_volume_pane_g1

0xc8ff,	// (0x0000c8ff) volume_small_pane

0xc85b,	// (0x0000c85b) navi_navi_icon_text_pane_g1

0xc863,	// (0x0000c863) navi_navi_icon_text_pane_t1

0x3cd3,	// (0x00003cd3) navi_tabs_2_long_pane

0x3cd3,	// (0x00003cd3) navi_tabs_2_pane

0x3cd3,	// (0x00003cd3) navi_tabs_3_long_pane

0x3cd3,	// (0x00003cd3) navi_tabs_3_pane

0x3cd3,	// (0x00003cd3) navi_tabs_4_pane

0xc83b,	// (0x0000c83b) tabs_2_active_pane_ParamLimits

0xc83b,	// (0x0000c83b) tabs_2_active_pane

0xc84b,	// (0x0000c84b) tabs_2_passive_pane_ParamLimits

0xc84b,	// (0x0000c84b) tabs_2_passive_pane

0xc809,	// (0x0000c809) tabs_3_active_pane_ParamLimits

0xc809,	// (0x0000c809) tabs_3_active_pane

0xc819,	// (0x0000c819) tabs_3_passive_pane_ParamLimits

0xc819,	// (0x0000c819) tabs_3_passive_pane

0xc82a,	// (0x0000c82a) tabs_3_passive_pane_cp_ParamLimits

0xc82a,	// (0x0000c82a) tabs_3_passive_pane_cp

0xc7c5,	// (0x0000c7c5) tabs_4_active_pane_ParamLimits

0xc7c5,	// (0x0000c7c5) tabs_4_active_pane

0xc7d6,	// (0x0000c7d6) tabs_4_passive_pane_ParamLimits

0xc7d6,	// (0x0000c7d6) tabs_4_passive_pane

0xc7e7,	// (0x0000c7e7) tabs_4_passive_pane_cp_ParamLimits

0xc7e7,	// (0x0000c7e7) tabs_4_passive_pane_cp

0xc7f8,	// (0x0000c7f8) tabs_4_passive_pane_cp2_ParamLimits

0xc7f8,	// (0x0000c7f8) tabs_4_passive_pane_cp2

0xc7a5,	// (0x0000c7a5) tabs_2_long_active_pane_ParamLimits

0xc7a5,	// (0x0000c7a5) tabs_2_long_active_pane

0xc7b5,	// (0x0000c7b5) tabs_2_long_passive_pane_ParamLimits

0xc7b5,	// (0x0000c7b5) tabs_2_long_passive_pane

0xc76e,	// (0x0000c76e) tabs_3_long_active_pane_ParamLimits

0xc76e,	// (0x0000c76e) tabs_3_long_active_pane

0xc781,	// (0x0000c781) tabs_3_long_passive_pane_ParamLimits

0xc781,	// (0x0000c781) tabs_3_long_passive_pane

0xc792,	// (0x0000c792) tabs_3_long_passive_pane_cp_ParamLimits

0xc792,	// (0x0000c792) tabs_3_long_passive_pane_cp

0x4084,	// (0x00004084) volume_small_pane_g1

0x408d,	// (0x0000408d) volume_small_pane_g2

0x4096,	// (0x00004096) volume_small_pane_g3

0x409f,	// (0x0000409f) volume_small_pane_g4

0x40a8,	// (0x000040a8) volume_small_pane_g5

0x40b1,	// (0x000040b1) volume_small_pane_g6

0x40ba,	// (0x000040ba) volume_small_pane_g7

0x40c3,	// (0x000040c3) volume_small_pane_g8

0x40cc,	// (0x000040cc) volume_small_pane_g9

0x40d5,	// (0x000040d5) volume_small_pane_g10

0x0009,

0xa6f6,	// (0x0000a6f6) volume_small_pane_g

0x0798,	// (0x00000798) bg_active_tab_pane_cp2_ParamLimits

0x0798,	// (0x00000798) bg_active_tab_pane_cp2

0x0482,	// (0x00000482) tabs_3_active_pane_g1

0xb007,	// (0x0000b007) tabs_3_active_pane_t1

0x0798,	// (0x00000798) bg_passive_tab_pane_cp2_ParamLimits

0x0798,	// (0x00000798) bg_passive_tab_pane_cp2

0x0482,	// (0x00000482) tabs_3_passive_pane_g1

0xb007,	// (0x0000b007) tabs_3_passive_pane_t1

0x0798,	// (0x00000798) bg_active_tab_pane_cp3_ParamLimits

0x0798,	// (0x00000798) bg_active_tab_pane_cp3

0x4c8d,	// (0x00004c8d) tabs_4_active_pane_g1

0xb01d,	// (0x0000b01d) tabs_4_active_pane_t1

0x0798,	// (0x00000798) bg_passive_tab_pane_cp3_ParamLimits

0x0798,	// (0x00000798) bg_passive_tab_pane_cp3

0x4c8d,	// (0x00004c8d) tabs_4_1_passive_pane_g1

0xb01d,	// (0x0000b01d) tabs_4_1_passive_pane_t1

0x28cb,	// (0x000028cb) list_highlight_pane_cp2

0xca4c,	// (0x0000ca4c) list_set_pane_ParamLimits

0xca4c,	// (0x0000ca4c) list_set_pane

0xcada,	// (0x0000cada) main_pane_set_t1_ParamLimits

0xcada,	// (0x0000cada) main_pane_set_t1

0xcafa,	// (0x0000cafa) main_pane_set_t2_ParamLimits

0xcafa,	// (0x0000cafa) main_pane_set_t2

0xcb0e,	// (0x0000cb0e) main_pane_set_t3_ParamLimits

0xcb0e,	// (0x0000cb0e) main_pane_set_t3

0xcb20,	// (0x0000cb20) main_pane_set_t4_ParamLimits

0xcb20,	// (0x0000cb20) main_pane_set_t4

0x0003,

0xebd8,	// (0x0000ebd8) main_pane_set_t_ParamLimits

0xebd8,	// (0x0000ebd8) main_pane_set_t

0xcb32,	// (0x0000cb32) setting_code_pane

0xcb3a,	// (0x0000cb3a) setting_slider_graphic_pane

0xcb3a,	// (0x0000cb3a) setting_slider_pane

0xcb3a,	// (0x0000cb3a) setting_text_pane

0xcb3a,	// (0x0000cb3a) setting_volume_pane

0xb033,	// (0x0000b033) volume_set_pane

0x0474,	// (0x00000474) bg_set_opt_pane_cp

0x04be,	// (0x000004be) setting_slider_pane_t1

0xb03b,	// (0x0000b03b) setting_slider_pane_t2

0xb054,	// (0x0000b054) setting_slider_pane_t3

0x0002,

0xea33,	// (0x0000ea33) setting_slider_pane_t

0x0504,	// (0x00000504) slider_set_pane

0x024e,	// (0x0000024e) bg_set_opt_pane_cp2

0x051a,	// (0x0000051a) setting_slider_graphic_pane_g1

0xb06b,	// (0x0000b06b) setting_slider_graphic_pane_t1

0xb07a,	// (0x0000b07a) setting_slider_graphic_pane_t2

0x0001,

0xea3a,	// (0x0000ea3a) setting_slider_graphic_pane_t

0xb089,	// (0x0000b089) slider_set_pane_cp

0x024e,	// (0x0000024e) input_focus_pane_cp1

0x4977,	// (0x00004977) list_set_text_pane

0x002a,	// (0x0000002a) setting_text_pane_g1

0x024e,	// (0x0000024e) input_focus_pane_cp2

0x002a,	// (0x0000002a) setting_code_pane_g1

0x0549,	// (0x00000549) setting_code_pane_t1

0xb091,	// (0x0000b091) set_text_pane_t1_ParamLimits

0xb091,	// (0x0000b091) set_text_pane_t1

0x1320,	// (0x00001320) set_opt_bg_pane_g1

0x1328,	// (0x00001328) set_opt_bg_pane_g2

0xca18,	// (0x0000ca18) set_opt_bg_pane_g3

0x1338,	// (0x00001338) set_opt_bg_pane_g4

0x1340,	// (0x00001340) set_opt_bg_pane_g5

0x1348,	// (0x00001348) set_opt_bg_pane_g6

0xca20,	// (0x0000ca20) set_opt_bg_pane_g7

0xca28,	// (0x0000ca28) set_opt_bg_pane_g8

0xca30,	// (0x0000ca30) set_opt_bg_pane_g9

0x0008,

0xebc5,	// (0x0000ebc5) set_opt_bg_pane_g

0x48e6,	// (0x000048e6) slider_set_pane_g1

0x48f3,	// (0x000048f3) slider_set_pane_g2

0x0006,

0xebb6,	// (0x0000ebb6) slider_set_pane_g

0xc9a0,	// (0x0000c9a0) volume_set_pane_g1

0xc9a8,	// (0x0000c9a8) volume_set_pane_g2

0xc9b0,	// (0x0000c9b0) volume_set_pane_g3

0xc9b8,	// (0x0000c9b8) volume_set_pane_g4

0xc9c0,	// (0x0000c9c0) volume_set_pane_g5

0xc9c8,	// (0x0000c9c8) volume_set_pane_g6

0xc9d0,	// (0x0000c9d0) volume_set_pane_g7

0xc9d8,	// (0x0000c9d8) volume_set_pane_g8

0xc9e0,	// (0x0000c9e0) volume_set_pane_g9

0xc9e8,	// (0x0000c9e8) volume_set_pane_g10

0x0009,

0xeb9c,	// (0x0000eb9c) volume_set_pane_g

0xb0ab,	// (0x0000b0ab) indicator_pane_ParamLimits

0xb0ab,	// (0x0000b0ab) indicator_pane

0xb0d3,	// (0x0000b0d3) main_idle_pane_g2_ParamLimits

0xb0d3,	// (0x0000b0d3) main_idle_pane_g2

0xb103,	// (0x0000b103) main_pane_idle_g1_ParamLimits

0xb103,	// (0x0000b103) main_pane_idle_g1

0x05b0,	// (0x000005b0) popup_clock_digital_analogue_window_ParamLimits

0x05b0,	// (0x000005b0) popup_clock_digital_analogue_window

0xb128,	// (0x0000b128) soft_indicator_pane_ParamLimits

0xb128,	// (0x0000b128) soft_indicator_pane

0xb142,	// (0x0000b142) wallpaper_pane_ParamLimits

0xb142,	// (0x0000b142) wallpaper_pane

0x002a,	// (0x0000002a) wallpaper_pane_g1

0xb154,	// (0x0000b154) indicator_pane_g1_ParamLimits

0xb154,	// (0x0000b154) indicator_pane_g1

0x4e24,	// (0x00004e24) navi_navi_icon_text_pane_srt_g1

0x0602,	// (0x00000602) soft_indicator_pane_t1

0x061c,	// (0x0000061c) aid_ps_area_pane

0xb16d,	// (0x0000b16d) aid_ps_clock_pane

0x0639,	// (0x00000639) aid_ps_indicator_pane

0x0645,	// (0x00000645) indicator_ps_pane_ParamLimits

0x0645,	// (0x00000645) indicator_ps_pane

0x0654,	// (0x00000654) power_save_pane_g1_ParamLimits

0x0654,	// (0x00000654) power_save_pane_g1

0x0660,	// (0x00000660) power_save_pane_g2_ParamLimits

0x0660,	// (0x00000660) power_save_pane_g2

0x0034,	// (0x00000034) aid_navinavi_width_pane

0x061c,	// (0x0000061c) aid_ps_area_pane_ParamLimits

0x0001,

0xa3af,	// (0x0000a3af) power_save_pane_g_ParamLimits

0xa3af,	// (0x0000a3af) power_save_pane_g

0x066e,	// (0x0000066e) power_save_pane_t1_ParamLimits

0x066e,	// (0x0000066e) power_save_pane_t1

0xb16d,	// (0x0000b16d) aid_ps_clock_pane_ParamLimits

0x0639,	// (0x00000639) aid_ps_indicator_pane_ParamLimits

0x0680,	// (0x00000680) power_save_pane_t4_ParamLimits

0x0680,	// (0x00000680) power_save_pane_t4

0x0001,

0xa3b4,	// (0x0000a3b4) power_save_pane_t_ParamLimits

0xa3b4,	// (0x0000a3b4) power_save_pane_t

0x06aa,	// (0x000006aa) power_save_t3_ParamLimits

0x06aa,	// (0x000006aa) power_save_t3

0x0695,	// (0x00000695) power_save_t2_ParamLimits

0x0695,	// (0x00000695) power_save_t2

0x06bf,	// (0x000006bf) indicator_ps_pane_g1

0xb179,	// (0x0000b179) ai_gene_pane_ParamLimits

0xb179,	// (0x0000b179) ai_gene_pane

0xb190,	// (0x0000b190) ai_links_pane_ParamLimits

0xb190,	// (0x0000b190) ai_links_pane

0xb1a2,	// (0x0000b1a2) indicator_pane_cp1_ParamLimits

0xb1a2,	// (0x0000b1a2) indicator_pane_cp1

0xb1b1,	// (0x0000b1b1) main_pane_idle_g1_cp_ParamLimits

0xb1b1,	// (0x0000b1b1) main_pane_idle_g1_cp

0x06f8,	// (0x000006f8) popup_ai_links_title_window

0xb1c9,	// (0x0000b1c9) soft_indicator_pane_cp1_ParamLimits

0xb1c9,	// (0x0000b1c9) soft_indicator_pane_cp1

0x4688,	// (0x00004688) ai_links_pane_g1

0x4691,	// (0x00004691) grid_ai_links_pane

0xc959,	// (0x0000c959) ai_gene_pane_1

0x4676,	// (0x00004676) ai_gene_pane_2

0x467f,	// (0x0000467f) list_highlight_pane_cp4

0xc93d,	// (0x0000c93d) cell_ai_link_pane_ParamLimits

0xc93d,	// (0x0000c93d) cell_ai_link_pane

0x4649,	// (0x00004649) cell_ai_link_pane_g1

0x0960,	// (0x00000960) cell_ai_link_pane_g2

0x0001,

0xa757,	// (0x0000a757) cell_ai_link_pane_g

0x024e,	// (0x0000024e) grid_highlight_cp2

0x024e,	// (0x0000024e) bg_popup_sub_pane_cp1

0x071b,	// (0x0000071b) popup_ai_links_title_window_t1

0x459b,	// (0x0000459b) ai_gene_pane_1_g1_ParamLimits

0x459b,	// (0x0000459b) ai_gene_pane_1_g1

0x45a7,	// (0x000045a7) ai_gene_pane_1_g2_ParamLimits

0x45a7,	// (0x000045a7) ai_gene_pane_1_g2

0x0001,

0xa74d,	// (0x0000a74d) ai_gene_pane_1_g_ParamLimits

0xa74d,	// (0x0000a74d) ai_gene_pane_1_g

0x45b4,	// (0x000045b4) ai_gene_pane_1_t1_ParamLimits

0x45b4,	// (0x000045b4) ai_gene_pane_1_t1

0x45e8,	// (0x000045e8) grid_ai_soft_ind_pane

0x4586,	// (0x00004586) ai_gene_pane_2_t1_ParamLimits

0x4586,	// (0x00004586) ai_gene_pane_2_t1

0xb1dd,	// (0x0000b1dd) main_pane_empty_t1_ParamLimits

0xb1dd,	// (0x0000b1dd) main_pane_empty_t1

0xb1fa,	// (0x0000b1fa) main_pane_empty_t2_ParamLimits

0xb1fa,	// (0x0000b1fa) main_pane_empty_t2

0xb212,	// (0x0000b212) main_pane_empty_t3_ParamLimits

0xb212,	// (0x0000b212) main_pane_empty_t3

0xb225,	// (0x0000b225) main_pane_empty_t4_ParamLimits

0xb225,	// (0x0000b225) main_pane_empty_t4

0xb238,	// (0x0000b238) main_pane_empty_t5_ParamLimits

0xb238,	// (0x0000b238) main_pane_empty_t5

0x0004,

0xea3f,	// (0x0000ea3f) main_pane_empty_t_ParamLimits

0xea3f,	// (0x0000ea3f) main_pane_empty_t

0x1473,	// (0x00001473) bg_popup_window_pane_ParamLimits

0x1473,	// (0x00001473) bg_popup_window_pane

0x4300,	// (0x00004300) find_popup_pane_cp2_ParamLimits

0x4300,	// (0x00004300) find_popup_pane_cp2

0x430c,	// (0x0000430c) heading_pane_ParamLimits

0x430c,	// (0x0000430c) heading_pane

0x024e,	// (0x0000024e) bg_popup_sub_pane

0xc880,	// (0x0000c880) bg_popup_window_pane_g1_ParamLimits

0xc880,	// (0x0000c880) bg_popup_window_pane_g1

0xc88f,	// (0x0000c88f) bg_popup_window_pane_g2_ParamLimits

0xc88f,	// (0x0000c88f) bg_popup_window_pane_g2

0xc89b,	// (0x0000c89b) bg_popup_window_pane_g3_ParamLimits

0xc89b,	// (0x0000c89b) bg_popup_window_pane_g3

0xc8a7,	// (0x0000c8a7) bg_popup_window_pane_g4_ParamLimits

0xc8a7,	// (0x0000c8a7) bg_popup_window_pane_g4

0xc8b6,	// (0x0000c8b6) bg_popup_window_pane_g5_ParamLimits

0xc8b6,	// (0x0000c8b6) bg_popup_window_pane_g5

0xc8c6,	// (0x0000c8c6) bg_popup_window_pane_g6_ParamLimits

0xc8c6,	// (0x0000c8c6) bg_popup_window_pane_g6

0xc8d2,	// (0x0000c8d2) bg_popup_window_pane_g7_ParamLimits

0xc8d2,	// (0x0000c8d2) bg_popup_window_pane_g7

0xc8e1,	// (0x0000c8e1) bg_popup_window_pane_g8_ParamLimits

0xc8e1,	// (0x0000c8e1) bg_popup_window_pane_g8

0xc8f0,	// (0x0000c8f0) bg_popup_window_pane_g9_ParamLimits

0xc8f0,	// (0x0000c8f0) bg_popup_window_pane_g9

0x42d4,	// (0x000042d4) bg_popup_window_pane_g10_ParamLimits

0x42d4,	// (0x000042d4) bg_popup_window_pane_g10

0x0009,

0xeb75,	// (0x0000eb75) bg_popup_window_pane_g_ParamLimits

0xeb75,	// (0x0000eb75) bg_popup_window_pane_g

0x41fd,	// (0x000041fd) bg_popup_heading_pane_ParamLimits

0x41fd,	// (0x000041fd) bg_popup_heading_pane

0x4d8b,	// (0x00004d8b) tabs_4_passive_pane_cp_srt_ParamLimits

0x4d8b,	// (0x00004d8b) tabs_4_passive_pane_cp_srt

0x4d9d,	// (0x00004d9d) tabs_4_passive_pane_srt_ParamLimits

0x4211,	// (0x00004211) heading_pane_g2

0x4d9d,	// (0x00004d9d) tabs_4_passive_pane_srt

0x345c,	// (0x0000345c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x345c,	// (0x0000345c) bg_passive_tab_pane_cp3_srt

0x4219,	// (0x00004219) heading_pane_t1_ParamLimits

0x4219,	// (0x00004219) heading_pane_t1

0x4230,	// (0x00004230) heading_pane_t2_ParamLimits

0x4230,	// (0x00004230) heading_pane_t2

0x0001,

0xa710,	// (0x0000a710) heading_pane_t_ParamLimits

0xa710,	// (0x0000a710) heading_pane_t

0x3c3b,	// (0x00003c3b) bg_popup_heading_pane_g1

0x3ce4,	// (0x00003ce4) bg_popup_heading_pane_g2

0x3cec,	// (0x00003cec) bg_popup_heading_pane_g3

0x3cf4,	// (0x00003cf4) bg_popup_heading_pane_g4

0x3cfc,	// (0x00003cfc) bg_popup_heading_pane_g5

0x3d04,	// (0x00003d04) bg_popup_heading_pane_g6

0x3d0c,	// (0x00003d0c) bg_popup_heading_pane_g7

0x3d14,	// (0x00003d14) bg_popup_heading_pane_g8

0x3d1c,	// (0x00003d1c) bg_popup_heading_pane_g9

0x0008,

0xa6cc,	// (0x0000a6cc) bg_popup_heading_pane_g

0x32d0,	// (0x000032d0) bg_popup_sub_pane_g1

0x32d8,	// (0x000032d8) bg_popup_sub_pane_g2

0x32e0,	// (0x000032e0) bg_popup_sub_pane_g3

0x32e8,	// (0x000032e8) bg_popup_sub_pane_g4

0x32f0,	// (0x000032f0) bg_popup_sub_pane_g5

0x32f8,	// (0x000032f8) bg_popup_sub_pane_g6

0x3300,	// (0x00003300) bg_popup_sub_pane_g7

0x3308,	// (0x00003308) bg_popup_sub_pane_g8

0x3310,	// (0x00003310) bg_popup_sub_pane_g9

0x0008,

0xa6a6,	// (0x0000a6a6) bg_popup_sub_pane_g

0x0798,	// (0x00000798) bg_popup_window_pane_cp5_ParamLimits

0x0798,	// (0x00000798) bg_popup_window_pane_cp5

0x07b4,	// (0x000007b4) popup_note_window_g1_ParamLimits

0x07b4,	// (0x000007b4) popup_note_window_g1

0x07c0,	// (0x000007c0) popup_note_window_t1_ParamLimits

0x07c0,	// (0x000007c0) popup_note_window_t1

0x07d6,	// (0x000007d6) popup_note_window_t2_ParamLimits

0x07d6,	// (0x000007d6) popup_note_window_t2

0x07ec,	// (0x000007ec) popup_note_window_t3_ParamLimits

0x07ec,	// (0x000007ec) popup_note_window_t3

0x0802,	// (0x00000802) popup_note_window_t4_ParamLimits

0x0802,	// (0x00000802) popup_note_window_t4

0x082a,	// (0x0000082a) popup_note_window_t5_ParamLimits

0x082a,	// (0x0000082a) popup_note_window_t5

0x0004,

0xa3c4,	// (0x0000a3c4) popup_note_window_t_ParamLimits

0xa3c4,	// (0x0000a3c4) popup_note_window_t

0x0874,	// (0x00000874) bg_popup_window_pane_cp6_ParamLimits

0x0874,	// (0x00000874) bg_popup_window_pane_cp6

0x3bb7,	// (0x00003bb7) popup_note_image_window_g1_ParamLimits

0x3bb7,	// (0x00003bb7) popup_note_image_window_g1

0x3bc3,	// (0x00003bc3) popup_note_image_window_g2_ParamLimits

0x3bc3,	// (0x00003bc3) popup_note_image_window_g2

0x0001,

0xa69a,	// (0x0000a69a) popup_note_image_window_g_ParamLimits

0xa69a,	// (0x0000a69a) popup_note_image_window_g

0x3bdc,	// (0x00003bdc) popup_note_image_window_t1_ParamLimits

0x3bdc,	// (0x00003bdc) popup_note_image_window_t1

0x3bf5,	// (0x00003bf5) popup_note_image_window_t2_ParamLimits

0x3bf5,	// (0x00003bf5) popup_note_image_window_t2

0x3c0e,	// (0x00003c0e) popup_note_image_window_t3_ParamLimits

0x3c0e,	// (0x00003c0e) popup_note_image_window_t3

0x0002,

0xa69f,	// (0x0000a69f) popup_note_image_window_t_ParamLimits

0xa69f,	// (0x0000a69f) popup_note_image_window_t

0x3a86,	// (0x00003a86) bg_popup_window_pane_cp7_ParamLimits

0x3a86,	// (0x00003a86) bg_popup_window_pane_cp7

0x3ab6,	// (0x00003ab6) popup_note_wait_window_g1_ParamLimits

0x3ab6,	// (0x00003ab6) popup_note_wait_window_g1

0x3ac2,	// (0x00003ac2) popup_note_wait_window_g2_ParamLimits

0x3ac2,	// (0x00003ac2) popup_note_wait_window_g2

0x0002,

0xa688,	// (0x0000a688) popup_note_wait_window_g_ParamLimits

0xa688,	// (0x0000a688) popup_note_wait_window_g

0x3ada,	// (0x00003ada) popup_note_wait_window_t1_ParamLimits

0x3ada,	// (0x00003ada) popup_note_wait_window_t1

0x3b01,	// (0x00003b01) popup_note_wait_window_t2_ParamLimits

0x3b01,	// (0x00003b01) popup_note_wait_window_t2

0x3b1e,	// (0x00003b1e) popup_note_wait_window_t3_ParamLimits

0x3b1e,	// (0x00003b1e) popup_note_wait_window_t3

0x3b31,	// (0x00003b31) popup_note_wait_window_t4_ParamLimits

0x3b31,	// (0x00003b31) popup_note_wait_window_t4

0x0004,

0xa68f,	// (0x0000a68f) popup_note_wait_window_t_ParamLimits

0xa68f,	// (0x0000a68f) popup_note_wait_window_t

0x3b56,	// (0x00003b56) wait_bar_pane_ParamLimits

0x3b56,	// (0x00003b56) wait_bar_pane

0x024e,	// (0x0000024e) wait_anim_pane

0x024e,	// (0x0000024e) wait_border_pane

0x002a,	// (0x0000002a) wait_anim_pane_g1

0x002a,	// (0x0000002a) wait_anim_pane_g2

0x0001,

0xa543,	// (0x0000a543) wait_anim_pane_g

0x3a36,	// (0x00003a36) wait_border_pane_g1

0x3a3f,	// (0x00003a3f) wait_border_pane_g2

0x3a48,	// (0x00003a48) wait_border_pane_g3

0x0002,

0xa681,	// (0x0000a681) wait_border_pane_g

0x38a6,	// (0x000038a6) bg_popup_window_pane_cp16_ParamLimits

0x38a6,	// (0x000038a6) bg_popup_window_pane_cp16

0x39a6,	// (0x000039a6) indicator_popup_pane_cp4_ParamLimits

0x39a6,	// (0x000039a6) indicator_popup_pane_cp4

0x39ba,	// (0x000039ba) popup_query_data_window_t1_ParamLimits

0x39ba,	// (0x000039ba) popup_query_data_window_t1

0x39cc,	// (0x000039cc) popup_query_data_window_t2_ParamLimits

0x39cc,	// (0x000039cc) popup_query_data_window_t2

0x39e5,	// (0x000039e5) popup_query_data_window_t3_ParamLimits

0x39e5,	// (0x000039e5) popup_query_data_window_t3

0x0002,

0xa67a,	// (0x0000a67a) popup_query_data_window_t_ParamLimits

0xa67a,	// (0x0000a67a) popup_query_data_window_t

0x39ff,	// (0x000039ff) query_popup_data_pane_ParamLimits

0x39ff,	// (0x000039ff) query_popup_data_pane

0x3a13,	// (0x00003a13) query_popup_data_pane_cp1_ParamLimits

0x3a13,	// (0x00003a13) query_popup_data_pane_cp1

0x38a6,	// (0x000038a6) bg_popup_window_pane_cp10_ParamLimits

0x38a6,	// (0x000038a6) bg_popup_window_pane_cp10

0x38d8,	// (0x000038d8) indicator_popup_pane_ParamLimits

0x38d8,	// (0x000038d8) indicator_popup_pane

0x38fa,	// (0x000038fa) popup_query_code_window_t1_ParamLimits

0x38fa,	// (0x000038fa) popup_query_code_window_t1

0x3914,	// (0x00003914) popup_query_code_window_t2_ParamLimits

0x3914,	// (0x00003914) popup_query_code_window_t2

0x395d,	// (0x0000395d) popup_query_code_window_t3_ParamLimits

0x395d,	// (0x0000395d) popup_query_code_window_t3

0x0002,

0xa673,	// (0x0000a673) popup_query_code_window_t_ParamLimits

0xa673,	// (0x0000a673) popup_query_code_window_t

0x398c,	// (0x0000398c) query_popup_pane_ParamLimits

0x398c,	// (0x0000398c) query_popup_pane

0x0874,	// (0x00000874) bg_popup_window_pane_cp15_ParamLimits

0x0874,	// (0x00000874) bg_popup_window_pane_cp15

0x0892,	// (0x00000892) indicator_popup_pane_cp1_ParamLimits

0x0892,	// (0x00000892) indicator_popup_pane_cp1

0x08a5,	// (0x000008a5) indicator_popup_pane_cp2_ParamLimits

0x08a5,	// (0x000008a5) indicator_popup_pane_cp2

0x08b8,	// (0x000008b8) popup_query_data_code_window_g1_ParamLimits

0x08b8,	// (0x000008b8) popup_query_data_code_window_g1

0x08cb,	// (0x000008cb) popup_query_data_code_window_t1_ParamLimits

0x08cb,	// (0x000008cb) popup_query_data_code_window_t1

0x08dd,	// (0x000008dd) popup_query_data_code_window_t2_ParamLimits

0x08dd,	// (0x000008dd) popup_query_data_code_window_t2

0x08ef,	// (0x000008ef) popup_query_data_code_window_t3_ParamLimits

0x08ef,	// (0x000008ef) popup_query_data_code_window_t3

0x0905,	// (0x00000905) popup_query_data_code_window_t4_ParamLimits

0x0905,	// (0x00000905) popup_query_data_code_window_t4

0x0003,

0xa3cf,	// (0x0000a3cf) popup_query_data_code_window_t_ParamLimits

0xa3cf,	// (0x0000a3cf) popup_query_data_code_window_t

0x21d5,	// (0x000021d5) list_single_midp_graphic_pane_g3

0x091d,	// (0x0000091d) query_popup_data_pane_cp2_ParamLimits

0x0930,	// (0x00000930) query_popup_pane_cp2_ParamLimits

0x0930,	// (0x00000930) query_popup_pane_cp2

0x024e,	// (0x0000024e) bg_popup_window_pane_cp11

0x388a,	// (0x0000388a) heading_pane_cp5

0x3892,	// (0x00003892) listscroll_popup_info_pane

0x024e,	// (0x0000024e) input_focus_pane_cp3

0x0943,	// (0x00000943) query_popup_pane_t1

0x0951,	// (0x00000951) list_popup_info_pane_ParamLimits

0x0951,	// (0x00000951) list_popup_info_pane

0x0960,	// (0x00000960) listscroll_popup_info_pane_g1

0x0968,	// (0x00000968) scroll_pane_cp7

0x0970,	// (0x00000970) popup_info_list_pane_t1_ParamLimits

0x0970,	// (0x00000970) popup_info_list_pane_t1

0x098a,	// (0x0000098a) popup_info_list_pane_t2_ParamLimits

0x098a,	// (0x0000098a) popup_info_list_pane_t2

0x0001,

0xa3d8,	// (0x0000a3d8) popup_info_list_pane_t_ParamLimits

0xa3d8,	// (0x0000a3d8) popup_info_list_pane_t

0x024e,	// (0x0000024e) bg_popup_window_pane_cp12

0x4e5b,	// (0x00004e5b) find_popup_pane

0x0474,	// (0x00000474) bg_popup_window_pane_cp3

0x09a4,	// (0x000009a4) heading_pane_cp3

0x09b3,	// (0x000009b3) listscroll_popup_graphic_pane

0x024e,	// (0x0000024e) bg_popup_window_pane_cp4

0xb29b,	// (0x0000b29b) heading_pane_cp4

0x0a1a,	// (0x00000a1a) listscroll_popup_colour_pane

0x0a22,	// (0x00000a22) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0a22,	// (0x00000a22) cell_large_graphic_colour_none_popup_pane

0xb2a3,	// (0x0000b2a3) grid_large_graphic_colour_popup_pane_ParamLimits

0xb2a3,	// (0x0000b2a3) grid_large_graphic_colour_popup_pane

0x0a4e,	// (0x00000a4e) listscroll_popup_colour_pane_g1_ParamLimits

0x0a4e,	// (0x00000a4e) listscroll_popup_colour_pane_g1

0x0a65,	// (0x00000a65) listscroll_popup_colour_pane_g2_ParamLimits

0x0a65,	// (0x00000a65) listscroll_popup_colour_pane_g2

0x0a7c,	// (0x00000a7c) listscroll_popup_colour_pane_g3_ParamLimits

0x0a7c,	// (0x00000a7c) listscroll_popup_colour_pane_g3

0xb2bf,	// (0x0000b2bf) listscroll_popup_colour_pane_g4_ParamLimits

0xb2bf,	// (0x0000b2bf) listscroll_popup_colour_pane_g4

0x0003,

0xea4a,	// (0x0000ea4a) listscroll_popup_colour_pane_g_ParamLimits

0xea4a,	// (0x0000ea4a) listscroll_popup_colour_pane_g

0x0a9b,	// (0x00000a9b) scroll_pane_cp6_ParamLimits

0x0a9b,	// (0x00000a9b) scroll_pane_cp6

0xb2ce,	// (0x0000b2ce) cell_large_graphic_colour_popup_pane_ParamLimits

0xb2ce,	// (0x0000b2ce) cell_large_graphic_colour_popup_pane

0x0acc,	// (0x00000acc) cell_large_graphic_colour_none_popup_pane_t1

0x024e,	// (0x0000024e) grid_highlight_pane_cp5

0x0adb,	// (0x00000adb) cell_large_graphic_colour_popup_pane_g1

0x0ae3,	// (0x00000ae3) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xa3e6,	// (0x0000a3e6) cell_large_graphic_colour_popup_pane_g

0x0aeb,	// (0x00000aeb) cell_large_graphic_colour_popup_pane_g2_copy1

0x0af4,	// (0x00000af4) grid_highlight_pane_cp4

0x0afc,	// (0x00000afc) bg_popup_window_pane_cp8_ParamLimits

0x0afc,	// (0x00000afc) bg_popup_window_pane_cp8

0x0b17,	// (0x00000b17) popup_snote_single_text_window_g1_ParamLimits

0x0b17,	// (0x00000b17) popup_snote_single_text_window_g1

0x0b29,	// (0x00000b29) popup_snote_single_text_window_t1_ParamLimits

0x0b29,	// (0x00000b29) popup_snote_single_text_window_t1

0x0b3c,	// (0x00000b3c) popup_snote_single_text_window_t2_ParamLimits

0x0b3c,	// (0x00000b3c) popup_snote_single_text_window_t2

0x0b4f,	// (0x00000b4f) popup_snote_single_text_window_t3_ParamLimits

0x0b4f,	// (0x00000b4f) popup_snote_single_text_window_t3

0x0b88,	// (0x00000b88) popup_snote_single_text_window_t4_ParamLimits

0x0b88,	// (0x00000b88) popup_snote_single_text_window_t4

0x0bbc,	// (0x00000bbc) popup_snote_single_text_window_t5_ParamLimits

0x0bbc,	// (0x00000bbc) popup_snote_single_text_window_t5

0x0004,

0xa3eb,	// (0x0000a3eb) popup_snote_single_text_window_t_ParamLimits

0xa3eb,	// (0x0000a3eb) popup_snote_single_text_window_t

0x0beb,	// (0x00000beb) bg_popup_window_pane_cp9_ParamLimits

0x0beb,	// (0x00000beb) bg_popup_window_pane_cp9

0x0b17,	// (0x00000b17) popup_snote_single_graphic_window_g1_ParamLimits

0x0b17,	// (0x00000b17) popup_snote_single_graphic_window_g1

0x0bf9,	// (0x00000bf9) popup_snote_single_graphic_window_g2_ParamLimits

0x0bf9,	// (0x00000bf9) popup_snote_single_graphic_window_g2

0x0001,

0xa3f6,	// (0x0000a3f6) popup_snote_single_graphic_window_g_ParamLimits

0xa3f6,	// (0x0000a3f6) popup_snote_single_graphic_window_g

0x0c05,	// (0x00000c05) popup_snote_single_graphic_window_t1_ParamLimits

0x0c05,	// (0x00000c05) popup_snote_single_graphic_window_t1

0x0c18,	// (0x00000c18) popup_snote_single_graphic_window_t2_ParamLimits

0x0c18,	// (0x00000c18) popup_snote_single_graphic_window_t2

0x0b4f,	// (0x00000b4f) popup_snote_single_graphic_window_t3_ParamLimits

0x0b4f,	// (0x00000b4f) popup_snote_single_graphic_window_t3

0x0b88,	// (0x00000b88) popup_snote_single_graphic_window_t4_ParamLimits

0x0b88,	// (0x00000b88) popup_snote_single_graphic_window_t4

0x0bbc,	// (0x00000bbc) popup_snote_single_graphic_window_t5_ParamLimits

0x0bbc,	// (0x00000bbc) popup_snote_single_graphic_window_t5

0x0004,

0xa3fb,	// (0x0000a3fb) popup_snote_single_graphic_window_t_ParamLimits

0xa3fb,	// (0x0000a3fb) popup_snote_single_graphic_window_t

0xcc51,	// (0x0000cc51) grid_graphic_popup_pane_ParamLimits

0xcc51,	// (0x0000cc51) grid_graphic_popup_pane

0xcc74,	// (0x0000cc74) listscroll_popup_graphic_pane_g1_ParamLimits

0xcc74,	// (0x0000cc74) listscroll_popup_graphic_pane_g1

0xcc88,	// (0x0000cc88) listscroll_popup_graphic_pane_g2_ParamLimits

0xcc88,	// (0x0000cc88) listscroll_popup_graphic_pane_g2

0x0001,

0xebfb,	// (0x0000ebfb) listscroll_popup_graphic_pane_g_ParamLimits

0xebfb,	// (0x0000ebfb) listscroll_popup_graphic_pane_g

0x4d5b,	// (0x00004d5b) scroll_pane_cp5

0xcc0d,	// (0x0000cc0d) cell_graphic_popup_pane_ParamLimits

0xcc0d,	// (0x0000cc0d) cell_graphic_popup_pane

0x4c95,	// (0x00004c95) cell_graphic_popup_pane_g1

0x4c9d,	// (0x00004c9d) cell_graphic_popup_pane_g2

0x0aeb,	// (0x00000aeb) cell_graphic_popup_pane_g3

0x0002,

0xa7e9,	// (0x0000a7e9) cell_graphic_popup_pane_g

0x4ca6,	// (0x00004ca6) cell_graphic_popup_pane_t2

0x0af4,	// (0x00000af4) grid_highlight_pane_cp3

0x0c3d,	// (0x00000c3d) list_gen_pane_ParamLimits

0x0c3d,	// (0x00000c3d) list_gen_pane

0x0c6e,	// (0x00000c6e) scroll_pane

0xcbe0,	// (0x0000cbe0) bg_list_pane_g1_ParamLimits

0xcbe0,	// (0x0000cbe0) bg_list_pane_g1

0x4c2c,	// (0x00004c2c) bg_list_pane_g2_ParamLimits

0x4c2c,	// (0x00004c2c) bg_list_pane_g2

0x4c3f,	// (0x00004c3f) bg_list_pane_g3_ParamLimits

0x4c3f,	// (0x00004c3f) bg_list_pane_g3

0x4c51,	// (0x00004c51) bg_list_pane_g4_ParamLimits

0x4c51,	// (0x00004c51) bg_list_pane_g4

0xcbfb,	// (0x0000cbfb) bg_list_pane_g5_ParamLimits

0xcbfb,	// (0x0000cbfb) bg_list_pane_g5

0x0004,

0xebf0,	// (0x0000ebf0) bg_list_pane_g_ParamLimits

0xebf0,	// (0x0000ebf0) bg_list_pane_g

0xcb80,	// (0x0000cb80) list_double2_graphic_large_graphic_pane_ParamLimits

0xcb80,	// (0x0000cb80) list_double2_graphic_large_graphic_pane

0xcb80,	// (0x0000cb80) list_double2_graphic_pane_ParamLimits

0xcb80,	// (0x0000cb80) list_double2_graphic_pane

0xcb80,	// (0x0000cb80) list_double2_large_graphic_pane_ParamLimits

0xcb80,	// (0x0000cb80) list_double2_large_graphic_pane

0xcb80,	// (0x0000cb80) list_double2_pane_ParamLimits

0xcb80,	// (0x0000cb80) list_double2_pane

0xcb80,	// (0x0000cb80) list_double_graphic_heading_pane_ParamLimits

0xcb80,	// (0x0000cb80) list_double_graphic_heading_pane

0xcb80,	// (0x0000cb80) list_double_graphic_pane_ParamLimits

0xcb80,	// (0x0000cb80) list_double_graphic_pane

0xcb80,	// (0x0000cb80) list_double_heading_pane_ParamLimits

0xcb80,	// (0x0000cb80) list_double_heading_pane

0xcb80,	// (0x0000cb80) list_double_large_graphic_pane_ParamLimits

0xcb80,	// (0x0000cb80) list_double_large_graphic_pane

0xcb80,	// (0x0000cb80) list_double_number_pane_ParamLimits

0xcb80,	// (0x0000cb80) list_double_number_pane

0xcb80,	// (0x0000cb80) list_double_pane_ParamLimits

0xcb80,	// (0x0000cb80) list_double_pane

0xcb80,	// (0x0000cb80) list_double_time_pane_ParamLimits

0xcb80,	// (0x0000cb80) list_double_time_pane

0xcb80,	// (0x0000cb80) list_setting_number_pane_ParamLimits

0xcb80,	// (0x0000cb80) list_setting_number_pane

0xcb80,	// (0x0000cb80) list_setting_pane_ParamLimits

0xcb80,	// (0x0000cb80) list_setting_pane

0xcb91,	// (0x0000cb91) list_single_2graphic_pane_ParamLimits

0xcb91,	// (0x0000cb91) list_single_2graphic_pane

0xcb91,	// (0x0000cb91) list_single_graphic_heading_pane_ParamLimits

0xcb91,	// (0x0000cb91) list_single_graphic_heading_pane

0xcb91,	// (0x0000cb91) list_single_graphic_pane_ParamLimits

0xcb91,	// (0x0000cb91) list_single_graphic_pane

0xcb91,	// (0x0000cb91) list_single_heading_pane_ParamLimits

0xcb91,	// (0x0000cb91) list_single_heading_pane

0xcbce,	// (0x0000cbce) list_single_large_graphic_pane_ParamLimits

0xcbce,	// (0x0000cbce) list_single_large_graphic_pane

0xcb91,	// (0x0000cb91) list_single_number_heading_pane_ParamLimits

0xcb91,	// (0x0000cb91) list_single_number_heading_pane

0xcb91,	// (0x0000cb91) list_single_number_pane_ParamLimits

0xcb91,	// (0x0000cb91) list_single_number_pane

0xcb91,	// (0x0000cb91) list_single_pane_ParamLimits

0xcb91,	// (0x0000cb91) list_single_pane

0x024e,	// (0x0000024e) list_highlight_pane_cp1

0x21c9,	// (0x000021c9) list_single_pane_g1_ParamLimits

0x21c9,	// (0x000021c9) list_single_pane_g1

0x317f,	// (0x0000317f) list_single_pane_g2_ParamLimits

0x317f,	// (0x0000317f) list_single_pane_g2

0x0001,

0xa61f,	// (0x0000a61f) list_single_pane_g_ParamLimits

0xa61f,	// (0x0000a61f) list_single_pane_g

0x540f,	// (0x0000540f) list_single_pane_t1_ParamLimits

0x540f,	// (0x0000540f) list_single_pane_t1

0x21c9,	// (0x000021c9) list_single_number_pane_g1_ParamLimits

0x21c9,	// (0x000021c9) list_single_number_pane_g1

0x317f,	// (0x0000317f) list_single_number_pane_g2_ParamLimits

0x317f,	// (0x0000317f) list_single_number_pane_g2

0x0001,

0xa61f,	// (0x0000a61f) list_single_number_pane_g_ParamLimits

0xa61f,	// (0x0000a61f) list_single_number_pane_g

0x3260,	// (0x00003260) list_single_number_pane_t1_ParamLimits

0x3260,	// (0x00003260) list_single_number_pane_t1

0xc9f0,	// (0x0000c9f0) list_single_number_pane_t2_ParamLimits

0xc9f0,	// (0x0000c9f0) list_single_number_pane_t2

0x0001,

0xebb1,	// (0x0000ebb1) list_single_number_pane_t_ParamLimits

0xebb1,	// (0x0000ebb1) list_single_number_pane_t

0x3254,	// (0x00003254) list_single_graphic_pane_g1_ParamLimits

0x3254,	// (0x00003254) list_single_graphic_pane_g1

0x21c9,	// (0x000021c9) list_single_graphic_pane_g2_ParamLimits

0x21c9,	// (0x000021c9) list_single_graphic_pane_g2

0x317f,	// (0x0000317f) list_single_graphic_pane_g3_ParamLimits

0x317f,	// (0x0000317f) list_single_graphic_pane_g3

0x0002,

0xa5fe,	// (0x0000a5fe) list_single_graphic_pane_g_ParamLimits

0xa5fe,	// (0x0000a5fe) list_single_graphic_pane_g

0x3260,	// (0x00003260) list_single_graphic_pane_t1_ParamLimits

0x3260,	// (0x00003260) list_single_graphic_pane_t1

0x21c9,	// (0x000021c9) list_single_heading_pane_g1_ParamLimits

0x21c9,	// (0x000021c9) list_single_heading_pane_g1

0x317f,	// (0x0000317f) list_single_heading_pane_g2_ParamLimits

0x317f,	// (0x0000317f) list_single_heading_pane_g2

0x0001,

0xa61f,	// (0x0000a61f) list_single_heading_pane_g_ParamLimits

0xa61f,	// (0x0000a61f) list_single_heading_pane_g

0xb2f5,	// (0x0000b2f5) list_single_heading_pane_t1_ParamLimits

0xb2f5,	// (0x0000b2f5) list_single_heading_pane_t1

0xb30b,	// (0x0000b30b) list_single_heading_pane_t2_ParamLimits

0xb30b,	// (0x0000b30b) list_single_heading_pane_t2

0x0001,

0xea53,	// (0x0000ea53) list_single_heading_pane_t_ParamLimits

0xea53,	// (0x0000ea53) list_single_heading_pane_t

0x21c9,	// (0x000021c9) list_single_number_heading_pane_g1_ParamLimits

0x21c9,	// (0x000021c9) list_single_number_heading_pane_g1

0x317f,	// (0x0000317f) list_single_number_heading_pane_g2_ParamLimits

0x317f,	// (0x0000317f) list_single_number_heading_pane_g2

0x0001,

0xa61f,	// (0x0000a61f) list_single_number_heading_pane_g_ParamLimits

0xa61f,	// (0x0000a61f) list_single_number_heading_pane_g

0xb2f5,	// (0x0000b2f5) list_single_number_heading_pane_t1_ParamLimits

0xb2f5,	// (0x0000b2f5) list_single_number_heading_pane_t1

0xb31d,	// (0x0000b31d) list_single_number_heading_pane_t2_ParamLimits

0xb31d,	// (0x0000b31d) list_single_number_heading_pane_t2

0x2205,	// (0x00002205) list_single_number_heading_pane_t3_ParamLimits

0x2205,	// (0x00002205) list_single_number_heading_pane_t3

0x0002,

0xea58,	// (0x0000ea58) list_single_number_heading_pane_t_ParamLimits

0xea58,	// (0x0000ea58) list_single_number_heading_pane_t

0x3254,	// (0x00003254) list_single_graphic_heading_pane_g1_ParamLimits

0x3254,	// (0x00003254) list_single_graphic_heading_pane_g1

0xb32f,	// (0x0000b32f) list_single_graphic_heading_pane_g4_ParamLimits

0xb32f,	// (0x0000b32f) list_single_graphic_heading_pane_g4

0x317f,	// (0x0000317f) list_single_graphic_heading_pane_g5_ParamLimits

0x317f,	// (0x0000317f) list_single_graphic_heading_pane_g5

0x0002,

0xea5f,	// (0x0000ea5f) list_single_graphic_heading_pane_g_ParamLimits

0xea5f,	// (0x0000ea5f) list_single_graphic_heading_pane_g

0xb2f5,	// (0x0000b2f5) list_single_graphic_heading_pane_t1_ParamLimits

0xb2f5,	// (0x0000b2f5) list_single_graphic_heading_pane_t1

0xb340,	// (0x0000b340) list_single_graphic_heading_pane_t2_ParamLimits

0xb340,	// (0x0000b340) list_single_graphic_heading_pane_t2

0x0001,

0xea66,	// (0x0000ea66) list_single_graphic_heading_pane_t_ParamLimits

0xea66,	// (0x0000ea66) list_single_graphic_heading_pane_t

0x0d4a,	// (0x00000d4a) list_single_large_graphic_pane_g1_ParamLimits

0x0d4a,	// (0x00000d4a) list_single_large_graphic_pane_g1

0x0d56,	// (0x00000d56) list_single_large_graphic_pane_g2_ParamLimits

0x0d56,	// (0x00000d56) list_single_large_graphic_pane_g2

0x0d62,	// (0x00000d62) list_single_large_graphic_pane_g3_ParamLimits

0x0d62,	// (0x00000d62) list_single_large_graphic_pane_g3

0x0002,

0xa42a,	// (0x0000a42a) list_single_large_graphic_pane_g_ParamLimits

0xa42a,	// (0x0000a42a) list_single_large_graphic_pane_g

0x3a3f,	// (0x00003a3f) wait_border_pane_g2_copy1

0x0d6e,	// (0x00000d6e) list_single_large_graphic_pane_g4_cp2

0x0d76,	// (0x00000d76) list_single_large_graphic_pane_t1_ParamLimits

0x0d76,	// (0x00000d76) list_single_large_graphic_pane_t1

0x223f,	// (0x0000223f) list_double_pane_g1_ParamLimits

0x223f,	// (0x0000223f) list_double_pane_g1

0xb352,	// (0x0000b352) list_double_pane_g2_ParamLimits

0xb352,	// (0x0000b352) list_double_pane_g2

0x0001,

0xea6b,	// (0x0000ea6b) list_double_pane_g_ParamLimits

0xea6b,	// (0x0000ea6b) list_double_pane_g

0xb35e,	// (0x0000b35e) list_double_pane_t1_ParamLimits

0xb35e,	// (0x0000b35e) list_double_pane_t1

0xb374,	// (0x0000b374) list_double_pane_t2_ParamLimits

0xb374,	// (0x0000b374) list_double_pane_t2

0x0001,

0xea70,	// (0x0000ea70) list_double_pane_t_ParamLimits

0xea70,	// (0x0000ea70) list_double_pane_t

0xb386,	// (0x0000b386) list_double2_pane_g1_ParamLimits

0xb386,	// (0x0000b386) list_double2_pane_g1

0x0d98,	// (0x00000d98) list_double2_pane_g2_ParamLimits

0x0d98,	// (0x00000d98) list_double2_pane_g2

0x0001,

0xea75,	// (0x0000ea75) list_double2_pane_g_ParamLimits

0xea75,	// (0x0000ea75) list_double2_pane_g

0x0da4,	// (0x00000da4) list_double2_pane_t1_ParamLimits

0x0da4,	// (0x00000da4) list_double2_pane_t1

0xb397,	// (0x0000b397) list_double2_pane_t2_ParamLimits

0xb397,	// (0x0000b397) list_double2_pane_t2

0x0001,

0xea7a,	// (0x0000ea7a) list_double2_pane_t_ParamLimits

0xea7a,	// (0x0000ea7a) list_double2_pane_t

0x223f,	// (0x0000223f) list_double_number_pane_g1_ParamLimits

0x223f,	// (0x0000223f) list_double_number_pane_g1

0xb352,	// (0x0000b352) list_double_number_pane_g2_ParamLimits

0xb352,	// (0x0000b352) list_double_number_pane_g2

0x0001,

0xea6b,	// (0x0000ea6b) list_double_number_pane_g_ParamLimits

0xea6b,	// (0x0000ea6b) list_double_number_pane_g

0xb3a9,	// (0x0000b3a9) list_double_number_pane_t1_ParamLimits

0xb3a9,	// (0x0000b3a9) list_double_number_pane_t1

0xb3bb,	// (0x0000b3bb) list_double_number_pane_t2_ParamLimits

0xb3bb,	// (0x0000b3bb) list_double_number_pane_t2

0xb3d1,	// (0x0000b3d1) list_double_number_pane_t3_ParamLimits

0xb3d1,	// (0x0000b3d1) list_double_number_pane_t3

0x0002,

0xea7f,	// (0x0000ea7f) list_double_number_pane_t_ParamLimits

0xea7f,	// (0x0000ea7f) list_double_number_pane_t

0xb3e3,	// (0x0000b3e3) list_double_graphic_pane_g1_ParamLimits

0xb3e3,	// (0x0000b3e3) list_double_graphic_pane_g1

0x435e,	// (0x0000435e) list_double_graphic_pane_g2_ParamLimits

0x435e,	// (0x0000435e) list_double_graphic_pane_g2

0xb3ef,	// (0x0000b3ef) list_double_graphic_pane_g3_ParamLimits

0xb3ef,	// (0x0000b3ef) list_double_graphic_pane_g3

0x0003,

0xea86,	// (0x0000ea86) list_double_graphic_pane_g_ParamLimits

0xea86,	// (0x0000ea86) list_double_graphic_pane_g

0xb407,	// (0x0000b407) list_double_graphic_pane_t1_ParamLimits

0xb407,	// (0x0000b407) list_double_graphic_pane_t1

0xb41d,	// (0x0000b41d) list_double_graphic_pane_t2_ParamLimits

0xb41d,	// (0x0000b41d) list_double_graphic_pane_t2

0x0001,

0xea8f,	// (0x0000ea8f) list_double_graphic_pane_t_ParamLimits

0xea8f,	// (0x0000ea8f) list_double_graphic_pane_t

0x0e49,	// (0x00000e49) list_double2_graphic_pane_g1_ParamLimits

0x0e49,	// (0x00000e49) list_double2_graphic_pane_g1

0x0d8c,	// (0x00000d8c) list_double2_graphic_pane_g2_ParamLimits

0x0d8c,	// (0x00000d8c) list_double2_graphic_pane_g2

0x0d98,	// (0x00000d98) list_double2_graphic_pane_g3_ParamLimits

0x0d98,	// (0x00000d98) list_double2_graphic_pane_g3

0x0002,

0xea94,	// (0x0000ea94) list_double2_graphic_pane_g_ParamLimits

0xea94,	// (0x0000ea94) list_double2_graphic_pane_g

0x0e21,	// (0x00000e21) list_double2_graphic_pane_t1_ParamLimits

0x0e21,	// (0x00000e21) list_double2_graphic_pane_t1

0xb42f,	// (0x0000b42f) list_double2_graphic_pane_t2_ParamLimits

0xb42f,	// (0x0000b42f) list_double2_graphic_pane_t2

0x0001,

0xea9b,	// (0x0000ea9b) list_double2_graphic_pane_t_ParamLimits

0xea9b,	// (0x0000ea9b) list_double2_graphic_pane_t

0xb441,	// (0x0000b441) list_double_large_graphic_pane_g1_ParamLimits

0xb441,	// (0x0000b441) list_double_large_graphic_pane_g1

0xb46a,	// (0x0000b46a) list_double_large_graphic_pane_g2_ParamLimits

0xb46a,	// (0x0000b46a) list_double_large_graphic_pane_g2

0xb352,	// (0x0000b352) list_double_large_graphic_pane_g3_ParamLimits

0xb352,	// (0x0000b352) list_double_large_graphic_pane_g3

0xb47b,	// (0x0000b47b) list_double_large_graphic_pane_g4_ParamLimits

0xb47b,	// (0x0000b47b) list_double_large_graphic_pane_g4

0x0004,

0xeaa0,	// (0x0000eaa0) list_double_large_graphic_pane_g_ParamLimits

0xeaa0,	// (0x0000eaa0) list_double_large_graphic_pane_g

0xb48c,	// (0x0000b48c) list_double_large_graphic_pane_t1_ParamLimits

0xb48c,	// (0x0000b48c) list_double_large_graphic_pane_t1

0xb4a5,	// (0x0000b4a5) list_double_large_graphic_pane_t2_ParamLimits

0xb4a5,	// (0x0000b4a5) list_double_large_graphic_pane_t2

0x0001,

0xeaab,	// (0x0000eaab) list_double_large_graphic_pane_t_ParamLimits

0xeaab,	// (0x0000eaab) list_double_large_graphic_pane_t

0xb4b7,	// (0x0000b4b7) list_double2_large_graphic_pane_g1_ParamLimits

0xb4b7,	// (0x0000b4b7) list_double2_large_graphic_pane_g1

0xb386,	// (0x0000b386) list_double2_large_graphic_pane_g2_ParamLimits

0xb386,	// (0x0000b386) list_double2_large_graphic_pane_g2

0x0d98,	// (0x00000d98) list_double2_large_graphic_pane_g3_ParamLimits

0x0d98,	// (0x00000d98) list_double2_large_graphic_pane_g3

0x0002,

0xeab0,	// (0x0000eab0) list_double2_large_graphic_pane_g_ParamLimits

0xeab0,	// (0x0000eab0) list_double2_large_graphic_pane_g

0x0fcd,	// (0x00000fcd) list_double2_large_graphic_pane_t1_ParamLimits

0x0fcd,	// (0x00000fcd) list_double2_large_graphic_pane_t1

0xb4c3,	// (0x0000b4c3) list_double2_large_graphic_pane_t2_ParamLimits

0xb4c3,	// (0x0000b4c3) list_double2_large_graphic_pane_t2

0x0001,

0xeab7,	// (0x0000eab7) list_double2_large_graphic_pane_t_ParamLimits

0xeab7,	// (0x0000eab7) list_double2_large_graphic_pane_t

0xb4d5,	// (0x0000b4d5) list_double_heading_pane_g1_ParamLimits

0xb4d5,	// (0x0000b4d5) list_double_heading_pane_g1

0xb4e6,	// (0x0000b4e6) list_double_heading_pane_g2_ParamLimits

0xb4e6,	// (0x0000b4e6) list_double_heading_pane_g2

0x0001,

0xeabc,	// (0x0000eabc) list_double_heading_pane_g_ParamLimits

0xeabc,	// (0x0000eabc) list_double_heading_pane_g

0xb4f2,	// (0x0000b4f2) list_double_heading_pane_t1_ParamLimits

0xb4f2,	// (0x0000b4f2) list_double_heading_pane_t1

0xb397,	// (0x0000b397) list_double_heading_pane_t2_ParamLimits

0xb397,	// (0x0000b397) list_double_heading_pane_t2

0x0001,

0xeac1,	// (0x0000eac1) list_double_heading_pane_t_ParamLimits

0xeac1,	// (0x0000eac1) list_double_heading_pane_t

0x0ea4,	// (0x00000ea4) list_double_graphic_heading_pane_g1_ParamLimits

0x0ea4,	// (0x00000ea4) list_double_graphic_heading_pane_g1

0xb4d5,	// (0x0000b4d5) list_double_graphic_heading_pane_g2_ParamLimits

0xb4d5,	// (0x0000b4d5) list_double_graphic_heading_pane_g2

0xb4e6,	// (0x0000b4e6) list_double_graphic_heading_pane_g3_ParamLimits

0xb4e6,	// (0x0000b4e6) list_double_graphic_heading_pane_g3

0x0002,

0xeac6,	// (0x0000eac6) list_double_graphic_heading_pane_g_ParamLimits

0xeac6,	// (0x0000eac6) list_double_graphic_heading_pane_g

0xb508,	// (0x0000b508) list_double_graphic_heading_pane_t1_ParamLimits

0xb508,	// (0x0000b508) list_double_graphic_heading_pane_t1

0xb42f,	// (0x0000b42f) list_double_graphic_heading_pane_t2_ParamLimits

0xb42f,	// (0x0000b42f) list_double_graphic_heading_pane_t2

0x0001,

0xeacd,	// (0x0000eacd) list_double_graphic_heading_pane_t_ParamLimits

0xeacd,	// (0x0000eacd) list_double_graphic_heading_pane_t

0xb46a,	// (0x0000b46a) list_double_time_pane_g1_ParamLimits

0xb46a,	// (0x0000b46a) list_double_time_pane_g1

0xb352,	// (0x0000b352) list_double_time_pane_g2_ParamLimits

0xb352,	// (0x0000b352) list_double_time_pane_g2

0x0001,

0xead2,	// (0x0000ead2) list_double_time_pane_g_ParamLimits

0xead2,	// (0x0000ead2) list_double_time_pane_g

0xb51e,	// (0x0000b51e) list_double_time_pane_t1_ParamLimits

0xb51e,	// (0x0000b51e) list_double_time_pane_t1

0xb534,	// (0x0000b534) list_double_time_pane_t2_ParamLimits

0xb534,	// (0x0000b534) list_double_time_pane_t2

0xb546,	// (0x0000b546) list_double_time_pane_t3_ParamLimits

0xb546,	// (0x0000b546) list_double_time_pane_t3

0xb558,	// (0x0000b558) list_double_time_pane_t4_ParamLimits

0xb558,	// (0x0000b558) list_double_time_pane_t4

0x0003,

0xead7,	// (0x0000ead7) list_double_time_pane_t_ParamLimits

0xead7,	// (0x0000ead7) list_double_time_pane_t

0x0d8c,	// (0x00000d8c) list_setting_pane_g1_ParamLimits

0x0d8c,	// (0x00000d8c) list_setting_pane_g1

0x0d98,	// (0x00000d98) list_setting_pane_g2_ParamLimits

0x0d98,	// (0x00000d98) list_setting_pane_g2

0x0001,

0xa431,	// (0x0000a431) list_setting_pane_g_ParamLimits

0xa431,	// (0x0000a431) list_setting_pane_g

0xb56a,	// (0x0000b56a) list_setting_pane_t1_ParamLimits

0xb56a,	// (0x0000b56a) list_setting_pane_t1

0xb581,	// (0x0000b581) list_setting_pane_t2_ParamLimits

0xb581,	// (0x0000b581) list_setting_pane_t2

0x0002,

0xeae0,	// (0x0000eae0) list_setting_pane_t_ParamLimits

0xeae0,	// (0x0000eae0) list_setting_pane_t

0xb5be,	// (0x0000b5be) set_value_pane_cp_ParamLimits

0xb5be,	// (0x0000b5be) set_value_pane_cp

0x0d8c,	// (0x00000d8c) list_setting_number_pane_g1_ParamLimits

0x0d8c,	// (0x00000d8c) list_setting_number_pane_g1

0x0d98,	// (0x00000d98) list_setting_number_pane_g2_ParamLimits

0x0d98,	// (0x00000d98) list_setting_number_pane_g2

0x0001,

0xa431,	// (0x0000a431) list_setting_number_pane_g_ParamLimits

0xa431,	// (0x0000a431) list_setting_number_pane_g

0xb5ca,	// (0x0000b5ca) list_setting_number_pane_t1_ParamLimits

0xb5ca,	// (0x0000b5ca) list_setting_number_pane_t1

0xb5de,	// (0x0000b5de) list_setting_number_pane_t2_ParamLimits

0xb5de,	// (0x0000b5de) list_setting_number_pane_t2

0xb5f5,	// (0x0000b5f5) list_setting_number_pane_t3_ParamLimits

0xb5f5,	// (0x0000b5f5) list_setting_number_pane_t3

0x0003,

0xeae7,	// (0x0000eae7) list_setting_number_pane_t_ParamLimits

0xeae7,	// (0x0000eae7) list_setting_number_pane_t

0xb5be,	// (0x0000b5be) set_value_pane_ParamLimits

0xb5be,	// (0x0000b5be) set_value_pane

0x10e3,	// (0x000010e3) bg_set_opt_pane_ParamLimits

0x10e3,	// (0x000010e3) bg_set_opt_pane

0x1104,	// (0x00001104) set_value_pane_t1

0x1112,	// (0x00001112) slider_set_pane_cp3

0x111b,	// (0x0000111b) volume_small_pane_cp

0x1124,	// (0x00001124) list_form_gen_pane

0x0c92,	// (0x00000c92) scroll_pane_cp8

0x57d8,	// (0x000057d8) form_field_data_pane_ParamLimits

0x57d8,	// (0x000057d8) form_field_data_pane

0xb638,	// (0x0000b638) form_field_data_wide_pane_ParamLimits

0xb638,	// (0x0000b638) form_field_data_wide_pane

0xb658,	// (0x0000b658) form_field_popup_pane_ParamLimits

0xb658,	// (0x0000b658) form_field_popup_pane

0xb670,	// (0x0000b670) form_field_popup_wide_pane_ParamLimits

0xb670,	// (0x0000b670) form_field_popup_wide_pane

0x11ab,	// (0x000011ab) form_field_slider_pane_ParamLimits

0x11ab,	// (0x000011ab) form_field_slider_pane

0x11be,	// (0x000011be) form_field_slider_wide_pane_ParamLimits

0x11be,	// (0x000011be) form_field_slider_wide_pane

0x11d1,	// (0x000011d1) data_form_pane

0xb691,	// (0x0000b691) form_field_data_pane_t1

0x11fd,	// (0x000011fd) input_focus_pane

0x120b,	// (0x0000120b) data_form_wide_pane

0x1237,	// (0x00001237) form_field_data_wide_pane_t1

0x0b09,	// (0x00000b09) input_focus_pane_cp6

0xb6a9,	// (0x0000b6a9) form_field_popup_pane_t1

0x11fd,	// (0x000011fd) input_focus_pane_cp7

0x11d1,	// (0x000011d1) list_form_pane

0x1276,	// (0x00001276) form_field_popup_wide_pane_t1

0x11fd,	// (0x000011fd) input_focus_pane_cp8

0x128b,	// (0x0000128b) list_form_wide_pane

0xb6c9,	// (0x0000b6c9) form_field_slider_pane_t1_ParamLimits

0xb6c9,	// (0x0000b6c9) form_field_slider_pane_t1

0xb6df,	// (0x0000b6df) form_field_slider_pane_t2_ParamLimits

0xb6df,	// (0x0000b6df) form_field_slider_pane_t2

0x0001,

0xeaf0,	// (0x0000eaf0) form_field_slider_pane_t_ParamLimits

0xeaf0,	// (0x0000eaf0) form_field_slider_pane_t

0x0798,	// (0x00000798) input_focus_pane_cp9_ParamLimits

0x0798,	// (0x00000798) input_focus_pane_cp9

0xb6f4,	// (0x0000b6f4) slider_cont_pane_ParamLimits

0xb6f4,	// (0x0000b6f4) slider_cont_pane

0x12de,	// (0x000012de) form_field_slider_wide_pane_t1_ParamLimits

0x12de,	// (0x000012de) form_field_slider_wide_pane_t1

0x12f0,	// (0x000012f0) form_field_slider_wide_pane_t2_ParamLimits

0x12f0,	// (0x000012f0) form_field_slider_wide_pane_t2

0x0001,

0xa4c7,	// (0x0000a4c7) form_field_slider_wide_pane_t_ParamLimits

0xa4c7,	// (0x0000a4c7) form_field_slider_wide_pane_t

0x0798,	// (0x00000798) input_focus_pane_cp10_ParamLimits

0x0798,	// (0x00000798) input_focus_pane_cp10

0xb708,	// (0x0000b708) slider_cont_pane_cp1_ParamLimits

0xb708,	// (0x0000b708) slider_cont_pane_cp1

0xb71e,	// (0x0000b71e) slider_form_pane_cp

0x1320,	// (0x00001320) input_focus_pane_g1

0x1328,	// (0x00001328) input_focus_pane_g2

0x1330,	// (0x00001330) input_focus_pane_g3

0x1338,	// (0x00001338) input_focus_pane_g4

0x1340,	// (0x00001340) input_focus_pane_g5

0x1348,	// (0x00001348) input_focus_pane_g6

0x1350,	// (0x00001350) input_focus_pane_g7

0x1358,	// (0x00001358) input_focus_pane_g8

0x1360,	// (0x00001360) input_focus_pane_g9

0x002a,	// (0x0000002a) input_focus_pane_g10

0x0009,

0xa4cc,	// (0x0000a4cc) input_focus_pane_g

0x3a48,	// (0x00003a48) wait_border_pane_g3_copy1

0xb726,	// (0x0000b726) data_form_pane_t1

0x002a,	// (0x0000002a) wait_anim_pane_g1_copy1

0xcb67,	// (0x0000cb67) data_form_wide_pane_t1

0xb73f,	// (0x0000b73f) list_form_graphic_pane_cp_ParamLimits

0xb73f,	// (0x0000b73f) list_form_graphic_pane_cp

0x4ac1,	// (0x00004ac1) slider_form_pane_g1

0x4aca,	// (0x00004aca) slider_form_pane_g2

0x0006,

0xebe1,	// (0x0000ebe1) slider_form_pane_g

0x1382,	// (0x00001382) list_form_graphic_pane_ParamLimits

0x1382,	// (0x00001382) list_form_graphic_pane

0x13ad,	// (0x000013ad) list_form_graphic_pane_g1

0x13b5,	// (0x000013b5) list_form_graphic_pane_t1_ParamLimits

0x13b5,	// (0x000013b5) list_form_graphic_pane_t1

0x0474,	// (0x00000474) list_highlight_pane_cp5_ParamLimits

0x0474,	// (0x00000474) list_highlight_pane_cp5

0xb753,	// (0x0000b753) find_pane_g1

0x13d3,	// (0x000013d3) input_find_pane

0xb75e,	// (0x0000b75e) input_find_pane_g1_ParamLimits

0xb75e,	// (0x0000b75e) input_find_pane_g1

0xb76a,	// (0x0000b76a) input_find_pane_t1_ParamLimits

0xb76a,	// (0x0000b76a) input_find_pane_t1

0xb77f,	// (0x0000b77f) input_find_pane_t2_ParamLimits

0xb77f,	// (0x0000b77f) input_find_pane_t2

0x0001,

0xeaf5,	// (0x0000eaf5) input_find_pane_t_ParamLimits

0xeaf5,	// (0x0000eaf5) input_find_pane_t

0x1412,	// (0x00001412) input_focus_pane_cp5_ParamLimits

0x1412,	// (0x00001412) input_focus_pane_cp5

0x0798,	// (0x00000798) bg_popup_window_pane_cp2_ParamLimits

0x0798,	// (0x00000798) bg_popup_window_pane_cp2

0x1431,	// (0x00001431) listscroll_menu_pane_ParamLimits

0x1431,	// (0x00001431) listscroll_menu_pane

0x143d,	// (0x0000143d) popup_submenu_window_ParamLimits

0x143d,	// (0x0000143d) popup_submenu_window

0x1461,	// (0x00001461) find_popup_pane_g1

0x1469,	// (0x00001469) input_popup_find_pane_cp

0x1473,	// (0x00001473) input_focus_pane_cp4_ParamLimits

0x1473,	// (0x00001473) input_focus_pane_cp4

0x148d,	// (0x0000148d) input_popup_find_pane_t1_ParamLimits

0x148d,	// (0x0000148d) input_popup_find_pane_t1

0x024e,	// (0x0000024e) bg_popup_sub_pane_cp

0x14bb,	// (0x000014bb) listscroll_popup_sub_pane

0x14c3,	// (0x000014c3) list_submenu_pane_ParamLimits

0x14c3,	// (0x000014c3) list_submenu_pane

0x14d4,	// (0x000014d4) scroll_pane_cp4

0x14dc,	// (0x000014dc) list_single_popup_submenu_pane_ParamLimits

0x14dc,	// (0x000014dc) list_single_popup_submenu_pane

0x14ee,	// (0x000014ee) list_single_popup_submenu_pane_g1

0x14f6,	// (0x000014f6) list_single_popup_submenu_pane_t1_ParamLimits

0x14f6,	// (0x000014f6) list_single_popup_submenu_pane_t1

0x0798,	// (0x00000798) bg_active_tab_pane_cp1_ParamLimits

0x0798,	// (0x00000798) bg_active_tab_pane_cp1

0x4dfc,	// (0x00004dfc) tabs_2_active_pane_g1

0xb7a0,	// (0x0000b7a0) tabs_2_active_pane_t1

0x0798,	// (0x00000798) bg_passive_tab_pane_cp1_ParamLimits

0x0798,	// (0x00000798) bg_passive_tab_pane_cp1

0x4dfc,	// (0x00004dfc) tabs_2_passive_pane_g1

0xb7a0,	// (0x0000b7a0) tabs_2_passive_pane_t1

0x0474,	// (0x00000474) bg_active_tab_pane_cp4

0xb7b6,	// (0x0000b7b6) tabs_2_long_active_pane_t1

0x28cb,	// (0x000028cb) bg_passive_tab_pane_cp4

0x333b,	// (0x0000333b) list_single_midp_graphic_pane_g4_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp5

0xb7cd,	// (0x0000b7cd) tabs_3_long_active_pane_t1

0x28cb,	// (0x000028cb) bg_passive_tab_pane_cp5

0x333b,	// (0x0000333b) list_single_midp_graphic_pane_g4

0x0474,	// (0x00000474) bg_popup_window_pane_cp13_ParamLimits

0x0474,	// (0x00000474) bg_popup_window_pane_cp13

0x156d,	// (0x0000156d) listscroll_popup_fast_pane_ParamLimits

0x156d,	// (0x0000156d) listscroll_popup_fast_pane

0x157c,	// (0x0000157c) grid_popup_fast_pane_ParamLimits

0x157c,	// (0x0000157c) grid_popup_fast_pane

0x158e,	// (0x0000158e) scroll_pane_cp9_ParamLimits

0x158e,	// (0x0000158e) scroll_pane_cp9

0x6b8d,	// (0x00006b8d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x6b8d,	// (0x00006b8d) list_single_graphic_hl_pane_t1_cp2

0x15b2,	// (0x000015b2) input_focus_pane_cp20_ParamLimits

0x15b2,	// (0x000015b2) input_focus_pane_cp20

0x15c0,	// (0x000015c0) query_popup_data_pane_t1_ParamLimits

0x15c0,	// (0x000015c0) query_popup_data_pane_t1

0x15d3,	// (0x000015d3) query_popup_data_pane_t2_ParamLimits

0x15d3,	// (0x000015d3) query_popup_data_pane_t2

0x1619,	// (0x00001619) query_popup_data_pane_t3_ParamLimits

0x1619,	// (0x00001619) query_popup_data_pane_t3

0x165a,	// (0x0000165a) query_popup_data_pane_t4_ParamLimits

0x165a,	// (0x0000165a) query_popup_data_pane_t4

0x1696,	// (0x00001696) query_popup_data_pane_t5_ParamLimits

0x1696,	// (0x00001696) query_popup_data_pane_t5

0x0004,

0xa4e6,	// (0x0000a4e6) query_popup_data_pane_t_ParamLimits

0xa4e6,	// (0x0000a4e6) query_popup_data_pane_t

0x1320,	// (0x00001320) bg_set_opt_pane_g1

0x1328,	// (0x00001328) bg_set_opt_pane_g2

0x1330,	// (0x00001330) bg_set_opt_pane_g3

0x1338,	// (0x00001338) bg_set_opt_pane_g4

0x1340,	// (0x00001340) bg_set_opt_pane_g5

0x1348,	// (0x00001348) bg_set_opt_pane_g6

0x1350,	// (0x00001350) bg_set_opt_pane_g7

0x1358,	// (0x00001358) bg_set_opt_pane_g8

0x1360,	// (0x00001360) bg_set_opt_pane_g9

0x0008,

0xa4f1,	// (0x0000a4f1) bg_set_opt_pane_g

0x1f23,	// (0x00001f23) control_top_pane_stacon_ParamLimits

0x1f23,	// (0x00001f23) control_top_pane_stacon

0x1f76,	// (0x00001f76) signal_pane_stacon_ParamLimits

0x1f76,	// (0x00001f76) signal_pane_stacon

0x1f9b,	// (0x00001f9b) stacon_top_pane_g1_ParamLimits

0x1f9b,	// (0x00001f9b) stacon_top_pane_g1

0x1fbd,	// (0x00001fbd) title_pane_stacon_ParamLimits

0x1fbd,	// (0x00001fbd) title_pane_stacon

0x1fdf,	// (0x00001fdf) uni_indicator_pane_stacon_ParamLimits

0x1fdf,	// (0x00001fdf) uni_indicator_pane_stacon

0x1ff4,	// (0x00001ff4) battery_pane_stacon_ParamLimits

0x1ff4,	// (0x00001ff4) battery_pane_stacon

0x2034,	// (0x00002034) control_bottom_pane_stacon_ParamLimits

0x2034,	// (0x00002034) control_bottom_pane_stacon

0x2053,	// (0x00002053) navi_pane_stacon_ParamLimits

0x2053,	// (0x00002053) navi_pane_stacon

0x2072,	// (0x00002072) stacon_bottom_pane_g1_ParamLimits

0x2072,	// (0x00002072) stacon_bottom_pane_g1

0x16cd,	// (0x000016cd) aid_levels_signal_lsc_ParamLimits

0x16cd,	// (0x000016cd) aid_levels_signal_lsc

0x16da,	// (0x000016da) signal_pane_stacon_g1_ParamLimits

0x16da,	// (0x000016da) signal_pane_stacon_g1

0x16e6,	// (0x000016e6) signal_pane_stacon_g2_ParamLimits

0x16e6,	// (0x000016e6) signal_pane_stacon_g2

0x0001,

0xa504,	// (0x0000a504) signal_pane_stacon_g_ParamLimits

0xa504,	// (0x0000a504) signal_pane_stacon_g

0x1727,	// (0x00001727) title_pane_stacon_t1_ParamLimits

0x1727,	// (0x00001727) title_pane_stacon_t1

0x174c,	// (0x0000174c) uni_indicator_pane_stacon_g1

0x1756,	// (0x00001756) uni_indicator_pane_stacon_g2

0x1760,	// (0x00001760) uni_indicator_pane_stacon_g3

0x176a,	// (0x0000176a) uni_indicator_pane_stacon_g4

0x0003,

0xa510,	// (0x0000a510) uni_indicator_pane_stacon_g

0x1774,	// (0x00001774) control_top_pane_stacon_g1

0x177c,	// (0x0000177c) control_top_pane_stacon_t1_ParamLimits

0x177c,	// (0x0000177c) control_top_pane_stacon_t1

0x17ad,	// (0x000017ad) aid_levels_battery_lsc_ParamLimits

0x17ad,	// (0x000017ad) aid_levels_battery_lsc

0x17bb,	// (0x000017bb) battery_pane_stacon_g1_ParamLimits

0x17bb,	// (0x000017bb) battery_pane_stacon_g1

0x17c7,	// (0x000017c7) battery_pane_stacon_g2_ParamLimits

0x17c7,	// (0x000017c7) battery_pane_stacon_g2

0x0001,

0xa519,	// (0x0000a519) battery_pane_stacon_g_ParamLimits

0xa519,	// (0x0000a519) battery_pane_stacon_g

0x17f6,	// (0x000017f6) navi_icon_pane_stacon

0x1806,	// (0x00001806) navi_navi_pane_stacon

0x17f6,	// (0x000017f6) navi_text_pane_stacon

0x1774,	// (0x00001774) control_bottom_pane_stacon_g1

0x1816,	// (0x00001816) control_bottom_pane_stacon_t1_ParamLimits

0x1816,	// (0x00001816) control_bottom_pane_stacon_t1

0xb7e3,	// (0x0000b7e3) grid_app_pane_ParamLimits

0xb7e3,	// (0x0000b7e3) grid_app_pane

0xb811,	// (0x0000b811) scroll_pane_cp15_ParamLimits

0xb811,	// (0x0000b811) scroll_pane_cp15

0xb824,	// (0x0000b824) cell_app_pane_ParamLimits

0xb824,	// (0x0000b824) cell_app_pane

0xb861,	// (0x0000b861) cell_app_pane_g1_ParamLimits

0xb861,	// (0x0000b861) cell_app_pane_g1

0x18d6,	// (0x000018d6) cell_app_pane_g2_ParamLimits

0x18d6,	// (0x000018d6) cell_app_pane_g2

0x0001,

0xeafa,	// (0x0000eafa) cell_app_pane_g_ParamLimits

0xeafa,	// (0x0000eafa) cell_app_pane_g

0xb885,	// (0x0000b885) cell_app_pane_t1_ParamLimits

0xb885,	// (0x0000b885) cell_app_pane_t1

0x18f9,	// (0x000018f9) grid_highlight_pane_ParamLimits

0x18f9,	// (0x000018f9) grid_highlight_pane

0x1320,	// (0x00001320) cell_highlight_pane_g1

0x1328,	// (0x00001328) cell_highlight_pane_g2

0x1330,	// (0x00001330) cell_highlight_pane_g3

0x1338,	// (0x00001338) cell_highlight_pane_g4

0x1340,	// (0x00001340) cell_highlight_pane_g5

0x1348,	// (0x00001348) cell_highlight_pane_g6

0x1350,	// (0x00001350) cell_highlight_pane_g7

0x1358,	// (0x00001358) cell_highlight_pane_g8

0x1360,	// (0x00001360) cell_highlight_pane_g9

0x002a,	// (0x0000002a) cell_highlight_pane_g10

0x0009,

0xa4cc,	// (0x0000a4cc) cell_highlight_pane_g

0x191d,	// (0x0000191d) bg_scroll_pane

0x193c,	// (0x0000193c) scroll_handle_pane

0x198d,	// (0x0000198d) scroll_bg_pane_g1

0x19a2,	// (0x000019a2) scroll_bg_pane_g2

0x19ba,	// (0x000019ba) scroll_bg_pane_g3

0x0002,

0xa523,	// (0x0000a523) scroll_bg_pane_g

0x19cf,	// (0x000019cf) scroll_handle_focus_pane_ParamLimits

0x19cf,	// (0x000019cf) scroll_handle_focus_pane

0x198d,	// (0x0000198d) scroll_handle_pane_g1

0x19dc,	// (0x000019dc) scroll_handle_pane_g2

0x19ba,	// (0x000019ba) scroll_handle_pane_g3

0x0002,

0xa52a,	// (0x0000a52a) scroll_handle_pane_g

0x1473,	// (0x00001473) bg_popup_sub_pane_cp21_ParamLimits

0x1473,	// (0x00001473) bg_popup_sub_pane_cp21

0x19f0,	// (0x000019f0) popup_fep_japan_predictive_window_t1_ParamLimits

0x19f0,	// (0x000019f0) popup_fep_japan_predictive_window_t1

0x1a07,	// (0x00001a07) popup_fep_japan_predictive_window_t2_ParamLimits

0x1a07,	// (0x00001a07) popup_fep_japan_predictive_window_t2

0x1a3a,	// (0x00001a3a) popup_fep_japan_predictive_window_t3_ParamLimits

0x1a3a,	// (0x00001a3a) popup_fep_japan_predictive_window_t3

0x0002,

0xa531,	// (0x0000a531) popup_fep_japan_predictive_window_t_ParamLimits

0xa531,	// (0x0000a531) popup_fep_japan_predictive_window_t

0x024e,	// (0x0000024e) bg_popup_sub_pane_cp23

0x1a71,	// (0x00001a71) listscroll_japin_cand_pane

0x1a79,	// (0x00001a79) popup_fep_japan_candidate_window_t1

0x1a87,	// (0x00001a87) candidate_pane_ParamLimits

0x1a87,	// (0x00001a87) candidate_pane

0x1a9a,	// (0x00001a9a) scroll_pane_cp30

0x1aa2,	// (0x00001aa2) list_single_popup_jap_candidate_pane_ParamLimits

0x1aa2,	// (0x00001aa2) list_single_popup_jap_candidate_pane

0x024e,	// (0x0000024e) list_highlight_pane_cp30

0x1ab7,	// (0x00001ab7) list_single_popup_jap_candidate_pane_t1

0xb8a5,	// (0x0000b8a5) level_1_signal

0xb8b7,	// (0x0000b8b7) level_2_signal

0xb8ca,	// (0x0000b8ca) level_3_signal

0xb8dd,	// (0x0000b8dd) level_4_signal

0xb8f0,	// (0x0000b8f0) level_5_signal

0xb903,	// (0x0000b903) level_6_signal

0xb916,	// (0x0000b916) level_7_signal

0xb8a5,	// (0x0000b8a5) level_1_battery

0xb8b7,	// (0x0000b8b7) level_2_battery

0xb8ca,	// (0x0000b8ca) level_3_battery

0xb8dd,	// (0x0000b8dd) level_4_battery

0xb8f0,	// (0x0000b8f0) level_5_battery

0xb903,	// (0x0000b903) level_6_battery

0xb916,	// (0x0000b916) level_7_battery

0x1b58,	// (0x00001b58) list_menu_pane_ParamLimits

0x1b58,	// (0x00001b58) list_menu_pane

0x1b6e,	// (0x00001b6e) scroll_pane_cp25_ParamLimits

0x1b6e,	// (0x00001b6e) scroll_pane_cp25

0xb929,	// (0x0000b929) list_double2_graphic_pane_cp2_ParamLimits

0xb929,	// (0x0000b929) list_double2_graphic_pane_cp2

0xb929,	// (0x0000b929) list_double2_large_graphic_pane_cp2_ParamLimits

0xb929,	// (0x0000b929) list_double2_large_graphic_pane_cp2

0xb929,	// (0x0000b929) list_double2_pane_cp2_ParamLimits

0xb929,	// (0x0000b929) list_double2_pane_cp2

0xb929,	// (0x0000b929) list_double_graphic_pane_cp2_ParamLimits

0xb929,	// (0x0000b929) list_double_graphic_pane_cp2

0xb929,	// (0x0000b929) list_double_large_graphic_pane_cp2_ParamLimits

0xb929,	// (0x0000b929) list_double_large_graphic_pane_cp2

0xb929,	// (0x0000b929) list_double_number_pane_cp2_ParamLimits

0xb929,	// (0x0000b929) list_double_number_pane_cp2

0xb929,	// (0x0000b929) list_double_pane_cp2_ParamLimits

0xb929,	// (0x0000b929) list_double_pane_cp2

0xb944,	// (0x0000b944) list_single_2graphic_pane_cp2_ParamLimits

0xb944,	// (0x0000b944) list_single_2graphic_pane_cp2

0xb944,	// (0x0000b944) list_single_graphic_heading_pane_cp2_ParamLimits

0xb944,	// (0x0000b944) list_single_graphic_heading_pane_cp2

0xb944,	// (0x0000b944) list_single_graphic_pane_cp2_ParamLimits

0xb944,	// (0x0000b944) list_single_graphic_pane_cp2

0xb944,	// (0x0000b944) list_single_heading_pane_cp2_ParamLimits

0xb944,	// (0x0000b944) list_single_heading_pane_cp2

0xb955,	// (0x0000b955) list_single_large_graphic_pane_cp2_ParamLimits

0xb955,	// (0x0000b955) list_single_large_graphic_pane_cp2

0xb944,	// (0x0000b944) list_single_number_heading_pane_cp2_ParamLimits

0xb944,	// (0x0000b944) list_single_number_heading_pane_cp2

0xb944,	// (0x0000b944) list_single_number_pane_cp2_ParamLimits

0xb944,	// (0x0000b944) list_single_number_pane_cp2

0xb965,	// (0x0000b965) list_single_pane_cp2_ParamLimits

0xb965,	// (0x0000b965) list_single_pane_cp2

0x1c98,	// (0x00001c98) bg_popup_sub_pane_cp22

0x1cba,	// (0x00001cba) popup_side_volume_key_window_g1

0x1cde,	// (0x00001cde) popup_side_volume_key_window_t1

0x1cfa,	// (0x00001cfa) volume_small_pane_cp1

0x0798,	// (0x00000798) bg_popup_sub_pane_cp24_ParamLimits

0x0798,	// (0x00000798) bg_popup_sub_pane_cp24

0x1d02,	// (0x00001d02) fep_china_uni_candidate_pane_ParamLimits

0x1d02,	// (0x00001d02) fep_china_uni_candidate_pane

0x1d16,	// (0x00001d16) fep_china_uni_entry_pane

0x1d26,	// (0x00001d26) popup_fep_china_uni_window_g1

0x1d42,	// (0x00001d42) fep_china_uni_entry_pane_g1

0x1d4a,	// (0x00001d4a) fep_china_uni_entry_pane_g2

0x0001,

0xa562,	// (0x0000a562) fep_china_uni_entry_pane_g

0x1d52,	// (0x00001d52) fep_entry_item_pane

0x1d5c,	// (0x00001d5c) fep_candidate_item_pane

0x1d64,	// (0x00001d64) fep_china_uni_candidate_pane_g1

0x1d6c,	// (0x00001d6c) fep_china_uni_candidate_pane_g2

0x1d74,	// (0x00001d74) fep_china_uni_candidate_pane_g3

0x1d7c,	// (0x00001d7c) fep_china_uni_candidate_pane_g4

0x0003,

0xa567,	// (0x0000a567) fep_china_uni_candidate_pane_g

0x002a,	// (0x0000002a) fep_entry_item_pane_g1

0x1d84,	// (0x00001d84) fep_entry_item_pane_t1_ParamLimits

0x1d84,	// (0x00001d84) fep_entry_item_pane_t1

0x1d9a,	// (0x00001d9a) fep_candidate_item_pane_t1_ParamLimits

0x1d9a,	// (0x00001d9a) fep_candidate_item_pane_t1

0x1daf,	// (0x00001daf) fep_candidate_item_pane_t2_ParamLimits

0x1daf,	// (0x00001daf) fep_candidate_item_pane_t2

0x0001,

0xa570,	// (0x0000a570) fep_candidate_item_pane_t_ParamLimits

0xa570,	// (0x0000a570) fep_candidate_item_pane_t

0x0474,	// (0x00000474) list_highlight_pane_cp31_ParamLimits

0x0474,	// (0x00000474) list_highlight_pane_cp31

0x1dc1,	// (0x00001dc1) level_1_signal_lsc

0x1dca,	// (0x00001dca) level_2_signal_lsc

0x1dd3,	// (0x00001dd3) level_3_signal_lsc

0x1ddc,	// (0x00001ddc) level_4_signal_lsc

0x1de5,	// (0x00001de5) level_5_signal_lsc

0x1dee,	// (0x00001dee) level_6_signal_lsc

0x1df7,	// (0x00001df7) level_7_signal_lsc

0x1df7,	// (0x00001df7) level_1_battery_lsc

0x1e00,	// (0x00001e00) level_2_battery_lsc

0x1e09,	// (0x00001e09) level_3_battery_lsc

0x1e12,	// (0x00001e12) level_4_battery_lsc

0x1e1b,	// (0x00001e1b) level_5_battery_lsc

0x1e24,	// (0x00001e24) level_6_battery_lsc

0x1dc1,	// (0x00001dc1) level_7_battery_lsc

0x1e2d,	// (0x00001e2d) scroll_handle_focus_pane_g1

0x1e36,	// (0x00001e36) scroll_handle_focus_pane_g2

0x1e3f,	// (0x00001e3f) scroll_handle_focus_pane_g3

0x0002,

0xa575,	// (0x0000a575) scroll_handle_focus_pane_g

0xb9eb,	// (0x0000b9eb) list_single_2graphic_pane_g1_ParamLimits

0xb9eb,	// (0x0000b9eb) list_single_2graphic_pane_g1

0xb32f,	// (0x0000b32f) list_single_2graphic_pane_g2_ParamLimits

0xb32f,	// (0x0000b32f) list_single_2graphic_pane_g2

0x317f,	// (0x0000317f) list_single_2graphic_pane_g3_ParamLimits

0x317f,	// (0x0000317f) list_single_2graphic_pane_g3

0xb9f7,	// (0x0000b9f7) list_single_2graphic_pane_g4_ParamLimits

0xb9f7,	// (0x0000b9f7) list_single_2graphic_pane_g4

0x0003,

0xeb08,	// (0x0000eb08) list_single_2graphic_pane_g_ParamLimits

0xeb08,	// (0x0000eb08) list_single_2graphic_pane_g

0xba03,	// (0x0000ba03) list_single_2graphic_pane_t1_ParamLimits

0xba03,	// (0x0000ba03) list_single_2graphic_pane_t1

0xba31,	// (0x0000ba31) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xba31,	// (0x0000ba31) list_double2_graphic_large_graphic_pane_g1

0xb386,	// (0x0000b386) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb386,	// (0x0000b386) list_double2_graphic_large_graphic_pane_g2

0x0d98,	// (0x00000d98) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x0d98,	// (0x00000d98) list_double2_graphic_large_graphic_pane_g3

0xba41,	// (0x0000ba41) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xba41,	// (0x0000ba41) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xeb11,	// (0x0000eb11) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xeb11,	// (0x0000eb11) list_double2_graphic_large_graphic_pane_g

0xba4d,	// (0x0000ba4d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xba4d,	// (0x0000ba4d) list_double2_graphic_large_graphic_pane_t1

0xba63,	// (0x0000ba63) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xba63,	// (0x0000ba63) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xeb1a,	// (0x0000eb1a) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xeb1a,	// (0x0000eb1a) list_double2_graphic_large_graphic_pane_t

0x2130,	// (0x00002130) popup_fast_swap_window_ParamLimits

0x2130,	// (0x00002130) popup_fast_swap_window

0x214c,	// (0x0000214c) popup_side_volume_key_window

0x2166,	// (0x00002166) stacon_top_pane

0x2170,	// (0x00002170) status_pane_ParamLimits

0x2170,	// (0x00002170) status_pane

0x0020,	// (0x00000020) status_small_pane

0x024e,	// (0x0000024e) control_pane

0x024e,	// (0x0000024e) stacon_bottom_pane

0x0c92,	// (0x00000c92) scroll_pane_cp121

0x1124,	// (0x00001124) set_content_pane

0x4dea,	// (0x00004dea) bg_active_tab_pane_g1_cp1

0x1edb,	// (0x00001edb) bg_active_tab_pane_g2_cp1

0x4df3,	// (0x00004df3) bg_active_tab_pane_g3_cp1

0x4dea,	// (0x00004dea) bg_passive_tab_pane_g1_cp1

0x1edb,	// (0x00001edb) bg_passive_tab_pane_g2_cp1

0x4df3,	// (0x00004df3) bg_passive_tab_pane_g3_cp1

0xba75,	// (0x0000ba75) bg_active_tab_pane_g1_cp2

0x1edb,	// (0x00001edb) bg_active_tab_pane_g2_cp2

0xba7e,	// (0x0000ba7e) bg_active_tab_pane_g3_cp2

0xba75,	// (0x0000ba75) bg_passive_tab_pane_g1_cp2

0x1edb,	// (0x00001edb) bg_passive_tab_pane_g2_cp2

0xba7e,	// (0x0000ba7e) bg_passive_tab_pane_g3_cp2

0xba87,	// (0x0000ba87) bg_active_tab_pane_g1_cp3

0x1edb,	// (0x00001edb) bg_active_tab_pane_g2_cp3

0xba90,	// (0x0000ba90) bg_active_tab_pane_g3_cp3

0xba87,	// (0x0000ba87) bg_passive_tab_pane_g1_cp3

0x1edb,	// (0x00001edb) bg_passive_tab_pane_g2_cp3

0xba90,	// (0x0000ba90) bg_passive_tab_pane_g3_cp3

0xba99,	// (0x0000ba99) bg_active_tab_pane_g1_cp4

0x1edb,	// (0x00001edb) bg_active_tab_pane_g2_cp4

0xbaa2,	// (0x0000baa2) bg_active_tab_pane_g3_cp4

0xba99,	// (0x0000ba99) bg_passive_tab_pane_g1_cp4

0x1edb,	// (0x00001edb) bg_passive_tab_pane_g2_cp4

0xbaa2,	// (0x0000baa2) bg_passive_tab_pane_g3_cp4

0x208e,	// (0x0000208e) bg_active_tab_pane_g1_cp5

0x1edb,	// (0x00001edb) bg_active_tab_pane_g2_cp5

0x2097,	// (0x00002097) bg_active_tab_pane_g3_cp5

0x208e,	// (0x0000208e) bg_passive_tab_pane_g1_cp5

0x1edb,	// (0x00001edb) bg_passive_tab_pane_g2_cp5

0x2097,	// (0x00002097) bg_passive_tab_pane_g3_cp5

0x9cbe,	// (0x00009cbe) list_set_graphic_pane_ParamLimits

0x9cbe,	// (0x00009cbe) list_set_graphic_pane

0x024e,	// (0x0000024e) bg_set_opt_pane_cp4

0x20b7,	// (0x000020b7) list_set_graphic_pane_g1_ParamLimits

0x20b7,	// (0x000020b7) list_set_graphic_pane_g1

0x20c3,	// (0x000020c3) list_set_graphic_pane_g2_ParamLimits

0x20c3,	// (0x000020c3) list_set_graphic_pane_g2

0x0001,

0xa593,	// (0x0000a593) list_set_graphic_pane_g_ParamLimits

0xa593,	// (0x0000a593) list_set_graphic_pane_g

0x0009,

0xa911,	// (0x0000a911) volume_small_pane_cp_g

0x20e5,	// (0x000020e5) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x20e5,	// (0x000020e5) list_double2_large_graphic_pane_g1_cp2

0x20f1,	// (0x000020f1) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x20f1,	// (0x000020f1) list_double2_large_graphic_pane_g2_cp2

0x2100,	// (0x00002100) list_double2_large_graphic_pane_g3_cp2

0x2108,	// (0x00002108) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2108,	// (0x00002108) list_double2_large_graphic_pane_t1_cp2

0x211e,	// (0x0000211e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x211e,	// (0x0000211e) list_double2_large_graphic_pane_t2_cp2

0x45f8,	// (0x000045f8) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x45f8,	// (0x000045f8) list_double_large_graphic_pane_g1_cp2

0x4609,	// (0x00004609) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4609,	// (0x00004609) list_double_large_graphic_pane_g2_cp2

0x224b,	// (0x0000224b) list_double_large_graphic_pane_g3_cp2

0x4618,	// (0x00004618) list_double_large_graphic_pane_g4_cp

0x4620,	// (0x00004620) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4620,	// (0x00004620) list_double_large_graphic_pane_t1_cp2

0x4637,	// (0x00004637) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4637,	// (0x00004637) list_double_large_graphic_pane_t2_cp2

0x217e,	// (0x0000217e) list_double2_graphic_pane_g1_cp2_ParamLimits

0x217e,	// (0x0000217e) list_double2_graphic_pane_g1_cp2

0x218a,	// (0x0000218a) list_double2_graphic_pane_g2_cp2_ParamLimits

0x218a,	// (0x0000218a) list_double2_graphic_pane_g2_cp2

0x2199,	// (0x00002199) list_double2_graphic_pane_g3_cp2

0x21a1,	// (0x000021a1) list_double2_graphic_pane_t1_cp2_ParamLimits

0x21a1,	// (0x000021a1) list_double2_graphic_pane_t1_cp2

0x21b7,	// (0x000021b7) list_double2_graphic_pane_t2_cp2_ParamLimits

0x21b7,	// (0x000021b7) list_double2_graphic_pane_t2_cp2

0x21c9,	// (0x000021c9) list_single_number_heading_pane_g1_cp2_ParamLimits

0x21c9,	// (0x000021c9) list_single_number_heading_pane_g1_cp2

0x21d5,	// (0x000021d5) list_single_number_heading_pane_g2_cp2

0x21dd,	// (0x000021dd) list_single_number_heading_pane_t1_cp2_ParamLimits

0x21dd,	// (0x000021dd) list_single_number_heading_pane_t1_cp2

0x21f3,	// (0x000021f3) list_single_number_heading_pane_t2_cp2_ParamLimits

0x21f3,	// (0x000021f3) list_single_number_heading_pane_t2_cp2

0x2205,	// (0x00002205) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2205,	// (0x00002205) list_single_number_heading_pane_t3_cp2

0x21c9,	// (0x000021c9) list_single_heading_pane_g1_cp2_ParamLimits

0x21c9,	// (0x000021c9) list_single_heading_pane_g1_cp2

0x21d5,	// (0x000021d5) list_single_heading_pane_g2_cp2

0x21dd,	// (0x000021dd) list_single_heading_pane_t1_cp2_ParamLimits

0x21dd,	// (0x000021dd) list_single_heading_pane_t1_cp2

0x4402,	// (0x00004402) list_single_heading_pane_t2_cp2_ParamLimits

0x4402,	// (0x00004402) list_single_heading_pane_t2_cp2

0x4352,	// (0x00004352) list_double_graphic_pane_g1_cp2_ParamLimits

0x4352,	// (0x00004352) list_double_graphic_pane_g1_cp2

0x435e,	// (0x0000435e) list_double_graphic_pane_g2_cp2_ParamLimits

0x435e,	// (0x0000435e) list_double_graphic_pane_g2_cp2

0x436d,	// (0x0000436d) list_double_graphic_pane_g3_cp2

0x4375,	// (0x00004375) list_double_graphic_pane_t1_cp2_ParamLimits

0x4375,	// (0x00004375) list_double_graphic_pane_t1_cp2

0x438b,	// (0x0000438b) list_double_graphic_pane_t2_cp2_ParamLimits

0x438b,	// (0x0000438b) list_double_graphic_pane_t2_cp2

0x223f,	// (0x0000223f) list_double_number_pane_g1_cp2_ParamLimits

0x223f,	// (0x0000223f) list_double_number_pane_g1_cp2

0x224b,	// (0x0000224b) list_double_number_pane_g2_cp2

0x4318,	// (0x00004318) list_double_number_pane_t1_cp2_ParamLimits

0x4318,	// (0x00004318) list_double_number_pane_t1_cp2

0x432a,	// (0x0000432a) list_double_number_pane_t2_cp2_ParamLimits

0x432a,	// (0x0000432a) list_double_number_pane_t2_cp2

0x4340,	// (0x00004340) list_double_number_pane_t3_cp2_ParamLimits

0x4340,	// (0x00004340) list_double_number_pane_t3_cp2

0x41f1,	// (0x000041f1) list_single_graphic_pane_g1_cp2_ParamLimits

0x41f1,	// (0x000041f1) list_single_graphic_pane_g1_cp2

0x21c9,	// (0x000021c9) list_single_graphic_pane_g2_cp2_ParamLimits

0x21c9,	// (0x000021c9) list_single_graphic_pane_g2_cp2

0x21d5,	// (0x000021d5) list_single_graphic_pane_g3_cp2

0x41c9,	// (0x000041c9) list_single_graphic_pane_t1_cp2_ParamLimits

0x41c9,	// (0x000041c9) list_single_graphic_pane_t1_cp2

0x21c9,	// (0x000021c9) list_single_number_pane_g1_cp2_ParamLimits

0x21c9,	// (0x000021c9) list_single_number_pane_g1_cp2

0x21d5,	// (0x000021d5) list_single_number_pane_g2_cp2

0x41c9,	// (0x000041c9) list_single_number_pane_t1_cp2_ParamLimits

0x41c9,	// (0x000041c9) list_single_number_pane_t1_cp2

0x41df,	// (0x000041df) list_single_number_pane_t2_cp2_ParamLimits

0x41df,	// (0x000041df) list_single_number_pane_t2_cp2

0x20f1,	// (0x000020f1) list_double2_pane_g1_cp2_ParamLimits

0x20f1,	// (0x000020f1) list_double2_pane_g1_cp2

0x2100,	// (0x00002100) list_double2_pane_g2_cp2

0x2217,	// (0x00002217) list_double2_pane_t1_cp2_ParamLimits

0x2217,	// (0x00002217) list_double2_pane_t1_cp2

0x222d,	// (0x0000222d) list_double2_pane_t2_cp2_ParamLimits

0x222d,	// (0x0000222d) list_double2_pane_t2_cp2

0x223f,	// (0x0000223f) list_double_pane_g1_cp2_ParamLimits

0x223f,	// (0x0000223f) list_double_pane_g1_cp2

0x224b,	// (0x0000224b) list_double_pane_g2_cp2

0x2253,	// (0x00002253) list_double_pane_t1_cp2_ParamLimits

0x2253,	// (0x00002253) list_double_pane_t1_cp2

0x2269,	// (0x00002269) list_double_pane_t2_cp2_ParamLimits

0x2269,	// (0x00002269) list_double_pane_t2_cp2

0x2298,	// (0x00002298) list_single_pane_cp2_g3

0x21c9,	// (0x000021c9) list_single_pane_g1_cp2_ParamLimits

0x21c9,	// (0x000021c9) list_single_pane_g1_cp2

0x21d5,	// (0x000021d5) list_single_pane_g2_cp2

0x22a8,	// (0x000022a8) list_single_pane_t1_cp2_ParamLimits

0x22a8,	// (0x000022a8) list_single_pane_t1_cp2

0x22c0,	// (0x000022c0) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x22c0,	// (0x000022c0) list_single_large_graphic_pane_g1_cp2

0x22cc,	// (0x000022cc) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x22cc,	// (0x000022cc) list_single_large_graphic_pane_g2_cp2

0x22d8,	// (0x000022d8) list_single_large_graphic_pane_g3_cp2

0x22e0,	// (0x000022e0) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x22e0,	// (0x000022e0) list_single_large_graphic_pane_g4_cp1

0x22fa,	// (0x000022fa) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x22fa,	// (0x000022fa) list_single_large_graphic_pane_t1_cp2

0x3173,	// (0x00003173) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3173,	// (0x00003173) list_single_graphic_heading_pane_g1_cp2

0x404d,	// (0x0000404d) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x404d,	// (0x0000404d) list_single_graphic_heading_pane_g4_cp2

0x21d5,	// (0x000021d5) list_single_graphic_heading_pane_g5_cp2

0x21dd,	// (0x000021dd) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x21dd,	// (0x000021dd) list_single_graphic_heading_pane_t1_cp2

0x4072,	// (0x00004072) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x4072,	// (0x00004072) list_single_graphic_heading_pane_t2_cp2

0x4041,	// (0x00004041) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4041,	// (0x00004041) list_single_2graphic_pane_g1_cp2

0x404d,	// (0x0000404d) list_single_2graphic_pane_g2_cp2_ParamLimits

0x404d,	// (0x0000404d) list_single_2graphic_pane_g2_cp2

0x21d5,	// (0x000021d5) list_single_2graphic_pane_g3_cp2

0x333b,	// (0x0000333b) list_single_2graphic_pane_g4_cp2_ParamLimits

0x333b,	// (0x0000333b) list_single_2graphic_pane_g4_cp2

0x405c,	// (0x0000405c) list_single_2graphic_pane_t1_cp2_ParamLimits

0x405c,	// (0x0000405c) list_single_2graphic_pane_t1_cp2

0x002a,	// (0x0000002a) list_highlight_pane_g10_cp1

0x3c3b,	// (0x00003c3b) list_highlight_pane_g1_cp1

0x3c43,	// (0x00003c43) list_highlight_pane_g2_cp1

0x3c4b,	// (0x00003c4b) list_highlight_pane_g3_cp1

0x3c53,	// (0x00003c53) list_highlight_pane_g4_cp1

0x3c5b,	// (0x00003c5b) list_highlight_pane_g5_cp1

0x3c63,	// (0x00003c63) list_highlight_pane_g6_cp1

0x3c6b,	// (0x00003c6b) list_highlight_pane_g7_cp1

0x3c73,	// (0x00003c73) list_highlight_pane_g8_cp1

0x3c7b,	// (0x00003c7b) list_highlight_pane_g9_cp1

0xc734,	// (0x0000c734) form_field_slider_pane_t3

0xc742,	// (0x0000c742) form_field_slider_pane_t4

0x3b85,	// (0x00003b85) slider_form_pane_ParamLimits

0x3b85,	// (0x00003b85) slider_form_pane

0x024e,	// (0x0000024e) control_abbreviations

0x024e,	// (0x0000024e) control_conventions

0x024e,	// (0x0000024e) control_definitions

0x024e,	// (0x0000024e) format_table_attribute

0x444c,	// (0x0000444c) bg_popup_preview_window_pane_g9

0x024e,	// (0x0000024e) format_table_data2

0x024e,	// (0x0000024e) format_table_data3

0x024e,	// (0x0000024e) format_table_data_example

0x0008,

0x024e,	// (0x0000024e) intro_purpose

0xa72f,	// (0x0000a72f) bg_popup_preview_window_pane_g

0x024e,	// (0x0000024e) texts_category

0x024e,	// (0x0000024e) texts_graphics

0x2310,	// (0x00002310) text_digital

0x231f,	// (0x0000231f) text_primary

0x232e,	// (0x0000232e) text_primary_small

0x233d,	// (0x0000233d) text_secondary

0x234c,	// (0x0000234c) text_title

0x4c7b,	// (0x00004c7b) bg_passive_tab_pane_g1_cp3_srt

0x1edb,	// (0x00001edb) bg_passive_tab_pane_g2_cp3_srt

0x4c84,	// (0x00004c84) bg_passive_tab_pane_g3_cp3_srt

0x0798,	// (0x00000798) bg_active_tab_pane_cp3_srt_ParamLimits

0x0798,	// (0x00000798) bg_active_tab_pane_cp3_srt

0x4c8d,	// (0x00004c8d) tabs_4_active_pane_srt_g1

0xb01d,	// (0x0000b01d) tabs_4_active_pane_srt_t1_ParamLimits

0xb01d,	// (0x0000b01d) tabs_4_active_pane_srt_t1

0x4c7b,	// (0x00004c7b) bg_active_tab_pane_g1_cp3_copy1

0x1edb,	// (0x00001edb) bg_active_tab_pane_g2_cp3_copy1

0x4c84,	// (0x00004c84) bg_active_tab_pane_g3_cp3_copy1

0x0474,	// (0x00000474) tabs_2_long_active_pane_srt_ParamLimits

0x0474,	// (0x00000474) tabs_2_long_active_pane_srt

0x0474,	// (0x00000474) tabs_2_long_passive_pane_srt_ParamLimits

0x0474,	// (0x00000474) tabs_2_long_passive_pane_srt

0x28cb,	// (0x000028cb) bg_passive_tab_pane_cp4_srt_ParamLimits

0x28cb,	// (0x000028cb) bg_passive_tab_pane_cp4_srt

0x48c0,	// (0x000048c0) bg_passive_tab_pane_g1_cp4_srt

0x1edb,	// (0x00001edb) bg_passive_tab_pane_g2_cp4_srt

0x48c9,	// (0x000048c9) bg_passive_tab_pane_g3_cp4_srt

0x0474,	// (0x00000474) bg_active_tab_pane_cp4_srt_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp4_srt

0xb7b6,	// (0x0000b7b6) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb7b6,	// (0x0000b7b6) tabs_2_long_active_pane_srt_t1

0x48c0,	// (0x000048c0) bg_active_tab_pane_g1_cp4_srt

0x1edb,	// (0x00001edb) bg_active_tab_pane_g2_cp4_srt

0x48c9,	// (0x000048c9) bg_active_tab_pane_g3_cp4_srt

0x0798,	// (0x00000798) tabs_3_long_active_pane_srt_ParamLimits

0x0798,	// (0x00000798) tabs_3_long_active_pane_srt

0x0798,	// (0x00000798) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0798,	// (0x00000798) tabs_3_long_passive_pane_cp_srt

0x0798,	// (0x00000798) tabs_3_long_passive_pane_srt_ParamLimits

0x0798,	// (0x00000798) tabs_3_long_passive_pane_srt

0x28cb,	// (0x000028cb) bg_passive_tab_pane_cp5_srt_ParamLimits

0x28cb,	// (0x000028cb) bg_passive_tab_pane_cp5_srt

0x208e,	// (0x0000208e) bg_passive_tab_pane_g1_cp5_srt

0x1edb,	// (0x00001edb) bg_passive_tab_pane_g2_cp5_srt

0x2097,	// (0x00002097) bg_passive_tab_pane_g3_cp5_srt

0x0474,	// (0x00000474) bg_active_tab_pane_cp5_srt_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp5_srt

0xb7cd,	// (0x0000b7cd) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb7cd,	// (0x0000b7cd) tabs_3_long_active_pane_srt_t1

0x208e,	// (0x0000208e) bg_active_tab_pane_g1_cp5_srt

0x1edb,	// (0x00001edb) bg_active_tab_pane_g2_cp5_srt

0x2097,	// (0x00002097) bg_active_tab_pane_g3_cp5_srt

0x48b2,	// (0x000048b2) navi_text_pane_srt_t1

0x48aa,	// (0x000048aa) navi_icon_pane_srt_g1

0x25bc,	// (0x000025bc) midp_editing_number_pane_srt

0x235b,	// (0x0000235b) midp_ticker_pane_srt

0x25c4,	// (0x000025c4) midp_ticker_pane_srt_g1

0x25cc,	// (0x000025cc) midp_ticker_pane_srt_g2

0x0001,

0xa5b2,	// (0x0000a5b2) midp_ticker_pane_srt_g

0x25d4,	// (0x000025d4) midp_ticker_pane_srt_t1

0x489b,	// (0x0000489b) midp_editing_number_pane_t1_copy1

0xbaab,	// (0x0000baab) listscroll_midp_pane

0xbaab,	// (0x0000baab) midp_form_pane

0x23cb,	// (0x000023cb) midp_info_popup_window_ParamLimits

0x23cb,	// (0x000023cb) midp_info_popup_window

0x1473,	// (0x00001473) bg_popup_sub_pane_cp50_ParamLimits

0x1473,	// (0x00001473) bg_popup_sub_pane_cp50

0x387e,	// (0x0000387e) listscroll_midp_info_pane_ParamLimits

0x387e,	// (0x0000387e) listscroll_midp_info_pane

0x3866,	// (0x00003866) listscroll_form_midp_pane_ParamLimits

0x3866,	// (0x00003866) listscroll_form_midp_pane

0x3872,	// (0x00003872) scroll_bar_cp050

0xc728,	// (0x0000c728) list_midp_pane

0x59b2,	// (0x000059b2) signal_pane_g2_cp

0x3780,	// (0x00003780) listscroll_midp_info_pane_t1_ParamLimits

0x3780,	// (0x00003780) listscroll_midp_info_pane_t1

0x3798,	// (0x00003798) listscroll_midp_info_pane_t2_ParamLimits

0x3798,	// (0x00003798) listscroll_midp_info_pane_t2

0x37d6,	// (0x000037d6) listscroll_midp_info_pane_t3_ParamLimits

0x37d6,	// (0x000037d6) listscroll_midp_info_pane_t3

0x3810,	// (0x00003810) listscroll_midp_info_pane_t4_ParamLimits

0x3810,	// (0x00003810) listscroll_midp_info_pane_t4

0x0003,

0xa66a,	// (0x0000a66a) listscroll_midp_info_pane_t_ParamLimits

0xa66a,	// (0x0000a66a) listscroll_midp_info_pane_t

0x14d4,	// (0x000014d4) scroll_pane_cp21

0x3724,	// (0x00003724) form_midp_field_choice_group_pane

0x372d,	// (0x0000372d) form_midp_field_text_pane

0x3766,	// (0x00003766) form_midp_field_time_pane

0x376e,	// (0x0000376e) form_midp_gauge_slider_pane

0x3777,	// (0x00003777) form_midp_gauge_wait_pane

0x024e,	// (0x0000024e) form_midp_image_pane

0xc712,	// (0x0000c712) list_single_midp_pane_ParamLimits

0xc712,	// (0x0000c712) list_single_midp_pane

0x36dd,	// (0x000036dd) form_midp_field_text_pane_t1

0x345c,	// (0x0000345c) input_focus_pane_cp050

0x36fe,	// (0x000036fe) list_midp_form_text_pane

0x36ac,	// (0x000036ac) form_midp_field_choice_group_pane_t1

0x36ba,	// (0x000036ba) input_focus_pane_cp051

0x36ce,	// (0x000036ce) list_midp_choice_pane

0x024e,	// (0x0000024e) status_idle_pane

0x3690,	// (0x00003690) form_midp_field_time_pane_t1

0x002a,	// (0x0000002a) wait_anim_pane_g2_copy1

0x369e,	// (0x0000369e) form_midp_field_time_pane_t2

0x0001,

0x2475,	// (0x00002475) aid_navinavi_width_2_pane

0xa665,	// (0x0000a665) form_midp_field_time_pane_t

0x024e,	// (0x0000024e) input_focus_pane_cp052

0x024e,	// (0x0000024e) bg_input_focus_pane_cp040

0x3650,	// (0x00003650) form_midp_gauge_slider_pane_t1

0x365e,	// (0x0000365e) form_midp_gauge_slider_pane_t2

0xc6f6,	// (0x0000c6f6) form_midp_gauge_slider_pane_t3

0xc704,	// (0x0000c704) form_midp_gauge_slider_pane_t4

0x0003,

0xeb6c,	// (0x0000eb6c) form_midp_gauge_slider_pane_t

0x3688,	// (0x00003688) form_midp_slider_pane

0x0474,	// (0x00000474) bg_input_focus_pane_cp041_ParamLimits

0x0474,	// (0x00000474) bg_input_focus_pane_cp041

0x3620,	// (0x00003620) form_midp_gauge_wait_pane_t1_ParamLimits

0x3620,	// (0x00003620) form_midp_gauge_wait_pane_t1

0x3632,	// (0x00003632) form_midp_gauge_wait_pane_t2_ParamLimits

0x3632,	// (0x00003632) form_midp_gauge_wait_pane_t2

0x0001,

0xa657,	// (0x0000a657) form_midp_gauge_wait_pane_t_ParamLimits

0xa657,	// (0x0000a657) form_midp_gauge_wait_pane_t

0x3644,	// (0x00003644) form_midp_wait_pane_ParamLimits

0x3644,	// (0x00003644) form_midp_wait_pane

0x35ea,	// (0x000035ea) form_midp_image_pane_g1

0x35f3,	// (0x000035f3) form_midp_image_pane_t1

0x3602,	// (0x00003602) form_midp_image_pane_t2

0x3611,	// (0x00003611) form_midp_image_pane_t3

0x0002,

0xa650,	// (0x0000a650) form_midp_image_pane_t

0x35d2,	// (0x000035d2) list_single_midp_pane_g1

0x35db,	// (0x000035db) list_single_midp_pane_t1

0x35be,	// (0x000035be) list_midp_form_item_pane_ParamLimits

0x35be,	// (0x000035be) list_midp_form_item_pane

0x241d,	// (0x0000241d) list_midp_form_item_pane_t1

0x242c,	// (0x0000242c) midp_ticker_pane_g1

0x2438,	// (0x00002438) midp_ticker_pane_g2

0x0001,

0xa598,	// (0x0000a598) midp_ticker_pane_g

0x2444,	// (0x00002444) midp_ticker_pane_t1

0x489b,	// (0x0000489b) midp_editing_number_pane_t1

0x4b24,	// (0x00004b24) midp_editing_number_pane

0x4b30,	// (0x00004b30) midp_ticker_pane

0x4879,	// (0x00004879) ai_message_heading_pane

0x024e,	// (0x0000024e) bg_popup_window_pane_cp14

0x4881,	// (0x00004881) listscroll_ai_message_pane

0x4803,	// (0x00004803) ai_message_heading_pane_g1_ParamLimits

0x4803,	// (0x00004803) ai_message_heading_pane_g1

0x480f,	// (0x0000480f) ai_message_heading_pane_g2_ParamLimits

0x480f,	// (0x0000480f) ai_message_heading_pane_g2

0x481b,	// (0x0000481b) ai_message_heading_pane_g3_ParamLimits

0x481b,	// (0x0000481b) ai_message_heading_pane_g3

0x4827,	// (0x00004827) ai_message_heading_pane_g4_ParamLimits

0x4827,	// (0x00004827) ai_message_heading_pane_g4

0x0003,

0xa791,	// (0x0000a791) ai_message_heading_pane_g_ParamLimits

0xa791,	// (0x0000a791) ai_message_heading_pane_g

0x4833,	// (0x00004833) ai_message_heading_pane_t1_ParamLimits

0x4833,	// (0x00004833) ai_message_heading_pane_t1

0x484d,	// (0x0000484d) ai_message_heading_pane_t2_ParamLimits

0x484d,	// (0x0000484d) ai_message_heading_pane_t2

0x0001,

0xa79a,	// (0x0000a79a) ai_message_heading_pane_t_ParamLimits

0xa79a,	// (0x0000a79a) ai_message_heading_pane_t

0x485f,	// (0x0000485f) bg_popup_heading_pane_cp1_ParamLimits

0x485f,	// (0x0000485f) bg_popup_heading_pane_cp1

0x47f1,	// (0x000047f1) list_ai_message_pane_ParamLimits

0x47f1,	// (0x000047f1) list_ai_message_pane

0x14d4,	// (0x000014d4) scroll_pane_cp10

0x473d,	// (0x0000473d) list_ai_message_pane_g1

0x4745,	// (0x00004745) list_ai_message_pane_g2

0x0001,

0xa76e,	// (0x0000a76e) list_ai_message_pane_g

0x474d,	// (0x0000474d) list_ai_message_pane_t1_ParamLimits

0x474d,	// (0x0000474d) list_ai_message_pane_t1

0x4762,	// (0x00004762) list_ai_message_pane_t2_ParamLimits

0x4762,	// (0x00004762) list_ai_message_pane_t2

0x4777,	// (0x00004777) list_ai_message_pane_t3_ParamLimits

0x4777,	// (0x00004777) list_ai_message_pane_t3

0x478c,	// (0x0000478c) list_ai_message_pane_t4_ParamLimits

0x478c,	// (0x0000478c) list_ai_message_pane_t4

0x0003,

0xa773,	// (0x0000a773) list_ai_message_pane_t_ParamLimits

0xa773,	// (0x0000a773) list_ai_message_pane_t

0x472b,	// (0x0000472b) cell_ai_soft_ind_pane_ParamLimits

0x472b,	// (0x0000472b) cell_ai_soft_ind_pane

0x2456,	// (0x00002456) cell_ai_soft_ind_pane_g1_ParamLimits

0x2456,	// (0x00002456) cell_ai_soft_ind_pane_g1

0x024e,	// (0x0000024e) grid_highlight_cp1

0x2463,	// (0x00002463) text_secondary_cp56_ParamLimits

0x2463,	// (0x00002463) text_secondary_cp56

0x4700,	// (0x00004700) example_general_pane_ParamLimits

0x4700,	// (0x00004700) example_general_pane

0x470c,	// (0x0000470c) example_parent_pane_g1_ParamLimits

0x470c,	// (0x0000470c) example_parent_pane_g1

0x4718,	// (0x00004718) example_parent_pane_t1_ParamLimits

0x4718,	// (0x00004718) example_parent_pane_t1

0xc01c,	// (0x0000c01c) popup_preview_text_window_ParamLimits

0xc01c,	// (0x0000c01c) popup_preview_text_window

0x22a0,	// (0x000022a0) list_single_pane_cp2_g4

0x0874,	// (0x00000874) bg_popup_preview_window_pane_ParamLimits

0x0874,	// (0x00000874) bg_popup_preview_window_pane

0x4454,	// (0x00004454) popup_preview_text_window_t1_ParamLimits

0x4454,	// (0x00004454) popup_preview_text_window_t1

0x4472,	// (0x00004472) popup_preview_text_window_t2_ParamLimits

0x4472,	// (0x00004472) popup_preview_text_window_t2

0x44bb,	// (0x000044bb) popup_preview_text_window_t3_ParamLimits

0x44bb,	// (0x000044bb) popup_preview_text_window_t3

0x4500,	// (0x00004500) popup_preview_text_window_t4_ParamLimits

0x4500,	// (0x00004500) popup_preview_text_window_t4

0x0004,

0xa742,	// (0x0000a742) popup_preview_text_window_t_ParamLimits

0xa742,	// (0x0000a742) popup_preview_text_window_t

0x457e,	// (0x0000457e) scroll_pane_cp11

0x32d0,	// (0x000032d0) bg_popup_preview_window_pane_g1

0x4414,	// (0x00004414) bg_popup_preview_window_pane_g2

0x441c,	// (0x0000441c) bg_popup_preview_window_pane_g3

0x4424,	// (0x00004424) bg_popup_preview_window_pane_g4

0x442c,	// (0x0000442c) bg_popup_preview_window_pane_g5

0x4434,	// (0x00004434) bg_popup_preview_window_pane_g6

0x443c,	// (0x0000443c) bg_popup_preview_window_pane_g7

0x4444,	// (0x00004444) bg_popup_preview_window_pane_g8

0x003c,	// (0x0000003c) aid_popup_width_pane

0xbf9e,	// (0x0000bf9e) popup_midp_note_alarm_window_ParamLimits

0xbf9e,	// (0x0000bf9e) popup_midp_note_alarm_window

0x11d1,	// (0x000011d1) data_form_pane_ParamLimits

0xb687,	// (0x0000b687) form_field_data_pane_g1

0xb691,	// (0x0000b691) form_field_data_pane_t1_ParamLimits

0x11fd,	// (0x000011fd) input_focus_pane_ParamLimits

0x120b,	// (0x0000120b) data_form_wide_pane_ParamLimits

0x1217,	// (0x00001217) form_field_data_wide_pane_g1

0x1237,	// (0x00001237) form_field_data_wide_pane_t1_ParamLimits

0x0b09,	// (0x00000b09) input_focus_pane_cp6_ParamLimits

0xb794,	// (0x0000b794) input_popup_find_pane_g1_ParamLimits

0xb794,	// (0x0000b794) input_popup_find_pane_g1

0x17d7,	// (0x000017d7) aid_navi_side_left_pane

0x17e7,	// (0x000017e7) aid_navi_side_right_pane

0x3d24,	// (0x00003d24) bg_popup_window_pane_cp30_ParamLimits

0x3d24,	// (0x00003d24) bg_popup_window_pane_cp30

0x3d9e,	// (0x00003d9e) popup_midp_note_alarm_window_g1_ParamLimits

0x3d9e,	// (0x00003d9e) popup_midp_note_alarm_window_g1

0x3dce,	// (0x00003dce) popup_midp_note_alarm_window_t1_ParamLimits

0x3dce,	// (0x00003dce) popup_midp_note_alarm_window_t1

0x3e6f,	// (0x00003e6f) popup_midp_note_alarm_window_t2_ParamLimits

0x3e6f,	// (0x00003e6f) popup_midp_note_alarm_window_t2

0x3f1d,	// (0x00003f1d) popup_midp_note_alarm_window_t3_ParamLimits

0x3f1d,	// (0x00003f1d) popup_midp_note_alarm_window_t3

0x3f45,	// (0x00003f45) popup_midp_note_alarm_window_t4_ParamLimits

0x3f45,	// (0x00003f45) popup_midp_note_alarm_window_t4

0x3f65,	// (0x00003f65) popup_midp_note_alarm_window_t5_ParamLimits

0x3f65,	// (0x00003f65) popup_midp_note_alarm_window_t5

0x000a,

0xa6df,	// (0x0000a6df) popup_midp_note_alarm_window_t_ParamLimits

0xa6df,	// (0x0000a6df) popup_midp_note_alarm_window_t

0x4011,	// (0x00004011) wait_bar_pane_cp1_ParamLimits

0x4011,	// (0x00004011) wait_bar_pane_cp1

0x024e,	// (0x0000024e) wait_anim_pane_copy1

0x024e,	// (0x0000024e) wait_border_pane_copy1

0x3a36,	// (0x00003a36) wait_border_pane_g1_copy1

0x124e,	// (0x0000124e) form_field_popup_pane_g1

0xb6a9,	// (0x0000b6a9) form_field_popup_pane_t1_ParamLimits

0x11fd,	// (0x000011fd) input_focus_pane_cp7_ParamLimits

0x11d1,	// (0x000011d1) list_form_pane_ParamLimits

0x126e,	// (0x0000126e) form_field_popup_wide_pane_g1

0x1276,	// (0x00001276) form_field_popup_wide_pane_t1_ParamLimits

0x11fd,	// (0x000011fd) input_focus_pane_cp8_ParamLimits

0x128b,	// (0x0000128b) list_form_wide_pane_ParamLimits

0x4cfa,	// (0x00004cfa) aid_size_cell_graphic_pane

0xb726,	// (0x0000b726) data_form_pane_t1_ParamLimits

0xcb67,	// (0x0000cb67) data_form_wide_pane_t1_ParamLimits

0xc37a,	// (0x0000c37a) bg_status_flat_pane

0xaf7a,	// (0x0000af7a) title_pane_t1_ParamLimits

0x043c,	// (0x0000043c) title_pane_t2_ParamLimits

0x0462,	// (0x00000462) title_pane_t3_ParamLimits

0xea2c,	// (0x0000ea2c) title_pane_t_ParamLimits

0xb8a5,	// (0x0000b8a5) level_1_signal_ParamLimits

0xb8b7,	// (0x0000b8b7) level_2_signal_ParamLimits

0xb8ca,	// (0x0000b8ca) level_3_signal_ParamLimits

0xb8dd,	// (0x0000b8dd) level_4_signal_ParamLimits

0xb8f0,	// (0x0000b8f0) level_5_signal_ParamLimits

0xb903,	// (0x0000b903) level_6_signal_ParamLimits

0xb916,	// (0x0000b916) level_7_signal_ParamLimits

0xb8a5,	// (0x0000b8a5) level_1_battery_ParamLimits

0xb8b7,	// (0x0000b8b7) level_2_battery_ParamLimits

0xb8ca,	// (0x0000b8ca) level_3_battery_ParamLimits

0xb8dd,	// (0x0000b8dd) level_4_battery_ParamLimits

0xb8f0,	// (0x0000b8f0) level_5_battery_ParamLimits

0xb903,	// (0x0000b903) level_6_battery_ParamLimits

0xb916,	// (0x0000b916) level_7_battery_ParamLimits

0x3c3b,	// (0x00003c3b) bg_status_flat_pane_g1

0x3c43,	// (0x00003c43) bg_status_flat_pane_g2

0x3c4b,	// (0x00003c4b) bg_status_flat_pane_g3

0x3c53,	// (0x00003c53) bg_status_flat_pane_g4

0x3c5b,	// (0x00003c5b) bg_status_flat_pane_g5

0x3c63,	// (0x00003c63) bg_status_flat_pane_g6

0x3c6b,	// (0x00003c6b) bg_status_flat_pane_g7

0xb007,	// (0x0000b007) tabs_3_active_pane_t1_ParamLimits

0xb007,	// (0x0000b007) tabs_3_passive_pane_t1_ParamLimits

0xb01d,	// (0x0000b01d) tabs_4_active_pane_t1_ParamLimits

0xb01d,	// (0x0000b01d) tabs_4_1_passive_pane_t1_ParamLimits

0xb7a0,	// (0x0000b7a0) tabs_2_active_pane_t1_ParamLimits

0xb7a0,	// (0x0000b7a0) tabs_2_passive_pane_t1_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp4_ParamLimits

0xb7b6,	// (0x0000b7b6) tabs_2_long_active_pane_t1_ParamLimits

0x28cb,	// (0x000028cb) bg_passive_tab_pane_cp4_ParamLimits

0x3389,	// (0x00003389) list_single_midp_graphic_pane_t1_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp5_ParamLimits

0xb7cd,	// (0x0000b7cd) tabs_3_long_active_pane_t1_ParamLimits

0x28cb,	// (0x000028cb) bg_passive_tab_pane_cp5_ParamLimits

0x3389,	// (0x00003389) list_single_midp_graphic_pane_t1

0xc37a,	// (0x0000c37a) bg_status_flat_pane_ParamLimits

0x2edf,	// (0x00002edf) indicator_pane_cp2_ParamLimits

0x2edf,	// (0x00002edf) indicator_pane_cp2

0xc4e0,	// (0x0000c4e0) navi_pane_srt_ParamLimits

0xc4e0,	// (0x0000c4e0) navi_pane_srt

0x3027,	// (0x00003027) popup_clock_digital_analogue_window_cp1

0x05f3,	// (0x000005f3) indicator_pane_t1

0x235b,	// (0x0000235b) copy_highlight_pane

0x235b,	// (0x0000235b) cursor_graphics_pane

0x235b,	// (0x0000235b) graphic_within_text_pane

0x235b,	// (0x0000235b) link_highlight_pane

0x4541,	// (0x00004541) popup_preview_text_window_t5_ParamLimits

0x4541,	// (0x00004541) popup_preview_text_window_t5

0x247d,	// (0x0000247d) cursor_digital_pane

0x247d,	// (0x0000247d) cursor_primary_pane

0x248e,	// (0x0000248e) cursor_primary_small_pane

0x2496,	// (0x00002496) cursor_secondary_pane

0x249e,	// (0x0000249e) cursor_title_pane

0x247d,	// (0x0000247d) link_highlight_digital_pane

0x2485,	// (0x00002485) link_highlight_primary_pane

0x248e,	// (0x0000248e) link_highlight_primary_small_pane

0x2496,	// (0x00002496) link_highlight_secondary_pane

0x249e,	// (0x0000249e) link_highlight_title_pane

0x247d,	// (0x0000247d) copy_highlight_digital_pane

0x247d,	// (0x0000247d) copy_highlight_primary_pane

0x248e,	// (0x0000248e) copy_highlight_primary_small_pane

0x2496,	// (0x00002496) copy_highlight_secondary_pane

0x249e,	// (0x0000249e) copy_highlight_title_pane

0x2496,	// (0x00002496) graphic_text_digital_pane

0x3cd3,	// (0x00003cd3) graphic_text_primary_pane

0x3cdc,	// (0x00003cdc) graphic_text_primary_small_pane

0x248e,	// (0x0000248e) graphic_text_secondary_pane

0x247d,	// (0x0000247d) graphic_text_title_pane

0xbb47,	// (0x0000bb47) cursor_primary_pane_g1

0x3cc5,	// (0x00003cc5) cursor_text_primary_t1

0xc764,	// (0x0000c764) cursor_primary_small_pane_g1

0x3cb7,	// (0x00003cb7) cursor_text_primary_small_t1

0xc75a,	// (0x0000c75a) cursor_primary_small_pane_g1_copy1

0x3ca1,	// (0x00003ca1) cursor_text_primary_small_t1_copy1

0x3c83,	// (0x00003c83) cursor_text_title_t1

0xc750,	// (0x0000c750) cursor_title_pane_g1

0xbb47,	// (0x0000bb47) cursor_digital_pane_g1

0x24ae,	// (0x000024ae) cursor_text_digital_t1

0x24bc,	// (0x000024bc) link_highlight_primary_pane_g1

0x3c2c,	// (0x00003c2c) link_highlight_primary_pane_t1

0x24bc,	// (0x000024bc) link_highlight_primary_small_pane_g1

0x24c4,	// (0x000024c4) link_highlight_primary_small_pane_t1

0x24d3,	// (0x000024d3) link_highlight_secondary_pane_g1

0x24db,	// (0x000024db) link_highlight_secondary_pane_t1

0x3b91,	// (0x00003b91) link_highlight_title_pane_g1

0x3ba8,	// (0x00003ba8) link_highlight_title_pane_t1

0x3b91,	// (0x00003b91) link_highlight_digital_pane_g1

0x3b99,	// (0x00003b99) link_highlight_digital_pane_t1

0x3a51,	// (0x00003a51) copy_highlight_primary_pane_g1

0x3a77,	// (0x00003a77) copy_highlight_primary_pane_t1

0x3a51,	// (0x00003a51) copy_highlight_primary_small_pane_g1

0x3a68,	// (0x00003a68) copy_highlight_primary_small_pane_t1

0x24ea,	// (0x000024ea) copy_highlight_secondary_pane_g1

0x24f2,	// (0x000024f2) copy_highlight_secondary_pane_t1

0x3a51,	// (0x00003a51) copy_highlight_title_pane_g1

0x3a59,	// (0x00003a59) copy_highlight_title_pane_t1

0x3a51,	// (0x00003a51) copy_highlight_digital_pane_g1

0x4f1e,	// (0x00004f1e) copy_highlight_digital_pane_t1

0x4e72,	// (0x00004e72) graphic_text_primary_pane_g1

0x4f02,	// (0x00004f02) graphic_text_primary_pane_t1

0x4f10,	// (0x00004f10) graphic_text_primary_pane_t2

0x0001,

0xa809,	// (0x0000a809) graphic_text_primary_pane_t

0x4ede,	// (0x00004ede) graphic_text_primary_small_pane_g1

0x4ee6,	// (0x00004ee6) graphic_text_primary_small_pane_t1

0x4ef4,	// (0x00004ef4) graphic_text_primary_small_pane_t2

0x0001,

0xa804,	// (0x0000a804) graphic_text_primary_small_pane_t

0x4eba,	// (0x00004eba) graphic_text_secondary_pane_g1

0x4ec2,	// (0x00004ec2) graphic_text_secondary_pane_t1

0x4ed0,	// (0x00004ed0) graphic_text_secondary_pane_t2

0x0001,

0xa7ff,	// (0x0000a7ff) graphic_text_secondary_pane_t

0x4e96,	// (0x00004e96) graphic_text_title_pane_g1

0x4e9e,	// (0x00004e9e) graphic_text_title_pane_t1

0x4eac,	// (0x00004eac) graphic_text_title_pane_t2

0x0001,

0xa7fa,	// (0x0000a7fa) graphic_text_title_pane_t

0x4e72,	// (0x00004e72) graphic_text_digital_pane_g1

0x4e7a,	// (0x00004e7a) graphic_text_digital_pane_t1

0x4e88,	// (0x00004e88) graphic_text_digital_pane_t2

0x0001,

0xa7f5,	// (0x0000a7f5) graphic_text_digital_pane_t

0x0474,	// (0x00000474) navi_icon_pane_srt_ParamLimits

0x0474,	// (0x00000474) navi_icon_pane_srt

0x024e,	// (0x0000024e) navi_midp_pane_srt

0x024e,	// (0x0000024e) navi_navi_pane_srt

0x0474,	// (0x00000474) navi_text_pane_srt_ParamLimits

0x0474,	// (0x00000474) navi_text_pane_srt

0x43cd,	// (0x000043cd) navi_navi_icon_text_pane_srt

0x43d5,	// (0x000043d5) navi_navi_pane_srt_g1_ParamLimits

0x43d5,	// (0x000043d5) navi_navi_pane_srt_g1

0x43e7,	// (0x000043e7) navi_navi_pane_srt_g2_ParamLimits

0x43e7,	// (0x000043e7) navi_navi_pane_srt_g2

0x0001,

0xa72a,	// (0x0000a72a) navi_navi_pane_srt_g_ParamLimits

0xa72a,	// (0x0000a72a) navi_navi_pane_srt_g

0x43f9,	// (0x000043f9) navi_navi_tabs_pane_srt

0x43cd,	// (0x000043cd) navi_navi_text_pane_srt

0x43cd,	// (0x000043cd) navi_navi_volume_pane_srt

0x4e63,	// (0x00004e63) navi_navi_text_pane_srt_t1

0x4e3e,	// (0x00004e3e) navi_navi_volume_pane_srt_g1

0x4e46,	// (0x00004e46) volume_small_pane_srt_ParamLimits

0x4e46,	// (0x00004e46) volume_small_pane_srt

0x2501,	// (0x00002501) volume_small_pane_srt_g1_ParamLimits

0x2501,	// (0x00002501) volume_small_pane_srt_g1

0x2511,	// (0x00002511) volume_small_pane_srt_g2_ParamLimits

0x2511,	// (0x00002511) volume_small_pane_srt_g2

0x2522,	// (0x00002522) volume_small_pane_srt_g3_ParamLimits

0x2522,	// (0x00002522) volume_small_pane_srt_g3

0x2533,	// (0x00002533) volume_small_pane_srt_g4_ParamLimits

0x2533,	// (0x00002533) volume_small_pane_srt_g4

0x2544,	// (0x00002544) volume_small_pane_srt_g5_ParamLimits

0x2544,	// (0x00002544) volume_small_pane_srt_g5

0x2555,	// (0x00002555) volume_small_pane_srt_g6_ParamLimits

0x2555,	// (0x00002555) volume_small_pane_srt_g6

0x2566,	// (0x00002566) volume_small_pane_srt_g7_ParamLimits

0x2566,	// (0x00002566) volume_small_pane_srt_g7

0x2577,	// (0x00002577) volume_small_pane_srt_g8_ParamLimits

0x2577,	// (0x00002577) volume_small_pane_srt_g8

0x2588,	// (0x00002588) volume_small_pane_srt_g9_ParamLimits

0x2588,	// (0x00002588) volume_small_pane_srt_g9

0x2599,	// (0x00002599) volume_small_pane_srt_g10_ParamLimits

0x2599,	// (0x00002599) volume_small_pane_srt_g10

0x0009,

0xa59d,	// (0x0000a59d) volume_small_pane_srt_g_ParamLimits

0xa59d,	// (0x0000a59d) volume_small_pane_srt_g

0x091d,	// (0x0000091d) query_popup_data_pane_cp2

0x4e2c,	// (0x00004e2c) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4e2c,	// (0x00004e2c) navi_navi_icon_text_pane_srt_t1

0x3cd3,	// (0x00003cd3) navi_tabs_2_long_pane_srt

0x3cd3,	// (0x00003cd3) navi_tabs_2_pane_srt

0x3cd3,	// (0x00003cd3) navi_tabs_3_long_pane_srt

0x3cd3,	// (0x00003cd3) navi_tabs_3_pane_srt

0x3cd3,	// (0x00003cd3) navi_tabs_4_pane_srt

0x4e04,	// (0x00004e04) tabs_2_active_pane_srt_ParamLimits

0x4e04,	// (0x00004e04) tabs_2_active_pane_srt

0x4e14,	// (0x00004e14) tabs_2_passive_pane_srt_ParamLimits

0x4e14,	// (0x00004e14) tabs_2_passive_pane_srt

0x345c,	// (0x0000345c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x345c,	// (0x0000345c) bg_passive_tab_pane_cp1_srt

0x4dea,	// (0x00004dea) bg_passive_tab_pane_g1_cp1_srt

0x1edb,	// (0x00001edb) bg_passive_tab_pane_g2_cp1_srt

0x4df3,	// (0x00004df3) bg_passive_tab_pane_g3_cp1_srt

0x0798,	// (0x00000798) bg_active_tab_pane_cp1_srt_ParamLimits

0x0798,	// (0x00000798) bg_active_tab_pane_cp1_srt

0x4dfc,	// (0x00004dfc) tabs_2_active_pane_srt_g1

0xb7a0,	// (0x0000b7a0) tabs_2_active_pane_srt_t1_ParamLimits

0xb7a0,	// (0x0000b7a0) tabs_2_active_pane_srt_t1

0x4dea,	// (0x00004dea) bg_active_tab_pane_g1_cp1_srt

0x1edb,	// (0x00001edb) bg_active_tab_pane_g2_cp1_srt

0x4df3,	// (0x00004df3) bg_active_tab_pane_g3_cp1_srt

0x4db7,	// (0x00004db7) tabs_3_active_pane_srt_ParamLimits

0x4db7,	// (0x00004db7) tabs_3_active_pane_srt

0x4dc8,	// (0x00004dc8) tabs_3_passive_pane_cp_srt_ParamLimits

0x4dc8,	// (0x00004dc8) tabs_3_passive_pane_cp_srt

0x4dd9,	// (0x00004dd9) tabs_3_passive_pane_srt_ParamLimits

0x4dd9,	// (0x00004dd9) tabs_3_passive_pane_srt

0x345c,	// (0x0000345c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x345c,	// (0x0000345c) bg_passive_tab_pane_cp2_srt

0x25aa,	// (0x000025aa) bg_passive_tab_pane_g1_cp2_srt

0x1edb,	// (0x00001edb) bg_passive_tab_pane_g2_cp2_srt

0x25b3,	// (0x000025b3) bg_passive_tab_pane_g3_cp2_srt

0x0798,	// (0x00000798) bg_active_tab_pane_cp2_srt_ParamLimits

0x0798,	// (0x00000798) bg_active_tab_pane_cp2_srt

0x4daf,	// (0x00004daf) tabs_3_active_pane_srt_g1

0xb007,	// (0x0000b007) tabs_3_active_pane_srt_t1_ParamLimits

0xb007,	// (0x0000b007) tabs_3_active_pane_srt_t1

0x25aa,	// (0x000025aa) bg_active_tab_pane_g1_cp2_srt

0x1edb,	// (0x00001edb) bg_active_tab_pane_g2_cp2_srt

0x25b3,	// (0x000025b3) bg_active_tab_pane_g3_cp2_srt

0x4d67,	// (0x00004d67) tabs_4_active_pane_srt_ParamLimits

0x4d67,	// (0x00004d67) tabs_4_active_pane_srt

0x4d79,	// (0x00004d79) tabs_4_passive_pane_cp2_srt_ParamLimits

0x4d79,	// (0x00004d79) tabs_4_passive_pane_cp2_srt

0x2848,	// (0x00002848) aid_size_cell_toolbar

0xbd0e,	// (0x0000bd0e) main_idle_act_pane_ParamLimits

0x2a36,	// (0x00002a36) popup_large_graphic_colour_window_ParamLimits

0xc26c,	// (0x0000c26c) popup_toolbar_window_ParamLimits

0xc26c,	// (0x0000c26c) popup_toolbar_window

0x4b55,	// (0x00004b55) list_single_graphic_2heading_pane_ParamLimits

0x4b55,	// (0x00004b55) list_single_graphic_2heading_pane

0x1847,	// (0x00001847) aid_size_cell_apps_grid_lsc_pane

0x1859,	// (0x00001859) aid_size_cell_apps_grid_prt_pane

0x28cb,	// (0x000028cb) bg_wml_button_pane_cp1_ParamLimits

0x28cb,	// (0x000028cb) bg_wml_button_pane_cp1

0x36dd,	// (0x000036dd) form_midp_field_text_pane_t1_ParamLimits

0x345c,	// (0x0000345c) input_focus_pane_cp050_ParamLimits

0x36fe,	// (0x000036fe) list_midp_form_text_pane_ParamLimits

0x36ba,	// (0x000036ba) input_focus_pane_cp051_ParamLimits

0x36ce,	// (0x000036ce) list_midp_choice_pane_ParamLimits

0x358c,	// (0x0000358c) list_single_2graphic_pane_cp3_ParamLimits

0x358c,	// (0x0000358c) list_single_2graphic_pane_cp3

0x359f,	// (0x0000359f) list_single_midp_graphic_pane_ParamLimits

0x359f,	// (0x0000359f) list_single_midp_graphic_pane

0x3173,	// (0x00003173) list_single_graphic_2heading_pane_g1_ParamLimits

0x3173,	// (0x00003173) list_single_graphic_2heading_pane_g1

0x21c9,	// (0x000021c9) list_single_graphic_2heading_pane_g4_ParamLimits

0x21c9,	// (0x000021c9) list_single_graphic_2heading_pane_g4

0x317f,	// (0x0000317f) list_single_graphic_2heading_pane_g5_ParamLimits

0x317f,	// (0x0000317f) list_single_graphic_2heading_pane_g5

0x0002,

0xa5f0,	// (0x0000a5f0) list_single_graphic_2heading_pane_g_ParamLimits

0xa5f0,	// (0x0000a5f0) list_single_graphic_2heading_pane_g

0x318b,	// (0x0000318b) list_single_graphic_2heading_pane_t1_ParamLimits

0x318b,	// (0x0000318b) list_single_graphic_2heading_pane_t1

0x319f,	// (0x0000319f) list_single_graphic_2heading_pane_t2_ParamLimits

0x319f,	// (0x0000319f) list_single_graphic_2heading_pane_t2

0x31b9,	// (0x000031b9) list_single_graphic_2heading_pane_t3_ParamLimits

0x31b9,	// (0x000031b9) list_single_graphic_2heading_pane_t3

0x0002,

0xa5f7,	// (0x0000a5f7) list_single_graphic_2heading_pane_t_ParamLimits

0xa5f7,	// (0x0000a5f7) list_single_graphic_2heading_pane_t

0x31d1,	// (0x000031d1) bg_popup_sub_pane_cp2

0x31f7,	// (0x000031f7) grid_toobar_pane

0x322d,	// (0x0000322d) cell_toolbar_pane_ParamLimits

0x322d,	// (0x0000322d) cell_toolbar_pane

0x3276,	// (0x00003276) cell_toolbar_pane_g1_ParamLimits

0x3276,	// (0x00003276) cell_toolbar_pane_g1

0x3288,	// (0x00003288) cell_toolbar_pane_g2_ParamLimits

0x3288,	// (0x00003288) cell_toolbar_pane_g2

0x0001,

0xa605,	// (0x0000a605) cell_toolbar_pane_g_ParamLimits

0xa605,	// (0x0000a605) cell_toolbar_pane_g

0x32aa,	// (0x000032aa) grid_highlight_pane_cp2_ParamLimits

0x32aa,	// (0x000032aa) grid_highlight_pane_cp2

0x32c4,	// (0x000032c4) toolbar_button_pane

0x32d0,	// (0x000032d0) toolbar_button_pane_g1

0x32d8,	// (0x000032d8) toolbar_button_pane_g2

0x32e0,	// (0x000032e0) toolbar_button_pane_g3

0x32e8,	// (0x000032e8) toolbar_button_pane_g4

0x32f0,	// (0x000032f0) toolbar_button_pane_g5

0x32f8,	// (0x000032f8) toolbar_button_pane_g6

0x3300,	// (0x00003300) toolbar_button_pane_g7

0x3308,	// (0x00003308) toolbar_button_pane_g8

0x3310,	// (0x00003310) toolbar_button_pane_g9

0x0009,

0xa60a,	// (0x0000a60a) toolbar_button_pane_g

0x3320,	// (0x00003320) list_single_2graphic_pane_g1_cp3_ParamLimits

0x3320,	// (0x00003320) list_single_2graphic_pane_g1_cp3

0xc65e,	// (0x0000c65e) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc65e,	// (0x0000c65e) list_single_2graphic_pane_g2_cp3

0x21d5,	// (0x000021d5) list_single_2graphic_pane_g3_cp3

0x333b,	// (0x0000333b) list_single_2graphic_pane_g4_cp3_ParamLimits

0x333b,	// (0x0000333b) list_single_2graphic_pane_g4_cp3

0x3347,	// (0x00003347) list_single_2graphic_pane_t1_cp3_ParamLimits

0x3347,	// (0x00003347) list_single_2graphic_pane_t1_cp3

0x21c9,	// (0x000021c9) list_single_midp_graphic_pane_g2_ParamLimits

0x21c9,	// (0x000021c9) list_single_midp_graphic_pane_g2

0x2850,	// (0x00002850) aid_zoom_text_primary

0x2858,	// (0x00002858) aid_zoom_text_secondary

0x2662,	// (0x00002662) status_small_pane_g7_ParamLimits

0x2662,	// (0x00002662) status_small_pane_g7

0x2685,	// (0x00002685) status_small_pane_t1_ParamLimits

0xaf4f,	// (0x0000af4f) title_pane_g2

0x0003,

0xea23,	// (0x0000ea23) title_pane_g

0xb24b,	// (0x0000b24b) aid_size_cell_colour_1_pane_ParamLimits

0xb24b,	// (0x0000b24b) aid_size_cell_colour_1_pane

0xb25f,	// (0x0000b25f) aid_size_cell_colour_2_pane_ParamLimits

0xb25f,	// (0x0000b25f) aid_size_cell_colour_2_pane

0xb273,	// (0x0000b273) aid_size_cell_colour_3_pane_ParamLimits

0xb273,	// (0x0000b273) aid_size_cell_colour_3_pane

0xb287,	// (0x0000b287) aid_size_cell_colour_4_pane_ParamLimits

0xb287,	// (0x0000b287) aid_size_cell_colour_4_pane

0x16f6,	// (0x000016f6) title_pane_stacon_g1_ParamLimits

0x16f6,	// (0x000016f6) title_pane_stacon_g1

0x3ace,	// (0x00003ace) popup_note_wait_window_g3_ParamLimits

0x3ace,	// (0x00003ace) popup_note_wait_window_g3

0x3b44,	// (0x00003b44) popup_note_wait_window_t5_ParamLimits

0x3b44,	// (0x00003b44) popup_note_wait_window_t5

0x024e,	// (0x0000024e) main_feb_china_hwr_fs_writing_pane

0xbd6f,	// (0x0000bd6f) popup_feb_china_hwr_fs_window_ParamLimits

0xbd6f,	// (0x0000bd6f) popup_feb_china_hwr_fs_window

0xc66f,	// (0x0000c66f) aid_size_cell_hwr_fs_ParamLimits

0xc66f,	// (0x0000c66f) aid_size_cell_hwr_fs

0x345c,	// (0x0000345c) bg_popup_sub_pane_cp3_ParamLimits

0x345c,	// (0x0000345c) bg_popup_sub_pane_cp3

0xc684,	// (0x0000c684) grid_hwr_fs_pane_ParamLimits

0xc684,	// (0x0000c684) grid_hwr_fs_pane

0x347c,	// (0x0000347c) linegrid_hwr_fs_pane_ParamLimits

0x347c,	// (0x0000347c) linegrid_hwr_fs_pane

0xc69c,	// (0x0000c69c) cell_hwr_fs_pane_ParamLimits

0xc69c,	// (0x0000c69c) cell_hwr_fs_pane

0x34aa,	// (0x000034aa) linegrid_hwr_fs_pane_g1_ParamLimits

0x34aa,	// (0x000034aa) linegrid_hwr_fs_pane_g1

0xc6bc,	// (0x0000c6bc) linegrid_hwr_fs_pane_g2_ParamLimits

0xc6bc,	// (0x0000c6bc) linegrid_hwr_fs_pane_g2

0x34c8,	// (0x000034c8) linegrid_hwr_fs_pane_g3_ParamLimits

0x34c8,	// (0x000034c8) linegrid_hwr_fs_pane_g3

0x34d4,	// (0x000034d4) linegrid_hwr_fs_pane_g4_ParamLimits

0x34d4,	// (0x000034d4) linegrid_hwr_fs_pane_g4

0x34ee,	// (0x000034ee) linegrid_hwr_fs_pane_g5_ParamLimits

0x34ee,	// (0x000034ee) linegrid_hwr_fs_pane_g5

0x0004,

0xeb58,	// (0x0000eb58) linegrid_hwr_fs_pane_g_ParamLimits

0xeb58,	// (0x0000eb58) linegrid_hwr_fs_pane_g

0x3504,	// (0x00003504) cell_hwr_fs_pane_g1_ParamLimits

0x3504,	// (0x00003504) cell_hwr_fs_pane_g1

0x30b1,	// (0x000030b1) cell_hwr_fs_pane_g2_ParamLimits

0x30b1,	// (0x000030b1) cell_hwr_fs_pane_g2

0xc6ce,	// (0x0000c6ce) cell_hwr_fs_pane_g3_ParamLimits

0xc6ce,	// (0x0000c6ce) cell_hwr_fs_pane_g3

0xc6db,	// (0x0000c6db) cell_hwr_fs_pane_g4_ParamLimits

0xc6db,	// (0x0000c6db) cell_hwr_fs_pane_g4

0x0003,

0xeb63,	// (0x0000eb63) cell_hwr_fs_pane_g_ParamLimits

0xeb63,	// (0x0000eb63) cell_hwr_fs_pane_g

0xc6e8,	// (0x0000c6e8) cell_hwr_fs_pane_t1

0x024e,	// (0x0000024e) grid_highlight_pane_cp6

0x024e,	// (0x0000024e) main_idle_act2_pane

0x14bb,	// (0x000014bb) aid_inside_area_popup_secondary

0xc871,	// (0x0000c871) aid_inside_area_window_primary_ParamLimits

0xc871,	// (0x0000c871) aid_inside_area_window_primary

0x4f2d,	// (0x00004f2d) ai2_news_ticker_pane

0x4f35,	// (0x00004f35) aid_size_cell_ai1_link_ParamLimits

0x4f35,	// (0x00004f35) aid_size_cell_ai1_link

0xcc9c,	// (0x0000cc9c) popup_ai2_data_window_ParamLimits

0xcc9c,	// (0x0000cc9c) popup_ai2_data_window

0x4f63,	// (0x00004f63) popup_ai2_link_window_ParamLimits

0x4f63,	// (0x00004f63) popup_ai2_link_window

0x345c,	// (0x0000345c) bg_popup_sub_pane_cp4_ParamLimits

0x345c,	// (0x0000345c) bg_popup_sub_pane_cp4

0x4f77,	// (0x00004f77) grid_ai2_link_pane_ParamLimits

0x4f77,	// (0x00004f77) grid_ai2_link_pane

0x4f8e,	// (0x00004f8e) popup_ai2_link_window_g1_ParamLimits

0x4f8e,	// (0x00004f8e) popup_ai2_link_window_g1

0x4f9a,	// (0x00004f9a) popup_ai2_link_window_g2_ParamLimits

0x4f9a,	// (0x00004f9a) popup_ai2_link_window_g2

0x0001,

0xa80e,	// (0x0000a80e) popup_ai2_link_window_g_ParamLimits

0xa80e,	// (0x0000a80e) popup_ai2_link_window_g

0x4fa9,	// (0x00004fa9) ai2_mp_button_pane

0x4fb1,	// (0x00004fb1) ai2_mp_volume_pane

0x36ba,	// (0x000036ba) bg_popup_sub_pane_cp5_ParamLimits

0x36ba,	// (0x000036ba) bg_popup_sub_pane_cp5

0x4fb9,	// (0x00004fb9) heading_ai2_gene_pane_ParamLimits

0x4fb9,	// (0x00004fb9) heading_ai2_gene_pane

0x4fc5,	// (0x00004fc5) list_ai2_gene_pane_ParamLimits

0x4fc5,	// (0x00004fc5) list_ai2_gene_pane

0x500d,	// (0x0000500d) cell_ai2_link_pane_ParamLimits

0x500d,	// (0x0000500d) cell_ai2_link_pane

0x5023,	// (0x00005023) cell_ai2_link_pane_g1

0x024e,	// (0x0000024e) grid_highlight_pane_cp7

0x50f3,	// (0x000050f3) ai2_mp_volume_pane_g1

0x50fb,	// (0x000050fb) ai2_mp_volume_pane_g2

0xccc6,	// (0x0000ccc6) list_ai2_gene_pane_t1

0x5103,	// (0x00005103) ai2_mp_volume_pane_g3

0x0002,

0xa827,	// (0x0000a827) ai2_mp_volume_pane_g

0x510b,	// (0x0000510b) volume_small_pane_cp3

0x5114,	// (0x00005114) aid_size_cell_ai2_button

0x511c,	// (0x0000511c) grid_ai2_button_pane

0x5125,	// (0x00005125) cell_ai2_button_pane_ParamLimits

0x5125,	// (0x00005125) cell_ai2_button_pane

0x002a,	// (0x0000002a) cell_ai2_button_pane_g1

0x024e,	// (0x0000024e) grid_highlight_pane_cp8

0x50b3,	// (0x000050b3) ai2_gene_pane_t1_ParamLimits

0x50b3,	// (0x000050b3) ai2_gene_pane_t1

0xbcd9,	// (0x0000bcd9) aid_height_parent_landscape

0x497f,	// (0x0000497f) aid_height_set_list

0x498b,	// (0x0000498b) aid_size_parent

0x4cfa,	// (0x00004cfa) aid_size_cell_graphic_pane_ParamLimits

0x4fd5,	// (0x00004fd5) popup_ai2_data_window_g1_ParamLimits

0x4fd5,	// (0x00004fd5) popup_ai2_data_window_g1

0x4fe1,	// (0x00004fe1) ai2_news_ticker_pane_g1

0x4fe9,	// (0x00004fe9) ai2_news_ticker_pane_g2

0x0001,

0xa813,	// (0x0000a813) ai2_news_ticker_pane_g

0x4ff1,	// (0x00004ff1) ai2_news_ticker_pane_t1

0x4fff,	// (0x00004fff) ai2_news_ticker_pane_t2

0x0001,

0xa818,	// (0x0000a818) ai2_news_ticker_pane_t

0x502c,	// (0x0000502c) heading_ai2_gene_pane_g1

0x5034,	// (0x00005034) heading_ai2_gene_pane_t1_ParamLimits

0x5034,	// (0x00005034) heading_ai2_gene_pane_t1

0x5049,	// (0x00005049) list_highlight_pane_cp6

0xccb0,	// (0x0000ccb0) ai2_gene_pane_ParamLimits

0xccb0,	// (0x0000ccb0) ai2_gene_pane

0xccd4,	// (0x0000ccd4) list_ai2_gene_pane_t2

0x0001,

0xec00,	// (0x0000ec00) list_ai2_gene_pane_t

0x5084,	// (0x00005084) list_highlight_pane_cp8_ParamLimits

0x5084,	// (0x00005084) list_highlight_pane_cp8

0x5095,	// (0x00005095) ai2_gene_pane_g1_ParamLimits

0x5095,	// (0x00005095) ai2_gene_pane_g1

0x50a7,	// (0x000050a7) ai2_gene_pane_g2_ParamLimits

0x50a7,	// (0x000050a7) ai2_gene_pane_g2

0x0001,

0xa822,	// (0x0000a822) ai2_gene_pane_g_ParamLimits

0xa822,	// (0x0000a822) ai2_gene_pane_g

0x0c92,	// (0x00000c92) scroll_pane_cp12

0xbc98,	// (0x0000bc98) control_pane_t3_ParamLimits

0xbc98,	// (0x0000bc98) control_pane_t3

0x2676,	// (0x00002676) status_small_pane_g8_ParamLimits

0x2676,	// (0x00002676) status_small_pane_g8

0xbde3,	// (0x0000bde3) popup_find_window_ParamLimits

0xbfd6,	// (0x0000bfd6) popup_note_image_window_ParamLimits

0x3254,	// (0x00003254) list_double2_graphic_pane_vc_g1_ParamLimits

0x3254,	// (0x00003254) list_double2_graphic_pane_vc_g1

0x21c9,	// (0x000021c9) list_double2_graphic_pane_vc_g2_ParamLimits

0x21c9,	// (0x000021c9) list_double2_graphic_pane_vc_g2

0x317f,	// (0x0000317f) list_double2_graphic_pane_vc_g3_ParamLimits

0x317f,	// (0x0000317f) list_double2_graphic_pane_vc_g3

0x0002,

0xa5fe,	// (0x0000a5fe) list_double2_graphic_pane_vc_g_ParamLimits

0xa5fe,	// (0x0000a5fe) list_double2_graphic_pane_vc_g

0x3260,	// (0x00003260) list_double2_graphic_pane_vc_t1_ParamLimits

0x3260,	// (0x00003260) list_double2_graphic_pane_vc_t1

0x21c9,	// (0x000021c9) list_single_heading_pane_vc_g1_ParamLimits

0x21c9,	// (0x000021c9) list_single_heading_pane_vc_g1

0x317f,	// (0x0000317f) list_single_heading_pane_vc_g2_ParamLimits

0x317f,	// (0x0000317f) list_single_heading_pane_vc_g2

0x0001,

0xa61f,	// (0x0000a61f) list_single_heading_pane_vc_g_ParamLimits

0xa61f,	// (0x0000a61f) list_single_heading_pane_vc_g

0x3361,	// (0x00003361) list_single_heading_pane_vc_t1_ParamLimits

0x3361,	// (0x00003361) list_single_heading_pane_vc_t1

0x3377,	// (0x00003377) list_single_heading_pane_vc_t2_ParamLimits

0x3377,	// (0x00003377) list_single_heading_pane_vc_t2

0x0001,

0xa624,	// (0x0000a624) list_single_heading_pane_vc_t_ParamLimits

0xa624,	// (0x0000a624) list_single_heading_pane_vc_t

0x339f,	// (0x0000339f) list_setting_number_pane_vc_g1_ParamLimits

0x339f,	// (0x0000339f) list_setting_number_pane_vc_g1

0x33ab,	// (0x000033ab) list_setting_number_pane_vc_g2_ParamLimits

0x33ab,	// (0x000033ab) list_setting_number_pane_vc_g2

0x0001,

0xa629,	// (0x0000a629) list_setting_number_pane_vc_g_ParamLimits

0xa629,	// (0x0000a629) list_setting_number_pane_vc_g

0x33b7,	// (0x000033b7) list_setting_number_pane_vc_t1_ParamLimits

0x33b7,	// (0x000033b7) list_setting_number_pane_vc_t1

0x33cb,	// (0x000033cb) list_setting_number_pane_vc_t2_ParamLimits

0x33cb,	// (0x000033cb) list_setting_number_pane_vc_t2

0x33e7,	// (0x000033e7) list_setting_number_pane_vc_t3_ParamLimits

0x33e7,	// (0x000033e7) list_setting_number_pane_vc_t3

0x0002,

0xa62e,	// (0x0000a62e) list_setting_number_pane_vc_t_ParamLimits

0xa62e,	// (0x0000a62e) list_setting_number_pane_vc_t

0x340f,	// (0x0000340f) set_value_pane_vc_ParamLimits

0x340f,	// (0x0000340f) set_value_pane_vc

0x4b55,	// (0x00004b55) list_double2_graphic_pane_vc_ParamLimits

0x4b55,	// (0x00004b55) list_double2_graphic_pane_vc

0x4b69,	// (0x00004b69) list_double2_large_graphic_pane_vc_ParamLimits

0x4b69,	// (0x00004b69) list_double2_large_graphic_pane_vc

0x4b55,	// (0x00004b55) list_double2_pane_vc_ParamLimits

0x4b55,	// (0x00004b55) list_double2_pane_vc

0x4b55,	// (0x00004b55) list_double_graphic_heading_pane_vc_ParamLimits

0x4b55,	// (0x00004b55) list_double_graphic_heading_pane_vc

0x4b55,	// (0x00004b55) list_double_graphic_pane_vc_ParamLimits

0x4b55,	// (0x00004b55) list_double_graphic_pane_vc

0x4b55,	// (0x00004b55) list_double_heading_pane_vc_ParamLimits

0x4b55,	// (0x00004b55) list_double_heading_pane_vc

0x4b7a,	// (0x00004b7a) list_double_large_graphic_pane_vc_ParamLimits

0x4b7a,	// (0x00004b7a) list_double_large_graphic_pane_vc

0x4b55,	// (0x00004b55) list_double_number_pane_vc_ParamLimits

0x4b55,	// (0x00004b55) list_double_number_pane_vc

0x4b55,	// (0x00004b55) list_double_pane_vc_ParamLimits

0x4b55,	// (0x00004b55) list_double_pane_vc

0x4b55,	// (0x00004b55) list_double_time_pane_vc_ParamLimits

0x4b55,	// (0x00004b55) list_double_time_pane_vc

0x4b55,	// (0x00004b55) list_setting_number_pane_vc_ParamLimits

0x4b55,	// (0x00004b55) list_setting_number_pane_vc

0x4b55,	// (0x00004b55) list_setting_pane_vc_ParamLimits

0x4b55,	// (0x00004b55) list_setting_pane_vc

0x4b55,	// (0x00004b55) list_single_graphic_heading_pane_vc_ParamLimits

0x4b55,	// (0x00004b55) list_single_graphic_heading_pane_vc

0x4b55,	// (0x00004b55) list_single_heading_pane_vc_ParamLimits

0x4b55,	// (0x00004b55) list_single_heading_pane_vc

0x4b55,	// (0x00004b55) list_single_number_heading_pane_vc_ParamLimits

0x4b55,	// (0x00004b55) list_single_number_heading_pane_vc

0x3254,	// (0x00003254) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3254,	// (0x00003254) list_double_graphic_heading_pane_vc_g1

0x21c9,	// (0x000021c9) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x21c9,	// (0x000021c9) list_double_graphic_heading_pane_vc_g2

0x317f,	// (0x0000317f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x317f,	// (0x0000317f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xa5fe,	// (0x0000a5fe) list_double_graphic_heading_pane_vc_g_ParamLimits

0xa5fe,	// (0x0000a5fe) list_double_graphic_heading_pane_vc_g

0x5159,	// (0x00005159) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5159,	// (0x00005159) list_double_graphic_heading_pane_vc_t1

0x516f,	// (0x0000516f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x516f,	// (0x0000516f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xa82e,	// (0x0000a82e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xa82e,	// (0x0000a82e) list_double_graphic_heading_pane_vc_t

0x339f,	// (0x0000339f) list_setting_pane_vc_g1_ParamLimits

0x339f,	// (0x0000339f) list_setting_pane_vc_g1

0x33ab,	// (0x000033ab) list_setting_pane_vc_g2_ParamLimits

0x33ab,	// (0x000033ab) list_setting_pane_vc_g2

0x0001,

0xa629,	// (0x0000a629) list_setting_pane_vc_g_ParamLimits

0xa629,	// (0x0000a629) list_setting_pane_vc_g

0x53b5,	// (0x000053b5) list_setting_pane_vc_t1_ParamLimits

0x53b5,	// (0x000053b5) list_setting_pane_vc_t1

0x53c9,	// (0x000053c9) list_setting_pane_vc_t2_ParamLimits

0x53c9,	// (0x000053c9) list_setting_pane_vc_t2

0x0001,

0xa871,	// (0x0000a871) list_setting_pane_vc_t_ParamLimits

0xa871,	// (0x0000a871) list_setting_pane_vc_t

0x340f,	// (0x0000340f) set_value_pane_cp_vc_ParamLimits

0x340f,	// (0x0000340f) set_value_pane_cp_vc

0x21c9,	// (0x000021c9) list_single_number_heading_pane_vc_g1_ParamLimits

0x21c9,	// (0x000021c9) list_single_number_heading_pane_vc_g1

0x317f,	// (0x0000317f) list_single_number_heading_pane_vc_g2_ParamLimits

0x317f,	// (0x0000317f) list_single_number_heading_pane_vc_g2

0x0001,

0xa61f,	// (0x0000a61f) list_single_number_heading_pane_vc_g_ParamLimits

0xa61f,	// (0x0000a61f) list_single_number_heading_pane_vc_g

0x3361,	// (0x00003361) list_single_number_heading_pane_vc_t1_ParamLimits

0x3361,	// (0x00003361) list_single_number_heading_pane_vc_t1

0x53eb,	// (0x000053eb) list_single_number_heading_pane_vc_t2_ParamLimits

0x53eb,	// (0x000053eb) list_single_number_heading_pane_vc_t2

0x2205,	// (0x00002205) list_single_number_heading_pane_vc_t3_ParamLimits

0x2205,	// (0x00002205) list_single_number_heading_pane_vc_t3

0x0002,

0xa876,	// (0x0000a876) list_single_number_heading_pane_vc_t_ParamLimits

0xa876,	// (0x0000a876) list_single_number_heading_pane_vc_t

0x3254,	// (0x00003254) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3254,	// (0x00003254) list_single_graphic_heading_pane_vc_g1

0x21c9,	// (0x000021c9) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x21c9,	// (0x000021c9) list_single_graphic_heading_pane_vc_g4

0x317f,	// (0x0000317f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x317f,	// (0x0000317f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xa5fe,	// (0x0000a5fe) list_single_graphic_heading_pane_vc_g_ParamLimits

0xa5fe,	// (0x0000a5fe) list_single_graphic_heading_pane_vc_g

0x3361,	// (0x00003361) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3361,	// (0x00003361) list_single_graphic_heading_pane_vc_t1

0x53fd,	// (0x000053fd) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x53fd,	// (0x000053fd) list_single_graphic_heading_pane_vc_t2

0x0001,

0xa87d,	// (0x0000a87d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xa87d,	// (0x0000a87d) list_single_graphic_heading_pane_vc_t

0x21c9,	// (0x000021c9) list_double2_pane_vc_g1_ParamLimits

0x21c9,	// (0x000021c9) list_double2_pane_vc_g1

0x317f,	// (0x0000317f) list_double2_pane_vc_g2_ParamLimits

0x317f,	// (0x0000317f) list_double2_pane_vc_g2

0x0001,

0xa61f,	// (0x0000a61f) list_double2_pane_vc_g_ParamLimits

0xa61f,	// (0x0000a61f) list_double2_pane_vc_g

0x540f,	// (0x0000540f) list_double2_pane_vc_t1_ParamLimits

0x540f,	// (0x0000540f) list_double2_pane_vc_t1

0x0d4a,	// (0x00000d4a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0d4a,	// (0x00000d4a) list_double2_large_graphic_pane_vc_g1

0x0d56,	// (0x00000d56) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0d56,	// (0x00000d56) list_double2_large_graphic_pane_vc_g2

0x0d62,	// (0x00000d62) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0d62,	// (0x00000d62) list_double2_large_graphic_pane_vc_g3

0x0002,

0xa42a,	// (0x0000a42a) list_double2_large_graphic_pane_vc_g_ParamLimits

0xa42a,	// (0x0000a42a) list_double2_large_graphic_pane_vc_g

0x0d76,	// (0x00000d76) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0d76,	// (0x00000d76) list_double2_large_graphic_pane_vc_t1

0x5425,	// (0x00005425) list_double_time_pane_vc_g1_ParamLimits

0x5425,	// (0x00005425) list_double_time_pane_vc_g1

0x5431,	// (0x00005431) list_double_time_pane_vc_g2_ParamLimits

0x5431,	// (0x00005431) list_double_time_pane_vc_g2

0x0001,

0xa882,	// (0x0000a882) list_double_time_pane_vc_g_ParamLimits

0xa882,	// (0x0000a882) list_double_time_pane_vc_g

0x543d,	// (0x0000543d) list_double_time_pane_vc_t1_ParamLimits

0x543d,	// (0x0000543d) list_double_time_pane_vc_t1

0x545b,	// (0x0000545b) list_double_time_pane_vc_t2_ParamLimits

0x545b,	// (0x0000545b) list_double_time_pane_vc_t2

0x547f,	// (0x0000547f) list_double_time_pane_vc_t3_ParamLimits

0x547f,	// (0x0000547f) list_double_time_pane_vc_t3

0x5491,	// (0x00005491) list_double_time_pane_vc_t4_ParamLimits

0x5491,	// (0x00005491) list_double_time_pane_vc_t4

0x0003,

0xa887,	// (0x0000a887) list_double_time_pane_vc_t_ParamLimits

0xa887,	// (0x0000a887) list_double_time_pane_vc_t

0x21c9,	// (0x000021c9) list_double_pane_vc_g1_ParamLimits

0x21c9,	// (0x000021c9) list_double_pane_vc_g1

0x317f,	// (0x0000317f) list_double_pane_vc_g2_ParamLimits

0x317f,	// (0x0000317f) list_double_pane_vc_g2

0x0001,

0xa61f,	// (0x0000a61f) list_double_pane_vc_g_ParamLimits

0xa61f,	// (0x0000a61f) list_double_pane_vc_g

0x54a3,	// (0x000054a3) list_double_pane_vc_t1_ParamLimits

0x54a3,	// (0x000054a3) list_double_pane_vc_t1

0x54b5,	// (0x000054b5) list_double_pane_vc_t2_ParamLimits

0x54b5,	// (0x000054b5) list_double_pane_vc_t2

0x0001,

0xa890,	// (0x0000a890) list_double_pane_vc_t_ParamLimits

0xa890,	// (0x0000a890) list_double_pane_vc_t

0x21c9,	// (0x000021c9) list_double_number_pane_vc_g1_ParamLimits

0x21c9,	// (0x000021c9) list_double_number_pane_vc_g1

0x317f,	// (0x0000317f) list_double_number_pane_vc_g2_ParamLimits

0x317f,	// (0x0000317f) list_double_number_pane_vc_g2

0x0001,

0xa61f,	// (0x0000a61f) list_double_number_pane_vc_g_ParamLimits

0xa61f,	// (0x0000a61f) list_double_number_pane_vc_g

0x54cb,	// (0x000054cb) list_double_number_pane_vc_t1_ParamLimits

0x54cb,	// (0x000054cb) list_double_number_pane_vc_t1

0x54df,	// (0x000054df) list_double_number_pane_vc_t2_ParamLimits

0x54df,	// (0x000054df) list_double_number_pane_vc_t2

0x54f1,	// (0x000054f1) list_double_number_pane_vc_t3_ParamLimits

0x54f1,	// (0x000054f1) list_double_number_pane_vc_t3

0x0002,

0xa895,	// (0x0000a895) list_double_number_pane_vc_t_ParamLimits

0xa895,	// (0x0000a895) list_double_number_pane_vc_t

0x5507,	// (0x00005507) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5507,	// (0x00005507) list_double_large_graphic_pane_vc_g1

0x552f,	// (0x0000552f) list_double_large_graphic_pane_vc_g2_ParamLimits

0x552f,	// (0x0000552f) list_double_large_graphic_pane_vc_g2

0x5543,	// (0x00005543) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5543,	// (0x00005543) list_double_large_graphic_pane_vc_g3

0x5552,	// (0x00005552) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5552,	// (0x00005552) list_double_large_graphic_pane_vc_g4

0x0003,

0xa89c,	// (0x0000a89c) list_double_large_graphic_pane_vc_g_ParamLimits

0xa89c,	// (0x0000a89c) list_double_large_graphic_pane_vc_g

0x5562,	// (0x00005562) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5562,	// (0x00005562) list_double_large_graphic_pane_vc_t1

0x557c,	// (0x0000557c) list_double_large_graphic_pane_vc_t2_ParamLimits

0x557c,	// (0x0000557c) list_double_large_graphic_pane_vc_t2

0x0001,

0xa8a5,	// (0x0000a8a5) list_double_large_graphic_pane_vc_t_ParamLimits

0xa8a5,	// (0x0000a8a5) list_double_large_graphic_pane_vc_t

0x21c9,	// (0x000021c9) list_double_heading_pane_vc_g1_ParamLimits

0x21c9,	// (0x000021c9) list_double_heading_pane_vc_g1

0x317f,	// (0x0000317f) list_double_heading_pane_vc_g2_ParamLimits

0x317f,	// (0x0000317f) list_double_heading_pane_vc_g2

0x0001,

0xa61f,	// (0x0000a61f) list_double_heading_pane_vc_g_ParamLimits

0xa61f,	// (0x0000a61f) list_double_heading_pane_vc_g

0x559c,	// (0x0000559c) list_double_heading_pane_vc_t1_ParamLimits

0x559c,	// (0x0000559c) list_double_heading_pane_vc_t1

0x3361,	// (0x00003361) list_double_heading_pane_vc_t2_ParamLimits

0x3361,	// (0x00003361) list_double_heading_pane_vc_t2

0x0001,

0xa8aa,	// (0x0000a8aa) list_double_heading_pane_vc_t_ParamLimits

0xa8aa,	// (0x0000a8aa) list_double_heading_pane_vc_t

0x55ae,	// (0x000055ae) list_double_graphic_pane_vc_g1_ParamLimits

0x55ae,	// (0x000055ae) list_double_graphic_pane_vc_g1

0x55ba,	// (0x000055ba) list_double_graphic_pane_vc_g2_ParamLimits

0x55ba,	// (0x000055ba) list_double_graphic_pane_vc_g2

0x21c9,	// (0x000021c9) list_double_graphic_pane_vc_g3_ParamLimits

0x21c9,	// (0x000021c9) list_double_graphic_pane_vc_g3

0x0003,

0xa8af,	// (0x0000a8af) list_double_graphic_pane_vc_g_ParamLimits

0xa8af,	// (0x0000a8af) list_double_graphic_pane_vc_g

0x55d7,	// (0x000055d7) list_double_graphic_pane_vc_t1_ParamLimits

0x55d7,	// (0x000055d7) list_double_graphic_pane_vc_t1

0x55f5,	// (0x000055f5) list_double_graphic_pane_vc_t2_ParamLimits

0x55f5,	// (0x000055f5) list_double_graphic_pane_vc_t2

0x0001,

0xa8b8,	// (0x0000a8b8) list_double_graphic_pane_vc_t_ParamLimits

0xa8b8,	// (0x0000a8b8) list_double_graphic_pane_vc_t

0x0044,	// (0x00000044) aid_size_cell_fastswap

0xad81,	// (0x0000ad81) aid_size_cell_touch_ParamLimits

0xad81,	// (0x0000ad81) aid_size_cell_touch

0x0278,	// (0x00000278) popup_fast_swap_wide_window_ParamLimits

0x0278,	// (0x00000278) popup_fast_swap_wide_window

0xaee2,	// (0x0000aee2) touch_pane_ParamLimits

0xaee2,	// (0x0000aee2) touch_pane

0x112d,	// (0x0000112d) button_value_adjust_pane_cp2

0x1135,	// (0x00001135) button_value_adjust_pane_cp4

0x1155,	// (0x00001155) form_field_data_pane_cp2

0xb64e,	// (0x0000b64e) form_field_data_wide_pane_cp2

0x191d,	// (0x0000191d) bg_scroll_pane_ParamLimits

0x193c,	// (0x0000193c) scroll_handle_pane_ParamLimits

0x1950,	// (0x00001950) scroll_sc2_down_pane_ParamLimits

0x1950,	// (0x00001950) scroll_sc2_down_pane

0x1977,	// (0x00001977) scroll_sc2_up_pane_ParamLimits

0x1977,	// (0x00001977) scroll_sc2_up_pane

0xcdf6,	// (0x0000cdf6) grid_wheel_folder_pane_g1_ParamLimits

0xcdf6,	// (0x0000cdf6) grid_wheel_folder_pane_g1

0x2016,	// (0x00002016) clock_nsta_pane_cp2_ParamLimits

0x2016,	// (0x00002016) clock_nsta_pane_cp2

0xbaab,	// (0x0000baab) listscroll_midp_pane_ParamLimits

0xbaba,	// (0x0000baba) midp_canvas_pane

0x2836,	// (0x00002836) nsta_clock_indic_pane

0x2894,	// (0x00002894) listscroll_form_pane_vc

0x28b9,	// (0x000028b9) listscroll_set_pane_vc_ParamLimits

0x28b9,	// (0x000028b9) listscroll_set_pane_vc

0xc3a2,	// (0x0000c3a2) clock_nsta_pane

0xc3c5,	// (0x0000c3c5) indicator_nsta_pane

0x31d1,	// (0x000031d1) bg_popup_sub_pane_cp2_ParamLimits

0x31e5,	// (0x000031e5) find_pane_cp2_ParamLimits

0x31e5,	// (0x000031e5) find_pane_cp2

0x31f7,	// (0x000031f7) grid_toobar_pane_ParamLimits

0x341b,	// (0x0000341b) list_form_gen_pane_vc_ParamLimits

0x341b,	// (0x0000341b) list_form_gen_pane_vc

0x3431,	// (0x00003431) scroll_pane_cp8_vc_ParamLimits

0x3431,	// (0x00003431) scroll_pane_cp8_vc

0x3542,	// (0x00003542) data_form_wide_pane_vc_ParamLimits

0x3542,	// (0x00003542) data_form_wide_pane_vc

0x354e,	// (0x0000354e) form_field_data_wide_pane_vc_g1

0x3556,	// (0x00003556) form_field_data_wide_pane_vc_t1_ParamLimits

0x3556,	// (0x00003556) form_field_data_wide_pane_vc_t1

0x11fd,	// (0x000011fd) input_focus_pane_cp6_vc_ParamLimits

0x11fd,	// (0x000011fd) input_focus_pane_cp6_vc

0xc728,	// (0x0000c728) list_midp_pane_ParamLimits

0x4d5b,	// (0x00004d5b) scroll_pane_cp16_ParamLimits

0x4d5b,	// (0x00004d5b) scroll_pane_cp16

0x38b4,	// (0x000038b4) button_value_adjust_pane_ParamLimits

0x38b4,	// (0x000038b4) button_value_adjust_pane

0xca38,	// (0x0000ca38) button_value_adjust_pane_cp6_ParamLimits

0xca38,	// (0x0000ca38) button_value_adjust_pane_cp6

0xcb42,	// (0x0000cb42) settings_code_pane_cp_ParamLimits

0xcb42,	// (0x0000cb42) settings_code_pane_cp

0x002a,	// (0x0000002a) cell_touch_pane_g1

0x002a,	// (0x0000002a) cell_touch_pane_g2

0x0001,

0xa543,	// (0x0000a543) cell_touch_pane_g

0xcce2,	// (0x0000cce2) cell_touch_pane_cp_ParamLimits

0xcce2,	// (0x0000cce2) cell_touch_pane_cp

0xccfe,	// (0x0000ccfe) cell_touch_pane_ParamLimits

0xccfe,	// (0x0000ccfe) cell_touch_pane

0x002a,	// (0x0000002a) scroll_sc2_down_pane_g1

0x002a,	// (0x0000002a) scroll_sc2_up_pane_g1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp4_vc

0x5187,	// (0x00005187) list_set_graphic_pane_vc_g1_ParamLimits

0x5187,	// (0x00005187) list_set_graphic_pane_vc_g1

0x5193,	// (0x00005193) list_set_graphic_pane_vc_g2_ParamLimits

0x5193,	// (0x00005193) list_set_graphic_pane_vc_g2

0x0001,

0xa833,	// (0x0000a833) list_set_graphic_pane_vc_g_ParamLimits

0xa833,	// (0x0000a833) list_set_graphic_pane_vc_g

0x519f,	// (0x0000519f) text_primary_small_cp13_vc_ParamLimits

0x519f,	// (0x0000519f) text_primary_small_cp13_vc

0x51b7,	// (0x000051b7) list_set_graphic_pane_vc_ParamLimits

0x51b7,	// (0x000051b7) list_set_graphic_pane_vc

0x024e,	// (0x0000024e) input_focus_pane_cp2_vc

0x002a,	// (0x0000002a) setting_code_pane_vc_g1

0x51ca,	// (0x000051ca) setting_code_pane_vc_t1

0x51d8,	// (0x000051d8) set_text_pane_vc_t1_ParamLimits

0x51d8,	// (0x000051d8) set_text_pane_vc_t1

0x024e,	// (0x0000024e) input_focus_pane_cp1_vc

0x51f3,	// (0x000051f3) list_set_text_pane_vc

0x002a,	// (0x0000002a) setting_text_pane_vc_g1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp2_vc

0x51fd,	// (0x000051fd) setting_slider_graphic_pane_vc_g1

0x5205,	// (0x00005205) setting_slider_graphic_pane_vc_t1

0x5213,	// (0x00005213) setting_slider_graphic_pane_vc_t2

0x0001,

0xa838,	// (0x0000a838) setting_slider_graphic_pane_vc_t

0x5221,	// (0x00005221) slider_set_pane_cp_vc

0x5229,	// (0x00005229) slider_set_pane_vc_g1

0x5232,	// (0x00005232) slider_set_pane_vc_g2

0x0006,

0xa83d,	// (0x0000a83d) slider_set_pane_vc_g

0x1320,	// (0x00001320) set_opt_bg_pane_g1_copy1

0x1328,	// (0x00001328) set_opt_bg_pane_g2_copy1

0x525e,	// (0x0000525e) set_opt_bg_pane_g3_copy1

0x1338,	// (0x00001338) set_opt_bg_pane_g4_copy1

0x1340,	// (0x00001340) set_opt_bg_pane_g5_copy1

0x1348,	// (0x00001348) set_opt_bg_pane_g6_copy1

0x5266,	// (0x00005266) set_opt_bg_pane_g7_copy1

0x526e,	// (0x0000526e) set_opt_bg_pane_g8_copy1

0x5276,	// (0x00005276) set_opt_bg_pane_g9_copy1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp_vc

0x527e,	// (0x0000527e) setting_slider_pane_vc_t1

0x5205,	// (0x00005205) setting_slider_pane_vc_t2

0x5213,	// (0x00005213) setting_slider_pane_vc_t3

0x0002,

0xa84c,	// (0x0000a84c) setting_slider_pane_vc_t

0x5221,	// (0x00005221) slider_set_pane_vc

0x4084,	// (0x00004084) volume_set_pane_vc_g1

0x528d,	// (0x0000528d) volume_set_pane_vc_g2

0x5296,	// (0x00005296) volume_set_pane_vc_g3

0x529f,	// (0x0000529f) volume_set_pane_vc_g4

0x52a8,	// (0x000052a8) volume_set_pane_vc_g5

0x52b1,	// (0x000052b1) volume_set_pane_vc_g6

0x52ba,	// (0x000052ba) volume_set_pane_vc_g7

0x52c3,	// (0x000052c3) volume_set_pane_vc_g8

0x52cc,	// (0x000052cc) volume_set_pane_vc_g9

0x52d5,	// (0x000052d5) volume_set_pane_vc_g10

0x0009,

0xa853,	// (0x0000a853) volume_set_pane_vc_g

0x52de,	// (0x000052de) volume_set_pane_vc

0x52e6,	// (0x000052e6) button_value_adjust_pane_cp1_vc

0x52f0,	// (0x000052f0) list_highlight_pane_cp2_vc

0x52f9,	// (0x000052f9) list_set_pane_vc_ParamLimits

0x52f9,	// (0x000052f9) list_set_pane_vc

0x534b,	// (0x0000534b) main_pane_set_vc_t1_ParamLimits

0x534b,	// (0x0000534b) main_pane_set_vc_t1

0x5360,	// (0x00005360) main_pane_set_vc_t2_ParamLimits

0x5360,	// (0x00005360) main_pane_set_vc_t2

0x5372,	// (0x00005372) main_pane_set_vc_t3_ParamLimits

0x5372,	// (0x00005372) main_pane_set_vc_t3

0x5384,	// (0x00005384) main_pane_set_vc_t4_ParamLimits

0x5384,	// (0x00005384) main_pane_set_vc_t4

0x0003,

0xa868,	// (0x0000a868) main_pane_set_vc_t_ParamLimits

0xa868,	// (0x0000a868) main_pane_set_vc_t

0x5396,	// (0x00005396) setting_code_pane_vc_ParamLimits

0x5396,	// (0x00005396) setting_code_pane_vc

0x53a5,	// (0x000053a5) setting_slider_graphic_pane_vc

0x53a5,	// (0x000053a5) setting_slider_pane_vc

0x53a5,	// (0x000053a5) setting_text_pane_vc

0x53a5,	// (0x000053a5) setting_volume_pane_vc

0x53ad,	// (0x000053ad) scroll_pane_cp121_vc

0x1124,	// (0x00001124) set_content_pane_vc

0x5613,	// (0x00005613) button_value_adjust_pane_g1

0x561c,	// (0x0000561c) button_value_adjust_pane_g2

0x0001,

0xa8bd,	// (0x0000a8bd) button_value_adjust_pane_g

0x5625,	// (0x00005625) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5625,	// (0x00005625) form_field_slider_wide_pane_vc_t1

0x563b,	// (0x0000563b) form_field_slider_wide_pane_vc_t2_ParamLimits

0x563b,	// (0x0000563b) form_field_slider_wide_pane_vc_t2

0x0002,

0xa8c2,	// (0x0000a8c2) form_field_slider_wide_pane_vc_t_ParamLimits

0xa8c2,	// (0x0000a8c2) form_field_slider_wide_pane_vc_t

0x0798,	// (0x00000798) input_focus_pane_cp10_vc_ParamLimits

0x0798,	// (0x00000798) input_focus_pane_cp10_vc

0x5666,	// (0x00005666) slider_cont_pane_cp1_vc_ParamLimits

0x5666,	// (0x00005666) slider_cont_pane_cp1_vc

0x5229,	// (0x00005229) slider_form_pane_g1_cp2

0x5232,	// (0x00005232) slider_form_pane_g2_cp2

0x5681,	// (0x00005681) form_field_slider_pane_vc_t3

0x568f,	// (0x0000568f) form_field_slider_pane_vc_t4

0x569d,	// (0x0000569d) slider_form_pane_vc_ParamLimits

0x569d,	// (0x0000569d) slider_form_pane_vc

0x56aa,	// (0x000056aa) form_field_slider_pane_vc_t1_ParamLimits

0x56aa,	// (0x000056aa) form_field_slider_pane_vc_t1

0x56c0,	// (0x000056c0) form_field_slider_pane_vc_t2_ParamLimits

0x56c0,	// (0x000056c0) form_field_slider_pane_vc_t2

0x0001,

0xa8d4,	// (0x0000a8d4) form_field_slider_pane_vc_t_ParamLimits

0xa8d4,	// (0x0000a8d4) form_field_slider_pane_vc_t

0x0798,	// (0x00000798) input_focus_pane_cp9_vc_ParamLimits

0x0798,	// (0x00000798) input_focus_pane_cp9_vc

0x56d2,	// (0x000056d2) slider_cont_pane_vc_ParamLimits

0x56d2,	// (0x000056d2) slider_cont_pane_vc

0x56e4,	// (0x000056e4) list_form_graphic_pane_cp_vc_ParamLimits

0x56e4,	// (0x000056e4) list_form_graphic_pane_cp_vc

0x354e,	// (0x0000354e) form_field_popup_wide_pane_vc_g1

0x56f9,	// (0x000056f9) form_field_popup_wide_pane_vc_t1_ParamLimits

0x56f9,	// (0x000056f9) form_field_popup_wide_pane_vc_t1

0x11fd,	// (0x000011fd) input_focus_pane_cp8_vc_ParamLimits

0x11fd,	// (0x000011fd) input_focus_pane_cp8_vc

0x5738,	// (0x00005738) list_form_wide_pane_vc_ParamLimits

0x5738,	// (0x00005738) list_form_wide_pane_vc

0x5744,	// (0x00005744) list_form_graphic_pane_vc_g1

0x574c,	// (0x0000574c) list_form_graphic_pane_vc_t1_ParamLimits

0x574c,	// (0x0000574c) list_form_graphic_pane_vc_t1

0x0474,	// (0x00000474) list_highlight_pane_cp5_vc_ParamLimits

0x0474,	// (0x00000474) list_highlight_pane_cp5_vc

0x5768,	// (0x00005768) list_form_graphic_pane_vc_ParamLimits

0x5768,	// (0x00005768) list_form_graphic_pane_vc

0x354e,	// (0x0000354e) form_field_popup_pane_vc_g1

0x577e,	// (0x0000577e) form_field_popup_pane_vc_t1_ParamLimits

0x577e,	// (0x0000577e) form_field_popup_pane_vc_t1

0x11fd,	// (0x000011fd) input_focus_pane_cp7_vc_ParamLimits

0x11fd,	// (0x000011fd) input_focus_pane_cp7_vc

0x5793,	// (0x00005793) list_form_pane_vc_ParamLimits

0x5793,	// (0x00005793) list_form_pane_vc

0x579f,	// (0x0000579f) data_form_pane_vc_t1_ParamLimits

0x579f,	// (0x0000579f) data_form_pane_vc_t1

0x1320,	// (0x00001320) input_focus_pane_vc_g1

0x1328,	// (0x00001328) input_focus_pane_vc_g2

0x1330,	// (0x00001330) input_focus_pane_vc_g3

0x1338,	// (0x00001338) input_focus_pane_vc_g4

0x1340,	// (0x00001340) input_focus_pane_vc_g5

0x1348,	// (0x00001348) input_focus_pane_vc_g6

0x1350,	// (0x00001350) input_focus_pane_vc_g7

0x1358,	// (0x00001358) input_focus_pane_vc_g8

0x1360,	// (0x00001360) input_focus_pane_vc_g9

0x002a,	// (0x0000002a) input_focus_pane_vc_g10

0x0009,

0xa4cc,	// (0x0000a4cc) input_focus_pane_vc_g

0x3542,	// (0x00003542) data_form_pane_vc_ParamLimits

0x3542,	// (0x00003542) data_form_pane_vc

0x354e,	// (0x0000354e) form_field_data_pane_vc_g1

0x57ba,	// (0x000057ba) form_field_data_pane_vc_t1_ParamLimits

0x57ba,	// (0x000057ba) form_field_data_pane_vc_t1

0x11fd,	// (0x000011fd) input_focus_pane_vc_ParamLimits

0x11fd,	// (0x000011fd) input_focus_pane_vc

0x112d,	// (0x0000112d) button_value_adjust_pane_cp3_vc

0x57d0,	// (0x000057d0) button_value_adjust_pane_cp5_vc

0x57d8,	// (0x000057d8) form_field_data_pane_vc_ParamLimits

0x57d8,	// (0x000057d8) form_field_data_pane_vc

0x1155,	// (0x00001155) form_field_data_pane_vc_cp2

0x57ef,	// (0x000057ef) form_field_data_wide_pane_vc_ParamLimits

0x57ef,	// (0x000057ef) form_field_data_wide_pane_vc

0x5805,	// (0x00005805) form_field_data_wide_pane_vc_cp2

0x580d,	// (0x0000580d) form_field_popup_pane_vc_ParamLimits

0x580d,	// (0x0000580d) form_field_popup_pane_vc

0x5824,	// (0x00005824) form_field_popup_wide_pane_vc_ParamLimits

0x5824,	// (0x00005824) form_field_popup_wide_pane_vc

0x583a,	// (0x0000583a) form_field_slider_pane_vc_ParamLimits

0x583a,	// (0x0000583a) form_field_slider_pane_vc

0x584d,	// (0x0000584d) form_field_slider_wide_pane_vc_ParamLimits

0x584d,	// (0x0000584d) form_field_slider_wide_pane_vc

0xcd1c,	// (0x0000cd1c) grid_touch_1_pane_ParamLimits

0xcd1c,	// (0x0000cd1c) grid_touch_1_pane

0xcd30,	// (0x0000cd30) grid_touch_2_pane_ParamLimits

0xcd30,	// (0x0000cd30) grid_touch_2_pane

0x592c,	// (0x0000592c) touch_pane_g1_ParamLimits

0x592c,	// (0x0000592c) touch_pane_g1

0x5884,	// (0x00005884) cell_app_pane_cp_wide_ParamLimits

0x5884,	// (0x00005884) cell_app_pane_cp_wide

0x5894,	// (0x00005894) grid_popup_fast_wide_pane_ParamLimits

0x5894,	// (0x00005894) grid_popup_fast_wide_pane

0x58a8,	// (0x000058a8) scroll_pane_cp19_ParamLimits

0x58a8,	// (0x000058a8) scroll_pane_cp19

0x024e,	// (0x0000024e) bg_popup_window_pane_cp20

0x58bc,	// (0x000058bc) listscroll_popup_fast_wide_pane

0xcd5a,	// (0x0000cd5a) grid_indicator_nsta_pane

0x58d6,	// (0x000058d6) clock_nsta_pane_g1

0x58df,	// (0x000058df) clock_nsta_pane_t1

0xcd66,	// (0x0000cd66) cell_indicator_nsta_pane_ParamLimits

0xcd66,	// (0x0000cd66) cell_indicator_nsta_pane

0x592c,	// (0x0000592c) cell_indicator_nsta_pane_g1

0xcd7d,	// (0x0000cd7d) cell_indicator_nsta_pane_g2

0x0001,

0xec05,	// (0x0000ec05) cell_indicator_nsta_pane_g

0x594a,	// (0x0000594a) clock_nsta_pane_cp

0x5952,	// (0x00005952) indicator_nsta_pane_cp

0x595b,	// (0x0000595b) nsta_clock_indic_pane_g1

0x05df,	// (0x000005df) grid_indicator_pane

0x1a69,	// (0x00001a69) scroll_pane_cp29

0x1f4b,	// (0x00001f4b) indicator_nsta_pane_cp2_ParamLimits

0x1f4b,	// (0x00001f4b) indicator_nsta_pane_cp2

0x0474,	// (0x00000474) main_apps_wheel_pane

0x372d,	// (0x0000372d) form_midp_field_text_pane_ParamLimits

0x3872,	// (0x00003872) scroll_bar_cp050_ParamLimits

0x59c4,	// (0x000059c4) cell_indicator_pane_ParamLimits

0x59c4,	// (0x000059c4) cell_indicator_pane

0x59da,	// (0x000059da) cell_indicator_pane_g1

0xcd8a,	// (0x0000cd8a) grid_wheel_folder_pane_ParamLimits

0xcd8a,	// (0x0000cd8a) grid_wheel_folder_pane

0xcd98,	// (0x0000cd98) list_wheel_apps_pane_ParamLimits

0xcd98,	// (0x0000cd98) list_wheel_apps_pane

0xcda4,	// (0x0000cda4) main_apps_wheel_pane_g1_ParamLimits

0xcda4,	// (0x0000cda4) main_apps_wheel_pane_g1

0xcdb0,	// (0x0000cdb0) main_apps_wheel_pane_g2_ParamLimits

0xcdb0,	// (0x0000cdb0) main_apps_wheel_pane_g2

0x0001,

0xec0a,	// (0x0000ec0a) main_apps_wheel_pane_g_ParamLimits

0xec0a,	// (0x0000ec0a) main_apps_wheel_pane_g

0xcdbc,	// (0x0000cdbc) main_apps_wheel_pane_t1_ParamLimits

0xcdbc,	// (0x0000cdbc) main_apps_wheel_pane_t1

0xcdce,	// (0x0000cdce) list_wheel_apps_pane_g1

0xcdd6,	// (0x0000cdd6) list_wheel_apps_pane_g2

0xcdde,	// (0x0000cdde) list_wheel_apps_pane_g3

0xcde6,	// (0x0000cde6) list_wheel_apps_pane_g4

0xcdee,	// (0x0000cdee) list_wheel_apps_pane_g5

0x0004,

0xec0f,	// (0x0000ec0f) list_wheel_apps_pane_g

0x0474,	// (0x00000474) navi_icon_text_pane

0xc2ae,	// (0x0000c2ae) aid_fill_nsta

0x5a8b,	// (0x00005a8b) navi_icon_text_pane_g1

0x5a97,	// (0x00005a97) navi_icon_text_pane_t1

0x20cf,	// (0x000020cf) list_set_graphic_pane_t1_ParamLimits

0x20cf,	// (0x000020cf) list_set_graphic_pane_t1

0x3f94,	// (0x00003f94) popup_midp_note_alarm_window_t6_ParamLimits

0x3f94,	// (0x00003f94) popup_midp_note_alarm_window_t6

0x3fa6,	// (0x00003fa6) popup_midp_note_alarm_window_t7_ParamLimits

0x3fa6,	// (0x00003fa6) popup_midp_note_alarm_window_t7

0x3fb8,	// (0x00003fb8) popup_midp_note_alarm_window_t8_ParamLimits

0x3fb8,	// (0x00003fb8) popup_midp_note_alarm_window_t8

0x3fca,	// (0x00003fca) popup_midp_note_alarm_window_t9_ParamLimits

0x3fca,	// (0x00003fca) popup_midp_note_alarm_window_t9

0x3fdc,	// (0x00003fdc) popup_midp_note_alarm_window_t10_ParamLimits

0x3fdc,	// (0x00003fdc) popup_midp_note_alarm_window_t10

0x3fee,	// (0x00003fee) popup_midp_note_alarm_window_t11_ParamLimits

0x3fee,	// (0x00003fee) popup_midp_note_alarm_window_t11

0x4000,	// (0x00004000) scroll_pane_cp17_ParamLimits

0x4000,	// (0x00004000) scroll_pane_cp17

0x4084,	// (0x00004084) volume_small_pane_cp_g1

0x5aa9,	// (0x00005aa9) volume_small_pane_cp_g2

0x5ab2,	// (0x00005ab2) volume_small_pane_cp_g3

0x5abb,	// (0x00005abb) volume_small_pane_cp_g4

0x40b1,	// (0x000040b1) volume_small_pane_cp_g5

0x5ac4,	// (0x00005ac4) volume_small_pane_cp_g6

0x5acd,	// (0x00005acd) volume_small_pane_cp_g7

0x5ad6,	// (0x00005ad6) volume_small_pane_cp_g8

0x5adf,	// (0x00005adf) volume_small_pane_cp_g9

0x5ae8,	// (0x00005ae8) volume_small_pane_cp_g10

0x242c,	// (0x0000242c) midp_ticker_pane_g1_ParamLimits

0x2438,	// (0x00002438) midp_ticker_pane_g2_ParamLimits

0xa598,	// (0x0000a598) midp_ticker_pane_g_ParamLimits

0x2444,	// (0x00002444) midp_ticker_pane_t1_ParamLimits

0xc2c4,	// (0x0000c2c4) aid_fill_nsta_2

0x385e,	// (0x0000385e) list_form2_midp_pane

0x4b24,	// (0x00004b24) midp_editing_number_pane_ParamLimits

0x4b30,	// (0x00004b30) midp_ticker_pane_ParamLimits

0x5af1,	// (0x00005af1) form2_midp_field_pane

0x5b15,	// (0x00005b15) scroll_pane_cp51

0x5b35,	// (0x00005b35) form2_midp_button_pane_ParamLimits

0x5b35,	// (0x00005b35) form2_midp_button_pane

0x5b47,	// (0x00005b47) form2_midp_content_pane_ParamLimits

0x5b47,	// (0x00005b47) form2_midp_content_pane

0x5b61,	// (0x00005b61) form2_midp_field_choice_group_pane

0x5b69,	// (0x00005b69) form2_midp_field_pane_g1

0x5b71,	// (0x00005b71) form2_midp_field_pane_g2

0x5b79,	// (0x00005b79) form2_midp_field_pane_g3

0x5b81,	// (0x00005b81) form2_midp_field_pane_g4

0x0003,

0xa92b,	// (0x0000a92b) form2_midp_field_pane_g

0x5b89,	// (0x00005b89) form2_midp_gauge_slider_pane

0x5b91,	// (0x00005b91) form2_midp_gauge_wait_pane

0x5b99,	// (0x00005b99) form2_midp_image_pane_ParamLimits

0x5b99,	// (0x00005b99) form2_midp_image_pane

0x5bb4,	// (0x00005bb4) form2_midp_label_pane_ParamLimits

0x5bb4,	// (0x00005bb4) form2_midp_label_pane

0xce23,	// (0x0000ce23) form2_midp_label_pane_cp_ParamLimits

0xce23,	// (0x0000ce23) form2_midp_label_pane_cp

0x5bec,	// (0x00005bec) form2_midp_string_pane_ParamLimits

0x5bec,	// (0x00005bec) form2_midp_string_pane

0x5bfe,	// (0x00005bfe) form2_midp_text_pane_ParamLimits

0x5bfe,	// (0x00005bfe) form2_midp_text_pane

0x5c17,	// (0x00005c17) form2_midp_time_pane

0x5c27,	// (0x00005c27) input_focus_pane_cp51_ParamLimits

0x5c27,	// (0x00005c27) input_focus_pane_cp51

0x5c3f,	// (0x00005c3f) form2_midp_label_pane_t1_ParamLimits

0x5c3f,	// (0x00005c3f) form2_midp_label_pane_t1

0x1368,	// (0x00001368) form2_mdip_text_pane_t1_ParamLimits

0x1368,	// (0x00001368) form2_mdip_text_pane_t1

0x5c7f,	// (0x00005c7f) form2_midp_time_pane_t1

0x5c9a,	// (0x00005c9a) form2_midp_gauge_slider_pane_t1

0xce42,	// (0x0000ce42) form2_midp_gauge_slider_pane_t2

0xce54,	// (0x0000ce54) form2_midp_gauge_slider_pane_t3

0x0002,

0xec1f,	// (0x0000ec1f) form2_midp_gauge_slider_pane_t

0x5cd0,	// (0x00005cd0) form2_midp_slider_pane

0x5cdc,	// (0x00005cdc) form2_midp_gauge_wait_pane_t1

0x5cea,	// (0x00005cea) form2_midp_wait_pane_ParamLimits

0x5cea,	// (0x00005cea) form2_midp_wait_pane

0x358c,	// (0x0000358c) list_single_2graphic_pane_cp4_ParamLimits

0x358c,	// (0x0000358c) list_single_2graphic_pane_cp4

0x5d15,	// (0x00005d15) list_single_midp_graphic_pane_cp_ParamLimits

0x5d15,	// (0x00005d15) list_single_midp_graphic_pane_cp

0x024e,	// (0x0000024e) list_highlight_pane_cp20

0x5d33,	// (0x00005d33) list_single_2graphic_pane_g1_cp4

0x502c,	// (0x0000502c) list_single_2graphic_pane_g2_cp4

0x5d3b,	// (0x00005d3b) list_single_2graphic_pane_t1_cp4

0x0474,	// (0x00000474) list_highlight_pane_cp21

0x5d4a,	// (0x00005d4a) list_single_midp_graphic_pane_g4_cp

0x5d59,	// (0x00005d59) list_single_midp_graphic_pane_t1_cp

0x5d6e,	// (0x00005d6e) form2_mdip_string_pane_t1_ParamLimits

0x5d6e,	// (0x00005d6e) form2_mdip_string_pane_t1

0x024e,	// (0x0000024e) bg_wml_button_pane_cp2

0x002a,	// (0x0000002a) form2_midp_image_pane_g1

0x0f2d,	// (0x00000f2d) list_double_large_graphic_pane_g5_ParamLimits

0x0f2d,	// (0x00000f2d) list_double_large_graphic_pane_g5

0xbaab,	// (0x0000baab) midp_form_pane_ParamLimits

0x0474,	// (0x00000474) main_apps_wheel_pane_ParamLimits

0xc050,	// (0x0000c050) popup_preview_window_ParamLimits

0xc050,	// (0x0000c050) popup_preview_window

0x2d2f,	// (0x00002d2f) popup_touch_info_window_ParamLimits

0x2d2f,	// (0x00002d2f) popup_touch_info_window

0x2d4d,	// (0x00002d4d) popup_touch_menu_window_ParamLimits

0x2d4d,	// (0x00002d4d) popup_touch_menu_window

0x0020,	// (0x00000020) bg_popup_sub_pane_cp6

0x5dd8,	// (0x00005dd8) list_touch_menu_pane

0x5de0,	// (0x00005de0) list_single_touch_menu_pane_ParamLimits

0x5de0,	// (0x00005de0) list_single_touch_menu_pane

0x5df7,	// (0x00005df7) list_single_touch_menu_pane_t1

0x0474,	// (0x00000474) bg_popup_sub_pane_cp7_ParamLimits

0x0474,	// (0x00000474) bg_popup_sub_pane_cp7

0x5e05,	// (0x00005e05) heading_sub_pane

0x5e0d,	// (0x00005e0d) list_touch_info_pane_ParamLimits

0x5e0d,	// (0x00005e0d) list_touch_info_pane

0x5e1c,	// (0x00005e1c) list_single_touch_info_pane_ParamLimits

0x5e1c,	// (0x00005e1c) list_single_touch_info_pane

0x5e2d,	// (0x00005e2d) list_single_touch_info_pane_t1

0x5e3b,	// (0x00005e3b) list_single_touch_info_pane_t2

0x0001,

0xa942,	// (0x0000a942) list_single_touch_info_pane_t

0x235b,	// (0x0000235b) bg_popup_heading_pane_cp

0x5e49,	// (0x00005e49) heading_sub_pane_t1

0x345c,	// (0x0000345c) bg_popup_preview_window_pane_cp_ParamLimits

0x345c,	// (0x0000345c) bg_popup_preview_window_pane_cp

0x5e05,	// (0x00005e05) heading_preview_pane

0x5e0d,	// (0x00005e0d) list_preview_pane_ParamLimits

0x5e0d,	// (0x00005e0d) list_preview_pane

0x5e57,	// (0x00005e57) popup_preview_window_g1

0x5e1c,	// (0x00005e1c) list_single_preview_pane_ParamLimits

0x5e1c,	// (0x00005e1c) list_single_preview_pane

0x5e5f,	// (0x00005e5f) list_single_preview_pane_g1

0x5e67,	// (0x00005e67) list_single_preview_pane_t1

0x5e2d,	// (0x00005e2d) list_single_preview_pane_t2

0x0001,

0xa947,	// (0x0000a947) list_single_preview_pane_t

0x5e75,	// (0x00005e75) bg_popup_heading_pane_cp2_ParamLimits

0x5e75,	// (0x00005e75) bg_popup_heading_pane_cp2

0x5e8b,	// (0x00005e8b) heading_preview_pane_g1

0x5e93,	// (0x00005e93) heading_preview_pane_t1_ParamLimits

0x5e93,	// (0x00005e93) heading_preview_pane_t1

0x0602,	// (0x00000602) soft_indicator_pane_t1_ParamLimits

0x0c6e,	// (0x00000c6e) scroll_pane_ParamLimits

0x1965,	// (0x00001965) scroll_sc2_left_pane

0x196e,	// (0x0000196e) scroll_sc2_right_pane

0x198d,	// (0x0000198d) scroll_bg_pane_g1_ParamLimits

0x19a2,	// (0x000019a2) scroll_bg_pane_g2_ParamLimits

0x19ba,	// (0x000019ba) scroll_bg_pane_g3_ParamLimits

0xa523,	// (0x0000a523) scroll_bg_pane_g_ParamLimits

0x198d,	// (0x0000198d) scroll_handle_pane_g1_ParamLimits

0x19dc,	// (0x000019dc) scroll_handle_pane_g2_ParamLimits

0x19ba,	// (0x000019ba) scroll_handle_pane_g3_ParamLimits

0xa52a,	// (0x0000a52a) scroll_handle_pane_g_ParamLimits

0x28f9,	// (0x000028f9) popup_choice_list_window_ParamLimits

0x28f9,	// (0x000028f9) popup_choice_list_window

0x31dd,	// (0x000031dd) choice_list_pane

0x329c,	// (0x0000329c) cell_toolbar_pane_t1

0x32c4,	// (0x000032c4) toolbar_button_pane_ParamLimits

0x45d3,	// (0x000045d3) ai_gene_pane_1_t2_ParamLimits

0x45d3,	// (0x000045d3) ai_gene_pane_1_t2

0x0001,

0xa752,	// (0x0000a752) ai_gene_pane_1_t_ParamLimits

0xa752,	// (0x0000a752) ai_gene_pane_1_t

0x5eb0,	// (0x00005eb0) scroll_sc2_left_pane_g1

0x5eb0,	// (0x00005eb0) scroll_sc2_right_pane_g1

0x28cb,	// (0x000028cb) bg_popup_sub_pane_cp10

0x5eba,	// (0x00005eba) list_choice_list_pane

0x5ed1,	// (0x00005ed1) list_single_choice_list_pane_ParamLimits

0x5ed1,	// (0x00005ed1) list_single_choice_list_pane

0x5ee3,	// (0x00005ee3) list_single_choice_list_pane_g1

0x14f6,	// (0x000014f6) list_single_choice_list_pane_t1_ParamLimits

0x14f6,	// (0x000014f6) list_single_choice_list_pane_t1

0x5eeb,	// (0x00005eeb) choice_list_pane_g1

0x5ef3,	// (0x00005ef3) choice_list_pane_t1

0x0020,	// (0x00000020) input_focus_pane_cp11

0x170a,	// (0x0000170a) title_pane_stacon_g2_ParamLimits

0x170a,	// (0x0000170a) title_pane_stacon_g2

0x0002,

0xa509,	// (0x0000a509) title_pane_stacon_g_ParamLimits

0xa509,	// (0x0000a509) title_pane_stacon_g

0x235b,	// (0x0000235b) cursor_press_pane

0xbdb7,	// (0x0000bdb7) popup_fep_hwr_window_ParamLimits

0xbdb7,	// (0x0000bdb7) popup_fep_hwr_window

0x29f1,	// (0x000029f1) popup_fep_vkb_window_ParamLimits

0x29f1,	// (0x000029f1) popup_fep_vkb_window

0x5f01,	// (0x00005f01) cursor_press_pane_g1

0x0002,

0xec33,	// (0x0000ec33) fep_vkb_side_pane_g_ParamLimits

0x5f3e,	// (0x00005f3e) fep_hwr_candidate_pane_ParamLimits

0x5f3e,	// (0x00005f3e) fep_hwr_candidate_pane

0x5f66,	// (0x00005f66) fep_hwr_side_pane_ParamLimits

0x5f66,	// (0x00005f66) fep_hwr_side_pane

0x5f86,	// (0x00005f86) fep_hwr_top_pane_ParamLimits

0x5f86,	// (0x00005f86) fep_hwr_top_pane

0x5f9e,	// (0x00005f9e) fep_hwr_write_pane_ParamLimits

0x5f9e,	// (0x00005f9e) fep_hwr_write_pane

0xec33,	// (0x0000ec33) fep_vkb_side_pane_g

0x5fd8,	// (0x00005fd8) fep_hwr_top_pane_g1

0x5fea,	// (0x00005fea) fep_hwr_top_pane_g2

0x5ffc,	// (0x00005ffc) fep_hwr_top_pane_g3

0x0002,

0xa94c,	// (0x0000a94c) fep_hwr_top_pane_g

0x6011,	// (0x00006011) fep_hwr_top_text_pane

0x1b31,	// (0x00001b31) fep_hwr_top_text_pane_g1

0x60e9,	// (0x000060e9) fep_hwr_top_text_pane_t1

0x6131,	// (0x00006131) fep_hwr_candidate_pane_g1

0x6367,	// (0x00006367) fep_vkb_keypad_pane_g3_ParamLimits

0x6367,	// (0x00006367) fep_vkb_keypad_pane_g3

0x6389,	// (0x00006389) fep_vkb_keypad_pane_g4_ParamLimits

0x6389,	// (0x00006389) fep_vkb_keypad_pane_g4

0x63f8,	// (0x000063f8) fep_vkb_bottom_pane_g2_ParamLimits

0x63f8,	// (0x000063f8) fep_vkb_bottom_pane_g2

0x0001,

0xa977,	// (0x0000a977) fep_vkb_bottom_pane_g_ParamLimits

0xa977,	// (0x0000a977) fep_vkb_bottom_pane_g

0x5eb0,	// (0x00005eb0) cell_vkb_side_pane_g2

0x0001,

0xa981,	// (0x0000a981) cell_vkb_side_pane_g

0x6483,	// (0x00006483) cell_vkb_side_pane_t1

0x6491,	// (0x00006491) cell_vkb_side_pane_t1_copy1

0x5eb0,	// (0x00005eb0) bg_fep_vkb_candidate_pane_g2

0x65b5,	// (0x000065b5) cell_vkb_candidate_pane_ParamLimits

0x6165,	// (0x00006165) aid_size_cell_vkb_ParamLimits

0x6165,	// (0x00006165) aid_size_cell_vkb

0x65b5,	// (0x000065b5) cell_vkb_candidate_pane

0x65e7,	// (0x000065e7) bg_popup_fep_shadow_pane_g1

0x61db,	// (0x000061db) fep_vkb_bottom_pane_ParamLimits

0x61db,	// (0x000061db) fep_vkb_bottom_pane

0x6218,	// (0x00006218) fep_vkb_candidate_pane_ParamLimits

0x6218,	// (0x00006218) fep_vkb_candidate_pane

0x6234,	// (0x00006234) fep_vkb_keypad_pane_ParamLimits

0x6234,	// (0x00006234) fep_vkb_keypad_pane

0x6268,	// (0x00006268) fep_vkb_side_pane_ParamLimits

0x6268,	// (0x00006268) fep_vkb_side_pane

0x6294,	// (0x00006294) fep_vkb_top_pane_ParamLimits

0x6294,	// (0x00006294) fep_vkb_top_pane

0x62c0,	// (0x000062c0) fep_vkb_top_pane_g1_ParamLimits

0x62c0,	// (0x000062c0) fep_vkb_top_pane_g1

0x62cf,	// (0x000062cf) fep_vkb_top_pane_g2_ParamLimits

0x62cf,	// (0x000062cf) fep_vkb_top_pane_g2

0x62de,	// (0x000062de) fep_vkb_top_pane_g3_ParamLimits

0x62de,	// (0x000062de) fep_vkb_top_pane_g3

0x0003,

0xa967,	// (0x0000a967) fep_vkb_top_pane_g_ParamLimits

0xa967,	// (0x0000a967) fep_vkb_top_pane_g

0x62fc,	// (0x000062fc) fep_vkb_top_text_pane_ParamLimits

0x62fc,	// (0x000062fc) fep_vkb_top_text_pane

0xcec3,	// (0x0000cec3) fep_vkb_side_pane_g1_ParamLimits

0xcec3,	// (0x0000cec3) fep_vkb_side_pane_g1

0x6356,	// (0x00006356) grid_vkb_side_pane_ParamLimits

0x6356,	// (0x00006356) grid_vkb_side_pane

0x65ef,	// (0x000065ef) bg_popup_fep_shadow_pane_g2

0x65f8,	// (0x000065f8) bg_popup_fep_shadow_pane_g3

0x6600,	// (0x00006600) bg_popup_fep_shadow_pane_g4

0x6609,	// (0x00006609) bg_popup_fep_shadow_pane_g5

0x6611,	// (0x00006611) bg_popup_fep_shadow_pane_g6

0x6619,	// (0x00006619) bg_popup_fep_shadow_pane_g7

0x1340,	// (0x00001340) bg_popup_fep_shadow_pane_g8

0x63a7,	// (0x000063a7) grid_vkb_keypad_number_pane_ParamLimits

0x63a7,	// (0x000063a7) grid_vkb_keypad_number_pane

0x63b7,	// (0x000063b7) grid_vkb_keypad_pane_ParamLimits

0x63b7,	// (0x000063b7) grid_vkb_keypad_pane

0x63dd,	// (0x000063dd) fep_vkb_bottom_pane_g1_ParamLimits

0x63dd,	// (0x000063dd) fep_vkb_bottom_pane_g1

0x6406,	// (0x00006406) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6406,	// (0x00006406) grid_vkb_keypad_bottom_left_pane

0x641b,	// (0x0000641b) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x641b,	// (0x0000641b) grid_vkb_keypad_bottom_right_pane

0x6430,	// (0x00006430) fep_vkb_top_text_pane_g1

0xcf0a,	// (0x0000cf0a) fep_vkb_top_text_pane_t1

0xcf1c,	// (0x0000cf1c) cell_vkb_side_pane_ParamLimits

0xcf1c,	// (0x0000cf1c) cell_vkb_side_pane

0x5eb0,	// (0x00005eb0) cell_vkb_side_pane_g1

0x649f,	// (0x0000649f) cell_vkb_keypad_pane_ParamLimits

0x649f,	// (0x0000649f) cell_vkb_keypad_pane

0x650c,	// (0x0000650c) cell_vkb_keypad_pane_g1

0x0008,

0xa994,	// (0x0000a994) bg_popup_fep_shadow_pane_g

0x5eb0,	// (0x00005eb0) cell_hwr_side_pane_g1

0x5eb0,	// (0x00005eb0) cell_hwr_side_pane_g2

0x6516,	// (0x00006516) cell_vkb_keypad_pane_t1

0xcf32,	// (0x0000cf32) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcf32,	// (0x0000cf32) cell_vkb_keypad_bottom_left_pane

0xcf47,	// (0x0000cf47) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcf47,	// (0x0000cf47) cell_vkb_keypad_bottom_right_pane

0x5eb0,	// (0x00005eb0) cell_vkb_keypad_bottom_left_pane_g1

0x5eb0,	// (0x00005eb0) cell_vkb_keypad_bottom_right_pane_g1

0x657a,	// (0x0000657a) cell_vkb_keypad_number_pane_ParamLimits

0x657a,	// (0x0000657a) cell_vkb_keypad_number_pane

0x6599,	// (0x00006599) cell_vkb_keypad_number_pane_g1

0x65a3,	// (0x000065a3) cell_vkb_keypad_number_pane_g2

0x65ac,	// (0x000065ac) cell_vkb_keypad_number_pane_g3

0x0002,

0xa986,	// (0x0000a986) cell_vkb_keypad_number_pane_g

0x6516,	// (0x00006516) cell_vkb_keypad_number_pane_t1

0x65ce,	// (0x000065ce) fep_vkb_candidate_pane_g1

0x0001,

0xa981,	// (0x0000a981) cell_hwr_side_pane_g

0x6629,	// (0x00006629) cell_hwr_side_pane_t1

0x6637,	// (0x00006637) cell_hwr_side_pane_t1_copy1

0x62ee,	// (0x000062ee) cell_hwr_candidate_pane_g1

0x6687,	// (0x00006687) cell_hwr_candidate_pane_t1

0x5eb0,	// (0x00005eb0) cell_vkb_candidate_pane_g2

0x66da,	// (0x000066da) cell_vkb_candidate_pane_t1

0x5f09,	// (0x00005f09) bg_popup_fep_shadow_pane_ParamLimits

0x5f09,	// (0x00005f09) bg_popup_fep_shadow_pane

0x5fb8,	// (0x00005fb8) bg_fep_hwr_top_pane_g4

0x6026,	// (0x00006026) bg_hwr_side_pane_g1_ParamLimits

0x6026,	// (0x00006026) bg_hwr_side_pane_g1

0xce7e,	// (0x0000ce7e) cell_hwr_side_pane_ParamLimits

0xce7e,	// (0x0000ce7e) cell_hwr_side_pane

0x6094,	// (0x00006094) fep_hwr_write_pane_g1_ParamLimits

0x6094,	// (0x00006094) fep_hwr_write_pane_g1

0x60a1,	// (0x000060a1) fep_hwr_write_pane_g2_ParamLimits

0x60a1,	// (0x000060a1) fep_hwr_write_pane_g2

0x60ae,	// (0x000060ae) fep_hwr_write_pane_g3_ParamLimits

0x60ae,	// (0x000060ae) fep_hwr_write_pane_g3

0xce9e,	// (0x0000ce9e) fep_hwr_write_pane_g4_ParamLimits

0xce9e,	// (0x0000ce9e) fep_hwr_write_pane_g4

0x0005,

0xec26,	// (0x0000ec26) fep_hwr_write_pane_g_ParamLimits

0xec26,	// (0x0000ec26) fep_hwr_write_pane_g

0x5fb8,	// (0x00005fb8) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5fb8,	// (0x00005fb8) bg_fep_hwr_candidate_pane_g2

0x60f7,	// (0x000060f7) cell_hwr_candidate_pane_ParamLimits

0x60f7,	// (0x000060f7) cell_hwr_candidate_pane

0x6131,	// (0x00006131) fep_hwr_candidate_pane_g1_ParamLimits

0x6193,	// (0x00006193) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6193,	// (0x00006193) bg_popup_fep_shadow_pane_cp2

0x62ee,	// (0x000062ee) fep_vkb_top_pane_g4_ParamLimits

0x62ee,	// (0x000062ee) fep_vkb_top_pane_g4

0x6334,	// (0x00006334) fep_vkb_side_pane_g2_ParamLimits

0x6334,	// (0x00006334) fep_vkb_side_pane_g2

0xb593,	// (0x0000b593) list_setting_pane_t4_ParamLimits

0xb593,	// (0x0000b593) list_setting_pane_t4

0xb60d,	// (0x0000b60d) list_setting_number_pane_t5_ParamLimits

0xb60d,	// (0x0000b60d) list_setting_number_pane_t5

0xb938,	// (0x0000b938) list_double_heading_pane_cp2_ParamLimits

0xb938,	// (0x0000b938) list_double_heading_pane_cp2

0x21c9,	// (0x000021c9) list_double_heading_pane_g1_cp2_ParamLimits

0x21c9,	// (0x000021c9) list_double_heading_pane_g1_cp2

0x66e8,	// (0x000066e8) list_double_heading_pane_g2_cp2_ParamLimits

0x66e8,	// (0x000066e8) list_double_heading_pane_g2_cp2

0x66fc,	// (0x000066fc) list_double_heading_pane_t1_cp2_ParamLimits

0x66fc,	// (0x000066fc) list_double_heading_pane_t1_cp2

0x6712,	// (0x00006712) list_double_heading_pane_t2_cp2_ParamLimits

0x6712,	// (0x00006712) list_double_heading_pane_t2_cp2

0x000a,	// (0x0000000a) aid_value_unit2

0x02b4,	// (0x000002b4) popup_preview_fixed_window

0x07a6,	// (0x000007a6) bg_popup_preview_window_pane_cp02

0x6724,	// (0x00006724) list_preview_fixed_pane

0x676a,	// (0x0000676a) list_empty_pane_fp_ParamLimits

0x676a,	// (0x0000676a) list_empty_pane_fp

0x676a,	// (0x0000676a) list_single_cale_day_pane_fp_ParamLimits

0x676a,	// (0x0000676a) list_single_cale_day_pane_fp

0x676a,	// (0x0000676a) list_single_graphic_heading_pane_fp_ParamLimits

0x676a,	// (0x0000676a) list_single_graphic_heading_pane_fp

0x676a,	// (0x0000676a) list_single_graphic_pane_fp_ParamLimits

0x676a,	// (0x0000676a) list_single_graphic_pane_fp

0x676a,	// (0x0000676a) list_single_heading_pane_fp_ParamLimits

0x676a,	// (0x0000676a) list_single_heading_pane_fp

0x676a,	// (0x0000676a) list_single_pane_fp_ParamLimits

0x676a,	// (0x0000676a) list_single_pane_fp

0x677e,	// (0x0000677e) list_single_pane_fp_g1_ParamLimits

0x677e,	// (0x0000677e) list_single_pane_fp_g1

0x678a,	// (0x0000678a) list_single_pane_fp_g2_ParamLimits

0x678a,	// (0x0000678a) list_single_pane_fp_g2

0x6796,	// (0x00006796) list_single_pane_fp_g3_ParamLimits

0x6796,	// (0x00006796) list_single_pane_fp_g3

0x67aa,	// (0x000067aa) list_single_pane_fp_g4_ParamLimits

0x67aa,	// (0x000067aa) list_single_pane_fp_g4

0x0003,

0xa9b5,	// (0x0000a9b5) list_single_pane_fp_g_ParamLimits

0xa9b5,	// (0x0000a9b5) list_single_pane_fp_g

0x67b6,	// (0x000067b6) list_single_pane_fp_t1_ParamLimits

0x67b6,	// (0x000067b6) list_single_pane_fp_t1

0x67cd,	// (0x000067cd) list_single_graphic_pane_fp_g1_ParamLimits

0x67cd,	// (0x000067cd) list_single_graphic_pane_fp_g1

0x677e,	// (0x0000677e) list_single_graphic_pane_fp_g2_ParamLimits

0x677e,	// (0x0000677e) list_single_graphic_pane_fp_g2

0x678a,	// (0x0000678a) list_single_graphic_pane_fp_g3_ParamLimits

0x678a,	// (0x0000678a) list_single_graphic_pane_fp_g3

0x6796,	// (0x00006796) list_single_graphic_pane_fp_g4_ParamLimits

0x6796,	// (0x00006796) list_single_graphic_pane_fp_g4

0x67aa,	// (0x000067aa) list_single_graphic_pane_fp_g5_ParamLimits

0x67aa,	// (0x000067aa) list_single_graphic_pane_fp_g5

0x0004,

0xa9be,	// (0x0000a9be) list_single_graphic_pane_fp_g_ParamLimits

0xa9be,	// (0x0000a9be) list_single_graphic_pane_fp_g

0x67d9,	// (0x000067d9) list_single_graphic_pane_fp_t1_ParamLimits

0x67d9,	// (0x000067d9) list_single_graphic_pane_fp_t1

0x67cd,	// (0x000067cd) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x67cd,	// (0x000067cd) list_single_graphic_heading_pane_fp_g1

0x677e,	// (0x0000677e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x677e,	// (0x0000677e) list_single_graphic_heading_pane_fp_g2

0x678a,	// (0x0000678a) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x678a,	// (0x0000678a) list_single_graphic_heading_pane_fp_g3

0x6796,	// (0x00006796) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6796,	// (0x00006796) list_single_graphic_heading_pane_fp_g4

0x67aa,	// (0x000067aa) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x67aa,	// (0x000067aa) list_single_graphic_heading_pane_fp_g5

0x0004,

0xa9be,	// (0x0000a9be) list_single_graphic_heading_pane_fp_g_ParamLimits

0xa9be,	// (0x0000a9be) list_single_graphic_heading_pane_fp_g

0x67ef,	// (0x000067ef) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x67ef,	// (0x000067ef) list_single_graphic_heading_pane_fp_t1

0x6805,	// (0x00006805) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6805,	// (0x00006805) list_single_graphic_heading_pane_fp_t2

0x0001,

0xa9c9,	// (0x0000a9c9) list_single_graphic_heading_pane_fp_t_ParamLimits

0xa9c9,	// (0x0000a9c9) list_single_graphic_heading_pane_fp_t

0x6817,	// (0x00006817) list_single_cale_day_pane_fp_g1_ParamLimits

0x6817,	// (0x00006817) list_single_cale_day_pane_fp_g1

0x684f,	// (0x0000684f) list_single_cale_day_pane_fp_g2_ParamLimits

0x684f,	// (0x0000684f) list_single_cale_day_pane_fp_g2

0x685b,	// (0x0000685b) list_single_cale_day_pane_fp_g3_ParamLimits

0x685b,	// (0x0000685b) list_single_cale_day_pane_fp_g3

0x6883,	// (0x00006883) list_single_cale_day_pane_fp_g4_ParamLimits

0x6883,	// (0x00006883) list_single_cale_day_pane_fp_g4

0x68a7,	// (0x000068a7) list_single_cale_day_pane_fp_g5_ParamLimits

0x68a7,	// (0x000068a7) list_single_cale_day_pane_fp_g5

0x0004,

0xa9ce,	// (0x0000a9ce) list_single_cale_day_pane_fp_g_ParamLimits

0xa9ce,	// (0x0000a9ce) list_single_cale_day_pane_fp_g

0x68cb,	// (0x000068cb) list_single_cale_day_pane_fp_t1_ParamLimits

0x68cb,	// (0x000068cb) list_single_cale_day_pane_fp_t1

0x68f1,	// (0x000068f1) list_single_cale_day_pane_fp_t2_ParamLimits

0x68f1,	// (0x000068f1) list_single_cale_day_pane_fp_t2

0x690a,	// (0x0000690a) list_single_cale_day_pane_fp_t3_ParamLimits

0x690a,	// (0x0000690a) list_single_cale_day_pane_fp_t3

0x0002,

0xa9d9,	// (0x0000a9d9) list_single_cale_day_pane_fp_t_ParamLimits

0xa9d9,	// (0x0000a9d9) list_single_cale_day_pane_fp_t

0x677e,	// (0x0000677e) list_empty_pane_fp_g1_ParamLimits

0x677e,	// (0x0000677e) list_empty_pane_fp_g1

0x6923,	// (0x00006923) list_empty_pane_fp_t1

0x6931,	// (0x00006931) list_empty_pane_fp_t2

0x0001,

0xa9e0,	// (0x0000a9e0) list_empty_pane_fp_t

0x677e,	// (0x0000677e) list_single_heading_pane_fp_g1_ParamLimits

0x677e,	// (0x0000677e) list_single_heading_pane_fp_g1

0x678a,	// (0x0000678a) list_single_heading_pane_fp_g2_ParamLimits

0x678a,	// (0x0000678a) list_single_heading_pane_fp_g2

0x6796,	// (0x00006796) list_single_heading_pane_fp_g3_ParamLimits

0x6796,	// (0x00006796) list_single_heading_pane_fp_g3

0x0002,

0xa9e5,	// (0x0000a9e5) list_single_heading_pane_fp_g_ParamLimits

0xa9e5,	// (0x0000a9e5) list_single_heading_pane_fp_g

0x693f,	// (0x0000693f) list_single_heading_pane_fp_t1_ParamLimits

0x693f,	// (0x0000693f) list_single_heading_pane_fp_t1

0x6951,	// (0x00006951) list_single_heading_pane_fp_t2_ParamLimits

0x6951,	// (0x00006951) list_single_heading_pane_fp_t2

0x0001,

0xa9ec,	// (0x0000a9ec) list_single_heading_pane_fp_t_ParamLimits

0xa9ec,	// (0x0000a9ec) list_single_heading_pane_fp_t

0x1564,	// (0x00001564) aid_size_cell_fast

0x070d,	// (0x0000070d) soft_indicator_pane_cp1_t1

0x15a1,	// (0x000015a1) cell_app_pane_cp2_ParamLimits

0x15a1,	// (0x000015a1) cell_app_pane_cp2

0x5f2b,	// (0x00005f2b) fep_hwr_candidate_drop_down_list_pane

0x614b,	// (0x0000614b) fep_hwr_candidate_pane_g3_ParamLimits

0x614b,	// (0x0000614b) fep_hwr_candidate_pane_g3

0x6158,	// (0x00006158) fep_hwr_candidate_pane_g4_ParamLimits

0x6158,	// (0x00006158) fep_hwr_candidate_pane_g4

0x0002,

0xa960,	// (0x0000a960) fep_hwr_candidate_pane_g_ParamLimits

0xa960,	// (0x0000a960) fep_hwr_candidate_pane_g

0x6207,	// (0x00006207) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6207,	// (0x00006207) fep_vkb_candidate_drop_down_list_pane

0x65d6,	// (0x000065d6) fep_vkb_candidate_pane_g3

0x65de,	// (0x000065de) fep_vkb_candidate_pane_g4

0x0002,

0xa98d,	// (0x0000a98d) fep_vkb_candidate_pane_g

0x62ee,	// (0x000062ee) cell_hwr_candidate_pane_g1_ParamLimits

0x6645,	// (0x00006645) cell_hwr_candidate_pane_g3_ParamLimits

0x6645,	// (0x00006645) cell_hwr_candidate_pane_g3

0x6666,	// (0x00006666) cell_hwr_candidate_pane_g4_ParamLimits

0x6666,	// (0x00006666) cell_hwr_candidate_pane_g4

0x0002,

0xa9a7,	// (0x0000a9a7) cell_hwr_candidate_pane_g_ParamLimits

0xa9a7,	// (0x0000a9a7) cell_hwr_candidate_pane_g

0x66a4,	// (0x000066a4) cell_vkb_candidate_pane_g3_ParamLimits

0x66a4,	// (0x000066a4) cell_vkb_candidate_pane_g3

0x66bf,	// (0x000066bf) cell_vkb_candidate_pane_g4_ParamLimits

0x66bf,	// (0x000066bf) cell_vkb_candidate_pane_g4

0x6967,	// (0x00006967) cell_app_pane_cp2_g1_ParamLimits

0x6967,	// (0x00006967) cell_app_pane_cp2_g1

0x6985,	// (0x00006985) cell_app_pane_cp2_g2_ParamLimits

0x6985,	// (0x00006985) cell_app_pane_cp2_g2

0x0001,

0xa9f1,	// (0x0000a9f1) cell_app_pane_cp2_g_ParamLimits

0xa9f1,	// (0x0000a9f1) cell_app_pane_cp2_g

0x6991,	// (0x00006991) cell_app_pane_cp2_t1_ParamLimits

0x6991,	// (0x00006991) cell_app_pane_cp2_t1

0x11fd,	// (0x000011fd) grid_highlight_pane_cp1_ParamLimits

0x11fd,	// (0x000011fd) grid_highlight_pane_cp1

0x69a3,	// (0x000069a3) cell_hwr_candidate_pane_cp1_ParamLimits

0x69a3,	// (0x000069a3) cell_hwr_candidate_pane_cp1

0x62ee,	// (0x000062ee) fep_hwr_candidate_drop_down_list_pane_g1

0x69c1,	// (0x000069c1) fep_hwr_candidate_drop_down_list_pane_g2

0x69ce,	// (0x000069ce) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xa9f6,	// (0x0000a9f6) fep_hwr_candidate_drop_down_list_pane_g

0x69db,	// (0x000069db) fep_hwr_candidate_drop_down_list_scroll_pane

0x69e4,	// (0x000069e4) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x69e4,	// (0x000069e4) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x69f1,	// (0x000069f1) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x69f1,	// (0x000069f1) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x69fe,	// (0x000069fe) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x69fe,	// (0x000069fe) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x66a4,	// (0x000066a4) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x66a4,	// (0x000066a4) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x66bf,	// (0x000066bf) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x66bf,	// (0x000066bf) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6a0b,	// (0x00006a0b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6a0b,	// (0x00006a0b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6a26,	// (0x00006a26) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6a26,	// (0x00006a26) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6a41,	// (0x00006a41) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6a41,	// (0x00006a41) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xa9fd,	// (0x0000a9fd) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xa9fd,	// (0x0000a9fd) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xcf62,	// (0x0000cf62) cell_vkb_candidate_pane_cp1_ParamLimits

0xcf62,	// (0x0000cf62) cell_vkb_candidate_pane_cp1

0x62ee,	// (0x000062ee) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x62ee,	// (0x000062ee) fep_vkb_candidate_drop_down_list_pane_g1

0x69c1,	// (0x000069c1) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x69c1,	// (0x000069c1) fep_vkb_candidate_drop_down_list_pane_g2

0x69ce,	// (0x000069ce) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x69ce,	// (0x000069ce) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xa9f6,	// (0x0000a9f6) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xa9f6,	// (0x0000a9f6) fep_vkb_candidate_drop_down_list_pane_g

0x6a7f,	// (0x00006a7f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x6a7f,	// (0x00006a7f) fep_vkb_candidate_drop_down_list_scroll_pane

0x6a8c,	// (0x00006a8c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6a8c,	// (0x00006a8c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x6a99,	// (0x00006a99) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6a99,	// (0x00006a99) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x6aa5,	// (0x00006aa5) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6aa5,	// (0x00006aa5) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6645,	// (0x00006645) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6645,	// (0x00006645) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6666,	// (0x00006666) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6666,	// (0x00006666) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x6ab1,	// (0x00006ab1) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6ab1,	// (0x00006ab1) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x6ad2,	// (0x00006ad2) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6ad2,	// (0x00006ad2) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x6af3,	// (0x00006af3) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6af3,	// (0x00006af3) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xaa0e,	// (0x0000aa0e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xaa0e,	// (0x0000aa0e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xaf38,	// (0x0000af38) title_pane_g1_ParamLimits

0xaf4f,	// (0x0000af4f) title_pane_g2_ParamLimits

0xea23,	// (0x0000ea23) title_pane_g_ParamLimits

0x1b21,	// (0x00001b21) aid_call2_pane

0x1b29,	// (0x00001b29) aid_call_pane

0x1b31,	// (0x00001b31) popup_clock_analogue_window_g1

0x1b31,	// (0x00001b31) popup_clock_analogue_window_g2

0x1b39,	// (0x00001b39) popup_clock_analogue_window_g3

0x1b42,	// (0x00001b42) popup_clock_analogue_window_g4

0x002a,	// (0x0000002a) popup_clock_analogue_window_g5

0x0004,

0xa538,	// (0x0000a538) popup_clock_analogue_window_g

0x1b4a,	// (0x00001b4a) popup_clock_analogue_window_t1

0x1bd2,	// (0x00001bd2) clock_digital_number_pane_ParamLimits

0x1bd2,	// (0x00001bd2) clock_digital_number_pane

0x1bde,	// (0x00001bde) clock_digital_number_pane_cp02_ParamLimits

0x1bde,	// (0x00001bde) clock_digital_number_pane_cp02

0x1bea,	// (0x00001bea) clock_digital_number_pane_cp03_ParamLimits

0x1bea,	// (0x00001bea) clock_digital_number_pane_cp03

0x1bf6,	// (0x00001bf6) clock_digital_number_pane_cp04_ParamLimits

0x1bf6,	// (0x00001bf6) clock_digital_number_pane_cp04

0x1c02,	// (0x00001c02) clock_digital_separator_pane_ParamLimits

0x1c02,	// (0x00001c02) clock_digital_separator_pane

0x1c0e,	// (0x00001c0e) popup_clock_digital_window_t1_ParamLimits

0x1c0e,	// (0x00001c0e) popup_clock_digital_window_t1

0x002a,	// (0x0000002a) clock_digital_number_pane_g1

0x002a,	// (0x0000002a) clock_digital_number_pane_g2

0x0001,

0xa543,	// (0x0000a543) clock_digital_number_pane_g

0x002a,	// (0x0000002a) clock_digital_separator_pane_g1

0x002a,	// (0x0000002a) clock_digital_separator_pane_g2

0x0001,

0xa543,	// (0x0000a543) clock_digital_separator_pane_g

0xc2ae,	// (0x0000c2ae) aid_fill_nsta_ParamLimits

0xc3c5,	// (0x0000c3c5) indicator_nsta_pane_ParamLimits

0x301f,	// (0x0000301f) popup_clock_analogue_window

0x301f,	// (0x0000301f) popup_clock_digital_window

0xcd5a,	// (0x0000cd5a) grid_indicator_nsta_pane_ParamLimits

0x58ed,	// (0x000058ed) clock_nsta_pane_t2

0x0001,

0xa8e0,	// (0x0000a8e0) clock_nsta_pane_t

0x190a,	// (0x0000190a) aid_size_max_handle

0xb89c,	// (0x0000b89c) aid_size_min_handle

0x235b,	// (0x0000235b) editor_scroll_pane

0x6b0e,	// (0x00006b0e) ex_editor_pane

0x14d4,	// (0x000014d4) scroll_pane_cp13

0x0c9b,	// (0x00000c9b) scroll_pane_cp14

0x1b7f,	// (0x00001b7f) scroll_pane_cp36

0xb944,	// (0x0000b944) list_single_graphic_hl_pane_cp2_ParamLimits

0xb944,	// (0x0000b944) list_single_graphic_hl_pane_cp2

0xcbbb,	// (0x0000cbbb) list_single_graphic_hl_pane_ParamLimits

0xcbbb,	// (0x0000cbbb) list_single_graphic_hl_pane

0x6b16,	// (0x00006b16) aid_size_min_hl_cp1

0x6b1f,	// (0x00006b1f) list_highlight_pane_cp34_ParamLimits

0x6b1f,	// (0x00006b1f) list_highlight_pane_cp34

0x6b30,	// (0x00006b30) list_single_graphic_hl_pane_g1_ParamLimits

0x6b30,	// (0x00006b30) list_single_graphic_hl_pane_g1

0xcf82,	// (0x0000cf82) list_single_graphic_hl_pane_g2_ParamLimits

0xcf82,	// (0x0000cf82) list_single_graphic_hl_pane_g2

0xcf82,	// (0x0000cf82) list_single_graphic_hl_pane_g3_ParamLimits

0xcf82,	// (0x0000cf82) list_single_graphic_hl_pane_g3

0x0caf,	// (0x00000caf) list_single_graphic_hl_pane_g4_ParamLimits

0x0caf,	// (0x00000caf) list_single_graphic_hl_pane_g4

0x1223,	// (0x00001223) list_single_graphic_hl_pane_g5_ParamLimits

0x1223,	// (0x00001223) list_single_graphic_hl_pane_g5

0x0004,

0xec3f,	// (0x0000ec3f) list_single_graphic_hl_pane_g_ParamLimits

0xec3f,	// (0x0000ec3f) list_single_graphic_hl_pane_g

0xcf8e,	// (0x0000cf8e) list_single_graphic_hl_pane_t1_ParamLimits

0xcf8e,	// (0x0000cf8e) list_single_graphic_hl_pane_t1

0x6b5f,	// (0x00006b5f) aid_size_min_hl_cp2

0x6b68,	// (0x00006b68) list_highlight_pane_cp34_cp2_ParamLimits

0x6b68,	// (0x00006b68) list_highlight_pane_cp34_cp2

0x6b30,	// (0x00006b30) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x6b30,	// (0x00006b30) list_single_graphic_hl_pane_g1_cp2

0x6b75,	// (0x00006b75) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x6b75,	// (0x00006b75) list_single_graphic_hl_pane_g2_cp2

0x6b81,	// (0x00006b81) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x6b81,	// (0x00006b81) list_single_graphic_hl_pane_g3_cp2

0x21c9,	// (0x000021c9) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x21c9,	// (0x000021c9) list_single_graphic_hl_pane_g4_cp2

0x66e8,	// (0x000066e8) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x66e8,	// (0x000066e8) list_single_graphic_hl_pane_g5_cp2

0xbba8,	// (0x0000bba8) control_pane_g4_ParamLimits

0xbba8,	// (0x0000bba8) control_pane_g4

0x28cb,	// (0x000028cb) bg_popup_sub_pane_cp10_ParamLimits

0x5eba,	// (0x00005eba) list_choice_list_pane_ParamLimits

0x5ec9,	// (0x00005ec9) scroll_pane_cp23

0x07a6,	// (0x000007a6) bg_popup_preview_window_pane_cp02_ParamLimits

0x6724,	// (0x00006724) list_preview_fixed_pane_ParamLimits

0x673a,	// (0x0000673a) list_preview_fixed_pane_cp_ParamLimits

0x673a,	// (0x0000673a) list_preview_fixed_pane_cp

0x6746,	// (0x00006746) popup_preview_fixed_window_g1_ParamLimits

0x6746,	// (0x00006746) popup_preview_fixed_window_g1

0x6752,	// (0x00006752) popup_preview_fixed_window_g2_ParamLimits

0x6752,	// (0x00006752) popup_preview_fixed_window_g2

0x0002,

0xa9ae,	// (0x0000a9ae) popup_preview_fixed_window_g_ParamLimits

0xa9ae,	// (0x0000a9ae) popup_preview_fixed_window_g

0x17d7,	// (0x000017d7) aid_navi_side_left_pane_ParamLimits

0x17e7,	// (0x000017e7) aid_navi_side_right_pane_ParamLimits

0x17f6,	// (0x000017f6) navi_icon_pane_stacon_ParamLimits

0x1806,	// (0x00001806) navi_navi_pane_stacon_ParamLimits

0x17f6,	// (0x000017f6) navi_text_pane_stacon_ParamLimits

0x0020,	// (0x00000020) main_text_info_pane

0x6ba3,	// (0x00006ba3) listscroll_text_info_pane

0x6bab,	// (0x00006bab) list_text_info_pane_ParamLimits

0x6bab,	// (0x00006bab) list_text_info_pane

0x6bba,	// (0x00006bba) scroll_pane_cp24_ParamLimits

0x6bba,	// (0x00006bba) scroll_pane_cp24

0xcfa4,	// (0x0000cfa4) list_text_info_pane_t1_ParamLimits

0xcfa4,	// (0x0000cfa4) list_text_info_pane_t1

0xbd37,	// (0x0000bd37) popup_fast_swap2_window_ParamLimits

0xbd37,	// (0x0000bd37) popup_fast_swap2_window

0x6bf5,	// (0x00006bf5) aid_size_cell_fast2

0x0020,	// (0x00000020) bg_popup_window_pane_cp17

0x388a,	// (0x0000388a) heading_pane_cp2

0x3892,	// (0x00003892) listscroll_fast2_pane

0x6bff,	// (0x00006bff) grid_fast2_pane

0x6c07,	// (0x00006c07) listscroll_fast2_pane_g1

0x6c0f,	// (0x00006c0f) listscroll_fast2_pane_g2

0x0001,

0xaa2a,	// (0x0000aa2a) listscroll_fast2_pane_g

0x14d4,	// (0x000014d4) scroll_pane_cp26

0x6c17,	// (0x00006c17) cell_fast2_pane_ParamLimits

0x6c17,	// (0x00006c17) cell_fast2_pane

0x6c2d,	// (0x00006c2d) cell_fast2_pane_g1

0x6c36,	// (0x00006c36) cell_fast2_pane_g2

0x6c3f,	// (0x00006c3f) cell_fast2_pane_g3

0x0002,

0xaa2f,	// (0x0000aa2f) cell_fast2_pane_g

0x0af4,	// (0x00000af4) grid_highlight_pane_cp9

0x0b09,	// (0x00000b09) main_eswt_pane_ParamLimits

0x0b09,	// (0x00000b09) main_eswt_pane

0x6bcf,	// (0x00006bcf) list_single_text_info_pane

0x6c47,	// (0x00006c47) eswt_ctrl_button_pane

0x6c47,	// (0x00006c47) eswt_ctrl_canvas_pane

0x6c4f,	// (0x00006c4f) eswt_ctrl_combo_pane

0x6c47,	// (0x00006c47) eswt_ctrl_default_pane

0x6c47,	// (0x00006c47) eswt_ctrl_label_pane

0x6c57,	// (0x00006c57) eswt_ctrl_wait_pane

0x6c5f,	// (0x00006c5f) eswt_shell_pane

0x0020,	// (0x00000020) listscroll_eswt_app_pane

0x6c7b,	// (0x00006c7b) popup_eswt_tasktip_window_ParamLimits

0x6c7b,	// (0x00006c7b) popup_eswt_tasktip_window

0x345c,	// (0x0000345c) bg_popup_window_pane_cp18

0x6c8c,	// (0x00006c8c) eswt_control_pane_g1_ParamLimits

0x6c8c,	// (0x00006c8c) eswt_control_pane_g1

0x6c99,	// (0x00006c99) eswt_control_pane_g2_ParamLimits

0x6c99,	// (0x00006c99) eswt_control_pane_g2

0x6ca6,	// (0x00006ca6) eswt_control_pane_g3_ParamLimits

0x6ca6,	// (0x00006ca6) eswt_control_pane_g3

0x6cb3,	// (0x00006cb3) eswt_control_pane_g4_ParamLimits

0x6cb3,	// (0x00006cb3) eswt_control_pane_g4

0x0003,

0xaa36,	// (0x0000aa36) eswt_control_pane_g_ParamLimits

0xaa36,	// (0x0000aa36) eswt_control_pane_g

0x11fd,	// (0x000011fd) bg_button_pane_ParamLimits

0x11fd,	// (0x000011fd) bg_button_pane

0x0b09,	// (0x00000b09) common_borders_pane_copy2_ParamLimits

0x0b09,	// (0x00000b09) common_borders_pane_copy2

0x6cc0,	// (0x00006cc0) control_button_pane_g1_ParamLimits

0x6cc0,	// (0x00006cc0) control_button_pane_g1

0x6ccc,	// (0x00006ccc) control_button_pane_g2_ParamLimits

0x6ccc,	// (0x00006ccc) control_button_pane_g2

0x6cd8,	// (0x00006cd8) control_button_pane_g3_ParamLimits

0x6cd8,	// (0x00006cd8) control_button_pane_g3

0x0002,

0xaa3f,	// (0x0000aa3f) control_button_pane_g_ParamLimits

0xaa3f,	// (0x0000aa3f) control_button_pane_g

0x6cec,	// (0x00006cec) control_button_pane_t1

0x6cfa,	// (0x00006cfa) control_button_pane_t2

0x0001,

0xaa46,	// (0x0000aa46) control_button_pane_t

0x32d0,	// (0x000032d0) bg_button_pane_g1

0x32d8,	// (0x000032d8) bg_button_pane_g2

0x32e0,	// (0x000032e0) bg_button_pane_g3

0x32e8,	// (0x000032e8) bg_button_pane_g4

0x32f0,	// (0x000032f0) bg_button_pane_g5

0x32f8,	// (0x000032f8) bg_button_pane_g6

0x3300,	// (0x00003300) bg_button_pane_g7

0x3308,	// (0x00003308) bg_button_pane_g8

0x3310,	// (0x00003310) bg_button_pane_g9

0x0008,

0xa6a6,	// (0x0000a6a6) bg_button_pane_g

0x5e75,	// (0x00005e75) common_borders_pane_ParamLimits

0x5e75,	// (0x00005e75) common_borders_pane

0x6c8c,	// (0x00006c8c) eswt_control_pane_g1_copy1_ParamLimits

0x6c8c,	// (0x00006c8c) eswt_control_pane_g1_copy1

0x6c99,	// (0x00006c99) eswt_control_pane_g2_copy1_ParamLimits

0x6c99,	// (0x00006c99) eswt_control_pane_g2_copy1

0x6ca6,	// (0x00006ca6) eswt_control_pane_g3_copy1_ParamLimits

0x6ca6,	// (0x00006ca6) eswt_control_pane_g3_copy1

0x6cb3,	// (0x00006cb3) eswt_control_pane_g4_copy1_ParamLimits

0x6cb3,	// (0x00006cb3) eswt_control_pane_g4_copy1

0x5eb0,	// (0x00005eb0) bg_eswt_ctrl_canvas_pane_g1

0x5e75,	// (0x00005e75) common_borders_pane_cp2_ParamLimits

0x5e75,	// (0x00005e75) common_borders_pane_cp2

0x5e75,	// (0x00005e75) common_borders_pane_cp3_ParamLimits

0x5e75,	// (0x00005e75) common_borders_pane_cp3

0x6d08,	// (0x00006d08) separator_horizontal_pane

0x1965,	// (0x00001965) separator_vertical_pane

0x6c8c,	// (0x00006c8c) eswt_control_pane_g1_copy2_ParamLimits

0x6c8c,	// (0x00006c8c) eswt_control_pane_g1_copy2

0x6c99,	// (0x00006c99) eswt_control_pane_g2_copy2_ParamLimits

0x6c99,	// (0x00006c99) eswt_control_pane_g2_copy2

0x6ca6,	// (0x00006ca6) eswt_control_pane_g3_copy2_ParamLimits

0x6ca6,	// (0x00006ca6) eswt_control_pane_g3_copy2

0x6cb3,	// (0x00006cb3) eswt_control_pane_g4_copy2_ParamLimits

0x6cb3,	// (0x00006cb3) eswt_control_pane_g4_copy2

0x0020,	// (0x00000020) common_borders_pane_cp4

0x6d10,	// (0x00006d10) separator_horizontal_pane_g1

0x6d19,	// (0x00006d19) separator_horizontal_pane_g2

0x6d22,	// (0x00006d22) separator_horizontal_pane_g3

0x0002,

0xaa4b,	// (0x0000aa4b) separator_horizontal_pane_g

0x6c8c,	// (0x00006c8c) eswt_control_pane_g1_copy3_ParamLimits

0x6c8c,	// (0x00006c8c) eswt_control_pane_g1_copy3

0x6c99,	// (0x00006c99) eswt_control_pane_g2_copy3_ParamLimits

0x6c99,	// (0x00006c99) eswt_control_pane_g2_copy3

0x6ca6,	// (0x00006ca6) eswt_control_pane_g3_copy3_ParamLimits

0x6ca6,	// (0x00006ca6) eswt_control_pane_g3_copy3

0x6cb3,	// (0x00006cb3) eswt_control_pane_g4_copy3_ParamLimits

0x6cb3,	// (0x00006cb3) eswt_control_pane_g4_copy3

0x0020,	// (0x00000020) common_borders_pane_cp5

0x6d2b,	// (0x00006d2b) separator_vertical_pane_g1

0x6d34,	// (0x00006d34) separator_vertical_pane_g2

0x6d3d,	// (0x00006d3d) separator_vertical_pane_g3

0x0002,

0xaa52,	// (0x0000aa52) separator_vertical_pane_g

0x6c8c,	// (0x00006c8c) eswt_control_pane_g1_copy4_ParamLimits

0x6c8c,	// (0x00006c8c) eswt_control_pane_g1_copy4

0x6c99,	// (0x00006c99) eswt_control_pane_g2_copy4_ParamLimits

0x6c99,	// (0x00006c99) eswt_control_pane_g2_copy4

0x6ca6,	// (0x00006ca6) eswt_control_pane_g3_copy4_ParamLimits

0x6ca6,	// (0x00006ca6) eswt_control_pane_g3_copy4

0x6cb3,	// (0x00006cb3) eswt_control_pane_g4_copy4_ParamLimits

0x6cb3,	// (0x00006cb3) eswt_control_pane_g4_copy4

0xcfbf,	// (0x0000cfbf) eswt_ctrl_combo_button_pane

0xcfc7,	// (0x0000cfc7) eswt_ctrl_input_pane

0xcfcf,	// (0x0000cfcf) popup_choice_list_window_cp70

0xcfd7,	// (0x0000cfd7) eswt_ctrl_input_pane_t1

0x0020,	// (0x00000020) input_focus_pane_cp70

0x5e75,	// (0x00005e75) bg_button_pane_cp70_ParamLimits

0x5e75,	// (0x00005e75) bg_button_pane_cp70

0x4fe9,	// (0x00004fe9) eswt_ctrl_combo_button_pane_g1

0x6d74,	// (0x00006d74) wait_bar_pane_cp70

0x345c,	// (0x0000345c) bg_popup_window_pane_cp70_ParamLimits

0x345c,	// (0x0000345c) bg_popup_window_pane_cp70

0x6d7c,	// (0x00006d7c) popup_eswt_tasktip_window_t1

0x6d92,	// (0x00006d92) wait_bar_pane_cp71_ParamLimits

0x6d92,	// (0x00006d92) wait_bar_pane_cp71

0x6d9e,	// (0x00006d9e) grid_eswt_app_pane

0x196e,	// (0x0000196e) scroll_pane_cp70

0xcfe5,	// (0x0000cfe5) cell_eswt_app_pane_ParamLimits

0xcfe5,	// (0x0000cfe5) cell_eswt_app_pane

0xd00d,	// (0x0000d00d) cell_eswt_app_pane_g1_ParamLimits

0xd00d,	// (0x0000d00d) cell_eswt_app_pane_g1

0xd03c,	// (0x0000d03c) cell_eswt_app_pane_g2_ParamLimits

0xd03c,	// (0x0000d03c) cell_eswt_app_pane_g2

0x0001,

0xec4a,	// (0x0000ec4a) cell_eswt_app_pane_g_ParamLimits

0xec4a,	// (0x0000ec4a) cell_eswt_app_pane_g

0xd065,	// (0x0000d065) cell_eswt_app_pane_t1_ParamLimits

0xd065,	// (0x0000d065) cell_eswt_app_pane_t1

0x6e59,	// (0x00006e59) grid_highlight_pane_cp70_ParamLimits

0x6e59,	// (0x00006e59) grid_highlight_pane_cp70

0x0caf,	// (0x00000caf) set_content_pane_g1

0xbb6b,	// (0x0000bb6b) status_small_volume_pane

0xd097,	// (0x0000d097) status_small_volume_pane_g1

0xd09f,	// (0x0000d09f) volume_small2_pane

0xd0a8,	// (0x0000d0a8) volume_small2_pane_g1

0xd0b1,	// (0x0000d0b1) volume_small2_pane_g2

0xd0ba,	// (0x0000d0ba) volume_small2_pane_g3

0xd0c3,	// (0x0000d0c3) volume_small2_pane_g4

0xd0cc,	// (0x0000d0cc) volume_small2_pane_g5

0xd0d5,	// (0x0000d0d5) volume_small2_pane_g6

0xd0de,	// (0x0000d0de) volume_small2_pane_g7

0xd0e7,	// (0x0000d0e7) volume_small2_pane_g8

0xd0f0,	// (0x0000d0f0) volume_small2_pane_g9

0xd0f9,	// (0x0000d0f9) volume_small2_pane_g10

0x0009,

0xec4f,	// (0x0000ec4f) volume_small2_pane_g

0x6430,	// (0x00006430) fep_vkb_top_text_pane_g1_ParamLimits

0xcf0a,	// (0x0000cf0a) fep_vkb_top_text_pane_t1_ParamLimits

0x675e,	// (0x0000675e) popup_preview_fixed_window_g3_ParamLimits

0x675e,	// (0x0000675e) popup_preview_fixed_window_g3

0xc257,	// (0x0000c257) popup_toolbar_trans_pane

0x497f,	// (0x0000497f) aid_height_set_list_ParamLimits

0x498b,	// (0x0000498b) aid_size_parent_ParamLimits

0x28cb,	// (0x000028cb) list_highlight_pane_cp2_ParamLimits

0x0caf,	// (0x00000caf) set_content_pane_g1_ParamLimits

0x15a1,	// (0x000015a1) list_single_image_pane_ParamLimits

0x15a1,	// (0x000015a1) list_single_image_pane

0xd102,	// (0x0000d102) aid_size_cell_image_ParamLimits

0xd102,	// (0x0000d102) aid_size_cell_image

0xd10f,	// (0x0000d10f) grid_single_image_pane_ParamLimits

0xd10f,	// (0x0000d10f) grid_single_image_pane

0x0caf,	// (0x00000caf) list_single_image_pane_g1_ParamLimits

0x0caf,	// (0x00000caf) list_single_image_pane_g1

0x1223,	// (0x00001223) list_single_image_pane_g2_ParamLimits

0x1223,	// (0x00001223) list_single_image_pane_g2

0x0001,

0xaa73,	// (0x0000aa73) list_single_image_pane_g_ParamLimits

0xaa73,	// (0x0000aa73) list_single_image_pane_g

0x4b0e,	// (0x00004b0e) list_single_image_pane_t1_ParamLimits

0x4b0e,	// (0x00004b0e) list_single_image_pane_t1

0xd11d,	// (0x0000d11d) cell_image_list_pane_ParamLimits

0xd11d,	// (0x0000d11d) cell_image_list_pane

0xd131,	// (0x0000d131) cell_image_list_pane_g1

0xd13a,	// (0x0000d13a) cell_image_list_pane_g2

0x0001,

0xec64,	// (0x0000ec64) cell_image_list_pane_g

0x6f0e,	// (0x00006f0e) aid_size_cell_tb_trans_pane

0x11fd,	// (0x000011fd) bg_tb_trans_pane

0x6f20,	// (0x00006f20) grid_tb_trans_pane

0x32d0,	// (0x000032d0) bg_tb_trans_pane_g1

0x32d8,	// (0x000032d8) bg_tb_trans_pane_g2

0x32e0,	// (0x000032e0) bg_tb_trans_pane_g3

0x32e8,	// (0x000032e8) bg_tb_trans_pane_g4

0x32f0,	// (0x000032f0) bg_tb_trans_pane_g5

0x3308,	// (0x00003308) bg_tb_trans_pane_g6

0x3310,	// (0x00003310) bg_tb_trans_pane_g7

0x32f8,	// (0x000032f8) bg_tb_trans_pane_g8

0x3300,	// (0x00003300) bg_tb_trans_pane_g9

0x0008,

0xaa7d,	// (0x0000aa7d) bg_tb_trans_pane_g

0x6f34,	// (0x00006f34) cell_toolbar_trans_pane_ParamLimits

0x6f34,	// (0x00006f34) cell_toolbar_trans_pane

0x5eb0,	// (0x00005eb0) cell_toolbar_trans_pane_g1

0xce07,	// (0x0000ce07) list_form2_midp_pane_t1

0xce15,	// (0x0000ce15) list_form2_midp_pane_t2

0x0001,

0xec1a,	// (0x0000ec1a) list_form2_midp_pane_t

0x5b15,	// (0x00005b15) scroll_pane_cp51_ParamLimits

0x5cfa,	// (0x00005cfa) form2_midp_wait_pane_g1

0x5d03,	// (0x00005d03) form2_midp_wait_pane_g2

0x5d0c,	// (0x00005d0c) form2_midp_wait_pane_g3

0x0002,

0xa93b,	// (0x0000a93b) form2_midp_wait_pane_g

0x0474,	// (0x00000474) list_highlight_pane_cp21_ParamLimits

0x5d4a,	// (0x00005d4a) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5d59,	// (0x00005d59) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4b55,	// (0x00004b55) list_single_2graphic_im_pane_ParamLimits

0x4b55,	// (0x00004b55) list_single_2graphic_im_pane

0xd143,	// (0x0000d143) list_single_2graphic_im_pane_g1_ParamLimits

0xd143,	// (0x0000d143) list_single_2graphic_im_pane_g1

0xd154,	// (0x0000d154) list_single_2graphic_im_pane_g2_ParamLimits

0xd154,	// (0x0000d154) list_single_2graphic_im_pane_g2

0xd160,	// (0x0000d160) list_single_2graphic_im_pane_g3_ParamLimits

0xd160,	// (0x0000d160) list_single_2graphic_im_pane_g3

0x0003,

0xec69,	// (0x0000ec69) list_single_2graphic_im_pane_g_ParamLimits

0xec69,	// (0x0000ec69) list_single_2graphic_im_pane_g

0xd174,	// (0x0000d174) list_single_2graphic_im_pane_t1_ParamLimits

0xd174,	// (0x0000d174) list_single_2graphic_im_pane_t1

0x676a,	// (0x0000676a) list_single_graphic_2heading_pane_fp_ParamLimits

0x676a,	// (0x0000676a) list_single_graphic_2heading_pane_fp

0x67cd,	// (0x000067cd) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x67cd,	// (0x000067cd) list_single_graphic_2heading_pane_fp_g1

0x677e,	// (0x0000677e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x677e,	// (0x0000677e) list_single_graphic_2heading_pane_fp_g2

0x678a,	// (0x0000678a) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x678a,	// (0x0000678a) list_single_graphic_2heading_pane_fp_g3

0x6796,	// (0x00006796) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6796,	// (0x00006796) list_single_graphic_2heading_pane_fp_g4

0x67aa,	// (0x000067aa) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x67aa,	// (0x000067aa) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xa9be,	// (0x0000a9be) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xa9be,	// (0x0000a9be) list_single_graphic_2heading_pane_fp_g

0x6fc8,	// (0x00006fc8) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6fc8,	// (0x00006fc8) list_single_graphic_2heading_pane_fp_t1

0x6805,	// (0x00006805) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6805,	// (0x00006805) list_single_graphic_2heading_pane_fp_t2

0x6fde,	// (0x00006fde) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x6fde,	// (0x00006fde) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xaa99,	// (0x0000aa99) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xaa99,	// (0x0000aa99) list_single_graphic_2heading_pane_fp_t

0x60d1,	// (0x000060d1) fep_hwr_write_pane_g5_ParamLimits

0x60d1,	// (0x000060d1) fep_hwr_write_pane_g5

0x60dd,	// (0x000060dd) fep_hwr_write_pane_g6_ParamLimits

0x60dd,	// (0x000060dd) fep_hwr_write_pane_g6

0x6c5f,	// (0x00006c5f) eswt_shell_pane_ParamLimits

0x345c,	// (0x0000345c) bg_popup_window_pane_cp18_ParamLimits

0x4879,	// (0x00004879) heading_pane_cp70

0x6d7c,	// (0x00006d7c) popup_eswt_tasktip_window_t1_ParamLimits

0xc2f2,	// (0x0000c2f2) aid_touch_tab_arrow_left

0xc306,	// (0x0000c306) aid_touch_tab_arrow_right

0xaf6e,	// (0x0000af6e) title_pane_g3_ParamLimits

0xaf6e,	// (0x0000af6e) title_pane_g3

0x10fb,	// (0x000010fb) set_value_pane_g1

0xc257,	// (0x0000c257) popup_toolbar_trans_pane_ParamLimits

0x6f0e,	// (0x00006f0e) aid_size_cell_tb_trans_pane_ParamLimits

0x11fd,	// (0x000011fd) bg_tb_trans_pane_ParamLimits

0x6f20,	// (0x00006f20) grid_tb_trans_pane_ParamLimits

0x07a6,	// (0x000007a6) cont_note_pane_ParamLimits

0x07a6,	// (0x000007a6) cont_note_pane

0x0b09,	// (0x00000b09) cont_snote2_single_text_pane_ParamLimits

0x0b09,	// (0x00000b09) cont_snote2_single_text_pane

0x0b09,	// (0x00000b09) cont_snote2_single_graphic_pane_ParamLimits

0x0b09,	// (0x00000b09) cont_snote2_single_graphic_pane

0x3aa8,	// (0x00003aa8) cont_note_wait_pane_ParamLimits

0x3aa8,	// (0x00003aa8) cont_note_wait_pane

0x3aa8,	// (0x00003aa8) cont_note_image_pane_ParamLimits

0x3aa8,	// (0x00003aa8) cont_note_image_pane

0x6ff4,	// (0x00006ff4) popup_note2_window_g1_ParamLimits

0x6ff4,	// (0x00006ff4) popup_note2_window_g1

0x7025,	// (0x00007025) popup_note2_window_t1_ParamLimits

0x7025,	// (0x00007025) popup_note2_window_t1

0x706a,	// (0x0000706a) popup_note2_window_t2_ParamLimits

0x706a,	// (0x0000706a) popup_note2_window_t2

0x70af,	// (0x000070af) popup_note2_window_t3_ParamLimits

0x70af,	// (0x000070af) popup_note2_window_t3

0x70f4,	// (0x000070f4) popup_note2_window_t4_ParamLimits

0x70f4,	// (0x000070f4) popup_note2_window_t4

0x082a,	// (0x0000082a) popup_note2_window_t5_ParamLimits

0x082a,	// (0x0000082a) popup_note2_window_t5

0x0004,

0xaaa5,	// (0x0000aaa5) popup_note2_window_t_ParamLimits

0xaaa5,	// (0x0000aaa5) popup_note2_window_t

0x7123,	// (0x00007123) popup_note2_image_window_g1_ParamLimits

0x7123,	// (0x00007123) popup_note2_image_window_g1

0x712f,	// (0x0000712f) popup_note2_image_window_g2_ParamLimits

0x712f,	// (0x0000712f) popup_note2_image_window_g2

0x0001,

0xaab0,	// (0x0000aab0) popup_note2_image_window_g_ParamLimits

0xaab0,	// (0x0000aab0) popup_note2_image_window_g

0x7141,	// (0x00007141) popup_note2_image_window_t1_ParamLimits

0x7141,	// (0x00007141) popup_note2_image_window_t1

0x7159,	// (0x00007159) popup_note2_image_window_t2_ParamLimits

0x7159,	// (0x00007159) popup_note2_image_window_t2

0x7171,	// (0x00007171) popup_note2_image_window_t3_ParamLimits

0x7171,	// (0x00007171) popup_note2_image_window_t3

0x0002,

0xaab5,	// (0x0000aab5) popup_note2_image_window_t_ParamLimits

0xaab5,	// (0x0000aab5) popup_note2_image_window_t

0x3ab6,	// (0x00003ab6) popup_note2_wait_window_g1_ParamLimits

0x3ab6,	// (0x00003ab6) popup_note2_wait_window_g1

0x3ac2,	// (0x00003ac2) popup_note2_wait_window_g2_ParamLimits

0x3ac2,	// (0x00003ac2) popup_note2_wait_window_g2

0x3ace,	// (0x00003ace) popup_note2_wait_window_g3_ParamLimits

0x3ace,	// (0x00003ace) popup_note2_wait_window_g3

0x0002,

0xa688,	// (0x0000a688) popup_note2_wait_window_g_ParamLimits

0xa688,	// (0x0000a688) popup_note2_wait_window_g

0x718d,	// (0x0000718d) popup_note2_wait_window_t1_ParamLimits

0x718d,	// (0x0000718d) popup_note2_wait_window_t1

0x71ab,	// (0x000071ab) popup_note2_wait_window_t2_ParamLimits

0x71ab,	// (0x000071ab) popup_note2_wait_window_t2

0x71c9,	// (0x000071c9) popup_note2_wait_window_t3_ParamLimits

0x71c9,	// (0x000071c9) popup_note2_wait_window_t3

0x71db,	// (0x000071db) popup_note2_wait_window_t4_ParamLimits

0x71db,	// (0x000071db) popup_note2_wait_window_t4

0x0003,

0xaabc,	// (0x0000aabc) popup_note2_wait_window_t_ParamLimits

0xaabc,	// (0x0000aabc) popup_note2_wait_window_t

0x71ed,	// (0x000071ed) wait_bar2_pane_ParamLimits

0x71ed,	// (0x000071ed) wait_bar2_pane

0x7205,	// (0x00007205) popup_snote2_single_text_window_g1_ParamLimits

0x7205,	// (0x00007205) popup_snote2_single_text_window_g1

0x722d,	// (0x0000722d) popup_snote2_single_text_window_t1_ParamLimits

0x722d,	// (0x0000722d) popup_snote2_single_text_window_t1

0x7279,	// (0x00007279) popup_snote2_single_text_window_t2_ParamLimits

0x7279,	// (0x00007279) popup_snote2_single_text_window_t2

0x72c5,	// (0x000072c5) popup_snote2_single_text_window_t3_ParamLimits

0x72c5,	// (0x000072c5) popup_snote2_single_text_window_t3

0x7306,	// (0x00007306) popup_snote2_single_text_window_t4_ParamLimits

0x7306,	// (0x00007306) popup_snote2_single_text_window_t4

0x733c,	// (0x0000733c) popup_snote2_single_text_window_t5_ParamLimits

0x733c,	// (0x0000733c) popup_snote2_single_text_window_t5

0x0004,

0xaac5,	// (0x0000aac5) popup_snote2_single_text_window_t_ParamLimits

0xaac5,	// (0x0000aac5) popup_snote2_single_text_window_t

0x7367,	// (0x00007367) popup_snote2_single_graphic_window_g1_ParamLimits

0x7367,	// (0x00007367) popup_snote2_single_graphic_window_g1

0x738f,	// (0x0000738f) popup_snote2_single_graphic_window_g2_ParamLimits

0x738f,	// (0x0000738f) popup_snote2_single_graphic_window_g2

0x0001,

0xaad0,	// (0x0000aad0) popup_snote2_single_graphic_window_g_ParamLimits

0xaad0,	// (0x0000aad0) popup_snote2_single_graphic_window_g

0x73b7,	// (0x000073b7) popup_snote2_single_graphic_window_t1_ParamLimits

0x73b7,	// (0x000073b7) popup_snote2_single_graphic_window_t1

0x7403,	// (0x00007403) popup_snote2_single_graphic_window_t2_ParamLimits

0x7403,	// (0x00007403) popup_snote2_single_graphic_window_t2

0x72c5,	// (0x000072c5) popup_snote2_single_graphic_window_t3_ParamLimits

0x72c5,	// (0x000072c5) popup_snote2_single_graphic_window_t3

0x7306,	// (0x00007306) popup_snote2_single_graphic_window_t4_ParamLimits

0x7306,	// (0x00007306) popup_snote2_single_graphic_window_t4

0x733c,	// (0x0000733c) popup_snote2_single_graphic_window_t5_ParamLimits

0x733c,	// (0x0000733c) popup_snote2_single_graphic_window_t5

0x0004,

0xaad5,	// (0x0000aad5) popup_snote2_single_graphic_window_t_ParamLimits

0xaad5,	// (0x0000aad5) popup_snote2_single_graphic_window_t

0x59a3,	// (0x000059a3) clock_nsta_pane_cp2_t1

0x59a3,	// (0x000059a3) clock_nsta_pane_cp2_t2

0x0001,

0xa8fc,	// (0x0000a8fc) clock_nsta_pane_cp2_t

0x1217,	// (0x00001217) form_field_data_wide_pane_g1_ParamLimits

0x0caf,	// (0x00000caf) form_field_data_wide_pane_g2_ParamLimits

0x0caf,	// (0x00000caf) form_field_data_wide_pane_g2

0x1223,	// (0x00001223) form_field_data_wide_pane_g3_ParamLimits

0x1223,	// (0x00001223) form_field_data_wide_pane_g3

0x0002,

0xa4bb,	// (0x0000a4bb) form_field_data_wide_pane_g_ParamLimits

0xa4bb,	// (0x0000a4bb) form_field_data_wide_pane_g

0xcd44,	// (0x0000cd44) grid_touch_3_pane_ParamLimits

0xcd44,	// (0x0000cd44) grid_touch_3_pane

0xd1a5,	// (0x0000d1a5) cell_touch_3_pane_ParamLimits

0xd1a5,	// (0x0000d1a5) cell_touch_3_pane

0x5eb0,	// (0x00005eb0) cell_touch_3_pane_g1

0x5eb0,	// (0x00005eb0) cell_touch_3_pane_g2

0x0001,

0xa981,	// (0x0000a981) cell_touch_3_pane_g

0x0882,	// (0x00000882) cont_query_data_pane

0x088a,	// (0x0000088a) cont_query_data_pane_cp1

0x747c,	// (0x0000747c) button_value_adjust_pane_cp7

0x7484,	// (0x00007484) query_popup_pane_cp3

0x1c98,	// (0x00001c98) bg_popup_sub_pane_cp22_ParamLimits

0x1cae,	// (0x00001cae) navi_navi_volume_pane_cp2

0x1cc6,	// (0x00001cc6) popup_side_volume_key_window_g2

0x1cd2,	// (0x00001cd2) popup_side_volume_key_window_g3

0x0002,

0xa551,	// (0x0000a551) popup_side_volume_key_window_g

0x1cec,	// (0x00001cec) popup_side_volume_key_window_t2

0x0001,

0xa558,	// (0x0000a558) popup_side_volume_key_window_t

0x214c,	// (0x0000214c) popup_side_volume_key_window_ParamLimits

0xb3fb,	// (0x0000b3fb) list_double_graphic_pane_g4_ParamLimits

0xb3fb,	// (0x0000b3fb) list_double_graphic_pane_g4

0xcba6,	// (0x0000cba6) list_single_2heading_msg_pane_ParamLimits

0xcba6,	// (0x0000cba6) list_single_2heading_msg_pane

0xd1ec,	// (0x0000d1ec) list_single_2heading_msg_pane_g1_ParamLimits

0xd1ec,	// (0x0000d1ec) list_single_2heading_msg_pane_g1

0xd1f8,	// (0x0000d1f8) list_single_2heading_msg_pane_g2_ParamLimits

0xd1f8,	// (0x0000d1f8) list_single_2heading_msg_pane_g2

0xd20b,	// (0x0000d20b) list_single_2heading_msg_pane_g3_ParamLimits

0xd20b,	// (0x0000d20b) list_single_2heading_msg_pane_g3

0xd217,	// (0x0000d217) list_single_2heading_msg_pane_g4_ParamLimits

0xd217,	// (0x0000d217) list_single_2heading_msg_pane_g4

0x0003,

0xec72,	// (0x0000ec72) list_single_2heading_msg_pane_g_ParamLimits

0xec72,	// (0x0000ec72) list_single_2heading_msg_pane_g

0x74ed,	// (0x000074ed) list_single_2heading_msg_pane_t1_ParamLimits

0x74ed,	// (0x000074ed) list_single_2heading_msg_pane_t1

0xd22f,	// (0x0000d22f) list_single_2heading_msg_pane_t2_ParamLimits

0xd22f,	// (0x0000d22f) list_single_2heading_msg_pane_t2

0xd29a,	// (0x0000d29a) list_single_2heading_msg_pane_t3_ParamLimits

0xd29a,	// (0x0000d29a) list_single_2heading_msg_pane_t3

0x757d,	// (0x0000757d) list_single_2heading_msg_pane_t4_ParamLimits

0x757d,	// (0x0000757d) list_single_2heading_msg_pane_t4

0x0003,

0xec7b,	// (0x0000ec7b) list_single_2heading_msg_pane_t_ParamLimits

0xec7b,	// (0x0000ec7b) list_single_2heading_msg_pane_t

0x03c8,	// (0x000003c8) title_pane_g4_ParamLimits

0x03c8,	// (0x000003c8) title_pane_g4

0x1717,	// (0x00001717) title_pane_stacon_g3_ParamLimits

0x1717,	// (0x00001717) title_pane_stacon_g3

0x6f8b,	// (0x00006f8b) list_single_2graphic_im_pane_g4_ParamLimits

0x6f8b,	// (0x00006f8b) list_single_2graphic_im_pane_g4

0x45f0,	// (0x000045f0) popup_side_volume_key_window_cp

0x4f41,	// (0x00004f41) main_idle_act2_pane_t1

0x3318,	// (0x00003318) toolbar_button_pane_g10

0xb2ed,	// (0x0000b2ed) popup_toolbar_window_cp1

0x5994,	// (0x00005994) clock_nsta_pane_cp_t1

0x5994,	// (0x00005994) clock_nsta_pane_cp_t2

0x0001,

0xa8f7,	// (0x0000a8f7) clock_nsta_pane_cp_t

0x1cae,	// (0x00001cae) navi_navi_volume_pane_cp2_ParamLimits

0x1cba,	// (0x00001cba) popup_side_volume_key_window_g1_ParamLimits

0x1cc6,	// (0x00001cc6) popup_side_volume_key_window_g2_ParamLimits

0x1cd2,	// (0x00001cd2) popup_side_volume_key_window_g3_ParamLimits

0xa551,	// (0x0000a551) popup_side_volume_key_window_g_ParamLimits

0x5f17,	// (0x00005f17) fep_hwr_aid_pane

0x5fb8,	// (0x00005fb8) bg_fep_hwr_top_pane_g4_ParamLimits

0x5fd8,	// (0x00005fd8) fep_hwr_top_pane_g1_ParamLimits

0x5fea,	// (0x00005fea) fep_hwr_top_pane_g2_ParamLimits

0x5ffc,	// (0x00005ffc) fep_hwr_top_pane_g3_ParamLimits

0xa94c,	// (0x0000a94c) fep_hwr_top_pane_g_ParamLimits

0x6011,	// (0x00006011) fep_hwr_top_text_pane_ParamLimits

0x43bb,	// (0x000043bb) aid_touch_tab_arrow_arrow_2

0x43c4,	// (0x000043c4) aid_touch_tab_arrow_left_2

0x5f2b,	// (0x00005f2b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5f5e,	// (0x00005f5e) fep_hwr_prediction_pane

0x6260,	// (0x00006260) fep_vkb_prediction_pane

0xceea,	// (0x0000ceea) fep_vkb_side_pane_g3_ParamLimits

0xceea,	// (0x0000ceea) fep_vkb_side_pane_g3

0x62ee,	// (0x000062ee) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x69c1,	// (0x000069c1) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x69ce,	// (0x000069ce) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xa9f6,	// (0x0000a9f6) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x75a2,	// (0x000075a2) fep_hwr_prediction_pane_g1

0x75ac,	// (0x000075ac) fep_hwr_prediction_pane_g2

0x75b4,	// (0x000075b4) fep_hwr_prediction_pane_g3

0x75bc,	// (0x000075bc) fep_hwr_prediction_pane_g4

0x0003,

0xaaf2,	// (0x0000aaf2) fep_hwr_prediction_pane_g

0x75a2,	// (0x000075a2) fep_vkb_prediction_pane_g1

0x75c4,	// (0x000075c4) fep_vkb_prediction_pane_g2

0x75cc,	// (0x000075cc) fep_vkb_prediction_pane_g3

0x75d4,	// (0x000075d4) fep_vkb_prediction_pane_g4

0x0003,

0xaafb,	// (0x0000aafb) fep_vkb_prediction_pane_g

0x48ff,	// (0x000048ff) slider_set_pane_g3

0x4913,	// (0x00004913) slider_set_pane_g4

0x492b,	// (0x0000492b) slider_set_pane_g5

0x48ff,	// (0x000048ff) slider_set_pane_g6

0xca02,	// (0x0000ca02) slider_set_pane_g7

0x4ad2,	// (0x00004ad2) slider_form_pane_g3

0x4adb,	// (0x00004adb) slider_form_pane_g4

0x4ae3,	// (0x00004ae3) slider_form_pane_g5

0x4ad2,	// (0x00004ad2) slider_form_pane_g6

0xcb5e,	// (0x0000cb5e) slider_form_pane_g7

0x523a,	// (0x0000523a) slider_set_pane_vc_g3

0x5243,	// (0x00005243) slider_set_pane_vc_g4

0x524c,	// (0x0000524c) slider_set_pane_vc_g5

0x523a,	// (0x0000523a) slider_set_pane_vc_g6

0x5255,	// (0x00005255) slider_set_pane_vc_g7

0x523a,	// (0x0000523a) slider_form_pane_vc_g1

0x5243,	// (0x00005243) slider_form_pane_vc_g2

0x524c,	// (0x0000524c) slider_form_pane_vc_g3

0x523a,	// (0x0000523a) slider_form_pane_vc_g4

0x5678,	// (0x00005678) slider_form_pane_vc_g5

0x0004,

0xa8c9,	// (0x0000a8c9) slider_form_pane_vc_g

0x0020,	// (0x00000020) main_idle_act3_pane

0x75dc,	// (0x000075dc) ai3_links_pane

0xd308,	// (0x0000d308) popup_ai3_data_window_ParamLimits

0xd308,	// (0x0000d308) popup_ai3_data_window

0x0020,	// (0x00000020) grid_ai3_links_pane

0xd320,	// (0x0000d320) cell_ai3_links_pane_ParamLimits

0xd320,	// (0x0000d320) cell_ai3_links_pane

0x7611,	// (0x00007611) bg_popup_sub_pane_cp11

0x761e,	// (0x0000761e) cell_ai3_links_pane_g1

0x0020,	// (0x00000020) bg_popup_sub_pane_cp12

0x7643,	// (0x00007643) heading_ai3_data_pane

0x764b,	// (0x0000764b) list_ai3_gene_pane

0x7657,	// (0x00007657) popup_ai3_data_window_g1

0x765f,	// (0x0000765f) heading_ai3_data_pane_g1

0x7667,	// (0x00007667) heading_ai3_data_pane_t1

0x7675,	// (0x00007675) list_double_ai3_gene_pane_ParamLimits

0x7675,	// (0x00007675) list_double_ai3_gene_pane

0x7682,	// (0x00007682) list_single_ai3_gene_pane_ParamLimits

0x7682,	// (0x00007682) list_single_ai3_gene_pane

0x5e75,	// (0x00005e75) list_highlight_pane_cp7_ParamLimits

0x5e75,	// (0x00005e75) list_highlight_pane_cp7

0x768f,	// (0x0000768f) list_single_a13_gene_pane_t1_ParamLimits

0x768f,	// (0x0000768f) list_single_a13_gene_pane_t1

0x76a6,	// (0x000076a6) list_single_ai3_gene_pane_g1

0x76af,	// (0x000076af) list_single_ai3_gene_pane_g2

0x0001,

0xab04,	// (0x0000ab04) list_single_ai3_gene_pane_g

0x76b7,	// (0x000076b7) list_double_ai3_gene_pane_g1_ParamLimits

0x76b7,	// (0x000076b7) list_double_ai3_gene_pane_g1

0x76c3,	// (0x000076c3) list_double_ai3_gene_pane_t1_ParamLimits

0x76c3,	// (0x000076c3) list_double_ai3_gene_pane_t1

0x76df,	// (0x000076df) list_double_ai3_gene_pane_t2_ParamLimits

0x76df,	// (0x000076df) list_double_ai3_gene_pane_t2

0x76f4,	// (0x000076f4) list_double_ai3_gene_pane_t3_ParamLimits

0x76f4,	// (0x000076f4) list_double_ai3_gene_pane_t3

0x0002,

0xab09,	// (0x0000ab09) list_double_ai3_gene_pane_t_ParamLimits

0xab09,	// (0x0000ab09) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7495,	// (0x00007495) aid_size_min_col_2

0xd1d8,	// (0x0000d1d8) aid_size_min_msg_ParamLimits

0xd1d8,	// (0x0000d1d8) aid_size_min_msg

0xcefe,	// (0x0000cefe) fep_vkb_top_text_pane_g2_ParamLimits

0xcefe,	// (0x0000cefe) fep_vkb_top_text_pane_g2

0x0001,

0xec3a,	// (0x0000ec3a) fep_vkb_top_text_pane_g_ParamLimits

0xec3a,	// (0x0000ec3a) fep_vkb_top_text_pane_g

0x0020,	// (0x00000020) main_hc_apps_shell_pane

0x7711,	// (0x00007711) grid_hc_apps_pane_ParamLimits

0x7711,	// (0x00007711) grid_hc_apps_pane

0x7723,	// (0x00007723) list_hc_apps_pane

0x772b,	// (0x0000772b) scroll_pane_cp37_ParamLimits

0x772b,	// (0x0000772b) scroll_pane_cp37

0xd336,	// (0x0000d336) cell_hc_apps_pane_ParamLimits

0xd336,	// (0x0000d336) cell_hc_apps_pane

0xd3d0,	// (0x0000d3d0) cell_hc_apps_pane_g1_ParamLimits

0xd3d0,	// (0x0000d3d0) cell_hc_apps_pane_g1

0x77f1,	// (0x000077f1) cell_hc_apps_pane_g2_ParamLimits

0x77f1,	// (0x000077f1) cell_hc_apps_pane_g2

0x780d,	// (0x0000780d) cell_hc_apps_pane_g3_ParamLimits

0x780d,	// (0x0000780d) cell_hc_apps_pane_g3

0x0002,

0xec84,	// (0x0000ec84) cell_hc_apps_pane_g_ParamLimits

0xec84,	// (0x0000ec84) cell_hc_apps_pane_g

0xd3fc,	// (0x0000d3fc) cell_hc_apps_pane_t1_ParamLimits

0xd3fc,	// (0x0000d3fc) cell_hc_apps_pane_t1

0x07a6,	// (0x000007a6) grid_highlight_pane_cp10_ParamLimits

0x07a6,	// (0x000007a6) grid_highlight_pane_cp10

0xd43a,	// (0x0000d43a) list_single_hc_apps_pane_ParamLimits

0xd43a,	// (0x0000d43a) list_single_hc_apps_pane

0xd466,	// (0x0000d466) list_single_hc_apps_pane_g1

0xd47f,	// (0x0000d47f) list_single_hc_apps_pane_g2

0x0001,

0xec8b,	// (0x0000ec8b) list_single_hc_apps_pane_g

0xd498,	// (0x0000d498) list_single_hc_apps_pane_g2_copy1

0xd4b4,	// (0x0000d4b4) list_single_hc_apps_pane_t1

0x0474,	// (0x00000474) bg_set_opt_pane_cp_ParamLimits

0x04be,	// (0x000004be) setting_slider_pane_t1_ParamLimits

0xb03b,	// (0x0000b03b) setting_slider_pane_t2_ParamLimits

0xb054,	// (0x0000b054) setting_slider_pane_t3_ParamLimits

0xea33,	// (0x0000ea33) setting_slider_pane_t_ParamLimits

0x0504,	// (0x00000504) slider_set_pane_ParamLimits

0x271f,	// (0x0000271f) control_pane_g5_ParamLimits

0x271f,	// (0x0000271f) control_pane_g5

0x48e6,	// (0x000048e6) slider_set_pane_g1_ParamLimits

0x48f3,	// (0x000048f3) slider_set_pane_g2_ParamLimits

0x48ff,	// (0x000048ff) slider_set_pane_g3_ParamLimits

0x4913,	// (0x00004913) slider_set_pane_g4_ParamLimits

0x492b,	// (0x0000492b) slider_set_pane_g5_ParamLimits

0x48ff,	// (0x000048ff) slider_set_pane_g6_ParamLimits

0xca02,	// (0x0000ca02) slider_set_pane_g7_ParamLimits

0xebb6,	// (0x0000ebb6) slider_set_pane_g_ParamLimits

0x0474,	// (0x00000474) navi_icon_text_pane_ParamLimits

0xc2c4,	// (0x0000c2c4) aid_fill_nsta_2_ParamLimits

0xc2f2,	// (0x0000c2f2) aid_touch_tab_arrow_left_ParamLimits

0xc306,	// (0x0000c306) aid_touch_tab_arrow_right_ParamLimits

0xc3a2,	// (0x0000c3a2) clock_nsta_pane_ParamLimits

0x439d,	// (0x0000439d) navi_icon_pane_g1_ParamLimits

0x43a9,	// (0x000043a9) navi_text_pane_t1_ParamLimits

0x5a8b,	// (0x00005a8b) navi_icon_text_pane_g1_ParamLimits

0x5a97,	// (0x00005a97) navi_icon_text_pane_t1_ParamLimits

0xd466,	// (0x0000d466) list_single_hc_apps_pane_g1_ParamLimits

0xd47f,	// (0x0000d47f) list_single_hc_apps_pane_g2_ParamLimits

0xec8b,	// (0x0000ec8b) list_single_hc_apps_pane_g_ParamLimits

0xd498,	// (0x0000d498) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd4b4,	// (0x0000d4b4) list_single_hc_apps_pane_t1_ParamLimits

0xae86,	// (0x0000ae86) popup_toolbar2_fixed_window_ParamLimits

0xae86,	// (0x0000ae86) popup_toolbar2_fixed_window

0xc24f,	// (0x0000c24f) popup_toolbar2_float_window

0x0020,	// (0x00000020) bg_popup_sub_pane_cp27

0x7919,	// (0x00007919) grid_toolbar2_float_pane

0x0020,	// (0x00000020) bg_popup_sub_pane_cp26

0x7919,	// (0x00007919) grid_toolbar2_fixed_pane

0xd4e2,	// (0x0000d4e2) cell_toolbar2_fixed_pane_ParamLimits

0xd4e2,	// (0x0000d4e2) cell_toolbar2_fixed_pane

0xd4fd,	// (0x0000d4fd) cell_toolbar2_fixed_pane_g1

0x793b,	// (0x0000793b) toolbar2_fixed_button_pane

0x32d0,	// (0x000032d0) toolbar2_fixed_button_pane_g1

0x32d8,	// (0x000032d8) toolbar2_fixed_button_pane_g2

0x32e0,	// (0x000032e0) toolbar2_fixed_button_pane_g3

0x32e8,	// (0x000032e8) toolbar2_fixed_button_pane_g4

0x32f0,	// (0x000032f0) toolbar2_fixed_button_pane_g5

0x32f8,	// (0x000032f8) toolbar2_fixed_button_pane_g6

0x3300,	// (0x00003300) toolbar2_fixed_button_pane_g7

0x3308,	// (0x00003308) toolbar2_fixed_button_pane_g8

0x3310,	// (0x00003310) toolbar2_fixed_button_pane_g9

0x0008,

0xa6a6,	// (0x0000a6a6) toolbar2_fixed_button_pane_g

0x7943,	// (0x00007943) cell_toolbar2_float_pane_ParamLimits

0x7943,	// (0x00007943) cell_toolbar2_float_pane

0x7954,	// (0x00007954) cell_toolbar2_float_pane_g1

0x793b,	// (0x0000793b) toolbar2_fixed_button_pane_cp

0xceb3,	// (0x0000ceb3) fep_vkb_accented_list_pane_ParamLimits

0xceb3,	// (0x0000ceb3) fep_vkb_accented_list_pane

0x6621,	// (0x00006621) bg_popup_fep_shadow_pane_g9

0x235b,	// (0x0000235b) bg_popup_fep_shadow_pane_cp3

0x14bb,	// (0x000014bb) list_accented_list_pane

0x795d,	// (0x0000795d) list_single_accented_list_pane_ParamLimits

0x795d,	// (0x0000795d) list_single_accented_list_pane

0x235b,	// (0x0000235b) list_highlight_pane_cp10

0x796e,	// (0x0000796e) list_single_accented_list_pane_t1

0xc191,	// (0x0000c191) popup_slider_window_ParamLimits

0xc191,	// (0x0000c191) popup_slider_window

0x748c,	// (0x0000748c) aid_indentation_list_msg

0xd5dc,	// (0x0000d5dc) bg_popup_window_pane_cp19

0x7a72,	// (0x00007a72) popup_slider_window_g1

0x7a8e,	// (0x00007a8e) popup_slider_window_g2

0x7aaa,	// (0x00007aaa) popup_slider_window_g3

0x0005,

0xec90,	// (0x0000ec90) popup_slider_window_g

0x7b06,	// (0x00007b06) popup_slider_window_t1

0x7b78,	// (0x00007b78) small_volume_slider_vertical_pane

0x5eb0,	// (0x00005eb0) small_volume_slider_vertical_pane_g1

0x5eb0,	// (0x00005eb0) small_volume_slider_vertical_pane_g2

0x7b94,	// (0x00007b94) small_volume_slider_vertical_pane_g3

0x0002,

0xab2e,	// (0x0000ab2e) small_volume_slider_vertical_pane_g

0xae0a,	// (0x0000ae0a) area_side_right_pane_ParamLimits

0xae0a,	// (0x0000ae0a) area_side_right_pane

0xd694,	// (0x0000d694) aid_size_side_button_ParamLimits

0xd694,	// (0x0000d694) aid_size_side_button

0xd6ad,	// (0x0000d6ad) grid_sctrl_middle_pane_ParamLimits

0xd6ad,	// (0x0000d6ad) grid_sctrl_middle_pane

0x7bcd,	// (0x00007bcd) sctrl_sk_bottom_pane

0x7bde,	// (0x00007bde) sctrl_sk_top_pane

0x7bf0,	// (0x00007bf0) aid_touch_sctrl_top

0x07a6,	// (0x000007a6) bg_sctrl_sk_pane_ParamLimits

0x07a6,	// (0x000007a6) bg_sctrl_sk_pane

0x7bfd,	// (0x00007bfd) sctrl_sk_top_pane_g1

0x7c0a,	// (0x00007c0a) sctrl_sk_top_pane_t1

0x7bf0,	// (0x00007bf0) aid_touch_sctrl_bottom

0x07a6,	// (0x000007a6) bg_sctrl_sk_pane_cp_ParamLimits

0x07a6,	// (0x000007a6) bg_sctrl_sk_pane_cp

0x7c25,	// (0x00007c25) sctrl_sk_bottom_pane_g1

0x7c0a,	// (0x00007c0a) sctrl_sk_bottom_pane_t1

0xd6c3,	// (0x0000d6c3) cell_sctrl_middle_pane_ParamLimits

0xd6c3,	// (0x0000d6c3) cell_sctrl_middle_pane

0xd6d4,	// (0x0000d6d4) aid_touch_sctrl_middle_ParamLimits

0xd6d4,	// (0x0000d6d4) aid_touch_sctrl_middle

0xd6e1,	// (0x0000d6e1) bg_sctrl_middle_pane_ParamLimits

0xd6e1,	// (0x0000d6e1) bg_sctrl_middle_pane

0x7cec,	// (0x00007cec) cell_sctrl_middle_pane_g1_ParamLimits

0x7cec,	// (0x00007cec) cell_sctrl_middle_pane_g1

0xd6ef,	// (0x0000d6ef) cell_sctrl_middle_pane_g2_ParamLimits

0xd6ef,	// (0x0000d6ef) cell_sctrl_middle_pane_g2

0x0001,

0xec9d,	// (0x0000ec9d) cell_sctrl_middle_pane_g_ParamLimits

0xec9d,	// (0x0000ec9d) cell_sctrl_middle_pane_g

0x32d0,	// (0x000032d0) bg_sctrl_middle_pane_g1

0x32d8,	// (0x000032d8) bg_sctrl_middle_pane_g2

0x32e0,	// (0x000032e0) bg_sctrl_middle_pane_g3

0x32e8,	// (0x000032e8) bg_sctrl_middle_pane_g4

0x32f0,	// (0x000032f0) bg_sctrl_middle_pane_g5

0x32f8,	// (0x000032f8) bg_sctrl_middle_pane_g6

0x3300,	// (0x00003300) bg_sctrl_middle_pane_g7

0x3308,	// (0x00003308) bg_sctrl_middle_pane_g8

0x0007,

0xab3f,	// (0x0000ab3f) bg_sctrl_middle_pane_g

0x3310,	// (0x00003310) bg_sctrl_middle_pane_g8_copy1

0x32d0,	// (0x000032d0) bg_sctrl_sk_pane_g1

0x32d8,	// (0x000032d8) bg_sctrl_sk_pane_g2

0x32e0,	// (0x000032e0) bg_sctrl_sk_pane_g3

0x0008,

0xa6a6,	// (0x0000a6a6) bg_sctrl_sk_pane_g

0x0c2b,	// (0x00000c2b) aid_size_touch_scroll_bar

0x32e8,	// (0x000032e8) bg_sctrl_sk_pane_g4

0x32f0,	// (0x000032f0) bg_sctrl_sk_pane_g5

0x32f8,	// (0x000032f8) bg_sctrl_sk_pane_g6

0x3300,	// (0x00003300) bg_sctrl_sk_pane_g7

0x3308,	// (0x00003308) bg_sctrl_sk_pane_g8

0x3310,	// (0x00003310) bg_sctrl_sk_pane_g9

0x2969,	// (0x00002969) popup_fep_china_hwr2_fs_candidate_window

0xbd8c,	// (0x0000bd8c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbd8c,	// (0x0000bd8c) popup_fep_china_hwr2_fs_control_window

0x62ee,	// (0x000062ee) sctrl_sk_top_pane_g2

0x0001,

0xab35,	// (0x0000ab35) sctrl_sk_top_pane_g

0xd6fc,	// (0x0000d6fc) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd6fc,	// (0x0000d6fc) aid_fep_china_hwr2_fs_cell

0xd710,	// (0x0000d710) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd710,	// (0x0000d710) bg_popup_fep_shadow_pane_cp4

0xd727,	// (0x0000d727) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd727,	// (0x0000d727) bg_popup_fep_shadow_pane_cp5

0xd739,	// (0x0000d739) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd739,	// (0x0000d739) popup_fep_china_hwr2_fs_control_bar_grid

0xd74d,	// (0x0000d74d) popup_fep_china_hwr2_fs_control_funtion_grid

0x7cc2,	// (0x00007cc2) aid_fep_china_hwr2_fs_candi_cell

0x0020,	// (0x00000020) bg_popup_fep_shadow_pane_cp6

0x7ccc,	// (0x00007ccc) popup_fep_china_hwr2_fs_candidate_grid

0xd755,	// (0x0000d755) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd755,	// (0x0000d755) cell_fep_china_hwr2_fs_funtion_grid

0x5eb0,	// (0x00005eb0) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x7cec,	// (0x00007cec) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x7cec,	// (0x00007cec) cell_fep_china_hwr2_fs_funtion_grid_g1

0x7cfa,	// (0x00007cfa) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x7cfa,	// (0x00007cfa) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xab50,	// (0x0000ab50) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xab50,	// (0x0000ab50) cell_fep_china_hwr2_fs_funtion_grid_g

0xd76d,	// (0x0000d76d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd76d,	// (0x0000d76d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd782,	// (0x0000d782) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd782,	// (0x0000d782) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xeca2,	// (0x0000eca2) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xeca2,	// (0x0000eca2) cell_fep_china_hwr2_fs_funtion_grid_t

0x7d41,	// (0x00007d41) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x7d49,	// (0x00007d49) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x7d51,	// (0x00007d51) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xab5a,	// (0x0000ab5a) popup_fep_china_hwr2_fs_control_bar_grid_g

0x7d59,	// (0x00007d59) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x7d59,	// (0x00007d59) cell_fep_china_hwr2_fs_candidate_grid

0x7d72,	// (0x00007d72) popup_fep_china_hwr2_fs_candidate_grid_g20

0x7d7a,	// (0x00007d7a) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5eb0,	// (0x00005eb0) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5eb0,	// (0x00005eb0) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xa981,	// (0x0000a981) cell_fep_china_hwr2_fs_candidate_grid_g

0x7d82,	// (0x00007d82) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2e4f,	// (0x00002e4f) clock_nsta_pane_cp_24_ParamLimits

0x2e4f,	// (0x00002e4f) clock_nsta_pane_cp_24

0x2ec2,	// (0x00002ec2) indicator_nsta_pane_cp_24_ParamLimits

0x2ec2,	// (0x00002ec2) indicator_nsta_pane_cp_24

0x4209,	// (0x00004209) heading_pane_g1

0x0001,

0xa70b,	// (0x0000a70b) heading_pane_g

0xcc6c,	// (0x0000cc6c) grid_sct_catagory_button_pane

0x4d5b,	// (0x00004d5b) scroll_pane_cp5_ParamLimits

0x5b21,	// (0x00005b21) button_value_adjust_pane_cp5_ParamLimits

0x5b21,	// (0x00005b21) button_value_adjust_pane_cp5

0x5c17,	// (0x00005c17) form2_midp_time_pane_ParamLimits

0x7d90,	// (0x00007d90) cell_sct_catagory_button_pane_ParamLimits

0x7d90,	// (0x00007d90) cell_sct_catagory_button_pane

0x5e75,	// (0x00005e75) bg_button_pane_cp01_ParamLimits

0x5e75,	// (0x00005e75) bg_button_pane_cp01

0x5eb0,	// (0x00005eb0) cell_sct_catagory_button_pane_g1

0xc200,	// (0x0000c200) popup_tb_extension_window

0xd79e,	// (0x0000d79e) aid_size_cell_ext_ParamLimits

0xd79e,	// (0x0000d79e) aid_size_cell_ext

0x0b09,	// (0x00000b09) bg_tb_trans_pane_cp1_ParamLimits

0x0b09,	// (0x00000b09) bg_tb_trans_pane_cp1

0xd7c4,	// (0x0000d7c4) grid_tb_ext_pane_ParamLimits

0xd7c4,	// (0x0000d7c4) grid_tb_ext_pane

0xd7fa,	// (0x0000d7fa) cell_tb_ext_pane_ParamLimits

0xd7fa,	// (0x0000d7fa) cell_tb_ext_pane

0xd81e,	// (0x0000d81e) cell_tb_ext_pane_g1_ParamLimits

0xd81e,	// (0x0000d81e) cell_tb_ext_pane_g1

0x7e1a,	// (0x00007e1a) cell_tb_ext_pane_t1

0x07a6,	// (0x000007a6) list_highlight_pane_cp11_ParamLimits

0x07a6,	// (0x000007a6) list_highlight_pane_cp11

0xae9b,	// (0x0000ae9b) popup_uni_indicator_window_ParamLimits

0xae9b,	// (0x0000ae9b) popup_uni_indicator_window

0x11fd,	// (0x000011fd) bg_popup_sub_pane_cp14

0x7e35,	// (0x00007e35) list_uniindi_pane

0x7e41,	// (0x00007e41) uniindi_top_pane

0x07a6,	// (0x000007a6) bg_uniindi_top_pane

0x7e60,	// (0x00007e60) uniindi_top_pane_g1

0x7e76,	// (0x00007e76) uniindi_top_pane_g2

0x0003,

0xab61,	// (0x0000ab61) uniindi_top_pane_g

0x7ea0,	// (0x00007ea0) uniindi_top_pane_t1

0x7eca,	// (0x00007eca) list_single_uniindi_pane_ParamLimits

0x7eca,	// (0x00007eca) list_single_uniindi_pane

0x5eb0,	// (0x00005eb0) bg_uniindi_top_pane_g1

0x7edc,	// (0x00007edc) list_single_uniindi_pane_g1

0x7eef,	// (0x00007eef) list_single_uniindi_pane_t1

0x0020,	// (0x00000020) control_bg_pane

0x7f14,	// (0x00007f14) bg_sctrl_sk_pane_cp1

0x7f1d,	// (0x00007f1d) bg_sctrl_sk_pane_cp2

0x7f26,	// (0x00007f26) control_bg_pane_g1

0x7f2f,	// (0x00007f2f) control_bg_pane_g2

0x0001,

0xab6a,	// (0x0000ab6a) control_bg_pane_g

0x592c,	// (0x0000592c) cell_indicator_nsta_pane_g1_ParamLimits

0xcd7d,	// (0x0000cd7d) cell_indicator_nsta_pane_g2_ParamLimits

0xec05,	// (0x0000ec05) cell_indicator_nsta_pane_g_ParamLimits

0x5c7f,	// (0x00005c7f) form2_midp_time_pane_t1_ParamLimits

0x5f09,	// (0x00005f09) main_idle_act4_pane_ParamLimits

0x5f09,	// (0x00005f09) main_idle_act4_pane

0xc200,	// (0x0000c200) popup_tb_extension_window_ParamLimits

0xd7e4,	// (0x0000d7e4) tb_ext_find_pane_ParamLimits

0xd7e4,	// (0x0000d7e4) tb_ext_find_pane

0x7f38,	// (0x00007f38) ai_gene_pane_1_cp1

0x2496,	// (0x00002496) ai_gene_pane_2_cp1

0x7f40,	// (0x00007f40) list_single_idle_plugin_calendar_pane

0x7f49,	// (0x00007f49) list_single_idle_plugin_notification_pane

0x7f52,	// (0x00007f52) list_single_idle_plugin_player_pane

0xd83b,	// (0x0000d83b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd83b,	// (0x0000d83b) list_single_idle_plugin_shortcut_pane

0xd863,	// (0x0000d863) main_idle_act4_pane_t1

0xd879,	// (0x0000d879) main_idle_act4_pane_t2

0x0001,

0xeca7,	// (0x0000eca7) main_idle_act4_pane_t

0xd88f,	// (0x0000d88f) middle_sk_idle_act4_pane_ParamLimits

0xd88f,	// (0x0000d88f) middle_sk_idle_act4_pane

0xd8ab,	// (0x0000d8ab) popup_clock_digital_analogue_window_cp2

0xd8d1,	// (0x0000d8d1) shortcut_wheel_idle_act4_pane_ParamLimits

0xd8d1,	// (0x0000d8d1) shortcut_wheel_idle_act4_pane

0x5eb0,	// (0x00005eb0) shortcut_wheel_idle_act4_pane_g1

0x5eb0,	// (0x00005eb0) shortcut_wheel_idle_act4_pane_g2

0x5eb0,	// (0x00005eb0) shortcut_wheel_idle_act4_pane_g3

0x5eb0,	// (0x00005eb0) shortcut_wheel_idle_act4_pane_g4

0x5eb0,	// (0x00005eb0) shortcut_wheel_idle_act4_pane_g5

0x7fe5,	// (0x00007fe5) shortcut_wheel_idle_act4_pane_g6

0x7fed,	// (0x00007fed) shortcut_wheel_idle_act4_pane_g7

0x7ff5,	// (0x00007ff5) shortcut_wheel_idle_act4_pane_g8

0x7ffd,	// (0x00007ffd) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xab74,	// (0x0000ab74) shortcut_wheel_idle_act4_pane_g

0x5fb8,	// (0x00005fb8) middle_sk_idle_act4_pane_g1_ParamLimits

0x5fb8,	// (0x00005fb8) middle_sk_idle_act4_pane_g1

0xd94c,	// (0x0000d94c) middle_sk_idle_act4_pane_g2_ParamLimits

0xd94c,	// (0x0000d94c) middle_sk_idle_act4_pane_g2

0x0001,

0xecbc,	// (0x0000ecbc) middle_sk_idle_act4_pane_g_ParamLimits

0xecbc,	// (0x0000ecbc) middle_sk_idle_act4_pane_g

0xd964,	// (0x0000d964) middle_sk_idle_act4_pane_t1_ParamLimits

0xd964,	// (0x0000d964) middle_sk_idle_act4_pane_t1

0xd993,	// (0x0000d993) grid_ai_shortcut_pane_ParamLimits

0xd993,	// (0x0000d993) grid_ai_shortcut_pane

0xd9b0,	// (0x0000d9b0) list_highlight_pane_cp16_ParamLimits

0xd9b0,	// (0x0000d9b0) list_highlight_pane_cp16

0xd9bd,	// (0x0000d9bd) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd9bd,	// (0x0000d9bd) list_single_idle_plugin_shortcut_pane_g1

0xd9c9,	// (0x0000d9c9) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd9c9,	// (0x0000d9c9) list_single_idle_plugin_shortcut_pane_g2

0xd9e5,	// (0x0000d9e5) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd9e5,	// (0x0000d9e5) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xecc1,	// (0x0000ecc1) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xecc1,	// (0x0000ecc1) list_single_idle_plugin_shortcut_pane_g

0xd9fa,	// (0x0000d9fa) cell_ai_shortcut_pane_ParamLimits

0xd9fa,	// (0x0000d9fa) cell_ai_shortcut_pane

0xda10,	// (0x0000da10) cell_ai_shortcut_pane_g1_ParamLimits

0xda10,	// (0x0000da10) cell_ai_shortcut_pane_g1

0x7f38,	// (0x00007f38) ai_gene_pane_1_cp2

0x812a,	// (0x0000812a) ai_gene_pane_2_cp2

0x8132,	// (0x00008132) list_highlight_pane_cp15

0x813b,	// (0x0000813b) list_single_idle_plugin_calendar_pane_g1

0x8132,	// (0x00008132) list_highlight_pane_cp17

0x8143,	// (0x00008143) list_single_idle_plugin_calendar_pane_g1_copy1

0x814b,	// (0x0000814b) list_single_idle_plugin_player_pane_g1

0x4fe1,	// (0x00004fe1) list_single_idle_plugin_player_pane_g2

0x0001,

0xaba3,	// (0x0000aba3) list_single_idle_plugin_player_pane_g

0x8153,	// (0x00008153) list_single_idle_plugin_player_pane_t1

0x8161,	// (0x00008161) list_single_idle_plugin_player_pane_t2

0x816f,	// (0x0000816f) list_single_idle_plugin_player_pane_t3

0x817d,	// (0x0000817d) list_single_idle_plugin_player_pane_t4

0x0003,

0xaba8,	// (0x0000aba8) list_single_idle_plugin_player_pane_t

0x818b,	// (0x0000818b) wait_bar_pane_cp15

0x8193,	// (0x00008193) grid_ai_notification_pane

0x4fe1,	// (0x00004fe1) list_single_idle_plugin_notification_pane_g1

0xda32,	// (0x0000da32) cell_ai_notification_pane_ParamLimits

0xda32,	// (0x0000da32) cell_ai_notification_pane

0x81a9,	// (0x000081a9) cell_ai_notification_pane_g1

0x81b1,	// (0x000081b1) cell_ai_notification_pane_t1

0xda3f,	// (0x0000da3f) tb_ext_find_button_pane

0xda47,	// (0x0000da47) tb_ext_find_pane_g1

0xda4f,	// (0x0000da4f) tb_ext_find_pane_t1

0x1b31,	// (0x00001b31) tb_ext_find_button_pane_g1

0x81dd,	// (0x000081dd) tb_ext_find_button_pane_g2

0x0001,

0xabb1,	// (0x0000abb1) tb_ext_find_button_pane_g

0xd863,	// (0x0000d863) main_idle_act4_pane_t1_ParamLimits

0xd879,	// (0x0000d879) main_idle_act4_pane_t2_ParamLimits

0xeca7,	// (0x0000eca7) main_idle_act4_pane_t_ParamLimits

0xd8ab,	// (0x0000d8ab) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd8c1,	// (0x0000d8c1) sat_plugin_idle_act4_pane_ParamLimits

0xd8c1,	// (0x0000d8c1) sat_plugin_idle_act4_pane

0xda5d,	// (0x0000da5d) sat_plugin_idle_act4_pane_t1_ParamLimits

0xda5d,	// (0x0000da5d) sat_plugin_idle_act4_pane_t1

0xda75,	// (0x0000da75) sat_plugin_idle_act4_pane_t2_ParamLimits

0xda75,	// (0x0000da75) sat_plugin_idle_act4_pane_t2

0xda8d,	// (0x0000da8d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xda8d,	// (0x0000da8d) sat_plugin_idle_act4_pane_t3

0xdaa5,	// (0x0000daa5) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdaa5,	// (0x0000daa5) sat_plugin_idle_act4_pane_t4

0x0003,

0xecc8,	// (0x0000ecc8) sat_plugin_idle_act4_pane_t_ParamLimits

0xecc8,	// (0x0000ecc8) sat_plugin_idle_act4_pane_t

0x0258,	// (0x00000258) popup_battery_window_ParamLimits

0x0258,	// (0x00000258) popup_battery_window

0x07a6,	// (0x000007a6) bg_popup_sub_pane_cp25_ParamLimits

0x07a6,	// (0x000007a6) bg_popup_sub_pane_cp25

0x8232,	// (0x00008232) popup_battery_window_g1_ParamLimits

0x8232,	// (0x00008232) popup_battery_window_g1

0x823e,	// (0x0000823e) popup_battery_window_t1_ParamLimits

0x823e,	// (0x0000823e) popup_battery_window_t1

0x8250,	// (0x00008250) popup_battery_window_t2_ParamLimits

0x8250,	// (0x00008250) popup_battery_window_t2

0x0001,

0xabbf,	// (0x0000abbf) popup_battery_window_t_ParamLimits

0xabbf,	// (0x0000abbf) popup_battery_window_t

0xbaba,	// (0x0000baba) midp_canvas_pane_ParamLimits

0xbb0f,	// (0x0000bb0f) midp_keypad_pane_ParamLimits

0xbb0f,	// (0x0000bb0f) midp_keypad_pane

0x28cb,	// (0x000028cb) main_midp_pane_ParamLimits

0x59b2,	// (0x000059b2) signal_pane_g2_cp_ParamLimits

0xdabd,	// (0x0000dabd) aid_size_cell_midp_keypad_ParamLimits

0xdabd,	// (0x0000dabd) aid_size_cell_midp_keypad

0xdadb,	// (0x0000dadb) midp_keyp_game_grid_pane_ParamLimits

0xdadb,	// (0x0000dadb) midp_keyp_game_grid_pane

0xdafa,	// (0x0000dafa) midp_keyp_rocker_pane_ParamLimits

0xdafa,	// (0x0000dafa) midp_keyp_rocker_pane

0xdb3b,	// (0x0000db3b) midp_keyp_sk_left_pane_ParamLimits

0xdb3b,	// (0x0000db3b) midp_keyp_sk_left_pane

0xdb8d,	// (0x0000db8d) midp_keyp_sk_right_pane_ParamLimits

0xdb8d,	// (0x0000db8d) midp_keyp_sk_right_pane

0x0020,	// (0x00000020) bg_button_pane_cp03

0xdbd9,	// (0x0000dbd9) midp_keyp_sk_left_pane_g1

0x0020,	// (0x00000020) bg_button_pane_cp04

0xdbd9,	// (0x0000dbd9) midp_keyp_sk_right_pane_g1

0x5eb0,	// (0x00005eb0) midp_keyp_rocker_pane_g1

0xdbe2,	// (0x0000dbe2) keyp_game_cell_pane_ParamLimits

0xdbe2,	// (0x0000dbe2) keyp_game_cell_pane

0x0020,	// (0x00000020) bg_button_pane_cp02

0xdc04,	// (0x0000dc04) keyp_game_cell_pane_g1

0xae4c,	// (0x0000ae4c) popup_fep_vkb2_window_ParamLimits

0xae4c,	// (0x0000ae4c) popup_fep_vkb2_window

0xdc0d,	// (0x0000dc0d) aid_size_cell_vkb2_ParamLimits

0xdc0d,	// (0x0000dc0d) aid_size_cell_vkb2

0xdc39,	// (0x0000dc39) popup_fep_vkb2_window_g1_ParamLimits

0xdc39,	// (0x0000dc39) popup_fep_vkb2_window_g1

0xdc89,	// (0x0000dc89) vkb2_area_bottom_pane_ParamLimits

0xdc89,	// (0x0000dc89) vkb2_area_bottom_pane

0xdcc7,	// (0x0000dcc7) vkb2_area_keypad_pane_ParamLimits

0xdcc7,	// (0x0000dcc7) vkb2_area_keypad_pane

0xdd05,	// (0x0000dd05) vkb2_area_top_pane_ParamLimits

0xdd05,	// (0x0000dd05) vkb2_area_top_pane

0xdd87,	// (0x0000dd87) vkb2_top_entry_pane_ParamLimits

0xdd87,	// (0x0000dd87) vkb2_top_entry_pane

0xddb4,	// (0x0000ddb4) vkb2_top_grid_left_pane_ParamLimits

0xddb4,	// (0x0000ddb4) vkb2_top_grid_left_pane

0xddd5,	// (0x0000ddd5) vkb2_top_grid_right_pane_ParamLimits

0xddd5,	// (0x0000ddd5) vkb2_top_grid_right_pane

0x858a,	// (0x0000858a) vkb2_cell_keypad_pane_ParamLimits

0x858a,	// (0x0000858a) vkb2_cell_keypad_pane

0xde1d,	// (0x0000de1d) vkb2_area_bottom_grid_pane_ParamLimits

0xde1d,	// (0x0000de1d) vkb2_area_bottom_grid_pane

0xde43,	// (0x0000de43) vkb2_area_bottom_pane_g1_ParamLimits

0xde43,	// (0x0000de43) vkb2_area_bottom_pane_g1

0xde69,	// (0x0000de69) vkb2_area_bottom_pane_g2_ParamLimits

0xde69,	// (0x0000de69) vkb2_area_bottom_pane_g2

0xde9a,	// (0x0000de9a) vkb2_area_bottom_pane_g3_ParamLimits

0xde9a,	// (0x0000de9a) vkb2_area_bottom_pane_g3

0x0002,

0xecd1,	// (0x0000ecd1) vkb2_area_bottom_pane_g_ParamLimits

0xecd1,	// (0x0000ecd1) vkb2_area_bottom_pane_g

0x8702,	// (0x00008702) vkb2_top_cell_left_pane_ParamLimits

0x8702,	// (0x00008702) vkb2_top_cell_left_pane

0xdef0,	// (0x0000def0) vkb2_top_entry_pane_g1_ParamLimits

0xdef0,	// (0x0000def0) vkb2_top_entry_pane_g1

0xdefe,	// (0x0000defe) vkb2_top_entry_pane_t1_ParamLimits

0xdefe,	// (0x0000defe) vkb2_top_entry_pane_t1

0x876a,	// (0x0000876a) vkb2_top_entry_pane_t2_ParamLimits

0x876a,	// (0x0000876a) vkb2_top_entry_pane_t2

0x879c,	// (0x0000879c) vkb2_top_entry_pane_t3_ParamLimits

0x879c,	// (0x0000879c) vkb2_top_entry_pane_t3

0x0002,

0xecd8,	// (0x0000ecd8) vkb2_top_entry_pane_t_ParamLimits

0xecd8,	// (0x0000ecd8) vkb2_top_entry_pane_t

0xdf37,	// (0x0000df37) vkb2_top_grid_right_pane_g1_ParamLimits

0xdf37,	// (0x0000df37) vkb2_top_grid_right_pane_g1

0x87f5,	// (0x000087f5) vkb2_top_grid_right_pane_g2_ParamLimits

0x87f5,	// (0x000087f5) vkb2_top_grid_right_pane_g2

0x880d,	// (0x0000880d) vkb2_top_grid_right_pane_g3_ParamLimits

0x880d,	// (0x0000880d) vkb2_top_grid_right_pane_g3

0xdf4d,	// (0x0000df4d) vkb2_top_grid_right_pane_g4_ParamLimits

0xdf4d,	// (0x0000df4d) vkb2_top_grid_right_pane_g4

0x0003,

0xecdf,	// (0x0000ecdf) vkb2_top_grid_right_pane_g_ParamLimits

0xecdf,	// (0x0000ecdf) vkb2_top_grid_right_pane_g

0x883b,	// (0x0000883b) vkb2_top_cell_left_pane_g1

0x8852,	// (0x00008852) vkb2_cell_keypad_pane_g1_ParamLimits

0x8852,	// (0x00008852) vkb2_cell_keypad_pane_g1

0x8860,	// (0x00008860) vkb2_cell_keypad_pane_t1_ParamLimits

0x8860,	// (0x00008860) vkb2_cell_keypad_pane_t1

0x8877,	// (0x00008877) vkb2_cell_bottom_grid_pane_ParamLimits

0x8877,	// (0x00008877) vkb2_cell_bottom_grid_pane

0x88b0,	// (0x000088b0) vkb2_cell_bottom_grid_pane_g1

0xd8f0,	// (0x0000d8f0) aid_call2_pane_cp02

0xd8f8,	// (0x0000d8f8) aid_call_pane_cp02

0xd900,	// (0x0000d900) clock_digital_number_pane_cp10

0xd908,	// (0x0000d908) clock_digital_number_pane_cp11

0xd910,	// (0x0000d910) clock_digital_number_pane_cp12

0xd918,	// (0x0000d918) clock_digital_number_pane_cp13

0xd920,	// (0x0000d920) clock_digital_separator_pane_cp10

0x1b31,	// (0x00001b31) popup_clock_digital_analogue_window_cp2_g1

0x1b31,	// (0x00001b31) popup_clock_digital_analogue_window_cp2_g2

0xd928,	// (0x0000d928) popup_clock_digital_analogue_window_cp2_g3

0x1b31,	// (0x00001b31) popup_clock_digital_analogue_window_cp2_g4

0xd928,	// (0x0000d928) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xecac,	// (0x0000ecac) popup_clock_digital_analogue_window_cp2_g

0xd930,	// (0x0000d930) popup_clock_digital_analogue_window_cp2_t1

0xd93e,	// (0x0000d93e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xecb7,	// (0x0000ecb7) popup_clock_digital_analogue_window_cp2_t

0x5eb0,	// (0x00005eb0) clock_digital_number_pane_cp10_g1

0x5eb0,	// (0x00005eb0) clock_digital_number_pane_cp10_g2

0x0001,

0xa981,	// (0x0000a981) clock_digital_number_pane_cp10_g

0x5eb0,	// (0x00005eb0) clock_digital_separator_pane_cp10_g1

0x5eb0,	// (0x00005eb0) clock_digital_separator_pane_cp10_g2

0x0001,

0xa981,	// (0x0000a981) clock_digital_separator_pane_cp10_g

0x7e82,	// (0x00007e82) uniindi_top_pane_g3

0x7e93,	// (0x00007e93) uniindi_top_pane_g4

0x85f5,	// (0x000085f5) vkb2_row_keypad_pane_ParamLimits

0x85f5,	// (0x000085f5) vkb2_row_keypad_pane

0x88cc,	// (0x000088cc) vkb2_cell_t_keypad_pane_ParamLimits

0x88cc,	// (0x000088cc) vkb2_cell_t_keypad_pane

0x88d9,	// (0x000088d9) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x88d9,	// (0x000088d9) vkb2_cell_t_keypad_pane_cp08

0x88e9,	// (0x000088e9) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x88e9,	// (0x000088e9) vkb2_cell_t_keypad_pane_cp09

0x88fa,	// (0x000088fa) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x88fa,	// (0x000088fa) vkb2_cell_t_keypad_pane_cp01

0x890a,	// (0x0000890a) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x890a,	// (0x0000890a) vkb2_cell_t_keypad_pane_cp02

0x891a,	// (0x0000891a) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x891a,	// (0x0000891a) vkb2_cell_t_keypad_pane_cp03

0x892a,	// (0x0000892a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x892a,	// (0x0000892a) vkb2_cell_t_keypad_pane_cp04

0x893a,	// (0x0000893a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x893a,	// (0x0000893a) vkb2_cell_t_keypad_pane_cp05

0x894a,	// (0x0000894a) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x894a,	// (0x0000894a) vkb2_cell_t_keypad_pane_cp06

0x895a,	// (0x0000895a) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x895a,	// (0x0000895a) vkb2_cell_t_keypad_pane_cp07

0x896a,	// (0x0000896a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x896a,	// (0x0000896a) vkb2_cell_t_keypad_pane_cp10

0x62ee,	// (0x000062ee) vkb2_cell_t_keypad_pane_g1

0x897f,	// (0x0000897f) vkb2_cell_t_keypad_pane_t1

0x0020,	// (0x00000020) popup_grid_graphic2_window

0xdf63,	// (0x0000df63) aid_size_cell_graphic2_ParamLimits

0xdf63,	// (0x0000df63) aid_size_cell_graphic2

0xdfa1,	// (0x0000dfa1) bg_popup_window_pane_cp21_ParamLimits

0xdfa1,	// (0x0000dfa1) bg_popup_window_pane_cp21

0xdfaf,	// (0x0000dfaf) graphic2_pages_pane_ParamLimits

0xdfaf,	// (0x0000dfaf) graphic2_pages_pane

0xdff8,	// (0x0000dff8) grid_graphic2_control_pane_ParamLimits

0xdff8,	// (0x0000dff8) grid_graphic2_control_pane

0xe036,	// (0x0000e036) grid_graphic2_pane_ParamLimits

0xe036,	// (0x0000e036) grid_graphic2_pane

0xe0a5,	// (0x0000e0a5) cell_graphic2_pane

0x0020,	// (0x00000020) main_comp_mode_pane

0x764b,	// (0x0000764b) list_ai3_gene_pane_ParamLimits

0xd5dc,	// (0x0000d5dc) bg_popup_window_pane_cp19_ParamLimits

0x7a1a,	// (0x00007a1a) bg_touch_area_indi_pane_ParamLimits

0x7a1a,	// (0x00007a1a) bg_touch_area_indi_pane

0x7a30,	// (0x00007a30) bg_touch_area_indi_pane_cp01_ParamLimits

0x7a30,	// (0x00007a30) bg_touch_area_indi_pane_cp01

0x7a46,	// (0x00007a46) bg_touch_area_indi_pane_cp02_ParamLimits

0x7a46,	// (0x00007a46) bg_touch_area_indi_pane_cp02

0x7a5c,	// (0x00007a5c) bg_touch_area_indi_pane_cp03_ParamLimits

0x7a5c,	// (0x00007a5c) bg_touch_area_indi_pane_cp03

0x7a72,	// (0x00007a72) popup_slider_window_g1_ParamLimits

0x7a8e,	// (0x00007a8e) popup_slider_window_g2_ParamLimits

0x7aaa,	// (0x00007aaa) popup_slider_window_g3_ParamLimits

0xec90,	// (0x0000ec90) popup_slider_window_g_ParamLimits

0x7b06,	// (0x00007b06) popup_slider_window_t1_ParamLimits

0x7b78,	// (0x00007b78) small_volume_slider_vertical_pane_ParamLimits

0xe0a5,	// (0x0000e0a5) cell_graphic2_pane_ParamLimits

0xe0f0,	// (0x0000e0f0) bg_button_pane_cp10_ParamLimits

0xe0f0,	// (0x0000e0f0) bg_button_pane_cp10

0xe101,	// (0x0000e101) bg_button_pane_cp11_ParamLimits

0xe101,	// (0x0000e101) bg_button_pane_cp11

0xe112,	// (0x0000e112) graphic2_pages_pane_g1_ParamLimits

0xe112,	// (0x0000e112) graphic2_pages_pane_g1

0xe12d,	// (0x0000e12d) graphic2_pages_pane_g2_ParamLimits

0xe12d,	// (0x0000e12d) graphic2_pages_pane_g2

0x0001,

0xeced,	// (0x0000eced) graphic2_pages_pane_g_ParamLimits

0xeced,	// (0x0000eced) graphic2_pages_pane_g

0xe145,	// (0x0000e145) graphic2_pages_pane_t1_ParamLimits

0xe145,	// (0x0000e145) graphic2_pages_pane_t1

0xe15d,	// (0x0000e15d) cell_graphic2_control_pane_ParamLimits

0xe15d,	// (0x0000e15d) cell_graphic2_control_pane

0xe187,	// (0x0000e187) cell_graphic2_pane_g1_ParamLimits

0xe187,	// (0x0000e187) cell_graphic2_pane_g1

0x614b,	// (0x0000614b) cell_graphic2_pane_g2_ParamLimits

0x614b,	// (0x0000614b) cell_graphic2_pane_g2

0xe194,	// (0x0000e194) cell_graphic2_pane_g3_ParamLimits

0xe194,	// (0x0000e194) cell_graphic2_pane_g3

0x6158,	// (0x00006158) cell_graphic2_pane_g4_ParamLimits

0x6158,	// (0x00006158) cell_graphic2_pane_g4

0xe1a1,	// (0x0000e1a1) cell_graphic2_pane_g5_ParamLimits

0xe1a1,	// (0x0000e1a1) cell_graphic2_pane_g5

0x0004,

0xecf2,	// (0x0000ecf2) cell_graphic2_pane_g_ParamLimits

0xecf2,	// (0x0000ecf2) cell_graphic2_pane_g

0xe1be,	// (0x0000e1be) cell_graphic2_pane_t1_ParamLimits

0xe1be,	// (0x0000e1be) cell_graphic2_pane_t1

0x41fd,	// (0x000041fd) grid_highlight_pane_cp11_ParamLimits

0x41fd,	// (0x000041fd) grid_highlight_pane_cp11

0x07a6,	// (0x000007a6) bg_button_pane_cp05

0xe1f3,	// (0x0000e1f3) cell_graphic2_control_pane_g1

0x5eb0,	// (0x00005eb0) bg_touch_area_indi_pane_g1

0x8c00,	// (0x00008c00) aid_cmod_rocker_key_size

0x8c0a,	// (0x00008c0a) aid_cmode_itu_key_size

0x8c14,	// (0x00008c14) main_cmode_video_pane

0x8c1c,	// (0x00008c1c) main_comp_mode_itu_pane

0x8c26,	// (0x00008c26) main_comp_mode_rocker_pane

0x8c2e,	// (0x00008c2e) cell_cmode_rocker_pane_ParamLimits

0x8c2e,	// (0x00008c2e) cell_cmode_rocker_pane

0x8c40,	// (0x00008c40) cell_cmode_itu_pane_ParamLimits

0x8c40,	// (0x00008c40) cell_cmode_itu_pane

0x11fd,	// (0x000011fd) bg_button_pane_cp06_ParamLimits

0x11fd,	// (0x000011fd) bg_button_pane_cp06

0x62ee,	// (0x000062ee) cell_cmode_rocker_pane_g1_ParamLimits

0x62ee,	// (0x000062ee) cell_cmode_rocker_pane_g1

0x7cec,	// (0x00007cec) cell_cmode_rocker_pane_g2_ParamLimits

0x7cec,	// (0x00007cec) cell_cmode_rocker_pane_g2

0x0001,

0xabf5,	// (0x0000abf5) cell_cmode_rocker_pane_g_ParamLimits

0xabf5,	// (0x0000abf5) cell_cmode_rocker_pane_g

0x0020,	// (0x00000020) bg_button_pane_cp07

0x8c55,	// (0x00008c55) cell_cmode_itu_pane_g1

0x8c5e,	// (0x00008c5e) cell_cmode_itu_pane_t1

0x8c6c,	// (0x00008c6c) cell_cmode_itu_pane_t2

0x0001,

0xabfa,	// (0x0000abfa) cell_cmode_itu_pane_t

0x7f04,	// (0x00007f04) aid_touch_ctrl_left

0x7f0c,	// (0x00007f0c) aid_touch_ctrl_right

0x0020,	// (0x00000020) compa_mode_pane

0xe21b,	// (0x0000e21b) aid_cmod_rocker_key_size_cp

0xe225,	// (0x0000e225) aid_cmode_itu_key_size_cp

0x8c8e,	// (0x00008c8e) compa_mode_pane_g1

0x8c96,	// (0x00008c96) compa_mode_pane_g2

0x8c9e,	// (0x00008c9e) compa_mode_pane_g3

0x0002,

0xabff,	// (0x0000abff) compa_mode_pane_g

0xe22f,	// (0x0000e22f) main_comp_mode_itu_pane_cp

0xe239,	// (0x0000e239) main_comp_mode_rocker_pane_cp

0xe243,	// (0x0000e243) cell_cmode_itu_pane_cp_ParamLimits

0xe243,	// (0x0000e243) cell_cmode_itu_pane_cp

0xe258,	// (0x0000e258) cell_cmode_rocker_pane_cp_ParamLimits

0xe258,	// (0x0000e258) cell_cmode_rocker_pane_cp

0x11fd,	// (0x000011fd) bg_button_pane_cp06_cp_ParamLimits

0x11fd,	// (0x000011fd) bg_button_pane_cp06_cp

0x62ee,	// (0x000062ee) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x62ee,	// (0x000062ee) cell_cmode_rocker_pane_g1_cp

0x5eb0,	// (0x00005eb0) cell_cmode_rocker_pane_g2_cp

0x0020,	// (0x00000020) bg_button_pane_cp07_cp

0xe26a,	// (0x0000e26a) cell_cmode_itu_pane_g1_cp

0xe273,	// (0x0000e273) cell_cmode_itu_pane_t1_cp

0xe281,	// (0x0000e281) cell_cmode_itu_pane_t2_cp

0xcb56,	// (0x0000cb56) settings_code_pane_cp2

0x0474,	// (0x00000474) bg_popup_window_pane_cp3_ParamLimits

0x09a4,	// (0x000009a4) heading_pane_cp3_ParamLimits

0x09b3,	// (0x000009b3) listscroll_popup_graphic_pane_ParamLimits

0x5f17,	// (0x00005f17) fep_hwr_aid_pane_ParamLimits

0x7bf0,	// (0x00007bf0) aid_touch_sctrl_top_ParamLimits

0x7bfd,	// (0x00007bfd) sctrl_sk_top_pane_g1_ParamLimits

0x62ee,	// (0x000062ee) sctrl_sk_top_pane_g2_ParamLimits

0xab35,	// (0x0000ab35) sctrl_sk_top_pane_g_ParamLimits

0x7c0a,	// (0x00007c0a) sctrl_sk_top_pane_t1_ParamLimits

0x7bf0,	// (0x00007bf0) aid_touch_sctrl_bottom_ParamLimits

0x7c0a,	// (0x00007c0a) sctrl_sk_bottom_pane_t1_ParamLimits

0x7e4e,	// (0x00007e4e) aid_area_touch_clock

0xdd47,	// (0x0000dd47) aid_vkb2_area_top_pane_cell_ParamLimits

0xdd47,	// (0x0000dd47) aid_vkb2_area_top_pane_cell

0xddf6,	// (0x0000ddf6) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xddf6,	// (0x0000ddf6) aid_vkb2_area_bottom_pane_cell

0x8722,	// (0x00008722) popup_char_count_window

0x8d02,	// (0x00008d02) popup_char_count_window_g1

0x8d0b,	// (0x00008d0b) popup_char_count_window_g2

0x8d14,	// (0x00008d14) popup_char_count_window_g3

0x0002,

0xac06,	// (0x0000ac06) popup_char_count_window_g

0x8d1d,	// (0x00008d1d) popup_char_count_window_t1

0x83d3,	// (0x000083d3) popup_fep_char_preview_window_ParamLimits

0x83d3,	// (0x000083d3) popup_fep_char_preview_window

0xdd67,	// (0x0000dd67) vkb2_top_candi_pane_ParamLimits

0xdd67,	// (0x0000dd67) vkb2_top_candi_pane

0xe28f,	// (0x0000e28f) cell_vkb2_top_candi_pane_ParamLimits

0xe28f,	// (0x0000e28f) cell_vkb2_top_candi_pane

0x3aa8,	// (0x00003aa8) bg_popup_fep_char_preview_window_ParamLimits

0x3aa8,	// (0x00003aa8) bg_popup_fep_char_preview_window

0x8d61,	// (0x00008d61) popup_fep_char_preview_window_t1_ParamLimits

0x8d61,	// (0x00008d61) popup_fep_char_preview_window_t1

0x8d9b,	// (0x00008d9b) bg_popup_fep_char_preview_window_g1

0x8da3,	// (0x00008da3) bg_popup_fep_char_preview_window_g2

0x8dab,	// (0x00008dab) bg_popup_fep_char_preview_window_g3

0x8db3,	// (0x00008db3) bg_popup_fep_char_preview_window_g4

0x8dbb,	// (0x00008dbb) bg_popup_fep_char_preview_window_g5

0x8dc3,	// (0x00008dc3) bg_popup_fep_char_preview_window_g6

0x8dcb,	// (0x00008dcb) bg_popup_fep_char_preview_window_g7

0x8dd3,	// (0x00008dd3) bg_popup_fep_char_preview_window_g8

0x8ddb,	// (0x00008ddb) bg_popup_fep_char_preview_window_g9

0x0009,

0xed02,	// (0x0000ed02) bg_popup_fep_char_preview_window_g

0x62ee,	// (0x000062ee) cell_vkb2_top_candi_pane_g1_ParamLimits

0x62ee,	// (0x000062ee) cell_vkb2_top_candi_pane_g1

0x6645,	// (0x00006645) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6645,	// (0x00006645) cell_vkb2_top_candi_pane_g2

0x6666,	// (0x00006666) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6666,	// (0x00006666) cell_vkb2_top_candi_pane_g3

0x8deb,	// (0x00008deb) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8deb,	// (0x00008deb) cell_vkb2_top_candi_pane_g4

0x8e0c,	// (0x00008e0c) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8e0c,	// (0x00008e0c) cell_vkb2_top_candi_pane_g5

0x7cec,	// (0x00007cec) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7cec,	// (0x00007cec) cell_vkb2_top_candi_pane_g6

0x0005,

0xac22,	// (0x0000ac22) cell_vkb2_top_candi_pane_g_ParamLimits

0xac22,	// (0x0000ac22) cell_vkb2_top_candi_pane_g

0x8e2d,	// (0x00008e2d) cell_vkb2_top_candi_pane_t1

0x48d2,	// (0x000048d2) aid_size_touch_slider_mark_ParamLimits

0x48d2,	// (0x000048d2) aid_size_touch_slider_mark

0xdfe3,	// (0x0000dfe3) grid_graphic2_catg_pane_ParamLimits

0xdfe3,	// (0x0000dfe3) grid_graphic2_catg_pane

0xe07a,	// (0x0000e07a) popup_grid_graphic2_window_t1_ParamLimits

0xe07a,	// (0x0000e07a) popup_grid_graphic2_window_t1

0xe08f,	// (0x0000e08f) popup_grid_graphic2_window_t2_ParamLimits

0xe08f,	// (0x0000e08f) popup_grid_graphic2_window_t2

0x0001,

0xece8,	// (0x0000ece8) popup_grid_graphic2_window_t_ParamLimits

0xece8,	// (0x0000ece8) popup_grid_graphic2_window_t

0x07a6,	// (0x000007a6) bg_button_pane_cp05_ParamLimits

0xe1f3,	// (0x0000e1f3) cell_graphic2_control_pane_g1_ParamLimits

0x7eca,	// (0x00007eca) cell_graphic2_catg_pane_ParamLimits

0x7eca,	// (0x00007eca) cell_graphic2_catg_pane

0x0020,	// (0x00000020) bg_button_pane_cp12

0xe2db,	// (0x0000e2db) cell_graphic2_catg_pane_g1

0x7e1a,	// (0x00007e1a) cell_tb_ext_pane_t1_ParamLimits

0x87b2,	// (0x000087b2) vkb2_top_cell_right_narrow_pane_ParamLimits

0x87b2,	// (0x000087b2) vkb2_top_cell_right_narrow_pane

0x87ca,	// (0x000087ca) vkb2_top_cell_right_wide_pane_ParamLimits

0x87ca,	// (0x000087ca) vkb2_top_cell_right_wide_pane

0x5f09,	// (0x00005f09) bg_vkb2_func_pane_ParamLimits

0x5f09,	// (0x00005f09) bg_vkb2_func_pane

0x883b,	// (0x0000883b) vkb2_top_cell_left_pane_g1_ParamLimits

0x5f09,	// (0x00005f09) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5f09,	// (0x00005f09) bg_vkb2_fuc_pane_cp03

0x88b0,	// (0x000088b0) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x32d8,	// (0x000032d8) bg_vkb2_func_pane_g1

0x32e0,	// (0x000032e0) bg_vkb2_func_pane_g2

0x32f0,	// (0x000032f0) bg_vkb2_func_pane_g3

0x32e8,	// (0x000032e8) bg_vkb2_func_pane_g4

0x32f8,	// (0x000032f8) bg_vkb2_func_pane_g5

0x3300,	// (0x00003300) bg_vkb2_func_pane_g6

0x3308,	// (0x00003308) bg_vkb2_func_pane_g7

0x3310,	// (0x00003310) bg_vkb2_func_pane_g8

0x32d0,	// (0x000032d0) bg_vkb2_func_pane_g9

0x0008,

0xac2f,	// (0x0000ac2f) bg_vkb2_func_pane_g

0x5f09,	// (0x00005f09) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5f09,	// (0x00005f09) bg_vkb2_fuc_pane_cp01

0x883b,	// (0x0000883b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x883b,	// (0x0000883b) vkb2_top_cell_right_wide_pane_g1

0x5f09,	// (0x00005f09) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5f09,	// (0x00005f09) bg_vkb2_fuc_pane_cp02

0x88b0,	// (0x000088b0) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x88b0,	// (0x000088b0) vkb2_top_cell_right_narrow_pane_g1

0xd52a,	// (0x0000d52a) aid_touch_area_decrease_ParamLimits

0xd52a,	// (0x0000d52a) aid_touch_area_decrease

0xd558,	// (0x0000d558) aid_touch_area_increase_ParamLimits

0xd558,	// (0x0000d558) aid_touch_area_increase

0xd580,	// (0x0000d580) aid_touch_area_mute_ParamLimits

0xd580,	// (0x0000d580) aid_touch_area_mute

0xd5a8,	// (0x0000d5a8) aid_touch_area_slider_ParamLimits

0xd5a8,	// (0x0000d5a8) aid_touch_area_slider

0xd5e8,	// (0x0000d5e8) popup_slider_window_g4_ParamLimits

0xd5e8,	// (0x0000d5e8) popup_slider_window_g4

0xd610,	// (0x0000d610) popup_slider_window_g5_ParamLimits

0xd610,	// (0x0000d610) popup_slider_window_g5

0xd644,	// (0x0000d644) popup_slider_window_g6_ParamLimits

0xd644,	// (0x0000d644) popup_slider_window_g6

0x7b32,	// (0x00007b32) popup_slider_window_t2_ParamLimits

0x7b32,	// (0x00007b32) popup_slider_window_t2

0x0001,

0xab29,	// (0x0000ab29) popup_slider_window_t_ParamLimits

0xab29,	// (0x0000ab29) popup_slider_window_t

0xd660,	// (0x0000d660) slider_pane_ParamLimits

0xd660,	// (0x0000d660) slider_pane

0x8e5f,	// (0x00008e5f) slider_pane_g1_ParamLimits

0x8e5f,	// (0x00008e5f) slider_pane_g1

0x8e73,	// (0x00008e73) slider_pane_g2_ParamLimits

0x8e73,	// (0x00008e73) slider_pane_g2

0x8e89,	// (0x00008e89) slider_pane_g3_ParamLimits

0x8e89,	// (0x00008e89) slider_pane_g3

0x0003,

0xac42,	// (0x0000ac42) slider_pane_g_ParamLimits

0xac42,	// (0x0000ac42) slider_pane_g

0xc23c,	// (0x0000c23c) popup_tb_float_extension_window_ParamLimits

0xc23c,	// (0x0000c23c) popup_tb_float_extension_window

0x8eb5,	// (0x00008eb5) aid_size_cell_tb_float_ext

0x0020,	// (0x00000020) bg_popup_sub_window_cp28

0x8ec0,	// (0x00008ec0) grid_tb_float_ext_pane

0x8ec8,	// (0x00008ec8) cell_tb_float_ext_pane_ParamLimits

0x8ec8,	// (0x00008ec8) cell_tb_float_ext_pane

0x8ee0,	// (0x00008ee0) cell_tb_float_ext_pane_g1

0x8ee9,	// (0x00008ee9) grid_highlight_pane_cp12

0xce91,	// (0x0000ce91) cell_last_hwr_side_pane_ParamLimits

0xce91,	// (0x0000ce91) cell_last_hwr_side_pane

0x5eb0,	// (0x00005eb0) cell_last_hwr_side_pane_g1

0x8ef2,	// (0x00008ef2) cell_last_hwr_side_pane_g2

0x0001,

0xac4b,	// (0x0000ac4b) cell_last_hwr_side_pane_g

0xdecb,	// (0x0000decb) vkb2_area_bottom_space_btn_pane_ParamLimits

0xdecb,	// (0x0000decb) vkb2_area_bottom_space_btn_pane

0x62ee,	// (0x000062ee) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x897f,	// (0x0000897f) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8e2d,	// (0x00008e2d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8efb,	// (0x00008efb) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8efb,	// (0x00008efb) vkb2_area_bottom_space_btn_pane_g1

0x8f31,	// (0x00008f31) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8f31,	// (0x00008f31) vkb2_area_bottom_space_btn_pane_g2

0x8f67,	// (0x00008f67) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8f67,	// (0x00008f67) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xac50,	// (0x0000ac50) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xac50,	// (0x0000ac50) vkb2_area_bottom_space_btn_pane_g

0x5fc6,	// (0x00005fc6) cel_fep_hwr_func_pane_ParamLimits

0x5fc6,	// (0x00005fc6) cel_fep_hwr_func_pane

0xce66,	// (0x0000ce66) cell_hwr_side_button_pane_ParamLimits

0xce66,	// (0x0000ce66) cell_hwr_side_button_pane

0x7e4e,	// (0x00007e4e) aid_area_touch_clock_ParamLimits

0x07a6,	// (0x000007a6) bg_uniindi_top_pane_ParamLimits

0x7e60,	// (0x00007e60) uniindi_top_pane_g1_ParamLimits

0x7e76,	// (0x00007e76) uniindi_top_pane_g2_ParamLimits

0x7e82,	// (0x00007e82) uniindi_top_pane_g3_ParamLimits

0x7e93,	// (0x00007e93) uniindi_top_pane_g4_ParamLimits

0xab61,	// (0x0000ab61) uniindi_top_pane_g_ParamLimits

0x7ea0,	// (0x00007ea0) uniindi_top_pane_t1_ParamLimits

0x07a6,	// (0x000007a6) bg_vkb2_func_pane_cp01_ParamLimits

0x07a6,	// (0x000007a6) bg_vkb2_func_pane_cp01

0x8fad,	// (0x00008fad) cel_fep_hwr_func_pane_g1_ParamLimits

0x8fad,	// (0x00008fad) cel_fep_hwr_func_pane_g1

0x07a6,	// (0x000007a6) bg_vkb2_func_pane_cp02_ParamLimits

0x07a6,	// (0x000007a6) bg_vkb2_func_pane_cp02

0x8fad,	// (0x00008fad) cell_hwr_side_button_pane_g1_ParamLimits

0x8fad,	// (0x00008fad) cell_hwr_side_button_pane_g1

0x30bd,	// (0x000030bd) status_pane_g4_ParamLimits

0x30bd,	// (0x000030bd) status_pane_g4

0x30d5,	// (0x000030d5) status_pane_t1

0x5c92,	// (0x00005c92) form2_midp_gauge_slider_cont_pane

0x5c9a,	// (0x00005c9a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xce42,	// (0x0000ce42) form2_midp_gauge_slider_pane_t2_ParamLimits

0xce54,	// (0x0000ce54) form2_midp_gauge_slider_pane_t3_ParamLimits

0xec1f,	// (0x0000ec1f) form2_midp_gauge_slider_pane_t_ParamLimits

0x5cd0,	// (0x00005cd0) form2_midp_slider_pane_ParamLimits

0x839b,	// (0x0000839b) aid_size_cell_func_vkb2_ParamLimits

0x839b,	// (0x0000839b) aid_size_cell_func_vkb2

0x8ea1,	// (0x00008ea1) slider_pane_g4_ParamLimits

0x8ea1,	// (0x00008ea1) slider_pane_g4

0xe2e4,	// (0x0000e2e4) form2_midp_gauge_slider_pane_t2_cp01

0xe2f2,	// (0x0000e2f2) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe2f2,	// (0x0000e2f2) form2_midp_gauge_slider_pane_t3_cp01

0x8fe6,	// (0x00008fe6) form2_midp_slider_pane_cp01

0x0020,	// (0x00000020) navi_smil_pane

0x901a,	// (0x0000901a) navi_smil_pane_g1

0x9022,	// (0x00009022) navi_smil_pane_t1

0x8fef,	// (0x00008fef) form2_midp_slider_pane_g1

0x8ff8,	// (0x00008ff8) form2_midp_slider_pane_g2

0x9000,	// (0x00009000) form2_midp_slider_pane_g3

0x8fef,	// (0x00008fef) form2_midp_slider_pane_g4

0xe30f,	// (0x0000e30f) form2_midp_slider_pane_g5

0x0004,

0xed17,	// (0x0000ed17) form2_midp_slider_pane_g

0x8f9d,	// (0x00008f9d) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8f9d,	// (0x00008f9d) vkb2_area_bottom_space_btn_pane_g4

0xc3de,	// (0x0000c3de) lc0_navi_pane_ParamLimits

0xc3de,	// (0x0000c3de) lc0_navi_pane

0xc448,	// (0x0000c448) lc0_stat_indi_pane_ParamLimits

0xc448,	// (0x0000c448) lc0_stat_indi_pane

0xc45d,	// (0x0000c45d) ls0_title_pane_ParamLimits

0xc45d,	// (0x0000c45d) ls0_title_pane

0x11fd,	// (0x000011fd) bg_popup_sub_pane_cp14_ParamLimits

0x7e35,	// (0x00007e35) list_uniindi_pane_ParamLimits

0x7e41,	// (0x00007e41) uniindi_top_pane_ParamLimits

0x7edc,	// (0x00007edc) list_single_uniindi_pane_g1_ParamLimits

0x7eef,	// (0x00007eef) list_single_uniindi_pane_t1_ParamLimits

0xe318,	// (0x0000e318) lc0_stat_clock_pane_ParamLimits

0xe318,	// (0x0000e318) lc0_stat_clock_pane

0xe325,	// (0x0000e325) lc0_stat_indi_pane_g1_ParamLimits

0xe325,	// (0x0000e325) lc0_stat_indi_pane_g1

0xe332,	// (0x0000e332) lc0_stat_indi_pane_g2_ParamLimits

0xe332,	// (0x0000e332) lc0_stat_indi_pane_g2

0x0001,

0xed22,	// (0x0000ed22) lc0_stat_indi_pane_g_ParamLimits

0xed22,	// (0x0000ed22) lc0_stat_indi_pane_g

0xe33f,	// (0x0000e33f) lc0_uni_indicator_pane_ParamLimits

0xe33f,	// (0x0000e33f) lc0_uni_indicator_pane

0x9064,	// (0x00009064) ls0_title_pane_g1_ParamLimits

0x9064,	// (0x00009064) ls0_title_pane_g1

0xe34c,	// (0x0000e34c) ls0_title_pane_t1_ParamLimits

0xe34c,	// (0x0000e34c) ls0_title_pane_t1

0xe37a,	// (0x0000e37a) lc0_uni_indicator_pane_g1_ParamLimits

0xe37a,	// (0x0000e37a) lc0_uni_indicator_pane_g1

0x90c0,	// (0x000090c0) lc0_stat_clock_pane_t1

0x0020,	// (0x00000020) main_ai5_pane

0x90ce,	// (0x000090ce) ai5_sk_pane_ParamLimits

0x90ce,	// (0x000090ce) ai5_sk_pane

0xe38f,	// (0x0000e38f) cell_ai5_widget_pane_ParamLimits

0xe38f,	// (0x0000e38f) cell_ai5_widget_pane

0x9151,	// (0x00009151) aid_size_cell_widget_grid

0x915e,	// (0x0000915e) bg_ai5_widget_pane_ParamLimits

0x915e,	// (0x0000915e) bg_ai5_widget_pane

0xe41c,	// (0x0000e41c) cell_ai5_widget_pane_g2

0xe430,	// (0x0000e430) cell_ai5_widget_pane_g3

0xe44a,	// (0x0000e44a) cell_ai5_widget_pane_g4

0xe45a,	// (0x0000e45a) cell_ai5_widget_pane_g5

0xe46a,	// (0x0000e46a) cell_ai5_widget_pane_g6

0xe476,	// (0x0000e476) cell_ai5_widget_pane_g7

0xe4e2,	// (0x0000e4e2) cell_ai5_widget_pane_t1_ParamLimits

0xe4e2,	// (0x0000e4e2) cell_ai5_widget_pane_t1

0xe4ff,	// (0x0000e4ff) cell_ai5_widget_pane_t2_ParamLimits

0xe4ff,	// (0x0000e4ff) cell_ai5_widget_pane_t2

0xe517,	// (0x0000e517) cell_ai5_widget_pane_t3_ParamLimits

0xe517,	// (0x0000e517) cell_ai5_widget_pane_t3

0xe52f,	// (0x0000e52f) cell_ai5_widget_pane_t4_ParamLimits

0xe52f,	// (0x0000e52f) cell_ai5_widget_pane_t4

0xe555,	// (0x0000e555) cell_ai5_widget_pane_t5_ParamLimits

0xe555,	// (0x0000e555) cell_ai5_widget_pane_t5

0x930d,	// (0x0000930d) cell_ai5_widget_pane_t6_ParamLimits

0x930d,	// (0x0000930d) cell_ai5_widget_pane_t6

0x931f,	// (0x0000931f) cell_ai5_widget_pane_t7_ParamLimits

0x931f,	// (0x0000931f) cell_ai5_widget_pane_t7

0xe574,	// (0x0000e574) cell_ai5_widget_pane_t8_ParamLimits

0xe574,	// (0x0000e574) cell_ai5_widget_pane_t8

0x000b,

0xed42,	// (0x0000ed42) cell_ai5_widget_pane_t_ParamLimits

0xed42,	// (0x0000ed42) cell_ai5_widget_pane_t

0xe5f8,	// (0x0000e5f8) grid_ai5_widget_pane

0x11fd,	// (0x000011fd) highlight_cell_ai5_widget_pane_ParamLimits

0x11fd,	// (0x000011fd) highlight_cell_ai5_widget_pane

0xe604,	// (0x0000e604) ai5_sk_left_pane

0xe60e,	// (0x0000e60e) ai5_sk_middle_pane

0xe618,	// (0x0000e618) ai5_sk_right_pane

0x93eb,	// (0x000093eb) bg_ai5_widget_pane_g1_ParamLimits

0x93eb,	// (0x000093eb) bg_ai5_widget_pane_g1

0x93f7,	// (0x000093f7) bg_ai5_widget_pane_g2_ParamLimits

0x93f7,	// (0x000093f7) bg_ai5_widget_pane_g2

0x9403,	// (0x00009403) bg_ai5_widget_pane_g3_ParamLimits

0x9403,	// (0x00009403) bg_ai5_widget_pane_g3

0x940f,	// (0x0000940f) bg_ai5_widget_pane_g4_ParamLimits

0x940f,	// (0x0000940f) bg_ai5_widget_pane_g4

0x941b,	// (0x0000941b) bg_ai5_widget_pane_g5_ParamLimits

0x941b,	// (0x0000941b) bg_ai5_widget_pane_g5

0x9427,	// (0x00009427) bg_ai5_widget_pane_g6_ParamLimits

0x9427,	// (0x00009427) bg_ai5_widget_pane_g6

0x9433,	// (0x00009433) bg_ai5_widget_pane_g7_ParamLimits

0x9433,	// (0x00009433) bg_ai5_widget_pane_g7

0x943f,	// (0x0000943f) bg_ai5_widget_pane_g8_ParamLimits

0x943f,	// (0x0000943f) bg_ai5_widget_pane_g8

0x944b,	// (0x0000944b) bg_ai5_widget_pane_g9_ParamLimits

0x944b,	// (0x0000944b) bg_ai5_widget_pane_g9

0x0008,

0xac9d,	// (0x0000ac9d) bg_ai5_widget_pane_g_ParamLimits

0xac9d,	// (0x0000ac9d) bg_ai5_widget_pane_g

0x947b,	// (0x0000947b) cell_shortcut_ai5_widget_pane_ParamLimits

0x947b,	// (0x0000947b) cell_shortcut_ai5_widget_pane

0x948c,	// (0x0000948c) bg_cell_shortcut_ai5_widget_pane

0x0960,	// (0x00000960) cell_grid_ai5_widget_pane_g1

0x235b,	// (0x0000235b) highlight_cell_shortcut_ai5_widget_pane

0x32e0,	// (0x000032e0) ai5_sk_left_pane_g1

0x9494,	// (0x00009494) ai5_sk_left_pane_g2

0x949c,	// (0x0000949c) ai5_sk_left_pane_g3

0x94a4,	// (0x000094a4) ai5_sk_left_pane_g4

0x0003,

0xacb0,	// (0x0000acb0) ai5_sk_left_pane_g

0x94ac,	// (0x000094ac) ai5_sk_left_pane_t1

0x32d8,	// (0x000032d8) ai5_sk_right_pane_g1

0x94ba,	// (0x000094ba) ai5_sk_right_pane_g2

0x94c2,	// (0x000094c2) ai5_sk_right_pane_g3

0x94ca,	// (0x000094ca) ai5_sk_right_pane_g4

0x0003,

0xacb9,	// (0x0000acb9) ai5_sk_right_pane_g

0x94d2,	// (0x000094d2) ai5_sk_right_pane_t1

0x32d8,	// (0x000032d8) ai5_sk_middle_pane_g1

0x32e0,	// (0x000032e0) ai5_sk_middle_pane_g2

0x32f8,	// (0x000032f8) ai5_sk_middle_pane_g3

0x94c2,	// (0x000094c2) ai5_sk_middle_pane_g4

0x949c,	// (0x0000949c) ai5_sk_middle_pane_g5

0x94e0,	// (0x000094e0) ai5_sk_middle_pane_g6

0xe622,	// (0x0000e622) ai5_sk_middle_pane_g7

0x0006,

0xed5b,	// (0x0000ed5b) ai5_sk_middle_pane_g

0xc2dc,	// (0x0000c2dc) aid_touch_area_size_lc0_ParamLimits

0xc2dc,	// (0x0000c2dc) aid_touch_area_size_lc0

0x6687,	// (0x00006687) cell_hwr_candidate_pane_t1_ParamLimits

0x2dba,	// (0x00002dba) aid_touch_navi_pane

0xc549,	// (0x0000c549) status_dt_navi_pane_ParamLimits

0xc549,	// (0x0000c549) status_dt_navi_pane

0xc561,	// (0x0000c561) status_dt_sta_pane_ParamLimits

0xc561,	// (0x0000c561) status_dt_sta_pane

0xe62a,	// (0x0000e62a) dt_sta_controll_pane

0xe637,	// (0x0000e637) dt_sta_indi_pane

0xe644,	// (0x0000e644) dt_sta_title_pane

0x07a6,	// (0x000007a6) bg_dt_sta_indi_pane_ParamLimits

0x07a6,	// (0x000007a6) bg_dt_sta_indi_pane

0xe656,	// (0x0000e656) dt_sta_battery_pane

0xe65e,	// (0x0000e65e) dt_sta_indi_pane_g1

0xe667,	// (0x0000e667) dt_sta_indi_pane_g2

0xe670,	// (0x0000e670) dt_sta_indi_pane_g3

0x0002,

0xed6a,	// (0x0000ed6a) dt_sta_indi_pane_g

0xe679,	// (0x0000e679) dt_sta_signal_pane

0x11fd,	// (0x000011fd) bg_dt_sta_title_pane_ParamLimits

0x11fd,	// (0x000011fd) bg_dt_sta_title_pane

0xe682,	// (0x0000e682) dt_sta_title_pane_g1

0xe68a,	// (0x0000e68a) dt_sta_title_pane_t1_ParamLimits

0xe68a,	// (0x0000e68a) dt_sta_title_pane_t1

0x0020,	// (0x00000020) bg_dt_sta_control_pane

0xe69f,	// (0x0000e69f) dt_sta_controll_pane_g1

0xe6a8,	// (0x0000e6a8) bg_dt_sta_title_pane_g1

0xe6b1,	// (0x0000e6b1) bg_dt_sta_title_pane_g2

0xe6ba,	// (0x0000e6ba) bg_dt_sta_title_pane_g3

0x0002,

0xed71,	// (0x0000ed71) bg_dt_sta_title_pane_g

0x5eb0,	// (0x00005eb0) bg_dt_sta_indi_pane_g1

0xe6c3,	// (0x0000e6c3) dt_sta_signal_pane_g1

0xe6cb,	// (0x0000e6cb) dt_sta_signal_pane_g2

0x0001,

0xed78,	// (0x0000ed78) dt_sta_signal_pane_g

0x959e,	// (0x0000959e) dt_sta_battery_pane_g1

0x95a7,	// (0x000095a7) dt_sta_battery_pane_t1

0x5eb0,	// (0x00005eb0) bg_dt_sta_control_pane_g1

0x1d0e,	// (0x00001d0e) fep_china_uni_eep_pane

0x1d16,	// (0x00001d16) fep_china_uni_entry_pane_ParamLimits

0x1d26,	// (0x00001d26) popup_fep_china_uni_window_g1_ParamLimits

0x1d36,	// (0x00001d36) popup_fep_china_uni_window_g2_ParamLimits

0x1d36,	// (0x00001d36) popup_fep_china_uni_window_g2

0x0001,

0xa55d,	// (0x0000a55d) popup_fep_china_uni_window_g_ParamLimits

0xa55d,	// (0x0000a55d) popup_fep_china_uni_window_g

0x95b6,	// (0x000095b6) fep_china_uni_eep_pane_g1

0x95be,	// (0x000095be) fep_china_uni_eep_pane_t1

0x9011,	// (0x00009011) aid_touch_area_size_smil_player

0x2ef7,	// (0x00002ef7) lc0_clock_pane

0x30c9,	// (0x000030c9) status_pane_g5_ParamLimits

0x30c9,	// (0x000030c9) status_pane_g5

0xbe70,	// (0x0000be70) popup_keymap_window

0x3091,	// (0x00003091) status_icon_pane

0xe430,	// (0x0000e430) cell_ai5_widget_pane_g3_ParamLimits

0xe44a,	// (0x0000e44a) cell_ai5_widget_pane_g4_ParamLimits

0xe45a,	// (0x0000e45a) cell_ai5_widget_pane_g5_ParamLimits

0xe482,	// (0x0000e482) cell_ai5_widget_pane_g8_ParamLimits

0xe482,	// (0x0000e482) cell_ai5_widget_pane_g8

0xe496,	// (0x0000e496) cell_ai5_widget_pane_g9_ParamLimits

0xe496,	// (0x0000e496) cell_ai5_widget_pane_g9

0xe4aa,	// (0x0000e4aa) cell_ai5_widget_pane_g10_ParamLimits

0xe4aa,	// (0x0000e4aa) cell_ai5_widget_pane_g10

0x95cd,	// (0x000095cd) status_icon_pane_g1

0x0020,	// (0x00000020) bg_popup_sub_pane_cp13

0x95d5,	// (0x000095d5) popup_keymap_window_t1

0xbbbc,	// (0x0000bbbc) control_pane_g6_ParamLimits

0xbbbc,	// (0x0000bbbc) control_pane_g6

0xbbc9,	// (0x0000bbc9) control_pane_g7_ParamLimits

0xbbc9,	// (0x0000bbc9) control_pane_g7

0xbbd6,	// (0x0000bbd6) control_pane_g8_ParamLimits

0xbbd6,	// (0x0000bbd6) control_pane_g8

0xe62a,	// (0x0000e62a) dt_sta_controll_pane_ParamLimits

0xe637,	// (0x0000e637) dt_sta_indi_pane_ParamLimits

0xe644,	// (0x0000e644) dt_sta_title_pane_ParamLimits

0x0c34,	// (0x00000c34) aid_size_touch_scroll_bar_cale

0x026c,	// (0x0000026c) popup_discreet_window_ParamLimits

0x026c,	// (0x0000026c) popup_discreet_window

0xae7e,	// (0x0000ae7e) popup_sk_window

0x3aa8,	// (0x00003aa8) bg_popup_sub_pane_cp28_ParamLimits

0x3aa8,	// (0x00003aa8) bg_popup_sub_pane_cp28

0x95e3,	// (0x000095e3) popup_discreet_window_g1_ParamLimits

0x95e3,	// (0x000095e3) popup_discreet_window_g1

0x9603,	// (0x00009603) popup_discreet_window_t1_ParamLimits

0x9603,	// (0x00009603) popup_discreet_window_t1

0x9621,	// (0x00009621) popup_discreet_window_t2_ParamLimits

0x9621,	// (0x00009621) popup_discreet_window_t2

0x0002,

0xace4,	// (0x0000ace4) popup_discreet_window_t_ParamLimits

0xace4,	// (0x0000ace4) popup_discreet_window_t

0x9673,	// (0x00009673) popup_sk_window_g1

0x967c,	// (0x0000967c) popup_sk_window_g2

0x0001,

0xaceb,	// (0x0000aceb) popup_sk_window_g

0x9685,	// (0x00009685) popup_sk_window_t1

0x9693,	// (0x00009693) popup_sk_window_t1_copy1

0xe41c,	// (0x0000e41c) cell_ai5_widget_pane_g2_ParamLimits

0xe586,	// (0x0000e586) cell_ai5_widget_pane_t9_ParamLimits

0xe586,	// (0x0000e586) cell_ai5_widget_pane_t9

0x0020,	// (0x00000020) main_fep_fshwr2_pane

0xe6d3,	// (0x0000e6d3) aid_fshwr2_btn_pane

0xe6e7,	// (0x0000e6e7) aid_fshwr2_syb_pane

0xe6fb,	// (0x0000e6fb) aid_fshwr2_txt_pane

0xe70b,	// (0x0000e70b) fshwr2_func_candi_pane

0xe723,	// (0x0000e723) fshwr2_hwr_syb_pane

0xe73b,	// (0x0000e73b) fshwr2_icf_pane

0x0020,	// (0x00000020) fshwr2_icf_bg_pane

0xe765,	// (0x0000e765) fshwr2_icf_pane_t1_ParamLimits

0xe765,	// (0x0000e765) fshwr2_icf_pane_t1

0x1b31,	// (0x00001b31) fshwr2_func_candi_pane_g1

0xe77c,	// (0x0000e77c) fshwr2_func_candi_row_pane_ParamLimits

0xe77c,	// (0x0000e77c) fshwr2_func_candi_row_pane

0xe79f,	// (0x0000e79f) cell_fshwr2_syb_pane_ParamLimits

0xe79f,	// (0x0000e79f) cell_fshwr2_syb_pane

0x8fad,	// (0x00008fad) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8fad,	// (0x00008fad) fshwr2_hwr_syb_pane_g1

0x0020,	// (0x00000020) bg_popup_call_pane_cp01

0xe7c1,	// (0x0000e7c1) fshwr2_func_candi_cell_pane_ParamLimits

0xe7c1,	// (0x0000e7c1) fshwr2_func_candi_cell_pane

0x389a,	// (0x0000389a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x389a,	// (0x0000389a) fshwr2_func_candi_cell_bg_pane

0xe800,	// (0x0000e800) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe800,	// (0x0000e800) fshwr2_func_candi_cell_pane_g1

0xe837,	// (0x0000e837) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe837,	// (0x0000e837) fshwr2_func_candi_cell_pane_t1

0x0020,	// (0x00000020) bg_button_pane_cp08

0x28cb,	// (0x000028cb) cell_fshwr2_syb_bg_pane

0xe852,	// (0x0000e852) cell_fshwr2_syb_bg_pane_g1

0xe866,	// (0x0000e866) cell_fshwr2_syb_bg_pane_t1

0x11fd,	// (0x000011fd) main_tmo_pane

0xc962,	// (0x0000c962) uni_indicator_pane_g1_ParamLimits

0xc976,	// (0x0000c976) uni_indicator_pane_g2_ParamLimits

0xc98b,	// (0x0000c98b) uni_indicator_pane_g3_ParamLimits

0x46d8,	// (0x000046d8) uni_indicator_pane_g4_ParamLimits

0x46d8,	// (0x000046d8) uni_indicator_pane_g4

0x46ec,	// (0x000046ec) uni_indicator_pane_g5_ParamLimits

0x46ec,	// (0x000046ec) uni_indicator_pane_g5

0x46ec,	// (0x000046ec) uni_indicator_pane_g6_ParamLimits

0x46ec,	// (0x000046ec) uni_indicator_pane_g6

0xeb8f,	// (0x0000eb8f) uni_indicator_pane_g_ParamLimits

0xd50e,	// (0x0000d50e) popup_tmo_note_window_ParamLimits

0xd50e,	// (0x0000d50e) popup_tmo_note_window

0x11fd,	// (0x000011fd) fshwr2_bg_pane

0xe828,	// (0x0000e828) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe828,	// (0x0000e828) fshwr2_func_candi_cell_pane_g2

0x0001,

0xed7d,	// (0x0000ed7d) fshwr2_func_candi_cell_pane_g_ParamLimits

0xed7d,	// (0x0000ed7d) fshwr2_func_candi_cell_pane_g

0x5eb0,	// (0x00005eb0) bg_popup_window_pane_cp01

0x9828,	// (0x00009828) bg_popup_window_pane_g1_cp01

0x9831,	// (0x00009831) bg_popup_window_pane_cp22_ParamLimits

0x9831,	// (0x00009831) bg_popup_window_pane_cp22

0x983f,	// (0x0000983f) listscroll_tmo_link_pane_ParamLimits

0x983f,	// (0x0000983f) listscroll_tmo_link_pane

0x987f,	// (0x0000987f) popup_tmo_note_window_g1_ParamLimits

0x987f,	// (0x0000987f) popup_tmo_note_window_g1

0x988c,	// (0x0000988c) tmo_note_info_pane_ParamLimits

0x988c,	// (0x0000988c) tmo_note_info_pane

0xe87c,	// (0x0000e87c) list_tmo_note_info_pane_g1_ParamLimits

0xe87c,	// (0x0000e87c) list_tmo_note_info_pane_g1

0x98bd,	// (0x000098bd) list_tmo_note_info_pane_g2_ParamLimits

0x98bd,	// (0x000098bd) list_tmo_note_info_pane_g2

0x0001,

0xed82,	// (0x0000ed82) list_tmo_note_info_pane_g_ParamLimits

0xed82,	// (0x0000ed82) list_tmo_note_info_pane_g

0x98d9,	// (0x000098d9) list_tmo_note_info_text_pane_ParamLimits

0x98d9,	// (0x000098d9) list_tmo_note_info_text_pane

0x995a,	// (0x0000995a) list_tmo_link_pane

0x9967,	// (0x00009967) scroll_pane_cp20

0x9974,	// (0x00009974) list_single_tmo_link_pane_ParamLimits

0x9974,	// (0x00009974) list_single_tmo_link_pane

0x9984,	// (0x00009984) list_single_tmo_link_pane_t1

0x9992,	// (0x00009992) list_tmo_note_info_text_pane_t1_ParamLimits

0x9992,	// (0x00009992) list_tmo_note_info_text_pane_t1

0x1425,	// (0x00001425) aid_size_touch_scroll_bar_cp01_ParamLimits

0x1425,	// (0x00001425) aid_size_touch_scroll_bar_cp01

0xb6c1,	// (0x0000b6c1) aid_size_touch_slider_marker

0xae72,	// (0x0000ae72) popup_settings_window_ParamLimits

0xae72,	// (0x0000ae72) popup_settings_window

0x28f1,	// (0x000028f1) popup_candi_list_indi_window

0x2dba,	// (0x00002dba) aid_touch_navi_pane_ParamLimits

0x7bc4,	// (0x00007bc4) rs_clock_indi_pane

0x7bcd,	// (0x00007bcd) sctrl_sk_bottom_pane_ParamLimits

0x7bde,	// (0x00007bde) sctrl_sk_top_pane_ParamLimits

0x83ed,	// (0x000083ed) popup_fep_tooltip_window

0x9151,	// (0x00009151) aid_size_cell_widget_grid_ParamLimits

0xe408,	// (0x0000e408) cell_ai5_widget_pane_g1_ParamLimits

0xe408,	// (0x0000e408) cell_ai5_widget_pane_g1

0xe46a,	// (0x0000e46a) cell_ai5_widget_pane_g6_ParamLimits

0xe476,	// (0x0000e476) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xed27,	// (0x0000ed27) cell_ai5_widget_pane_g_ParamLimits

0xed27,	// (0x0000ed27) cell_ai5_widget_pane_g

0xe5b5,	// (0x0000e5b5) cell_ai5_widget_pane_t10_ParamLimits

0xe5b5,	// (0x0000e5b5) cell_ai5_widget_pane_t10

0xe5f8,	// (0x0000e5f8) grid_ai5_widget_pane_ParamLimits

0x9457,	// (0x00009457) cell_contacts_ai5_widget_pane_ParamLimits

0x9457,	// (0x00009457) cell_contacts_ai5_widget_pane

0x9636,	// (0x00009636) popup_discreet_window_t3_ParamLimits

0x9636,	// (0x00009636) popup_discreet_window_t3

0xe753,	// (0x0000e753) popup_fshwr2_char_preview_window_ParamLimits

0xe753,	// (0x0000e753) popup_fshwr2_char_preview_window

0xe893,	// (0x0000e893) tmo_note_info_pane_t1

0xe8a8,	// (0x0000e8a8) tmo_note_info_pane_t2

0xe8bd,	// (0x0000e8bd) tmo_note_info_pane_t3

0x9936,	// (0x00009936) tmo_note_info_pane_t4

0x9948,	// (0x00009948) tmo_note_info_pane_t5

0x0004,

0xed87,	// (0x0000ed87) tmo_note_info_pane_t

0x995a,	// (0x0000995a) list_tmo_link_pane_ParamLimits

0x9967,	// (0x00009967) scroll_pane_cp20_ParamLimits

0x0020,	// (0x00000020) bg_popup_fep_char_preview_window_cp01

0x99ab,	// (0x000099ab) popup_fshwr2_char_preview_window_t1

0x99b9,	// (0x000099b9) popup_candi_list_indi_window_g1

0x99c2,	// (0x000099c2) bg_cell_contacts_ai5_widget_pane

0x99ce,	// (0x000099ce) cell_contacts_ai5_widget_pane_g1

0x99e3,	// (0x000099e3) cell_contacts_ai5_widget_pane_g2

0x99ef,	// (0x000099ef) cell_contacts_ai5_widget_pane_g3

0x0002,

0xad05,	// (0x0000ad05) cell_contacts_ai5_widget_pane_g

0x99fb,	// (0x000099fb) cell_contacts_ai5_widget_pane_t1

0x11fd,	// (0x000011fd) highlight_cell_shortcut_ai5_widget_pane_cp01

0x9a70,	// (0x00009a70) settings_container_pane

0x235b,	// (0x0000235b) listscroll_set_pane_copy1

0x53ad,	// (0x000053ad) scroll_pane_cp121_copy1

0x9a7c,	// (0x00009a7c) set_content_pane_copy1

0x9a84,	// (0x00009a84) aid_height_set_list_copy1_ParamLimits

0x9a84,	// (0x00009a84) aid_height_set_list_copy1

0x498b,	// (0x0000498b) aid_size_parent_copy1_ParamLimits

0x498b,	// (0x0000498b) aid_size_parent_copy1

0x9a90,	// (0x00009a90) button_value_adjust_pane_cp6_copy1_ParamLimits

0x9a90,	// (0x00009a90) button_value_adjust_pane_cp6_copy1

0x28cb,	// (0x000028cb) list_highlight_pane_cp2_copy1_ParamLimits

0x28cb,	// (0x000028cb) list_highlight_pane_cp2_copy1

0x9aa4,	// (0x00009aa4) list_set_pane_copy1_ParamLimits

0x9aa4,	// (0x00009aa4) list_set_pane_copy1

0x9a0d,	// (0x00009a0d) main_pane_set_t1_copy1_ParamLimits

0x9a0d,	// (0x00009a0d) main_pane_set_t1_copy1

0x9a47,	// (0x00009a47) main_pane_set_t2_copy1_ParamLimits

0x9a47,	// (0x00009a47) main_pane_set_t2_copy1

0x9b32,	// (0x00009b32) main_pane_set_t3_copy1

0x9b40,	// (0x00009b40) main_pane_set_t4_copy1

0x9a64,	// (0x00009a64) set_content_pane_g1_copy1_ParamLimits

0x9a64,	// (0x00009a64) set_content_pane_g1_copy1

0x9b4e,	// (0x00009b4e) setting_code_pane_copy1

0x9b56,	// (0x00009b56) setting_slider_graphic_pane_copy1

0x9b56,	// (0x00009b56) setting_slider_pane_copy1

0x9b56,	// (0x00009b56) setting_text_pane_copy1

0x9b56,	// (0x00009b56) setting_volume_pane_copy1

0x9b5e,	// (0x00009b5e) settings_code_pane_cp2_copy1

0x9b66,	// (0x00009b66) settings_code_pane_cp_copy1_ParamLimits

0x9b66,	// (0x00009b66) settings_code_pane_cp_copy1

0x9b7a,	// (0x00009b7a) volume_set_pane_copy1

0x9b82,	// (0x00009b82) volume_set_pane_g10_copy1

0x9b8a,	// (0x00009b8a) volume_set_pane_g1_copy1

0x9b92,	// (0x00009b92) volume_set_pane_g2_copy1

0x9b9a,	// (0x00009b9a) volume_set_pane_g3_copy1

0x9ba2,	// (0x00009ba2) volume_set_pane_g4_copy1

0x9baa,	// (0x00009baa) volume_set_pane_g5_copy1

0x9bb2,	// (0x00009bb2) volume_set_pane_g6_copy1

0x9bba,	// (0x00009bba) volume_set_pane_g7_copy1

0x9bc2,	// (0x00009bc2) volume_set_pane_g8_copy1

0x9bca,	// (0x00009bca) volume_set_pane_g9_copy1

0x0474,	// (0x00000474) bg_set_opt_pane_cp_copy1_ParamLimits

0x0474,	// (0x00000474) bg_set_opt_pane_cp_copy1

0x9bd2,	// (0x00009bd2) setting_slider_pane_t1_copy1_ParamLimits

0x9bd2,	// (0x00009bd2) setting_slider_pane_t1_copy1

0x9be9,	// (0x00009be9) setting_slider_pane_t2_copy1_ParamLimits

0x9be9,	// (0x00009be9) setting_slider_pane_t2_copy1

0x9c02,	// (0x00009c02) setting_slider_pane_t3_copy1_ParamLimits

0x9c02,	// (0x00009c02) setting_slider_pane_t3_copy1

0x0504,	// (0x00000504) slider_set_pane_copy1_ParamLimits

0x0504,	// (0x00000504) slider_set_pane_copy1

0x1320,	// (0x00001320) set_opt_bg_pane_g1_copy2

0x1328,	// (0x00001328) set_opt_bg_pane_g2_copy2

0x9c19,	// (0x00009c19) set_opt_bg_pane_g3_copy2

0x1338,	// (0x00001338) set_opt_bg_pane_g4_copy2

0x1340,	// (0x00001340) set_opt_bg_pane_g5_copy2

0x1348,	// (0x00001348) set_opt_bg_pane_g6_copy2

0x9c21,	// (0x00009c21) set_opt_bg_pane_g7_copy2

0x9c29,	// (0x00009c29) set_opt_bg_pane_g8_copy2

0x9c31,	// (0x00009c31) set_opt_bg_pane_g9_copy2

0x48d2,	// (0x000048d2) aid_size_touch_slider_mark_copy1_ParamLimits

0x48d2,	// (0x000048d2) aid_size_touch_slider_mark_copy1

0x4ac1,	// (0x00004ac1) slider_set_pane_g1_copy1

0x4aca,	// (0x00004aca) slider_set_pane_g2_copy1

0x48ff,	// (0x000048ff) slider_set_pane_g3_copy1_ParamLimits

0x48ff,	// (0x000048ff) slider_set_pane_g3_copy1

0x4913,	// (0x00004913) slider_set_pane_g4_copy1_ParamLimits

0x4913,	// (0x00004913) slider_set_pane_g4_copy1

0x492b,	// (0x0000492b) slider_set_pane_g5_copy1_ParamLimits

0x492b,	// (0x0000492b) slider_set_pane_g5_copy1

0x48ff,	// (0x000048ff) slider_set_pane_g6_copy1_ParamLimits

0x48ff,	// (0x000048ff) slider_set_pane_g6_copy1

0x9c39,	// (0x00009c39) slider_set_pane_g7_copy1_ParamLimits

0x9c39,	// (0x00009c39) slider_set_pane_g7_copy1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp2_copy1

0x051a,	// (0x0000051a) setting_slider_graphic_pane_g1_copy1

0x9c4f,	// (0x00009c4f) setting_slider_graphic_pane_t1_copy1

0x9c5e,	// (0x00009c5e) setting_slider_graphic_pane_t2_copy1

0x9c6d,	// (0x00009c6d) slider_set_pane_cp_copy1

0x9c7d,	// (0x00009c7d) input_focus_pane_cp1_copy1

0x9c86,	// (0x00009c86) list_set_text_pane_copy1

0x9c8e,	// (0x00009c8e) setting_text_pane_g1_copy1

0x9c97,	// (0x00009c97) set_text_pane_t1_copy1

0x9c7d,	// (0x00009c7d) input_focus_pane_cp2_copy1

0x9c8e,	// (0x00009c8e) setting_code_pane_g1_copy1

0x9cb0,	// (0x00009cb0) setting_code_pane_t1_copy1

0x9cbe,	// (0x00009cbe) list_set_graphic_pane_copy1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp4_copy1

0x20b7,	// (0x000020b7) list_set_graphic_pane_g1_copy1_ParamLimits

0x20b7,	// (0x000020b7) list_set_graphic_pane_g1_copy1

0x9cd3,	// (0x00009cd3) list_set_graphic_pane_g2_copy1

0x20cf,	// (0x000020cf) list_set_graphic_pane_t1_copy1_ParamLimits

0x20cf,	// (0x000020cf) list_set_graphic_pane_t1_copy1

0x5eb0,	// (0x00005eb0) rs_clock_indi_pane_g1

0x9cdb,	// (0x00009cdb) rs_clock_indi_pane_t1

0x9ce9,	// (0x00009ce9) rs_indi_pane

0x9cf1,	// (0x00009cf1) rs_indi_pane_g1

0x9cfa,	// (0x00009cfa) rs_indi_pane_g2

0x99b9,	// (0x000099b9) rs_indi_pane_g3

0x0002,

0xad0c,	// (0x0000ad0c) rs_indi_pane_g

0x235b,	// (0x0000235b) bg_popup_preview_window_pane_cp03

0x9d03,	// (0x00009d03) popup_fep_tooltip_window_t1

0x7018,	// (0x00007018) popup_note2_window_g2_ParamLimits

0x7018,	// (0x00007018) popup_note2_window_g2

0x0001,

0xaaa0,	// (0x0000aaa0) popup_note2_window_g_ParamLimits

0xaaa0,	// (0x0000aaa0) popup_note2_window_g

0x7611,	// (0x00007611) bg_popup_sub_pane_cp11_ParamLimits

0x761e,	// (0x0000761e) cell_ai3_links_pane_g1_ParamLimits

0x7635,	// (0x00007635) cell_ai3_links_pane_t1

0x9c97,	// (0x00009c97) set_text_pane_t1_copy1_ParamLimits

0x227b,	// (0x0000227b) cell_graphic_popup_pane_cp2_ParamLimits

0x227b,	// (0x0000227b) cell_graphic_popup_pane_cp2

0x9d11,	// (0x00009d11) cell_graphic_popup_pane_g1_cp2

0x0ae3,	// (0x00000ae3) cell_graphic_popup_pane_g2_cp2

0x9d19,	// (0x00009d19) cell_graphic_popup_pane_g3_cp2

0x9d21,	// (0x00009d21) cell_graphic_popup_pane_t2_cp2

0x0af4,	// (0x00000af4) grid_highlight_pane_cp3_cp2

0x1847,	// (0x00001847) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x11fd,	// (0x000011fd) main_tmo_pane_ParamLimits

0xd506,	// (0x0000d506) popup_tmo_big_image_note_window

0x9190,	// (0x00009190) cell_ai5_widget_list_pane

0xe3ff,	// (0x0000e3ff) cell_ai5_widget_lrg_icon_pane

0xe893,	// (0x0000e893) tmo_note_info_pane_t1_ParamLimits

0xe8a8,	// (0x0000e8a8) tmo_note_info_pane_t2_ParamLimits

0xe8bd,	// (0x0000e8bd) tmo_note_info_pane_t3_ParamLimits

0x9936,	// (0x00009936) tmo_note_info_pane_t4_ParamLimits

0x9948,	// (0x00009948) tmo_note_info_pane_t5_ParamLimits

0xed87,	// (0x0000ed87) tmo_note_info_pane_t_ParamLimits

0x9a70,	// (0x00009a70) settings_container_pane_ParamLimits

0x9c75,	// (0x00009c75) indicator_popup_pane_cp5

0x9c75,	// (0x00009c75) indicator_popup_pane_cp6

0x9cbe,	// (0x00009cbe) list_set_graphic_pane_copy1_ParamLimits

0x0020,	// (0x00000020) bg_popup_window_pane_cp23

0x9d2f,	// (0x00009d2f) popup_tmo_big_image_note_window_g1

0x9d38,	// (0x00009d38) popup_tmo_big_image_note_window_t1

0x9d46,	// (0x00009d46) popup_tmo_big_image_note_window_t2

0x9d54,	// (0x00009d54) popup_tmo_big_image_note_window_t3

0x0002,

0xad13,	// (0x0000ad13) popup_tmo_big_image_note_window_t

0x5eb0,	// (0x00005eb0) cell_ai5_widget_lrg_icon_pane_g1

0x9d62,	// (0x00009d62) cell_ai5_widget_lrg_icon_pane_t1

0xe8d2,	// (0x0000e8d2) cell_ai5_widget_list_row_pane_ParamLimits

0xe8d2,	// (0x0000e8d2) cell_ai5_widget_list_row_pane

0xe8e9,	// (0x0000e8e9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe8e9,	// (0x0000e8e9) cell_ai5_widget_list_row_pane_g1

0xe8f6,	// (0x0000e8f6) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe8f6,	// (0x0000e8f6) cell_ai5_widget_list_row_pane_t1

0xe927,	// (0x0000e927) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe927,	// (0x0000e927) cell_ai5_widget_list_row_pane_t2

0x0002,

0xed92,	// (0x0000ed92) cell_ai5_widget_list_row_pane_t_ParamLimits

0xed92,	// (0x0000ed92) cell_ai5_widget_list_row_pane_t

0x0020,	// (0x00000020) main_fep_vtchi_ss_pane

0x9e12,	// (0x00009e12) popup_fep_char_pre_window

0x9e1a,	// (0x00009e1a) popup_fep_ituss_window

0xe978,	// (0x0000e978) popup_fep_vkbss_window

0x9e7d,	// (0x00009e7d) grid_vkbss_keypad_pane_ParamLimits

0x9e7d,	// (0x00009e7d) grid_vkbss_keypad_pane

0x9e8d,	// (0x00009e8d) ituss_keypad_pane

0x9ea1,	// (0x00009ea1) aid_vkbss_key_offset_ParamLimits

0x9ea1,	// (0x00009ea1) aid_vkbss_key_offset

0x9ead,	// (0x00009ead) cell_vkbss_key_pane_ParamLimits

0x9ead,	// (0x00009ead) cell_vkbss_key_pane

0x9ee1,	// (0x00009ee1) bg_cell_vkbss_key_g1_ParamLimits

0x9ee1,	// (0x00009ee1) bg_cell_vkbss_key_g1

0x9eed,	// (0x00009eed) cell_vkbss_key_3p_pane_ParamLimits

0x9eed,	// (0x00009eed) cell_vkbss_key_3p_pane

0x9f23,	// (0x00009f23) cell_vkbss_key_g1_ParamLimits

0x9f23,	// (0x00009f23) cell_vkbss_key_g1

0x9f59,	// (0x00009f59) cell_vkbss_key_t1_ParamLimits

0x9f59,	// (0x00009f59) cell_vkbss_key_t1

0x9fc9,	// (0x00009fc9) cell_ituss_key_pane_ParamLimits

0x9fc9,	// (0x00009fc9) cell_ituss_key_pane

0x9fda,	// (0x00009fda) bg_cell_ituss_key_g1_ParamLimits

0x9fda,	// (0x00009fda) bg_cell_ituss_key_g1

0x9fe6,	// (0x00009fe6) cell_ituss_key_pane_g1_ParamLimits

0x9fe6,	// (0x00009fe6) cell_ituss_key_pane_g1

0x9ffa,	// (0x00009ffa) cell_ituss_key_pane_g2_ParamLimits

0x9ffa,	// (0x00009ffa) cell_ituss_key_pane_g2

0x0005,

0xad21,	// (0x0000ad21) cell_ituss_key_pane_g_ParamLimits

0xad21,	// (0x0000ad21) cell_ituss_key_pane_g

0xa090,	// (0x0000a090) cell_ituss_key_t1_ParamLimits

0xa090,	// (0x0000a090) cell_ituss_key_t1

0xa0c6,	// (0x0000a0c6) cell_ituss_key_t2_ParamLimits

0xa0c6,	// (0x0000a0c6) cell_ituss_key_t2

0xa0f8,	// (0x0000a0f8) cell_ituss_key_t3_ParamLimits

0xa0f8,	// (0x0000a0f8) cell_ituss_key_t3

0xa129,	// (0x0000a129) cell_ituss_key_t4_ParamLimits

0xa129,	// (0x0000a129) cell_ituss_key_t4

0x0004,

0xad2e,	// (0x0000ad2e) cell_ituss_key_t_ParamLimits

0xad2e,	// (0x0000ad2e) cell_ituss_key_t

0xa16c,	// (0x0000a16c) cell_vkbss_key_3p_pane_g1

0xa174,	// (0x0000a174) cell_vkbss_key_3p_pane_g2

0xa17c,	// (0x0000a17c) cell_vkbss_key_3p_pane_g3

0x0002,

0xad39,	// (0x0000ad39) cell_vkbss_key_3p_pane_g

0x235b,	// (0x0000235b) bg_popup_fep_char_preview_window_cp02

0xa184,	// (0x0000a184) popup_fep_char_pre_window_t1

0xe3ec,	// (0x0000e3ec) main_ai5_sk_pane

0x99c2,	// (0x000099c2) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x99ce,	// (0x000099ce) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x99e3,	// (0x000099e3) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x99ef,	// (0x000099ef) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xad05,	// (0x0000ad05) cell_contacts_ai5_widget_pane_g_ParamLimits

0x99fb,	// (0x000099fb) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x11fd,	// (0x000011fd) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe985,	// (0x0000e985) main_ai5_sk_pane_g1

0x38f2,	// (0x000038f2) popup_query_code_window_g1

0xe96a,	// (0x0000e96a) popup_fep_vkb_icf_pane

0x9e54,	// (0x00009e54) popup_fep_vtchi_icf_pane

0xa19b,	// (0x0000a19b) bg_icf_pane

0xa19b,	// (0x0000a19b) list_vkb_icf_pane

0xa1a7,	// (0x0000a1a7) bg_icf_pane_cp01

0xa1ba,	// (0x0000a1ba) vtchi_icf_list_pane

0xe9da,	// (0x0000e9da) list_vkb_icf_pane_t1_ParamLimits

0xe9da,	// (0x0000e9da) list_vkb_icf_pane_t1

0xa222,	// (0x0000a222) vtchi_icf_list_pane_t1_ParamLimits

0xa222,	// (0x0000a222) vtchi_icf_list_pane_t1

0x9e1a,	// (0x00009e1a) popup_fep_ituss_window_ParamLimits

0x9e54,	// (0x00009e54) popup_fep_vtchi_icf_pane_ParamLimits

0x9e8d,	// (0x00009e8d) ituss_keypad_pane_ParamLimits

0x9e99,	// (0x00009e99) ituss_sks_pane

0xa19b,	// (0x0000a19b) bg_icf_pane_ParamLimits

0xe94f,	// (0x0000e94f) icf_edit_indi_pane_ParamLimits

0xe94f,	// (0x0000e94f) icf_edit_indi_pane

0xa19b,	// (0x0000a19b) list_vkb_icf_pane_ParamLimits

0xa1a7,	// (0x0000a1a7) bg_icf_pane_cp01_ParamLimits

0x9e05,	// (0x00009e05) icf_edit_indi_pane_cp01_ParamLimits

0x9e05,	// (0x00009e05) icf_edit_indi_pane_cp01

0xa1c2,	// (0x0000a1c2) vtchi_query_pane

0x8fad,	// (0x00008fad) icf_edit_indi_pane_g1_ParamLimits

0x8fad,	// (0x00008fad) icf_edit_indi_pane_g1

0xe9f1,	// (0x0000e9f1) icf_edit_indi_pane_g2_ParamLimits

0xe9f1,	// (0x0000e9f1) icf_edit_indi_pane_g2

0x0001,

0xedac,	// (0x0000edac) icf_edit_indi_pane_g_ParamLimits

0xedac,	// (0x0000edac) icf_edit_indi_pane_g

0xea03,	// (0x0000ea03) icf_edit_indi_pane_t1

0xa23a,	// (0x0000a23a) bg_input_focus_pane_cp042

0xa243,	// (0x0000a243) vtchi_button_pane

0xa24c,	// (0x0000a24c) vtchi_query_pane_t1

0xa25a,	// (0x0000a25a) vtchi_query_pane_t2

0xa268,	// (0x0000a268) vtchi_query_pane_t3

0x0002,

0xad53,	// (0x0000ad53) vtchi_query_pane_t

0x0020,	// (0x00000020) bg_button_pane_cp13

0xa276,	// (0x0000a276) vtchi_button_pane_g1

0xa27e,	// (0x0000a27e) ituss_sks_pane_g1

0xa287,	// (0x0000a287) ituss_sks_pane_g2

0x0001,

0xad5a,	// (0x0000ad5a) ituss_sks_pane_g

0xa290,	// (0x0000a290) ituss_sks_pane_t1

0xa29e,	// (0x0000a29e) ituss_sks_pane_t2

0x0001,

0xad5f,	// (0x0000ad5f) ituss_sks_pane_t

0x5963,	// (0x00005963) indicator_nsta_pane_cp_g1

0x596c,	// (0x0000596c) indicator_nsta_pane_cp_g2

0x5974,	// (0x00005974) indicator_nsta_pane_cp_g3

0x597c,	// (0x0000597c) indicator_nsta_pane_cp_g4

0x5984,	// (0x00005984) indicator_nsta_pane_cp_g5

0x598c,	// (0x0000598c) indicator_nsta_pane_cp_g6

0x0005,

0xa8ea,	// (0x0000a8ea) indicator_nsta_pane_cp_g

0xe1d5,	// (0x0000e1d5) cell_graphic2_pane_t2_ParamLimits

0xe1d5,	// (0x0000e1d5) cell_graphic2_pane_t2

0x0001,

0xecfd,	// (0x0000ecfd) cell_graphic2_pane_t_ParamLimits

0xecfd,	// (0x0000ecfd) cell_graphic2_pane_t

0xe20d,	// (0x0000e20d) cell_graphic2_control_pane_t1

0xb9bf,	// (0x0000b9bf) signal_pane_g3_ParamLimits

0xb9bf,	// (0x0000b9bf) signal_pane_g3

0xb9d3,	// (0x0000b9d3) signal_pane_g4_ParamLimits

0xb9d3,	// (0x0000b9d3) signal_pane_g4

0xe939,	// (0x0000e939) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe939,	// (0x0000e939) cell_ai5_widget_list_row_pane_t3

0xa07e,	// (0x0000a07e) cell_ituss_key_pane_t1_ParamLimits

0xa07e,	// (0x0000a07e) cell_ituss_key_pane_t1

0x3568,	// (0x00003568) form_field_data_wide_pane_vc_t2_ParamLimits

0x3568,	// (0x00003568) form_field_data_wide_pane_vc_t2

0x357a,	// (0x0000357a) form_field_data_wide_pane_vc_t3_ParamLimits

0x357a,	// (0x0000357a) form_field_data_wide_pane_vc_t3

0x0002,

0xa649,	// (0x0000a649) form_field_data_wide_pane_vc_t_ParamLimits

0xa649,	// (0x0000a649) form_field_data_wide_pane_vc_t

0x5650,	// (0x00005650) form_field_slider_wide_pane_vc_t3_ParamLimits

0x5650,	// (0x00005650) form_field_slider_wide_pane_vc_t3

0x570e,	// (0x0000570e) form_field_popup_wide_pane_vc_t2_ParamLimits

0x570e,	// (0x0000570e) form_field_popup_wide_pane_vc_t2

0x5723,	// (0x00005723) form_field_popup_wide_pane_vc_t3_ParamLimits

0x5723,	// (0x00005723) form_field_popup_wide_pane_vc_t3

0x0002,

0xa8d9,	// (0x0000a8d9) form_field_popup_wide_pane_vc_t_ParamLimits

0xa8d9,	// (0x0000a8d9) form_field_popup_wide_pane_vc_t

0xe6d3,	// (0x0000e6d3) aid_fshwr2_btn_pane_ParamLimits

0xe6e7,	// (0x0000e6e7) aid_fshwr2_syb_pane_ParamLimits

0xe6fb,	// (0x0000e6fb) aid_fshwr2_txt_pane_ParamLimits

0x11fd,	// (0x000011fd) fshwr2_bg_pane_ParamLimits

0xe70b,	// (0x0000e70b) fshwr2_func_candi_pane_ParamLimits

0xe723,	// (0x0000e723) fshwr2_hwr_syb_pane_ParamLimits

0xe73b,	// (0x0000e73b) fshwr2_icf_pane_ParamLimits

0x55cb,	// (0x000055cb) list_double_graphic_pane_vc_g4_ParamLimits

0x55cb,	// (0x000055cb) list_double_graphic_pane_vc_g4

0xa01a,	// (0x0000a01a) cell_ituss_key_pane_g3_ParamLimits

0xa01a,	// (0x0000a01a) cell_ituss_key_pane_g3

0xa15a,	// (0x0000a15a) cell_ituss_key_t5_ParamLimits

0xa15a,	// (0x0000a15a) cell_ituss_key_t5

0xe978,	// (0x0000e978) popup_fep_vkbss_window_ParamLimits

0xe3f6,	// (0x0000e3f6) aid_cell_ai5_quarter

0xea03,	// (0x0000ea03) icf_edit_indi_pane_t1_ParamLimits

0x084e,	// (0x0000084e) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x084e,	// (0x0000084e) aid_tch_indicator_popup_pane_cp2

0x0861,	// (0x00000861) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x0861,	// (0x00000861) aid_tch_query_popup_data_pane_cp2

0x389a,	// (0x0000389a) aid_tch_query_popup_pane_ParamLimits

0x389a,	// (0x0000389a) aid_tch_query_popup_pane

0x389a,	// (0x0000389a) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x389a,	// (0x0000389a) aid_tch_query_popup_data_pane_cp1

0x28cb,	// (0x000028cb) cell_fshwr2_syb_bg_pane_ParamLimits

0xe852,	// (0x0000e852) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xe866,	// (0x0000e866) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe96a,	// (0x0000e96a) popup_fep_vkb_icf_pane_ParamLimits

0xe2d3,	// (0x0000e2d3) bg_popup_fep_char_preview_window_g10

0xe4be,	// (0x0000e4be) cell_ai5_widget_pane_g11_ParamLimits

0xe4be,	// (0x0000e4be) cell_ai5_widget_pane_g11

0xe4ca,	// (0x0000e4ca) cell_ai5_widget_pane_g12_ParamLimits

0xe4ca,	// (0x0000e4ca) cell_ai5_widget_pane_g12

0xe4d6,	// (0x0000e4d6) cell_ai5_widget_pane_g13_ParamLimits

0xe4d6,	// (0x0000e4d6) cell_ai5_widget_pane_g13

0xe5d4,	// (0x0000e5d4) cell_ai5_widget_pane_t11_ParamLimits

0xe5d4,	// (0x0000e5d4) cell_ai5_widget_pane_t11

0xe5e6,	// (0x0000e5e6) cell_ai5_widget_pane_t12_ParamLimits

0xe5e6,	// (0x0000e5e6) cell_ai5_widget_pane_t12

0xa026,	// (0x0000a026) cell_ituss_key_pane_g4_ParamLimits

0xa026,	// (0x0000a026) cell_ituss_key_pane_g4

0xa042,	// (0x0000a042) cell_ituss_key_pane_g5_ParamLimits

0xa042,	// (0x0000a042) cell_ituss_key_pane_g5

0xa05e,	// (0x0000a05e) cell_ituss_key_pane_g6_ParamLimits

0xa05e,	// (0x0000a05e) cell_ituss_key_pane_g6

0x32d0,	// (0x000032d0) bg_icf_pane_g1

0xe98e,	// (0x0000e98e) bg_icf_pane_g2

0xe998,	// (0x0000e998) bg_icf_pane_g3

0xe9a0,	// (0x0000e9a0) bg_icf_pane_g4

0xe9aa,	// (0x0000e9aa) bg_icf_pane_g5

0xe9b4,	// (0x0000e9b4) bg_icf_pane_g6

0xe9be,	// (0x0000e9be) bg_icf_pane_g7

0xe9c6,	// (0x0000e9c6) bg_icf_pane_g8

0xe9d0,	// (0x0000e9d0) bg_icf_pane_g9

0x0008,

0xed99,	// (0x0000ed99) bg_icf_pane_g

0x9e6a,	// (0x00009e6a) popup_hyb_candi_window_ParamLimits

0x9e6a,	// (0x00009e6a) popup_hyb_candi_window

0x345c,	// (0x0000345c) bg_popup_sub_pane_cp01_ParamLimits

0x345c,	// (0x0000345c) bg_popup_sub_pane_cp01

0xa2dc,	// (0x0000a2dc) entry_hyb_candi_pane_ParamLimits

0xa2dc,	// (0x0000a2dc) entry_hyb_candi_pane

0xa2eb,	// (0x0000a2eb) grid_hyb_candi_pane_ParamLimits

0xa2eb,	// (0x0000a2eb) grid_hyb_candi_pane

0xa300,	// (0x0000a300) grid_hyb_phrase_pane_ParamLimits

0xa300,	// (0x0000a300) grid_hyb_phrase_pane

0xa30f,	// (0x0000a30f) cell_hyb_candi_pane_ParamLimits

0xa30f,	// (0x0000a30f) cell_hyb_candi_pane

0xa327,	// (0x0000a327) cell_hyb_candi_scroll_pane

0x1b31,	// (0x00001b31) cell_hyb_candi_pane_g1

0xa330,	// (0x0000a330) cell_hyb_candi_pane_t1

0xa33e,	// (0x0000a33e) cell_hyb_phrase_pane

0x1b31,	// (0x00001b31) cell_hyb_phrase_pane_g1

0xa347,	// (0x0000a347) cell_hyb_phrase_pane_t1

0xa355,	// (0x0000a355) entry_hyb_candi_pane_t1

0x235b,	// (0x0000235b) input_focus_pane_cp06

0xa363,	// (0x0000a363) cell_hyb_candi_scroll_pane_g1

0xa36b,	// (0x0000a36b) cell_hyb_candi_scroll_pane_g1_aid

0xa373,	// (0x0000a373) cell_hyb_candi_scroll_pane_g2

0xa37b,	// (0x0000a37b) cell_hyb_candi_scroll_pane_g2_aid

0xa383,	// (0x0000a383) cell_hyb_candi_scroll_pane_g3

0xa38b,	// (0x0000a38b) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Normal

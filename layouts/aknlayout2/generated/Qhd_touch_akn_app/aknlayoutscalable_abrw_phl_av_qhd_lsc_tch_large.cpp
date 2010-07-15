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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004f661 };

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
0xcd97,	// (0x0005c3f8) Screen

0xcda3,	// (0x0005c404) application_window_ParamLimits

0xcda3,	// (0x0005c404) application_window

0x2bba,	// (0x0005221b) screen_g1

0xb4ad,	// (0x0005ab0e) area_bottom_pane_ParamLimits

0xb4ad,	// (0x0005ab0e) area_bottom_pane

0xf3a7,	// (0x0005ea08) area_top_pane_ParamLimits

0xf3a7,	// (0x0005ea08) area_top_pane

0xf445,	// (0x0005eaa6) main_pane_ParamLimits

0xf445,	// (0x0005eaa6) main_pane

0x2bc4,	// (0x00052225) misc_graphics

0xd4df,	// (0x0005cb40) battery_pane_ParamLimits

0xd4df,	// (0x0005cb40) battery_pane

0x5a46,	// (0x000550a7) bg_status_flat_pane_g8

0x5a4e,	// (0x000550af) bg_status_flat_pane_g9

0x4e34,	// (0x00054495) context_pane_ParamLimits

0x4e34,	// (0x00054495) context_pane

0xd64a,	// (0x0005ccab) navi_pane_ParamLimits

0xd64a,	// (0x0005ccab) navi_pane

0xd6c8,	// (0x0005cd29) signal_pane_ParamLimits

0xd6c8,	// (0x0005cd29) signal_pane

0x0008,

0xf879,	// (0x0005eeda) bg_status_flat_pane_g

0xd758,	// (0x0005cdb9) status_pane_g1_ParamLimits

0xd758,	// (0x0005cdb9) status_pane_g1

0xd76e,	// (0x0005cdcf) status_pane_g2_ParamLimits

0xd76e,	// (0x0005cdcf) status_pane_g2

0x505b,	// (0x000546bc) status_pane_g3_ParamLimits

0x505b,	// (0x000546bc) status_pane_g3

0x0004,

0xf7a5,	// (0x0005ee06) status_pane_g_ParamLimits

0xf7a5,	// (0x0005ee06) status_pane_g

0xd77a,	// (0x0005cddb) title_pane_ParamLimits

0xd77a,	// (0x0005cddb) title_pane

0xd7dd,	// (0x0005ce3e) uni_indicator_pane_ParamLimits

0xd7dd,	// (0x0005ce3e) uni_indicator_pane

0x4c96,	// (0x000542f7) bg_list_pane_ParamLimits

0x4c96,	// (0x000542f7) bg_list_pane

0xd452,	// (0x0005cab3) find_pane

0x525a,	// (0x000548bb) listscroll_app_pane_ParamLimits

0x525a,	// (0x000548bb) listscroll_app_pane

0x4cc2,	// (0x00054323) listscroll_form_pane

0xbe9f,	// (0x0005b500) listscroll_gen_pane_ParamLimits

0xbe9f,	// (0x0005b500) listscroll_gen_pane

0x0e9a,	// (0x000504fb) listscroll_set_pane

0x65bc,	// (0x00055c1d) main_idle_act_pane

0x4992,	// (0x00053ff3) main_idle_trad_pane

0x4992,	// (0x00053ff3) main_list_empty_pane

0x4cb6,	// (0x00054317) main_midp_pane

0x4ce8,	// (0x00054349) main_pane_g1_ParamLimits

0x4ce8,	// (0x00054349) main_pane_g1

0xbeb3,	// (0x0005b514) popup_ai_message_window_ParamLimits

0xbeb3,	// (0x0005b514) popup_ai_message_window

0xbf44,	// (0x0005b5a5) popup_fep_china_uni_window_ParamLimits

0xbf44,	// (0x0005b5a5) popup_fep_china_uni_window

0x0fba,	// (0x0005061b) popup_fep_japan_candidate_window_ParamLimits

0x0fba,	// (0x0005061b) popup_fep_japan_candidate_window

0x0fda,	// (0x0005063b) popup_fep_japan_predictive_window_ParamLimits

0x0fda,	// (0x0005063b) popup_fep_japan_predictive_window

0xbfa0,	// (0x0005b601) popup_find_window

0xbfbd,	// (0x0005b61e) popup_grid_graphic_window_ParamLimits

0xbfbd,	// (0x0005b61e) popup_grid_graphic_window

0x1041,	// (0x000506a2) popup_large_graphic_colour_window

0xc05b,	// (0x0005b6bc) popup_menu_window_ParamLimits

0xc05b,	// (0x0005b6bc) popup_menu_window

0xc22d,	// (0x0005b88e) popup_note_image_window

0xc1f3,	// (0x0005b854) popup_note_wait_window_ParamLimits

0xc1f3,	// (0x0005b854) popup_note_wait_window

0xc245,	// (0x0005b8a6) popup_note_window_ParamLimits

0xc245,	// (0x0005b8a6) popup_note_window

0xc2eb,	// (0x0005b94c) popup_query_code_window_ParamLimits

0xc2eb,	// (0x0005b94c) popup_query_code_window

0x1289,	// (0x000508ea) popup_query_data_code_window_ParamLimits

0x1289,	// (0x000508ea) popup_query_data_code_window

0xc325,	// (0x0005b986) popup_query_data_window_ParamLimits

0xc325,	// (0x0005b986) popup_query_data_window

0xc3a7,	// (0x0005ba08) popup_query_sat_info_window_ParamLimits

0xc3a7,	// (0x0005ba08) popup_query_sat_info_window

0xc43e,	// (0x0005ba9f) popup_snote_single_graphic_window_ParamLimits

0xc43e,	// (0x0005ba9f) popup_snote_single_graphic_window

0xc43e,	// (0x0005ba9f) popup_snote_single_text_window_ParamLimits

0xc43e,	// (0x0005ba9f) popup_snote_single_text_window

0x1310,	// (0x00050971) popup_sub_window_general

0x1440,	// (0x00050aa1) popup_window_general_ParamLimits

0x1440,	// (0x00050aa1) popup_window_general

0x4cf6,	// (0x00054357) power_save_pane

0xbd24,	// (0x0005b385) control_pane_g1_ParamLimits

0xbd24,	// (0x0005b385) control_pane_g1

0xbd4d,	// (0x0005b3ae) control_pane_g2_ParamLimits

0xbd4d,	// (0x0005b3ae) control_pane_g2

0x4c59,	// (0x000542ba) control_pane_g3_ParamLimits

0x4c59,	// (0x000542ba) control_pane_g3

0x0007,

0xf78d,	// (0x0005edee) control_pane_g_ParamLimits

0xf78d,	// (0x0005edee) control_pane_g

0xbd8e,	// (0x0005b3ef) control_pane_t1_ParamLimits

0xbd8e,	// (0x0005b3ef) control_pane_t1

0xbdf4,	// (0x0005b455) control_pane_t2_ParamLimits

0xbdf4,	// (0x0005b455) control_pane_t2

0x0002,

0xf79e,	// (0x0005edff) control_pane_t_ParamLimits

0xf79e,	// (0x0005edff) control_pane_t

0xd384,	// (0x0005c9e5) navi_navi_volume_pane_cp1

0xd38c,	// (0x0005c9ed) status_small_icon_pane

0x4b8e,	// (0x000541ef) status_small_pane_g1_ParamLimits

0x4b8e,	// (0x000541ef) status_small_pane_g1

0xd394,	// (0x0005c9f5) status_small_pane_g2_ParamLimits

0xd394,	// (0x0005c9f5) status_small_pane_g2

0xd3a0,	// (0x0005ca01) status_small_pane_g3_ParamLimits

0xd3a0,	// (0x0005ca01) status_small_pane_g3

0xd3ac,	// (0x0005ca0d) status_small_pane_g4_ParamLimits

0xd3ac,	// (0x0005ca0d) status_small_pane_g4

0xd3b8,	// (0x0005ca19) status_small_pane_g5_ParamLimits

0xd3b8,	// (0x0005ca19) status_small_pane_g5

0xd3c6,	// (0x0005ca27) status_small_pane_g6_ParamLimits

0xd3c6,	// (0x0005ca27) status_small_pane_g6

0x0007,

0xf77c,	// (0x0005eddd) status_small_pane_g_ParamLimits

0xf77c,	// (0x0005eddd) status_small_pane_g

0xd3f5,	// (0x0005ca56) status_small_pane_t1

0xd417,	// (0x0005ca78) status_small_wait_pane_ParamLimits

0xd417,	// (0x0005ca78) status_small_wait_pane

0xd24f,	// (0x0005c8b0) aid_levels_signal_ParamLimits

0xd24f,	// (0x0005c8b0) aid_levels_signal

0xd267,	// (0x0005c8c8) signal_pane_g1_ParamLimits

0xd267,	// (0x0005c8c8) signal_pane_g1

0xd282,	// (0x0005c8e3) signal_pane_g2_ParamLimits

0xd282,	// (0x0005c8e3) signal_pane_g2

0x0003,

0xf70d,	// (0x0005ed6e) signal_pane_g_ParamLimits

0xf70d,	// (0x0005ed6e) signal_pane_g

0x4466,	// (0x00053ac7) context_pane_g1

0xcdb3,	// (0x0005c414) title_pane_g1

0xcdea,	// (0x0005c44b) title_pane_t1

0x2c6c,	// (0x000522cd) title_pane_t2

0x2c92,	// (0x000522f3) title_pane_t3

0x0002,

0xf557,	// (0x0005ebb8) title_pane_t

0xd805,	// (0x0005ce66) aid_levels_battery_ParamLimits

0xd805,	// (0x0005ce66) aid_levels_battery

0xd8bb,	// (0x0005cf1c) battery_pane_g1_ParamLimits

0xd8bb,	// (0x0005cf1c) battery_pane_g1

0xd8d8,	// (0x0005cf39) battery_pane_g2_ParamLimits

0xd8d8,	// (0x0005cf39) battery_pane_g2

0x0001,

0xf7b0,	// (0x0005ee11) battery_pane_g_ParamLimits

0xf7b0,	// (0x0005ee11) battery_pane_g

0xda99,	// (0x0005d0fa) uni_indicator_pane_g1

0xdaae,	// (0x0005d10f) uni_indicator_pane_g2

0xdac4,	// (0x0005d125) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0005ef82) uni_indicator_pane_g

0x4804,	// (0x00053e65) navi_icon_pane_ParamLimits

0x4804,	// (0x00053e65) navi_icon_pane

0x4742,	// (0x00053da3) navi_midp_pane

0x4820,	// (0x00053e81) navi_navi_pane

0x482a,	// (0x00053e8b) navi_text_pane_ParamLimits

0x482a,	// (0x00053e8b) navi_text_pane

0x2bba,	// (0x0005221b) status_small_wait_pane_g1

0x38ab,	// (0x00052f0c) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0005ef7d) status_small_wait_pane_g

0x60a1,	// (0x00055702) navi_navi_icon_text_pane

0x60a9,	// (0x0005570a) navi_navi_pane_g1_ParamLimits

0x60a9,	// (0x0005570a) navi_navi_pane_g1

0x60bb,	// (0x0005571c) navi_navi_pane_g2_ParamLimits

0x60bb,	// (0x0005571c) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0005ef4b) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0005ef4b) navi_navi_pane_g

0x60cd,	// (0x0005572e) navi_navi_tabs_pane

0x60d6,	// (0x00055737) navi_navi_text_pane

0x60a1,	// (0x00055702) navi_navi_volume_pane

0x607d,	// (0x000556de) navi_text_pane_t1

0x6071,	// (0x000556d2) navi_icon_pane_g1

0x5fc4,	// (0x00055625) navi_navi_text_pane_t1

0x17db,	// (0x00050e3c) navi_navi_volume_pane_g1

0x17e3,	// (0x00050e44) volume_small_pane

0x5f2a,	// (0x0005558b) navi_navi_icon_text_pane_g1

0x5f32,	// (0x00055593) navi_navi_icon_text_pane_t1

0x4820,	// (0x00053e81) navi_tabs_2_long_pane

0x4820,	// (0x00053e81) navi_tabs_2_pane

0x4820,	// (0x00053e81) navi_tabs_3_long_pane

0x4820,	// (0x00053e81) navi_tabs_3_pane

0x4820,	// (0x00053e81) navi_tabs_4_pane

0x17bb,	// (0x00050e1c) tabs_2_active_pane_ParamLimits

0x17bb,	// (0x00050e1c) tabs_2_active_pane

0x17cb,	// (0x00050e2c) tabs_2_passive_pane_ParamLimits

0x17cb,	// (0x00050e2c) tabs_2_passive_pane

0x1789,	// (0x00050dea) tabs_3_active_pane_ParamLimits

0x1789,	// (0x00050dea) tabs_3_active_pane

0x1799,	// (0x00050dfa) tabs_3_passive_pane_ParamLimits

0x1799,	// (0x00050dfa) tabs_3_passive_pane

0x17aa,	// (0x00050e0b) tabs_3_passive_pane_cp_ParamLimits

0x17aa,	// (0x00050e0b) tabs_3_passive_pane_cp

0x1745,	// (0x00050da6) tabs_4_active_pane_ParamLimits

0x1745,	// (0x00050da6) tabs_4_active_pane

0x1756,	// (0x00050db7) tabs_4_passive_pane_ParamLimits

0x1756,	// (0x00050db7) tabs_4_passive_pane

0x1767,	// (0x00050dc8) tabs_4_passive_pane_cp_ParamLimits

0x1767,	// (0x00050dc8) tabs_4_passive_pane_cp

0x1778,	// (0x00050dd9) tabs_4_passive_pane_cp2_ParamLimits

0x1778,	// (0x00050dd9) tabs_4_passive_pane_cp2

0x1721,	// (0x00050d82) tabs_2_long_active_pane_ParamLimits

0x1721,	// (0x00050d82) tabs_2_long_active_pane

0x1733,	// (0x00050d94) tabs_2_long_passive_pane_ParamLimits

0x1733,	// (0x00050d94) tabs_2_long_passive_pane

0x16e2,	// (0x00050d43) tabs_3_long_active_pane_ParamLimits

0x16e2,	// (0x00050d43) tabs_3_long_active_pane

0x16f5,	// (0x00050d56) tabs_3_long_passive_pane_ParamLimits

0x16f5,	// (0x00050d56) tabs_3_long_passive_pane

0x170e,	// (0x00050d6f) tabs_3_long_passive_pane_cp_ParamLimits

0x170e,	// (0x00050d6f) tabs_3_long_passive_pane_cp

0x1688,	// (0x00050ce9) volume_small_pane_g1

0x1691,	// (0x00050cf2) volume_small_pane_g2

0x169a,	// (0x00050cfb) volume_small_pane_g3

0x16a3,	// (0x00050d04) volume_small_pane_g4

0x16ac,	// (0x00050d0d) volume_small_pane_g5

0x16b5,	// (0x00050d16) volume_small_pane_g6

0x16be,	// (0x00050d1f) volume_small_pane_g7

0x16c7,	// (0x00050d28) volume_small_pane_g8

0x16d0,	// (0x00050d31) volume_small_pane_g9

0x16d9,	// (0x00050d3a) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0005ef17) volume_small_pane_g

0x36e3,	// (0x00052d44) bg_active_tab_pane_cp2_ParamLimits

0x36e3,	// (0x00052d44) bg_active_tab_pane_cp2

0x2cb2,	// (0x00052313) tabs_3_active_pane_g1

0xce76,	// (0x0005c4d7) tabs_3_active_pane_t1

0x36e3,	// (0x00052d44) bg_passive_tab_pane_cp2_ParamLimits

0x36e3,	// (0x00052d44) bg_passive_tab_pane_cp2

0x2cb2,	// (0x00052313) tabs_3_passive_pane_g1

0xce76,	// (0x0005c4d7) tabs_3_passive_pane_t1

0x36e3,	// (0x00052d44) bg_active_tab_pane_cp3_ParamLimits

0x36e3,	// (0x00052d44) bg_active_tab_pane_cp3

0x2ccc,	// (0x0005232d) tabs_4_active_pane_g1

0xce88,	// (0x0005c4e9) tabs_4_active_pane_t1

0x36e3,	// (0x00052d44) bg_passive_tab_pane_cp3_ParamLimits

0x36e3,	// (0x00052d44) bg_passive_tab_pane_cp3

0x2ccc,	// (0x0005232d) tabs_4_1_passive_pane_g1

0xce88,	// (0x0005c4e9) tabs_4_1_passive_pane_t1

0x4cb6,	// (0x00054317) list_highlight_pane_cp2

0xdb4a,	// (0x0005d1ab) list_set_pane_ParamLimits

0xdb4a,	// (0x0005d1ab) list_set_pane

0xdbe4,	// (0x0005d245) main_pane_set_t1_ParamLimits

0xdbe4,	// (0x0005d245) main_pane_set_t1

0xdc04,	// (0x0005d265) main_pane_set_t2_ParamLimits

0xdc04,	// (0x0005d265) main_pane_set_t2

0xdc18,	// (0x0005d279) main_pane_set_t3_ParamLimits

0xdc18,	// (0x0005d279) main_pane_set_t3

0xdc2a,	// (0x0005d28b) main_pane_set_t4_ParamLimits

0xdc2a,	// (0x0005d28b) main_pane_set_t4

0x0003,

0xf986,	// (0x0005efe7) main_pane_set_t_ParamLimits

0xf986,	// (0x0005efe7) main_pane_set_t

0xdc3c,	// (0x0005d29d) setting_code_pane

0xdc46,	// (0x0005d2a7) setting_slider_graphic_pane

0xdc46,	// (0x0005d2a7) setting_slider_pane

0xdc46,	// (0x0005d2a7) setting_text_pane

0xdc46,	// (0x0005d2a7) setting_volume_pane

0x00bf,	// (0x0004f720) volume_set_pane

0x2ca4,	// (0x00052305) bg_set_opt_pane_cp

0x00c7,	// (0x0004f728) setting_slider_pane_t1

0x00e0,	// (0x0004f741) setting_slider_pane_t2

0x00fa,	// (0x0004f75b) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0005ebbf) setting_slider_pane_t

0x0112,	// (0x0004f773) slider_set_pane

0x2bc4,	// (0x00052225) bg_set_opt_pane_cp2

0x2ce6,	// (0x00052347) setting_slider_graphic_pane_g1

0x0128,	// (0x0004f789) setting_slider_graphic_pane_t1

0x0138,	// (0x0004f799) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0005ebc6) setting_slider_graphic_pane_t

0x0148,	// (0x0004f7a9) slider_set_pane_cp

0x2bc4,	// (0x00052225) input_focus_pane_cp1

0x65a3,	// (0x00055c04) list_set_text_pane

0x2bba,	// (0x0005221b) setting_text_pane_g1

0x2bc4,	// (0x00052225) input_focus_pane_cp2

0x2bba,	// (0x0005221b) setting_code_pane_g1

0x2cef,	// (0x00052350) setting_code_pane_t1

0xef8e,	// (0x0005e5ef) set_text_pane_t1_ParamLimits

0xef8e,	// (0x0005e5ef) set_text_pane_t1

0x3d55,	// (0x000533b6) set_opt_bg_pane_g1

0x3d5d,	// (0x000533be) set_opt_bg_pane_g2

0x657d,	// (0x00055bde) set_opt_bg_pane_g3

0x3d6d,	// (0x000533ce) set_opt_bg_pane_g4

0x3d75,	// (0x000533d6) set_opt_bg_pane_g5

0x3d7d,	// (0x000533de) set_opt_bg_pane_g6

0x6587,	// (0x00055be8) set_opt_bg_pane_g7

0x658f,	// (0x00055bf0) set_opt_bg_pane_g8

0x6599,	// (0x00055bfa) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0005efd4) set_opt_bg_pane_g

0x6570,	// (0x00055bd1) slider_set_pane_g1

0x1878,	// (0x00050ed9) slider_set_pane_g2

0x0006,

0xf964,	// (0x0005efc5) slider_set_pane_g

0x17ec,	// (0x00050e4d) volume_set_pane_g1

0x17f4,	// (0x00050e55) volume_set_pane_g2

0x17fc,	// (0x00050e5d) volume_set_pane_g3

0x1804,	// (0x00050e65) volume_set_pane_g4

0x180c,	// (0x00050e6d) volume_set_pane_g5

0x1814,	// (0x00050e75) volume_set_pane_g6

0x181c,	// (0x00050e7d) volume_set_pane_g7

0x1824,	// (0x00050e85) volume_set_pane_g8

0x182c,	// (0x00050e8d) volume_set_pane_g9

0x1834,	// (0x00050e95) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0005ef9d) volume_set_pane_g

0xce9a,	// (0x0005c4fb) indicator_pane_ParamLimits

0xce9a,	// (0x0005c4fb) indicator_pane

0xcec2,	// (0x0005c523) main_idle_pane_g2_ParamLimits

0xcec2,	// (0x0005c523) main_idle_pane_g2

0xcefa,	// (0x0005c55b) main_pane_idle_g1_ParamLimits

0xcefa,	// (0x0005c55b) main_pane_idle_g1

0x2d3e,	// (0x0005239f) popup_clock_digital_analogue_window_ParamLimits

0x2d3e,	// (0x0005239f) popup_clock_digital_analogue_window

0xcf21,	// (0x0005c582) soft_indicator_pane_ParamLimits

0xcf21,	// (0x0005c582) soft_indicator_pane

0xcf3b,	// (0x0005c59c) wallpaper_pane_ParamLimits

0xcf3b,	// (0x0005c59c) wallpaper_pane

0x2bba,	// (0x0005221b) wallpaper_pane_g1

0xcf4d,	// (0x0005c5ae) indicator_pane_g1_ParamLimits

0xcf4d,	// (0x0005c5ae) indicator_pane_g1

0x6952,	// (0x00055fb3) navi_navi_icon_text_pane_srt_g1

0x2d90,	// (0x000523f1) soft_indicator_pane_t1

0x2daa,	// (0x0005240b) aid_ps_area_pane

0xcf63,	// (0x0005c5c4) aid_ps_clock_pane

0x2dc9,	// (0x0005242a) aid_ps_indicator_pane

0x2dd5,	// (0x00052436) indicator_ps_pane_ParamLimits

0x2dd5,	// (0x00052436) indicator_ps_pane

0x2de4,	// (0x00052445) power_save_pane_g1_ParamLimits

0x2de4,	// (0x00052445) power_save_pane_g1

0x2df0,	// (0x00052451) power_save_pane_g2_ParamLimits

0x2df0,	// (0x00052451) power_save_pane_g2

0xf313,	// (0x0005e974) aid_navinavi_width_pane

0x2daa,	// (0x0005240b) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0005ebcb) power_save_pane_g_ParamLimits

0xf56a,	// (0x0005ebcb) power_save_pane_g

0x2dfe,	// (0x0005245f) power_save_pane_t1_ParamLimits

0x2dfe,	// (0x0005245f) power_save_pane_t1

0xcf63,	// (0x0005c5c4) aid_ps_clock_pane_ParamLimits

0x2dc9,	// (0x0005242a) aid_ps_indicator_pane_ParamLimits

0x2e10,	// (0x00052471) power_save_pane_t4_ParamLimits

0x2e10,	// (0x00052471) power_save_pane_t4

0x0001,

0xf56f,	// (0x0005ebd0) power_save_pane_t_ParamLimits

0xf56f,	// (0x0005ebd0) power_save_pane_t

0x2e3a,	// (0x0005249b) power_save_t3_ParamLimits

0x2e3a,	// (0x0005249b) power_save_t3

0x2e25,	// (0x00052486) power_save_t2_ParamLimits

0x2e25,	// (0x00052486) power_save_t2

0x2e4f,	// (0x000524b0) indicator_ps_pane_g1

0xcf71,	// (0x0005c5d2) ai_gene_pane_ParamLimits

0xcf71,	// (0x0005c5d2) ai_gene_pane

0xcf88,	// (0x0005c5e9) ai_links_pane_ParamLimits

0xcf88,	// (0x0005c5e9) ai_links_pane

0xcfa0,	// (0x0005c601) indicator_pane_cp1_ParamLimits

0xcfa0,	// (0x0005c601) indicator_pane_cp1

0xcfaf,	// (0x0005c610) main_pane_idle_g1_cp_ParamLimits

0xcfaf,	// (0x0005c610) main_pane_idle_g1_cp

0x2e88,	// (0x000524e9) popup_ai_links_title_window

0xcfc7,	// (0x0005c628) soft_indicator_pane_cp1_ParamLimits

0xcfc7,	// (0x0005c628) soft_indicator_pane_cp1

0x636a,	// (0x000559cb) ai_links_pane_g1

0x6373,	// (0x000559d4) grid_ai_links_pane

0xda90,	// (0x0005d0f1) ai_gene_pane_1

0x6358,	// (0x000559b9) ai_gene_pane_2

0x6361,	// (0x000559c2) list_highlight_pane_cp4

0xda6c,	// (0x0005d0cd) cell_ai_link_pane_ParamLimits

0xda6c,	// (0x0005d0cd) cell_ai_link_pane

0x6329,	// (0x0005598a) cell_ai_link_pane_g1

0x38ab,	// (0x00052f0c) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0005ef78) cell_ai_link_pane_g

0x2bc4,	// (0x00052225) grid_highlight_cp2

0x2bc4,	// (0x00052225) bg_popup_sub_pane_cp1

0x2eab,	// (0x0005250c) popup_ai_links_title_window_t1

0x6277,	// (0x000558d8) ai_gene_pane_1_g1_ParamLimits

0x6277,	// (0x000558d8) ai_gene_pane_1_g1

0x6283,	// (0x000558e4) ai_gene_pane_1_g2_ParamLimits

0x6283,	// (0x000558e4) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0005ef6e) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0005ef6e) ai_gene_pane_1_g

0x6290,	// (0x000558f1) ai_gene_pane_1_t1_ParamLimits

0x6290,	// (0x000558f1) ai_gene_pane_1_t1

0x62c4,	// (0x00055925) grid_ai_soft_ind_pane

0x6262,	// (0x000558c3) ai_gene_pane_2_t1_ParamLimits

0x6262,	// (0x000558c3) ai_gene_pane_2_t1

0xcfdb,	// (0x0005c63c) main_pane_empty_t1_ParamLimits

0xcfdb,	// (0x0005c63c) main_pane_empty_t1

0xcff3,	// (0x0005c654) main_pane_empty_t2_ParamLimits

0xcff3,	// (0x0005c654) main_pane_empty_t2

0xd008,	// (0x0005c669) main_pane_empty_t3_ParamLimits

0xd008,	// (0x0005c669) main_pane_empty_t3

0xd01a,	// (0x0005c67b) main_pane_empty_t4_ParamLimits

0xd01a,	// (0x0005c67b) main_pane_empty_t4

0xd02c,	// (0x0005c68d) main_pane_empty_t5_ParamLimits

0xd02c,	// (0x0005c68d) main_pane_empty_t5

0x0004,

0xf574,	// (0x0005ebd5) main_pane_empty_t_ParamLimits

0xf574,	// (0x0005ebd5) main_pane_empty_t

0x3da6,	// (0x00053407) bg_popup_window_pane_ParamLimits

0x3da6,	// (0x00053407) bg_popup_window_pane

0x5fd2,	// (0x00055633) find_popup_pane_cp2_ParamLimits

0x5fd2,	// (0x00055633) find_popup_pane_cp2

0x5fde,	// (0x0005563f) heading_pane_ParamLimits

0x5fde,	// (0x0005563f) heading_pane

0x2bc4,	// (0x00052225) bg_popup_sub_pane

0xd9ed,	// (0x0005d04e) bg_popup_window_pane_g1_ParamLimits

0xd9ed,	// (0x0005d04e) bg_popup_window_pane_g1

0xd9fc,	// (0x0005d05d) bg_popup_window_pane_g2_ParamLimits

0xd9fc,	// (0x0005d05d) bg_popup_window_pane_g2

0xda08,	// (0x0005d069) bg_popup_window_pane_g3_ParamLimits

0xda08,	// (0x0005d069) bg_popup_window_pane_g3

0xda14,	// (0x0005d075) bg_popup_window_pane_g4_ParamLimits

0xda14,	// (0x0005d075) bg_popup_window_pane_g4

0xda23,	// (0x0005d084) bg_popup_window_pane_g5_ParamLimits

0xda23,	// (0x0005d084) bg_popup_window_pane_g5

0xda33,	// (0x0005d094) bg_popup_window_pane_g6_ParamLimits

0xda33,	// (0x0005d094) bg_popup_window_pane_g6

0xda3f,	// (0x0005d0a0) bg_popup_window_pane_g7_ParamLimits

0xda3f,	// (0x0005d0a0) bg_popup_window_pane_g7

0xda4e,	// (0x0005d0af) bg_popup_window_pane_g8_ParamLimits

0xda4e,	// (0x0005d0af) bg_popup_window_pane_g8

0xda5d,	// (0x0005d0be) bg_popup_window_pane_g9_ParamLimits

0xda5d,	// (0x0005d0be) bg_popup_window_pane_g9

0x5fb8,	// (0x00055619) bg_popup_window_pane_g10_ParamLimits

0x5fb8,	// (0x00055619) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0005ef36) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0005ef36) bg_popup_window_pane_g

0x5ee1,	// (0x00055542) bg_popup_heading_pane_ParamLimits

0x5ee1,	// (0x00055542) bg_popup_heading_pane

0x19a6,	// (0x00051007) tabs_4_passive_pane_cp_srt_ParamLimits

0x19a6,	// (0x00051007) tabs_4_passive_pane_cp_srt

0x19b8,	// (0x00051019) tabs_4_passive_pane_srt_ParamLimits

0x5ef5,	// (0x00055556) heading_pane_g2

0x19b8,	// (0x00051019) tabs_4_passive_pane_srt

0x525a,	// (0x000548bb) bg_passive_tab_pane_cp3_srt_ParamLimits

0x525a,	// (0x000548bb) bg_passive_tab_pane_cp3_srt

0x5efd,	// (0x0005555e) heading_pane_t1_ParamLimits

0x5efd,	// (0x0005555e) heading_pane_t1

0x5f14,	// (0x00055575) heading_pane_t2_ParamLimits

0x5f14,	// (0x00055575) heading_pane_t2

0x0001,

0xf8d0,	// (0x0005ef31) heading_pane_t_ParamLimits

0xf8d0,	// (0x0005ef31) heading_pane_t

0x5a0e,	// (0x0005506f) bg_popup_heading_pane_g1

0x5abd,	// (0x0005511e) bg_popup_heading_pane_g2

0x5ac7,	// (0x00055128) bg_popup_heading_pane_g3

0x5ad1,	// (0x00055132) bg_popup_heading_pane_g4

0x5adb,	// (0x0005513c) bg_popup_heading_pane_g5

0x5ae5,	// (0x00055146) bg_popup_heading_pane_g6

0x5aed,	// (0x0005514e) bg_popup_heading_pane_g7

0x5af5,	// (0x00055156) bg_popup_heading_pane_g8

0x5aff,	// (0x00055160) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0005eeed) bg_popup_heading_pane_g

0x51e6,	// (0x00054847) bg_popup_sub_pane_g1

0x51f6,	// (0x00054857) bg_popup_sub_pane_g2

0x51ee,	// (0x0005484f) bg_popup_sub_pane_g3

0x5206,	// (0x00054867) bg_popup_sub_pane_g4

0x51fe,	// (0x0005485f) bg_popup_sub_pane_g5

0x520e,	// (0x0005486f) bg_popup_sub_pane_g6

0x5216,	// (0x00054877) bg_popup_sub_pane_g7

0x5226,	// (0x00054887) bg_popup_sub_pane_g8

0x521e,	// (0x0005487f) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0005eec7) bg_popup_sub_pane_g

0x36e3,	// (0x00052d44) bg_popup_window_pane_cp5_ParamLimits

0x36e3,	// (0x00052d44) bg_popup_window_pane_cp5

0x36ff,	// (0x00052d60) popup_note_window_g1_ParamLimits

0x36ff,	// (0x00052d60) popup_note_window_g1

0x370b,	// (0x00052d6c) popup_note_window_t1_ParamLimits

0x370b,	// (0x00052d6c) popup_note_window_t1

0x3721,	// (0x00052d82) popup_note_window_t2_ParamLimits

0x3721,	// (0x00052d82) popup_note_window_t2

0x3737,	// (0x00052d98) popup_note_window_t3_ParamLimits

0x3737,	// (0x00052d98) popup_note_window_t3

0x374d,	// (0x00052dae) popup_note_window_t4_ParamLimits

0x374d,	// (0x00052dae) popup_note_window_t4

0x3775,	// (0x00052dd6) popup_note_window_t5_ParamLimits

0x3775,	// (0x00052dd6) popup_note_window_t5

0x0004,

0xf57f,	// (0x0005ebe0) popup_note_window_t_ParamLimits

0xf57f,	// (0x0005ebe0) popup_note_window_t

0x37bf,	// (0x00052e20) bg_popup_window_pane_cp6_ParamLimits

0x37bf,	// (0x00052e20) bg_popup_window_pane_cp6

0x598a,	// (0x00054feb) popup_note_image_window_g1_ParamLimits

0x598a,	// (0x00054feb) popup_note_image_window_g1

0x5996,	// (0x00054ff7) popup_note_image_window_g2_ParamLimits

0x5996,	// (0x00054ff7) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0005eebb) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0005eebb) popup_note_image_window_g

0x59af,	// (0x00055010) popup_note_image_window_t1_ParamLimits

0x59af,	// (0x00055010) popup_note_image_window_t1

0x59c8,	// (0x00055029) popup_note_image_window_t2_ParamLimits

0x59c8,	// (0x00055029) popup_note_image_window_t2

0x59e1,	// (0x00055042) popup_note_image_window_t3_ParamLimits

0x59e1,	// (0x00055042) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0005eec0) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0005eec0) popup_note_image_window_t

0x584b,	// (0x00054eac) bg_popup_window_pane_cp7_ParamLimits

0x584b,	// (0x00054eac) bg_popup_window_pane_cp7

0x587b,	// (0x00054edc) popup_note_wait_window_g1_ParamLimits

0x587b,	// (0x00054edc) popup_note_wait_window_g1

0x5887,	// (0x00054ee8) popup_note_wait_window_g2_ParamLimits

0x5887,	// (0x00054ee8) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0005eea9) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0005eea9) popup_note_wait_window_g

0x589f,	// (0x00054f00) popup_note_wait_window_t1_ParamLimits

0x589f,	// (0x00054f00) popup_note_wait_window_t1

0x58c6,	// (0x00054f27) popup_note_wait_window_t2_ParamLimits

0x58c6,	// (0x00054f27) popup_note_wait_window_t2

0x58e3,	// (0x00054f44) popup_note_wait_window_t3_ParamLimits

0x58e3,	// (0x00054f44) popup_note_wait_window_t3

0x58f6,	// (0x00054f57) popup_note_wait_window_t4_ParamLimits

0x58f6,	// (0x00054f57) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0005eeb0) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0005eeb0) popup_note_wait_window_t

0x591b,	// (0x00054f7c) wait_bar_pane_ParamLimits

0x591b,	// (0x00054f7c) wait_bar_pane

0x2bc4,	// (0x00052225) wait_anim_pane

0x2bc4,	// (0x00052225) wait_border_pane

0x2bba,	// (0x0005221b) wait_anim_pane_g1

0x2bba,	// (0x0005221b) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0005ed69) wait_anim_pane_g

0x57ef,	// (0x00054e50) wait_border_pane_g1

0x57fa,	// (0x00054e5b) wait_border_pane_g2

0x5803,	// (0x00054e64) wait_border_pane_g3

0x0002,

0xf841,	// (0x0005eea2) wait_border_pane_g

0x565a,	// (0x00054cbb) bg_popup_window_pane_cp16_ParamLimits

0x565a,	// (0x00054cbb) bg_popup_window_pane_cp16

0x575a,	// (0x00054dbb) indicator_popup_pane_cp4_ParamLimits

0x575a,	// (0x00054dbb) indicator_popup_pane_cp4

0x576e,	// (0x00054dcf) popup_query_data_window_t1_ParamLimits

0x576e,	// (0x00054dcf) popup_query_data_window_t1

0x5780,	// (0x00054de1) popup_query_data_window_t2_ParamLimits

0x5780,	// (0x00054de1) popup_query_data_window_t2

0x5799,	// (0x00054dfa) popup_query_data_window_t3_ParamLimits

0x5799,	// (0x00054dfa) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0005ee9b) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0005ee9b) popup_query_data_window_t

0x57b3,	// (0x00054e14) query_popup_data_pane_ParamLimits

0x57b3,	// (0x00054e14) query_popup_data_pane

0x57c7,	// (0x00054e28) query_popup_data_pane_cp1_ParamLimits

0x57c7,	// (0x00054e28) query_popup_data_pane_cp1

0x565a,	// (0x00054cbb) bg_popup_window_pane_cp10_ParamLimits

0x565a,	// (0x00054cbb) bg_popup_window_pane_cp10

0x568c,	// (0x00054ced) indicator_popup_pane_ParamLimits

0x568c,	// (0x00054ced) indicator_popup_pane

0x56ae,	// (0x00054d0f) popup_query_code_window_t1_ParamLimits

0x56ae,	// (0x00054d0f) popup_query_code_window_t1

0x56c8,	// (0x00054d29) popup_query_code_window_t2_ParamLimits

0x56c8,	// (0x00054d29) popup_query_code_window_t2

0x5711,	// (0x00054d72) popup_query_code_window_t3_ParamLimits

0x5711,	// (0x00054d72) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0005ee94) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0005ee94) popup_query_code_window_t

0x5740,	// (0x00054da1) query_popup_pane_ParamLimits

0x5740,	// (0x00054da1) query_popup_pane

0x37bf,	// (0x00052e20) bg_popup_window_pane_cp15_ParamLimits

0x37bf,	// (0x00052e20) bg_popup_window_pane_cp15

0x37dd,	// (0x00052e3e) indicator_popup_pane_cp1_ParamLimits

0x37dd,	// (0x00052e3e) indicator_popup_pane_cp1

0x37f0,	// (0x00052e51) indicator_popup_pane_cp2_ParamLimits

0x37f0,	// (0x00052e51) indicator_popup_pane_cp2

0x3803,	// (0x00052e64) popup_query_data_code_window_g1_ParamLimits

0x3803,	// (0x00052e64) popup_query_data_code_window_g1

0x3816,	// (0x00052e77) popup_query_data_code_window_t1_ParamLimits

0x3816,	// (0x00052e77) popup_query_data_code_window_t1

0x3828,	// (0x00052e89) popup_query_data_code_window_t2_ParamLimits

0x3828,	// (0x00052e89) popup_query_data_code_window_t2

0x383a,	// (0x00052e9b) popup_query_data_code_window_t3_ParamLimits

0x383a,	// (0x00052e9b) popup_query_data_code_window_t3

0x3850,	// (0x00052eb1) popup_query_data_code_window_t4_ParamLimits

0x3850,	// (0x00052eb1) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0005ebeb) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0005ebeb) popup_query_data_code_window_t

0x14cc,	// (0x00050b2d) list_single_midp_graphic_pane_g3

0x3868,	// (0x00052ec9) query_popup_data_pane_cp2_ParamLimits

0x387b,	// (0x00052edc) query_popup_pane_cp2_ParamLimits

0x387b,	// (0x00052edc) query_popup_pane_cp2

0x2bc4,	// (0x00052225) bg_popup_window_pane_cp11

0x5646,	// (0x00054ca7) heading_pane_cp5

0x3966,	// (0x00052fc7) listscroll_popup_info_pane

0x2bc4,	// (0x00052225) input_focus_pane_cp3

0x388e,	// (0x00052eef) query_popup_pane_t1

0x389c,	// (0x00052efd) list_popup_info_pane_ParamLimits

0x389c,	// (0x00052efd) list_popup_info_pane

0x38ab,	// (0x00052f0c) listscroll_popup_info_pane_g1

0x38b3,	// (0x00052f14) scroll_pane_cp7

0x38bd,	// (0x00052f1e) popup_info_list_pane_t1_ParamLimits

0x38bd,	// (0x00052f1e) popup_info_list_pane_t1

0x38d7,	// (0x00052f38) popup_info_list_pane_t2_ParamLimits

0x38d7,	// (0x00052f38) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0005ebf4) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0005ebf4) popup_info_list_pane_t

0x2bc4,	// (0x00052225) bg_popup_window_pane_cp12

0x696c,	// (0x00055fcd) find_popup_pane

0x2ca4,	// (0x00052305) bg_popup_window_pane_cp3

0x38f1,	// (0x00052f52) heading_pane_cp3

0x38fd,	// (0x00052f5e) listscroll_popup_graphic_pane

0x2bc4,	// (0x00052225) bg_popup_window_pane_cp4

0xd08e,	// (0x0005c6ef) heading_pane_cp4

0x3966,	// (0x00052fc7) listscroll_popup_colour_pane

0x396e,	// (0x00052fcf) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x396e,	// (0x00052fcf) cell_large_graphic_colour_none_popup_pane

0xd096,	// (0x0005c6f7) grid_large_graphic_colour_popup_pane_ParamLimits

0xd096,	// (0x0005c6f7) grid_large_graphic_colour_popup_pane

0x39ae,	// (0x0005300f) listscroll_popup_colour_pane_g1_ParamLimits

0x39ae,	// (0x0005300f) listscroll_popup_colour_pane_g1

0x39c5,	// (0x00053026) listscroll_popup_colour_pane_g2_ParamLimits

0x39c5,	// (0x00053026) listscroll_popup_colour_pane_g2

0x39dc,	// (0x0005303d) listscroll_popup_colour_pane_g3_ParamLimits

0x39dc,	// (0x0005303d) listscroll_popup_colour_pane_g3

0xd0ba,	// (0x0005c71b) listscroll_popup_colour_pane_g4_ParamLimits

0xd0ba,	// (0x0005c71b) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0005ebf9) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0005ebf9) listscroll_popup_colour_pane_g

0x3a00,	// (0x00053061) scroll_pane_cp6_ParamLimits

0x3a00,	// (0x00053061) scroll_pane_cp6

0xd0ca,	// (0x0005c72b) cell_large_graphic_colour_popup_pane_ParamLimits

0xd0ca,	// (0x0005c72b) cell_large_graphic_colour_popup_pane

0x3a31,	// (0x00053092) cell_large_graphic_colour_none_popup_pane_t1

0x2bc4,	// (0x00052225) grid_highlight_pane_cp5

0x3a40,	// (0x000530a1) cell_large_graphic_colour_popup_pane_g1

0x3a48,	// (0x000530a9) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0005ec02) cell_large_graphic_colour_popup_pane_g

0x3a50,	// (0x000530b1) cell_large_graphic_colour_popup_pane_g2_copy1

0x3a59,	// (0x000530ba) grid_highlight_pane_cp4

0x3a61,	// (0x000530c2) bg_popup_window_pane_cp8_ParamLimits

0x3a61,	// (0x000530c2) bg_popup_window_pane_cp8

0x3a7c,	// (0x000530dd) popup_snote_single_text_window_g1_ParamLimits

0x3a7c,	// (0x000530dd) popup_snote_single_text_window_g1

0x3a8e,	// (0x000530ef) popup_snote_single_text_window_t1_ParamLimits

0x3a8e,	// (0x000530ef) popup_snote_single_text_window_t1

0x3aa1,	// (0x00053102) popup_snote_single_text_window_t2_ParamLimits

0x3aa1,	// (0x00053102) popup_snote_single_text_window_t2

0x3ab4,	// (0x00053115) popup_snote_single_text_window_t3_ParamLimits

0x3ab4,	// (0x00053115) popup_snote_single_text_window_t3

0x3aed,	// (0x0005314e) popup_snote_single_text_window_t4_ParamLimits

0x3aed,	// (0x0005314e) popup_snote_single_text_window_t4

0x3b21,	// (0x00053182) popup_snote_single_text_window_t5_ParamLimits

0x3b21,	// (0x00053182) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0005ec07) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0005ec07) popup_snote_single_text_window_t

0x3b50,	// (0x000531b1) bg_popup_window_pane_cp9_ParamLimits

0x3b50,	// (0x000531b1) bg_popup_window_pane_cp9

0x3a7c,	// (0x000530dd) popup_snote_single_graphic_window_g1_ParamLimits

0x3a7c,	// (0x000530dd) popup_snote_single_graphic_window_g1

0x3b5e,	// (0x000531bf) popup_snote_single_graphic_window_g2_ParamLimits

0x3b5e,	// (0x000531bf) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0005ec12) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0005ec12) popup_snote_single_graphic_window_g

0x3b6a,	// (0x000531cb) popup_snote_single_graphic_window_t1_ParamLimits

0x3b6a,	// (0x000531cb) popup_snote_single_graphic_window_t1

0x3b7d,	// (0x000531de) popup_snote_single_graphic_window_t2_ParamLimits

0x3b7d,	// (0x000531de) popup_snote_single_graphic_window_t2

0x3b90,	// (0x000531f1) popup_snote_single_graphic_window_t3_ParamLimits

0x3b90,	// (0x000531f1) popup_snote_single_graphic_window_t3

0x3bc9,	// (0x0005322a) popup_snote_single_graphic_window_t4_ParamLimits

0x3bc9,	// (0x0005322a) popup_snote_single_graphic_window_t4

0x3bfd,	// (0x0005325e) popup_snote_single_graphic_window_t5_ParamLimits

0x3bfd,	// (0x0005325e) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0005ec17) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0005ec17) popup_snote_single_graphic_window_t

0x68ae,	// (0x00055f0f) grid_graphic_popup_pane_ParamLimits

0x68ae,	// (0x00055f0f) grid_graphic_popup_pane

0x68d8,	// (0x00055f39) listscroll_popup_graphic_pane_g1_ParamLimits

0x68d8,	// (0x00055f39) listscroll_popup_graphic_pane_g1

0xdd55,	// (0x0005d3b6) listscroll_popup_graphic_pane_g2_ParamLimits

0xdd55,	// (0x0005d3b6) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0005f011) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0005f011) listscroll_popup_graphic_pane_g

0x6900,	// (0x00055f61) scroll_pane_cp5

0xdcfa,	// (0x0005d35b) cell_graphic_popup_pane_ParamLimits

0xdcfa,	// (0x0005d35b) cell_graphic_popup_pane

0x682e,	// (0x00055e8f) cell_graphic_popup_pane_g1

0x6836,	// (0x00055e97) cell_graphic_popup_pane_g2

0x3a50,	// (0x000530b1) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0005f00a) cell_graphic_popup_pane_g

0x683f,	// (0x00055ea0) cell_graphic_popup_pane_t2

0x3a59,	// (0x000530ba) grid_highlight_pane_cp3

0x3c3e,	// (0x0005329f) list_gen_pane_ParamLimits

0x3c3e,	// (0x0005329f) list_gen_pane

0x3c70,	// (0x000532d1) scroll_pane

0xdcb1,	// (0x0005d312) bg_list_pane_g1_ParamLimits

0xdcb1,	// (0x0005d312) bg_list_pane_g1

0x67a3,	// (0x00055e04) bg_list_pane_g2_ParamLimits

0x67a3,	// (0x00055e04) bg_list_pane_g2

0x67b8,	// (0x00055e19) bg_list_pane_g3_ParamLimits

0x67b8,	// (0x00055e19) bg_list_pane_g3

0x67cc,	// (0x00055e2d) bg_list_pane_g4_ParamLimits

0x67cc,	// (0x00055e2d) bg_list_pane_g4

0xdcce,	// (0x0005d32f) bg_list_pane_g5_ParamLimits

0xdcce,	// (0x0005d32f) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0005efff) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0005efff) bg_list_pane_g

0xdc79,	// (0x0005d2da) list_double2_graphic_large_graphic_pane_ParamLimits

0xdc79,	// (0x0005d2da) list_double2_graphic_large_graphic_pane

0xdc79,	// (0x0005d2da) list_double2_graphic_pane_ParamLimits

0xdc79,	// (0x0005d2da) list_double2_graphic_pane

0xdc79,	// (0x0005d2da) list_double2_large_graphic_pane_ParamLimits

0xdc79,	// (0x0005d2da) list_double2_large_graphic_pane

0xdc79,	// (0x0005d2da) list_double2_pane_ParamLimits

0xdc79,	// (0x0005d2da) list_double2_pane

0xdc79,	// (0x0005d2da) list_double_graphic_heading_pane_ParamLimits

0xdc79,	// (0x0005d2da) list_double_graphic_heading_pane

0xdc79,	// (0x0005d2da) list_double_graphic_pane_ParamLimits

0xdc79,	// (0x0005d2da) list_double_graphic_pane

0xdc79,	// (0x0005d2da) list_double_heading_pane_ParamLimits

0xdc79,	// (0x0005d2da) list_double_heading_pane

0xdc79,	// (0x0005d2da) list_double_large_graphic_pane_ParamLimits

0xdc79,	// (0x0005d2da) list_double_large_graphic_pane

0xdc79,	// (0x0005d2da) list_double_number_pane_ParamLimits

0xdc79,	// (0x0005d2da) list_double_number_pane

0xdc79,	// (0x0005d2da) list_double_pane_ParamLimits

0xdc79,	// (0x0005d2da) list_double_pane

0xdc79,	// (0x0005d2da) list_double_time_pane_ParamLimits

0xdc79,	// (0x0005d2da) list_double_time_pane

0xdc79,	// (0x0005d2da) list_setting_number_pane_ParamLimits

0xdc79,	// (0x0005d2da) list_setting_number_pane

0xdc79,	// (0x0005d2da) list_setting_pane_ParamLimits

0xdc79,	// (0x0005d2da) list_setting_pane

0xdc8b,	// (0x0005d2ec) list_single_2graphic_pane_ParamLimits

0xdc8b,	// (0x0005d2ec) list_single_2graphic_pane

0xdc8b,	// (0x0005d2ec) list_single_graphic_heading_pane_ParamLimits

0xdc8b,	// (0x0005d2ec) list_single_graphic_heading_pane

0xdc8b,	// (0x0005d2ec) list_single_graphic_pane_ParamLimits

0xdc8b,	// (0x0005d2ec) list_single_graphic_pane

0xdc8b,	// (0x0005d2ec) list_single_heading_pane_ParamLimits

0xdc8b,	// (0x0005d2ec) list_single_heading_pane

0xdc79,	// (0x0005d2da) list_single_large_graphic_pane_ParamLimits

0xdc79,	// (0x0005d2da) list_single_large_graphic_pane

0xdc8b,	// (0x0005d2ec) list_single_number_heading_pane_ParamLimits

0xdc8b,	// (0x0005d2ec) list_single_number_heading_pane

0xdc8b,	// (0x0005d2ec) list_single_number_pane_ParamLimits

0xdc8b,	// (0x0005d2ec) list_single_number_pane

0xdc8b,	// (0x0005d2ec) list_single_pane_ParamLimits

0xdc8b,	// (0x0005d2ec) list_single_pane

0x2bc4,	// (0x00052225) list_highlight_pane_cp1

0x48cb,	// (0x00053f2c) list_single_pane_g1_ParamLimits

0x48cb,	// (0x00053f2c) list_single_pane_g1

0x2fb7,	// (0x00052618) list_single_pane_g2_ParamLimits

0x2fb7,	// (0x00052618) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0005ec33) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0005ec33) list_single_pane_g

0x1b09,	// (0x0005116a) list_single_pane_t1_ParamLimits

0x1b09,	// (0x0005116a) list_single_pane_t1

0x48cb,	// (0x00053f2c) list_single_number_pane_g1_ParamLimits

0x48cb,	// (0x00053f2c) list_single_number_pane_g1

0x2fb7,	// (0x00052618) list_single_number_pane_g2_ParamLimits

0x2fb7,	// (0x00052618) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0005ec33) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0005ec33) list_single_number_pane_g

0x1491,	// (0x00050af2) list_single_number_pane_t1_ParamLimits

0x1491,	// (0x00050af2) list_single_number_pane_t1

0xc5e2,	// (0x0005bc43) list_single_number_pane_t2_ParamLimits

0xc5e2,	// (0x0005bc43) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0005efc0) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0005efc0) list_single_number_pane_t

0xb68b,	// (0x0005acec) list_single_graphic_pane_g1_ParamLimits

0xb68b,	// (0x0005acec) list_single_graphic_pane_g1

0x48cb,	// (0x00053f2c) list_single_graphic_pane_g2_ParamLimits

0x48cb,	// (0x00053f2c) list_single_graphic_pane_g2

0x2fb7,	// (0x00052618) list_single_graphic_pane_g3_ParamLimits

0x2fb7,	// (0x00052618) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0005ec22) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0005ec22) list_single_graphic_pane_g

0xb697,	// (0x0005acf8) list_single_graphic_pane_t1_ParamLimits

0xb697,	// (0x0005acf8) list_single_graphic_pane_t1

0xb6ad,	// (0x0005ad0e) list_single_heading_pane_g1_ParamLimits

0xb6ad,	// (0x0005ad0e) list_single_heading_pane_g1

0x2fb7,	// (0x00052618) list_single_heading_pane_g2_ParamLimits

0x2fb7,	// (0x00052618) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0005ec29) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0005ec29) list_single_heading_pane_g

0xb6c0,	// (0x0005ad21) list_single_heading_pane_t1_ParamLimits

0xb6c0,	// (0x0005ad21) list_single_heading_pane_t1

0xb6d6,	// (0x0005ad37) list_single_heading_pane_t2_ParamLimits

0xb6d6,	// (0x0005ad37) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0005ec2e) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0005ec2e) list_single_heading_pane_t

0x48cb,	// (0x00053f2c) list_single_number_heading_pane_g1_ParamLimits

0x48cb,	// (0x00053f2c) list_single_number_heading_pane_g1

0x2fb7,	// (0x00052618) list_single_number_heading_pane_g2_ParamLimits

0x2fb7,	// (0x00052618) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0005ec33) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0005ec33) list_single_number_heading_pane_g

0xb6e8,	// (0x0005ad49) list_single_number_heading_pane_t1_ParamLimits

0xb6e8,	// (0x0005ad49) list_single_number_heading_pane_t1

0x1ad3,	// (0x00051134) list_single_number_heading_pane_t2_ParamLimits

0x1ad3,	// (0x00051134) list_single_number_heading_pane_t2

0x1ae5,	// (0x00051146) list_single_number_heading_pane_t3_ParamLimits

0x1ae5,	// (0x00051146) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0005ec38) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0005ec38) list_single_number_heading_pane_t

0xb6fe,	// (0x0005ad5f) list_single_graphic_heading_pane_g1_ParamLimits

0xb6fe,	// (0x0005ad5f) list_single_graphic_heading_pane_g1

0xb716,	// (0x0005ad77) list_single_graphic_heading_pane_g4_ParamLimits

0xb716,	// (0x0005ad77) list_single_graphic_heading_pane_g4

0x2fb7,	// (0x00052618) list_single_graphic_heading_pane_g5_ParamLimits

0x2fb7,	// (0x00052618) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0005ec3f) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0005ec3f) list_single_graphic_heading_pane_g

0xb6e8,	// (0x0005ad49) list_single_graphic_heading_pane_t1_ParamLimits

0xb6e8,	// (0x0005ad49) list_single_graphic_heading_pane_t1

0xb727,	// (0x0005ad88) list_single_graphic_heading_pane_t2_ParamLimits

0xb727,	// (0x0005ad88) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0005ec46) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0005ec46) list_single_graphic_heading_pane_t

0x1b1f,	// (0x00051180) list_single_large_graphic_pane_g1_ParamLimits

0x1b1f,	// (0x00051180) list_single_large_graphic_pane_g1

0x1b2b,	// (0x0005118c) list_single_large_graphic_pane_g2_ParamLimits

0x1b2b,	// (0x0005118c) list_single_large_graphic_pane_g2

0x3071,	// (0x000526d2) list_single_large_graphic_pane_g3_ParamLimits

0x3071,	// (0x000526d2) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0005ec4b) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0005ec4b) list_single_large_graphic_pane_g

0x57fa,	// (0x00054e5b) wait_border_pane_g2_copy1

0x2f46,	// (0x000525a7) list_single_large_graphic_pane_g4_cp2

0x307d,	// (0x000526de) list_single_large_graphic_pane_t1_ParamLimits

0x307d,	// (0x000526de) list_single_large_graphic_pane_t1

0x47b6,	// (0x00053e17) list_double_pane_g1_ParamLimits

0x47b6,	// (0x00053e17) list_double_pane_g1

0xb73d,	// (0x0005ad9e) list_double_pane_g2_ParamLimits

0xb73d,	// (0x0005ad9e) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0005ec52) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0005ec52) list_double_pane_g

0xb749,	// (0x0005adaa) list_double_pane_t1_ParamLimits

0xb749,	// (0x0005adaa) list_double_pane_t1

0xb75f,	// (0x0005adc0) list_double_pane_t2_ParamLimits

0xb75f,	// (0x0005adc0) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0005ec57) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0005ec57) list_double_pane_t

0xb771,	// (0x0005add2) list_double2_pane_g1_ParamLimits

0xb771,	// (0x0005add2) list_double2_pane_g1

0xb782,	// (0x0005ade3) list_double2_pane_g2_ParamLimits

0xb782,	// (0x0005ade3) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0005ec5c) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0005ec5c) list_double2_pane_g

0xb78e,	// (0x0005adef) list_double2_pane_t1_ParamLimits

0xb78e,	// (0x0005adef) list_double2_pane_t1

0xb7a4,	// (0x0005ae05) list_double2_pane_t2_ParamLimits

0xb7a4,	// (0x0005ae05) list_double2_pane_t2

0x0001,

0xf600,	// (0x0005ec61) list_double2_pane_t_ParamLimits

0xf600,	// (0x0005ec61) list_double2_pane_t

0x47b6,	// (0x00053e17) list_double_number_pane_g1_ParamLimits

0x47b6,	// (0x00053e17) list_double_number_pane_g1

0xb73d,	// (0x0005ad9e) list_double_number_pane_g2_ParamLimits

0xb73d,	// (0x0005ad9e) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0005ec52) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0005ec52) list_double_number_pane_g

0xb7b6,	// (0x0005ae17) list_double_number_pane_t1_ParamLimits

0xb7b6,	// (0x0005ae17) list_double_number_pane_t1

0xb7c8,	// (0x0005ae29) list_double_number_pane_t2_ParamLimits

0xb7c8,	// (0x0005ae29) list_double_number_pane_t2

0xb7de,	// (0x0005ae3f) list_double_number_pane_t3_ParamLimits

0xb7de,	// (0x0005ae3f) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0005ec66) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0005ec66) list_double_number_pane_t

0xb7f0,	// (0x0005ae51) list_double_graphic_pane_g1_ParamLimits

0xb7f0,	// (0x0005ae51) list_double_graphic_pane_g1

0xb7fc,	// (0x0005ae5d) list_double_graphic_pane_g2_ParamLimits

0xb7fc,	// (0x0005ae5d) list_double_graphic_pane_g2

0xb80b,	// (0x0005ae6c) list_double_graphic_pane_g3_ParamLimits

0xb80b,	// (0x0005ae6c) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0005ec6d) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0005ec6d) list_double_graphic_pane_g

0xb823,	// (0x0005ae84) list_double_graphic_pane_t1_ParamLimits

0xb823,	// (0x0005ae84) list_double_graphic_pane_t1

0xb839,	// (0x0005ae9a) list_double_graphic_pane_t2_ParamLimits

0xb839,	// (0x0005ae9a) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0005ec76) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0005ec76) list_double_graphic_pane_t

0xb84b,	// (0x0005aeac) list_double2_graphic_pane_g1_ParamLimits

0xb84b,	// (0x0005aeac) list_double2_graphic_pane_g1

0xb857,	// (0x0005aeb8) list_double2_graphic_pane_g2_ParamLimits

0xb857,	// (0x0005aeb8) list_double2_graphic_pane_g2

0xb863,	// (0x0005aec4) list_double2_graphic_pane_g3_ParamLimits

0xb863,	// (0x0005aec4) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0005ec7b) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0005ec7b) list_double2_graphic_pane_g

0xb86f,	// (0x0005aed0) list_double2_graphic_pane_t1_ParamLimits

0xb86f,	// (0x0005aed0) list_double2_graphic_pane_t1

0xb885,	// (0x0005aee6) list_double2_graphic_pane_t2_ParamLimits

0xb885,	// (0x0005aee6) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0005ec82) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0005ec82) list_double2_graphic_pane_t

0xb897,	// (0x0005aef8) list_double_large_graphic_pane_g1_ParamLimits

0xb897,	// (0x0005aef8) list_double_large_graphic_pane_g1

0xb8b6,	// (0x0005af17) list_double_large_graphic_pane_g2_ParamLimits

0xb8b6,	// (0x0005af17) list_double_large_graphic_pane_g2

0xb73d,	// (0x0005ad9e) list_double_large_graphic_pane_g3_ParamLimits

0xb73d,	// (0x0005ad9e) list_double_large_graphic_pane_g3

0xb8cc,	// (0x0005af2d) list_double_large_graphic_pane_g4_ParamLimits

0xb8cc,	// (0x0005af2d) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0005ec87) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0005ec87) list_double_large_graphic_pane_g

0xb8de,	// (0x0005af3f) list_double_large_graphic_pane_t1_ParamLimits

0xb8de,	// (0x0005af3f) list_double_large_graphic_pane_t1

0xb8f7,	// (0x0005af58) list_double_large_graphic_pane_t2_ParamLimits

0xb8f7,	// (0x0005af58) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0005ec92) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0005ec92) list_double_large_graphic_pane_t

0xb909,	// (0x0005af6a) list_double2_large_graphic_pane_g1_ParamLimits

0xb909,	// (0x0005af6a) list_double2_large_graphic_pane_g1

0xb915,	// (0x0005af76) list_double2_large_graphic_pane_g2_ParamLimits

0xb915,	// (0x0005af76) list_double2_large_graphic_pane_g2

0xb863,	// (0x0005aec4) list_double2_large_graphic_pane_g3_ParamLimits

0xb863,	// (0x0005aec4) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0005ec97) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0005ec97) list_double2_large_graphic_pane_g

0xb926,	// (0x0005af87) list_double2_large_graphic_pane_t1_ParamLimits

0xb926,	// (0x0005af87) list_double2_large_graphic_pane_t1

0xb93c,	// (0x0005af9d) list_double2_large_graphic_pane_t2_ParamLimits

0xb93c,	// (0x0005af9d) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0005ec9e) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0005ec9e) list_double2_large_graphic_pane_t

0xb94e,	// (0x0005afaf) list_double_heading_pane_g1_ParamLimits

0xb94e,	// (0x0005afaf) list_double_heading_pane_g1

0xb95f,	// (0x0005afc0) list_double_heading_pane_g2_ParamLimits

0xb95f,	// (0x0005afc0) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0005eca3) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0005eca3) list_double_heading_pane_g

0xb96b,	// (0x0005afcc) list_double_heading_pane_t1_ParamLimits

0xb96b,	// (0x0005afcc) list_double_heading_pane_t1

0xb7a4,	// (0x0005ae05) list_double_heading_pane_t2_ParamLimits

0xb7a4,	// (0x0005ae05) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0005eca8) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0005eca8) list_double_heading_pane_t

0xb981,	// (0x0005afe2) list_double_graphic_heading_pane_g1_ParamLimits

0xb981,	// (0x0005afe2) list_double_graphic_heading_pane_g1

0xb94e,	// (0x0005afaf) list_double_graphic_heading_pane_g2_ParamLimits

0xb94e,	// (0x0005afaf) list_double_graphic_heading_pane_g2

0xb95f,	// (0x0005afc0) list_double_graphic_heading_pane_g3_ParamLimits

0xb95f,	// (0x0005afc0) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0005ecad) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0005ecad) list_double_graphic_heading_pane_g

0xb98d,	// (0x0005afee) list_double_graphic_heading_pane_t1_ParamLimits

0xb98d,	// (0x0005afee) list_double_graphic_heading_pane_t1

0xb885,	// (0x0005aee6) list_double_graphic_heading_pane_t2_ParamLimits

0xb885,	// (0x0005aee6) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0005ecb4) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0005ecb4) list_double_graphic_heading_pane_t

0xb9a3,	// (0x0005b004) list_double_time_pane_g1_ParamLimits

0xb9a3,	// (0x0005b004) list_double_time_pane_g1

0xb9b4,	// (0x0005b015) list_double_time_pane_g2_ParamLimits

0xb9b4,	// (0x0005b015) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0005ecb9) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0005ecb9) list_double_time_pane_g

0xb9c0,	// (0x0005b021) list_double_time_pane_t1_ParamLimits

0xb9c0,	// (0x0005b021) list_double_time_pane_t1

0xb9d6,	// (0x0005b037) list_double_time_pane_t2_ParamLimits

0xb9d6,	// (0x0005b037) list_double_time_pane_t2

0xb9e8,	// (0x0005b049) list_double_time_pane_t3_ParamLimits

0xb9e8,	// (0x0005b049) list_double_time_pane_t3

0xb9fa,	// (0x0005b05b) list_double_time_pane_t4_ParamLimits

0xb9fa,	// (0x0005b05b) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0005ecbe) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0005ecbe) list_double_time_pane_t

0xba0c,	// (0x0005b06d) list_setting_pane_g1_ParamLimits

0xba0c,	// (0x0005b06d) list_setting_pane_g1

0xb782,	// (0x0005ade3) list_setting_pane_g2_ParamLimits

0xb782,	// (0x0005ade3) list_setting_pane_g2

0x0001,

0xf666,	// (0x0005ecc7) list_setting_pane_g_ParamLimits

0xf666,	// (0x0005ecc7) list_setting_pane_g

0xba18,	// (0x0005b079) list_setting_pane_t1_ParamLimits

0xba18,	// (0x0005b079) list_setting_pane_t1

0xba32,	// (0x0005b093) list_setting_pane_t2_ParamLimits

0xba32,	// (0x0005b093) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0005eccc) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0005eccc) list_setting_pane_t

0xba71,	// (0x0005b0d2) set_value_pane_cp_ParamLimits

0xba71,	// (0x0005b0d2) set_value_pane_cp

0xba7d,	// (0x0005b0de) list_setting_number_pane_g1_ParamLimits

0xba7d,	// (0x0005b0de) list_setting_number_pane_g1

0xba89,	// (0x0005b0ea) list_setting_number_pane_g2_ParamLimits

0xba89,	// (0x0005b0ea) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0005ecd3) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0005ecd3) list_setting_number_pane_g

0xba95,	// (0x0005b0f6) list_setting_number_pane_t1_ParamLimits

0xba95,	// (0x0005b0f6) list_setting_number_pane_t1

0xbaae,	// (0x0005b10f) list_setting_number_pane_t2_ParamLimits

0xbaae,	// (0x0005b10f) list_setting_number_pane_t2

0xbac8,	// (0x0005b129) list_setting_number_pane_t3_ParamLimits

0xbac8,	// (0x0005b129) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0005ecd8) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0005ecd8) list_setting_number_pane_t

0xba71,	// (0x0005b0d2) set_value_pane_ParamLimits

0xba71,	// (0x0005b0d2) set_value_pane

0x3cb0,	// (0x00053311) bg_set_opt_pane_ParamLimits

0x3cb0,	// (0x00053311) bg_set_opt_pane

0x05aa,	// (0x0004fc0b) set_value_pane_t1

0x3cd1,	// (0x00053332) slider_set_pane_cp3

0x3cda,	// (0x0005333b) volume_small_pane_cp

0x3ce3,	// (0x00053344) list_form_gen_pane

0x3cec,	// (0x0005334d) scroll_pane_cp8

0xbb0b,	// (0x0005b16c) form_field_data_pane_ParamLimits

0xbb0b,	// (0x0005b16c) form_field_data_pane

0xbb22,	// (0x0005b183) form_field_data_wide_pane_ParamLimits

0xbb22,	// (0x0005b183) form_field_data_wide_pane

0xbb42,	// (0x0005b1a3) form_field_popup_pane_ParamLimits

0xbb42,	// (0x0005b1a3) form_field_popup_pane

0xbb5a,	// (0x0005b1bb) form_field_popup_wide_pane_ParamLimits

0xbb5a,	// (0x0005b1bb) form_field_popup_wide_pane

0x0646,	// (0x0004fca7) form_field_slider_pane_ParamLimits

0x0646,	// (0x0004fca7) form_field_slider_pane

0x0659,	// (0x0004fcba) form_field_slider_wide_pane_ParamLimits

0x0659,	// (0x0004fcba) form_field_slider_wide_pane

0x3cfd,	// (0x0005335e) data_form_pane

0xbb7b,	// (0x0005b1dc) form_field_data_pane_t1

0x3d09,	// (0x0005336a) input_focus_pane

0x068e,	// (0x0004fcef) data_form_wide_pane

0x06ab,	// (0x0004fd0c) form_field_data_wide_pane_t1

0x3a6e,	// (0x000530cf) input_focus_pane_cp6

0xbb95,	// (0x0005b1f6) form_field_popup_pane_t1

0x3d09,	// (0x0005336a) input_focus_pane_cp7

0x3d2b,	// (0x0005338c) list_form_pane

0x06ed,	// (0x0004fd4e) form_field_popup_wide_pane_t1

0x3d09,	// (0x0005336a) input_focus_pane_cp8

0x3d37,	// (0x00053398) list_form_wide_pane

0xbbb7,	// (0x0005b218) form_field_slider_pane_t1_ParamLimits

0xbbb7,	// (0x0005b218) form_field_slider_pane_t1

0xbbcf,	// (0x0005b230) form_field_slider_pane_t2_ParamLimits

0xbbcf,	// (0x0005b230) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0005ece8) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0005ece8) form_field_slider_pane_t

0x36e3,	// (0x00052d44) input_focus_pane_cp9_ParamLimits

0x36e3,	// (0x00052d44) input_focus_pane_cp9

0xbbe4,	// (0x0005b245) slider_cont_pane_ParamLimits

0xbbe4,	// (0x0005b245) slider_cont_pane

0x3d43,	// (0x000533a4) form_field_slider_wide_pane_t1_ParamLimits

0x3d43,	// (0x000533a4) form_field_slider_wide_pane_t1

0x0749,	// (0x0004fdaa) form_field_slider_wide_pane_t2_ParamLimits

0x0749,	// (0x0004fdaa) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0005eced) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0005eced) form_field_slider_wide_pane_t

0x36e3,	// (0x00052d44) input_focus_pane_cp10_ParamLimits

0x36e3,	// (0x00052d44) input_focus_pane_cp10

0xbbf8,	// (0x0005b259) slider_cont_pane_cp1_ParamLimits

0xbbf8,	// (0x0005b259) slider_cont_pane_cp1

0xbc0c,	// (0x0005b26d) slider_form_pane_cp

0x3d55,	// (0x000533b6) input_focus_pane_g1

0x3d5d,	// (0x000533be) input_focus_pane_g2

0x3d65,	// (0x000533c6) input_focus_pane_g3

0x3d6d,	// (0x000533ce) input_focus_pane_g4

0x3d75,	// (0x000533d6) input_focus_pane_g5

0x3d7d,	// (0x000533de) input_focus_pane_g6

0x3d85,	// (0x000533e6) input_focus_pane_g7

0x3d8d,	// (0x000533ee) input_focus_pane_g8

0x3d95,	// (0x000533f6) input_focus_pane_g9

0x2bba,	// (0x0005221b) input_focus_pane_g10

0x0009,

0xf691,	// (0x0005ecf2) input_focus_pane_g

0x5803,	// (0x00054e64) wait_border_pane_g3_copy1

0xbc14,	// (0x0005b275) data_form_pane_t1

0x2bba,	// (0x0005221b) wait_anim_pane_g1_copy1

0xc5f4,	// (0x0005bc55) data_form_wide_pane_t1

0xbc2d,	// (0x0005b28e) list_form_graphic_pane_cp_ParamLimits

0xbc2d,	// (0x0005b28e) list_form_graphic_pane_cp

0x6718,	// (0x00055d79) slider_form_pane_g1

0x6721,	// (0x00055d82) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0005eff0) slider_form_pane_g

0xbc3e,	// (0x0005b29f) list_form_graphic_pane_ParamLimits

0xbc3e,	// (0x0005b29f) list_form_graphic_pane

0x07c7,	// (0x0004fe28) list_form_graphic_pane_g1

0x07cf,	// (0x0004fe30) list_form_graphic_pane_t1_ParamLimits

0x07cf,	// (0x0004fe30) list_form_graphic_pane_t1

0x2ca4,	// (0x00052305) list_highlight_pane_cp5_ParamLimits

0x2ca4,	// (0x00052305) list_highlight_pane_cp5

0xbc50,	// (0x0005b2b1) find_pane_g1

0x3d9d,	// (0x000533fe) input_find_pane

0xbc59,	// (0x0005b2ba) input_find_pane_g1_ParamLimits

0xbc59,	// (0x0005b2ba) input_find_pane_g1

0xbc65,	// (0x0005b2c6) input_find_pane_t1_ParamLimits

0xbc65,	// (0x0005b2c6) input_find_pane_t1

0xbc7a,	// (0x0005b2db) input_find_pane_t2_ParamLimits

0xbc7a,	// (0x0005b2db) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0005ed07) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0005ed07) input_find_pane_t

0x3da6,	// (0x00053407) input_focus_pane_cp5_ParamLimits

0x3da6,	// (0x00053407) input_focus_pane_cp5

0x3dc0,	// (0x00053421) bg_popup_window_pane_cp2_ParamLimits

0x3dc0,	// (0x00053421) bg_popup_window_pane_cp2

0x3dcd,	// (0x0005342e) listscroll_menu_pane_ParamLimits

0x3dcd,	// (0x0005342e) listscroll_menu_pane

0xd0ff,	// (0x0005c760) popup_submenu_window_ParamLimits

0xd0ff,	// (0x0005c760) popup_submenu_window

0x3e05,	// (0x00053466) find_popup_pane_g1

0x3e0d,	// (0x0005346e) input_popup_find_pane_cp

0x3da6,	// (0x00053407) input_focus_pane_cp4_ParamLimits

0x3da6,	// (0x00053407) input_focus_pane_cp4

0x3e23,	// (0x00053484) input_popup_find_pane_t1_ParamLimits

0x3e23,	// (0x00053484) input_popup_find_pane_t1

0x2bc4,	// (0x00052225) bg_popup_sub_pane_cp

0x3e51,	// (0x000534b2) listscroll_popup_sub_pane

0x3e59,	// (0x000534ba) list_submenu_pane_ParamLimits

0x3e59,	// (0x000534ba) list_submenu_pane

0x3e6a,	// (0x000534cb) scroll_pane_cp4

0x3e72,	// (0x000534d3) list_single_popup_submenu_pane_ParamLimits

0x3e72,	// (0x000534d3) list_single_popup_submenu_pane

0x3e86,	// (0x000534e7) list_single_popup_submenu_pane_g1

0x3e8e,	// (0x000534ef) list_single_popup_submenu_pane_t1_ParamLimits

0x3e8e,	// (0x000534ef) list_single_popup_submenu_pane_t1

0x36e3,	// (0x00052d44) bg_active_tab_pane_cp1_ParamLimits

0x36e3,	// (0x00052d44) bg_active_tab_pane_cp1

0x3ea3,	// (0x00053504) tabs_2_active_pane_g1

0xd139,	// (0x0005c79a) tabs_2_active_pane_t1

0x36e3,	// (0x00052d44) bg_passive_tab_pane_cp1_ParamLimits

0x36e3,	// (0x00052d44) bg_passive_tab_pane_cp1

0x3ea3,	// (0x00053504) tabs_2_passive_pane_g1

0xd139,	// (0x0005c79a) tabs_2_passive_pane_t1

0x2ca4,	// (0x00052305) bg_active_tab_pane_cp4

0xd14b,	// (0x0005c7ac) tabs_2_long_active_pane_t1

0x4cb6,	// (0x00054317) bg_passive_tab_pane_cp4

0x14d4,	// (0x00050b35) list_single_midp_graphic_pane_g4_ParamLimits

0x2ca4,	// (0x00052305) bg_active_tab_pane_cp5

0xd15e,	// (0x0005c7bf) tabs_3_long_active_pane_t1

0x4cb6,	// (0x00054317) bg_passive_tab_pane_cp5

0x14d4,	// (0x00050b35) list_single_midp_graphic_pane_g4

0x2ca4,	// (0x00052305) bg_popup_window_pane_cp13_ParamLimits

0x2ca4,	// (0x00052305) bg_popup_window_pane_cp13

0x3f05,	// (0x00053566) listscroll_popup_fast_pane_ParamLimits

0x3f05,	// (0x00053566) listscroll_popup_fast_pane

0x3f14,	// (0x00053575) grid_popup_fast_pane_ParamLimits

0x3f14,	// (0x00053575) grid_popup_fast_pane

0x3f26,	// (0x00053587) scroll_pane_cp9_ParamLimits

0x3f26,	// (0x00053587) scroll_pane_cp9

0x7fc2,	// (0x00057623) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7fc2,	// (0x00057623) list_single_graphic_hl_pane_t1_cp2

0x3f4a,	// (0x000535ab) input_focus_pane_cp20_ParamLimits

0x3f4a,	// (0x000535ab) input_focus_pane_cp20

0x3f58,	// (0x000535b9) query_popup_data_pane_t1_ParamLimits

0x3f58,	// (0x000535b9) query_popup_data_pane_t1

0x3f6b,	// (0x000535cc) query_popup_data_pane_t2_ParamLimits

0x3f6b,	// (0x000535cc) query_popup_data_pane_t2

0x3fb1,	// (0x00053612) query_popup_data_pane_t3_ParamLimits

0x3fb1,	// (0x00053612) query_popup_data_pane_t3

0x3ff2,	// (0x00053653) query_popup_data_pane_t4_ParamLimits

0x3ff2,	// (0x00053653) query_popup_data_pane_t4

0x402e,	// (0x0005368f) query_popup_data_pane_t5_ParamLimits

0x402e,	// (0x0005368f) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0005ed0c) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0005ed0c) query_popup_data_pane_t

0x3d55,	// (0x000533b6) bg_set_opt_pane_g1

0x3d5d,	// (0x000533be) bg_set_opt_pane_g2

0x3d65,	// (0x000533c6) bg_set_opt_pane_g3

0x3d6d,	// (0x000533ce) bg_set_opt_pane_g4

0x3d75,	// (0x000533d6) bg_set_opt_pane_g5

0x3d7d,	// (0x000533de) bg_set_opt_pane_g6

0x3d85,	// (0x000533e6) bg_set_opt_pane_g7

0x3d8d,	// (0x000533ee) bg_set_opt_pane_g8

0x3d95,	// (0x000533f6) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0005ed17) bg_set_opt_pane_g

0x0b2e,	// (0x0005018f) control_top_pane_stacon_ParamLimits

0x0b2e,	// (0x0005018f) control_top_pane_stacon

0x0b81,	// (0x000501e2) signal_pane_stacon_ParamLimits

0x0b81,	// (0x000501e2) signal_pane_stacon

0x4620,	// (0x00053c81) stacon_top_pane_g1_ParamLimits

0x4620,	// (0x00053c81) stacon_top_pane_g1

0x0ba6,	// (0x00050207) title_pane_stacon_ParamLimits

0x0ba6,	// (0x00050207) title_pane_stacon

0x0bd0,	// (0x00050231) uni_indicator_pane_stacon_ParamLimits

0x0bd0,	// (0x00050231) uni_indicator_pane_stacon

0x0be5,	// (0x00050246) battery_pane_stacon_ParamLimits

0x0be5,	// (0x00050246) battery_pane_stacon

0x0c29,	// (0x0005028a) control_bottom_pane_stacon_ParamLimits

0x0c29,	// (0x0005028a) control_bottom_pane_stacon

0x0c4c,	// (0x000502ad) navi_pane_stacon_ParamLimits

0x0c4c,	// (0x000502ad) navi_pane_stacon

0x4642,	// (0x00053ca3) stacon_bottom_pane_g1_ParamLimits

0x4642,	// (0x00053ca3) stacon_bottom_pane_g1

0x0823,	// (0x0004fe84) aid_levels_signal_lsc_ParamLimits

0x0823,	// (0x0004fe84) aid_levels_signal_lsc

0x0839,	// (0x0004fe9a) signal_pane_stacon_g1_ParamLimits

0x0839,	// (0x0004fe9a) signal_pane_stacon_g1

0x084d,	// (0x0004feae) signal_pane_stacon_g2_ParamLimits

0x084d,	// (0x0004feae) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0005ed2a) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0005ed2a) signal_pane_stacon_g

0x0882,	// (0x0004fee3) title_pane_stacon_t1_ParamLimits

0x0882,	// (0x0004fee3) title_pane_stacon_t1

0x4072,	// (0x000536d3) uni_indicator_pane_stacon_g1

0x407c,	// (0x000536dd) uni_indicator_pane_stacon_g2

0x4086,	// (0x000536e7) uni_indicator_pane_stacon_g3

0x4090,	// (0x000536f1) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0005ed36) uni_indicator_pane_stacon_g

0x08a7,	// (0x0004ff08) control_top_pane_stacon_g1

0x08af,	// (0x0004ff10) control_top_pane_stacon_t1_ParamLimits

0x08af,	// (0x0004ff10) control_top_pane_stacon_t1

0x08e6,	// (0x0004ff47) aid_levels_battery_lsc_ParamLimits

0x08e6,	// (0x0004ff47) aid_levels_battery_lsc

0x08fd,	// (0x0004ff5e) battery_pane_stacon_g1_ParamLimits

0x08fd,	// (0x0004ff5e) battery_pane_stacon_g1

0x0910,	// (0x0004ff71) battery_pane_stacon_g2_ParamLimits

0x0910,	// (0x0004ff71) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0005ed3f) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0005ed3f) battery_pane_stacon_g

0x094e,	// (0x0004ffaf) navi_icon_pane_stacon

0x0962,	// (0x0004ffc3) navi_navi_pane_stacon

0x094e,	// (0x0004ffaf) navi_text_pane_stacon

0x08a7,	// (0x0004ff08) control_bottom_pane_stacon_g1

0x0976,	// (0x0004ffd7) control_bottom_pane_stacon_t1_ParamLimits

0x0976,	// (0x0004ffd7) control_bottom_pane_stacon_t1

0xd170,	// (0x0005c7d1) grid_app_pane_ParamLimits

0xd170,	// (0x0005c7d1) grid_app_pane

0xd1a8,	// (0x0005c809) scroll_pane_cp15_ParamLimits

0xd1a8,	// (0x0005c809) scroll_pane_cp15

0xd1bd,	// (0x0005c81e) cell_app_pane_ParamLimits

0xd1bd,	// (0x0005c81e) cell_app_pane

0xd202,	// (0x0005c863) cell_app_pane_g1_ParamLimits

0xd202,	// (0x0005c863) cell_app_pane_g1

0x4135,	// (0x00053796) cell_app_pane_g2_ParamLimits

0x4135,	// (0x00053796) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0005ed44) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0005ed44) cell_app_pane_g

0xd226,	// (0x0005c887) cell_app_pane_t1_ParamLimits

0xd226,	// (0x0005c887) cell_app_pane_t1

0x4158,	// (0x000537b9) grid_highlight_pane_ParamLimits

0x4158,	// (0x000537b9) grid_highlight_pane

0x3d55,	// (0x000533b6) cell_highlight_pane_g1

0x3d5d,	// (0x000533be) cell_highlight_pane_g2

0x3d65,	// (0x000533c6) cell_highlight_pane_g3

0x3d6d,	// (0x000533ce) cell_highlight_pane_g4

0x3d75,	// (0x000533d6) cell_highlight_pane_g5

0x3d7d,	// (0x000533de) cell_highlight_pane_g6

0x3d85,	// (0x000533e6) cell_highlight_pane_g7

0x3d8d,	// (0x000533ee) cell_highlight_pane_g8

0x3d95,	// (0x000533f6) cell_highlight_pane_g9

0x2bba,	// (0x0005221b) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0005ecf2) cell_highlight_pane_g

0x4169,	// (0x000537ca) bg_scroll_pane

0x09c0,	// (0x00050021) scroll_handle_pane

0x41b0,	// (0x00053811) scroll_bg_pane_g1

0x41c5,	// (0x00053826) scroll_bg_pane_g2

0x41dd,	// (0x0005383e) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0005ed49) scroll_bg_pane_g

0x41f2,	// (0x00053853) scroll_handle_focus_pane_ParamLimits

0x41f2,	// (0x00053853) scroll_handle_focus_pane

0x41b0,	// (0x00053811) scroll_handle_pane_g1

0x41ff,	// (0x00053860) scroll_handle_pane_g2

0x41dd,	// (0x0005383e) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0005ed50) scroll_handle_pane_g

0x3da6,	// (0x00053407) bg_popup_sub_pane_cp21_ParamLimits

0x3da6,	// (0x00053407) bg_popup_sub_pane_cp21

0x4213,	// (0x00053874) popup_fep_japan_predictive_window_t1_ParamLimits

0x4213,	// (0x00053874) popup_fep_japan_predictive_window_t1

0x422d,	// (0x0005388e) popup_fep_japan_predictive_window_t2_ParamLimits

0x422d,	// (0x0005388e) popup_fep_japan_predictive_window_t2

0x4260,	// (0x000538c1) popup_fep_japan_predictive_window_t3_ParamLimits

0x4260,	// (0x000538c1) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0005ed57) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0005ed57) popup_fep_japan_predictive_window_t

0x2bc4,	// (0x00052225) bg_popup_sub_pane_cp23

0x4297,	// (0x000538f8) listscroll_japin_cand_pane

0x429f,	// (0x00053900) popup_fep_japan_candidate_window_t1

0x42ad,	// (0x0005390e) candidate_pane_ParamLimits

0x42ad,	// (0x0005390e) candidate_pane

0x42bf,	// (0x00053920) scroll_pane_cp30

0x42c7,	// (0x00053928) list_single_popup_jap_candidate_pane_ParamLimits

0x42c7,	// (0x00053928) list_single_popup_jap_candidate_pane

0x2bc4,	// (0x00052225) list_highlight_pane_cp30

0x42dc,	// (0x0005393d) list_single_popup_jap_candidate_pane_t1

0x42eb,	// (0x0005394c) level_1_signal

0x42fd,	// (0x0005395e) level_2_signal

0x4310,	// (0x00053971) level_3_signal

0x4323,	// (0x00053984) level_4_signal

0x4336,	// (0x00053997) level_5_signal

0x4349,	// (0x000539aa) level_6_signal

0x435c,	// (0x000539bd) level_7_signal

0x42eb,	// (0x0005394c) level_1_battery

0x42fd,	// (0x0005395e) level_2_battery

0x4310,	// (0x00053971) level_3_battery

0x4323,	// (0x00053984) level_4_battery

0x4336,	// (0x00053997) level_5_battery

0x4349,	// (0x000539aa) level_6_battery

0x435c,	// (0x000539bd) level_7_battery

0x4387,	// (0x000539e8) list_menu_pane_ParamLimits

0x4387,	// (0x000539e8) list_menu_pane

0x439d,	// (0x000539fe) scroll_pane_cp25_ParamLimits

0x439d,	// (0x000539fe) scroll_pane_cp25

0x43b6,	// (0x00053a17) list_double2_graphic_pane_cp2_ParamLimits

0x43b6,	// (0x00053a17) list_double2_graphic_pane_cp2

0x43b6,	// (0x00053a17) list_double2_large_graphic_pane_cp2_ParamLimits

0x43b6,	// (0x00053a17) list_double2_large_graphic_pane_cp2

0x43b6,	// (0x00053a17) list_double2_pane_cp2_ParamLimits

0x43b6,	// (0x00053a17) list_double2_pane_cp2

0x43b6,	// (0x00053a17) list_double_graphic_pane_cp2_ParamLimits

0x43b6,	// (0x00053a17) list_double_graphic_pane_cp2

0x43b6,	// (0x00053a17) list_double_large_graphic_pane_cp2_ParamLimits

0x43b6,	// (0x00053a17) list_double_large_graphic_pane_cp2

0x43b6,	// (0x00053a17) list_double_number_pane_cp2_ParamLimits

0x43b6,	// (0x00053a17) list_double_number_pane_cp2

0x43b6,	// (0x00053a17) list_double_pane_cp2_ParamLimits

0x43b6,	// (0x00053a17) list_double_pane_cp2

0xd23d,	// (0x0005c89e) list_single_2graphic_pane_cp2_ParamLimits

0xd23d,	// (0x0005c89e) list_single_2graphic_pane_cp2

0xd23d,	// (0x0005c89e) list_single_graphic_heading_pane_cp2_ParamLimits

0xd23d,	// (0x0005c89e) list_single_graphic_heading_pane_cp2

0xd23d,	// (0x0005c89e) list_single_graphic_pane_cp2_ParamLimits

0xd23d,	// (0x0005c89e) list_single_graphic_pane_cp2

0xd23d,	// (0x0005c89e) list_single_heading_pane_cp2_ParamLimits

0xd23d,	// (0x0005c89e) list_single_heading_pane_cp2

0x43f3,	// (0x00053a54) list_single_large_graphic_pane_cp2_ParamLimits

0x43f3,	// (0x00053a54) list_single_large_graphic_pane_cp2

0xd23d,	// (0x0005c89e) list_single_number_heading_pane_cp2_ParamLimits

0xd23d,	// (0x0005c89e) list_single_number_heading_pane_cp2

0xd23d,	// (0x0005c89e) list_single_number_pane_cp2_ParamLimits

0xd23d,	// (0x0005c89e) list_single_number_pane_cp2

0xd23d,	// (0x0005c89e) list_single_pane_cp2_ParamLimits

0xd23d,	// (0x0005c89e) list_single_pane_cp2

0x446f,	// (0x00053ad0) bg_popup_sub_pane_cp22

0x0a72,	// (0x000500d3) popup_side_volume_key_window_g1

0x0a9c,	// (0x000500fd) popup_side_volume_key_window_t1

0x0ab8,	// (0x00050119) volume_small_pane_cp1

0x36e3,	// (0x00052d44) bg_popup_sub_pane_cp24_ParamLimits

0x36e3,	// (0x00052d44) bg_popup_sub_pane_cp24

0x4485,	// (0x00053ae6) fep_china_uni_candidate_pane_ParamLimits

0x4485,	// (0x00053ae6) fep_china_uni_candidate_pane

0x4499,	// (0x00053afa) fep_china_uni_entry_pane

0x44a9,	// (0x00053b0a) popup_fep_china_uni_window_g1

0x44c5,	// (0x00053b26) fep_china_uni_entry_pane_g1

0x44cd,	// (0x00053b2e) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0005ed88) fep_china_uni_entry_pane_g

0x44d5,	// (0x00053b36) fep_entry_item_pane

0x44df,	// (0x00053b40) fep_candidate_item_pane

0x44e7,	// (0x00053b48) fep_china_uni_candidate_pane_g1

0x44ef,	// (0x00053b50) fep_china_uni_candidate_pane_g2

0x44f7,	// (0x00053b58) fep_china_uni_candidate_pane_g3

0x44ff,	// (0x00053b60) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0005ed8d) fep_china_uni_candidate_pane_g

0x2bba,	// (0x0005221b) fep_entry_item_pane_g1

0x4507,	// (0x00053b68) fep_entry_item_pane_t1_ParamLimits

0x4507,	// (0x00053b68) fep_entry_item_pane_t1

0x451d,	// (0x00053b7e) fep_candidate_item_pane_t1_ParamLimits

0x451d,	// (0x00053b7e) fep_candidate_item_pane_t1

0x4532,	// (0x00053b93) fep_candidate_item_pane_t2_ParamLimits

0x4532,	// (0x00053b93) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0005ed96) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0005ed96) fep_candidate_item_pane_t

0x2ca4,	// (0x00052305) list_highlight_pane_cp31_ParamLimits

0x2ca4,	// (0x00052305) list_highlight_pane_cp31

0x4544,	// (0x00053ba5) level_1_signal_lsc

0x454d,	// (0x00053bae) level_2_signal_lsc

0x4556,	// (0x00053bb7) level_3_signal_lsc

0x455f,	// (0x00053bc0) level_4_signal_lsc

0x4568,	// (0x00053bc9) level_5_signal_lsc

0x4571,	// (0x00053bd2) level_6_signal_lsc

0x457a,	// (0x00053bdb) level_7_signal_lsc

0x457a,	// (0x00053bdb) level_1_battery_lsc

0x4583,	// (0x00053be4) level_2_battery_lsc

0x458c,	// (0x00053bed) level_3_battery_lsc

0x4595,	// (0x00053bf6) level_4_battery_lsc

0x459e,	// (0x00053bff) level_5_battery_lsc

0x45a7,	// (0x00053c08) level_6_battery_lsc

0x4544,	// (0x00053ba5) level_7_battery_lsc

0x45b0,	// (0x00053c11) scroll_handle_focus_pane_g1

0x45b9,	// (0x00053c1a) scroll_handle_focus_pane_g2

0x45c2,	// (0x00053c23) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0005ed9b) scroll_handle_focus_pane_g

0xbc98,	// (0x0005b2f9) list_single_2graphic_pane_g1_ParamLimits

0xbc98,	// (0x0005b2f9) list_single_2graphic_pane_g1

0xb716,	// (0x0005ad77) list_single_2graphic_pane_g2_ParamLimits

0xb716,	// (0x0005ad77) list_single_2graphic_pane_g2

0x2fb7,	// (0x00052618) list_single_2graphic_pane_g3_ParamLimits

0x2fb7,	// (0x00052618) list_single_2graphic_pane_g3

0xbca4,	// (0x0005b305) list_single_2graphic_pane_g4_ParamLimits

0xbca4,	// (0x0005b305) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0005eda2) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0005eda2) list_single_2graphic_pane_g

0xbcb0,	// (0x0005b311) list_single_2graphic_pane_t1_ParamLimits

0xbcb0,	// (0x0005b311) list_single_2graphic_pane_t1

0xbcde,	// (0x0005b33f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbcde,	// (0x0005b33f) list_double2_graphic_large_graphic_pane_g1

0xb915,	// (0x0005af76) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb915,	// (0x0005af76) list_double2_graphic_large_graphic_pane_g2

0xb863,	// (0x0005aec4) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb863,	// (0x0005aec4) list_double2_graphic_large_graphic_pane_g3

0xbcf0,	// (0x0005b351) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbcf0,	// (0x0005b351) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0005edab) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0005edab) list_double2_graphic_large_graphic_pane_g

0xbcfc,	// (0x0005b35d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbcfc,	// (0x0005b35d) list_double2_graphic_large_graphic_pane_t1

0xbd12,	// (0x0005b373) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbd12,	// (0x0005b373) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0005edb4) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0005edb4) list_double2_graphic_large_graphic_pane_t

0x470a,	// (0x00053d6b) popup_fast_swap_window_ParamLimits

0x470a,	// (0x00053d6b) popup_fast_swap_window

0x4726,	// (0x00053d87) popup_side_volume_key_window

0x4742,	// (0x00053da3) stacon_top_pane

0x474c,	// (0x00053dad) status_pane_ParamLimits

0x474c,	// (0x00053dad) status_pane

0xd2ca,	// (0x0005c92b) status_small_pane

0x2bc4,	// (0x00052225) control_pane

0x2bc4,	// (0x00052225) stacon_bottom_pane

0x3cec,	// (0x0005334d) scroll_pane_cp121

0x3ce3,	// (0x00053344) set_content_pane

0x45cb,	// (0x00053c2c) bg_active_tab_pane_g1_cp1

0x45d4,	// (0x00053c35) bg_active_tab_pane_g2_cp1

0x45dd,	// (0x00053c3e) bg_active_tab_pane_g3_cp1

0x45cb,	// (0x00053c2c) bg_passive_tab_pane_g1_cp1

0x45d4,	// (0x00053c35) bg_passive_tab_pane_g2_cp1

0x45dd,	// (0x00053c3e) bg_passive_tab_pane_g3_cp1

0x45e6,	// (0x00053c47) bg_active_tab_pane_g1_cp2

0x45d4,	// (0x00053c35) bg_active_tab_pane_g2_cp2

0x45ef,	// (0x00053c50) bg_active_tab_pane_g3_cp2

0x45e6,	// (0x00053c47) bg_passive_tab_pane_g1_cp2

0x45d4,	// (0x00053c35) bg_passive_tab_pane_g2_cp2

0x45ef,	// (0x00053c50) bg_passive_tab_pane_g3_cp2

0x45f8,	// (0x00053c59) bg_active_tab_pane_g1_cp3

0x45d4,	// (0x00053c35) bg_active_tab_pane_g2_cp3

0x4601,	// (0x00053c62) bg_active_tab_pane_g3_cp3

0x45f8,	// (0x00053c59) bg_passive_tab_pane_g1_cp3

0x45d4,	// (0x00053c35) bg_passive_tab_pane_g2_cp3

0x4601,	// (0x00053c62) bg_passive_tab_pane_g3_cp3

0x460a,	// (0x00053c6b) bg_active_tab_pane_g1_cp4

0x45d4,	// (0x00053c35) bg_active_tab_pane_g2_cp4

0x4615,	// (0x00053c76) bg_active_tab_pane_g3_cp4

0x460a,	// (0x00053c6b) bg_passive_tab_pane_g1_cp4

0x45d4,	// (0x00053c35) bg_passive_tab_pane_g2_cp4

0x4615,	// (0x00053c76) bg_passive_tab_pane_g3_cp4

0x465e,	// (0x00053cbf) bg_active_tab_pane_g1_cp5

0x45d4,	// (0x00053c35) bg_active_tab_pane_g2_cp5

0x4667,	// (0x00053cc8) bg_active_tab_pane_g3_cp5

0x465e,	// (0x00053cbf) bg_passive_tab_pane_g1_cp5

0x45d4,	// (0x00053c35) bg_passive_tab_pane_g2_cp5

0x4667,	// (0x00053cc8) bg_passive_tab_pane_g3_cp5

0x6cc0,	// (0x00056321) list_set_graphic_pane_ParamLimits

0x6cc0,	// (0x00056321) list_set_graphic_pane

0x2bc4,	// (0x00052225) bg_set_opt_pane_cp4

0x468d,	// (0x00053cee) list_set_graphic_pane_g1_ParamLimits

0x468d,	// (0x00053cee) list_set_graphic_pane_g1

0x4699,	// (0x00053cfa) list_set_graphic_pane_g2_ParamLimits

0x4699,	// (0x00053cfa) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0005edb9) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0005edb9) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x0005f122) volume_small_pane_cp_g

0x46bd,	// (0x00053d1e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x46bd,	// (0x00053d1e) list_double2_large_graphic_pane_g1_cp2

0x46c9,	// (0x00053d2a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x46c9,	// (0x00053d2a) list_double2_large_graphic_pane_g2_cp2

0x46da,	// (0x00053d3b) list_double2_large_graphic_pane_g3_cp2

0x46e2,	// (0x00053d43) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x46e2,	// (0x00053d43) list_double2_large_graphic_pane_t1_cp2

0x46f8,	// (0x00053d59) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x46f8,	// (0x00053d59) list_double2_large_graphic_pane_t2_cp2

0x62d6,	// (0x00055937) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x62d6,	// (0x00055937) list_double_large_graphic_pane_g1_cp2

0x62e7,	// (0x00055948) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x62e7,	// (0x00055948) list_double_large_graphic_pane_g2_cp2

0x4873,	// (0x00053ed4) list_double_large_graphic_pane_g3_cp2

0x62f8,	// (0x00055959) list_double_large_graphic_pane_g4_cp

0x6300,	// (0x00055961) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6300,	// (0x00055961) list_double_large_graphic_pane_t1_cp2

0x6317,	// (0x00055978) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6317,	// (0x00055978) list_double_large_graphic_pane_t2_cp2

0x4765,	// (0x00053dc6) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4765,	// (0x00053dc6) list_double2_graphic_pane_g1_cp2

0x4773,	// (0x00053dd4) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4773,	// (0x00053dd4) list_double2_graphic_pane_g2_cp2

0x4784,	// (0x00053de5) list_double2_graphic_pane_g3_cp2

0x478e,	// (0x00053def) list_double2_graphic_pane_t1_cp2_ParamLimits

0x478e,	// (0x00053def) list_double2_graphic_pane_t1_cp2

0x47a4,	// (0x00053e05) list_double2_graphic_pane_t2_cp2_ParamLimits

0x47a4,	// (0x00053e05) list_double2_graphic_pane_t2_cp2

0x47b6,	// (0x00053e17) list_single_number_heading_pane_g1_cp2_ParamLimits

0x47b6,	// (0x00053e17) list_single_number_heading_pane_g1_cp2

0x47c2,	// (0x00053e23) list_single_number_heading_pane_g2_cp2

0x47ca,	// (0x00053e2b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x47ca,	// (0x00053e2b) list_single_number_heading_pane_t1_cp2

0x47e0,	// (0x00053e41) list_single_number_heading_pane_t2_cp2_ParamLimits

0x47e0,	// (0x00053e41) list_single_number_heading_pane_t2_cp2

0x47f2,	// (0x00053e53) list_single_number_heading_pane_t3_cp2_ParamLimits

0x47f2,	// (0x00053e53) list_single_number_heading_pane_t3_cp2

0x47b6,	// (0x00053e17) list_single_heading_pane_g1_cp2_ParamLimits

0x47b6,	// (0x00053e17) list_single_heading_pane_g1_cp2

0x47c2,	// (0x00053e23) list_single_heading_pane_g2_cp2

0x47ca,	// (0x00053e2b) list_single_heading_pane_t1_cp2_ParamLimits

0x47ca,	// (0x00053e2b) list_single_heading_pane_t1_cp2

0x60de,	// (0x0005573f) list_single_heading_pane_t2_cp2_ParamLimits

0x60de,	// (0x0005573f) list_single_heading_pane_t2_cp2

0x6026,	// (0x00055687) list_double_graphic_pane_g1_cp2_ParamLimits

0x6026,	// (0x00055687) list_double_graphic_pane_g1_cp2

0x6032,	// (0x00055693) list_double_graphic_pane_g2_cp2_ParamLimits

0x6032,	// (0x00055693) list_double_graphic_pane_g2_cp2

0x6041,	// (0x000556a2) list_double_graphic_pane_g3_cp2

0x6049,	// (0x000556aa) list_double_graphic_pane_t1_cp2_ParamLimits

0x6049,	// (0x000556aa) list_double_graphic_pane_t1_cp2

0x605f,	// (0x000556c0) list_double_graphic_pane_t2_cp2_ParamLimits

0x605f,	// (0x000556c0) list_double_graphic_pane_t2_cp2

0x4867,	// (0x00053ec8) list_double_number_pane_g1_cp2_ParamLimits

0x4867,	// (0x00053ec8) list_double_number_pane_g1_cp2

0x4873,	// (0x00053ed4) list_double_number_pane_g2_cp2

0x5fea,	// (0x0005564b) list_double_number_pane_t1_cp2_ParamLimits

0x5fea,	// (0x0005564b) list_double_number_pane_t1_cp2

0x5ffe,	// (0x0005565f) list_double_number_pane_t2_cp2_ParamLimits

0x5ffe,	// (0x0005565f) list_double_number_pane_t2_cp2

0x6014,	// (0x00055675) list_double_number_pane_t3_cp2_ParamLimits

0x6014,	// (0x00055675) list_double_number_pane_t3_cp2

0x5ed3,	// (0x00055534) list_single_graphic_pane_g1_cp2_ParamLimits

0x5ed3,	// (0x00055534) list_single_graphic_pane_g1_cp2

0x48cb,	// (0x00053f2c) list_single_graphic_pane_g2_cp2_ParamLimits

0x48cb,	// (0x00053f2c) list_single_graphic_pane_g2_cp2

0x48d7,	// (0x00053f38) list_single_graphic_pane_g3_cp2

0x5ea9,	// (0x0005550a) list_single_graphic_pane_t1_cp2_ParamLimits

0x5ea9,	// (0x0005550a) list_single_graphic_pane_t1_cp2

0x48cb,	// (0x00053f2c) list_single_number_pane_g1_cp2_ParamLimits

0x48cb,	// (0x00053f2c) list_single_number_pane_g1_cp2

0x48d7,	// (0x00053f38) list_single_number_pane_g2_cp2

0x5ea9,	// (0x0005550a) list_single_number_pane_t1_cp2_ParamLimits

0x5ea9,	// (0x0005550a) list_single_number_pane_t1_cp2

0x5ebf,	// (0x00055520) list_single_number_pane_t2_cp2_ParamLimits

0x5ebf,	// (0x00055520) list_single_number_pane_t2_cp2

0x46c9,	// (0x00053d2a) list_double2_pane_g1_cp2_ParamLimits

0x46c9,	// (0x00053d2a) list_double2_pane_g1_cp2

0x46da,	// (0x00053d3b) list_double2_pane_g2_cp2

0x483f,	// (0x00053ea0) list_double2_pane_t1_cp2_ParamLimits

0x483f,	// (0x00053ea0) list_double2_pane_t1_cp2

0x4855,	// (0x00053eb6) list_double2_pane_t2_cp2_ParamLimits

0x4855,	// (0x00053eb6) list_double2_pane_t2_cp2

0x4867,	// (0x00053ec8) list_double_pane_g1_cp2_ParamLimits

0x4867,	// (0x00053ec8) list_double_pane_g1_cp2

0x4873,	// (0x00053ed4) list_double_pane_g2_cp2

0x487b,	// (0x00053edc) list_double_pane_t1_cp2_ParamLimits

0x487b,	// (0x00053edc) list_double_pane_t1_cp2

0x4891,	// (0x00053ef2) list_double_pane_t2_cp2_ParamLimits

0x4891,	// (0x00053ef2) list_double_pane_t2_cp2

0x48bb,	// (0x00053f1c) list_single_pane_cp2_g3

0x48cb,	// (0x00053f2c) list_single_pane_g1_cp2_ParamLimits

0x48cb,	// (0x00053f2c) list_single_pane_g1_cp2

0x48d7,	// (0x00053f38) list_single_pane_g2_cp2

0x48df,	// (0x00053f40) list_single_pane_t1_cp2_ParamLimits

0x48df,	// (0x00053f40) list_single_pane_t1_cp2

0x48f7,	// (0x00053f58) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x48f7,	// (0x00053f58) list_single_large_graphic_pane_g1_cp2

0x4903,	// (0x00053f64) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4903,	// (0x00053f64) list_single_large_graphic_pane_g2_cp2

0x490f,	// (0x00053f70) list_single_large_graphic_pane_g3_cp2

0x4917,	// (0x00053f78) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4917,	// (0x00053f78) list_single_large_graphic_pane_g4_cp1

0x4931,	// (0x00053f92) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4931,	// (0x00053f92) list_single_large_graphic_pane_t1_cp2

0x5e75,	// (0x000554d6) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5e75,	// (0x000554d6) list_single_graphic_heading_pane_g1_cp2

0x5e42,	// (0x000554a3) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5e42,	// (0x000554a3) list_single_graphic_heading_pane_g4_cp2

0x48d7,	// (0x00053f38) list_single_graphic_heading_pane_g5_cp2

0x5e81,	// (0x000554e2) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5e81,	// (0x000554e2) list_single_graphic_heading_pane_t1_cp2

0x5e97,	// (0x000554f8) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5e97,	// (0x000554f8) list_single_graphic_heading_pane_t2_cp2

0x5e36,	// (0x00055497) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5e36,	// (0x00055497) list_single_2graphic_pane_g1_cp2

0x5e42,	// (0x000554a3) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5e42,	// (0x000554a3) list_single_2graphic_pane_g2_cp2

0x48d7,	// (0x00053f38) list_single_2graphic_pane_g3_cp2

0x5e53,	// (0x000554b4) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5e53,	// (0x000554b4) list_single_2graphic_pane_g4_cp2

0x5e5f,	// (0x000554c0) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5e5f,	// (0x000554c0) list_single_2graphic_pane_t1_cp2

0x2bba,	// (0x0005221b) list_highlight_pane_g10_cp1

0x5a0e,	// (0x0005506f) list_highlight_pane_g1_cp1

0x5a16,	// (0x00055077) list_highlight_pane_g2_cp1

0x5a1e,	// (0x0005507f) list_highlight_pane_g3_cp1

0x5a26,	// (0x00055087) list_highlight_pane_g4_cp1

0x5a2e,	// (0x0005508f) list_highlight_pane_g5_cp1

0x5a36,	// (0x00055097) list_highlight_pane_g6_cp1

0x5a3e,	// (0x0005509f) list_highlight_pane_g7_cp1

0x5a46,	// (0x000550a7) list_highlight_pane_g8_cp1

0x5a4e,	// (0x000550af) list_highlight_pane_g9_cp1

0xd9a4,	// (0x0005d005) form_field_slider_pane_t3

0xd9b2,	// (0x0005d013) form_field_slider_pane_t4

0x594a,	// (0x00054fab) slider_form_pane_ParamLimits

0x594a,	// (0x00054fab) slider_form_pane

0x2bc4,	// (0x00052225) control_abbreviations

0x2bc4,	// (0x00052225) control_conventions

0x2bc4,	// (0x00052225) control_definitions

0x2bc4,	// (0x00052225) format_table_attribute

0x6128,	// (0x00055789) bg_popup_preview_window_pane_g9

0x2bc4,	// (0x00052225) format_table_data2

0x2bc4,	// (0x00052225) format_table_data3

0x2bc4,	// (0x00052225) format_table_data_example

0x0008,

0x2bc4,	// (0x00052225) intro_purpose

0xf8ef,	// (0x0005ef50) bg_popup_preview_window_pane_g

0x2bc4,	// (0x00052225) texts_category

0x2bc4,	// (0x00052225) texts_graphics

0x4947,	// (0x00053fa8) text_digital

0x4956,	// (0x00053fb7) text_primary

0x4965,	// (0x00053fc6) text_primary_small

0x4974,	// (0x00053fd5) text_secondary

0x4983,	// (0x00053fe4) text_title

0x6802,	// (0x00055e63) bg_passive_tab_pane_g1_cp3_srt

0x45d4,	// (0x00053c35) bg_passive_tab_pane_g2_cp3_srt

0x680b,	// (0x00055e6c) bg_passive_tab_pane_g3_cp3_srt

0x36e3,	// (0x00052d44) bg_active_tab_pane_cp3_srt_ParamLimits

0x36e3,	// (0x00052d44) bg_active_tab_pane_cp3_srt

0x6814,	// (0x00055e75) tabs_4_active_pane_srt_g1

0xdce4,	// (0x0005d345) tabs_4_active_pane_srt_t1_ParamLimits

0xdce4,	// (0x0005d345) tabs_4_active_pane_srt_t1

0x6802,	// (0x00055e63) bg_active_tab_pane_g1_cp3_copy1

0x45d4,	// (0x00053c35) bg_active_tab_pane_g2_cp3_copy1

0x680b,	// (0x00055e6c) bg_active_tab_pane_g3_cp3_copy1

0x2ca4,	// (0x00052305) tabs_2_long_active_pane_srt_ParamLimits

0x2ca4,	// (0x00052305) tabs_2_long_active_pane_srt

0x2ca4,	// (0x00052305) tabs_2_long_passive_pane_srt_ParamLimits

0x2ca4,	// (0x00052305) tabs_2_long_passive_pane_srt

0x4cb6,	// (0x00054317) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4cb6,	// (0x00054317) bg_passive_tab_pane_cp4_srt

0x654b,	// (0x00055bac) bg_passive_tab_pane_g1_cp4_srt

0x45d4,	// (0x00053c35) bg_passive_tab_pane_g2_cp4_srt

0x6554,	// (0x00055bb5) bg_passive_tab_pane_g3_cp4_srt

0x2ca4,	// (0x00052305) bg_active_tab_pane_cp4_srt_ParamLimits

0x2ca4,	// (0x00052305) bg_active_tab_pane_cp4_srt

0xdb0e,	// (0x0005d16f) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdb0e,	// (0x0005d16f) tabs_2_long_active_pane_srt_t1

0x654b,	// (0x00055bac) bg_active_tab_pane_g1_cp4_srt

0x45d4,	// (0x00053c35) bg_active_tab_pane_g2_cp4_srt

0x6554,	// (0x00055bb5) bg_active_tab_pane_g3_cp4_srt

0x36e3,	// (0x00052d44) tabs_3_long_active_pane_srt_ParamLimits

0x36e3,	// (0x00052d44) tabs_3_long_active_pane_srt

0x36e3,	// (0x00052d44) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x36e3,	// (0x00052d44) tabs_3_long_passive_pane_cp_srt

0x36e3,	// (0x00052d44) tabs_3_long_passive_pane_srt_ParamLimits

0x36e3,	// (0x00052d44) tabs_3_long_passive_pane_srt

0x4cb6,	// (0x00054317) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4cb6,	// (0x00054317) bg_passive_tab_pane_cp5_srt

0x465e,	// (0x00053cbf) bg_passive_tab_pane_g1_cp5_srt

0x45d4,	// (0x00053c35) bg_passive_tab_pane_g2_cp5_srt

0x4667,	// (0x00053cc8) bg_passive_tab_pane_g3_cp5_srt

0x2ca4,	// (0x00052305) bg_active_tab_pane_cp5_srt_ParamLimits

0x2ca4,	// (0x00052305) bg_active_tab_pane_cp5_srt

0xdaf8,	// (0x0005d159) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdaf8,	// (0x0005d159) tabs_3_long_active_pane_srt_t1

0x465e,	// (0x00053cbf) bg_active_tab_pane_g1_cp5_srt

0x45d4,	// (0x00053c35) bg_active_tab_pane_g2_cp5_srt

0x4667,	// (0x00053cc8) bg_active_tab_pane_g3_cp5_srt

0x652b,	// (0x00055b8c) navi_text_pane_srt_t1

0x6523,	// (0x00055b84) navi_icon_pane_srt_g1

0x4b58,	// (0x000541b9) midp_editing_number_pane_srt

0x4992,	// (0x00053ff3) midp_ticker_pane_srt

0x4b60,	// (0x000541c1) midp_ticker_pane_srt_g1

0x4b68,	// (0x000541c9) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0005edd8) midp_ticker_pane_srt_g

0x4b70,	// (0x000541d1) midp_ticker_pane_srt_t1

0x6514,	// (0x00055b75) midp_editing_number_pane_t1_copy1

0xd2d5,	// (0x0005c936) listscroll_midp_pane

0xd2d5,	// (0x0005c936) midp_form_pane

0x4a0a,	// (0x0005406b) midp_info_popup_window_ParamLimits

0x4a0a,	// (0x0005406b) midp_info_popup_window

0x3da6,	// (0x00053407) bg_popup_sub_pane_cp50_ParamLimits

0x3da6,	// (0x00053407) bg_popup_sub_pane_cp50

0x563a,	// (0x00054c9b) listscroll_midp_info_pane_ParamLimits

0x563a,	// (0x00054c9b) listscroll_midp_info_pane

0x561a,	// (0x00054c7b) listscroll_form_midp_pane_ParamLimits

0x561a,	// (0x00054c7b) listscroll_form_midp_pane

0x5626,	// (0x00054c87) scroll_bar_cp050

0x561a,	// (0x00054c7b) list_midp_pane

0x7246,	// (0x000568a7) signal_pane_g2_cp

0x5534,	// (0x00054b95) listscroll_midp_info_pane_t1_ParamLimits

0x5534,	// (0x00054b95) listscroll_midp_info_pane_t1

0x554c,	// (0x00054bad) listscroll_midp_info_pane_t2_ParamLimits

0x554c,	// (0x00054bad) listscroll_midp_info_pane_t2

0x558a,	// (0x00054beb) listscroll_midp_info_pane_t3_ParamLimits

0x558a,	// (0x00054beb) listscroll_midp_info_pane_t3

0x55c4,	// (0x00054c25) listscroll_midp_info_pane_t4_ParamLimits

0x55c4,	// (0x00054c25) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0005ee8b) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0005ee8b) listscroll_midp_info_pane_t

0x3e6a,	// (0x000534cb) scroll_pane_cp21

0x54d2,	// (0x00054b33) form_midp_field_choice_group_pane

0x54db,	// (0x00054b3c) form_midp_field_text_pane

0x551a,	// (0x00054b7b) form_midp_field_time_pane

0x5522,	// (0x00054b83) form_midp_gauge_slider_pane

0x552b,	// (0x00054b8c) form_midp_gauge_wait_pane

0x2bc4,	// (0x00052225) form_midp_image_pane

0xc5cd,	// (0x0005bc2e) list_single_midp_pane_ParamLimits

0xc5cd,	// (0x0005bc2e) list_single_midp_pane

0xd983,	// (0x0005cfe4) form_midp_field_text_pane_t1

0x525a,	// (0x000548bb) input_focus_pane_cp050

0x54c1,	// (0x00054b22) list_midp_form_text_pane

0x5459,	// (0x00054aba) form_midp_field_choice_group_pane_t1

0x5467,	// (0x00054ac8) input_focus_pane_cp051

0x547b,	// (0x00054adc) list_midp_choice_pane

0x2bc4,	// (0x00052225) status_idle_pane

0x543d,	// (0x00054a9e) form_midp_field_time_pane_t1

0x2bba,	// (0x0005221b) wait_anim_pane_g2_copy1

0x544b,	// (0x00054aac) form_midp_field_time_pane_t2

0x0001,

0x4ab8,	// (0x00054119) aid_navinavi_width_2_pane

0xf825,	// (0x0005ee86) form_midp_field_time_pane_t

0x2bc4,	// (0x00052225) input_focus_pane_cp052

0x2bc4,	// (0x00052225) bg_input_focus_pane_cp040

0x53fd,	// (0x00054a5e) form_midp_gauge_slider_pane_t1

0x540b,	// (0x00054a6c) form_midp_gauge_slider_pane_t2

0xd967,	// (0x0005cfc8) form_midp_gauge_slider_pane_t3

0xd975,	// (0x0005cfd6) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0005ee7d) form_midp_gauge_slider_pane_t

0x5435,	// (0x00054a96) form_midp_slider_pane

0x2ca4,	// (0x00052305) bg_input_focus_pane_cp041_ParamLimits

0x2ca4,	// (0x00052305) bg_input_focus_pane_cp041

0x53ca,	// (0x00054a2b) form_midp_gauge_wait_pane_t1_ParamLimits

0x53ca,	// (0x00054a2b) form_midp_gauge_wait_pane_t1

0x53dc,	// (0x00054a3d) form_midp_gauge_wait_pane_t2_ParamLimits

0x53dc,	// (0x00054a3d) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0005ee78) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0005ee78) form_midp_gauge_wait_pane_t

0x53ee,	// (0x00054a4f) form_midp_wait_pane_ParamLimits

0x53ee,	// (0x00054a4f) form_midp_wait_pane

0x5394,	// (0x000549f5) form_midp_image_pane_g1

0x539d,	// (0x000549fe) form_midp_image_pane_t1

0x53ac,	// (0x00054a0d) form_midp_image_pane_t2

0x53bb,	// (0x00054a1c) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0005ee71) form_midp_image_pane_t

0x538b,	// (0x000549ec) list_single_midp_pane_g1

0x164f,	// (0x00050cb0) list_single_midp_pane_t1

0xd953,	// (0x0005cfb4) list_midp_form_item_pane_ParamLimits

0xd953,	// (0x0005cfb4) list_midp_form_item_pane

0x4a60,	// (0x000540c1) list_midp_form_item_pane_t1

0x4a6f,	// (0x000540d0) midp_ticker_pane_g1

0x4a7b,	// (0x000540dc) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0005edbe) midp_ticker_pane_g

0x4a87,	// (0x000540e8) midp_ticker_pane_t1

0x6765,	// (0x00055dc6) midp_editing_number_pane_t1

0x6743,	// (0x00055da4) midp_editing_number_pane

0x6752,	// (0x00055db3) midp_ticker_pane

0x6504,	// (0x00055b65) ai_message_heading_pane

0x2bc4,	// (0x00052225) bg_popup_window_pane_cp14

0x650c,	// (0x00055b6d) listscroll_ai_message_pane

0x648e,	// (0x00055aef) ai_message_heading_pane_g1_ParamLimits

0x648e,	// (0x00055aef) ai_message_heading_pane_g1

0x649a,	// (0x00055afb) ai_message_heading_pane_g2_ParamLimits

0x649a,	// (0x00055afb) ai_message_heading_pane_g2

0x64a6,	// (0x00055b07) ai_message_heading_pane_g3_ParamLimits

0x64a6,	// (0x00055b07) ai_message_heading_pane_g3

0x64b2,	// (0x00055b13) ai_message_heading_pane_g4_ParamLimits

0x64b2,	// (0x00055b13) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0005efb2) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0005efb2) ai_message_heading_pane_g

0x64be,	// (0x00055b1f) ai_message_heading_pane_t1_ParamLimits

0x64be,	// (0x00055b1f) ai_message_heading_pane_t1

0x64d8,	// (0x00055b39) ai_message_heading_pane_t2_ParamLimits

0x64d8,	// (0x00055b39) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0005efbb) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0005efbb) ai_message_heading_pane_t

0x64ea,	// (0x00055b4b) bg_popup_heading_pane_cp1_ParamLimits

0x64ea,	// (0x00055b4b) bg_popup_heading_pane_cp1

0x647c,	// (0x00055add) list_ai_message_pane_ParamLimits

0x647c,	// (0x00055add) list_ai_message_pane

0x3e6a,	// (0x000534cb) scroll_pane_cp10

0x6418,	// (0x00055a79) list_ai_message_pane_g1

0x6420,	// (0x00055a81) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0005ef8f) list_ai_message_pane_g

0x6428,	// (0x00055a89) list_ai_message_pane_t1_ParamLimits

0x6428,	// (0x00055a89) list_ai_message_pane_t1

0x643d,	// (0x00055a9e) list_ai_message_pane_t2_ParamLimits

0x643d,	// (0x00055a9e) list_ai_message_pane_t2

0x6452,	// (0x00055ab3) list_ai_message_pane_t3_ParamLimits

0x6452,	// (0x00055ab3) list_ai_message_pane_t3

0x6467,	// (0x00055ac8) list_ai_message_pane_t4_ParamLimits

0x6467,	// (0x00055ac8) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0005ef94) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0005ef94) list_ai_message_pane_t

0xdad7,	// (0x0005d138) cell_ai_soft_ind_pane_ParamLimits

0xdad7,	// (0x0005d138) cell_ai_soft_ind_pane

0x4a99,	// (0x000540fa) cell_ai_soft_ind_pane_g1_ParamLimits

0x4a99,	// (0x000540fa) cell_ai_soft_ind_pane_g1

0x2bc4,	// (0x00052225) grid_highlight_cp1

0x4aa6,	// (0x00054107) text_secondary_cp56_ParamLimits

0x4aa6,	// (0x00054107) text_secondary_cp56

0x63d8,	// (0x00055a39) example_general_pane_ParamLimits

0x63d8,	// (0x00055a39) example_general_pane

0x63e4,	// (0x00055a45) example_parent_pane_g1_ParamLimits

0x63e4,	// (0x00055a45) example_parent_pane_g1

0x63f0,	// (0x00055a51) example_parent_pane_t1_ParamLimits

0x63f0,	// (0x00055a51) example_parent_pane_t1

0xc277,	// (0x0005b8d8) popup_preview_text_window_ParamLimits

0xc277,	// (0x0005b8d8) popup_preview_text_window

0x48c3,	// (0x00053f24) list_single_pane_cp2_g4

0x37bf,	// (0x00052e20) bg_popup_preview_window_pane_ParamLimits

0x37bf,	// (0x00052e20) bg_popup_preview_window_pane

0x6130,	// (0x00055791) popup_preview_text_window_t1_ParamLimits

0x6130,	// (0x00055791) popup_preview_text_window_t1

0x614e,	// (0x000557af) popup_preview_text_window_t2_ParamLimits

0x614e,	// (0x000557af) popup_preview_text_window_t2

0x6197,	// (0x000557f8) popup_preview_text_window_t3_ParamLimits

0x6197,	// (0x000557f8) popup_preview_text_window_t3

0x61dc,	// (0x0005583d) popup_preview_text_window_t4_ParamLimits

0x61dc,	// (0x0005583d) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0005ef63) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0005ef63) popup_preview_text_window_t

0x625a,	// (0x000558bb) scroll_pane_cp11

0x51e6,	// (0x00054847) bg_popup_preview_window_pane_g1

0x60f0,	// (0x00055751) bg_popup_preview_window_pane_g2

0x60f8,	// (0x00055759) bg_popup_preview_window_pane_g3

0x6100,	// (0x00055761) bg_popup_preview_window_pane_g4

0x6108,	// (0x00055769) bg_popup_preview_window_pane_g5

0x6110,	// (0x00055771) bg_popup_preview_window_pane_g6

0x6118,	// (0x00055779) bg_popup_preview_window_pane_g7

0x6120,	// (0x00055781) bg_popup_preview_window_pane_g8

0xf31f,	// (0x0005e980) aid_popup_width_pane

0xc1f3,	// (0x0005b854) popup_midp_note_alarm_window_ParamLimits

0xc1f3,	// (0x0005b854) popup_midp_note_alarm_window

0x3cfd,	// (0x0005335e) data_form_pane_ParamLimits

0xbb71,	// (0x0005b1d2) form_field_data_pane_g1

0xbb7b,	// (0x0005b1dc) form_field_data_pane_t1_ParamLimits

0x3d09,	// (0x0005336a) input_focus_pane_ParamLimits

0x068e,	// (0x0004fcef) data_form_wide_pane_ParamLimits

0x069f,	// (0x0004fd00) form_field_data_wide_pane_g1

0x06ab,	// (0x0004fd0c) form_field_data_wide_pane_t1_ParamLimits

0x3a6e,	// (0x000530cf) input_focus_pane_cp6_ParamLimits

0xd12b,	// (0x0005c78c) input_popup_find_pane_g1_ParamLimits

0xd12b,	// (0x0005c78c) input_popup_find_pane_g1

0x0921,	// (0x0004ff82) aid_navi_side_left_pane

0x0936,	// (0x0004ff97) aid_navi_side_right_pane

0x5b09,	// (0x0005516a) bg_popup_window_pane_cp30_ParamLimits

0x5b09,	// (0x0005516a) bg_popup_window_pane_cp30

0x5b83,	// (0x000551e4) popup_midp_note_alarm_window_g1_ParamLimits

0x5b83,	// (0x000551e4) popup_midp_note_alarm_window_g1

0x5bb3,	// (0x00055214) popup_midp_note_alarm_window_t1_ParamLimits

0x5bb3,	// (0x00055214) popup_midp_note_alarm_window_t1

0x5c54,	// (0x000552b5) popup_midp_note_alarm_window_t2_ParamLimits

0x5c54,	// (0x000552b5) popup_midp_note_alarm_window_t2

0x5d02,	// (0x00055363) popup_midp_note_alarm_window_t3_ParamLimits

0x5d02,	// (0x00055363) popup_midp_note_alarm_window_t3

0x5d34,	// (0x00055395) popup_midp_note_alarm_window_t4_ParamLimits

0x5d34,	// (0x00055395) popup_midp_note_alarm_window_t4

0x5d5a,	// (0x000553bb) popup_midp_note_alarm_window_t5_ParamLimits

0x5d5a,	// (0x000553bb) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0005ef00) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0005ef00) popup_midp_note_alarm_window_t

0x5e06,	// (0x00055467) wait_bar_pane_cp1_ParamLimits

0x5e06,	// (0x00055467) wait_bar_pane_cp1

0x2bc4,	// (0x00052225) wait_anim_pane_copy1

0x2bc4,	// (0x00052225) wait_border_pane_copy1

0x57ef,	// (0x00054e50) wait_border_pane_g1_copy1

0x06c5,	// (0x0004fd26) form_field_popup_pane_g1

0xbb95,	// (0x0005b1f6) form_field_popup_pane_t1_ParamLimits

0x3d09,	// (0x0005336a) input_focus_pane_cp7_ParamLimits

0x3d2b,	// (0x0005338c) list_form_pane_ParamLimits

0x06e5,	// (0x0004fd46) form_field_popup_wide_pane_g1

0x06ed,	// (0x0004fd4e) form_field_popup_wide_pane_t1_ParamLimits

0x3d09,	// (0x0005336a) input_focus_pane_cp8_ParamLimits

0x3d37,	// (0x00053398) list_form_wide_pane_ParamLimits

0xdd3d,	// (0x0005d39e) aid_size_cell_graphic_pane

0xbc14,	// (0x0005b275) data_form_pane_t1_ParamLimits

0xc5f4,	// (0x0005bc55) data_form_wide_pane_t1_ParamLimits

0xd53e,	// (0x0005cb9f) bg_status_flat_pane

0xcdea,	// (0x0005c44b) title_pane_t1_ParamLimits

0x2c6c,	// (0x000522cd) title_pane_t2_ParamLimits

0x2c92,	// (0x000522f3) title_pane_t3_ParamLimits

0xf557,	// (0x0005ebb8) title_pane_t_ParamLimits

0x42eb,	// (0x0005394c) level_1_signal_ParamLimits

0x42fd,	// (0x0005395e) level_2_signal_ParamLimits

0x4310,	// (0x00053971) level_3_signal_ParamLimits

0x4323,	// (0x00053984) level_4_signal_ParamLimits

0x4336,	// (0x00053997) level_5_signal_ParamLimits

0x4349,	// (0x000539aa) level_6_signal_ParamLimits

0x435c,	// (0x000539bd) level_7_signal_ParamLimits

0x42eb,	// (0x0005394c) level_1_battery_ParamLimits

0x42fd,	// (0x0005395e) level_2_battery_ParamLimits

0x4310,	// (0x00053971) level_3_battery_ParamLimits

0x4323,	// (0x00053984) level_4_battery_ParamLimits

0x4336,	// (0x00053997) level_5_battery_ParamLimits

0x4349,	// (0x000539aa) level_6_battery_ParamLimits

0x435c,	// (0x000539bd) level_7_battery_ParamLimits

0x5a0e,	// (0x0005506f) bg_status_flat_pane_g1

0x5a16,	// (0x00055077) bg_status_flat_pane_g2

0x5a1e,	// (0x0005507f) bg_status_flat_pane_g3

0x5a26,	// (0x00055087) bg_status_flat_pane_g4

0x5a2e,	// (0x0005508f) bg_status_flat_pane_g5

0x5a36,	// (0x00055097) bg_status_flat_pane_g6

0x5a3e,	// (0x0005509f) bg_status_flat_pane_g7

0xce76,	// (0x0005c4d7) tabs_3_active_pane_t1_ParamLimits

0xce76,	// (0x0005c4d7) tabs_3_passive_pane_t1_ParamLimits

0xce88,	// (0x0005c4e9) tabs_4_active_pane_t1_ParamLimits

0xce88,	// (0x0005c4e9) tabs_4_1_passive_pane_t1_ParamLimits

0xd139,	// (0x0005c79a) tabs_2_active_pane_t1_ParamLimits

0xd139,	// (0x0005c79a) tabs_2_passive_pane_t1_ParamLimits

0x2ca4,	// (0x00052305) bg_active_tab_pane_cp4_ParamLimits

0xd14b,	// (0x0005c7ac) tabs_2_long_active_pane_t1_ParamLimits

0x4cb6,	// (0x00054317) bg_passive_tab_pane_cp4_ParamLimits

0x1530,	// (0x00050b91) list_single_midp_graphic_pane_t1_ParamLimits

0x2ca4,	// (0x00052305) bg_active_tab_pane_cp5_ParamLimits

0xd15e,	// (0x0005c7bf) tabs_3_long_active_pane_t1_ParamLimits

0x4cb6,	// (0x00054317) bg_passive_tab_pane_cp5_ParamLimits

0x1530,	// (0x00050b91) list_single_midp_graphic_pane_t1

0xd53e,	// (0x0005cb9f) bg_status_flat_pane_ParamLimits

0x4e76,	// (0x000544d7) indicator_pane_cp2_ParamLimits

0x4e76,	// (0x000544d7) indicator_pane_cp2

0xd6bc,	// (0x0005cd1d) navi_pane_srt_ParamLimits

0xd6bc,	// (0x0005cd1d) navi_pane_srt

0x4fc5,	// (0x00054626) popup_clock_digital_analogue_window_cp1

0x2d81,	// (0x000523e2) indicator_pane_t1

0x4992,	// (0x00053ff3) copy_highlight_pane

0x4992,	// (0x00053ff3) cursor_graphics_pane

0x4992,	// (0x00053ff3) graphic_within_text_pane

0x4992,	// (0x00053ff3) link_highlight_pane

0x621d,	// (0x0005587e) popup_preview_text_window_t5_ParamLimits

0x621d,	// (0x0005587e) popup_preview_text_window_t5

0x4ac0,	// (0x00054121) cursor_digital_pane

0x4ac0,	// (0x00054121) cursor_primary_pane

0x4ad1,	// (0x00054132) cursor_primary_small_pane

0x4ad9,	// (0x0005413a) cursor_secondary_pane

0x4ae1,	// (0x00054142) cursor_title_pane

0x4ac0,	// (0x00054121) link_highlight_digital_pane

0x4ac8,	// (0x00054129) link_highlight_primary_pane

0x4ad1,	// (0x00054132) link_highlight_primary_small_pane

0x4ad9,	// (0x0005413a) link_highlight_secondary_pane

0x4ae1,	// (0x00054142) link_highlight_title_pane

0x4ac0,	// (0x00054121) copy_highlight_digital_pane

0x4ac0,	// (0x00054121) copy_highlight_primary_pane

0x4ad1,	// (0x00054132) copy_highlight_primary_small_pane

0x4ad9,	// (0x0005413a) copy_highlight_secondary_pane

0x4ae1,	// (0x00054142) copy_highlight_title_pane

0x4ad9,	// (0x0005413a) graphic_text_digital_pane

0x5aac,	// (0x0005510d) graphic_text_primary_pane

0x5ab5,	// (0x00055116) graphic_text_primary_small_pane

0x4ad1,	// (0x00054132) graphic_text_secondary_pane

0x4ac0,	// (0x00054121) graphic_text_title_pane

0xd37a,	// (0x0005c9db) cursor_primary_pane_g1

0x5a9e,	// (0x000550ff) cursor_text_primary_t1

0xd9d4,	// (0x0005d035) cursor_primary_small_pane_g1

0x5a90,	// (0x000550f1) cursor_text_primary_small_t1

0xd9ca,	// (0x0005d02b) cursor_primary_small_pane_g1_copy1

0x5a78,	// (0x000550d9) cursor_text_primary_small_t1_copy1

0x5a56,	// (0x000550b7) cursor_text_title_t1

0xd9c0,	// (0x0005d021) cursor_title_pane_g1

0xd37a,	// (0x0005c9db) cursor_digital_pane_g1

0x4af3,	// (0x00054154) cursor_text_digital_t1

0x4b18,	// (0x00054179) link_highlight_primary_pane_g1

0x59ff,	// (0x00055060) link_highlight_primary_pane_t1

0x4b01,	// (0x00054162) link_highlight_primary_small_pane_g1

0x4b09,	// (0x0005416a) link_highlight_primary_small_pane_t1

0x4b18,	// (0x00054179) link_highlight_secondary_pane_g1

0x4b20,	// (0x00054181) link_highlight_secondary_pane_t1

0x5973,	// (0x00054fd4) link_highlight_title_pane_g1

0x597b,	// (0x00054fdc) link_highlight_title_pane_t1

0x595c,	// (0x00054fbd) link_highlight_digital_pane_g1

0x5964,	// (0x00054fc5) link_highlight_digital_pane_t1

0x5834,	// (0x00054e95) copy_highlight_primary_pane_g1

0x583c,	// (0x00054e9d) copy_highlight_primary_pane_t1

0x580e,	// (0x00054e6f) copy_highlight_primary_small_pane_g1

0x5825,	// (0x00054e86) copy_highlight_primary_small_pane_t1

0x4b2f,	// (0x00054190) copy_highlight_secondary_pane_g1

0x4b37,	// (0x00054198) copy_highlight_secondary_pane_t1

0x580e,	// (0x00054e6f) copy_highlight_title_pane_g1

0x5816,	// (0x00054e77) copy_highlight_title_pane_t1

0x5834,	// (0x00054e95) copy_highlight_digital_pane_g1

0x6a64,	// (0x000560c5) copy_highlight_digital_pane_t1

0x69b8,	// (0x00056019) graphic_text_primary_pane_g1

0x6a48,	// (0x000560a9) graphic_text_primary_pane_t1

0x6a56,	// (0x000560b7) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0005f02f) graphic_text_primary_pane_t

0x6a24,	// (0x00056085) graphic_text_primary_small_pane_g1

0x6a2c,	// (0x0005608d) graphic_text_primary_small_pane_t1

0x6a3a,	// (0x0005609b) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0005f02a) graphic_text_primary_small_pane_t

0x6a00,	// (0x00056061) graphic_text_secondary_pane_g1

0x6a08,	// (0x00056069) graphic_text_secondary_pane_t1

0x6a16,	// (0x00056077) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0005f025) graphic_text_secondary_pane_t

0x69dc,	// (0x0005603d) graphic_text_title_pane_g1

0x69e4,	// (0x00056045) graphic_text_title_pane_t1

0x69f2,	// (0x00056053) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0005f020) graphic_text_title_pane_t

0x69b8,	// (0x00056019) graphic_text_digital_pane_g1

0x69c0,	// (0x00056021) graphic_text_digital_pane_t1

0x69ce,	// (0x0005602f) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0005f01b) graphic_text_digital_pane_t

0x2ca4,	// (0x00052305) navi_icon_pane_srt_ParamLimits

0x2ca4,	// (0x00052305) navi_icon_pane_srt

0x2bc4,	// (0x00052225) navi_midp_pane_srt

0x2bc4,	// (0x00052225) navi_navi_pane_srt

0x2ca4,	// (0x00052305) navi_text_pane_srt_ParamLimits

0x2ca4,	// (0x00052305) navi_text_pane_srt

0x6983,	// (0x00055fe4) navi_navi_icon_text_pane_srt

0x698b,	// (0x00055fec) navi_navi_pane_srt_g1_ParamLimits

0x698b,	// (0x00055fec) navi_navi_pane_srt_g1

0x699d,	// (0x00055ffe) navi_navi_pane_srt_g2_ParamLimits

0x699d,	// (0x00055ffe) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0005f016) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0005f016) navi_navi_pane_srt_g

0x69af,	// (0x00056010) navi_navi_tabs_pane_srt

0x6983,	// (0x00055fe4) navi_navi_text_pane_srt

0x6983,	// (0x00055fe4) navi_navi_volume_pane_srt

0x6974,	// (0x00055fd5) navi_navi_text_pane_srt_t1

0x1a1d,	// (0x0005107e) navi_navi_volume_pane_srt_g1

0x1a25,	// (0x00051086) volume_small_pane_srt_ParamLimits

0x1a25,	// (0x00051086) volume_small_pane_srt

0x0c6f,	// (0x000502d0) volume_small_pane_srt_g1_ParamLimits

0x0c6f,	// (0x000502d0) volume_small_pane_srt_g1

0x0c7f,	// (0x000502e0) volume_small_pane_srt_g2_ParamLimits

0x0c7f,	// (0x000502e0) volume_small_pane_srt_g2

0x0c90,	// (0x000502f1) volume_small_pane_srt_g3_ParamLimits

0x0c90,	// (0x000502f1) volume_small_pane_srt_g3

0x0ca1,	// (0x00050302) volume_small_pane_srt_g4_ParamLimits

0x0ca1,	// (0x00050302) volume_small_pane_srt_g4

0x0cb2,	// (0x00050313) volume_small_pane_srt_g5_ParamLimits

0x0cb2,	// (0x00050313) volume_small_pane_srt_g5

0x0cc3,	// (0x00050324) volume_small_pane_srt_g6_ParamLimits

0x0cc3,	// (0x00050324) volume_small_pane_srt_g6

0x0cd4,	// (0x00050335) volume_small_pane_srt_g7_ParamLimits

0x0cd4,	// (0x00050335) volume_small_pane_srt_g7

0x0ce5,	// (0x00050346) volume_small_pane_srt_g8_ParamLimits

0x0ce5,	// (0x00050346) volume_small_pane_srt_g8

0x0cf6,	// (0x00050357) volume_small_pane_srt_g9_ParamLimits

0x0cf6,	// (0x00050357) volume_small_pane_srt_g9

0x0d07,	// (0x00050368) volume_small_pane_srt_g10_ParamLimits

0x0d07,	// (0x00050368) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0005edc3) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0005edc3) volume_small_pane_srt_g

0x3868,	// (0x00052ec9) query_popup_data_pane_cp2

0x695a,	// (0x00055fbb) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x695a,	// (0x00055fbb) navi_navi_icon_text_pane_srt_t1

0x5aac,	// (0x0005510d) navi_tabs_2_long_pane_srt

0x5aac,	// (0x0005510d) navi_tabs_2_pane_srt

0x5aac,	// (0x0005510d) navi_tabs_3_long_pane_srt

0x5aac,	// (0x0005510d) navi_tabs_3_pane_srt

0x5aac,	// (0x0005510d) navi_tabs_4_pane_srt

0x19fd,	// (0x0005105e) tabs_2_active_pane_srt_ParamLimits

0x19fd,	// (0x0005105e) tabs_2_active_pane_srt

0x1a0d,	// (0x0005106e) tabs_2_passive_pane_srt_ParamLimits

0x1a0d,	// (0x0005106e) tabs_2_passive_pane_srt

0x525a,	// (0x000548bb) bg_passive_tab_pane_cp1_srt_ParamLimits

0x525a,	// (0x000548bb) bg_passive_tab_pane_cp1_srt

0x6926,	// (0x00055f87) bg_passive_tab_pane_g1_cp1_srt

0x45d4,	// (0x00053c35) bg_passive_tab_pane_g2_cp1_srt

0x692f,	// (0x00055f90) bg_passive_tab_pane_g3_cp1_srt

0x36e3,	// (0x00052d44) bg_active_tab_pane_cp1_srt_ParamLimits

0x36e3,	// (0x00052d44) bg_active_tab_pane_cp1_srt

0x6938,	// (0x00055f99) tabs_2_active_pane_srt_g1

0xdd7f,	// (0x0005d3e0) tabs_2_active_pane_srt_t1_ParamLimits

0xdd7f,	// (0x0005d3e0) tabs_2_active_pane_srt_t1

0x6926,	// (0x00055f87) bg_active_tab_pane_g1_cp1_srt

0x45d4,	// (0x00053c35) bg_active_tab_pane_g2_cp1_srt

0x692f,	// (0x00055f90) bg_active_tab_pane_g3_cp1_srt

0x19ca,	// (0x0005102b) tabs_3_active_pane_srt_ParamLimits

0x19ca,	// (0x0005102b) tabs_3_active_pane_srt

0x19db,	// (0x0005103c) tabs_3_passive_pane_cp_srt_ParamLimits

0x19db,	// (0x0005103c) tabs_3_passive_pane_cp_srt

0x19ec,	// (0x0005104d) tabs_3_passive_pane_srt_ParamLimits

0x19ec,	// (0x0005104d) tabs_3_passive_pane_srt

0x525a,	// (0x000548bb) bg_passive_tab_pane_cp2_srt_ParamLimits

0x525a,	// (0x000548bb) bg_passive_tab_pane_cp2_srt

0x4b46,	// (0x000541a7) bg_passive_tab_pane_g1_cp2_srt

0x45d4,	// (0x00053c35) bg_passive_tab_pane_g2_cp2_srt

0x4b4f,	// (0x000541b0) bg_passive_tab_pane_g3_cp2_srt

0x36e3,	// (0x00052d44) bg_active_tab_pane_cp2_srt_ParamLimits

0x36e3,	// (0x00052d44) bg_active_tab_pane_cp2_srt

0x690c,	// (0x00055f6d) tabs_3_active_pane_srt_g1

0xdd69,	// (0x0005d3ca) tabs_3_active_pane_srt_t1_ParamLimits

0xdd69,	// (0x0005d3ca) tabs_3_active_pane_srt_t1

0x4b46,	// (0x000541a7) bg_active_tab_pane_g1_cp2_srt

0x45d4,	// (0x00053c35) bg_active_tab_pane_g2_cp2_srt

0x4b4f,	// (0x000541b0) bg_active_tab_pane_g3_cp2_srt

0x1982,	// (0x00050fe3) tabs_4_active_pane_srt_ParamLimits

0x1982,	// (0x00050fe3) tabs_4_active_pane_srt

0x1994,	// (0x00050ff5) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1994,	// (0x00050ff5) tabs_4_passive_pane_cp2_srt

0x0e76,	// (0x000504d7) aid_size_cell_toolbar

0x65bc,	// (0x00055c1d) main_idle_act_pane_ParamLimits

0x1041,	// (0x000506a2) popup_large_graphic_colour_window_ParamLimits

0xc503,	// (0x0005bb64) popup_toolbar_window_ParamLimits

0xc503,	// (0x0005bb64) popup_toolbar_window

0x6774,	// (0x00055dd5) list_single_graphic_2heading_pane_ParamLimits

0x6774,	// (0x00055dd5) list_single_graphic_2heading_pane

0x409a,	// (0x000536fb) aid_size_cell_apps_grid_lsc_pane

0x40ac,	// (0x0005370d) aid_size_cell_apps_grid_prt_pane

0x4cb6,	// (0x00054317) bg_wml_button_pane_cp1_ParamLimits

0x4cb6,	// (0x00054317) bg_wml_button_pane_cp1

0xd983,	// (0x0005cfe4) form_midp_field_text_pane_t1_ParamLimits

0x525a,	// (0x000548bb) input_focus_pane_cp050_ParamLimits

0x54c1,	// (0x00054b22) list_midp_form_text_pane_ParamLimits

0x5467,	// (0x00054ac8) input_focus_pane_cp051_ParamLimits

0x547b,	// (0x00054adc) list_midp_choice_pane_ParamLimits

0xd921,	// (0x0005cf82) list_single_2graphic_pane_cp3_ParamLimits

0xd921,	// (0x0005cf82) list_single_2graphic_pane_cp3

0xd934,	// (0x0005cf95) list_single_midp_graphic_pane_ParamLimits

0xd934,	// (0x0005cf95) list_single_midp_graphic_pane

0xf33b,	// (0x0005e99c) list_single_graphic_2heading_pane_g1_ParamLimits

0xf33b,	// (0x0005e99c) list_single_graphic_2heading_pane_g1

0xf347,	// (0x0005e9a8) list_single_graphic_2heading_pane_g4_ParamLimits

0xf347,	// (0x0005e9a8) list_single_graphic_2heading_pane_g4

0xf353,	// (0x0005e9b4) list_single_graphic_2heading_pane_g5_ParamLimits

0xf353,	// (0x0005e9b4) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0005ee16) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0005ee16) list_single_graphic_2heading_pane_g

0xf35f,	// (0x0005e9c0) list_single_graphic_2heading_pane_t1_ParamLimits

0xf35f,	// (0x0005e9c0) list_single_graphic_2heading_pane_t1

0xf373,	// (0x0005e9d4) list_single_graphic_2heading_pane_t2_ParamLimits

0xf373,	// (0x0005e9d4) list_single_graphic_2heading_pane_t2

0xf38f,	// (0x0005e9f0) list_single_graphic_2heading_pane_t3_ParamLimits

0xf38f,	// (0x0005e9f0) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0005ee1d) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0005ee1d) list_single_graphic_2heading_pane_t

0x5124,	// (0x00054785) bg_popup_sub_pane_cp2

0x514e,	// (0x000547af) grid_toobar_pane

0x1455,	// (0x00050ab6) cell_toolbar_pane_ParamLimits

0x1455,	// (0x00050ab6) cell_toolbar_pane

0x518a,	// (0x000547eb) cell_toolbar_pane_g1_ParamLimits

0x518a,	// (0x000547eb) cell_toolbar_pane_g1

0x519e,	// (0x000547ff) cell_toolbar_pane_g2_ParamLimits

0x519e,	// (0x000547ff) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0005ee2b) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0005ee2b) cell_toolbar_pane_g

0x51c0,	// (0x00054821) grid_highlight_pane_cp2_ParamLimits

0x51c0,	// (0x00054821) grid_highlight_pane_cp2

0x51da,	// (0x0005483b) toolbar_button_pane

0x51e6,	// (0x00054847) toolbar_button_pane_g1

0x51ee,	// (0x0005484f) toolbar_button_pane_g2

0x51f6,	// (0x00054857) toolbar_button_pane_g3

0x51fe,	// (0x0005485f) toolbar_button_pane_g4

0x5206,	// (0x00054867) toolbar_button_pane_g5

0x520e,	// (0x0005486f) toolbar_button_pane_g6

0x5216,	// (0x00054877) toolbar_button_pane_g7

0x521e,	// (0x0005487f) toolbar_button_pane_g8

0x5226,	// (0x00054887) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0005ee30) toolbar_button_pane_g

0x14af,	// (0x00050b10) list_single_2graphic_pane_g1_cp3_ParamLimits

0x14af,	// (0x00050b10) list_single_2graphic_pane_g1_cp3

0xc55b,	// (0x0005bbbc) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc55b,	// (0x0005bbbc) list_single_2graphic_pane_g2_cp3

0x14cc,	// (0x00050b2d) list_single_2graphic_pane_g3_cp3

0x14d4,	// (0x00050b35) list_single_2graphic_pane_g4_cp3_ParamLimits

0x14d4,	// (0x00050b35) list_single_2graphic_pane_g4_cp3

0x14e0,	// (0x00050b41) list_single_2graphic_pane_t1_cp3_ParamLimits

0x14e0,	// (0x00050b41) list_single_2graphic_pane_t1_cp3

0x1524,	// (0x00050b85) list_single_midp_graphic_pane_g2_ParamLimits

0x1524,	// (0x00050b85) list_single_midp_graphic_pane_g2

0xf333,	// (0x0005e994) aid_zoom_text_primary

0x0e7e,	// (0x000504df) aid_zoom_text_secondary

0xd3d2,	// (0x0005ca33) status_small_pane_g7_ParamLimits

0xd3d2,	// (0x0005ca33) status_small_pane_g7

0xd3f5,	// (0x0005ca56) status_small_pane_t1_ParamLimits

0xcdc6,	// (0x0005c427) title_pane_g2

0x0003,

0xf54e,	// (0x0005ebaf) title_pane_g

0xd03e,	// (0x0005c69f) aid_size_cell_colour_1_pane_ParamLimits

0xd03e,	// (0x0005c69f) aid_size_cell_colour_1_pane

0xd052,	// (0x0005c6b3) aid_size_cell_colour_2_pane_ParamLimits

0xd052,	// (0x0005c6b3) aid_size_cell_colour_2_pane

0xd066,	// (0x0005c6c7) aid_size_cell_colour_3_pane_ParamLimits

0xd066,	// (0x0005c6c7) aid_size_cell_colour_3_pane

0xd07a,	// (0x0005c6db) aid_size_cell_colour_4_pane_ParamLimits

0xd07a,	// (0x0005c6db) aid_size_cell_colour_4_pane

0x085e,	// (0x0004febf) title_pane_stacon_g1_ParamLimits

0x085e,	// (0x0004febf) title_pane_stacon_g1

0x5893,	// (0x00054ef4) popup_note_wait_window_g3_ParamLimits

0x5893,	// (0x00054ef4) popup_note_wait_window_g3

0x5909,	// (0x00054f6a) popup_note_wait_window_t5_ParamLimits

0x5909,	// (0x00054f6a) popup_note_wait_window_t5

0x2bc4,	// (0x00052225) main_feb_china_hwr_fs_writing_pane

0xbf0b,	// (0x0005b56c) popup_feb_china_hwr_fs_window_ParamLimits

0xbf0b,	// (0x0005b56c) popup_feb_china_hwr_fs_window

0xc56c,	// (0x0005bbcd) aid_size_cell_hwr_fs_ParamLimits

0xc56c,	// (0x0005bbcd) aid_size_cell_hwr_fs

0x525a,	// (0x000548bb) bg_popup_sub_pane_cp3_ParamLimits

0x525a,	// (0x000548bb) bg_popup_sub_pane_cp3

0xc581,	// (0x0005bbe2) grid_hwr_fs_pane_ParamLimits

0xc581,	// (0x0005bbe2) grid_hwr_fs_pane

0x15df,	// (0x00050c40) linegrid_hwr_fs_pane_ParamLimits

0x15df,	// (0x00050c40) linegrid_hwr_fs_pane

0xc599,	// (0x0005bbfa) cell_hwr_fs_pane_ParamLimits

0xc599,	// (0x0005bbfa) cell_hwr_fs_pane

0x5266,	// (0x000548c7) linegrid_hwr_fs_pane_g1_ParamLimits

0x5266,	// (0x000548c7) linegrid_hwr_fs_pane_g1

0xd8f5,	// (0x0005cf56) linegrid_hwr_fs_pane_g2_ParamLimits

0xd8f5,	// (0x0005cf56) linegrid_hwr_fs_pane_g2

0x5284,	// (0x000548e5) linegrid_hwr_fs_pane_g3_ParamLimits

0x5284,	// (0x000548e5) linegrid_hwr_fs_pane_g3

0x1611,	// (0x00050c72) linegrid_hwr_fs_pane_g4_ParamLimits

0x1611,	// (0x00050c72) linegrid_hwr_fs_pane_g4

0x162b,	// (0x00050c8c) linegrid_hwr_fs_pane_g5_ParamLimits

0x162b,	// (0x00050c8c) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0005ee56) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0005ee56) linegrid_hwr_fs_pane_g

0x5290,	// (0x000548f1) cell_hwr_fs_pane_g1_ParamLimits

0x5290,	// (0x000548f1) cell_hwr_fs_pane_g1

0x505b,	// (0x000546bc) cell_hwr_fs_pane_g2_ParamLimits

0x505b,	// (0x000546bc) cell_hwr_fs_pane_g2

0xd907,	// (0x0005cf68) cell_hwr_fs_pane_g3_ParamLimits

0xd907,	// (0x0005cf68) cell_hwr_fs_pane_g3

0xd914,	// (0x0005cf75) cell_hwr_fs_pane_g4_ParamLimits

0xd914,	// (0x0005cf75) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0005ee61) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0005ee61) cell_hwr_fs_pane_g

0xc5bf,	// (0x0005bc20) cell_hwr_fs_pane_t1

0x2bc4,	// (0x00052225) grid_highlight_pane_cp6

0x2bc4,	// (0x00052225) main_idle_act2_pane

0x3e51,	// (0x000534b2) aid_inside_area_popup_secondary

0xd9de,	// (0x0005d03f) aid_inside_area_window_primary_ParamLimits

0xd9de,	// (0x0005d03f) aid_inside_area_window_primary

0x6a73,	// (0x000560d4) ai2_news_ticker_pane

0x6a7b,	// (0x000560dc) aid_size_cell_ai1_link_ParamLimits

0x6a7b,	// (0x000560dc) aid_size_cell_ai1_link

0xdd95,	// (0x0005d3f6) popup_ai2_data_window_ParamLimits

0xdd95,	// (0x0005d3f6) popup_ai2_data_window

0x6aab,	// (0x0005610c) popup_ai2_link_window_ParamLimits

0x6aab,	// (0x0005610c) popup_ai2_link_window

0x525a,	// (0x000548bb) bg_popup_sub_pane_cp4_ParamLimits

0x525a,	// (0x000548bb) bg_popup_sub_pane_cp4

0x6abf,	// (0x00056120) grid_ai2_link_pane_ParamLimits

0x6abf,	// (0x00056120) grid_ai2_link_pane

0x6ad6,	// (0x00056137) popup_ai2_link_window_g1_ParamLimits

0x6ad6,	// (0x00056137) popup_ai2_link_window_g1

0x6ae2,	// (0x00056143) popup_ai2_link_window_g2_ParamLimits

0x6ae2,	// (0x00056143) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0005f034) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0005f034) popup_ai2_link_window_g

0x6af1,	// (0x00056152) ai2_mp_button_pane

0x6af9,	// (0x0005615a) ai2_mp_volume_pane

0x5467,	// (0x00054ac8) bg_popup_sub_pane_cp5_ParamLimits

0x5467,	// (0x00054ac8) bg_popup_sub_pane_cp5

0x6b01,	// (0x00056162) heading_ai2_gene_pane_ParamLimits

0x6b01,	// (0x00056162) heading_ai2_gene_pane

0x6b0d,	// (0x0005616e) list_ai2_gene_pane_ParamLimits

0x6b0d,	// (0x0005616e) list_ai2_gene_pane

0x6b55,	// (0x000561b6) cell_ai2_link_pane_ParamLimits

0x6b55,	// (0x000561b6) cell_ai2_link_pane

0x6b6b,	// (0x000561cc) cell_ai2_link_pane_g1

0x2bc4,	// (0x00052225) grid_highlight_pane_cp7

0x1a3a,	// (0x0005109b) ai2_mp_volume_pane_g1

0x6c3b,	// (0x0005629c) ai2_mp_volume_pane_g2

0xddbf,	// (0x0005d420) list_ai2_gene_pane_t1

0x6c43,	// (0x000562a4) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0005f04d) ai2_mp_volume_pane_g

0x1a42,	// (0x000510a3) volume_small_pane_cp3

0x6c4b,	// (0x000562ac) aid_size_cell_ai2_button

0x6c53,	// (0x000562b4) grid_ai2_button_pane

0x6c5c,	// (0x000562bd) cell_ai2_button_pane_ParamLimits

0x6c5c,	// (0x000562bd) cell_ai2_button_pane

0x2bba,	// (0x0005221b) cell_ai2_button_pane_g1

0x2bc4,	// (0x00052225) grid_highlight_pane_cp8

0x6bfb,	// (0x0005625c) ai2_gene_pane_t1_ParamLimits

0x6bfb,	// (0x0005625c) ai2_gene_pane_t1

0xbe95,	// (0x0005b4f6) aid_height_parent_landscape

0xdb25,	// (0x0005d186) aid_height_set_list

0x65bc,	// (0x00055c1d) aid_size_parent

0xdd3d,	// (0x0005d39e) aid_size_cell_graphic_pane_ParamLimits

0x6b1d,	// (0x0005617e) popup_ai2_data_window_g1_ParamLimits

0x6b1d,	// (0x0005617e) popup_ai2_data_window_g1

0x6b29,	// (0x0005618a) ai2_news_ticker_pane_g1

0x6b31,	// (0x00056192) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0005f039) ai2_news_ticker_pane_g

0x6b39,	// (0x0005619a) ai2_news_ticker_pane_t1

0x6b47,	// (0x000561a8) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0005f03e) ai2_news_ticker_pane_t

0x6b74,	// (0x000561d5) heading_ai2_gene_pane_g1

0x6b7c,	// (0x000561dd) heading_ai2_gene_pane_t1_ParamLimits

0x6b7c,	// (0x000561dd) heading_ai2_gene_pane_t1

0x6b91,	// (0x000561f2) list_highlight_pane_cp6

0xdda9,	// (0x0005d40a) ai2_gene_pane_ParamLimits

0xdda9,	// (0x0005d40a) ai2_gene_pane

0xddcd,	// (0x0005d42e) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0005f043) list_ai2_gene_pane_t

0x6bcc,	// (0x0005622d) list_highlight_pane_cp8_ParamLimits

0x6bcc,	// (0x0005622d) list_highlight_pane_cp8

0x6bdd,	// (0x0005623e) ai2_gene_pane_g1_ParamLimits

0x6bdd,	// (0x0005623e) ai2_gene_pane_g1

0x6bef,	// (0x00056250) ai2_gene_pane_g2_ParamLimits

0x6bef,	// (0x00056250) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0005f048) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0005f048) ai2_gene_pane_g

0x3c93,	// (0x000532f4) scroll_pane_cp12

0xbe52,	// (0x0005b4b3) control_pane_t3_ParamLimits

0xbe52,	// (0x0005b4b3) control_pane_t3

0xd3e6,	// (0x0005ca47) status_small_pane_g8_ParamLimits

0xd3e6,	// (0x0005ca47) status_small_pane_g8

0xbfa0,	// (0x0005b601) popup_find_window_ParamLimits

0xc22d,	// (0x0005b88e) popup_note_image_window_ParamLimits

0x1485,	// (0x00050ae6) list_double2_graphic_pane_vc_g1_ParamLimits

0x1485,	// (0x00050ae6) list_double2_graphic_pane_vc_g1

0x48cb,	// (0x00053f2c) list_double2_graphic_pane_vc_g2_ParamLimits

0x48cb,	// (0x00053f2c) list_double2_graphic_pane_vc_g2

0x2fb7,	// (0x00052618) list_double2_graphic_pane_vc_g3_ParamLimits

0x2fb7,	// (0x00052618) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0005ee24) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005ee24) list_double2_graphic_pane_vc_g

0x1491,	// (0x00050af2) list_double2_graphic_pane_vc_t1_ParamLimits

0x1491,	// (0x00050af2) list_double2_graphic_pane_vc_t1

0x48cb,	// (0x00053f2c) list_single_heading_pane_vc_g1_ParamLimits

0x48cb,	// (0x00053f2c) list_single_heading_pane_vc_g1

0x2fb7,	// (0x00052618) list_single_heading_pane_vc_g2_ParamLimits

0x2fb7,	// (0x00052618) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005ec33) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005ec33) list_single_heading_pane_vc_g

0x14fc,	// (0x00050b5d) list_single_heading_pane_vc_t1_ParamLimits

0x14fc,	// (0x00050b5d) list_single_heading_pane_vc_t1

0x1512,	// (0x00050b73) list_single_heading_pane_vc_t2_ParamLimits

0x1512,	// (0x00050b73) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0005ee45) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0005ee45) list_single_heading_pane_vc_t

0x2fc3,	// (0x00052624) list_setting_number_pane_vc_g1_ParamLimits

0x2fc3,	// (0x00052624) list_setting_number_pane_vc_g1

0x2fcf,	// (0x00052630) list_setting_number_pane_vc_g2_ParamLimits

0x2fcf,	// (0x00052630) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0005ee4a) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0005ee4a) list_setting_number_pane_vc_g

0x1546,	// (0x00050ba7) list_setting_number_pane_vc_t1_ParamLimits

0x1546,	// (0x00050ba7) list_setting_number_pane_vc_t1

0x155a,	// (0x00050bbb) list_setting_number_pane_vc_t2_ParamLimits

0x155a,	// (0x00050bbb) list_setting_number_pane_vc_t2

0x1576,	// (0x00050bd7) list_setting_number_pane_vc_t3_ParamLimits

0x1576,	// (0x00050bd7) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0005ee4f) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0005ee4f) list_setting_number_pane_vc_t

0x15a2,	// (0x00050c03) set_value_pane_vc_ParamLimits

0x15a2,	// (0x00050c03) set_value_pane_vc

0x6774,	// (0x00055dd5) list_double2_graphic_pane_vc_ParamLimits

0x6774,	// (0x00055dd5) list_double2_graphic_pane_vc

0x1922,	// (0x00050f83) list_double2_large_graphic_pane_vc_ParamLimits

0x1922,	// (0x00050f83) list_double2_large_graphic_pane_vc

0x6774,	// (0x00055dd5) list_double2_pane_vc_ParamLimits

0x6774,	// (0x00055dd5) list_double2_pane_vc

0x6774,	// (0x00055dd5) list_double_graphic_heading_pane_vc_ParamLimits

0x6774,	// (0x00055dd5) list_double_graphic_heading_pane_vc

0x6774,	// (0x00055dd5) list_double_graphic_pane_vc_ParamLimits

0x6774,	// (0x00055dd5) list_double_graphic_pane_vc

0x6774,	// (0x00055dd5) list_double_heading_pane_vc_ParamLimits

0x6774,	// (0x00055dd5) list_double_heading_pane_vc

0x1933,	// (0x00050f94) list_double_large_graphic_pane_vc_ParamLimits

0x1933,	// (0x00050f94) list_double_large_graphic_pane_vc

0x6774,	// (0x00055dd5) list_double_number_pane_vc_ParamLimits

0x6774,	// (0x00055dd5) list_double_number_pane_vc

0x6774,	// (0x00055dd5) list_double_pane_vc_ParamLimits

0x6774,	// (0x00055dd5) list_double_pane_vc

0x6774,	// (0x00055dd5) list_double_time_pane_vc_ParamLimits

0x6774,	// (0x00055dd5) list_double_time_pane_vc

0x6774,	// (0x00055dd5) list_setting_number_pane_vc_ParamLimits

0x6774,	// (0x00055dd5) list_setting_number_pane_vc

0x6774,	// (0x00055dd5) list_setting_pane_vc_ParamLimits

0x6774,	// (0x00055dd5) list_setting_pane_vc

0x6774,	// (0x00055dd5) list_single_graphic_heading_pane_vc_ParamLimits

0x6774,	// (0x00055dd5) list_single_graphic_heading_pane_vc

0x6774,	// (0x00055dd5) list_single_heading_pane_vc_ParamLimits

0x6774,	// (0x00055dd5) list_single_heading_pane_vc

0x6774,	// (0x00055dd5) list_single_number_heading_pane_vc_ParamLimits

0x6774,	// (0x00055dd5) list_single_number_heading_pane_vc

0x1485,	// (0x00050ae6) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x1485,	// (0x00050ae6) list_double_graphic_heading_pane_vc_g1

0x48cb,	// (0x00053f2c) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x48cb,	// (0x00053f2c) list_double_graphic_heading_pane_vc_g2

0x2fb7,	// (0x00052618) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2fb7,	// (0x00052618) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0005ee24) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005ee24) list_double_graphic_heading_pane_vc_g

0x1a4b,	// (0x000510ac) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x1a4b,	// (0x000510ac) list_double_graphic_heading_pane_vc_t1

0x1a67,	// (0x000510c8) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x1a67,	// (0x000510c8) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0005f054) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0005f054) list_double_graphic_heading_pane_vc_t

0x2fc3,	// (0x00052624) list_setting_pane_vc_g1_ParamLimits

0x2fc3,	// (0x00052624) list_setting_pane_vc_g1

0x2fcf,	// (0x00052630) list_setting_pane_vc_g2_ParamLimits

0x2fcf,	// (0x00052630) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0005ee4a) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0005ee4a) list_setting_pane_vc_g

0x1a85,	// (0x000510e6) list_setting_pane_vc_t1_ParamLimits

0x1a85,	// (0x000510e6) list_setting_pane_vc_t1

0x1aa1,	// (0x00051102) list_setting_pane_vc_t2_ParamLimits

0x1aa1,	// (0x00051102) list_setting_pane_vc_t2

0x0001,

0xfa21,	// (0x0005f082) list_setting_pane_vc_t_ParamLimits

0xfa21,	// (0x0005f082) list_setting_pane_vc_t

0x15a2,	// (0x00050c03) set_value_pane_cp_vc_ParamLimits

0x15a2,	// (0x00050c03) set_value_pane_cp_vc

0x48cb,	// (0x00053f2c) list_single_number_heading_pane_vc_g1_ParamLimits

0x48cb,	// (0x00053f2c) list_single_number_heading_pane_vc_g1

0x2fb7,	// (0x00052618) list_single_number_heading_pane_vc_g2_ParamLimits

0x2fb7,	// (0x00052618) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005ec33) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005ec33) list_single_number_heading_pane_vc_g

0x1abd,	// (0x0005111e) list_single_number_heading_pane_vc_t1_ParamLimits

0x1abd,	// (0x0005111e) list_single_number_heading_pane_vc_t1

0x1ad3,	// (0x00051134) list_single_number_heading_pane_vc_t2_ParamLimits

0x1ad3,	// (0x00051134) list_single_number_heading_pane_vc_t2

0x1ae5,	// (0x00051146) list_single_number_heading_pane_vc_t3_ParamLimits

0x1ae5,	// (0x00051146) list_single_number_heading_pane_vc_t3

0x0002,

0xfa26,	// (0x0005f087) list_single_number_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0005f087) list_single_number_heading_pane_vc_t

0x1485,	// (0x00050ae6) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1485,	// (0x00050ae6) list_single_graphic_heading_pane_vc_g1

0x48cb,	// (0x00053f2c) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x48cb,	// (0x00053f2c) list_single_graphic_heading_pane_vc_g4

0x2fb7,	// (0x00052618) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2fb7,	// (0x00052618) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0005ee24) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005ee24) list_single_graphic_heading_pane_vc_g

0x1abd,	// (0x0005111e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x1abd,	// (0x0005111e) list_single_graphic_heading_pane_vc_t1

0x1af7,	// (0x00051158) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x1af7,	// (0x00051158) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2d,	// (0x0005f08e) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2d,	// (0x0005f08e) list_single_graphic_heading_pane_vc_t

0x48cb,	// (0x00053f2c) list_double2_pane_vc_g1_ParamLimits

0x48cb,	// (0x00053f2c) list_double2_pane_vc_g1

0x2fb7,	// (0x00052618) list_double2_pane_vc_g2_ParamLimits

0x2fb7,	// (0x00052618) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005ec33) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005ec33) list_double2_pane_vc_g

0x1b09,	// (0x0005116a) list_double2_pane_vc_t1_ParamLimits

0x1b09,	// (0x0005116a) list_double2_pane_vc_t1

0x1b1f,	// (0x00051180) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x1b1f,	// (0x00051180) list_double2_large_graphic_pane_vc_g1

0x1b2b,	// (0x0005118c) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x1b2b,	// (0x0005118c) list_double2_large_graphic_pane_vc_g2

0x3071,	// (0x000526d2) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3071,	// (0x000526d2) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0005ec4b) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0005ec4b) list_double2_large_graphic_pane_vc_g

0x307d,	// (0x000526de) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x307d,	// (0x000526de) list_double2_large_graphic_pane_vc_t1

0x3093,	// (0x000526f4) list_double_time_pane_vc_g1_ParamLimits

0x3093,	// (0x000526f4) list_double_time_pane_vc_g1

0x309f,	// (0x00052700) list_double_time_pane_vc_g2_ParamLimits

0x309f,	// (0x00052700) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x0005f093) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x0005f093) list_double_time_pane_vc_g

0x30ab,	// (0x0005270c) list_double_time_pane_vc_t1_ParamLimits

0x30ab,	// (0x0005270c) list_double_time_pane_vc_t1

0x30cf,	// (0x00052730) list_double_time_pane_vc_t2_ParamLimits

0x30cf,	// (0x00052730) list_double_time_pane_vc_t2

0x311e,	// (0x0005277f) list_double_time_pane_vc_t3_ParamLimits

0x311e,	// (0x0005277f) list_double_time_pane_vc_t3

0x3130,	// (0x00052791) list_double_time_pane_vc_t4_ParamLimits

0x3130,	// (0x00052791) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x0005f098) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x0005f098) list_double_time_pane_vc_t

0x48cb,	// (0x00053f2c) list_double_pane_vc_g1_ParamLimits

0x48cb,	// (0x00053f2c) list_double_pane_vc_g1

0x2fb7,	// (0x00052618) list_double_pane_vc_g2_ParamLimits

0x2fb7,	// (0x00052618) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005ec33) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005ec33) list_double_pane_vc_g

0x3144,	// (0x000527a5) list_double_pane_vc_t1_ParamLimits

0x3144,	// (0x000527a5) list_double_pane_vc_t1

0x3158,	// (0x000527b9) list_double_pane_vc_t2_ParamLimits

0x3158,	// (0x000527b9) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x0005f0a1) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x0005f0a1) list_double_pane_vc_t

0x48cb,	// (0x00053f2c) list_double_number_pane_vc_g1_ParamLimits

0x48cb,	// (0x00053f2c) list_double_number_pane_vc_g1

0x2fb7,	// (0x00052618) list_double_number_pane_vc_g2_ParamLimits

0x2fb7,	// (0x00052618) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005ec33) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005ec33) list_double_number_pane_vc_g

0x3170,	// (0x000527d1) list_double_number_pane_vc_t1_ParamLimits

0x3170,	// (0x000527d1) list_double_number_pane_vc_t1

0x3182,	// (0x000527e3) list_double_number_pane_vc_t2_ParamLimits

0x3182,	// (0x000527e3) list_double_number_pane_vc_t2

0x3196,	// (0x000527f7) list_double_number_pane_vc_t3_ParamLimits

0x3196,	// (0x000527f7) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x0005f0a6) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x0005f0a6) list_double_number_pane_vc_t

0x31ae,	// (0x0005280f) list_double_large_graphic_pane_vc_g1_ParamLimits

0x31ae,	// (0x0005280f) list_double_large_graphic_pane_vc_g1

0x31d0,	// (0x00052831) list_double_large_graphic_pane_vc_g2_ParamLimits

0x31d0,	// (0x00052831) list_double_large_graphic_pane_vc_g2

0x31e4,	// (0x00052845) list_double_large_graphic_pane_vc_g3_ParamLimits

0x31e4,	// (0x00052845) list_double_large_graphic_pane_vc_g3

0x31f3,	// (0x00052854) list_double_large_graphic_pane_vc_g4_ParamLimits

0x31f3,	// (0x00052854) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x0005f0ad) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x0005f0ad) list_double_large_graphic_pane_vc_g

0x31ff,	// (0x00052860) list_double_large_graphic_pane_vc_t1_ParamLimits

0x31ff,	// (0x00052860) list_double_large_graphic_pane_vc_t1

0x321b,	// (0x0005287c) list_double_large_graphic_pane_vc_t2_ParamLimits

0x321b,	// (0x0005287c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x0005f0b6) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x0005f0b6) list_double_large_graphic_pane_vc_t

0x48cb,	// (0x00053f2c) list_double_heading_pane_vc_g1_ParamLimits

0x48cb,	// (0x00053f2c) list_double_heading_pane_vc_g1

0x2fb7,	// (0x00052618) list_double_heading_pane_vc_g2_ParamLimits

0x2fb7,	// (0x00052618) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005ec33) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005ec33) list_double_heading_pane_vc_g

0x323d,	// (0x0005289e) list_double_heading_pane_vc_t1_ParamLimits

0x323d,	// (0x0005289e) list_double_heading_pane_vc_t1

0x3251,	// (0x000528b2) list_double_heading_pane_vc_t2_ParamLimits

0x3251,	// (0x000528b2) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x0005f0bb) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x0005f0bb) list_double_heading_pane_vc_t

0x3269,	// (0x000528ca) list_double_graphic_pane_vc_g1_ParamLimits

0x3269,	// (0x000528ca) list_double_graphic_pane_vc_g1

0x3275,	// (0x000528d6) list_double_graphic_pane_vc_g2_ParamLimits

0x3275,	// (0x000528d6) list_double_graphic_pane_vc_g2

0x48cb,	// (0x00053f2c) list_double_graphic_pane_vc_g3_ParamLimits

0x48cb,	// (0x00053f2c) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x0005f0c0) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x0005f0c0) list_double_graphic_pane_vc_g

0x3292,	// (0x000528f3) list_double_graphic_pane_vc_t1_ParamLimits

0x3292,	// (0x000528f3) list_double_graphic_pane_vc_t1

0x32bc,	// (0x0005291d) list_double_graphic_pane_vc_t2_ParamLimits

0x32bc,	// (0x0005291d) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x0005f0c9) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x0005f0c9) list_double_graphic_pane_vc_t

0xf32b,	// (0x0005e98c) aid_size_cell_fastswap

0xb485,	// (0x0005aae6) aid_size_cell_touch_ParamLimits

0xb485,	// (0x0005aae6) aid_size_cell_touch

0xf520,	// (0x0005eb81) popup_fast_swap_wide_window_ParamLimits

0xf520,	// (0x0005eb81) popup_fast_swap_wide_window

0xb635,	// (0x0005ac96) touch_pane_ParamLimits

0xb635,	// (0x0005ac96) touch_pane

0x3cf5,	// (0x00053356) button_value_adjust_pane_cp2

0x05b8,	// (0x0004fc19) button_value_adjust_pane_cp4

0x05dc,	// (0x0004fc3d) form_field_data_pane_cp2

0xbb38,	// (0x0005b199) form_field_data_wide_pane_cp2

0x4169,	// (0x000537ca) bg_scroll_pane_ParamLimits

0x09c0,	// (0x00050021) scroll_handle_pane_ParamLimits

0x09d4,	// (0x00050035) scroll_sc2_down_pane_ParamLimits

0x09d4,	// (0x00050035) scroll_sc2_down_pane

0x419a,	// (0x000537fb) scroll_sc2_up_pane_ParamLimits

0x419a,	// (0x000537fb) scroll_sc2_up_pane

0xdeed,	// (0x0005d54e) grid_wheel_folder_pane_g1_ParamLimits

0xdeed,	// (0x0005d54e) grid_wheel_folder_pane_g1

0x0c07,	// (0x00050268) clock_nsta_pane_cp2_ParamLimits

0x0c07,	// (0x00050268) clock_nsta_pane_cp2

0xd2d5,	// (0x0005c936) listscroll_midp_pane_ParamLimits

0xd2e1,	// (0x0005c942) midp_canvas_pane

0x4c8e,	// (0x000542ef) nsta_clock_indic_pane

0x4cc2,	// (0x00054323) listscroll_form_pane_vc

0x4cca,	// (0x0005432b) listscroll_set_pane_vc_ParamLimits

0x4cca,	// (0x0005432b) listscroll_set_pane_vc

0xd566,	// (0x0005cbc7) clock_nsta_pane

0xd590,	// (0x0005cbf1) indicator_nsta_pane

0x5124,	// (0x00054785) bg_popup_sub_pane_cp2_ParamLimits

0x5138,	// (0x00054799) find_pane_cp2_ParamLimits

0x5138,	// (0x00054799) find_pane_cp2

0x514e,	// (0x000547af) grid_toobar_pane_ParamLimits

0x522e,	// (0x0005488f) list_form_gen_pane_vc_ParamLimits

0x522e,	// (0x0005488f) list_form_gen_pane_vc

0x5244,	// (0x000548a5) scroll_pane_cp8_vc_ParamLimits

0x5244,	// (0x000548a5) scroll_pane_cp8_vc

0x52c0,	// (0x00054921) data_form_wide_pane_vc_ParamLimits

0x52c0,	// (0x00054921) data_form_wide_pane_vc

0x52cc,	// (0x0005492d) form_field_data_wide_pane_vc_g1

0x52d4,	// (0x00054935) form_field_data_wide_pane_vc_t1_ParamLimits

0x52d4,	// (0x00054935) form_field_data_wide_pane_vc_t1

0x3d09,	// (0x0005336a) input_focus_pane_cp6_vc_ParamLimits

0x3d09,	// (0x0005336a) input_focus_pane_cp6_vc

0x561a,	// (0x00054c7b) list_midp_pane_ParamLimits

0x6900,	// (0x00055f61) scroll_pane_cp16_ParamLimits

0x6900,	// (0x00055f61) scroll_pane_cp16

0x5668,	// (0x00054cc9) button_value_adjust_pane_ParamLimits

0x5668,	// (0x00054cc9) button_value_adjust_pane

0xdb36,	// (0x0005d197) button_value_adjust_pane_cp6_ParamLimits

0xdb36,	// (0x0005d197) button_value_adjust_pane_cp6

0xdc50,	// (0x0005d2b1) settings_code_pane_cp_ParamLimits

0xdc50,	// (0x0005d2b1) settings_code_pane_cp

0x2bba,	// (0x0005221b) cell_touch_pane_g1

0x2bba,	// (0x0005221b) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0005ed69) cell_touch_pane_g

0xdddb,	// (0x0005d43c) cell_touch_pane_cp_ParamLimits

0xdddb,	// (0x0005d43c) cell_touch_pane_cp

0xddf7,	// (0x0005d458) cell_touch_pane_ParamLimits

0xddf7,	// (0x0005d458) cell_touch_pane

0x2bba,	// (0x0005221b) scroll_sc2_down_pane_g1

0x2bba,	// (0x0005221b) scroll_sc2_up_pane_g1

0x2bc4,	// (0x00052225) bg_set_opt_pane_cp4_vc

0x6c90,	// (0x000562f1) list_set_graphic_pane_vc_g1_ParamLimits

0x6c90,	// (0x000562f1) list_set_graphic_pane_vc_g1

0x6c9c,	// (0x000562fd) list_set_graphic_pane_vc_g2_ParamLimits

0x6c9c,	// (0x000562fd) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0005f059) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0005f059) list_set_graphic_pane_vc_g

0x6ca8,	// (0x00056309) text_primary_small_cp13_vc_ParamLimits

0x6ca8,	// (0x00056309) text_primary_small_cp13_vc

0x6cc0,	// (0x00056321) list_set_graphic_pane_vc_ParamLimits

0x6cc0,	// (0x00056321) list_set_graphic_pane_vc

0x2bc4,	// (0x00052225) input_focus_pane_cp2_vc

0x2bba,	// (0x0005221b) setting_code_pane_vc_g1

0x2cef,	// (0x00052350) setting_code_pane_vc_t1

0x6cd2,	// (0x00056333) set_text_pane_vc_t1_ParamLimits

0x6cd2,	// (0x00056333) set_text_pane_vc_t1

0x2bc4,	// (0x00052225) input_focus_pane_cp1_vc

0x6cee,	// (0x0005634f) list_set_text_pane_vc

0x2bba,	// (0x0005221b) setting_text_pane_vc_g1

0x2bc4,	// (0x00052225) bg_set_opt_pane_cp2_vc

0x2ce6,	// (0x00052347) setting_slider_graphic_pane_vc_g1

0x6cf8,	// (0x00056359) setting_slider_graphic_pane_vc_t1

0x6d08,	// (0x00056369) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0005f05e) setting_slider_graphic_pane_vc_t

0x6d18,	// (0x00056379) slider_set_pane_cp_vc

0x6d20,	// (0x00056381) slider_set_pane_vc_g1

0x6d29,	// (0x0005638a) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0005f063) slider_set_pane_vc_g

0x3d55,	// (0x000533b6) set_opt_bg_pane_g1_copy1

0x3d5d,	// (0x000533be) set_opt_bg_pane_g2_copy1

0x6d55,	// (0x000563b6) set_opt_bg_pane_g3_copy1

0x3d6d,	// (0x000533ce) set_opt_bg_pane_g4_copy1

0x3d75,	// (0x000533d6) set_opt_bg_pane_g5_copy1

0x3d7d,	// (0x000533de) set_opt_bg_pane_g6_copy1

0x6d5f,	// (0x000563c0) set_opt_bg_pane_g7_copy1

0x6d67,	// (0x000563c8) set_opt_bg_pane_g8_copy1

0x6d71,	// (0x000563d2) set_opt_bg_pane_g9_copy1

0x2bc4,	// (0x00052225) bg_set_opt_pane_cp_vc

0x6d7b,	// (0x000563dc) setting_slider_pane_vc_t1

0x6d8a,	// (0x000563eb) setting_slider_pane_vc_t2

0x6d9a,	// (0x000563fb) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0005f072) setting_slider_pane_vc_t

0x6daa,	// (0x0005640b) slider_set_pane_vc

0x1688,	// (0x00050ce9) volume_set_pane_vc_g1

0x1691,	// (0x00050cf2) volume_set_pane_vc_g2

0x169a,	// (0x00050cfb) volume_set_pane_vc_g3

0x16a3,	// (0x00050d04) volume_set_pane_vc_g4

0x16ac,	// (0x00050d0d) volume_set_pane_vc_g5

0x16b5,	// (0x00050d16) volume_set_pane_vc_g6

0x16be,	// (0x00050d1f) volume_set_pane_vc_g7

0x16c7,	// (0x00050d28) volume_set_pane_vc_g8

0x16d0,	// (0x00050d31) volume_set_pane_vc_g9

0x16d9,	// (0x00050d3a) volume_set_pane_vc_g10

0x0009,

0xf8b6,	// (0x0005ef17) volume_set_pane_vc_g

0x6db2,	// (0x00056413) volume_set_pane_vc

0x6dba,	// (0x0005641b) button_value_adjust_pane_cp1_vc

0x6dc4,	// (0x00056425) list_highlight_pane_cp2_vc

0x6dcd,	// (0x0005642e) list_set_pane_vc_ParamLimits

0x6dcd,	// (0x0005642e) list_set_pane_vc

0x6e2b,	// (0x0005648c) main_pane_set_vc_t1_ParamLimits

0x6e2b,	// (0x0005648c) main_pane_set_vc_t1

0x6e40,	// (0x000564a1) main_pane_set_vc_t2_ParamLimits

0x6e40,	// (0x000564a1) main_pane_set_vc_t2

0x6e52,	// (0x000564b3) main_pane_set_vc_t3_ParamLimits

0x6e52,	// (0x000564b3) main_pane_set_vc_t3

0x6e66,	// (0x000564c7) main_pane_set_vc_t4_ParamLimits

0x6e66,	// (0x000564c7) main_pane_set_vc_t4

0x0003,

0xfa18,	// (0x0005f079) main_pane_set_vc_t_ParamLimits

0xfa18,	// (0x0005f079) main_pane_set_vc_t

0x6e7a,	// (0x000564db) setting_code_pane_vc_ParamLimits

0x6e7a,	// (0x000564db) setting_code_pane_vc

0x6e8b,	// (0x000564ec) setting_slider_graphic_pane_vc

0x6e8b,	// (0x000564ec) setting_slider_pane_vc

0x6e8b,	// (0x000564ec) setting_text_pane_vc

0x6e8b,	// (0x000564ec) setting_volume_pane_vc

0x6e95,	// (0x000564f6) scroll_pane_cp121_vc

0x3ce3,	// (0x00053344) set_content_pane_vc

0x6e9d,	// (0x000564fe) button_value_adjust_pane_g1

0x6ea6,	// (0x00056507) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x0005f0ce) button_value_adjust_pane_g

0x6eaf,	// (0x00056510) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6eaf,	// (0x00056510) form_field_slider_wide_pane_vc_t1

0x6ec3,	// (0x00056524) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6ec3,	// (0x00056524) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x0005f0d3) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0005f0d3) form_field_slider_wide_pane_vc_t

0x36e3,	// (0x00052d44) input_focus_pane_cp10_vc_ParamLimits

0x36e3,	// (0x00052d44) input_focus_pane_cp10_vc

0x6ef1,	// (0x00056552) slider_cont_pane_cp1_vc_ParamLimits

0x6ef1,	// (0x00056552) slider_cont_pane_cp1_vc

0x6f03,	// (0x00056564) slider_form_pane_g1_cp2

0x6d29,	// (0x0005638a) slider_form_pane_g2_cp2

0x6f30,	// (0x00056591) form_field_slider_pane_vc_t3

0x6f3e,	// (0x0005659f) form_field_slider_pane_vc_t4

0x6f4c,	// (0x000565ad) slider_form_pane_vc_ParamLimits

0x6f4c,	// (0x000565ad) slider_form_pane_vc

0x6f59,	// (0x000565ba) form_field_slider_pane_vc_t1_ParamLimits

0x6f59,	// (0x000565ba) form_field_slider_pane_vc_t1

0x6ec3,	// (0x00056524) form_field_slider_pane_vc_t2_ParamLimits

0x6ec3,	// (0x00056524) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x0005f0e5) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x0005f0e5) form_field_slider_pane_vc_t

0x36e3,	// (0x00052d44) input_focus_pane_cp9_vc_ParamLimits

0x36e3,	// (0x00052d44) input_focus_pane_cp9_vc

0x6f75,	// (0x000565d6) slider_cont_pane_vc_ParamLimits

0x6f75,	// (0x000565d6) slider_cont_pane_vc

0x6f89,	// (0x000565ea) list_form_graphic_pane_cp_vc_ParamLimits

0x6f89,	// (0x000565ea) list_form_graphic_pane_cp_vc

0x52cc,	// (0x0005492d) form_field_popup_wide_pane_vc_g1

0x6f9e,	// (0x000565ff) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6f9e,	// (0x000565ff) form_field_popup_wide_pane_vc_t1

0x3d09,	// (0x0005336a) input_focus_pane_cp8_vc_ParamLimits

0x3d09,	// (0x0005336a) input_focus_pane_cp8_vc

0x6fe3,	// (0x00056644) list_form_wide_pane_vc_ParamLimits

0x6fe3,	// (0x00056644) list_form_wide_pane_vc

0x6fef,	// (0x00056650) list_form_graphic_pane_vc_g1

0x6ff7,	// (0x00056658) list_form_graphic_pane_vc_t1_ParamLimits

0x6ff7,	// (0x00056658) list_form_graphic_pane_vc_t1

0x2ca4,	// (0x00052305) list_highlight_pane_cp5_vc_ParamLimits

0x2ca4,	// (0x00052305) list_highlight_pane_cp5_vc

0x7013,	// (0x00056674) list_form_graphic_pane_vc_ParamLimits

0x7013,	// (0x00056674) list_form_graphic_pane_vc

0x52cc,	// (0x0005492d) form_field_popup_pane_vc_g1

0x7029,	// (0x0005668a) form_field_popup_pane_vc_t1_ParamLimits

0x7029,	// (0x0005668a) form_field_popup_pane_vc_t1

0x3d09,	// (0x0005336a) input_focus_pane_cp7_vc_ParamLimits

0x3d09,	// (0x0005336a) input_focus_pane_cp7_vc

0x7040,	// (0x000566a1) list_form_pane_vc_ParamLimits

0x7040,	// (0x000566a1) list_form_pane_vc

0x704c,	// (0x000566ad) data_form_pane_vc_t1_ParamLimits

0x704c,	// (0x000566ad) data_form_pane_vc_t1

0x3d55,	// (0x000533b6) input_focus_pane_vc_g1

0x3d5d,	// (0x000533be) input_focus_pane_vc_g2

0x3d65,	// (0x000533c6) input_focus_pane_vc_g3

0x3d6d,	// (0x000533ce) input_focus_pane_vc_g4

0x3d75,	// (0x000533d6) input_focus_pane_vc_g5

0x3d7d,	// (0x000533de) input_focus_pane_vc_g6

0x3d85,	// (0x000533e6) input_focus_pane_vc_g7

0x3d8d,	// (0x000533ee) input_focus_pane_vc_g8

0x3d95,	// (0x000533f6) input_focus_pane_vc_g9

0x2bba,	// (0x0005221b) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0005ecf2) input_focus_pane_vc_g

0x52c0,	// (0x00054921) data_form_pane_vc_ParamLimits

0x52c0,	// (0x00054921) data_form_pane_vc

0x52cc,	// (0x0005492d) form_field_data_pane_vc_g1

0x7067,	// (0x000566c8) form_field_data_pane_vc_t1_ParamLimits

0x7067,	// (0x000566c8) form_field_data_pane_vc_t1

0x3d09,	// (0x0005336a) input_focus_pane_vc_ParamLimits

0x3d09,	// (0x0005336a) input_focus_pane_vc

0x7081,	// (0x000566e2) button_value_adjust_pane_cp3_vc

0x7089,	// (0x000566ea) button_value_adjust_pane_cp5_vc

0x7091,	// (0x000566f2) form_field_data_pane_vc_ParamLimits

0x7091,	// (0x000566f2) form_field_data_pane_vc

0x70a8,	// (0x00056709) form_field_data_pane_vc_cp2

0x70b0,	// (0x00056711) form_field_data_wide_pane_vc_ParamLimits

0x70b0,	// (0x00056711) form_field_data_wide_pane_vc

0x70c6,	// (0x00056727) form_field_data_wide_pane_vc_cp2

0x70ce,	// (0x0005672f) form_field_popup_pane_vc_ParamLimits

0x70ce,	// (0x0005672f) form_field_popup_pane_vc

0x70e5,	// (0x00056746) form_field_popup_wide_pane_vc_ParamLimits

0x70e5,	// (0x00056746) form_field_popup_wide_pane_vc

0x70fb,	// (0x0005675c) form_field_slider_pane_vc_ParamLimits

0x70fb,	// (0x0005675c) form_field_slider_pane_vc

0x710e,	// (0x0005676f) form_field_slider_wide_pane_vc_ParamLimits

0x710e,	// (0x0005676f) form_field_slider_wide_pane_vc

0xde15,	// (0x0005d476) grid_touch_1_pane_ParamLimits

0xde15,	// (0x0005d476) grid_touch_1_pane

0xde29,	// (0x0005d48a) grid_touch_2_pane_ParamLimits

0xde29,	// (0x0005d48a) grid_touch_2_pane

0x71dc,	// (0x0005683d) touch_pane_g1_ParamLimits

0x71dc,	// (0x0005683d) touch_pane_g1

0x7145,	// (0x000567a6) cell_app_pane_cp_wide_ParamLimits

0x7145,	// (0x000567a6) cell_app_pane_cp_wide

0x7156,	// (0x000567b7) grid_popup_fast_wide_pane_ParamLimits

0x7156,	// (0x000567b7) grid_popup_fast_wide_pane

0x716a,	// (0x000567cb) scroll_pane_cp19_ParamLimits

0x716a,	// (0x000567cb) scroll_pane_cp19

0x2bc4,	// (0x00052225) bg_popup_window_pane_cp20

0x717e,	// (0x000567df) listscroll_popup_fast_wide_pane

0x3ebd,	// (0x0005351e) grid_indicator_nsta_pane

0x7186,	// (0x000567e7) clock_nsta_pane_g1

0x718f,	// (0x000567f0) clock_nsta_pane_t1

0xde53,	// (0x0005d4b4) cell_indicator_nsta_pane_ParamLimits

0xde53,	// (0x0005d4b4) cell_indicator_nsta_pane

0x71dc,	// (0x0005683d) cell_indicator_nsta_pane_g1

0xde6a,	// (0x0005d4cb) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x0005f0f6) cell_indicator_nsta_pane_g

0x71f7,	// (0x00056858) clock_nsta_pane_cp

0x7200,	// (0x00056861) indicator_nsta_pane_cp

0x7208,	// (0x00056869) nsta_clock_indic_pane_g1

0x2d6d,	// (0x000523ce) grid_indicator_pane

0x428f,	// (0x000538f0) scroll_pane_cp29

0x0b56,	// (0x000501b7) indicator_nsta_pane_cp2_ParamLimits

0x0b56,	// (0x000501b7) indicator_nsta_pane_cp2

0x2ca4,	// (0x00052305) main_apps_wheel_pane

0x54db,	// (0x00054b3c) form_midp_field_text_pane_ParamLimits

0x5626,	// (0x00054c87) scroll_bar_cp050_ParamLimits

0x7258,	// (0x000568b9) cell_indicator_pane_ParamLimits

0x7258,	// (0x000568b9) cell_indicator_pane

0x726f,	// (0x000568d0) cell_indicator_pane_g1

0xde77,	// (0x0005d4d8) grid_wheel_folder_pane_ParamLimits

0xde77,	// (0x0005d4d8) grid_wheel_folder_pane

0xde85,	// (0x0005d4e6) list_wheel_apps_pane_ParamLimits

0xde85,	// (0x0005d4e6) list_wheel_apps_pane

0xde93,	// (0x0005d4f4) main_apps_wheel_pane_g1_ParamLimits

0xde93,	// (0x0005d4f4) main_apps_wheel_pane_g1

0xde9f,	// (0x0005d500) main_apps_wheel_pane_g2_ParamLimits

0xde9f,	// (0x0005d500) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x0005f112) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x0005f112) main_apps_wheel_pane_g

0xdead,	// (0x0005d50e) main_apps_wheel_pane_t1_ParamLimits

0xdead,	// (0x0005d50e) main_apps_wheel_pane_t1

0xdec1,	// (0x0005d522) list_wheel_apps_pane_g1

0xdec9,	// (0x0005d52a) list_wheel_apps_pane_g2

0xded1,	// (0x0005d532) list_wheel_apps_pane_g3

0xded9,	// (0x0005d53a) list_wheel_apps_pane_g4

0xdee3,	// (0x0005d544) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x0005f117) list_wheel_apps_pane_g

0x4812,	// (0x00053e73) navi_icon_text_pane

0xd45a,	// (0x0005cabb) aid_fill_nsta

0x7334,	// (0x00056995) navi_icon_text_pane_g1

0x7340,	// (0x000569a1) navi_icon_text_pane_t1

0x46a5,	// (0x00053d06) list_set_graphic_pane_t1_ParamLimits

0x46a5,	// (0x00053d06) list_set_graphic_pane_t1

0x5d89,	// (0x000553ea) popup_midp_note_alarm_window_t6_ParamLimits

0x5d89,	// (0x000553ea) popup_midp_note_alarm_window_t6

0x5d9b,	// (0x000553fc) popup_midp_note_alarm_window_t7_ParamLimits

0x5d9b,	// (0x000553fc) popup_midp_note_alarm_window_t7

0x5dad,	// (0x0005540e) popup_midp_note_alarm_window_t8_ParamLimits

0x5dad,	// (0x0005540e) popup_midp_note_alarm_window_t8

0x5dbf,	// (0x00055420) popup_midp_note_alarm_window_t9_ParamLimits

0x5dbf,	// (0x00055420) popup_midp_note_alarm_window_t9

0x5dd1,	// (0x00055432) popup_midp_note_alarm_window_t10_ParamLimits

0x5dd1,	// (0x00055432) popup_midp_note_alarm_window_t10

0x5de3,	// (0x00055444) popup_midp_note_alarm_window_t11_ParamLimits

0x5de3,	// (0x00055444) popup_midp_note_alarm_window_t11

0x5df5,	// (0x00055456) scroll_pane_cp17_ParamLimits

0x5df5,	// (0x00055456) scroll_pane_cp17

0x1688,	// (0x00050ce9) volume_small_pane_cp_g1

0x1b37,	// (0x00051198) volume_small_pane_cp_g2

0x1b40,	// (0x000511a1) volume_small_pane_cp_g3

0x1b49,	// (0x000511aa) volume_small_pane_cp_g4

0x1b52,	// (0x000511b3) volume_small_pane_cp_g5

0x1b5b,	// (0x000511bc) volume_small_pane_cp_g6

0x1b64,	// (0x000511c5) volume_small_pane_cp_g7

0x1b6d,	// (0x000511ce) volume_small_pane_cp_g8

0x1b76,	// (0x000511d7) volume_small_pane_cp_g9

0x1b7f,	// (0x000511e0) volume_small_pane_cp_g10

0x4a6f,	// (0x000540d0) midp_ticker_pane_g1_ParamLimits

0x4a7b,	// (0x000540dc) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0005edbe) midp_ticker_pane_g_ParamLimits

0x4a87,	// (0x000540e8) midp_ticker_pane_t1_ParamLimits

0xd47e,	// (0x0005cadf) aid_fill_nsta_2

0x5612,	// (0x00054c73) list_form2_midp_pane

0x6743,	// (0x00055da4) midp_editing_number_pane_ParamLimits

0x6752,	// (0x00055db3) midp_ticker_pane_ParamLimits

0x7352,	// (0x000569b3) form2_midp_field_pane

0x7376,	// (0x000569d7) scroll_pane_cp51

0x7396,	// (0x000569f7) form2_midp_button_pane_ParamLimits

0x7396,	// (0x000569f7) form2_midp_button_pane

0x73a8,	// (0x00056a09) form2_midp_content_pane_ParamLimits

0x73a8,	// (0x00056a09) form2_midp_content_pane

0x73c2,	// (0x00056a23) form2_midp_field_choice_group_pane

0x73ca,	// (0x00056a2b) form2_midp_field_pane_g1

0x73d2,	// (0x00056a33) form2_midp_field_pane_g2

0x73da,	// (0x00056a3b) form2_midp_field_pane_g3

0x73e2,	// (0x00056a43) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x0005f13c) form2_midp_field_pane_g

0x73ea,	// (0x00056a4b) form2_midp_gauge_slider_pane

0x73f2,	// (0x00056a53) form2_midp_gauge_wait_pane

0x73fa,	// (0x00056a5b) form2_midp_image_pane_ParamLimits

0x73fa,	// (0x00056a5b) form2_midp_image_pane

0x7415,	// (0x00056a76) form2_midp_label_pane_ParamLimits

0x7415,	// (0x00056a76) form2_midp_label_pane

0xdf16,	// (0x0005d577) form2_midp_label_pane_cp_ParamLimits

0xdf16,	// (0x0005d577) form2_midp_label_pane_cp

0x744f,	// (0x00056ab0) form2_midp_string_pane_ParamLimits

0x744f,	// (0x00056ab0) form2_midp_string_pane

0xc620,	// (0x0005bc81) form2_midp_text_pane_ParamLimits

0xc620,	// (0x0005bc81) form2_midp_text_pane

0x7461,	// (0x00056ac2) form2_midp_time_pane

0x7471,	// (0x00056ad2) input_focus_pane_cp51_ParamLimits

0x7471,	// (0x00056ad2) input_focus_pane_cp51

0x7489,	// (0x00056aea) form2_midp_label_pane_t1_ParamLimits

0x7489,	// (0x00056aea) form2_midp_label_pane_t1

0xc639,	// (0x0005bc9a) form2_mdip_text_pane_t1_ParamLimits

0xc639,	// (0x0005bc9a) form2_mdip_text_pane_t1

0x3323,	// (0x00052984) form2_midp_time_pane_t1

0x74d2,	// (0x00056b33) form2_midp_gauge_slider_pane_t1

0xdf35,	// (0x0005d596) form2_midp_gauge_slider_pane_t2

0xdf47,	// (0x0005d5a8) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x0005f145) form2_midp_gauge_slider_pane_t

0x7508,	// (0x00056b69) form2_midp_slider_pane

0x7514,	// (0x00056b75) form2_midp_gauge_wait_pane_t1

0x7522,	// (0x00056b83) form2_midp_wait_pane_ParamLimits

0x7522,	// (0x00056b83) form2_midp_wait_pane

0xdf59,	// (0x0005d5ba) list_single_2graphic_pane_cp4_ParamLimits

0xdf59,	// (0x0005d5ba) list_single_2graphic_pane_cp4

0xd934,	// (0x0005cf95) list_single_midp_graphic_pane_cp_ParamLimits

0xd934,	// (0x0005cf95) list_single_midp_graphic_pane_cp

0x2bc4,	// (0x00052225) list_highlight_pane_cp20

0x7571,	// (0x00056bd2) list_single_2graphic_pane_g1_cp4

0x7579,	// (0x00056bda) list_single_2graphic_pane_g2_cp4

0x7581,	// (0x00056be2) list_single_2graphic_pane_t1_cp4

0x2ca4,	// (0x00052305) list_highlight_pane_cp21

0x7590,	// (0x00056bf1) list_single_midp_graphic_pane_g4_cp

0x759f,	// (0x00056c00) list_single_midp_graphic_pane_t1_cp

0xdf6d,	// (0x0005d5ce) form2_mdip_string_pane_t1_ParamLimits

0xdf6d,	// (0x0005d5ce) form2_mdip_string_pane_t1

0x2bc4,	// (0x00052225) bg_wml_button_pane_cp2

0x2bba,	// (0x0005221b) form2_midp_image_pane_g1

0x2f66,	// (0x000525c7) list_double_large_graphic_pane_g5_ParamLimits

0x2f66,	// (0x000525c7) list_double_large_graphic_pane_g5

0xd2d5,	// (0x0005c936) midp_form_pane_ParamLimits

0x2ca4,	// (0x00052305) main_apps_wheel_pane_ParamLimits

0xc2ab,	// (0x0005b90c) popup_preview_window_ParamLimits

0xc2ab,	// (0x0005b90c) popup_preview_window

0x1400,	// (0x00050a61) popup_touch_info_window_ParamLimits

0x1400,	// (0x00050a61) popup_touch_info_window

0x141e,	// (0x00050a7f) popup_touch_menu_window_ParamLimits

0x141e,	// (0x00050a7f) popup_touch_menu_window

0x2bb0,	// (0x00052211) bg_popup_sub_pane_cp6

0x76ad,	// (0x00056d0e) list_touch_menu_pane

0x76b5,	// (0x00056d16) list_single_touch_menu_pane_ParamLimits

0x76b5,	// (0x00056d16) list_single_touch_menu_pane

0x76cb,	// (0x00056d2c) list_single_touch_menu_pane_t1

0x2ca4,	// (0x00052305) bg_popup_sub_pane_cp7_ParamLimits

0x2ca4,	// (0x00052305) bg_popup_sub_pane_cp7

0x76d9,	// (0x00056d3a) heading_sub_pane

0x76e1,	// (0x00056d42) list_touch_info_pane_ParamLimits

0x76e1,	// (0x00056d42) list_touch_info_pane

0x76f0,	// (0x00056d51) list_single_touch_info_pane_ParamLimits

0x76f0,	// (0x00056d51) list_single_touch_info_pane

0x7702,	// (0x00056d63) list_single_touch_info_pane_t1

0x7710,	// (0x00056d71) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x0005f153) list_single_touch_info_pane_t

0x4992,	// (0x00053ff3) bg_popup_heading_pane_cp

0x771e,	// (0x00056d7f) heading_sub_pane_t1

0x525a,	// (0x000548bb) bg_popup_preview_window_pane_cp_ParamLimits

0x525a,	// (0x000548bb) bg_popup_preview_window_pane_cp

0x76d9,	// (0x00056d3a) heading_preview_pane

0x76e1,	// (0x00056d42) list_preview_pane_ParamLimits

0x76e1,	// (0x00056d42) list_preview_pane

0x772c,	// (0x00056d8d) popup_preview_window_g1

0x76f0,	// (0x00056d51) list_single_preview_pane_ParamLimits

0x76f0,	// (0x00056d51) list_single_preview_pane

0x7734,	// (0x00056d95) list_single_preview_pane_g1

0x773c,	// (0x00056d9d) list_single_preview_pane_t1

0x7702,	// (0x00056d63) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x0005f158) list_single_preview_pane_t

0x774a,	// (0x00056dab) bg_popup_heading_pane_cp2_ParamLimits

0x774a,	// (0x00056dab) bg_popup_heading_pane_cp2

0x7760,	// (0x00056dc1) heading_preview_pane_g1

0x7768,	// (0x00056dc9) heading_preview_pane_t1_ParamLimits

0x7768,	// (0x00056dc9) heading_preview_pane_t1

0x2d90,	// (0x000523f1) soft_indicator_pane_t1_ParamLimits

0x3c70,	// (0x000532d1) scroll_pane_ParamLimits

0x4188,	// (0x000537e9) scroll_sc2_left_pane

0x4191,	// (0x000537f2) scroll_sc2_right_pane

0x41b0,	// (0x00053811) scroll_bg_pane_g1_ParamLimits

0x41c5,	// (0x00053826) scroll_bg_pane_g2_ParamLimits

0x41dd,	// (0x0005383e) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0005ed49) scroll_bg_pane_g_ParamLimits

0x41b0,	// (0x00053811) scroll_handle_pane_g1_ParamLimits

0x41ff,	// (0x00053860) scroll_handle_pane_g2_ParamLimits

0x41dd,	// (0x0005383e) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0005ed50) scroll_handle_pane_g_ParamLimits

0x0ec6,	// (0x00050527) popup_choice_list_window_ParamLimits

0x0ec6,	// (0x00050527) popup_choice_list_window

0x5130,	// (0x00054791) choice_list_pane

0x51b2,	// (0x00054813) cell_toolbar_pane_t1

0x51da,	// (0x0005483b) toolbar_button_pane_ParamLimits

0x62af,	// (0x00055910) ai_gene_pane_1_t2_ParamLimits

0x62af,	// (0x00055910) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0005ef73) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0005ef73) ai_gene_pane_1_t

0x7785,	// (0x00056de6) scroll_sc2_left_pane_g1

0x7785,	// (0x00056de6) scroll_sc2_right_pane_g1

0x4cb6,	// (0x00054317) bg_popup_sub_pane_cp10

0x778f,	// (0x00056df0) list_choice_list_pane

0x77a8,	// (0x00056e09) list_single_choice_list_pane_ParamLimits

0x77a8,	// (0x00056e09) list_single_choice_list_pane

0x77bb,	// (0x00056e1c) list_single_choice_list_pane_g1

0x3e8e,	// (0x000534ef) list_single_choice_list_pane_t1_ParamLimits

0x3e8e,	// (0x000534ef) list_single_choice_list_pane_t1

0x77c3,	// (0x00056e24) choice_list_pane_g1

0x77cb,	// (0x00056e2c) choice_list_pane_t1

0x2bb0,	// (0x00052211) input_focus_pane_cp11

0x4065,	// (0x000536c6) title_pane_stacon_g2_ParamLimits

0x4065,	// (0x000536c6) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0005ed2f) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0005ed2f) title_pane_stacon_g

0x4992,	// (0x00053ff3) cursor_press_pane

0xbf58,	// (0x0005b5b9) popup_fep_hwr_window_ParamLimits

0xbf58,	// (0x0005b5b9) popup_fep_hwr_window

0x0fec,	// (0x0005064d) popup_fep_vkb_window_ParamLimits

0x0fec,	// (0x0005064d) popup_fep_vkb_window

0x77d9,	// (0x00056e3a) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x0005f181) fep_vkb_side_pane_g_ParamLimits

0x1bc1,	// (0x00051222) fep_hwr_candidate_pane_ParamLimits

0x1bc1,	// (0x00051222) fep_hwr_candidate_pane

0x1beb,	// (0x0005124c) fep_hwr_side_pane_ParamLimits

0x1beb,	// (0x0005124c) fep_hwr_side_pane

0x1c0b,	// (0x0005126c) fep_hwr_top_pane_ParamLimits

0x1c0b,	// (0x0005126c) fep_hwr_top_pane

0x1c23,	// (0x00051284) fep_hwr_write_pane_ParamLimits

0x1c23,	// (0x00051284) fep_hwr_write_pane

0xfb20,	// (0x0005f181) fep_vkb_side_pane_g

0x77e1,	// (0x00056e42) fep_hwr_top_pane_g1

0x77f3,	// (0x00056e54) fep_hwr_top_pane_g2

0x1c5d,	// (0x000512be) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x0005f15d) fep_hwr_top_pane_g

0x1c72,	// (0x000512d3) fep_hwr_top_text_pane

0x437f,	// (0x000539e0) fep_hwr_top_text_pane_g1

0x7829,	// (0x00056e8a) fep_hwr_top_text_pane_t1

0x1d68,	// (0x000513c9) fep_hwr_candidate_pane_g1

0x7a7c,	// (0x000570dd) fep_vkb_keypad_pane_g3_ParamLimits

0x7a7c,	// (0x000570dd) fep_vkb_keypad_pane_g3

0x7aa4,	// (0x00057105) fep_vkb_keypad_pane_g4_ParamLimits

0x7aa4,	// (0x00057105) fep_vkb_keypad_pane_g4

0x7b13,	// (0x00057174) fep_vkb_bottom_pane_g2_ParamLimits

0x7b13,	// (0x00057174) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x0005f188) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x0005f188) fep_vkb_bottom_pane_g

0x7785,	// (0x00056de6) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x0005f192) cell_vkb_side_pane_g

0x7b9e,	// (0x000571ff) cell_vkb_side_pane_t1

0x7bac,	// (0x0005720d) cell_vkb_side_pane_t1_copy1

0x7785,	// (0x00056de6) bg_fep_vkb_candidate_pane_g2

0x7cd8,	// (0x00057339) cell_vkb_candidate_pane_ParamLimits

0x7837,	// (0x00056e98) aid_size_cell_vkb_ParamLimits

0x7837,	// (0x00056e98) aid_size_cell_vkb

0x7cd8,	// (0x00057339) cell_vkb_candidate_pane

0x1d8f,	// (0x000513f0) bg_popup_fep_shadow_pane_g1

0xdfef,	// (0x0005d650) fep_vkb_bottom_pane_ParamLimits

0xdfef,	// (0x0005d650) fep_vkb_bottom_pane

0x78fb,	// (0x00056f5c) fep_vkb_candidate_pane_ParamLimits

0x78fb,	// (0x00056f5c) fep_vkb_candidate_pane

0xe014,	// (0x0005d675) fep_vkb_keypad_pane_ParamLimits

0xe014,	// (0x0005d675) fep_vkb_keypad_pane

0xe050,	// (0x0005d6b1) fep_vkb_side_pane_ParamLimits

0xe050,	// (0x0005d6b1) fep_vkb_side_pane

0xe08c,	// (0x0005d6ed) fep_vkb_top_pane_ParamLimits

0xe08c,	// (0x0005d6ed) fep_vkb_top_pane

0x79d5,	// (0x00057036) fep_vkb_top_pane_g1_ParamLimits

0x79d5,	// (0x00057036) fep_vkb_top_pane_g1

0x79e4,	// (0x00057045) fep_vkb_top_pane_g2_ParamLimits

0x79e4,	// (0x00057045) fep_vkb_top_pane_g2

0x79f3,	// (0x00057054) fep_vkb_top_pane_g3_ParamLimits

0x79f3,	// (0x00057054) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x0005f178) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x0005f178) fep_vkb_top_pane_g

0x7a11,	// (0x00057072) fep_vkb_top_text_pane_ParamLimits

0x7a11,	// (0x00057072) fep_vkb_top_text_pane

0xe0c8,	// (0x0005d729) fep_vkb_side_pane_g1_ParamLimits

0xe0c8,	// (0x0005d729) fep_vkb_side_pane_g1

0x7a6b,	// (0x000570cc) grid_vkb_side_pane_ParamLimits

0x7a6b,	// (0x000570cc) grid_vkb_side_pane

0x1d97,	// (0x000513f8) bg_popup_fep_shadow_pane_g2

0x1da0,	// (0x00051401) bg_popup_fep_shadow_pane_g3

0x1da8,	// (0x00051409) bg_popup_fep_shadow_pane_g4

0x1db1,	// (0x00051412) bg_popup_fep_shadow_pane_g5

0x1dbb,	// (0x0005141c) bg_popup_fep_shadow_pane_g6

0x1dc3,	// (0x00051424) bg_popup_fep_shadow_pane_g7

0x3d6d,	// (0x000533ce) bg_popup_fep_shadow_pane_g8

0x7ac2,	// (0x00057123) grid_vkb_keypad_number_pane_ParamLimits

0x7ac2,	// (0x00057123) grid_vkb_keypad_number_pane

0x7ad2,	// (0x00057133) grid_vkb_keypad_pane_ParamLimits

0x7ad2,	// (0x00057133) grid_vkb_keypad_pane

0x7af8,	// (0x00057159) fep_vkb_bottom_pane_g1_ParamLimits

0x7af8,	// (0x00057159) fep_vkb_bottom_pane_g1

0x7b21,	// (0x00057182) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7b21,	// (0x00057182) grid_vkb_keypad_bottom_left_pane

0x7b36,	// (0x00057197) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7b36,	// (0x00057197) grid_vkb_keypad_bottom_right_pane

0x7b4b,	// (0x000571ac) fep_vkb_top_text_pane_g1

0xe10f,	// (0x0005d770) fep_vkb_top_text_pane_t1

0xe121,	// (0x0005d782) cell_vkb_side_pane_ParamLimits

0xe121,	// (0x0005d782) cell_vkb_side_pane

0x7785,	// (0x00056de6) cell_vkb_side_pane_g1

0x7bba,	// (0x0005721b) cell_vkb_keypad_pane_ParamLimits

0x7bba,	// (0x0005721b) cell_vkb_keypad_pane

0x7c2f,	// (0x00057290) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x0005f1a5) bg_popup_fep_shadow_pane_g

0x1dd5,	// (0x00051436) cell_hwr_side_pane_g1

0x1dd5,	// (0x00051436) cell_hwr_side_pane_g2

0x7c39,	// (0x0005729a) cell_vkb_keypad_pane_t1

0xe137,	// (0x0005d798) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe137,	// (0x0005d798) cell_vkb_keypad_bottom_left_pane

0xe14c,	// (0x0005d7ad) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe14c,	// (0x0005d7ad) cell_vkb_keypad_bottom_right_pane

0x7785,	// (0x00056de6) cell_vkb_keypad_bottom_left_pane_g1

0x7785,	// (0x00056de6) cell_vkb_keypad_bottom_right_pane_g1

0x7c9d,	// (0x000572fe) cell_vkb_keypad_number_pane_ParamLimits

0x7c9d,	// (0x000572fe) cell_vkb_keypad_number_pane

0x7cbc,	// (0x0005731d) cell_vkb_keypad_number_pane_g1

0x7cc6,	// (0x00057327) cell_vkb_keypad_number_pane_g2

0x7ccf,	// (0x00057330) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x0005f197) cell_vkb_keypad_number_pane_g

0x7c39,	// (0x0005729a) cell_vkb_keypad_number_pane_t1

0x7cf3,	// (0x00057354) fep_vkb_candidate_pane_g1

0x0001,

0xfb57,	// (0x0005f1b8) cell_hwr_side_pane_g

0x7d0c,	// (0x0005736d) cell_hwr_side_pane_t1

0x1ddf,	// (0x00051440) cell_hwr_side_pane_t1_copy1

0x1ded,	// (0x0005144e) cell_hwr_candidate_pane_g1

0x1e1c,	// (0x0005147d) cell_hwr_candidate_pane_t1

0x7785,	// (0x00056de6) cell_vkb_candidate_pane_g2

0x7d50,	// (0x000573b1) cell_vkb_candidate_pane_t1

0x1b88,	// (0x000511e9) bg_popup_fep_shadow_pane_ParamLimits

0x1b88,	// (0x000511e9) bg_popup_fep_shadow_pane

0x1c3d,	// (0x0005129e) bg_fep_hwr_top_pane_g4

0x7805,	// (0x00056e66) bg_hwr_side_pane_g1_ParamLimits

0x7805,	// (0x00056e66) bg_hwr_side_pane_g1

0xc66a,	// (0x0005bccb) cell_hwr_side_pane_ParamLimits

0xc66a,	// (0x0005bccb) cell_hwr_side_pane

0x1ce9,	// (0x0005134a) fep_hwr_write_pane_g1_ParamLimits

0x1ce9,	// (0x0005134a) fep_hwr_write_pane_g1

0x1cf6,	// (0x00051357) fep_hwr_write_pane_g2_ParamLimits

0x1cf6,	// (0x00051357) fep_hwr_write_pane_g2

0x1d03,	// (0x00051364) fep_hwr_write_pane_g3_ParamLimits

0x1d03,	// (0x00051364) fep_hwr_write_pane_g3

0xc68a,	// (0x0005bceb) fep_hwr_write_pane_g4_ParamLimits

0xc68a,	// (0x0005bceb) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x0005f164) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x0005f164) fep_hwr_write_pane_g

0x1c3d,	// (0x0005129e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1c3d,	// (0x0005129e) bg_fep_hwr_candidate_pane_g2

0x1d26,	// (0x00051387) cell_hwr_candidate_pane_ParamLimits

0x1d26,	// (0x00051387) cell_hwr_candidate_pane

0x1d68,	// (0x000513c9) fep_hwr_candidate_pane_g1_ParamLimits

0x7865,	// (0x00056ec6) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7865,	// (0x00056ec6) bg_popup_fep_shadow_pane_cp2

0x7a03,	// (0x00057064) fep_vkb_top_pane_g4_ParamLimits

0x7a03,	// (0x00057064) fep_vkb_top_pane_g4

0x7a49,	// (0x000570aa) fep_vkb_side_pane_g2_ParamLimits

0x7a49,	// (0x000570aa) fep_vkb_side_pane_g2

0xba46,	// (0x0005b0a7) list_setting_pane_t4_ParamLimits

0xba46,	// (0x0005b0a7) list_setting_pane_t4

0xbae0,	// (0x0005b141) list_setting_number_pane_t5_ParamLimits

0xbae0,	// (0x0005b141) list_setting_number_pane_t5

0x43b6,	// (0x00053a17) list_double_heading_pane_cp2_ParamLimits

0x43b6,	// (0x00053a17) list_double_heading_pane_cp2

0x3ca4,	// (0x00053305) list_double_heading_pane_g1_cp2_ParamLimits

0x3ca4,	// (0x00053305) list_double_heading_pane_g1_cp2

0x3d17,	// (0x00053378) list_double_heading_pane_g2_cp2_ParamLimits

0x3d17,	// (0x00053378) list_double_heading_pane_g2_cp2

0x7d5e,	// (0x000573bf) list_double_heading_pane_t1_cp2_ParamLimits

0x7d5e,	// (0x000573bf) list_double_heading_pane_t1_cp2

0x7d74,	// (0x000573d5) list_double_heading_pane_t2_cp2_ParamLimits

0x7d74,	// (0x000573d5) list_double_heading_pane_t2_cp2

0x2b98,	// (0x000521f9) aid_value_unit2

0xf544,	// (0x0005eba5) popup_preview_fixed_window

0x36f1,	// (0x00052d52) bg_popup_preview_window_pane_cp02

0x7d86,	// (0x000573e7) list_preview_fixed_pane

0x7dcc,	// (0x0005742d) list_empty_pane_fp_ParamLimits

0x7dcc,	// (0x0005742d) list_empty_pane_fp

0x7dcc,	// (0x0005742d) list_single_cale_day_pane_fp_ParamLimits

0x7dcc,	// (0x0005742d) list_single_cale_day_pane_fp

0x7dcc,	// (0x0005742d) list_single_graphic_heading_pane_fp_ParamLimits

0x7dcc,	// (0x0005742d) list_single_graphic_heading_pane_fp

0x7dcc,	// (0x0005742d) list_single_graphic_pane_fp_ParamLimits

0x7dcc,	// (0x0005742d) list_single_graphic_pane_fp

0x7dcc,	// (0x0005742d) list_single_heading_pane_fp_ParamLimits

0x7dcc,	// (0x0005742d) list_single_heading_pane_fp

0x7dcc,	// (0x0005742d) list_single_pane_fp_ParamLimits

0x7dcc,	// (0x0005742d) list_single_pane_fp

0x7de1,	// (0x00057442) list_single_pane_fp_g1_ParamLimits

0x7de1,	// (0x00057442) list_single_pane_fp_g1

0x3ca4,	// (0x00053305) list_single_pane_fp_g2_ParamLimits

0x3ca4,	// (0x00053305) list_single_pane_fp_g2

0x3d17,	// (0x00053378) list_single_pane_fp_g3_ParamLimits

0x3d17,	// (0x00053378) list_single_pane_fp_g3

0x7ded,	// (0x0005744e) list_single_pane_fp_g4_ParamLimits

0x7ded,	// (0x0005744e) list_single_pane_fp_g4

0x0003,

0xfb6a,	// (0x0005f1cb) list_single_pane_fp_g_ParamLimits

0xfb6a,	// (0x0005f1cb) list_single_pane_fp_g

0x3336,	// (0x00052997) list_single_pane_fp_t1_ParamLimits

0x3336,	// (0x00052997) list_single_pane_fp_t1

0x334d,	// (0x000529ae) list_single_graphic_pane_fp_g1_ParamLimits

0x334d,	// (0x000529ae) list_single_graphic_pane_fp_g1

0x7de1,	// (0x00057442) list_single_graphic_pane_fp_g2_ParamLimits

0x7de1,	// (0x00057442) list_single_graphic_pane_fp_g2

0x3ca4,	// (0x00053305) list_single_graphic_pane_fp_g3_ParamLimits

0x3ca4,	// (0x00053305) list_single_graphic_pane_fp_g3

0x3d17,	// (0x00053378) list_single_graphic_pane_fp_g4_ParamLimits

0x3d17,	// (0x00053378) list_single_graphic_pane_fp_g4

0x7ded,	// (0x0005744e) list_single_graphic_pane_fp_g5_ParamLimits

0x7ded,	// (0x0005744e) list_single_graphic_pane_fp_g5

0x0004,

0xfb73,	// (0x0005f1d4) list_single_graphic_pane_fp_g_ParamLimits

0xfb73,	// (0x0005f1d4) list_single_graphic_pane_fp_g

0x3359,	// (0x000529ba) list_single_graphic_pane_fp_t1_ParamLimits

0x3359,	// (0x000529ba) list_single_graphic_pane_fp_t1

0x334d,	// (0x000529ae) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x334d,	// (0x000529ae) list_single_graphic_heading_pane_fp_g1

0x7de1,	// (0x00057442) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7de1,	// (0x00057442) list_single_graphic_heading_pane_fp_g2

0x3ca4,	// (0x00053305) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3ca4,	// (0x00053305) list_single_graphic_heading_pane_fp_g3

0x3d17,	// (0x00053378) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3d17,	// (0x00053378) list_single_graphic_heading_pane_fp_g4

0x7ded,	// (0x0005744e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7ded,	// (0x0005744e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb73,	// (0x0005f1d4) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb73,	// (0x0005f1d4) list_single_graphic_heading_pane_fp_g

0x336f,	// (0x000529d0) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x336f,	// (0x000529d0) list_single_graphic_heading_pane_fp_t1

0x3385,	// (0x000529e6) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3385,	// (0x000529e6) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb7e,	// (0x0005f1df) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb7e,	// (0x0005f1df) list_single_graphic_heading_pane_fp_t

0x3397,	// (0x000529f8) list_single_cale_day_pane_fp_g1_ParamLimits

0x3397,	// (0x000529f8) list_single_cale_day_pane_fp_g1

0x7df9,	// (0x0005745a) list_single_cale_day_pane_fp_g2_ParamLimits

0x7df9,	// (0x0005745a) list_single_cale_day_pane_fp_g2

0x33cf,	// (0x00052a30) list_single_cale_day_pane_fp_g3_ParamLimits

0x33cf,	// (0x00052a30) list_single_cale_day_pane_fp_g3

0x33f7,	// (0x00052a58) list_single_cale_day_pane_fp_g4_ParamLimits

0x33f7,	// (0x00052a58) list_single_cale_day_pane_fp_g4

0x341b,	// (0x00052a7c) list_single_cale_day_pane_fp_g5_ParamLimits

0x341b,	// (0x00052a7c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb83,	// (0x0005f1e4) list_single_cale_day_pane_fp_g_ParamLimits

0xfb83,	// (0x0005f1e4) list_single_cale_day_pane_fp_g

0x343f,	// (0x00052aa0) list_single_cale_day_pane_fp_t1_ParamLimits

0x343f,	// (0x00052aa0) list_single_cale_day_pane_fp_t1

0x3465,	// (0x00052ac6) list_single_cale_day_pane_fp_t2_ParamLimits

0x3465,	// (0x00052ac6) list_single_cale_day_pane_fp_t2

0x347e,	// (0x00052adf) list_single_cale_day_pane_fp_t3_ParamLimits

0x347e,	// (0x00052adf) list_single_cale_day_pane_fp_t3

0x0002,

0xfb8e,	// (0x0005f1ef) list_single_cale_day_pane_fp_t_ParamLimits

0xfb8e,	// (0x0005f1ef) list_single_cale_day_pane_fp_t

0x7de1,	// (0x00057442) list_empty_pane_fp_g1_ParamLimits

0x7de1,	// (0x00057442) list_empty_pane_fp_g1

0x3497,	// (0x00052af8) list_empty_pane_fp_t1

0x34a5,	// (0x00052b06) list_empty_pane_fp_t2

0x0001,

0xfb95,	// (0x0005f1f6) list_empty_pane_fp_t

0x7de1,	// (0x00057442) list_single_heading_pane_fp_g1_ParamLimits

0x7de1,	// (0x00057442) list_single_heading_pane_fp_g1

0x3ca4,	// (0x00053305) list_single_heading_pane_fp_g2_ParamLimits

0x3ca4,	// (0x00053305) list_single_heading_pane_fp_g2

0x3d17,	// (0x00053378) list_single_heading_pane_fp_g3_ParamLimits

0x3d17,	// (0x00053378) list_single_heading_pane_fp_g3

0x0002,

0xfb9a,	// (0x0005f1fb) list_single_heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x0005f1fb) list_single_heading_pane_fp_g

0x34b3,	// (0x00052b14) list_single_heading_pane_fp_t1_ParamLimits

0x34b3,	// (0x00052b14) list_single_heading_pane_fp_t1

0x34c5,	// (0x00052b26) list_single_heading_pane_fp_t2_ParamLimits

0x34c5,	// (0x00052b26) list_single_heading_pane_fp_t2

0x0001,

0xfba1,	// (0x0005f202) list_single_heading_pane_fp_t_ParamLimits

0xfba1,	// (0x0005f202) list_single_heading_pane_fp_t

0x3efc,	// (0x0005355d) aid_size_cell_fast

0x2e9d,	// (0x000524fe) soft_indicator_pane_cp1_t1

0x3f39,	// (0x0005359a) cell_app_pane_cp2_ParamLimits

0x3f39,	// (0x0005359a) cell_app_pane_cp2

0x1baa,	// (0x0005120b) fep_hwr_candidate_drop_down_list_pane

0x1d82,	// (0x000513e3) fep_hwr_candidate_pane_g3_ParamLimits

0x1d82,	// (0x000513e3) fep_hwr_candidate_pane_g3

0xe46b,	// (0x0005dacc) fep_hwr_candidate_pane_g4_ParamLimits

0xe46b,	// (0x0005dacc) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x0005f171) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x0005f171) fep_hwr_candidate_pane_g

0x78ea,	// (0x00056f4b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x78ea,	// (0x00056f4b) fep_vkb_candidate_drop_down_list_pane

0x7cfb,	// (0x0005735c) fep_vkb_candidate_pane_g3

0x7d03,	// (0x00057364) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x0005f19e) fep_vkb_candidate_pane_g

0x1ded,	// (0x0005144e) cell_hwr_candidate_pane_g1_ParamLimits

0x1dfb,	// (0x0005145c) cell_hwr_candidate_pane_g3_ParamLimits

0x1dfb,	// (0x0005145c) cell_hwr_candidate_pane_g3

0x9b09,	// (0x0005916a) cell_hwr_candidate_pane_g4_ParamLimits

0x9b09,	// (0x0005916a) cell_hwr_candidate_pane_g4

0x0002,

0xfb5c,	// (0x0005f1bd) cell_hwr_candidate_pane_g_ParamLimits

0xfb5c,	// (0x0005f1bd) cell_hwr_candidate_pane_g

0x7d1a,	// (0x0005737b) cell_vkb_candidate_pane_g3_ParamLimits

0x7d1a,	// (0x0005737b) cell_vkb_candidate_pane_g3

0x7d35,	// (0x00057396) cell_vkb_candidate_pane_g4_ParamLimits

0x7d35,	// (0x00057396) cell_vkb_candidate_pane_g4

0x7e05,	// (0x00057466) cell_app_pane_cp2_g1_ParamLimits

0x7e05,	// (0x00057466) cell_app_pane_cp2_g1

0x7e23,	// (0x00057484) cell_app_pane_cp2_g2_ParamLimits

0x7e23,	// (0x00057484) cell_app_pane_cp2_g2

0x0001,

0xfba6,	// (0x0005f207) cell_app_pane_cp2_g_ParamLimits

0xfba6,	// (0x0005f207) cell_app_pane_cp2_g

0x7e2f,	// (0x00057490) cell_app_pane_cp2_t1_ParamLimits

0x7e2f,	// (0x00057490) cell_app_pane_cp2_t1

0x3d09,	// (0x0005336a) grid_highlight_pane_cp1_ParamLimits

0x3d09,	// (0x0005336a) grid_highlight_pane_cp1

0x1e3a,	// (0x0005149b) cell_hwr_candidate_pane_cp1_ParamLimits

0x1e3a,	// (0x0005149b) cell_hwr_candidate_pane_cp1

0x1ded,	// (0x0005144e) fep_hwr_candidate_drop_down_list_pane_g1

0x1e59,	// (0x000514ba) fep_hwr_candidate_drop_down_list_pane_g2

0x1e66,	// (0x000514c7) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbab,	// (0x0005f20c) fep_hwr_candidate_drop_down_list_pane_g

0x1e73,	// (0x000514d4) fep_hwr_candidate_drop_down_list_scroll_pane

0x1e7c,	// (0x000514dd) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1e7c,	// (0x000514dd) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1e89,	// (0x000514ea) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1e89,	// (0x000514ea) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1e96,	// (0x000514f7) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1e96,	// (0x000514f7) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1ea3,	// (0x00051504) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1ea3,	// (0x00051504) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1ebe,	// (0x0005151f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1ebe,	// (0x0005151f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1ed9,	// (0x0005153a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1ed9,	// (0x0005153a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1ef4,	// (0x00051555) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1ef4,	// (0x00051555) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1f0f,	// (0x00051570) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1f0f,	// (0x00051570) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb2,	// (0x0005f213) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb2,	// (0x0005f213) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7e41,	// (0x000574a2) cell_vkb_candidate_pane_cp1_ParamLimits

0x7e41,	// (0x000574a2) cell_vkb_candidate_pane_cp1

0x7a03,	// (0x00057064) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7a03,	// (0x00057064) fep_vkb_candidate_drop_down_list_pane_g1

0x7e61,	// (0x000574c2) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7e61,	// (0x000574c2) fep_vkb_candidate_drop_down_list_pane_g2

0x7e6e,	// (0x000574cf) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7e6e,	// (0x000574cf) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x0005f224) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc3,	// (0x0005f224) fep_vkb_candidate_drop_down_list_pane_g

0x7e7b,	// (0x000574dc) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7e7b,	// (0x000574dc) fep_vkb_candidate_drop_down_list_scroll_pane

0x7e88,	// (0x000574e9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7e88,	// (0x000574e9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7e95,	// (0x000574f6) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7e95,	// (0x000574f6) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7ea1,	// (0x00057502) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7ea1,	// (0x00057502) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7ead,	// (0x0005750e) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7ead,	// (0x0005750e) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7ece,	// (0x0005752f) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7ece,	// (0x0005752f) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7eef,	// (0x00057550) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7eef,	// (0x00057550) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7f10,	// (0x00057571) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7f10,	// (0x00057571) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7f31,	// (0x00057592) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7f31,	// (0x00057592) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x0005f22b) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x0005f22b) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xcdb3,	// (0x0005c414) title_pane_g1_ParamLimits

0xcdc6,	// (0x0005c427) title_pane_g2_ParamLimits

0xf54e,	// (0x0005ebaf) title_pane_g_ParamLimits

0x436f,	// (0x000539d0) aid_call2_pane

0x4377,	// (0x000539d8) aid_call_pane

0x437f,	// (0x000539e0) popup_clock_analogue_window_g1

0x437f,	// (0x000539e0) popup_clock_analogue_window_g2

0x09e9,	// (0x0005004a) popup_clock_analogue_window_g3

0x09f2,	// (0x00050053) popup_clock_analogue_window_g4

0x2bba,	// (0x0005221b) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0005ed5e) popup_clock_analogue_window_g

0x09fa,	// (0x0005005b) popup_clock_analogue_window_t1

0x0a08,	// (0x00050069) clock_digital_number_pane_ParamLimits

0x0a08,	// (0x00050069) clock_digital_number_pane

0x0a14,	// (0x00050075) clock_digital_number_pane_cp02_ParamLimits

0x0a14,	// (0x00050075) clock_digital_number_pane_cp02

0x0a20,	// (0x00050081) clock_digital_number_pane_cp03_ParamLimits

0x0a20,	// (0x00050081) clock_digital_number_pane_cp03

0x0a2c,	// (0x0005008d) clock_digital_number_pane_cp04_ParamLimits

0x0a2c,	// (0x0005008d) clock_digital_number_pane_cp04

0x0a38,	// (0x00050099) clock_digital_separator_pane_ParamLimits

0x0a38,	// (0x00050099) clock_digital_separator_pane

0x0a44,	// (0x000500a5) popup_clock_digital_window_t1_ParamLimits

0x0a44,	// (0x000500a5) popup_clock_digital_window_t1

0x2bba,	// (0x0005221b) clock_digital_number_pane_g1

0x2bba,	// (0x0005221b) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0005ed69) clock_digital_number_pane_g

0x2bba,	// (0x0005221b) clock_digital_separator_pane_g1

0x2bba,	// (0x0005221b) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0005ed69) clock_digital_separator_pane_g

0xd45a,	// (0x0005cabb) aid_fill_nsta_ParamLimits

0xd590,	// (0x0005cbf1) indicator_nsta_pane_ParamLimits

0x4fbd,	// (0x0005461e) popup_clock_analogue_window

0x4fbd,	// (0x0005461e) popup_clock_digital_window

0x3ebd,	// (0x0005351e) grid_indicator_nsta_pane_ParamLimits

0x719d,	// (0x000567fe) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x0005f0f1) clock_nsta_pane_t

0x09ad,	// (0x0005000e) aid_size_max_handle

0xbc8f,	// (0x0005b2f0) aid_size_min_handle

0x4992,	// (0x00053ff3) editor_scroll_pane

0x7f4c,	// (0x000575ad) ex_editor_pane

0x3e6a,	// (0x000534cb) scroll_pane_cp13

0x3c9c,	// (0x000532fd) scroll_pane_cp14

0x43ae,	// (0x00053a0f) scroll_pane_cp36

0xd23d,	// (0x0005c89e) list_single_graphic_hl_pane_cp2_ParamLimits

0xd23d,	// (0x0005c89e) list_single_graphic_hl_pane_cp2

0xd821,	// (0x0005ce82) list_single_graphic_hl_pane_ParamLimits

0xd821,	// (0x0005ce82) list_single_graphic_hl_pane

0x34db,	// (0x00052b3c) aid_size_min_hl_cp1

0x7f54,	// (0x000575b5) list_highlight_pane_cp34_ParamLimits

0x7f54,	// (0x000575b5) list_highlight_pane_cp34

0x7f65,	// (0x000575c6) list_single_graphic_hl_pane_g1_ParamLimits

0x7f65,	// (0x000575c6) list_single_graphic_hl_pane_g1

0xc69f,	// (0x0005bd00) list_single_graphic_hl_pane_g2_ParamLimits

0xc69f,	// (0x0005bd00) list_single_graphic_hl_pane_g2

0xc69f,	// (0x0005bd00) list_single_graphic_hl_pane_g3_ParamLimits

0xc69f,	// (0x0005bd00) list_single_graphic_hl_pane_g3

0x4903,	// (0x00053f64) list_single_graphic_hl_pane_g4_ParamLimits

0x4903,	// (0x00053f64) list_single_graphic_hl_pane_g4

0x34f0,	// (0x00052b51) list_single_graphic_hl_pane_g5_ParamLimits

0x34f0,	// (0x00052b51) list_single_graphic_hl_pane_g5

0x0004,

0xfbdb,	// (0x0005f23c) list_single_graphic_hl_pane_g_ParamLimits

0xfbdb,	// (0x0005f23c) list_single_graphic_hl_pane_g

0xc6ab,	// (0x0005bd0c) list_single_graphic_hl_pane_t1_ParamLimits

0xc6ab,	// (0x0005bd0c) list_single_graphic_hl_pane_t1

0x7f72,	// (0x000575d3) aid_size_min_hl_cp2

0x7f7b,	// (0x000575dc) list_highlight_pane_cp34_cp2_ParamLimits

0x7f7b,	// (0x000575dc) list_highlight_pane_cp34_cp2

0x7f65,	// (0x000575c6) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7f65,	// (0x000575c6) list_single_graphic_hl_pane_g1_cp2

0x7f88,	// (0x000575e9) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7f88,	// (0x000575e9) list_single_graphic_hl_pane_g2_cp2

0x7f94,	// (0x000575f5) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7f94,	// (0x000575f5) list_single_graphic_hl_pane_g3_cp2

0x7fa2,	// (0x00057603) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7fa2,	// (0x00057603) list_single_graphic_hl_pane_g4_cp2

0x7fae,	// (0x0005760f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7fae,	// (0x0005760f) list_single_graphic_hl_pane_g5_cp2

0xbd76,	// (0x0005b3d7) control_pane_g4_ParamLimits

0xbd76,	// (0x0005b3d7) control_pane_g4

0x4cb6,	// (0x00054317) bg_popup_sub_pane_cp10_ParamLimits

0x778f,	// (0x00056df0) list_choice_list_pane_ParamLimits

0x779e,	// (0x00056dff) scroll_pane_cp23

0x36f1,	// (0x00052d52) bg_popup_preview_window_pane_cp02_ParamLimits

0x7d86,	// (0x000573e7) list_preview_fixed_pane_ParamLimits

0x7d9c,	// (0x000573fd) list_preview_fixed_pane_cp_ParamLimits

0x7d9c,	// (0x000573fd) list_preview_fixed_pane_cp

0x7da8,	// (0x00057409) popup_preview_fixed_window_g1_ParamLimits

0x7da8,	// (0x00057409) popup_preview_fixed_window_g1

0x7db4,	// (0x00057415) popup_preview_fixed_window_g2_ParamLimits

0x7db4,	// (0x00057415) popup_preview_fixed_window_g2

0x0002,

0xfb63,	// (0x0005f1c4) popup_preview_fixed_window_g_ParamLimits

0xfb63,	// (0x0005f1c4) popup_preview_fixed_window_g

0x0921,	// (0x0004ff82) aid_navi_side_left_pane_ParamLimits

0x0936,	// (0x0004ff97) aid_navi_side_right_pane_ParamLimits

0x094e,	// (0x0004ffaf) navi_icon_pane_stacon_ParamLimits

0x0962,	// (0x0004ffc3) navi_navi_pane_stacon_ParamLimits

0x094e,	// (0x0004ffaf) navi_text_pane_stacon_ParamLimits

0xf43b,	// (0x0005ea9c) main_text_info_pane

0x7fd8,	// (0x00057639) listscroll_text_info_pane

0x7fe0,	// (0x00057641) list_text_info_pane_ParamLimits

0x7fe0,	// (0x00057641) list_text_info_pane

0x7fef,	// (0x00057650) scroll_pane_cp24_ParamLimits

0x7fef,	// (0x00057650) scroll_pane_cp24

0xe167,	// (0x0005d7c8) list_text_info_pane_t1_ParamLimits

0xe167,	// (0x0005d7c8) list_text_info_pane_t1

0xbecb,	// (0x0005b52c) popup_fast_swap2_window_ParamLimits

0xbecb,	// (0x0005b52c) popup_fast_swap2_window

0x803e,	// (0x0005769f) aid_size_cell_fast2

0x2bb0,	// (0x00052211) bg_popup_window_pane_cp17

0x5646,	// (0x00054ca7) heading_pane_cp2

0x3966,	// (0x00052fc7) listscroll_fast2_pane

0x8048,	// (0x000576a9) grid_fast2_pane

0x8052,	// (0x000576b3) listscroll_fast2_pane_g1

0x805a,	// (0x000576bb) listscroll_fast2_pane_g2

0x0001,

0xfbe6,	// (0x0005f247) listscroll_fast2_pane_g

0x3e6a,	// (0x000534cb) scroll_pane_cp26

0x8064,	// (0x000576c5) cell_fast2_pane_ParamLimits

0x8064,	// (0x000576c5) cell_fast2_pane

0x8079,	// (0x000576da) cell_fast2_pane_g1

0x8082,	// (0x000576e3) cell_fast2_pane_g2

0x808b,	// (0x000576ec) cell_fast2_pane_g3

0x0002,

0xfbeb,	// (0x0005f24c) cell_fast2_pane_g

0x3a59,	// (0x000530ba) grid_highlight_pane_cp9

0x0ea2,	// (0x00050503) main_eswt_pane_ParamLimits

0x0ea2,	// (0x00050503) main_eswt_pane

0x8004,	// (0x00057665) list_single_text_info_pane

0x8093,	// (0x000576f4) eswt_ctrl_button_pane

0x8093,	// (0x000576f4) eswt_ctrl_canvas_pane

0x809b,	// (0x000576fc) eswt_ctrl_combo_pane

0x8093,	// (0x000576f4) eswt_ctrl_default_pane

0x8093,	// (0x000576f4) eswt_ctrl_label_pane

0x80a3,	// (0x00057704) eswt_ctrl_wait_pane

0x80ab,	// (0x0005770c) eswt_shell_pane

0x2bb0,	// (0x00052211) listscroll_eswt_app_pane

0x80cb,	// (0x0005772c) popup_eswt_tasktip_window_ParamLimits

0x80cb,	// (0x0005772c) popup_eswt_tasktip_window

0x525a,	// (0x000548bb) bg_popup_window_pane_cp18

0x80dc,	// (0x0005773d) eswt_control_pane_g1_ParamLimits

0x80dc,	// (0x0005773d) eswt_control_pane_g1

0x80e9,	// (0x0005774a) eswt_control_pane_g2_ParamLimits

0x80e9,	// (0x0005774a) eswt_control_pane_g2

0x80f6,	// (0x00057757) eswt_control_pane_g3_ParamLimits

0x80f6,	// (0x00057757) eswt_control_pane_g3

0x8103,	// (0x00057764) eswt_control_pane_g4_ParamLimits

0x8103,	// (0x00057764) eswt_control_pane_g4

0x0003,

0xfbf2,	// (0x0005f253) eswt_control_pane_g_ParamLimits

0xfbf2,	// (0x0005f253) eswt_control_pane_g

0x3d09,	// (0x0005336a) bg_button_pane_ParamLimits

0x3d09,	// (0x0005336a) bg_button_pane

0x3a6e,	// (0x000530cf) common_borders_pane_copy2_ParamLimits

0x3a6e,	// (0x000530cf) common_borders_pane_copy2

0x8110,	// (0x00057771) control_button_pane_g1_ParamLimits

0x8110,	// (0x00057771) control_button_pane_g1

0x811c,	// (0x0005777d) control_button_pane_g2_ParamLimits

0x811c,	// (0x0005777d) control_button_pane_g2

0x8128,	// (0x00057789) control_button_pane_g3_ParamLimits

0x8128,	// (0x00057789) control_button_pane_g3

0x0002,

0xfbfb,	// (0x0005f25c) control_button_pane_g_ParamLimits

0xfbfb,	// (0x0005f25c) control_button_pane_g

0x813c,	// (0x0005779d) control_button_pane_t1

0x814a,	// (0x000577ab) control_button_pane_t2

0x0001,

0xfc02,	// (0x0005f263) control_button_pane_t

0x51e6,	// (0x00054847) bg_button_pane_g1

0x51f6,	// (0x00054857) bg_button_pane_g2

0x51ee,	// (0x0005484f) bg_button_pane_g3

0x5206,	// (0x00054867) bg_button_pane_g4

0x51fe,	// (0x0005485f) bg_button_pane_g5

0x520e,	// (0x0005486f) bg_button_pane_g6

0x5216,	// (0x00054877) bg_button_pane_g7

0x5226,	// (0x00054887) bg_button_pane_g8

0x521e,	// (0x0005487f) bg_button_pane_g9

0x0008,

0xf866,	// (0x0005eec7) bg_button_pane_g

0x774a,	// (0x00056dab) common_borders_pane_ParamLimits

0x774a,	// (0x00056dab) common_borders_pane

0x80dc,	// (0x0005773d) eswt_control_pane_g1_copy1_ParamLimits

0x80dc,	// (0x0005773d) eswt_control_pane_g1_copy1

0x80e9,	// (0x0005774a) eswt_control_pane_g2_copy1_ParamLimits

0x80e9,	// (0x0005774a) eswt_control_pane_g2_copy1

0x80f6,	// (0x00057757) eswt_control_pane_g3_copy1_ParamLimits

0x80f6,	// (0x00057757) eswt_control_pane_g3_copy1

0x8103,	// (0x00057764) eswt_control_pane_g4_copy1_ParamLimits

0x8103,	// (0x00057764) eswt_control_pane_g4_copy1

0x7785,	// (0x00056de6) bg_eswt_ctrl_canvas_pane_g1

0x774a,	// (0x00056dab) common_borders_pane_cp2_ParamLimits

0x774a,	// (0x00056dab) common_borders_pane_cp2

0x774a,	// (0x00056dab) common_borders_pane_cp3_ParamLimits

0x774a,	// (0x00056dab) common_borders_pane_cp3

0x8158,	// (0x000577b9) separator_horizontal_pane

0x8160,	// (0x000577c1) separator_vertical_pane

0x80dc,	// (0x0005773d) eswt_control_pane_g1_copy2_ParamLimits

0x80dc,	// (0x0005773d) eswt_control_pane_g1_copy2

0x80e9,	// (0x0005774a) eswt_control_pane_g2_copy2_ParamLimits

0x80e9,	// (0x0005774a) eswt_control_pane_g2_copy2

0x80f6,	// (0x00057757) eswt_control_pane_g3_copy2_ParamLimits

0x80f6,	// (0x00057757) eswt_control_pane_g3_copy2

0x8103,	// (0x00057764) eswt_control_pane_g4_copy2_ParamLimits

0x8103,	// (0x00057764) eswt_control_pane_g4_copy2

0x2bb0,	// (0x00052211) common_borders_pane_cp4

0x8169,	// (0x000577ca) separator_horizontal_pane_g1

0x8172,	// (0x000577d3) separator_horizontal_pane_g2

0x817b,	// (0x000577dc) separator_horizontal_pane_g3

0x0002,

0xfc07,	// (0x0005f268) separator_horizontal_pane_g

0x80dc,	// (0x0005773d) eswt_control_pane_g1_copy3_ParamLimits

0x80dc,	// (0x0005773d) eswt_control_pane_g1_copy3

0x80e9,	// (0x0005774a) eswt_control_pane_g2_copy3_ParamLimits

0x80e9,	// (0x0005774a) eswt_control_pane_g2_copy3

0x80f6,	// (0x00057757) eswt_control_pane_g3_copy3_ParamLimits

0x80f6,	// (0x00057757) eswt_control_pane_g3_copy3

0x8103,	// (0x00057764) eswt_control_pane_g4_copy3_ParamLimits

0x8103,	// (0x00057764) eswt_control_pane_g4_copy3

0x2bb0,	// (0x00052211) common_borders_pane_cp5

0x8184,	// (0x000577e5) separator_vertical_pane_g1

0x818d,	// (0x000577ee) separator_vertical_pane_g2

0x8196,	// (0x000577f7) separator_vertical_pane_g3

0x0002,

0xfc0e,	// (0x0005f26f) separator_vertical_pane_g

0x80dc,	// (0x0005773d) eswt_control_pane_g1_copy4_ParamLimits

0x80dc,	// (0x0005773d) eswt_control_pane_g1_copy4

0x80e9,	// (0x0005774a) eswt_control_pane_g2_copy4_ParamLimits

0x80e9,	// (0x0005774a) eswt_control_pane_g2_copy4

0x80f6,	// (0x00057757) eswt_control_pane_g3_copy4_ParamLimits

0x80f6,	// (0x00057757) eswt_control_pane_g3_copy4

0x8103,	// (0x00057764) eswt_control_pane_g4_copy4_ParamLimits

0x8103,	// (0x00057764) eswt_control_pane_g4_copy4

0xe182,	// (0x0005d7e3) eswt_ctrl_combo_button_pane

0xe18a,	// (0x0005d7eb) eswt_ctrl_input_pane

0xe192,	// (0x0005d7f3) popup_choice_list_window_cp70

0xe19a,	// (0x0005d7fb) eswt_ctrl_input_pane_t1

0x2bb0,	// (0x00052211) input_focus_pane_cp70

0x774a,	// (0x00056dab) bg_button_pane_cp70_ParamLimits

0x774a,	// (0x00056dab) bg_button_pane_cp70

0xe1a8,	// (0x0005d809) eswt_ctrl_combo_button_pane_g1

0x81cd,	// (0x0005782e) wait_bar_pane_cp70

0x525a,	// (0x000548bb) bg_popup_window_pane_cp70_ParamLimits

0x525a,	// (0x000548bb) bg_popup_window_pane_cp70

0x81d5,	// (0x00057836) popup_eswt_tasktip_window_t1

0x81eb,	// (0x0005784c) wait_bar_pane_cp71_ParamLimits

0x81eb,	// (0x0005784c) wait_bar_pane_cp71

0x81f7,	// (0x00057858) grid_eswt_app_pane

0x4188,	// (0x000537e9) scroll_pane_cp70

0xe1b0,	// (0x0005d811) cell_eswt_app_pane_ParamLimits

0xe1b0,	// (0x0005d811) cell_eswt_app_pane

0xe1da,	// (0x0005d83b) cell_eswt_app_pane_g1_ParamLimits

0xe1da,	// (0x0005d83b) cell_eswt_app_pane_g1

0xe209,	// (0x0005d86a) cell_eswt_app_pane_g2_ParamLimits

0xe209,	// (0x0005d86a) cell_eswt_app_pane_g2

0x0001,

0xfc15,	// (0x0005f276) cell_eswt_app_pane_g_ParamLimits

0xfc15,	// (0x0005f276) cell_eswt_app_pane_g

0xe232,	// (0x0005d893) cell_eswt_app_pane_t1_ParamLimits

0xe232,	// (0x0005d893) cell_eswt_app_pane_t1

0x82ba,	// (0x0005791b) grid_highlight_pane_cp70_ParamLimits

0x82ba,	// (0x0005791b) grid_highlight_pane_cp70

0x4867,	// (0x00053ec8) set_content_pane_g1

0xd40f,	// (0x0005ca70) status_small_volume_pane

0x1f2a,	// (0x0005158b) status_small_volume_pane_g1

0x1f32,	// (0x00051593) volume_small2_pane

0x1f3b,	// (0x0005159c) volume_small2_pane_g1

0x1f44,	// (0x000515a5) volume_small2_pane_g2

0x1f4d,	// (0x000515ae) volume_small2_pane_g3

0x1f56,	// (0x000515b7) volume_small2_pane_g4

0x1f5f,	// (0x000515c0) volume_small2_pane_g5

0x1f68,	// (0x000515c9) volume_small2_pane_g6

0x1f71,	// (0x000515d2) volume_small2_pane_g7

0x1f7a,	// (0x000515db) volume_small2_pane_g8

0x1f83,	// (0x000515e4) volume_small2_pane_g9

0x1f8c,	// (0x000515ed) volume_small2_pane_g10

0x0009,

0xfc1a,	// (0x0005f27b) volume_small2_pane_g

0x7b4b,	// (0x000571ac) fep_vkb_top_text_pane_g1_ParamLimits

0xe10f,	// (0x0005d770) fep_vkb_top_text_pane_t1_ParamLimits

0x7dc0,	// (0x00057421) popup_preview_fixed_window_g3_ParamLimits

0x7dc0,	// (0x00057421) popup_preview_fixed_window_g3

0xc4ee,	// (0x0005bb4f) popup_toolbar_trans_pane

0xdb25,	// (0x0005d186) aid_height_set_list_ParamLimits

0x65bc,	// (0x00055c1d) aid_size_parent_ParamLimits

0x4cb6,	// (0x00054317) list_highlight_pane_cp2_ParamLimits

0x4867,	// (0x00053ec8) set_content_pane_g1_ParamLimits

0xd832,	// (0x0005ce93) list_single_image_pane_ParamLimits

0xd832,	// (0x0005ce93) list_single_image_pane

0xe264,	// (0x0005d8c5) aid_size_cell_image_ParamLimits

0xe264,	// (0x0005d8c5) aid_size_cell_image

0xe271,	// (0x0005d8d2) grid_single_image_pane_ParamLimits

0xe271,	// (0x0005d8d2) grid_single_image_pane

0x4cdc,	// (0x0005433d) list_single_image_pane_g1_ParamLimits

0x4cdc,	// (0x0005433d) list_single_image_pane_g1

0x82df,	// (0x00057940) list_single_image_pane_g2_ParamLimits

0x82df,	// (0x00057940) list_single_image_pane_g2

0x0001,

0xfc2f,	// (0x0005f290) list_single_image_pane_g_ParamLimits

0xfc2f,	// (0x0005f290) list_single_image_pane_g

0x82f3,	// (0x00057954) list_single_image_pane_t1_ParamLimits

0x82f3,	// (0x00057954) list_single_image_pane_t1

0xe27f,	// (0x0005d8e0) cell_image_list_pane_ParamLimits

0xe27f,	// (0x0005d8e0) cell_image_list_pane

0xe295,	// (0x0005d8f6) cell_image_list_pane_g1

0xe29e,	// (0x0005d8ff) cell_image_list_pane_g2

0x0001,

0xfc34,	// (0x0005f295) cell_image_list_pane_g

0x832f,	// (0x00057990) aid_size_cell_tb_trans_pane

0x3d09,	// (0x0005336a) bg_tb_trans_pane

0x8341,	// (0x000579a2) grid_tb_trans_pane

0x51e6,	// (0x00054847) bg_tb_trans_pane_g1

0x51f6,	// (0x00054857) bg_tb_trans_pane_g2

0x51ee,	// (0x0005484f) bg_tb_trans_pane_g3

0x5206,	// (0x00054867) bg_tb_trans_pane_g4

0x51fe,	// (0x0005485f) bg_tb_trans_pane_g5

0x5226,	// (0x00054887) bg_tb_trans_pane_g6

0x521e,	// (0x0005487f) bg_tb_trans_pane_g7

0x520e,	// (0x0005486f) bg_tb_trans_pane_g8

0x5216,	// (0x00054877) bg_tb_trans_pane_g9

0x0008,

0xfc39,	// (0x0005f29a) bg_tb_trans_pane_g

0x8355,	// (0x000579b6) cell_toolbar_trans_pane_ParamLimits

0x8355,	// (0x000579b6) cell_toolbar_trans_pane

0x7785,	// (0x00056de6) cell_toolbar_trans_pane_g1

0xdefa,	// (0x0005d55b) list_form2_midp_pane_t1

0xdf08,	// (0x0005d569) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x0005f137) list_form2_midp_pane_t

0x7376,	// (0x000569d7) scroll_pane_cp51_ParamLimits

0x7532,	// (0x00056b93) form2_midp_wait_pane_g1

0x753b,	// (0x00056b9c) form2_midp_wait_pane_g2

0x7544,	// (0x00056ba5) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x0005f14c) form2_midp_wait_pane_g

0x2ca4,	// (0x00052305) list_highlight_pane_cp21_ParamLimits

0x7590,	// (0x00056bf1) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x759f,	// (0x00056c00) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6774,	// (0x00055dd5) list_single_2graphic_im_pane_ParamLimits

0x6774,	// (0x00055dd5) list_single_2graphic_im_pane

0xe2a7,	// (0x0005d908) list_single_2graphic_im_pane_g1_ParamLimits

0xe2a7,	// (0x0005d908) list_single_2graphic_im_pane_g1

0xe2b8,	// (0x0005d919) list_single_2graphic_im_pane_g2_ParamLimits

0xe2b8,	// (0x0005d919) list_single_2graphic_im_pane_g2

0xe2c4,	// (0x0005d925) list_single_2graphic_im_pane_g3_ParamLimits

0xe2c4,	// (0x0005d925) list_single_2graphic_im_pane_g3

0x0003,

0xfc4c,	// (0x0005f2ad) list_single_2graphic_im_pane_g_ParamLimits

0xfc4c,	// (0x0005f2ad) list_single_2graphic_im_pane_g

0xe2d8,	// (0x0005d939) list_single_2graphic_im_pane_t1_ParamLimits

0xe2d8,	// (0x0005d939) list_single_2graphic_im_pane_t1

0x7dcc,	// (0x0005742d) list_single_graphic_2heading_pane_fp_ParamLimits

0x7dcc,	// (0x0005742d) list_single_graphic_2heading_pane_fp

0x334d,	// (0x000529ae) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x334d,	// (0x000529ae) list_single_graphic_2heading_pane_fp_g1

0x7de1,	// (0x00057442) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7de1,	// (0x00057442) list_single_graphic_2heading_pane_fp_g2

0x3ca4,	// (0x00053305) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3ca4,	// (0x00053305) list_single_graphic_2heading_pane_fp_g3

0x3d17,	// (0x00053378) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3d17,	// (0x00053378) list_single_graphic_2heading_pane_fp_g4

0x7ded,	// (0x0005744e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7ded,	// (0x0005744e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb73,	// (0x0005f1d4) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb73,	// (0x0005f1d4) list_single_graphic_2heading_pane_fp_g

0x351a,	// (0x00052b7b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x351a,	// (0x00052b7b) list_single_graphic_2heading_pane_fp_t1

0x3385,	// (0x000529e6) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3385,	// (0x000529e6) list_single_graphic_2heading_pane_fp_t2

0x3530,	// (0x00052b91) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3530,	// (0x00052b91) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc55,	// (0x0005f2b6) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc55,	// (0x0005f2b6) list_single_graphic_2heading_pane_fp_t

0x7811,	// (0x00056e72) fep_hwr_write_pane_g5_ParamLimits

0x7811,	// (0x00056e72) fep_hwr_write_pane_g5

0x781d,	// (0x00056e7e) fep_hwr_write_pane_g6_ParamLimits

0x781d,	// (0x00056e7e) fep_hwr_write_pane_g6

0x80ab,	// (0x0005770c) eswt_shell_pane_ParamLimits

0x525a,	// (0x000548bb) bg_popup_window_pane_cp18_ParamLimits

0x6504,	// (0x00055b65) heading_pane_cp70

0x81d5,	// (0x00057836) popup_eswt_tasktip_window_t1_ParamLimits

0xd4b5,	// (0x0005cb16) aid_touch_tab_arrow_left

0xd4cb,	// (0x0005cb2c) aid_touch_tab_arrow_right

0xcdde,	// (0x0005c43f) title_pane_g3_ParamLimits

0xcdde,	// (0x0005c43f) title_pane_g3

0x3cc8,	// (0x00053329) set_value_pane_g1

0xc4ee,	// (0x0005bb4f) popup_toolbar_trans_pane_ParamLimits

0x832f,	// (0x00057990) aid_size_cell_tb_trans_pane_ParamLimits

0x3d09,	// (0x0005336a) bg_tb_trans_pane_ParamLimits

0x8341,	// (0x000579a2) grid_tb_trans_pane_ParamLimits

0x36f1,	// (0x00052d52) cont_note_pane_ParamLimits

0x36f1,	// (0x00052d52) cont_note_pane

0x3a6e,	// (0x000530cf) cont_snote2_single_text_pane_ParamLimits

0x3a6e,	// (0x000530cf) cont_snote2_single_text_pane

0x3a6e,	// (0x000530cf) cont_snote2_single_graphic_pane_ParamLimits

0x3a6e,	// (0x000530cf) cont_snote2_single_graphic_pane

0x586d,	// (0x00054ece) cont_note_wait_pane_ParamLimits

0x586d,	// (0x00054ece) cont_note_wait_pane

0x586d,	// (0x00054ece) cont_note_image_pane_ParamLimits

0x586d,	// (0x00054ece) cont_note_image_pane

0x83e9,	// (0x00057a4a) popup_note2_window_g1_ParamLimits

0x83e9,	// (0x00057a4a) popup_note2_window_g1

0x841a,	// (0x00057a7b) popup_note2_window_t1_ParamLimits

0x841a,	// (0x00057a7b) popup_note2_window_t1

0x845f,	// (0x00057ac0) popup_note2_window_t2_ParamLimits

0x845f,	// (0x00057ac0) popup_note2_window_t2

0x84a4,	// (0x00057b05) popup_note2_window_t3_ParamLimits

0x84a4,	// (0x00057b05) popup_note2_window_t3

0x84e9,	// (0x00057b4a) popup_note2_window_t4_ParamLimits

0x84e9,	// (0x00057b4a) popup_note2_window_t4

0x3775,	// (0x00052dd6) popup_note2_window_t5_ParamLimits

0x3775,	// (0x00052dd6) popup_note2_window_t5

0x0004,

0xfc61,	// (0x0005f2c2) popup_note2_window_t_ParamLimits

0xfc61,	// (0x0005f2c2) popup_note2_window_t

0x8518,	// (0x00057b79) popup_note2_image_window_g1_ParamLimits

0x8518,	// (0x00057b79) popup_note2_image_window_g1

0x8524,	// (0x00057b85) popup_note2_image_window_g2_ParamLimits

0x8524,	// (0x00057b85) popup_note2_image_window_g2

0x0001,

0xfc6c,	// (0x0005f2cd) popup_note2_image_window_g_ParamLimits

0xfc6c,	// (0x0005f2cd) popup_note2_image_window_g

0x8536,	// (0x00057b97) popup_note2_image_window_t1_ParamLimits

0x8536,	// (0x00057b97) popup_note2_image_window_t1

0x854e,	// (0x00057baf) popup_note2_image_window_t2_ParamLimits

0x854e,	// (0x00057baf) popup_note2_image_window_t2

0x8566,	// (0x00057bc7) popup_note2_image_window_t3_ParamLimits

0x8566,	// (0x00057bc7) popup_note2_image_window_t3

0x0002,

0xfc71,	// (0x0005f2d2) popup_note2_image_window_t_ParamLimits

0xfc71,	// (0x0005f2d2) popup_note2_image_window_t

0x587b,	// (0x00054edc) popup_note2_wait_window_g1_ParamLimits

0x587b,	// (0x00054edc) popup_note2_wait_window_g1

0x8582,	// (0x00057be3) popup_note2_wait_window_g2_ParamLimits

0x8582,	// (0x00057be3) popup_note2_wait_window_g2

0x5893,	// (0x00054ef4) popup_note2_wait_window_g3_ParamLimits

0x5893,	// (0x00054ef4) popup_note2_wait_window_g3

0x0002,

0xfc78,	// (0x0005f2d9) popup_note2_wait_window_g_ParamLimits

0xfc78,	// (0x0005f2d9) popup_note2_wait_window_g

0x858e,	// (0x00057bef) popup_note2_wait_window_t1_ParamLimits

0x858e,	// (0x00057bef) popup_note2_wait_window_t1

0x85ac,	// (0x00057c0d) popup_note2_wait_window_t2_ParamLimits

0x85ac,	// (0x00057c0d) popup_note2_wait_window_t2

0x85ca,	// (0x00057c2b) popup_note2_wait_window_t3_ParamLimits

0x85ca,	// (0x00057c2b) popup_note2_wait_window_t3

0x85dc,	// (0x00057c3d) popup_note2_wait_window_t4_ParamLimits

0x85dc,	// (0x00057c3d) popup_note2_wait_window_t4

0x0003,

0xfc7f,	// (0x0005f2e0) popup_note2_wait_window_t_ParamLimits

0xfc7f,	// (0x0005f2e0) popup_note2_wait_window_t

0x85ee,	// (0x00057c4f) wait_bar2_pane_ParamLimits

0x85ee,	// (0x00057c4f) wait_bar2_pane

0x8606,	// (0x00057c67) popup_snote2_single_text_window_g1_ParamLimits

0x8606,	// (0x00057c67) popup_snote2_single_text_window_g1

0x862e,	// (0x00057c8f) popup_snote2_single_text_window_t1_ParamLimits

0x862e,	// (0x00057c8f) popup_snote2_single_text_window_t1

0x867a,	// (0x00057cdb) popup_snote2_single_text_window_t2_ParamLimits

0x867a,	// (0x00057cdb) popup_snote2_single_text_window_t2

0x86c6,	// (0x00057d27) popup_snote2_single_text_window_t3_ParamLimits

0x86c6,	// (0x00057d27) popup_snote2_single_text_window_t3

0x8707,	// (0x00057d68) popup_snote2_single_text_window_t4_ParamLimits

0x8707,	// (0x00057d68) popup_snote2_single_text_window_t4

0x873d,	// (0x00057d9e) popup_snote2_single_text_window_t5_ParamLimits

0x873d,	// (0x00057d9e) popup_snote2_single_text_window_t5

0x0004,

0xfc88,	// (0x0005f2e9) popup_snote2_single_text_window_t_ParamLimits

0xfc88,	// (0x0005f2e9) popup_snote2_single_text_window_t

0x8768,	// (0x00057dc9) popup_snote2_single_graphic_window_g1_ParamLimits

0x8768,	// (0x00057dc9) popup_snote2_single_graphic_window_g1

0x8790,	// (0x00057df1) popup_snote2_single_graphic_window_g2_ParamLimits

0x8790,	// (0x00057df1) popup_snote2_single_graphic_window_g2

0x0001,

0xfc93,	// (0x0005f2f4) popup_snote2_single_graphic_window_g_ParamLimits

0xfc93,	// (0x0005f2f4) popup_snote2_single_graphic_window_g

0x87b8,	// (0x00057e19) popup_snote2_single_graphic_window_t1_ParamLimits

0x87b8,	// (0x00057e19) popup_snote2_single_graphic_window_t1

0x8804,	// (0x00057e65) popup_snote2_single_graphic_window_t2_ParamLimits

0x8804,	// (0x00057e65) popup_snote2_single_graphic_window_t2

0x86c6,	// (0x00057d27) popup_snote2_single_graphic_window_t3_ParamLimits

0x86c6,	// (0x00057d27) popup_snote2_single_graphic_window_t3

0x8707,	// (0x00057d68) popup_snote2_single_graphic_window_t4_ParamLimits

0x8707,	// (0x00057d68) popup_snote2_single_graphic_window_t4

0x873d,	// (0x00057d9e) popup_snote2_single_graphic_window_t5_ParamLimits

0x873d,	// (0x00057d9e) popup_snote2_single_graphic_window_t5

0x0004,

0xfc98,	// (0x0005f2f9) popup_snote2_single_graphic_window_t_ParamLimits

0xfc98,	// (0x0005f2f9) popup_snote2_single_graphic_window_t

0x7237,	// (0x00056898) clock_nsta_pane_cp2_t1

0x7237,	// (0x00056898) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x0005f10d) clock_nsta_pane_cp2_t

0x069f,	// (0x0004fd00) form_field_data_wide_pane_g1_ParamLimits

0x3ca4,	// (0x00053305) form_field_data_wide_pane_g2_ParamLimits

0x3ca4,	// (0x00053305) form_field_data_wide_pane_g2

0x3d17,	// (0x00053378) form_field_data_wide_pane_g3_ParamLimits

0x3d17,	// (0x00053378) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0005ece1) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0005ece1) form_field_data_wide_pane_g

0xde3d,	// (0x0005d49e) grid_touch_3_pane_ParamLimits

0xde3d,	// (0x0005d49e) grid_touch_3_pane

0xe309,	// (0x0005d96a) cell_touch_3_pane_ParamLimits

0xe309,	// (0x0005d96a) cell_touch_3_pane

0x7785,	// (0x00056de6) cell_touch_3_pane_g1

0x7785,	// (0x00056de6) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x0005f192) cell_touch_3_pane_g

0x37cd,	// (0x00052e2e) cont_query_data_pane

0x37d5,	// (0x00052e36) cont_query_data_pane_cp1

0x887e,	// (0x00057edf) button_value_adjust_pane_cp7

0x8886,	// (0x00057ee7) query_popup_pane_cp3

0x446f,	// (0x00053ad0) bg_popup_sub_pane_cp22_ParamLimits

0x0a63,	// (0x000500c4) navi_navi_volume_pane_cp2

0x0a7e,	// (0x000500df) popup_side_volume_key_window_g2

0x0a8d,	// (0x000500ee) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0005ed77) popup_side_volume_key_window_g

0x0aaa,	// (0x0005010b) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0005ed7e) popup_side_volume_key_window_t

0x4726,	// (0x00053d87) popup_side_volume_key_window_ParamLimits

0xb817,	// (0x0005ae78) list_double_graphic_pane_g4_ParamLimits

0xb817,	// (0x0005ae78) list_double_graphic_pane_g4

0xdc9e,	// (0x0005d2ff) list_single_2heading_msg_pane_ParamLimits

0xdc9e,	// (0x0005d2ff) list_single_2heading_msg_pane

0xd843,	// (0x0005cea4) list_single_2heading_msg_pane_g1_ParamLimits

0xd843,	// (0x0005cea4) list_single_2heading_msg_pane_g1

0xd84f,	// (0x0005ceb0) list_single_2heading_msg_pane_g2_ParamLimits

0xd84f,	// (0x0005ceb0) list_single_2heading_msg_pane_g2

0xd862,	// (0x0005cec3) list_single_2heading_msg_pane_g3_ParamLimits

0xd862,	// (0x0005cec3) list_single_2heading_msg_pane_g3

0xd86e,	// (0x0005cecf) list_single_2heading_msg_pane_g4_ParamLimits

0xd86e,	// (0x0005cecf) list_single_2heading_msg_pane_g4

0x0003,

0xfca3,	// (0x0005f304) list_single_2heading_msg_pane_g_ParamLimits

0xfca3,	// (0x0005f304) list_single_2heading_msg_pane_g

0xc6c1,	// (0x0005bd22) list_single_2heading_msg_pane_t1_ParamLimits

0xc6c1,	// (0x0005bd22) list_single_2heading_msg_pane_t1

0xc6e9,	// (0x0005bd4a) list_single_2heading_msg_pane_t2_ParamLimits

0xc6e9,	// (0x0005bd4a) list_single_2heading_msg_pane_t2

0xc754,	// (0x0005bdb5) list_single_2heading_msg_pane_t3_ParamLimits

0xc754,	// (0x0005bdb5) list_single_2heading_msg_pane_t3

0x3609,	// (0x00052c6a) list_single_2heading_msg_pane_t4_ParamLimits

0x3609,	// (0x00052c6a) list_single_2heading_msg_pane_t4

0x0003,

0xfcac,	// (0x0005f30d) list_single_2heading_msg_pane_t_ParamLimits

0xfcac,	// (0x0005f30d) list_single_2heading_msg_pane_t

0x2bf8,	// (0x00052259) title_pane_g4_ParamLimits

0x2bf8,	// (0x00052259) title_pane_g4

0x0872,	// (0x0004fed3) title_pane_stacon_g3_ParamLimits

0x0872,	// (0x0004fed3) title_pane_stacon_g3

0x83ac,	// (0x00057a0d) list_single_2graphic_im_pane_g4_ParamLimits

0x83ac,	// (0x00057a0d) list_single_2graphic_im_pane_g4

0x62cc,	// (0x0005592d) popup_side_volume_key_window_cp

0x6a87,	// (0x000560e8) main_idle_act2_pane_t1

0x14a7,	// (0x00050b08) toolbar_button_pane_g10

0xd0e9,	// (0x0005c74a) popup_toolbar_window_cp1

0x7228,	// (0x00056889) clock_nsta_pane_cp_t1

0x7228,	// (0x00056889) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x0005f108) clock_nsta_pane_cp_t

0x0a63,	// (0x000500c4) navi_navi_volume_pane_cp2_ParamLimits

0x0a72,	// (0x000500d3) popup_side_volume_key_window_g1_ParamLimits

0x0a7e,	// (0x000500df) popup_side_volume_key_window_g2_ParamLimits

0x0a8d,	// (0x000500ee) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0005ed77) popup_side_volume_key_window_g_ParamLimits

0x1b96,	// (0x000511f7) fep_hwr_aid_pane

0x1c3d,	// (0x0005129e) bg_fep_hwr_top_pane_g4_ParamLimits

0x77e1,	// (0x00056e42) fep_hwr_top_pane_g1_ParamLimits

0x77f3,	// (0x00056e54) fep_hwr_top_pane_g2_ParamLimits

0x1c5d,	// (0x000512be) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x0005f15d) fep_hwr_top_pane_g_ParamLimits

0x1c72,	// (0x000512d3) fep_hwr_top_text_pane_ParamLimits

0x608f,	// (0x000556f0) aid_touch_tab_arrow_arrow_2

0x6098,	// (0x000556f9) aid_touch_tab_arrow_left_2

0x1baa,	// (0x0005120b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1be1,	// (0x00051242) fep_hwr_prediction_pane

0x7953,	// (0x00056fb4) fep_vkb_prediction_pane

0xe0ef,	// (0x0005d750) fep_vkb_side_pane_g3_ParamLimits

0xe0ef,	// (0x0005d750) fep_vkb_side_pane_g3

0x1ded,	// (0x0005144e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1e59,	// (0x000514ba) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1e66,	// (0x000514c7) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbab,	// (0x0005f20c) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1f95,	// (0x000515f6) fep_hwr_prediction_pane_g1

0x1f9f,	// (0x00051600) fep_hwr_prediction_pane_g2

0x1fa7,	// (0x00051608) fep_hwr_prediction_pane_g3

0x1faf,	// (0x00051610) fep_hwr_prediction_pane_g4

0x0003,

0xfcb5,	// (0x0005f316) fep_hwr_prediction_pane_g

0x88ab,	// (0x00057f0c) fep_vkb_prediction_pane_g1

0x88b5,	// (0x00057f16) fep_vkb_prediction_pane_g2

0x88bd,	// (0x00057f1e) fep_vkb_prediction_pane_g3

0x88c5,	// (0x00057f26) fep_vkb_prediction_pane_g4

0x0003,

0xfcbe,	// (0x0005f31f) fep_vkb_prediction_pane_g

0x1884,	// (0x00050ee5) slider_set_pane_g3

0x1898,	// (0x00050ef9) slider_set_pane_g4

0x18b0,	// (0x00050f11) slider_set_pane_g5

0x1884,	// (0x00050ee5) slider_set_pane_g6

0x18c6,	// (0x00050f27) slider_set_pane_g7

0x6721,	// (0x00055d82) slider_form_pane_g3

0x672a,	// (0x00055d8b) slider_form_pane_g4

0x6732,	// (0x00055d93) slider_form_pane_g5

0x6721,	// (0x00055d82) slider_form_pane_g6

0xdc70,	// (0x0005d2d1) slider_form_pane_g7

0x6d31,	// (0x00056392) slider_set_pane_vc_g3

0x6d3a,	// (0x0005639b) slider_set_pane_vc_g4

0x6d43,	// (0x000563a4) slider_set_pane_vc_g5

0x6d31,	// (0x00056392) slider_set_pane_vc_g6

0x6d4c,	// (0x000563ad) slider_set_pane_vc_g7

0x6f0c,	// (0x0005656d) slider_form_pane_vc_g1

0x6f15,	// (0x00056576) slider_form_pane_vc_g2

0x6f1e,	// (0x0005657f) slider_form_pane_vc_g3

0x6f0c,	// (0x0005656d) slider_form_pane_vc_g4

0x6f27,	// (0x00056588) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x0005f0da) slider_form_pane_vc_g

0xf43b,	// (0x0005ea9c) main_idle_act3_pane

0x88cd,	// (0x00057f2e) ai3_links_pane

0xe351,	// (0x0005d9b2) popup_ai3_data_window_ParamLimits

0xe351,	// (0x0005d9b2) popup_ai3_data_window

0x2bb0,	// (0x00052211) grid_ai3_links_pane

0xe36b,	// (0x0005d9cc) cell_ai3_links_pane_ParamLimits

0xe36b,	// (0x0005d9cc) cell_ai3_links_pane

0x8908,	// (0x00057f69) bg_popup_sub_pane_cp11

0x8915,	// (0x00057f76) cell_ai3_links_pane_g1

0x2bb0,	// (0x00052211) bg_popup_sub_pane_cp12

0x893a,	// (0x00057f9b) heading_ai3_data_pane

0x8942,	// (0x00057fa3) list_ai3_gene_pane

0x894e,	// (0x00057faf) popup_ai3_data_window_g1

0x8956,	// (0x00057fb7) heading_ai3_data_pane_g1

0x895e,	// (0x00057fbf) heading_ai3_data_pane_t1

0x896c,	// (0x00057fcd) list_double_ai3_gene_pane_ParamLimits

0x896c,	// (0x00057fcd) list_double_ai3_gene_pane

0x8979,	// (0x00057fda) list_single_ai3_gene_pane_ParamLimits

0x8979,	// (0x00057fda) list_single_ai3_gene_pane

0x774a,	// (0x00056dab) list_highlight_pane_cp7_ParamLimits

0x774a,	// (0x00056dab) list_highlight_pane_cp7

0x8986,	// (0x00057fe7) list_single_a13_gene_pane_t1_ParamLimits

0x8986,	// (0x00057fe7) list_single_a13_gene_pane_t1

0x899d,	// (0x00057ffe) list_single_ai3_gene_pane_g1

0x89a6,	// (0x00058007) list_single_ai3_gene_pane_g2

0x0001,

0xfcc7,	// (0x0005f328) list_single_ai3_gene_pane_g

0x89ae,	// (0x0005800f) list_double_ai3_gene_pane_g1_ParamLimits

0x89ae,	// (0x0005800f) list_double_ai3_gene_pane_g1

0x89ba,	// (0x0005801b) list_double_ai3_gene_pane_t1_ParamLimits

0x89ba,	// (0x0005801b) list_double_ai3_gene_pane_t1

0x89d6,	// (0x00058037) list_double_ai3_gene_pane_t2_ParamLimits

0x89d6,	// (0x00058037) list_double_ai3_gene_pane_t2

0x89ec,	// (0x0005804d) list_double_ai3_gene_pane_t3_ParamLimits

0x89ec,	// (0x0005804d) list_double_ai3_gene_pane_t3

0x0002,

0xfccc,	// (0x0005f32d) list_double_ai3_gene_pane_t_ParamLimits

0xfccc,	// (0x0005f32d) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3546,	// (0x00052ba7) aid_size_min_col_2

0xe33b,	// (0x0005d99c) aid_size_min_msg_ParamLimits

0xe33b,	// (0x0005d99c) aid_size_min_msg

0xe103,	// (0x0005d764) fep_vkb_top_text_pane_g2_ParamLimits

0xe103,	// (0x0005d764) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x0005f18d) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x0005f18d) fep_vkb_top_text_pane_g

0xf43b,	// (0x0005ea9c) main_hc_apps_shell_pane

0x8a09,	// (0x0005806a) grid_hc_apps_pane_ParamLimits

0x8a09,	// (0x0005806a) grid_hc_apps_pane

0x8a18,	// (0x00058079) list_hc_apps_pane

0x8a20,	// (0x00058081) scroll_pane_cp37_ParamLimits

0x8a20,	// (0x00058081) scroll_pane_cp37

0xe385,	// (0x0005d9e6) cell_hc_apps_pane_ParamLimits

0xe385,	// (0x0005d9e6) cell_hc_apps_pane

0xe478,	// (0x0005dad9) cell_hc_apps_pane_g1_ParamLimits

0xe478,	// (0x0005dad9) cell_hc_apps_pane_g1

0x8b0b,	// (0x0005816c) cell_hc_apps_pane_g2_ParamLimits

0x8b0b,	// (0x0005816c) cell_hc_apps_pane_g2

0x8b27,	// (0x00058188) cell_hc_apps_pane_g3_ParamLimits

0x8b27,	// (0x00058188) cell_hc_apps_pane_g3

0x0002,

0xfcd3,	// (0x0005f334) cell_hc_apps_pane_g_ParamLimits

0xfcd3,	// (0x0005f334) cell_hc_apps_pane_g

0xe4a5,	// (0x0005db06) cell_hc_apps_pane_t1_ParamLimits

0xe4a5,	// (0x0005db06) cell_hc_apps_pane_t1

0x36f1,	// (0x00052d52) grid_highlight_pane_cp10_ParamLimits

0x36f1,	// (0x00052d52) grid_highlight_pane_cp10

0xe4e3,	// (0x0005db44) list_single_hc_apps_pane_ParamLimits

0xe4e3,	// (0x0005db44) list_single_hc_apps_pane

0xe510,	// (0x0005db71) list_single_hc_apps_pane_g1

0xd886,	// (0x0005cee7) list_single_hc_apps_pane_g2

0x0001,

0xfcda,	// (0x0005f33b) list_single_hc_apps_pane_g

0xd89f,	// (0x0005cf00) list_single_hc_apps_pane_g2_copy1

0x3663,	// (0x00052cc4) list_single_hc_apps_pane_t1

0x2ca4,	// (0x00052305) bg_set_opt_pane_cp_ParamLimits

0x00c7,	// (0x0004f728) setting_slider_pane_t1_ParamLimits

0x00e0,	// (0x0004f741) setting_slider_pane_t2_ParamLimits

0x00fa,	// (0x0004f75b) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0005ebbf) setting_slider_pane_t_ParamLimits

0x0112,	// (0x0004f773) slider_set_pane_ParamLimits

0x0d7a,	// (0x000503db) control_pane_g5_ParamLimits

0x0d7a,	// (0x000503db) control_pane_g5

0x6570,	// (0x00055bd1) slider_set_pane_g1_ParamLimits

0x1878,	// (0x00050ed9) slider_set_pane_g2_ParamLimits

0x1884,	// (0x00050ee5) slider_set_pane_g3_ParamLimits

0x1898,	// (0x00050ef9) slider_set_pane_g4_ParamLimits

0x18b0,	// (0x00050f11) slider_set_pane_g5_ParamLimits

0x1884,	// (0x00050ee5) slider_set_pane_g6_ParamLimits

0x18c6,	// (0x00050f27) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0005efc5) slider_set_pane_g_ParamLimits

0x4812,	// (0x00053e73) navi_icon_text_pane_ParamLimits

0xd47e,	// (0x0005cadf) aid_fill_nsta_2_ParamLimits

0xd4b5,	// (0x0005cb16) aid_touch_tab_arrow_left_ParamLimits

0xd4cb,	// (0x0005cb2c) aid_touch_tab_arrow_right_ParamLimits

0xd566,	// (0x0005cbc7) clock_nsta_pane_ParamLimits

0x6071,	// (0x000556d2) navi_icon_pane_g1_ParamLimits

0x607d,	// (0x000556de) navi_text_pane_t1_ParamLimits

0x7334,	// (0x00056995) navi_icon_text_pane_g1_ParamLimits

0x7340,	// (0x000569a1) navi_icon_text_pane_t1_ParamLimits

0xe510,	// (0x0005db71) list_single_hc_apps_pane_g1_ParamLimits

0xd886,	// (0x0005cee7) list_single_hc_apps_pane_g2_ParamLimits

0xfcda,	// (0x0005f33b) list_single_hc_apps_pane_g_ParamLimits

0xd89f,	// (0x0005cf00) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x3663,	// (0x00052cc4) list_single_hc_apps_pane_t1_ParamLimits

0xb5bb,	// (0x0005ac1c) popup_toolbar2_fixed_window_ParamLimits

0xb5bb,	// (0x0005ac1c) popup_toolbar2_fixed_window

0xc4e4,	// (0x0005bb45) popup_toolbar2_float_window

0x2bb0,	// (0x00052211) bg_popup_sub_pane_cp27

0x8bfe,	// (0x0005825f) grid_toolbar2_float_pane

0x2bb0,	// (0x00052211) bg_popup_sub_pane_cp26

0x8bfe,	// (0x0005825f) grid_toolbar2_fixed_pane

0xe529,	// (0x0005db8a) cell_toolbar2_fixed_pane_ParamLimits

0xe529,	// (0x0005db8a) cell_toolbar2_fixed_pane

0xe543,	// (0x0005dba4) cell_toolbar2_fixed_pane_g1

0x8c1f,	// (0x00058280) toolbar2_fixed_button_pane

0x51e6,	// (0x00054847) toolbar2_fixed_button_pane_g1

0x51f6,	// (0x00054857) toolbar2_fixed_button_pane_g2

0x51ee,	// (0x0005484f) toolbar2_fixed_button_pane_g3

0x5206,	// (0x00054867) toolbar2_fixed_button_pane_g4

0x51fe,	// (0x0005485f) toolbar2_fixed_button_pane_g5

0x520e,	// (0x0005486f) toolbar2_fixed_button_pane_g6

0x5216,	// (0x00054877) toolbar2_fixed_button_pane_g7

0x5226,	// (0x00054887) toolbar2_fixed_button_pane_g8

0x521e,	// (0x0005487f) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0005eec7) toolbar2_fixed_button_pane_g

0x8c27,	// (0x00058288) cell_toolbar2_float_pane_ParamLimits

0x8c27,	// (0x00058288) cell_toolbar2_float_pane

0x8c38,	// (0x00058299) cell_toolbar2_float_pane_g1

0x8c1f,	// (0x00058280) toolbar2_fixed_button_pane_cp

0xdfdd,	// (0x0005d63e) fep_vkb_accented_list_pane_ParamLimits

0xdfdd,	// (0x0005d63e) fep_vkb_accented_list_pane

0x1dcd,	// (0x0005142e) bg_popup_fep_shadow_pane_g9

0x4992,	// (0x00053ff3) bg_popup_fep_shadow_pane_cp3

0x3e51,	// (0x000534b2) list_accented_list_pane

0x8c41,	// (0x000582a2) list_single_accented_list_pane_ParamLimits

0x8c41,	// (0x000582a2) list_single_accented_list_pane

0x4992,	// (0x00053ff3) list_highlight_pane_cp10

0x8c52,	// (0x000582b3) list_single_accented_list_pane_t1

0xc40e,	// (0x0005ba6f) popup_slider_window_ParamLimits

0xc40e,	// (0x0005ba6f) popup_slider_window

0x888e,	// (0x00057eef) aid_indentation_list_msg

0xe63a,	// (0x0005dc9b) bg_popup_window_pane_cp19

0x8d7e,	// (0x000583df) popup_slider_window_g1

0x8d9a,	// (0x000583fb) popup_slider_window_g2

0x8db6,	// (0x00058417) popup_slider_window_g3

0x0005,

0xfcdf,	// (0x0005f340) popup_slider_window_g

0x8e1c,	// (0x0005847d) popup_slider_window_t1

0x8e90,	// (0x000584f1) small_volume_slider_vertical_pane

0x7785,	// (0x00056de6) small_volume_slider_vertical_pane_g1

0x7785,	// (0x00056de6) small_volume_slider_vertical_pane_g2

0x8eac,	// (0x0005850d) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf1,	// (0x0005f352) small_volume_slider_vertical_pane_g

0xb529,	// (0x0005ab8a) area_side_right_pane_ParamLimits

0xb529,	// (0x0005ab8a) area_side_right_pane

0xc7c2,	// (0x0005be23) aid_size_side_button_ParamLimits

0xc7c2,	// (0x0005be23) aid_size_side_button

0xc7db,	// (0x0005be3c) grid_sctrl_middle_pane_ParamLimits

0xc7db,	// (0x0005be3c) grid_sctrl_middle_pane

0x1fea,	// (0x0005164b) sctrl_sk_bottom_pane

0x1ffb,	// (0x0005165c) sctrl_sk_top_pane

0x200d,	// (0x0005166e) aid_touch_sctrl_top

0x201a,	// (0x0005167b) bg_sctrl_sk_pane_ParamLimits

0x201a,	// (0x0005167b) bg_sctrl_sk_pane

0x2028,	// (0x00051689) sctrl_sk_top_pane_g1

0x2035,	// (0x00051696) sctrl_sk_top_pane_t1

0x200d,	// (0x0005166e) aid_touch_sctrl_bottom

0x201a,	// (0x0005167b) bg_sctrl_sk_pane_cp_ParamLimits

0x201a,	// (0x0005167b) bg_sctrl_sk_pane_cp

0x2050,	// (0x000516b1) sctrl_sk_bottom_pane_g1

0x2035,	// (0x00051696) sctrl_sk_bottom_pane_t1

0xc7f5,	// (0x0005be56) cell_sctrl_middle_pane_ParamLimits

0xc7f5,	// (0x0005be56) cell_sctrl_middle_pane

0xc806,	// (0x0005be67) aid_touch_sctrl_middle_ParamLimits

0xc806,	// (0x0005be67) aid_touch_sctrl_middle

0xc813,	// (0x0005be74) bg_sctrl_middle_pane_ParamLimits

0xc813,	// (0x0005be74) bg_sctrl_middle_pane

0x26bd,	// (0x00051d1e) cell_sctrl_middle_pane_g1_ParamLimits

0x26bd,	// (0x00051d1e) cell_sctrl_middle_pane_g1

0xc821,	// (0x0005be82) cell_sctrl_middle_pane_g2_ParamLimits

0xc821,	// (0x0005be82) cell_sctrl_middle_pane_g2

0x0001,

0xfcfd,	// (0x0005f35e) cell_sctrl_middle_pane_g_ParamLimits

0xfcfd,	// (0x0005f35e) cell_sctrl_middle_pane_g

0x51e6,	// (0x00054847) bg_sctrl_middle_pane_g1

0x51ee,	// (0x0005484f) bg_sctrl_middle_pane_g2

0x51f6,	// (0x00054857) bg_sctrl_middle_pane_g3

0x51fe,	// (0x0005485f) bg_sctrl_middle_pane_g4

0x5206,	// (0x00054867) bg_sctrl_middle_pane_g5

0x520e,	// (0x0005486f) bg_sctrl_middle_pane_g6

0x5216,	// (0x00054877) bg_sctrl_middle_pane_g7

0x521e,	// (0x0005487f) bg_sctrl_middle_pane_g8

0x0007,

0xfd02,	// (0x0005f363) bg_sctrl_middle_pane_g

0x5226,	// (0x00054887) bg_sctrl_middle_pane_g8_copy1

0x51e6,	// (0x00054847) bg_sctrl_sk_pane_g1

0x51f6,	// (0x00054857) bg_sctrl_sk_pane_g2

0x51ee,	// (0x0005484f) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0005eec7) bg_sctrl_sk_pane_g

0x3c2c,	// (0x0005328d) aid_size_touch_scroll_bar

0x5206,	// (0x00054867) bg_sctrl_sk_pane_g4

0x51fe,	// (0x0005485f) bg_sctrl_sk_pane_g5

0x520e,	// (0x0005486f) bg_sctrl_sk_pane_g6

0x5216,	// (0x00054877) bg_sctrl_sk_pane_g7

0x5226,	// (0x00054887) bg_sctrl_sk_pane_g8

0x521e,	// (0x0005487f) bg_sctrl_sk_pane_g9

0x0f42,	// (0x000505a3) popup_fep_china_hwr2_fs_candidate_window

0xbf28,	// (0x0005b589) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbf28,	// (0x0005b589) popup_fep_china_hwr2_fs_control_window

0x1ded,	// (0x0005144e) sctrl_sk_top_pane_g2

0x0001,

0xfcf8,	// (0x0005f359) sctrl_sk_top_pane_g

0xe6f2,	// (0x0005dd53) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe6f2,	// (0x0005dd53) aid_fep_china_hwr2_fs_cell

0xe706,	// (0x0005dd67) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe706,	// (0x0005dd67) bg_popup_fep_shadow_pane_cp4

0xe71d,	// (0x0005dd7e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe71d,	// (0x0005dd7e) bg_popup_fep_shadow_pane_cp5

0xe72f,	// (0x0005dd90) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe72f,	// (0x0005dd90) popup_fep_china_hwr2_fs_control_bar_grid

0xe743,	// (0x0005dda4) popup_fep_china_hwr2_fs_control_funtion_grid

0x8f08,	// (0x00058569) aid_fep_china_hwr2_fs_candi_cell

0x2bb0,	// (0x00052211) bg_popup_fep_shadow_pane_cp6

0x8f12,	// (0x00058573) popup_fep_china_hwr2_fs_candidate_grid

0xe74b,	// (0x0005ddac) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe74b,	// (0x0005ddac) cell_fep_china_hwr2_fs_funtion_grid

0x7785,	// (0x00056de6) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8f34,	// (0x00058595) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8f34,	// (0x00058595) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8f42,	// (0x000585a3) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8f42,	// (0x000585a3) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd13,	// (0x0005f374) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd13,	// (0x0005f374) cell_fep_china_hwr2_fs_funtion_grid_g

0xe763,	// (0x0005ddc4) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe763,	// (0x0005ddc4) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe778,	// (0x0005ddd9) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe778,	// (0x0005ddd9) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd18,	// (0x0005f379) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd18,	// (0x0005f379) cell_fep_china_hwr2_fs_funtion_grid_t

0x8f89,	// (0x000585ea) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8f91,	// (0x000585f2) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8f99,	// (0x000585fa) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1d,	// (0x0005f37e) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8fa1,	// (0x00058602) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8fa1,	// (0x00058602) cell_fep_china_hwr2_fs_candidate_grid

0x8fba,	// (0x0005861b) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8fc2,	// (0x00058623) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7785,	// (0x00056de6) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7785,	// (0x00056de6) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x0005f192) cell_fep_china_hwr2_fs_candidate_grid_g

0x8fca,	// (0x0005862b) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4ddc,	// (0x0005443d) clock_nsta_pane_cp_24_ParamLimits

0x4ddc,	// (0x0005443d) clock_nsta_pane_cp_24

0x4e5a,	// (0x000544bb) indicator_nsta_pane_cp_24_ParamLimits

0x4e5a,	// (0x000544bb) indicator_nsta_pane_cp_24

0x5eed,	// (0x0005554e) heading_pane_g1

0x0001,

0xf8cb,	// (0x0005ef2c) heading_pane_g

0x68d0,	// (0x00055f31) grid_sct_catagory_button_pane

0x6900,	// (0x00055f61) scroll_pane_cp5_ParamLimits

0x7382,	// (0x000569e3) button_value_adjust_pane_cp5_ParamLimits

0x7382,	// (0x000569e3) button_value_adjust_pane_cp5

0x7461,	// (0x00056ac2) form2_midp_time_pane_ParamLimits

0x8fd8,	// (0x00058639) cell_sct_catagory_button_pane_ParamLimits

0x8fd8,	// (0x00058639) cell_sct_catagory_button_pane

0x774a,	// (0x00056dab) bg_button_pane_cp01_ParamLimits

0x774a,	// (0x00056dab) bg_button_pane_cp01

0x7785,	// (0x00056de6) cell_sct_catagory_button_pane_g1

0xc487,	// (0x0005bae8) popup_tb_extension_window

0xe794,	// (0x0005ddf5) aid_size_cell_ext_ParamLimits

0xe794,	// (0x0005ddf5) aid_size_cell_ext

0x3a6e,	// (0x000530cf) bg_tb_trans_pane_cp1_ParamLimits

0x3a6e,	// (0x000530cf) bg_tb_trans_pane_cp1

0xe7ba,	// (0x0005de1b) grid_tb_ext_pane_ParamLimits

0xe7ba,	// (0x0005de1b) grid_tb_ext_pane

0xe7f5,	// (0x0005de56) cell_tb_ext_pane_ParamLimits

0xe7f5,	// (0x0005de56) cell_tb_ext_pane

0xe81d,	// (0x0005de7e) cell_tb_ext_pane_g1_ParamLimits

0xe81d,	// (0x0005de7e) cell_tb_ext_pane_g1

0x906c,	// (0x000586cd) cell_tb_ext_pane_t1

0x36f1,	// (0x00052d52) list_highlight_pane_cp11_ParamLimits

0x36f1,	// (0x00052d52) list_highlight_pane_cp11

0xb5d0,	// (0x0005ac31) popup_uni_indicator_window_ParamLimits

0xb5d0,	// (0x0005ac31) popup_uni_indicator_window

0x3d09,	// (0x0005336a) bg_popup_sub_pane_cp14

0x9087,	// (0x000586e8) list_uniindi_pane

0x9093,	// (0x000586f4) uniindi_top_pane

0x36f1,	// (0x00052d52) bg_uniindi_top_pane

0x90b2,	// (0x00058713) uniindi_top_pane_g1

0x90c8,	// (0x00058729) uniindi_top_pane_g2

0x0003,

0xfd24,	// (0x0005f385) uniindi_top_pane_g

0x90f2,	// (0x00058753) uniindi_top_pane_t1

0x911c,	// (0x0005877d) list_single_uniindi_pane_ParamLimits

0x911c,	// (0x0005877d) list_single_uniindi_pane

0x7785,	// (0x00056de6) bg_uniindi_top_pane_g1

0x912f,	// (0x00058790) list_single_uniindi_pane_g1

0x9142,	// (0x000587a3) list_single_uniindi_pane_t1

0xf43b,	// (0x0005ea9c) control_bg_pane

0x9167,	// (0x000587c8) bg_sctrl_sk_pane_cp1

0x9170,	// (0x000587d1) bg_sctrl_sk_pane_cp2

0x9179,	// (0x000587da) control_bg_pane_g1

0x9182,	// (0x000587e3) control_bg_pane_g2

0x0001,

0xfd2d,	// (0x0005f38e) control_bg_pane_g

0x71dc,	// (0x0005683d) cell_indicator_nsta_pane_g1_ParamLimits

0xde6a,	// (0x0005d4cb) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x0005f0f6) cell_indicator_nsta_pane_g_ParamLimits

0x3323,	// (0x00052984) form2_midp_time_pane_t1_ParamLimits

0x1b88,	// (0x000511e9) main_idle_act4_pane_ParamLimits

0x1b88,	// (0x000511e9) main_idle_act4_pane

0xc487,	// (0x0005bae8) popup_tb_extension_window_ParamLimits

0xe7dc,	// (0x0005de3d) tb_ext_find_pane_ParamLimits

0xe7dc,	// (0x0005de3d) tb_ext_find_pane

0x918b,	// (0x000587ec) ai_gene_pane_1_cp1

0x4ad9,	// (0x0005413a) ai_gene_pane_2_cp1

0x9193,	// (0x000587f4) list_single_idle_plugin_calendar_pane

0x919c,	// (0x000587fd) list_single_idle_plugin_notification_pane

0x91a5,	// (0x00058806) list_single_idle_plugin_player_pane

0xe83a,	// (0x0005de9b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe83a,	// (0x0005de9b) list_single_idle_plugin_shortcut_pane

0xe862,	// (0x0005dec3) main_idle_act4_pane_t1

0xe878,	// (0x0005ded9) main_idle_act4_pane_t2

0x0001,

0xfd32,	// (0x0005f393) main_idle_act4_pane_t

0xe88e,	// (0x0005deef) middle_sk_idle_act4_pane_ParamLimits

0xe88e,	// (0x0005deef) middle_sk_idle_act4_pane

0xe8aa,	// (0x0005df0b) popup_clock_digital_analogue_window_cp2

0xe8d2,	// (0x0005df33) shortcut_wheel_idle_act4_pane_ParamLimits

0xe8d2,	// (0x0005df33) shortcut_wheel_idle_act4_pane

0x7785,	// (0x00056de6) shortcut_wheel_idle_act4_pane_g1

0x7785,	// (0x00056de6) shortcut_wheel_idle_act4_pane_g2

0x7785,	// (0x00056de6) shortcut_wheel_idle_act4_pane_g3

0x7785,	// (0x00056de6) shortcut_wheel_idle_act4_pane_g4

0x7785,	// (0x00056de6) shortcut_wheel_idle_act4_pane_g5

0x9238,	// (0x00058899) shortcut_wheel_idle_act4_pane_g6

0x9240,	// (0x000588a1) shortcut_wheel_idle_act4_pane_g7

0x9248,	// (0x000588a9) shortcut_wheel_idle_act4_pane_g8

0x9250,	// (0x000588b1) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd37,	// (0x0005f398) shortcut_wheel_idle_act4_pane_g

0xe443,	// (0x0005daa4) middle_sk_idle_act4_pane_g1_ParamLimits

0xe443,	// (0x0005daa4) middle_sk_idle_act4_pane_g1

0xe94f,	// (0x0005dfb0) middle_sk_idle_act4_pane_g2_ParamLimits

0xe94f,	// (0x0005dfb0) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5a,	// (0x0005f3bb) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5a,	// (0x0005f3bb) middle_sk_idle_act4_pane_g

0xe967,	// (0x0005dfc8) middle_sk_idle_act4_pane_t1_ParamLimits

0xe967,	// (0x0005dfc8) middle_sk_idle_act4_pane_t1

0xe996,	// (0x0005dff7) grid_ai_shortcut_pane_ParamLimits

0xe996,	// (0x0005dff7) grid_ai_shortcut_pane

0xe9b3,	// (0x0005e014) list_highlight_pane_cp16_ParamLimits

0xe9b3,	// (0x0005e014) list_highlight_pane_cp16

0xe9c0,	// (0x0005e021) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe9c0,	// (0x0005e021) list_single_idle_plugin_shortcut_pane_g1

0xe9cc,	// (0x0005e02d) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe9cc,	// (0x0005e02d) list_single_idle_plugin_shortcut_pane_g2

0xe9e8,	// (0x0005e049) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe9e8,	// (0x0005e049) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5f,	// (0x0005f3c0) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5f,	// (0x0005f3c0) list_single_idle_plugin_shortcut_pane_g

0xe9fd,	// (0x0005e05e) cell_ai_shortcut_pane_ParamLimits

0xe9fd,	// (0x0005e05e) cell_ai_shortcut_pane

0xea13,	// (0x0005e074) cell_ai_shortcut_pane_g1_ParamLimits

0xea13,	// (0x0005e074) cell_ai_shortcut_pane_g1

0x918b,	// (0x000587ec) ai_gene_pane_1_cp2

0x9380,	// (0x000589e1) ai_gene_pane_2_cp2

0x9388,	// (0x000589e9) list_highlight_pane_cp15

0x9391,	// (0x000589f2) list_single_idle_plugin_calendar_pane_g1

0x9388,	// (0x000589e9) list_highlight_pane_cp17

0x9399,	// (0x000589fa) list_single_idle_plugin_calendar_pane_g1_copy1

0x93a1,	// (0x00058a02) list_single_idle_plugin_player_pane_g1

0x6b29,	// (0x0005618a) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd66,	// (0x0005f3c7) list_single_idle_plugin_player_pane_g

0x93a9,	// (0x00058a0a) list_single_idle_plugin_player_pane_t1

0x93b7,	// (0x00058a18) list_single_idle_plugin_player_pane_t2

0x93c5,	// (0x00058a26) list_single_idle_plugin_player_pane_t3

0x93d3,	// (0x00058a34) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6b,	// (0x0005f3cc) list_single_idle_plugin_player_pane_t

0x93e1,	// (0x00058a42) wait_bar_pane_cp15

0x93e9,	// (0x00058a4a) grid_ai_notification_pane

0x6b29,	// (0x0005618a) list_single_idle_plugin_notification_pane_g1

0xea35,	// (0x0005e096) cell_ai_notification_pane_ParamLimits

0xea35,	// (0x0005e096) cell_ai_notification_pane

0x93ff,	// (0x00058a60) cell_ai_notification_pane_g1

0x9407,	// (0x00058a68) cell_ai_notification_pane_t1

0xea42,	// (0x0005e0a3) tb_ext_find_button_pane

0xea4a,	// (0x0005e0ab) tb_ext_find_pane_g1

0xea52,	// (0x0005e0b3) tb_ext_find_pane_t1

0x437f,	// (0x000539e0) tb_ext_find_button_pane_g1

0x9433,	// (0x00058a94) tb_ext_find_button_pane_g2

0x0001,

0xfd74,	// (0x0005f3d5) tb_ext_find_button_pane_g

0xe862,	// (0x0005dec3) main_idle_act4_pane_t1_ParamLimits

0xe878,	// (0x0005ded9) main_idle_act4_pane_t2_ParamLimits

0xfd32,	// (0x0005f393) main_idle_act4_pane_t_ParamLimits

0xe8aa,	// (0x0005df0b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe8c2,	// (0x0005df23) sat_plugin_idle_act4_pane_ParamLimits

0xe8c2,	// (0x0005df23) sat_plugin_idle_act4_pane

0xea60,	// (0x0005e0c1) sat_plugin_idle_act4_pane_t1_ParamLimits

0xea60,	// (0x0005e0c1) sat_plugin_idle_act4_pane_t1

0xea78,	// (0x0005e0d9) sat_plugin_idle_act4_pane_t2_ParamLimits

0xea78,	// (0x0005e0d9) sat_plugin_idle_act4_pane_t2

0xea90,	// (0x0005e0f1) sat_plugin_idle_act4_pane_t3_ParamLimits

0xea90,	// (0x0005e0f1) sat_plugin_idle_act4_pane_t3

0xeaa8,	// (0x0005e109) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeaa8,	// (0x0005e109) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd79,	// (0x0005f3da) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd79,	// (0x0005f3da) sat_plugin_idle_act4_pane_t

0xf500,	// (0x0005eb61) popup_battery_window_ParamLimits

0xf500,	// (0x0005eb61) popup_battery_window

0x36f1,	// (0x00052d52) bg_popup_sub_pane_cp25_ParamLimits

0x36f1,	// (0x00052d52) bg_popup_sub_pane_cp25

0x9488,	// (0x00058ae9) popup_battery_window_g1_ParamLimits

0x9488,	// (0x00058ae9) popup_battery_window_g1

0x9494,	// (0x00058af5) popup_battery_window_t1_ParamLimits

0x9494,	// (0x00058af5) popup_battery_window_t1

0x94a6,	// (0x00058b07) popup_battery_window_t2_ParamLimits

0x94a6,	// (0x00058b07) popup_battery_window_t2

0x0001,

0xfd82,	// (0x0005f3e3) popup_battery_window_t_ParamLimits

0xfd82,	// (0x0005f3e3) popup_battery_window_t

0xd2e1,	// (0x0005c942) midp_canvas_pane_ParamLimits

0xd33e,	// (0x0005c99f) midp_keypad_pane_ParamLimits

0xd33e,	// (0x0005c99f) midp_keypad_pane

0x4cb6,	// (0x00054317) main_midp_pane_ParamLimits

0x7246,	// (0x000568a7) signal_pane_g2_cp_ParamLimits

0xeac0,	// (0x0005e121) aid_size_cell_midp_keypad_ParamLimits

0xeac0,	// (0x0005e121) aid_size_cell_midp_keypad

0xeade,	// (0x0005e13f) midp_keyp_game_grid_pane_ParamLimits

0xeade,	// (0x0005e13f) midp_keyp_game_grid_pane

0xeb05,	// (0x0005e166) midp_keyp_rocker_pane_ParamLimits

0xeb05,	// (0x0005e166) midp_keyp_rocker_pane

0xeb56,	// (0x0005e1b7) midp_keyp_sk_left_pane_ParamLimits

0xeb56,	// (0x0005e1b7) midp_keyp_sk_left_pane

0xebaa,	// (0x0005e20b) midp_keyp_sk_right_pane_ParamLimits

0xebaa,	// (0x0005e20b) midp_keyp_sk_right_pane

0x2bb0,	// (0x00052211) bg_button_pane_cp03

0xebfe,	// (0x0005e25f) midp_keyp_sk_left_pane_g1

0x2bb0,	// (0x00052211) bg_button_pane_cp04

0xebfe,	// (0x0005e25f) midp_keyp_sk_right_pane_g1

0x7785,	// (0x00056de6) midp_keyp_rocker_pane_g1

0xec07,	// (0x0005e268) keyp_game_cell_pane_ParamLimits

0xec07,	// (0x0005e268) keyp_game_cell_pane

0x2bb0,	// (0x00052211) bg_button_pane_cp02

0xec2b,	// (0x0005e28c) keyp_game_cell_pane_g1

0xb56b,	// (0x0005abcc) popup_fep_vkb2_window_ParamLimits

0xb56b,	// (0x0005abcc) popup_fep_vkb2_window

0xc82d,	// (0x0005be8e) aid_size_cell_vkb2_ParamLimits

0xc82d,	// (0x0005be8e) aid_size_cell_vkb2

0xc863,	// (0x0005bec4) popup_fep_vkb2_window_g1_ParamLimits

0xc863,	// (0x0005bec4) popup_fep_vkb2_window_g1

0xc8b3,	// (0x0005bf14) vkb2_area_bottom_pane_ParamLimits

0xc8b3,	// (0x0005bf14) vkb2_area_bottom_pane

0xc907,	// (0x0005bf68) vkb2_area_keypad_pane_ParamLimits

0xc907,	// (0x0005bf68) vkb2_area_keypad_pane

0xc94f,	// (0x0005bfb0) vkb2_area_top_pane_ParamLimits

0xc94f,	// (0x0005bfb0) vkb2_area_top_pane

0xc9d5,	// (0x0005c036) vkb2_top_entry_pane_ParamLimits

0xc9d5,	// (0x0005c036) vkb2_top_entry_pane

0xca02,	// (0x0005c063) vkb2_top_grid_left_pane_ParamLimits

0xca02,	// (0x0005c063) vkb2_top_grid_left_pane

0xca22,	// (0x0005c083) vkb2_top_grid_right_pane_ParamLimits

0xca22,	// (0x0005c083) vkb2_top_grid_right_pane

0x22bc,	// (0x0005191d) vkb2_cell_keypad_pane_ParamLimits

0x22bc,	// (0x0005191d) vkb2_cell_keypad_pane

0xca68,	// (0x0005c0c9) vkb2_area_bottom_grid_pane_ParamLimits

0xca68,	// (0x0005c0c9) vkb2_area_bottom_grid_pane

0xca92,	// (0x0005c0f3) vkb2_area_bottom_pane_g1_ParamLimits

0xca92,	// (0x0005c0f3) vkb2_area_bottom_pane_g1

0xcab8,	// (0x0005c119) vkb2_area_bottom_pane_g2_ParamLimits

0xcab8,	// (0x0005c119) vkb2_area_bottom_pane_g2

0xcae9,	// (0x0005c14a) vkb2_area_bottom_pane_g3_ParamLimits

0xcae9,	// (0x0005c14a) vkb2_area_bottom_pane_g3

0x0002,

0xfd87,	// (0x0005f3e8) vkb2_area_bottom_pane_g_ParamLimits

0xfd87,	// (0x0005f3e8) vkb2_area_bottom_pane_g

0x2466,	// (0x00051ac7) vkb2_top_cell_left_pane_ParamLimits

0x2466,	// (0x00051ac7) vkb2_top_cell_left_pane

0xec34,	// (0x0005e295) vkb2_top_entry_pane_g1_ParamLimits

0xec34,	// (0x0005e295) vkb2_top_entry_pane_g1

0xec42,	// (0x0005e2a3) vkb2_top_entry_pane_t1_ParamLimits

0xec42,	// (0x0005e2a3) vkb2_top_entry_pane_t1

0x9657,	// (0x00058cb8) vkb2_top_entry_pane_t2_ParamLimits

0x9657,	// (0x00058cb8) vkb2_top_entry_pane_t2

0x9689,	// (0x00058cea) vkb2_top_entry_pane_t3_ParamLimits

0x9689,	// (0x00058cea) vkb2_top_entry_pane_t3

0x0002,

0xfd8e,	// (0x0005f3ef) vkb2_top_entry_pane_t_ParamLimits

0xfd8e,	// (0x0005f3ef) vkb2_top_entry_pane_t

0xcb53,	// (0x0005c1b4) vkb2_top_grid_right_pane_g1_ParamLimits

0xcb53,	// (0x0005c1b4) vkb2_top_grid_right_pane_g1

0x24c9,	// (0x00051b2a) vkb2_top_grid_right_pane_g2_ParamLimits

0x24c9,	// (0x00051b2a) vkb2_top_grid_right_pane_g2

0x24e1,	// (0x00051b42) vkb2_top_grid_right_pane_g3_ParamLimits

0x24e1,	// (0x00051b42) vkb2_top_grid_right_pane_g3

0xcb69,	// (0x0005c1ca) vkb2_top_grid_right_pane_g4_ParamLimits

0xcb69,	// (0x0005c1ca) vkb2_top_grid_right_pane_g4

0x0003,

0xfd95,	// (0x0005f3f6) vkb2_top_grid_right_pane_g_ParamLimits

0xfd95,	// (0x0005f3f6) vkb2_top_grid_right_pane_g

0x250f,	// (0x00051b70) vkb2_top_cell_left_pane_g1

0x2526,	// (0x00051b87) vkb2_cell_keypad_pane_g1_ParamLimits

0x2526,	// (0x00051b87) vkb2_cell_keypad_pane_g1

0x96ad,	// (0x00058d0e) vkb2_cell_keypad_pane_t1_ParamLimits

0x96ad,	// (0x00058d0e) vkb2_cell_keypad_pane_t1

0x2534,	// (0x00051b95) vkb2_cell_bottom_grid_pane_ParamLimits

0x2534,	// (0x00051b95) vkb2_cell_bottom_grid_pane

0x256d,	// (0x00051bce) vkb2_cell_bottom_grid_pane_g1

0xe8f3,	// (0x0005df54) aid_call2_pane_cp02

0xe8fb,	// (0x0005df5c) aid_call_pane_cp02

0xe903,	// (0x0005df64) clock_digital_number_pane_cp10

0xe90b,	// (0x0005df6c) clock_digital_number_pane_cp11

0xe913,	// (0x0005df74) clock_digital_number_pane_cp12

0xe91b,	// (0x0005df7c) clock_digital_number_pane_cp13

0xe923,	// (0x0005df84) clock_digital_separator_pane_cp10

0x437f,	// (0x000539e0) popup_clock_digital_analogue_window_cp2_g1

0x437f,	// (0x000539e0) popup_clock_digital_analogue_window_cp2_g2

0xe92b,	// (0x0005df8c) popup_clock_digital_analogue_window_cp2_g3

0x437f,	// (0x000539e0) popup_clock_digital_analogue_window_cp2_g4

0xe92b,	// (0x0005df8c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4a,	// (0x0005f3ab) popup_clock_digital_analogue_window_cp2_g

0xe933,	// (0x0005df94) popup_clock_digital_analogue_window_cp2_t1

0xe941,	// (0x0005dfa2) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd55,	// (0x0005f3b6) popup_clock_digital_analogue_window_cp2_t

0x7785,	// (0x00056de6) clock_digital_number_pane_cp10_g1

0x7785,	// (0x00056de6) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x0005f192) clock_digital_number_pane_cp10_g

0x7785,	// (0x00056de6) clock_digital_separator_pane_cp10_g1

0x7785,	// (0x00056de6) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x0005f192) clock_digital_separator_pane_cp10_g

0x90d4,	// (0x00058735) uniindi_top_pane_g3

0x90e5,	// (0x00058746) uniindi_top_pane_g4

0x2347,	// (0x000519a8) vkb2_row_keypad_pane_ParamLimits

0x2347,	// (0x000519a8) vkb2_row_keypad_pane

0x2589,	// (0x00051bea) vkb2_cell_t_keypad_pane_ParamLimits

0x2589,	// (0x00051bea) vkb2_cell_t_keypad_pane

0x2599,	// (0x00051bfa) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2599,	// (0x00051bfa) vkb2_cell_t_keypad_pane_cp08

0x25ac,	// (0x00051c0d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x25ac,	// (0x00051c0d) vkb2_cell_t_keypad_pane_cp09

0x25c0,	// (0x00051c21) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x25c0,	// (0x00051c21) vkb2_cell_t_keypad_pane_cp01

0x25d1,	// (0x00051c32) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x25d1,	// (0x00051c32) vkb2_cell_t_keypad_pane_cp02

0x25e2,	// (0x00051c43) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x25e2,	// (0x00051c43) vkb2_cell_t_keypad_pane_cp03

0x25f3,	// (0x00051c54) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x25f3,	// (0x00051c54) vkb2_cell_t_keypad_pane_cp04

0x2604,	// (0x00051c65) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2604,	// (0x00051c65) vkb2_cell_t_keypad_pane_cp05

0x2615,	// (0x00051c76) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2615,	// (0x00051c76) vkb2_cell_t_keypad_pane_cp06

0x2626,	// (0x00051c87) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2626,	// (0x00051c87) vkb2_cell_t_keypad_pane_cp07

0x2637,	// (0x00051c98) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2637,	// (0x00051c98) vkb2_cell_t_keypad_pane_cp10

0x1ded,	// (0x0005144e) vkb2_cell_t_keypad_pane_g1

0x96c4,	// (0x00058d25) vkb2_cell_t_keypad_pane_t1

0xf43b,	// (0x0005ea9c) popup_grid_graphic2_window

0xec7b,	// (0x0005e2dc) aid_size_cell_graphic2_ParamLimits

0xec7b,	// (0x0005e2dc) aid_size_cell_graphic2

0xecb9,	// (0x0005e31a) bg_popup_window_pane_cp21_ParamLimits

0xecb9,	// (0x0005e31a) bg_popup_window_pane_cp21

0xecc7,	// (0x0005e328) graphic2_pages_pane_ParamLimits

0xecc7,	// (0x0005e328) graphic2_pages_pane

0xed1d,	// (0x0005e37e) grid_graphic2_control_pane_ParamLimits

0xed1d,	// (0x0005e37e) grid_graphic2_control_pane

0xed65,	// (0x0005e3c6) grid_graphic2_pane_ParamLimits

0xed65,	// (0x0005e3c6) grid_graphic2_pane

0xedec,	// (0x0005e44d) cell_graphic2_pane

0xf43b,	// (0x0005ea9c) main_comp_mode_pane

0x8942,	// (0x00057fa3) list_ai3_gene_pane_ParamLimits

0xe63a,	// (0x0005dc9b) bg_popup_window_pane_cp19_ParamLimits

0x8d22,	// (0x00058383) bg_touch_area_indi_pane_ParamLimits

0x8d22,	// (0x00058383) bg_touch_area_indi_pane

0x8d38,	// (0x00058399) bg_touch_area_indi_pane_cp01_ParamLimits

0x8d38,	// (0x00058399) bg_touch_area_indi_pane_cp01

0x8d4e,	// (0x000583af) bg_touch_area_indi_pane_cp02_ParamLimits

0x8d4e,	// (0x000583af) bg_touch_area_indi_pane_cp02

0x8d64,	// (0x000583c5) bg_touch_area_indi_pane_cp03_ParamLimits

0x8d64,	// (0x000583c5) bg_touch_area_indi_pane_cp03

0x8d7e,	// (0x000583df) popup_slider_window_g1_ParamLimits

0x8d9a,	// (0x000583fb) popup_slider_window_g2_ParamLimits

0x8db6,	// (0x00058417) popup_slider_window_g3_ParamLimits

0xfcdf,	// (0x0005f340) popup_slider_window_g_ParamLimits

0x8e1c,	// (0x0005847d) popup_slider_window_t1_ParamLimits

0x8e90,	// (0x000584f1) small_volume_slider_vertical_pane_ParamLimits

0xedec,	// (0x0005e44d) cell_graphic2_pane_ParamLimits

0xee47,	// (0x0005e4a8) bg_button_pane_cp10_ParamLimits

0xee47,	// (0x0005e4a8) bg_button_pane_cp10

0xee5a,	// (0x0005e4bb) bg_button_pane_cp11_ParamLimits

0xee5a,	// (0x0005e4bb) bg_button_pane_cp11

0xee6d,	// (0x0005e4ce) graphic2_pages_pane_g1_ParamLimits

0xee6d,	// (0x0005e4ce) graphic2_pages_pane_g1

0xee88,	// (0x0005e4e9) graphic2_pages_pane_g2_ParamLimits

0xee88,	// (0x0005e4e9) graphic2_pages_pane_g2

0x0001,

0xfda3,	// (0x0005f404) graphic2_pages_pane_g_ParamLimits

0xfda3,	// (0x0005f404) graphic2_pages_pane_g

0xeea0,	// (0x0005e501) graphic2_pages_pane_t1_ParamLimits

0xeea0,	// (0x0005e501) graphic2_pages_pane_t1

0xeeb8,	// (0x0005e519) cell_graphic2_control_pane_ParamLimits

0xeeb8,	// (0x0005e519) cell_graphic2_control_pane

0xeeea,	// (0x0005e54b) cell_graphic2_pane_g1_ParamLimits

0xeeea,	// (0x0005e54b) cell_graphic2_pane_g1

0xe451,	// (0x0005dab2) cell_graphic2_pane_g2_ParamLimits

0xe451,	// (0x0005dab2) cell_graphic2_pane_g2

0xe46b,	// (0x0005dacc) cell_graphic2_pane_g3_ParamLimits

0xe46b,	// (0x0005dacc) cell_graphic2_pane_g3

0xe45e,	// (0x0005dabf) cell_graphic2_pane_g4_ParamLimits

0xe45e,	// (0x0005dabf) cell_graphic2_pane_g4

0xeef7,	// (0x0005e558) cell_graphic2_pane_g5_ParamLimits

0xeef7,	// (0x0005e558) cell_graphic2_pane_g5

0x0004,

0xfda8,	// (0x0005f409) cell_graphic2_pane_g_ParamLimits

0xfda8,	// (0x0005f409) cell_graphic2_pane_g

0xef17,	// (0x0005e578) cell_graphic2_pane_t1_ParamLimits

0xef17,	// (0x0005e578) cell_graphic2_pane_t1

0x5ee1,	// (0x00055542) grid_highlight_pane_cp11_ParamLimits

0x5ee1,	// (0x00055542) grid_highlight_pane_cp11

0x36f1,	// (0x00052d52) bg_button_pane_cp05

0xef60,	// (0x0005e5c1) cell_graphic2_control_pane_g1

0x7785,	// (0x00056de6) bg_touch_area_indi_pane_g1

0x99a0,	// (0x00059001) aid_cmod_rocker_key_size

0x99aa,	// (0x0005900b) aid_cmode_itu_key_size

0x99b4,	// (0x00059015) main_cmode_video_pane

0x99be,	// (0x0005901f) main_comp_mode_itu_pane

0x99ca,	// (0x0005902b) main_comp_mode_rocker_pane

0x99d6,	// (0x00059037) cell_cmode_rocker_pane_ParamLimits

0x99d6,	// (0x00059037) cell_cmode_rocker_pane

0x99e8,	// (0x00059049) cell_cmode_itu_pane_ParamLimits

0x99e8,	// (0x00059049) cell_cmode_itu_pane

0x3d09,	// (0x0005336a) bg_button_pane_cp06_ParamLimits

0x3d09,	// (0x0005336a) bg_button_pane_cp06

0x7a03,	// (0x00057064) cell_cmode_rocker_pane_g1_ParamLimits

0x7a03,	// (0x00057064) cell_cmode_rocker_pane_g1

0x8f34,	// (0x00058595) cell_cmode_rocker_pane_g2_ParamLimits

0x8f34,	// (0x00058595) cell_cmode_rocker_pane_g2

0x0001,

0xfdb8,	// (0x0005f419) cell_cmode_rocker_pane_g_ParamLimits

0xfdb8,	// (0x0005f419) cell_cmode_rocker_pane_g

0x2bb0,	// (0x00052211) bg_button_pane_cp07

0x99fd,	// (0x0005905e) cell_cmode_itu_pane_g1

0x9a06,	// (0x00059067) cell_cmode_itu_pane_t1

0x9a14,	// (0x00059075) cell_cmode_itu_pane_t2

0x0001,

0xfdbd,	// (0x0005f41e) cell_cmode_itu_pane_t

0x9157,	// (0x000587b8) aid_touch_ctrl_left

0x915f,	// (0x000587c0) aid_touch_ctrl_right

0x2bb0,	// (0x00052211) compa_mode_pane

0xef84,	// (0x0005e5e5) aid_cmod_rocker_key_size_cp

0xefa7,	// (0x0005e608) aid_cmode_itu_key_size_cp

0x9a36,	// (0x00059097) compa_mode_pane_g1

0x9a3e,	// (0x0005909f) compa_mode_pane_g2

0x9a46,	// (0x000590a7) compa_mode_pane_g3

0x0002,

0xfdc2,	// (0x0005f423) compa_mode_pane_g

0xefb1,	// (0x0005e612) main_comp_mode_itu_pane_cp

0xefb9,	// (0x0005e61a) main_comp_mode_rocker_pane_cp

0xefc1,	// (0x0005e622) cell_cmode_itu_pane_cp_ParamLimits

0xefc1,	// (0x0005e622) cell_cmode_itu_pane_cp

0xefd6,	// (0x0005e637) cell_cmode_rocker_pane_cp_ParamLimits

0xefd6,	// (0x0005e637) cell_cmode_rocker_pane_cp

0x3d09,	// (0x0005336a) bg_button_pane_cp06_cp_ParamLimits

0x3d09,	// (0x0005336a) bg_button_pane_cp06_cp

0x7a03,	// (0x00057064) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7a03,	// (0x00057064) cell_cmode_rocker_pane_g1_cp

0x7785,	// (0x00056de6) cell_cmode_rocker_pane_g2_cp

0x2bb0,	// (0x00052211) bg_button_pane_cp07_cp

0xefe8,	// (0x0005e649) cell_cmode_itu_pane_g1_cp

0xeff1,	// (0x0005e652) cell_cmode_itu_pane_t1_cp

0xeff1,	// (0x0005e652) cell_cmode_itu_pane_t2_cp

0xdc66,	// (0x0005d2c7) settings_code_pane_cp2

0x2ca4,	// (0x00052305) bg_popup_window_pane_cp3_ParamLimits

0x38f1,	// (0x00052f52) heading_pane_cp3_ParamLimits

0x38fd,	// (0x00052f5e) listscroll_popup_graphic_pane_ParamLimits

0x1b96,	// (0x000511f7) fep_hwr_aid_pane_ParamLimits

0x200d,	// (0x0005166e) aid_touch_sctrl_top_ParamLimits

0x2028,	// (0x00051689) sctrl_sk_top_pane_g1_ParamLimits

0x1ded,	// (0x0005144e) sctrl_sk_top_pane_g2_ParamLimits

0xfcf8,	// (0x0005f359) sctrl_sk_top_pane_g_ParamLimits

0x2035,	// (0x00051696) sctrl_sk_top_pane_t1_ParamLimits

0x200d,	// (0x0005166e) aid_touch_sctrl_bottom_ParamLimits

0x2035,	// (0x00051696) sctrl_sk_bottom_pane_t1_ParamLimits

0x90a0,	// (0x00058701) aid_area_touch_clock

0xc997,	// (0x0005bff8) aid_vkb2_area_top_pane_cell_ParamLimits

0xc997,	// (0x0005bff8) aid_vkb2_area_top_pane_cell

0xca42,	// (0x0005c0a3) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xca42,	// (0x0005c0a3) aid_vkb2_area_bottom_pane_cell

0x960f,	// (0x00058c70) popup_char_count_window

0x9a93,	// (0x000590f4) popup_char_count_window_g1

0x9a9c,	// (0x000590fd) popup_char_count_window_g2

0x9aa5,	// (0x00059106) popup_char_count_window_g3

0x0002,

0xfdc9,	// (0x0005f42a) popup_char_count_window_g

0x9aae,	// (0x0005910f) popup_char_count_window_t1

0x20e4,	// (0x00051745) popup_fep_char_preview_window_ParamLimits

0x20e4,	// (0x00051745) popup_fep_char_preview_window

0xc9b7,	// (0x0005c018) vkb2_top_candi_pane_ParamLimits

0xc9b7,	// (0x0005c018) vkb2_top_candi_pane

0xefff,	// (0x0005e660) cell_vkb2_top_candi_pane_ParamLimits

0xefff,	// (0x0005e660) cell_vkb2_top_candi_pane

0x264c,	// (0x00051cad) bg_popup_fep_char_preview_window_ParamLimits

0x264c,	// (0x00051cad) bg_popup_fep_char_preview_window

0x265a,	// (0x00051cbb) popup_fep_char_preview_window_t1_ParamLimits

0x265a,	// (0x00051cbb) popup_fep_char_preview_window_t1

0x9b2a,	// (0x0005918b) bg_popup_fep_char_preview_window_g1

0x9b32,	// (0x00059193) bg_popup_fep_char_preview_window_g2

0x9b3a,	// (0x0005919b) bg_popup_fep_char_preview_window_g3

0x9b42,	// (0x000591a3) bg_popup_fep_char_preview_window_g4

0x9b4a,	// (0x000591ab) bg_popup_fep_char_preview_window_g5

0x2694,	// (0x00051cf5) bg_popup_fep_char_preview_window_g6

0x9b52,	// (0x000591b3) bg_popup_fep_char_preview_window_g7

0x9b5a,	// (0x000591bb) bg_popup_fep_char_preview_window_g8

0x9b62,	// (0x000591c3) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd0,	// (0x0005f431) bg_popup_fep_char_preview_window_g

0x1ded,	// (0x0005144e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1ded,	// (0x0005144e) cell_vkb2_top_candi_pane_g1

0x1dfb,	// (0x0005145c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1dfb,	// (0x0005145c) cell_vkb2_top_candi_pane_g2

0x9b09,	// (0x0005916a) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9b09,	// (0x0005916a) cell_vkb2_top_candi_pane_g3

0x269c,	// (0x00051cfd) cell_vkb2_top_candi_pane_g4_ParamLimits

0x269c,	// (0x00051cfd) cell_vkb2_top_candi_pane_g4

0x7ece,	// (0x0005752f) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7ece,	// (0x0005752f) cell_vkb2_top_candi_pane_g5

0x26bd,	// (0x00051d1e) cell_vkb2_top_candi_pane_g6_ParamLimits

0x26bd,	// (0x00051d1e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde3,	// (0x0005f444) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde3,	// (0x0005f444) cell_vkb2_top_candi_pane_g

0x26cb,	// (0x00051d2c) cell_vkb2_top_candi_pane_t1

0x1864,	// (0x00050ec5) aid_size_touch_slider_mark_ParamLimits

0x1864,	// (0x00050ec5) aid_size_touch_slider_mark

0xed03,	// (0x0005e364) grid_graphic2_catg_pane_ParamLimits

0xed03,	// (0x0005e364) grid_graphic2_catg_pane

0xedbf,	// (0x0005e420) popup_grid_graphic2_window_t1_ParamLimits

0xedbf,	// (0x0005e420) popup_grid_graphic2_window_t1

0xedd5,	// (0x0005e436) popup_grid_graphic2_window_t2_ParamLimits

0xedd5,	// (0x0005e436) popup_grid_graphic2_window_t2

0x0001,

0xfd9e,	// (0x0005f3ff) popup_grid_graphic2_window_t_ParamLimits

0xfd9e,	// (0x0005f3ff) popup_grid_graphic2_window_t

0x36f1,	// (0x00052d52) bg_button_pane_cp05_ParamLimits

0xef60,	// (0x0005e5c1) cell_graphic2_control_pane_g1_ParamLimits

0xf065,	// (0x0005e6c6) cell_graphic2_catg_pane_ParamLimits

0xf065,	// (0x0005e6c6) cell_graphic2_catg_pane

0x2bb0,	// (0x00052211) bg_button_pane_cp12

0xf077,	// (0x0005e6d8) cell_graphic2_catg_pane_g1

0x906c,	// (0x000586cd) cell_tb_ext_pane_t1_ParamLimits

0x2486,	// (0x00051ae7) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2486,	// (0x00051ae7) vkb2_top_cell_right_narrow_pane

0x249e,	// (0x00051aff) vkb2_top_cell_right_wide_pane_ParamLimits

0x249e,	// (0x00051aff) vkb2_top_cell_right_wide_pane

0x1b88,	// (0x000511e9) bg_vkb2_func_pane_ParamLimits

0x1b88,	// (0x000511e9) bg_vkb2_func_pane

0x250f,	// (0x00051b70) vkb2_top_cell_left_pane_g1_ParamLimits

0x1b88,	// (0x000511e9) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1b88,	// (0x000511e9) bg_vkb2_fuc_pane_cp03

0x256d,	// (0x00051bce) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x51ee,	// (0x0005484f) bg_vkb2_func_pane_g1

0x51f6,	// (0x00054857) bg_vkb2_func_pane_g2

0x5206,	// (0x00054867) bg_vkb2_func_pane_g3

0x51fe,	// (0x0005485f) bg_vkb2_func_pane_g4

0x520e,	// (0x0005486f) bg_vkb2_func_pane_g5

0x5216,	// (0x00054877) bg_vkb2_func_pane_g6

0x521e,	// (0x0005487f) bg_vkb2_func_pane_g7

0x5226,	// (0x00054887) bg_vkb2_func_pane_g8

0x51e6,	// (0x00054847) bg_vkb2_func_pane_g9

0x0008,

0xfdf0,	// (0x0005f451) bg_vkb2_func_pane_g

0x1b88,	// (0x000511e9) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1b88,	// (0x000511e9) bg_vkb2_fuc_pane_cp01

0x250f,	// (0x00051b70) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x250f,	// (0x00051b70) vkb2_top_cell_right_wide_pane_g1

0x1b88,	// (0x000511e9) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1b88,	// (0x000511e9) bg_vkb2_fuc_pane_cp02

0x256d,	// (0x00051bce) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x256d,	// (0x00051bce) vkb2_top_cell_right_narrow_pane_g1

0xe57c,	// (0x0005dbdd) aid_touch_area_decrease_ParamLimits

0xe57c,	// (0x0005dbdd) aid_touch_area_decrease

0xe5b6,	// (0x0005dc17) aid_touch_area_increase_ParamLimits

0xe5b6,	// (0x0005dc17) aid_touch_area_increase

0xe5de,	// (0x0005dc3f) aid_touch_area_mute_ParamLimits

0xe5de,	// (0x0005dc3f) aid_touch_area_mute

0xe606,	// (0x0005dc67) aid_touch_area_slider_ParamLimits

0xe606,	// (0x0005dc67) aid_touch_area_slider

0xe646,	// (0x0005dca7) popup_slider_window_g4_ParamLimits

0xe646,	// (0x0005dca7) popup_slider_window_g4

0xe66e,	// (0x0005dccf) popup_slider_window_g5_ParamLimits

0xe66e,	// (0x0005dccf) popup_slider_window_g5

0xe6a2,	// (0x0005dd03) popup_slider_window_g6_ParamLimits

0xe6a2,	// (0x0005dd03) popup_slider_window_g6

0x8e4a,	// (0x000584ab) popup_slider_window_t2_ParamLimits

0x8e4a,	// (0x000584ab) popup_slider_window_t2

0x0001,

0xfcec,	// (0x0005f34d) popup_slider_window_t_ParamLimits

0xfcec,	// (0x0005f34d) popup_slider_window_t

0xe6be,	// (0x0005dd1f) slider_pane_ParamLimits

0xe6be,	// (0x0005dd1f) slider_pane

0x9b85,	// (0x000591e6) slider_pane_g1_ParamLimits

0x9b85,	// (0x000591e6) slider_pane_g1

0x9b99,	// (0x000591fa) slider_pane_g2_ParamLimits

0x9b99,	// (0x000591fa) slider_pane_g2

0x9baf,	// (0x00059210) slider_pane_g3_ParamLimits

0x9baf,	// (0x00059210) slider_pane_g3

0x0003,

0xfe03,	// (0x0005f464) slider_pane_g_ParamLimits

0xfe03,	// (0x0005f464) slider_pane_g

0xc4cf,	// (0x0005bb30) popup_tb_float_extension_window_ParamLimits

0xc4cf,	// (0x0005bb30) popup_tb_float_extension_window

0x9bdb,	// (0x0005923c) aid_size_cell_tb_float_ext

0x2bb0,	// (0x00052211) bg_popup_sub_window_cp28

0x9be7,	// (0x00059248) grid_tb_float_ext_pane

0x9bf1,	// (0x00059252) cell_tb_float_ext_pane_ParamLimits

0x9bf1,	// (0x00059252) cell_tb_float_ext_pane

0x9c0b,	// (0x0005926c) cell_tb_float_ext_pane_g1

0x9c14,	// (0x00059275) grid_highlight_pane_cp12

0xc67d,	// (0x0005bcde) cell_last_hwr_side_pane_ParamLimits

0xc67d,	// (0x0005bcde) cell_last_hwr_side_pane

0x7785,	// (0x00056de6) cell_last_hwr_side_pane_g1

0x9c1d,	// (0x0005927e) cell_last_hwr_side_pane_g2

0x0001,

0xfe0c,	// (0x0005f46d) cell_last_hwr_side_pane_g

0xcb1e,	// (0x0005c17f) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcb1e,	// (0x0005c17f) vkb2_area_bottom_space_btn_pane

0x1ded,	// (0x0005144e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x96c4,	// (0x00058d25) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x26cb,	// (0x00051d2c) cell_vkb2_top_candi_pane_t1_ParamLimits

0x26ea,	// (0x00051d4b) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x26ea,	// (0x00051d4b) vkb2_area_bottom_space_btn_pane_g1

0x2724,	// (0x00051d85) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2724,	// (0x00051d85) vkb2_area_bottom_space_btn_pane_g2

0x275a,	// (0x00051dbb) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x275a,	// (0x00051dbb) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe11,	// (0x0005f472) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe11,	// (0x0005f472) vkb2_area_bottom_space_btn_pane_g

0x1c4b,	// (0x000512ac) cel_fep_hwr_func_pane_ParamLimits

0x1c4b,	// (0x000512ac) cel_fep_hwr_func_pane

0xc652,	// (0x0005bcb3) cell_hwr_side_button_pane_ParamLimits

0xc652,	// (0x0005bcb3) cell_hwr_side_button_pane

0x90a0,	// (0x00058701) aid_area_touch_clock_ParamLimits

0x36f1,	// (0x00052d52) bg_uniindi_top_pane_ParamLimits

0x90b2,	// (0x00058713) uniindi_top_pane_g1_ParamLimits

0x90c8,	// (0x00058729) uniindi_top_pane_g2_ParamLimits

0x90d4,	// (0x00058735) uniindi_top_pane_g3_ParamLimits

0x90e5,	// (0x00058746) uniindi_top_pane_g4_ParamLimits

0xfd24,	// (0x0005f385) uniindi_top_pane_g_ParamLimits

0x90f2,	// (0x00058753) uniindi_top_pane_t1_ParamLimits

0x36f1,	// (0x00052d52) bg_vkb2_func_pane_cp01_ParamLimits

0x36f1,	// (0x00052d52) bg_vkb2_func_pane_cp01

0x9c26,	// (0x00059287) cel_fep_hwr_func_pane_g1_ParamLimits

0x9c26,	// (0x00059287) cel_fep_hwr_func_pane_g1

0x36f1,	// (0x00052d52) bg_vkb2_func_pane_cp02_ParamLimits

0x36f1,	// (0x00052d52) bg_vkb2_func_pane_cp02

0x9c26,	// (0x00059287) cell_hwr_side_button_pane_g1_ParamLimits

0x9c26,	// (0x00059287) cell_hwr_side_button_pane_g1

0x5067,	// (0x000546c8) status_pane_g4_ParamLimits

0x5067,	// (0x000546c8) status_pane_g4

0x5081,	// (0x000546e2) status_pane_t1

0x74ca,	// (0x00056b2b) form2_midp_gauge_slider_cont_pane

0x74d2,	// (0x00056b33) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdf35,	// (0x0005d596) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdf47,	// (0x0005d5a8) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x0005f145) form2_midp_gauge_slider_pane_t_ParamLimits

0x7508,	// (0x00056b69) form2_midp_slider_pane_ParamLimits

0x20a4,	// (0x00051705) aid_size_cell_func_vkb2_ParamLimits

0x20a4,	// (0x00051705) aid_size_cell_func_vkb2

0x9bc7,	// (0x00059228) slider_pane_g4_ParamLimits

0x9bc7,	// (0x00059228) slider_pane_g4

0xcb7f,	// (0x0005c1e0) form2_midp_gauge_slider_pane_t2_cp01

0xcb8d,	// (0x0005c1ee) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcb8d,	// (0x0005c1ee) form2_midp_gauge_slider_pane_t3_cp01

0x27cf,	// (0x00051e30) form2_midp_slider_pane_cp01

0x2bb0,	// (0x00052211) navi_smil_pane

0x9c5f,	// (0x000592c0) navi_smil_pane_g1

0x9c67,	// (0x000592c8) navi_smil_pane_t1

0x9c34,	// (0x00059295) form2_midp_slider_pane_g1

0x9c3d,	// (0x0005929e) form2_midp_slider_pane_g2

0x9c45,	// (0x000592a6) form2_midp_slider_pane_g3

0x9c34,	// (0x00059295) form2_midp_slider_pane_g4

0xf080,	// (0x0005e6e1) form2_midp_slider_pane_g5

0x0004,

0xfe1a,	// (0x0005f47b) form2_midp_slider_pane_g

0x2794,	// (0x00051df5) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2794,	// (0x00051df5) vkb2_area_bottom_space_btn_pane_g4

0xd5b1,	// (0x0005cc12) lc0_navi_pane_ParamLimits

0xd5b1,	// (0x0005cc12) lc0_navi_pane

0xd61b,	// (0x0005cc7c) lc0_stat_indi_pane_ParamLimits

0xd61b,	// (0x0005cc7c) lc0_stat_indi_pane

0xd630,	// (0x0005cc91) ls0_title_pane_ParamLimits

0xd630,	// (0x0005cc91) ls0_title_pane

0x3d09,	// (0x0005336a) bg_popup_sub_pane_cp14_ParamLimits

0x9087,	// (0x000586e8) list_uniindi_pane_ParamLimits

0x9093,	// (0x000586f4) uniindi_top_pane_ParamLimits

0x912f,	// (0x00058790) list_single_uniindi_pane_g1_ParamLimits

0x9142,	// (0x000587a3) list_single_uniindi_pane_t1_ParamLimits

0xcbaa,	// (0x0005c20b) lc0_stat_clock_pane_ParamLimits

0xcbaa,	// (0x0005c20b) lc0_stat_clock_pane

0xf08b,	// (0x0005e6ec) lc0_stat_indi_pane_g1_ParamLimits

0xf08b,	// (0x0005e6ec) lc0_stat_indi_pane_g1

0xf098,	// (0x0005e6f9) lc0_stat_indi_pane_g2_ParamLimits

0xf098,	// (0x0005e6f9) lc0_stat_indi_pane_g2

0x0001,

0xfe25,	// (0x0005f486) lc0_stat_indi_pane_g_ParamLimits

0xfe25,	// (0x0005f486) lc0_stat_indi_pane_g

0xcbb7,	// (0x0005c218) lc0_uni_indicator_pane_ParamLimits

0xcbb7,	// (0x0005c218) lc0_uni_indicator_pane

0xf0a5,	// (0x0005e706) ls0_title_pane_g1_ParamLimits

0xf0a5,	// (0x0005e706) ls0_title_pane_g1

0xf0b9,	// (0x0005e71a) ls0_title_pane_t1_ParamLimits

0xf0b9,	// (0x0005e71a) ls0_title_pane_t1

0xcbc4,	// (0x0005c225) lc0_uni_indicator_pane_g1_ParamLimits

0xcbc4,	// (0x0005c225) lc0_uni_indicator_pane_g1

0x9cd9,	// (0x0005933a) lc0_stat_clock_pane_t1

0xf43b,	// (0x0005ea9c) main_ai5_pane

0x9ce7,	// (0x00059348) ai5_sk_pane_ParamLimits

0x9ce7,	// (0x00059348) ai5_sk_pane

0xf0e7,	// (0x0005e748) cell_ai5_widget_pane_ParamLimits

0xf0e7,	// (0x0005e748) cell_ai5_widget_pane

0x9daf,	// (0x00059410) aid_size_cell_widget_grid

0x9dc5,	// (0x00059426) bg_ai5_widget_pane_ParamLimits

0x9dc5,	// (0x00059426) bg_ai5_widget_pane

0x9e3d,	// (0x0005949e) cell_ai5_widget_pane_g2

0x9e51,	// (0x000594b2) cell_ai5_widget_pane_g3

0x9e6b,	// (0x000594cc) cell_ai5_widget_pane_g4

0x9e7b,	// (0x000594dc) cell_ai5_widget_pane_g5

0x9e8b,	// (0x000594ec) cell_ai5_widget_pane_g6

0x9e97,	// (0x000594f8) cell_ai5_widget_pane_g7

0x9edf,	// (0x00059540) cell_ai5_widget_pane_t1_ParamLimits

0x9edf,	// (0x00059540) cell_ai5_widget_pane_t1

0x9efc,	// (0x0005955d) cell_ai5_widget_pane_t2_ParamLimits

0x9efc,	// (0x0005955d) cell_ai5_widget_pane_t2

0x9f14,	// (0x00059575) cell_ai5_widget_pane_t3_ParamLimits

0x9f14,	// (0x00059575) cell_ai5_widget_pane_t3

0x9f2c,	// (0x0005958d) cell_ai5_widget_pane_t4_ParamLimits

0x9f2c,	// (0x0005958d) cell_ai5_widget_pane_t4

0x9f52,	// (0x000595b3) cell_ai5_widget_pane_t5_ParamLimits

0x9f52,	// (0x000595b3) cell_ai5_widget_pane_t5

0x9f72,	// (0x000595d3) cell_ai5_widget_pane_t6_ParamLimits

0x9f72,	// (0x000595d3) cell_ai5_widget_pane_t6

0x9f84,	// (0x000595e5) cell_ai5_widget_pane_t7_ParamLimits

0x9f84,	// (0x000595e5) cell_ai5_widget_pane_t7

0x9f9d,	// (0x000595fe) cell_ai5_widget_pane_t8_ParamLimits

0x9f9d,	// (0x000595fe) cell_ai5_widget_pane_t8

0x0009,

0xfe3f,	// (0x0005f4a0) cell_ai5_widget_pane_t_ParamLimits

0xfe3f,	// (0x0005f4a0) cell_ai5_widget_pane_t

0x9ffc,	// (0x0005965d) grid_ai5_widget_pane

0x3d09,	// (0x0005336a) highlight_cell_ai5_widget_pane_ParamLimits

0x3d09,	// (0x0005336a) highlight_cell_ai5_widget_pane

0xf14d,	// (0x0005e7ae) ai5_sk_left_pane

0xf157,	// (0x0005e7b8) ai5_sk_middle_pane

0xf161,	// (0x0005e7c2) ai5_sk_right_pane

0xa031,	// (0x00059692) bg_ai5_widget_pane_g1_ParamLimits

0xa031,	// (0x00059692) bg_ai5_widget_pane_g1

0xa03d,	// (0x0005969e) bg_ai5_widget_pane_g2_ParamLimits

0xa03d,	// (0x0005969e) bg_ai5_widget_pane_g2

0xa049,	// (0x000596aa) bg_ai5_widget_pane_g3_ParamLimits

0xa049,	// (0x000596aa) bg_ai5_widget_pane_g3

0xa055,	// (0x000596b6) bg_ai5_widget_pane_g4_ParamLimits

0xa055,	// (0x000596b6) bg_ai5_widget_pane_g4

0xa061,	// (0x000596c2) bg_ai5_widget_pane_g5_ParamLimits

0xa061,	// (0x000596c2) bg_ai5_widget_pane_g5

0xa06d,	// (0x000596ce) bg_ai5_widget_pane_g6_ParamLimits

0xa06d,	// (0x000596ce) bg_ai5_widget_pane_g6

0xa079,	// (0x000596da) bg_ai5_widget_pane_g7_ParamLimits

0xa079,	// (0x000596da) bg_ai5_widget_pane_g7

0xa085,	// (0x000596e6) bg_ai5_widget_pane_g8_ParamLimits

0xa085,	// (0x000596e6) bg_ai5_widget_pane_g8

0xa091,	// (0x000596f2) bg_ai5_widget_pane_g9_ParamLimits

0xa091,	// (0x000596f2) bg_ai5_widget_pane_g9

0x0008,

0xfe54,	// (0x0005f4b5) bg_ai5_widget_pane_g_ParamLimits

0xfe54,	// (0x0005f4b5) bg_ai5_widget_pane_g

0xa0c3,	// (0x00059724) cell_shortcut_ai5_widget_pane_ParamLimits

0xa0c3,	// (0x00059724) cell_shortcut_ai5_widget_pane

0x4992,	// (0x00053ff3) bg_cell_shortcut_ai5_widget_pane

0xa0d4,	// (0x00059735) cell_grid_ai5_widget_pane_g1

0x4992,	// (0x00053ff3) highlight_cell_shortcut_ai5_widget_pane

0x51ee,	// (0x0005484f) ai5_sk_left_pane_g1

0xa0dd,	// (0x0005973e) ai5_sk_left_pane_g2

0xa0e5,	// (0x00059746) ai5_sk_left_pane_g3

0xa0ed,	// (0x0005974e) ai5_sk_left_pane_g4

0x0003,

0xfe67,	// (0x0005f4c8) ai5_sk_left_pane_g

0xa0f5,	// (0x00059756) ai5_sk_left_pane_t1

0x51f6,	// (0x00054857) ai5_sk_right_pane_g1

0xa103,	// (0x00059764) ai5_sk_right_pane_g2

0xa10b,	// (0x0005976c) ai5_sk_right_pane_g3

0xa113,	// (0x00059774) ai5_sk_right_pane_g4

0x0003,

0xfe70,	// (0x0005f4d1) ai5_sk_right_pane_g

0xa11b,	// (0x0005977c) ai5_sk_right_pane_t1

0x51f6,	// (0x00054857) ai5_sk_middle_pane_g1

0x51ee,	// (0x0005484f) ai5_sk_middle_pane_g2

0x520e,	// (0x0005486f) ai5_sk_middle_pane_g3

0xa10b,	// (0x0005976c) ai5_sk_middle_pane_g4

0xa0e5,	// (0x00059746) ai5_sk_middle_pane_g5

0xa129,	// (0x0005978a) ai5_sk_middle_pane_g6

0xf16b,	// (0x0005e7cc) ai5_sk_middle_pane_g7

0x0006,

0xfe79,	// (0x0005f4da) ai5_sk_middle_pane_g

0xd49d,	// (0x0005cafe) aid_touch_area_size_lc0_ParamLimits

0xd49d,	// (0x0005cafe) aid_touch_area_size_lc0

0x1e1c,	// (0x0005147d) cell_hwr_candidate_pane_t1_ParamLimits

0x4d3e,	// (0x0005439f) aid_touch_navi_pane

0xd729,	// (0x0005cd8a) status_dt_navi_pane_ParamLimits

0xd729,	// (0x0005cd8a) status_dt_navi_pane

0xd741,	// (0x0005cda2) status_dt_sta_pane_ParamLimits

0xd741,	// (0x0005cda2) status_dt_sta_pane

0xf173,	// (0x0005e7d4) dt_sta_controll_pane

0xf180,	// (0x0005e7e1) dt_sta_indi_pane

0xf18d,	// (0x0005e7ee) dt_sta_title_pane

0x36f1,	// (0x00052d52) bg_dt_sta_indi_pane_ParamLimits

0x36f1,	// (0x00052d52) bg_dt_sta_indi_pane

0xf19f,	// (0x0005e800) dt_sta_battery_pane

0xf1a7,	// (0x0005e808) dt_sta_indi_pane_g1

0xa17b,	// (0x000597dc) dt_sta_indi_pane_g2

0xa184,	// (0x000597e5) dt_sta_indi_pane_g3

0x0002,

0xfe88,	// (0x0005f4e9) dt_sta_indi_pane_g

0xa18d,	// (0x000597ee) dt_sta_signal_pane

0x3d09,	// (0x0005336a) bg_dt_sta_title_pane_ParamLimits

0x3d09,	// (0x0005336a) bg_dt_sta_title_pane

0xa196,	// (0x000597f7) dt_sta_title_pane_g1

0xa19e,	// (0x000597ff) dt_sta_title_pane_t1_ParamLimits

0xa19e,	// (0x000597ff) dt_sta_title_pane_t1

0x2bb0,	// (0x00052211) bg_dt_sta_control_pane

0xf1b0,	// (0x0005e811) dt_sta_controll_pane_g1

0xa1bc,	// (0x0005981d) bg_dt_sta_title_pane_g1

0xa1c5,	// (0x00059826) bg_dt_sta_title_pane_g2

0xa1ce,	// (0x0005982f) bg_dt_sta_title_pane_g3

0x0002,

0xfe8f,	// (0x0005f4f0) bg_dt_sta_title_pane_g

0x7785,	// (0x00056de6) bg_dt_sta_indi_pane_g1

0xa1d7,	// (0x00059838) dt_sta_signal_pane_g1

0xa1df,	// (0x00059840) dt_sta_signal_pane_g2

0x0001,

0xfe96,	// (0x0005f4f7) dt_sta_signal_pane_g

0xa1e7,	// (0x00059848) dt_sta_battery_pane_g1

0xa1f0,	// (0x00059851) dt_sta_battery_pane_t1

0x7785,	// (0x00056de6) bg_dt_sta_control_pane_g1

0x4491,	// (0x00053af2) fep_china_uni_eep_pane

0x4499,	// (0x00053afa) fep_china_uni_entry_pane_ParamLimits

0x44a9,	// (0x00053b0a) popup_fep_china_uni_window_g1_ParamLimits

0x44b9,	// (0x00053b1a) popup_fep_china_uni_window_g2_ParamLimits

0x44b9,	// (0x00053b1a) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0005ed83) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0005ed83) popup_fep_china_uni_window_g

0xa1ff,	// (0x00059860) fep_china_uni_eep_pane_g1

0xa207,	// (0x00059868) fep_china_uni_eep_pane_t1

0x9c56,	// (0x000592b7) aid_touch_area_size_smil_player

0x4e8e,	// (0x000544ef) lc0_clock_pane

0x5075,	// (0x000546d6) status_pane_g5_ParamLimits

0x5075,	// (0x000546d6) status_pane_g5

0xc051,	// (0x0005b6b2) popup_keymap_window

0x5033,	// (0x00054694) status_icon_pane

0x9e51,	// (0x000594b2) cell_ai5_widget_pane_g3_ParamLimits

0x9e6b,	// (0x000594cc) cell_ai5_widget_pane_g4_ParamLimits

0x9e7b,	// (0x000594dc) cell_ai5_widget_pane_g5_ParamLimits

0x9ea3,	// (0x00059504) cell_ai5_widget_pane_g8_ParamLimits

0x9ea3,	// (0x00059504) cell_ai5_widget_pane_g8

0x9eb7,	// (0x00059518) cell_ai5_widget_pane_g9_ParamLimits

0x9eb7,	// (0x00059518) cell_ai5_widget_pane_g9

0x9ecb,	// (0x0005952c) cell_ai5_widget_pane_g10_ParamLimits

0x9ecb,	// (0x0005952c) cell_ai5_widget_pane_g10

0xa216,	// (0x00059877) status_icon_pane_g1

0x2bb0,	// (0x00052211) bg_popup_sub_pane_cp13

0xa21e,	// (0x0005987f) popup_keymap_window_t1

0xd42b,	// (0x0005ca8c) control_pane_g6_ParamLimits

0xd42b,	// (0x0005ca8c) control_pane_g6

0xd438,	// (0x0005ca99) control_pane_g7_ParamLimits

0xd438,	// (0x0005ca99) control_pane_g7

0xd445,	// (0x0005caa6) control_pane_g8_ParamLimits

0xd445,	// (0x0005caa6) control_pane_g8

0xf173,	// (0x0005e7d4) dt_sta_controll_pane_ParamLimits

0xf180,	// (0x0005e7e1) dt_sta_indi_pane_ParamLimits

0xf18d,	// (0x0005e7ee) dt_sta_title_pane_ParamLimits

0x3c35,	// (0x00053296) aid_size_touch_scroll_bar_cale

0xf514,	// (0x0005eb75) popup_discreet_window_ParamLimits

0xf514,	// (0x0005eb75) popup_discreet_window

0xb5b1,	// (0x0005ac12) popup_sk_window

0x586d,	// (0x00054ece) bg_popup_sub_pane_cp28_ParamLimits

0x586d,	// (0x00054ece) bg_popup_sub_pane_cp28

0xa22c,	// (0x0005988d) popup_discreet_window_g1_ParamLimits

0xa22c,	// (0x0005988d) popup_discreet_window_g1

0xa24c,	// (0x000598ad) popup_discreet_window_t1_ParamLimits

0xa24c,	// (0x000598ad) popup_discreet_window_t1

0xa26a,	// (0x000598cb) popup_discreet_window_t2_ParamLimits

0xa26a,	// (0x000598cb) popup_discreet_window_t2

0x0002,

0xfe9b,	// (0x0005f4fc) popup_discreet_window_t_ParamLimits

0xfe9b,	// (0x0005f4fc) popup_discreet_window_t

0x2806,	// (0x00051e67) popup_sk_window_g1

0x2810,	// (0x00051e71) popup_sk_window_g2

0x0001,

0xfea2,	// (0x0005f503) popup_sk_window_g

0x2818,	// (0x00051e79) popup_sk_window_t1

0x2826,	// (0x00051e87) popup_sk_window_t1_copy1

0x9e3d,	// (0x0005949e) cell_ai5_widget_pane_g2_ParamLimits

0x9faf,	// (0x00059610) cell_ai5_widget_pane_t9_ParamLimits

0x9faf,	// (0x00059610) cell_ai5_widget_pane_t9

0x2bb0,	// (0x00052211) main_fep_fshwr2_pane

0xcbeb,	// (0x0005c24c) aid_fshwr2_btn_pane

0xcbff,	// (0x0005c260) aid_fshwr2_syb_pane

0xcc13,	// (0x0005c274) aid_fshwr2_txt_pane

0xcc23,	// (0x0005c284) fshwr2_func_candi_pane

0xcc43,	// (0x0005c2a4) fshwr2_hwr_syb_pane

0xcc65,	// (0x0005c2c6) fshwr2_icf_pane

0xf43b,	// (0x0005ea9c) fshwr2_icf_bg_pane

0x28c0,	// (0x00051f21) fshwr2_icf_pane_t1_ParamLimits

0x28c0,	// (0x00051f21) fshwr2_icf_pane_t1

0x437f,	// (0x000539e0) fshwr2_func_candi_pane_g1

0xf1b9,	// (0x0005e81a) fshwr2_func_candi_row_pane_ParamLimits

0xf1b9,	// (0x0005e81a) fshwr2_func_candi_row_pane

0xcc95,	// (0x0005c2f6) cell_fshwr2_syb_pane_ParamLimits

0xcc95,	// (0x0005c2f6) cell_fshwr2_syb_pane

0x28f9,	// (0x00051f5a) fshwr2_hwr_syb_pane_g1_ParamLimits

0x28f9,	// (0x00051f5a) fshwr2_hwr_syb_pane_g1

0xf43b,	// (0x0005ea9c) bg_popup_call_pane_cp01

0xccbb,	// (0x0005c31c) fshwr2_func_candi_cell_pane_ParamLimits

0xccbb,	// (0x0005c31c) fshwr2_func_candi_cell_pane

0xf1dc,	// (0x0005e83d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf1dc,	// (0x0005e83d) fshwr2_func_candi_cell_bg_pane

0xcd06,	// (0x0005c367) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcd06,	// (0x0005c367) fshwr2_func_candi_cell_pane_g1

0xcd3d,	// (0x0005c39e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcd3d,	// (0x0005c39e) fshwr2_func_candi_cell_pane_t1

0xf43b,	// (0x0005ea9c) bg_button_pane_cp08

0xa2ed,	// (0x0005994e) cell_fshwr2_syb_bg_pane

0xcd58,	// (0x0005c3b9) cell_fshwr2_syb_bg_pane_g1

0xcd6b,	// (0x0005c3cc) cell_fshwr2_syb_bg_pane_t1

0x3d09,	// (0x0005336a) main_tmo_pane

0xda99,	// (0x0005d0fa) uni_indicator_pane_g1_ParamLimits

0xdaae,	// (0x0005d10f) uni_indicator_pane_g2_ParamLimits

0xdac4,	// (0x0005d125) uni_indicator_pane_g3_ParamLimits

0x63b0,	// (0x00055a11) uni_indicator_pane_g4_ParamLimits

0x63b0,	// (0x00055a11) uni_indicator_pane_g4

0x63c4,	// (0x00055a25) uni_indicator_pane_g5_ParamLimits

0x63c4,	// (0x00055a25) uni_indicator_pane_g5

0x63c4,	// (0x00055a25) uni_indicator_pane_g6_ParamLimits

0x63c4,	// (0x00055a25) uni_indicator_pane_g6

0xf921,	// (0x0005ef82) uni_indicator_pane_g_ParamLimits

0xe558,	// (0x0005dbb9) popup_tmo_note_window_ParamLimits

0xe558,	// (0x0005dbb9) popup_tmo_note_window

0x2086,	// (0x000516e7) fshwr2_bg_pane

0xcd2e,	// (0x0005c38f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcd2e,	// (0x0005c38f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea7,	// (0x0005f508) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea7,	// (0x0005f508) fshwr2_func_candi_cell_pane_g

0x1dd5,	// (0x00051436) bg_popup_window_pane_cp01

0x29b7,	// (0x00052018) bg_popup_window_pane_g1_cp01

0xa2f9,	// (0x0005995a) bg_popup_window_pane_cp22_ParamLimits

0xa2f9,	// (0x0005995a) bg_popup_window_pane_cp22

0xa307,	// (0x00059968) listscroll_tmo_link_pane_ParamLimits

0xa307,	// (0x00059968) listscroll_tmo_link_pane

0xa347,	// (0x000599a8) popup_tmo_note_window_g1_ParamLimits

0xa347,	// (0x000599a8) popup_tmo_note_window_g1

0xa354,	// (0x000599b5) tmo_note_info_pane_ParamLimits

0xa354,	// (0x000599b5) tmo_note_info_pane

0xf1e8,	// (0x0005e849) list_tmo_note_info_pane_g1_ParamLimits

0xf1e8,	// (0x0005e849) list_tmo_note_info_pane_g1

0xa385,	// (0x000599e6) list_tmo_note_info_pane_g2_ParamLimits

0xa385,	// (0x000599e6) list_tmo_note_info_pane_g2

0x0001,

0xfeac,	// (0x0005f50d) list_tmo_note_info_pane_g_ParamLimits

0xfeac,	// (0x0005f50d) list_tmo_note_info_pane_g

0xa3a1,	// (0x00059a02) list_tmo_note_info_text_pane_ParamLimits

0xa3a1,	// (0x00059a02) list_tmo_note_info_text_pane

0xa422,	// (0x00059a83) list_tmo_link_pane

0xa42f,	// (0x00059a90) scroll_pane_cp20

0xa43c,	// (0x00059a9d) list_single_tmo_link_pane_ParamLimits

0xa43c,	// (0x00059a9d) list_single_tmo_link_pane

0xa44c,	// (0x00059aad) list_single_tmo_link_pane_t1

0xa45a,	// (0x00059abb) list_tmo_note_info_text_pane_t1_ParamLimits

0xa45a,	// (0x00059abb) list_tmo_note_info_text_pane_t1

0xd0f3,	// (0x0005c754) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd0f3,	// (0x0005c754) aid_size_touch_scroll_bar_cp01

0xbbaf,	// (0x0005b210) aid_size_touch_slider_marker

0xb5a1,	// (0x0005ac02) popup_settings_window_ParamLimits

0xb5a1,	// (0x0005ac02) popup_settings_window

0x0ebe,	// (0x0005051f) popup_candi_list_indi_window

0x4d3e,	// (0x0005439f) aid_touch_navi_pane_ParamLimits

0x1fe1,	// (0x00051642) rs_clock_indi_pane

0x1fea,	// (0x0005164b) sctrl_sk_bottom_pane_ParamLimits

0x1ffb,	// (0x0005165c) sctrl_sk_top_pane_ParamLimits

0x20fe,	// (0x0005175f) popup_fep_tooltip_window

0x9daf,	// (0x00059410) aid_size_cell_widget_grid_ParamLimits

0x9e28,	// (0x00059489) cell_ai5_widget_pane_g1_ParamLimits

0x9e28,	// (0x00059489) cell_ai5_widget_pane_g1

0x9e8b,	// (0x000594ec) cell_ai5_widget_pane_g6_ParamLimits

0x9e97,	// (0x000594f8) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2a,	// (0x0005f48b) cell_ai5_widget_pane_g_ParamLimits

0xfe2a,	// (0x0005f48b) cell_ai5_widget_pane_g

0x9fde,	// (0x0005963f) cell_ai5_widget_pane_t10_ParamLimits

0x9fde,	// (0x0005963f) cell_ai5_widget_pane_t10

0x9ffc,	// (0x0005965d) grid_ai5_widget_pane_ParamLimits

0xa09d,	// (0x000596fe) cell_contacts_ai5_widget_pane_ParamLimits

0xa09d,	// (0x000596fe) cell_contacts_ai5_widget_pane

0xa27f,	// (0x000598e0) popup_discreet_window_t3_ParamLimits

0xa27f,	// (0x000598e0) popup_discreet_window_t3

0xcc81,	// (0x0005c2e2) popup_fshwr2_char_preview_window_ParamLimits

0xcc81,	// (0x0005c2e2) popup_fshwr2_char_preview_window

0xf1ff,	// (0x0005e860) tmo_note_info_pane_t1

0xf214,	// (0x0005e875) tmo_note_info_pane_t2

0xf22b,	// (0x0005e88c) tmo_note_info_pane_t3

0xa3fe,	// (0x00059a5f) tmo_note_info_pane_t4

0xa410,	// (0x00059a71) tmo_note_info_pane_t5

0x0004,

0xfeb1,	// (0x0005f512) tmo_note_info_pane_t

0xa422,	// (0x00059a83) list_tmo_link_pane_ParamLimits

0xa42f,	// (0x00059a90) scroll_pane_cp20_ParamLimits

0xf43b,	// (0x0005ea9c) bg_popup_fep_char_preview_window_cp01

0xa473,	// (0x00059ad4) popup_fshwr2_char_preview_window_t1

0xa481,	// (0x00059ae2) popup_candi_list_indi_window_g1

0xa48a,	// (0x00059aeb) bg_cell_contacts_ai5_widget_pane

0xa496,	// (0x00059af7) cell_contacts_ai5_widget_pane_g1

0x7e23,	// (0x00057484) cell_contacts_ai5_widget_pane_g2

0xa4ab,	// (0x00059b0c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebc,	// (0x0005f51d) cell_contacts_ai5_widget_pane_g

0xa4b7,	// (0x00059b18) cell_contacts_ai5_widget_pane_t1

0x3d09,	// (0x0005336a) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa52e,	// (0x00059b8f) settings_container_pane

0x4992,	// (0x00053ff3) listscroll_set_pane_copy1

0x6e95,	// (0x000564f6) scroll_pane_cp121_copy1

0x5612,	// (0x00054c73) set_content_pane_copy1

0xa53a,	// (0x00059b9b) aid_height_set_list_copy1_ParamLimits

0xa53a,	// (0x00059b9b) aid_height_set_list_copy1

0x65bc,	// (0x00055c1d) aid_size_parent_copy1_ParamLimits

0x65bc,	// (0x00055c1d) aid_size_parent_copy1

0xa546,	// (0x00059ba7) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa546,	// (0x00059ba7) button_value_adjust_pane_cp6_copy1

0x4cb6,	// (0x00054317) list_highlight_pane_cp2_copy1_ParamLimits

0x4cb6,	// (0x00054317) list_highlight_pane_cp2_copy1

0xa55a,	// (0x00059bbb) list_set_pane_copy1_ParamLimits

0xa55a,	// (0x00059bbb) list_set_pane_copy1

0xa4c9,	// (0x00059b2a) main_pane_set_t1_copy1_ParamLimits

0xa4c9,	// (0x00059b2a) main_pane_set_t1_copy1

0xa503,	// (0x00059b64) main_pane_set_t2_copy1_ParamLimits

0xa503,	// (0x00059b64) main_pane_set_t2_copy1

0xa607,	// (0x00059c68) main_pane_set_t3_copy1

0xa615,	// (0x00059c76) main_pane_set_t4_copy1

0xa522,	// (0x00059b83) set_content_pane_g1_copy1_ParamLimits

0xa522,	// (0x00059b83) set_content_pane_g1_copy1

0xa623,	// (0x00059c84) setting_code_pane_copy1

0xa62b,	// (0x00059c8c) setting_slider_graphic_pane_copy1

0xa62b,	// (0x00059c8c) setting_slider_pane_copy1

0xa62b,	// (0x00059c8c) setting_text_pane_copy1

0xa62b,	// (0x00059c8c) setting_volume_pane_copy1

0xa623,	// (0x00059c84) settings_code_pane_cp2_copy1

0xa633,	// (0x00059c94) settings_code_pane_cp_copy1_ParamLimits

0xa633,	// (0x00059c94) settings_code_pane_cp_copy1

0x29c0,	// (0x00052021) volume_set_pane_copy1

0xa647,	// (0x00059ca8) volume_set_pane_g10_copy1

0xa64f,	// (0x00059cb0) volume_set_pane_g1_copy1

0xa657,	// (0x00059cb8) volume_set_pane_g2_copy1

0xa65f,	// (0x00059cc0) volume_set_pane_g3_copy1

0xa667,	// (0x00059cc8) volume_set_pane_g4_copy1

0xa66f,	// (0x00059cd0) volume_set_pane_g5_copy1

0xa677,	// (0x00059cd8) volume_set_pane_g6_copy1

0xa67f,	// (0x00059ce0) volume_set_pane_g7_copy1

0xa687,	// (0x00059ce8) volume_set_pane_g8_copy1

0xa68f,	// (0x00059cf0) volume_set_pane_g9_copy1

0x2ca4,	// (0x00052305) bg_set_opt_pane_cp_copy1_ParamLimits

0x2ca4,	// (0x00052305) bg_set_opt_pane_cp_copy1

0x29c8,	// (0x00052029) setting_slider_pane_t1_copy1_ParamLimits

0x29c8,	// (0x00052029) setting_slider_pane_t1_copy1

0x29e6,	// (0x00052047) setting_slider_pane_t2_copy1_ParamLimits

0x29e6,	// (0x00052047) setting_slider_pane_t2_copy1

0x2a00,	// (0x00052061) setting_slider_pane_t3_copy1_ParamLimits

0x2a00,	// (0x00052061) setting_slider_pane_t3_copy1

0x2a18,	// (0x00052079) slider_set_pane_copy1_ParamLimits

0x2a18,	// (0x00052079) slider_set_pane_copy1

0x3d55,	// (0x000533b6) set_opt_bg_pane_g1_copy2

0x3d5d,	// (0x000533be) set_opt_bg_pane_g2_copy2

0xa697,	// (0x00059cf8) set_opt_bg_pane_g3_copy2

0x3d6d,	// (0x000533ce) set_opt_bg_pane_g4_copy2

0x3d75,	// (0x000533d6) set_opt_bg_pane_g5_copy2

0x3d7d,	// (0x000533de) set_opt_bg_pane_g6_copy2

0xa6a1,	// (0x00059d02) set_opt_bg_pane_g7_copy2

0xa6a9,	// (0x00059d0a) set_opt_bg_pane_g8_copy2

0xa6b3,	// (0x00059d14) set_opt_bg_pane_g9_copy2

0x2a2e,	// (0x0005208f) aid_size_touch_slider_mark_copy1_ParamLimits

0x2a2e,	// (0x0005208f) aid_size_touch_slider_mark_copy1

0xa6bd,	// (0x00059d1e) slider_set_pane_g1_copy1

0x2a42,	// (0x000520a3) slider_set_pane_g2_copy1

0x1884,	// (0x00050ee5) slider_set_pane_g3_copy1_ParamLimits

0x1884,	// (0x00050ee5) slider_set_pane_g3_copy1

0x1898,	// (0x00050ef9) slider_set_pane_g4_copy1_ParamLimits

0x1898,	// (0x00050ef9) slider_set_pane_g4_copy1

0x18b0,	// (0x00050f11) slider_set_pane_g5_copy1_ParamLimits

0x18b0,	// (0x00050f11) slider_set_pane_g5_copy1

0x1884,	// (0x00050ee5) slider_set_pane_g6_copy1_ParamLimits

0x1884,	// (0x00050ee5) slider_set_pane_g6_copy1

0x2a4a,	// (0x000520ab) slider_set_pane_g7_copy1_ParamLimits

0x2a4a,	// (0x000520ab) slider_set_pane_g7_copy1

0x2bc4,	// (0x00052225) bg_set_opt_pane_cp2_copy1

0xa6c6,	// (0x00059d27) setting_slider_graphic_pane_g1_copy1

0xa6cf,	// (0x00059d30) setting_slider_graphic_pane_t1_copy1

0xa6df,	// (0x00059d40) setting_slider_graphic_pane_t2_copy1

0xa6ef,	// (0x00059d50) slider_set_pane_cp_copy1

0xa6ff,	// (0x00059d60) input_focus_pane_cp1_copy1

0xa708,	// (0x00059d69) list_set_text_pane_copy1

0xa710,	// (0x00059d71) setting_text_pane_g1_copy1

0x3691,	// (0x00052cf2) set_text_pane_t1_copy1

0xa6ff,	// (0x00059d60) input_focus_pane_cp2_copy1

0xa710,	// (0x00059d71) setting_code_pane_g1_copy1

0xa719,	// (0x00059d7a) setting_code_pane_t1_copy1

0xa727,	// (0x00059d88) list_set_graphic_pane_copy1

0x2bc4,	// (0x00052225) bg_set_opt_pane_cp4_copy1

0x468d,	// (0x00053cee) list_set_graphic_pane_g1_copy1_ParamLimits

0x468d,	// (0x00053cee) list_set_graphic_pane_g1_copy1

0xa73a,	// (0x00059d9b) list_set_graphic_pane_g2_copy1

0x46a5,	// (0x00053d06) list_set_graphic_pane_t1_copy1_ParamLimits

0x46a5,	// (0x00053d06) list_set_graphic_pane_t1_copy1

0x7785,	// (0x00056de6) rs_clock_indi_pane_g1

0xa742,	// (0x00059da3) rs_clock_indi_pane_t1

0xa750,	// (0x00059db1) rs_indi_pane

0xa758,	// (0x00059db9) rs_indi_pane_g1

0xa761,	// (0x00059dc2) rs_indi_pane_g2

0xa76a,	// (0x00059dcb) rs_indi_pane_g3

0x0002,

0xfec3,	// (0x0005f524) rs_indi_pane_g

0x4992,	// (0x00053ff3) bg_popup_preview_window_pane_cp03

0xa773,	// (0x00059dd4) popup_fep_tooltip_window_t1

0x840d,	// (0x00057a6e) popup_note2_window_g2_ParamLimits

0x840d,	// (0x00057a6e) popup_note2_window_g2

0x0001,

0xfc5c,	// (0x0005f2bd) popup_note2_window_g_ParamLimits

0xfc5c,	// (0x0005f2bd) popup_note2_window_g

0x8908,	// (0x00057f69) bg_popup_sub_pane_cp11_ParamLimits

0x8915,	// (0x00057f76) cell_ai3_links_pane_g1_ParamLimits

0x892c,	// (0x00057f8d) cell_ai3_links_pane_t1

0x3691,	// (0x00052cf2) set_text_pane_t1_copy1_ParamLimits

0x48a3,	// (0x00053f04) cell_graphic_popup_pane_cp2_ParamLimits

0x48a3,	// (0x00053f04) cell_graphic_popup_pane_cp2

0xa781,	// (0x00059de2) cell_graphic_popup_pane_g1_cp2

0x3a48,	// (0x000530a9) cell_graphic_popup_pane_g2_cp2

0xa789,	// (0x00059dea) cell_graphic_popup_pane_g3_cp2

0xa791,	// (0x00059df2) cell_graphic_popup_pane_t2_cp2

0x3a59,	// (0x000530ba) grid_highlight_pane_cp3_cp2

0x409a,	// (0x000536fb) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3d09,	// (0x0005336a) main_tmo_pane_ParamLimits

0xe54c,	// (0x0005dbad) popup_tmo_big_image_note_window

0x9e17,	// (0x00059478) cell_ai5_widget_list_pane

0x9e1f,	// (0x00059480) cell_ai5_widget_lrg_icon_pane

0xf1ff,	// (0x0005e860) tmo_note_info_pane_t1_ParamLimits

0xf214,	// (0x0005e875) tmo_note_info_pane_t2_ParamLimits

0xf22b,	// (0x0005e88c) tmo_note_info_pane_t3_ParamLimits

0xa3fe,	// (0x00059a5f) tmo_note_info_pane_t4_ParamLimits

0xa410,	// (0x00059a71) tmo_note_info_pane_t5_ParamLimits

0xfeb1,	// (0x0005f512) tmo_note_info_pane_t_ParamLimits

0xa52e,	// (0x00059b8f) settings_container_pane_ParamLimits

0xa6f7,	// (0x00059d58) indicator_popup_pane_cp5

0xa6f7,	// (0x00059d58) indicator_popup_pane_cp6

0xa727,	// (0x00059d88) list_set_graphic_pane_copy1_ParamLimits

0x2bb0,	// (0x00052211) bg_popup_window_pane_cp23

0xa79f,	// (0x00059e00) popup_tmo_big_image_note_window_g1

0xa7a9,	// (0x00059e0a) popup_tmo_big_image_note_window_t1

0xa7b9,	// (0x00059e1a) popup_tmo_big_image_note_window_t2

0xa7c9,	// (0x00059e2a) popup_tmo_big_image_note_window_t3

0x0002,

0xfeca,	// (0x0005f52b) popup_tmo_big_image_note_window_t

0x7785,	// (0x00056de6) cell_ai5_widget_lrg_icon_pane_g1

0xa7d9,	// (0x00059e3a) cell_ai5_widget_lrg_icon_pane_t1

0xa7e7,	// (0x00059e48) cell_ai5_widget_list_row_pane_ParamLimits

0xa7e7,	// (0x00059e48) cell_ai5_widget_list_row_pane

0xa7fe,	// (0x00059e5f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa7fe,	// (0x00059e5f) cell_ai5_widget_list_row_pane_g1

0xa80b,	// (0x00059e6c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa80b,	// (0x00059e6c) cell_ai5_widget_list_row_pane_t1

0xa83c,	// (0x00059e9d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa83c,	// (0x00059e9d) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed1,	// (0x0005f532) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed1,	// (0x0005f532) cell_ai5_widget_list_row_pane_t

0xf43b,	// (0x0005ea9c) main_fep_vtchi_ss_pane

0xa884,	// (0x00059ee5) popup_fep_char_pre_window

0xa88c,	// (0x00059eed) popup_fep_ituss_window

0xf24f,	// (0x0005e8b0) popup_fep_vkbss_window

0xf25c,	// (0x0005e8bd) grid_vkbss_keypad_pane_ParamLimits

0xf25c,	// (0x0005e8bd) grid_vkbss_keypad_pane

0xa8f2,	// (0x00059f53) ituss_keypad_pane

0x2a6c,	// (0x000520cd) aid_vkbss_key_offset_ParamLimits

0x2a6c,	// (0x000520cd) aid_vkbss_key_offset

0xcd81,	// (0x0005c3e2) cell_vkbss_key_pane_ParamLimits

0xcd81,	// (0x0005c3e2) cell_vkbss_key_pane

0xa901,	// (0x00059f62) bg_cell_vkbss_key_g1_ParamLimits

0xa901,	// (0x00059f62) bg_cell_vkbss_key_g1

0xf26c,	// (0x0005e8cd) cell_vkbss_key_3p_pane_ParamLimits

0xf26c,	// (0x0005e8cd) cell_vkbss_key_3p_pane

0xf286,	// (0x0005e8e7) cell_vkbss_key_g1_ParamLimits

0xf286,	// (0x0005e8e7) cell_vkbss_key_g1

0xf2a0,	// (0x0005e901) cell_vkbss_key_t1_ParamLimits

0xf2a0,	// (0x0005e901) cell_vkbss_key_t1

0x2a8e,	// (0x000520ef) cell_ituss_key_pane_ParamLimits

0x2a8e,	// (0x000520ef) cell_ituss_key_pane

0xa960,	// (0x00059fc1) bg_cell_ituss_key_g1_ParamLimits

0xa960,	// (0x00059fc1) bg_cell_ituss_key_g1

0xa96c,	// (0x00059fcd) cell_ituss_key_pane_g1_ParamLimits

0xa96c,	// (0x00059fcd) cell_ituss_key_pane_g1

0x2a9f,	// (0x00052100) cell_ituss_key_pane_g2_ParamLimits

0x2a9f,	// (0x00052100) cell_ituss_key_pane_g2

0x0002,

0xfed8,	// (0x0005f539) cell_ituss_key_pane_g_ParamLimits

0xfed8,	// (0x0005f539) cell_ituss_key_pane_g

0x2acb,	// (0x0005212c) cell_ituss_key_t1_ParamLimits

0x2acb,	// (0x0005212c) cell_ituss_key_t1

0x2b05,	// (0x00052166) cell_ituss_key_t2_ParamLimits

0x2b05,	// (0x00052166) cell_ituss_key_t2

0x2b36,	// (0x00052197) cell_ituss_key_t3_ParamLimits

0x2b36,	// (0x00052197) cell_ituss_key_t3

0x2b05,	// (0x00052166) cell_ituss_key_t4_ParamLimits

0x2b05,	// (0x00052166) cell_ituss_key_t4

0x0004,

0xfedf,	// (0x0005f540) cell_ituss_key_t_ParamLimits

0xfedf,	// (0x0005f540) cell_ituss_key_t

0xa998,	// (0x00059ff9) cell_vkbss_key_3p_pane_g1

0xa9a0,	// (0x0005a001) cell_vkbss_key_3p_pane_g2

0xa9a8,	// (0x0005a009) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeea,	// (0x0005f54b) cell_vkbss_key_3p_pane_g

0x4992,	// (0x00053ff3) bg_popup_fep_char_preview_window_cp02

0xa9b0,	// (0x0005a011) popup_fep_char_pre_window_t1

0xf143,	// (0x0005e7a4) main_ai5_sk_pane

0xa48a,	// (0x00059aeb) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa496,	// (0x00059af7) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7e23,	// (0x00057484) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa4ab,	// (0x00059b0c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebc,	// (0x0005f51d) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa4b7,	// (0x00059b18) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3d09,	// (0x0005336a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf2cb,	// (0x0005e92c) main_ai5_sk_pane_g1

0x56a6,	// (0x00054d07) popup_query_code_window_g1

0xf240,	// (0x0005e8a1) popup_fep_vkb_icf_pane

0xa8cc,	// (0x00059f2d) popup_fep_vtchi_icf_pane

0xa9c7,	// (0x0005a028) bg_icf_pane

0xa9d3,	// (0x0005a034) list_vkb_icf_pane

0xa9e2,	// (0x0005a043) bg_icf_pane_cp01

0xa9f5,	// (0x0005a056) vtchi_icf_list_pane

0xf2d4,	// (0x0005e935) list_vkb_icf_pane_t1_ParamLimits

0xf2d4,	// (0x0005e935) list_vkb_icf_pane_t1

0xaa26,	// (0x0005a087) vtchi_icf_list_pane_t1_ParamLimits

0xaa26,	// (0x0005a087) vtchi_icf_list_pane_t1

0xa88c,	// (0x00059eed) popup_fep_ituss_window_ParamLimits

0xa8cc,	// (0x00059f2d) popup_fep_vtchi_icf_pane_ParamLimits

0xa8f2,	// (0x00059f53) ituss_keypad_pane_ParamLimits

0x2a60,	// (0x000520c1) ituss_sks_pane

0xa9c7,	// (0x0005a028) bg_icf_pane_ParamLimits

0xa864,	// (0x00059ec5) icf_edit_indi_pane_ParamLimits

0xa864,	// (0x00059ec5) icf_edit_indi_pane

0xa9d3,	// (0x0005a034) list_vkb_icf_pane_ParamLimits

0xa9e2,	// (0x0005a043) bg_icf_pane_cp01_ParamLimits

0xa877,	// (0x00059ed8) icf_edit_indi_pane_cp01_ParamLimits

0xa877,	// (0x00059ed8) icf_edit_indi_pane_cp01

0xa9fd,	// (0x0005a05e) vtchi_query_pane

0x9c26,	// (0x00059287) icf_edit_indi_pane_g1_ParamLimits

0x9c26,	// (0x00059287) icf_edit_indi_pane_g1

0xf2ea,	// (0x0005e94b) icf_edit_indi_pane_g2_ParamLimits

0xf2ea,	// (0x0005e94b) icf_edit_indi_pane_g2

0x0001,

0xff02,	// (0x0005f563) icf_edit_indi_pane_g_ParamLimits

0xff02,	// (0x0005f563) icf_edit_indi_pane_g

0xf2fc,	// (0x0005e95d) icf_edit_indi_pane_t1

0xaa40,	// (0x0005a0a1) bg_input_focus_pane_cp042

0x3c2c,	// (0x0005328d) vtchi_button_pane

0xaa49,	// (0x0005a0aa) vtchi_query_pane_t1

0xaa57,	// (0x0005a0b8) vtchi_query_pane_t2

0xaa65,	// (0x0005a0c6) vtchi_query_pane_t3

0x0002,

0xfef1,	// (0x0005f552) vtchi_query_pane_t

0xf43b,	// (0x0005ea9c) bg_button_pane_cp13

0xaa73,	// (0x0005a0d4) vtchi_button_pane_g1

0x2b79,	// (0x000521da) ituss_sks_pane_g1

0x2b84,	// (0x000521e5) ituss_sks_pane_g2

0x0001,

0xfef8,	// (0x0005f559) ituss_sks_pane_g

0xaa7b,	// (0x0005a0dc) ituss_sks_pane_t1

0xaa89,	// (0x0005a0ea) ituss_sks_pane_t2

0x0001,

0xfefd,	// (0x0005f55e) ituss_sks_pane_t

0x7210,	// (0x00056871) indicator_nsta_pane_cp_g1

0x7218,	// (0x00056879) indicator_nsta_pane_cp_g2

0x7220,	// (0x00056881) indicator_nsta_pane_cp_g3

0x7210,	// (0x00056871) indicator_nsta_pane_cp_g4

0x7218,	// (0x00056879) indicator_nsta_pane_cp_g5

0x7220,	// (0x00056881) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x0005f0fb) indicator_nsta_pane_cp_g

0xef42,	// (0x0005e5a3) cell_graphic2_pane_t2_ParamLimits

0xef42,	// (0x0005e5a3) cell_graphic2_pane_t2

0x0001,

0xfdb3,	// (0x0005f414) cell_graphic2_pane_t_ParamLimits

0xfdb3,	// (0x0005f414) cell_graphic2_pane_t

0xef76,	// (0x0005e5d7) cell_graphic2_control_pane_t1

0xd29e,	// (0x0005c8ff) signal_pane_g3_ParamLimits

0xd29e,	// (0x0005c8ff) signal_pane_g3

0xd2b2,	// (0x0005c913) signal_pane_g4_ParamLimits

0xd2b2,	// (0x0005c913) signal_pane_g4

0xa84e,	// (0x00059eaf) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa84e,	// (0x00059eaf) cell_ai5_widget_list_row_pane_t3

0xa986,	// (0x00059fe7) cell_ituss_key_pane_t1_ParamLimits

0xa986,	// (0x00059fe7) cell_ituss_key_pane_t1

0x52eb,	// (0x0005494c) form_field_data_wide_pane_vc_t2_ParamLimits

0x52eb,	// (0x0005494c) form_field_data_wide_pane_vc_t2

0x52ff,	// (0x00054960) form_field_data_wide_pane_vc_t3_ParamLimits

0x52ff,	// (0x00054960) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0005ee6a) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0005ee6a) form_field_data_wide_pane_vc_t

0x6ed7,	// (0x00056538) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6ed7,	// (0x00056538) form_field_slider_wide_pane_vc_t3

0x6fb5,	// (0x00056616) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6fb5,	// (0x00056616) form_field_popup_wide_pane_vc_t2

0x6fcc,	// (0x0005662d) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6fcc,	// (0x0005662d) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x0005f0ea) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0005f0ea) form_field_popup_wide_pane_vc_t

0xcbeb,	// (0x0005c24c) aid_fshwr2_btn_pane_ParamLimits

0xcbff,	// (0x0005c260) aid_fshwr2_syb_pane_ParamLimits

0xcc13,	// (0x0005c274) aid_fshwr2_txt_pane_ParamLimits

0x2086,	// (0x000516e7) fshwr2_bg_pane_ParamLimits

0xcc23,	// (0x0005c284) fshwr2_func_candi_pane_ParamLimits

0xcc43,	// (0x0005c2a4) fshwr2_hwr_syb_pane_ParamLimits

0xcc65,	// (0x0005c2c6) fshwr2_icf_pane_ParamLimits

0x3286,	// (0x000528e7) list_double_graphic_pane_vc_g4_ParamLimits

0x3286,	// (0x000528e7) list_double_graphic_pane_vc_g4

0x2abf,	// (0x00052120) cell_ituss_key_pane_g3_ParamLimits

0x2abf,	// (0x00052120) cell_ituss_key_pane_g3

0x2b67,	// (0x000521c8) cell_ituss_key_t5_ParamLimits

0x2b67,	// (0x000521c8) cell_ituss_key_t5

0xf24f,	// (0x0005e8b0) popup_fep_vkbss_window_ParamLimits

0x9da6,	// (0x00059407) aid_cell_ai5_quarter

0xf2fc,	// (0x0005e95d) icf_edit_indi_pane_t1_ParamLimits

0x3799,	// (0x00052dfa) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x3799,	// (0x00052dfa) aid_tch_indicator_popup_pane_cp2

0x37ac,	// (0x00052e0d) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x37ac,	// (0x00052e0d) aid_tch_query_popup_data_pane_cp2

0x564e,	// (0x00054caf) aid_tch_query_popup_pane_ParamLimits

0x564e,	// (0x00054caf) aid_tch_query_popup_pane

0x564e,	// (0x00054caf) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x564e,	// (0x00054caf) aid_tch_query_popup_data_pane_cp1

0xa2ed,	// (0x0005994e) cell_fshwr2_syb_bg_pane_ParamLimits

0xcd58,	// (0x0005c3b9) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xcd6b,	// (0x0005c3cc) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf240,	// (0x0005e8a1) popup_fep_vkb_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large

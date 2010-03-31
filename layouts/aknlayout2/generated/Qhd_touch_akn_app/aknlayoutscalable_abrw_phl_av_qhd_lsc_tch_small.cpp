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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002edc1 };

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
0xcf70,	// (0x0003bd31) Screen

0xcf7c,	// (0x0003bd3d) application_window_ParamLimits

0xcf7c,	// (0x0003bd3d) application_window

0x34a2,	// (0x00032263) screen_g1

0xb6d1,	// (0x0003a492) area_bottom_pane_ParamLimits

0xb6d1,	// (0x0003a492) area_bottom_pane

0x022d,	// (0x0002efee) area_top_pane_ParamLimits

0x022d,	// (0x0002efee) area_top_pane

0x02cb,	// (0x0002f08c) main_pane_ParamLimits

0x02cb,	// (0x0002f08c) main_pane

0x34ac,	// (0x0003226d) misc_graphics

0xd624,	// (0x0003c3e5) battery_pane_ParamLimits

0xd624,	// (0x0003c3e5) battery_pane

0x5b27,	// (0x000348e8) bg_status_flat_pane_g8

0x5b2f,	// (0x000348f0) bg_status_flat_pane_g9

0x4f17,	// (0x00033cd8) context_pane_ParamLimits

0x4f17,	// (0x00033cd8) context_pane

0xd78f,	// (0x0003c550) navi_pane_ParamLimits

0xd78f,	// (0x0003c550) navi_pane

0xd80d,	// (0x0003c5ce) signal_pane_ParamLimits

0xd80d,	// (0x0003c5ce) signal_pane

0x0008,

0xf87a,	// (0x0003e63b) bg_status_flat_pane_g

0xd89d,	// (0x0003c65e) status_pane_g1_ParamLimits

0xd89d,	// (0x0003c65e) status_pane_g1

0xd8b3,	// (0x0003c674) status_pane_g2_ParamLimits

0xd8b3,	// (0x0003c674) status_pane_g2

0x513e,	// (0x00033eff) status_pane_g3_ParamLimits

0x513e,	// (0x00033eff) status_pane_g3

0x0004,

0xf7a6,	// (0x0003e567) status_pane_g_ParamLimits

0xf7a6,	// (0x0003e567) status_pane_g

0xd8bf,	// (0x0003c680) title_pane_ParamLimits

0xd8bf,	// (0x0003c680) title_pane

0xd922,	// (0x0003c6e3) uni_indicator_pane_ParamLimits

0xd922,	// (0x0003c6e3) uni_indicator_pane

0x4d79,	// (0x00033b3a) bg_list_pane_ParamLimits

0x4d79,	// (0x00033b3a) bg_list_pane

0xd597,	// (0x0003c358) find_pane

0xc028,	// (0x0003ade9) listscroll_app_pane_ParamLimits

0xc028,	// (0x0003ade9) listscroll_app_pane

0x4da5,	// (0x00033b66) listscroll_form_pane

0xc038,	// (0x0003adf9) listscroll_gen_pane_ParamLimits

0xc038,	// (0x0003adf9) listscroll_gen_pane

0x125d,	// (0x0003001e) listscroll_set_pane

0x66a5,	// (0x00035466) main_idle_act_pane

0x4a7f,	// (0x00033840) main_idle_trad_pane

0x4a7f,	// (0x00033840) main_list_empty_pane

0x4dbf,	// (0x00033b80) main_midp_pane

0x4dcb,	// (0x00033b8c) main_pane_g1_ParamLimits

0x4dcb,	// (0x00033b8c) main_pane_g1

0xc04c,	// (0x0003ae0d) popup_ai_message_window_ParamLimits

0xc04c,	// (0x0003ae0d) popup_ai_message_window

0xc0dd,	// (0x0003ae9e) popup_fep_china_uni_window_ParamLimits

0xc0dd,	// (0x0003ae9e) popup_fep_china_uni_window

0x1375,	// (0x00030136) popup_fep_japan_candidate_window_ParamLimits

0x1375,	// (0x00030136) popup_fep_japan_candidate_window

0x1395,	// (0x00030156) popup_fep_japan_predictive_window_ParamLimits

0x1395,	// (0x00030156) popup_fep_japan_predictive_window

0xc139,	// (0x0003aefa) popup_find_window

0xc156,	// (0x0003af17) popup_grid_graphic_window_ParamLimits

0xc156,	// (0x0003af17) popup_grid_graphic_window

0x13fa,	// (0x000301bb) popup_large_graphic_colour_window

0xc1ee,	// (0x0003afaf) popup_menu_window_ParamLimits

0xc1ee,	// (0x0003afaf) popup_menu_window

0xc3c0,	// (0x0003b181) popup_note_image_window

0xc386,	// (0x0003b147) popup_note_wait_window_ParamLimits

0xc386,	// (0x0003b147) popup_note_wait_window

0xc3d8,	// (0x0003b199) popup_note_window_ParamLimits

0xc3d8,	// (0x0003b199) popup_note_window

0xc47e,	// (0x0003b23f) popup_query_code_window_ParamLimits

0xc47e,	// (0x0003b23f) popup_query_code_window

0x1642,	// (0x00030403) popup_query_data_code_window_ParamLimits

0x1642,	// (0x00030403) popup_query_data_code_window

0xc4b8,	// (0x0003b279) popup_query_data_window_ParamLimits

0xc4b8,	// (0x0003b279) popup_query_data_window

0xc53a,	// (0x0003b2fb) popup_query_sat_info_window_ParamLimits

0xc53a,	// (0x0003b2fb) popup_query_sat_info_window

0xc5d1,	// (0x0003b392) popup_snote_single_graphic_window_ParamLimits

0xc5d1,	// (0x0003b392) popup_snote_single_graphic_window

0xc5d1,	// (0x0003b392) popup_snote_single_text_window_ParamLimits

0xc5d1,	// (0x0003b392) popup_snote_single_text_window

0x16c9,	// (0x0003048a) popup_sub_window_general

0x17f9,	// (0x000305ba) popup_window_general_ParamLimits

0x17f9,	// (0x000305ba) popup_window_general

0x4dd9,	// (0x00033b9a) power_save_pane

0xbeb7,	// (0x0003ac78) control_pane_g1_ParamLimits

0xbeb7,	// (0x0003ac78) control_pane_g1

0xbee0,	// (0x0003aca1) control_pane_g2_ParamLimits

0xbee0,	// (0x0003aca1) control_pane_g2

0x4d3c,	// (0x00033afd) control_pane_g3_ParamLimits

0x4d3c,	// (0x00033afd) control_pane_g3

0x0007,

0xf78e,	// (0x0003e54f) control_pane_g_ParamLimits

0xf78e,	// (0x0003e54f) control_pane_g

0xbf21,	// (0x0003ace2) control_pane_t1_ParamLimits

0xbf21,	// (0x0003ace2) control_pane_t1

0xbf7f,	// (0x0003ad40) control_pane_t2_ParamLimits

0xbf7f,	// (0x0003ad40) control_pane_t2

0x0002,

0xf79f,	// (0x0003e560) control_pane_t_ParamLimits

0xf79f,	// (0x0003e560) control_pane_t

0x4c5d,	// (0x00033a1e) navi_navi_volume_pane_cp1

0x4c66,	// (0x00033a27) status_small_icon_pane

0x4c6e,	// (0x00033a2f) status_small_pane_g1_ParamLimits

0x4c6e,	// (0x00033a2f) status_small_pane_g1

0x4ca2,	// (0x00033a63) status_small_pane_g2_ParamLimits

0x4ca2,	// (0x00033a63) status_small_pane_g2

0x4cae,	// (0x00033a6f) status_small_pane_g3_ParamLimits

0x4cae,	// (0x00033a6f) status_small_pane_g3

0x4cba,	// (0x00033a7b) status_small_pane_g4_ParamLimits

0x4cba,	// (0x00033a7b) status_small_pane_g4

0x4cc6,	// (0x00033a87) status_small_pane_g5_ParamLimits

0x4cc6,	// (0x00033a87) status_small_pane_g5

0x4cd5,	// (0x00033a96) status_small_pane_g6_ParamLimits

0x4cd5,	// (0x00033a96) status_small_pane_g6

0x0007,

0xf77d,	// (0x0003e53e) status_small_pane_g_ParamLimits

0xf77d,	// (0x0003e53e) status_small_pane_g

0x4d05,	// (0x00033ac6) status_small_pane_t1

0x4d28,	// (0x00033ae9) status_small_wait_pane_ParamLimits

0x4d28,	// (0x00033ae9) status_small_wait_pane

0xd424,	// (0x0003c1e5) aid_levels_signal_ParamLimits

0xd424,	// (0x0003c1e5) aid_levels_signal

0xd43c,	// (0x0003c1fd) signal_pane_g1_ParamLimits

0xd43c,	// (0x0003c1fd) signal_pane_g1

0xd457,	// (0x0003c218) signal_pane_g2_ParamLimits

0xd457,	// (0x0003c218) signal_pane_g2

0x0003,

0xf70e,	// (0x0003e4cf) signal_pane_g_ParamLimits

0xf70e,	// (0x0003e4cf) signal_pane_g

0x455e,	// (0x0003331f) context_pane_g1

0xcf8c,	// (0x0003bd4d) title_pane_g1

0xcfc3,	// (0x0003bd84) title_pane_t1

0x3554,	// (0x00032315) title_pane_t2

0x357a,	// (0x0003233b) title_pane_t3

0x0002,

0xf55d,	// (0x0003e31e) title_pane_t

0xd94a,	// (0x0003c70b) aid_levels_battery_ParamLimits

0xd94a,	// (0x0003c70b) aid_levels_battery

0xd966,	// (0x0003c727) battery_pane_g1_ParamLimits

0xd966,	// (0x0003c727) battery_pane_g1

0xd983,	// (0x0003c744) battery_pane_g2_ParamLimits

0xd983,	// (0x0003c744) battery_pane_g2

0x0001,

0xf7b1,	// (0x0003e572) battery_pane_g_ParamLimits

0xf7b1,	// (0x0003e572) battery_pane_g

0xdb52,	// (0x0003c913) uni_indicator_pane_g1

0xdb69,	// (0x0003c92a) uni_indicator_pane_g2

0xdb7f,	// (0x0003c940) uni_indicator_pane_g3

0x0005,

0xf922,	// (0x0003e6e3) uni_indicator_pane_g

0x48f1,	// (0x000336b2) navi_icon_pane_ParamLimits

0x48f1,	// (0x000336b2) navi_icon_pane

0x483a,	// (0x000335fb) navi_midp_pane

0x490d,	// (0x000336ce) navi_navi_pane

0x4917,	// (0x000336d8) navi_text_pane_ParamLimits

0x4917,	// (0x000336d8) navi_text_pane

0x34a2,	// (0x00032263) status_small_wait_pane_g1

0x39a9,	// (0x0003276a) status_small_wait_pane_g2

0x0001,

0xf91d,	// (0x0003e6de) status_small_wait_pane_g

0x6182,	// (0x00034f43) navi_navi_icon_text_pane

0x618a,	// (0x00034f4b) navi_navi_pane_g1_ParamLimits

0x618a,	// (0x00034f4b) navi_navi_pane_g1

0x619c,	// (0x00034f5d) navi_navi_pane_g2_ParamLimits

0x619c,	// (0x00034f5d) navi_navi_pane_g2

0x0001,

0xf8eb,	// (0x0003e6ac) navi_navi_pane_g_ParamLimits

0xf8eb,	// (0x0003e6ac) navi_navi_pane_g

0x61ae,	// (0x00034f6f) navi_navi_tabs_pane

0x61b7,	// (0x00034f78) navi_navi_text_pane

0x6182,	// (0x00034f43) navi_navi_volume_pane

0x615e,	// (0x00034f1f) navi_text_pane_t1

0x6152,	// (0x00034f13) navi_icon_pane_g1

0x60a5,	// (0x00034e66) navi_navi_text_pane_t1

0x1aa5,	// (0x00030866) navi_navi_volume_pane_g1

0x1aad,	// (0x0003086e) volume_small_pane

0x600b,	// (0x00034dcc) navi_navi_icon_text_pane_g1

0x6013,	// (0x00034dd4) navi_navi_icon_text_pane_t1

0x490d,	// (0x000336ce) navi_tabs_2_long_pane

0x490d,	// (0x000336ce) navi_tabs_2_pane

0x490d,	// (0x000336ce) navi_tabs_3_long_pane

0x490d,	// (0x000336ce) navi_tabs_3_pane

0x490d,	// (0x000336ce) navi_tabs_4_pane

0x1a85,	// (0x00030846) tabs_2_active_pane_ParamLimits

0x1a85,	// (0x00030846) tabs_2_active_pane

0x1a95,	// (0x00030856) tabs_2_passive_pane_ParamLimits

0x1a95,	// (0x00030856) tabs_2_passive_pane

0x1a53,	// (0x00030814) tabs_3_active_pane_ParamLimits

0x1a53,	// (0x00030814) tabs_3_active_pane

0x1a63,	// (0x00030824) tabs_3_passive_pane_ParamLimits

0x1a63,	// (0x00030824) tabs_3_passive_pane

0x1a74,	// (0x00030835) tabs_3_passive_pane_cp_ParamLimits

0x1a74,	// (0x00030835) tabs_3_passive_pane_cp

0x1a0f,	// (0x000307d0) tabs_4_active_pane_ParamLimits

0x1a0f,	// (0x000307d0) tabs_4_active_pane

0x1a20,	// (0x000307e1) tabs_4_passive_pane_ParamLimits

0x1a20,	// (0x000307e1) tabs_4_passive_pane

0x1a31,	// (0x000307f2) tabs_4_passive_pane_cp_ParamLimits

0x1a31,	// (0x000307f2) tabs_4_passive_pane_cp

0x1a42,	// (0x00030803) tabs_4_passive_pane_cp2_ParamLimits

0x1a42,	// (0x00030803) tabs_4_passive_pane_cp2

0x19eb,	// (0x000307ac) tabs_2_long_active_pane_ParamLimits

0x19eb,	// (0x000307ac) tabs_2_long_active_pane

0x19fd,	// (0x000307be) tabs_2_long_passive_pane_ParamLimits

0x19fd,	// (0x000307be) tabs_2_long_passive_pane

0x19ac,	// (0x0003076d) tabs_3_long_active_pane_ParamLimits

0x19ac,	// (0x0003076d) tabs_3_long_active_pane

0x19bf,	// (0x00030780) tabs_3_long_passive_pane_ParamLimits

0x19bf,	// (0x00030780) tabs_3_long_passive_pane

0x19d8,	// (0x00030799) tabs_3_long_passive_pane_cp_ParamLimits

0x19d8,	// (0x00030799) tabs_3_long_passive_pane_cp

0x1952,	// (0x00030713) volume_small_pane_g1

0x195b,	// (0x0003071c) volume_small_pane_g2

0x1964,	// (0x00030725) volume_small_pane_g3

0x196d,	// (0x0003072e) volume_small_pane_g4

0x1976,	// (0x00030737) volume_small_pane_g5

0x197f,	// (0x00030740) volume_small_pane_g6

0x1988,	// (0x00030749) volume_small_pane_g7

0x1991,	// (0x00030752) volume_small_pane_g8

0x199a,	// (0x0003075b) volume_small_pane_g9

0x19a3,	// (0x00030764) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x0003e678) volume_small_pane_g

0x3807,	// (0x000325c8) bg_active_tab_pane_cp2_ParamLimits

0x3807,	// (0x000325c8) bg_active_tab_pane_cp2

0x359a,	// (0x0003235b) tabs_3_active_pane_g1

0xd04f,	// (0x0003be10) tabs_3_active_pane_t1

0x3807,	// (0x000325c8) bg_passive_tab_pane_cp2_ParamLimits

0x3807,	// (0x000325c8) bg_passive_tab_pane_cp2

0x359a,	// (0x0003235b) tabs_3_passive_pane_g1

0xd04f,	// (0x0003be10) tabs_3_passive_pane_t1

0x3807,	// (0x000325c8) bg_active_tab_pane_cp3_ParamLimits

0x3807,	// (0x000325c8) bg_active_tab_pane_cp3

0x35b4,	// (0x00032375) tabs_4_active_pane_g1

0xd061,	// (0x0003be22) tabs_4_active_pane_t1

0x3807,	// (0x000325c8) bg_passive_tab_pane_cp3_ParamLimits

0x3807,	// (0x000325c8) bg_passive_tab_pane_cp3

0x35b4,	// (0x00032375) tabs_4_1_passive_pane_g1

0xd061,	// (0x0003be22) tabs_4_1_passive_pane_t1

0x4dbf,	// (0x00033b80) list_highlight_pane_cp2

0xdc07,	// (0x0003c9c8) list_set_pane_ParamLimits

0xdc07,	// (0x0003c9c8) list_set_pane

0xdca1,	// (0x0003ca62) main_pane_set_t1_ParamLimits

0xdca1,	// (0x0003ca62) main_pane_set_t1

0xdcc1,	// (0x0003ca82) main_pane_set_t2_ParamLimits

0xdcc1,	// (0x0003ca82) main_pane_set_t2

0xdcd5,	// (0x0003ca96) main_pane_set_t3_ParamLimits

0xdcd5,	// (0x0003ca96) main_pane_set_t3

0xdce7,	// (0x0003caa8) main_pane_set_t4_ParamLimits

0xdce7,	// (0x0003caa8) main_pane_set_t4

0x0003,

0xf987,	// (0x0003e748) main_pane_set_t_ParamLimits

0xf987,	// (0x0003e748) main_pane_set_t

0xdcf9,	// (0x0003caba) setting_code_pane

0xdd03,	// (0x0003cac4) setting_slider_graphic_pane

0xdd03,	// (0x0003cac4) setting_slider_pane

0xdd03,	// (0x0003cac4) setting_text_pane

0xdd03,	// (0x0003cac4) setting_volume_pane

0x051a,	// (0x0002f2db) volume_set_pane

0x358c,	// (0x0003234d) bg_set_opt_pane_cp

0x0522,	// (0x0002f2e3) setting_slider_pane_t1

0x053b,	// (0x0002f2fc) setting_slider_pane_t2

0x0555,	// (0x0002f316) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0003e325) setting_slider_pane_t

0x056d,	// (0x0002f32e) slider_set_pane

0x34ac,	// (0x0003226d) bg_set_opt_pane_cp2

0x35ce,	// (0x0003238f) setting_slider_graphic_pane_g1

0x0583,	// (0x0002f344) setting_slider_graphic_pane_t1

0x0593,	// (0x0002f354) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0003e32c) setting_slider_graphic_pane_t

0x05a3,	// (0x0002f364) slider_set_pane_cp

0x34ac,	// (0x0003226d) input_focus_pane_cp1

0x668c,	// (0x0003544d) list_set_text_pane

0x34a2,	// (0x00032263) setting_text_pane_g1

0x34ac,	// (0x0003226d) input_focus_pane_cp2

0x34a2,	// (0x00032263) setting_code_pane_g1

0x35d7,	// (0x00032398) setting_code_pane_t1

0x05ab,	// (0x0002f36c) set_text_pane_t1_ParamLimits

0x05ab,	// (0x0002f36c) set_text_pane_t1

0x3e53,	// (0x00032c14) set_opt_bg_pane_g1

0x3e5b,	// (0x00032c1c) set_opt_bg_pane_g2

0x6666,	// (0x00035427) set_opt_bg_pane_g3

0x3e6b,	// (0x00032c2c) set_opt_bg_pane_g4

0x3e73,	// (0x00032c34) set_opt_bg_pane_g5

0x3e7b,	// (0x00032c3c) set_opt_bg_pane_g6

0x6670,	// (0x00035431) set_opt_bg_pane_g7

0x6678,	// (0x00035439) set_opt_bg_pane_g8

0x6682,	// (0x00035443) set_opt_bg_pane_g9

0x0008,

0xf974,	// (0x0003e735) set_opt_bg_pane_g

0x6659,	// (0x0003541a) slider_set_pane_g1

0x1b1a,	// (0x000308db) slider_set_pane_g2

0x0006,

0xf965,	// (0x0003e726) slider_set_pane_g

0x1ab6,	// (0x00030877) volume_set_pane_g1

0x1abe,	// (0x0003087f) volume_set_pane_g2

0x1ac6,	// (0x00030887) volume_set_pane_g3

0x1ace,	// (0x0003088f) volume_set_pane_g4

0x1ad6,	// (0x00030897) volume_set_pane_g5

0x1ade,	// (0x0003089f) volume_set_pane_g6

0x1ae6,	// (0x000308a7) volume_set_pane_g7

0x1aee,	// (0x000308af) volume_set_pane_g8

0x1af6,	// (0x000308b7) volume_set_pane_g9

0x1afe,	// (0x000308bf) volume_set_pane_g10

0x0009,

0xf93d,	// (0x0003e6fe) volume_set_pane_g

0xd073,	// (0x0003be34) indicator_pane_ParamLimits

0xd073,	// (0x0003be34) indicator_pane

0xd09b,	// (0x0003be5c) main_idle_pane_g2_ParamLimits

0xd09b,	// (0x0003be5c) main_idle_pane_g2

0xd0d3,	// (0x0003be94) main_pane_idle_g1_ParamLimits

0xd0d3,	// (0x0003be94) main_pane_idle_g1

0x3626,	// (0x000323e7) popup_clock_digital_analogue_window_ParamLimits

0x3626,	// (0x000323e7) popup_clock_digital_analogue_window

0xd0fa,	// (0x0003bebb) soft_indicator_pane_ParamLimits

0xd0fa,	// (0x0003bebb) soft_indicator_pane

0xd114,	// (0x0003bed5) wallpaper_pane_ParamLimits

0xd114,	// (0x0003bed5) wallpaper_pane

0x34a2,	// (0x00032263) wallpaper_pane_g1

0xd126,	// (0x0003bee7) indicator_pane_g1_ParamLimits

0xd126,	// (0x0003bee7) indicator_pane_g1

0x6a66,	// (0x00035827) navi_navi_icon_text_pane_srt_g1

0x3678,	// (0x00032439) soft_indicator_pane_t1

0x3692,	// (0x00032453) aid_ps_area_pane

0xd13c,	// (0x0003befd) aid_ps_clock_pane

0x36b1,	// (0x00032472) aid_ps_indicator_pane

0x36bd,	// (0x0003247e) indicator_ps_pane_ParamLimits

0x36bd,	// (0x0003247e) indicator_ps_pane

0x36cc,	// (0x0003248d) power_save_pane_g1_ParamLimits

0x36cc,	// (0x0003248d) power_save_pane_g1

0x36d8,	// (0x00032499) power_save_pane_g2_ParamLimits

0x36d8,	// (0x00032499) power_save_pane_g2

0x0121,	// (0x0002eee2) aid_navinavi_width_pane

0x3692,	// (0x00032453) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0003e331) power_save_pane_g_ParamLimits

0xf570,	// (0x0003e331) power_save_pane_g

0x36e6,	// (0x000324a7) power_save_pane_t1_ParamLimits

0x36e6,	// (0x000324a7) power_save_pane_t1

0xd13c,	// (0x0003befd) aid_ps_clock_pane_ParamLimits

0x36b1,	// (0x00032472) aid_ps_indicator_pane_ParamLimits

0x36f8,	// (0x000324b9) power_save_pane_t4_ParamLimits

0x36f8,	// (0x000324b9) power_save_pane_t4

0x0001,

0xf575,	// (0x0003e336) power_save_pane_t_ParamLimits

0xf575,	// (0x0003e336) power_save_pane_t

0x3722,	// (0x000324e3) power_save_t3_ParamLimits

0x3722,	// (0x000324e3) power_save_t3

0x370d,	// (0x000324ce) power_save_t2_ParamLimits

0x370d,	// (0x000324ce) power_save_t2

0x3737,	// (0x000324f8) indicator_ps_pane_g1

0xd14a,	// (0x0003bf0b) ai_gene_pane_ParamLimits

0xd14a,	// (0x0003bf0b) ai_gene_pane

0xd161,	// (0x0003bf22) ai_links_pane_ParamLimits

0xd161,	// (0x0003bf22) ai_links_pane

0xd179,	// (0x0003bf3a) indicator_pane_cp1_ParamLimits

0xd179,	// (0x0003bf3a) indicator_pane_cp1

0xd188,	// (0x0003bf49) main_pane_idle_g1_cp_ParamLimits

0xd188,	// (0x0003bf49) main_pane_idle_g1_cp

0x3770,	// (0x00032531) popup_ai_links_title_window

0xd1a0,	// (0x0003bf61) soft_indicator_pane_cp1_ParamLimits

0xd1a0,	// (0x0003bf61) soft_indicator_pane_cp1

0x644b,	// (0x0003520c) ai_links_pane_g1

0x6454,	// (0x00035215) grid_ai_links_pane

0xdb49,	// (0x0003c90a) ai_gene_pane_1

0x6439,	// (0x000351fa) ai_gene_pane_2

0x6442,	// (0x00035203) list_highlight_pane_cp4

0xdb25,	// (0x0003c8e6) cell_ai_link_pane_ParamLimits

0xdb25,	// (0x0003c8e6) cell_ai_link_pane

0x640a,	// (0x000351cb) cell_ai_link_pane_g1

0x39a9,	// (0x0003276a) cell_ai_link_pane_g2

0x0001,

0xf918,	// (0x0003e6d9) cell_ai_link_pane_g

0x34ac,	// (0x0003226d) grid_highlight_cp2

0x34ac,	// (0x0003226d) bg_popup_sub_pane_cp1

0x3793,	// (0x00032554) popup_ai_links_title_window_t1

0x6358,	// (0x00035119) ai_gene_pane_1_g1_ParamLimits

0x6358,	// (0x00035119) ai_gene_pane_1_g1

0x6364,	// (0x00035125) ai_gene_pane_1_g2_ParamLimits

0x6364,	// (0x00035125) ai_gene_pane_1_g2

0x0001,

0xf90e,	// (0x0003e6cf) ai_gene_pane_1_g_ParamLimits

0xf90e,	// (0x0003e6cf) ai_gene_pane_1_g

0x6371,	// (0x00035132) ai_gene_pane_1_t1_ParamLimits

0x6371,	// (0x00035132) ai_gene_pane_1_t1

0x63a5,	// (0x00035166) grid_ai_soft_ind_pane

0x6343,	// (0x00035104) ai_gene_pane_2_t1_ParamLimits

0x6343,	// (0x00035104) ai_gene_pane_2_t1

0xd1b4,	// (0x0003bf75) main_pane_empty_t1_ParamLimits

0xd1b4,	// (0x0003bf75) main_pane_empty_t1

0xd1cc,	// (0x0003bf8d) main_pane_empty_t2_ParamLimits

0xd1cc,	// (0x0003bf8d) main_pane_empty_t2

0xd1e1,	// (0x0003bfa2) main_pane_empty_t3_ParamLimits

0xd1e1,	// (0x0003bfa2) main_pane_empty_t3

0xd1f3,	// (0x0003bfb4) main_pane_empty_t4_ParamLimits

0xd1f3,	// (0x0003bfb4) main_pane_empty_t4

0xd205,	// (0x0003bfc6) main_pane_empty_t5_ParamLimits

0xd205,	// (0x0003bfc6) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0003e33b) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0003e33b) main_pane_empty_t

0x3ea4,	// (0x00032c65) bg_popup_window_pane_ParamLimits

0x3ea4,	// (0x00032c65) bg_popup_window_pane

0x60b3,	// (0x00034e74) find_popup_pane_cp2_ParamLimits

0x60b3,	// (0x00034e74) find_popup_pane_cp2

0x60bf,	// (0x00034e80) heading_pane_ParamLimits

0x60bf,	// (0x00034e80) heading_pane

0x34ac,	// (0x0003226d) bg_popup_sub_pane

0xdaa6,	// (0x0003c867) bg_popup_window_pane_g1_ParamLimits

0xdaa6,	// (0x0003c867) bg_popup_window_pane_g1

0xdab5,	// (0x0003c876) bg_popup_window_pane_g2_ParamLimits

0xdab5,	// (0x0003c876) bg_popup_window_pane_g2

0xdac1,	// (0x0003c882) bg_popup_window_pane_g3_ParamLimits

0xdac1,	// (0x0003c882) bg_popup_window_pane_g3

0xdacd,	// (0x0003c88e) bg_popup_window_pane_g4_ParamLimits

0xdacd,	// (0x0003c88e) bg_popup_window_pane_g4

0xdadc,	// (0x0003c89d) bg_popup_window_pane_g5_ParamLimits

0xdadc,	// (0x0003c89d) bg_popup_window_pane_g5

0xdaec,	// (0x0003c8ad) bg_popup_window_pane_g6_ParamLimits

0xdaec,	// (0x0003c8ad) bg_popup_window_pane_g6

0xdaf8,	// (0x0003c8b9) bg_popup_window_pane_g7_ParamLimits

0xdaf8,	// (0x0003c8b9) bg_popup_window_pane_g7

0xdb07,	// (0x0003c8c8) bg_popup_window_pane_g8_ParamLimits

0xdb07,	// (0x0003c8c8) bg_popup_window_pane_g8

0xdb16,	// (0x0003c8d7) bg_popup_window_pane_g9_ParamLimits

0xdb16,	// (0x0003c8d7) bg_popup_window_pane_g9

0x6099,	// (0x00034e5a) bg_popup_window_pane_g10_ParamLimits

0x6099,	// (0x00034e5a) bg_popup_window_pane_g10

0x0009,

0xf8d6,	// (0x0003e697) bg_popup_window_pane_g_ParamLimits

0xf8d6,	// (0x0003e697) bg_popup_window_pane_g

0x5fc2,	// (0x00034d83) bg_popup_heading_pane_ParamLimits

0x5fc2,	// (0x00034d83) bg_popup_heading_pane

0x1ba2,	// (0x00030963) tabs_4_passive_pane_cp_srt_ParamLimits

0x1ba2,	// (0x00030963) tabs_4_passive_pane_cp_srt

0x1bb4,	// (0x00030975) tabs_4_passive_pane_srt_ParamLimits

0x5fd6,	// (0x00034d97) heading_pane_g2

0x1bb4,	// (0x00030975) tabs_4_passive_pane_srt

0x533d,	// (0x000340fe) bg_passive_tab_pane_cp3_srt_ParamLimits

0x533d,	// (0x000340fe) bg_passive_tab_pane_cp3_srt

0x5fde,	// (0x00034d9f) heading_pane_t1_ParamLimits

0x5fde,	// (0x00034d9f) heading_pane_t1

0x5ff5,	// (0x00034db6) heading_pane_t2_ParamLimits

0x5ff5,	// (0x00034db6) heading_pane_t2

0x0001,

0xf8d1,	// (0x0003e692) heading_pane_t_ParamLimits

0xf8d1,	// (0x0003e692) heading_pane_t

0x5ae3,	// (0x000348a4) bg_popup_heading_pane_g1

0x5b9e,	// (0x0003495f) bg_popup_heading_pane_g2

0x5ba8,	// (0x00034969) bg_popup_heading_pane_g3

0x5bb2,	// (0x00034973) bg_popup_heading_pane_g4

0x5bbc,	// (0x0003497d) bg_popup_heading_pane_g5

0x5bc6,	// (0x00034987) bg_popup_heading_pane_g6

0x5bce,	// (0x0003498f) bg_popup_heading_pane_g7

0x5bd6,	// (0x00034997) bg_popup_heading_pane_g8

0x5be0,	// (0x000349a1) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x0003e64e) bg_popup_heading_pane_g

0x52c9,	// (0x0003408a) bg_popup_sub_pane_g1

0x52d9,	// (0x0003409a) bg_popup_sub_pane_g2

0x52d1,	// (0x00034092) bg_popup_sub_pane_g3

0x52e9,	// (0x000340aa) bg_popup_sub_pane_g4

0x52e1,	// (0x000340a2) bg_popup_sub_pane_g5

0x52f1,	// (0x000340b2) bg_popup_sub_pane_g6

0x52f9,	// (0x000340ba) bg_popup_sub_pane_g7

0x5309,	// (0x000340ca) bg_popup_sub_pane_g8

0x5301,	// (0x000340c2) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x0003e628) bg_popup_sub_pane_g

0x3807,	// (0x000325c8) bg_popup_window_pane_cp5_ParamLimits

0x3807,	// (0x000325c8) bg_popup_window_pane_cp5

0x3823,	// (0x000325e4) popup_note_window_g1_ParamLimits

0x3823,	// (0x000325e4) popup_note_window_g1

0x382f,	// (0x000325f0) popup_note_window_t1_ParamLimits

0x382f,	// (0x000325f0) popup_note_window_t1

0x3845,	// (0x00032606) popup_note_window_t2_ParamLimits

0x3845,	// (0x00032606) popup_note_window_t2

0x385b,	// (0x0003261c) popup_note_window_t3_ParamLimits

0x385b,	// (0x0003261c) popup_note_window_t3

0x3871,	// (0x00032632) popup_note_window_t4_ParamLimits

0x3871,	// (0x00032632) popup_note_window_t4

0x3899,	// (0x0003265a) popup_note_window_t5_ParamLimits

0x3899,	// (0x0003265a) popup_note_window_t5

0x0004,

0xf585,	// (0x0003e346) popup_note_window_t_ParamLimits

0xf585,	// (0x0003e346) popup_note_window_t

0x38bd,	// (0x0003267e) bg_popup_window_pane_cp6_ParamLimits

0x38bd,	// (0x0003267e) bg_popup_window_pane_cp6

0x5a5f,	// (0x00034820) popup_note_image_window_g1_ParamLimits

0x5a5f,	// (0x00034820) popup_note_image_window_g1

0x5a6b,	// (0x0003482c) popup_note_image_window_g2_ParamLimits

0x5a6b,	// (0x0003482c) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x0003e61c) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x0003e61c) popup_note_image_window_g

0x5a84,	// (0x00034845) popup_note_image_window_t1_ParamLimits

0x5a84,	// (0x00034845) popup_note_image_window_t1

0x5a9d,	// (0x0003485e) popup_note_image_window_t2_ParamLimits

0x5a9d,	// (0x0003485e) popup_note_image_window_t2

0x5ab6,	// (0x00034877) popup_note_image_window_t3_ParamLimits

0x5ab6,	// (0x00034877) popup_note_image_window_t3

0x0002,

0xf860,	// (0x0003e621) popup_note_image_window_t_ParamLimits

0xf860,	// (0x0003e621) popup_note_image_window_t

0x5920,	// (0x000346e1) bg_popup_window_pane_cp7_ParamLimits

0x5920,	// (0x000346e1) bg_popup_window_pane_cp7

0x5950,	// (0x00034711) popup_note_wait_window_g1_ParamLimits

0x5950,	// (0x00034711) popup_note_wait_window_g1

0x595c,	// (0x0003471d) popup_note_wait_window_g2_ParamLimits

0x595c,	// (0x0003471d) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x0003e60a) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x0003e60a) popup_note_wait_window_g

0x5974,	// (0x00034735) popup_note_wait_window_t1_ParamLimits

0x5974,	// (0x00034735) popup_note_wait_window_t1

0x599b,	// (0x0003475c) popup_note_wait_window_t2_ParamLimits

0x599b,	// (0x0003475c) popup_note_wait_window_t2

0x59b8,	// (0x00034779) popup_note_wait_window_t3_ParamLimits

0x59b8,	// (0x00034779) popup_note_wait_window_t3

0x59cb,	// (0x0003478c) popup_note_wait_window_t4_ParamLimits

0x59cb,	// (0x0003478c) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x0003e611) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x0003e611) popup_note_wait_window_t

0x59f0,	// (0x000347b1) wait_bar_pane_ParamLimits

0x59f0,	// (0x000347b1) wait_bar_pane

0x34ac,	// (0x0003226d) wait_anim_pane

0x34ac,	// (0x0003226d) wait_border_pane

0x34a2,	// (0x00032263) wait_anim_pane_g1

0x34a2,	// (0x00032263) wait_anim_pane_g2

0x0001,

0xf709,	// (0x0003e4ca) wait_anim_pane_g

0x58c4,	// (0x00034685) wait_border_pane_g1

0x58cf,	// (0x00034690) wait_border_pane_g2

0x58d8,	// (0x00034699) wait_border_pane_g3

0x0002,

0xf842,	// (0x0003e603) wait_border_pane_g

0x572f,	// (0x000344f0) bg_popup_window_pane_cp16_ParamLimits

0x572f,	// (0x000344f0) bg_popup_window_pane_cp16

0x582f,	// (0x000345f0) indicator_popup_pane_cp4_ParamLimits

0x582f,	// (0x000345f0) indicator_popup_pane_cp4

0x5843,	// (0x00034604) popup_query_data_window_t1_ParamLimits

0x5843,	// (0x00034604) popup_query_data_window_t1

0x5855,	// (0x00034616) popup_query_data_window_t2_ParamLimits

0x5855,	// (0x00034616) popup_query_data_window_t2

0x586e,	// (0x0003462f) popup_query_data_window_t3_ParamLimits

0x586e,	// (0x0003462f) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x0003e5fc) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x0003e5fc) popup_query_data_window_t

0x5888,	// (0x00034649) query_popup_data_pane_ParamLimits

0x5888,	// (0x00034649) query_popup_data_pane

0x589c,	// (0x0003465d) query_popup_data_pane_cp1_ParamLimits

0x589c,	// (0x0003465d) query_popup_data_pane_cp1

0x572f,	// (0x000344f0) bg_popup_window_pane_cp10_ParamLimits

0x572f,	// (0x000344f0) bg_popup_window_pane_cp10

0x5761,	// (0x00034522) indicator_popup_pane_ParamLimits

0x5761,	// (0x00034522) indicator_popup_pane

0x5783,	// (0x00034544) popup_query_code_window_t1_ParamLimits

0x5783,	// (0x00034544) popup_query_code_window_t1

0x579d,	// (0x0003455e) popup_query_code_window_t2_ParamLimits

0x579d,	// (0x0003455e) popup_query_code_window_t2

0x57e6,	// (0x000345a7) popup_query_code_window_t3_ParamLimits

0x57e6,	// (0x000345a7) popup_query_code_window_t3

0x0002,

0xf834,	// (0x0003e5f5) popup_query_code_window_t_ParamLimits

0xf834,	// (0x0003e5f5) popup_query_code_window_t

0x5815,	// (0x000345d6) query_popup_pane_ParamLimits

0x5815,	// (0x000345d6) query_popup_pane

0x38bd,	// (0x0003267e) bg_popup_window_pane_cp15_ParamLimits

0x38bd,	// (0x0003267e) bg_popup_window_pane_cp15

0x38db,	// (0x0003269c) indicator_popup_pane_cp1_ParamLimits

0x38db,	// (0x0003269c) indicator_popup_pane_cp1

0x38ee,	// (0x000326af) indicator_popup_pane_cp2_ParamLimits

0x38ee,	// (0x000326af) indicator_popup_pane_cp2

0x3901,	// (0x000326c2) popup_query_data_code_window_g1_ParamLimits

0x3901,	// (0x000326c2) popup_query_data_code_window_g1

0x3914,	// (0x000326d5) popup_query_data_code_window_t1_ParamLimits

0x3914,	// (0x000326d5) popup_query_data_code_window_t1

0x3926,	// (0x000326e7) popup_query_data_code_window_t2_ParamLimits

0x3926,	// (0x000326e7) popup_query_data_code_window_t2

0x3938,	// (0x000326f9) popup_query_data_code_window_t3_ParamLimits

0x3938,	// (0x000326f9) popup_query_data_code_window_t3

0x394e,	// (0x0003270f) popup_query_data_code_window_t4_ParamLimits

0x394e,	// (0x0003270f) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0003e351) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0003e351) popup_query_data_code_window_t

0x1863,	// (0x00030624) list_single_midp_graphic_pane_g3

0x3966,	// (0x00032727) query_popup_data_pane_cp2_ParamLimits

0x3979,	// (0x0003273a) query_popup_pane_cp2_ParamLimits

0x3979,	// (0x0003273a) query_popup_pane_cp2

0x34ac,	// (0x0003226d) bg_popup_window_pane_cp11

0x5727,	// (0x000344e8) heading_pane_cp5

0x3a61,	// (0x00032822) listscroll_popup_info_pane

0x34ac,	// (0x0003226d) input_focus_pane_cp3

0x398c,	// (0x0003274d) query_popup_pane_t1

0x399a,	// (0x0003275b) list_popup_info_pane_ParamLimits

0x399a,	// (0x0003275b) list_popup_info_pane

0x39a9,	// (0x0003276a) listscroll_popup_info_pane_g1

0x39b1,	// (0x00032772) scroll_pane_cp7

0x39bb,	// (0x0003277c) popup_info_list_pane_t1_ParamLimits

0x39bb,	// (0x0003277c) popup_info_list_pane_t1

0x39d5,	// (0x00032796) popup_info_list_pane_t2_ParamLimits

0x39d5,	// (0x00032796) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0003e35a) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0003e35a) popup_info_list_pane_t

0x34ac,	// (0x0003226d) bg_popup_window_pane_cp12

0x6ac2,	// (0x00035883) find_popup_pane

0x358c,	// (0x0003234d) bg_popup_window_pane_cp3

0x39ef,	// (0x000327b0) heading_pane_cp3

0x39fb,	// (0x000327bc) listscroll_popup_graphic_pane

0x34ac,	// (0x0003226d) bg_popup_window_pane_cp4

0xd267,	// (0x0003c028) heading_pane_cp4

0x3a61,	// (0x00032822) listscroll_popup_colour_pane

0x3a69,	// (0x0003282a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3a69,	// (0x0003282a) cell_large_graphic_colour_none_popup_pane

0xd26f,	// (0x0003c030) grid_large_graphic_colour_popup_pane_ParamLimits

0xd26f,	// (0x0003c030) grid_large_graphic_colour_popup_pane

0x3aa9,	// (0x0003286a) listscroll_popup_colour_pane_g1_ParamLimits

0x3aa9,	// (0x0003286a) listscroll_popup_colour_pane_g1

0x3ac0,	// (0x00032881) listscroll_popup_colour_pane_g2_ParamLimits

0x3ac0,	// (0x00032881) listscroll_popup_colour_pane_g2

0x3ad7,	// (0x00032898) listscroll_popup_colour_pane_g3_ParamLimits

0x3ad7,	// (0x00032898) listscroll_popup_colour_pane_g3

0xd293,	// (0x0003c054) listscroll_popup_colour_pane_g4_ParamLimits

0xd293,	// (0x0003c054) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0003e35f) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0003e35f) listscroll_popup_colour_pane_g

0x3afb,	// (0x000328bc) scroll_pane_cp6_ParamLimits

0x3afb,	// (0x000328bc) scroll_pane_cp6

0xd2a3,	// (0x0003c064) cell_large_graphic_colour_popup_pane_ParamLimits

0xd2a3,	// (0x0003c064) cell_large_graphic_colour_popup_pane

0x3b2c,	// (0x000328ed) cell_large_graphic_colour_none_popup_pane_t1

0x34ac,	// (0x0003226d) grid_highlight_pane_cp5

0x3b3b,	// (0x000328fc) cell_large_graphic_colour_popup_pane_g1

0x3b43,	// (0x00032904) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0003e368) cell_large_graphic_colour_popup_pane_g

0x3b4b,	// (0x0003290c) cell_large_graphic_colour_popup_pane_g2_copy1

0x3b54,	// (0x00032915) grid_highlight_pane_cp4

0x3b5c,	// (0x0003291d) bg_popup_window_pane_cp8_ParamLimits

0x3b5c,	// (0x0003291d) bg_popup_window_pane_cp8

0x3b77,	// (0x00032938) popup_snote_single_text_window_g1_ParamLimits

0x3b77,	// (0x00032938) popup_snote_single_text_window_g1

0x3b89,	// (0x0003294a) popup_snote_single_text_window_t1_ParamLimits

0x3b89,	// (0x0003294a) popup_snote_single_text_window_t1

0x3b9c,	// (0x0003295d) popup_snote_single_text_window_t2_ParamLimits

0x3b9c,	// (0x0003295d) popup_snote_single_text_window_t2

0x3baf,	// (0x00032970) popup_snote_single_text_window_t3_ParamLimits

0x3baf,	// (0x00032970) popup_snote_single_text_window_t3

0x3be8,	// (0x000329a9) popup_snote_single_text_window_t4_ParamLimits

0x3be8,	// (0x000329a9) popup_snote_single_text_window_t4

0x3c1c,	// (0x000329dd) popup_snote_single_text_window_t5_ParamLimits

0x3c1c,	// (0x000329dd) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0003e36d) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0003e36d) popup_snote_single_text_window_t

0x3c4b,	// (0x00032a0c) bg_popup_window_pane_cp9_ParamLimits

0x3c4b,	// (0x00032a0c) bg_popup_window_pane_cp9

0x3b77,	// (0x00032938) popup_snote_single_graphic_window_g1_ParamLimits

0x3b77,	// (0x00032938) popup_snote_single_graphic_window_g1

0x3c59,	// (0x00032a1a) popup_snote_single_graphic_window_g2_ParamLimits

0x3c59,	// (0x00032a1a) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0003e378) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0003e378) popup_snote_single_graphic_window_g

0x3c65,	// (0x00032a26) popup_snote_single_graphic_window_t1_ParamLimits

0x3c65,	// (0x00032a26) popup_snote_single_graphic_window_t1

0x3c78,	// (0x00032a39) popup_snote_single_graphic_window_t2_ParamLimits

0x3c78,	// (0x00032a39) popup_snote_single_graphic_window_t2

0x3c8b,	// (0x00032a4c) popup_snote_single_graphic_window_t3_ParamLimits

0x3c8b,	// (0x00032a4c) popup_snote_single_graphic_window_t3

0x3cc4,	// (0x00032a85) popup_snote_single_graphic_window_t4_ParamLimits

0x3cc4,	// (0x00032a85) popup_snote_single_graphic_window_t4

0x3cf8,	// (0x00032ab9) popup_snote_single_graphic_window_t5_ParamLimits

0x3cf8,	// (0x00032ab9) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0003e37d) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0003e37d) popup_snote_single_graphic_window_t

0x69c4,	// (0x00035785) grid_graphic_popup_pane_ParamLimits

0x69c4,	// (0x00035785) grid_graphic_popup_pane

0x69ec,	// (0x000357ad) listscroll_popup_graphic_pane_g1_ParamLimits

0x69ec,	// (0x000357ad) listscroll_popup_graphic_pane_g1

0xddf4,	// (0x0003cbb5) listscroll_popup_graphic_pane_g2_ParamLimits

0xddf4,	// (0x0003cbb5) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b1,	// (0x0003e772) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b1,	// (0x0003e772) listscroll_popup_graphic_pane_g

0x6a14,	// (0x000357d5) scroll_pane_cp5

0xddb7,	// (0x0003cb78) cell_graphic_popup_pane_ParamLimits

0xddb7,	// (0x0003cb78) cell_graphic_popup_pane

0x694e,	// (0x0003570f) cell_graphic_popup_pane_g1

0x6956,	// (0x00035717) cell_graphic_popup_pane_g2

0x3b4b,	// (0x0003290c) cell_graphic_popup_pane_g3

0x0002,

0xf9aa,	// (0x0003e76b) cell_graphic_popup_pane_g

0x695f,	// (0x00035720) cell_graphic_popup_pane_t2

0x3b54,	// (0x00032915) grid_highlight_pane_cp3

0x3d39,	// (0x00032afa) list_gen_pane_ParamLimits

0x3d39,	// (0x00032afa) list_gen_pane

0x3d6b,	// (0x00032b2c) scroll_pane

0xdd6e,	// (0x0003cb2f) bg_list_pane_g1_ParamLimits

0xdd6e,	// (0x0003cb2f) bg_list_pane_g1

0x68c3,	// (0x00035684) bg_list_pane_g2_ParamLimits

0x68c3,	// (0x00035684) bg_list_pane_g2

0x68d8,	// (0x00035699) bg_list_pane_g3_ParamLimits

0x68d8,	// (0x00035699) bg_list_pane_g3

0x68ec,	// (0x000356ad) bg_list_pane_g4_ParamLimits

0x68ec,	// (0x000356ad) bg_list_pane_g4

0xdd8b,	// (0x0003cb4c) bg_list_pane_g5_ParamLimits

0xdd8b,	// (0x0003cb4c) bg_list_pane_g5

0x0004,

0xf99f,	// (0x0003e760) bg_list_pane_g_ParamLimits

0xf99f,	// (0x0003e760) bg_list_pane_g

0xdd36,	// (0x0003caf7) list_double2_graphic_large_graphic_pane_ParamLimits

0xdd36,	// (0x0003caf7) list_double2_graphic_large_graphic_pane

0xdd36,	// (0x0003caf7) list_double2_graphic_pane_ParamLimits

0xdd36,	// (0x0003caf7) list_double2_graphic_pane

0xdd36,	// (0x0003caf7) list_double2_large_graphic_pane_ParamLimits

0xdd36,	// (0x0003caf7) list_double2_large_graphic_pane

0xdd36,	// (0x0003caf7) list_double2_pane_ParamLimits

0xdd36,	// (0x0003caf7) list_double2_pane

0xdd36,	// (0x0003caf7) list_double_graphic_heading_pane_ParamLimits

0xdd36,	// (0x0003caf7) list_double_graphic_heading_pane

0xdd36,	// (0x0003caf7) list_double_graphic_pane_ParamLimits

0xdd36,	// (0x0003caf7) list_double_graphic_pane

0xdd36,	// (0x0003caf7) list_double_heading_pane_ParamLimits

0xdd36,	// (0x0003caf7) list_double_heading_pane

0xdd36,	// (0x0003caf7) list_double_large_graphic_pane_ParamLimits

0xdd36,	// (0x0003caf7) list_double_large_graphic_pane

0xdd36,	// (0x0003caf7) list_double_number_pane_ParamLimits

0xdd36,	// (0x0003caf7) list_double_number_pane

0xdd36,	// (0x0003caf7) list_double_pane_ParamLimits

0xdd36,	// (0x0003caf7) list_double_pane

0xdd36,	// (0x0003caf7) list_double_time_pane_ParamLimits

0xdd36,	// (0x0003caf7) list_double_time_pane

0xdd36,	// (0x0003caf7) list_setting_number_pane_ParamLimits

0xdd36,	// (0x0003caf7) list_setting_number_pane

0xdd36,	// (0x0003caf7) list_setting_pane_ParamLimits

0xdd36,	// (0x0003caf7) list_setting_pane

0xdd48,	// (0x0003cb09) list_single_2graphic_pane_ParamLimits

0xdd48,	// (0x0003cb09) list_single_2graphic_pane

0xdd48,	// (0x0003cb09) list_single_graphic_heading_pane_ParamLimits

0xdd48,	// (0x0003cb09) list_single_graphic_heading_pane

0xdd48,	// (0x0003cb09) list_single_graphic_pane_ParamLimits

0xdd48,	// (0x0003cb09) list_single_graphic_pane

0xdd48,	// (0x0003cb09) list_single_heading_pane_ParamLimits

0xdd48,	// (0x0003cb09) list_single_heading_pane

0xdd48,	// (0x0003cb09) list_single_large_graphic_pane_ParamLimits

0xdd48,	// (0x0003cb09) list_single_large_graphic_pane

0xdd48,	// (0x0003cb09) list_single_number_heading_pane_ParamLimits

0xdd48,	// (0x0003cb09) list_single_number_heading_pane

0xdd48,	// (0x0003cb09) list_single_number_pane_ParamLimits

0xdd48,	// (0x0003cb09) list_single_number_pane

0xdd48,	// (0x0003cb09) list_single_pane_ParamLimits

0xdd48,	// (0x0003cb09) list_single_pane

0x34ac,	// (0x0003226d) list_highlight_pane_cp1

0x2bc5,	// (0x00031986) list_single_pane_g1_ParamLimits

0x2bc5,	// (0x00031986) list_single_pane_g1

0x2bd1,	// (0x00031992) list_single_pane_g2_ParamLimits

0x2bd1,	// (0x00031992) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0003e38f) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0003e38f) list_single_pane_g

0x2e93,	// (0x00031c54) list_single_pane_t1_ParamLimits

0x2e93,	// (0x00031c54) list_single_pane_t1

0x2bc5,	// (0x00031986) list_single_number_pane_g1_ParamLimits

0x2bc5,	// (0x00031986) list_single_number_pane_g1

0x2bd1,	// (0x00031992) list_single_number_pane_g2_ParamLimits

0x2bd1,	// (0x00031992) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0003e38f) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0003e38f) list_single_number_pane_g

0x2bdd,	// (0x0003199e) list_single_number_pane_t1_ParamLimits

0x2bdd,	// (0x0003199e) list_single_number_pane_t1

0xc777,	// (0x0003b538) list_single_number_pane_t2_ParamLimits

0xc777,	// (0x0003b538) list_single_number_pane_t2

0x0001,

0xf960,	// (0x0003e721) list_single_number_pane_t_ParamLimits

0xf960,	// (0x0003e721) list_single_number_pane_t

0xb8af,	// (0x0003a670) list_single_graphic_pane_g1_ParamLimits

0xb8af,	// (0x0003a670) list_single_graphic_pane_g1

0x2bc5,	// (0x00031986) list_single_graphic_pane_g2_ParamLimits

0x2bc5,	// (0x00031986) list_single_graphic_pane_g2

0x2bd1,	// (0x00031992) list_single_graphic_pane_g3_ParamLimits

0x2bd1,	// (0x00031992) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0003e388) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0003e388) list_single_graphic_pane_g

0xb8bb,	// (0x0003a67c) list_single_graphic_pane_t1_ParamLimits

0xb8bb,	// (0x0003a67c) list_single_graphic_pane_t1

0x2bc5,	// (0x00031986) list_single_heading_pane_g1_ParamLimits

0x2bc5,	// (0x00031986) list_single_heading_pane_g1

0x2bd1,	// (0x00031992) list_single_heading_pane_g2_ParamLimits

0x2bd1,	// (0x00031992) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0003e38f) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0003e38f) list_single_heading_pane_g

0xb8d1,	// (0x0003a692) list_single_heading_pane_t1_ParamLimits

0xb8d1,	// (0x0003a692) list_single_heading_pane_t1

0xb8e7,	// (0x0003a6a8) list_single_heading_pane_t2_ParamLimits

0xb8e7,	// (0x0003a6a8) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0003e394) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0003e394) list_single_heading_pane_t

0x2bc5,	// (0x00031986) list_single_number_heading_pane_g1_ParamLimits

0x2bc5,	// (0x00031986) list_single_number_heading_pane_g1

0x2bd1,	// (0x00031992) list_single_number_heading_pane_g2_ParamLimits

0x2bd1,	// (0x00031992) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0003e38f) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0003e38f) list_single_number_heading_pane_g

0xb8d1,	// (0x0003a692) list_single_number_heading_pane_t1_ParamLimits

0xb8d1,	// (0x0003a692) list_single_number_heading_pane_t1

0xb8f9,	// (0x0003a6ba) list_single_number_heading_pane_t2_ParamLimits

0xb8f9,	// (0x0003a6ba) list_single_number_heading_pane_t2

0x2e6d,	// (0x00031c2e) list_single_number_heading_pane_t3_ParamLimits

0x2e6d,	// (0x00031c2e) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0003e399) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0003e399) list_single_number_heading_pane_t

0x2bb9,	// (0x0003197a) list_single_graphic_heading_pane_g1_ParamLimits

0x2bb9,	// (0x0003197a) list_single_graphic_heading_pane_g1

0xb90b,	// (0x0003a6cc) list_single_graphic_heading_pane_g4_ParamLimits

0xb90b,	// (0x0003a6cc) list_single_graphic_heading_pane_g4

0x2bd1,	// (0x00031992) list_single_graphic_heading_pane_g5_ParamLimits

0x2bd1,	// (0x00031992) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0003e3a0) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0003e3a0) list_single_graphic_heading_pane_g

0xb8d1,	// (0x0003a692) list_single_graphic_heading_pane_t1_ParamLimits

0xb8d1,	// (0x0003a692) list_single_graphic_heading_pane_t1

0xb91c,	// (0x0003a6dd) list_single_graphic_heading_pane_t2_ParamLimits

0xb91c,	// (0x0003a6dd) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0003e3a7) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0003e3a7) list_single_graphic_heading_pane_t

0x2ea9,	// (0x00031c6a) list_single_large_graphic_pane_g1_ParamLimits

0x2ea9,	// (0x00031c6a) list_single_large_graphic_pane_g1

0x2bc5,	// (0x00031986) list_single_large_graphic_pane_g2_ParamLimits

0x2bc5,	// (0x00031986) list_single_large_graphic_pane_g2

0x2bd1,	// (0x00031992) list_single_large_graphic_pane_g3_ParamLimits

0x2bd1,	// (0x00031992) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0003e3ac) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0003e3ac) list_single_large_graphic_pane_g

0x58cf,	// (0x00034690) wait_border_pane_g2_copy1

0xb92e,	// (0x0003a6ef) list_single_large_graphic_pane_g4_cp2

0x2eb5,	// (0x00031c76) list_single_large_graphic_pane_t1_ParamLimits

0x2eb5,	// (0x00031c76) list_single_large_graphic_pane_t1

0xb936,	// (0x0003a6f7) list_double_pane_g1_ParamLimits

0xb936,	// (0x0003a6f7) list_double_pane_g1

0xb942,	// (0x0003a703) list_double_pane_g2_ParamLimits

0xb942,	// (0x0003a703) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0003e3b3) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0003e3b3) list_double_pane_g

0xb94e,	// (0x0003a70f) list_double_pane_t1_ParamLimits

0xb94e,	// (0x0003a70f) list_double_pane_t1

0xb964,	// (0x0003a725) list_double_pane_t2_ParamLimits

0xb964,	// (0x0003a725) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0003e3b8) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0003e3b8) list_double_pane_t

0xb976,	// (0x0003a737) list_double2_pane_g1_ParamLimits

0xb976,	// (0x0003a737) list_double2_pane_g1

0xb987,	// (0x0003a748) list_double2_pane_g2_ParamLimits

0xb987,	// (0x0003a748) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0003e3bd) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0003e3bd) list_double2_pane_g

0xb993,	// (0x0003a754) list_double2_pane_t1_ParamLimits

0xb993,	// (0x0003a754) list_double2_pane_t1

0xb9a9,	// (0x0003a76a) list_double2_pane_t2_ParamLimits

0xb9a9,	// (0x0003a76a) list_double2_pane_t2

0x0001,

0xf601,	// (0x0003e3c2) list_double2_pane_t_ParamLimits

0xf601,	// (0x0003e3c2) list_double2_pane_t

0xb936,	// (0x0003a6f7) list_double_number_pane_g1_ParamLimits

0xb936,	// (0x0003a6f7) list_double_number_pane_g1

0xb942,	// (0x0003a703) list_double_number_pane_g2_ParamLimits

0xb942,	// (0x0003a703) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0003e3b3) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0003e3b3) list_double_number_pane_g

0xb9bb,	// (0x0003a77c) list_double_number_pane_t1_ParamLimits

0xb9bb,	// (0x0003a77c) list_double_number_pane_t1

0xb9cd,	// (0x0003a78e) list_double_number_pane_t2_ParamLimits

0xb9cd,	// (0x0003a78e) list_double_number_pane_t2

0xb9e3,	// (0x0003a7a4) list_double_number_pane_t3_ParamLimits

0xb9e3,	// (0x0003a7a4) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0003e3c7) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0003e3c7) list_double_number_pane_t

0xb9f5,	// (0x0003a7b6) list_double_graphic_pane_g1_ParamLimits

0xb9f5,	// (0x0003a7b6) list_double_graphic_pane_g1

0xba01,	// (0x0003a7c2) list_double_graphic_pane_g2_ParamLimits

0xba01,	// (0x0003a7c2) list_double_graphic_pane_g2

0xba10,	// (0x0003a7d1) list_double_graphic_pane_g3_ParamLimits

0xba10,	// (0x0003a7d1) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0003e3ce) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0003e3ce) list_double_graphic_pane_g

0xba28,	// (0x0003a7e9) list_double_graphic_pane_t1_ParamLimits

0xba28,	// (0x0003a7e9) list_double_graphic_pane_t1

0xba3e,	// (0x0003a7ff) list_double_graphic_pane_t2_ParamLimits

0xba3e,	// (0x0003a7ff) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0003e3d7) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0003e3d7) list_double_graphic_pane_t

0x08f4,	// (0x0002f6b5) list_double2_graphic_pane_g1_ParamLimits

0x08f4,	// (0x0002f6b5) list_double2_graphic_pane_g1

0x30e1,	// (0x00031ea2) list_double2_graphic_pane_g2_ParamLimits

0x30e1,	// (0x00031ea2) list_double2_graphic_pane_g2

0xb987,	// (0x0003a748) list_double2_graphic_pane_g3_ParamLimits

0xb987,	// (0x0003a748) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0003e3dc) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0003e3dc) list_double2_graphic_pane_g

0xba50,	// (0x0003a811) list_double2_graphic_pane_t1_ParamLimits

0xba50,	// (0x0003a811) list_double2_graphic_pane_t1

0xba66,	// (0x0003a827) list_double2_graphic_pane_t2_ParamLimits

0xba66,	// (0x0003a827) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0003e3e3) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0003e3e3) list_double2_graphic_pane_t

0xba78,	// (0x0003a839) list_double_large_graphic_pane_g1_ParamLimits

0xba78,	// (0x0003a839) list_double_large_graphic_pane_g1

0xba97,	// (0x0003a858) list_double_large_graphic_pane_g2_ParamLimits

0xba97,	// (0x0003a858) list_double_large_graphic_pane_g2

0xb942,	// (0x0003a703) list_double_large_graphic_pane_g3_ParamLimits

0xb942,	// (0x0003a703) list_double_large_graphic_pane_g3

0xbaa8,	// (0x0003a869) list_double_large_graphic_pane_g4_ParamLimits

0xbaa8,	// (0x0003a869) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0003e3e8) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0003e3e8) list_double_large_graphic_pane_g

0xbabb,	// (0x0003a87c) list_double_large_graphic_pane_t1_ParamLimits

0xbabb,	// (0x0003a87c) list_double_large_graphic_pane_t1

0xbad4,	// (0x0003a895) list_double_large_graphic_pane_t2_ParamLimits

0xbad4,	// (0x0003a895) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0003e3f3) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0003e3f3) list_double_large_graphic_pane_t

0xbae6,	// (0x0003a8a7) list_double2_large_graphic_pane_g1_ParamLimits

0xbae6,	// (0x0003a8a7) list_double2_large_graphic_pane_g1

0xb976,	// (0x0003a737) list_double2_large_graphic_pane_g2_ParamLimits

0xb976,	// (0x0003a737) list_double2_large_graphic_pane_g2

0xb987,	// (0x0003a748) list_double2_large_graphic_pane_g3_ParamLimits

0xb987,	// (0x0003a748) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0003e3f8) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0003e3f8) list_double2_large_graphic_pane_g

0xbaf2,	// (0x0003a8b3) list_double2_large_graphic_pane_t1_ParamLimits

0xbaf2,	// (0x0003a8b3) list_double2_large_graphic_pane_t1

0xbb08,	// (0x0003a8c9) list_double2_large_graphic_pane_t2_ParamLimits

0xbb08,	// (0x0003a8c9) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0003e3ff) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0003e3ff) list_double2_large_graphic_pane_t

0xbb1a,	// (0x0003a8db) list_double_heading_pane_g1_ParamLimits

0xbb1a,	// (0x0003a8db) list_double_heading_pane_g1

0x06c9,	// (0x0002f48a) list_double_heading_pane_g2_ParamLimits

0x06c9,	// (0x0002f48a) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0003e404) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0003e404) list_double_heading_pane_g

0xbb2b,	// (0x0003a8ec) list_double_heading_pane_t1_ParamLimits

0xbb2b,	// (0x0003a8ec) list_double_heading_pane_t1

0xb9a9,	// (0x0003a76a) list_double_heading_pane_t2_ParamLimits

0xb9a9,	// (0x0003a76a) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0003e409) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0003e409) list_double_heading_pane_t

0x08f4,	// (0x0002f6b5) list_double_graphic_heading_pane_g1_ParamLimits

0x08f4,	// (0x0002f6b5) list_double_graphic_heading_pane_g1

0xbb1a,	// (0x0003a8db) list_double_graphic_heading_pane_g2_ParamLimits

0xbb1a,	// (0x0003a8db) list_double_graphic_heading_pane_g2

0x06c9,	// (0x0002f48a) list_double_graphic_heading_pane_g3_ParamLimits

0x06c9,	// (0x0002f48a) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0003e40e) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0003e40e) list_double_graphic_heading_pane_g

0xbb41,	// (0x0003a902) list_double_graphic_heading_pane_t1_ParamLimits

0xbb41,	// (0x0003a902) list_double_graphic_heading_pane_t1

0xba66,	// (0x0003a827) list_double_graphic_heading_pane_t2_ParamLimits

0xba66,	// (0x0003a827) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0003e415) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0003e415) list_double_graphic_heading_pane_t

0xba97,	// (0x0003a858) list_double_time_pane_g1_ParamLimits

0xba97,	// (0x0003a858) list_double_time_pane_g1

0xb942,	// (0x0003a703) list_double_time_pane_g2_ParamLimits

0xb942,	// (0x0003a703) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0003e41a) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0003e41a) list_double_time_pane_g

0xbb57,	// (0x0003a918) list_double_time_pane_t1_ParamLimits

0xbb57,	// (0x0003a918) list_double_time_pane_t1

0xbb6d,	// (0x0003a92e) list_double_time_pane_t2_ParamLimits

0xbb6d,	// (0x0003a92e) list_double_time_pane_t2

0xbb7f,	// (0x0003a940) list_double_time_pane_t3_ParamLimits

0xbb7f,	// (0x0003a940) list_double_time_pane_t3

0xbb91,	// (0x0003a952) list_double_time_pane_t4_ParamLimits

0xbb91,	// (0x0003a952) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0003e41f) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0003e41f) list_double_time_pane_t

0xbba3,	// (0x0003a964) list_setting_pane_g1_ParamLimits

0xbba3,	// (0x0003a964) list_setting_pane_g1

0xbbaf,	// (0x0003a970) list_setting_pane_g2_ParamLimits

0xbbaf,	// (0x0003a970) list_setting_pane_g2

0x0001,

0xf667,	// (0x0003e428) list_setting_pane_g_ParamLimits

0xf667,	// (0x0003e428) list_setting_pane_g

0xbbbb,	// (0x0003a97c) list_setting_pane_t1_ParamLimits

0xbbbb,	// (0x0003a97c) list_setting_pane_t1

0xbbd5,	// (0x0003a996) list_setting_pane_t2_ParamLimits

0xbbd5,	// (0x0003a996) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0003e42d) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0003e42d) list_setting_pane_t

0xbc14,	// (0x0003a9d5) set_value_pane_cp_ParamLimits

0xbc14,	// (0x0003a9d5) set_value_pane_cp

0xbc20,	// (0x0003a9e1) list_setting_number_pane_g1_ParamLimits

0xbc20,	// (0x0003a9e1) list_setting_number_pane_g1

0xbc2c,	// (0x0003a9ed) list_setting_number_pane_g2_ParamLimits

0xbc2c,	// (0x0003a9ed) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x0003e434) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x0003e434) list_setting_number_pane_g

0xbc38,	// (0x0003a9f9) list_setting_number_pane_t1_ParamLimits

0xbc38,	// (0x0003a9f9) list_setting_number_pane_t1

0xbc51,	// (0x0003aa12) list_setting_number_pane_t2_ParamLimits

0xbc51,	// (0x0003aa12) list_setting_number_pane_t2

0xbc6b,	// (0x0003aa2c) list_setting_number_pane_t3_ParamLimits

0xbc6b,	// (0x0003aa2c) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x0003e439) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x0003e439) list_setting_number_pane_t

0xbc14,	// (0x0003a9d5) set_value_pane_ParamLimits

0xbc14,	// (0x0003a9d5) set_value_pane

0x3d9f,	// (0x00032b60) bg_set_opt_pane_ParamLimits

0x3d9f,	// (0x00032b60) bg_set_opt_pane

0x0a55,	// (0x0002f816) set_value_pane_t1

0x3dc0,	// (0x00032b81) slider_set_pane_cp3

0x3dc9,	// (0x00032b8a) volume_small_pane_cp

0x3dd2,	// (0x00032b93) list_form_gen_pane

0x3ddb,	// (0x00032b9c) scroll_pane_cp8

0xbcae,	// (0x0003aa6f) form_field_data_pane_ParamLimits

0xbcae,	// (0x0003aa6f) form_field_data_pane

0xbcc5,	// (0x0003aa86) form_field_data_wide_pane_ParamLimits

0xbcc5,	// (0x0003aa86) form_field_data_wide_pane

0xbce5,	// (0x0003aaa6) form_field_popup_pane_ParamLimits

0xbce5,	// (0x0003aaa6) form_field_popup_pane

0xbcfd,	// (0x0003aabe) form_field_popup_wide_pane_ParamLimits

0xbcfd,	// (0x0003aabe) form_field_popup_wide_pane

0x0ae9,	// (0x0002f8aa) form_field_slider_pane_ParamLimits

0x0ae9,	// (0x0002f8aa) form_field_slider_pane

0x0afc,	// (0x0002f8bd) form_field_slider_wide_pane_ParamLimits

0x0afc,	// (0x0002f8bd) form_field_slider_wide_pane

0x3dec,	// (0x00032bad) data_form_pane

0xbd1e,	// (0x0003aadf) form_field_data_pane_t1

0x3df8,	// (0x00032bb9) input_focus_pane

0x0b31,	// (0x0002f8f2) data_form_wide_pane

0x0b4e,	// (0x0002f90f) form_field_data_wide_pane_t1

0x3b69,	// (0x0003292a) input_focus_pane_cp6

0xbd38,	// (0x0003aaf9) form_field_popup_pane_t1

0x3df8,	// (0x00032bb9) input_focus_pane_cp7

0x3e26,	// (0x00032be7) list_form_pane

0x0b90,	// (0x0002f951) form_field_popup_wide_pane_t1

0x3df8,	// (0x00032bb9) input_focus_pane_cp8

0x3e32,	// (0x00032bf3) list_form_wide_pane

0xbd5a,	// (0x0003ab1b) form_field_slider_pane_t1_ParamLimits

0xbd5a,	// (0x0003ab1b) form_field_slider_pane_t1

0xbd72,	// (0x0003ab33) form_field_slider_pane_t2_ParamLimits

0xbd72,	// (0x0003ab33) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x0003e449) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x0003e449) form_field_slider_pane_t

0x3807,	// (0x000325c8) input_focus_pane_cp9_ParamLimits

0x3807,	// (0x000325c8) input_focus_pane_cp9

0xbd87,	// (0x0003ab48) slider_cont_pane_ParamLimits

0xbd87,	// (0x0003ab48) slider_cont_pane

0x3e41,	// (0x00032c02) form_field_slider_wide_pane_t1_ParamLimits

0x3e41,	// (0x00032c02) form_field_slider_wide_pane_t1

0x0bec,	// (0x0002f9ad) form_field_slider_wide_pane_t2_ParamLimits

0x0bec,	// (0x0002f9ad) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x0003e44e) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x0003e44e) form_field_slider_wide_pane_t

0x3807,	// (0x000325c8) input_focus_pane_cp10_ParamLimits

0x3807,	// (0x000325c8) input_focus_pane_cp10

0xbd9b,	// (0x0003ab5c) slider_cont_pane_cp1_ParamLimits

0xbd9b,	// (0x0003ab5c) slider_cont_pane_cp1

0xbdaf,	// (0x0003ab70) slider_form_pane_cp

0x3e53,	// (0x00032c14) input_focus_pane_g1

0x3e5b,	// (0x00032c1c) input_focus_pane_g2

0x3e63,	// (0x00032c24) input_focus_pane_g3

0x3e6b,	// (0x00032c2c) input_focus_pane_g4

0x3e73,	// (0x00032c34) input_focus_pane_g5

0x3e7b,	// (0x00032c3c) input_focus_pane_g6

0x3e83,	// (0x00032c44) input_focus_pane_g7

0x3e8b,	// (0x00032c4c) input_focus_pane_g8

0x3e93,	// (0x00032c54) input_focus_pane_g9

0x34a2,	// (0x00032263) input_focus_pane_g10

0x0009,

0xf692,	// (0x0003e453) input_focus_pane_g

0x58d8,	// (0x00034699) wait_border_pane_g3_copy1

0xbdb7,	// (0x0003ab78) data_form_pane_t1

0x34a2,	// (0x00032263) wait_anim_pane_g1_copy1

0xc789,	// (0x0003b54a) data_form_wide_pane_t1

0xbdd1,	// (0x0003ab92) list_form_graphic_pane_cp_ParamLimits

0xbdd1,	// (0x0003ab92) list_form_graphic_pane_cp

0x6801,	// (0x000355c2) slider_form_pane_g1

0x680a,	// (0x000355cb) slider_form_pane_g2

0x0006,

0xf990,	// (0x0003e751) slider_form_pane_g

0xbdd1,	// (0x0003ab92) list_form_graphic_pane_ParamLimits

0xbdd1,	// (0x0003ab92) list_form_graphic_pane

0x0c6a,	// (0x0002fa2b) list_form_graphic_pane_g1

0x2acb,	// (0x0003188c) list_form_graphic_pane_t1_ParamLimits

0x2acb,	// (0x0003188c) list_form_graphic_pane_t1

0x358c,	// (0x0003234d) list_highlight_pane_cp5_ParamLimits

0x358c,	// (0x0003234d) list_highlight_pane_cp5

0xbde3,	// (0x0003aba4) find_pane_g1

0x3e9b,	// (0x00032c5c) input_find_pane

0xbdec,	// (0x0003abad) input_find_pane_g1_ParamLimits

0xbdec,	// (0x0003abad) input_find_pane_g1

0xbdf8,	// (0x0003abb9) input_find_pane_t1_ParamLimits

0xbdf8,	// (0x0003abb9) input_find_pane_t1

0xbe0d,	// (0x0003abce) input_find_pane_t2_ParamLimits

0xbe0d,	// (0x0003abce) input_find_pane_t2

0x0001,

0xf6a7,	// (0x0003e468) input_find_pane_t_ParamLimits

0xf6a7,	// (0x0003e468) input_find_pane_t

0x3ea4,	// (0x00032c65) input_focus_pane_cp5_ParamLimits

0x3ea4,	// (0x00032c65) input_focus_pane_cp5

0x3ebe,	// (0x00032c7f) bg_popup_window_pane_cp2_ParamLimits

0x3ebe,	// (0x00032c7f) bg_popup_window_pane_cp2

0x3ecb,	// (0x00032c8c) listscroll_menu_pane_ParamLimits

0x3ecb,	// (0x00032c8c) listscroll_menu_pane

0xd2d8,	// (0x0003c099) popup_submenu_window_ParamLimits

0xd2d8,	// (0x0003c099) popup_submenu_window

0x3f03,	// (0x00032cc4) find_popup_pane_g1

0x3f0b,	// (0x00032ccc) input_popup_find_pane_cp

0x3ea4,	// (0x00032c65) input_focus_pane_cp4_ParamLimits

0x3ea4,	// (0x00032c65) input_focus_pane_cp4

0x3f21,	// (0x00032ce2) input_popup_find_pane_t1_ParamLimits

0x3f21,	// (0x00032ce2) input_popup_find_pane_t1

0x34ac,	// (0x0003226d) bg_popup_sub_pane_cp

0x3f4f,	// (0x00032d10) listscroll_popup_sub_pane

0x3f57,	// (0x00032d18) list_submenu_pane_ParamLimits

0x3f57,	// (0x00032d18) list_submenu_pane

0x3f68,	// (0x00032d29) scroll_pane_cp4

0x3f70,	// (0x00032d31) list_single_popup_submenu_pane_ParamLimits

0x3f70,	// (0x00032d31) list_single_popup_submenu_pane

0x3f84,	// (0x00032d45) list_single_popup_submenu_pane_g1

0x3f8c,	// (0x00032d4d) list_single_popup_submenu_pane_t1_ParamLimits

0x3f8c,	// (0x00032d4d) list_single_popup_submenu_pane_t1

0x3807,	// (0x000325c8) bg_active_tab_pane_cp1_ParamLimits

0x3807,	// (0x000325c8) bg_active_tab_pane_cp1

0x3fa1,	// (0x00032d62) tabs_2_active_pane_g1

0xd312,	// (0x0003c0d3) tabs_2_active_pane_t1

0x3807,	// (0x000325c8) bg_passive_tab_pane_cp1_ParamLimits

0x3807,	// (0x000325c8) bg_passive_tab_pane_cp1

0x3fa1,	// (0x00032d62) tabs_2_passive_pane_g1

0xd312,	// (0x0003c0d3) tabs_2_passive_pane_t1

0x358c,	// (0x0003234d) bg_active_tab_pane_cp4

0xd324,	// (0x0003c0e5) tabs_2_long_active_pane_t1

0x4dbf,	// (0x00033b80) bg_passive_tab_pane_cp4

0x186b,	// (0x0003062c) list_single_midp_graphic_pane_g4_ParamLimits

0x358c,	// (0x0003234d) bg_active_tab_pane_cp5

0xd337,	// (0x0003c0f8) tabs_3_long_active_pane_t1

0x4dbf,	// (0x00033b80) bg_passive_tab_pane_cp5

0x186b,	// (0x0003062c) list_single_midp_graphic_pane_g4

0x358c,	// (0x0003234d) bg_popup_window_pane_cp13_ParamLimits

0x358c,	// (0x0003234d) bg_popup_window_pane_cp13

0x4003,	// (0x00032dc4) listscroll_popup_fast_pane_ParamLimits

0x4003,	// (0x00032dc4) listscroll_popup_fast_pane

0x4012,	// (0x00032dd3) grid_popup_fast_pane_ParamLimits

0x4012,	// (0x00032dd3) grid_popup_fast_pane

0x4024,	// (0x00032de5) scroll_pane_cp9_ParamLimits

0x4024,	// (0x00032de5) scroll_pane_cp9

0x813b,	// (0x00036efc) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x813b,	// (0x00036efc) list_single_graphic_hl_pane_t1_cp2

0x4048,	// (0x00032e09) input_focus_pane_cp20_ParamLimits

0x4048,	// (0x00032e09) input_focus_pane_cp20

0x4056,	// (0x00032e17) query_popup_data_pane_t1_ParamLimits

0x4056,	// (0x00032e17) query_popup_data_pane_t1

0x4069,	// (0x00032e2a) query_popup_data_pane_t2_ParamLimits

0x4069,	// (0x00032e2a) query_popup_data_pane_t2

0x40af,	// (0x00032e70) query_popup_data_pane_t3_ParamLimits

0x40af,	// (0x00032e70) query_popup_data_pane_t3

0x40f0,	// (0x00032eb1) query_popup_data_pane_t4_ParamLimits

0x40f0,	// (0x00032eb1) query_popup_data_pane_t4

0x412c,	// (0x00032eed) query_popup_data_pane_t5_ParamLimits

0x412c,	// (0x00032eed) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x0003e46d) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x0003e46d) query_popup_data_pane_t

0x3e53,	// (0x00032c14) bg_set_opt_pane_g1

0x3e5b,	// (0x00032c1c) bg_set_opt_pane_g2

0x3e63,	// (0x00032c24) bg_set_opt_pane_g3

0x3e6b,	// (0x00032c2c) bg_set_opt_pane_g4

0x3e73,	// (0x00032c34) bg_set_opt_pane_g5

0x3e7b,	// (0x00032c3c) bg_set_opt_pane_g6

0x3e83,	// (0x00032c44) bg_set_opt_pane_g7

0x3e8b,	// (0x00032c4c) bg_set_opt_pane_g8

0x3e93,	// (0x00032c54) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x0003e478) bg_set_opt_pane_g

0x0f0f,	// (0x0002fcd0) control_top_pane_stacon_ParamLimits

0x0f0f,	// (0x0002fcd0) control_top_pane_stacon

0x0f62,	// (0x0002fd23) signal_pane_stacon_ParamLimits

0x0f62,	// (0x0002fd23) signal_pane_stacon

0x4718,	// (0x000334d9) stacon_top_pane_g1_ParamLimits

0x4718,	// (0x000334d9) stacon_top_pane_g1

0x0f87,	// (0x0002fd48) title_pane_stacon_ParamLimits

0x0f87,	// (0x0002fd48) title_pane_stacon

0x0fb1,	// (0x0002fd72) uni_indicator_pane_stacon_ParamLimits

0x0fb1,	// (0x0002fd72) uni_indicator_pane_stacon

0x0fc6,	// (0x0002fd87) battery_pane_stacon_ParamLimits

0x0fc6,	// (0x0002fd87) battery_pane_stacon

0x100a,	// (0x0002fdcb) control_bottom_pane_stacon_ParamLimits

0x100a,	// (0x0002fdcb) control_bottom_pane_stacon

0x102d,	// (0x0002fdee) navi_pane_stacon_ParamLimits

0x102d,	// (0x0002fdee) navi_pane_stacon

0x473a,	// (0x000334fb) stacon_bottom_pane_g1_ParamLimits

0x473a,	// (0x000334fb) stacon_bottom_pane_g1

0x0c72,	// (0x0002fa33) aid_levels_signal_lsc_ParamLimits

0x0c72,	// (0x0002fa33) aid_levels_signal_lsc

0x0c88,	// (0x0002fa49) signal_pane_stacon_g1_ParamLimits

0x0c88,	// (0x0002fa49) signal_pane_stacon_g1

0x0c9c,	// (0x0002fa5d) signal_pane_stacon_g2_ParamLimits

0x0c9c,	// (0x0002fa5d) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x0003e48b) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0003e48b) signal_pane_stacon_g

0x0cd1,	// (0x0002fa92) title_pane_stacon_t1_ParamLimits

0x0cd1,	// (0x0002fa92) title_pane_stacon_t1

0x4170,	// (0x00032f31) uni_indicator_pane_stacon_g1

0x417a,	// (0x00032f3b) uni_indicator_pane_stacon_g2

0x4184,	// (0x00032f45) uni_indicator_pane_stacon_g3

0x418e,	// (0x00032f4f) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x0003e497) uni_indicator_pane_stacon_g

0x0cf6,	// (0x0002fab7) control_top_pane_stacon_g1

0x0cfe,	// (0x0002fabf) control_top_pane_stacon_t1_ParamLimits

0x0cfe,	// (0x0002fabf) control_top_pane_stacon_t1

0x0d35,	// (0x0002faf6) aid_levels_battery_lsc_ParamLimits

0x0d35,	// (0x0002faf6) aid_levels_battery_lsc

0x0d4c,	// (0x0002fb0d) battery_pane_stacon_g1_ParamLimits

0x0d4c,	// (0x0002fb0d) battery_pane_stacon_g1

0x0d5f,	// (0x0002fb20) battery_pane_stacon_g2_ParamLimits

0x0d5f,	// (0x0002fb20) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x0003e4a0) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x0003e4a0) battery_pane_stacon_g

0x0d9d,	// (0x0002fb5e) navi_icon_pane_stacon

0x0db1,	// (0x0002fb72) navi_navi_pane_stacon

0x0d9d,	// (0x0002fb5e) navi_text_pane_stacon

0x0cf6,	// (0x0002fab7) control_bottom_pane_stacon_g1

0x0dc5,	// (0x0002fb86) control_bottom_pane_stacon_t1_ParamLimits

0x0dc5,	// (0x0002fb86) control_bottom_pane_stacon_t1

0xd349,	// (0x0003c10a) grid_app_pane_ParamLimits

0xd349,	// (0x0003c10a) grid_app_pane

0xd381,	// (0x0003c142) scroll_pane_cp15_ParamLimits

0xd381,	// (0x0003c142) scroll_pane_cp15

0xd396,	// (0x0003c157) cell_app_pane_ParamLimits

0xd396,	// (0x0003c157) cell_app_pane

0xd3db,	// (0x0003c19c) cell_app_pane_g1_ParamLimits

0xd3db,	// (0x0003c19c) cell_app_pane_g1

0x422d,	// (0x00032fee) cell_app_pane_g2_ParamLimits

0x422d,	// (0x00032fee) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x0003e4a5) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x0003e4a5) cell_app_pane_g

0xd3fb,	// (0x0003c1bc) cell_app_pane_t1_ParamLimits

0xd3fb,	// (0x0003c1bc) cell_app_pane_t1

0x4250,	// (0x00033011) grid_highlight_pane_ParamLimits

0x4250,	// (0x00033011) grid_highlight_pane

0x3e53,	// (0x00032c14) cell_highlight_pane_g1

0x3e5b,	// (0x00032c1c) cell_highlight_pane_g2

0x3e63,	// (0x00032c24) cell_highlight_pane_g3

0x3e6b,	// (0x00032c2c) cell_highlight_pane_g4

0x3e73,	// (0x00032c34) cell_highlight_pane_g5

0x3e7b,	// (0x00032c3c) cell_highlight_pane_g6

0x3e83,	// (0x00032c44) cell_highlight_pane_g7

0x3e8b,	// (0x00032c4c) cell_highlight_pane_g8

0x3e93,	// (0x00032c54) cell_highlight_pane_g9

0x34a2,	// (0x00032263) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x0003e453) cell_highlight_pane_g

0x4261,	// (0x00033022) bg_scroll_pane

0x0e0f,	// (0x0002fbd0) scroll_handle_pane

0x42a8,	// (0x00033069) scroll_bg_pane_g1

0x42bd,	// (0x0003307e) scroll_bg_pane_g2

0x42d5,	// (0x00033096) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x0003e4aa) scroll_bg_pane_g

0x42ea,	// (0x000330ab) scroll_handle_focus_pane_ParamLimits

0x42ea,	// (0x000330ab) scroll_handle_focus_pane

0x42a8,	// (0x00033069) scroll_handle_pane_g1

0x42f7,	// (0x000330b8) scroll_handle_pane_g2

0x42d5,	// (0x00033096) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x0003e4b1) scroll_handle_pane_g

0x3ea4,	// (0x00032c65) bg_popup_sub_pane_cp21_ParamLimits

0x3ea4,	// (0x00032c65) bg_popup_sub_pane_cp21

0x430b,	// (0x000330cc) popup_fep_japan_predictive_window_t1_ParamLimits

0x430b,	// (0x000330cc) popup_fep_japan_predictive_window_t1

0x4325,	// (0x000330e6) popup_fep_japan_predictive_window_t2_ParamLimits

0x4325,	// (0x000330e6) popup_fep_japan_predictive_window_t2

0x4358,	// (0x00033119) popup_fep_japan_predictive_window_t3_ParamLimits

0x4358,	// (0x00033119) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x0003e4b8) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x0003e4b8) popup_fep_japan_predictive_window_t

0x34ac,	// (0x0003226d) bg_popup_sub_pane_cp23

0x438f,	// (0x00033150) listscroll_japin_cand_pane

0x4397,	// (0x00033158) popup_fep_japan_candidate_window_t1

0x43a5,	// (0x00033166) candidate_pane_ParamLimits

0x43a5,	// (0x00033166) candidate_pane

0x43b7,	// (0x00033178) scroll_pane_cp30

0x43bf,	// (0x00033180) list_single_popup_jap_candidate_pane_ParamLimits

0x43bf,	// (0x00033180) list_single_popup_jap_candidate_pane

0x34ac,	// (0x0003226d) list_highlight_pane_cp30

0x43d4,	// (0x00033195) list_single_popup_jap_candidate_pane_t1

0x43e3,	// (0x000331a4) level_1_signal

0x43f5,	// (0x000331b6) level_2_signal

0x4408,	// (0x000331c9) level_3_signal

0x441b,	// (0x000331dc) level_4_signal

0x442e,	// (0x000331ef) level_5_signal

0x4441,	// (0x00033202) level_6_signal

0x4454,	// (0x00033215) level_7_signal

0x43e3,	// (0x000331a4) level_1_battery

0x43f5,	// (0x000331b6) level_2_battery

0x4408,	// (0x000331c9) level_3_battery

0x441b,	// (0x000331dc) level_4_battery

0x442e,	// (0x000331ef) level_5_battery

0x4441,	// (0x00033202) level_6_battery

0x4454,	// (0x00033215) level_7_battery

0x447f,	// (0x00033240) list_menu_pane_ParamLimits

0x447f,	// (0x00033240) list_menu_pane

0x4495,	// (0x00033256) scroll_pane_cp25_ParamLimits

0x4495,	// (0x00033256) scroll_pane_cp25

0x44ae,	// (0x0003326f) list_double2_graphic_pane_cp2_ParamLimits

0x44ae,	// (0x0003326f) list_double2_graphic_pane_cp2

0x44ae,	// (0x0003326f) list_double2_large_graphic_pane_cp2_ParamLimits

0x44ae,	// (0x0003326f) list_double2_large_graphic_pane_cp2

0x44ae,	// (0x0003326f) list_double2_pane_cp2_ParamLimits

0x44ae,	// (0x0003326f) list_double2_pane_cp2

0x44ae,	// (0x0003326f) list_double_graphic_pane_cp2_ParamLimits

0x44ae,	// (0x0003326f) list_double_graphic_pane_cp2

0x44ae,	// (0x0003326f) list_double_large_graphic_pane_cp2_ParamLimits

0x44ae,	// (0x0003326f) list_double_large_graphic_pane_cp2

0x44ae,	// (0x0003326f) list_double_number_pane_cp2_ParamLimits

0x44ae,	// (0x0003326f) list_double_number_pane_cp2

0x44ae,	// (0x0003326f) list_double_pane_cp2_ParamLimits

0x44ae,	// (0x0003326f) list_double_pane_cp2

0xd412,	// (0x0003c1d3) list_single_2graphic_pane_cp2_ParamLimits

0xd412,	// (0x0003c1d3) list_single_2graphic_pane_cp2

0xd412,	// (0x0003c1d3) list_single_graphic_heading_pane_cp2_ParamLimits

0xd412,	// (0x0003c1d3) list_single_graphic_heading_pane_cp2

0xd412,	// (0x0003c1d3) list_single_graphic_pane_cp2_ParamLimits

0xd412,	// (0x0003c1d3) list_single_graphic_pane_cp2

0xd412,	// (0x0003c1d3) list_single_heading_pane_cp2_ParamLimits

0xd412,	// (0x0003c1d3) list_single_heading_pane_cp2

0x44eb,	// (0x000332ac) list_single_large_graphic_pane_cp2_ParamLimits

0x44eb,	// (0x000332ac) list_single_large_graphic_pane_cp2

0xd412,	// (0x0003c1d3) list_single_number_heading_pane_cp2_ParamLimits

0xd412,	// (0x0003c1d3) list_single_number_heading_pane_cp2

0xd412,	// (0x0003c1d3) list_single_number_pane_cp2_ParamLimits

0xd412,	// (0x0003c1d3) list_single_number_pane_cp2

0xd412,	// (0x0003c1d3) list_single_pane_cp2_ParamLimits

0xd412,	// (0x0003c1d3) list_single_pane_cp2

0x4567,	// (0x00033328) bg_popup_sub_pane_cp22

0x0ec1,	// (0x0002fc82) popup_side_volume_key_window_g1

0x0eeb,	// (0x0002fcac) popup_side_volume_key_window_t1

0x0f07,	// (0x0002fcc8) volume_small_pane_cp1

0x3807,	// (0x000325c8) bg_popup_sub_pane_cp24_ParamLimits

0x3807,	// (0x000325c8) bg_popup_sub_pane_cp24

0x457d,	// (0x0003333e) fep_china_uni_candidate_pane_ParamLimits

0x457d,	// (0x0003333e) fep_china_uni_candidate_pane

0x4591,	// (0x00033352) fep_china_uni_entry_pane

0x45a1,	// (0x00033362) popup_fep_china_uni_window_g1

0x45bd,	// (0x0003337e) fep_china_uni_entry_pane_g1

0x45c5,	// (0x00033386) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x0003e4e9) fep_china_uni_entry_pane_g

0x45cd,	// (0x0003338e) fep_entry_item_pane

0x45d7,	// (0x00033398) fep_candidate_item_pane

0x45df,	// (0x000333a0) fep_china_uni_candidate_pane_g1

0x45e7,	// (0x000333a8) fep_china_uni_candidate_pane_g2

0x45ef,	// (0x000333b0) fep_china_uni_candidate_pane_g3

0x45f7,	// (0x000333b8) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x0003e4ee) fep_china_uni_candidate_pane_g

0x34a2,	// (0x00032263) fep_entry_item_pane_g1

0x45ff,	// (0x000333c0) fep_entry_item_pane_t1_ParamLimits

0x45ff,	// (0x000333c0) fep_entry_item_pane_t1

0x4615,	// (0x000333d6) fep_candidate_item_pane_t1_ParamLimits

0x4615,	// (0x000333d6) fep_candidate_item_pane_t1

0x462a,	// (0x000333eb) fep_candidate_item_pane_t2_ParamLimits

0x462a,	// (0x000333eb) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x0003e4f7) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x0003e4f7) fep_candidate_item_pane_t

0x358c,	// (0x0003234d) list_highlight_pane_cp31_ParamLimits

0x358c,	// (0x0003234d) list_highlight_pane_cp31

0x463c,	// (0x000333fd) level_1_signal_lsc

0x4645,	// (0x00033406) level_2_signal_lsc

0x464e,	// (0x0003340f) level_3_signal_lsc

0x4657,	// (0x00033418) level_4_signal_lsc

0x4660,	// (0x00033421) level_5_signal_lsc

0x4669,	// (0x0003342a) level_6_signal_lsc

0x4672,	// (0x00033433) level_7_signal_lsc

0x4672,	// (0x00033433) level_1_battery_lsc

0x467b,	// (0x0003343c) level_2_battery_lsc

0x4684,	// (0x00033445) level_3_battery_lsc

0x468d,	// (0x0003344e) level_4_battery_lsc

0x4696,	// (0x00033457) level_5_battery_lsc

0x469f,	// (0x00033460) level_6_battery_lsc

0x463c,	// (0x000333fd) level_7_battery_lsc

0x46a8,	// (0x00033469) scroll_handle_focus_pane_g1

0x46b1,	// (0x00033472) scroll_handle_focus_pane_g2

0x46ba,	// (0x0003347b) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x0003e4fc) scroll_handle_focus_pane_g

0xbe2b,	// (0x0003abec) list_single_2graphic_pane_g1_ParamLimits

0xbe2b,	// (0x0003abec) list_single_2graphic_pane_g1

0xb90b,	// (0x0003a6cc) list_single_2graphic_pane_g2_ParamLimits

0xb90b,	// (0x0003a6cc) list_single_2graphic_pane_g2

0x2bd1,	// (0x00031992) list_single_2graphic_pane_g3_ParamLimits

0x2bd1,	// (0x00031992) list_single_2graphic_pane_g3

0xbe37,	// (0x0003abf8) list_single_2graphic_pane_g4_ParamLimits

0xbe37,	// (0x0003abf8) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x0003e503) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x0003e503) list_single_2graphic_pane_g

0xbe43,	// (0x0003ac04) list_single_2graphic_pane_t1_ParamLimits

0xbe43,	// (0x0003ac04) list_single_2graphic_pane_t1

0xbe71,	// (0x0003ac32) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbe71,	// (0x0003ac32) list_double2_graphic_large_graphic_pane_g1

0xb976,	// (0x0003a737) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb976,	// (0x0003a737) list_double2_graphic_large_graphic_pane_g2

0xb987,	// (0x0003a748) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb987,	// (0x0003a748) list_double2_graphic_large_graphic_pane_g3

0xbe83,	// (0x0003ac44) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbe83,	// (0x0003ac44) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x0003e50c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x0003e50c) list_double2_graphic_large_graphic_pane_g

0xbe8f,	// (0x0003ac50) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbe8f,	// (0x0003ac50) list_double2_graphic_large_graphic_pane_t1

0xbea5,	// (0x0003ac66) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbea5,	// (0x0003ac66) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x0003e515) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x0003e515) list_double2_graphic_large_graphic_pane_t

0x4802,	// (0x000335c3) popup_fast_swap_window_ParamLimits

0x4802,	// (0x000335c3) popup_fast_swap_window

0x481e,	// (0x000335df) popup_side_volume_key_window

0x483a,	// (0x000335fb) stacon_top_pane

0x4844,	// (0x00033605) status_pane_ParamLimits

0x4844,	// (0x00033605) status_pane

0x483a,	// (0x000335fb) status_small_pane

0x34ac,	// (0x0003226d) control_pane

0x34ac,	// (0x0003226d) stacon_bottom_pane

0x3ddb,	// (0x00032b9c) scroll_pane_cp121

0x3dd2,	// (0x00032b93) set_content_pane

0x46c3,	// (0x00033484) bg_active_tab_pane_g1_cp1

0x46cc,	// (0x0003348d) bg_active_tab_pane_g2_cp1

0x46d5,	// (0x00033496) bg_active_tab_pane_g3_cp1

0x46c3,	// (0x00033484) bg_passive_tab_pane_g1_cp1

0x46cc,	// (0x0003348d) bg_passive_tab_pane_g2_cp1

0x46d5,	// (0x00033496) bg_passive_tab_pane_g3_cp1

0x46de,	// (0x0003349f) bg_active_tab_pane_g1_cp2

0x46cc,	// (0x0003348d) bg_active_tab_pane_g2_cp2

0x46e7,	// (0x000334a8) bg_active_tab_pane_g3_cp2

0x46de,	// (0x0003349f) bg_passive_tab_pane_g1_cp2

0x46cc,	// (0x0003348d) bg_passive_tab_pane_g2_cp2

0x46e7,	// (0x000334a8) bg_passive_tab_pane_g3_cp2

0x46f0,	// (0x000334b1) bg_active_tab_pane_g1_cp3

0x46cc,	// (0x0003348d) bg_active_tab_pane_g2_cp3

0x46f9,	// (0x000334ba) bg_active_tab_pane_g3_cp3

0x46f0,	// (0x000334b1) bg_passive_tab_pane_g1_cp3

0x46cc,	// (0x0003348d) bg_passive_tab_pane_g2_cp3

0x46f9,	// (0x000334ba) bg_passive_tab_pane_g3_cp3

0x4702,	// (0x000334c3) bg_active_tab_pane_g1_cp4

0x46cc,	// (0x0003348d) bg_active_tab_pane_g2_cp4

0x470d,	// (0x000334ce) bg_active_tab_pane_g3_cp4

0x4702,	// (0x000334c3) bg_passive_tab_pane_g1_cp4

0x46cc,	// (0x0003348d) bg_passive_tab_pane_g2_cp4

0x470d,	// (0x000334ce) bg_passive_tab_pane_g3_cp4

0x4756,	// (0x00033517) bg_active_tab_pane_g1_cp5

0x46cc,	// (0x0003348d) bg_active_tab_pane_g2_cp5

0x475f,	// (0x00033520) bg_active_tab_pane_g3_cp5

0x4756,	// (0x00033517) bg_passive_tab_pane_g1_cp5

0x46cc,	// (0x0003348d) bg_passive_tab_pane_g2_cp5

0x475f,	// (0x00033520) bg_passive_tab_pane_g3_cp5

0x6e16,	// (0x00035bd7) list_set_graphic_pane_ParamLimits

0x6e16,	// (0x00035bd7) list_set_graphic_pane

0x34ac,	// (0x0003226d) bg_set_opt_pane_cp4

0xd49f,	// (0x0003c260) list_set_graphic_pane_g1_ParamLimits

0xd49f,	// (0x0003c260) list_set_graphic_pane_g1

0xd4ab,	// (0x0003c26c) list_set_graphic_pane_g2_ParamLimits

0xd4ab,	// (0x0003c26c) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x0003e51a) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x0003e51a) list_set_graphic_pane_g

0x0009,

0xfac0,	// (0x0003e881) volume_small_pane_cp_g

0x47b5,	// (0x00033576) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x47b5,	// (0x00033576) list_double2_large_graphic_pane_g1_cp2

0x47c1,	// (0x00033582) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x47c1,	// (0x00033582) list_double2_large_graphic_pane_g2_cp2

0x47d2,	// (0x00033593) list_double2_large_graphic_pane_g3_cp2

0x47da,	// (0x0003359b) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x47da,	// (0x0003359b) list_double2_large_graphic_pane_t1_cp2

0x47f0,	// (0x000335b1) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x47f0,	// (0x000335b1) list_double2_large_graphic_pane_t2_cp2

0x63b7,	// (0x00035178) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x63b7,	// (0x00035178) list_double_large_graphic_pane_g1_cp2

0x63c8,	// (0x00035189) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x63c8,	// (0x00035189) list_double_large_graphic_pane_g2_cp2

0x4960,	// (0x00033721) list_double_large_graphic_pane_g3_cp2

0x63d9,	// (0x0003519a) list_double_large_graphic_pane_g4_cp

0x63e1,	// (0x000351a2) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x63e1,	// (0x000351a2) list_double_large_graphic_pane_t1_cp2

0x63f8,	// (0x000351b9) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x63f8,	// (0x000351b9) list_double_large_graphic_pane_t2_cp2

0x4852,	// (0x00033613) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4852,	// (0x00033613) list_double2_graphic_pane_g1_cp2

0x4860,	// (0x00033621) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4860,	// (0x00033621) list_double2_graphic_pane_g2_cp2

0x4871,	// (0x00033632) list_double2_graphic_pane_g3_cp2

0x487b,	// (0x0003363c) list_double2_graphic_pane_t1_cp2_ParamLimits

0x487b,	// (0x0003363c) list_double2_graphic_pane_t1_cp2

0x4891,	// (0x00033652) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4891,	// (0x00033652) list_double2_graphic_pane_t2_cp2

0x48a3,	// (0x00033664) list_single_number_heading_pane_g1_cp2_ParamLimits

0x48a3,	// (0x00033664) list_single_number_heading_pane_g1_cp2

0x48af,	// (0x00033670) list_single_number_heading_pane_g2_cp2

0x48b7,	// (0x00033678) list_single_number_heading_pane_t1_cp2_ParamLimits

0x48b7,	// (0x00033678) list_single_number_heading_pane_t1_cp2

0x48cd,	// (0x0003368e) list_single_number_heading_pane_t2_cp2_ParamLimits

0x48cd,	// (0x0003368e) list_single_number_heading_pane_t2_cp2

0x48df,	// (0x000336a0) list_single_number_heading_pane_t3_cp2_ParamLimits

0x48df,	// (0x000336a0) list_single_number_heading_pane_t3_cp2

0x48a3,	// (0x00033664) list_single_heading_pane_g1_cp2_ParamLimits

0x48a3,	// (0x00033664) list_single_heading_pane_g1_cp2

0x48af,	// (0x00033670) list_single_heading_pane_g2_cp2

0x48b7,	// (0x00033678) list_single_heading_pane_t1_cp2_ParamLimits

0x48b7,	// (0x00033678) list_single_heading_pane_t1_cp2

0x61bf,	// (0x00034f80) list_single_heading_pane_t2_cp2_ParamLimits

0x61bf,	// (0x00034f80) list_single_heading_pane_t2_cp2

0x6107,	// (0x00034ec8) list_double_graphic_pane_g1_cp2_ParamLimits

0x6107,	// (0x00034ec8) list_double_graphic_pane_g1_cp2

0x6113,	// (0x00034ed4) list_double_graphic_pane_g2_cp2_ParamLimits

0x6113,	// (0x00034ed4) list_double_graphic_pane_g2_cp2

0x6122,	// (0x00034ee3) list_double_graphic_pane_g3_cp2

0x612a,	// (0x00034eeb) list_double_graphic_pane_t1_cp2_ParamLimits

0x612a,	// (0x00034eeb) list_double_graphic_pane_t1_cp2

0x6140,	// (0x00034f01) list_double_graphic_pane_t2_cp2_ParamLimits

0x6140,	// (0x00034f01) list_double_graphic_pane_t2_cp2

0x4954,	// (0x00033715) list_double_number_pane_g1_cp2_ParamLimits

0x4954,	// (0x00033715) list_double_number_pane_g1_cp2

0x4960,	// (0x00033721) list_double_number_pane_g2_cp2

0x60cb,	// (0x00034e8c) list_double_number_pane_t1_cp2_ParamLimits

0x60cb,	// (0x00034e8c) list_double_number_pane_t1_cp2

0x60df,	// (0x00034ea0) list_double_number_pane_t2_cp2_ParamLimits

0x60df,	// (0x00034ea0) list_double_number_pane_t2_cp2

0x60f5,	// (0x00034eb6) list_double_number_pane_t3_cp2_ParamLimits

0x60f5,	// (0x00034eb6) list_double_number_pane_t3_cp2

0x5fb4,	// (0x00034d75) list_single_graphic_pane_g1_cp2_ParamLimits

0x5fb4,	// (0x00034d75) list_single_graphic_pane_g1_cp2

0x49b8,	// (0x00033779) list_single_graphic_pane_g2_cp2_ParamLimits

0x49b8,	// (0x00033779) list_single_graphic_pane_g2_cp2

0x49c4,	// (0x00033785) list_single_graphic_pane_g3_cp2

0x5f8a,	// (0x00034d4b) list_single_graphic_pane_t1_cp2_ParamLimits

0x5f8a,	// (0x00034d4b) list_single_graphic_pane_t1_cp2

0x49b8,	// (0x00033779) list_single_number_pane_g1_cp2_ParamLimits

0x49b8,	// (0x00033779) list_single_number_pane_g1_cp2

0x49c4,	// (0x00033785) list_single_number_pane_g2_cp2

0x5f8a,	// (0x00034d4b) list_single_number_pane_t1_cp2_ParamLimits

0x5f8a,	// (0x00034d4b) list_single_number_pane_t1_cp2

0x5fa0,	// (0x00034d61) list_single_number_pane_t2_cp2_ParamLimits

0x5fa0,	// (0x00034d61) list_single_number_pane_t2_cp2

0x47c1,	// (0x00033582) list_double2_pane_g1_cp2_ParamLimits

0x47c1,	// (0x00033582) list_double2_pane_g1_cp2

0x47d2,	// (0x00033593) list_double2_pane_g2_cp2

0x492c,	// (0x000336ed) list_double2_pane_t1_cp2_ParamLimits

0x492c,	// (0x000336ed) list_double2_pane_t1_cp2

0x4942,	// (0x00033703) list_double2_pane_t2_cp2_ParamLimits

0x4942,	// (0x00033703) list_double2_pane_t2_cp2

0x4954,	// (0x00033715) list_double_pane_g1_cp2_ParamLimits

0x4954,	// (0x00033715) list_double_pane_g1_cp2

0x4960,	// (0x00033721) list_double_pane_g2_cp2

0x4968,	// (0x00033729) list_double_pane_t1_cp2_ParamLimits

0x4968,	// (0x00033729) list_double_pane_t1_cp2

0x497e,	// (0x0003373f) list_double_pane_t2_cp2_ParamLimits

0x497e,	// (0x0003373f) list_double_pane_t2_cp2

0x49a8,	// (0x00033769) list_single_pane_cp2_g3

0x49b8,	// (0x00033779) list_single_pane_g1_cp2_ParamLimits

0x49b8,	// (0x00033779) list_single_pane_g1_cp2

0x49c4,	// (0x00033785) list_single_pane_g2_cp2

0x49cc,	// (0x0003378d) list_single_pane_t1_cp2_ParamLimits

0x49cc,	// (0x0003378d) list_single_pane_t1_cp2

0x49e4,	// (0x000337a5) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x49e4,	// (0x000337a5) list_single_large_graphic_pane_g1_cp2

0x49f0,	// (0x000337b1) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x49f0,	// (0x000337b1) list_single_large_graphic_pane_g2_cp2

0x49fc,	// (0x000337bd) list_single_large_graphic_pane_g3_cp2

0x4a04,	// (0x000337c5) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4a04,	// (0x000337c5) list_single_large_graphic_pane_g4_cp1

0x4a1e,	// (0x000337df) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4a1e,	// (0x000337df) list_single_large_graphic_pane_t1_cp2

0x5f56,	// (0x00034d17) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5f56,	// (0x00034d17) list_single_graphic_heading_pane_g1_cp2

0x5f23,	// (0x00034ce4) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5f23,	// (0x00034ce4) list_single_graphic_heading_pane_g4_cp2

0x49c4,	// (0x00033785) list_single_graphic_heading_pane_g5_cp2

0x5f62,	// (0x00034d23) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5f62,	// (0x00034d23) list_single_graphic_heading_pane_t1_cp2

0x5f78,	// (0x00034d39) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5f78,	// (0x00034d39) list_single_graphic_heading_pane_t2_cp2

0x5f17,	// (0x00034cd8) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5f17,	// (0x00034cd8) list_single_2graphic_pane_g1_cp2

0x5f23,	// (0x00034ce4) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5f23,	// (0x00034ce4) list_single_2graphic_pane_g2_cp2

0x49c4,	// (0x00033785) list_single_2graphic_pane_g3_cp2

0x5f34,	// (0x00034cf5) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5f34,	// (0x00034cf5) list_single_2graphic_pane_g4_cp2

0x5f40,	// (0x00034d01) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5f40,	// (0x00034d01) list_single_2graphic_pane_t1_cp2

0x34a2,	// (0x00032263) list_highlight_pane_g10_cp1

0x5ae3,	// (0x000348a4) list_highlight_pane_g1_cp1

0x5aeb,	// (0x000348ac) list_highlight_pane_g2_cp1

0x5af3,	// (0x000348b4) list_highlight_pane_g3_cp1

0x5afb,	// (0x000348bc) list_highlight_pane_g4_cp1

0x5b03,	// (0x000348c4) list_highlight_pane_g5_cp1

0x5b17,	// (0x000348d8) list_highlight_pane_g6_cp1

0x5b1f,	// (0x000348e0) list_highlight_pane_g7_cp1

0x5b27,	// (0x000348e8) list_highlight_pane_g8_cp1

0x5b2f,	// (0x000348f0) list_highlight_pane_g9_cp1

0xda5d,	// (0x0003c81e) form_field_slider_pane_t3

0xda6b,	// (0x0003c82c) form_field_slider_pane_t4

0x5a1f,	// (0x000347e0) slider_form_pane_ParamLimits

0x5a1f,	// (0x000347e0) slider_form_pane

0x34ac,	// (0x0003226d) control_abbreviations

0x34ac,	// (0x0003226d) control_conventions

0x34ac,	// (0x0003226d) control_definitions

0x34ac,	// (0x0003226d) format_table_attribute

0x6209,	// (0x00034fca) bg_popup_preview_window_pane_g9

0x34ac,	// (0x0003226d) format_table_data2

0x34ac,	// (0x0003226d) format_table_data3

0x34ac,	// (0x0003226d) format_table_data_example

0x0008,

0x34ac,	// (0x0003226d) intro_purpose

0xf8f0,	// (0x0003e6b1) bg_popup_preview_window_pane_g

0x34ac,	// (0x0003226d) texts_category

0x34ac,	// (0x0003226d) texts_graphics

0x4a34,	// (0x000337f5) text_digital

0x4a43,	// (0x00033804) text_primary

0x4a52,	// (0x00033813) text_primary_small

0x4a61,	// (0x00033822) text_secondary

0x4a70,	// (0x00033831) text_title

0x6922,	// (0x000356e3) bg_passive_tab_pane_g1_cp3_srt

0x46cc,	// (0x0003348d) bg_passive_tab_pane_g2_cp3_srt

0x692b,	// (0x000356ec) bg_passive_tab_pane_g3_cp3_srt

0x3807,	// (0x000325c8) bg_active_tab_pane_cp3_srt_ParamLimits

0x3807,	// (0x000325c8) bg_active_tab_pane_cp3_srt

0x6934,	// (0x000356f5) tabs_4_active_pane_srt_g1

0xdda1,	// (0x0003cb62) tabs_4_active_pane_srt_t1_ParamLimits

0xdda1,	// (0x0003cb62) tabs_4_active_pane_srt_t1

0x6922,	// (0x000356e3) bg_active_tab_pane_g1_cp3_copy1

0x46cc,	// (0x0003348d) bg_active_tab_pane_g2_cp3_copy1

0x692b,	// (0x000356ec) bg_active_tab_pane_g3_cp3_copy1

0x358c,	// (0x0003234d) tabs_2_long_active_pane_srt_ParamLimits

0x358c,	// (0x0003234d) tabs_2_long_active_pane_srt

0x358c,	// (0x0003234d) tabs_2_long_passive_pane_srt_ParamLimits

0x358c,	// (0x0003234d) tabs_2_long_passive_pane_srt

0x4dbf,	// (0x00033b80) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4dbf,	// (0x00033b80) bg_passive_tab_pane_cp4_srt

0x6634,	// (0x000353f5) bg_passive_tab_pane_g1_cp4_srt

0x46cc,	// (0x0003348d) bg_passive_tab_pane_g2_cp4_srt

0x663d,	// (0x000353fe) bg_passive_tab_pane_g3_cp4_srt

0x358c,	// (0x0003234d) bg_active_tab_pane_cp4_srt_ParamLimits

0x358c,	// (0x0003234d) bg_active_tab_pane_cp4_srt

0xdbcb,	// (0x0003c98c) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdbcb,	// (0x0003c98c) tabs_2_long_active_pane_srt_t1

0x6634,	// (0x000353f5) bg_active_tab_pane_g1_cp4_srt

0x46cc,	// (0x0003348d) bg_active_tab_pane_g2_cp4_srt

0x663d,	// (0x000353fe) bg_active_tab_pane_g3_cp4_srt

0x3807,	// (0x000325c8) tabs_3_long_active_pane_srt_ParamLimits

0x3807,	// (0x000325c8) tabs_3_long_active_pane_srt

0x3807,	// (0x000325c8) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3807,	// (0x000325c8) tabs_3_long_passive_pane_cp_srt

0x3807,	// (0x000325c8) tabs_3_long_passive_pane_srt_ParamLimits

0x3807,	// (0x000325c8) tabs_3_long_passive_pane_srt

0x4dbf,	// (0x00033b80) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4dbf,	// (0x00033b80) bg_passive_tab_pane_cp5_srt

0x4756,	// (0x00033517) bg_passive_tab_pane_g1_cp5_srt

0x46cc,	// (0x0003348d) bg_passive_tab_pane_g2_cp5_srt

0x475f,	// (0x00033520) bg_passive_tab_pane_g3_cp5_srt

0x358c,	// (0x0003234d) bg_active_tab_pane_cp5_srt_ParamLimits

0x358c,	// (0x0003234d) bg_active_tab_pane_cp5_srt

0xdbb5,	// (0x0003c976) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdbb5,	// (0x0003c976) tabs_3_long_active_pane_srt_t1

0x4756,	// (0x00033517) bg_active_tab_pane_g1_cp5_srt

0x46cc,	// (0x0003348d) bg_active_tab_pane_g2_cp5_srt

0x475f,	// (0x00033520) bg_active_tab_pane_g3_cp5_srt

0x6614,	// (0x000353d5) navi_text_pane_srt_t1

0x660c,	// (0x000353cd) navi_icon_pane_srt_g1

0x4c37,	// (0x000339f8) midp_editing_number_pane_srt

0x4a7f,	// (0x00033840) midp_ticker_pane_srt

0x4c3f,	// (0x00033a00) midp_ticker_pane_srt_g1

0x4c47,	// (0x00033a08) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x0003e539) midp_ticker_pane_srt_g

0x4c4f,	// (0x00033a10) midp_ticker_pane_srt_t1

0x65fd,	// (0x000353be) midp_editing_number_pane_t1_copy1

0x4dbf,	// (0x00033b80) listscroll_midp_pane

0x4dbf,	// (0x00033b80) midp_form_pane

0x4ae9,	// (0x000338aa) midp_info_popup_window_ParamLimits

0x4ae9,	// (0x000338aa) midp_info_popup_window

0x3ea4,	// (0x00032c65) bg_popup_sub_pane_cp50_ParamLimits

0x3ea4,	// (0x00032c65) bg_popup_sub_pane_cp50

0x571b,	// (0x000344dc) listscroll_midp_info_pane_ParamLimits

0x571b,	// (0x000344dc) listscroll_midp_info_pane

0x5703,	// (0x000344c4) listscroll_form_midp_pane_ParamLimits

0x5703,	// (0x000344c4) listscroll_form_midp_pane

0x570f,	// (0x000344d0) scroll_bar_cp050

0xda51,	// (0x0003c812) list_midp_pane

0x73c0,	// (0x00036181) signal_pane_g2_cp

0x561d,	// (0x000343de) listscroll_midp_info_pane_t1_ParamLimits

0x561d,	// (0x000343de) listscroll_midp_info_pane_t1

0x5635,	// (0x000343f6) listscroll_midp_info_pane_t2_ParamLimits

0x5635,	// (0x000343f6) listscroll_midp_info_pane_t2

0x5673,	// (0x00034434) listscroll_midp_info_pane_t3_ParamLimits

0x5673,	// (0x00034434) listscroll_midp_info_pane_t3

0x56ad,	// (0x0003446e) listscroll_midp_info_pane_t4_ParamLimits

0x56ad,	// (0x0003446e) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x0003e5ec) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x0003e5ec) listscroll_midp_info_pane_t

0x3f68,	// (0x00032d29) scroll_pane_cp21

0x55bb,	// (0x0003437c) form_midp_field_choice_group_pane

0x55c4,	// (0x00034385) form_midp_field_text_pane

0x5603,	// (0x000343c4) form_midp_field_time_pane

0x560b,	// (0x000343cc) form_midp_gauge_slider_pane

0x5614,	// (0x000343d5) form_midp_gauge_wait_pane

0x34ac,	// (0x0003226d) form_midp_image_pane

0xc760,	// (0x0003b521) list_single_midp_pane_ParamLimits

0xc760,	// (0x0003b521) list_single_midp_pane

0xda2f,	// (0x0003c7f0) form_midp_field_text_pane_t1

0x533d,	// (0x000340fe) input_focus_pane_cp050

0x55aa,	// (0x0003436b) list_midp_form_text_pane

0x5542,	// (0x00034303) form_midp_field_choice_group_pane_t1

0x5550,	// (0x00034311) input_focus_pane_cp051

0x5564,	// (0x00034325) list_midp_choice_pane

0x34ac,	// (0x0003226d) status_idle_pane

0x5526,	// (0x000342e7) form_midp_field_time_pane_t1

0x34a2,	// (0x00032263) wait_anim_pane_g2_copy1

0x5534,	// (0x000342f5) form_midp_field_time_pane_t2

0x0001,

0x4b97,	// (0x00033958) aid_navinavi_width_2_pane

0xf826,	// (0x0003e5e7) form_midp_field_time_pane_t

0x34ac,	// (0x0003226d) input_focus_pane_cp052

0x34ac,	// (0x0003226d) bg_input_focus_pane_cp040

0x54e6,	// (0x000342a7) form_midp_gauge_slider_pane_t1

0x54f4,	// (0x000342b5) form_midp_gauge_slider_pane_t2

0xda13,	// (0x0003c7d4) form_midp_gauge_slider_pane_t3

0xda21,	// (0x0003c7e2) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x0003e5de) form_midp_gauge_slider_pane_t

0x551e,	// (0x000342df) form_midp_slider_pane

0x358c,	// (0x0003234d) bg_input_focus_pane_cp041_ParamLimits

0x358c,	// (0x0003234d) bg_input_focus_pane_cp041

0x54b3,	// (0x00034274) form_midp_gauge_wait_pane_t1_ParamLimits

0x54b3,	// (0x00034274) form_midp_gauge_wait_pane_t1

0x54c5,	// (0x00034286) form_midp_gauge_wait_pane_t2_ParamLimits

0x54c5,	// (0x00034286) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x0003e5d9) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x0003e5d9) form_midp_gauge_wait_pane_t

0x54d7,	// (0x00034298) form_midp_wait_pane_ParamLimits

0x54d7,	// (0x00034298) form_midp_wait_pane

0x547d,	// (0x0003423e) form_midp_image_pane_g1

0x5486,	// (0x00034247) form_midp_image_pane_t1

0x5495,	// (0x00034256) form_midp_image_pane_t2

0x54a4,	// (0x00034265) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x0003e5d2) form_midp_image_pane_t

0x5474,	// (0x00034235) list_single_midp_pane_g1

0x2c9d,	// (0x00031a5e) list_single_midp_pane_t1

0xd9fe,	// (0x0003c7bf) list_midp_form_item_pane_ParamLimits

0xd9fe,	// (0x0003c7bf) list_midp_form_item_pane

0x4b3f,	// (0x00033900) list_midp_form_item_pane_t1

0x4b4e,	// (0x0003390f) midp_ticker_pane_g1

0x4b5a,	// (0x0003391b) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x0003e51f) midp_ticker_pane_g

0x4b66,	// (0x00033927) midp_ticker_pane_t1

0x684e,	// (0x0003560f) midp_editing_number_pane_t1

0x682c,	// (0x000355ed) midp_editing_number_pane

0x683b,	// (0x000355fc) midp_ticker_pane

0x65ed,	// (0x000353ae) ai_message_heading_pane

0x34ac,	// (0x0003226d) bg_popup_window_pane_cp14

0x65f5,	// (0x000353b6) listscroll_ai_message_pane

0x6577,	// (0x00035338) ai_message_heading_pane_g1_ParamLimits

0x6577,	// (0x00035338) ai_message_heading_pane_g1

0x6583,	// (0x00035344) ai_message_heading_pane_g2_ParamLimits

0x6583,	// (0x00035344) ai_message_heading_pane_g2

0x658f,	// (0x00035350) ai_message_heading_pane_g3_ParamLimits

0x658f,	// (0x00035350) ai_message_heading_pane_g3

0x659b,	// (0x0003535c) ai_message_heading_pane_g4_ParamLimits

0x659b,	// (0x0003535c) ai_message_heading_pane_g4

0x0003,

0xf952,	// (0x0003e713) ai_message_heading_pane_g_ParamLimits

0xf952,	// (0x0003e713) ai_message_heading_pane_g

0x65a7,	// (0x00035368) ai_message_heading_pane_t1_ParamLimits

0x65a7,	// (0x00035368) ai_message_heading_pane_t1

0x65c1,	// (0x00035382) ai_message_heading_pane_t2_ParamLimits

0x65c1,	// (0x00035382) ai_message_heading_pane_t2

0x0001,

0xf95b,	// (0x0003e71c) ai_message_heading_pane_t_ParamLimits

0xf95b,	// (0x0003e71c) ai_message_heading_pane_t

0x65d3,	// (0x00035394) bg_popup_heading_pane_cp1_ParamLimits

0x65d3,	// (0x00035394) bg_popup_heading_pane_cp1

0x6565,	// (0x00035326) list_ai_message_pane_ParamLimits

0x6565,	// (0x00035326) list_ai_message_pane

0x3f68,	// (0x00032d29) scroll_pane_cp10

0x6501,	// (0x000352c2) list_ai_message_pane_g1

0x6509,	// (0x000352ca) list_ai_message_pane_g2

0x0001,

0xf92f,	// (0x0003e6f0) list_ai_message_pane_g

0x6511,	// (0x000352d2) list_ai_message_pane_t1_ParamLimits

0x6511,	// (0x000352d2) list_ai_message_pane_t1

0x6526,	// (0x000352e7) list_ai_message_pane_t2_ParamLimits

0x6526,	// (0x000352e7) list_ai_message_pane_t2

0x653b,	// (0x000352fc) list_ai_message_pane_t3_ParamLimits

0x653b,	// (0x000352fc) list_ai_message_pane_t3

0x6550,	// (0x00035311) list_ai_message_pane_t4_ParamLimits

0x6550,	// (0x00035311) list_ai_message_pane_t4

0x0003,

0xf934,	// (0x0003e6f5) list_ai_message_pane_t_ParamLimits

0xf934,	// (0x0003e6f5) list_ai_message_pane_t

0xdb94,	// (0x0003c955) cell_ai_soft_ind_pane_ParamLimits

0xdb94,	// (0x0003c955) cell_ai_soft_ind_pane

0x4b78,	// (0x00033939) cell_ai_soft_ind_pane_g1_ParamLimits

0x4b78,	// (0x00033939) cell_ai_soft_ind_pane_g1

0x34ac,	// (0x0003226d) grid_highlight_cp1

0x4b85,	// (0x00033946) text_secondary_cp56_ParamLimits

0x4b85,	// (0x00033946) text_secondary_cp56

0x64c1,	// (0x00035282) example_general_pane_ParamLimits

0x64c1,	// (0x00035282) example_general_pane

0x64cd,	// (0x0003528e) example_parent_pane_g1_ParamLimits

0x64cd,	// (0x0003528e) example_parent_pane_g1

0x64d9,	// (0x0003529a) example_parent_pane_t1_ParamLimits

0x64d9,	// (0x0003529a) example_parent_pane_t1

0xc40a,	// (0x0003b1cb) popup_preview_text_window_ParamLimits

0xc40a,	// (0x0003b1cb) popup_preview_text_window

0x49b0,	// (0x00033771) list_single_pane_cp2_g4

0x38bd,	// (0x0003267e) bg_popup_preview_window_pane_ParamLimits

0x38bd,	// (0x0003267e) bg_popup_preview_window_pane

0x6211,	// (0x00034fd2) popup_preview_text_window_t1_ParamLimits

0x6211,	// (0x00034fd2) popup_preview_text_window_t1

0x622f,	// (0x00034ff0) popup_preview_text_window_t2_ParamLimits

0x622f,	// (0x00034ff0) popup_preview_text_window_t2

0x6278,	// (0x00035039) popup_preview_text_window_t3_ParamLimits

0x6278,	// (0x00035039) popup_preview_text_window_t3

0x62bd,	// (0x0003507e) popup_preview_text_window_t4_ParamLimits

0x62bd,	// (0x0003507e) popup_preview_text_window_t4

0x0004,

0xf903,	// (0x0003e6c4) popup_preview_text_window_t_ParamLimits

0xf903,	// (0x0003e6c4) popup_preview_text_window_t

0x633b,	// (0x000350fc) scroll_pane_cp11

0x52c9,	// (0x0003408a) bg_popup_preview_window_pane_g1

0x61d1,	// (0x00034f92) bg_popup_preview_window_pane_g2

0x61d9,	// (0x00034f9a) bg_popup_preview_window_pane_g3

0x61e1,	// (0x00034fa2) bg_popup_preview_window_pane_g4

0x61e9,	// (0x00034faa) bg_popup_preview_window_pane_g5

0x61f1,	// (0x00034fb2) bg_popup_preview_window_pane_g6

0x61f9,	// (0x00034fba) bg_popup_preview_window_pane_g7

0x6201,	// (0x00034fc2) bg_popup_preview_window_pane_g8

0x012d,	// (0x0002eeee) aid_popup_width_pane

0xc386,	// (0x0003b147) popup_midp_note_alarm_window_ParamLimits

0xc386,	// (0x0003b147) popup_midp_note_alarm_window

0x3dec,	// (0x00032bad) data_form_pane_ParamLimits

0xbd14,	// (0x0003aad5) form_field_data_pane_g1

0xbd1e,	// (0x0003aadf) form_field_data_pane_t1_ParamLimits

0x3df8,	// (0x00032bb9) input_focus_pane_ParamLimits

0x0b31,	// (0x0002f8f2) data_form_wide_pane_ParamLimits

0x0b42,	// (0x0002f903) form_field_data_wide_pane_g1

0x0b4e,	// (0x0002f90f) form_field_data_wide_pane_t1_ParamLimits

0x3b69,	// (0x0003292a) input_focus_pane_cp6_ParamLimits

0xd304,	// (0x0003c0c5) input_popup_find_pane_g1_ParamLimits

0xd304,	// (0x0003c0c5) input_popup_find_pane_g1

0x0d70,	// (0x0002fb31) aid_navi_side_left_pane

0x0d85,	// (0x0002fb46) aid_navi_side_right_pane

0x5bea,	// (0x000349ab) bg_popup_window_pane_cp30_ParamLimits

0x5bea,	// (0x000349ab) bg_popup_window_pane_cp30

0x5c64,	// (0x00034a25) popup_midp_note_alarm_window_g1_ParamLimits

0x5c64,	// (0x00034a25) popup_midp_note_alarm_window_g1

0x5c94,	// (0x00034a55) popup_midp_note_alarm_window_t1_ParamLimits

0x5c94,	// (0x00034a55) popup_midp_note_alarm_window_t1

0x5d35,	// (0x00034af6) popup_midp_note_alarm_window_t2_ParamLimits

0x5d35,	// (0x00034af6) popup_midp_note_alarm_window_t2

0x5de3,	// (0x00034ba4) popup_midp_note_alarm_window_t3_ParamLimits

0x5de3,	// (0x00034ba4) popup_midp_note_alarm_window_t3

0x5e15,	// (0x00034bd6) popup_midp_note_alarm_window_t4_ParamLimits

0x5e15,	// (0x00034bd6) popup_midp_note_alarm_window_t4

0x5e3b,	// (0x00034bfc) popup_midp_note_alarm_window_t5_ParamLimits

0x5e3b,	// (0x00034bfc) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x0003e661) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x0003e661) popup_midp_note_alarm_window_t

0x5ee7,	// (0x00034ca8) wait_bar_pane_cp1_ParamLimits

0x5ee7,	// (0x00034ca8) wait_bar_pane_cp1

0x34ac,	// (0x0003226d) wait_anim_pane_copy1

0x34ac,	// (0x0003226d) wait_border_pane_copy1

0x58c4,	// (0x00034685) wait_border_pane_g1_copy1

0x0b68,	// (0x0002f929) form_field_popup_pane_g1

0xbd38,	// (0x0003aaf9) form_field_popup_pane_t1_ParamLimits

0x3df8,	// (0x00032bb9) input_focus_pane_cp7_ParamLimits

0x3e26,	// (0x00032be7) list_form_pane_ParamLimits

0x0b88,	// (0x0002f949) form_field_popup_wide_pane_g1

0x0b90,	// (0x0002f951) form_field_popup_wide_pane_t1_ParamLimits

0x3df8,	// (0x00032bb9) input_focus_pane_cp8_ParamLimits

0x3e32,	// (0x00032bf3) list_form_wide_pane_ParamLimits

0x69ae,	// (0x0003576f) aid_size_cell_graphic_pane

0xbdb7,	// (0x0003ab78) data_form_pane_t1_ParamLimits

0xc789,	// (0x0003b54a) data_form_wide_pane_t1_ParamLimits

0xd683,	// (0x0003c444) bg_status_flat_pane

0xcfc3,	// (0x0003bd84) title_pane_t1_ParamLimits

0x3554,	// (0x00032315) title_pane_t2_ParamLimits

0x357a,	// (0x0003233b) title_pane_t3_ParamLimits

0xf55d,	// (0x0003e31e) title_pane_t_ParamLimits

0x43e3,	// (0x000331a4) level_1_signal_ParamLimits

0x43f5,	// (0x000331b6) level_2_signal_ParamLimits

0x4408,	// (0x000331c9) level_3_signal_ParamLimits

0x441b,	// (0x000331dc) level_4_signal_ParamLimits

0x442e,	// (0x000331ef) level_5_signal_ParamLimits

0x4441,	// (0x00033202) level_6_signal_ParamLimits

0x4454,	// (0x00033215) level_7_signal_ParamLimits

0x43e3,	// (0x000331a4) level_1_battery_ParamLimits

0x43f5,	// (0x000331b6) level_2_battery_ParamLimits

0x4408,	// (0x000331c9) level_3_battery_ParamLimits

0x441b,	// (0x000331dc) level_4_battery_ParamLimits

0x442e,	// (0x000331ef) level_5_battery_ParamLimits

0x4441,	// (0x00033202) level_6_battery_ParamLimits

0x4454,	// (0x00033215) level_7_battery_ParamLimits

0x5ae3,	// (0x000348a4) bg_status_flat_pane_g1

0x5aeb,	// (0x000348ac) bg_status_flat_pane_g2

0x5af3,	// (0x000348b4) bg_status_flat_pane_g3

0x5afb,	// (0x000348bc) bg_status_flat_pane_g4

0x5b03,	// (0x000348c4) bg_status_flat_pane_g5

0x5b17,	// (0x000348d8) bg_status_flat_pane_g6

0x5b1f,	// (0x000348e0) bg_status_flat_pane_g7

0xd04f,	// (0x0003be10) tabs_3_active_pane_t1_ParamLimits

0xd04f,	// (0x0003be10) tabs_3_passive_pane_t1_ParamLimits

0xd061,	// (0x0003be22) tabs_4_active_pane_t1_ParamLimits

0xd061,	// (0x0003be22) tabs_4_1_passive_pane_t1_ParamLimits

0xd312,	// (0x0003c0d3) tabs_2_active_pane_t1_ParamLimits

0xd312,	// (0x0003c0d3) tabs_2_passive_pane_t1_ParamLimits

0x358c,	// (0x0003234d) bg_active_tab_pane_cp4_ParamLimits

0xd324,	// (0x0003c0e5) tabs_2_long_active_pane_t1_ParamLimits

0x4dbf,	// (0x00033b80) bg_passive_tab_pane_cp4_ParamLimits

0x189f,	// (0x00030660) list_single_midp_graphic_pane_t1_ParamLimits

0x358c,	// (0x0003234d) bg_active_tab_pane_cp5_ParamLimits

0xd337,	// (0x0003c0f8) tabs_3_long_active_pane_t1_ParamLimits

0x4dbf,	// (0x00033b80) bg_passive_tab_pane_cp5_ParamLimits

0x189f,	// (0x00030660) list_single_midp_graphic_pane_t1

0xd683,	// (0x0003c444) bg_status_flat_pane_ParamLimits

0x4f59,	// (0x00033d1a) indicator_pane_cp2_ParamLimits

0x4f59,	// (0x00033d1a) indicator_pane_cp2

0xd801,	// (0x0003c5c2) navi_pane_srt_ParamLimits

0xd801,	// (0x0003c5c2) navi_pane_srt

0x50a8,	// (0x00033e69) popup_clock_digital_analogue_window_cp1

0x3669,	// (0x0003242a) indicator_pane_t1

0x4a7f,	// (0x00033840) copy_highlight_pane

0x4a7f,	// (0x00033840) cursor_graphics_pane

0x4a7f,	// (0x00033840) graphic_within_text_pane

0x4a7f,	// (0x00033840) link_highlight_pane

0x62fe,	// (0x000350bf) popup_preview_text_window_t5_ParamLimits

0x62fe,	// (0x000350bf) popup_preview_text_window_t5

0x4b9f,	// (0x00033960) cursor_digital_pane

0x4b9f,	// (0x00033960) cursor_primary_pane

0x4bb0,	// (0x00033971) cursor_primary_small_pane

0x4bb8,	// (0x00033979) cursor_secondary_pane

0x4bc0,	// (0x00033981) cursor_title_pane

0x4b9f,	// (0x00033960) link_highlight_digital_pane

0x4ba7,	// (0x00033968) link_highlight_primary_pane

0x4bb0,	// (0x00033971) link_highlight_primary_small_pane

0x4bb8,	// (0x00033979) link_highlight_secondary_pane

0x4bc0,	// (0x00033981) link_highlight_title_pane

0x4b9f,	// (0x00033960) copy_highlight_digital_pane

0x4b9f,	// (0x00033960) copy_highlight_primary_pane

0x4bb0,	// (0x00033971) copy_highlight_primary_small_pane

0x4bb8,	// (0x00033979) copy_highlight_secondary_pane

0x4bc0,	// (0x00033981) copy_highlight_title_pane

0x4bb8,	// (0x00033979) graphic_text_digital_pane

0x5b8d,	// (0x0003494e) graphic_text_primary_pane

0x5b96,	// (0x00034957) graphic_text_primary_small_pane

0x4bb0,	// (0x00033971) graphic_text_secondary_pane

0x4b9f,	// (0x00033960) graphic_text_title_pane

0xd566,	// (0x0003c327) cursor_primary_pane_g1

0x5b7f,	// (0x00034940) cursor_text_primary_t1

0xda8d,	// (0x0003c84e) cursor_primary_small_pane_g1

0x5b71,	// (0x00034932) cursor_text_primary_small_t1

0xda83,	// (0x0003c844) cursor_primary_small_pane_g1_copy1

0x5b59,	// (0x0003491a) cursor_text_primary_small_t1_copy1

0x5b37,	// (0x000348f8) cursor_text_title_t1

0xda79,	// (0x0003c83a) cursor_title_pane_g1

0xd566,	// (0x0003c327) cursor_digital_pane_g1

0x4bd2,	// (0x00033993) cursor_text_digital_t1

0x4bf7,	// (0x000339b8) link_highlight_primary_pane_g1

0x5ad4,	// (0x00034895) link_highlight_primary_pane_t1

0x4be0,	// (0x000339a1) link_highlight_primary_small_pane_g1

0x4be8,	// (0x000339a9) link_highlight_primary_small_pane_t1

0x4bf7,	// (0x000339b8) link_highlight_secondary_pane_g1

0x4bff,	// (0x000339c0) link_highlight_secondary_pane_t1

0x5a48,	// (0x00034809) link_highlight_title_pane_g1

0x5a50,	// (0x00034811) link_highlight_title_pane_t1

0x5a31,	// (0x000347f2) link_highlight_digital_pane_g1

0x5a39,	// (0x000347fa) link_highlight_digital_pane_t1

0x5909,	// (0x000346ca) copy_highlight_primary_pane_g1

0x5911,	// (0x000346d2) copy_highlight_primary_pane_t1

0x58e3,	// (0x000346a4) copy_highlight_primary_small_pane_g1

0x58fa,	// (0x000346bb) copy_highlight_primary_small_pane_t1

0x4c0e,	// (0x000339cf) copy_highlight_secondary_pane_g1

0x4c16,	// (0x000339d7) copy_highlight_secondary_pane_t1

0x58e3,	// (0x000346a4) copy_highlight_title_pane_g1

0x58eb,	// (0x000346ac) copy_highlight_title_pane_t1

0x5909,	// (0x000346ca) copy_highlight_digital_pane_g1

0x6bba,	// (0x0003597b) copy_highlight_digital_pane_t1

0x6b0e,	// (0x000358cf) graphic_text_primary_pane_g1

0x6b9e,	// (0x0003595f) graphic_text_primary_pane_t1

0x6bac,	// (0x0003596d) graphic_text_primary_pane_t2

0x0001,

0xf9cf,	// (0x0003e790) graphic_text_primary_pane_t

0x6b7a,	// (0x0003593b) graphic_text_primary_small_pane_g1

0x6b82,	// (0x00035943) graphic_text_primary_small_pane_t1

0x6b90,	// (0x00035951) graphic_text_primary_small_pane_t2

0x0001,

0xf9ca,	// (0x0003e78b) graphic_text_primary_small_pane_t

0x6b56,	// (0x00035917) graphic_text_secondary_pane_g1

0x6b5e,	// (0x0003591f) graphic_text_secondary_pane_t1

0x6b6c,	// (0x0003592d) graphic_text_secondary_pane_t2

0x0001,

0xf9c5,	// (0x0003e786) graphic_text_secondary_pane_t

0x6b32,	// (0x000358f3) graphic_text_title_pane_g1

0x6b3a,	// (0x000358fb) graphic_text_title_pane_t1

0x6b48,	// (0x00035909) graphic_text_title_pane_t2

0x0001,

0xf9c0,	// (0x0003e781) graphic_text_title_pane_t

0x6b0e,	// (0x000358cf) graphic_text_digital_pane_g1

0x6b16,	// (0x000358d7) graphic_text_digital_pane_t1

0x6b24,	// (0x000358e5) graphic_text_digital_pane_t2

0x0001,

0xf9bb,	// (0x0003e77c) graphic_text_digital_pane_t

0x358c,	// (0x0003234d) navi_icon_pane_srt_ParamLimits

0x358c,	// (0x0003234d) navi_icon_pane_srt

0x34ac,	// (0x0003226d) navi_midp_pane_srt

0x34ac,	// (0x0003226d) navi_navi_pane_srt

0x358c,	// (0x0003234d) navi_text_pane_srt_ParamLimits

0x358c,	// (0x0003234d) navi_text_pane_srt

0x6ad9,	// (0x0003589a) navi_navi_icon_text_pane_srt

0x6ae1,	// (0x000358a2) navi_navi_pane_srt_g1_ParamLimits

0x6ae1,	// (0x000358a2) navi_navi_pane_srt_g1

0x6af3,	// (0x000358b4) navi_navi_pane_srt_g2_ParamLimits

0x6af3,	// (0x000358b4) navi_navi_pane_srt_g2

0x0001,

0xf9b6,	// (0x0003e777) navi_navi_pane_srt_g_ParamLimits

0xf9b6,	// (0x0003e777) navi_navi_pane_srt_g

0x6b05,	// (0x000358c6) navi_navi_tabs_pane_srt

0x6ad9,	// (0x0003589a) navi_navi_text_pane_srt

0x6ad9,	// (0x0003589a) navi_navi_volume_pane_srt

0x6aca,	// (0x0003588b) navi_navi_text_pane_srt_t1

0x1c19,	// (0x000309da) navi_navi_volume_pane_srt_g1

0x1c21,	// (0x000309e2) volume_small_pane_srt_ParamLimits

0x1c21,	// (0x000309e2) volume_small_pane_srt

0x1050,	// (0x0002fe11) volume_small_pane_srt_g1_ParamLimits

0x1050,	// (0x0002fe11) volume_small_pane_srt_g1

0x1060,	// (0x0002fe21) volume_small_pane_srt_g2_ParamLimits

0x1060,	// (0x0002fe21) volume_small_pane_srt_g2

0x1071,	// (0x0002fe32) volume_small_pane_srt_g3_ParamLimits

0x1071,	// (0x0002fe32) volume_small_pane_srt_g3

0x1082,	// (0x0002fe43) volume_small_pane_srt_g4_ParamLimits

0x1082,	// (0x0002fe43) volume_small_pane_srt_g4

0x1093,	// (0x0002fe54) volume_small_pane_srt_g5_ParamLimits

0x1093,	// (0x0002fe54) volume_small_pane_srt_g5

0x10a4,	// (0x0002fe65) volume_small_pane_srt_g6_ParamLimits

0x10a4,	// (0x0002fe65) volume_small_pane_srt_g6

0x10b5,	// (0x0002fe76) volume_small_pane_srt_g7_ParamLimits

0x10b5,	// (0x0002fe76) volume_small_pane_srt_g7

0x10c6,	// (0x0002fe87) volume_small_pane_srt_g8_ParamLimits

0x10c6,	// (0x0002fe87) volume_small_pane_srt_g8

0x10d7,	// (0x0002fe98) volume_small_pane_srt_g9_ParamLimits

0x10d7,	// (0x0002fe98) volume_small_pane_srt_g9

0x10e8,	// (0x0002fea9) volume_small_pane_srt_g10_ParamLimits

0x10e8,	// (0x0002fea9) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x0003e524) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x0003e524) volume_small_pane_srt_g

0x3966,	// (0x00032727) query_popup_data_pane_cp2

0x6ab0,	// (0x00035871) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6ab0,	// (0x00035871) navi_navi_icon_text_pane_srt_t1

0x5b8d,	// (0x0003494e) navi_tabs_2_long_pane_srt

0x5b8d,	// (0x0003494e) navi_tabs_2_pane_srt

0x5b8d,	// (0x0003494e) navi_tabs_3_long_pane_srt

0x5b8d,	// (0x0003494e) navi_tabs_3_pane_srt

0x5b8d,	// (0x0003494e) navi_tabs_4_pane_srt

0x1bf9,	// (0x000309ba) tabs_2_active_pane_srt_ParamLimits

0x1bf9,	// (0x000309ba) tabs_2_active_pane_srt

0x1c09,	// (0x000309ca) tabs_2_passive_pane_srt_ParamLimits

0x1c09,	// (0x000309ca) tabs_2_passive_pane_srt

0x533d,	// (0x000340fe) bg_passive_tab_pane_cp1_srt_ParamLimits

0x533d,	// (0x000340fe) bg_passive_tab_pane_cp1_srt

0x6a3a,	// (0x000357fb) bg_passive_tab_pane_g1_cp1_srt

0x46cc,	// (0x0003348d) bg_passive_tab_pane_g2_cp1_srt

0x6a43,	// (0x00035804) bg_passive_tab_pane_g3_cp1_srt

0x3807,	// (0x000325c8) bg_active_tab_pane_cp1_srt_ParamLimits

0x3807,	// (0x000325c8) bg_active_tab_pane_cp1_srt

0x6a4c,	// (0x0003580d) tabs_2_active_pane_srt_g1

0xde1e,	// (0x0003cbdf) tabs_2_active_pane_srt_t1_ParamLimits

0xde1e,	// (0x0003cbdf) tabs_2_active_pane_srt_t1

0x6a3a,	// (0x000357fb) bg_active_tab_pane_g1_cp1_srt

0x46cc,	// (0x0003348d) bg_active_tab_pane_g2_cp1_srt

0x6a43,	// (0x00035804) bg_active_tab_pane_g3_cp1_srt

0x1bc6,	// (0x00030987) tabs_3_active_pane_srt_ParamLimits

0x1bc6,	// (0x00030987) tabs_3_active_pane_srt

0x1bd7,	// (0x00030998) tabs_3_passive_pane_cp_srt_ParamLimits

0x1bd7,	// (0x00030998) tabs_3_passive_pane_cp_srt

0x1be8,	// (0x000309a9) tabs_3_passive_pane_srt_ParamLimits

0x1be8,	// (0x000309a9) tabs_3_passive_pane_srt

0x533d,	// (0x000340fe) bg_passive_tab_pane_cp2_srt_ParamLimits

0x533d,	// (0x000340fe) bg_passive_tab_pane_cp2_srt

0x4c25,	// (0x000339e6) bg_passive_tab_pane_g1_cp2_srt

0x46cc,	// (0x0003348d) bg_passive_tab_pane_g2_cp2_srt

0x4c2e,	// (0x000339ef) bg_passive_tab_pane_g3_cp2_srt

0x3807,	// (0x000325c8) bg_active_tab_pane_cp2_srt_ParamLimits

0x3807,	// (0x000325c8) bg_active_tab_pane_cp2_srt

0x6a20,	// (0x000357e1) tabs_3_active_pane_srt_g1

0xde08,	// (0x0003cbc9) tabs_3_active_pane_srt_t1_ParamLimits

0xde08,	// (0x0003cbc9) tabs_3_active_pane_srt_t1

0x4c25,	// (0x000339e6) bg_active_tab_pane_g1_cp2_srt

0x46cc,	// (0x0003348d) bg_active_tab_pane_g2_cp2_srt

0x4c2e,	// (0x000339ef) bg_active_tab_pane_g3_cp2_srt

0x1b7e,	// (0x0003093f) tabs_4_active_pane_srt_ParamLimits

0x1b7e,	// (0x0003093f) tabs_4_active_pane_srt

0x1b90,	// (0x00030951) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1b90,	// (0x00030951) tabs_4_passive_pane_cp2_srt

0x124d,	// (0x0003000e) aid_size_cell_toolbar

0x66a5,	// (0x00035466) main_idle_act_pane_ParamLimits

0x13fa,	// (0x000301bb) popup_large_graphic_colour_window_ParamLimits

0xc696,	// (0x0003b457) popup_toolbar_window_ParamLimits

0xc696,	// (0x0003b457) popup_toolbar_window

0x685d,	// (0x0003561e) list_single_graphic_2heading_pane_ParamLimits

0x685d,	// (0x0003561e) list_single_graphic_2heading_pane

0x4198,	// (0x00032f59) aid_size_cell_apps_grid_lsc_pane

0x41aa,	// (0x00032f6b) aid_size_cell_apps_grid_prt_pane

0x4dbf,	// (0x00033b80) bg_wml_button_pane_cp1_ParamLimits

0x4dbf,	// (0x00033b80) bg_wml_button_pane_cp1

0xda2f,	// (0x0003c7f0) form_midp_field_text_pane_t1_ParamLimits

0x533d,	// (0x000340fe) input_focus_pane_cp050_ParamLimits

0x55aa,	// (0x0003436b) list_midp_form_text_pane_ParamLimits

0x5550,	// (0x00034311) input_focus_pane_cp051_ParamLimits

0x5564,	// (0x00034325) list_midp_choice_pane_ParamLimits

0xd9cc,	// (0x0003c78d) list_single_2graphic_pane_cp3_ParamLimits

0xd9cc,	// (0x0003c78d) list_single_2graphic_pane_cp3

0xd9df,	// (0x0003c7a0) list_single_midp_graphic_pane_ParamLimits

0xd9df,	// (0x0003c7a0) list_single_midp_graphic_pane

0x00b5,	// (0x0002ee76) list_single_graphic_2heading_pane_g1_ParamLimits

0x00b5,	// (0x0002ee76) list_single_graphic_2heading_pane_g1

0x00c1,	// (0x0002ee82) list_single_graphic_2heading_pane_g4_ParamLimits

0x00c1,	// (0x0002ee82) list_single_graphic_2heading_pane_g4

0x00cd,	// (0x0002ee8e) list_single_graphic_2heading_pane_g5_ParamLimits

0x00cd,	// (0x0002ee8e) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x0003e577) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x0003e577) list_single_graphic_2heading_pane_g

0x00d9,	// (0x0002ee9a) list_single_graphic_2heading_pane_t1_ParamLimits

0x00d9,	// (0x0002ee9a) list_single_graphic_2heading_pane_t1

0x00ed,	// (0x0002eeae) list_single_graphic_2heading_pane_t2_ParamLimits

0x00ed,	// (0x0002eeae) list_single_graphic_2heading_pane_t2

0x0109,	// (0x0002eeca) list_single_graphic_2heading_pane_t3_ParamLimits

0x0109,	// (0x0002eeca) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x0003e57e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x0003e57e) list_single_graphic_2heading_pane_t

0x5207,	// (0x00033fc8) bg_popup_sub_pane_cp2

0x5231,	// (0x00033ff2) grid_toobar_pane

0x180e,	// (0x000305cf) cell_toolbar_pane_ParamLimits

0x180e,	// (0x000305cf) cell_toolbar_pane

0x526d,	// (0x0003402e) cell_toolbar_pane_g1_ParamLimits

0x526d,	// (0x0003402e) cell_toolbar_pane_g1

0x5281,	// (0x00034042) cell_toolbar_pane_g2_ParamLimits

0x5281,	// (0x00034042) cell_toolbar_pane_g2

0x0001,

0xf7cb,	// (0x0003e58c) cell_toolbar_pane_g_ParamLimits

0xf7cb,	// (0x0003e58c) cell_toolbar_pane_g

0x52a3,	// (0x00034064) grid_highlight_pane_cp2_ParamLimits

0x52a3,	// (0x00034064) grid_highlight_pane_cp2

0x52bd,	// (0x0003407e) toolbar_button_pane

0x52c9,	// (0x0003408a) toolbar_button_pane_g1

0x52d1,	// (0x00034092) toolbar_button_pane_g2

0x52d9,	// (0x0003409a) toolbar_button_pane_g3

0x52e1,	// (0x000340a2) toolbar_button_pane_g4

0x52e9,	// (0x000340aa) toolbar_button_pane_g5

0x52f1,	// (0x000340b2) toolbar_button_pane_g6

0x52f9,	// (0x000340ba) toolbar_button_pane_g7

0x5301,	// (0x000340c2) toolbar_button_pane_g8

0x5309,	// (0x000340ca) toolbar_button_pane_g9

0x0009,

0xf7d0,	// (0x0003e591) toolbar_button_pane_g

0x1846,	// (0x00030607) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1846,	// (0x00030607) list_single_2graphic_pane_g1_cp3

0xc6ee,	// (0x0003b4af) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc6ee,	// (0x0003b4af) list_single_2graphic_pane_g2_cp3

0x1863,	// (0x00030624) list_single_2graphic_pane_g3_cp3

0x186b,	// (0x0003062c) list_single_2graphic_pane_g4_cp3_ParamLimits

0x186b,	// (0x0003062c) list_single_2graphic_pane_g4_cp3

0x1877,	// (0x00030638) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1877,	// (0x00030638) list_single_2graphic_pane_t1_cp3

0x1893,	// (0x00030654) list_single_midp_graphic_pane_g2_ParamLimits

0x1893,	// (0x00030654) list_single_midp_graphic_pane_g2

0x1255,	// (0x00030016) aid_zoom_text_primary

0x0099,	// (0x0002ee5a) aid_zoom_text_secondary

0x4ce2,	// (0x00033aa3) status_small_pane_g7_ParamLimits

0x4ce2,	// (0x00033aa3) status_small_pane_g7

0x4d05,	// (0x00033ac6) status_small_pane_t1_ParamLimits

0xcf9f,	// (0x0003bd60) title_pane_g2

0x0003,

0xf554,	// (0x0003e315) title_pane_g

0xd217,	// (0x0003bfd8) aid_size_cell_colour_1_pane_ParamLimits

0xd217,	// (0x0003bfd8) aid_size_cell_colour_1_pane

0xd22b,	// (0x0003bfec) aid_size_cell_colour_2_pane_ParamLimits

0xd22b,	// (0x0003bfec) aid_size_cell_colour_2_pane

0xd23f,	// (0x0003c000) aid_size_cell_colour_3_pane_ParamLimits

0xd23f,	// (0x0003c000) aid_size_cell_colour_3_pane

0xd253,	// (0x0003c014) aid_size_cell_colour_4_pane_ParamLimits

0xd253,	// (0x0003c014) aid_size_cell_colour_4_pane

0x0cad,	// (0x0002fa6e) title_pane_stacon_g1_ParamLimits

0x0cad,	// (0x0002fa6e) title_pane_stacon_g1

0x5968,	// (0x00034729) popup_note_wait_window_g3_ParamLimits

0x5968,	// (0x00034729) popup_note_wait_window_g3

0x59de,	// (0x0003479f) popup_note_wait_window_t5_ParamLimits

0x59de,	// (0x0003479f) popup_note_wait_window_t5

0x34ac,	// (0x0003226d) main_feb_china_hwr_fs_writing_pane

0xc0a4,	// (0x0003ae65) popup_feb_china_hwr_fs_window_ParamLimits

0xc0a4,	// (0x0003ae65) popup_feb_china_hwr_fs_window

0xc6ff,	// (0x0003b4c0) aid_size_cell_hwr_fs_ParamLimits

0xc6ff,	// (0x0003b4c0) aid_size_cell_hwr_fs

0x533d,	// (0x000340fe) bg_popup_sub_pane_cp3_ParamLimits

0x533d,	// (0x000340fe) bg_popup_sub_pane_cp3

0xc714,	// (0x0003b4d5) grid_hwr_fs_pane_ParamLimits

0xc714,	// (0x0003b4d5) grid_hwr_fs_pane

0x18e2,	// (0x000306a3) linegrid_hwr_fs_pane_ParamLimits

0x18e2,	// (0x000306a3) linegrid_hwr_fs_pane

0xc72c,	// (0x0003b4ed) cell_hwr_fs_pane_ParamLimits

0xc72c,	// (0x0003b4ed) cell_hwr_fs_pane

0x5349,	// (0x0003410a) linegrid_hwr_fs_pane_g1_ParamLimits

0x5349,	// (0x0003410a) linegrid_hwr_fs_pane_g1

0xd9a0,	// (0x0003c761) linegrid_hwr_fs_pane_g2_ParamLimits

0xd9a0,	// (0x0003c761) linegrid_hwr_fs_pane_g2

0x5367,	// (0x00034128) linegrid_hwr_fs_pane_g3_ParamLimits

0x5367,	// (0x00034128) linegrid_hwr_fs_pane_g3

0x1914,	// (0x000306d5) linegrid_hwr_fs_pane_g4_ParamLimits

0x1914,	// (0x000306d5) linegrid_hwr_fs_pane_g4

0x192e,	// (0x000306ef) linegrid_hwr_fs_pane_g5_ParamLimits

0x192e,	// (0x000306ef) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x0003e5b7) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0003e5b7) linegrid_hwr_fs_pane_g

0x5373,	// (0x00034134) cell_hwr_fs_pane_g1_ParamLimits

0x5373,	// (0x00034134) cell_hwr_fs_pane_g1

0x513e,	// (0x00033eff) cell_hwr_fs_pane_g2_ParamLimits

0x513e,	// (0x00033eff) cell_hwr_fs_pane_g2

0xd9b2,	// (0x0003c773) cell_hwr_fs_pane_g3_ParamLimits

0xd9b2,	// (0x0003c773) cell_hwr_fs_pane_g3

0xd9bf,	// (0x0003c780) cell_hwr_fs_pane_g4_ParamLimits

0xd9bf,	// (0x0003c780) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x0003e5c2) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x0003e5c2) cell_hwr_fs_pane_g

0xc752,	// (0x0003b513) cell_hwr_fs_pane_t1

0x34ac,	// (0x0003226d) grid_highlight_pane_cp6

0x34ac,	// (0x0003226d) main_idle_act2_pane

0x3f4f,	// (0x00032d10) aid_inside_area_popup_secondary

0xda97,	// (0x0003c858) aid_inside_area_window_primary_ParamLimits

0xda97,	// (0x0003c858) aid_inside_area_window_primary

0x6bc9,	// (0x0003598a) ai2_news_ticker_pane

0x6bd1,	// (0x00035992) aid_size_cell_ai1_link_ParamLimits

0x6bd1,	// (0x00035992) aid_size_cell_ai1_link

0xde34,	// (0x0003cbf5) popup_ai2_data_window_ParamLimits

0xde34,	// (0x0003cbf5) popup_ai2_data_window

0x6c01,	// (0x000359c2) popup_ai2_link_window_ParamLimits

0x6c01,	// (0x000359c2) popup_ai2_link_window

0x533d,	// (0x000340fe) bg_popup_sub_pane_cp4_ParamLimits

0x533d,	// (0x000340fe) bg_popup_sub_pane_cp4

0x6c15,	// (0x000359d6) grid_ai2_link_pane_ParamLimits

0x6c15,	// (0x000359d6) grid_ai2_link_pane

0x6c2c,	// (0x000359ed) popup_ai2_link_window_g1_ParamLimits

0x6c2c,	// (0x000359ed) popup_ai2_link_window_g1

0x6c38,	// (0x000359f9) popup_ai2_link_window_g2_ParamLimits

0x6c38,	// (0x000359f9) popup_ai2_link_window_g2

0x0001,

0xf9d4,	// (0x0003e795) popup_ai2_link_window_g_ParamLimits

0xf9d4,	// (0x0003e795) popup_ai2_link_window_g

0x6c47,	// (0x00035a08) ai2_mp_button_pane

0x6c4f,	// (0x00035a10) ai2_mp_volume_pane

0x5550,	// (0x00034311) bg_popup_sub_pane_cp5_ParamLimits

0x5550,	// (0x00034311) bg_popup_sub_pane_cp5

0x6c57,	// (0x00035a18) heading_ai2_gene_pane_ParamLimits

0x6c57,	// (0x00035a18) heading_ai2_gene_pane

0x6c63,	// (0x00035a24) list_ai2_gene_pane_ParamLimits

0x6c63,	// (0x00035a24) list_ai2_gene_pane

0x6cab,	// (0x00035a6c) cell_ai2_link_pane_ParamLimits

0x6cab,	// (0x00035a6c) cell_ai2_link_pane

0x6cc1,	// (0x00035a82) cell_ai2_link_pane_g1

0x34ac,	// (0x0003226d) grid_highlight_pane_cp7

0x1c36,	// (0x000309f7) ai2_mp_volume_pane_g1

0x6d91,	// (0x00035b52) ai2_mp_volume_pane_g2

0xde5e,	// (0x0003cc1f) list_ai2_gene_pane_t1

0x6d99,	// (0x00035b5a) ai2_mp_volume_pane_g3

0x0002,

0xf9ed,	// (0x0003e7ae) ai2_mp_volume_pane_g

0x1c3e,	// (0x000309ff) volume_small_pane_cp3

0x6da1,	// (0x00035b62) aid_size_cell_ai2_button

0x6da9,	// (0x00035b6a) grid_ai2_button_pane

0x6db2,	// (0x00035b73) cell_ai2_button_pane_ParamLimits

0x6db2,	// (0x00035b73) cell_ai2_button_pane

0x34a2,	// (0x00032263) cell_ai2_button_pane_g1

0x34ac,	// (0x0003226d) grid_highlight_pane_cp8

0x6d51,	// (0x00035b12) ai2_gene_pane_t1_ParamLimits

0x6d51,	// (0x00035b12) ai2_gene_pane_t1

0xc01e,	// (0x0003addf) aid_height_parent_landscape

0xdbe2,	// (0x0003c9a3) aid_height_set_list

0x66a5,	// (0x00035466) aid_size_parent

0x69ae,	// (0x0003576f) aid_size_cell_graphic_pane_ParamLimits

0x6c73,	// (0x00035a34) popup_ai2_data_window_g1_ParamLimits

0x6c73,	// (0x00035a34) popup_ai2_data_window_g1

0x6c7f,	// (0x00035a40) ai2_news_ticker_pane_g1

0x6c87,	// (0x00035a48) ai2_news_ticker_pane_g2

0x0001,

0xf9d9,	// (0x0003e79a) ai2_news_ticker_pane_g

0x6c8f,	// (0x00035a50) ai2_news_ticker_pane_t1

0x6c9d,	// (0x00035a5e) ai2_news_ticker_pane_t2

0x0001,

0xf9de,	// (0x0003e79f) ai2_news_ticker_pane_t

0x6cca,	// (0x00035a8b) heading_ai2_gene_pane_g1

0x6cd2,	// (0x00035a93) heading_ai2_gene_pane_t1_ParamLimits

0x6cd2,	// (0x00035a93) heading_ai2_gene_pane_t1

0x6ce7,	// (0x00035aa8) list_highlight_pane_cp6

0xde48,	// (0x0003cc09) ai2_gene_pane_ParamLimits

0xde48,	// (0x0003cc09) ai2_gene_pane

0xde6c,	// (0x0003cc2d) list_ai2_gene_pane_t2

0x0001,

0xf9e3,	// (0x0003e7a4) list_ai2_gene_pane_t

0x6d22,	// (0x00035ae3) list_highlight_pane_cp8_ParamLimits

0x6d22,	// (0x00035ae3) list_highlight_pane_cp8

0x6d33,	// (0x00035af4) ai2_gene_pane_g1_ParamLimits

0x6d33,	// (0x00035af4) ai2_gene_pane_g1

0x6d45,	// (0x00035b06) ai2_gene_pane_g2_ParamLimits

0x6d45,	// (0x00035b06) ai2_gene_pane_g2

0x0001,

0xf9e8,	// (0x0003e7a9) ai2_gene_pane_g_ParamLimits

0xf9e8,	// (0x0003e7a9) ai2_gene_pane_g

0x3d8e,	// (0x00032b4f) scroll_pane_cp12

0xbfdd,	// (0x0003ad9e) control_pane_t3_ParamLimits

0xbfdd,	// (0x0003ad9e) control_pane_t3

0x4cf6,	// (0x00033ab7) status_small_pane_g8_ParamLimits

0x4cf6,	// (0x00033ab7) status_small_pane_g8

0xc139,	// (0x0003aefa) popup_find_window_ParamLimits

0xc3c0,	// (0x0003b181) popup_note_image_window_ParamLimits

0x2bb9,	// (0x0003197a) list_double2_graphic_pane_vc_g1_ParamLimits

0x2bb9,	// (0x0003197a) list_double2_graphic_pane_vc_g1

0x2bc5,	// (0x00031986) list_double2_graphic_pane_vc_g2_ParamLimits

0x2bc5,	// (0x00031986) list_double2_graphic_pane_vc_g2

0x2bd1,	// (0x00031992) list_double2_graphic_pane_vc_g3_ParamLimits

0x2bd1,	// (0x00031992) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c4,	// (0x0003e585) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003e585) list_double2_graphic_pane_vc_g

0x2bdd,	// (0x0003199e) list_double2_graphic_pane_vc_t1_ParamLimits

0x2bdd,	// (0x0003199e) list_double2_graphic_pane_vc_t1

0x2bc5,	// (0x00031986) list_single_heading_pane_vc_g1_ParamLimits

0x2bc5,	// (0x00031986) list_single_heading_pane_vc_g1

0x2bd1,	// (0x00031992) list_single_heading_pane_vc_g2_ParamLimits

0x2bd1,	// (0x00031992) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0003e38f) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0003e38f) list_single_heading_pane_vc_g

0x2bf3,	// (0x000319b4) list_single_heading_pane_vc_t1_ParamLimits

0x2bf3,	// (0x000319b4) list_single_heading_pane_vc_t1

0x2c0b,	// (0x000319cc) list_single_heading_pane_vc_t2_ParamLimits

0x2c0b,	// (0x000319cc) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x0003e5a6) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x0003e5a6) list_single_heading_pane_vc_t

0x2c27,	// (0x000319e8) list_setting_number_pane_vc_g1_ParamLimits

0x2c27,	// (0x000319e8) list_setting_number_pane_vc_g1

0x2c33,	// (0x000319f4) list_setting_number_pane_vc_g2_ParamLimits

0x2c33,	// (0x000319f4) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x0003e5ab) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x0003e5ab) list_setting_number_pane_vc_g

0x2c3f,	// (0x00031a00) list_setting_number_pane_vc_t1_ParamLimits

0x2c3f,	// (0x00031a00) list_setting_number_pane_vc_t1

0x2c53,	// (0x00031a14) list_setting_number_pane_vc_t2_ParamLimits

0x2c53,	// (0x00031a14) list_setting_number_pane_vc_t2

0x2c6f,	// (0x00031a30) list_setting_number_pane_vc_t3_ParamLimits

0x2c6f,	// (0x00031a30) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x0003e5b0) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x0003e5b0) list_setting_number_pane_vc_t

0x2c8d,	// (0x00031a4e) set_value_pane_vc_ParamLimits

0x2c8d,	// (0x00031a4e) set_value_pane_vc

0x685d,	// (0x0003561e) list_double2_graphic_pane_vc_ParamLimits

0x685d,	// (0x0003561e) list_double2_graphic_pane_vc

0x685d,	// (0x0003561e) list_double2_large_graphic_pane_vc_ParamLimits

0x685d,	// (0x0003561e) list_double2_large_graphic_pane_vc

0x685d,	// (0x0003561e) list_double2_pane_vc_ParamLimits

0x685d,	// (0x0003561e) list_double2_pane_vc

0x685d,	// (0x0003561e) list_double_graphic_heading_pane_vc_ParamLimits

0x685d,	// (0x0003561e) list_double_graphic_heading_pane_vc

0x685d,	// (0x0003561e) list_double_graphic_pane_vc_ParamLimits

0x685d,	// (0x0003561e) list_double_graphic_pane_vc

0x685d,	// (0x0003561e) list_double_heading_pane_vc_ParamLimits

0x685d,	// (0x0003561e) list_double_heading_pane_vc

0x685d,	// (0x0003561e) list_double_large_graphic_pane_vc_ParamLimits

0x685d,	// (0x0003561e) list_double_large_graphic_pane_vc

0x685d,	// (0x0003561e) list_double_number_pane_vc_ParamLimits

0x685d,	// (0x0003561e) list_double_number_pane_vc

0x685d,	// (0x0003561e) list_double_pane_vc_ParamLimits

0x685d,	// (0x0003561e) list_double_pane_vc

0x685d,	// (0x0003561e) list_double_time_pane_vc_ParamLimits

0x685d,	// (0x0003561e) list_double_time_pane_vc

0x685d,	// (0x0003561e) list_setting_number_pane_vc_ParamLimits

0x685d,	// (0x0003561e) list_setting_number_pane_vc

0x685d,	// (0x0003561e) list_setting_pane_vc_ParamLimits

0x685d,	// (0x0003561e) list_setting_pane_vc

0x685d,	// (0x0003561e) list_single_graphic_heading_pane_vc_ParamLimits

0x685d,	// (0x0003561e) list_single_graphic_heading_pane_vc

0x685d,	// (0x0003561e) list_single_heading_pane_vc_ParamLimits

0x685d,	// (0x0003561e) list_single_heading_pane_vc

0x685d,	// (0x0003561e) list_single_number_heading_pane_vc_ParamLimits

0x685d,	// (0x0003561e) list_single_number_heading_pane_vc

0x2bb9,	// (0x0003197a) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x2bb9,	// (0x0003197a) list_double_graphic_heading_pane_vc_g1

0x2bc5,	// (0x00031986) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x2bc5,	// (0x00031986) list_double_graphic_heading_pane_vc_g2

0x2bd1,	// (0x00031992) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2bd1,	// (0x00031992) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c4,	// (0x0003e585) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003e585) list_double_graphic_heading_pane_vc_g

0x2de7,	// (0x00031ba8) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2de7,	// (0x00031ba8) list_double_graphic_heading_pane_vc_t1

0x2e03,	// (0x00031bc4) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x2e03,	// (0x00031bc4) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f4,	// (0x0003e7b5) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f4,	// (0x0003e7b5) list_double_graphic_heading_pane_vc_t

0x2c27,	// (0x000319e8) list_setting_pane_vc_g1_ParamLimits

0x2c27,	// (0x000319e8) list_setting_pane_vc_g1

0x2c33,	// (0x000319f4) list_setting_pane_vc_g2_ParamLimits

0x2c33,	// (0x000319f4) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x0003e5ab) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x0003e5ab) list_setting_pane_vc_g

0x2e21,	// (0x00031be2) list_setting_pane_vc_t1_ParamLimits

0x2e21,	// (0x00031be2) list_setting_pane_vc_t1

0x2e3d,	// (0x00031bfe) list_setting_pane_vc_t2_ParamLimits

0x2e3d,	// (0x00031bfe) list_setting_pane_vc_t2

0x0001,

0xfa22,	// (0x0003e7e3) list_setting_pane_vc_t_ParamLimits

0xfa22,	// (0x0003e7e3) list_setting_pane_vc_t

0x2c8d,	// (0x00031a4e) set_value_pane_cp_vc_ParamLimits

0x2c8d,	// (0x00031a4e) set_value_pane_cp_vc

0x2bc5,	// (0x00031986) list_single_number_heading_pane_vc_g1_ParamLimits

0x2bc5,	// (0x00031986) list_single_number_heading_pane_vc_g1

0x2bd1,	// (0x00031992) list_single_number_heading_pane_vc_g2_ParamLimits

0x2bd1,	// (0x00031992) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0003e38f) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0003e38f) list_single_number_heading_pane_vc_g

0x2bf3,	// (0x000319b4) list_single_number_heading_pane_vc_t1_ParamLimits

0x2bf3,	// (0x000319b4) list_single_number_heading_pane_vc_t1

0x2e59,	// (0x00031c1a) list_single_number_heading_pane_vc_t2_ParamLimits

0x2e59,	// (0x00031c1a) list_single_number_heading_pane_vc_t2

0x2e6d,	// (0x00031c2e) list_single_number_heading_pane_vc_t3_ParamLimits

0x2e6d,	// (0x00031c2e) list_single_number_heading_pane_vc_t3

0x0002,

0xfa27,	// (0x0003e7e8) list_single_number_heading_pane_vc_t_ParamLimits

0xfa27,	// (0x0003e7e8) list_single_number_heading_pane_vc_t

0x2bb9,	// (0x0003197a) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x2bb9,	// (0x0003197a) list_single_graphic_heading_pane_vc_g1

0x2bc5,	// (0x00031986) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2bc5,	// (0x00031986) list_single_graphic_heading_pane_vc_g4

0x2bd1,	// (0x00031992) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2bd1,	// (0x00031992) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c4,	// (0x0003e585) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003e585) list_single_graphic_heading_pane_vc_g

0x2bf3,	// (0x000319b4) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x2bf3,	// (0x000319b4) list_single_graphic_heading_pane_vc_t1

0x2e7f,	// (0x00031c40) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x2e7f,	// (0x00031c40) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2e,	// (0x0003e7ef) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2e,	// (0x0003e7ef) list_single_graphic_heading_pane_vc_t

0x2bc5,	// (0x00031986) list_double2_pane_vc_g1_ParamLimits

0x2bc5,	// (0x00031986) list_double2_pane_vc_g1

0x2bd1,	// (0x00031992) list_double2_pane_vc_g2_ParamLimits

0x2bd1,	// (0x00031992) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x0003e38f) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x0003e38f) list_double2_pane_vc_g

0x2e93,	// (0x00031c54) list_double2_pane_vc_t1_ParamLimits

0x2e93,	// (0x00031c54) list_double2_pane_vc_t1

0x2ea9,	// (0x00031c6a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2ea9,	// (0x00031c6a) list_double2_large_graphic_pane_vc_g1

0x2bc5,	// (0x00031986) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2bc5,	// (0x00031986) list_double2_large_graphic_pane_vc_g2

0x2bd1,	// (0x00031992) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2bd1,	// (0x00031992) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x0003e3ac) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x0003e3ac) list_double2_large_graphic_pane_vc_g

0x2eb5,	// (0x00031c76) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x2eb5,	// (0x00031c76) list_double2_large_graphic_pane_vc_t1

0x2ecb,	// (0x00031c8c) list_double_time_pane_vc_g1_ParamLimits

0x2ecb,	// (0x00031c8c) list_double_time_pane_vc_g1

0x2ed7,	// (0x00031c98) list_double_time_pane_vc_g2_ParamLimits

0x2ed7,	// (0x00031c98) list_double_time_pane_vc_g2

0x0001,

0xfa33,	// (0x0003e7f4) list_double_time_pane_vc_g_ParamLimits

0xfa33,	// (0x0003e7f4) list_double_time_pane_vc_g

0x2ee3,	// (0x00031ca4) list_double_time_pane_vc_t1_ParamLimits

0x2ee3,	// (0x00031ca4) list_double_time_pane_vc_t1

0x2f07,	// (0x00031cc8) list_double_time_pane_vc_t2_ParamLimits

0x2f07,	// (0x00031cc8) list_double_time_pane_vc_t2

0x2f56,	// (0x00031d17) list_double_time_pane_vc_t3_ParamLimits

0x2f56,	// (0x00031d17) list_double_time_pane_vc_t3

0x2f68,	// (0x00031d29) list_double_time_pane_vc_t4_ParamLimits

0x2f68,	// (0x00031d29) list_double_time_pane_vc_t4

0x0003,

0xfa38,	// (0x0003e7f9) list_double_time_pane_vc_t_ParamLimits

0xfa38,	// (0x0003e7f9) list_double_time_pane_vc_t

0x2bc5,	// (0x00031986) list_double_pane_vc_g1_ParamLimits

0x2bc5,	// (0x00031986) list_double_pane_vc_g1

0x2bd1,	// (0x00031992) list_double_pane_vc_g2_ParamLimits

0x2bd1,	// (0x00031992) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x0003e38f) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x0003e38f) list_double_pane_vc_g

0x2f7c,	// (0x00031d3d) list_double_pane_vc_t1_ParamLimits

0x2f7c,	// (0x00031d3d) list_double_pane_vc_t1

0x2f90,	// (0x00031d51) list_double_pane_vc_t2_ParamLimits

0x2f90,	// (0x00031d51) list_double_pane_vc_t2

0x0001,

0xfa41,	// (0x0003e802) list_double_pane_vc_t_ParamLimits

0xfa41,	// (0x0003e802) list_double_pane_vc_t

0x2bc5,	// (0x00031986) list_double_number_pane_vc_g1_ParamLimits

0x2bc5,	// (0x00031986) list_double_number_pane_vc_g1

0x2bd1,	// (0x00031992) list_double_number_pane_vc_g2_ParamLimits

0x2bd1,	// (0x00031992) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x0003e38f) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x0003e38f) list_double_number_pane_vc_g

0x2fa8,	// (0x00031d69) list_double_number_pane_vc_t1_ParamLimits

0x2fa8,	// (0x00031d69) list_double_number_pane_vc_t1

0x2fba,	// (0x00031d7b) list_double_number_pane_vc_t2_ParamLimits

0x2fba,	// (0x00031d7b) list_double_number_pane_vc_t2

0x2fce,	// (0x00031d8f) list_double_number_pane_vc_t3_ParamLimits

0x2fce,	// (0x00031d8f) list_double_number_pane_vc_t3

0x0002,

0xfa46,	// (0x0003e807) list_double_number_pane_vc_t_ParamLimits

0xfa46,	// (0x0003e807) list_double_number_pane_vc_t

0x2fe6,	// (0x00031da7) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2fe6,	// (0x00031da7) list_double_large_graphic_pane_vc_g1

0x2ff2,	// (0x00031db3) list_double_large_graphic_pane_vc_g2_ParamLimits

0x2ff2,	// (0x00031db3) list_double_large_graphic_pane_vc_g2

0x2bd1,	// (0x00031992) list_double_large_graphic_pane_vc_g3_ParamLimits

0x2bd1,	// (0x00031992) list_double_large_graphic_pane_vc_g3

0x3001,	// (0x00031dc2) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3001,	// (0x00031dc2) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4d,	// (0x0003e80e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4d,	// (0x0003e80e) list_double_large_graphic_pane_vc_g

0x300d,	// (0x00031dce) list_double_large_graphic_pane_vc_t1_ParamLimits

0x300d,	// (0x00031dce) list_double_large_graphic_pane_vc_t1

0x3021,	// (0x00031de2) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3021,	// (0x00031de2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa56,	// (0x0003e817) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa56,	// (0x0003e817) list_double_large_graphic_pane_vc_t

0x2bc5,	// (0x00031986) list_double_heading_pane_vc_g1_ParamLimits

0x2bc5,	// (0x00031986) list_double_heading_pane_vc_g1

0x2bd1,	// (0x00031992) list_double_heading_pane_vc_g2_ParamLimits

0x2bd1,	// (0x00031992) list_double_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0003e38f) list_double_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0003e38f) list_double_heading_pane_vc_g

0x303a,	// (0x00031dfb) list_double_heading_pane_vc_t1_ParamLimits

0x303a,	// (0x00031dfb) list_double_heading_pane_vc_t1

0x2bf3,	// (0x000319b4) list_double_heading_pane_vc_t2_ParamLimits

0x2bf3,	// (0x000319b4) list_double_heading_pane_vc_t2

0x0001,

0xfa5b,	// (0x0003e81c) list_double_heading_pane_vc_t_ParamLimits

0xfa5b,	// (0x0003e81c) list_double_heading_pane_vc_t

0x2bb9,	// (0x0003197a) list_double_graphic_pane_vc_g1_ParamLimits

0x2bb9,	// (0x0003197a) list_double_graphic_pane_vc_g1

0x304e,	// (0x00031e0f) list_double_graphic_pane_vc_g2_ParamLimits

0x304e,	// (0x00031e0f) list_double_graphic_pane_vc_g2

0x305d,	// (0x00031e1e) list_double_graphic_pane_vc_g3_ParamLimits

0x305d,	// (0x00031e1e) list_double_graphic_pane_vc_g3

0x0002,

0xfa60,	// (0x0003e821) list_double_graphic_pane_vc_g_ParamLimits

0xfa60,	// (0x0003e821) list_double_graphic_pane_vc_g

0x3069,	// (0x00031e2a) list_double_graphic_pane_vc_t1_ParamLimits

0x3069,	// (0x00031e2a) list_double_graphic_pane_vc_t1

0x307d,	// (0x00031e3e) list_double_graphic_pane_vc_t2_ParamLimits

0x307d,	// (0x00031e3e) list_double_graphic_pane_vc_t2

0x0001,

0xfa67,	// (0x0003e828) list_double_graphic_pane_vc_t_ParamLimits

0xfa67,	// (0x0003e828) list_double_graphic_pane_vc_t

0x0139,	// (0x0002eefa) aid_size_cell_fastswap

0xb6a9,	// (0x0003a46a) aid_size_cell_touch_ParamLimits

0xb6a9,	// (0x0003a46a) aid_size_cell_touch

0x03a6,	// (0x0002f167) popup_fast_swap_wide_window_ParamLimits

0x03a6,	// (0x0002f167) popup_fast_swap_wide_window

0xb859,	// (0x0003a61a) touch_pane_ParamLimits

0xb859,	// (0x0003a61a) touch_pane

0x3de4,	// (0x00032ba5) button_value_adjust_pane_cp2

0x0a63,	// (0x0002f824) button_value_adjust_pane_cp4

0x0a83,	// (0x0002f844) form_field_data_pane_cp2

0xbcdb,	// (0x0003aa9c) form_field_data_wide_pane_cp2

0x4261,	// (0x00033022) bg_scroll_pane_ParamLimits

0x0e0f,	// (0x0002fbd0) scroll_handle_pane_ParamLimits

0x0e23,	// (0x0002fbe4) scroll_sc2_down_pane_ParamLimits

0x0e23,	// (0x0002fbe4) scroll_sc2_down_pane

0x4292,	// (0x00033053) scroll_sc2_up_pane_ParamLimits

0x4292,	// (0x00033053) scroll_sc2_up_pane

0xdf96,	// (0x0003cd57) grid_wheel_folder_pane_g1_ParamLimits

0xdf96,	// (0x0003cd57) grid_wheel_folder_pane_g1

0x0fe8,	// (0x0002fda9) clock_nsta_pane_cp2_ParamLimits

0x0fe8,	// (0x0002fda9) clock_nsta_pane_cp2

0x4dbf,	// (0x00033b80) listscroll_midp_pane_ParamLimits

0xd4cf,	// (0x0003c290) midp_canvas_pane

0x4d71,	// (0x00033b32) nsta_clock_indic_pane

0x4da5,	// (0x00033b66) listscroll_form_pane_vc

0x4dad,	// (0x00033b6e) listscroll_set_pane_vc_ParamLimits

0x4dad,	// (0x00033b6e) listscroll_set_pane_vc

0xd6ab,	// (0x0003c46c) clock_nsta_pane

0xd6d5,	// (0x0003c496) indicator_nsta_pane

0x5207,	// (0x00033fc8) bg_popup_sub_pane_cp2_ParamLimits

0x521b,	// (0x00033fdc) find_pane_cp2_ParamLimits

0x521b,	// (0x00033fdc) find_pane_cp2

0x5231,	// (0x00033ff2) grid_toobar_pane_ParamLimits

0x5311,	// (0x000340d2) list_form_gen_pane_vc_ParamLimits

0x5311,	// (0x000340d2) list_form_gen_pane_vc

0x5327,	// (0x000340e8) scroll_pane_cp8_vc_ParamLimits

0x5327,	// (0x000340e8) scroll_pane_cp8_vc

0x53a3,	// (0x00034164) data_form_wide_pane_vc_ParamLimits

0x53a3,	// (0x00034164) data_form_wide_pane_vc

0x53af,	// (0x00034170) form_field_data_wide_pane_vc_g1

0x53b7,	// (0x00034178) form_field_data_wide_pane_vc_t1_ParamLimits

0x53b7,	// (0x00034178) form_field_data_wide_pane_vc_t1

0x3df8,	// (0x00032bb9) input_focus_pane_cp6_vc_ParamLimits

0x3df8,	// (0x00032bb9) input_focus_pane_cp6_vc

0xda51,	// (0x0003c812) list_midp_pane_ParamLimits

0x6a14,	// (0x000357d5) scroll_pane_cp16_ParamLimits

0x6a14,	// (0x000357d5) scroll_pane_cp16

0x573d,	// (0x000344fe) button_value_adjust_pane_ParamLimits

0x573d,	// (0x000344fe) button_value_adjust_pane

0xdbf3,	// (0x0003c9b4) button_value_adjust_pane_cp6_ParamLimits

0xdbf3,	// (0x0003c9b4) button_value_adjust_pane_cp6

0xdd0d,	// (0x0003cace) settings_code_pane_cp_ParamLimits

0xdd0d,	// (0x0003cace) settings_code_pane_cp

0x34a2,	// (0x00032263) cell_touch_pane_g1

0x34a2,	// (0x00032263) cell_touch_pane_g2

0x0001,

0xf709,	// (0x0003e4ca) cell_touch_pane_g

0xde7a,	// (0x0003cc3b) cell_touch_pane_cp_ParamLimits

0xde7a,	// (0x0003cc3b) cell_touch_pane_cp

0xde96,	// (0x0003cc57) cell_touch_pane_ParamLimits

0xde96,	// (0x0003cc57) cell_touch_pane

0x34a2,	// (0x00032263) scroll_sc2_down_pane_g1

0x34a2,	// (0x00032263) scroll_sc2_up_pane_g1

0x34ac,	// (0x0003226d) bg_set_opt_pane_cp4_vc

0x6de6,	// (0x00035ba7) list_set_graphic_pane_vc_g1_ParamLimits

0x6de6,	// (0x00035ba7) list_set_graphic_pane_vc_g1

0x6df2,	// (0x00035bb3) list_set_graphic_pane_vc_g2_ParamLimits

0x6df2,	// (0x00035bb3) list_set_graphic_pane_vc_g2

0x0001,

0xf9f9,	// (0x0003e7ba) list_set_graphic_pane_vc_g_ParamLimits

0xf9f9,	// (0x0003e7ba) list_set_graphic_pane_vc_g

0x6dfe,	// (0x00035bbf) text_primary_small_cp13_vc_ParamLimits

0x6dfe,	// (0x00035bbf) text_primary_small_cp13_vc

0x6e16,	// (0x00035bd7) list_set_graphic_pane_vc_ParamLimits

0x6e16,	// (0x00035bd7) list_set_graphic_pane_vc

0x34ac,	// (0x0003226d) input_focus_pane_cp2_vc

0x34a2,	// (0x00032263) setting_code_pane_vc_g1

0x35d7,	// (0x00032398) setting_code_pane_vc_t1

0x6e28,	// (0x00035be9) set_text_pane_vc_t1_ParamLimits

0x6e28,	// (0x00035be9) set_text_pane_vc_t1

0x34ac,	// (0x0003226d) input_focus_pane_cp1_vc

0x6e44,	// (0x00035c05) list_set_text_pane_vc

0x34a2,	// (0x00032263) setting_text_pane_vc_g1

0x34ac,	// (0x0003226d) bg_set_opt_pane_cp2_vc

0x35ce,	// (0x0003238f) setting_slider_graphic_pane_vc_g1

0x6e4e,	// (0x00035c0f) setting_slider_graphic_pane_vc_t1

0x6e5e,	// (0x00035c1f) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fe,	// (0x0003e7bf) setting_slider_graphic_pane_vc_t

0x6e6e,	// (0x00035c2f) slider_set_pane_cp_vc

0x6e76,	// (0x00035c37) slider_set_pane_vc_g1

0x6e7f,	// (0x00035c40) slider_set_pane_vc_g2

0x0006,

0xfa03,	// (0x0003e7c4) slider_set_pane_vc_g

0x3e53,	// (0x00032c14) set_opt_bg_pane_g1_copy1

0x3e5b,	// (0x00032c1c) set_opt_bg_pane_g2_copy1

0x6eab,	// (0x00035c6c) set_opt_bg_pane_g3_copy1

0x3e6b,	// (0x00032c2c) set_opt_bg_pane_g4_copy1

0x3e73,	// (0x00032c34) set_opt_bg_pane_g5_copy1

0x3e7b,	// (0x00032c3c) set_opt_bg_pane_g6_copy1

0x6eb5,	// (0x00035c76) set_opt_bg_pane_g7_copy1

0x6ebd,	// (0x00035c7e) set_opt_bg_pane_g8_copy1

0x6ec7,	// (0x00035c88) set_opt_bg_pane_g9_copy1

0x34ac,	// (0x0003226d) bg_set_opt_pane_cp_vc

0x6ed1,	// (0x00035c92) setting_slider_pane_vc_t1

0x6ee0,	// (0x00035ca1) setting_slider_pane_vc_t2

0x6ef0,	// (0x00035cb1) setting_slider_pane_vc_t3

0x0002,

0xfa12,	// (0x0003e7d3) setting_slider_pane_vc_t

0x6f00,	// (0x00035cc1) slider_set_pane_vc

0x1952,	// (0x00030713) volume_set_pane_vc_g1

0x195b,	// (0x0003071c) volume_set_pane_vc_g2

0x1964,	// (0x00030725) volume_set_pane_vc_g3

0x196d,	// (0x0003072e) volume_set_pane_vc_g4

0x1976,	// (0x00030737) volume_set_pane_vc_g5

0x197f,	// (0x00030740) volume_set_pane_vc_g6

0x1988,	// (0x00030749) volume_set_pane_vc_g7

0x1991,	// (0x00030752) volume_set_pane_vc_g8

0x199a,	// (0x0003075b) volume_set_pane_vc_g9

0x19a3,	// (0x00030764) volume_set_pane_vc_g10

0x0009,

0xf8b7,	// (0x0003e678) volume_set_pane_vc_g

0x6f08,	// (0x00035cc9) volume_set_pane_vc

0x6f10,	// (0x00035cd1) button_value_adjust_pane_cp1_vc

0x6f1a,	// (0x00035cdb) list_highlight_pane_cp2_vc

0x6f23,	// (0x00035ce4) list_set_pane_vc_ParamLimits

0x6f23,	// (0x00035ce4) list_set_pane_vc

0x6f81,	// (0x00035d42) main_pane_set_vc_t1_ParamLimits

0x6f81,	// (0x00035d42) main_pane_set_vc_t1

0x6f96,	// (0x00035d57) main_pane_set_vc_t2_ParamLimits

0x6f96,	// (0x00035d57) main_pane_set_vc_t2

0x6fa8,	// (0x00035d69) main_pane_set_vc_t3_ParamLimits

0x6fa8,	// (0x00035d69) main_pane_set_vc_t3

0x6fbc,	// (0x00035d7d) main_pane_set_vc_t4_ParamLimits

0x6fbc,	// (0x00035d7d) main_pane_set_vc_t4

0x0003,

0xfa19,	// (0x0003e7da) main_pane_set_vc_t_ParamLimits

0xfa19,	// (0x0003e7da) main_pane_set_vc_t

0x6fd0,	// (0x00035d91) setting_code_pane_vc_ParamLimits

0x6fd0,	// (0x00035d91) setting_code_pane_vc

0x6fe1,	// (0x00035da2) setting_slider_graphic_pane_vc

0x6fe1,	// (0x00035da2) setting_slider_pane_vc

0x6fe1,	// (0x00035da2) setting_text_pane_vc

0x6fe1,	// (0x00035da2) setting_volume_pane_vc

0x6feb,	// (0x00035dac) scroll_pane_cp121_vc

0x3dd2,	// (0x00032b93) set_content_pane_vc

0x6ff3,	// (0x00035db4) button_value_adjust_pane_g1

0x6ffc,	// (0x00035dbd) button_value_adjust_pane_g2

0x0001,

0xfa6c,	// (0x0003e82d) button_value_adjust_pane_g

0x7005,	// (0x00035dc6) form_field_slider_wide_pane_vc_t1_ParamLimits

0x7005,	// (0x00035dc6) form_field_slider_wide_pane_vc_t1

0x7019,	// (0x00035dda) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7019,	// (0x00035dda) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa71,	// (0x0003e832) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa71,	// (0x0003e832) form_field_slider_wide_pane_vc_t

0x3807,	// (0x000325c8) input_focus_pane_cp10_vc_ParamLimits

0x3807,	// (0x000325c8) input_focus_pane_cp10_vc

0x7047,	// (0x00035e08) slider_cont_pane_cp1_vc_ParamLimits

0x7047,	// (0x00035e08) slider_cont_pane_cp1_vc

0x7059,	// (0x00035e1a) slider_form_pane_g1_cp2

0x6e7f,	// (0x00035c40) slider_form_pane_g2_cp2

0x7086,	// (0x00035e47) form_field_slider_pane_vc_t3

0x7094,	// (0x00035e55) form_field_slider_pane_vc_t4

0x70a2,	// (0x00035e63) slider_form_pane_vc_ParamLimits

0x70a2,	// (0x00035e63) slider_form_pane_vc

0x70af,	// (0x00035e70) form_field_slider_pane_vc_t1_ParamLimits

0x70af,	// (0x00035e70) form_field_slider_pane_vc_t1

0x7019,	// (0x00035dda) form_field_slider_pane_vc_t2_ParamLimits

0x7019,	// (0x00035dda) form_field_slider_pane_vc_t2

0x0001,

0xfa83,	// (0x0003e844) form_field_slider_pane_vc_t_ParamLimits

0xfa83,	// (0x0003e844) form_field_slider_pane_vc_t

0x3807,	// (0x000325c8) input_focus_pane_cp9_vc_ParamLimits

0x3807,	// (0x000325c8) input_focus_pane_cp9_vc

0x70cb,	// (0x00035e8c) slider_cont_pane_vc_ParamLimits

0x70cb,	// (0x00035e8c) slider_cont_pane_vc

0x70df,	// (0x00035ea0) list_form_graphic_pane_cp_vc_ParamLimits

0x70df,	// (0x00035ea0) list_form_graphic_pane_cp_vc

0x53af,	// (0x00034170) form_field_popup_wide_pane_vc_g1

0x70f4,	// (0x00035eb5) form_field_popup_wide_pane_vc_t1_ParamLimits

0x70f4,	// (0x00035eb5) form_field_popup_wide_pane_vc_t1

0x3df8,	// (0x00032bb9) input_focus_pane_cp8_vc_ParamLimits

0x3df8,	// (0x00032bb9) input_focus_pane_cp8_vc

0x7139,	// (0x00035efa) list_form_wide_pane_vc_ParamLimits

0x7139,	// (0x00035efa) list_form_wide_pane_vc

0x7145,	// (0x00035f06) list_form_graphic_pane_vc_g1

0x714d,	// (0x00035f0e) list_form_graphic_pane_vc_t1_ParamLimits

0x714d,	// (0x00035f0e) list_form_graphic_pane_vc_t1

0x358c,	// (0x0003234d) list_highlight_pane_cp5_vc_ParamLimits

0x358c,	// (0x0003234d) list_highlight_pane_cp5_vc

0x7169,	// (0x00035f2a) list_form_graphic_pane_vc_ParamLimits

0x7169,	// (0x00035f2a) list_form_graphic_pane_vc

0x53af,	// (0x00034170) form_field_popup_pane_vc_g1

0x717f,	// (0x00035f40) form_field_popup_pane_vc_t1_ParamLimits

0x717f,	// (0x00035f40) form_field_popup_pane_vc_t1

0x3df8,	// (0x00032bb9) input_focus_pane_cp7_vc_ParamLimits

0x3df8,	// (0x00032bb9) input_focus_pane_cp7_vc

0x7196,	// (0x00035f57) list_form_pane_vc_ParamLimits

0x7196,	// (0x00035f57) list_form_pane_vc

0x71a2,	// (0x00035f63) data_form_pane_vc_t1_ParamLimits

0x71a2,	// (0x00035f63) data_form_pane_vc_t1

0x3e53,	// (0x00032c14) input_focus_pane_vc_g1

0x3e5b,	// (0x00032c1c) input_focus_pane_vc_g2

0x3e63,	// (0x00032c24) input_focus_pane_vc_g3

0x3e6b,	// (0x00032c2c) input_focus_pane_vc_g4

0x3e73,	// (0x00032c34) input_focus_pane_vc_g5

0x3e7b,	// (0x00032c3c) input_focus_pane_vc_g6

0x3e83,	// (0x00032c44) input_focus_pane_vc_g7

0x3e8b,	// (0x00032c4c) input_focus_pane_vc_g8

0x3e93,	// (0x00032c54) input_focus_pane_vc_g9

0x34a2,	// (0x00032263) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x0003e453) input_focus_pane_vc_g

0x53a3,	// (0x00034164) data_form_pane_vc_ParamLimits

0x53a3,	// (0x00034164) data_form_pane_vc

0x53af,	// (0x00034170) form_field_data_pane_vc_g1

0x71bd,	// (0x00035f7e) form_field_data_pane_vc_t1_ParamLimits

0x71bd,	// (0x00035f7e) form_field_data_pane_vc_t1

0x3df8,	// (0x00032bb9) input_focus_pane_vc_ParamLimits

0x3df8,	// (0x00032bb9) input_focus_pane_vc

0x71d7,	// (0x00035f98) button_value_adjust_pane_cp3_vc

0x71df,	// (0x00035fa0) button_value_adjust_pane_cp5_vc

0x71e7,	// (0x00035fa8) form_field_data_pane_vc_ParamLimits

0x71e7,	// (0x00035fa8) form_field_data_pane_vc

0x71fe,	// (0x00035fbf) form_field_data_pane_vc_cp2

0x7206,	// (0x00035fc7) form_field_data_wide_pane_vc_ParamLimits

0x7206,	// (0x00035fc7) form_field_data_wide_pane_vc

0x721c,	// (0x00035fdd) form_field_data_wide_pane_vc_cp2

0x7224,	// (0x00035fe5) form_field_popup_pane_vc_ParamLimits

0x7224,	// (0x00035fe5) form_field_popup_pane_vc

0x723b,	// (0x00035ffc) form_field_popup_wide_pane_vc_ParamLimits

0x723b,	// (0x00035ffc) form_field_popup_wide_pane_vc

0x725d,	// (0x0003601e) form_field_slider_pane_vc_ParamLimits

0x725d,	// (0x0003601e) form_field_slider_pane_vc

0x7270,	// (0x00036031) form_field_slider_wide_pane_vc_ParamLimits

0x7270,	// (0x00036031) form_field_slider_wide_pane_vc

0xdeb4,	// (0x0003cc75) grid_touch_1_pane_ParamLimits

0xdeb4,	// (0x0003cc75) grid_touch_1_pane

0xdec8,	// (0x0003cc89) grid_touch_2_pane_ParamLimits

0xdec8,	// (0x0003cc89) grid_touch_2_pane

0x7345,	// (0x00036106) touch_pane_g1_ParamLimits

0x7345,	// (0x00036106) touch_pane_g1

0x72a7,	// (0x00036068) cell_app_pane_cp_wide_ParamLimits

0x72a7,	// (0x00036068) cell_app_pane_cp_wide

0x72b8,	// (0x00036079) grid_popup_fast_wide_pane_ParamLimits

0x72b8,	// (0x00036079) grid_popup_fast_wide_pane

0x72cc,	// (0x0003608d) scroll_pane_cp19_ParamLimits

0x72cc,	// (0x0003608d) scroll_pane_cp19

0x34ac,	// (0x0003226d) bg_popup_window_pane_cp20

0x72e0,	// (0x000360a1) listscroll_popup_fast_wide_pane

0x3fbb,	// (0x00032d7c) grid_indicator_nsta_pane

0x72e8,	// (0x000360a9) clock_nsta_pane_g1

0x72f1,	// (0x000360b2) clock_nsta_pane_t1

0xdef2,	// (0x0003ccb3) cell_indicator_nsta_pane_ParamLimits

0xdef2,	// (0x0003ccb3) cell_indicator_nsta_pane

0x7345,	// (0x00036106) cell_indicator_nsta_pane_g1

0xdf0b,	// (0x0003cccc) cell_indicator_nsta_pane_g2

0x0001,

0xfa94,	// (0x0003e855) cell_indicator_nsta_pane_g

0x7369,	// (0x0003612a) clock_nsta_pane_cp

0x7371,	// (0x00036132) indicator_nsta_pane_cp

0x7379,	// (0x0003613a) nsta_clock_indic_pane_g1

0x3655,	// (0x00032416) grid_indicator_pane

0x4387,	// (0x00033148) scroll_pane_cp29

0x0f37,	// (0x0002fcf8) indicator_nsta_pane_cp2_ParamLimits

0x0f37,	// (0x0002fcf8) indicator_nsta_pane_cp2

0x358c,	// (0x0003234d) main_apps_wheel_pane

0x55c4,	// (0x00034385) form_midp_field_text_pane_ParamLimits

0x570f,	// (0x000344d0) scroll_bar_cp050_ParamLimits

0x73d2,	// (0x00036193) cell_indicator_pane_ParamLimits

0x73d2,	// (0x00036193) cell_indicator_pane

0x73e9,	// (0x000361aa) cell_indicator_pane_g1

0xdf20,	// (0x0003cce1) grid_wheel_folder_pane_ParamLimits

0xdf20,	// (0x0003cce1) grid_wheel_folder_pane

0xdf2e,	// (0x0003ccef) list_wheel_apps_pane_ParamLimits

0xdf2e,	// (0x0003ccef) list_wheel_apps_pane

0xdf3c,	// (0x0003ccfd) main_apps_wheel_pane_g1_ParamLimits

0xdf3c,	// (0x0003ccfd) main_apps_wheel_pane_g1

0xdf48,	// (0x0003cd09) main_apps_wheel_pane_g2_ParamLimits

0xdf48,	// (0x0003cd09) main_apps_wheel_pane_g2

0x0001,

0xfab0,	// (0x0003e871) main_apps_wheel_pane_g_ParamLimits

0xfab0,	// (0x0003e871) main_apps_wheel_pane_g

0xdf56,	// (0x0003cd17) main_apps_wheel_pane_t1_ParamLimits

0xdf56,	// (0x0003cd17) main_apps_wheel_pane_t1

0xdf6a,	// (0x0003cd2b) list_wheel_apps_pane_g1

0xdf72,	// (0x0003cd33) list_wheel_apps_pane_g2

0xdf7a,	// (0x0003cd3b) list_wheel_apps_pane_g3

0xdf82,	// (0x0003cd43) list_wheel_apps_pane_g4

0xdf8c,	// (0x0003cd4d) list_wheel_apps_pane_g5

0x0004,

0xfab5,	// (0x0003e876) list_wheel_apps_pane_g

0x48ff,	// (0x000336c0) navi_icon_text_pane

0xd59f,	// (0x0003c360) aid_fill_nsta

0x74ae,	// (0x0003626f) navi_icon_text_pane_g1

0x74ba,	// (0x0003627b) navi_icon_text_pane_t1

0xd4b7,	// (0x0003c278) list_set_graphic_pane_t1_ParamLimits

0xd4b7,	// (0x0003c278) list_set_graphic_pane_t1

0x5e6a,	// (0x00034c2b) popup_midp_note_alarm_window_t6_ParamLimits

0x5e6a,	// (0x00034c2b) popup_midp_note_alarm_window_t6

0x5e7c,	// (0x00034c3d) popup_midp_note_alarm_window_t7_ParamLimits

0x5e7c,	// (0x00034c3d) popup_midp_note_alarm_window_t7

0x5e8e,	// (0x00034c4f) popup_midp_note_alarm_window_t8_ParamLimits

0x5e8e,	// (0x00034c4f) popup_midp_note_alarm_window_t8

0x5ea0,	// (0x00034c61) popup_midp_note_alarm_window_t9_ParamLimits

0x5ea0,	// (0x00034c61) popup_midp_note_alarm_window_t9

0x5eb2,	// (0x00034c73) popup_midp_note_alarm_window_t10_ParamLimits

0x5eb2,	// (0x00034c73) popup_midp_note_alarm_window_t10

0x5ec4,	// (0x00034c85) popup_midp_note_alarm_window_t11_ParamLimits

0x5ec4,	// (0x00034c85) popup_midp_note_alarm_window_t11

0x5ed6,	// (0x00034c97) scroll_pane_cp17_ParamLimits

0x5ed6,	// (0x00034c97) scroll_pane_cp17

0x1952,	// (0x00030713) volume_small_pane_cp_g1

0x1c47,	// (0x00030a08) volume_small_pane_cp_g2

0x1c50,	// (0x00030a11) volume_small_pane_cp_g3

0x1c59,	// (0x00030a1a) volume_small_pane_cp_g4

0x1c62,	// (0x00030a23) volume_small_pane_cp_g5

0x1c6b,	// (0x00030a2c) volume_small_pane_cp_g6

0x1c74,	// (0x00030a35) volume_small_pane_cp_g7

0x1c7d,	// (0x00030a3e) volume_small_pane_cp_g8

0x1c86,	// (0x00030a47) volume_small_pane_cp_g9

0x1c8f,	// (0x00030a50) volume_small_pane_cp_g10

0x4b4e,	// (0x0003390f) midp_ticker_pane_g1_ParamLimits

0x4b5a,	// (0x0003391b) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x0003e51f) midp_ticker_pane_g_ParamLimits

0x4b66,	// (0x00033927) midp_ticker_pane_t1_ParamLimits

0xd5c3,	// (0x0003c384) aid_fill_nsta_2

0x56fb,	// (0x000344bc) list_form2_midp_pane

0x682c,	// (0x000355ed) midp_editing_number_pane_ParamLimits

0x683b,	// (0x000355fc) midp_ticker_pane_ParamLimits

0x74cc,	// (0x0003628d) form2_midp_field_pane

0x74f0,	// (0x000362b1) scroll_pane_cp51

0x7510,	// (0x000362d1) form2_midp_button_pane_ParamLimits

0x7510,	// (0x000362d1) form2_midp_button_pane

0x7522,	// (0x000362e3) form2_midp_content_pane_ParamLimits

0x7522,	// (0x000362e3) form2_midp_content_pane

0x753c,	// (0x000362fd) form2_midp_field_choice_group_pane

0x7544,	// (0x00036305) form2_midp_field_pane_g1

0x754c,	// (0x0003630d) form2_midp_field_pane_g2

0x7554,	// (0x00036315) form2_midp_field_pane_g3

0x755c,	// (0x0003631d) form2_midp_field_pane_g4

0x0003,

0xfada,	// (0x0003e89b) form2_midp_field_pane_g

0x7564,	// (0x00036325) form2_midp_gauge_slider_pane

0x756c,	// (0x0003632d) form2_midp_gauge_wait_pane

0x7574,	// (0x00036335) form2_midp_image_pane_ParamLimits

0x7574,	// (0x00036335) form2_midp_image_pane

0x758f,	// (0x00036350) form2_midp_label_pane_ParamLimits

0x758f,	// (0x00036350) form2_midp_label_pane

0xdfbf,	// (0x0003cd80) form2_midp_label_pane_cp_ParamLimits

0xdfbf,	// (0x0003cd80) form2_midp_label_pane_cp

0x75c9,	// (0x0003638a) form2_midp_string_pane_ParamLimits

0x75c9,	// (0x0003638a) form2_midp_string_pane

0xc7d9,	// (0x0003b59a) form2_midp_text_pane_ParamLimits

0xc7d9,	// (0x0003b59a) form2_midp_text_pane

0x75db,	// (0x0003639c) form2_midp_time_pane

0x75eb,	// (0x000363ac) input_focus_pane_cp51_ParamLimits

0x75eb,	// (0x000363ac) input_focus_pane_cp51

0x7603,	// (0x000363c4) form2_midp_label_pane_t1_ParamLimits

0x7603,	// (0x000363c4) form2_midp_label_pane_t1

0xc7f2,	// (0x0003b5b3) form2_mdip_text_pane_t1_ParamLimits

0xc7f2,	// (0x0003b5b3) form2_mdip_text_pane_t1

0x30ce,	// (0x00031e8f) form2_midp_time_pane_t1

0x764c,	// (0x0003640d) form2_midp_gauge_slider_pane_t1

0xdfde,	// (0x0003cd9f) form2_midp_gauge_slider_pane_t2

0xdff0,	// (0x0003cdb1) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae3,	// (0x0003e8a4) form2_midp_gauge_slider_pane_t

0x7682,	// (0x00036443) form2_midp_slider_pane

0x768e,	// (0x0003644f) form2_midp_gauge_wait_pane_t1

0x769c,	// (0x0003645d) form2_midp_wait_pane_ParamLimits

0x769c,	// (0x0003645d) form2_midp_wait_pane

0xe002,	// (0x0003cdc3) list_single_2graphic_pane_cp4_ParamLimits

0xe002,	// (0x0003cdc3) list_single_2graphic_pane_cp4

0xd9df,	// (0x0003c7a0) list_single_midp_graphic_pane_cp_ParamLimits

0xd9df,	// (0x0003c7a0) list_single_midp_graphic_pane_cp

0x34ac,	// (0x0003226d) list_highlight_pane_cp20

0x76f6,	// (0x000364b7) list_single_2graphic_pane_g1_cp4

0x76fe,	// (0x000364bf) list_single_2graphic_pane_g2_cp4

0x7706,	// (0x000364c7) list_single_2graphic_pane_t1_cp4

0x358c,	// (0x0003234d) list_highlight_pane_cp21

0x7715,	// (0x000364d6) list_single_midp_graphic_pane_g4_cp

0x7724,	// (0x000364e5) list_single_midp_graphic_pane_t1_cp

0xe016,	// (0x0003cdd7) form2_mdip_string_pane_t1_ParamLimits

0xe016,	// (0x0003cdd7) form2_mdip_string_pane_t1

0x34ac,	// (0x0003226d) bg_wml_button_pane_cp2

0x34a2,	// (0x00032263) form2_midp_image_pane_g1

0x084d,	// (0x0002f60e) list_double_large_graphic_pane_g5_ParamLimits

0x084d,	// (0x0002f60e) list_double_large_graphic_pane_g5

0x4dbf,	// (0x00033b80) midp_form_pane_ParamLimits

0x358c,	// (0x0003234d) main_apps_wheel_pane_ParamLimits

0xc43e,	// (0x0003b1ff) popup_preview_window_ParamLimits

0xc43e,	// (0x0003b1ff) popup_preview_window

0x17b9,	// (0x0003057a) popup_touch_info_window_ParamLimits

0x17b9,	// (0x0003057a) popup_touch_info_window

0x17d7,	// (0x00030598) popup_touch_menu_window_ParamLimits

0x17d7,	// (0x00030598) popup_touch_menu_window

0x3498,	// (0x00032259) bg_popup_sub_pane_cp6

0x7832,	// (0x000365f3) list_touch_menu_pane

0x783a,	// (0x000365fb) list_single_touch_menu_pane_ParamLimits

0x783a,	// (0x000365fb) list_single_touch_menu_pane

0x7850,	// (0x00036611) list_single_touch_menu_pane_t1

0x358c,	// (0x0003234d) bg_popup_sub_pane_cp7_ParamLimits

0x358c,	// (0x0003234d) bg_popup_sub_pane_cp7

0x785e,	// (0x0003661f) heading_sub_pane

0x7866,	// (0x00036627) list_touch_info_pane_ParamLimits

0x7866,	// (0x00036627) list_touch_info_pane

0x7875,	// (0x00036636) list_single_touch_info_pane_ParamLimits

0x7875,	// (0x00036636) list_single_touch_info_pane

0x7887,	// (0x00036648) list_single_touch_info_pane_t1

0x7895,	// (0x00036656) list_single_touch_info_pane_t2

0x0001,

0xfaf1,	// (0x0003e8b2) list_single_touch_info_pane_t

0x4a7f,	// (0x00033840) bg_popup_heading_pane_cp

0x78a3,	// (0x00036664) heading_sub_pane_t1

0x533d,	// (0x000340fe) bg_popup_preview_window_pane_cp_ParamLimits

0x533d,	// (0x000340fe) bg_popup_preview_window_pane_cp

0x785e,	// (0x0003661f) heading_preview_pane

0x7866,	// (0x00036627) list_preview_pane_ParamLimits

0x7866,	// (0x00036627) list_preview_pane

0x78b1,	// (0x00036672) popup_preview_window_g1

0x7875,	// (0x00036636) list_single_preview_pane_ParamLimits

0x7875,	// (0x00036636) list_single_preview_pane

0x78b9,	// (0x0003667a) list_single_preview_pane_g1

0x78c1,	// (0x00036682) list_single_preview_pane_t1

0x7887,	// (0x00036648) list_single_preview_pane_t2

0x0001,

0xfaf6,	// (0x0003e8b7) list_single_preview_pane_t

0x78cf,	// (0x00036690) bg_popup_heading_pane_cp2_ParamLimits

0x78cf,	// (0x00036690) bg_popup_heading_pane_cp2

0x78e5,	// (0x000366a6) heading_preview_pane_g1

0x78ed,	// (0x000366ae) heading_preview_pane_t1_ParamLimits

0x78ed,	// (0x000366ae) heading_preview_pane_t1

0x3678,	// (0x00032439) soft_indicator_pane_t1_ParamLimits

0x3d6b,	// (0x00032b2c) scroll_pane_ParamLimits

0x4280,	// (0x00033041) scroll_sc2_left_pane

0x4289,	// (0x0003304a) scroll_sc2_right_pane

0x42a8,	// (0x00033069) scroll_bg_pane_g1_ParamLimits

0x42bd,	// (0x0003307e) scroll_bg_pane_g2_ParamLimits

0x42d5,	// (0x00033096) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x0003e4aa) scroll_bg_pane_g_ParamLimits

0x42a8,	// (0x00033069) scroll_handle_pane_g1_ParamLimits

0x42f7,	// (0x000330b8) scroll_handle_pane_g2_ParamLimits

0x42d5,	// (0x00033096) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x0003e4b1) scroll_handle_pane_g_ParamLimits

0x1281,	// (0x00030042) popup_choice_list_window_ParamLimits

0x1281,	// (0x00030042) popup_choice_list_window

0x5213,	// (0x00033fd4) choice_list_pane

0x5295,	// (0x00034056) cell_toolbar_pane_t1

0x52bd,	// (0x0003407e) toolbar_button_pane_ParamLimits

0x6390,	// (0x00035151) ai_gene_pane_1_t2_ParamLimits

0x6390,	// (0x00035151) ai_gene_pane_1_t2

0x0001,

0xf913,	// (0x0003e6d4) ai_gene_pane_1_t_ParamLimits

0xf913,	// (0x0003e6d4) ai_gene_pane_1_t

0x790a,	// (0x000366cb) scroll_sc2_left_pane_g1

0x790a,	// (0x000366cb) scroll_sc2_right_pane_g1

0x4dbf,	// (0x00033b80) bg_popup_sub_pane_cp10

0x7914,	// (0x000366d5) list_choice_list_pane

0x792d,	// (0x000366ee) list_single_choice_list_pane_ParamLimits

0x792d,	// (0x000366ee) list_single_choice_list_pane

0x7940,	// (0x00036701) list_single_choice_list_pane_g1

0x3f8c,	// (0x00032d4d) list_single_choice_list_pane_t1_ParamLimits

0x3f8c,	// (0x00032d4d) list_single_choice_list_pane_t1

0x7948,	// (0x00036709) choice_list_pane_g1

0x7950,	// (0x00036711) choice_list_pane_t1

0x3498,	// (0x00032259) input_focus_pane_cp11

0x4163,	// (0x00032f24) title_pane_stacon_g2_ParamLimits

0x4163,	// (0x00032f24) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x0003e490) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0003e490) title_pane_stacon_g

0x4a7f,	// (0x00033840) cursor_press_pane

0xc0f1,	// (0x0003aeb2) popup_fep_hwr_window_ParamLimits

0xc0f1,	// (0x0003aeb2) popup_fep_hwr_window

0x13a7,	// (0x00030168) popup_fep_vkb_window_ParamLimits

0x13a7,	// (0x00030168) popup_fep_vkb_window

0x795e,	// (0x0003671f) cursor_press_pane_g1

0x0002,

0xfb1f,	// (0x0003e8e0) fep_vkb_side_pane_g_ParamLimits

0x1cd1,	// (0x00030a92) fep_hwr_candidate_pane_ParamLimits

0x1cd1,	// (0x00030a92) fep_hwr_candidate_pane

0x1cfb,	// (0x00030abc) fep_hwr_side_pane_ParamLimits

0x1cfb,	// (0x00030abc) fep_hwr_side_pane

0x1d1b,	// (0x00030adc) fep_hwr_top_pane_ParamLimits

0x1d1b,	// (0x00030adc) fep_hwr_top_pane

0x1d33,	// (0x00030af4) fep_hwr_write_pane_ParamLimits

0x1d33,	// (0x00030af4) fep_hwr_write_pane

0xfb1f,	// (0x0003e8e0) fep_vkb_side_pane_g

0x7966,	// (0x00036727) fep_hwr_top_pane_g1

0x7978,	// (0x00036739) fep_hwr_top_pane_g2

0x1d6d,	// (0x00030b2e) fep_hwr_top_pane_g3

0x0002,

0xfafb,	// (0x0003e8bc) fep_hwr_top_pane_g

0x1d82,	// (0x00030b43) fep_hwr_top_text_pane

0x4477,	// (0x00033238) fep_hwr_top_text_pane_g1

0x79ae,	// (0x0003676f) fep_hwr_top_text_pane_t1

0x1e78,	// (0x00030c39) fep_hwr_candidate_pane_g1

0x7c01,	// (0x000369c2) fep_vkb_keypad_pane_g3_ParamLimits

0x7c01,	// (0x000369c2) fep_vkb_keypad_pane_g3

0x7c29,	// (0x000369ea) fep_vkb_keypad_pane_g4_ParamLimits

0x7c29,	// (0x000369ea) fep_vkb_keypad_pane_g4

0x7c98,	// (0x00036a59) fep_vkb_bottom_pane_g2_ParamLimits

0x7c98,	// (0x00036a59) fep_vkb_bottom_pane_g2

0x0001,

0xfb26,	// (0x0003e8e7) fep_vkb_bottom_pane_g_ParamLimits

0xfb26,	// (0x0003e8e7) fep_vkb_bottom_pane_g

0x790a,	// (0x000366cb) cell_vkb_side_pane_g2

0x0001,

0xfb30,	// (0x0003e8f1) cell_vkb_side_pane_g

0x7d23,	// (0x00036ae4) cell_vkb_side_pane_t1

0x7d31,	// (0x00036af2) cell_vkb_side_pane_t1_copy1

0x790a,	// (0x000366cb) bg_fep_vkb_candidate_pane_g2

0x7e5d,	// (0x00036c1e) cell_vkb_candidate_pane_ParamLimits

0x79bc,	// (0x0003677d) aid_size_cell_vkb_ParamLimits

0x79bc,	// (0x0003677d) aid_size_cell_vkb

0x7e5d,	// (0x00036c1e) cell_vkb_candidate_pane

0x1e9f,	// (0x00030c60) bg_popup_fep_shadow_pane_g1

0xe09a,	// (0x0003ce5b) fep_vkb_bottom_pane_ParamLimits

0xe09a,	// (0x0003ce5b) fep_vkb_bottom_pane

0x7a80,	// (0x00036841) fep_vkb_candidate_pane_ParamLimits

0x7a80,	// (0x00036841) fep_vkb_candidate_pane

0xe0bf,	// (0x0003ce80) fep_vkb_keypad_pane_ParamLimits

0xe0bf,	// (0x0003ce80) fep_vkb_keypad_pane

0xe0fb,	// (0x0003cebc) fep_vkb_side_pane_ParamLimits

0xe0fb,	// (0x0003cebc) fep_vkb_side_pane

0xe15f,	// (0x0003cf20) fep_vkb_top_pane_ParamLimits

0xe15f,	// (0x0003cf20) fep_vkb_top_pane

0x7b5a,	// (0x0003691b) fep_vkb_top_pane_g1_ParamLimits

0x7b5a,	// (0x0003691b) fep_vkb_top_pane_g1

0x7b69,	// (0x0003692a) fep_vkb_top_pane_g2_ParamLimits

0x7b69,	// (0x0003692a) fep_vkb_top_pane_g2

0x7b78,	// (0x00036939) fep_vkb_top_pane_g3_ParamLimits

0x7b78,	// (0x00036939) fep_vkb_top_pane_g3

0x0003,

0xfb16,	// (0x0003e8d7) fep_vkb_top_pane_g_ParamLimits

0xfb16,	// (0x0003e8d7) fep_vkb_top_pane_g

0x7b96,	// (0x00036957) fep_vkb_top_text_pane_ParamLimits

0x7b96,	// (0x00036957) fep_vkb_top_text_pane

0xe19b,	// (0x0003cf5c) fep_vkb_side_pane_g1_ParamLimits

0xe19b,	// (0x0003cf5c) fep_vkb_side_pane_g1

0x7bf0,	// (0x000369b1) grid_vkb_side_pane_ParamLimits

0x7bf0,	// (0x000369b1) grid_vkb_side_pane

0x1ea7,	// (0x00030c68) bg_popup_fep_shadow_pane_g2

0x1eb0,	// (0x00030c71) bg_popup_fep_shadow_pane_g3

0x1eb8,	// (0x00030c79) bg_popup_fep_shadow_pane_g4

0x1ec1,	// (0x00030c82) bg_popup_fep_shadow_pane_g5

0x1ecb,	// (0x00030c8c) bg_popup_fep_shadow_pane_g6

0x1ed3,	// (0x00030c94) bg_popup_fep_shadow_pane_g7

0x3e6b,	// (0x00032c2c) bg_popup_fep_shadow_pane_g8

0x7c47,	// (0x00036a08) grid_vkb_keypad_number_pane_ParamLimits

0x7c47,	// (0x00036a08) grid_vkb_keypad_number_pane

0x7c57,	// (0x00036a18) grid_vkb_keypad_pane_ParamLimits

0x7c57,	// (0x00036a18) grid_vkb_keypad_pane

0x7c7d,	// (0x00036a3e) fep_vkb_bottom_pane_g1_ParamLimits

0x7c7d,	// (0x00036a3e) fep_vkb_bottom_pane_g1

0x7ca6,	// (0x00036a67) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7ca6,	// (0x00036a67) grid_vkb_keypad_bottom_left_pane

0x7cbb,	// (0x00036a7c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7cbb,	// (0x00036a7c) grid_vkb_keypad_bottom_right_pane

0x7cd0,	// (0x00036a91) fep_vkb_top_text_pane_g1

0xe1e2,	// (0x0003cfa3) fep_vkb_top_text_pane_t1

0xe1f4,	// (0x0003cfb5) cell_vkb_side_pane_ParamLimits

0xe1f4,	// (0x0003cfb5) cell_vkb_side_pane

0x790a,	// (0x000366cb) cell_vkb_side_pane_g1

0x7d3f,	// (0x00036b00) cell_vkb_keypad_pane_ParamLimits

0x7d3f,	// (0x00036b00) cell_vkb_keypad_pane

0x7db4,	// (0x00036b75) cell_vkb_keypad_pane_g1

0x0008,

0xfb43,	// (0x0003e904) bg_popup_fep_shadow_pane_g

0x1ee5,	// (0x00030ca6) cell_hwr_side_pane_g1

0x1ee5,	// (0x00030ca6) cell_hwr_side_pane_g2

0x7dbe,	// (0x00036b7f) cell_vkb_keypad_pane_t1

0xe20a,	// (0x0003cfcb) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe20a,	// (0x0003cfcb) cell_vkb_keypad_bottom_left_pane

0xe21f,	// (0x0003cfe0) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe21f,	// (0x0003cfe0) cell_vkb_keypad_bottom_right_pane

0x790a,	// (0x000366cb) cell_vkb_keypad_bottom_left_pane_g1

0x790a,	// (0x000366cb) cell_vkb_keypad_bottom_right_pane_g1

0x7e22,	// (0x00036be3) cell_vkb_keypad_number_pane_ParamLimits

0x7e22,	// (0x00036be3) cell_vkb_keypad_number_pane

0x7e41,	// (0x00036c02) cell_vkb_keypad_number_pane_g1

0x7e4b,	// (0x00036c0c) cell_vkb_keypad_number_pane_g2

0x7e54,	// (0x00036c15) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb35,	// (0x0003e8f6) cell_vkb_keypad_number_pane_g

0x7dbe,	// (0x00036b7f) cell_vkb_keypad_number_pane_t1

0x7e78,	// (0x00036c39) fep_vkb_candidate_pane_g1

0x0001,

0xfb56,	// (0x0003e917) cell_hwr_side_pane_g

0x7e91,	// (0x00036c52) cell_hwr_side_pane_t1

0x1eef,	// (0x00030cb0) cell_hwr_side_pane_t1_copy1

0x1efd,	// (0x00030cbe) cell_hwr_candidate_pane_g1

0x1f2c,	// (0x00030ced) cell_hwr_candidate_pane_t1

0x790a,	// (0x000366cb) cell_vkb_candidate_pane_g2

0x7ed5,	// (0x00036c96) cell_vkb_candidate_pane_t1

0x1c98,	// (0x00030a59) bg_popup_fep_shadow_pane_ParamLimits

0x1c98,	// (0x00030a59) bg_popup_fep_shadow_pane

0x1d4d,	// (0x00030b0e) bg_fep_hwr_top_pane_g4

0x798a,	// (0x0003674b) bg_hwr_side_pane_g1_ParamLimits

0x798a,	// (0x0003674b) bg_hwr_side_pane_g1

0xc827,	// (0x0003b5e8) cell_hwr_side_pane_ParamLimits

0xc827,	// (0x0003b5e8) cell_hwr_side_pane

0x1df9,	// (0x00030bba) fep_hwr_write_pane_g1_ParamLimits

0x1df9,	// (0x00030bba) fep_hwr_write_pane_g1

0x1e06,	// (0x00030bc7) fep_hwr_write_pane_g2_ParamLimits

0x1e06,	// (0x00030bc7) fep_hwr_write_pane_g2

0x1e13,	// (0x00030bd4) fep_hwr_write_pane_g3_ParamLimits

0x1e13,	// (0x00030bd4) fep_hwr_write_pane_g3

0xc847,	// (0x0003b608) fep_hwr_write_pane_g4_ParamLimits

0xc847,	// (0x0003b608) fep_hwr_write_pane_g4

0x0005,

0xfb02,	// (0x0003e8c3) fep_hwr_write_pane_g_ParamLimits

0xfb02,	// (0x0003e8c3) fep_hwr_write_pane_g

0x1d4d,	// (0x00030b0e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1d4d,	// (0x00030b0e) bg_fep_hwr_candidate_pane_g2

0x1e36,	// (0x00030bf7) cell_hwr_candidate_pane_ParamLimits

0x1e36,	// (0x00030bf7) cell_hwr_candidate_pane

0x1e78,	// (0x00030c39) fep_hwr_candidate_pane_g1_ParamLimits

0x79ea,	// (0x000367ab) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x79ea,	// (0x000367ab) bg_popup_fep_shadow_pane_cp2

0x7b88,	// (0x00036949) fep_vkb_top_pane_g4_ParamLimits

0x7b88,	// (0x00036949) fep_vkb_top_pane_g4

0x7bce,	// (0x0003698f) fep_vkb_side_pane_g2_ParamLimits

0x7bce,	// (0x0003698f) fep_vkb_side_pane_g2

0xbbe9,	// (0x0003a9aa) list_setting_pane_t4_ParamLimits

0xbbe9,	// (0x0003a9aa) list_setting_pane_t4

0xbc83,	// (0x0003aa44) list_setting_number_pane_t5_ParamLimits

0xbc83,	// (0x0003aa44) list_setting_number_pane_t5

0x44ae,	// (0x0003326f) list_double_heading_pane_cp2_ParamLimits

0x44ae,	// (0x0003326f) list_double_heading_pane_cp2

0x3e06,	// (0x00032bc7) list_double_heading_pane_g1_cp2_ParamLimits

0x3e06,	// (0x00032bc7) list_double_heading_pane_g1_cp2

0x3e12,	// (0x00032bd3) list_double_heading_pane_g2_cp2_ParamLimits

0x3e12,	// (0x00032bd3) list_double_heading_pane_g2_cp2

0x7ee3,	// (0x00036ca4) list_double_heading_pane_t1_cp2_ParamLimits

0x7ee3,	// (0x00036ca4) list_double_heading_pane_t1_cp2

0x7ef9,	// (0x00036cba) list_double_heading_pane_t2_cp2_ParamLimits

0x7ef9,	// (0x00036cba) list_double_heading_pane_t2_cp2

0x3480,	// (0x00032241) aid_value_unit2

0x0400,	// (0x0002f1c1) popup_preview_fixed_window

0x3815,	// (0x000325d6) bg_popup_preview_window_pane_cp02

0x7f0b,	// (0x00036ccc) list_preview_fixed_pane

0x7f51,	// (0x00036d12) list_empty_pane_fp_ParamLimits

0x7f51,	// (0x00036d12) list_empty_pane_fp

0x7f51,	// (0x00036d12) list_single_cale_day_pane_fp_ParamLimits

0x7f51,	// (0x00036d12) list_single_cale_day_pane_fp

0x7f51,	// (0x00036d12) list_single_graphic_heading_pane_fp_ParamLimits

0x7f51,	// (0x00036d12) list_single_graphic_heading_pane_fp

0x7f51,	// (0x00036d12) list_single_graphic_pane_fp_ParamLimits

0x7f51,	// (0x00036d12) list_single_graphic_pane_fp

0x7f51,	// (0x00036d12) list_single_heading_pane_fp_ParamLimits

0x7f51,	// (0x00036d12) list_single_heading_pane_fp

0x7f51,	// (0x00036d12) list_single_pane_fp_ParamLimits

0x7f51,	// (0x00036d12) list_single_pane_fp

0x7f66,	// (0x00036d27) list_single_pane_fp_g1_ParamLimits

0x7f66,	// (0x00036d27) list_single_pane_fp_g1

0x30e1,	// (0x00031ea2) list_single_pane_fp_g2_ParamLimits

0x30e1,	// (0x00031ea2) list_single_pane_fp_g2

0x30ed,	// (0x00031eae) list_single_pane_fp_g3_ParamLimits

0x30ed,	// (0x00031eae) list_single_pane_fp_g3

0x7f72,	// (0x00036d33) list_single_pane_fp_g4_ParamLimits

0x7f72,	// (0x00036d33) list_single_pane_fp_g4

0x0003,

0xfb69,	// (0x0003e92a) list_single_pane_fp_g_ParamLimits

0xfb69,	// (0x0003e92a) list_single_pane_fp_g

0x3101,	// (0x00031ec2) list_single_pane_fp_t1_ParamLimits

0x3101,	// (0x00031ec2) list_single_pane_fp_t1

0x3118,	// (0x00031ed9) list_single_graphic_pane_fp_g1_ParamLimits

0x3118,	// (0x00031ed9) list_single_graphic_pane_fp_g1

0x7f66,	// (0x00036d27) list_single_graphic_pane_fp_g2_ParamLimits

0x7f66,	// (0x00036d27) list_single_graphic_pane_fp_g2

0x30e1,	// (0x00031ea2) list_single_graphic_pane_fp_g3_ParamLimits

0x30e1,	// (0x00031ea2) list_single_graphic_pane_fp_g3

0x30ed,	// (0x00031eae) list_single_graphic_pane_fp_g4_ParamLimits

0x30ed,	// (0x00031eae) list_single_graphic_pane_fp_g4

0x7f72,	// (0x00036d33) list_single_graphic_pane_fp_g5_ParamLimits

0x7f72,	// (0x00036d33) list_single_graphic_pane_fp_g5

0x0004,

0xfb72,	// (0x0003e933) list_single_graphic_pane_fp_g_ParamLimits

0xfb72,	// (0x0003e933) list_single_graphic_pane_fp_g

0x3124,	// (0x00031ee5) list_single_graphic_pane_fp_t1_ParamLimits

0x3124,	// (0x00031ee5) list_single_graphic_pane_fp_t1

0x3118,	// (0x00031ed9) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3118,	// (0x00031ed9) list_single_graphic_heading_pane_fp_g1

0x7f66,	// (0x00036d27) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7f66,	// (0x00036d27) list_single_graphic_heading_pane_fp_g2

0x30e1,	// (0x00031ea2) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x30e1,	// (0x00031ea2) list_single_graphic_heading_pane_fp_g3

0x30ed,	// (0x00031eae) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x30ed,	// (0x00031eae) list_single_graphic_heading_pane_fp_g4

0x7f72,	// (0x00036d33) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7f72,	// (0x00036d33) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb72,	// (0x0003e933) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb72,	// (0x0003e933) list_single_graphic_heading_pane_fp_g

0x313a,	// (0x00031efb) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x313a,	// (0x00031efb) list_single_graphic_heading_pane_fp_t1

0x3150,	// (0x00031f11) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3150,	// (0x00031f11) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb7d,	// (0x0003e93e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb7d,	// (0x0003e93e) list_single_graphic_heading_pane_fp_t

0x3162,	// (0x00031f23) list_single_cale_day_pane_fp_g1_ParamLimits

0x3162,	// (0x00031f23) list_single_cale_day_pane_fp_g1

0x7f7e,	// (0x00036d3f) list_single_cale_day_pane_fp_g2_ParamLimits

0x7f7e,	// (0x00036d3f) list_single_cale_day_pane_fp_g2

0x319a,	// (0x00031f5b) list_single_cale_day_pane_fp_g3_ParamLimits

0x319a,	// (0x00031f5b) list_single_cale_day_pane_fp_g3

0x31c2,	// (0x00031f83) list_single_cale_day_pane_fp_g4_ParamLimits

0x31c2,	// (0x00031f83) list_single_cale_day_pane_fp_g4

0x31e6,	// (0x00031fa7) list_single_cale_day_pane_fp_g5_ParamLimits

0x31e6,	// (0x00031fa7) list_single_cale_day_pane_fp_g5

0x0004,

0xfb82,	// (0x0003e943) list_single_cale_day_pane_fp_g_ParamLimits

0xfb82,	// (0x0003e943) list_single_cale_day_pane_fp_g

0x320a,	// (0x00031fcb) list_single_cale_day_pane_fp_t1_ParamLimits

0x320a,	// (0x00031fcb) list_single_cale_day_pane_fp_t1

0x3230,	// (0x00031ff1) list_single_cale_day_pane_fp_t2_ParamLimits

0x3230,	// (0x00031ff1) list_single_cale_day_pane_fp_t2

0x3249,	// (0x0003200a) list_single_cale_day_pane_fp_t3_ParamLimits

0x3249,	// (0x0003200a) list_single_cale_day_pane_fp_t3

0x0002,

0xfb8d,	// (0x0003e94e) list_single_cale_day_pane_fp_t_ParamLimits

0xfb8d,	// (0x0003e94e) list_single_cale_day_pane_fp_t

0x7f66,	// (0x00036d27) list_empty_pane_fp_g1_ParamLimits

0x7f66,	// (0x00036d27) list_empty_pane_fp_g1

0x3262,	// (0x00032023) list_empty_pane_fp_t1

0x3270,	// (0x00032031) list_empty_pane_fp_t2

0x0001,

0xfb94,	// (0x0003e955) list_empty_pane_fp_t

0x7f66,	// (0x00036d27) list_single_heading_pane_fp_g1_ParamLimits

0x7f66,	// (0x00036d27) list_single_heading_pane_fp_g1

0x30e1,	// (0x00031ea2) list_single_heading_pane_fp_g2_ParamLimits

0x30e1,	// (0x00031ea2) list_single_heading_pane_fp_g2

0x30ed,	// (0x00031eae) list_single_heading_pane_fp_g3_ParamLimits

0x30ed,	// (0x00031eae) list_single_heading_pane_fp_g3

0x0002,

0xfb99,	// (0x0003e95a) list_single_heading_pane_fp_g_ParamLimits

0xfb99,	// (0x0003e95a) list_single_heading_pane_fp_g

0x327e,	// (0x0003203f) list_single_heading_pane_fp_t1_ParamLimits

0x327e,	// (0x0003203f) list_single_heading_pane_fp_t1

0x3290,	// (0x00032051) list_single_heading_pane_fp_t2_ParamLimits

0x3290,	// (0x00032051) list_single_heading_pane_fp_t2

0x0001,

0xfba0,	// (0x0003e961) list_single_heading_pane_fp_t_ParamLimits

0xfba0,	// (0x0003e961) list_single_heading_pane_fp_t

0x3ffa,	// (0x00032dbb) aid_size_cell_fast

0x3785,	// (0x00032546) soft_indicator_pane_cp1_t1

0x4037,	// (0x00032df8) cell_app_pane_cp2_ParamLimits

0x4037,	// (0x00032df8) cell_app_pane_cp2

0x1cba,	// (0x00030a7b) fep_hwr_candidate_drop_down_list_pane

0x1e92,	// (0x00030c53) fep_hwr_candidate_pane_g3_ParamLimits

0x1e92,	// (0x00030c53) fep_hwr_candidate_pane_g3

0xea36,	// (0x0003d7f7) fep_hwr_candidate_pane_g4_ParamLimits

0xea36,	// (0x0003d7f7) fep_hwr_candidate_pane_g4

0x0002,

0xfb0f,	// (0x0003e8d0) fep_hwr_candidate_pane_g_ParamLimits

0xfb0f,	// (0x0003e8d0) fep_hwr_candidate_pane_g

0x7a6f,	// (0x00036830) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7a6f,	// (0x00036830) fep_vkb_candidate_drop_down_list_pane

0x7e80,	// (0x00036c41) fep_vkb_candidate_pane_g3

0x7e88,	// (0x00036c49) fep_vkb_candidate_pane_g4

0x0002,

0xfb3c,	// (0x0003e8fd) fep_vkb_candidate_pane_g

0x1efd,	// (0x00030cbe) cell_hwr_candidate_pane_g1_ParamLimits

0x1f0b,	// (0x00030ccc) cell_hwr_candidate_pane_g3_ParamLimits

0x1f0b,	// (0x00030ccc) cell_hwr_candidate_pane_g3

0x994f,	// (0x00038710) cell_hwr_candidate_pane_g4_ParamLimits

0x994f,	// (0x00038710) cell_hwr_candidate_pane_g4

0x0002,

0xfb5b,	// (0x0003e91c) cell_hwr_candidate_pane_g_ParamLimits

0xfb5b,	// (0x0003e91c) cell_hwr_candidate_pane_g

0x7e9f,	// (0x00036c60) cell_vkb_candidate_pane_g3_ParamLimits

0x7e9f,	// (0x00036c60) cell_vkb_candidate_pane_g3

0x7eba,	// (0x00036c7b) cell_vkb_candidate_pane_g4_ParamLimits

0x7eba,	// (0x00036c7b) cell_vkb_candidate_pane_g4

0x7f8a,	// (0x00036d4b) cell_app_pane_cp2_g1_ParamLimits

0x7f8a,	// (0x00036d4b) cell_app_pane_cp2_g1

0x7fa8,	// (0x00036d69) cell_app_pane_cp2_g2_ParamLimits

0x7fa8,	// (0x00036d69) cell_app_pane_cp2_g2

0x0001,

0xfba5,	// (0x0003e966) cell_app_pane_cp2_g_ParamLimits

0xfba5,	// (0x0003e966) cell_app_pane_cp2_g

0x7fb4,	// (0x00036d75) cell_app_pane_cp2_t1_ParamLimits

0x7fb4,	// (0x00036d75) cell_app_pane_cp2_t1

0x3df8,	// (0x00032bb9) grid_highlight_pane_cp1_ParamLimits

0x3df8,	// (0x00032bb9) grid_highlight_pane_cp1

0x1f4a,	// (0x00030d0b) cell_hwr_candidate_pane_cp1_ParamLimits

0x1f4a,	// (0x00030d0b) cell_hwr_candidate_pane_cp1

0x1efd,	// (0x00030cbe) fep_hwr_candidate_drop_down_list_pane_g1

0x1f69,	// (0x00030d2a) fep_hwr_candidate_drop_down_list_pane_g2

0x1f76,	// (0x00030d37) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbaa,	// (0x0003e96b) fep_hwr_candidate_drop_down_list_pane_g

0x1f83,	// (0x00030d44) fep_hwr_candidate_drop_down_list_scroll_pane

0x1f8c,	// (0x00030d4d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1f8c,	// (0x00030d4d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1f99,	// (0x00030d5a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1f99,	// (0x00030d5a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1fa6,	// (0x00030d67) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1fa6,	// (0x00030d67) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1fb3,	// (0x00030d74) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1fb3,	// (0x00030d74) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1fce,	// (0x00030d8f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1fce,	// (0x00030d8f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1fe9,	// (0x00030daa) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1fe9,	// (0x00030daa) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2004,	// (0x00030dc5) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2004,	// (0x00030dc5) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x201f,	// (0x00030de0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x201f,	// (0x00030de0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb1,	// (0x0003e972) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb1,	// (0x0003e972) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7fc6,	// (0x00036d87) cell_vkb_candidate_pane_cp1_ParamLimits

0x7fc6,	// (0x00036d87) cell_vkb_candidate_pane_cp1

0x7b88,	// (0x00036949) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7b88,	// (0x00036949) fep_vkb_candidate_drop_down_list_pane_g1

0x7fe6,	// (0x00036da7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7fe6,	// (0x00036da7) fep_vkb_candidate_drop_down_list_pane_g2

0x7ff3,	// (0x00036db4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7ff3,	// (0x00036db4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x0003e983) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc2,	// (0x0003e983) fep_vkb_candidate_drop_down_list_pane_g

0x8000,	// (0x00036dc1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x8000,	// (0x00036dc1) fep_vkb_candidate_drop_down_list_scroll_pane

0x800d,	// (0x00036dce) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x800d,	// (0x00036dce) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x801a,	// (0x00036ddb) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x801a,	// (0x00036ddb) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x8026,	// (0x00036de7) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8026,	// (0x00036de7) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x8032,	// (0x00036df3) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8032,	// (0x00036df3) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x8053,	// (0x00036e14) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8053,	// (0x00036e14) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x8074,	// (0x00036e35) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8074,	// (0x00036e35) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x8095,	// (0x00036e56) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8095,	// (0x00036e56) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x80b6,	// (0x00036e77) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x80b6,	// (0x00036e77) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x0003e98a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x0003e98a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xcf8c,	// (0x0003bd4d) title_pane_g1_ParamLimits

0xcf9f,	// (0x0003bd60) title_pane_g2_ParamLimits

0xf554,	// (0x0003e315) title_pane_g_ParamLimits

0x4467,	// (0x00033228) aid_call2_pane

0x446f,	// (0x00033230) aid_call_pane

0x4477,	// (0x00033238) popup_clock_analogue_window_g1

0x4477,	// (0x00033238) popup_clock_analogue_window_g2

0x0e38,	// (0x0002fbf9) popup_clock_analogue_window_g3

0x0e41,	// (0x0002fc02) popup_clock_analogue_window_g4

0x34a2,	// (0x00032263) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x0003e4bf) popup_clock_analogue_window_g

0x0e49,	// (0x0002fc0a) popup_clock_analogue_window_t1

0x0e57,	// (0x0002fc18) clock_digital_number_pane_ParamLimits

0x0e57,	// (0x0002fc18) clock_digital_number_pane

0x0e63,	// (0x0002fc24) clock_digital_number_pane_cp02_ParamLimits

0x0e63,	// (0x0002fc24) clock_digital_number_pane_cp02

0x0e6f,	// (0x0002fc30) clock_digital_number_pane_cp03_ParamLimits

0x0e6f,	// (0x0002fc30) clock_digital_number_pane_cp03

0x0e7b,	// (0x0002fc3c) clock_digital_number_pane_cp04_ParamLimits

0x0e7b,	// (0x0002fc3c) clock_digital_number_pane_cp04

0x0e87,	// (0x0002fc48) clock_digital_separator_pane_ParamLimits

0x0e87,	// (0x0002fc48) clock_digital_separator_pane

0x0e93,	// (0x0002fc54) popup_clock_digital_window_t1_ParamLimits

0x0e93,	// (0x0002fc54) popup_clock_digital_window_t1

0x34a2,	// (0x00032263) clock_digital_number_pane_g1

0x34a2,	// (0x00032263) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x0003e4ca) clock_digital_number_pane_g

0x34a2,	// (0x00032263) clock_digital_separator_pane_g1

0x34a2,	// (0x00032263) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x0003e4ca) clock_digital_separator_pane_g

0xd59f,	// (0x0003c360) aid_fill_nsta_ParamLimits

0xd6d5,	// (0x0003c496) indicator_nsta_pane_ParamLimits

0x50a0,	// (0x00033e61) popup_clock_analogue_window

0x50a0,	// (0x00033e61) popup_clock_digital_window

0x3fbb,	// (0x00032d7c) grid_indicator_nsta_pane_ParamLimits

0x72ff,	// (0x000360c0) clock_nsta_pane_t2

0x0001,

0xfa8f,	// (0x0003e850) clock_nsta_pane_t

0x0dfc,	// (0x0002fbbd) aid_size_max_handle

0xbe22,	// (0x0003abe3) aid_size_min_handle

0x4a7f,	// (0x00033840) editor_scroll_pane

0x80d1,	// (0x00036e92) ex_editor_pane

0x3f68,	// (0x00032d29) scroll_pane_cp13

0x3d97,	// (0x00032b58) scroll_pane_cp14

0x44a6,	// (0x00033267) scroll_pane_cp36

0xd412,	// (0x0003c1d3) list_single_graphic_hl_pane_cp2_ParamLimits

0xd412,	// (0x0003c1d3) list_single_graphic_hl_pane_cp2

0xc7b5,	// (0x0003b576) list_single_graphic_hl_pane_ParamLimits

0xc7b5,	// (0x0003b576) list_single_graphic_hl_pane

0x32a6,	// (0x00032067) aid_size_min_hl_cp1

0x80d9,	// (0x00036e9a) list_highlight_pane_cp34_ParamLimits

0x80d9,	// (0x00036e9a) list_highlight_pane_cp34

0x80ea,	// (0x00036eab) list_single_graphic_hl_pane_g1_ParamLimits

0x80ea,	// (0x00036eab) list_single_graphic_hl_pane_g1

0xc85c,	// (0x0003b61d) list_single_graphic_hl_pane_g2_ParamLimits

0xc85c,	// (0x0003b61d) list_single_graphic_hl_pane_g2

0xc85c,	// (0x0003b61d) list_single_graphic_hl_pane_g3_ParamLimits

0xc85c,	// (0x0003b61d) list_single_graphic_hl_pane_g3

0xc868,	// (0x0003b629) list_single_graphic_hl_pane_g4_ParamLimits

0xc868,	// (0x0003b629) list_single_graphic_hl_pane_g4

0xc874,	// (0x0003b635) list_single_graphic_hl_pane_g5_ParamLimits

0xc874,	// (0x0003b635) list_single_graphic_hl_pane_g5

0x0004,

0xfbda,	// (0x0003e99b) list_single_graphic_hl_pane_g_ParamLimits

0xfbda,	// (0x0003e99b) list_single_graphic_hl_pane_g

0xc888,	// (0x0003b649) list_single_graphic_hl_pane_t1_ParamLimits

0xc888,	// (0x0003b649) list_single_graphic_hl_pane_t1

0x80f7,	// (0x00036eb8) aid_size_min_hl_cp2

0x8100,	// (0x00036ec1) list_highlight_pane_cp34_cp2_ParamLimits

0x8100,	// (0x00036ec1) list_highlight_pane_cp34_cp2

0x80ea,	// (0x00036eab) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x80ea,	// (0x00036eab) list_single_graphic_hl_pane_g1_cp2

0x810d,	// (0x00036ece) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x810d,	// (0x00036ece) list_single_graphic_hl_pane_g2_cp2

0x8119,	// (0x00036eda) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x8119,	// (0x00036eda) list_single_graphic_hl_pane_g3_cp2

0x7251,	// (0x00036012) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7251,	// (0x00036012) list_single_graphic_hl_pane_g4_cp2

0x8127,	// (0x00036ee8) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8127,	// (0x00036ee8) list_single_graphic_hl_pane_g5_cp2

0xbf09,	// (0x0003acca) control_pane_g4_ParamLimits

0xbf09,	// (0x0003acca) control_pane_g4

0x4dbf,	// (0x00033b80) bg_popup_sub_pane_cp10_ParamLimits

0x7914,	// (0x000366d5) list_choice_list_pane_ParamLimits

0x7923,	// (0x000366e4) scroll_pane_cp23

0x3815,	// (0x000325d6) bg_popup_preview_window_pane_cp02_ParamLimits

0x7f0b,	// (0x00036ccc) list_preview_fixed_pane_ParamLimits

0x7f21,	// (0x00036ce2) list_preview_fixed_pane_cp_ParamLimits

0x7f21,	// (0x00036ce2) list_preview_fixed_pane_cp

0x7f2d,	// (0x00036cee) popup_preview_fixed_window_g1_ParamLimits

0x7f2d,	// (0x00036cee) popup_preview_fixed_window_g1

0x7f39,	// (0x00036cfa) popup_preview_fixed_window_g2_ParamLimits

0x7f39,	// (0x00036cfa) popup_preview_fixed_window_g2

0x0002,

0xfb62,	// (0x0003e923) popup_preview_fixed_window_g_ParamLimits

0xfb62,	// (0x0003e923) popup_preview_fixed_window_g

0x0d70,	// (0x0002fb31) aid_navi_side_left_pane_ParamLimits

0x0d85,	// (0x0002fb46) aid_navi_side_right_pane_ParamLimits

0x0d9d,	// (0x0002fb5e) navi_icon_pane_stacon_ParamLimits

0x0db1,	// (0x0002fb72) navi_navi_pane_stacon_ParamLimits

0x0d9d,	// (0x0002fb5e) navi_text_pane_stacon_ParamLimits

0x02c1,	// (0x0002f082) main_text_info_pane

0x8151,	// (0x00036f12) listscroll_text_info_pane

0x8159,	// (0x00036f1a) list_text_info_pane_ParamLimits

0x8159,	// (0x00036f1a) list_text_info_pane

0x8168,	// (0x00036f29) scroll_pane_cp24_ParamLimits

0x8168,	// (0x00036f29) scroll_pane_cp24

0xe23a,	// (0x0003cffb) list_text_info_pane_t1_ParamLimits

0xe23a,	// (0x0003cffb) list_text_info_pane_t1

0xc064,	// (0x0003ae25) popup_fast_swap2_window_ParamLimits

0xc064,	// (0x0003ae25) popup_fast_swap2_window

0x81b7,	// (0x00036f78) aid_size_cell_fast2

0x3498,	// (0x00032259) bg_popup_window_pane_cp17

0x5727,	// (0x000344e8) heading_pane_cp2

0x3a61,	// (0x00032822) listscroll_fast2_pane

0x81c1,	// (0x00036f82) grid_fast2_pane

0x81cb,	// (0x00036f8c) listscroll_fast2_pane_g1

0x81d3,	// (0x00036f94) listscroll_fast2_pane_g2

0x0001,

0xfbe5,	// (0x0003e9a6) listscroll_fast2_pane_g

0x3f68,	// (0x00032d29) scroll_pane_cp26

0x81dd,	// (0x00036f9e) cell_fast2_pane_ParamLimits

0x81dd,	// (0x00036f9e) cell_fast2_pane

0x81f2,	// (0x00036fb3) cell_fast2_pane_g1

0x81fb,	// (0x00036fbc) cell_fast2_pane_g2

0x8204,	// (0x00036fc5) cell_fast2_pane_g3

0x0002,

0xfbea,	// (0x0003e9ab) cell_fast2_pane_g

0x3b54,	// (0x00032915) grid_highlight_pane_cp9

0x1265,	// (0x00030026) main_eswt_pane_ParamLimits

0x1265,	// (0x00030026) main_eswt_pane

0x817d,	// (0x00036f3e) list_single_text_info_pane

0x820c,	// (0x00036fcd) eswt_ctrl_button_pane

0x820c,	// (0x00036fcd) eswt_ctrl_canvas_pane

0x8214,	// (0x00036fd5) eswt_ctrl_combo_pane

0x820c,	// (0x00036fcd) eswt_ctrl_default_pane

0x820c,	// (0x00036fcd) eswt_ctrl_label_pane

0x821c,	// (0x00036fdd) eswt_ctrl_wait_pane

0x8224,	// (0x00036fe5) eswt_shell_pane

0x3498,	// (0x00032259) listscroll_eswt_app_pane

0x8244,	// (0x00037005) popup_eswt_tasktip_window_ParamLimits

0x8244,	// (0x00037005) popup_eswt_tasktip_window

0x533d,	// (0x000340fe) bg_popup_window_pane_cp18

0x8255,	// (0x00037016) eswt_control_pane_g1_ParamLimits

0x8255,	// (0x00037016) eswt_control_pane_g1

0x8262,	// (0x00037023) eswt_control_pane_g2_ParamLimits

0x8262,	// (0x00037023) eswt_control_pane_g2

0x826f,	// (0x00037030) eswt_control_pane_g3_ParamLimits

0x826f,	// (0x00037030) eswt_control_pane_g3

0x827c,	// (0x0003703d) eswt_control_pane_g4_ParamLimits

0x827c,	// (0x0003703d) eswt_control_pane_g4

0x0003,

0xfbf1,	// (0x0003e9b2) eswt_control_pane_g_ParamLimits

0xfbf1,	// (0x0003e9b2) eswt_control_pane_g

0x3df8,	// (0x00032bb9) bg_button_pane_ParamLimits

0x3df8,	// (0x00032bb9) bg_button_pane

0x3b69,	// (0x0003292a) common_borders_pane_copy2_ParamLimits

0x3b69,	// (0x0003292a) common_borders_pane_copy2

0x8289,	// (0x0003704a) control_button_pane_g1_ParamLimits

0x8289,	// (0x0003704a) control_button_pane_g1

0x8295,	// (0x00037056) control_button_pane_g2_ParamLimits

0x8295,	// (0x00037056) control_button_pane_g2

0x82a1,	// (0x00037062) control_button_pane_g3_ParamLimits

0x82a1,	// (0x00037062) control_button_pane_g3

0x0002,

0xfbfa,	// (0x0003e9bb) control_button_pane_g_ParamLimits

0xfbfa,	// (0x0003e9bb) control_button_pane_g

0x82b5,	// (0x00037076) control_button_pane_t1

0x82c3,	// (0x00037084) control_button_pane_t2

0x0001,

0xfc01,	// (0x0003e9c2) control_button_pane_t

0x52c9,	// (0x0003408a) bg_button_pane_g1

0x52d9,	// (0x0003409a) bg_button_pane_g2

0x52d1,	// (0x00034092) bg_button_pane_g3

0x52e9,	// (0x000340aa) bg_button_pane_g4

0x52e1,	// (0x000340a2) bg_button_pane_g5

0x52f1,	// (0x000340b2) bg_button_pane_g6

0x52f9,	// (0x000340ba) bg_button_pane_g7

0x5309,	// (0x000340ca) bg_button_pane_g8

0x5301,	// (0x000340c2) bg_button_pane_g9

0x0008,

0xf867,	// (0x0003e628) bg_button_pane_g

0x78cf,	// (0x00036690) common_borders_pane_ParamLimits

0x78cf,	// (0x00036690) common_borders_pane

0x8255,	// (0x00037016) eswt_control_pane_g1_copy1_ParamLimits

0x8255,	// (0x00037016) eswt_control_pane_g1_copy1

0x8262,	// (0x00037023) eswt_control_pane_g2_copy1_ParamLimits

0x8262,	// (0x00037023) eswt_control_pane_g2_copy1

0x826f,	// (0x00037030) eswt_control_pane_g3_copy1_ParamLimits

0x826f,	// (0x00037030) eswt_control_pane_g3_copy1

0x827c,	// (0x0003703d) eswt_control_pane_g4_copy1_ParamLimits

0x827c,	// (0x0003703d) eswt_control_pane_g4_copy1

0x790a,	// (0x000366cb) bg_eswt_ctrl_canvas_pane_g1

0x78cf,	// (0x00036690) common_borders_pane_cp2_ParamLimits

0x78cf,	// (0x00036690) common_borders_pane_cp2

0x78cf,	// (0x00036690) common_borders_pane_cp3_ParamLimits

0x78cf,	// (0x00036690) common_borders_pane_cp3

0x82d1,	// (0x00037092) separator_horizontal_pane

0x82d9,	// (0x0003709a) separator_vertical_pane

0x8255,	// (0x00037016) eswt_control_pane_g1_copy2_ParamLimits

0x8255,	// (0x00037016) eswt_control_pane_g1_copy2

0x8262,	// (0x00037023) eswt_control_pane_g2_copy2_ParamLimits

0x8262,	// (0x00037023) eswt_control_pane_g2_copy2

0x826f,	// (0x00037030) eswt_control_pane_g3_copy2_ParamLimits

0x826f,	// (0x00037030) eswt_control_pane_g3_copy2

0x827c,	// (0x0003703d) eswt_control_pane_g4_copy2_ParamLimits

0x827c,	// (0x0003703d) eswt_control_pane_g4_copy2

0x3498,	// (0x00032259) common_borders_pane_cp4

0x82e2,	// (0x000370a3) separator_horizontal_pane_g1

0x82eb,	// (0x000370ac) separator_horizontal_pane_g2

0x82f4,	// (0x000370b5) separator_horizontal_pane_g3

0x0002,

0xfc06,	// (0x0003e9c7) separator_horizontal_pane_g

0x8255,	// (0x00037016) eswt_control_pane_g1_copy3_ParamLimits

0x8255,	// (0x00037016) eswt_control_pane_g1_copy3

0x8262,	// (0x00037023) eswt_control_pane_g2_copy3_ParamLimits

0x8262,	// (0x00037023) eswt_control_pane_g2_copy3

0x826f,	// (0x00037030) eswt_control_pane_g3_copy3_ParamLimits

0x826f,	// (0x00037030) eswt_control_pane_g3_copy3

0x827c,	// (0x0003703d) eswt_control_pane_g4_copy3_ParamLimits

0x827c,	// (0x0003703d) eswt_control_pane_g4_copy3

0x3498,	// (0x00032259) common_borders_pane_cp5

0x82fd,	// (0x000370be) separator_vertical_pane_g1

0x8306,	// (0x000370c7) separator_vertical_pane_g2

0x830f,	// (0x000370d0) separator_vertical_pane_g3

0x0002,

0xfc0d,	// (0x0003e9ce) separator_vertical_pane_g

0x8255,	// (0x00037016) eswt_control_pane_g1_copy4_ParamLimits

0x8255,	// (0x00037016) eswt_control_pane_g1_copy4

0x8262,	// (0x00037023) eswt_control_pane_g2_copy4_ParamLimits

0x8262,	// (0x00037023) eswt_control_pane_g2_copy4

0x826f,	// (0x00037030) eswt_control_pane_g3_copy4_ParamLimits

0x826f,	// (0x00037030) eswt_control_pane_g3_copy4

0x827c,	// (0x0003703d) eswt_control_pane_g4_copy4_ParamLimits

0x827c,	// (0x0003703d) eswt_control_pane_g4_copy4

0xe255,	// (0x0003d016) eswt_ctrl_combo_button_pane

0xe25d,	// (0x0003d01e) eswt_ctrl_input_pane

0xe265,	// (0x0003d026) popup_choice_list_window_cp70

0xe26d,	// (0x0003d02e) eswt_ctrl_input_pane_t1

0x3498,	// (0x00032259) input_focus_pane_cp70

0x78cf,	// (0x00036690) bg_button_pane_cp70_ParamLimits

0x78cf,	// (0x00036690) bg_button_pane_cp70

0xe27b,	// (0x0003d03c) eswt_ctrl_combo_button_pane_g1

0x8346,	// (0x00037107) wait_bar_pane_cp70

0x533d,	// (0x000340fe) bg_popup_window_pane_cp70_ParamLimits

0x533d,	// (0x000340fe) bg_popup_window_pane_cp70

0x834e,	// (0x0003710f) popup_eswt_tasktip_window_t1

0x8364,	// (0x00037125) wait_bar_pane_cp71_ParamLimits

0x8364,	// (0x00037125) wait_bar_pane_cp71

0x8370,	// (0x00037131) grid_eswt_app_pane

0x4280,	// (0x00033041) scroll_pane_cp70

0xe283,	// (0x0003d044) cell_eswt_app_pane_ParamLimits

0xe283,	// (0x0003d044) cell_eswt_app_pane

0xe2ad,	// (0x0003d06e) cell_eswt_app_pane_g1_ParamLimits

0xe2ad,	// (0x0003d06e) cell_eswt_app_pane_g1

0xe2dc,	// (0x0003d09d) cell_eswt_app_pane_g2_ParamLimits

0xe2dc,	// (0x0003d09d) cell_eswt_app_pane_g2

0x0001,

0xfc14,	// (0x0003e9d5) cell_eswt_app_pane_g_ParamLimits

0xfc14,	// (0x0003e9d5) cell_eswt_app_pane_g

0xe305,	// (0x0003d0c6) cell_eswt_app_pane_t1_ParamLimits

0xe305,	// (0x0003d0c6) cell_eswt_app_pane_t1

0x8433,	// (0x000371f4) grid_highlight_pane_cp70_ParamLimits

0x8433,	// (0x000371f4) grid_highlight_pane_cp70

0x4954,	// (0x00033715) set_content_pane_g1

0x4d1f,	// (0x00033ae0) status_small_volume_pane

0x203a,	// (0x00030dfb) status_small_volume_pane_g1

0x2042,	// (0x00030e03) volume_small2_pane

0x204b,	// (0x00030e0c) volume_small2_pane_g1

0x2054,	// (0x00030e15) volume_small2_pane_g2

0x205d,	// (0x00030e1e) volume_small2_pane_g3

0x2066,	// (0x00030e27) volume_small2_pane_g4

0x206f,	// (0x00030e30) volume_small2_pane_g5

0x2078,	// (0x00030e39) volume_small2_pane_g6

0x2081,	// (0x00030e42) volume_small2_pane_g7

0x208a,	// (0x00030e4b) volume_small2_pane_g8

0x2093,	// (0x00030e54) volume_small2_pane_g9

0x209c,	// (0x00030e5d) volume_small2_pane_g10

0x0009,

0xfc19,	// (0x0003e9da) volume_small2_pane_g

0x7cd0,	// (0x00036a91) fep_vkb_top_text_pane_g1_ParamLimits

0xe1e2,	// (0x0003cfa3) fep_vkb_top_text_pane_t1_ParamLimits

0x7f45,	// (0x00036d06) popup_preview_fixed_window_g3_ParamLimits

0x7f45,	// (0x00036d06) popup_preview_fixed_window_g3

0xc681,	// (0x0003b442) popup_toolbar_trans_pane

0xdbe2,	// (0x0003c9a3) aid_height_set_list_ParamLimits

0x66a5,	// (0x00035466) aid_size_parent_ParamLimits

0x4dbf,	// (0x00033b80) list_highlight_pane_cp2_ParamLimits

0x4954,	// (0x00033715) set_content_pane_g1_ParamLimits

0xc7c7,	// (0x0003b588) list_single_image_pane_ParamLimits

0xc7c7,	// (0x0003b588) list_single_image_pane

0xe337,	// (0x0003d0f8) aid_size_cell_image_ParamLimits

0xe337,	// (0x0003d0f8) aid_size_cell_image

0xe344,	// (0x0003d105) grid_single_image_pane_ParamLimits

0xe344,	// (0x0003d105) grid_single_image_pane

0x5b0b,	// (0x000348cc) list_single_image_pane_g1_ParamLimits

0x5b0b,	// (0x000348cc) list_single_image_pane_g1

0x8458,	// (0x00037219) list_single_image_pane_g2_ParamLimits

0x8458,	// (0x00037219) list_single_image_pane_g2

0x0001,

0xfc2e,	// (0x0003e9ef) list_single_image_pane_g_ParamLimits

0xfc2e,	// (0x0003e9ef) list_single_image_pane_g

0x846c,	// (0x0003722d) list_single_image_pane_t1_ParamLimits

0x846c,	// (0x0003722d) list_single_image_pane_t1

0xe352,	// (0x0003d113) cell_image_list_pane_ParamLimits

0xe352,	// (0x0003d113) cell_image_list_pane

0xe368,	// (0x0003d129) cell_image_list_pane_g1

0xe371,	// (0x0003d132) cell_image_list_pane_g2

0x0001,

0xfc33,	// (0x0003e9f4) cell_image_list_pane_g

0x84a8,	// (0x00037269) aid_size_cell_tb_trans_pane

0x3df8,	// (0x00032bb9) bg_tb_trans_pane

0x84ba,	// (0x0003727b) grid_tb_trans_pane

0x52c9,	// (0x0003408a) bg_tb_trans_pane_g1

0x52d9,	// (0x0003409a) bg_tb_trans_pane_g2

0x52d1,	// (0x00034092) bg_tb_trans_pane_g3

0x52e9,	// (0x000340aa) bg_tb_trans_pane_g4

0x52e1,	// (0x000340a2) bg_tb_trans_pane_g5

0x5309,	// (0x000340ca) bg_tb_trans_pane_g6

0x5301,	// (0x000340c2) bg_tb_trans_pane_g7

0x52f1,	// (0x000340b2) bg_tb_trans_pane_g8

0x52f9,	// (0x000340ba) bg_tb_trans_pane_g9

0x0008,

0xfc38,	// (0x0003e9f9) bg_tb_trans_pane_g

0x84ce,	// (0x0003728f) cell_toolbar_trans_pane_ParamLimits

0x84ce,	// (0x0003728f) cell_toolbar_trans_pane

0x790a,	// (0x000366cb) cell_toolbar_trans_pane_g1

0xdfa3,	// (0x0003cd64) list_form2_midp_pane_t1

0xdfb1,	// (0x0003cd72) list_form2_midp_pane_t2

0x0001,

0xfad5,	// (0x0003e896) list_form2_midp_pane_t

0x74f0,	// (0x000362b1) scroll_pane_cp51_ParamLimits

0x76ac,	// (0x0003646d) form2_midp_wait_pane_g1

0x76b5,	// (0x00036476) form2_midp_wait_pane_g2

0x76be,	// (0x0003647f) form2_midp_wait_pane_g3

0x0002,

0xfaea,	// (0x0003e8ab) form2_midp_wait_pane_g

0x358c,	// (0x0003234d) list_highlight_pane_cp21_ParamLimits

0x7715,	// (0x000364d6) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7724,	// (0x000364e5) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x685d,	// (0x0003561e) list_single_2graphic_im_pane_ParamLimits

0x685d,	// (0x0003561e) list_single_2graphic_im_pane

0xe37a,	// (0x0003d13b) list_single_2graphic_im_pane_g1_ParamLimits

0xe37a,	// (0x0003d13b) list_single_2graphic_im_pane_g1

0xe38b,	// (0x0003d14c) list_single_2graphic_im_pane_g2_ParamLimits

0xe38b,	// (0x0003d14c) list_single_2graphic_im_pane_g2

0xe397,	// (0x0003d158) list_single_2graphic_im_pane_g3_ParamLimits

0xe397,	// (0x0003d158) list_single_2graphic_im_pane_g3

0x0003,

0xfc4b,	// (0x0003ea0c) list_single_2graphic_im_pane_g_ParamLimits

0xfc4b,	// (0x0003ea0c) list_single_2graphic_im_pane_g

0xe3ab,	// (0x0003d16c) list_single_2graphic_im_pane_t1_ParamLimits

0xe3ab,	// (0x0003d16c) list_single_2graphic_im_pane_t1

0x7f51,	// (0x00036d12) list_single_graphic_2heading_pane_fp_ParamLimits

0x7f51,	// (0x00036d12) list_single_graphic_2heading_pane_fp

0x3118,	// (0x00031ed9) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3118,	// (0x00031ed9) list_single_graphic_2heading_pane_fp_g1

0x7f66,	// (0x00036d27) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7f66,	// (0x00036d27) list_single_graphic_2heading_pane_fp_g2

0x30e1,	// (0x00031ea2) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x30e1,	// (0x00031ea2) list_single_graphic_2heading_pane_fp_g3

0x30ed,	// (0x00031eae) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x30ed,	// (0x00031eae) list_single_graphic_2heading_pane_fp_g4

0x7f72,	// (0x00036d33) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7f72,	// (0x00036d33) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb72,	// (0x0003e933) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb72,	// (0x0003e933) list_single_graphic_2heading_pane_fp_g

0x32f1,	// (0x000320b2) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x32f1,	// (0x000320b2) list_single_graphic_2heading_pane_fp_t1

0x3150,	// (0x00031f11) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3150,	// (0x00031f11) list_single_graphic_2heading_pane_fp_t2

0x3307,	// (0x000320c8) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3307,	// (0x000320c8) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc54,	// (0x0003ea15) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc54,	// (0x0003ea15) list_single_graphic_2heading_pane_fp_t

0x7996,	// (0x00036757) fep_hwr_write_pane_g5_ParamLimits

0x7996,	// (0x00036757) fep_hwr_write_pane_g5

0x79a2,	// (0x00036763) fep_hwr_write_pane_g6_ParamLimits

0x79a2,	// (0x00036763) fep_hwr_write_pane_g6

0x8224,	// (0x00036fe5) eswt_shell_pane_ParamLimits

0x533d,	// (0x000340fe) bg_popup_window_pane_cp18_ParamLimits

0x65ed,	// (0x000353ae) heading_pane_cp70

0x834e,	// (0x0003710f) popup_eswt_tasktip_window_t1_ParamLimits

0xd5fa,	// (0x0003c3bb) aid_touch_tab_arrow_left

0xd610,	// (0x0003c3d1) aid_touch_tab_arrow_right

0xcfb7,	// (0x0003bd78) title_pane_g3_ParamLimits

0xcfb7,	// (0x0003bd78) title_pane_g3

0x3db7,	// (0x00032b78) set_value_pane_g1

0xc681,	// (0x0003b442) popup_toolbar_trans_pane_ParamLimits

0x84a8,	// (0x00037269) aid_size_cell_tb_trans_pane_ParamLimits

0x3df8,	// (0x00032bb9) bg_tb_trans_pane_ParamLimits

0x84ba,	// (0x0003727b) grid_tb_trans_pane_ParamLimits

0x3815,	// (0x000325d6) cont_note_pane_ParamLimits

0x3815,	// (0x000325d6) cont_note_pane

0x3b69,	// (0x0003292a) cont_snote2_single_text_pane_ParamLimits

0x3b69,	// (0x0003292a) cont_snote2_single_text_pane

0x3b69,	// (0x0003292a) cont_snote2_single_graphic_pane_ParamLimits

0x3b69,	// (0x0003292a) cont_snote2_single_graphic_pane

0x5942,	// (0x00034703) cont_note_wait_pane_ParamLimits

0x5942,	// (0x00034703) cont_note_wait_pane

0x5942,	// (0x00034703) cont_note_image_pane_ParamLimits

0x5942,	// (0x00034703) cont_note_image_pane

0x8562,	// (0x00037323) popup_note2_window_g1_ParamLimits

0x8562,	// (0x00037323) popup_note2_window_g1

0x8593,	// (0x00037354) popup_note2_window_t1_ParamLimits

0x8593,	// (0x00037354) popup_note2_window_t1

0x85d8,	// (0x00037399) popup_note2_window_t2_ParamLimits

0x85d8,	// (0x00037399) popup_note2_window_t2

0x861d,	// (0x000373de) popup_note2_window_t3_ParamLimits

0x861d,	// (0x000373de) popup_note2_window_t3

0x8662,	// (0x00037423) popup_note2_window_t4_ParamLimits

0x8662,	// (0x00037423) popup_note2_window_t4

0x3899,	// (0x0003265a) popup_note2_window_t5_ParamLimits

0x3899,	// (0x0003265a) popup_note2_window_t5

0x0004,

0xfc60,	// (0x0003ea21) popup_note2_window_t_ParamLimits

0xfc60,	// (0x0003ea21) popup_note2_window_t

0x8691,	// (0x00037452) popup_note2_image_window_g1_ParamLimits

0x8691,	// (0x00037452) popup_note2_image_window_g1

0x869d,	// (0x0003745e) popup_note2_image_window_g2_ParamLimits

0x869d,	// (0x0003745e) popup_note2_image_window_g2

0x0001,

0xfc6b,	// (0x0003ea2c) popup_note2_image_window_g_ParamLimits

0xfc6b,	// (0x0003ea2c) popup_note2_image_window_g

0x86af,	// (0x00037470) popup_note2_image_window_t1_ParamLimits

0x86af,	// (0x00037470) popup_note2_image_window_t1

0x86c7,	// (0x00037488) popup_note2_image_window_t2_ParamLimits

0x86c7,	// (0x00037488) popup_note2_image_window_t2

0x86df,	// (0x000374a0) popup_note2_image_window_t3_ParamLimits

0x86df,	// (0x000374a0) popup_note2_image_window_t3

0x0002,

0xfc70,	// (0x0003ea31) popup_note2_image_window_t_ParamLimits

0xfc70,	// (0x0003ea31) popup_note2_image_window_t

0x5950,	// (0x00034711) popup_note2_wait_window_g1_ParamLimits

0x5950,	// (0x00034711) popup_note2_wait_window_g1

0x86fb,	// (0x000374bc) popup_note2_wait_window_g2_ParamLimits

0x86fb,	// (0x000374bc) popup_note2_wait_window_g2

0x5968,	// (0x00034729) popup_note2_wait_window_g3_ParamLimits

0x5968,	// (0x00034729) popup_note2_wait_window_g3

0x0002,

0xfc77,	// (0x0003ea38) popup_note2_wait_window_g_ParamLimits

0xfc77,	// (0x0003ea38) popup_note2_wait_window_g

0x8707,	// (0x000374c8) popup_note2_wait_window_t1_ParamLimits

0x8707,	// (0x000374c8) popup_note2_wait_window_t1

0x8725,	// (0x000374e6) popup_note2_wait_window_t2_ParamLimits

0x8725,	// (0x000374e6) popup_note2_wait_window_t2

0x8743,	// (0x00037504) popup_note2_wait_window_t3_ParamLimits

0x8743,	// (0x00037504) popup_note2_wait_window_t3

0x8755,	// (0x00037516) popup_note2_wait_window_t4_ParamLimits

0x8755,	// (0x00037516) popup_note2_wait_window_t4

0x0003,

0xfc7e,	// (0x0003ea3f) popup_note2_wait_window_t_ParamLimits

0xfc7e,	// (0x0003ea3f) popup_note2_wait_window_t

0x8767,	// (0x00037528) wait_bar2_pane_ParamLimits

0x8767,	// (0x00037528) wait_bar2_pane

0x877f,	// (0x00037540) popup_snote2_single_text_window_g1_ParamLimits

0x877f,	// (0x00037540) popup_snote2_single_text_window_g1

0x87a7,	// (0x00037568) popup_snote2_single_text_window_t1_ParamLimits

0x87a7,	// (0x00037568) popup_snote2_single_text_window_t1

0x87f3,	// (0x000375b4) popup_snote2_single_text_window_t2_ParamLimits

0x87f3,	// (0x000375b4) popup_snote2_single_text_window_t2

0x883f,	// (0x00037600) popup_snote2_single_text_window_t3_ParamLimits

0x883f,	// (0x00037600) popup_snote2_single_text_window_t3

0x8880,	// (0x00037641) popup_snote2_single_text_window_t4_ParamLimits

0x8880,	// (0x00037641) popup_snote2_single_text_window_t4

0x88b6,	// (0x00037677) popup_snote2_single_text_window_t5_ParamLimits

0x88b6,	// (0x00037677) popup_snote2_single_text_window_t5

0x0004,

0xfc87,	// (0x0003ea48) popup_snote2_single_text_window_t_ParamLimits

0xfc87,	// (0x0003ea48) popup_snote2_single_text_window_t

0x88e1,	// (0x000376a2) popup_snote2_single_graphic_window_g1_ParamLimits

0x88e1,	// (0x000376a2) popup_snote2_single_graphic_window_g1

0x8909,	// (0x000376ca) popup_snote2_single_graphic_window_g2_ParamLimits

0x8909,	// (0x000376ca) popup_snote2_single_graphic_window_g2

0x0001,

0xfc92,	// (0x0003ea53) popup_snote2_single_graphic_window_g_ParamLimits

0xfc92,	// (0x0003ea53) popup_snote2_single_graphic_window_g

0x8931,	// (0x000376f2) popup_snote2_single_graphic_window_t1_ParamLimits

0x8931,	// (0x000376f2) popup_snote2_single_graphic_window_t1

0x897d,	// (0x0003773e) popup_snote2_single_graphic_window_t2_ParamLimits

0x897d,	// (0x0003773e) popup_snote2_single_graphic_window_t2

0x883f,	// (0x00037600) popup_snote2_single_graphic_window_t3_ParamLimits

0x883f,	// (0x00037600) popup_snote2_single_graphic_window_t3

0x8880,	// (0x00037641) popup_snote2_single_graphic_window_t4_ParamLimits

0x8880,	// (0x00037641) popup_snote2_single_graphic_window_t4

0x88b6,	// (0x00037677) popup_snote2_single_graphic_window_t5_ParamLimits

0x88b6,	// (0x00037677) popup_snote2_single_graphic_window_t5

0x0004,

0xfc97,	// (0x0003ea58) popup_snote2_single_graphic_window_t_ParamLimits

0xfc97,	// (0x0003ea58) popup_snote2_single_graphic_window_t

0x73b1,	// (0x00036172) clock_nsta_pane_cp2_t1

0x73b1,	// (0x00036172) clock_nsta_pane_cp2_t2

0x0001,

0xfaab,	// (0x0003e86c) clock_nsta_pane_cp2_t

0x0b42,	// (0x0002f903) form_field_data_wide_pane_g1_ParamLimits

0x3e06,	// (0x00032bc7) form_field_data_wide_pane_g2_ParamLimits

0x3e06,	// (0x00032bc7) form_field_data_wide_pane_g2

0x3e12,	// (0x00032bd3) form_field_data_wide_pane_g3_ParamLimits

0x3e12,	// (0x00032bd3) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x0003e442) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x0003e442) form_field_data_wide_pane_g

0xdedc,	// (0x0003cc9d) grid_touch_3_pane_ParamLimits

0xdedc,	// (0x0003cc9d) grid_touch_3_pane

0xe3dc,	// (0x0003d19d) cell_touch_3_pane_ParamLimits

0xe3dc,	// (0x0003d19d) cell_touch_3_pane

0x790a,	// (0x000366cb) cell_touch_3_pane_g1

0x790a,	// (0x000366cb) cell_touch_3_pane_g2

0x0001,

0xfb30,	// (0x0003e8f1) cell_touch_3_pane_g

0x38cb,	// (0x0003268c) cont_query_data_pane

0x38d3,	// (0x00032694) cont_query_data_pane_cp1

0x89f7,	// (0x000377b8) button_value_adjust_pane_cp7

0x89ff,	// (0x000377c0) query_popup_pane_cp3

0x4567,	// (0x00033328) bg_popup_sub_pane_cp22_ParamLimits

0x0eb2,	// (0x0002fc73) navi_navi_volume_pane_cp2

0x0ecd,	// (0x0002fc8e) popup_side_volume_key_window_g2

0x0edc,	// (0x0002fc9d) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x0003e4d8) popup_side_volume_key_window_g

0x0ef9,	// (0x0002fcba) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x0003e4df) popup_side_volume_key_window_t

0x481e,	// (0x000335df) popup_side_volume_key_window_ParamLimits

0xba1c,	// (0x0003a7dd) list_double_graphic_pane_g4_ParamLimits

0xba1c,	// (0x0003a7dd) list_double_graphic_pane_g4

0xdd5b,	// (0x0003cb1c) list_single_2heading_msg_pane_ParamLimits

0xdd5b,	// (0x0003cb1c) list_single_2heading_msg_pane

0xc89e,	// (0x0003b65f) list_single_2heading_msg_pane_g1_ParamLimits

0xc89e,	// (0x0003b65f) list_single_2heading_msg_pane_g1

0xc8aa,	// (0x0003b66b) list_single_2heading_msg_pane_g2_ParamLimits

0xc8aa,	// (0x0003b66b) list_single_2heading_msg_pane_g2

0xc8bd,	// (0x0003b67e) list_single_2heading_msg_pane_g3_ParamLimits

0xc8bd,	// (0x0003b67e) list_single_2heading_msg_pane_g3

0xc8c9,	// (0x0003b68a) list_single_2heading_msg_pane_g4_ParamLimits

0xc8c9,	// (0x0003b68a) list_single_2heading_msg_pane_g4

0x0003,

0xfca2,	// (0x0003ea63) list_single_2heading_msg_pane_g_ParamLimits

0xfca2,	// (0x0003ea63) list_single_2heading_msg_pane_g

0xc8e1,	// (0x0003b6a2) list_single_2heading_msg_pane_t1_ParamLimits

0xc8e1,	// (0x0003b6a2) list_single_2heading_msg_pane_t1

0xc909,	// (0x0003b6ca) list_single_2heading_msg_pane_t2_ParamLimits

0xc909,	// (0x0003b6ca) list_single_2heading_msg_pane_t2

0xc974,	// (0x0003b735) list_single_2heading_msg_pane_t3_ParamLimits

0xc974,	// (0x0003b735) list_single_2heading_msg_pane_t3

0x33ec,	// (0x000321ad) list_single_2heading_msg_pane_t4_ParamLimits

0x33ec,	// (0x000321ad) list_single_2heading_msg_pane_t4

0x0003,

0xfcab,	// (0x0003ea6c) list_single_2heading_msg_pane_t_ParamLimits

0xfcab,	// (0x0003ea6c) list_single_2heading_msg_pane_t

0x34e0,	// (0x000322a1) title_pane_g4_ParamLimits

0x34e0,	// (0x000322a1) title_pane_g4

0x0cc1,	// (0x0002fa82) title_pane_stacon_g3_ParamLimits

0x0cc1,	// (0x0002fa82) title_pane_stacon_g3

0x8525,	// (0x000372e6) list_single_2graphic_im_pane_g4_ParamLimits

0x8525,	// (0x000372e6) list_single_2graphic_im_pane_g4

0x63ad,	// (0x0003516e) popup_side_volume_key_window_cp

0x6bdd,	// (0x0003599e) main_idle_act2_pane_t1

0x183e,	// (0x000305ff) toolbar_button_pane_g10

0xd2c2,	// (0x0003c083) popup_toolbar_window_cp1

0x73a2,	// (0x00036163) clock_nsta_pane_cp_t1

0x73a2,	// (0x00036163) clock_nsta_pane_cp_t2

0x0001,

0xfaa6,	// (0x0003e867) clock_nsta_pane_cp_t

0x0eb2,	// (0x0002fc73) navi_navi_volume_pane_cp2_ParamLimits

0x0ec1,	// (0x0002fc82) popup_side_volume_key_window_g1_ParamLimits

0x0ecd,	// (0x0002fc8e) popup_side_volume_key_window_g2_ParamLimits

0x0edc,	// (0x0002fc9d) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x0003e4d8) popup_side_volume_key_window_g_ParamLimits

0x1ca6,	// (0x00030a67) fep_hwr_aid_pane

0x1d4d,	// (0x00030b0e) bg_fep_hwr_top_pane_g4_ParamLimits

0x7966,	// (0x00036727) fep_hwr_top_pane_g1_ParamLimits

0x7978,	// (0x00036739) fep_hwr_top_pane_g2_ParamLimits

0x1d6d,	// (0x00030b2e) fep_hwr_top_pane_g3_ParamLimits

0xfafb,	// (0x0003e8bc) fep_hwr_top_pane_g_ParamLimits

0x1d82,	// (0x00030b43) fep_hwr_top_text_pane_ParamLimits

0x6170,	// (0x00034f31) aid_touch_tab_arrow_arrow_2

0x6179,	// (0x00034f3a) aid_touch_tab_arrow_left_2

0x1cba,	// (0x00030a7b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1cf1,	// (0x00030ab2) fep_hwr_prediction_pane

0x7ad8,	// (0x00036899) fep_vkb_prediction_pane

0xe1c2,	// (0x0003cf83) fep_vkb_side_pane_g3_ParamLimits

0xe1c2,	// (0x0003cf83) fep_vkb_side_pane_g3

0x1efd,	// (0x00030cbe) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1f69,	// (0x00030d2a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1f76,	// (0x00030d37) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbaa,	// (0x0003e96b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x20a5,	// (0x00030e66) fep_hwr_prediction_pane_g1

0x20af,	// (0x00030e70) fep_hwr_prediction_pane_g2

0x20b7,	// (0x00030e78) fep_hwr_prediction_pane_g3

0x20bf,	// (0x00030e80) fep_hwr_prediction_pane_g4

0x0003,

0xfcb4,	// (0x0003ea75) fep_hwr_prediction_pane_g

0x8a24,	// (0x000377e5) fep_vkb_prediction_pane_g1

0x8a2e,	// (0x000377ef) fep_vkb_prediction_pane_g2

0x8a36,	// (0x000377f7) fep_vkb_prediction_pane_g3

0x8a3e,	// (0x000377ff) fep_vkb_prediction_pane_g4

0x0003,

0xfcbd,	// (0x0003ea7e) fep_vkb_prediction_pane_g

0x1b26,	// (0x000308e7) slider_set_pane_g3

0x1b3a,	// (0x000308fb) slider_set_pane_g4

0x1b52,	// (0x00030913) slider_set_pane_g5

0x1b26,	// (0x000308e7) slider_set_pane_g6

0x1b68,	// (0x00030929) slider_set_pane_g7

0x680a,	// (0x000355cb) slider_form_pane_g3

0x6813,	// (0x000355d4) slider_form_pane_g4

0x681b,	// (0x000355dc) slider_form_pane_g5

0x680a,	// (0x000355cb) slider_form_pane_g6

0xdd2d,	// (0x0003caee) slider_form_pane_g7

0x6e87,	// (0x00035c48) slider_set_pane_vc_g3

0x6e90,	// (0x00035c51) slider_set_pane_vc_g4

0x6e99,	// (0x00035c5a) slider_set_pane_vc_g5

0x6e87,	// (0x00035c48) slider_set_pane_vc_g6

0x6ea2,	// (0x00035c63) slider_set_pane_vc_g7

0x7062,	// (0x00035e23) slider_form_pane_vc_g1

0x706b,	// (0x00035e2c) slider_form_pane_vc_g2

0x7074,	// (0x00035e35) slider_form_pane_vc_g3

0x7062,	// (0x00035e23) slider_form_pane_vc_g4

0x707d,	// (0x00035e3e) slider_form_pane_vc_g5

0x0004,

0xfa78,	// (0x0003e839) slider_form_pane_vc_g

0x02c1,	// (0x0002f082) main_idle_act3_pane

0x8a46,	// (0x00037807) ai3_links_pane

0xe424,	// (0x0003d1e5) popup_ai3_data_window_ParamLimits

0xe424,	// (0x0003d1e5) popup_ai3_data_window

0x3498,	// (0x00032259) grid_ai3_links_pane

0xe43e,	// (0x0003d1ff) cell_ai3_links_pane_ParamLimits

0xe43e,	// (0x0003d1ff) cell_ai3_links_pane

0x8a81,	// (0x00037842) bg_popup_sub_pane_cp11

0x8a8e,	// (0x0003784f) cell_ai3_links_pane_g1

0x3498,	// (0x00032259) bg_popup_sub_pane_cp12

0x8ab3,	// (0x00037874) heading_ai3_data_pane

0x8abb,	// (0x0003787c) list_ai3_gene_pane

0x8ac7,	// (0x00037888) popup_ai3_data_window_g1

0x8acf,	// (0x00037890) heading_ai3_data_pane_g1

0x8ad7,	// (0x00037898) heading_ai3_data_pane_t1

0x8ae5,	// (0x000378a6) list_double_ai3_gene_pane_ParamLimits

0x8ae5,	// (0x000378a6) list_double_ai3_gene_pane

0x8af2,	// (0x000378b3) list_single_ai3_gene_pane_ParamLimits

0x8af2,	// (0x000378b3) list_single_ai3_gene_pane

0x78cf,	// (0x00036690) list_highlight_pane_cp7_ParamLimits

0x78cf,	// (0x00036690) list_highlight_pane_cp7

0x8aff,	// (0x000378c0) list_single_a13_gene_pane_t1_ParamLimits

0x8aff,	// (0x000378c0) list_single_a13_gene_pane_t1

0x8b16,	// (0x000378d7) list_single_ai3_gene_pane_g1

0x8b1f,	// (0x000378e0) list_single_ai3_gene_pane_g2

0x0001,

0xfcc6,	// (0x0003ea87) list_single_ai3_gene_pane_g

0x8b27,	// (0x000378e8) list_double_ai3_gene_pane_g1_ParamLimits

0x8b27,	// (0x000378e8) list_double_ai3_gene_pane_g1

0x8b33,	// (0x000378f4) list_double_ai3_gene_pane_t1_ParamLimits

0x8b33,	// (0x000378f4) list_double_ai3_gene_pane_t1

0x8b4f,	// (0x00037910) list_double_ai3_gene_pane_t2_ParamLimits

0x8b4f,	// (0x00037910) list_double_ai3_gene_pane_t2

0x8b65,	// (0x00037926) list_double_ai3_gene_pane_t3_ParamLimits

0x8b65,	// (0x00037926) list_double_ai3_gene_pane_t3

0x0002,

0xfccb,	// (0x0003ea8c) list_double_ai3_gene_pane_t_ParamLimits

0xfccb,	// (0x0003ea8c) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x331d,	// (0x000320de) aid_size_min_col_2

0xe40e,	// (0x0003d1cf) aid_size_min_msg_ParamLimits

0xe40e,	// (0x0003d1cf) aid_size_min_msg

0xe1d6,	// (0x0003cf97) fep_vkb_top_text_pane_g2_ParamLimits

0xe1d6,	// (0x0003cf97) fep_vkb_top_text_pane_g2

0x0001,

0xfb2b,	// (0x0003e8ec) fep_vkb_top_text_pane_g_ParamLimits

0xfb2b,	// (0x0003e8ec) fep_vkb_top_text_pane_g

0x02c1,	// (0x0002f082) main_hc_apps_shell_pane

0x8b82,	// (0x00037943) grid_hc_apps_pane_ParamLimits

0x8b82,	// (0x00037943) grid_hc_apps_pane

0x8b91,	// (0x00037952) list_hc_apps_pane

0x8b99,	// (0x0003795a) scroll_pane_cp37_ParamLimits

0x8b99,	// (0x0003795a) scroll_pane_cp37

0xe458,	// (0x0003d219) cell_hc_apps_pane_ParamLimits

0xe458,	// (0x0003d219) cell_hc_apps_pane

0xe516,	// (0x0003d2d7) cell_hc_apps_pane_g1_ParamLimits

0xe516,	// (0x0003d2d7) cell_hc_apps_pane_g1

0x8c84,	// (0x00037a45) cell_hc_apps_pane_g2_ParamLimits

0x8c84,	// (0x00037a45) cell_hc_apps_pane_g2

0x8ca0,	// (0x00037a61) cell_hc_apps_pane_g3_ParamLimits

0x8ca0,	// (0x00037a61) cell_hc_apps_pane_g3

0x0002,

0xfcd2,	// (0x0003ea93) cell_hc_apps_pane_g_ParamLimits

0xfcd2,	// (0x0003ea93) cell_hc_apps_pane_g

0xe543,	// (0x0003d304) cell_hc_apps_pane_t1_ParamLimits

0xe543,	// (0x0003d304) cell_hc_apps_pane_t1

0x3815,	// (0x000325d6) grid_highlight_pane_cp10_ParamLimits

0x3815,	// (0x000325d6) grid_highlight_pane_cp10

0xe581,	// (0x0003d342) list_single_hc_apps_pane_ParamLimits

0xe581,	// (0x0003d342) list_single_hc_apps_pane

0xe5ae,	// (0x0003d36f) list_single_hc_apps_pane_g1

0xc9e2,	// (0x0003b7a3) list_single_hc_apps_pane_g2

0x0001,

0xfcd9,	// (0x0003ea9a) list_single_hc_apps_pane_g

0xc9fb,	// (0x0003b7bc) list_single_hc_apps_pane_g2_copy1

0xca17,	// (0x0003b7d8) list_single_hc_apps_pane_t1

0x358c,	// (0x0003234d) bg_set_opt_pane_cp_ParamLimits

0x0522,	// (0x0002f2e3) setting_slider_pane_t1_ParamLimits

0x053b,	// (0x0002f2fc) setting_slider_pane_t2_ParamLimits

0x0555,	// (0x0002f316) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0003e325) setting_slider_pane_t_ParamLimits

0x056d,	// (0x0002f32e) slider_set_pane_ParamLimits

0x115b,	// (0x0002ff1c) control_pane_g5_ParamLimits

0x115b,	// (0x0002ff1c) control_pane_g5

0x6659,	// (0x0003541a) slider_set_pane_g1_ParamLimits

0x1b1a,	// (0x000308db) slider_set_pane_g2_ParamLimits

0x1b26,	// (0x000308e7) slider_set_pane_g3_ParamLimits

0x1b3a,	// (0x000308fb) slider_set_pane_g4_ParamLimits

0x1b52,	// (0x00030913) slider_set_pane_g5_ParamLimits

0x1b26,	// (0x000308e7) slider_set_pane_g6_ParamLimits

0x1b68,	// (0x00030929) slider_set_pane_g7_ParamLimits

0xf965,	// (0x0003e726) slider_set_pane_g_ParamLimits

0x48ff,	// (0x000336c0) navi_icon_text_pane_ParamLimits

0xd5c3,	// (0x0003c384) aid_fill_nsta_2_ParamLimits

0xd5fa,	// (0x0003c3bb) aid_touch_tab_arrow_left_ParamLimits

0xd610,	// (0x0003c3d1) aid_touch_tab_arrow_right_ParamLimits

0xd6ab,	// (0x0003c46c) clock_nsta_pane_ParamLimits

0x6152,	// (0x00034f13) navi_icon_pane_g1_ParamLimits

0x615e,	// (0x00034f1f) navi_text_pane_t1_ParamLimits

0x74ae,	// (0x0003626f) navi_icon_text_pane_g1_ParamLimits

0x74ba,	// (0x0003627b) navi_icon_text_pane_t1_ParamLimits

0xe5ae,	// (0x0003d36f) list_single_hc_apps_pane_g1_ParamLimits

0xc9e2,	// (0x0003b7a3) list_single_hc_apps_pane_g2_ParamLimits

0xfcd9,	// (0x0003ea9a) list_single_hc_apps_pane_g_ParamLimits

0xc9fb,	// (0x0003b7bc) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xca17,	// (0x0003b7d8) list_single_hc_apps_pane_t1_ParamLimits

0xb7df,	// (0x0003a5a0) popup_toolbar2_fixed_window_ParamLimits

0xb7df,	// (0x0003a5a0) popup_toolbar2_fixed_window

0xc677,	// (0x0003b438) popup_toolbar2_float_window

0x3498,	// (0x00032259) bg_popup_sub_pane_cp27

0x8d77,	// (0x00037b38) grid_toolbar2_float_pane

0x3498,	// (0x00032259) bg_popup_sub_pane_cp26

0x8d77,	// (0x00037b38) grid_toolbar2_fixed_pane

0xe5c7,	// (0x0003d388) cell_toolbar2_fixed_pane_ParamLimits

0xe5c7,	// (0x0003d388) cell_toolbar2_fixed_pane

0xe5e1,	// (0x0003d3a2) cell_toolbar2_fixed_pane_g1

0x8d98,	// (0x00037b59) toolbar2_fixed_button_pane

0x52c9,	// (0x0003408a) toolbar2_fixed_button_pane_g1

0x52d9,	// (0x0003409a) toolbar2_fixed_button_pane_g2

0x52d1,	// (0x00034092) toolbar2_fixed_button_pane_g3

0x52e9,	// (0x000340aa) toolbar2_fixed_button_pane_g4

0x52e1,	// (0x000340a2) toolbar2_fixed_button_pane_g5

0x52f1,	// (0x000340b2) toolbar2_fixed_button_pane_g6

0x52f9,	// (0x000340ba) toolbar2_fixed_button_pane_g7

0x5309,	// (0x000340ca) toolbar2_fixed_button_pane_g8

0x5301,	// (0x000340c2) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x0003e628) toolbar2_fixed_button_pane_g

0x8da0,	// (0x00037b61) cell_toolbar2_float_pane_ParamLimits

0x8da0,	// (0x00037b61) cell_toolbar2_float_pane

0x8db1,	// (0x00037b72) cell_toolbar2_float_pane_g1

0x8d98,	// (0x00037b59) toolbar2_fixed_button_pane_cp

0xe088,	// (0x0003ce49) fep_vkb_accented_list_pane_ParamLimits

0xe088,	// (0x0003ce49) fep_vkb_accented_list_pane

0x1edd,	// (0x00030c9e) bg_popup_fep_shadow_pane_g9

0x4a7f,	// (0x00033840) bg_popup_fep_shadow_pane_cp3

0x3f4f,	// (0x00032d10) list_accented_list_pane

0x8dba,	// (0x00037b7b) list_single_accented_list_pane_ParamLimits

0x8dba,	// (0x00037b7b) list_single_accented_list_pane

0x4a7f,	// (0x00033840) list_highlight_pane_cp10

0x8dcb,	// (0x00037b8c) list_single_accented_list_pane_t1

0xc5a1,	// (0x0003b362) popup_slider_window_ParamLimits

0xc5a1,	// (0x0003b362) popup_slider_window

0x8a07,	// (0x000377c8) aid_indentation_list_msg

0xe6da,	// (0x0003d49b) bg_popup_window_pane_cp19

0x8eef,	// (0x00037cb0) popup_slider_window_g1

0x8f0b,	// (0x00037ccc) popup_slider_window_g2

0x8f27,	// (0x00037ce8) popup_slider_window_g3

0x0005,

0xfcde,	// (0x0003ea9f) popup_slider_window_g

0x8f83,	// (0x00037d44) popup_slider_window_t1

0x8ff7,	// (0x00037db8) small_volume_slider_vertical_pane

0x790a,	// (0x000366cb) small_volume_slider_vertical_pane_g1

0x790a,	// (0x000366cb) small_volume_slider_vertical_pane_g2

0x9013,	// (0x00037dd4) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf0,	// (0x0003eab1) small_volume_slider_vertical_pane_g

0xb74d,	// (0x0003a50e) area_side_right_pane_ParamLimits

0xb74d,	// (0x0003a50e) area_side_right_pane

0xca45,	// (0x0003b806) aid_size_side_button_ParamLimits

0xca45,	// (0x0003b806) aid_size_side_button

0xca5e,	// (0x0003b81f) grid_sctrl_middle_pane_ParamLimits

0xca5e,	// (0x0003b81f) grid_sctrl_middle_pane

0x20fa,	// (0x00030ebb) sctrl_sk_bottom_pane

0x210b,	// (0x00030ecc) sctrl_sk_top_pane

0x211d,	// (0x00030ede) aid_touch_sctrl_top

0x212a,	// (0x00030eeb) bg_sctrl_sk_pane_ParamLimits

0x212a,	// (0x00030eeb) bg_sctrl_sk_pane

0x2138,	// (0x00030ef9) sctrl_sk_top_pane_g1

0x2145,	// (0x00030f06) sctrl_sk_top_pane_t1

0x211d,	// (0x00030ede) aid_touch_sctrl_bottom

0x212a,	// (0x00030eeb) bg_sctrl_sk_pane_cp_ParamLimits

0x212a,	// (0x00030eeb) bg_sctrl_sk_pane_cp

0x2160,	// (0x00030f21) sctrl_sk_bottom_pane_g1

0x2145,	// (0x00030f06) sctrl_sk_bottom_pane_t1

0xca78,	// (0x0003b839) cell_sctrl_middle_pane_ParamLimits

0xca78,	// (0x0003b839) cell_sctrl_middle_pane

0xca89,	// (0x0003b84a) aid_touch_sctrl_middle_ParamLimits

0xca89,	// (0x0003b84a) aid_touch_sctrl_middle

0xca96,	// (0x0003b857) bg_sctrl_middle_pane_ParamLimits

0xca96,	// (0x0003b857) bg_sctrl_middle_pane

0x27cd,	// (0x0003158e) cell_sctrl_middle_pane_g1_ParamLimits

0x27cd,	// (0x0003158e) cell_sctrl_middle_pane_g1

0xcaa4,	// (0x0003b865) cell_sctrl_middle_pane_g2_ParamLimits

0xcaa4,	// (0x0003b865) cell_sctrl_middle_pane_g2

0x0001,

0xfcfc,	// (0x0003eabd) cell_sctrl_middle_pane_g_ParamLimits

0xfcfc,	// (0x0003eabd) cell_sctrl_middle_pane_g

0x52c9,	// (0x0003408a) bg_sctrl_middle_pane_g1

0x52d1,	// (0x00034092) bg_sctrl_middle_pane_g2

0x52d9,	// (0x0003409a) bg_sctrl_middle_pane_g3

0x52e1,	// (0x000340a2) bg_sctrl_middle_pane_g4

0x52e9,	// (0x000340aa) bg_sctrl_middle_pane_g5

0x52f1,	// (0x000340b2) bg_sctrl_middle_pane_g6

0x52f9,	// (0x000340ba) bg_sctrl_middle_pane_g7

0x5301,	// (0x000340c2) bg_sctrl_middle_pane_g8

0x0007,

0xfd01,	// (0x0003eac2) bg_sctrl_middle_pane_g

0x5309,	// (0x000340ca) bg_sctrl_middle_pane_g8_copy1

0x52c9,	// (0x0003408a) bg_sctrl_sk_pane_g1

0x52d9,	// (0x0003409a) bg_sctrl_sk_pane_g2

0x52d1,	// (0x00034092) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x0003e628) bg_sctrl_sk_pane_g

0x3d27,	// (0x00032ae8) aid_size_touch_scroll_bar

0x52e9,	// (0x000340aa) bg_sctrl_sk_pane_g4

0x52e1,	// (0x000340a2) bg_sctrl_sk_pane_g5

0x52f1,	// (0x000340b2) bg_sctrl_sk_pane_g6

0x52f9,	// (0x000340ba) bg_sctrl_sk_pane_g7

0x5309,	// (0x000340ca) bg_sctrl_sk_pane_g8

0x5301,	// (0x000340c2) bg_sctrl_sk_pane_g9

0x12fd,	// (0x000300be) popup_fep_china_hwr2_fs_candidate_window

0xc0c1,	// (0x0003ae82) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc0c1,	// (0x0003ae82) popup_fep_china_hwr2_fs_control_window

0x1efd,	// (0x00030cbe) sctrl_sk_top_pane_g2

0x0001,

0xfcf7,	// (0x0003eab8) sctrl_sk_top_pane_g

0xe792,	// (0x0003d553) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe792,	// (0x0003d553) aid_fep_china_hwr2_fs_cell

0xe7a6,	// (0x0003d567) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe7a6,	// (0x0003d567) bg_popup_fep_shadow_pane_cp4

0xe7bd,	// (0x0003d57e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe7bd,	// (0x0003d57e) bg_popup_fep_shadow_pane_cp5

0xe7cf,	// (0x0003d590) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe7cf,	// (0x0003d590) popup_fep_china_hwr2_fs_control_bar_grid

0xe7e3,	// (0x0003d5a4) popup_fep_china_hwr2_fs_control_funtion_grid

0x906f,	// (0x00037e30) aid_fep_china_hwr2_fs_candi_cell

0x3498,	// (0x00032259) bg_popup_fep_shadow_pane_cp6

0x9079,	// (0x00037e3a) popup_fep_china_hwr2_fs_candidate_grid

0xe7eb,	// (0x0003d5ac) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe7eb,	// (0x0003d5ac) cell_fep_china_hwr2_fs_funtion_grid

0x790a,	// (0x000366cb) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x909b,	// (0x00037e5c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x909b,	// (0x00037e5c) cell_fep_china_hwr2_fs_funtion_grid_g1

0x90a9,	// (0x00037e6a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x90a9,	// (0x00037e6a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd12,	// (0x0003ead3) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd12,	// (0x0003ead3) cell_fep_china_hwr2_fs_funtion_grid_g

0xe803,	// (0x0003d5c4) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe803,	// (0x0003d5c4) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe818,	// (0x0003d5d9) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe818,	// (0x0003d5d9) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd17,	// (0x0003ead8) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd17,	// (0x0003ead8) cell_fep_china_hwr2_fs_funtion_grid_t

0x90f0,	// (0x00037eb1) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x90f8,	// (0x00037eb9) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9100,	// (0x00037ec1) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1c,	// (0x0003eadd) popup_fep_china_hwr2_fs_control_bar_grid_g

0x9108,	// (0x00037ec9) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x9108,	// (0x00037ec9) cell_fep_china_hwr2_fs_candidate_grid

0x9121,	// (0x00037ee2) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9129,	// (0x00037eea) popup_fep_china_hwr2_fs_candidate_grid_g21

0x790a,	// (0x000366cb) cell_fep_china_hwr2_fs_candidate_grid_g1

0x790a,	// (0x000366cb) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb30,	// (0x0003e8f1) cell_fep_china_hwr2_fs_candidate_grid_g

0x9131,	// (0x00037ef2) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4ebf,	// (0x00033c80) clock_nsta_pane_cp_24_ParamLimits

0x4ebf,	// (0x00033c80) clock_nsta_pane_cp_24

0x4f3d,	// (0x00033cfe) indicator_nsta_pane_cp_24_ParamLimits

0x4f3d,	// (0x00033cfe) indicator_nsta_pane_cp_24

0x5fce,	// (0x00034d8f) heading_pane_g1

0x0001,

0xf8cc,	// (0x0003e68d) heading_pane_g

0x69e4,	// (0x000357a5) grid_sct_catagory_button_pane

0x6a14,	// (0x000357d5) scroll_pane_cp5_ParamLimits

0x74fc,	// (0x000362bd) button_value_adjust_pane_cp5_ParamLimits

0x74fc,	// (0x000362bd) button_value_adjust_pane_cp5

0x75db,	// (0x0003639c) form2_midp_time_pane_ParamLimits

0x913f,	// (0x00037f00) cell_sct_catagory_button_pane_ParamLimits

0x913f,	// (0x00037f00) cell_sct_catagory_button_pane

0x78cf,	// (0x00036690) bg_button_pane_cp01_ParamLimits

0x78cf,	// (0x00036690) bg_button_pane_cp01

0x790a,	// (0x000366cb) cell_sct_catagory_button_pane_g1

0xc61a,	// (0x0003b3db) popup_tb_extension_window

0xe834,	// (0x0003d5f5) aid_size_cell_ext_ParamLimits

0xe834,	// (0x0003d5f5) aid_size_cell_ext

0x3b69,	// (0x0003292a) bg_tb_trans_pane_cp1_ParamLimits

0x3b69,	// (0x0003292a) bg_tb_trans_pane_cp1

0xe85a,	// (0x0003d61b) grid_tb_ext_pane_ParamLimits

0xe85a,	// (0x0003d61b) grid_tb_ext_pane

0xe895,	// (0x0003d656) cell_tb_ext_pane_ParamLimits

0xe895,	// (0x0003d656) cell_tb_ext_pane

0xe8bd,	// (0x0003d67e) cell_tb_ext_pane_g1_ParamLimits

0xe8bd,	// (0x0003d67e) cell_tb_ext_pane_g1

0x91d3,	// (0x00037f94) cell_tb_ext_pane_t1

0x3815,	// (0x000325d6) list_highlight_pane_cp11_ParamLimits

0x3815,	// (0x000325d6) list_highlight_pane_cp11

0xb7f4,	// (0x0003a5b5) popup_uni_indicator_window_ParamLimits

0xb7f4,	// (0x0003a5b5) popup_uni_indicator_window

0x3df8,	// (0x00032bb9) bg_popup_sub_pane_cp14

0x91ee,	// (0x00037faf) list_uniindi_pane

0x91fa,	// (0x00037fbb) uniindi_top_pane

0x3815,	// (0x000325d6) bg_uniindi_top_pane

0x9219,	// (0x00037fda) uniindi_top_pane_g1

0x922f,	// (0x00037ff0) uniindi_top_pane_g2

0x0003,

0xfd23,	// (0x0003eae4) uniindi_top_pane_g

0x9259,	// (0x0003801a) uniindi_top_pane_t1

0x9283,	// (0x00038044) list_single_uniindi_pane_ParamLimits

0x9283,	// (0x00038044) list_single_uniindi_pane

0x790a,	// (0x000366cb) bg_uniindi_top_pane_g1

0x9296,	// (0x00038057) list_single_uniindi_pane_g1

0x92a9,	// (0x0003806a) list_single_uniindi_pane_t1

0x02c1,	// (0x0002f082) control_bg_pane

0x92ce,	// (0x0003808f) bg_sctrl_sk_pane_cp1

0x92d7,	// (0x00038098) bg_sctrl_sk_pane_cp2

0x92e0,	// (0x000380a1) control_bg_pane_g1

0x92e9,	// (0x000380aa) control_bg_pane_g2

0x0001,

0xfd2c,	// (0x0003eaed) control_bg_pane_g

0x7345,	// (0x00036106) cell_indicator_nsta_pane_g1_ParamLimits

0xdf0b,	// (0x0003cccc) cell_indicator_nsta_pane_g2_ParamLimits

0xfa94,	// (0x0003e855) cell_indicator_nsta_pane_g_ParamLimits

0x30ce,	// (0x00031e8f) form2_midp_time_pane_t1_ParamLimits

0x1c98,	// (0x00030a59) main_idle_act4_pane_ParamLimits

0x1c98,	// (0x00030a59) main_idle_act4_pane

0xc61a,	// (0x0003b3db) popup_tb_extension_window_ParamLimits

0xe87c,	// (0x0003d63d) tb_ext_find_pane_ParamLimits

0xe87c,	// (0x0003d63d) tb_ext_find_pane

0x92f2,	// (0x000380b3) ai_gene_pane_1_cp1

0x4bb8,	// (0x00033979) ai_gene_pane_2_cp1

0x92fa,	// (0x000380bb) list_single_idle_plugin_calendar_pane

0x9303,	// (0x000380c4) list_single_idle_plugin_notification_pane

0x930c,	// (0x000380cd) list_single_idle_plugin_player_pane

0xe8da,	// (0x0003d69b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe8da,	// (0x0003d69b) list_single_idle_plugin_shortcut_pane

0xe902,	// (0x0003d6c3) main_idle_act4_pane_t1

0xe918,	// (0x0003d6d9) main_idle_act4_pane_t2

0x0001,

0xfd31,	// (0x0003eaf2) main_idle_act4_pane_t

0xe92e,	// (0x0003d6ef) middle_sk_idle_act4_pane_ParamLimits

0xe92e,	// (0x0003d6ef) middle_sk_idle_act4_pane

0xe94a,	// (0x0003d70b) popup_clock_digital_analogue_window_cp2

0xe972,	// (0x0003d733) shortcut_wheel_idle_act4_pane_ParamLimits

0xe972,	// (0x0003d733) shortcut_wheel_idle_act4_pane

0x790a,	// (0x000366cb) shortcut_wheel_idle_act4_pane_g1

0x790a,	// (0x000366cb) shortcut_wheel_idle_act4_pane_g2

0x790a,	// (0x000366cb) shortcut_wheel_idle_act4_pane_g3

0x790a,	// (0x000366cb) shortcut_wheel_idle_act4_pane_g4

0x790a,	// (0x000366cb) shortcut_wheel_idle_act4_pane_g5

0x939f,	// (0x00038160) shortcut_wheel_idle_act4_pane_g6

0x93a7,	// (0x00038168) shortcut_wheel_idle_act4_pane_g7

0x93af,	// (0x00038170) shortcut_wheel_idle_act4_pane_g8

0x93b7,	// (0x00038178) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd36,	// (0x0003eaf7) shortcut_wheel_idle_act4_pane_g

0xe137,	// (0x0003cef8) middle_sk_idle_act4_pane_g1_ParamLimits

0xe137,	// (0x0003cef8) middle_sk_idle_act4_pane_g1

0xe9ef,	// (0x0003d7b0) middle_sk_idle_act4_pane_g2_ParamLimits

0xe9ef,	// (0x0003d7b0) middle_sk_idle_act4_pane_g2

0x0001,

0xfd59,	// (0x0003eb1a) middle_sk_idle_act4_pane_g_ParamLimits

0xfd59,	// (0x0003eb1a) middle_sk_idle_act4_pane_g

0xea07,	// (0x0003d7c8) middle_sk_idle_act4_pane_t1_ParamLimits

0xea07,	// (0x0003d7c8) middle_sk_idle_act4_pane_t1

0xea43,	// (0x0003d804) grid_ai_shortcut_pane_ParamLimits

0xea43,	// (0x0003d804) grid_ai_shortcut_pane

0xea60,	// (0x0003d821) list_highlight_pane_cp16_ParamLimits

0xea60,	// (0x0003d821) list_highlight_pane_cp16

0xea6d,	// (0x0003d82e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xea6d,	// (0x0003d82e) list_single_idle_plugin_shortcut_pane_g1

0xea79,	// (0x0003d83a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xea79,	// (0x0003d83a) list_single_idle_plugin_shortcut_pane_g2

0xea95,	// (0x0003d856) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xea95,	// (0x0003d856) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5e,	// (0x0003eb1f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5e,	// (0x0003eb1f) list_single_idle_plugin_shortcut_pane_g

0xeaaa,	// (0x0003d86b) cell_ai_shortcut_pane_ParamLimits

0xeaaa,	// (0x0003d86b) cell_ai_shortcut_pane

0xeac0,	// (0x0003d881) cell_ai_shortcut_pane_g1_ParamLimits

0xeac0,	// (0x0003d881) cell_ai_shortcut_pane_g1

0x92f2,	// (0x000380b3) ai_gene_pane_1_cp2

0x94e7,	// (0x000382a8) ai_gene_pane_2_cp2

0x94ef,	// (0x000382b0) list_highlight_pane_cp15

0x94f8,	// (0x000382b9) list_single_idle_plugin_calendar_pane_g1

0x94ef,	// (0x000382b0) list_highlight_pane_cp17

0x9500,	// (0x000382c1) list_single_idle_plugin_calendar_pane_g1_copy1

0x9508,	// (0x000382c9) list_single_idle_plugin_player_pane_g1

0x6c7f,	// (0x00035a40) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd65,	// (0x0003eb26) list_single_idle_plugin_player_pane_g

0x9510,	// (0x000382d1) list_single_idle_plugin_player_pane_t1

0x951e,	// (0x000382df) list_single_idle_plugin_player_pane_t2

0x952c,	// (0x000382ed) list_single_idle_plugin_player_pane_t3

0x953a,	// (0x000382fb) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6a,	// (0x0003eb2b) list_single_idle_plugin_player_pane_t

0x9548,	// (0x00038309) wait_bar_pane_cp15

0x9550,	// (0x00038311) grid_ai_notification_pane

0x6c7f,	// (0x00035a40) list_single_idle_plugin_notification_pane_g1

0xeae2,	// (0x0003d8a3) cell_ai_notification_pane_ParamLimits

0xeae2,	// (0x0003d8a3) cell_ai_notification_pane

0x9566,	// (0x00038327) cell_ai_notification_pane_g1

0x956e,	// (0x0003832f) cell_ai_notification_pane_t1

0xeaef,	// (0x0003d8b0) tb_ext_find_button_pane

0xeaf7,	// (0x0003d8b8) tb_ext_find_pane_g1

0xeaff,	// (0x0003d8c0) tb_ext_find_pane_t1

0x4477,	// (0x00033238) tb_ext_find_button_pane_g1

0x959a,	// (0x0003835b) tb_ext_find_button_pane_g2

0x0001,

0xfd73,	// (0x0003eb34) tb_ext_find_button_pane_g

0xe902,	// (0x0003d6c3) main_idle_act4_pane_t1_ParamLimits

0xe918,	// (0x0003d6d9) main_idle_act4_pane_t2_ParamLimits

0xfd31,	// (0x0003eaf2) main_idle_act4_pane_t_ParamLimits

0xe94a,	// (0x0003d70b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe962,	// (0x0003d723) sat_plugin_idle_act4_pane_ParamLimits

0xe962,	// (0x0003d723) sat_plugin_idle_act4_pane

0xeb0d,	// (0x0003d8ce) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeb0d,	// (0x0003d8ce) sat_plugin_idle_act4_pane_t1

0xeb25,	// (0x0003d8e6) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeb25,	// (0x0003d8e6) sat_plugin_idle_act4_pane_t2

0xeb3d,	// (0x0003d8fe) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeb3d,	// (0x0003d8fe) sat_plugin_idle_act4_pane_t3

0xeb55,	// (0x0003d916) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeb55,	// (0x0003d916) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd78,	// (0x0003eb39) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd78,	// (0x0003eb39) sat_plugin_idle_act4_pane_t

0x0386,	// (0x0002f147) popup_battery_window_ParamLimits

0x0386,	// (0x0002f147) popup_battery_window

0x3815,	// (0x000325d6) bg_popup_sub_pane_cp25_ParamLimits

0x3815,	// (0x000325d6) bg_popup_sub_pane_cp25

0x95ef,	// (0x000383b0) popup_battery_window_g1_ParamLimits

0x95ef,	// (0x000383b0) popup_battery_window_g1

0x95fb,	// (0x000383bc) popup_battery_window_t1_ParamLimits

0x95fb,	// (0x000383bc) popup_battery_window_t1

0x960d,	// (0x000383ce) popup_battery_window_t2_ParamLimits

0x960d,	// (0x000383ce) popup_battery_window_t2

0x0001,

0xfd81,	// (0x0003eb42) popup_battery_window_t_ParamLimits

0xfd81,	// (0x0003eb42) popup_battery_window_t

0xd4cf,	// (0x0003c290) midp_canvas_pane_ParamLimits

0xd52a,	// (0x0003c2eb) midp_keypad_pane_ParamLimits

0xd52a,	// (0x0003c2eb) midp_keypad_pane

0x4dbf,	// (0x00033b80) main_midp_pane_ParamLimits

0x73c0,	// (0x00036181) signal_pane_g2_cp_ParamLimits

0xeb6d,	// (0x0003d92e) aid_size_cell_midp_keypad_ParamLimits

0xeb6d,	// (0x0003d92e) aid_size_cell_midp_keypad

0xeb8b,	// (0x0003d94c) midp_keyp_game_grid_pane_ParamLimits

0xeb8b,	// (0x0003d94c) midp_keyp_game_grid_pane

0xebb2,	// (0x0003d973) midp_keyp_rocker_pane_ParamLimits

0xebb2,	// (0x0003d973) midp_keyp_rocker_pane

0xebfb,	// (0x0003d9bc) midp_keyp_sk_left_pane_ParamLimits

0xebfb,	// (0x0003d9bc) midp_keyp_sk_left_pane

0xec4d,	// (0x0003da0e) midp_keyp_sk_right_pane_ParamLimits

0xec4d,	// (0x0003da0e) midp_keyp_sk_right_pane

0x3498,	// (0x00032259) bg_button_pane_cp03

0xec9f,	// (0x0003da60) midp_keyp_sk_left_pane_g1

0x3498,	// (0x00032259) bg_button_pane_cp04

0xec9f,	// (0x0003da60) midp_keyp_sk_right_pane_g1

0x790a,	// (0x000366cb) midp_keyp_rocker_pane_g1

0xeca8,	// (0x0003da69) keyp_game_cell_pane_ParamLimits

0xeca8,	// (0x0003da69) keyp_game_cell_pane

0x3498,	// (0x00032259) bg_button_pane_cp02

0xeccc,	// (0x0003da8d) keyp_game_cell_pane_g1

0xb78f,	// (0x0003a550) popup_fep_vkb2_window_ParamLimits

0xb78f,	// (0x0003a550) popup_fep_vkb2_window

0xcab0,	// (0x0003b871) aid_size_cell_vkb2_ParamLimits

0xcab0,	// (0x0003b871) aid_size_cell_vkb2

0xcae6,	// (0x0003b8a7) popup_fep_vkb2_window_g1_ParamLimits

0xcae6,	// (0x0003b8a7) popup_fep_vkb2_window_g1

0xcb36,	// (0x0003b8f7) vkb2_area_bottom_pane_ParamLimits

0xcb36,	// (0x0003b8f7) vkb2_area_bottom_pane

0xcb8a,	// (0x0003b94b) vkb2_area_keypad_pane_ParamLimits

0xcb8a,	// (0x0003b94b) vkb2_area_keypad_pane

0xcbd2,	// (0x0003b993) vkb2_area_top_pane_ParamLimits

0xcbd2,	// (0x0003b993) vkb2_area_top_pane

0xcc58,	// (0x0003ba19) vkb2_top_entry_pane_ParamLimits

0xcc58,	// (0x0003ba19) vkb2_top_entry_pane

0xcc85,	// (0x0003ba46) vkb2_top_grid_left_pane_ParamLimits

0xcc85,	// (0x0003ba46) vkb2_top_grid_left_pane

0xcca5,	// (0x0003ba66) vkb2_top_grid_right_pane_ParamLimits

0xcca5,	// (0x0003ba66) vkb2_top_grid_right_pane

0x23cc,	// (0x0003118d) vkb2_cell_keypad_pane_ParamLimits

0x23cc,	// (0x0003118d) vkb2_cell_keypad_pane

0xcceb,	// (0x0003baac) vkb2_area_bottom_grid_pane_ParamLimits

0xcceb,	// (0x0003baac) vkb2_area_bottom_grid_pane

0xcd15,	// (0x0003bad6) vkb2_area_bottom_pane_g1_ParamLimits

0xcd15,	// (0x0003bad6) vkb2_area_bottom_pane_g1

0xcd3b,	// (0x0003bafc) vkb2_area_bottom_pane_g2_ParamLimits

0xcd3b,	// (0x0003bafc) vkb2_area_bottom_pane_g2

0xcd6c,	// (0x0003bb2d) vkb2_area_bottom_pane_g3_ParamLimits

0xcd6c,	// (0x0003bb2d) vkb2_area_bottom_pane_g3

0x0002,

0xfd86,	// (0x0003eb47) vkb2_area_bottom_pane_g_ParamLimits

0xfd86,	// (0x0003eb47) vkb2_area_bottom_pane_g

0x2576,	// (0x00031337) vkb2_top_cell_left_pane_ParamLimits

0x2576,	// (0x00031337) vkb2_top_cell_left_pane

0xecd5,	// (0x0003da96) vkb2_top_entry_pane_g1_ParamLimits

0xecd5,	// (0x0003da96) vkb2_top_entry_pane_g1

0xece3,	// (0x0003daa4) vkb2_top_entry_pane_t1_ParamLimits

0xece3,	// (0x0003daa4) vkb2_top_entry_pane_t1

0x97b6,	// (0x00038577) vkb2_top_entry_pane_t2_ParamLimits

0x97b6,	// (0x00038577) vkb2_top_entry_pane_t2

0x97e8,	// (0x000385a9) vkb2_top_entry_pane_t3_ParamLimits

0x97e8,	// (0x000385a9) vkb2_top_entry_pane_t3

0x0002,

0xfd8d,	// (0x0003eb4e) vkb2_top_entry_pane_t_ParamLimits

0xfd8d,	// (0x0003eb4e) vkb2_top_entry_pane_t

0xcdd6,	// (0x0003bb97) vkb2_top_grid_right_pane_g1_ParamLimits

0xcdd6,	// (0x0003bb97) vkb2_top_grid_right_pane_g1

0x25d9,	// (0x0003139a) vkb2_top_grid_right_pane_g2_ParamLimits

0x25d9,	// (0x0003139a) vkb2_top_grid_right_pane_g2

0x25f1,	// (0x000313b2) vkb2_top_grid_right_pane_g3_ParamLimits

0x25f1,	// (0x000313b2) vkb2_top_grid_right_pane_g3

0xcdec,	// (0x0003bbad) vkb2_top_grid_right_pane_g4_ParamLimits

0xcdec,	// (0x0003bbad) vkb2_top_grid_right_pane_g4

0x0003,

0xfd94,	// (0x0003eb55) vkb2_top_grid_right_pane_g_ParamLimits

0xfd94,	// (0x0003eb55) vkb2_top_grid_right_pane_g

0x261f,	// (0x000313e0) vkb2_top_cell_left_pane_g1

0x2636,	// (0x000313f7) vkb2_cell_keypad_pane_g1_ParamLimits

0x2636,	// (0x000313f7) vkb2_cell_keypad_pane_g1

0x980c,	// (0x000385cd) vkb2_cell_keypad_pane_t1_ParamLimits

0x980c,	// (0x000385cd) vkb2_cell_keypad_pane_t1

0x2644,	// (0x00031405) vkb2_cell_bottom_grid_pane_ParamLimits

0x2644,	// (0x00031405) vkb2_cell_bottom_grid_pane

0x267d,	// (0x0003143e) vkb2_cell_bottom_grid_pane_g1

0xe993,	// (0x0003d754) aid_call2_pane_cp02

0xe99b,	// (0x0003d75c) aid_call_pane_cp02

0xe9a3,	// (0x0003d764) clock_digital_number_pane_cp10

0xe9ab,	// (0x0003d76c) clock_digital_number_pane_cp11

0xe9b3,	// (0x0003d774) clock_digital_number_pane_cp12

0xe9bb,	// (0x0003d77c) clock_digital_number_pane_cp13

0xe9c3,	// (0x0003d784) clock_digital_separator_pane_cp10

0x4477,	// (0x00033238) popup_clock_digital_analogue_window_cp2_g1

0x4477,	// (0x00033238) popup_clock_digital_analogue_window_cp2_g2

0xe9cb,	// (0x0003d78c) popup_clock_digital_analogue_window_cp2_g3

0x4477,	// (0x00033238) popup_clock_digital_analogue_window_cp2_g4

0xe9cb,	// (0x0003d78c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd49,	// (0x0003eb0a) popup_clock_digital_analogue_window_cp2_g

0xe9d3,	// (0x0003d794) popup_clock_digital_analogue_window_cp2_t1

0xe9e1,	// (0x0003d7a2) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd54,	// (0x0003eb15) popup_clock_digital_analogue_window_cp2_t

0x790a,	// (0x000366cb) clock_digital_number_pane_cp10_g1

0x790a,	// (0x000366cb) clock_digital_number_pane_cp10_g2

0x0001,

0xfb30,	// (0x0003e8f1) clock_digital_number_pane_cp10_g

0x790a,	// (0x000366cb) clock_digital_separator_pane_cp10_g1

0x790a,	// (0x000366cb) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb30,	// (0x0003e8f1) clock_digital_separator_pane_cp10_g

0x923b,	// (0x00037ffc) uniindi_top_pane_g3

0x924c,	// (0x0003800d) uniindi_top_pane_g4

0x2457,	// (0x00031218) vkb2_row_keypad_pane_ParamLimits

0x2457,	// (0x00031218) vkb2_row_keypad_pane

0x2699,	// (0x0003145a) vkb2_cell_t_keypad_pane_ParamLimits

0x2699,	// (0x0003145a) vkb2_cell_t_keypad_pane

0x26a9,	// (0x0003146a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x26a9,	// (0x0003146a) vkb2_cell_t_keypad_pane_cp08

0x26bc,	// (0x0003147d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x26bc,	// (0x0003147d) vkb2_cell_t_keypad_pane_cp09

0x26d0,	// (0x00031491) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x26d0,	// (0x00031491) vkb2_cell_t_keypad_pane_cp01

0x26e1,	// (0x000314a2) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x26e1,	// (0x000314a2) vkb2_cell_t_keypad_pane_cp02

0x26f2,	// (0x000314b3) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x26f2,	// (0x000314b3) vkb2_cell_t_keypad_pane_cp03

0x2703,	// (0x000314c4) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2703,	// (0x000314c4) vkb2_cell_t_keypad_pane_cp04

0x2714,	// (0x000314d5) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2714,	// (0x000314d5) vkb2_cell_t_keypad_pane_cp05

0x2725,	// (0x000314e6) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2725,	// (0x000314e6) vkb2_cell_t_keypad_pane_cp06

0x2736,	// (0x000314f7) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2736,	// (0x000314f7) vkb2_cell_t_keypad_pane_cp07

0x2747,	// (0x00031508) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2747,	// (0x00031508) vkb2_cell_t_keypad_pane_cp10

0x1efd,	// (0x00030cbe) vkb2_cell_t_keypad_pane_g1

0x9823,	// (0x000385e4) vkb2_cell_t_keypad_pane_t1

0x02c1,	// (0x0002f082) popup_grid_graphic2_window

0xed1c,	// (0x0003dadd) aid_size_cell_graphic2_ParamLimits

0xed1c,	// (0x0003dadd) aid_size_cell_graphic2

0xed5a,	// (0x0003db1b) bg_popup_window_pane_cp21_ParamLimits

0xed5a,	// (0x0003db1b) bg_popup_window_pane_cp21

0xed68,	// (0x0003db29) graphic2_pages_pane_ParamLimits

0xed68,	// (0x0003db29) graphic2_pages_pane

0xedbe,	// (0x0003db7f) grid_graphic2_control_pane_ParamLimits

0xedbe,	// (0x0003db7f) grid_graphic2_control_pane

0xee06,	// (0x0003dbc7) grid_graphic2_pane_ParamLimits

0xee06,	// (0x0003dbc7) grid_graphic2_pane

0xee8d,	// (0x0003dc4e) cell_graphic2_pane

0x02c1,	// (0x0002f082) main_comp_mode_pane

0x8abb,	// (0x0003787c) list_ai3_gene_pane_ParamLimits

0xe6da,	// (0x0003d49b) bg_popup_window_pane_cp19_ParamLimits

0x8e91,	// (0x00037c52) bg_touch_area_indi_pane_ParamLimits

0x8e91,	// (0x00037c52) bg_touch_area_indi_pane

0x8ea7,	// (0x00037c68) bg_touch_area_indi_pane_cp01_ParamLimits

0x8ea7,	// (0x00037c68) bg_touch_area_indi_pane_cp01

0x8ebd,	// (0x00037c7e) bg_touch_area_indi_pane_cp02_ParamLimits

0x8ebd,	// (0x00037c7e) bg_touch_area_indi_pane_cp02

0x8ed5,	// (0x00037c96) bg_touch_area_indi_pane_cp03_ParamLimits

0x8ed5,	// (0x00037c96) bg_touch_area_indi_pane_cp03

0x8eef,	// (0x00037cb0) popup_slider_window_g1_ParamLimits

0x8f0b,	// (0x00037ccc) popup_slider_window_g2_ParamLimits

0x8f27,	// (0x00037ce8) popup_slider_window_g3_ParamLimits

0xfcde,	// (0x0003ea9f) popup_slider_window_g_ParamLimits

0x8f83,	// (0x00037d44) popup_slider_window_t1_ParamLimits

0x8ff7,	// (0x00037db8) small_volume_slider_vertical_pane_ParamLimits

0xee8d,	// (0x0003dc4e) cell_graphic2_pane_ParamLimits

0xeeea,	// (0x0003dcab) bg_button_pane_cp10_ParamLimits

0xeeea,	// (0x0003dcab) bg_button_pane_cp10

0xeefd,	// (0x0003dcbe) bg_button_pane_cp11_ParamLimits

0xeefd,	// (0x0003dcbe) bg_button_pane_cp11

0xef10,	// (0x0003dcd1) graphic2_pages_pane_g1_ParamLimits

0xef10,	// (0x0003dcd1) graphic2_pages_pane_g1

0xef2b,	// (0x0003dcec) graphic2_pages_pane_g2_ParamLimits

0xef2b,	// (0x0003dcec) graphic2_pages_pane_g2

0x0001,

0xfda2,	// (0x0003eb63) graphic2_pages_pane_g_ParamLimits

0xfda2,	// (0x0003eb63) graphic2_pages_pane_g

0xef43,	// (0x0003dd04) graphic2_pages_pane_t1_ParamLimits

0xef43,	// (0x0003dd04) graphic2_pages_pane_t1

0xef5b,	// (0x0003dd1c) cell_graphic2_control_pane_ParamLimits

0xef5b,	// (0x0003dd1c) cell_graphic2_control_pane

0xef8d,	// (0x0003dd4e) cell_graphic2_pane_g1_ParamLimits

0xef8d,	// (0x0003dd4e) cell_graphic2_pane_g1

0xe145,	// (0x0003cf06) cell_graphic2_pane_g2_ParamLimits

0xe145,	// (0x0003cf06) cell_graphic2_pane_g2

0xea36,	// (0x0003d7f7) cell_graphic2_pane_g3_ParamLimits

0xea36,	// (0x0003d7f7) cell_graphic2_pane_g3

0xe152,	// (0x0003cf13) cell_graphic2_pane_g4_ParamLimits

0xe152,	// (0x0003cf13) cell_graphic2_pane_g4

0xef9a,	// (0x0003dd5b) cell_graphic2_pane_g5_ParamLimits

0xef9a,	// (0x0003dd5b) cell_graphic2_pane_g5

0x0004,

0xfda7,	// (0x0003eb68) cell_graphic2_pane_g_ParamLimits

0xfda7,	// (0x0003eb68) cell_graphic2_pane_g

0xefba,	// (0x0003dd7b) cell_graphic2_pane_t1_ParamLimits

0xefba,	// (0x0003dd7b) cell_graphic2_pane_t1

0x5fc2,	// (0x00034d83) grid_highlight_pane_cp11_ParamLimits

0x5fc2,	// (0x00034d83) grid_highlight_pane_cp11

0x3815,	// (0x000325d6) bg_button_pane_cp05

0xefef,	// (0x0003ddb0) cell_graphic2_control_pane_g1

0x790a,	// (0x000366cb) bg_touch_area_indi_pane_g1

0x9b14,	// (0x000388d5) aid_cmod_rocker_key_size

0x9b1e,	// (0x000388df) aid_cmode_itu_key_size

0x9b28,	// (0x000388e9) main_cmode_video_pane

0x9b32,	// (0x000388f3) main_comp_mode_itu_pane

0x9b3e,	// (0x000388ff) main_comp_mode_rocker_pane

0x9b4a,	// (0x0003890b) cell_cmode_rocker_pane_ParamLimits

0x9b4a,	// (0x0003890b) cell_cmode_rocker_pane

0x9b5c,	// (0x0003891d) cell_cmode_itu_pane_ParamLimits

0x9b5c,	// (0x0003891d) cell_cmode_itu_pane

0x3df8,	// (0x00032bb9) bg_button_pane_cp06_ParamLimits

0x3df8,	// (0x00032bb9) bg_button_pane_cp06

0x7b88,	// (0x00036949) cell_cmode_rocker_pane_g1_ParamLimits

0x7b88,	// (0x00036949) cell_cmode_rocker_pane_g1

0x909b,	// (0x00037e5c) cell_cmode_rocker_pane_g2_ParamLimits

0x909b,	// (0x00037e5c) cell_cmode_rocker_pane_g2

0x0001,

0xfdb7,	// (0x0003eb78) cell_cmode_rocker_pane_g_ParamLimits

0xfdb7,	// (0x0003eb78) cell_cmode_rocker_pane_g

0x3498,	// (0x00032259) bg_button_pane_cp07

0x9b71,	// (0x00038932) cell_cmode_itu_pane_g1

0x9b7a,	// (0x0003893b) cell_cmode_itu_pane_t1

0x9b88,	// (0x00038949) cell_cmode_itu_pane_t2

0x0001,

0xfdbc,	// (0x0003eb7d) cell_cmode_itu_pane_t

0x92be,	// (0x0003807f) aid_touch_ctrl_left

0x92c6,	// (0x00038087) aid_touch_ctrl_right

0x3498,	// (0x00032259) compa_mode_pane

0xf015,	// (0x0003ddd6) aid_cmod_rocker_key_size_cp

0xf01f,	// (0x0003dde0) aid_cmode_itu_key_size_cp

0x9baa,	// (0x0003896b) compa_mode_pane_g1

0x9bb2,	// (0x00038973) compa_mode_pane_g2

0x9bba,	// (0x0003897b) compa_mode_pane_g3

0x0002,

0xfdc1,	// (0x0003eb82) compa_mode_pane_g

0xf029,	// (0x0003ddea) main_comp_mode_itu_pane_cp

0xf031,	// (0x0003ddf2) main_comp_mode_rocker_pane_cp

0xf039,	// (0x0003ddfa) cell_cmode_itu_pane_cp_ParamLimits

0xf039,	// (0x0003ddfa) cell_cmode_itu_pane_cp

0xf04e,	// (0x0003de0f) cell_cmode_rocker_pane_cp_ParamLimits

0xf04e,	// (0x0003de0f) cell_cmode_rocker_pane_cp

0x3df8,	// (0x00032bb9) bg_button_pane_cp06_cp_ParamLimits

0x3df8,	// (0x00032bb9) bg_button_pane_cp06_cp

0x7b88,	// (0x00036949) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7b88,	// (0x00036949) cell_cmode_rocker_pane_g1_cp

0x790a,	// (0x000366cb) cell_cmode_rocker_pane_g2_cp

0x3498,	// (0x00032259) bg_button_pane_cp07_cp

0xf060,	// (0x0003de21) cell_cmode_itu_pane_g1_cp

0xf069,	// (0x0003de2a) cell_cmode_itu_pane_t1_cp

0xf069,	// (0x0003de2a) cell_cmode_itu_pane_t2_cp

0xdd23,	// (0x0003cae4) settings_code_pane_cp2

0x358c,	// (0x0003234d) bg_popup_window_pane_cp3_ParamLimits

0x39ef,	// (0x000327b0) heading_pane_cp3_ParamLimits

0x39fb,	// (0x000327bc) listscroll_popup_graphic_pane_ParamLimits

0x1ca6,	// (0x00030a67) fep_hwr_aid_pane_ParamLimits

0x211d,	// (0x00030ede) aid_touch_sctrl_top_ParamLimits

0x2138,	// (0x00030ef9) sctrl_sk_top_pane_g1_ParamLimits

0x1efd,	// (0x00030cbe) sctrl_sk_top_pane_g2_ParamLimits

0xfcf7,	// (0x0003eab8) sctrl_sk_top_pane_g_ParamLimits

0x2145,	// (0x00030f06) sctrl_sk_top_pane_t1_ParamLimits

0x211d,	// (0x00030ede) aid_touch_sctrl_bottom_ParamLimits

0x2145,	// (0x00030f06) sctrl_sk_bottom_pane_t1_ParamLimits

0x9207,	// (0x00037fc8) aid_area_touch_clock

0xcc1a,	// (0x0003b9db) aid_vkb2_area_top_pane_cell_ParamLimits

0xcc1a,	// (0x0003b9db) aid_vkb2_area_top_pane_cell

0xccc5,	// (0x0003ba86) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xccc5,	// (0x0003ba86) aid_vkb2_area_bottom_pane_cell

0x976e,	// (0x0003852f) popup_char_count_window

0x9c07,	// (0x000389c8) popup_char_count_window_g1

0x9c10,	// (0x000389d1) popup_char_count_window_g2

0x9c19,	// (0x000389da) popup_char_count_window_g3

0x0002,

0xfdc8,	// (0x0003eb89) popup_char_count_window_g

0x9c22,	// (0x000389e3) popup_char_count_window_t1

0x21f4,	// (0x00030fb5) popup_fep_char_preview_window_ParamLimits

0x21f4,	// (0x00030fb5) popup_fep_char_preview_window

0xcc3a,	// (0x0003b9fb) vkb2_top_candi_pane_ParamLimits

0xcc3a,	// (0x0003b9fb) vkb2_top_candi_pane

0xf077,	// (0x0003de38) cell_vkb2_top_candi_pane_ParamLimits

0xf077,	// (0x0003de38) cell_vkb2_top_candi_pane

0x275c,	// (0x0003151d) bg_popup_fep_char_preview_window_ParamLimits

0x275c,	// (0x0003151d) bg_popup_fep_char_preview_window

0x276a,	// (0x0003152b) popup_fep_char_preview_window_t1_ParamLimits

0x276a,	// (0x0003152b) popup_fep_char_preview_window_t1

0x9c7d,	// (0x00038a3e) bg_popup_fep_char_preview_window_g1

0x9c85,	// (0x00038a46) bg_popup_fep_char_preview_window_g2

0x9c8d,	// (0x00038a4e) bg_popup_fep_char_preview_window_g3

0x9c95,	// (0x00038a56) bg_popup_fep_char_preview_window_g4

0x9c9d,	// (0x00038a5e) bg_popup_fep_char_preview_window_g5

0x27a4,	// (0x00031565) bg_popup_fep_char_preview_window_g6

0x9ca5,	// (0x00038a66) bg_popup_fep_char_preview_window_g7

0x9cad,	// (0x00038a6e) bg_popup_fep_char_preview_window_g8

0x9cb5,	// (0x00038a76) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcf,	// (0x0003eb90) bg_popup_fep_char_preview_window_g

0x1efd,	// (0x00030cbe) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1efd,	// (0x00030cbe) cell_vkb2_top_candi_pane_g1

0x1f0b,	// (0x00030ccc) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1f0b,	// (0x00030ccc) cell_vkb2_top_candi_pane_g2

0x994f,	// (0x00038710) cell_vkb2_top_candi_pane_g3_ParamLimits

0x994f,	// (0x00038710) cell_vkb2_top_candi_pane_g3

0x27ac,	// (0x0003156d) cell_vkb2_top_candi_pane_g4_ParamLimits

0x27ac,	// (0x0003156d) cell_vkb2_top_candi_pane_g4

0x8053,	// (0x00036e14) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8053,	// (0x00036e14) cell_vkb2_top_candi_pane_g5

0x27cd,	// (0x0003158e) cell_vkb2_top_candi_pane_g6_ParamLimits

0x27cd,	// (0x0003158e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde2,	// (0x0003eba3) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde2,	// (0x0003eba3) cell_vkb2_top_candi_pane_g

0x27db,	// (0x0003159c) cell_vkb2_top_candi_pane_t1

0x1b06,	// (0x000308c7) aid_size_touch_slider_mark_ParamLimits

0x1b06,	// (0x000308c7) aid_size_touch_slider_mark

0xeda4,	// (0x0003db65) grid_graphic2_catg_pane_ParamLimits

0xeda4,	// (0x0003db65) grid_graphic2_catg_pane

0xee60,	// (0x0003dc21) popup_grid_graphic2_window_t1_ParamLimits

0xee60,	// (0x0003dc21) popup_grid_graphic2_window_t1

0xee76,	// (0x0003dc37) popup_grid_graphic2_window_t2_ParamLimits

0xee76,	// (0x0003dc37) popup_grid_graphic2_window_t2

0x0001,

0xfd9d,	// (0x0003eb5e) popup_grid_graphic2_window_t_ParamLimits

0xfd9d,	// (0x0003eb5e) popup_grid_graphic2_window_t

0x3815,	// (0x000325d6) bg_button_pane_cp05_ParamLimits

0xefef,	// (0x0003ddb0) cell_graphic2_control_pane_g1_ParamLimits

0xf0dd,	// (0x0003de9e) cell_graphic2_catg_pane_ParamLimits

0xf0dd,	// (0x0003de9e) cell_graphic2_catg_pane

0x3498,	// (0x00032259) bg_button_pane_cp12

0xf0ef,	// (0x0003deb0) cell_graphic2_catg_pane_g1

0x91d3,	// (0x00037f94) cell_tb_ext_pane_t1_ParamLimits

0x2596,	// (0x00031357) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2596,	// (0x00031357) vkb2_top_cell_right_narrow_pane

0x25ae,	// (0x0003136f) vkb2_top_cell_right_wide_pane_ParamLimits

0x25ae,	// (0x0003136f) vkb2_top_cell_right_wide_pane

0x1c98,	// (0x00030a59) bg_vkb2_func_pane_ParamLimits

0x1c98,	// (0x00030a59) bg_vkb2_func_pane

0x261f,	// (0x000313e0) vkb2_top_cell_left_pane_g1_ParamLimits

0x1c98,	// (0x00030a59) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1c98,	// (0x00030a59) bg_vkb2_fuc_pane_cp03

0x267d,	// (0x0003143e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x52d1,	// (0x00034092) bg_vkb2_func_pane_g1

0x52d9,	// (0x0003409a) bg_vkb2_func_pane_g2

0x52e9,	// (0x000340aa) bg_vkb2_func_pane_g3

0x52e1,	// (0x000340a2) bg_vkb2_func_pane_g4

0x52f1,	// (0x000340b2) bg_vkb2_func_pane_g5

0x52f9,	// (0x000340ba) bg_vkb2_func_pane_g6

0x5301,	// (0x000340c2) bg_vkb2_func_pane_g7

0x5309,	// (0x000340ca) bg_vkb2_func_pane_g8

0x52c9,	// (0x0003408a) bg_vkb2_func_pane_g9

0x0008,

0xfdef,	// (0x0003ebb0) bg_vkb2_func_pane_g

0x1c98,	// (0x00030a59) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1c98,	// (0x00030a59) bg_vkb2_fuc_pane_cp01

0x261f,	// (0x000313e0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x261f,	// (0x000313e0) vkb2_top_cell_right_wide_pane_g1

0x1c98,	// (0x00030a59) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1c98,	// (0x00030a59) bg_vkb2_fuc_pane_cp02

0x267d,	// (0x0003143e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x267d,	// (0x0003143e) vkb2_top_cell_right_narrow_pane_g1

0xe61a,	// (0x0003d3db) aid_touch_area_decrease_ParamLimits

0xe61a,	// (0x0003d3db) aid_touch_area_decrease

0xe64e,	// (0x0003d40f) aid_touch_area_increase_ParamLimits

0xe64e,	// (0x0003d40f) aid_touch_area_increase

0xe676,	// (0x0003d437) aid_touch_area_mute_ParamLimits

0xe676,	// (0x0003d437) aid_touch_area_mute

0xe6a6,	// (0x0003d467) aid_touch_area_slider_ParamLimits

0xe6a6,	// (0x0003d467) aid_touch_area_slider

0xe6e6,	// (0x0003d4a7) popup_slider_window_g4_ParamLimits

0xe6e6,	// (0x0003d4a7) popup_slider_window_g4

0xe70e,	// (0x0003d4cf) popup_slider_window_g5_ParamLimits

0xe70e,	// (0x0003d4cf) popup_slider_window_g5

0xe742,	// (0x0003d503) popup_slider_window_g6_ParamLimits

0xe742,	// (0x0003d503) popup_slider_window_g6

0x8fb1,	// (0x00037d72) popup_slider_window_t2_ParamLimits

0x8fb1,	// (0x00037d72) popup_slider_window_t2

0x0001,

0xfceb,	// (0x0003eaac) popup_slider_window_t_ParamLimits

0xfceb,	// (0x0003eaac) popup_slider_window_t

0xe75e,	// (0x0003d51f) slider_pane_ParamLimits

0xe75e,	// (0x0003d51f) slider_pane

0x9cd8,	// (0x00038a99) slider_pane_g1_ParamLimits

0x9cd8,	// (0x00038a99) slider_pane_g1

0x9cec,	// (0x00038aad) slider_pane_g2_ParamLimits

0x9cec,	// (0x00038aad) slider_pane_g2

0x9d02,	// (0x00038ac3) slider_pane_g3_ParamLimits

0x9d02,	// (0x00038ac3) slider_pane_g3

0x0003,

0xfe02,	// (0x0003ebc3) slider_pane_g_ParamLimits

0xfe02,	// (0x0003ebc3) slider_pane_g

0xc662,	// (0x0003b423) popup_tb_float_extension_window_ParamLimits

0xc662,	// (0x0003b423) popup_tb_float_extension_window

0x9d2e,	// (0x00038aef) aid_size_cell_tb_float_ext

0x3498,	// (0x00032259) bg_popup_sub_window_cp28

0x9d3a,	// (0x00038afb) grid_tb_float_ext_pane

0x9d44,	// (0x00038b05) cell_tb_float_ext_pane_ParamLimits

0x9d44,	// (0x00038b05) cell_tb_float_ext_pane

0x9d5e,	// (0x00038b1f) cell_tb_float_ext_pane_g1

0x9d67,	// (0x00038b28) grid_highlight_pane_cp12

0xc83a,	// (0x0003b5fb) cell_last_hwr_side_pane_ParamLimits

0xc83a,	// (0x0003b5fb) cell_last_hwr_side_pane

0x790a,	// (0x000366cb) cell_last_hwr_side_pane_g1

0x9d70,	// (0x00038b31) cell_last_hwr_side_pane_g2

0x0001,

0xfe0b,	// (0x0003ebcc) cell_last_hwr_side_pane_g

0xcda1,	// (0x0003bb62) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcda1,	// (0x0003bb62) vkb2_area_bottom_space_btn_pane

0x1efd,	// (0x00030cbe) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9823,	// (0x000385e4) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x27db,	// (0x0003159c) cell_vkb2_top_candi_pane_t1_ParamLimits

0x27fa,	// (0x000315bb) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x27fa,	// (0x000315bb) vkb2_area_bottom_space_btn_pane_g1

0x2834,	// (0x000315f5) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2834,	// (0x000315f5) vkb2_area_bottom_space_btn_pane_g2

0x286a,	// (0x0003162b) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x286a,	// (0x0003162b) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe10,	// (0x0003ebd1) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe10,	// (0x0003ebd1) vkb2_area_bottom_space_btn_pane_g

0x1d5b,	// (0x00030b1c) cel_fep_hwr_func_pane_ParamLimits

0x1d5b,	// (0x00030b1c) cel_fep_hwr_func_pane

0xc80f,	// (0x0003b5d0) cell_hwr_side_button_pane_ParamLimits

0xc80f,	// (0x0003b5d0) cell_hwr_side_button_pane

0x9207,	// (0x00037fc8) aid_area_touch_clock_ParamLimits

0x3815,	// (0x000325d6) bg_uniindi_top_pane_ParamLimits

0x9219,	// (0x00037fda) uniindi_top_pane_g1_ParamLimits

0x922f,	// (0x00037ff0) uniindi_top_pane_g2_ParamLimits

0x923b,	// (0x00037ffc) uniindi_top_pane_g3_ParamLimits

0x924c,	// (0x0003800d) uniindi_top_pane_g4_ParamLimits

0xfd23,	// (0x0003eae4) uniindi_top_pane_g_ParamLimits

0x9259,	// (0x0003801a) uniindi_top_pane_t1_ParamLimits

0x3815,	// (0x000325d6) bg_vkb2_func_pane_cp01_ParamLimits

0x3815,	// (0x000325d6) bg_vkb2_func_pane_cp01

0x9d79,	// (0x00038b3a) cel_fep_hwr_func_pane_g1_ParamLimits

0x9d79,	// (0x00038b3a) cel_fep_hwr_func_pane_g1

0x3815,	// (0x000325d6) bg_vkb2_func_pane_cp02_ParamLimits

0x3815,	// (0x000325d6) bg_vkb2_func_pane_cp02

0x9d79,	// (0x00038b3a) cell_hwr_side_button_pane_g1_ParamLimits

0x9d79,	// (0x00038b3a) cell_hwr_side_button_pane_g1

0x514a,	// (0x00033f0b) status_pane_g4_ParamLimits

0x514a,	// (0x00033f0b) status_pane_g4

0x5164,	// (0x00033f25) status_pane_t1

0x7644,	// (0x00036405) form2_midp_gauge_slider_cont_pane

0x764c,	// (0x0003640d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdfde,	// (0x0003cd9f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdff0,	// (0x0003cdb1) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae3,	// (0x0003e8a4) form2_midp_gauge_slider_pane_t_ParamLimits

0x7682,	// (0x00036443) form2_midp_slider_pane_ParamLimits

0x21b4,	// (0x00030f75) aid_size_cell_func_vkb2_ParamLimits

0x21b4,	// (0x00030f75) aid_size_cell_func_vkb2

0x9d1a,	// (0x00038adb) slider_pane_g4_ParamLimits

0x9d1a,	// (0x00038adb) slider_pane_g4

0xce02,	// (0x0003bbc3) form2_midp_gauge_slider_pane_t2_cp01

0xce10,	// (0x0003bbd1) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xce10,	// (0x0003bbd1) form2_midp_gauge_slider_pane_t3_cp01

0x28df,	// (0x000316a0) form2_midp_slider_pane_cp01

0x3498,	// (0x00032259) navi_smil_pane

0x9db2,	// (0x00038b73) navi_smil_pane_g1

0x9dba,	// (0x00038b7b) navi_smil_pane_t1

0x9d87,	// (0x00038b48) form2_midp_slider_pane_g1

0x9d90,	// (0x00038b51) form2_midp_slider_pane_g2

0x9d98,	// (0x00038b59) form2_midp_slider_pane_g3

0x9d87,	// (0x00038b48) form2_midp_slider_pane_g4

0xf0f8,	// (0x0003deb9) form2_midp_slider_pane_g5

0x0004,

0xfe19,	// (0x0003ebda) form2_midp_slider_pane_g

0x28a4,	// (0x00031665) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x28a4,	// (0x00031665) vkb2_area_bottom_space_btn_pane_g4

0xd6f6,	// (0x0003c4b7) lc0_navi_pane_ParamLimits

0xd6f6,	// (0x0003c4b7) lc0_navi_pane

0xd760,	// (0x0003c521) lc0_stat_indi_pane_ParamLimits

0xd760,	// (0x0003c521) lc0_stat_indi_pane

0xd775,	// (0x0003c536) ls0_title_pane_ParamLimits

0xd775,	// (0x0003c536) ls0_title_pane

0x3df8,	// (0x00032bb9) bg_popup_sub_pane_cp14_ParamLimits

0x91ee,	// (0x00037faf) list_uniindi_pane_ParamLimits

0x91fa,	// (0x00037fbb) uniindi_top_pane_ParamLimits

0x9296,	// (0x00038057) list_single_uniindi_pane_g1_ParamLimits

0x92a9,	// (0x0003806a) list_single_uniindi_pane_t1_ParamLimits

0xce2d,	// (0x0003bbee) lc0_stat_clock_pane_ParamLimits

0xce2d,	// (0x0003bbee) lc0_stat_clock_pane

0xf103,	// (0x0003dec4) lc0_stat_indi_pane_g1_ParamLimits

0xf103,	// (0x0003dec4) lc0_stat_indi_pane_g1

0xf110,	// (0x0003ded1) lc0_stat_indi_pane_g2_ParamLimits

0xf110,	// (0x0003ded1) lc0_stat_indi_pane_g2

0x0001,

0xfe24,	// (0x0003ebe5) lc0_stat_indi_pane_g_ParamLimits

0xfe24,	// (0x0003ebe5) lc0_stat_indi_pane_g

0xce3a,	// (0x0003bbfb) lc0_uni_indicator_pane_ParamLimits

0xce3a,	// (0x0003bbfb) lc0_uni_indicator_pane

0xf11d,	// (0x0003dede) ls0_title_pane_g1_ParamLimits

0xf11d,	// (0x0003dede) ls0_title_pane_g1

0xf131,	// (0x0003def2) ls0_title_pane_t1_ParamLimits

0xf131,	// (0x0003def2) ls0_title_pane_t1

0xce47,	// (0x0003bc08) lc0_uni_indicator_pane_g1_ParamLimits

0xce47,	// (0x0003bc08) lc0_uni_indicator_pane_g1

0x9e2c,	// (0x00038bed) lc0_stat_clock_pane_t1

0x02c1,	// (0x0002f082) main_ai5_pane

0x9e3a,	// (0x00038bfb) ai5_sk_pane_ParamLimits

0x9e3a,	// (0x00038bfb) ai5_sk_pane

0xf15f,	// (0x0003df20) cell_ai5_widget_pane_ParamLimits

0xf15f,	// (0x0003df20) cell_ai5_widget_pane

0x9efd,	// (0x00038cbe) aid_size_cell_widget_grid

0x9f13,	// (0x00038cd4) bg_ai5_widget_pane_ParamLimits

0x9f13,	// (0x00038cd4) bg_ai5_widget_pane

0x9f87,	// (0x00038d48) cell_ai5_widget_pane_g2

0x9f97,	// (0x00038d58) cell_ai5_widget_pane_g3

0x9fae,	// (0x00038d6f) cell_ai5_widget_pane_g4

0x9fba,	// (0x00038d7b) cell_ai5_widget_pane_g5

0x9fc6,	// (0x00038d87) cell_ai5_widget_pane_g6

0x9fd2,	// (0x00038d93) cell_ai5_widget_pane_g7

0xa01a,	// (0x00038ddb) cell_ai5_widget_pane_t1_ParamLimits

0xa01a,	// (0x00038ddb) cell_ai5_widget_pane_t1

0xa037,	// (0x00038df8) cell_ai5_widget_pane_t2_ParamLimits

0xa037,	// (0x00038df8) cell_ai5_widget_pane_t2

0xa04f,	// (0x00038e10) cell_ai5_widget_pane_t3_ParamLimits

0xa04f,	// (0x00038e10) cell_ai5_widget_pane_t3

0xa067,	// (0x00038e28) cell_ai5_widget_pane_t4_ParamLimits

0xa067,	// (0x00038e28) cell_ai5_widget_pane_t4

0xa084,	// (0x00038e45) cell_ai5_widget_pane_t5_ParamLimits

0xa084,	// (0x00038e45) cell_ai5_widget_pane_t5

0xa0a3,	// (0x00038e64) cell_ai5_widget_pane_t6_ParamLimits

0xa0a3,	// (0x00038e64) cell_ai5_widget_pane_t6

0xa0b5,	// (0x00038e76) cell_ai5_widget_pane_t7_ParamLimits

0xa0b5,	// (0x00038e76) cell_ai5_widget_pane_t7

0xa0ce,	// (0x00038e8f) cell_ai5_widget_pane_t8_ParamLimits

0xa0ce,	// (0x00038e8f) cell_ai5_widget_pane_t8

0x0009,

0xfe3e,	// (0x0003ebff) cell_ai5_widget_pane_t_ParamLimits

0xfe3e,	// (0x0003ebff) cell_ai5_widget_pane_t

0xa122,	// (0x00038ee3) grid_ai5_widget_pane

0x3df8,	// (0x00032bb9) highlight_cell_ai5_widget_pane_ParamLimits

0x3df8,	// (0x00032bb9) highlight_cell_ai5_widget_pane

0xf1c9,	// (0x0003df8a) ai5_sk_left_pane

0xf1d3,	// (0x0003df94) ai5_sk_middle_pane

0xf1dd,	// (0x0003df9e) ai5_sk_right_pane

0xa158,	// (0x00038f19) bg_ai5_widget_pane_g1_ParamLimits

0xa158,	// (0x00038f19) bg_ai5_widget_pane_g1

0xa164,	// (0x00038f25) bg_ai5_widget_pane_g2_ParamLimits

0xa164,	// (0x00038f25) bg_ai5_widget_pane_g2

0xa170,	// (0x00038f31) bg_ai5_widget_pane_g3_ParamLimits

0xa170,	// (0x00038f31) bg_ai5_widget_pane_g3

0xa17c,	// (0x00038f3d) bg_ai5_widget_pane_g4_ParamLimits

0xa17c,	// (0x00038f3d) bg_ai5_widget_pane_g4

0xa188,	// (0x00038f49) bg_ai5_widget_pane_g5_ParamLimits

0xa188,	// (0x00038f49) bg_ai5_widget_pane_g5

0xa194,	// (0x00038f55) bg_ai5_widget_pane_g6_ParamLimits

0xa194,	// (0x00038f55) bg_ai5_widget_pane_g6

0xa1a0,	// (0x00038f61) bg_ai5_widget_pane_g7_ParamLimits

0xa1a0,	// (0x00038f61) bg_ai5_widget_pane_g7

0xa1ac,	// (0x00038f6d) bg_ai5_widget_pane_g8_ParamLimits

0xa1ac,	// (0x00038f6d) bg_ai5_widget_pane_g8

0xa1b8,	// (0x00038f79) bg_ai5_widget_pane_g9_ParamLimits

0xa1b8,	// (0x00038f79) bg_ai5_widget_pane_g9

0x0008,

0xfe53,	// (0x0003ec14) bg_ai5_widget_pane_g_ParamLimits

0xfe53,	// (0x0003ec14) bg_ai5_widget_pane_g

0xa1ea,	// (0x00038fab) cell_shortcut_ai5_widget_pane_ParamLimits

0xa1ea,	// (0x00038fab) cell_shortcut_ai5_widget_pane

0x4a7f,	// (0x00033840) bg_cell_shortcut_ai5_widget_pane

0xa1fb,	// (0x00038fbc) cell_grid_ai5_widget_pane_g1

0xa204,	// (0x00038fc5) highlight_cell_shortcut_ai5_widget_pane

0x52d1,	// (0x00034092) ai5_sk_left_pane_g1

0xa20c,	// (0x00038fcd) ai5_sk_left_pane_g2

0xa214,	// (0x00038fd5) ai5_sk_left_pane_g3

0xa21c,	// (0x00038fdd) ai5_sk_left_pane_g4

0x0003,

0xfe66,	// (0x0003ec27) ai5_sk_left_pane_g

0xa224,	// (0x00038fe5) ai5_sk_left_pane_t1

0x52d9,	// (0x0003409a) ai5_sk_right_pane_g1

0xa232,	// (0x00038ff3) ai5_sk_right_pane_g2

0xa23a,	// (0x00038ffb) ai5_sk_right_pane_g3

0xa242,	// (0x00039003) ai5_sk_right_pane_g4

0x0003,

0xfe6f,	// (0x0003ec30) ai5_sk_right_pane_g

0xa24a,	// (0x0003900b) ai5_sk_right_pane_t1

0x52d9,	// (0x0003409a) ai5_sk_middle_pane_g1

0x52d1,	// (0x00034092) ai5_sk_middle_pane_g2

0x52f1,	// (0x000340b2) ai5_sk_middle_pane_g3

0xa23a,	// (0x00038ffb) ai5_sk_middle_pane_g4

0xa214,	// (0x00038fd5) ai5_sk_middle_pane_g5

0xa258,	// (0x00039019) ai5_sk_middle_pane_g6

0xf1e7,	// (0x0003dfa8) ai5_sk_middle_pane_g7

0x0006,

0xfe78,	// (0x0003ec39) ai5_sk_middle_pane_g

0xd5e2,	// (0x0003c3a3) aid_touch_area_size_lc0_ParamLimits

0xd5e2,	// (0x0003c3a3) aid_touch_area_size_lc0

0x1f2c,	// (0x00030ced) cell_hwr_candidate_pane_t1_ParamLimits

0x4e21,	// (0x00033be2) aid_touch_navi_pane

0xd86e,	// (0x0003c62f) status_dt_navi_pane_ParamLimits

0xd86e,	// (0x0003c62f) status_dt_navi_pane

0xd886,	// (0x0003c647) status_dt_sta_pane_ParamLimits

0xd886,	// (0x0003c647) status_dt_sta_pane

0xf1ef,	// (0x0003dfb0) dt_sta_controll_pane

0xf1fc,	// (0x0003dfbd) dt_sta_indi_pane

0xf209,	// (0x0003dfca) dt_sta_title_pane

0x3815,	// (0x000325d6) bg_dt_sta_indi_pane_ParamLimits

0x3815,	// (0x000325d6) bg_dt_sta_indi_pane

0xf21b,	// (0x0003dfdc) dt_sta_battery_pane

0xf223,	// (0x0003dfe4) dt_sta_indi_pane_g1

0xa2aa,	// (0x0003906b) dt_sta_indi_pane_g2

0xa2b3,	// (0x00039074) dt_sta_indi_pane_g3

0x0002,

0xfe87,	// (0x0003ec48) dt_sta_indi_pane_g

0xa2bc,	// (0x0003907d) dt_sta_signal_pane

0x3df8,	// (0x00032bb9) bg_dt_sta_title_pane_ParamLimits

0x3df8,	// (0x00032bb9) bg_dt_sta_title_pane

0xa2c5,	// (0x00039086) dt_sta_title_pane_g1

0xa2cd,	// (0x0003908e) dt_sta_title_pane_t1_ParamLimits

0xa2cd,	// (0x0003908e) dt_sta_title_pane_t1

0x3498,	// (0x00032259) bg_dt_sta_control_pane

0xf22c,	// (0x0003dfed) dt_sta_controll_pane_g1

0xa2eb,	// (0x000390ac) bg_dt_sta_title_pane_g1

0xa2f4,	// (0x000390b5) bg_dt_sta_title_pane_g2

0xa2fd,	// (0x000390be) bg_dt_sta_title_pane_g3

0x0002,

0xfe8e,	// (0x0003ec4f) bg_dt_sta_title_pane_g

0x790a,	// (0x000366cb) bg_dt_sta_indi_pane_g1

0xa306,	// (0x000390c7) dt_sta_signal_pane_g1

0xa30e,	// (0x000390cf) dt_sta_signal_pane_g2

0x0001,

0xfe95,	// (0x0003ec56) dt_sta_signal_pane_g

0xa316,	// (0x000390d7) dt_sta_battery_pane_g1

0xa31f,	// (0x000390e0) dt_sta_battery_pane_t1

0x790a,	// (0x000366cb) bg_dt_sta_control_pane_g1

0x4589,	// (0x0003334a) fep_china_uni_eep_pane

0x4591,	// (0x00033352) fep_china_uni_entry_pane_ParamLimits

0x45a1,	// (0x00033362) popup_fep_china_uni_window_g1_ParamLimits

0x45b1,	// (0x00033372) popup_fep_china_uni_window_g2_ParamLimits

0x45b1,	// (0x00033372) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x0003e4e4) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x0003e4e4) popup_fep_china_uni_window_g

0xa32e,	// (0x000390ef) fep_china_uni_eep_pane_g1

0xa336,	// (0x000390f7) fep_china_uni_eep_pane_t1

0x9da9,	// (0x00038b6a) aid_touch_area_size_smil_player

0x4f71,	// (0x00033d32) lc0_clock_pane

0x5158,	// (0x00033f19) status_pane_g5_ParamLimits

0x5158,	// (0x00033f19) status_pane_g5

0xc1e4,	// (0x0003afa5) popup_keymap_window

0x5116,	// (0x00033ed7) status_icon_pane

0x9f97,	// (0x00038d58) cell_ai5_widget_pane_g3_ParamLimits

0x9fae,	// (0x00038d6f) cell_ai5_widget_pane_g4_ParamLimits

0x9fba,	// (0x00038d7b) cell_ai5_widget_pane_g5_ParamLimits

0x9fde,	// (0x00038d9f) cell_ai5_widget_pane_g8_ParamLimits

0x9fde,	// (0x00038d9f) cell_ai5_widget_pane_g8

0x9ff2,	// (0x00038db3) cell_ai5_widget_pane_g9_ParamLimits

0x9ff2,	// (0x00038db3) cell_ai5_widget_pane_g9

0xa006,	// (0x00038dc7) cell_ai5_widget_pane_g10_ParamLimits

0xa006,	// (0x00038dc7) cell_ai5_widget_pane_g10

0xa345,	// (0x00039106) status_icon_pane_g1

0x3498,	// (0x00032259) bg_popup_sub_pane_cp13

0xa34d,	// (0x0003910e) popup_keymap_window_t1

0xd570,	// (0x0003c331) control_pane_g6_ParamLimits

0xd570,	// (0x0003c331) control_pane_g6

0xd57d,	// (0x0003c33e) control_pane_g7_ParamLimits

0xd57d,	// (0x0003c33e) control_pane_g7

0xd58a,	// (0x0003c34b) control_pane_g8_ParamLimits

0xd58a,	// (0x0003c34b) control_pane_g8

0xf1ef,	// (0x0003dfb0) dt_sta_controll_pane_ParamLimits

0xf1fc,	// (0x0003dfbd) dt_sta_indi_pane_ParamLimits

0xf209,	// (0x0003dfca) dt_sta_title_pane_ParamLimits

0x3d30,	// (0x00032af1) aid_size_touch_scroll_bar_cale

0x039a,	// (0x0002f15b) popup_discreet_window_ParamLimits

0x039a,	// (0x0002f15b) popup_discreet_window

0xb7d5,	// (0x0003a596) popup_sk_window

0x5942,	// (0x00034703) bg_popup_sub_pane_cp28_ParamLimits

0x5942,	// (0x00034703) bg_popup_sub_pane_cp28

0xa35b,	// (0x0003911c) popup_discreet_window_g1_ParamLimits

0xa35b,	// (0x0003911c) popup_discreet_window_g1

0xa37b,	// (0x0003913c) popup_discreet_window_t1_ParamLimits

0xa37b,	// (0x0003913c) popup_discreet_window_t1

0xa399,	// (0x0003915a) popup_discreet_window_t2_ParamLimits

0xa399,	// (0x0003915a) popup_discreet_window_t2

0x0002,

0xfe9a,	// (0x0003ec5b) popup_discreet_window_t_ParamLimits

0xfe9a,	// (0x0003ec5b) popup_discreet_window_t

0x2916,	// (0x000316d7) popup_sk_window_g1

0x2920,	// (0x000316e1) popup_sk_window_g2

0x0001,

0xfea1,	// (0x0003ec62) popup_sk_window_g

0x292a,	// (0x000316eb) popup_sk_window_t1

0x2938,	// (0x000316f9) popup_sk_window_t1_copy1

0x9f87,	// (0x00038d48) cell_ai5_widget_pane_g2_ParamLimits

0xa0e0,	// (0x00038ea1) cell_ai5_widget_pane_t9_ParamLimits

0xa0e0,	// (0x00038ea1) cell_ai5_widget_pane_t9

0x3498,	// (0x00032259) main_fep_fshwr2_pane

0xce6e,	// (0x0003bc2f) aid_fshwr2_btn_pane

0xce7f,	// (0x0003bc40) aid_fshwr2_syb_pane

0xce90,	// (0x0003bc51) aid_fshwr2_txt_pane

0xce9c,	// (0x0003bc5d) fshwr2_func_candi_pane

0xcebb,	// (0x0003bc7c) fshwr2_hwr_syb_pane

0xced6,	// (0x0003bc97) fshwr2_icf_pane

0x3498,	// (0x00032259) fshwr2_icf_bg_pane

0xa3eb,	// (0x000391ac) fshwr2_icf_pane_t1_ParamLimits

0xa3eb,	// (0x000391ac) fshwr2_icf_pane_t1

0x4477,	// (0x00033238) fshwr2_func_candi_pane_g1

0xf235,	// (0x0003dff6) fshwr2_func_candi_row_pane_ParamLimits

0xf235,	// (0x0003dff6) fshwr2_func_candi_row_pane

0xf24d,	// (0x0003e00e) cell_fshwr2_syb_pane_ParamLimits

0xf24d,	// (0x0003e00e) cell_fshwr2_syb_pane

0x7b88,	// (0x00036949) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7b88,	// (0x00036949) fshwr2_hwr_syb_pane_g1

0x3498,	// (0x00032259) bg_popup_call_pane_cp01

0xf267,	// (0x0003e028) fshwr2_func_candi_cell_pane_ParamLimits

0xf267,	// (0x0003e028) fshwr2_func_candi_cell_pane

0xa458,	// (0x00039219) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa458,	// (0x00039219) fshwr2_func_candi_cell_bg_pane

0xf292,	// (0x0003e053) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xf292,	// (0x0003e053) fshwr2_func_candi_cell_pane_g1

0xa48c,	// (0x0003924d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa48c,	// (0x0003924d) fshwr2_func_candi_cell_pane_t1

0x3498,	// (0x00032259) bg_button_pane_cp08

0x4a7f,	// (0x00033840) cell_fshwr2_syb_bg_pane

0xf2ba,	// (0x0003e07b) cell_fshwr2_syb_bg_pane_g1

0xf2c2,	// (0x0003e083) cell_fshwr2_syb_bg_pane_t1

0x3df8,	// (0x00032bb9) main_tmo_pane

0xdb52,	// (0x0003c913) uni_indicator_pane_g1_ParamLimits

0xdb69,	// (0x0003c92a) uni_indicator_pane_g2_ParamLimits

0xdb7f,	// (0x0003c940) uni_indicator_pane_g3_ParamLimits

0x6499,	// (0x0003525a) uni_indicator_pane_g4_ParamLimits

0x6499,	// (0x0003525a) uni_indicator_pane_g4

0x64ad,	// (0x0003526e) uni_indicator_pane_g5_ParamLimits

0x64ad,	// (0x0003526e) uni_indicator_pane_g5

0x64ad,	// (0x0003526e) uni_indicator_pane_g6_ParamLimits

0x64ad,	// (0x0003526e) uni_indicator_pane_g6

0xf922,	// (0x0003e6e3) uni_indicator_pane_g_ParamLimits

0xe5f6,	// (0x0003d3b7) popup_tmo_note_window_ParamLimits

0xe5f6,	// (0x0003d3b7) popup_tmo_note_window

0x2196,	// (0x00030f57) fshwr2_bg_pane

0xf2ab,	// (0x0003e06c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xf2ab,	// (0x0003e06c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea6,	// (0x0003ec67) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea6,	// (0x0003ec67) fshwr2_func_candi_cell_pane_g

0x790a,	// (0x000366cb) bg_popup_window_pane_cp01

0xa4b6,	// (0x00039277) bg_popup_window_pane_g1_cp01

0xa4bf,	// (0x00039280) bg_popup_window_pane_cp22_ParamLimits

0xa4bf,	// (0x00039280) bg_popup_window_pane_cp22

0xa4cd,	// (0x0003928e) listscroll_tmo_link_pane_ParamLimits

0xa4cd,	// (0x0003928e) listscroll_tmo_link_pane

0xa50d,	// (0x000392ce) popup_tmo_note_window_g1_ParamLimits

0xa50d,	// (0x000392ce) popup_tmo_note_window_g1

0xa51a,	// (0x000392db) tmo_note_info_pane_ParamLimits

0xa51a,	// (0x000392db) tmo_note_info_pane

0xf2d1,	// (0x0003e092) list_tmo_note_info_pane_g1_ParamLimits

0xf2d1,	// (0x0003e092) list_tmo_note_info_pane_g1

0xa54b,	// (0x0003930c) list_tmo_note_info_pane_g2_ParamLimits

0xa54b,	// (0x0003930c) list_tmo_note_info_pane_g2

0x0001,

0xfeab,	// (0x0003ec6c) list_tmo_note_info_pane_g_ParamLimits

0xfeab,	// (0x0003ec6c) list_tmo_note_info_pane_g

0xa567,	// (0x00039328) list_tmo_note_info_text_pane_ParamLimits

0xa567,	// (0x00039328) list_tmo_note_info_text_pane

0xa5e8,	// (0x000393a9) list_tmo_link_pane

0xa5f5,	// (0x000393b6) scroll_pane_cp20

0xa602,	// (0x000393c3) list_single_tmo_link_pane_ParamLimits

0xa602,	// (0x000393c3) list_single_tmo_link_pane

0xa612,	// (0x000393d3) list_single_tmo_link_pane_t1

0xa620,	// (0x000393e1) list_tmo_note_info_text_pane_t1_ParamLimits

0xa620,	// (0x000393e1) list_tmo_note_info_text_pane_t1

0xd2cc,	// (0x0003c08d) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd2cc,	// (0x0003c08d) aid_size_touch_scroll_bar_cp01

0xbd52,	// (0x0003ab13) aid_size_touch_slider_marker

0xb7c5,	// (0x0003a586) popup_settings_window_ParamLimits

0xb7c5,	// (0x0003a586) popup_settings_window

0x2bb1,	// (0x00031972) popup_candi_list_indi_window

0x4e21,	// (0x00033be2) aid_touch_navi_pane_ParamLimits

0x20f1,	// (0x00030eb2) rs_clock_indi_pane

0x20fa,	// (0x00030ebb) sctrl_sk_bottom_pane_ParamLimits

0x210b,	// (0x00030ecc) sctrl_sk_top_pane_ParamLimits

0x220e,	// (0x00030fcf) popup_fep_tooltip_window

0x9efd,	// (0x00038cbe) aid_size_cell_widget_grid_ParamLimits

0x9f72,	// (0x00038d33) cell_ai5_widget_pane_g1_ParamLimits

0x9f72,	// (0x00038d33) cell_ai5_widget_pane_g1

0x9fc6,	// (0x00038d87) cell_ai5_widget_pane_g6_ParamLimits

0x9fd2,	// (0x00038d93) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe29,	// (0x0003ebea) cell_ai5_widget_pane_g_ParamLimits

0xfe29,	// (0x0003ebea) cell_ai5_widget_pane_g

0xa104,	// (0x00038ec5) cell_ai5_widget_pane_t10_ParamLimits

0xa104,	// (0x00038ec5) cell_ai5_widget_pane_t10

0xa122,	// (0x00038ee3) grid_ai5_widget_pane_ParamLimits

0xa1c4,	// (0x00038f85) cell_contacts_ai5_widget_pane_ParamLimits

0xa1c4,	// (0x00038f85) cell_contacts_ai5_widget_pane

0xa3ae,	// (0x0003916f) popup_discreet_window_t3_ParamLimits

0xa3ae,	// (0x0003916f) popup_discreet_window_t3

0xceee,	// (0x0003bcaf) popup_fshwr2_char_preview_window_ParamLimits

0xceee,	// (0x0003bcaf) popup_fshwr2_char_preview_window

0xf2e8,	// (0x0003e0a9) tmo_note_info_pane_t1

0xf2fd,	// (0x0003e0be) tmo_note_info_pane_t2

0xf314,	// (0x0003e0d5) tmo_note_info_pane_t3

0xa5c4,	// (0x00039385) tmo_note_info_pane_t4

0xa5d6,	// (0x00039397) tmo_note_info_pane_t5

0x0004,

0xfeb0,	// (0x0003ec71) tmo_note_info_pane_t

0xa5e8,	// (0x000393a9) list_tmo_link_pane_ParamLimits

0xa5f5,	// (0x000393b6) scroll_pane_cp20_ParamLimits

0x3498,	// (0x00032259) bg_popup_fep_char_preview_window_cp01

0xa639,	// (0x000393fa) popup_fshwr2_char_preview_window_t1

0xa647,	// (0x00039408) popup_candi_list_indi_window_g1

0xa650,	// (0x00039411) bg_cell_contacts_ai5_widget_pane

0xa65c,	// (0x0003941d) cell_contacts_ai5_widget_pane_g1

0x7fa8,	// (0x00036d69) cell_contacts_ai5_widget_pane_g2

0xa66f,	// (0x00039430) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebb,	// (0x0003ec7c) cell_contacts_ai5_widget_pane_g

0xa681,	// (0x00039442) cell_contacts_ai5_widget_pane_t1

0x3df8,	// (0x00032bb9) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf38e,	// (0x0003e14f) settings_container_pane

0x4a7f,	// (0x00033840) listscroll_set_pane_copy1

0x6feb,	// (0x00035dac) scroll_pane_cp121_copy1

0xa704,	// (0x000394c5) set_content_pane_copy1

0xf39a,	// (0x0003e15b) aid_height_set_list_copy1_ParamLimits

0xf39a,	// (0x0003e15b) aid_height_set_list_copy1

0x66a5,	// (0x00035466) aid_size_parent_copy1_ParamLimits

0x66a5,	// (0x00035466) aid_size_parent_copy1

0xf3a6,	// (0x0003e167) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf3a6,	// (0x0003e167) button_value_adjust_pane_cp6_copy1

0x4dbf,	// (0x00033b80) list_highlight_pane_cp2_copy1_ParamLimits

0x4dbf,	// (0x00033b80) list_highlight_pane_cp2_copy1

0xf3ba,	// (0x0003e17b) list_set_pane_copy1_ParamLimits

0xf3ba,	// (0x0003e17b) list_set_pane_copy1

0xf329,	// (0x0003e0ea) main_pane_set_t1_copy1_ParamLimits

0xf329,	// (0x0003e0ea) main_pane_set_t1_copy1

0xf363,	// (0x0003e124) main_pane_set_t2_copy1_ParamLimits

0xf363,	// (0x0003e124) main_pane_set_t2_copy1

0xf467,	// (0x0003e228) main_pane_set_t3_copy1

0xf475,	// (0x0003e236) main_pane_set_t4_copy1

0xf382,	// (0x0003e143) set_content_pane_g1_copy1_ParamLimits

0xf382,	// (0x0003e143) set_content_pane_g1_copy1

0xf483,	// (0x0003e244) setting_code_pane_copy1

0xa7fd,	// (0x000395be) setting_slider_graphic_pane_copy1

0xa7fd,	// (0x000395be) setting_slider_pane_copy1

0xa7fd,	// (0x000395be) setting_text_pane_copy1

0xa7fd,	// (0x000395be) setting_volume_pane_copy1

0xf483,	// (0x0003e244) settings_code_pane_cp2_copy1

0xf48b,	// (0x0003e24c) settings_code_pane_cp_copy1_ParamLimits

0xf48b,	// (0x0003e24c) settings_code_pane_cp_copy1

0xcf06,	// (0x0003bcc7) volume_set_pane_copy1

0xf49f,	// (0x0003e260) volume_set_pane_g10_copy1

0xf4a7,	// (0x0003e268) volume_set_pane_g1_copy1

0xf4af,	// (0x0003e270) volume_set_pane_g2_copy1

0xf4b7,	// (0x0003e278) volume_set_pane_g3_copy1

0xf4bf,	// (0x0003e280) volume_set_pane_g4_copy1

0xf4c7,	// (0x0003e288) volume_set_pane_g5_copy1

0xf4cf,	// (0x0003e290) volume_set_pane_g6_copy1

0xf4d7,	// (0x0003e298) volume_set_pane_g7_copy1

0xf4df,	// (0x0003e2a0) volume_set_pane_g8_copy1

0xf4e7,	// (0x0003e2a8) volume_set_pane_g9_copy1

0x358c,	// (0x0003234d) bg_set_opt_pane_cp_copy1_ParamLimits

0x358c,	// (0x0003234d) bg_set_opt_pane_cp_copy1

0x29cf,	// (0x00031790) setting_slider_pane_t1_copy1_ParamLimits

0x29cf,	// (0x00031790) setting_slider_pane_t1_copy1

0xcf0e,	// (0x0003bccf) setting_slider_pane_t2_copy1_ParamLimits

0xcf0e,	// (0x0003bccf) setting_slider_pane_t2_copy1

0xcf28,	// (0x0003bce9) setting_slider_pane_t3_copy1_ParamLimits

0xcf28,	// (0x0003bce9) setting_slider_pane_t3_copy1

0xcf40,	// (0x0003bd01) slider_set_pane_copy1_ParamLimits

0xcf40,	// (0x0003bd01) slider_set_pane_copy1

0x3e53,	// (0x00032c14) set_opt_bg_pane_g1_copy2

0x3e5b,	// (0x00032c1c) set_opt_bg_pane_g2_copy2

0xa869,	// (0x0003962a) set_opt_bg_pane_g3_copy2

0x3e6b,	// (0x00032c2c) set_opt_bg_pane_g4_copy2

0x3e73,	// (0x00032c34) set_opt_bg_pane_g5_copy2

0x3e7b,	// (0x00032c3c) set_opt_bg_pane_g6_copy2

0xf4ef,	// (0x0003e2b0) set_opt_bg_pane_g7_copy2

0xa87b,	// (0x0003963c) set_opt_bg_pane_g8_copy2

0xa885,	// (0x00039646) set_opt_bg_pane_g9_copy2

0xa88f,	// (0x00039650) aid_size_touch_slider_mark_copy1_ParamLimits

0xa88f,	// (0x00039650) aid_size_touch_slider_mark_copy1

0xa8a3,	// (0x00039664) slider_set_pane_g1_copy1

0xa8ac,	// (0x0003966d) slider_set_pane_g2_copy1

0x6a6e,	// (0x0003582f) slider_set_pane_g3_copy1_ParamLimits

0x6a6e,	// (0x0003582f) slider_set_pane_g3_copy1

0x6a82,	// (0x00035843) slider_set_pane_g4_copy1_ParamLimits

0x6a82,	// (0x00035843) slider_set_pane_g4_copy1

0x6a9a,	// (0x0003585b) slider_set_pane_g5_copy1_ParamLimits

0x6a9a,	// (0x0003585b) slider_set_pane_g5_copy1

0x6a6e,	// (0x0003582f) slider_set_pane_g6_copy1_ParamLimits

0x6a6e,	// (0x0003582f) slider_set_pane_g6_copy1

0xf4f7,	// (0x0003e2b8) slider_set_pane_g7_copy1_ParamLimits

0xf4f7,	// (0x0003e2b8) slider_set_pane_g7_copy1

0x34ac,	// (0x0003226d) bg_set_opt_pane_cp2_copy1

0xa8ca,	// (0x0003968b) setting_slider_graphic_pane_g1_copy1

0xf50d,	// (0x0003e2ce) setting_slider_graphic_pane_t1_copy1

0xf51d,	// (0x0003e2de) setting_slider_graphic_pane_t2_copy1

0xf52d,	// (0x0003e2ee) slider_set_pane_cp_copy1

0xa903,	// (0x000396c4) input_focus_pane_cp1_copy1

0xa90c,	// (0x000396cd) list_set_text_pane_copy1

0xa914,	// (0x000396d5) setting_text_pane_g1_copy1

0xcf56,	// (0x0003bd17) set_text_pane_t1_copy1

0xa903,	// (0x000396c4) input_focus_pane_cp2_copy1

0xa914,	// (0x000396d5) setting_code_pane_g1_copy1

0xf535,	// (0x0003e2f6) setting_code_pane_t1_copy1

0x6e16,	// (0x00035bd7) list_set_graphic_pane_copy1

0x34ac,	// (0x0003226d) bg_set_opt_pane_cp4_copy1

0xd49f,	// (0x0003c260) list_set_graphic_pane_g1_copy1_ParamLimits

0xd49f,	// (0x0003c260) list_set_graphic_pane_g1_copy1

0xf543,	// (0x0003e304) list_set_graphic_pane_g2_copy1

0xd4b7,	// (0x0003c278) list_set_graphic_pane_t1_copy1_ParamLimits

0xd4b7,	// (0x0003c278) list_set_graphic_pane_t1_copy1

0x790a,	// (0x000366cb) rs_clock_indi_pane_g1

0xa945,	// (0x00039706) rs_clock_indi_pane_t1

0xa953,	// (0x00039714) rs_indi_pane

0xa95b,	// (0x0003971c) rs_indi_pane_g1

0xa964,	// (0x00039725) rs_indi_pane_g2

0xa96d,	// (0x0003972e) rs_indi_pane_g3

0x0002,

0xfec2,	// (0x0003ec83) rs_indi_pane_g

0x4a7f,	// (0x00033840) bg_popup_preview_window_pane_cp03

0xa976,	// (0x00039737) popup_fep_tooltip_window_t1

0x8586,	// (0x00037347) popup_note2_window_g2_ParamLimits

0x8586,	// (0x00037347) popup_note2_window_g2

0x0001,

0xfc5b,	// (0x0003ea1c) popup_note2_window_g_ParamLimits

0xfc5b,	// (0x0003ea1c) popup_note2_window_g

0x8a81,	// (0x00037842) bg_popup_sub_pane_cp11_ParamLimits

0x8a8e,	// (0x0003784f) cell_ai3_links_pane_g1_ParamLimits

0x8aa5,	// (0x00037866) cell_ai3_links_pane_t1

0xcf56,	// (0x0003bd17) set_text_pane_t1_copy1_ParamLimits

0x4990,	// (0x00033751) cell_graphic_popup_pane_cp2_ParamLimits

0x4990,	// (0x00033751) cell_graphic_popup_pane_cp2

0xa984,	// (0x00039745) cell_graphic_popup_pane_g1_cp2

0x3b43,	// (0x00032904) cell_graphic_popup_pane_g2_cp2

0xa98c,	// (0x0003974d) cell_graphic_popup_pane_g3_cp2

0xa994,	// (0x00039755) cell_graphic_popup_pane_t2_cp2

0x3b54,	// (0x00032915) grid_highlight_pane_cp3_cp2

0x4198,	// (0x00032f59) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3df8,	// (0x00032bb9) main_tmo_pane_ParamLimits

0xe5ea,	// (0x0003d3ab) popup_tmo_big_image_note_window

0x9f61,	// (0x00038d22) cell_ai5_widget_list_pane

0x9f69,	// (0x00038d2a) cell_ai5_widget_lrg_icon_pane

0xf2e8,	// (0x0003e0a9) tmo_note_info_pane_t1_ParamLimits

0xf2fd,	// (0x0003e0be) tmo_note_info_pane_t2_ParamLimits

0xf314,	// (0x0003e0d5) tmo_note_info_pane_t3_ParamLimits

0xa5c4,	// (0x00039385) tmo_note_info_pane_t4_ParamLimits

0xa5d6,	// (0x00039397) tmo_note_info_pane_t5_ParamLimits

0xfeb0,	// (0x0003ec71) tmo_note_info_pane_t_ParamLimits

0xf38e,	// (0x0003e14f) settings_container_pane_ParamLimits

0xa8fb,	// (0x000396bc) indicator_popup_pane_cp5

0xa8fb,	// (0x000396bc) indicator_popup_pane_cp6

0x6e16,	// (0x00035bd7) list_set_graphic_pane_copy1_ParamLimits

0x3498,	// (0x00032259) bg_popup_window_pane_cp23

0xa9a2,	// (0x00039763) popup_tmo_big_image_note_window_g1

0xa9ac,	// (0x0003976d) popup_tmo_big_image_note_window_t1

0xa9bc,	// (0x0003977d) popup_tmo_big_image_note_window_t2

0xa9cc,	// (0x0003978d) popup_tmo_big_image_note_window_t3

0x0002,

0xfec9,	// (0x0003ec8a) popup_tmo_big_image_note_window_t

0x790a,	// (0x000366cb) cell_ai5_widget_lrg_icon_pane_g1

0xa9dc,	// (0x0003979d) cell_ai5_widget_lrg_icon_pane_t1

0xa9ea,	// (0x000397ab) cell_ai5_widget_list_row_pane_ParamLimits

0xa9ea,	// (0x000397ab) cell_ai5_widget_list_row_pane

0xaa03,	// (0x000397c4) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xaa03,	// (0x000397c4) cell_ai5_widget_list_row_pane_g1

0xaa10,	// (0x000397d1) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xaa10,	// (0x000397d1) cell_ai5_widget_list_row_pane_t1

0xaa41,	// (0x00039802) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xaa41,	// (0x00039802) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed0,	// (0x0003ec91) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed0,	// (0x0003ec91) cell_ai5_widget_list_row_pane_t

0x02c1,	// (0x0002f082) main_fep_vtchi_ss_pane

0x2a44,	// (0x00031805) popup_fep_char_pre_window

0x2a4c,	// (0x0003180d) popup_fep_ituss_window

0x2a6d,	// (0x0003182e) popup_fep_vkbss_window

0xaa69,	// (0x0003982a) grid_vkbss_keypad_pane_ParamLimits

0xaa69,	// (0x0003982a) grid_vkbss_keypad_pane

0xaa79,	// (0x0003983a) ituss_keypad_pane

0x2a98,	// (0x00031859) aid_vkbss_key_offset_ParamLimits

0x2a98,	// (0x00031859) aid_vkbss_key_offset

0x2aa4,	// (0x00031865) cell_vkbss_key_pane_ParamLimits

0x2aa4,	// (0x00031865) cell_vkbss_key_pane

0xaa89,	// (0x0003984a) bg_cell_vkbss_key_g1_ParamLimits

0xaa89,	// (0x0003984a) bg_cell_vkbss_key_g1

0xaa95,	// (0x00039856) cell_vkbss_key_3p_pane_ParamLimits

0xaa95,	// (0x00039856) cell_vkbss_key_3p_pane

0xaaaf,	// (0x00039870) cell_vkbss_key_g1_ParamLimits

0xaaaf,	// (0x00039870) cell_vkbss_key_g1

0xaac9,	// (0x0003988a) cell_vkbss_key_t1_ParamLimits

0xaac9,	// (0x0003988a) cell_vkbss_key_t1

0x2aba,	// (0x0003187b) cell_ituss_key_pane_ParamLimits

0x2aba,	// (0x0003187b) cell_ituss_key_pane

0xaaf4,	// (0x000398b5) bg_cell_ituss_key_g1_ParamLimits

0xaaf4,	// (0x000398b5) bg_cell_ituss_key_g1

0xab00,	// (0x000398c1) cell_ituss_key_pane_g1_ParamLimits

0xab00,	// (0x000398c1) cell_ituss_key_pane_g1

0xab1a,	// (0x000398db) cell_ituss_key_pane_g2_ParamLimits

0xab1a,	// (0x000398db) cell_ituss_key_pane_g2

0x0001,

0xfed7,	// (0x0003ec98) cell_ituss_key_pane_g_ParamLimits

0xfed7,	// (0x0003ec98) cell_ituss_key_pane_g

0xab48,	// (0x00039909) cell_ituss_key_t1_ParamLimits

0xab48,	// (0x00039909) cell_ituss_key_t1

0xab82,	// (0x00039943) cell_ituss_key_t2_ParamLimits

0xab82,	// (0x00039943) cell_ituss_key_t2

0xabb3,	// (0x00039974) cell_ituss_key_t3_ParamLimits

0xabb3,	// (0x00039974) cell_ituss_key_t3

0xabed,	// (0x000399ae) cell_ituss_key_t4_ParamLimits

0xabed,	// (0x000399ae) cell_ituss_key_t4

0x0003,

0xfedc,	// (0x0003ec9d) cell_ituss_key_t_ParamLimits

0xfedc,	// (0x0003ec9d) cell_ituss_key_t

0xac27,	// (0x000399e8) cell_vkbss_key_3p_pane_g1

0xac2f,	// (0x000399f0) cell_vkbss_key_3p_pane_g2

0xac37,	// (0x000399f8) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee5,	// (0x0003eca6) cell_vkbss_key_3p_pane_g

0x3498,	// (0x00032259) bg_popup_fep_char_preview_window_cp02

0xac3f,	// (0x00039a00) popup_fep_char_pre_window_t1

0xf1bf,	// (0x0003df80) main_ai5_sk_pane

0xa650,	// (0x00039411) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa65c,	// (0x0003941d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7fa8,	// (0x00036d69) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa66f,	// (0x00039430) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebb,	// (0x0003ec7c) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa681,	// (0x00039442) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3df8,	// (0x00032bb9) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf54b,	// (0x0003e30c) main_ai5_sk_pane_g1

0x577b,	// (0x0003453c) popup_query_code_window_g1

0x2a62,	// (0x00031823) popup_fep_vkb_icf_pane

0x2a76,	// (0x00031837) popup_fep_vtchi_icf_pane

0x3df8,	// (0x00032bb9) bg_icf_pane

0xac57,	// (0x00039a18) list_vkb_icf_pane

0x3df8,	// (0x00032bb9) bg_icf_pane_cp01

0xac63,	// (0x00039a24) vtchi_icf_list_pane

0xac74,	// (0x00039a35) list_vkb_icf_pane_t1_ParamLimits

0xac74,	// (0x00039a35) list_vkb_icf_pane_t1

0xac8a,	// (0x00039a4b) vtchi_icf_list_pane_t1_ParamLimits

0xac8a,	// (0x00039a4b) vtchi_icf_list_pane_t1

0x2a4c,	// (0x0003180d) popup_fep_ituss_window_ParamLimits

0x2a76,	// (0x00031837) popup_fep_vtchi_icf_pane_ParamLimits

0xaa79,	// (0x0003983a) ituss_keypad_pane_ParamLimits

0x2a8c,	// (0x0003184d) ituss_sks_pane

0x3df8,	// (0x00032bb9) bg_icf_pane_ParamLimits

0x2a35,	// (0x000317f6) icf_edit_indi_pane_ParamLimits

0x2a35,	// (0x000317f6) icf_edit_indi_pane

0xac57,	// (0x00039a18) list_vkb_icf_pane_ParamLimits

0x3df8,	// (0x00032bb9) bg_icf_pane_cp01_ParamLimits

0x2a35,	// (0x000317f6) icf_edit_indi_pane_cp01_ParamLimits

0x2a35,	// (0x000317f6) icf_edit_indi_pane_cp01

0xac6b,	// (0x00039a2c) vtchi_query_pane

0x7b88,	// (0x00036949) icf_edit_indi_pane_g1_ParamLimits

0x7b88,	// (0x00036949) icf_edit_indi_pane_g1

0xad0e,	// (0x00039acf) icf_edit_indi_pane_g2_ParamLimits

0xad0e,	// (0x00039acf) icf_edit_indi_pane_g2

0x0001,

0xfefd,	// (0x0003ecbe) icf_edit_indi_pane_g_ParamLimits

0xfefd,	// (0x0003ecbe) icf_edit_indi_pane_g

0xad1d,	// (0x00039ade) icf_edit_indi_pane_t1

0xaca4,	// (0x00039a65) bg_input_focus_pane_cp042

0x3d27,	// (0x00032ae8) vtchi_button_pane

0xacad,	// (0x00039a6e) vtchi_query_pane_t1

0xacbb,	// (0x00039a7c) vtchi_query_pane_t2

0xacc9,	// (0x00039a8a) vtchi_query_pane_t3

0x0002,

0xfeec,	// (0x0003ecad) vtchi_query_pane_t

0x3498,	// (0x00032259) bg_button_pane_cp13

0xacd7,	// (0x00039a98) vtchi_button_pane_g1

0xacdf,	// (0x00039aa0) ituss_sks_pane_g1

0xacea,	// (0x00039aab) ituss_sks_pane_g2

0x0001,

0xfef3,	// (0x0003ecb4) ituss_sks_pane_g

0xacf2,	// (0x00039ab3) ituss_sks_pane_t1

0xad00,	// (0x00039ac1) ituss_sks_pane_t2

0x0001,

0xfef8,	// (0x0003ecb9) ituss_sks_pane_t

0x7381,	// (0x00036142) indicator_nsta_pane_cp_g1

0x738a,	// (0x0003614b) indicator_nsta_pane_cp_g2

0x7392,	// (0x00036153) indicator_nsta_pane_cp_g3

0x739a,	// (0x0003615b) indicator_nsta_pane_cp_g4

0x739a,	// (0x0003615b) indicator_nsta_pane_cp_g5

0x739a,	// (0x0003615b) indicator_nsta_pane_cp_g6

0x0005,

0xfa99,	// (0x0003e85a) indicator_nsta_pane_cp_g

0xefd1,	// (0x0003dd92) cell_graphic2_pane_t2_ParamLimits

0xefd1,	// (0x0003dd92) cell_graphic2_pane_t2

0x0001,

0xfdb2,	// (0x0003eb73) cell_graphic2_pane_t_ParamLimits

0xfdb2,	// (0x0003eb73) cell_graphic2_pane_t

0xf007,	// (0x0003ddc8) cell_graphic2_control_pane_t1

0xd473,	// (0x0003c234) signal_pane_g3_ParamLimits

0xd473,	// (0x0003c234) signal_pane_g3

0xd487,	// (0x0003c248) signal_pane_g4_ParamLimits

0xd487,	// (0x0003c248) signal_pane_g4

0xaa53,	// (0x00039814) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xaa53,	// (0x00039814) cell_ai5_widget_list_row_pane_t3

0xab36,	// (0x000398f7) cell_ituss_key_pane_t1_ParamLimits

0xab36,	// (0x000398f7) cell_ituss_key_pane_t1

0x53ce,	// (0x0003418f) form_field_data_wide_pane_vc_t2_ParamLimits

0x53ce,	// (0x0003418f) form_field_data_wide_pane_vc_t2

0x53e2,	// (0x000341a3) form_field_data_wide_pane_vc_t3_ParamLimits

0x53e2,	// (0x000341a3) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x0003e5cb) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x0003e5cb) form_field_data_wide_pane_vc_t

0x702d,	// (0x00035dee) form_field_slider_wide_pane_vc_t3_ParamLimits

0x702d,	// (0x00035dee) form_field_slider_wide_pane_vc_t3

0x710b,	// (0x00035ecc) form_field_popup_wide_pane_vc_t2_ParamLimits

0x710b,	// (0x00035ecc) form_field_popup_wide_pane_vc_t2

0x7122,	// (0x00035ee3) form_field_popup_wide_pane_vc_t3_ParamLimits

0x7122,	// (0x00035ee3) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa88,	// (0x0003e849) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa88,	// (0x0003e849) form_field_popup_wide_pane_vc_t

0xce6e,	// (0x0003bc2f) aid_fshwr2_btn_pane_ParamLimits

0xce7f,	// (0x0003bc40) aid_fshwr2_syb_pane_ParamLimits

0xce90,	// (0x0003bc51) aid_fshwr2_txt_pane_ParamLimits

0x2196,	// (0x00030f57) fshwr2_bg_pane_ParamLimits

0xce9c,	// (0x0003bc5d) fshwr2_func_candi_pane_ParamLimits

0xcebb,	// (0x0003bc7c) fshwr2_hwr_syb_pane_ParamLimits

0xced6,	// (0x0003bc97) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small

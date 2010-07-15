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

#include "aknlayoutscalable_elaf_pql_av_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0002eadf };

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
0x021f,	// (0x0002ecfe) Screen

0x0229,	// (0x0002ed08) application_window_ParamLimits

0x0229,	// (0x0002ed08) application_window

0x4256,	// (0x00032d35) screen_g1

0x0237,	// (0x0002ed16) area_bottom_pane_ParamLimits

0x0237,	// (0x0002ed16) area_bottom_pane

0x42e4,	// (0x00032dc3) area_top_pane_ParamLimits

0x42e4,	// (0x00032dc3) area_top_pane

0x435c,	// (0x00032e3b) main_pane_ParamLimits

0x435c,	// (0x00032e3b) main_pane

0x4415,	// (0x00032ef4) misc_graphics

0x126e,	// (0x0002fd4d) battery_pane_ParamLimits

0x126e,	// (0x0002fd4d) battery_pane

0x809b,	// (0x00036b7a) bg_status_flat_pane_g8

0x80a3,	// (0x00036b82) bg_status_flat_pane_g9

0x77d2,	// (0x000362b1) context_pane_ParamLimits

0x77d2,	// (0x000362b1) context_pane

0x13c8,	// (0x0002fea7) navi_pane_ParamLimits

0x13c8,	// (0x0002fea7) navi_pane

0x143d,	// (0x0002ff1c) signal_pane_ParamLimits

0x143d,	// (0x0002ff1c) signal_pane

0x0008,

0xf872,	// (0x0003e351) bg_status_flat_pane_g

0x14c9,	// (0x0002ffa8) status_pane_g1_ParamLimits

0x14c9,	// (0x0002ffa8) status_pane_g1

0x14d5,	// (0x0002ffb4) status_pane_g2_ParamLimits

0x14d5,	// (0x0002ffb4) status_pane_g2

0x7844,	// (0x00036323) status_pane_g3_ParamLimits

0x7844,	// (0x00036323) status_pane_g3

0x0004,

0xf7a5,	// (0x0003e284) status_pane_g_ParamLimits

0xf7a5,	// (0x0003e284) status_pane_g

0x14e1,	// (0x0002ffc0) title_pane_ParamLimits

0x14e1,	// (0x0002ffc0) title_pane

0x153c,	// (0x0003001b) uni_indicator_pane_ParamLimits

0x153c,	// (0x0003001b) uni_indicator_pane

0x7729,	// (0x00036208) bg_list_pane_ParamLimits

0x7729,	// (0x00036208) bg_list_pane

0xd7c5,	// (0x0003c2a4) find_pane

0xd7cd,	// (0x0003c2ac) listscroll_app_pane_ParamLimits

0xd7cd,	// (0x0003c2ac) listscroll_app_pane

0x7749,	// (0x00036228) listscroll_form_pane

0xd7dd,	// (0x0003c2bc) listscroll_gen_pane_ParamLimits

0xd7dd,	// (0x0003c2bc) listscroll_gen_pane

0x5b70,	// (0x0003464f) listscroll_set_pane

0xd7f2,	// (0x0003c2d1) main_idle_act_pane

0x7594,	// (0x00036073) main_idle_trad_pane

0x7594,	// (0x00036073) main_list_empty_pane

0x5b78,	// (0x00034657) main_midp_pane

0x7763,	// (0x00036242) main_pane_g1_ParamLimits

0x7763,	// (0x00036242) main_pane_g1

0xd805,	// (0x0003c2e4) popup_ai_message_window_ParamLimits

0xd805,	// (0x0003c2e4) popup_ai_message_window

0xd889,	// (0x0003c368) popup_fep_china_uni_window_ParamLimits

0xd889,	// (0x0003c368) popup_fep_china_uni_window

0x5c58,	// (0x00034737) popup_fep_japan_candidate_window_ParamLimits

0x5c58,	// (0x00034737) popup_fep_japan_candidate_window

0x5c76,	// (0x00034755) popup_fep_japan_predictive_window_ParamLimits

0x5c76,	// (0x00034755) popup_fep_japan_predictive_window

0xd8c7,	// (0x0003c3a6) popup_find_window

0xd8e0,	// (0x0003c3bf) popup_grid_graphic_window_ParamLimits

0xd8e0,	// (0x0003c3bf) popup_grid_graphic_window

0x5ccd,	// (0x000347ac) popup_large_graphic_colour_window

0xd95c,	// (0x0003c43b) popup_menu_window_ParamLimits

0xd95c,	// (0x0003c43b) popup_menu_window

0xdaba,	// (0x0003c599) popup_note_image_window

0xda82,	// (0x0003c561) popup_note_wait_window_ParamLimits

0xda82,	// (0x0003c561) popup_note_wait_window

0xdad0,	// (0x0003c5af) popup_note_window_ParamLimits

0xdad0,	// (0x0003c5af) popup_note_window

0xdb64,	// (0x0003c643) popup_query_code_window_ParamLimits

0xdb64,	// (0x0003c643) popup_query_code_window

0x5e8a,	// (0x00034969) popup_query_data_code_window_ParamLimits

0x5e8a,	// (0x00034969) popup_query_data_code_window

0xdb9c,	// (0x0003c67b) popup_query_data_window_ParamLimits

0xdb9c,	// (0x0003c67b) popup_query_data_window

0xdc10,	// (0x0003c6ef) popup_query_sat_info_window_ParamLimits

0xdc10,	// (0x0003c6ef) popup_query_sat_info_window

0xdc9d,	// (0x0003c77c) popup_snote_single_graphic_window_ParamLimits

0xdc9d,	// (0x0003c77c) popup_snote_single_graphic_window

0xdc9d,	// (0x0003c77c) popup_snote_single_text_window_ParamLimits

0xdc9d,	// (0x0003c77c) popup_snote_single_text_window

0x5ef9,	// (0x000349d8) popup_sub_window_general

0x5ffd,	// (0x00034adc) popup_window_general_ParamLimits

0x5ffd,	// (0x00034adc) popup_window_general

0x7771,	// (0x00036250) power_save_pane

0xd696,	// (0x0003c175) control_pane_g1_ParamLimits

0xd696,	// (0x0003c175) control_pane_g1

0x5a2d,	// (0x0003450c) control_pane_g2_ParamLimits

0x5a2d,	// (0x0003450c) control_pane_g2

0x771b,	// (0x000361fa) control_pane_g3_ParamLimits

0x771b,	// (0x000361fa) control_pane_g3

0x0007,

0xf78d,	// (0x0003e26c) control_pane_g_ParamLimits

0xf78d,	// (0x0003e26c) control_pane_g

0xd6cb,	// (0x0003c1aa) control_pane_t1_ParamLimits

0xd6cb,	// (0x0003c1aa) control_pane_t1

0xd727,	// (0x0003c206) control_pane_t2_ParamLimits

0xd727,	// (0x0003c206) control_pane_t2

0x0002,

0xf79e,	// (0x0003e27d) control_pane_t_ParamLimits

0xf79e,	// (0x0003e27d) control_pane_t

0x76c3,	// (0x000361a2) navi_navi_volume_pane_cp1

0x76cb,	// (0x000361aa) status_small_icon_pane

0x76d3,	// (0x000361b2) status_small_pane_g1_ParamLimits

0x76d3,	// (0x000361b2) status_small_pane_g1

0x1157,	// (0x0002fc36) status_small_pane_g2_ParamLimits

0x1157,	// (0x0002fc36) status_small_pane_g2

0x1163,	// (0x0002fc42) status_small_pane_g3_ParamLimits

0x1163,	// (0x0002fc42) status_small_pane_g3

0x116f,	// (0x0002fc4e) status_small_pane_g4_ParamLimits

0x116f,	// (0x0002fc4e) status_small_pane_g4

0x117b,	// (0x0002fc5a) status_small_pane_g5_ParamLimits

0x117b,	// (0x0002fc5a) status_small_pane_g5

0x7707,	// (0x000361e6) status_small_pane_g6_ParamLimits

0x7707,	// (0x000361e6) status_small_pane_g6

0x0007,

0xf77c,	// (0x0003e25b) status_small_pane_g_ParamLimits

0xf77c,	// (0x0003e25b) status_small_pane_g

0x11aa,	// (0x0002fc89) status_small_pane_t1

0x11c4,	// (0x0002fca3) status_small_wait_pane_ParamLimits

0x11c4,	// (0x0002fca3) status_small_wait_pane

0x0fe9,	// (0x0002fac8) aid_levels_signal_ParamLimits

0x0fe9,	// (0x0002fac8) aid_levels_signal

0x0ffd,	// (0x0002fadc) signal_pane_g1_ParamLimits

0x0ffd,	// (0x0002fadc) signal_pane_g1

0x1017,	// (0x0002faf6) signal_pane_g2_ParamLimits

0x1017,	// (0x0002faf6) signal_pane_g2

0x0003,

0xf70d,	// (0x0003e1ec) signal_pane_g_ParamLimits

0xf70d,	// (0x0003e1ec) signal_pane_g

0x53b3,	// (0x00033e92) context_pane_g1

0x02a0,	// (0x0002ed7f) title_pane_g1

0x02e2,	// (0x0002edc1) title_pane_t1

0x4571,	// (0x00033050) title_pane_t2

0x4597,	// (0x00033076) title_pane_t3

0x0002,

0xf557,	// (0x0003e036) title_pane_t

0x1562,	// (0x00030041) aid_levels_battery_ParamLimits

0x1562,	// (0x00030041) aid_levels_battery

0x157a,	// (0x00030059) battery_pane_g1_ParamLimits

0x157a,	// (0x00030059) battery_pane_g1

0x1595,	// (0x00030074) battery_pane_g2_ParamLimits

0x1595,	// (0x00030074) battery_pane_g2

0x0001,

0xf7b0,	// (0x0003e28f) battery_pane_g_ParamLimits

0xf7b0,	// (0x0003e28f) battery_pane_g

0x173b,	// (0x0003021a) uni_indicator_pane_g1

0x1751,	// (0x00030230) uni_indicator_pane_g2

0x1767,	// (0x00030246) uni_indicator_pane_g3

0x0005,

0xf91a,	// (0x0003e3f9) uni_indicator_pane_g

0x4d42,	// (0x00033821) navi_icon_pane_ParamLimits

0x4d42,	// (0x00033821) navi_icon_pane

0x4415,	// (0x00032ef4) navi_midp_pane

0x4415,	// (0x00032ef4) navi_navi_pane

0x4d42,	// (0x00033821) navi_text_pane_ParamLimits

0x4d42,	// (0x00033821) navi_text_pane

0x4256,	// (0x00032d35) status_small_wait_pane_g1

0x4936,	// (0x00033415) status_small_wait_pane_g2

0x0001,

0xf915,	// (0x0003e3f4) status_small_wait_pane_g

0x16e1,	// (0x000301c0) navi_navi_icon_text_pane

0x16fb,	// (0x000301da) navi_navi_pane_g1_ParamLimits

0x16fb,	// (0x000301da) navi_navi_pane_g1

0x16e9,	// (0x000301c8) navi_navi_pane_g2_ParamLimits

0x16e9,	// (0x000301c8) navi_navi_pane_g2

0x0001,

0xf8e3,	// (0x0003e3c2) navi_navi_pane_g_ParamLimits

0xf8e3,	// (0x0003e3c2) navi_navi_pane_g

0x170d,	// (0x000301ec) navi_navi_tabs_pane

0x16e1,	// (0x000301c0) navi_navi_text_pane

0x16e1,	// (0x000301c0) navi_navi_volume_pane

0x85e1,	// (0x000370c0) navi_text_pane_t1

0x85d5,	// (0x000370b4) navi_icon_pane_g1

0x8529,	// (0x00037008) navi_navi_text_pane_t1

0x627c,	// (0x00034d5b) navi_navi_volume_pane_g1

0xdeeb,	// (0x0003c9ca) volume_small_pane

0x163d,	// (0x0003011c) navi_navi_icon_text_pane_g1

0x1645,	// (0x00030124) navi_navi_icon_text_pane_t1

0x80e3,	// (0x00036bc2) navi_tabs_2_long_pane

0x80e3,	// (0x00036bc2) navi_tabs_2_pane

0x80e3,	// (0x00036bc2) navi_tabs_3_long_pane

0x80e3,	// (0x00036bc2) navi_tabs_3_pane

0x80e3,	// (0x00036bc2) navi_tabs_4_pane

0xdecb,	// (0x0003c9aa) tabs_2_active_pane_ParamLimits

0xdecb,	// (0x0003c9aa) tabs_2_active_pane

0xdedb,	// (0x0003c9ba) tabs_2_passive_pane_ParamLimits

0xdedb,	// (0x0003c9ba) tabs_2_passive_pane

0xde99,	// (0x0003c978) tabs_3_active_pane_ParamLimits

0xde99,	// (0x0003c978) tabs_3_active_pane

0xdea9,	// (0x0003c988) tabs_3_passive_pane_ParamLimits

0xdea9,	// (0x0003c988) tabs_3_passive_pane

0xdeba,	// (0x0003c999) tabs_3_passive_pane_cp_ParamLimits

0xdeba,	// (0x0003c999) tabs_3_passive_pane_cp

0xde55,	// (0x0003c934) tabs_4_active_pane_ParamLimits

0xde55,	// (0x0003c934) tabs_4_active_pane

0xde66,	// (0x0003c945) tabs_4_passive_pane_ParamLimits

0xde66,	// (0x0003c945) tabs_4_passive_pane

0xde77,	// (0x0003c956) tabs_4_passive_pane_cp_ParamLimits

0xde77,	// (0x0003c956) tabs_4_passive_pane_cp

0xde88,	// (0x0003c967) tabs_4_passive_pane_cp2_ParamLimits

0xde88,	// (0x0003c967) tabs_4_passive_pane_cp2

0xde35,	// (0x0003c914) tabs_2_long_active_pane_ParamLimits

0xde35,	// (0x0003c914) tabs_2_long_active_pane

0xde45,	// (0x0003c924) tabs_2_long_passive_pane_ParamLimits

0xde45,	// (0x0003c924) tabs_2_long_passive_pane

0xddfe,	// (0x0003c8dd) tabs_3_long_active_pane_ParamLimits

0xddfe,	// (0x0003c8dd) tabs_3_long_active_pane

0xde11,	// (0x0003c8f0) tabs_3_long_passive_pane_ParamLimits

0xde11,	// (0x0003c8f0) tabs_3_long_passive_pane

0xde22,	// (0x0003c901) tabs_3_long_passive_pane_cp_ParamLimits

0xde22,	// (0x0003c901) tabs_3_long_passive_pane_cp

0x6137,	// (0x00034c16) volume_small_pane_g1

0x6140,	// (0x00034c1f) volume_small_pane_g2

0x6149,	// (0x00034c28) volume_small_pane_g3

0x6152,	// (0x00034c31) volume_small_pane_g4

0x615b,	// (0x00034c3a) volume_small_pane_g5

0x6164,	// (0x00034c43) volume_small_pane_g6

0x616d,	// (0x00034c4c) volume_small_pane_g7

0x6176,	// (0x00034c55) volume_small_pane_g8

0x617f,	// (0x00034c5e) volume_small_pane_g9

0x6188,	// (0x00034c67) volume_small_pane_g10

0x0009,

0xf8af,	// (0x0003e38e) volume_small_pane_g

0x476e,	// (0x0003324d) bg_active_tab_pane_cp2_ParamLimits

0x476e,	// (0x0003324d) bg_active_tab_pane_cp2

0x45b7,	// (0x00033096) tabs_3_active_pane_g1

0x036f,	// (0x0002ee4e) tabs_3_active_pane_t1

0x476e,	// (0x0003324d) bg_passive_tab_pane_cp2_ParamLimits

0x476e,	// (0x0003324d) bg_passive_tab_pane_cp2

0x45b7,	// (0x00033096) tabs_3_passive_pane_g1

0x036f,	// (0x0002ee4e) tabs_3_passive_pane_t1

0x476e,	// (0x0003324d) bg_active_tab_pane_cp3_ParamLimits

0x476e,	// (0x0003324d) bg_active_tab_pane_cp3

0x8b0f,	// (0x000375ee) tabs_4_active_pane_g1

0x0385,	// (0x0002ee64) tabs_4_active_pane_t1

0x476e,	// (0x0003324d) bg_passive_tab_pane_cp3_ParamLimits

0x476e,	// (0x0003324d) bg_passive_tab_pane_cp3

0x8b0f,	// (0x000375ee) tabs_4_1_passive_pane_g1

0x0385,	// (0x0002ee64) tabs_4_1_passive_pane_t1

0x5b78,	// (0x00034657) list_highlight_pane_cp2

0x17bc,	// (0x0003029b) list_set_pane_ParamLimits

0x17bc,	// (0x0003029b) list_set_pane

0x184a,	// (0x00030329) main_pane_set_t1_ParamLimits

0x184a,	// (0x00030329) main_pane_set_t1

0x186a,	// (0x00030349) main_pane_set_t2_ParamLimits

0x186a,	// (0x00030349) main_pane_set_t2

0x187e,	// (0x0003035d) main_pane_set_t3_ParamLimits

0x187e,	// (0x0003035d) main_pane_set_t3

0x1890,	// (0x0003036f) main_pane_set_t4_ParamLimits

0x1890,	// (0x0003036f) main_pane_set_t4

0x0003,

0xf97f,	// (0x0003e45e) main_pane_set_t_ParamLimits

0xf97f,	// (0x0003e45e) main_pane_set_t

0x18a2,	// (0x00030381) setting_code_pane

0x18aa,	// (0x00030389) setting_slider_graphic_pane

0x18aa,	// (0x00030389) setting_slider_pane

0x18aa,	// (0x00030389) setting_text_pane

0x18aa,	// (0x00030389) setting_volume_pane

0xd5b1,	// (0x0003c090) volume_set_pane

0x45a9,	// (0x00033088) bg_set_opt_pane_cp

0x45c7,	// (0x000330a6) setting_slider_pane_t1

0xd5b9,	// (0x0003c098) setting_slider_pane_t2

0xd5d2,	// (0x0003c0b1) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003e03d) setting_slider_pane_t

0x460d,	// (0x000330ec) slider_set_pane

0x4415,	// (0x00032ef4) bg_set_opt_pane_cp2

0x4623,	// (0x00033102) setting_slider_graphic_pane_g1

0xd5e9,	// (0x0003c0c8) setting_slider_graphic_pane_t1

0xd5f8,	// (0x0003c0d7) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0003e044) setting_slider_graphic_pane_t

0xd607,	// (0x0003c0e6) slider_set_pane_cp

0x4415,	// (0x00032ef4) input_focus_pane_cp1

0x8a52,	// (0x00037531) list_set_text_pane

0x4256,	// (0x00032d35) setting_text_pane_g1

0x4415,	// (0x00032ef4) input_focus_pane_cp2

0x4256,	// (0x00032d35) setting_code_pane_g1

0x4652,	// (0x00033131) setting_code_pane_t1

0xccc8,	// (0x0003b7a7) set_text_pane_t1_ParamLimits

0xccc8,	// (0x0003b7a7) set_text_pane_t1

0x4cf1,	// (0x000337d0) set_opt_bg_pane_g1

0x4cf9,	// (0x000337d8) set_opt_bg_pane_g2

0x177c,	// (0x0003025b) set_opt_bg_pane_g3

0x4d09,	// (0x000337e8) set_opt_bg_pane_g4

0x4d11,	// (0x000337f0) set_opt_bg_pane_g5

0x4d19,	// (0x000337f8) set_opt_bg_pane_g6

0x1784,	// (0x00030263) set_opt_bg_pane_g7

0x178c,	// (0x0003026b) set_opt_bg_pane_g8

0x1794,	// (0x00030273) set_opt_bg_pane_g9

0x0008,

0xf96c,	// (0x0003e44b) set_opt_bg_pane_g

0x8a45,	// (0x00037524) slider_set_pane_g1

0x62f1,	// (0x00034dd0) slider_set_pane_g2

0x0006,

0xf95d,	// (0x0003e43c) slider_set_pane_g

0xdef4,	// (0x0003c9d3) volume_set_pane_g1

0xdefc,	// (0x0003c9db) volume_set_pane_g2

0xdf04,	// (0x0003c9e3) volume_set_pane_g3

0xdf0c,	// (0x0003c9eb) volume_set_pane_g4

0xdf14,	// (0x0003c9f3) volume_set_pane_g5

0xdf1c,	// (0x0003c9fb) volume_set_pane_g6

0xdf24,	// (0x0003ca03) volume_set_pane_g7

0xdf2c,	// (0x0003ca0b) volume_set_pane_g8

0xdf34,	// (0x0003ca13) volume_set_pane_g9

0xdf3c,	// (0x0003ca1b) volume_set_pane_g10

0x0009,

0xf935,	// (0x0003e414) volume_set_pane_g

0x03b5,	// (0x0002ee94) indicator_pane_ParamLimits

0x03b5,	// (0x0002ee94) indicator_pane

0x03dd,	// (0x0002eebc) main_idle_pane_g2_ParamLimits

0x03dd,	// (0x0002eebc) main_idle_pane_g2

0x040d,	// (0x0002eeec) main_pane_idle_g1_ParamLimits

0x040d,	// (0x0002eeec) main_pane_idle_g1

0x4660,	// (0x0003313f) popup_clock_digital_analogue_window_ParamLimits

0x4660,	// (0x0003313f) popup_clock_digital_analogue_window

0x0432,	// (0x0002ef11) soft_indicator_pane_ParamLimits

0x0432,	// (0x0002ef11) soft_indicator_pane

0x044c,	// (0x0002ef2b) wallpaper_pane_ParamLimits

0x044c,	// (0x0002ef2b) wallpaper_pane

0x4256,	// (0x00032d35) wallpaper_pane_g1

0x045e,	// (0x0002ef3d) indicator_pane_g1_ParamLimits

0x045e,	// (0x0002ef3d) indicator_pane_g1

0x8b7a,	// (0x00037659) navi_navi_icon_text_pane_srt_g1

0x468e,	// (0x0003316d) soft_indicator_pane_t1

0x46a8,	// (0x00033187) aid_ps_area_pane

0x0477,	// (0x0002ef56) aid_ps_clock_pane

0x46b9,	// (0x00033198) aid_ps_indicator_pane

0x46c5,	// (0x000331a4) indicator_ps_pane_ParamLimits

0x46c5,	// (0x000331a4) indicator_ps_pane

0x46d4,	// (0x000331b3) power_save_pane_g1_ParamLimits

0x46d4,	// (0x000331b3) power_save_pane_g1

0x46e0,	// (0x000331bf) power_save_pane_g2_ParamLimits

0x46e0,	// (0x000331bf) power_save_pane_g2

0x4260,	// (0x00032d3f) aid_navinavi_width_pane

0x46a8,	// (0x00033187) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0003e049) power_save_pane_g_ParamLimits

0xf56a,	// (0x0003e049) power_save_pane_g

0x46ee,	// (0x000331cd) power_save_pane_t1_ParamLimits

0x46ee,	// (0x000331cd) power_save_pane_t1

0x0477,	// (0x0002ef56) aid_ps_clock_pane_ParamLimits

0x46b9,	// (0x00033198) aid_ps_indicator_pane_ParamLimits

0x4700,	// (0x000331df) power_save_pane_t4_ParamLimits

0x4700,	// (0x000331df) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003e04e) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003e04e) power_save_pane_t

0x472a,	// (0x00033209) power_save_t3_ParamLimits

0x472a,	// (0x00033209) power_save_t3

0x4715,	// (0x000331f4) power_save_t2_ParamLimits

0x4715,	// (0x000331f4) power_save_t2

0x473f,	// (0x0003321e) indicator_ps_pane_g1

0x0483,	// (0x0002ef62) ai_gene_pane_ParamLimits

0x0483,	// (0x0002ef62) ai_gene_pane

0x049a,	// (0x0002ef79) ai_links_pane_ParamLimits

0x049a,	// (0x0002ef79) ai_links_pane

0x04ac,	// (0x0002ef8b) indicator_pane_cp1_ParamLimits

0x04ac,	// (0x0002ef8b) indicator_pane_cp1

0x04bb,	// (0x0002ef9a) main_pane_idle_g1_cp_ParamLimits

0x04bb,	// (0x0002ef9a) main_pane_idle_g1_cp

0x4748,	// (0x00033227) popup_ai_links_title_window

0x04d3,	// (0x0002efb2) soft_indicator_pane_cp1_ParamLimits

0x04d3,	// (0x0002efb2) soft_indicator_pane_cp1

0x889b,	// (0x0003737a) ai_links_pane_g1

0x88a4,	// (0x00037383) grid_ai_links_pane

0x1732,	// (0x00030211) ai_gene_pane_1

0x8889,	// (0x00037368) ai_gene_pane_2

0x8892,	// (0x00037371) list_highlight_pane_cp4

0x1716,	// (0x000301f5) cell_ai_link_pane_ParamLimits

0x1716,	// (0x000301f5) cell_ai_link_pane

0x8881,	// (0x00037360) cell_ai_link_pane_g1

0x4936,	// (0x00033415) cell_ai_link_pane_g2

0x0001,

0xf910,	// (0x0003e3ef) cell_ai_link_pane_g

0x4415,	// (0x00032ef4) grid_highlight_cp2

0x4415,	// (0x00032ef4) bg_popup_sub_pane_cp1

0x475f,	// (0x0003323e) popup_ai_links_title_window_t1

0x87d3,	// (0x000372b2) ai_gene_pane_1_g1_ParamLimits

0x87d3,	// (0x000372b2) ai_gene_pane_1_g1

0x87df,	// (0x000372be) ai_gene_pane_1_g2_ParamLimits

0x87df,	// (0x000372be) ai_gene_pane_1_g2

0x0001,

0xf906,	// (0x0003e3e5) ai_gene_pane_1_g_ParamLimits

0xf906,	// (0x0003e3e5) ai_gene_pane_1_g

0x87ec,	// (0x000372cb) ai_gene_pane_1_t1_ParamLimits

0x87ec,	// (0x000372cb) ai_gene_pane_1_t1

0x8820,	// (0x000372ff) grid_ai_soft_ind_pane

0x87be,	// (0x0003729d) ai_gene_pane_2_t1_ParamLimits

0x87be,	// (0x0003729d) ai_gene_pane_2_t1

0x04e7,	// (0x0002efc6) main_pane_empty_t1_ParamLimits

0x04e7,	// (0x0002efc6) main_pane_empty_t1

0x0504,	// (0x0002efe3) main_pane_empty_t2_ParamLimits

0x0504,	// (0x0002efe3) main_pane_empty_t2

0x051c,	// (0x0002effb) main_pane_empty_t3_ParamLimits

0x051c,	// (0x0002effb) main_pane_empty_t3

0x052f,	// (0x0002f00e) main_pane_empty_t4_ParamLimits

0x052f,	// (0x0002f00e) main_pane_empty_t4

0x0542,	// (0x0002f021) main_pane_empty_t5_ParamLimits

0x0542,	// (0x0002f021) main_pane_empty_t5

0x0004,

0xf574,	// (0x0003e053) main_pane_empty_t_ParamLimits

0xf574,	// (0x0003e053) main_pane_empty_t

0x4d42,	// (0x00033821) bg_popup_window_pane_ParamLimits

0x4d42,	// (0x00033821) bg_popup_window_pane

0x8538,	// (0x00037017) find_popup_pane_cp2_ParamLimits

0x8538,	// (0x00037017) find_popup_pane_cp2

0x8544,	// (0x00037023) heading_pane_ParamLimits

0x8544,	// (0x00037023) heading_pane

0x4415,	// (0x00032ef4) bg_popup_sub_pane

0x1662,	// (0x00030141) bg_popup_window_pane_g1_ParamLimits

0x1662,	// (0x00030141) bg_popup_window_pane_g1

0x1671,	// (0x00030150) bg_popup_window_pane_g2_ParamLimits

0x1671,	// (0x00030150) bg_popup_window_pane_g2

0x167d,	// (0x0003015c) bg_popup_window_pane_g3_ParamLimits

0x167d,	// (0x0003015c) bg_popup_window_pane_g3

0x1689,	// (0x00030168) bg_popup_window_pane_g4_ParamLimits

0x1689,	// (0x00030168) bg_popup_window_pane_g4

0x1698,	// (0x00030177) bg_popup_window_pane_g5_ParamLimits

0x1698,	// (0x00030177) bg_popup_window_pane_g5

0x16a8,	// (0x00030187) bg_popup_window_pane_g6_ParamLimits

0x16a8,	// (0x00030187) bg_popup_window_pane_g6

0x16b4,	// (0x00030193) bg_popup_window_pane_g7_ParamLimits

0x16b4,	// (0x00030193) bg_popup_window_pane_g7

0x16c3,	// (0x000301a2) bg_popup_window_pane_g8_ParamLimits

0x16c3,	// (0x000301a2) bg_popup_window_pane_g8

0x16d2,	// (0x000301b1) bg_popup_window_pane_g9_ParamLimits

0x16d2,	// (0x000301b1) bg_popup_window_pane_g9

0x851d,	// (0x00036ffc) bg_popup_window_pane_g10_ParamLimits

0x851d,	// (0x00036ffc) bg_popup_window_pane_g10

0x0009,

0xf8ce,	// (0x0003e3ad) bg_popup_window_pane_g_ParamLimits

0xf8ce,	// (0x0003e3ad) bg_popup_window_pane_g

0x84d4,	// (0x00036fb3) bg_popup_heading_pane_ParamLimits

0x84d4,	// (0x00036fb3) bg_popup_heading_pane

0x63be,	// (0x00034e9d) tabs_4_passive_pane_cp_srt_ParamLimits

0x63be,	// (0x00034e9d) tabs_4_passive_pane_cp_srt

0x63d0,	// (0x00034eaf) tabs_4_passive_pane_srt_ParamLimits

0x84e8,	// (0x00036fc7) heading_pane_g2

0x63d0,	// (0x00034eaf) tabs_4_passive_pane_srt

0x79ac,	// (0x0003648b) bg_passive_tab_pane_cp3_srt_ParamLimits

0x79ac,	// (0x0003648b) bg_passive_tab_pane_cp3_srt

0x84f0,	// (0x00036fcf) heading_pane_t1_ParamLimits

0x84f0,	// (0x00036fcf) heading_pane_t1

0x8507,	// (0x00036fe6) heading_pane_t2_ParamLimits

0x8507,	// (0x00036fe6) heading_pane_t2

0x0001,

0xf8c9,	// (0x0003e3a8) heading_pane_t_ParamLimits

0xf8c9,	// (0x0003e3a8) heading_pane_t

0x8063,	// (0x00036b42) bg_popup_heading_pane_g1

0x80f4,	// (0x00036bd3) bg_popup_heading_pane_g2

0x80fc,	// (0x00036bdb) bg_popup_heading_pane_g3

0x8104,	// (0x00036be3) bg_popup_heading_pane_g4

0x810c,	// (0x00036beb) bg_popup_heading_pane_g5

0x8114,	// (0x00036bf3) bg_popup_heading_pane_g6

0x811c,	// (0x00036bfb) bg_popup_heading_pane_g7

0x8124,	// (0x00036c03) bg_popup_heading_pane_g8

0x812c,	// (0x00036c0b) bg_popup_heading_pane_g9

0x0008,

0xf885,	// (0x0003e364) bg_popup_heading_pane_g

0x792c,	// (0x0003640b) bg_popup_sub_pane_g1

0x7934,	// (0x00036413) bg_popup_sub_pane_g2

0x793c,	// (0x0003641b) bg_popup_sub_pane_g3

0x7944,	// (0x00036423) bg_popup_sub_pane_g4

0x794c,	// (0x0003642b) bg_popup_sub_pane_g5

0x7954,	// (0x00036433) bg_popup_sub_pane_g6

0x795c,	// (0x0003643b) bg_popup_sub_pane_g7

0x7964,	// (0x00036443) bg_popup_sub_pane_g8

0x796c,	// (0x0003644b) bg_popup_sub_pane_g9

0x0008,

0xf85f,	// (0x0003e33e) bg_popup_sub_pane_g

0x476e,	// (0x0003324d) bg_popup_window_pane_cp5_ParamLimits

0x476e,	// (0x0003324d) bg_popup_window_pane_cp5

0x478a,	// (0x00033269) popup_note_window_g1_ParamLimits

0x478a,	// (0x00033269) popup_note_window_g1

0x4796,	// (0x00033275) popup_note_window_t1_ParamLimits

0x4796,	// (0x00033275) popup_note_window_t1

0x47ac,	// (0x0003328b) popup_note_window_t2_ParamLimits

0x47ac,	// (0x0003328b) popup_note_window_t2

0x47c2,	// (0x000332a1) popup_note_window_t3_ParamLimits

0x47c2,	// (0x000332a1) popup_note_window_t3

0x47d8,	// (0x000332b7) popup_note_window_t4_ParamLimits

0x47d8,	// (0x000332b7) popup_note_window_t4

0x4800,	// (0x000332df) popup_note_window_t5_ParamLimits

0x4800,	// (0x000332df) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003e05e) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003e05e) popup_note_window_t

0x484a,	// (0x00033329) bg_popup_window_pane_cp6_ParamLimits

0x484a,	// (0x00033329) bg_popup_window_pane_cp6

0x7fdf,	// (0x00036abe) popup_note_image_window_g1_ParamLimits

0x7fdf,	// (0x00036abe) popup_note_image_window_g1

0x7feb,	// (0x00036aca) popup_note_image_window_g2_ParamLimits

0x7feb,	// (0x00036aca) popup_note_image_window_g2

0x0001,

0xf853,	// (0x0003e332) popup_note_image_window_g_ParamLimits

0xf853,	// (0x0003e332) popup_note_image_window_g

0x8004,	// (0x00036ae3) popup_note_image_window_t1_ParamLimits

0x8004,	// (0x00036ae3) popup_note_image_window_t1

0x801d,	// (0x00036afc) popup_note_image_window_t2_ParamLimits

0x801d,	// (0x00036afc) popup_note_image_window_t2

0x8036,	// (0x00036b15) popup_note_image_window_t3_ParamLimits

0x8036,	// (0x00036b15) popup_note_image_window_t3

0x0002,

0xf858,	// (0x0003e337) popup_note_image_window_t_ParamLimits

0xf858,	// (0x0003e337) popup_note_image_window_t

0x7eca,	// (0x000369a9) bg_popup_window_pane_cp7_ParamLimits

0x7eca,	// (0x000369a9) bg_popup_window_pane_cp7

0x7efa,	// (0x000369d9) popup_note_wait_window_g1_ParamLimits

0x7efa,	// (0x000369d9) popup_note_wait_window_g1

0x7f06,	// (0x000369e5) popup_note_wait_window_g2_ParamLimits

0x7f06,	// (0x000369e5) popup_note_wait_window_g2

0x0002,

0xf841,	// (0x0003e320) popup_note_wait_window_g_ParamLimits

0xf841,	// (0x0003e320) popup_note_wait_window_g

0x7f1e,	// (0x000369fd) popup_note_wait_window_t1_ParamLimits

0x7f1e,	// (0x000369fd) popup_note_wait_window_t1

0x7f45,	// (0x00036a24) popup_note_wait_window_t2_ParamLimits

0x7f45,	// (0x00036a24) popup_note_wait_window_t2

0x7f62,	// (0x00036a41) popup_note_wait_window_t3_ParamLimits

0x7f62,	// (0x00036a41) popup_note_wait_window_t3

0x7f75,	// (0x00036a54) popup_note_wait_window_t4_ParamLimits

0x7f75,	// (0x00036a54) popup_note_wait_window_t4

0x0004,

0xf848,	// (0x0003e327) popup_note_wait_window_t_ParamLimits

0xf848,	// (0x0003e327) popup_note_wait_window_t

0x7f9a,	// (0x00036a79) wait_bar_pane_ParamLimits

0x7f9a,	// (0x00036a79) wait_bar_pane

0x4415,	// (0x00032ef4) wait_anim_pane

0x4415,	// (0x00032ef4) wait_border_pane

0x4256,	// (0x00032d35) wait_anim_pane_g1

0x4256,	// (0x00032d35) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0003e1e7) wait_anim_pane_g

0x7e7a,	// (0x00036959) wait_border_pane_g1

0x7e83,	// (0x00036962) wait_border_pane_g2

0x7e8c,	// (0x0003696b) wait_border_pane_g3

0x0002,

0xf83a,	// (0x0003e319) wait_border_pane_g

0x7cea,	// (0x000367c9) bg_popup_window_pane_cp16_ParamLimits

0x7cea,	// (0x000367c9) bg_popup_window_pane_cp16

0x7dea,	// (0x000368c9) indicator_popup_pane_cp4_ParamLimits

0x7dea,	// (0x000368c9) indicator_popup_pane_cp4

0x7dfe,	// (0x000368dd) popup_query_data_window_t1_ParamLimits

0x7dfe,	// (0x000368dd) popup_query_data_window_t1

0x7e10,	// (0x000368ef) popup_query_data_window_t2_ParamLimits

0x7e10,	// (0x000368ef) popup_query_data_window_t2

0x7e29,	// (0x00036908) popup_query_data_window_t3_ParamLimits

0x7e29,	// (0x00036908) popup_query_data_window_t3

0x0002,

0xf833,	// (0x0003e312) popup_query_data_window_t_ParamLimits

0xf833,	// (0x0003e312) popup_query_data_window_t

0x7e43,	// (0x00036922) query_popup_data_pane_ParamLimits

0x7e43,	// (0x00036922) query_popup_data_pane

0x7e57,	// (0x00036936) query_popup_data_pane_cp1_ParamLimits

0x7e57,	// (0x00036936) query_popup_data_pane_cp1

0x7cea,	// (0x000367c9) bg_popup_window_pane_cp10_ParamLimits

0x7cea,	// (0x000367c9) bg_popup_window_pane_cp10

0x7d1c,	// (0x000367fb) indicator_popup_pane_ParamLimits

0x7d1c,	// (0x000367fb) indicator_popup_pane

0x7d3e,	// (0x0003681d) popup_query_code_window_t1_ParamLimits

0x7d3e,	// (0x0003681d) popup_query_code_window_t1

0x7d58,	// (0x00036837) popup_query_code_window_t2_ParamLimits

0x7d58,	// (0x00036837) popup_query_code_window_t2

0x7da1,	// (0x00036880) popup_query_code_window_t3_ParamLimits

0x7da1,	// (0x00036880) popup_query_code_window_t3

0x0002,

0xf82c,	// (0x0003e30b) popup_query_code_window_t_ParamLimits

0xf82c,	// (0x0003e30b) popup_query_code_window_t

0x7dd0,	// (0x000368af) query_popup_pane_ParamLimits

0x7dd0,	// (0x000368af) query_popup_pane

0x484a,	// (0x00033329) bg_popup_window_pane_cp15_ParamLimits

0x484a,	// (0x00033329) bg_popup_window_pane_cp15

0x4868,	// (0x00033347) indicator_popup_pane_cp1_ParamLimits

0x4868,	// (0x00033347) indicator_popup_pane_cp1

0x487b,	// (0x0003335a) indicator_popup_pane_cp2_ParamLimits

0x487b,	// (0x0003335a) indicator_popup_pane_cp2

0x488e,	// (0x0003336d) popup_query_data_code_window_g1_ParamLimits

0x488e,	// (0x0003336d) popup_query_data_code_window_g1

0x48a1,	// (0x00033380) popup_query_data_code_window_t1_ParamLimits

0x48a1,	// (0x00033380) popup_query_data_code_window_t1

0x48b3,	// (0x00033392) popup_query_data_code_window_t2_ParamLimits

0x48b3,	// (0x00033392) popup_query_data_code_window_t2

0x48c5,	// (0x000333a4) popup_query_data_code_window_t3_ParamLimits

0x48c5,	// (0x000333a4) popup_query_data_code_window_t3

0x48db,	// (0x000333ba) popup_query_data_code_window_t4_ParamLimits

0x48db,	// (0x000333ba) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0003e069) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0003e069) popup_query_data_code_window_t

0x5820,	// (0x000342ff) list_single_midp_graphic_pane_g3

0x48f3,	// (0x000333d2) query_popup_data_pane_cp2_ParamLimits

0x4906,	// (0x000333e5) query_popup_pane_cp2_ParamLimits

0x4906,	// (0x000333e5) query_popup_pane_cp2

0x4415,	// (0x00032ef4) bg_popup_window_pane_cp11

0x7cd6,	// (0x000367b5) heading_pane_cp5

0x4992,	// (0x00033471) listscroll_popup_info_pane

0x4415,	// (0x00032ef4) input_focus_pane_cp3

0x4919,	// (0x000333f8) query_popup_pane_t1

0x4927,	// (0x00033406) list_popup_info_pane_ParamLimits

0x4927,	// (0x00033406) list_popup_info_pane

0x4936,	// (0x00033415) listscroll_popup_info_pane_g1

0x493e,	// (0x0003341d) scroll_pane_cp7

0x4946,	// (0x00033425) popup_info_list_pane_t1_ParamLimits

0x4946,	// (0x00033425) popup_info_list_pane_t1

0x4960,	// (0x0003343f) popup_info_list_pane_t2_ParamLimits

0x4960,	// (0x0003343f) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003e072) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003e072) popup_info_list_pane_t

0x4415,	// (0x00032ef4) bg_popup_window_pane_cp12

0x8b94,	// (0x00037673) find_popup_pane

0x45a9,	// (0x00033088) bg_popup_window_pane_cp3

0x497a,	// (0x00033459) heading_pane_cp3

0x4986,	// (0x00033465) listscroll_popup_graphic_pane

0x4415,	// (0x00032ef4) bg_popup_window_pane_cp4

0x05a5,	// (0x0002f084) heading_pane_cp4

0x4992,	// (0x00033471) listscroll_popup_colour_pane

0x499a,	// (0x00033479) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x499a,	// (0x00033479) cell_large_graphic_colour_none_popup_pane

0x05ad,	// (0x0002f08c) grid_large_graphic_colour_popup_pane_ParamLimits

0x05ad,	// (0x0002f08c) grid_large_graphic_colour_popup_pane

0x05c9,	// (0x0002f0a8) listscroll_popup_colour_pane_g1_ParamLimits

0x05c9,	// (0x0002f0a8) listscroll_popup_colour_pane_g1

0x05e0,	// (0x0002f0bf) listscroll_popup_colour_pane_g2_ParamLimits

0x05e0,	// (0x0002f0bf) listscroll_popup_colour_pane_g2

0x49aa,	// (0x00033489) listscroll_popup_colour_pane_g3_ParamLimits

0x49aa,	// (0x00033489) listscroll_popup_colour_pane_g3

0x05f4,	// (0x0002f0d3) listscroll_popup_colour_pane_g4_ParamLimits

0x05f4,	// (0x0002f0d3) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0003e077) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0003e077) listscroll_popup_colour_pane_g

0x49ba,	// (0x00033499) scroll_pane_cp6_ParamLimits

0x49ba,	// (0x00033499) scroll_pane_cp6

0x0603,	// (0x0002f0e2) cell_large_graphic_colour_popup_pane_ParamLimits

0x0603,	// (0x0002f0e2) cell_large_graphic_colour_popup_pane

0x49cc,	// (0x000334ab) cell_large_graphic_colour_none_popup_pane_t1

0x4415,	// (0x00032ef4) grid_highlight_pane_cp5

0x49db,	// (0x000334ba) cell_large_graphic_colour_popup_pane_g1

0x49e3,	// (0x000334c2) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003e080) cell_large_graphic_colour_popup_pane_g

0x49eb,	// (0x000334ca) cell_large_graphic_colour_popup_pane_g2_copy1

0x49f4,	// (0x000334d3) grid_highlight_pane_cp4

0x49fc,	// (0x000334db) bg_popup_window_pane_cp8_ParamLimits

0x49fc,	// (0x000334db) bg_popup_window_pane_cp8

0x4a17,	// (0x000334f6) popup_snote_single_text_window_g1_ParamLimits

0x4a17,	// (0x000334f6) popup_snote_single_text_window_g1

0x4a29,	// (0x00033508) popup_snote_single_text_window_t1_ParamLimits

0x4a29,	// (0x00033508) popup_snote_single_text_window_t1

0x4a3c,	// (0x0003351b) popup_snote_single_text_window_t2_ParamLimits

0x4a3c,	// (0x0003351b) popup_snote_single_text_window_t2

0x4a4f,	// (0x0003352e) popup_snote_single_text_window_t3_ParamLimits

0x4a4f,	// (0x0003352e) popup_snote_single_text_window_t3

0x4a88,	// (0x00033567) popup_snote_single_text_window_t4_ParamLimits

0x4a88,	// (0x00033567) popup_snote_single_text_window_t4

0x4abc,	// (0x0003359b) popup_snote_single_text_window_t5_ParamLimits

0x4abc,	// (0x0003359b) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003e085) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003e085) popup_snote_single_text_window_t

0x4aeb,	// (0x000335ca) bg_popup_window_pane_cp9_ParamLimits

0x4aeb,	// (0x000335ca) bg_popup_window_pane_cp9

0x4a17,	// (0x000334f6) popup_snote_single_graphic_window_g1_ParamLimits

0x4a17,	// (0x000334f6) popup_snote_single_graphic_window_g1

0x4af9,	// (0x000335d8) popup_snote_single_graphic_window_g2_ParamLimits

0x4af9,	// (0x000335d8) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0003e090) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0003e090) popup_snote_single_graphic_window_g

0x4b05,	// (0x000335e4) popup_snote_single_graphic_window_t1_ParamLimits

0x4b05,	// (0x000335e4) popup_snote_single_graphic_window_t1

0x4b18,	// (0x000335f7) popup_snote_single_graphic_window_t2_ParamLimits

0x4b18,	// (0x000335f7) popup_snote_single_graphic_window_t2

0x4a4f,	// (0x0003352e) popup_snote_single_graphic_window_t3_ParamLimits

0x4a4f,	// (0x0003352e) popup_snote_single_graphic_window_t3

0x4a88,	// (0x00033567) popup_snote_single_graphic_window_t4_ParamLimits

0x4a88,	// (0x00033567) popup_snote_single_graphic_window_t4

0x4abc,	// (0x0003359b) popup_snote_single_graphic_window_t5_ParamLimits

0x4abc,	// (0x0003359b) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003e095) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003e095) popup_snote_single_graphic_window_t

0x19a5,	// (0x00030484) grid_graphic_popup_pane_ParamLimits

0x19a5,	// (0x00030484) grid_graphic_popup_pane

0x19c8,	// (0x000304a7) listscroll_popup_graphic_pane_g1_ParamLimits

0x19c8,	// (0x000304a7) listscroll_popup_graphic_pane_g1

0x19dc,	// (0x000304bb) listscroll_popup_graphic_pane_g2_ParamLimits

0x19dc,	// (0x000304bb) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a9,	// (0x0003e488) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a9,	// (0x0003e488) listscroll_popup_graphic_pane_g

0x8b4c,	// (0x0003762b) scroll_pane_cp5

0x1960,	// (0x0003043f) cell_graphic_popup_pane_ParamLimits

0x1960,	// (0x0003043f) cell_graphic_popup_pane

0x8b17,	// (0x000375f6) cell_graphic_popup_pane_g1

0x8b1f,	// (0x000375fe) cell_graphic_popup_pane_g2

0x49eb,	// (0x000334ca) cell_graphic_popup_pane_g3

0x0002,

0xf9a2,	// (0x0003e481) cell_graphic_popup_pane_g

0x8b28,	// (0x00037607) cell_graphic_popup_pane_t2

0x49f4,	// (0x000334d3) grid_highlight_pane_cp3

0x4b3d,	// (0x0003361c) list_gen_pane_ParamLimits

0x4b3d,	// (0x0003361c) list_gen_pane

0x4b66,	// (0x00033645) scroll_pane

0x1933,	// (0x00030412) bg_list_pane_g1_ParamLimits

0x1933,	// (0x00030412) bg_list_pane_g1

0x8ac6,	// (0x000375a5) bg_list_pane_g2_ParamLimits

0x8ac6,	// (0x000375a5) bg_list_pane_g2

0x8ad9,	// (0x000375b8) bg_list_pane_g3_ParamLimits

0x8ad9,	// (0x000375b8) bg_list_pane_g3

0x8aeb,	// (0x000375ca) bg_list_pane_g4_ParamLimits

0x8aeb,	// (0x000375ca) bg_list_pane_g4

0x194e,	// (0x0003042d) bg_list_pane_g5_ParamLimits

0x194e,	// (0x0003042d) bg_list_pane_g5

0x0004,

0xf997,	// (0x0003e476) bg_list_pane_g_ParamLimits

0xf997,	// (0x0003e476) bg_list_pane_g

0x18e9,	// (0x000303c8) list_double2_graphic_large_graphic_pane_ParamLimits

0x18e9,	// (0x000303c8) list_double2_graphic_large_graphic_pane

0x18e9,	// (0x000303c8) list_double2_graphic_pane_ParamLimits

0x18e9,	// (0x000303c8) list_double2_graphic_pane

0x18e9,	// (0x000303c8) list_double2_large_graphic_pane_ParamLimits

0x18e9,	// (0x000303c8) list_double2_large_graphic_pane

0x18e9,	// (0x000303c8) list_double2_pane_ParamLimits

0x18e9,	// (0x000303c8) list_double2_pane

0x18e9,	// (0x000303c8) list_double_graphic_heading_pane_ParamLimits

0x18e9,	// (0x000303c8) list_double_graphic_heading_pane

0x18e9,	// (0x000303c8) list_double_graphic_pane_ParamLimits

0x18e9,	// (0x000303c8) list_double_graphic_pane

0x18e9,	// (0x000303c8) list_double_heading_pane_ParamLimits

0x18e9,	// (0x000303c8) list_double_heading_pane

0x18e9,	// (0x000303c8) list_double_large_graphic_pane_ParamLimits

0x18e9,	// (0x000303c8) list_double_large_graphic_pane

0x18e9,	// (0x000303c8) list_double_number_pane_ParamLimits

0x18e9,	// (0x000303c8) list_double_number_pane

0x18e9,	// (0x000303c8) list_double_pane_ParamLimits

0x18e9,	// (0x000303c8) list_double_pane

0x18e9,	// (0x000303c8) list_double_time_pane_ParamLimits

0x18e9,	// (0x000303c8) list_double_time_pane

0x18e9,	// (0x000303c8) list_setting_number_pane_ParamLimits

0x18e9,	// (0x000303c8) list_setting_number_pane

0x18e9,	// (0x000303c8) list_setting_pane_ParamLimits

0x18e9,	// (0x000303c8) list_setting_pane

0xdf5a,	// (0x0003ca39) list_single_2graphic_pane_ParamLimits

0xdf5a,	// (0x0003ca39) list_single_2graphic_pane

0xdf5a,	// (0x0003ca39) list_single_graphic_heading_pane_ParamLimits

0xdf5a,	// (0x0003ca39) list_single_graphic_heading_pane

0xdf5a,	// (0x0003ca39) list_single_graphic_pane_ParamLimits

0xdf5a,	// (0x0003ca39) list_single_graphic_pane

0xdf5a,	// (0x0003ca39) list_single_heading_pane_ParamLimits

0xdf5a,	// (0x0003ca39) list_single_heading_pane

0x18d7,	// (0x000303b6) list_single_large_graphic_pane_ParamLimits

0x18d7,	// (0x000303b6) list_single_large_graphic_pane

0xdf5a,	// (0x0003ca39) list_single_number_heading_pane_ParamLimits

0xdf5a,	// (0x0003ca39) list_single_number_heading_pane

0xdf5a,	// (0x0003ca39) list_single_number_pane_ParamLimits

0xdf5a,	// (0x0003ca39) list_single_number_pane

0xdf5a,	// (0x0003ca39) list_single_pane_ParamLimits

0xdf5a,	// (0x0003ca39) list_single_pane

0x4415,	// (0x00032ef4) list_highlight_pane_cp1

0x4bee,	// (0x000336cd) list_single_pane_g1_ParamLimits

0x4bee,	// (0x000336cd) list_single_pane_g1

0x4bfa,	// (0x000336d9) list_single_pane_g2_ParamLimits

0x4bfa,	// (0x000336d9) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0003e0b1) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0003e0b1) list_single_pane_g

0x3523,	// (0x00032002) list_single_pane_t1_ParamLimits

0x3523,	// (0x00032002) list_single_pane_t1

0x4bee,	// (0x000336cd) list_single_number_pane_g1_ParamLimits

0x4bee,	// (0x000336cd) list_single_number_pane_g1

0x4bfa,	// (0x000336d9) list_single_number_pane_g2_ParamLimits

0x4bfa,	// (0x000336d9) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0003e0b1) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0003e0b1) list_single_number_pane_g

0x35a0,	// (0x0003207f) list_single_number_pane_t1_ParamLimits

0x35a0,	// (0x0003207f) list_single_number_pane_t1

0xd282,	// (0x0003bd61) list_single_number_pane_t2_ParamLimits

0xd282,	// (0x0003bd61) list_single_number_pane_t2

0x0001,

0xf958,	// (0x0003e437) list_single_number_pane_t_ParamLimits

0xf958,	// (0x0003e437) list_single_number_pane_t

0x35c8,	// (0x000320a7) list_single_graphic_pane_g1_ParamLimits

0x35c8,	// (0x000320a7) list_single_graphic_pane_g1

0x4bee,	// (0x000336cd) list_single_graphic_pane_g2_ParamLimits

0x4bee,	// (0x000336cd) list_single_graphic_pane_g2

0x4bfa,	// (0x000336d9) list_single_graphic_pane_g3_ParamLimits

0x4bfa,	// (0x000336d9) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0003e0a0) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0003e0a0) list_single_graphic_pane_g

0x35a0,	// (0x0003207f) list_single_graphic_pane_t1_ParamLimits

0x35a0,	// (0x0003207f) list_single_graphic_pane_t1

0xcce1,	// (0x0003b7c0) list_single_heading_pane_g1_ParamLimits

0xcce1,	// (0x0003b7c0) list_single_heading_pane_g1

0x4bfa,	// (0x000336d9) list_single_heading_pane_g2_ParamLimits

0x4bfa,	// (0x000336d9) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003e0a7) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003e0a7) list_single_heading_pane_g

0xccf4,	// (0x0003b7d3) list_single_heading_pane_t1_ParamLimits

0xccf4,	// (0x0003b7d3) list_single_heading_pane_t1

0xd60f,	// (0x0003c0ee) list_single_heading_pane_t2_ParamLimits

0xd60f,	// (0x0003c0ee) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0003e0ac) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0003e0ac) list_single_heading_pane_t

0x4bee,	// (0x000336cd) list_single_number_heading_pane_g1_ParamLimits

0x4bee,	// (0x000336cd) list_single_number_heading_pane_g1

0x4bfa,	// (0x000336d9) list_single_number_heading_pane_g2_ParamLimits

0x4bfa,	// (0x000336d9) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0003e0b1) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0003e0b1) list_single_number_heading_pane_g

0xcd0a,	// (0x0003b7e9) list_single_number_heading_pane_t1_ParamLimits

0xcd0a,	// (0x0003b7e9) list_single_number_heading_pane_t1

0xcd20,	// (0x0003b7ff) list_single_number_heading_pane_t2_ParamLimits

0xcd20,	// (0x0003b7ff) list_single_number_heading_pane_t2

0x3da4,	// (0x00032883) list_single_number_heading_pane_t3_ParamLimits

0x3da4,	// (0x00032883) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0003e0b6) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0003e0b6) list_single_number_heading_pane_t

0xcd32,	// (0x0003b811) list_single_graphic_heading_pane_g1_ParamLimits

0xcd32,	// (0x0003b811) list_single_graphic_heading_pane_g1

0xd621,	// (0x0003c100) list_single_graphic_heading_pane_g4_ParamLimits

0xd621,	// (0x0003c100) list_single_graphic_heading_pane_g4

0x4bfa,	// (0x000336d9) list_single_graphic_heading_pane_g5_ParamLimits

0x4bfa,	// (0x000336d9) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0003e0bd) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0003e0bd) list_single_graphic_heading_pane_g

0xcd0a,	// (0x0003b7e9) list_single_graphic_heading_pane_t1_ParamLimits

0xcd0a,	// (0x0003b7e9) list_single_graphic_heading_pane_t1

0xcd48,	// (0x0003b827) list_single_graphic_heading_pane_t2_ParamLimits

0xcd48,	// (0x0003b827) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0003e0c4) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0003e0c4) list_single_graphic_heading_pane_t

0x4bc2,	// (0x000336a1) list_single_large_graphic_pane_g1_ParamLimits

0x4bc2,	// (0x000336a1) list_single_large_graphic_pane_g1

0x4bce,	// (0x000336ad) list_single_large_graphic_pane_g2_ParamLimits

0x4bce,	// (0x000336ad) list_single_large_graphic_pane_g2

0x4bda,	// (0x000336b9) list_single_large_graphic_pane_g3_ParamLimits

0x4bda,	// (0x000336b9) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0003e0c9) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0003e0c9) list_single_large_graphic_pane_g

0x7e83,	// (0x00036962) wait_border_pane_g2_copy1

0x4be6,	// (0x000336c5) list_single_large_graphic_pane_g4_cp2

0x350d,	// (0x00031fec) list_single_large_graphic_pane_t1_ParamLimits

0x350d,	// (0x00031fec) list_single_large_graphic_pane_t1

0xd632,	// (0x0003c111) list_double_pane_g1_ParamLimits

0xd632,	// (0x0003c111) list_double_pane_g1

0xd63e,	// (0x0003c11d) list_double_pane_g2_ParamLimits

0xd63e,	// (0x0003c11d) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0003e0d0) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0003e0d0) list_double_pane_g

0xcd60,	// (0x0003b83f) list_double_pane_t1_ParamLimits

0xcd60,	// (0x0003b83f) list_double_pane_t1

0xcd76,	// (0x0003b855) list_double_pane_t2_ParamLimits

0xcd76,	// (0x0003b855) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0003e0d5) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0003e0d5) list_double_pane_t

0xcd88,	// (0x0003b867) list_double2_pane_g1_ParamLimits

0xcd88,	// (0x0003b867) list_double2_pane_g1

0xcd99,	// (0x0003b878) list_double2_pane_g2_ParamLimits

0xcd99,	// (0x0003b878) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0003e0da) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0003e0da) list_double2_pane_g

0xcda5,	// (0x0003b884) list_double2_pane_t1_ParamLimits

0xcda5,	// (0x0003b884) list_double2_pane_t1

0xcdbb,	// (0x0003b89a) list_double2_pane_t2_ParamLimits

0xcdbb,	// (0x0003b89a) list_double2_pane_t2

0x0001,

0xf600,	// (0x0003e0df) list_double2_pane_t_ParamLimits

0xf600,	// (0x0003e0df) list_double2_pane_t

0xd632,	// (0x0003c111) list_double_number_pane_g1_ParamLimits

0xd632,	// (0x0003c111) list_double_number_pane_g1

0xd63e,	// (0x0003c11d) list_double_number_pane_g2_ParamLimits

0xd63e,	// (0x0003c11d) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0003e0d0) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0003e0d0) list_double_number_pane_g

0xcdcd,	// (0x0003b8ac) list_double_number_pane_t1_ParamLimits

0xcdcd,	// (0x0003b8ac) list_double_number_pane_t1

0xcddf,	// (0x0003b8be) list_double_number_pane_t2_ParamLimits

0xcddf,	// (0x0003b8be) list_double_number_pane_t2

0xcdf5,	// (0x0003b8d4) list_double_number_pane_t3_ParamLimits

0xcdf5,	// (0x0003b8d4) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0003e0e4) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0003e0e4) list_double_number_pane_t

0x3711,	// (0x000321f0) list_double_graphic_pane_g1_ParamLimits

0x3711,	// (0x000321f0) list_double_graphic_pane_g1

0xd64a,	// (0x0003c129) list_double_graphic_pane_g2_ParamLimits

0xd64a,	// (0x0003c129) list_double_graphic_pane_g2

0xd659,	// (0x0003c138) list_double_graphic_pane_g3_ParamLimits

0xd659,	// (0x0003c138) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0003e0eb) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0003e0eb) list_double_graphic_pane_g

0xce13,	// (0x0003b8f2) list_double_graphic_pane_t1_ParamLimits

0xce13,	// (0x0003b8f2) list_double_graphic_pane_t1

0xce29,	// (0x0003b908) list_double_graphic_pane_t2_ParamLimits

0xce29,	// (0x0003b908) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0003e0f4) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0003e0f4) list_double_graphic_pane_t

0x344a,	// (0x00031f29) list_double2_graphic_pane_g1_ParamLimits

0x344a,	// (0x00031f29) list_double2_graphic_pane_g1

0x4b9b,	// (0x0003367a) list_double2_graphic_pane_g2_ParamLimits

0x4b9b,	// (0x0003367a) list_double2_graphic_pane_g2

0x4ba7,	// (0x00033686) list_double2_graphic_pane_g3_ParamLimits

0x4ba7,	// (0x00033686) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0003e0f9) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0003e0f9) list_double2_graphic_pane_g

0x3456,	// (0x00031f35) list_double2_graphic_pane_t1_ParamLimits

0x3456,	// (0x00031f35) list_double2_graphic_pane_t1

0xce3b,	// (0x0003b91a) list_double2_graphic_pane_t2_ParamLimits

0xce3b,	// (0x0003b91a) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0003e100) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0003e100) list_double2_graphic_pane_t

0xce4d,	// (0x0003b92c) list_double_large_graphic_pane_g1_ParamLimits

0xce4d,	// (0x0003b92c) list_double_large_graphic_pane_g1

0xce71,	// (0x0003b950) list_double_large_graphic_pane_g2_ParamLimits

0xce71,	// (0x0003b950) list_double_large_graphic_pane_g2

0xd63e,	// (0x0003c11d) list_double_large_graphic_pane_g3_ParamLimits

0xd63e,	// (0x0003c11d) list_double_large_graphic_pane_g3

0xce87,	// (0x0003b966) list_double_large_graphic_pane_g4_ParamLimits

0xce87,	// (0x0003b966) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0003e105) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0003e105) list_double_large_graphic_pane_g

0xce98,	// (0x0003b977) list_double_large_graphic_pane_t1_ParamLimits

0xce98,	// (0x0003b977) list_double_large_graphic_pane_t1

0xceb1,	// (0x0003b990) list_double_large_graphic_pane_t2_ParamLimits

0xceb1,	// (0x0003b990) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0003e110) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0003e110) list_double_large_graphic_pane_t

0xd665,	// (0x0003c144) list_double2_large_graphic_pane_g1_ParamLimits

0xd665,	// (0x0003c144) list_double2_large_graphic_pane_g1

0xcec3,	// (0x0003b9a2) list_double2_large_graphic_pane_g2_ParamLimits

0xcec3,	// (0x0003b9a2) list_double2_large_graphic_pane_g2

0x4ba7,	// (0x00033686) list_double2_large_graphic_pane_g3_ParamLimits

0x4ba7,	// (0x00033686) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0003e115) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0003e115) list_double2_large_graphic_pane_g

0x34a7,	// (0x00031f86) list_double2_large_graphic_pane_t1_ParamLimits

0x34a7,	// (0x00031f86) list_double2_large_graphic_pane_t1

0xced4,	// (0x0003b9b3) list_double2_large_graphic_pane_t2_ParamLimits

0xced4,	// (0x0003b9b3) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0003e11c) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0003e11c) list_double2_large_graphic_pane_t

0xcee6,	// (0x0003b9c5) list_double_heading_pane_g1_ParamLimits

0xcee6,	// (0x0003b9c5) list_double_heading_pane_g1

0xd671,	// (0x0003c150) list_double_heading_pane_g2_ParamLimits

0xd671,	// (0x0003c150) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0003e121) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0003e121) list_double_heading_pane_g

0xcef7,	// (0x0003b9d6) list_double_heading_pane_t1_ParamLimits

0xcef7,	// (0x0003b9d6) list_double_heading_pane_t1

0xcdbb,	// (0x0003b89a) list_double_heading_pane_t2_ParamLimits

0xcdbb,	// (0x0003b89a) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0003e126) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0003e126) list_double_heading_pane_t

0x3711,	// (0x000321f0) list_double_graphic_heading_pane_g1_ParamLimits

0x3711,	// (0x000321f0) list_double_graphic_heading_pane_g1

0xcee6,	// (0x0003b9c5) list_double_graphic_heading_pane_g2_ParamLimits

0xcee6,	// (0x0003b9c5) list_double_graphic_heading_pane_g2

0xd671,	// (0x0003c150) list_double_graphic_heading_pane_g3_ParamLimits

0xd671,	// (0x0003c150) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0003e12b) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0003e12b) list_double_graphic_heading_pane_g

0xcf0d,	// (0x0003b9ec) list_double_graphic_heading_pane_t1_ParamLimits

0xcf0d,	// (0x0003b9ec) list_double_graphic_heading_pane_t1

0xce3b,	// (0x0003b91a) list_double_graphic_heading_pane_t2_ParamLimits

0xce3b,	// (0x0003b91a) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0003e132) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0003e132) list_double_graphic_heading_pane_t

0xcf23,	// (0x0003ba02) list_double_time_pane_g1_ParamLimits

0xcf23,	// (0x0003ba02) list_double_time_pane_g1

0xcf34,	// (0x0003ba13) list_double_time_pane_g2_ParamLimits

0xcf34,	// (0x0003ba13) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0003e137) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0003e137) list_double_time_pane_g

0xcf40,	// (0x0003ba1f) list_double_time_pane_t1_ParamLimits

0xcf40,	// (0x0003ba1f) list_double_time_pane_t1

0xcf56,	// (0x0003ba35) list_double_time_pane_t2_ParamLimits

0xcf56,	// (0x0003ba35) list_double_time_pane_t2

0xcf68,	// (0x0003ba47) list_double_time_pane_t3_ParamLimits

0xcf68,	// (0x0003ba47) list_double_time_pane_t3

0xcf7a,	// (0x0003ba59) list_double_time_pane_t4_ParamLimits

0xcf7a,	// (0x0003ba59) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0003e13c) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0003e13c) list_double_time_pane_t

0x3b92,	// (0x00032671) list_setting_pane_g1_ParamLimits

0x3b92,	// (0x00032671) list_setting_pane_g1

0x3742,	// (0x00032221) list_setting_pane_g2_ParamLimits

0x3742,	// (0x00032221) list_setting_pane_g2

0x0001,

0xf666,	// (0x0003e145) list_setting_pane_g_ParamLimits

0xf666,	// (0x0003e145) list_setting_pane_g

0xcf8c,	// (0x0003ba6b) list_setting_pane_t1_ParamLimits

0xcf8c,	// (0x0003ba6b) list_setting_pane_t1

0xcfa6,	// (0x0003ba85) list_setting_pane_t2_ParamLimits

0xcfa6,	// (0x0003ba85) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0003e14a) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0003e14a) list_setting_pane_t

0xcfe3,	// (0x0003bac2) set_value_pane_cp_ParamLimits

0xcfe3,	// (0x0003bac2) set_value_pane_cp

0xcfef,	// (0x0003bace) list_setting_number_pane_g1_ParamLimits

0xcfef,	// (0x0003bace) list_setting_number_pane_g1

0xcffb,	// (0x0003bada) list_setting_number_pane_g2_ParamLimits

0xcffb,	// (0x0003bada) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0003e151) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0003e151) list_setting_number_pane_g

0xd007,	// (0x0003bae6) list_setting_number_pane_t1_ParamLimits

0xd007,	// (0x0003bae6) list_setting_number_pane_t1

0xd020,	// (0x0003baff) list_setting_number_pane_t2_ParamLimits

0xd020,	// (0x0003baff) list_setting_number_pane_t2

0xd03a,	// (0x0003bb19) list_setting_number_pane_t3_ParamLimits

0xd03a,	// (0x0003bb19) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0003e156) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0003e156) list_setting_number_pane_t

0xcfe3,	// (0x0003bac2) set_value_pane_ParamLimits

0xcfe3,	// (0x0003bac2) set_value_pane

0x4c5a,	// (0x00033739) bg_set_opt_pane_ParamLimits

0x4c5a,	// (0x00033739) bg_set_opt_pane

0x3893,	// (0x00032372) set_value_pane_t1

0x4c7b,	// (0x0003375a) slider_set_pane_cp3

0x4c84,	// (0x00033763) volume_small_pane_cp

0x4c8d,	// (0x0003376c) list_form_gen_pane

0x4b8a,	// (0x00033669) scroll_pane_cp8

0xd07d,	// (0x0003bb5c) form_field_data_pane_ParamLimits

0xd07d,	// (0x0003bb5c) form_field_data_pane

0xd094,	// (0x0003bb73) form_field_data_wide_pane_ParamLimits

0xd094,	// (0x0003bb73) form_field_data_wide_pane

0xd0b4,	// (0x0003bb93) form_field_popup_pane_ParamLimits

0xd0b4,	// (0x0003bb93) form_field_popup_pane

0xd0cc,	// (0x0003bbab) form_field_popup_wide_pane_ParamLimits

0xd0cc,	// (0x0003bbab) form_field_popup_wide_pane

0x391f,	// (0x000323fe) form_field_slider_pane_ParamLimits

0x391f,	// (0x000323fe) form_field_slider_pane

0x3932,	// (0x00032411) form_field_slider_wide_pane_ParamLimits

0x3932,	// (0x00032411) form_field_slider_wide_pane

0x4c96,	// (0x00033775) data_form_pane

0xd0ed,	// (0x0003bbcc) form_field_data_pane_t1

0x4ca2,	// (0x00033781) input_focus_pane

0x4cb0,	// (0x0003378f) data_form_wide_pane

0x3971,	// (0x00032450) form_field_data_wide_pane_t1

0x4a09,	// (0x000334e8) input_focus_pane_cp6

0xd105,	// (0x0003bbe4) form_field_popup_pane_t1

0x4ca2,	// (0x00033781) input_focus_pane_cp7

0x4c96,	// (0x00033775) list_form_pane

0x39b3,	// (0x00032492) form_field_popup_wide_pane_t1

0x4ca2,	// (0x00033781) input_focus_pane_cp8

0x4cd0,	// (0x000337af) list_form_wide_pane

0xd125,	// (0x0003bc04) form_field_slider_pane_t1_ParamLimits

0xd125,	// (0x0003bc04) form_field_slider_pane_t1

0xd13b,	// (0x0003bc1a) form_field_slider_pane_t2_ParamLimits

0xd13b,	// (0x0003bc1a) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0003e166) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0003e166) form_field_slider_pane_t

0x476e,	// (0x0003324d) input_focus_pane_cp9_ParamLimits

0x476e,	// (0x0003324d) input_focus_pane_cp9

0xd150,	// (0x0003bc2f) slider_cont_pane_ParamLimits

0xd150,	// (0x0003bc2f) slider_cont_pane

0x4cdf,	// (0x000337be) form_field_slider_wide_pane_t1_ParamLimits

0x4cdf,	// (0x000337be) form_field_slider_wide_pane_t1

0x3a0f,	// (0x000324ee) form_field_slider_wide_pane_t2_ParamLimits

0x3a0f,	// (0x000324ee) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0003e16b) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0003e16b) form_field_slider_wide_pane_t

0x476e,	// (0x0003324d) input_focus_pane_cp10_ParamLimits

0x476e,	// (0x0003324d) input_focus_pane_cp10

0xd164,	// (0x0003bc43) slider_cont_pane_cp1_ParamLimits

0xd164,	// (0x0003bc43) slider_cont_pane_cp1

0xd17a,	// (0x0003bc59) slider_form_pane_cp

0x4cf1,	// (0x000337d0) input_focus_pane_g1

0x4cf9,	// (0x000337d8) input_focus_pane_g2

0x4d01,	// (0x000337e0) input_focus_pane_g3

0x4d09,	// (0x000337e8) input_focus_pane_g4

0x4d11,	// (0x000337f0) input_focus_pane_g5

0x4d19,	// (0x000337f8) input_focus_pane_g6

0x4d21,	// (0x00033800) input_focus_pane_g7

0x4d29,	// (0x00033808) input_focus_pane_g8

0x4d31,	// (0x00033810) input_focus_pane_g9

0x4256,	// (0x00032d35) input_focus_pane_g10

0x0009,

0xf691,	// (0x0003e170) input_focus_pane_g

0x7e8c,	// (0x0003696b) wait_border_pane_g3_copy1

0xd182,	// (0x0003bc61) data_form_pane_t1

0x4256,	// (0x00032d35) wait_anim_pane_g1_copy1

0xd294,	// (0x0003bd73) data_form_wide_pane_t1

0xd19a,	// (0x0003bc79) list_form_graphic_pane_cp_ParamLimits

0xd19a,	// (0x0003bc79) list_form_graphic_pane_cp

0x8a6c,	// (0x0003754b) slider_form_pane_g1

0x8a75,	// (0x00037554) slider_form_pane_g2

0x0006,

0xf988,	// (0x0003e467) slider_form_pane_g

0x3a59,	// (0x00032538) list_form_graphic_pane_ParamLimits

0x3a59,	// (0x00032538) list_form_graphic_pane

0x3a83,	// (0x00032562) list_form_graphic_pane_g1

0x3a8b,	// (0x0003256a) list_form_graphic_pane_t1_ParamLimits

0x3a8b,	// (0x0003256a) list_form_graphic_pane_t1

0x45a9,	// (0x00033088) list_highlight_pane_cp5_ParamLimits

0x45a9,	// (0x00033088) list_highlight_pane_cp5

0xd1ad,	// (0x0003bc8c) find_pane_g1

0x4d39,	// (0x00033818) input_find_pane

0xd1b8,	// (0x0003bc97) input_find_pane_g1_ParamLimits

0xd1b8,	// (0x0003bc97) input_find_pane_g1

0xd1c4,	// (0x0003bca3) input_find_pane_t1_ParamLimits

0xd1c4,	// (0x0003bca3) input_find_pane_t1

0xd1d9,	// (0x0003bcb8) input_find_pane_t2_ParamLimits

0xd1d9,	// (0x0003bcb8) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0003e185) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0003e185) input_find_pane_t

0x4d42,	// (0x00033821) input_focus_pane_cp5_ParamLimits

0x4d42,	// (0x00033821) input_focus_pane_cp5

0x476e,	// (0x0003324d) bg_popup_window_pane_cp2_ParamLimits

0x476e,	// (0x0003324d) bg_popup_window_pane_cp2

0x4d5c,	// (0x0003383b) listscroll_menu_pane_ParamLimits

0x4d5c,	// (0x0003383b) listscroll_menu_pane

0x4d68,	// (0x00033847) popup_submenu_window_ParamLimits

0x4d68,	// (0x00033847) popup_submenu_window

0x4d8c,	// (0x0003386b) find_popup_pane_g1

0x4d94,	// (0x00033873) input_popup_find_pane_cp

0x4d42,	// (0x00033821) input_focus_pane_cp4_ParamLimits

0x4d42,	// (0x00033821) input_focus_pane_cp4

0x4d9e,	// (0x0003387d) input_popup_find_pane_t1_ParamLimits

0x4d9e,	// (0x0003387d) input_popup_find_pane_t1

0x4415,	// (0x00032ef4) bg_popup_sub_pane_cp

0x4dcc,	// (0x000338ab) listscroll_popup_sub_pane

0x4dd4,	// (0x000338b3) list_submenu_pane_ParamLimits

0x4dd4,	// (0x000338b3) list_submenu_pane

0x4de5,	// (0x000338c4) scroll_pane_cp4

0x4ded,	// (0x000338cc) list_single_popup_submenu_pane_ParamLimits

0x4ded,	// (0x000338cc) list_single_popup_submenu_pane

0x4dff,	// (0x000338de) list_single_popup_submenu_pane_g1

0x4e07,	// (0x000338e6) list_single_popup_submenu_pane_t1_ParamLimits

0x4e07,	// (0x000338e6) list_single_popup_submenu_pane_t1

0x476e,	// (0x0003324d) bg_active_tab_pane_cp1_ParamLimits

0x476e,	// (0x0003324d) bg_active_tab_pane_cp1

0x8b72,	// (0x00037651) tabs_2_active_pane_g1

0x0b41,	// (0x0002f620) tabs_2_active_pane_t1

0x476e,	// (0x0003324d) bg_passive_tab_pane_cp1_ParamLimits

0x476e,	// (0x0003324d) bg_passive_tab_pane_cp1

0x8b72,	// (0x00037651) tabs_2_passive_pane_g1

0x0b41,	// (0x0002f620) tabs_2_passive_pane_t1

0x45a9,	// (0x00033088) bg_active_tab_pane_cp4

0x0b57,	// (0x0002f636) tabs_2_long_active_pane_t1

0x5b78,	// (0x00034657) bg_passive_tab_pane_cp4

0x7974,	// (0x00036453) list_single_midp_graphic_pane_g4_ParamLimits

0x45a9,	// (0x00033088) bg_active_tab_pane_cp5

0x0b6e,	// (0x0002f64d) tabs_3_long_active_pane_t1

0x5b78,	// (0x00034657) bg_passive_tab_pane_cp5

0x7974,	// (0x00036453) list_single_midp_graphic_pane_g4

0x45a9,	// (0x00033088) bg_popup_window_pane_cp13_ParamLimits

0x45a9,	// (0x00033088) bg_popup_window_pane_cp13

0x4e25,	// (0x00033904) listscroll_popup_fast_pane_ParamLimits

0x4e25,	// (0x00033904) listscroll_popup_fast_pane

0x4e34,	// (0x00033913) grid_popup_fast_pane_ParamLimits

0x4e34,	// (0x00033913) grid_popup_fast_pane

0x4e46,	// (0x00033925) scroll_pane_cp9_ParamLimits

0x4e46,	// (0x00033925) scroll_pane_cp9

0x9d7d,	// (0x0003885c) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x9d7d,	// (0x0003885c) list_single_graphic_hl_pane_t1_cp2

0x4e6a,	// (0x00033949) input_focus_pane_cp20_ParamLimits

0x4e6a,	// (0x00033949) input_focus_pane_cp20

0x4e78,	// (0x00033957) query_popup_data_pane_t1_ParamLimits

0x4e78,	// (0x00033957) query_popup_data_pane_t1

0x4e8b,	// (0x0003396a) query_popup_data_pane_t2_ParamLimits

0x4e8b,	// (0x0003396a) query_popup_data_pane_t2

0x4ed1,	// (0x000339b0) query_popup_data_pane_t3_ParamLimits

0x4ed1,	// (0x000339b0) query_popup_data_pane_t3

0x4f12,	// (0x000339f1) query_popup_data_pane_t4_ParamLimits

0x4f12,	// (0x000339f1) query_popup_data_pane_t4

0x4f4e,	// (0x00033a2d) query_popup_data_pane_t5_ParamLimits

0x4f4e,	// (0x00033a2d) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0003e18a) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0003e18a) query_popup_data_pane_t

0x4cf1,	// (0x000337d0) bg_set_opt_pane_g1

0x4cf9,	// (0x000337d8) bg_set_opt_pane_g2

0x4d01,	// (0x000337e0) bg_set_opt_pane_g3

0x4d09,	// (0x000337e8) bg_set_opt_pane_g4

0x4d11,	// (0x000337f0) bg_set_opt_pane_g5

0x4d19,	// (0x000337f8) bg_set_opt_pane_g6

0x4d21,	// (0x00033800) bg_set_opt_pane_g7

0x4d29,	// (0x00033808) bg_set_opt_pane_g8

0x4d31,	// (0x00033810) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0003e195) bg_set_opt_pane_g

0x5585,	// (0x00034064) control_top_pane_stacon_ParamLimits

0x5585,	// (0x00034064) control_top_pane_stacon

0x55d8,	// (0x000340b7) signal_pane_stacon_ParamLimits

0x55d8,	// (0x000340b7) signal_pane_stacon

0x55fd,	// (0x000340dc) stacon_top_pane_g1_ParamLimits

0x55fd,	// (0x000340dc) stacon_top_pane_g1

0x561f,	// (0x000340fe) title_pane_stacon_ParamLimits

0x561f,	// (0x000340fe) title_pane_stacon

0x5641,	// (0x00034120) uni_indicator_pane_stacon_ParamLimits

0x5641,	// (0x00034120) uni_indicator_pane_stacon

0x5656,	// (0x00034135) battery_pane_stacon_ParamLimits

0x5656,	// (0x00034135) battery_pane_stacon

0x5696,	// (0x00034175) control_bottom_pane_stacon_ParamLimits

0x5696,	// (0x00034175) control_bottom_pane_stacon

0x56b5,	// (0x00034194) navi_pane_stacon_ParamLimits

0x56b5,	// (0x00034194) navi_pane_stacon

0x56d4,	// (0x000341b3) stacon_bottom_pane_g1_ParamLimits

0x56d4,	// (0x000341b3) stacon_bottom_pane_g1

0x4f85,	// (0x00033a64) aid_levels_signal_lsc_ParamLimits

0x4f85,	// (0x00033a64) aid_levels_signal_lsc

0x4f92,	// (0x00033a71) signal_pane_stacon_g1_ParamLimits

0x4f92,	// (0x00033a71) signal_pane_stacon_g1

0x4f9e,	// (0x00033a7d) signal_pane_stacon_g2_ParamLimits

0x4f9e,	// (0x00033a7d) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0003e1a8) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0003e1a8) signal_pane_stacon_g

0x4fdf,	// (0x00033abe) title_pane_stacon_t1_ParamLimits

0x4fdf,	// (0x00033abe) title_pane_stacon_t1

0x5004,	// (0x00033ae3) uni_indicator_pane_stacon_g1

0x500e,	// (0x00033aed) uni_indicator_pane_stacon_g2

0x5018,	// (0x00033af7) uni_indicator_pane_stacon_g3

0x5022,	// (0x00033b01) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0003e1b4) uni_indicator_pane_stacon_g

0x502c,	// (0x00033b0b) control_top_pane_stacon_g1

0x5034,	// (0x00033b13) control_top_pane_stacon_t1_ParamLimits

0x5034,	// (0x00033b13) control_top_pane_stacon_t1

0x5065,	// (0x00033b44) aid_levels_battery_lsc_ParamLimits

0x5065,	// (0x00033b44) aid_levels_battery_lsc

0x5073,	// (0x00033b52) battery_pane_stacon_g1_ParamLimits

0x5073,	// (0x00033b52) battery_pane_stacon_g1

0x507f,	// (0x00033b5e) battery_pane_stacon_g2_ParamLimits

0x507f,	// (0x00033b5e) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0003e1bd) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0003e1bd) battery_pane_stacon_g

0x50ae,	// (0x00033b8d) navi_icon_pane_stacon

0x50be,	// (0x00033b9d) navi_navi_pane_stacon

0x50ae,	// (0x00033b8d) navi_text_pane_stacon

0x502c,	// (0x00033b0b) control_bottom_pane_stacon_g1

0x50ce,	// (0x00033bad) control_bottom_pane_stacon_t1_ParamLimits

0x50ce,	// (0x00033bad) control_bottom_pane_stacon_t1

0x0b84,	// (0x0002f663) grid_app_pane_ParamLimits

0x0b84,	// (0x0002f663) grid_app_pane

0x0bb2,	// (0x0002f691) scroll_pane_cp15_ParamLimits

0x0bb2,	// (0x0002f691) scroll_pane_cp15

0x0bc5,	// (0x0002f6a4) cell_app_pane_ParamLimits

0x0bc5,	// (0x0002f6a4) cell_app_pane

0x0eee,	// (0x0002f9cd) cell_app_pane_g1_ParamLimits

0x0eee,	// (0x0002f9cd) cell_app_pane_g1

0x5119,	// (0x00033bf8) cell_app_pane_g2_ParamLimits

0x5119,	// (0x00033bf8) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0003e1c2) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0003e1c2) cell_app_pane_g

0x0f12,	// (0x0002f9f1) cell_app_pane_t1_ParamLimits

0x0f12,	// (0x0002f9f1) cell_app_pane_t1

0x5125,	// (0x00033c04) grid_highlight_pane_ParamLimits

0x5125,	// (0x00033c04) grid_highlight_pane

0x4cf1,	// (0x000337d0) cell_highlight_pane_g1

0x4cf9,	// (0x000337d8) cell_highlight_pane_g2

0x4d01,	// (0x000337e0) cell_highlight_pane_g3

0x4d09,	// (0x000337e8) cell_highlight_pane_g4

0x4d11,	// (0x000337f0) cell_highlight_pane_g5

0x4d19,	// (0x000337f8) cell_highlight_pane_g6

0x4d21,	// (0x00033800) cell_highlight_pane_g7

0x4d29,	// (0x00033808) cell_highlight_pane_g8

0x4d31,	// (0x00033810) cell_highlight_pane_g9

0x4256,	// (0x00032d35) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0003e170) cell_highlight_pane_g

0x5149,	// (0x00033c28) bg_scroll_pane

0x5168,	// (0x00033c47) scroll_handle_pane

0x51b9,	// (0x00033c98) scroll_bg_pane_g1

0x51ce,	// (0x00033cad) scroll_bg_pane_g2

0x51e6,	// (0x00033cc5) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0003e1c7) scroll_bg_pane_g

0x51fb,	// (0x00033cda) scroll_handle_focus_pane_ParamLimits

0x51fb,	// (0x00033cda) scroll_handle_focus_pane

0x51b9,	// (0x00033c98) scroll_handle_pane_g1

0x5208,	// (0x00033ce7) scroll_handle_pane_g2

0x51e6,	// (0x00033cc5) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0003e1ce) scroll_handle_pane_g

0x4d42,	// (0x00033821) bg_popup_sub_pane_cp21_ParamLimits

0x4d42,	// (0x00033821) bg_popup_sub_pane_cp21

0x521c,	// (0x00033cfb) popup_fep_japan_predictive_window_t1_ParamLimits

0x521c,	// (0x00033cfb) popup_fep_japan_predictive_window_t1

0x5233,	// (0x00033d12) popup_fep_japan_predictive_window_t2_ParamLimits

0x5233,	// (0x00033d12) popup_fep_japan_predictive_window_t2

0x5266,	// (0x00033d45) popup_fep_japan_predictive_window_t3_ParamLimits

0x5266,	// (0x00033d45) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0003e1d5) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0003e1d5) popup_fep_japan_predictive_window_t

0x4415,	// (0x00032ef4) bg_popup_sub_pane_cp23

0x529d,	// (0x00033d7c) listscroll_japin_cand_pane

0x52a5,	// (0x00033d84) popup_fep_japan_candidate_window_t1

0x52b3,	// (0x00033d92) candidate_pane_ParamLimits

0x52b3,	// (0x00033d92) candidate_pane

0x52c6,	// (0x00033da5) scroll_pane_cp30

0x52ce,	// (0x00033dad) list_single_popup_jap_candidate_pane_ParamLimits

0x52ce,	// (0x00033dad) list_single_popup_jap_candidate_pane

0x4415,	// (0x00032ef4) list_highlight_pane_cp30

0x52e3,	// (0x00033dc2) list_single_popup_jap_candidate_pane_t1

0x0f29,	// (0x0002fa08) level_1_signal

0x0f3b,	// (0x0002fa1a) level_2_signal

0x0f4e,	// (0x0002fa2d) level_3_signal

0x0f61,	// (0x0002fa40) level_4_signal

0x0f74,	// (0x0002fa53) level_5_signal

0x0f87,	// (0x0002fa66) level_6_signal

0x0f9a,	// (0x0002fa79) level_7_signal

0x0f29,	// (0x0002fa08) level_1_battery

0x0f3b,	// (0x0002fa1a) level_2_battery

0x0f4e,	// (0x0002fa2d) level_3_battery

0x0f61,	// (0x0002fa40) level_4_battery

0x0f74,	// (0x0002fa53) level_5_battery

0x0f87,	// (0x0002fa66) level_6_battery

0x0f9a,	// (0x0002fa79) level_7_battery

0x5329,	// (0x00033e08) list_menu_pane_ParamLimits

0x5329,	// (0x00033e08) list_menu_pane

0x533f,	// (0x00033e1e) scroll_pane_cp25_ParamLimits

0x533f,	// (0x00033e1e) scroll_pane_cp25

0x0fad,	// (0x0002fa8c) list_double2_graphic_pane_cp2_ParamLimits

0x0fad,	// (0x0002fa8c) list_double2_graphic_pane_cp2

0x0fad,	// (0x0002fa8c) list_double2_large_graphic_pane_cp2_ParamLimits

0x0fad,	// (0x0002fa8c) list_double2_large_graphic_pane_cp2

0x0fad,	// (0x0002fa8c) list_double2_pane_cp2_ParamLimits

0x0fad,	// (0x0002fa8c) list_double2_pane_cp2

0x0fad,	// (0x0002fa8c) list_double_graphic_pane_cp2_ParamLimits

0x0fad,	// (0x0002fa8c) list_double_graphic_pane_cp2

0x0fad,	// (0x0002fa8c) list_double_large_graphic_pane_cp2_ParamLimits

0x0fad,	// (0x0002fa8c) list_double_large_graphic_pane_cp2

0x0fad,	// (0x0002fa8c) list_double_number_pane_cp2_ParamLimits

0x0fad,	// (0x0002fa8c) list_double_number_pane_cp2

0x0fad,	// (0x0002fa8c) list_double_pane_cp2_ParamLimits

0x0fad,	// (0x0002fa8c) list_double_pane_cp2

0x0fc8,	// (0x0002faa7) list_single_2graphic_pane_cp2_ParamLimits

0x0fc8,	// (0x0002faa7) list_single_2graphic_pane_cp2

0x0fc8,	// (0x0002faa7) list_single_graphic_heading_pane_cp2_ParamLimits

0x0fc8,	// (0x0002faa7) list_single_graphic_heading_pane_cp2

0x0fc8,	// (0x0002faa7) list_single_graphic_pane_cp2_ParamLimits

0x0fc8,	// (0x0002faa7) list_single_graphic_pane_cp2

0x0fc8,	// (0x0002faa7) list_single_heading_pane_cp2_ParamLimits

0x0fc8,	// (0x0002faa7) list_single_heading_pane_cp2

0x0fd9,	// (0x0002fab8) list_single_large_graphic_pane_cp2_ParamLimits

0x0fd9,	// (0x0002fab8) list_single_large_graphic_pane_cp2

0x0fc8,	// (0x0002faa7) list_single_number_heading_pane_cp2_ParamLimits

0x0fc8,	// (0x0002faa7) list_single_number_heading_pane_cp2

0x0fc8,	// (0x0002faa7) list_single_number_pane_cp2_ParamLimits

0x0fc8,	// (0x0002faa7) list_single_number_pane_cp2

0x0fc8,	// (0x0002faa7) list_single_pane_cp2_ParamLimits

0x0fc8,	// (0x0002faa7) list_single_pane_cp2

0x53bc,	// (0x00033e9b) bg_popup_sub_pane_cp22

0x53de,	// (0x00033ebd) popup_side_volume_key_window_g1

0x5402,	// (0x00033ee1) popup_side_volume_key_window_t1

0x541e,	// (0x00033efd) volume_small_pane_cp1

0x476e,	// (0x0003324d) bg_popup_sub_pane_cp24_ParamLimits

0x476e,	// (0x0003324d) bg_popup_sub_pane_cp24

0x5426,	// (0x00033f05) fep_china_uni_candidate_pane_ParamLimits

0x5426,	// (0x00033f05) fep_china_uni_candidate_pane

0x543a,	// (0x00033f19) fep_china_uni_entry_pane

0x544a,	// (0x00033f29) popup_fep_china_uni_window_g1

0x5466,	// (0x00033f45) fep_china_uni_entry_pane_g1

0x546e,	// (0x00033f4d) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0003e206) fep_china_uni_entry_pane_g

0x5476,	// (0x00033f55) fep_entry_item_pane

0x5480,	// (0x00033f5f) fep_candidate_item_pane

0x5488,	// (0x00033f67) fep_china_uni_candidate_pane_g1

0x5490,	// (0x00033f6f) fep_china_uni_candidate_pane_g2

0x5498,	// (0x00033f77) fep_china_uni_candidate_pane_g3

0x54a0,	// (0x00033f7f) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0003e20b) fep_china_uni_candidate_pane_g

0x4256,	// (0x00032d35) fep_entry_item_pane_g1

0x54a8,	// (0x00033f87) fep_entry_item_pane_t1_ParamLimits

0x54a8,	// (0x00033f87) fep_entry_item_pane_t1

0x54be,	// (0x00033f9d) fep_candidate_item_pane_t1_ParamLimits

0x54be,	// (0x00033f9d) fep_candidate_item_pane_t1

0x54d3,	// (0x00033fb2) fep_candidate_item_pane_t2_ParamLimits

0x54d3,	// (0x00033fb2) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0003e214) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0003e214) fep_candidate_item_pane_t

0x45a9,	// (0x00033088) list_highlight_pane_cp31_ParamLimits

0x45a9,	// (0x00033088) list_highlight_pane_cp31

0x54e5,	// (0x00033fc4) level_1_signal_lsc

0x54ee,	// (0x00033fcd) level_2_signal_lsc

0x54f7,	// (0x00033fd6) level_3_signal_lsc

0x5500,	// (0x00033fdf) level_4_signal_lsc

0x5509,	// (0x00033fe8) level_5_signal_lsc

0x5512,	// (0x00033ff1) level_6_signal_lsc

0x551b,	// (0x00033ffa) level_7_signal_lsc

0x551b,	// (0x00033ffa) level_1_battery_lsc

0x5524,	// (0x00034003) level_2_battery_lsc

0x552d,	// (0x0003400c) level_3_battery_lsc

0x5536,	// (0x00034015) level_4_battery_lsc

0x553f,	// (0x0003401e) level_5_battery_lsc

0x5548,	// (0x00034027) level_6_battery_lsc

0x54e5,	// (0x00033fc4) level_7_battery_lsc

0x5551,	// (0x00034030) scroll_handle_focus_pane_g1

0x555a,	// (0x00034039) scroll_handle_focus_pane_g2

0x5563,	// (0x00034042) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0003e219) scroll_handle_focus_pane_g

0xd1ee,	// (0x0003bccd) list_single_2graphic_pane_g1_ParamLimits

0xd1ee,	// (0x0003bccd) list_single_2graphic_pane_g1

0xd621,	// (0x0003c100) list_single_2graphic_pane_g2_ParamLimits

0xd621,	// (0x0003c100) list_single_2graphic_pane_g2

0x4bfa,	// (0x000336d9) list_single_2graphic_pane_g3_ParamLimits

0x4bfa,	// (0x000336d9) list_single_2graphic_pane_g3

0xd1fa,	// (0x0003bcd9) list_single_2graphic_pane_g4_ParamLimits

0xd1fa,	// (0x0003bcd9) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0003e220) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0003e220) list_single_2graphic_pane_g

0xd20b,	// (0x0003bcea) list_single_2graphic_pane_t1_ParamLimits

0xd20b,	// (0x0003bcea) list_single_2graphic_pane_t1

0xd686,	// (0x0003c165) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd686,	// (0x0003c165) list_double2_graphic_large_graphic_pane_g1

0xcec3,	// (0x0003b9a2) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xcec3,	// (0x0003b9a2) list_double2_graphic_large_graphic_pane_g2

0x4ba7,	// (0x00033686) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4ba7,	// (0x00033686) list_double2_graphic_large_graphic_pane_g3

0xd239,	// (0x0003bd18) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd239,	// (0x0003bd18) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0003e229) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0003e229) list_double2_graphic_large_graphic_pane_g

0xd245,	// (0x0003bd24) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xd245,	// (0x0003bd24) list_double2_graphic_large_graphic_pane_t1

0xd25b,	// (0x0003bd3a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xd25b,	// (0x0003bd3a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0003e232) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0003e232) list_double2_graphic_large_graphic_pane_t

0x577b,	// (0x0003425a) popup_fast_swap_window_ParamLimits

0x577b,	// (0x0003425a) popup_fast_swap_window

0x5797,	// (0x00034276) popup_side_volume_key_window

0x57b1,	// (0x00034290) stacon_top_pane

0x57bb,	// (0x0003429a) status_pane_ParamLimits

0x57bb,	// (0x0003429a) status_pane

0x10a8,	// (0x0002fb87) status_small_pane

0x4415,	// (0x00032ef4) control_pane

0x4415,	// (0x00032ef4) stacon_bottom_pane

0x4b8a,	// (0x00033669) scroll_pane_cp121

0x4c8d,	// (0x0003376c) set_content_pane

0x8b60,	// (0x0003763f) bg_active_tab_pane_g1_cp1

0x557c,	// (0x0003405b) bg_active_tab_pane_g2_cp1

0x8b69,	// (0x00037648) bg_active_tab_pane_g3_cp1

0x8b60,	// (0x0003763f) bg_passive_tab_pane_g1_cp1

0x557c,	// (0x0003405b) bg_passive_tab_pane_g2_cp1

0x8b69,	// (0x00037648) bg_passive_tab_pane_g3_cp1

0x1067,	// (0x0002fb46) bg_active_tab_pane_g1_cp2

0x557c,	// (0x0003405b) bg_active_tab_pane_g2_cp2

0x105e,	// (0x0002fb3d) bg_active_tab_pane_g3_cp2

0x1067,	// (0x0002fb46) bg_passive_tab_pane_g1_cp2

0x557c,	// (0x0003405b) bg_passive_tab_pane_g2_cp2

0x105e,	// (0x0002fb3d) bg_passive_tab_pane_g3_cp2

0x1079,	// (0x0002fb58) bg_active_tab_pane_g1_cp3

0x557c,	// (0x0003405b) bg_active_tab_pane_g2_cp3

0x1070,	// (0x0002fb4f) bg_active_tab_pane_g3_cp3

0x1079,	// (0x0002fb58) bg_passive_tab_pane_g1_cp3

0x557c,	// (0x0003405b) bg_passive_tab_pane_g2_cp3

0x1070,	// (0x0002fb4f) bg_passive_tab_pane_g3_cp3

0x108b,	// (0x0002fb6a) bg_active_tab_pane_g1_cp4

0x557c,	// (0x0003405b) bg_active_tab_pane_g2_cp4

0x1082,	// (0x0002fb61) bg_active_tab_pane_g3_cp4

0x108b,	// (0x0002fb6a) bg_passive_tab_pane_g1_cp4

0x557c,	// (0x0003405b) bg_passive_tab_pane_g2_cp4

0x1082,	// (0x0002fb61) bg_passive_tab_pane_g3_cp4

0x56f0,	// (0x000341cf) bg_active_tab_pane_g1_cp5

0x557c,	// (0x0003405b) bg_active_tab_pane_g2_cp5

0x56f9,	// (0x000341d8) bg_active_tab_pane_g3_cp5

0x56f0,	// (0x000341cf) bg_passive_tab_pane_g1_cp5

0x557c,	// (0x0003405b) bg_passive_tab_pane_g2_cp5

0x56f9,	// (0x000341d8) bg_passive_tab_pane_g3_cp5

0x1094,	// (0x0002fb73) list_set_graphic_pane_ParamLimits

0x1094,	// (0x0002fb73) list_set_graphic_pane

0x4415,	// (0x00032ef4) bg_set_opt_pane_cp4

0x5702,	// (0x000341e1) list_set_graphic_pane_g1_ParamLimits

0x5702,	// (0x000341e1) list_set_graphic_pane_g1

0x570e,	// (0x000341ed) list_set_graphic_pane_g2_ParamLimits

0x570e,	// (0x000341ed) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0003e237) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0003e237) list_set_graphic_pane_g

0x0009,

0xfacf,	// (0x0003e5ae) volume_small_pane_cp_g

0x5730,	// (0x0003420f) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x5730,	// (0x0003420f) list_double2_large_graphic_pane_g1_cp2

0x573c,	// (0x0003421b) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x573c,	// (0x0003421b) list_double2_large_graphic_pane_g2_cp2

0x574b,	// (0x0003422a) list_double2_large_graphic_pane_g3_cp2

0x5753,	// (0x00034232) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x5753,	// (0x00034232) list_double2_large_graphic_pane_t1_cp2

0x5769,	// (0x00034248) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x5769,	// (0x00034248) list_double2_large_graphic_pane_t2_cp2

0x8830,	// (0x0003730f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x8830,	// (0x0003730f) list_double_large_graphic_pane_g1_cp2

0x8841,	// (0x00037320) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x8841,	// (0x00037320) list_double_large_graphic_pane_g2_cp2

0x5896,	// (0x00034375) list_double_large_graphic_pane_g3_cp2

0x8850,	// (0x0003732f) list_double_large_graphic_pane_g4_cp

0x8858,	// (0x00037337) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x8858,	// (0x00037337) list_double_large_graphic_pane_t1_cp2

0x886f,	// (0x0003734e) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x886f,	// (0x0003734e) list_double_large_graphic_pane_t2_cp2

0x57c9,	// (0x000342a8) list_double2_graphic_pane_g1_cp2_ParamLimits

0x57c9,	// (0x000342a8) list_double2_graphic_pane_g1_cp2

0x57d5,	// (0x000342b4) list_double2_graphic_pane_g2_cp2_ParamLimits

0x57d5,	// (0x000342b4) list_double2_graphic_pane_g2_cp2

0x57e4,	// (0x000342c3) list_double2_graphic_pane_g3_cp2

0x57ec,	// (0x000342cb) list_double2_graphic_pane_t1_cp2_ParamLimits

0x57ec,	// (0x000342cb) list_double2_graphic_pane_t1_cp2

0x5802,	// (0x000342e1) list_double2_graphic_pane_t2_cp2_ParamLimits

0x5802,	// (0x000342e1) list_double2_graphic_pane_t2_cp2

0x5814,	// (0x000342f3) list_single_number_heading_pane_g1_cp2_ParamLimits

0x5814,	// (0x000342f3) list_single_number_heading_pane_g1_cp2

0x5820,	// (0x000342ff) list_single_number_heading_pane_g2_cp2

0x5828,	// (0x00034307) list_single_number_heading_pane_t1_cp2_ParamLimits

0x5828,	// (0x00034307) list_single_number_heading_pane_t1_cp2

0x583e,	// (0x0003431d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x583e,	// (0x0003431d) list_single_number_heading_pane_t2_cp2

0x5850,	// (0x0003432f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x5850,	// (0x0003432f) list_single_number_heading_pane_t3_cp2

0x5814,	// (0x000342f3) list_single_heading_pane_g1_cp2_ParamLimits

0x5814,	// (0x000342f3) list_single_heading_pane_g1_cp2

0x5820,	// (0x000342ff) list_single_heading_pane_g2_cp2

0x5828,	// (0x00034307) list_single_heading_pane_t1_cp2_ParamLimits

0x5828,	// (0x00034307) list_single_heading_pane_t1_cp2

0x863a,	// (0x00037119) list_single_heading_pane_t2_cp2_ParamLimits

0x863a,	// (0x00037119) list_single_heading_pane_t2_cp2

0x858a,	// (0x00037069) list_double_graphic_pane_g1_cp2_ParamLimits

0x858a,	// (0x00037069) list_double_graphic_pane_g1_cp2

0x8596,	// (0x00037075) list_double_graphic_pane_g2_cp2_ParamLimits

0x8596,	// (0x00037075) list_double_graphic_pane_g2_cp2

0x85a5,	// (0x00037084) list_double_graphic_pane_g3_cp2

0x85ad,	// (0x0003708c) list_double_graphic_pane_t1_cp2_ParamLimits

0x85ad,	// (0x0003708c) list_double_graphic_pane_t1_cp2

0x85c3,	// (0x000370a2) list_double_graphic_pane_t2_cp2_ParamLimits

0x85c3,	// (0x000370a2) list_double_graphic_pane_t2_cp2

0x588a,	// (0x00034369) list_double_number_pane_g1_cp2_ParamLimits

0x588a,	// (0x00034369) list_double_number_pane_g1_cp2

0x5896,	// (0x00034375) list_double_number_pane_g2_cp2

0x8550,	// (0x0003702f) list_double_number_pane_t1_cp2_ParamLimits

0x8550,	// (0x0003702f) list_double_number_pane_t1_cp2

0x8562,	// (0x00037041) list_double_number_pane_t2_cp2_ParamLimits

0x8562,	// (0x00037041) list_double_number_pane_t2_cp2

0x8578,	// (0x00037057) list_double_number_pane_t3_cp2_ParamLimits

0x8578,	// (0x00037057) list_double_number_pane_t3_cp2

0x84c8,	// (0x00036fa7) list_single_graphic_pane_g1_cp2_ParamLimits

0x84c8,	// (0x00036fa7) list_single_graphic_pane_g1_cp2

0x5814,	// (0x000342f3) list_single_graphic_pane_g2_cp2_ParamLimits

0x5814,	// (0x000342f3) list_single_graphic_pane_g2_cp2

0x5820,	// (0x000342ff) list_single_graphic_pane_g3_cp2

0x84a0,	// (0x00036f7f) list_single_graphic_pane_t1_cp2_ParamLimits

0x84a0,	// (0x00036f7f) list_single_graphic_pane_t1_cp2

0x5814,	// (0x000342f3) list_single_number_pane_g1_cp2_ParamLimits

0x5814,	// (0x000342f3) list_single_number_pane_g1_cp2

0x5820,	// (0x000342ff) list_single_number_pane_g2_cp2

0x84a0,	// (0x00036f7f) list_single_number_pane_t1_cp2_ParamLimits

0x84a0,	// (0x00036f7f) list_single_number_pane_t1_cp2

0x84b6,	// (0x00036f95) list_single_number_pane_t2_cp2_ParamLimits

0x84b6,	// (0x00036f95) list_single_number_pane_t2_cp2

0x573c,	// (0x0003421b) list_double2_pane_g1_cp2_ParamLimits

0x573c,	// (0x0003421b) list_double2_pane_g1_cp2

0x574b,	// (0x0003422a) list_double2_pane_g2_cp2

0x5862,	// (0x00034341) list_double2_pane_t1_cp2_ParamLimits

0x5862,	// (0x00034341) list_double2_pane_t1_cp2

0x5878,	// (0x00034357) list_double2_pane_t2_cp2_ParamLimits

0x5878,	// (0x00034357) list_double2_pane_t2_cp2

0x588a,	// (0x00034369) list_double_pane_g1_cp2_ParamLimits

0x588a,	// (0x00034369) list_double_pane_g1_cp2

0x5896,	// (0x00034375) list_double_pane_g2_cp2

0x589e,	// (0x0003437d) list_double_pane_t1_cp2_ParamLimits

0x589e,	// (0x0003437d) list_double_pane_t1_cp2

0x58b4,	// (0x00034393) list_double_pane_t2_cp2_ParamLimits

0x58b4,	// (0x00034393) list_double_pane_t2_cp2

0x58dc,	// (0x000343bb) list_single_pane_cp2_g3

0x5814,	// (0x000342f3) list_single_pane_g1_cp2_ParamLimits

0x5814,	// (0x000342f3) list_single_pane_g1_cp2

0x5820,	// (0x000342ff) list_single_pane_g2_cp2

0x58ec,	// (0x000343cb) list_single_pane_t1_cp2_ParamLimits

0x58ec,	// (0x000343cb) list_single_pane_t1_cp2

0x5904,	// (0x000343e3) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x5904,	// (0x000343e3) list_single_large_graphic_pane_g1_cp2

0x5910,	// (0x000343ef) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x5910,	// (0x000343ef) list_single_large_graphic_pane_g2_cp2

0x591c,	// (0x000343fb) list_single_large_graphic_pane_g3_cp2

0x5924,	// (0x00034403) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x5924,	// (0x00034403) list_single_large_graphic_pane_g4_cp1

0x593e,	// (0x0003441d) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x593e,	// (0x0003441d) list_single_large_graphic_pane_t1_cp2

0x8482,	// (0x00036f61) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x8482,	// (0x00036f61) list_single_graphic_heading_pane_g1_cp2

0x845d,	// (0x00036f3c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x845d,	// (0x00036f3c) list_single_graphic_heading_pane_g4_cp2

0x5820,	// (0x000342ff) list_single_graphic_heading_pane_g5_cp2

0x5828,	// (0x00034307) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5828,	// (0x00034307) list_single_graphic_heading_pane_t1_cp2

0x848e,	// (0x00036f6d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x848e,	// (0x00036f6d) list_single_graphic_heading_pane_t2_cp2

0x8451,	// (0x00036f30) list_single_2graphic_pane_g1_cp2_ParamLimits

0x8451,	// (0x00036f30) list_single_2graphic_pane_g1_cp2

0x845d,	// (0x00036f3c) list_single_2graphic_pane_g2_cp2_ParamLimits

0x845d,	// (0x00036f3c) list_single_2graphic_pane_g2_cp2

0x5820,	// (0x000342ff) list_single_2graphic_pane_g3_cp2

0x7974,	// (0x00036453) list_single_2graphic_pane_g4_cp2_ParamLimits

0x7974,	// (0x00036453) list_single_2graphic_pane_g4_cp2

0x846c,	// (0x00036f4b) list_single_2graphic_pane_t1_cp2_ParamLimits

0x846c,	// (0x00036f4b) list_single_2graphic_pane_t1_cp2

0x4256,	// (0x00032d35) list_highlight_pane_g10_cp1

0x8063,	// (0x00036b42) list_highlight_pane_g1_cp1

0x806b,	// (0x00036b4a) list_highlight_pane_g2_cp1

0x8073,	// (0x00036b52) list_highlight_pane_g3_cp1

0x807b,	// (0x00036b5a) list_highlight_pane_g4_cp1

0x8083,	// (0x00036b62) list_highlight_pane_g5_cp1

0x808b,	// (0x00036b6a) list_highlight_pane_g6_cp1

0x8093,	// (0x00036b72) list_highlight_pane_g7_cp1

0x809b,	// (0x00036b7a) list_highlight_pane_g8_cp1

0x80a3,	// (0x00036b82) list_highlight_pane_g9_cp1

0x1603,	// (0x000300e2) form_field_slider_pane_t3

0x1611,	// (0x000300f0) form_field_slider_pane_t4

0x7fad,	// (0x00036a8c) slider_form_pane_ParamLimits

0x7fad,	// (0x00036a8c) slider_form_pane

0x4415,	// (0x00032ef4) control_abbreviations

0x4415,	// (0x00032ef4) control_conventions

0x4415,	// (0x00032ef4) control_definitions

0x4415,	// (0x00032ef4) format_table_attribute

0x8684,	// (0x00037163) bg_popup_preview_window_pane_g9

0x4415,	// (0x00032ef4) format_table_data2

0x4415,	// (0x00032ef4) format_table_data3

0x4415,	// (0x00032ef4) format_table_data_example

0x0008,

0x4415,	// (0x00032ef4) intro_purpose

0xf8e8,	// (0x0003e3c7) bg_popup_preview_window_pane_g

0x4415,	// (0x00032ef4) texts_category

0x4415,	// (0x00032ef4) texts_graphics

0x5954,	// (0x00034433) text_digital

0x7558,	// (0x00036037) text_primary

0x7567,	// (0x00036046) text_primary_small

0x7576,	// (0x00036055) text_secondary

0x7585,	// (0x00036064) text_title

0x8afd,	// (0x000375dc) bg_passive_tab_pane_g1_cp3_srt

0x557c,	// (0x0003405b) bg_passive_tab_pane_g2_cp3_srt

0x8b06,	// (0x000375e5) bg_passive_tab_pane_g3_cp3_srt

0x476e,	// (0x0003324d) bg_active_tab_pane_cp3_srt_ParamLimits

0x476e,	// (0x0003324d) bg_active_tab_pane_cp3_srt

0x8b0f,	// (0x000375ee) tabs_4_active_pane_srt_g1

0x0385,	// (0x0002ee64) tabs_4_active_pane_srt_t1_ParamLimits

0x0385,	// (0x0002ee64) tabs_4_active_pane_srt_t1

0x8afd,	// (0x000375dc) bg_active_tab_pane_g1_cp3_copy1

0x557c,	// (0x0003405b) bg_active_tab_pane_g2_cp3_copy1

0x8b06,	// (0x000375e5) bg_active_tab_pane_g3_cp3_copy1

0x45a9,	// (0x00033088) tabs_2_long_active_pane_srt_ParamLimits

0x45a9,	// (0x00033088) tabs_2_long_active_pane_srt

0x45a9,	// (0x00033088) tabs_2_long_passive_pane_srt_ParamLimits

0x45a9,	// (0x00033088) tabs_2_long_passive_pane_srt

0x5b78,	// (0x00034657) bg_passive_tab_pane_cp4_srt_ParamLimits

0x5b78,	// (0x00034657) bg_passive_tab_pane_cp4_srt

0x8a33,	// (0x00037512) bg_passive_tab_pane_g1_cp4_srt

0x557c,	// (0x0003405b) bg_passive_tab_pane_g2_cp4_srt

0x8a3c,	// (0x0003751b) bg_passive_tab_pane_g3_cp4_srt

0x45a9,	// (0x00033088) bg_active_tab_pane_cp4_srt_ParamLimits

0x45a9,	// (0x00033088) bg_active_tab_pane_cp4_srt

0x0b57,	// (0x0002f636) tabs_2_long_active_pane_srt_t1_ParamLimits

0x0b57,	// (0x0002f636) tabs_2_long_active_pane_srt_t1

0x8a33,	// (0x00037512) bg_active_tab_pane_g1_cp4_srt

0x557c,	// (0x0003405b) bg_active_tab_pane_g2_cp4_srt

0x8a3c,	// (0x0003751b) bg_active_tab_pane_g3_cp4_srt

0x476e,	// (0x0003324d) tabs_3_long_active_pane_srt_ParamLimits

0x476e,	// (0x0003324d) tabs_3_long_active_pane_srt

0x476e,	// (0x0003324d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x476e,	// (0x0003324d) tabs_3_long_passive_pane_cp_srt

0x476e,	// (0x0003324d) tabs_3_long_passive_pane_srt_ParamLimits

0x476e,	// (0x0003324d) tabs_3_long_passive_pane_srt

0x5b78,	// (0x00034657) bg_passive_tab_pane_cp5_srt_ParamLimits

0x5b78,	// (0x00034657) bg_passive_tab_pane_cp5_srt

0x56f0,	// (0x000341cf) bg_passive_tab_pane_g1_cp5_srt

0x557c,	// (0x0003405b) bg_passive_tab_pane_g2_cp5_srt

0x56f9,	// (0x000341d8) bg_passive_tab_pane_g3_cp5_srt

0x45a9,	// (0x00033088) bg_active_tab_pane_cp5_srt_ParamLimits

0x45a9,	// (0x00033088) bg_active_tab_pane_cp5_srt

0x0b6e,	// (0x0002f64d) tabs_3_long_active_pane_srt_t1_ParamLimits

0x0b6e,	// (0x0002f64d) tabs_3_long_active_pane_srt_t1

0x56f0,	// (0x000341cf) bg_active_tab_pane_g1_cp5_srt

0x557c,	// (0x0003405b) bg_active_tab_pane_g2_cp5_srt

0x56f9,	// (0x000341d8) bg_active_tab_pane_g3_cp5_srt

0x8a25,	// (0x00037504) navi_text_pane_srt_t1

0x8a1d,	// (0x000374fc) navi_icon_pane_srt_g1

0x769d,	// (0x0003617c) midp_editing_number_pane_srt

0x7594,	// (0x00036073) midp_ticker_pane_srt

0x76a5,	// (0x00036184) midp_ticker_pane_srt_g1

0x76ad,	// (0x0003618c) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0003e256) midp_ticker_pane_srt_g

0x76b5,	// (0x00036194) midp_ticker_pane_srt_t1

0x8a0e,	// (0x000374ed) midp_editing_number_pane_t1_copy1

0x10b1,	// (0x0002fb90) listscroll_midp_pane

0x10b1,	// (0x0002fb90) midp_form_pane

0x759c,	// (0x0003607b) midp_info_popup_window_ParamLimits

0x759c,	// (0x0003607b) midp_info_popup_window

0x4d42,	// (0x00033821) bg_popup_sub_pane_cp50_ParamLimits

0x4d42,	// (0x00033821) bg_popup_sub_pane_cp50

0x7cca,	// (0x000367a9) listscroll_midp_info_pane_ParamLimits

0x7cca,	// (0x000367a9) listscroll_midp_info_pane

0x7cb2,	// (0x00036791) listscroll_form_midp_pane_ParamLimits

0x7cb2,	// (0x00036791) listscroll_form_midp_pane

0x7cbe,	// (0x0003679d) scroll_bar_cp050

0x15f7,	// (0x000300d6) list_midp_pane

0x9325,	// (0x00037e04) signal_pane_g2_cp

0x7be4,	// (0x000366c3) listscroll_midp_info_pane_t1_ParamLimits

0x7be4,	// (0x000366c3) listscroll_midp_info_pane_t1

0x7bfc,	// (0x000366db) listscroll_midp_info_pane_t2_ParamLimits

0x7bfc,	// (0x000366db) listscroll_midp_info_pane_t2

0x7c3a,	// (0x00036719) listscroll_midp_info_pane_t3_ParamLimits

0x7c3a,	// (0x00036719) listscroll_midp_info_pane_t3

0x7c74,	// (0x00036753) listscroll_midp_info_pane_t4_ParamLimits

0x7c74,	// (0x00036753) listscroll_midp_info_pane_t4

0x0003,

0xf823,	// (0x0003e302) listscroll_midp_info_pane_t_ParamLimits

0xf823,	// (0x0003e302) listscroll_midp_info_pane_t

0x4de5,	// (0x000338c4) scroll_pane_cp21

0x7b88,	// (0x00036667) form_midp_field_choice_group_pane

0x7b91,	// (0x00036670) form_midp_field_text_pane

0x7bca,	// (0x000366a9) form_midp_field_time_pane

0x7bd2,	// (0x000366b1) form_midp_gauge_slider_pane

0x7bdb,	// (0x000366ba) form_midp_gauge_wait_pane

0x4415,	// (0x00032ef4) form_midp_image_pane

0xd26d,	// (0x0003bd4c) list_single_midp_pane_ParamLimits

0xd26d,	// (0x0003bd4c) list_single_midp_pane

0x7b56,	// (0x00036635) form_midp_field_text_pane_t1

0x79ac,	// (0x0003648b) input_focus_pane_cp050

0x7b77,	// (0x00036656) list_midp_form_text_pane

0x7b25,	// (0x00036604) form_midp_field_choice_group_pane_t1

0x7b33,	// (0x00036612) input_focus_pane_cp051

0x7b47,	// (0x00036626) list_midp_choice_pane

0x4415,	// (0x00032ef4) status_idle_pane

0x7b09,	// (0x000365e8) form_midp_field_time_pane_t1

0x4256,	// (0x00032d35) wait_anim_pane_g2_copy1

0x7b17,	// (0x000365f6) form_midp_field_time_pane_t2

0x0001,

0x7607,	// (0x000360e6) aid_navinavi_width_2_pane

0xf81e,	// (0x0003e2fd) form_midp_field_time_pane_t

0x4415,	// (0x00032ef4) input_focus_pane_cp052

0x4415,	// (0x00032ef4) bg_input_focus_pane_cp040

0x7ae5,	// (0x000365c4) form_midp_gauge_slider_pane_t1

0x7af3,	// (0x000365d2) form_midp_gauge_slider_pane_t2

0x15db,	// (0x000300ba) form_midp_gauge_slider_pane_t3

0x15e9,	// (0x000300c8) form_midp_gauge_slider_pane_t4

0x0003,

0xf815,	// (0x0003e2f4) form_midp_gauge_slider_pane_t

0x7b01,	// (0x000365e0) form_midp_slider_pane

0x45a9,	// (0x00033088) bg_input_focus_pane_cp041_ParamLimits

0x45a9,	// (0x00033088) bg_input_focus_pane_cp041

0x7ab5,	// (0x00036594) form_midp_gauge_wait_pane_t1_ParamLimits

0x7ab5,	// (0x00036594) form_midp_gauge_wait_pane_t1

0x7ac7,	// (0x000365a6) form_midp_gauge_wait_pane_t2_ParamLimits

0x7ac7,	// (0x000365a6) form_midp_gauge_wait_pane_t2

0x0001,

0xf810,	// (0x0003e2ef) form_midp_gauge_wait_pane_t_ParamLimits

0xf810,	// (0x0003e2ef) form_midp_gauge_wait_pane_t

0x7ad9,	// (0x000365b8) form_midp_wait_pane_ParamLimits

0x7ad9,	// (0x000365b8) form_midp_wait_pane

0x7a7f,	// (0x0003655e) form_midp_image_pane_g1

0x7a88,	// (0x00036567) form_midp_image_pane_t1

0x7a97,	// (0x00036576) form_midp_image_pane_t2

0x7aa6,	// (0x00036585) form_midp_image_pane_t3

0x0002,

0xf809,	// (0x0003e2e8) form_midp_image_pane_t

0x7a76,	// (0x00036555) list_single_midp_pane_g1

0x3c6e,	// (0x0003274d) list_single_midp_pane_t1

0x7a62,	// (0x00036541) list_midp_form_item_pane_ParamLimits

0x7a62,	// (0x00036541) list_midp_form_item_pane

0x75af,	// (0x0003608e) list_midp_form_item_pane_t1

0x75be,	// (0x0003609d) midp_ticker_pane_g1

0x75ca,	// (0x000360a9) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0003e23c) midp_ticker_pane_g

0x75d6,	// (0x000360b5) midp_ticker_pane_t1

0x8a0e,	// (0x000374ed) midp_editing_number_pane_t1

0x8a96,	// (0x00037575) midp_editing_number_pane

0x8aa2,	// (0x00037581) midp_ticker_pane

0x89fe,	// (0x000374dd) ai_message_heading_pane

0x4415,	// (0x00032ef4) bg_popup_window_pane_cp14

0x8a06,	// (0x000374e5) listscroll_ai_message_pane

0x8988,	// (0x00037467) ai_message_heading_pane_g1_ParamLimits

0x8988,	// (0x00037467) ai_message_heading_pane_g1

0x8994,	// (0x00037473) ai_message_heading_pane_g2_ParamLimits

0x8994,	// (0x00037473) ai_message_heading_pane_g2

0x89a0,	// (0x0003747f) ai_message_heading_pane_g3_ParamLimits

0x89a0,	// (0x0003747f) ai_message_heading_pane_g3

0x89ac,	// (0x0003748b) ai_message_heading_pane_g4_ParamLimits

0x89ac,	// (0x0003748b) ai_message_heading_pane_g4

0x0003,

0xf94a,	// (0x0003e429) ai_message_heading_pane_g_ParamLimits

0xf94a,	// (0x0003e429) ai_message_heading_pane_g

0x89b8,	// (0x00037497) ai_message_heading_pane_t1_ParamLimits

0x89b8,	// (0x00037497) ai_message_heading_pane_t1

0x89d2,	// (0x000374b1) ai_message_heading_pane_t2_ParamLimits

0x89d2,	// (0x000374b1) ai_message_heading_pane_t2

0x0001,

0xf953,	// (0x0003e432) ai_message_heading_pane_t_ParamLimits

0xf953,	// (0x0003e432) ai_message_heading_pane_t

0x89e4,	// (0x000374c3) bg_popup_heading_pane_cp1_ParamLimits

0x89e4,	// (0x000374c3) bg_popup_heading_pane_cp1

0x8976,	// (0x00037455) list_ai_message_pane_ParamLimits

0x8976,	// (0x00037455) list_ai_message_pane

0x4de5,	// (0x000338c4) scroll_pane_cp10

0x8912,	// (0x000373f1) list_ai_message_pane_g1

0x891a,	// (0x000373f9) list_ai_message_pane_g2

0x0001,

0xf927,	// (0x0003e406) list_ai_message_pane_g

0x8922,	// (0x00037401) list_ai_message_pane_t1_ParamLimits

0x8922,	// (0x00037401) list_ai_message_pane_t1

0x8937,	// (0x00037416) list_ai_message_pane_t2_ParamLimits

0x8937,	// (0x00037416) list_ai_message_pane_t2

0x894c,	// (0x0003742b) list_ai_message_pane_t3_ParamLimits

0x894c,	// (0x0003742b) list_ai_message_pane_t3

0x8961,	// (0x00037440) list_ai_message_pane_t4_ParamLimits

0x8961,	// (0x00037440) list_ai_message_pane_t4

0x0003,

0xf92c,	// (0x0003e40b) list_ai_message_pane_t_ParamLimits

0xf92c,	// (0x0003e40b) list_ai_message_pane_t

0x8900,	// (0x000373df) cell_ai_soft_ind_pane_ParamLimits

0x8900,	// (0x000373df) cell_ai_soft_ind_pane

0x75e8,	// (0x000360c7) cell_ai_soft_ind_pane_g1_ParamLimits

0x75e8,	// (0x000360c7) cell_ai_soft_ind_pane_g1

0x4415,	// (0x00032ef4) grid_highlight_cp1

0x75f5,	// (0x000360d4) text_secondary_cp56_ParamLimits

0x75f5,	// (0x000360d4) text_secondary_cp56

0x88d5,	// (0x000373b4) example_general_pane_ParamLimits

0x88d5,	// (0x000373b4) example_general_pane

0x88e1,	// (0x000373c0) example_parent_pane_g1_ParamLimits

0x88e1,	// (0x000373c0) example_parent_pane_g1

0x88ed,	// (0x000373cc) example_parent_pane_t1_ParamLimits

0x88ed,	// (0x000373cc) example_parent_pane_t1

0xdb00,	// (0x0003c5df) popup_preview_text_window_ParamLimits

0xdb00,	// (0x0003c5df) popup_preview_text_window

0x58e4,	// (0x000343c3) list_single_pane_cp2_g4

0x484a,	// (0x00033329) bg_popup_preview_window_pane_ParamLimits

0x484a,	// (0x00033329) bg_popup_preview_window_pane

0x868c,	// (0x0003716b) popup_preview_text_window_t1_ParamLimits

0x868c,	// (0x0003716b) popup_preview_text_window_t1

0x86aa,	// (0x00037189) popup_preview_text_window_t2_ParamLimits

0x86aa,	// (0x00037189) popup_preview_text_window_t2

0x86f3,	// (0x000371d2) popup_preview_text_window_t3_ParamLimits

0x86f3,	// (0x000371d2) popup_preview_text_window_t3

0x8738,	// (0x00037217) popup_preview_text_window_t4_ParamLimits

0x8738,	// (0x00037217) popup_preview_text_window_t4

0x0004,

0xf8fb,	// (0x0003e3da) popup_preview_text_window_t_ParamLimits

0xf8fb,	// (0x0003e3da) popup_preview_text_window_t

0x87b6,	// (0x00037295) scroll_pane_cp11

0x792c,	// (0x0003640b) bg_popup_preview_window_pane_g1

0x864c,	// (0x0003712b) bg_popup_preview_window_pane_g2

0x8654,	// (0x00037133) bg_popup_preview_window_pane_g3

0x865c,	// (0x0003713b) bg_popup_preview_window_pane_g4

0x8664,	// (0x00037143) bg_popup_preview_window_pane_g5

0x866c,	// (0x0003714b) bg_popup_preview_window_pane_g6

0x8674,	// (0x00037153) bg_popup_preview_window_pane_g7

0x867c,	// (0x0003715b) bg_popup_preview_window_pane_g8

0x4268,	// (0x00032d47) aid_popup_width_pane

0xda82,	// (0x0003c561) popup_midp_note_alarm_window_ParamLimits

0xda82,	// (0x0003c561) popup_midp_note_alarm_window

0x4c96,	// (0x00033775) data_form_pane_ParamLimits

0xd0e3,	// (0x0003bbc2) form_field_data_pane_g1

0xd0ed,	// (0x0003bbcc) form_field_data_pane_t1_ParamLimits

0x4ca2,	// (0x00033781) input_focus_pane_ParamLimits

0x4cb0,	// (0x0003378f) data_form_wide_pane_ParamLimits

0x3965,	// (0x00032444) form_field_data_wide_pane_g1

0x3971,	// (0x00032450) form_field_data_wide_pane_t1_ParamLimits

0x4a09,	// (0x000334e8) input_focus_pane_cp6_ParamLimits

0x0b35,	// (0x0002f614) input_popup_find_pane_g1_ParamLimits

0x0b35,	// (0x0002f614) input_popup_find_pane_g1

0x508f,	// (0x00033b6e) aid_navi_side_left_pane

0x509f,	// (0x00033b7e) aid_navi_side_right_pane

0x8134,	// (0x00036c13) bg_popup_window_pane_cp30_ParamLimits

0x8134,	// (0x00036c13) bg_popup_window_pane_cp30

0x81ae,	// (0x00036c8d) popup_midp_note_alarm_window_g1_ParamLimits

0x81ae,	// (0x00036c8d) popup_midp_note_alarm_window_g1

0x81de,	// (0x00036cbd) popup_midp_note_alarm_window_t1_ParamLimits

0x81de,	// (0x00036cbd) popup_midp_note_alarm_window_t1

0x827f,	// (0x00036d5e) popup_midp_note_alarm_window_t2_ParamLimits

0x827f,	// (0x00036d5e) popup_midp_note_alarm_window_t2

0x832d,	// (0x00036e0c) popup_midp_note_alarm_window_t3_ParamLimits

0x832d,	// (0x00036e0c) popup_midp_note_alarm_window_t3

0x8355,	// (0x00036e34) popup_midp_note_alarm_window_t4_ParamLimits

0x8355,	// (0x00036e34) popup_midp_note_alarm_window_t4

0x8375,	// (0x00036e54) popup_midp_note_alarm_window_t5_ParamLimits

0x8375,	// (0x00036e54) popup_midp_note_alarm_window_t5

0x000a,

0xf898,	// (0x0003e377) popup_midp_note_alarm_window_t_ParamLimits

0xf898,	// (0x0003e377) popup_midp_note_alarm_window_t

0x8421,	// (0x00036f00) wait_bar_pane_cp1_ParamLimits

0x8421,	// (0x00036f00) wait_bar_pane_cp1

0x4415,	// (0x00032ef4) wait_anim_pane_copy1

0x4415,	// (0x00032ef4) wait_border_pane_copy1

0x7e7a,	// (0x00036959) wait_border_pane_g1_copy1

0x398b,	// (0x0003246a) form_field_popup_pane_g1

0xd105,	// (0x0003bbe4) form_field_popup_pane_t1_ParamLimits

0x4ca2,	// (0x00033781) input_focus_pane_cp7_ParamLimits

0x4c96,	// (0x00033775) list_form_pane_ParamLimits

0x39ab,	// (0x0003248a) form_field_popup_wide_pane_g1

0x39b3,	// (0x00032492) form_field_popup_wide_pane_t1_ParamLimits

0x4ca2,	// (0x00033781) input_focus_pane_cp8_ParamLimits

0x4cd0,	// (0x000337af) list_form_wide_pane_ParamLimits

0x8b36,	// (0x00037615) aid_size_cell_graphic_pane

0xd182,	// (0x0003bc61) data_form_pane_t1_ParamLimits

0xd294,	// (0x0003bd73) data_form_wide_pane_t1_ParamLimits

0x12cb,	// (0x0002fdaa) bg_status_flat_pane

0x02e2,	// (0x0002edc1) title_pane_t1_ParamLimits

0x4571,	// (0x00033050) title_pane_t2_ParamLimits

0x4597,	// (0x00033076) title_pane_t3_ParamLimits

0xf557,	// (0x0003e036) title_pane_t_ParamLimits

0x0f29,	// (0x0002fa08) level_1_signal_ParamLimits

0x0f3b,	// (0x0002fa1a) level_2_signal_ParamLimits

0x0f4e,	// (0x0002fa2d) level_3_signal_ParamLimits

0x0f61,	// (0x0002fa40) level_4_signal_ParamLimits

0x0f74,	// (0x0002fa53) level_5_signal_ParamLimits

0x0f87,	// (0x0002fa66) level_6_signal_ParamLimits

0x0f9a,	// (0x0002fa79) level_7_signal_ParamLimits

0x0f29,	// (0x0002fa08) level_1_battery_ParamLimits

0x0f3b,	// (0x0002fa1a) level_2_battery_ParamLimits

0x0f4e,	// (0x0002fa2d) level_3_battery_ParamLimits

0x0f61,	// (0x0002fa40) level_4_battery_ParamLimits

0x0f74,	// (0x0002fa53) level_5_battery_ParamLimits

0x0f87,	// (0x0002fa66) level_6_battery_ParamLimits

0x0f9a,	// (0x0002fa79) level_7_battery_ParamLimits

0x8063,	// (0x00036b42) bg_status_flat_pane_g1

0x806b,	// (0x00036b4a) bg_status_flat_pane_g2

0x8073,	// (0x00036b52) bg_status_flat_pane_g3

0x807b,	// (0x00036b5a) bg_status_flat_pane_g4

0x8083,	// (0x00036b62) bg_status_flat_pane_g5

0x808b,	// (0x00036b6a) bg_status_flat_pane_g6

0x8093,	// (0x00036b72) bg_status_flat_pane_g7

0x036f,	// (0x0002ee4e) tabs_3_active_pane_t1_ParamLimits

0x036f,	// (0x0002ee4e) tabs_3_passive_pane_t1_ParamLimits

0x0385,	// (0x0002ee64) tabs_4_active_pane_t1_ParamLimits

0x0385,	// (0x0002ee64) tabs_4_1_passive_pane_t1_ParamLimits

0x0b41,	// (0x0002f620) tabs_2_active_pane_t1_ParamLimits

0x0b41,	// (0x0002f620) tabs_2_passive_pane_t1_ParamLimits

0x45a9,	// (0x00033088) bg_active_tab_pane_cp4_ParamLimits

0x0b57,	// (0x0002f636) tabs_2_long_active_pane_t1_ParamLimits

0x5b78,	// (0x00034657) bg_passive_tab_pane_cp4_ParamLimits

0x6074,	// (0x00034b53) list_single_midp_graphic_pane_t1_ParamLimits

0x45a9,	// (0x00033088) bg_active_tab_pane_cp5_ParamLimits

0x0b6e,	// (0x0002f64d) tabs_3_long_active_pane_t1_ParamLimits

0x5b78,	// (0x00034657) bg_passive_tab_pane_cp5_ParamLimits

0x6074,	// (0x00034b53) list_single_midp_graphic_pane_t1

0x12cb,	// (0x0002fdaa) bg_status_flat_pane_ParamLimits

0x77ff,	// (0x000362de) indicator_pane_cp2_ParamLimits

0x77ff,	// (0x000362de) indicator_pane_cp2

0x1431,	// (0x0002ff10) navi_pane_srt_ParamLimits

0x1431,	// (0x0002ff10) navi_pane_srt

0x7827,	// (0x00036306) popup_clock_digital_analogue_window_cp1

0x467f,	// (0x0003315e) indicator_pane_t1

0x7594,	// (0x00036073) copy_highlight_pane

0x7594,	// (0x00036073) cursor_graphics_pane

0x7594,	// (0x00036073) graphic_within_text_pane

0x7594,	// (0x00036073) link_highlight_pane

0x8779,	// (0x00037258) popup_preview_text_window_t5_ParamLimits

0x8779,	// (0x00037258) popup_preview_text_window_t5

0x760f,	// (0x000360ee) cursor_digital_pane

0x760f,	// (0x000360ee) cursor_primary_pane

0x7620,	// (0x000360ff) cursor_primary_small_pane

0x7628,	// (0x00036107) cursor_secondary_pane

0x7630,	// (0x0003610f) cursor_title_pane

0x760f,	// (0x000360ee) link_highlight_digital_pane

0x7617,	// (0x000360f6) link_highlight_primary_pane

0x7620,	// (0x000360ff) link_highlight_primary_small_pane

0x7628,	// (0x00036107) link_highlight_secondary_pane

0x7630,	// (0x0003610f) link_highlight_title_pane

0x760f,	// (0x000360ee) copy_highlight_digital_pane

0x760f,	// (0x000360ee) copy_highlight_primary_pane

0x7620,	// (0x000360ff) copy_highlight_primary_small_pane

0x7628,	// (0x00036107) copy_highlight_secondary_pane

0x7630,	// (0x0003610f) copy_highlight_title_pane

0x7628,	// (0x00036107) graphic_text_digital_pane

0x80e3,	// (0x00036bc2) graphic_text_primary_pane

0x80ec,	// (0x00036bcb) graphic_text_primary_small_pane

0x7620,	// (0x000360ff) graphic_text_secondary_pane

0x760f,	// (0x000360ee) graphic_text_title_pane

0x114d,	// (0x0002fc2c) cursor_primary_pane_g1

0x80d5,	// (0x00036bb4) cursor_text_primary_t1

0x1633,	// (0x00030112) cursor_primary_small_pane_g1

0x80c7,	// (0x00036ba6) cursor_text_primary_small_t1

0x1629,	// (0x00030108) cursor_primary_small_pane_g1_copy1

0x80b9,	// (0x00036b98) cursor_text_primary_small_t1_copy1

0x80ab,	// (0x00036b8a) cursor_text_title_t1

0x161f,	// (0x000300fe) cursor_title_pane_g1

0x114d,	// (0x0002fc2c) cursor_digital_pane_g1

0x7638,	// (0x00036117) cursor_text_digital_t1

0x7646,	// (0x00036125) link_highlight_primary_pane_g1

0x8054,	// (0x00036b33) link_highlight_primary_pane_t1

0x7646,	// (0x00036125) link_highlight_primary_small_pane_g1

0x764e,	// (0x0003612d) link_highlight_primary_small_pane_t1

0x765d,	// (0x0003613c) link_highlight_secondary_pane_g1

0x7665,	// (0x00036144) link_highlight_secondary_pane_t1

0x7fb9,	// (0x00036a98) link_highlight_title_pane_g1

0x7fd0,	// (0x00036aaf) link_highlight_title_pane_t1

0x7fb9,	// (0x00036a98) link_highlight_digital_pane_g1

0x7fc1,	// (0x00036aa0) link_highlight_digital_pane_t1

0x7e95,	// (0x00036974) copy_highlight_primary_pane_g1

0x7ebb,	// (0x0003699a) copy_highlight_primary_pane_t1

0x7e95,	// (0x00036974) copy_highlight_primary_small_pane_g1

0x7eac,	// (0x0003698b) copy_highlight_primary_small_pane_t1

0x7674,	// (0x00036153) copy_highlight_secondary_pane_g1

0x767c,	// (0x0003615b) copy_highlight_secondary_pane_t1

0x7e95,	// (0x00036974) copy_highlight_title_pane_g1

0x7e9d,	// (0x0003697c) copy_highlight_title_pane_t1

0x7e95,	// (0x00036974) copy_highlight_digital_pane_g1

0x8c57,	// (0x00037736) copy_highlight_digital_pane_t1

0x8bab,	// (0x0003768a) graphic_text_primary_pane_g1

0x8c3b,	// (0x0003771a) graphic_text_primary_pane_t1

0x8c49,	// (0x00037728) graphic_text_primary_pane_t2

0x0001,

0xf9c7,	// (0x0003e4a6) graphic_text_primary_pane_t

0x8c17,	// (0x000376f6) graphic_text_primary_small_pane_g1

0x8c1f,	// (0x000376fe) graphic_text_primary_small_pane_t1

0x8c2d,	// (0x0003770c) graphic_text_primary_small_pane_t2

0x0001,

0xf9c2,	// (0x0003e4a1) graphic_text_primary_small_pane_t

0x8bf3,	// (0x000376d2) graphic_text_secondary_pane_g1

0x8bfb,	// (0x000376da) graphic_text_secondary_pane_t1

0x8c09,	// (0x000376e8) graphic_text_secondary_pane_t2

0x0001,

0xf9bd,	// (0x0003e49c) graphic_text_secondary_pane_t

0x8bcf,	// (0x000376ae) graphic_text_title_pane_g1

0x8bd7,	// (0x000376b6) graphic_text_title_pane_t1

0x8be5,	// (0x000376c4) graphic_text_title_pane_t2

0x0001,

0xf9b8,	// (0x0003e497) graphic_text_title_pane_t

0x8bab,	// (0x0003768a) graphic_text_digital_pane_g1

0x8bb3,	// (0x00037692) graphic_text_digital_pane_t1

0x8bc1,	// (0x000376a0) graphic_text_digital_pane_t2

0x0001,

0xf9b3,	// (0x0003e492) graphic_text_digital_pane_t

0x45a9,	// (0x00033088) navi_icon_pane_srt_ParamLimits

0x45a9,	// (0x00033088) navi_icon_pane_srt

0x4415,	// (0x00032ef4) navi_midp_pane_srt

0x4415,	// (0x00032ef4) navi_navi_pane_srt

0x45a9,	// (0x00033088) navi_text_pane_srt_ParamLimits

0x45a9,	// (0x00033088) navi_text_pane_srt

0x8605,	// (0x000370e4) navi_navi_icon_text_pane_srt

0x860d,	// (0x000370ec) navi_navi_pane_srt_g1_ParamLimits

0x860d,	// (0x000370ec) navi_navi_pane_srt_g1

0x861f,	// (0x000370fe) navi_navi_pane_srt_g2_ParamLimits

0x861f,	// (0x000370fe) navi_navi_pane_srt_g2

0x0001,

0xf9ae,	// (0x0003e48d) navi_navi_pane_srt_g_ParamLimits

0xf9ae,	// (0x0003e48d) navi_navi_pane_srt_g

0x8631,	// (0x00037110) navi_navi_tabs_pane_srt

0x8605,	// (0x000370e4) navi_navi_text_pane_srt

0x8605,	// (0x000370e4) navi_navi_volume_pane_srt

0x8b9c,	// (0x0003767b) navi_navi_text_pane_srt_t1

0x6435,	// (0x00034f14) navi_navi_volume_pane_srt_g1

0x643d,	// (0x00034f1c) volume_small_pane_srt_ParamLimits

0x643d,	// (0x00034f1c) volume_small_pane_srt

0x5963,	// (0x00034442) volume_small_pane_srt_g1_ParamLimits

0x5963,	// (0x00034442) volume_small_pane_srt_g1

0x5973,	// (0x00034452) volume_small_pane_srt_g2_ParamLimits

0x5973,	// (0x00034452) volume_small_pane_srt_g2

0x5984,	// (0x00034463) volume_small_pane_srt_g3_ParamLimits

0x5984,	// (0x00034463) volume_small_pane_srt_g3

0x5995,	// (0x00034474) volume_small_pane_srt_g4_ParamLimits

0x5995,	// (0x00034474) volume_small_pane_srt_g4

0x59a6,	// (0x00034485) volume_small_pane_srt_g5_ParamLimits

0x59a6,	// (0x00034485) volume_small_pane_srt_g5

0x59b7,	// (0x00034496) volume_small_pane_srt_g6_ParamLimits

0x59b7,	// (0x00034496) volume_small_pane_srt_g6

0x59c8,	// (0x000344a7) volume_small_pane_srt_g7_ParamLimits

0x59c8,	// (0x000344a7) volume_small_pane_srt_g7

0x59d9,	// (0x000344b8) volume_small_pane_srt_g8_ParamLimits

0x59d9,	// (0x000344b8) volume_small_pane_srt_g8

0x59ea,	// (0x000344c9) volume_small_pane_srt_g9_ParamLimits

0x59ea,	// (0x000344c9) volume_small_pane_srt_g9

0x59fb,	// (0x000344da) volume_small_pane_srt_g10_ParamLimits

0x59fb,	// (0x000344da) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0003e241) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0003e241) volume_small_pane_srt_g

0x48f3,	// (0x000333d2) query_popup_data_pane_cp2

0x8b82,	// (0x00037661) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x8b82,	// (0x00037661) navi_navi_icon_text_pane_srt_t1

0x80e3,	// (0x00036bc2) navi_tabs_2_long_pane_srt

0x80e3,	// (0x00036bc2) navi_tabs_2_pane_srt

0x80e3,	// (0x00036bc2) navi_tabs_3_long_pane_srt

0x80e3,	// (0x00036bc2) navi_tabs_3_pane_srt

0x80e3,	// (0x00036bc2) navi_tabs_4_pane_srt

0x6415,	// (0x00034ef4) tabs_2_active_pane_srt_ParamLimits

0x6415,	// (0x00034ef4) tabs_2_active_pane_srt

0x6425,	// (0x00034f04) tabs_2_passive_pane_srt_ParamLimits

0x6425,	// (0x00034f04) tabs_2_passive_pane_srt

0x79ac,	// (0x0003648b) bg_passive_tab_pane_cp1_srt_ParamLimits

0x79ac,	// (0x0003648b) bg_passive_tab_pane_cp1_srt

0x8b60,	// (0x0003763f) bg_passive_tab_pane_g1_cp1_srt

0x557c,	// (0x0003405b) bg_passive_tab_pane_g2_cp1_srt

0x8b69,	// (0x00037648) bg_passive_tab_pane_g3_cp1_srt

0x476e,	// (0x0003324d) bg_active_tab_pane_cp1_srt_ParamLimits

0x476e,	// (0x0003324d) bg_active_tab_pane_cp1_srt

0x8b72,	// (0x00037651) tabs_2_active_pane_srt_g1

0x0b41,	// (0x0002f620) tabs_2_active_pane_srt_t1_ParamLimits

0x0b41,	// (0x0002f620) tabs_2_active_pane_srt_t1

0x8b60,	// (0x0003763f) bg_active_tab_pane_g1_cp1_srt

0x557c,	// (0x0003405b) bg_active_tab_pane_g2_cp1_srt

0x8b69,	// (0x00037648) bg_active_tab_pane_g3_cp1_srt

0x63e2,	// (0x00034ec1) tabs_3_active_pane_srt_ParamLimits

0x63e2,	// (0x00034ec1) tabs_3_active_pane_srt

0x63f3,	// (0x00034ed2) tabs_3_passive_pane_cp_srt_ParamLimits

0x63f3,	// (0x00034ed2) tabs_3_passive_pane_cp_srt

0x6404,	// (0x00034ee3) tabs_3_passive_pane_srt_ParamLimits

0x6404,	// (0x00034ee3) tabs_3_passive_pane_srt

0x79ac,	// (0x0003648b) bg_passive_tab_pane_cp2_srt_ParamLimits

0x79ac,	// (0x0003648b) bg_passive_tab_pane_cp2_srt

0x768b,	// (0x0003616a) bg_passive_tab_pane_g1_cp2_srt

0x557c,	// (0x0003405b) bg_passive_tab_pane_g2_cp2_srt

0x7694,	// (0x00036173) bg_passive_tab_pane_g3_cp2_srt

0x476e,	// (0x0003324d) bg_active_tab_pane_cp2_srt_ParamLimits

0x476e,	// (0x0003324d) bg_active_tab_pane_cp2_srt

0x8b58,	// (0x00037637) tabs_3_active_pane_srt_g1

0x036f,	// (0x0002ee4e) tabs_3_active_pane_srt_t1_ParamLimits

0x036f,	// (0x0002ee4e) tabs_3_active_pane_srt_t1

0x768b,	// (0x0003616a) bg_active_tab_pane_g1_cp2_srt

0x557c,	// (0x0003405b) bg_active_tab_pane_g2_cp2_srt

0x7694,	// (0x00036173) bg_active_tab_pane_g3_cp2_srt

0x639a,	// (0x00034e79) tabs_4_active_pane_srt_ParamLimits

0x639a,	// (0x00034e79) tabs_4_active_pane_srt

0x63ac,	// (0x00034e8b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x63ac,	// (0x00034e8b) tabs_4_passive_pane_cp2_srt

0x5b60,	// (0x0003463f) aid_size_cell_toolbar

0xd7f2,	// (0x0003c2d1) main_idle_act_pane_ParamLimits

0x5ccd,	// (0x000347ac) popup_large_graphic_colour_window_ParamLimits

0xdd50,	// (0x0003c82f) popup_toolbar_window_ParamLimits

0xdd50,	// (0x0003c82f) popup_toolbar_window

0x6355,	// (0x00034e34) list_single_graphic_2heading_pane_ParamLimits

0x6355,	// (0x00034e34) list_single_graphic_2heading_pane

0x50ff,	// (0x00033bde) aid_size_cell_apps_grid_lsc_pane

0x5111,	// (0x00033bf0) aid_size_cell_apps_grid_prt_pane

0x5b78,	// (0x00034657) bg_wml_button_pane_cp1_ParamLimits

0x5b78,	// (0x00034657) bg_wml_button_pane_cp1

0x7b56,	// (0x00036635) form_midp_field_text_pane_t1_ParamLimits

0x79ac,	// (0x0003648b) input_focus_pane_cp050_ParamLimits

0x7b77,	// (0x00036656) list_midp_form_text_pane_ParamLimits

0x7b33,	// (0x00036612) input_focus_pane_cp051_ParamLimits

0x7b47,	// (0x00036626) list_midp_choice_pane_ParamLimits

0x7a30,	// (0x0003650f) list_single_2graphic_pane_cp3_ParamLimits

0x7a30,	// (0x0003650f) list_single_2graphic_pane_cp3

0x7a43,	// (0x00036522) list_single_midp_graphic_pane_ParamLimits

0x7a43,	// (0x00036522) list_single_midp_graphic_pane

0x3b86,	// (0x00032665) list_single_graphic_2heading_pane_g1_ParamLimits

0x3b86,	// (0x00032665) list_single_graphic_2heading_pane_g1

0x3b92,	// (0x00032671) list_single_graphic_2heading_pane_g4_ParamLimits

0x3b92,	// (0x00032671) list_single_graphic_2heading_pane_g4

0x3742,	// (0x00032221) list_single_graphic_2heading_pane_g5_ParamLimits

0x3742,	// (0x00032221) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0003e294) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0003e294) list_single_graphic_2heading_pane_g

0x3b9e,	// (0x0003267d) list_single_graphic_2heading_pane_t1_ParamLimits

0x3b9e,	// (0x0003267d) list_single_graphic_2heading_pane_t1

0x3bb2,	// (0x00032691) list_single_graphic_2heading_pane_t2_ParamLimits

0x3bb2,	// (0x00032691) list_single_graphic_2heading_pane_t2

0x3bcc,	// (0x000326ab) list_single_graphic_2heading_pane_t3_ParamLimits

0x3bcc,	// (0x000326ab) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0003e29b) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0003e29b) list_single_graphic_2heading_pane_t

0x7876,	// (0x00036355) bg_popup_sub_pane_cp2

0x789c,	// (0x0003637b) grid_toobar_pane

0x6010,	// (0x00034aef) cell_toolbar_pane_ParamLimits

0x6010,	// (0x00034aef) cell_toolbar_pane

0x78d2,	// (0x000363b1) cell_toolbar_pane_g1_ParamLimits

0x78d2,	// (0x000363b1) cell_toolbar_pane_g1

0x78e4,	// (0x000363c3) cell_toolbar_pane_g2_ParamLimits

0x78e4,	// (0x000363c3) cell_toolbar_pane_g2

0x0001,

0xf7c3,	// (0x0003e2a2) cell_toolbar_pane_g_ParamLimits

0xf7c3,	// (0x0003e2a2) cell_toolbar_pane_g

0x7906,	// (0x000363e5) grid_highlight_pane_cp2_ParamLimits

0x7906,	// (0x000363e5) grid_highlight_pane_cp2

0x7920,	// (0x000363ff) toolbar_button_pane

0x792c,	// (0x0003640b) toolbar_button_pane_g1

0x7934,	// (0x00036413) toolbar_button_pane_g2

0x793c,	// (0x0003641b) toolbar_button_pane_g3

0x7944,	// (0x00036423) toolbar_button_pane_g4

0x794c,	// (0x0003642b) toolbar_button_pane_g5

0x7954,	// (0x00036433) toolbar_button_pane_g6

0x795c,	// (0x0003643b) toolbar_button_pane_g7

0x7964,	// (0x00036443) toolbar_button_pane_g8

0x796c,	// (0x0003644b) toolbar_button_pane_g9

0x0009,

0xf7c8,	// (0x0003e2a7) toolbar_button_pane_g

0x603f,	// (0x00034b1e) list_single_2graphic_pane_g1_cp3_ParamLimits

0x603f,	// (0x00034b1e) list_single_2graphic_pane_g1_cp3

0xdd92,	// (0x0003c871) list_single_2graphic_pane_g2_cp3_ParamLimits

0xdd92,	// (0x0003c871) list_single_2graphic_pane_g2_cp3

0x5820,	// (0x000342ff) list_single_2graphic_pane_g3_cp3

0x7974,	// (0x00036453) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7974,	// (0x00036453) list_single_2graphic_pane_g4_cp3

0x605a,	// (0x00034b39) list_single_2graphic_pane_t1_cp3_ParamLimits

0x605a,	// (0x00034b39) list_single_2graphic_pane_t1_cp3

0x5814,	// (0x000342f3) list_single_midp_graphic_pane_g2_ParamLimits

0x5814,	// (0x000342f3) list_single_midp_graphic_pane_g2

0x3b59,	// (0x00032638) aid_zoom_text_primary

0x5b68,	// (0x00034647) aid_zoom_text_secondary

0x1187,	// (0x0002fc66) status_small_pane_g7_ParamLimits

0x1187,	// (0x0002fc66) status_small_pane_g7

0x11aa,	// (0x0002fc89) status_small_pane_t1_ParamLimits

0x02b7,	// (0x0002ed96) title_pane_g2

0x0003,

0xf54e,	// (0x0003e02d) title_pane_g

0x0555,	// (0x0002f034) aid_size_cell_colour_1_pane_ParamLimits

0x0555,	// (0x0002f034) aid_size_cell_colour_1_pane

0x0569,	// (0x0002f048) aid_size_cell_colour_2_pane_ParamLimits

0x0569,	// (0x0002f048) aid_size_cell_colour_2_pane

0x057d,	// (0x0002f05c) aid_size_cell_colour_3_pane_ParamLimits

0x057d,	// (0x0002f05c) aid_size_cell_colour_3_pane

0x0591,	// (0x0002f070) aid_size_cell_colour_4_pane_ParamLimits

0x0591,	// (0x0002f070) aid_size_cell_colour_4_pane

0x4fae,	// (0x00033a8d) title_pane_stacon_g1_ParamLimits

0x4fae,	// (0x00033a8d) title_pane_stacon_g1

0x7f12,	// (0x000369f1) popup_note_wait_window_g3_ParamLimits

0x7f12,	// (0x000369f1) popup_note_wait_window_g3

0x7f88,	// (0x00036a67) popup_note_wait_window_t5_ParamLimits

0x7f88,	// (0x00036a67) popup_note_wait_window_t5

0x4415,	// (0x00032ef4) main_feb_china_hwr_fs_writing_pane

0xd853,	// (0x0003c332) popup_feb_china_hwr_fs_window_ParamLimits

0xd853,	// (0x0003c332) popup_feb_china_hwr_fs_window

0xdda3,	// (0x0003c882) aid_size_cell_hwr_fs_ParamLimits

0xdda3,	// (0x0003c882) aid_size_cell_hwr_fs

0x79ac,	// (0x0003648b) bg_popup_sub_pane_cp3_ParamLimits

0x79ac,	// (0x0003648b) bg_popup_sub_pane_cp3

0xddb8,	// (0x0003c897) grid_hwr_fs_pane_ParamLimits

0xddb8,	// (0x0003c897) grid_hwr_fs_pane

0x60cb,	// (0x00034baa) linegrid_hwr_fs_pane_ParamLimits

0x60cb,	// (0x00034baa) linegrid_hwr_fs_pane

0xddd0,	// (0x0003c8af) cell_hwr_fs_pane_ParamLimits

0xddd0,	// (0x0003c8af) cell_hwr_fs_pane

0x79b8,	// (0x00036497) linegrid_hwr_fs_pane_g1_ParamLimits

0x79b8,	// (0x00036497) linegrid_hwr_fs_pane_g1

0x15af,	// (0x0003008e) linegrid_hwr_fs_pane_g2_ParamLimits

0x15af,	// (0x0003008e) linegrid_hwr_fs_pane_g2

0x79c4,	// (0x000364a3) linegrid_hwr_fs_pane_g3_ParamLimits

0x79c4,	// (0x000364a3) linegrid_hwr_fs_pane_g3

0x60f9,	// (0x00034bd8) linegrid_hwr_fs_pane_g4_ParamLimits

0x60f9,	// (0x00034bd8) linegrid_hwr_fs_pane_g4

0x6113,	// (0x00034bf2) linegrid_hwr_fs_pane_g5_ParamLimits

0x6113,	// (0x00034bf2) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ee,	// (0x0003e2cd) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ee,	// (0x0003e2cd) linegrid_hwr_fs_pane_g

0x79d0,	// (0x000364af) cell_hwr_fs_pane_g1_ParamLimits

0x79d0,	// (0x000364af) cell_hwr_fs_pane_g1

0x7844,	// (0x00036323) cell_hwr_fs_pane_g2_ParamLimits

0x7844,	// (0x00036323) cell_hwr_fs_pane_g2

0x15c1,	// (0x000300a0) cell_hwr_fs_pane_g3_ParamLimits

0x15c1,	// (0x000300a0) cell_hwr_fs_pane_g3

0x15ce,	// (0x000300ad) cell_hwr_fs_pane_g4_ParamLimits

0x15ce,	// (0x000300ad) cell_hwr_fs_pane_g4

0x0003,

0xf7f9,	// (0x0003e2d8) cell_hwr_fs_pane_g_ParamLimits

0xf7f9,	// (0x0003e2d8) cell_hwr_fs_pane_g

0xddf0,	// (0x0003c8cf) cell_hwr_fs_pane_t1

0x4415,	// (0x00032ef4) grid_highlight_pane_cp6

0x4415,	// (0x00032ef4) main_idle_act2_pane

0x4dcc,	// (0x000338ab) aid_inside_area_popup_secondary

0x1653,	// (0x00030132) aid_inside_area_window_primary_ParamLimits

0x1653,	// (0x00030132) aid_inside_area_window_primary

0x8c66,	// (0x00037745) ai2_news_ticker_pane

0x8c6e,	// (0x0003774d) aid_size_cell_ai1_link_ParamLimits

0x8c6e,	// (0x0003774d) aid_size_cell_ai1_link

0x19f0,	// (0x000304cf) popup_ai2_data_window_ParamLimits

0x19f0,	// (0x000304cf) popup_ai2_data_window

0x8c88,	// (0x00037767) popup_ai2_link_window_ParamLimits

0x8c88,	// (0x00037767) popup_ai2_link_window

0x79ac,	// (0x0003648b) bg_popup_sub_pane_cp4_ParamLimits

0x79ac,	// (0x0003648b) bg_popup_sub_pane_cp4

0x8c9c,	// (0x0003777b) grid_ai2_link_pane_ParamLimits

0x8c9c,	// (0x0003777b) grid_ai2_link_pane

0x8cb3,	// (0x00037792) popup_ai2_link_window_g1_ParamLimits

0x8cb3,	// (0x00037792) popup_ai2_link_window_g1

0x8cbf,	// (0x0003779e) popup_ai2_link_window_g2_ParamLimits

0x8cbf,	// (0x0003779e) popup_ai2_link_window_g2

0x0001,

0xf9cc,	// (0x0003e4ab) popup_ai2_link_window_g_ParamLimits

0xf9cc,	// (0x0003e4ab) popup_ai2_link_window_g

0x8cce,	// (0x000377ad) ai2_mp_button_pane

0x8cd6,	// (0x000377b5) ai2_mp_volume_pane

0x7b33,	// (0x00036612) bg_popup_sub_pane_cp5_ParamLimits

0x7b33,	// (0x00036612) bg_popup_sub_pane_cp5

0x8cde,	// (0x000377bd) heading_ai2_gene_pane_ParamLimits

0x8cde,	// (0x000377bd) heading_ai2_gene_pane

0x8cea,	// (0x000377c9) list_ai2_gene_pane_ParamLimits

0x8cea,	// (0x000377c9) list_ai2_gene_pane

0x8d32,	// (0x00037811) cell_ai2_link_pane_ParamLimits

0x8d32,	// (0x00037811) cell_ai2_link_pane

0x8d48,	// (0x00037827) cell_ai2_link_pane_g1

0x4415,	// (0x00032ef4) grid_highlight_pane_cp7

0x6452,	// (0x00034f31) ai2_mp_volume_pane_g1

0x8ddd,	// (0x000378bc) ai2_mp_volume_pane_g2

0x1a1a,	// (0x000304f9) list_ai2_gene_pane_t1

0x8de5,	// (0x000378c4) ai2_mp_volume_pane_g3

0x0002,

0xf9e5,	// (0x0003e4c4) ai2_mp_volume_pane_g

0x645a,	// (0x00034f39) volume_small_pane_cp3

0x8ded,	// (0x000378cc) aid_size_cell_ai2_button

0x8df5,	// (0x000378d4) grid_ai2_button_pane

0x8dfe,	// (0x000378dd) cell_ai2_button_pane_ParamLimits

0x8dfe,	// (0x000378dd) cell_ai2_button_pane

0x4256,	// (0x00032d35) cell_ai2_button_pane_g1

0x4415,	// (0x00032ef4) grid_highlight_pane_cp8

0x8d9d,	// (0x0003787c) ai2_gene_pane_t1_ParamLimits

0x8d9d,	// (0x0003787c) ai2_gene_pane_t1

0xd7bd,	// (0x0003c29c) aid_height_parent_landscape

0x179c,	// (0x0003027b) aid_height_set_list

0x8a5a,	// (0x00037539) aid_size_parent

0x8b36,	// (0x00037615) aid_size_cell_graphic_pane_ParamLimits

0x8cfa,	// (0x000377d9) popup_ai2_data_window_g1_ParamLimits

0x8cfa,	// (0x000377d9) popup_ai2_data_window_g1

0x8d06,	// (0x000377e5) ai2_news_ticker_pane_g1

0x8d0e,	// (0x000377ed) ai2_news_ticker_pane_g2

0x0001,

0xf9d1,	// (0x0003e4b0) ai2_news_ticker_pane_g

0x8d16,	// (0x000377f5) ai2_news_ticker_pane_t1

0x8d24,	// (0x00037803) ai2_news_ticker_pane_t2

0x0001,

0xf9d6,	// (0x0003e4b5) ai2_news_ticker_pane_t

0x8b17,	// (0x000375f6) heading_ai2_gene_pane_g1

0x8d51,	// (0x00037830) heading_ai2_gene_pane_t1_ParamLimits

0x8d51,	// (0x00037830) heading_ai2_gene_pane_t1

0x8d66,	// (0x00037845) list_highlight_pane_cp6

0x1a04,	// (0x000304e3) ai2_gene_pane_ParamLimits

0x1a04,	// (0x000304e3) ai2_gene_pane

0x1a28,	// (0x00030507) list_ai2_gene_pane_t2

0x0001,

0xf9db,	// (0x0003e4ba) list_ai2_gene_pane_t

0x8d6e,	// (0x0003784d) list_highlight_pane_cp8_ParamLimits

0x8d6e,	// (0x0003784d) list_highlight_pane_cp8

0x8d7f,	// (0x0003785e) ai2_gene_pane_g1_ParamLimits

0x8d7f,	// (0x0003785e) ai2_gene_pane_g1

0x8d91,	// (0x00037870) ai2_gene_pane_g2_ParamLimits

0x8d91,	// (0x00037870) ai2_gene_pane_g2

0x0001,

0xf9e0,	// (0x0003e4bf) ai2_gene_pane_g_ParamLimits

0xf9e0,	// (0x0003e4bf) ai2_gene_pane_g

0x4b8a,	// (0x00033669) scroll_pane_cp12

0xd77c,	// (0x0003c25b) control_pane_t3_ParamLimits

0xd77c,	// (0x0003c25b) control_pane_t3

0x119b,	// (0x0002fc7a) status_small_pane_g8_ParamLimits

0x119b,	// (0x0002fc7a) status_small_pane_g8

0xd8c7,	// (0x0003c3a6) popup_find_window_ParamLimits

0xdaba,	// (0x0003c599) popup_note_image_window_ParamLimits

0x35c8,	// (0x000320a7) list_double2_graphic_pane_vc_g1_ParamLimits

0x35c8,	// (0x000320a7) list_double2_graphic_pane_vc_g1

0x4bee,	// (0x000336cd) list_double2_graphic_pane_vc_g2_ParamLimits

0x4bee,	// (0x000336cd) list_double2_graphic_pane_vc_g2

0x4bfa,	// (0x000336d9) list_double2_graphic_pane_vc_g3_ParamLimits

0x4bfa,	// (0x000336d9) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x0003e0a0) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x0003e0a0) list_double2_graphic_pane_vc_g

0x35a0,	// (0x0003207f) list_double2_graphic_pane_vc_t1_ParamLimits

0x35a0,	// (0x0003207f) list_double2_graphic_pane_vc_t1

0x4bee,	// (0x000336cd) list_single_heading_pane_vc_g1_ParamLimits

0x4bee,	// (0x000336cd) list_single_heading_pane_vc_g1

0x4bfa,	// (0x000336d9) list_single_heading_pane_vc_g2_ParamLimits

0x4bfa,	// (0x000336d9) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0003e0b1) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0003e0b1) list_single_heading_pane_vc_g

0x3be4,	// (0x000326c3) list_single_heading_pane_vc_t1_ParamLimits

0x3be4,	// (0x000326c3) list_single_heading_pane_vc_t1

0x3bfa,	// (0x000326d9) list_single_heading_pane_vc_t2_ParamLimits

0x3bfa,	// (0x000326d9) list_single_heading_pane_vc_t2

0x0001,

0xf7dd,	// (0x0003e2bc) list_single_heading_pane_vc_t_ParamLimits

0xf7dd,	// (0x0003e2bc) list_single_heading_pane_vc_t

0x608a,	// (0x00034b69) list_setting_number_pane_vc_g1_ParamLimits

0x608a,	// (0x00034b69) list_setting_number_pane_vc_g1

0x6096,	// (0x00034b75) list_setting_number_pane_vc_g2_ParamLimits

0x6096,	// (0x00034b75) list_setting_number_pane_vc_g2

0x0001,

0xf7e2,	// (0x0003e2c1) list_setting_number_pane_vc_g_ParamLimits

0xf7e2,	// (0x0003e2c1) list_setting_number_pane_vc_g

0x3c0c,	// (0x000326eb) list_setting_number_pane_vc_t1_ParamLimits

0x3c0c,	// (0x000326eb) list_setting_number_pane_vc_t1

0x3c20,	// (0x000326ff) list_setting_number_pane_vc_t2_ParamLimits

0x3c20,	// (0x000326ff) list_setting_number_pane_vc_t2

0x3c3c,	// (0x0003271b) list_setting_number_pane_vc_t3_ParamLimits

0x3c3c,	// (0x0003271b) list_setting_number_pane_vc_t3

0x0002,

0xf7e7,	// (0x0003e2c6) list_setting_number_pane_vc_t_ParamLimits

0xf7e7,	// (0x0003e2c6) list_setting_number_pane_vc_t

0x3c62,	// (0x00032741) set_value_pane_vc_ParamLimits

0x3c62,	// (0x00032741) set_value_pane_vc

0x6355,	// (0x00034e34) list_double2_graphic_pane_vc_ParamLimits

0x6355,	// (0x00034e34) list_double2_graphic_pane_vc

0x8ab5,	// (0x00037594) list_double2_large_graphic_pane_vc_ParamLimits

0x8ab5,	// (0x00037594) list_double2_large_graphic_pane_vc

0x6355,	// (0x00034e34) list_double2_pane_vc_ParamLimits

0x6355,	// (0x00034e34) list_double2_pane_vc

0x6355,	// (0x00034e34) list_double_graphic_heading_pane_vc_ParamLimits

0x6355,	// (0x00034e34) list_double_graphic_heading_pane_vc

0x6355,	// (0x00034e34) list_double_graphic_pane_vc_ParamLimits

0x6355,	// (0x00034e34) list_double_graphic_pane_vc

0x6355,	// (0x00034e34) list_double_heading_pane_vc_ParamLimits

0x6355,	// (0x00034e34) list_double_heading_pane_vc

0x6368,	// (0x00034e47) list_double_large_graphic_pane_vc_ParamLimits

0x6368,	// (0x00034e47) list_double_large_graphic_pane_vc

0x6355,	// (0x00034e34) list_double_number_pane_vc_ParamLimits

0x6355,	// (0x00034e34) list_double_number_pane_vc

0x6355,	// (0x00034e34) list_double_pane_vc_ParamLimits

0x6355,	// (0x00034e34) list_double_pane_vc

0x6355,	// (0x00034e34) list_double_time_pane_vc_ParamLimits

0x6355,	// (0x00034e34) list_double_time_pane_vc

0x6355,	// (0x00034e34) list_setting_number_pane_vc_ParamLimits

0x6355,	// (0x00034e34) list_setting_number_pane_vc

0x6355,	// (0x00034e34) list_setting_pane_vc_ParamLimits

0x6355,	// (0x00034e34) list_setting_pane_vc

0x6355,	// (0x00034e34) list_single_graphic_heading_pane_vc_ParamLimits

0x6355,	// (0x00034e34) list_single_graphic_heading_pane_vc

0x6355,	// (0x00034e34) list_single_heading_pane_vc_ParamLimits

0x6355,	// (0x00034e34) list_single_heading_pane_vc

0x6355,	// (0x00034e34) list_single_number_heading_pane_vc_ParamLimits

0x6355,	// (0x00034e34) list_single_number_heading_pane_vc

0x35c8,	// (0x000320a7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x35c8,	// (0x000320a7) list_double_graphic_heading_pane_vc_g1

0x4bee,	// (0x000336cd) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4bee,	// (0x000336cd) list_double_graphic_heading_pane_vc_g2

0x4bfa,	// (0x000336d9) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4bfa,	// (0x000336d9) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf5c1,	// (0x0003e0a0) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf5c1,	// (0x0003e0a0) list_double_graphic_heading_pane_vc_g

0x3d3c,	// (0x0003281b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3d3c,	// (0x0003281b) list_double_graphic_heading_pane_vc_t1

0x3d52,	// (0x00032831) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3d52,	// (0x00032831) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ec,	// (0x0003e4cb) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ec,	// (0x0003e4cb) list_double_graphic_heading_pane_vc_t

0x608a,	// (0x00034b69) list_setting_pane_vc_g1_ParamLimits

0x608a,	// (0x00034b69) list_setting_pane_vc_g1

0x6096,	// (0x00034b75) list_setting_pane_vc_g2_ParamLimits

0x6096,	// (0x00034b75) list_setting_pane_vc_g2

0x0001,

0xf7e2,	// (0x0003e2c1) list_setting_pane_vc_g_ParamLimits

0xf7e2,	// (0x0003e2c1) list_setting_pane_vc_g

0x3d6a,	// (0x00032849) list_setting_pane_vc_t1_ParamLimits

0x3d6a,	// (0x00032849) list_setting_pane_vc_t1

0x3d7e,	// (0x0003285d) list_setting_pane_vc_t2_ParamLimits

0x3d7e,	// (0x0003285d) list_setting_pane_vc_t2

0x0001,

0xfa2f,	// (0x0003e50e) list_setting_pane_vc_t_ParamLimits

0xfa2f,	// (0x0003e50e) list_setting_pane_vc_t

0x3c62,	// (0x00032741) set_value_pane_cp_vc_ParamLimits

0x3c62,	// (0x00032741) set_value_pane_cp_vc

0x4bee,	// (0x000336cd) list_single_number_heading_pane_vc_g1_ParamLimits

0x4bee,	// (0x000336cd) list_single_number_heading_pane_vc_g1

0x4bfa,	// (0x000336d9) list_single_number_heading_pane_vc_g2_ParamLimits

0x4bfa,	// (0x000336d9) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0003e0b1) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0003e0b1) list_single_number_heading_pane_vc_g

0x3be4,	// (0x000326c3) list_single_number_heading_pane_vc_t1_ParamLimits

0x3be4,	// (0x000326c3) list_single_number_heading_pane_vc_t1

0x3d92,	// (0x00032871) list_single_number_heading_pane_vc_t2_ParamLimits

0x3d92,	// (0x00032871) list_single_number_heading_pane_vc_t2

0x3da4,	// (0x00032883) list_single_number_heading_pane_vc_t3_ParamLimits

0x3da4,	// (0x00032883) list_single_number_heading_pane_vc_t3

0x0002,

0xfa34,	// (0x0003e513) list_single_number_heading_pane_vc_t_ParamLimits

0xfa34,	// (0x0003e513) list_single_number_heading_pane_vc_t

0x35c8,	// (0x000320a7) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x35c8,	// (0x000320a7) list_single_graphic_heading_pane_vc_g1

0x4bee,	// (0x000336cd) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4bee,	// (0x000336cd) list_single_graphic_heading_pane_vc_g4

0x4bfa,	// (0x000336d9) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4bfa,	// (0x000336d9) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf5c1,	// (0x0003e0a0) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf5c1,	// (0x0003e0a0) list_single_graphic_heading_pane_vc_g

0x3be4,	// (0x000326c3) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3be4,	// (0x000326c3) list_single_graphic_heading_pane_vc_t1

0x3db6,	// (0x00032895) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3db6,	// (0x00032895) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3b,	// (0x0003e51a) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3b,	// (0x0003e51a) list_single_graphic_heading_pane_vc_t

0x4bee,	// (0x000336cd) list_double2_pane_vc_g1_ParamLimits

0x4bee,	// (0x000336cd) list_double2_pane_vc_g1

0x4bfa,	// (0x000336d9) list_double2_pane_vc_g2_ParamLimits

0x4bfa,	// (0x000336d9) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0003e0b1) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0003e0b1) list_double2_pane_vc_g

0x3523,	// (0x00032002) list_double2_pane_vc_t1_ParamLimits

0x3523,	// (0x00032002) list_double2_pane_vc_t1

0x4bc2,	// (0x000336a1) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x4bc2,	// (0x000336a1) list_double2_large_graphic_pane_vc_g1

0x4bce,	// (0x000336ad) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4bce,	// (0x000336ad) list_double2_large_graphic_pane_vc_g2

0x4bda,	// (0x000336b9) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4bda,	// (0x000336b9) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0003e0c9) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0003e0c9) list_double2_large_graphic_pane_vc_g

0x350d,	// (0x00031fec) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x350d,	// (0x00031fec) list_double2_large_graphic_pane_vc_t1

0x64b4,	// (0x00034f93) list_double_time_pane_vc_g1_ParamLimits

0x64b4,	// (0x00034f93) list_double_time_pane_vc_g1

0x64c0,	// (0x00034f9f) list_double_time_pane_vc_g2_ParamLimits

0x64c0,	// (0x00034f9f) list_double_time_pane_vc_g2

0x0001,

0xfa40,	// (0x0003e51f) list_double_time_pane_vc_g_ParamLimits

0xfa40,	// (0x0003e51f) list_double_time_pane_vc_g

0x3dc8,	// (0x000328a7) list_double_time_pane_vc_t1_ParamLimits

0x3dc8,	// (0x000328a7) list_double_time_pane_vc_t1

0x3de6,	// (0x000328c5) list_double_time_pane_vc_t2_ParamLimits

0x3de6,	// (0x000328c5) list_double_time_pane_vc_t2

0x3e2a,	// (0x00032909) list_double_time_pane_vc_t3_ParamLimits

0x3e2a,	// (0x00032909) list_double_time_pane_vc_t3

0x3e3c,	// (0x0003291b) list_double_time_pane_vc_t4_ParamLimits

0x3e3c,	// (0x0003291b) list_double_time_pane_vc_t4

0x0003,

0xfa45,	// (0x0003e524) list_double_time_pane_vc_t_ParamLimits

0xfa45,	// (0x0003e524) list_double_time_pane_vc_t

0x4bee,	// (0x000336cd) list_double_pane_vc_g1_ParamLimits

0x4bee,	// (0x000336cd) list_double_pane_vc_g1

0x4bfa,	// (0x000336d9) list_double_pane_vc_g2_ParamLimits

0x4bfa,	// (0x000336d9) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0003e0b1) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0003e0b1) list_double_pane_vc_g

0x3e4e,	// (0x0003292d) list_double_pane_vc_t1_ParamLimits

0x3e4e,	// (0x0003292d) list_double_pane_vc_t1

0x3e60,	// (0x0003293f) list_double_pane_vc_t2_ParamLimits

0x3e60,	// (0x0003293f) list_double_pane_vc_t2

0x0001,

0xfa4e,	// (0x0003e52d) list_double_pane_vc_t_ParamLimits

0xfa4e,	// (0x0003e52d) list_double_pane_vc_t

0x4bee,	// (0x000336cd) list_double_number_pane_vc_g1_ParamLimits

0x4bee,	// (0x000336cd) list_double_number_pane_vc_g1

0x4bfa,	// (0x000336d9) list_double_number_pane_vc_g2_ParamLimits

0x4bfa,	// (0x000336d9) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0003e0b1) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0003e0b1) list_double_number_pane_vc_g

0x3e76,	// (0x00032955) list_double_number_pane_vc_t1_ParamLimits

0x3e76,	// (0x00032955) list_double_number_pane_vc_t1

0x3e8a,	// (0x00032969) list_double_number_pane_vc_t2_ParamLimits

0x3e8a,	// (0x00032969) list_double_number_pane_vc_t2

0x3e9c,	// (0x0003297b) list_double_number_pane_vc_t3_ParamLimits

0x3e9c,	// (0x0003297b) list_double_number_pane_vc_t3

0x0002,

0xfa53,	// (0x0003e532) list_double_number_pane_vc_t_ParamLimits

0xfa53,	// (0x0003e532) list_double_number_pane_vc_t

0x64cc,	// (0x00034fab) list_double_large_graphic_pane_vc_g1_ParamLimits

0x64cc,	// (0x00034fab) list_double_large_graphic_pane_vc_g1

0x64f4,	// (0x00034fd3) list_double_large_graphic_pane_vc_g2_ParamLimits

0x64f4,	// (0x00034fd3) list_double_large_graphic_pane_vc_g2

0x6508,	// (0x00034fe7) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6508,	// (0x00034fe7) list_double_large_graphic_pane_vc_g3

0x3eb2,	// (0x00032991) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3eb2,	// (0x00032991) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5a,	// (0x0003e539) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5a,	// (0x0003e539) list_double_large_graphic_pane_vc_g

0x3ec2,	// (0x000329a1) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3ec2,	// (0x000329a1) list_double_large_graphic_pane_vc_t1

0x3edc,	// (0x000329bb) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3edc,	// (0x000329bb) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa63,	// (0x0003e542) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa63,	// (0x0003e542) list_double_large_graphic_pane_vc_t

0x4bee,	// (0x000336cd) list_double_heading_pane_vc_g1_ParamLimits

0x4bee,	// (0x000336cd) list_double_heading_pane_vc_g1

0x4bfa,	// (0x000336d9) list_double_heading_pane_vc_g2_ParamLimits

0x4bfa,	// (0x000336d9) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0003e0b1) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0003e0b1) list_double_heading_pane_vc_g

0x3efc,	// (0x000329db) list_double_heading_pane_vc_t1_ParamLimits

0x3efc,	// (0x000329db) list_double_heading_pane_vc_t1

0x3be4,	// (0x000326c3) list_double_heading_pane_vc_t2_ParamLimits

0x3be4,	// (0x000326c3) list_double_heading_pane_vc_t2

0x0001,

0xfa68,	// (0x0003e547) list_double_heading_pane_vc_t_ParamLimits

0xfa68,	// (0x0003e547) list_double_heading_pane_vc_t

0x3f0e,	// (0x000329ed) list_double_graphic_pane_vc_g1_ParamLimits

0x3f0e,	// (0x000329ed) list_double_graphic_pane_vc_g1

0x6517,	// (0x00034ff6) list_double_graphic_pane_vc_g2_ParamLimits

0x6517,	// (0x00034ff6) list_double_graphic_pane_vc_g2

0x4bee,	// (0x000336cd) list_double_graphic_pane_vc_g3_ParamLimits

0x4bee,	// (0x000336cd) list_double_graphic_pane_vc_g3

0x0003,

0xfa6d,	// (0x0003e54c) list_double_graphic_pane_vc_g_ParamLimits

0xfa6d,	// (0x0003e54c) list_double_graphic_pane_vc_g

0x3f1a,	// (0x000329f9) list_double_graphic_pane_vc_t1_ParamLimits

0x3f1a,	// (0x000329f9) list_double_graphic_pane_vc_t1

0x3f38,	// (0x00032a17) list_double_graphic_pane_vc_t2_ParamLimits

0x3f38,	// (0x00032a17) list_double_graphic_pane_vc_t2

0x0001,

0xfa76,	// (0x0003e555) list_double_graphic_pane_vc_t_ParamLimits

0xfa76,	// (0x0003e555) list_double_graphic_pane_vc_t

0x4270,	// (0x00032d4f) aid_size_cell_fastswap

0xd463,	// (0x0003bf42) aid_size_cell_touch_ParamLimits

0xd463,	// (0x0003bf42) aid_size_cell_touch

0x443f,	// (0x00032f1e) popup_fast_swap_wide_window_ParamLimits

0x443f,	// (0x00032f1e) popup_fast_swap_wide_window

0xd55b,	// (0x0003c03a) touch_pane_ParamLimits

0xd55b,	// (0x0003c03a) touch_pane

0x38a1,	// (0x00032380) button_value_adjust_pane_cp2

0x38a9,	// (0x00032388) button_value_adjust_pane_cp4

0x38c9,	// (0x000323a8) form_field_data_pane_cp2

0xd0aa,	// (0x0003bb89) form_field_data_wide_pane_cp2

0x5149,	// (0x00033c28) bg_scroll_pane_ParamLimits

0x5168,	// (0x00033c47) scroll_handle_pane_ParamLimits

0x517c,	// (0x00033c5b) scroll_sc2_down_pane_ParamLimits

0x517c,	// (0x00033c5b) scroll_sc2_down_pane

0x51a3,	// (0x00033c82) scroll_sc2_up_pane_ParamLimits

0x51a3,	// (0x00033c82) scroll_sc2_up_pane

0x1b3e,	// (0x0003061d) grid_wheel_folder_pane_g1_ParamLimits

0x1b3e,	// (0x0003061d) grid_wheel_folder_pane_g1

0x5678,	// (0x00034157) clock_nsta_pane_cp2_ParamLimits

0x5678,	// (0x00034157) clock_nsta_pane_cp2

0x10b1,	// (0x0002fb90) listscroll_midp_pane_ParamLimits

0x10c0,	// (0x0002fb9f) midp_canvas_pane

0x5b4e,	// (0x0003462d) nsta_clock_indic_pane

0x7749,	// (0x00036228) listscroll_form_pane_vc

0x7751,	// (0x00036230) listscroll_set_pane_vc_ParamLimits

0x7751,	// (0x00036230) listscroll_set_pane_vc

0x12f3,	// (0x0002fdd2) clock_nsta_pane

0x1316,	// (0x0002fdf5) indicator_nsta_pane

0x7876,	// (0x00036355) bg_popup_sub_pane_cp2_ParamLimits

0x788a,	// (0x00036369) find_pane_cp2_ParamLimits

0x788a,	// (0x00036369) find_pane_cp2

0x789c,	// (0x0003637b) grid_toobar_pane_ParamLimits

0x7980,	// (0x0003645f) list_form_gen_pane_vc_ParamLimits

0x7980,	// (0x0003645f) list_form_gen_pane_vc

0x7996,	// (0x00036475) scroll_pane_cp8_vc_ParamLimits

0x7996,	// (0x00036475) scroll_pane_cp8_vc

0x79e6,	// (0x000364c5) data_form_wide_pane_vc_ParamLimits

0x79e6,	// (0x000364c5) data_form_wide_pane_vc

0x79f2,	// (0x000364d1) form_field_data_wide_pane_vc_g1

0x79fa,	// (0x000364d9) form_field_data_wide_pane_vc_t1_ParamLimits

0x79fa,	// (0x000364d9) form_field_data_wide_pane_vc_t1

0x4ca2,	// (0x00033781) input_focus_pane_cp6_vc_ParamLimits

0x4ca2,	// (0x00033781) input_focus_pane_cp6_vc

0x15f7,	// (0x000300d6) list_midp_pane_ParamLimits

0x8b4c,	// (0x0003762b) scroll_pane_cp16_ParamLimits

0x8b4c,	// (0x0003762b) scroll_pane_cp16

0x7cf8,	// (0x000367d7) button_value_adjust_pane_ParamLimits

0x7cf8,	// (0x000367d7) button_value_adjust_pane

0x17a8,	// (0x00030287) button_value_adjust_pane_cp6_ParamLimits

0x17a8,	// (0x00030287) button_value_adjust_pane_cp6

0x18b2,	// (0x00030391) settings_code_pane_cp_ParamLimits

0x18b2,	// (0x00030391) settings_code_pane_cp

0x4256,	// (0x00032d35) cell_touch_pane_g1

0x4256,	// (0x00032d35) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0003e1e7) cell_touch_pane_g

0x1a36,	// (0x00030515) cell_touch_pane_cp_ParamLimits

0x1a36,	// (0x00030515) cell_touch_pane_cp

0x1a52,	// (0x00030531) cell_touch_pane_ParamLimits

0x1a52,	// (0x00030531) cell_touch_pane

0x4256,	// (0x00032d35) scroll_sc2_down_pane_g1

0x4256,	// (0x00032d35) scroll_sc2_up_pane_g1

0x4415,	// (0x00032ef4) bg_set_opt_pane_cp4_vc

0x8e10,	// (0x000378ef) list_set_graphic_pane_vc_g1_ParamLimits

0x8e10,	// (0x000378ef) list_set_graphic_pane_vc_g1

0x8e1c,	// (0x000378fb) list_set_graphic_pane_vc_g2_ParamLimits

0x8e1c,	// (0x000378fb) list_set_graphic_pane_vc_g2

0x0001,

0xf9f1,	// (0x0003e4d0) list_set_graphic_pane_vc_g_ParamLimits

0xf9f1,	// (0x0003e4d0) list_set_graphic_pane_vc_g

0x8e28,	// (0x00037907) text_primary_small_cp13_vc_ParamLimits

0x8e28,	// (0x00037907) text_primary_small_cp13_vc

0x8e40,	// (0x0003791f) list_set_graphic_pane_vc_ParamLimits

0x8e40,	// (0x0003791f) list_set_graphic_pane_vc

0x4415,	// (0x00032ef4) input_focus_pane_cp2_vc

0x4256,	// (0x00032d35) setting_code_pane_vc_g1

0x8e53,	// (0x00037932) setting_code_pane_vc_t1

0x8e61,	// (0x00037940) set_text_pane_vc_t1_ParamLimits

0x8e61,	// (0x00037940) set_text_pane_vc_t1

0x4415,	// (0x00032ef4) input_focus_pane_cp1_vc

0x8e7c,	// (0x0003795b) list_set_text_pane_vc

0x4256,	// (0x00032d35) setting_text_pane_vc_g1

0x4415,	// (0x00032ef4) bg_set_opt_pane_cp2_vc

0x8e86,	// (0x00037965) setting_slider_graphic_pane_vc_g1

0x8e8e,	// (0x0003796d) setting_slider_graphic_pane_vc_t1

0x8e9c,	// (0x0003797b) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f6,	// (0x0003e4d5) setting_slider_graphic_pane_vc_t

0x8eaa,	// (0x00037989) slider_set_pane_cp_vc

0x8eb2,	// (0x00037991) slider_set_pane_vc_g1

0x8ebb,	// (0x0003799a) slider_set_pane_vc_g2

0x0006,

0xf9fb,	// (0x0003e4da) slider_set_pane_vc_g

0x4cf1,	// (0x000337d0) set_opt_bg_pane_g1_copy1

0x4cf9,	// (0x000337d8) set_opt_bg_pane_g2_copy1

0x8ee7,	// (0x000379c6) set_opt_bg_pane_g3_copy1

0x4d09,	// (0x000337e8) set_opt_bg_pane_g4_copy1

0x4d11,	// (0x000337f0) set_opt_bg_pane_g5_copy1

0x4d19,	// (0x000337f8) set_opt_bg_pane_g6_copy1

0x8eef,	// (0x000379ce) set_opt_bg_pane_g7_copy1

0x8ef7,	// (0x000379d6) set_opt_bg_pane_g8_copy1

0x8eff,	// (0x000379de) set_opt_bg_pane_g9_copy1

0x4415,	// (0x00032ef4) bg_set_opt_pane_cp_vc

0x8f07,	// (0x000379e6) setting_slider_pane_vc_t1

0x8e8e,	// (0x0003796d) setting_slider_pane_vc_t2

0x8e9c,	// (0x0003797b) setting_slider_pane_vc_t3

0x0002,

0xfa0a,	// (0x0003e4e9) setting_slider_pane_vc_t

0x8eaa,	// (0x00037989) slider_set_pane_vc

0x6137,	// (0x00034c16) volume_set_pane_vc_g1

0x6463,	// (0x00034f42) volume_set_pane_vc_g2

0x646c,	// (0x00034f4b) volume_set_pane_vc_g3

0x6475,	// (0x00034f54) volume_set_pane_vc_g4

0x647e,	// (0x00034f5d) volume_set_pane_vc_g5

0x6487,	// (0x00034f66) volume_set_pane_vc_g6

0x6490,	// (0x00034f6f) volume_set_pane_vc_g7

0x6499,	// (0x00034f78) volume_set_pane_vc_g8

0x64a2,	// (0x00034f81) volume_set_pane_vc_g9

0x64ab,	// (0x00034f8a) volume_set_pane_vc_g10

0x0009,

0xfa11,	// (0x0003e4f0) volume_set_pane_vc_g

0x8f16,	// (0x000379f5) volume_set_pane_vc

0x8f1e,	// (0x000379fd) button_value_adjust_pane_cp1_vc

0x8f28,	// (0x00037a07) list_highlight_pane_cp2_vc

0x8f31,	// (0x00037a10) list_set_pane_vc_ParamLimits

0x8f31,	// (0x00037a10) list_set_pane_vc

0x8f83,	// (0x00037a62) main_pane_set_vc_t1_ParamLimits

0x8f83,	// (0x00037a62) main_pane_set_vc_t1

0x8f98,	// (0x00037a77) main_pane_set_vc_t2_ParamLimits

0x8f98,	// (0x00037a77) main_pane_set_vc_t2

0x8faa,	// (0x00037a89) main_pane_set_vc_t3_ParamLimits

0x8faa,	// (0x00037a89) main_pane_set_vc_t3

0x8fbc,	// (0x00037a9b) main_pane_set_vc_t4_ParamLimits

0x8fbc,	// (0x00037a9b) main_pane_set_vc_t4

0x0003,

0xfa26,	// (0x0003e505) main_pane_set_vc_t_ParamLimits

0xfa26,	// (0x0003e505) main_pane_set_vc_t

0x8fce,	// (0x00037aad) setting_code_pane_vc_ParamLimits

0x8fce,	// (0x00037aad) setting_code_pane_vc

0x8fdd,	// (0x00037abc) setting_slider_graphic_pane_vc

0x8fdd,	// (0x00037abc) setting_slider_pane_vc

0x8fdd,	// (0x00037abc) setting_text_pane_vc

0x8fdd,	// (0x00037abc) setting_volume_pane_vc

0x8fe5,	// (0x00037ac4) scroll_pane_cp121_vc

0x4c8d,	// (0x0003376c) set_content_pane_vc

0x8fed,	// (0x00037acc) button_value_adjust_pane_g1

0x8ff6,	// (0x00037ad5) button_value_adjust_pane_g2

0x0001,

0xfa7b,	// (0x0003e55a) button_value_adjust_pane_g

0x8fff,	// (0x00037ade) form_field_slider_wide_pane_vc_t1_ParamLimits

0x8fff,	// (0x00037ade) form_field_slider_wide_pane_vc_t1

0x9015,	// (0x00037af4) form_field_slider_wide_pane_vc_t2_ParamLimits

0x9015,	// (0x00037af4) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa80,	// (0x0003e55f) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa80,	// (0x0003e55f) form_field_slider_wide_pane_vc_t

0x476e,	// (0x0003324d) input_focus_pane_cp10_vc_ParamLimits

0x476e,	// (0x0003324d) input_focus_pane_cp10_vc

0x9040,	// (0x00037b1f) slider_cont_pane_cp1_vc_ParamLimits

0x9040,	// (0x00037b1f) slider_cont_pane_cp1_vc

0x8eb2,	// (0x00037991) slider_form_pane_g1_cp2

0x8ebb,	// (0x0003799a) slider_form_pane_g2_cp2

0x905b,	// (0x00037b3a) form_field_slider_pane_vc_t3

0x9069,	// (0x00037b48) form_field_slider_pane_vc_t4

0x9077,	// (0x00037b56) slider_form_pane_vc_ParamLimits

0x9077,	// (0x00037b56) slider_form_pane_vc

0x9084,	// (0x00037b63) form_field_slider_pane_vc_t1_ParamLimits

0x9084,	// (0x00037b63) form_field_slider_pane_vc_t1

0x909a,	// (0x00037b79) form_field_slider_pane_vc_t2_ParamLimits

0x909a,	// (0x00037b79) form_field_slider_pane_vc_t2

0x0001,

0xfa92,	// (0x0003e571) form_field_slider_pane_vc_t_ParamLimits

0xfa92,	// (0x0003e571) form_field_slider_pane_vc_t

0x476e,	// (0x0003324d) input_focus_pane_cp9_vc_ParamLimits

0x476e,	// (0x0003324d) input_focus_pane_cp9_vc

0x90ac,	// (0x00037b8b) slider_cont_pane_vc_ParamLimits

0x90ac,	// (0x00037b8b) slider_cont_pane_vc

0x90be,	// (0x00037b9d) list_form_graphic_pane_cp_vc_ParamLimits

0x90be,	// (0x00037b9d) list_form_graphic_pane_cp_vc

0x79f2,	// (0x000364d1) form_field_popup_wide_pane_vc_g1

0x90d3,	// (0x00037bb2) form_field_popup_wide_pane_vc_t1_ParamLimits

0x90d3,	// (0x00037bb2) form_field_popup_wide_pane_vc_t1

0x4ca2,	// (0x00033781) input_focus_pane_cp8_vc_ParamLimits

0x4ca2,	// (0x00033781) input_focus_pane_cp8_vc

0x9112,	// (0x00037bf1) list_form_wide_pane_vc_ParamLimits

0x9112,	// (0x00037bf1) list_form_wide_pane_vc

0x911e,	// (0x00037bfd) list_form_graphic_pane_vc_g1

0x9126,	// (0x00037c05) list_form_graphic_pane_vc_t1_ParamLimits

0x9126,	// (0x00037c05) list_form_graphic_pane_vc_t1

0x45a9,	// (0x00033088) list_highlight_pane_cp5_vc_ParamLimits

0x45a9,	// (0x00033088) list_highlight_pane_cp5_vc

0x9142,	// (0x00037c21) list_form_graphic_pane_vc_ParamLimits

0x9142,	// (0x00037c21) list_form_graphic_pane_vc

0x79f2,	// (0x000364d1) form_field_popup_pane_vc_g1

0x9158,	// (0x00037c37) form_field_popup_pane_vc_t1_ParamLimits

0x9158,	// (0x00037c37) form_field_popup_pane_vc_t1

0x4ca2,	// (0x00033781) input_focus_pane_cp7_vc_ParamLimits

0x4ca2,	// (0x00033781) input_focus_pane_cp7_vc

0x916d,	// (0x00037c4c) list_form_pane_vc_ParamLimits

0x916d,	// (0x00037c4c) list_form_pane_vc

0x9179,	// (0x00037c58) data_form_pane_vc_t1_ParamLimits

0x9179,	// (0x00037c58) data_form_pane_vc_t1

0x4cf1,	// (0x000337d0) input_focus_pane_vc_g1

0x4cf9,	// (0x000337d8) input_focus_pane_vc_g2

0x4d01,	// (0x000337e0) input_focus_pane_vc_g3

0x4d09,	// (0x000337e8) input_focus_pane_vc_g4

0x4d11,	// (0x000337f0) input_focus_pane_vc_g5

0x4d19,	// (0x000337f8) input_focus_pane_vc_g6

0x4d21,	// (0x00033800) input_focus_pane_vc_g7

0x4d29,	// (0x00033808) input_focus_pane_vc_g8

0x4d31,	// (0x00033810) input_focus_pane_vc_g9

0x4256,	// (0x00032d35) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0003e170) input_focus_pane_vc_g

0x79e6,	// (0x000364c5) data_form_pane_vc_ParamLimits

0x79e6,	// (0x000364c5) data_form_pane_vc

0x79f2,	// (0x000364d1) form_field_data_pane_vc_g1

0x9194,	// (0x00037c73) form_field_data_pane_vc_t1_ParamLimits

0x9194,	// (0x00037c73) form_field_data_pane_vc_t1

0x4ca2,	// (0x00033781) input_focus_pane_vc_ParamLimits

0x4ca2,	// (0x00033781) input_focus_pane_vc

0x91aa,	// (0x00037c89) button_value_adjust_pane_cp3_vc

0x91b2,	// (0x00037c91) button_value_adjust_pane_cp5_vc

0x91ba,	// (0x00037c99) form_field_data_pane_vc_ParamLimits

0x91ba,	// (0x00037c99) form_field_data_pane_vc

0x91d1,	// (0x00037cb0) form_field_data_pane_vc_cp2

0x91d9,	// (0x00037cb8) form_field_data_wide_pane_vc_ParamLimits

0x91d9,	// (0x00037cb8) form_field_data_wide_pane_vc

0x91ef,	// (0x00037cce) form_field_data_wide_pane_vc_cp2

0x91f7,	// (0x00037cd6) form_field_popup_pane_vc_ParamLimits

0x91f7,	// (0x00037cd6) form_field_popup_pane_vc

0x920e,	// (0x00037ced) form_field_popup_wide_pane_vc_ParamLimits

0x920e,	// (0x00037ced) form_field_popup_wide_pane_vc

0x9224,	// (0x00037d03) form_field_slider_pane_vc_ParamLimits

0x9224,	// (0x00037d03) form_field_slider_pane_vc

0x9237,	// (0x00037d16) form_field_slider_wide_pane_vc_ParamLimits

0x9237,	// (0x00037d16) form_field_slider_wide_pane_vc

0x1a70,	// (0x0003054f) grid_touch_1_pane_ParamLimits

0x1a70,	// (0x0003054f) grid_touch_1_pane

0x1a84,	// (0x00030563) grid_touch_2_pane_ParamLimits

0x1a84,	// (0x00030563) grid_touch_2_pane

0x92af,	// (0x00037d8e) touch_pane_g1_ParamLimits

0x92af,	// (0x00037d8e) touch_pane_g1

0x924a,	// (0x00037d29) cell_app_pane_cp_wide_ParamLimits

0x924a,	// (0x00037d29) cell_app_pane_cp_wide

0x925a,	// (0x00037d39) grid_popup_fast_wide_pane_ParamLimits

0x925a,	// (0x00037d39) grid_popup_fast_wide_pane

0x926e,	// (0x00037d4d) scroll_pane_cp19_ParamLimits

0x926e,	// (0x00037d4d) scroll_pane_cp19

0x4415,	// (0x00032ef4) bg_popup_window_pane_cp20

0x9282,	// (0x00037d61) listscroll_popup_fast_wide_pane

0x754a,	// (0x00036029) grid_indicator_nsta_pane

0x928a,	// (0x00037d69) clock_nsta_pane_g1

0x9293,	// (0x00037d72) clock_nsta_pane_t1

0x1aae,	// (0x0003058d) cell_indicator_nsta_pane_ParamLimits

0x1aae,	// (0x0003058d) cell_indicator_nsta_pane

0x92af,	// (0x00037d8e) cell_indicator_nsta_pane_g1

0x1ac5,	// (0x000305a4) cell_indicator_nsta_pane_g2

0x0001,

0xfaa3,	// (0x0003e582) cell_indicator_nsta_pane_g

0x92bd,	// (0x00037d9c) clock_nsta_pane_cp

0x92c5,	// (0x00037da4) indicator_nsta_pane_cp

0x92ce,	// (0x00037dad) nsta_clock_indic_pane_g1

0x4677,	// (0x00033156) grid_indicator_pane

0x5295,	// (0x00033d74) scroll_pane_cp29

0x55ad,	// (0x0003408c) indicator_nsta_pane_cp2_ParamLimits

0x55ad,	// (0x0003408c) indicator_nsta_pane_cp2

0x45a9,	// (0x00033088) main_apps_wheel_pane

0x7b91,	// (0x00036670) form_midp_field_text_pane_ParamLimits

0x7cbe,	// (0x0003679d) scroll_bar_cp050_ParamLimits

0x9337,	// (0x00037e16) cell_indicator_pane_ParamLimits

0x9337,	// (0x00037e16) cell_indicator_pane

0x934d,	// (0x00037e2c) cell_indicator_pane_g1

0x1ad2,	// (0x000305b1) grid_wheel_folder_pane_ParamLimits

0x1ad2,	// (0x000305b1) grid_wheel_folder_pane

0x1ae0,	// (0x000305bf) list_wheel_apps_pane_ParamLimits

0x1ae0,	// (0x000305bf) list_wheel_apps_pane

0x1aec,	// (0x000305cb) main_apps_wheel_pane_g1_ParamLimits

0x1aec,	// (0x000305cb) main_apps_wheel_pane_g1

0x1af8,	// (0x000305d7) main_apps_wheel_pane_g2_ParamLimits

0x1af8,	// (0x000305d7) main_apps_wheel_pane_g2

0x0001,

0xfabf,	// (0x0003e59e) main_apps_wheel_pane_g_ParamLimits

0xfabf,	// (0x0003e59e) main_apps_wheel_pane_g

0x1b04,	// (0x000305e3) main_apps_wheel_pane_t1_ParamLimits

0x1b04,	// (0x000305e3) main_apps_wheel_pane_t1

0x1b16,	// (0x000305f5) list_wheel_apps_pane_g1

0x1b1e,	// (0x000305fd) list_wheel_apps_pane_g2

0x1b26,	// (0x00030605) list_wheel_apps_pane_g3

0x1b2e,	// (0x0003060d) list_wheel_apps_pane_g4

0x1b36,	// (0x00030615) list_wheel_apps_pane_g5

0x0004,

0xfac4,	// (0x0003e5a3) list_wheel_apps_pane_g

0x45a9,	// (0x00033088) navi_icon_text_pane

0x11ff,	// (0x0002fcde) aid_fill_nsta

0x9357,	// (0x00037e36) navi_icon_text_pane_g1

0x9363,	// (0x00037e42) navi_icon_text_pane_t1

0x571a,	// (0x000341f9) list_set_graphic_pane_t1_ParamLimits

0x571a,	// (0x000341f9) list_set_graphic_pane_t1

0x83a4,	// (0x00036e83) popup_midp_note_alarm_window_t6_ParamLimits

0x83a4,	// (0x00036e83) popup_midp_note_alarm_window_t6

0x83b6,	// (0x00036e95) popup_midp_note_alarm_window_t7_ParamLimits

0x83b6,	// (0x00036e95) popup_midp_note_alarm_window_t7

0x83c8,	// (0x00036ea7) popup_midp_note_alarm_window_t8_ParamLimits

0x83c8,	// (0x00036ea7) popup_midp_note_alarm_window_t8

0x83da,	// (0x00036eb9) popup_midp_note_alarm_window_t9_ParamLimits

0x83da,	// (0x00036eb9) popup_midp_note_alarm_window_t9

0x83ec,	// (0x00036ecb) popup_midp_note_alarm_window_t10_ParamLimits

0x83ec,	// (0x00036ecb) popup_midp_note_alarm_window_t10

0x83fe,	// (0x00036edd) popup_midp_note_alarm_window_t11_ParamLimits

0x83fe,	// (0x00036edd) popup_midp_note_alarm_window_t11

0x8410,	// (0x00036eef) scroll_pane_cp17_ParamLimits

0x8410,	// (0x00036eef) scroll_pane_cp17

0x6137,	// (0x00034c16) volume_small_pane_cp_g1

0x6534,	// (0x00035013) volume_small_pane_cp_g2

0x653d,	// (0x0003501c) volume_small_pane_cp_g3

0x6546,	// (0x00035025) volume_small_pane_cp_g4

0x6164,	// (0x00034c43) volume_small_pane_cp_g5

0x654f,	// (0x0003502e) volume_small_pane_cp_g6

0x6558,	// (0x00035037) volume_small_pane_cp_g7

0x6561,	// (0x00035040) volume_small_pane_cp_g8

0x656a,	// (0x00035049) volume_small_pane_cp_g9

0x6573,	// (0x00035052) volume_small_pane_cp_g10

0x75be,	// (0x0003609d) midp_ticker_pane_g1_ParamLimits

0x75ca,	// (0x000360a9) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0003e23c) midp_ticker_pane_g_ParamLimits

0x75d6,	// (0x000360b5) midp_ticker_pane_t1_ParamLimits

0x1215,	// (0x0002fcf4) aid_fill_nsta_2

0x7caa,	// (0x00036789) list_form2_midp_pane

0x8a96,	// (0x00037575) midp_editing_number_pane_ParamLimits

0x8aa2,	// (0x00037581) midp_ticker_pane_ParamLimits

0x9375,	// (0x00037e54) form2_midp_field_pane

0x937d,	// (0x00037e5c) scroll_pane_cp51

0x939d,	// (0x00037e7c) form2_midp_button_pane_ParamLimits

0x939d,	// (0x00037e7c) form2_midp_button_pane

0x93af,	// (0x00037e8e) form2_midp_content_pane_ParamLimits

0x93af,	// (0x00037e8e) form2_midp_content_pane

0x93c9,	// (0x00037ea8) form2_midp_field_choice_group_pane

0x93d1,	// (0x00037eb0) form2_midp_field_pane_g1

0x93d9,	// (0x00037eb8) form2_midp_field_pane_g2

0x93e1,	// (0x00037ec0) form2_midp_field_pane_g3

0x93e9,	// (0x00037ec8) form2_midp_field_pane_g4

0x0003,

0xfae9,	// (0x0003e5c8) form2_midp_field_pane_g

0x93f1,	// (0x00037ed0) form2_midp_gauge_slider_pane

0x93f9,	// (0x00037ed8) form2_midp_gauge_wait_pane

0x9401,	// (0x00037ee0) form2_midp_image_pane_ParamLimits

0x9401,	// (0x00037ee0) form2_midp_image_pane

0x941c,	// (0x00037efb) form2_midp_label_pane_ParamLimits

0x941c,	// (0x00037efb) form2_midp_label_pane

0x1b6b,	// (0x0003064a) form2_midp_label_pane_cp_ParamLimits

0x1b6b,	// (0x0003064a) form2_midp_label_pane_cp

0x9435,	// (0x00037f14) form2_midp_string_pane_ParamLimits

0x9435,	// (0x00037f14) form2_midp_string_pane

0x3f56,	// (0x00032a35) form2_midp_text_pane_ParamLimits

0x3f56,	// (0x00032a35) form2_midp_text_pane

0x9447,	// (0x00037f26) form2_midp_time_pane

0x9457,	// (0x00037f36) input_focus_pane_cp51_ParamLimits

0x9457,	// (0x00037f36) input_focus_pane_cp51

0x946f,	// (0x00037f4e) form2_midp_label_pane_t1_ParamLimits

0x946f,	// (0x00037f4e) form2_midp_label_pane_t1

0x3f6f,	// (0x00032a4e) form2_mdip_text_pane_t1_ParamLimits

0x3f6f,	// (0x00032a4e) form2_mdip_text_pane_t1

0x3f88,	// (0x00032a67) form2_midp_time_pane_t1

0x94b7,	// (0x00037f96) form2_midp_gauge_slider_pane_t1

0x1b8a,	// (0x00030669) form2_midp_gauge_slider_pane_t2

0x1b9c,	// (0x0003067b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf2,	// (0x0003e5d1) form2_midp_gauge_slider_pane_t

0x94c9,	// (0x00037fa8) form2_midp_slider_pane

0x94d5,	// (0x00037fb4) form2_midp_gauge_wait_pane_t1

0x94e3,	// (0x00037fc2) form2_midp_wait_pane_ParamLimits

0x94e3,	// (0x00037fc2) form2_midp_wait_pane

0x7a30,	// (0x0003650f) list_single_2graphic_pane_cp4_ParamLimits

0x7a30,	// (0x0003650f) list_single_2graphic_pane_cp4

0x950e,	// (0x00037fed) list_single_midp_graphic_pane_cp_ParamLimits

0x950e,	// (0x00037fed) list_single_midp_graphic_pane_cp

0x4415,	// (0x00032ef4) list_highlight_pane_cp20

0x952c,	// (0x0003800b) list_single_2graphic_pane_g1_cp4

0x8b17,	// (0x000375f6) list_single_2graphic_pane_g2_cp4

0x9534,	// (0x00038013) list_single_2graphic_pane_t1_cp4

0x45a9,	// (0x00033088) list_highlight_pane_cp21

0x9543,	// (0x00038022) list_single_midp_graphic_pane_g4_cp

0x9552,	// (0x00038031) list_single_midp_graphic_pane_t1_cp

0x9567,	// (0x00038046) form2_mdip_string_pane_t1_ParamLimits

0x9567,	// (0x00038046) form2_mdip_string_pane_t1

0x4415,	// (0x00032ef4) bg_wml_button_pane_cp2

0x4256,	// (0x00032d35) form2_midp_image_pane_g1

0x4c2a,	// (0x00033709) list_double_large_graphic_pane_g5_ParamLimits

0x4c2a,	// (0x00033709) list_double_large_graphic_pane_g5

0x10b1,	// (0x0002fb90) midp_form_pane_ParamLimits

0x45a9,	// (0x00033088) main_apps_wheel_pane_ParamLimits

0xdb34,	// (0x0003c613) popup_preview_window_ParamLimits

0xdb34,	// (0x0003c613) popup_preview_window

0x5fc3,	// (0x00034aa2) popup_touch_info_window_ParamLimits

0x5fc3,	// (0x00034aa2) popup_touch_info_window

0x5fe1,	// (0x00034ac0) popup_touch_menu_window_ParamLimits

0x5fe1,	// (0x00034ac0) popup_touch_menu_window

0x424c,	// (0x00032d2b) bg_popup_sub_pane_cp6

0x95d1,	// (0x000380b0) list_touch_menu_pane

0x95d9,	// (0x000380b8) list_single_touch_menu_pane_ParamLimits

0x95d9,	// (0x000380b8) list_single_touch_menu_pane

0x95f0,	// (0x000380cf) list_single_touch_menu_pane_t1

0x45a9,	// (0x00033088) bg_popup_sub_pane_cp7_ParamLimits

0x45a9,	// (0x00033088) bg_popup_sub_pane_cp7

0x95fe,	// (0x000380dd) heading_sub_pane

0x9606,	// (0x000380e5) list_touch_info_pane_ParamLimits

0x9606,	// (0x000380e5) list_touch_info_pane

0x9615,	// (0x000380f4) list_single_touch_info_pane_ParamLimits

0x9615,	// (0x000380f4) list_single_touch_info_pane

0x9626,	// (0x00038105) list_single_touch_info_pane_t1

0x9634,	// (0x00038113) list_single_touch_info_pane_t2

0x0001,

0xfb00,	// (0x0003e5df) list_single_touch_info_pane_t

0x7594,	// (0x00036073) bg_popup_heading_pane_cp

0x9642,	// (0x00038121) heading_sub_pane_t1

0x79ac,	// (0x0003648b) bg_popup_preview_window_pane_cp_ParamLimits

0x79ac,	// (0x0003648b) bg_popup_preview_window_pane_cp

0x95fe,	// (0x000380dd) heading_preview_pane

0x9606,	// (0x000380e5) list_preview_pane_ParamLimits

0x9606,	// (0x000380e5) list_preview_pane

0x9650,	// (0x0003812f) popup_preview_window_g1

0x9615,	// (0x000380f4) list_single_preview_pane_ParamLimits

0x9615,	// (0x000380f4) list_single_preview_pane

0x9658,	// (0x00038137) list_single_preview_pane_g1

0x9660,	// (0x0003813f) list_single_preview_pane_t1

0x9626,	// (0x00038105) list_single_preview_pane_t2

0x0001,

0xfb05,	// (0x0003e5e4) list_single_preview_pane_t

0x966e,	// (0x0003814d) bg_popup_heading_pane_cp2_ParamLimits

0x966e,	// (0x0003814d) bg_popup_heading_pane_cp2

0x9684,	// (0x00038163) heading_preview_pane_g1

0x968c,	// (0x0003816b) heading_preview_pane_t1_ParamLimits

0x968c,	// (0x0003816b) heading_preview_pane_t1

0x468e,	// (0x0003316d) soft_indicator_pane_t1_ParamLimits

0x4b66,	// (0x00033645) scroll_pane_ParamLimits

0x5191,	// (0x00033c70) scroll_sc2_left_pane

0x519a,	// (0x00033c79) scroll_sc2_right_pane

0x51b9,	// (0x00033c98) scroll_bg_pane_g1_ParamLimits

0x51ce,	// (0x00033cad) scroll_bg_pane_g2_ParamLimits

0x51e6,	// (0x00033cc5) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0003e1c7) scroll_bg_pane_g_ParamLimits

0x51b9,	// (0x00033c98) scroll_handle_pane_g1_ParamLimits

0x5208,	// (0x00033ce7) scroll_handle_pane_g2_ParamLimits

0x51e6,	// (0x00033cc5) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0003e1ce) scroll_handle_pane_g_ParamLimits

0x5b90,	// (0x0003466f) popup_choice_list_window_ParamLimits

0x5b90,	// (0x0003466f) popup_choice_list_window

0x7882,	// (0x00036361) choice_list_pane

0x78f8,	// (0x000363d7) cell_toolbar_pane_t1

0x7920,	// (0x000363ff) toolbar_button_pane_ParamLimits

0x880b,	// (0x000372ea) ai_gene_pane_1_t2_ParamLimits

0x880b,	// (0x000372ea) ai_gene_pane_1_t2

0x0001,

0xf90b,	// (0x0003e3ea) ai_gene_pane_1_t_ParamLimits

0xf90b,	// (0x0003e3ea) ai_gene_pane_1_t

0x96a9,	// (0x00038188) scroll_sc2_left_pane_g1

0x96a9,	// (0x00038188) scroll_sc2_right_pane_g1

0x5b78,	// (0x00034657) bg_popup_sub_pane_cp10

0x96b3,	// (0x00038192) list_choice_list_pane

0x96ca,	// (0x000381a9) list_single_choice_list_pane_ParamLimits

0x96ca,	// (0x000381a9) list_single_choice_list_pane

0x96dc,	// (0x000381bb) list_single_choice_list_pane_g1

0x4e07,	// (0x000338e6) list_single_choice_list_pane_t1_ParamLimits

0x4e07,	// (0x000338e6) list_single_choice_list_pane_t1

0x96e4,	// (0x000381c3) choice_list_pane_g1

0x96ec,	// (0x000381cb) choice_list_pane_t1

0x424c,	// (0x00032d2b) input_focus_pane_cp11

0x4fc2,	// (0x00033aa1) title_pane_stacon_g2_ParamLimits

0x4fc2,	// (0x00033aa1) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0003e1ad) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0003e1ad) title_pane_stacon_g

0x7594,	// (0x00036073) cursor_press_pane

0xd89b,	// (0x0003c37a) popup_fep_hwr_window_ParamLimits

0xd89b,	// (0x0003c37a) popup_fep_hwr_window

0x5c88,	// (0x00034767) popup_fep_vkb_window_ParamLimits

0x5c88,	// (0x00034767) popup_fep_vkb_window

0x96fa,	// (0x000381d9) cursor_press_pane_g1

0x0002,

0xfb2e,	// (0x0003e60d) fep_vkb_side_pane_g_ParamLimits

0x65b1,	// (0x00035090) fep_hwr_candidate_pane_ParamLimits

0x65b1,	// (0x00035090) fep_hwr_candidate_pane

0x65d9,	// (0x000350b8) fep_hwr_side_pane_ParamLimits

0x65d9,	// (0x000350b8) fep_hwr_side_pane

0x65f9,	// (0x000350d8) fep_hwr_top_pane_ParamLimits

0x65f9,	// (0x000350d8) fep_hwr_top_pane

0x6611,	// (0x000350f0) fep_hwr_write_pane_ParamLimits

0x6611,	// (0x000350f0) fep_hwr_write_pane

0xfb2e,	// (0x0003e60d) fep_vkb_side_pane_g

0x9702,	// (0x000381e1) fep_hwr_top_pane_g1

0x9714,	// (0x000381f3) fep_hwr_top_pane_g2

0x663d,	// (0x0003511c) fep_hwr_top_pane_g3

0x0002,

0xfb0a,	// (0x0003e5e9) fep_hwr_top_pane_g

0x6652,	// (0x00035131) fep_hwr_top_text_pane

0x5302,	// (0x00033de1) fep_hwr_top_text_pane_g1

0x974a,	// (0x00038229) fep_hwr_top_text_pane_t1

0x6740,	// (0x0003521f) fep_hwr_candidate_pane_g1

0x9913,	// (0x000383f2) fep_vkb_keypad_pane_g3_ParamLimits

0x9913,	// (0x000383f2) fep_vkb_keypad_pane_g3

0x9935,	// (0x00038414) fep_vkb_keypad_pane_g4_ParamLimits

0x9935,	// (0x00038414) fep_vkb_keypad_pane_g4

0x99a4,	// (0x00038483) fep_vkb_bottom_pane_g2_ParamLimits

0x99a4,	// (0x00038483) fep_vkb_bottom_pane_g2

0x0001,

0xfb35,	// (0x0003e614) fep_vkb_bottom_pane_g_ParamLimits

0xfb35,	// (0x0003e614) fep_vkb_bottom_pane_g

0x96a9,	// (0x00038188) cell_vkb_side_pane_g2

0x0001,

0xfb3f,	// (0x0003e61e) cell_vkb_side_pane_g

0x99e8,	// (0x000384c7) cell_vkb_side_pane_t1

0x99f6,	// (0x000384d5) cell_vkb_side_pane_t1_copy1

0x96a9,	// (0x00038188) bg_fep_vkb_candidate_pane_g2

0x9ac4,	// (0x000385a3) cell_vkb_candidate_pane_ParamLimits

0x9758,	// (0x00038237) aid_size_cell_vkb_ParamLimits

0x9758,	// (0x00038237) aid_size_cell_vkb

0x9ac4,	// (0x000385a3) cell_vkb_candidate_pane

0x675a,	// (0x00035239) bg_popup_fep_shadow_pane_g1

0x97c2,	// (0x000382a1) fep_vkb_bottom_pane_ParamLimits

0x97c2,	// (0x000382a1) fep_vkb_bottom_pane

0x97ff,	// (0x000382de) fep_vkb_candidate_pane_ParamLimits

0x97ff,	// (0x000382de) fep_vkb_candidate_pane

0x981b,	// (0x000382fa) fep_vkb_keypad_pane_ParamLimits

0x981b,	// (0x000382fa) fep_vkb_keypad_pane

0x984f,	// (0x0003832e) fep_vkb_side_pane_ParamLimits

0x984f,	// (0x0003832e) fep_vkb_side_pane

0x987b,	// (0x0003835a) fep_vkb_top_pane_ParamLimits

0x987b,	// (0x0003835a) fep_vkb_top_pane

0x98a7,	// (0x00038386) fep_vkb_top_pane_g1_ParamLimits

0x98a7,	// (0x00038386) fep_vkb_top_pane_g1

0x98b6,	// (0x00038395) fep_vkb_top_pane_g2_ParamLimits

0x98b6,	// (0x00038395) fep_vkb_top_pane_g2

0x98c5,	// (0x000383a4) fep_vkb_top_pane_g3_ParamLimits

0x98c5,	// (0x000383a4) fep_vkb_top_pane_g3

0x0003,

0xfb25,	// (0x0003e604) fep_vkb_top_pane_g_ParamLimits

0xfb25,	// (0x0003e604) fep_vkb_top_pane_g

0x98e3,	// (0x000383c2) fep_vkb_top_text_pane_ParamLimits

0x98e3,	// (0x000383c2) fep_vkb_top_text_pane

0x1bbe,	// (0x0003069d) fep_vkb_side_pane_g1_ParamLimits

0x1bbe,	// (0x0003069d) fep_vkb_side_pane_g1

0x9902,	// (0x000383e1) grid_vkb_side_pane_ParamLimits

0x9902,	// (0x000383e1) grid_vkb_side_pane

0x6762,	// (0x00035241) bg_popup_fep_shadow_pane_g2

0x676b,	// (0x0003524a) bg_popup_fep_shadow_pane_g3

0x6773,	// (0x00035252) bg_popup_fep_shadow_pane_g4

0x677c,	// (0x0003525b) bg_popup_fep_shadow_pane_g5

0x6784,	// (0x00035263) bg_popup_fep_shadow_pane_g6

0x678c,	// (0x0003526b) bg_popup_fep_shadow_pane_g7

0x4d11,	// (0x000337f0) bg_popup_fep_shadow_pane_g8

0x9953,	// (0x00038432) grid_vkb_keypad_number_pane_ParamLimits

0x9953,	// (0x00038432) grid_vkb_keypad_number_pane

0x9963,	// (0x00038442) grid_vkb_keypad_pane_ParamLimits

0x9963,	// (0x00038442) grid_vkb_keypad_pane

0x9989,	// (0x00038468) fep_vkb_bottom_pane_g1_ParamLimits

0x9989,	// (0x00038468) fep_vkb_bottom_pane_g1

0x99b2,	// (0x00038491) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x99b2,	// (0x00038491) grid_vkb_keypad_bottom_left_pane

0x99c7,	// (0x000384a6) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x99c7,	// (0x000384a6) grid_vkb_keypad_bottom_right_pane

0x99dc,	// (0x000384bb) fep_vkb_top_text_pane_g1

0x1c05,	// (0x000306e4) fep_vkb_top_text_pane_t1

0x1c17,	// (0x000306f6) cell_vkb_side_pane_ParamLimits

0x1c17,	// (0x000306f6) cell_vkb_side_pane

0x96a9,	// (0x00038188) cell_vkb_side_pane_g1

0x9a04,	// (0x000384e3) cell_vkb_keypad_pane_ParamLimits

0x9a04,	// (0x000384e3) cell_vkb_keypad_pane

0x9a71,	// (0x00038550) cell_vkb_keypad_pane_g1

0x0008,

0xfb52,	// (0x0003e631) bg_popup_fep_shadow_pane_g

0x96a9,	// (0x00038188) cell_hwr_side_pane_g1

0x96a9,	// (0x00038188) cell_hwr_side_pane_g2

0x9a7b,	// (0x0003855a) cell_vkb_keypad_pane_t1

0x1c2d,	// (0x0003070c) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x1c2d,	// (0x0003070c) cell_vkb_keypad_bottom_left_pane

0x1c42,	// (0x00030721) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x1c42,	// (0x00030721) cell_vkb_keypad_bottom_right_pane

0x96a9,	// (0x00038188) cell_vkb_keypad_bottom_left_pane_g1

0x96a9,	// (0x00038188) cell_vkb_keypad_bottom_right_pane_g1

0x9a89,	// (0x00038568) cell_vkb_keypad_number_pane_ParamLimits

0x9a89,	// (0x00038568) cell_vkb_keypad_number_pane

0x9aa8,	// (0x00038587) cell_vkb_keypad_number_pane_g1

0x9ab2,	// (0x00038591) cell_vkb_keypad_number_pane_g2

0x9abb,	// (0x0003859a) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb44,	// (0x0003e623) cell_vkb_keypad_number_pane_g

0x9a7b,	// (0x0003855a) cell_vkb_keypad_number_pane_t1

0x9add,	// (0x000385bc) fep_vkb_candidate_pane_g1

0x0001,

0xfb3f,	// (0x0003e61e) cell_hwr_side_pane_g

0x9af6,	// (0x000385d5) cell_hwr_side_pane_t1

0x679c,	// (0x0003527b) cell_hwr_side_pane_t1_copy1

0x98d5,	// (0x000383b4) cell_hwr_candidate_pane_g1

0x67aa,	// (0x00035289) cell_hwr_candidate_pane_t1

0x96a9,	// (0x00038188) cell_vkb_candidate_pane_g2

0x9b7c,	// (0x0003865b) cell_vkb_candidate_pane_t1

0x657c,	// (0x0003505b) bg_popup_fep_shadow_pane_ParamLimits

0x657c,	// (0x0003505b) bg_popup_fep_shadow_pane

0xf4f4,	// (0x0003dfd3) bg_fep_hwr_top_pane_g4

0x9726,	// (0x00038205) bg_hwr_side_pane_g1_ParamLimits

0x9726,	// (0x00038205) bg_hwr_side_pane_g1

0xdf86,	// (0x0003ca65) cell_hwr_side_pane_ParamLimits

0xdf86,	// (0x0003ca65) cell_hwr_side_pane

0x66c9,	// (0x000351a8) fep_hwr_write_pane_g1_ParamLimits

0x66c9,	// (0x000351a8) fep_hwr_write_pane_g1

0x66d6,	// (0x000351b5) fep_hwr_write_pane_g2_ParamLimits

0x66d6,	// (0x000351b5) fep_hwr_write_pane_g2

0x66e3,	// (0x000351c2) fep_hwr_write_pane_g3_ParamLimits

0x66e3,	// (0x000351c2) fep_hwr_write_pane_g3

0xdfa6,	// (0x0003ca85) fep_hwr_write_pane_g4_ParamLimits

0xdfa6,	// (0x0003ca85) fep_hwr_write_pane_g4

0x0005,

0xfb11,	// (0x0003e5f0) fep_hwr_write_pane_g_ParamLimits

0xfb11,	// (0x0003e5f0) fep_hwr_write_pane_g

0xf4f4,	// (0x0003dfd3) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xf4f4,	// (0x0003dfd3) bg_fep_hwr_candidate_pane_g2

0x6706,	// (0x000351e5) cell_hwr_candidate_pane_ParamLimits

0x6706,	// (0x000351e5) cell_hwr_candidate_pane

0x6740,	// (0x0003521f) fep_hwr_candidate_pane_g1_ParamLimits

0x9786,	// (0x00038265) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x9786,	// (0x00038265) bg_popup_fep_shadow_pane_cp2

0x98d5,	// (0x000383b4) fep_vkb_top_pane_g4_ParamLimits

0x98d5,	// (0x000383b4) fep_vkb_top_pane_g4

0x98f4,	// (0x000383d3) fep_vkb_side_pane_g2_ParamLimits

0x98f4,	// (0x000383d3) fep_vkb_side_pane_g2

0xcfb8,	// (0x0003ba97) list_setting_pane_t4_ParamLimits

0xcfb8,	// (0x0003ba97) list_setting_pane_t4

0xd052,	// (0x0003bb31) list_setting_number_pane_t5_ParamLimits

0xd052,	// (0x0003bb31) list_setting_number_pane_t5

0x0fbc,	// (0x0002fa9b) list_double_heading_pane_cp2_ParamLimits

0x0fbc,	// (0x0002fa9b) list_double_heading_pane_cp2

0x5814,	// (0x000342f3) list_double_heading_pane_g1_cp2_ParamLimits

0x5814,	// (0x000342f3) list_double_heading_pane_g1_cp2

0x9b8a,	// (0x00038669) list_double_heading_pane_g2_cp2_ParamLimits

0x9b8a,	// (0x00038669) list_double_heading_pane_g2_cp2

0x9b9e,	// (0x0003867d) list_double_heading_pane_t1_cp2_ParamLimits

0x9b9e,	// (0x0003867d) list_double_heading_pane_t1_cp2

0x9bb4,	// (0x00038693) list_double_heading_pane_t2_cp2_ParamLimits

0x9bb4,	// (0x00038693) list_double_heading_pane_t2_cp2

0x4244,	// (0x00032d23) aid_value_unit2

0x447b,	// (0x00032f5a) popup_preview_fixed_window

0x477c,	// (0x0003325b) bg_popup_preview_window_pane_cp02

0x9bc6,	// (0x000386a5) list_preview_fixed_pane

0x9c0c,	// (0x000386eb) list_empty_pane_fp_ParamLimits

0x9c0c,	// (0x000386eb) list_empty_pane_fp

0x9c0c,	// (0x000386eb) list_single_cale_day_pane_fp_ParamLimits

0x9c0c,	// (0x000386eb) list_single_cale_day_pane_fp

0x9c0c,	// (0x000386eb) list_single_graphic_heading_pane_fp_ParamLimits

0x9c0c,	// (0x000386eb) list_single_graphic_heading_pane_fp

0x9c0c,	// (0x000386eb) list_single_graphic_pane_fp_ParamLimits

0x9c0c,	// (0x000386eb) list_single_graphic_pane_fp

0x9c0c,	// (0x000386eb) list_single_heading_pane_fp_ParamLimits

0x9c0c,	// (0x000386eb) list_single_heading_pane_fp

0x9c0c,	// (0x000386eb) list_single_pane_fp_ParamLimits

0x9c0c,	// (0x000386eb) list_single_pane_fp

0x9c20,	// (0x000386ff) list_single_pane_fp_g1_ParamLimits

0x9c20,	// (0x000386ff) list_single_pane_fp_g1

0x4bee,	// (0x000336cd) list_single_pane_fp_g2_ParamLimits

0x4bee,	// (0x000336cd) list_single_pane_fp_g2

0x67c7,	// (0x000352a6) list_single_pane_fp_g3_ParamLimits

0x67c7,	// (0x000352a6) list_single_pane_fp_g3

0x9c2c,	// (0x0003870b) list_single_pane_fp_g4_ParamLimits

0x9c2c,	// (0x0003870b) list_single_pane_fp_g4

0x0003,

0xfb73,	// (0x0003e652) list_single_pane_fp_g_ParamLimits

0xfb73,	// (0x0003e652) list_single_pane_fp_g

0x3f9b,	// (0x00032a7a) list_single_pane_fp_t1_ParamLimits

0x3f9b,	// (0x00032a7a) list_single_pane_fp_t1

0x3fb2,	// (0x00032a91) list_single_graphic_pane_fp_g1_ParamLimits

0x3fb2,	// (0x00032a91) list_single_graphic_pane_fp_g1

0x9c20,	// (0x000386ff) list_single_graphic_pane_fp_g2_ParamLimits

0x9c20,	// (0x000386ff) list_single_graphic_pane_fp_g2

0x4bee,	// (0x000336cd) list_single_graphic_pane_fp_g3_ParamLimits

0x4bee,	// (0x000336cd) list_single_graphic_pane_fp_g3

0x67c7,	// (0x000352a6) list_single_graphic_pane_fp_g4_ParamLimits

0x67c7,	// (0x000352a6) list_single_graphic_pane_fp_g4

0x9c2c,	// (0x0003870b) list_single_graphic_pane_fp_g5_ParamLimits

0x9c2c,	// (0x0003870b) list_single_graphic_pane_fp_g5

0x0004,

0xfb7c,	// (0x0003e65b) list_single_graphic_pane_fp_g_ParamLimits

0xfb7c,	// (0x0003e65b) list_single_graphic_pane_fp_g

0x3fbe,	// (0x00032a9d) list_single_graphic_pane_fp_t1_ParamLimits

0x3fbe,	// (0x00032a9d) list_single_graphic_pane_fp_t1

0x3fb2,	// (0x00032a91) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3fb2,	// (0x00032a91) list_single_graphic_heading_pane_fp_g1

0x9c20,	// (0x000386ff) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x9c20,	// (0x000386ff) list_single_graphic_heading_pane_fp_g2

0x4bee,	// (0x000336cd) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4bee,	// (0x000336cd) list_single_graphic_heading_pane_fp_g3

0x67c7,	// (0x000352a6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x67c7,	// (0x000352a6) list_single_graphic_heading_pane_fp_g4

0x9c2c,	// (0x0003870b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x9c2c,	// (0x0003870b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7c,	// (0x0003e65b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7c,	// (0x0003e65b) list_single_graphic_heading_pane_fp_g

0x3fd4,	// (0x00032ab3) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3fd4,	// (0x00032ab3) list_single_graphic_heading_pane_fp_t1

0x3fea,	// (0x00032ac9) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3fea,	// (0x00032ac9) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb87,	// (0x0003e666) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb87,	// (0x0003e666) list_single_graphic_heading_pane_fp_t

0x3ffc,	// (0x00032adb) list_single_cale_day_pane_fp_g1_ParamLimits

0x3ffc,	// (0x00032adb) list_single_cale_day_pane_fp_g1

0x9c38,	// (0x00038717) list_single_cale_day_pane_fp_g2_ParamLimits

0x9c38,	// (0x00038717) list_single_cale_day_pane_fp_g2

0x67db,	// (0x000352ba) list_single_cale_day_pane_fp_g3_ParamLimits

0x67db,	// (0x000352ba) list_single_cale_day_pane_fp_g3

0x6803,	// (0x000352e2) list_single_cale_day_pane_fp_g4_ParamLimits

0x6803,	// (0x000352e2) list_single_cale_day_pane_fp_g4

0x6827,	// (0x00035306) list_single_cale_day_pane_fp_g5_ParamLimits

0x6827,	// (0x00035306) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8c,	// (0x0003e66b) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8c,	// (0x0003e66b) list_single_cale_day_pane_fp_g

0x4034,	// (0x00032b13) list_single_cale_day_pane_fp_t1_ParamLimits

0x4034,	// (0x00032b13) list_single_cale_day_pane_fp_t1

0x405a,	// (0x00032b39) list_single_cale_day_pane_fp_t2_ParamLimits

0x405a,	// (0x00032b39) list_single_cale_day_pane_fp_t2

0x4073,	// (0x00032b52) list_single_cale_day_pane_fp_t3_ParamLimits

0x4073,	// (0x00032b52) list_single_cale_day_pane_fp_t3

0x0002,

0xfb97,	// (0x0003e676) list_single_cale_day_pane_fp_t_ParamLimits

0xfb97,	// (0x0003e676) list_single_cale_day_pane_fp_t

0x9c20,	// (0x000386ff) list_empty_pane_fp_g1_ParamLimits

0x9c20,	// (0x000386ff) list_empty_pane_fp_g1

0x408c,	// (0x00032b6b) list_empty_pane_fp_t1

0x409a,	// (0x00032b79) list_empty_pane_fp_t2

0x0001,

0xfb9e,	// (0x0003e67d) list_empty_pane_fp_t

0x9c20,	// (0x000386ff) list_single_heading_pane_fp_g1_ParamLimits

0x9c20,	// (0x000386ff) list_single_heading_pane_fp_g1

0x4bee,	// (0x000336cd) list_single_heading_pane_fp_g2_ParamLimits

0x4bee,	// (0x000336cd) list_single_heading_pane_fp_g2

0x67c7,	// (0x000352a6) list_single_heading_pane_fp_g3_ParamLimits

0x67c7,	// (0x000352a6) list_single_heading_pane_fp_g3

0x0002,

0xfba3,	// (0x0003e682) list_single_heading_pane_fp_g_ParamLimits

0xfba3,	// (0x0003e682) list_single_heading_pane_fp_g

0x40a8,	// (0x00032b87) list_single_heading_pane_fp_t1_ParamLimits

0x40a8,	// (0x00032b87) list_single_heading_pane_fp_t1

0x40ba,	// (0x00032b99) list_single_heading_pane_fp_t2_ParamLimits

0x40ba,	// (0x00032b99) list_single_heading_pane_fp_t2

0x0001,

0xfbaa,	// (0x0003e689) list_single_heading_pane_fp_t_ParamLimits

0xfbaa,	// (0x0003e689) list_single_heading_pane_fp_t

0x4e1c,	// (0x000338fb) aid_size_cell_fast

0x4751,	// (0x00033230) soft_indicator_pane_cp1_t1

0x4e59,	// (0x00033938) cell_app_pane_cp2_ParamLimits

0x4e59,	// (0x00033938) cell_app_pane_cp2

0x659e,	// (0x0003507d) fep_hwr_candidate_drop_down_list_pane

0xf534,	// (0x0003e013) fep_hwr_candidate_pane_g3_ParamLimits

0xf534,	// (0x0003e013) fep_hwr_candidate_pane_g3

0xf541,	// (0x0003e020) fep_hwr_candidate_pane_g4_ParamLimits

0xf541,	// (0x0003e020) fep_hwr_candidate_pane_g4

0x0002,

0xfb1e,	// (0x0003e5fd) fep_hwr_candidate_pane_g_ParamLimits

0xfb1e,	// (0x0003e5fd) fep_hwr_candidate_pane_g

0x97ee,	// (0x000382cd) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x97ee,	// (0x000382cd) fep_vkb_candidate_drop_down_list_pane

0x9ae5,	// (0x000385c4) fep_vkb_candidate_pane_g3

0x9aed,	// (0x000385cc) fep_vkb_candidate_pane_g4

0x0002,

0xfb4b,	// (0x0003e62a) fep_vkb_candidate_pane_g

0x98d5,	// (0x000383b4) cell_hwr_candidate_pane_g1_ParamLimits

0x9b04,	// (0x000385e3) cell_hwr_candidate_pane_g3_ParamLimits

0x9b04,	// (0x000385e3) cell_hwr_candidate_pane_g3

0x9b25,	// (0x00038604) cell_hwr_candidate_pane_g4_ParamLimits

0x9b25,	// (0x00038604) cell_hwr_candidate_pane_g4

0x0002,

0xfb65,	// (0x0003e644) cell_hwr_candidate_pane_g_ParamLimits

0xfb65,	// (0x0003e644) cell_hwr_candidate_pane_g

0x9b46,	// (0x00038625) cell_vkb_candidate_pane_g3_ParamLimits

0x9b46,	// (0x00038625) cell_vkb_candidate_pane_g3

0x9b61,	// (0x00038640) cell_vkb_candidate_pane_g4_ParamLimits

0x9b61,	// (0x00038640) cell_vkb_candidate_pane_g4

0x9c44,	// (0x00038723) cell_app_pane_cp2_g1_ParamLimits

0x9c44,	// (0x00038723) cell_app_pane_cp2_g1

0x9c62,	// (0x00038741) cell_app_pane_cp2_g2_ParamLimits

0x9c62,	// (0x00038741) cell_app_pane_cp2_g2

0x0001,

0xfbaf,	// (0x0003e68e) cell_app_pane_cp2_g_ParamLimits

0xfbaf,	// (0x0003e68e) cell_app_pane_cp2_g

0x9c6e,	// (0x0003874d) cell_app_pane_cp2_t1_ParamLimits

0x9c6e,	// (0x0003874d) cell_app_pane_cp2_t1

0x4ca2,	// (0x00033781) grid_highlight_pane_cp1_ParamLimits

0x4ca2,	// (0x00033781) grid_highlight_pane_cp1

0x684b,	// (0x0003532a) cell_hwr_candidate_pane_cp1_ParamLimits

0x684b,	// (0x0003532a) cell_hwr_candidate_pane_cp1

0x98d5,	// (0x000383b4) fep_hwr_candidate_drop_down_list_pane_g1

0x9c80,	// (0x0003875f) fep_hwr_candidate_drop_down_list_pane_g2

0x9c8d,	// (0x0003876c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb4,	// (0x0003e693) fep_hwr_candidate_drop_down_list_pane_g

0x6869,	// (0x00035348) fep_hwr_candidate_drop_down_list_scroll_pane

0x6872,	// (0x00035351) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6872,	// (0x00035351) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x687f,	// (0x0003535e) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x687f,	// (0x0003535e) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x688c,	// (0x0003536b) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x688c,	// (0x0003536b) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x9b46,	// (0x00038625) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x9b46,	// (0x00038625) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x9b61,	// (0x00038640) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x9b61,	// (0x00038640) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6899,	// (0x00035378) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6899,	// (0x00035378) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x68b4,	// (0x00035393) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x68b4,	// (0x00035393) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x68cf,	// (0x000353ae) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x68cf,	// (0x000353ae) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbb,	// (0x0003e69a) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbb,	// (0x0003e69a) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x1c5d,	// (0x0003073c) cell_vkb_candidate_pane_cp1_ParamLimits

0x1c5d,	// (0x0003073c) cell_vkb_candidate_pane_cp1

0x98d5,	// (0x000383b4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x98d5,	// (0x000383b4) fep_vkb_candidate_drop_down_list_pane_g1

0x9c80,	// (0x0003875f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x9c80,	// (0x0003875f) fep_vkb_candidate_drop_down_list_pane_g2

0x9c8d,	// (0x0003876c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x9c8d,	// (0x0003876c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb4,	// (0x0003e693) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb4,	// (0x0003e693) fep_vkb_candidate_drop_down_list_pane_g

0x9c9a,	// (0x00038779) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x9c9a,	// (0x00038779) fep_vkb_candidate_drop_down_list_scroll_pane

0x9ca7,	// (0x00038786) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x9ca7,	// (0x00038786) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x9cb4,	// (0x00038793) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x9cb4,	// (0x00038793) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x9cc0,	// (0x0003879f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x9cc0,	// (0x0003879f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x9b04,	// (0x000385e3) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x9b04,	// (0x000385e3) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x9b25,	// (0x00038604) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x9b25,	// (0x00038604) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x9ccc,	// (0x000387ab) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x9ccc,	// (0x000387ab) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x9ced,	// (0x000387cc) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x9ced,	// (0x000387cc) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x9d0e,	// (0x000387ed) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x9d0e,	// (0x000387ed) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcc,	// (0x0003e6ab) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcc,	// (0x0003e6ab) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x02a0,	// (0x0002ed7f) title_pane_g1_ParamLimits

0x02b7,	// (0x0002ed96) title_pane_g2_ParamLimits

0xf54e,	// (0x0003e02d) title_pane_g_ParamLimits

0x52f2,	// (0x00033dd1) aid_call2_pane

0x52fa,	// (0x00033dd9) aid_call_pane

0x5302,	// (0x00033de1) popup_clock_analogue_window_g1

0x5302,	// (0x00033de1) popup_clock_analogue_window_g2

0x530a,	// (0x00033de9) popup_clock_analogue_window_g3

0x5313,	// (0x00033df2) popup_clock_analogue_window_g4

0x4256,	// (0x00032d35) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0003e1dc) popup_clock_analogue_window_g

0x531b,	// (0x00033dfa) popup_clock_analogue_window_t1

0x5358,	// (0x00033e37) clock_digital_number_pane_ParamLimits

0x5358,	// (0x00033e37) clock_digital_number_pane

0x5364,	// (0x00033e43) clock_digital_number_pane_cp02_ParamLimits

0x5364,	// (0x00033e43) clock_digital_number_pane_cp02

0x5370,	// (0x00033e4f) clock_digital_number_pane_cp03_ParamLimits

0x5370,	// (0x00033e4f) clock_digital_number_pane_cp03

0x537c,	// (0x00033e5b) clock_digital_number_pane_cp04_ParamLimits

0x537c,	// (0x00033e5b) clock_digital_number_pane_cp04

0x5388,	// (0x00033e67) clock_digital_separator_pane_ParamLimits

0x5388,	// (0x00033e67) clock_digital_separator_pane

0x5394,	// (0x00033e73) popup_clock_digital_window_t1_ParamLimits

0x5394,	// (0x00033e73) popup_clock_digital_window_t1

0x4256,	// (0x00032d35) clock_digital_number_pane_g1

0x4256,	// (0x00032d35) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0003e1e7) clock_digital_number_pane_g

0x4256,	// (0x00032d35) clock_digital_separator_pane_g1

0x4256,	// (0x00032d35) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0003e1e7) clock_digital_separator_pane_g

0x11ff,	// (0x0002fcde) aid_fill_nsta_ParamLimits

0x1316,	// (0x0002fdf5) indicator_nsta_pane_ParamLimits

0x781f,	// (0x000362fe) popup_clock_analogue_window

0x781f,	// (0x000362fe) popup_clock_digital_window

0x754a,	// (0x00036029) grid_indicator_nsta_pane_ParamLimits

0x92a1,	// (0x00037d80) clock_nsta_pane_t2

0x0001,

0xfa9e,	// (0x0003e57d) clock_nsta_pane_t

0x5136,	// (0x00033c15) aid_size_max_handle

0xd67d,	// (0x0003c15c) aid_size_min_handle

0x7594,	// (0x00036073) editor_scroll_pane

0x9d29,	// (0x00038808) ex_editor_pane

0x4de5,	// (0x000338c4) scroll_pane_cp13

0x4b93,	// (0x00033672) scroll_pane_cp14

0x5350,	// (0x00033e2f) scroll_pane_cp36

0x0fc8,	// (0x0002faa7) list_single_graphic_hl_pane_cp2_ParamLimits

0x0fc8,	// (0x0002faa7) list_single_graphic_hl_pane_cp2

0x190f,	// (0x000303ee) list_single_graphic_hl_pane_ParamLimits

0x190f,	// (0x000303ee) list_single_graphic_hl_pane

0x40d0,	// (0x00032baf) aid_size_min_hl_cp1

0x9d31,	// (0x00038810) list_highlight_pane_cp34_ParamLimits

0x9d31,	// (0x00038810) list_highlight_pane_cp34

0x9d42,	// (0x00038821) list_single_graphic_hl_pane_g1_ParamLimits

0x9d42,	// (0x00038821) list_single_graphic_hl_pane_g1

0xd2cf,	// (0x0003bdae) list_single_graphic_hl_pane_g2_ParamLimits

0xd2cf,	// (0x0003bdae) list_single_graphic_hl_pane_g2

0xd2cf,	// (0x0003bdae) list_single_graphic_hl_pane_g3_ParamLimits

0xd2cf,	// (0x0003bdae) list_single_graphic_hl_pane_g3

0x4c12,	// (0x000336f1) list_single_graphic_hl_pane_g4_ParamLimits

0x4c12,	// (0x000336f1) list_single_graphic_hl_pane_g4

0x4cbc,	// (0x0003379b) list_single_graphic_hl_pane_g5_ParamLimits

0x4cbc,	// (0x0003379b) list_single_graphic_hl_pane_g5

0x0004,

0xfbdd,	// (0x0003e6bc) list_single_graphic_hl_pane_g_ParamLimits

0xfbdd,	// (0x0003e6bc) list_single_graphic_hl_pane_g

0xd2db,	// (0x0003bdba) list_single_graphic_hl_pane_t1_ParamLimits

0xd2db,	// (0x0003bdba) list_single_graphic_hl_pane_t1

0x9d4f,	// (0x0003882e) aid_size_min_hl_cp2

0x9d58,	// (0x00038837) list_highlight_pane_cp34_cp2_ParamLimits

0x9d58,	// (0x00038837) list_highlight_pane_cp34_cp2

0x9d42,	// (0x00038821) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x9d42,	// (0x00038821) list_single_graphic_hl_pane_g1_cp2

0x9d65,	// (0x00038844) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x9d65,	// (0x00038844) list_single_graphic_hl_pane_g2_cp2

0x9d71,	// (0x00038850) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x9d71,	// (0x00038850) list_single_graphic_hl_pane_g3_cp2

0x5814,	// (0x000342f3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5814,	// (0x000342f3) list_single_graphic_hl_pane_g4_cp2

0x9b8a,	// (0x00038669) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x9b8a,	// (0x00038669) list_single_graphic_hl_pane_g5_cp2

0xd6b7,	// (0x0003c196) control_pane_g4_ParamLimits

0xd6b7,	// (0x0003c196) control_pane_g4

0x5b78,	// (0x00034657) bg_popup_sub_pane_cp10_ParamLimits

0x96b3,	// (0x00038192) list_choice_list_pane_ParamLimits

0x96c2,	// (0x000381a1) scroll_pane_cp23

0x477c,	// (0x0003325b) bg_popup_preview_window_pane_cp02_ParamLimits

0x9bc6,	// (0x000386a5) list_preview_fixed_pane_ParamLimits

0x9bdc,	// (0x000386bb) list_preview_fixed_pane_cp_ParamLimits

0x9bdc,	// (0x000386bb) list_preview_fixed_pane_cp

0x9be8,	// (0x000386c7) popup_preview_fixed_window_g1_ParamLimits

0x9be8,	// (0x000386c7) popup_preview_fixed_window_g1

0x9bf4,	// (0x000386d3) popup_preview_fixed_window_g2_ParamLimits

0x9bf4,	// (0x000386d3) popup_preview_fixed_window_g2

0x0002,

0xfb6c,	// (0x0003e64b) popup_preview_fixed_window_g_ParamLimits

0xfb6c,	// (0x0003e64b) popup_preview_fixed_window_g

0x508f,	// (0x00033b6e) aid_navi_side_left_pane_ParamLimits

0x509f,	// (0x00033b7e) aid_navi_side_right_pane_ParamLimits

0x50ae,	// (0x00033b8d) navi_icon_pane_stacon_ParamLimits

0x50be,	// (0x00033b9d) navi_navi_pane_stacon_ParamLimits

0x50ae,	// (0x00033b8d) navi_text_pane_stacon_ParamLimits

0x424c,	// (0x00032d2b) main_text_info_pane

0x9d93,	// (0x00038872) listscroll_text_info_pane

0x9d9b,	// (0x0003887a) list_text_info_pane_ParamLimits

0x9d9b,	// (0x0003887a) list_text_info_pane

0x9daa,	// (0x00038889) scroll_pane_cp24_ParamLimits

0x9daa,	// (0x00038889) scroll_pane_cp24

0x1c7d,	// (0x0003075c) list_text_info_pane_t1_ParamLimits

0x1c7d,	// (0x0003075c) list_text_info_pane_t1

0xd81b,	// (0x0003c2fa) popup_fast_swap2_window_ParamLimits

0xd81b,	// (0x0003c2fa) popup_fast_swap2_window

0x9dc8,	// (0x000388a7) aid_size_cell_fast2

0x424c,	// (0x00032d2b) bg_popup_window_pane_cp17

0x7cd6,	// (0x000367b5) heading_pane_cp2

0x4992,	// (0x00033471) listscroll_fast2_pane

0x9dd2,	// (0x000388b1) grid_fast2_pane

0x9dda,	// (0x000388b9) listscroll_fast2_pane_g1

0x9de2,	// (0x000388c1) listscroll_fast2_pane_g2

0x0001,

0xfbe8,	// (0x0003e6c7) listscroll_fast2_pane_g

0x4de5,	// (0x000338c4) scroll_pane_cp26

0x9dea,	// (0x000388c9) cell_fast2_pane_ParamLimits

0x9dea,	// (0x000388c9) cell_fast2_pane

0x9e00,	// (0x000388df) cell_fast2_pane_g1

0x9e09,	// (0x000388e8) cell_fast2_pane_g2

0x9e12,	// (0x000388f1) cell_fast2_pane_g3

0x0002,

0xfbed,	// (0x0003e6cc) cell_fast2_pane_g

0x49f4,	// (0x000334d3) grid_highlight_pane_cp9

0x4a09,	// (0x000334e8) main_eswt_pane_ParamLimits

0x4a09,	// (0x000334e8) main_eswt_pane

0x9dbf,	// (0x0003889e) list_single_text_info_pane

0x9e1a,	// (0x000388f9) eswt_ctrl_button_pane

0x9e1a,	// (0x000388f9) eswt_ctrl_canvas_pane

0x9e22,	// (0x00038901) eswt_ctrl_combo_pane

0x9e1a,	// (0x000388f9) eswt_ctrl_default_pane

0x9e1a,	// (0x000388f9) eswt_ctrl_label_pane

0x9e2a,	// (0x00038909) eswt_ctrl_wait_pane

0x9e32,	// (0x00038911) eswt_shell_pane

0x424c,	// (0x00032d2b) listscroll_eswt_app_pane

0x9e4e,	// (0x0003892d) popup_eswt_tasktip_window_ParamLimits

0x9e4e,	// (0x0003892d) popup_eswt_tasktip_window

0x79ac,	// (0x0003648b) bg_popup_window_pane_cp18

0x9e5f,	// (0x0003893e) eswt_control_pane_g1_ParamLimits

0x9e5f,	// (0x0003893e) eswt_control_pane_g1

0x9e6c,	// (0x0003894b) eswt_control_pane_g2_ParamLimits

0x9e6c,	// (0x0003894b) eswt_control_pane_g2

0x9e79,	// (0x00038958) eswt_control_pane_g3_ParamLimits

0x9e79,	// (0x00038958) eswt_control_pane_g3

0x9e86,	// (0x00038965) eswt_control_pane_g4_ParamLimits

0x9e86,	// (0x00038965) eswt_control_pane_g4

0x0003,

0xfbf4,	// (0x0003e6d3) eswt_control_pane_g_ParamLimits

0xfbf4,	// (0x0003e6d3) eswt_control_pane_g

0x4ca2,	// (0x00033781) bg_button_pane_ParamLimits

0x4ca2,	// (0x00033781) bg_button_pane

0x4a09,	// (0x000334e8) common_borders_pane_copy2_ParamLimits

0x4a09,	// (0x000334e8) common_borders_pane_copy2

0x9e93,	// (0x00038972) control_button_pane_g1_ParamLimits

0x9e93,	// (0x00038972) control_button_pane_g1

0x9e9f,	// (0x0003897e) control_button_pane_g2_ParamLimits

0x9e9f,	// (0x0003897e) control_button_pane_g2

0x9eab,	// (0x0003898a) control_button_pane_g3_ParamLimits

0x9eab,	// (0x0003898a) control_button_pane_g3

0x0002,

0xfbfd,	// (0x0003e6dc) control_button_pane_g_ParamLimits

0xfbfd,	// (0x0003e6dc) control_button_pane_g

0x9ebf,	// (0x0003899e) control_button_pane_t1

0x9ecd,	// (0x000389ac) control_button_pane_t2

0x0001,

0xfc04,	// (0x0003e6e3) control_button_pane_t

0x792c,	// (0x0003640b) bg_button_pane_g1

0x7934,	// (0x00036413) bg_button_pane_g2

0x793c,	// (0x0003641b) bg_button_pane_g3

0x7944,	// (0x00036423) bg_button_pane_g4

0x794c,	// (0x0003642b) bg_button_pane_g5

0x7954,	// (0x00036433) bg_button_pane_g6

0x795c,	// (0x0003643b) bg_button_pane_g7

0x7964,	// (0x00036443) bg_button_pane_g8

0x796c,	// (0x0003644b) bg_button_pane_g9

0x0008,

0xf85f,	// (0x0003e33e) bg_button_pane_g

0x966e,	// (0x0003814d) common_borders_pane_ParamLimits

0x966e,	// (0x0003814d) common_borders_pane

0x9e5f,	// (0x0003893e) eswt_control_pane_g1_copy1_ParamLimits

0x9e5f,	// (0x0003893e) eswt_control_pane_g1_copy1

0x9e6c,	// (0x0003894b) eswt_control_pane_g2_copy1_ParamLimits

0x9e6c,	// (0x0003894b) eswt_control_pane_g2_copy1

0x9e79,	// (0x00038958) eswt_control_pane_g3_copy1_ParamLimits

0x9e79,	// (0x00038958) eswt_control_pane_g3_copy1

0x9e86,	// (0x00038965) eswt_control_pane_g4_copy1_ParamLimits

0x9e86,	// (0x00038965) eswt_control_pane_g4_copy1

0x96a9,	// (0x00038188) bg_eswt_ctrl_canvas_pane_g1

0x966e,	// (0x0003814d) common_borders_pane_cp2_ParamLimits

0x966e,	// (0x0003814d) common_borders_pane_cp2

0x966e,	// (0x0003814d) common_borders_pane_cp3_ParamLimits

0x966e,	// (0x0003814d) common_borders_pane_cp3

0x9edb,	// (0x000389ba) separator_horizontal_pane

0x5191,	// (0x00033c70) separator_vertical_pane

0x9e5f,	// (0x0003893e) eswt_control_pane_g1_copy2_ParamLimits

0x9e5f,	// (0x0003893e) eswt_control_pane_g1_copy2

0x9e6c,	// (0x0003894b) eswt_control_pane_g2_copy2_ParamLimits

0x9e6c,	// (0x0003894b) eswt_control_pane_g2_copy2

0x9e79,	// (0x00038958) eswt_control_pane_g3_copy2_ParamLimits

0x9e79,	// (0x00038958) eswt_control_pane_g3_copy2

0x9e86,	// (0x00038965) eswt_control_pane_g4_copy2_ParamLimits

0x9e86,	// (0x00038965) eswt_control_pane_g4_copy2

0x424c,	// (0x00032d2b) common_borders_pane_cp4

0x9ee3,	// (0x000389c2) separator_horizontal_pane_g1

0x9eec,	// (0x000389cb) separator_horizontal_pane_g2

0x9ef5,	// (0x000389d4) separator_horizontal_pane_g3

0x0002,

0xfc09,	// (0x0003e6e8) separator_horizontal_pane_g

0x9e5f,	// (0x0003893e) eswt_control_pane_g1_copy3_ParamLimits

0x9e5f,	// (0x0003893e) eswt_control_pane_g1_copy3

0x9e6c,	// (0x0003894b) eswt_control_pane_g2_copy3_ParamLimits

0x9e6c,	// (0x0003894b) eswt_control_pane_g2_copy3

0x9e79,	// (0x00038958) eswt_control_pane_g3_copy3_ParamLimits

0x9e79,	// (0x00038958) eswt_control_pane_g3_copy3

0x9e86,	// (0x00038965) eswt_control_pane_g4_copy3_ParamLimits

0x9e86,	// (0x00038965) eswt_control_pane_g4_copy3

0x424c,	// (0x00032d2b) common_borders_pane_cp5

0x9efe,	// (0x000389dd) separator_vertical_pane_g1

0x9f07,	// (0x000389e6) separator_vertical_pane_g2

0x9f10,	// (0x000389ef) separator_vertical_pane_g3

0x0002,

0xfc10,	// (0x0003e6ef) separator_vertical_pane_g

0x9e5f,	// (0x0003893e) eswt_control_pane_g1_copy4_ParamLimits

0x9e5f,	// (0x0003893e) eswt_control_pane_g1_copy4

0x9e6c,	// (0x0003894b) eswt_control_pane_g2_copy4_ParamLimits

0x9e6c,	// (0x0003894b) eswt_control_pane_g2_copy4

0x9e79,	// (0x00038958) eswt_control_pane_g3_copy4_ParamLimits

0x9e79,	// (0x00038958) eswt_control_pane_g3_copy4

0x9e86,	// (0x00038965) eswt_control_pane_g4_copy4_ParamLimits

0x9e86,	// (0x00038965) eswt_control_pane_g4_copy4

0x1c98,	// (0x00030777) eswt_ctrl_combo_button_pane

0x1ca0,	// (0x0003077f) eswt_ctrl_input_pane

0x1ca8,	// (0x00030787) popup_choice_list_window_cp70

0x1cb0,	// (0x0003078f) eswt_ctrl_input_pane_t1

0x424c,	// (0x00032d2b) input_focus_pane_cp70

0x966e,	// (0x0003814d) bg_button_pane_cp70_ParamLimits

0x966e,	// (0x0003814d) bg_button_pane_cp70

0x1cbe,	// (0x0003079d) eswt_ctrl_combo_button_pane_g1

0x9f19,	// (0x000389f8) wait_bar_pane_cp70

0x79ac,	// (0x0003648b) bg_popup_window_pane_cp70_ParamLimits

0x79ac,	// (0x0003648b) bg_popup_window_pane_cp70

0x9f21,	// (0x00038a00) popup_eswt_tasktip_window_t1

0x9f37,	// (0x00038a16) wait_bar_pane_cp71_ParamLimits

0x9f37,	// (0x00038a16) wait_bar_pane_cp71

0x9f43,	// (0x00038a22) grid_eswt_app_pane

0x519a,	// (0x00033c79) scroll_pane_cp70

0x1cc6,	// (0x000307a5) cell_eswt_app_pane_ParamLimits

0x1cc6,	// (0x000307a5) cell_eswt_app_pane

0x1cee,	// (0x000307cd) cell_eswt_app_pane_g1_ParamLimits

0x1cee,	// (0x000307cd) cell_eswt_app_pane_g1

0x1d1d,	// (0x000307fc) cell_eswt_app_pane_g2_ParamLimits

0x1d1d,	// (0x000307fc) cell_eswt_app_pane_g2

0x0001,

0xfc17,	// (0x0003e6f6) cell_eswt_app_pane_g_ParamLimits

0xfc17,	// (0x0003e6f6) cell_eswt_app_pane_g

0x1d46,	// (0x00030825) cell_eswt_app_pane_t1_ParamLimits

0x1d46,	// (0x00030825) cell_eswt_app_pane_t1

0x9f4c,	// (0x00038a2b) grid_highlight_pane_cp70_ParamLimits

0x9f4c,	// (0x00038a2b) grid_highlight_pane_cp70

0x4c12,	// (0x000336f1) set_content_pane_g1

0x7713,	// (0x000361f2) status_small_volume_pane

0x68ea,	// (0x000353c9) status_small_volume_pane_g1

0x68f2,	// (0x000353d1) volume_small2_pane

0x68fb,	// (0x000353da) volume_small2_pane_g1

0x6904,	// (0x000353e3) volume_small2_pane_g2

0x690d,	// (0x000353ec) volume_small2_pane_g3

0x6916,	// (0x000353f5) volume_small2_pane_g4

0x691f,	// (0x000353fe) volume_small2_pane_g5

0x6928,	// (0x00035407) volume_small2_pane_g6

0x6931,	// (0x00035410) volume_small2_pane_g7

0x693a,	// (0x00035419) volume_small2_pane_g8

0x6943,	// (0x00035422) volume_small2_pane_g9

0x694c,	// (0x0003542b) volume_small2_pane_g10

0x0009,

0xfc1c,	// (0x0003e6fb) volume_small2_pane_g

0x99dc,	// (0x000384bb) fep_vkb_top_text_pane_g1_ParamLimits

0x1c05,	// (0x000306e4) fep_vkb_top_text_pane_t1_ParamLimits

0x9c00,	// (0x000386df) popup_preview_fixed_window_g3_ParamLimits

0x9c00,	// (0x000386df) popup_preview_fixed_window_g3

0xdd3b,	// (0x0003c81a) popup_toolbar_trans_pane

0x179c,	// (0x0003027b) aid_height_set_list_ParamLimits

0x8a5a,	// (0x00037539) aid_size_parent_ParamLimits

0x5b78,	// (0x00034657) list_highlight_pane_cp2_ParamLimits

0x4c12,	// (0x000336f1) set_content_pane_g1_ParamLimits

0x1922,	// (0x00030401) list_single_image_pane_ParamLimits

0x1922,	// (0x00030401) list_single_image_pane

0x1d78,	// (0x00030857) aid_size_cell_image_ParamLimits

0x1d78,	// (0x00030857) aid_size_cell_image

0x1d85,	// (0x00030864) grid_single_image_pane_ParamLimits

0x1d85,	// (0x00030864) grid_single_image_pane

0x4c12,	// (0x000336f1) list_single_image_pane_g1_ParamLimits

0x4c12,	// (0x000336f1) list_single_image_pane_g1

0x4cbc,	// (0x0003379b) list_single_image_pane_g2_ParamLimits

0x4cbc,	// (0x0003379b) list_single_image_pane_g2

0x0001,

0xfc31,	// (0x0003e710) list_single_image_pane_g_ParamLimits

0xfc31,	// (0x0003e710) list_single_image_pane_g

0x9f58,	// (0x00038a37) list_single_image_pane_t1_ParamLimits

0x9f58,	// (0x00038a37) list_single_image_pane_t1

0x1d91,	// (0x00030870) cell_image_list_pane_ParamLimits

0x1d91,	// (0x00030870) cell_image_list_pane

0x1da5,	// (0x00030884) cell_image_list_pane_g1

0x1dae,	// (0x0003088d) cell_image_list_pane_g2

0x0001,

0xfc36,	// (0x0003e715) cell_image_list_pane_g

0x9f6e,	// (0x00038a4d) aid_size_cell_tb_trans_pane

0x4ca2,	// (0x00033781) bg_tb_trans_pane

0x9f80,	// (0x00038a5f) grid_tb_trans_pane

0x792c,	// (0x0003640b) bg_tb_trans_pane_g1

0x7934,	// (0x00036413) bg_tb_trans_pane_g2

0x793c,	// (0x0003641b) bg_tb_trans_pane_g3

0x7944,	// (0x00036423) bg_tb_trans_pane_g4

0x794c,	// (0x0003642b) bg_tb_trans_pane_g5

0x7964,	// (0x00036443) bg_tb_trans_pane_g6

0x796c,	// (0x0003644b) bg_tb_trans_pane_g7

0x7954,	// (0x00036433) bg_tb_trans_pane_g8

0x795c,	// (0x0003643b) bg_tb_trans_pane_g9

0x0008,

0xfc3b,	// (0x0003e71a) bg_tb_trans_pane_g

0x9f94,	// (0x00038a73) cell_toolbar_trans_pane_ParamLimits

0x9f94,	// (0x00038a73) cell_toolbar_trans_pane

0x96a9,	// (0x00038188) cell_toolbar_trans_pane_g1

0x1b4f,	// (0x0003062e) list_form2_midp_pane_t1

0x1b5d,	// (0x0003063c) list_form2_midp_pane_t2

0x0001,

0xfae4,	// (0x0003e5c3) list_form2_midp_pane_t

0x937d,	// (0x00037e5c) scroll_pane_cp51_ParamLimits

0x94f3,	// (0x00037fd2) form2_midp_wait_pane_g1

0x94fc,	// (0x00037fdb) form2_midp_wait_pane_g2

0x9505,	// (0x00037fe4) form2_midp_wait_pane_g3

0x0002,

0xfaf9,	// (0x0003e5d8) form2_midp_wait_pane_g

0x45a9,	// (0x00033088) list_highlight_pane_cp21_ParamLimits

0x9543,	// (0x00038022) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x9552,	// (0x00038031) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6355,	// (0x00034e34) list_single_2graphic_im_pane_ParamLimits

0x6355,	// (0x00034e34) list_single_2graphic_im_pane

0x1db7,	// (0x00030896) list_single_2graphic_im_pane_g1_ParamLimits

0x1db7,	// (0x00030896) list_single_2graphic_im_pane_g1

0x1dc8,	// (0x000308a7) list_single_2graphic_im_pane_g2_ParamLimits

0x1dc8,	// (0x000308a7) list_single_2graphic_im_pane_g2

0x1dd4,	// (0x000308b3) list_single_2graphic_im_pane_g3_ParamLimits

0x1dd4,	// (0x000308b3) list_single_2graphic_im_pane_g3

0x0003,

0xfc4e,	// (0x0003e72d) list_single_2graphic_im_pane_g_ParamLimits

0xfc4e,	// (0x0003e72d) list_single_2graphic_im_pane_g

0x1de8,	// (0x000308c7) list_single_2graphic_im_pane_t1_ParamLimits

0x1de8,	// (0x000308c7) list_single_2graphic_im_pane_t1

0x9c0c,	// (0x000386eb) list_single_graphic_2heading_pane_fp_ParamLimits

0x9c0c,	// (0x000386eb) list_single_graphic_2heading_pane_fp

0x3fb2,	// (0x00032a91) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3fb2,	// (0x00032a91) list_single_graphic_2heading_pane_fp_g1

0x9c20,	// (0x000386ff) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x9c20,	// (0x000386ff) list_single_graphic_2heading_pane_fp_g2

0x4bee,	// (0x000336cd) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4bee,	// (0x000336cd) list_single_graphic_2heading_pane_fp_g3

0x67c7,	// (0x000352a6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x67c7,	// (0x000352a6) list_single_graphic_2heading_pane_fp_g4

0x9c2c,	// (0x0003870b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x9c2c,	// (0x0003870b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7c,	// (0x0003e65b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7c,	// (0x0003e65b) list_single_graphic_2heading_pane_fp_g

0x40e5,	// (0x00032bc4) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x40e5,	// (0x00032bc4) list_single_graphic_2heading_pane_fp_t1

0x3fea,	// (0x00032ac9) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3fea,	// (0x00032ac9) list_single_graphic_2heading_pane_fp_t2

0x40fb,	// (0x00032bda) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x40fb,	// (0x00032bda) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc57,	// (0x0003e736) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc57,	// (0x0003e736) list_single_graphic_2heading_pane_fp_t

0x9732,	// (0x00038211) fep_hwr_write_pane_g5_ParamLimits

0x9732,	// (0x00038211) fep_hwr_write_pane_g5

0x973e,	// (0x0003821d) fep_hwr_write_pane_g6_ParamLimits

0x973e,	// (0x0003821d) fep_hwr_write_pane_g6

0x9e32,	// (0x00038911) eswt_shell_pane_ParamLimits

0x79ac,	// (0x0003648b) bg_popup_window_pane_cp18_ParamLimits

0x89fe,	// (0x000374dd) heading_pane_cp70

0x9f21,	// (0x00038a00) popup_eswt_tasktip_window_t1_ParamLimits

0x1243,	// (0x0002fd22) aid_touch_tab_arrow_left

0x1257,	// (0x0002fd36) aid_touch_tab_arrow_right

0x02d6,	// (0x0002edb5) title_pane_g3_ParamLimits

0x02d6,	// (0x0002edb5) title_pane_g3

0x4c72,	// (0x00033751) set_value_pane_g1

0xdd3b,	// (0x0003c81a) popup_toolbar_trans_pane_ParamLimits

0x9f6e,	// (0x00038a4d) aid_size_cell_tb_trans_pane_ParamLimits

0x4ca2,	// (0x00033781) bg_tb_trans_pane_ParamLimits

0x9f80,	// (0x00038a5f) grid_tb_trans_pane_ParamLimits

0x477c,	// (0x0003325b) cont_note_pane_ParamLimits

0x477c,	// (0x0003325b) cont_note_pane

0x4a09,	// (0x000334e8) cont_snote2_single_text_pane_ParamLimits

0x4a09,	// (0x000334e8) cont_snote2_single_text_pane

0x4a09,	// (0x000334e8) cont_snote2_single_graphic_pane_ParamLimits

0x4a09,	// (0x000334e8) cont_snote2_single_graphic_pane

0x7eec,	// (0x000369cb) cont_note_wait_pane_ParamLimits

0x7eec,	// (0x000369cb) cont_note_wait_pane

0x7eec,	// (0x000369cb) cont_note_image_pane_ParamLimits

0x7eec,	// (0x000369cb) cont_note_image_pane

0x9fc6,	// (0x00038aa5) popup_note2_window_g1_ParamLimits

0x9fc6,	// (0x00038aa5) popup_note2_window_g1

0x9ff7,	// (0x00038ad6) popup_note2_window_t1_ParamLimits

0x9ff7,	// (0x00038ad6) popup_note2_window_t1

0xa03c,	// (0x00038b1b) popup_note2_window_t2_ParamLimits

0xa03c,	// (0x00038b1b) popup_note2_window_t2

0xa081,	// (0x00038b60) popup_note2_window_t3_ParamLimits

0xa081,	// (0x00038b60) popup_note2_window_t3

0xa0c6,	// (0x00038ba5) popup_note2_window_t4_ParamLimits

0xa0c6,	// (0x00038ba5) popup_note2_window_t4

0x4800,	// (0x000332df) popup_note2_window_t5_ParamLimits

0x4800,	// (0x000332df) popup_note2_window_t5

0x0004,

0xfc63,	// (0x0003e742) popup_note2_window_t_ParamLimits

0xfc63,	// (0x0003e742) popup_note2_window_t

0xa0f5,	// (0x00038bd4) popup_note2_image_window_g1_ParamLimits

0xa0f5,	// (0x00038bd4) popup_note2_image_window_g1

0xa101,	// (0x00038be0) popup_note2_image_window_g2_ParamLimits

0xa101,	// (0x00038be0) popup_note2_image_window_g2

0x0001,

0xfc6e,	// (0x0003e74d) popup_note2_image_window_g_ParamLimits

0xfc6e,	// (0x0003e74d) popup_note2_image_window_g

0xa113,	// (0x00038bf2) popup_note2_image_window_t1_ParamLimits

0xa113,	// (0x00038bf2) popup_note2_image_window_t1

0xa12b,	// (0x00038c0a) popup_note2_image_window_t2_ParamLimits

0xa12b,	// (0x00038c0a) popup_note2_image_window_t2

0xa143,	// (0x00038c22) popup_note2_image_window_t3_ParamLimits

0xa143,	// (0x00038c22) popup_note2_image_window_t3

0x0002,

0xfc73,	// (0x0003e752) popup_note2_image_window_t_ParamLimits

0xfc73,	// (0x0003e752) popup_note2_image_window_t

0x7efa,	// (0x000369d9) popup_note2_wait_window_g1_ParamLimits

0x7efa,	// (0x000369d9) popup_note2_wait_window_g1

0x7f06,	// (0x000369e5) popup_note2_wait_window_g2_ParamLimits

0x7f06,	// (0x000369e5) popup_note2_wait_window_g2

0x7f12,	// (0x000369f1) popup_note2_wait_window_g3_ParamLimits

0x7f12,	// (0x000369f1) popup_note2_wait_window_g3

0x0002,

0xf841,	// (0x0003e320) popup_note2_wait_window_g_ParamLimits

0xf841,	// (0x0003e320) popup_note2_wait_window_g

0xa15f,	// (0x00038c3e) popup_note2_wait_window_t1_ParamLimits

0xa15f,	// (0x00038c3e) popup_note2_wait_window_t1

0xa17d,	// (0x00038c5c) popup_note2_wait_window_t2_ParamLimits

0xa17d,	// (0x00038c5c) popup_note2_wait_window_t2

0xa19b,	// (0x00038c7a) popup_note2_wait_window_t3_ParamLimits

0xa19b,	// (0x00038c7a) popup_note2_wait_window_t3

0xa1ad,	// (0x00038c8c) popup_note2_wait_window_t4_ParamLimits

0xa1ad,	// (0x00038c8c) popup_note2_wait_window_t4

0x0003,

0xfc7a,	// (0x0003e759) popup_note2_wait_window_t_ParamLimits

0xfc7a,	// (0x0003e759) popup_note2_wait_window_t

0xa1bf,	// (0x00038c9e) wait_bar2_pane_ParamLimits

0xa1bf,	// (0x00038c9e) wait_bar2_pane

0xa1d7,	// (0x00038cb6) popup_snote2_single_text_window_g1_ParamLimits

0xa1d7,	// (0x00038cb6) popup_snote2_single_text_window_g1

0xa1ff,	// (0x00038cde) popup_snote2_single_text_window_t1_ParamLimits

0xa1ff,	// (0x00038cde) popup_snote2_single_text_window_t1

0xa24b,	// (0x00038d2a) popup_snote2_single_text_window_t2_ParamLimits

0xa24b,	// (0x00038d2a) popup_snote2_single_text_window_t2

0xa297,	// (0x00038d76) popup_snote2_single_text_window_t3_ParamLimits

0xa297,	// (0x00038d76) popup_snote2_single_text_window_t3

0xa2d8,	// (0x00038db7) popup_snote2_single_text_window_t4_ParamLimits

0xa2d8,	// (0x00038db7) popup_snote2_single_text_window_t4

0xa30e,	// (0x00038ded) popup_snote2_single_text_window_t5_ParamLimits

0xa30e,	// (0x00038ded) popup_snote2_single_text_window_t5

0x0004,

0xfc83,	// (0x0003e762) popup_snote2_single_text_window_t_ParamLimits

0xfc83,	// (0x0003e762) popup_snote2_single_text_window_t

0xa339,	// (0x00038e18) popup_snote2_single_graphic_window_g1_ParamLimits

0xa339,	// (0x00038e18) popup_snote2_single_graphic_window_g1

0xa361,	// (0x00038e40) popup_snote2_single_graphic_window_g2_ParamLimits

0xa361,	// (0x00038e40) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8e,	// (0x0003e76d) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8e,	// (0x0003e76d) popup_snote2_single_graphic_window_g

0xa389,	// (0x00038e68) popup_snote2_single_graphic_window_t1_ParamLimits

0xa389,	// (0x00038e68) popup_snote2_single_graphic_window_t1

0xa3d5,	// (0x00038eb4) popup_snote2_single_graphic_window_t2_ParamLimits

0xa3d5,	// (0x00038eb4) popup_snote2_single_graphic_window_t2

0xa297,	// (0x00038d76) popup_snote2_single_graphic_window_t3_ParamLimits

0xa297,	// (0x00038d76) popup_snote2_single_graphic_window_t3

0xa2d8,	// (0x00038db7) popup_snote2_single_graphic_window_t4_ParamLimits

0xa2d8,	// (0x00038db7) popup_snote2_single_graphic_window_t4

0xa30e,	// (0x00038ded) popup_snote2_single_graphic_window_t5_ParamLimits

0xa30e,	// (0x00038ded) popup_snote2_single_graphic_window_t5

0x0004,

0xfc93,	// (0x0003e772) popup_snote2_single_graphic_window_t_ParamLimits

0xfc93,	// (0x0003e772) popup_snote2_single_graphic_window_t

0x9316,	// (0x00037df5) clock_nsta_pane_cp2_t1

0x9316,	// (0x00037df5) clock_nsta_pane_cp2_t2

0x0001,

0xfaba,	// (0x0003e599) clock_nsta_pane_cp2_t

0x3965,	// (0x00032444) form_field_data_wide_pane_g1_ParamLimits

0x4c12,	// (0x000336f1) form_field_data_wide_pane_g2_ParamLimits

0x4c12,	// (0x000336f1) form_field_data_wide_pane_g2

0x4cbc,	// (0x0003379b) form_field_data_wide_pane_g3_ParamLimits

0x4cbc,	// (0x0003379b) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0003e15f) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0003e15f) form_field_data_wide_pane_g

0x1a98,	// (0x00030577) grid_touch_3_pane_ParamLimits

0x1a98,	// (0x00030577) grid_touch_3_pane

0x1e19,	// (0x000308f8) cell_touch_3_pane_ParamLimits

0x1e19,	// (0x000308f8) cell_touch_3_pane

0x96a9,	// (0x00038188) cell_touch_3_pane_g1

0x96a9,	// (0x00038188) cell_touch_3_pane_g2

0x0001,

0xfb3f,	// (0x0003e61e) cell_touch_3_pane_g

0x4858,	// (0x00033337) cont_query_data_pane

0x4860,	// (0x0003333f) cont_query_data_pane_cp1

0xa421,	// (0x00038f00) button_value_adjust_pane_cp7

0xa429,	// (0x00038f08) query_popup_pane_cp3

0x53bc,	// (0x00033e9b) bg_popup_sub_pane_cp22_ParamLimits

0x53d2,	// (0x00033eb1) navi_navi_volume_pane_cp2

0x53ea,	// (0x00033ec9) popup_side_volume_key_window_g2

0x53f6,	// (0x00033ed5) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0003e1f5) popup_side_volume_key_window_g

0x5410,	// (0x00033eef) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0003e1fc) popup_side_volume_key_window_t

0x5797,	// (0x00034276) popup_side_volume_key_window_ParamLimits

0xce07,	// (0x0003b8e6) list_double_graphic_pane_g4_ParamLimits

0xce07,	// (0x0003b8e6) list_double_graphic_pane_g4

0xd2bb,	// (0x0003bd9a) list_single_2heading_msg_pane_ParamLimits

0xd2bb,	// (0x0003bd9a) list_single_2heading_msg_pane

0xd2f1,	// (0x0003bdd0) list_single_2heading_msg_pane_g1_ParamLimits

0xd2f1,	// (0x0003bdd0) list_single_2heading_msg_pane_g1

0xd2fd,	// (0x0003bddc) list_single_2heading_msg_pane_g2_ParamLimits

0xd2fd,	// (0x0003bddc) list_single_2heading_msg_pane_g2

0xd310,	// (0x0003bdef) list_single_2heading_msg_pane_g3_ParamLimits

0xd310,	// (0x0003bdef) list_single_2heading_msg_pane_g3

0xd31c,	// (0x0003bdfb) list_single_2heading_msg_pane_g4_ParamLimits

0xd31c,	// (0x0003bdfb) list_single_2heading_msg_pane_g4

0x0003,

0xfc9e,	// (0x0003e77d) list_single_2heading_msg_pane_g_ParamLimits

0xfc9e,	// (0x0003e77d) list_single_2heading_msg_pane_g

0xd334,	// (0x0003be13) list_single_2heading_msg_pane_t1_ParamLimits

0xd334,	// (0x0003be13) list_single_2heading_msg_pane_t1

0xd35c,	// (0x0003be3b) list_single_2heading_msg_pane_t2_ParamLimits

0xd35c,	// (0x0003be3b) list_single_2heading_msg_pane_t2

0xd3c7,	// (0x0003bea6) list_single_2heading_msg_pane_t3_ParamLimits

0xd3c7,	// (0x0003bea6) list_single_2heading_msg_pane_t3

0x41d9,	// (0x00032cb8) list_single_2heading_msg_pane_t4_ParamLimits

0x41d9,	// (0x00032cb8) list_single_2heading_msg_pane_t4

0x0003,

0xfca7,	// (0x0003e786) list_single_2heading_msg_pane_t_ParamLimits

0xfca7,	// (0x0003e786) list_single_2heading_msg_pane_t

0x4565,	// (0x00033044) title_pane_g4_ParamLimits

0x4565,	// (0x00033044) title_pane_g4

0x4fcf,	// (0x00033aae) title_pane_stacon_g3_ParamLimits

0x4fcf,	// (0x00033aae) title_pane_stacon_g3

0x9fba,	// (0x00038a99) list_single_2graphic_im_pane_g4_ParamLimits

0x9fba,	// (0x00038a99) list_single_2graphic_im_pane_g4

0x8828,	// (0x00037307) popup_side_volume_key_window_cp

0x8c7a,	// (0x00037759) main_idle_act2_pane_t1

0x6037,	// (0x00034b16) toolbar_button_pane_g10

0x0622,	// (0x0002f101) popup_toolbar_window_cp1

0x9307,	// (0x00037de6) clock_nsta_pane_cp_t1

0x9307,	// (0x00037de6) clock_nsta_pane_cp_t2

0x0001,

0xfab5,	// (0x0003e594) clock_nsta_pane_cp_t

0x53d2,	// (0x00033eb1) navi_navi_volume_pane_cp2_ParamLimits

0x53de,	// (0x00033ebd) popup_side_volume_key_window_g1_ParamLimits

0x53ea,	// (0x00033ec9) popup_side_volume_key_window_g2_ParamLimits

0x53f6,	// (0x00033ed5) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0003e1f5) popup_side_volume_key_window_g_ParamLimits

0x658a,	// (0x00035069) fep_hwr_aid_pane

0xf4f4,	// (0x0003dfd3) bg_fep_hwr_top_pane_g4_ParamLimits

0x9702,	// (0x000381e1) fep_hwr_top_pane_g1_ParamLimits

0x9714,	// (0x000381f3) fep_hwr_top_pane_g2_ParamLimits

0x663d,	// (0x0003511c) fep_hwr_top_pane_g3_ParamLimits

0xfb0a,	// (0x0003e5e9) fep_hwr_top_pane_g_ParamLimits

0x6652,	// (0x00035131) fep_hwr_top_text_pane_ParamLimits

0x85f3,	// (0x000370d2) aid_touch_tab_arrow_arrow_2

0x85fc,	// (0x000370db) aid_touch_tab_arrow_left_2

0x659e,	// (0x0003507d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x65d1,	// (0x000350b0) fep_hwr_prediction_pane

0x9847,	// (0x00038326) fep_vkb_prediction_pane

0x1be5,	// (0x000306c4) fep_vkb_side_pane_g3_ParamLimits

0x1be5,	// (0x000306c4) fep_vkb_side_pane_g3

0x98d5,	// (0x000383b4) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x9c80,	// (0x0003875f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x9c8d,	// (0x0003876c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb4,	// (0x0003e693) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xa43a,	// (0x00038f19) fep_hwr_prediction_pane_g1

0x6955,	// (0x00035434) fep_hwr_prediction_pane_g2

0x695d,	// (0x0003543c) fep_hwr_prediction_pane_g3

0x6965,	// (0x00035444) fep_hwr_prediction_pane_g4

0x0003,

0xfcb0,	// (0x0003e78f) fep_hwr_prediction_pane_g

0xa43a,	// (0x00038f19) fep_vkb_prediction_pane_g1

0xa444,	// (0x00038f23) fep_vkb_prediction_pane_g2

0xa44c,	// (0x00038f2b) fep_vkb_prediction_pane_g3

0xa454,	// (0x00038f33) fep_vkb_prediction_pane_g4

0x0003,

0xfcb9,	// (0x0003e798) fep_vkb_prediction_pane_g

0x62fd,	// (0x00034ddc) slider_set_pane_g3

0x6311,	// (0x00034df0) slider_set_pane_g4

0x6329,	// (0x00034e08) slider_set_pane_g5

0x62fd,	// (0x00034ddc) slider_set_pane_g6

0xdf44,	// (0x0003ca23) slider_set_pane_g7

0x8a7d,	// (0x0003755c) slider_form_pane_g3

0x8a86,	// (0x00037565) slider_form_pane_g4

0x8a8e,	// (0x0003756d) slider_form_pane_g5

0x8a7d,	// (0x0003755c) slider_form_pane_g6

0x18ce,	// (0x000303ad) slider_form_pane_g7

0x8ec3,	// (0x000379a2) slider_set_pane_vc_g3

0x8ecc,	// (0x000379ab) slider_set_pane_vc_g4

0x8ed5,	// (0x000379b4) slider_set_pane_vc_g5

0x8ec3,	// (0x000379a2) slider_set_pane_vc_g6

0x8ede,	// (0x000379bd) slider_set_pane_vc_g7

0x8ec3,	// (0x000379a2) slider_form_pane_vc_g1

0x8ecc,	// (0x000379ab) slider_form_pane_vc_g2

0x8ed5,	// (0x000379b4) slider_form_pane_vc_g3

0x8ec3,	// (0x000379a2) slider_form_pane_vc_g4

0x9052,	// (0x00037b31) slider_form_pane_vc_g5

0x0004,

0xfa87,	// (0x0003e566) slider_form_pane_vc_g

0x424c,	// (0x00032d2b) main_idle_act3_pane

0xa45c,	// (0x00038f3b) ai3_links_pane

0x1e60,	// (0x0003093f) popup_ai3_data_window_ParamLimits

0x1e60,	// (0x0003093f) popup_ai3_data_window

0x424c,	// (0x00032d2b) grid_ai3_links_pane

0x1e78,	// (0x00030957) cell_ai3_links_pane_ParamLimits

0x1e78,	// (0x00030957) cell_ai3_links_pane

0xa465,	// (0x00038f44) bg_popup_sub_pane_cp11

0xa472,	// (0x00038f51) cell_ai3_links_pane_g1

0x424c,	// (0x00032d2b) bg_popup_sub_pane_cp12

0xa497,	// (0x00038f76) heading_ai3_data_pane

0xa49f,	// (0x00038f7e) list_ai3_gene_pane

0xa4ab,	// (0x00038f8a) popup_ai3_data_window_g1

0xa4b3,	// (0x00038f92) heading_ai3_data_pane_g1

0xa4bb,	// (0x00038f9a) heading_ai3_data_pane_t1

0xa4c9,	// (0x00038fa8) list_double_ai3_gene_pane_ParamLimits

0xa4c9,	// (0x00038fa8) list_double_ai3_gene_pane

0xa4d6,	// (0x00038fb5) list_single_ai3_gene_pane_ParamLimits

0xa4d6,	// (0x00038fb5) list_single_ai3_gene_pane

0x966e,	// (0x0003814d) list_highlight_pane_cp7_ParamLimits

0x966e,	// (0x0003814d) list_highlight_pane_cp7

0xa4e3,	// (0x00038fc2) list_single_a13_gene_pane_t1_ParamLimits

0xa4e3,	// (0x00038fc2) list_single_a13_gene_pane_t1

0xa4fa,	// (0x00038fd9) list_single_ai3_gene_pane_g1

0xa503,	// (0x00038fe2) list_single_ai3_gene_pane_g2

0x0001,

0xfcc2,	// (0x0003e7a1) list_single_ai3_gene_pane_g

0xa50b,	// (0x00038fea) list_double_ai3_gene_pane_g1_ParamLimits

0xa50b,	// (0x00038fea) list_double_ai3_gene_pane_g1

0xa517,	// (0x00038ff6) list_double_ai3_gene_pane_t1_ParamLimits

0xa517,	// (0x00038ff6) list_double_ai3_gene_pane_t1

0xa533,	// (0x00039012) list_double_ai3_gene_pane_t2_ParamLimits

0xa533,	// (0x00039012) list_double_ai3_gene_pane_t2

0xa548,	// (0x00039027) list_double_ai3_gene_pane_t3_ParamLimits

0xa548,	// (0x00039027) list_double_ai3_gene_pane_t3

0x0002,

0xfcc7,	// (0x0003e7a6) list_double_ai3_gene_pane_t_ParamLimits

0xfcc7,	// (0x0003e7a6) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4111,	// (0x00032bf0) aid_size_min_col_2

0x1e4c,	// (0x0003092b) aid_size_min_msg_ParamLimits

0x1e4c,	// (0x0003092b) aid_size_min_msg

0x1bf9,	// (0x000306d8) fep_vkb_top_text_pane_g2_ParamLimits

0x1bf9,	// (0x000306d8) fep_vkb_top_text_pane_g2

0x0001,

0xfb3a,	// (0x0003e619) fep_vkb_top_text_pane_g_ParamLimits

0xfb3a,	// (0x0003e619) fep_vkb_top_text_pane_g

0x424c,	// (0x00032d2b) main_hc_apps_shell_pane

0xa565,	// (0x00039044) grid_hc_apps_pane_ParamLimits

0xa565,	// (0x00039044) grid_hc_apps_pane

0xa574,	// (0x00039053) list_hc_apps_pane

0xa57c,	// (0x0003905b) scroll_pane_cp37_ParamLimits

0xa57c,	// (0x0003905b) scroll_pane_cp37

0x1e8e,	// (0x0003096d) cell_hc_apps_pane_ParamLimits

0x1e8e,	// (0x0003096d) cell_hc_apps_pane

0x1f28,	// (0x00030a07) cell_hc_apps_pane_g1_ParamLimits

0x1f28,	// (0x00030a07) cell_hc_apps_pane_g1

0xa588,	// (0x00039067) cell_hc_apps_pane_g2_ParamLimits

0xa588,	// (0x00039067) cell_hc_apps_pane_g2

0xa5a4,	// (0x00039083) cell_hc_apps_pane_g3_ParamLimits

0xa5a4,	// (0x00039083) cell_hc_apps_pane_g3

0x0002,

0xfcce,	// (0x0003e7ad) cell_hc_apps_pane_g_ParamLimits

0xfcce,	// (0x0003e7ad) cell_hc_apps_pane_g

0x1f55,	// (0x00030a34) cell_hc_apps_pane_t1_ParamLimits

0x1f55,	// (0x00030a34) cell_hc_apps_pane_t1

0x477c,	// (0x0003325b) grid_highlight_pane_cp10_ParamLimits

0x477c,	// (0x0003325b) grid_highlight_pane_cp10

0x1f93,	// (0x00030a72) list_single_hc_apps_pane_ParamLimits

0x1f93,	// (0x00030a72) list_single_hc_apps_pane

0x1fbf,	// (0x00030a9e) list_single_hc_apps_pane_g1

0xdfbb,	// (0x0003ca9a) list_single_hc_apps_pane_g2

0x0001,

0xfcd5,	// (0x0003e7b4) list_single_hc_apps_pane_g

0xdfd4,	// (0x0003cab3) list_single_hc_apps_pane_g2_copy1

0xd435,	// (0x0003bf14) list_single_hc_apps_pane_t1

0x45a9,	// (0x00033088) bg_set_opt_pane_cp_ParamLimits

0x45c7,	// (0x000330a6) setting_slider_pane_t1_ParamLimits

0xd5b9,	// (0x0003c098) setting_slider_pane_t2_ParamLimits

0xd5d2,	// (0x0003c0b1) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003e03d) setting_slider_pane_t_ParamLimits

0x460d,	// (0x000330ec) slider_set_pane_ParamLimits

0x5a62,	// (0x00034541) control_pane_g5_ParamLimits

0x5a62,	// (0x00034541) control_pane_g5

0x8a45,	// (0x00037524) slider_set_pane_g1_ParamLimits

0x62f1,	// (0x00034dd0) slider_set_pane_g2_ParamLimits

0x62fd,	// (0x00034ddc) slider_set_pane_g3_ParamLimits

0x6311,	// (0x00034df0) slider_set_pane_g4_ParamLimits

0x6329,	// (0x00034e08) slider_set_pane_g5_ParamLimits

0x62fd,	// (0x00034ddc) slider_set_pane_g6_ParamLimits

0xdf44,	// (0x0003ca23) slider_set_pane_g7_ParamLimits

0xf95d,	// (0x0003e43c) slider_set_pane_g_ParamLimits

0x45a9,	// (0x00033088) navi_icon_text_pane_ParamLimits

0x1215,	// (0x0002fcf4) aid_fill_nsta_2_ParamLimits

0x1243,	// (0x0002fd22) aid_touch_tab_arrow_left_ParamLimits

0x1257,	// (0x0002fd36) aid_touch_tab_arrow_right_ParamLimits

0x12f3,	// (0x0002fdd2) clock_nsta_pane_ParamLimits

0x85d5,	// (0x000370b4) navi_icon_pane_g1_ParamLimits

0x85e1,	// (0x000370c0) navi_text_pane_t1_ParamLimits

0x9357,	// (0x00037e36) navi_icon_text_pane_g1_ParamLimits

0x9363,	// (0x00037e42) navi_icon_text_pane_t1_ParamLimits

0x1fbf,	// (0x00030a9e) list_single_hc_apps_pane_g1_ParamLimits

0xdfbb,	// (0x0003ca9a) list_single_hc_apps_pane_g2_ParamLimits

0xfcd5,	// (0x0003e7b4) list_single_hc_apps_pane_g_ParamLimits

0xdfd4,	// (0x0003cab3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd435,	// (0x0003bf14) list_single_hc_apps_pane_t1_ParamLimits

0xd4ff,	// (0x0003bfde) popup_toolbar2_fixed_window_ParamLimits

0xd4ff,	// (0x0003bfde) popup_toolbar2_fixed_window

0xdd33,	// (0x0003c812) popup_toolbar2_float_window

0x424c,	// (0x00032d2b) bg_popup_sub_pane_cp27

0xa5c6,	// (0x000390a5) grid_toolbar2_float_pane

0x424c,	// (0x00032d2b) bg_popup_sub_pane_cp26

0xa5c6,	// (0x000390a5) grid_toolbar2_fixed_pane

0x1fd8,	// (0x00030ab7) cell_toolbar2_fixed_pane_ParamLimits

0x1fd8,	// (0x00030ab7) cell_toolbar2_fixed_pane

0x1ff3,	// (0x00030ad2) cell_toolbar2_fixed_pane_g1

0xa5ce,	// (0x000390ad) toolbar2_fixed_button_pane

0x792c,	// (0x0003640b) toolbar2_fixed_button_pane_g1

0x7934,	// (0x00036413) toolbar2_fixed_button_pane_g2

0x793c,	// (0x0003641b) toolbar2_fixed_button_pane_g3

0x7944,	// (0x00036423) toolbar2_fixed_button_pane_g4

0x794c,	// (0x0003642b) toolbar2_fixed_button_pane_g5

0x7954,	// (0x00036433) toolbar2_fixed_button_pane_g6

0x795c,	// (0x0003643b) toolbar2_fixed_button_pane_g7

0x7964,	// (0x00036443) toolbar2_fixed_button_pane_g8

0x796c,	// (0x0003644b) toolbar2_fixed_button_pane_g9

0x0008,

0xf85f,	// (0x0003e33e) toolbar2_fixed_button_pane_g

0xa5d6,	// (0x000390b5) cell_toolbar2_float_pane_ParamLimits

0xa5d6,	// (0x000390b5) cell_toolbar2_float_pane

0xa5e7,	// (0x000390c6) cell_toolbar2_float_pane_g1

0xa5ce,	// (0x000390ad) toolbar2_fixed_button_pane_cp

0x1bae,	// (0x0003068d) fep_vkb_accented_list_pane_ParamLimits

0x1bae,	// (0x0003068d) fep_vkb_accented_list_pane

0x6794,	// (0x00035273) bg_popup_fep_shadow_pane_g9

0x7594,	// (0x00036073) bg_popup_fep_shadow_pane_cp3

0x4dcc,	// (0x000338ab) list_accented_list_pane

0xa5f0,	// (0x000390cf) list_single_accented_list_pane_ParamLimits

0xa5f0,	// (0x000390cf) list_single_accented_list_pane

0x7594,	// (0x00036073) list_highlight_pane_cp10

0xa601,	// (0x000390e0) list_single_accented_list_pane_t1

0xdc75,	// (0x0003c754) popup_slider_window_ParamLimits

0xdc75,	// (0x0003c754) popup_slider_window

0xa431,	// (0x00038f10) aid_indentation_list_msg

0x20d2,	// (0x00030bb1) bg_popup_window_pane_cp19

0xa667,	// (0x00039146) popup_slider_window_g1

0xa683,	// (0x00039162) popup_slider_window_g2

0xa69f,	// (0x0003917e) popup_slider_window_g3

0x0005,

0xfcda,	// (0x0003e7b9) popup_slider_window_g

0xa6bb,	// (0x0003919a) popup_slider_window_t1

0xa6ff,	// (0x000391de) small_volume_slider_vertical_pane

0x96a9,	// (0x00038188) small_volume_slider_vertical_pane_g1

0x96a9,	// (0x00038188) small_volume_slider_vertical_pane_g2

0xa71b,	// (0x000391fa) small_volume_slider_vertical_pane_g3

0x0002,

0xfcec,	// (0x0003e7cb) small_volume_slider_vertical_pane_g

0xd483,	// (0x0003bf62) area_side_right_pane_ParamLimits

0xd483,	// (0x0003bf62) area_side_right_pane

0xdff0,	// (0x0003cacf) aid_size_side_button_ParamLimits

0xdff0,	// (0x0003cacf) aid_size_side_button

0xe009,	// (0x0003cae8) grid_sctrl_middle_pane_ParamLimits

0xe009,	// (0x0003cae8) grid_sctrl_middle_pane

0x69d2,	// (0x000354b1) sctrl_sk_bottom_pane

0x69e3,	// (0x000354c2) sctrl_sk_top_pane

0x69f5,	// (0x000354d4) aid_touch_sctrl_top

0x477c,	// (0x0003325b) bg_sctrl_sk_pane_ParamLimits

0x477c,	// (0x0003325b) bg_sctrl_sk_pane

0x6a02,	// (0x000354e1) sctrl_sk_top_pane_g1

0x6a0f,	// (0x000354ee) sctrl_sk_top_pane_t1

0x69f5,	// (0x000354d4) aid_touch_sctrl_bottom

0x477c,	// (0x0003325b) bg_sctrl_sk_pane_cp_ParamLimits

0x477c,	// (0x0003325b) bg_sctrl_sk_pane_cp

0x6a2a,	// (0x00035509) sctrl_sk_bottom_pane_g1

0x6a0f,	// (0x000354ee) sctrl_sk_bottom_pane_t1

0xe01f,	// (0x0003cafe) cell_sctrl_middle_pane_ParamLimits

0xe01f,	// (0x0003cafe) cell_sctrl_middle_pane

0xe030,	// (0x0003cb0f) aid_touch_sctrl_middle_ParamLimits

0xe030,	// (0x0003cb0f) aid_touch_sctrl_middle

0xe03d,	// (0x0003cb1c) bg_sctrl_middle_pane_ParamLimits

0xe03d,	// (0x0003cb1c) bg_sctrl_middle_pane

0xa736,	// (0x00039215) cell_sctrl_middle_pane_g1_ParamLimits

0xa736,	// (0x00039215) cell_sctrl_middle_pane_g1

0xe04b,	// (0x0003cb2a) cell_sctrl_middle_pane_g2_ParamLimits

0xe04b,	// (0x0003cb2a) cell_sctrl_middle_pane_g2

0x0001,

0xfcf8,	// (0x0003e7d7) cell_sctrl_middle_pane_g_ParamLimits

0xfcf8,	// (0x0003e7d7) cell_sctrl_middle_pane_g

0x792c,	// (0x0003640b) bg_sctrl_middle_pane_g1

0x7934,	// (0x00036413) bg_sctrl_middle_pane_g2

0x793c,	// (0x0003641b) bg_sctrl_middle_pane_g3

0x7944,	// (0x00036423) bg_sctrl_middle_pane_g4

0x794c,	// (0x0003642b) bg_sctrl_middle_pane_g5

0x7954,	// (0x00036433) bg_sctrl_middle_pane_g6

0x795c,	// (0x0003643b) bg_sctrl_middle_pane_g7

0x7964,	// (0x00036443) bg_sctrl_middle_pane_g8

0x0007,

0xfcfd,	// (0x0003e7dc) bg_sctrl_middle_pane_g

0x796c,	// (0x0003644b) bg_sctrl_middle_pane_g8_copy1

0x792c,	// (0x0003640b) bg_sctrl_sk_pane_g1

0x7934,	// (0x00036413) bg_sctrl_sk_pane_g2

0x793c,	// (0x0003641b) bg_sctrl_sk_pane_g3

0x0008,

0xf85f,	// (0x0003e33e) bg_sctrl_sk_pane_g

0x4b2b,	// (0x0003360a) aid_size_touch_scroll_bar

0x7944,	// (0x00036423) bg_sctrl_sk_pane_g4

0x794c,	// (0x0003642b) bg_sctrl_sk_pane_g5

0x7954,	// (0x00036433) bg_sctrl_sk_pane_g6

0x795c,	// (0x0003643b) bg_sctrl_sk_pane_g7

0x7964,	// (0x00036443) bg_sctrl_sk_pane_g8

0x796c,	// (0x0003644b) bg_sctrl_sk_pane_g9

0x5c00,	// (0x000346df) popup_fep_china_hwr2_fs_candidate_window

0xd870,	// (0x0003c34f) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xd870,	// (0x0003c34f) popup_fep_china_hwr2_fs_control_window

0x98d5,	// (0x000383b4) sctrl_sk_top_pane_g2

0x0001,

0xfcf3,	// (0x0003e7d2) sctrl_sk_top_pane_g

0x218a,	// (0x00030c69) aid_fep_china_hwr2_fs_cell_ParamLimits

0x218a,	// (0x00030c69) aid_fep_china_hwr2_fs_cell

0x219e,	// (0x00030c7d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x219e,	// (0x00030c7d) bg_popup_fep_shadow_pane_cp4

0x21b5,	// (0x00030c94) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x21b5,	// (0x00030c94) bg_popup_fep_shadow_pane_cp5

0x21c7,	// (0x00030ca6) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x21c7,	// (0x00030ca6) popup_fep_china_hwr2_fs_control_bar_grid

0x21db,	// (0x00030cba) popup_fep_china_hwr2_fs_control_funtion_grid

0xa724,	// (0x00039203) aid_fep_china_hwr2_fs_candi_cell

0x424c,	// (0x00032d2b) bg_popup_fep_shadow_pane_cp6

0xa72e,	// (0x0003920d) popup_fep_china_hwr2_fs_candidate_grid

0x21e3,	// (0x00030cc2) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x21e3,	// (0x00030cc2) cell_fep_china_hwr2_fs_funtion_grid

0x96a9,	// (0x00038188) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xa736,	// (0x00039215) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xa736,	// (0x00039215) cell_fep_china_hwr2_fs_funtion_grid_g1

0xa744,	// (0x00039223) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xa744,	// (0x00039223) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0e,	// (0x0003e7ed) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0e,	// (0x0003e7ed) cell_fep_china_hwr2_fs_funtion_grid_g

0x21fb,	// (0x00030cda) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x21fb,	// (0x00030cda) cell_fep_china_hwr2_fs_funtion_grid_t1

0x2210,	// (0x00030cef) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x2210,	// (0x00030cef) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd13,	// (0x0003e7f2) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd13,	// (0x0003e7f2) cell_fep_china_hwr2_fs_funtion_grid_t

0xa75a,	// (0x00039239) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xa762,	// (0x00039241) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xa76a,	// (0x00039249) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd18,	// (0x0003e7f7) popup_fep_china_hwr2_fs_control_bar_grid_g

0xa772,	// (0x00039251) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xa772,	// (0x00039251) cell_fep_china_hwr2_fs_candidate_grid

0xa78b,	// (0x0003926a) popup_fep_china_hwr2_fs_candidate_grid_g20

0xa793,	// (0x00039272) popup_fep_china_hwr2_fs_candidate_grid_g21

0x96a9,	// (0x00038188) cell_fep_china_hwr2_fs_candidate_grid_g1

0x96a9,	// (0x00038188) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3f,	// (0x0003e61e) cell_fep_china_hwr2_fs_candidate_grid_g

0xa79b,	// (0x0003927a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7785,	// (0x00036264) clock_nsta_pane_cp_24_ParamLimits

0x7785,	// (0x00036264) clock_nsta_pane_cp_24

0x77e2,	// (0x000362c1) indicator_nsta_pane_cp_24_ParamLimits

0x77e2,	// (0x000362c1) indicator_nsta_pane_cp_24

0x84e0,	// (0x00036fbf) heading_pane_g1

0x0001,

0xf8c4,	// (0x0003e3a3) heading_pane_g

0x19c0,	// (0x0003049f) grid_sct_catagory_button_pane

0x8b4c,	// (0x0003762b) scroll_pane_cp5_ParamLimits

0x9389,	// (0x00037e68) button_value_adjust_pane_cp5_ParamLimits

0x9389,	// (0x00037e68) button_value_adjust_pane_cp5

0x9447,	// (0x00037f26) form2_midp_time_pane_ParamLimits

0xa7a9,	// (0x00039288) cell_sct_catagory_button_pane_ParamLimits

0xa7a9,	// (0x00039288) cell_sct_catagory_button_pane

0x966e,	// (0x0003814d) bg_button_pane_cp01_ParamLimits

0x966e,	// (0x0003814d) bg_button_pane_cp01

0x96a9,	// (0x00038188) cell_sct_catagory_button_pane_g1

0xdce4,	// (0x0003c7c3) popup_tb_extension_window

0x222c,	// (0x00030d0b) aid_size_cell_ext_ParamLimits

0x222c,	// (0x00030d0b) aid_size_cell_ext

0x4a09,	// (0x000334e8) bg_tb_trans_pane_cp1_ParamLimits

0x4a09,	// (0x000334e8) bg_tb_trans_pane_cp1

0x2252,	// (0x00030d31) grid_tb_ext_pane_ParamLimits

0x2252,	// (0x00030d31) grid_tb_ext_pane

0x2288,	// (0x00030d67) cell_tb_ext_pane_ParamLimits

0x2288,	// (0x00030d67) cell_tb_ext_pane

0x22ac,	// (0x00030d8b) cell_tb_ext_pane_g1_ParamLimits

0x22ac,	// (0x00030d8b) cell_tb_ext_pane_g1

0xa7bb,	// (0x0003929a) cell_tb_ext_pane_t1

0x477c,	// (0x0003325b) list_highlight_pane_cp11_ParamLimits

0x477c,	// (0x0003325b) list_highlight_pane_cp11

0xd514,	// (0x0003bff3) popup_uni_indicator_window_ParamLimits

0xd514,	// (0x0003bff3) popup_uni_indicator_window

0x4ca2,	// (0x00033781) bg_popup_sub_pane_cp14

0xa7d6,	// (0x000392b5) list_uniindi_pane

0xa7e2,	// (0x000392c1) uniindi_top_pane

0x477c,	// (0x0003325b) bg_uniindi_top_pane

0xa801,	// (0x000392e0) uniindi_top_pane_g1

0xa817,	// (0x000392f6) uniindi_top_pane_g2

0x0003,

0xfd1f,	// (0x0003e7fe) uniindi_top_pane_g

0xa841,	// (0x00039320) uniindi_top_pane_t1

0xba86,	// (0x0003a565) list_single_uniindi_pane_ParamLimits

0xba86,	// (0x0003a565) list_single_uniindi_pane

0x96a9,	// (0x00038188) bg_uniindi_top_pane_g1

0xba98,	// (0x0003a577) list_single_uniindi_pane_g1

0xbaab,	// (0x0003a58a) list_single_uniindi_pane_t1

0x424c,	// (0x00032d2b) control_bg_pane

0xbad0,	// (0x0003a5af) bg_sctrl_sk_pane_cp1

0xbad9,	// (0x0003a5b8) bg_sctrl_sk_pane_cp2

0xbae2,	// (0x0003a5c1) control_bg_pane_g1

0xbaeb,	// (0x0003a5ca) control_bg_pane_g2

0x0001,

0xfd28,	// (0x0003e807) control_bg_pane_g

0x92af,	// (0x00037d8e) cell_indicator_nsta_pane_g1_ParamLimits

0x1ac5,	// (0x000305a4) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa3,	// (0x0003e582) cell_indicator_nsta_pane_g_ParamLimits

0x3f88,	// (0x00032a67) form2_midp_time_pane_t1_ParamLimits

0x657c,	// (0x0003505b) main_idle_act4_pane_ParamLimits

0x657c,	// (0x0003505b) main_idle_act4_pane

0xdce4,	// (0x0003c7c3) popup_tb_extension_window_ParamLimits

0x2272,	// (0x00030d51) tb_ext_find_pane_ParamLimits

0x2272,	// (0x00030d51) tb_ext_find_pane

0xbaf4,	// (0x0003a5d3) ai_gene_pane_1_cp1

0x7628,	// (0x00036107) ai_gene_pane_2_cp1

0xbafc,	// (0x0003a5db) list_single_idle_plugin_calendar_pane

0xbb05,	// (0x0003a5e4) list_single_idle_plugin_notification_pane

0xbb0e,	// (0x0003a5ed) list_single_idle_plugin_player_pane

0x22c9,	// (0x00030da8) list_single_idle_plugin_shortcut_pane_ParamLimits

0x22c9,	// (0x00030da8) list_single_idle_plugin_shortcut_pane

0x22f1,	// (0x00030dd0) main_idle_act4_pane_t1

0x2307,	// (0x00030de6) main_idle_act4_pane_t2

0x0001,

0xfd2d,	// (0x0003e80c) main_idle_act4_pane_t

0x231d,	// (0x00030dfc) middle_sk_idle_act4_pane_ParamLimits

0x231d,	// (0x00030dfc) middle_sk_idle_act4_pane

0x2339,	// (0x00030e18) popup_clock_digital_analogue_window_cp2

0x235f,	// (0x00030e3e) shortcut_wheel_idle_act4_pane_ParamLimits

0x235f,	// (0x00030e3e) shortcut_wheel_idle_act4_pane

0x96a9,	// (0x00038188) shortcut_wheel_idle_act4_pane_g1

0x96a9,	// (0x00038188) shortcut_wheel_idle_act4_pane_g2

0x96a9,	// (0x00038188) shortcut_wheel_idle_act4_pane_g3

0x96a9,	// (0x00038188) shortcut_wheel_idle_act4_pane_g4

0x96a9,	// (0x00038188) shortcut_wheel_idle_act4_pane_g5

0xbb17,	// (0x0003a5f6) shortcut_wheel_idle_act4_pane_g6

0xbb1f,	// (0x0003a5fe) shortcut_wheel_idle_act4_pane_g7

0xbb27,	// (0x0003a606) shortcut_wheel_idle_act4_pane_g8

0xbb2f,	// (0x0003a60e) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd32,	// (0x0003e811) shortcut_wheel_idle_act4_pane_g

0xf4f4,	// (0x0003dfd3) middle_sk_idle_act4_pane_g1_ParamLimits

0xf4f4,	// (0x0003dfd3) middle_sk_idle_act4_pane_g1

0x23da,	// (0x00030eb9) middle_sk_idle_act4_pane_g2_ParamLimits

0x23da,	// (0x00030eb9) middle_sk_idle_act4_pane_g2

0x0001,

0xfd55,	// (0x0003e834) middle_sk_idle_act4_pane_g_ParamLimits

0xfd55,	// (0x0003e834) middle_sk_idle_act4_pane_g

0x23f2,	// (0x00030ed1) middle_sk_idle_act4_pane_t1_ParamLimits

0x23f2,	// (0x00030ed1) middle_sk_idle_act4_pane_t1

0x2421,	// (0x00030f00) grid_ai_shortcut_pane_ParamLimits

0x2421,	// (0x00030f00) grid_ai_shortcut_pane

0x243e,	// (0x00030f1d) list_highlight_pane_cp16_ParamLimits

0x243e,	// (0x00030f1d) list_highlight_pane_cp16

0x244b,	// (0x00030f2a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x244b,	// (0x00030f2a) list_single_idle_plugin_shortcut_pane_g1

0x2457,	// (0x00030f36) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x2457,	// (0x00030f36) list_single_idle_plugin_shortcut_pane_g2

0x2473,	// (0x00030f52) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x2473,	// (0x00030f52) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5a,	// (0x0003e839) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5a,	// (0x0003e839) list_single_idle_plugin_shortcut_pane_g

0x2488,	// (0x00030f67) cell_ai_shortcut_pane_ParamLimits

0x2488,	// (0x00030f67) cell_ai_shortcut_pane

0x249e,	// (0x00030f7d) cell_ai_shortcut_pane_g1_ParamLimits

0x249e,	// (0x00030f7d) cell_ai_shortcut_pane_g1

0xbaf4,	// (0x0003a5d3) ai_gene_pane_1_cp2

0xc0a1,	// (0x0003ab80) ai_gene_pane_2_cp2

0xc0a9,	// (0x0003ab88) list_highlight_pane_cp15

0xc0b2,	// (0x0003ab91) list_single_idle_plugin_calendar_pane_g1

0xc0a9,	// (0x0003ab88) list_highlight_pane_cp17

0xc0ba,	// (0x0003ab99) list_single_idle_plugin_calendar_pane_g1_copy1

0xc0c2,	// (0x0003aba1) list_single_idle_plugin_player_pane_g1

0x8d06,	// (0x000377e5) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd61,	// (0x0003e840) list_single_idle_plugin_player_pane_g

0xc0ca,	// (0x0003aba9) list_single_idle_plugin_player_pane_t1

0xc0d8,	// (0x0003abb7) list_single_idle_plugin_player_pane_t2

0xc0e6,	// (0x0003abc5) list_single_idle_plugin_player_pane_t3

0xc0f4,	// (0x0003abd3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd66,	// (0x0003e845) list_single_idle_plugin_player_pane_t

0xc102,	// (0x0003abe1) wait_bar_pane_cp15

0xc10a,	// (0x0003abe9) grid_ai_notification_pane

0x8d06,	// (0x000377e5) list_single_idle_plugin_notification_pane_g1

0x24c0,	// (0x00030f9f) cell_ai_notification_pane_ParamLimits

0x24c0,	// (0x00030f9f) cell_ai_notification_pane

0xc120,	// (0x0003abff) cell_ai_notification_pane_g1

0xc128,	// (0x0003ac07) cell_ai_notification_pane_t1

0x24cd,	// (0x00030fac) tb_ext_find_button_pane

0x24d5,	// (0x00030fb4) tb_ext_find_pane_g1

0x24dd,	// (0x00030fbc) tb_ext_find_pane_t1

0x5302,	// (0x00033de1) tb_ext_find_button_pane_g1

0xc154,	// (0x0003ac33) tb_ext_find_button_pane_g2

0x0001,

0xfd6f,	// (0x0003e84e) tb_ext_find_button_pane_g

0x22f1,	// (0x00030dd0) main_idle_act4_pane_t1_ParamLimits

0x2307,	// (0x00030de6) main_idle_act4_pane_t2_ParamLimits

0xfd2d,	// (0x0003e80c) main_idle_act4_pane_t_ParamLimits

0x2339,	// (0x00030e18) popup_clock_digital_analogue_window_cp2_ParamLimits

0x234f,	// (0x00030e2e) sat_plugin_idle_act4_pane_ParamLimits

0x234f,	// (0x00030e2e) sat_plugin_idle_act4_pane

0x24eb,	// (0x00030fca) sat_plugin_idle_act4_pane_t1_ParamLimits

0x24eb,	// (0x00030fca) sat_plugin_idle_act4_pane_t1

0x2503,	// (0x00030fe2) sat_plugin_idle_act4_pane_t2_ParamLimits

0x2503,	// (0x00030fe2) sat_plugin_idle_act4_pane_t2

0x251b,	// (0x00030ffa) sat_plugin_idle_act4_pane_t3_ParamLimits

0x251b,	// (0x00030ffa) sat_plugin_idle_act4_pane_t3

0x2533,	// (0x00031012) sat_plugin_idle_act4_pane_t4_ParamLimits

0x2533,	// (0x00031012) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd74,	// (0x0003e853) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd74,	// (0x0003e853) sat_plugin_idle_act4_pane_t

0x441f,	// (0x00032efe) popup_battery_window_ParamLimits

0x441f,	// (0x00032efe) popup_battery_window

0x477c,	// (0x0003325b) bg_popup_sub_pane_cp25_ParamLimits

0x477c,	// (0x0003325b) bg_popup_sub_pane_cp25

0xc1a9,	// (0x0003ac88) popup_battery_window_g1_ParamLimits

0xc1a9,	// (0x0003ac88) popup_battery_window_g1

0xc1b5,	// (0x0003ac94) popup_battery_window_t1_ParamLimits

0xc1b5,	// (0x0003ac94) popup_battery_window_t1

0xc1c7,	// (0x0003aca6) popup_battery_window_t2_ParamLimits

0xc1c7,	// (0x0003aca6) popup_battery_window_t2

0x0001,

0xfd7d,	// (0x0003e85c) popup_battery_window_t_ParamLimits

0xfd7d,	// (0x0003e85c) popup_battery_window_t

0x10c0,	// (0x0002fb9f) midp_canvas_pane_ParamLimits

0x1115,	// (0x0002fbf4) midp_keypad_pane_ParamLimits

0x1115,	// (0x0002fbf4) midp_keypad_pane

0x5b78,	// (0x00034657) main_midp_pane_ParamLimits

0x9325,	// (0x00037e04) signal_pane_g2_cp_ParamLimits

0x254b,	// (0x0003102a) aid_size_cell_midp_keypad_ParamLimits

0x254b,	// (0x0003102a) aid_size_cell_midp_keypad

0x2569,	// (0x00031048) midp_keyp_game_grid_pane_ParamLimits

0x2569,	// (0x00031048) midp_keyp_game_grid_pane

0x2588,	// (0x00031067) midp_keyp_rocker_pane_ParamLimits

0x2588,	// (0x00031067) midp_keyp_rocker_pane

0x25c9,	// (0x000310a8) midp_keyp_sk_left_pane_ParamLimits

0x25c9,	// (0x000310a8) midp_keyp_sk_left_pane

0x261b,	// (0x000310fa) midp_keyp_sk_right_pane_ParamLimits

0x261b,	// (0x000310fa) midp_keyp_sk_right_pane

0x424c,	// (0x00032d2b) bg_button_pane_cp03

0x2667,	// (0x00031146) midp_keyp_sk_left_pane_g1

0x424c,	// (0x00032d2b) bg_button_pane_cp04

0x2667,	// (0x00031146) midp_keyp_sk_right_pane_g1

0x96a9,	// (0x00038188) midp_keyp_rocker_pane_g1

0x2670,	// (0x0003114f) keyp_game_cell_pane_ParamLimits

0x2670,	// (0x0003114f) keyp_game_cell_pane

0x424c,	// (0x00032d2b) bg_button_pane_cp02

0x2692,	// (0x00031171) keyp_game_cell_pane_g1

0xd4c5,	// (0x0003bfa4) popup_fep_vkb2_window_ParamLimits

0xd4c5,	// (0x0003bfa4) popup_fep_vkb2_window

0xe058,	// (0x0003cb37) aid_size_cell_vkb2_ParamLimits

0xe058,	// (0x0003cb37) aid_size_cell_vkb2

0xe08e,	// (0x0003cb6d) popup_fep_vkb2_window_g1_ParamLimits

0xe08e,	// (0x0003cb6d) popup_fep_vkb2_window_g1

0xe0de,	// (0x0003cbbd) vkb2_area_bottom_pane_ParamLimits

0xe0de,	// (0x0003cbbd) vkb2_area_bottom_pane

0xe11c,	// (0x0003cbfb) vkb2_area_keypad_pane_ParamLimits

0xe11c,	// (0x0003cbfb) vkb2_area_keypad_pane

0xe15a,	// (0x0003cc39) vkb2_area_top_pane_ParamLimits

0xe15a,	// (0x0003cc39) vkb2_area_top_pane

0xe1d6,	// (0x0003ccb5) vkb2_top_entry_pane_ParamLimits

0xe1d6,	// (0x0003ccb5) vkb2_top_entry_pane

0xe203,	// (0x0003cce2) vkb2_top_grid_left_pane_ParamLimits

0xe203,	// (0x0003cce2) vkb2_top_grid_left_pane

0xe223,	// (0x0003cd02) vkb2_top_grid_right_pane_ParamLimits

0xe223,	// (0x0003cd02) vkb2_top_grid_right_pane

0x6c65,	// (0x00035744) vkb2_cell_keypad_pane_ParamLimits

0x6c65,	// (0x00035744) vkb2_cell_keypad_pane

0xe269,	// (0x0003cd48) vkb2_area_bottom_grid_pane_ParamLimits

0xe269,	// (0x0003cd48) vkb2_area_bottom_grid_pane

0xe28f,	// (0x0003cd6e) vkb2_area_bottom_pane_g1_ParamLimits

0xe28f,	// (0x0003cd6e) vkb2_area_bottom_pane_g1

0xe2b5,	// (0x0003cd94) vkb2_area_bottom_pane_g2_ParamLimits

0xe2b5,	// (0x0003cd94) vkb2_area_bottom_pane_g2

0xe2e6,	// (0x0003cdc5) vkb2_area_bottom_pane_g3_ParamLimits

0xe2e6,	// (0x0003cdc5) vkb2_area_bottom_pane_g3

0x0002,

0xfd82,	// (0x0003e861) vkb2_area_bottom_pane_g_ParamLimits

0xfd82,	// (0x0003e861) vkb2_area_bottom_pane_g

0x6ddd,	// (0x000358bc) vkb2_top_cell_left_pane_ParamLimits

0x6ddd,	// (0x000358bc) vkb2_top_cell_left_pane

0x269b,	// (0x0003117a) vkb2_top_entry_pane_g1_ParamLimits

0x269b,	// (0x0003117a) vkb2_top_entry_pane_g1

0x26a9,	// (0x00031188) vkb2_top_entry_pane_t1_ParamLimits

0x26a9,	// (0x00031188) vkb2_top_entry_pane_t1

0xe344,	// (0x0003ce23) vkb2_top_entry_pane_t2_ParamLimits

0xe344,	// (0x0003ce23) vkb2_top_entry_pane_t2

0xe376,	// (0x0003ce55) vkb2_top_entry_pane_t3_ParamLimits

0xe376,	// (0x0003ce55) vkb2_top_entry_pane_t3

0x0002,

0xfd89,	// (0x0003e868) vkb2_top_entry_pane_t_ParamLimits

0xfd89,	// (0x0003e868) vkb2_top_entry_pane_t

0xe38c,	// (0x0003ce6b) vkb2_top_grid_right_pane_g1_ParamLimits

0xe38c,	// (0x0003ce6b) vkb2_top_grid_right_pane_g1

0x6e40,	// (0x0003591f) vkb2_top_grid_right_pane_g2_ParamLimits

0x6e40,	// (0x0003591f) vkb2_top_grid_right_pane_g2

0x6e58,	// (0x00035937) vkb2_top_grid_right_pane_g3_ParamLimits

0x6e58,	// (0x00035937) vkb2_top_grid_right_pane_g3

0xe3a2,	// (0x0003ce81) vkb2_top_grid_right_pane_g4_ParamLimits

0xe3a2,	// (0x0003ce81) vkb2_top_grid_right_pane_g4

0x0003,

0xfd90,	// (0x0003e86f) vkb2_top_grid_right_pane_g_ParamLimits

0xfd90,	// (0x0003e86f) vkb2_top_grid_right_pane_g

0x6e86,	// (0x00035965) vkb2_top_cell_left_pane_g1

0x6e9d,	// (0x0003597c) vkb2_cell_keypad_pane_g1_ParamLimits

0x6e9d,	// (0x0003597c) vkb2_cell_keypad_pane_g1

0xe3b8,	// (0x0003ce97) vkb2_cell_keypad_pane_t1_ParamLimits

0xe3b8,	// (0x0003ce97) vkb2_cell_keypad_pane_t1

0x6eab,	// (0x0003598a) vkb2_cell_bottom_grid_pane_ParamLimits

0x6eab,	// (0x0003598a) vkb2_cell_bottom_grid_pane

0x6ee4,	// (0x000359c3) vkb2_cell_bottom_grid_pane_g1

0x237e,	// (0x00030e5d) aid_call2_pane_cp02

0x2386,	// (0x00030e65) aid_call_pane_cp02

0x238e,	// (0x00030e6d) clock_digital_number_pane_cp10

0x2396,	// (0x00030e75) clock_digital_number_pane_cp11

0x239e,	// (0x00030e7d) clock_digital_number_pane_cp12

0x23a6,	// (0x00030e85) clock_digital_number_pane_cp13

0x23ae,	// (0x00030e8d) clock_digital_separator_pane_cp10

0x5302,	// (0x00033de1) popup_clock_digital_analogue_window_cp2_g1

0x5302,	// (0x00033de1) popup_clock_digital_analogue_window_cp2_g2

0x23b6,	// (0x00030e95) popup_clock_digital_analogue_window_cp2_g3

0x5302,	// (0x00033de1) popup_clock_digital_analogue_window_cp2_g4

0x23b6,	// (0x00030e95) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd45,	// (0x0003e824) popup_clock_digital_analogue_window_cp2_g

0x23be,	// (0x00030e9d) popup_clock_digital_analogue_window_cp2_t1

0x23cc,	// (0x00030eab) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd50,	// (0x0003e82f) popup_clock_digital_analogue_window_cp2_t

0x96a9,	// (0x00038188) clock_digital_number_pane_cp10_g1

0x96a9,	// (0x00038188) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0003e61e) clock_digital_number_pane_cp10_g

0x96a9,	// (0x00038188) clock_digital_separator_pane_cp10_g1

0x96a9,	// (0x00038188) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0003e61e) clock_digital_separator_pane_cp10_g

0xa823,	// (0x00039302) uniindi_top_pane_g3

0xa834,	// (0x00039313) uniindi_top_pane_g4

0x6cd0,	// (0x000357af) vkb2_row_keypad_pane_ParamLimits

0x6cd0,	// (0x000357af) vkb2_row_keypad_pane

0x6f00,	// (0x000359df) vkb2_cell_t_keypad_pane_ParamLimits

0x6f00,	// (0x000359df) vkb2_cell_t_keypad_pane

0x6f0d,	// (0x000359ec) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6f0d,	// (0x000359ec) vkb2_cell_t_keypad_pane_cp08

0x6f1d,	// (0x000359fc) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6f1d,	// (0x000359fc) vkb2_cell_t_keypad_pane_cp09

0x6f2e,	// (0x00035a0d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6f2e,	// (0x00035a0d) vkb2_cell_t_keypad_pane_cp01

0x6f3e,	// (0x00035a1d) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6f3e,	// (0x00035a1d) vkb2_cell_t_keypad_pane_cp02

0x6f4e,	// (0x00035a2d) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6f4e,	// (0x00035a2d) vkb2_cell_t_keypad_pane_cp03

0x6f5e,	// (0x00035a3d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6f5e,	// (0x00035a3d) vkb2_cell_t_keypad_pane_cp04

0x6f6e,	// (0x00035a4d) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6f6e,	// (0x00035a4d) vkb2_cell_t_keypad_pane_cp05

0x6f7e,	// (0x00035a5d) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6f7e,	// (0x00035a5d) vkb2_cell_t_keypad_pane_cp06

0x6f8e,	// (0x00035a6d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6f8e,	// (0x00035a6d) vkb2_cell_t_keypad_pane_cp07

0x6f9e,	// (0x00035a7d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6f9e,	// (0x00035a7d) vkb2_cell_t_keypad_pane_cp10

0x98d5,	// (0x000383b4) vkb2_cell_t_keypad_pane_g1

0xe3cf,	// (0x0003ceae) vkb2_cell_t_keypad_pane_t1

0x424c,	// (0x00032d2b) popup_grid_graphic2_window

0x26e2,	// (0x000311c1) aid_size_cell_graphic2_ParamLimits

0x26e2,	// (0x000311c1) aid_size_cell_graphic2

0x2720,	// (0x000311ff) bg_popup_window_pane_cp21_ParamLimits

0x2720,	// (0x000311ff) bg_popup_window_pane_cp21

0x272e,	// (0x0003120d) graphic2_pages_pane_ParamLimits

0x272e,	// (0x0003120d) graphic2_pages_pane

0x2777,	// (0x00031256) grid_graphic2_control_pane_ParamLimits

0x2777,	// (0x00031256) grid_graphic2_control_pane

0x27b5,	// (0x00031294) grid_graphic2_pane_ParamLimits

0x27b5,	// (0x00031294) grid_graphic2_pane

0x2824,	// (0x00031303) cell_graphic2_pane

0x424c,	// (0x00032d2b) main_comp_mode_pane

0xa49f,	// (0x00038f7e) list_ai3_gene_pane_ParamLimits

0x20d2,	// (0x00030bb1) bg_popup_window_pane_cp19_ParamLimits

0xa60f,	// (0x000390ee) bg_touch_area_indi_pane_ParamLimits

0xa60f,	// (0x000390ee) bg_touch_area_indi_pane

0xa625,	// (0x00039104) bg_touch_area_indi_pane_cp01_ParamLimits

0xa625,	// (0x00039104) bg_touch_area_indi_pane_cp01

0xa63b,	// (0x0003911a) bg_touch_area_indi_pane_cp02_ParamLimits

0xa63b,	// (0x0003911a) bg_touch_area_indi_pane_cp02

0xa651,	// (0x00039130) bg_touch_area_indi_pane_cp03_ParamLimits

0xa651,	// (0x00039130) bg_touch_area_indi_pane_cp03

0xa667,	// (0x00039146) popup_slider_window_g1_ParamLimits

0xa683,	// (0x00039162) popup_slider_window_g2_ParamLimits

0xa69f,	// (0x0003917e) popup_slider_window_g3_ParamLimits

0xfcda,	// (0x0003e7b9) popup_slider_window_g_ParamLimits

0xa6bb,	// (0x0003919a) popup_slider_window_t1_ParamLimits

0xa6ff,	// (0x000391de) small_volume_slider_vertical_pane_ParamLimits

0x2824,	// (0x00031303) cell_graphic2_pane_ParamLimits

0x286f,	// (0x0003134e) bg_button_pane_cp10_ParamLimits

0x286f,	// (0x0003134e) bg_button_pane_cp10

0x2880,	// (0x0003135f) bg_button_pane_cp11_ParamLimits

0x2880,	// (0x0003135f) bg_button_pane_cp11

0x2891,	// (0x00031370) graphic2_pages_pane_g1_ParamLimits

0x2891,	// (0x00031370) graphic2_pages_pane_g1

0x28ac,	// (0x0003138b) graphic2_pages_pane_g2_ParamLimits

0x28ac,	// (0x0003138b) graphic2_pages_pane_g2

0x0001,

0xfd9e,	// (0x0003e87d) graphic2_pages_pane_g_ParamLimits

0xfd9e,	// (0x0003e87d) graphic2_pages_pane_g

0x28c4,	// (0x000313a3) graphic2_pages_pane_t1_ParamLimits

0x28c4,	// (0x000313a3) graphic2_pages_pane_t1

0x28dc,	// (0x000313bb) cell_graphic2_control_pane_ParamLimits

0x28dc,	// (0x000313bb) cell_graphic2_control_pane

0x2906,	// (0x000313e5) cell_graphic2_pane_g1_ParamLimits

0x2906,	// (0x000313e5) cell_graphic2_pane_g1

0xf534,	// (0x0003e013) cell_graphic2_pane_g2_ParamLimits

0xf534,	// (0x0003e013) cell_graphic2_pane_g2

0x2913,	// (0x000313f2) cell_graphic2_pane_g3_ParamLimits

0x2913,	// (0x000313f2) cell_graphic2_pane_g3

0xf541,	// (0x0003e020) cell_graphic2_pane_g4_ParamLimits

0xf541,	// (0x0003e020) cell_graphic2_pane_g4

0x2920,	// (0x000313ff) cell_graphic2_pane_g5_ParamLimits

0x2920,	// (0x000313ff) cell_graphic2_pane_g5

0x0004,

0xfda3,	// (0x0003e882) cell_graphic2_pane_g_ParamLimits

0xfda3,	// (0x0003e882) cell_graphic2_pane_g

0x2940,	// (0x0003141f) cell_graphic2_pane_t1_ParamLimits

0x2940,	// (0x0003141f) cell_graphic2_pane_t1

0x84d4,	// (0x00036fb3) grid_highlight_pane_cp11_ParamLimits

0x84d4,	// (0x00036fb3) grid_highlight_pane_cp11

0x477c,	// (0x0003325b) bg_button_pane_cp05

0x2975,	// (0x00031454) cell_graphic2_control_pane_g1

0x96a9,	// (0x00038188) bg_touch_area_indi_pane_g1

0xe3e1,	// (0x0003cec0) aid_cmod_rocker_key_size

0xe3eb,	// (0x0003ceca) aid_cmode_itu_key_size

0xe3f5,	// (0x0003ced4) main_cmode_video_pane

0xe3fd,	// (0x0003cedc) main_comp_mode_itu_pane

0xe407,	// (0x0003cee6) main_comp_mode_rocker_pane

0xe40f,	// (0x0003ceee) cell_cmode_rocker_pane_ParamLimits

0xe40f,	// (0x0003ceee) cell_cmode_rocker_pane

0xe421,	// (0x0003cf00) cell_cmode_itu_pane_ParamLimits

0xe421,	// (0x0003cf00) cell_cmode_itu_pane

0x4ca2,	// (0x00033781) bg_button_pane_cp06_ParamLimits

0x4ca2,	// (0x00033781) bg_button_pane_cp06

0x98d5,	// (0x000383b4) cell_cmode_rocker_pane_g1_ParamLimits

0x98d5,	// (0x000383b4) cell_cmode_rocker_pane_g1

0xa736,	// (0x00039215) cell_cmode_rocker_pane_g2_ParamLimits

0xa736,	// (0x00039215) cell_cmode_rocker_pane_g2

0x0001,

0xfdb3,	// (0x0003e892) cell_cmode_rocker_pane_g_ParamLimits

0xfdb3,	// (0x0003e892) cell_cmode_rocker_pane_g

0x424c,	// (0x00032d2b) bg_button_pane_cp07

0xe436,	// (0x0003cf15) cell_cmode_itu_pane_g1

0xe43f,	// (0x0003cf1e) cell_cmode_itu_pane_t1

0xe44d,	// (0x0003cf2c) cell_cmode_itu_pane_t2

0x0001,

0xfdb8,	// (0x0003e897) cell_cmode_itu_pane_t

0xbac0,	// (0x0003a59f) aid_touch_ctrl_left

0xbac8,	// (0x0003a5a7) aid_touch_ctrl_right

0x424c,	// (0x00032d2b) compa_mode_pane

0x299d,	// (0x0003147c) aid_cmod_rocker_key_size_cp

0x29a7,	// (0x00031486) aid_cmode_itu_key_size_cp

0xe45b,	// (0x0003cf3a) compa_mode_pane_g1

0xe463,	// (0x0003cf42) compa_mode_pane_g2

0xe46b,	// (0x0003cf4a) compa_mode_pane_g3

0x0002,

0xfdbd,	// (0x0003e89c) compa_mode_pane_g

0x29b1,	// (0x00031490) main_comp_mode_itu_pane_cp

0x29bb,	// (0x0003149a) main_comp_mode_rocker_pane_cp

0x29c5,	// (0x000314a4) cell_cmode_itu_pane_cp_ParamLimits

0x29c5,	// (0x000314a4) cell_cmode_itu_pane_cp

0x29da,	// (0x000314b9) cell_cmode_rocker_pane_cp_ParamLimits

0x29da,	// (0x000314b9) cell_cmode_rocker_pane_cp

0x4ca2,	// (0x00033781) bg_button_pane_cp06_cp_ParamLimits

0x4ca2,	// (0x00033781) bg_button_pane_cp06_cp

0x98d5,	// (0x000383b4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x98d5,	// (0x000383b4) cell_cmode_rocker_pane_g1_cp

0x96a9,	// (0x00038188) cell_cmode_rocker_pane_g2_cp

0x424c,	// (0x00032d2b) bg_button_pane_cp07_cp

0x29ec,	// (0x000314cb) cell_cmode_itu_pane_g1_cp

0x29f5,	// (0x000314d4) cell_cmode_itu_pane_t1_cp

0x2a03,	// (0x000314e2) cell_cmode_itu_pane_t2_cp

0x18c6,	// (0x000303a5) settings_code_pane_cp2

0x45a9,	// (0x00033088) bg_popup_window_pane_cp3_ParamLimits

0x497a,	// (0x00033459) heading_pane_cp3_ParamLimits

0x4986,	// (0x00033465) listscroll_popup_graphic_pane_ParamLimits

0x658a,	// (0x00035069) fep_hwr_aid_pane_ParamLimits

0x69f5,	// (0x000354d4) aid_touch_sctrl_top_ParamLimits

0x6a02,	// (0x000354e1) sctrl_sk_top_pane_g1_ParamLimits

0x98d5,	// (0x000383b4) sctrl_sk_top_pane_g2_ParamLimits

0xfcf3,	// (0x0003e7d2) sctrl_sk_top_pane_g_ParamLimits

0x6a0f,	// (0x000354ee) sctrl_sk_top_pane_t1_ParamLimits

0x69f5,	// (0x000354d4) aid_touch_sctrl_bottom_ParamLimits

0x6a0f,	// (0x000354ee) sctrl_sk_bottom_pane_t1_ParamLimits

0xa7ef,	// (0x000392ce) aid_area_touch_clock

0xe198,	// (0x0003cc77) aid_vkb2_area_top_pane_cell_ParamLimits

0xe198,	// (0x0003cc77) aid_vkb2_area_top_pane_cell

0xe243,	// (0x0003cd22) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe243,	// (0x0003cd22) aid_vkb2_area_bottom_pane_cell

0xe33c,	// (0x0003ce1b) popup_char_count_window

0xe473,	// (0x0003cf52) popup_char_count_window_g1

0xe47c,	// (0x0003cf5b) popup_char_count_window_g2

0xe485,	// (0x0003cf64) popup_char_count_window_g3

0x0002,

0xfdc4,	// (0x0003e8a3) popup_char_count_window_g

0xe48e,	// (0x0003cf6d) popup_char_count_window_t1

0x6ab5,	// (0x00035594) popup_fep_char_preview_window_ParamLimits

0x6ab5,	// (0x00035594) popup_fep_char_preview_window

0xe1b8,	// (0x0003cc97) vkb2_top_candi_pane_ParamLimits

0xe1b8,	// (0x0003cc97) vkb2_top_candi_pane

0x2a11,	// (0x000314f0) cell_vkb2_top_candi_pane_ParamLimits

0x2a11,	// (0x000314f0) cell_vkb2_top_candi_pane

0x7eec,	// (0x000369cb) bg_popup_fep_char_preview_window_ParamLimits

0x7eec,	// (0x000369cb) bg_popup_fep_char_preview_window

0x6fb3,	// (0x00035a92) popup_fep_char_preview_window_t1_ParamLimits

0x6fb3,	// (0x00035a92) popup_fep_char_preview_window_t1

0xe49c,	// (0x0003cf7b) bg_popup_fep_char_preview_window_g1

0xe4a4,	// (0x0003cf83) bg_popup_fep_char_preview_window_g2

0xe4ac,	// (0x0003cf8b) bg_popup_fep_char_preview_window_g3

0xe4b4,	// (0x0003cf93) bg_popup_fep_char_preview_window_g4

0xe4bc,	// (0x0003cf9b) bg_popup_fep_char_preview_window_g5

0x6fed,	// (0x00035acc) bg_popup_fep_char_preview_window_g6

0xe4c4,	// (0x0003cfa3) bg_popup_fep_char_preview_window_g7

0xe4cc,	// (0x0003cfab) bg_popup_fep_char_preview_window_g8

0xe4d4,	// (0x0003cfb3) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcb,	// (0x0003e8aa) bg_popup_fep_char_preview_window_g

0x98d5,	// (0x000383b4) cell_vkb2_top_candi_pane_g1_ParamLimits

0x98d5,	// (0x000383b4) cell_vkb2_top_candi_pane_g1

0x9b04,	// (0x000385e3) cell_vkb2_top_candi_pane_g2_ParamLimits

0x9b04,	// (0x000385e3) cell_vkb2_top_candi_pane_g2

0x9b25,	// (0x00038604) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9b25,	// (0x00038604) cell_vkb2_top_candi_pane_g3

0x6ff5,	// (0x00035ad4) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6ff5,	// (0x00035ad4) cell_vkb2_top_candi_pane_g4

0xe4dc,	// (0x0003cfbb) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe4dc,	// (0x0003cfbb) cell_vkb2_top_candi_pane_g5

0xa736,	// (0x00039215) cell_vkb2_top_candi_pane_g6_ParamLimits

0xa736,	// (0x00039215) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdde,	// (0x0003e8bd) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdde,	// (0x0003e8bd) cell_vkb2_top_candi_pane_g

0x7016,	// (0x00035af5) cell_vkb2_top_candi_pane_t1

0x62dd,	// (0x00034dbc) aid_size_touch_slider_mark_ParamLimits

0x62dd,	// (0x00034dbc) aid_size_touch_slider_mark

0x2762,	// (0x00031241) grid_graphic2_catg_pane_ParamLimits

0x2762,	// (0x00031241) grid_graphic2_catg_pane

0x27f9,	// (0x000312d8) popup_grid_graphic2_window_t1_ParamLimits

0x27f9,	// (0x000312d8) popup_grid_graphic2_window_t1

0x280e,	// (0x000312ed) popup_grid_graphic2_window_t2_ParamLimits

0x280e,	// (0x000312ed) popup_grid_graphic2_window_t2

0x0001,

0xfd99,	// (0x0003e878) popup_grid_graphic2_window_t_ParamLimits

0xfd99,	// (0x0003e878) popup_grid_graphic2_window_t

0x477c,	// (0x0003325b) bg_button_pane_cp05_ParamLimits

0x2975,	// (0x00031454) cell_graphic2_control_pane_g1_ParamLimits

0xba86,	// (0x0003a565) cell_graphic2_catg_pane_ParamLimits

0xba86,	// (0x0003a565) cell_graphic2_catg_pane

0x424c,	// (0x00032d2b) bg_button_pane_cp12

0x2a5b,	// (0x0003153a) cell_graphic2_catg_pane_g1

0xa7bb,	// (0x0003929a) cell_tb_ext_pane_t1_ParamLimits

0x6dfd,	// (0x000358dc) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6dfd,	// (0x000358dc) vkb2_top_cell_right_narrow_pane

0x6e15,	// (0x000358f4) vkb2_top_cell_right_wide_pane_ParamLimits

0x6e15,	// (0x000358f4) vkb2_top_cell_right_wide_pane

0x657c,	// (0x0003505b) bg_vkb2_func_pane_ParamLimits

0x657c,	// (0x0003505b) bg_vkb2_func_pane

0x6e86,	// (0x00035965) vkb2_top_cell_left_pane_g1_ParamLimits

0x657c,	// (0x0003505b) bg_vkb2_fuc_pane_cp03_ParamLimits

0x657c,	// (0x0003505b) bg_vkb2_fuc_pane_cp03

0x6ee4,	// (0x000359c3) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x7934,	// (0x00036413) bg_vkb2_func_pane_g1

0x793c,	// (0x0003641b) bg_vkb2_func_pane_g2

0x794c,	// (0x0003642b) bg_vkb2_func_pane_g3

0x7944,	// (0x00036423) bg_vkb2_func_pane_g4

0x7954,	// (0x00036433) bg_vkb2_func_pane_g5

0x795c,	// (0x0003643b) bg_vkb2_func_pane_g6

0x7964,	// (0x00036443) bg_vkb2_func_pane_g7

0x796c,	// (0x0003644b) bg_vkb2_func_pane_g8

0x792c,	// (0x0003640b) bg_vkb2_func_pane_g9

0x0008,

0xfdeb,	// (0x0003e8ca) bg_vkb2_func_pane_g

0x657c,	// (0x0003505b) bg_vkb2_fuc_pane_cp01_ParamLimits

0x657c,	// (0x0003505b) bg_vkb2_fuc_pane_cp01

0x6e86,	// (0x00035965) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6e86,	// (0x00035965) vkb2_top_cell_right_wide_pane_g1

0x657c,	// (0x0003505b) bg_vkb2_fuc_pane_cp02_ParamLimits

0x657c,	// (0x0003505b) bg_vkb2_fuc_pane_cp02

0x6ee4,	// (0x000359c3) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6ee4,	// (0x000359c3) vkb2_top_cell_right_narrow_pane_g1

0x2020,	// (0x00030aff) aid_touch_area_decrease_ParamLimits

0x2020,	// (0x00030aff) aid_touch_area_decrease

0x204e,	// (0x00030b2d) aid_touch_area_increase_ParamLimits

0x204e,	// (0x00030b2d) aid_touch_area_increase

0x2076,	// (0x00030b55) aid_touch_area_mute_ParamLimits

0x2076,	// (0x00030b55) aid_touch_area_mute

0x209e,	// (0x00030b7d) aid_touch_area_slider_ParamLimits

0x209e,	// (0x00030b7d) aid_touch_area_slider

0x20de,	// (0x00030bbd) popup_slider_window_g4_ParamLimits

0x20de,	// (0x00030bbd) popup_slider_window_g4

0x2106,	// (0x00030be5) popup_slider_window_g5_ParamLimits

0x2106,	// (0x00030be5) popup_slider_window_g5

0x213a,	// (0x00030c19) popup_slider_window_g6_ParamLimits

0x213a,	// (0x00030c19) popup_slider_window_g6

0xa6e7,	// (0x000391c6) popup_slider_window_t2_ParamLimits

0xa6e7,	// (0x000391c6) popup_slider_window_t2

0x0001,

0xfce7,	// (0x0003e7c6) popup_slider_window_t_ParamLimits

0xfce7,	// (0x0003e7c6) popup_slider_window_t

0x2156,	// (0x00030c35) slider_pane_ParamLimits

0x2156,	// (0x00030c35) slider_pane

0xe4fd,	// (0x0003cfdc) slider_pane_g1_ParamLimits

0xe4fd,	// (0x0003cfdc) slider_pane_g1

0xe511,	// (0x0003cff0) slider_pane_g2_ParamLimits

0xe511,	// (0x0003cff0) slider_pane_g2

0xe527,	// (0x0003d006) slider_pane_g3_ParamLimits

0xe527,	// (0x0003d006) slider_pane_g3

0x0003,

0xfdfe,	// (0x0003e8dd) slider_pane_g_ParamLimits

0xfdfe,	// (0x0003e8dd) slider_pane_g

0xdd20,	// (0x0003c7ff) popup_tb_float_extension_window_ParamLimits

0xdd20,	// (0x0003c7ff) popup_tb_float_extension_window

0xe553,	// (0x0003d032) aid_size_cell_tb_float_ext

0x424c,	// (0x00032d2b) bg_popup_sub_window_cp28

0xe55e,	// (0x0003d03d) grid_tb_float_ext_pane

0xe566,	// (0x0003d045) cell_tb_float_ext_pane_ParamLimits

0xe566,	// (0x0003d045) cell_tb_float_ext_pane

0xe57e,	// (0x0003d05d) cell_tb_float_ext_pane_g1

0xe587,	// (0x0003d066) grid_highlight_pane_cp12

0xdf99,	// (0x0003ca78) cell_last_hwr_side_pane_ParamLimits

0xdf99,	// (0x0003ca78) cell_last_hwr_side_pane

0x96a9,	// (0x00038188) cell_last_hwr_side_pane_g1

0xe590,	// (0x0003d06f) cell_last_hwr_side_pane_g2

0x0001,

0xfe07,	// (0x0003e8e6) cell_last_hwr_side_pane_g

0xe317,	// (0x0003cdf6) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe317,	// (0x0003cdf6) vkb2_area_bottom_space_btn_pane

0x98d5,	// (0x000383b4) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe3cf,	// (0x0003ceae) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7016,	// (0x00035af5) cell_vkb2_top_candi_pane_t1_ParamLimits

0x702c,	// (0x00035b0b) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x702c,	// (0x00035b0b) vkb2_area_bottom_space_btn_pane_g1

0x7062,	// (0x00035b41) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7062,	// (0x00035b41) vkb2_area_bottom_space_btn_pane_g2

0x7098,	// (0x00035b77) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7098,	// (0x00035b77) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0c,	// (0x0003e8eb) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0c,	// (0x0003e8eb) vkb2_area_bottom_space_btn_pane_g

0x662b,	// (0x0003510a) cel_fep_hwr_func_pane_ParamLimits

0x662b,	// (0x0003510a) cel_fep_hwr_func_pane

0xdf6e,	// (0x0003ca4d) cell_hwr_side_button_pane_ParamLimits

0xdf6e,	// (0x0003ca4d) cell_hwr_side_button_pane

0xa7ef,	// (0x000392ce) aid_area_touch_clock_ParamLimits

0x477c,	// (0x0003325b) bg_uniindi_top_pane_ParamLimits

0xa801,	// (0x000392e0) uniindi_top_pane_g1_ParamLimits

0xa817,	// (0x000392f6) uniindi_top_pane_g2_ParamLimits

0xa823,	// (0x00039302) uniindi_top_pane_g3_ParamLimits

0xa834,	// (0x00039313) uniindi_top_pane_g4_ParamLimits

0xfd1f,	// (0x0003e7fe) uniindi_top_pane_g_ParamLimits

0xa841,	// (0x00039320) uniindi_top_pane_t1_ParamLimits

0x477c,	// (0x0003325b) bg_vkb2_func_pane_cp01_ParamLimits

0x477c,	// (0x0003325b) bg_vkb2_func_pane_cp01

0xe599,	// (0x0003d078) cel_fep_hwr_func_pane_g1_ParamLimits

0xe599,	// (0x0003d078) cel_fep_hwr_func_pane_g1

0x477c,	// (0x0003325b) bg_vkb2_func_pane_cp02_ParamLimits

0x477c,	// (0x0003325b) bg_vkb2_func_pane_cp02

0xe599,	// (0x0003d078) cell_hwr_side_button_pane_g1_ParamLimits

0xe599,	// (0x0003d078) cell_hwr_side_button_pane_g1

0x7850,	// (0x0003632f) status_pane_g4_ParamLimits

0x7850,	// (0x0003632f) status_pane_g4

0x7868,	// (0x00036347) status_pane_t1

0x94af,	// (0x00037f8e) form2_midp_gauge_slider_cont_pane

0x94b7,	// (0x00037f96) form2_midp_gauge_slider_pane_t1_ParamLimits

0x1b8a,	// (0x00030669) form2_midp_gauge_slider_pane_t2_ParamLimits

0x1b9c,	// (0x0003067b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf2,	// (0x0003e5d1) form2_midp_gauge_slider_pane_t_ParamLimits

0x94c9,	// (0x00037fa8) form2_midp_slider_pane_ParamLimits

0x6a75,	// (0x00035554) aid_size_cell_func_vkb2_ParamLimits

0x6a75,	// (0x00035554) aid_size_cell_func_vkb2

0xe53f,	// (0x0003d01e) slider_pane_g4_ParamLimits

0xe53f,	// (0x0003d01e) slider_pane_g4

0xe5a7,	// (0x0003d086) form2_midp_gauge_slider_pane_t2_cp01

0xe5b5,	// (0x0003d094) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe5b5,	// (0x0003d094) form2_midp_gauge_slider_pane_t3_cp01

0x7109,	// (0x00035be8) form2_midp_slider_pane_cp01

0x424c,	// (0x00032d2b) navi_smil_pane

0xe5f4,	// (0x0003d0d3) navi_smil_pane_g1

0xe5fc,	// (0x0003d0db) navi_smil_pane_t1

0xe5d2,	// (0x0003d0b1) form2_midp_slider_pane_g1

0xe5db,	// (0x0003d0ba) form2_midp_slider_pane_g2

0xe5e3,	// (0x0003d0c2) form2_midp_slider_pane_g3

0xe5d2,	// (0x0003d0b1) form2_midp_slider_pane_g4

0x2a64,	// (0x00031543) form2_midp_slider_pane_g5

0x0004,

0xfe15,	// (0x0003e8f4) form2_midp_slider_pane_g

0x70ce,	// (0x00035bad) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x70ce,	// (0x00035bad) vkb2_area_bottom_space_btn_pane_g4

0x132f,	// (0x0002fe0e) lc0_navi_pane_ParamLimits

0x132f,	// (0x0002fe0e) lc0_navi_pane

0x1399,	// (0x0002fe78) lc0_stat_indi_pane_ParamLimits

0x1399,	// (0x0002fe78) lc0_stat_indi_pane

0x13ae,	// (0x0002fe8d) ls0_title_pane_ParamLimits

0x13ae,	// (0x0002fe8d) ls0_title_pane

0x4ca2,	// (0x00033781) bg_popup_sub_pane_cp14_ParamLimits

0xa7d6,	// (0x000392b5) list_uniindi_pane_ParamLimits

0xa7e2,	// (0x000392c1) uniindi_top_pane_ParamLimits

0xba98,	// (0x0003a577) list_single_uniindi_pane_g1_ParamLimits

0xbaab,	// (0x0003a58a) list_single_uniindi_pane_t1_ParamLimits

0xe60a,	// (0x0003d0e9) lc0_stat_clock_pane_ParamLimits

0xe60a,	// (0x0003d0e9) lc0_stat_clock_pane

0xe617,	// (0x0003d0f6) lc0_stat_indi_pane_g1_ParamLimits

0xe617,	// (0x0003d0f6) lc0_stat_indi_pane_g1

0xe624,	// (0x0003d103) lc0_stat_indi_pane_g2_ParamLimits

0xe624,	// (0x0003d103) lc0_stat_indi_pane_g2

0x0001,

0xfe20,	// (0x0003e8ff) lc0_stat_indi_pane_g_ParamLimits

0xfe20,	// (0x0003e8ff) lc0_stat_indi_pane_g

0xe631,	// (0x0003d110) lc0_uni_indicator_pane_ParamLimits

0xe631,	// (0x0003d110) lc0_uni_indicator_pane

0xe63e,	// (0x0003d11d) ls0_title_pane_g1_ParamLimits

0xe63e,	// (0x0003d11d) ls0_title_pane_g1

0xe652,	// (0x0003d131) ls0_title_pane_t1_ParamLimits

0xe652,	// (0x0003d131) ls0_title_pane_t1

0xe680,	// (0x0003d15f) lc0_uni_indicator_pane_g1_ParamLimits

0xe680,	// (0x0003d15f) lc0_uni_indicator_pane_g1

0xe695,	// (0x0003d174) lc0_stat_clock_pane_t1

0x424c,	// (0x00032d2b) main_ai5_pane

0xe6a3,	// (0x0003d182) ai5_sk_pane_ParamLimits

0xe6a3,	// (0x0003d182) ai5_sk_pane

0xe6b0,	// (0x0003d18f) cell_ai5_widget_pane_ParamLimits

0xe6b0,	// (0x0003d18f) cell_ai5_widget_pane

0xe720,	// (0x0003d1ff) aid_size_cell_widget_grid

0xe72d,	// (0x0003d20c) bg_ai5_widget_pane_ParamLimits

0xe72d,	// (0x0003d20c) bg_ai5_widget_pane

0xe782,	// (0x0003d261) cell_ai5_widget_pane_g2

0xe796,	// (0x0003d275) cell_ai5_widget_pane_g3

0xe7b0,	// (0x0003d28f) cell_ai5_widget_pane_g4

0xe7c0,	// (0x0003d29f) cell_ai5_widget_pane_g5

0xe7d0,	// (0x0003d2af) cell_ai5_widget_pane_g6

0xe7dc,	// (0x0003d2bb) cell_ai5_widget_pane_g7

0xe824,	// (0x0003d303) cell_ai5_widget_pane_t1_ParamLimits

0xe824,	// (0x0003d303) cell_ai5_widget_pane_t1

0xe841,	// (0x0003d320) cell_ai5_widget_pane_t2_ParamLimits

0xe841,	// (0x0003d320) cell_ai5_widget_pane_t2

0xe859,	// (0x0003d338) cell_ai5_widget_pane_t3_ParamLimits

0xe859,	// (0x0003d338) cell_ai5_widget_pane_t3

0xe871,	// (0x0003d350) cell_ai5_widget_pane_t4_ParamLimits

0xe871,	// (0x0003d350) cell_ai5_widget_pane_t4

0xe897,	// (0x0003d376) cell_ai5_widget_pane_t5_ParamLimits

0xe897,	// (0x0003d376) cell_ai5_widget_pane_t5

0xe8b6,	// (0x0003d395) cell_ai5_widget_pane_t6_ParamLimits

0xe8b6,	// (0x0003d395) cell_ai5_widget_pane_t6

0xe8c8,	// (0x0003d3a7) cell_ai5_widget_pane_t7_ParamLimits

0xe8c8,	// (0x0003d3a7) cell_ai5_widget_pane_t7

0xe8e1,	// (0x0003d3c0) cell_ai5_widget_pane_t8_ParamLimits

0xe8e1,	// (0x0003d3c0) cell_ai5_widget_pane_t8

0x0009,

0xfe3a,	// (0x0003e919) cell_ai5_widget_pane_t_ParamLimits

0xfe3a,	// (0x0003e919) cell_ai5_widget_pane_t

0xe940,	// (0x0003d41f) grid_ai5_widget_pane

0x4ca2,	// (0x00033781) highlight_cell_ai5_widget_pane_ParamLimits

0x4ca2,	// (0x00033781) highlight_cell_ai5_widget_pane

0xe94c,	// (0x0003d42b) ai5_sk_left_pane

0xe956,	// (0x0003d435) ai5_sk_middle_pane

0xe960,	// (0x0003d43f) ai5_sk_right_pane

0xe96a,	// (0x0003d449) bg_ai5_widget_pane_g1_ParamLimits

0xe96a,	// (0x0003d449) bg_ai5_widget_pane_g1

0xe976,	// (0x0003d455) bg_ai5_widget_pane_g2_ParamLimits

0xe976,	// (0x0003d455) bg_ai5_widget_pane_g2

0xe982,	// (0x0003d461) bg_ai5_widget_pane_g3_ParamLimits

0xe982,	// (0x0003d461) bg_ai5_widget_pane_g3

0xe98e,	// (0x0003d46d) bg_ai5_widget_pane_g4_ParamLimits

0xe98e,	// (0x0003d46d) bg_ai5_widget_pane_g4

0xe99a,	// (0x0003d479) bg_ai5_widget_pane_g5_ParamLimits

0xe99a,	// (0x0003d479) bg_ai5_widget_pane_g5

0xe9a6,	// (0x0003d485) bg_ai5_widget_pane_g6_ParamLimits

0xe9a6,	// (0x0003d485) bg_ai5_widget_pane_g6

0xe9b2,	// (0x0003d491) bg_ai5_widget_pane_g7_ParamLimits

0xe9b2,	// (0x0003d491) bg_ai5_widget_pane_g7

0xe9be,	// (0x0003d49d) bg_ai5_widget_pane_g8_ParamLimits

0xe9be,	// (0x0003d49d) bg_ai5_widget_pane_g8

0xe9ca,	// (0x0003d4a9) bg_ai5_widget_pane_g9_ParamLimits

0xe9ca,	// (0x0003d4a9) bg_ai5_widget_pane_g9

0x0008,

0xfe4f,	// (0x0003e92e) bg_ai5_widget_pane_g_ParamLimits

0xfe4f,	// (0x0003e92e) bg_ai5_widget_pane_g

0xe9fa,	// (0x0003d4d9) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9fa,	// (0x0003d4d9) cell_shortcut_ai5_widget_pane

0xea0b,	// (0x0003d4ea) bg_cell_shortcut_ai5_widget_pane

0x4936,	// (0x00033415) cell_grid_ai5_widget_pane_g1

0x7594,	// (0x00036073) highlight_cell_shortcut_ai5_widget_pane

0x793c,	// (0x0003641b) ai5_sk_left_pane_g1

0xea13,	// (0x0003d4f2) ai5_sk_left_pane_g2

0xea1b,	// (0x0003d4fa) ai5_sk_left_pane_g3

0xea23,	// (0x0003d502) ai5_sk_left_pane_g4

0x0003,

0xfe62,	// (0x0003e941) ai5_sk_left_pane_g

0xea2b,	// (0x0003d50a) ai5_sk_left_pane_t1

0x7934,	// (0x00036413) ai5_sk_right_pane_g1

0xea39,	// (0x0003d518) ai5_sk_right_pane_g2

0xea41,	// (0x0003d520) ai5_sk_right_pane_g3

0xea49,	// (0x0003d528) ai5_sk_right_pane_g4

0x0003,

0xfe6b,	// (0x0003e94a) ai5_sk_right_pane_g

0xea51,	// (0x0003d530) ai5_sk_right_pane_t1

0x7934,	// (0x00036413) ai5_sk_middle_pane_g1

0x793c,	// (0x0003641b) ai5_sk_middle_pane_g2

0x7954,	// (0x00036433) ai5_sk_middle_pane_g3

0xea41,	// (0x0003d520) ai5_sk_middle_pane_g4

0xea1b,	// (0x0003d4fa) ai5_sk_middle_pane_g5

0xea5f,	// (0x0003d53e) ai5_sk_middle_pane_g6

0xea67,	// (0x0003d546) ai5_sk_middle_pane_g7

0x0006,

0xfe74,	// (0x0003e953) ai5_sk_middle_pane_g

0x122d,	// (0x0002fd0c) aid_touch_area_size_lc0_ParamLimits

0x122d,	// (0x0002fd0c) aid_touch_area_size_lc0

0x67aa,	// (0x00035289) cell_hwr_candidate_pane_t1_ParamLimits

0x7779,	// (0x00036258) aid_touch_navi_pane

0x149a,	// (0x0002ff79) status_dt_navi_pane_ParamLimits

0x149a,	// (0x0002ff79) status_dt_navi_pane

0x14b2,	// (0x0002ff91) status_dt_sta_pane_ParamLimits

0x14b2,	// (0x0002ff91) status_dt_sta_pane

0xea6f,	// (0x0003d54e) dt_sta_controll_pane

0xea7c,	// (0x0003d55b) dt_sta_indi_pane

0xea89,	// (0x0003d568) dt_sta_title_pane

0x477c,	// (0x0003325b) bg_dt_sta_indi_pane_ParamLimits

0x477c,	// (0x0003325b) bg_dt_sta_indi_pane

0xea9b,	// (0x0003d57a) dt_sta_battery_pane

0xeaa3,	// (0x0003d582) dt_sta_indi_pane_g1

0xeaac,	// (0x0003d58b) dt_sta_indi_pane_g2

0xeab5,	// (0x0003d594) dt_sta_indi_pane_g3

0x0002,

0xfe83,	// (0x0003e962) dt_sta_indi_pane_g

0xeabe,	// (0x0003d59d) dt_sta_signal_pane

0x4ca2,	// (0x00033781) bg_dt_sta_title_pane_ParamLimits

0x4ca2,	// (0x00033781) bg_dt_sta_title_pane

0xeac7,	// (0x0003d5a6) dt_sta_title_pane_g1

0xeacf,	// (0x0003d5ae) dt_sta_title_pane_t1_ParamLimits

0xeacf,	// (0x0003d5ae) dt_sta_title_pane_t1

0x424c,	// (0x00032d2b) bg_dt_sta_control_pane

0xeae4,	// (0x0003d5c3) dt_sta_controll_pane_g1

0xeaed,	// (0x0003d5cc) bg_dt_sta_title_pane_g1

0xeaf6,	// (0x0003d5d5) bg_dt_sta_title_pane_g2

0xeaff,	// (0x0003d5de) bg_dt_sta_title_pane_g3

0x0002,

0xfe8a,	// (0x0003e969) bg_dt_sta_title_pane_g

0x96a9,	// (0x00038188) bg_dt_sta_indi_pane_g1

0xeb08,	// (0x0003d5e7) dt_sta_signal_pane_g1

0xeb10,	// (0x0003d5ef) dt_sta_signal_pane_g2

0x0001,

0xfe91,	// (0x0003e970) dt_sta_signal_pane_g

0xeb18,	// (0x0003d5f7) dt_sta_battery_pane_g1

0xeb21,	// (0x0003d600) dt_sta_battery_pane_t1

0x96a9,	// (0x00038188) bg_dt_sta_control_pane_g1

0x5432,	// (0x00033f11) fep_china_uni_eep_pane

0x543a,	// (0x00033f19) fep_china_uni_entry_pane_ParamLimits

0x544a,	// (0x00033f29) popup_fep_china_uni_window_g1_ParamLimits

0x545a,	// (0x00033f39) popup_fep_china_uni_window_g2_ParamLimits

0x545a,	// (0x00033f39) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0003e201) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0003e201) popup_fep_china_uni_window_g

0xeb30,	// (0x0003d60f) fep_china_uni_eep_pane_g1

0xeb38,	// (0x0003d617) fep_china_uni_eep_pane_t1

0xe5eb,	// (0x0003d0ca) aid_touch_area_size_smil_player

0x7817,	// (0x000362f6) lc0_clock_pane

0x785c,	// (0x0003633b) status_pane_g5_ParamLimits

0x785c,	// (0x0003633b) status_pane_g5

0xd954,	// (0x0003c433) popup_keymap_window

0x7830,	// (0x0003630f) status_icon_pane

0xe796,	// (0x0003d275) cell_ai5_widget_pane_g3_ParamLimits

0xe7b0,	// (0x0003d28f) cell_ai5_widget_pane_g4_ParamLimits

0xe7c0,	// (0x0003d29f) cell_ai5_widget_pane_g5_ParamLimits

0xe7e8,	// (0x0003d2c7) cell_ai5_widget_pane_g8_ParamLimits

0xe7e8,	// (0x0003d2c7) cell_ai5_widget_pane_g8

0xe7fc,	// (0x0003d2db) cell_ai5_widget_pane_g9_ParamLimits

0xe7fc,	// (0x0003d2db) cell_ai5_widget_pane_g9

0xe810,	// (0x0003d2ef) cell_ai5_widget_pane_g10_ParamLimits

0xe810,	// (0x0003d2ef) cell_ai5_widget_pane_g10

0xeb47,	// (0x0003d626) status_icon_pane_g1

0x424c,	// (0x00032d2b) bg_popup_sub_pane_cp13

0xeb4f,	// (0x0003d62e) popup_keymap_window_t1

0x11f2,	// (0x0002fcd1) control_pane_g6_ParamLimits

0x11f2,	// (0x0002fcd1) control_pane_g6

0x11e5,	// (0x0002fcc4) control_pane_g7_ParamLimits

0x11e5,	// (0x0002fcc4) control_pane_g7

0x11d8,	// (0x0002fcb7) control_pane_g8_ParamLimits

0x11d8,	// (0x0002fcb7) control_pane_g8

0xea6f,	// (0x0003d54e) dt_sta_controll_pane_ParamLimits

0xea7c,	// (0x0003d55b) dt_sta_indi_pane_ParamLimits

0xea89,	// (0x0003d568) dt_sta_title_pane_ParamLimits

0x4b34,	// (0x00033613) aid_size_touch_scroll_bar_cale

0x4433,	// (0x00032f12) popup_discreet_window_ParamLimits

0x4433,	// (0x00032f12) popup_discreet_window

0xd4f7,	// (0x0003bfd6) popup_sk_window

0x7eec,	// (0x000369cb) bg_popup_sub_pane_cp28_ParamLimits

0x7eec,	// (0x000369cb) bg_popup_sub_pane_cp28

0xeb5d,	// (0x0003d63c) popup_discreet_window_g1_ParamLimits

0xeb5d,	// (0x0003d63c) popup_discreet_window_g1

0xeb7d,	// (0x0003d65c) popup_discreet_window_t1_ParamLimits

0xeb7d,	// (0x0003d65c) popup_discreet_window_t1

0xeb9b,	// (0x0003d67a) popup_discreet_window_t2_ParamLimits

0xeb9b,	// (0x0003d67a) popup_discreet_window_t2

0x0002,

0xfe96,	// (0x0003e975) popup_discreet_window_t_ParamLimits

0xfe96,	// (0x0003e975) popup_discreet_window_t

0x713e,	// (0x00035c1d) popup_sk_window_g1

0x7147,	// (0x00035c26) popup_sk_window_g2

0x0001,

0xfe9d,	// (0x0003e97c) popup_sk_window_g

0x7150,	// (0x00035c2f) popup_sk_window_t1

0x715e,	// (0x00035c3d) popup_sk_window_t1_copy1

0xe782,	// (0x0003d261) cell_ai5_widget_pane_g2_ParamLimits

0xe8f3,	// (0x0003d3d2) cell_ai5_widget_pane_t9_ParamLimits

0xe8f3,	// (0x0003d3d2) cell_ai5_widget_pane_t9

0x424c,	// (0x00032d2b) main_fep_fshwr2_pane

0xebed,	// (0x0003d6cc) aid_fshwr2_btn_pane

0xec01,	// (0x0003d6e0) aid_fshwr2_syb_pane

0xec15,	// (0x0003d6f4) aid_fshwr2_txt_pane

0xec25,	// (0x0003d704) fshwr2_func_candi_pane

0xec3d,	// (0x0003d71c) fshwr2_hwr_syb_pane

0xec55,	// (0x0003d734) fshwr2_icf_pane

0x424c,	// (0x00032d2b) fshwr2_icf_bg_pane

0xec7f,	// (0x0003d75e) fshwr2_icf_pane_t1_ParamLimits

0xec7f,	// (0x0003d75e) fshwr2_icf_pane_t1

0x5302,	// (0x00033de1) fshwr2_func_candi_pane_g1

0xec96,	// (0x0003d775) fshwr2_func_candi_row_pane_ParamLimits

0xec96,	// (0x0003d775) fshwr2_func_candi_row_pane

0xecb9,	// (0x0003d798) cell_fshwr2_syb_pane_ParamLimits

0xecb9,	// (0x0003d798) cell_fshwr2_syb_pane

0xe599,	// (0x0003d078) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe599,	// (0x0003d078) fshwr2_hwr_syb_pane_g1

0x424c,	// (0x00032d2b) bg_popup_call_pane_cp01

0xecdb,	// (0x0003d7ba) fshwr2_func_candi_cell_pane_ParamLimits

0xecdb,	// (0x0003d7ba) fshwr2_func_candi_cell_pane

0x7cde,	// (0x000367bd) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x7cde,	// (0x000367bd) fshwr2_func_candi_cell_bg_pane

0xed1a,	// (0x0003d7f9) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xed1a,	// (0x0003d7f9) fshwr2_func_candi_cell_pane_g1

0xed51,	// (0x0003d830) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xed51,	// (0x0003d830) fshwr2_func_candi_cell_pane_t1

0x424c,	// (0x00032d2b) bg_button_pane_cp08

0x5b78,	// (0x00034657) cell_fshwr2_syb_bg_pane

0xed6c,	// (0x0003d84b) cell_fshwr2_syb_bg_pane_g1

0xed7c,	// (0x0003d85b) cell_fshwr2_syb_bg_pane_t1

0x4ca2,	// (0x00033781) main_tmo_pane

0x173b,	// (0x0003021a) uni_indicator_pane_g1_ParamLimits

0x1751,	// (0x00030230) uni_indicator_pane_g2_ParamLimits

0x1767,	// (0x00030246) uni_indicator_pane_g3_ParamLimits

0x88ad,	// (0x0003738c) uni_indicator_pane_g4_ParamLimits

0x88ad,	// (0x0003738c) uni_indicator_pane_g4

0x88c1,	// (0x000373a0) uni_indicator_pane_g5_ParamLimits

0x88c1,	// (0x000373a0) uni_indicator_pane_g5

0x88c1,	// (0x000373a0) uni_indicator_pane_g6_ParamLimits

0x88c1,	// (0x000373a0) uni_indicator_pane_g6

0xf91a,	// (0x0003e3f9) uni_indicator_pane_g_ParamLimits

0x2004,	// (0x00030ae3) popup_tmo_note_window_ParamLimits

0x2004,	// (0x00030ae3) popup_tmo_note_window

0x4ca2,	// (0x00033781) fshwr2_bg_pane

0xed42,	// (0x0003d821) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xed42,	// (0x0003d821) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea2,	// (0x0003e981) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea2,	// (0x0003e981) fshwr2_func_candi_cell_pane_g

0x96a9,	// (0x00038188) bg_popup_window_pane_cp01

0x72b7,	// (0x00035d96) bg_popup_window_pane_g1_cp01

0xed92,	// (0x0003d871) bg_popup_window_pane_cp22_ParamLimits

0xed92,	// (0x0003d871) bg_popup_window_pane_cp22

0xeda0,	// (0x0003d87f) listscroll_tmo_link_pane_ParamLimits

0xeda0,	// (0x0003d87f) listscroll_tmo_link_pane

0xede0,	// (0x0003d8bf) popup_tmo_note_window_g1_ParamLimits

0xede0,	// (0x0003d8bf) popup_tmo_note_window_g1

0xeded,	// (0x0003d8cc) tmo_note_info_pane_ParamLimits

0xeded,	// (0x0003d8cc) tmo_note_info_pane

0xee07,	// (0x0003d8e6) list_tmo_note_info_pane_g1_ParamLimits

0xee07,	// (0x0003d8e6) list_tmo_note_info_pane_g1

0xee1e,	// (0x0003d8fd) list_tmo_note_info_pane_g2_ParamLimits

0xee1e,	// (0x0003d8fd) list_tmo_note_info_pane_g2

0x0001,

0xfea7,	// (0x0003e986) list_tmo_note_info_pane_g_ParamLimits

0xfea7,	// (0x0003e986) list_tmo_note_info_pane_g

0xee3a,	// (0x0003d919) list_tmo_note_info_text_pane_ParamLimits

0xee3a,	// (0x0003d919) list_tmo_note_info_text_pane

0xeebb,	// (0x0003d99a) list_tmo_link_pane

0xeec8,	// (0x0003d9a7) scroll_pane_cp20

0xeed5,	// (0x0003d9b4) list_single_tmo_link_pane_ParamLimits

0xeed5,	// (0x0003d9b4) list_single_tmo_link_pane

0xeee5,	// (0x0003d9c4) list_single_tmo_link_pane_t1

0xeef3,	// (0x0003d9d2) list_tmo_note_info_text_pane_t1_ParamLimits

0xeef3,	// (0x0003d9d2) list_tmo_note_info_text_pane_t1

0x4d50,	// (0x0003382f) aid_size_touch_scroll_bar_cp01_ParamLimits

0x4d50,	// (0x0003382f) aid_size_touch_scroll_bar_cp01

0xd11d,	// (0x0003bbfc) aid_size_touch_slider_marker

0xd4eb,	// (0x0003bfca) popup_settings_window_ParamLimits

0xd4eb,	// (0x0003bfca) popup_settings_window

0x3b7e,	// (0x0003265d) popup_candi_list_indi_window

0x7779,	// (0x00036258) aid_touch_navi_pane_ParamLimits

0x69c9,	// (0x000354a8) rs_clock_indi_pane

0x69d2,	// (0x000354b1) sctrl_sk_bottom_pane_ParamLimits

0x69e3,	// (0x000354c2) sctrl_sk_top_pane_ParamLimits

0x6acf,	// (0x000355ae) popup_fep_tooltip_window

0xe720,	// (0x0003d1ff) aid_size_cell_widget_grid_ParamLimits

0xe76e,	// (0x0003d24d) cell_ai5_widget_pane_g1_ParamLimits

0xe76e,	// (0x0003d24d) cell_ai5_widget_pane_g1

0xe7d0,	// (0x0003d2af) cell_ai5_widget_pane_g6_ParamLimits

0xe7dc,	// (0x0003d2bb) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe25,	// (0x0003e904) cell_ai5_widget_pane_g_ParamLimits

0xfe25,	// (0x0003e904) cell_ai5_widget_pane_g

0xe922,	// (0x0003d401) cell_ai5_widget_pane_t10_ParamLimits

0xe922,	// (0x0003d401) cell_ai5_widget_pane_t10

0xe940,	// (0x0003d41f) grid_ai5_widget_pane_ParamLimits

0xe9d6,	// (0x0003d4b5) cell_contacts_ai5_widget_pane_ParamLimits

0xe9d6,	// (0x0003d4b5) cell_contacts_ai5_widget_pane

0xebb0,	// (0x0003d68f) popup_discreet_window_t3_ParamLimits

0xebb0,	// (0x0003d68f) popup_discreet_window_t3

0xec6d,	// (0x0003d74c) popup_fshwr2_char_preview_window_ParamLimits

0xec6d,	// (0x0003d74c) popup_fshwr2_char_preview_window

0xee58,	// (0x0003d937) tmo_note_info_pane_t1

0xee6d,	// (0x0003d94c) tmo_note_info_pane_t2

0xee82,	// (0x0003d961) tmo_note_info_pane_t3

0xee97,	// (0x0003d976) tmo_note_info_pane_t4

0xeea9,	// (0x0003d988) tmo_note_info_pane_t5

0x0004,

0xfeac,	// (0x0003e98b) tmo_note_info_pane_t

0xeebb,	// (0x0003d99a) list_tmo_link_pane_ParamLimits

0xeec8,	// (0x0003d9a7) scroll_pane_cp20_ParamLimits

0x424c,	// (0x00032d2b) bg_popup_fep_char_preview_window_cp01

0xef0c,	// (0x0003d9eb) popup_fshwr2_char_preview_window_t1

0xef1a,	// (0x0003d9f9) popup_candi_list_indi_window_g1

0xef23,	// (0x0003da02) bg_cell_contacts_ai5_widget_pane

0xef2f,	// (0x0003da0e) cell_contacts_ai5_widget_pane_g1

0xef44,	// (0x0003da23) cell_contacts_ai5_widget_pane_g2

0xef50,	// (0x0003da2f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb7,	// (0x0003e996) cell_contacts_ai5_widget_pane_g

0xef5c,	// (0x0003da3b) cell_contacts_ai5_widget_pane_t1

0x4ca2,	// (0x00033781) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefd1,	// (0x0003dab0) settings_container_pane

0x7594,	// (0x00036073) listscroll_set_pane_copy1

0x8fe5,	// (0x00037ac4) scroll_pane_cp121_copy1

0xefdd,	// (0x0003dabc) set_content_pane_copy1

0xefe5,	// (0x0003dac4) aid_height_set_list_copy1_ParamLimits

0xefe5,	// (0x0003dac4) aid_height_set_list_copy1

0x8a5a,	// (0x00037539) aid_size_parent_copy1_ParamLimits

0x8a5a,	// (0x00037539) aid_size_parent_copy1

0xeff1,	// (0x0003dad0) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeff1,	// (0x0003dad0) button_value_adjust_pane_cp6_copy1

0x5b78,	// (0x00034657) list_highlight_pane_cp2_copy1_ParamLimits

0x5b78,	// (0x00034657) list_highlight_pane_cp2_copy1

0xf005,	// (0x0003dae4) list_set_pane_copy1_ParamLimits

0xf005,	// (0x0003dae4) list_set_pane_copy1

0xef6e,	// (0x0003da4d) main_pane_set_t1_copy1_ParamLimits

0xef6e,	// (0x0003da4d) main_pane_set_t1_copy1

0xefa8,	// (0x0003da87) main_pane_set_t2_copy1_ParamLimits

0xefa8,	// (0x0003da87) main_pane_set_t2_copy1

0xf093,	// (0x0003db72) main_pane_set_t3_copy1

0xf0a1,	// (0x0003db80) main_pane_set_t4_copy1

0xefc5,	// (0x0003daa4) set_content_pane_g1_copy1_ParamLimits

0xefc5,	// (0x0003daa4) set_content_pane_g1_copy1

0xf0af,	// (0x0003db8e) setting_code_pane_copy1

0xf0b7,	// (0x0003db96) setting_slider_graphic_pane_copy1

0xf0b7,	// (0x0003db96) setting_slider_pane_copy1

0xf0b7,	// (0x0003db96) setting_text_pane_copy1

0xf0b7,	// (0x0003db96) setting_volume_pane_copy1

0xf0bf,	// (0x0003db9e) settings_code_pane_cp2_copy1

0xf0c7,	// (0x0003dba6) settings_code_pane_cp_copy1_ParamLimits

0xf0c7,	// (0x0003dba6) settings_code_pane_cp_copy1

0xf0db,	// (0x0003dbba) volume_set_pane_copy1

0xf0e3,	// (0x0003dbc2) volume_set_pane_g10_copy1

0xf0eb,	// (0x0003dbca) volume_set_pane_g1_copy1

0xf0f3,	// (0x0003dbd2) volume_set_pane_g2_copy1

0xf0fb,	// (0x0003dbda) volume_set_pane_g3_copy1

0xf103,	// (0x0003dbe2) volume_set_pane_g4_copy1

0xf10b,	// (0x0003dbea) volume_set_pane_g5_copy1

0xf113,	// (0x0003dbf2) volume_set_pane_g6_copy1

0xf11b,	// (0x0003dbfa) volume_set_pane_g7_copy1

0xf123,	// (0x0003dc02) volume_set_pane_g8_copy1

0xf12b,	// (0x0003dc0a) volume_set_pane_g9_copy1

0x45a9,	// (0x00033088) bg_set_opt_pane_cp_copy1_ParamLimits

0x45a9,	// (0x00033088) bg_set_opt_pane_cp_copy1

0x45c7,	// (0x000330a6) setting_slider_pane_t1_copy1_ParamLimits

0x45c7,	// (0x000330a6) setting_slider_pane_t1_copy1

0x72c8,	// (0x00035da7) setting_slider_pane_t2_copy1_ParamLimits

0x72c8,	// (0x00035da7) setting_slider_pane_t2_copy1

0x72e1,	// (0x00035dc0) setting_slider_pane_t3_copy1_ParamLimits

0x72e1,	// (0x00035dc0) setting_slider_pane_t3_copy1

0x460d,	// (0x000330ec) slider_set_pane_copy1_ParamLimits

0x460d,	// (0x000330ec) slider_set_pane_copy1

0x4cf1,	// (0x000337d0) set_opt_bg_pane_g1_copy2

0x4cf9,	// (0x000337d8) set_opt_bg_pane_g2_copy2

0xf133,	// (0x0003dc12) set_opt_bg_pane_g3_copy2

0x4d09,	// (0x000337e8) set_opt_bg_pane_g4_copy2

0x4d11,	// (0x000337f0) set_opt_bg_pane_g5_copy2

0x4d19,	// (0x000337f8) set_opt_bg_pane_g6_copy2

0xf13b,	// (0x0003dc1a) set_opt_bg_pane_g7_copy2

0xf143,	// (0x0003dc22) set_opt_bg_pane_g8_copy2

0xf14b,	// (0x0003dc2a) set_opt_bg_pane_g9_copy2

0x62dd,	// (0x00034dbc) aid_size_touch_slider_mark_copy1_ParamLimits

0x62dd,	// (0x00034dbc) aid_size_touch_slider_mark_copy1

0x8a6c,	// (0x0003754b) slider_set_pane_g1_copy1

0x8a75,	// (0x00037554) slider_set_pane_g2_copy1

0x62fd,	// (0x00034ddc) slider_set_pane_g3_copy1_ParamLimits

0x62fd,	// (0x00034ddc) slider_set_pane_g3_copy1

0x6311,	// (0x00034df0) slider_set_pane_g4_copy1_ParamLimits

0x6311,	// (0x00034df0) slider_set_pane_g4_copy1

0x6329,	// (0x00034e08) slider_set_pane_g5_copy1_ParamLimits

0x6329,	// (0x00034e08) slider_set_pane_g5_copy1

0x62fd,	// (0x00034ddc) slider_set_pane_g6_copy1_ParamLimits

0x62fd,	// (0x00034ddc) slider_set_pane_g6_copy1

0xf153,	// (0x0003dc32) slider_set_pane_g7_copy1_ParamLimits

0xf153,	// (0x0003dc32) slider_set_pane_g7_copy1

0x4415,	// (0x00032ef4) bg_set_opt_pane_cp2_copy1

0x4623,	// (0x00033102) setting_slider_graphic_pane_g1_copy1

0xf169,	// (0x0003dc48) setting_slider_graphic_pane_t1_copy1

0xf178,	// (0x0003dc57) setting_slider_graphic_pane_t2_copy1

0xf187,	// (0x0003dc66) slider_set_pane_cp_copy1

0xf197,	// (0x0003dc76) input_focus_pane_cp1_copy1

0xf1a0,	// (0x0003dc7f) list_set_text_pane_copy1

0xf1a8,	// (0x0003dc87) setting_text_pane_g1_copy1

0x422c,	// (0x00032d0b) set_text_pane_t1_copy1

0xf197,	// (0x0003dc76) input_focus_pane_cp2_copy1

0xf1a8,	// (0x0003dc87) setting_code_pane_g1_copy1

0xf1b1,	// (0x0003dc90) setting_code_pane_t1_copy1

0x1094,	// (0x0002fb73) list_set_graphic_pane_copy1

0x4415,	// (0x00032ef4) bg_set_opt_pane_cp4_copy1

0xf1bf,	// (0x0003dc9e) list_set_graphic_pane_g1_copy1_ParamLimits

0xf1bf,	// (0x0003dc9e) list_set_graphic_pane_g1_copy1

0xf1cb,	// (0x0003dcaa) list_set_graphic_pane_g2_copy1

0x571a,	// (0x000341f9) list_set_graphic_pane_t1_copy1_ParamLimits

0x571a,	// (0x000341f9) list_set_graphic_pane_t1_copy1

0x96a9,	// (0x00038188) rs_clock_indi_pane_g1

0xf1d3,	// (0x0003dcb2) rs_clock_indi_pane_t1

0xf1e1,	// (0x0003dcc0) rs_indi_pane

0xf1e9,	// (0x0003dcc8) rs_indi_pane_g1

0xf1f2,	// (0x0003dcd1) rs_indi_pane_g2

0xef1a,	// (0x0003d9f9) rs_indi_pane_g3

0x0002,

0xfebe,	// (0x0003e99d) rs_indi_pane_g

0x7594,	// (0x00036073) bg_popup_preview_window_pane_cp03

0xf1fb,	// (0x0003dcda) popup_fep_tooltip_window_t1

0x9fea,	// (0x00038ac9) popup_note2_window_g2_ParamLimits

0x9fea,	// (0x00038ac9) popup_note2_window_g2

0x0001,

0xfc5e,	// (0x0003e73d) popup_note2_window_g_ParamLimits

0xfc5e,	// (0x0003e73d) popup_note2_window_g

0xa465,	// (0x00038f44) bg_popup_sub_pane_cp11_ParamLimits

0xa472,	// (0x00038f51) cell_ai3_links_pane_g1_ParamLimits

0xa489,	// (0x00038f68) cell_ai3_links_pane_t1

0x422c,	// (0x00032d0b) set_text_pane_t1_copy1_ParamLimits

0x58c6,	// (0x000343a5) cell_graphic_popup_pane_cp2_ParamLimits

0x58c6,	// (0x000343a5) cell_graphic_popup_pane_cp2

0xf209,	// (0x0003dce8) cell_graphic_popup_pane_g1_cp2

0x49e3,	// (0x000334c2) cell_graphic_popup_pane_g2_cp2

0xf211,	// (0x0003dcf0) cell_graphic_popup_pane_g3_cp2

0xf219,	// (0x0003dcf8) cell_graphic_popup_pane_t2_cp2

0x49f4,	// (0x000334d3) grid_highlight_pane_cp3_cp2

0x50ff,	// (0x00033bde) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4ca2,	// (0x00033781) main_tmo_pane_ParamLimits

0x1ffc,	// (0x00030adb) popup_tmo_big_image_note_window

0xe75d,	// (0x0003d23c) cell_ai5_widget_list_pane

0xe765,	// (0x0003d244) cell_ai5_widget_lrg_icon_pane

0xee58,	// (0x0003d937) tmo_note_info_pane_t1_ParamLimits

0xee6d,	// (0x0003d94c) tmo_note_info_pane_t2_ParamLimits

0xee82,	// (0x0003d961) tmo_note_info_pane_t3_ParamLimits

0xee97,	// (0x0003d976) tmo_note_info_pane_t4_ParamLimits

0xeea9,	// (0x0003d988) tmo_note_info_pane_t5_ParamLimits

0xfeac,	// (0x0003e98b) tmo_note_info_pane_t_ParamLimits

0xefd1,	// (0x0003dab0) settings_container_pane_ParamLimits

0xf18f,	// (0x0003dc6e) indicator_popup_pane_cp5

0xf18f,	// (0x0003dc6e) indicator_popup_pane_cp6

0x1094,	// (0x0002fb73) list_set_graphic_pane_copy1_ParamLimits

0x424c,	// (0x00032d2b) bg_popup_window_pane_cp23

0xf227,	// (0x0003dd06) popup_tmo_big_image_note_window_g1

0xf230,	// (0x0003dd0f) popup_tmo_big_image_note_window_t1

0xf23e,	// (0x0003dd1d) popup_tmo_big_image_note_window_t2

0xf24c,	// (0x0003dd2b) popup_tmo_big_image_note_window_t3

0x0002,

0xfec5,	// (0x0003e9a4) popup_tmo_big_image_note_window_t

0x96a9,	// (0x00038188) cell_ai5_widget_lrg_icon_pane_g1

0xf25a,	// (0x0003dd39) cell_ai5_widget_lrg_icon_pane_t1

0xf268,	// (0x0003dd47) cell_ai5_widget_list_row_pane_ParamLimits

0xf268,	// (0x0003dd47) cell_ai5_widget_list_row_pane

0xf27f,	// (0x0003dd5e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf27f,	// (0x0003dd5e) cell_ai5_widget_list_row_pane_g1

0xf28c,	// (0x0003dd6b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf28c,	// (0x0003dd6b) cell_ai5_widget_list_row_pane_t1

0xf2bd,	// (0x0003dd9c) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2bd,	// (0x0003dd9c) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecc,	// (0x0003e9ab) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecc,	// (0x0003e9ab) cell_ai5_widget_list_row_pane_t

0x424c,	// (0x00032d2b) main_fep_vtchi_ss_pane

0xf305,	// (0x0003dde4) popup_fep_char_pre_window

0xf30d,	// (0x0003ddec) popup_fep_ituss_window

0xf32e,	// (0x0003de0d) popup_fep_vkbss_window

0xf351,	// (0x0003de30) grid_vkbss_keypad_pane_ParamLimits

0xf351,	// (0x0003de30) grid_vkbss_keypad_pane

0xf361,	// (0x0003de40) ituss_keypad_pane

0x73e8,	// (0x00035ec7) aid_vkbss_key_offset_ParamLimits

0x73e8,	// (0x00035ec7) aid_vkbss_key_offset

0x73f4,	// (0x00035ed3) cell_vkbss_key_pane_ParamLimits

0x73f4,	// (0x00035ed3) cell_vkbss_key_pane

0x7838,	// (0x00036317) bg_cell_vkbss_key_g1_ParamLimits

0x7838,	// (0x00036317) bg_cell_vkbss_key_g1

0xf370,	// (0x0003de4f) cell_vkbss_key_3p_pane_ParamLimits

0xf370,	// (0x0003de4f) cell_vkbss_key_3p_pane

0xf38a,	// (0x0003de69) cell_vkbss_key_g1_ParamLimits

0xf38a,	// (0x0003de69) cell_vkbss_key_g1

0xf3a4,	// (0x0003de83) cell_vkbss_key_t1_ParamLimits

0xf3a4,	// (0x0003de83) cell_vkbss_key_t1

0x740a,	// (0x00035ee9) cell_ituss_key_pane_ParamLimits

0x740a,	// (0x00035ee9) cell_ituss_key_pane

0xf3cf,	// (0x0003deae) bg_cell_ituss_key_g1_ParamLimits

0xf3cf,	// (0x0003deae) bg_cell_ituss_key_g1

0xf3db,	// (0x0003deba) cell_ituss_key_pane_g1_ParamLimits

0xf3db,	// (0x0003deba) cell_ituss_key_pane_g1

0x741b,	// (0x00035efa) cell_ituss_key_pane_g2_ParamLimits

0x741b,	// (0x00035efa) cell_ituss_key_pane_g2

0x0002,

0xfed3,	// (0x0003e9b2) cell_ituss_key_pane_g_ParamLimits

0xfed3,	// (0x0003e9b2) cell_ituss_key_pane_g

0x7447,	// (0x00035f26) cell_ituss_key_t1_ParamLimits

0x7447,	// (0x00035f26) cell_ituss_key_t1

0x747d,	// (0x00035f5c) cell_ituss_key_t2_ParamLimits

0x747d,	// (0x00035f5c) cell_ituss_key_t2

0x74ae,	// (0x00035f8d) cell_ituss_key_t3_ParamLimits

0x74ae,	// (0x00035f8d) cell_ituss_key_t3

0x747d,	// (0x00035f5c) cell_ituss_key_t4_ParamLimits

0x747d,	// (0x00035f5c) cell_ituss_key_t4

0x0004,

0xfeda,	// (0x0003e9b9) cell_ituss_key_t_ParamLimits

0xfeda,	// (0x0003e9b9) cell_ituss_key_t

0xf401,	// (0x0003dee0) cell_vkbss_key_3p_pane_g1

0xf409,	// (0x0003dee8) cell_vkbss_key_3p_pane_g2

0xf411,	// (0x0003def0) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee5,	// (0x0003e9c4) cell_vkbss_key_3p_pane_g

0x7594,	// (0x00036073) bg_popup_fep_char_preview_window_cp02

0xf419,	// (0x0003def8) popup_fep_char_pre_window_t1

0xe70d,	// (0x0003d1ec) main_ai5_sk_pane

0xef23,	// (0x0003da02) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef2f,	// (0x0003da0e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef44,	// (0x0003da23) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef50,	// (0x0003da2f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb7,	// (0x0003e996) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef5c,	// (0x0003da3b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4ca2,	// (0x00033781) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf427,	// (0x0003df06) main_ai5_sk_pane_g1

0x7d36,	// (0x00036815) popup_query_code_window_g1

0xf31f,	// (0x0003ddfe) popup_fep_vkb_icf_pane

0xf33b,	// (0x0003de1a) popup_fep_vtchi_icf_pane

0xf430,	// (0x0003df0f) bg_icf_pane

0xf43c,	// (0x0003df1b) list_vkb_icf_pane

0xf448,	// (0x0003df27) bg_icf_pane_cp01

0xf45b,	// (0x0003df3a) vtchi_icf_list_pane

0xf46b,	// (0x0003df4a) list_vkb_icf_pane_t1_ParamLimits

0xf46b,	// (0x0003df4a) list_vkb_icf_pane_t1

0xf481,	// (0x0003df60) vtchi_icf_list_pane_t1_ParamLimits

0xf481,	// (0x0003df60) vtchi_icf_list_pane_t1

0xf30d,	// (0x0003ddec) popup_fep_ituss_window_ParamLimits

0xf33b,	// (0x0003de1a) popup_fep_vtchi_icf_pane_ParamLimits

0xf361,	// (0x0003de40) ituss_keypad_pane_ParamLimits

0x73de,	// (0x00035ebd) ituss_sks_pane

0xf430,	// (0x0003df0f) bg_icf_pane_ParamLimits

0xf2e5,	// (0x0003ddc4) icf_edit_indi_pane_ParamLimits

0xf2e5,	// (0x0003ddc4) icf_edit_indi_pane

0xf43c,	// (0x0003df1b) list_vkb_icf_pane_ParamLimits

0xf448,	// (0x0003df27) bg_icf_pane_cp01_ParamLimits

0xf2f8,	// (0x0003ddd7) icf_edit_indi_pane_cp01_ParamLimits

0xf2f8,	// (0x0003ddd7) icf_edit_indi_pane_cp01

0xf463,	// (0x0003df42) vtchi_query_pane

0xe599,	// (0x0003d078) icf_edit_indi_pane_g1_ParamLimits

0xe599,	// (0x0003d078) icf_edit_indi_pane_g1

0xf4c6,	// (0x0003dfa5) icf_edit_indi_pane_g2_ParamLimits

0xf4c6,	// (0x0003dfa5) icf_edit_indi_pane_g2

0x0001,

0xfefd,	// (0x0003e9dc) icf_edit_indi_pane_g_ParamLimits

0xfefd,	// (0x0003e9dc) icf_edit_indi_pane_g

0xf4d6,	// (0x0003dfb5) icf_edit_indi_pane_t1

0xf498,	// (0x0003df77) bg_input_focus_pane_cp042

0xf4a1,	// (0x0003df80) vtchi_button_pane

0xf4aa,	// (0x0003df89) vtchi_query_pane_t1

0xf4b8,	// (0x0003df97) vtchi_query_pane_t2

0xf502,	// (0x0003dfe1) vtchi_query_pane_t3

0x0002,

0xfeec,	// (0x0003e9cb) vtchi_query_pane_t

0x424c,	// (0x00032d2b) bg_button_pane_cp13

0xf510,	// (0x0003dfef) vtchi_button_pane_g1

0x750c,	// (0x00035feb) ituss_sks_pane_g1

0x7515,	// (0x00035ff4) ituss_sks_pane_g2

0x0001,

0xfef3,	// (0x0003e9d2) ituss_sks_pane_g

0xf518,	// (0x0003dff7) ituss_sks_pane_t1

0xf526,	// (0x0003e005) ituss_sks_pane_t2

0x0001,

0xfef8,	// (0x0003e9d7) ituss_sks_pane_t

0x92d6,	// (0x00037db5) indicator_nsta_pane_cp_g1

0x92df,	// (0x00037dbe) indicator_nsta_pane_cp_g2

0x92e7,	// (0x00037dc6) indicator_nsta_pane_cp_g3

0x92ef,	// (0x00037dce) indicator_nsta_pane_cp_g4

0x92f7,	// (0x00037dd6) indicator_nsta_pane_cp_g5

0x92ff,	// (0x00037dde) indicator_nsta_pane_cp_g6

0x0005,

0xfaa8,	// (0x0003e587) indicator_nsta_pane_cp_g

0x2957,	// (0x00031436) cell_graphic2_pane_t2_ParamLimits

0x2957,	// (0x00031436) cell_graphic2_pane_t2

0x0001,

0xfdae,	// (0x0003e88d) cell_graphic2_pane_t_ParamLimits

0xfdae,	// (0x0003e88d) cell_graphic2_pane_t

0x298f,	// (0x0003146e) cell_graphic2_control_pane_t1

0x1032,	// (0x0002fb11) signal_pane_g3_ParamLimits

0x1032,	// (0x0002fb11) signal_pane_g3

0x1046,	// (0x0002fb25) signal_pane_g4_ParamLimits

0x1046,	// (0x0002fb25) signal_pane_g4

0xf2cf,	// (0x0003ddae) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2cf,	// (0x0003ddae) cell_ai5_widget_list_row_pane_t3

0xf3ef,	// (0x0003dece) cell_ituss_key_pane_t1_ParamLimits

0xf3ef,	// (0x0003dece) cell_ituss_key_pane_t1

0x7a0c,	// (0x000364eb) form_field_data_wide_pane_vc_t2_ParamLimits

0x7a0c,	// (0x000364eb) form_field_data_wide_pane_vc_t2

0x7a1e,	// (0x000364fd) form_field_data_wide_pane_vc_t3_ParamLimits

0x7a1e,	// (0x000364fd) form_field_data_wide_pane_vc_t3

0x0002,

0xf802,	// (0x0003e2e1) form_field_data_wide_pane_vc_t_ParamLimits

0xf802,	// (0x0003e2e1) form_field_data_wide_pane_vc_t

0x902a,	// (0x00037b09) form_field_slider_wide_pane_vc_t3_ParamLimits

0x902a,	// (0x00037b09) form_field_slider_wide_pane_vc_t3

0x90e8,	// (0x00037bc7) form_field_popup_wide_pane_vc_t2_ParamLimits

0x90e8,	// (0x00037bc7) form_field_popup_wide_pane_vc_t2

0x90fd,	// (0x00037bdc) form_field_popup_wide_pane_vc_t3_ParamLimits

0x90fd,	// (0x00037bdc) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa97,	// (0x0003e576) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x0003e576) form_field_popup_wide_pane_vc_t

0xebed,	// (0x0003d6cc) aid_fshwr2_btn_pane_ParamLimits

0xec01,	// (0x0003d6e0) aid_fshwr2_syb_pane_ParamLimits

0xec15,	// (0x0003d6f4) aid_fshwr2_txt_pane_ParamLimits

0x4ca2,	// (0x00033781) fshwr2_bg_pane_ParamLimits

0xec25,	// (0x0003d704) fshwr2_func_candi_pane_ParamLimits

0xec3d,	// (0x0003d71c) fshwr2_hwr_syb_pane_ParamLimits

0xec55,	// (0x0003d734) fshwr2_icf_pane_ParamLimits

0x6528,	// (0x00035007) list_double_graphic_pane_vc_g4_ParamLimits

0x6528,	// (0x00035007) list_double_graphic_pane_vc_g4

0x743b,	// (0x00035f1a) cell_ituss_key_pane_g3_ParamLimits

0x743b,	// (0x00035f1a) cell_ituss_key_pane_g3

0x74df,	// (0x00035fbe) cell_ituss_key_t5_ParamLimits

0x74df,	// (0x00035fbe) cell_ituss_key_t5

0xf32e,	// (0x0003de0d) popup_fep_vkbss_window_ParamLimits

0xe717,	// (0x0003d1f6) aid_cell_ai5_quarter

0xf4d6,	// (0x0003dfb5) icf_edit_indi_pane_t1_ParamLimits

0x4824,	// (0x00033303) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x4824,	// (0x00033303) aid_tch_indicator_popup_pane_cp2

0x4837,	// (0x00033316) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x4837,	// (0x00033316) aid_tch_query_popup_data_pane_cp2

0x7cde,	// (0x000367bd) aid_tch_query_popup_pane_ParamLimits

0x7cde,	// (0x000367bd) aid_tch_query_popup_pane

0x7cde,	// (0x000367bd) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x7cde,	// (0x000367bd) aid_tch_query_popup_data_pane_cp1

0x5b78,	// (0x00034657) cell_fshwr2_syb_bg_pane_ParamLimits

0xed6c,	// (0x0003d84b) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xed7c,	// (0x0003d85b) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf31f,	// (0x0003ddfe) popup_fep_vkb_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Large

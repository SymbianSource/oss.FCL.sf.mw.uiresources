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

#include "aknlayoutscalable_abrw_pqp_av_qvga_prt_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0001dd7c };

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
0x9856,	// (0x000275d2) Screen

0x9860,	// (0x000275dc) application_window_ParamLimits

0x9860,	// (0x000275dc) application_window

0x4a7b,	// (0x000227f7) screen_g1

0x98a9,	// (0x00027625) area_bottom_pane_ParamLimits

0x98a9,	// (0x00027625) area_bottom_pane

0x4a85,	// (0x00022801) area_top_pane_ParamLimits

0x4a85,	// (0x00022801) area_top_pane

0x9961,	// (0x000276dd) main_pane_ParamLimits

0x9961,	// (0x000276dd) main_pane

0x4afd,	// (0x00022879) misc_graphics

0xacad,	// (0x00028a29) battery_pane_ParamLimits

0xacad,	// (0x00028a29) battery_pane

0x65c4,	// (0x00024340) bg_status_flat_pane_g8

0x65cc,	// (0x00024348) bg_status_flat_pane_g9

0x5cdd,	// (0x00023a59) context_pane_ParamLimits

0x5cdd,	// (0x00023a59) context_pane

0xaddf,	// (0x00028b5b) navi_pane_ParamLimits

0xaddf,	// (0x00028b5b) navi_pane

0xae4b,	// (0x00028bc7) signal_pane_ParamLimits

0xae4b,	// (0x00028bc7) signal_pane

0x0008,

0xf874,	// (0x0002d5f0) bg_status_flat_pane_g

0xaeac,	// (0x00028c28) status_pane_g1_ParamLimits

0xaeac,	// (0x00028c28) status_pane_g1

0x5ef7,	// (0x00023c73) status_pane_g2_ParamLimits

0x5ef7,	// (0x00023c73) status_pane_g2

0x5d43,	// (0x00023abf) status_pane_g3_ParamLimits

0x5d43,	// (0x00023abf) status_pane_g3

0x0004,

0xf79b,	// (0x0002d517) status_pane_g_ParamLimits

0xf79b,	// (0x0002d517) status_pane_g

0xaeb8,	// (0x00028c34) title_pane_ParamLimits

0xaeb8,	// (0x00028c34) title_pane

0xaef5,	// (0x00028c71) uni_indicator_pane_ParamLimits

0xaef5,	// (0x00028c71) uni_indicator_pane

0x5c34,	// (0x000239b0) bg_list_pane_ParamLimits

0x5c34,	// (0x000239b0) bg_list_pane

0xda98,	// (0x0002b814) find_pane

0xa7ae,	// (0x0002852a) listscroll_app_pane_ParamLimits

0xa7ae,	// (0x0002852a) listscroll_app_pane

0x5c54,	// (0x000239d0) listscroll_form_pane

0xdaa0,	// (0x0002b81c) listscroll_gen_pane_ParamLimits

0xdaa0,	// (0x0002b81c) listscroll_gen_pane

0xa7ba,	// (0x00028536) listscroll_set_pane

0x9ee5,	// (0x00027c61) main_idle_act_pane

0x5a9f,	// (0x0002381b) main_idle_trad_pane

0x5a9f,	// (0x0002381b) main_list_empty_pane

0x5281,	// (0x00022ffd) main_midp_pane

0x5c6e,	// (0x000239ea) main_pane_g1_ParamLimits

0x5c6e,	// (0x000239ea) main_pane_g1

0xa7d0,	// (0x0002854c) popup_ai_message_window_ParamLimits

0xa7d0,	// (0x0002854c) popup_ai_message_window

0xa866,	// (0x000285e2) popup_fep_china_uni_window_ParamLimits

0xa866,	// (0x000285e2) popup_fep_china_uni_window

0xa8a4,	// (0x00028620) popup_fep_japan_candidate_window_ParamLimits

0xa8a4,	// (0x00028620) popup_fep_japan_candidate_window

0xa8c2,	// (0x0002863e) popup_fep_japan_predictive_window_ParamLimits

0xa8c2,	// (0x0002863e) popup_fep_japan_predictive_window

0xa8ee,	// (0x0002866a) popup_find_window

0xa8fb,	// (0x00028677) popup_grid_graphic_window_ParamLimits

0xa8fb,	// (0x00028677) popup_grid_graphic_window

0xa919,	// (0x00028695) popup_large_graphic_colour_window

0xa938,	// (0x000286b4) popup_menu_window_ParamLimits

0xa938,	// (0x000286b4) popup_menu_window

0xaa70,	// (0x000287ec) popup_note_image_window

0xaa5e,	// (0x000287da) popup_note_wait_window_ParamLimits

0xaa5e,	// (0x000287da) popup_note_wait_window

0xaa5e,	// (0x000287da) popup_note_window_ParamLimits

0xaa5e,	// (0x000287da) popup_note_window

0xaac4,	// (0x00028840) popup_query_code_window_ParamLimits

0xaac4,	// (0x00028840) popup_query_code_window

0xaad6,	// (0x00028852) popup_query_data_code_window_ParamLimits

0xaad6,	// (0x00028852) popup_query_data_code_window

0xaaeb,	// (0x00028867) popup_query_data_window_ParamLimits

0xaaeb,	// (0x00028867) popup_query_data_window

0xab01,	// (0x0002887d) popup_query_sat_info_window_ParamLimits

0xab01,	// (0x0002887d) popup_query_sat_info_window

0xab32,	// (0x000288ae) popup_snote_single_graphic_window_ParamLimits

0xab32,	// (0x000288ae) popup_snote_single_graphic_window

0xab32,	// (0x000288ae) popup_snote_single_text_window_ParamLimits

0xab32,	// (0x000288ae) popup_snote_single_text_window

0xab45,	// (0x000288c1) popup_sub_window_general

0xac49,	// (0x000289c5) popup_window_general_ParamLimits

0xac49,	// (0x000289c5) popup_window_general

0x5c7c,	// (0x000239f8) power_save_pane

0xa623,	// (0x0002839f) control_pane_g1_ParamLimits

0xa623,	// (0x0002839f) control_pane_g1

0xa644,	// (0x000283c0) control_pane_g2_ParamLimits

0xa644,	// (0x000283c0) control_pane_g2

0x5c26,	// (0x000239a2) control_pane_g3_ParamLimits

0x5c26,	// (0x000239a2) control_pane_g3

0x0007,

0xf783,	// (0x0002d4ff) control_pane_g_ParamLimits

0xf783,	// (0x0002d4ff) control_pane_g

0xa6ad,	// (0x00028429) control_pane_t1_ParamLimits

0xa6ad,	// (0x00028429) control_pane_t1

0xa6ff,	// (0x0002847b) control_pane_t2_ParamLimits

0xa6ff,	// (0x0002847b) control_pane_t2

0x0002,

0xf794,	// (0x0002d510) control_pane_t_ParamLimits

0xf794,	// (0x0002d510) control_pane_t

0x5bce,	// (0x0002394a) navi_navi_volume_pane_cp1

0x5bd6,	// (0x00023952) status_small_icon_pane

0x5bde,	// (0x0002395a) status_small_pane_g1_ParamLimits

0x5bde,	// (0x0002395a) status_small_pane_g1

0xa5a2,	// (0x0002831e) status_small_pane_g2_ParamLimits

0xa5a2,	// (0x0002831e) status_small_pane_g2

0xa5ae,	// (0x0002832a) status_small_pane_g3_ParamLimits

0xa5ae,	// (0x0002832a) status_small_pane_g3

0xa5ba,	// (0x00028336) status_small_pane_g4_ParamLimits

0xa5ba,	// (0x00028336) status_small_pane_g4

0xa5c6,	// (0x00028342) status_small_pane_g5_ParamLimits

0xa5c6,	// (0x00028342) status_small_pane_g5

0x5c12,	// (0x0002398e) status_small_pane_g6_ParamLimits

0x5c12,	// (0x0002398e) status_small_pane_g6

0x0007,

0xf772,	// (0x0002d4ee) status_small_pane_g_ParamLimits

0xf772,	// (0x0002d4ee) status_small_pane_g

0xa5f5,	// (0x00028371) status_small_pane_t1

0xa60f,	// (0x0002838b) status_small_wait_pane_ParamLimits

0xa60f,	// (0x0002838b) status_small_wait_pane

0xa200,	// (0x00027f7c) aid_levels_signal_ParamLimits

0xa200,	// (0x00027f7c) aid_levels_signal

0xa211,	// (0x00027f8d) signal_pane_g1_ParamLimits

0xa211,	// (0x00027f8d) signal_pane_g1

0xa227,	// (0x00027fa3) signal_pane_g2_ParamLimits

0xa227,	// (0x00027fa3) signal_pane_g2

0x0003,

0xf703,	// (0x0002d47f) signal_pane_g_ParamLimits

0xf703,	// (0x0002d47f) signal_pane_g

0x5644,	// (0x000233c0) context_pane_g1

0x9b60,	// (0x000278dc) title_pane_g1

0x9b8a,	// (0x00027906) title_pane_t1

0x4b13,	// (0x0002288f) title_pane_t2

0x4b39,	// (0x000228b5) title_pane_t3

0x0002,

0xf557,	// (0x0002d2d3) title_pane_t

0xaf0b,	// (0x00028c87) aid_levels_battery_ParamLimits

0xaf0b,	// (0x00028c87) aid_levels_battery

0xaf1e,	// (0x00028c9a) battery_pane_g1_ParamLimits

0xaf1e,	// (0x00028c9a) battery_pane_g1

0xaf33,	// (0x00028caf) battery_pane_g2_ParamLimits

0xaf33,	// (0x00028caf) battery_pane_g2

0x0001,

0xf7a6,	// (0x0002d522) battery_pane_g_ParamLimits

0xf7a6,	// (0x0002d522) battery_pane_g

0xb314,	// (0x00029090) uni_indicator_pane_g1

0xb32a,	// (0x000290a6) uni_indicator_pane_g2

0xb340,	// (0x000290bc) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0002d698) uni_indicator_pane_g

0x51a7,	// (0x00022f23) navi_icon_pane_ParamLimits

0x51a7,	// (0x00022f23) navi_icon_pane

0x4afd,	// (0x00022879) navi_midp_pane

0x4afd,	// (0x00022879) navi_navi_pane

0x51a7,	// (0x00022f23) navi_text_pane_ParamLimits

0x51a7,	// (0x00022f23) navi_text_pane

0x4a7b,	// (0x000227f7) status_small_wait_pane_g1

0x4e4e,	// (0x00022bca) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0002d693) status_small_wait_pane_g

0x6fba,	// (0x00024d36) navi_navi_icon_text_pane

0x6fd4,	// (0x00024d50) navi_navi_pane_g1_ParamLimits

0x6fd4,	// (0x00024d50) navi_navi_pane_g1

0x6fc2,	// (0x00024d3e) navi_navi_pane_g2_ParamLimits

0x6fc2,	// (0x00024d3e) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0002d661) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0002d661) navi_navi_pane_g

0x6fe6,	// (0x00024d62) navi_navi_tabs_pane

0x6fba,	// (0x00024d36) navi_navi_text_pane

0x6fba,	// (0x00024d36) navi_navi_volume_pane

0x6b0a,	// (0x00024886) navi_text_pane_t1

0x6afe,	// (0x0002487a) navi_icon_pane_g1

0x6a52,	// (0x000247ce) navi_navi_text_pane_t1

0xb2de,	// (0x0002905a) navi_navi_volume_pane_g1

0xb2e6,	// (0x00029062) volume_small_pane

0xb250,	// (0x00028fcc) navi_navi_icon_text_pane_g1

0xb258,	// (0x00028fd4) navi_navi_icon_text_pane_t1

0x660c,	// (0x00024388) navi_tabs_2_long_pane

0x660c,	// (0x00024388) navi_tabs_2_pane

0x660c,	// (0x00024388) navi_tabs_3_long_pane

0x660c,	// (0x00024388) navi_tabs_3_pane

0x660c,	// (0x00024388) navi_tabs_4_pane

0xb230,	// (0x00028fac) tabs_2_active_pane_ParamLimits

0xb230,	// (0x00028fac) tabs_2_active_pane

0xb240,	// (0x00028fbc) tabs_2_passive_pane_ParamLimits

0xb240,	// (0x00028fbc) tabs_2_passive_pane

0xb1fe,	// (0x00028f7a) tabs_3_active_pane_ParamLimits

0xb1fe,	// (0x00028f7a) tabs_3_active_pane

0xb20e,	// (0x00028f8a) tabs_3_passive_pane_ParamLimits

0xb20e,	// (0x00028f8a) tabs_3_passive_pane

0xb21f,	// (0x00028f9b) tabs_3_passive_pane_cp_ParamLimits

0xb21f,	// (0x00028f9b) tabs_3_passive_pane_cp

0xb1ba,	// (0x00028f36) tabs_4_active_pane_ParamLimits

0xb1ba,	// (0x00028f36) tabs_4_active_pane

0xb1cb,	// (0x00028f47) tabs_4_passive_pane_ParamLimits

0xb1cb,	// (0x00028f47) tabs_4_passive_pane

0xb1dc,	// (0x00028f58) tabs_4_passive_pane_cp_ParamLimits

0xb1dc,	// (0x00028f58) tabs_4_passive_pane_cp

0xb1ed,	// (0x00028f69) tabs_4_passive_pane_cp2_ParamLimits

0xb1ed,	// (0x00028f69) tabs_4_passive_pane_cp2

0xb19a,	// (0x00028f16) tabs_2_long_active_pane_ParamLimits

0xb19a,	// (0x00028f16) tabs_2_long_active_pane

0xb1aa,	// (0x00028f26) tabs_2_long_passive_pane_ParamLimits

0xb1aa,	// (0x00028f26) tabs_2_long_passive_pane

0xb165,	// (0x00028ee1) tabs_3_long_active_pane_ParamLimits

0xb165,	// (0x00028ee1) tabs_3_long_active_pane

0xb176,	// (0x00028ef2) tabs_3_long_passive_pane_ParamLimits

0xb176,	// (0x00028ef2) tabs_3_long_passive_pane

0xb189,	// (0x00028f05) tabs_3_long_passive_pane_cp_ParamLimits

0xb189,	// (0x00028f05) tabs_3_long_passive_pane_cp

0xb10b,	// (0x00028e87) volume_small_pane_g1

0xb114,	// (0x00028e90) volume_small_pane_g2

0xb11d,	// (0x00028e99) volume_small_pane_g3

0xb126,	// (0x00028ea2) volume_small_pane_g4

0xb12f,	// (0x00028eab) volume_small_pane_g5

0xb138,	// (0x00028eb4) volume_small_pane_g6

0xb141,	// (0x00028ebd) volume_small_pane_g7

0xb14a,	// (0x00028ec6) volume_small_pane_g8

0xb153,	// (0x00028ecf) volume_small_pane_g9

0xb15c,	// (0x00028ed8) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0002d62d) volume_small_pane_g

0x4b61,	// (0x000228dd) bg_active_tab_pane_cp2_ParamLimits

0x4b61,	// (0x000228dd) bg_active_tab_pane_cp2

0x4b59,	// (0x000228d5) tabs_3_active_pane_g1

0x9bf2,	// (0x0002796e) tabs_3_active_pane_t1

0x4b61,	// (0x000228dd) bg_passive_tab_pane_cp2_ParamLimits

0x4b61,	// (0x000228dd) bg_passive_tab_pane_cp2

0x4b59,	// (0x000228d5) tabs_3_passive_pane_g1

0x9bf2,	// (0x0002796e) tabs_3_passive_pane_t1

0x4b61,	// (0x000228dd) bg_active_tab_pane_cp3_ParamLimits

0x4b61,	// (0x000228dd) bg_active_tab_pane_cp3

0x9c04,	// (0x00027980) tabs_4_active_pane_g1

0x9c0c,	// (0x00027988) tabs_4_active_pane_t1

0x4b61,	// (0x000228dd) bg_passive_tab_pane_cp3_ParamLimits

0x4b61,	// (0x000228dd) bg_passive_tab_pane_cp3

0x9c04,	// (0x00027980) tabs_4_1_passive_pane_g1

0x9c0c,	// (0x00027988) tabs_4_1_passive_pane_t1

0x5281,	// (0x00022ffd) list_highlight_pane_cp2

0xb45d,	// (0x000291d9) list_set_pane_ParamLimits

0xb45d,	// (0x000291d9) list_set_pane

0xb4eb,	// (0x00029267) main_pane_set_t1_ParamLimits

0xb4eb,	// (0x00029267) main_pane_set_t1

0xb50b,	// (0x00029287) main_pane_set_t2_ParamLimits

0xb50b,	// (0x00029287) main_pane_set_t2

0xb51d,	// (0x00029299) main_pane_set_t3_ParamLimits

0xb51d,	// (0x00029299) main_pane_set_t3

0xb52f,	// (0x000292ab) main_pane_set_t4_ParamLimits

0xb52f,	// (0x000292ab) main_pane_set_t4

0x0003,

0xf981,	// (0x0002d6fd) main_pane_set_t_ParamLimits

0xf981,	// (0x0002d6fd) main_pane_set_t

0xb541,	// (0x000292bd) setting_code_pane

0xb549,	// (0x000292c5) setting_slider_graphic_pane

0xb549,	// (0x000292c5) setting_slider_pane

0xb549,	// (0x000292c5) setting_text_pane

0xb549,	// (0x000292c5) setting_volume_pane

0x9c1e,	// (0x0002799a) volume_set_pane

0x4b61,	// (0x000228dd) bg_set_opt_pane_cp

0x9c26,	// (0x000279a2) setting_slider_pane_t1

0x9c3c,	// (0x000279b8) setting_slider_pane_t2

0x9c55,	// (0x000279d1) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002d2da) setting_slider_pane_t

0x9c6c,	// (0x000279e8) slider_set_pane

0x4afd,	// (0x00022879) bg_set_opt_pane_cp2

0x4b6f,	// (0x000228eb) setting_slider_graphic_pane_g1

0x9c82,	// (0x000279fe) setting_slider_graphic_pane_t1

0x9c91,	// (0x00027a0d) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002d2e1) setting_slider_graphic_pane_t

0x9ca0,	// (0x00027a1c) slider_set_pane_cp

0x4afd,	// (0x00022879) input_focus_pane_cp1

0x6f46,	// (0x00024cc2) list_set_text_pane

0x4a7b,	// (0x000227f7) setting_text_pane_g1

0x4afd,	// (0x00022879) input_focus_pane_cp2

0x4a7b,	// (0x000227f7) setting_code_pane_g1

0x4b78,	// (0x000228f4) setting_code_pane_t1

0xd37e,	// (0x0002b0fa) set_text_pane_t1_ParamLimits

0xd37e,	// (0x0002b0fa) set_text_pane_t1

0x5156,	// (0x00022ed2) set_opt_bg_pane_g1

0x515e,	// (0x00022eda) set_opt_bg_pane_g2

0xb41d,	// (0x00029199) set_opt_bg_pane_g3

0x516e,	// (0x00022eea) set_opt_bg_pane_g4

0x5176,	// (0x00022ef2) set_opt_bg_pane_g5

0x517e,	// (0x00022efa) set_opt_bg_pane_g6

0xb425,	// (0x000291a1) set_opt_bg_pane_g7

0xb42d,	// (0x000291a9) set_opt_bg_pane_g8

0xb435,	// (0x000291b1) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0002d6ea) set_opt_bg_pane_g

0x6f39,	// (0x00024cb5) slider_set_pane_g1

0xb3b9,	// (0x00029135) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0002d6db) slider_set_pane_g

0xb355,	// (0x000290d1) volume_set_pane_g1

0xb35d,	// (0x000290d9) volume_set_pane_g2

0xb365,	// (0x000290e1) volume_set_pane_g3

0xb36d,	// (0x000290e9) volume_set_pane_g4

0xb375,	// (0x000290f1) volume_set_pane_g5

0xb37d,	// (0x000290f9) volume_set_pane_g6

0xb385,	// (0x00029101) volume_set_pane_g7

0xb38d,	// (0x00029109) volume_set_pane_g8

0xb395,	// (0x00029111) volume_set_pane_g9

0xb39d,	// (0x00029119) volume_set_pane_g10

0x0009,

0xf937,	// (0x0002d6b3) volume_set_pane_g

0x9ca8,	// (0x00027a24) indicator_pane_ParamLimits

0x9ca8,	// (0x00027a24) indicator_pane

0x9cb4,	// (0x00027a30) main_idle_pane_g2_ParamLimits

0x9cb4,	// (0x00027a30) main_idle_pane_g2

0x9cd8,	// (0x00027a54) main_pane_idle_g1_ParamLimits

0x9cd8,	// (0x00027a54) main_pane_idle_g1

0x4b86,	// (0x00022902) popup_clock_digital_analogue_window_ParamLimits

0x4b86,	// (0x00022902) popup_clock_digital_analogue_window

0x9ce5,	// (0x00027a61) soft_indicator_pane_ParamLimits

0x9ce5,	// (0x00027a61) soft_indicator_pane

0x9cf1,	// (0x00027a6d) wallpaper_pane_ParamLimits

0x9cf1,	// (0x00027a6d) wallpaper_pane

0x4a7b,	// (0x000227f7) wallpaper_pane_g1

0x9cfd,	// (0x00027a79) indicator_pane_g1_ParamLimits

0x9cfd,	// (0x00027a79) indicator_pane_g1

0x70c1,	// (0x00024e3d) navi_navi_icon_text_pane_srt_g1

0x4bb4,	// (0x00022930) soft_indicator_pane_t1

0x4bce,	// (0x0002294a) aid_ps_area_pane

0x9d09,	// (0x00027a85) aid_ps_clock_pane

0x4bdf,	// (0x0002295b) aid_ps_indicator_pane

0x4beb,	// (0x00022967) indicator_ps_pane_ParamLimits

0x4beb,	// (0x00022967) indicator_ps_pane

0x4bfa,	// (0x00022976) power_save_pane_g1_ParamLimits

0x4bfa,	// (0x00022976) power_save_pane_g1

0x4c06,	// (0x00022982) power_save_pane_g2_ParamLimits

0x4c06,	// (0x00022982) power_save_pane_g2

0x986e,	// (0x000275ea) aid_navinavi_width_pane

0x4bce,	// (0x0002294a) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002d2e6) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002d2e6) power_save_pane_g

0x4c14,	// (0x00022990) power_save_pane_t1_ParamLimits

0x4c14,	// (0x00022990) power_save_pane_t1

0x9d09,	// (0x00027a85) aid_ps_clock_pane_ParamLimits

0x4bdf,	// (0x0002295b) aid_ps_indicator_pane_ParamLimits

0x4c26,	// (0x000229a2) power_save_pane_t4_ParamLimits

0x4c26,	// (0x000229a2) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002d2eb) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002d2eb) power_save_pane_t

0x4c50,	// (0x000229cc) power_save_t3_ParamLimits

0x4c50,	// (0x000229cc) power_save_t3

0x4c3b,	// (0x000229b7) power_save_t2_ParamLimits

0x4c3b,	// (0x000229b7) power_save_t2

0x4c65,	// (0x000229e1) indicator_ps_pane_g1

0x9d15,	// (0x00027a91) ai_gene_pane_ParamLimits

0x9d15,	// (0x00027a91) ai_gene_pane

0x9d21,	// (0x00027a9d) ai_links_pane_ParamLimits

0x9d21,	// (0x00027a9d) ai_links_pane

0x9d2d,	// (0x00027aa9) indicator_pane_cp1_ParamLimits

0x9d2d,	// (0x00027aa9) indicator_pane_cp1

0x9d39,	// (0x00027ab5) main_pane_idle_g1_cp_ParamLimits

0x9d39,	// (0x00027ab5) main_pane_idle_g1_cp

0x4c6e,	// (0x000229ea) popup_ai_links_title_window

0x9d45,	// (0x00027ac1) soft_indicator_pane_cp1_ParamLimits

0x9d45,	// (0x00027ac1) soft_indicator_pane_cp1

0x6d8f,	// (0x00024b0b) ai_links_pane_g1

0x6d98,	// (0x00024b14) grid_ai_links_pane

0xb30b,	// (0x00029087) ai_gene_pane_1

0x6d7d,	// (0x00024af9) ai_gene_pane_2

0x6d86,	// (0x00024b02) list_highlight_pane_cp4

0xb2ef,	// (0x0002906b) cell_ai_link_pane_ParamLimits

0xb2ef,	// (0x0002906b) cell_ai_link_pane

0x6d75,	// (0x00024af1) cell_ai_link_pane_g1

0x4e4e,	// (0x00022bca) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0002d68e) cell_ai_link_pane_g

0x4afd,	// (0x00022879) grid_highlight_cp2

0x4afd,	// (0x00022879) bg_popup_sub_pane_cp1

0x4c85,	// (0x00022a01) popup_ai_links_title_window_t1

0x6cc7,	// (0x00024a43) ai_gene_pane_1_g1_ParamLimits

0x6cc7,	// (0x00024a43) ai_gene_pane_1_g1

0x6cd3,	// (0x00024a4f) ai_gene_pane_1_g2_ParamLimits

0x6cd3,	// (0x00024a4f) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0002d684) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0002d684) ai_gene_pane_1_g

0x6ce0,	// (0x00024a5c) ai_gene_pane_1_t1_ParamLimits

0x6ce0,	// (0x00024a5c) ai_gene_pane_1_t1

0x6d14,	// (0x00024a90) grid_ai_soft_ind_pane

0x6cb2,	// (0x00024a2e) ai_gene_pane_2_t1_ParamLimits

0x6cb2,	// (0x00024a2e) ai_gene_pane_2_t1

0x9d51,	// (0x00027acd) main_pane_empty_t1_ParamLimits

0x9d51,	// (0x00027acd) main_pane_empty_t1

0x9d6e,	// (0x00027aea) main_pane_empty_t2_ParamLimits

0x9d6e,	// (0x00027aea) main_pane_empty_t2

0x9d86,	// (0x00027b02) main_pane_empty_t3_ParamLimits

0x9d86,	// (0x00027b02) main_pane_empty_t3

0x9d99,	// (0x00027b15) main_pane_empty_t4_ParamLimits

0x9d99,	// (0x00027b15) main_pane_empty_t4

0x9dac,	// (0x00027b28) main_pane_empty_t5_ParamLimits

0x9dac,	// (0x00027b28) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002d2f0) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002d2f0) main_pane_empty_t

0x51a7,	// (0x00022f23) bg_popup_window_pane_ParamLimits

0x51a7,	// (0x00022f23) bg_popup_window_pane

0x6a61,	// (0x000247dd) find_popup_pane_cp2_ParamLimits

0x6a61,	// (0x000247dd) find_popup_pane_cp2

0x6a6d,	// (0x000247e9) heading_pane_ParamLimits

0x6a6d,	// (0x000247e9) heading_pane

0x4afd,	// (0x00022879) bg_popup_sub_pane

0xb272,	// (0x00028fee) bg_popup_window_pane_g1_ParamLimits

0xb272,	// (0x00028fee) bg_popup_window_pane_g1

0xb27e,	// (0x00028ffa) bg_popup_window_pane_g2_ParamLimits

0xb27e,	// (0x00028ffa) bg_popup_window_pane_g2

0xb28a,	// (0x00029006) bg_popup_window_pane_g3_ParamLimits

0xb28a,	// (0x00029006) bg_popup_window_pane_g3

0xb296,	// (0x00029012) bg_popup_window_pane_g4_ParamLimits

0xb296,	// (0x00029012) bg_popup_window_pane_g4

0xb2a2,	// (0x0002901e) bg_popup_window_pane_g5_ParamLimits

0xb2a2,	// (0x0002901e) bg_popup_window_pane_g5

0xb2ae,	// (0x0002902a) bg_popup_window_pane_g6_ParamLimits

0xb2ae,	// (0x0002902a) bg_popup_window_pane_g6

0xb2ba,	// (0x00029036) bg_popup_window_pane_g7_ParamLimits

0xb2ba,	// (0x00029036) bg_popup_window_pane_g7

0xb2c6,	// (0x00029042) bg_popup_window_pane_g8_ParamLimits

0xb2c6,	// (0x00029042) bg_popup_window_pane_g8

0xb2d2,	// (0x0002904e) bg_popup_window_pane_g9_ParamLimits

0xb2d2,	// (0x0002904e) bg_popup_window_pane_g9

0x6a46,	// (0x000247c2) bg_popup_window_pane_g10_ParamLimits

0x6a46,	// (0x000247c2) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0002d64c) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0002d64c) bg_popup_window_pane_g

0x69fd,	// (0x00024779) bg_popup_heading_pane_ParamLimits

0x69fd,	// (0x00024779) bg_popup_heading_pane

0xb6ab,	// (0x00029427) tabs_4_passive_pane_cp_srt_ParamLimits

0xb6ab,	// (0x00029427) tabs_4_passive_pane_cp_srt

0xb6bd,	// (0x00029439) tabs_4_passive_pane_srt_ParamLimits

0x6a11,	// (0x0002478d) heading_pane_g2

0xb6bd,	// (0x00029439) tabs_4_passive_pane_srt

0x5281,	// (0x00022ffd) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5281,	// (0x00022ffd) bg_passive_tab_pane_cp3_srt

0x6a19,	// (0x00024795) heading_pane_t1_ParamLimits

0x6a19,	// (0x00024795) heading_pane_t1

0x6a30,	// (0x000247ac) heading_pane_t2_ParamLimits

0x6a30,	// (0x000247ac) heading_pane_t2

0x0001,

0xf8cb,	// (0x0002d647) heading_pane_t_ParamLimits

0xf8cb,	// (0x0002d647) heading_pane_t

0x658c,	// (0x00024308) bg_popup_heading_pane_g1

0x661d,	// (0x00024399) bg_popup_heading_pane_g2

0x6625,	// (0x000243a1) bg_popup_heading_pane_g3

0x662d,	// (0x000243a9) bg_popup_heading_pane_g4

0x6635,	// (0x000243b1) bg_popup_heading_pane_g5

0x663d,	// (0x000243b9) bg_popup_heading_pane_g6

0x6645,	// (0x000243c1) bg_popup_heading_pane_g7

0x664d,	// (0x000243c9) bg_popup_heading_pane_g8

0x6655,	// (0x000243d1) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0002d603) bg_popup_heading_pane_g

0x5e2b,	// (0x00023ba7) bg_popup_sub_pane_g1

0x5e33,	// (0x00023baf) bg_popup_sub_pane_g2

0x5e3b,	// (0x00023bb7) bg_popup_sub_pane_g3

0x5e43,	// (0x00023bbf) bg_popup_sub_pane_g4

0x5e4b,	// (0x00023bc7) bg_popup_sub_pane_g5

0x5e53,	// (0x00023bcf) bg_popup_sub_pane_g6

0x5e5b,	// (0x00023bd7) bg_popup_sub_pane_g7

0x5e63,	// (0x00023bdf) bg_popup_sub_pane_g8

0x5e6b,	// (0x00023be7) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0002d5dd) bg_popup_sub_pane_g

0x4b4b,	// (0x000228c7) bg_popup_window_pane_cp5_ParamLimits

0x4b4b,	// (0x000228c7) bg_popup_window_pane_cp5

0x4ca2,	// (0x00022a1e) popup_note_window_g1_ParamLimits

0x4ca2,	// (0x00022a1e) popup_note_window_g1

0x4cae,	// (0x00022a2a) popup_note_window_t1_ParamLimits

0x4cae,	// (0x00022a2a) popup_note_window_t1

0x4cc4,	// (0x00022a40) popup_note_window_t2_ParamLimits

0x4cc4,	// (0x00022a40) popup_note_window_t2

0x4cda,	// (0x00022a56) popup_note_window_t3_ParamLimits

0x4cda,	// (0x00022a56) popup_note_window_t3

0x4cf0,	// (0x00022a6c) popup_note_window_t4_ParamLimits

0x4cf0,	// (0x00022a6c) popup_note_window_t4

0x4d18,	// (0x00022a94) popup_note_window_t5_ParamLimits

0x4d18,	// (0x00022a94) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002d2fb) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002d2fb) popup_note_window_t

0x4d62,	// (0x00022ade) bg_popup_window_pane_cp6_ParamLimits

0x4d62,	// (0x00022ade) bg_popup_window_pane_cp6

0x6508,	// (0x00024284) popup_note_image_window_g1_ParamLimits

0x6508,	// (0x00024284) popup_note_image_window_g1

0x6514,	// (0x00024290) popup_note_image_window_g2_ParamLimits

0x6514,	// (0x00024290) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0002d5d1) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0002d5d1) popup_note_image_window_g

0x652d,	// (0x000242a9) popup_note_image_window_t1_ParamLimits

0x652d,	// (0x000242a9) popup_note_image_window_t1

0x6546,	// (0x000242c2) popup_note_image_window_t2_ParamLimits

0x6546,	// (0x000242c2) popup_note_image_window_t2

0x655f,	// (0x000242db) popup_note_image_window_t3_ParamLimits

0x655f,	// (0x000242db) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0002d5d6) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0002d5d6) popup_note_image_window_t

0x63f3,	// (0x0002416f) bg_popup_window_pane_cp7_ParamLimits

0x63f3,	// (0x0002416f) bg_popup_window_pane_cp7

0x6423,	// (0x0002419f) popup_note_wait_window_g1_ParamLimits

0x6423,	// (0x0002419f) popup_note_wait_window_g1

0x642f,	// (0x000241ab) popup_note_wait_window_g2_ParamLimits

0x642f,	// (0x000241ab) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0002d5bf) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0002d5bf) popup_note_wait_window_g

0x6447,	// (0x000241c3) popup_note_wait_window_t1_ParamLimits

0x6447,	// (0x000241c3) popup_note_wait_window_t1

0x646e,	// (0x000241ea) popup_note_wait_window_t2_ParamLimits

0x646e,	// (0x000241ea) popup_note_wait_window_t2

0x648b,	// (0x00024207) popup_note_wait_window_t3_ParamLimits

0x648b,	// (0x00024207) popup_note_wait_window_t3

0x649e,	// (0x0002421a) popup_note_wait_window_t4_ParamLimits

0x649e,	// (0x0002421a) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0002d5c6) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0002d5c6) popup_note_wait_window_t

0x64c3,	// (0x0002423f) wait_bar_pane_ParamLimits

0x64c3,	// (0x0002423f) wait_bar_pane

0x4afd,	// (0x00022879) wait_anim_pane

0x4afd,	// (0x00022879) wait_border_pane

0x4a7b,	// (0x000227f7) wait_anim_pane_g1

0x4a7b,	// (0x000227f7) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0002d47a) wait_anim_pane_g

0x63a3,	// (0x0002411f) wait_border_pane_g1

0x63ac,	// (0x00024128) wait_border_pane_g2

0x63b5,	// (0x00024131) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0002d5b8) wait_border_pane_g

0x6213,	// (0x00023f8f) bg_popup_window_pane_cp16_ParamLimits

0x6213,	// (0x00023f8f) bg_popup_window_pane_cp16

0x6313,	// (0x0002408f) indicator_popup_pane_cp4_ParamLimits

0x6313,	// (0x0002408f) indicator_popup_pane_cp4

0x6327,	// (0x000240a3) popup_query_data_window_t1_ParamLimits

0x6327,	// (0x000240a3) popup_query_data_window_t1

0x6339,	// (0x000240b5) popup_query_data_window_t2_ParamLimits

0x6339,	// (0x000240b5) popup_query_data_window_t2

0x6352,	// (0x000240ce) popup_query_data_window_t3_ParamLimits

0x6352,	// (0x000240ce) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0002d5b1) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0002d5b1) popup_query_data_window_t

0x636c,	// (0x000240e8) query_popup_data_pane_ParamLimits

0x636c,	// (0x000240e8) query_popup_data_pane

0x6380,	// (0x000240fc) query_popup_data_pane_cp1_ParamLimits

0x6380,	// (0x000240fc) query_popup_data_pane_cp1

0x6213,	// (0x00023f8f) bg_popup_window_pane_cp10_ParamLimits

0x6213,	// (0x00023f8f) bg_popup_window_pane_cp10

0x6245,	// (0x00023fc1) indicator_popup_pane_ParamLimits

0x6245,	// (0x00023fc1) indicator_popup_pane

0x6267,	// (0x00023fe3) popup_query_code_window_t1_ParamLimits

0x6267,	// (0x00023fe3) popup_query_code_window_t1

0x6281,	// (0x00023ffd) popup_query_code_window_t2_ParamLimits

0x6281,	// (0x00023ffd) popup_query_code_window_t2

0x62ca,	// (0x00024046) popup_query_code_window_t3_ParamLimits

0x62ca,	// (0x00024046) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0002d5aa) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0002d5aa) popup_query_code_window_t

0x62f9,	// (0x00024075) query_popup_pane_ParamLimits

0x62f9,	// (0x00024075) query_popup_pane

0x4d62,	// (0x00022ade) bg_popup_window_pane_cp15_ParamLimits

0x4d62,	// (0x00022ade) bg_popup_window_pane_cp15

0x4d80,	// (0x00022afc) indicator_popup_pane_cp1_ParamLimits

0x4d80,	// (0x00022afc) indicator_popup_pane_cp1

0x4d93,	// (0x00022b0f) indicator_popup_pane_cp2_ParamLimits

0x4d93,	// (0x00022b0f) indicator_popup_pane_cp2

0x4da6,	// (0x00022b22) popup_query_data_code_window_g1_ParamLimits

0x4da6,	// (0x00022b22) popup_query_data_code_window_g1

0x4db9,	// (0x00022b35) popup_query_data_code_window_t1_ParamLimits

0x4db9,	// (0x00022b35) popup_query_data_code_window_t1

0x4dcb,	// (0x00022b47) popup_query_data_code_window_t2_ParamLimits

0x4dcb,	// (0x00022b47) popup_query_data_code_window_t2

0x4ddd,	// (0x00022b59) popup_query_data_code_window_t3_ParamLimits

0x4ddd,	// (0x00022b59) popup_query_data_code_window_t3

0x4df3,	// (0x00022b6f) popup_query_data_code_window_t4_ParamLimits

0x4df3,	// (0x00022b6f) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002d306) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002d306) popup_query_data_code_window_t

0xaf92,	// (0x00028d0e) list_single_midp_graphic_pane_g3

0x4e0b,	// (0x00022b87) query_popup_data_pane_cp2_ParamLimits

0x4e1e,	// (0x00022b9a) query_popup_pane_cp2_ParamLimits

0x4e1e,	// (0x00022b9a) query_popup_pane_cp2

0x4afd,	// (0x00022879) bg_popup_window_pane_cp11

0x61ff,	// (0x00023f7b) heading_pane_cp5

0x4eaa,	// (0x00022c26) listscroll_popup_info_pane

0x4afd,	// (0x00022879) input_focus_pane_cp3

0x4e31,	// (0x00022bad) query_popup_pane_t1

0x4e3f,	// (0x00022bbb) list_popup_info_pane_ParamLimits

0x4e3f,	// (0x00022bbb) list_popup_info_pane

0x4e4e,	// (0x00022bca) listscroll_popup_info_pane_g1

0x4e56,	// (0x00022bd2) scroll_pane_cp7

0x4e5e,	// (0x00022bda) popup_info_list_pane_t1_ParamLimits

0x4e5e,	// (0x00022bda) popup_info_list_pane_t1

0x4e78,	// (0x00022bf4) popup_info_list_pane_t2_ParamLimits

0x4e78,	// (0x00022bf4) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002d30f) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002d30f) popup_info_list_pane_t

0x4afd,	// (0x00022879) bg_popup_window_pane_cp12

0x70db,	// (0x00024e57) find_popup_pane

0x4b61,	// (0x000228dd) bg_popup_window_pane_cp3

0x4e92,	// (0x00022c0e) heading_pane_cp3

0x4e9e,	// (0x00022c1a) listscroll_popup_graphic_pane

0x4afd,	// (0x00022879) bg_popup_window_pane_cp4

0x9e0f,	// (0x00027b8b) heading_pane_cp4

0x4eaa,	// (0x00022c26) listscroll_popup_colour_pane

0x4eb2,	// (0x00022c2e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x4eb2,	// (0x00022c2e) cell_large_graphic_colour_none_popup_pane

0x9e17,	// (0x00027b93) grid_large_graphic_colour_popup_pane_ParamLimits

0x9e17,	// (0x00027b93) grid_large_graphic_colour_popup_pane

0x9e33,	// (0x00027baf) listscroll_popup_colour_pane_g1_ParamLimits

0x9e33,	// (0x00027baf) listscroll_popup_colour_pane_g1

0x9e4a,	// (0x00027bc6) listscroll_popup_colour_pane_g2_ParamLimits

0x9e4a,	// (0x00027bc6) listscroll_popup_colour_pane_g2

0x4ec2,	// (0x00022c3e) listscroll_popup_colour_pane_g3_ParamLimits

0x4ec2,	// (0x00022c3e) listscroll_popup_colour_pane_g3

0x9e5e,	// (0x00027bda) listscroll_popup_colour_pane_g4_ParamLimits

0x9e5e,	// (0x00027bda) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002d314) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002d314) listscroll_popup_colour_pane_g

0x4ed2,	// (0x00022c4e) scroll_pane_cp6_ParamLimits

0x4ed2,	// (0x00022c4e) scroll_pane_cp6

0x9e6d,	// (0x00027be9) cell_large_graphic_colour_popup_pane_ParamLimits

0x9e6d,	// (0x00027be9) cell_large_graphic_colour_popup_pane

0x4ee4,	// (0x00022c60) cell_large_graphic_colour_none_popup_pane_t1

0x4afd,	// (0x00022879) grid_highlight_pane_cp5

0x4ef3,	// (0x00022c6f) cell_large_graphic_colour_popup_pane_g1

0x4efb,	// (0x00022c77) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002d31d) cell_large_graphic_colour_popup_pane_g

0x4f03,	// (0x00022c7f) cell_large_graphic_colour_popup_pane_g2_copy1

0x4f0c,	// (0x00022c88) grid_highlight_pane_cp4

0x4f14,	// (0x00022c90) bg_popup_window_pane_cp8_ParamLimits

0x4f14,	// (0x00022c90) bg_popup_window_pane_cp8

0x4f2f,	// (0x00022cab) popup_snote_single_text_window_g1_ParamLimits

0x4f2f,	// (0x00022cab) popup_snote_single_text_window_g1

0x4f41,	// (0x00022cbd) popup_snote_single_text_window_t1_ParamLimits

0x4f41,	// (0x00022cbd) popup_snote_single_text_window_t1

0x4f54,	// (0x00022cd0) popup_snote_single_text_window_t2_ParamLimits

0x4f54,	// (0x00022cd0) popup_snote_single_text_window_t2

0x4f67,	// (0x00022ce3) popup_snote_single_text_window_t3_ParamLimits

0x4f67,	// (0x00022ce3) popup_snote_single_text_window_t3

0x4fa0,	// (0x00022d1c) popup_snote_single_text_window_t4_ParamLimits

0x4fa0,	// (0x00022d1c) popup_snote_single_text_window_t4

0x4fd4,	// (0x00022d50) popup_snote_single_text_window_t5_ParamLimits

0x4fd4,	// (0x00022d50) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002d322) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002d322) popup_snote_single_text_window_t

0x5003,	// (0x00022d7f) bg_popup_window_pane_cp9_ParamLimits

0x5003,	// (0x00022d7f) bg_popup_window_pane_cp9

0x4f2f,	// (0x00022cab) popup_snote_single_graphic_window_g1_ParamLimits

0x4f2f,	// (0x00022cab) popup_snote_single_graphic_window_g1

0x5011,	// (0x00022d8d) popup_snote_single_graphic_window_g2_ParamLimits

0x5011,	// (0x00022d8d) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002d32d) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002d32d) popup_snote_single_graphic_window_g

0x501d,	// (0x00022d99) popup_snote_single_graphic_window_t1_ParamLimits

0x501d,	// (0x00022d99) popup_snote_single_graphic_window_t1

0x5030,	// (0x00022dac) popup_snote_single_graphic_window_t2_ParamLimits

0x5030,	// (0x00022dac) popup_snote_single_graphic_window_t2

0x4f67,	// (0x00022ce3) popup_snote_single_graphic_window_t3_ParamLimits

0x4f67,	// (0x00022ce3) popup_snote_single_graphic_window_t3

0x4fa0,	// (0x00022d1c) popup_snote_single_graphic_window_t4_ParamLimits

0x4fa0,	// (0x00022d1c) popup_snote_single_graphic_window_t4

0x4fd4,	// (0x00022d50) popup_snote_single_graphic_window_t5_ParamLimits

0x4fd4,	// (0x00022d50) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002d332) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002d332) popup_snote_single_graphic_window_t

0xb63c,	// (0x000293b8) grid_graphic_popup_pane_ParamLimits

0xb63c,	// (0x000293b8) grid_graphic_popup_pane

0xb65f,	// (0x000293db) listscroll_popup_graphic_pane_g1_ParamLimits

0xb65f,	// (0x000293db) listscroll_popup_graphic_pane_g1

0xb673,	// (0x000293ef) listscroll_popup_graphic_pane_g2_ParamLimits

0xb673,	// (0x000293ef) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0002d727) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0002d727) listscroll_popup_graphic_pane_g

0x702f,	// (0x00024dab) scroll_pane_cp5

0xb5f5,	// (0x00029371) cell_graphic_popup_pane_ParamLimits

0xb5f5,	// (0x00029371) cell_graphic_popup_pane

0x7084,	// (0x00024e00) cell_graphic_popup_pane_g1

0x708c,	// (0x00024e08) cell_graphic_popup_pane_g2

0x4f03,	// (0x00022c7f) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0002d720) cell_graphic_popup_pane_g

0x7095,	// (0x00024e11) cell_graphic_popup_pane_t2

0x4f0c,	// (0x00022c88) grid_highlight_pane_cp3

0x5055,	// (0x00022dd1) list_gen_pane_ParamLimits

0x5055,	// (0x00022dd1) list_gen_pane

0x507e,	// (0x00022dfa) scroll_pane

0xb5c6,	// (0x00029342) bg_list_pane_g1_ParamLimits

0xb5c6,	// (0x00029342) bg_list_pane_g1

0x703b,	// (0x00024db7) bg_list_pane_g2_ParamLimits

0x703b,	// (0x00024db7) bg_list_pane_g2

0x704e,	// (0x00024dca) bg_list_pane_g3_ParamLimits

0x704e,	// (0x00024dca) bg_list_pane_g3

0x7060,	// (0x00024ddc) bg_list_pane_g4_ParamLimits

0x7060,	// (0x00024ddc) bg_list_pane_g4

0xb5dd,	// (0x00029359) bg_list_pane_g5_ParamLimits

0xb5dd,	// (0x00029359) bg_list_pane_g5

0x0004,

0xf999,	// (0x0002d715) bg_list_pane_g_ParamLimits

0xf999,	// (0x0002d715) bg_list_pane_g

0xb576,	// (0x000292f2) list_double2_graphic_large_graphic_pane_ParamLimits

0xb576,	// (0x000292f2) list_double2_graphic_large_graphic_pane

0xb576,	// (0x000292f2) list_double2_graphic_pane_ParamLimits

0xb576,	// (0x000292f2) list_double2_graphic_pane

0xb576,	// (0x000292f2) list_double2_large_graphic_pane_ParamLimits

0xb576,	// (0x000292f2) list_double2_large_graphic_pane

0xb576,	// (0x000292f2) list_double2_pane_ParamLimits

0xb576,	// (0x000292f2) list_double2_pane

0xb576,	// (0x000292f2) list_double_graphic_heading_pane_ParamLimits

0xb576,	// (0x000292f2) list_double_graphic_heading_pane

0xb576,	// (0x000292f2) list_double_graphic_pane_ParamLimits

0xb576,	// (0x000292f2) list_double_graphic_pane

0xb576,	// (0x000292f2) list_double_heading_pane_ParamLimits

0xb576,	// (0x000292f2) list_double_heading_pane

0xb576,	// (0x000292f2) list_double_large_graphic_pane_ParamLimits

0xb576,	// (0x000292f2) list_double_large_graphic_pane

0xb576,	// (0x000292f2) list_double_number_pane_ParamLimits

0xb576,	// (0x000292f2) list_double_number_pane

0xb576,	// (0x000292f2) list_double_pane_ParamLimits

0xb576,	// (0x000292f2) list_double_pane

0xb576,	// (0x000292f2) list_double_time_pane_ParamLimits

0xb576,	// (0x000292f2) list_double_time_pane

0xb576,	// (0x000292f2) list_setting_number_pane_ParamLimits

0xb576,	// (0x000292f2) list_setting_number_pane

0xb576,	// (0x000292f2) list_setting_pane_ParamLimits

0xb576,	// (0x000292f2) list_setting_pane

0xdc34,	// (0x0002b9b0) list_single_2graphic_pane_ParamLimits

0xdc34,	// (0x0002b9b0) list_single_2graphic_pane

0xdc34,	// (0x0002b9b0) list_single_graphic_heading_pane_ParamLimits

0xdc34,	// (0x0002b9b0) list_single_graphic_heading_pane

0xdc34,	// (0x0002b9b0) list_single_graphic_pane_ParamLimits

0xdc34,	// (0x0002b9b0) list_single_graphic_pane

0xdc34,	// (0x0002b9b0) list_single_heading_pane_ParamLimits

0xdc34,	// (0x0002b9b0) list_single_heading_pane

0xdc4b,	// (0x0002b9c7) list_single_large_graphic_pane_ParamLimits

0xdc4b,	// (0x0002b9c7) list_single_large_graphic_pane

0xdc34,	// (0x0002b9b0) list_single_number_heading_pane_ParamLimits

0xdc34,	// (0x0002b9b0) list_single_number_heading_pane

0xdc34,	// (0x0002b9b0) list_single_number_pane_ParamLimits

0xdc34,	// (0x0002b9b0) list_single_number_pane

0xdc34,	// (0x0002b9b0) list_single_pane_ParamLimits

0xdc34,	// (0x0002b9b0) list_single_pane

0x4afd,	// (0x00022879) list_highlight_pane_cp1

0xd3a6,	// (0x0002b122) list_single_pane_g1_ParamLimits

0xd3a6,	// (0x0002b122) list_single_pane_g1

0xd3b2,	// (0x0002b12e) list_single_pane_g2_ParamLimits

0xd3b2,	// (0x0002b12e) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0002d344) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0002d344) list_single_pane_g

0xdbe3,	// (0x0002b95f) list_single_pane_t1_ParamLimits

0xdbe3,	// (0x0002b95f) list_single_pane_t1

0xd3a6,	// (0x0002b122) list_single_number_pane_g1_ParamLimits

0xd3a6,	// (0x0002b122) list_single_number_pane_g1

0xd3b2,	// (0x0002b12e) list_single_number_pane_g2_ParamLimits

0xd3b2,	// (0x0002b12e) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0002d344) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0002d344) list_single_number_pane_g

0xd3be,	// (0x0002b13a) list_single_number_pane_t1_ParamLimits

0xd3be,	// (0x0002b13a) list_single_number_pane_t1

0xdba4,	// (0x0002b920) list_single_number_pane_t2_ParamLimits

0xdba4,	// (0x0002b920) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0002d6d6) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0002d6d6) list_single_number_pane_t

0xd39a,	// (0x0002b116) list_single_graphic_pane_g1_ParamLimits

0xd39a,	// (0x0002b116) list_single_graphic_pane_g1

0xd3a6,	// (0x0002b122) list_single_graphic_pane_g2_ParamLimits

0xd3a6,	// (0x0002b122) list_single_graphic_pane_g2

0xd3b2,	// (0x0002b12e) list_single_graphic_pane_g3_ParamLimits

0xd3b2,	// (0x0002b12e) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002d33d) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002d33d) list_single_graphic_pane_g

0xd3be,	// (0x0002b13a) list_single_graphic_pane_t1_ParamLimits

0xd3be,	// (0x0002b13a) list_single_graphic_pane_t1

0xd3a6,	// (0x0002b122) list_single_heading_pane_g1_ParamLimits

0xd3a6,	// (0x0002b122) list_single_heading_pane_g1

0xd3b2,	// (0x0002b12e) list_single_heading_pane_g2_ParamLimits

0xd3b2,	// (0x0002b12e) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002d344) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002d344) list_single_heading_pane_g

0xd3d4,	// (0x0002b150) list_single_heading_pane_t1_ParamLimits

0xd3d4,	// (0x0002b150) list_single_heading_pane_t1

0xd3ea,	// (0x0002b166) list_single_heading_pane_t2_ParamLimits

0xd3ea,	// (0x0002b166) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0002d349) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002d349) list_single_heading_pane_t

0xd3a6,	// (0x0002b122) list_single_number_heading_pane_g1_ParamLimits

0xd3a6,	// (0x0002b122) list_single_number_heading_pane_g1

0xd3b2,	// (0x0002b12e) list_single_number_heading_pane_g2_ParamLimits

0xd3b2,	// (0x0002b12e) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002d344) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002d344) list_single_number_heading_pane_g

0xd3d4,	// (0x0002b150) list_single_number_heading_pane_t1_ParamLimits

0xd3d4,	// (0x0002b150) list_single_number_heading_pane_t1

0xd3fc,	// (0x0002b178) list_single_number_heading_pane_t2_ParamLimits

0xd3fc,	// (0x0002b178) list_single_number_heading_pane_t2

0xd40e,	// (0x0002b18a) list_single_number_heading_pane_t3_ParamLimits

0xd40e,	// (0x0002b18a) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002d34e) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002d34e) list_single_number_heading_pane_t

0xd39a,	// (0x0002b116) list_single_graphic_heading_pane_g1_ParamLimits

0xd39a,	// (0x0002b116) list_single_graphic_heading_pane_g1

0xd420,	// (0x0002b19c) list_single_graphic_heading_pane_g4_ParamLimits

0xd420,	// (0x0002b19c) list_single_graphic_heading_pane_g4

0xd3b2,	// (0x0002b12e) list_single_graphic_heading_pane_g5_ParamLimits

0xd3b2,	// (0x0002b12e) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0002d355) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0002d355) list_single_graphic_heading_pane_g

0xd3d4,	// (0x0002b150) list_single_graphic_heading_pane_t1_ParamLimits

0xd3d4,	// (0x0002b150) list_single_graphic_heading_pane_t1

0xd42f,	// (0x0002b1ab) list_single_graphic_heading_pane_t2_ParamLimits

0xd42f,	// (0x0002b1ab) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002d35c) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002d35c) list_single_graphic_heading_pane_t

0xd441,	// (0x0002b1bd) list_single_large_graphic_pane_g1_ParamLimits

0xd441,	// (0x0002b1bd) list_single_large_graphic_pane_g1

0xd44d,	// (0x0002b1c9) list_single_large_graphic_pane_g2_ParamLimits

0xd44d,	// (0x0002b1c9) list_single_large_graphic_pane_g2

0xd459,	// (0x0002b1d5) list_single_large_graphic_pane_g3_ParamLimits

0xd459,	// (0x0002b1d5) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002d361) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002d361) list_single_large_graphic_pane_g

0x63ac,	// (0x00024128) wait_border_pane_g2_copy1

0xd465,	// (0x0002b1e1) list_single_large_graphic_pane_g4_cp2

0xd46d,	// (0x0002b1e9) list_single_large_graphic_pane_t1_ParamLimits

0xd46d,	// (0x0002b1e9) list_single_large_graphic_pane_t1

0xd483,	// (0x0002b1ff) list_double_pane_g1_ParamLimits

0xd483,	// (0x0002b1ff) list_double_pane_g1

0xd48f,	// (0x0002b20b) list_double_pane_g2_ParamLimits

0xd48f,	// (0x0002b20b) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002d368) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002d368) list_double_pane_g

0xd49b,	// (0x0002b217) list_double_pane_t1_ParamLimits

0xd49b,	// (0x0002b217) list_double_pane_t1

0xd4b1,	// (0x0002b22d) list_double_pane_t2_ParamLimits

0xd4b1,	// (0x0002b22d) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002d36d) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002d36d) list_double_pane_t

0xd4c3,	// (0x0002b23f) list_double2_pane_g1_ParamLimits

0xd4c3,	// (0x0002b23f) list_double2_pane_g1

0xd48f,	// (0x0002b20b) list_double2_pane_g2_ParamLimits

0xd48f,	// (0x0002b20b) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002d372) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002d372) list_double2_pane_g

0xd49b,	// (0x0002b217) list_double2_pane_t1_ParamLimits

0xd49b,	// (0x0002b217) list_double2_pane_t1

0xd4d2,	// (0x0002b24e) list_double2_pane_t2_ParamLimits

0xd4d2,	// (0x0002b24e) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002d377) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002d377) list_double2_pane_t

0xd483,	// (0x0002b1ff) list_double_number_pane_g1_ParamLimits

0xd483,	// (0x0002b1ff) list_double_number_pane_g1

0xd48f,	// (0x0002b20b) list_double_number_pane_g2_ParamLimits

0xd48f,	// (0x0002b20b) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002d368) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002d368) list_double_number_pane_g

0xd4e4,	// (0x0002b260) list_double_number_pane_t1_ParamLimits

0xd4e4,	// (0x0002b260) list_double_number_pane_t1

0xd4f6,	// (0x0002b272) list_double_number_pane_t2_ParamLimits

0xd4f6,	// (0x0002b272) list_double_number_pane_t2

0xd50c,	// (0x0002b288) list_double_number_pane_t3_ParamLimits

0xd50c,	// (0x0002b288) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002d37c) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002d37c) list_double_number_pane_t

0xd51e,	// (0x0002b29a) list_double_graphic_pane_g1_ParamLimits

0xd51e,	// (0x0002b29a) list_double_graphic_pane_g1

0xd52a,	// (0x0002b2a6) list_double_graphic_pane_g2_ParamLimits

0xd52a,	// (0x0002b2a6) list_double_graphic_pane_g2

0xd539,	// (0x0002b2b5) list_double_graphic_pane_g3_ParamLimits

0xd539,	// (0x0002b2b5) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002d383) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002d383) list_double_graphic_pane_g

0xd551,	// (0x0002b2cd) list_double_graphic_pane_t1_ParamLimits

0xd551,	// (0x0002b2cd) list_double_graphic_pane_t1

0xd567,	// (0x0002b2e3) list_double_graphic_pane_t2_ParamLimits

0xd567,	// (0x0002b2e3) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002d38c) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002d38c) list_double_graphic_pane_t

0xd51e,	// (0x0002b29a) list_double2_graphic_pane_g1_ParamLimits

0xd51e,	// (0x0002b29a) list_double2_graphic_pane_g1

0xd579,	// (0x0002b2f5) list_double2_graphic_pane_g2_ParamLimits

0xd579,	// (0x0002b2f5) list_double2_graphic_pane_g2

0xd585,	// (0x0002b301) list_double2_graphic_pane_g3_ParamLimits

0xd585,	// (0x0002b301) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002d391) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002d391) list_double2_graphic_pane_g

0xd4f6,	// (0x0002b272) list_double2_graphic_pane_t1_ParamLimits

0xd4f6,	// (0x0002b272) list_double2_graphic_pane_t1

0xd591,	// (0x0002b30d) list_double2_graphic_pane_t2_ParamLimits

0xd591,	// (0x0002b30d) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002d398) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002d398) list_double2_graphic_pane_t

0xd5a3,	// (0x0002b31f) list_double_large_graphic_pane_g1_ParamLimits

0xd5a3,	// (0x0002b31f) list_double_large_graphic_pane_g1

0xd4c3,	// (0x0002b23f) list_double_large_graphic_pane_g2_ParamLimits

0xd4c3,	// (0x0002b23f) list_double_large_graphic_pane_g2

0xd48f,	// (0x0002b20b) list_double_large_graphic_pane_g3_ParamLimits

0xd48f,	// (0x0002b20b) list_double_large_graphic_pane_g3

0xd5cc,	// (0x0002b348) list_double_large_graphic_pane_g4_ParamLimits

0xd5cc,	// (0x0002b348) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002d39d) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002d39d) list_double_large_graphic_pane_g

0xd5f2,	// (0x0002b36e) list_double_large_graphic_pane_t1_ParamLimits

0xd5f2,	// (0x0002b36e) list_double_large_graphic_pane_t1

0xd60b,	// (0x0002b387) list_double_large_graphic_pane_t2_ParamLimits

0xd60b,	// (0x0002b387) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002d3a8) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002d3a8) list_double_large_graphic_pane_t

0xd61d,	// (0x0002b399) list_double2_large_graphic_pane_g1_ParamLimits

0xd61d,	// (0x0002b399) list_double2_large_graphic_pane_g1

0xd4c3,	// (0x0002b23f) list_double2_large_graphic_pane_g2_ParamLimits

0xd4c3,	// (0x0002b23f) list_double2_large_graphic_pane_g2

0xd48f,	// (0x0002b20b) list_double2_large_graphic_pane_g3_ParamLimits

0xd48f,	// (0x0002b20b) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002d3ad) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002d3ad) list_double2_large_graphic_pane_g

0xd629,	// (0x0002b3a5) list_double2_large_graphic_pane_t1_ParamLimits

0xd629,	// (0x0002b3a5) list_double2_large_graphic_pane_t1

0xd63f,	// (0x0002b3bb) list_double2_large_graphic_pane_t2_ParamLimits

0xd63f,	// (0x0002b3bb) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0002d3b4) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0002d3b4) list_double2_large_graphic_pane_t

0xd651,	// (0x0002b3cd) list_double_heading_pane_g1_ParamLimits

0xd651,	// (0x0002b3cd) list_double_heading_pane_g1

0xd660,	// (0x0002b3dc) list_double_heading_pane_g2_ParamLimits

0xd660,	// (0x0002b3dc) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0002d3b9) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0002d3b9) list_double_heading_pane_g

0xd66c,	// (0x0002b3e8) list_double_heading_pane_t1_ParamLimits

0xd66c,	// (0x0002b3e8) list_double_heading_pane_t1

0xd682,	// (0x0002b3fe) list_double_heading_pane_t2_ParamLimits

0xd682,	// (0x0002b3fe) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0002d3be) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0002d3be) list_double_heading_pane_t

0xd694,	// (0x0002b410) list_double_graphic_heading_pane_g1_ParamLimits

0xd694,	// (0x0002b410) list_double_graphic_heading_pane_g1

0xd651,	// (0x0002b3cd) list_double_graphic_heading_pane_g2_ParamLimits

0xd651,	// (0x0002b3cd) list_double_graphic_heading_pane_g2

0xd660,	// (0x0002b3dc) list_double_graphic_heading_pane_g3_ParamLimits

0xd660,	// (0x0002b3dc) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0002d3c3) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0002d3c3) list_double_graphic_heading_pane_g

0xd6a0,	// (0x0002b41c) list_double_graphic_heading_pane_t1_ParamLimits

0xd6a0,	// (0x0002b41c) list_double_graphic_heading_pane_t1

0xd6b6,	// (0x0002b432) list_double_graphic_heading_pane_t2_ParamLimits

0xd6b6,	// (0x0002b432) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0002d3ca) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0002d3ca) list_double_graphic_heading_pane_t

0xd4c3,	// (0x0002b23f) list_double_time_pane_g1_ParamLimits

0xd4c3,	// (0x0002b23f) list_double_time_pane_g1

0xd48f,	// (0x0002b20b) list_double_time_pane_g2_ParamLimits

0xd48f,	// (0x0002b20b) list_double_time_pane_g2

0x0001,

0xf5f6,	// (0x0002d372) list_double_time_pane_g_ParamLimits

0xf5f6,	// (0x0002d372) list_double_time_pane_g

0xd629,	// (0x0002b3a5) list_double_time_pane_t1_ParamLimits

0xd629,	// (0x0002b3a5) list_double_time_pane_t1

0xd6c8,	// (0x0002b444) list_double_time_pane_t2_ParamLimits

0xd6c8,	// (0x0002b444) list_double_time_pane_t2

0xd6da,	// (0x0002b456) list_double_time_pane_t3_ParamLimits

0xd6da,	// (0x0002b456) list_double_time_pane_t3

0xd6ec,	// (0x0002b468) list_double_time_pane_t4_ParamLimits

0xd6ec,	// (0x0002b468) list_double_time_pane_t4

0x0003,

0xf653,	// (0x0002d3cf) list_double_time_pane_t_ParamLimits

0xf653,	// (0x0002d3cf) list_double_time_pane_t

0xd6fe,	// (0x0002b47a) list_setting_pane_g1_ParamLimits

0xd6fe,	// (0x0002b47a) list_setting_pane_g1

0xd70a,	// (0x0002b486) list_setting_pane_g2_ParamLimits

0xd70a,	// (0x0002b486) list_setting_pane_g2

0x0001,

0xf65c,	// (0x0002d3d8) list_setting_pane_g_ParamLimits

0xf65c,	// (0x0002d3d8) list_setting_pane_g

0xd716,	// (0x0002b492) list_setting_pane_t1_ParamLimits

0xd716,	// (0x0002b492) list_setting_pane_t1

0xd72d,	// (0x0002b4a9) list_setting_pane_t2_ParamLimits

0xd72d,	// (0x0002b4a9) list_setting_pane_t2

0x0002,

0xf661,	// (0x0002d3dd) list_setting_pane_t_ParamLimits

0xf661,	// (0x0002d3dd) list_setting_pane_t

0xd76a,	// (0x0002b4e6) set_value_pane_cp_ParamLimits

0xd76a,	// (0x0002b4e6) set_value_pane_cp

0xd776,	// (0x0002b4f2) list_setting_number_pane_g1_ParamLimits

0xd776,	// (0x0002b4f2) list_setting_number_pane_g1

0xd782,	// (0x0002b4fe) list_setting_number_pane_g2_ParamLimits

0xd782,	// (0x0002b4fe) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x0002d3e4) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x0002d3e4) list_setting_number_pane_g

0xd78e,	// (0x0002b50a) list_setting_number_pane_t1_ParamLimits

0xd78e,	// (0x0002b50a) list_setting_number_pane_t1

0xd7a0,	// (0x0002b51c) list_setting_number_pane_t2_ParamLimits

0xd7a0,	// (0x0002b51c) list_setting_number_pane_t2

0xd7b7,	// (0x0002b533) list_setting_number_pane_t3_ParamLimits

0xd7b7,	// (0x0002b533) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0002d3e9) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0002d3e9) list_setting_number_pane_t

0xd76a,	// (0x0002b4e6) set_value_pane_ParamLimits

0xd76a,	// (0x0002b4e6) set_value_pane

0x50b3,	// (0x00022e2f) bg_set_opt_pane_ParamLimits

0x50b3,	// (0x00022e2f) bg_set_opt_pane

0xd7f8,	// (0x0002b574) set_value_pane_t1

0x50d4,	// (0x00022e50) slider_set_pane_cp3

0x50dd,	// (0x00022e59) volume_small_pane_cp

0x50e6,	// (0x00022e62) list_form_gen_pane

0x50a2,	// (0x00022e1e) scroll_pane_cp8

0xd80e,	// (0x0002b58a) form_field_data_pane_ParamLimits

0xd80e,	// (0x0002b58a) form_field_data_pane

0xd82e,	// (0x0002b5aa) form_field_data_wide_pane_ParamLimits

0xd82e,	// (0x0002b5aa) form_field_data_wide_pane

0xd84d,	// (0x0002b5c9) form_field_popup_pane_ParamLimits

0xd84d,	// (0x0002b5c9) form_field_popup_pane

0xd865,	// (0x0002b5e1) form_field_popup_wide_pane_ParamLimits

0xd865,	// (0x0002b5e1) form_field_popup_wide_pane

0xd87c,	// (0x0002b5f8) form_field_slider_pane_ParamLimits

0xd87c,	// (0x0002b5f8) form_field_slider_pane

0xd88f,	// (0x0002b60b) form_field_slider_wide_pane_ParamLimits

0xd88f,	// (0x0002b60b) form_field_slider_wide_pane

0x50ef,	// (0x00022e6b) data_form_pane

0x9e94,	// (0x00027c10) form_field_data_pane_t1

0x50fb,	// (0x00022e77) input_focus_pane

0x5109,	// (0x00022e85) data_form_wide_pane

0xd8b6,	// (0x0002b632) form_field_data_wide_pane_t1

0x4f21,	// (0x00022c9d) input_focus_pane_cp6

0xd8d8,	// (0x0002b654) form_field_popup_pane_t1

0x50fb,	// (0x00022e77) input_focus_pane_cp7

0x50ef,	// (0x00022e6b) list_form_pane

0xd8f8,	// (0x0002b674) form_field_popup_wide_pane_t1

0x50fb,	// (0x00022e77) input_focus_pane_cp8

0x5135,	// (0x00022eb1) list_form_wide_pane

0xd915,	// (0x0002b691) form_field_slider_pane_t1_ParamLimits

0xd915,	// (0x0002b691) form_field_slider_pane_t1

0xd927,	// (0x0002b6a3) form_field_slider_pane_t2_ParamLimits

0xd927,	// (0x0002b6a3) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0002d3f9) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0002d3f9) form_field_slider_pane_t

0x4b4b,	// (0x000228c7) input_focus_pane_cp9_ParamLimits

0x4b4b,	// (0x000228c7) input_focus_pane_cp9

0xd939,	// (0x0002b6b5) slider_cont_pane_ParamLimits

0xd939,	// (0x0002b6b5) slider_cont_pane

0x5144,	// (0x00022ec0) form_field_slider_wide_pane_t1_ParamLimits

0x5144,	// (0x00022ec0) form_field_slider_wide_pane_t1

0xd94d,	// (0x0002b6c9) form_field_slider_wide_pane_t2_ParamLimits

0xd94d,	// (0x0002b6c9) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0002d3fe) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0002d3fe) form_field_slider_wide_pane_t

0x4b4b,	// (0x000228c7) input_focus_pane_cp10_ParamLimits

0x4b4b,	// (0x000228c7) input_focus_pane_cp10

0xd95f,	// (0x0002b6db) slider_cont_pane_cp1_ParamLimits

0xd95f,	// (0x0002b6db) slider_cont_pane_cp1

0xd975,	// (0x0002b6f1) slider_form_pane_cp

0x5156,	// (0x00022ed2) input_focus_pane_g1

0x515e,	// (0x00022eda) input_focus_pane_g2

0x5166,	// (0x00022ee2) input_focus_pane_g3

0x516e,	// (0x00022eea) input_focus_pane_g4

0x5176,	// (0x00022ef2) input_focus_pane_g5

0x517e,	// (0x00022efa) input_focus_pane_g6

0x5186,	// (0x00022f02) input_focus_pane_g7

0x518e,	// (0x00022f0a) input_focus_pane_g8

0x5196,	// (0x00022f12) input_focus_pane_g9

0x4a7b,	// (0x000227f7) input_focus_pane_g10

0x0009,

0xf687,	// (0x0002d403) input_focus_pane_g

0x63b5,	// (0x00024131) wait_border_pane_g3_copy1

0xd97d,	// (0x0002b6f9) data_form_pane_t1

0x4a7b,	// (0x000227f7) wait_anim_pane_g1_copy1

0xdbb6,	// (0x0002b932) data_form_wide_pane_t1

0xd997,	// (0x0002b713) list_form_graphic_pane_cp_ParamLimits

0xd997,	// (0x0002b713) list_form_graphic_pane_cp

0x6f60,	// (0x00024cdc) slider_form_pane_g1

0x6f69,	// (0x00024ce5) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0002d706) slider_form_pane_g

0xd997,	// (0x0002b713) list_form_graphic_pane_ParamLimits

0xd997,	// (0x0002b713) list_form_graphic_pane

0xd9ad,	// (0x0002b729) list_form_graphic_pane_g1

0xd9b5,	// (0x0002b731) list_form_graphic_pane_t1_ParamLimits

0xd9b5,	// (0x0002b731) list_form_graphic_pane_t1

0x4b61,	// (0x000228dd) list_highlight_pane_cp5_ParamLimits

0x4b61,	// (0x000228dd) list_highlight_pane_cp5

0xd9ca,	// (0x0002b746) find_pane_g1

0x519e,	// (0x00022f1a) input_find_pane

0xd9d3,	// (0x0002b74f) input_find_pane_g1_ParamLimits

0xd9d3,	// (0x0002b74f) input_find_pane_g1

0xd9df,	// (0x0002b75b) input_find_pane_t1_ParamLimits

0xd9df,	// (0x0002b75b) input_find_pane_t1

0xd9f4,	// (0x0002b770) input_find_pane_t2_ParamLimits

0xd9f4,	// (0x0002b770) input_find_pane_t2

0x0001,

0xf69c,	// (0x0002d418) input_find_pane_t_ParamLimits

0xf69c,	// (0x0002d418) input_find_pane_t

0x51a7,	// (0x00022f23) input_focus_pane_cp5_ParamLimits

0x51a7,	// (0x00022f23) input_focus_pane_cp5

0x4b4b,	// (0x000228c7) bg_popup_window_pane_cp2_ParamLimits

0x4b4b,	// (0x000228c7) bg_popup_window_pane_cp2

0x51c1,	// (0x00022f3d) listscroll_menu_pane_ParamLimits

0x51c1,	// (0x00022f3d) listscroll_menu_pane

0x51cd,	// (0x00022f49) popup_submenu_window_ParamLimits

0x51cd,	// (0x00022f49) popup_submenu_window

0x51f1,	// (0x00022f6d) find_popup_pane_g1

0x51f9,	// (0x00022f75) input_popup_find_pane_cp

0x51a7,	// (0x00022f23) input_focus_pane_cp4_ParamLimits

0x51a7,	// (0x00022f23) input_focus_pane_cp4

0x5203,	// (0x00022f7f) input_popup_find_pane_t1_ParamLimits

0x5203,	// (0x00022f7f) input_popup_find_pane_t1

0x4afd,	// (0x00022879) bg_popup_sub_pane_cp

0x5231,	// (0x00022fad) listscroll_popup_sub_pane

0x5239,	// (0x00022fb5) list_submenu_pane_ParamLimits

0x5239,	// (0x00022fb5) list_submenu_pane

0x524a,	// (0x00022fc6) scroll_pane_cp4

0x5252,	// (0x00022fce) list_single_popup_submenu_pane_ParamLimits

0x5252,	// (0x00022fce) list_single_popup_submenu_pane

0x5264,	// (0x00022fe0) list_single_popup_submenu_pane_g1

0x526c,	// (0x00022fe8) list_single_popup_submenu_pane_t1_ParamLimits

0x526c,	// (0x00022fe8) list_single_popup_submenu_pane_t1

0x4b61,	// (0x000228dd) bg_active_tab_pane_cp1_ParamLimits

0x4b61,	// (0x000228dd) bg_active_tab_pane_cp1

0x9eb8,	// (0x00027c34) tabs_2_active_pane_g1

0x9ec0,	// (0x00027c3c) tabs_2_active_pane_t1

0x4b61,	// (0x000228dd) bg_passive_tab_pane_cp1_ParamLimits

0x4b61,	// (0x000228dd) bg_passive_tab_pane_cp1

0x9eb8,	// (0x00027c34) tabs_2_passive_pane_g1

0x9ec0,	// (0x00027c3c) tabs_2_passive_pane_t1

0x5ee9,	// (0x00023c65) bg_active_tab_pane_cp4

0x9ed2,	// (0x00027c4e) tabs_2_long_active_pane_t1

0x9ee5,	// (0x00027c61) bg_passive_tab_pane_cp4

0xaf9a,	// (0x00028d16) list_single_midp_graphic_pane_g4_ParamLimits

0x5ee9,	// (0x00023c65) bg_active_tab_pane_cp5

0x9ef1,	// (0x00027c6d) tabs_3_long_active_pane_t1

0x9ee5,	// (0x00027c61) bg_passive_tab_pane_cp5

0xaf9a,	// (0x00028d16) list_single_midp_graphic_pane_g4

0x4b61,	// (0x000228dd) bg_popup_window_pane_cp13_ParamLimits

0x4b61,	// (0x000228dd) bg_popup_window_pane_cp13

0x5296,	// (0x00023012) listscroll_popup_fast_pane_ParamLimits

0x5296,	// (0x00023012) listscroll_popup_fast_pane

0x52a5,	// (0x00023021) grid_popup_fast_pane_ParamLimits

0x52a5,	// (0x00023021) grid_popup_fast_pane

0x52b7,	// (0x00023033) scroll_pane_cp9_ParamLimits

0x52b7,	// (0x00023033) scroll_pane_cp9

0x82ac,	// (0x00026028) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x82ac,	// (0x00026028) list_single_graphic_hl_pane_t1_cp2

0x52db,	// (0x00023057) input_focus_pane_cp20_ParamLimits

0x52db,	// (0x00023057) input_focus_pane_cp20

0x52e9,	// (0x00023065) query_popup_data_pane_t1_ParamLimits

0x52e9,	// (0x00023065) query_popup_data_pane_t1

0x52fc,	// (0x00023078) query_popup_data_pane_t2_ParamLimits

0x52fc,	// (0x00023078) query_popup_data_pane_t2

0x5342,	// (0x000230be) query_popup_data_pane_t3_ParamLimits

0x5342,	// (0x000230be) query_popup_data_pane_t3

0x5383,	// (0x000230ff) query_popup_data_pane_t4_ParamLimits

0x5383,	// (0x000230ff) query_popup_data_pane_t4

0x53bf,	// (0x0002313b) query_popup_data_pane_t5_ParamLimits

0x53bf,	// (0x0002313b) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0002d41d) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0002d41d) query_popup_data_pane_t

0x5156,	// (0x00022ed2) bg_set_opt_pane_g1

0x515e,	// (0x00022eda) bg_set_opt_pane_g2

0x5166,	// (0x00022ee2) bg_set_opt_pane_g3

0x516e,	// (0x00022eea) bg_set_opt_pane_g4

0x5176,	// (0x00022ef2) bg_set_opt_pane_g5

0x517e,	// (0x00022efa) bg_set_opt_pane_g6

0x5186,	// (0x00022f02) bg_set_opt_pane_g7

0x518e,	// (0x00022f0a) bg_set_opt_pane_g8

0x5196,	// (0x00022f12) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0002d428) bg_set_opt_pane_g

0xa2fe,	// (0x0002807a) control_top_pane_stacon_ParamLimits

0xa2fe,	// (0x0002807a) control_top_pane_stacon

0xa351,	// (0x000280cd) signal_pane_stacon_ParamLimits

0xa351,	// (0x000280cd) signal_pane_stacon

0x57b2,	// (0x0002352e) stacon_top_pane_g1_ParamLimits

0x57b2,	// (0x0002352e) stacon_top_pane_g1

0xa376,	// (0x000280f2) title_pane_stacon_ParamLimits

0xa376,	// (0x000280f2) title_pane_stacon

0xa398,	// (0x00028114) uni_indicator_pane_stacon_ParamLimits

0xa398,	// (0x00028114) uni_indicator_pane_stacon

0xa3ad,	// (0x00028129) battery_pane_stacon_ParamLimits

0xa3ad,	// (0x00028129) battery_pane_stacon

0xa3ed,	// (0x00028169) control_bottom_pane_stacon_ParamLimits

0xa3ed,	// (0x00028169) control_bottom_pane_stacon

0xa40c,	// (0x00028188) navi_pane_stacon_ParamLimits

0xa40c,	// (0x00028188) navi_pane_stacon

0x57d4,	// (0x00023550) stacon_bottom_pane_g1_ParamLimits

0x57d4,	// (0x00023550) stacon_bottom_pane_g1

0x53f6,	// (0x00023172) aid_levels_signal_lsc_ParamLimits

0x53f6,	// (0x00023172) aid_levels_signal_lsc

0x9f03,	// (0x00027c7f) signal_pane_stacon_g1_ParamLimits

0x9f03,	// (0x00027c7f) signal_pane_stacon_g1

0x9f0f,	// (0x00027c8b) signal_pane_stacon_g2_ParamLimits

0x9f0f,	// (0x00027c8b) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0002d43b) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0002d43b) signal_pane_stacon_g

0x9f43,	// (0x00027cbf) title_pane_stacon_t1_ParamLimits

0x9f43,	// (0x00027cbf) title_pane_stacon_t1

0x5424,	// (0x000231a0) uni_indicator_pane_stacon_g1

0x542e,	// (0x000231aa) uni_indicator_pane_stacon_g2

0x5410,	// (0x0002318c) uni_indicator_pane_stacon_g3

0x541a,	// (0x00023196) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0002d447) uni_indicator_pane_stacon_g

0x9f68,	// (0x00027ce4) control_top_pane_stacon_g1

0x9f70,	// (0x00027cec) control_top_pane_stacon_t1_ParamLimits

0x9f70,	// (0x00027cec) control_top_pane_stacon_t1

0x5438,	// (0x000231b4) aid_levels_battery_lsc_ParamLimits

0x5438,	// (0x000231b4) aid_levels_battery_lsc

0x9fa1,	// (0x00027d1d) battery_pane_stacon_g1_ParamLimits

0x9fa1,	// (0x00027d1d) battery_pane_stacon_g1

0x9fad,	// (0x00027d29) battery_pane_stacon_g2_ParamLimits

0x9fad,	// (0x00027d29) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0002d450) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0002d450) battery_pane_stacon_g

0x9fdc,	// (0x00027d58) navi_icon_pane_stacon

0x9fec,	// (0x00027d68) navi_navi_pane_stacon

0x9fdc,	// (0x00027d58) navi_text_pane_stacon

0x9f68,	// (0x00027ce4) control_bottom_pane_stacon_g1

0x9ffc,	// (0x00027d78) control_bottom_pane_stacon_t1_ParamLimits

0x9ffc,	// (0x00027d78) control_bottom_pane_stacon_t1

0xa02d,	// (0x00027da9) grid_app_pane_ParamLimits

0xa02d,	// (0x00027da9) grid_app_pane

0xa049,	// (0x00027dc5) scroll_pane_cp15_ParamLimits

0xa049,	// (0x00027dc5) scroll_pane_cp15

0xa05a,	// (0x00027dd6) cell_app_pane_ParamLimits

0xa05a,	// (0x00027dd6) cell_app_pane

0xa07e,	// (0x00027dfa) cell_app_pane_g1_ParamLimits

0xa07e,	// (0x00027dfa) cell_app_pane_g1

0x5460,	// (0x000231dc) cell_app_pane_g2_ParamLimits

0x5460,	// (0x000231dc) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0002d455) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0002d455) cell_app_pane_g

0xa0a2,	// (0x00027e1e) cell_app_pane_t1_ParamLimits

0xa0a2,	// (0x00027e1e) cell_app_pane_t1

0x546c,	// (0x000231e8) grid_highlight_pane_ParamLimits

0x546c,	// (0x000231e8) grid_highlight_pane

0x5156,	// (0x00022ed2) cell_highlight_pane_g1

0x515e,	// (0x00022eda) cell_highlight_pane_g2

0x5166,	// (0x00022ee2) cell_highlight_pane_g3

0x516e,	// (0x00022eea) cell_highlight_pane_g4

0x5176,	// (0x00022ef2) cell_highlight_pane_g5

0x517e,	// (0x00022efa) cell_highlight_pane_g6

0x5186,	// (0x00022f02) cell_highlight_pane_g7

0x518e,	// (0x00022f0a) cell_highlight_pane_g8

0x5196,	// (0x00022f12) cell_highlight_pane_g9

0x4a7b,	// (0x000227f7) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0002d403) cell_highlight_pane_g

0x547d,	// (0x000231f9) bg_scroll_pane

0xa0cc,	// (0x00027e48) scroll_handle_pane

0x54c4,	// (0x00023240) scroll_bg_pane_g1

0x54d9,	// (0x00023255) scroll_bg_pane_g2

0x54f1,	// (0x0002326d) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0002d45a) scroll_bg_pane_g

0x5506,	// (0x00023282) scroll_handle_focus_pane_ParamLimits

0x5506,	// (0x00023282) scroll_handle_focus_pane

0x54c4,	// (0x00023240) scroll_handle_pane_g1

0x5513,	// (0x0002328f) scroll_handle_pane_g2

0x54f1,	// (0x0002326d) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0002d461) scroll_handle_pane_g

0x51a7,	// (0x00022f23) bg_popup_sub_pane_cp21_ParamLimits

0x51a7,	// (0x00022f23) bg_popup_sub_pane_cp21

0x5527,	// (0x000232a3) popup_fep_japan_predictive_window_t1_ParamLimits

0x5527,	// (0x000232a3) popup_fep_japan_predictive_window_t1

0x553e,	// (0x000232ba) popup_fep_japan_predictive_window_t2_ParamLimits

0x553e,	// (0x000232ba) popup_fep_japan_predictive_window_t2

0x5571,	// (0x000232ed) popup_fep_japan_predictive_window_t3_ParamLimits

0x5571,	// (0x000232ed) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0002d468) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0002d468) popup_fep_japan_predictive_window_t

0x4afd,	// (0x00022879) bg_popup_sub_pane_cp23

0x55a8,	// (0x00023324) listscroll_japin_cand_pane

0x55b0,	// (0x0002332c) popup_fep_japan_candidate_window_t1

0x55be,	// (0x0002333a) candidate_pane_ParamLimits

0x55be,	// (0x0002333a) candidate_pane

0x55d1,	// (0x0002334d) scroll_pane_cp30

0x55d9,	// (0x00023355) list_single_popup_jap_candidate_pane_ParamLimits

0x55d9,	// (0x00023355) list_single_popup_jap_candidate_pane

0x4afd,	// (0x00022879) list_highlight_pane_cp30

0x55ee,	// (0x0002336a) list_single_popup_jap_candidate_pane_t1

0xa0f5,	// (0x00027e71) level_1_signal

0xa102,	// (0x00027e7e) level_2_signal

0xa10f,	// (0x00027e8b) level_3_signal

0xa11c,	// (0x00027e98) level_4_signal

0xa129,	// (0x00027ea5) level_5_signal

0xa136,	// (0x00027eb2) level_6_signal

0xa143,	// (0x00027ebf) level_7_signal

0xa0f5,	// (0x00027e71) level_1_battery

0xa102,	// (0x00027e7e) level_2_battery

0xa10f,	// (0x00027e8b) level_3_battery

0xa11c,	// (0x00027e98) level_4_battery

0xa129,	// (0x00027ea5) level_5_battery

0xa136,	// (0x00027eb2) level_6_battery

0xa143,	// (0x00027ebf) level_7_battery

0x5615,	// (0x00023391) list_menu_pane_ParamLimits

0x5615,	// (0x00023391) list_menu_pane

0x562b,	// (0x000233a7) scroll_pane_cp25_ParamLimits

0x562b,	// (0x000233a7) scroll_pane_cp25

0xa16f,	// (0x00027eeb) list_double2_graphic_pane_cp2_ParamLimits

0xa16f,	// (0x00027eeb) list_double2_graphic_pane_cp2

0xa16f,	// (0x00027eeb) list_double2_large_graphic_pane_cp2_ParamLimits

0xa16f,	// (0x00027eeb) list_double2_large_graphic_pane_cp2

0xa16f,	// (0x00027eeb) list_double2_pane_cp2_ParamLimits

0xa16f,	// (0x00027eeb) list_double2_pane_cp2

0xa16f,	// (0x00027eeb) list_double_graphic_pane_cp2_ParamLimits

0xa16f,	// (0x00027eeb) list_double_graphic_pane_cp2

0xa16f,	// (0x00027eeb) list_double_large_graphic_pane_cp2_ParamLimits

0xa16f,	// (0x00027eeb) list_double_large_graphic_pane_cp2

0xa16f,	// (0x00027eeb) list_double_number_pane_cp2_ParamLimits

0xa16f,	// (0x00027eeb) list_double_number_pane_cp2

0xa16f,	// (0x00027eeb) list_double_pane_cp2_ParamLimits

0xa16f,	// (0x00027eeb) list_double_pane_cp2

0xa17f,	// (0x00027efb) list_single_2graphic_pane_cp2_ParamLimits

0xa17f,	// (0x00027efb) list_single_2graphic_pane_cp2

0xa17f,	// (0x00027efb) list_single_graphic_heading_pane_cp2_ParamLimits

0xa17f,	// (0x00027efb) list_single_graphic_heading_pane_cp2

0xa17f,	// (0x00027efb) list_single_graphic_pane_cp2_ParamLimits

0xa17f,	// (0x00027efb) list_single_graphic_pane_cp2

0xa17f,	// (0x00027efb) list_single_heading_pane_cp2_ParamLimits

0xa17f,	// (0x00027efb) list_single_heading_pane_cp2

0xa194,	// (0x00027f10) list_single_large_graphic_pane_cp2_ParamLimits

0xa194,	// (0x00027f10) list_single_large_graphic_pane_cp2

0xa17f,	// (0x00027efb) list_single_number_heading_pane_cp2_ParamLimits

0xa17f,	// (0x00027efb) list_single_number_heading_pane_cp2

0xa17f,	// (0x00027efb) list_single_number_pane_cp2_ParamLimits

0xa17f,	// (0x00027efb) list_single_number_pane_cp2

0xa17f,	// (0x00027efb) list_single_pane_cp2_ParamLimits

0xa17f,	// (0x00027efb) list_single_pane_cp2

0x564d,	// (0x000233c9) bg_popup_sub_pane_cp22

0xa26e,	// (0x00027fea) popup_side_volume_key_window_g1

0xa292,	// (0x0002800e) popup_side_volume_key_window_t1

0xa2ae,	// (0x0002802a) volume_small_pane_cp1

0x4b4b,	// (0x000228c7) bg_popup_sub_pane_cp24_ParamLimits

0x4b4b,	// (0x000228c7) bg_popup_sub_pane_cp24

0x5663,	// (0x000233df) fep_china_uni_candidate_pane_ParamLimits

0x5663,	// (0x000233df) fep_china_uni_candidate_pane

0x5677,	// (0x000233f3) fep_china_uni_entry_pane

0x5687,	// (0x00023403) popup_fep_china_uni_window_g1

0x56a3,	// (0x0002341f) fep_china_uni_entry_pane_g1

0x56ab,	// (0x00023427) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0002d499) fep_china_uni_entry_pane_g

0x56b3,	// (0x0002342f) fep_entry_item_pane

0x56bd,	// (0x00023439) fep_candidate_item_pane

0x56c5,	// (0x00023441) fep_china_uni_candidate_pane_g1

0x56cd,	// (0x00023449) fep_china_uni_candidate_pane_g2

0x56d5,	// (0x00023451) fep_china_uni_candidate_pane_g3

0x56dd,	// (0x00023459) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0002d49e) fep_china_uni_candidate_pane_g

0x4a7b,	// (0x000227f7) fep_entry_item_pane_g1

0x56e5,	// (0x00023461) fep_entry_item_pane_t1_ParamLimits

0x56e5,	// (0x00023461) fep_entry_item_pane_t1

0x56fb,	// (0x00023477) fep_candidate_item_pane_t1_ParamLimits

0x56fb,	// (0x00023477) fep_candidate_item_pane_t1

0x5710,	// (0x0002348c) fep_candidate_item_pane_t2_ParamLimits

0x5710,	// (0x0002348c) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0002d4a7) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0002d4a7) fep_candidate_item_pane_t

0x4b61,	// (0x000228dd) list_highlight_pane_cp31_ParamLimits

0x4b61,	// (0x000228dd) list_highlight_pane_cp31

0x5722,	// (0x0002349e) level_1_signal_lsc

0x572b,	// (0x000234a7) level_2_signal_lsc

0x5734,	// (0x000234b0) level_3_signal_lsc

0x573d,	// (0x000234b9) level_4_signal_lsc

0x5746,	// (0x000234c2) level_5_signal_lsc

0x574f,	// (0x000234cb) level_6_signal_lsc

0x5758,	// (0x000234d4) level_7_signal_lsc

0x5758,	// (0x000234d4) level_1_battery_lsc

0x5761,	// (0x000234dd) level_2_battery_lsc

0x576a,	// (0x000234e6) level_3_battery_lsc

0x5773,	// (0x000234ef) level_4_battery_lsc

0x577c,	// (0x000234f8) level_5_battery_lsc

0x5785,	// (0x00023501) level_6_battery_lsc

0x5722,	// (0x0002349e) level_7_battery_lsc

0x578e,	// (0x0002350a) scroll_handle_focus_pane_g1

0x5797,	// (0x00023513) scroll_handle_focus_pane_g2

0x57a0,	// (0x0002351c) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0002d4ac) scroll_handle_focus_pane_g

0xda09,	// (0x0002b785) list_single_2graphic_pane_g1_ParamLimits

0xda09,	// (0x0002b785) list_single_2graphic_pane_g1

0xd420,	// (0x0002b19c) list_single_2graphic_pane_g2_ParamLimits

0xd420,	// (0x0002b19c) list_single_2graphic_pane_g2

0xd3b2,	// (0x0002b12e) list_single_2graphic_pane_g3_ParamLimits

0xd3b2,	// (0x0002b12e) list_single_2graphic_pane_g3

0xda15,	// (0x0002b791) list_single_2graphic_pane_g4_ParamLimits

0xda15,	// (0x0002b791) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0002d4b3) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0002d4b3) list_single_2graphic_pane_g

0xda26,	// (0x0002b7a2) list_single_2graphic_pane_t1_ParamLimits

0xda26,	// (0x0002b7a2) list_single_2graphic_pane_t1

0xda54,	// (0x0002b7d0) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xda54,	// (0x0002b7d0) list_double2_graphic_large_graphic_pane_g1

0xd4c3,	// (0x0002b23f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xd4c3,	// (0x0002b23f) list_double2_graphic_large_graphic_pane_g2

0xd48f,	// (0x0002b20b) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xd48f,	// (0x0002b20b) list_double2_graphic_large_graphic_pane_g3

0xda64,	// (0x0002b7e0) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xda64,	// (0x0002b7e0) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0002d4bc) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0002d4bc) list_double2_graphic_large_graphic_pane_g

0xda70,	// (0x0002b7ec) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xda70,	// (0x0002b7ec) list_double2_graphic_large_graphic_pane_t1

0xda86,	// (0x0002b802) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xda86,	// (0x0002b802) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0002d4c5) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0002d4c5) list_double2_graphic_large_graphic_pane_t

0x587b,	// (0x000235f7) popup_fast_swap_window_ParamLimits

0x587b,	// (0x000235f7) popup_fast_swap_window

0x5897,	// (0x00023613) popup_side_volume_key_window

0x58b1,	// (0x0002362d) stacon_top_pane

0x58bb,	// (0x00023637) status_pane_ParamLimits

0x58bb,	// (0x00023637) status_pane

0xa441,	// (0x000281bd) status_small_pane

0x4afd,	// (0x00022879) control_pane

0x4afd,	// (0x00022879) stacon_bottom_pane

0x50a2,	// (0x00022e1e) scroll_pane_cp121

0x50e6,	// (0x00022e62) set_content_pane

0xa2b6,	// (0x00028032) bg_active_tab_pane_g1_cp1

0x57a9,	// (0x00023525) bg_active_tab_pane_g2_cp1

0xa2bf,	// (0x0002803b) bg_active_tab_pane_g3_cp1

0xa2b6,	// (0x00028032) bg_passive_tab_pane_g1_cp1

0x57a9,	// (0x00023525) bg_passive_tab_pane_g2_cp1

0xa2bf,	// (0x0002803b) bg_passive_tab_pane_g3_cp1

0xa2c8,	// (0x00028044) bg_active_tab_pane_g1_cp2

0x57a9,	// (0x00023525) bg_active_tab_pane_g2_cp2

0xa2d1,	// (0x0002804d) bg_active_tab_pane_g3_cp2

0xa2c8,	// (0x00028044) bg_passive_tab_pane_g1_cp2

0x57a9,	// (0x00023525) bg_passive_tab_pane_g2_cp2

0xa2d1,	// (0x0002804d) bg_passive_tab_pane_g3_cp2

0xa2da,	// (0x00028056) bg_active_tab_pane_g1_cp3

0x57a9,	// (0x00023525) bg_active_tab_pane_g2_cp3

0xa2e3,	// (0x0002805f) bg_active_tab_pane_g3_cp3

0xa2da,	// (0x00028056) bg_passive_tab_pane_g1_cp3

0x57a9,	// (0x00023525) bg_passive_tab_pane_g2_cp3

0xa2e3,	// (0x0002805f) bg_passive_tab_pane_g3_cp3

0xa2ec,	// (0x00028068) bg_active_tab_pane_g1_cp4

0x57a9,	// (0x00023525) bg_active_tab_pane_g2_cp4

0xa2f5,	// (0x00028071) bg_active_tab_pane_g3_cp4

0xa2ec,	// (0x00028068) bg_passive_tab_pane_g1_cp4

0x57a9,	// (0x00023525) bg_passive_tab_pane_g2_cp4

0xa2f5,	// (0x00028071) bg_passive_tab_pane_g3_cp4

0x57f9,	// (0x00023575) bg_active_tab_pane_g1_cp5

0x57a9,	// (0x00023525) bg_active_tab_pane_g2_cp5

0x57f0,	// (0x0002356c) bg_active_tab_pane_g3_cp5

0x57f9,	// (0x00023575) bg_passive_tab_pane_g1_cp5

0x57a9,	// (0x00023525) bg_passive_tab_pane_g2_cp5

0x57f0,	// (0x0002356c) bg_passive_tab_pane_g3_cp5

0xa42b,	// (0x000281a7) list_set_graphic_pane_ParamLimits

0xa42b,	// (0x000281a7) list_set_graphic_pane

0x4afd,	// (0x00022879) bg_set_opt_pane_cp4

0x5802,	// (0x0002357e) list_set_graphic_pane_g1_ParamLimits

0x5802,	// (0x0002357e) list_set_graphic_pane_g1

0x580e,	// (0x0002358a) list_set_graphic_pane_g2_ParamLimits

0x580e,	// (0x0002358a) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0002d4ca) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0002d4ca) list_set_graphic_pane_g

0x0009,

0xfada,	// (0x0002d856) volume_small_pane_cp_g

0x5830,	// (0x000235ac) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x5830,	// (0x000235ac) list_double2_large_graphic_pane_g1_cp2

0x583c,	// (0x000235b8) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x583c,	// (0x000235b8) list_double2_large_graphic_pane_g2_cp2

0x584b,	// (0x000235c7) list_double2_large_graphic_pane_g3_cp2

0x5853,	// (0x000235cf) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x5853,	// (0x000235cf) list_double2_large_graphic_pane_t1_cp2

0x5869,	// (0x000235e5) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x5869,	// (0x000235e5) list_double2_large_graphic_pane_t2_cp2

0x6d24,	// (0x00024aa0) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6d24,	// (0x00024aa0) list_double_large_graphic_pane_g1_cp2

0x6d35,	// (0x00024ab1) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6d35,	// (0x00024ab1) list_double_large_graphic_pane_g2_cp2

0x5996,	// (0x00023712) list_double_large_graphic_pane_g3_cp2

0x6d44,	// (0x00024ac0) list_double_large_graphic_pane_g4_cp

0x6d4c,	// (0x00024ac8) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6d4c,	// (0x00024ac8) list_double_large_graphic_pane_t1_cp2

0x6d63,	// (0x00024adf) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6d63,	// (0x00024adf) list_double_large_graphic_pane_t2_cp2

0x58c9,	// (0x00023645) list_double2_graphic_pane_g1_cp2_ParamLimits

0x58c9,	// (0x00023645) list_double2_graphic_pane_g1_cp2

0x58d5,	// (0x00023651) list_double2_graphic_pane_g2_cp2_ParamLimits

0x58d5,	// (0x00023651) list_double2_graphic_pane_g2_cp2

0x58e4,	// (0x00023660) list_double2_graphic_pane_g3_cp2

0x58ec,	// (0x00023668) list_double2_graphic_pane_t1_cp2_ParamLimits

0x58ec,	// (0x00023668) list_double2_graphic_pane_t1_cp2

0x5902,	// (0x0002367e) list_double2_graphic_pane_t2_cp2_ParamLimits

0x5902,	// (0x0002367e) list_double2_graphic_pane_t2_cp2

0x5914,	// (0x00023690) list_single_number_heading_pane_g1_cp2_ParamLimits

0x5914,	// (0x00023690) list_single_number_heading_pane_g1_cp2

0x5920,	// (0x0002369c) list_single_number_heading_pane_g2_cp2

0x5928,	// (0x000236a4) list_single_number_heading_pane_t1_cp2_ParamLimits

0x5928,	// (0x000236a4) list_single_number_heading_pane_t1_cp2

0x593e,	// (0x000236ba) list_single_number_heading_pane_t2_cp2_ParamLimits

0x593e,	// (0x000236ba) list_single_number_heading_pane_t2_cp2

0x5950,	// (0x000236cc) list_single_number_heading_pane_t3_cp2_ParamLimits

0x5950,	// (0x000236cc) list_single_number_heading_pane_t3_cp2

0x5914,	// (0x00023690) list_single_heading_pane_g1_cp2_ParamLimits

0x5914,	// (0x00023690) list_single_heading_pane_g1_cp2

0x5920,	// (0x0002369c) list_single_heading_pane_g2_cp2

0x5928,	// (0x000236a4) list_single_heading_pane_t1_cp2_ParamLimits

0x5928,	// (0x000236a4) list_single_heading_pane_t1_cp2

0x6b2e,	// (0x000248aa) list_single_heading_pane_t2_cp2_ParamLimits

0x6b2e,	// (0x000248aa) list_single_heading_pane_t2_cp2

0x6ab3,	// (0x0002482f) list_double_graphic_pane_g1_cp2_ParamLimits

0x6ab3,	// (0x0002482f) list_double_graphic_pane_g1_cp2

0x6abf,	// (0x0002483b) list_double_graphic_pane_g2_cp2_ParamLimits

0x6abf,	// (0x0002483b) list_double_graphic_pane_g2_cp2

0x6ace,	// (0x0002484a) list_double_graphic_pane_g3_cp2

0x6ad6,	// (0x00024852) list_double_graphic_pane_t1_cp2_ParamLimits

0x6ad6,	// (0x00024852) list_double_graphic_pane_t1_cp2

0x6aec,	// (0x00024868) list_double_graphic_pane_t2_cp2_ParamLimits

0x6aec,	// (0x00024868) list_double_graphic_pane_t2_cp2

0x598a,	// (0x00023706) list_double_number_pane_g1_cp2_ParamLimits

0x598a,	// (0x00023706) list_double_number_pane_g1_cp2

0x5996,	// (0x00023712) list_double_number_pane_g2_cp2

0x6a79,	// (0x000247f5) list_double_number_pane_t1_cp2_ParamLimits

0x6a79,	// (0x000247f5) list_double_number_pane_t1_cp2

0x6a8b,	// (0x00024807) list_double_number_pane_t2_cp2_ParamLimits

0x6a8b,	// (0x00024807) list_double_number_pane_t2_cp2

0x6aa1,	// (0x0002481d) list_double_number_pane_t3_cp2_ParamLimits

0x6aa1,	// (0x0002481d) list_double_number_pane_t3_cp2

0x69f1,	// (0x0002476d) list_single_graphic_pane_g1_cp2_ParamLimits

0x69f1,	// (0x0002476d) list_single_graphic_pane_g1_cp2

0x5914,	// (0x00023690) list_single_graphic_pane_g2_cp2_ParamLimits

0x5914,	// (0x00023690) list_single_graphic_pane_g2_cp2

0x5920,	// (0x0002369c) list_single_graphic_pane_g3_cp2

0x69c9,	// (0x00024745) list_single_graphic_pane_t1_cp2_ParamLimits

0x69c9,	// (0x00024745) list_single_graphic_pane_t1_cp2

0x5914,	// (0x00023690) list_single_number_pane_g1_cp2_ParamLimits

0x5914,	// (0x00023690) list_single_number_pane_g1_cp2

0x5920,	// (0x0002369c) list_single_number_pane_g2_cp2

0x69c9,	// (0x00024745) list_single_number_pane_t1_cp2_ParamLimits

0x69c9,	// (0x00024745) list_single_number_pane_t1_cp2

0x69df,	// (0x0002475b) list_single_number_pane_t2_cp2_ParamLimits

0x69df,	// (0x0002475b) list_single_number_pane_t2_cp2

0x583c,	// (0x000235b8) list_double2_pane_g1_cp2_ParamLimits

0x583c,	// (0x000235b8) list_double2_pane_g1_cp2

0x584b,	// (0x000235c7) list_double2_pane_g2_cp2

0x5962,	// (0x000236de) list_double2_pane_t1_cp2_ParamLimits

0x5962,	// (0x000236de) list_double2_pane_t1_cp2

0x5978,	// (0x000236f4) list_double2_pane_t2_cp2_ParamLimits

0x5978,	// (0x000236f4) list_double2_pane_t2_cp2

0x598a,	// (0x00023706) list_double_pane_g1_cp2_ParamLimits

0x598a,	// (0x00023706) list_double_pane_g1_cp2

0x5996,	// (0x00023712) list_double_pane_g2_cp2

0x599e,	// (0x0002371a) list_double_pane_t1_cp2_ParamLimits

0x599e,	// (0x0002371a) list_double_pane_t1_cp2

0x59b4,	// (0x00023730) list_double_pane_t2_cp2_ParamLimits

0x59b4,	// (0x00023730) list_double_pane_t2_cp2

0x59dc,	// (0x00023758) list_single_pane_cp2_g3

0x5914,	// (0x00023690) list_single_pane_g1_cp2_ParamLimits

0x5914,	// (0x00023690) list_single_pane_g1_cp2

0x5920,	// (0x0002369c) list_single_pane_g2_cp2

0x59ec,	// (0x00023768) list_single_pane_t1_cp2_ParamLimits

0x59ec,	// (0x00023768) list_single_pane_t1_cp2

0x5a04,	// (0x00023780) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x5a04,	// (0x00023780) list_single_large_graphic_pane_g1_cp2

0x5a10,	// (0x0002378c) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x5a10,	// (0x0002378c) list_single_large_graphic_pane_g2_cp2

0x5a1c,	// (0x00023798) list_single_large_graphic_pane_g3_cp2

0x5a24,	// (0x000237a0) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x5a24,	// (0x000237a0) list_single_large_graphic_pane_g4_cp1

0x5a3e,	// (0x000237ba) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x5a3e,	// (0x000237ba) list_single_large_graphic_pane_t1_cp2

0x69ab,	// (0x00024727) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x69ab,	// (0x00024727) list_single_graphic_heading_pane_g1_cp2

0x6986,	// (0x00024702) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x6986,	// (0x00024702) list_single_graphic_heading_pane_g4_cp2

0x5920,	// (0x0002369c) list_single_graphic_heading_pane_g5_cp2

0x5928,	// (0x000236a4) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5928,	// (0x000236a4) list_single_graphic_heading_pane_t1_cp2

0x69b7,	// (0x00024733) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x69b7,	// (0x00024733) list_single_graphic_heading_pane_t2_cp2

0x697a,	// (0x000246f6) list_single_2graphic_pane_g1_cp2_ParamLimits

0x697a,	// (0x000246f6) list_single_2graphic_pane_g1_cp2

0x6986,	// (0x00024702) list_single_2graphic_pane_g2_cp2_ParamLimits

0x6986,	// (0x00024702) list_single_2graphic_pane_g2_cp2

0x5920,	// (0x0002369c) list_single_2graphic_pane_g3_cp2

0x5f03,	// (0x00023c7f) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5f03,	// (0x00023c7f) list_single_2graphic_pane_g4_cp2

0x6995,	// (0x00024711) list_single_2graphic_pane_t1_cp2_ParamLimits

0x6995,	// (0x00024711) list_single_2graphic_pane_t1_cp2

0x4a7b,	// (0x000227f7) list_highlight_pane_g10_cp1

0x658c,	// (0x00024308) list_highlight_pane_g1_cp1

0x6594,	// (0x00024310) list_highlight_pane_g2_cp1

0x659c,	// (0x00024318) list_highlight_pane_g3_cp1

0x65a4,	// (0x00024320) list_highlight_pane_g4_cp1

0x65ac,	// (0x00024328) list_highlight_pane_g5_cp1

0x65b4,	// (0x00024330) list_highlight_pane_g6_cp1

0x65bc,	// (0x00024338) list_highlight_pane_g7_cp1

0x65c4,	// (0x00024340) list_highlight_pane_g8_cp1

0x65cc,	// (0x00024348) list_highlight_pane_g9_cp1

0xb0d7,	// (0x00028e53) form_field_slider_pane_t3

0xb0e5,	// (0x00028e61) form_field_slider_pane_t4

0x64d6,	// (0x00024252) slider_form_pane_ParamLimits

0x64d6,	// (0x00024252) slider_form_pane

0x4afd,	// (0x00022879) control_abbreviations

0x4afd,	// (0x00022879) control_conventions

0x4afd,	// (0x00022879) control_definitions

0x4afd,	// (0x00022879) format_table_attribute

0x6b78,	// (0x000248f4) bg_popup_preview_window_pane_g9

0x4afd,	// (0x00022879) format_table_data2

0x4afd,	// (0x00022879) format_table_data3

0x4afd,	// (0x00022879) format_table_data_example

0x0008,

0x4afd,	// (0x00022879) intro_purpose

0xf8ea,	// (0x0002d666) bg_popup_preview_window_pane_g

0x4afd,	// (0x00022879) texts_category

0x4afd,	// (0x00022879) texts_graphics

0x5a54,	// (0x000237d0) text_digital

0x5a63,	// (0x000237df) text_primary

0x5a72,	// (0x000237ee) text_primary_small

0x5a81,	// (0x000237fd) text_secondary

0x5a90,	// (0x0002380c) text_title

0x707b,	// (0x00024df7) bg_passive_tab_pane_g1_cp3_srt

0x57a9,	// (0x00023525) bg_passive_tab_pane_g2_cp3_srt

0x7072,	// (0x00024dee) bg_passive_tab_pane_g3_cp3_srt

0x4b61,	// (0x000228dd) bg_active_tab_pane_cp3_srt_ParamLimits

0x4b61,	// (0x000228dd) bg_active_tab_pane_cp3_srt

0x7005,	// (0x00024d81) tabs_4_active_pane_srt_g1

0x9c0c,	// (0x00027988) tabs_4_active_pane_srt_t1_ParamLimits

0x9c0c,	// (0x00027988) tabs_4_active_pane_srt_t1

0x707b,	// (0x00024df7) bg_active_tab_pane_g1_cp3_copy1

0x57a9,	// (0x00023525) bg_active_tab_pane_g2_cp3_copy1

0x7072,	// (0x00024dee) bg_active_tab_pane_g3_cp3_copy1

0x4b61,	// (0x000228dd) tabs_2_long_active_pane_srt_ParamLimits

0x4b61,	// (0x000228dd) tabs_2_long_active_pane_srt

0x4b61,	// (0x000228dd) tabs_2_long_passive_pane_srt_ParamLimits

0x4b61,	// (0x000228dd) tabs_2_long_passive_pane_srt

0x9ee5,	// (0x00027c61) bg_passive_tab_pane_cp4_srt_ParamLimits

0x9ee5,	// (0x00027c61) bg_passive_tab_pane_cp4_srt

0x6f30,	// (0x00024cac) bg_passive_tab_pane_g1_cp4_srt

0x57a9,	// (0x00023525) bg_passive_tab_pane_g2_cp4_srt

0x6f27,	// (0x00024ca3) bg_passive_tab_pane_g3_cp4_srt

0x5ee9,	// (0x00023c65) bg_active_tab_pane_cp4_srt_ParamLimits

0x5ee9,	// (0x00023c65) bg_active_tab_pane_cp4_srt

0x9ed2,	// (0x00027c4e) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9ed2,	// (0x00027c4e) tabs_2_long_active_pane_srt_t1

0x6f30,	// (0x00024cac) bg_active_tab_pane_g1_cp4_srt

0x57a9,	// (0x00023525) bg_active_tab_pane_g2_cp4_srt

0x6f27,	// (0x00024ca3) bg_active_tab_pane_g3_cp4_srt

0x4b4b,	// (0x000228c7) tabs_3_long_active_pane_srt_ParamLimits

0x4b4b,	// (0x000228c7) tabs_3_long_active_pane_srt

0x4b4b,	// (0x000228c7) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x4b4b,	// (0x000228c7) tabs_3_long_passive_pane_cp_srt

0x4b4b,	// (0x000228c7) tabs_3_long_passive_pane_srt_ParamLimits

0x4b4b,	// (0x000228c7) tabs_3_long_passive_pane_srt

0x9ee5,	// (0x00027c61) bg_passive_tab_pane_cp5_srt_ParamLimits

0x9ee5,	// (0x00027c61) bg_passive_tab_pane_cp5_srt

0x57f9,	// (0x00023575) bg_passive_tab_pane_g1_cp5_srt

0x57a9,	// (0x00023525) bg_passive_tab_pane_g2_cp5_srt

0x57f0,	// (0x0002356c) bg_passive_tab_pane_g3_cp5_srt

0x5ee9,	// (0x00023c65) bg_active_tab_pane_cp5_srt_ParamLimits

0x5ee9,	// (0x00023c65) bg_active_tab_pane_cp5_srt

0x9ef1,	// (0x00027c6d) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9ef1,	// (0x00027c6d) tabs_3_long_active_pane_srt_t1

0x57f9,	// (0x00023575) bg_active_tab_pane_g1_cp5_srt

0x57a9,	// (0x00023525) bg_active_tab_pane_g2_cp5_srt

0x57f0,	// (0x0002356c) bg_active_tab_pane_g3_cp5_srt

0x6f19,	// (0x00024c95) navi_text_pane_srt_t1

0x6f11,	// (0x00024c8d) navi_icon_pane_srt_g1

0x5ba8,	// (0x00023924) midp_editing_number_pane_srt

0x5a9f,	// (0x0002381b) midp_ticker_pane_srt

0x5bb0,	// (0x0002392c) midp_ticker_pane_srt_g1

0x5bb8,	// (0x00023934) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0002d4e9) midp_ticker_pane_srt_g

0x5bc0,	// (0x0002393c) midp_ticker_pane_srt_t1

0x6f02,	// (0x00024c7e) midp_editing_number_pane_t1_copy1

0xa44a,	// (0x000281c6) listscroll_midp_pane

0xa44a,	// (0x000281c6) midp_form_pane

0x5aa7,	// (0x00023823) midp_info_popup_window_ParamLimits

0x5aa7,	// (0x00023823) midp_info_popup_window

0x51a7,	// (0x00022f23) bg_popup_sub_pane_cp50_ParamLimits

0x51a7,	// (0x00022f23) bg_popup_sub_pane_cp50

0x61f3,	// (0x00023f6f) listscroll_midp_info_pane_ParamLimits

0x61f3,	// (0x00023f6f) listscroll_midp_info_pane

0x61db,	// (0x00023f57) listscroll_form_midp_pane_ParamLimits

0x61db,	// (0x00023f57) listscroll_form_midp_pane

0x61e7,	// (0x00023f63) scroll_bar_cp050

0xb0bf,	// (0x00028e3b) list_midp_pane

0x7854,	// (0x000255d0) signal_pane_g2_cp

0x610d,	// (0x00023e89) listscroll_midp_info_pane_t1_ParamLimits

0x610d,	// (0x00023e89) listscroll_midp_info_pane_t1

0x6125,	// (0x00023ea1) listscroll_midp_info_pane_t2_ParamLimits

0x6125,	// (0x00023ea1) listscroll_midp_info_pane_t2

0x6163,	// (0x00023edf) listscroll_midp_info_pane_t3_ParamLimits

0x6163,	// (0x00023edf) listscroll_midp_info_pane_t3

0x619d,	// (0x00023f19) listscroll_midp_info_pane_t4_ParamLimits

0x619d,	// (0x00023f19) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0002d5a1) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0002d5a1) listscroll_midp_info_pane_t

0x524a,	// (0x00022fc6) scroll_pane_cp21

0x60b1,	// (0x00023e2d) form_midp_field_choice_group_pane

0x60ba,	// (0x00023e36) form_midp_field_text_pane

0x60f3,	// (0x00023e6f) form_midp_field_time_pane

0x60fb,	// (0x00023e77) form_midp_gauge_slider_pane

0x6104,	// (0x00023e80) form_midp_gauge_wait_pane

0x4afd,	// (0x00022879) form_midp_image_pane

0xdb8e,	// (0x0002b90a) list_single_midp_pane_ParamLimits

0xdb8e,	// (0x0002b90a) list_single_midp_pane

0x607f,	// (0x00023dfb) form_midp_field_text_pane_t1

0x5e9f,	// (0x00023c1b) input_focus_pane_cp050

0x60a0,	// (0x00023e1c) list_midp_form_text_pane

0x604e,	// (0x00023dca) form_midp_field_choice_group_pane_t1

0x605c,	// (0x00023dd8) input_focus_pane_cp051

0x6070,	// (0x00023dec) list_midp_choice_pane

0x4afd,	// (0x00022879) status_idle_pane

0x6032,	// (0x00023dae) form_midp_field_time_pane_t1

0x4a7b,	// (0x000227f7) wait_anim_pane_g2_copy1

0x6040,	// (0x00023dbc) form_midp_field_time_pane_t2

0x0001,

0x5b12,	// (0x0002388e) aid_navinavi_width_2_pane

0xf820,	// (0x0002d59c) form_midp_field_time_pane_t

0x4afd,	// (0x00022879) input_focus_pane_cp052

0x4afd,	// (0x00022879) bg_input_focus_pane_cp040

0x600e,	// (0x00023d8a) form_midp_gauge_slider_pane_t1

0x601c,	// (0x00023d98) form_midp_gauge_slider_pane_t2

0xb0a3,	// (0x00028e1f) form_midp_gauge_slider_pane_t3

0xb0b1,	// (0x00028e2d) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0002d593) form_midp_gauge_slider_pane_t

0x602a,	// (0x00023da6) form_midp_slider_pane

0x4b61,	// (0x000228dd) bg_input_focus_pane_cp041_ParamLimits

0x4b61,	// (0x000228dd) bg_input_focus_pane_cp041

0x5fde,	// (0x00023d5a) form_midp_gauge_wait_pane_t1_ParamLimits

0x5fde,	// (0x00023d5a) form_midp_gauge_wait_pane_t1

0x5ff0,	// (0x00023d6c) form_midp_gauge_wait_pane_t2_ParamLimits

0x5ff0,	// (0x00023d6c) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0002d58e) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0002d58e) form_midp_gauge_wait_pane_t

0x6002,	// (0x00023d7e) form_midp_wait_pane_ParamLimits

0x6002,	// (0x00023d7e) form_midp_wait_pane

0x5fa8,	// (0x00023d24) form_midp_image_pane_g1

0x5fb1,	// (0x00023d2d) form_midp_image_pane_t1

0x5fc0,	// (0x00023d3c) form_midp_image_pane_t2

0x5fcf,	// (0x00023d4b) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0002d587) form_midp_image_pane_t

0x5f9f,	// (0x00023d1b) list_single_midp_pane_g1

0xdb7f,	// (0x0002b8fb) list_single_midp_pane_t1

0x5f8b,	// (0x00023d07) list_midp_form_item_pane_ParamLimits

0x5f8b,	// (0x00023d07) list_midp_form_item_pane

0x5aba,	// (0x00023836) list_midp_form_item_pane_t1

0x5ac9,	// (0x00023845) midp_ticker_pane_g1

0x5ad5,	// (0x00023851) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0002d4cf) midp_ticker_pane_g

0x5ae1,	// (0x0002385d) midp_ticker_pane_t1

0x6f02,	// (0x00024c7e) midp_editing_number_pane_t1

0x6f8a,	// (0x00024d06) midp_editing_number_pane

0x6f96,	// (0x00024d12) midp_ticker_pane

0x6ef2,	// (0x00024c6e) ai_message_heading_pane

0x4afd,	// (0x00022879) bg_popup_window_pane_cp14

0x6efa,	// (0x00024c76) listscroll_ai_message_pane

0x6e7c,	// (0x00024bf8) ai_message_heading_pane_g1_ParamLimits

0x6e7c,	// (0x00024bf8) ai_message_heading_pane_g1

0x6e88,	// (0x00024c04) ai_message_heading_pane_g2_ParamLimits

0x6e88,	// (0x00024c04) ai_message_heading_pane_g2

0x6e94,	// (0x00024c10) ai_message_heading_pane_g3_ParamLimits

0x6e94,	// (0x00024c10) ai_message_heading_pane_g3

0x6ea0,	// (0x00024c1c) ai_message_heading_pane_g4_ParamLimits

0x6ea0,	// (0x00024c1c) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0002d6c8) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0002d6c8) ai_message_heading_pane_g

0x6eac,	// (0x00024c28) ai_message_heading_pane_t1_ParamLimits

0x6eac,	// (0x00024c28) ai_message_heading_pane_t1

0x6ec6,	// (0x00024c42) ai_message_heading_pane_t2_ParamLimits

0x6ec6,	// (0x00024c42) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0002d6d1) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0002d6d1) ai_message_heading_pane_t

0x6ed8,	// (0x00024c54) bg_popup_heading_pane_cp1_ParamLimits

0x6ed8,	// (0x00024c54) bg_popup_heading_pane_cp1

0x6e6a,	// (0x00024be6) list_ai_message_pane_ParamLimits

0x6e6a,	// (0x00024be6) list_ai_message_pane

0x524a,	// (0x00022fc6) scroll_pane_cp10

0x6e06,	// (0x00024b82) list_ai_message_pane_g1

0x6e0e,	// (0x00024b8a) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0002d6a5) list_ai_message_pane_g

0x6e16,	// (0x00024b92) list_ai_message_pane_t1_ParamLimits

0x6e16,	// (0x00024b92) list_ai_message_pane_t1

0x6e2b,	// (0x00024ba7) list_ai_message_pane_t2_ParamLimits

0x6e2b,	// (0x00024ba7) list_ai_message_pane_t2

0x6e40,	// (0x00024bbc) list_ai_message_pane_t3_ParamLimits

0x6e40,	// (0x00024bbc) list_ai_message_pane_t3

0x6e55,	// (0x00024bd1) list_ai_message_pane_t4_ParamLimits

0x6e55,	// (0x00024bd1) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0002d6aa) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0002d6aa) list_ai_message_pane_t

0x6df4,	// (0x00024b70) cell_ai_soft_ind_pane_ParamLimits

0x6df4,	// (0x00024b70) cell_ai_soft_ind_pane

0x5af3,	// (0x0002386f) cell_ai_soft_ind_pane_g1_ParamLimits

0x5af3,	// (0x0002386f) cell_ai_soft_ind_pane_g1

0x4afd,	// (0x00022879) grid_highlight_cp1

0x5b00,	// (0x0002387c) text_secondary_cp56_ParamLimits

0x5b00,	// (0x0002387c) text_secondary_cp56

0x6dc9,	// (0x00024b45) example_general_pane_ParamLimits

0x6dc9,	// (0x00024b45) example_general_pane

0x6dd5,	// (0x00024b51) example_parent_pane_g1_ParamLimits

0x6dd5,	// (0x00024b51) example_parent_pane_g1

0x6de1,	// (0x00024b5d) example_parent_pane_t1_ParamLimits

0x6de1,	// (0x00024b5d) example_parent_pane_t1

0xaa7c,	// (0x000287f8) popup_preview_text_window_ParamLimits

0xaa7c,	// (0x000287f8) popup_preview_text_window

0x59e4,	// (0x00023760) list_single_pane_cp2_g4

0x4d62,	// (0x00022ade) bg_popup_preview_window_pane_ParamLimits

0x4d62,	// (0x00022ade) bg_popup_preview_window_pane

0x6b80,	// (0x000248fc) popup_preview_text_window_t1_ParamLimits

0x6b80,	// (0x000248fc) popup_preview_text_window_t1

0x6b9e,	// (0x0002491a) popup_preview_text_window_t2_ParamLimits

0x6b9e,	// (0x0002491a) popup_preview_text_window_t2

0x6be7,	// (0x00024963) popup_preview_text_window_t3_ParamLimits

0x6be7,	// (0x00024963) popup_preview_text_window_t3

0x6c2c,	// (0x000249a8) popup_preview_text_window_t4_ParamLimits

0x6c2c,	// (0x000249a8) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0002d679) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0002d679) popup_preview_text_window_t

0x6caa,	// (0x00024a26) scroll_pane_cp11

0x5e2b,	// (0x00023ba7) bg_popup_preview_window_pane_g1

0x6b40,	// (0x000248bc) bg_popup_preview_window_pane_g2

0x6b48,	// (0x000248c4) bg_popup_preview_window_pane_g3

0x6b50,	// (0x000248cc) bg_popup_preview_window_pane_g4

0x6b58,	// (0x000248d4) bg_popup_preview_window_pane_g5

0x6b60,	// (0x000248dc) bg_popup_preview_window_pane_g6

0x6b68,	// (0x000248e4) bg_popup_preview_window_pane_g7

0x6b70,	// (0x000248ec) bg_popup_preview_window_pane_g8

0x9876,	// (0x000275f2) aid_popup_width_pane

0xaa5e,	// (0x000287da) popup_midp_note_alarm_window_ParamLimits

0xaa5e,	// (0x000287da) popup_midp_note_alarm_window

0x50ef,	// (0x00022e6b) data_form_pane_ParamLimits

0xd8a2,	// (0x0002b61e) form_field_data_pane_g1

0x9e94,	// (0x00027c10) form_field_data_pane_t1_ParamLimits

0x50fb,	// (0x00022e77) input_focus_pane_ParamLimits

0x5109,	// (0x00022e85) data_form_wide_pane_ParamLimits

0xd8aa,	// (0x0002b626) form_field_data_wide_pane_g1

0xd8b6,	// (0x0002b632) form_field_data_wide_pane_t1_ParamLimits

0x4f21,	// (0x00022c9d) input_focus_pane_cp6_ParamLimits

0x9eac,	// (0x00027c28) input_popup_find_pane_g1_ParamLimits

0x9eac,	// (0x00027c28) input_popup_find_pane_g1

0x9fbd,	// (0x00027d39) aid_navi_side_left_pane

0x9fcd,	// (0x00027d49) aid_navi_side_right_pane

0x665d,	// (0x000243d9) bg_popup_window_pane_cp30_ParamLimits

0x665d,	// (0x000243d9) bg_popup_window_pane_cp30

0x66d7,	// (0x00024453) popup_midp_note_alarm_window_g1_ParamLimits

0x66d7,	// (0x00024453) popup_midp_note_alarm_window_g1

0x6707,	// (0x00024483) popup_midp_note_alarm_window_t1_ParamLimits

0x6707,	// (0x00024483) popup_midp_note_alarm_window_t1

0x67a8,	// (0x00024524) popup_midp_note_alarm_window_t2_ParamLimits

0x67a8,	// (0x00024524) popup_midp_note_alarm_window_t2

0x6856,	// (0x000245d2) popup_midp_note_alarm_window_t3_ParamLimits

0x6856,	// (0x000245d2) popup_midp_note_alarm_window_t3

0x687e,	// (0x000245fa) popup_midp_note_alarm_window_t4_ParamLimits

0x687e,	// (0x000245fa) popup_midp_note_alarm_window_t4

0x689e,	// (0x0002461a) popup_midp_note_alarm_window_t5_ParamLimits

0x689e,	// (0x0002461a) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0002d616) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0002d616) popup_midp_note_alarm_window_t

0x694a,	// (0x000246c6) wait_bar_pane_cp1_ParamLimits

0x694a,	// (0x000246c6) wait_bar_pane_cp1

0x4afd,	// (0x00022879) wait_anim_pane_copy1

0x4afd,	// (0x00022879) wait_border_pane_copy1

0x63a3,	// (0x0002411f) wait_border_pane_g1_copy1

0xd8d0,	// (0x0002b64c) form_field_popup_pane_g1

0xd8d8,	// (0x0002b654) form_field_popup_pane_t1_ParamLimits

0x50fb,	// (0x00022e77) input_focus_pane_cp7_ParamLimits

0x50ef,	// (0x00022e6b) list_form_pane_ParamLimits

0xd8f0,	// (0x0002b66c) form_field_popup_wide_pane_g1

0xd8f8,	// (0x0002b674) form_field_popup_wide_pane_t1_ParamLimits

0x50fb,	// (0x00022e77) input_focus_pane_cp8_ParamLimits

0x5135,	// (0x00022eb1) list_form_wide_pane_ParamLimits

0x70a3,	// (0x00024e1f) aid_size_cell_graphic_pane

0xd97d,	// (0x0002b6f9) data_form_pane_t1_ParamLimits

0xdbb6,	// (0x0002b932) data_form_wide_pane_t1_ParamLimits

0xacec,	// (0x00028a68) bg_status_flat_pane

0x9b8a,	// (0x00027906) title_pane_t1_ParamLimits

0x4b13,	// (0x0002288f) title_pane_t2_ParamLimits

0x4b39,	// (0x000228b5) title_pane_t3_ParamLimits

0xf557,	// (0x0002d2d3) title_pane_t_ParamLimits

0xa0f5,	// (0x00027e71) level_1_signal_ParamLimits

0xa102,	// (0x00027e7e) level_2_signal_ParamLimits

0xa10f,	// (0x00027e8b) level_3_signal_ParamLimits

0xa11c,	// (0x00027e98) level_4_signal_ParamLimits

0xa129,	// (0x00027ea5) level_5_signal_ParamLimits

0xa136,	// (0x00027eb2) level_6_signal_ParamLimits

0xa143,	// (0x00027ebf) level_7_signal_ParamLimits

0xa0f5,	// (0x00027e71) level_1_battery_ParamLimits

0xa102,	// (0x00027e7e) level_2_battery_ParamLimits

0xa10f,	// (0x00027e8b) level_3_battery_ParamLimits

0xa11c,	// (0x00027e98) level_4_battery_ParamLimits

0xa129,	// (0x00027ea5) level_5_battery_ParamLimits

0xa136,	// (0x00027eb2) level_6_battery_ParamLimits

0xa143,	// (0x00027ebf) level_7_battery_ParamLimits

0x658c,	// (0x00024308) bg_status_flat_pane_g1

0x6594,	// (0x00024310) bg_status_flat_pane_g2

0x659c,	// (0x00024318) bg_status_flat_pane_g3

0x65a4,	// (0x00024320) bg_status_flat_pane_g4

0x65ac,	// (0x00024328) bg_status_flat_pane_g5

0x65b4,	// (0x00024330) bg_status_flat_pane_g6

0x65bc,	// (0x00024338) bg_status_flat_pane_g7

0x9bf2,	// (0x0002796e) tabs_3_active_pane_t1_ParamLimits

0x9bf2,	// (0x0002796e) tabs_3_passive_pane_t1_ParamLimits

0x9c0c,	// (0x00027988) tabs_4_active_pane_t1_ParamLimits

0x9c0c,	// (0x00027988) tabs_4_1_passive_pane_t1_ParamLimits

0x9ec0,	// (0x00027c3c) tabs_2_active_pane_t1_ParamLimits

0x9ec0,	// (0x00027c3c) tabs_2_passive_pane_t1_ParamLimits

0x5ee9,	// (0x00023c65) bg_active_tab_pane_cp4_ParamLimits

0x9ed2,	// (0x00027c4e) tabs_2_long_active_pane_t1_ParamLimits

0x9ee5,	// (0x00027c61) bg_passive_tab_pane_cp4_ParamLimits

0xafcc,	// (0x00028d48) list_single_midp_graphic_pane_t1_ParamLimits

0x5ee9,	// (0x00023c65) bg_active_tab_pane_cp5_ParamLimits

0x9ef1,	// (0x00027c6d) tabs_3_long_active_pane_t1_ParamLimits

0x9ee5,	// (0x00027c61) bg_passive_tab_pane_cp5_ParamLimits

0xafcc,	// (0x00028d48) list_single_midp_graphic_pane_t1

0xacec,	// (0x00028a68) bg_status_flat_pane_ParamLimits

0x5d0a,	// (0x00023a86) indicator_pane_cp2_ParamLimits

0x5d0a,	// (0x00023a86) indicator_pane_cp2

0xae2f,	// (0x00028bab) navi_pane_srt_ParamLimits

0xae2f,	// (0x00028bab) navi_pane_srt

0x5d32,	// (0x00023aae) popup_clock_digital_analogue_window_cp1

0x4ba5,	// (0x00022921) indicator_pane_t1

0x5a9f,	// (0x0002381b) copy_highlight_pane

0x5a9f,	// (0x0002381b) cursor_graphics_pane

0x5a9f,	// (0x0002381b) graphic_within_text_pane

0x5a9f,	// (0x0002381b) link_highlight_pane

0x6c6d,	// (0x000249e9) popup_preview_text_window_t5_ParamLimits

0x6c6d,	// (0x000249e9) popup_preview_text_window_t5

0x5b1a,	// (0x00023896) cursor_digital_pane

0x5b1a,	// (0x00023896) cursor_primary_pane

0x5b2b,	// (0x000238a7) cursor_primary_small_pane

0x5b33,	// (0x000238af) cursor_secondary_pane

0x5b3b,	// (0x000238b7) cursor_title_pane

0x5b1a,	// (0x00023896) link_highlight_digital_pane

0x5b22,	// (0x0002389e) link_highlight_primary_pane

0x5b2b,	// (0x000238a7) link_highlight_primary_small_pane

0x5b33,	// (0x000238af) link_highlight_secondary_pane

0x5b3b,	// (0x000238b7) link_highlight_title_pane

0x5b1a,	// (0x00023896) copy_highlight_digital_pane

0x5b1a,	// (0x00023896) copy_highlight_primary_pane

0x5b2b,	// (0x000238a7) copy_highlight_primary_small_pane

0x5b33,	// (0x000238af) copy_highlight_secondary_pane

0x5b3b,	// (0x000238b7) copy_highlight_title_pane

0x5b33,	// (0x000238af) graphic_text_digital_pane

0x660c,	// (0x00024388) graphic_text_primary_pane

0x6615,	// (0x00024391) graphic_text_primary_small_pane

0x5b2b,	// (0x000238a7) graphic_text_secondary_pane

0x5b1a,	// (0x00023896) graphic_text_title_pane

0xa4f1,	// (0x0002826d) cursor_primary_pane_g1

0x65fe,	// (0x0002437a) cursor_text_primary_t1

0xb103,	// (0x00028e7f) cursor_primary_small_pane_g1

0x65f0,	// (0x0002436c) cursor_text_primary_small_t1

0xb0fb,	// (0x00028e77) cursor_primary_small_pane_g1_copy1

0x65e2,	// (0x0002435e) cursor_text_primary_small_t1_copy1

0x65d4,	// (0x00024350) cursor_text_title_t1

0xb0f3,	// (0x00028e6f) cursor_title_pane_g1

0xa4f1,	// (0x0002826d) cursor_digital_pane_g1

0x5b43,	// (0x000238bf) cursor_text_digital_t1

0x5b51,	// (0x000238cd) link_highlight_primary_pane_g1

0x657d,	// (0x000242f9) link_highlight_primary_pane_t1

0x5b51,	// (0x000238cd) link_highlight_primary_small_pane_g1

0x5b59,	// (0x000238d5) link_highlight_primary_small_pane_t1

0x5b68,	// (0x000238e4) link_highlight_secondary_pane_g1

0x5b70,	// (0x000238ec) link_highlight_secondary_pane_t1

0x64e2,	// (0x0002425e) link_highlight_title_pane_g1

0x64f9,	// (0x00024275) link_highlight_title_pane_t1

0x64e2,	// (0x0002425e) link_highlight_digital_pane_g1

0x64ea,	// (0x00024266) link_highlight_digital_pane_t1

0x63be,	// (0x0002413a) copy_highlight_primary_pane_g1

0x63e4,	// (0x00024160) copy_highlight_primary_pane_t1

0x63be,	// (0x0002413a) copy_highlight_primary_small_pane_g1

0x63d5,	// (0x00024151) copy_highlight_primary_small_pane_t1

0x5b7f,	// (0x000238fb) copy_highlight_secondary_pane_g1

0x5b87,	// (0x00023903) copy_highlight_secondary_pane_t1

0x63be,	// (0x0002413a) copy_highlight_title_pane_g1

0x63c6,	// (0x00024142) copy_highlight_title_pane_t1

0x63be,	// (0x0002413a) copy_highlight_digital_pane_g1

0x719e,	// (0x00024f1a) copy_highlight_digital_pane_t1

0x70f2,	// (0x00024e6e) graphic_text_primary_pane_g1

0x7182,	// (0x00024efe) graphic_text_primary_pane_t1

0x7190,	// (0x00024f0c) graphic_text_primary_pane_t2

0x0001,

0xf9c4,	// (0x0002d740) graphic_text_primary_pane_t

0x715e,	// (0x00024eda) graphic_text_primary_small_pane_g1

0x7166,	// (0x00024ee2) graphic_text_primary_small_pane_t1

0x7174,	// (0x00024ef0) graphic_text_primary_small_pane_t2

0x0001,

0xf9bf,	// (0x0002d73b) graphic_text_primary_small_pane_t

0x713a,	// (0x00024eb6) graphic_text_secondary_pane_g1

0x7142,	// (0x00024ebe) graphic_text_secondary_pane_t1

0x7150,	// (0x00024ecc) graphic_text_secondary_pane_t2

0x0001,

0xf9ba,	// (0x0002d736) graphic_text_secondary_pane_t

0x7116,	// (0x00024e92) graphic_text_title_pane_g1

0x711e,	// (0x00024e9a) graphic_text_title_pane_t1

0x712c,	// (0x00024ea8) graphic_text_title_pane_t2

0x0001,

0xf9b5,	// (0x0002d731) graphic_text_title_pane_t

0x70f2,	// (0x00024e6e) graphic_text_digital_pane_g1

0x70fa,	// (0x00024e76) graphic_text_digital_pane_t1

0x7108,	// (0x00024e84) graphic_text_digital_pane_t2

0x0001,

0xf9b0,	// (0x0002d72c) graphic_text_digital_pane_t

0x4b61,	// (0x000228dd) navi_icon_pane_srt_ParamLimits

0x4b61,	// (0x000228dd) navi_icon_pane_srt

0x4afd,	// (0x00022879) navi_midp_pane_srt

0x4afd,	// (0x00022879) navi_navi_pane_srt

0x4b61,	// (0x000228dd) navi_text_pane_srt_ParamLimits

0x4b61,	// (0x000228dd) navi_text_pane_srt

0x6fba,	// (0x00024d36) navi_navi_icon_text_pane_srt

0x6fd4,	// (0x00024d50) navi_navi_pane_srt_g1_ParamLimits

0x6fd4,	// (0x00024d50) navi_navi_pane_srt_g1

0x6fc2,	// (0x00024d3e) navi_navi_pane_srt_g2_ParamLimits

0x6fc2,	// (0x00024d3e) navi_navi_pane_srt_g2

0x0001,

0xf8e5,	// (0x0002d661) navi_navi_pane_srt_g_ParamLimits

0xf8e5,	// (0x0002d661) navi_navi_pane_srt_g

0x6fe6,	// (0x00024d62) navi_navi_tabs_pane_srt

0x6fba,	// (0x00024d36) navi_navi_text_pane_srt

0x6fba,	// (0x00024d36) navi_navi_volume_pane_srt

0x70e3,	// (0x00024e5f) navi_navi_text_pane_srt_t1

0xb722,	// (0x0002949e) navi_navi_volume_pane_srt_g1

0xb72a,	// (0x000294a6) volume_small_pane_srt_ParamLimits

0xb72a,	// (0x000294a6) volume_small_pane_srt

0xa4f9,	// (0x00028275) volume_small_pane_srt_g1_ParamLimits

0xa4f9,	// (0x00028275) volume_small_pane_srt_g1

0xa509,	// (0x00028285) volume_small_pane_srt_g2_ParamLimits

0xa509,	// (0x00028285) volume_small_pane_srt_g2

0xa51a,	// (0x00028296) volume_small_pane_srt_g3_ParamLimits

0xa51a,	// (0x00028296) volume_small_pane_srt_g3

0xa52b,	// (0x000282a7) volume_small_pane_srt_g4_ParamLimits

0xa52b,	// (0x000282a7) volume_small_pane_srt_g4

0xa53c,	// (0x000282b8) volume_small_pane_srt_g5_ParamLimits

0xa53c,	// (0x000282b8) volume_small_pane_srt_g5

0xa54d,	// (0x000282c9) volume_small_pane_srt_g6_ParamLimits

0xa54d,	// (0x000282c9) volume_small_pane_srt_g6

0xa55e,	// (0x000282da) volume_small_pane_srt_g7_ParamLimits

0xa55e,	// (0x000282da) volume_small_pane_srt_g7

0xa56f,	// (0x000282eb) volume_small_pane_srt_g8_ParamLimits

0xa56f,	// (0x000282eb) volume_small_pane_srt_g8

0xa580,	// (0x000282fc) volume_small_pane_srt_g9_ParamLimits

0xa580,	// (0x000282fc) volume_small_pane_srt_g9

0xa591,	// (0x0002830d) volume_small_pane_srt_g10_ParamLimits

0xa591,	// (0x0002830d) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0002d4d4) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0002d4d4) volume_small_pane_srt_g

0x4e0b,	// (0x00022b87) query_popup_data_pane_cp2

0x70c9,	// (0x00024e45) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x70c9,	// (0x00024e45) navi_navi_icon_text_pane_srt_t1

0x660c,	// (0x00024388) navi_tabs_2_long_pane_srt

0x660c,	// (0x00024388) navi_tabs_2_pane_srt

0x660c,	// (0x00024388) navi_tabs_3_long_pane_srt

0x660c,	// (0x00024388) navi_tabs_3_pane_srt

0x660c,	// (0x00024388) navi_tabs_4_pane_srt

0xb702,	// (0x0002947e) tabs_2_active_pane_srt_ParamLimits

0xb702,	// (0x0002947e) tabs_2_active_pane_srt

0xb712,	// (0x0002948e) tabs_2_passive_pane_srt_ParamLimits

0xb712,	// (0x0002948e) tabs_2_passive_pane_srt

0x5281,	// (0x00022ffd) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5281,	// (0x00022ffd) bg_passive_tab_pane_cp1_srt

0x7026,	// (0x00024da2) bg_passive_tab_pane_g1_cp1_srt

0x57a9,	// (0x00023525) bg_passive_tab_pane_g2_cp1_srt

0x701d,	// (0x00024d99) bg_passive_tab_pane_g3_cp1_srt

0x4b61,	// (0x000228dd) bg_active_tab_pane_cp1_srt_ParamLimits

0x4b61,	// (0x000228dd) bg_active_tab_pane_cp1_srt

0x7015,	// (0x00024d91) tabs_2_active_pane_srt_g1

0x9ec0,	// (0x00027c3c) tabs_2_active_pane_srt_t1_ParamLimits

0x9ec0,	// (0x00027c3c) tabs_2_active_pane_srt_t1

0x7026,	// (0x00024da2) bg_active_tab_pane_g1_cp1_srt

0x57a9,	// (0x00023525) bg_active_tab_pane_g2_cp1_srt

0x701d,	// (0x00024d99) bg_active_tab_pane_g3_cp1_srt

0xb6cf,	// (0x0002944b) tabs_3_active_pane_srt_ParamLimits

0xb6cf,	// (0x0002944b) tabs_3_active_pane_srt

0xb6e0,	// (0x0002945c) tabs_3_passive_pane_cp_srt_ParamLimits

0xb6e0,	// (0x0002945c) tabs_3_passive_pane_cp_srt

0xb6f1,	// (0x0002946d) tabs_3_passive_pane_srt_ParamLimits

0xb6f1,	// (0x0002946d) tabs_3_passive_pane_srt

0x5281,	// (0x00022ffd) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5281,	// (0x00022ffd) bg_passive_tab_pane_cp2_srt

0x5b9f,	// (0x0002391b) bg_passive_tab_pane_g1_cp2_srt

0x57a9,	// (0x00023525) bg_passive_tab_pane_g2_cp2_srt

0x5b96,	// (0x00023912) bg_passive_tab_pane_g3_cp2_srt

0x4b61,	// (0x000228dd) bg_active_tab_pane_cp2_srt_ParamLimits

0x4b61,	// (0x000228dd) bg_active_tab_pane_cp2_srt

0x70b9,	// (0x00024e35) tabs_3_active_pane_srt_g1

0x9bf2,	// (0x0002796e) tabs_3_active_pane_srt_t1_ParamLimits

0x9bf2,	// (0x0002796e) tabs_3_active_pane_srt_t1

0x5b9f,	// (0x0002391b) bg_active_tab_pane_g1_cp2_srt

0x57a9,	// (0x00023525) bg_active_tab_pane_g2_cp2_srt

0x5b96,	// (0x00023912) bg_active_tab_pane_g3_cp2_srt

0xb687,	// (0x00029403) tabs_4_active_pane_srt_ParamLimits

0xb687,	// (0x00029403) tabs_4_active_pane_srt

0xb699,	// (0x00029415) tabs_4_passive_pane_cp2_srt_ParamLimits

0xb699,	// (0x00029415) tabs_4_passive_pane_cp2_srt

0xa79e,	// (0x0002851a) aid_size_cell_toolbar

0x9ee5,	// (0x00027c61) main_idle_act_pane_ParamLimits

0xa919,	// (0x00028695) popup_large_graphic_colour_window_ParamLimits

0xabcd,	// (0x00028949) popup_toolbar_window_ParamLimits

0xabcd,	// (0x00028949) popup_toolbar_window

0xdbf9,	// (0x0002b975) list_single_graphic_2heading_pane_ParamLimits

0xdbf9,	// (0x0002b975) list_single_graphic_2heading_pane

0x5446,	// (0x000231c2) aid_size_cell_apps_grid_lsc_pane

0x5458,	// (0x000231d4) aid_size_cell_apps_grid_prt_pane

0x5281,	// (0x00022ffd) bg_wml_button_pane_cp1_ParamLimits

0x5281,	// (0x00022ffd) bg_wml_button_pane_cp1

0x607f,	// (0x00023dfb) form_midp_field_text_pane_t1_ParamLimits

0x5e9f,	// (0x00023c1b) input_focus_pane_cp050_ParamLimits

0x60a0,	// (0x00023e1c) list_midp_form_text_pane_ParamLimits

0x605c,	// (0x00023dd8) input_focus_pane_cp051_ParamLimits

0x6070,	// (0x00023dec) list_midp_choice_pane_ParamLimits

0x5f59,	// (0x00023cd5) list_single_2graphic_pane_cp3_ParamLimits

0x5f59,	// (0x00023cd5) list_single_2graphic_pane_cp3

0x5f6c,	// (0x00023ce8) list_single_midp_graphic_pane_ParamLimits

0x5f6c,	// (0x00023ce8) list_single_midp_graphic_pane

0x97ec,	// (0x00027568) list_single_graphic_2heading_pane_g1_ParamLimits

0x97ec,	// (0x00027568) list_single_graphic_2heading_pane_g1

0x97f8,	// (0x00027574) list_single_graphic_2heading_pane_g4_ParamLimits

0x97f8,	// (0x00027574) list_single_graphic_2heading_pane_g4

0x9804,	// (0x00027580) list_single_graphic_2heading_pane_g5_ParamLimits

0x9804,	// (0x00027580) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0002d527) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0002d527) list_single_graphic_2heading_pane_g

0x9810,	// (0x0002758c) list_single_graphic_2heading_pane_t1_ParamLimits

0x9810,	// (0x0002758c) list_single_graphic_2heading_pane_t1

0x9824,	// (0x000275a0) list_single_graphic_2heading_pane_t2_ParamLimits

0x9824,	// (0x000275a0) list_single_graphic_2heading_pane_t2

0x983e,	// (0x000275ba) list_single_graphic_2heading_pane_t3_ParamLimits

0x983e,	// (0x000275ba) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0002d52e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0002d52e) list_single_graphic_2heading_pane_t

0x5d75,	// (0x00023af1) bg_popup_sub_pane_cp2

0x5d9b,	// (0x00023b17) grid_toobar_pane

0xaf48,	// (0x00028cc4) cell_toolbar_pane_ParamLimits

0xaf48,	// (0x00028cc4) cell_toolbar_pane

0x5dd1,	// (0x00023b4d) cell_toolbar_pane_g1_ParamLimits

0x5dd1,	// (0x00023b4d) cell_toolbar_pane_g1

0x5de3,	// (0x00023b5f) cell_toolbar_pane_g2_ParamLimits

0x5de3,	// (0x00023b5f) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0002d53c) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0002d53c) cell_toolbar_pane_g

0x5e05,	// (0x00023b81) grid_highlight_pane_cp2_ParamLimits

0x5e05,	// (0x00023b81) grid_highlight_pane_cp2

0x5e1f,	// (0x00023b9b) toolbar_button_pane

0x5e2b,	// (0x00023ba7) toolbar_button_pane_g1

0x5e3b,	// (0x00023bb7) toolbar_button_pane_g2

0x5e33,	// (0x00023baf) toolbar_button_pane_g3

0x5e4b,	// (0x00023bc7) toolbar_button_pane_g4

0x5e43,	// (0x00023bbf) toolbar_button_pane_g5

0x5e53,	// (0x00023bcf) toolbar_button_pane_g6

0x5e5b,	// (0x00023bd7) toolbar_button_pane_g7

0x5e6b,	// (0x00023be7) toolbar_button_pane_g8

0x5e63,	// (0x00023bdf) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0002d541) toolbar_button_pane_g

0xaf77,	// (0x00028cf3) list_single_2graphic_pane_g1_cp3_ParamLimits

0xaf77,	// (0x00028cf3) list_single_2graphic_pane_g1_cp3

0xaf83,	// (0x00028cff) list_single_2graphic_pane_g2_cp3_ParamLimits

0xaf83,	// (0x00028cff) list_single_2graphic_pane_g2_cp3

0xaf92,	// (0x00028d0e) list_single_2graphic_pane_g3_cp3

0xaf9a,	// (0x00028d16) list_single_2graphic_pane_g4_cp3_ParamLimits

0xaf9a,	// (0x00028d16) list_single_2graphic_pane_g4_cp3

0xafa6,	// (0x00028d22) list_single_2graphic_pane_t1_cp3_ParamLimits

0xafa6,	// (0x00028d22) list_single_2graphic_pane_t1_cp3

0xafc0,	// (0x00028d3c) list_single_midp_graphic_pane_g2_ParamLimits

0xafc0,	// (0x00028d3c) list_single_midp_graphic_pane_g2

0xa7a6,	// (0x00028522) aid_zoom_text_primary

0x97e4,	// (0x00027560) aid_zoom_text_secondary

0xa5d2,	// (0x0002834e) status_small_pane_g7_ParamLimits

0xa5d2,	// (0x0002834e) status_small_pane_g7

0xa5f5,	// (0x00028371) status_small_pane_t1_ParamLimits

0x9b6d,	// (0x000278e9) title_pane_g2

0x0003,

0xf54e,	// (0x0002d2ca) title_pane_g

0x9dbf,	// (0x00027b3b) aid_size_cell_colour_1_pane_ParamLimits

0x9dbf,	// (0x00027b3b) aid_size_cell_colour_1_pane

0x9dd3,	// (0x00027b4f) aid_size_cell_colour_2_pane_ParamLimits

0x9dd3,	// (0x00027b4f) aid_size_cell_colour_2_pane

0x9de7,	// (0x00027b63) aid_size_cell_colour_3_pane_ParamLimits

0x9de7,	// (0x00027b63) aid_size_cell_colour_3_pane

0x9dfb,	// (0x00027b77) aid_size_cell_colour_4_pane_ParamLimits

0x9dfb,	// (0x00027b77) aid_size_cell_colour_4_pane

0x9f1f,	// (0x00027c9b) title_pane_stacon_g1_ParamLimits

0x9f1f,	// (0x00027c9b) title_pane_stacon_g1

0x643b,	// (0x000241b7) popup_note_wait_window_g3_ParamLimits

0x643b,	// (0x000241b7) popup_note_wait_window_g3

0x64b1,	// (0x0002422d) popup_note_wait_window_t5_ParamLimits

0x64b1,	// (0x0002422d) popup_note_wait_window_t5

0x4afd,	// (0x00022879) main_feb_china_hwr_fs_writing_pane

0xa82e,	// (0x000285aa) popup_feb_china_hwr_fs_window_ParamLimits

0xa82e,	// (0x000285aa) popup_feb_china_hwr_fs_window

0xafe2,	// (0x00028d5e) aid_size_cell_hwr_fs_ParamLimits

0xafe2,	// (0x00028d5e) aid_size_cell_hwr_fs

0x5e9f,	// (0x00023c1b) bg_popup_sub_pane_cp3_ParamLimits

0x5e9f,	// (0x00023c1b) bg_popup_sub_pane_cp3

0xaff7,	// (0x00028d73) grid_hwr_fs_pane_ParamLimits

0xaff7,	// (0x00028d73) grid_hwr_fs_pane

0xb00b,	// (0x00028d87) linegrid_hwr_fs_pane_ParamLimits

0xb00b,	// (0x00028d87) linegrid_hwr_fs_pane

0xb01b,	// (0x00028d97) cell_hwr_fs_pane_ParamLimits

0xb01b,	// (0x00028d97) cell_hwr_fs_pane

0x5eab,	// (0x00023c27) linegrid_hwr_fs_pane_g1_ParamLimits

0x5eab,	// (0x00023c27) linegrid_hwr_fs_pane_g1

0xb039,	// (0x00028db5) linegrid_hwr_fs_pane_g2_ParamLimits

0xb039,	// (0x00028db5) linegrid_hwr_fs_pane_g2

0x5eb7,	// (0x00023c33) linegrid_hwr_fs_pane_g3_ParamLimits

0x5eb7,	// (0x00023c33) linegrid_hwr_fs_pane_g3

0xb04b,	// (0x00028dc7) linegrid_hwr_fs_pane_g4_ParamLimits

0xb04b,	// (0x00028dc7) linegrid_hwr_fs_pane_g4

0xb065,	// (0x00028de1) linegrid_hwr_fs_pane_g5_ParamLimits

0xb065,	// (0x00028de1) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0002d56c) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0002d56c) linegrid_hwr_fs_pane_g

0x5ec3,	// (0x00023c3f) cell_hwr_fs_pane_g1_ParamLimits

0x5ec3,	// (0x00023c3f) cell_hwr_fs_pane_g1

0x5d43,	// (0x00023abf) cell_hwr_fs_pane_g2_ParamLimits

0x5d43,	// (0x00023abf) cell_hwr_fs_pane_g2

0xb07b,	// (0x00028df7) cell_hwr_fs_pane_g3_ParamLimits

0xb07b,	// (0x00028df7) cell_hwr_fs_pane_g3

0xb088,	// (0x00028e04) cell_hwr_fs_pane_g4_ParamLimits

0xb088,	// (0x00028e04) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0002d577) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0002d577) cell_hwr_fs_pane_g

0xb095,	// (0x00028e11) cell_hwr_fs_pane_t1

0x4afd,	// (0x00022879) grid_highlight_pane_cp6

0x4afd,	// (0x00022879) main_idle_act2_pane

0x5231,	// (0x00022fad) aid_inside_area_popup_secondary

0xb266,	// (0x00028fe2) aid_inside_area_window_primary_ParamLimits

0xb266,	// (0x00028fe2) aid_inside_area_window_primary

0x71ad,	// (0x00024f29) ai2_news_ticker_pane

0x71b5,	// (0x00024f31) aid_size_cell_ai1_link_ParamLimits

0x71b5,	// (0x00024f31) aid_size_cell_ai1_link

0xb73f,	// (0x000294bb) popup_ai2_data_window_ParamLimits

0xb73f,	// (0x000294bb) popup_ai2_data_window

0x71cf,	// (0x00024f4b) popup_ai2_link_window_ParamLimits

0x71cf,	// (0x00024f4b) popup_ai2_link_window

0x5e9f,	// (0x00023c1b) bg_popup_sub_pane_cp4_ParamLimits

0x5e9f,	// (0x00023c1b) bg_popup_sub_pane_cp4

0x71e3,	// (0x00024f5f) grid_ai2_link_pane_ParamLimits

0x71e3,	// (0x00024f5f) grid_ai2_link_pane

0x71fa,	// (0x00024f76) popup_ai2_link_window_g1_ParamLimits

0x71fa,	// (0x00024f76) popup_ai2_link_window_g1

0x7206,	// (0x00024f82) popup_ai2_link_window_g2_ParamLimits

0x7206,	// (0x00024f82) popup_ai2_link_window_g2

0x0001,

0xf9c9,	// (0x0002d745) popup_ai2_link_window_g_ParamLimits

0xf9c9,	// (0x0002d745) popup_ai2_link_window_g

0x7215,	// (0x00024f91) ai2_mp_button_pane

0x721d,	// (0x00024f99) ai2_mp_volume_pane

0x605c,	// (0x00023dd8) bg_popup_sub_pane_cp5_ParamLimits

0x605c,	// (0x00023dd8) bg_popup_sub_pane_cp5

0x7225,	// (0x00024fa1) heading_ai2_gene_pane_ParamLimits

0x7225,	// (0x00024fa1) heading_ai2_gene_pane

0x7231,	// (0x00024fad) list_ai2_gene_pane_ParamLimits

0x7231,	// (0x00024fad) list_ai2_gene_pane

0x7279,	// (0x00024ff5) cell_ai2_link_pane_ParamLimits

0x7279,	// (0x00024ff5) cell_ai2_link_pane

0x728f,	// (0x0002500b) cell_ai2_link_pane_g1

0x4afd,	// (0x00022879) grid_highlight_pane_cp7

0xb786,	// (0x00029502) ai2_mp_volume_pane_g1

0x732c,	// (0x000250a8) ai2_mp_volume_pane_g2

0xb76a,	// (0x000294e6) list_ai2_gene_pane_t1

0x7324,	// (0x000250a0) ai2_mp_volume_pane_g3

0x0002,

0xf9e2,	// (0x0002d75e) ai2_mp_volume_pane_g

0xb78e,	// (0x0002950a) volume_small_pane_cp3

0x7334,	// (0x000250b0) aid_size_cell_ai2_button

0x733c,	// (0x000250b8) grid_ai2_button_pane

0x7345,	// (0x000250c1) cell_ai2_button_pane_ParamLimits

0x7345,	// (0x000250c1) cell_ai2_button_pane

0x4a7b,	// (0x000227f7) cell_ai2_button_pane_g1

0x4afd,	// (0x00022879) grid_highlight_pane_cp8

0x72e4,	// (0x00025060) ai2_gene_pane_t1_ParamLimits

0x72e4,	// (0x00025060) ai2_gene_pane_t1

0xa794,	// (0x00028510) aid_height_parent_landscape

0xb43d,	// (0x000291b9) aid_height_set_list

0x6f4e,	// (0x00024cca) aid_size_parent

0x70a3,	// (0x00024e1f) aid_size_cell_graphic_pane_ParamLimits

0x7241,	// (0x00024fbd) popup_ai2_data_window_g1_ParamLimits

0x7241,	// (0x00024fbd) popup_ai2_data_window_g1

0x724d,	// (0x00024fc9) ai2_news_ticker_pane_g1

0x7255,	// (0x00024fd1) ai2_news_ticker_pane_g2

0x0001,

0xf9ce,	// (0x0002d74a) ai2_news_ticker_pane_g

0x725d,	// (0x00024fd9) ai2_news_ticker_pane_t1

0x726b,	// (0x00024fe7) ai2_news_ticker_pane_t2

0x0001,

0xf9d3,	// (0x0002d74f) ai2_news_ticker_pane_t

0x7084,	// (0x00024e00) heading_ai2_gene_pane_g1

0x7298,	// (0x00025014) heading_ai2_gene_pane_t1_ParamLimits

0x7298,	// (0x00025014) heading_ai2_gene_pane_t1

0x72ad,	// (0x00025029) list_highlight_pane_cp6

0xb753,	// (0x000294cf) ai2_gene_pane_ParamLimits

0xb753,	// (0x000294cf) ai2_gene_pane

0xb778,	// (0x000294f4) list_ai2_gene_pane_t2

0x0001,

0xf9d8,	// (0x0002d754) list_ai2_gene_pane_t

0x72b5,	// (0x00025031) list_highlight_pane_cp8_ParamLimits

0x72b5,	// (0x00025031) list_highlight_pane_cp8

0x72c6,	// (0x00025042) ai2_gene_pane_g1_ParamLimits

0x72c6,	// (0x00025042) ai2_gene_pane_g1

0x72d8,	// (0x00025054) ai2_gene_pane_g2_ParamLimits

0x72d8,	// (0x00025054) ai2_gene_pane_g2

0x0001,

0xf9dd,	// (0x0002d759) ai2_gene_pane_g_ParamLimits

0xf9dd,	// (0x0002d759) ai2_gene_pane_g

0x50a2,	// (0x00022e1e) scroll_pane_cp12

0xa74b,	// (0x000284c7) control_pane_t3_ParamLimits

0xa74b,	// (0x000284c7) control_pane_t3

0xa5e6,	// (0x00028362) status_small_pane_g8_ParamLimits

0xa5e6,	// (0x00028362) status_small_pane_g8

0xa8ee,	// (0x0002866a) popup_find_window_ParamLimits

0xaa70,	// (0x000287ec) popup_note_image_window_ParamLimits

0xd39a,	// (0x0002b116) list_double2_graphic_pane_vc_g1_ParamLimits

0xd39a,	// (0x0002b116) list_double2_graphic_pane_vc_g1

0xdabd,	// (0x0002b839) list_double2_graphic_pane_vc_g2_ParamLimits

0xdabd,	// (0x0002b839) list_double2_graphic_pane_vc_g2

0xdac9,	// (0x0002b845) list_double2_graphic_pane_vc_g3_ParamLimits

0xdac9,	// (0x0002b845) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0002d535) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0002d535) list_double2_graphic_pane_vc_g

0xdad5,	// (0x0002b851) list_double2_graphic_pane_vc_t1_ParamLimits

0xdad5,	// (0x0002b851) list_double2_graphic_pane_vc_t1

0xdabd,	// (0x0002b839) list_single_heading_pane_vc_g1_ParamLimits

0xdabd,	// (0x0002b839) list_single_heading_pane_vc_g1

0xdac9,	// (0x0002b845) list_single_heading_pane_vc_g2_ParamLimits

0xdac9,	// (0x0002b845) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0002d556) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0002d556) list_single_heading_pane_vc_g

0xdaeb,	// (0x0002b867) list_single_heading_pane_vc_t1_ParamLimits

0xdaeb,	// (0x0002b867) list_single_heading_pane_vc_t1

0xdb01,	// (0x0002b87d) list_single_heading_pane_vc_t2_ParamLimits

0xdb01,	// (0x0002b87d) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0002d55b) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0002d55b) list_single_heading_pane_vc_t

0xdb13,	// (0x0002b88f) list_setting_number_pane_vc_g1_ParamLimits

0xdb13,	// (0x0002b88f) list_setting_number_pane_vc_g1

0xdb1f,	// (0x0002b89b) list_setting_number_pane_vc_g2_ParamLimits

0xdb1f,	// (0x0002b89b) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0002d560) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0002d560) list_setting_number_pane_vc_g

0xdb2b,	// (0x0002b8a7) list_setting_number_pane_vc_t1_ParamLimits

0xdb2b,	// (0x0002b8a7) list_setting_number_pane_vc_t1

0xdb3f,	// (0x0002b8bb) list_setting_number_pane_vc_t2_ParamLimits

0xdb3f,	// (0x0002b8bb) list_setting_number_pane_vc_t2

0xdb5b,	// (0x0002b8d7) list_setting_number_pane_vc_t3_ParamLimits

0xdb5b,	// (0x0002b8d7) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0002d565) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0002d565) list_setting_number_pane_vc_t

0xdb73,	// (0x0002b8ef) set_value_pane_vc_ParamLimits

0xdb73,	// (0x0002b8ef) set_value_pane_vc

0xdbf9,	// (0x0002b975) list_double2_graphic_pane_vc_ParamLimits

0xdbf9,	// (0x0002b975) list_double2_graphic_pane_vc

0x6fa9,	// (0x00024d25) list_double2_large_graphic_pane_vc_ParamLimits

0x6fa9,	// (0x00024d25) list_double2_large_graphic_pane_vc

0xdbf9,	// (0x0002b975) list_double2_pane_vc_ParamLimits

0xdbf9,	// (0x0002b975) list_double2_pane_vc

0xdbf9,	// (0x0002b975) list_double_graphic_heading_pane_vc_ParamLimits

0xdbf9,	// (0x0002b975) list_double_graphic_heading_pane_vc

0xdbf9,	// (0x0002b975) list_double_graphic_pane_vc_ParamLimits

0xdbf9,	// (0x0002b975) list_double_graphic_pane_vc

0xdbf9,	// (0x0002b975) list_double_heading_pane_vc_ParamLimits

0xdbf9,	// (0x0002b975) list_double_heading_pane_vc

0xdc0d,	// (0x0002b989) list_double_large_graphic_pane_vc_ParamLimits

0xdc0d,	// (0x0002b989) list_double_large_graphic_pane_vc

0xdbf9,	// (0x0002b975) list_double_number_pane_vc_ParamLimits

0xdbf9,	// (0x0002b975) list_double_number_pane_vc

0xdbf9,	// (0x0002b975) list_double_pane_vc_ParamLimits

0xdbf9,	// (0x0002b975) list_double_pane_vc

0xdbf9,	// (0x0002b975) list_double_time_pane_vc_ParamLimits

0xdbf9,	// (0x0002b975) list_double_time_pane_vc

0xdbf9,	// (0x0002b975) list_setting_number_pane_vc_ParamLimits

0xdbf9,	// (0x0002b975) list_setting_number_pane_vc

0xdbf9,	// (0x0002b975) list_setting_pane_vc_ParamLimits

0xdbf9,	// (0x0002b975) list_setting_pane_vc

0xdbf9,	// (0x0002b975) list_single_graphic_heading_pane_vc_ParamLimits

0xdbf9,	// (0x0002b975) list_single_graphic_heading_pane_vc

0xdbf9,	// (0x0002b975) list_single_heading_pane_vc_ParamLimits

0xdbf9,	// (0x0002b975) list_single_heading_pane_vc

0xdc1e,	// (0x0002b99a) list_single_number_heading_pane_vc_ParamLimits

0xdc1e,	// (0x0002b99a) list_single_number_heading_pane_vc

0xdc62,	// (0x0002b9de) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xdc62,	// (0x0002b9de) list_double_graphic_heading_pane_vc_g1

0xdabd,	// (0x0002b839) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xdabd,	// (0x0002b839) list_double_graphic_heading_pane_vc_g2

0xdac9,	// (0x0002b845) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xdac9,	// (0x0002b845) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e9,	// (0x0002d765) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e9,	// (0x0002d765) list_double_graphic_heading_pane_vc_g

0xdc6e,	// (0x0002b9ea) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xdc6e,	// (0x0002b9ea) list_double_graphic_heading_pane_vc_t1

0xdc84,	// (0x0002ba00) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xdc84,	// (0x0002ba00) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f0,	// (0x0002d76c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f0,	// (0x0002d76c) list_double_graphic_heading_pane_vc_t

0xdb13,	// (0x0002b88f) list_setting_pane_vc_g1_ParamLimits

0xdb13,	// (0x0002b88f) list_setting_pane_vc_g1

0xdb1f,	// (0x0002b89b) list_setting_pane_vc_g2_ParamLimits

0xdb1f,	// (0x0002b89b) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0002d560) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0002d560) list_setting_pane_vc_g

0xdc9c,	// (0x0002ba18) list_setting_pane_vc_t1_ParamLimits

0xdc9c,	// (0x0002ba18) list_setting_pane_vc_t1

0xdcb0,	// (0x0002ba2c) list_setting_pane_vc_t2_ParamLimits

0xdcb0,	// (0x0002ba2c) list_setting_pane_vc_t2

0x0001,

0xfa33,	// (0x0002d7af) list_setting_pane_vc_t_ParamLimits

0xfa33,	// (0x0002d7af) list_setting_pane_vc_t

0xdb73,	// (0x0002b8ef) set_value_pane_cp_vc_ParamLimits

0xdb73,	// (0x0002b8ef) set_value_pane_cp_vc

0xdabd,	// (0x0002b839) list_single_number_heading_pane_vc_g1_ParamLimits

0xdabd,	// (0x0002b839) list_single_number_heading_pane_vc_g1

0xdac9,	// (0x0002b845) list_single_number_heading_pane_vc_g2_ParamLimits

0xdac9,	// (0x0002b845) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0002d556) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0002d556) list_single_number_heading_pane_vc_g

0xdaeb,	// (0x0002b867) list_single_number_heading_pane_vc_t1_ParamLimits

0xdaeb,	// (0x0002b867) list_single_number_heading_pane_vc_t1

0xdcc4,	// (0x0002ba40) list_single_number_heading_pane_vc_t2_ParamLimits

0xdcc4,	// (0x0002ba40) list_single_number_heading_pane_vc_t2

0xdcd6,	// (0x0002ba52) list_single_number_heading_pane_vc_t3_ParamLimits

0xdcd6,	// (0x0002ba52) list_single_number_heading_pane_vc_t3

0x0002,

0xfa38,	// (0x0002d7b4) list_single_number_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x0002d7b4) list_single_number_heading_pane_vc_t

0xd39a,	// (0x0002b116) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xd39a,	// (0x0002b116) list_single_graphic_heading_pane_vc_g1

0xdabd,	// (0x0002b839) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xdabd,	// (0x0002b839) list_single_graphic_heading_pane_vc_g4

0xdac9,	// (0x0002b845) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xdac9,	// (0x0002b845) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x0002d535) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x0002d535) list_single_graphic_heading_pane_vc_g

0xdaeb,	// (0x0002b867) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xdaeb,	// (0x0002b867) list_single_graphic_heading_pane_vc_t1

0xdce8,	// (0x0002ba64) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xdce8,	// (0x0002ba64) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3f,	// (0x0002d7bb) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3f,	// (0x0002d7bb) list_single_graphic_heading_pane_vc_t

0xdabd,	// (0x0002b839) list_double2_pane_vc_g1_ParamLimits

0xdabd,	// (0x0002b839) list_double2_pane_vc_g1

0xdac9,	// (0x0002b845) list_double2_pane_vc_g2_ParamLimits

0xdac9,	// (0x0002b845) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x0002d556) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x0002d556) list_double2_pane_vc_g

0xdcfa,	// (0x0002ba76) list_double2_pane_vc_t1_ParamLimits

0xdcfa,	// (0x0002ba76) list_double2_pane_vc_t1

0xdd10,	// (0x0002ba8c) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xdd10,	// (0x0002ba8c) list_double2_large_graphic_pane_vc_g1

0xdd1c,	// (0x0002ba98) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xdd1c,	// (0x0002ba98) list_double2_large_graphic_pane_vc_g2

0xdd28,	// (0x0002baa4) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xdd28,	// (0x0002baa4) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa44,	// (0x0002d7c0) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa44,	// (0x0002d7c0) list_double2_large_graphic_pane_vc_g

0xdd34,	// (0x0002bab0) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xdd34,	// (0x0002bab0) list_double2_large_graphic_pane_vc_t1

0xdd4a,	// (0x0002bac6) list_double_time_pane_vc_g1_ParamLimits

0xdd4a,	// (0x0002bac6) list_double_time_pane_vc_g1

0xdd56,	// (0x0002bad2) list_double_time_pane_vc_g2_ParamLimits

0xdd56,	// (0x0002bad2) list_double_time_pane_vc_g2

0x0001,

0xfa4b,	// (0x0002d7c7) list_double_time_pane_vc_g_ParamLimits

0xfa4b,	// (0x0002d7c7) list_double_time_pane_vc_g

0xdd62,	// (0x0002bade) list_double_time_pane_vc_t1_ParamLimits

0xdd62,	// (0x0002bade) list_double_time_pane_vc_t1

0xdd80,	// (0x0002bafc) list_double_time_pane_vc_t2_ParamLimits

0xdd80,	// (0x0002bafc) list_double_time_pane_vc_t2

0xddc4,	// (0x0002bb40) list_double_time_pane_vc_t3_ParamLimits

0xddc4,	// (0x0002bb40) list_double_time_pane_vc_t3

0xddd6,	// (0x0002bb52) list_double_time_pane_vc_t4_ParamLimits

0xddd6,	// (0x0002bb52) list_double_time_pane_vc_t4

0x0003,

0xfa50,	// (0x0002d7cc) list_double_time_pane_vc_t_ParamLimits

0xfa50,	// (0x0002d7cc) list_double_time_pane_vc_t

0xdabd,	// (0x0002b839) list_double_pane_vc_g1_ParamLimits

0xdabd,	// (0x0002b839) list_double_pane_vc_g1

0xdac9,	// (0x0002b845) list_double_pane_vc_g2_ParamLimits

0xdac9,	// (0x0002b845) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x0002d556) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x0002d556) list_double_pane_vc_g

0xdde8,	// (0x0002bb64) list_double_pane_vc_t1_ParamLimits

0xdde8,	// (0x0002bb64) list_double_pane_vc_t1

0xddfa,	// (0x0002bb76) list_double_pane_vc_t2_ParamLimits

0xddfa,	// (0x0002bb76) list_double_pane_vc_t2

0x0001,

0xfa59,	// (0x0002d7d5) list_double_pane_vc_t_ParamLimits

0xfa59,	// (0x0002d7d5) list_double_pane_vc_t

0xdabd,	// (0x0002b839) list_double_number_pane_vc_g1_ParamLimits

0xdabd,	// (0x0002b839) list_double_number_pane_vc_g1

0xdac9,	// (0x0002b845) list_double_number_pane_vc_g2_ParamLimits

0xdac9,	// (0x0002b845) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0002d556) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0002d556) list_double_number_pane_vc_g

0xde10,	// (0x0002bb8c) list_double_number_pane_vc_t1_ParamLimits

0xde10,	// (0x0002bb8c) list_double_number_pane_vc_t1

0xde24,	// (0x0002bba0) list_double_number_pane_vc_t2_ParamLimits

0xde24,	// (0x0002bba0) list_double_number_pane_vc_t2

0xde36,	// (0x0002bbb2) list_double_number_pane_vc_t3_ParamLimits

0xde36,	// (0x0002bbb2) list_double_number_pane_vc_t3

0x0002,

0xfa5e,	// (0x0002d7da) list_double_number_pane_vc_t_ParamLimits

0xfa5e,	// (0x0002d7da) list_double_number_pane_vc_t

0xde4c,	// (0x0002bbc8) list_double_large_graphic_pane_vc_g1_ParamLimits

0xde4c,	// (0x0002bbc8) list_double_large_graphic_pane_vc_g1

0xde58,	// (0x0002bbd4) list_double_large_graphic_pane_vc_g2_ParamLimits

0xde58,	// (0x0002bbd4) list_double_large_graphic_pane_vc_g2

0xde69,	// (0x0002bbe5) list_double_large_graphic_pane_vc_g3_ParamLimits

0xde69,	// (0x0002bbe5) list_double_large_graphic_pane_vc_g3

0xde75,	// (0x0002bbf1) list_double_large_graphic_pane_vc_g4_ParamLimits

0xde75,	// (0x0002bbf1) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa65,	// (0x0002d7e1) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa65,	// (0x0002d7e1) list_double_large_graphic_pane_vc_g

0xde81,	// (0x0002bbfd) list_double_large_graphic_pane_vc_t1_ParamLimits

0xde81,	// (0x0002bbfd) list_double_large_graphic_pane_vc_t1

0xde93,	// (0x0002bc0f) list_double_large_graphic_pane_vc_t2_ParamLimits

0xde93,	// (0x0002bc0f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6e,	// (0x0002d7ea) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6e,	// (0x0002d7ea) list_double_large_graphic_pane_vc_t

0xdabd,	// (0x0002b839) list_double_heading_pane_vc_g1_ParamLimits

0xdabd,	// (0x0002b839) list_double_heading_pane_vc_g1

0xdac9,	// (0x0002b845) list_double_heading_pane_vc_g2_ParamLimits

0xdac9,	// (0x0002b845) list_double_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0002d556) list_double_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0002d556) list_double_heading_pane_vc_g

0xdead,	// (0x0002bc29) list_double_heading_pane_vc_t1_ParamLimits

0xdead,	// (0x0002bc29) list_double_heading_pane_vc_t1

0xdaeb,	// (0x0002b867) list_double_heading_pane_vc_t2_ParamLimits

0xdaeb,	// (0x0002b867) list_double_heading_pane_vc_t2

0x0001,

0xfa73,	// (0x0002d7ef) list_double_heading_pane_vc_t_ParamLimits

0xfa73,	// (0x0002d7ef) list_double_heading_pane_vc_t

0xdebf,	// (0x0002bc3b) list_double_graphic_pane_vc_g1_ParamLimits

0xdebf,	// (0x0002bc3b) list_double_graphic_pane_vc_g1

0xded2,	// (0x0002bc4e) list_double_graphic_pane_vc_g2_ParamLimits

0xded2,	// (0x0002bc4e) list_double_graphic_pane_vc_g2

0xdabd,	// (0x0002b839) list_double_graphic_pane_vc_g3_ParamLimits

0xdabd,	// (0x0002b839) list_double_graphic_pane_vc_g3

0x0003,

0xfa78,	// (0x0002d7f4) list_double_graphic_pane_vc_g_ParamLimits

0xfa78,	// (0x0002d7f4) list_double_graphic_pane_vc_g

0xdeef,	// (0x0002bc6b) list_double_graphic_pane_vc_t1_ParamLimits

0xdeef,	// (0x0002bc6b) list_double_graphic_pane_vc_t1

0xdf0d,	// (0x0002bc89) list_double_graphic_pane_vc_t2_ParamLimits

0xdf0d,	// (0x0002bc89) list_double_graphic_pane_vc_t2

0x0001,

0xfa81,	// (0x0002d7fd) list_double_graphic_pane_vc_t_ParamLimits

0xfa81,	// (0x0002d7fd) list_double_graphic_pane_vc_t

0x987e,	// (0x000275fa) aid_size_cell_fastswap

0x9886,	// (0x00027602) aid_size_cell_touch_ParamLimits

0x9886,	// (0x00027602) aid_size_cell_touch

0x9a3a,	// (0x000277b6) popup_fast_swap_wide_window_ParamLimits

0x9a3a,	// (0x000277b6) popup_fast_swap_wide_window

0x9b00,	// (0x0002787c) touch_pane_ParamLimits

0x9b00,	// (0x0002787c) touch_pane

0xd806,	// (0x0002b582) button_value_adjust_pane_cp2

0x700d,	// (0x00024d89) button_value_adjust_pane_cp4

0xd826,	// (0x0002b5a2) form_field_data_pane_cp2

0xd845,	// (0x0002b5c1) form_field_data_wide_pane_cp2

0x547d,	// (0x000231f9) bg_scroll_pane_ParamLimits

0xa0cc,	// (0x00027e48) scroll_handle_pane_ParamLimits

0xa0e0,	// (0x00027e5c) scroll_sc2_down_pane_ParamLimits

0xa0e0,	// (0x00027e5c) scroll_sc2_down_pane

0x54ae,	// (0x0002322a) scroll_sc2_up_pane_ParamLimits

0x54ae,	// (0x0002322a) scroll_sc2_up_pane

0xb8fc,	// (0x00029678) grid_wheel_folder_pane_g1_ParamLimits

0xb8fc,	// (0x00029678) grid_wheel_folder_pane_g1

0xa3cf,	// (0x0002814b) clock_nsta_pane_cp2_ParamLimits

0xa3cf,	// (0x0002814b) clock_nsta_pane_cp2

0xa44a,	// (0x000281c6) listscroll_midp_pane_ParamLimits

0xa456,	// (0x000281d2) midp_canvas_pane

0xa78c,	// (0x00028508) nsta_clock_indic_pane

0x5c54,	// (0x000239d0) listscroll_form_pane_vc

0x5c5c,	// (0x000239d8) listscroll_set_pane_vc_ParamLimits

0x5c5c,	// (0x000239d8) listscroll_set_pane_vc

0xad08,	// (0x00028a84) clock_nsta_pane

0xad15,	// (0x00028a91) indicator_nsta_pane

0x5d75,	// (0x00023af1) bg_popup_sub_pane_cp2_ParamLimits

0x5d89,	// (0x00023b05) find_pane_cp2_ParamLimits

0x5d89,	// (0x00023b05) find_pane_cp2

0x5d9b,	// (0x00023b17) grid_toobar_pane_ParamLimits

0x5e73,	// (0x00023bef) list_form_gen_pane_vc_ParamLimits

0x5e73,	// (0x00023bef) list_form_gen_pane_vc

0x5e89,	// (0x00023c05) scroll_pane_cp8_vc_ParamLimits

0x5e89,	// (0x00023c05) scroll_pane_cp8_vc

0x5f0f,	// (0x00023c8b) data_form_wide_pane_vc_ParamLimits

0x5f0f,	// (0x00023c8b) data_form_wide_pane_vc

0x5f1b,	// (0x00023c97) form_field_data_wide_pane_vc_g1

0x5f23,	// (0x00023c9f) form_field_data_wide_pane_vc_t1_ParamLimits

0x5f23,	// (0x00023c9f) form_field_data_wide_pane_vc_t1

0x50fb,	// (0x00022e77) input_focus_pane_cp6_vc_ParamLimits

0x50fb,	// (0x00022e77) input_focus_pane_cp6_vc

0xb0bf,	// (0x00028e3b) list_midp_pane_ParamLimits

0xb0cb,	// (0x00028e47) scroll_pane_cp16_ParamLimits

0xb0cb,	// (0x00028e47) scroll_pane_cp16

0x6221,	// (0x00023f9d) button_value_adjust_pane_ParamLimits

0x6221,	// (0x00023f9d) button_value_adjust_pane

0xb449,	// (0x000291c5) button_value_adjust_pane_cp6_ParamLimits

0xb449,	// (0x000291c5) button_value_adjust_pane_cp6

0xb551,	// (0x000292cd) settings_code_pane_cp_ParamLimits

0xb551,	// (0x000292cd) settings_code_pane_cp

0x4a7b,	// (0x000227f7) cell_touch_pane_g1

0x4a7b,	// (0x000227f7) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0002d47a) cell_touch_pane_g

0xb797,	// (0x00029513) cell_touch_pane_cp_ParamLimits

0xb797,	// (0x00029513) cell_touch_pane_cp

0xb7a7,	// (0x00029523) cell_touch_pane_ParamLimits

0xb7a7,	// (0x00029523) cell_touch_pane

0x4a7b,	// (0x000227f7) scroll_sc2_down_pane_g1

0x4a7b,	// (0x000227f7) scroll_sc2_up_pane_g1

0x4afd,	// (0x00022879) bg_set_opt_pane_cp4_vc

0x7357,	// (0x000250d3) list_set_graphic_pane_vc_g1_ParamLimits

0x7357,	// (0x000250d3) list_set_graphic_pane_vc_g1

0x7363,	// (0x000250df) list_set_graphic_pane_vc_g2_ParamLimits

0x7363,	// (0x000250df) list_set_graphic_pane_vc_g2

0x0001,

0xf9f5,	// (0x0002d771) list_set_graphic_pane_vc_g_ParamLimits

0xf9f5,	// (0x0002d771) list_set_graphic_pane_vc_g

0x736f,	// (0x000250eb) text_primary_small_cp13_vc_ParamLimits

0x736f,	// (0x000250eb) text_primary_small_cp13_vc

0x7387,	// (0x00025103) list_set_graphic_pane_vc_ParamLimits

0x7387,	// (0x00025103) list_set_graphic_pane_vc

0x4afd,	// (0x00022879) input_focus_pane_cp2_vc

0x4a7b,	// (0x000227f7) setting_code_pane_vc_g1

0x739a,	// (0x00025116) setting_code_pane_vc_t1

0x73a8,	// (0x00025124) set_text_pane_vc_t1_ParamLimits

0x73a8,	// (0x00025124) set_text_pane_vc_t1

0x4afd,	// (0x00022879) input_focus_pane_cp1_vc

0x73c3,	// (0x0002513f) list_set_text_pane_vc

0x4a7b,	// (0x000227f7) setting_text_pane_vc_g1

0x4afd,	// (0x00022879) bg_set_opt_pane_cp2_vc

0x73cd,	// (0x00025149) setting_slider_graphic_pane_vc_g1

0x73d5,	// (0x00025151) setting_slider_graphic_pane_vc_t1

0x73e3,	// (0x0002515f) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fa,	// (0x0002d776) setting_slider_graphic_pane_vc_t

0x73f1,	// (0x0002516d) slider_set_pane_cp_vc

0x73f9,	// (0x00025175) slider_set_pane_vc_g1

0x7402,	// (0x0002517e) slider_set_pane_vc_g2

0x0006,

0xf9ff,	// (0x0002d77b) slider_set_pane_vc_g

0x5156,	// (0x00022ed2) set_opt_bg_pane_g1_copy1

0x515e,	// (0x00022eda) set_opt_bg_pane_g2_copy1

0x742e,	// (0x000251aa) set_opt_bg_pane_g3_copy1

0x516e,	// (0x00022eea) set_opt_bg_pane_g4_copy1

0x5176,	// (0x00022ef2) set_opt_bg_pane_g5_copy1

0x517e,	// (0x00022efa) set_opt_bg_pane_g6_copy1

0x7436,	// (0x000251b2) set_opt_bg_pane_g7_copy1

0x743e,	// (0x000251ba) set_opt_bg_pane_g8_copy1

0x7446,	// (0x000251c2) set_opt_bg_pane_g9_copy1

0x4afd,	// (0x00022879) bg_set_opt_pane_cp_vc

0x744e,	// (0x000251ca) setting_slider_pane_vc_t1

0x73d5,	// (0x00025151) setting_slider_pane_vc_t2

0x73e3,	// (0x0002515f) setting_slider_pane_vc_t3

0x0002,

0xfa0e,	// (0x0002d78a) setting_slider_pane_vc_t

0x73f1,	// (0x0002516d) slider_set_pane_vc

0xb10b,	// (0x00028e87) volume_set_pane_vc_g1

0xb7b9,	// (0x00029535) volume_set_pane_vc_g2

0xb7c2,	// (0x0002953e) volume_set_pane_vc_g3

0xb7cb,	// (0x00029547) volume_set_pane_vc_g4

0xb7d4,	// (0x00029550) volume_set_pane_vc_g5

0xb7dd,	// (0x00029559) volume_set_pane_vc_g6

0xb7e6,	// (0x00029562) volume_set_pane_vc_g7

0xb7ef,	// (0x0002956b) volume_set_pane_vc_g8

0xb7f8,	// (0x00029574) volume_set_pane_vc_g9

0xb801,	// (0x0002957d) volume_set_pane_vc_g10

0x0009,

0xfa15,	// (0x0002d791) volume_set_pane_vc_g

0x745d,	// (0x000251d9) volume_set_pane_vc

0x7465,	// (0x000251e1) button_value_adjust_pane_cp1_vc

0x746f,	// (0x000251eb) list_highlight_pane_cp2_vc

0x7478,	// (0x000251f4) list_set_pane_vc_ParamLimits

0x7478,	// (0x000251f4) list_set_pane_vc

0x74ca,	// (0x00025246) main_pane_set_vc_t1_ParamLimits

0x74ca,	// (0x00025246) main_pane_set_vc_t1

0x74df,	// (0x0002525b) main_pane_set_vc_t2_ParamLimits

0x74df,	// (0x0002525b) main_pane_set_vc_t2

0x74f1,	// (0x0002526d) main_pane_set_vc_t3_ParamLimits

0x74f1,	// (0x0002526d) main_pane_set_vc_t3

0x7503,	// (0x0002527f) main_pane_set_vc_t4_ParamLimits

0x7503,	// (0x0002527f) main_pane_set_vc_t4

0x0003,

0xfa2a,	// (0x0002d7a6) main_pane_set_vc_t_ParamLimits

0xfa2a,	// (0x0002d7a6) main_pane_set_vc_t

0x7515,	// (0x00025291) setting_code_pane_vc_ParamLimits

0x7515,	// (0x00025291) setting_code_pane_vc

0x7524,	// (0x000252a0) setting_slider_graphic_pane_vc

0x7524,	// (0x000252a0) setting_slider_pane_vc

0x7524,	// (0x000252a0) setting_text_pane_vc

0x7524,	// (0x000252a0) setting_volume_pane_vc

0x752c,	// (0x000252a8) scroll_pane_cp121_vc

0x50e6,	// (0x00022e62) set_content_pane_vc

0x7534,	// (0x000252b0) button_value_adjust_pane_g1

0x753d,	// (0x000252b9) button_value_adjust_pane_g2

0x0001,

0xfa86,	// (0x0002d802) button_value_adjust_pane_g

0x7546,	// (0x000252c2) form_field_slider_wide_pane_vc_t1_ParamLimits

0x7546,	// (0x000252c2) form_field_slider_wide_pane_vc_t1

0x755c,	// (0x000252d8) form_field_slider_wide_pane_vc_t2_ParamLimits

0x755c,	// (0x000252d8) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8b,	// (0x0002d807) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8b,	// (0x0002d807) form_field_slider_wide_pane_vc_t

0x4b4b,	// (0x000228c7) input_focus_pane_cp10_vc_ParamLimits

0x4b4b,	// (0x000228c7) input_focus_pane_cp10_vc

0x7587,	// (0x00025303) slider_cont_pane_cp1_vc_ParamLimits

0x7587,	// (0x00025303) slider_cont_pane_cp1_vc

0x73f9,	// (0x00025175) slider_form_pane_g1_cp2

0x7402,	// (0x0002517e) slider_form_pane_g2_cp2

0x75a2,	// (0x0002531e) form_field_slider_pane_vc_t3

0x75b0,	// (0x0002532c) form_field_slider_pane_vc_t4

0x75be,	// (0x0002533a) slider_form_pane_vc_ParamLimits

0x75be,	// (0x0002533a) slider_form_pane_vc

0x75cb,	// (0x00025347) form_field_slider_pane_vc_t1_ParamLimits

0x75cb,	// (0x00025347) form_field_slider_pane_vc_t1

0x75e1,	// (0x0002535d) form_field_slider_pane_vc_t2_ParamLimits

0x75e1,	// (0x0002535d) form_field_slider_pane_vc_t2

0x0001,

0xfa9d,	// (0x0002d819) form_field_slider_pane_vc_t_ParamLimits

0xfa9d,	// (0x0002d819) form_field_slider_pane_vc_t

0x4b4b,	// (0x000228c7) input_focus_pane_cp9_vc_ParamLimits

0x4b4b,	// (0x000228c7) input_focus_pane_cp9_vc

0x75f3,	// (0x0002536f) slider_cont_pane_vc_ParamLimits

0x75f3,	// (0x0002536f) slider_cont_pane_vc

0x7605,	// (0x00025381) list_form_graphic_pane_cp_vc_ParamLimits

0x7605,	// (0x00025381) list_form_graphic_pane_cp_vc

0x5f1b,	// (0x00023c97) form_field_popup_wide_pane_vc_g1

0x761a,	// (0x00025396) form_field_popup_wide_pane_vc_t1_ParamLimits

0x761a,	// (0x00025396) form_field_popup_wide_pane_vc_t1

0x50fb,	// (0x00022e77) input_focus_pane_cp8_vc_ParamLimits

0x50fb,	// (0x00022e77) input_focus_pane_cp8_vc

0x7659,	// (0x000253d5) list_form_wide_pane_vc_ParamLimits

0x7659,	// (0x000253d5) list_form_wide_pane_vc

0x7665,	// (0x000253e1) list_form_graphic_pane_vc_g1

0x766d,	// (0x000253e9) list_form_graphic_pane_vc_t1_ParamLimits

0x766d,	// (0x000253e9) list_form_graphic_pane_vc_t1

0x4b61,	// (0x000228dd) list_highlight_pane_cp5_vc_ParamLimits

0x4b61,	// (0x000228dd) list_highlight_pane_cp5_vc

0x7689,	// (0x00025405) list_form_graphic_pane_vc_ParamLimits

0x7689,	// (0x00025405) list_form_graphic_pane_vc

0x5f1b,	// (0x00023c97) form_field_popup_pane_vc_g1

0x769f,	// (0x0002541b) form_field_popup_pane_vc_t1_ParamLimits

0x769f,	// (0x0002541b) form_field_popup_pane_vc_t1

0x50fb,	// (0x00022e77) input_focus_pane_cp7_vc_ParamLimits

0x50fb,	// (0x00022e77) input_focus_pane_cp7_vc

0x76b4,	// (0x00025430) list_form_pane_vc_ParamLimits

0x76b4,	// (0x00025430) list_form_pane_vc

0x76c0,	// (0x0002543c) data_form_pane_vc_t1_ParamLimits

0x76c0,	// (0x0002543c) data_form_pane_vc_t1

0x5156,	// (0x00022ed2) input_focus_pane_vc_g1

0x515e,	// (0x00022eda) input_focus_pane_vc_g2

0x5166,	// (0x00022ee2) input_focus_pane_vc_g3

0x516e,	// (0x00022eea) input_focus_pane_vc_g4

0x5176,	// (0x00022ef2) input_focus_pane_vc_g5

0x517e,	// (0x00022efa) input_focus_pane_vc_g6

0x5186,	// (0x00022f02) input_focus_pane_vc_g7

0x518e,	// (0x00022f0a) input_focus_pane_vc_g8

0x5196,	// (0x00022f12) input_focus_pane_vc_g9

0x4a7b,	// (0x000227f7) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0002d403) input_focus_pane_vc_g

0x5f0f,	// (0x00023c8b) data_form_pane_vc_ParamLimits

0x5f0f,	// (0x00023c8b) data_form_pane_vc

0x5f1b,	// (0x00023c97) form_field_data_pane_vc_g1

0x76db,	// (0x00025457) form_field_data_pane_vc_t1_ParamLimits

0x76db,	// (0x00025457) form_field_data_pane_vc_t1

0x50fb,	// (0x00022e77) input_focus_pane_vc_ParamLimits

0x50fb,	// (0x00022e77) input_focus_pane_vc

0x5ed9,	// (0x00023c55) button_value_adjust_pane_cp3_vc

0x700d,	// (0x00024d89) button_value_adjust_pane_cp5_vc

0x76f1,	// (0x0002546d) form_field_data_pane_vc_ParamLimits

0x76f1,	// (0x0002546d) form_field_data_pane_vc

0x5ee1,	// (0x00023c5d) form_field_data_pane_vc_cp2

0x7708,	// (0x00025484) form_field_data_wide_pane_vc_ParamLimits

0x7708,	// (0x00025484) form_field_data_wide_pane_vc

0x771e,	// (0x0002549a) form_field_data_wide_pane_vc_cp2

0x7726,	// (0x000254a2) form_field_popup_pane_vc_ParamLimits

0x7726,	// (0x000254a2) form_field_popup_pane_vc

0x773d,	// (0x000254b9) form_field_popup_wide_pane_vc_ParamLimits

0x773d,	// (0x000254b9) form_field_popup_wide_pane_vc

0x7753,	// (0x000254cf) form_field_slider_pane_vc_ParamLimits

0x7753,	// (0x000254cf) form_field_slider_pane_vc

0x7766,	// (0x000254e2) form_field_slider_wide_pane_vc_ParamLimits

0x7766,	// (0x000254e2) form_field_slider_wide_pane_vc

0xb80a,	// (0x00029586) grid_touch_1_pane_ParamLimits

0xb80a,	// (0x00029586) grid_touch_1_pane

0xb816,	// (0x00029592) grid_touch_2_pane_ParamLimits

0xb816,	// (0x00029592) grid_touch_2_pane

0x5c26,	// (0x000239a2) touch_pane_g1_ParamLimits

0x5c26,	// (0x000239a2) touch_pane_g1

0x7787,	// (0x00025503) cell_app_pane_cp_wide_ParamLimits

0x7787,	// (0x00025503) cell_app_pane_cp_wide

0x7797,	// (0x00025513) grid_popup_fast_wide_pane_ParamLimits

0x7797,	// (0x00025513) grid_popup_fast_wide_pane

0x77ab,	// (0x00025527) scroll_pane_cp19_ParamLimits

0x77ab,	// (0x00025527) scroll_pane_cp19

0x4afd,	// (0x00022879) bg_popup_window_pane_cp20

0x77bf,	// (0x0002553b) listscroll_popup_fast_wide_pane

0x4b61,	// (0x000228dd) grid_indicator_nsta_pane

0x77c7,	// (0x00025543) clock_nsta_pane_g1

0x77d0,	// (0x0002554c) clock_nsta_pane_t1

0xb82e,	// (0x000295aa) cell_indicator_nsta_pane_ParamLimits

0xb82e,	// (0x000295aa) cell_indicator_nsta_pane

0x7779,	// (0x000254f5) cell_indicator_nsta_pane_g1

0xb85f,	// (0x000295db) cell_indicator_nsta_pane_g2

0x0001,

0xfaae,	// (0x0002d82a) cell_indicator_nsta_pane_g

0x77ec,	// (0x00025568) clock_nsta_pane_cp

0x77f4,	// (0x00025570) indicator_nsta_pane_cp

0x77fd,	// (0x00025579) nsta_clock_indic_pane_g1

0x4b9d,	// (0x00022919) grid_indicator_pane

0x55a0,	// (0x0002331c) scroll_pane_cp29

0xa326,	// (0x000280a2) indicator_nsta_pane_cp2_ParamLimits

0xa326,	// (0x000280a2) indicator_nsta_pane_cp2

0x4b61,	// (0x000228dd) main_apps_wheel_pane

0x60ba,	// (0x00023e36) form_midp_field_text_pane_ParamLimits

0x61e7,	// (0x00023f63) scroll_bar_cp050_ParamLimits

0x7866,	// (0x000255e2) cell_indicator_pane_ParamLimits

0x7866,	// (0x000255e2) cell_indicator_pane

0x787c,	// (0x000255f8) cell_indicator_pane_g1

0xb86c,	// (0x000295e8) grid_wheel_folder_pane_ParamLimits

0xb86c,	// (0x000295e8) grid_wheel_folder_pane

0xb87e,	// (0x000295fa) list_wheel_apps_pane_ParamLimits

0xb87e,	// (0x000295fa) list_wheel_apps_pane

0xb88d,	// (0x00029609) main_apps_wheel_pane_g1_ParamLimits

0xb88d,	// (0x00029609) main_apps_wheel_pane_g1

0xb8a1,	// (0x0002961d) main_apps_wheel_pane_g2_ParamLimits

0xb8a1,	// (0x0002961d) main_apps_wheel_pane_g2

0x0001,

0xfaca,	// (0x0002d846) main_apps_wheel_pane_g_ParamLimits

0xfaca,	// (0x0002d846) main_apps_wheel_pane_g

0xb8b5,	// (0x00029631) main_apps_wheel_pane_t1_ParamLimits

0xb8b5,	// (0x00029631) main_apps_wheel_pane_t1

0xb8d4,	// (0x00029650) list_wheel_apps_pane_g1

0xb8dc,	// (0x00029658) list_wheel_apps_pane_g2

0xb8e4,	// (0x00029660) list_wheel_apps_pane_g3

0xb8ec,	// (0x00029668) list_wheel_apps_pane_g4

0xb8f4,	// (0x00029670) list_wheel_apps_pane_g5

0x0004,

0xfacf,	// (0x0002d84b) list_wheel_apps_pane_g

0x4b61,	// (0x000228dd) navi_icon_text_pane

0xac5c,	// (0x000289d8) aid_fill_nsta

0x7886,	// (0x00025602) navi_icon_text_pane_g1

0x7892,	// (0x0002560e) navi_icon_text_pane_t1

0x581a,	// (0x00023596) list_set_graphic_pane_t1_ParamLimits

0x581a,	// (0x00023596) list_set_graphic_pane_t1

0x68cd,	// (0x00024649) popup_midp_note_alarm_window_t6_ParamLimits

0x68cd,	// (0x00024649) popup_midp_note_alarm_window_t6

0x68df,	// (0x0002465b) popup_midp_note_alarm_window_t7_ParamLimits

0x68df,	// (0x0002465b) popup_midp_note_alarm_window_t7

0x68f1,	// (0x0002466d) popup_midp_note_alarm_window_t8_ParamLimits

0x68f1,	// (0x0002466d) popup_midp_note_alarm_window_t8

0x6903,	// (0x0002467f) popup_midp_note_alarm_window_t9_ParamLimits

0x6903,	// (0x0002467f) popup_midp_note_alarm_window_t9

0x6915,	// (0x00024691) popup_midp_note_alarm_window_t10_ParamLimits

0x6915,	// (0x00024691) popup_midp_note_alarm_window_t10

0x6927,	// (0x000246a3) popup_midp_note_alarm_window_t11_ParamLimits

0x6927,	// (0x000246a3) popup_midp_note_alarm_window_t11

0x6939,	// (0x000246b5) scroll_pane_cp17_ParamLimits

0x6939,	// (0x000246b5) scroll_pane_cp17

0xb10b,	// (0x00028e87) volume_small_pane_cp_g1

0xb913,	// (0x0002968f) volume_small_pane_cp_g2

0xb91c,	// (0x00029698) volume_small_pane_cp_g3

0xb925,	// (0x000296a1) volume_small_pane_cp_g4

0xb138,	// (0x00028eb4) volume_small_pane_cp_g5

0xb92e,	// (0x000296aa) volume_small_pane_cp_g6

0xb937,	// (0x000296b3) volume_small_pane_cp_g7

0xb940,	// (0x000296bc) volume_small_pane_cp_g8

0xb949,	// (0x000296c5) volume_small_pane_cp_g9

0xb952,	// (0x000296ce) volume_small_pane_cp_g10

0x5ac9,	// (0x00023845) midp_ticker_pane_g1_ParamLimits

0x5ad5,	// (0x00023851) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0002d4cf) midp_ticker_pane_g_ParamLimits

0x5ae1,	// (0x0002385d) midp_ticker_pane_t1_ParamLimits

0xac6c,	// (0x000289e8) aid_fill_nsta_2

0x61d3,	// (0x00023f4f) list_form2_midp_pane

0x6f8a,	// (0x00024d06) midp_editing_number_pane_ParamLimits

0x6f96,	// (0x00024d12) midp_ticker_pane_ParamLimits

0x78a4,	// (0x00025620) form2_midp_field_pane

0x78ac,	// (0x00025628) scroll_pane_cp51

0x78cc,	// (0x00025648) form2_midp_button_pane_ParamLimits

0x78cc,	// (0x00025648) form2_midp_button_pane

0x78de,	// (0x0002565a) form2_midp_content_pane_ParamLimits

0x78de,	// (0x0002565a) form2_midp_content_pane

0x78f8,	// (0x00025674) form2_midp_field_choice_group_pane

0x7900,	// (0x0002567c) form2_midp_field_pane_g1

0x7908,	// (0x00025684) form2_midp_field_pane_g2

0x7910,	// (0x0002568c) form2_midp_field_pane_g3

0x7918,	// (0x00025694) form2_midp_field_pane_g4

0x0003,

0xfaf4,	// (0x0002d870) form2_midp_field_pane_g

0x7920,	// (0x0002569c) form2_midp_gauge_slider_pane

0x7928,	// (0x000256a4) form2_midp_gauge_wait_pane

0x7930,	// (0x000256ac) form2_midp_image_pane_ParamLimits

0x7930,	// (0x000256ac) form2_midp_image_pane

0x794b,	// (0x000256c7) form2_midp_label_pane_ParamLimits

0x794b,	// (0x000256c7) form2_midp_label_pane

0xb977,	// (0x000296f3) form2_midp_label_pane_cp_ParamLimits

0xb977,	// (0x000296f3) form2_midp_label_pane_cp

0x7964,	// (0x000256e0) form2_midp_string_pane_ParamLimits

0x7964,	// (0x000256e0) form2_midp_string_pane

0xdf2b,	// (0x0002bca7) form2_midp_text_pane_ParamLimits

0xdf2b,	// (0x0002bca7) form2_midp_text_pane

0x7976,	// (0x000256f2) form2_midp_time_pane

0x7986,	// (0x00025702) input_focus_pane_cp51_ParamLimits

0x7986,	// (0x00025702) input_focus_pane_cp51

0x799e,	// (0x0002571a) form2_midp_label_pane_t1_ParamLimits

0x799e,	// (0x0002571a) form2_midp_label_pane_t1

0xdf44,	// (0x0002bcc0) form2_mdip_text_pane_t1_ParamLimits

0xdf44,	// (0x0002bcc0) form2_mdip_text_pane_t1

0xdf5f,	// (0x0002bcdb) form2_midp_time_pane_t1

0x79e6,	// (0x00025762) form2_midp_gauge_slider_pane_t1

0xb996,	// (0x00029712) form2_midp_gauge_slider_pane_t2

0xb9a8,	// (0x00029724) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafd,	// (0x0002d879) form2_midp_gauge_slider_pane_t

0x79f8,	// (0x00025774) form2_midp_slider_pane

0x7a04,	// (0x00025780) form2_midp_gauge_wait_pane_t1

0x7a12,	// (0x0002578e) form2_midp_wait_pane_ParamLimits

0x7a12,	// (0x0002578e) form2_midp_wait_pane

0x5f59,	// (0x00023cd5) list_single_2graphic_pane_cp4_ParamLimits

0x5f59,	// (0x00023cd5) list_single_2graphic_pane_cp4

0x7a3d,	// (0x000257b9) list_single_midp_graphic_pane_cp_ParamLimits

0x7a3d,	// (0x000257b9) list_single_midp_graphic_pane_cp

0x4afd,	// (0x00022879) list_highlight_pane_cp20

0x7a5b,	// (0x000257d7) list_single_2graphic_pane_g1_cp4

0x7084,	// (0x00024e00) list_single_2graphic_pane_g2_cp4

0x7a63,	// (0x000257df) list_single_2graphic_pane_t1_cp4

0x4b61,	// (0x000228dd) list_highlight_pane_cp21

0x7a72,	// (0x000257ee) list_single_midp_graphic_pane_g4_cp

0x7a81,	// (0x000257fd) list_single_midp_graphic_pane_t1_cp

0x7a96,	// (0x00025812) form2_mdip_string_pane_t1_ParamLimits

0x7a96,	// (0x00025812) form2_mdip_string_pane_t1

0x4afd,	// (0x00022879) bg_wml_button_pane_cp2

0x4a7b,	// (0x000227f7) form2_midp_image_pane_g1

0xd5dd,	// (0x0002b359) list_double_large_graphic_pane_g5_ParamLimits

0xd5dd,	// (0x0002b359) list_double_large_graphic_pane_g5

0xa44a,	// (0x000281c6) midp_form_pane_ParamLimits

0x4b61,	// (0x000228dd) main_apps_wheel_pane_ParamLimits

0xaa94,	// (0x00028810) popup_preview_window_ParamLimits

0xaa94,	// (0x00028810) popup_preview_window

0xac0f,	// (0x0002898b) popup_touch_info_window_ParamLimits

0xac0f,	// (0x0002898b) popup_touch_info_window

0xac2d,	// (0x000289a9) popup_touch_menu_window_ParamLimits

0xac2d,	// (0x000289a9) popup_touch_menu_window

0x4a71,	// (0x000227ed) bg_popup_sub_pane_cp6

0x7b00,	// (0x0002587c) list_touch_menu_pane

0x7b08,	// (0x00025884) list_single_touch_menu_pane_ParamLimits

0x7b08,	// (0x00025884) list_single_touch_menu_pane

0x7b1f,	// (0x0002589b) list_single_touch_menu_pane_t1

0x4b61,	// (0x000228dd) bg_popup_sub_pane_cp7_ParamLimits

0x4b61,	// (0x000228dd) bg_popup_sub_pane_cp7

0x7b2d,	// (0x000258a9) heading_sub_pane

0x7b35,	// (0x000258b1) list_touch_info_pane_ParamLimits

0x7b35,	// (0x000258b1) list_touch_info_pane

0x7b44,	// (0x000258c0) list_single_touch_info_pane_ParamLimits

0x7b44,	// (0x000258c0) list_single_touch_info_pane

0x7b55,	// (0x000258d1) list_single_touch_info_pane_t1

0x7b63,	// (0x000258df) list_single_touch_info_pane_t2

0x0001,

0xfb0b,	// (0x0002d887) list_single_touch_info_pane_t

0x5a9f,	// (0x0002381b) bg_popup_heading_pane_cp

0x7b71,	// (0x000258ed) heading_sub_pane_t1

0x5e9f,	// (0x00023c1b) bg_popup_preview_window_pane_cp_ParamLimits

0x5e9f,	// (0x00023c1b) bg_popup_preview_window_pane_cp

0x7b2d,	// (0x000258a9) heading_preview_pane

0x7b35,	// (0x000258b1) list_preview_pane_ParamLimits

0x7b35,	// (0x000258b1) list_preview_pane

0x7b7f,	// (0x000258fb) popup_preview_window_g1

0x7b44,	// (0x000258c0) list_single_preview_pane_ParamLimits

0x7b44,	// (0x000258c0) list_single_preview_pane

0x7b87,	// (0x00025903) list_single_preview_pane_g1

0x7b8f,	// (0x0002590b) list_single_preview_pane_t1

0x7b55,	// (0x000258d1) list_single_preview_pane_t2

0x0001,

0xfb10,	// (0x0002d88c) list_single_preview_pane_t

0x7b9d,	// (0x00025919) bg_popup_heading_pane_cp2_ParamLimits

0x7b9d,	// (0x00025919) bg_popup_heading_pane_cp2

0x7bb3,	// (0x0002592f) heading_preview_pane_g1

0x7bbb,	// (0x00025937) heading_preview_pane_t1_ParamLimits

0x7bbb,	// (0x00025937) heading_preview_pane_t1

0x4bb4,	// (0x00022930) soft_indicator_pane_t1_ParamLimits

0x507e,	// (0x00022dfa) scroll_pane_ParamLimits

0x54a5,	// (0x00023221) scroll_sc2_left_pane

0x549c,	// (0x00023218) scroll_sc2_right_pane

0x54c4,	// (0x00023240) scroll_bg_pane_g1_ParamLimits

0x54d9,	// (0x00023255) scroll_bg_pane_g2_ParamLimits

0x54f1,	// (0x0002326d) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0002d45a) scroll_bg_pane_g_ParamLimits

0x54c4,	// (0x00023240) scroll_handle_pane_g1_ParamLimits

0x5513,	// (0x0002328f) scroll_handle_pane_g2_ParamLimits

0x54f1,	// (0x0002326d) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0002d461) scroll_handle_pane_g_ParamLimits

0xa7dc,	// (0x00028558) popup_choice_list_window_ParamLimits

0xa7dc,	// (0x00028558) popup_choice_list_window

0x5d81,	// (0x00023afd) choice_list_pane

0x5df7,	// (0x00023b73) cell_toolbar_pane_t1

0x5e1f,	// (0x00023b9b) toolbar_button_pane_ParamLimits

0x6cff,	// (0x00024a7b) ai_gene_pane_1_t2_ParamLimits

0x6cff,	// (0x00024a7b) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0002d689) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0002d689) ai_gene_pane_1_t

0x7bd8,	// (0x00025954) scroll_sc2_left_pane_g1

0x7bd8,	// (0x00025954) scroll_sc2_right_pane_g1

0x5281,	// (0x00022ffd) bg_popup_sub_pane_cp10

0x7be2,	// (0x0002595e) list_choice_list_pane

0x7bf9,	// (0x00025975) list_single_choice_list_pane_ParamLimits

0x7bf9,	// (0x00025975) list_single_choice_list_pane

0x7c0b,	// (0x00025987) list_single_choice_list_pane_g1

0x526c,	// (0x00022fe8) list_single_choice_list_pane_t1_ParamLimits

0x526c,	// (0x00022fe8) list_single_choice_list_pane_t1

0x7c13,	// (0x0002598f) choice_list_pane_g1

0x7c1b,	// (0x00025997) choice_list_pane_t1

0x4a71,	// (0x000227ed) input_focus_pane_cp11

0x5403,	// (0x0002317f) title_pane_stacon_g2_ParamLimits

0x5403,	// (0x0002317f) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0002d440) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0002d440) title_pane_stacon_g

0x5a9f,	// (0x0002381b) cursor_press_pane

0xa878,	// (0x000285f4) popup_fep_hwr_window_ParamLimits

0xa878,	// (0x000285f4) popup_fep_hwr_window

0xa8d4,	// (0x00028650) popup_fep_vkb_window_ParamLimits

0xa8d4,	// (0x00028650) popup_fep_vkb_window

0x7c29,	// (0x000259a5) cursor_press_pane_g1

0x0002,

0xfb39,	// (0x0002d8b5) fep_vkb_side_pane_g_ParamLimits

0xb9ef,	// (0x0002976b) fep_hwr_candidate_pane_ParamLimits

0xb9ef,	// (0x0002976b) fep_hwr_candidate_pane

0xba17,	// (0x00029793) fep_hwr_side_pane_ParamLimits

0xba17,	// (0x00029793) fep_hwr_side_pane

0xba37,	// (0x000297b3) fep_hwr_top_pane_ParamLimits

0xba37,	// (0x000297b3) fep_hwr_top_pane

0xba4f,	// (0x000297cb) fep_hwr_write_pane_ParamLimits

0xba4f,	// (0x000297cb) fep_hwr_write_pane

0xfb39,	// (0x0002d8b5) fep_vkb_side_pane_g

0x7c43,	// (0x000259bf) fep_hwr_top_pane_g1

0x7c31,	// (0x000259ad) fep_hwr_top_pane_g2

0xba89,	// (0x00029805) fep_hwr_top_pane_g3

0x0002,

0xfb15,	// (0x0002d891) fep_hwr_top_pane_g

0xba9e,	// (0x0002981a) fep_hwr_top_text_pane

0x560d,	// (0x00023389) fep_hwr_top_text_pane_g1

0x7c79,	// (0x000259f5) fep_hwr_top_text_pane_t1

0xbb8c,	// (0x00029908) fep_hwr_candidate_pane_g1

0x7e42,	// (0x00025bbe) fep_vkb_keypad_pane_g3_ParamLimits

0x7e42,	// (0x00025bbe) fep_vkb_keypad_pane_g3

0x7e64,	// (0x00025be0) fep_vkb_keypad_pane_g4_ParamLimits

0x7e64,	// (0x00025be0) fep_vkb_keypad_pane_g4

0x7ed3,	// (0x00025c4f) fep_vkb_bottom_pane_g2_ParamLimits

0x7ed3,	// (0x00025c4f) fep_vkb_bottom_pane_g2

0x0001,

0xfb40,	// (0x0002d8bc) fep_vkb_bottom_pane_g_ParamLimits

0xfb40,	// (0x0002d8bc) fep_vkb_bottom_pane_g

0x7bd8,	// (0x00025954) cell_vkb_side_pane_g2

0x0001,

0xfb4a,	// (0x0002d8c6) cell_vkb_side_pane_g

0x7f17,	// (0x00025c93) cell_vkb_side_pane_t1

0x7f25,	// (0x00025ca1) cell_vkb_side_pane_t1_copy1

0x7bd8,	// (0x00025954) bg_fep_vkb_candidate_pane_g2

0x7ff3,	// (0x00025d6f) cell_vkb_candidate_pane_ParamLimits

0x7c87,	// (0x00025a03) aid_size_cell_vkb_ParamLimits

0x7c87,	// (0x00025a03) aid_size_cell_vkb

0x7ff3,	// (0x00025d6f) cell_vkb_candidate_pane

0xbc97,	// (0x00029a13) bg_popup_fep_shadow_pane_g1

0x7cf1,	// (0x00025a6d) fep_vkb_bottom_pane_ParamLimits

0x7cf1,	// (0x00025a6d) fep_vkb_bottom_pane

0x7d2e,	// (0x00025aaa) fep_vkb_candidate_pane_ParamLimits

0x7d2e,	// (0x00025aaa) fep_vkb_candidate_pane

0x7d4a,	// (0x00025ac6) fep_vkb_keypad_pane_ParamLimits

0x7d4a,	// (0x00025ac6) fep_vkb_keypad_pane

0x7d7e,	// (0x00025afa) fep_vkb_side_pane_ParamLimits

0x7d7e,	// (0x00025afa) fep_vkb_side_pane

0x7daa,	// (0x00025b26) fep_vkb_top_pane_ParamLimits

0x7daa,	// (0x00025b26) fep_vkb_top_pane

0x7dd6,	// (0x00025b52) fep_vkb_top_pane_g1_ParamLimits

0x7dd6,	// (0x00025b52) fep_vkb_top_pane_g1

0x7de5,	// (0x00025b61) fep_vkb_top_pane_g2_ParamLimits

0x7de5,	// (0x00025b61) fep_vkb_top_pane_g2

0x7df4,	// (0x00025b70) fep_vkb_top_pane_g3_ParamLimits

0x7df4,	// (0x00025b70) fep_vkb_top_pane_g3

0x0003,

0xfb30,	// (0x0002d8ac) fep_vkb_top_pane_g_ParamLimits

0xfb30,	// (0x0002d8ac) fep_vkb_top_pane_g

0x7e12,	// (0x00025b8e) fep_vkb_top_text_pane_ParamLimits

0x7e12,	// (0x00025b8e) fep_vkb_top_text_pane

0xbbbf,	// (0x0002993b) fep_vkb_side_pane_g1_ParamLimits

0xbbbf,	// (0x0002993b) fep_vkb_side_pane_g1

0x7e31,	// (0x00025bad) grid_vkb_side_pane_ParamLimits

0x7e31,	// (0x00025bad) grid_vkb_side_pane

0xbc9f,	// (0x00029a1b) bg_popup_fep_shadow_pane_g2

0xbca8,	// (0x00029a24) bg_popup_fep_shadow_pane_g3

0xbcb0,	// (0x00029a2c) bg_popup_fep_shadow_pane_g4

0xbcb9,	// (0x00029a35) bg_popup_fep_shadow_pane_g5

0xbcc1,	// (0x00029a3d) bg_popup_fep_shadow_pane_g6

0xbcc9,	// (0x00029a45) bg_popup_fep_shadow_pane_g7

0x516e,	// (0x00022eea) bg_popup_fep_shadow_pane_g8

0x7e82,	// (0x00025bfe) grid_vkb_keypad_number_pane_ParamLimits

0x7e82,	// (0x00025bfe) grid_vkb_keypad_number_pane

0x7e92,	// (0x00025c0e) grid_vkb_keypad_pane_ParamLimits

0x7e92,	// (0x00025c0e) grid_vkb_keypad_pane

0x7eb8,	// (0x00025c34) fep_vkb_bottom_pane_g1_ParamLimits

0x7eb8,	// (0x00025c34) fep_vkb_bottom_pane_g1

0x7ee1,	// (0x00025c5d) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7ee1,	// (0x00025c5d) grid_vkb_keypad_bottom_left_pane

0x7ef6,	// (0x00025c72) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7ef6,	// (0x00025c72) grid_vkb_keypad_bottom_right_pane

0x7f0b,	// (0x00025c87) fep_vkb_top_text_pane_g1

0xbc09,	// (0x00029985) fep_vkb_top_text_pane_t1

0xbc1e,	// (0x0002999a) cell_vkb_side_pane_ParamLimits

0xbc1e,	// (0x0002999a) cell_vkb_side_pane

0x7bd8,	// (0x00025954) cell_vkb_side_pane_g1

0x7f33,	// (0x00025caf) cell_vkb_keypad_pane_ParamLimits

0x7f33,	// (0x00025caf) cell_vkb_keypad_pane

0x7fa0,	// (0x00025d1c) cell_vkb_keypad_pane_g1

0x0008,

0xfb5d,	// (0x0002d8d9) bg_popup_fep_shadow_pane_g

0xbcd9,	// (0x00029a55) cell_hwr_side_pane_g1

0xbcd9,	// (0x00029a55) cell_hwr_side_pane_g2

0x7faa,	// (0x00025d26) cell_vkb_keypad_pane_t1

0xbc41,	// (0x000299bd) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbc41,	// (0x000299bd) cell_vkb_keypad_bottom_left_pane

0xbc5e,	// (0x000299da) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbc5e,	// (0x000299da) cell_vkb_keypad_bottom_right_pane

0x7bd8,	// (0x00025954) cell_vkb_keypad_bottom_left_pane_g1

0x7bd8,	// (0x00025954) cell_vkb_keypad_bottom_right_pane_g1

0x7fb8,	// (0x00025d34) cell_vkb_keypad_number_pane_ParamLimits

0x7fb8,	// (0x00025d34) cell_vkb_keypad_number_pane

0x7fd7,	// (0x00025d53) cell_vkb_keypad_number_pane_g1

0x7fe1,	// (0x00025d5d) cell_vkb_keypad_number_pane_g2

0x7fea,	// (0x00025d66) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4f,	// (0x0002d8cb) cell_vkb_keypad_number_pane_g

0x7faa,	// (0x00025d26) cell_vkb_keypad_number_pane_t1

0x800c,	// (0x00025d88) fep_vkb_candidate_pane_g1

0x0001,

0xfb70,	// (0x0002d8ec) cell_hwr_side_pane_g

0x8025,	// (0x00025da1) cell_hwr_side_pane_t1

0xbce3,	// (0x00029a5f) cell_hwr_side_pane_t1_copy1

0xbcf1,	// (0x00029a6d) cell_hwr_candidate_pane_g1

0xbd20,	// (0x00029a9c) cell_hwr_candidate_pane_t1

0x7bd8,	// (0x00025954) cell_vkb_candidate_pane_g2

0x80ab,	// (0x00025e27) cell_vkb_candidate_pane_t1

0xb9ba,	// (0x00029736) bg_popup_fep_shadow_pane_ParamLimits

0xb9ba,	// (0x00029736) bg_popup_fep_shadow_pane

0xba69,	// (0x000297e5) bg_fep_hwr_top_pane_g4

0x7c55,	// (0x000259d1) bg_hwr_side_pane_g1_ParamLimits

0x7c55,	// (0x000259d1) bg_hwr_side_pane_g1

0xbada,	// (0x00029856) cell_hwr_side_pane_ParamLimits

0xbada,	// (0x00029856) cell_hwr_side_pane

0xbb15,	// (0x00029891) fep_hwr_write_pane_g1_ParamLimits

0xbb15,	// (0x00029891) fep_hwr_write_pane_g1

0xbb22,	// (0x0002989e) fep_hwr_write_pane_g2_ParamLimits

0xbb22,	// (0x0002989e) fep_hwr_write_pane_g2

0xbb2f,	// (0x000298ab) fep_hwr_write_pane_g3_ParamLimits

0xbb2f,	// (0x000298ab) fep_hwr_write_pane_g3

0xbb3d,	// (0x000298b9) fep_hwr_write_pane_g4_ParamLimits

0xbb3d,	// (0x000298b9) fep_hwr_write_pane_g4

0x0005,

0xfb1c,	// (0x0002d898) fep_hwr_write_pane_g_ParamLimits

0xfb1c,	// (0x0002d898) fep_hwr_write_pane_g

0xba69,	// (0x000297e5) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xba69,	// (0x000297e5) bg_fep_hwr_candidate_pane_g2

0xbb52,	// (0x000298ce) cell_hwr_candidate_pane_ParamLimits

0xbb52,	// (0x000298ce) cell_hwr_candidate_pane

0xbb8c,	// (0x00029908) fep_hwr_candidate_pane_g1_ParamLimits

0x7cb5,	// (0x00025a31) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7cb5,	// (0x00025a31) bg_popup_fep_shadow_pane_cp2

0x7e04,	// (0x00025b80) fep_vkb_top_pane_g4_ParamLimits

0x7e04,	// (0x00025b80) fep_vkb_top_pane_g4

0x7e23,	// (0x00025b9f) fep_vkb_side_pane_g2_ParamLimits

0x7e23,	// (0x00025b9f) fep_vkb_side_pane_g2

0xd73f,	// (0x0002b4bb) list_setting_pane_t4_ParamLimits

0xd73f,	// (0x0002b4bb) list_setting_pane_t4

0xd7cd,	// (0x0002b549) list_setting_number_pane_t5_ParamLimits

0xd7cd,	// (0x0002b549) list_setting_number_pane_t5

0xa16f,	// (0x00027eeb) list_double_heading_pane_cp2_ParamLimits

0xa16f,	// (0x00027eeb) list_double_heading_pane_cp2

0x5914,	// (0x00023690) list_double_heading_pane_g1_cp2_ParamLimits

0x5914,	// (0x00023690) list_double_heading_pane_g1_cp2

0x80b9,	// (0x00025e35) list_double_heading_pane_g2_cp2_ParamLimits

0x80b9,	// (0x00025e35) list_double_heading_pane_g2_cp2

0x80cd,	// (0x00025e49) list_double_heading_pane_t1_cp2_ParamLimits

0x80cd,	// (0x00025e49) list_double_heading_pane_t1_cp2

0x80e3,	// (0x00025e5f) list_double_heading_pane_t2_cp2_ParamLimits

0x80e3,	// (0x00025e5f) list_double_heading_pane_t2_cp2

0x4a69,	// (0x000227e5) aid_value_unit2

0x9a76,	// (0x000277f2) popup_preview_fixed_window

0x4c94,	// (0x00022a10) bg_popup_preview_window_pane_cp02

0x80f5,	// (0x00025e71) list_preview_fixed_pane

0x813b,	// (0x00025eb7) list_empty_pane_fp_ParamLimits

0x813b,	// (0x00025eb7) list_empty_pane_fp

0x813b,	// (0x00025eb7) list_single_cale_day_pane_fp_ParamLimits

0x813b,	// (0x00025eb7) list_single_cale_day_pane_fp

0x813b,	// (0x00025eb7) list_single_graphic_heading_pane_fp_ParamLimits

0x813b,	// (0x00025eb7) list_single_graphic_heading_pane_fp

0x813b,	// (0x00025eb7) list_single_graphic_pane_fp_ParamLimits

0x813b,	// (0x00025eb7) list_single_graphic_pane_fp

0x813b,	// (0x00025eb7) list_single_heading_pane_fp_ParamLimits

0x813b,	// (0x00025eb7) list_single_heading_pane_fp

0x813b,	// (0x00025eb7) list_single_pane_fp_ParamLimits

0x813b,	// (0x00025eb7) list_single_pane_fp

0x814f,	// (0x00025ecb) list_single_pane_fp_g1_ParamLimits

0x814f,	// (0x00025ecb) list_single_pane_fp_g1

0xd6fe,	// (0x0002b47a) list_single_pane_fp_g2_ParamLimits

0xd6fe,	// (0x0002b47a) list_single_pane_fp_g2

0xdf93,	// (0x0002bd0f) list_single_pane_fp_g3_ParamLimits

0xdf93,	// (0x0002bd0f) list_single_pane_fp_g3

0x815b,	// (0x00025ed7) list_single_pane_fp_g4_ParamLimits

0x815b,	// (0x00025ed7) list_single_pane_fp_g4

0x0003,

0xfb83,	// (0x0002d8ff) list_single_pane_fp_g_ParamLimits

0xfb83,	// (0x0002d8ff) list_single_pane_fp_g

0xdfa7,	// (0x0002bd23) list_single_pane_fp_t1_ParamLimits

0xdfa7,	// (0x0002bd23) list_single_pane_fp_t1

0xdfbe,	// (0x0002bd3a) list_single_graphic_pane_fp_g1_ParamLimits

0xdfbe,	// (0x0002bd3a) list_single_graphic_pane_fp_g1

0x814f,	// (0x00025ecb) list_single_graphic_pane_fp_g2_ParamLimits

0x814f,	// (0x00025ecb) list_single_graphic_pane_fp_g2

0xd6fe,	// (0x0002b47a) list_single_graphic_pane_fp_g3_ParamLimits

0xd6fe,	// (0x0002b47a) list_single_graphic_pane_fp_g3

0xdf93,	// (0x0002bd0f) list_single_graphic_pane_fp_g4_ParamLimits

0xdf93,	// (0x0002bd0f) list_single_graphic_pane_fp_g4

0x815b,	// (0x00025ed7) list_single_graphic_pane_fp_g5_ParamLimits

0x815b,	// (0x00025ed7) list_single_graphic_pane_fp_g5

0x0004,

0xfb8c,	// (0x0002d908) list_single_graphic_pane_fp_g_ParamLimits

0xfb8c,	// (0x0002d908) list_single_graphic_pane_fp_g

0xdfca,	// (0x0002bd46) list_single_graphic_pane_fp_t1_ParamLimits

0xdfca,	// (0x0002bd46) list_single_graphic_pane_fp_t1

0xdfbe,	// (0x0002bd3a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xdfbe,	// (0x0002bd3a) list_single_graphic_heading_pane_fp_g1

0x814f,	// (0x00025ecb) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x814f,	// (0x00025ecb) list_single_graphic_heading_pane_fp_g2

0xd6fe,	// (0x0002b47a) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd6fe,	// (0x0002b47a) list_single_graphic_heading_pane_fp_g3

0xdf93,	// (0x0002bd0f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xdf93,	// (0x0002bd0f) list_single_graphic_heading_pane_fp_g4

0x815b,	// (0x00025ed7) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x815b,	// (0x00025ed7) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8c,	// (0x0002d908) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8c,	// (0x0002d908) list_single_graphic_heading_pane_fp_g

0xdfe0,	// (0x0002bd5c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xdfe0,	// (0x0002bd5c) list_single_graphic_heading_pane_fp_t1

0xdff6,	// (0x0002bd72) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xdff6,	// (0x0002bd72) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb97,	// (0x0002d913) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb97,	// (0x0002d913) list_single_graphic_heading_pane_fp_t

0xe008,	// (0x0002bd84) list_single_cale_day_pane_fp_g1_ParamLimits

0xe008,	// (0x0002bd84) list_single_cale_day_pane_fp_g1

0x8167,	// (0x00025ee3) list_single_cale_day_pane_fp_g2_ParamLimits

0x8167,	// (0x00025ee3) list_single_cale_day_pane_fp_g2

0xe040,	// (0x0002bdbc) list_single_cale_day_pane_fp_g3_ParamLimits

0xe040,	// (0x0002bdbc) list_single_cale_day_pane_fp_g3

0xe068,	// (0x0002bde4) list_single_cale_day_pane_fp_g4_ParamLimits

0xe068,	// (0x0002bde4) list_single_cale_day_pane_fp_g4

0xe08c,	// (0x0002be08) list_single_cale_day_pane_fp_g5_ParamLimits

0xe08c,	// (0x0002be08) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9c,	// (0x0002d918) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9c,	// (0x0002d918) list_single_cale_day_pane_fp_g

0xe0b0,	// (0x0002be2c) list_single_cale_day_pane_fp_t1_ParamLimits

0xe0b0,	// (0x0002be2c) list_single_cale_day_pane_fp_t1

0xe0d6,	// (0x0002be52) list_single_cale_day_pane_fp_t2_ParamLimits

0xe0d6,	// (0x0002be52) list_single_cale_day_pane_fp_t2

0xe0ef,	// (0x0002be6b) list_single_cale_day_pane_fp_t3_ParamLimits

0xe0ef,	// (0x0002be6b) list_single_cale_day_pane_fp_t3

0x0002,

0xfba7,	// (0x0002d923) list_single_cale_day_pane_fp_t_ParamLimits

0xfba7,	// (0x0002d923) list_single_cale_day_pane_fp_t

0x814f,	// (0x00025ecb) list_empty_pane_fp_g1_ParamLimits

0x814f,	// (0x00025ecb) list_empty_pane_fp_g1

0xe108,	// (0x0002be84) list_empty_pane_fp_t1

0xe116,	// (0x0002be92) list_empty_pane_fp_t2

0x0001,

0xfbae,	// (0x0002d92a) list_empty_pane_fp_t

0x814f,	// (0x00025ecb) list_single_heading_pane_fp_g1_ParamLimits

0x814f,	// (0x00025ecb) list_single_heading_pane_fp_g1

0xd6fe,	// (0x0002b47a) list_single_heading_pane_fp_g2_ParamLimits

0xd6fe,	// (0x0002b47a) list_single_heading_pane_fp_g2

0xdf93,	// (0x0002bd0f) list_single_heading_pane_fp_g3_ParamLimits

0xdf93,	// (0x0002bd0f) list_single_heading_pane_fp_g3

0x0002,

0xfbb3,	// (0x0002d92f) list_single_heading_pane_fp_g_ParamLimits

0xfbb3,	// (0x0002d92f) list_single_heading_pane_fp_g

0xe124,	// (0x0002bea0) list_single_heading_pane_fp_t1_ParamLimits

0xe124,	// (0x0002bea0) list_single_heading_pane_fp_t1

0xe136,	// (0x0002beb2) list_single_heading_pane_fp_t2_ParamLimits

0xe136,	// (0x0002beb2) list_single_heading_pane_fp_t2

0x0001,

0xfbba,	// (0x0002d936) list_single_heading_pane_fp_t_ParamLimits

0xfbba,	// (0x0002d936) list_single_heading_pane_fp_t

0x528d,	// (0x00023009) aid_size_cell_fast

0x4c77,	// (0x000229f3) soft_indicator_pane_cp1_t1

0x52ca,	// (0x00023046) cell_app_pane_cp2_ParamLimits

0x52ca,	// (0x00023046) cell_app_pane_cp2

0xb9dc,	// (0x00029758) fep_hwr_candidate_drop_down_list_pane

0xbba6,	// (0x00029922) fep_hwr_candidate_pane_g3_ParamLimits

0xbba6,	// (0x00029922) fep_hwr_candidate_pane_g3

0x40f8,	// (0x00021e74) fep_hwr_candidate_pane_g4_ParamLimits

0x40f8,	// (0x00021e74) fep_hwr_candidate_pane_g4

0x0002,

0xfb29,	// (0x0002d8a5) fep_hwr_candidate_pane_g_ParamLimits

0xfb29,	// (0x0002d8a5) fep_hwr_candidate_pane_g

0x7d1d,	// (0x00025a99) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7d1d,	// (0x00025a99) fep_vkb_candidate_drop_down_list_pane

0x8014,	// (0x00025d90) fep_vkb_candidate_pane_g3

0x801c,	// (0x00025d98) fep_vkb_candidate_pane_g4

0x0002,

0xfb56,	// (0x0002d8d2) fep_vkb_candidate_pane_g

0xbcf1,	// (0x00029a6d) cell_hwr_candidate_pane_g1_ParamLimits

0xbcff,	// (0x00029a7b) cell_hwr_candidate_pane_g3_ParamLimits

0xbcff,	// (0x00029a7b) cell_hwr_candidate_pane_g3

0xdf72,	// (0x0002bcee) cell_hwr_candidate_pane_g4_ParamLimits

0xdf72,	// (0x0002bcee) cell_hwr_candidate_pane_g4

0x0002,

0xfb75,	// (0x0002d8f1) cell_hwr_candidate_pane_g_ParamLimits

0xfb75,	// (0x0002d8f1) cell_hwr_candidate_pane_g

0x8075,	// (0x00025df1) cell_vkb_candidate_pane_g3_ParamLimits

0x8075,	// (0x00025df1) cell_vkb_candidate_pane_g3

0x8090,	// (0x00025e0c) cell_vkb_candidate_pane_g4_ParamLimits

0x8090,	// (0x00025e0c) cell_vkb_candidate_pane_g4

0x8173,	// (0x00025eef) cell_app_pane_cp2_g1_ParamLimits

0x8173,	// (0x00025eef) cell_app_pane_cp2_g1

0x8191,	// (0x00025f0d) cell_app_pane_cp2_g2_ParamLimits

0x8191,	// (0x00025f0d) cell_app_pane_cp2_g2

0x0001,

0xfbbf,	// (0x0002d93b) cell_app_pane_cp2_g_ParamLimits

0xfbbf,	// (0x0002d93b) cell_app_pane_cp2_g

0x819d,	// (0x00025f19) cell_app_pane_cp2_t1_ParamLimits

0x819d,	// (0x00025f19) cell_app_pane_cp2_t1

0x50fb,	// (0x00022e77) grid_highlight_pane_cp1_ParamLimits

0x50fb,	// (0x00022e77) grid_highlight_pane_cp1

0xbd3d,	// (0x00029ab9) cell_hwr_candidate_pane_cp1_ParamLimits

0xbd3d,	// (0x00029ab9) cell_hwr_candidate_pane_cp1

0xbcf1,	// (0x00029a6d) fep_hwr_candidate_drop_down_list_pane_g1

0xbd5b,	// (0x00029ad7) fep_hwr_candidate_drop_down_list_pane_g2

0xbd68,	// (0x00029ae4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc4,	// (0x0002d940) fep_hwr_candidate_drop_down_list_pane_g

0xbd75,	// (0x00029af1) fep_hwr_candidate_drop_down_list_scroll_pane

0xbd7e,	// (0x00029afa) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbd7e,	// (0x00029afa) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xbd8b,	// (0x00029b07) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbd8b,	// (0x00029b07) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xbd98,	// (0x00029b14) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbd98,	// (0x00029b14) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xbda5,	// (0x00029b21) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbda5,	// (0x00029b21) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xbdc0,	// (0x00029b3c) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbdc0,	// (0x00029b3c) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xbddb,	// (0x00029b57) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbddb,	// (0x00029b57) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xbdf6,	// (0x00029b72) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbdf6,	// (0x00029b72) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xbe11,	// (0x00029b8d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbe11,	// (0x00029b8d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcb,	// (0x0002d947) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcb,	// (0x0002d947) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbe2c,	// (0x00029ba8) cell_vkb_candidate_pane_cp1_ParamLimits

0xbe2c,	// (0x00029ba8) cell_vkb_candidate_pane_cp1

0x7e04,	// (0x00025b80) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7e04,	// (0x00025b80) fep_vkb_candidate_drop_down_list_pane_g1

0x81af,	// (0x00025f2b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x81af,	// (0x00025f2b) fep_vkb_candidate_drop_down_list_pane_g2

0x81bc,	// (0x00025f38) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x81bc,	// (0x00025f38) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdc,	// (0x0002d958) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdc,	// (0x0002d958) fep_vkb_candidate_drop_down_list_pane_g

0x81c9,	// (0x00025f45) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x81c9,	// (0x00025f45) fep_vkb_candidate_drop_down_list_scroll_pane

0x81d6,	// (0x00025f52) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x81d6,	// (0x00025f52) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x81e3,	// (0x00025f5f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x81e3,	// (0x00025f5f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x81ef,	// (0x00025f6b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x81ef,	// (0x00025f6b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x8033,	// (0x00025daf) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8033,	// (0x00025daf) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x8054,	// (0x00025dd0) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8054,	// (0x00025dd0) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x81fb,	// (0x00025f77) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x81fb,	// (0x00025f77) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x821c,	// (0x00025f98) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x821c,	// (0x00025f98) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x823d,	// (0x00025fb9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x823d,	// (0x00025fb9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe3,	// (0x0002d95f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe3,	// (0x0002d95f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9b60,	// (0x000278dc) title_pane_g1_ParamLimits

0x9b6d,	// (0x000278e9) title_pane_g2_ParamLimits

0xf54e,	// (0x0002d2ca) title_pane_g_ParamLimits

0x5605,	// (0x00023381) aid_call2_pane

0x55fd,	// (0x00023379) aid_call_pane

0x560d,	// (0x00023389) popup_clock_analogue_window_g1

0x560d,	// (0x00023389) popup_clock_analogue_window_g2

0xa150,	// (0x00027ecc) popup_clock_analogue_window_g3

0xa159,	// (0x00027ed5) popup_clock_analogue_window_g4

0x4a7b,	// (0x000227f7) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0002d46f) popup_clock_analogue_window_g

0xa161,	// (0x00027edd) popup_clock_analogue_window_t1

0xa1a5,	// (0x00027f21) clock_digital_number_pane_ParamLimits

0xa1a5,	// (0x00027f21) clock_digital_number_pane

0xa1b1,	// (0x00027f2d) clock_digital_number_pane_cp02_ParamLimits

0xa1b1,	// (0x00027f2d) clock_digital_number_pane_cp02

0xa1bd,	// (0x00027f39) clock_digital_number_pane_cp03_ParamLimits

0xa1bd,	// (0x00027f39) clock_digital_number_pane_cp03

0xa1c9,	// (0x00027f45) clock_digital_number_pane_cp04_ParamLimits

0xa1c9,	// (0x00027f45) clock_digital_number_pane_cp04

0xa1d5,	// (0x00027f51) clock_digital_separator_pane_ParamLimits

0xa1d5,	// (0x00027f51) clock_digital_separator_pane

0xa1e1,	// (0x00027f5d) popup_clock_digital_window_t1_ParamLimits

0xa1e1,	// (0x00027f5d) popup_clock_digital_window_t1

0x4a7b,	// (0x000227f7) clock_digital_number_pane_g1

0x4a7b,	// (0x000227f7) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0002d47a) clock_digital_number_pane_g

0x4a7b,	// (0x000227f7) clock_digital_separator_pane_g1

0x4a7b,	// (0x000227f7) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0002d47a) clock_digital_separator_pane_g

0xac5c,	// (0x000289d8) aid_fill_nsta_ParamLimits

0xad15,	// (0x00028a91) indicator_nsta_pane_ParamLimits

0x5d2a,	// (0x00023aa6) popup_clock_analogue_window

0x5d2a,	// (0x00023aa6) popup_clock_digital_window

0x4b61,	// (0x000228dd) grid_indicator_nsta_pane_ParamLimits

0x77de,	// (0x0002555a) clock_nsta_pane_t2

0x0001,

0xfaa9,	// (0x0002d825) clock_nsta_pane_t

0xa0b9,	// (0x00027e35) aid_size_max_handle

0xa0c3,	// (0x00027e3f) aid_size_min_handle

0x5a9f,	// (0x0002381b) editor_scroll_pane

0x8258,	// (0x00025fd4) ex_editor_pane

0x524a,	// (0x00022fc6) scroll_pane_cp13

0x50ab,	// (0x00022e27) scroll_pane_cp14

0x563c,	// (0x000233b8) scroll_pane_cp36

0xa17f,	// (0x00027efb) list_single_graphic_hl_pane_cp2_ParamLimits

0xa17f,	// (0x00027efb) list_single_graphic_hl_pane_cp2

0xb59f,	// (0x0002931b) list_single_graphic_hl_pane_ParamLimits

0xb59f,	// (0x0002931b) list_single_graphic_hl_pane

0xe14c,	// (0x0002bec8) aid_size_min_hl_cp1

0x8260,	// (0x00025fdc) list_highlight_pane_cp34_ParamLimits

0x8260,	// (0x00025fdc) list_highlight_pane_cp34

0x8271,	// (0x00025fed) list_single_graphic_hl_pane_g1_ParamLimits

0x8271,	// (0x00025fed) list_single_graphic_hl_pane_g1

0xe155,	// (0x0002bed1) list_single_graphic_hl_pane_g2_ParamLimits

0xe155,	// (0x0002bed1) list_single_graphic_hl_pane_g2

0xe155,	// (0x0002bed1) list_single_graphic_hl_pane_g3_ParamLimits

0xe155,	// (0x0002bed1) list_single_graphic_hl_pane_g3

0xdabd,	// (0x0002b839) list_single_graphic_hl_pane_g4_ParamLimits

0xdabd,	// (0x0002b839) list_single_graphic_hl_pane_g4

0xe161,	// (0x0002bedd) list_single_graphic_hl_pane_g5_ParamLimits

0xe161,	// (0x0002bedd) list_single_graphic_hl_pane_g5

0x0004,

0xfbf4,	// (0x0002d970) list_single_graphic_hl_pane_g_ParamLimits

0xfbf4,	// (0x0002d970) list_single_graphic_hl_pane_g

0xe175,	// (0x0002bef1) list_single_graphic_hl_pane_t1_ParamLimits

0xe175,	// (0x0002bef1) list_single_graphic_hl_pane_t1

0x827e,	// (0x00025ffa) aid_size_min_hl_cp2

0x8287,	// (0x00026003) list_highlight_pane_cp34_cp2_ParamLimits

0x8287,	// (0x00026003) list_highlight_pane_cp34_cp2

0x8271,	// (0x00025fed) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x8271,	// (0x00025fed) list_single_graphic_hl_pane_g1_cp2

0x8294,	// (0x00026010) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8294,	// (0x00026010) list_single_graphic_hl_pane_g2_cp2

0x82a0,	// (0x0002601c) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x82a0,	// (0x0002601c) list_single_graphic_hl_pane_g3_cp2

0x5914,	// (0x00023690) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5914,	// (0x00023690) list_single_graphic_hl_pane_g4_cp2

0x80b9,	// (0x00025e35) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x80b9,	// (0x00025e35) list_single_graphic_hl_pane_g5_cp2

0xa665,	// (0x000283e1) control_pane_g4_ParamLimits

0xa665,	// (0x000283e1) control_pane_g4

0x5281,	// (0x00022ffd) bg_popup_sub_pane_cp10_ParamLimits

0x7be2,	// (0x0002595e) list_choice_list_pane_ParamLimits

0x7bf1,	// (0x0002596d) scroll_pane_cp23

0x4c94,	// (0x00022a10) bg_popup_preview_window_pane_cp02_ParamLimits

0x80f5,	// (0x00025e71) list_preview_fixed_pane_ParamLimits

0x810b,	// (0x00025e87) list_preview_fixed_pane_cp_ParamLimits

0x810b,	// (0x00025e87) list_preview_fixed_pane_cp

0x8117,	// (0x00025e93) popup_preview_fixed_window_g1_ParamLimits

0x8117,	// (0x00025e93) popup_preview_fixed_window_g1

0x8123,	// (0x00025e9f) popup_preview_fixed_window_g2_ParamLimits

0x8123,	// (0x00025e9f) popup_preview_fixed_window_g2

0x0002,

0xfb7c,	// (0x0002d8f8) popup_preview_fixed_window_g_ParamLimits

0xfb7c,	// (0x0002d8f8) popup_preview_fixed_window_g

0x9fbd,	// (0x00027d39) aid_navi_side_left_pane_ParamLimits

0x9fcd,	// (0x00027d49) aid_navi_side_right_pane_ParamLimits

0x9fdc,	// (0x00027d58) navi_icon_pane_stacon_ParamLimits

0x9fec,	// (0x00027d68) navi_navi_pane_stacon_ParamLimits

0x9fdc,	// (0x00027d58) navi_text_pane_stacon_ParamLimits

0x9957,	// (0x000276d3) main_text_info_pane

0x82c2,	// (0x0002603e) listscroll_text_info_pane

0x82ca,	// (0x00026046) list_text_info_pane_ParamLimits

0x82ca,	// (0x00026046) list_text_info_pane

0x82d9,	// (0x00026055) scroll_pane_cp24_ParamLimits

0x82d9,	// (0x00026055) scroll_pane_cp24

0xbe4f,	// (0x00029bcb) list_text_info_pane_t1_ParamLimits

0xbe4f,	// (0x00029bcb) list_text_info_pane_t1

0xa7f6,	// (0x00028572) popup_fast_swap2_window_ParamLimits

0xa7f6,	// (0x00028572) popup_fast_swap2_window

0x82f7,	// (0x00026073) aid_size_cell_fast2

0x4a71,	// (0x000227ed) bg_popup_window_pane_cp17

0x61ff,	// (0x00023f7b) heading_pane_cp2

0x4eaa,	// (0x00022c26) listscroll_fast2_pane

0x8301,	// (0x0002607d) grid_fast2_pane

0x8309,	// (0x00026085) listscroll_fast2_pane_g1

0x8311,	// (0x0002608d) listscroll_fast2_pane_g2

0x0001,

0xfbff,	// (0x0002d97b) listscroll_fast2_pane_g

0x524a,	// (0x00022fc6) scroll_pane_cp26

0x8319,	// (0x00026095) cell_fast2_pane_ParamLimits

0x8319,	// (0x00026095) cell_fast2_pane

0x832f,	// (0x000260ab) cell_fast2_pane_g1

0x8338,	// (0x000260b4) cell_fast2_pane_g2

0x8341,	// (0x000260bd) cell_fast2_pane_g3

0x0002,

0xfc04,	// (0x0002d980) cell_fast2_pane_g

0x4f0c,	// (0x00022c88) grid_highlight_pane_cp9

0xa7c2,	// (0x0002853e) main_eswt_pane_ParamLimits

0xa7c2,	// (0x0002853e) main_eswt_pane

0x82ee,	// (0x0002606a) list_single_text_info_pane

0x8349,	// (0x000260c5) eswt_ctrl_button_pane

0x8349,	// (0x000260c5) eswt_ctrl_canvas_pane

0x8351,	// (0x000260cd) eswt_ctrl_combo_pane

0x8349,	// (0x000260c5) eswt_ctrl_default_pane

0x8349,	// (0x000260c5) eswt_ctrl_label_pane

0x8359,	// (0x000260d5) eswt_ctrl_wait_pane

0x8361,	// (0x000260dd) eswt_shell_pane

0x4a71,	// (0x000227ed) listscroll_eswt_app_pane

0x837d,	// (0x000260f9) popup_eswt_tasktip_window_ParamLimits

0x837d,	// (0x000260f9) popup_eswt_tasktip_window

0x5e9f,	// (0x00023c1b) bg_popup_window_pane_cp18

0x838e,	// (0x0002610a) eswt_control_pane_g1_ParamLimits

0x838e,	// (0x0002610a) eswt_control_pane_g1

0x839b,	// (0x00026117) eswt_control_pane_g2_ParamLimits

0x839b,	// (0x00026117) eswt_control_pane_g2

0x83a8,	// (0x00026124) eswt_control_pane_g3_ParamLimits

0x83a8,	// (0x00026124) eswt_control_pane_g3

0x83b5,	// (0x00026131) eswt_control_pane_g4_ParamLimits

0x83b5,	// (0x00026131) eswt_control_pane_g4

0x0003,

0xfc0b,	// (0x0002d987) eswt_control_pane_g_ParamLimits

0xfc0b,	// (0x0002d987) eswt_control_pane_g

0x50fb,	// (0x00022e77) bg_button_pane_ParamLimits

0x50fb,	// (0x00022e77) bg_button_pane

0x4f21,	// (0x00022c9d) common_borders_pane_copy2_ParamLimits

0x4f21,	// (0x00022c9d) common_borders_pane_copy2

0x83c2,	// (0x0002613e) control_button_pane_g1_ParamLimits

0x83c2,	// (0x0002613e) control_button_pane_g1

0x83ce,	// (0x0002614a) control_button_pane_g2_ParamLimits

0x83ce,	// (0x0002614a) control_button_pane_g2

0x83da,	// (0x00026156) control_button_pane_g3_ParamLimits

0x83da,	// (0x00026156) control_button_pane_g3

0x0002,

0xfc14,	// (0x0002d990) control_button_pane_g_ParamLimits

0xfc14,	// (0x0002d990) control_button_pane_g

0x83ee,	// (0x0002616a) control_button_pane_t1

0x83fc,	// (0x00026178) control_button_pane_t2

0x0001,

0xfc1b,	// (0x0002d997) control_button_pane_t

0x5e2b,	// (0x00023ba7) bg_button_pane_g1

0x5e33,	// (0x00023baf) bg_button_pane_g2

0x5e3b,	// (0x00023bb7) bg_button_pane_g3

0x5e43,	// (0x00023bbf) bg_button_pane_g4

0x5e4b,	// (0x00023bc7) bg_button_pane_g5

0x5e53,	// (0x00023bcf) bg_button_pane_g6

0x5e5b,	// (0x00023bd7) bg_button_pane_g7

0x5e63,	// (0x00023bdf) bg_button_pane_g8

0x5e6b,	// (0x00023be7) bg_button_pane_g9

0x0008,

0xf861,	// (0x0002d5dd) bg_button_pane_g

0x7b9d,	// (0x00025919) common_borders_pane_ParamLimits

0x7b9d,	// (0x00025919) common_borders_pane

0x838e,	// (0x0002610a) eswt_control_pane_g1_copy1_ParamLimits

0x838e,	// (0x0002610a) eswt_control_pane_g1_copy1

0x839b,	// (0x00026117) eswt_control_pane_g2_copy1_ParamLimits

0x839b,	// (0x00026117) eswt_control_pane_g2_copy1

0x83a8,	// (0x00026124) eswt_control_pane_g3_copy1_ParamLimits

0x83a8,	// (0x00026124) eswt_control_pane_g3_copy1

0x83b5,	// (0x00026131) eswt_control_pane_g4_copy1_ParamLimits

0x83b5,	// (0x00026131) eswt_control_pane_g4_copy1

0x7bd8,	// (0x00025954) bg_eswt_ctrl_canvas_pane_g1

0x7b9d,	// (0x00025919) common_borders_pane_cp2_ParamLimits

0x7b9d,	// (0x00025919) common_borders_pane_cp2

0x7b9d,	// (0x00025919) common_borders_pane_cp3_ParamLimits

0x7b9d,	// (0x00025919) common_borders_pane_cp3

0x840a,	// (0x00026186) separator_horizontal_pane

0x549c,	// (0x00023218) separator_vertical_pane

0x838e,	// (0x0002610a) eswt_control_pane_g1_copy2_ParamLimits

0x838e,	// (0x0002610a) eswt_control_pane_g1_copy2

0x839b,	// (0x00026117) eswt_control_pane_g2_copy2_ParamLimits

0x839b,	// (0x00026117) eswt_control_pane_g2_copy2

0x83a8,	// (0x00026124) eswt_control_pane_g3_copy2_ParamLimits

0x83a8,	// (0x00026124) eswt_control_pane_g3_copy2

0x83b5,	// (0x00026131) eswt_control_pane_g4_copy2_ParamLimits

0x83b5,	// (0x00026131) eswt_control_pane_g4_copy2

0x4a71,	// (0x000227ed) common_borders_pane_cp4

0x8412,	// (0x0002618e) separator_horizontal_pane_g1

0x841b,	// (0x00026197) separator_horizontal_pane_g2

0x8424,	// (0x000261a0) separator_horizontal_pane_g3

0x0002,

0xfc20,	// (0x0002d99c) separator_horizontal_pane_g

0x838e,	// (0x0002610a) eswt_control_pane_g1_copy3_ParamLimits

0x838e,	// (0x0002610a) eswt_control_pane_g1_copy3

0x839b,	// (0x00026117) eswt_control_pane_g2_copy3_ParamLimits

0x839b,	// (0x00026117) eswt_control_pane_g2_copy3

0x83a8,	// (0x00026124) eswt_control_pane_g3_copy3_ParamLimits

0x83a8,	// (0x00026124) eswt_control_pane_g3_copy3

0x83b5,	// (0x00026131) eswt_control_pane_g4_copy3_ParamLimits

0x83b5,	// (0x00026131) eswt_control_pane_g4_copy3

0x4a71,	// (0x000227ed) common_borders_pane_cp5

0x842d,	// (0x000261a9) separator_vertical_pane_g1

0x8436,	// (0x000261b2) separator_vertical_pane_g2

0x843f,	// (0x000261bb) separator_vertical_pane_g3

0x0002,

0xfc27,	// (0x0002d9a3) separator_vertical_pane_g

0x838e,	// (0x0002610a) eswt_control_pane_g1_copy4_ParamLimits

0x838e,	// (0x0002610a) eswt_control_pane_g1_copy4

0x839b,	// (0x00026117) eswt_control_pane_g2_copy4_ParamLimits

0x839b,	// (0x00026117) eswt_control_pane_g2_copy4

0x83a8,	// (0x00026124) eswt_control_pane_g3_copy4_ParamLimits

0x83a8,	// (0x00026124) eswt_control_pane_g3_copy4

0x83b5,	// (0x00026131) eswt_control_pane_g4_copy4_ParamLimits

0x83b5,	// (0x00026131) eswt_control_pane_g4_copy4

0xbe6c,	// (0x00029be8) eswt_ctrl_combo_button_pane

0xbe74,	// (0x00029bf0) eswt_ctrl_input_pane

0xbe7c,	// (0x00029bf8) popup_choice_list_window_cp70

0xbe84,	// (0x00029c00) eswt_ctrl_input_pane_t1

0x4a71,	// (0x000227ed) input_focus_pane_cp70

0x7b9d,	// (0x00025919) bg_button_pane_cp70_ParamLimits

0x7b9d,	// (0x00025919) bg_button_pane_cp70

0xbe92,	// (0x00029c0e) eswt_ctrl_combo_button_pane_g1

0x8448,	// (0x000261c4) wait_bar_pane_cp70

0x5e9f,	// (0x00023c1b) bg_popup_window_pane_cp70_ParamLimits

0x5e9f,	// (0x00023c1b) bg_popup_window_pane_cp70

0x8450,	// (0x000261cc) popup_eswt_tasktip_window_t1

0x8466,	// (0x000261e2) wait_bar_pane_cp71_ParamLimits

0x8466,	// (0x000261e2) wait_bar_pane_cp71

0x8472,	// (0x000261ee) grid_eswt_app_pane

0x54a5,	// (0x00023221) scroll_pane_cp70

0xbe9a,	// (0x00029c16) cell_eswt_app_pane_ParamLimits

0xbe9a,	// (0x00029c16) cell_eswt_app_pane

0xbec2,	// (0x00029c3e) cell_eswt_app_pane_g1_ParamLimits

0xbec2,	// (0x00029c3e) cell_eswt_app_pane_g1

0xbef1,	// (0x00029c6d) cell_eswt_app_pane_g2_ParamLimits

0xbef1,	// (0x00029c6d) cell_eswt_app_pane_g2

0x0001,

0xfc2e,	// (0x0002d9aa) cell_eswt_app_pane_g_ParamLimits

0xfc2e,	// (0x0002d9aa) cell_eswt_app_pane_g

0xbf1a,	// (0x00029c96) cell_eswt_app_pane_t1_ParamLimits

0xbf1a,	// (0x00029c96) cell_eswt_app_pane_t1

0x847b,	// (0x000261f7) grid_highlight_pane_cp70_ParamLimits

0x847b,	// (0x000261f7) grid_highlight_pane_cp70

0x5115,	// (0x00022e91) set_content_pane_g1

0x5c1e,	// (0x0002399a) status_small_volume_pane

0xbf4c,	// (0x00029cc8) status_small_volume_pane_g1

0xbf54,	// (0x00029cd0) volume_small2_pane

0xbf5d,	// (0x00029cd9) volume_small2_pane_g1

0xbf66,	// (0x00029ce2) volume_small2_pane_g2

0xbf6f,	// (0x00029ceb) volume_small2_pane_g3

0xbf78,	// (0x00029cf4) volume_small2_pane_g4

0xbf81,	// (0x00029cfd) volume_small2_pane_g5

0xbf8a,	// (0x00029d06) volume_small2_pane_g6

0xbf93,	// (0x00029d0f) volume_small2_pane_g7

0xbf9c,	// (0x00029d18) volume_small2_pane_g8

0xbfa5,	// (0x00029d21) volume_small2_pane_g9

0xbfae,	// (0x00029d2a) volume_small2_pane_g10

0x0009,

0xfc33,	// (0x0002d9af) volume_small2_pane_g

0x7f0b,	// (0x00025c87) fep_vkb_top_text_pane_g1_ParamLimits

0xbc09,	// (0x00029985) fep_vkb_top_text_pane_t1_ParamLimits

0x812f,	// (0x00025eab) popup_preview_fixed_window_g3_ParamLimits

0x812f,	// (0x00025eab) popup_preview_fixed_window_g3

0xabb8,	// (0x00028934) popup_toolbar_trans_pane

0xb43d,	// (0x000291b9) aid_height_set_list_ParamLimits

0x6f4e,	// (0x00024cca) aid_size_parent_ParamLimits

0x5281,	// (0x00022ffd) list_highlight_pane_cp2_ParamLimits

0x5115,	// (0x00022e91) set_content_pane_g1_ParamLimits

0xb5b4,	// (0x00029330) list_single_image_pane_ParamLimits

0xb5b4,	// (0x00029330) list_single_image_pane

0xbfb7,	// (0x00029d33) aid_size_cell_image_ParamLimits

0xbfb7,	// (0x00029d33) aid_size_cell_image

0xbfc4,	// (0x00029d40) grid_single_image_pane_ParamLimits

0xbfc4,	// (0x00029d40) grid_single_image_pane

0x5115,	// (0x00022e91) list_single_image_pane_g1_ParamLimits

0x5115,	// (0x00022e91) list_single_image_pane_g1

0x5121,	// (0x00022e9d) list_single_image_pane_g2_ParamLimits

0x5121,	// (0x00022e9d) list_single_image_pane_g2

0x0001,

0xfc48,	// (0x0002d9c4) list_single_image_pane_g_ParamLimits

0xfc48,	// (0x0002d9c4) list_single_image_pane_g

0x6fef,	// (0x00024d6b) list_single_image_pane_t1_ParamLimits

0x6fef,	// (0x00024d6b) list_single_image_pane_t1

0xbfd0,	// (0x00029d4c) cell_image_list_pane_ParamLimits

0xbfd0,	// (0x00029d4c) cell_image_list_pane

0xbfe3,	// (0x00029d5f) cell_image_list_pane_g1

0xbfec,	// (0x00029d68) cell_image_list_pane_g2

0x0001,

0xfc4d,	// (0x0002d9c9) cell_image_list_pane_g

0x8487,	// (0x00026203) aid_size_cell_tb_trans_pane

0x50fb,	// (0x00022e77) bg_tb_trans_pane

0x8499,	// (0x00026215) grid_tb_trans_pane

0x5e2b,	// (0x00023ba7) bg_tb_trans_pane_g1

0x5e33,	// (0x00023baf) bg_tb_trans_pane_g2

0x5e3b,	// (0x00023bb7) bg_tb_trans_pane_g3

0x5e43,	// (0x00023bbf) bg_tb_trans_pane_g4

0x5e4b,	// (0x00023bc7) bg_tb_trans_pane_g5

0x5e63,	// (0x00023bdf) bg_tb_trans_pane_g6

0x5e6b,	// (0x00023be7) bg_tb_trans_pane_g7

0x5e53,	// (0x00023bcf) bg_tb_trans_pane_g8

0x5e5b,	// (0x00023bd7) bg_tb_trans_pane_g9

0x0008,

0xfc52,	// (0x0002d9ce) bg_tb_trans_pane_g

0x84ad,	// (0x00026229) cell_toolbar_trans_pane_ParamLimits

0x84ad,	// (0x00026229) cell_toolbar_trans_pane

0x7bd8,	// (0x00025954) cell_toolbar_trans_pane_g1

0xb95b,	// (0x000296d7) list_form2_midp_pane_t1

0xb969,	// (0x000296e5) list_form2_midp_pane_t2

0x0001,

0xfaef,	// (0x0002d86b) list_form2_midp_pane_t

0x78ac,	// (0x00025628) scroll_pane_cp51_ParamLimits

0x7a22,	// (0x0002579e) form2_midp_wait_pane_g1

0x7a2b,	// (0x000257a7) form2_midp_wait_pane_g2

0x7a34,	// (0x000257b0) form2_midp_wait_pane_g3

0x0002,

0xfb04,	// (0x0002d880) form2_midp_wait_pane_g

0x4b61,	// (0x000228dd) list_highlight_pane_cp21_ParamLimits

0x7a72,	// (0x000257ee) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7a81,	// (0x000257fd) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xdc1e,	// (0x0002b99a) list_single_2graphic_im_pane_ParamLimits

0xdc1e,	// (0x0002b99a) list_single_2graphic_im_pane

0xbff5,	// (0x00029d71) list_single_2graphic_im_pane_g1_ParamLimits

0xbff5,	// (0x00029d71) list_single_2graphic_im_pane_g1

0xc006,	// (0x00029d82) list_single_2graphic_im_pane_g2_ParamLimits

0xc006,	// (0x00029d82) list_single_2graphic_im_pane_g2

0xc012,	// (0x00029d8e) list_single_2graphic_im_pane_g3_ParamLimits

0xc012,	// (0x00029d8e) list_single_2graphic_im_pane_g3

0x0003,

0xfc65,	// (0x0002d9e1) list_single_2graphic_im_pane_g_ParamLimits

0xfc65,	// (0x0002d9e1) list_single_2graphic_im_pane_g

0xc026,	// (0x00029da2) list_single_2graphic_im_pane_t1_ParamLimits

0xc026,	// (0x00029da2) list_single_2graphic_im_pane_t1

0x813b,	// (0x00025eb7) list_single_graphic_2heading_pane_fp_ParamLimits

0x813b,	// (0x00025eb7) list_single_graphic_2heading_pane_fp

0xdfbe,	// (0x0002bd3a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xdfbe,	// (0x0002bd3a) list_single_graphic_2heading_pane_fp_g1

0x814f,	// (0x00025ecb) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x814f,	// (0x00025ecb) list_single_graphic_2heading_pane_fp_g2

0xd6fe,	// (0x0002b47a) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd6fe,	// (0x0002b47a) list_single_graphic_2heading_pane_fp_g3

0xdf93,	// (0x0002bd0f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xdf93,	// (0x0002bd0f) list_single_graphic_2heading_pane_fp_g4

0x815b,	// (0x00025ed7) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x815b,	// (0x00025ed7) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8c,	// (0x0002d908) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8c,	// (0x0002d908) list_single_graphic_2heading_pane_fp_g

0xe18b,	// (0x0002bf07) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe18b,	// (0x0002bf07) list_single_graphic_2heading_pane_fp_t1

0xdff6,	// (0x0002bd72) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xdff6,	// (0x0002bd72) list_single_graphic_2heading_pane_fp_t2

0xe1a1,	// (0x0002bf1d) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe1a1,	// (0x0002bf1d) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6e,	// (0x0002d9ea) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6e,	// (0x0002d9ea) list_single_graphic_2heading_pane_fp_t

0x7c61,	// (0x000259dd) fep_hwr_write_pane_g5_ParamLimits

0x7c61,	// (0x000259dd) fep_hwr_write_pane_g5

0x7c6d,	// (0x000259e9) fep_hwr_write_pane_g6_ParamLimits

0x7c6d,	// (0x000259e9) fep_hwr_write_pane_g6

0x8361,	// (0x000260dd) eswt_shell_pane_ParamLimits

0x5e9f,	// (0x00023c1b) bg_popup_window_pane_cp18_ParamLimits

0x6ef2,	// (0x00024c6e) heading_pane_cp70

0x8450,	// (0x000261cc) popup_eswt_tasktip_window_t1_ParamLimits

0xac92,	// (0x00028a0e) aid_touch_tab_arrow_left

0xac9e,	// (0x00028a1a) aid_touch_tab_arrow_right

0x9b7e,	// (0x000278fa) title_pane_g3_ParamLimits

0x9b7e,	// (0x000278fa) title_pane_g3

0x50cb,	// (0x00022e47) set_value_pane_g1

0xabb8,	// (0x00028934) popup_toolbar_trans_pane_ParamLimits

0x8487,	// (0x00026203) aid_size_cell_tb_trans_pane_ParamLimits

0x50fb,	// (0x00022e77) bg_tb_trans_pane_ParamLimits

0x8499,	// (0x00026215) grid_tb_trans_pane_ParamLimits

0x4c94,	// (0x00022a10) cont_note_pane_ParamLimits

0x4c94,	// (0x00022a10) cont_note_pane

0x4f21,	// (0x00022c9d) cont_snote2_single_text_pane_ParamLimits

0x4f21,	// (0x00022c9d) cont_snote2_single_text_pane

0x4f21,	// (0x00022c9d) cont_snote2_single_graphic_pane_ParamLimits

0x4f21,	// (0x00022c9d) cont_snote2_single_graphic_pane

0x6415,	// (0x00024191) cont_note_wait_pane_ParamLimits

0x6415,	// (0x00024191) cont_note_wait_pane

0x6415,	// (0x00024191) cont_note_image_pane_ParamLimits

0x6415,	// (0x00024191) cont_note_image_pane

0x84df,	// (0x0002625b) popup_note2_window_g1_ParamLimits

0x84df,	// (0x0002625b) popup_note2_window_g1

0x8510,	// (0x0002628c) popup_note2_window_t1_ParamLimits

0x8510,	// (0x0002628c) popup_note2_window_t1

0x8555,	// (0x000262d1) popup_note2_window_t2_ParamLimits

0x8555,	// (0x000262d1) popup_note2_window_t2

0x859a,	// (0x00026316) popup_note2_window_t3_ParamLimits

0x859a,	// (0x00026316) popup_note2_window_t3

0x85df,	// (0x0002635b) popup_note2_window_t4_ParamLimits

0x85df,	// (0x0002635b) popup_note2_window_t4

0x4d18,	// (0x00022a94) popup_note2_window_t5_ParamLimits

0x4d18,	// (0x00022a94) popup_note2_window_t5

0x0004,

0xfc7a,	// (0x0002d9f6) popup_note2_window_t_ParamLimits

0xfc7a,	// (0x0002d9f6) popup_note2_window_t

0x860e,	// (0x0002638a) popup_note2_image_window_g1_ParamLimits

0x860e,	// (0x0002638a) popup_note2_image_window_g1

0x861a,	// (0x00026396) popup_note2_image_window_g2_ParamLimits

0x861a,	// (0x00026396) popup_note2_image_window_g2

0x0001,

0xfc85,	// (0x0002da01) popup_note2_image_window_g_ParamLimits

0xfc85,	// (0x0002da01) popup_note2_image_window_g

0x862c,	// (0x000263a8) popup_note2_image_window_t1_ParamLimits

0x862c,	// (0x000263a8) popup_note2_image_window_t1

0x8644,	// (0x000263c0) popup_note2_image_window_t2_ParamLimits

0x8644,	// (0x000263c0) popup_note2_image_window_t2

0x865c,	// (0x000263d8) popup_note2_image_window_t3_ParamLimits

0x865c,	// (0x000263d8) popup_note2_image_window_t3

0x0002,

0xfc8a,	// (0x0002da06) popup_note2_image_window_t_ParamLimits

0xfc8a,	// (0x0002da06) popup_note2_image_window_t

0x6423,	// (0x0002419f) popup_note2_wait_window_g1_ParamLimits

0x6423,	// (0x0002419f) popup_note2_wait_window_g1

0x642f,	// (0x000241ab) popup_note2_wait_window_g2_ParamLimits

0x642f,	// (0x000241ab) popup_note2_wait_window_g2

0x643b,	// (0x000241b7) popup_note2_wait_window_g3_ParamLimits

0x643b,	// (0x000241b7) popup_note2_wait_window_g3

0x0002,

0xf843,	// (0x0002d5bf) popup_note2_wait_window_g_ParamLimits

0xf843,	// (0x0002d5bf) popup_note2_wait_window_g

0x8678,	// (0x000263f4) popup_note2_wait_window_t1_ParamLimits

0x8678,	// (0x000263f4) popup_note2_wait_window_t1

0x8696,	// (0x00026412) popup_note2_wait_window_t2_ParamLimits

0x8696,	// (0x00026412) popup_note2_wait_window_t2

0x86b4,	// (0x00026430) popup_note2_wait_window_t3_ParamLimits

0x86b4,	// (0x00026430) popup_note2_wait_window_t3

0x86c6,	// (0x00026442) popup_note2_wait_window_t4_ParamLimits

0x86c6,	// (0x00026442) popup_note2_wait_window_t4

0x0003,

0xfc91,	// (0x0002da0d) popup_note2_wait_window_t_ParamLimits

0xfc91,	// (0x0002da0d) popup_note2_wait_window_t

0x86d8,	// (0x00026454) wait_bar2_pane_ParamLimits

0x86d8,	// (0x00026454) wait_bar2_pane

0x86f0,	// (0x0002646c) popup_snote2_single_text_window_g1_ParamLimits

0x86f0,	// (0x0002646c) popup_snote2_single_text_window_g1

0x8718,	// (0x00026494) popup_snote2_single_text_window_t1_ParamLimits

0x8718,	// (0x00026494) popup_snote2_single_text_window_t1

0x8764,	// (0x000264e0) popup_snote2_single_text_window_t2_ParamLimits

0x8764,	// (0x000264e0) popup_snote2_single_text_window_t2

0x87b0,	// (0x0002652c) popup_snote2_single_text_window_t3_ParamLimits

0x87b0,	// (0x0002652c) popup_snote2_single_text_window_t3

0x87f1,	// (0x0002656d) popup_snote2_single_text_window_t4_ParamLimits

0x87f1,	// (0x0002656d) popup_snote2_single_text_window_t4

0x8827,	// (0x000265a3) popup_snote2_single_text_window_t5_ParamLimits

0x8827,	// (0x000265a3) popup_snote2_single_text_window_t5

0x0004,

0xfc9a,	// (0x0002da16) popup_snote2_single_text_window_t_ParamLimits

0xfc9a,	// (0x0002da16) popup_snote2_single_text_window_t

0x8852,	// (0x000265ce) popup_snote2_single_graphic_window_g1_ParamLimits

0x8852,	// (0x000265ce) popup_snote2_single_graphic_window_g1

0x887a,	// (0x000265f6) popup_snote2_single_graphic_window_g2_ParamLimits

0x887a,	// (0x000265f6) popup_snote2_single_graphic_window_g2

0x0001,

0xfca5,	// (0x0002da21) popup_snote2_single_graphic_window_g_ParamLimits

0xfca5,	// (0x0002da21) popup_snote2_single_graphic_window_g

0x88a2,	// (0x0002661e) popup_snote2_single_graphic_window_t1_ParamLimits

0x88a2,	// (0x0002661e) popup_snote2_single_graphic_window_t1

0x88ee,	// (0x0002666a) popup_snote2_single_graphic_window_t2_ParamLimits

0x88ee,	// (0x0002666a) popup_snote2_single_graphic_window_t2

0x87b0,	// (0x0002652c) popup_snote2_single_graphic_window_t3_ParamLimits

0x87b0,	// (0x0002652c) popup_snote2_single_graphic_window_t3

0x87f1,	// (0x0002656d) popup_snote2_single_graphic_window_t4_ParamLimits

0x87f1,	// (0x0002656d) popup_snote2_single_graphic_window_t4

0x8827,	// (0x000265a3) popup_snote2_single_graphic_window_t5_ParamLimits

0x8827,	// (0x000265a3) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaa,	// (0x0002da26) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaa,	// (0x0002da26) popup_snote2_single_graphic_window_t

0x7845,	// (0x000255c1) clock_nsta_pane_cp2_t1

0x7845,	// (0x000255c1) clock_nsta_pane_cp2_t2

0x0001,

0xfac5,	// (0x0002d841) clock_nsta_pane_cp2_t

0xd8aa,	// (0x0002b626) form_field_data_wide_pane_g1_ParamLimits

0x5115,	// (0x00022e91) form_field_data_wide_pane_g2_ParamLimits

0x5115,	// (0x00022e91) form_field_data_wide_pane_g2

0x5121,	// (0x00022e9d) form_field_data_wide_pane_g3_ParamLimits

0x5121,	// (0x00022e9d) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0002d3f2) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0002d3f2) form_field_data_wide_pane_g

0xb822,	// (0x0002959e) grid_touch_3_pane_ParamLimits

0xb822,	// (0x0002959e) grid_touch_3_pane

0xc057,	// (0x00029dd3) cell_touch_3_pane_ParamLimits

0xc057,	// (0x00029dd3) cell_touch_3_pane

0x7bd8,	// (0x00025954) cell_touch_3_pane_g1

0x7bd8,	// (0x00025954) cell_touch_3_pane_g2

0x0001,

0xfb4a,	// (0x0002d8c6) cell_touch_3_pane_g

0x4d70,	// (0x00022aec) cont_query_data_pane

0x4d78,	// (0x00022af4) cont_query_data_pane_cp1

0x893a,	// (0x000266b6) button_value_adjust_pane_cp7

0x8942,	// (0x000266be) query_popup_pane_cp3

0x564d,	// (0x000233c9) bg_popup_sub_pane_cp22_ParamLimits

0xa262,	// (0x00027fde) navi_navi_volume_pane_cp2

0xa27a,	// (0x00027ff6) popup_side_volume_key_window_g2

0xa286,	// (0x00028002) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0002d488) popup_side_volume_key_window_g

0xa2a0,	// (0x0002801c) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0002d48f) popup_side_volume_key_window_t

0x5897,	// (0x00023613) popup_side_volume_key_window_ParamLimits

0xd545,	// (0x0002b2c1) list_double_graphic_pane_g4_ParamLimits

0xd545,	// (0x0002b2c1) list_double_graphic_pane_g4

0xb588,	// (0x00029304) list_single_2heading_msg_pane_ParamLimits

0xb588,	// (0x00029304) list_single_2heading_msg_pane

0xe1bf,	// (0x0002bf3b) list_single_2heading_msg_pane_g1_ParamLimits

0xe1bf,	// (0x0002bf3b) list_single_2heading_msg_pane_g1

0xd3a6,	// (0x0002b122) list_single_2heading_msg_pane_g2_ParamLimits

0xd3a6,	// (0x0002b122) list_single_2heading_msg_pane_g2

0xe1cb,	// (0x0002bf47) list_single_2heading_msg_pane_g3_ParamLimits

0xe1cb,	// (0x0002bf47) list_single_2heading_msg_pane_g3

0xe1d7,	// (0x0002bf53) list_single_2heading_msg_pane_g4_ParamLimits

0xe1d7,	// (0x0002bf53) list_single_2heading_msg_pane_g4

0x0003,

0xfcb5,	// (0x0002da31) list_single_2heading_msg_pane_g_ParamLimits

0xfcb5,	// (0x0002da31) list_single_2heading_msg_pane_g

0xe1ef,	// (0x0002bf6b) list_single_2heading_msg_pane_t1_ParamLimits

0xe1ef,	// (0x0002bf6b) list_single_2heading_msg_pane_t1

0xe217,	// (0x0002bf93) list_single_2heading_msg_pane_t2_ParamLimits

0xe217,	// (0x0002bf93) list_single_2heading_msg_pane_t2

0xe24b,	// (0x0002bfc7) list_single_2heading_msg_pane_t3_ParamLimits

0xe24b,	// (0x0002bfc7) list_single_2heading_msg_pane_t3

0xe284,	// (0x0002c000) list_single_2heading_msg_pane_t4_ParamLimits

0xe284,	// (0x0002c000) list_single_2heading_msg_pane_t4

0x0003,

0xfcbe,	// (0x0002da3a) list_single_2heading_msg_pane_t_ParamLimits

0xfcbe,	// (0x0002da3a) list_single_2heading_msg_pane_t

0x4b07,	// (0x00022883) title_pane_g4_ParamLimits

0x4b07,	// (0x00022883) title_pane_g4

0x9f33,	// (0x00027caf) title_pane_stacon_g3_ParamLimits

0x9f33,	// (0x00027caf) title_pane_stacon_g3

0x84d3,	// (0x0002624f) list_single_2graphic_im_pane_g4_ParamLimits

0x84d3,	// (0x0002624f) list_single_2graphic_im_pane_g4

0x6d1c,	// (0x00024a98) popup_side_volume_key_window_cp

0x71c1,	// (0x00024f3d) main_idle_act2_pane_t1

0xaf6f,	// (0x00028ceb) toolbar_button_pane_g10

0x9e8c,	// (0x00027c08) popup_toolbar_window_cp1

0x7836,	// (0x000255b2) clock_nsta_pane_cp_t1

0x7836,	// (0x000255b2) clock_nsta_pane_cp_t2

0x0001,

0xfac0,	// (0x0002d83c) clock_nsta_pane_cp_t

0xa262,	// (0x00027fde) navi_navi_volume_pane_cp2_ParamLimits

0xa26e,	// (0x00027fea) popup_side_volume_key_window_g1_ParamLimits

0xa27a,	// (0x00027ff6) popup_side_volume_key_window_g2_ParamLimits

0xa286,	// (0x00028002) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0002d488) popup_side_volume_key_window_g_ParamLimits

0xb9c8,	// (0x00029744) fep_hwr_aid_pane

0xba69,	// (0x000297e5) bg_fep_hwr_top_pane_g4_ParamLimits

0x7c43,	// (0x000259bf) fep_hwr_top_pane_g1_ParamLimits

0x7c31,	// (0x000259ad) fep_hwr_top_pane_g2_ParamLimits

0xba89,	// (0x00029805) fep_hwr_top_pane_g3_ParamLimits

0xfb15,	// (0x0002d891) fep_hwr_top_pane_g_ParamLimits

0xba9e,	// (0x0002981a) fep_hwr_top_text_pane_ParamLimits

0x6b25,	// (0x000248a1) aid_touch_tab_arrow_arrow_2

0x6b1c,	// (0x00024898) aid_touch_tab_arrow_left_2

0xb9dc,	// (0x00029758) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xba0f,	// (0x0002978b) fep_hwr_prediction_pane

0x7d76,	// (0x00025af2) fep_vkb_prediction_pane

0xbbe6,	// (0x00029962) fep_vkb_side_pane_g3_ParamLimits

0xbbe6,	// (0x00029962) fep_vkb_side_pane_g3

0xbcf1,	// (0x00029a6d) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xbd5b,	// (0x00029ad7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xbd68,	// (0x00029ae4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc4,	// (0x0002d940) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xc098,	// (0x00029e14) fep_hwr_prediction_pane_g1

0xc0a2,	// (0x00029e1e) fep_hwr_prediction_pane_g2

0xc0aa,	// (0x00029e26) fep_hwr_prediction_pane_g3

0xc0b2,	// (0x00029e2e) fep_hwr_prediction_pane_g4

0x0003,

0xfcc7,	// (0x0002da43) fep_hwr_prediction_pane_g

0x8953,	// (0x000266cf) fep_vkb_prediction_pane_g1

0x895d,	// (0x000266d9) fep_vkb_prediction_pane_g2

0x8965,	// (0x000266e1) fep_vkb_prediction_pane_g3

0x896d,	// (0x000266e9) fep_vkb_prediction_pane_g4

0x0003,

0xfcd0,	// (0x0002da4c) fep_vkb_prediction_pane_g

0xb3c5,	// (0x00029141) slider_set_pane_g3

0xb3d9,	// (0x00029155) slider_set_pane_g4

0xb3f1,	// (0x0002916d) slider_set_pane_g5

0xb3c5,	// (0x00029141) slider_set_pane_g6

0xb407,	// (0x00029183) slider_set_pane_g7

0x6f71,	// (0x00024ced) slider_form_pane_g3

0x6f7a,	// (0x00024cf6) slider_form_pane_g4

0x6f82,	// (0x00024cfe) slider_form_pane_g5

0x6f71,	// (0x00024ced) slider_form_pane_g6

0xb56d,	// (0x000292e9) slider_form_pane_g7

0x740a,	// (0x00025186) slider_set_pane_vc_g3

0x7413,	// (0x0002518f) slider_set_pane_vc_g4

0x741c,	// (0x00025198) slider_set_pane_vc_g5

0x740a,	// (0x00025186) slider_set_pane_vc_g6

0x7425,	// (0x000251a1) slider_set_pane_vc_g7

0x740a,	// (0x00025186) slider_form_pane_vc_g1

0x7413,	// (0x0002518f) slider_form_pane_vc_g2

0x741c,	// (0x00025198) slider_form_pane_vc_g3

0x740a,	// (0x00025186) slider_form_pane_vc_g4

0x7599,	// (0x00025315) slider_form_pane_vc_g5

0x0004,

0xfa92,	// (0x0002d80e) slider_form_pane_vc_g

0x9957,	// (0x000276d3) main_idle_act3_pane

0x8975,	// (0x000266f1) ai3_links_pane

0xc0ba,	// (0x00029e36) popup_ai3_data_window_ParamLimits

0xc0ba,	// (0x00029e36) popup_ai3_data_window

0x4a71,	// (0x000227ed) grid_ai3_links_pane

0xc0d2,	// (0x00029e4e) cell_ai3_links_pane_ParamLimits

0xc0d2,	// (0x00029e4e) cell_ai3_links_pane

0x897e,	// (0x000266fa) bg_popup_sub_pane_cp11

0x898b,	// (0x00026707) cell_ai3_links_pane_g1

0x4a71,	// (0x000227ed) bg_popup_sub_pane_cp12

0x89b0,	// (0x0002672c) heading_ai3_data_pane

0x89b8,	// (0x00026734) list_ai3_gene_pane

0x89c4,	// (0x00026740) popup_ai3_data_window_g1

0x89cc,	// (0x00026748) heading_ai3_data_pane_g1

0x89d4,	// (0x00026750) heading_ai3_data_pane_t1

0x89e2,	// (0x0002675e) list_double_ai3_gene_pane_ParamLimits

0x89e2,	// (0x0002675e) list_double_ai3_gene_pane

0x89ef,	// (0x0002676b) list_single_ai3_gene_pane_ParamLimits

0x89ef,	// (0x0002676b) list_single_ai3_gene_pane

0x7b9d,	// (0x00025919) list_highlight_pane_cp7_ParamLimits

0x7b9d,	// (0x00025919) list_highlight_pane_cp7

0x89fc,	// (0x00026778) list_single_a13_gene_pane_t1_ParamLimits

0x89fc,	// (0x00026778) list_single_a13_gene_pane_t1

0x8a13,	// (0x0002678f) list_single_ai3_gene_pane_g1

0x8a1c,	// (0x00026798) list_single_ai3_gene_pane_g2

0x0001,

0xfcd9,	// (0x0002da55) list_single_ai3_gene_pane_g

0x8a24,	// (0x000267a0) list_double_ai3_gene_pane_g1_ParamLimits

0x8a24,	// (0x000267a0) list_double_ai3_gene_pane_g1

0x8a30,	// (0x000267ac) list_double_ai3_gene_pane_t1_ParamLimits

0x8a30,	// (0x000267ac) list_double_ai3_gene_pane_t1

0x8a4c,	// (0x000267c8) list_double_ai3_gene_pane_t2_ParamLimits

0x8a4c,	// (0x000267c8) list_double_ai3_gene_pane_t2

0x8a61,	// (0x000267dd) list_double_ai3_gene_pane_t3_ParamLimits

0x8a61,	// (0x000267dd) list_double_ai3_gene_pane_t3

0x0002,

0xfcde,	// (0x0002da5a) list_double_ai3_gene_pane_t_ParamLimits

0xfcde,	// (0x0002da5a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe1b7,	// (0x0002bf33) aid_size_min_col_2

0xc084,	// (0x00029e00) aid_size_min_msg_ParamLimits

0xc084,	// (0x00029e00) aid_size_min_msg

0xbbfa,	// (0x00029976) fep_vkb_top_text_pane_g2_ParamLimits

0xbbfa,	// (0x00029976) fep_vkb_top_text_pane_g2

0x0001,

0xfb45,	// (0x0002d8c1) fep_vkb_top_text_pane_g_ParamLimits

0xfb45,	// (0x0002d8c1) fep_vkb_top_text_pane_g

0x9957,	// (0x000276d3) main_hc_apps_shell_pane

0x8a7e,	// (0x000267fa) grid_hc_apps_pane_ParamLimits

0x8a7e,	// (0x000267fa) grid_hc_apps_pane

0x8a8d,	// (0x00026809) list_hc_apps_pane

0x8a95,	// (0x00026811) scroll_pane_cp37_ParamLimits

0x8a95,	// (0x00026811) scroll_pane_cp37

0xc0e6,	// (0x00029e62) cell_hc_apps_pane_ParamLimits

0xc0e6,	// (0x00029e62) cell_hc_apps_pane

0xc174,	// (0x00029ef0) cell_hc_apps_pane_g1_ParamLimits

0xc174,	// (0x00029ef0) cell_hc_apps_pane_g1

0x8aa1,	// (0x0002681d) cell_hc_apps_pane_g2_ParamLimits

0x8aa1,	// (0x0002681d) cell_hc_apps_pane_g2

0x8abd,	// (0x00026839) cell_hc_apps_pane_g3_ParamLimits

0x8abd,	// (0x00026839) cell_hc_apps_pane_g3

0x0002,

0xfce5,	// (0x0002da61) cell_hc_apps_pane_g_ParamLimits

0xfce5,	// (0x0002da61) cell_hc_apps_pane_g

0xc1a1,	// (0x00029f1d) cell_hc_apps_pane_t1_ParamLimits

0xc1a1,	// (0x00029f1d) cell_hc_apps_pane_t1

0x4c94,	// (0x00022a10) grid_highlight_pane_cp10_ParamLimits

0x4c94,	// (0x00022a10) grid_highlight_pane_cp10

0xc1df,	// (0x00029f5b) list_single_hc_apps_pane_ParamLimits

0xc1df,	// (0x00029f5b) list_single_hc_apps_pane

0xc20f,	// (0x00029f8b) list_single_hc_apps_pane_g1

0xe2a9,	// (0x0002c025) list_single_hc_apps_pane_g2

0x0001,

0xfcec,	// (0x0002da68) list_single_hc_apps_pane_g

0xe2c2,	// (0x0002c03e) list_single_hc_apps_pane_g2_copy1

0xe2de,	// (0x0002c05a) list_single_hc_apps_pane_t1

0x4b61,	// (0x000228dd) bg_set_opt_pane_cp_ParamLimits

0x9c26,	// (0x000279a2) setting_slider_pane_t1_ParamLimits

0x9c3c,	// (0x000279b8) setting_slider_pane_t2_ParamLimits

0x9c55,	// (0x000279d1) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002d2da) setting_slider_pane_t_ParamLimits

0x9c6c,	// (0x000279e8) slider_set_pane_ParamLimits

0xa679,	// (0x000283f5) control_pane_g5_ParamLimits

0xa679,	// (0x000283f5) control_pane_g5

0x6f39,	// (0x00024cb5) slider_set_pane_g1_ParamLimits

0xb3b9,	// (0x00029135) slider_set_pane_g2_ParamLimits

0xb3c5,	// (0x00029141) slider_set_pane_g3_ParamLimits

0xb3d9,	// (0x00029155) slider_set_pane_g4_ParamLimits

0xb3f1,	// (0x0002916d) slider_set_pane_g5_ParamLimits

0xb3c5,	// (0x00029141) slider_set_pane_g6_ParamLimits

0xb407,	// (0x00029183) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0002d6db) slider_set_pane_g_ParamLimits

0x4b61,	// (0x000228dd) navi_icon_text_pane_ParamLimits

0xac6c,	// (0x000289e8) aid_fill_nsta_2_ParamLimits

0xac92,	// (0x00028a0e) aid_touch_tab_arrow_left_ParamLimits

0xac9e,	// (0x00028a1a) aid_touch_tab_arrow_right_ParamLimits

0xad08,	// (0x00028a84) clock_nsta_pane_ParamLimits

0x6afe,	// (0x0002487a) navi_icon_pane_g1_ParamLimits

0x6b0a,	// (0x00024886) navi_text_pane_t1_ParamLimits

0x7886,	// (0x00025602) navi_icon_text_pane_g1_ParamLimits

0x7892,	// (0x0002560e) navi_icon_text_pane_t1_ParamLimits

0xc20f,	// (0x00029f8b) list_single_hc_apps_pane_g1_ParamLimits

0xe2a9,	// (0x0002c025) list_single_hc_apps_pane_g2_ParamLimits

0xfcec,	// (0x0002da68) list_single_hc_apps_pane_g_ParamLimits

0xe2c2,	// (0x0002c03e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xe2de,	// (0x0002c05a) list_single_hc_apps_pane_t1_ParamLimits

0x9a9a,	// (0x00027816) popup_toolbar2_fixed_window_ParamLimits

0x9a9a,	// (0x00027816) popup_toolbar2_fixed_window

0xabb0,	// (0x0002892c) popup_toolbar2_float_window

0x4a71,	// (0x000227ed) bg_popup_sub_pane_cp27

0x8adf,	// (0x0002685b) grid_toolbar2_float_pane

0x4a71,	// (0x000227ed) bg_popup_sub_pane_cp26

0x8adf,	// (0x0002685b) grid_toolbar2_fixed_pane

0xc228,	// (0x00029fa4) cell_toolbar2_fixed_pane_ParamLimits

0xc228,	// (0x00029fa4) cell_toolbar2_fixed_pane

0xc239,	// (0x00029fb5) cell_toolbar2_fixed_pane_g1

0x8ae7,	// (0x00026863) toolbar2_fixed_button_pane

0x5e2b,	// (0x00023ba7) toolbar2_fixed_button_pane_g1

0x5e33,	// (0x00023baf) toolbar2_fixed_button_pane_g2

0x5e3b,	// (0x00023bb7) toolbar2_fixed_button_pane_g3

0x5e43,	// (0x00023bbf) toolbar2_fixed_button_pane_g4

0x5e4b,	// (0x00023bc7) toolbar2_fixed_button_pane_g5

0x5e53,	// (0x00023bcf) toolbar2_fixed_button_pane_g6

0x5e5b,	// (0x00023bd7) toolbar2_fixed_button_pane_g7

0x5e63,	// (0x00023bdf) toolbar2_fixed_button_pane_g8

0x5e6b,	// (0x00023be7) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0002d5dd) toolbar2_fixed_button_pane_g

0x8aef,	// (0x0002686b) cell_toolbar2_float_pane_ParamLimits

0x8aef,	// (0x0002686b) cell_toolbar2_float_pane

0x8b00,	// (0x0002687c) cell_toolbar2_float_pane_g1

0x8ae7,	// (0x00026863) toolbar2_fixed_button_pane_cp

0xbbb3,	// (0x0002992f) fep_vkb_accented_list_pane_ParamLimits

0xbbb3,	// (0x0002992f) fep_vkb_accented_list_pane

0xbcd1,	// (0x00029a4d) bg_popup_fep_shadow_pane_g9

0x5a9f,	// (0x0002381b) bg_popup_fep_shadow_pane_cp3

0x5231,	// (0x00022fad) list_accented_list_pane

0x8b09,	// (0x00026885) list_single_accented_list_pane_ParamLimits

0x8b09,	// (0x00026885) list_single_accented_list_pane

0x5a9f,	// (0x0002381b) list_highlight_pane_cp10

0x8b1a,	// (0x00026896) list_single_accented_list_pane_t1

0xab16,	// (0x00028892) popup_slider_window_ParamLimits

0xab16,	// (0x00028892) popup_slider_window

0x894a,	// (0x000266c6) aid_indentation_list_msg

0xc2d4,	// (0x0002a050) bg_popup_window_pane_cp19

0x8b80,	// (0x000268fc) popup_slider_window_g1

0x8b9c,	// (0x00026918) popup_slider_window_g2

0x8bb8,	// (0x00026934) popup_slider_window_g3

0x0005,

0xfcf1,	// (0x0002da6d) popup_slider_window_g

0x8bd4,	// (0x00026950) popup_slider_window_t1

0x8c18,	// (0x00026994) small_volume_slider_vertical_pane

0x7bd8,	// (0x00025954) small_volume_slider_vertical_pane_g1

0x7bd8,	// (0x00025954) small_volume_slider_vertical_pane_g2

0x8c34,	// (0x000269b0) small_volume_slider_vertical_pane_g3

0x0002,

0xfd03,	// (0x0002da7f) small_volume_slider_vertical_pane_g

0x990e,	// (0x0002768a) area_side_right_pane_ParamLimits

0x990e,	// (0x0002768a) area_side_right_pane

0xc34e,	// (0x0002a0ca) aid_size_side_button_ParamLimits

0xc34e,	// (0x0002a0ca) aid_size_side_button

0xc362,	// (0x0002a0de) grid_sctrl_middle_pane_ParamLimits

0xc362,	// (0x0002a0de) grid_sctrl_middle_pane

0xc37e,	// (0x0002a0fa) sctrl_sk_bottom_pane

0xc38f,	// (0x0002a10b) sctrl_sk_top_pane

0xc3a1,	// (0x0002a11d) aid_touch_sctrl_top

0xc3ae,	// (0x0002a12a) bg_sctrl_sk_pane_ParamLimits

0xc3ae,	// (0x0002a12a) bg_sctrl_sk_pane

0xc3bc,	// (0x0002a138) sctrl_sk_top_pane_g1

0xc3c9,	// (0x0002a145) sctrl_sk_top_pane_t1

0xc3a1,	// (0x0002a11d) aid_touch_sctrl_bottom

0xc3ae,	// (0x0002a12a) bg_sctrl_sk_pane_cp_ParamLimits

0xc3ae,	// (0x0002a12a) bg_sctrl_sk_pane_cp

0xc3e4,	// (0x0002a160) sctrl_sk_bottom_pane_g1

0xc3c9,	// (0x0002a145) sctrl_sk_bottom_pane_t1

0xc3ed,	// (0x0002a169) cell_sctrl_middle_pane_ParamLimits

0xc3ed,	// (0x0002a169) cell_sctrl_middle_pane

0xc408,	// (0x0002a184) aid_touch_sctrl_middle_ParamLimits

0xc408,	// (0x0002a184) aid_touch_sctrl_middle

0xc419,	// (0x0002a195) bg_sctrl_middle_pane_ParamLimits

0xc419,	// (0x0002a195) bg_sctrl_middle_pane

0xbcf1,	// (0x00029a6d) cell_sctrl_middle_pane_g1_ParamLimits

0xbcf1,	// (0x00029a6d) cell_sctrl_middle_pane_g1

0xc427,	// (0x0002a1a3) cell_sctrl_middle_pane_g2_ParamLimits

0xc427,	// (0x0002a1a3) cell_sctrl_middle_pane_g2

0x0001,

0xfd0f,	// (0x0002da8b) cell_sctrl_middle_pane_g_ParamLimits

0xfd0f,	// (0x0002da8b) cell_sctrl_middle_pane_g

0x5e2b,	// (0x00023ba7) bg_sctrl_middle_pane_g1

0x5e3b,	// (0x00023bb7) bg_sctrl_middle_pane_g2

0x5e33,	// (0x00023baf) bg_sctrl_middle_pane_g3

0x5e4b,	// (0x00023bc7) bg_sctrl_middle_pane_g4

0x5e43,	// (0x00023bbf) bg_sctrl_middle_pane_g5

0x5e53,	// (0x00023bcf) bg_sctrl_middle_pane_g6

0x5e5b,	// (0x00023bd7) bg_sctrl_middle_pane_g7

0x5e6b,	// (0x00023be7) bg_sctrl_middle_pane_g8

0x0007,

0xfd14,	// (0x0002da90) bg_sctrl_middle_pane_g

0x5e63,	// (0x00023bdf) bg_sctrl_middle_pane_g8_copy1

0x5e2b,	// (0x00023ba7) bg_sctrl_sk_pane_g1

0x5e33,	// (0x00023baf) bg_sctrl_sk_pane_g2

0x5e3b,	// (0x00023bb7) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0002d5dd) bg_sctrl_sk_pane_g

0x5043,	// (0x00022dbf) aid_size_touch_scroll_bar

0x5e43,	// (0x00023bbf) bg_sctrl_sk_pane_g4

0x5e4b,	// (0x00023bc7) bg_sctrl_sk_pane_g5

0x5e53,	// (0x00023bcf) bg_sctrl_sk_pane_g6

0x5e5b,	// (0x00023bd7) bg_sctrl_sk_pane_g7

0x5e63,	// (0x00023bdf) bg_sctrl_sk_pane_g8

0x5e6b,	// (0x00023be7) bg_sctrl_sk_pane_g9

0xa84c,	// (0x000285c8) popup_fep_china_hwr2_fs_candidate_window

0xa854,	// (0x000285d0) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa854,	// (0x000285d0) popup_fep_china_hwr2_fs_control_window

0xbcf1,	// (0x00029a6d) sctrl_sk_top_pane_g2

0x0001,

0xfd0a,	// (0x0002da86) sctrl_sk_top_pane_g

0xc43d,	// (0x0002a1b9) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc43d,	// (0x0002a1b9) aid_fep_china_hwr2_fs_cell

0xc44e,	// (0x0002a1ca) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc44e,	// (0x0002a1ca) bg_popup_fep_shadow_pane_cp4

0xc465,	// (0x0002a1e1) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc465,	// (0x0002a1e1) bg_popup_fep_shadow_pane_cp5

0xc477,	// (0x0002a1f3) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc477,	// (0x0002a1f3) popup_fep_china_hwr2_fs_control_bar_grid

0xc487,	// (0x0002a203) popup_fep_china_hwr2_fs_control_funtion_grid

0x8c4b,	// (0x000269c7) aid_fep_china_hwr2_fs_candi_cell

0x4a71,	// (0x000227ed) bg_popup_fep_shadow_pane_cp6

0x8c55,	// (0x000269d1) popup_fep_china_hwr2_fs_candidate_grid

0xc48f,	// (0x0002a20b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc48f,	// (0x0002a20b) cell_fep_china_hwr2_fs_funtion_grid

0x7bd8,	// (0x00025954) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8c3d,	// (0x000269b9) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8c3d,	// (0x000269b9) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8c5d,	// (0x000269d9) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8c5d,	// (0x000269d9) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd25,	// (0x0002daa1) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd25,	// (0x0002daa1) cell_fep_china_hwr2_fs_funtion_grid_g

0xc4a7,	// (0x0002a223) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xc4a7,	// (0x0002a223) cell_fep_china_hwr2_fs_funtion_grid_t1

0xc4bc,	// (0x0002a238) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xc4bc,	// (0x0002a238) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2a,	// (0x0002daa6) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2a,	// (0x0002daa6) cell_fep_china_hwr2_fs_funtion_grid_t

0x8c73,	// (0x000269ef) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8c7b,	// (0x000269f7) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8c83,	// (0x000269ff) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2f,	// (0x0002daab) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8c8b,	// (0x00026a07) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8c8b,	// (0x00026a07) cell_fep_china_hwr2_fs_candidate_grid

0x8ca4,	// (0x00026a20) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8cac,	// (0x00026a28) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7bd8,	// (0x00025954) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7bd8,	// (0x00025954) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4a,	// (0x0002d8c6) cell_fep_china_hwr2_fs_candidate_grid_g

0x8cb4,	// (0x00026a30) cell_fep_china_hwr2_fs_candidate_grid_t1

0x5c90,	// (0x00023a0c) clock_nsta_pane_cp_24_ParamLimits

0x5c90,	// (0x00023a0c) clock_nsta_pane_cp_24

0x5ced,	// (0x00023a69) indicator_nsta_pane_cp_24_ParamLimits

0x5ced,	// (0x00023a69) indicator_nsta_pane_cp_24

0x6a09,	// (0x00024785) heading_pane_g1

0x0001,

0xf8c6,	// (0x0002d642) heading_pane_g

0xb657,	// (0x000293d3) grid_sct_catagory_button_pane

0x702f,	// (0x00024dab) scroll_pane_cp5_ParamLimits

0x78b8,	// (0x00025634) button_value_adjust_pane_cp5_ParamLimits

0x78b8,	// (0x00025634) button_value_adjust_pane_cp5

0x7976,	// (0x000256f2) form2_midp_time_pane_ParamLimits

0x8cc2,	// (0x00026a3e) cell_sct_catagory_button_pane_ParamLimits

0x8cc2,	// (0x00026a3e) cell_sct_catagory_button_pane

0x7b9d,	// (0x00025919) bg_button_pane_cp01_ParamLimits

0x7b9d,	// (0x00025919) bg_button_pane_cp01

0x7bd8,	// (0x00025954) cell_sct_catagory_button_pane_g1

0xab4d,	// (0x000288c9) popup_tb_extension_window

0xc4d8,	// (0x0002a254) aid_size_cell_ext_ParamLimits

0xc4d8,	// (0x0002a254) aid_size_cell_ext

0x4c94,	// (0x00022a10) bg_tb_trans_pane_cp1_ParamLimits

0x4c94,	// (0x00022a10) bg_tb_trans_pane_cp1

0xc4f8,	// (0x0002a274) grid_tb_ext_pane_ParamLimits

0xc4f8,	// (0x0002a274) grid_tb_ext_pane

0xc51e,	// (0x0002a29a) cell_tb_ext_pane_ParamLimits

0xc51e,	// (0x0002a29a) cell_tb_ext_pane

0xc533,	// (0x0002a2af) cell_tb_ext_pane_g1_ParamLimits

0xc533,	// (0x0002a2af) cell_tb_ext_pane_g1

0x8cd4,	// (0x00026a50) cell_tb_ext_pane_t1

0x4c94,	// (0x00022a10) list_highlight_pane_cp11_ParamLimits

0x4c94,	// (0x00022a10) list_highlight_pane_cp11

0x9ab9,	// (0x00027835) popup_uni_indicator_window_ParamLimits

0x9ab9,	// (0x00027835) popup_uni_indicator_window

0x50fb,	// (0x00022e77) bg_popup_sub_pane_cp14

0x8cef,	// (0x00026a6b) list_uniindi_pane

0x8cfb,	// (0x00026a77) uniindi_top_pane

0x4c94,	// (0x00022a10) bg_uniindi_top_pane

0x8d1a,	// (0x00026a96) uniindi_top_pane_g1

0x8d30,	// (0x00026aac) uniindi_top_pane_g2

0x0003,

0xfd36,	// (0x0002dab2) uniindi_top_pane_g

0x8d5a,	// (0x00026ad6) uniindi_top_pane_t1

0x8d84,	// (0x00026b00) list_single_uniindi_pane_ParamLimits

0x8d84,	// (0x00026b00) list_single_uniindi_pane

0x7bd8,	// (0x00025954) bg_uniindi_top_pane_g1

0x8d96,	// (0x00026b12) list_single_uniindi_pane_g1

0x8da9,	// (0x00026b25) list_single_uniindi_pane_t1

0x9957,	// (0x000276d3) control_bg_pane

0x8dce,	// (0x00026b4a) bg_sctrl_sk_pane_cp1

0x8dd7,	// (0x00026b53) bg_sctrl_sk_pane_cp2

0x8de0,	// (0x00026b5c) control_bg_pane_g1

0x8de9,	// (0x00026b65) control_bg_pane_g2

0x0001,

0xfd3f,	// (0x0002dabb) control_bg_pane_g

0x7779,	// (0x000254f5) cell_indicator_nsta_pane_g1_ParamLimits

0xb85f,	// (0x000295db) cell_indicator_nsta_pane_g2_ParamLimits

0xfaae,	// (0x0002d82a) cell_indicator_nsta_pane_g_ParamLimits

0xdf5f,	// (0x0002bcdb) form2_midp_time_pane_t1_ParamLimits

0xa7c2,	// (0x0002853e) main_idle_act4_pane_ParamLimits

0xa7c2,	// (0x0002853e) main_idle_act4_pane

0xab4d,	// (0x000288c9) popup_tb_extension_window_ParamLimits

0xc512,	// (0x0002a28e) tb_ext_find_pane_ParamLimits

0xc512,	// (0x0002a28e) tb_ext_find_pane

0x8df2,	// (0x00026b6e) ai_gene_pane_1_cp1

0x5b33,	// (0x000238af) ai_gene_pane_2_cp1

0x8dfa,	// (0x00026b76) list_single_idle_plugin_calendar_pane

0x8e03,	// (0x00026b7f) list_single_idle_plugin_notification_pane

0x8e0c,	// (0x00026b88) list_single_idle_plugin_player_pane

0xc550,	// (0x0002a2cc) list_single_idle_plugin_shortcut_pane_ParamLimits

0xc550,	// (0x0002a2cc) list_single_idle_plugin_shortcut_pane

0xc572,	// (0x0002a2ee) main_idle_act4_pane_t1

0xc584,	// (0x0002a300) main_idle_act4_pane_t2

0x0001,

0xfd44,	// (0x0002dac0) main_idle_act4_pane_t

0xc596,	// (0x0002a312) middle_sk_idle_act4_pane_ParamLimits

0xc596,	// (0x0002a312) middle_sk_idle_act4_pane

0xc5ac,	// (0x0002a328) popup_clock_digital_analogue_window_cp2

0xc5c6,	// (0x0002a342) shortcut_wheel_idle_act4_pane_ParamLimits

0xc5c6,	// (0x0002a342) shortcut_wheel_idle_act4_pane

0x7bd8,	// (0x00025954) shortcut_wheel_idle_act4_pane_g1

0x7bd8,	// (0x00025954) shortcut_wheel_idle_act4_pane_g2

0x7bd8,	// (0x00025954) shortcut_wheel_idle_act4_pane_g3

0x7bd8,	// (0x00025954) shortcut_wheel_idle_act4_pane_g4

0x7bd8,	// (0x00025954) shortcut_wheel_idle_act4_pane_g5

0x8e15,	// (0x00026b91) shortcut_wheel_idle_act4_pane_g6

0x8e1d,	// (0x00026b99) shortcut_wheel_idle_act4_pane_g7

0x8e25,	// (0x00026ba1) shortcut_wheel_idle_act4_pane_g8

0x8e2d,	// (0x00026ba9) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd49,	// (0x0002dac5) shortcut_wheel_idle_act4_pane_g

0x7e04,	// (0x00025b80) middle_sk_idle_act4_pane_g1_ParamLimits

0x7e04,	// (0x00025b80) middle_sk_idle_act4_pane_g1

0xc636,	// (0x0002a3b2) middle_sk_idle_act4_pane_g2_ParamLimits

0xc636,	// (0x0002a3b2) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6c,	// (0x0002dae8) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6c,	// (0x0002dae8) middle_sk_idle_act4_pane_g

0xc642,	// (0x0002a3be) middle_sk_idle_act4_pane_t1_ParamLimits

0xc642,	// (0x0002a3be) middle_sk_idle_act4_pane_t1

0xc65f,	// (0x0002a3db) grid_ai_shortcut_pane_ParamLimits

0xc65f,	// (0x0002a3db) grid_ai_shortcut_pane

0xc678,	// (0x0002a3f4) list_highlight_pane_cp16_ParamLimits

0xc678,	// (0x0002a3f4) list_highlight_pane_cp16

0xc685,	// (0x0002a401) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xc685,	// (0x0002a401) list_single_idle_plugin_shortcut_pane_g1

0xc691,	// (0x0002a40d) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xc691,	// (0x0002a40d) list_single_idle_plugin_shortcut_pane_g2

0xc6a9,	// (0x0002a425) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xc6a9,	// (0x0002a425) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd71,	// (0x0002daed) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd71,	// (0x0002daed) list_single_idle_plugin_shortcut_pane_g

0xc6bc,	// (0x0002a438) cell_ai_shortcut_pane_ParamLimits

0xc6bc,	// (0x0002a438) cell_ai_shortcut_pane

0xc6dd,	// (0x0002a459) cell_ai_shortcut_pane_g1_ParamLimits

0xc6dd,	// (0x0002a459) cell_ai_shortcut_pane_g1

0x8df2,	// (0x00026b6e) ai_gene_pane_1_cp2

0xc6ff,	// (0x0002a47b) ai_gene_pane_2_cp2

0xc707,	// (0x0002a483) list_highlight_pane_cp15

0xc710,	// (0x0002a48c) list_single_idle_plugin_calendar_pane_g1

0xc707,	// (0x0002a483) list_highlight_pane_cp17

0xc718,	// (0x0002a494) list_single_idle_plugin_calendar_pane_g1_copy1

0xc720,	// (0x0002a49c) list_single_idle_plugin_player_pane_g1

0x724d,	// (0x00024fc9) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd78,	// (0x0002daf4) list_single_idle_plugin_player_pane_g

0xc728,	// (0x0002a4a4) list_single_idle_plugin_player_pane_t1

0xc736,	// (0x0002a4b2) list_single_idle_plugin_player_pane_t2

0xc744,	// (0x0002a4c0) list_single_idle_plugin_player_pane_t3

0xc752,	// (0x0002a4ce) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7d,	// (0x0002daf9) list_single_idle_plugin_player_pane_t

0xc760,	// (0x0002a4dc) wait_bar_pane_cp15

0xc768,	// (0x0002a4e4) grid_ai_notification_pane

0x724d,	// (0x00024fc9) list_single_idle_plugin_notification_pane_g1

0xc771,	// (0x0002a4ed) cell_ai_notification_pane_ParamLimits

0xc771,	// (0x0002a4ed) cell_ai_notification_pane

0xc77e,	// (0x0002a4fa) cell_ai_notification_pane_g1

0xc786,	// (0x0002a502) cell_ai_notification_pane_t1

0xc794,	// (0x0002a510) tb_ext_find_button_pane

0xc79c,	// (0x0002a518) tb_ext_find_pane_g1

0xc7a4,	// (0x0002a520) tb_ext_find_pane_t1

0x560d,	// (0x00023389) tb_ext_find_button_pane_g1

0xc7b2,	// (0x0002a52e) tb_ext_find_button_pane_g2

0x0001,

0xfd86,	// (0x0002db02) tb_ext_find_button_pane_g

0xc572,	// (0x0002a2ee) main_idle_act4_pane_t1_ParamLimits

0xc584,	// (0x0002a300) main_idle_act4_pane_t2_ParamLimits

0xfd44,	// (0x0002dac0) main_idle_act4_pane_t_ParamLimits

0xc5ac,	// (0x0002a328) popup_clock_digital_analogue_window_cp2_ParamLimits

0xc5ba,	// (0x0002a336) sat_plugin_idle_act4_pane_ParamLimits

0xc5ba,	// (0x0002a336) sat_plugin_idle_act4_pane

0xc7bb,	// (0x0002a537) sat_plugin_idle_act4_pane_t1_ParamLimits

0xc7bb,	// (0x0002a537) sat_plugin_idle_act4_pane_t1

0xc7ce,	// (0x0002a54a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xc7ce,	// (0x0002a54a) sat_plugin_idle_act4_pane_t2

0xc7e1,	// (0x0002a55d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xc7e1,	// (0x0002a55d) sat_plugin_idle_act4_pane_t3

0xc7f4,	// (0x0002a570) sat_plugin_idle_act4_pane_t4_ParamLimits

0xc7f4,	// (0x0002a570) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8b,	// (0x0002db07) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8b,	// (0x0002db07) sat_plugin_idle_act4_pane_t

0x9a1a,	// (0x00027796) popup_battery_window_ParamLimits

0x9a1a,	// (0x00027796) popup_battery_window

0x4c94,	// (0x00022a10) bg_popup_sub_pane_cp25_ParamLimits

0x4c94,	// (0x00022a10) bg_popup_sub_pane_cp25

0xc807,	// (0x0002a583) popup_battery_window_g1_ParamLimits

0xc807,	// (0x0002a583) popup_battery_window_g1

0xc813,	// (0x0002a58f) popup_battery_window_t1_ParamLimits

0xc813,	// (0x0002a58f) popup_battery_window_t1

0xc825,	// (0x0002a5a1) popup_battery_window_t2_ParamLimits

0xc825,	// (0x0002a5a1) popup_battery_window_t2

0x0001,

0xfd94,	// (0x0002db10) popup_battery_window_t_ParamLimits

0xfd94,	// (0x0002db10) popup_battery_window_t

0xa456,	// (0x000281d2) midp_canvas_pane_ParamLimits

0xa4b2,	// (0x0002822e) midp_keypad_pane_ParamLimits

0xa4b2,	// (0x0002822e) midp_keypad_pane

0x5281,	// (0x00022ffd) main_midp_pane_ParamLimits

0x7854,	// (0x000255d0) signal_pane_g2_cp_ParamLimits

0xc842,	// (0x0002a5be) aid_size_cell_midp_keypad_ParamLimits

0xc842,	// (0x0002a5be) aid_size_cell_midp_keypad

0xc85c,	// (0x0002a5d8) midp_keyp_game_grid_pane_ParamLimits

0xc85c,	// (0x0002a5d8) midp_keyp_game_grid_pane

0xc876,	// (0x0002a5f2) midp_keyp_rocker_pane_ParamLimits

0xc876,	// (0x0002a5f2) midp_keyp_rocker_pane

0xc8a3,	// (0x0002a61f) midp_keyp_sk_left_pane_ParamLimits

0xc8a3,	// (0x0002a61f) midp_keyp_sk_left_pane

0xc8fb,	// (0x0002a677) midp_keyp_sk_right_pane_ParamLimits

0xc8fb,	// (0x0002a677) midp_keyp_sk_right_pane

0x4a71,	// (0x000227ed) bg_button_pane_cp03

0xc94d,	// (0x0002a6c9) midp_keyp_sk_left_pane_g1

0x4a71,	// (0x000227ed) bg_button_pane_cp04

0xc94d,	// (0x0002a6c9) midp_keyp_sk_right_pane_g1

0x7bd8,	// (0x00025954) midp_keyp_rocker_pane_g1

0xc956,	// (0x0002a6d2) keyp_game_cell_pane_ParamLimits

0xc956,	// (0x0002a6d2) keyp_game_cell_pane

0x4a71,	// (0x000227ed) bg_button_pane_cp02

0xc967,	// (0x0002a6e3) keyp_game_cell_pane_g1

0x9a50,	// (0x000277cc) popup_fep_vkb2_window_ParamLimits

0x9a50,	// (0x000277cc) popup_fep_vkb2_window

0xc97e,	// (0x0002a6fa) aid_size_cell_vkb2_ParamLimits

0xc97e,	// (0x0002a6fa) aid_size_cell_vkb2

0xc9d2,	// (0x0002a74e) popup_fep_vkb2_window_g1_ParamLimits

0xc9d2,	// (0x0002a74e) popup_fep_vkb2_window_g1

0xca1a,	// (0x0002a796) vkb2_area_bottom_pane_ParamLimits

0xca1a,	// (0x0002a796) vkb2_area_bottom_pane

0xca52,	// (0x0002a7ce) vkb2_area_keypad_pane_ParamLimits

0xca52,	// (0x0002a7ce) vkb2_area_keypad_pane

0xca8a,	// (0x0002a806) vkb2_area_top_pane_ParamLimits

0xca8a,	// (0x0002a806) vkb2_area_top_pane

0xcafa,	// (0x0002a876) vkb2_top_entry_pane_ParamLimits

0xcafa,	// (0x0002a876) vkb2_top_entry_pane

0xcb24,	// (0x0002a8a0) vkb2_top_grid_left_pane_ParamLimits

0xcb24,	// (0x0002a8a0) vkb2_top_grid_left_pane

0xcb42,	// (0x0002a8be) vkb2_top_grid_right_pane_ParamLimits

0xcb42,	// (0x0002a8be) vkb2_top_grid_right_pane

0xcb60,	// (0x0002a8dc) vkb2_cell_keypad_pane_ParamLimits

0xcb60,	// (0x0002a8dc) vkb2_cell_keypad_pane

0xcc11,	// (0x0002a98d) vkb2_area_bottom_grid_pane_ParamLimits

0xcc11,	// (0x0002a98d) vkb2_area_bottom_grid_pane

0xcc35,	// (0x0002a9b1) vkb2_area_bottom_pane_g1_ParamLimits

0xcc35,	// (0x0002a9b1) vkb2_area_bottom_pane_g1

0xcc59,	// (0x0002a9d5) vkb2_area_bottom_pane_g2_ParamLimits

0xcc59,	// (0x0002a9d5) vkb2_area_bottom_pane_g2

0xcc87,	// (0x0002aa03) vkb2_area_bottom_pane_g3_ParamLimits

0xcc87,	// (0x0002aa03) vkb2_area_bottom_pane_g3

0x0002,

0xfd99,	// (0x0002db15) vkb2_area_bottom_pane_g_ParamLimits

0xfd99,	// (0x0002db15) vkb2_area_bottom_pane_g

0xccd8,	// (0x0002aa54) vkb2_top_cell_left_pane_ParamLimits

0xccd8,	// (0x0002aa54) vkb2_top_cell_left_pane

0xecab,	// (0x0002ca27) vkb2_top_entry_pane_g1_ParamLimits

0xecab,	// (0x0002ca27) vkb2_top_entry_pane_g1

0xecb9,	// (0x0002ca35) vkb2_top_entry_pane_t1_ParamLimits

0xecb9,	// (0x0002ca35) vkb2_top_entry_pane_t1

0xe314,	// (0x0002c090) vkb2_top_entry_pane_t2_ParamLimits

0xe314,	// (0x0002c090) vkb2_top_entry_pane_t2

0xe346,	// (0x0002c0c2) vkb2_top_entry_pane_t3_ParamLimits

0xe346,	// (0x0002c0c2) vkb2_top_entry_pane_t3

0x0002,

0xfda0,	// (0x0002db1c) vkb2_top_entry_pane_t_ParamLimits

0xfda0,	// (0x0002db1c) vkb2_top_entry_pane_t

0xcd25,	// (0x0002aaa1) vkb2_top_grid_right_pane_g1_ParamLimits

0xcd25,	// (0x0002aaa1) vkb2_top_grid_right_pane_g1

0xcd3b,	// (0x0002aab7) vkb2_top_grid_right_pane_g2_ParamLimits

0xcd3b,	// (0x0002aab7) vkb2_top_grid_right_pane_g2

0xcd53,	// (0x0002aacf) vkb2_top_grid_right_pane_g3_ParamLimits

0xcd53,	// (0x0002aacf) vkb2_top_grid_right_pane_g3

0xcd6b,	// (0x0002aae7) vkb2_top_grid_right_pane_g4_ParamLimits

0xcd6b,	// (0x0002aae7) vkb2_top_grid_right_pane_g4

0x0003,

0xfda7,	// (0x0002db23) vkb2_top_grid_right_pane_g_ParamLimits

0xfda7,	// (0x0002db23) vkb2_top_grid_right_pane_g

0xcd81,	// (0x0002aafd) vkb2_top_cell_left_pane_g1

0xcd98,	// (0x0002ab14) vkb2_cell_keypad_pane_g1_ParamLimits

0xcd98,	// (0x0002ab14) vkb2_cell_keypad_pane_g1

0xe35c,	// (0x0002c0d8) vkb2_cell_keypad_pane_t1_ParamLimits

0xe35c,	// (0x0002c0d8) vkb2_cell_keypad_pane_t1

0xcda6,	// (0x0002ab22) vkb2_cell_bottom_grid_pane_ParamLimits

0xcda6,	// (0x0002ab22) vkb2_cell_bottom_grid_pane

0xcddf,	// (0x0002ab5b) vkb2_cell_bottom_grid_pane_g1

0xc5da,	// (0x0002a356) aid_call2_pane_cp02

0xc5e2,	// (0x0002a35e) aid_call_pane_cp02

0xc5ea,	// (0x0002a366) clock_digital_number_pane_cp10

0xc5f2,	// (0x0002a36e) clock_digital_number_pane_cp11

0xc5fa,	// (0x0002a376) clock_digital_number_pane_cp12

0xc602,	// (0x0002a37e) clock_digital_number_pane_cp13

0xc60a,	// (0x0002a386) clock_digital_separator_pane_cp10

0x560d,	// (0x00023389) popup_clock_digital_analogue_window_cp2_g1

0x560d,	// (0x00023389) popup_clock_digital_analogue_window_cp2_g2

0xc612,	// (0x0002a38e) popup_clock_digital_analogue_window_cp2_g3

0x560d,	// (0x00023389) popup_clock_digital_analogue_window_cp2_g4

0xc612,	// (0x0002a38e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5c,	// (0x0002dad8) popup_clock_digital_analogue_window_cp2_g

0xc61a,	// (0x0002a396) popup_clock_digital_analogue_window_cp2_t1

0xc628,	// (0x0002a3a4) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd67,	// (0x0002dae3) popup_clock_digital_analogue_window_cp2_t

0x7bd8,	// (0x00025954) clock_digital_number_pane_cp10_g1

0x7bd8,	// (0x00025954) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4a,	// (0x0002d8c6) clock_digital_number_pane_cp10_g

0x7bd8,	// (0x00025954) clock_digital_separator_pane_cp10_g1

0x7bd8,	// (0x00025954) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4a,	// (0x0002d8c6) clock_digital_separator_pane_cp10_g

0x8d3c,	// (0x00026ab8) uniindi_top_pane_g3

0x8d4d,	// (0x00026ac9) uniindi_top_pane_g4

0xcbcb,	// (0x0002a947) vkb2_row_keypad_pane_ParamLimits

0xcbcb,	// (0x0002a947) vkb2_row_keypad_pane

0xcdfb,	// (0x0002ab77) vkb2_cell_t_keypad_pane_ParamLimits

0xcdfb,	// (0x0002ab77) vkb2_cell_t_keypad_pane

0xce08,	// (0x0002ab84) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xce08,	// (0x0002ab84) vkb2_cell_t_keypad_pane_cp08

0xce18,	// (0x0002ab94) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xce18,	// (0x0002ab94) vkb2_cell_t_keypad_pane_cp09

0xce29,	// (0x0002aba5) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xce29,	// (0x0002aba5) vkb2_cell_t_keypad_pane_cp01

0xce39,	// (0x0002abb5) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xce39,	// (0x0002abb5) vkb2_cell_t_keypad_pane_cp02

0xce49,	// (0x0002abc5) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xce49,	// (0x0002abc5) vkb2_cell_t_keypad_pane_cp03

0xce59,	// (0x0002abd5) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xce59,	// (0x0002abd5) vkb2_cell_t_keypad_pane_cp04

0xce69,	// (0x0002abe5) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xce69,	// (0x0002abe5) vkb2_cell_t_keypad_pane_cp05

0xce79,	// (0x0002abf5) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xce79,	// (0x0002abf5) vkb2_cell_t_keypad_pane_cp06

0xce89,	// (0x0002ac05) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xce89,	// (0x0002ac05) vkb2_cell_t_keypad_pane_cp07

0xce99,	// (0x0002ac15) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xce99,	// (0x0002ac15) vkb2_cell_t_keypad_pane_cp10

0xbcf1,	// (0x00029a6d) vkb2_cell_t_keypad_pane_g1

0xe373,	// (0x0002c0ef) vkb2_cell_t_keypad_pane_t1

0x9957,	// (0x000276d3) popup_grid_graphic2_window

0xeceb,	// (0x0002ca67) aid_size_cell_graphic2_ParamLimits

0xeceb,	// (0x0002ca67) aid_size_cell_graphic2

0xed23,	// (0x0002ca9f) bg_popup_window_pane_cp21_ParamLimits

0xed23,	// (0x0002ca9f) bg_popup_window_pane_cp21

0xed31,	// (0x0002caad) graphic2_pages_pane_ParamLimits

0xed31,	// (0x0002caad) graphic2_pages_pane

0xed6b,	// (0x0002cae7) grid_graphic2_control_pane_ParamLimits

0xed6b,	// (0x0002cae7) grid_graphic2_control_pane

0xeda1,	// (0x0002cb1d) grid_graphic2_pane_ParamLimits

0xeda1,	// (0x0002cb1d) grid_graphic2_pane

0xee01,	// (0x0002cb7d) cell_graphic2_pane

0x9957,	// (0x000276d3) main_comp_mode_pane

0x89b8,	// (0x00026734) list_ai3_gene_pane_ParamLimits

0xc2d4,	// (0x0002a050) bg_popup_window_pane_cp19_ParamLimits

0x8b28,	// (0x000268a4) bg_touch_area_indi_pane_ParamLimits

0x8b28,	// (0x000268a4) bg_touch_area_indi_pane

0x8b3e,	// (0x000268ba) bg_touch_area_indi_pane_cp01_ParamLimits

0x8b3e,	// (0x000268ba) bg_touch_area_indi_pane_cp01

0x8b54,	// (0x000268d0) bg_touch_area_indi_pane_cp02_ParamLimits

0x8b54,	// (0x000268d0) bg_touch_area_indi_pane_cp02

0x8b6a,	// (0x000268e6) bg_touch_area_indi_pane_cp03_ParamLimits

0x8b6a,	// (0x000268e6) bg_touch_area_indi_pane_cp03

0x8b80,	// (0x000268fc) popup_slider_window_g1_ParamLimits

0x8b9c,	// (0x00026918) popup_slider_window_g2_ParamLimits

0x8bb8,	// (0x00026934) popup_slider_window_g3_ParamLimits

0xfcf1,	// (0x0002da6d) popup_slider_window_g_ParamLimits

0x8bd4,	// (0x00026950) popup_slider_window_t1_ParamLimits

0x8c18,	// (0x00026994) small_volume_slider_vertical_pane_ParamLimits

0xee01,	// (0x0002cb7d) cell_graphic2_pane_ParamLimits

0xee3d,	// (0x0002cbb9) bg_button_pane_cp10_ParamLimits

0xee3d,	// (0x0002cbb9) bg_button_pane_cp10

0xee4e,	// (0x0002cbca) bg_button_pane_cp11_ParamLimits

0xee4e,	// (0x0002cbca) bg_button_pane_cp11

0xee5f,	// (0x0002cbdb) graphic2_pages_pane_g1_ParamLimits

0xee5f,	// (0x0002cbdb) graphic2_pages_pane_g1

0xee72,	// (0x0002cbee) graphic2_pages_pane_g2_ParamLimits

0xee72,	// (0x0002cbee) graphic2_pages_pane_g2

0x0001,

0xfdb5,	// (0x0002db31) graphic2_pages_pane_g_ParamLimits

0xfdb5,	// (0x0002db31) graphic2_pages_pane_g

0xee88,	// (0x0002cc04) graphic2_pages_pane_t1_ParamLimits

0xee88,	// (0x0002cc04) graphic2_pages_pane_t1

0xee9e,	// (0x0002cc1a) cell_graphic2_control_pane_ParamLimits

0xee9e,	// (0x0002cc1a) cell_graphic2_control_pane

0xeebd,	// (0x0002cc39) cell_graphic2_pane_g1_ParamLimits

0xeebd,	// (0x0002cc39) cell_graphic2_pane_g1

0xeeca,	// (0x0002cc46) cell_graphic2_pane_g2_ParamLimits

0xeeca,	// (0x0002cc46) cell_graphic2_pane_g2

0xeed7,	// (0x0002cc53) cell_graphic2_pane_g3_ParamLimits

0xeed7,	// (0x0002cc53) cell_graphic2_pane_g3

0xeee4,	// (0x0002cc60) cell_graphic2_pane_g4_ParamLimits

0xeee4,	// (0x0002cc60) cell_graphic2_pane_g4

0xeef1,	// (0x0002cc6d) cell_graphic2_pane_g5_ParamLimits

0xeef1,	// (0x0002cc6d) cell_graphic2_pane_g5

0x0004,

0xfdba,	// (0x0002db36) cell_graphic2_pane_g_ParamLimits

0xfdba,	// (0x0002db36) cell_graphic2_pane_g

0xef0c,	// (0x0002cc88) cell_graphic2_pane_t1_ParamLimits

0xef0c,	// (0x0002cc88) cell_graphic2_pane_t1

0x5e9f,	// (0x00023c1b) grid_highlight_pane_cp11_ParamLimits

0x5e9f,	// (0x00023c1b) grid_highlight_pane_cp11

0x4c94,	// (0x00022a10) bg_button_pane_cp05

0xef35,	// (0x0002ccb1) cell_graphic2_control_pane_g1

0x7bd8,	// (0x00025954) bg_touch_area_indi_pane_g1

0xe385,	// (0x0002c101) aid_cmod_rocker_key_size

0xe38f,	// (0x0002c10b) aid_cmode_itu_key_size

0xe399,	// (0x0002c115) main_cmode_video_pane

0xe3a1,	// (0x0002c11d) main_comp_mode_itu_pane

0xe3ab,	// (0x0002c127) main_comp_mode_rocker_pane

0xe3b3,	// (0x0002c12f) cell_cmode_rocker_pane_ParamLimits

0xe3b3,	// (0x0002c12f) cell_cmode_rocker_pane

0xe3c5,	// (0x0002c141) cell_cmode_itu_pane_ParamLimits

0xe3c5,	// (0x0002c141) cell_cmode_itu_pane

0x50fb,	// (0x00022e77) bg_button_pane_cp06_ParamLimits

0x50fb,	// (0x00022e77) bg_button_pane_cp06

0x7e04,	// (0x00025b80) cell_cmode_rocker_pane_g1_ParamLimits

0x7e04,	// (0x00025b80) cell_cmode_rocker_pane_g1

0x8c3d,	// (0x000269b9) cell_cmode_rocker_pane_g2_ParamLimits

0x8c3d,	// (0x000269b9) cell_cmode_rocker_pane_g2

0x0001,

0xfdca,	// (0x0002db46) cell_cmode_rocker_pane_g_ParamLimits

0xfdca,	// (0x0002db46) cell_cmode_rocker_pane_g

0x4a71,	// (0x000227ed) bg_button_pane_cp07

0xe3da,	// (0x0002c156) cell_cmode_itu_pane_g1

0xe3e3,	// (0x0002c15f) cell_cmode_itu_pane_t1

0xe3f1,	// (0x0002c16d) cell_cmode_itu_pane_t2

0x0001,

0xfdcf,	// (0x0002db4b) cell_cmode_itu_pane_t

0x8dbe,	// (0x00026b3a) aid_touch_ctrl_left

0x8dc6,	// (0x00026b42) aid_touch_ctrl_right

0x4a71,	// (0x000227ed) compa_mode_pane

0xef5d,	// (0x0002ccd9) aid_cmod_rocker_key_size_cp

0xef67,	// (0x0002cce3) aid_cmode_itu_key_size_cp

0xe3ff,	// (0x0002c17b) compa_mode_pane_g1

0xe407,	// (0x0002c183) compa_mode_pane_g2

0xe40f,	// (0x0002c18b) compa_mode_pane_g3

0x0002,

0xfdd4,	// (0x0002db50) compa_mode_pane_g

0xef71,	// (0x0002cced) main_comp_mode_itu_pane_cp

0xef79,	// (0x0002ccf5) main_comp_mode_rocker_pane_cp

0xef81,	// (0x0002ccfd) cell_cmode_itu_pane_cp_ParamLimits

0xef81,	// (0x0002ccfd) cell_cmode_itu_pane_cp

0xef96,	// (0x0002cd12) cell_cmode_rocker_pane_cp_ParamLimits

0xef96,	// (0x0002cd12) cell_cmode_rocker_pane_cp

0x50fb,	// (0x00022e77) bg_button_pane_cp06_cp_ParamLimits

0x50fb,	// (0x00022e77) bg_button_pane_cp06_cp

0x7e04,	// (0x00025b80) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7e04,	// (0x00025b80) cell_cmode_rocker_pane_g1_cp

0x7bd8,	// (0x00025954) cell_cmode_rocker_pane_g2_cp

0x4a71,	// (0x000227ed) bg_button_pane_cp07_cp

0xefa8,	// (0x0002cd24) cell_cmode_itu_pane_g1_cp

0xefb1,	// (0x0002cd2d) cell_cmode_itu_pane_t1_cp

0xefbf,	// (0x0002cd3b) cell_cmode_itu_pane_t2_cp

0xb565,	// (0x000292e1) settings_code_pane_cp2

0x4b61,	// (0x000228dd) bg_popup_window_pane_cp3_ParamLimits

0x4e92,	// (0x00022c0e) heading_pane_cp3_ParamLimits

0x4e9e,	// (0x00022c1a) listscroll_popup_graphic_pane_ParamLimits

0xb9c8,	// (0x00029744) fep_hwr_aid_pane_ParamLimits

0xc3a1,	// (0x0002a11d) aid_touch_sctrl_top_ParamLimits

0xc3bc,	// (0x0002a138) sctrl_sk_top_pane_g1_ParamLimits

0xbcf1,	// (0x00029a6d) sctrl_sk_top_pane_g2_ParamLimits

0xfd0a,	// (0x0002da86) sctrl_sk_top_pane_g_ParamLimits

0xc3c9,	// (0x0002a145) sctrl_sk_top_pane_t1_ParamLimits

0xc3a1,	// (0x0002a11d) aid_touch_sctrl_bottom_ParamLimits

0xc3c9,	// (0x0002a145) sctrl_sk_bottom_pane_t1_ParamLimits

0x8d08,	// (0x00026a84) aid_area_touch_clock

0xcac2,	// (0x0002a83e) aid_vkb2_area_top_pane_cell_ParamLimits

0xcac2,	// (0x0002a83e) aid_vkb2_area_top_pane_cell

0xcbed,	// (0x0002a969) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcbed,	// (0x0002a969) aid_vkb2_area_bottom_pane_cell

0xe30c,	// (0x0002c088) popup_char_count_window

0xe417,	// (0x0002c193) popup_char_count_window_g1

0xe420,	// (0x0002c19c) popup_char_count_window_g2

0xe429,	// (0x0002c1a5) popup_char_count_window_g3

0x0002,

0xfddb,	// (0x0002db57) popup_char_count_window_g

0xe432,	// (0x0002c1ae) popup_char_count_window_t1

0xc9b0,	// (0x0002a72c) popup_fep_char_preview_window_ParamLimits

0xc9b0,	// (0x0002a72c) popup_fep_char_preview_window

0xcae0,	// (0x0002a85c) vkb2_top_candi_pane_ParamLimits

0xcae0,	// (0x0002a85c) vkb2_top_candi_pane

0xefcd,	// (0x0002cd49) cell_vkb2_top_candi_pane_ParamLimits

0xefcd,	// (0x0002cd49) cell_vkb2_top_candi_pane

0xceae,	// (0x0002ac2a) bg_popup_fep_char_preview_window_ParamLimits

0xceae,	// (0x0002ac2a) bg_popup_fep_char_preview_window

0xcebc,	// (0x0002ac38) popup_fep_char_preview_window_t1_ParamLimits

0xcebc,	// (0x0002ac38) popup_fep_char_preview_window_t1

0xe440,	// (0x0002c1bc) bg_popup_fep_char_preview_window_g1

0xe448,	// (0x0002c1c4) bg_popup_fep_char_preview_window_g2

0xe450,	// (0x0002c1cc) bg_popup_fep_char_preview_window_g3

0xe458,	// (0x0002c1d4) bg_popup_fep_char_preview_window_g4

0xe460,	// (0x0002c1dc) bg_popup_fep_char_preview_window_g5

0xcef6,	// (0x0002ac72) bg_popup_fep_char_preview_window_g6

0xe468,	// (0x0002c1e4) bg_popup_fep_char_preview_window_g7

0xe470,	// (0x0002c1ec) bg_popup_fep_char_preview_window_g8

0xe478,	// (0x0002c1f4) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde2,	// (0x0002db5e) bg_popup_fep_char_preview_window_g

0xbcf1,	// (0x00029a6d) cell_vkb2_top_candi_pane_g1_ParamLimits

0xbcf1,	// (0x00029a6d) cell_vkb2_top_candi_pane_g1

0xbcff,	// (0x00029a7b) cell_vkb2_top_candi_pane_g2_ParamLimits

0xbcff,	// (0x00029a7b) cell_vkb2_top_candi_pane_g2

0xdf72,	// (0x0002bcee) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdf72,	// (0x0002bcee) cell_vkb2_top_candi_pane_g3

0xcefe,	// (0x0002ac7a) cell_vkb2_top_candi_pane_g4_ParamLimits

0xcefe,	// (0x0002ac7a) cell_vkb2_top_candi_pane_g4

0x8054,	// (0x00025dd0) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8054,	// (0x00025dd0) cell_vkb2_top_candi_pane_g5

0xcf1f,	// (0x0002ac9b) cell_vkb2_top_candi_pane_g6_ParamLimits

0xcf1f,	// (0x0002ac9b) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf5,	// (0x0002db71) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf5,	// (0x0002db71) cell_vkb2_top_candi_pane_g

0xcf2d,	// (0x0002aca9) cell_vkb2_top_candi_pane_t1

0xb3a5,	// (0x00029121) aid_size_touch_slider_mark_ParamLimits

0xb3a5,	// (0x00029121) aid_size_touch_slider_mark

0xed5f,	// (0x0002cadb) grid_graphic2_catg_pane_ParamLimits

0xed5f,	// (0x0002cadb) grid_graphic2_catg_pane

0xeddd,	// (0x0002cb59) popup_grid_graphic2_window_t1_ParamLimits

0xeddd,	// (0x0002cb59) popup_grid_graphic2_window_t1

0xedef,	// (0x0002cb6b) popup_grid_graphic2_window_t2_ParamLimits

0xedef,	// (0x0002cb6b) popup_grid_graphic2_window_t2

0x0001,

0xfdb0,	// (0x0002db2c) popup_grid_graphic2_window_t_ParamLimits

0xfdb0,	// (0x0002db2c) popup_grid_graphic2_window_t

0x4c94,	// (0x00022a10) bg_button_pane_cp05_ParamLimits

0xef35,	// (0x0002ccb1) cell_graphic2_control_pane_g1_ParamLimits

0xf006,	// (0x0002cd82) cell_graphic2_catg_pane_ParamLimits

0xf006,	// (0x0002cd82) cell_graphic2_catg_pane

0x4a71,	// (0x000227ed) bg_button_pane_cp12

0xf018,	// (0x0002cd94) cell_graphic2_catg_pane_g1

0x8cd4,	// (0x00026a50) cell_tb_ext_pane_t1_ParamLimits

0xccf8,	// (0x0002aa74) vkb2_top_cell_right_narrow_pane_ParamLimits

0xccf8,	// (0x0002aa74) vkb2_top_cell_right_narrow_pane

0xcd10,	// (0x0002aa8c) vkb2_top_cell_right_wide_pane_ParamLimits

0xcd10,	// (0x0002aa8c) vkb2_top_cell_right_wide_pane

0xb9ba,	// (0x00029736) bg_vkb2_func_pane_ParamLimits

0xb9ba,	// (0x00029736) bg_vkb2_func_pane

0xcd81,	// (0x0002aafd) vkb2_top_cell_left_pane_g1_ParamLimits

0xb9ba,	// (0x00029736) bg_vkb2_fuc_pane_cp03_ParamLimits

0xb9ba,	// (0x00029736) bg_vkb2_fuc_pane_cp03

0xcddf,	// (0x0002ab5b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5e3b,	// (0x00023bb7) bg_vkb2_func_pane_g1

0x5e33,	// (0x00023baf) bg_vkb2_func_pane_g2

0x5e43,	// (0x00023bbf) bg_vkb2_func_pane_g3

0x5e4b,	// (0x00023bc7) bg_vkb2_func_pane_g4

0x5e53,	// (0x00023bcf) bg_vkb2_func_pane_g5

0x5e5b,	// (0x00023bd7) bg_vkb2_func_pane_g6

0x5e6b,	// (0x00023be7) bg_vkb2_func_pane_g7

0x5e63,	// (0x00023bdf) bg_vkb2_func_pane_g8

0x5e2b,	// (0x00023ba7) bg_vkb2_func_pane_g9

0x0008,

0xfe02,	// (0x0002db7e) bg_vkb2_func_pane_g

0xb9ba,	// (0x00029736) bg_vkb2_fuc_pane_cp01_ParamLimits

0xb9ba,	// (0x00029736) bg_vkb2_fuc_pane_cp01

0xcd81,	// (0x0002aafd) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xcd81,	// (0x0002aafd) vkb2_top_cell_right_wide_pane_g1

0xb9ba,	// (0x00029736) bg_vkb2_fuc_pane_cp02_ParamLimits

0xb9ba,	// (0x00029736) bg_vkb2_fuc_pane_cp02

0xcddf,	// (0x0002ab5b) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xcddf,	// (0x0002ab5b) vkb2_top_cell_right_narrow_pane_g1

0xc266,	// (0x00029fe2) aid_touch_area_decrease_ParamLimits

0xc266,	// (0x00029fe2) aid_touch_area_decrease

0xc27e,	// (0x00029ffa) aid_touch_area_increase_ParamLimits

0xc27e,	// (0x00029ffa) aid_touch_area_increase

0xc28a,	// (0x0002a006) aid_touch_area_mute_ParamLimits

0xc28a,	// (0x0002a006) aid_touch_area_mute

0xc2a6,	// (0x0002a022) aid_touch_area_slider_ParamLimits

0xc2a6,	// (0x0002a022) aid_touch_area_slider

0xc2e0,	// (0x0002a05c) popup_slider_window_g4_ParamLimits

0xc2e0,	// (0x0002a05c) popup_slider_window_g4

0xc2ec,	// (0x0002a068) popup_slider_window_g5_ParamLimits

0xc2ec,	// (0x0002a068) popup_slider_window_g5

0xc30e,	// (0x0002a08a) popup_slider_window_g6_ParamLimits

0xc30e,	// (0x0002a08a) popup_slider_window_g6

0x8c00,	// (0x0002697c) popup_slider_window_t2_ParamLimits

0x8c00,	// (0x0002697c) popup_slider_window_t2

0x0001,

0xfcfe,	// (0x0002da7a) popup_slider_window_t_ParamLimits

0xfcfe,	// (0x0002da7a) popup_slider_window_t

0xc320,	// (0x0002a09c) slider_pane_ParamLimits

0xc320,	// (0x0002a09c) slider_pane

0xe480,	// (0x0002c1fc) slider_pane_g1_ParamLimits

0xe480,	// (0x0002c1fc) slider_pane_g1

0xe494,	// (0x0002c210) slider_pane_g2_ParamLimits

0xe494,	// (0x0002c210) slider_pane_g2

0xe4aa,	// (0x0002c226) slider_pane_g3_ParamLimits

0xe4aa,	// (0x0002c226) slider_pane_g3

0x0003,

0xfe15,	// (0x0002db91) slider_pane_g_ParamLimits

0xfe15,	// (0x0002db91) slider_pane_g

0xab9d,	// (0x00028919) popup_tb_float_extension_window_ParamLimits

0xab9d,	// (0x00028919) popup_tb_float_extension_window

0xe4d6,	// (0x0002c252) aid_size_cell_tb_float_ext

0x4a71,	// (0x000227ed) bg_popup_sub_window_cp28

0xe4e1,	// (0x0002c25d) grid_tb_float_ext_pane

0xe4e9,	// (0x0002c265) cell_tb_float_ext_pane_ParamLimits

0xe4e9,	// (0x0002c265) cell_tb_float_ext_pane

0xe501,	// (0x0002c27d) cell_tb_float_ext_pane_g1

0xe50a,	// (0x0002c286) grid_highlight_pane_cp12

0xbb03,	// (0x0002987f) cell_last_hwr_side_pane_ParamLimits

0xbb03,	// (0x0002987f) cell_last_hwr_side_pane

0x7bd8,	// (0x00025954) cell_last_hwr_side_pane_g1

0xe513,	// (0x0002c28f) cell_last_hwr_side_pane_g2

0x0001,

0xfe1e,	// (0x0002db9a) cell_last_hwr_side_pane_g

0xccb5,	// (0x0002aa31) vkb2_area_bottom_space_btn_pane_ParamLimits

0xccb5,	// (0x0002aa31) vkb2_area_bottom_space_btn_pane

0xbcf1,	// (0x00029a6d) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe373,	// (0x0002c0ef) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xcf2d,	// (0x0002aca9) cell_vkb2_top_candi_pane_t1_ParamLimits

0xcf43,	// (0x0002acbf) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xcf43,	// (0x0002acbf) vkb2_area_bottom_space_btn_pane_g1

0xcf79,	// (0x0002acf5) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xcf79,	// (0x0002acf5) vkb2_area_bottom_space_btn_pane_g2

0xcfaf,	// (0x0002ad2b) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xcfaf,	// (0x0002ad2b) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe23,	// (0x0002db9f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe23,	// (0x0002db9f) vkb2_area_bottom_space_btn_pane_g

0xba77,	// (0x000297f3) cel_fep_hwr_func_pane_ParamLimits

0xba77,	// (0x000297f3) cel_fep_hwr_func_pane

0xbab3,	// (0x0002982f) cell_hwr_side_button_pane_ParamLimits

0xbab3,	// (0x0002982f) cell_hwr_side_button_pane

0x8d08,	// (0x00026a84) aid_area_touch_clock_ParamLimits

0x4c94,	// (0x00022a10) bg_uniindi_top_pane_ParamLimits

0x8d1a,	// (0x00026a96) uniindi_top_pane_g1_ParamLimits

0x8d30,	// (0x00026aac) uniindi_top_pane_g2_ParamLimits

0x8d3c,	// (0x00026ab8) uniindi_top_pane_g3_ParamLimits

0x8d4d,	// (0x00026ac9) uniindi_top_pane_g4_ParamLimits

0xfd36,	// (0x0002dab2) uniindi_top_pane_g_ParamLimits

0x8d5a,	// (0x00026ad6) uniindi_top_pane_t1_ParamLimits

0x4c94,	// (0x00022a10) bg_vkb2_func_pane_cp01_ParamLimits

0x4c94,	// (0x00022a10) bg_vkb2_func_pane_cp01

0xe51c,	// (0x0002c298) cel_fep_hwr_func_pane_g1_ParamLimits

0xe51c,	// (0x0002c298) cel_fep_hwr_func_pane_g1

0x4c94,	// (0x00022a10) bg_vkb2_func_pane_cp02_ParamLimits

0x4c94,	// (0x00022a10) bg_vkb2_func_pane_cp02

0xe51c,	// (0x0002c298) cell_hwr_side_button_pane_g1_ParamLimits

0xe51c,	// (0x0002c298) cell_hwr_side_button_pane_g1

0x5d4f,	// (0x00023acb) status_pane_g4_ParamLimits

0x5d4f,	// (0x00023acb) status_pane_g4

0x5d67,	// (0x00023ae3) status_pane_t1

0x79de,	// (0x0002575a) form2_midp_gauge_slider_cont_pane

0x79e6,	// (0x00025762) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb996,	// (0x00029712) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb9a8,	// (0x00029724) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafd,	// (0x0002d879) form2_midp_gauge_slider_pane_t_ParamLimits

0x79f8,	// (0x00025774) form2_midp_slider_pane_ParamLimits

0xc970,	// (0x0002a6ec) aid_size_cell_func_vkb2_ParamLimits

0xc970,	// (0x0002a6ec) aid_size_cell_func_vkb2

0xe4c2,	// (0x0002c23e) slider_pane_g4_ParamLimits

0xe4c2,	// (0x0002c23e) slider_pane_g4

0xcff5,	// (0x0002ad71) form2_midp_gauge_slider_pane_t2_cp01

0xd003,	// (0x0002ad7f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd003,	// (0x0002ad7f) form2_midp_gauge_slider_pane_t3_cp01

0xd020,	// (0x0002ad9c) form2_midp_slider_pane_cp01

0x4a71,	// (0x000227ed) navi_smil_pane

0xe54c,	// (0x0002c2c8) navi_smil_pane_g1

0xe554,	// (0x0002c2d0) navi_smil_pane_t1

0xe52a,	// (0x0002c2a6) form2_midp_slider_pane_g1

0xe533,	// (0x0002c2af) form2_midp_slider_pane_g2

0xe53b,	// (0x0002c2b7) form2_midp_slider_pane_g3

0xe52a,	// (0x0002c2a6) form2_midp_slider_pane_g4

0xf021,	// (0x0002cd9d) form2_midp_slider_pane_g5

0x0004,

0xfe2c,	// (0x0002dba8) form2_midp_slider_pane_g

0xcfe5,	// (0x0002ad61) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xcfe5,	// (0x0002ad61) vkb2_area_bottom_space_btn_pane_g4

0xad2b,	// (0x00028aa7) lc0_navi_pane_ParamLimits

0xad2b,	// (0x00028aa7) lc0_navi_pane

0xada1,	// (0x00028b1d) lc0_stat_indi_pane_ParamLimits

0xada1,	// (0x00028b1d) lc0_stat_indi_pane

0xadb8,	// (0x00028b34) ls0_title_pane_ParamLimits

0xadb8,	// (0x00028b34) ls0_title_pane

0x50fb,	// (0x00022e77) bg_popup_sub_pane_cp14_ParamLimits

0x8cef,	// (0x00026a6b) list_uniindi_pane_ParamLimits

0x8cfb,	// (0x00026a77) uniindi_top_pane_ParamLimits

0x8d96,	// (0x00026b12) list_single_uniindi_pane_g1_ParamLimits

0x8da9,	// (0x00026b25) list_single_uniindi_pane_t1_ParamLimits

0xd029,	// (0x0002ada5) lc0_stat_clock_pane_ParamLimits

0xd029,	// (0x0002ada5) lc0_stat_clock_pane

0xf02a,	// (0x0002cda6) lc0_stat_indi_pane_g1_ParamLimits

0xf02a,	// (0x0002cda6) lc0_stat_indi_pane_g1

0xf037,	// (0x0002cdb3) lc0_stat_indi_pane_g2_ParamLimits

0xf037,	// (0x0002cdb3) lc0_stat_indi_pane_g2

0x0001,

0xfe37,	// (0x0002dbb3) lc0_stat_indi_pane_g_ParamLimits

0xfe37,	// (0x0002dbb3) lc0_stat_indi_pane_g

0xd036,	// (0x0002adb2) lc0_uni_indicator_pane_ParamLimits

0xd036,	// (0x0002adb2) lc0_uni_indicator_pane

0xe562,	// (0x0002c2de) ls0_title_pane_g1_ParamLimits

0xe562,	// (0x0002c2de) ls0_title_pane_g1

0xf044,	// (0x0002cdc0) ls0_title_pane_t1_ParamLimits

0xf044,	// (0x0002cdc0) ls0_title_pane_t1

0xd043,	// (0x0002adbf) lc0_uni_indicator_pane_g1_ParamLimits

0xd043,	// (0x0002adbf) lc0_uni_indicator_pane_g1

0xe576,	// (0x0002c2f2) lc0_stat_clock_pane_t1

0x9957,	// (0x000276d3) main_ai5_pane

0xe584,	// (0x0002c300) ai5_sk_pane_ParamLimits

0xe584,	// (0x0002c300) ai5_sk_pane

0xf07a,	// (0x0002cdf6) cell_ai5_widget_pane_ParamLimits

0xf07a,	// (0x0002cdf6) cell_ai5_widget_pane

0xe591,	// (0x0002c30d) aid_size_cell_widget_grid

0xe59e,	// (0x0002c31a) bg_ai5_widget_pane_ParamLimits

0xe59e,	// (0x0002c31a) bg_ai5_widget_pane

0xf10d,	// (0x0002ce89) cell_ai5_widget_pane_g2

0xf121,	// (0x0002ce9d) cell_ai5_widget_pane_g3

0xf13b,	// (0x0002ceb7) cell_ai5_widget_pane_g4

0xf14b,	// (0x0002cec7) cell_ai5_widget_pane_g5

0xf15b,	// (0x0002ced7) cell_ai5_widget_pane_g6

0xf167,	// (0x0002cee3) cell_ai5_widget_pane_g7

0xf1af,	// (0x0002cf2b) cell_ai5_widget_pane_t1_ParamLimits

0xf1af,	// (0x0002cf2b) cell_ai5_widget_pane_t1

0xf1cc,	// (0x0002cf48) cell_ai5_widget_pane_t2_ParamLimits

0xf1cc,	// (0x0002cf48) cell_ai5_widget_pane_t2

0xf1e4,	// (0x0002cf60) cell_ai5_widget_pane_t3_ParamLimits

0xf1e4,	// (0x0002cf60) cell_ai5_widget_pane_t3

0xf1fc,	// (0x0002cf78) cell_ai5_widget_pane_t4_ParamLimits

0xf1fc,	// (0x0002cf78) cell_ai5_widget_pane_t4

0xf222,	// (0x0002cf9e) cell_ai5_widget_pane_t5_ParamLimits

0xf222,	// (0x0002cf9e) cell_ai5_widget_pane_t5

0xe5d6,	// (0x0002c352) cell_ai5_widget_pane_t6_ParamLimits

0xe5d6,	// (0x0002c352) cell_ai5_widget_pane_t6

0xe5e8,	// (0x0002c364) cell_ai5_widget_pane_t7_ParamLimits

0xe5e8,	// (0x0002c364) cell_ai5_widget_pane_t7

0xf241,	// (0x0002cfbd) cell_ai5_widget_pane_t8_ParamLimits

0xf241,	// (0x0002cfbd) cell_ai5_widget_pane_t8

0x0009,

0xfe51,	// (0x0002dbcd) cell_ai5_widget_pane_t_ParamLimits

0xfe51,	// (0x0002dbcd) cell_ai5_widget_pane_t

0xf2a0,	// (0x0002d01c) grid_ai5_widget_pane

0x50fb,	// (0x00022e77) highlight_cell_ai5_widget_pane_ParamLimits

0x50fb,	// (0x00022e77) highlight_cell_ai5_widget_pane

0xf2ac,	// (0x0002d028) ai5_sk_left_pane

0xf2b6,	// (0x0002d032) ai5_sk_middle_pane

0xf2c0,	// (0x0002d03c) ai5_sk_right_pane

0xe601,	// (0x0002c37d) bg_ai5_widget_pane_g1_ParamLimits

0xe601,	// (0x0002c37d) bg_ai5_widget_pane_g1

0xe60d,	// (0x0002c389) bg_ai5_widget_pane_g2_ParamLimits

0xe60d,	// (0x0002c389) bg_ai5_widget_pane_g2

0xe619,	// (0x0002c395) bg_ai5_widget_pane_g3_ParamLimits

0xe619,	// (0x0002c395) bg_ai5_widget_pane_g3

0xe625,	// (0x0002c3a1) bg_ai5_widget_pane_g4_ParamLimits

0xe625,	// (0x0002c3a1) bg_ai5_widget_pane_g4

0xe631,	// (0x0002c3ad) bg_ai5_widget_pane_g5_ParamLimits

0xe631,	// (0x0002c3ad) bg_ai5_widget_pane_g5

0xe63d,	// (0x0002c3b9) bg_ai5_widget_pane_g6_ParamLimits

0xe63d,	// (0x0002c3b9) bg_ai5_widget_pane_g6

0xe649,	// (0x0002c3c5) bg_ai5_widget_pane_g7_ParamLimits

0xe649,	// (0x0002c3c5) bg_ai5_widget_pane_g7

0xe655,	// (0x0002c3d1) bg_ai5_widget_pane_g8_ParamLimits

0xe655,	// (0x0002c3d1) bg_ai5_widget_pane_g8

0xe661,	// (0x0002c3dd) bg_ai5_widget_pane_g9_ParamLimits

0xe661,	// (0x0002c3dd) bg_ai5_widget_pane_g9

0x0008,

0xfe66,	// (0x0002dbe2) bg_ai5_widget_pane_g_ParamLimits

0xfe66,	// (0x0002dbe2) bg_ai5_widget_pane_g

0xe691,	// (0x0002c40d) cell_shortcut_ai5_widget_pane_ParamLimits

0xe691,	// (0x0002c40d) cell_shortcut_ai5_widget_pane

0xe6a2,	// (0x0002c41e) bg_cell_shortcut_ai5_widget_pane

0x4e4e,	// (0x00022bca) cell_grid_ai5_widget_pane_g1

0x5a9f,	// (0x0002381b) highlight_cell_shortcut_ai5_widget_pane

0x5e3b,	// (0x00023bb7) ai5_sk_left_pane_g1

0xe6aa,	// (0x0002c426) ai5_sk_left_pane_g2

0xe6b2,	// (0x0002c42e) ai5_sk_left_pane_g3

0xe6ba,	// (0x0002c436) ai5_sk_left_pane_g4

0x0003,

0xfe79,	// (0x0002dbf5) ai5_sk_left_pane_g

0xe6c2,	// (0x0002c43e) ai5_sk_left_pane_t1

0x5e33,	// (0x00023baf) ai5_sk_right_pane_g1

0xe6d0,	// (0x0002c44c) ai5_sk_right_pane_g2

0xe6d8,	// (0x0002c454) ai5_sk_right_pane_g3

0xe6e0,	// (0x0002c45c) ai5_sk_right_pane_g4

0x0003,

0xfe82,	// (0x0002dbfe) ai5_sk_right_pane_g

0xe6e8,	// (0x0002c464) ai5_sk_right_pane_t1

0x5e33,	// (0x00023baf) ai5_sk_middle_pane_g1

0x5e3b,	// (0x00023bb7) ai5_sk_middle_pane_g2

0x5e53,	// (0x00023bcf) ai5_sk_middle_pane_g3

0xe6d8,	// (0x0002c454) ai5_sk_middle_pane_g4

0xe6b2,	// (0x0002c42e) ai5_sk_middle_pane_g5

0xe6f6,	// (0x0002c472) ai5_sk_middle_pane_g6

0xf2ca,	// (0x0002d046) ai5_sk_middle_pane_g7

0x0006,

0xfe8b,	// (0x0002dc07) ai5_sk_middle_pane_g

0xac78,	// (0x000289f4) aid_touch_area_size_lc0_ParamLimits

0xac78,	// (0x000289f4) aid_touch_area_size_lc0

0xbd20,	// (0x00029a9c) cell_hwr_candidate_pane_t1_ParamLimits

0x5c84,	// (0x00023a00) aid_touch_navi_pane

0xae8a,	// (0x00028c06) status_dt_navi_pane_ParamLimits

0xae8a,	// (0x00028c06) status_dt_navi_pane

0xae97,	// (0x00028c13) status_dt_sta_pane_ParamLimits

0xae97,	// (0x00028c13) status_dt_sta_pane

0xf2d2,	// (0x0002d04e) dt_sta_controll_pane

0xf2df,	// (0x0002d05b) dt_sta_indi_pane

0xf2f0,	// (0x0002d06c) dt_sta_title_pane

0x4c94,	// (0x00022a10) bg_dt_sta_indi_pane_ParamLimits

0x4c94,	// (0x00022a10) bg_dt_sta_indi_pane

0xf303,	// (0x0002d07f) dt_sta_battery_pane

0xf30b,	// (0x0002d087) dt_sta_indi_pane_g1

0xf314,	// (0x0002d090) dt_sta_indi_pane_g2

0xf31d,	// (0x0002d099) dt_sta_indi_pane_g3

0x0002,

0xfe9a,	// (0x0002dc16) dt_sta_indi_pane_g

0xf326,	// (0x0002d0a2) dt_sta_signal_pane

0x50fb,	// (0x00022e77) bg_dt_sta_title_pane_ParamLimits

0x50fb,	// (0x00022e77) bg_dt_sta_title_pane

0xf32f,	// (0x0002d0ab) dt_sta_title_pane_g1

0xf337,	// (0x0002d0b3) dt_sta_title_pane_t1_ParamLimits

0xf337,	// (0x0002d0b3) dt_sta_title_pane_t1

0x4a71,	// (0x000227ed) bg_dt_sta_control_pane

0xf34c,	// (0x0002d0c8) dt_sta_controll_pane_g1

0xf355,	// (0x0002d0d1) bg_dt_sta_title_pane_g1

0xf35e,	// (0x0002d0da) bg_dt_sta_title_pane_g2

0xf367,	// (0x0002d0e3) bg_dt_sta_title_pane_g3

0x0002,

0xfea1,	// (0x0002dc1d) bg_dt_sta_title_pane_g

0x7bd8,	// (0x00025954) bg_dt_sta_indi_pane_g1

0xf370,	// (0x0002d0ec) dt_sta_signal_pane_g1

0xf378,	// (0x0002d0f4) dt_sta_signal_pane_g2

0x0001,

0xfea8,	// (0x0002dc24) dt_sta_signal_pane_g

0xe6fe,	// (0x0002c47a) dt_sta_battery_pane_g1

0xe707,	// (0x0002c483) dt_sta_battery_pane_t1

0x7bd8,	// (0x00025954) bg_dt_sta_control_pane_g1

0x566f,	// (0x000233eb) fep_china_uni_eep_pane

0x5677,	// (0x000233f3) fep_china_uni_entry_pane_ParamLimits

0x5687,	// (0x00023403) popup_fep_china_uni_window_g1_ParamLimits

0x5697,	// (0x00023413) popup_fep_china_uni_window_g2_ParamLimits

0x5697,	// (0x00023413) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0002d494) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0002d494) popup_fep_china_uni_window_g

0xe716,	// (0x0002c492) fep_china_uni_eep_pane_g1

0xe71e,	// (0x0002c49a) fep_china_uni_eep_pane_t1

0xe543,	// (0x0002c2bf) aid_touch_area_size_smil_player

0x5d22,	// (0x00023a9e) lc0_clock_pane

0x5d5b,	// (0x00023ad7) status_pane_g5_ParamLimits

0x5d5b,	// (0x00023ad7) status_pane_g5

0xa911,	// (0x0002868d) popup_keymap_window

0x5d3b,	// (0x00023ab7) status_icon_pane

0xf121,	// (0x0002ce9d) cell_ai5_widget_pane_g3_ParamLimits

0xf13b,	// (0x0002ceb7) cell_ai5_widget_pane_g4_ParamLimits

0xf14b,	// (0x0002cec7) cell_ai5_widget_pane_g5_ParamLimits

0xf173,	// (0x0002ceef) cell_ai5_widget_pane_g8_ParamLimits

0xf173,	// (0x0002ceef) cell_ai5_widget_pane_g8

0xf187,	// (0x0002cf03) cell_ai5_widget_pane_g9_ParamLimits

0xf187,	// (0x0002cf03) cell_ai5_widget_pane_g9

0xf19b,	// (0x0002cf17) cell_ai5_widget_pane_g10_ParamLimits

0xf19b,	// (0x0002cf17) cell_ai5_widget_pane_g10

0xe72d,	// (0x0002c4a9) status_icon_pane_g1

0x4a71,	// (0x000227ed) bg_popup_sub_pane_cp13

0xe735,	// (0x0002c4b1) popup_keymap_window_t1

0xa686,	// (0x00028402) control_pane_g6_ParamLimits

0xa686,	// (0x00028402) control_pane_g6

0xa693,	// (0x0002840f) control_pane_g7_ParamLimits

0xa693,	// (0x0002840f) control_pane_g7

0xa6a0,	// (0x0002841c) control_pane_g8_ParamLimits

0xa6a0,	// (0x0002841c) control_pane_g8

0xf2d2,	// (0x0002d04e) dt_sta_controll_pane_ParamLimits

0xf2df,	// (0x0002d05b) dt_sta_indi_pane_ParamLimits

0xf2f0,	// (0x0002d06c) dt_sta_title_pane_ParamLimits

0x504c,	// (0x00022dc8) aid_size_touch_scroll_bar_cale

0x9a2e,	// (0x000277aa) popup_discreet_window_ParamLimits

0x9a2e,	// (0x000277aa) popup_discreet_window

0x9a92,	// (0x0002780e) popup_sk_window

0x6415,	// (0x00024191) bg_popup_sub_pane_cp28_ParamLimits

0x6415,	// (0x00024191) bg_popup_sub_pane_cp28

0xe743,	// (0x0002c4bf) popup_discreet_window_g1_ParamLimits

0xe743,	// (0x0002c4bf) popup_discreet_window_g1

0xe763,	// (0x0002c4df) popup_discreet_window_t1_ParamLimits

0xe763,	// (0x0002c4df) popup_discreet_window_t1

0xe781,	// (0x0002c4fd) popup_discreet_window_t2_ParamLimits

0xe781,	// (0x0002c4fd) popup_discreet_window_t2

0x0002,

0xfead,	// (0x0002dc29) popup_discreet_window_t_ParamLimits

0xfead,	// (0x0002dc29) popup_discreet_window_t

0xd055,	// (0x0002add1) popup_sk_window_g1

0xd05e,	// (0x0002adda) popup_sk_window_g2

0x0001,

0xfeb4,	// (0x0002dc30) popup_sk_window_g

0xd067,	// (0x0002ade3) popup_sk_window_t1

0xd075,	// (0x0002adf1) popup_sk_window_t1_copy1

0xf10d,	// (0x0002ce89) cell_ai5_widget_pane_g2_ParamLimits

0xf253,	// (0x0002cfcf) cell_ai5_widget_pane_t9_ParamLimits

0xf253,	// (0x0002cfcf) cell_ai5_widget_pane_t9

0x4a71,	// (0x000227ed) main_fep_fshwr2_pane

0xd083,	// (0x0002adff) aid_fshwr2_btn_pane

0xd08f,	// (0x0002ae0b) aid_fshwr2_syb_pane

0xd0a1,	// (0x0002ae1d) aid_fshwr2_txt_pane

0xd0ad,	// (0x0002ae29) fshwr2_func_candi_pane

0xd0c1,	// (0x0002ae3d) fshwr2_hwr_syb_pane

0xd0d3,	// (0x0002ae4f) fshwr2_icf_pane

0x9957,	// (0x000276d3) fshwr2_icf_bg_pane

0xd0fb,	// (0x0002ae77) fshwr2_icf_pane_t1_ParamLimits

0xd0fb,	// (0x0002ae77) fshwr2_icf_pane_t1

0x560d,	// (0x00023389) fshwr2_func_candi_pane_g1

0xf380,	// (0x0002d0fc) fshwr2_func_candi_row_pane_ParamLimits

0xf380,	// (0x0002d0fc) fshwr2_func_candi_row_pane

0xd113,	// (0x0002ae8f) cell_fshwr2_syb_pane_ParamLimits

0xd113,	// (0x0002ae8f) cell_fshwr2_syb_pane

0xd132,	// (0x0002aeae) fshwr2_hwr_syb_pane_g1_ParamLimits

0xd132,	// (0x0002aeae) fshwr2_hwr_syb_pane_g1

0x9957,	// (0x000276d3) bg_popup_call_pane_cp01

0xd140,	// (0x0002aebc) fshwr2_func_candi_cell_pane_ParamLimits

0xd140,	// (0x0002aebc) fshwr2_func_candi_cell_pane

0x69fd,	// (0x00024779) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x69fd,	// (0x00024779) fshwr2_func_candi_cell_bg_pane

0xd17f,	// (0x0002aefb) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd17f,	// (0x0002aefb) fshwr2_func_candi_cell_pane_g1

0xd19f,	// (0x0002af1b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd19f,	// (0x0002af1b) fshwr2_func_candi_cell_pane_t1

0x9957,	// (0x000276d3) bg_button_pane_cp08

0x5281,	// (0x00022ffd) cell_fshwr2_syb_bg_pane

0xd1b2,	// (0x0002af2e) cell_fshwr2_syb_bg_pane_g1

0xd1c6,	// (0x0002af42) cell_fshwr2_syb_bg_pane_t1

0x50fb,	// (0x00022e77) main_tmo_pane

0xb314,	// (0x00029090) uni_indicator_pane_g1_ParamLimits

0xb32a,	// (0x000290a6) uni_indicator_pane_g2_ParamLimits

0xb340,	// (0x000290bc) uni_indicator_pane_g3_ParamLimits

0x6da1,	// (0x00024b1d) uni_indicator_pane_g4_ParamLimits

0x6da1,	// (0x00024b1d) uni_indicator_pane_g4

0x6db5,	// (0x00024b31) uni_indicator_pane_g5_ParamLimits

0x6db5,	// (0x00024b31) uni_indicator_pane_g5

0x6db5,	// (0x00024b31) uni_indicator_pane_g6_ParamLimits

0x6db5,	// (0x00024b31) uni_indicator_pane_g6

0xf91c,	// (0x0002d698) uni_indicator_pane_g_ParamLimits

0xc24a,	// (0x00029fc6) popup_tmo_note_window_ParamLimits

0xc24a,	// (0x00029fc6) popup_tmo_note_window

0xc419,	// (0x0002a195) fshwr2_bg_pane

0xd190,	// (0x0002af0c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd190,	// (0x0002af0c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb9,	// (0x0002dc35) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb9,	// (0x0002dc35) fshwr2_func_candi_cell_pane_g

0xbcd9,	// (0x00029a55) bg_popup_window_pane_cp01

0xd1dc,	// (0x0002af58) bg_popup_window_pane_g1_cp01

0xe7d3,	// (0x0002c54f) bg_popup_window_pane_cp22_ParamLimits

0xe7d3,	// (0x0002c54f) bg_popup_window_pane_cp22

0xe7e1,	// (0x0002c55d) listscroll_tmo_link_pane_ParamLimits

0xe7e1,	// (0x0002c55d) listscroll_tmo_link_pane

0xe821,	// (0x0002c59d) popup_tmo_note_window_g1_ParamLimits

0xe821,	// (0x0002c59d) popup_tmo_note_window_g1

0xe82e,	// (0x0002c5aa) tmo_note_info_pane_ParamLimits

0xe82e,	// (0x0002c5aa) tmo_note_info_pane

0xf3a3,	// (0x0002d11f) list_tmo_note_info_pane_g1_ParamLimits

0xf3a3,	// (0x0002d11f) list_tmo_note_info_pane_g1

0xe848,	// (0x0002c5c4) list_tmo_note_info_pane_g2_ParamLimits

0xe848,	// (0x0002c5c4) list_tmo_note_info_pane_g2

0x0001,

0xfebe,	// (0x0002dc3a) list_tmo_note_info_pane_g_ParamLimits

0xfebe,	// (0x0002dc3a) list_tmo_note_info_pane_g

0xe864,	// (0x0002c5e0) list_tmo_note_info_text_pane_ParamLimits

0xe864,	// (0x0002c5e0) list_tmo_note_info_text_pane

0xe8a6,	// (0x0002c622) list_tmo_link_pane

0xe8b3,	// (0x0002c62f) scroll_pane_cp20

0xe8c0,	// (0x0002c63c) list_single_tmo_link_pane_ParamLimits

0xe8c0,	// (0x0002c63c) list_single_tmo_link_pane

0xe8d0,	// (0x0002c64c) list_single_tmo_link_pane_t1

0xe8de,	// (0x0002c65a) list_tmo_note_info_text_pane_t1_ParamLimits

0xe8de,	// (0x0002c65a) list_tmo_note_info_text_pane_t1

0x51b5,	// (0x00022f31) aid_size_touch_scroll_bar_cp01_ParamLimits

0x51b5,	// (0x00022f31) aid_size_touch_scroll_bar_cp01

0xd90d,	// (0x0002b689) aid_size_touch_slider_marker

0x9a7e,	// (0x000277fa) popup_settings_window_ParamLimits

0x9a7e,	// (0x000277fa) popup_settings_window

0xdab5,	// (0x0002b831) popup_candi_list_indi_window

0x5c84,	// (0x00023a00) aid_touch_navi_pane_ParamLimits

0xc375,	// (0x0002a0f1) rs_clock_indi_pane

0xc37e,	// (0x0002a0fa) sctrl_sk_bottom_pane_ParamLimits

0xc38f,	// (0x0002a10b) sctrl_sk_top_pane_ParamLimits

0xc9ca,	// (0x0002a746) popup_fep_tooltip_window

0xe591,	// (0x0002c30d) aid_size_cell_widget_grid_ParamLimits

0xf0f9,	// (0x0002ce75) cell_ai5_widget_pane_g1_ParamLimits

0xf0f9,	// (0x0002ce75) cell_ai5_widget_pane_g1

0xf15b,	// (0x0002ced7) cell_ai5_widget_pane_g6_ParamLimits

0xf167,	// (0x0002cee3) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3c,	// (0x0002dbb8) cell_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x0002dbb8) cell_ai5_widget_pane_g

0xf282,	// (0x0002cffe) cell_ai5_widget_pane_t10_ParamLimits

0xf282,	// (0x0002cffe) cell_ai5_widget_pane_t10

0xf2a0,	// (0x0002d01c) grid_ai5_widget_pane_ParamLimits

0xe66d,	// (0x0002c3e9) cell_contacts_ai5_widget_pane_ParamLimits

0xe66d,	// (0x0002c3e9) cell_contacts_ai5_widget_pane

0xe796,	// (0x0002c512) popup_discreet_window_t3_ParamLimits

0xe796,	// (0x0002c512) popup_discreet_window_t3

0xd0e9,	// (0x0002ae65) popup_fshwr2_char_preview_window_ParamLimits

0xd0e9,	// (0x0002ae65) popup_fshwr2_char_preview_window

0xf3ba,	// (0x0002d136) tmo_note_info_pane_t1

0xf3cf,	// (0x0002d14b) tmo_note_info_pane_t2

0xf3e4,	// (0x0002d160) tmo_note_info_pane_t3

0xe882,	// (0x0002c5fe) tmo_note_info_pane_t4

0xe894,	// (0x0002c610) tmo_note_info_pane_t5

0x0004,

0xfec3,	// (0x0002dc3f) tmo_note_info_pane_t

0xe8a6,	// (0x0002c622) list_tmo_link_pane_ParamLimits

0xe8b3,	// (0x0002c62f) scroll_pane_cp20_ParamLimits

0x9957,	// (0x000276d3) bg_popup_fep_char_preview_window_cp01

0xe8f7,	// (0x0002c673) popup_fshwr2_char_preview_window_t1

0xe905,	// (0x0002c681) popup_candi_list_indi_window_g1

0xe90e,	// (0x0002c68a) bg_cell_contacts_ai5_widget_pane

0xe91a,	// (0x0002c696) cell_contacts_ai5_widget_pane_g1

0xe92f,	// (0x0002c6ab) cell_contacts_ai5_widget_pane_g2

0xe93b,	// (0x0002c6b7) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfece,	// (0x0002dc4a) cell_contacts_ai5_widget_pane_g

0xe947,	// (0x0002c6c3) cell_contacts_ai5_widget_pane_t1

0x50fb,	// (0x00022e77) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf45c,	// (0x0002d1d8) settings_container_pane

0x5a9f,	// (0x0002381b) listscroll_set_pane_copy1

0x752c,	// (0x000252a8) scroll_pane_cp121_copy1

0xe959,	// (0x0002c6d5) set_content_pane_copy1

0xe961,	// (0x0002c6dd) aid_height_set_list_copy1_ParamLimits

0xe961,	// (0x0002c6dd) aid_height_set_list_copy1

0x6f4e,	// (0x00024cca) aid_size_parent_copy1_ParamLimits

0x6f4e,	// (0x00024cca) aid_size_parent_copy1

0xe96d,	// (0x0002c6e9) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe96d,	// (0x0002c6e9) button_value_adjust_pane_cp6_copy1

0x5281,	// (0x00022ffd) list_highlight_pane_cp2_copy1_ParamLimits

0x5281,	// (0x00022ffd) list_highlight_pane_cp2_copy1

0xf468,	// (0x0002d1e4) list_set_pane_copy1_ParamLimits

0xf468,	// (0x0002d1e4) list_set_pane_copy1

0xf3f9,	// (0x0002d175) main_pane_set_t1_copy1_ParamLimits

0xf3f9,	// (0x0002d175) main_pane_set_t1_copy1

0xf433,	// (0x0002d1af) main_pane_set_t2_copy1_ParamLimits

0xf433,	// (0x0002d1af) main_pane_set_t2_copy1

0xe981,	// (0x0002c6fd) main_pane_set_t3_copy1

0xe98f,	// (0x0002c70b) main_pane_set_t4_copy1

0xf450,	// (0x0002d1cc) set_content_pane_g1_copy1_ParamLimits

0xf450,	// (0x0002d1cc) set_content_pane_g1_copy1

0xe99d,	// (0x0002c719) setting_code_pane_copy1

0xe9a5,	// (0x0002c721) setting_slider_graphic_pane_copy1

0xe9a5,	// (0x0002c721) setting_slider_pane_copy1

0xe9a5,	// (0x0002c721) setting_text_pane_copy1

0xe9a5,	// (0x0002c721) setting_volume_pane_copy1

0xe9ad,	// (0x0002c729) settings_code_pane_cp2_copy1

0xe9b5,	// (0x0002c731) settings_code_pane_cp_copy1_ParamLimits

0xe9b5,	// (0x0002c731) settings_code_pane_cp_copy1

0xd1e5,	// (0x0002af61) volume_set_pane_copy1

0xf4f6,	// (0x0002d272) volume_set_pane_g10_copy1

0xf4fe,	// (0x0002d27a) volume_set_pane_g1_copy1

0xf506,	// (0x0002d282) volume_set_pane_g2_copy1

0xf50e,	// (0x0002d28a) volume_set_pane_g3_copy1

0xf516,	// (0x0002d292) volume_set_pane_g4_copy1

0xf51e,	// (0x0002d29a) volume_set_pane_g5_copy1

0xf526,	// (0x0002d2a2) volume_set_pane_g6_copy1

0xf52e,	// (0x0002d2aa) volume_set_pane_g7_copy1

0xf536,	// (0x0002d2b2) volume_set_pane_g8_copy1

0xf53e,	// (0x0002d2ba) volume_set_pane_g9_copy1

0x4b61,	// (0x000228dd) bg_set_opt_pane_cp_copy1_ParamLimits

0x4b61,	// (0x000228dd) bg_set_opt_pane_cp_copy1

0x9c26,	// (0x000279a2) setting_slider_pane_t1_copy1_ParamLimits

0x9c26,	// (0x000279a2) setting_slider_pane_t1_copy1

0xd1ed,	// (0x0002af69) setting_slider_pane_t2_copy1_ParamLimits

0xd1ed,	// (0x0002af69) setting_slider_pane_t2_copy1

0xd206,	// (0x0002af82) setting_slider_pane_t3_copy1_ParamLimits

0xd206,	// (0x0002af82) setting_slider_pane_t3_copy1

0x9c6c,	// (0x000279e8) slider_set_pane_copy1_ParamLimits

0x9c6c,	// (0x000279e8) slider_set_pane_copy1

0x5156,	// (0x00022ed2) set_opt_bg_pane_g1_copy2

0x515e,	// (0x00022eda) set_opt_bg_pane_g2_copy2

0xe9c9,	// (0x0002c745) set_opt_bg_pane_g3_copy2

0x516e,	// (0x00022eea) set_opt_bg_pane_g4_copy2

0x5176,	// (0x00022ef2) set_opt_bg_pane_g5_copy2

0x517e,	// (0x00022efa) set_opt_bg_pane_g6_copy2

0xf546,	// (0x0002d2c2) set_opt_bg_pane_g7_copy2

0xe9d1,	// (0x0002c74d) set_opt_bg_pane_g8_copy2

0xe9d9,	// (0x0002c755) set_opt_bg_pane_g9_copy2

0xb3a5,	// (0x00029121) aid_size_touch_slider_mark_copy1_ParamLimits

0xb3a5,	// (0x00029121) aid_size_touch_slider_mark_copy1

0x6f60,	// (0x00024cdc) slider_set_pane_g1_copy1

0x6f82,	// (0x00024cfe) slider_set_pane_g2_copy1

0xb3c5,	// (0x00029141) slider_set_pane_g3_copy1_ParamLimits

0xb3c5,	// (0x00029141) slider_set_pane_g3_copy1

0xb3d9,	// (0x00029155) slider_set_pane_g4_copy1_ParamLimits

0xb3d9,	// (0x00029155) slider_set_pane_g4_copy1

0xb3f1,	// (0x0002916d) slider_set_pane_g5_copy1_ParamLimits

0xb3f1,	// (0x0002916d) slider_set_pane_g5_copy1

0xb3c5,	// (0x00029141) slider_set_pane_g6_copy1_ParamLimits

0xb3c5,	// (0x00029141) slider_set_pane_g6_copy1

0xd21d,	// (0x0002af99) slider_set_pane_g7_copy1_ParamLimits

0xd21d,	// (0x0002af99) slider_set_pane_g7_copy1

0x4afd,	// (0x00022879) bg_set_opt_pane_cp2_copy1

0x4b6f,	// (0x000228eb) setting_slider_graphic_pane_g1_copy1

0xd233,	// (0x0002afaf) setting_slider_graphic_pane_t1_copy1

0xd242,	// (0x0002afbe) setting_slider_graphic_pane_t2_copy1

0xd251,	// (0x0002afcd) slider_set_pane_cp_copy1

0xe9e9,	// (0x0002c765) input_focus_pane_cp1_copy1

0xe9f2,	// (0x0002c76e) list_set_text_pane_copy1

0xe9fa,	// (0x0002c776) setting_text_pane_g1_copy1

0xea03,	// (0x0002c77f) set_text_pane_t1_copy1

0xe9e9,	// (0x0002c765) input_focus_pane_cp2_copy1

0xe9fa,	// (0x0002c776) setting_code_pane_g1_copy1

0xea1c,	// (0x0002c798) setting_code_pane_t1_copy1

0x0015,	// (0x0001dd91) list_set_graphic_pane_copy1

0x4afd,	// (0x00022879) bg_set_opt_pane_cp4_copy1

0xea2a,	// (0x0002c7a6) list_set_graphic_pane_g1_copy1_ParamLimits

0xea2a,	// (0x0002c7a6) list_set_graphic_pane_g1_copy1

0xea36,	// (0x0002c7b2) list_set_graphic_pane_g2_copy1

0x581a,	// (0x00023596) list_set_graphic_pane_t1_copy1_ParamLimits

0x581a,	// (0x00023596) list_set_graphic_pane_t1_copy1

0x7bd8,	// (0x00025954) rs_clock_indi_pane_g1

0xea3e,	// (0x0002c7ba) rs_clock_indi_pane_t1

0xea4c,	// (0x0002c7c8) rs_indi_pane

0xea54,	// (0x0002c7d0) rs_indi_pane_g1

0xea5d,	// (0x0002c7d9) rs_indi_pane_g2

0xe905,	// (0x0002c681) rs_indi_pane_g3

0x0002,

0xfed5,	// (0x0002dc51) rs_indi_pane_g

0x5a9f,	// (0x0002381b) bg_popup_preview_window_pane_cp03

0xea66,	// (0x0002c7e2) popup_fep_tooltip_window_t1

0x8503,	// (0x0002627f) popup_note2_window_g2_ParamLimits

0x8503,	// (0x0002627f) popup_note2_window_g2

0x0001,

0xfc75,	// (0x0002d9f1) popup_note2_window_g_ParamLimits

0xfc75,	// (0x0002d9f1) popup_note2_window_g

0x897e,	// (0x000266fa) bg_popup_sub_pane_cp11_ParamLimits

0x898b,	// (0x00026707) cell_ai3_links_pane_g1_ParamLimits

0x89a2,	// (0x0002671e) cell_ai3_links_pane_t1

0xea03,	// (0x0002c77f) set_text_pane_t1_copy1_ParamLimits

0x59c6,	// (0x00023742) cell_graphic_popup_pane_cp2_ParamLimits

0x59c6,	// (0x00023742) cell_graphic_popup_pane_cp2

0xea74,	// (0x0002c7f0) cell_graphic_popup_pane_g1_cp2

0x4efb,	// (0x00022c77) cell_graphic_popup_pane_g2_cp2

0xea7c,	// (0x0002c7f8) cell_graphic_popup_pane_g3_cp2

0xea84,	// (0x0002c800) cell_graphic_popup_pane_t2_cp2

0x4f0c,	// (0x00022c88) grid_highlight_pane_cp3_cp2

0x5446,	// (0x000231c2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x50fb,	// (0x00022e77) main_tmo_pane_ParamLimits

0xc242,	// (0x00029fbe) popup_tmo_big_image_note_window

0xe5ce,	// (0x0002c34a) cell_ai5_widget_list_pane

0xf0f0,	// (0x0002ce6c) cell_ai5_widget_lrg_icon_pane

0xf3ba,	// (0x0002d136) tmo_note_info_pane_t1_ParamLimits

0xf3cf,	// (0x0002d14b) tmo_note_info_pane_t2_ParamLimits

0xf3e4,	// (0x0002d160) tmo_note_info_pane_t3_ParamLimits

0xe882,	// (0x0002c5fe) tmo_note_info_pane_t4_ParamLimits

0xe894,	// (0x0002c610) tmo_note_info_pane_t5_ParamLimits

0xfec3,	// (0x0002dc3f) tmo_note_info_pane_t_ParamLimits

0xf45c,	// (0x0002d1d8) settings_container_pane_ParamLimits

0xe9e1,	// (0x0002c75d) indicator_popup_pane_cp5

0xe9e1,	// (0x0002c75d) indicator_popup_pane_cp6

0x0015,	// (0x0001dd91) list_set_graphic_pane_copy1_ParamLimits

0x4a71,	// (0x000227ed) bg_popup_window_pane_cp23

0xea92,	// (0x0002c80e) popup_tmo_big_image_note_window_g1

0xea9b,	// (0x0002c817) popup_tmo_big_image_note_window_t1

0xeaa9,	// (0x0002c825) popup_tmo_big_image_note_window_t2

0xeab7,	// (0x0002c833) popup_tmo_big_image_note_window_t3

0x0002,

0xfedc,	// (0x0002dc58) popup_tmo_big_image_note_window_t

0x7bd8,	// (0x00025954) cell_ai5_widget_lrg_icon_pane_g1

0xeac5,	// (0x0002c841) cell_ai5_widget_lrg_icon_pane_t1

0x0029,	// (0x0001dda5) cell_ai5_widget_list_row_pane_ParamLimits

0x0029,	// (0x0001dda5) cell_ai5_widget_list_row_pane

0x0040,	// (0x0001ddbc) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x0040,	// (0x0001ddbc) cell_ai5_widget_list_row_pane_g1

0x004d,	// (0x0001ddc9) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x004d,	// (0x0001ddc9) cell_ai5_widget_list_row_pane_t1

0x007b,	// (0x0001ddf7) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x007b,	// (0x0001ddf7) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee3,	// (0x0002dc5f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee3,	// (0x0002dc5f) cell_ai5_widget_list_row_pane_t

0x9957,	// (0x000276d3) main_fep_vtchi_ss_pane

0xeaf3,	// (0x0002c86f) popup_fep_char_pre_window

0xeafb,	// (0x0002c877) popup_fep_ituss_window

0x00b2,	// (0x0001de2e) popup_fep_vkbss_window

0xeb23,	// (0x0002c89f) grid_vkbss_keypad_pane_ParamLimits

0xeb23,	// (0x0002c89f) grid_vkbss_keypad_pane

0xeb33,	// (0x0002c8af) ituss_keypad_pane

0xd263,	// (0x0002afdf) aid_vkbss_key_offset_ParamLimits

0xd263,	// (0x0002afdf) aid_vkbss_key_offset

0xd26f,	// (0x0002afeb) cell_vkbss_key_pane_ParamLimits

0xd26f,	// (0x0002afeb) cell_vkbss_key_pane

0x5ef7,	// (0x00023c73) bg_cell_vkbss_key_g1_ParamLimits

0x5ef7,	// (0x00023c73) bg_cell_vkbss_key_g1

0xeb42,	// (0x0002c8be) cell_vkbss_key_3p_pane_ParamLimits

0xeb42,	// (0x0002c8be) cell_vkbss_key_3p_pane

0xeb5c,	// (0x0002c8d8) cell_vkbss_key_g1_ParamLimits

0xeb5c,	// (0x0002c8d8) cell_vkbss_key_g1

0xeb76,	// (0x0002c8f2) cell_vkbss_key_t1_ParamLimits

0xeb76,	// (0x0002c8f2) cell_vkbss_key_t1

0xd285,	// (0x0002b001) cell_ituss_key_pane_ParamLimits

0xd285,	// (0x0002b001) cell_ituss_key_pane

0xeba1,	// (0x0002c91d) bg_cell_ituss_key_g1_ParamLimits

0xeba1,	// (0x0002c91d) bg_cell_ituss_key_g1

0xebad,	// (0x0002c929) cell_ituss_key_pane_g1_ParamLimits

0xebad,	// (0x0002c929) cell_ituss_key_pane_g1

0xd296,	// (0x0002b012) cell_ituss_key_pane_g2_ParamLimits

0xd296,	// (0x0002b012) cell_ituss_key_pane_g2

0x0002,

0xfeea,	// (0x0002dc66) cell_ituss_key_pane_g_ParamLimits

0xfeea,	// (0x0002dc66) cell_ituss_key_pane_g

0xd2c2,	// (0x0002b03e) cell_ituss_key_t1_ParamLimits

0xd2c2,	// (0x0002b03e) cell_ituss_key_t1

0xd2f8,	// (0x0002b074) cell_ituss_key_t2_ParamLimits

0xd2f8,	// (0x0002b074) cell_ituss_key_t2

0xd329,	// (0x0002b0a5) cell_ituss_key_t3_ParamLimits

0xd329,	// (0x0002b0a5) cell_ituss_key_t3

0xd2f8,	// (0x0002b074) cell_ituss_key_t4_ParamLimits

0xd2f8,	// (0x0002b074) cell_ituss_key_t4

0x0004,

0xfef1,	// (0x0002dc6d) cell_ituss_key_t_ParamLimits

0xfef1,	// (0x0002dc6d) cell_ituss_key_t

0xebd3,	// (0x0002c94f) cell_vkbss_key_3p_pane_g1

0xebdb,	// (0x0002c957) cell_vkbss_key_3p_pane_g2

0xebe3,	// (0x0002c95f) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefc,	// (0x0002dc78) cell_vkbss_key_3p_pane_g

0x5a9f,	// (0x0002381b) bg_popup_fep_char_preview_window_cp02

0xebeb,	// (0x0002c967) popup_fep_char_pre_window_t1

0xf0dd,	// (0x0002ce59) main_ai5_sk_pane

0xe90e,	// (0x0002c68a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe91a,	// (0x0002c696) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe92f,	// (0x0002c6ab) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe93b,	// (0x0002c6b7) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfece,	// (0x0002dc4a) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe947,	// (0x0002c6c3) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x50fb,	// (0x00022e77) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x01d2,	// (0x0001df4e) main_ai5_sk_pane_g1

0x625f,	// (0x00023fdb) popup_query_code_window_g1

0x00a3,	// (0x0001de1f) popup_fep_vkb_icf_pane

0xeb0d,	// (0x0002c889) popup_fep_vtchi_icf_pane

0xebf9,	// (0x0002c975) bg_icf_pane

0xec05,	// (0x0002c981) list_vkb_icf_pane

0xec11,	// (0x0002c98d) bg_icf_pane_cp01

0xec24,	// (0x0002c9a0) vtchi_icf_list_pane

0x01db,	// (0x0001df57) list_vkb_icf_pane_t1_ParamLimits

0x01db,	// (0x0001df57) list_vkb_icf_pane_t1

0xec34,	// (0x0002c9b0) vtchi_icf_list_pane_t1_ParamLimits

0xec34,	// (0x0002c9b0) vtchi_icf_list_pane_t1

0xeafb,	// (0x0002c877) popup_fep_ituss_window_ParamLimits

0xeb0d,	// (0x0002c889) popup_fep_vtchi_icf_pane_ParamLimits

0xeb33,	// (0x0002c8af) ituss_keypad_pane_ParamLimits

0xd259,	// (0x0002afd5) ituss_sks_pane

0xebf9,	// (0x0002c975) bg_icf_pane_ParamLimits

0xead3,	// (0x0002c84f) icf_edit_indi_pane_ParamLimits

0xead3,	// (0x0002c84f) icf_edit_indi_pane

0xec05,	// (0x0002c981) list_vkb_icf_pane_ParamLimits

0xec11,	// (0x0002c98d) bg_icf_pane_cp01_ParamLimits

0xeae6,	// (0x0002c862) icf_edit_indi_pane_cp01_ParamLimits

0xeae6,	// (0x0002c862) icf_edit_indi_pane_cp01

0xec2c,	// (0x0002c9a8) vtchi_query_pane

0xe51c,	// (0x0002c298) icf_edit_indi_pane_g1_ParamLimits

0xe51c,	// (0x0002c298) icf_edit_indi_pane_g1

0x01ff,	// (0x0001df7b) icf_edit_indi_pane_g2_ParamLimits

0x01ff,	// (0x0001df7b) icf_edit_indi_pane_g2

0x0001,

0xff14,	// (0x0002dc90) icf_edit_indi_pane_g_ParamLimits

0xff14,	// (0x0002dc90) icf_edit_indi_pane_g

0x020f,	// (0x0001df8b) icf_edit_indi_pane_t1

0xec4b,	// (0x0002c9c7) bg_input_focus_pane_cp042

0xec54,	// (0x0002c9d0) vtchi_button_pane

0xec5d,	// (0x0002c9d9) vtchi_query_pane_t1

0xec6b,	// (0x0002c9e7) vtchi_query_pane_t2

0xec79,	// (0x0002c9f5) vtchi_query_pane_t3

0x0002,

0xff03,	// (0x0002dc7f) vtchi_query_pane_t

0x9957,	// (0x000276d3) bg_button_pane_cp13

0xec87,	// (0x0002ca03) vtchi_button_pane_g1

0xd36c,	// (0x0002b0e8) ituss_sks_pane_g1

0xd375,	// (0x0002b0f1) ituss_sks_pane_g2

0x0001,

0xff0a,	// (0x0002dc86) ituss_sks_pane_g

0xec8f,	// (0x0002ca0b) ituss_sks_pane_t1

0xec9d,	// (0x0002ca19) ituss_sks_pane_t2

0x0001,

0xff0f,	// (0x0002dc8b) ituss_sks_pane_t

0x7805,	// (0x00025581) indicator_nsta_pane_cp_g1

0x780e,	// (0x0002558a) indicator_nsta_pane_cp_g2

0x7816,	// (0x00025592) indicator_nsta_pane_cp_g3

0x781e,	// (0x0002559a) indicator_nsta_pane_cp_g4

0x7826,	// (0x000255a2) indicator_nsta_pane_cp_g5

0x782e,	// (0x000255aa) indicator_nsta_pane_cp_g6

0x0005,

0xfab3,	// (0x0002d82f) indicator_nsta_pane_cp_g

0xef22,	// (0x0002cc9e) cell_graphic2_pane_t2_ParamLimits

0xef22,	// (0x0002cc9e) cell_graphic2_pane_t2

0x0001,

0xfdc5,	// (0x0002db41) cell_graphic2_pane_t_ParamLimits

0xfdc5,	// (0x0002db41) cell_graphic2_pane_t

0xef4f,	// (0x0002cccb) cell_graphic2_control_pane_t1

0xa23d,	// (0x00027fb9) signal_pane_g3_ParamLimits

0xa23d,	// (0x00027fb9) signal_pane_g3

0xa24e,	// (0x00027fca) signal_pane_g4_ParamLimits

0xa24e,	// (0x00027fca) signal_pane_g4

0x008d,	// (0x0001de09) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x008d,	// (0x0001de09) cell_ai5_widget_list_row_pane_t3

0xebc1,	// (0x0002c93d) cell_ituss_key_pane_t1_ParamLimits

0xebc1,	// (0x0002c93d) cell_ituss_key_pane_t1

0x5f35,	// (0x00023cb1) form_field_data_wide_pane_vc_t2_ParamLimits

0x5f35,	// (0x00023cb1) form_field_data_wide_pane_vc_t2

0x5f47,	// (0x00023cc3) form_field_data_wide_pane_vc_t3_ParamLimits

0x5f47,	// (0x00023cc3) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0002d580) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0002d580) form_field_data_wide_pane_vc_t

0x7571,	// (0x000252ed) form_field_slider_wide_pane_vc_t3_ParamLimits

0x7571,	// (0x000252ed) form_field_slider_wide_pane_vc_t3

0x762f,	// (0x000253ab) form_field_popup_wide_pane_vc_t2_ParamLimits

0x762f,	// (0x000253ab) form_field_popup_wide_pane_vc_t2

0x7644,	// (0x000253c0) form_field_popup_wide_pane_vc_t3_ParamLimits

0x7644,	// (0x000253c0) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa2,	// (0x0002d81e) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa2,	// (0x0002d81e) form_field_popup_wide_pane_vc_t

0xd083,	// (0x0002adff) aid_fshwr2_btn_pane_ParamLimits

0xd08f,	// (0x0002ae0b) aid_fshwr2_syb_pane_ParamLimits

0xd0a1,	// (0x0002ae1d) aid_fshwr2_txt_pane_ParamLimits

0xc419,	// (0x0002a195) fshwr2_bg_pane_ParamLimits

0xd0ad,	// (0x0002ae29) fshwr2_func_candi_pane_ParamLimits

0xd0c1,	// (0x0002ae3d) fshwr2_hwr_syb_pane_ParamLimits

0xd0d3,	// (0x0002ae4f) fshwr2_icf_pane_ParamLimits

0xdee3,	// (0x0002bc5f) list_double_graphic_pane_vc_g4_ParamLimits

0xdee3,	// (0x0002bc5f) list_double_graphic_pane_vc_g4

0xd2b6,	// (0x0002b032) cell_ituss_key_pane_g3_ParamLimits

0xd2b6,	// (0x0002b032) cell_ituss_key_pane_g3

0xd35a,	// (0x0002b0d6) cell_ituss_key_t5_ParamLimits

0xd35a,	// (0x0002b0d6) cell_ituss_key_t5

0x00b2,	// (0x0001de2e) popup_fep_vkbss_window_ParamLimits

0xf0e7,	// (0x0002ce63) aid_cell_ai5_quarter

0x020f,	// (0x0001df8b) icf_edit_indi_pane_t1_ParamLimits

0x4d3c,	// (0x00022ab8) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x4d3c,	// (0x00022ab8) aid_tch_indicator_popup_pane_cp2

0x4d4f,	// (0x00022acb) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x4d4f,	// (0x00022acb) aid_tch_query_popup_data_pane_cp2

0x6207,	// (0x00023f83) aid_tch_query_popup_pane_ParamLimits

0x6207,	// (0x00023f83) aid_tch_query_popup_pane

0x6207,	// (0x00023f83) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x6207,	// (0x00023f83) aid_tch_query_popup_data_pane_cp1

0x5281,	// (0x00022ffd) cell_fshwr2_syb_bg_pane_ParamLimits

0xd1b2,	// (0x0002af2e) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xd1c6,	// (0x0002af42) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0x00a3,	// (0x0001de1f) popup_fep_vkb_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Small

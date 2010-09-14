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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0002f711 };

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
0x538f,	// (0x00034aa0) Screen

0x539b,	// (0x00034aac) application_window_ParamLimits

0x539b,	// (0x00034aac) application_window

0x2244,	// (0x00031955) screen_g1

0x53f7,	// (0x00034b08) area_bottom_pane_ParamLimits

0x53f7,	// (0x00034b08) area_bottom_pane

0x54b7,	// (0x00034bc8) area_top_pane_ParamLimits

0x54b7,	// (0x00034bc8) area_top_pane

0x5555,	// (0x00034c66) main_pane_ParamLimits

0x5555,	// (0x00034c66) main_pane

0x224e,	// (0x0003195f) misc_graphics

0x952a,	// (0x00038c3b) battery_pane_ParamLimits

0x952a,	// (0x00038c3b) battery_pane

0xa1f2,	// (0x00039903) bg_status_flat_pane_g8

0xa1fa,	// (0x0003990b) bg_status_flat_pane_g9

0x95f2,	// (0x00038d03) context_pane_ParamLimits

0x95f2,	// (0x00038d03) context_pane

0x9716,	// (0x00038e27) navi_pane_ParamLimits

0x9716,	// (0x00038e27) navi_pane

0x97a6,	// (0x00038eb7) signal_pane_ParamLimits

0x97a6,	// (0x00038eb7) signal_pane

0x0008,

0xf854,	// (0x0003ef65) bg_status_flat_pane_g

0x9813,	// (0x00038f24) status_pane_g1_ParamLimits

0x9813,	// (0x00038f24) status_pane_g1

0x981f,	// (0x00038f30) status_pane_g2_ParamLimits

0x981f,	// (0x00038f30) status_pane_g2

0x982b,	// (0x00038f3c) status_pane_g3_ParamLimits

0x982b,	// (0x00038f3c) status_pane_g3

0x0004,

0xf77b,	// (0x0003ee8c) status_pane_g_ParamLimits

0xf77b,	// (0x0003ee8c) status_pane_g

0x985f,	// (0x00038f70) title_pane_ParamLimits

0x985f,	// (0x00038f70) title_pane

0x989e,	// (0x00038faf) uni_indicator_pane_ParamLimits

0x989e,	// (0x00038faf) uni_indicator_pane

0x945c,	// (0x00038b6d) bg_list_pane_ParamLimits

0x945c,	// (0x00038b6d) bg_list_pane

0x6dc8,	// (0x000364d9) find_pane

0x947c,	// (0x00038b8d) listscroll_app_pane_ParamLimits

0x947c,	// (0x00038b8d) listscroll_app_pane

0x9488,	// (0x00038b99) listscroll_form_pane

0x530f,	// (0x00034a20) listscroll_gen_pane_ParamLimits

0x530f,	// (0x00034a20) listscroll_gen_pane

0x6dd0,	// (0x000364e1) listscroll_set_pane

0x6198,	// (0x000358a9) main_idle_act_pane

0x9155,	// (0x00038866) main_idle_trad_pane

0x9155,	// (0x00038866) main_list_empty_pane

0x947c,	// (0x00038b8d) main_midp_pane

0x94a2,	// (0x00038bb3) main_pane_g1_ParamLimits

0x94a2,	// (0x00038bb3) main_pane_g1

0x6de6,	// (0x000364f7) popup_ai_message_window_ParamLimits

0x6de6,	// (0x000364f7) popup_ai_message_window

0x6e9a,	// (0x000365ab) popup_fep_china_uni_window_ParamLimits

0x6e9a,	// (0x000365ab) popup_fep_china_uni_window

0x6efa,	// (0x0003660b) popup_fep_japan_candidate_window_ParamLimits

0x6efa,	// (0x0003660b) popup_fep_japan_candidate_window

0x6f24,	// (0x00036635) popup_fep_japan_predictive_window_ParamLimits

0x6f24,	// (0x00036635) popup_fep_japan_predictive_window

0x6f5a,	// (0x0003666b) popup_find_window

0x6f67,	// (0x00036678) popup_grid_graphic_window_ParamLimits

0x6f67,	// (0x00036678) popup_grid_graphic_window

0x6f97,	// (0x000366a8) popup_large_graphic_colour_window

0x6fbd,	// (0x000366ce) popup_menu_window_ParamLimits

0x6fbd,	// (0x000366ce) popup_menu_window

0x7187,	// (0x00036898) popup_note_image_window

0x7171,	// (0x00036882) popup_note_wait_window_ParamLimits

0x7171,	// (0x00036882) popup_note_wait_window

0x7171,	// (0x00036882) popup_note_window_ParamLimits

0x7171,	// (0x00036882) popup_note_window

0x71ed,	// (0x000368fe) popup_query_code_window_ParamLimits

0x71ed,	// (0x000368fe) popup_query_code_window

0x7203,	// (0x00036914) popup_query_data_code_window_ParamLimits

0x7203,	// (0x00036914) popup_query_data_code_window

0x7226,	// (0x00036937) popup_query_data_window_ParamLimits

0x7226,	// (0x00036937) popup_query_data_window

0x7248,	// (0x00036959) popup_query_sat_info_window_ParamLimits

0x7248,	// (0x00036959) popup_query_sat_info_window

0x7287,	// (0x00036998) popup_snote_single_graphic_window_ParamLimits

0x7287,	// (0x00036998) popup_snote_single_graphic_window

0x7287,	// (0x00036998) popup_snote_single_text_window_ParamLimits

0x7287,	// (0x00036998) popup_snote_single_text_window

0x729e,	// (0x000369af) popup_sub_window_general

0x73e4,	// (0x00036af5) popup_window_general_ParamLimits

0x73e4,	// (0x00036af5) popup_window_general

0x94b0,	// (0x00038bc1) power_save_pane

0x6c46,	// (0x00036357) control_pane_g1_ParamLimits

0x6c46,	// (0x00036357) control_pane_g1

0x6c6f,	// (0x00036380) control_pane_g2_ParamLimits

0x6c6f,	// (0x00036380) control_pane_g2

0x941f,	// (0x00038b30) control_pane_g3_ParamLimits

0x941f,	// (0x00038b30) control_pane_g3

0x0007,

0xf763,	// (0x0003ee74) control_pane_g_ParamLimits

0xf763,	// (0x0003ee74) control_pane_g

0x6cbb,	// (0x000363cc) control_pane_t1_ParamLimits

0x6cbb,	// (0x000363cc) control_pane_t1

0x6d17,	// (0x00036428) control_pane_t2_ParamLimits

0x6d17,	// (0x00036428) control_pane_t2

0x0002,

0xf774,	// (0x0003ee85) control_pane_t_ParamLimits

0xf774,	// (0x0003ee85) control_pane_t

0x9344,	// (0x00038a55) navi_navi_volume_pane_cp1

0x934c,	// (0x00038a5d) status_small_icon_pane

0x9354,	// (0x00038a65) status_small_pane_g1_ParamLimits

0x9354,	// (0x00038a65) status_small_pane_g1

0x9388,	// (0x00038a99) status_small_pane_g2_ParamLimits

0x9388,	// (0x00038a99) status_small_pane_g2

0x9394,	// (0x00038aa5) status_small_pane_g3_ParamLimits

0x9394,	// (0x00038aa5) status_small_pane_g3

0x93a0,	// (0x00038ab1) status_small_pane_g4_ParamLimits

0x93a0,	// (0x00038ab1) status_small_pane_g4

0x93ac,	// (0x00038abd) status_small_pane_g5_ParamLimits

0x93ac,	// (0x00038abd) status_small_pane_g5

0x93ba,	// (0x00038acb) status_small_pane_g6_ParamLimits

0x93ba,	// (0x00038acb) status_small_pane_g6

0x0007,

0xf752,	// (0x0003ee63) status_small_pane_g_ParamLimits

0xf752,	// (0x0003ee63) status_small_pane_g

0x93e9,	// (0x00038afa) status_small_pane_t1

0x940b,	// (0x00038b1c) status_small_wait_pane_ParamLimits

0x940b,	// (0x00038b1c) status_small_wait_pane

0x68fd,	// (0x0003600e) aid_levels_signal_ParamLimits

0x68fd,	// (0x0003600e) aid_levels_signal

0x690c,	// (0x0003601d) signal_pane_g1_ParamLimits

0x690c,	// (0x0003601d) signal_pane_g1

0x6921,	// (0x00036032) signal_pane_g2_ParamLimits

0x6921,	// (0x00036032) signal_pane_g2

0x0003,

0xf6e3,	// (0x0003edf4) signal_pane_g_ParamLimits

0xf6e3,	// (0x0003edf4) signal_pane_g

0x6952,	// (0x00036063) context_pane_g1

0x57b4,	// (0x00034ec5) title_pane_g1

0x57e6,	// (0x00034ef7) title_pane_t1

0x2264,	// (0x00031975) title_pane_t2

0x228a,	// (0x0003199b) title_pane_t3

0x0002,

0xf532,	// (0x0003ec43) title_pane_t

0x98b6,	// (0x00038fc7) aid_levels_battery_ParamLimits

0x98b6,	// (0x00038fc7) aid_levels_battery

0x98c7,	// (0x00038fd8) battery_pane_g1_ParamLimits

0x98c7,	// (0x00038fd8) battery_pane_g1

0x98dd,	// (0x00038fee) battery_pane_g2_ParamLimits

0x98dd,	// (0x00038fee) battery_pane_g2

0x0001,

0xf786,	// (0x0003ee97) battery_pane_g_ParamLimits

0xf786,	// (0x0003ee97) battery_pane_g

0xab3c,	// (0x0003a24d) uni_indicator_pane_g1

0xab52,	// (0x0003a263) uni_indicator_pane_g2

0xab68,	// (0x0003a279) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x0003f00d) uni_indicator_pane_g

0x8fb8,	// (0x000386c9) navi_icon_pane_ParamLimits

0x8fb8,	// (0x000386c9) navi_icon_pane

0x8ef4,	// (0x00038605) navi_midp_pane

0x8fd4,	// (0x000386e5) navi_navi_pane

0x8fde,	// (0x000386ef) navi_text_pane_ParamLimits

0x8fde,	// (0x000386ef) navi_text_pane

0x2244,	// (0x00031955) status_small_wait_pane_g1

0x25ab,	// (0x00031cbc) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x0003f008) status_small_wait_pane_g

0xa84f,	// (0x00039f60) navi_navi_icon_text_pane

0xa857,	// (0x00039f68) navi_navi_pane_g1_ParamLimits

0xa857,	// (0x00039f68) navi_navi_pane_g1

0xa869,	// (0x00039f7a) navi_navi_pane_g2_ParamLimits

0xa869,	// (0x00039f7a) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x0003efd6) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x0003efd6) navi_navi_pane_g

0xa87b,	// (0x00039f8c) navi_navi_tabs_pane

0xa884,	// (0x00039f95) navi_navi_text_pane

0xa84f,	// (0x00039f60) navi_navi_volume_pane

0xa82b,	// (0x00039f3c) navi_text_pane_t1

0xa81f,	// (0x00039f30) navi_icon_pane_g1

0xa772,	// (0x00039e83) navi_navi_text_pane_t1

0x76c1,	// (0x00036dd2) navi_navi_volume_pane_g1

0x76c9,	// (0x00036dda) volume_small_pane

0xa6d8,	// (0x00039de9) navi_navi_icon_text_pane_g1

0xa6e0,	// (0x00039df1) navi_navi_icon_text_pane_t1

0x8fd4,	// (0x000386e5) navi_tabs_2_long_pane

0x8fd4,	// (0x000386e5) navi_tabs_2_pane

0x8fd4,	// (0x000386e5) navi_tabs_3_long_pane

0x8fd4,	// (0x000386e5) navi_tabs_3_pane

0x8fd4,	// (0x000386e5) navi_tabs_4_pane

0x76a1,	// (0x00036db2) tabs_2_active_pane_ParamLimits

0x76a1,	// (0x00036db2) tabs_2_active_pane

0x76b1,	// (0x00036dc2) tabs_2_passive_pane_ParamLimits

0x76b1,	// (0x00036dc2) tabs_2_passive_pane

0x766f,	// (0x00036d80) tabs_3_active_pane_ParamLimits

0x766f,	// (0x00036d80) tabs_3_active_pane

0x767f,	// (0x00036d90) tabs_3_passive_pane_ParamLimits

0x767f,	// (0x00036d90) tabs_3_passive_pane

0x7690,	// (0x00036da1) tabs_3_passive_pane_cp_ParamLimits

0x7690,	// (0x00036da1) tabs_3_passive_pane_cp

0x7623,	// (0x00036d34) tabs_4_active_pane_ParamLimits

0x7623,	// (0x00036d34) tabs_4_active_pane

0x7636,	// (0x00036d47) tabs_4_passive_pane_ParamLimits

0x7636,	// (0x00036d47) tabs_4_passive_pane

0x7647,	// (0x00036d58) tabs_4_passive_pane_cp_ParamLimits

0x7647,	// (0x00036d58) tabs_4_passive_pane_cp

0x7658,	// (0x00036d69) tabs_4_passive_pane_cp2_ParamLimits

0x7658,	// (0x00036d69) tabs_4_passive_pane_cp2

0x75ff,	// (0x00036d10) tabs_2_long_active_pane_ParamLimits

0x75ff,	// (0x00036d10) tabs_2_long_active_pane

0x7611,	// (0x00036d22) tabs_2_long_passive_pane_ParamLimits

0x7611,	// (0x00036d22) tabs_2_long_passive_pane

0x75c0,	// (0x00036cd1) tabs_3_long_active_pane_ParamLimits

0x75c0,	// (0x00036cd1) tabs_3_long_active_pane

0x75d3,	// (0x00036ce4) tabs_3_long_passive_pane_ParamLimits

0x75d3,	// (0x00036ce4) tabs_3_long_passive_pane

0x75ec,	// (0x00036cfd) tabs_3_long_passive_pane_cp_ParamLimits

0x75ec,	// (0x00036cfd) tabs_3_long_passive_pane_cp

0x7566,	// (0x00036c77) volume_small_pane_g1

0x756f,	// (0x00036c80) volume_small_pane_g2

0x7578,	// (0x00036c89) volume_small_pane_g3

0x7581,	// (0x00036c92) volume_small_pane_g4

0x758a,	// (0x00036c9b) volume_small_pane_g5

0x7593,	// (0x00036ca4) volume_small_pane_g6

0x759c,	// (0x00036cad) volume_small_pane_g7

0x75a5,	// (0x00036cb6) volume_small_pane_g8

0x75ae,	// (0x00036cbf) volume_small_pane_g9

0x75b7,	// (0x00036cc8) volume_small_pane_g10

0x0009,

0xf891,	// (0x0003efa2) volume_small_pane_g

0x22aa,	// (0x000319bb) bg_active_tab_pane_cp2_ParamLimits

0x22aa,	// (0x000319bb) bg_active_tab_pane_cp2

0x584e,	// (0x00034f5f) tabs_3_active_pane_g1

0x5856,	// (0x00034f67) tabs_3_active_pane_t1

0x22aa,	// (0x000319bb) bg_passive_tab_pane_cp2_ParamLimits

0x22aa,	// (0x000319bb) bg_passive_tab_pane_cp2

0x584e,	// (0x00034f5f) tabs_3_passive_pane_g1

0x5856,	// (0x00034f67) tabs_3_passive_pane_t1

0x22aa,	// (0x000319bb) bg_active_tab_pane_cp3_ParamLimits

0x22aa,	// (0x000319bb) bg_active_tab_pane_cp3

0x5868,	// (0x00034f79) tabs_4_active_pane_g1

0x5870,	// (0x00034f81) tabs_4_active_pane_t1

0x22aa,	// (0x000319bb) bg_passive_tab_pane_cp3_ParamLimits

0x22aa,	// (0x000319bb) bg_passive_tab_pane_cp3

0x5868,	// (0x00034f79) tabs_4_1_passive_pane_g1

0x5870,	// (0x00034f81) tabs_4_1_passive_pane_t1

0x947c,	// (0x00038b8d) list_highlight_pane_cp2

0xadb5,	// (0x0003a4c6) list_set_pane_ParamLimits

0xadb5,	// (0x0003a4c6) list_set_pane

0xae77,	// (0x0003a588) main_pane_set_t1_ParamLimits

0xae77,	// (0x0003a588) main_pane_set_t1

0xae97,	// (0x0003a5a8) main_pane_set_t2_ParamLimits

0xae97,	// (0x0003a5a8) main_pane_set_t2

0xaeab,	// (0x0003a5bc) main_pane_set_t3_ParamLimits

0xaeab,	// (0x0003a5bc) main_pane_set_t3

0xaebf,	// (0x0003a5d0) main_pane_set_t4_ParamLimits

0xaebf,	// (0x0003a5d0) main_pane_set_t4

0x0003,

0xf961,	// (0x0003f072) main_pane_set_t_ParamLimits

0xf961,	// (0x0003f072) main_pane_set_t

0xaed3,	// (0x0003a5e4) setting_code_pane

0xaedd,	// (0x0003a5ee) setting_slider_graphic_pane

0xaedd,	// (0x0003a5ee) setting_slider_pane

0xaedd,	// (0x0003a5ee) setting_text_pane

0xaedd,	// (0x0003a5ee) setting_volume_pane

0x5882,	// (0x00034f93) volume_set_pane

0x22aa,	// (0x000319bb) bg_set_opt_pane_cp

0x588c,	// (0x00034f9d) setting_slider_pane_t1

0x58a5,	// (0x00034fb6) setting_slider_pane_t2

0x58bf,	// (0x00034fd0) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0003ec4a) setting_slider_pane_t

0x58d7,	// (0x00034fe8) slider_set_pane

0x224e,	// (0x0003195f) bg_set_opt_pane_cp2

0x22b8,	// (0x000319c9) setting_slider_graphic_pane_g1

0x58ed,	// (0x00034ffe) setting_slider_graphic_pane_t1

0x58fd,	// (0x0003500e) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0003ec51) setting_slider_graphic_pane_t

0x590d,	// (0x0003501e) slider_set_pane_cp

0x224e,	// (0x0003195f) input_focus_pane_cp1

0xad76,	// (0x0003a487) list_set_text_pane

0x2244,	// (0x00031955) setting_text_pane_g1

0x224e,	// (0x0003195f) input_focus_pane_cp2

0x2244,	// (0x00031955) setting_code_pane_g1

0x22c1,	// (0x000319d2) setting_code_pane_t1

0x3e1f,	// (0x00033530) set_text_pane_t1_ParamLimits

0x3e1f,	// (0x00033530) set_text_pane_t1

0x2944,	// (0x00032055) set_opt_bg_pane_g1

0x294c,	// (0x0003205d) set_opt_bg_pane_g2

0xad4e,	// (0x0003a45f) set_opt_bg_pane_g3

0x295c,	// (0x0003206d) set_opt_bg_pane_g4

0x2964,	// (0x00032075) set_opt_bg_pane_g5

0x296c,	// (0x0003207d) set_opt_bg_pane_g6

0xad58,	// (0x0003a469) set_opt_bg_pane_g7

0xad62,	// (0x0003a473) set_opt_bg_pane_g8

0xad6c,	// (0x0003a47d) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x0003f05f) set_opt_bg_pane_g

0xad41,	// (0x0003a452) slider_set_pane_g1

0x7772,	// (0x00036e83) slider_set_pane_g2

0x0006,

0xf93f,	// (0x0003f050) slider_set_pane_g

0x76d2,	// (0x00036de3) volume_set_pane_g1

0x76dc,	// (0x00036ded) volume_set_pane_g2

0x76e6,	// (0x00036df7) volume_set_pane_g3

0x76f0,	// (0x00036e01) volume_set_pane_g4

0x76fa,	// (0x00036e0b) volume_set_pane_g5

0x7704,	// (0x00036e15) volume_set_pane_g6

0x770e,	// (0x00036e1f) volume_set_pane_g7

0x7718,	// (0x00036e29) volume_set_pane_g8

0x7722,	// (0x00036e33) volume_set_pane_g9

0x772c,	// (0x00036e3d) volume_set_pane_g10

0x0009,

0xf917,	// (0x0003f028) volume_set_pane_g

0x5915,	// (0x00035026) indicator_pane_ParamLimits

0x5915,	// (0x00035026) indicator_pane

0x5921,	// (0x00035032) main_idle_pane_g2_ParamLimits

0x5921,	// (0x00035032) main_idle_pane_g2

0x5949,	// (0x0003505a) main_pane_idle_g1_ParamLimits

0x5949,	// (0x0003505a) main_pane_idle_g1

0x22cf,	// (0x000319e0) popup_clock_digital_analogue_window_ParamLimits

0x22cf,	// (0x000319e0) popup_clock_digital_analogue_window

0x5957,	// (0x00035068) soft_indicator_pane_ParamLimits

0x5957,	// (0x00035068) soft_indicator_pane

0x5965,	// (0x00035076) wallpaper_pane_ParamLimits

0x5965,	// (0x00035076) wallpaper_pane

0x2244,	// (0x00031955) wallpaper_pane_g1

0x5971,	// (0x00035082) indicator_pane_g1_ParamLimits

0x5971,	// (0x00035082) indicator_pane_g1

0xb181,	// (0x0003a892) navi_navi_icon_text_pane_srt_g1

0x22fd,	// (0x00031a0e) soft_indicator_pane_t1

0x2317,	// (0x00031a28) aid_ps_area_pane

0x597d,	// (0x0003508e) aid_ps_clock_pane

0x2328,	// (0x00031a39) aid_ps_indicator_pane

0x2334,	// (0x00031a45) indicator_ps_pane_ParamLimits

0x2334,	// (0x00031a45) indicator_ps_pane

0x2343,	// (0x00031a54) power_save_pane_g1_ParamLimits

0x2343,	// (0x00031a54) power_save_pane_g1

0x234f,	// (0x00031a60) power_save_pane_g2_ParamLimits

0x234f,	// (0x00031a60) power_save_pane_g2

0x53ab,	// (0x00034abc) aid_navinavi_width_pane

0x2317,	// (0x00031a28) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0003ec56) power_save_pane_g_ParamLimits

0xf545,	// (0x0003ec56) power_save_pane_g

0x235d,	// (0x00031a6e) power_save_pane_t1_ParamLimits

0x235d,	// (0x00031a6e) power_save_pane_t1

0x597d,	// (0x0003508e) aid_ps_clock_pane_ParamLimits

0x2328,	// (0x00031a39) aid_ps_indicator_pane_ParamLimits

0x236f,	// (0x00031a80) power_save_pane_t4_ParamLimits

0x236f,	// (0x00031a80) power_save_pane_t4

0x0001,

0xf54a,	// (0x0003ec5b) power_save_pane_t_ParamLimits

0xf54a,	// (0x0003ec5b) power_save_pane_t

0x2399,	// (0x00031aaa) power_save_t3_ParamLimits

0x2399,	// (0x00031aaa) power_save_t3

0x2384,	// (0x00031a95) power_save_t2_ParamLimits

0x2384,	// (0x00031a95) power_save_t2

0x23ae,	// (0x00031abf) indicator_ps_pane_g1

0x598b,	// (0x0003509c) ai_gene_pane_ParamLimits

0x598b,	// (0x0003509c) ai_gene_pane

0x5997,	// (0x000350a8) ai_links_pane_ParamLimits

0x5997,	// (0x000350a8) ai_links_pane

0x59a3,	// (0x000350b4) indicator_pane_cp1_ParamLimits

0x59a3,	// (0x000350b4) indicator_pane_cp1

0x59af,	// (0x000350c0) main_pane_idle_g1_cp_ParamLimits

0x59af,	// (0x000350c0) main_pane_idle_g1_cp

0x23b7,	// (0x00031ac8) popup_ai_links_title_window

0x59bb,	// (0x000350cc) soft_indicator_pane_cp1_ParamLimits

0x59bb,	// (0x000350cc) soft_indicator_pane_cp1

0xab2a,	// (0x0003a23b) ai_links_pane_g1

0xab33,	// (0x0003a244) grid_ai_links_pane

0xab0f,	// (0x0003a220) ai_gene_pane_1

0xab18,	// (0x0003a229) ai_gene_pane_2

0xab21,	// (0x0003a232) list_highlight_pane_cp4

0xaaef,	// (0x0003a200) cell_ai_link_pane_ParamLimits

0xaaef,	// (0x0003a200) cell_ai_link_pane

0xaae7,	// (0x0003a1f8) cell_ai_link_pane_g1

0x25ab,	// (0x00031cbc) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x0003f003) cell_ai_link_pane_g

0x224e,	// (0x0003195f) grid_highlight_cp2

0x224e,	// (0x0003195f) bg_popup_sub_pane_cp1

0x23ce,	// (0x00031adf) popup_ai_links_title_window_t1

0xaa33,	// (0x0003a144) ai_gene_pane_1_g1_ParamLimits

0xaa33,	// (0x0003a144) ai_gene_pane_1_g1

0xaa3f,	// (0x0003a150) ai_gene_pane_1_g2_ParamLimits

0xaa3f,	// (0x0003a150) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x0003eff9) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x0003eff9) ai_gene_pane_1_g

0xaa4c,	// (0x0003a15d) ai_gene_pane_1_t1_ParamLimits

0xaa4c,	// (0x0003a15d) ai_gene_pane_1_t1

0xaa80,	// (0x0003a191) grid_ai_soft_ind_pane

0xaa1e,	// (0x0003a12f) ai_gene_pane_2_t1_ParamLimits

0xaa1e,	// (0x0003a12f) ai_gene_pane_2_t1

0x59c7,	// (0x000350d8) main_pane_empty_t1_ParamLimits

0x59c7,	// (0x000350d8) main_pane_empty_t1

0x59df,	// (0x000350f0) main_pane_empty_t2_ParamLimits

0x59df,	// (0x000350f0) main_pane_empty_t2

0x59f4,	// (0x00035105) main_pane_empty_t3_ParamLimits

0x59f4,	// (0x00035105) main_pane_empty_t3

0x5a06,	// (0x00035117) main_pane_empty_t4_ParamLimits

0x5a06,	// (0x00035117) main_pane_empty_t4

0x5a18,	// (0x00035129) main_pane_empty_t5_ParamLimits

0x5a18,	// (0x00035129) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0003ec60) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0003ec60) main_pane_empty_t

0x29d3,	// (0x000320e4) bg_popup_window_pane_ParamLimits

0x29d3,	// (0x000320e4) bg_popup_window_pane

0xa780,	// (0x00039e91) find_popup_pane_cp2_ParamLimits

0xa780,	// (0x00039e91) find_popup_pane_cp2

0xa78c,	// (0x00039e9d) heading_pane_ParamLimits

0xa78c,	// (0x00039e9d) heading_pane

0x224e,	// (0x0003195f) bg_popup_sub_pane

0xa6fa,	// (0x00039e0b) bg_popup_window_pane_g1_ParamLimits

0xa6fa,	// (0x00039e0b) bg_popup_window_pane_g1

0xa706,	// (0x00039e17) bg_popup_window_pane_g2_ParamLimits

0xa706,	// (0x00039e17) bg_popup_window_pane_g2

0xa712,	// (0x00039e23) bg_popup_window_pane_g3_ParamLimits

0xa712,	// (0x00039e23) bg_popup_window_pane_g3

0xa71e,	// (0x00039e2f) bg_popup_window_pane_g4_ParamLimits

0xa71e,	// (0x00039e2f) bg_popup_window_pane_g4

0xa72a,	// (0x00039e3b) bg_popup_window_pane_g5_ParamLimits

0xa72a,	// (0x00039e3b) bg_popup_window_pane_g5

0xa736,	// (0x00039e47) bg_popup_window_pane_g6_ParamLimits

0xa736,	// (0x00039e47) bg_popup_window_pane_g6

0xa742,	// (0x00039e53) bg_popup_window_pane_g7_ParamLimits

0xa742,	// (0x00039e53) bg_popup_window_pane_g7

0xa74e,	// (0x00039e5f) bg_popup_window_pane_g8_ParamLimits

0xa74e,	// (0x00039e5f) bg_popup_window_pane_g8

0xa75a,	// (0x00039e6b) bg_popup_window_pane_g9_ParamLimits

0xa75a,	// (0x00039e6b) bg_popup_window_pane_g9

0xa766,	// (0x00039e77) bg_popup_window_pane_g10_ParamLimits

0xa766,	// (0x00039e77) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x0003efc1) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x0003efc1) bg_popup_window_pane_g

0xa68f,	// (0x00039da0) bg_popup_heading_pane_ParamLimits

0xa68f,	// (0x00039da0) bg_popup_heading_pane

0x789d,	// (0x00036fae) tabs_4_passive_pane_cp_srt_ParamLimits

0x789d,	// (0x00036fae) tabs_4_passive_pane_cp_srt

0x78af,	// (0x00036fc0) tabs_4_passive_pane_srt_ParamLimits

0xa6a3,	// (0x00039db4) heading_pane_g2

0x78af,	// (0x00036fc0) tabs_4_passive_pane_srt

0x947c,	// (0x00038b8d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x947c,	// (0x00038b8d) bg_passive_tab_pane_cp3_srt

0xa6ab,	// (0x00039dbc) heading_pane_t1_ParamLimits

0xa6ab,	// (0x00039dbc) heading_pane_t1

0xa6c2,	// (0x00039dd3) heading_pane_t2_ParamLimits

0xa6c2,	// (0x00039dd3) heading_pane_t2

0x0001,

0xf8ab,	// (0x0003efbc) heading_pane_t_ParamLimits

0xf8ab,	// (0x0003efbc) heading_pane_t

0xa1ba,	// (0x000398cb) bg_popup_heading_pane_g1

0xa269,	// (0x0003997a) bg_popup_heading_pane_g2

0xa273,	// (0x00039984) bg_popup_heading_pane_g3

0xa27d,	// (0x0003998e) bg_popup_heading_pane_g4

0xa287,	// (0x00039998) bg_popup_heading_pane_g5

0xa291,	// (0x000399a2) bg_popup_heading_pane_g6

0xa299,	// (0x000399aa) bg_popup_heading_pane_g7

0xa2a1,	// (0x000399b2) bg_popup_heading_pane_g8

0xa2ab,	// (0x000399bc) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x0003ef78) bg_popup_heading_pane_g

0x99b2,	// (0x000390c3) bg_popup_sub_pane_g1

0x99c2,	// (0x000390d3) bg_popup_sub_pane_g2

0x99ba,	// (0x000390cb) bg_popup_sub_pane_g3

0x99d2,	// (0x000390e3) bg_popup_sub_pane_g4

0x99ca,	// (0x000390db) bg_popup_sub_pane_g5

0x99da,	// (0x000390eb) bg_popup_sub_pane_g6

0x99e2,	// (0x000390f3) bg_popup_sub_pane_g7

0x99f2,	// (0x00039103) bg_popup_sub_pane_g8

0x99ea,	// (0x000390fb) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x0003ef52) bg_popup_sub_pane_g

0x229c,	// (0x000319ad) bg_popup_window_pane_cp5_ParamLimits

0x229c,	// (0x000319ad) bg_popup_window_pane_cp5

0x23eb,	// (0x00031afc) popup_note_window_g1_ParamLimits

0x23eb,	// (0x00031afc) popup_note_window_g1

0x23f7,	// (0x00031b08) popup_note_window_t1_ParamLimits

0x23f7,	// (0x00031b08) popup_note_window_t1

0x240d,	// (0x00031b1e) popup_note_window_t2_ParamLimits

0x240d,	// (0x00031b1e) popup_note_window_t2

0x2423,	// (0x00031b34) popup_note_window_t3_ParamLimits

0x2423,	// (0x00031b34) popup_note_window_t3

0x2439,	// (0x00031b4a) popup_note_window_t4_ParamLimits

0x2439,	// (0x00031b4a) popup_note_window_t4

0x2461,	// (0x00031b72) popup_note_window_t5_ParamLimits

0x2461,	// (0x00031b72) popup_note_window_t5

0x0004,

0xf55a,	// (0x0003ec6b) popup_note_window_t_ParamLimits

0xf55a,	// (0x0003ec6b) popup_note_window_t

0x24ab,	// (0x00031bbc) bg_popup_window_pane_cp6_ParamLimits

0x24ab,	// (0x00031bbc) bg_popup_window_pane_cp6

0xa136,	// (0x00039847) popup_note_image_window_g1_ParamLimits

0xa136,	// (0x00039847) popup_note_image_window_g1

0xa142,	// (0x00039853) popup_note_image_window_g2_ParamLimits

0xa142,	// (0x00039853) popup_note_image_window_g2

0x0001,

0xf835,	// (0x0003ef46) popup_note_image_window_g_ParamLimits

0xf835,	// (0x0003ef46) popup_note_image_window_g

0xa15b,	// (0x0003986c) popup_note_image_window_t1_ParamLimits

0xa15b,	// (0x0003986c) popup_note_image_window_t1

0xa174,	// (0x00039885) popup_note_image_window_t2_ParamLimits

0xa174,	// (0x00039885) popup_note_image_window_t2

0xa18d,	// (0x0003989e) popup_note_image_window_t3_ParamLimits

0xa18d,	// (0x0003989e) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x0003ef4b) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x0003ef4b) popup_note_image_window_t

0x9ff6,	// (0x00039707) bg_popup_window_pane_cp7_ParamLimits

0x9ff6,	// (0x00039707) bg_popup_window_pane_cp7

0xa026,	// (0x00039737) popup_note_wait_window_g1_ParamLimits

0xa026,	// (0x00039737) popup_note_wait_window_g1

0xa032,	// (0x00039743) popup_note_wait_window_g2_ParamLimits

0xa032,	// (0x00039743) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x0003ef34) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x0003ef34) popup_note_wait_window_g

0xa04a,	// (0x0003975b) popup_note_wait_window_t1_ParamLimits

0xa04a,	// (0x0003975b) popup_note_wait_window_t1

0xa071,	// (0x00039782) popup_note_wait_window_t2_ParamLimits

0xa071,	// (0x00039782) popup_note_wait_window_t2

0xa08f,	// (0x000397a0) popup_note_wait_window_t3_ParamLimits

0xa08f,	// (0x000397a0) popup_note_wait_window_t3

0xa0a2,	// (0x000397b3) popup_note_wait_window_t4_ParamLimits

0xa0a2,	// (0x000397b3) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x0003ef3b) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x0003ef3b) popup_note_wait_window_t

0xa0c7,	// (0x000397d8) wait_bar_pane_ParamLimits

0xa0c7,	// (0x000397d8) wait_bar_pane

0x224e,	// (0x0003195f) wait_anim_pane

0x224e,	// (0x0003195f) wait_border_pane

0x2244,	// (0x00031955) wait_anim_pane_g1

0x2244,	// (0x00031955) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x0003edef) wait_anim_pane_g

0x9f9a,	// (0x000396ab) wait_border_pane_g1

0x9fa5,	// (0x000396b6) wait_border_pane_g2

0x9fae,	// (0x000396bf) wait_border_pane_g3

0x0002,

0xf81c,	// (0x0003ef2d) wait_border_pane_g

0x9e04,	// (0x00039515) bg_popup_window_pane_cp16_ParamLimits

0x9e04,	// (0x00039515) bg_popup_window_pane_cp16

0x9f04,	// (0x00039615) indicator_popup_pane_cp4_ParamLimits

0x9f04,	// (0x00039615) indicator_popup_pane_cp4

0x9f18,	// (0x00039629) popup_query_data_window_t1_ParamLimits

0x9f18,	// (0x00039629) popup_query_data_window_t1

0x9f2a,	// (0x0003963b) popup_query_data_window_t2_ParamLimits

0x9f2a,	// (0x0003963b) popup_query_data_window_t2

0x9f43,	// (0x00039654) popup_query_data_window_t3_ParamLimits

0x9f43,	// (0x00039654) popup_query_data_window_t3

0x0002,

0xf815,	// (0x0003ef26) popup_query_data_window_t_ParamLimits

0xf815,	// (0x0003ef26) popup_query_data_window_t

0x9f5d,	// (0x0003966e) query_popup_data_pane_ParamLimits

0x9f5d,	// (0x0003966e) query_popup_data_pane

0x9f71,	// (0x00039682) query_popup_data_pane_cp1_ParamLimits

0x9f71,	// (0x00039682) query_popup_data_pane_cp1

0x9e04,	// (0x00039515) bg_popup_window_pane_cp10_ParamLimits

0x9e04,	// (0x00039515) bg_popup_window_pane_cp10

0x9e36,	// (0x00039547) indicator_popup_pane_ParamLimits

0x9e36,	// (0x00039547) indicator_popup_pane

0x9e58,	// (0x00039569) popup_query_code_window_t1_ParamLimits

0x9e58,	// (0x00039569) popup_query_code_window_t1

0x9e72,	// (0x00039583) popup_query_code_window_t2_ParamLimits

0x9e72,	// (0x00039583) popup_query_code_window_t2

0x9ebb,	// (0x000395cc) popup_query_code_window_t3_ParamLimits

0x9ebb,	// (0x000395cc) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x0003ef1f) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x0003ef1f) popup_query_code_window_t

0x9eea,	// (0x000395fb) query_popup_pane_ParamLimits

0x9eea,	// (0x000395fb) query_popup_pane

0x24ab,	// (0x00031bbc) bg_popup_window_pane_cp15_ParamLimits

0x24ab,	// (0x00031bbc) bg_popup_window_pane_cp15

0x24cb,	// (0x00031bdc) indicator_popup_pane_cp1_ParamLimits

0x24cb,	// (0x00031bdc) indicator_popup_pane_cp1

0x24de,	// (0x00031bef) indicator_popup_pane_cp2_ParamLimits

0x24de,	// (0x00031bef) indicator_popup_pane_cp2

0x24f9,	// (0x00031c0a) popup_query_data_code_window_g1_ParamLimits

0x24f9,	// (0x00031c0a) popup_query_data_code_window_g1

0x250c,	// (0x00031c1d) popup_query_data_code_window_t1_ParamLimits

0x250c,	// (0x00031c1d) popup_query_data_code_window_t1

0x251e,	// (0x00031c2f) popup_query_data_code_window_t2_ParamLimits

0x251e,	// (0x00031c2f) popup_query_data_code_window_t2

0x2530,	// (0x00031c41) popup_query_data_code_window_t3_ParamLimits

0x2530,	// (0x00031c41) popup_query_data_code_window_t3

0x2546,	// (0x00031c57) popup_query_data_code_window_t4_ParamLimits

0x2546,	// (0x00031c57) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0003ec76) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0003ec76) popup_query_data_code_window_t

0x7452,	// (0x00036b63) list_single_midp_graphic_pane_g3

0x2560,	// (0x00031c71) query_popup_data_pane_cp2_ParamLimits

0x2573,	// (0x00031c84) query_popup_pane_cp2_ParamLimits

0x2573,	// (0x00031c84) query_popup_pane_cp2

0x224e,	// (0x0003195f) bg_popup_window_pane_cp11

0x9de8,	// (0x000394f9) heading_pane_cp5

0x9df0,	// (0x00039501) listscroll_popup_info_pane

0x224e,	// (0x0003195f) input_focus_pane_cp3

0x258e,	// (0x00031c9f) query_popup_pane_t1

0x259c,	// (0x00031cad) list_popup_info_pane_ParamLimits

0x259c,	// (0x00031cad) list_popup_info_pane

0x25ab,	// (0x00031cbc) listscroll_popup_info_pane_g1

0x25b3,	// (0x00031cc4) scroll_pane_cp7

0x25bd,	// (0x00031cce) popup_info_list_pane_t1_ParamLimits

0x25bd,	// (0x00031cce) popup_info_list_pane_t1

0x25d7,	// (0x00031ce8) popup_info_list_pane_t2_ParamLimits

0x25d7,	// (0x00031ce8) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0003ec7f) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0003ec7f) popup_info_list_pane_t

0x224e,	// (0x0003195f) bg_popup_window_pane_cp12

0xb19b,	// (0x0003a8ac) find_popup_pane

0x22aa,	// (0x000319bb) bg_popup_window_pane_cp3

0x25f1,	// (0x00031d02) heading_pane_cp3

0x2600,	// (0x00031d11) listscroll_popup_graphic_pane

0x224e,	// (0x0003195f) bg_popup_window_pane_cp4

0x5a7a,	// (0x0003518b) heading_pane_cp4

0x2610,	// (0x00031d21) listscroll_popup_colour_pane

0x5a84,	// (0x00035195) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x5a84,	// (0x00035195) cell_large_graphic_colour_none_popup_pane

0x5a98,	// (0x000351a9) grid_large_graphic_colour_popup_pane_ParamLimits

0x5a98,	// (0x000351a9) grid_large_graphic_colour_popup_pane

0x5ac4,	// (0x000351d5) listscroll_popup_colour_pane_g1_ParamLimits

0x5ac4,	// (0x000351d5) listscroll_popup_colour_pane_g1

0x5adb,	// (0x000351ec) listscroll_popup_colour_pane_g2_ParamLimits

0x5adb,	// (0x000351ec) listscroll_popup_colour_pane_g2

0x5af2,	// (0x00035203) listscroll_popup_colour_pane_g3_ParamLimits

0x5af2,	// (0x00035203) listscroll_popup_colour_pane_g3

0x5b02,	// (0x00035213) listscroll_popup_colour_pane_g4_ParamLimits

0x5b02,	// (0x00035213) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0003ec84) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0003ec84) listscroll_popup_colour_pane_g

0x2618,	// (0x00031d29) scroll_pane_cp6_ParamLimits

0x2618,	// (0x00031d29) scroll_pane_cp6

0x5b16,	// (0x00035227) cell_large_graphic_colour_popup_pane_ParamLimits

0x5b16,	// (0x00035227) cell_large_graphic_colour_popup_pane

0x262a,	// (0x00031d3b) cell_large_graphic_colour_none_popup_pane_t1

0x224e,	// (0x0003195f) grid_highlight_pane_cp5

0x2639,	// (0x00031d4a) cell_large_graphic_colour_popup_pane_g1

0x2641,	// (0x00031d52) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0003ec8d) cell_large_graphic_colour_popup_pane_g

0x2649,	// (0x00031d5a) cell_large_graphic_colour_popup_pane_g2_copy1

0x2652,	// (0x00031d63) grid_highlight_pane_cp4

0x265a,	// (0x00031d6b) bg_popup_window_pane_cp8_ParamLimits

0x265a,	// (0x00031d6b) bg_popup_window_pane_cp8

0x2675,	// (0x00031d86) popup_snote_single_text_window_g1_ParamLimits

0x2675,	// (0x00031d86) popup_snote_single_text_window_g1

0x2687,	// (0x00031d98) popup_snote_single_text_window_t1_ParamLimits

0x2687,	// (0x00031d98) popup_snote_single_text_window_t1

0x269a,	// (0x00031dab) popup_snote_single_text_window_t2_ParamLimits

0x269a,	// (0x00031dab) popup_snote_single_text_window_t2

0x26ad,	// (0x00031dbe) popup_snote_single_text_window_t3_ParamLimits

0x26ad,	// (0x00031dbe) popup_snote_single_text_window_t3

0x26e6,	// (0x00031df7) popup_snote_single_text_window_t4_ParamLimits

0x26e6,	// (0x00031df7) popup_snote_single_text_window_t4

0x271a,	// (0x00031e2b) popup_snote_single_text_window_t5_ParamLimits

0x271a,	// (0x00031e2b) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0003ec92) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0003ec92) popup_snote_single_text_window_t

0x2749,	// (0x00031e5a) bg_popup_window_pane_cp9_ParamLimits

0x2749,	// (0x00031e5a) bg_popup_window_pane_cp9

0x2675,	// (0x00031d86) popup_snote_single_graphic_window_g1_ParamLimits

0x2675,	// (0x00031d86) popup_snote_single_graphic_window_g1

0x2757,	// (0x00031e68) popup_snote_single_graphic_window_g2_ParamLimits

0x2757,	// (0x00031e68) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0003ec9d) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0003ec9d) popup_snote_single_graphic_window_g

0x2763,	// (0x00031e74) popup_snote_single_graphic_window_t1_ParamLimits

0x2763,	// (0x00031e74) popup_snote_single_graphic_window_t1

0x2776,	// (0x00031e87) popup_snote_single_graphic_window_t2_ParamLimits

0x2776,	// (0x00031e87) popup_snote_single_graphic_window_t2

0x2789,	// (0x00031e9a) popup_snote_single_graphic_window_t3_ParamLimits

0x2789,	// (0x00031e9a) popup_snote_single_graphic_window_t3

0x27c2,	// (0x00031ed3) popup_snote_single_graphic_window_t4_ParamLimits

0x27c2,	// (0x00031ed3) popup_snote_single_graphic_window_t4

0x27f6,	// (0x00031f07) popup_snote_single_graphic_window_t5_ParamLimits

0x27f6,	// (0x00031f07) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0003eca2) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0003eca2) popup_snote_single_graphic_window_t

0xb0d9,	// (0x0003a7ea) grid_graphic_popup_pane_ParamLimits

0xb0d9,	// (0x0003a7ea) grid_graphic_popup_pane

0xb107,	// (0x0003a818) listscroll_popup_graphic_pane_g1_ParamLimits

0xb107,	// (0x0003a818) listscroll_popup_graphic_pane_g1

0xb11b,	// (0x0003a82c) listscroll_popup_graphic_pane_g2_ParamLimits

0xb11b,	// (0x0003a82c) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x0003f09c) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x0003f09c) listscroll_popup_graphic_pane_g

0xb12f,	// (0x0003a840) scroll_pane_cp5

0xb071,	// (0x0003a782) cell_graphic_popup_pane_ParamLimits

0xb071,	// (0x0003a782) cell_graphic_popup_pane

0xb052,	// (0x0003a763) cell_graphic_popup_pane_g1

0xb05a,	// (0x0003a76b) cell_graphic_popup_pane_g2

0x2649,	// (0x00031d5a) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x0003f095) cell_graphic_popup_pane_g

0xb063,	// (0x0003a774) cell_graphic_popup_pane_t2

0x2652,	// (0x00031d63) grid_highlight_pane_cp3

0x2837,	// (0x00031f48) list_gen_pane_ParamLimits

0x2837,	// (0x00031f48) list_gen_pane

0x285f,	// (0x00031f70) scroll_pane

0xafaa,	// (0x0003a6bb) bg_list_pane_g1_ParamLimits

0xafaa,	// (0x0003a6bb) bg_list_pane_g1

0xafc7,	// (0x0003a6d8) bg_list_pane_g2_ParamLimits

0xafc7,	// (0x0003a6d8) bg_list_pane_g2

0xafdc,	// (0x0003a6ed) bg_list_pane_g3_ParamLimits

0xafdc,	// (0x0003a6ed) bg_list_pane_g3

0xaff0,	// (0x0003a701) bg_list_pane_g4_ParamLimits

0xaff0,	// (0x0003a701) bg_list_pane_g4

0xb004,	// (0x0003a715) bg_list_pane_g5_ParamLimits

0xb004,	// (0x0003a715) bg_list_pane_g5

0x0004,

0xf979,	// (0x0003f08a) bg_list_pane_g_ParamLimits

0xf979,	// (0x0003f08a) bg_list_pane_g

0xaf61,	// (0x0003a672) list_double2_graphic_large_graphic_pane_ParamLimits

0xaf61,	// (0x0003a672) list_double2_graphic_large_graphic_pane

0xaf61,	// (0x0003a672) list_double2_graphic_pane_ParamLimits

0xaf61,	// (0x0003a672) list_double2_graphic_pane

0xaf61,	// (0x0003a672) list_double2_large_graphic_pane_ParamLimits

0xaf61,	// (0x0003a672) list_double2_large_graphic_pane

0xaf61,	// (0x0003a672) list_double2_pane_ParamLimits

0xaf61,	// (0x0003a672) list_double2_pane

0xaf61,	// (0x0003a672) list_double_graphic_heading_pane_ParamLimits

0xaf61,	// (0x0003a672) list_double_graphic_heading_pane

0xaf61,	// (0x0003a672) list_double_graphic_pane_ParamLimits

0xaf61,	// (0x0003a672) list_double_graphic_pane

0xaf61,	// (0x0003a672) list_double_heading_pane_ParamLimits

0xaf61,	// (0x0003a672) list_double_heading_pane

0xaf61,	// (0x0003a672) list_double_large_graphic_pane_ParamLimits

0xaf61,	// (0x0003a672) list_double_large_graphic_pane

0xaf61,	// (0x0003a672) list_double_number_pane_ParamLimits

0xaf61,	// (0x0003a672) list_double_number_pane

0xaf61,	// (0x0003a672) list_double_pane_ParamLimits

0xaf61,	// (0x0003a672) list_double_pane

0xaf61,	// (0x0003a672) list_double_time_pane_ParamLimits

0xaf61,	// (0x0003a672) list_double_time_pane

0xaf61,	// (0x0003a672) list_setting_number_pane_ParamLimits

0xaf61,	// (0x0003a672) list_setting_number_pane

0xaf61,	// (0x0003a672) list_setting_pane_ParamLimits

0xaf61,	// (0x0003a672) list_setting_pane

0x7832,	// (0x00036f43) list_single_2graphic_pane_ParamLimits

0x7832,	// (0x00036f43) list_single_2graphic_pane

0x7832,	// (0x00036f43) list_single_graphic_heading_pane_ParamLimits

0x7832,	// (0x00036f43) list_single_graphic_heading_pane

0x7832,	// (0x00036f43) list_single_graphic_pane_ParamLimits

0x7832,	// (0x00036f43) list_single_graphic_pane

0x7832,	// (0x00036f43) list_single_heading_pane_ParamLimits

0x7832,	// (0x00036f43) list_single_heading_pane

0xaf8f,	// (0x0003a6a0) list_single_large_graphic_pane_ParamLimits

0xaf8f,	// (0x0003a6a0) list_single_large_graphic_pane

0x7832,	// (0x00036f43) list_single_number_heading_pane_ParamLimits

0x7832,	// (0x00036f43) list_single_number_heading_pane

0x7832,	// (0x00036f43) list_single_number_pane_ParamLimits

0x7832,	// (0x00036f43) list_single_number_pane

0x7832,	// (0x00036f43) list_single_pane_ParamLimits

0x7832,	// (0x00036f43) list_single_pane

0x224e,	// (0x0003195f) list_highlight_pane_cp1

0x5b4d,	// (0x0003525e) list_single_pane_g1_ParamLimits

0x5b4d,	// (0x0003525e) list_single_pane_g1

0x5b59,	// (0x0003526a) list_single_pane_g2_ParamLimits

0x5b59,	// (0x0003526a) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0003ecb4) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0003ecb4) list_single_pane_g

0x7804,	// (0x00036f15) list_single_pane_t1_ParamLimits

0x7804,	// (0x00036f15) list_single_pane_t1

0x5b4d,	// (0x0003525e) list_single_number_pane_g1_ParamLimits

0x5b4d,	// (0x0003525e) list_single_number_pane_g1

0x5b59,	// (0x0003526a) list_single_number_pane_g2_ParamLimits

0x5b59,	// (0x0003526a) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0003ecb4) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0003ecb4) list_single_number_pane_g

0x7736,	// (0x00036e47) list_single_number_pane_t1_ParamLimits

0x7736,	// (0x00036e47) list_single_number_pane_t1

0x774c,	// (0x00036e5d) list_single_number_pane_t2_ParamLimits

0x774c,	// (0x00036e5d) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x0003f04b) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x0003f04b) list_single_number_pane_t

0x5b41,	// (0x00035252) list_single_graphic_pane_g1_ParamLimits

0x5b41,	// (0x00035252) list_single_graphic_pane_g1

0x5b4d,	// (0x0003525e) list_single_graphic_pane_g2_ParamLimits

0x5b4d,	// (0x0003525e) list_single_graphic_pane_g2

0x5b59,	// (0x0003526a) list_single_graphic_pane_g3_ParamLimits

0x5b59,	// (0x0003526a) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0003ecad) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0003ecad) list_single_graphic_pane_g

0x5b65,	// (0x00035276) list_single_graphic_pane_t1_ParamLimits

0x5b65,	// (0x00035276) list_single_graphic_pane_t1

0x5b4d,	// (0x0003525e) list_single_heading_pane_g1_ParamLimits

0x5b4d,	// (0x0003525e) list_single_heading_pane_g1

0x5b59,	// (0x0003526a) list_single_heading_pane_g2_ParamLimits

0x5b59,	// (0x0003526a) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0003ecb4) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0003ecb4) list_single_heading_pane_g

0x5b7b,	// (0x0003528c) list_single_heading_pane_t1_ParamLimits

0x5b7b,	// (0x0003528c) list_single_heading_pane_t1

0x5b91,	// (0x000352a2) list_single_heading_pane_t2_ParamLimits

0x5b91,	// (0x000352a2) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0003ecb9) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0003ecb9) list_single_heading_pane_t

0x5b4d,	// (0x0003525e) list_single_number_heading_pane_g1_ParamLimits

0x5b4d,	// (0x0003525e) list_single_number_heading_pane_g1

0x5b59,	// (0x0003526a) list_single_number_heading_pane_g2_ParamLimits

0x5b59,	// (0x0003526a) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0003ecb4) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0003ecb4) list_single_number_heading_pane_g

0x5b7b,	// (0x0003528c) list_single_number_heading_pane_t1_ParamLimits

0x5b7b,	// (0x0003528c) list_single_number_heading_pane_t1

0x5ba3,	// (0x000352b4) list_single_number_heading_pane_t2_ParamLimits

0x5ba3,	// (0x000352b4) list_single_number_heading_pane_t2

0x5bb5,	// (0x000352c6) list_single_number_heading_pane_t3_ParamLimits

0x5bb5,	// (0x000352c6) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0003ecbe) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0003ecbe) list_single_number_heading_pane_t

0x5bc7,	// (0x000352d8) list_single_graphic_heading_pane_g1_ParamLimits

0x5bc7,	// (0x000352d8) list_single_graphic_heading_pane_g1

0x5bd3,	// (0x000352e4) list_single_graphic_heading_pane_g4_ParamLimits

0x5bd3,	// (0x000352e4) list_single_graphic_heading_pane_g4

0x5b59,	// (0x0003526a) list_single_graphic_heading_pane_g5_ParamLimits

0x5b59,	// (0x0003526a) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0003ecc5) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0003ecc5) list_single_graphic_heading_pane_g

0x5b7b,	// (0x0003528c) list_single_graphic_heading_pane_t1_ParamLimits

0x5b7b,	// (0x0003528c) list_single_graphic_heading_pane_t1

0x5be4,	// (0x000352f5) list_single_graphic_heading_pane_t2_ParamLimits

0x5be4,	// (0x000352f5) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0003eccc) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0003eccc) list_single_graphic_heading_pane_t

0x5bf6,	// (0x00035307) list_single_large_graphic_pane_g1_ParamLimits

0x5bf6,	// (0x00035307) list_single_large_graphic_pane_g1

0x4301,	// (0x00033a12) list_single_large_graphic_pane_g2_ParamLimits

0x4301,	// (0x00033a12) list_single_large_graphic_pane_g2

0x5c02,	// (0x00035313) list_single_large_graphic_pane_g3_ParamLimits

0x5c02,	// (0x00035313) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0003ecd1) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0003ecd1) list_single_large_graphic_pane_g

0x9fa5,	// (0x000396b6) wait_border_pane_g2_copy1

0x5c0e,	// (0x0003531f) list_single_large_graphic_pane_g4_cp2

0x5c16,	// (0x00035327) list_single_large_graphic_pane_t1_ParamLimits

0x5c16,	// (0x00035327) list_single_large_graphic_pane_t1

0x5c2c,	// (0x0003533d) list_double_pane_g1_ParamLimits

0x5c2c,	// (0x0003533d) list_double_pane_g1

0x5c38,	// (0x00035349) list_double_pane_g2_ParamLimits

0x5c38,	// (0x00035349) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0003ecd8) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0003ecd8) list_double_pane_g

0x5c44,	// (0x00035355) list_double_pane_t1_ParamLimits

0x5c44,	// (0x00035355) list_double_pane_t1

0x5c5a,	// (0x0003536b) list_double_pane_t2_ParamLimits

0x5c5a,	// (0x0003536b) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0003ecdd) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0003ecdd) list_double_pane_t

0x5c6c,	// (0x0003537d) list_double2_pane_g1_ParamLimits

0x5c6c,	// (0x0003537d) list_double2_pane_g1

0x5c7d,	// (0x0003538e) list_double2_pane_g2_ParamLimits

0x5c7d,	// (0x0003538e) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0003ece2) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0003ece2) list_double2_pane_g

0x5c89,	// (0x0003539a) list_double2_pane_t1_ParamLimits

0x5c89,	// (0x0003539a) list_double2_pane_t1

0x5c9f,	// (0x000353b0) list_double2_pane_t2_ParamLimits

0x5c9f,	// (0x000353b0) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0003ece7) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0003ece7) list_double2_pane_t

0x5c2c,	// (0x0003533d) list_double_number_pane_g1_ParamLimits

0x5c2c,	// (0x0003533d) list_double_number_pane_g1

0x5c38,	// (0x00035349) list_double_number_pane_g2_ParamLimits

0x5c38,	// (0x00035349) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0003ecd8) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0003ecd8) list_double_number_pane_g

0x5cb1,	// (0x000353c2) list_double_number_pane_t1_ParamLimits

0x5cb1,	// (0x000353c2) list_double_number_pane_t1

0x5cc3,	// (0x000353d4) list_double_number_pane_t2_ParamLimits

0x5cc3,	// (0x000353d4) list_double_number_pane_t2

0x5cd9,	// (0x000353ea) list_double_number_pane_t3_ParamLimits

0x5cd9,	// (0x000353ea) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0003ecec) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0003ecec) list_double_number_pane_t

0x5ceb,	// (0x000353fc) list_double_graphic_pane_g1_ParamLimits

0x5ceb,	// (0x000353fc) list_double_graphic_pane_g1

0x5cf7,	// (0x00035408) list_double_graphic_pane_g2_ParamLimits

0x5cf7,	// (0x00035408) list_double_graphic_pane_g2

0x5d06,	// (0x00035417) list_double_graphic_pane_g3_ParamLimits

0x5d06,	// (0x00035417) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0003ecf3) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0003ecf3) list_double_graphic_pane_g

0x5d1e,	// (0x0003542f) list_double_graphic_pane_t1_ParamLimits

0x5d1e,	// (0x0003542f) list_double_graphic_pane_t1

0x5d34,	// (0x00035445) list_double_graphic_pane_t2_ParamLimits

0x5d34,	// (0x00035445) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0003ecfc) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0003ecfc) list_double_graphic_pane_t

0x5d46,	// (0x00035457) list_double2_graphic_pane_g1_ParamLimits

0x5d46,	// (0x00035457) list_double2_graphic_pane_g1

0x42f5,	// (0x00033a06) list_double2_graphic_pane_g2_ParamLimits

0x42f5,	// (0x00033a06) list_double2_graphic_pane_g2

0x5d52,	// (0x00035463) list_double2_graphic_pane_g3_ParamLimits

0x5d52,	// (0x00035463) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0003ed01) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0003ed01) list_double2_graphic_pane_g

0x5d5e,	// (0x0003546f) list_double2_graphic_pane_t1_ParamLimits

0x5d5e,	// (0x0003546f) list_double2_graphic_pane_t1

0x5d74,	// (0x00035485) list_double2_graphic_pane_t2_ParamLimits

0x5d74,	// (0x00035485) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0003ed08) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0003ed08) list_double2_graphic_pane_t

0x5d86,	// (0x00035497) list_double_large_graphic_pane_g1_ParamLimits

0x5d86,	// (0x00035497) list_double_large_graphic_pane_g1

0x5da5,	// (0x000354b6) list_double_large_graphic_pane_g2_ParamLimits

0x5da5,	// (0x000354b6) list_double_large_graphic_pane_g2

0x5c38,	// (0x00035349) list_double_large_graphic_pane_g3_ParamLimits

0x5c38,	// (0x00035349) list_double_large_graphic_pane_g3

0x5db6,	// (0x000354c7) list_double_large_graphic_pane_g4_ParamLimits

0x5db6,	// (0x000354c7) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0003ed0d) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0003ed0d) list_double_large_graphic_pane_g

0x5dc9,	// (0x000354da) list_double_large_graphic_pane_t1_ParamLimits

0x5dc9,	// (0x000354da) list_double_large_graphic_pane_t1

0x5de2,	// (0x000354f3) list_double_large_graphic_pane_t2_ParamLimits

0x5de2,	// (0x000354f3) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0003ed18) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0003ed18) list_double_large_graphic_pane_t

0x5df4,	// (0x00035505) list_double2_large_graphic_pane_g1_ParamLimits

0x5df4,	// (0x00035505) list_double2_large_graphic_pane_g1

0x5c6c,	// (0x0003537d) list_double2_large_graphic_pane_g2_ParamLimits

0x5c6c,	// (0x0003537d) list_double2_large_graphic_pane_g2

0x5c7d,	// (0x0003538e) list_double2_large_graphic_pane_g3_ParamLimits

0x5c7d,	// (0x0003538e) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0003ed1d) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0003ed1d) list_double2_large_graphic_pane_g

0x5e00,	// (0x00035511) list_double2_large_graphic_pane_t1_ParamLimits

0x5e00,	// (0x00035511) list_double2_large_graphic_pane_t1

0x5e16,	// (0x00035527) list_double2_large_graphic_pane_t2_ParamLimits

0x5e16,	// (0x00035527) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0003ed24) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0003ed24) list_double2_large_graphic_pane_t

0x5e28,	// (0x00035539) list_double_heading_pane_g1_ParamLimits

0x5e28,	// (0x00035539) list_double_heading_pane_g1

0x3eb0,	// (0x000335c1) list_double_heading_pane_g2_ParamLimits

0x3eb0,	// (0x000335c1) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0003ed29) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0003ed29) list_double_heading_pane_g

0x5e39,	// (0x0003554a) list_double_heading_pane_t1_ParamLimits

0x5e39,	// (0x0003554a) list_double_heading_pane_t1

0x5c9f,	// (0x000353b0) list_double_heading_pane_t2_ParamLimits

0x5c9f,	// (0x000353b0) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0003ed2e) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0003ed2e) list_double_heading_pane_t

0x5d46,	// (0x00035457) list_double_graphic_heading_pane_g1_ParamLimits

0x5d46,	// (0x00035457) list_double_graphic_heading_pane_g1

0x5e28,	// (0x00035539) list_double_graphic_heading_pane_g2_ParamLimits

0x5e28,	// (0x00035539) list_double_graphic_heading_pane_g2

0x3eb0,	// (0x000335c1) list_double_graphic_heading_pane_g3_ParamLimits

0x3eb0,	// (0x000335c1) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0003ed33) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0003ed33) list_double_graphic_heading_pane_g

0x5e4f,	// (0x00035560) list_double_graphic_heading_pane_t1_ParamLimits

0x5e4f,	// (0x00035560) list_double_graphic_heading_pane_t1

0x5d74,	// (0x00035485) list_double_graphic_heading_pane_t2_ParamLimits

0x5d74,	// (0x00035485) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0003ed3a) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0003ed3a) list_double_graphic_heading_pane_t

0x5da5,	// (0x000354b6) list_double_time_pane_g1_ParamLimits

0x5da5,	// (0x000354b6) list_double_time_pane_g1

0x5c38,	// (0x00035349) list_double_time_pane_g2_ParamLimits

0x5c38,	// (0x00035349) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0003ed3f) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0003ed3f) list_double_time_pane_g

0x5e65,	// (0x00035576) list_double_time_pane_t1_ParamLimits

0x5e65,	// (0x00035576) list_double_time_pane_t1

0x5e7b,	// (0x0003558c) list_double_time_pane_t2_ParamLimits

0x5e7b,	// (0x0003558c) list_double_time_pane_t2

0x5e8d,	// (0x0003559e) list_double_time_pane_t3_ParamLimits

0x5e8d,	// (0x0003559e) list_double_time_pane_t3

0x5e9f,	// (0x000355b0) list_double_time_pane_t4_ParamLimits

0x5e9f,	// (0x000355b0) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0003ed44) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0003ed44) list_double_time_pane_t

0x3ea4,	// (0x000335b5) list_setting_pane_g1_ParamLimits

0x3ea4,	// (0x000335b5) list_setting_pane_g1

0x3eb0,	// (0x000335c1) list_setting_pane_g2_ParamLimits

0x3eb0,	// (0x000335c1) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0003ed4d) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0003ed4d) list_setting_pane_g

0x5eb1,	// (0x000355c2) list_setting_pane_t1_ParamLimits

0x5eb1,	// (0x000355c2) list_setting_pane_t1

0x5ec8,	// (0x000355d9) list_setting_pane_t2_ParamLimits

0x5ec8,	// (0x000355d9) list_setting_pane_t2

0x0002,

0xf641,	// (0x0003ed52) list_setting_pane_t_ParamLimits

0xf641,	// (0x0003ed52) list_setting_pane_t

0x5f07,	// (0x00035618) set_value_pane_cp_ParamLimits

0x5f07,	// (0x00035618) set_value_pane_cp

0x5f15,	// (0x00035626) list_setting_number_pane_g1_ParamLimits

0x5f15,	// (0x00035626) list_setting_number_pane_g1

0x5f21,	// (0x00035632) list_setting_number_pane_g2_ParamLimits

0x5f21,	// (0x00035632) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x0003ed59) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x0003ed59) list_setting_number_pane_g

0x5f2d,	// (0x0003563e) list_setting_number_pane_t1_ParamLimits

0x5f2d,	// (0x0003563e) list_setting_number_pane_t1

0x5f41,	// (0x00035652) list_setting_number_pane_t2_ParamLimits

0x5f41,	// (0x00035652) list_setting_number_pane_t2

0x5f58,	// (0x00035669) list_setting_number_pane_t3_ParamLimits

0x5f58,	// (0x00035669) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x0003ed5e) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x0003ed5e) list_setting_number_pane_t

0x5f07,	// (0x00035618) set_value_pane_ParamLimits

0x5f07,	// (0x00035618) set_value_pane

0x2893,	// (0x00031fa4) bg_set_opt_pane_ParamLimits

0x2893,	// (0x00031fa4) bg_set_opt_pane

0x3ed1,	// (0x000335e2) set_value_pane_t1

0x28b4,	// (0x00031fc5) slider_set_pane_cp3

0x28bd,	// (0x00031fce) volume_small_pane_cp

0x28c6,	// (0x00031fd7) list_form_gen_pane

0x28cf,	// (0x00031fe0) scroll_pane_cp8

0x5f9b,	// (0x000356ac) form_field_data_pane_ParamLimits

0x5f9b,	// (0x000356ac) form_field_data_pane

0x5fb9,	// (0x000356ca) form_field_data_wide_pane_ParamLimits

0x5fb9,	// (0x000356ca) form_field_data_wide_pane

0x3eef,	// (0x00033600) form_field_popup_pane_ParamLimits

0x3eef,	// (0x00033600) form_field_popup_pane

0x5fde,	// (0x000356ef) form_field_popup_wide_pane_ParamLimits

0x5fde,	// (0x000356ef) form_field_popup_wide_pane

0x3f11,	// (0x00033622) form_field_slider_pane_ParamLimits

0x3f11,	// (0x00033622) form_field_slider_pane

0x3f24,	// (0x00033635) form_field_slider_wide_pane_ParamLimits

0x3f24,	// (0x00033635) form_field_slider_wide_pane

0x28e0,	// (0x00031ff1) data_form_pane

0x6009,	// (0x0003571a) form_field_data_pane_t1

0x28ec,	// (0x00031ffd) input_focus_pane

0x3f37,	// (0x00033648) data_form_wide_pane

0x3f54,	// (0x00033665) form_field_data_wide_pane_t1

0x2667,	// (0x00031d78) input_focus_pane_cp6

0x6023,	// (0x00035734) form_field_popup_pane_t1

0x28ec,	// (0x00031ffd) input_focus_pane_cp7

0x291a,	// (0x0003202b) list_form_pane

0x3f7e,	// (0x0003368f) form_field_popup_wide_pane_t1

0x28ec,	// (0x00031ffd) input_focus_pane_cp8

0x2926,	// (0x00032037) list_form_wide_pane

0x6045,	// (0x00035756) form_field_slider_pane_t1_ParamLimits

0x6045,	// (0x00035756) form_field_slider_pane_t1

0x605d,	// (0x0003576e) form_field_slider_pane_t2_ParamLimits

0x605d,	// (0x0003576e) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x0003ed6e) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x0003ed6e) form_field_slider_pane_t

0x229c,	// (0x000319ad) input_focus_pane_cp9_ParamLimits

0x229c,	// (0x000319ad) input_focus_pane_cp9

0x6072,	// (0x00035783) slider_cont_pane_ParamLimits

0x6072,	// (0x00035783) slider_cont_pane

0x2932,	// (0x00032043) form_field_slider_wide_pane_t1_ParamLimits

0x2932,	// (0x00032043) form_field_slider_wide_pane_t1

0x3f93,	// (0x000336a4) form_field_slider_wide_pane_t2_ParamLimits

0x3f93,	// (0x000336a4) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x0003ed73) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x0003ed73) form_field_slider_wide_pane_t

0x229c,	// (0x000319ad) input_focus_pane_cp10_ParamLimits

0x229c,	// (0x000319ad) input_focus_pane_cp10

0x6086,	// (0x00035797) slider_cont_pane_cp1_ParamLimits

0x6086,	// (0x00035797) slider_cont_pane_cp1

0x609a,	// (0x000357ab) slider_form_pane_cp

0x2944,	// (0x00032055) input_focus_pane_g1

0x294c,	// (0x0003205d) input_focus_pane_g2

0x2954,	// (0x00032065) input_focus_pane_g3

0x295c,	// (0x0003206d) input_focus_pane_g4

0x2964,	// (0x00032075) input_focus_pane_g5

0x296c,	// (0x0003207d) input_focus_pane_g6

0x2974,	// (0x00032085) input_focus_pane_g7

0x297c,	// (0x0003208d) input_focus_pane_g8

0x2984,	// (0x00032095) input_focus_pane_g9

0x2244,	// (0x00031955) input_focus_pane_g10

0x0009,

0xf667,	// (0x0003ed78) input_focus_pane_g

0x9fae,	// (0x000396bf) wait_border_pane_g3_copy1

0x60a2,	// (0x000357b3) data_form_pane_t1

0x2244,	// (0x00031955) wait_anim_pane_g1_copy1

0x77d6,	// (0x00036ee7) data_form_wide_pane_t1

0x60bf,	// (0x000357d0) list_form_graphic_pane_cp_ParamLimits

0x60bf,	// (0x000357d0) list_form_graphic_pane_cp

0xaf05,	// (0x0003a616) slider_form_pane_g1

0xaf0e,	// (0x0003a61f) slider_form_pane_g2

0x0006,

0xf96a,	// (0x0003f07b) slider_form_pane_g

0x3fa5,	// (0x000336b6) list_form_graphic_pane_ParamLimits

0x3fa5,	// (0x000336b6) list_form_graphic_pane

0x3fb7,	// (0x000336c8) list_form_graphic_pane_g1

0x3fbf,	// (0x000336d0) list_form_graphic_pane_t1_ParamLimits

0x3fbf,	// (0x000336d0) list_form_graphic_pane_t1

0x22aa,	// (0x000319bb) list_highlight_pane_cp5_ParamLimits

0x22aa,	// (0x000319bb) list_highlight_pane_cp5

0x60d4,	// (0x000357e5) find_pane_g1

0x298c,	// (0x0003209d) input_find_pane

0x60dd,	// (0x000357ee) input_find_pane_g1_ParamLimits

0x60dd,	// (0x000357ee) input_find_pane_g1

0x60e9,	// (0x000357fa) input_find_pane_t1_ParamLimits

0x60e9,	// (0x000357fa) input_find_pane_t1

0x60fe,	// (0x0003580f) input_find_pane_t2_ParamLimits

0x60fe,	// (0x0003580f) input_find_pane_t2

0x0001,

0xf67c,	// (0x0003ed8d) input_find_pane_t_ParamLimits

0xf67c,	// (0x0003ed8d) input_find_pane_t

0x2995,	// (0x000320a6) input_focus_pane_cp5_ParamLimits

0x2995,	// (0x000320a6) input_focus_pane_cp5

0x29a8,	// (0x000320b9) bg_popup_window_pane_cp2_ParamLimits

0x29a8,	// (0x000320b9) bg_popup_window_pane_cp2

0x29b5,	// (0x000320c6) listscroll_menu_pane_ParamLimits

0x29b5,	// (0x000320c6) listscroll_menu_pane

0x611f,	// (0x00035830) popup_submenu_window_ParamLimits

0x611f,	// (0x00035830) popup_submenu_window

0x29c1,	// (0x000320d2) find_popup_pane_g1

0x29c9,	// (0x000320da) input_popup_find_pane_cp

0x29d3,	// (0x000320e4) input_focus_pane_cp4_ParamLimits

0x29d3,	// (0x000320e4) input_focus_pane_cp4

0x29e1,	// (0x000320f2) input_popup_find_pane_t1_ParamLimits

0x29e1,	// (0x000320f2) input_popup_find_pane_t1

0x224e,	// (0x0003195f) bg_popup_sub_pane_cp

0x2a0f,	// (0x00032120) listscroll_popup_sub_pane

0x2a17,	// (0x00032128) list_submenu_pane_ParamLimits

0x2a17,	// (0x00032128) list_submenu_pane

0x2a28,	// (0x00032139) scroll_pane_cp4

0x2a30,	// (0x00032141) list_single_popup_submenu_pane_ParamLimits

0x2a30,	// (0x00032141) list_single_popup_submenu_pane

0x2a45,	// (0x00032156) list_single_popup_submenu_pane_g1

0x2a4d,	// (0x0003215e) list_single_popup_submenu_pane_t1_ParamLimits

0x2a4d,	// (0x0003215e) list_single_popup_submenu_pane_t1

0x22aa,	// (0x000319bb) bg_active_tab_pane_cp1_ParamLimits

0x22aa,	// (0x000319bb) bg_active_tab_pane_cp1

0x615d,	// (0x0003586e) tabs_2_active_pane_g1

0x6165,	// (0x00035876) tabs_2_active_pane_t1

0x22aa,	// (0x000319bb) bg_passive_tab_pane_cp1_ParamLimits

0x22aa,	// (0x000319bb) bg_passive_tab_pane_cp1

0x615d,	// (0x0003586e) tabs_2_passive_pane_g1

0x6165,	// (0x00035876) tabs_2_passive_pane_t1

0x6177,	// (0x00035888) bg_active_tab_pane_cp4

0x6185,	// (0x00035896) tabs_2_long_active_pane_t1

0x6198,	// (0x000358a9) bg_passive_tab_pane_cp4

0x745a,	// (0x00036b6b) list_single_midp_graphic_pane_g4_ParamLimits

0x6177,	// (0x00035888) bg_active_tab_pane_cp5

0x61a4,	// (0x000358b5) tabs_3_long_active_pane_t1

0x6198,	// (0x000358a9) bg_passive_tab_pane_cp5

0x745a,	// (0x00036b6b) list_single_midp_graphic_pane_g4

0x22aa,	// (0x000319bb) bg_popup_window_pane_cp13_ParamLimits

0x22aa,	// (0x000319bb) bg_popup_window_pane_cp13

0x61bf,	// (0x000358d0) listscroll_popup_fast_pane_ParamLimits

0x61bf,	// (0x000358d0) listscroll_popup_fast_pane

0x61ce,	// (0x000358df) grid_popup_fast_pane_ParamLimits

0x61ce,	// (0x000358df) grid_popup_fast_pane

0x61e0,	// (0x000358f1) scroll_pane_cp9_ParamLimits

0x61e0,	// (0x000358f1) scroll_pane_cp9

0xc855,	// (0x0003bf66) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc855,	// (0x0003bf66) list_single_graphic_hl_pane_t1_cp2

0x6204,	// (0x00035915) input_focus_pane_cp20_ParamLimits

0x6204,	// (0x00035915) input_focus_pane_cp20

0x6212,	// (0x00035923) query_popup_data_pane_t1_ParamLimits

0x6212,	// (0x00035923) query_popup_data_pane_t1

0x6225,	// (0x00035936) query_popup_data_pane_t2_ParamLimits

0x6225,	// (0x00035936) query_popup_data_pane_t2

0x626b,	// (0x0003597c) query_popup_data_pane_t3_ParamLimits

0x626b,	// (0x0003597c) query_popup_data_pane_t3

0x62ac,	// (0x000359bd) query_popup_data_pane_t4_ParamLimits

0x62ac,	// (0x000359bd) query_popup_data_pane_t4

0x62e8,	// (0x000359f9) query_popup_data_pane_t5_ParamLimits

0x62e8,	// (0x000359f9) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x0003ed92) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x0003ed92) query_popup_data_pane_t

0x2944,	// (0x00032055) bg_set_opt_pane_g1

0x294c,	// (0x0003205d) bg_set_opt_pane_g2

0x2954,	// (0x00032065) bg_set_opt_pane_g3

0x295c,	// (0x0003206d) bg_set_opt_pane_g4

0x2964,	// (0x00032075) bg_set_opt_pane_g5

0x296c,	// (0x0003207d) bg_set_opt_pane_g6

0x2974,	// (0x00032085) bg_set_opt_pane_g7

0x297c,	// (0x0003208d) bg_set_opt_pane_g8

0x2984,	// (0x00032095) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x0003ed9d) bg_set_opt_pane_g

0x6a5c,	// (0x0003616d) control_top_pane_stacon_ParamLimits

0x6a5c,	// (0x0003616d) control_top_pane_stacon

0x6aaf,	// (0x000361c0) signal_pane_stacon_ParamLimits

0x6aaf,	// (0x000361c0) signal_pane_stacon

0x8dd3,	// (0x000384e4) stacon_top_pane_g1_ParamLimits

0x8dd3,	// (0x000384e4) stacon_top_pane_g1

0x6ad4,	// (0x000361e5) title_pane_stacon_ParamLimits

0x6ad4,	// (0x000361e5) title_pane_stacon

0x6afe,	// (0x0003620f) uni_indicator_pane_stacon_ParamLimits

0x6afe,	// (0x0003620f) uni_indicator_pane_stacon

0x6b13,	// (0x00036224) battery_pane_stacon_ParamLimits

0x6b13,	// (0x00036224) battery_pane_stacon

0x6b57,	// (0x00036268) control_bottom_pane_stacon_ParamLimits

0x6b57,	// (0x00036268) control_bottom_pane_stacon

0x6b7a,	// (0x0003628b) navi_pane_stacon_ParamLimits

0x6b7a,	// (0x0003628b) navi_pane_stacon

0x8df5,	// (0x00038506) stacon_bottom_pane_g1_ParamLimits

0x8df5,	// (0x00038506) stacon_bottom_pane_g1

0x631f,	// (0x00035a30) aid_levels_signal_lsc_ParamLimits

0x631f,	// (0x00035a30) aid_levels_signal_lsc

0x6336,	// (0x00035a47) signal_pane_stacon_g1_ParamLimits

0x6336,	// (0x00035a47) signal_pane_stacon_g1

0x634a,	// (0x00035a5b) signal_pane_stacon_g2_ParamLimits

0x634a,	// (0x00035a5b) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x0003edb0) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x0003edb0) signal_pane_stacon_g

0x638c,	// (0x00035a9d) title_pane_stacon_t1_ParamLimits

0x638c,	// (0x00035a9d) title_pane_stacon_t1

0x63b1,	// (0x00035ac2) uni_indicator_pane_stacon_g1

0x63bb,	// (0x00035acc) uni_indicator_pane_stacon_g2

0x63c5,	// (0x00035ad6) uni_indicator_pane_stacon_g3

0x63cf,	// (0x00035ae0) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x0003edbc) uni_indicator_pane_stacon_g

0x63d9,	// (0x00035aea) control_top_pane_stacon_g1

0x63e1,	// (0x00035af2) control_top_pane_stacon_t1_ParamLimits

0x63e1,	// (0x00035af2) control_top_pane_stacon_t1

0x6418,	// (0x00035b29) aid_levels_battery_lsc_ParamLimits

0x6418,	// (0x00035b29) aid_levels_battery_lsc

0x6430,	// (0x00035b41) battery_pane_stacon_g1_ParamLimits

0x6430,	// (0x00035b41) battery_pane_stacon_g1

0x6443,	// (0x00035b54) battery_pane_stacon_g2_ParamLimits

0x6443,	// (0x00035b54) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x0003edc5) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x0003edc5) battery_pane_stacon_g

0x6481,	// (0x00035b92) navi_icon_pane_stacon

0x6495,	// (0x00035ba6) navi_navi_pane_stacon

0x6481,	// (0x00035b92) navi_text_pane_stacon

0x63d9,	// (0x00035aea) control_bottom_pane_stacon_g1

0x64ab,	// (0x00035bbc) control_bottom_pane_stacon_t1_ParamLimits

0x64ab,	// (0x00035bbc) control_bottom_pane_stacon_t1

0x64fc,	// (0x00035c0d) grid_app_pane_ParamLimits

0x64fc,	// (0x00035c0d) grid_app_pane

0x651e,	// (0x00035c2f) scroll_pane_cp15_ParamLimits

0x651e,	// (0x00035c2f) scroll_pane_cp15

0x6531,	// (0x00035c42) cell_app_pane_ParamLimits

0x6531,	// (0x00035c42) cell_app_pane

0x655d,	// (0x00035c6e) cell_app_pane_g1_ParamLimits

0x655d,	// (0x00035c6e) cell_app_pane_g1

0x6581,	// (0x00035c92) cell_app_pane_g2_ParamLimits

0x6581,	// (0x00035c92) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x0003edca) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x0003edca) cell_app_pane_g

0x658d,	// (0x00035c9e) cell_app_pane_t1_ParamLimits

0x658d,	// (0x00035c9e) cell_app_pane_t1

0x65a4,	// (0x00035cb5) grid_highlight_pane_ParamLimits

0x65a4,	// (0x00035cb5) grid_highlight_pane

0x2944,	// (0x00032055) cell_highlight_pane_g1

0x294c,	// (0x0003205d) cell_highlight_pane_g2

0x2954,	// (0x00032065) cell_highlight_pane_g3

0x295c,	// (0x0003206d) cell_highlight_pane_g4

0x2964,	// (0x00032075) cell_highlight_pane_g5

0x296c,	// (0x0003207d) cell_highlight_pane_g6

0x2974,	// (0x00032085) cell_highlight_pane_g7

0x297c,	// (0x0003208d) cell_highlight_pane_g8

0x2984,	// (0x00032095) cell_highlight_pane_g9

0x2244,	// (0x00031955) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x0003ed78) cell_highlight_pane_g

0x65c8,	// (0x00035cd9) bg_scroll_pane

0x65e7,	// (0x00035cf8) scroll_handle_pane

0x6638,	// (0x00035d49) scroll_bg_pane_g1

0x664d,	// (0x00035d5e) scroll_bg_pane_g2

0x6665,	// (0x00035d76) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x0003edcf) scroll_bg_pane_g

0x667a,	// (0x00035d8b) scroll_handle_focus_pane_ParamLimits

0x667a,	// (0x00035d8b) scroll_handle_focus_pane

0x6638,	// (0x00035d49) scroll_handle_pane_g1

0x6687,	// (0x00035d98) scroll_handle_pane_g2

0x6665,	// (0x00035d76) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x0003edd6) scroll_handle_pane_g

0x29d3,	// (0x000320e4) bg_popup_sub_pane_cp21_ParamLimits

0x29d3,	// (0x000320e4) bg_popup_sub_pane_cp21

0x669b,	// (0x00035dac) popup_fep_japan_predictive_window_t1_ParamLimits

0x669b,	// (0x00035dac) popup_fep_japan_predictive_window_t1

0x66b2,	// (0x00035dc3) popup_fep_japan_predictive_window_t2_ParamLimits

0x66b2,	// (0x00035dc3) popup_fep_japan_predictive_window_t2

0x66e5,	// (0x00035df6) popup_fep_japan_predictive_window_t3_ParamLimits

0x66e5,	// (0x00035df6) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x0003eddd) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x0003eddd) popup_fep_japan_predictive_window_t

0x224e,	// (0x0003195f) bg_popup_sub_pane_cp23

0x671c,	// (0x00035e2d) listscroll_japin_cand_pane

0x6724,	// (0x00035e35) popup_fep_japan_candidate_window_t1

0x6732,	// (0x00035e43) candidate_pane_ParamLimits

0x6732,	// (0x00035e43) candidate_pane

0x6744,	// (0x00035e55) scroll_pane_cp30

0x674e,	// (0x00035e5f) list_single_popup_jap_candidate_pane_ParamLimits

0x674e,	// (0x00035e5f) list_single_popup_jap_candidate_pane

0x224e,	// (0x0003195f) list_highlight_pane_cp30

0x6762,	// (0x00035e73) list_single_popup_jap_candidate_pane_t1

0x6771,	// (0x00035e82) level_1_signal

0x677e,	// (0x00035e8f) level_2_signal

0x678b,	// (0x00035e9c) level_3_signal

0x6798,	// (0x00035ea9) level_4_signal

0x67a5,	// (0x00035eb6) level_5_signal

0x67b2,	// (0x00035ec3) level_6_signal

0x67bf,	// (0x00035ed0) level_7_signal

0x6771,	// (0x00035e82) level_1_battery

0x677e,	// (0x00035e8f) level_2_battery

0x678b,	// (0x00035e9c) level_3_battery

0x6798,	// (0x00035ea9) level_4_battery

0x67a5,	// (0x00035eb6) level_5_battery

0x67b2,	// (0x00035ec3) level_6_battery

0x67bf,	// (0x00035ed0) level_7_battery

0x6803,	// (0x00035f14) list_menu_pane_ParamLimits

0x6803,	// (0x00035f14) list_menu_pane

0x6819,	// (0x00035f2a) scroll_pane_cp25_ParamLimits

0x6819,	// (0x00035f2a) scroll_pane_cp25

0x6832,	// (0x00035f43) list_double2_graphic_pane_cp2_ParamLimits

0x6832,	// (0x00035f43) list_double2_graphic_pane_cp2

0x6832,	// (0x00035f43) list_double2_large_graphic_pane_cp2_ParamLimits

0x6832,	// (0x00035f43) list_double2_large_graphic_pane_cp2

0x6832,	// (0x00035f43) list_double2_pane_cp2_ParamLimits

0x6832,	// (0x00035f43) list_double2_pane_cp2

0x6832,	// (0x00035f43) list_double_graphic_pane_cp2_ParamLimits

0x6832,	// (0x00035f43) list_double_graphic_pane_cp2

0x6832,	// (0x00035f43) list_double_large_graphic_pane_cp2_ParamLimits

0x6832,	// (0x00035f43) list_double_large_graphic_pane_cp2

0x6832,	// (0x00035f43) list_double_number_pane_cp2_ParamLimits

0x6832,	// (0x00035f43) list_double_number_pane_cp2

0x6832,	// (0x00035f43) list_double_pane_cp2_ParamLimits

0x6832,	// (0x00035f43) list_double_pane_cp2

0x6858,	// (0x00035f69) list_single_2graphic_pane_cp2_ParamLimits

0x6858,	// (0x00035f69) list_single_2graphic_pane_cp2

0x6858,	// (0x00035f69) list_single_graphic_heading_pane_cp2_ParamLimits

0x6858,	// (0x00035f69) list_single_graphic_heading_pane_cp2

0x6858,	// (0x00035f69) list_single_graphic_pane_cp2_ParamLimits

0x6858,	// (0x00035f69) list_single_graphic_pane_cp2

0x6858,	// (0x00035f69) list_single_heading_pane_cp2_ParamLimits

0x6858,	// (0x00035f69) list_single_heading_pane_cp2

0x6875,	// (0x00035f86) list_single_large_graphic_pane_cp2_ParamLimits

0x6875,	// (0x00035f86) list_single_large_graphic_pane_cp2

0x6858,	// (0x00035f69) list_single_number_heading_pane_cp2_ParamLimits

0x6858,	// (0x00035f69) list_single_number_heading_pane_cp2

0x6858,	// (0x00035f69) list_single_number_pane_cp2_ParamLimits

0x6858,	// (0x00035f69) list_single_number_pane_cp2

0x6885,	// (0x00035f96) list_single_pane_cp2_ParamLimits

0x6885,	// (0x00035f96) list_single_pane_cp2

0x695b,	// (0x0003606c) bg_popup_sub_pane_cp22

0x6980,	// (0x00036091) popup_side_volume_key_window_g1

0x69aa,	// (0x000360bb) popup_side_volume_key_window_t1

0x69c8,	// (0x000360d9) volume_small_pane_cp1

0x229c,	// (0x000319ad) bg_popup_sub_pane_cp24_ParamLimits

0x229c,	// (0x000319ad) bg_popup_sub_pane_cp24

0x8c30,	// (0x00038341) fep_china_uni_candidate_pane_ParamLimits

0x8c30,	// (0x00038341) fep_china_uni_candidate_pane

0x8c44,	// (0x00038355) fep_china_uni_entry_pane

0x8c54,	// (0x00038365) popup_fep_china_uni_window_g1

0x8c70,	// (0x00038381) fep_china_uni_entry_pane_g1

0x8c7a,	// (0x0003838b) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x0003ee0e) fep_china_uni_entry_pane_g

0x8c84,	// (0x00038395) fep_entry_item_pane

0x8c8e,	// (0x0003839f) fep_candidate_item_pane

0x8c96,	// (0x000383a7) fep_china_uni_candidate_pane_g1

0x8ca0,	// (0x000383b1) fep_china_uni_candidate_pane_g2

0x8ca8,	// (0x000383b9) fep_china_uni_candidate_pane_g3

0x8cb0,	// (0x000383c1) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x0003ee13) fep_china_uni_candidate_pane_g

0x2244,	// (0x00031955) fep_entry_item_pane_g1

0x8cba,	// (0x000383cb) fep_entry_item_pane_t1_ParamLimits

0x8cba,	// (0x000383cb) fep_entry_item_pane_t1

0x8cd0,	// (0x000383e1) fep_candidate_item_pane_t1_ParamLimits

0x8cd0,	// (0x000383e1) fep_candidate_item_pane_t1

0x8ce5,	// (0x000383f6) fep_candidate_item_pane_t2_ParamLimits

0x8ce5,	// (0x000383f6) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x0003ee1c) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x0003ee1c) fep_candidate_item_pane_t

0x22aa,	// (0x000319bb) list_highlight_pane_cp31_ParamLimits

0x22aa,	// (0x000319bb) list_highlight_pane_cp31

0x8cf7,	// (0x00038408) level_1_signal_lsc

0x8d00,	// (0x00038411) level_2_signal_lsc

0x8d09,	// (0x0003841a) level_3_signal_lsc

0x8d12,	// (0x00038423) level_4_signal_lsc

0x8d1b,	// (0x0003842c) level_5_signal_lsc

0x8d24,	// (0x00038435) level_6_signal_lsc

0x8d2d,	// (0x0003843e) level_7_signal_lsc

0x8d2d,	// (0x0003843e) level_1_battery_lsc

0x8d36,	// (0x00038447) level_2_battery_lsc

0x8d3f,	// (0x00038450) level_3_battery_lsc

0x8d48,	// (0x00038459) level_4_battery_lsc

0x8d51,	// (0x00038462) level_5_battery_lsc

0x8d5a,	// (0x0003846b) level_6_battery_lsc

0x8cf7,	// (0x00038408) level_7_battery_lsc

0x8d63,	// (0x00038474) scroll_handle_focus_pane_g1

0x8d6c,	// (0x0003847d) scroll_handle_focus_pane_g2

0x8d75,	// (0x00038486) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x0003ee21) scroll_handle_focus_pane_g

0x69d0,	// (0x000360e1) list_single_2graphic_pane_g1_ParamLimits

0x69d0,	// (0x000360e1) list_single_2graphic_pane_g1

0x5bd3,	// (0x000352e4) list_single_2graphic_pane_g2_ParamLimits

0x5bd3,	// (0x000352e4) list_single_2graphic_pane_g2

0x5b59,	// (0x0003526a) list_single_2graphic_pane_g3_ParamLimits

0x5b59,	// (0x0003526a) list_single_2graphic_pane_g3

0x69dc,	// (0x000360ed) list_single_2graphic_pane_g4_ParamLimits

0x69dc,	// (0x000360ed) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x0003ee28) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x0003ee28) list_single_2graphic_pane_g

0x69e8,	// (0x000360f9) list_single_2graphic_pane_t1_ParamLimits

0x69e8,	// (0x000360f9) list_single_2graphic_pane_t1

0x6a16,	// (0x00036127) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6a16,	// (0x00036127) list_double2_graphic_large_graphic_pane_g1

0x5c6c,	// (0x0003537d) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5c6c,	// (0x0003537d) list_double2_graphic_large_graphic_pane_g2

0x5c7d,	// (0x0003538e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5c7d,	// (0x0003538e) list_double2_graphic_large_graphic_pane_g3

0x6a28,	// (0x00036139) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6a28,	// (0x00036139) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x0003ee31) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x0003ee31) list_double2_graphic_large_graphic_pane_g

0x6a34,	// (0x00036145) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x6a34,	// (0x00036145) list_double2_graphic_large_graphic_pane_t1

0x6a4a,	// (0x0003615b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x6a4a,	// (0x0003615b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x0003ee3a) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x0003ee3a) list_double2_graphic_large_graphic_pane_t

0x8eb8,	// (0x000385c9) popup_fast_swap_window_ParamLimits

0x8eb8,	// (0x000385c9) popup_fast_swap_window

0x8ed6,	// (0x000385e7) popup_side_volume_key_window

0x8ef4,	// (0x00038605) stacon_top_pane

0x8efe,	// (0x0003860f) status_pane_ParamLimits

0x8efe,	// (0x0003860f) status_pane

0x8f0c,	// (0x0003861d) status_small_pane

0x224e,	// (0x0003195f) control_pane

0x224e,	// (0x0003195f) stacon_bottom_pane

0x28cf,	// (0x00031fe0) scroll_pane_cp121

0x28c6,	// (0x00031fd7) set_content_pane

0x8d7e,	// (0x0003848f) bg_active_tab_pane_g1_cp1

0x8d87,	// (0x00038498) bg_active_tab_pane_g2_cp1

0x8d90,	// (0x000384a1) bg_active_tab_pane_g3_cp1

0x8d7e,	// (0x0003848f) bg_passive_tab_pane_g1_cp1

0x8d87,	// (0x00038498) bg_passive_tab_pane_g2_cp1

0x8d90,	// (0x000384a1) bg_passive_tab_pane_g3_cp1

0x8d99,	// (0x000384aa) bg_active_tab_pane_g1_cp2

0x8d87,	// (0x00038498) bg_active_tab_pane_g2_cp2

0x8da2,	// (0x000384b3) bg_active_tab_pane_g3_cp2

0x8d99,	// (0x000384aa) bg_passive_tab_pane_g1_cp2

0x8d87,	// (0x00038498) bg_passive_tab_pane_g2_cp2

0x8da2,	// (0x000384b3) bg_passive_tab_pane_g3_cp2

0x8dab,	// (0x000384bc) bg_active_tab_pane_g1_cp3

0x8d87,	// (0x00038498) bg_active_tab_pane_g2_cp3

0x8db4,	// (0x000384c5) bg_active_tab_pane_g3_cp3

0x8dab,	// (0x000384bc) bg_passive_tab_pane_g1_cp3

0x8d87,	// (0x00038498) bg_passive_tab_pane_g2_cp3

0x8db4,	// (0x000384c5) bg_passive_tab_pane_g3_cp3

0x8dbd,	// (0x000384ce) bg_active_tab_pane_g1_cp4

0x8d87,	// (0x00038498) bg_active_tab_pane_g2_cp4

0x8dc8,	// (0x000384d9) bg_active_tab_pane_g3_cp4

0x8dbd,	// (0x000384ce) bg_passive_tab_pane_g1_cp4

0x8d87,	// (0x00038498) bg_passive_tab_pane_g2_cp4

0x8dc8,	// (0x000384d9) bg_passive_tab_pane_g3_cp4

0x8e11,	// (0x00038522) bg_active_tab_pane_g1_cp5

0x8d87,	// (0x00038498) bg_active_tab_pane_g2_cp5

0x8e1a,	// (0x0003852b) bg_active_tab_pane_g3_cp5

0x8e11,	// (0x00038522) bg_passive_tab_pane_g1_cp5

0x8d87,	// (0x00038498) bg_passive_tab_pane_g2_cp5

0x8e1a,	// (0x0003852b) bg_passive_tab_pane_g3_cp5

0x8e23,	// (0x00038534) list_set_graphic_pane_ParamLimits

0x8e23,	// (0x00038534) list_set_graphic_pane

0x224e,	// (0x0003195f) bg_set_opt_pane_cp4

0x8e39,	// (0x0003854a) list_set_graphic_pane_g1_ParamLimits

0x8e39,	// (0x0003854a) list_set_graphic_pane_g1

0x8e45,	// (0x00038556) list_set_graphic_pane_g2_ParamLimits

0x8e45,	// (0x00038556) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x0003ee3f) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x0003ee3f) list_set_graphic_pane_g

0x0009,

0xfaaa,	// (0x0003f1bb) volume_small_pane_cp_g

0x8e69,	// (0x0003857a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8e69,	// (0x0003857a) list_double2_large_graphic_pane_g1_cp2

0x8e77,	// (0x00038588) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8e77,	// (0x00038588) list_double2_large_graphic_pane_g2_cp2

0x8e88,	// (0x00038599) list_double2_large_graphic_pane_g3_cp2

0x8e90,	// (0x000385a1) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8e90,	// (0x000385a1) list_double2_large_graphic_pane_t1_cp2

0x8ea6,	// (0x000385b7) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8ea6,	// (0x000385b7) list_double2_large_graphic_pane_t2_cp2

0xaa92,	// (0x0003a1a3) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaa92,	// (0x0003a1a3) list_double_large_graphic_pane_g1_cp2

0xaaa5,	// (0x0003a1b6) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaaa5,	// (0x0003a1b6) list_double_large_graphic_pane_g2_cp2

0x9027,	// (0x00038738) list_double_large_graphic_pane_g3_cp2

0xaab6,	// (0x0003a1c7) list_double_large_graphic_pane_g4_cp

0xaabe,	// (0x0003a1cf) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xaabe,	// (0x0003a1cf) list_double_large_graphic_pane_t1_cp2

0xaad5,	// (0x0003a1e6) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xaad5,	// (0x0003a1e6) list_double_large_graphic_pane_t2_cp2

0x8f17,	// (0x00038628) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8f17,	// (0x00038628) list_double2_graphic_pane_g1_cp2

0x8f25,	// (0x00038636) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8f25,	// (0x00038636) list_double2_graphic_pane_g2_cp2

0x8f36,	// (0x00038647) list_double2_graphic_pane_g3_cp2

0x8f40,	// (0x00038651) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8f40,	// (0x00038651) list_double2_graphic_pane_t1_cp2

0x8f56,	// (0x00038667) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8f56,	// (0x00038667) list_double2_graphic_pane_t2_cp2

0x8f68,	// (0x00038679) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8f68,	// (0x00038679) list_single_number_heading_pane_g1_cp2

0x8f74,	// (0x00038685) list_single_number_heading_pane_g2_cp2

0x8f7c,	// (0x0003868d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8f7c,	// (0x0003868d) list_single_number_heading_pane_t1_cp2

0x8f92,	// (0x000386a3) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8f92,	// (0x000386a3) list_single_number_heading_pane_t2_cp2

0x8fa6,	// (0x000386b7) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8fa6,	// (0x000386b7) list_single_number_heading_pane_t3_cp2

0x8f68,	// (0x00038679) list_single_heading_pane_g1_cp2_ParamLimits

0x8f68,	// (0x00038679) list_single_heading_pane_g1_cp2

0x8f74,	// (0x00038685) list_single_heading_pane_g2_cp2

0x8f7c,	// (0x0003868d) list_single_heading_pane_t1_cp2_ParamLimits

0x8f7c,	// (0x0003868d) list_single_heading_pane_t1_cp2

0xa88c,	// (0x00039f9d) list_single_heading_pane_t2_cp2_ParamLimits

0xa88c,	// (0x00039f9d) list_single_heading_pane_t2_cp2

0xa7d4,	// (0x00039ee5) list_double_graphic_pane_g1_cp2_ParamLimits

0xa7d4,	// (0x00039ee5) list_double_graphic_pane_g1_cp2

0xa7e0,	// (0x00039ef1) list_double_graphic_pane_g2_cp2_ParamLimits

0xa7e0,	// (0x00039ef1) list_double_graphic_pane_g2_cp2

0xa7ef,	// (0x00039f00) list_double_graphic_pane_g3_cp2

0xa7f7,	// (0x00039f08) list_double_graphic_pane_t1_cp2_ParamLimits

0xa7f7,	// (0x00039f08) list_double_graphic_pane_t1_cp2

0xa80d,	// (0x00039f1e) list_double_graphic_pane_t2_cp2_ParamLimits

0xa80d,	// (0x00039f1e) list_double_graphic_pane_t2_cp2

0x901b,	// (0x0003872c) list_double_number_pane_g1_cp2_ParamLimits

0x901b,	// (0x0003872c) list_double_number_pane_g1_cp2

0x9027,	// (0x00038738) list_double_number_pane_g2_cp2

0xa798,	// (0x00039ea9) list_double_number_pane_t1_cp2_ParamLimits

0xa798,	// (0x00039ea9) list_double_number_pane_t1_cp2

0xa7ac,	// (0x00039ebd) list_double_number_pane_t2_cp2_ParamLimits

0xa7ac,	// (0x00039ebd) list_double_number_pane_t2_cp2

0xa7c2,	// (0x00039ed3) list_double_number_pane_t3_cp2_ParamLimits

0xa7c2,	// (0x00039ed3) list_double_number_pane_t3_cp2

0xa681,	// (0x00039d92) list_single_graphic_pane_g1_cp2_ParamLimits

0xa681,	// (0x00039d92) list_single_graphic_pane_g1_cp2

0x908c,	// (0x0003879d) list_single_graphic_pane_g2_cp2_ParamLimits

0x908c,	// (0x0003879d) list_single_graphic_pane_g2_cp2

0x9098,	// (0x000387a9) list_single_graphic_pane_g3_cp2

0xa657,	// (0x00039d68) list_single_graphic_pane_t1_cp2_ParamLimits

0xa657,	// (0x00039d68) list_single_graphic_pane_t1_cp2

0x908c,	// (0x0003879d) list_single_number_pane_g1_cp2_ParamLimits

0x908c,	// (0x0003879d) list_single_number_pane_g1_cp2

0x9098,	// (0x000387a9) list_single_number_pane_g2_cp2

0xa657,	// (0x00039d68) list_single_number_pane_t1_cp2_ParamLimits

0xa657,	// (0x00039d68) list_single_number_pane_t1_cp2

0xa66d,	// (0x00039d7e) list_single_number_pane_t2_cp2_ParamLimits

0xa66d,	// (0x00039d7e) list_single_number_pane_t2_cp2

0x8e77,	// (0x00038588) list_double2_pane_g1_cp2_ParamLimits

0x8e77,	// (0x00038588) list_double2_pane_g1_cp2

0x8e88,	// (0x00038599) list_double2_pane_g2_cp2

0x8ff3,	// (0x00038704) list_double2_pane_t1_cp2_ParamLimits

0x8ff3,	// (0x00038704) list_double2_pane_t1_cp2

0x9009,	// (0x0003871a) list_double2_pane_t2_cp2_ParamLimits

0x9009,	// (0x0003871a) list_double2_pane_t2_cp2

0x901b,	// (0x0003872c) list_double_pane_g1_cp2_ParamLimits

0x901b,	// (0x0003872c) list_double_pane_g1_cp2

0x9027,	// (0x00038738) list_double_pane_g2_cp2

0x902f,	// (0x00038740) list_double_pane_t1_cp2_ParamLimits

0x902f,	// (0x00038740) list_double_pane_t1_cp2

0x9045,	// (0x00038756) list_double_pane_t2_cp2_ParamLimits

0x9045,	// (0x00038756) list_double_pane_t2_cp2

0x907c,	// (0x0003878d) list_single_pane_cp2_g3

0x908c,	// (0x0003879d) list_single_pane_g1_cp2_ParamLimits

0x908c,	// (0x0003879d) list_single_pane_g1_cp2

0x9098,	// (0x000387a9) list_single_pane_g2_cp2

0x90a0,	// (0x000387b1) list_single_pane_t1_cp2_ParamLimits

0x90a0,	// (0x000387b1) list_single_pane_t1_cp2

0x90b8,	// (0x000387c9) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x90b8,	// (0x000387c9) list_single_large_graphic_pane_g1_cp2

0x90c6,	// (0x000387d7) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x90c6,	// (0x000387d7) list_single_large_graphic_pane_g2_cp2

0x90d2,	// (0x000387e3) list_single_large_graphic_pane_g3_cp2

0x90da,	// (0x000387eb) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x90da,	// (0x000387eb) list_single_large_graphic_pane_g4_cp1

0x90f4,	// (0x00038805) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x90f4,	// (0x00038805) list_single_large_graphic_pane_t1_cp2

0xa621,	// (0x00039d32) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa621,	// (0x00039d32) list_single_graphic_heading_pane_g1_cp2

0xa5ee,	// (0x00039cff) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa5ee,	// (0x00039cff) list_single_graphic_heading_pane_g4_cp2

0x9098,	// (0x000387a9) list_single_graphic_heading_pane_g5_cp2

0xa62d,	// (0x00039d3e) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa62d,	// (0x00039d3e) list_single_graphic_heading_pane_t1_cp2

0xa643,	// (0x00039d54) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa643,	// (0x00039d54) list_single_graphic_heading_pane_t2_cp2

0xa5e2,	// (0x00039cf3) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa5e2,	// (0x00039cf3) list_single_2graphic_pane_g1_cp2

0xa5ee,	// (0x00039cff) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa5ee,	// (0x00039cff) list_single_2graphic_pane_g2_cp2

0x9098,	// (0x000387a9) list_single_2graphic_pane_g3_cp2

0xa5ff,	// (0x00039d10) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa5ff,	// (0x00039d10) list_single_2graphic_pane_g4_cp2

0xa60b,	// (0x00039d1c) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa60b,	// (0x00039d1c) list_single_2graphic_pane_t1_cp2

0x2244,	// (0x00031955) list_highlight_pane_g10_cp1

0xa1ba,	// (0x000398cb) list_highlight_pane_g1_cp1

0xa1c2,	// (0x000398d3) list_highlight_pane_g2_cp1

0xa1ca,	// (0x000398db) list_highlight_pane_g3_cp1

0xa1d2,	// (0x000398e3) list_highlight_pane_g4_cp1

0xa1da,	// (0x000398eb) list_highlight_pane_g5_cp1

0xa1e2,	// (0x000398f3) list_highlight_pane_g6_cp1

0xa1ea,	// (0x000398fb) list_highlight_pane_g7_cp1

0xa1f2,	// (0x00039903) list_highlight_pane_g8_cp1

0xa1fa,	// (0x0003990b) list_highlight_pane_g9_cp1

0xa0da,	// (0x000397eb) form_field_slider_pane_t3

0xa0e8,	// (0x000397f9) form_field_slider_pane_t4

0xa0f6,	// (0x00039807) slider_form_pane_ParamLimits

0xa0f6,	// (0x00039807) slider_form_pane

0x224e,	// (0x0003195f) control_abbreviations

0x224e,	// (0x0003195f) control_conventions

0x224e,	// (0x0003195f) control_definitions

0x224e,	// (0x0003195f) format_table_attribute

0xa8e2,	// (0x00039ff3) bg_popup_preview_window_pane_g9

0x224e,	// (0x0003195f) format_table_data2

0x224e,	// (0x0003195f) format_table_data3

0x224e,	// (0x0003195f) format_table_data_example

0x0008,

0x224e,	// (0x0003195f) intro_purpose

0xf8ca,	// (0x0003efdb) bg_popup_preview_window_pane_g

0x224e,	// (0x0003195f) texts_category

0x224e,	// (0x0003195f) texts_graphics

0x910a,	// (0x0003881b) text_digital

0x9119,	// (0x0003882a) text_primary

0x9128,	// (0x00038839) text_primary_small

0x9137,	// (0x00038848) text_secondary

0x9146,	// (0x00038857) text_title

0xb026,	// (0x0003a737) bg_passive_tab_pane_g1_cp3_srt

0x8d87,	// (0x00038498) bg_passive_tab_pane_g2_cp3_srt

0xb02f,	// (0x0003a740) bg_passive_tab_pane_g3_cp3_srt

0x22aa,	// (0x000319bb) bg_active_tab_pane_cp3_srt_ParamLimits

0x22aa,	// (0x000319bb) bg_active_tab_pane_cp3_srt

0xb038,	// (0x0003a749) tabs_4_active_pane_srt_g1

0xb040,	// (0x0003a751) tabs_4_active_pane_srt_t1_ParamLimits

0xb040,	// (0x0003a751) tabs_4_active_pane_srt_t1

0xb026,	// (0x0003a737) bg_active_tab_pane_g1_cp3_copy1

0x8d87,	// (0x00038498) bg_active_tab_pane_g2_cp3_copy1

0xb02f,	// (0x0003a740) bg_active_tab_pane_g3_cp3_copy1

0x22aa,	// (0x000319bb) tabs_2_long_active_pane_srt_ParamLimits

0x22aa,	// (0x000319bb) tabs_2_long_active_pane_srt

0x22aa,	// (0x000319bb) tabs_2_long_passive_pane_srt_ParamLimits

0x22aa,	// (0x000319bb) tabs_2_long_passive_pane_srt

0x6198,	// (0x000358a9) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6198,	// (0x000358a9) bg_passive_tab_pane_cp4_srt

0xad1c,	// (0x0003a42d) bg_passive_tab_pane_g1_cp4_srt

0x8d87,	// (0x00038498) bg_passive_tab_pane_g2_cp4_srt

0xad25,	// (0x0003a436) bg_passive_tab_pane_g3_cp4_srt

0x6177,	// (0x00035888) bg_active_tab_pane_cp4_srt_ParamLimits

0x6177,	// (0x00035888) bg_active_tab_pane_cp4_srt

0xad2e,	// (0x0003a43f) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad2e,	// (0x0003a43f) tabs_2_long_active_pane_srt_t1

0xad1c,	// (0x0003a42d) bg_active_tab_pane_g1_cp4_srt

0x8d87,	// (0x00038498) bg_active_tab_pane_g2_cp4_srt

0xad25,	// (0x0003a436) bg_active_tab_pane_g3_cp4_srt

0x229c,	// (0x000319ad) tabs_3_long_active_pane_srt_ParamLimits

0x229c,	// (0x000319ad) tabs_3_long_active_pane_srt

0x229c,	// (0x000319ad) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x229c,	// (0x000319ad) tabs_3_long_passive_pane_cp_srt

0x229c,	// (0x000319ad) tabs_3_long_passive_pane_srt_ParamLimits

0x229c,	// (0x000319ad) tabs_3_long_passive_pane_srt

0x6198,	// (0x000358a9) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6198,	// (0x000358a9) bg_passive_tab_pane_cp5_srt

0x8e11,	// (0x00038522) bg_passive_tab_pane_g1_cp5_srt

0x8d87,	// (0x00038498) bg_passive_tab_pane_g2_cp5_srt

0x8e1a,	// (0x0003852b) bg_passive_tab_pane_g3_cp5_srt

0x6177,	// (0x00035888) bg_active_tab_pane_cp5_srt_ParamLimits

0x6177,	// (0x00035888) bg_active_tab_pane_cp5_srt

0xad0a,	// (0x0003a41b) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad0a,	// (0x0003a41b) tabs_3_long_active_pane_srt_t1

0x8e11,	// (0x00038522) bg_active_tab_pane_g1_cp5_srt

0x8d87,	// (0x00038498) bg_active_tab_pane_g2_cp5_srt

0x8e1a,	// (0x0003852b) bg_active_tab_pane_g3_cp5_srt

0xacfc,	// (0x0003a40d) navi_text_pane_srt_t1

0xacf4,	// (0x0003a405) navi_icon_pane_srt_g1

0x931e,	// (0x00038a2f) midp_editing_number_pane_srt

0x9155,	// (0x00038866) midp_ticker_pane_srt

0x9326,	// (0x00038a37) midp_ticker_pane_srt_g1

0x932e,	// (0x00038a3f) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x0003ee5e) midp_ticker_pane_srt_g

0x9336,	// (0x00038a47) midp_ticker_pane_srt_t1

0xace5,	// (0x0003a3f6) midp_editing_number_pane_t1_copy1

0x915d,	// (0x0003886e) listscroll_midp_pane

0x915d,	// (0x0003886e) midp_form_pane

0x91cc,	// (0x000388dd) midp_info_popup_window_ParamLimits

0x91cc,	// (0x000388dd) midp_info_popup_window

0x29d3,	// (0x000320e4) bg_popup_sub_pane_cp50_ParamLimits

0x29d3,	// (0x000320e4) bg_popup_sub_pane_cp50

0x9ddc,	// (0x000394ed) listscroll_midp_info_pane_ParamLimits

0x9ddc,	// (0x000394ed) listscroll_midp_info_pane

0x9dbc,	// (0x000394cd) listscroll_form_midp_pane_ParamLimits

0x9dbc,	// (0x000394cd) listscroll_form_midp_pane

0x9dc8,	// (0x000394d9) scroll_bar_cp050

0x9d9c,	// (0x000394ad) list_midp_pane

0xbada,	// (0x0003b1eb) signal_pane_g2_cp

0x9cd6,	// (0x000393e7) listscroll_midp_info_pane_t1_ParamLimits

0x9cd6,	// (0x000393e7) listscroll_midp_info_pane_t1

0x9cee,	// (0x000393ff) listscroll_midp_info_pane_t2_ParamLimits

0x9cee,	// (0x000393ff) listscroll_midp_info_pane_t2

0x9d2c,	// (0x0003943d) listscroll_midp_info_pane_t3_ParamLimits

0x9d2c,	// (0x0003943d) listscroll_midp_info_pane_t3

0x9d66,	// (0x00039477) listscroll_midp_info_pane_t4_ParamLimits

0x9d66,	// (0x00039477) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x0003ef16) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x0003ef16) listscroll_midp_info_pane_t

0x2a28,	// (0x00032139) scroll_pane_cp21

0x9c70,	// (0x00039381) form_midp_field_choice_group_pane

0x9c79,	// (0x0003938a) form_midp_field_text_pane

0x9cbc,	// (0x000393cd) form_midp_field_time_pane

0x9cc4,	// (0x000393d5) form_midp_gauge_slider_pane

0x9ccd,	// (0x000393de) form_midp_gauge_wait_pane

0x224e,	// (0x0003195f) form_midp_image_pane

0x7546,	// (0x00036c57) list_single_midp_pane_ParamLimits

0x7546,	// (0x00036c57) list_single_midp_pane

0x9c34,	// (0x00039345) form_midp_field_text_pane_t1

0x9a26,	// (0x00039137) input_focus_pane_cp050

0x9c5f,	// (0x00039370) list_midp_form_text_pane

0x9c03,	// (0x00039314) form_midp_field_choice_group_pane_t1

0x9c11,	// (0x00039322) input_focus_pane_cp051

0x9c25,	// (0x00039336) list_midp_choice_pane

0x224e,	// (0x0003195f) status_idle_pane

0x9be7,	// (0x000392f8) form_midp_field_time_pane_t1

0x2244,	// (0x00031955) wait_anim_pane_g2_copy1

0x9bf5,	// (0x00039306) form_midp_field_time_pane_t2

0x0001,

0x927c,	// (0x0003898d) aid_navinavi_width_2_pane

0xf800,	// (0x0003ef11) form_midp_field_time_pane_t

0x224e,	// (0x0003195f) input_focus_pane_cp052

0x224e,	// (0x0003195f) bg_input_focus_pane_cp040

0x9ba7,	// (0x000392b8) form_midp_gauge_slider_pane_t1

0x9bb5,	// (0x000392c6) form_midp_gauge_slider_pane_t2

0x9bc3,	// (0x000392d4) form_midp_gauge_slider_pane_t3

0x9bd1,	// (0x000392e2) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x0003ef08) form_midp_gauge_slider_pane_t

0x9bdf,	// (0x000392f0) form_midp_slider_pane

0x22aa,	// (0x000319bb) bg_input_focus_pane_cp041_ParamLimits

0x22aa,	// (0x000319bb) bg_input_focus_pane_cp041

0x9b74,	// (0x00039285) form_midp_gauge_wait_pane_t1_ParamLimits

0x9b74,	// (0x00039285) form_midp_gauge_wait_pane_t1

0x9b86,	// (0x00039297) form_midp_gauge_wait_pane_t2_ParamLimits

0x9b86,	// (0x00039297) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x0003ef03) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x0003ef03) form_midp_gauge_wait_pane_t

0x9b98,	// (0x000392a9) form_midp_wait_pane_ParamLimits

0x9b98,	// (0x000392a9) form_midp_wait_pane

0x9b3c,	// (0x0003924d) form_midp_image_pane_g1

0x9b45,	// (0x00039256) form_midp_image_pane_t1

0x9b54,	// (0x00039265) form_midp_image_pane_t2

0x9b63,	// (0x00039274) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x0003eefc) form_midp_image_pane_t

0x9b33,	// (0x00039244) list_single_midp_pane_g1

0x4116,	// (0x00033827) list_single_midp_pane_t1

0x9b19,	// (0x0003922a) list_midp_form_item_pane_ParamLimits

0x9b19,	// (0x0003922a) list_midp_form_item_pane

0x9224,	// (0x00038935) list_midp_form_item_pane_t1

0x9233,	// (0x00038944) midp_ticker_pane_g1

0x923f,	// (0x00038950) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x0003ee44) midp_ticker_pane_g

0x924b,	// (0x0003895c) midp_ticker_pane_t1

0xaf52,	// (0x0003a663) midp_editing_number_pane_t1

0xaf30,	// (0x0003a641) midp_editing_number_pane

0xaf3f,	// (0x0003a650) midp_ticker_pane

0xacd5,	// (0x0003a3e6) ai_message_heading_pane

0x224e,	// (0x0003195f) bg_popup_window_pane_cp14

0xacdd,	// (0x0003a3ee) listscroll_ai_message_pane

0xac5b,	// (0x0003a36c) ai_message_heading_pane_g1_ParamLimits

0xac5b,	// (0x0003a36c) ai_message_heading_pane_g1

0xac67,	// (0x0003a378) ai_message_heading_pane_g2_ParamLimits

0xac67,	// (0x0003a378) ai_message_heading_pane_g2

0xac75,	// (0x0003a386) ai_message_heading_pane_g3_ParamLimits

0xac75,	// (0x0003a386) ai_message_heading_pane_g3

0xac81,	// (0x0003a392) ai_message_heading_pane_g4_ParamLimits

0xac81,	// (0x0003a392) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x0003f03d) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x0003f03d) ai_message_heading_pane_g

0xac8d,	// (0x0003a39e) ai_message_heading_pane_t1_ParamLimits

0xac8d,	// (0x0003a39e) ai_message_heading_pane_t1

0xaca7,	// (0x0003a3b8) ai_message_heading_pane_t2_ParamLimits

0xaca7,	// (0x0003a3b8) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x0003f046) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x0003f046) ai_message_heading_pane_t

0xacbb,	// (0x0003a3cc) bg_popup_heading_pane_cp1_ParamLimits

0xacbb,	// (0x0003a3cc) bg_popup_heading_pane_cp1

0xac49,	// (0x0003a35a) list_ai_message_pane_ParamLimits

0xac49,	// (0x0003a35a) list_ai_message_pane

0x2a28,	// (0x00032139) scroll_pane_cp10

0xabe5,	// (0x0003a2f6) list_ai_message_pane_g1

0xabed,	// (0x0003a2fe) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x0003f01a) list_ai_message_pane_g

0xabf5,	// (0x0003a306) list_ai_message_pane_t1_ParamLimits

0xabf5,	// (0x0003a306) list_ai_message_pane_t1

0xac0a,	// (0x0003a31b) list_ai_message_pane_t2_ParamLimits

0xac0a,	// (0x0003a31b) list_ai_message_pane_t2

0xac1f,	// (0x0003a330) list_ai_message_pane_t3_ParamLimits

0xac1f,	// (0x0003a330) list_ai_message_pane_t3

0xac34,	// (0x0003a345) list_ai_message_pane_t4_ParamLimits

0xac34,	// (0x0003a345) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x0003f01f) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x0003f01f) list_ai_message_pane_t

0xabce,	// (0x0003a2df) cell_ai_soft_ind_pane_ParamLimits

0xabce,	// (0x0003a2df) cell_ai_soft_ind_pane

0x925d,	// (0x0003896e) cell_ai_soft_ind_pane_g1_ParamLimits

0x925d,	// (0x0003896e) cell_ai_soft_ind_pane_g1

0x224e,	// (0x0003195f) grid_highlight_cp1

0x926a,	// (0x0003897b) text_secondary_cp56_ParamLimits

0x926a,	// (0x0003897b) text_secondary_cp56

0xaba3,	// (0x0003a2b4) example_general_pane_ParamLimits

0xaba3,	// (0x0003a2b4) example_general_pane

0xabaf,	// (0x0003a2c0) example_parent_pane_g1_ParamLimits

0xabaf,	// (0x0003a2c0) example_parent_pane_g1

0xabbb,	// (0x0003a2cc) example_parent_pane_t1_ParamLimits

0xabbb,	// (0x0003a2cc) example_parent_pane_t1

0x7195,	// (0x000368a6) popup_preview_text_window_ParamLimits

0x7195,	// (0x000368a6) popup_preview_text_window

0x9084,	// (0x00038795) list_single_pane_cp2_g4

0x24ab,	// (0x00031bbc) bg_popup_preview_window_pane_ParamLimits

0x24ab,	// (0x00031bbc) bg_popup_preview_window_pane

0xa8ec,	// (0x00039ffd) popup_preview_text_window_t1_ParamLimits

0xa8ec,	// (0x00039ffd) popup_preview_text_window_t1

0xa90a,	// (0x0003a01b) popup_preview_text_window_t2_ParamLimits

0xa90a,	// (0x0003a01b) popup_preview_text_window_t2

0xa953,	// (0x0003a064) popup_preview_text_window_t3_ParamLimits

0xa953,	// (0x0003a064) popup_preview_text_window_t3

0xa998,	// (0x0003a0a9) popup_preview_text_window_t4_ParamLimits

0xa998,	// (0x0003a0a9) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x0003efee) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x0003efee) popup_preview_text_window_t

0xaa16,	// (0x0003a127) scroll_pane_cp11

0x99b2,	// (0x000390c3) bg_popup_preview_window_pane_g1

0xa8a0,	// (0x00039fb1) bg_popup_preview_window_pane_g2

0xa8aa,	// (0x00039fbb) bg_popup_preview_window_pane_g3

0xa8b4,	// (0x00039fc5) bg_popup_preview_window_pane_g4

0xa8be,	// (0x00039fcf) bg_popup_preview_window_pane_g5

0xa8c8,	// (0x00039fd9) bg_popup_preview_window_pane_g6

0xa8d0,	// (0x00039fe1) bg_popup_preview_window_pane_g7

0xa8d8,	// (0x00039fe9) bg_popup_preview_window_pane_g8

0x53b7,	// (0x00034ac8) aid_popup_width_pane

0x7171,	// (0x00036882) popup_midp_note_alarm_window_ParamLimits

0x7171,	// (0x00036882) popup_midp_note_alarm_window

0x28e0,	// (0x00031ff1) data_form_pane_ParamLimits

0x5fff,	// (0x00035710) form_field_data_pane_g1

0x6009,	// (0x0003571a) form_field_data_pane_t1_ParamLimits

0x28ec,	// (0x00031ffd) input_focus_pane_ParamLimits

0x3f37,	// (0x00033648) data_form_wide_pane_ParamLimits

0x3f48,	// (0x00033659) form_field_data_wide_pane_g1

0x3f54,	// (0x00033665) form_field_data_wide_pane_t1_ParamLimits

0x2667,	// (0x00031d78) input_focus_pane_cp6_ParamLimits

0x614f,	// (0x00035860) input_popup_find_pane_g1_ParamLimits

0x614f,	// (0x00035860) input_popup_find_pane_g1

0x6454,	// (0x00035b65) aid_navi_side_left_pane

0x6469,	// (0x00035b7a) aid_navi_side_right_pane

0xa2b5,	// (0x000399c6) bg_popup_window_pane_cp30_ParamLimits

0xa2b5,	// (0x000399c6) bg_popup_window_pane_cp30

0xa32f,	// (0x00039a40) popup_midp_note_alarm_window_g1_ParamLimits

0xa32f,	// (0x00039a40) popup_midp_note_alarm_window_g1

0xa35f,	// (0x00039a70) popup_midp_note_alarm_window_t1_ParamLimits

0xa35f,	// (0x00039a70) popup_midp_note_alarm_window_t1

0xa400,	// (0x00039b11) popup_midp_note_alarm_window_t2_ParamLimits

0xa400,	// (0x00039b11) popup_midp_note_alarm_window_t2

0xa4ae,	// (0x00039bbf) popup_midp_note_alarm_window_t3_ParamLimits

0xa4ae,	// (0x00039bbf) popup_midp_note_alarm_window_t3

0xa4e0,	// (0x00039bf1) popup_midp_note_alarm_window_t4_ParamLimits

0xa4e0,	// (0x00039bf1) popup_midp_note_alarm_window_t4

0xa506,	// (0x00039c17) popup_midp_note_alarm_window_t5_ParamLimits

0xa506,	// (0x00039c17) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x0003ef8b) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x0003ef8b) popup_midp_note_alarm_window_t

0xa5b2,	// (0x00039cc3) wait_bar_pane_cp1_ParamLimits

0xa5b2,	// (0x00039cc3) wait_bar_pane_cp1

0x224e,	// (0x0003195f) wait_anim_pane_copy1

0x224e,	// (0x0003195f) wait_border_pane_copy1

0x9f9a,	// (0x000396ab) wait_border_pane_g1_copy1

0x3f6e,	// (0x0003367f) form_field_popup_pane_g1

0x6023,	// (0x00035734) form_field_popup_pane_t1_ParamLimits

0x28ec,	// (0x00031ffd) input_focus_pane_cp7_ParamLimits

0x291a,	// (0x0003202b) list_form_pane_ParamLimits

0x3f76,	// (0x00033687) form_field_popup_wide_pane_g1

0x3f7e,	// (0x0003368f) form_field_popup_wide_pane_t1_ParamLimits

0x28ec,	// (0x00031ffd) input_focus_pane_cp8_ParamLimits

0x2926,	// (0x00032037) list_form_wide_pane_ParamLimits

0xb0c1,	// (0x0003a7d2) aid_size_cell_graphic_pane

0x60a2,	// (0x000357b3) data_form_pane_t1_ParamLimits

0x77d6,	// (0x00036ee7) data_form_wide_pane_t1_ParamLimits

0x956b,	// (0x00038c7c) bg_status_flat_pane

0x57e6,	// (0x00034ef7) title_pane_t1_ParamLimits

0x2264,	// (0x00031975) title_pane_t2_ParamLimits

0x228a,	// (0x0003199b) title_pane_t3_ParamLimits

0xf532,	// (0x0003ec43) title_pane_t_ParamLimits

0x6771,	// (0x00035e82) level_1_signal_ParamLimits

0x677e,	// (0x00035e8f) level_2_signal_ParamLimits

0x678b,	// (0x00035e9c) level_3_signal_ParamLimits

0x6798,	// (0x00035ea9) level_4_signal_ParamLimits

0x67a5,	// (0x00035eb6) level_5_signal_ParamLimits

0x67b2,	// (0x00035ec3) level_6_signal_ParamLimits

0x67bf,	// (0x00035ed0) level_7_signal_ParamLimits

0x6771,	// (0x00035e82) level_1_battery_ParamLimits

0x677e,	// (0x00035e8f) level_2_battery_ParamLimits

0x678b,	// (0x00035e9c) level_3_battery_ParamLimits

0x6798,	// (0x00035ea9) level_4_battery_ParamLimits

0x67a5,	// (0x00035eb6) level_5_battery_ParamLimits

0x67b2,	// (0x00035ec3) level_6_battery_ParamLimits

0x67bf,	// (0x00035ed0) level_7_battery_ParamLimits

0xa1ba,	// (0x000398cb) bg_status_flat_pane_g1

0xa1c2,	// (0x000398d3) bg_status_flat_pane_g2

0xa1ca,	// (0x000398db) bg_status_flat_pane_g3

0xa1d2,	// (0x000398e3) bg_status_flat_pane_g4

0xa1da,	// (0x000398eb) bg_status_flat_pane_g5

0xa1e2,	// (0x000398f3) bg_status_flat_pane_g6

0xa1ea,	// (0x000398fb) bg_status_flat_pane_g7

0x5856,	// (0x00034f67) tabs_3_active_pane_t1_ParamLimits

0x5856,	// (0x00034f67) tabs_3_passive_pane_t1_ParamLimits

0x5870,	// (0x00034f81) tabs_4_active_pane_t1_ParamLimits

0x5870,	// (0x00034f81) tabs_4_1_passive_pane_t1_ParamLimits

0x6165,	// (0x00035876) tabs_2_active_pane_t1_ParamLimits

0x6165,	// (0x00035876) tabs_2_passive_pane_t1_ParamLimits

0x6177,	// (0x00035888) bg_active_tab_pane_cp4_ParamLimits

0x6185,	// (0x00035896) tabs_2_long_active_pane_t1_ParamLimits

0x6198,	// (0x000358a9) bg_passive_tab_pane_cp4_ParamLimits

0x748d,	// (0x00036b9e) list_single_midp_graphic_pane_t1_ParamLimits

0x6177,	// (0x00035888) bg_active_tab_pane_cp5_ParamLimits

0x61a4,	// (0x000358b5) tabs_3_long_active_pane_t1_ParamLimits

0x6198,	// (0x000358a9) bg_passive_tab_pane_cp5_ParamLimits

0x748d,	// (0x00036b9e) list_single_midp_graphic_pane_t1

0x956b,	// (0x00038c7c) bg_status_flat_pane_ParamLimits

0x9636,	// (0x00038d47) indicator_pane_cp2_ParamLimits

0x9636,	// (0x00038d47) indicator_pane_cp2

0x9779,	// (0x00038e8a) navi_pane_srt_ParamLimits

0x9779,	// (0x00038e8a) navi_pane_srt

0x979d,	// (0x00038eae) popup_clock_digital_analogue_window_cp1

0x22ee,	// (0x000319ff) indicator_pane_t1

0x9155,	// (0x00038866) copy_highlight_pane

0x9155,	// (0x00038866) cursor_graphics_pane

0x9155,	// (0x00038866) graphic_within_text_pane

0x9155,	// (0x00038866) link_highlight_pane

0xa9d9,	// (0x0003a0ea) popup_preview_text_window_t5_ParamLimits

0xa9d9,	// (0x0003a0ea) popup_preview_text_window_t5

0x9286,	// (0x00038997) cursor_digital_pane

0x9286,	// (0x00038997) cursor_primary_pane

0x9297,	// (0x000389a8) cursor_primary_small_pane

0x929f,	// (0x000389b0) cursor_secondary_pane

0x92a7,	// (0x000389b8) cursor_title_pane

0x9286,	// (0x00038997) link_highlight_digital_pane

0x928e,	// (0x0003899f) link_highlight_primary_pane

0x9297,	// (0x000389a8) link_highlight_primary_small_pane

0x929f,	// (0x000389b0) link_highlight_secondary_pane

0x92a7,	// (0x000389b8) link_highlight_title_pane

0x9286,	// (0x00038997) copy_highlight_digital_pane

0x9286,	// (0x00038997) copy_highlight_primary_pane

0x9297,	// (0x000389a8) copy_highlight_primary_small_pane

0x929f,	// (0x000389b0) copy_highlight_secondary_pane

0x92a7,	// (0x000389b8) copy_highlight_title_pane

0x929f,	// (0x000389b0) graphic_text_digital_pane

0xa258,	// (0x00039969) graphic_text_primary_pane

0xa261,	// (0x00039972) graphic_text_primary_small_pane

0x9297,	// (0x000389a8) graphic_text_secondary_pane

0x9286,	// (0x00038997) graphic_text_title_pane

0x92af,	// (0x000389c0) cursor_primary_pane_g1

0xa24a,	// (0x0003995b) cursor_text_primary_t1

0xa232,	// (0x00039943) cursor_primary_small_pane_g1

0xa23c,	// (0x0003994d) cursor_text_primary_small_t1

0xa21a,	// (0x0003992b) cursor_primary_small_pane_g1_copy1

0xa224,	// (0x00039935) cursor_text_primary_small_t1_copy1

0xa202,	// (0x00039913) cursor_text_title_t1

0xa210,	// (0x00039921) cursor_title_pane_g1

0x92af,	// (0x000389c0) cursor_digital_pane_g1

0x92b9,	// (0x000389ca) cursor_text_digital_t1

0x92c7,	// (0x000389d8) link_highlight_primary_pane_g1

0xa1ab,	// (0x000398bc) link_highlight_primary_pane_t1

0x92c7,	// (0x000389d8) link_highlight_primary_small_pane_g1

0x92cf,	// (0x000389e0) link_highlight_primary_small_pane_t1

0x92de,	// (0x000389ef) link_highlight_secondary_pane_g1

0x92e6,	// (0x000389f7) link_highlight_secondary_pane_t1

0xa11f,	// (0x00039830) link_highlight_title_pane_g1

0xa127,	// (0x00039838) link_highlight_title_pane_t1

0xa108,	// (0x00039819) link_highlight_digital_pane_g1

0xa110,	// (0x00039821) link_highlight_digital_pane_t1

0x9fd0,	// (0x000396e1) copy_highlight_primary_pane_g1

0x9fe7,	// (0x000396f8) copy_highlight_primary_pane_t1

0x9fd0,	// (0x000396e1) copy_highlight_primary_small_pane_g1

0x9fd8,	// (0x000396e9) copy_highlight_primary_small_pane_t1

0x92f5,	// (0x00038a06) copy_highlight_secondary_pane_g1

0x92fd,	// (0x00038a0e) copy_highlight_secondary_pane_t1

0x9fb9,	// (0x000396ca) copy_highlight_title_pane_g1

0x9fc1,	// (0x000396d2) copy_highlight_title_pane_t1

0x9fd0,	// (0x000396e1) copy_highlight_digital_pane_g1

0xb293,	// (0x0003a9a4) copy_highlight_digital_pane_t1

0xb1e7,	// (0x0003a8f8) graphic_text_primary_pane_g1

0xb277,	// (0x0003a988) graphic_text_primary_pane_t1

0xb285,	// (0x0003a996) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x0003f0ba) graphic_text_primary_pane_t

0xb253,	// (0x0003a964) graphic_text_primary_small_pane_g1

0xb25b,	// (0x0003a96c) graphic_text_primary_small_pane_t1

0xb269,	// (0x0003a97a) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x0003f0b5) graphic_text_primary_small_pane_t

0xb22f,	// (0x0003a940) graphic_text_secondary_pane_g1

0xb237,	// (0x0003a948) graphic_text_secondary_pane_t1

0xb245,	// (0x0003a956) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x0003f0b0) graphic_text_secondary_pane_t

0xb20b,	// (0x0003a91c) graphic_text_title_pane_g1

0xb213,	// (0x0003a924) graphic_text_title_pane_t1

0xb221,	// (0x0003a932) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x0003f0ab) graphic_text_title_pane_t

0xb1e7,	// (0x0003a8f8) graphic_text_digital_pane_g1

0xb1ef,	// (0x0003a900) graphic_text_digital_pane_t1

0xb1fd,	// (0x0003a90e) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x0003f0a6) graphic_text_digital_pane_t

0x22aa,	// (0x000319bb) navi_icon_pane_srt_ParamLimits

0x22aa,	// (0x000319bb) navi_icon_pane_srt

0x224e,	// (0x0003195f) navi_midp_pane_srt

0x224e,	// (0x0003195f) navi_navi_pane_srt

0x22aa,	// (0x000319bb) navi_text_pane_srt_ParamLimits

0x22aa,	// (0x000319bb) navi_text_pane_srt

0xb1b2,	// (0x0003a8c3) navi_navi_icon_text_pane_srt

0xb1ba,	// (0x0003a8cb) navi_navi_pane_srt_g1_ParamLimits

0xb1ba,	// (0x0003a8cb) navi_navi_pane_srt_g1

0xb1cc,	// (0x0003a8dd) navi_navi_pane_srt_g2_ParamLimits

0xb1cc,	// (0x0003a8dd) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x0003f0a1) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x0003f0a1) navi_navi_pane_srt_g

0xb1de,	// (0x0003a8ef) navi_navi_tabs_pane_srt

0xb1b2,	// (0x0003a8c3) navi_navi_text_pane_srt

0xb1b2,	// (0x0003a8c3) navi_navi_volume_pane_srt

0xb1a3,	// (0x0003a8b4) navi_navi_text_pane_srt_t1

0x7914,	// (0x00037025) navi_navi_volume_pane_srt_g1

0x791c,	// (0x0003702d) volume_small_pane_srt_ParamLimits

0x791c,	// (0x0003702d) volume_small_pane_srt

0x6b9d,	// (0x000362ae) volume_small_pane_srt_g1_ParamLimits

0x6b9d,	// (0x000362ae) volume_small_pane_srt_g1

0x6bad,	// (0x000362be) volume_small_pane_srt_g2_ParamLimits

0x6bad,	// (0x000362be) volume_small_pane_srt_g2

0x6bbe,	// (0x000362cf) volume_small_pane_srt_g3_ParamLimits

0x6bbe,	// (0x000362cf) volume_small_pane_srt_g3

0x6bcf,	// (0x000362e0) volume_small_pane_srt_g4_ParamLimits

0x6bcf,	// (0x000362e0) volume_small_pane_srt_g4

0x6be0,	// (0x000362f1) volume_small_pane_srt_g5_ParamLimits

0x6be0,	// (0x000362f1) volume_small_pane_srt_g5

0x6bf1,	// (0x00036302) volume_small_pane_srt_g6_ParamLimits

0x6bf1,	// (0x00036302) volume_small_pane_srt_g6

0x6c02,	// (0x00036313) volume_small_pane_srt_g7_ParamLimits

0x6c02,	// (0x00036313) volume_small_pane_srt_g7

0x6c13,	// (0x00036324) volume_small_pane_srt_g8_ParamLimits

0x6c13,	// (0x00036324) volume_small_pane_srt_g8

0x6c24,	// (0x00036335) volume_small_pane_srt_g9_ParamLimits

0x6c24,	// (0x00036335) volume_small_pane_srt_g9

0x6c35,	// (0x00036346) volume_small_pane_srt_g10_ParamLimits

0x6c35,	// (0x00036346) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0003ee49) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0003ee49) volume_small_pane_srt_g

0x2560,	// (0x00031c71) query_popup_data_pane_cp2

0xb189,	// (0x0003a89a) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb189,	// (0x0003a89a) navi_navi_icon_text_pane_srt_t1

0xa258,	// (0x00039969) navi_tabs_2_long_pane_srt

0xa258,	// (0x00039969) navi_tabs_2_pane_srt

0xa258,	// (0x00039969) navi_tabs_3_long_pane_srt

0xa258,	// (0x00039969) navi_tabs_3_pane_srt

0xa258,	// (0x00039969) navi_tabs_4_pane_srt

0x78f4,	// (0x00037005) tabs_2_active_pane_srt_ParamLimits

0x78f4,	// (0x00037005) tabs_2_active_pane_srt

0x7904,	// (0x00037015) tabs_2_passive_pane_srt_ParamLimits

0x7904,	// (0x00037015) tabs_2_passive_pane_srt

0x947c,	// (0x00038b8d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x947c,	// (0x00038b8d) bg_passive_tab_pane_cp1_srt

0xb155,	// (0x0003a866) bg_passive_tab_pane_g1_cp1_srt

0x8d87,	// (0x00038498) bg_passive_tab_pane_g2_cp1_srt

0xb15e,	// (0x0003a86f) bg_passive_tab_pane_g3_cp1_srt

0x22aa,	// (0x000319bb) bg_active_tab_pane_cp1_srt_ParamLimits

0x22aa,	// (0x000319bb) bg_active_tab_pane_cp1_srt

0xb167,	// (0x0003a878) tabs_2_active_pane_srt_g1

0xb16f,	// (0x0003a880) tabs_2_active_pane_srt_t1_ParamLimits

0xb16f,	// (0x0003a880) tabs_2_active_pane_srt_t1

0xb155,	// (0x0003a866) bg_active_tab_pane_g1_cp1_srt

0x8d87,	// (0x00038498) bg_active_tab_pane_g2_cp1_srt

0xb15e,	// (0x0003a86f) bg_active_tab_pane_g3_cp1_srt

0x78c1,	// (0x00036fd2) tabs_3_active_pane_srt_ParamLimits

0x78c1,	// (0x00036fd2) tabs_3_active_pane_srt

0x78d2,	// (0x00036fe3) tabs_3_passive_pane_cp_srt_ParamLimits

0x78d2,	// (0x00036fe3) tabs_3_passive_pane_cp_srt

0x78e3,	// (0x00036ff4) tabs_3_passive_pane_srt_ParamLimits

0x78e3,	// (0x00036ff4) tabs_3_passive_pane_srt

0x947c,	// (0x00038b8d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x947c,	// (0x00038b8d) bg_passive_tab_pane_cp2_srt

0x930c,	// (0x00038a1d) bg_passive_tab_pane_g1_cp2_srt

0x8d87,	// (0x00038498) bg_passive_tab_pane_g2_cp2_srt

0x9315,	// (0x00038a26) bg_passive_tab_pane_g3_cp2_srt

0x22aa,	// (0x000319bb) bg_active_tab_pane_cp2_srt_ParamLimits

0x22aa,	// (0x000319bb) bg_active_tab_pane_cp2_srt

0xb13b,	// (0x0003a84c) tabs_3_active_pane_srt_g1

0xb143,	// (0x0003a854) tabs_3_active_pane_srt_t1_ParamLimits

0xb143,	// (0x0003a854) tabs_3_active_pane_srt_t1

0x930c,	// (0x00038a1d) bg_active_tab_pane_g1_cp2_srt

0x8d87,	// (0x00038498) bg_active_tab_pane_g2_cp2_srt

0x9315,	// (0x00038a26) bg_active_tab_pane_g3_cp2_srt

0x7879,	// (0x00036f8a) tabs_4_active_pane_srt_ParamLimits

0x7879,	// (0x00036f8a) tabs_4_active_pane_srt

0x788b,	// (0x00036f9c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x788b,	// (0x00036f9c) tabs_4_passive_pane_cp2_srt

0x6db8,	// (0x000364c9) aid_size_cell_toolbar

0x6198,	// (0x000358a9) main_idle_act_pane_ParamLimits

0x6f97,	// (0x000366a8) popup_large_graphic_colour_window_ParamLimits

0x733e,	// (0x00036a4f) popup_toolbar_window_ParamLimits

0x733e,	// (0x00036a4f) popup_toolbar_window

0xaf78,	// (0x0003a689) list_single_graphic_2heading_pane_ParamLimits

0xaf78,	// (0x0003a689) list_single_graphic_2heading_pane

0x64e2,	// (0x00035bf3) aid_size_cell_apps_grid_lsc_pane

0x64f4,	// (0x00035c05) aid_size_cell_apps_grid_prt_pane

0x947c,	// (0x00038b8d) bg_wml_button_pane_cp1_ParamLimits

0x947c,	// (0x00038b8d) bg_wml_button_pane_cp1

0x9c34,	// (0x00039345) form_midp_field_text_pane_t1_ParamLimits

0x9a26,	// (0x00039137) input_focus_pane_cp050_ParamLimits

0x9c5f,	// (0x00039370) list_midp_form_text_pane_ParamLimits

0x9c11,	// (0x00039322) input_focus_pane_cp051_ParamLimits

0x9c25,	// (0x00039336) list_midp_choice_pane_ParamLimits

0x9adf,	// (0x000391f0) list_single_2graphic_pane_cp3_ParamLimits

0x9adf,	// (0x000391f0) list_single_2graphic_pane_cp3

0x9af5,	// (0x00039206) list_single_midp_graphic_pane_ParamLimits

0x9af5,	// (0x00039206) list_single_midp_graphic_pane

0x5323,	// (0x00034a34) list_single_graphic_2heading_pane_g1_ParamLimits

0x5323,	// (0x00034a34) list_single_graphic_2heading_pane_g1

0x532f,	// (0x00034a40) list_single_graphic_2heading_pane_g4_ParamLimits

0x532f,	// (0x00034a40) list_single_graphic_2heading_pane_g4

0x533b,	// (0x00034a4c) list_single_graphic_2heading_pane_g5_ParamLimits

0x533b,	// (0x00034a4c) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x0003ee9c) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x0003ee9c) list_single_graphic_2heading_pane_g

0x5347,	// (0x00034a58) list_single_graphic_2heading_pane_t1_ParamLimits

0x5347,	// (0x00034a58) list_single_graphic_2heading_pane_t1

0x535b,	// (0x00034a6c) list_single_graphic_2heading_pane_t2_ParamLimits

0x535b,	// (0x00034a6c) list_single_graphic_2heading_pane_t2

0x5377,	// (0x00034a88) list_single_graphic_2heading_pane_t3_ParamLimits

0x5377,	// (0x00034a88) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x0003eea3) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x0003eea3) list_single_graphic_2heading_pane_t

0x98f0,	// (0x00039001) bg_popup_sub_pane_cp2

0x991a,	// (0x0003902b) grid_toobar_pane

0x73fd,	// (0x00036b0e) cell_toolbar_pane_ParamLimits

0x73fd,	// (0x00036b0e) cell_toolbar_pane

0x9956,	// (0x00039067) cell_toolbar_pane_g1_ParamLimits

0x9956,	// (0x00039067) cell_toolbar_pane_g1

0x996a,	// (0x0003907b) cell_toolbar_pane_g2_ParamLimits

0x996a,	// (0x0003907b) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x0003eeb1) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x0003eeb1) cell_toolbar_pane_g

0x998c,	// (0x0003909d) grid_highlight_pane_cp2_ParamLimits

0x998c,	// (0x0003909d) grid_highlight_pane_cp2

0x99a6,	// (0x000390b7) toolbar_button_pane

0x99b2,	// (0x000390c3) toolbar_button_pane_g1

0x99ba,	// (0x000390cb) toolbar_button_pane_g2

0x99c2,	// (0x000390d3) toolbar_button_pane_g3

0x99ca,	// (0x000390db) toolbar_button_pane_g4

0x99d2,	// (0x000390e3) toolbar_button_pane_g5

0x99da,	// (0x000390eb) toolbar_button_pane_g6

0x99e2,	// (0x000390f3) toolbar_button_pane_g7

0x99ea,	// (0x000390fb) toolbar_button_pane_g8

0x99f2,	// (0x00039103) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x0003eeb6) toolbar_button_pane_g

0x7435,	// (0x00036b46) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7435,	// (0x00036b46) list_single_2graphic_pane_g1_cp3

0x7441,	// (0x00036b52) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7441,	// (0x00036b52) list_single_2graphic_pane_g2_cp3

0x7452,	// (0x00036b63) list_single_2graphic_pane_g3_cp3

0x745a,	// (0x00036b6b) list_single_2graphic_pane_g4_cp3_ParamLimits

0x745a,	// (0x00036b6b) list_single_2graphic_pane_g4_cp3

0x7466,	// (0x00036b77) list_single_2graphic_pane_t1_cp3_ParamLimits

0x7466,	// (0x00036b77) list_single_2graphic_pane_t1_cp3

0x7481,	// (0x00036b92) list_single_midp_graphic_pane_g2_ParamLimits

0x7481,	// (0x00036b92) list_single_midp_graphic_pane_g2

0x6dc0,	// (0x000364d1) aid_zoom_text_primary

0x5307,	// (0x00034a18) aid_zoom_text_secondary

0x93c6,	// (0x00038ad7) status_small_pane_g7_ParamLimits

0x93c6,	// (0x00038ad7) status_small_pane_g7

0x93e9,	// (0x00038afa) status_small_pane_t1_ParamLimits

0x57c1,	// (0x00034ed2) title_pane_g2

0x0003,

0xf529,	// (0x0003ec3a) title_pane_g

0x5a2a,	// (0x0003513b) aid_size_cell_colour_1_pane_ParamLimits

0x5a2a,	// (0x0003513b) aid_size_cell_colour_1_pane

0x5a3e,	// (0x0003514f) aid_size_cell_colour_2_pane_ParamLimits

0x5a3e,	// (0x0003514f) aid_size_cell_colour_2_pane

0x5a52,	// (0x00035163) aid_size_cell_colour_3_pane_ParamLimits

0x5a52,	// (0x00035163) aid_size_cell_colour_3_pane

0x5a66,	// (0x00035177) aid_size_cell_colour_4_pane_ParamLimits

0x5a66,	// (0x00035177) aid_size_cell_colour_4_pane

0x635b,	// (0x00035a6c) title_pane_stacon_g1_ParamLimits

0x635b,	// (0x00035a6c) title_pane_stacon_g1

0xa03e,	// (0x0003974f) popup_note_wait_window_g3_ParamLimits

0xa03e,	// (0x0003974f) popup_note_wait_window_g3

0xa0b5,	// (0x000397c6) popup_note_wait_window_t5_ParamLimits

0xa0b5,	// (0x000397c6) popup_note_wait_window_t5

0x224e,	// (0x0003195f) main_feb_china_hwr_fs_writing_pane

0x6e5c,	// (0x0003656d) popup_feb_china_hwr_fs_window_ParamLimits

0x6e5c,	// (0x0003656d) popup_feb_china_hwr_fs_window

0x74a3,	// (0x00036bb4) aid_size_cell_hwr_fs_ParamLimits

0x74a3,	// (0x00036bb4) aid_size_cell_hwr_fs

0x9a26,	// (0x00039137) bg_popup_sub_pane_cp3_ParamLimits

0x9a26,	// (0x00039137) bg_popup_sub_pane_cp3

0x74b8,	// (0x00036bc9) grid_hwr_fs_pane_ParamLimits

0x74b8,	// (0x00036bc9) grid_hwr_fs_pane

0x74d0,	// (0x00036be1) linegrid_hwr_fs_pane_ParamLimits

0x74d0,	// (0x00036be1) linegrid_hwr_fs_pane

0x74e0,	// (0x00036bf1) cell_hwr_fs_pane_ParamLimits

0x74e0,	// (0x00036bf1) cell_hwr_fs_pane

0x9a32,	// (0x00039143) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a32,	// (0x00039143) linegrid_hwr_fs_pane_g1

0x9a3e,	// (0x0003914f) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a3e,	// (0x0003914f) linegrid_hwr_fs_pane_g2

0x9a50,	// (0x00039161) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a50,	// (0x00039161) linegrid_hwr_fs_pane_g3

0x7504,	// (0x00036c15) linegrid_hwr_fs_pane_g4_ParamLimits

0x7504,	// (0x00036c15) linegrid_hwr_fs_pane_g4

0x7522,	// (0x00036c33) linegrid_hwr_fs_pane_g5_ParamLimits

0x7522,	// (0x00036c33) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x0003eee1) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x0003eee1) linegrid_hwr_fs_pane_g

0x9a5c,	// (0x0003916d) cell_hwr_fs_pane_g1_ParamLimits

0x9a5c,	// (0x0003916d) cell_hwr_fs_pane_g1

0x982b,	// (0x00038f3c) cell_hwr_fs_pane_g2_ParamLimits

0x982b,	// (0x00038f3c) cell_hwr_fs_pane_g2

0x9a72,	// (0x00039183) cell_hwr_fs_pane_g3_ParamLimits

0x9a72,	// (0x00039183) cell_hwr_fs_pane_g3

0x9a7f,	// (0x00039190) cell_hwr_fs_pane_g4_ParamLimits

0x9a7f,	// (0x00039190) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x0003eeec) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x0003eeec) cell_hwr_fs_pane_g

0x7538,	// (0x00036c49) cell_hwr_fs_pane_t1

0x224e,	// (0x0003195f) grid_highlight_pane_cp6

0x224e,	// (0x0003195f) main_idle_act2_pane

0x2a0f,	// (0x00032120) aid_inside_area_popup_secondary

0xa6ee,	// (0x00039dff) aid_inside_area_window_primary_ParamLimits

0xa6ee,	// (0x00039dff) aid_inside_area_window_primary

0xb2a2,	// (0x0003a9b3) ai2_news_ticker_pane

0xb2aa,	// (0x0003a9bb) aid_size_cell_ai1_link_ParamLimits

0xb2aa,	// (0x0003a9bb) aid_size_cell_ai1_link

0xb2c4,	// (0x0003a9d5) popup_ai2_data_window_ParamLimits

0xb2c4,	// (0x0003a9d5) popup_ai2_data_window

0xb2e2,	// (0x0003a9f3) popup_ai2_link_window_ParamLimits

0xb2e2,	// (0x0003a9f3) popup_ai2_link_window

0x9a26,	// (0x00039137) bg_popup_sub_pane_cp4_ParamLimits

0x9a26,	// (0x00039137) bg_popup_sub_pane_cp4

0xb2f8,	// (0x0003aa09) grid_ai2_link_pane_ParamLimits

0xb2f8,	// (0x0003aa09) grid_ai2_link_pane

0xb30f,	// (0x0003aa20) popup_ai2_link_window_g1_ParamLimits

0xb30f,	// (0x0003aa20) popup_ai2_link_window_g1

0xb31b,	// (0x0003aa2c) popup_ai2_link_window_g2_ParamLimits

0xb31b,	// (0x0003aa2c) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x0003f0bf) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x0003f0bf) popup_ai2_link_window_g

0xb32c,	// (0x0003aa3d) ai2_mp_button_pane

0xb334,	// (0x0003aa45) ai2_mp_volume_pane

0x9c11,	// (0x00039322) bg_popup_sub_pane_cp5_ParamLimits

0x9c11,	// (0x00039322) bg_popup_sub_pane_cp5

0xb33c,	// (0x0003aa4d) heading_ai2_gene_pane_ParamLimits

0xb33c,	// (0x0003aa4d) heading_ai2_gene_pane

0xb348,	// (0x0003aa59) list_ai2_gene_pane_ParamLimits

0xb348,	// (0x0003aa59) list_ai2_gene_pane

0xb390,	// (0x0003aaa1) cell_ai2_link_pane_ParamLimits

0xb390,	// (0x0003aaa1) cell_ai2_link_pane

0xb3a6,	// (0x0003aab7) cell_ai2_link_pane_g1

0x224e,	// (0x0003195f) grid_highlight_pane_cp7

0x7931,	// (0x00037042) ai2_mp_volume_pane_g1

0xb479,	// (0x0003ab8a) ai2_mp_volume_pane_g2

0xb3ee,	// (0x0003aaff) list_ai2_gene_pane_t1

0xb481,	// (0x0003ab92) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x0003f0d8) ai2_mp_volume_pane_g

0x7939,	// (0x0003704a) volume_small_pane_cp3

0xb489,	// (0x0003ab9a) aid_size_cell_ai2_button

0xb491,	// (0x0003aba2) grid_ai2_button_pane

0xb49a,	// (0x0003abab) cell_ai2_button_pane_ParamLimits

0xb49a,	// (0x0003abab) cell_ai2_button_pane

0x2244,	// (0x00031955) cell_ai2_button_pane_g1

0x224e,	// (0x0003195f) grid_highlight_pane_cp8

0xb439,	// (0x0003ab4a) ai2_gene_pane_t1_ParamLimits

0xb439,	// (0x0003ab4a) ai2_gene_pane_t1

0x6dae,	// (0x000364bf) aid_height_parent_landscape

0xad7e,	// (0x0003a48f) aid_height_set_list

0xad8f,	// (0x0003a4a0) aid_size_parent

0xb0c1,	// (0x0003a7d2) aid_size_cell_graphic_pane_ParamLimits

0xb358,	// (0x0003aa69) popup_ai2_data_window_g1_ParamLimits

0xb358,	// (0x0003aa69) popup_ai2_data_window_g1

0xb364,	// (0x0003aa75) ai2_news_ticker_pane_g1

0xb36c,	// (0x0003aa7d) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x0003f0c4) ai2_news_ticker_pane_g

0xb374,	// (0x0003aa85) ai2_news_ticker_pane_t1

0xb382,	// (0x0003aa93) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x0003f0c9) ai2_news_ticker_pane_t

0xb3af,	// (0x0003aac0) heading_ai2_gene_pane_g1

0xb3b7,	// (0x0003aac8) heading_ai2_gene_pane_t1_ParamLimits

0xb3b7,	// (0x0003aac8) heading_ai2_gene_pane_t1

0xb3cc,	// (0x0003aadd) list_highlight_pane_cp6

0xb3d4,	// (0x0003aae5) ai2_gene_pane_ParamLimits

0xb3d4,	// (0x0003aae5) ai2_gene_pane

0xb3fc,	// (0x0003ab0d) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x0003f0ce) list_ai2_gene_pane_t

0xb40a,	// (0x0003ab1b) list_highlight_pane_cp8_ParamLimits

0xb40a,	// (0x0003ab1b) list_highlight_pane_cp8

0xb41b,	// (0x0003ab2c) ai2_gene_pane_g1_ParamLimits

0xb41b,	// (0x0003ab2c) ai2_gene_pane_g1

0xb42d,	// (0x0003ab3e) ai2_gene_pane_g2_ParamLimits

0xb42d,	// (0x0003ab3e) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x0003f0d3) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x0003f0d3) ai2_gene_pane_g

0x2882,	// (0x00031f93) scroll_pane_cp12

0x6d6b,	// (0x0003647c) control_pane_t3_ParamLimits

0x6d6b,	// (0x0003647c) control_pane_t3

0x93da,	// (0x00038aeb) status_small_pane_g8_ParamLimits

0x93da,	// (0x00038aeb) status_small_pane_g8

0x6f5a,	// (0x0003666b) popup_find_window_ParamLimits

0x7187,	// (0x00036898) popup_note_image_window_ParamLimits

0x3e76,	// (0x00033587) list_double2_graphic_pane_vc_g1_ParamLimits

0x3e76,	// (0x00033587) list_double2_graphic_pane_vc_g1

0x4038,	// (0x00033749) list_double2_graphic_pane_vc_g2_ParamLimits

0x4038,	// (0x00033749) list_double2_graphic_pane_vc_g2

0x4044,	// (0x00033755) list_double2_graphic_pane_vc_g3_ParamLimits

0x4044,	// (0x00033755) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x0003eeaa) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x0003eeaa) list_double2_graphic_pane_vc_g

0x4050,	// (0x00033761) list_double2_graphic_pane_vc_t1_ParamLimits

0x4050,	// (0x00033761) list_double2_graphic_pane_vc_t1

0x3e3a,	// (0x0003354b) list_single_heading_pane_vc_g1_ParamLimits

0x3e3a,	// (0x0003354b) list_single_heading_pane_vc_g1

0x3e46,	// (0x00033557) list_single_heading_pane_vc_g2_ParamLimits

0x3e46,	// (0x00033557) list_single_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003eecb) list_single_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003eecb) list_single_heading_pane_vc_g

0x4066,	// (0x00033777) list_single_heading_pane_vc_t1_ParamLimits

0x4066,	// (0x00033777) list_single_heading_pane_vc_t1

0x407c,	// (0x0003378d) list_single_heading_pane_vc_t2_ParamLimits

0x407c,	// (0x0003378d) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x0003eed0) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x0003eed0) list_single_heading_pane_vc_t

0x408e,	// (0x0003379f) list_setting_number_pane_vc_g1_ParamLimits

0x408e,	// (0x0003379f) list_setting_number_pane_vc_g1

0x409a,	// (0x000337ab) list_setting_number_pane_vc_g2_ParamLimits

0x409a,	// (0x000337ab) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x0003eed5) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003eed5) list_setting_number_pane_vc_g

0x40a6,	// (0x000337b7) list_setting_number_pane_vc_t1_ParamLimits

0x40a6,	// (0x000337b7) list_setting_number_pane_vc_t1

0x40ba,	// (0x000337cb) list_setting_number_pane_vc_t2_ParamLimits

0x40ba,	// (0x000337cb) list_setting_number_pane_vc_t2

0x40d6,	// (0x000337e7) list_setting_number_pane_vc_t3_ParamLimits

0x40d6,	// (0x000337e7) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x0003eeda) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x0003eeda) list_setting_number_pane_vc_t

0x4104,	// (0x00033815) set_value_pane_vc_ParamLimits

0x4104,	// (0x00033815) set_value_pane_vc

0xaf78,	// (0x0003a689) list_double2_graphic_pane_vc_ParamLimits

0xaf78,	// (0x0003a689) list_double2_graphic_pane_vc

0xaf78,	// (0x0003a689) list_double2_large_graphic_pane_vc_ParamLimits

0xaf78,	// (0x0003a689) list_double2_large_graphic_pane_vc

0xaf78,	// (0x0003a689) list_double2_pane_vc_ParamLimits

0xaf78,	// (0x0003a689) list_double2_pane_vc

0xaf78,	// (0x0003a689) list_double_graphic_heading_pane_vc_ParamLimits

0xaf78,	// (0x0003a689) list_double_graphic_heading_pane_vc

0xaf78,	// (0x0003a689) list_double_graphic_pane_vc_ParamLimits

0xaf78,	// (0x0003a689) list_double_graphic_pane_vc

0xaf78,	// (0x0003a689) list_double_heading_pane_vc_ParamLimits

0xaf78,	// (0x0003a689) list_double_heading_pane_vc

0x413b,	// (0x0003384c) list_double_large_graphic_pane_vc_ParamLimits

0x413b,	// (0x0003384c) list_double_large_graphic_pane_vc

0xaf78,	// (0x0003a689) list_double_number_pane_vc_ParamLimits

0xaf78,	// (0x0003a689) list_double_number_pane_vc

0xaf78,	// (0x0003a689) list_double_pane_vc_ParamLimits

0xaf78,	// (0x0003a689) list_double_pane_vc

0xaf78,	// (0x0003a689) list_double_time_pane_vc_ParamLimits

0xaf78,	// (0x0003a689) list_double_time_pane_vc

0xaf78,	// (0x0003a689) list_setting_number_pane_vc_ParamLimits

0xaf78,	// (0x0003a689) list_setting_number_pane_vc

0xaf78,	// (0x0003a689) list_setting_pane_vc_ParamLimits

0xaf78,	// (0x0003a689) list_setting_pane_vc

0xaf78,	// (0x0003a689) list_single_graphic_heading_pane_vc_ParamLimits

0xaf78,	// (0x0003a689) list_single_graphic_heading_pane_vc

0xaf78,	// (0x0003a689) list_single_heading_pane_vc_ParamLimits

0xaf78,	// (0x0003a689) list_single_heading_pane_vc

0x781a,	// (0x00036f2b) list_single_number_heading_pane_vc_ParamLimits

0x781a,	// (0x00036f2b) list_single_number_heading_pane_vc

0x3e76,	// (0x00033587) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3e76,	// (0x00033587) list_double_graphic_heading_pane_vc_g1

0x3e3a,	// (0x0003354b) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3e3a,	// (0x0003354b) list_double_graphic_heading_pane_vc_g2

0x3e46,	// (0x00033557) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3e46,	// (0x00033557) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ce,	// (0x0003f0df) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x0003f0df) list_double_graphic_heading_pane_vc_g

0x4160,	// (0x00033871) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4160,	// (0x00033871) list_double_graphic_heading_pane_vc_t1

0x4176,	// (0x00033887) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4176,	// (0x00033887) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d5,	// (0x0003f0e6) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d5,	// (0x0003f0e6) list_double_graphic_heading_pane_vc_t

0x408e,	// (0x0003379f) list_setting_pane_vc_g1_ParamLimits

0x408e,	// (0x0003379f) list_setting_pane_vc_g1

0x409a,	// (0x000337ab) list_setting_pane_vc_g2_ParamLimits

0x409a,	// (0x000337ab) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x0003eed5) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003eed5) list_setting_pane_vc_g

0x4194,	// (0x000338a5) list_setting_pane_vc_t1_ParamLimits

0x4194,	// (0x000338a5) list_setting_pane_vc_t1

0x41b0,	// (0x000338c1) list_setting_pane_vc_t2_ParamLimits

0x41b0,	// (0x000338c1) list_setting_pane_vc_t2

0x0001,

0xfa03,	// (0x0003f114) list_setting_pane_vc_t_ParamLimits

0xfa03,	// (0x0003f114) list_setting_pane_vc_t

0x4104,	// (0x00033815) set_value_pane_cp_vc_ParamLimits

0x4104,	// (0x00033815) set_value_pane_cp_vc

0x3e3a,	// (0x0003354b) list_single_number_heading_pane_vc_g1_ParamLimits

0x3e3a,	// (0x0003354b) list_single_number_heading_pane_vc_g1

0x3e46,	// (0x00033557) list_single_number_heading_pane_vc_g2_ParamLimits

0x3e46,	// (0x00033557) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003eecb) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003eecb) list_single_number_heading_pane_vc_g

0x41cc,	// (0x000338dd) list_single_number_heading_pane_vc_t1_ParamLimits

0x41cc,	// (0x000338dd) list_single_number_heading_pane_vc_t1

0x3e52,	// (0x00033563) list_single_number_heading_pane_vc_t2_ParamLimits

0x3e52,	// (0x00033563) list_single_number_heading_pane_vc_t2

0x3e64,	// (0x00033575) list_single_number_heading_pane_vc_t3_ParamLimits

0x3e64,	// (0x00033575) list_single_number_heading_pane_vc_t3

0x0002,

0xfa08,	// (0x0003f119) list_single_number_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x0003f119) list_single_number_heading_pane_vc_t

0x3e76,	// (0x00033587) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3e76,	// (0x00033587) list_single_graphic_heading_pane_vc_g1

0x3e3a,	// (0x0003354b) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3e3a,	// (0x0003354b) list_single_graphic_heading_pane_vc_g4

0x3e46,	// (0x00033557) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3e46,	// (0x00033557) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ce,	// (0x0003f0df) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x0003f0df) list_single_graphic_heading_pane_vc_g

0x41cc,	// (0x000338dd) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x41cc,	// (0x000338dd) list_single_graphic_heading_pane_vc_t1

0x41e2,	// (0x000338f3) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x41e2,	// (0x000338f3) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0f,	// (0x0003f120) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0f,	// (0x0003f120) list_single_graphic_heading_pane_vc_t

0x3e3a,	// (0x0003354b) list_double2_pane_vc_g1_ParamLimits

0x3e3a,	// (0x0003354b) list_double2_pane_vc_g1

0x3e46,	// (0x00033557) list_double2_pane_vc_g2_ParamLimits

0x3e46,	// (0x00033557) list_double2_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003eecb) list_double2_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003eecb) list_double2_pane_vc_g

0x4125,	// (0x00033836) list_double2_pane_vc_t1_ParamLimits

0x4125,	// (0x00033836) list_double2_pane_vc_t1

0x3e82,	// (0x00033593) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3e82,	// (0x00033593) list_double2_large_graphic_pane_vc_g1

0x3e3a,	// (0x0003354b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3e3a,	// (0x0003354b) list_double2_large_graphic_pane_vc_g2

0x3e46,	// (0x00033557) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3e46,	// (0x00033557) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa14,	// (0x0003f125) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa14,	// (0x0003f125) list_double2_large_graphic_pane_vc_g

0x3e8e,	// (0x0003359f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3e8e,	// (0x0003359f) list_double2_large_graphic_pane_vc_t1

0x41f4,	// (0x00033905) list_double_time_pane_vc_g1_ParamLimits

0x41f4,	// (0x00033905) list_double_time_pane_vc_g1

0x4200,	// (0x00033911) list_double_time_pane_vc_g2_ParamLimits

0x4200,	// (0x00033911) list_double_time_pane_vc_g2

0x0001,

0xfa1b,	// (0x0003f12c) list_double_time_pane_vc_g_ParamLimits

0xfa1b,	// (0x0003f12c) list_double_time_pane_vc_g

0x420c,	// (0x0003391d) list_double_time_pane_vc_t1_ParamLimits

0x420c,	// (0x0003391d) list_double_time_pane_vc_t1

0x4236,	// (0x00033947) list_double_time_pane_vc_t2_ParamLimits

0x4236,	// (0x00033947) list_double_time_pane_vc_t2

0x427f,	// (0x00033990) list_double_time_pane_vc_t3_ParamLimits

0x427f,	// (0x00033990) list_double_time_pane_vc_t3

0x4291,	// (0x000339a2) list_double_time_pane_vc_t4_ParamLimits

0x4291,	// (0x000339a2) list_double_time_pane_vc_t4

0x0003,

0xfa20,	// (0x0003f131) list_double_time_pane_vc_t_ParamLimits

0xfa20,	// (0x0003f131) list_double_time_pane_vc_t

0x3e3a,	// (0x0003354b) list_double_pane_vc_g1_ParamLimits

0x3e3a,	// (0x0003354b) list_double_pane_vc_g1

0x3e46,	// (0x00033557) list_double_pane_vc_g2_ParamLimits

0x3e46,	// (0x00033557) list_double_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003eecb) list_double_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003eecb) list_double_pane_vc_g

0x42a5,	// (0x000339b6) list_double_pane_vc_t1_ParamLimits

0x42a5,	// (0x000339b6) list_double_pane_vc_t1

0x42b9,	// (0x000339ca) list_double_pane_vc_t2_ParamLimits

0x42b9,	// (0x000339ca) list_double_pane_vc_t2

0x0001,

0xfa29,	// (0x0003f13a) list_double_pane_vc_t_ParamLimits

0xfa29,	// (0x0003f13a) list_double_pane_vc_t

0x3e3a,	// (0x0003354b) list_double_number_pane_vc_g1_ParamLimits

0x3e3a,	// (0x0003354b) list_double_number_pane_vc_g1

0x3e46,	// (0x00033557) list_double_number_pane_vc_g2_ParamLimits

0x3e46,	// (0x00033557) list_double_number_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003eecb) list_double_number_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003eecb) list_double_number_pane_vc_g

0x42cf,	// (0x000339e0) list_double_number_pane_vc_t1_ParamLimits

0x42cf,	// (0x000339e0) list_double_number_pane_vc_t1

0x42e1,	// (0x000339f2) list_double_number_pane_vc_t2_ParamLimits

0x42e1,	// (0x000339f2) list_double_number_pane_vc_t2

0x42b9,	// (0x000339ca) list_double_number_pane_vc_t3_ParamLimits

0x42b9,	// (0x000339ca) list_double_number_pane_vc_t3

0x0002,

0xfa2e,	// (0x0003f13f) list_double_number_pane_vc_t_ParamLimits

0xfa2e,	// (0x0003f13f) list_double_number_pane_vc_t

0x430d,	// (0x00033a1e) list_double_large_graphic_pane_vc_g1_ParamLimits

0x430d,	// (0x00033a1e) list_double_large_graphic_pane_vc_g1

0x4329,	// (0x00033a3a) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4329,	// (0x00033a3a) list_double_large_graphic_pane_vc_g2

0x433d,	// (0x00033a4e) list_double_large_graphic_pane_vc_g3_ParamLimits

0x433d,	// (0x00033a4e) list_double_large_graphic_pane_vc_g3

0x434c,	// (0x00033a5d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x434c,	// (0x00033a5d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa35,	// (0x0003f146) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa35,	// (0x0003f146) list_double_large_graphic_pane_vc_g

0x435b,	// (0x00033a6c) list_double_large_graphic_pane_vc_t1_ParamLimits

0x435b,	// (0x00033a6c) list_double_large_graphic_pane_vc_t1

0x4377,	// (0x00033a88) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4377,	// (0x00033a88) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3e,	// (0x0003f14f) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3e,	// (0x0003f14f) list_double_large_graphic_pane_vc_t

0x3e3a,	// (0x0003354b) list_double_heading_pane_vc_g1_ParamLimits

0x3e3a,	// (0x0003354b) list_double_heading_pane_vc_g1

0x3e46,	// (0x00033557) list_double_heading_pane_vc_g2_ParamLimits

0x3e46,	// (0x00033557) list_double_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003eecb) list_double_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003eecb) list_double_heading_pane_vc_g

0x4397,	// (0x00033aa8) list_double_heading_pane_vc_t1_ParamLimits

0x4397,	// (0x00033aa8) list_double_heading_pane_vc_t1

0x43a9,	// (0x00033aba) list_double_heading_pane_vc_t2_ParamLimits

0x43a9,	// (0x00033aba) list_double_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x0003f154) list_double_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0003f154) list_double_heading_pane_vc_t

0x43c1,	// (0x00033ad2) list_double_graphic_pane_vc_g1_ParamLimits

0x43c1,	// (0x00033ad2) list_double_graphic_pane_vc_g1

0x43d4,	// (0x00033ae5) list_double_graphic_pane_vc_g2_ParamLimits

0x43d4,	// (0x00033ae5) list_double_graphic_pane_vc_g2

0x3e3a,	// (0x0003354b) list_double_graphic_pane_vc_g3_ParamLimits

0x3e3a,	// (0x0003354b) list_double_graphic_pane_vc_g3

0x0003,

0xfa48,	// (0x0003f159) list_double_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x0003f159) list_double_graphic_pane_vc_g

0x43f1,	// (0x00033b02) list_double_graphic_pane_vc_t1_ParamLimits

0x43f1,	// (0x00033b02) list_double_graphic_pane_vc_t1

0x441b,	// (0x00033b2c) list_double_graphic_pane_vc_t2_ParamLimits

0x441b,	// (0x00033b2c) list_double_graphic_pane_vc_t2

0x0001,

0xfa51,	// (0x0003f162) list_double_graphic_pane_vc_t_ParamLimits

0xfa51,	// (0x0003f162) list_double_graphic_pane_vc_t

0x53c3,	// (0x00034ad4) aid_size_cell_fastswap

0x53cb,	// (0x00034adc) aid_size_cell_touch_ParamLimits

0x53cb,	// (0x00034adc) aid_size_cell_touch

0x5636,	// (0x00034d47) popup_fast_swap_wide_window_ParamLimits

0x5636,	// (0x00034d47) popup_fast_swap_wide_window

0x5754,	// (0x00034e65) touch_pane_ParamLimits

0x5754,	// (0x00034e65) touch_pane

0x28d8,	// (0x00031fe9) button_value_adjust_pane_cp2

0x3edf,	// (0x000335f0) button_value_adjust_pane_cp4

0x3ee7,	// (0x000335f8) form_field_data_pane_cp2

0x5fd4,	// (0x000356e5) form_field_data_wide_pane_cp2

0x65c8,	// (0x00035cd9) bg_scroll_pane_ParamLimits

0x65e7,	// (0x00035cf8) scroll_handle_pane_ParamLimits

0x65fb,	// (0x00035d0c) scroll_sc2_down_pane_ParamLimits

0x65fb,	// (0x00035d0c) scroll_sc2_down_pane

0x6622,	// (0x00035d33) scroll_sc2_up_pane_ParamLimits

0x6622,	// (0x00035d33) scroll_sc2_up_pane

0xbbc2,	// (0x0003b2d3) grid_wheel_folder_pane_g1_ParamLimits

0xbbc2,	// (0x0003b2d3) grid_wheel_folder_pane_g1

0x6b35,	// (0x00036246) clock_nsta_pane_cp2_ParamLimits

0x6b35,	// (0x00036246) clock_nsta_pane_cp2

0x915d,	// (0x0003886e) listscroll_midp_pane_ParamLimits

0x9169,	// (0x0003887a) midp_canvas_pane

0x9454,	// (0x00038b65) nsta_clock_indic_pane

0x9488,	// (0x00038b99) listscroll_form_pane_vc

0x9490,	// (0x00038ba1) listscroll_set_pane_vc_ParamLimits

0x9490,	// (0x00038ba1) listscroll_set_pane_vc

0x9587,	// (0x00038c98) clock_nsta_pane

0x9604,	// (0x00038d15) indicator_nsta_pane

0x98f0,	// (0x00039001) bg_popup_sub_pane_cp2_ParamLimits

0x9904,	// (0x00039015) find_pane_cp2_ParamLimits

0x9904,	// (0x00039015) find_pane_cp2

0x991a,	// (0x0003902b) grid_toobar_pane_ParamLimits

0x99fa,	// (0x0003910b) list_form_gen_pane_vc_ParamLimits

0x99fa,	// (0x0003910b) list_form_gen_pane_vc

0x9a10,	// (0x00039121) scroll_pane_cp8_vc_ParamLimits

0x9a10,	// (0x00039121) scroll_pane_cp8_vc

0x9a8c,	// (0x0003919d) data_form_wide_pane_vc_ParamLimits

0x9a8c,	// (0x0003919d) data_form_wide_pane_vc

0x9a98,	// (0x000391a9) form_field_data_wide_pane_vc_g1

0x9aa0,	// (0x000391b1) form_field_data_wide_pane_vc_t1_ParamLimits

0x9aa0,	// (0x000391b1) form_field_data_wide_pane_vc_t1

0x28ec,	// (0x00031ffd) input_focus_pane_cp6_vc_ParamLimits

0x28ec,	// (0x00031ffd) input_focus_pane_cp6_vc

0x9d9c,	// (0x000394ad) list_midp_pane_ParamLimits

0x9da8,	// (0x000394b9) scroll_pane_cp16_ParamLimits

0x9da8,	// (0x000394b9) scroll_pane_cp16

0x9e12,	// (0x00039523) button_value_adjust_pane_ParamLimits

0x9e12,	// (0x00039523) button_value_adjust_pane

0xada1,	// (0x0003a4b2) button_value_adjust_pane_cp6_ParamLimits

0xada1,	// (0x0003a4b2) button_value_adjust_pane_cp6

0xaee9,	// (0x0003a5fa) settings_code_pane_cp_ParamLimits

0xaee9,	// (0x0003a5fa) settings_code_pane_cp

0x2244,	// (0x00031955) cell_touch_pane_g1

0x2244,	// (0x00031955) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x0003edef) cell_touch_pane_g

0xb4ac,	// (0x0003abbd) cell_touch_pane_cp_ParamLimits

0xb4ac,	// (0x0003abbd) cell_touch_pane_cp

0xb4bc,	// (0x0003abcd) cell_touch_pane_ParamLimits

0xb4bc,	// (0x0003abcd) cell_touch_pane

0x2244,	// (0x00031955) scroll_sc2_down_pane_g1

0x2244,	// (0x00031955) scroll_sc2_up_pane_g1

0x224e,	// (0x0003195f) bg_set_opt_pane_cp4_vc

0xb4cd,	// (0x0003abde) list_set_graphic_pane_vc_g1_ParamLimits

0xb4cd,	// (0x0003abde) list_set_graphic_pane_vc_g1

0xb4d9,	// (0x0003abea) list_set_graphic_pane_vc_g2_ParamLimits

0xb4d9,	// (0x0003abea) list_set_graphic_pane_vc_g2

0x0001,

0xf9da,	// (0x0003f0eb) list_set_graphic_pane_vc_g_ParamLimits

0xf9da,	// (0x0003f0eb) list_set_graphic_pane_vc_g

0xb4e5,	// (0x0003abf6) text_primary_small_cp13_vc_ParamLimits

0xb4e5,	// (0x0003abf6) text_primary_small_cp13_vc

0xb4fd,	// (0x0003ac0e) list_set_graphic_pane_vc_ParamLimits

0xb4fd,	// (0x0003ac0e) list_set_graphic_pane_vc

0x224e,	// (0x0003195f) input_focus_pane_cp2_vc

0x2244,	// (0x00031955) setting_code_pane_vc_g1

0x22c1,	// (0x000319d2) setting_code_pane_vc_t1

0xb510,	// (0x0003ac21) set_text_pane_vc_t1_ParamLimits

0xb510,	// (0x0003ac21) set_text_pane_vc_t1

0x224e,	// (0x0003195f) input_focus_pane_cp1_vc

0xb531,	// (0x0003ac42) list_set_text_pane_vc

0x2244,	// (0x00031955) setting_text_pane_vc_g1

0x224e,	// (0x0003195f) bg_set_opt_pane_cp2_vc

0x22b8,	// (0x000319c9) setting_slider_graphic_pane_vc_g1

0xb53b,	// (0x0003ac4c) setting_slider_graphic_pane_vc_t1

0xb54d,	// (0x0003ac5e) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9df,	// (0x0003f0f0) setting_slider_graphic_pane_vc_t

0xb55f,	// (0x0003ac70) slider_set_pane_cp_vc

0xb569,	// (0x0003ac7a) slider_set_pane_vc_g1

0xb572,	// (0x0003ac83) slider_set_pane_vc_g2

0x0006,

0xf9e4,	// (0x0003f0f5) slider_set_pane_vc_g

0x2944,	// (0x00032055) set_opt_bg_pane_g1_copy1

0x294c,	// (0x0003205d) set_opt_bg_pane_g2_copy1

0xb59e,	// (0x0003acaf) set_opt_bg_pane_g3_copy1

0x295c,	// (0x0003206d) set_opt_bg_pane_g4_copy1

0x2964,	// (0x00032075) set_opt_bg_pane_g5_copy1

0x296c,	// (0x0003207d) set_opt_bg_pane_g6_copy1

0xb5a8,	// (0x0003acb9) set_opt_bg_pane_g7_copy1

0xb5b2,	// (0x0003acc3) set_opt_bg_pane_g8_copy1

0xb5bc,	// (0x0003accd) set_opt_bg_pane_g9_copy1

0x224e,	// (0x0003195f) bg_set_opt_pane_cp_vc

0xb5c6,	// (0x0003acd7) setting_slider_pane_vc_t1

0xb5d5,	// (0x0003ace6) setting_slider_pane_vc_t2

0xb5e7,	// (0x0003acf8) setting_slider_pane_vc_t3

0x0002,

0xf9f3,	// (0x0003f104) setting_slider_pane_vc_t

0xb5f9,	// (0x0003ad0a) slider_set_pane_vc

0x7566,	// (0x00036c77) volume_set_pane_vc_g1

0x756f,	// (0x00036c80) volume_set_pane_vc_g2

0x7578,	// (0x00036c89) volume_set_pane_vc_g3

0x7581,	// (0x00036c92) volume_set_pane_vc_g4

0x758a,	// (0x00036c9b) volume_set_pane_vc_g5

0x7593,	// (0x00036ca4) volume_set_pane_vc_g6

0x759c,	// (0x00036cad) volume_set_pane_vc_g7

0x75a5,	// (0x00036cb6) volume_set_pane_vc_g8

0x75ae,	// (0x00036cbf) volume_set_pane_vc_g9

0x75b7,	// (0x00036cc8) volume_set_pane_vc_g10

0x0009,

0xf891,	// (0x0003efa2) volume_set_pane_vc_g

0xb603,	// (0x0003ad14) volume_set_pane_vc

0xb60d,	// (0x0003ad1e) button_value_adjust_pane_cp1_vc

0xb617,	// (0x0003ad28) list_highlight_pane_cp2_vc

0xb620,	// (0x0003ad31) list_set_pane_vc_ParamLimits

0xb620,	// (0x0003ad31) list_set_pane_vc

0xb68e,	// (0x0003ad9f) main_pane_set_vc_t1_ParamLimits

0xb68e,	// (0x0003ad9f) main_pane_set_vc_t1

0xb6a3,	// (0x0003adb4) main_pane_set_vc_t2_ParamLimits

0xb6a3,	// (0x0003adb4) main_pane_set_vc_t2

0xb6b5,	// (0x0003adc6) main_pane_set_vc_t3_ParamLimits

0xb6b5,	// (0x0003adc6) main_pane_set_vc_t3

0xb6c9,	// (0x0003adda) main_pane_set_vc_t4_ParamLimits

0xb6c9,	// (0x0003adda) main_pane_set_vc_t4

0x0003,

0xf9fa,	// (0x0003f10b) main_pane_set_vc_t_ParamLimits

0xf9fa,	// (0x0003f10b) main_pane_set_vc_t

0xb6dd,	// (0x0003adee) setting_code_pane_vc_ParamLimits

0xb6dd,	// (0x0003adee) setting_code_pane_vc

0xb6ee,	// (0x0003adff) setting_slider_graphic_pane_vc

0xb6ee,	// (0x0003adff) setting_slider_pane_vc

0xb6ee,	// (0x0003adff) setting_text_pane_vc

0xb6ee,	// (0x0003adff) setting_volume_pane_vc

0xb6f8,	// (0x0003ae09) scroll_pane_cp121_vc

0x28c6,	// (0x00031fd7) set_content_pane_vc

0xb700,	// (0x0003ae11) button_value_adjust_pane_g1

0xb709,	// (0x0003ae1a) button_value_adjust_pane_g2

0x0001,

0xfa56,	// (0x0003f167) button_value_adjust_pane_g

0xb712,	// (0x0003ae23) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb712,	// (0x0003ae23) form_field_slider_wide_pane_vc_t1

0xb724,	// (0x0003ae35) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb724,	// (0x0003ae35) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5b,	// (0x0003f16c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5b,	// (0x0003f16c) form_field_slider_wide_pane_vc_t

0x229c,	// (0x000319ad) input_focus_pane_cp10_vc_ParamLimits

0x229c,	// (0x000319ad) input_focus_pane_cp10_vc

0xb750,	// (0x0003ae61) slider_cont_pane_cp1_vc_ParamLimits

0xb750,	// (0x0003ae61) slider_cont_pane_cp1_vc

0xb762,	// (0x0003ae73) slider_form_pane_g1_cp2

0xb572,	// (0x0003ac83) slider_form_pane_g2_cp2

0xb78f,	// (0x0003aea0) form_field_slider_pane_vc_t3

0xb79d,	// (0x0003aeae) form_field_slider_pane_vc_t4

0xb7ab,	// (0x0003aebc) slider_form_pane_vc_ParamLimits

0xb7ab,	// (0x0003aebc) slider_form_pane_vc

0xb7b8,	// (0x0003aec9) form_field_slider_pane_vc_t1_ParamLimits

0xb7b8,	// (0x0003aec9) form_field_slider_pane_vc_t1

0xb724,	// (0x0003ae35) form_field_slider_pane_vc_t2_ParamLimits

0xb724,	// (0x0003ae35) form_field_slider_pane_vc_t2

0x0001,

0xfa6d,	// (0x0003f17e) form_field_slider_pane_vc_t_ParamLimits

0xfa6d,	// (0x0003f17e) form_field_slider_pane_vc_t

0x229c,	// (0x000319ad) input_focus_pane_cp9_vc_ParamLimits

0x229c,	// (0x000319ad) input_focus_pane_cp9_vc

0xb7ce,	// (0x0003aedf) slider_cont_pane_vc_ParamLimits

0xb7ce,	// (0x0003aedf) slider_cont_pane_vc

0xb7e2,	// (0x0003aef3) list_form_graphic_pane_cp_vc_ParamLimits

0xb7e2,	// (0x0003aef3) list_form_graphic_pane_cp_vc

0x9a98,	// (0x000391a9) form_field_popup_wide_pane_vc_g1

0xb7f7,	// (0x0003af08) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb7f7,	// (0x0003af08) form_field_popup_wide_pane_vc_t1

0x28ec,	// (0x00031ffd) input_focus_pane_cp8_vc_ParamLimits

0x28ec,	// (0x00031ffd) input_focus_pane_cp8_vc

0xb83c,	// (0x0003af4d) list_form_wide_pane_vc_ParamLimits

0xb83c,	// (0x0003af4d) list_form_wide_pane_vc

0xb848,	// (0x0003af59) list_form_graphic_pane_vc_g1

0xb850,	// (0x0003af61) list_form_graphic_pane_vc_t1_ParamLimits

0xb850,	// (0x0003af61) list_form_graphic_pane_vc_t1

0x22aa,	// (0x000319bb) list_highlight_pane_cp5_vc_ParamLimits

0x22aa,	// (0x000319bb) list_highlight_pane_cp5_vc

0xb86c,	// (0x0003af7d) list_form_graphic_pane_vc_ParamLimits

0xb86c,	// (0x0003af7d) list_form_graphic_pane_vc

0x9a98,	// (0x000391a9) form_field_popup_pane_vc_g1

0xb882,	// (0x0003af93) form_field_popup_pane_vc_t1_ParamLimits

0xb882,	// (0x0003af93) form_field_popup_pane_vc_t1

0x28ec,	// (0x00031ffd) input_focus_pane_cp7_vc_ParamLimits

0x28ec,	// (0x00031ffd) input_focus_pane_cp7_vc

0xb899,	// (0x0003afaa) list_form_pane_vc_ParamLimits

0xb899,	// (0x0003afaa) list_form_pane_vc

0xb8a5,	// (0x0003afb6) data_form_pane_vc_t1_ParamLimits

0xb8a5,	// (0x0003afb6) data_form_pane_vc_t1

0x2944,	// (0x00032055) input_focus_pane_vc_g1

0x294c,	// (0x0003205d) input_focus_pane_vc_g2

0x2954,	// (0x00032065) input_focus_pane_vc_g3

0x295c,	// (0x0003206d) input_focus_pane_vc_g4

0x2964,	// (0x00032075) input_focus_pane_vc_g5

0x296c,	// (0x0003207d) input_focus_pane_vc_g6

0x2974,	// (0x00032085) input_focus_pane_vc_g7

0x297c,	// (0x0003208d) input_focus_pane_vc_g8

0x2984,	// (0x00032095) input_focus_pane_vc_g9

0x2244,	// (0x00031955) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x0003ed78) input_focus_pane_vc_g

0x9a8c,	// (0x0003919d) data_form_pane_vc_ParamLimits

0x9a8c,	// (0x0003919d) data_form_pane_vc

0x9a98,	// (0x000391a9) form_field_data_pane_vc_g1

0xb8c2,	// (0x0003afd3) form_field_data_pane_vc_t1_ParamLimits

0xb8c2,	// (0x0003afd3) form_field_data_pane_vc_t1

0x28ec,	// (0x00031ffd) input_focus_pane_vc_ParamLimits

0x28ec,	// (0x00031ffd) input_focus_pane_vc

0xb8dc,	// (0x0003afed) button_value_adjust_pane_cp3_vc

0xb8e4,	// (0x0003aff5) button_value_adjust_pane_cp5_vc

0xb8ec,	// (0x0003affd) form_field_data_pane_vc_ParamLimits

0xb8ec,	// (0x0003affd) form_field_data_pane_vc

0xb907,	// (0x0003b018) form_field_data_pane_vc_cp2

0xb90f,	// (0x0003b020) form_field_data_wide_pane_vc_ParamLimits

0xb90f,	// (0x0003b020) form_field_data_wide_pane_vc

0xb929,	// (0x0003b03a) form_field_data_wide_pane_vc_cp2

0xb931,	// (0x0003b042) form_field_popup_pane_vc_ParamLimits

0xb931,	// (0x0003b042) form_field_popup_pane_vc

0xb94c,	// (0x0003b05d) form_field_popup_wide_pane_vc_ParamLimits

0xb94c,	// (0x0003b05d) form_field_popup_wide_pane_vc

0xb966,	// (0x0003b077) form_field_slider_pane_vc_ParamLimits

0xb966,	// (0x0003b077) form_field_slider_pane_vc

0xb979,	// (0x0003b08a) form_field_slider_wide_pane_vc_ParamLimits

0xb979,	// (0x0003b08a) form_field_slider_wide_pane_vc

0xb98c,	// (0x0003b09d) grid_touch_1_pane_ParamLimits

0xb98c,	// (0x0003b09d) grid_touch_1_pane

0xb998,	// (0x0003b0a9) grid_touch_2_pane_ParamLimits

0xb998,	// (0x0003b0a9) grid_touch_2_pane

0x941f,	// (0x00038b30) touch_pane_g1_ParamLimits

0x941f,	// (0x00038b30) touch_pane_g1

0xb9b2,	// (0x0003b0c3) cell_app_pane_cp_wide_ParamLimits

0xb9b2,	// (0x0003b0c3) cell_app_pane_cp_wide

0xb9c3,	// (0x0003b0d4) grid_popup_fast_wide_pane_ParamLimits

0xb9c3,	// (0x0003b0d4) grid_popup_fast_wide_pane

0xb9d7,	// (0x0003b0e8) scroll_pane_cp19_ParamLimits

0xb9d7,	// (0x0003b0e8) scroll_pane_cp19

0x224e,	// (0x0003195f) bg_popup_window_pane_cp20

0xb9eb,	// (0x0003b0fc) listscroll_popup_fast_wide_pane

0xb9f3,	// (0x0003b104) grid_indicator_nsta_pane

0xba05,	// (0x0003b116) clock_nsta_pane_g1

0xba0e,	// (0x0003b11f) clock_nsta_pane_t1

0xba2a,	// (0x0003b13b) cell_indicator_nsta_pane_ParamLimits

0xba2a,	// (0x0003b13b) cell_indicator_nsta_pane

0xba5f,	// (0x0003b170) cell_indicator_nsta_pane_g1

0xba6d,	// (0x0003b17e) cell_indicator_nsta_pane_g2

0x0001,

0xfa7e,	// (0x0003f18f) cell_indicator_nsta_pane_g

0xba80,	// (0x0003b191) clock_nsta_pane_cp

0xba89,	// (0x0003b19a) indicator_nsta_pane_cp

0xba93,	// (0x0003b1a4) nsta_clock_indic_pane_g1

0x22e6,	// (0x000319f7) grid_indicator_pane

0x6714,	// (0x00035e25) scroll_pane_cp29

0x6a84,	// (0x00036195) indicator_nsta_pane_cp2_ParamLimits

0x6a84,	// (0x00036195) indicator_nsta_pane_cp2

0x22aa,	// (0x000319bb) main_apps_wheel_pane

0x9c79,	// (0x0003938a) form_midp_field_text_pane_ParamLimits

0x9dc8,	// (0x000394d9) scroll_bar_cp050_ParamLimits

0xbaec,	// (0x0003b1fd) cell_indicator_pane_ParamLimits

0xbaec,	// (0x0003b1fd) cell_indicator_pane

0xbb04,	// (0x0003b215) cell_indicator_pane_g1

0xbb0e,	// (0x0003b21f) grid_wheel_folder_pane_ParamLimits

0xbb0e,	// (0x0003b21f) grid_wheel_folder_pane

0xbb22,	// (0x0003b233) list_wheel_apps_pane_ParamLimits

0xbb22,	// (0x0003b233) list_wheel_apps_pane

0xbb35,	// (0x0003b246) main_apps_wheel_pane_g1_ParamLimits

0xbb35,	// (0x0003b246) main_apps_wheel_pane_g1

0xbb51,	// (0x0003b262) main_apps_wheel_pane_g2_ParamLimits

0xbb51,	// (0x0003b262) main_apps_wheel_pane_g2

0x0001,

0xfa9a,	// (0x0003f1ab) main_apps_wheel_pane_g_ParamLimits

0xfa9a,	// (0x0003f1ab) main_apps_wheel_pane_g

0xbb6d,	// (0x0003b27e) main_apps_wheel_pane_t1_ParamLimits

0xbb6d,	// (0x0003b27e) main_apps_wheel_pane_t1

0xbb96,	// (0x0003b2a7) list_wheel_apps_pane_g1

0xbb9e,	// (0x0003b2af) list_wheel_apps_pane_g2

0xbba6,	// (0x0003b2b7) list_wheel_apps_pane_g3

0xbbae,	// (0x0003b2bf) list_wheel_apps_pane_g4

0xbbb8,	// (0x0003b2c9) list_wheel_apps_pane_g5

0x0004,

0xfa9f,	// (0x0003f1b0) list_wheel_apps_pane_g

0x8fc6,	// (0x000386d7) navi_icon_text_pane

0x94b8,	// (0x00038bc9) aid_fill_nsta

0xbbd9,	// (0x0003b2ea) navi_icon_text_pane_g1

0xbbe5,	// (0x0003b2f6) navi_icon_text_pane_t1

0x8e51,	// (0x00038562) list_set_graphic_pane_t1_ParamLimits

0x8e51,	// (0x00038562) list_set_graphic_pane_t1

0xa535,	// (0x00039c46) popup_midp_note_alarm_window_t6_ParamLimits

0xa535,	// (0x00039c46) popup_midp_note_alarm_window_t6

0xa547,	// (0x00039c58) popup_midp_note_alarm_window_t7_ParamLimits

0xa547,	// (0x00039c58) popup_midp_note_alarm_window_t7

0xa559,	// (0x00039c6a) popup_midp_note_alarm_window_t8_ParamLimits

0xa559,	// (0x00039c6a) popup_midp_note_alarm_window_t8

0xa56b,	// (0x00039c7c) popup_midp_note_alarm_window_t9_ParamLimits

0xa56b,	// (0x00039c7c) popup_midp_note_alarm_window_t9

0xa57d,	// (0x00039c8e) popup_midp_note_alarm_window_t10_ParamLimits

0xa57d,	// (0x00039c8e) popup_midp_note_alarm_window_t10

0xa58f,	// (0x00039ca0) popup_midp_note_alarm_window_t11_ParamLimits

0xa58f,	// (0x00039ca0) popup_midp_note_alarm_window_t11

0xa5a1,	// (0x00039cb2) scroll_pane_cp17_ParamLimits

0xa5a1,	// (0x00039cb2) scroll_pane_cp17

0x7566,	// (0x00036c77) volume_small_pane_cp_g1

0x7942,	// (0x00037053) volume_small_pane_cp_g2

0x794b,	// (0x0003705c) volume_small_pane_cp_g3

0x7954,	// (0x00037065) volume_small_pane_cp_g4

0x795d,	// (0x0003706e) volume_small_pane_cp_g5

0x7966,	// (0x00037077) volume_small_pane_cp_g6

0x796f,	// (0x00037080) volume_small_pane_cp_g7

0x7978,	// (0x00037089) volume_small_pane_cp_g8

0x7981,	// (0x00037092) volume_small_pane_cp_g9

0x798a,	// (0x0003709b) volume_small_pane_cp_g10

0x9233,	// (0x00038944) midp_ticker_pane_g1_ParamLimits

0x923f,	// (0x00038950) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x0003ee44) midp_ticker_pane_g_ParamLimits

0x924b,	// (0x0003895c) midp_ticker_pane_t1_ParamLimits

0x94ce,	// (0x00038bdf) aid_fill_nsta_2

0x9db4,	// (0x000394c5) list_form2_midp_pane

0xaf30,	// (0x0003a641) midp_editing_number_pane_ParamLimits

0xaf3f,	// (0x0003a650) midp_ticker_pane_ParamLimits

0xbbf7,	// (0x0003b308) form2_midp_field_pane

0xbc1b,	// (0x0003b32c) scroll_pane_cp51

0xbc3b,	// (0x0003b34c) form2_midp_button_pane_ParamLimits

0xbc3b,	// (0x0003b34c) form2_midp_button_pane

0xbc4d,	// (0x0003b35e) form2_midp_content_pane_ParamLimits

0xbc4d,	// (0x0003b35e) form2_midp_content_pane

0xbc67,	// (0x0003b378) form2_midp_field_choice_group_pane

0xbc6f,	// (0x0003b380) form2_midp_field_pane_g1

0xbc77,	// (0x0003b388) form2_midp_field_pane_g2

0xbc7f,	// (0x0003b390) form2_midp_field_pane_g3

0xbc87,	// (0x0003b398) form2_midp_field_pane_g4

0x0003,

0xfac4,	// (0x0003f1d5) form2_midp_field_pane_g

0xbc8f,	// (0x0003b3a0) form2_midp_gauge_slider_pane

0xbc97,	// (0x0003b3a8) form2_midp_gauge_wait_pane

0xbc9f,	// (0x0003b3b0) form2_midp_image_pane_ParamLimits

0xbc9f,	// (0x0003b3b0) form2_midp_image_pane

0xbcba,	// (0x0003b3cb) form2_midp_label_pane_ParamLimits

0xbcba,	// (0x0003b3cb) form2_midp_label_pane

0xbcd9,	// (0x0003b3ea) form2_midp_label_pane_cp_ParamLimits

0xbcd9,	// (0x0003b3ea) form2_midp_label_pane_cp

0xbcfa,	// (0x0003b40b) form2_midp_string_pane_ParamLimits

0xbcfa,	// (0x0003b40b) form2_midp_string_pane

0x4439,	// (0x00033b4a) form2_midp_text_pane_ParamLimits

0x4439,	// (0x00033b4a) form2_midp_text_pane

0xbd0c,	// (0x0003b41d) form2_midp_time_pane

0xbd1c,	// (0x0003b42d) input_focus_pane_cp51_ParamLimits

0xbd1c,	// (0x0003b42d) input_focus_pane_cp51

0xbd34,	// (0x0003b445) form2_midp_label_pane_t1_ParamLimits

0xbd34,	// (0x0003b445) form2_midp_label_pane_t1

0x445a,	// (0x00033b6b) form2_mdip_text_pane_t1_ParamLimits

0x445a,	// (0x00033b6b) form2_mdip_text_pane_t1

0x447e,	// (0x00033b8f) form2_midp_time_pane_t1

0xbd82,	// (0x0003b493) form2_midp_gauge_slider_pane_t1

0xbd94,	// (0x0003b4a5) form2_midp_gauge_slider_pane_t2

0xbda6,	// (0x0003b4b7) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacd,	// (0x0003f1de) form2_midp_gauge_slider_pane_t

0xbdb8,	// (0x0003b4c9) form2_midp_slider_pane

0xbdc4,	// (0x0003b4d5) form2_midp_gauge_wait_pane_t1

0xbdd2,	// (0x0003b4e3) form2_midp_wait_pane_ParamLimits

0xbdd2,	// (0x0003b4e3) form2_midp_wait_pane

0xbdfd,	// (0x0003b50e) list_single_2graphic_pane_cp4_ParamLimits

0xbdfd,	// (0x0003b50e) list_single_2graphic_pane_cp4

0x9af5,	// (0x00039206) list_single_midp_graphic_pane_cp_ParamLimits

0x9af5,	// (0x00039206) list_single_midp_graphic_pane_cp

0x224e,	// (0x0003195f) list_highlight_pane_cp20

0xbe16,	// (0x0003b527) list_single_2graphic_pane_g1_cp4

0xb3af,	// (0x0003aac0) list_single_2graphic_pane_g2_cp4

0xbe1e,	// (0x0003b52f) list_single_2graphic_pane_t1_cp4

0x22aa,	// (0x000319bb) list_highlight_pane_cp21

0xbe2d,	// (0x0003b53e) list_single_midp_graphic_pane_g4_cp

0xbe3c,	// (0x0003b54d) list_single_midp_graphic_pane_t1_cp

0xbe51,	// (0x0003b562) form2_mdip_string_pane_t1_ParamLimits

0xbe51,	// (0x0003b562) form2_mdip_string_pane_t1

0x224e,	// (0x0003195f) bg_wml_button_pane_cp2

0x2244,	// (0x00031955) form2_midp_image_pane_g1

0x3ebc,	// (0x000335cd) list_double_large_graphic_pane_g5_ParamLimits

0x3ebc,	// (0x000335cd) list_double_large_graphic_pane_g5

0x915d,	// (0x0003886e) midp_form_pane_ParamLimits

0x22aa,	// (0x000319bb) main_apps_wheel_pane_ParamLimits

0x71af,	// (0x000368c0) popup_preview_window_ParamLimits

0x71af,	// (0x000368c0) popup_preview_window

0x7396,	// (0x00036aa7) popup_touch_info_window_ParamLimits

0x7396,	// (0x00036aa7) popup_touch_info_window

0x73b8,	// (0x00036ac9) popup_touch_menu_window_ParamLimits

0x73b8,	// (0x00036ac9) popup_touch_menu_window

0x223a,	// (0x0003194b) bg_popup_sub_pane_cp6

0xbeed,	// (0x0003b5fe) list_touch_menu_pane

0xbef5,	// (0x0003b606) list_single_touch_menu_pane_ParamLimits

0xbef5,	// (0x0003b606) list_single_touch_menu_pane

0xbf0d,	// (0x0003b61e) list_single_touch_menu_pane_t1

0x22aa,	// (0x000319bb) bg_popup_sub_pane_cp7_ParamLimits

0x22aa,	// (0x000319bb) bg_popup_sub_pane_cp7

0xbf1b,	// (0x0003b62c) heading_sub_pane

0xbf23,	// (0x0003b634) list_touch_info_pane_ParamLimits

0xbf23,	// (0x0003b634) list_touch_info_pane

0xbf32,	// (0x0003b643) list_single_touch_info_pane_ParamLimits

0xbf32,	// (0x0003b643) list_single_touch_info_pane

0xbf44,	// (0x0003b655) list_single_touch_info_pane_t1

0xbf52,	// (0x0003b663) list_single_touch_info_pane_t2

0x0001,

0xfadb,	// (0x0003f1ec) list_single_touch_info_pane_t

0x9155,	// (0x00038866) bg_popup_heading_pane_cp

0xbf60,	// (0x0003b671) heading_sub_pane_t1

0x9a26,	// (0x00039137) bg_popup_preview_window_pane_cp_ParamLimits

0x9a26,	// (0x00039137) bg_popup_preview_window_pane_cp

0xbf1b,	// (0x0003b62c) heading_preview_pane

0xbf23,	// (0x0003b634) list_preview_pane_ParamLimits

0xbf23,	// (0x0003b634) list_preview_pane

0xbf6e,	// (0x0003b67f) popup_preview_window_g1

0xbf32,	// (0x0003b643) list_single_preview_pane_ParamLimits

0xbf32,	// (0x0003b643) list_single_preview_pane

0xbf76,	// (0x0003b687) list_single_preview_pane_g1

0xbf7e,	// (0x0003b68f) list_single_preview_pane_t1

0xbf44,	// (0x0003b655) list_single_preview_pane_t2

0x0001,

0xfae0,	// (0x0003f1f1) list_single_preview_pane_t

0xbf8c,	// (0x0003b69d) bg_popup_heading_pane_cp2_ParamLimits

0xbf8c,	// (0x0003b69d) bg_popup_heading_pane_cp2

0xbfa2,	// (0x0003b6b3) heading_preview_pane_g1

0xbfaa,	// (0x0003b6bb) heading_preview_pane_t1_ParamLimits

0xbfaa,	// (0x0003b6bb) heading_preview_pane_t1

0x22fd,	// (0x00031a0e) soft_indicator_pane_t1_ParamLimits

0x285f,	// (0x00031f70) scroll_pane_ParamLimits

0x6610,	// (0x00035d21) scroll_sc2_left_pane

0x6619,	// (0x00035d2a) scroll_sc2_right_pane

0x6638,	// (0x00035d49) scroll_bg_pane_g1_ParamLimits

0x664d,	// (0x00035d5e) scroll_bg_pane_g2_ParamLimits

0x6665,	// (0x00035d76) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x0003edcf) scroll_bg_pane_g_ParamLimits

0x6638,	// (0x00035d49) scroll_handle_pane_g1_ParamLimits

0x6687,	// (0x00035d98) scroll_handle_pane_g2_ParamLimits

0x6665,	// (0x00035d76) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x0003edd6) scroll_handle_pane_g_ParamLimits

0x6df4,	// (0x00036505) popup_choice_list_window_ParamLimits

0x6df4,	// (0x00036505) popup_choice_list_window

0x98fc,	// (0x0003900d) choice_list_pane

0x997e,	// (0x0003908f) cell_toolbar_pane_t1

0x99a6,	// (0x000390b7) toolbar_button_pane_ParamLimits

0xaa6b,	// (0x0003a17c) ai_gene_pane_1_t2_ParamLimits

0xaa6b,	// (0x0003a17c) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x0003effe) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x0003effe) ai_gene_pane_1_t

0xbfc7,	// (0x0003b6d8) scroll_sc2_left_pane_g1

0xbfc7,	// (0x0003b6d8) scroll_sc2_right_pane_g1

0x947c,	// (0x00038b8d) bg_popup_sub_pane_cp10

0xbfd1,	// (0x0003b6e2) list_choice_list_pane

0xbfea,	// (0x0003b6fb) list_single_choice_list_pane_ParamLimits

0xbfea,	// (0x0003b6fb) list_single_choice_list_pane

0xc002,	// (0x0003b713) list_single_choice_list_pane_g1

0x2a4d,	// (0x0003215e) list_single_choice_list_pane_t1_ParamLimits

0x2a4d,	// (0x0003215e) list_single_choice_list_pane_t1

0xc00a,	// (0x0003b71b) choice_list_pane_g1

0xc012,	// (0x0003b723) choice_list_pane_t1

0x223a,	// (0x0003194b) input_focus_pane_cp11

0x636f,	// (0x00035a80) title_pane_stacon_g2_ParamLimits

0x636f,	// (0x00035a80) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x0003edb5) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0003edb5) title_pane_stacon_g

0x9155,	// (0x00038866) cursor_press_pane

0x6eae,	// (0x000365bf) popup_fep_hwr_window_ParamLimits

0x6eae,	// (0x000365bf) popup_fep_hwr_window

0x6f38,	// (0x00036649) popup_fep_vkb_window_ParamLimits

0x6f38,	// (0x00036649) popup_fep_vkb_window

0xc020,	// (0x0003b731) cursor_press_pane_g1

0x0002,

0xfb09,	// (0x0003f21a) fep_vkb_side_pane_g_ParamLimits

0x79cc,	// (0x000370dd) fep_hwr_candidate_pane_ParamLimits

0x79cc,	// (0x000370dd) fep_hwr_candidate_pane

0x79f6,	// (0x00037107) fep_hwr_side_pane_ParamLimits

0x79f6,	// (0x00037107) fep_hwr_side_pane

0x7a18,	// (0x00037129) fep_hwr_top_pane_ParamLimits

0x7a18,	// (0x00037129) fep_hwr_top_pane

0x7a30,	// (0x00037141) fep_hwr_write_pane_ParamLimits

0x7a30,	// (0x00037141) fep_hwr_write_pane

0xfb09,	// (0x0003f21a) fep_vkb_side_pane_g

0xc028,	// (0x0003b739) fep_hwr_top_pane_g1

0xc03a,	// (0x0003b74b) fep_hwr_top_pane_g2

0x7a6a,	// (0x0003717b) fep_hwr_top_pane_g3

0x0002,

0xfae5,	// (0x0003f1f6) fep_hwr_top_pane_g

0x7a7f,	// (0x00037190) fep_hwr_top_text_pane

0x67dc,	// (0x00035eed) fep_hwr_top_text_pane_g1

0xc07c,	// (0x0003b78d) fep_hwr_top_text_pane_t1

0x7b89,	// (0x0003729a) fep_hwr_candidate_pane_g1

0xc2c7,	// (0x0003b9d8) fep_vkb_keypad_pane_g3_ParamLimits

0xc2c7,	// (0x0003b9d8) fep_vkb_keypad_pane_g3

0xc2f3,	// (0x0003ba04) fep_vkb_keypad_pane_g4_ParamLimits

0xc2f3,	// (0x0003ba04) fep_vkb_keypad_pane_g4

0xc36a,	// (0x0003ba7b) fep_vkb_bottom_pane_g2_ParamLimits

0xc36a,	// (0x0003ba7b) fep_vkb_bottom_pane_g2

0x0001,

0xfb10,	// (0x0003f221) fep_vkb_bottom_pane_g_ParamLimits

0xfb10,	// (0x0003f221) fep_vkb_bottom_pane_g

0xbfc7,	// (0x0003b6d8) cell_vkb_side_pane_g2

0x0001,

0xfb1a,	// (0x0003f22b) cell_vkb_side_pane_g

0xc3f5,	// (0x0003bb06) cell_vkb_side_pane_t1

0xc403,	// (0x0003bb14) cell_vkb_side_pane_t1_copy1

0xbfc7,	// (0x0003b6d8) bg_fep_vkb_candidate_pane_g2

0xc547,	// (0x0003bc58) cell_vkb_candidate_pane_ParamLimits

0xc08a,	// (0x0003b79b) aid_size_cell_vkb_ParamLimits

0xc08a,	// (0x0003b79b) aid_size_cell_vkb

0xc547,	// (0x0003bc58) cell_vkb_candidate_pane

0x7bb0,	// (0x000372c1) bg_popup_fep_shadow_pane_g1

0xc11c,	// (0x0003b82d) fep_vkb_bottom_pane_ParamLimits

0xc11c,	// (0x0003b82d) fep_vkb_bottom_pane

0xc159,	// (0x0003b86a) fep_vkb_candidate_pane_ParamLimits

0xc159,	// (0x0003b86a) fep_vkb_candidate_pane

0xc175,	// (0x0003b886) fep_vkb_keypad_pane_ParamLimits

0xc175,	// (0x0003b886) fep_vkb_keypad_pane

0xc1a8,	// (0x0003b8b9) fep_vkb_side_pane_ParamLimits

0xc1a8,	// (0x0003b8b9) fep_vkb_side_pane

0xc1e4,	// (0x0003b8f5) fep_vkb_top_pane_ParamLimits

0xc1e4,	// (0x0003b8f5) fep_vkb_top_pane

0xc220,	// (0x0003b931) fep_vkb_top_pane_g1_ParamLimits

0xc220,	// (0x0003b931) fep_vkb_top_pane_g1

0xc22f,	// (0x0003b940) fep_vkb_top_pane_g2_ParamLimits

0xc22f,	// (0x0003b940) fep_vkb_top_pane_g2

0xc23e,	// (0x0003b94f) fep_vkb_top_pane_g3_ParamLimits

0xc23e,	// (0x0003b94f) fep_vkb_top_pane_g3

0x0003,

0xfb00,	// (0x0003f211) fep_vkb_top_pane_g_ParamLimits

0xfb00,	// (0x0003f211) fep_vkb_top_pane_g

0xc25c,	// (0x0003b96d) fep_vkb_top_text_pane_ParamLimits

0xc25c,	// (0x0003b96d) fep_vkb_top_text_pane

0xc26d,	// (0x0003b97e) fep_vkb_side_pane_g1_ParamLimits

0xc26d,	// (0x0003b97e) fep_vkb_side_pane_g1

0xc2b6,	// (0x0003b9c7) grid_vkb_side_pane_ParamLimits

0xc2b6,	// (0x0003b9c7) grid_vkb_side_pane

0x7bb8,	// (0x000372c9) bg_popup_fep_shadow_pane_g2

0x7bc1,	// (0x000372d2) bg_popup_fep_shadow_pane_g3

0x7bc9,	// (0x000372da) bg_popup_fep_shadow_pane_g4

0x7bd2,	// (0x000372e3) bg_popup_fep_shadow_pane_g5

0x7bdc,	// (0x000372ed) bg_popup_fep_shadow_pane_g6

0x7be4,	// (0x000372f5) bg_popup_fep_shadow_pane_g7

0x295c,	// (0x0003206d) bg_popup_fep_shadow_pane_g8

0xc315,	// (0x0003ba26) grid_vkb_keypad_number_pane_ParamLimits

0xc315,	// (0x0003ba26) grid_vkb_keypad_number_pane

0xc329,	// (0x0003ba3a) grid_vkb_keypad_pane_ParamLimits

0xc329,	// (0x0003ba3a) grid_vkb_keypad_pane

0xc34f,	// (0x0003ba60) fep_vkb_bottom_pane_g1_ParamLimits

0xc34f,	// (0x0003ba60) fep_vkb_bottom_pane_g1

0xc378,	// (0x0003ba89) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc378,	// (0x0003ba89) grid_vkb_keypad_bottom_left_pane

0xc38d,	// (0x0003ba9e) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc38d,	// (0x0003ba9e) grid_vkb_keypad_bottom_right_pane

0xc3a2,	// (0x0003bab3) fep_vkb_top_text_pane_g1

0xc3bd,	// (0x0003bace) fep_vkb_top_text_pane_t1

0xc3d2,	// (0x0003bae3) cell_vkb_side_pane_ParamLimits

0xc3d2,	// (0x0003bae3) cell_vkb_side_pane

0xbfc7,	// (0x0003b6d8) cell_vkb_side_pane_g1

0xc411,	// (0x0003bb22) cell_vkb_keypad_pane_ParamLimits

0xc411,	// (0x0003bb22) cell_vkb_keypad_pane

0xc49e,	// (0x0003bbaf) cell_vkb_keypad_pane_g1

0x0008,

0xfb2d,	// (0x0003f23e) bg_popup_fep_shadow_pane_g

0x7bf6,	// (0x00037307) cell_hwr_side_pane_g1

0x7bf6,	// (0x00037307) cell_hwr_side_pane_g2

0xc4a8,	// (0x0003bbb9) cell_vkb_keypad_pane_t1

0xc4b6,	// (0x0003bbc7) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4b6,	// (0x0003bbc7) cell_vkb_keypad_bottom_left_pane

0xc4d3,	// (0x0003bbe4) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4d3,	// (0x0003bbe4) cell_vkb_keypad_bottom_right_pane

0xbfc7,	// (0x0003b6d8) cell_vkb_keypad_bottom_left_pane_g1

0xbfc7,	// (0x0003b6d8) cell_vkb_keypad_bottom_right_pane_g1

0xc50c,	// (0x0003bc1d) cell_vkb_keypad_number_pane_ParamLimits

0xc50c,	// (0x0003bc1d) cell_vkb_keypad_number_pane

0xc52b,	// (0x0003bc3c) cell_vkb_keypad_number_pane_g1

0xc535,	// (0x0003bc46) cell_vkb_keypad_number_pane_g2

0xc53e,	// (0x0003bc4f) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1f,	// (0x0003f230) cell_vkb_keypad_number_pane_g

0xc4a8,	// (0x0003bbb9) cell_vkb_keypad_number_pane_t1

0xc568,	// (0x0003bc79) fep_vkb_candidate_pane_g1

0x0001,

0xfb40,	// (0x0003f251) cell_hwr_side_pane_g

0xc581,	// (0x0003bc92) cell_hwr_side_pane_t1

0x7c00,	// (0x00037311) cell_hwr_side_pane_t1_copy1

0x7c0e,	// (0x0003731f) cell_hwr_candidate_pane_g1

0x7c3d,	// (0x0003734e) cell_hwr_candidate_pane_t1

0xbfc7,	// (0x0003b6d8) cell_vkb_candidate_pane_g2

0xc5c5,	// (0x0003bcd6) cell_vkb_candidate_pane_t1

0x7993,	// (0x000370a4) bg_popup_fep_shadow_pane_ParamLimits

0x7993,	// (0x000370a4) bg_popup_fep_shadow_pane

0x7a4a,	// (0x0003715b) bg_fep_hwr_top_pane_g4

0xc04c,	// (0x0003b75d) bg_hwr_side_pane_g1_ParamLimits

0xc04c,	// (0x0003b75d) bg_hwr_side_pane_g1

0x7abd,	// (0x000371ce) cell_hwr_side_pane_ParamLimits

0x7abd,	// (0x000371ce) cell_hwr_side_pane

0x7afa,	// (0x0003720b) fep_hwr_write_pane_g1_ParamLimits

0x7afa,	// (0x0003720b) fep_hwr_write_pane_g1

0x7b07,	// (0x00037218) fep_hwr_write_pane_g2_ParamLimits

0x7b07,	// (0x00037218) fep_hwr_write_pane_g2

0x7b14,	// (0x00037225) fep_hwr_write_pane_g3_ParamLimits

0x7b14,	// (0x00037225) fep_hwr_write_pane_g3

0x7b22,	// (0x00037233) fep_hwr_write_pane_g4_ParamLimits

0x7b22,	// (0x00037233) fep_hwr_write_pane_g4

0x0005,

0xfaec,	// (0x0003f1fd) fep_hwr_write_pane_g_ParamLimits

0xfaec,	// (0x0003f1fd) fep_hwr_write_pane_g

0x7a4a,	// (0x0003715b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7a4a,	// (0x0003715b) bg_fep_hwr_candidate_pane_g2

0x7b37,	// (0x00037248) cell_hwr_candidate_pane_ParamLimits

0x7b37,	// (0x00037248) cell_hwr_candidate_pane

0x7b89,	// (0x0003729a) fep_hwr_candidate_pane_g1_ParamLimits

0xc0b8,	// (0x0003b7c9) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc0b8,	// (0x0003b7c9) bg_popup_fep_shadow_pane_cp2

0xc24e,	// (0x0003b95f) fep_vkb_top_pane_g4_ParamLimits

0xc24e,	// (0x0003b95f) fep_vkb_top_pane_g4

0xc294,	// (0x0003b9a5) fep_vkb_side_pane_g2_ParamLimits

0xc294,	// (0x0003b9a5) fep_vkb_side_pane_g2

0x5edc,	// (0x000355ed) list_setting_pane_t4_ParamLimits

0x5edc,	// (0x000355ed) list_setting_pane_t4

0x5f70,	// (0x00035681) list_setting_number_pane_t5_ParamLimits

0x5f70,	// (0x00035681) list_setting_number_pane_t5

0x6842,	// (0x00035f53) list_double_heading_pane_cp2_ParamLimits

0x6842,	// (0x00035f53) list_double_heading_pane_cp2

0xc5d3,	// (0x0003bce4) list_double_heading_pane_g1_cp2_ParamLimits

0xc5d3,	// (0x0003bce4) list_double_heading_pane_g1_cp2

0xc5df,	// (0x0003bcf0) list_double_heading_pane_g2_cp2_ParamLimits

0xc5df,	// (0x0003bcf0) list_double_heading_pane_g2_cp2

0xc5f3,	// (0x0003bd04) list_double_heading_pane_t1_cp2_ParamLimits

0xc5f3,	// (0x0003bd04) list_double_heading_pane_t1_cp2

0xc609,	// (0x0003bd1a) list_double_heading_pane_t2_cp2_ParamLimits

0xc609,	// (0x0003bd1a) list_double_heading_pane_t2_cp2

0x2232,	// (0x00031943) aid_value_unit2

0x5694,	// (0x00034da5) popup_preview_fixed_window

0x23dd,	// (0x00031aee) bg_popup_preview_window_pane_cp02

0xc61b,	// (0x0003bd2c) list_preview_fixed_pane

0xc661,	// (0x0003bd72) list_empty_pane_fp_ParamLimits

0xc661,	// (0x0003bd72) list_empty_pane_fp

0xc661,	// (0x0003bd72) list_single_cale_day_pane_fp_ParamLimits

0xc661,	// (0x0003bd72) list_single_cale_day_pane_fp

0xc661,	// (0x0003bd72) list_single_graphic_heading_pane_fp_ParamLimits

0xc661,	// (0x0003bd72) list_single_graphic_heading_pane_fp

0xc661,	// (0x0003bd72) list_single_graphic_pane_fp_ParamLimits

0xc661,	// (0x0003bd72) list_single_graphic_pane_fp

0xc661,	// (0x0003bd72) list_single_heading_pane_fp_ParamLimits

0xc661,	// (0x0003bd72) list_single_heading_pane_fp

0xc661,	// (0x0003bd72) list_single_pane_fp_ParamLimits

0xc661,	// (0x0003bd72) list_single_pane_fp

0xc67a,	// (0x0003bd8b) list_single_pane_fp_g1_ParamLimits

0xc67a,	// (0x0003bd8b) list_single_pane_fp_g1

0x42f5,	// (0x00033a06) list_single_pane_fp_g2_ParamLimits

0x42f5,	// (0x00033a06) list_single_pane_fp_g2

0x4491,	// (0x00033ba2) list_single_pane_fp_g3_ParamLimits

0x4491,	// (0x00033ba2) list_single_pane_fp_g3

0xc686,	// (0x0003bd97) list_single_pane_fp_g4_ParamLimits

0xc686,	// (0x0003bd97) list_single_pane_fp_g4

0x0003,

0xfb53,	// (0x0003f264) list_single_pane_fp_g_ParamLimits

0xfb53,	// (0x0003f264) list_single_pane_fp_g

0x44a5,	// (0x00033bb6) list_single_pane_fp_t1_ParamLimits

0x44a5,	// (0x00033bb6) list_single_pane_fp_t1

0x44bc,	// (0x00033bcd) list_single_graphic_pane_fp_g1_ParamLimits

0x44bc,	// (0x00033bcd) list_single_graphic_pane_fp_g1

0xc67a,	// (0x0003bd8b) list_single_graphic_pane_fp_g2_ParamLimits

0xc67a,	// (0x0003bd8b) list_single_graphic_pane_fp_g2

0x42f5,	// (0x00033a06) list_single_graphic_pane_fp_g3_ParamLimits

0x42f5,	// (0x00033a06) list_single_graphic_pane_fp_g3

0x4491,	// (0x00033ba2) list_single_graphic_pane_fp_g4_ParamLimits

0x4491,	// (0x00033ba2) list_single_graphic_pane_fp_g4

0xc686,	// (0x0003bd97) list_single_graphic_pane_fp_g5_ParamLimits

0xc686,	// (0x0003bd97) list_single_graphic_pane_fp_g5

0x0004,

0xfb5c,	// (0x0003f26d) list_single_graphic_pane_fp_g_ParamLimits

0xfb5c,	// (0x0003f26d) list_single_graphic_pane_fp_g

0x44c8,	// (0x00033bd9) list_single_graphic_pane_fp_t1_ParamLimits

0x44c8,	// (0x00033bd9) list_single_graphic_pane_fp_t1

0x44bc,	// (0x00033bcd) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x44bc,	// (0x00033bcd) list_single_graphic_heading_pane_fp_g1

0xc67a,	// (0x0003bd8b) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc67a,	// (0x0003bd8b) list_single_graphic_heading_pane_fp_g2

0x42f5,	// (0x00033a06) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x42f5,	// (0x00033a06) list_single_graphic_heading_pane_fp_g3

0x4491,	// (0x00033ba2) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4491,	// (0x00033ba2) list_single_graphic_heading_pane_fp_g4

0xc686,	// (0x0003bd97) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc686,	// (0x0003bd97) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x0003f26d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x0003f26d) list_single_graphic_heading_pane_fp_g

0x44de,	// (0x00033bef) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x44de,	// (0x00033bef) list_single_graphic_heading_pane_fp_t1

0x44f4,	// (0x00033c05) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x44f4,	// (0x00033c05) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb67,	// (0x0003f278) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb67,	// (0x0003f278) list_single_graphic_heading_pane_fp_t

0x4506,	// (0x00033c17) list_single_cale_day_pane_fp_g1_ParamLimits

0x4506,	// (0x00033c17) list_single_cale_day_pane_fp_g1

0xc692,	// (0x0003bda3) list_single_cale_day_pane_fp_g2_ParamLimits

0xc692,	// (0x0003bda3) list_single_cale_day_pane_fp_g2

0x453e,	// (0x00033c4f) list_single_cale_day_pane_fp_g3_ParamLimits

0x453e,	// (0x00033c4f) list_single_cale_day_pane_fp_g3

0x4566,	// (0x00033c77) list_single_cale_day_pane_fp_g4_ParamLimits

0x4566,	// (0x00033c77) list_single_cale_day_pane_fp_g4

0x458a,	// (0x00033c9b) list_single_cale_day_pane_fp_g5_ParamLimits

0x458a,	// (0x00033c9b) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6c,	// (0x0003f27d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6c,	// (0x0003f27d) list_single_cale_day_pane_fp_g

0x45ae,	// (0x00033cbf) list_single_cale_day_pane_fp_t1_ParamLimits

0x45ae,	// (0x00033cbf) list_single_cale_day_pane_fp_t1

0x45d4,	// (0x00033ce5) list_single_cale_day_pane_fp_t2_ParamLimits

0x45d4,	// (0x00033ce5) list_single_cale_day_pane_fp_t2

0x45ed,	// (0x00033cfe) list_single_cale_day_pane_fp_t3_ParamLimits

0x45ed,	// (0x00033cfe) list_single_cale_day_pane_fp_t3

0x0002,

0xfb77,	// (0x0003f288) list_single_cale_day_pane_fp_t_ParamLimits

0xfb77,	// (0x0003f288) list_single_cale_day_pane_fp_t

0xc67a,	// (0x0003bd8b) list_empty_pane_fp_g1_ParamLimits

0xc67a,	// (0x0003bd8b) list_empty_pane_fp_g1

0x4606,	// (0x00033d17) list_empty_pane_fp_t1

0x4614,	// (0x00033d25) list_empty_pane_fp_t2

0x0001,

0xfb7e,	// (0x0003f28f) list_empty_pane_fp_t

0xc67a,	// (0x0003bd8b) list_single_heading_pane_fp_g1_ParamLimits

0xc67a,	// (0x0003bd8b) list_single_heading_pane_fp_g1

0x42f5,	// (0x00033a06) list_single_heading_pane_fp_g2_ParamLimits

0x42f5,	// (0x00033a06) list_single_heading_pane_fp_g2

0x4491,	// (0x00033ba2) list_single_heading_pane_fp_g3_ParamLimits

0x4491,	// (0x00033ba2) list_single_heading_pane_fp_g3

0x0002,

0xfb83,	// (0x0003f294) list_single_heading_pane_fp_g_ParamLimits

0xfb83,	// (0x0003f294) list_single_heading_pane_fp_g

0x4622,	// (0x00033d33) list_single_heading_pane_fp_t1_ParamLimits

0x4622,	// (0x00033d33) list_single_heading_pane_fp_t1

0x4634,	// (0x00033d45) list_single_heading_pane_fp_t2_ParamLimits

0x4634,	// (0x00033d45) list_single_heading_pane_fp_t2

0x0001,

0xfb8a,	// (0x0003f29b) list_single_heading_pane_fp_t_ParamLimits

0xfb8a,	// (0x0003f29b) list_single_heading_pane_fp_t

0x61b6,	// (0x000358c7) aid_size_cell_fast

0x23c0,	// (0x00031ad1) soft_indicator_pane_cp1_t1

0x61f3,	// (0x00035904) cell_app_pane_cp2_ParamLimits

0x61f3,	// (0x00035904) cell_app_pane_cp2

0x79b5,	// (0x000370c6) fep_hwr_candidate_drop_down_list_pane

0x7ba3,	// (0x000372b4) fep_hwr_candidate_pane_g3_ParamLimits

0x7ba3,	// (0x000372b4) fep_hwr_candidate_pane_g3

0x3684,	// (0x00032d95) fep_hwr_candidate_pane_g4_ParamLimits

0x3684,	// (0x00032d95) fep_hwr_candidate_pane_g4

0x0002,

0xfaf9,	// (0x0003f20a) fep_hwr_candidate_pane_g_ParamLimits

0xfaf9,	// (0x0003f20a) fep_hwr_candidate_pane_g

0xc148,	// (0x0003b859) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc148,	// (0x0003b859) fep_vkb_candidate_drop_down_list_pane

0xc570,	// (0x0003bc81) fep_vkb_candidate_pane_g3

0xc578,	// (0x0003bc89) fep_vkb_candidate_pane_g4

0x0002,

0xfb26,	// (0x0003f237) fep_vkb_candidate_pane_g

0x7c0e,	// (0x0003731f) cell_hwr_candidate_pane_g1_ParamLimits

0x7c1c,	// (0x0003732d) cell_hwr_candidate_pane_g3_ParamLimits

0x7c1c,	// (0x0003732d) cell_hwr_candidate_pane_g3

0xdaa9,	// (0x0003d1ba) cell_hwr_candidate_pane_g4_ParamLimits

0xdaa9,	// (0x0003d1ba) cell_hwr_candidate_pane_g4

0x0002,

0xfb45,	// (0x0003f256) cell_hwr_candidate_pane_g_ParamLimits

0xfb45,	// (0x0003f256) cell_hwr_candidate_pane_g

0xc58f,	// (0x0003bca0) cell_vkb_candidate_pane_g3_ParamLimits

0xc58f,	// (0x0003bca0) cell_vkb_candidate_pane_g3

0xc5aa,	// (0x0003bcbb) cell_vkb_candidate_pane_g4_ParamLimits

0xc5aa,	// (0x0003bcbb) cell_vkb_candidate_pane_g4

0xc69e,	// (0x0003bdaf) cell_app_pane_cp2_g1_ParamLimits

0xc69e,	// (0x0003bdaf) cell_app_pane_cp2_g1

0xc6bc,	// (0x0003bdcd) cell_app_pane_cp2_g2_ParamLimits

0xc6bc,	// (0x0003bdcd) cell_app_pane_cp2_g2

0x0001,

0xfb8f,	// (0x0003f2a0) cell_app_pane_cp2_g_ParamLimits

0xfb8f,	// (0x0003f2a0) cell_app_pane_cp2_g

0xc6c8,	// (0x0003bdd9) cell_app_pane_cp2_t1_ParamLimits

0xc6c8,	// (0x0003bdd9) cell_app_pane_cp2_t1

0x28ec,	// (0x00031ffd) grid_highlight_pane_cp1_ParamLimits

0x28ec,	// (0x00031ffd) grid_highlight_pane_cp1

0x7c5b,	// (0x0003736c) cell_hwr_candidate_pane_cp1_ParamLimits

0x7c5b,	// (0x0003736c) cell_hwr_candidate_pane_cp1

0x7c0e,	// (0x0003731f) fep_hwr_candidate_drop_down_list_pane_g1

0x7c7f,	// (0x00037390) fep_hwr_candidate_drop_down_list_pane_g2

0x7c8c,	// (0x0003739d) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb94,	// (0x0003f2a5) fep_hwr_candidate_drop_down_list_pane_g

0x7c99,	// (0x000373aa) fep_hwr_candidate_drop_down_list_scroll_pane

0x7ca2,	// (0x000373b3) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7ca2,	// (0x000373b3) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7caf,	// (0x000373c0) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7caf,	// (0x000373c0) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7cbc,	// (0x000373cd) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7cbc,	// (0x000373cd) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7cc9,	// (0x000373da) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7cc9,	// (0x000373da) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7ce4,	// (0x000373f5) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7ce4,	// (0x000373f5) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7cff,	// (0x00037410) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7cff,	// (0x00037410) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7d1a,	// (0x0003742b) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7d1a,	// (0x0003742b) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7d35,	// (0x00037446) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7d35,	// (0x00037446) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9b,	// (0x0003f2ac) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9b,	// (0x0003f2ac) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc6da,	// (0x0003bdeb) cell_vkb_candidate_pane_cp1_ParamLimits

0xc6da,	// (0x0003bdeb) cell_vkb_candidate_pane_cp1

0xc24e,	// (0x0003b95f) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc24e,	// (0x0003b95f) fep_vkb_candidate_drop_down_list_pane_g1

0xc700,	// (0x0003be11) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc700,	// (0x0003be11) fep_vkb_candidate_drop_down_list_pane_g2

0xc70d,	// (0x0003be1e) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc70d,	// (0x0003be1e) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbac,	// (0x0003f2bd) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbac,	// (0x0003f2bd) fep_vkb_candidate_drop_down_list_pane_g

0xc71a,	// (0x0003be2b) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc71a,	// (0x0003be2b) fep_vkb_candidate_drop_down_list_scroll_pane

0xc727,	// (0x0003be38) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc727,	// (0x0003be38) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc734,	// (0x0003be45) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc734,	// (0x0003be45) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc740,	// (0x0003be51) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc740,	// (0x0003be51) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc74c,	// (0x0003be5d) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc74c,	// (0x0003be5d) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc76d,	// (0x0003be7e) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc76d,	// (0x0003be7e) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc78e,	// (0x0003be9f) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc78e,	// (0x0003be9f) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7af,	// (0x0003bec0) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7af,	// (0x0003bec0) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7d0,	// (0x0003bee1) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7d0,	// (0x0003bee1) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb3,	// (0x0003f2c4) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb3,	// (0x0003f2c4) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x57b4,	// (0x00034ec5) title_pane_g1_ParamLimits

0x57c1,	// (0x00034ed2) title_pane_g2_ParamLimits

0xf529,	// (0x0003ec3a) title_pane_g_ParamLimits

0x67cc,	// (0x00035edd) aid_call2_pane

0x67d4,	// (0x00035ee5) aid_call_pane

0x67dc,	// (0x00035eed) popup_clock_analogue_window_g1

0x67dc,	// (0x00035eed) popup_clock_analogue_window_g2

0x67e4,	// (0x00035ef5) popup_clock_analogue_window_g3

0x67ed,	// (0x00035efe) popup_clock_analogue_window_g4

0x2244,	// (0x00031955) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x0003ede4) popup_clock_analogue_window_g

0x67f5,	// (0x00035f06) popup_clock_analogue_window_t1

0x68a2,	// (0x00035fb3) clock_digital_number_pane_ParamLimits

0x68a2,	// (0x00035fb3) clock_digital_number_pane

0x68ae,	// (0x00035fbf) clock_digital_number_pane_cp02_ParamLimits

0x68ae,	// (0x00035fbf) clock_digital_number_pane_cp02

0x68ba,	// (0x00035fcb) clock_digital_number_pane_cp03_ParamLimits

0x68ba,	// (0x00035fcb) clock_digital_number_pane_cp03

0x68c6,	// (0x00035fd7) clock_digital_number_pane_cp04_ParamLimits

0x68c6,	// (0x00035fd7) clock_digital_number_pane_cp04

0x68d2,	// (0x00035fe3) clock_digital_separator_pane_ParamLimits

0x68d2,	// (0x00035fe3) clock_digital_separator_pane

0x68de,	// (0x00035fef) popup_clock_digital_window_t1_ParamLimits

0x68de,	// (0x00035fef) popup_clock_digital_window_t1

0x2244,	// (0x00031955) clock_digital_number_pane_g1

0x2244,	// (0x00031955) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x0003edef) clock_digital_number_pane_g

0x2244,	// (0x00031955) clock_digital_separator_pane_g1

0x2244,	// (0x00031955) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x0003edef) clock_digital_separator_pane_g

0x94b8,	// (0x00038bc9) aid_fill_nsta_ParamLimits

0x9604,	// (0x00038d15) indicator_nsta_pane_ParamLimits

0x9795,	// (0x00038ea6) popup_clock_analogue_window

0x9795,	// (0x00038ea6) popup_clock_digital_window

0xb9f3,	// (0x0003b104) grid_indicator_nsta_pane_ParamLimits

0xba1c,	// (0x0003b12d) clock_nsta_pane_t2

0x0001,

0xfa79,	// (0x0003f18a) clock_nsta_pane_t

0x65b5,	// (0x00035cc6) aid_size_max_handle

0x65bf,	// (0x00035cd0) aid_size_min_handle

0x9155,	// (0x00038866) editor_scroll_pane

0xc7eb,	// (0x0003befc) ex_editor_pane

0x2a28,	// (0x00032139) scroll_pane_cp13

0x288b,	// (0x00031f9c) scroll_pane_cp14

0x682a,	// (0x00035f3b) scroll_pane_cp36

0x6858,	// (0x00035f69) list_single_graphic_hl_pane_cp2_ParamLimits

0x6858,	// (0x00035f69) list_single_graphic_hl_pane_cp2

0xaf78,	// (0x0003a689) list_single_graphic_hl_pane_ParamLimits

0xaf78,	// (0x0003a689) list_single_graphic_hl_pane

0x464a,	// (0x00033d5b) aid_size_min_hl_cp1

0xc7f3,	// (0x0003bf04) list_highlight_pane_cp34_ParamLimits

0xc7f3,	// (0x0003bf04) list_highlight_pane_cp34

0xc804,	// (0x0003bf15) list_single_graphic_hl_pane_g1_ParamLimits

0xc804,	// (0x0003bf15) list_single_graphic_hl_pane_g1

0x7d50,	// (0x00037461) list_single_graphic_hl_pane_g2_ParamLimits

0x7d50,	// (0x00037461) list_single_graphic_hl_pane_g2

0x7d50,	// (0x00037461) list_single_graphic_hl_pane_g3_ParamLimits

0x7d50,	// (0x00037461) list_single_graphic_hl_pane_g3

0x3e3a,	// (0x0003354b) list_single_graphic_hl_pane_g4_ParamLimits

0x3e3a,	// (0x0003354b) list_single_graphic_hl_pane_g4

0x7d5c,	// (0x0003746d) list_single_graphic_hl_pane_g5_ParamLimits

0x7d5c,	// (0x0003746d) list_single_graphic_hl_pane_g5

0x0004,

0xfbc4,	// (0x0003f2d5) list_single_graphic_hl_pane_g_ParamLimits

0xfbc4,	// (0x0003f2d5) list_single_graphic_hl_pane_g

0x7d70,	// (0x00037481) list_single_graphic_hl_pane_t1_ParamLimits

0x7d70,	// (0x00037481) list_single_graphic_hl_pane_t1

0xc811,	// (0x0003bf22) aid_size_min_hl_cp2

0xc81a,	// (0x0003bf2b) list_highlight_pane_cp34_cp2_ParamLimits

0xc81a,	// (0x0003bf2b) list_highlight_pane_cp34_cp2

0xc804,	// (0x0003bf15) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc804,	// (0x0003bf15) list_single_graphic_hl_pane_g1_cp2

0xc827,	// (0x0003bf38) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc827,	// (0x0003bf38) list_single_graphic_hl_pane_g2_cp2

0xc833,	// (0x0003bf44) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc833,	// (0x0003bf44) list_single_graphic_hl_pane_g3_cp2

0xc070,	// (0x0003b781) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc070,	// (0x0003b781) list_single_graphic_hl_pane_g4_cp2

0xc841,	// (0x0003bf52) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc841,	// (0x0003bf52) list_single_graphic_hl_pane_g5_cp2

0x6c98,	// (0x000363a9) control_pane_g4_ParamLimits

0x6c98,	// (0x000363a9) control_pane_g4

0x947c,	// (0x00038b8d) bg_popup_sub_pane_cp10_ParamLimits

0xbfd1,	// (0x0003b6e2) list_choice_list_pane_ParamLimits

0xbfe0,	// (0x0003b6f1) scroll_pane_cp23

0x23dd,	// (0x00031aee) bg_popup_preview_window_pane_cp02_ParamLimits

0xc61b,	// (0x0003bd2c) list_preview_fixed_pane_ParamLimits

0xc631,	// (0x0003bd42) list_preview_fixed_pane_cp_ParamLimits

0xc631,	// (0x0003bd42) list_preview_fixed_pane_cp

0xc63d,	// (0x0003bd4e) popup_preview_fixed_window_g1_ParamLimits

0xc63d,	// (0x0003bd4e) popup_preview_fixed_window_g1

0xc649,	// (0x0003bd5a) popup_preview_fixed_window_g2_ParamLimits

0xc649,	// (0x0003bd5a) popup_preview_fixed_window_g2

0x0002,

0xfb4c,	// (0x0003f25d) popup_preview_fixed_window_g_ParamLimits

0xfb4c,	// (0x0003f25d) popup_preview_fixed_window_g

0x6454,	// (0x00035b65) aid_navi_side_left_pane_ParamLimits

0x6469,	// (0x00035b7a) aid_navi_side_right_pane_ParamLimits

0x6481,	// (0x00035b92) navi_icon_pane_stacon_ParamLimits

0x6495,	// (0x00035ba6) navi_navi_pane_stacon_ParamLimits

0x6481,	// (0x00035b92) navi_text_pane_stacon_ParamLimits

0x554b,	// (0x00034c5c) main_text_info_pane

0xc86b,	// (0x0003bf7c) listscroll_text_info_pane

0xc873,	// (0x0003bf84) list_text_info_pane_ParamLimits

0xc873,	// (0x0003bf84) list_text_info_pane

0xc882,	// (0x0003bf93) scroll_pane_cp24_ParamLimits

0xc882,	// (0x0003bf93) scroll_pane_cp24

0xc8a0,	// (0x0003bfb1) list_text_info_pane_t1_ParamLimits

0xc8a0,	// (0x0003bfb1) list_text_info_pane_t1

0x6e16,	// (0x00036527) popup_fast_swap2_window_ParamLimits

0x6e16,	// (0x00036527) popup_fast_swap2_window

0xc8c5,	// (0x0003bfd6) aid_size_cell_fast2

0x223a,	// (0x0003194b) bg_popup_window_pane_cp17

0x9de8,	// (0x000394f9) heading_pane_cp2

0x9df0,	// (0x00039501) listscroll_fast2_pane

0xc8cf,	// (0x0003bfe0) grid_fast2_pane

0xc8d9,	// (0x0003bfea) listscroll_fast2_pane_g1

0xc8e3,	// (0x0003bff4) listscroll_fast2_pane_g2

0x0001,

0xfbcf,	// (0x0003f2e0) listscroll_fast2_pane_g

0x2a28,	// (0x00032139) scroll_pane_cp26

0xc8ed,	// (0x0003bffe) cell_fast2_pane_ParamLimits

0xc8ed,	// (0x0003bffe) cell_fast2_pane

0xc904,	// (0x0003c015) cell_fast2_pane_g1

0xc90d,	// (0x0003c01e) cell_fast2_pane_g2

0xc916,	// (0x0003c027) cell_fast2_pane_g3

0x0002,

0xfbd4,	// (0x0003f2e5) cell_fast2_pane_g

0x2652,	// (0x00031d63) grid_highlight_pane_cp9

0x6dd8,	// (0x000364e9) main_eswt_pane_ParamLimits

0x6dd8,	// (0x000364e9) main_eswt_pane

0xc897,	// (0x0003bfa8) list_single_text_info_pane

0xc91e,	// (0x0003c02f) eswt_ctrl_button_pane

0xc91e,	// (0x0003c02f) eswt_ctrl_canvas_pane

0xc926,	// (0x0003c037) eswt_ctrl_combo_pane

0xc91e,	// (0x0003c02f) eswt_ctrl_default_pane

0xc91e,	// (0x0003c02f) eswt_ctrl_label_pane

0xc92e,	// (0x0003c03f) eswt_ctrl_wait_pane

0xc936,	// (0x0003c047) eswt_shell_pane

0x223a,	// (0x0003194b) listscroll_eswt_app_pane

0xc956,	// (0x0003c067) popup_eswt_tasktip_window_ParamLimits

0xc956,	// (0x0003c067) popup_eswt_tasktip_window

0x9a26,	// (0x00039137) bg_popup_window_pane_cp18

0xc967,	// (0x0003c078) eswt_control_pane_g1_ParamLimits

0xc967,	// (0x0003c078) eswt_control_pane_g1

0xc974,	// (0x0003c085) eswt_control_pane_g2_ParamLimits

0xc974,	// (0x0003c085) eswt_control_pane_g2

0xc981,	// (0x0003c092) eswt_control_pane_g3_ParamLimits

0xc981,	// (0x0003c092) eswt_control_pane_g3

0xc98e,	// (0x0003c09f) eswt_control_pane_g4_ParamLimits

0xc98e,	// (0x0003c09f) eswt_control_pane_g4

0x0003,

0xfbdb,	// (0x0003f2ec) eswt_control_pane_g_ParamLimits

0xfbdb,	// (0x0003f2ec) eswt_control_pane_g

0x28ec,	// (0x00031ffd) bg_button_pane_ParamLimits

0x28ec,	// (0x00031ffd) bg_button_pane

0x2667,	// (0x00031d78) common_borders_pane_copy2_ParamLimits

0x2667,	// (0x00031d78) common_borders_pane_copy2

0xc99b,	// (0x0003c0ac) control_button_pane_g1_ParamLimits

0xc99b,	// (0x0003c0ac) control_button_pane_g1

0xc9a7,	// (0x0003c0b8) control_button_pane_g2_ParamLimits

0xc9a7,	// (0x0003c0b8) control_button_pane_g2

0xc9b3,	// (0x0003c0c4) control_button_pane_g3_ParamLimits

0xc9b3,	// (0x0003c0c4) control_button_pane_g3

0x0002,

0xfbe4,	// (0x0003f2f5) control_button_pane_g_ParamLimits

0xfbe4,	// (0x0003f2f5) control_button_pane_g

0xc9c7,	// (0x0003c0d8) control_button_pane_t1

0xc9d5,	// (0x0003c0e6) control_button_pane_t2

0x0001,

0xfbeb,	// (0x0003f2fc) control_button_pane_t

0x99b2,	// (0x000390c3) bg_button_pane_g1

0x99c2,	// (0x000390d3) bg_button_pane_g2

0x99ba,	// (0x000390cb) bg_button_pane_g3

0x99d2,	// (0x000390e3) bg_button_pane_g4

0x99ca,	// (0x000390db) bg_button_pane_g5

0x99da,	// (0x000390eb) bg_button_pane_g6

0x99e2,	// (0x000390f3) bg_button_pane_g7

0x99f2,	// (0x00039103) bg_button_pane_g8

0x99ea,	// (0x000390fb) bg_button_pane_g9

0x0008,

0xf841,	// (0x0003ef52) bg_button_pane_g

0xbf8c,	// (0x0003b69d) common_borders_pane_ParamLimits

0xbf8c,	// (0x0003b69d) common_borders_pane

0xc967,	// (0x0003c078) eswt_control_pane_g1_copy1_ParamLimits

0xc967,	// (0x0003c078) eswt_control_pane_g1_copy1

0xc974,	// (0x0003c085) eswt_control_pane_g2_copy1_ParamLimits

0xc974,	// (0x0003c085) eswt_control_pane_g2_copy1

0xc981,	// (0x0003c092) eswt_control_pane_g3_copy1_ParamLimits

0xc981,	// (0x0003c092) eswt_control_pane_g3_copy1

0xc98e,	// (0x0003c09f) eswt_control_pane_g4_copy1_ParamLimits

0xc98e,	// (0x0003c09f) eswt_control_pane_g4_copy1

0xbfc7,	// (0x0003b6d8) bg_eswt_ctrl_canvas_pane_g1

0xbf8c,	// (0x0003b69d) common_borders_pane_cp2_ParamLimits

0xbf8c,	// (0x0003b69d) common_borders_pane_cp2

0xbf8c,	// (0x0003b69d) common_borders_pane_cp3_ParamLimits

0xbf8c,	// (0x0003b69d) common_borders_pane_cp3

0xc9e3,	// (0x0003c0f4) separator_horizontal_pane

0xc9eb,	// (0x0003c0fc) separator_vertical_pane

0xc967,	// (0x0003c078) eswt_control_pane_g1_copy2_ParamLimits

0xc967,	// (0x0003c078) eswt_control_pane_g1_copy2

0xc974,	// (0x0003c085) eswt_control_pane_g2_copy2_ParamLimits

0xc974,	// (0x0003c085) eswt_control_pane_g2_copy2

0xc981,	// (0x0003c092) eswt_control_pane_g3_copy2_ParamLimits

0xc981,	// (0x0003c092) eswt_control_pane_g3_copy2

0xc98e,	// (0x0003c09f) eswt_control_pane_g4_copy2_ParamLimits

0xc98e,	// (0x0003c09f) eswt_control_pane_g4_copy2

0x223a,	// (0x0003194b) common_borders_pane_cp4

0xc9f4,	// (0x0003c105) separator_horizontal_pane_g1

0xc9fd,	// (0x0003c10e) separator_horizontal_pane_g2

0xca06,	// (0x0003c117) separator_horizontal_pane_g3

0x0002,

0xfbf0,	// (0x0003f301) separator_horizontal_pane_g

0xc967,	// (0x0003c078) eswt_control_pane_g1_copy3_ParamLimits

0xc967,	// (0x0003c078) eswt_control_pane_g1_copy3

0xc974,	// (0x0003c085) eswt_control_pane_g2_copy3_ParamLimits

0xc974,	// (0x0003c085) eswt_control_pane_g2_copy3

0xc981,	// (0x0003c092) eswt_control_pane_g3_copy3_ParamLimits

0xc981,	// (0x0003c092) eswt_control_pane_g3_copy3

0xc98e,	// (0x0003c09f) eswt_control_pane_g4_copy3_ParamLimits

0xc98e,	// (0x0003c09f) eswt_control_pane_g4_copy3

0x223a,	// (0x0003194b) common_borders_pane_cp5

0xca0f,	// (0x0003c120) separator_vertical_pane_g1

0xca18,	// (0x0003c129) separator_vertical_pane_g2

0xca21,	// (0x0003c132) separator_vertical_pane_g3

0x0002,

0xfbf7,	// (0x0003f308) separator_vertical_pane_g

0xc967,	// (0x0003c078) eswt_control_pane_g1_copy4_ParamLimits

0xc967,	// (0x0003c078) eswt_control_pane_g1_copy4

0xc974,	// (0x0003c085) eswt_control_pane_g2_copy4_ParamLimits

0xc974,	// (0x0003c085) eswt_control_pane_g2_copy4

0xc981,	// (0x0003c092) eswt_control_pane_g3_copy4_ParamLimits

0xc981,	// (0x0003c092) eswt_control_pane_g3_copy4

0xc98e,	// (0x0003c09f) eswt_control_pane_g4_copy4_ParamLimits

0xc98e,	// (0x0003c09f) eswt_control_pane_g4_copy4

0xca2a,	// (0x0003c13b) eswt_ctrl_combo_button_pane

0xca32,	// (0x0003c143) eswt_ctrl_input_pane

0xca3a,	// (0x0003c14b) popup_choice_list_window_cp70

0xca42,	// (0x0003c153) eswt_ctrl_input_pane_t1

0x223a,	// (0x0003194b) input_focus_pane_cp70

0xbf8c,	// (0x0003b69d) bg_button_pane_cp70_ParamLimits

0xbf8c,	// (0x0003b69d) bg_button_pane_cp70

0xca50,	// (0x0003c161) eswt_ctrl_combo_button_pane_g1

0xca58,	// (0x0003c169) wait_bar_pane_cp70

0x9a26,	// (0x00039137) bg_popup_window_pane_cp70_ParamLimits

0x9a26,	// (0x00039137) bg_popup_window_pane_cp70

0xca60,	// (0x0003c171) popup_eswt_tasktip_window_t1

0xca76,	// (0x0003c187) wait_bar_pane_cp71_ParamLimits

0xca76,	// (0x0003c187) wait_bar_pane_cp71

0xca82,	// (0x0003c193) grid_eswt_app_pane

0x6610,	// (0x00035d21) scroll_pane_cp70

0xca8b,	// (0x0003c19c) cell_eswt_app_pane_ParamLimits

0xca8b,	// (0x0003c19c) cell_eswt_app_pane

0xcabd,	// (0x0003c1ce) cell_eswt_app_pane_g1_ParamLimits

0xcabd,	// (0x0003c1ce) cell_eswt_app_pane_g1

0xcaec,	// (0x0003c1fd) cell_eswt_app_pane_g2_ParamLimits

0xcaec,	// (0x0003c1fd) cell_eswt_app_pane_g2

0x0001,

0xfbfe,	// (0x0003f30f) cell_eswt_app_pane_g_ParamLimits

0xfbfe,	// (0x0003f30f) cell_eswt_app_pane_g

0xcb15,	// (0x0003c226) cell_eswt_app_pane_t1_ParamLimits

0xcb15,	// (0x0003c226) cell_eswt_app_pane_t1

0xcb47,	// (0x0003c258) grid_highlight_pane_cp70_ParamLimits

0xcb47,	// (0x0003c258) grid_highlight_pane_cp70

0x901b,	// (0x0003872c) set_content_pane_g1

0x9403,	// (0x00038b14) status_small_volume_pane

0x7d86,	// (0x00037497) status_small_volume_pane_g1

0x7d8e,	// (0x0003749f) volume_small2_pane

0x7d97,	// (0x000374a8) volume_small2_pane_g1

0x7da0,	// (0x000374b1) volume_small2_pane_g2

0x7da9,	// (0x000374ba) volume_small2_pane_g3

0x7db2,	// (0x000374c3) volume_small2_pane_g4

0x7dbb,	// (0x000374cc) volume_small2_pane_g5

0x7dc4,	// (0x000374d5) volume_small2_pane_g6

0x7dcd,	// (0x000374de) volume_small2_pane_g7

0x7dd6,	// (0x000374e7) volume_small2_pane_g8

0x7ddf,	// (0x000374f0) volume_small2_pane_g9

0x7de8,	// (0x000374f9) volume_small2_pane_g10

0x0009,

0xfc03,	// (0x0003f314) volume_small2_pane_g

0xc3a2,	// (0x0003bab3) fep_vkb_top_text_pane_g1_ParamLimits

0xc3bd,	// (0x0003bace) fep_vkb_top_text_pane_t1_ParamLimits

0xc655,	// (0x0003bd66) popup_preview_fixed_window_g3_ParamLimits

0xc655,	// (0x0003bd66) popup_preview_fixed_window_g3

0x7329,	// (0x00036a3a) popup_toolbar_trans_pane

0xad7e,	// (0x0003a48f) aid_height_set_list_ParamLimits

0xad8f,	// (0x0003a4a0) aid_size_parent_ParamLimits

0x947c,	// (0x00038b8d) list_highlight_pane_cp2_ParamLimits

0x901b,	// (0x0003872c) set_content_pane_g1_ParamLimits

0x7864,	// (0x00036f75) list_single_image_pane_ParamLimits

0x7864,	// (0x00036f75) list_single_image_pane

0xcb53,	// (0x0003c264) aid_size_cell_image_ParamLimits

0xcb53,	// (0x0003c264) aid_size_cell_image

0xcb60,	// (0x0003c271) grid_single_image_pane_ParamLimits

0xcb60,	// (0x0003c271) grid_single_image_pane

0x28fa,	// (0x0003200b) list_single_image_pane_g1_ParamLimits

0x28fa,	// (0x0003200b) list_single_image_pane_g1

0x2906,	// (0x00032017) list_single_image_pane_g2_ParamLimits

0x2906,	// (0x00032017) list_single_image_pane_g2

0x0001,

0xfc18,	// (0x0003f329) list_single_image_pane_g_ParamLimits

0xfc18,	// (0x0003f329) list_single_image_pane_g

0xcb6e,	// (0x0003c27f) list_single_image_pane_t1_ParamLimits

0xcb6e,	// (0x0003c27f) list_single_image_pane_t1

0xcb84,	// (0x0003c295) cell_image_list_pane_ParamLimits

0xcb84,	// (0x0003c295) cell_image_list_pane

0xcb9c,	// (0x0003c2ad) cell_image_list_pane_g1

0xcba5,	// (0x0003c2b6) cell_image_list_pane_g2

0x0001,

0xfc1d,	// (0x0003f32e) cell_image_list_pane_g

0xcbae,	// (0x0003c2bf) aid_size_cell_tb_trans_pane

0x28ec,	// (0x00031ffd) bg_tb_trans_pane

0xcbc0,	// (0x0003c2d1) grid_tb_trans_pane

0x99b2,	// (0x000390c3) bg_tb_trans_pane_g1

0x99c2,	// (0x000390d3) bg_tb_trans_pane_g2

0x99ba,	// (0x000390cb) bg_tb_trans_pane_g3

0x99d2,	// (0x000390e3) bg_tb_trans_pane_g4

0x99ca,	// (0x000390db) bg_tb_trans_pane_g5

0x99f2,	// (0x00039103) bg_tb_trans_pane_g6

0x99ea,	// (0x000390fb) bg_tb_trans_pane_g7

0x99da,	// (0x000390eb) bg_tb_trans_pane_g8

0x99e2,	// (0x000390f3) bg_tb_trans_pane_g9

0x0008,

0xfc22,	// (0x0003f333) bg_tb_trans_pane_g

0xcbd4,	// (0x0003c2e5) cell_toolbar_trans_pane_ParamLimits

0xcbd4,	// (0x0003c2e5) cell_toolbar_trans_pane

0xbfc7,	// (0x0003b6d8) cell_toolbar_trans_pane_g1

0xbbff,	// (0x0003b310) list_form2_midp_pane_t1

0xbc0d,	// (0x0003b31e) list_form2_midp_pane_t2

0x0001,

0xfabf,	// (0x0003f1d0) list_form2_midp_pane_t

0xbc1b,	// (0x0003b32c) scroll_pane_cp51_ParamLimits

0xbde2,	// (0x0003b4f3) form2_midp_wait_pane_g1

0xbdeb,	// (0x0003b4fc) form2_midp_wait_pane_g2

0xbdf4,	// (0x0003b505) form2_midp_wait_pane_g3

0x0002,

0xfad4,	// (0x0003f1e5) form2_midp_wait_pane_g

0x22aa,	// (0x000319bb) list_highlight_pane_cp21_ParamLimits

0xbe2d,	// (0x0003b53e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe3c,	// (0x0003b54d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x781a,	// (0x00036f2b) list_single_2graphic_im_pane_ParamLimits

0x781a,	// (0x00036f2b) list_single_2graphic_im_pane

0xcbfa,	// (0x0003c30b) list_single_2graphic_im_pane_g1_ParamLimits

0xcbfa,	// (0x0003c30b) list_single_2graphic_im_pane_g1

0xcc0b,	// (0x0003c31c) list_single_2graphic_im_pane_g2_ParamLimits

0xcc0b,	// (0x0003c31c) list_single_2graphic_im_pane_g2

0xcc17,	// (0x0003c328) list_single_2graphic_im_pane_g3_ParamLimits

0xcc17,	// (0x0003c328) list_single_2graphic_im_pane_g3

0x0003,

0xfc35,	// (0x0003f346) list_single_2graphic_im_pane_g_ParamLimits

0xfc35,	// (0x0003f346) list_single_2graphic_im_pane_g

0xcc37,	// (0x0003c348) list_single_2graphic_im_pane_t1_ParamLimits

0xcc37,	// (0x0003c348) list_single_2graphic_im_pane_t1

0xc661,	// (0x0003bd72) list_single_graphic_2heading_pane_fp_ParamLimits

0xc661,	// (0x0003bd72) list_single_graphic_2heading_pane_fp

0x44bc,	// (0x00033bcd) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x44bc,	// (0x00033bcd) list_single_graphic_2heading_pane_fp_g1

0xc67a,	// (0x0003bd8b) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc67a,	// (0x0003bd8b) list_single_graphic_2heading_pane_fp_g2

0x42f5,	// (0x00033a06) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x42f5,	// (0x00033a06) list_single_graphic_2heading_pane_fp_g3

0x4491,	// (0x00033ba2) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4491,	// (0x00033ba2) list_single_graphic_2heading_pane_fp_g4

0xc686,	// (0x0003bd97) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc686,	// (0x0003bd97) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x0003f26d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x0003f26d) list_single_graphic_2heading_pane_fp_g

0x4653,	// (0x00033d64) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4653,	// (0x00033d64) list_single_graphic_2heading_pane_fp_t1

0x44f4,	// (0x00033c05) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x44f4,	// (0x00033c05) list_single_graphic_2heading_pane_fp_t2

0x4669,	// (0x00033d7a) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4669,	// (0x00033d7a) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3e,	// (0x0003f34f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3e,	// (0x0003f34f) list_single_graphic_2heading_pane_fp_t

0xc058,	// (0x0003b769) fep_hwr_write_pane_g5_ParamLimits

0xc058,	// (0x0003b769) fep_hwr_write_pane_g5

0xc064,	// (0x0003b775) fep_hwr_write_pane_g6_ParamLimits

0xc064,	// (0x0003b775) fep_hwr_write_pane_g6

0xc936,	// (0x0003c047) eswt_shell_pane_ParamLimits

0x9a26,	// (0x00039137) bg_popup_window_pane_cp18_ParamLimits

0xacd5,	// (0x0003a3e6) heading_pane_cp70

0xca60,	// (0x0003c171) popup_eswt_tasktip_window_t1_ParamLimits

0x950f,	// (0x00038c20) aid_touch_tab_arrow_left

0x951b,	// (0x00038c2c) aid_touch_tab_arrow_right

0x57da,	// (0x00034eeb) title_pane_g3_ParamLimits

0x57da,	// (0x00034eeb) title_pane_g3

0x28ab,	// (0x00031fbc) set_value_pane_g1

0x7329,	// (0x00036a3a) popup_toolbar_trans_pane_ParamLimits

0xcbae,	// (0x0003c2bf) aid_size_cell_tb_trans_pane_ParamLimits

0x28ec,	// (0x00031ffd) bg_tb_trans_pane_ParamLimits

0xcbc0,	// (0x0003c2d1) grid_tb_trans_pane_ParamLimits

0x23dd,	// (0x00031aee) cont_note_pane_ParamLimits

0x23dd,	// (0x00031aee) cont_note_pane

0x2667,	// (0x00031d78) cont_snote2_single_text_pane_ParamLimits

0x2667,	// (0x00031d78) cont_snote2_single_text_pane

0x2667,	// (0x00031d78) cont_snote2_single_graphic_pane_ParamLimits

0x2667,	// (0x00031d78) cont_snote2_single_graphic_pane

0xa018,	// (0x00039729) cont_note_wait_pane_ParamLimits

0xa018,	// (0x00039729) cont_note_wait_pane

0xa018,	// (0x00039729) cont_note_image_pane_ParamLimits

0xa018,	// (0x00039729) cont_note_image_pane

0xcc68,	// (0x0003c379) popup_note2_window_g1_ParamLimits

0xcc68,	// (0x0003c379) popup_note2_window_g1

0xcc99,	// (0x0003c3aa) popup_note2_window_t1_ParamLimits

0xcc99,	// (0x0003c3aa) popup_note2_window_t1

0xccde,	// (0x0003c3ef) popup_note2_window_t2_ParamLimits

0xccde,	// (0x0003c3ef) popup_note2_window_t2

0xcd23,	// (0x0003c434) popup_note2_window_t3_ParamLimits

0xcd23,	// (0x0003c434) popup_note2_window_t3

0xcd68,	// (0x0003c479) popup_note2_window_t4_ParamLimits

0xcd68,	// (0x0003c479) popup_note2_window_t4

0x2461,	// (0x00031b72) popup_note2_window_t5_ParamLimits

0x2461,	// (0x00031b72) popup_note2_window_t5

0x0004,

0xfc4a,	// (0x0003f35b) popup_note2_window_t_ParamLimits

0xfc4a,	// (0x0003f35b) popup_note2_window_t

0xcd97,	// (0x0003c4a8) popup_note2_image_window_g1_ParamLimits

0xcd97,	// (0x0003c4a8) popup_note2_image_window_g1

0xcda3,	// (0x0003c4b4) popup_note2_image_window_g2_ParamLimits

0xcda3,	// (0x0003c4b4) popup_note2_image_window_g2

0x0001,

0xfc55,	// (0x0003f366) popup_note2_image_window_g_ParamLimits

0xfc55,	// (0x0003f366) popup_note2_image_window_g

0xcdb5,	// (0x0003c4c6) popup_note2_image_window_t1_ParamLimits

0xcdb5,	// (0x0003c4c6) popup_note2_image_window_t1

0xcdcd,	// (0x0003c4de) popup_note2_image_window_t2_ParamLimits

0xcdcd,	// (0x0003c4de) popup_note2_image_window_t2

0xcde5,	// (0x0003c4f6) popup_note2_image_window_t3_ParamLimits

0xcde5,	// (0x0003c4f6) popup_note2_image_window_t3

0x0002,

0xfc5a,	// (0x0003f36b) popup_note2_image_window_t_ParamLimits

0xfc5a,	// (0x0003f36b) popup_note2_image_window_t

0xa026,	// (0x00039737) popup_note2_wait_window_g1_ParamLimits

0xa026,	// (0x00039737) popup_note2_wait_window_g1

0xce01,	// (0x0003c512) popup_note2_wait_window_g2_ParamLimits

0xce01,	// (0x0003c512) popup_note2_wait_window_g2

0xa03e,	// (0x0003974f) popup_note2_wait_window_g3_ParamLimits

0xa03e,	// (0x0003974f) popup_note2_wait_window_g3

0x0002,

0xfc61,	// (0x0003f372) popup_note2_wait_window_g_ParamLimits

0xfc61,	// (0x0003f372) popup_note2_wait_window_g

0xce0d,	// (0x0003c51e) popup_note2_wait_window_t1_ParamLimits

0xce0d,	// (0x0003c51e) popup_note2_wait_window_t1

0xce2b,	// (0x0003c53c) popup_note2_wait_window_t2_ParamLimits

0xce2b,	// (0x0003c53c) popup_note2_wait_window_t2

0xce49,	// (0x0003c55a) popup_note2_wait_window_t3_ParamLimits

0xce49,	// (0x0003c55a) popup_note2_wait_window_t3

0xce5b,	// (0x0003c56c) popup_note2_wait_window_t4_ParamLimits

0xce5b,	// (0x0003c56c) popup_note2_wait_window_t4

0x0003,

0xfc68,	// (0x0003f379) popup_note2_wait_window_t_ParamLimits

0xfc68,	// (0x0003f379) popup_note2_wait_window_t

0xce6d,	// (0x0003c57e) wait_bar2_pane_ParamLimits

0xce6d,	// (0x0003c57e) wait_bar2_pane

0xce85,	// (0x0003c596) popup_snote2_single_text_window_g1_ParamLimits

0xce85,	// (0x0003c596) popup_snote2_single_text_window_g1

0xcead,	// (0x0003c5be) popup_snote2_single_text_window_t1_ParamLimits

0xcead,	// (0x0003c5be) popup_snote2_single_text_window_t1

0xcef9,	// (0x0003c60a) popup_snote2_single_text_window_t2_ParamLimits

0xcef9,	// (0x0003c60a) popup_snote2_single_text_window_t2

0xcf45,	// (0x0003c656) popup_snote2_single_text_window_t3_ParamLimits

0xcf45,	// (0x0003c656) popup_snote2_single_text_window_t3

0xcf86,	// (0x0003c697) popup_snote2_single_text_window_t4_ParamLimits

0xcf86,	// (0x0003c697) popup_snote2_single_text_window_t4

0xcfbc,	// (0x0003c6cd) popup_snote2_single_text_window_t5_ParamLimits

0xcfbc,	// (0x0003c6cd) popup_snote2_single_text_window_t5

0x0004,

0xfc71,	// (0x0003f382) popup_snote2_single_text_window_t_ParamLimits

0xfc71,	// (0x0003f382) popup_snote2_single_text_window_t

0xcfe7,	// (0x0003c6f8) popup_snote2_single_graphic_window_g1_ParamLimits

0xcfe7,	// (0x0003c6f8) popup_snote2_single_graphic_window_g1

0xd00f,	// (0x0003c720) popup_snote2_single_graphic_window_g2_ParamLimits

0xd00f,	// (0x0003c720) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7c,	// (0x0003f38d) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7c,	// (0x0003f38d) popup_snote2_single_graphic_window_g

0xd037,	// (0x0003c748) popup_snote2_single_graphic_window_t1_ParamLimits

0xd037,	// (0x0003c748) popup_snote2_single_graphic_window_t1

0xd083,	// (0x0003c794) popup_snote2_single_graphic_window_t2_ParamLimits

0xd083,	// (0x0003c794) popup_snote2_single_graphic_window_t2

0xcf45,	// (0x0003c656) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf45,	// (0x0003c656) popup_snote2_single_graphic_window_t3

0xcf86,	// (0x0003c697) popup_snote2_single_graphic_window_t4_ParamLimits

0xcf86,	// (0x0003c697) popup_snote2_single_graphic_window_t4

0xcfbc,	// (0x0003c6cd) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfbc,	// (0x0003c6cd) popup_snote2_single_graphic_window_t5

0x0004,

0xfc81,	// (0x0003f392) popup_snote2_single_graphic_window_t_ParamLimits

0xfc81,	// (0x0003f392) popup_snote2_single_graphic_window_t

0xbacb,	// (0x0003b1dc) clock_nsta_pane_cp2_t1

0xbacb,	// (0x0003b1dc) clock_nsta_pane_cp2_t2

0x0001,

0xfa95,	// (0x0003f1a6) clock_nsta_pane_cp2_t

0x3f48,	// (0x00033659) form_field_data_wide_pane_g1_ParamLimits

0x28fa,	// (0x0003200b) form_field_data_wide_pane_g2_ParamLimits

0x28fa,	// (0x0003200b) form_field_data_wide_pane_g2

0x2906,	// (0x00032017) form_field_data_wide_pane_g3_ParamLimits

0x2906,	// (0x00032017) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x0003ed67) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x0003ed67) form_field_data_wide_pane_g

0xb9a6,	// (0x0003b0b7) grid_touch_3_pane_ParamLimits

0xb9a6,	// (0x0003b0b7) grid_touch_3_pane

0xd0cf,	// (0x0003c7e0) cell_touch_3_pane_ParamLimits

0xd0cf,	// (0x0003c7e0) cell_touch_3_pane

0xbfc7,	// (0x0003b6d8) cell_touch_3_pane_g1

0xbfc7,	// (0x0003b6d8) cell_touch_3_pane_g2

0x0001,

0xfb1a,	// (0x0003f22b) cell_touch_3_pane_g

0x24b9,	// (0x00031bca) cont_query_data_pane

0x24c1,	// (0x00031bd2) cont_query_data_pane_cp1

0xd102,	// (0x0003c813) button_value_adjust_pane_cp7

0xd10a,	// (0x0003c81b) query_popup_pane_cp3

0x695b,	// (0x0003606c) bg_popup_sub_pane_cp22_ParamLimits

0x6971,	// (0x00036082) navi_navi_volume_pane_cp2

0x698c,	// (0x0003609d) popup_side_volume_key_window_g2

0x699b,	// (0x000360ac) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x0003edfd) popup_side_volume_key_window_g

0x69b8,	// (0x000360c9) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x0003ee04) popup_side_volume_key_window_t

0x8ed6,	// (0x000385e7) popup_side_volume_key_window_ParamLimits

0x5d12,	// (0x00035423) list_double_graphic_pane_g4_ParamLimits

0x5d12,	// (0x00035423) list_double_graphic_pane_g4

0x784b,	// (0x00036f5c) list_single_2heading_msg_pane_ParamLimits

0x784b,	// (0x00036f5c) list_single_2heading_msg_pane

0x7df1,	// (0x00037502) list_single_2heading_msg_pane_g1_ParamLimits

0x7df1,	// (0x00037502) list_single_2heading_msg_pane_g1

0x5b4d,	// (0x0003525e) list_single_2heading_msg_pane_g2_ParamLimits

0x5b4d,	// (0x0003525e) list_single_2heading_msg_pane_g2

0x7dfd,	// (0x0003750e) list_single_2heading_msg_pane_g3_ParamLimits

0x7dfd,	// (0x0003750e) list_single_2heading_msg_pane_g3

0x7e09,	// (0x0003751a) list_single_2heading_msg_pane_g4_ParamLimits

0x7e09,	// (0x0003751a) list_single_2heading_msg_pane_g4

0x0003,

0xfc8c,	// (0x0003f39d) list_single_2heading_msg_pane_g_ParamLimits

0xfc8c,	// (0x0003f39d) list_single_2heading_msg_pane_g

0x7e21,	// (0x00037532) list_single_2heading_msg_pane_t1_ParamLimits

0x7e21,	// (0x00037532) list_single_2heading_msg_pane_t1

0x7e49,	// (0x0003755a) list_single_2heading_msg_pane_t2_ParamLimits

0x7e49,	// (0x0003755a) list_single_2heading_msg_pane_t2

0x7e7d,	// (0x0003758e) list_single_2heading_msg_pane_t3_ParamLimits

0x7e7d,	// (0x0003758e) list_single_2heading_msg_pane_t3

0x4689,	// (0x00033d9a) list_single_2heading_msg_pane_t4_ParamLimits

0x4689,	// (0x00033d9a) list_single_2heading_msg_pane_t4

0x0003,

0xfc95,	// (0x0003f3a6) list_single_2heading_msg_pane_t_ParamLimits

0xfc95,	// (0x0003f3a6) list_single_2heading_msg_pane_t

0x2258,	// (0x00031969) title_pane_g4_ParamLimits

0x2258,	// (0x00031969) title_pane_g4

0x637c,	// (0x00035a8d) title_pane_stacon_g3_ParamLimits

0x637c,	// (0x00035a8d) title_pane_stacon_g3

0xcc2b,	// (0x0003c33c) list_single_2graphic_im_pane_g4_ParamLimits

0xcc2b,	// (0x0003c33c) list_single_2graphic_im_pane_g4

0xaa88,	// (0x0003a199) popup_side_volume_key_window_cp

0xb2b6,	// (0x0003a9c7) main_idle_act2_pane_t1

0x742d,	// (0x00036b3e) toolbar_button_pane_g10

0x5b37,	// (0x00035248) popup_toolbar_window_cp1

0xbabc,	// (0x0003b1cd) clock_nsta_pane_cp_t1

0xbabc,	// (0x0003b1cd) clock_nsta_pane_cp_t2

0x0001,

0xfa90,	// (0x0003f1a1) clock_nsta_pane_cp_t

0x6971,	// (0x00036082) navi_navi_volume_pane_cp2_ParamLimits

0x6980,	// (0x00036091) popup_side_volume_key_window_g1_ParamLimits

0x698c,	// (0x0003609d) popup_side_volume_key_window_g2_ParamLimits

0x699b,	// (0x000360ac) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x0003edfd) popup_side_volume_key_window_g_ParamLimits

0x79a1,	// (0x000370b2) fep_hwr_aid_pane

0x7a4a,	// (0x0003715b) bg_fep_hwr_top_pane_g4_ParamLimits

0xc028,	// (0x0003b739) fep_hwr_top_pane_g1_ParamLimits

0xc03a,	// (0x0003b74b) fep_hwr_top_pane_g2_ParamLimits

0x7a6a,	// (0x0003717b) fep_hwr_top_pane_g3_ParamLimits

0xfae5,	// (0x0003f1f6) fep_hwr_top_pane_g_ParamLimits

0x7a7f,	// (0x00037190) fep_hwr_top_text_pane_ParamLimits

0xa83d,	// (0x00039f4e) aid_touch_tab_arrow_arrow_2

0xa846,	// (0x00039f57) aid_touch_tab_arrow_left_2

0x79b5,	// (0x000370c6) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x79ec,	// (0x000370fd) fep_hwr_prediction_pane

0xc19c,	// (0x0003b8ad) fep_vkb_prediction_pane

0xc2a2,	// (0x0003b9b3) fep_vkb_side_pane_g3_ParamLimits

0xc2a2,	// (0x0003b9b3) fep_vkb_side_pane_g3

0x7c0e,	// (0x0003731f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7c7f,	// (0x00037390) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7c8c,	// (0x0003739d) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb94,	// (0x0003f2a5) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7eb6,	// (0x000375c7) fep_hwr_prediction_pane_g1

0x7ec0,	// (0x000375d1) fep_hwr_prediction_pane_g2

0x7ec8,	// (0x000375d9) fep_hwr_prediction_pane_g3

0x7ed0,	// (0x000375e1) fep_hwr_prediction_pane_g4

0x0003,

0xfc9e,	// (0x0003f3af) fep_hwr_prediction_pane_g

0xd131,	// (0x0003c842) fep_vkb_prediction_pane_g1

0xd13b,	// (0x0003c84c) fep_vkb_prediction_pane_g2

0xd143,	// (0x0003c854) fep_vkb_prediction_pane_g3

0xd14b,	// (0x0003c85c) fep_vkb_prediction_pane_g4

0x0003,

0xfca7,	// (0x0003f3b8) fep_vkb_prediction_pane_g

0x777e,	// (0x00036e8f) slider_set_pane_g3

0x7792,	// (0x00036ea3) slider_set_pane_g4

0x77aa,	// (0x00036ebb) slider_set_pane_g5

0x777e,	// (0x00036e8f) slider_set_pane_g6

0x77c0,	// (0x00036ed1) slider_set_pane_g7

0xaf0e,	// (0x0003a61f) slider_form_pane_g3

0xaf17,	// (0x0003a628) slider_form_pane_g4

0xaf1f,	// (0x0003a630) slider_form_pane_g5

0xaf0e,	// (0x0003a61f) slider_form_pane_g6

0xaf27,	// (0x0003a638) slider_form_pane_g7

0xb57a,	// (0x0003ac8b) slider_set_pane_vc_g3

0xb583,	// (0x0003ac94) slider_set_pane_vc_g4

0xb58c,	// (0x0003ac9d) slider_set_pane_vc_g5

0xb57a,	// (0x0003ac8b) slider_set_pane_vc_g6

0xb595,	// (0x0003aca6) slider_set_pane_vc_g7

0xb76b,	// (0x0003ae7c) slider_form_pane_vc_g1

0xb774,	// (0x0003ae85) slider_form_pane_vc_g2

0xb77d,	// (0x0003ae8e) slider_form_pane_vc_g3

0xb76b,	// (0x0003ae7c) slider_form_pane_vc_g4

0xb786,	// (0x0003ae97) slider_form_pane_vc_g5

0x0004,

0xfa62,	// (0x0003f173) slider_form_pane_vc_g

0x554b,	// (0x00034c5c) main_idle_act3_pane

0xd153,	// (0x0003c864) ai3_links_pane

0xd15c,	// (0x0003c86d) popup_ai3_data_window_ParamLimits

0xd15c,	// (0x0003c86d) popup_ai3_data_window

0x223a,	// (0x0003194b) grid_ai3_links_pane

0xd17a,	// (0x0003c88b) cell_ai3_links_pane_ParamLimits

0xd17a,	// (0x0003c88b) cell_ai3_links_pane

0xd194,	// (0x0003c8a5) bg_popup_sub_pane_cp11

0xd1a1,	// (0x0003c8b2) cell_ai3_links_pane_g1

0x223a,	// (0x0003194b) bg_popup_sub_pane_cp12

0xd1c6,	// (0x0003c8d7) heading_ai3_data_pane

0xd1ce,	// (0x0003c8df) list_ai3_gene_pane

0xd1da,	// (0x0003c8eb) popup_ai3_data_window_g1

0xd1e2,	// (0x0003c8f3) heading_ai3_data_pane_g1

0xd1ea,	// (0x0003c8fb) heading_ai3_data_pane_t1

0xd1f8,	// (0x0003c909) list_double_ai3_gene_pane_ParamLimits

0xd1f8,	// (0x0003c909) list_double_ai3_gene_pane

0xd205,	// (0x0003c916) list_single_ai3_gene_pane_ParamLimits

0xd205,	// (0x0003c916) list_single_ai3_gene_pane

0xbf8c,	// (0x0003b69d) list_highlight_pane_cp7_ParamLimits

0xbf8c,	// (0x0003b69d) list_highlight_pane_cp7

0xd212,	// (0x0003c923) list_single_a13_gene_pane_t1_ParamLimits

0xd212,	// (0x0003c923) list_single_a13_gene_pane_t1

0xd229,	// (0x0003c93a) list_single_ai3_gene_pane_g1

0xd232,	// (0x0003c943) list_single_ai3_gene_pane_g2

0x0001,

0xfcb0,	// (0x0003f3c1) list_single_ai3_gene_pane_g

0xd23a,	// (0x0003c94b) list_double_ai3_gene_pane_g1_ParamLimits

0xd23a,	// (0x0003c94b) list_double_ai3_gene_pane_g1

0xd246,	// (0x0003c957) list_double_ai3_gene_pane_t1_ParamLimits

0xd246,	// (0x0003c957) list_double_ai3_gene_pane_t1

0xd262,	// (0x0003c973) list_double_ai3_gene_pane_t2_ParamLimits

0xd262,	// (0x0003c973) list_double_ai3_gene_pane_t2

0xd277,	// (0x0003c988) list_double_ai3_gene_pane_t3_ParamLimits

0xd277,	// (0x0003c988) list_double_ai3_gene_pane_t3

0x0002,

0xfcb5,	// (0x0003f3c6) list_double_ai3_gene_pane_t_ParamLimits

0xfcb5,	// (0x0003f3c6) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x467f,	// (0x00033d90) aid_size_min_col_2

0xd11b,	// (0x0003c82c) aid_size_min_msg_ParamLimits

0xd11b,	// (0x0003c82c) aid_size_min_msg

0xc3ae,	// (0x0003babf) fep_vkb_top_text_pane_g2_ParamLimits

0xc3ae,	// (0x0003babf) fep_vkb_top_text_pane_g2

0x0001,

0xfb15,	// (0x0003f226) fep_vkb_top_text_pane_g_ParamLimits

0xfb15,	// (0x0003f226) fep_vkb_top_text_pane_g

0x554b,	// (0x00034c5c) main_hc_apps_shell_pane

0xd294,	// (0x0003c9a5) grid_hc_apps_pane_ParamLimits

0xd294,	// (0x0003c9a5) grid_hc_apps_pane

0xd2a6,	// (0x0003c9b7) list_hc_apps_pane

0xd2ae,	// (0x0003c9bf) scroll_pane_cp37_ParamLimits

0xd2ae,	// (0x0003c9bf) scroll_pane_cp37

0xd2ba,	// (0x0003c9cb) cell_hc_apps_pane_ParamLimits

0xd2ba,	// (0x0003c9cb) cell_hc_apps_pane

0xd370,	// (0x0003ca81) cell_hc_apps_pane_g1_ParamLimits

0xd370,	// (0x0003ca81) cell_hc_apps_pane_g1

0xd39c,	// (0x0003caad) cell_hc_apps_pane_g2_ParamLimits

0xd39c,	// (0x0003caad) cell_hc_apps_pane_g2

0xd3b8,	// (0x0003cac9) cell_hc_apps_pane_g3_ParamLimits

0xd3b8,	// (0x0003cac9) cell_hc_apps_pane_g3

0x0002,

0xfcbc,	// (0x0003f3cd) cell_hc_apps_pane_g_ParamLimits

0xfcbc,	// (0x0003f3cd) cell_hc_apps_pane_g

0xd3da,	// (0x0003caeb) cell_hc_apps_pane_t1_ParamLimits

0xd3da,	// (0x0003caeb) cell_hc_apps_pane_t1

0x23dd,	// (0x00031aee) grid_highlight_pane_cp10_ParamLimits

0x23dd,	// (0x00031aee) grid_highlight_pane_cp10

0xd41a,	// (0x0003cb2b) list_single_hc_apps_pane_ParamLimits

0xd41a,	// (0x0003cb2b) list_single_hc_apps_pane

0xd459,	// (0x0003cb6a) list_single_hc_apps_pane_g1

0x7ed8,	// (0x000375e9) list_single_hc_apps_pane_g2

0x0001,

0xfcc3,	// (0x0003f3d4) list_single_hc_apps_pane_g

0x7ef1,	// (0x00037602) list_single_hc_apps_pane_g2_copy1

0x7f0d,	// (0x0003761e) list_single_hc_apps_pane_t1

0x22aa,	// (0x000319bb) bg_set_opt_pane_cp_ParamLimits

0x588c,	// (0x00034f9d) setting_slider_pane_t1_ParamLimits

0x58a5,	// (0x00034fb6) setting_slider_pane_t2_ParamLimits

0x58bf,	// (0x00034fd0) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0003ec4a) setting_slider_pane_t_ParamLimits

0x58d7,	// (0x00034fe8) slider_set_pane_ParamLimits

0x6cac,	// (0x000363bd) control_pane_g5_ParamLimits

0x6cac,	// (0x000363bd) control_pane_g5

0xad41,	// (0x0003a452) slider_set_pane_g1_ParamLimits

0x7772,	// (0x00036e83) slider_set_pane_g2_ParamLimits

0x777e,	// (0x00036e8f) slider_set_pane_g3_ParamLimits

0x7792,	// (0x00036ea3) slider_set_pane_g4_ParamLimits

0x77aa,	// (0x00036ebb) slider_set_pane_g5_ParamLimits

0x777e,	// (0x00036e8f) slider_set_pane_g6_ParamLimits

0x77c0,	// (0x00036ed1) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x0003f050) slider_set_pane_g_ParamLimits

0x8fc6,	// (0x000386d7) navi_icon_text_pane_ParamLimits

0x94ce,	// (0x00038bdf) aid_fill_nsta_2_ParamLimits

0x950f,	// (0x00038c20) aid_touch_tab_arrow_left_ParamLimits

0x951b,	// (0x00038c2c) aid_touch_tab_arrow_right_ParamLimits

0x9587,	// (0x00038c98) clock_nsta_pane_ParamLimits

0xa81f,	// (0x00039f30) navi_icon_pane_g1_ParamLimits

0xa82b,	// (0x00039f3c) navi_text_pane_t1_ParamLimits

0xbbd9,	// (0x0003b2ea) navi_icon_text_pane_g1_ParamLimits

0xbbe5,	// (0x0003b2f6) navi_icon_text_pane_t1_ParamLimits

0xd459,	// (0x0003cb6a) list_single_hc_apps_pane_g1_ParamLimits

0x7ed8,	// (0x000375e9) list_single_hc_apps_pane_g2_ParamLimits

0xfcc3,	// (0x0003f3d4) list_single_hc_apps_pane_g_ParamLimits

0x7ef1,	// (0x00037602) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7f0d,	// (0x0003761e) list_single_hc_apps_pane_t1_ParamLimits

0x56c0,	// (0x00034dd1) popup_toolbar2_fixed_window_ParamLimits

0x56c0,	// (0x00034dd1) popup_toolbar2_fixed_window

0x731f,	// (0x00036a30) popup_toolbar2_float_window

0x223a,	// (0x0003194b) bg_popup_sub_pane_cp27

0xd472,	// (0x0003cb83) grid_toolbar2_float_pane

0x223a,	// (0x0003194b) bg_popup_sub_pane_cp26

0xd472,	// (0x0003cb83) grid_toolbar2_fixed_pane

0xd47a,	// (0x0003cb8b) cell_toolbar2_fixed_pane_ParamLimits

0xd47a,	// (0x0003cb8b) cell_toolbar2_fixed_pane

0xd48a,	// (0x0003cb9b) cell_toolbar2_fixed_pane_g1

0xd493,	// (0x0003cba4) toolbar2_fixed_button_pane

0x99b2,	// (0x000390c3) toolbar2_fixed_button_pane_g1

0x99c2,	// (0x000390d3) toolbar2_fixed_button_pane_g2

0x99ba,	// (0x000390cb) toolbar2_fixed_button_pane_g3

0x99d2,	// (0x000390e3) toolbar2_fixed_button_pane_g4

0x99ca,	// (0x000390db) toolbar2_fixed_button_pane_g5

0x99da,	// (0x000390eb) toolbar2_fixed_button_pane_g6

0x99e2,	// (0x000390f3) toolbar2_fixed_button_pane_g7

0x99f2,	// (0x00039103) toolbar2_fixed_button_pane_g8

0x99ea,	// (0x000390fb) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x0003ef52) toolbar2_fixed_button_pane_g

0xd49b,	// (0x0003cbac) cell_toolbar2_float_pane_ParamLimits

0xd49b,	// (0x0003cbac) cell_toolbar2_float_pane

0xd4ac,	// (0x0003cbbd) cell_toolbar2_float_pane_g1

0xd493,	// (0x0003cba4) toolbar2_fixed_button_pane_cp

0xc10a,	// (0x0003b81b) fep_vkb_accented_list_pane_ParamLimits

0xc10a,	// (0x0003b81b) fep_vkb_accented_list_pane

0x7bee,	// (0x000372ff) bg_popup_fep_shadow_pane_g9

0x9155,	// (0x00038866) bg_popup_fep_shadow_pane_cp3

0x2a0f,	// (0x00032120) list_accented_list_pane

0xd4b5,	// (0x0003cbc6) list_single_accented_list_pane_ParamLimits

0xd4b5,	// (0x0003cbc6) list_single_accented_list_pane

0x9155,	// (0x00038866) list_highlight_pane_cp10

0xd4c6,	// (0x0003cbd7) list_single_accented_list_pane_t1

0x7265,	// (0x00036976) popup_slider_window_ParamLimits

0x7265,	// (0x00036976) popup_slider_window

0xd112,	// (0x0003c823) aid_indentation_list_msg

0xd596,	// (0x0003cca7) bg_popup_window_pane_cp19

0xd602,	// (0x0003cd13) popup_slider_window_g1

0xd61e,	// (0x0003cd2f) popup_slider_window_g2

0xd63a,	// (0x0003cd4b) popup_slider_window_g3

0x0005,

0xfcc8,	// (0x0003f3d9) popup_slider_window_g

0xd6a0,	// (0x0003cdb1) popup_slider_window_t1

0xd714,	// (0x0003ce25) small_volume_slider_vertical_pane

0xbfc7,	// (0x0003b6d8) small_volume_slider_vertical_pane_g1

0xbfc7,	// (0x0003b6d8) small_volume_slider_vertical_pane_g2

0xd730,	// (0x0003ce41) small_volume_slider_vertical_pane_g3

0x0002,

0xfcda,	// (0x0003f3eb) small_volume_slider_vertical_pane_g

0x546e,	// (0x00034b7f) area_side_right_pane_ParamLimits

0x546e,	// (0x00034b7f) area_side_right_pane

0x7f3b,	// (0x0003764c) aid_size_side_button_ParamLimits

0x7f3b,	// (0x0003764c) aid_size_side_button

0x7f4f,	// (0x00037660) grid_sctrl_middle_pane_ParamLimits

0x7f4f,	// (0x00037660) grid_sctrl_middle_pane

0x7f6e,	// (0x0003767f) sctrl_sk_bottom_pane

0x7f7f,	// (0x00037690) sctrl_sk_top_pane

0x7f91,	// (0x000376a2) aid_touch_sctrl_top

0x7f9e,	// (0x000376af) bg_sctrl_sk_pane_ParamLimits

0x7f9e,	// (0x000376af) bg_sctrl_sk_pane

0x7fac,	// (0x000376bd) sctrl_sk_top_pane_g1

0x7fb9,	// (0x000376ca) sctrl_sk_top_pane_t1

0x7f91,	// (0x000376a2) aid_touch_sctrl_bottom

0x7f9e,	// (0x000376af) bg_sctrl_sk_pane_cp_ParamLimits

0x7f9e,	// (0x000376af) bg_sctrl_sk_pane_cp

0x7fd4,	// (0x000376e5) sctrl_sk_bottom_pane_g1

0x7fb9,	// (0x000376ca) sctrl_sk_bottom_pane_t1

0x7fdd,	// (0x000376ee) cell_sctrl_middle_pane_ParamLimits

0x7fdd,	// (0x000376ee) cell_sctrl_middle_pane

0x7ffa,	// (0x0003770b) aid_touch_sctrl_middle_ParamLimits

0x7ffa,	// (0x0003770b) aid_touch_sctrl_middle

0x800c,	// (0x0003771d) bg_sctrl_middle_pane_ParamLimits

0x800c,	// (0x0003771d) bg_sctrl_middle_pane

0x7c0e,	// (0x0003731f) cell_sctrl_middle_pane_g1_ParamLimits

0x7c0e,	// (0x0003731f) cell_sctrl_middle_pane_g1

0x801a,	// (0x0003772b) cell_sctrl_middle_pane_g2_ParamLimits

0x801a,	// (0x0003772b) cell_sctrl_middle_pane_g2

0x0001,

0xfce6,	// (0x0003f3f7) cell_sctrl_middle_pane_g_ParamLimits

0xfce6,	// (0x0003f3f7) cell_sctrl_middle_pane_g

0x99b2,	// (0x000390c3) bg_sctrl_middle_pane_g1

0x99ba,	// (0x000390cb) bg_sctrl_middle_pane_g2

0x99c2,	// (0x000390d3) bg_sctrl_middle_pane_g3

0x99ca,	// (0x000390db) bg_sctrl_middle_pane_g4

0x99d2,	// (0x000390e3) bg_sctrl_middle_pane_g5

0x99da,	// (0x000390eb) bg_sctrl_middle_pane_g6

0x99e2,	// (0x000390f3) bg_sctrl_middle_pane_g7

0x99ea,	// (0x000390fb) bg_sctrl_middle_pane_g8

0x0007,

0xfceb,	// (0x0003f3fc) bg_sctrl_middle_pane_g

0x99f2,	// (0x00039103) bg_sctrl_middle_pane_g8_copy1

0x99b2,	// (0x000390c3) bg_sctrl_sk_pane_g1

0x99c2,	// (0x000390d3) bg_sctrl_sk_pane_g2

0x99ba,	// (0x000390cb) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x0003ef52) bg_sctrl_sk_pane_g

0x2825,	// (0x00031f36) aid_size_touch_scroll_bar

0x99d2,	// (0x000390e3) bg_sctrl_sk_pane_g4

0x99ca,	// (0x000390db) bg_sctrl_sk_pane_g5

0x99da,	// (0x000390eb) bg_sctrl_sk_pane_g6

0x99e2,	// (0x000390f3) bg_sctrl_sk_pane_g7

0x99f2,	// (0x00039103) bg_sctrl_sk_pane_g8

0x99ea,	// (0x000390fb) bg_sctrl_sk_pane_g9

0x6e7a,	// (0x0003658b) popup_fep_china_hwr2_fs_candidate_window

0x6e84,	// (0x00036595) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6e84,	// (0x00036595) popup_fep_china_hwr2_fs_control_window

0x7c0e,	// (0x0003731f) sctrl_sk_top_pane_g2

0x0001,

0xfce1,	// (0x0003f3f2) sctrl_sk_top_pane_g

0xd739,	// (0x0003ce4a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd739,	// (0x0003ce4a) aid_fep_china_hwr2_fs_cell

0xd74c,	// (0x0003ce5d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd74c,	// (0x0003ce5d) bg_popup_fep_shadow_pane_cp4

0xd765,	// (0x0003ce76) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd765,	// (0x0003ce76) bg_popup_fep_shadow_pane_cp5

0xd777,	// (0x0003ce88) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd777,	// (0x0003ce88) popup_fep_china_hwr2_fs_control_bar_grid

0xd787,	// (0x0003ce98) popup_fep_china_hwr2_fs_control_funtion_grid

0xd78f,	// (0x0003cea0) aid_fep_china_hwr2_fs_candi_cell

0x223a,	// (0x0003194b) bg_popup_fep_shadow_pane_cp6

0xd799,	// (0x0003ceaa) popup_fep_china_hwr2_fs_candidate_grid

0xd7a3,	// (0x0003ceb4) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7a3,	// (0x0003ceb4) cell_fep_china_hwr2_fs_funtion_grid

0xbfc7,	// (0x0003b6d8) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7bb,	// (0x0003cecc) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7bb,	// (0x0003cecc) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7c9,	// (0x0003ceda) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7c9,	// (0x0003ceda) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfc,	// (0x0003f40d) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfc,	// (0x0003f40d) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7df,	// (0x0003cef0) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7df,	// (0x0003cef0) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd7f4,	// (0x0003cf05) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd7f4,	// (0x0003cf05) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd01,	// (0x0003f412) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd01,	// (0x0003f412) cell_fep_china_hwr2_fs_funtion_grid_t

0xd810,	// (0x0003cf21) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd818,	// (0x0003cf29) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd820,	// (0x0003cf31) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd06,	// (0x0003f417) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd828,	// (0x0003cf39) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd828,	// (0x0003cf39) cell_fep_china_hwr2_fs_candidate_grid

0xd847,	// (0x0003cf58) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd84f,	// (0x0003cf60) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbfc7,	// (0x0003b6d8) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbfc7,	// (0x0003b6d8) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1a,	// (0x0003f22b) cell_fep_china_hwr2_fs_candidate_grid_g

0xd857,	// (0x0003cf68) cell_fep_china_hwr2_fs_candidate_grid_t1

0x959a,	// (0x00038cab) clock_nsta_pane_cp_24_ParamLimits

0x959a,	// (0x00038cab) clock_nsta_pane_cp_24

0x961a,	// (0x00038d2b) indicator_nsta_pane_cp_24_ParamLimits

0x961a,	// (0x00038d2b) indicator_nsta_pane_cp_24

0xa69b,	// (0x00039dac) heading_pane_g1

0x0001,

0xf8a6,	// (0x0003efb7) heading_pane_g

0xb0fd,	// (0x0003a80e) grid_sct_catagory_button_pane

0xb12f,	// (0x0003a840) scroll_pane_cp5_ParamLimits

0xbc27,	// (0x0003b338) button_value_adjust_pane_cp5_ParamLimits

0xbc27,	// (0x0003b338) button_value_adjust_pane_cp5

0xbd0c,	// (0x0003b41d) form2_midp_time_pane_ParamLimits

0xd865,	// (0x0003cf76) cell_sct_catagory_button_pane_ParamLimits

0xd865,	// (0x0003cf76) cell_sct_catagory_button_pane

0xbf8c,	// (0x0003b69d) bg_button_pane_cp01_ParamLimits

0xbf8c,	// (0x0003b69d) bg_button_pane_cp01

0xbfc7,	// (0x0003b6d8) cell_sct_catagory_button_pane_g1

0x72a6,	// (0x000369b7) popup_tb_extension_window

0xd877,	// (0x0003cf88) aid_size_cell_ext_ParamLimits

0xd877,	// (0x0003cf88) aid_size_cell_ext

0x23dd,	// (0x00031aee) bg_tb_trans_pane_cp1_ParamLimits

0x23dd,	// (0x00031aee) bg_tb_trans_pane_cp1

0xd897,	// (0x0003cfa8) grid_tb_ext_pane_ParamLimits

0xd897,	// (0x0003cfa8) grid_tb_ext_pane

0xd8c5,	// (0x0003cfd6) cell_tb_ext_pane_ParamLimits

0xd8c5,	// (0x0003cfd6) cell_tb_ext_pane

0xd8dc,	// (0x0003cfed) cell_tb_ext_pane_g1_ParamLimits

0xd8dc,	// (0x0003cfed) cell_tb_ext_pane_g1

0xd8f9,	// (0x0003d00a) cell_tb_ext_pane_t1

0x23dd,	// (0x00031aee) list_highlight_pane_cp11_ParamLimits

0x23dd,	// (0x00031aee) list_highlight_pane_cp11

0x56df,	// (0x00034df0) popup_uni_indicator_window_ParamLimits

0x56df,	// (0x00034df0) popup_uni_indicator_window

0x28ec,	// (0x00031ffd) bg_popup_sub_pane_cp14

0xd914,	// (0x0003d025) list_uniindi_pane

0xd920,	// (0x0003d031) uniindi_top_pane

0x23dd,	// (0x00031aee) bg_uniindi_top_pane

0xd941,	// (0x0003d052) uniindi_top_pane_g1

0xd957,	// (0x0003d068) uniindi_top_pane_g2

0x0003,

0xfd0d,	// (0x0003f41e) uniindi_top_pane_g

0xd981,	// (0x0003d092) uniindi_top_pane_t1

0xd9ad,	// (0x0003d0be) list_single_uniindi_pane_ParamLimits

0xd9ad,	// (0x0003d0be) list_single_uniindi_pane

0xbfc7,	// (0x0003b6d8) bg_uniindi_top_pane_g1

0xd9c0,	// (0x0003d0d1) list_single_uniindi_pane_g1

0xd9d3,	// (0x0003d0e4) list_single_uniindi_pane_t1

0x554b,	// (0x00034c5c) control_bg_pane

0xd9f8,	// (0x0003d109) bg_sctrl_sk_pane_cp1

0xda01,	// (0x0003d112) bg_sctrl_sk_pane_cp2

0xda0a,	// (0x0003d11b) control_bg_pane_g1

0xda13,	// (0x0003d124) control_bg_pane_g2

0x0001,

0xfd16,	// (0x0003f427) control_bg_pane_g

0xba5f,	// (0x0003b170) cell_indicator_nsta_pane_g1_ParamLimits

0xba6d,	// (0x0003b17e) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7e,	// (0x0003f18f) cell_indicator_nsta_pane_g_ParamLimits

0x447e,	// (0x00033b8f) form2_midp_time_pane_t1_ParamLimits

0x6dd8,	// (0x000364e9) main_idle_act4_pane_ParamLimits

0x6dd8,	// (0x000364e9) main_idle_act4_pane

0x72a6,	// (0x000369b7) popup_tb_extension_window_ParamLimits

0xd8b7,	// (0x0003cfc8) tb_ext_find_pane_ParamLimits

0xd8b7,	// (0x0003cfc8) tb_ext_find_pane

0xda1c,	// (0x0003d12d) ai_gene_pane_1_cp1

0x929f,	// (0x000389b0) ai_gene_pane_2_cp1

0xda24,	// (0x0003d135) list_single_idle_plugin_calendar_pane

0xda2d,	// (0x0003d13e) list_single_idle_plugin_notification_pane

0xda36,	// (0x0003d147) list_single_idle_plugin_player_pane

0xda3f,	// (0x0003d150) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda3f,	// (0x0003d150) list_single_idle_plugin_shortcut_pane

0xda61,	// (0x0003d172) main_idle_act4_pane_t1

0xda73,	// (0x0003d184) main_idle_act4_pane_t2

0x0001,

0xfd1b,	// (0x0003f42c) main_idle_act4_pane_t

0xda85,	// (0x0003d196) middle_sk_idle_act4_pane_ParamLimits

0xda85,	// (0x0003d196) middle_sk_idle_act4_pane

0xda9b,	// (0x0003d1ac) popup_clock_digital_analogue_window_cp2

0xdad6,	// (0x0003d1e7) shortcut_wheel_idle_act4_pane_ParamLimits

0xdad6,	// (0x0003d1e7) shortcut_wheel_idle_act4_pane

0xbfc7,	// (0x0003b6d8) shortcut_wheel_idle_act4_pane_g1

0xbfc7,	// (0x0003b6d8) shortcut_wheel_idle_act4_pane_g2

0xbfc7,	// (0x0003b6d8) shortcut_wheel_idle_act4_pane_g3

0xbfc7,	// (0x0003b6d8) shortcut_wheel_idle_act4_pane_g4

0xbfc7,	// (0x0003b6d8) shortcut_wheel_idle_act4_pane_g5

0xdaea,	// (0x0003d1fb) shortcut_wheel_idle_act4_pane_g6

0xdaf2,	// (0x0003d203) shortcut_wheel_idle_act4_pane_g7

0xdafa,	// (0x0003d20b) shortcut_wheel_idle_act4_pane_g8

0xdb02,	// (0x0003d213) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd20,	// (0x0003f431) shortcut_wheel_idle_act4_pane_g

0xc24e,	// (0x0003b95f) middle_sk_idle_act4_pane_g1_ParamLimits

0xc24e,	// (0x0003b95f) middle_sk_idle_act4_pane_g1

0xdb66,	// (0x0003d277) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb66,	// (0x0003d277) middle_sk_idle_act4_pane_g2

0x0001,

0xfd43,	// (0x0003f454) middle_sk_idle_act4_pane_g_ParamLimits

0xfd43,	// (0x0003f454) middle_sk_idle_act4_pane_g

0xdb72,	// (0x0003d283) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb72,	// (0x0003d283) middle_sk_idle_act4_pane_t1

0xdb8f,	// (0x0003d2a0) grid_ai_shortcut_pane_ParamLimits

0xdb8f,	// (0x0003d2a0) grid_ai_shortcut_pane

0xdba8,	// (0x0003d2b9) list_highlight_pane_cp16_ParamLimits

0xdba8,	// (0x0003d2b9) list_highlight_pane_cp16

0xdbb5,	// (0x0003d2c6) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbb5,	// (0x0003d2c6) list_single_idle_plugin_shortcut_pane_g1

0xdbc1,	// (0x0003d2d2) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbc1,	// (0x0003d2d2) list_single_idle_plugin_shortcut_pane_g2

0xdbdb,	// (0x0003d2ec) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbdb,	// (0x0003d2ec) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd48,	// (0x0003f459) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd48,	// (0x0003f459) list_single_idle_plugin_shortcut_pane_g

0xdbee,	// (0x0003d2ff) cell_ai_shortcut_pane_ParamLimits

0xdbee,	// (0x0003d2ff) cell_ai_shortcut_pane

0xdc11,	// (0x0003d322) cell_ai_shortcut_pane_g1_ParamLimits

0xdc11,	// (0x0003d322) cell_ai_shortcut_pane_g1

0xda1c,	// (0x0003d12d) ai_gene_pane_1_cp2

0xdc33,	// (0x0003d344) ai_gene_pane_2_cp2

0xdc3b,	// (0x0003d34c) list_highlight_pane_cp15

0xdc44,	// (0x0003d355) list_single_idle_plugin_calendar_pane_g1

0xdc3b,	// (0x0003d34c) list_highlight_pane_cp17

0xdc4c,	// (0x0003d35d) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc54,	// (0x0003d365) list_single_idle_plugin_player_pane_g1

0xb364,	// (0x0003aa75) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4f,	// (0x0003f460) list_single_idle_plugin_player_pane_g

0xdc5c,	// (0x0003d36d) list_single_idle_plugin_player_pane_t1

0xdc6a,	// (0x0003d37b) list_single_idle_plugin_player_pane_t2

0xdc78,	// (0x0003d389) list_single_idle_plugin_player_pane_t3

0xdc86,	// (0x0003d397) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd54,	// (0x0003f465) list_single_idle_plugin_player_pane_t

0xdc94,	// (0x0003d3a5) wait_bar_pane_cp15

0xdc9c,	// (0x0003d3ad) grid_ai_notification_pane

0xb364,	// (0x0003aa75) list_single_idle_plugin_notification_pane_g1

0xdca5,	// (0x0003d3b6) cell_ai_notification_pane_ParamLimits

0xdca5,	// (0x0003d3b6) cell_ai_notification_pane

0xdcb2,	// (0x0003d3c3) cell_ai_notification_pane_g1

0xdcba,	// (0x0003d3cb) cell_ai_notification_pane_t1

0xdcc8,	// (0x0003d3d9) tb_ext_find_button_pane

0xdcd0,	// (0x0003d3e1) tb_ext_find_pane_g1

0xdcd8,	// (0x0003d3e9) tb_ext_find_pane_t1

0x67dc,	// (0x00035eed) tb_ext_find_button_pane_g1

0xdce6,	// (0x0003d3f7) tb_ext_find_button_pane_g2

0x0001,

0xfd5d,	// (0x0003f46e) tb_ext_find_button_pane_g

0xda61,	// (0x0003d172) main_idle_act4_pane_t1_ParamLimits

0xda73,	// (0x0003d184) main_idle_act4_pane_t2_ParamLimits

0xfd1b,	// (0x0003f42c) main_idle_act4_pane_t_ParamLimits

0xda9b,	// (0x0003d1ac) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdaca,	// (0x0003d1db) sat_plugin_idle_act4_pane_ParamLimits

0xdaca,	// (0x0003d1db) sat_plugin_idle_act4_pane

0xdcef,	// (0x0003d400) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcef,	// (0x0003d400) sat_plugin_idle_act4_pane_t1

0xdd02,	// (0x0003d413) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd02,	// (0x0003d413) sat_plugin_idle_act4_pane_t2

0xdd15,	// (0x0003d426) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd15,	// (0x0003d426) sat_plugin_idle_act4_pane_t3

0xdd28,	// (0x0003d439) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd28,	// (0x0003d439) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd62,	// (0x0003f473) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd62,	// (0x0003f473) sat_plugin_idle_act4_pane_t

0x5610,	// (0x00034d21) popup_battery_window_ParamLimits

0x5610,	// (0x00034d21) popup_battery_window

0x23dd,	// (0x00031aee) bg_popup_sub_pane_cp25_ParamLimits

0x23dd,	// (0x00031aee) bg_popup_sub_pane_cp25

0xdd3b,	// (0x0003d44c) popup_battery_window_g1_ParamLimits

0xdd3b,	// (0x0003d44c) popup_battery_window_g1

0xdd47,	// (0x0003d458) popup_battery_window_t1_ParamLimits

0xdd47,	// (0x0003d458) popup_battery_window_t1

0xdd59,	// (0x0003d46a) popup_battery_window_t2_ParamLimits

0xdd59,	// (0x0003d46a) popup_battery_window_t2

0x0001,

0xfd6b,	// (0x0003f47c) popup_battery_window_t_ParamLimits

0xfd6b,	// (0x0003f47c) popup_battery_window_t

0x9169,	// (0x0003887a) midp_canvas_pane_ParamLimits

0x91e1,	// (0x000388f2) midp_keypad_pane_ParamLimits

0x91e1,	// (0x000388f2) midp_keypad_pane

0x947c,	// (0x00038b8d) main_midp_pane_ParamLimits

0xbada,	// (0x0003b1eb) signal_pane_g2_cp_ParamLimits

0xdd76,	// (0x0003d487) aid_size_cell_midp_keypad_ParamLimits

0xdd76,	// (0x0003d487) aid_size_cell_midp_keypad

0xdd90,	// (0x0003d4a1) midp_keyp_game_grid_pane_ParamLimits

0xdd90,	// (0x0003d4a1) midp_keyp_game_grid_pane

0xddb0,	// (0x0003d4c1) midp_keyp_rocker_pane_ParamLimits

0xddb0,	// (0x0003d4c1) midp_keyp_rocker_pane

0xdddf,	// (0x0003d4f0) midp_keyp_sk_left_pane_ParamLimits

0xdddf,	// (0x0003d4f0) midp_keyp_sk_left_pane

0xde3b,	// (0x0003d54c) midp_keyp_sk_right_pane_ParamLimits

0xde3b,	// (0x0003d54c) midp_keyp_sk_right_pane

0x223a,	// (0x0003194b) bg_button_pane_cp03

0xde97,	// (0x0003d5a8) midp_keyp_sk_left_pane_g1

0x223a,	// (0x0003194b) bg_button_pane_cp04

0xde97,	// (0x0003d5a8) midp_keyp_sk_right_pane_g1

0xbfc7,	// (0x0003b6d8) midp_keyp_rocker_pane_g1

0xde9f,	// (0x0003d5b0) keyp_game_cell_pane_ParamLimits

0xde9f,	// (0x0003d5b0) keyp_game_cell_pane

0x223a,	// (0x0003194b) bg_button_pane_cp02

0xdeb2,	// (0x0003d5c3) keyp_game_cell_pane_g1

0x565a,	// (0x00034d6b) popup_fep_vkb2_window_ParamLimits

0x565a,	// (0x00034d6b) popup_fep_vkb2_window

0x8038,	// (0x00037749) aid_size_cell_vkb2_ParamLimits

0x8038,	// (0x00037749) aid_size_cell_vkb2

0x8084,	// (0x00037795) popup_fep_vkb2_window_g1_ParamLimits

0x8084,	// (0x00037795) popup_fep_vkb2_window_g1

0x80cc,	// (0x000377dd) vkb2_area_bottom_pane_ParamLimits

0x80cc,	// (0x000377dd) vkb2_area_bottom_pane

0x8120,	// (0x00037831) vkb2_area_keypad_pane_ParamLimits

0x8120,	// (0x00037831) vkb2_area_keypad_pane

0x8166,	// (0x00037877) vkb2_area_top_pane_ParamLimits

0x8166,	// (0x00037877) vkb2_area_top_pane

0x81e6,	// (0x000378f7) vkb2_top_entry_pane_ParamLimits

0x81e6,	// (0x000378f7) vkb2_top_entry_pane

0x8210,	// (0x00037921) vkb2_top_grid_left_pane_ParamLimits

0x8210,	// (0x00037921) vkb2_top_grid_left_pane

0x822f,	// (0x00037940) vkb2_top_grid_right_pane_ParamLimits

0x822f,	// (0x00037940) vkb2_top_grid_right_pane

0x824e,	// (0x0003795f) vkb2_cell_keypad_pane_ParamLimits

0x824e,	// (0x0003795f) vkb2_cell_keypad_pane

0x831f,	// (0x00037a30) vkb2_area_bottom_grid_pane_ParamLimits

0x831f,	// (0x00037a30) vkb2_area_bottom_grid_pane

0x8345,	// (0x00037a56) vkb2_area_bottom_pane_g1_ParamLimits

0x8345,	// (0x00037a56) vkb2_area_bottom_pane_g1

0x8369,	// (0x00037a7a) vkb2_area_bottom_pane_g2_ParamLimits

0x8369,	// (0x00037a7a) vkb2_area_bottom_pane_g2

0x8397,	// (0x00037aa8) vkb2_area_bottom_pane_g3_ParamLimits

0x8397,	// (0x00037aa8) vkb2_area_bottom_pane_g3

0x0002,

0xfd70,	// (0x0003f481) vkb2_area_bottom_pane_g_ParamLimits

0xfd70,	// (0x0003f481) vkb2_area_bottom_pane_g

0x83f8,	// (0x00037b09) vkb2_top_cell_left_pane_ParamLimits

0x83f8,	// (0x00037b09) vkb2_top_cell_left_pane

0xdec3,	// (0x0003d5d4) vkb2_top_entry_pane_g1_ParamLimits

0xdec3,	// (0x0003d5d4) vkb2_top_entry_pane_g1

0xded1,	// (0x0003d5e2) vkb2_top_entry_pane_t1_ParamLimits

0xded1,	// (0x0003d5e2) vkb2_top_entry_pane_t1

0xdf03,	// (0x0003d614) vkb2_top_entry_pane_t2_ParamLimits

0xdf03,	// (0x0003d614) vkb2_top_entry_pane_t2

0xdf35,	// (0x0003d646) vkb2_top_entry_pane_t3_ParamLimits

0xdf35,	// (0x0003d646) vkb2_top_entry_pane_t3

0x0002,

0xfd77,	// (0x0003f488) vkb2_top_entry_pane_t_ParamLimits

0xfd77,	// (0x0003f488) vkb2_top_entry_pane_t

0x8445,	// (0x00037b56) vkb2_top_grid_right_pane_g1_ParamLimits

0x8445,	// (0x00037b56) vkb2_top_grid_right_pane_g1

0x845b,	// (0x00037b6c) vkb2_top_grid_right_pane_g2_ParamLimits

0x845b,	// (0x00037b6c) vkb2_top_grid_right_pane_g2

0x8473,	// (0x00037b84) vkb2_top_grid_right_pane_g3_ParamLimits

0x8473,	// (0x00037b84) vkb2_top_grid_right_pane_g3

0x848b,	// (0x00037b9c) vkb2_top_grid_right_pane_g4_ParamLimits

0x848b,	// (0x00037b9c) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7e,	// (0x0003f48f) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7e,	// (0x0003f48f) vkb2_top_grid_right_pane_g

0x84a1,	// (0x00037bb2) vkb2_top_cell_left_pane_g1

0x84b8,	// (0x00037bc9) vkb2_cell_keypad_pane_g1_ParamLimits

0x84b8,	// (0x00037bc9) vkb2_cell_keypad_pane_g1

0xdf59,	// (0x0003d66a) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf59,	// (0x0003d66a) vkb2_cell_keypad_pane_t1

0x84c6,	// (0x00037bd7) vkb2_cell_bottom_grid_pane_ParamLimits

0x84c6,	// (0x00037bd7) vkb2_cell_bottom_grid_pane

0x84ff,	// (0x00037c10) vkb2_cell_bottom_grid_pane_g1

0xdb0a,	// (0x0003d21b) aid_call2_pane_cp02

0xdb12,	// (0x0003d223) aid_call_pane_cp02

0xdb1a,	// (0x0003d22b) clock_digital_number_pane_cp10

0xdb22,	// (0x0003d233) clock_digital_number_pane_cp11

0xdb2a,	// (0x0003d23b) clock_digital_number_pane_cp12

0xdb32,	// (0x0003d243) clock_digital_number_pane_cp13

0xdb3a,	// (0x0003d24b) clock_digital_separator_pane_cp10

0x67dc,	// (0x00035eed) popup_clock_digital_analogue_window_cp2_g1

0x67dc,	// (0x00035eed) popup_clock_digital_analogue_window_cp2_g2

0xdb42,	// (0x0003d253) popup_clock_digital_analogue_window_cp2_g3

0x67dc,	// (0x00035eed) popup_clock_digital_analogue_window_cp2_g4

0xdb42,	// (0x0003d253) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd33,	// (0x0003f444) popup_clock_digital_analogue_window_cp2_g

0xdb4a,	// (0x0003d25b) popup_clock_digital_analogue_window_cp2_t1

0xdb58,	// (0x0003d269) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3e,	// (0x0003f44f) popup_clock_digital_analogue_window_cp2_t

0xbfc7,	// (0x0003b6d8) clock_digital_number_pane_cp10_g1

0xbfc7,	// (0x0003b6d8) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0003f22b) clock_digital_number_pane_cp10_g

0xbfc7,	// (0x0003b6d8) clock_digital_separator_pane_cp10_g1

0xbfc7,	// (0x0003b6d8) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0003f22b) clock_digital_separator_pane_cp10_g

0xd963,	// (0x0003d074) uniindi_top_pane_g3

0xd974,	// (0x0003d085) uniindi_top_pane_g4

0x82d9,	// (0x000379ea) vkb2_row_keypad_pane_ParamLimits

0x82d9,	// (0x000379ea) vkb2_row_keypad_pane

0x851b,	// (0x00037c2c) vkb2_cell_t_keypad_pane_ParamLimits

0x851b,	// (0x00037c2c) vkb2_cell_t_keypad_pane

0x852b,	// (0x00037c3c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x852b,	// (0x00037c3c) vkb2_cell_t_keypad_pane_cp08

0x8540,	// (0x00037c51) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8540,	// (0x00037c51) vkb2_cell_t_keypad_pane_cp09

0x8554,	// (0x00037c65) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8554,	// (0x00037c65) vkb2_cell_t_keypad_pane_cp01

0x8565,	// (0x00037c76) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8565,	// (0x00037c76) vkb2_cell_t_keypad_pane_cp02

0x8576,	// (0x00037c87) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8576,	// (0x00037c87) vkb2_cell_t_keypad_pane_cp03

0x8587,	// (0x00037c98) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8587,	// (0x00037c98) vkb2_cell_t_keypad_pane_cp04

0x8598,	// (0x00037ca9) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8598,	// (0x00037ca9) vkb2_cell_t_keypad_pane_cp05

0x85a9,	// (0x00037cba) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x85a9,	// (0x00037cba) vkb2_cell_t_keypad_pane_cp06

0x85bc,	// (0x00037ccd) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x85bc,	// (0x00037ccd) vkb2_cell_t_keypad_pane_cp07

0x85d1,	// (0x00037ce2) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x85d1,	// (0x00037ce2) vkb2_cell_t_keypad_pane_cp10

0x7c0e,	// (0x0003731f) vkb2_cell_t_keypad_pane_g1

0xdf70,	// (0x0003d681) vkb2_cell_t_keypad_pane_t1

0x554b,	// (0x00034c5c) popup_grid_graphic2_window

0xdf82,	// (0x0003d693) aid_size_cell_graphic2_ParamLimits

0xdf82,	// (0x0003d693) aid_size_cell_graphic2

0xdfba,	// (0x0003d6cb) bg_popup_window_pane_cp21_ParamLimits

0xdfba,	// (0x0003d6cb) bg_popup_window_pane_cp21

0xdfc8,	// (0x0003d6d9) graphic2_pages_pane_ParamLimits

0xdfc8,	// (0x0003d6d9) graphic2_pages_pane

0xe00e,	// (0x0003d71f) grid_graphic2_control_pane_ParamLimits

0xe00e,	// (0x0003d71f) grid_graphic2_control_pane

0xe04c,	// (0x0003d75d) grid_graphic2_pane_ParamLimits

0xe04c,	// (0x0003d75d) grid_graphic2_pane

0xe0c2,	// (0x0003d7d3) cell_graphic2_pane

0x554b,	// (0x00034c5c) main_comp_mode_pane

0xd1ce,	// (0x0003c8df) list_ai3_gene_pane_ParamLimits

0xd596,	// (0x0003cca7) bg_popup_window_pane_cp19_ParamLimits

0xd5a2,	// (0x0003ccb3) bg_touch_area_indi_pane_ParamLimits

0xd5a2,	// (0x0003ccb3) bg_touch_area_indi_pane

0xd5b8,	// (0x0003ccc9) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5b8,	// (0x0003ccc9) bg_touch_area_indi_pane_cp01

0xd5ce,	// (0x0003ccdf) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5ce,	// (0x0003ccdf) bg_touch_area_indi_pane_cp02

0xd5e8,	// (0x0003ccf9) bg_touch_area_indi_pane_cp03_ParamLimits

0xd5e8,	// (0x0003ccf9) bg_touch_area_indi_pane_cp03

0xd602,	// (0x0003cd13) popup_slider_window_g1_ParamLimits

0xd61e,	// (0x0003cd2f) popup_slider_window_g2_ParamLimits

0xd63a,	// (0x0003cd4b) popup_slider_window_g3_ParamLimits

0xfcc8,	// (0x0003f3d9) popup_slider_window_g_ParamLimits

0xd6a0,	// (0x0003cdb1) popup_slider_window_t1_ParamLimits

0xd714,	// (0x0003ce25) small_volume_slider_vertical_pane_ParamLimits

0xe0c2,	// (0x0003d7d3) cell_graphic2_pane_ParamLimits

0xe116,	// (0x0003d827) bg_button_pane_cp10_ParamLimits

0xe116,	// (0x0003d827) bg_button_pane_cp10

0xe12b,	// (0x0003d83c) bg_button_pane_cp11_ParamLimits

0xe12b,	// (0x0003d83c) bg_button_pane_cp11

0xe140,	// (0x0003d851) graphic2_pages_pane_g1_ParamLimits

0xe140,	// (0x0003d851) graphic2_pages_pane_g1

0xe15b,	// (0x0003d86c) graphic2_pages_pane_g2_ParamLimits

0xe15b,	// (0x0003d86c) graphic2_pages_pane_g2

0x0001,

0xfd8c,	// (0x0003f49d) graphic2_pages_pane_g_ParamLimits

0xfd8c,	// (0x0003f49d) graphic2_pages_pane_g

0xe173,	// (0x0003d884) graphic2_pages_pane_t1_ParamLimits

0xe173,	// (0x0003d884) graphic2_pages_pane_t1

0xe189,	// (0x0003d89a) cell_graphic2_control_pane_ParamLimits

0xe189,	// (0x0003d89a) cell_graphic2_control_pane

0xe1a9,	// (0x0003d8ba) cell_graphic2_pane_g1_ParamLimits

0xe1a9,	// (0x0003d8ba) cell_graphic2_pane_g1

0xe1b6,	// (0x0003d8c7) cell_graphic2_pane_g2_ParamLimits

0xe1b6,	// (0x0003d8c7) cell_graphic2_pane_g2

0xe1c3,	// (0x0003d8d4) cell_graphic2_pane_g3_ParamLimits

0xe1c3,	// (0x0003d8d4) cell_graphic2_pane_g3

0xe1d0,	// (0x0003d8e1) cell_graphic2_pane_g4_ParamLimits

0xe1d0,	// (0x0003d8e1) cell_graphic2_pane_g4

0xe1dd,	// (0x0003d8ee) cell_graphic2_pane_g5_ParamLimits

0xe1dd,	// (0x0003d8ee) cell_graphic2_pane_g5

0x0004,

0xfd91,	// (0x0003f4a2) cell_graphic2_pane_g_ParamLimits

0xfd91,	// (0x0003f4a2) cell_graphic2_pane_g

0xe1f5,	// (0x0003d906) cell_graphic2_pane_t1_ParamLimits

0xe1f5,	// (0x0003d906) cell_graphic2_pane_t1

0x9a26,	// (0x00039137) grid_highlight_pane_cp11_ParamLimits

0x9a26,	// (0x00039137) grid_highlight_pane_cp11

0x23dd,	// (0x00031aee) bg_button_pane_cp05

0xe22b,	// (0x0003d93c) cell_graphic2_control_pane_g1

0xbfc7,	// (0x0003b6d8) bg_touch_area_indi_pane_g1

0xe253,	// (0x0003d964) aid_cmod_rocker_key_size

0xe25d,	// (0x0003d96e) aid_cmode_itu_key_size

0xe267,	// (0x0003d978) main_cmode_video_pane

0xe271,	// (0x0003d982) main_comp_mode_itu_pane

0xe27d,	// (0x0003d98e) main_comp_mode_rocker_pane

0xe289,	// (0x0003d99a) cell_cmode_rocker_pane_ParamLimits

0xe289,	// (0x0003d99a) cell_cmode_rocker_pane

0xe29d,	// (0x0003d9ae) cell_cmode_itu_pane_ParamLimits

0xe29d,	// (0x0003d9ae) cell_cmode_itu_pane

0x28ec,	// (0x00031ffd) bg_button_pane_cp06_ParamLimits

0x28ec,	// (0x00031ffd) bg_button_pane_cp06

0xc24e,	// (0x0003b95f) cell_cmode_rocker_pane_g1_ParamLimits

0xc24e,	// (0x0003b95f) cell_cmode_rocker_pane_g1

0xd7bb,	// (0x0003cecc) cell_cmode_rocker_pane_g2_ParamLimits

0xd7bb,	// (0x0003cecc) cell_cmode_rocker_pane_g2

0x0001,

0xfda1,	// (0x0003f4b2) cell_cmode_rocker_pane_g_ParamLimits

0xfda1,	// (0x0003f4b2) cell_cmode_rocker_pane_g

0x223a,	// (0x0003194b) bg_button_pane_cp07

0xe2b4,	// (0x0003d9c5) cell_cmode_itu_pane_g1

0xe2bd,	// (0x0003d9ce) cell_cmode_itu_pane_t1

0xe2cb,	// (0x0003d9dc) cell_cmode_itu_pane_t2

0x0001,

0xfda6,	// (0x0003f4b7) cell_cmode_itu_pane_t

0xd9e8,	// (0x0003d0f9) aid_touch_ctrl_left

0xd9f0,	// (0x0003d101) aid_touch_ctrl_right

0x223a,	// (0x0003194b) compa_mode_pane

0xe2d9,	// (0x0003d9ea) aid_cmod_rocker_key_size_cp

0xe2e3,	// (0x0003d9f4) aid_cmode_itu_key_size_cp

0xe2ed,	// (0x0003d9fe) compa_mode_pane_g1

0xe2f5,	// (0x0003da06) compa_mode_pane_g2

0xe2fd,	// (0x0003da0e) compa_mode_pane_g3

0x0002,

0xfdab,	// (0x0003f4bc) compa_mode_pane_g

0xe305,	// (0x0003da16) main_comp_mode_itu_pane_cp

0xe30d,	// (0x0003da1e) main_comp_mode_rocker_pane_cp

0xe315,	// (0x0003da26) cell_cmode_itu_pane_cp_ParamLimits

0xe315,	// (0x0003da26) cell_cmode_itu_pane_cp

0xe32a,	// (0x0003da3b) cell_cmode_rocker_pane_cp_ParamLimits

0xe32a,	// (0x0003da3b) cell_cmode_rocker_pane_cp

0x28ec,	// (0x00031ffd) bg_button_pane_cp06_cp_ParamLimits

0x28ec,	// (0x00031ffd) bg_button_pane_cp06_cp

0xc24e,	// (0x0003b95f) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc24e,	// (0x0003b95f) cell_cmode_rocker_pane_g1_cp

0xbfc7,	// (0x0003b6d8) cell_cmode_rocker_pane_g2_cp

0x223a,	// (0x0003194b) bg_button_pane_cp07_cp

0xe33c,	// (0x0003da4d) cell_cmode_itu_pane_g1_cp

0xe345,	// (0x0003da56) cell_cmode_itu_pane_t1_cp

0xe345,	// (0x0003da56) cell_cmode_itu_pane_t2_cp

0xaefd,	// (0x0003a60e) settings_code_pane_cp2

0x22aa,	// (0x000319bb) bg_popup_window_pane_cp3_ParamLimits

0x25f1,	// (0x00031d02) heading_pane_cp3_ParamLimits

0x2600,	// (0x00031d11) listscroll_popup_graphic_pane_ParamLimits

0x79a1,	// (0x000370b2) fep_hwr_aid_pane_ParamLimits

0x7f91,	// (0x000376a2) aid_touch_sctrl_top_ParamLimits

0x7fac,	// (0x000376bd) sctrl_sk_top_pane_g1_ParamLimits

0x7c0e,	// (0x0003731f) sctrl_sk_top_pane_g2_ParamLimits

0xfce1,	// (0x0003f3f2) sctrl_sk_top_pane_g_ParamLimits

0x7fb9,	// (0x000376ca) sctrl_sk_top_pane_t1_ParamLimits

0x7f91,	// (0x000376a2) aid_touch_sctrl_bottom_ParamLimits

0x7fb9,	// (0x000376ca) sctrl_sk_bottom_pane_t1_ParamLimits

0xd92d,	// (0x0003d03e) aid_area_touch_clock

0x81ac,	// (0x000378bd) aid_vkb2_area_top_pane_cell_ParamLimits

0x81ac,	// (0x000378bd) aid_vkb2_area_top_pane_cell

0x82fb,	// (0x00037a0c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x82fb,	// (0x00037a0c) aid_vkb2_area_bottom_pane_cell

0xdebb,	// (0x0003d5cc) popup_char_count_window

0xe353,	// (0x0003da64) popup_char_count_window_g1

0xe35c,	// (0x0003da6d) popup_char_count_window_g2

0xe365,	// (0x0003da76) popup_char_count_window_g3

0x0002,

0xfdb2,	// (0x0003f4c3) popup_char_count_window_g

0xe36e,	// (0x0003da7f) popup_char_count_window_t1

0x8062,	// (0x00037773) popup_fep_char_preview_window_ParamLimits

0x8062,	// (0x00037773) popup_fep_char_preview_window

0x81ca,	// (0x000378db) vkb2_top_candi_pane_ParamLimits

0x81ca,	// (0x000378db) vkb2_top_candi_pane

0xe37c,	// (0x0003da8d) cell_vkb2_top_candi_pane_ParamLimits

0xe37c,	// (0x0003da8d) cell_vkb2_top_candi_pane

0x85e6,	// (0x00037cf7) bg_popup_fep_char_preview_window_ParamLimits

0x85e6,	// (0x00037cf7) bg_popup_fep_char_preview_window

0x85f4,	// (0x00037d05) popup_fep_char_preview_window_t1_ParamLimits

0x85f4,	// (0x00037d05) popup_fep_char_preview_window_t1

0xe3ca,	// (0x0003dadb) bg_popup_fep_char_preview_window_g1

0xe3d2,	// (0x0003dae3) bg_popup_fep_char_preview_window_g2

0xe3da,	// (0x0003daeb) bg_popup_fep_char_preview_window_g3

0xe3e2,	// (0x0003daf3) bg_popup_fep_char_preview_window_g4

0xe3ea,	// (0x0003dafb) bg_popup_fep_char_preview_window_g5

0xe3f2,	// (0x0003db03) bg_popup_fep_char_preview_window_g6

0xe3fa,	// (0x0003db0b) bg_popup_fep_char_preview_window_g7

0xe402,	// (0x0003db13) bg_popup_fep_char_preview_window_g8

0xe40a,	// (0x0003db1b) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb9,	// (0x0003f4ca) bg_popup_fep_char_preview_window_g

0x7c0e,	// (0x0003731f) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7c0e,	// (0x0003731f) cell_vkb2_top_candi_pane_g1

0x7c1c,	// (0x0003732d) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7c1c,	// (0x0003732d) cell_vkb2_top_candi_pane_g2

0xdaa9,	// (0x0003d1ba) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdaa9,	// (0x0003d1ba) cell_vkb2_top_candi_pane_g3

0x8636,	// (0x00037d47) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8636,	// (0x00037d47) cell_vkb2_top_candi_pane_g4

0xc76d,	// (0x0003be7e) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc76d,	// (0x0003be7e) cell_vkb2_top_candi_pane_g5

0x8657,	// (0x00037d68) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8657,	// (0x00037d68) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdce,	// (0x0003f4df) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdce,	// (0x0003f4df) cell_vkb2_top_candi_pane_g

0x8665,	// (0x00037d76) cell_vkb2_top_candi_pane_t1

0x775e,	// (0x00036e6f) aid_size_touch_slider_mark_ParamLimits

0x775e,	// (0x00036e6f) aid_size_touch_slider_mark

0xdffe,	// (0x0003d70f) grid_graphic2_catg_pane_ParamLimits

0xdffe,	// (0x0003d70f) grid_graphic2_catg_pane

0xe09c,	// (0x0003d7ad) popup_grid_graphic2_window_t1_ParamLimits

0xe09c,	// (0x0003d7ad) popup_grid_graphic2_window_t1

0xe0ae,	// (0x0003d7bf) popup_grid_graphic2_window_t2_ParamLimits

0xe0ae,	// (0x0003d7bf) popup_grid_graphic2_window_t2

0x0001,

0xfd87,	// (0x0003f498) popup_grid_graphic2_window_t_ParamLimits

0xfd87,	// (0x0003f498) popup_grid_graphic2_window_t

0x23dd,	// (0x00031aee) bg_button_pane_cp05_ParamLimits

0xe22b,	// (0x0003d93c) cell_graphic2_control_pane_g1_ParamLimits

0xe412,	// (0x0003db23) cell_graphic2_catg_pane_ParamLimits

0xe412,	// (0x0003db23) cell_graphic2_catg_pane

0x223a,	// (0x0003194b) bg_button_pane_cp12

0xe424,	// (0x0003db35) cell_graphic2_catg_pane_g1

0xd8f9,	// (0x0003d00a) cell_tb_ext_pane_t1_ParamLimits

0x8418,	// (0x00037b29) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8418,	// (0x00037b29) vkb2_top_cell_right_narrow_pane

0x8430,	// (0x00037b41) vkb2_top_cell_right_wide_pane_ParamLimits

0x8430,	// (0x00037b41) vkb2_top_cell_right_wide_pane

0x7993,	// (0x000370a4) bg_vkb2_func_pane_ParamLimits

0x7993,	// (0x000370a4) bg_vkb2_func_pane

0x84a1,	// (0x00037bb2) vkb2_top_cell_left_pane_g1_ParamLimits

0x7993,	// (0x000370a4) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7993,	// (0x000370a4) bg_vkb2_fuc_pane_cp03

0x84ff,	// (0x00037c10) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x99ba,	// (0x000390cb) bg_vkb2_func_pane_g1

0x99c2,	// (0x000390d3) bg_vkb2_func_pane_g2

0x99d2,	// (0x000390e3) bg_vkb2_func_pane_g3

0x99ca,	// (0x000390db) bg_vkb2_func_pane_g4

0x99da,	// (0x000390eb) bg_vkb2_func_pane_g5

0x99e2,	// (0x000390f3) bg_vkb2_func_pane_g6

0x99ea,	// (0x000390fb) bg_vkb2_func_pane_g7

0x99f2,	// (0x00039103) bg_vkb2_func_pane_g8

0x99b2,	// (0x000390c3) bg_vkb2_func_pane_g9

0x0008,

0xfddb,	// (0x0003f4ec) bg_vkb2_func_pane_g

0x7993,	// (0x000370a4) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7993,	// (0x000370a4) bg_vkb2_fuc_pane_cp01

0x84a1,	// (0x00037bb2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x84a1,	// (0x00037bb2) vkb2_top_cell_right_wide_pane_g1

0x7993,	// (0x000370a4) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7993,	// (0x000370a4) bg_vkb2_fuc_pane_cp02

0x8683,	// (0x00037d94) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8683,	// (0x00037d94) vkb2_top_cell_right_narrow_pane_g1

0xd510,	// (0x0003cc21) aid_touch_area_decrease_ParamLimits

0xd510,	// (0x0003cc21) aid_touch_area_decrease

0xd534,	// (0x0003cc45) aid_touch_area_increase_ParamLimits

0xd534,	// (0x0003cc45) aid_touch_area_increase

0xd54c,	// (0x0003cc5d) aid_touch_area_mute_ParamLimits

0xd54c,	// (0x0003cc5d) aid_touch_area_mute

0xd568,	// (0x0003cc79) aid_touch_area_slider_ParamLimits

0xd568,	// (0x0003cc79) aid_touch_area_slider

0xd656,	// (0x0003cd67) popup_slider_window_g4_ParamLimits

0xd656,	// (0x0003cd67) popup_slider_window_g4

0xd66e,	// (0x0003cd7f) popup_slider_window_g5_ParamLimits

0xd66e,	// (0x0003cd7f) popup_slider_window_g5

0xd690,	// (0x0003cda1) popup_slider_window_g6_ParamLimits

0xd690,	// (0x0003cda1) popup_slider_window_g6

0xd6ce,	// (0x0003cddf) popup_slider_window_t2_ParamLimits

0xd6ce,	// (0x0003cddf) popup_slider_window_t2

0x0001,

0xfcd5,	// (0x0003f3e6) popup_slider_window_t_ParamLimits

0xfcd5,	// (0x0003f3e6) popup_slider_window_t

0xd6e6,	// (0x0003cdf7) slider_pane_ParamLimits

0xd6e6,	// (0x0003cdf7) slider_pane

0xe42d,	// (0x0003db3e) slider_pane_g1_ParamLimits

0xe42d,	// (0x0003db3e) slider_pane_g1

0xe441,	// (0x0003db52) slider_pane_g2_ParamLimits

0xe441,	// (0x0003db52) slider_pane_g2

0xe457,	// (0x0003db68) slider_pane_g3_ParamLimits

0xe457,	// (0x0003db68) slider_pane_g3

0x0003,

0xfdee,	// (0x0003f4ff) slider_pane_g_ParamLimits

0xfdee,	// (0x0003f4ff) slider_pane_g

0x7308,	// (0x00036a19) popup_tb_float_extension_window_ParamLimits

0x7308,	// (0x00036a19) popup_tb_float_extension_window

0xe483,	// (0x0003db94) aid_size_cell_tb_float_ext

0x223a,	// (0x0003194b) bg_popup_sub_window_cp28

0xe48f,	// (0x0003dba0) grid_tb_float_ext_pane

0xe49b,	// (0x0003dbac) cell_tb_float_ext_pane_ParamLimits

0xe49b,	// (0x0003dbac) cell_tb_float_ext_pane

0xe4b7,	// (0x0003dbc8) cell_tb_float_ext_pane_g1

0xe4c0,	// (0x0003dbd1) grid_highlight_pane_cp12

0x7ae8,	// (0x000371f9) cell_last_hwr_side_pane_ParamLimits

0x7ae8,	// (0x000371f9) cell_last_hwr_side_pane

0xbfc7,	// (0x0003b6d8) cell_last_hwr_side_pane_g1

0xe4c9,	// (0x0003dbda) cell_last_hwr_side_pane_g2

0x0001,

0xfdf7,	// (0x0003f508) cell_last_hwr_side_pane_g

0x83c7,	// (0x00037ad8) vkb2_area_bottom_space_btn_pane_ParamLimits

0x83c7,	// (0x00037ad8) vkb2_area_bottom_space_btn_pane

0x7c0e,	// (0x0003731f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf70,	// (0x0003d681) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8665,	// (0x00037d76) cell_vkb2_top_candi_pane_t1_ParamLimits

0x869f,	// (0x00037db0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x869f,	// (0x00037db0) vkb2_area_bottom_space_btn_pane_g1

0x86d9,	// (0x00037dea) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x86d9,	// (0x00037dea) vkb2_area_bottom_space_btn_pane_g2

0x870f,	// (0x00037e20) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x870f,	// (0x00037e20) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdfc,	// (0x0003f50d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdfc,	// (0x0003f50d) vkb2_area_bottom_space_btn_pane_g

0x7a58,	// (0x00037169) cel_fep_hwr_func_pane_ParamLimits

0x7a58,	// (0x00037169) cel_fep_hwr_func_pane

0x7a94,	// (0x000371a5) cell_hwr_side_button_pane_ParamLimits

0x7a94,	// (0x000371a5) cell_hwr_side_button_pane

0xd92d,	// (0x0003d03e) aid_area_touch_clock_ParamLimits

0x23dd,	// (0x00031aee) bg_uniindi_top_pane_ParamLimits

0xd941,	// (0x0003d052) uniindi_top_pane_g1_ParamLimits

0xd957,	// (0x0003d068) uniindi_top_pane_g2_ParamLimits

0xd963,	// (0x0003d074) uniindi_top_pane_g3_ParamLimits

0xd974,	// (0x0003d085) uniindi_top_pane_g4_ParamLimits

0xfd0d,	// (0x0003f41e) uniindi_top_pane_g_ParamLimits

0xd981,	// (0x0003d092) uniindi_top_pane_t1_ParamLimits

0x23dd,	// (0x00031aee) bg_vkb2_func_pane_cp01_ParamLimits

0x23dd,	// (0x00031aee) bg_vkb2_func_pane_cp01

0xe4d2,	// (0x0003dbe3) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4d2,	// (0x0003dbe3) cel_fep_hwr_func_pane_g1

0x23dd,	// (0x00031aee) bg_vkb2_func_pane_cp02_ParamLimits

0x23dd,	// (0x00031aee) bg_vkb2_func_pane_cp02

0xe4d2,	// (0x0003dbe3) cell_hwr_side_button_pane_g1_ParamLimits

0xe4d2,	// (0x0003dbe3) cell_hwr_side_button_pane_g1

0x9837,	// (0x00038f48) status_pane_g4_ParamLimits

0x9837,	// (0x00038f48) status_pane_g4

0x9851,	// (0x00038f62) status_pane_t1

0xbd7a,	// (0x0003b48b) form2_midp_gauge_slider_cont_pane

0xbd82,	// (0x0003b493) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd94,	// (0x0003b4a5) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbda6,	// (0x0003b4b7) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacd,	// (0x0003f1de) form2_midp_gauge_slider_pane_t_ParamLimits

0xbdb8,	// (0x0003b4c9) form2_midp_slider_pane_ParamLimits

0x802a,	// (0x0003773b) aid_size_cell_func_vkb2_ParamLimits

0x802a,	// (0x0003773b) aid_size_cell_func_vkb2

0xe46f,	// (0x0003db80) slider_pane_g4_ParamLimits

0xe46f,	// (0x0003db80) slider_pane_g4

0x8759,	// (0x00037e6a) form2_midp_gauge_slider_pane_t2_cp01

0x8767,	// (0x00037e78) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8767,	// (0x00037e78) form2_midp_gauge_slider_pane_t3_cp01

0x8784,	// (0x00037e95) form2_midp_slider_pane_cp01

0x223a,	// (0x0003194b) navi_smil_pane

0xe50b,	// (0x0003dc1c) navi_smil_pane_g1

0xe513,	// (0x0003dc24) navi_smil_pane_t1

0xe4e0,	// (0x0003dbf1) form2_midp_slider_pane_g1

0xe4e9,	// (0x0003dbfa) form2_midp_slider_pane_g2

0xe4f1,	// (0x0003dc02) form2_midp_slider_pane_g3

0xe4e0,	// (0x0003dbf1) form2_midp_slider_pane_g4

0xe4f9,	// (0x0003dc0a) form2_midp_slider_pane_g5

0x0004,

0xfe05,	// (0x0003f516) form2_midp_slider_pane_g

0x8749,	// (0x00037e5a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8749,	// (0x00037e5a) vkb2_area_bottom_space_btn_pane_g4

0x9656,	// (0x00038d67) lc0_navi_pane_ParamLimits

0x9656,	// (0x00038d67) lc0_navi_pane

0x96d2,	// (0x00038de3) lc0_stat_indi_pane_ParamLimits

0x96d2,	// (0x00038de3) lc0_stat_indi_pane

0x96e9,	// (0x00038dfa) ls0_title_pane_ParamLimits

0x96e9,	// (0x00038dfa) ls0_title_pane

0x28ec,	// (0x00031ffd) bg_popup_sub_pane_cp14_ParamLimits

0xd914,	// (0x0003d025) list_uniindi_pane_ParamLimits

0xd920,	// (0x0003d031) uniindi_top_pane_ParamLimits

0xd9c0,	// (0x0003d0d1) list_single_uniindi_pane_g1_ParamLimits

0xd9d3,	// (0x0003d0e4) list_single_uniindi_pane_t1_ParamLimits

0x878d,	// (0x00037e9e) lc0_stat_clock_pane_ParamLimits

0x878d,	// (0x00037e9e) lc0_stat_clock_pane

0xe521,	// (0x0003dc32) lc0_stat_indi_pane_g1_ParamLimits

0xe521,	// (0x0003dc32) lc0_stat_indi_pane_g1

0xe52e,	// (0x0003dc3f) lc0_stat_indi_pane_g2_ParamLimits

0xe52e,	// (0x0003dc3f) lc0_stat_indi_pane_g2

0x0001,

0xfe10,	// (0x0003f521) lc0_stat_indi_pane_g_ParamLimits

0xfe10,	// (0x0003f521) lc0_stat_indi_pane_g

0x879a,	// (0x00037eab) lc0_uni_indicator_pane_ParamLimits

0x879a,	// (0x00037eab) lc0_uni_indicator_pane

0xe53b,	// (0x0003dc4c) ls0_title_pane_g1_ParamLimits

0xe53b,	// (0x0003dc4c) ls0_title_pane_g1

0xe54f,	// (0x0003dc60) ls0_title_pane_t1_ParamLimits

0xe54f,	// (0x0003dc60) ls0_title_pane_t1

0x87a7,	// (0x00037eb8) lc0_uni_indicator_pane_g1_ParamLimits

0x87a7,	// (0x00037eb8) lc0_uni_indicator_pane_g1

0xe585,	// (0x0003dc96) lc0_stat_clock_pane_t1

0x554b,	// (0x00034c5c) main_ai5_pane

0xe593,	// (0x0003dca4) ai5_sk_pane_ParamLimits

0xe593,	// (0x0003dca4) ai5_sk_pane

0xe5a0,	// (0x0003dcb1) cell_ai5_widget_pane_ParamLimits

0xe5a0,	// (0x0003dcb1) cell_ai5_widget_pane

0xe643,	// (0x0003dd54) aid_size_cell_widget_grid

0xe651,	// (0x0003dd62) bg_ai5_widget_pane_ParamLimits

0xe651,	// (0x0003dd62) bg_ai5_widget_pane

0xe6cd,	// (0x0003ddde) cell_ai5_widget_pane_g2

0xe6e1,	// (0x0003ddf2) cell_ai5_widget_pane_g3

0xe6fb,	// (0x0003de0c) cell_ai5_widget_pane_g4

0xe70b,	// (0x0003de1c) cell_ai5_widget_pane_g5

0xe71b,	// (0x0003de2c) cell_ai5_widget_pane_g6

0xe727,	// (0x0003de38) cell_ai5_widget_pane_g7

0xe793,	// (0x0003dea4) cell_ai5_widget_pane_t1_ParamLimits

0xe793,	// (0x0003dea4) cell_ai5_widget_pane_t1

0xe7b0,	// (0x0003dec1) cell_ai5_widget_pane_t2_ParamLimits

0xe7b0,	// (0x0003dec1) cell_ai5_widget_pane_t2

0xe7c8,	// (0x0003ded9) cell_ai5_widget_pane_t3_ParamLimits

0xe7c8,	// (0x0003ded9) cell_ai5_widget_pane_t3

0xe7e0,	// (0x0003def1) cell_ai5_widget_pane_t4_ParamLimits

0xe7e0,	// (0x0003def1) cell_ai5_widget_pane_t4

0xe806,	// (0x0003df17) cell_ai5_widget_pane_t5_ParamLimits

0xe806,	// (0x0003df17) cell_ai5_widget_pane_t5

0xe826,	// (0x0003df37) cell_ai5_widget_pane_t6_ParamLimits

0xe826,	// (0x0003df37) cell_ai5_widget_pane_t6

0xe838,	// (0x0003df49) cell_ai5_widget_pane_t7_ParamLimits

0xe838,	// (0x0003df49) cell_ai5_widget_pane_t7

0xe857,	// (0x0003df68) cell_ai5_widget_pane_t8_ParamLimits

0xe857,	// (0x0003df68) cell_ai5_widget_pane_t8

0x000b,

0xfe30,	// (0x0003f541) cell_ai5_widget_pane_t_ParamLimits

0xfe30,	// (0x0003f541) cell_ai5_widget_pane_t

0xe8db,	// (0x0003dfec) grid_ai5_widget_pane

0x28ec,	// (0x00031ffd) highlight_cell_ai5_widget_pane_ParamLimits

0x28ec,	// (0x00031ffd) highlight_cell_ai5_widget_pane

0xe8e9,	// (0x0003dffa) ai5_sk_left_pane

0xe8f3,	// (0x0003e004) ai5_sk_middle_pane

0xe8fd,	// (0x0003e00e) ai5_sk_right_pane

0xe907,	// (0x0003e018) bg_ai5_widget_pane_g1_ParamLimits

0xe907,	// (0x0003e018) bg_ai5_widget_pane_g1

0xe913,	// (0x0003e024) bg_ai5_widget_pane_g2_ParamLimits

0xe913,	// (0x0003e024) bg_ai5_widget_pane_g2

0xe91f,	// (0x0003e030) bg_ai5_widget_pane_g3_ParamLimits

0xe91f,	// (0x0003e030) bg_ai5_widget_pane_g3

0xe92b,	// (0x0003e03c) bg_ai5_widget_pane_g4_ParamLimits

0xe92b,	// (0x0003e03c) bg_ai5_widget_pane_g4

0xe937,	// (0x0003e048) bg_ai5_widget_pane_g5_ParamLimits

0xe937,	// (0x0003e048) bg_ai5_widget_pane_g5

0xe943,	// (0x0003e054) bg_ai5_widget_pane_g6_ParamLimits

0xe943,	// (0x0003e054) bg_ai5_widget_pane_g6

0xe94f,	// (0x0003e060) bg_ai5_widget_pane_g7_ParamLimits

0xe94f,	// (0x0003e060) bg_ai5_widget_pane_g7

0xe95b,	// (0x0003e06c) bg_ai5_widget_pane_g8_ParamLimits

0xe95b,	// (0x0003e06c) bg_ai5_widget_pane_g8

0xe967,	// (0x0003e078) bg_ai5_widget_pane_g9_ParamLimits

0xe967,	// (0x0003e078) bg_ai5_widget_pane_g9

0x0008,

0xfe49,	// (0x0003f55a) bg_ai5_widget_pane_g_ParamLimits

0xfe49,	// (0x0003f55a) bg_ai5_widget_pane_g

0xe99f,	// (0x0003e0b0) cell_shortcut_ai5_widget_pane_ParamLimits

0xe99f,	// (0x0003e0b0) cell_shortcut_ai5_widget_pane

0x9155,	// (0x00038866) bg_cell_shortcut_ai5_widget_pane

0xe9b2,	// (0x0003e0c3) cell_grid_ai5_widget_pane_g1

0x9155,	// (0x00038866) highlight_cell_shortcut_ai5_widget_pane

0x99ba,	// (0x000390cb) ai5_sk_left_pane_g1

0xe9bb,	// (0x0003e0cc) ai5_sk_left_pane_g2

0xe9c3,	// (0x0003e0d4) ai5_sk_left_pane_g3

0xe9cb,	// (0x0003e0dc) ai5_sk_left_pane_g4

0x0003,

0xfe5c,	// (0x0003f56d) ai5_sk_left_pane_g

0xe9d3,	// (0x0003e0e4) ai5_sk_left_pane_t1

0x99c2,	// (0x000390d3) ai5_sk_right_pane_g1

0xe9e1,	// (0x0003e0f2) ai5_sk_right_pane_g2

0xe9e9,	// (0x0003e0fa) ai5_sk_right_pane_g3

0xe9f1,	// (0x0003e102) ai5_sk_right_pane_g4

0x0003,

0xfe65,	// (0x0003f576) ai5_sk_right_pane_g

0xe9f9,	// (0x0003e10a) ai5_sk_right_pane_t1

0x99c2,	// (0x000390d3) ai5_sk_middle_pane_g1

0x99ba,	// (0x000390cb) ai5_sk_middle_pane_g2

0x99da,	// (0x000390eb) ai5_sk_middle_pane_g3

0xe9e9,	// (0x0003e0fa) ai5_sk_middle_pane_g4

0xe9c3,	// (0x0003e0d4) ai5_sk_middle_pane_g5

0xea07,	// (0x0003e118) ai5_sk_middle_pane_g6

0xea0f,	// (0x0003e120) ai5_sk_middle_pane_g7

0x0006,

0xfe6e,	// (0x0003f57f) ai5_sk_middle_pane_g

0x94dc,	// (0x00038bed) aid_touch_area_size_lc0_ParamLimits

0x94dc,	// (0x00038bed) aid_touch_area_size_lc0

0x7c3d,	// (0x0003734e) cell_hwr_candidate_pane_t1_ParamLimits

0x94fa,	// (0x00038c0b) aid_touch_navi_pane

0x97e9,	// (0x00038efa) status_dt_navi_pane_ParamLimits

0x97e9,	// (0x00038efa) status_dt_navi_pane

0x97f6,	// (0x00038f07) status_dt_sta_pane_ParamLimits

0x97f6,	// (0x00038f07) status_dt_sta_pane

0xea17,	// (0x0003e128) dt_sta_controll_pane

0xea24,	// (0x0003e135) dt_sta_indi_pane

0xea35,	// (0x0003e146) dt_sta_title_pane

0x23dd,	// (0x00031aee) bg_dt_sta_indi_pane_ParamLimits

0x23dd,	// (0x00031aee) bg_dt_sta_indi_pane

0xea48,	// (0x0003e159) dt_sta_battery_pane

0xea50,	// (0x0003e161) dt_sta_indi_pane_g1

0xea59,	// (0x0003e16a) dt_sta_indi_pane_g2

0xea62,	// (0x0003e173) dt_sta_indi_pane_g3

0x0002,

0xfe7d,	// (0x0003f58e) dt_sta_indi_pane_g

0xea6b,	// (0x0003e17c) dt_sta_signal_pane

0x28ec,	// (0x00031ffd) bg_dt_sta_title_pane_ParamLimits

0x28ec,	// (0x00031ffd) bg_dt_sta_title_pane

0xea74,	// (0x0003e185) dt_sta_title_pane_g1

0xea7c,	// (0x0003e18d) dt_sta_title_pane_t1_ParamLimits

0xea7c,	// (0x0003e18d) dt_sta_title_pane_t1

0x223a,	// (0x0003194b) bg_dt_sta_control_pane

0xea91,	// (0x0003e1a2) dt_sta_controll_pane_g1

0xea9a,	// (0x0003e1ab) bg_dt_sta_title_pane_g1

0xeaa3,	// (0x0003e1b4) bg_dt_sta_title_pane_g2

0xeaac,	// (0x0003e1bd) bg_dt_sta_title_pane_g3

0x0002,

0xfe84,	// (0x0003f595) bg_dt_sta_title_pane_g

0xbfc7,	// (0x0003b6d8) bg_dt_sta_indi_pane_g1

0xeab5,	// (0x0003e1c6) dt_sta_signal_pane_g1

0xeabd,	// (0x0003e1ce) dt_sta_signal_pane_g2

0x0001,

0xfe8b,	// (0x0003f59c) dt_sta_signal_pane_g

0xeac5,	// (0x0003e1d6) dt_sta_battery_pane_g1

0xeace,	// (0x0003e1df) dt_sta_battery_pane_t1

0xbfc7,	// (0x0003b6d8) bg_dt_sta_control_pane_g1

0x8c3c,	// (0x0003834d) fep_china_uni_eep_pane

0x8c44,	// (0x00038355) fep_china_uni_entry_pane_ParamLimits

0x8c54,	// (0x00038365) popup_fep_china_uni_window_g1_ParamLimits

0x8c64,	// (0x00038375) popup_fep_china_uni_window_g2_ParamLimits

0x8c64,	// (0x00038375) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x0003ee09) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x0003ee09) popup_fep_china_uni_window_g

0xeadd,	// (0x0003e1ee) fep_china_uni_eep_pane_g1

0xeae5,	// (0x0003e1f6) fep_china_uni_eep_pane_t1

0xe502,	// (0x0003dc13) aid_touch_area_size_smil_player

0x964e,	// (0x00038d5f) lc0_clock_pane

0x9845,	// (0x00038f56) status_pane_g5_ParamLimits

0x9845,	// (0x00038f56) status_pane_g5

0x6f8d,	// (0x0003669e) popup_keymap_window

0x980b,	// (0x00038f1c) status_icon_pane

0xe6e1,	// (0x0003ddf2) cell_ai5_widget_pane_g3_ParamLimits

0xe6fb,	// (0x0003de0c) cell_ai5_widget_pane_g4_ParamLimits

0xe70b,	// (0x0003de1c) cell_ai5_widget_pane_g5_ParamLimits

0xe733,	// (0x0003de44) cell_ai5_widget_pane_g8_ParamLimits

0xe733,	// (0x0003de44) cell_ai5_widget_pane_g8

0xe747,	// (0x0003de58) cell_ai5_widget_pane_g9_ParamLimits

0xe747,	// (0x0003de58) cell_ai5_widget_pane_g9

0xe75b,	// (0x0003de6c) cell_ai5_widget_pane_g10_ParamLimits

0xe75b,	// (0x0003de6c) cell_ai5_widget_pane_g10

0xeaf4,	// (0x0003e205) status_icon_pane_g1

0x223a,	// (0x0003194b) bg_popup_sub_pane_cp13

0xeafc,	// (0x0003e20d) popup_keymap_window_t1

0x942d,	// (0x00038b3e) control_pane_g6_ParamLimits

0x942d,	// (0x00038b3e) control_pane_g6

0x943a,	// (0x00038b4b) control_pane_g7_ParamLimits

0x943a,	// (0x00038b4b) control_pane_g7

0x9447,	// (0x00038b58) control_pane_g8_ParamLimits

0x9447,	// (0x00038b58) control_pane_g8

0xea17,	// (0x0003e128) dt_sta_controll_pane_ParamLimits

0xea24,	// (0x0003e135) dt_sta_indi_pane_ParamLimits

0xea35,	// (0x0003e146) dt_sta_title_pane_ParamLimits

0x282e,	// (0x00031f3f) aid_size_touch_scroll_bar_cale

0x5628,	// (0x00034d39) popup_discreet_window_ParamLimits

0x5628,	// (0x00034d39) popup_discreet_window

0x56b6,	// (0x00034dc7) popup_sk_window

0xa018,	// (0x00039729) bg_popup_sub_pane_cp28_ParamLimits

0xa018,	// (0x00039729) bg_popup_sub_pane_cp28

0xeb0a,	// (0x0003e21b) popup_discreet_window_g1_ParamLimits

0xeb0a,	// (0x0003e21b) popup_discreet_window_g1

0xeb2a,	// (0x0003e23b) popup_discreet_window_t1_ParamLimits

0xeb2a,	// (0x0003e23b) popup_discreet_window_t1

0xeb48,	// (0x0003e259) popup_discreet_window_t2_ParamLimits

0xeb48,	// (0x0003e259) popup_discreet_window_t2

0x0002,

0xfe90,	// (0x0003f5a1) popup_discreet_window_t_ParamLimits

0xfe90,	// (0x0003f5a1) popup_discreet_window_t

0x87ba,	// (0x00037ecb) popup_sk_window_g1

0x87c4,	// (0x00037ed5) popup_sk_window_g2

0x0001,

0xfe97,	// (0x0003f5a8) popup_sk_window_g

0x87cc,	// (0x00037edd) popup_sk_window_t1

0x87da,	// (0x00037eeb) popup_sk_window_t1_copy1

0xe6cd,	// (0x0003ddde) cell_ai5_widget_pane_g2_ParamLimits

0xe869,	// (0x0003df7a) cell_ai5_widget_pane_t9_ParamLimits

0xe869,	// (0x0003df7a) cell_ai5_widget_pane_t9

0x223a,	// (0x0003194b) main_fep_fshwr2_pane

0x87e8,	// (0x00037ef9) aid_fshwr2_btn_pane

0x87f8,	// (0x00037f09) aid_fshwr2_syb_pane

0x880c,	// (0x00037f1d) aid_fshwr2_txt_pane

0x881c,	// (0x00037f2d) fshwr2_func_candi_pane

0x883c,	// (0x00037f4d) fshwr2_hwr_syb_pane

0x8852,	// (0x00037f63) fshwr2_icf_pane

0x554b,	// (0x00034c5c) fshwr2_icf_bg_pane

0x8886,	// (0x00037f97) fshwr2_icf_pane_t1_ParamLimits

0x8886,	// (0x00037f97) fshwr2_icf_pane_t1

0x67dc,	// (0x00035eed) fshwr2_func_candi_pane_g1

0xeb9a,	// (0x0003e2ab) fshwr2_func_candi_row_pane_ParamLimits

0xeb9a,	// (0x0003e2ab) fshwr2_func_candi_row_pane

0x889e,	// (0x00037faf) cell_fshwr2_syb_pane_ParamLimits

0x889e,	// (0x00037faf) cell_fshwr2_syb_pane

0x88bf,	// (0x00037fd0) fshwr2_hwr_syb_pane_g1_ParamLimits

0x88bf,	// (0x00037fd0) fshwr2_hwr_syb_pane_g1

0x554b,	// (0x00034c5c) bg_popup_call_pane_cp01

0x88cd,	// (0x00037fde) fshwr2_func_candi_cell_pane_ParamLimits

0x88cd,	// (0x00037fde) fshwr2_func_candi_cell_pane

0xa68f,	// (0x00039da0) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa68f,	// (0x00039da0) fshwr2_func_candi_cell_bg_pane

0x891e,	// (0x0003802f) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x891e,	// (0x0003802f) fshwr2_func_candi_cell_pane_g1

0x8949,	// (0x0003805a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8949,	// (0x0003805a) fshwr2_func_candi_cell_pane_t1

0x554b,	// (0x00034c5c) bg_button_pane_cp08

0x947c,	// (0x00038b8d) cell_fshwr2_syb_bg_pane

0x895c,	// (0x0003806d) cell_fshwr2_syb_bg_pane_g1

0x8970,	// (0x00038081) cell_fshwr2_syb_bg_pane_t1

0x28ec,	// (0x00031ffd) main_tmo_pane

0xab3c,	// (0x0003a24d) uni_indicator_pane_g1_ParamLimits

0xab52,	// (0x0003a263) uni_indicator_pane_g2_ParamLimits

0xab68,	// (0x0003a279) uni_indicator_pane_g3_ParamLimits

0xab7b,	// (0x0003a28c) uni_indicator_pane_g4_ParamLimits

0xab7b,	// (0x0003a28c) uni_indicator_pane_g4

0xab8f,	// (0x0003a2a0) uni_indicator_pane_g5_ParamLimits

0xab8f,	// (0x0003a2a0) uni_indicator_pane_g5

0xab8f,	// (0x0003a2a0) uni_indicator_pane_g6_ParamLimits

0xab8f,	// (0x0003a2a0) uni_indicator_pane_g6

0xf8fc,	// (0x0003f00d) uni_indicator_pane_g_ParamLimits

0xd4e0,	// (0x0003cbf1) popup_tmo_note_window_ParamLimits

0xd4e0,	// (0x0003cbf1) popup_tmo_note_window

0x800c,	// (0x0003771d) fshwr2_bg_pane

0x893a,	// (0x0003804b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x893a,	// (0x0003804b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9c,	// (0x0003f5ad) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9c,	// (0x0003f5ad) fshwr2_func_candi_cell_pane_g

0x7bf6,	// (0x00037307) bg_popup_window_pane_cp01

0x8986,	// (0x00038097) bg_popup_window_pane_g1_cp01

0xebbd,	// (0x0003e2ce) bg_popup_window_pane_cp22_ParamLimits

0xebbd,	// (0x0003e2ce) bg_popup_window_pane_cp22

0xebcb,	// (0x0003e2dc) listscroll_tmo_link_pane_ParamLimits

0xebcb,	// (0x0003e2dc) listscroll_tmo_link_pane

0xec0b,	// (0x0003e31c) popup_tmo_note_window_g1_ParamLimits

0xec0b,	// (0x0003e31c) popup_tmo_note_window_g1

0xec18,	// (0x0003e329) tmo_note_info_pane_ParamLimits

0xec18,	// (0x0003e329) tmo_note_info_pane

0xec32,	// (0x0003e343) list_tmo_note_info_pane_g1_ParamLimits

0xec32,	// (0x0003e343) list_tmo_note_info_pane_g1

0xec49,	// (0x0003e35a) list_tmo_note_info_pane_g2_ParamLimits

0xec49,	// (0x0003e35a) list_tmo_note_info_pane_g2

0x0001,

0xfea1,	// (0x0003f5b2) list_tmo_note_info_pane_g_ParamLimits

0xfea1,	// (0x0003f5b2) list_tmo_note_info_pane_g

0xec65,	// (0x0003e376) list_tmo_note_info_text_pane_ParamLimits

0xec65,	// (0x0003e376) list_tmo_note_info_text_pane

0xecea,	// (0x0003e3fb) list_tmo_link_pane

0xecf7,	// (0x0003e408) scroll_pane_cp20

0xed04,	// (0x0003e415) list_single_tmo_link_pane_ParamLimits

0xed04,	// (0x0003e415) list_single_tmo_link_pane

0xed14,	// (0x0003e425) list_single_tmo_link_pane_t1

0xed22,	// (0x0003e433) list_tmo_note_info_text_pane_t1_ParamLimits

0xed22,	// (0x0003e433) list_tmo_note_info_text_pane_t1

0x6113,	// (0x00035824) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6113,	// (0x00035824) aid_size_touch_scroll_bar_cp01

0x603d,	// (0x0003574e) aid_size_touch_slider_marker

0x569e,	// (0x00034daf) popup_settings_window_ParamLimits

0x569e,	// (0x00034daf) popup_settings_window

0x3fdc,	// (0x000336ed) popup_candi_list_indi_window

0x94fa,	// (0x00038c0b) aid_touch_navi_pane_ParamLimits

0x7f65,	// (0x00037676) rs_clock_indi_pane

0x7f6e,	// (0x0003767f) sctrl_sk_bottom_pane_ParamLimits

0x7f7f,	// (0x00037690) sctrl_sk_top_pane_ParamLimits

0x807c,	// (0x0003778d) popup_fep_tooltip_window

0xe643,	// (0x0003dd54) aid_size_cell_widget_grid_ParamLimits

0xe6b8,	// (0x0003ddc9) cell_ai5_widget_pane_g1_ParamLimits

0xe6b8,	// (0x0003ddc9) cell_ai5_widget_pane_g1

0xe71b,	// (0x0003de2c) cell_ai5_widget_pane_g6_ParamLimits

0xe727,	// (0x0003de38) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe15,	// (0x0003f526) cell_ai5_widget_pane_g_ParamLimits

0xfe15,	// (0x0003f526) cell_ai5_widget_pane_g

0xe898,	// (0x0003dfa9) cell_ai5_widget_pane_t10_ParamLimits

0xe898,	// (0x0003dfa9) cell_ai5_widget_pane_t10

0xe8db,	// (0x0003dfec) grid_ai5_widget_pane_ParamLimits

0xe973,	// (0x0003e084) cell_contacts_ai5_widget_pane_ParamLimits

0xe973,	// (0x0003e084) cell_contacts_ai5_widget_pane

0xeb5d,	// (0x0003e26e) popup_discreet_window_t3_ParamLimits

0xeb5d,	// (0x0003e26e) popup_discreet_window_t3

0x886e,	// (0x00037f7f) popup_fshwr2_char_preview_window_ParamLimits

0x886e,	// (0x00037f7f) popup_fshwr2_char_preview_window

0xec83,	// (0x0003e394) tmo_note_info_pane_t1

0xec98,	// (0x0003e3a9) tmo_note_info_pane_t2

0xecb1,	// (0x0003e3c2) tmo_note_info_pane_t3

0xecc6,	// (0x0003e3d7) tmo_note_info_pane_t4

0xecd8,	// (0x0003e3e9) tmo_note_info_pane_t5

0x0004,

0xfea6,	// (0x0003f5b7) tmo_note_info_pane_t

0xecea,	// (0x0003e3fb) list_tmo_link_pane_ParamLimits

0xecf7,	// (0x0003e408) scroll_pane_cp20_ParamLimits

0x554b,	// (0x00034c5c) bg_popup_fep_char_preview_window_cp01

0xed3b,	// (0x0003e44c) popup_fshwr2_char_preview_window_t1

0xed49,	// (0x0003e45a) popup_candi_list_indi_window_g1

0xed52,	// (0x0003e463) bg_cell_contacts_ai5_widget_pane

0xed5e,	// (0x0003e46f) cell_contacts_ai5_widget_pane_g1

0xed73,	// (0x0003e484) cell_contacts_ai5_widget_pane_g2

0xed7f,	// (0x0003e490) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb1,	// (0x0003f5c2) cell_contacts_ai5_widget_pane_g

0xed8b,	// (0x0003e49c) cell_contacts_ai5_widget_pane_t1

0x28ec,	// (0x00031ffd) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee02,	// (0x0003e513) settings_container_pane

0x9155,	// (0x00038866) listscroll_set_pane_copy1

0xb6f8,	// (0x0003ae09) scroll_pane_cp121_copy1

0xee0e,	// (0x0003e51f) set_content_pane_copy1

0xee16,	// (0x0003e527) aid_height_set_list_copy1_ParamLimits

0xee16,	// (0x0003e527) aid_height_set_list_copy1

0xad8f,	// (0x0003a4a0) aid_size_parent_copy1_ParamLimits

0xad8f,	// (0x0003a4a0) aid_size_parent_copy1

0xee22,	// (0x0003e533) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee22,	// (0x0003e533) button_value_adjust_pane_cp6_copy1

0x947c,	// (0x00038b8d) list_highlight_pane_cp2_copy1_ParamLimits

0x947c,	// (0x00038b8d) list_highlight_pane_cp2_copy1

0xee36,	// (0x0003e547) list_set_pane_copy1_ParamLimits

0xee36,	// (0x0003e547) list_set_pane_copy1

0xed9d,	// (0x0003e4ae) main_pane_set_t1_copy1_ParamLimits

0xed9d,	// (0x0003e4ae) main_pane_set_t1_copy1

0xedd7,	// (0x0003e4e8) main_pane_set_t2_copy1_ParamLimits

0xedd7,	// (0x0003e4e8) main_pane_set_t2_copy1

0xeef7,	// (0x0003e608) main_pane_set_t3_copy1

0xef05,	// (0x0003e616) main_pane_set_t4_copy1

0xedf6,	// (0x0003e507) set_content_pane_g1_copy1_ParamLimits

0xedf6,	// (0x0003e507) set_content_pane_g1_copy1

0xef13,	// (0x0003e624) setting_code_pane_copy1

0xef1b,	// (0x0003e62c) setting_slider_graphic_pane_copy1

0xef1b,	// (0x0003e62c) setting_slider_pane_copy1

0xef23,	// (0x0003e634) setting_text_pane_copy1

0xef23,	// (0x0003e634) setting_volume_pane_copy1

0xef13,	// (0x0003e624) settings_code_pane_cp2_copy1

0xef2b,	// (0x0003e63c) settings_code_pane_cp_copy1_ParamLimits

0xef2b,	// (0x0003e63c) settings_code_pane_cp_copy1

0x898f,	// (0x000380a0) volume_set_pane_copy1

0xef3f,	// (0x0003e650) volume_set_pane_g10_copy1

0xef4b,	// (0x0003e65c) volume_set_pane_g1_copy1

0xef55,	// (0x0003e666) volume_set_pane_g2_copy1

0xef5f,	// (0x0003e670) volume_set_pane_g3_copy1

0xef69,	// (0x0003e67a) volume_set_pane_g4_copy1

0xef73,	// (0x0003e684) volume_set_pane_g5_copy1

0xef7d,	// (0x0003e68e) volume_set_pane_g6_copy1

0xef87,	// (0x0003e698) volume_set_pane_g7_copy1

0xef91,	// (0x0003e6a2) volume_set_pane_g8_copy1

0xef9b,	// (0x0003e6ac) volume_set_pane_g9_copy1

0x22aa,	// (0x000319bb) bg_set_opt_pane_cp_copy1_ParamLimits

0x22aa,	// (0x000319bb) bg_set_opt_pane_cp_copy1

0x899b,	// (0x000380ac) setting_slider_pane_t1_copy1_ParamLimits

0x899b,	// (0x000380ac) setting_slider_pane_t1_copy1

0x89ba,	// (0x000380cb) setting_slider_pane_t2_copy1_ParamLimits

0x89ba,	// (0x000380cb) setting_slider_pane_t2_copy1

0x89d4,	// (0x000380e5) setting_slider_pane_t3_copy1_ParamLimits

0x89d4,	// (0x000380e5) setting_slider_pane_t3_copy1

0x89ec,	// (0x000380fd) slider_set_pane_copy1_ParamLimits

0x89ec,	// (0x000380fd) slider_set_pane_copy1

0x2944,	// (0x00032055) set_opt_bg_pane_g1_copy2

0x294c,	// (0x0003205d) set_opt_bg_pane_g2_copy2

0xefa7,	// (0x0003e6b8) set_opt_bg_pane_g3_copy2

0x295c,	// (0x0003206d) set_opt_bg_pane_g4_copy2

0x2964,	// (0x00032075) set_opt_bg_pane_g5_copy2

0x296c,	// (0x0003207d) set_opt_bg_pane_g6_copy2

0xefb1,	// (0x0003e6c2) set_opt_bg_pane_g7_copy2

0xefbb,	// (0x0003e6cc) set_opt_bg_pane_g8_copy2

0xefc5,	// (0x0003e6d6) set_opt_bg_pane_g9_copy2

0x8a02,	// (0x00038113) aid_size_touch_slider_mark_copy1_ParamLimits

0x8a02,	// (0x00038113) aid_size_touch_slider_mark_copy1

0xefcf,	// (0x0003e6e0) slider_set_pane_g1_copy1

0x8a16,	// (0x00038127) slider_set_pane_g2_copy1

0x777e,	// (0x00036e8f) slider_set_pane_g3_copy1_ParamLimits

0x777e,	// (0x00036e8f) slider_set_pane_g3_copy1

0x7792,	// (0x00036ea3) slider_set_pane_g4_copy1_ParamLimits

0x7792,	// (0x00036ea3) slider_set_pane_g4_copy1

0x77aa,	// (0x00036ebb) slider_set_pane_g5_copy1_ParamLimits

0x77aa,	// (0x00036ebb) slider_set_pane_g5_copy1

0x777e,	// (0x00036e8f) slider_set_pane_g6_copy1_ParamLimits

0x777e,	// (0x00036e8f) slider_set_pane_g6_copy1

0x8a1e,	// (0x0003812f) slider_set_pane_g7_copy1_ParamLimits

0x8a1e,	// (0x0003812f) slider_set_pane_g7_copy1

0x224e,	// (0x0003195f) bg_set_opt_pane_cp2_copy1

0xefd8,	// (0x0003e6e9) setting_slider_graphic_pane_g1_copy1

0xefe1,	// (0x0003e6f2) setting_slider_graphic_pane_t1_copy1

0xeff1,	// (0x0003e702) setting_slider_graphic_pane_t2_copy1

0xf001,	// (0x0003e712) slider_set_pane_cp_copy1

0xf011,	// (0x0003e722) input_focus_pane_cp1_copy1

0xf01a,	// (0x0003e72b) list_set_text_pane_copy1

0xf022,	// (0x0003e733) setting_text_pane_g1_copy1

0x4871,	// (0x00033f82) set_text_pane_t1_copy1

0xf011,	// (0x0003e722) input_focus_pane_cp2_copy1

0xf022,	// (0x0003e733) setting_code_pane_g1_copy1

0xf02b,	// (0x0003e73c) setting_code_pane_t1_copy1

0xb4fd,	// (0x0003ac0e) list_set_graphic_pane_copy1

0x224e,	// (0x0003195f) bg_set_opt_pane_cp4_copy1

0x8e39,	// (0x0003854a) list_set_graphic_pane_g1_copy1_ParamLimits

0x8e39,	// (0x0003854a) list_set_graphic_pane_g1_copy1

0xf039,	// (0x0003e74a) list_set_graphic_pane_g2_copy1

0x8e51,	// (0x00038562) list_set_graphic_pane_t1_copy1_ParamLimits

0x8e51,	// (0x00038562) list_set_graphic_pane_t1_copy1

0xbfc7,	// (0x0003b6d8) rs_clock_indi_pane_g1

0xf041,	// (0x0003e752) rs_clock_indi_pane_t1

0xf04f,	// (0x0003e760) rs_indi_pane

0xf057,	// (0x0003e768) rs_indi_pane_g1

0xf060,	// (0x0003e771) rs_indi_pane_g2

0xf069,	// (0x0003e77a) rs_indi_pane_g3

0x0002,

0xfeb8,	// (0x0003f5c9) rs_indi_pane_g

0x9155,	// (0x00038866) bg_popup_preview_window_pane_cp03

0xf072,	// (0x0003e783) popup_fep_tooltip_window_t1

0xcc8c,	// (0x0003c39d) popup_note2_window_g2_ParamLimits

0xcc8c,	// (0x0003c39d) popup_note2_window_g2

0x0001,

0xfc45,	// (0x0003f356) popup_note2_window_g_ParamLimits

0xfc45,	// (0x0003f356) popup_note2_window_g

0xd194,	// (0x0003c8a5) bg_popup_sub_pane_cp11_ParamLimits

0xd1a1,	// (0x0003c8b2) cell_ai3_links_pane_g1_ParamLimits

0xd1b8,	// (0x0003c8c9) cell_ai3_links_pane_t1

0x4871,	// (0x00033f82) set_text_pane_t1_copy1_ParamLimits

0x9057,	// (0x00038768) cell_graphic_popup_pane_cp2_ParamLimits

0x9057,	// (0x00038768) cell_graphic_popup_pane_cp2

0xf080,	// (0x0003e791) cell_graphic_popup_pane_g1_cp2

0x2641,	// (0x00031d52) cell_graphic_popup_pane_g2_cp2

0xf088,	// (0x0003e799) cell_graphic_popup_pane_g3_cp2

0xf090,	// (0x0003e7a1) cell_graphic_popup_pane_t2_cp2

0x2652,	// (0x00031d63) grid_highlight_pane_cp3_cp2

0x64e2,	// (0x00035bf3) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x28ec,	// (0x00031ffd) main_tmo_pane_ParamLimits

0xd4d4,	// (0x0003cbe5) popup_tmo_big_image_note_window

0xe6a7,	// (0x0003ddb8) cell_ai5_widget_list_pane

0xe6af,	// (0x0003ddc0) cell_ai5_widget_lrg_icon_pane

0xec83,	// (0x0003e394) tmo_note_info_pane_t1_ParamLimits

0xec98,	// (0x0003e3a9) tmo_note_info_pane_t2_ParamLimits

0xecb1,	// (0x0003e3c2) tmo_note_info_pane_t3_ParamLimits

0xecc6,	// (0x0003e3d7) tmo_note_info_pane_t4_ParamLimits

0xecd8,	// (0x0003e3e9) tmo_note_info_pane_t5_ParamLimits

0xfea6,	// (0x0003f5b7) tmo_note_info_pane_t_ParamLimits

0xee02,	// (0x0003e513) settings_container_pane_ParamLimits

0xf009,	// (0x0003e71a) indicator_popup_pane_cp5

0xf009,	// (0x0003e71a) indicator_popup_pane_cp6

0xb4fd,	// (0x0003ac0e) list_set_graphic_pane_copy1_ParamLimits

0x223a,	// (0x0003194b) bg_popup_window_pane_cp23

0xf09e,	// (0x0003e7af) popup_tmo_big_image_note_window_g1

0xf0aa,	// (0x0003e7bb) popup_tmo_big_image_note_window_t1

0xf0ba,	// (0x0003e7cb) popup_tmo_big_image_note_window_t2

0xf0ca,	// (0x0003e7db) popup_tmo_big_image_note_window_t3

0x0002,

0xfebf,	// (0x0003f5d0) popup_tmo_big_image_note_window_t

0xbfc7,	// (0x0003b6d8) cell_ai5_widget_lrg_icon_pane_g1

0xf0da,	// (0x0003e7eb) cell_ai5_widget_lrg_icon_pane_t1

0xf0e8,	// (0x0003e7f9) cell_ai5_widget_list_row_pane_ParamLimits

0xf0e8,	// (0x0003e7f9) cell_ai5_widget_list_row_pane

0xf100,	// (0x0003e811) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf100,	// (0x0003e811) cell_ai5_widget_list_row_pane_g1

0xf10d,	// (0x0003e81e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf10d,	// (0x0003e81e) cell_ai5_widget_list_row_pane_t1

0xf138,	// (0x0003e849) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf138,	// (0x0003e849) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec6,	// (0x0003f5d7) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec6,	// (0x0003f5d7) cell_ai5_widget_list_row_pane_t

0x554b,	// (0x00034c5c) main_fep_vtchi_ss_pane

0xf188,	// (0x0003e899) popup_fep_char_pre_window

0xf190,	// (0x0003e8a1) popup_fep_ituss_window

0xf1bc,	// (0x0003e8cd) popup_fep_vkbss_window

0x947c,	// (0x00038b8d) grid_vkbss_keypad_pane_ParamLimits

0x947c,	// (0x00038b8d) grid_vkbss_keypad_pane

0xf1fe,	// (0x0003e90f) ituss_keypad_pane

0x8a3e,	// (0x0003814f) aid_vkbss_key_offset_ParamLimits

0x8a3e,	// (0x0003814f) aid_vkbss_key_offset

0x8a4a,	// (0x0003815b) cell_vkbss_key_pane_ParamLimits

0x8a4a,	// (0x0003815b) cell_vkbss_key_pane

0xf20a,	// (0x0003e91b) bg_cell_vkbss_key_g1_ParamLimits

0xf20a,	// (0x0003e91b) bg_cell_vkbss_key_g1

0xf216,	// (0x0003e927) cell_vkbss_key_3p_pane_ParamLimits

0xf216,	// (0x0003e927) cell_vkbss_key_3p_pane

0xf24c,	// (0x0003e95d) cell_vkbss_key_g1_ParamLimits

0xf24c,	// (0x0003e95d) cell_vkbss_key_g1

0xf282,	// (0x0003e993) cell_vkbss_key_t1_ParamLimits

0xf282,	// (0x0003e993) cell_vkbss_key_t1

0x8aa8,	// (0x000381b9) cell_ituss_key_pane_ParamLimits

0x8aa8,	// (0x000381b9) cell_ituss_key_pane

0xf2de,	// (0x0003e9ef) bg_cell_ituss_key_g1_ParamLimits

0xf2de,	// (0x0003e9ef) bg_cell_ituss_key_g1

0xf2ea,	// (0x0003e9fb) cell_ituss_key_pane_g1_ParamLimits

0xf2ea,	// (0x0003e9fb) cell_ituss_key_pane_g1

0x8ab9,	// (0x000381ca) cell_ituss_key_pane_g2_ParamLimits

0x8ab9,	// (0x000381ca) cell_ituss_key_pane_g2

0x0005,

0xfecd,	// (0x0003f5de) cell_ituss_key_pane_g_ParamLimits

0xfecd,	// (0x0003f5de) cell_ituss_key_pane_g

0x8b3d,	// (0x0003824e) cell_ituss_key_t1_ParamLimits

0x8b3d,	// (0x0003824e) cell_ituss_key_t1

0x8b77,	// (0x00038288) cell_ituss_key_t2_ParamLimits

0x8b77,	// (0x00038288) cell_ituss_key_t2

0x8ba9,	// (0x000382ba) cell_ituss_key_t3_ParamLimits

0x8ba9,	// (0x000382ba) cell_ituss_key_t3

0x8bda,	// (0x000382eb) cell_ituss_key_t4_ParamLimits

0x8bda,	// (0x000382eb) cell_ituss_key_t4

0x0004,

0xfeda,	// (0x0003f5eb) cell_ituss_key_t_ParamLimits

0xfeda,	// (0x0003f5eb) cell_ituss_key_t

0xf310,	// (0x0003ea21) cell_vkbss_key_3p_pane_g1

0xf318,	// (0x0003ea29) cell_vkbss_key_3p_pane_g2

0xf320,	// (0x0003ea31) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee5,	// (0x0003f5f6) cell_vkbss_key_3p_pane_g

0x9155,	// (0x00038866) bg_popup_fep_char_preview_window_cp02

0xf328,	// (0x0003ea39) popup_fep_char_pre_window_t1

0xe630,	// (0x0003dd41) main_ai5_sk_pane

0xed52,	// (0x0003e463) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed5e,	// (0x0003e46f) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xed73,	// (0x0003e484) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed7f,	// (0x0003e490) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb1,	// (0x0003f5c2) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed8b,	// (0x0003e49c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x28ec,	// (0x00031ffd) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf336,	// (0x0003ea47) main_ai5_sk_pane_g1

0x9e50,	// (0x00039561) popup_query_code_window_g1

0xf1a6,	// (0x0003e8b7) popup_fep_vkb_icf_pane

0xf1d5,	// (0x0003e8e6) popup_fep_vtchi_icf_pane

0xf33f,	// (0x0003ea50) bg_icf_pane

0xf33f,	// (0x0003ea50) list_vkb_icf_pane

0xf34b,	// (0x0003ea5c) bg_icf_pane_cp01

0xf35e,	// (0x0003ea6f) vtchi_icf_list_pane

0xf3be,	// (0x0003eacf) list_vkb_icf_pane_t1_ParamLimits

0xf3be,	// (0x0003eacf) list_vkb_icf_pane_t1

0xf3da,	// (0x0003eaeb) vtchi_icf_list_pane_t1_ParamLimits

0xf3da,	// (0x0003eaeb) vtchi_icf_list_pane_t1

0xf190,	// (0x0003e8a1) popup_fep_ituss_window_ParamLimits

0xf1d5,	// (0x0003e8e6) popup_fep_vtchi_icf_pane_ParamLimits

0xf1fe,	// (0x0003e90f) ituss_keypad_pane_ParamLimits

0x8a34,	// (0x00038145) ituss_sks_pane

0xf33f,	// (0x0003ea50) bg_icf_pane_ParamLimits

0xf160,	// (0x0003e871) icf_edit_indi_pane_ParamLimits

0xf160,	// (0x0003e871) icf_edit_indi_pane

0xf33f,	// (0x0003ea50) list_vkb_icf_pane_ParamLimits

0xf34b,	// (0x0003ea5c) bg_icf_pane_cp01_ParamLimits

0xf17b,	// (0x0003e88c) icf_edit_indi_pane_cp01_ParamLimits

0xf17b,	// (0x0003e88c) icf_edit_indi_pane_cp01

0xf35e,	// (0x0003ea6f) vtchi_query_pane

0xe4d2,	// (0x0003dbe3) icf_edit_indi_pane_g1_ParamLimits

0xe4d2,	// (0x0003dbe3) icf_edit_indi_pane_g1

0xf44a,	// (0x0003eb5b) icf_edit_indi_pane_g2_ParamLimits

0xf44a,	// (0x0003eb5b) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0003f621) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0003f621) icf_edit_indi_pane_g

0xf45e,	// (0x0003eb6f) icf_edit_indi_pane_t1

0xf3f3,	// (0x0003eb04) bg_input_focus_pane_cp042

0x2825,	// (0x00031f36) vtchi_button_pane

0xf3fc,	// (0x0003eb0d) vtchi_query_pane_t1

0xf40a,	// (0x0003eb1b) vtchi_query_pane_t2

0xf418,	// (0x0003eb29) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0003f610) vtchi_query_pane_t

0x554b,	// (0x00034c5c) bg_button_pane_cp13

0xf426,	// (0x0003eb37) vtchi_button_pane_g1

0x8c1d,	// (0x0003832e) ituss_sks_pane_g1

0x8c28,	// (0x00038339) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0003f617) ituss_sks_pane_g

0xf42e,	// (0x0003eb3f) ituss_sks_pane_t1

0xf43c,	// (0x0003eb4d) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0003f61c) ituss_sks_pane_t

0xba9b,	// (0x0003b1ac) indicator_nsta_pane_cp_g1

0xbaa4,	// (0x0003b1b5) indicator_nsta_pane_cp_g2

0xbaac,	// (0x0003b1bd) indicator_nsta_pane_cp_g3

0xbab4,	// (0x0003b1c5) indicator_nsta_pane_cp_g4

0xbaa4,	// (0x0003b1b5) indicator_nsta_pane_cp_g5

0xbaac,	// (0x0003b1bd) indicator_nsta_pane_cp_g6

0x0005,

0xfa83,	// (0x0003f194) indicator_nsta_pane_cp_g

0xe219,	// (0x0003d92a) cell_graphic2_pane_t2_ParamLimits

0xe219,	// (0x0003d92a) cell_graphic2_pane_t2

0x0001,

0xfd9c,	// (0x0003f4ad) cell_graphic2_pane_t_ParamLimits

0xfd9c,	// (0x0003f4ad) cell_graphic2_pane_t

0xe245,	// (0x0003d956) cell_graphic2_control_pane_t1

0x6933,	// (0x00036044) signal_pane_g3_ParamLimits

0x6933,	// (0x00036044) signal_pane_g3

0x6942,	// (0x00036053) signal_pane_g4_ParamLimits

0x6942,	// (0x00036053) signal_pane_g4

0xf14a,	// (0x0003e85b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf14a,	// (0x0003e85b) cell_ai5_widget_list_row_pane_t3

0xf2fe,	// (0x0003ea0f) cell_ituss_key_pane_t1_ParamLimits

0xf2fe,	// (0x0003ea0f) cell_ituss_key_pane_t1

0x9ab7,	// (0x000391c8) form_field_data_wide_pane_vc_t2_ParamLimits

0x9ab7,	// (0x000391c8) form_field_data_wide_pane_vc_t2

0x9acb,	// (0x000391dc) form_field_data_wide_pane_vc_t3_ParamLimits

0x9acb,	// (0x000391dc) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x0003eef5) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x0003eef5) form_field_data_wide_pane_vc_t

0xb738,	// (0x0003ae49) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb738,	// (0x0003ae49) form_field_slider_wide_pane_vc_t3

0xb80e,	// (0x0003af1f) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb80e,	// (0x0003af1f) form_field_popup_wide_pane_vc_t2

0xb825,	// (0x0003af36) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb825,	// (0x0003af36) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa72,	// (0x0003f183) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0003f183) form_field_popup_wide_pane_vc_t

0x87e8,	// (0x00037ef9) aid_fshwr2_btn_pane_ParamLimits

0x87f8,	// (0x00037f09) aid_fshwr2_syb_pane_ParamLimits

0x880c,	// (0x00037f1d) aid_fshwr2_txt_pane_ParamLimits

0x800c,	// (0x0003771d) fshwr2_bg_pane_ParamLimits

0x881c,	// (0x00037f2d) fshwr2_func_candi_pane_ParamLimits

0x883c,	// (0x00037f4d) fshwr2_hwr_syb_pane_ParamLimits

0x8852,	// (0x00037f63) fshwr2_icf_pane_ParamLimits

0x43e5,	// (0x00033af6) list_double_graphic_pane_vc_g4_ParamLimits

0x43e5,	// (0x00033af6) list_double_graphic_pane_vc_g4

0x8ad9,	// (0x000381ea) cell_ituss_key_pane_g3_ParamLimits

0x8ad9,	// (0x000381ea) cell_ituss_key_pane_g3

0x8c0b,	// (0x0003831c) cell_ituss_key_t5_ParamLimits

0x8c0b,	// (0x0003831c) cell_ituss_key_t5

0xf1bc,	// (0x0003e8cd) popup_fep_vkbss_window_ParamLimits

0xe63a,	// (0x0003dd4b) aid_cell_ai5_quarter

0xf45e,	// (0x0003eb6f) icf_edit_indi_pane_t1_ParamLimits

0x2485,	// (0x00031b96) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x2485,	// (0x00031b96) aid_tch_indicator_popup_pane_cp2

0x2498,	// (0x00031ba9) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x2498,	// (0x00031ba9) aid_tch_query_popup_data_pane_cp2

0x9df8,	// (0x00039509) aid_tch_query_popup_pane_ParamLimits

0x9df8,	// (0x00039509) aid_tch_query_popup_pane

0x9df8,	// (0x00039509) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9df8,	// (0x00039509) aid_tch_query_popup_data_pane_cp1

0x947c,	// (0x00038b8d) cell_fshwr2_syb_bg_pane_ParamLimits

0x895c,	// (0x0003806d) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x8970,	// (0x00038081) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf1a6,	// (0x0003e8b7) popup_fep_vkb_icf_pane_ParamLimits

0x862e,	// (0x00037d3f) bg_popup_fep_char_preview_window_g10

0xe76f,	// (0x0003de80) cell_ai5_widget_pane_g11_ParamLimits

0xe76f,	// (0x0003de80) cell_ai5_widget_pane_g11

0xe77b,	// (0x0003de8c) cell_ai5_widget_pane_g12_ParamLimits

0xe77b,	// (0x0003de8c) cell_ai5_widget_pane_g12

0xe787,	// (0x0003de98) cell_ai5_widget_pane_g13_ParamLimits

0xe787,	// (0x0003de98) cell_ai5_widget_pane_g13

0xe8b7,	// (0x0003dfc8) cell_ai5_widget_pane_t11_ParamLimits

0xe8b7,	// (0x0003dfc8) cell_ai5_widget_pane_t11

0xe8c9,	// (0x0003dfda) cell_ai5_widget_pane_t12_ParamLimits

0xe8c9,	// (0x0003dfda) cell_ai5_widget_pane_t12

0x8ae5,	// (0x000381f6) cell_ituss_key_pane_g4_ParamLimits

0x8ae5,	// (0x000381f6) cell_ituss_key_pane_g4

0x8b01,	// (0x00038212) cell_ituss_key_pane_g5_ParamLimits

0x8b01,	// (0x00038212) cell_ituss_key_pane_g5

0x8b1d,	// (0x0003822e) cell_ituss_key_pane_g6_ParamLimits

0x8b1d,	// (0x0003822e) cell_ituss_key_pane_g6

0x99b2,	// (0x000390c3) bg_icf_pane_g1

0xf366,	// (0x0003ea77) bg_icf_pane_g2

0xf372,	// (0x0003ea83) bg_icf_pane_g3

0xf37c,	// (0x0003ea8d) bg_icf_pane_g4

0xf388,	// (0x0003ea99) bg_icf_pane_g5

0xf392,	// (0x0003eaa3) bg_icf_pane_g6

0xf39e,	// (0x0003eaaf) bg_icf_pane_g7

0xf3a8,	// (0x0003eab9) bg_icf_pane_g8

0xf3b4,	// (0x0003eac5) bg_icf_pane_g9

0x0008,

0xfeec,	// (0x0003f5fd) bg_icf_pane_g

0xf1eb,	// (0x0003e8fc) popup_hyb_candi_window_ParamLimits

0xf1eb,	// (0x0003e8fc) popup_hyb_candi_window

0x9a26,	// (0x00039137) bg_popup_sub_pane_cp01_ParamLimits

0x9a26,	// (0x00039137) bg_popup_sub_pane_cp01

0xf477,	// (0x0003eb88) entry_hyb_candi_pane_ParamLimits

0xf477,	// (0x0003eb88) entry_hyb_candi_pane

0xf486,	// (0x0003eb97) grid_hyb_candi_pane_ParamLimits

0xf486,	// (0x0003eb97) grid_hyb_candi_pane

0xf49b,	// (0x0003ebac) grid_hyb_phrase_pane_ParamLimits

0xf49b,	// (0x0003ebac) grid_hyb_phrase_pane

0xf4aa,	// (0x0003ebbb) cell_hyb_candi_pane_ParamLimits

0xf4aa,	// (0x0003ebbb) cell_hyb_candi_pane

0x282e,	// (0x00031f3f) cell_hyb_candi_scroll_pane

0x67dc,	// (0x00035eed) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0003ebd7) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0003ebe5) cell_hyb_phrase_pane

0x67dc,	// (0x00035eed) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0003ebee) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0003ebfc) entry_hyb_candi_pane_t1

0x9155,	// (0x00038866) input_focus_pane_cp06

0xf4f9,	// (0x0003ec0a) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0003ec12) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0003ec1a) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0003ec22) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0003ec2a) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0003ec32) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small

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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x000246c2 };

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
0xa54a,	// (0x0002ec0c) Screen

0xa556,	// (0x0002ec18) application_window_ParamLimits

0xa556,	// (0x0002ec18) application_window

0xce51,	// (0x00031513) screen_g1

0xa58e,	// (0x0002ec50) area_bottom_pane_ParamLimits

0xa58e,	// (0x0002ec50) area_bottom_pane

0xf311,	// (0x000339d3) area_top_pane_ParamLimits

0xf311,	// (0x000339d3) area_top_pane

0xf3a5,	// (0x00033a67) main_pane_ParamLimits

0xf3a5,	// (0x00033a67) main_pane

0xce5b,	// (0x0003151d) misc_graphics

0xb8f9,	// (0x0002ffbb) battery_pane_ParamLimits

0xb8f9,	// (0x0002ffbb) battery_pane

0x401a,	// (0x000286dc) bg_status_flat_pane_g8

0x4022,	// (0x000286e4) bg_status_flat_pane_g9

0x341a,	// (0x00027adc) context_pane_ParamLimits

0x341a,	// (0x00027adc) context_pane

0xba70,	// (0x00030132) navi_pane_ParamLimits

0xba70,	// (0x00030132) navi_pane

0xbafa,	// (0x000301bc) signal_pane_ParamLimits

0xbafa,	// (0x000301bc) signal_pane

0x0008,

0xf84f,	// (0x00033f11) bg_status_flat_pane_g

0xbb8a,	// (0x0003024c) status_pane_g1_ParamLimits

0xbb8a,	// (0x0003024c) status_pane_g1

0xbba0,	// (0x00030262) status_pane_g2_ParamLimits

0xbba0,	// (0x00030262) status_pane_g2

0x3653,	// (0x00027d15) status_pane_g3_ParamLimits

0x3653,	// (0x00027d15) status_pane_g3

0x0004,

0xf77b,	// (0x00033e3d) status_pane_g_ParamLimits

0xf77b,	// (0x00033e3d) status_pane_g

0xbbac,	// (0x0003026e) title_pane_ParamLimits

0xbbac,	// (0x0003026e) title_pane

0xbc13,	// (0x000302d5) uni_indicator_pane_ParamLimits

0xbc13,	// (0x000302d5) uni_indicator_pane

0x3284,	// (0x00027946) bg_list_pane_ParamLimits

0x3284,	// (0x00027946) bg_list_pane

0xb133,	// (0x0002f7f5) find_pane

0x384e,	// (0x00027f10) listscroll_app_pane_ParamLimits

0x384e,	// (0x00027f10) listscroll_app_pane

0x32b0,	// (0x00027972) listscroll_form_pane

0xb13b,	// (0x0002f7fd) listscroll_gen_pane_ParamLimits

0xb13b,	// (0x0002f7fd) listscroll_gen_pane

0x1140,	// (0x00025802) listscroll_set_pane

0x4bb7,	// (0x00029279) main_idle_act_pane

0x2f7d,	// (0x0002763f) main_idle_trad_pane

0x2f7d,	// (0x0002763f) main_list_empty_pane

0x32a4,	// (0x00027966) main_midp_pane

0x32ca,	// (0x0002798c) main_pane_g1_ParamLimits

0x32ca,	// (0x0002798c) main_pane_g1

0xb14f,	// (0x0002f811) popup_ai_message_window_ParamLimits

0xb14f,	// (0x0002f811) popup_ai_message_window

0xb1ef,	// (0x0002f8b1) popup_fep_china_uni_window_ParamLimits

0xb1ef,	// (0x0002f8b1) popup_fep_china_uni_window

0x125c,	// (0x0002591e) popup_fep_japan_candidate_window_ParamLimits

0x125c,	// (0x0002591e) popup_fep_japan_candidate_window

0x1286,	// (0x00025948) popup_fep_japan_predictive_window_ParamLimits

0x1286,	// (0x00025948) popup_fep_japan_predictive_window

0xb24f,	// (0x0002f911) popup_find_window

0xb26c,	// (0x0002f92e) popup_grid_graphic_window_ParamLimits

0xb26c,	// (0x0002f92e) popup_grid_graphic_window

0x12f9,	// (0x000259bb) popup_large_graphic_colour_window

0xb316,	// (0x0002f9d8) popup_menu_window_ParamLimits

0xb316,	// (0x0002f9d8) popup_menu_window

0xb506,	// (0x0002fbc8) popup_note_image_window

0xb4c6,	// (0x0002fb88) popup_note_wait_window_ParamLimits

0xb4c6,	// (0x0002fb88) popup_note_wait_window

0xb51e,	// (0x0002fbe0) popup_note_window_ParamLimits

0xb51e,	// (0x0002fbe0) popup_note_window

0xb5cc,	// (0x0002fc8e) popup_query_code_window_ParamLimits

0xb5cc,	// (0x0002fc8e) popup_query_code_window

0x1565,	// (0x00025c27) popup_query_data_code_window_ParamLimits

0x1565,	// (0x00025c27) popup_query_data_code_window

0xb60c,	// (0x0002fcce) popup_query_data_window_ParamLimits

0xb60c,	// (0x0002fcce) popup_query_data_window

0xb6a0,	// (0x0002fd62) popup_query_sat_info_window_ParamLimits

0xb6a0,	// (0x0002fd62) popup_query_sat_info_window

0xb749,	// (0x0002fe0b) popup_snote_single_graphic_window_ParamLimits

0xb749,	// (0x0002fe0b) popup_snote_single_graphic_window

0xb749,	// (0x0002fe0b) popup_snote_single_text_window_ParamLimits

0xb749,	// (0x0002fe0b) popup_snote_single_text_window

0x1600,	// (0x00025cc2) popup_sub_window_general

0x1746,	// (0x00025e08) popup_window_general_ParamLimits

0x1746,	// (0x00025e08) popup_window_general

0x32d8,	// (0x0002799a) power_save_pane

0xaf93,	// (0x0002f655) control_pane_g1_ParamLimits

0xaf93,	// (0x0002f655) control_pane_g1

0xafbc,	// (0x0002f67e) control_pane_g2_ParamLimits

0xafbc,	// (0x0002f67e) control_pane_g2

0x3247,	// (0x00027909) control_pane_g3_ParamLimits

0x3247,	// (0x00027909) control_pane_g3

0x0007,

0xf763,	// (0x00033e25) control_pane_g_ParamLimits

0xf763,	// (0x00033e25) control_pane_g

0xb022,	// (0x0002f6e4) control_pane_t1_ParamLimits

0xb022,	// (0x0002f6e4) control_pane_t1

0xb088,	// (0x0002f74a) control_pane_t2_ParamLimits

0xb088,	// (0x0002f74a) control_pane_t2

0x0002,

0xf774,	// (0x00033e36) control_pane_t_ParamLimits

0xf774,	// (0x00033e36) control_pane_t

0xaeec,	// (0x0002f5ae) navi_navi_volume_pane_cp1

0xaef4,	// (0x0002f5b6) status_small_icon_pane

0x317c,	// (0x0002783e) status_small_pane_g1_ParamLimits

0x317c,	// (0x0002783e) status_small_pane_g1

0xaefc,	// (0x0002f5be) status_small_pane_g2_ParamLimits

0xaefc,	// (0x0002f5be) status_small_pane_g2

0xaf08,	// (0x0002f5ca) status_small_pane_g3_ParamLimits

0xaf08,	// (0x0002f5ca) status_small_pane_g3

0xaf14,	// (0x0002f5d6) status_small_pane_g4_ParamLimits

0xaf14,	// (0x0002f5d6) status_small_pane_g4

0xaf20,	// (0x0002f5e2) status_small_pane_g5_ParamLimits

0xaf20,	// (0x0002f5e2) status_small_pane_g5

0xaf2e,	// (0x0002f5f0) status_small_pane_g6_ParamLimits

0xaf2e,	// (0x0002f5f0) status_small_pane_g6

0x0007,

0xf752,	// (0x00033e14) status_small_pane_g_ParamLimits

0xf752,	// (0x00033e14) status_small_pane_g

0xaf5d,	// (0x0002f61f) status_small_pane_t1

0xaf7f,	// (0x0002f641) status_small_wait_pane_ParamLimits

0xaf7f,	// (0x0002f641) status_small_wait_pane

0xad37,	// (0x0002f3f9) aid_levels_signal_ParamLimits

0xad37,	// (0x0002f3f9) aid_levels_signal

0xad4f,	// (0x0002f411) signal_pane_g1_ParamLimits

0xad4f,	// (0x0002f411) signal_pane_g1

0xad6a,	// (0x0002f42c) signal_pane_g2_ParamLimits

0xad6a,	// (0x0002f42c) signal_pane_g2

0x0003,

0xf6e3,	// (0x00033da5) signal_pane_g_ParamLimits

0xf6e3,	// (0x00033da5) signal_pane_g

0x0c0c,	// (0x000252ce) context_pane_g1

0xa77a,	// (0x0002ee3c) title_pane_g1

0xa7bd,	// (0x0002ee7f) title_pane_t1

0xce71,	// (0x00031533) title_pane_t2

0xce97,	// (0x00031559) title_pane_t3

0x0002,

0xf532,	// (0x00033bf4) title_pane_t

0xbc3b,	// (0x000302fd) aid_levels_battery_ParamLimits

0xbc3b,	// (0x000302fd) aid_levels_battery

0xbc57,	// (0x00030319) battery_pane_g1_ParamLimits

0xbc57,	// (0x00030319) battery_pane_g1

0xbc74,	// (0x00030336) battery_pane_g2_ParamLimits

0xbc74,	// (0x00030336) battery_pane_g2

0x0001,

0xf786,	// (0x00033e48) battery_pane_g_ParamLimits

0xf786,	// (0x00033e48) battery_pane_g

0xc04e,	// (0x00030710) uni_indicator_pane_g1

0xc064,	// (0x00030726) uni_indicator_pane_g2

0xc07a,	// (0x0003073c) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x00033fb9) uni_indicator_pane_g

0x2deb,	// (0x000274ad) navi_icon_pane_ParamLimits

0x2deb,	// (0x000274ad) navi_icon_pane

0x2d27,	// (0x000273e9) navi_midp_pane

0x2e07,	// (0x000274c9) navi_navi_pane

0x2e11,	// (0x000274d3) navi_text_pane_ParamLimits

0x2e11,	// (0x000274d3) navi_text_pane

0xce51,	// (0x00031513) status_small_wait_pane_g1

0xd1b8,	// (0x0003187a) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x00033fb4) status_small_wait_pane_g

0xbfed,	// (0x000306af) navi_navi_icon_text_pane

0xbff5,	// (0x000306b7) navi_navi_pane_g1_ParamLimits

0xbff5,	// (0x000306b7) navi_navi_pane_g1

0xc007,	// (0x000306c9) navi_navi_pane_g2_ParamLimits

0xc007,	// (0x000306c9) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x00033f82) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x00033f82) navi_navi_pane_g

0x46a3,	// (0x00028d65) navi_navi_tabs_pane

0xc019,	// (0x000306db) navi_navi_text_pane

0xbfed,	// (0x000306af) navi_navi_volume_pane

0xbfdb,	// (0x0003069d) navi_text_pane_t1

0xbfcf,	// (0x00030691) navi_icon_pane_g1

0x459a,	// (0x00028c5c) navi_navi_text_pane_t1

0xbfbe,	// (0x00030680) navi_navi_volume_pane_g1

0xbfc6,	// (0x00030688) volume_small_pane

0xbf1a,	// (0x000305dc) navi_navi_icon_text_pane_g1

0xbf22,	// (0x000305e4) navi_navi_icon_text_pane_t1

0x2e07,	// (0x000274c9) navi_tabs_2_long_pane

0x2e07,	// (0x000274c9) navi_tabs_2_pane

0x2e07,	// (0x000274c9) navi_tabs_3_long_pane

0x2e07,	// (0x000274c9) navi_tabs_3_pane

0x2e07,	// (0x000274c9) navi_tabs_4_pane

0xbefa,	// (0x000305bc) tabs_2_active_pane_ParamLimits

0xbefa,	// (0x000305bc) tabs_2_active_pane

0xbf0a,	// (0x000305cc) tabs_2_passive_pane_ParamLimits

0xbf0a,	// (0x000305cc) tabs_2_passive_pane

0xbec8,	// (0x0003058a) tabs_3_active_pane_ParamLimits

0xbec8,	// (0x0003058a) tabs_3_active_pane

0xbed8,	// (0x0003059a) tabs_3_passive_pane_ParamLimits

0xbed8,	// (0x0003059a) tabs_3_passive_pane

0xbee9,	// (0x000305ab) tabs_3_passive_pane_cp_ParamLimits

0xbee9,	// (0x000305ab) tabs_3_passive_pane_cp

0xbe84,	// (0x00030546) tabs_4_active_pane_ParamLimits

0xbe84,	// (0x00030546) tabs_4_active_pane

0xbe95,	// (0x00030557) tabs_4_passive_pane_ParamLimits

0xbe95,	// (0x00030557) tabs_4_passive_pane

0xbea6,	// (0x00030568) tabs_4_passive_pane_cp_ParamLimits

0xbea6,	// (0x00030568) tabs_4_passive_pane_cp

0xbeb7,	// (0x00030579) tabs_4_passive_pane_cp2_ParamLimits

0xbeb7,	// (0x00030579) tabs_4_passive_pane_cp2

0xbe60,	// (0x00030522) tabs_2_long_active_pane_ParamLimits

0xbe60,	// (0x00030522) tabs_2_long_active_pane

0xbe72,	// (0x00030534) tabs_2_long_passive_pane_ParamLimits

0xbe72,	// (0x00030534) tabs_2_long_passive_pane

0xbe15,	// (0x000304d7) tabs_3_long_active_pane_ParamLimits

0xbe15,	// (0x000304d7) tabs_3_long_active_pane

0xbe2e,	// (0x000304f0) tabs_3_long_passive_pane_ParamLimits

0xbe2e,	// (0x000304f0) tabs_3_long_passive_pane

0xbe47,	// (0x00030509) tabs_3_long_passive_pane_cp_ParamLimits

0xbe47,	// (0x00030509) tabs_3_long_passive_pane_cp

0x1894,	// (0x00025f56) volume_small_pane_g1

0xbdc4,	// (0x00030486) volume_small_pane_g2

0xbdcd,	// (0x0003048f) volume_small_pane_g3

0xbdd6,	// (0x00030498) volume_small_pane_g4

0xbddf,	// (0x000304a1) volume_small_pane_g5

0xbde8,	// (0x000304aa) volume_small_pane_g6

0xbdf1,	// (0x000304b3) volume_small_pane_g7

0xbdfa,	// (0x000304bc) volume_small_pane_g8

0xbe03,	// (0x000304c5) volume_small_pane_g9

0xbe0c,	// (0x000304ce) volume_small_pane_g10

0x0009,

0xf88c,	// (0x00033f4e) volume_small_pane_g

0xcea9,	// (0x0003156b) bg_active_tab_pane_cp2_ParamLimits

0xcea9,	// (0x0003156b) bg_active_tab_pane_cp2

0xa849,	// (0x0002ef0b) tabs_3_active_pane_g1

0xa851,	// (0x0002ef13) tabs_3_active_pane_t1

0xcea9,	// (0x0003156b) bg_passive_tab_pane_cp2_ParamLimits

0xcea9,	// (0x0003156b) bg_passive_tab_pane_cp2

0xa849,	// (0x0002ef0b) tabs_3_passive_pane_g1

0xa851,	// (0x0002ef13) tabs_3_passive_pane_t1

0xcea9,	// (0x0003156b) bg_active_tab_pane_cp3_ParamLimits

0xcea9,	// (0x0003156b) bg_active_tab_pane_cp3

0xa863,	// (0x0002ef25) tabs_4_active_pane_g1

0xa86b,	// (0x0002ef2d) tabs_4_active_pane_t1

0xcea9,	// (0x0003156b) bg_passive_tab_pane_cp3_ParamLimits

0xcea9,	// (0x0003156b) bg_passive_tab_pane_cp3

0xa863,	// (0x0002ef25) tabs_4_1_passive_pane_g1

0xa86b,	// (0x0002ef2d) tabs_4_1_passive_pane_t1

0x32a4,	// (0x00027966) list_highlight_pane_cp2

0xc10d,	// (0x000307cf) list_set_pane_ParamLimits

0xc10d,	// (0x000307cf) list_set_pane

0xc1cf,	// (0x00030891) main_pane_set_t1_ParamLimits

0xc1cf,	// (0x00030891) main_pane_set_t1

0xc1ef,	// (0x000308b1) main_pane_set_t2_ParamLimits

0xc1ef,	// (0x000308b1) main_pane_set_t2

0xc203,	// (0x000308c5) main_pane_set_t3_ParamLimits

0xc203,	// (0x000308c5) main_pane_set_t3

0xc217,	// (0x000308d9) main_pane_set_t4_ParamLimits

0xc217,	// (0x000308d9) main_pane_set_t4

0x0003,

0xf95c,	// (0x0003401e) main_pane_set_t_ParamLimits

0xf95c,	// (0x0003401e) main_pane_set_t

0xc22b,	// (0x000308ed) setting_code_pane

0x4d05,	// (0x000293c7) setting_slider_graphic_pane

0x4d05,	// (0x000293c7) setting_slider_pane

0x4d05,	// (0x000293c7) setting_text_pane

0x4d05,	// (0x000293c7) setting_volume_pane

0x0055,	// (0x00024717) volume_set_pane

0xceb7,	// (0x00031579) bg_set_opt_pane_cp

0x005f,	// (0x00024721) setting_slider_pane_t1

0x0078,	// (0x0002473a) setting_slider_pane_t2

0x0092,	// (0x00024754) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00033bfb) setting_slider_pane_t

0x00aa,	// (0x0002476c) slider_set_pane

0xce5b,	// (0x0003151d) bg_set_opt_pane_cp2

0xcec5,	// (0x00031587) setting_slider_graphic_pane_g1

0x00c0,	// (0x00024782) setting_slider_graphic_pane_t1

0x00d0,	// (0x00024792) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00033c02) setting_slider_graphic_pane_t

0x00e0,	// (0x000247a2) slider_set_pane_cp

0xce5b,	// (0x0003151d) input_focus_pane_cp1

0x4b9e,	// (0x00029260) list_set_text_pane

0xce51,	// (0x00031513) setting_text_pane_g1

0xce5b,	// (0x0003151d) input_focus_pane_cp2

0xce51,	// (0x00031513) setting_code_pane_g1

0xcece,	// (0x00031590) setting_code_pane_t1

0xeabd,	// (0x0003317f) set_text_pane_t1_ParamLimits

0xeabd,	// (0x0003317f) set_text_pane_t1

0xd551,	// (0x00031c13) set_opt_bg_pane_g1

0xd559,	// (0x00031c1b) set_opt_bg_pane_g2

0x4b76,	// (0x00029238) set_opt_bg_pane_g3

0xd569,	// (0x00031c2b) set_opt_bg_pane_g4

0xd571,	// (0x00031c33) set_opt_bg_pane_g5

0xd579,	// (0x00031c3b) set_opt_bg_pane_g6

0x4b80,	// (0x00029242) set_opt_bg_pane_g7

0x4b8a,	// (0x0002924c) set_opt_bg_pane_g8

0x4b94,	// (0x00029256) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x0003400b) set_opt_bg_pane_g

0x4b69,	// (0x0002922b) slider_set_pane_g1

0x1a78,	// (0x0002613a) slider_set_pane_g2

0x0006,

0xf93a,	// (0x00033ffc) slider_set_pane_g

0x1a00,	// (0x000260c2) volume_set_pane_g1

0x1a0a,	// (0x000260cc) volume_set_pane_g2

0x1a14,	// (0x000260d6) volume_set_pane_g3

0x1a1e,	// (0x000260e0) volume_set_pane_g4

0x1a28,	// (0x000260ea) volume_set_pane_g5

0x1a32,	// (0x000260f4) volume_set_pane_g6

0x1a3c,	// (0x000260fe) volume_set_pane_g7

0x1a46,	// (0x00026108) volume_set_pane_g8

0x1a50,	// (0x00026112) volume_set_pane_g9

0x1a5a,	// (0x0002611c) volume_set_pane_g10

0x0009,

0xf912,	// (0x00033fd4) volume_set_pane_g

0xa87d,	// (0x0002ef3f) indicator_pane_ParamLimits

0xa87d,	// (0x0002ef3f) indicator_pane

0xa8a9,	// (0x0002ef6b) main_idle_pane_g2_ParamLimits

0xa8a9,	// (0x0002ef6b) main_idle_pane_g2

0xa8e1,	// (0x0002efa3) main_pane_idle_g1_ParamLimits

0xa8e1,	// (0x0002efa3) main_pane_idle_g1

0xcedc,	// (0x0003159e) popup_clock_digital_analogue_window_ParamLimits

0xcedc,	// (0x0003159e) popup_clock_digital_analogue_window

0xa90b,	// (0x0002efcd) soft_indicator_pane_ParamLimits

0xa90b,	// (0x0002efcd) soft_indicator_pane

0xa927,	// (0x0002efe9) wallpaper_pane_ParamLimits

0xa927,	// (0x0002efe9) wallpaper_pane

0xce51,	// (0x00031513) wallpaper_pane_g1

0xa939,	// (0x0002effb) indicator_pane_g1_ParamLimits

0xa939,	// (0x0002effb) indicator_pane_g1

0x4fa9,	// (0x0002966b) navi_navi_icon_text_pane_srt_g1

0xcf0a,	// (0x000315cc) soft_indicator_pane_t1

0xcf24,	// (0x000315e6) aid_ps_area_pane

0xa952,	// (0x0002f014) aid_ps_clock_pane

0xcf35,	// (0x000315f7) aid_ps_indicator_pane

0xcf41,	// (0x00031603) indicator_ps_pane_ParamLimits

0xcf41,	// (0x00031603) indicator_ps_pane

0xcf50,	// (0x00031612) power_save_pane_g1_ParamLimits

0xcf50,	// (0x00031612) power_save_pane_g1

0xcf5c,	// (0x0003161e) power_save_pane_g2_ParamLimits

0xcf5c,	// (0x0003161e) power_save_pane_g2

0xf2f1,	// (0x000339b3) aid_navinavi_width_pane

0xcf24,	// (0x000315e6) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00033c07) power_save_pane_g_ParamLimits

0xf545,	// (0x00033c07) power_save_pane_g

0xcf6a,	// (0x0003162c) power_save_pane_t1_ParamLimits

0xcf6a,	// (0x0003162c) power_save_pane_t1

0xa952,	// (0x0002f014) aid_ps_clock_pane_ParamLimits

0xcf35,	// (0x000315f7) aid_ps_indicator_pane_ParamLimits

0xcf7c,	// (0x0003163e) power_save_pane_t4_ParamLimits

0xcf7c,	// (0x0003163e) power_save_pane_t4

0x0001,

0xf54a,	// (0x00033c0c) power_save_pane_t_ParamLimits

0xf54a,	// (0x00033c0c) power_save_pane_t

0xcfa6,	// (0x00031668) power_save_t3_ParamLimits

0xcfa6,	// (0x00031668) power_save_t3

0xcf91,	// (0x00031653) power_save_t2_ParamLimits

0xcf91,	// (0x00031653) power_save_t2

0xcfbb,	// (0x0003167d) indicator_ps_pane_g1

0xa960,	// (0x0002f022) ai_gene_pane_ParamLimits

0xa960,	// (0x0002f022) ai_gene_pane

0xa977,	// (0x0002f039) ai_links_pane_ParamLimits

0xa977,	// (0x0002f039) ai_links_pane

0xa98f,	// (0x0002f051) indicator_pane_cp1_ParamLimits

0xa98f,	// (0x0002f051) indicator_pane_cp1

0xa99e,	// (0x0002f060) main_pane_idle_g1_cp_ParamLimits

0xa99e,	// (0x0002f060) main_pane_idle_g1_cp

0xcfc4,	// (0x00031686) popup_ai_links_title_window

0xa9b6,	// (0x0002f078) soft_indicator_pane_cp1_ParamLimits

0xa9b6,	// (0x0002f078) soft_indicator_pane_cp1

0x4952,	// (0x00029014) ai_links_pane_g1

0x495b,	// (0x0002901d) grid_ai_links_pane

0xc045,	// (0x00030707) ai_gene_pane_1

0x4940,	// (0x00029002) ai_gene_pane_2

0x4949,	// (0x0002900b) list_highlight_pane_cp4

0xc021,	// (0x000306e3) cell_ai_link_pane_ParamLimits

0xc021,	// (0x000306e3) cell_ai_link_pane

0x490f,	// (0x00028fd1) cell_ai_link_pane_g1

0xd1b8,	// (0x0003187a) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x00033faf) cell_ai_link_pane_g

0xce5b,	// (0x0003151d) grid_highlight_cp2

0xce5b,	// (0x0003151d) bg_popup_sub_pane_cp1

0xcfdb,	// (0x0003169d) popup_ai_links_title_window_t1

0x485b,	// (0x00028f1d) ai_gene_pane_1_g1_ParamLimits

0x485b,	// (0x00028f1d) ai_gene_pane_1_g1

0x4867,	// (0x00028f29) ai_gene_pane_1_g2_ParamLimits

0x4867,	// (0x00028f29) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x00033fa5) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x00033fa5) ai_gene_pane_1_g

0x4874,	// (0x00028f36) ai_gene_pane_1_t1_ParamLimits

0x4874,	// (0x00028f36) ai_gene_pane_1_t1

0x48a8,	// (0x00028f6a) grid_ai_soft_ind_pane

0x4846,	// (0x00028f08) ai_gene_pane_2_t1_ParamLimits

0x4846,	// (0x00028f08) ai_gene_pane_2_t1

0xa9ca,	// (0x0002f08c) main_pane_empty_t1_ParamLimits

0xa9ca,	// (0x0002f08c) main_pane_empty_t1

0xa9e2,	// (0x0002f0a4) main_pane_empty_t2_ParamLimits

0xa9e2,	// (0x0002f0a4) main_pane_empty_t2

0xa9f7,	// (0x0002f0b9) main_pane_empty_t3_ParamLimits

0xa9f7,	// (0x0002f0b9) main_pane_empty_t3

0xaa09,	// (0x0002f0cb) main_pane_empty_t4_ParamLimits

0xaa09,	// (0x0002f0cb) main_pane_empty_t4

0xaa1b,	// (0x0002f0dd) main_pane_empty_t5_ParamLimits

0xaa1b,	// (0x0002f0dd) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00033c11) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00033c11) main_pane_empty_t

0x0397,	// (0x00024a59) bg_popup_window_pane_ParamLimits

0x0397,	// (0x00024a59) bg_popup_window_pane

0x45a8,	// (0x00028c6a) find_popup_pane_cp2_ParamLimits

0x45a8,	// (0x00028c6a) find_popup_pane_cp2

0x45b4,	// (0x00028c76) heading_pane_ParamLimits

0x45b4,	// (0x00028c76) heading_pane

0xce5b,	// (0x0003151d) bg_popup_sub_pane

0xbf3f,	// (0x00030601) bg_popup_window_pane_g1_ParamLimits

0xbf3f,	// (0x00030601) bg_popup_window_pane_g1

0xbf4e,	// (0x00030610) bg_popup_window_pane_g2_ParamLimits

0xbf4e,	// (0x00030610) bg_popup_window_pane_g2

0xbf5a,	// (0x0003061c) bg_popup_window_pane_g3_ParamLimits

0xbf5a,	// (0x0003061c) bg_popup_window_pane_g3

0xbf66,	// (0x00030628) bg_popup_window_pane_g4_ParamLimits

0xbf66,	// (0x00030628) bg_popup_window_pane_g4

0xbf75,	// (0x00030637) bg_popup_window_pane_g5_ParamLimits

0xbf75,	// (0x00030637) bg_popup_window_pane_g5

0xbf85,	// (0x00030647) bg_popup_window_pane_g6_ParamLimits

0xbf85,	// (0x00030647) bg_popup_window_pane_g6

0xbf91,	// (0x00030653) bg_popup_window_pane_g7_ParamLimits

0xbf91,	// (0x00030653) bg_popup_window_pane_g7

0xbfa0,	// (0x00030662) bg_popup_window_pane_g8_ParamLimits

0xbfa0,	// (0x00030662) bg_popup_window_pane_g8

0xbfaf,	// (0x00030671) bg_popup_window_pane_g9_ParamLimits

0xbfaf,	// (0x00030671) bg_popup_window_pane_g9

0x458e,	// (0x00028c50) bg_popup_window_pane_g10_ParamLimits

0x458e,	// (0x00028c50) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x00033f6d) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x00033f6d) bg_popup_window_pane_g

0x44b7,	// (0x00028b79) bg_popup_heading_pane_ParamLimits

0x44b7,	// (0x00028b79) bg_popup_heading_pane

0x1b00,	// (0x000261c2) tabs_4_passive_pane_cp_srt_ParamLimits

0x1b00,	// (0x000261c2) tabs_4_passive_pane_cp_srt

0x1b12,	// (0x000261d4) tabs_4_passive_pane_srt_ParamLimits

0x44cb,	// (0x00028b8d) heading_pane_g2

0x1b12,	// (0x000261d4) tabs_4_passive_pane_srt

0x384e,	// (0x00027f10) bg_passive_tab_pane_cp3_srt_ParamLimits

0x384e,	// (0x00027f10) bg_passive_tab_pane_cp3_srt

0x44d3,	// (0x00028b95) heading_pane_t1_ParamLimits

0x44d3,	// (0x00028b95) heading_pane_t1

0x44ea,	// (0x00028bac) heading_pane_t2_ParamLimits

0x44ea,	// (0x00028bac) heading_pane_t2

0x0001,

0xf8a6,	// (0x00033f68) heading_pane_t_ParamLimits

0xf8a6,	// (0x00033f68) heading_pane_t

0x3fe2,	// (0x000286a4) bg_popup_heading_pane_g1

0x4091,	// (0x00028753) bg_popup_heading_pane_g2

0x409b,	// (0x0002875d) bg_popup_heading_pane_g3

0x40a5,	// (0x00028767) bg_popup_heading_pane_g4

0x40af,	// (0x00028771) bg_popup_heading_pane_g5

0x40b9,	// (0x0002877b) bg_popup_heading_pane_g6

0x40c1,	// (0x00028783) bg_popup_heading_pane_g7

0x40c9,	// (0x0002878b) bg_popup_heading_pane_g8

0x40d3,	// (0x00028795) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x00033f24) bg_popup_heading_pane_g

0x37da,	// (0x00027e9c) bg_popup_sub_pane_g1

0x37e2,	// (0x00027ea4) bg_popup_sub_pane_g2

0x37ea,	// (0x00027eac) bg_popup_sub_pane_g3

0x37f2,	// (0x00027eb4) bg_popup_sub_pane_g4

0x37fa,	// (0x00027ebc) bg_popup_sub_pane_g5

0x3802,	// (0x00027ec4) bg_popup_sub_pane_g6

0x380a,	// (0x00027ecc) bg_popup_sub_pane_g7

0x3812,	// (0x00027ed4) bg_popup_sub_pane_g8

0x381a,	// (0x00027edc) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x00033efe) bg_popup_sub_pane_g

0xcea9,	// (0x0003156b) bg_popup_window_pane_cp5_ParamLimits

0xcea9,	// (0x0003156b) bg_popup_window_pane_cp5

0xcff8,	// (0x000316ba) popup_note_window_g1_ParamLimits

0xcff8,	// (0x000316ba) popup_note_window_g1

0xd004,	// (0x000316c6) popup_note_window_t1_ParamLimits

0xd004,	// (0x000316c6) popup_note_window_t1

0xd01a,	// (0x000316dc) popup_note_window_t2_ParamLimits

0xd01a,	// (0x000316dc) popup_note_window_t2

0xd030,	// (0x000316f2) popup_note_window_t3_ParamLimits

0xd030,	// (0x000316f2) popup_note_window_t3

0xd046,	// (0x00031708) popup_note_window_t4_ParamLimits

0xd046,	// (0x00031708) popup_note_window_t4

0xd06e,	// (0x00031730) popup_note_window_t5_ParamLimits

0xd06e,	// (0x00031730) popup_note_window_t5

0x0004,

0xf55a,	// (0x00033c1c) popup_note_window_t_ParamLimits

0xf55a,	// (0x00033c1c) popup_note_window_t

0xd0b8,	// (0x0003177a) bg_popup_window_pane_cp6_ParamLimits

0xd0b8,	// (0x0003177a) bg_popup_window_pane_cp6

0x3f5e,	// (0x00028620) popup_note_image_window_g1_ParamLimits

0x3f5e,	// (0x00028620) popup_note_image_window_g1

0x3f6a,	// (0x0002862c) popup_note_image_window_g2_ParamLimits

0x3f6a,	// (0x0002862c) popup_note_image_window_g2

0x0001,

0xf830,	// (0x00033ef2) popup_note_image_window_g_ParamLimits

0xf830,	// (0x00033ef2) popup_note_image_window_g

0x3f83,	// (0x00028645) popup_note_image_window_t1_ParamLimits

0x3f83,	// (0x00028645) popup_note_image_window_t1

0x3f9c,	// (0x0002865e) popup_note_image_window_t2_ParamLimits

0x3f9c,	// (0x0002865e) popup_note_image_window_t2

0x3fb5,	// (0x00028677) popup_note_image_window_t3_ParamLimits

0x3fb5,	// (0x00028677) popup_note_image_window_t3

0x0002,

0xf835,	// (0x00033ef7) popup_note_image_window_t_ParamLimits

0xf835,	// (0x00033ef7) popup_note_image_window_t

0x3e1e,	// (0x000284e0) bg_popup_window_pane_cp7_ParamLimits

0x3e1e,	// (0x000284e0) bg_popup_window_pane_cp7

0x3e4e,	// (0x00028510) popup_note_wait_window_g1_ParamLimits

0x3e4e,	// (0x00028510) popup_note_wait_window_g1

0x3e5a,	// (0x0002851c) popup_note_wait_window_g2_ParamLimits

0x3e5a,	// (0x0002851c) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x00033ee0) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x00033ee0) popup_note_wait_window_g

0x3e72,	// (0x00028534) popup_note_wait_window_t1_ParamLimits

0x3e72,	// (0x00028534) popup_note_wait_window_t1

0x3e99,	// (0x0002855b) popup_note_wait_window_t2_ParamLimits

0x3e99,	// (0x0002855b) popup_note_wait_window_t2

0x3eb7,	// (0x00028579) popup_note_wait_window_t3_ParamLimits

0x3eb7,	// (0x00028579) popup_note_wait_window_t3

0x3eca,	// (0x0002858c) popup_note_wait_window_t4_ParamLimits

0x3eca,	// (0x0002858c) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x00033ee7) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x00033ee7) popup_note_wait_window_t

0x3eef,	// (0x000285b1) wait_bar_pane_ParamLimits

0x3eef,	// (0x000285b1) wait_bar_pane

0xce5b,	// (0x0003151d) wait_anim_pane

0xce5b,	// (0x0003151d) wait_border_pane

0xce51,	// (0x00031513) wait_anim_pane_g1

0xce51,	// (0x00031513) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x00033da0) wait_anim_pane_g

0x3dc2,	// (0x00028484) wait_border_pane_g1

0x3dcd,	// (0x0002848f) wait_border_pane_g2

0x3dd6,	// (0x00028498) wait_border_pane_g3

0x0002,

0xf817,	// (0x00033ed9) wait_border_pane_g

0x3c2c,	// (0x000282ee) bg_popup_window_pane_cp16_ParamLimits

0x3c2c,	// (0x000282ee) bg_popup_window_pane_cp16

0x3d2c,	// (0x000283ee) indicator_popup_pane_cp4_ParamLimits

0x3d2c,	// (0x000283ee) indicator_popup_pane_cp4

0x3d40,	// (0x00028402) popup_query_data_window_t1_ParamLimits

0x3d40,	// (0x00028402) popup_query_data_window_t1

0x3d52,	// (0x00028414) popup_query_data_window_t2_ParamLimits

0x3d52,	// (0x00028414) popup_query_data_window_t2

0x3d6b,	// (0x0002842d) popup_query_data_window_t3_ParamLimits

0x3d6b,	// (0x0002842d) popup_query_data_window_t3

0x0002,

0xf810,	// (0x00033ed2) popup_query_data_window_t_ParamLimits

0xf810,	// (0x00033ed2) popup_query_data_window_t

0x3d85,	// (0x00028447) query_popup_data_pane_ParamLimits

0x3d85,	// (0x00028447) query_popup_data_pane

0x3d99,	// (0x0002845b) query_popup_data_pane_cp1_ParamLimits

0x3d99,	// (0x0002845b) query_popup_data_pane_cp1

0x3c2c,	// (0x000282ee) bg_popup_window_pane_cp10_ParamLimits

0x3c2c,	// (0x000282ee) bg_popup_window_pane_cp10

0x3c5e,	// (0x00028320) indicator_popup_pane_ParamLimits

0x3c5e,	// (0x00028320) indicator_popup_pane

0x3c80,	// (0x00028342) popup_query_code_window_t1_ParamLimits

0x3c80,	// (0x00028342) popup_query_code_window_t1

0x3c9a,	// (0x0002835c) popup_query_code_window_t2_ParamLimits

0x3c9a,	// (0x0002835c) popup_query_code_window_t2

0x3ce3,	// (0x000283a5) popup_query_code_window_t3_ParamLimits

0x3ce3,	// (0x000283a5) popup_query_code_window_t3

0x0002,

0xf809,	// (0x00033ecb) popup_query_code_window_t_ParamLimits

0xf809,	// (0x00033ecb) popup_query_code_window_t

0x3d12,	// (0x000283d4) query_popup_pane_ParamLimits

0x3d12,	// (0x000283d4) query_popup_pane

0xd0b8,	// (0x0003177a) bg_popup_window_pane_cp15_ParamLimits

0xd0b8,	// (0x0003177a) bg_popup_window_pane_cp15

0xd0d8,	// (0x0003179a) indicator_popup_pane_cp1_ParamLimits

0xd0d8,	// (0x0003179a) indicator_popup_pane_cp1

0xd0eb,	// (0x000317ad) indicator_popup_pane_cp2_ParamLimits

0xd0eb,	// (0x000317ad) indicator_popup_pane_cp2

0xd106,	// (0x000317c8) popup_query_data_code_window_g1_ParamLimits

0xd106,	// (0x000317c8) popup_query_data_code_window_g1

0xd119,	// (0x000317db) popup_query_data_code_window_t1_ParamLimits

0xd119,	// (0x000317db) popup_query_data_code_window_t1

0xd12b,	// (0x000317ed) popup_query_data_code_window_t2_ParamLimits

0xd12b,	// (0x000317ed) popup_query_data_code_window_t2

0xd13d,	// (0x000317ff) popup_query_data_code_window_t3_ParamLimits

0xd13d,	// (0x000317ff) popup_query_data_code_window_t3

0xd153,	// (0x00031815) popup_query_data_code_window_t4_ParamLimits

0xd153,	// (0x00031815) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00033c27) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00033c27) popup_query_data_code_window_t

0x2da7,	// (0x00027469) list_single_midp_graphic_pane_g3

0xd16d,	// (0x0003182f) query_popup_data_pane_cp2_ParamLimits

0xd180,	// (0x00031842) query_popup_pane_cp2_ParamLimits

0xd180,	// (0x00031842) query_popup_pane_cp2

0xce5b,	// (0x0003151d) bg_popup_window_pane_cp11

0x3c10,	// (0x000282d2) heading_pane_cp5

0x3c18,	// (0x000282da) listscroll_popup_info_pane

0xce5b,	// (0x0003151d) input_focus_pane_cp3

0xd19b,	// (0x0003185d) query_popup_pane_t1

0xd1a9,	// (0x0003186b) list_popup_info_pane_ParamLimits

0xd1a9,	// (0x0003186b) list_popup_info_pane

0xd1b8,	// (0x0003187a) listscroll_popup_info_pane_g1

0xd1c0,	// (0x00031882) scroll_pane_cp7

0xd1ca,	// (0x0003188c) popup_info_list_pane_t1_ParamLimits

0xd1ca,	// (0x0003188c) popup_info_list_pane_t1

0xd1e4,	// (0x000318a6) popup_info_list_pane_t2_ParamLimits

0xd1e4,	// (0x000318a6) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00033c30) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00033c30) popup_info_list_pane_t

0xce5b,	// (0x0003151d) bg_popup_window_pane_cp12

0x4fc3,	// (0x00029685) find_popup_pane

0xceb7,	// (0x00031579) bg_popup_window_pane_cp3

0xd1fe,	// (0x000318c0) heading_pane_cp3

0xd20d,	// (0x000318cf) listscroll_popup_graphic_pane

0xce5b,	// (0x0003151d) bg_popup_window_pane_cp4

0xaa7d,	// (0x0002f13f) heading_pane_cp4

0xd21d,	// (0x000318df) listscroll_popup_colour_pane

0xaa87,	// (0x0002f149) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xaa87,	// (0x0002f149) cell_large_graphic_colour_none_popup_pane

0xaa9b,	// (0x0002f15d) grid_large_graphic_colour_popup_pane_ParamLimits

0xaa9b,	// (0x0002f15d) grid_large_graphic_colour_popup_pane

0xaabf,	// (0x0002f181) listscroll_popup_colour_pane_g1_ParamLimits

0xaabf,	// (0x0002f181) listscroll_popup_colour_pane_g1

0xaad6,	// (0x0002f198) listscroll_popup_colour_pane_g2_ParamLimits

0xaad6,	// (0x0002f198) listscroll_popup_colour_pane_g2

0xaaed,	// (0x0002f1af) listscroll_popup_colour_pane_g3_ParamLimits

0xaaed,	// (0x0002f1af) listscroll_popup_colour_pane_g3

0xaafd,	// (0x0002f1bf) listscroll_popup_colour_pane_g4_ParamLimits

0xaafd,	// (0x0002f1bf) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00033c35) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00033c35) listscroll_popup_colour_pane_g

0xd225,	// (0x000318e7) scroll_pane_cp6_ParamLimits

0xd225,	// (0x000318e7) scroll_pane_cp6

0xab0d,	// (0x0002f1cf) cell_large_graphic_colour_popup_pane_ParamLimits

0xab0d,	// (0x0002f1cf) cell_large_graphic_colour_popup_pane

0xd237,	// (0x000318f9) cell_large_graphic_colour_none_popup_pane_t1

0xce5b,	// (0x0003151d) grid_highlight_pane_cp5

0xd246,	// (0x00031908) cell_large_graphic_colour_popup_pane_g1

0xd24e,	// (0x00031910) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00033c3e) cell_large_graphic_colour_popup_pane_g

0xd256,	// (0x00031918) cell_large_graphic_colour_popup_pane_g2_copy1

0xd25f,	// (0x00031921) grid_highlight_pane_cp4

0xd267,	// (0x00031929) bg_popup_window_pane_cp8_ParamLimits

0xd267,	// (0x00031929) bg_popup_window_pane_cp8

0xd282,	// (0x00031944) popup_snote_single_text_window_g1_ParamLimits

0xd282,	// (0x00031944) popup_snote_single_text_window_g1

0xd294,	// (0x00031956) popup_snote_single_text_window_t1_ParamLimits

0xd294,	// (0x00031956) popup_snote_single_text_window_t1

0xd2a7,	// (0x00031969) popup_snote_single_text_window_t2_ParamLimits

0xd2a7,	// (0x00031969) popup_snote_single_text_window_t2

0xd2ba,	// (0x0003197c) popup_snote_single_text_window_t3_ParamLimits

0xd2ba,	// (0x0003197c) popup_snote_single_text_window_t3

0xd2f3,	// (0x000319b5) popup_snote_single_text_window_t4_ParamLimits

0xd2f3,	// (0x000319b5) popup_snote_single_text_window_t4

0xd327,	// (0x000319e9) popup_snote_single_text_window_t5_ParamLimits

0xd327,	// (0x000319e9) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00033c43) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00033c43) popup_snote_single_text_window_t

0xd356,	// (0x00031a18) bg_popup_window_pane_cp9_ParamLimits

0xd356,	// (0x00031a18) bg_popup_window_pane_cp9

0xd282,	// (0x00031944) popup_snote_single_graphic_window_g1_ParamLimits

0xd282,	// (0x00031944) popup_snote_single_graphic_window_g1

0xd364,	// (0x00031a26) popup_snote_single_graphic_window_g2_ParamLimits

0xd364,	// (0x00031a26) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00033c4e) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00033c4e) popup_snote_single_graphic_window_g

0xd370,	// (0x00031a32) popup_snote_single_graphic_window_t1_ParamLimits

0xd370,	// (0x00031a32) popup_snote_single_graphic_window_t1

0xd383,	// (0x00031a45) popup_snote_single_graphic_window_t2_ParamLimits

0xd383,	// (0x00031a45) popup_snote_single_graphic_window_t2

0xd396,	// (0x00031a58) popup_snote_single_graphic_window_t3_ParamLimits

0xd396,	// (0x00031a58) popup_snote_single_graphic_window_t3

0xd3cf,	// (0x00031a91) popup_snote_single_graphic_window_t4_ParamLimits

0xd3cf,	// (0x00031a91) popup_snote_single_graphic_window_t4

0xd403,	// (0x00031ac5) popup_snote_single_graphic_window_t5_ParamLimits

0xd403,	// (0x00031ac5) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00033c53) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00033c53) popup_snote_single_graphic_window_t

0x4f01,	// (0x000295c3) grid_graphic_popup_pane_ParamLimits

0x4f01,	// (0x000295c3) grid_graphic_popup_pane

0x4f2f,	// (0x000295f1) listscroll_popup_graphic_pane_g1_ParamLimits

0x4f2f,	// (0x000295f1) listscroll_popup_graphic_pane_g1

0xc367,	// (0x00030a29) listscroll_popup_graphic_pane_g2_ParamLimits

0xc367,	// (0x00030a29) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x00034048) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x00034048) listscroll_popup_graphic_pane_g

0x4f57,	// (0x00029619) scroll_pane_cp5

0xc31f,	// (0x000309e1) cell_graphic_popup_pane_ParamLimits

0xc31f,	// (0x000309e1) cell_graphic_popup_pane

0x4e7a,	// (0x0002953c) cell_graphic_popup_pane_g1

0x4e82,	// (0x00029544) cell_graphic_popup_pane_g2

0xd256,	// (0x00031918) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x00034041) cell_graphic_popup_pane_g

0x4e8b,	// (0x0002954d) cell_graphic_popup_pane_t2

0xd25f,	// (0x00031921) grid_highlight_pane_cp3

0xd444,	// (0x00031b06) list_gen_pane_ParamLimits

0xd444,	// (0x00031b06) list_gen_pane

0xd46c,	// (0x00031b2e) scroll_pane

0xc2d6,	// (0x00030998) bg_list_pane_g1_ParamLimits

0xc2d6,	// (0x00030998) bg_list_pane_g1

0x4def,	// (0x000294b1) bg_list_pane_g2_ParamLimits

0x4def,	// (0x000294b1) bg_list_pane_g2

0x4e04,	// (0x000294c6) bg_list_pane_g3_ParamLimits

0x4e04,	// (0x000294c6) bg_list_pane_g3

0x4e18,	// (0x000294da) bg_list_pane_g4_ParamLimits

0x4e18,	// (0x000294da) bg_list_pane_g4

0xc2f3,	// (0x000309b5) bg_list_pane_g5_ParamLimits

0xc2f3,	// (0x000309b5) bg_list_pane_g5

0x0004,

0xf974,	// (0x00034036) bg_list_pane_g_ParamLimits

0xf974,	// (0x00034036) bg_list_pane_g

0xc269,	// (0x0003092b) list_double2_graphic_large_graphic_pane_ParamLimits

0xc269,	// (0x0003092b) list_double2_graphic_large_graphic_pane

0xc269,	// (0x0003092b) list_double2_graphic_pane_ParamLimits

0xc269,	// (0x0003092b) list_double2_graphic_pane

0xc269,	// (0x0003092b) list_double2_large_graphic_pane_ParamLimits

0xc269,	// (0x0003092b) list_double2_large_graphic_pane

0xc269,	// (0x0003092b) list_double2_pane_ParamLimits

0xc269,	// (0x0003092b) list_double2_pane

0xc269,	// (0x0003092b) list_double_graphic_heading_pane_ParamLimits

0xc269,	// (0x0003092b) list_double_graphic_heading_pane

0xc269,	// (0x0003092b) list_double_graphic_pane_ParamLimits

0xc269,	// (0x0003092b) list_double_graphic_pane

0xc269,	// (0x0003092b) list_double_heading_pane_ParamLimits

0xc269,	// (0x0003092b) list_double_heading_pane

0xc269,	// (0x0003092b) list_double_large_graphic_pane_ParamLimits

0xc269,	// (0x0003092b) list_double_large_graphic_pane

0xc269,	// (0x0003092b) list_double_number_pane_ParamLimits

0xc269,	// (0x0003092b) list_double_number_pane

0xc269,	// (0x0003092b) list_double_pane_ParamLimits

0xc269,	// (0x0003092b) list_double_pane

0xc269,	// (0x0003092b) list_double_time_pane_ParamLimits

0xc269,	// (0x0003092b) list_double_time_pane

0xc269,	// (0x0003092b) list_setting_number_pane_ParamLimits

0xc269,	// (0x0003092b) list_setting_number_pane

0xc269,	// (0x0003092b) list_setting_pane_ParamLimits

0xc269,	// (0x0003092b) list_setting_pane

0xc27e,	// (0x00030940) list_single_2graphic_pane_ParamLimits

0xc27e,	// (0x00030940) list_single_2graphic_pane

0xc27e,	// (0x00030940) list_single_graphic_heading_pane_ParamLimits

0xc27e,	// (0x00030940) list_single_graphic_heading_pane

0xc27e,	// (0x00030940) list_single_graphic_pane_ParamLimits

0xc27e,	// (0x00030940) list_single_graphic_pane

0xc27e,	// (0x00030940) list_single_heading_pane_ParamLimits

0xc27e,	// (0x00030940) list_single_heading_pane

0xc27e,	// (0x00030940) list_single_large_graphic_pane_ParamLimits

0xc27e,	// (0x00030940) list_single_large_graphic_pane

0xc27e,	// (0x00030940) list_single_number_heading_pane_ParamLimits

0xc27e,	// (0x00030940) list_single_number_heading_pane

0xc27e,	// (0x00030940) list_single_number_pane_ParamLimits

0xc27e,	// (0x00030940) list_single_number_pane

0xc27e,	// (0x00030940) list_single_pane_ParamLimits

0xc27e,	// (0x00030940) list_single_pane

0xce5b,	// (0x0003151d) list_highlight_pane_cp1

0xead8,	// (0x0003319a) list_single_pane_g1_ParamLimits

0xead8,	// (0x0003319a) list_single_pane_g1

0xeae4,	// (0x000331a6) list_single_pane_g2_ParamLimits

0xeae4,	// (0x000331a6) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00033c65) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00033c65) list_single_pane_g

0xedc3,	// (0x00033485) list_single_pane_t1_ParamLimits

0xedc3,	// (0x00033485) list_single_pane_t1

0xead8,	// (0x0003319a) list_single_number_pane_g1_ParamLimits

0xead8,	// (0x0003319a) list_single_number_pane_g1

0xeae4,	// (0x000331a6) list_single_number_pane_g2_ParamLimits

0xeae4,	// (0x000331a6) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00033c65) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00033c65) list_single_number_pane_g

0xecee,	// (0x000333b0) list_single_number_pane_t1_ParamLimits

0xecee,	// (0x000333b0) list_single_number_pane_t1

0xa32f,	// (0x0002e9f1) list_single_number_pane_t2_ParamLimits

0xa32f,	// (0x0002e9f1) list_single_number_pane_t2

0x0001,

0xf935,	// (0x00033ff7) list_single_number_pane_t_ParamLimits

0xf935,	// (0x00033ff7) list_single_number_pane_t

0x9d30,	// (0x0002e3f2) list_single_graphic_pane_g1_ParamLimits

0x9d30,	// (0x0002e3f2) list_single_graphic_pane_g1

0xead8,	// (0x0003319a) list_single_graphic_pane_g2_ParamLimits

0xead8,	// (0x0003319a) list_single_graphic_pane_g2

0xeae4,	// (0x000331a6) list_single_graphic_pane_g3_ParamLimits

0xeae4,	// (0x000331a6) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00033c5e) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00033c5e) list_single_graphic_pane_g

0x9d3c,	// (0x0002e3fe) list_single_graphic_pane_t1_ParamLimits

0x9d3c,	// (0x0002e3fe) list_single_graphic_pane_t1

0xead8,	// (0x0003319a) list_single_heading_pane_g1_ParamLimits

0xead8,	// (0x0003319a) list_single_heading_pane_g1

0xeae4,	// (0x000331a6) list_single_heading_pane_g2_ParamLimits

0xeae4,	// (0x000331a6) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00033c65) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00033c65) list_single_heading_pane_g

0x9d52,	// (0x0002e414) list_single_heading_pane_t1_ParamLimits

0x9d52,	// (0x0002e414) list_single_heading_pane_t1

0x9d68,	// (0x0002e42a) list_single_heading_pane_t2_ParamLimits

0x9d68,	// (0x0002e42a) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00033c6a) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00033c6a) list_single_heading_pane_t

0xead8,	// (0x0003319a) list_single_number_heading_pane_g1_ParamLimits

0xead8,	// (0x0003319a) list_single_number_heading_pane_g1

0xeae4,	// (0x000331a6) list_single_number_heading_pane_g2_ParamLimits

0xeae4,	// (0x000331a6) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00033c65) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00033c65) list_single_number_heading_pane_g

0x9d52,	// (0x0002e414) list_single_number_heading_pane_t1_ParamLimits

0x9d52,	// (0x0002e414) list_single_number_heading_pane_t1

0xeaf0,	// (0x000331b2) list_single_number_heading_pane_t2_ParamLimits

0xeaf0,	// (0x000331b2) list_single_number_heading_pane_t2

0xeb02,	// (0x000331c4) list_single_number_heading_pane_t3_ParamLimits

0xeb02,	// (0x000331c4) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00033c6f) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00033c6f) list_single_number_heading_pane_t

0xeb14,	// (0x000331d6) list_single_graphic_heading_pane_g1_ParamLimits

0xeb14,	// (0x000331d6) list_single_graphic_heading_pane_g1

0x9d7a,	// (0x0002e43c) list_single_graphic_heading_pane_g4_ParamLimits

0x9d7a,	// (0x0002e43c) list_single_graphic_heading_pane_g4

0xeae4,	// (0x000331a6) list_single_graphic_heading_pane_g5_ParamLimits

0xeae4,	// (0x000331a6) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00033c76) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00033c76) list_single_graphic_heading_pane_g

0x9d52,	// (0x0002e414) list_single_graphic_heading_pane_t1_ParamLimits

0x9d52,	// (0x0002e414) list_single_graphic_heading_pane_t1

0x9d8b,	// (0x0002e44d) list_single_graphic_heading_pane_t2_ParamLimits

0x9d8b,	// (0x0002e44d) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00033c7d) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00033c7d) list_single_graphic_heading_pane_t

0xeb20,	// (0x000331e2) list_single_large_graphic_pane_g1_ParamLimits

0xeb20,	// (0x000331e2) list_single_large_graphic_pane_g1

0xead8,	// (0x0003319a) list_single_large_graphic_pane_g2_ParamLimits

0xead8,	// (0x0003319a) list_single_large_graphic_pane_g2

0xeae4,	// (0x000331a6) list_single_large_graphic_pane_g3_ParamLimits

0xeae4,	// (0x000331a6) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00033c82) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00033c82) list_single_large_graphic_pane_g

0x3dcd,	// (0x0002848f) wait_border_pane_g2_copy1

0x9d9d,	// (0x0002e45f) list_single_large_graphic_pane_g4_cp2

0xeb2c,	// (0x000331ee) list_single_large_graphic_pane_t1_ParamLimits

0xeb2c,	// (0x000331ee) list_single_large_graphic_pane_t1

0xeb42,	// (0x00033204) list_double_pane_g1_ParamLimits

0xeb42,	// (0x00033204) list_double_pane_g1

0xeb4e,	// (0x00033210) list_double_pane_g2_ParamLimits

0xeb4e,	// (0x00033210) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00033c89) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00033c89) list_double_pane_g

0x9da5,	// (0x0002e467) list_double_pane_t1_ParamLimits

0x9da5,	// (0x0002e467) list_double_pane_t1

0x9dbb,	// (0x0002e47d) list_double_pane_t2_ParamLimits

0x9dbb,	// (0x0002e47d) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00033c8e) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00033c8e) list_double_pane_t

0x9dcd,	// (0x0002e48f) list_double2_pane_g1_ParamLimits

0x9dcd,	// (0x0002e48f) list_double2_pane_g1

0x9dde,	// (0x0002e4a0) list_double2_pane_g2_ParamLimits

0x9dde,	// (0x0002e4a0) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00033c93) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00033c93) list_double2_pane_g

0x9dea,	// (0x0002e4ac) list_double2_pane_t1_ParamLimits

0x9dea,	// (0x0002e4ac) list_double2_pane_t1

0x9e00,	// (0x0002e4c2) list_double2_pane_t2_ParamLimits

0x9e00,	// (0x0002e4c2) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00033c98) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00033c98) list_double2_pane_t

0xeb42,	// (0x00033204) list_double_number_pane_g1_ParamLimits

0xeb42,	// (0x00033204) list_double_number_pane_g1

0xeb4e,	// (0x00033210) list_double_number_pane_g2_ParamLimits

0xeb4e,	// (0x00033210) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00033c89) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00033c89) list_double_number_pane_g

0x9e12,	// (0x0002e4d4) list_double_number_pane_t1_ParamLimits

0x9e12,	// (0x0002e4d4) list_double_number_pane_t1

0x9e24,	// (0x0002e4e6) list_double_number_pane_t2_ParamLimits

0x9e24,	// (0x0002e4e6) list_double_number_pane_t2

0x9e3a,	// (0x0002e4fc) list_double_number_pane_t3_ParamLimits

0x9e3a,	// (0x0002e4fc) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00033c9d) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00033c9d) list_double_number_pane_t

0x9e4c,	// (0x0002e50e) list_double_graphic_pane_g1_ParamLimits

0x9e4c,	// (0x0002e50e) list_double_graphic_pane_g1

0x9e58,	// (0x0002e51a) list_double_graphic_pane_g2_ParamLimits

0x9e58,	// (0x0002e51a) list_double_graphic_pane_g2

0x9e67,	// (0x0002e529) list_double_graphic_pane_g3_ParamLimits

0x9e67,	// (0x0002e529) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x00033ca4) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x00033ca4) list_double_graphic_pane_g

0x9e7f,	// (0x0002e541) list_double_graphic_pane_t1_ParamLimits

0x9e7f,	// (0x0002e541) list_double_graphic_pane_t1

0x9e95,	// (0x0002e557) list_double_graphic_pane_t2_ParamLimits

0x9e95,	// (0x0002e557) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x00033cad) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x00033cad) list_double_graphic_pane_t

0x9ea7,	// (0x0002e569) list_double2_graphic_pane_g1_ParamLimits

0x9ea7,	// (0x0002e569) list_double2_graphic_pane_g1

0x9eb3,	// (0x0002e575) list_double2_graphic_pane_g2_ParamLimits

0x9eb3,	// (0x0002e575) list_double2_graphic_pane_g2

0x9ebf,	// (0x0002e581) list_double2_graphic_pane_g3_ParamLimits

0x9ebf,	// (0x0002e581) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00033cb2) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00033cb2) list_double2_graphic_pane_g

0x9ecb,	// (0x0002e58d) list_double2_graphic_pane_t1_ParamLimits

0x9ecb,	// (0x0002e58d) list_double2_graphic_pane_t1

0x9ee1,	// (0x0002e5a3) list_double2_graphic_pane_t2_ParamLimits

0x9ee1,	// (0x0002e5a3) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00033cb9) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00033cb9) list_double2_graphic_pane_t

0x9ef3,	// (0x0002e5b5) list_double_large_graphic_pane_g1_ParamLimits

0x9ef3,	// (0x0002e5b5) list_double_large_graphic_pane_g1

0x9f12,	// (0x0002e5d4) list_double_large_graphic_pane_g2_ParamLimits

0x9f12,	// (0x0002e5d4) list_double_large_graphic_pane_g2

0xeb4e,	// (0x00033210) list_double_large_graphic_pane_g3_ParamLimits

0xeb4e,	// (0x00033210) list_double_large_graphic_pane_g3

0x9f23,	// (0x0002e5e5) list_double_large_graphic_pane_g4_ParamLimits

0x9f23,	// (0x0002e5e5) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x00033cbe) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x00033cbe) list_double_large_graphic_pane_g

0x9f36,	// (0x0002e5f8) list_double_large_graphic_pane_t1_ParamLimits

0x9f36,	// (0x0002e5f8) list_double_large_graphic_pane_t1

0x9f4f,	// (0x0002e611) list_double_large_graphic_pane_t2_ParamLimits

0x9f4f,	// (0x0002e611) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x00033cc9) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x00033cc9) list_double_large_graphic_pane_t

0x9f61,	// (0x0002e623) list_double2_large_graphic_pane_g1_ParamLimits

0x9f61,	// (0x0002e623) list_double2_large_graphic_pane_g1

0x9dcd,	// (0x0002e48f) list_double2_large_graphic_pane_g2_ParamLimits

0x9dcd,	// (0x0002e48f) list_double2_large_graphic_pane_g2

0x9dde,	// (0x0002e4a0) list_double2_large_graphic_pane_g3_ParamLimits

0x9dde,	// (0x0002e4a0) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x00033cce) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x00033cce) list_double2_large_graphic_pane_g

0x9f6d,	// (0x0002e62f) list_double2_large_graphic_pane_t1_ParamLimits

0x9f6d,	// (0x0002e62f) list_double2_large_graphic_pane_t1

0x9f83,	// (0x0002e645) list_double2_large_graphic_pane_t2_ParamLimits

0x9f83,	// (0x0002e645) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x00033cd5) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x00033cd5) list_double2_large_graphic_pane_t

0x9f95,	// (0x0002e657) list_double_heading_pane_g1_ParamLimits

0x9f95,	// (0x0002e657) list_double_heading_pane_g1

0x9fa6,	// (0x0002e668) list_double_heading_pane_g2_ParamLimits

0x9fa6,	// (0x0002e668) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x00033cda) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x00033cda) list_double_heading_pane_g

0x9fb2,	// (0x0002e674) list_double_heading_pane_t1_ParamLimits

0x9fb2,	// (0x0002e674) list_double_heading_pane_t1

0x9e00,	// (0x0002e4c2) list_double_heading_pane_t2_ParamLimits

0x9e00,	// (0x0002e4c2) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x00033cdf) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x00033cdf) list_double_heading_pane_t

0x9fc8,	// (0x0002e68a) list_double_graphic_heading_pane_g1_ParamLimits

0x9fc8,	// (0x0002e68a) list_double_graphic_heading_pane_g1

0x9f95,	// (0x0002e657) list_double_graphic_heading_pane_g2_ParamLimits

0x9f95,	// (0x0002e657) list_double_graphic_heading_pane_g2

0x9fa6,	// (0x0002e668) list_double_graphic_heading_pane_g3_ParamLimits

0x9fa6,	// (0x0002e668) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x00033ce4) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00033ce4) list_double_graphic_heading_pane_g

0x9fd4,	// (0x0002e696) list_double_graphic_heading_pane_t1_ParamLimits

0x9fd4,	// (0x0002e696) list_double_graphic_heading_pane_t1

0x9ee1,	// (0x0002e5a3) list_double_graphic_heading_pane_t2_ParamLimits

0x9ee1,	// (0x0002e5a3) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x00033ceb) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x00033ceb) list_double_graphic_heading_pane_t

0x9f12,	// (0x0002e5d4) list_double_time_pane_g1_ParamLimits

0x9f12,	// (0x0002e5d4) list_double_time_pane_g1

0xeb4e,	// (0x00033210) list_double_time_pane_g2_ParamLimits

0xeb4e,	// (0x00033210) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x00033cf0) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x00033cf0) list_double_time_pane_g

0x9fea,	// (0x0002e6ac) list_double_time_pane_t1_ParamLimits

0x9fea,	// (0x0002e6ac) list_double_time_pane_t1

0xa000,	// (0x0002e6c2) list_double_time_pane_t2_ParamLimits

0xa000,	// (0x0002e6c2) list_double_time_pane_t2

0xa012,	// (0x0002e6d4) list_double_time_pane_t3_ParamLimits

0xa012,	// (0x0002e6d4) list_double_time_pane_t3

0xa024,	// (0x0002e6e6) list_double_time_pane_t4_ParamLimits

0xa024,	// (0x0002e6e6) list_double_time_pane_t4

0x0003,

0xf633,	// (0x00033cf5) list_double_time_pane_t_ParamLimits

0xf633,	// (0x00033cf5) list_double_time_pane_t

0xa036,	// (0x0002e6f8) list_setting_pane_g1_ParamLimits

0xa036,	// (0x0002e6f8) list_setting_pane_g1

0x9fa6,	// (0x0002e668) list_setting_pane_g2_ParamLimits

0x9fa6,	// (0x0002e668) list_setting_pane_g2

0x0001,

0xf63c,	// (0x00033cfe) list_setting_pane_g_ParamLimits

0xf63c,	// (0x00033cfe) list_setting_pane_g

0xa042,	// (0x0002e704) list_setting_pane_t1_ParamLimits

0xa042,	// (0x0002e704) list_setting_pane_t1

0xa059,	// (0x0002e71b) list_setting_pane_t2_ParamLimits

0xa059,	// (0x0002e71b) list_setting_pane_t2

0x0002,

0xf641,	// (0x00033d03) list_setting_pane_t_ParamLimits

0xf641,	// (0x00033d03) list_setting_pane_t

0xa098,	// (0x0002e75a) set_value_pane_cp_ParamLimits

0xa098,	// (0x0002e75a) set_value_pane_cp

0xa0a6,	// (0x0002e768) list_setting_number_pane_g1_ParamLimits

0xa0a6,	// (0x0002e768) list_setting_number_pane_g1

0xa0b2,	// (0x0002e774) list_setting_number_pane_g2_ParamLimits

0xa0b2,	// (0x0002e774) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x00033d0a) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x00033d0a) list_setting_number_pane_g

0xa0be,	// (0x0002e780) list_setting_number_pane_t1_ParamLimits

0xa0be,	// (0x0002e780) list_setting_number_pane_t1

0xa0d2,	// (0x0002e794) list_setting_number_pane_t2_ParamLimits

0xa0d2,	// (0x0002e794) list_setting_number_pane_t2

0xa0e9,	// (0x0002e7ab) list_setting_number_pane_t3_ParamLimits

0xa0e9,	// (0x0002e7ab) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x00033d0f) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x00033d0f) list_setting_number_pane_t

0xa098,	// (0x0002e75a) set_value_pane_ParamLimits

0xa098,	// (0x0002e75a) set_value_pane

0xd4a0,	// (0x00031b62) bg_set_opt_pane_ParamLimits

0xd4a0,	// (0x00031b62) bg_set_opt_pane

0xeb6f,	// (0x00033231) set_value_pane_t1

0xd4c1,	// (0x00031b83) slider_set_pane_cp3

0xd4ca,	// (0x00031b8c) volume_small_pane_cp

0xd4d3,	// (0x00031b95) list_form_gen_pane

0xd4dc,	// (0x00031b9e) scroll_pane_cp8

0xa12c,	// (0x0002e7ee) form_field_data_pane_ParamLimits

0xa12c,	// (0x0002e7ee) form_field_data_pane

0xa147,	// (0x0002e809) form_field_data_wide_pane_ParamLimits

0xa147,	// (0x0002e809) form_field_data_wide_pane

0xeb8d,	// (0x0003324f) form_field_popup_pane_ParamLimits

0xeb8d,	// (0x0003324f) form_field_popup_pane

0xa169,	// (0x0002e82b) form_field_popup_wide_pane_ParamLimits

0xa169,	// (0x0002e82b) form_field_popup_wide_pane

0xebaf,	// (0x00033271) form_field_slider_pane_ParamLimits

0xebaf,	// (0x00033271) form_field_slider_pane

0xebc2,	// (0x00033284) form_field_slider_wide_pane_ParamLimits

0xebc2,	// (0x00033284) form_field_slider_wide_pane

0xd4ed,	// (0x00031baf) data_form_pane

0xa194,	// (0x0002e856) form_field_data_pane_t1

0xd4f9,	// (0x00031bbb) input_focus_pane

0xebd5,	// (0x00033297) data_form_wide_pane

0xebf2,	// (0x000332b4) form_field_data_wide_pane_t1

0xd274,	// (0x00031936) input_focus_pane_cp6

0xa1ae,	// (0x0002e870) form_field_popup_pane_t1

0xd4f9,	// (0x00031bbb) input_focus_pane_cp7

0xd527,	// (0x00031be9) list_form_pane

0xec1c,	// (0x000332de) form_field_popup_wide_pane_t1

0xd4f9,	// (0x00031bbb) input_focus_pane_cp8

0xd533,	// (0x00031bf5) list_form_wide_pane

0xa1d0,	// (0x0002e892) form_field_slider_pane_t1_ParamLimits

0xa1d0,	// (0x0002e892) form_field_slider_pane_t1

0xa1e8,	// (0x0002e8aa) form_field_slider_pane_t2_ParamLimits

0xa1e8,	// (0x0002e8aa) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x00033d1f) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x00033d1f) form_field_slider_pane_t

0xcea9,	// (0x0003156b) input_focus_pane_cp9_ParamLimits

0xcea9,	// (0x0003156b) input_focus_pane_cp9

0xa1fd,	// (0x0002e8bf) slider_cont_pane_ParamLimits

0xa1fd,	// (0x0002e8bf) slider_cont_pane

0xd53f,	// (0x00031c01) form_field_slider_wide_pane_t1_ParamLimits

0xd53f,	// (0x00031c01) form_field_slider_wide_pane_t1

0xec31,	// (0x000332f3) form_field_slider_wide_pane_t2_ParamLimits

0xec31,	// (0x000332f3) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x00033d24) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x00033d24) form_field_slider_wide_pane_t

0xcea9,	// (0x0003156b) input_focus_pane_cp10_ParamLimits

0xcea9,	// (0x0003156b) input_focus_pane_cp10

0xa211,	// (0x0002e8d3) slider_cont_pane_cp1_ParamLimits

0xa211,	// (0x0002e8d3) slider_cont_pane_cp1

0xa225,	// (0x0002e8e7) slider_form_pane_cp

0xd551,	// (0x00031c13) input_focus_pane_g1

0xd559,	// (0x00031c1b) input_focus_pane_g2

0xd561,	// (0x00031c23) input_focus_pane_g3

0xd569,	// (0x00031c2b) input_focus_pane_g4

0xd571,	// (0x00031c33) input_focus_pane_g5

0xd579,	// (0x00031c3b) input_focus_pane_g6

0xd581,	// (0x00031c43) input_focus_pane_g7

0xd589,	// (0x00031c4b) input_focus_pane_g8

0xd591,	// (0x00031c53) input_focus_pane_g9

0xce51,	// (0x00031513) input_focus_pane_g10

0x0009,

0xf667,	// (0x00033d29) input_focus_pane_g

0x3dd6,	// (0x00028498) wait_border_pane_g3_copy1

0xa22d,	// (0x0002e8ef) data_form_pane_t1

0xce51,	// (0x00031513) wait_anim_pane_g1_copy1

0xa341,	// (0x0002ea03) data_form_wide_pane_t1

0xec43,	// (0x00033305) list_form_graphic_pane_cp_ParamLimits

0xec43,	// (0x00033305) list_form_graphic_pane_cp

0x4d2d,	// (0x000293ef) slider_form_pane_g1

0x4d36,	// (0x000293f8) slider_form_pane_g2

0x0006,

0xf965,	// (0x00034027) slider_form_pane_g

0xec43,	// (0x00033305) list_form_graphic_pane_ParamLimits

0xec43,	// (0x00033305) list_form_graphic_pane

0xec55,	// (0x00033317) list_form_graphic_pane_g1

0xec5d,	// (0x0003331f) list_form_graphic_pane_t1_ParamLimits

0xec5d,	// (0x0003331f) list_form_graphic_pane_t1

0xceb7,	// (0x00031579) list_highlight_pane_cp5_ParamLimits

0xceb7,	// (0x00031579) list_highlight_pane_cp5

0xa247,	// (0x0002e909) find_pane_g1

0x0314,	// (0x000249d6) input_find_pane

0xa250,	// (0x0002e912) input_find_pane_g1_ParamLimits

0xa250,	// (0x0002e912) input_find_pane_g1

0xa25c,	// (0x0002e91e) input_find_pane_t1_ParamLimits

0xa25c,	// (0x0002e91e) input_find_pane_t1

0xa271,	// (0x0002e933) input_find_pane_t2_ParamLimits

0xa271,	// (0x0002e933) input_find_pane_t2

0x0001,

0xf67c,	// (0x00033d3e) input_find_pane_t_ParamLimits

0xf67c,	// (0x00033d3e) input_find_pane_t

0x031d,	// (0x000249df) input_focus_pane_cp5_ParamLimits

0x031d,	// (0x000249df) input_focus_pane_cp5

0x033c,	// (0x000249fe) bg_popup_window_pane_cp2_ParamLimits

0x033c,	// (0x000249fe) bg_popup_window_pane_cp2

0x0349,	// (0x00024a0b) listscroll_menu_pane_ParamLimits

0x0349,	// (0x00024a0b) listscroll_menu_pane

0xab44,	// (0x0002f206) popup_submenu_window_ParamLimits

0xab44,	// (0x0002f206) popup_submenu_window

0x0385,	// (0x00024a47) find_popup_pane_g1

0x038d,	// (0x00024a4f) input_popup_find_pane_cp

0x0397,	// (0x00024a59) input_focus_pane_cp4_ParamLimits

0x0397,	// (0x00024a59) input_focus_pane_cp4

0x03b3,	// (0x00024a75) input_popup_find_pane_t1_ParamLimits

0x03b3,	// (0x00024a75) input_popup_find_pane_t1

0xce5b,	// (0x0003151d) bg_popup_sub_pane_cp

0x03e1,	// (0x00024aa3) listscroll_popup_sub_pane

0x03e9,	// (0x00024aab) list_submenu_pane_ParamLimits

0x03e9,	// (0x00024aab) list_submenu_pane

0x03fa,	// (0x00024abc) scroll_pane_cp4

0x0402,	// (0x00024ac4) list_single_popup_submenu_pane_ParamLimits

0x0402,	// (0x00024ac4) list_single_popup_submenu_pane

0x0417,	// (0x00024ad9) list_single_popup_submenu_pane_g1

0x041f,	// (0x00024ae1) list_single_popup_submenu_pane_t1_ParamLimits

0x041f,	// (0x00024ae1) list_single_popup_submenu_pane_t1

0xcea9,	// (0x0003156b) bg_active_tab_pane_cp1_ParamLimits

0xcea9,	// (0x0003156b) bg_active_tab_pane_cp1

0xab82,	// (0x0002f244) tabs_2_active_pane_g1

0xab8a,	// (0x0002f24c) tabs_2_active_pane_t1

0xcea9,	// (0x0003156b) bg_passive_tab_pane_cp1_ParamLimits

0xcea9,	// (0x0003156b) bg_passive_tab_pane_cp1

0xab82,	// (0x0002f244) tabs_2_passive_pane_g1

0xab8a,	// (0x0002f24c) tabs_2_passive_pane_t1

0xceb7,	// (0x00031579) bg_active_tab_pane_cp4

0xab9c,	// (0x0002f25e) tabs_2_long_active_pane_t1

0x32a4,	// (0x00027966) bg_passive_tab_pane_cp4

0x17b4,	// (0x00025e76) list_single_midp_graphic_pane_g4_ParamLimits

0xceb7,	// (0x00031579) bg_active_tab_pane_cp5

0xabaf,	// (0x0002f271) tabs_3_long_active_pane_t1

0x32a4,	// (0x00027966) bg_passive_tab_pane_cp5

0x17b4,	// (0x00025e76) list_single_midp_graphic_pane_g4

0xceb7,	// (0x00031579) bg_popup_window_pane_cp13_ParamLimits

0xceb7,	// (0x00031579) bg_popup_window_pane_cp13

0x0496,	// (0x00024b58) listscroll_popup_fast_pane_ParamLimits

0x0496,	// (0x00024b58) listscroll_popup_fast_pane

0x04a5,	// (0x00024b67) grid_popup_fast_pane_ParamLimits

0x04a5,	// (0x00024b67) grid_popup_fast_pane

0x04b7,	// (0x00024b79) scroll_pane_cp9_ParamLimits

0x04b7,	// (0x00024b79) scroll_pane_cp9

0x667d,	// (0x0002ad3f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x667d,	// (0x0002ad3f) list_single_graphic_hl_pane_t1_cp2

0x04db,	// (0x00024b9d) input_focus_pane_cp20_ParamLimits

0x04db,	// (0x00024b9d) input_focus_pane_cp20

0x04e9,	// (0x00024bab) query_popup_data_pane_t1_ParamLimits

0x04e9,	// (0x00024bab) query_popup_data_pane_t1

0x04fc,	// (0x00024bbe) query_popup_data_pane_t2_ParamLimits

0x04fc,	// (0x00024bbe) query_popup_data_pane_t2

0x0542,	// (0x00024c04) query_popup_data_pane_t3_ParamLimits

0x0542,	// (0x00024c04) query_popup_data_pane_t3

0x0583,	// (0x00024c45) query_popup_data_pane_t4_ParamLimits

0x0583,	// (0x00024c45) query_popup_data_pane_t4

0x05bf,	// (0x00024c81) query_popup_data_pane_t5_ParamLimits

0x05bf,	// (0x00024c81) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x00033d43) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x00033d43) query_popup_data_pane_t

0xd551,	// (0x00031c13) bg_set_opt_pane_g1

0xd559,	// (0x00031c1b) bg_set_opt_pane_g2

0xd561,	// (0x00031c23) bg_set_opt_pane_g3

0xd569,	// (0x00031c2b) bg_set_opt_pane_g4

0xd571,	// (0x00031c33) bg_set_opt_pane_g5

0xd579,	// (0x00031c3b) bg_set_opt_pane_g6

0xd581,	// (0x00031c43) bg_set_opt_pane_g7

0xd589,	// (0x00031c4b) bg_set_opt_pane_g8

0xd591,	// (0x00031c53) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x00033d4e) bg_set_opt_pane_g

0x0dd8,	// (0x0002549a) control_top_pane_stacon_ParamLimits

0x0dd8,	// (0x0002549a) control_top_pane_stacon

0x0e2b,	// (0x000254ed) signal_pane_stacon_ParamLimits

0x0e2b,	// (0x000254ed) signal_pane_stacon

0x2c06,	// (0x000272c8) stacon_top_pane_g1_ParamLimits

0x2c06,	// (0x000272c8) stacon_top_pane_g1

0x0e50,	// (0x00025512) title_pane_stacon_ParamLimits

0x0e50,	// (0x00025512) title_pane_stacon

0x0e7a,	// (0x0002553c) uni_indicator_pane_stacon_ParamLimits

0x0e7a,	// (0x0002553c) uni_indicator_pane_stacon

0x0e8f,	// (0x00025551) battery_pane_stacon_ParamLimits

0x0e8f,	// (0x00025551) battery_pane_stacon

0x0ed3,	// (0x00025595) control_bottom_pane_stacon_ParamLimits

0x0ed3,	// (0x00025595) control_bottom_pane_stacon

0x0ef6,	// (0x000255b8) navi_pane_stacon_ParamLimits

0x0ef6,	// (0x000255b8) navi_pane_stacon

0x2c28,	// (0x000272ea) stacon_bottom_pane_g1_ParamLimits

0x2c28,	// (0x000272ea) stacon_bottom_pane_g1

0x05f6,	// (0x00024cb8) aid_levels_signal_lsc_ParamLimits

0x05f6,	// (0x00024cb8) aid_levels_signal_lsc

0x060d,	// (0x00024ccf) signal_pane_stacon_g1_ParamLimits

0x060d,	// (0x00024ccf) signal_pane_stacon_g1

0x0621,	// (0x00024ce3) signal_pane_stacon_g2_ParamLimits

0x0621,	// (0x00024ce3) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x00033d61) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x00033d61) signal_pane_stacon_g

0x0663,	// (0x00024d25) title_pane_stacon_t1_ParamLimits

0x0663,	// (0x00024d25) title_pane_stacon_t1

0x0688,	// (0x00024d4a) uni_indicator_pane_stacon_g1

0x0692,	// (0x00024d54) uni_indicator_pane_stacon_g2

0x069c,	// (0x00024d5e) uni_indicator_pane_stacon_g3

0x06a6,	// (0x00024d68) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x00033d6d) uni_indicator_pane_stacon_g

0x06b0,	// (0x00024d72) control_top_pane_stacon_g1

0x06b8,	// (0x00024d7a) control_top_pane_stacon_t1_ParamLimits

0x06b8,	// (0x00024d7a) control_top_pane_stacon_t1

0x06ef,	// (0x00024db1) aid_levels_battery_lsc_ParamLimits

0x06ef,	// (0x00024db1) aid_levels_battery_lsc

0x0707,	// (0x00024dc9) battery_pane_stacon_g1_ParamLimits

0x0707,	// (0x00024dc9) battery_pane_stacon_g1

0x071a,	// (0x00024ddc) battery_pane_stacon_g2_ParamLimits

0x071a,	// (0x00024ddc) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x00033d76) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x00033d76) battery_pane_stacon_g

0x0758,	// (0x00024e1a) navi_icon_pane_stacon

0x076c,	// (0x00024e2e) navi_navi_pane_stacon

0x0758,	// (0x00024e1a) navi_text_pane_stacon

0x06b0,	// (0x00024d72) control_bottom_pane_stacon_g1

0x0782,	// (0x00024e44) control_bottom_pane_stacon_t1_ParamLimits

0x0782,	// (0x00024e44) control_bottom_pane_stacon_t1

0xabc1,	// (0x0002f283) grid_app_pane_ParamLimits

0xabc1,	// (0x0002f283) grid_app_pane

0xabf9,	// (0x0002f2bb) scroll_pane_cp15_ParamLimits

0xabf9,	// (0x0002f2bb) scroll_pane_cp15

0xac0e,	// (0x0002f2d0) cell_app_pane_ParamLimits

0xac0e,	// (0x0002f2d0) cell_app_pane

0xac5b,	// (0x0002f31d) cell_app_pane_g1_ParamLimits

0xac5b,	// (0x0002f31d) cell_app_pane_g1

0x0858,	// (0x00024f1a) cell_app_pane_g2_ParamLimits

0x0858,	// (0x00024f1a) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x00033d7b) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x00033d7b) cell_app_pane_g

0xac7f,	// (0x0002f341) cell_app_pane_t1_ParamLimits

0xac7f,	// (0x0002f341) cell_app_pane_t1

0x087b,	// (0x00024f3d) grid_highlight_pane_ParamLimits

0x087b,	// (0x00024f3d) grid_highlight_pane

0xd551,	// (0x00031c13) cell_highlight_pane_g1

0xd559,	// (0x00031c1b) cell_highlight_pane_g2

0xd561,	// (0x00031c23) cell_highlight_pane_g3

0xd569,	// (0x00031c2b) cell_highlight_pane_g4

0xd571,	// (0x00031c33) cell_highlight_pane_g5

0xd579,	// (0x00031c3b) cell_highlight_pane_g6

0xd581,	// (0x00031c43) cell_highlight_pane_g7

0xd589,	// (0x00031c4b) cell_highlight_pane_g8

0xd591,	// (0x00031c53) cell_highlight_pane_g9

0xce51,	// (0x00031513) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x00033d29) cell_highlight_pane_g

0x089f,	// (0x00024f61) bg_scroll_pane

0x08be,	// (0x00024f80) scroll_handle_pane

0x090f,	// (0x00024fd1) scroll_bg_pane_g1

0x0924,	// (0x00024fe6) scroll_bg_pane_g2

0x093c,	// (0x00024ffe) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x00033d80) scroll_bg_pane_g

0x0951,	// (0x00025013) scroll_handle_focus_pane_ParamLimits

0x0951,	// (0x00025013) scroll_handle_focus_pane

0x090f,	// (0x00024fd1) scroll_handle_pane_g1

0x095e,	// (0x00025020) scroll_handle_pane_g2

0x093c,	// (0x00024ffe) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x00033d87) scroll_handle_pane_g

0x0397,	// (0x00024a59) bg_popup_sub_pane_cp21_ParamLimits

0x0397,	// (0x00024a59) bg_popup_sub_pane_cp21

0x0972,	// (0x00025034) popup_fep_japan_predictive_window_t1_ParamLimits

0x0972,	// (0x00025034) popup_fep_japan_predictive_window_t1

0x0989,	// (0x0002504b) popup_fep_japan_predictive_window_t2_ParamLimits

0x0989,	// (0x0002504b) popup_fep_japan_predictive_window_t2

0x09bc,	// (0x0002507e) popup_fep_japan_predictive_window_t3_ParamLimits

0x09bc,	// (0x0002507e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x00033d8e) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x00033d8e) popup_fep_japan_predictive_window_t

0xce5b,	// (0x0003151d) bg_popup_sub_pane_cp23

0x09f3,	// (0x000250b5) listscroll_japin_cand_pane

0x09fb,	// (0x000250bd) popup_fep_japan_candidate_window_t1

0x0a09,	// (0x000250cb) candidate_pane_ParamLimits

0x0a09,	// (0x000250cb) candidate_pane

0x0a1b,	// (0x000250dd) scroll_pane_cp30

0x0a25,	// (0x000250e7) list_single_popup_jap_candidate_pane_ParamLimits

0x0a25,	// (0x000250e7) list_single_popup_jap_candidate_pane

0xce5b,	// (0x0003151d) list_highlight_pane_cp30

0x0a39,	// (0x000250fb) list_single_popup_jap_candidate_pane_t1

0xac9f,	// (0x0002f361) level_1_signal

0xacb1,	// (0x0002f373) level_2_signal

0xacc4,	// (0x0002f386) level_3_signal

0xacd7,	// (0x0002f399) level_4_signal

0xacea,	// (0x0002f3ac) level_5_signal

0xacfd,	// (0x0002f3bf) level_6_signal

0xad10,	// (0x0002f3d2) level_7_signal

0xac9f,	// (0x0002f361) level_1_battery

0xacb1,	// (0x0002f373) level_2_battery

0xacc4,	// (0x0002f386) level_3_battery

0xacd7,	// (0x0002f399) level_4_battery

0xacea,	// (0x0002f3ac) level_5_battery

0xacfd,	// (0x0002f3bf) level_6_battery

0xad10,	// (0x0002f3d2) level_7_battery

0x0ada,	// (0x0002519c) list_menu_pane_ParamLimits

0x0ada,	// (0x0002519c) list_menu_pane

0x0af0,	// (0x000251b2) scroll_pane_cp25_ParamLimits

0x0af0,	// (0x000251b2) scroll_pane_cp25

0x0b09,	// (0x000251cb) list_double2_graphic_pane_cp2_ParamLimits

0x0b09,	// (0x000251cb) list_double2_graphic_pane_cp2

0x0b09,	// (0x000251cb) list_double2_large_graphic_pane_cp2_ParamLimits

0x0b09,	// (0x000251cb) list_double2_large_graphic_pane_cp2

0x0b09,	// (0x000251cb) list_double2_pane_cp2_ParamLimits

0x0b09,	// (0x000251cb) list_double2_pane_cp2

0x0b09,	// (0x000251cb) list_double_graphic_pane_cp2_ParamLimits

0x0b09,	// (0x000251cb) list_double_graphic_pane_cp2

0x0b09,	// (0x000251cb) list_double_large_graphic_pane_cp2_ParamLimits

0x0b09,	// (0x000251cb) list_double_large_graphic_pane_cp2

0x0b09,	// (0x000251cb) list_double_number_pane_cp2_ParamLimits

0x0b09,	// (0x000251cb) list_double_number_pane_cp2

0x0b09,	// (0x000251cb) list_double_pane_cp2_ParamLimits

0x0b09,	// (0x000251cb) list_double_pane_cp2

0xad23,	// (0x0002f3e5) list_single_2graphic_pane_cp2_ParamLimits

0xad23,	// (0x0002f3e5) list_single_2graphic_pane_cp2

0xad23,	// (0x0002f3e5) list_single_graphic_heading_pane_cp2_ParamLimits

0xad23,	// (0x0002f3e5) list_single_graphic_heading_pane_cp2

0xad23,	// (0x0002f3e5) list_single_graphic_pane_cp2_ParamLimits

0xad23,	// (0x0002f3e5) list_single_graphic_pane_cp2

0xad23,	// (0x0002f3e5) list_single_heading_pane_cp2_ParamLimits

0xad23,	// (0x0002f3e5) list_single_heading_pane_cp2

0x0b4c,	// (0x0002520e) list_single_large_graphic_pane_cp2_ParamLimits

0x0b4c,	// (0x0002520e) list_single_large_graphic_pane_cp2

0xad23,	// (0x0002f3e5) list_single_number_heading_pane_cp2_ParamLimits

0xad23,	// (0x0002f3e5) list_single_number_heading_pane_cp2

0xad23,	// (0x0002f3e5) list_single_number_pane_cp2_ParamLimits

0xad23,	// (0x0002f3e5) list_single_number_pane_cp2

0xad23,	// (0x0002f3e5) list_single_pane_cp2_ParamLimits

0xad23,	// (0x0002f3e5) list_single_pane_cp2

0x0c15,	// (0x000252d7) bg_popup_sub_pane_cp22

0x0c3a,	// (0x000252fc) popup_side_volume_key_window_g1

0x0c64,	// (0x00025326) popup_side_volume_key_window_t1

0x0c82,	// (0x00025344) volume_small_pane_cp1

0xcea9,	// (0x0003156b) bg_popup_sub_pane_cp24_ParamLimits

0xcea9,	// (0x0003156b) bg_popup_sub_pane_cp24

0x0c8a,	// (0x0002534c) fep_china_uni_candidate_pane_ParamLimits

0x0c8a,	// (0x0002534c) fep_china_uni_candidate_pane

0x0c9e,	// (0x00025360) fep_china_uni_entry_pane

0x0cae,	// (0x00025370) popup_fep_china_uni_window_g1

0x0cca,	// (0x0002538c) fep_china_uni_entry_pane_g1

0x0cd4,	// (0x00025396) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x00033dbf) fep_china_uni_entry_pane_g

0x0cde,	// (0x000253a0) fep_entry_item_pane

0x0ce8,	// (0x000253aa) fep_candidate_item_pane

0x0cf0,	// (0x000253b2) fep_china_uni_candidate_pane_g1

0x0cfa,	// (0x000253bc) fep_china_uni_candidate_pane_g2

0x0d02,	// (0x000253c4) fep_china_uni_candidate_pane_g3

0x0d0a,	// (0x000253cc) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x00033dc4) fep_china_uni_candidate_pane_g

0xce51,	// (0x00031513) fep_entry_item_pane_g1

0x0d14,	// (0x000253d6) fep_entry_item_pane_t1_ParamLimits

0x0d14,	// (0x000253d6) fep_entry_item_pane_t1

0x0d2a,	// (0x000253ec) fep_candidate_item_pane_t1_ParamLimits

0x0d2a,	// (0x000253ec) fep_candidate_item_pane_t1

0x0d3f,	// (0x00025401) fep_candidate_item_pane_t2_ParamLimits

0x0d3f,	// (0x00025401) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x00033dcd) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x00033dcd) fep_candidate_item_pane_t

0xceb7,	// (0x00031579) list_highlight_pane_cp31_ParamLimits

0xceb7,	// (0x00031579) list_highlight_pane_cp31

0x0d51,	// (0x00025413) level_1_signal_lsc

0x0d5a,	// (0x0002541c) level_2_signal_lsc

0x0d63,	// (0x00025425) level_3_signal_lsc

0x0d6c,	// (0x0002542e) level_4_signal_lsc

0x0d75,	// (0x00025437) level_5_signal_lsc

0x0d7e,	// (0x00025440) level_6_signal_lsc

0x0d87,	// (0x00025449) level_7_signal_lsc

0x0d87,	// (0x00025449) level_1_battery_lsc

0x0d90,	// (0x00025452) level_2_battery_lsc

0x0d99,	// (0x0002545b) level_3_battery_lsc

0x0da2,	// (0x00025464) level_4_battery_lsc

0x0dab,	// (0x0002546d) level_5_battery_lsc

0x0db4,	// (0x00025476) level_6_battery_lsc

0x0d51,	// (0x00025413) level_7_battery_lsc

0x0dbd,	// (0x0002547f) scroll_handle_focus_pane_g1

0x0dc6,	// (0x00025488) scroll_handle_focus_pane_g2

0x0dcf,	// (0x00025491) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x00033dd2) scroll_handle_focus_pane_g

0xa286,	// (0x0002e948) list_single_2graphic_pane_g1_ParamLimits

0xa286,	// (0x0002e948) list_single_2graphic_pane_g1

0x9d7a,	// (0x0002e43c) list_single_2graphic_pane_g2_ParamLimits

0x9d7a,	// (0x0002e43c) list_single_2graphic_pane_g2

0xeae4,	// (0x000331a6) list_single_2graphic_pane_g3_ParamLimits

0xeae4,	// (0x000331a6) list_single_2graphic_pane_g3

0xa292,	// (0x0002e954) list_single_2graphic_pane_g4_ParamLimits

0xa292,	// (0x0002e954) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x00033dd9) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x00033dd9) list_single_2graphic_pane_g

0xa29e,	// (0x0002e960) list_single_2graphic_pane_t1_ParamLimits

0xa29e,	// (0x0002e960) list_single_2graphic_pane_t1

0xa2cc,	// (0x0002e98e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa2cc,	// (0x0002e98e) list_double2_graphic_large_graphic_pane_g1

0x9dcd,	// (0x0002e48f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9dcd,	// (0x0002e48f) list_double2_graphic_large_graphic_pane_g2

0x9dde,	// (0x0002e4a0) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9dde,	// (0x0002e4a0) list_double2_graphic_large_graphic_pane_g3

0xa2de,	// (0x0002e9a0) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa2de,	// (0x0002e9a0) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x00033de2) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x00033de2) list_double2_graphic_large_graphic_pane_g

0xa2ea,	// (0x0002e9ac) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa2ea,	// (0x0002e9ac) list_double2_graphic_large_graphic_pane_t1

0xa300,	// (0x0002e9c2) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa300,	// (0x0002e9c2) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x00033deb) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x00033deb) list_double2_graphic_large_graphic_pane_t

0x2ceb,	// (0x000273ad) popup_fast_swap_window_ParamLimits

0x2ceb,	// (0x000273ad) popup_fast_swap_window

0x2d09,	// (0x000273cb) popup_side_volume_key_window

0x2d27,	// (0x000273e9) stacon_top_pane

0x2d31,	// (0x000273f3) status_pane_ParamLimits

0x2d31,	// (0x000273f3) status_pane

0xadfa,	// (0x0002f4bc) status_small_pane

0xce5b,	// (0x0003151d) control_pane

0xce5b,	// (0x0003151d) stacon_bottom_pane

0xd4dc,	// (0x00031b9e) scroll_pane_cp121

0xd4d3,	// (0x00031b95) set_content_pane

0xadb2,	// (0x0002f474) bg_active_tab_pane_g1_cp1

0x2bba,	// (0x0002727c) bg_active_tab_pane_g2_cp1

0xadbb,	// (0x0002f47d) bg_active_tab_pane_g3_cp1

0xadb2,	// (0x0002f474) bg_passive_tab_pane_g1_cp1

0x2bba,	// (0x0002727c) bg_passive_tab_pane_g2_cp1

0xadbb,	// (0x0002f47d) bg_passive_tab_pane_g3_cp1

0xadc4,	// (0x0002f486) bg_active_tab_pane_g1_cp2

0x2bba,	// (0x0002727c) bg_active_tab_pane_g2_cp2

0xadcd,	// (0x0002f48f) bg_active_tab_pane_g3_cp2

0xadc4,	// (0x0002f486) bg_passive_tab_pane_g1_cp2

0x2bba,	// (0x0002727c) bg_passive_tab_pane_g2_cp2

0xadcd,	// (0x0002f48f) bg_passive_tab_pane_g3_cp2

0xadd6,	// (0x0002f498) bg_active_tab_pane_g1_cp3

0x2bba,	// (0x0002727c) bg_active_tab_pane_g2_cp3

0xaddf,	// (0x0002f4a1) bg_active_tab_pane_g3_cp3

0xadd6,	// (0x0002f498) bg_passive_tab_pane_g1_cp3

0x2bba,	// (0x0002727c) bg_passive_tab_pane_g2_cp3

0xaddf,	// (0x0002f4a1) bg_passive_tab_pane_g3_cp3

0xade8,	// (0x0002f4aa) bg_active_tab_pane_g1_cp4

0x2bba,	// (0x0002727c) bg_active_tab_pane_g2_cp4

0xadf1,	// (0x0002f4b3) bg_active_tab_pane_g3_cp4

0xade8,	// (0x0002f4aa) bg_passive_tab_pane_g1_cp4

0x2bba,	// (0x0002727c) bg_passive_tab_pane_g2_cp4

0xadf1,	// (0x0002f4b3) bg_passive_tab_pane_g3_cp4

0x2c44,	// (0x00027306) bg_active_tab_pane_g1_cp5

0x2bba,	// (0x0002727c) bg_active_tab_pane_g2_cp5

0x2c4d,	// (0x0002730f) bg_active_tab_pane_g3_cp5

0x2c44,	// (0x00027306) bg_passive_tab_pane_g1_cp5

0x2bba,	// (0x0002727c) bg_passive_tab_pane_g2_cp5

0x2c4d,	// (0x0002730f) bg_passive_tab_pane_g3_cp5

0x5325,	// (0x000299e7) list_set_graphic_pane_ParamLimits

0x5325,	// (0x000299e7) list_set_graphic_pane

0xce5b,	// (0x0003151d) bg_set_opt_pane_cp4

0x2c6c,	// (0x0002732e) list_set_graphic_pane_g1_ParamLimits

0x2c6c,	// (0x0002732e) list_set_graphic_pane_g1

0x2c78,	// (0x0002733a) list_set_graphic_pane_g2_ParamLimits

0x2c78,	// (0x0002733a) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x00033df0) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x00033df0) list_set_graphic_pane_g

0x0009,

0xfab3,	// (0x00034175) volume_small_pane_cp_g

0x2c9c,	// (0x0002735e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2c9c,	// (0x0002735e) list_double2_large_graphic_pane_g1_cp2

0x2caa,	// (0x0002736c) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2caa,	// (0x0002736c) list_double2_large_graphic_pane_g2_cp2

0x2cbb,	// (0x0002737d) list_double2_large_graphic_pane_g3_cp2

0x2cc3,	// (0x00027385) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2cc3,	// (0x00027385) list_double2_large_graphic_pane_t1_cp2

0x2cd9,	// (0x0002739b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2cd9,	// (0x0002739b) list_double2_large_graphic_pane_t2_cp2

0x48ba,	// (0x00028f7c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x48ba,	// (0x00028f7c) list_double_large_graphic_pane_g1_cp2

0x48cd,	// (0x00028f8f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x48cd,	// (0x00028f8f) list_double_large_graphic_pane_g2_cp2

0x2e5a,	// (0x0002751c) list_double_large_graphic_pane_g3_cp2

0x48de,	// (0x00028fa0) list_double_large_graphic_pane_g4_cp

0x48e6,	// (0x00028fa8) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x48e6,	// (0x00028fa8) list_double_large_graphic_pane_t1_cp2

0x48fd,	// (0x00028fbf) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x48fd,	// (0x00028fbf) list_double_large_graphic_pane_t2_cp2

0x2d4a,	// (0x0002740c) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2d4a,	// (0x0002740c) list_double2_graphic_pane_g1_cp2

0x2d58,	// (0x0002741a) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2d58,	// (0x0002741a) list_double2_graphic_pane_g2_cp2

0x2d69,	// (0x0002742b) list_double2_graphic_pane_g3_cp2

0x2d73,	// (0x00027435) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2d73,	// (0x00027435) list_double2_graphic_pane_t1_cp2

0x2d89,	// (0x0002744b) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2d89,	// (0x0002744b) list_double2_graphic_pane_t2_cp2

0x2d9b,	// (0x0002745d) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2d9b,	// (0x0002745d) list_single_number_heading_pane_g1_cp2

0x2da7,	// (0x00027469) list_single_number_heading_pane_g2_cp2

0x2daf,	// (0x00027471) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2daf,	// (0x00027471) list_single_number_heading_pane_t1_cp2

0x2dc5,	// (0x00027487) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2dc5,	// (0x00027487) list_single_number_heading_pane_t2_cp2

0x2dd9,	// (0x0002749b) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2dd9,	// (0x0002749b) list_single_number_heading_pane_t3_cp2

0x2d9b,	// (0x0002745d) list_single_heading_pane_g1_cp2_ParamLimits

0x2d9b,	// (0x0002745d) list_single_heading_pane_g1_cp2

0x2da7,	// (0x00027469) list_single_heading_pane_g2_cp2

0x2daf,	// (0x00027471) list_single_heading_pane_t1_cp2_ParamLimits

0x2daf,	// (0x00027471) list_single_heading_pane_t1_cp2

0x46b4,	// (0x00028d76) list_single_heading_pane_t2_cp2_ParamLimits

0x46b4,	// (0x00028d76) list_single_heading_pane_t2_cp2

0x45fc,	// (0x00028cbe) list_double_graphic_pane_g1_cp2_ParamLimits

0x45fc,	// (0x00028cbe) list_double_graphic_pane_g1_cp2

0x4608,	// (0x00028cca) list_double_graphic_pane_g2_cp2_ParamLimits

0x4608,	// (0x00028cca) list_double_graphic_pane_g2_cp2

0x4617,	// (0x00028cd9) list_double_graphic_pane_g3_cp2

0x461f,	// (0x00028ce1) list_double_graphic_pane_t1_cp2_ParamLimits

0x461f,	// (0x00028ce1) list_double_graphic_pane_t1_cp2

0x4635,	// (0x00028cf7) list_double_graphic_pane_t2_cp2_ParamLimits

0x4635,	// (0x00028cf7) list_double_graphic_pane_t2_cp2

0x2e4e,	// (0x00027510) list_double_number_pane_g1_cp2_ParamLimits

0x2e4e,	// (0x00027510) list_double_number_pane_g1_cp2

0x2e5a,	// (0x0002751c) list_double_number_pane_g2_cp2

0x45c0,	// (0x00028c82) list_double_number_pane_t1_cp2_ParamLimits

0x45c0,	// (0x00028c82) list_double_number_pane_t1_cp2

0x45d4,	// (0x00028c96) list_double_number_pane_t2_cp2_ParamLimits

0x45d4,	// (0x00028c96) list_double_number_pane_t2_cp2

0x45ea,	// (0x00028cac) list_double_number_pane_t3_cp2_ParamLimits

0x45ea,	// (0x00028cac) list_double_number_pane_t3_cp2

0x44a9,	// (0x00028b6b) list_single_graphic_pane_g1_cp2_ParamLimits

0x44a9,	// (0x00028b6b) list_single_graphic_pane_g1_cp2

0x2eb4,	// (0x00027576) list_single_graphic_pane_g2_cp2_ParamLimits

0x2eb4,	// (0x00027576) list_single_graphic_pane_g2_cp2

0x2ec0,	// (0x00027582) list_single_graphic_pane_g3_cp2

0x447f,	// (0x00028b41) list_single_graphic_pane_t1_cp2_ParamLimits

0x447f,	// (0x00028b41) list_single_graphic_pane_t1_cp2

0x2eb4,	// (0x00027576) list_single_number_pane_g1_cp2_ParamLimits

0x2eb4,	// (0x00027576) list_single_number_pane_g1_cp2

0x2ec0,	// (0x00027582) list_single_number_pane_g2_cp2

0x447f,	// (0x00028b41) list_single_number_pane_t1_cp2_ParamLimits

0x447f,	// (0x00028b41) list_single_number_pane_t1_cp2

0x4495,	// (0x00028b57) list_single_number_pane_t2_cp2_ParamLimits

0x4495,	// (0x00028b57) list_single_number_pane_t2_cp2

0x2caa,	// (0x0002736c) list_double2_pane_g1_cp2_ParamLimits

0x2caa,	// (0x0002736c) list_double2_pane_g1_cp2

0x2cbb,	// (0x0002737d) list_double2_pane_g2_cp2

0x2e26,	// (0x000274e8) list_double2_pane_t1_cp2_ParamLimits

0x2e26,	// (0x000274e8) list_double2_pane_t1_cp2

0x2e3c,	// (0x000274fe) list_double2_pane_t2_cp2_ParamLimits

0x2e3c,	// (0x000274fe) list_double2_pane_t2_cp2

0x2e4e,	// (0x00027510) list_double_pane_g1_cp2_ParamLimits

0x2e4e,	// (0x00027510) list_double_pane_g1_cp2

0x2e5a,	// (0x0002751c) list_double_pane_g2_cp2

0x2e62,	// (0x00027524) list_double_pane_t1_cp2_ParamLimits

0x2e62,	// (0x00027524) list_double_pane_t1_cp2

0x2e78,	// (0x0002753a) list_double_pane_t2_cp2_ParamLimits

0x2e78,	// (0x0002753a) list_double_pane_t2_cp2

0x2ea4,	// (0x00027566) list_single_pane_cp2_g3

0x2eb4,	// (0x00027576) list_single_pane_g1_cp2_ParamLimits

0x2eb4,	// (0x00027576) list_single_pane_g1_cp2

0x2ec0,	// (0x00027582) list_single_pane_g2_cp2

0x2ec8,	// (0x0002758a) list_single_pane_t1_cp2_ParamLimits

0x2ec8,	// (0x0002758a) list_single_pane_t1_cp2

0x2ee0,	// (0x000275a2) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2ee0,	// (0x000275a2) list_single_large_graphic_pane_g1_cp2

0x2eee,	// (0x000275b0) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2eee,	// (0x000275b0) list_single_large_graphic_pane_g2_cp2

0x2efa,	// (0x000275bc) list_single_large_graphic_pane_g3_cp2

0x2f02,	// (0x000275c4) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2f02,	// (0x000275c4) list_single_large_graphic_pane_g4_cp1

0x2f1c,	// (0x000275de) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2f1c,	// (0x000275de) list_single_large_graphic_pane_t1_cp2

0x4449,	// (0x00028b0b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x4449,	// (0x00028b0b) list_single_graphic_heading_pane_g1_cp2

0x4416,	// (0x00028ad8) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x4416,	// (0x00028ad8) list_single_graphic_heading_pane_g4_cp2

0x2ec0,	// (0x00027582) list_single_graphic_heading_pane_g5_cp2

0x4455,	// (0x00028b17) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x4455,	// (0x00028b17) list_single_graphic_heading_pane_t1_cp2

0x446b,	// (0x00028b2d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x446b,	// (0x00028b2d) list_single_graphic_heading_pane_t2_cp2

0x440a,	// (0x00028acc) list_single_2graphic_pane_g1_cp2_ParamLimits

0x440a,	// (0x00028acc) list_single_2graphic_pane_g1_cp2

0x4416,	// (0x00028ad8) list_single_2graphic_pane_g2_cp2_ParamLimits

0x4416,	// (0x00028ad8) list_single_2graphic_pane_g2_cp2

0x2ec0,	// (0x00027582) list_single_2graphic_pane_g3_cp2

0x4427,	// (0x00028ae9) list_single_2graphic_pane_g4_cp2_ParamLimits

0x4427,	// (0x00028ae9) list_single_2graphic_pane_g4_cp2

0x4433,	// (0x00028af5) list_single_2graphic_pane_t1_cp2_ParamLimits

0x4433,	// (0x00028af5) list_single_2graphic_pane_t1_cp2

0xce51,	// (0x00031513) list_highlight_pane_g10_cp1

0x3fe2,	// (0x000286a4) list_highlight_pane_g1_cp1

0x3fea,	// (0x000286ac) list_highlight_pane_g2_cp1

0x3ff2,	// (0x000286b4) list_highlight_pane_g3_cp1

0x3ffa,	// (0x000286bc) list_highlight_pane_g4_cp1

0x4002,	// (0x000286c4) list_highlight_pane_g5_cp1

0x400a,	// (0x000286cc) list_highlight_pane_g6_cp1

0x4012,	// (0x000286d4) list_highlight_pane_g7_cp1

0x401a,	// (0x000286dc) list_highlight_pane_g8_cp1

0x4022,	// (0x000286e4) list_highlight_pane_g9_cp1

0xbd8a,	// (0x0003044c) form_field_slider_pane_t3

0xbd98,	// (0x0003045a) form_field_slider_pane_t4

0x3f1e,	// (0x000285e0) slider_form_pane_ParamLimits

0x3f1e,	// (0x000285e0) slider_form_pane

0xce5b,	// (0x0003151d) control_abbreviations

0xce5b,	// (0x0003151d) control_conventions

0xce5b,	// (0x0003151d) control_definitions

0xce5b,	// (0x0003151d) format_table_attribute

0x470a,	// (0x00028dcc) bg_popup_preview_window_pane_g9

0xce5b,	// (0x0003151d) format_table_data2

0xce5b,	// (0x0003151d) format_table_data3

0xce5b,	// (0x0003151d) format_table_data_example

0x0008,

0xce5b,	// (0x0003151d) intro_purpose

0xf8c5,	// (0x00033f87) bg_popup_preview_window_pane_g

0xce5b,	// (0x0003151d) texts_category

0xce5b,	// (0x0003151d) texts_graphics

0x2f32,	// (0x000275f4) text_digital

0x2f41,	// (0x00027603) text_primary

0x2f50,	// (0x00027612) text_primary_small

0x2f5f,	// (0x00027621) text_secondary

0x2f6e,	// (0x00027630) text_title

0x4e4e,	// (0x00029510) bg_passive_tab_pane_g1_cp3_srt

0x2bba,	// (0x0002727c) bg_passive_tab_pane_g2_cp3_srt

0x4e57,	// (0x00029519) bg_passive_tab_pane_g3_cp3_srt

0xcea9,	// (0x0003156b) bg_active_tab_pane_cp3_srt_ParamLimits

0xcea9,	// (0x0003156b) bg_active_tab_pane_cp3_srt

0x4e60,	// (0x00029522) tabs_4_active_pane_srt_g1

0xc309,	// (0x000309cb) tabs_4_active_pane_srt_t1_ParamLimits

0xc309,	// (0x000309cb) tabs_4_active_pane_srt_t1

0x4e4e,	// (0x00029510) bg_active_tab_pane_g1_cp3_copy1

0x2bba,	// (0x0002727c) bg_active_tab_pane_g2_cp3_copy1

0x4e57,	// (0x00029519) bg_active_tab_pane_g3_cp3_copy1

0xceb7,	// (0x00031579) tabs_2_long_active_pane_srt_ParamLimits

0xceb7,	// (0x00031579) tabs_2_long_active_pane_srt

0xceb7,	// (0x00031579) tabs_2_long_passive_pane_srt_ParamLimits

0xceb7,	// (0x00031579) tabs_2_long_passive_pane_srt

0x32a4,	// (0x00027966) bg_passive_tab_pane_cp4_srt_ParamLimits

0x32a4,	// (0x00027966) bg_passive_tab_pane_cp4_srt

0x4b44,	// (0x00029206) bg_passive_tab_pane_g1_cp4_srt

0x2bba,	// (0x0002727c) bg_passive_tab_pane_g2_cp4_srt

0x4b4d,	// (0x0002920f) bg_passive_tab_pane_g3_cp4_srt

0xceb7,	// (0x00031579) bg_active_tab_pane_cp4_srt_ParamLimits

0xceb7,	// (0x00031579) bg_active_tab_pane_cp4_srt

0xc0d1,	// (0x00030793) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc0d1,	// (0x00030793) tabs_2_long_active_pane_srt_t1

0x4b44,	// (0x00029206) bg_active_tab_pane_g1_cp4_srt

0x2bba,	// (0x0002727c) bg_active_tab_pane_g2_cp4_srt

0x4b4d,	// (0x0002920f) bg_active_tab_pane_g3_cp4_srt

0xcea9,	// (0x0003156b) tabs_3_long_active_pane_srt_ParamLimits

0xcea9,	// (0x0003156b) tabs_3_long_active_pane_srt

0xcea9,	// (0x0003156b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xcea9,	// (0x0003156b) tabs_3_long_passive_pane_cp_srt

0xcea9,	// (0x0003156b) tabs_3_long_passive_pane_srt_ParamLimits

0xcea9,	// (0x0003156b) tabs_3_long_passive_pane_srt

0x32a4,	// (0x00027966) bg_passive_tab_pane_cp5_srt_ParamLimits

0x32a4,	// (0x00027966) bg_passive_tab_pane_cp5_srt

0x2c44,	// (0x00027306) bg_passive_tab_pane_g1_cp5_srt

0x2bba,	// (0x0002727c) bg_passive_tab_pane_g2_cp5_srt

0x2c4d,	// (0x0002730f) bg_passive_tab_pane_g3_cp5_srt

0xceb7,	// (0x00031579) bg_active_tab_pane_cp5_srt_ParamLimits

0xceb7,	// (0x00031579) bg_active_tab_pane_cp5_srt

0xc0bb,	// (0x0003077d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc0bb,	// (0x0003077d) tabs_3_long_active_pane_srt_t1

0x2c44,	// (0x00027306) bg_active_tab_pane_g1_cp5_srt

0x2bba,	// (0x0002727c) bg_active_tab_pane_g2_cp5_srt

0x2c4d,	// (0x0002730f) bg_active_tab_pane_g3_cp5_srt

0x4b24,	// (0x000291e6) navi_text_pane_srt_t1

0x4b1c,	// (0x000291de) navi_icon_pane_srt_g1

0x3146,	// (0x00027808) midp_editing_number_pane_srt

0x2f7d,	// (0x0002763f) midp_ticker_pane_srt

0x314e,	// (0x00027810) midp_ticker_pane_srt_g1

0x3156,	// (0x00027818) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x00033e0f) midp_ticker_pane_srt_g

0x315e,	// (0x00027820) midp_ticker_pane_srt_t1

0x4b0d,	// (0x000291cf) midp_editing_number_pane_t1_copy1

0xae2c,	// (0x0002f4ee) listscroll_midp_pane

0xae2c,	// (0x0002f4ee) midp_form_pane

0x2ff4,	// (0x000276b6) midp_info_popup_window_ParamLimits

0x2ff4,	// (0x000276b6) midp_info_popup_window

0x0397,	// (0x00024a59) bg_popup_sub_pane_cp50_ParamLimits

0x0397,	// (0x00024a59) bg_popup_sub_pane_cp50

0x3c04,	// (0x000282c6) listscroll_midp_info_pane_ParamLimits

0x3c04,	// (0x000282c6) listscroll_midp_info_pane

0x3be4,	// (0x000282a6) listscroll_form_midp_pane_ParamLimits

0x3be4,	// (0x000282a6) listscroll_form_midp_pane

0x3bf0,	// (0x000282b2) scroll_bar_cp050

0x3be4,	// (0x000282a6) list_midp_pane

0x590e,	// (0x00029fd0) signal_pane_g2_cp

0x3afe,	// (0x000281c0) listscroll_midp_info_pane_t1_ParamLimits

0x3afe,	// (0x000281c0) listscroll_midp_info_pane_t1

0x3b16,	// (0x000281d8) listscroll_midp_info_pane_t2_ParamLimits

0x3b16,	// (0x000281d8) listscroll_midp_info_pane_t2

0x3b54,	// (0x00028216) listscroll_midp_info_pane_t3_ParamLimits

0x3b54,	// (0x00028216) listscroll_midp_info_pane_t3

0x3b8e,	// (0x00028250) listscroll_midp_info_pane_t4_ParamLimits

0x3b8e,	// (0x00028250) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x00033ec2) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x00033ec2) listscroll_midp_info_pane_t

0x03fa,	// (0x00024abc) scroll_pane_cp21

0x3a98,	// (0x0002815a) form_midp_field_choice_group_pane

0x3aa1,	// (0x00028163) form_midp_field_text_pane

0x3ae4,	// (0x000281a6) form_midp_field_time_pane

0x3aec,	// (0x000281ae) form_midp_gauge_slider_pane

0x3af5,	// (0x000281b7) form_midp_gauge_wait_pane

0xce5b,	// (0x0003151d) form_midp_image_pane

0xa312,	// (0x0002e9d4) list_single_midp_pane_ParamLimits

0xa312,	// (0x0002e9d4) list_single_midp_pane

0xbd62,	// (0x00030424) form_midp_field_text_pane_t1

0x384e,	// (0x00027f10) input_focus_pane_cp050

0x3a87,	// (0x00028149) list_midp_form_text_pane

0x3a2b,	// (0x000280ed) form_midp_field_choice_group_pane_t1

0x3a39,	// (0x000280fb) input_focus_pane_cp051

0x3a4d,	// (0x0002810f) list_midp_choice_pane

0xce5b,	// (0x0003151d) status_idle_pane

0x3a0f,	// (0x000280d1) form_midp_field_time_pane_t1

0xce51,	// (0x00031513) wait_anim_pane_g2_copy1

0x3a1d,	// (0x000280df) form_midp_field_time_pane_t2

0x0001,

0x30a4,	// (0x00027766) aid_navinavi_width_2_pane

0xf7fb,	// (0x00033ebd) form_midp_field_time_pane_t

0xce5b,	// (0x0003151d) input_focus_pane_cp052

0xce5b,	// (0x0003151d) bg_input_focus_pane_cp040

0x39cf,	// (0x00028091) form_midp_gauge_slider_pane_t1

0x39dd,	// (0x0002809f) form_midp_gauge_slider_pane_t2

0xbd46,	// (0x00030408) form_midp_gauge_slider_pane_t3

0xbd54,	// (0x00030416) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x00033eb4) form_midp_gauge_slider_pane_t

0x3a07,	// (0x000280c9) form_midp_slider_pane

0xceb7,	// (0x00031579) bg_input_focus_pane_cp041_ParamLimits

0xceb7,	// (0x00031579) bg_input_focus_pane_cp041

0x399c,	// (0x0002805e) form_midp_gauge_wait_pane_t1_ParamLimits

0x399c,	// (0x0002805e) form_midp_gauge_wait_pane_t1

0x39ae,	// (0x00028070) form_midp_gauge_wait_pane_t2_ParamLimits

0x39ae,	// (0x00028070) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x00033eaf) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x00033eaf) form_midp_gauge_wait_pane_t

0x39c0,	// (0x00028082) form_midp_wait_pane_ParamLimits

0x39c0,	// (0x00028082) form_midp_wait_pane

0x3964,	// (0x00028026) form_midp_image_pane_g1

0x396d,	// (0x0002802f) form_midp_image_pane_t1

0x397c,	// (0x0002803e) form_midp_image_pane_t2

0x398b,	// (0x0002804d) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x00033ea8) form_midp_image_pane_t

0x395b,	// (0x0002801d) list_single_midp_pane_g1

0xedb4,	// (0x00033476) list_single_midp_pane_t1

0xbd2f,	// (0x000303f1) list_midp_form_item_pane_ParamLimits

0xbd2f,	// (0x000303f1) list_midp_form_item_pane

0x304c,	// (0x0002770e) list_midp_form_item_pane_t1

0x305b,	// (0x0002771d) midp_ticker_pane_g1

0x3067,	// (0x00027729) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x00033df5) midp_ticker_pane_g

0xaed0,	// (0x0002f592) midp_ticker_pane_t1

0xc25a,	// (0x0003091c) midp_editing_number_pane_t1

0x4d58,	// (0x0002941a) midp_editing_number_pane

0x4d67,	// (0x00029429) midp_ticker_pane

0x4afd,	// (0x000291bf) ai_message_heading_pane

0xce5b,	// (0x0003151d) bg_popup_window_pane_cp14

0x4b05,	// (0x000291c7) listscroll_ai_message_pane

0x4a83,	// (0x00029145) ai_message_heading_pane_g1_ParamLimits

0x4a83,	// (0x00029145) ai_message_heading_pane_g1

0x4a8f,	// (0x00029151) ai_message_heading_pane_g2_ParamLimits

0x4a8f,	// (0x00029151) ai_message_heading_pane_g2

0x4a9d,	// (0x0002915f) ai_message_heading_pane_g3_ParamLimits

0x4a9d,	// (0x0002915f) ai_message_heading_pane_g3

0x4aa9,	// (0x0002916b) ai_message_heading_pane_g4_ParamLimits

0x4aa9,	// (0x0002916b) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x00033fe9) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x00033fe9) ai_message_heading_pane_g

0x4ab5,	// (0x00029177) ai_message_heading_pane_t1_ParamLimits

0x4ab5,	// (0x00029177) ai_message_heading_pane_t1

0x4acf,	// (0x00029191) ai_message_heading_pane_t2_ParamLimits

0x4acf,	// (0x00029191) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x00033ff2) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x00033ff2) ai_message_heading_pane_t

0x4ae3,	// (0x000291a5) bg_popup_heading_pane_cp1_ParamLimits

0x4ae3,	// (0x000291a5) bg_popup_heading_pane_cp1

0x4a71,	// (0x00029133) list_ai_message_pane_ParamLimits

0x4a71,	// (0x00029133) list_ai_message_pane

0x03fa,	// (0x00024abc) scroll_pane_cp10

0x4a0d,	// (0x000290cf) list_ai_message_pane_g1

0x4a15,	// (0x000290d7) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x00033fc6) list_ai_message_pane_g

0x4a1d,	// (0x000290df) list_ai_message_pane_t1_ParamLimits

0x4a1d,	// (0x000290df) list_ai_message_pane_t1

0x4a32,	// (0x000290f4) list_ai_message_pane_t2_ParamLimits

0x4a32,	// (0x000290f4) list_ai_message_pane_t2

0x4a47,	// (0x00029109) list_ai_message_pane_t3_ParamLimits

0x4a47,	// (0x00029109) list_ai_message_pane_t3

0x4a5c,	// (0x0002911e) list_ai_message_pane_t4_ParamLimits

0x4a5c,	// (0x0002911e) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x00033fcb) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x00033fcb) list_ai_message_pane_t

0xc0a1,	// (0x00030763) cell_ai_soft_ind_pane_ParamLimits

0xc0a1,	// (0x00030763) cell_ai_soft_ind_pane

0x3085,	// (0x00027747) cell_ai_soft_ind_pane_g1_ParamLimits

0x3085,	// (0x00027747) cell_ai_soft_ind_pane_g1

0xce5b,	// (0x0003151d) grid_highlight_cp1

0x3092,	// (0x00027754) text_secondary_cp56_ParamLimits

0x3092,	// (0x00027754) text_secondary_cp56

0x49cb,	// (0x0002908d) example_general_pane_ParamLimits

0x49cb,	// (0x0002908d) example_general_pane

0x49d7,	// (0x00029099) example_parent_pane_g1_ParamLimits

0x49d7,	// (0x00029099) example_parent_pane_g1

0x49e3,	// (0x000290a5) example_parent_pane_t1_ParamLimits

0x49e3,	// (0x000290a5) example_parent_pane_t1

0xb556,	// (0x0002fc18) popup_preview_text_window_ParamLimits

0xb556,	// (0x0002fc18) popup_preview_text_window

0x2eac,	// (0x0002756e) list_single_pane_cp2_g4

0xd0b8,	// (0x0003177a) bg_popup_preview_window_pane_ParamLimits

0xd0b8,	// (0x0003177a) bg_popup_preview_window_pane

0x4714,	// (0x00028dd6) popup_preview_text_window_t1_ParamLimits

0x4714,	// (0x00028dd6) popup_preview_text_window_t1

0x4732,	// (0x00028df4) popup_preview_text_window_t2_ParamLimits

0x4732,	// (0x00028df4) popup_preview_text_window_t2

0x477b,	// (0x00028e3d) popup_preview_text_window_t3_ParamLimits

0x477b,	// (0x00028e3d) popup_preview_text_window_t3

0x47c0,	// (0x00028e82) popup_preview_text_window_t4_ParamLimits

0x47c0,	// (0x00028e82) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x00033f9a) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x00033f9a) popup_preview_text_window_t

0x483e,	// (0x00028f00) scroll_pane_cp11

0x37da,	// (0x00027e9c) bg_popup_preview_window_pane_g1

0x46c8,	// (0x00028d8a) bg_popup_preview_window_pane_g2

0x46d2,	// (0x00028d94) bg_popup_preview_window_pane_g3

0x46dc,	// (0x00028d9e) bg_popup_preview_window_pane_g4

0x46e6,	// (0x00028da8) bg_popup_preview_window_pane_g5

0x46f0,	// (0x00028db2) bg_popup_preview_window_pane_g6

0x46f8,	// (0x00028dba) bg_popup_preview_window_pane_g7

0x4700,	// (0x00028dc2) bg_popup_preview_window_pane_g8

0xf2fd,	// (0x000339bf) aid_popup_width_pane

0xb4c6,	// (0x0002fb88) popup_midp_note_alarm_window_ParamLimits

0xb4c6,	// (0x0002fb88) popup_midp_note_alarm_window

0xd4ed,	// (0x00031baf) data_form_pane_ParamLimits

0xa18a,	// (0x0002e84c) form_field_data_pane_g1

0xa194,	// (0x0002e856) form_field_data_pane_t1_ParamLimits

0xd4f9,	// (0x00031bbb) input_focus_pane_ParamLimits

0xebd5,	// (0x00033297) data_form_wide_pane_ParamLimits

0xebe6,	// (0x000332a8) form_field_data_wide_pane_g1

0xebf2,	// (0x000332b4) form_field_data_wide_pane_t1_ParamLimits

0xd274,	// (0x00031936) input_focus_pane_cp6_ParamLimits

0xab74,	// (0x0002f236) input_popup_find_pane_g1_ParamLimits

0xab74,	// (0x0002f236) input_popup_find_pane_g1

0x072b,	// (0x00024ded) aid_navi_side_left_pane

0x0740,	// (0x00024e02) aid_navi_side_right_pane

0x40dd,	// (0x0002879f) bg_popup_window_pane_cp30_ParamLimits

0x40dd,	// (0x0002879f) bg_popup_window_pane_cp30

0x4157,	// (0x00028819) popup_midp_note_alarm_window_g1_ParamLimits

0x4157,	// (0x00028819) popup_midp_note_alarm_window_g1

0x4187,	// (0x00028849) popup_midp_note_alarm_window_t1_ParamLimits

0x4187,	// (0x00028849) popup_midp_note_alarm_window_t1

0x4228,	// (0x000288ea) popup_midp_note_alarm_window_t2_ParamLimits

0x4228,	// (0x000288ea) popup_midp_note_alarm_window_t2

0x42d6,	// (0x00028998) popup_midp_note_alarm_window_t3_ParamLimits

0x42d6,	// (0x00028998) popup_midp_note_alarm_window_t3

0x4308,	// (0x000289ca) popup_midp_note_alarm_window_t4_ParamLimits

0x4308,	// (0x000289ca) popup_midp_note_alarm_window_t4

0x432e,	// (0x000289f0) popup_midp_note_alarm_window_t5_ParamLimits

0x432e,	// (0x000289f0) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x00033f37) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x00033f37) popup_midp_note_alarm_window_t

0x43da,	// (0x00028a9c) wait_bar_pane_cp1_ParamLimits

0x43da,	// (0x00028a9c) wait_bar_pane_cp1

0xce5b,	// (0x0003151d) wait_anim_pane_copy1

0xce5b,	// (0x0003151d) wait_border_pane_copy1

0x3dc2,	// (0x00028484) wait_border_pane_g1_copy1

0xec0c,	// (0x000332ce) form_field_popup_pane_g1

0xa1ae,	// (0x0002e870) form_field_popup_pane_t1_ParamLimits

0xd4f9,	// (0x00031bbb) input_focus_pane_cp7_ParamLimits

0xd527,	// (0x00031be9) list_form_pane_ParamLimits

0xec14,	// (0x000332d6) form_field_popup_wide_pane_g1

0xec1c,	// (0x000332de) form_field_popup_wide_pane_t1_ParamLimits

0xd4f9,	// (0x00031bbb) input_focus_pane_cp8_ParamLimits

0xd533,	// (0x00031bf5) list_form_wide_pane_ParamLimits

0x4ee9,	// (0x000295ab) aid_size_cell_graphic_pane

0xa22d,	// (0x0002e8ef) data_form_pane_t1_ParamLimits

0xa341,	// (0x0002ea03) data_form_wide_pane_t1_ParamLimits

0xb958,	// (0x0003001a) bg_status_flat_pane

0xa7bd,	// (0x0002ee7f) title_pane_t1_ParamLimits

0xce71,	// (0x00031533) title_pane_t2_ParamLimits

0xce97,	// (0x00031559) title_pane_t3_ParamLimits

0xf532,	// (0x00033bf4) title_pane_t_ParamLimits

0xac9f,	// (0x0002f361) level_1_signal_ParamLimits

0xacb1,	// (0x0002f373) level_2_signal_ParamLimits

0xacc4,	// (0x0002f386) level_3_signal_ParamLimits

0xacd7,	// (0x0002f399) level_4_signal_ParamLimits

0xacea,	// (0x0002f3ac) level_5_signal_ParamLimits

0xacfd,	// (0x0002f3bf) level_6_signal_ParamLimits

0xad10,	// (0x0002f3d2) level_7_signal_ParamLimits

0xac9f,	// (0x0002f361) level_1_battery_ParamLimits

0xacb1,	// (0x0002f373) level_2_battery_ParamLimits

0xacc4,	// (0x0002f386) level_3_battery_ParamLimits

0xacd7,	// (0x0002f399) level_4_battery_ParamLimits

0xacea,	// (0x0002f3ac) level_5_battery_ParamLimits

0xacfd,	// (0x0002f3bf) level_6_battery_ParamLimits

0xad10,	// (0x0002f3d2) level_7_battery_ParamLimits

0x3fe2,	// (0x000286a4) bg_status_flat_pane_g1

0x3fea,	// (0x000286ac) bg_status_flat_pane_g2

0x3ff2,	// (0x000286b4) bg_status_flat_pane_g3

0x3ffa,	// (0x000286bc) bg_status_flat_pane_g4

0x4002,	// (0x000286c4) bg_status_flat_pane_g5

0x400a,	// (0x000286cc) bg_status_flat_pane_g6

0x4012,	// (0x000286d4) bg_status_flat_pane_g7

0xa851,	// (0x0002ef13) tabs_3_active_pane_t1_ParamLimits

0xa851,	// (0x0002ef13) tabs_3_passive_pane_t1_ParamLimits

0xa86b,	// (0x0002ef2d) tabs_4_active_pane_t1_ParamLimits

0xa86b,	// (0x0002ef2d) tabs_4_1_passive_pane_t1_ParamLimits

0xab8a,	// (0x0002f24c) tabs_2_active_pane_t1_ParamLimits

0xab8a,	// (0x0002f24c) tabs_2_passive_pane_t1_ParamLimits

0xceb7,	// (0x00031579) bg_active_tab_pane_cp4_ParamLimits

0xab9c,	// (0x0002f25e) tabs_2_long_active_pane_t1_ParamLimits

0x32a4,	// (0x00027966) bg_passive_tab_pane_cp4_ParamLimits

0x17db,	// (0x00025e9d) list_single_midp_graphic_pane_t1_ParamLimits

0xceb7,	// (0x00031579) bg_active_tab_pane_cp5_ParamLimits

0xabaf,	// (0x0002f271) tabs_3_long_active_pane_t1_ParamLimits

0x32a4,	// (0x00027966) bg_passive_tab_pane_cp5_ParamLimits

0x17db,	// (0x00025e9d) list_single_midp_graphic_pane_t1

0xb958,	// (0x0003001a) bg_status_flat_pane_ParamLimits

0x345e,	// (0x00027b20) indicator_pane_cp2_ParamLimits

0x345e,	// (0x00027b20) indicator_pane_cp2

0xbaee,	// (0x000301b0) navi_pane_srt_ParamLimits

0xbaee,	// (0x000301b0) navi_pane_srt

0x35c5,	// (0x00027c87) popup_clock_digital_analogue_window_cp1

0xcefb,	// (0x000315bd) indicator_pane_t1

0x2f7d,	// (0x0002763f) copy_highlight_pane

0x2f7d,	// (0x0002763f) cursor_graphics_pane

0x2f7d,	// (0x0002763f) graphic_within_text_pane

0x2f7d,	// (0x0002763f) link_highlight_pane

0x4801,	// (0x00028ec3) popup_preview_text_window_t5_ParamLimits

0x4801,	// (0x00028ec3) popup_preview_text_window_t5

0x30ae,	// (0x00027770) cursor_digital_pane

0x30ae,	// (0x00027770) cursor_primary_pane

0x30bf,	// (0x00027781) cursor_primary_small_pane

0x30c7,	// (0x00027789) cursor_secondary_pane

0x30cf,	// (0x00027791) cursor_title_pane

0x30ae,	// (0x00027770) link_highlight_digital_pane

0x30b6,	// (0x00027778) link_highlight_primary_pane

0x30bf,	// (0x00027781) link_highlight_primary_small_pane

0x30c7,	// (0x00027789) link_highlight_secondary_pane

0x30cf,	// (0x00027791) link_highlight_title_pane

0x30ae,	// (0x00027770) copy_highlight_digital_pane

0x30ae,	// (0x00027770) copy_highlight_primary_pane

0x30bf,	// (0x00027781) copy_highlight_primary_small_pane

0x30c7,	// (0x00027789) copy_highlight_secondary_pane

0x30cf,	// (0x00027791) copy_highlight_title_pane

0x30c7,	// (0x00027789) graphic_text_digital_pane

0x4080,	// (0x00028742) graphic_text_primary_pane

0x4089,	// (0x0002874b) graphic_text_primary_small_pane

0x30bf,	// (0x00027781) graphic_text_secondary_pane

0x30ae,	// (0x00027770) graphic_text_title_pane

0xaee2,	// (0x0002f5a4) cursor_primary_pane_g1

0x4072,	// (0x00028734) cursor_text_primary_t1

0xbdba,	// (0x0003047c) cursor_primary_small_pane_g1

0x4064,	// (0x00028726) cursor_text_primary_small_t1

0xbdb0,	// (0x00030472) cursor_primary_small_pane_g1_copy1

0x404c,	// (0x0002870e) cursor_text_primary_small_t1_copy1

0x402a,	// (0x000286ec) cursor_text_title_t1

0xbda6,	// (0x00030468) cursor_title_pane_g1

0xaee2,	// (0x0002f5a4) cursor_digital_pane_g1

0x30e1,	// (0x000277a3) cursor_text_digital_t1

0x30ef,	// (0x000277b1) link_highlight_primary_pane_g1

0x3fd3,	// (0x00028695) link_highlight_primary_pane_t1

0x30ef,	// (0x000277b1) link_highlight_primary_small_pane_g1

0x30f7,	// (0x000277b9) link_highlight_primary_small_pane_t1

0x3106,	// (0x000277c8) link_highlight_secondary_pane_g1

0x310e,	// (0x000277d0) link_highlight_secondary_pane_t1

0x3f47,	// (0x00028609) link_highlight_title_pane_g1

0x3f4f,	// (0x00028611) link_highlight_title_pane_t1

0x3f30,	// (0x000285f2) link_highlight_digital_pane_g1

0x3f38,	// (0x000285fa) link_highlight_digital_pane_t1

0x3df8,	// (0x000284ba) copy_highlight_primary_pane_g1

0x3e0f,	// (0x000284d1) copy_highlight_primary_pane_t1

0x3df8,	// (0x000284ba) copy_highlight_primary_small_pane_g1

0x3e00,	// (0x000284c2) copy_highlight_primary_small_pane_t1

0x311d,	// (0x000277df) copy_highlight_secondary_pane_g1

0x3125,	// (0x000277e7) copy_highlight_secondary_pane_t1

0x3de1,	// (0x000284a3) copy_highlight_title_pane_g1

0x3de9,	// (0x000284ab) copy_highlight_title_pane_t1

0x3df8,	// (0x000284ba) copy_highlight_digital_pane_g1

0x50bb,	// (0x0002977d) copy_highlight_digital_pane_t1

0x500f,	// (0x000296d1) graphic_text_primary_pane_g1

0x509f,	// (0x00029761) graphic_text_primary_pane_t1

0x50ad,	// (0x0002976f) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x00034066) graphic_text_primary_pane_t

0x507b,	// (0x0002973d) graphic_text_primary_small_pane_g1

0x5083,	// (0x00029745) graphic_text_primary_small_pane_t1

0x5091,	// (0x00029753) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x00034061) graphic_text_primary_small_pane_t

0x5057,	// (0x00029719) graphic_text_secondary_pane_g1

0x505f,	// (0x00029721) graphic_text_secondary_pane_t1

0x506d,	// (0x0002972f) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x0003405c) graphic_text_secondary_pane_t

0x5033,	// (0x000296f5) graphic_text_title_pane_g1

0x503b,	// (0x000296fd) graphic_text_title_pane_t1

0x5049,	// (0x0002970b) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x00034057) graphic_text_title_pane_t

0x500f,	// (0x000296d1) graphic_text_digital_pane_g1

0x5017,	// (0x000296d9) graphic_text_digital_pane_t1

0x5025,	// (0x000296e7) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x00034052) graphic_text_digital_pane_t

0xceb7,	// (0x00031579) navi_icon_pane_srt_ParamLimits

0xceb7,	// (0x00031579) navi_icon_pane_srt

0xce5b,	// (0x0003151d) navi_midp_pane_srt

0xce5b,	// (0x0003151d) navi_navi_pane_srt

0xceb7,	// (0x00031579) navi_text_pane_srt_ParamLimits

0xceb7,	// (0x00031579) navi_text_pane_srt

0x4fda,	// (0x0002969c) navi_navi_icon_text_pane_srt

0x4fe2,	// (0x000296a4) navi_navi_pane_srt_g1_ParamLimits

0x4fe2,	// (0x000296a4) navi_navi_pane_srt_g1

0x4ff4,	// (0x000296b6) navi_navi_pane_srt_g2_ParamLimits

0x4ff4,	// (0x000296b6) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x0003404d) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x0003404d) navi_navi_pane_srt_g

0x5006,	// (0x000296c8) navi_navi_tabs_pane_srt

0x4fda,	// (0x0002969c) navi_navi_text_pane_srt

0x4fda,	// (0x0002969c) navi_navi_volume_pane_srt

0x4fcb,	// (0x0002968d) navi_navi_text_pane_srt_t1

0x1b77,	// (0x00026239) navi_navi_volume_pane_srt_g1

0x1b7f,	// (0x00026241) volume_small_pane_srt_ParamLimits

0x1b7f,	// (0x00026241) volume_small_pane_srt

0x0f19,	// (0x000255db) volume_small_pane_srt_g1_ParamLimits

0x0f19,	// (0x000255db) volume_small_pane_srt_g1

0x0f29,	// (0x000255eb) volume_small_pane_srt_g2_ParamLimits

0x0f29,	// (0x000255eb) volume_small_pane_srt_g2

0x0f3a,	// (0x000255fc) volume_small_pane_srt_g3_ParamLimits

0x0f3a,	// (0x000255fc) volume_small_pane_srt_g3

0x0f4b,	// (0x0002560d) volume_small_pane_srt_g4_ParamLimits

0x0f4b,	// (0x0002560d) volume_small_pane_srt_g4

0x0f5c,	// (0x0002561e) volume_small_pane_srt_g5_ParamLimits

0x0f5c,	// (0x0002561e) volume_small_pane_srt_g5

0x0f6d,	// (0x0002562f) volume_small_pane_srt_g6_ParamLimits

0x0f6d,	// (0x0002562f) volume_small_pane_srt_g6

0x0f7e,	// (0x00025640) volume_small_pane_srt_g7_ParamLimits

0x0f7e,	// (0x00025640) volume_small_pane_srt_g7

0x0f8f,	// (0x00025651) volume_small_pane_srt_g8_ParamLimits

0x0f8f,	// (0x00025651) volume_small_pane_srt_g8

0x0fa0,	// (0x00025662) volume_small_pane_srt_g9_ParamLimits

0x0fa0,	// (0x00025662) volume_small_pane_srt_g9

0x0fb1,	// (0x00025673) volume_small_pane_srt_g10_ParamLimits

0x0fb1,	// (0x00025673) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x00033dfa) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x00033dfa) volume_small_pane_srt_g

0xd16d,	// (0x0003182f) query_popup_data_pane_cp2

0x4fb1,	// (0x00029673) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4fb1,	// (0x00029673) navi_navi_icon_text_pane_srt_t1

0x4080,	// (0x00028742) navi_tabs_2_long_pane_srt

0x4080,	// (0x00028742) navi_tabs_2_pane_srt

0x4080,	// (0x00028742) navi_tabs_3_long_pane_srt

0x4080,	// (0x00028742) navi_tabs_3_pane_srt

0x4080,	// (0x00028742) navi_tabs_4_pane_srt

0x1b57,	// (0x00026219) tabs_2_active_pane_srt_ParamLimits

0x1b57,	// (0x00026219) tabs_2_active_pane_srt

0x1b67,	// (0x00026229) tabs_2_passive_pane_srt_ParamLimits

0x1b67,	// (0x00026229) tabs_2_passive_pane_srt

0x384e,	// (0x00027f10) bg_passive_tab_pane_cp1_srt_ParamLimits

0x384e,	// (0x00027f10) bg_passive_tab_pane_cp1_srt

0x4f7d,	// (0x0002963f) bg_passive_tab_pane_g1_cp1_srt

0x2bba,	// (0x0002727c) bg_passive_tab_pane_g2_cp1_srt

0x4f86,	// (0x00029648) bg_passive_tab_pane_g3_cp1_srt

0xcea9,	// (0x0003156b) bg_active_tab_pane_cp1_srt_ParamLimits

0xcea9,	// (0x0003156b) bg_active_tab_pane_cp1_srt

0x4f8f,	// (0x00029651) tabs_2_active_pane_srt_g1

0xc391,	// (0x00030a53) tabs_2_active_pane_srt_t1_ParamLimits

0xc391,	// (0x00030a53) tabs_2_active_pane_srt_t1

0x4f7d,	// (0x0002963f) bg_active_tab_pane_g1_cp1_srt

0x2bba,	// (0x0002727c) bg_active_tab_pane_g2_cp1_srt

0x4f86,	// (0x00029648) bg_active_tab_pane_g3_cp1_srt

0x1b24,	// (0x000261e6) tabs_3_active_pane_srt_ParamLimits

0x1b24,	// (0x000261e6) tabs_3_active_pane_srt

0x1b35,	// (0x000261f7) tabs_3_passive_pane_cp_srt_ParamLimits

0x1b35,	// (0x000261f7) tabs_3_passive_pane_cp_srt

0x1b46,	// (0x00026208) tabs_3_passive_pane_srt_ParamLimits

0x1b46,	// (0x00026208) tabs_3_passive_pane_srt

0x384e,	// (0x00027f10) bg_passive_tab_pane_cp2_srt_ParamLimits

0x384e,	// (0x00027f10) bg_passive_tab_pane_cp2_srt

0x3134,	// (0x000277f6) bg_passive_tab_pane_g1_cp2_srt

0x2bba,	// (0x0002727c) bg_passive_tab_pane_g2_cp2_srt

0x313d,	// (0x000277ff) bg_passive_tab_pane_g3_cp2_srt

0xcea9,	// (0x0003156b) bg_active_tab_pane_cp2_srt_ParamLimits

0xcea9,	// (0x0003156b) bg_active_tab_pane_cp2_srt

0x4f63,	// (0x00029625) tabs_3_active_pane_srt_g1

0xc37b,	// (0x00030a3d) tabs_3_active_pane_srt_t1_ParamLimits

0xc37b,	// (0x00030a3d) tabs_3_active_pane_srt_t1

0x3134,	// (0x000277f6) bg_active_tab_pane_g1_cp2_srt

0x2bba,	// (0x0002727c) bg_active_tab_pane_g2_cp2_srt

0x313d,	// (0x000277ff) bg_active_tab_pane_g3_cp2_srt

0x1adc,	// (0x0002619e) tabs_4_active_pane_srt_ParamLimits

0x1adc,	// (0x0002619e) tabs_4_active_pane_srt

0x1aee,	// (0x000261b0) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1aee,	// (0x000261b0) tabs_4_passive_pane_cp2_srt

0x1130,	// (0x000257f2) aid_size_cell_toolbar

0x4bb7,	// (0x00029279) main_idle_act_pane_ParamLimits

0x12f9,	// (0x000259bb) popup_large_graphic_colour_window_ParamLimits

0xb81a,	// (0x0002fedc) popup_toolbar_window_ParamLimits

0xb81a,	// (0x0002fedc) popup_toolbar_window

0x4da0,	// (0x00029462) list_single_graphic_2heading_pane_ParamLimits

0x4da0,	// (0x00029462) list_single_graphic_2heading_pane

0x07b9,	// (0x00024e7b) aid_size_cell_apps_grid_lsc_pane

0x07cb,	// (0x00024e8d) aid_size_cell_apps_grid_prt_pane

0x32a4,	// (0x00027966) bg_wml_button_pane_cp1_ParamLimits

0x32a4,	// (0x00027966) bg_wml_button_pane_cp1

0xbd62,	// (0x00030424) form_midp_field_text_pane_t1_ParamLimits

0x384e,	// (0x00027f10) input_focus_pane_cp050_ParamLimits

0x3a87,	// (0x00028149) list_midp_form_text_pane_ParamLimits

0x3a39,	// (0x000280fb) input_focus_pane_cp051_ParamLimits

0x3a4d,	// (0x0002810f) list_midp_choice_pane_ParamLimits

0x3907,	// (0x00027fc9) list_single_2graphic_pane_cp3_ParamLimits

0x3907,	// (0x00027fc9) list_single_2graphic_pane_cp3

0x391d,	// (0x00027fdf) list_single_midp_graphic_pane_ParamLimits

0x391d,	// (0x00027fdf) list_single_midp_graphic_pane

0xec82,	// (0x00033344) list_single_graphic_2heading_pane_g1_ParamLimits

0xec82,	// (0x00033344) list_single_graphic_2heading_pane_g1

0xead8,	// (0x0003319a) list_single_graphic_2heading_pane_g4_ParamLimits

0xead8,	// (0x0003319a) list_single_graphic_2heading_pane_g4

0xeae4,	// (0x000331a6) list_single_graphic_2heading_pane_g5_ParamLimits

0xeae4,	// (0x000331a6) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x00033e4d) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x00033e4d) list_single_graphic_2heading_pane_g

0xec8e,	// (0x00033350) list_single_graphic_2heading_pane_t1_ParamLimits

0xec8e,	// (0x00033350) list_single_graphic_2heading_pane_t1

0xeca2,	// (0x00033364) list_single_graphic_2heading_pane_t2_ParamLimits

0xeca2,	// (0x00033364) list_single_graphic_2heading_pane_t2

0xecbe,	// (0x00033380) list_single_graphic_2heading_pane_t3_ParamLimits

0xecbe,	// (0x00033380) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x00033e54) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x00033e54) list_single_graphic_2heading_pane_t

0x3718,	// (0x00027dda) bg_popup_sub_pane_cp2

0x3742,	// (0x00027e04) grid_toobar_pane

0x175f,	// (0x00025e21) cell_toolbar_pane_ParamLimits

0x175f,	// (0x00025e21) cell_toolbar_pane

0x377e,	// (0x00027e40) cell_toolbar_pane_g1_ParamLimits

0x377e,	// (0x00027e40) cell_toolbar_pane_g1

0x3792,	// (0x00027e54) cell_toolbar_pane_g2_ParamLimits

0x3792,	// (0x00027e54) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x00033e62) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x00033e62) cell_toolbar_pane_g

0x37b4,	// (0x00027e76) grid_highlight_pane_cp2_ParamLimits

0x37b4,	// (0x00027e76) grid_highlight_pane_cp2

0x37ce,	// (0x00027e90) toolbar_button_pane

0x37da,	// (0x00027e9c) toolbar_button_pane_g1

0x37e2,	// (0x00027ea4) toolbar_button_pane_g2

0x37ea,	// (0x00027eac) toolbar_button_pane_g3

0x37f2,	// (0x00027eb4) toolbar_button_pane_g4

0x37fa,	// (0x00027ebc) toolbar_button_pane_g5

0x3802,	// (0x00027ec4) toolbar_button_pane_g6

0x380a,	// (0x00027ecc) toolbar_button_pane_g7

0x3812,	// (0x00027ed4) toolbar_button_pane_g8

0x381a,	// (0x00027edc) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x00033e67) toolbar_button_pane_g

0x1797,	// (0x00025e59) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1797,	// (0x00025e59) list_single_2graphic_pane_g1_cp3

0xbc91,	// (0x00030353) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbc91,	// (0x00030353) list_single_2graphic_pane_g2_cp3

0x2da7,	// (0x00027469) list_single_2graphic_pane_g3_cp3

0x17b4,	// (0x00025e76) list_single_2graphic_pane_g4_cp3_ParamLimits

0x17b4,	// (0x00025e76) list_single_2graphic_pane_g4_cp3

0x17c0,	// (0x00025e82) list_single_2graphic_pane_t1_cp3_ParamLimits

0x17c0,	// (0x00025e82) list_single_2graphic_pane_t1_cp3

0x2d9b,	// (0x0002745d) list_single_midp_graphic_pane_g2_ParamLimits

0x2d9b,	// (0x0002745d) list_single_midp_graphic_pane_g2

0x1138,	// (0x000257fa) aid_zoom_text_primary

0xec72,	// (0x00033334) aid_zoom_text_secondary

0xaf3a,	// (0x0002f5fc) status_small_pane_g7_ParamLimits

0xaf3a,	// (0x0002f5fc) status_small_pane_g7

0xaf5d,	// (0x0002f61f) status_small_pane_t1_ParamLimits

0xa78d,	// (0x0002ee4f) title_pane_g2

0x0003,

0xf529,	// (0x00033beb) title_pane_g

0xaa2d,	// (0x0002f0ef) aid_size_cell_colour_1_pane_ParamLimits

0xaa2d,	// (0x0002f0ef) aid_size_cell_colour_1_pane

0xaa41,	// (0x0002f103) aid_size_cell_colour_2_pane_ParamLimits

0xaa41,	// (0x0002f103) aid_size_cell_colour_2_pane

0xaa55,	// (0x0002f117) aid_size_cell_colour_3_pane_ParamLimits

0xaa55,	// (0x0002f117) aid_size_cell_colour_3_pane

0xaa69,	// (0x0002f12b) aid_size_cell_colour_4_pane_ParamLimits

0xaa69,	// (0x0002f12b) aid_size_cell_colour_4_pane

0x0632,	// (0x00024cf4) title_pane_stacon_g1_ParamLimits

0x0632,	// (0x00024cf4) title_pane_stacon_g1

0x3e66,	// (0x00028528) popup_note_wait_window_g3_ParamLimits

0x3e66,	// (0x00028528) popup_note_wait_window_g3

0x3edd,	// (0x0002859f) popup_note_wait_window_t5_ParamLimits

0x3edd,	// (0x0002859f) popup_note_wait_window_t5

0xce5b,	// (0x0003151d) main_feb_china_hwr_fs_writing_pane

0xb1ad,	// (0x0002f86f) popup_feb_china_hwr_fs_window_ParamLimits

0xb1ad,	// (0x0002f86f) popup_feb_china_hwr_fs_window

0xbca2,	// (0x00030364) aid_size_cell_hwr_fs_ParamLimits

0xbca2,	// (0x00030364) aid_size_cell_hwr_fs

0x384e,	// (0x00027f10) bg_popup_sub_pane_cp3_ParamLimits

0x384e,	// (0x00027f10) bg_popup_sub_pane_cp3

0xbcb7,	// (0x00030379) grid_hwr_fs_pane_ParamLimits

0xbcb7,	// (0x00030379) grid_hwr_fs_pane

0x181e,	// (0x00025ee0) linegrid_hwr_fs_pane_ParamLimits

0x181e,	// (0x00025ee0) linegrid_hwr_fs_pane

0xbccf,	// (0x00030391) cell_hwr_fs_pane_ParamLimits

0xbccf,	// (0x00030391) cell_hwr_fs_pane

0x385a,	// (0x00027f1c) linegrid_hwr_fs_pane_g1_ParamLimits

0x385a,	// (0x00027f1c) linegrid_hwr_fs_pane_g1

0xbcf5,	// (0x000303b7) linegrid_hwr_fs_pane_g2_ParamLimits

0xbcf5,	// (0x000303b7) linegrid_hwr_fs_pane_g2

0x3878,	// (0x00027f3a) linegrid_hwr_fs_pane_g3_ParamLimits

0x3878,	// (0x00027f3a) linegrid_hwr_fs_pane_g3

0x1852,	// (0x00025f14) linegrid_hwr_fs_pane_g4_ParamLimits

0x1852,	// (0x00025f14) linegrid_hwr_fs_pane_g4

0x1870,	// (0x00025f32) linegrid_hwr_fs_pane_g5_ParamLimits

0x1870,	// (0x00025f32) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x00033e8d) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x00033e8d) linegrid_hwr_fs_pane_g

0x3884,	// (0x00027f46) cell_hwr_fs_pane_g1_ParamLimits

0x3884,	// (0x00027f46) cell_hwr_fs_pane_g1

0x3653,	// (0x00027d15) cell_hwr_fs_pane_g2_ParamLimits

0x3653,	// (0x00027d15) cell_hwr_fs_pane_g2

0xbd07,	// (0x000303c9) cell_hwr_fs_pane_g3_ParamLimits

0xbd07,	// (0x000303c9) cell_hwr_fs_pane_g3

0xbd14,	// (0x000303d6) cell_hwr_fs_pane_g4_ParamLimits

0xbd14,	// (0x000303d6) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x00033e98) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x00033e98) cell_hwr_fs_pane_g

0xbd21,	// (0x000303e3) cell_hwr_fs_pane_t1

0xce5b,	// (0x0003151d) grid_highlight_pane_cp6

0xce5b,	// (0x0003151d) main_idle_act2_pane

0x03e1,	// (0x00024aa3) aid_inside_area_popup_secondary

0xbf30,	// (0x000305f2) aid_inside_area_window_primary_ParamLimits

0xbf30,	// (0x000305f2) aid_inside_area_window_primary

0x50ca,	// (0x0002978c) ai2_news_ticker_pane

0x50d2,	// (0x00029794) aid_size_cell_ai1_link_ParamLimits

0x50d2,	// (0x00029794) aid_size_cell_ai1_link

0x50ec,	// (0x000297ae) popup_ai2_data_window_ParamLimits

0x50ec,	// (0x000297ae) popup_ai2_data_window

0x510a,	// (0x000297cc) popup_ai2_link_window_ParamLimits

0x510a,	// (0x000297cc) popup_ai2_link_window

0x384e,	// (0x00027f10) bg_popup_sub_pane_cp4_ParamLimits

0x384e,	// (0x00027f10) bg_popup_sub_pane_cp4

0x5120,	// (0x000297e2) grid_ai2_link_pane_ParamLimits

0x5120,	// (0x000297e2) grid_ai2_link_pane

0x5137,	// (0x000297f9) popup_ai2_link_window_g1_ParamLimits

0x5137,	// (0x000297f9) popup_ai2_link_window_g1

0x5143,	// (0x00029805) popup_ai2_link_window_g2_ParamLimits

0x5143,	// (0x00029805) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x0003406b) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x0003406b) popup_ai2_link_window_g

0x5154,	// (0x00029816) ai2_mp_button_pane

0x515c,	// (0x0002981e) ai2_mp_volume_pane

0x3a39,	// (0x000280fb) bg_popup_sub_pane_cp5_ParamLimits

0x3a39,	// (0x000280fb) bg_popup_sub_pane_cp5

0x5164,	// (0x00029826) heading_ai2_gene_pane_ParamLimits

0x5164,	// (0x00029826) heading_ai2_gene_pane

0x5170,	// (0x00029832) list_ai2_gene_pane_ParamLimits

0x5170,	// (0x00029832) list_ai2_gene_pane

0x51b8,	// (0x0002987a) cell_ai2_link_pane_ParamLimits

0x51b8,	// (0x0002987a) cell_ai2_link_pane

0x51ce,	// (0x00029890) cell_ai2_link_pane_g1

0xce5b,	// (0x0003151d) grid_highlight_pane_cp7

0x1b94,	// (0x00026256) ai2_mp_volume_pane_g1

0x52a1,	// (0x00029963) ai2_mp_volume_pane_g2

0x5216,	// (0x000298d8) list_ai2_gene_pane_t1

0x52a9,	// (0x0002996b) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x00034084) ai2_mp_volume_pane_g

0x1b9c,	// (0x0002625e) volume_small_pane_cp3

0x52b1,	// (0x00029973) aid_size_cell_ai2_button

0x52b9,	// (0x0002997b) grid_ai2_button_pane

0x52c2,	// (0x00029984) cell_ai2_button_pane_ParamLimits

0x52c2,	// (0x00029984) cell_ai2_button_pane

0xce51,	// (0x00031513) cell_ai2_button_pane_g1

0xce5b,	// (0x0003151d) grid_highlight_pane_cp8

0x5261,	// (0x00029923) ai2_gene_pane_t1_ParamLimits

0x5261,	// (0x00029923) ai2_gene_pane_t1

0xb129,	// (0x0002f7eb) aid_height_parent_landscape

0xc0e8,	// (0x000307aa) aid_height_set_list

0x4bb7,	// (0x00029279) aid_size_parent

0x4ee9,	// (0x000295ab) aid_size_cell_graphic_pane_ParamLimits

0x5180,	// (0x00029842) popup_ai2_data_window_g1_ParamLimits

0x5180,	// (0x00029842) popup_ai2_data_window_g1

0x518c,	// (0x0002984e) ai2_news_ticker_pane_g1

0x5194,	// (0x00029856) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x00034070) ai2_news_ticker_pane_g

0x519c,	// (0x0002985e) ai2_news_ticker_pane_t1

0x51aa,	// (0x0002986c) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x00034075) ai2_news_ticker_pane_t

0x51d7,	// (0x00029899) heading_ai2_gene_pane_g1

0x51df,	// (0x000298a1) heading_ai2_gene_pane_t1_ParamLimits

0x51df,	// (0x000298a1) heading_ai2_gene_pane_t1

0x51f4,	// (0x000298b6) list_highlight_pane_cp6

0x51fc,	// (0x000298be) ai2_gene_pane_ParamLimits

0x51fc,	// (0x000298be) ai2_gene_pane

0x5224,	// (0x000298e6) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x0003407a) list_ai2_gene_pane_t

0x5232,	// (0x000298f4) list_highlight_pane_cp8_ParamLimits

0x5232,	// (0x000298f4) list_highlight_pane_cp8

0x5243,	// (0x00029905) ai2_gene_pane_g1_ParamLimits

0x5243,	// (0x00029905) ai2_gene_pane_g1

0x5255,	// (0x00029917) ai2_gene_pane_g2_ParamLimits

0x5255,	// (0x00029917) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x0003407f) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x0003407f) ai2_gene_pane_g

0xd48f,	// (0x00031b51) scroll_pane_cp12

0xb0e6,	// (0x0002f7a8) control_pane_t3_ParamLimits

0xb0e6,	// (0x0002f7a8) control_pane_t3

0xaf4e,	// (0x0002f610) status_small_pane_g8_ParamLimits

0xaf4e,	// (0x0002f610) status_small_pane_g8

0xb24f,	// (0x0002f911) popup_find_window_ParamLimits

0xb506,	// (0x0002fbc8) popup_note_image_window_ParamLimits

0xeb14,	// (0x000331d6) list_double2_graphic_pane_vc_g1_ParamLimits

0xeb14,	// (0x000331d6) list_double2_graphic_pane_vc_g1

0xecd6,	// (0x00033398) list_double2_graphic_pane_vc_g2_ParamLimits

0xecd6,	// (0x00033398) list_double2_graphic_pane_vc_g2

0xece2,	// (0x000333a4) list_double2_graphic_pane_vc_g3_ParamLimits

0xece2,	// (0x000333a4) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x00033e5b) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x00033e5b) list_double2_graphic_pane_vc_g

0xecee,	// (0x000333b0) list_double2_graphic_pane_vc_t1_ParamLimits

0xecee,	// (0x000333b0) list_double2_graphic_pane_vc_t1

0xead8,	// (0x0003319a) list_single_heading_pane_vc_g1_ParamLimits

0xead8,	// (0x0003319a) list_single_heading_pane_vc_g1

0xeae4,	// (0x000331a6) list_single_heading_pane_vc_g2_ParamLimits

0xeae4,	// (0x000331a6) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00033c65) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00033c65) list_single_heading_pane_vc_g

0xed04,	// (0x000333c6) list_single_heading_pane_vc_t1_ParamLimits

0xed04,	// (0x000333c6) list_single_heading_pane_vc_t1

0xed1a,	// (0x000333dc) list_single_heading_pane_vc_t2_ParamLimits

0xed1a,	// (0x000333dc) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x00033e7c) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x00033e7c) list_single_heading_pane_vc_t

0xed2c,	// (0x000333ee) list_setting_number_pane_vc_g1_ParamLimits

0xed2c,	// (0x000333ee) list_setting_number_pane_vc_g1

0xed38,	// (0x000333fa) list_setting_number_pane_vc_g2_ParamLimits

0xed38,	// (0x000333fa) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x00033e81) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x00033e81) list_setting_number_pane_vc_g

0xed44,	// (0x00033406) list_setting_number_pane_vc_t1_ParamLimits

0xed44,	// (0x00033406) list_setting_number_pane_vc_t1

0xed58,	// (0x0003341a) list_setting_number_pane_vc_t2_ParamLimits

0xed58,	// (0x0003341a) list_setting_number_pane_vc_t2

0xed74,	// (0x00033436) list_setting_number_pane_vc_t3_ParamLimits

0xed74,	// (0x00033436) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x00033e86) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x00033e86) list_setting_number_pane_vc_t

0xeda2,	// (0x00033464) set_value_pane_vc_ParamLimits

0xeda2,	// (0x00033464) set_value_pane_vc

0x4da0,	// (0x00029462) list_double2_graphic_pane_vc_ParamLimits

0x4da0,	// (0x00029462) list_double2_graphic_pane_vc

0x4da0,	// (0x00029462) list_double2_large_graphic_pane_vc_ParamLimits

0x4da0,	// (0x00029462) list_double2_large_graphic_pane_vc

0x4da0,	// (0x00029462) list_double2_pane_vc_ParamLimits

0x4da0,	// (0x00029462) list_double2_pane_vc

0x4da0,	// (0x00029462) list_double_graphic_heading_pane_vc_ParamLimits

0x4da0,	// (0x00029462) list_double_graphic_heading_pane_vc

0x4da0,	// (0x00029462) list_double_graphic_pane_vc_ParamLimits

0x4da0,	// (0x00029462) list_double_graphic_pane_vc

0x4da0,	// (0x00029462) list_double_heading_pane_vc_ParamLimits

0x4da0,	// (0x00029462) list_double_heading_pane_vc

0xedd9,	// (0x0003349b) list_double_large_graphic_pane_vc_ParamLimits

0xedd9,	// (0x0003349b) list_double_large_graphic_pane_vc

0x4da0,	// (0x00029462) list_double_number_pane_vc_ParamLimits

0x4da0,	// (0x00029462) list_double_number_pane_vc

0x4da0,	// (0x00029462) list_double_pane_vc_ParamLimits

0x4da0,	// (0x00029462) list_double_pane_vc

0x4da0,	// (0x00029462) list_double_time_pane_vc_ParamLimits

0x4da0,	// (0x00029462) list_double_time_pane_vc

0x4da0,	// (0x00029462) list_setting_number_pane_vc_ParamLimits

0x4da0,	// (0x00029462) list_setting_number_pane_vc

0x4da0,	// (0x00029462) list_setting_pane_vc_ParamLimits

0x4da0,	// (0x00029462) list_setting_pane_vc

0x4da0,	// (0x00029462) list_single_graphic_heading_pane_vc_ParamLimits

0x4da0,	// (0x00029462) list_single_graphic_heading_pane_vc

0x4da0,	// (0x00029462) list_single_heading_pane_vc_ParamLimits

0x4da0,	// (0x00029462) list_single_heading_pane_vc

0x4da0,	// (0x00029462) list_single_number_heading_pane_vc_ParamLimits

0x4da0,	// (0x00029462) list_single_number_heading_pane_vc

0xeb14,	// (0x000331d6) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xeb14,	// (0x000331d6) list_double_graphic_heading_pane_vc_g1

0xead8,	// (0x0003319a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xead8,	// (0x0003319a) list_double_graphic_heading_pane_vc_g2

0xeae4,	// (0x000331a6) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xeae4,	// (0x000331a6) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c9,	// (0x0003408b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x0003408b) list_double_graphic_heading_pane_vc_g

0xedfe,	// (0x000334c0) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xedfe,	// (0x000334c0) list_double_graphic_heading_pane_vc_t1

0xee14,	// (0x000334d6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xee14,	// (0x000334d6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d0,	// (0x00034092) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d0,	// (0x00034092) list_double_graphic_heading_pane_vc_t

0xed2c,	// (0x000333ee) list_setting_pane_vc_g1_ParamLimits

0xed2c,	// (0x000333ee) list_setting_pane_vc_g1

0xed38,	// (0x000333fa) list_setting_pane_vc_g2_ParamLimits

0xed38,	// (0x000333fa) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x00033e81) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x00033e81) list_setting_pane_vc_g

0xee32,	// (0x000334f4) list_setting_pane_vc_t1_ParamLimits

0xee32,	// (0x000334f4) list_setting_pane_vc_t1

0xee4e,	// (0x00033510) list_setting_pane_vc_t2_ParamLimits

0xee4e,	// (0x00033510) list_setting_pane_vc_t2

0x0001,

0xfa13,	// (0x000340d5) list_setting_pane_vc_t_ParamLimits

0xfa13,	// (0x000340d5) list_setting_pane_vc_t

0xeda2,	// (0x00033464) set_value_pane_cp_vc_ParamLimits

0xeda2,	// (0x00033464) set_value_pane_cp_vc

0xead8,	// (0x0003319a) list_single_number_heading_pane_vc_g1_ParamLimits

0xead8,	// (0x0003319a) list_single_number_heading_pane_vc_g1

0xeae4,	// (0x000331a6) list_single_number_heading_pane_vc_g2_ParamLimits

0xeae4,	// (0x000331a6) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00033c65) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00033c65) list_single_number_heading_pane_vc_g

0xee6a,	// (0x0003352c) list_single_number_heading_pane_vc_t1_ParamLimits

0xee6a,	// (0x0003352c) list_single_number_heading_pane_vc_t1

0xeaf0,	// (0x000331b2) list_single_number_heading_pane_vc_t2_ParamLimits

0xeaf0,	// (0x000331b2) list_single_number_heading_pane_vc_t2

0xeb02,	// (0x000331c4) list_single_number_heading_pane_vc_t3_ParamLimits

0xeb02,	// (0x000331c4) list_single_number_heading_pane_vc_t3

0x0002,

0xfa18,	// (0x000340da) list_single_number_heading_pane_vc_t_ParamLimits

0xfa18,	// (0x000340da) list_single_number_heading_pane_vc_t

0xeb14,	// (0x000331d6) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xeb14,	// (0x000331d6) list_single_graphic_heading_pane_vc_g1

0xead8,	// (0x0003319a) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xead8,	// (0x0003319a) list_single_graphic_heading_pane_vc_g4

0xeae4,	// (0x000331a6) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xeae4,	// (0x000331a6) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9c9,	// (0x0003408b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x0003408b) list_single_graphic_heading_pane_vc_g

0xee6a,	// (0x0003352c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xee6a,	// (0x0003352c) list_single_graphic_heading_pane_vc_t1

0xee80,	// (0x00033542) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xee80,	// (0x00033542) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa1f,	// (0x000340e1) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa1f,	// (0x000340e1) list_single_graphic_heading_pane_vc_t

0xead8,	// (0x0003319a) list_double2_pane_vc_g1_ParamLimits

0xead8,	// (0x0003319a) list_double2_pane_vc_g1

0xeae4,	// (0x000331a6) list_double2_pane_vc_g2_ParamLimits

0xeae4,	// (0x000331a6) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00033c65) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00033c65) list_double2_pane_vc_g

0xedc3,	// (0x00033485) list_double2_pane_vc_t1_ParamLimits

0xedc3,	// (0x00033485) list_double2_pane_vc_t1

0xeb20,	// (0x000331e2) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xeb20,	// (0x000331e2) list_double2_large_graphic_pane_vc_g1

0xead8,	// (0x0003319a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xead8,	// (0x0003319a) list_double2_large_graphic_pane_vc_g2

0xeae4,	// (0x000331a6) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xeae4,	// (0x000331a6) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x00033c82) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x00033c82) list_double2_large_graphic_pane_vc_g

0xeb2c,	// (0x000331ee) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xeb2c,	// (0x000331ee) list_double2_large_graphic_pane_vc_t1

0xee92,	// (0x00033554) list_double_time_pane_vc_g1_ParamLimits

0xee92,	// (0x00033554) list_double_time_pane_vc_g1

0xee9e,	// (0x00033560) list_double_time_pane_vc_g2_ParamLimits

0xee9e,	// (0x00033560) list_double_time_pane_vc_g2

0x0001,

0xfa24,	// (0x000340e6) list_double_time_pane_vc_g_ParamLimits

0xfa24,	// (0x000340e6) list_double_time_pane_vc_g

0xeeaa,	// (0x0003356c) list_double_time_pane_vc_t1_ParamLimits

0xeeaa,	// (0x0003356c) list_double_time_pane_vc_t1

0xeeec,	// (0x000335ae) list_double_time_pane_vc_t2_ParamLimits

0xeeec,	// (0x000335ae) list_double_time_pane_vc_t2

0xef35,	// (0x000335f7) list_double_time_pane_vc_t3_ParamLimits

0xef35,	// (0x000335f7) list_double_time_pane_vc_t3

0xef47,	// (0x00033609) list_double_time_pane_vc_t4_ParamLimits

0xef47,	// (0x00033609) list_double_time_pane_vc_t4

0x0003,

0xfa29,	// (0x000340eb) list_double_time_pane_vc_t_ParamLimits

0xfa29,	// (0x000340eb) list_double_time_pane_vc_t

0xead8,	// (0x0003319a) list_double_pane_vc_g1_ParamLimits

0xead8,	// (0x0003319a) list_double_pane_vc_g1

0xeae4,	// (0x000331a6) list_double_pane_vc_g2_ParamLimits

0xeae4,	// (0x000331a6) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00033c65) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00033c65) list_double_pane_vc_g

0xef5b,	// (0x0003361d) list_double_pane_vc_t1_ParamLimits

0xef5b,	// (0x0003361d) list_double_pane_vc_t1

0xef6f,	// (0x00033631) list_double_pane_vc_t2_ParamLimits

0xef6f,	// (0x00033631) list_double_pane_vc_t2

0x0001,

0xfa32,	// (0x000340f4) list_double_pane_vc_t_ParamLimits

0xfa32,	// (0x000340f4) list_double_pane_vc_t

0xead8,	// (0x0003319a) list_double_number_pane_vc_g1_ParamLimits

0xead8,	// (0x0003319a) list_double_number_pane_vc_g1

0xeae4,	// (0x000331a6) list_double_number_pane_vc_g2_ParamLimits

0xeae4,	// (0x000331a6) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00033c65) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00033c65) list_double_number_pane_vc_g

0xef85,	// (0x00033647) list_double_number_pane_vc_t1_ParamLimits

0xef85,	// (0x00033647) list_double_number_pane_vc_t1

0xef97,	// (0x00033659) list_double_number_pane_vc_t2_ParamLimits

0xef97,	// (0x00033659) list_double_number_pane_vc_t2

0xef6f,	// (0x00033631) list_double_number_pane_vc_t3_ParamLimits

0xef6f,	// (0x00033631) list_double_number_pane_vc_t3

0x0002,

0xfa37,	// (0x000340f9) list_double_number_pane_vc_t_ParamLimits

0xfa37,	// (0x000340f9) list_double_number_pane_vc_t

0xefab,	// (0x0003366d) list_double_large_graphic_pane_vc_g1_ParamLimits

0xefab,	// (0x0003366d) list_double_large_graphic_pane_vc_g1

0xefc7,	// (0x00033689) list_double_large_graphic_pane_vc_g2_ParamLimits

0xefc7,	// (0x00033689) list_double_large_graphic_pane_vc_g2

0xefdb,	// (0x0003369d) list_double_large_graphic_pane_vc_g3_ParamLimits

0xefdb,	// (0x0003369d) list_double_large_graphic_pane_vc_g3

0xefea,	// (0x000336ac) list_double_large_graphic_pane_vc_g4_ParamLimits

0xefea,	// (0x000336ac) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3e,	// (0x00034100) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3e,	// (0x00034100) list_double_large_graphic_pane_vc_g

0xeff9,	// (0x000336bb) list_double_large_graphic_pane_vc_t1_ParamLimits

0xeff9,	// (0x000336bb) list_double_large_graphic_pane_vc_t1

0xf015,	// (0x000336d7) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf015,	// (0x000336d7) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa47,	// (0x00034109) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa47,	// (0x00034109) list_double_large_graphic_pane_vc_t

0xead8,	// (0x0003319a) list_double_heading_pane_vc_g1_ParamLimits

0xead8,	// (0x0003319a) list_double_heading_pane_vc_g1

0xeae4,	// (0x000331a6) list_double_heading_pane_vc_g2_ParamLimits

0xeae4,	// (0x000331a6) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00033c65) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00033c65) list_double_heading_pane_vc_g

0xf035,	// (0x000336f7) list_double_heading_pane_vc_t1_ParamLimits

0xf035,	// (0x000336f7) list_double_heading_pane_vc_t1

0xf047,	// (0x00033709) list_double_heading_pane_vc_t2_ParamLimits

0xf047,	// (0x00033709) list_double_heading_pane_vc_t2

0x0001,

0xfa4c,	// (0x0003410e) list_double_heading_pane_vc_t_ParamLimits

0xfa4c,	// (0x0003410e) list_double_heading_pane_vc_t

0xf05f,	// (0x00033721) list_double_graphic_pane_vc_g1_ParamLimits

0xf05f,	// (0x00033721) list_double_graphic_pane_vc_g1

0xf072,	// (0x00033734) list_double_graphic_pane_vc_g2_ParamLimits

0xf072,	// (0x00033734) list_double_graphic_pane_vc_g2

0xead8,	// (0x0003319a) list_double_graphic_pane_vc_g3_ParamLimits

0xead8,	// (0x0003319a) list_double_graphic_pane_vc_g3

0x0003,

0xfa51,	// (0x00034113) list_double_graphic_pane_vc_g_ParamLimits

0xfa51,	// (0x00034113) list_double_graphic_pane_vc_g

0xf08f,	// (0x00033751) list_double_graphic_pane_vc_t1_ParamLimits

0xf08f,	// (0x00033751) list_double_graphic_pane_vc_t1

0xf0b9,	// (0x0003377b) list_double_graphic_pane_vc_t2_ParamLimits

0xf0b9,	// (0x0003377b) list_double_graphic_pane_vc_t2

0x0001,

0xfa5a,	// (0x0003411c) list_double_graphic_pane_vc_t_ParamLimits

0xfa5a,	// (0x0003411c) list_double_graphic_pane_vc_t

0xf309,	// (0x000339cb) aid_size_cell_fastswap

0xa566,	// (0x0002ec28) aid_size_cell_touch_ParamLimits

0xa566,	// (0x0002ec28) aid_size_cell_touch

0xf4fb,	// (0x00033bbd) popup_fast_swap_wide_window_ParamLimits

0xf4fb,	// (0x00033bbd) popup_fast_swap_wide_window

0xa724,	// (0x0002ede6) touch_pane_ParamLimits

0xa724,	// (0x0002ede6) touch_pane

0xd4e5,	// (0x00031ba7) button_value_adjust_pane_cp2

0xeb7d,	// (0x0003323f) button_value_adjust_pane_cp4

0xeb85,	// (0x00033247) form_field_data_pane_cp2

0xa15f,	// (0x0002e821) form_field_data_wide_pane_cp2

0x089f,	// (0x00024f61) bg_scroll_pane_ParamLimits

0x08be,	// (0x00024f80) scroll_handle_pane_ParamLimits

0x08d2,	// (0x00024f94) scroll_sc2_down_pane_ParamLimits

0x08d2,	// (0x00024f94) scroll_sc2_down_pane

0x08f9,	// (0x00024fbb) scroll_sc2_up_pane_ParamLimits

0x08f9,	// (0x00024fbb) scroll_sc2_up_pane

0xc4d3,	// (0x00030b95) grid_wheel_folder_pane_g1_ParamLimits

0xc4d3,	// (0x00030b95) grid_wheel_folder_pane_g1

0x0eb1,	// (0x00025573) clock_nsta_pane_cp2_ParamLimits

0x0eb1,	// (0x00025573) clock_nsta_pane_cp2

0xae2c,	// (0x0002f4ee) listscroll_midp_pane_ParamLimits

0xae38,	// (0x0002f4fa) midp_canvas_pane

0x327c,	// (0x0002793e) nsta_clock_indic_pane

0x32b0,	// (0x00027972) listscroll_form_pane_vc

0x32b8,	// (0x0002797a) listscroll_set_pane_vc_ParamLimits

0x32b8,	// (0x0002797a) listscroll_set_pane_vc

0xb980,	// (0x00030042) clock_nsta_pane

0xb9aa,	// (0x0003006c) indicator_nsta_pane

0x3718,	// (0x00027dda) bg_popup_sub_pane_cp2_ParamLimits

0x372c,	// (0x00027dee) find_pane_cp2_ParamLimits

0x372c,	// (0x00027dee) find_pane_cp2

0x3742,	// (0x00027e04) grid_toobar_pane_ParamLimits

0x3822,	// (0x00027ee4) list_form_gen_pane_vc_ParamLimits

0x3822,	// (0x00027ee4) list_form_gen_pane_vc

0x3838,	// (0x00027efa) scroll_pane_cp8_vc_ParamLimits

0x3838,	// (0x00027efa) scroll_pane_cp8_vc

0x38b4,	// (0x00027f76) data_form_wide_pane_vc_ParamLimits

0x38b4,	// (0x00027f76) data_form_wide_pane_vc

0x38c0,	// (0x00027f82) form_field_data_wide_pane_vc_g1

0x38c8,	// (0x00027f8a) form_field_data_wide_pane_vc_t1_ParamLimits

0x38c8,	// (0x00027f8a) form_field_data_wide_pane_vc_t1

0xd4f9,	// (0x00031bbb) input_focus_pane_cp6_vc_ParamLimits

0xd4f9,	// (0x00031bbb) input_focus_pane_cp6_vc

0x3be4,	// (0x000282a6) list_midp_pane_ParamLimits

0x4f57,	// (0x00029619) scroll_pane_cp16_ParamLimits

0x4f57,	// (0x00029619) scroll_pane_cp16

0x3c3a,	// (0x000282fc) button_value_adjust_pane_ParamLimits

0x3c3a,	// (0x000282fc) button_value_adjust_pane

0xc0f9,	// (0x000307bb) button_value_adjust_pane_cp6_ParamLimits

0xc0f9,	// (0x000307bb) button_value_adjust_pane_cp6

0xc235,	// (0x000308f7) settings_code_pane_cp_ParamLimits

0xc235,	// (0x000308f7) settings_code_pane_cp

0xce51,	// (0x00031513) cell_touch_pane_g1

0xce51,	// (0x00031513) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x00033da0) cell_touch_pane_g

0xc3a7,	// (0x00030a69) cell_touch_pane_cp_ParamLimits

0xc3a7,	// (0x00030a69) cell_touch_pane_cp

0xc3c3,	// (0x00030a85) cell_touch_pane_ParamLimits

0xc3c3,	// (0x00030a85) cell_touch_pane

0xce51,	// (0x00031513) scroll_sc2_down_pane_g1

0xce51,	// (0x00031513) scroll_sc2_up_pane_g1

0xce5b,	// (0x0003151d) bg_set_opt_pane_cp4_vc

0x52f5,	// (0x000299b7) list_set_graphic_pane_vc_g1_ParamLimits

0x52f5,	// (0x000299b7) list_set_graphic_pane_vc_g1

0x5301,	// (0x000299c3) list_set_graphic_pane_vc_g2_ParamLimits

0x5301,	// (0x000299c3) list_set_graphic_pane_vc_g2

0x0001,

0xf9d5,	// (0x00034097) list_set_graphic_pane_vc_g_ParamLimits

0xf9d5,	// (0x00034097) list_set_graphic_pane_vc_g

0x530d,	// (0x000299cf) text_primary_small_cp13_vc_ParamLimits

0x530d,	// (0x000299cf) text_primary_small_cp13_vc

0x5325,	// (0x000299e7) list_set_graphic_pane_vc_ParamLimits

0x5325,	// (0x000299e7) list_set_graphic_pane_vc

0xce5b,	// (0x0003151d) input_focus_pane_cp2_vc

0xce51,	// (0x00031513) setting_code_pane_vc_g1

0xcece,	// (0x00031590) setting_code_pane_vc_t1

0x5338,	// (0x000299fa) set_text_pane_vc_t1_ParamLimits

0x5338,	// (0x000299fa) set_text_pane_vc_t1

0xce5b,	// (0x0003151d) input_focus_pane_cp1_vc

0x5359,	// (0x00029a1b) list_set_text_pane_vc

0xce51,	// (0x00031513) setting_text_pane_vc_g1

0xce5b,	// (0x0003151d) bg_set_opt_pane_cp2_vc

0xcec5,	// (0x00031587) setting_slider_graphic_pane_vc_g1

0x5363,	// (0x00029a25) setting_slider_graphic_pane_vc_t1

0x5375,	// (0x00029a37) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9da,	// (0x0003409c) setting_slider_graphic_pane_vc_t

0x5387,	// (0x00029a49) slider_set_pane_cp_vc

0x5391,	// (0x00029a53) slider_set_pane_vc_g1

0x539a,	// (0x00029a5c) slider_set_pane_vc_g2

0x0006,

0xf9df,	// (0x000340a1) slider_set_pane_vc_g

0xd551,	// (0x00031c13) set_opt_bg_pane_g1_copy1

0xd559,	// (0x00031c1b) set_opt_bg_pane_g2_copy1

0x53c6,	// (0x00029a88) set_opt_bg_pane_g3_copy1

0xd569,	// (0x00031c2b) set_opt_bg_pane_g4_copy1

0xd571,	// (0x00031c33) set_opt_bg_pane_g5_copy1

0xd579,	// (0x00031c3b) set_opt_bg_pane_g6_copy1

0x53d0,	// (0x00029a92) set_opt_bg_pane_g7_copy1

0x53da,	// (0x00029a9c) set_opt_bg_pane_g8_copy1

0x53e4,	// (0x00029aa6) set_opt_bg_pane_g9_copy1

0xce5b,	// (0x0003151d) bg_set_opt_pane_cp_vc

0x53ee,	// (0x00029ab0) setting_slider_pane_vc_t1

0x53fd,	// (0x00029abf) setting_slider_pane_vc_t2

0x540f,	// (0x00029ad1) setting_slider_pane_vc_t3

0x0002,

0xf9ee,	// (0x000340b0) setting_slider_pane_vc_t

0x5421,	// (0x00029ae3) slider_set_pane_vc

0x1894,	// (0x00025f56) volume_set_pane_vc_g1

0x189d,	// (0x00025f5f) volume_set_pane_vc_g2

0x18a6,	// (0x00025f68) volume_set_pane_vc_g3

0x18af,	// (0x00025f71) volume_set_pane_vc_g4

0x18b8,	// (0x00025f7a) volume_set_pane_vc_g5

0x18c1,	// (0x00025f83) volume_set_pane_vc_g6

0x18ca,	// (0x00025f8c) volume_set_pane_vc_g7

0x18d3,	// (0x00025f95) volume_set_pane_vc_g8

0x18dc,	// (0x00025f9e) volume_set_pane_vc_g9

0x18e5,	// (0x00025fa7) volume_set_pane_vc_g10

0x0009,

0xf9f5,	// (0x000340b7) volume_set_pane_vc_g

0x542b,	// (0x00029aed) volume_set_pane_vc

0x5435,	// (0x00029af7) button_value_adjust_pane_cp1_vc

0x543f,	// (0x00029b01) list_highlight_pane_cp2_vc

0x5448,	// (0x00029b0a) list_set_pane_vc_ParamLimits

0x5448,	// (0x00029b0a) list_set_pane_vc

0x54b6,	// (0x00029b78) main_pane_set_vc_t1_ParamLimits

0x54b6,	// (0x00029b78) main_pane_set_vc_t1

0x54cb,	// (0x00029b8d) main_pane_set_vc_t2_ParamLimits

0x54cb,	// (0x00029b8d) main_pane_set_vc_t2

0x54dd,	// (0x00029b9f) main_pane_set_vc_t3_ParamLimits

0x54dd,	// (0x00029b9f) main_pane_set_vc_t3

0x54f1,	// (0x00029bb3) main_pane_set_vc_t4_ParamLimits

0x54f1,	// (0x00029bb3) main_pane_set_vc_t4

0x0003,

0xfa0a,	// (0x000340cc) main_pane_set_vc_t_ParamLimits

0xfa0a,	// (0x000340cc) main_pane_set_vc_t

0x5505,	// (0x00029bc7) setting_code_pane_vc_ParamLimits

0x5505,	// (0x00029bc7) setting_code_pane_vc

0x5516,	// (0x00029bd8) setting_slider_graphic_pane_vc

0x5516,	// (0x00029bd8) setting_slider_pane_vc

0x5516,	// (0x00029bd8) setting_text_pane_vc

0x5516,	// (0x00029bd8) setting_volume_pane_vc

0x5520,	// (0x00029be2) scroll_pane_cp121_vc

0xd4d3,	// (0x00031b95) set_content_pane_vc

0x5528,	// (0x00029bea) button_value_adjust_pane_g1

0x5531,	// (0x00029bf3) button_value_adjust_pane_g2

0x0001,

0xfa5f,	// (0x00034121) button_value_adjust_pane_g

0x553a,	// (0x00029bfc) form_field_slider_wide_pane_vc_t1_ParamLimits

0x553a,	// (0x00029bfc) form_field_slider_wide_pane_vc_t1

0x554c,	// (0x00029c0e) form_field_slider_wide_pane_vc_t2_ParamLimits

0x554c,	// (0x00029c0e) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa64,	// (0x00034126) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa64,	// (0x00034126) form_field_slider_wide_pane_vc_t

0xcea9,	// (0x0003156b) input_focus_pane_cp10_vc_ParamLimits

0xcea9,	// (0x0003156b) input_focus_pane_cp10_vc

0x5578,	// (0x00029c3a) slider_cont_pane_cp1_vc_ParamLimits

0x5578,	// (0x00029c3a) slider_cont_pane_cp1_vc

0x558a,	// (0x00029c4c) slider_form_pane_g1_cp2

0x539a,	// (0x00029a5c) slider_form_pane_g2_cp2

0x55b7,	// (0x00029c79) form_field_slider_pane_vc_t3

0x55c5,	// (0x00029c87) form_field_slider_pane_vc_t4

0x55d3,	// (0x00029c95) slider_form_pane_vc_ParamLimits

0x55d3,	// (0x00029c95) slider_form_pane_vc

0x55e0,	// (0x00029ca2) form_field_slider_pane_vc_t1_ParamLimits

0x55e0,	// (0x00029ca2) form_field_slider_pane_vc_t1

0x554c,	// (0x00029c0e) form_field_slider_pane_vc_t2_ParamLimits

0x554c,	// (0x00029c0e) form_field_slider_pane_vc_t2

0x0001,

0xfa76,	// (0x00034138) form_field_slider_pane_vc_t_ParamLimits

0xfa76,	// (0x00034138) form_field_slider_pane_vc_t

0xcea9,	// (0x0003156b) input_focus_pane_cp9_vc_ParamLimits

0xcea9,	// (0x0003156b) input_focus_pane_cp9_vc

0x55f6,	// (0x00029cb8) slider_cont_pane_vc_ParamLimits

0x55f6,	// (0x00029cb8) slider_cont_pane_vc

0x560a,	// (0x00029ccc) list_form_graphic_pane_cp_vc_ParamLimits

0x560a,	// (0x00029ccc) list_form_graphic_pane_cp_vc

0x38c0,	// (0x00027f82) form_field_popup_wide_pane_vc_g1

0x561f,	// (0x00029ce1) form_field_popup_wide_pane_vc_t1_ParamLimits

0x561f,	// (0x00029ce1) form_field_popup_wide_pane_vc_t1

0xd4f9,	// (0x00031bbb) input_focus_pane_cp8_vc_ParamLimits

0xd4f9,	// (0x00031bbb) input_focus_pane_cp8_vc

0x5664,	// (0x00029d26) list_form_wide_pane_vc_ParamLimits

0x5664,	// (0x00029d26) list_form_wide_pane_vc

0x5670,	// (0x00029d32) list_form_graphic_pane_vc_g1

0x5678,	// (0x00029d3a) list_form_graphic_pane_vc_t1_ParamLimits

0x5678,	// (0x00029d3a) list_form_graphic_pane_vc_t1

0xceb7,	// (0x00031579) list_highlight_pane_cp5_vc_ParamLimits

0xceb7,	// (0x00031579) list_highlight_pane_cp5_vc

0x56a0,	// (0x00029d62) list_form_graphic_pane_vc_ParamLimits

0x56a0,	// (0x00029d62) list_form_graphic_pane_vc

0x38c0,	// (0x00027f82) form_field_popup_pane_vc_g1

0x56b6,	// (0x00029d78) form_field_popup_pane_vc_t1_ParamLimits

0x56b6,	// (0x00029d78) form_field_popup_pane_vc_t1

0xd4f9,	// (0x00031bbb) input_focus_pane_cp7_vc_ParamLimits

0xd4f9,	// (0x00031bbb) input_focus_pane_cp7_vc

0x56cd,	// (0x00029d8f) list_form_pane_vc_ParamLimits

0x56cd,	// (0x00029d8f) list_form_pane_vc

0x56d9,	// (0x00029d9b) data_form_pane_vc_t1_ParamLimits

0x56d9,	// (0x00029d9b) data_form_pane_vc_t1

0xd551,	// (0x00031c13) input_focus_pane_vc_g1

0xd559,	// (0x00031c1b) input_focus_pane_vc_g2

0xd561,	// (0x00031c23) input_focus_pane_vc_g3

0xd569,	// (0x00031c2b) input_focus_pane_vc_g4

0xd571,	// (0x00031c33) input_focus_pane_vc_g5

0xd579,	// (0x00031c3b) input_focus_pane_vc_g6

0xd581,	// (0x00031c43) input_focus_pane_vc_g7

0xd589,	// (0x00031c4b) input_focus_pane_vc_g8

0xd591,	// (0x00031c53) input_focus_pane_vc_g9

0xce51,	// (0x00031513) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x00033d29) input_focus_pane_vc_g

0x38b4,	// (0x00027f76) data_form_pane_vc_ParamLimits

0x38b4,	// (0x00027f76) data_form_pane_vc

0x38c0,	// (0x00027f82) form_field_data_pane_vc_g1

0x56f6,	// (0x00029db8) form_field_data_pane_vc_t1_ParamLimits

0x56f6,	// (0x00029db8) form_field_data_pane_vc_t1

0xd4f9,	// (0x00031bbb) input_focus_pane_vc_ParamLimits

0xd4f9,	// (0x00031bbb) input_focus_pane_vc

0x5710,	// (0x00029dd2) button_value_adjust_pane_cp3_vc

0x5718,	// (0x00029dda) button_value_adjust_pane_cp5_vc

0x5720,	// (0x00029de2) form_field_data_pane_vc_ParamLimits

0x5720,	// (0x00029de2) form_field_data_pane_vc

0x573b,	// (0x00029dfd) form_field_data_pane_vc_cp2

0x5743,	// (0x00029e05) form_field_data_wide_pane_vc_ParamLimits

0x5743,	// (0x00029e05) form_field_data_wide_pane_vc

0x575d,	// (0x00029e1f) form_field_data_wide_pane_vc_cp2

0x5765,	// (0x00029e27) form_field_popup_pane_vc_ParamLimits

0x5765,	// (0x00029e27) form_field_popup_pane_vc

0x5780,	// (0x00029e42) form_field_popup_wide_pane_vc_ParamLimits

0x5780,	// (0x00029e42) form_field_popup_wide_pane_vc

0x579a,	// (0x00029e5c) form_field_slider_pane_vc_ParamLimits

0x579a,	// (0x00029e5c) form_field_slider_pane_vc

0x57ad,	// (0x00029e6f) form_field_slider_wide_pane_vc_ParamLimits

0x57ad,	// (0x00029e6f) form_field_slider_wide_pane_vc

0xc3e1,	// (0x00030aa3) grid_touch_1_pane_ParamLimits

0xc3e1,	// (0x00030aa3) grid_touch_1_pane

0xc3f5,	// (0x00030ab7) grid_touch_2_pane_ParamLimits

0xc3f5,	// (0x00030ab7) grid_touch_2_pane

0x5893,	// (0x00029f55) touch_pane_g1_ParamLimits

0x5893,	// (0x00029f55) touch_pane_g1

0x57e6,	// (0x00029ea8) cell_app_pane_cp_wide_ParamLimits

0x57e6,	// (0x00029ea8) cell_app_pane_cp_wide

0x57f7,	// (0x00029eb9) grid_popup_fast_wide_pane_ParamLimits

0x57f7,	// (0x00029eb9) grid_popup_fast_wide_pane

0x580b,	// (0x00029ecd) scroll_pane_cp19_ParamLimits

0x580b,	// (0x00029ecd) scroll_pane_cp19

0xce5b,	// (0x0003151d) bg_popup_window_pane_cp20

0x581f,	// (0x00029ee1) listscroll_popup_fast_wide_pane

0xc421,	// (0x00030ae3) grid_indicator_nsta_pane

0x5839,	// (0x00029efb) clock_nsta_pane_g1

0x5842,	// (0x00029f04) clock_nsta_pane_t1

0xc42d,	// (0x00030aef) cell_indicator_nsta_pane_ParamLimits

0xc42d,	// (0x00030aef) cell_indicator_nsta_pane

0x5893,	// (0x00029f55) cell_indicator_nsta_pane_g1

0xc448,	// (0x00030b0a) cell_indicator_nsta_pane_g2

0x0001,

0xfa87,	// (0x00034149) cell_indicator_nsta_pane_g

0x58b4,	// (0x00029f76) clock_nsta_pane_cp

0x58bd,	// (0x00029f7f) indicator_nsta_pane_cp

0x58c7,	// (0x00029f89) nsta_clock_indic_pane_g1

0xcef3,	// (0x000315b5) grid_indicator_pane

0x09eb,	// (0x000250ad) scroll_pane_cp29

0x0e00,	// (0x000254c2) indicator_nsta_pane_cp2_ParamLimits

0x0e00,	// (0x000254c2) indicator_nsta_pane_cp2

0xceb7,	// (0x00031579) main_apps_wheel_pane

0x3aa1,	// (0x00028163) form_midp_field_text_pane_ParamLimits

0x3bf0,	// (0x000282b2) scroll_bar_cp050_ParamLimits

0x5920,	// (0x00029fe2) cell_indicator_pane_ParamLimits

0x5920,	// (0x00029fe2) cell_indicator_pane

0x5938,	// (0x00029ffa) cell_indicator_pane_g1

0xc455,	// (0x00030b17) grid_wheel_folder_pane_ParamLimits

0xc455,	// (0x00030b17) grid_wheel_folder_pane

0xc463,	// (0x00030b25) list_wheel_apps_pane_ParamLimits

0xc463,	// (0x00030b25) list_wheel_apps_pane

0xc471,	// (0x00030b33) main_apps_wheel_pane_g1_ParamLimits

0xc471,	// (0x00030b33) main_apps_wheel_pane_g1

0xc481,	// (0x00030b43) main_apps_wheel_pane_g2_ParamLimits

0xc481,	// (0x00030b43) main_apps_wheel_pane_g2

0x0001,

0xfaa3,	// (0x00034165) main_apps_wheel_pane_g_ParamLimits

0xfaa3,	// (0x00034165) main_apps_wheel_pane_g

0xc491,	// (0x00030b53) main_apps_wheel_pane_t1_ParamLimits

0xc491,	// (0x00030b53) main_apps_wheel_pane_t1

0xc4a9,	// (0x00030b6b) list_wheel_apps_pane_g1

0xc4b1,	// (0x00030b73) list_wheel_apps_pane_g2

0xc4b9,	// (0x00030b7b) list_wheel_apps_pane_g3

0xc4c1,	// (0x00030b83) list_wheel_apps_pane_g4

0xc4c9,	// (0x00030b8b) list_wheel_apps_pane_g5

0x0004,

0xfaa8,	// (0x0003416a) list_wheel_apps_pane_g

0x2df9,	// (0x000274bb) navi_icon_text_pane

0xb872,	// (0x0002ff34) aid_fill_nsta

0xc4e6,	// (0x00030ba8) navi_icon_text_pane_g1

0xc4f2,	// (0x00030bb4) navi_icon_text_pane_t1

0x2c84,	// (0x00027346) list_set_graphic_pane_t1_ParamLimits

0x2c84,	// (0x00027346) list_set_graphic_pane_t1

0x435d,	// (0x00028a1f) popup_midp_note_alarm_window_t6_ParamLimits

0x435d,	// (0x00028a1f) popup_midp_note_alarm_window_t6

0x436f,	// (0x00028a31) popup_midp_note_alarm_window_t7_ParamLimits

0x436f,	// (0x00028a31) popup_midp_note_alarm_window_t7

0x4381,	// (0x00028a43) popup_midp_note_alarm_window_t8_ParamLimits

0x4381,	// (0x00028a43) popup_midp_note_alarm_window_t8

0x4393,	// (0x00028a55) popup_midp_note_alarm_window_t9_ParamLimits

0x4393,	// (0x00028a55) popup_midp_note_alarm_window_t9

0x43a5,	// (0x00028a67) popup_midp_note_alarm_window_t10_ParamLimits

0x43a5,	// (0x00028a67) popup_midp_note_alarm_window_t10

0x43b7,	// (0x00028a79) popup_midp_note_alarm_window_t11_ParamLimits

0x43b7,	// (0x00028a79) popup_midp_note_alarm_window_t11

0x43c9,	// (0x00028a8b) scroll_pane_cp17_ParamLimits

0x43c9,	// (0x00028a8b) scroll_pane_cp17

0x1894,	// (0x00025f56) volume_small_pane_cp_g1

0x1ba5,	// (0x00026267) volume_small_pane_cp_g2

0x1bae,	// (0x00026270) volume_small_pane_cp_g3

0x1bb7,	// (0x00026279) volume_small_pane_cp_g4

0x1bc0,	// (0x00026282) volume_small_pane_cp_g5

0x1bc9,	// (0x0002628b) volume_small_pane_cp_g6

0x1bd2,	// (0x00026294) volume_small_pane_cp_g7

0x1bdb,	// (0x0002629d) volume_small_pane_cp_g8

0x1be4,	// (0x000262a6) volume_small_pane_cp_g9

0x1bed,	// (0x000262af) volume_small_pane_cp_g10

0x305b,	// (0x0002771d) midp_ticker_pane_g1_ParamLimits

0x3067,	// (0x00027729) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x00033df5) midp_ticker_pane_g_ParamLimits

0xaed0,	// (0x0002f592) midp_ticker_pane_t1_ParamLimits

0xb896,	// (0x0002ff58) aid_fill_nsta_2

0x3bdc,	// (0x0002829e) list_form2_midp_pane

0x4d58,	// (0x0002941a) midp_editing_number_pane_ParamLimits

0x4d67,	// (0x00029429) midp_ticker_pane_ParamLimits

0x5a2b,	// (0x0002a0ed) form2_midp_field_pane

0x5a4f,	// (0x0002a111) scroll_pane_cp51

0x5a6f,	// (0x0002a131) form2_midp_button_pane_ParamLimits

0x5a6f,	// (0x0002a131) form2_midp_button_pane

0x5a81,	// (0x0002a143) form2_midp_content_pane_ParamLimits

0x5a81,	// (0x0002a143) form2_midp_content_pane

0x5a9b,	// (0x0002a15d) form2_midp_field_choice_group_pane

0x5aa3,	// (0x0002a165) form2_midp_field_pane_g1

0x5aab,	// (0x0002a16d) form2_midp_field_pane_g2

0x5ab3,	// (0x0002a175) form2_midp_field_pane_g3

0x5abb,	// (0x0002a17d) form2_midp_field_pane_g4

0x0003,

0xfacd,	// (0x0003418f) form2_midp_field_pane_g

0x5ac3,	// (0x0002a185) form2_midp_gauge_slider_pane

0x5acb,	// (0x0002a18d) form2_midp_gauge_wait_pane

0x5ad3,	// (0x0002a195) form2_midp_image_pane_ParamLimits

0x5ad3,	// (0x0002a195) form2_midp_image_pane

0x5aee,	// (0x0002a1b0) form2_midp_label_pane_ParamLimits

0x5aee,	// (0x0002a1b0) form2_midp_label_pane

0xc520,	// (0x00030be2) form2_midp_label_pane_cp_ParamLimits

0xc520,	// (0x00030be2) form2_midp_label_pane_cp

0x5b2e,	// (0x0002a1f0) form2_midp_string_pane_ParamLimits

0x5b2e,	// (0x0002a1f0) form2_midp_string_pane

0xf0d7,	// (0x00033799) form2_midp_text_pane_ParamLimits

0xf0d7,	// (0x00033799) form2_midp_text_pane

0x5b40,	// (0x0002a202) form2_midp_time_pane

0x5b50,	// (0x0002a212) input_focus_pane_cp51_ParamLimits

0x5b50,	// (0x0002a212) input_focus_pane_cp51

0x5b68,	// (0x0002a22a) form2_midp_label_pane_t1_ParamLimits

0x5b68,	// (0x0002a22a) form2_midp_label_pane_t1

0xf0f8,	// (0x000337ba) form2_mdip_text_pane_t1_ParamLimits

0xf0f8,	// (0x000337ba) form2_mdip_text_pane_t1

0xf11c,	// (0x000337de) form2_midp_time_pane_t1

0x5bb6,	// (0x0002a278) form2_midp_gauge_slider_pane_t1

0xc541,	// (0x00030c03) form2_midp_gauge_slider_pane_t2

0xc553,	// (0x00030c15) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad6,	// (0x00034198) form2_midp_gauge_slider_pane_t

0x5bec,	// (0x0002a2ae) form2_midp_slider_pane

0x5bf8,	// (0x0002a2ba) form2_midp_gauge_wait_pane_t1

0x5c06,	// (0x0002a2c8) form2_midp_wait_pane_ParamLimits

0x5c06,	// (0x0002a2c8) form2_midp_wait_pane

0x3907,	// (0x00027fc9) list_single_2graphic_pane_cp4_ParamLimits

0x3907,	// (0x00027fc9) list_single_2graphic_pane_cp4

0xc565,	// (0x00030c27) list_single_midp_graphic_pane_cp_ParamLimits

0xc565,	// (0x00030c27) list_single_midp_graphic_pane_cp

0xce5b,	// (0x0003151d) list_highlight_pane_cp20

0x5c4a,	// (0x0002a30c) list_single_2graphic_pane_g1_cp4

0x51d7,	// (0x00029899) list_single_2graphic_pane_g2_cp4

0x5c52,	// (0x0002a314) list_single_2graphic_pane_t1_cp4

0xceb7,	// (0x00031579) list_highlight_pane_cp21

0x5c61,	// (0x0002a323) list_single_midp_graphic_pane_g4_cp

0x5c70,	// (0x0002a332) list_single_midp_graphic_pane_t1_cp

0xc586,	// (0x00030c48) form2_mdip_string_pane_t1_ParamLimits

0xc586,	// (0x00030c48) form2_mdip_string_pane_t1

0xce5b,	// (0x0003151d) bg_wml_button_pane_cp2

0xce51,	// (0x00031513) form2_midp_image_pane_g1

0xeb5a,	// (0x0003321c) list_double_large_graphic_pane_g5_ParamLimits

0xeb5a,	// (0x0003321c) list_double_large_graphic_pane_g5

0xae2c,	// (0x0002f4ee) midp_form_pane_ParamLimits

0xceb7,	// (0x00031579) main_apps_wheel_pane_ParamLimits

0xb58c,	// (0x0002fc4e) popup_preview_window_ParamLimits

0xb58c,	// (0x0002fc4e) popup_preview_window

0x16f8,	// (0x00025dba) popup_touch_info_window_ParamLimits

0x16f8,	// (0x00025dba) popup_touch_info_window

0x171a,	// (0x00025ddc) popup_touch_menu_window_ParamLimits

0x171a,	// (0x00025ddc) popup_touch_menu_window

0xce47,	// (0x00031509) bg_popup_sub_pane_cp6

0x5d21,	// (0x0002a3e3) list_touch_menu_pane

0x5d29,	// (0x0002a3eb) list_single_touch_menu_pane_ParamLimits

0x5d29,	// (0x0002a3eb) list_single_touch_menu_pane

0x5d41,	// (0x0002a403) list_single_touch_menu_pane_t1

0xceb7,	// (0x00031579) bg_popup_sub_pane_cp7_ParamLimits

0xceb7,	// (0x00031579) bg_popup_sub_pane_cp7

0x5d4f,	// (0x0002a411) heading_sub_pane

0x5d57,	// (0x0002a419) list_touch_info_pane_ParamLimits

0x5d57,	// (0x0002a419) list_touch_info_pane

0x5d66,	// (0x0002a428) list_single_touch_info_pane_ParamLimits

0x5d66,	// (0x0002a428) list_single_touch_info_pane

0x5d78,	// (0x0002a43a) list_single_touch_info_pane_t1

0x5d86,	// (0x0002a448) list_single_touch_info_pane_t2

0x0001,

0xfae4,	// (0x000341a6) list_single_touch_info_pane_t

0x2f7d,	// (0x0002763f) bg_popup_heading_pane_cp

0x5d94,	// (0x0002a456) heading_sub_pane_t1

0x384e,	// (0x00027f10) bg_popup_preview_window_pane_cp_ParamLimits

0x384e,	// (0x00027f10) bg_popup_preview_window_pane_cp

0x5d4f,	// (0x0002a411) heading_preview_pane

0x5d57,	// (0x0002a419) list_preview_pane_ParamLimits

0x5d57,	// (0x0002a419) list_preview_pane

0x5da2,	// (0x0002a464) popup_preview_window_g1

0x5d66,	// (0x0002a428) list_single_preview_pane_ParamLimits

0x5d66,	// (0x0002a428) list_single_preview_pane

0x5daa,	// (0x0002a46c) list_single_preview_pane_g1

0x5db2,	// (0x0002a474) list_single_preview_pane_t1

0x5d78,	// (0x0002a43a) list_single_preview_pane_t2

0x0001,

0xfae9,	// (0x000341ab) list_single_preview_pane_t

0x5dc0,	// (0x0002a482) bg_popup_heading_pane_cp2_ParamLimits

0x5dc0,	// (0x0002a482) bg_popup_heading_pane_cp2

0x5dd6,	// (0x0002a498) heading_preview_pane_g1

0x5dde,	// (0x0002a4a0) heading_preview_pane_t1_ParamLimits

0x5dde,	// (0x0002a4a0) heading_preview_pane_t1

0xcf0a,	// (0x000315cc) soft_indicator_pane_t1_ParamLimits

0xd46c,	// (0x00031b2e) scroll_pane_ParamLimits

0x08e7,	// (0x00024fa9) scroll_sc2_left_pane

0x08f0,	// (0x00024fb2) scroll_sc2_right_pane

0x090f,	// (0x00024fd1) scroll_bg_pane_g1_ParamLimits

0x0924,	// (0x00024fe6) scroll_bg_pane_g2_ParamLimits

0x093c,	// (0x00024ffe) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x00033d80) scroll_bg_pane_g_ParamLimits

0x090f,	// (0x00024fd1) scroll_handle_pane_g1_ParamLimits

0x095e,	// (0x00025020) scroll_handle_pane_g2_ParamLimits

0x093c,	// (0x00024ffe) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x00033d87) scroll_handle_pane_g_ParamLimits

0x1156,	// (0x00025818) popup_choice_list_window_ParamLimits

0x1156,	// (0x00025818) popup_choice_list_window

0x3724,	// (0x00027de6) choice_list_pane

0x37a6,	// (0x00027e68) cell_toolbar_pane_t1

0x37ce,	// (0x00027e90) toolbar_button_pane_ParamLimits

0x4893,	// (0x00028f55) ai_gene_pane_1_t2_ParamLimits

0x4893,	// (0x00028f55) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x00033faa) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x00033faa) ai_gene_pane_1_t

0x5dfb,	// (0x0002a4bd) scroll_sc2_left_pane_g1

0x5dfb,	// (0x0002a4bd) scroll_sc2_right_pane_g1

0x32a4,	// (0x00027966) bg_popup_sub_pane_cp10

0x5e05,	// (0x0002a4c7) list_choice_list_pane

0x5e1e,	// (0x0002a4e0) list_single_choice_list_pane_ParamLimits

0x5e1e,	// (0x0002a4e0) list_single_choice_list_pane

0x5e36,	// (0x0002a4f8) list_single_choice_list_pane_g1

0x041f,	// (0x00024ae1) list_single_choice_list_pane_t1_ParamLimits

0x041f,	// (0x00024ae1) list_single_choice_list_pane_t1

0x5e3e,	// (0x0002a500) choice_list_pane_g1

0x5e46,	// (0x0002a508) choice_list_pane_t1

0xce47,	// (0x00031509) input_focus_pane_cp11

0x0646,	// (0x00024d08) title_pane_stacon_g2_ParamLimits

0x0646,	// (0x00024d08) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x00033d66) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x00033d66) title_pane_stacon_g

0x2f7d,	// (0x0002763f) cursor_press_pane

0xb203,	// (0x0002f8c5) popup_fep_hwr_window_ParamLimits

0xb203,	// (0x0002f8c5) popup_fep_hwr_window

0x129a,	// (0x0002595c) popup_fep_vkb_window_ParamLimits

0x129a,	// (0x0002595c) popup_fep_vkb_window

0x5e54,	// (0x0002a516) cursor_press_pane_g1

0x0002,

0xfb12,	// (0x000341d4) fep_vkb_side_pane_g_ParamLimits

0x1c2f,	// (0x000262f1) fep_hwr_candidate_pane_ParamLimits

0x1c2f,	// (0x000262f1) fep_hwr_candidate_pane

0x1c59,	// (0x0002631b) fep_hwr_side_pane_ParamLimits

0x1c59,	// (0x0002631b) fep_hwr_side_pane

0x1c7b,	// (0x0002633d) fep_hwr_top_pane_ParamLimits

0x1c7b,	// (0x0002633d) fep_hwr_top_pane

0x1c93,	// (0x00026355) fep_hwr_write_pane_ParamLimits

0x1c93,	// (0x00026355) fep_hwr_write_pane

0xfb12,	// (0x000341d4) fep_vkb_side_pane_g

0x5e5c,	// (0x0002a51e) fep_hwr_top_pane_g1

0x5e6e,	// (0x0002a530) fep_hwr_top_pane_g2

0x1cbf,	// (0x00026381) fep_hwr_top_pane_g3

0x0002,

0xfaee,	// (0x000341b0) fep_hwr_top_pane_g

0x1cd4,	// (0x00026396) fep_hwr_top_text_pane

0x0ab3,	// (0x00025175) fep_hwr_top_text_pane_g1

0x5ea4,	// (0x0002a566) fep_hwr_top_text_pane_t1

0x1dde,	// (0x000264a0) fep_hwr_candidate_pane_g1

0x60ef,	// (0x0002a7b1) fep_vkb_keypad_pane_g3_ParamLimits

0x60ef,	// (0x0002a7b1) fep_vkb_keypad_pane_g3

0x611b,	// (0x0002a7dd) fep_vkb_keypad_pane_g4_ParamLimits

0x611b,	// (0x0002a7dd) fep_vkb_keypad_pane_g4

0x6192,	// (0x0002a854) fep_vkb_bottom_pane_g2_ParamLimits

0x6192,	// (0x0002a854) fep_vkb_bottom_pane_g2

0x0001,

0xfb19,	// (0x000341db) fep_vkb_bottom_pane_g_ParamLimits

0xfb19,	// (0x000341db) fep_vkb_bottom_pane_g

0x5dfb,	// (0x0002a4bd) cell_vkb_side_pane_g2

0x0001,

0xfb23,	// (0x000341e5) cell_vkb_side_pane_g

0x621d,	// (0x0002a8df) cell_vkb_side_pane_t1

0x622b,	// (0x0002a8ed) cell_vkb_side_pane_t1_copy1

0x5dfb,	// (0x0002a4bd) bg_fep_vkb_candidate_pane_g2

0x636f,	// (0x0002aa31) cell_vkb_candidate_pane_ParamLimits

0x5eb2,	// (0x0002a574) aid_size_cell_vkb_ParamLimits

0x5eb2,	// (0x0002a574) aid_size_cell_vkb

0x636f,	// (0x0002aa31) cell_vkb_candidate_pane

0x1df8,	// (0x000264ba) bg_popup_fep_shadow_pane_g1

0xc66f,	// (0x00030d31) fep_vkb_bottom_pane_ParamLimits

0xc66f,	// (0x00030d31) fep_vkb_bottom_pane

0x5f81,	// (0x0002a643) fep_vkb_candidate_pane_ParamLimits

0x5f81,	// (0x0002a643) fep_vkb_candidate_pane

0xc69b,	// (0x00030d5d) fep_vkb_keypad_pane_ParamLimits

0xc69b,	// (0x00030d5d) fep_vkb_keypad_pane

0xc6c2,	// (0x00030d84) fep_vkb_side_pane_ParamLimits

0xc6c2,	// (0x00030d84) fep_vkb_side_pane

0xc6fe,	// (0x00030dc0) fep_vkb_top_pane_ParamLimits

0xc6fe,	// (0x00030dc0) fep_vkb_top_pane

0x6048,	// (0x0002a70a) fep_vkb_top_pane_g1_ParamLimits

0x6048,	// (0x0002a70a) fep_vkb_top_pane_g1

0x6057,	// (0x0002a719) fep_vkb_top_pane_g2_ParamLimits

0x6057,	// (0x0002a719) fep_vkb_top_pane_g2

0x6066,	// (0x0002a728) fep_vkb_top_pane_g3_ParamLimits

0x6066,	// (0x0002a728) fep_vkb_top_pane_g3

0x0003,

0xfb09,	// (0x000341cb) fep_vkb_top_pane_g_ParamLimits

0xfb09,	// (0x000341cb) fep_vkb_top_pane_g

0x6084,	// (0x0002a746) fep_vkb_top_text_pane_ParamLimits

0x6084,	// (0x0002a746) fep_vkb_top_text_pane

0xc73a,	// (0x00030dfc) fep_vkb_side_pane_g1_ParamLimits

0xc73a,	// (0x00030dfc) fep_vkb_side_pane_g1

0x60de,	// (0x0002a7a0) grid_vkb_side_pane_ParamLimits

0x60de,	// (0x0002a7a0) grid_vkb_side_pane

0x1e00,	// (0x000264c2) bg_popup_fep_shadow_pane_g2

0x1e09,	// (0x000264cb) bg_popup_fep_shadow_pane_g3

0x1e11,	// (0x000264d3) bg_popup_fep_shadow_pane_g4

0x1e1a,	// (0x000264dc) bg_popup_fep_shadow_pane_g5

0x1e24,	// (0x000264e6) bg_popup_fep_shadow_pane_g6

0x1e2c,	// (0x000264ee) bg_popup_fep_shadow_pane_g7

0xd571,	// (0x00031c33) bg_popup_fep_shadow_pane_g8

0x613d,	// (0x0002a7ff) grid_vkb_keypad_number_pane_ParamLimits

0x613d,	// (0x0002a7ff) grid_vkb_keypad_number_pane

0x6151,	// (0x0002a813) grid_vkb_keypad_pane_ParamLimits

0x6151,	// (0x0002a813) grid_vkb_keypad_pane

0x6177,	// (0x0002a839) fep_vkb_bottom_pane_g1_ParamLimits

0x6177,	// (0x0002a839) fep_vkb_bottom_pane_g1

0x61a0,	// (0x0002a862) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x61a0,	// (0x0002a862) grid_vkb_keypad_bottom_left_pane

0x61b5,	// (0x0002a877) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x61b5,	// (0x0002a877) grid_vkb_keypad_bottom_right_pane

0x61ca,	// (0x0002a88c) fep_vkb_top_text_pane_g1

0xc781,	// (0x00030e43) fep_vkb_top_text_pane_t1

0xc793,	// (0x00030e55) cell_vkb_side_pane_ParamLimits

0xc793,	// (0x00030e55) cell_vkb_side_pane

0x5dfb,	// (0x0002a4bd) cell_vkb_side_pane_g1

0x6239,	// (0x0002a8fb) cell_vkb_keypad_pane_ParamLimits

0x6239,	// (0x0002a8fb) cell_vkb_keypad_pane

0x62c6,	// (0x0002a988) cell_vkb_keypad_pane_g1

0x0008,

0xfb36,	// (0x000341f8) bg_popup_fep_shadow_pane_g

0x5dfb,	// (0x0002a4bd) cell_hwr_side_pane_g1

0x5dfb,	// (0x0002a4bd) cell_hwr_side_pane_g2

0x62d0,	// (0x0002a992) cell_vkb_keypad_pane_t1

0xc7a9,	// (0x00030e6b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc7a9,	// (0x00030e6b) cell_vkb_keypad_bottom_left_pane

0xc7be,	// (0x00030e80) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc7be,	// (0x00030e80) cell_vkb_keypad_bottom_right_pane

0x5dfb,	// (0x0002a4bd) cell_vkb_keypad_bottom_left_pane_g1

0x5dfb,	// (0x0002a4bd) cell_vkb_keypad_bottom_right_pane_g1

0x6334,	// (0x0002a9f6) cell_vkb_keypad_number_pane_ParamLimits

0x6334,	// (0x0002a9f6) cell_vkb_keypad_number_pane

0x6353,	// (0x0002aa15) cell_vkb_keypad_number_pane_g1

0x635d,	// (0x0002aa1f) cell_vkb_keypad_number_pane_g2

0x6366,	// (0x0002aa28) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb28,	// (0x000341ea) cell_vkb_keypad_number_pane_g

0x62d0,	// (0x0002a992) cell_vkb_keypad_number_pane_t1

0x6390,	// (0x0002aa52) fep_vkb_candidate_pane_g1

0x0001,

0xfb23,	// (0x000341e5) cell_hwr_side_pane_g

0x63a9,	// (0x0002aa6b) cell_hwr_side_pane_t1

0x1e3e,	// (0x00026500) cell_hwr_side_pane_t1_copy1

0x6076,	// (0x0002a738) cell_hwr_candidate_pane_g1

0x1e4c,	// (0x0002650e) cell_hwr_candidate_pane_t1

0x5dfb,	// (0x0002a4bd) cell_vkb_candidate_pane_g2

0x642f,	// (0x0002aaf1) cell_vkb_candidate_pane_t1

0x1bf6,	// (0x000262b8) bg_popup_fep_shadow_pane_ParamLimits

0x1bf6,	// (0x000262b8) bg_popup_fep_shadow_pane

0xd599,	// (0x00031c5b) bg_fep_hwr_top_pane_g4

0x5e80,	// (0x0002a542) bg_hwr_side_pane_g1_ParamLimits

0x5e80,	// (0x0002a542) bg_hwr_side_pane_g1

0xc628,	// (0x00030cea) cell_hwr_side_pane_ParamLimits

0xc628,	// (0x00030cea) cell_hwr_side_pane

0x1d4f,	// (0x00026411) fep_hwr_write_pane_g1_ParamLimits

0x1d4f,	// (0x00026411) fep_hwr_write_pane_g1

0x1d5c,	// (0x0002641e) fep_hwr_write_pane_g2_ParamLimits

0x1d5c,	// (0x0002641e) fep_hwr_write_pane_g2

0x1d69,	// (0x0002642b) fep_hwr_write_pane_g3_ParamLimits

0x1d69,	// (0x0002642b) fep_hwr_write_pane_g3

0xc648,	// (0x00030d0a) fep_hwr_write_pane_g4_ParamLimits

0xc648,	// (0x00030d0a) fep_hwr_write_pane_g4

0x0005,

0xfaf5,	// (0x000341b7) fep_hwr_write_pane_g_ParamLimits

0xfaf5,	// (0x000341b7) fep_hwr_write_pane_g

0xd599,	// (0x00031c5b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd599,	// (0x00031c5b) bg_fep_hwr_candidate_pane_g2

0x1d8c,	// (0x0002644e) cell_hwr_candidate_pane_ParamLimits

0x1d8c,	// (0x0002644e) cell_hwr_candidate_pane

0x1dde,	// (0x000264a0) fep_hwr_candidate_pane_g1_ParamLimits

0x5ee0,	// (0x0002a5a2) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5ee0,	// (0x0002a5a2) bg_popup_fep_shadow_pane_cp2

0x6076,	// (0x0002a738) fep_vkb_top_pane_g4_ParamLimits

0x6076,	// (0x0002a738) fep_vkb_top_pane_g4

0x60bc,	// (0x0002a77e) fep_vkb_side_pane_g2_ParamLimits

0x60bc,	// (0x0002a77e) fep_vkb_side_pane_g2

0xa06d,	// (0x0002e72f) list_setting_pane_t4_ParamLimits

0xa06d,	// (0x0002e72f) list_setting_pane_t4

0xa101,	// (0x0002e7c3) list_setting_number_pane_t5_ParamLimits

0xa101,	// (0x0002e7c3) list_setting_number_pane_t5

0x0b09,	// (0x000251cb) list_double_heading_pane_cp2_ParamLimits

0x0b09,	// (0x000251cb) list_double_heading_pane_cp2

0x643d,	// (0x0002aaff) list_double_heading_pane_g1_cp2_ParamLimits

0x643d,	// (0x0002aaff) list_double_heading_pane_g1_cp2

0x6449,	// (0x0002ab0b) list_double_heading_pane_g2_cp2_ParamLimits

0x6449,	// (0x0002ab0b) list_double_heading_pane_g2_cp2

0x645d,	// (0x0002ab1f) list_double_heading_pane_t1_cp2_ParamLimits

0x645d,	// (0x0002ab1f) list_double_heading_pane_t1_cp2

0x6473,	// (0x0002ab35) list_double_heading_pane_t2_cp2_ParamLimits

0x6473,	// (0x0002ab35) list_double_heading_pane_t2_cp2

0xce3f,	// (0x00031501) aid_value_unit2

0xf51f,	// (0x00033be1) popup_preview_fixed_window

0xcfea,	// (0x000316ac) bg_popup_preview_window_pane_cp02

0x6485,	// (0x0002ab47) list_preview_fixed_pane

0x64cb,	// (0x0002ab8d) list_empty_pane_fp_ParamLimits

0x64cb,	// (0x0002ab8d) list_empty_pane_fp

0x64cb,	// (0x0002ab8d) list_single_cale_day_pane_fp_ParamLimits

0x64cb,	// (0x0002ab8d) list_single_cale_day_pane_fp

0x64cb,	// (0x0002ab8d) list_single_graphic_heading_pane_fp_ParamLimits

0x64cb,	// (0x0002ab8d) list_single_graphic_heading_pane_fp

0x64cb,	// (0x0002ab8d) list_single_graphic_pane_fp_ParamLimits

0x64cb,	// (0x0002ab8d) list_single_graphic_pane_fp

0x64cb,	// (0x0002ab8d) list_single_heading_pane_fp_ParamLimits

0x64cb,	// (0x0002ab8d) list_single_heading_pane_fp

0x64cb,	// (0x0002ab8d) list_single_pane_fp_ParamLimits

0x64cb,	// (0x0002ab8d) list_single_pane_fp

0x64e4,	// (0x0002aba6) list_single_pane_fp_g1_ParamLimits

0x64e4,	// (0x0002aba6) list_single_pane_fp_g1

0xeed4,	// (0x00033596) list_single_pane_fp_g2_ParamLimits

0xeed4,	// (0x00033596) list_single_pane_fp_g2

0xf12f,	// (0x000337f1) list_single_pane_fp_g3_ParamLimits

0xf12f,	// (0x000337f1) list_single_pane_fp_g3

0x64f0,	// (0x0002abb2) list_single_pane_fp_g4_ParamLimits

0x64f0,	// (0x0002abb2) list_single_pane_fp_g4

0x0003,

0xfb57,	// (0x00034219) list_single_pane_fp_g_ParamLimits

0xfb57,	// (0x00034219) list_single_pane_fp_g

0xf143,	// (0x00033805) list_single_pane_fp_t1_ParamLimits

0xf143,	// (0x00033805) list_single_pane_fp_t1

0xf15a,	// (0x0003381c) list_single_graphic_pane_fp_g1_ParamLimits

0xf15a,	// (0x0003381c) list_single_graphic_pane_fp_g1

0x64e4,	// (0x0002aba6) list_single_graphic_pane_fp_g2_ParamLimits

0x64e4,	// (0x0002aba6) list_single_graphic_pane_fp_g2

0xeed4,	// (0x00033596) list_single_graphic_pane_fp_g3_ParamLimits

0xeed4,	// (0x00033596) list_single_graphic_pane_fp_g3

0xf12f,	// (0x000337f1) list_single_graphic_pane_fp_g4_ParamLimits

0xf12f,	// (0x000337f1) list_single_graphic_pane_fp_g4

0x64f0,	// (0x0002abb2) list_single_graphic_pane_fp_g5_ParamLimits

0x64f0,	// (0x0002abb2) list_single_graphic_pane_fp_g5

0x0004,

0xfb60,	// (0x00034222) list_single_graphic_pane_fp_g_ParamLimits

0xfb60,	// (0x00034222) list_single_graphic_pane_fp_g

0xf166,	// (0x00033828) list_single_graphic_pane_fp_t1_ParamLimits

0xf166,	// (0x00033828) list_single_graphic_pane_fp_t1

0xf15a,	// (0x0003381c) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf15a,	// (0x0003381c) list_single_graphic_heading_pane_fp_g1

0x64e4,	// (0x0002aba6) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x64e4,	// (0x0002aba6) list_single_graphic_heading_pane_fp_g2

0xeed4,	// (0x00033596) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xeed4,	// (0x00033596) list_single_graphic_heading_pane_fp_g3

0xf12f,	// (0x000337f1) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xf12f,	// (0x000337f1) list_single_graphic_heading_pane_fp_g4

0x64f0,	// (0x0002abb2) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x64f0,	// (0x0002abb2) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb60,	// (0x00034222) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb60,	// (0x00034222) list_single_graphic_heading_pane_fp_g

0xf17c,	// (0x0003383e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf17c,	// (0x0003383e) list_single_graphic_heading_pane_fp_t1

0xf192,	// (0x00033854) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf192,	// (0x00033854) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6b,	// (0x0003422d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6b,	// (0x0003422d) list_single_graphic_heading_pane_fp_t

0xf1a4,	// (0x00033866) list_single_cale_day_pane_fp_g1_ParamLimits

0xf1a4,	// (0x00033866) list_single_cale_day_pane_fp_g1

0x64fc,	// (0x0002abbe) list_single_cale_day_pane_fp_g2_ParamLimits

0x64fc,	// (0x0002abbe) list_single_cale_day_pane_fp_g2

0xf1dc,	// (0x0003389e) list_single_cale_day_pane_fp_g3_ParamLimits

0xf1dc,	// (0x0003389e) list_single_cale_day_pane_fp_g3

0xf204,	// (0x000338c6) list_single_cale_day_pane_fp_g4_ParamLimits

0xf204,	// (0x000338c6) list_single_cale_day_pane_fp_g4

0xf228,	// (0x000338ea) list_single_cale_day_pane_fp_g5_ParamLimits

0xf228,	// (0x000338ea) list_single_cale_day_pane_fp_g5

0x0004,

0xfb70,	// (0x00034232) list_single_cale_day_pane_fp_g_ParamLimits

0xfb70,	// (0x00034232) list_single_cale_day_pane_fp_g

0xf24c,	// (0x0003390e) list_single_cale_day_pane_fp_t1_ParamLimits

0xf24c,	// (0x0003390e) list_single_cale_day_pane_fp_t1

0xf272,	// (0x00033934) list_single_cale_day_pane_fp_t2_ParamLimits

0xf272,	// (0x00033934) list_single_cale_day_pane_fp_t2

0xf28b,	// (0x0003394d) list_single_cale_day_pane_fp_t3_ParamLimits

0xf28b,	// (0x0003394d) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7b,	// (0x0003423d) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7b,	// (0x0003423d) list_single_cale_day_pane_fp_t

0x64e4,	// (0x0002aba6) list_empty_pane_fp_g1_ParamLimits

0x64e4,	// (0x0002aba6) list_empty_pane_fp_g1

0xf2a4,	// (0x00033966) list_empty_pane_fp_t1

0xf2b2,	// (0x00033974) list_empty_pane_fp_t2

0x0001,

0xfb82,	// (0x00034244) list_empty_pane_fp_t

0x64e4,	// (0x0002aba6) list_single_heading_pane_fp_g1_ParamLimits

0x64e4,	// (0x0002aba6) list_single_heading_pane_fp_g1

0xeed4,	// (0x00033596) list_single_heading_pane_fp_g2_ParamLimits

0xeed4,	// (0x00033596) list_single_heading_pane_fp_g2

0xf12f,	// (0x000337f1) list_single_heading_pane_fp_g3_ParamLimits

0xf12f,	// (0x000337f1) list_single_heading_pane_fp_g3

0x0002,

0xfb87,	// (0x00034249) list_single_heading_pane_fp_g_ParamLimits

0xfb87,	// (0x00034249) list_single_heading_pane_fp_g

0xf2c0,	// (0x00033982) list_single_heading_pane_fp_t1_ParamLimits

0xf2c0,	// (0x00033982) list_single_heading_pane_fp_t1

0xf2d2,	// (0x00033994) list_single_heading_pane_fp_t2_ParamLimits

0xf2d2,	// (0x00033994) list_single_heading_pane_fp_t2

0x0001,

0xfb8e,	// (0x00034250) list_single_heading_pane_fp_t_ParamLimits

0xfb8e,	// (0x00034250) list_single_heading_pane_fp_t

0x048d,	// (0x00024b4f) aid_size_cell_fast

0xcfcd,	// (0x0003168f) soft_indicator_pane_cp1_t1

0x04ca,	// (0x00024b8c) cell_app_pane_cp2_ParamLimits

0x04ca,	// (0x00024b8c) cell_app_pane_cp2

0x1c18,	// (0x000262da) fep_hwr_candidate_drop_down_list_pane

0xd5a7,	// (0x00031c69) fep_hwr_candidate_pane_g3_ParamLimits

0xd5a7,	// (0x00031c69) fep_hwr_candidate_pane_g3

0xd5b4,	// (0x00031c76) fep_hwr_candidate_pane_g4_ParamLimits

0xd5b4,	// (0x00031c76) fep_hwr_candidate_pane_g4

0x0002,

0xfb02,	// (0x000341c4) fep_hwr_candidate_pane_g_ParamLimits

0xfb02,	// (0x000341c4) fep_hwr_candidate_pane_g

0x5f70,	// (0x0002a632) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x5f70,	// (0x0002a632) fep_vkb_candidate_drop_down_list_pane

0x6398,	// (0x0002aa5a) fep_vkb_candidate_pane_g3

0x63a0,	// (0x0002aa62) fep_vkb_candidate_pane_g4

0x0002,

0xfb2f,	// (0x000341f1) fep_vkb_candidate_pane_g

0x6076,	// (0x0002a738) cell_hwr_candidate_pane_g1_ParamLimits

0x63b7,	// (0x0002aa79) cell_hwr_candidate_pane_g3_ParamLimits

0x63b7,	// (0x0002aa79) cell_hwr_candidate_pane_g3

0x63d8,	// (0x0002aa9a) cell_hwr_candidate_pane_g4_ParamLimits

0x63d8,	// (0x0002aa9a) cell_hwr_candidate_pane_g4

0x0002,

0xfb49,	// (0x0003420b) cell_hwr_candidate_pane_g_ParamLimits

0xfb49,	// (0x0003420b) cell_hwr_candidate_pane_g

0x63f9,	// (0x0002aabb) cell_vkb_candidate_pane_g3_ParamLimits

0x63f9,	// (0x0002aabb) cell_vkb_candidate_pane_g3

0x6414,	// (0x0002aad6) cell_vkb_candidate_pane_g4_ParamLimits

0x6414,	// (0x0002aad6) cell_vkb_candidate_pane_g4

0x6508,	// (0x0002abca) cell_app_pane_cp2_g1_ParamLimits

0x6508,	// (0x0002abca) cell_app_pane_cp2_g1

0x6526,	// (0x0002abe8) cell_app_pane_cp2_g2_ParamLimits

0x6526,	// (0x0002abe8) cell_app_pane_cp2_g2

0x0001,

0xfb93,	// (0x00034255) cell_app_pane_cp2_g_ParamLimits

0xfb93,	// (0x00034255) cell_app_pane_cp2_g

0x6532,	// (0x0002abf4) cell_app_pane_cp2_t1_ParamLimits

0x6532,	// (0x0002abf4) cell_app_pane_cp2_t1

0xd4f9,	// (0x00031bbb) grid_highlight_pane_cp1_ParamLimits

0xd4f9,	// (0x00031bbb) grid_highlight_pane_cp1

0x1e6a,	// (0x0002652c) cell_hwr_candidate_pane_cp1_ParamLimits

0x1e6a,	// (0x0002652c) cell_hwr_candidate_pane_cp1

0x6076,	// (0x0002a738) fep_hwr_candidate_drop_down_list_pane_g1

0x6544,	// (0x0002ac06) fep_hwr_candidate_drop_down_list_pane_g2

0x6551,	// (0x0002ac13) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb98,	// (0x0003425a) fep_hwr_candidate_drop_down_list_pane_g

0x1e8e,	// (0x00026550) fep_hwr_candidate_drop_down_list_scroll_pane

0x1e97,	// (0x00026559) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1e97,	// (0x00026559) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1ea4,	// (0x00026566) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1ea4,	// (0x00026566) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1eb1,	// (0x00026573) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1eb1,	// (0x00026573) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x63f9,	// (0x0002aabb) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x63f9,	// (0x0002aabb) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6414,	// (0x0002aad6) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6414,	// (0x0002aad6) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1ebe,	// (0x00026580) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1ebe,	// (0x00026580) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1ed9,	// (0x0002659b) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1ed9,	// (0x0002659b) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1ef4,	// (0x000265b6) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1ef4,	// (0x000265b6) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9f,	// (0x00034261) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9f,	// (0x00034261) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x655e,	// (0x0002ac20) cell_vkb_candidate_pane_cp1_ParamLimits

0x655e,	// (0x0002ac20) cell_vkb_candidate_pane_cp1

0x6076,	// (0x0002a738) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6076,	// (0x0002a738) fep_vkb_candidate_drop_down_list_pane_g1

0x6544,	// (0x0002ac06) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x6544,	// (0x0002ac06) fep_vkb_candidate_drop_down_list_pane_g2

0x6551,	// (0x0002ac13) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x6551,	// (0x0002ac13) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb98,	// (0x0003425a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb98,	// (0x0003425a) fep_vkb_candidate_drop_down_list_pane_g

0x6584,	// (0x0002ac46) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x6584,	// (0x0002ac46) fep_vkb_candidate_drop_down_list_scroll_pane

0x6591,	// (0x0002ac53) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6591,	// (0x0002ac53) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x659e,	// (0x0002ac60) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x659e,	// (0x0002ac60) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x65aa,	// (0x0002ac6c) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x65aa,	// (0x0002ac6c) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x63b7,	// (0x0002aa79) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x63b7,	// (0x0002aa79) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x63d8,	// (0x0002aa9a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x63d8,	// (0x0002aa9a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x65b6,	// (0x0002ac78) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x65b6,	// (0x0002ac78) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x65d7,	// (0x0002ac99) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x65d7,	// (0x0002ac99) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x65f8,	// (0x0002acba) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x65f8,	// (0x0002acba) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb0,	// (0x00034272) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb0,	// (0x00034272) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa77a,	// (0x0002ee3c) title_pane_g1_ParamLimits

0xa78d,	// (0x0002ee4f) title_pane_g2_ParamLimits

0xf529,	// (0x00033beb) title_pane_g_ParamLimits

0x0aa3,	// (0x00025165) aid_call2_pane

0x0aab,	// (0x0002516d) aid_call_pane

0x0ab3,	// (0x00025175) popup_clock_analogue_window_g1

0x0ab3,	// (0x00025175) popup_clock_analogue_window_g2

0x0abb,	// (0x0002517d) popup_clock_analogue_window_g3

0x0ac4,	// (0x00025186) popup_clock_analogue_window_g4

0xce51,	// (0x00031513) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x00033d95) popup_clock_analogue_window_g

0x0acc,	// (0x0002518e) popup_clock_analogue_window_t1

0x0b5c,	// (0x0002521e) clock_digital_number_pane_ParamLimits

0x0b5c,	// (0x0002521e) clock_digital_number_pane

0x0b68,	// (0x0002522a) clock_digital_number_pane_cp02_ParamLimits

0x0b68,	// (0x0002522a) clock_digital_number_pane_cp02

0x0b74,	// (0x00025236) clock_digital_number_pane_cp03_ParamLimits

0x0b74,	// (0x00025236) clock_digital_number_pane_cp03

0x0b80,	// (0x00025242) clock_digital_number_pane_cp04_ParamLimits

0x0b80,	// (0x00025242) clock_digital_number_pane_cp04

0x0b8c,	// (0x0002524e) clock_digital_separator_pane_ParamLimits

0x0b8c,	// (0x0002524e) clock_digital_separator_pane

0x0b98,	// (0x0002525a) popup_clock_digital_window_t1_ParamLimits

0x0b98,	// (0x0002525a) popup_clock_digital_window_t1

0xce51,	// (0x00031513) clock_digital_number_pane_g1

0xce51,	// (0x00031513) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x00033da0) clock_digital_number_pane_g

0xce51,	// (0x00031513) clock_digital_separator_pane_g1

0xce51,	// (0x00031513) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x00033da0) clock_digital_separator_pane_g

0xb872,	// (0x0002ff34) aid_fill_nsta_ParamLimits

0xb9aa,	// (0x0003006c) indicator_nsta_pane_ParamLimits

0x35bd,	// (0x00027c7f) popup_clock_analogue_window

0x35bd,	// (0x00027c7f) popup_clock_digital_window

0xc421,	// (0x00030ae3) grid_indicator_nsta_pane_ParamLimits

0x5850,	// (0x00029f12) clock_nsta_pane_t2

0x0001,

0xfa82,	// (0x00034144) clock_nsta_pane_t

0x088c,	// (0x00024f4e) aid_size_max_handle

0xac96,	// (0x0002f358) aid_size_min_handle

0x2f7d,	// (0x0002763f) editor_scroll_pane

0x6613,	// (0x0002acd5) ex_editor_pane

0x03fa,	// (0x00024abc) scroll_pane_cp13

0xd498,	// (0x00031b5a) scroll_pane_cp14

0x0b01,	// (0x000251c3) scroll_pane_cp36

0xad23,	// (0x0002f3e5) list_single_graphic_hl_pane_cp2_ParamLimits

0xad23,	// (0x0002f3e5) list_single_graphic_hl_pane_cp2

0xc2ae,	// (0x00030970) list_single_graphic_hl_pane_ParamLimits

0xc2ae,	// (0x00030970) list_single_graphic_hl_pane

0xf2e8,	// (0x000339aa) aid_size_min_hl_cp1

0x661b,	// (0x0002acdd) list_highlight_pane_cp34_ParamLimits

0x661b,	// (0x0002acdd) list_highlight_pane_cp34

0x662c,	// (0x0002acee) list_single_graphic_hl_pane_g1_ParamLimits

0x662c,	// (0x0002acee) list_single_graphic_hl_pane_g1

0xa36d,	// (0x0002ea2f) list_single_graphic_hl_pane_g2_ParamLimits

0xa36d,	// (0x0002ea2f) list_single_graphic_hl_pane_g2

0xa36d,	// (0x0002ea2f) list_single_graphic_hl_pane_g3_ParamLimits

0xa36d,	// (0x0002ea2f) list_single_graphic_hl_pane_g3

0xeee0,	// (0x000335a2) list_single_graphic_hl_pane_g4_ParamLimits

0xeee0,	// (0x000335a2) list_single_graphic_hl_pane_g4

0xa379,	// (0x0002ea3b) list_single_graphic_hl_pane_g5_ParamLimits

0xa379,	// (0x0002ea3b) list_single_graphic_hl_pane_g5

0x0004,

0xfbc1,	// (0x00034283) list_single_graphic_hl_pane_g_ParamLimits

0xfbc1,	// (0x00034283) list_single_graphic_hl_pane_g

0xa38d,	// (0x0002ea4f) list_single_graphic_hl_pane_t1_ParamLimits

0xa38d,	// (0x0002ea4f) list_single_graphic_hl_pane_t1

0x6639,	// (0x0002acfb) aid_size_min_hl_cp2

0x6642,	// (0x0002ad04) list_highlight_pane_cp34_cp2_ParamLimits

0x6642,	// (0x0002ad04) list_highlight_pane_cp34_cp2

0x662c,	// (0x0002acee) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x662c,	// (0x0002acee) list_single_graphic_hl_pane_g1_cp2

0x664f,	// (0x0002ad11) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x664f,	// (0x0002ad11) list_single_graphic_hl_pane_g2_cp2

0x665b,	// (0x0002ad1d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x665b,	// (0x0002ad1d) list_single_graphic_hl_pane_g3_cp2

0x5694,	// (0x00029d56) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5694,	// (0x00029d56) list_single_graphic_hl_pane_g4_cp2

0x6669,	// (0x0002ad2b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x6669,	// (0x0002ad2b) list_single_graphic_hl_pane_g5_cp2

0xafe5,	// (0x0002f6a7) control_pane_g4_ParamLimits

0xafe5,	// (0x0002f6a7) control_pane_g4

0x32a4,	// (0x00027966) bg_popup_sub_pane_cp10_ParamLimits

0x5e05,	// (0x0002a4c7) list_choice_list_pane_ParamLimits

0x5e14,	// (0x0002a4d6) scroll_pane_cp23

0xcfea,	// (0x000316ac) bg_popup_preview_window_pane_cp02_ParamLimits

0x6485,	// (0x0002ab47) list_preview_fixed_pane_ParamLimits

0x649b,	// (0x0002ab5d) list_preview_fixed_pane_cp_ParamLimits

0x649b,	// (0x0002ab5d) list_preview_fixed_pane_cp

0x64a7,	// (0x0002ab69) popup_preview_fixed_window_g1_ParamLimits

0x64a7,	// (0x0002ab69) popup_preview_fixed_window_g1

0x64b3,	// (0x0002ab75) popup_preview_fixed_window_g2_ParamLimits

0x64b3,	// (0x0002ab75) popup_preview_fixed_window_g2

0x0002,

0xfb50,	// (0x00034212) popup_preview_fixed_window_g_ParamLimits

0xfb50,	// (0x00034212) popup_preview_fixed_window_g

0x072b,	// (0x00024ded) aid_navi_side_left_pane_ParamLimits

0x0740,	// (0x00024e02) aid_navi_side_right_pane_ParamLimits

0x0758,	// (0x00024e1a) navi_icon_pane_stacon_ParamLimits

0x076c,	// (0x00024e2e) navi_navi_pane_stacon_ParamLimits

0x0758,	// (0x00024e1a) navi_text_pane_stacon_ParamLimits

0xce47,	// (0x00031509) main_text_info_pane

0x6693,	// (0x0002ad55) listscroll_text_info_pane

0x669b,	// (0x0002ad5d) list_text_info_pane_ParamLimits

0x669b,	// (0x0002ad5d) list_text_info_pane

0x66aa,	// (0x0002ad6c) scroll_pane_cp24_ParamLimits

0x66aa,	// (0x0002ad6c) scroll_pane_cp24

0xc7d9,	// (0x00030e9b) list_text_info_pane_t1_ParamLimits

0xc7d9,	// (0x00030e9b) list_text_info_pane_t1

0xb167,	// (0x0002f829) popup_fast_swap2_window_ParamLimits

0xb167,	// (0x0002f829) popup_fast_swap2_window

0x66ed,	// (0x0002adaf) aid_size_cell_fast2

0xce47,	// (0x00031509) bg_popup_window_pane_cp17

0x3c10,	// (0x000282d2) heading_pane_cp2

0x3c18,	// (0x000282da) listscroll_fast2_pane

0x66f7,	// (0x0002adb9) grid_fast2_pane

0x6701,	// (0x0002adc3) listscroll_fast2_pane_g1

0x670b,	// (0x0002adcd) listscroll_fast2_pane_g2

0x0001,

0xfbcc,	// (0x0003428e) listscroll_fast2_pane_g

0x03fa,	// (0x00024abc) scroll_pane_cp26

0x6715,	// (0x0002add7) cell_fast2_pane_ParamLimits

0x6715,	// (0x0002add7) cell_fast2_pane

0x672c,	// (0x0002adee) cell_fast2_pane_g1

0x6735,	// (0x0002adf7) cell_fast2_pane_g2

0x673e,	// (0x0002ae00) cell_fast2_pane_g3

0x0002,

0xfbd1,	// (0x00034293) cell_fast2_pane_g

0xd25f,	// (0x00031921) grid_highlight_pane_cp9

0xd274,	// (0x00031936) main_eswt_pane_ParamLimits

0xd274,	// (0x00031936) main_eswt_pane

0x66bf,	// (0x0002ad81) list_single_text_info_pane

0x6746,	// (0x0002ae08) eswt_ctrl_button_pane

0x6746,	// (0x0002ae08) eswt_ctrl_canvas_pane

0x674e,	// (0x0002ae10) eswt_ctrl_combo_pane

0x6746,	// (0x0002ae08) eswt_ctrl_default_pane

0x6746,	// (0x0002ae08) eswt_ctrl_label_pane

0x6756,	// (0x0002ae18) eswt_ctrl_wait_pane

0x675e,	// (0x0002ae20) eswt_shell_pane

0xce47,	// (0x00031509) listscroll_eswt_app_pane

0x677e,	// (0x0002ae40) popup_eswt_tasktip_window_ParamLimits

0x677e,	// (0x0002ae40) popup_eswt_tasktip_window

0x384e,	// (0x00027f10) bg_popup_window_pane_cp18

0x678f,	// (0x0002ae51) eswt_control_pane_g1_ParamLimits

0x678f,	// (0x0002ae51) eswt_control_pane_g1

0x679c,	// (0x0002ae5e) eswt_control_pane_g2_ParamLimits

0x679c,	// (0x0002ae5e) eswt_control_pane_g2

0x67a9,	// (0x0002ae6b) eswt_control_pane_g3_ParamLimits

0x67a9,	// (0x0002ae6b) eswt_control_pane_g3

0x67b6,	// (0x0002ae78) eswt_control_pane_g4_ParamLimits

0x67b6,	// (0x0002ae78) eswt_control_pane_g4

0x0003,

0xfbd8,	// (0x0003429a) eswt_control_pane_g_ParamLimits

0xfbd8,	// (0x0003429a) eswt_control_pane_g

0xd4f9,	// (0x00031bbb) bg_button_pane_ParamLimits

0xd4f9,	// (0x00031bbb) bg_button_pane

0xd274,	// (0x00031936) common_borders_pane_copy2_ParamLimits

0xd274,	// (0x00031936) common_borders_pane_copy2

0x67c3,	// (0x0002ae85) control_button_pane_g1_ParamLimits

0x67c3,	// (0x0002ae85) control_button_pane_g1

0x67cf,	// (0x0002ae91) control_button_pane_g2_ParamLimits

0x67cf,	// (0x0002ae91) control_button_pane_g2

0x67db,	// (0x0002ae9d) control_button_pane_g3_ParamLimits

0x67db,	// (0x0002ae9d) control_button_pane_g3

0x0002,

0xfbe1,	// (0x000342a3) control_button_pane_g_ParamLimits

0xfbe1,	// (0x000342a3) control_button_pane_g

0x67ef,	// (0x0002aeb1) control_button_pane_t1

0x67fd,	// (0x0002aebf) control_button_pane_t2

0x0001,

0xfbe8,	// (0x000342aa) control_button_pane_t

0x37da,	// (0x00027e9c) bg_button_pane_g1

0x37e2,	// (0x00027ea4) bg_button_pane_g2

0x37ea,	// (0x00027eac) bg_button_pane_g3

0x37f2,	// (0x00027eb4) bg_button_pane_g4

0x37fa,	// (0x00027ebc) bg_button_pane_g5

0x3802,	// (0x00027ec4) bg_button_pane_g6

0x380a,	// (0x00027ecc) bg_button_pane_g7

0x3812,	// (0x00027ed4) bg_button_pane_g8

0x381a,	// (0x00027edc) bg_button_pane_g9

0x0008,

0xf83c,	// (0x00033efe) bg_button_pane_g

0x5dc0,	// (0x0002a482) common_borders_pane_ParamLimits

0x5dc0,	// (0x0002a482) common_borders_pane

0x678f,	// (0x0002ae51) eswt_control_pane_g1_copy1_ParamLimits

0x678f,	// (0x0002ae51) eswt_control_pane_g1_copy1

0x679c,	// (0x0002ae5e) eswt_control_pane_g2_copy1_ParamLimits

0x679c,	// (0x0002ae5e) eswt_control_pane_g2_copy1

0x67a9,	// (0x0002ae6b) eswt_control_pane_g3_copy1_ParamLimits

0x67a9,	// (0x0002ae6b) eswt_control_pane_g3_copy1

0x67b6,	// (0x0002ae78) eswt_control_pane_g4_copy1_ParamLimits

0x67b6,	// (0x0002ae78) eswt_control_pane_g4_copy1

0x5dfb,	// (0x0002a4bd) bg_eswt_ctrl_canvas_pane_g1

0x5dc0,	// (0x0002a482) common_borders_pane_cp2_ParamLimits

0x5dc0,	// (0x0002a482) common_borders_pane_cp2

0x5dc0,	// (0x0002a482) common_borders_pane_cp3_ParamLimits

0x5dc0,	// (0x0002a482) common_borders_pane_cp3

0x680b,	// (0x0002aecd) separator_horizontal_pane

0x6813,	// (0x0002aed5) separator_vertical_pane

0x678f,	// (0x0002ae51) eswt_control_pane_g1_copy2_ParamLimits

0x678f,	// (0x0002ae51) eswt_control_pane_g1_copy2

0x679c,	// (0x0002ae5e) eswt_control_pane_g2_copy2_ParamLimits

0x679c,	// (0x0002ae5e) eswt_control_pane_g2_copy2

0x67a9,	// (0x0002ae6b) eswt_control_pane_g3_copy2_ParamLimits

0x67a9,	// (0x0002ae6b) eswt_control_pane_g3_copy2

0x67b6,	// (0x0002ae78) eswt_control_pane_g4_copy2_ParamLimits

0x67b6,	// (0x0002ae78) eswt_control_pane_g4_copy2

0xce47,	// (0x00031509) common_borders_pane_cp4

0x681c,	// (0x0002aede) separator_horizontal_pane_g1

0x6825,	// (0x0002aee7) separator_horizontal_pane_g2

0x682e,	// (0x0002aef0) separator_horizontal_pane_g3

0x0002,

0xfbed,	// (0x000342af) separator_horizontal_pane_g

0x678f,	// (0x0002ae51) eswt_control_pane_g1_copy3_ParamLimits

0x678f,	// (0x0002ae51) eswt_control_pane_g1_copy3

0x679c,	// (0x0002ae5e) eswt_control_pane_g2_copy3_ParamLimits

0x679c,	// (0x0002ae5e) eswt_control_pane_g2_copy3

0x67a9,	// (0x0002ae6b) eswt_control_pane_g3_copy3_ParamLimits

0x67a9,	// (0x0002ae6b) eswt_control_pane_g3_copy3

0x67b6,	// (0x0002ae78) eswt_control_pane_g4_copy3_ParamLimits

0x67b6,	// (0x0002ae78) eswt_control_pane_g4_copy3

0xce47,	// (0x00031509) common_borders_pane_cp5

0x6837,	// (0x0002aef9) separator_vertical_pane_g1

0x6840,	// (0x0002af02) separator_vertical_pane_g2

0x6849,	// (0x0002af0b) separator_vertical_pane_g3

0x0002,

0xfbf4,	// (0x000342b6) separator_vertical_pane_g

0x678f,	// (0x0002ae51) eswt_control_pane_g1_copy4_ParamLimits

0x678f,	// (0x0002ae51) eswt_control_pane_g1_copy4

0x679c,	// (0x0002ae5e) eswt_control_pane_g2_copy4_ParamLimits

0x679c,	// (0x0002ae5e) eswt_control_pane_g2_copy4

0x67a9,	// (0x0002ae6b) eswt_control_pane_g3_copy4_ParamLimits

0x67a9,	// (0x0002ae6b) eswt_control_pane_g3_copy4

0x67b6,	// (0x0002ae78) eswt_control_pane_g4_copy4_ParamLimits

0x67b6,	// (0x0002ae78) eswt_control_pane_g4_copy4

0xc7fb,	// (0x00030ebd) eswt_ctrl_combo_button_pane

0xc803,	// (0x00030ec5) eswt_ctrl_input_pane

0xc80b,	// (0x00030ecd) popup_choice_list_window_cp70

0xc813,	// (0x00030ed5) eswt_ctrl_input_pane_t1

0xce47,	// (0x00031509) input_focus_pane_cp70

0x5dc0,	// (0x0002a482) bg_button_pane_cp70_ParamLimits

0x5dc0,	// (0x0002a482) bg_button_pane_cp70

0xc821,	// (0x00030ee3) eswt_ctrl_combo_button_pane_g1

0x6880,	// (0x0002af42) wait_bar_pane_cp70

0x384e,	// (0x00027f10) bg_popup_window_pane_cp70_ParamLimits

0x384e,	// (0x00027f10) bg_popup_window_pane_cp70

0x6888,	// (0x0002af4a) popup_eswt_tasktip_window_t1

0x689e,	// (0x0002af60) wait_bar_pane_cp71_ParamLimits

0x689e,	// (0x0002af60) wait_bar_pane_cp71

0x68aa,	// (0x0002af6c) grid_eswt_app_pane

0x08f0,	// (0x00024fb2) scroll_pane_cp70

0xd5c1,	// (0x00031c83) cell_eswt_app_pane_ParamLimits

0xd5c1,	// (0x00031c83) cell_eswt_app_pane

0xd5f3,	// (0x00031cb5) cell_eswt_app_pane_g1_ParamLimits

0xd5f3,	// (0x00031cb5) cell_eswt_app_pane_g1

0xd622,	// (0x00031ce4) cell_eswt_app_pane_g2_ParamLimits

0xd622,	// (0x00031ce4) cell_eswt_app_pane_g2

0x0001,

0xfbfb,	// (0x000342bd) cell_eswt_app_pane_g_ParamLimits

0xfbfb,	// (0x000342bd) cell_eswt_app_pane_g

0xd64b,	// (0x00031d0d) cell_eswt_app_pane_t1_ParamLimits

0xd64b,	// (0x00031d0d) cell_eswt_app_pane_t1

0x696f,	// (0x0002b031) grid_highlight_pane_cp70_ParamLimits

0x696f,	// (0x0002b031) grid_highlight_pane_cp70

0x2e4e,	// (0x00027510) set_content_pane_g1

0xaf77,	// (0x0002f639) status_small_volume_pane

0x1f0f,	// (0x000265d1) status_small_volume_pane_g1

0x1f17,	// (0x000265d9) volume_small2_pane

0x1f20,	// (0x000265e2) volume_small2_pane_g1

0x1f29,	// (0x000265eb) volume_small2_pane_g2

0x1f32,	// (0x000265f4) volume_small2_pane_g3

0x1f3b,	// (0x000265fd) volume_small2_pane_g4

0x1f44,	// (0x00026606) volume_small2_pane_g5

0x1f4d,	// (0x0002660f) volume_small2_pane_g6

0x1f56,	// (0x00026618) volume_small2_pane_g7

0x1f5f,	// (0x00026621) volume_small2_pane_g8

0x1f68,	// (0x0002662a) volume_small2_pane_g9

0x1f71,	// (0x00026633) volume_small2_pane_g10

0x0009,

0xfc00,	// (0x000342c2) volume_small2_pane_g

0x61ca,	// (0x0002a88c) fep_vkb_top_text_pane_g1_ParamLimits

0xc781,	// (0x00030e43) fep_vkb_top_text_pane_t1_ParamLimits

0x64bf,	// (0x0002ab81) popup_preview_fixed_window_g3_ParamLimits

0x64bf,	// (0x0002ab81) popup_preview_fixed_window_g3

0xb805,	// (0x0002fec7) popup_toolbar_trans_pane

0xc0e8,	// (0x000307aa) aid_height_set_list_ParamLimits

0x4bb7,	// (0x00029279) aid_size_parent_ParamLimits

0x32a4,	// (0x00027966) list_highlight_pane_cp2_ParamLimits

0x2e4e,	// (0x00027510) set_content_pane_g1_ParamLimits

0xc2c2,	// (0x00030984) list_single_image_pane_ParamLimits

0xc2c2,	// (0x00030984) list_single_image_pane

0xd67d,	// (0x00031d3f) aid_size_cell_image_ParamLimits

0xd67d,	// (0x00031d3f) aid_size_cell_image

0xd68a,	// (0x00031d4c) grid_single_image_pane_ParamLimits

0xd68a,	// (0x00031d4c) grid_single_image_pane

0xd507,	// (0x00031bc9) list_single_image_pane_g1_ParamLimits

0xd507,	// (0x00031bc9) list_single_image_pane_g1

0xd513,	// (0x00031bd5) list_single_image_pane_g2_ParamLimits

0xd513,	// (0x00031bd5) list_single_image_pane_g2

0x0001,

0xfc15,	// (0x000342d7) list_single_image_pane_g_ParamLimits

0xfc15,	// (0x000342d7) list_single_image_pane_g

0x6996,	// (0x0002b058) list_single_image_pane_t1_ParamLimits

0x6996,	// (0x0002b058) list_single_image_pane_t1

0xd698,	// (0x00031d5a) cell_image_list_pane_ParamLimits

0xd698,	// (0x00031d5a) cell_image_list_pane

0xd6ae,	// (0x00031d70) cell_image_list_pane_g1

0xd6b7,	// (0x00031d79) cell_image_list_pane_g2

0x0001,

0xfc1a,	// (0x000342dc) cell_image_list_pane_g

0x69d6,	// (0x0002b098) aid_size_cell_tb_trans_pane

0xd4f9,	// (0x00031bbb) bg_tb_trans_pane

0x69e8,	// (0x0002b0aa) grid_tb_trans_pane

0x37da,	// (0x00027e9c) bg_tb_trans_pane_g1

0x37e2,	// (0x00027ea4) bg_tb_trans_pane_g2

0x37ea,	// (0x00027eac) bg_tb_trans_pane_g3

0x37f2,	// (0x00027eb4) bg_tb_trans_pane_g4

0x37fa,	// (0x00027ebc) bg_tb_trans_pane_g5

0x3812,	// (0x00027ed4) bg_tb_trans_pane_g6

0x381a,	// (0x00027edc) bg_tb_trans_pane_g7

0x3802,	// (0x00027ec4) bg_tb_trans_pane_g8

0x380a,	// (0x00027ecc) bg_tb_trans_pane_g9

0x0008,

0xfc1f,	// (0x000342e1) bg_tb_trans_pane_g

0x69fc,	// (0x0002b0be) cell_toolbar_trans_pane_ParamLimits

0x69fc,	// (0x0002b0be) cell_toolbar_trans_pane

0x5dfb,	// (0x0002a4bd) cell_toolbar_trans_pane_g1

0xc504,	// (0x00030bc6) list_form2_midp_pane_t1

0xc512,	// (0x00030bd4) list_form2_midp_pane_t2

0x0001,

0xfac8,	// (0x0003418a) list_form2_midp_pane_t

0x5a4f,	// (0x0002a111) scroll_pane_cp51_ParamLimits

0x5c16,	// (0x0002a2d8) form2_midp_wait_pane_g1

0x5c1f,	// (0x0002a2e1) form2_midp_wait_pane_g2

0x5c28,	// (0x0002a2ea) form2_midp_wait_pane_g3

0x0002,

0xfadd,	// (0x0003419f) form2_midp_wait_pane_g

0xceb7,	// (0x00031579) list_highlight_pane_cp21_ParamLimits

0x5c61,	// (0x0002a323) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5c70,	// (0x0002a332) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4da0,	// (0x00029462) list_single_2graphic_im_pane_ParamLimits

0x4da0,	// (0x00029462) list_single_2graphic_im_pane

0xd6c0,	// (0x00031d82) list_single_2graphic_im_pane_g1_ParamLimits

0xd6c0,	// (0x00031d82) list_single_2graphic_im_pane_g1

0xd6d1,	// (0x00031d93) list_single_2graphic_im_pane_g2_ParamLimits

0xd6d1,	// (0x00031d93) list_single_2graphic_im_pane_g2

0xd6dd,	// (0x00031d9f) list_single_2graphic_im_pane_g3_ParamLimits

0xd6dd,	// (0x00031d9f) list_single_2graphic_im_pane_g3

0x0003,

0xfc32,	// (0x000342f4) list_single_2graphic_im_pane_g_ParamLimits

0xfc32,	// (0x000342f4) list_single_2graphic_im_pane_g

0xd6f1,	// (0x00031db3) list_single_2graphic_im_pane_t1_ParamLimits

0xd6f1,	// (0x00031db3) list_single_2graphic_im_pane_t1

0x64cb,	// (0x0002ab8d) list_single_graphic_2heading_pane_fp_ParamLimits

0x64cb,	// (0x0002ab8d) list_single_graphic_2heading_pane_fp

0xf15a,	// (0x0003381c) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf15a,	// (0x0003381c) list_single_graphic_2heading_pane_fp_g1

0x64e4,	// (0x0002aba6) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x64e4,	// (0x0002aba6) list_single_graphic_2heading_pane_fp_g2

0xeed4,	// (0x00033596) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xeed4,	// (0x00033596) list_single_graphic_2heading_pane_fp_g3

0xf12f,	// (0x000337f1) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xf12f,	// (0x000337f1) list_single_graphic_2heading_pane_fp_g4

0x64f0,	// (0x0002abb2) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x64f0,	// (0x0002abb2) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb60,	// (0x00034222) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb60,	// (0x00034222) list_single_graphic_2heading_pane_fp_g

0xf460,	// (0x00033b22) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf460,	// (0x00033b22) list_single_graphic_2heading_pane_fp_t1

0xf192,	// (0x00033854) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf192,	// (0x00033854) list_single_graphic_2heading_pane_fp_t2

0xf476,	// (0x00033b38) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf476,	// (0x00033b38) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3b,	// (0x000342fd) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3b,	// (0x000342fd) list_single_graphic_2heading_pane_fp_t

0x5e8c,	// (0x0002a54e) fep_hwr_write_pane_g5_ParamLimits

0x5e8c,	// (0x0002a54e) fep_hwr_write_pane_g5

0x5e98,	// (0x0002a55a) fep_hwr_write_pane_g6_ParamLimits

0x5e98,	// (0x0002a55a) fep_hwr_write_pane_g6

0x675e,	// (0x0002ae20) eswt_shell_pane_ParamLimits

0x384e,	// (0x00027f10) bg_popup_window_pane_cp18_ParamLimits

0x4afd,	// (0x000291bf) heading_pane_cp70

0x6888,	// (0x0002af4a) popup_eswt_tasktip_window_t1_ParamLimits

0xb8cf,	// (0x0002ff91) aid_touch_tab_arrow_left

0xb8e5,	// (0x0002ffa7) aid_touch_tab_arrow_right

0xa7b1,	// (0x0002ee73) title_pane_g3_ParamLimits

0xa7b1,	// (0x0002ee73) title_pane_g3

0xd4b8,	// (0x00031b7a) set_value_pane_g1

0xb805,	// (0x0002fec7) popup_toolbar_trans_pane_ParamLimits

0x69d6,	// (0x0002b098) aid_size_cell_tb_trans_pane_ParamLimits

0xd4f9,	// (0x00031bbb) bg_tb_trans_pane_ParamLimits

0x69e8,	// (0x0002b0aa) grid_tb_trans_pane_ParamLimits

0xcfea,	// (0x000316ac) cont_note_pane_ParamLimits

0xcfea,	// (0x000316ac) cont_note_pane

0xd274,	// (0x00031936) cont_snote2_single_text_pane_ParamLimits

0xd274,	// (0x00031936) cont_snote2_single_text_pane

0xd274,	// (0x00031936) cont_snote2_single_graphic_pane_ParamLimits

0xd274,	// (0x00031936) cont_snote2_single_graphic_pane

0x3e40,	// (0x00028502) cont_note_wait_pane_ParamLimits

0x3e40,	// (0x00028502) cont_note_wait_pane

0x3e40,	// (0x00028502) cont_note_image_pane_ParamLimits

0x3e40,	// (0x00028502) cont_note_image_pane

0x6a90,	// (0x0002b152) popup_note2_window_g1_ParamLimits

0x6a90,	// (0x0002b152) popup_note2_window_g1

0x6ac1,	// (0x0002b183) popup_note2_window_t1_ParamLimits

0x6ac1,	// (0x0002b183) popup_note2_window_t1

0x6b06,	// (0x0002b1c8) popup_note2_window_t2_ParamLimits

0x6b06,	// (0x0002b1c8) popup_note2_window_t2

0x6b4b,	// (0x0002b20d) popup_note2_window_t3_ParamLimits

0x6b4b,	// (0x0002b20d) popup_note2_window_t3

0x6b90,	// (0x0002b252) popup_note2_window_t4_ParamLimits

0x6b90,	// (0x0002b252) popup_note2_window_t4

0xd06e,	// (0x00031730) popup_note2_window_t5_ParamLimits

0xd06e,	// (0x00031730) popup_note2_window_t5

0x0004,

0xfc47,	// (0x00034309) popup_note2_window_t_ParamLimits

0xfc47,	// (0x00034309) popup_note2_window_t

0x6bbf,	// (0x0002b281) popup_note2_image_window_g1_ParamLimits

0x6bbf,	// (0x0002b281) popup_note2_image_window_g1

0x6bcb,	// (0x0002b28d) popup_note2_image_window_g2_ParamLimits

0x6bcb,	// (0x0002b28d) popup_note2_image_window_g2

0x0001,

0xfc52,	// (0x00034314) popup_note2_image_window_g_ParamLimits

0xfc52,	// (0x00034314) popup_note2_image_window_g

0x6bdd,	// (0x0002b29f) popup_note2_image_window_t1_ParamLimits

0x6bdd,	// (0x0002b29f) popup_note2_image_window_t1

0x6bf5,	// (0x0002b2b7) popup_note2_image_window_t2_ParamLimits

0x6bf5,	// (0x0002b2b7) popup_note2_image_window_t2

0x6c0d,	// (0x0002b2cf) popup_note2_image_window_t3_ParamLimits

0x6c0d,	// (0x0002b2cf) popup_note2_image_window_t3

0x0002,

0xfc57,	// (0x00034319) popup_note2_image_window_t_ParamLimits

0xfc57,	// (0x00034319) popup_note2_image_window_t

0x3e4e,	// (0x00028510) popup_note2_wait_window_g1_ParamLimits

0x3e4e,	// (0x00028510) popup_note2_wait_window_g1

0x6c29,	// (0x0002b2eb) popup_note2_wait_window_g2_ParamLimits

0x6c29,	// (0x0002b2eb) popup_note2_wait_window_g2

0x3e66,	// (0x00028528) popup_note2_wait_window_g3_ParamLimits

0x3e66,	// (0x00028528) popup_note2_wait_window_g3

0x0002,

0xfc5e,	// (0x00034320) popup_note2_wait_window_g_ParamLimits

0xfc5e,	// (0x00034320) popup_note2_wait_window_g

0x6c35,	// (0x0002b2f7) popup_note2_wait_window_t1_ParamLimits

0x6c35,	// (0x0002b2f7) popup_note2_wait_window_t1

0x6c53,	// (0x0002b315) popup_note2_wait_window_t2_ParamLimits

0x6c53,	// (0x0002b315) popup_note2_wait_window_t2

0x6c71,	// (0x0002b333) popup_note2_wait_window_t3_ParamLimits

0x6c71,	// (0x0002b333) popup_note2_wait_window_t3

0x6c83,	// (0x0002b345) popup_note2_wait_window_t4_ParamLimits

0x6c83,	// (0x0002b345) popup_note2_wait_window_t4

0x0003,

0xfc65,	// (0x00034327) popup_note2_wait_window_t_ParamLimits

0xfc65,	// (0x00034327) popup_note2_wait_window_t

0x6c95,	// (0x0002b357) wait_bar2_pane_ParamLimits

0x6c95,	// (0x0002b357) wait_bar2_pane

0x6cad,	// (0x0002b36f) popup_snote2_single_text_window_g1_ParamLimits

0x6cad,	// (0x0002b36f) popup_snote2_single_text_window_g1

0x6cd5,	// (0x0002b397) popup_snote2_single_text_window_t1_ParamLimits

0x6cd5,	// (0x0002b397) popup_snote2_single_text_window_t1

0x6d21,	// (0x0002b3e3) popup_snote2_single_text_window_t2_ParamLimits

0x6d21,	// (0x0002b3e3) popup_snote2_single_text_window_t2

0x6d6d,	// (0x0002b42f) popup_snote2_single_text_window_t3_ParamLimits

0x6d6d,	// (0x0002b42f) popup_snote2_single_text_window_t3

0x6dae,	// (0x0002b470) popup_snote2_single_text_window_t4_ParamLimits

0x6dae,	// (0x0002b470) popup_snote2_single_text_window_t4

0x6de4,	// (0x0002b4a6) popup_snote2_single_text_window_t5_ParamLimits

0x6de4,	// (0x0002b4a6) popup_snote2_single_text_window_t5

0x0004,

0xfc6e,	// (0x00034330) popup_snote2_single_text_window_t_ParamLimits

0xfc6e,	// (0x00034330) popup_snote2_single_text_window_t

0x6e0f,	// (0x0002b4d1) popup_snote2_single_graphic_window_g1_ParamLimits

0x6e0f,	// (0x0002b4d1) popup_snote2_single_graphic_window_g1

0x6e37,	// (0x0002b4f9) popup_snote2_single_graphic_window_g2_ParamLimits

0x6e37,	// (0x0002b4f9) popup_snote2_single_graphic_window_g2

0x0001,

0xfc79,	// (0x0003433b) popup_snote2_single_graphic_window_g_ParamLimits

0xfc79,	// (0x0003433b) popup_snote2_single_graphic_window_g

0x6e5f,	// (0x0002b521) popup_snote2_single_graphic_window_t1_ParamLimits

0x6e5f,	// (0x0002b521) popup_snote2_single_graphic_window_t1

0x6eab,	// (0x0002b56d) popup_snote2_single_graphic_window_t2_ParamLimits

0x6eab,	// (0x0002b56d) popup_snote2_single_graphic_window_t2

0x6d6d,	// (0x0002b42f) popup_snote2_single_graphic_window_t3_ParamLimits

0x6d6d,	// (0x0002b42f) popup_snote2_single_graphic_window_t3

0x6dae,	// (0x0002b470) popup_snote2_single_graphic_window_t4_ParamLimits

0x6dae,	// (0x0002b470) popup_snote2_single_graphic_window_t4

0x6de4,	// (0x0002b4a6) popup_snote2_single_graphic_window_t5_ParamLimits

0x6de4,	// (0x0002b4a6) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7e,	// (0x00034340) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7e,	// (0x00034340) popup_snote2_single_graphic_window_t

0x58ff,	// (0x00029fc1) clock_nsta_pane_cp2_t1

0x58ff,	// (0x00029fc1) clock_nsta_pane_cp2_t2

0x0001,

0xfa9e,	// (0x00034160) clock_nsta_pane_cp2_t

0xebe6,	// (0x000332a8) form_field_data_wide_pane_g1_ParamLimits

0xd507,	// (0x00031bc9) form_field_data_wide_pane_g2_ParamLimits

0xd507,	// (0x00031bc9) form_field_data_wide_pane_g2

0xd513,	// (0x00031bd5) form_field_data_wide_pane_g3_ParamLimits

0xd513,	// (0x00031bd5) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x00033d18) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x00033d18) form_field_data_wide_pane_g

0xc40b,	// (0x00030acd) grid_touch_3_pane_ParamLimits

0xc40b,	// (0x00030acd) grid_touch_3_pane

0xd722,	// (0x00031de4) cell_touch_3_pane_ParamLimits

0xd722,	// (0x00031de4) cell_touch_3_pane

0x5dfb,	// (0x0002a4bd) cell_touch_3_pane_g1

0x5dfb,	// (0x0002a4bd) cell_touch_3_pane_g2

0x0001,

0xfb23,	// (0x000341e5) cell_touch_3_pane_g

0xd0c6,	// (0x00031788) cont_query_data_pane

0xd0ce,	// (0x00031790) cont_query_data_pane_cp1

0x6f2a,	// (0x0002b5ec) button_value_adjust_pane_cp7

0x6f32,	// (0x0002b5f4) query_popup_pane_cp3

0x0c15,	// (0x000252d7) bg_popup_sub_pane_cp22_ParamLimits

0x0c2b,	// (0x000252ed) navi_navi_volume_pane_cp2

0x0c46,	// (0x00025308) popup_side_volume_key_window_g2

0x0c55,	// (0x00025317) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x00033dae) popup_side_volume_key_window_g

0x0c72,	// (0x00025334) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x00033db5) popup_side_volume_key_window_t

0x2d09,	// (0x000273cb) popup_side_volume_key_window_ParamLimits

0x9e73,	// (0x0002e535) list_double_graphic_pane_g4_ParamLimits

0x9e73,	// (0x0002e535) list_double_graphic_pane_g4

0xc296,	// (0x00030958) list_single_2heading_msg_pane_ParamLimits

0xc296,	// (0x00030958) list_single_2heading_msg_pane

0xa3a3,	// (0x0002ea65) list_single_2heading_msg_pane_g1_ParamLimits

0xa3a3,	// (0x0002ea65) list_single_2heading_msg_pane_g1

0xa3af,	// (0x0002ea71) list_single_2heading_msg_pane_g2_ParamLimits

0xa3af,	// (0x0002ea71) list_single_2heading_msg_pane_g2

0xa3c2,	// (0x0002ea84) list_single_2heading_msg_pane_g3_ParamLimits

0xa3c2,	// (0x0002ea84) list_single_2heading_msg_pane_g3

0xa3ce,	// (0x0002ea90) list_single_2heading_msg_pane_g4_ParamLimits

0xa3ce,	// (0x0002ea90) list_single_2heading_msg_pane_g4

0x0003,

0xfc89,	// (0x0003434b) list_single_2heading_msg_pane_g_ParamLimits

0xfc89,	// (0x0003434b) list_single_2heading_msg_pane_g

0xa3e6,	// (0x0002eaa8) list_single_2heading_msg_pane_t1_ParamLimits

0xa3e6,	// (0x0002eaa8) list_single_2heading_msg_pane_t1

0xa40e,	// (0x0002ead0) list_single_2heading_msg_pane_t2_ParamLimits

0xa40e,	// (0x0002ead0) list_single_2heading_msg_pane_t2

0xa479,	// (0x0002eb3b) list_single_2heading_msg_pane_t3_ParamLimits

0xa479,	// (0x0002eb3b) list_single_2heading_msg_pane_t3

0xf496,	// (0x00033b58) list_single_2heading_msg_pane_t4_ParamLimits

0xf496,	// (0x00033b58) list_single_2heading_msg_pane_t4

0x0003,

0xfc92,	// (0x00034354) list_single_2heading_msg_pane_t_ParamLimits

0xfc92,	// (0x00034354) list_single_2heading_msg_pane_t

0xce65,	// (0x00031527) title_pane_g4_ParamLimits

0xce65,	// (0x00031527) title_pane_g4

0x0653,	// (0x00024d15) title_pane_stacon_g3_ParamLimits

0x0653,	// (0x00024d15) title_pane_stacon_g3

0x6a53,	// (0x0002b115) list_single_2graphic_im_pane_g4_ParamLimits

0x6a53,	// (0x0002b115) list_single_2graphic_im_pane_g4

0x48b0,	// (0x00028f72) popup_side_volume_key_window_cp

0x50de,	// (0x000297a0) main_idle_act2_pane_t1

0x178f,	// (0x00025e51) toolbar_button_pane_g10

0xab2e,	// (0x0002f1f0) popup_toolbar_window_cp1

0x58f0,	// (0x00029fb2) clock_nsta_pane_cp_t1

0x58f0,	// (0x00029fb2) clock_nsta_pane_cp_t2

0x0001,

0xfa99,	// (0x0003415b) clock_nsta_pane_cp_t

0x0c2b,	// (0x000252ed) navi_navi_volume_pane_cp2_ParamLimits

0x0c3a,	// (0x000252fc) popup_side_volume_key_window_g1_ParamLimits

0x0c46,	// (0x00025308) popup_side_volume_key_window_g2_ParamLimits

0x0c55,	// (0x00025317) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x00033dae) popup_side_volume_key_window_g_ParamLimits

0x1c04,	// (0x000262c6) fep_hwr_aid_pane

0xd599,	// (0x00031c5b) bg_fep_hwr_top_pane_g4_ParamLimits

0x5e5c,	// (0x0002a51e) fep_hwr_top_pane_g1_ParamLimits

0x5e6e,	// (0x0002a530) fep_hwr_top_pane_g2_ParamLimits

0x1cbf,	// (0x00026381) fep_hwr_top_pane_g3_ParamLimits

0xfaee,	// (0x000341b0) fep_hwr_top_pane_g_ParamLimits

0x1cd4,	// (0x00026396) fep_hwr_top_text_pane_ParamLimits

0x4665,	// (0x00028d27) aid_touch_tab_arrow_arrow_2

0x466e,	// (0x00028d30) aid_touch_tab_arrow_left_2

0x1c18,	// (0x000262da) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1c4f,	// (0x00026311) fep_hwr_prediction_pane

0x5fc4,	// (0x0002a686) fep_vkb_prediction_pane

0xc761,	// (0x00030e23) fep_vkb_side_pane_g3_ParamLimits

0xc761,	// (0x00030e23) fep_vkb_side_pane_g3

0x6076,	// (0x0002a738) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6544,	// (0x0002ac06) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6551,	// (0x0002ac13) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb98,	// (0x0003425a) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6f59,	// (0x0002b61b) fep_hwr_prediction_pane_g1

0x1f7a,	// (0x0002663c) fep_hwr_prediction_pane_g2

0x1f82,	// (0x00026644) fep_hwr_prediction_pane_g3

0x1f8a,	// (0x0002664c) fep_hwr_prediction_pane_g4

0x0003,

0xfc9b,	// (0x0003435d) fep_hwr_prediction_pane_g

0x6f59,	// (0x0002b61b) fep_vkb_prediction_pane_g1

0x6f63,	// (0x0002b625) fep_vkb_prediction_pane_g2

0x6f6b,	// (0x0002b62d) fep_vkb_prediction_pane_g3

0x6f73,	// (0x0002b635) fep_vkb_prediction_pane_g4

0x0003,

0xfca4,	// (0x00034366) fep_vkb_prediction_pane_g

0x1a84,	// (0x00026146) slider_set_pane_g3

0x1a98,	// (0x0002615a) slider_set_pane_g4

0x1ab0,	// (0x00026172) slider_set_pane_g5

0x1a84,	// (0x00026146) slider_set_pane_g6

0x1ac6,	// (0x00026188) slider_set_pane_g7

0x4d36,	// (0x000293f8) slider_form_pane_g3

0x4d3f,	// (0x00029401) slider_form_pane_g4

0x4d47,	// (0x00029409) slider_form_pane_g5

0x4d36,	// (0x000293f8) slider_form_pane_g6

0xc251,	// (0x00030913) slider_form_pane_g7

0x53a2,	// (0x00029a64) slider_set_pane_vc_g3

0x53ab,	// (0x00029a6d) slider_set_pane_vc_g4

0x53b4,	// (0x00029a76) slider_set_pane_vc_g5

0x53a2,	// (0x00029a64) slider_set_pane_vc_g6

0x53bd,	// (0x00029a7f) slider_set_pane_vc_g7

0x5593,	// (0x00029c55) slider_form_pane_vc_g1

0x559c,	// (0x00029c5e) slider_form_pane_vc_g2

0x55a5,	// (0x00029c67) slider_form_pane_vc_g3

0x5593,	// (0x00029c55) slider_form_pane_vc_g4

0x55ae,	// (0x00029c70) slider_form_pane_vc_g5

0x0004,

0xfa6b,	// (0x0003412d) slider_form_pane_vc_g

0xce47,	// (0x00031509) main_idle_act3_pane

0x6f7b,	// (0x0002b63d) ai3_links_pane

0xd76e,	// (0x00031e30) popup_ai3_data_window_ParamLimits

0xd76e,	// (0x00031e30) popup_ai3_data_window

0xce47,	// (0x00031509) grid_ai3_links_pane

0xd78c,	// (0x00031e4e) cell_ai3_links_pane_ParamLimits

0xd78c,	// (0x00031e4e) cell_ai3_links_pane

0x6fbc,	// (0x0002b67e) bg_popup_sub_pane_cp11

0x6fc9,	// (0x0002b68b) cell_ai3_links_pane_g1

0xce47,	// (0x00031509) bg_popup_sub_pane_cp12

0x6fee,	// (0x0002b6b0) heading_ai3_data_pane

0x6ff6,	// (0x0002b6b8) list_ai3_gene_pane

0x7002,	// (0x0002b6c4) popup_ai3_data_window_g1

0x700a,	// (0x0002b6cc) heading_ai3_data_pane_g1

0x7012,	// (0x0002b6d4) heading_ai3_data_pane_t1

0x7020,	// (0x0002b6e2) list_double_ai3_gene_pane_ParamLimits

0x7020,	// (0x0002b6e2) list_double_ai3_gene_pane

0x702d,	// (0x0002b6ef) list_single_ai3_gene_pane_ParamLimits

0x702d,	// (0x0002b6ef) list_single_ai3_gene_pane

0x5dc0,	// (0x0002a482) list_highlight_pane_cp7_ParamLimits

0x5dc0,	// (0x0002a482) list_highlight_pane_cp7

0x703a,	// (0x0002b6fc) list_single_a13_gene_pane_t1_ParamLimits

0x703a,	// (0x0002b6fc) list_single_a13_gene_pane_t1

0x7051,	// (0x0002b713) list_single_ai3_gene_pane_g1

0x705a,	// (0x0002b71c) list_single_ai3_gene_pane_g2

0x0001,

0xfcad,	// (0x0003436f) list_single_ai3_gene_pane_g

0x7062,	// (0x0002b724) list_double_ai3_gene_pane_g1_ParamLimits

0x7062,	// (0x0002b724) list_double_ai3_gene_pane_g1

0x706e,	// (0x0002b730) list_double_ai3_gene_pane_t1_ParamLimits

0x706e,	// (0x0002b730) list_double_ai3_gene_pane_t1

0x708a,	// (0x0002b74c) list_double_ai3_gene_pane_t2_ParamLimits

0x708a,	// (0x0002b74c) list_double_ai3_gene_pane_t2

0x709f,	// (0x0002b761) list_double_ai3_gene_pane_t3_ParamLimits

0x709f,	// (0x0002b761) list_double_ai3_gene_pane_t3

0x0002,

0xfcb2,	// (0x00034374) list_double_ai3_gene_pane_t_ParamLimits

0xfcb2,	// (0x00034374) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf48c,	// (0x00033b4e) aid_size_min_col_2

0xd758,	// (0x00031e1a) aid_size_min_msg_ParamLimits

0xd758,	// (0x00031e1a) aid_size_min_msg

0xc775,	// (0x00030e37) fep_vkb_top_text_pane_g2_ParamLimits

0xc775,	// (0x00030e37) fep_vkb_top_text_pane_g2

0x0001,

0xfb1e,	// (0x000341e0) fep_vkb_top_text_pane_g_ParamLimits

0xfb1e,	// (0x000341e0) fep_vkb_top_text_pane_g

0xce47,	// (0x00031509) main_hc_apps_shell_pane

0x70bc,	// (0x0002b77e) grid_hc_apps_pane_ParamLimits

0x70bc,	// (0x0002b77e) grid_hc_apps_pane

0x70ce,	// (0x0002b790) list_hc_apps_pane

0x70d6,	// (0x0002b798) scroll_pane_cp37_ParamLimits

0x70d6,	// (0x0002b798) scroll_pane_cp37

0xd7a6,	// (0x00031e68) cell_hc_apps_pane_ParamLimits

0xd7a6,	// (0x00031e68) cell_hc_apps_pane

0xd86e,	// (0x00031f30) cell_hc_apps_pane_g1_ParamLimits

0xd86e,	// (0x00031f30) cell_hc_apps_pane_g1

0x71c4,	// (0x0002b886) cell_hc_apps_pane_g2_ParamLimits

0x71c4,	// (0x0002b886) cell_hc_apps_pane_g2

0x71e0,	// (0x0002b8a2) cell_hc_apps_pane_g3_ParamLimits

0x71e0,	// (0x0002b8a2) cell_hc_apps_pane_g3

0x0002,

0xfcb9,	// (0x0003437b) cell_hc_apps_pane_g_ParamLimits

0xfcb9,	// (0x0003437b) cell_hc_apps_pane_g

0xd89a,	// (0x00031f5c) cell_hc_apps_pane_t1_ParamLimits

0xd89a,	// (0x00031f5c) cell_hc_apps_pane_t1

0xcfea,	// (0x000316ac) grid_highlight_pane_cp10_ParamLimits

0xcfea,	// (0x000316ac) grid_highlight_pane_cp10

0xd8da,	// (0x00031f9c) list_single_hc_apps_pane_ParamLimits

0xd8da,	// (0x00031f9c) list_single_hc_apps_pane

0xd914,	// (0x00031fd6) list_single_hc_apps_pane_g1

0xa4e7,	// (0x0002eba9) list_single_hc_apps_pane_g2

0x0001,

0xfcc0,	// (0x00034382) list_single_hc_apps_pane_g

0xa500,	// (0x0002ebc2) list_single_hc_apps_pane_g2_copy1

0xa51c,	// (0x0002ebde) list_single_hc_apps_pane_t1

0xceb7,	// (0x00031579) bg_set_opt_pane_cp_ParamLimits

0x005f,	// (0x00024721) setting_slider_pane_t1_ParamLimits

0x0078,	// (0x0002473a) setting_slider_pane_t2_ParamLimits

0x0092,	// (0x00024754) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00033bfb) setting_slider_pane_t_ParamLimits

0x00aa,	// (0x0002476c) slider_set_pane_ParamLimits

0x1028,	// (0x000256ea) control_pane_g5_ParamLimits

0x1028,	// (0x000256ea) control_pane_g5

0x4b69,	// (0x0002922b) slider_set_pane_g1_ParamLimits

0x1a78,	// (0x0002613a) slider_set_pane_g2_ParamLimits

0x1a84,	// (0x00026146) slider_set_pane_g3_ParamLimits

0x1a98,	// (0x0002615a) slider_set_pane_g4_ParamLimits

0x1ab0,	// (0x00026172) slider_set_pane_g5_ParamLimits

0x1a84,	// (0x00026146) slider_set_pane_g6_ParamLimits

0x1ac6,	// (0x00026188) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x00033ffc) slider_set_pane_g_ParamLimits

0x2df9,	// (0x000274bb) navi_icon_text_pane_ParamLimits

0xb896,	// (0x0002ff58) aid_fill_nsta_2_ParamLimits

0xb8cf,	// (0x0002ff91) aid_touch_tab_arrow_left_ParamLimits

0xb8e5,	// (0x0002ffa7) aid_touch_tab_arrow_right_ParamLimits

0xb980,	// (0x00030042) clock_nsta_pane_ParamLimits

0xbfcf,	// (0x00030691) navi_icon_pane_g1_ParamLimits

0xbfdb,	// (0x0003069d) navi_text_pane_t1_ParamLimits

0xc4e6,	// (0x00030ba8) navi_icon_text_pane_g1_ParamLimits

0xc4f2,	// (0x00030bb4) navi_icon_text_pane_t1_ParamLimits

0xd914,	// (0x00031fd6) list_single_hc_apps_pane_g1_ParamLimits

0xa4e7,	// (0x0002eba9) list_single_hc_apps_pane_g2_ParamLimits

0xfcc0,	// (0x00034382) list_single_hc_apps_pane_g_ParamLimits

0xa500,	// (0x0002ebc2) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xa51c,	// (0x0002ebde) list_single_hc_apps_pane_t1_ParamLimits

0xa6a0,	// (0x0002ed62) popup_toolbar2_fixed_window_ParamLimits

0xa6a0,	// (0x0002ed62) popup_toolbar2_fixed_window

0xb7fb,	// (0x0002febd) popup_toolbar2_float_window

0xce47,	// (0x00031509) bg_popup_sub_pane_cp27

0x729a,	// (0x0002b95c) grid_toolbar2_float_pane

0xce47,	// (0x00031509) bg_popup_sub_pane_cp26

0x729a,	// (0x0002b95c) grid_toolbar2_fixed_pane

0xd92d,	// (0x00031fef) cell_toolbar2_fixed_pane_ParamLimits

0xd92d,	// (0x00031fef) cell_toolbar2_fixed_pane

0xd947,	// (0x00032009) cell_toolbar2_fixed_pane_g1

0x72bb,	// (0x0002b97d) toolbar2_fixed_button_pane

0x37da,	// (0x00027e9c) toolbar2_fixed_button_pane_g1

0x37e2,	// (0x00027ea4) toolbar2_fixed_button_pane_g2

0x37ea,	// (0x00027eac) toolbar2_fixed_button_pane_g3

0x37f2,	// (0x00027eb4) toolbar2_fixed_button_pane_g4

0x37fa,	// (0x00027ebc) toolbar2_fixed_button_pane_g5

0x3802,	// (0x00027ec4) toolbar2_fixed_button_pane_g6

0x380a,	// (0x00027ecc) toolbar2_fixed_button_pane_g7

0x3812,	// (0x00027ed4) toolbar2_fixed_button_pane_g8

0x381a,	// (0x00027edc) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x00033efe) toolbar2_fixed_button_pane_g

0x72c3,	// (0x0002b985) cell_toolbar2_float_pane_ParamLimits

0x72c3,	// (0x0002b985) cell_toolbar2_float_pane

0x72d4,	// (0x0002b996) cell_toolbar2_float_pane_g1

0x72bb,	// (0x0002b97d) toolbar2_fixed_button_pane_cp

0xc65d,	// (0x00030d1f) fep_vkb_accented_list_pane_ParamLimits

0xc65d,	// (0x00030d1f) fep_vkb_accented_list_pane

0x1e36,	// (0x000264f8) bg_popup_fep_shadow_pane_g9

0x2f7d,	// (0x0002763f) bg_popup_fep_shadow_pane_cp3

0x03e1,	// (0x00024aa3) list_accented_list_pane

0x72dd,	// (0x0002b99f) list_single_accented_list_pane_ParamLimits

0x72dd,	// (0x0002b99f) list_single_accented_list_pane

0x2f7d,	// (0x0002763f) list_highlight_pane_cp10

0x72ee,	// (0x0002b9b0) list_single_accented_list_pane_t1

0xb719,	// (0x0002fddb) popup_slider_window_ParamLimits

0xb719,	// (0x0002fddb) popup_slider_window

0x6f3a,	// (0x0002b5fc) aid_indentation_list_msg

0xda4a,	// (0x0003210c) bg_popup_window_pane_cp19

0x742a,	// (0x0002baec) popup_slider_window_g1

0x7446,	// (0x0002bb08) popup_slider_window_g2

0x7462,	// (0x0002bb24) popup_slider_window_g3

0x0005,

0xfcc5,	// (0x00034387) popup_slider_window_g

0x74c8,	// (0x0002bb8a) popup_slider_window_t1

0x753c,	// (0x0002bbfe) small_volume_slider_vertical_pane

0x5dfb,	// (0x0002a4bd) small_volume_slider_vertical_pane_g1

0x5dfb,	// (0x0002a4bd) small_volume_slider_vertical_pane_g2

0x7558,	// (0x0002bc1a) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd7,	// (0x00034399) small_volume_slider_vertical_pane_g

0xa60a,	// (0x0002eccc) area_side_right_pane_ParamLimits

0xa60a,	// (0x0002eccc) area_side_right_pane

0xc829,	// (0x00030eeb) aid_size_side_button_ParamLimits

0xc829,	// (0x00030eeb) aid_size_side_button

0xc842,	// (0x00030f04) grid_sctrl_middle_pane_ParamLimits

0xc842,	// (0x00030f04) grid_sctrl_middle_pane

0x1fc5,	// (0x00026687) sctrl_sk_bottom_pane

0x1fd6,	// (0x00026698) sctrl_sk_top_pane

0x1fe8,	// (0x000266aa) aid_touch_sctrl_top

0xcfea,	// (0x000316ac) bg_sctrl_sk_pane_ParamLimits

0xcfea,	// (0x000316ac) bg_sctrl_sk_pane

0x1ff5,	// (0x000266b7) sctrl_sk_top_pane_g1

0x2002,	// (0x000266c4) sctrl_sk_top_pane_t1

0x1fe8,	// (0x000266aa) aid_touch_sctrl_bottom

0xcfea,	// (0x000316ac) bg_sctrl_sk_pane_cp_ParamLimits

0xcfea,	// (0x000316ac) bg_sctrl_sk_pane_cp

0x201d,	// (0x000266df) sctrl_sk_bottom_pane_g1

0x2002,	// (0x000266c4) sctrl_sk_bottom_pane_t1

0xc85c,	// (0x00030f1e) cell_sctrl_middle_pane_ParamLimits

0xc85c,	// (0x00030f1e) cell_sctrl_middle_pane

0xc86f,	// (0x00030f31) aid_touch_sctrl_middle_ParamLimits

0xc86f,	// (0x00030f31) aid_touch_sctrl_middle

0xc87c,	// (0x00030f3e) bg_sctrl_middle_pane_ParamLimits

0xc87c,	// (0x00030f3e) bg_sctrl_middle_pane

0x75e3,	// (0x0002bca5) cell_sctrl_middle_pane_g1_ParamLimits

0x75e3,	// (0x0002bca5) cell_sctrl_middle_pane_g1

0xc88a,	// (0x00030f4c) cell_sctrl_middle_pane_g2_ParamLimits

0xc88a,	// (0x00030f4c) cell_sctrl_middle_pane_g2

0x0001,

0xfce3,	// (0x000343a5) cell_sctrl_middle_pane_g_ParamLimits

0xfce3,	// (0x000343a5) cell_sctrl_middle_pane_g

0x37da,	// (0x00027e9c) bg_sctrl_middle_pane_g1

0x37e2,	// (0x00027ea4) bg_sctrl_middle_pane_g2

0x37ea,	// (0x00027eac) bg_sctrl_middle_pane_g3

0x37f2,	// (0x00027eb4) bg_sctrl_middle_pane_g4

0x37fa,	// (0x00027ebc) bg_sctrl_middle_pane_g5

0x3802,	// (0x00027ec4) bg_sctrl_middle_pane_g6

0x380a,	// (0x00027ecc) bg_sctrl_middle_pane_g7

0x3812,	// (0x00027ed4) bg_sctrl_middle_pane_g8

0x0007,

0xfce8,	// (0x000343aa) bg_sctrl_middle_pane_g

0x381a,	// (0x00027edc) bg_sctrl_middle_pane_g8_copy1

0x37da,	// (0x00027e9c) bg_sctrl_sk_pane_g1

0x37e2,	// (0x00027ea4) bg_sctrl_sk_pane_g2

0x37ea,	// (0x00027eac) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x00033efe) bg_sctrl_sk_pane_g

0xd432,	// (0x00031af4) aid_size_touch_scroll_bar

0x37f2,	// (0x00027eb4) bg_sctrl_sk_pane_g4

0x37fa,	// (0x00027ebc) bg_sctrl_sk_pane_g5

0x3802,	// (0x00027ec4) bg_sctrl_sk_pane_g6

0x380a,	// (0x00027ecc) bg_sctrl_sk_pane_g7

0x3812,	// (0x00027ed4) bg_sctrl_sk_pane_g8

0x381a,	// (0x00027edc) bg_sctrl_sk_pane_g9

0x11dc,	// (0x0002589e) popup_fep_china_hwr2_fs_candidate_window

0xb1cb,	// (0x0002f88d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb1cb,	// (0x0002f88d) popup_fep_china_hwr2_fs_control_window

0x6076,	// (0x0002a738) sctrl_sk_top_pane_g2

0x0001,

0xfcde,	// (0x000343a0) sctrl_sk_top_pane_g

0xdb02,	// (0x000321c4) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdb02,	// (0x000321c4) aid_fep_china_hwr2_fs_cell

0xdb18,	// (0x000321da) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdb18,	// (0x000321da) bg_popup_fep_shadow_pane_cp4

0xdb2f,	// (0x000321f1) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdb2f,	// (0x000321f1) bg_popup_fep_shadow_pane_cp5

0xdb41,	// (0x00032203) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdb41,	// (0x00032203) popup_fep_china_hwr2_fs_control_bar_grid

0xdb55,	// (0x00032217) popup_fep_china_hwr2_fs_control_funtion_grid

0x75b7,	// (0x0002bc79) aid_fep_china_hwr2_fs_candi_cell

0xce47,	// (0x00031509) bg_popup_fep_shadow_pane_cp6

0x75c1,	// (0x0002bc83) popup_fep_china_hwr2_fs_candidate_grid

0xdb5d,	// (0x0003221f) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdb5d,	// (0x0003221f) cell_fep_china_hwr2_fs_funtion_grid

0x5dfb,	// (0x0002a4bd) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x75e3,	// (0x0002bca5) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x75e3,	// (0x0002bca5) cell_fep_china_hwr2_fs_funtion_grid_g1

0x75f1,	// (0x0002bcb3) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x75f1,	// (0x0002bcb3) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf9,	// (0x000343bb) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf9,	// (0x000343bb) cell_fep_china_hwr2_fs_funtion_grid_g

0xdb75,	// (0x00032237) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdb75,	// (0x00032237) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdb8a,	// (0x0003224c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdb8a,	// (0x0003224c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfe,	// (0x000343c0) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfe,	// (0x000343c0) cell_fep_china_hwr2_fs_funtion_grid_t

0x7638,	// (0x0002bcfa) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x7640,	// (0x0002bd02) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x7648,	// (0x0002bd0a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd03,	// (0x000343c5) popup_fep_china_hwr2_fs_control_bar_grid_g

0x7650,	// (0x0002bd12) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x7650,	// (0x0002bd12) cell_fep_china_hwr2_fs_candidate_grid

0x766f,	// (0x0002bd31) popup_fep_china_hwr2_fs_candidate_grid_g20

0x7677,	// (0x0002bd39) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5dfb,	// (0x0002a4bd) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5dfb,	// (0x0002a4bd) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb23,	// (0x000341e5) cell_fep_china_hwr2_fs_candidate_grid_g

0x767f,	// (0x0002bd41) cell_fep_china_hwr2_fs_candidate_grid_t1

0x33c2,	// (0x00027a84) clock_nsta_pane_cp_24_ParamLimits

0x33c2,	// (0x00027a84) clock_nsta_pane_cp_24

0x3442,	// (0x00027b04) indicator_nsta_pane_cp_24_ParamLimits

0x3442,	// (0x00027b04) indicator_nsta_pane_cp_24

0x44c3,	// (0x00028b85) heading_pane_g1

0x0001,

0xf8a1,	// (0x00033f63) heading_pane_g

0x4f25,	// (0x000295e7) grid_sct_catagory_button_pane

0x4f57,	// (0x00029619) scroll_pane_cp5_ParamLimits

0x5a5b,	// (0x0002a11d) button_value_adjust_pane_cp5_ParamLimits

0x5a5b,	// (0x0002a11d) button_value_adjust_pane_cp5

0x5b40,	// (0x0002a202) form2_midp_time_pane_ParamLimits

0x768d,	// (0x0002bd4f) cell_sct_catagory_button_pane_ParamLimits

0x768d,	// (0x0002bd4f) cell_sct_catagory_button_pane

0x5dc0,	// (0x0002a482) bg_button_pane_cp01_ParamLimits

0x5dc0,	// (0x0002a482) bg_button_pane_cp01

0x5dfb,	// (0x0002a4bd) cell_sct_catagory_button_pane_g1

0xb798,	// (0x0002fe5a) popup_tb_extension_window

0xdba6,	// (0x00032268) aid_size_cell_ext_ParamLimits

0xdba6,	// (0x00032268) aid_size_cell_ext

0xd274,	// (0x00031936) bg_tb_trans_pane_cp1_ParamLimits

0xd274,	// (0x00031936) bg_tb_trans_pane_cp1

0xdbcc,	// (0x0003228e) grid_tb_ext_pane_ParamLimits

0xdbcc,	// (0x0003228e) grid_tb_ext_pane

0xdc09,	// (0x000322cb) cell_tb_ext_pane_ParamLimits

0xdc09,	// (0x000322cb) cell_tb_ext_pane

0xdc31,	// (0x000322f3) cell_tb_ext_pane_g1_ParamLimits

0xdc31,	// (0x000322f3) cell_tb_ext_pane_g1

0x7721,	// (0x0002bde3) cell_tb_ext_pane_t1

0xcfea,	// (0x000316ac) list_highlight_pane_cp11_ParamLimits

0xcfea,	// (0x000316ac) list_highlight_pane_cp11

0xa6b5,	// (0x0002ed77) popup_uni_indicator_window_ParamLimits

0xa6b5,	// (0x0002ed77) popup_uni_indicator_window

0xd4f9,	// (0x00031bbb) bg_popup_sub_pane_cp14

0x773c,	// (0x0002bdfe) list_uniindi_pane

0x7748,	// (0x0002be0a) uniindi_top_pane

0xcfea,	// (0x000316ac) bg_uniindi_top_pane

0x7769,	// (0x0002be2b) uniindi_top_pane_g1

0x777f,	// (0x0002be41) uniindi_top_pane_g2

0x0003,

0xfd0a,	// (0x000343cc) uniindi_top_pane_g

0x77a9,	// (0x0002be6b) uniindi_top_pane_t1

0x77d5,	// (0x0002be97) list_single_uniindi_pane_ParamLimits

0x77d5,	// (0x0002be97) list_single_uniindi_pane

0x5dfb,	// (0x0002a4bd) bg_uniindi_top_pane_g1

0x77e8,	// (0x0002beaa) list_single_uniindi_pane_g1

0x77fb,	// (0x0002bebd) list_single_uniindi_pane_t1

0xce47,	// (0x00031509) control_bg_pane

0x7820,	// (0x0002bee2) bg_sctrl_sk_pane_cp1

0x7829,	// (0x0002beeb) bg_sctrl_sk_pane_cp2

0x7832,	// (0x0002bef4) control_bg_pane_g1

0x783b,	// (0x0002befd) control_bg_pane_g2

0x0001,

0xfd13,	// (0x000343d5) control_bg_pane_g

0x5893,	// (0x00029f55) cell_indicator_nsta_pane_g1_ParamLimits

0xc448,	// (0x00030b0a) cell_indicator_nsta_pane_g2_ParamLimits

0xfa87,	// (0x00034149) cell_indicator_nsta_pane_g_ParamLimits

0xf11c,	// (0x000337de) form2_midp_time_pane_t1_ParamLimits

0x1bf6,	// (0x000262b8) main_idle_act4_pane_ParamLimits

0x1bf6,	// (0x000262b8) main_idle_act4_pane

0xb798,	// (0x0002fe5a) popup_tb_extension_window_ParamLimits

0xdbf1,	// (0x000322b3) tb_ext_find_pane_ParamLimits

0xdbf1,	// (0x000322b3) tb_ext_find_pane

0x7844,	// (0x0002bf06) ai_gene_pane_1_cp1

0x30c7,	// (0x00027789) ai_gene_pane_2_cp1

0x784c,	// (0x0002bf0e) list_single_idle_plugin_calendar_pane

0x7855,	// (0x0002bf17) list_single_idle_plugin_notification_pane

0x785e,	// (0x0002bf20) list_single_idle_plugin_player_pane

0xdc4e,	// (0x00032310) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdc4e,	// (0x00032310) list_single_idle_plugin_shortcut_pane

0xdc76,	// (0x00032338) main_idle_act4_pane_t1

0xdc8e,	// (0x00032350) main_idle_act4_pane_t2

0x0001,

0xfd18,	// (0x000343da) main_idle_act4_pane_t

0xdca6,	// (0x00032368) middle_sk_idle_act4_pane_ParamLimits

0xdca6,	// (0x00032368) middle_sk_idle_act4_pane

0xdcc2,	// (0x00032384) popup_clock_digital_analogue_window_cp2

0xdce9,	// (0x000323ab) shortcut_wheel_idle_act4_pane_ParamLimits

0xdce9,	// (0x000323ab) shortcut_wheel_idle_act4_pane

0x5dfb,	// (0x0002a4bd) shortcut_wheel_idle_act4_pane_g1

0x5dfb,	// (0x0002a4bd) shortcut_wheel_idle_act4_pane_g2

0x5dfb,	// (0x0002a4bd) shortcut_wheel_idle_act4_pane_g3

0x5dfb,	// (0x0002a4bd) shortcut_wheel_idle_act4_pane_g4

0x5dfb,	// (0x0002a4bd) shortcut_wheel_idle_act4_pane_g5

0x78f1,	// (0x0002bfb3) shortcut_wheel_idle_act4_pane_g6

0x78f9,	// (0x0002bfbb) shortcut_wheel_idle_act4_pane_g7

0x7901,	// (0x0002bfc3) shortcut_wheel_idle_act4_pane_g8

0x7909,	// (0x0002bfcb) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1d,	// (0x000343df) shortcut_wheel_idle_act4_pane_g

0xd599,	// (0x00031c5b) middle_sk_idle_act4_pane_g1_ParamLimits

0xd599,	// (0x00031c5b) middle_sk_idle_act4_pane_g1

0xdd66,	// (0x00032428) middle_sk_idle_act4_pane_g2_ParamLimits

0xdd66,	// (0x00032428) middle_sk_idle_act4_pane_g2

0x0001,

0xfd40,	// (0x00034402) middle_sk_idle_act4_pane_g_ParamLimits

0xfd40,	// (0x00034402) middle_sk_idle_act4_pane_g

0xdd7e,	// (0x00032440) middle_sk_idle_act4_pane_t1_ParamLimits

0xdd7e,	// (0x00032440) middle_sk_idle_act4_pane_t1

0xddad,	// (0x0003246f) grid_ai_shortcut_pane_ParamLimits

0xddad,	// (0x0003246f) grid_ai_shortcut_pane

0xddca,	// (0x0003248c) list_highlight_pane_cp16_ParamLimits

0xddca,	// (0x0003248c) list_highlight_pane_cp16

0xddd7,	// (0x00032499) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xddd7,	// (0x00032499) list_single_idle_plugin_shortcut_pane_g1

0xdde3,	// (0x000324a5) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdde3,	// (0x000324a5) list_single_idle_plugin_shortcut_pane_g2

0xde01,	// (0x000324c3) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde01,	// (0x000324c3) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd45,	// (0x00034407) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd45,	// (0x00034407) list_single_idle_plugin_shortcut_pane_g

0xde16,	// (0x000324d8) cell_ai_shortcut_pane_ParamLimits

0xde16,	// (0x000324d8) cell_ai_shortcut_pane

0xde2c,	// (0x000324ee) cell_ai_shortcut_pane_g1_ParamLimits

0xde2c,	// (0x000324ee) cell_ai_shortcut_pane_g1

0x7844,	// (0x0002bf06) ai_gene_pane_1_cp2

0x7a3a,	// (0x0002c0fc) ai_gene_pane_2_cp2

0x7a42,	// (0x0002c104) list_highlight_pane_cp15

0x7a4b,	// (0x0002c10d) list_single_idle_plugin_calendar_pane_g1

0x7a42,	// (0x0002c104) list_highlight_pane_cp17

0x7a53,	// (0x0002c115) list_single_idle_plugin_calendar_pane_g1_copy1

0x7a5b,	// (0x0002c11d) list_single_idle_plugin_player_pane_g1

0x518c,	// (0x0002984e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4c,	// (0x0003440e) list_single_idle_plugin_player_pane_g

0x7a63,	// (0x0002c125) list_single_idle_plugin_player_pane_t1

0x7a71,	// (0x0002c133) list_single_idle_plugin_player_pane_t2

0x7a7f,	// (0x0002c141) list_single_idle_plugin_player_pane_t3

0x7a8d,	// (0x0002c14f) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd51,	// (0x00034413) list_single_idle_plugin_player_pane_t

0x7a9b,	// (0x0002c15d) wait_bar_pane_cp15

0x7aa3,	// (0x0002c165) grid_ai_notification_pane

0x518c,	// (0x0002984e) list_single_idle_plugin_notification_pane_g1

0xde4e,	// (0x00032510) cell_ai_notification_pane_ParamLimits

0xde4e,	// (0x00032510) cell_ai_notification_pane

0x7ab9,	// (0x0002c17b) cell_ai_notification_pane_g1

0x7ac1,	// (0x0002c183) cell_ai_notification_pane_t1

0xde5b,	// (0x0003251d) tb_ext_find_button_pane

0xde63,	// (0x00032525) tb_ext_find_pane_g1

0xde6b,	// (0x0003252d) tb_ext_find_pane_t1

0x0ab3,	// (0x00025175) tb_ext_find_button_pane_g1

0x7aed,	// (0x0002c1af) tb_ext_find_button_pane_g2

0x0001,

0xfd5a,	// (0x0003441c) tb_ext_find_button_pane_g

0xdc76,	// (0x00032338) main_idle_act4_pane_t1_ParamLimits

0xdc8e,	// (0x00032350) main_idle_act4_pane_t2_ParamLimits

0xfd18,	// (0x000343da) main_idle_act4_pane_t_ParamLimits

0xdcc2,	// (0x00032384) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdcd9,	// (0x0003239b) sat_plugin_idle_act4_pane_ParamLimits

0xdcd9,	// (0x0003239b) sat_plugin_idle_act4_pane

0xde79,	// (0x0003253b) sat_plugin_idle_act4_pane_t1_ParamLimits

0xde79,	// (0x0003253b) sat_plugin_idle_act4_pane_t1

0xde91,	// (0x00032553) sat_plugin_idle_act4_pane_t2_ParamLimits

0xde91,	// (0x00032553) sat_plugin_idle_act4_pane_t2

0xdea9,	// (0x0003256b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdea9,	// (0x0003256b) sat_plugin_idle_act4_pane_t3

0xdec1,	// (0x00032583) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdec1,	// (0x00032583) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5f,	// (0x00034421) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5f,	// (0x00034421) sat_plugin_idle_act4_pane_t

0xf4d5,	// (0x00033b97) popup_battery_window_ParamLimits

0xf4d5,	// (0x00033b97) popup_battery_window

0xcfea,	// (0x000316ac) bg_popup_sub_pane_cp25_ParamLimits

0xcfea,	// (0x000316ac) bg_popup_sub_pane_cp25

0x7b42,	// (0x0002c204) popup_battery_window_g1_ParamLimits

0x7b42,	// (0x0002c204) popup_battery_window_g1

0x7b4e,	// (0x0002c210) popup_battery_window_t1_ParamLimits

0x7b4e,	// (0x0002c210) popup_battery_window_t1

0x7b60,	// (0x0002c222) popup_battery_window_t2_ParamLimits

0x7b60,	// (0x0002c222) popup_battery_window_t2

0x0001,

0xfd68,	// (0x0003442a) popup_battery_window_t_ParamLimits

0xfd68,	// (0x0003442a) popup_battery_window_t

0xae38,	// (0x0002f4fa) midp_canvas_pane_ParamLimits

0xae94,	// (0x0002f556) midp_keypad_pane_ParamLimits

0xae94,	// (0x0002f556) midp_keypad_pane

0x32a4,	// (0x00027966) main_midp_pane_ParamLimits

0x590e,	// (0x00029fd0) signal_pane_g2_cp_ParamLimits

0xded9,	// (0x0003259b) aid_size_cell_midp_keypad_ParamLimits

0xded9,	// (0x0003259b) aid_size_cell_midp_keypad

0xdef7,	// (0x000325b9) midp_keyp_game_grid_pane_ParamLimits

0xdef7,	// (0x000325b9) midp_keyp_game_grid_pane

0xdf1e,	// (0x000325e0) midp_keyp_rocker_pane_ParamLimits

0xdf1e,	// (0x000325e0) midp_keyp_rocker_pane

0xdf6d,	// (0x0003262f) midp_keyp_sk_left_pane_ParamLimits

0xdf6d,	// (0x0003262f) midp_keyp_sk_left_pane

0xdfc3,	// (0x00032685) midp_keyp_sk_right_pane_ParamLimits

0xdfc3,	// (0x00032685) midp_keyp_sk_right_pane

0xce47,	// (0x00031509) bg_button_pane_cp03

0xe019,	// (0x000326db) midp_keyp_sk_left_pane_g1

0xce47,	// (0x00031509) bg_button_pane_cp04

0xe019,	// (0x000326db) midp_keyp_sk_right_pane_g1

0x5dfb,	// (0x0002a4bd) midp_keyp_rocker_pane_g1

0xe021,	// (0x000326e3) keyp_game_cell_pane_ParamLimits

0xe021,	// (0x000326e3) keyp_game_cell_pane

0xce47,	// (0x00031509) bg_button_pane_cp02

0xe047,	// (0x00032709) keyp_game_cell_pane_g1

0xa64c,	// (0x0002ed0e) popup_fep_vkb2_window_ParamLimits

0xa64c,	// (0x0002ed0e) popup_fep_vkb2_window

0xc896,	// (0x00030f58) aid_size_cell_vkb2_ParamLimits

0xc896,	// (0x00030f58) aid_size_cell_vkb2

0xc8cc,	// (0x00030f8e) popup_fep_vkb2_window_g1_ParamLimits

0xc8cc,	// (0x00030f8e) popup_fep_vkb2_window_g1

0xc91c,	// (0x00030fde) vkb2_area_bottom_pane_ParamLimits

0xc91c,	// (0x00030fde) vkb2_area_bottom_pane

0xc978,	// (0x0003103a) vkb2_area_keypad_pane_ParamLimits

0xc978,	// (0x0003103a) vkb2_area_keypad_pane

0xc9c6,	// (0x00031088) vkb2_area_top_pane_ParamLimits

0xc9c6,	// (0x00031088) vkb2_area_top_pane

0xca4c,	// (0x0003110e) vkb2_top_entry_pane_ParamLimits

0xca4c,	// (0x0003110e) vkb2_top_entry_pane

0xca79,	// (0x0003113b) vkb2_top_grid_left_pane_ParamLimits

0xca79,	// (0x0003113b) vkb2_top_grid_left_pane

0xca99,	// (0x0003115b) vkb2_top_grid_right_pane_ParamLimits

0xca99,	// (0x0003115b) vkb2_top_grid_right_pane

0x2289,	// (0x0002694b) vkb2_cell_keypad_pane_ParamLimits

0x2289,	// (0x0002694b) vkb2_cell_keypad_pane

0xcadf,	// (0x000311a1) vkb2_area_bottom_grid_pane_ParamLimits

0xcadf,	// (0x000311a1) vkb2_area_bottom_grid_pane

0xcb09,	// (0x000311cb) vkb2_area_bottom_pane_g1_ParamLimits

0xcb09,	// (0x000311cb) vkb2_area_bottom_pane_g1

0xcb2f,	// (0x000311f1) vkb2_area_bottom_pane_g2_ParamLimits

0xcb2f,	// (0x000311f1) vkb2_area_bottom_pane_g2

0xcb60,	// (0x00031222) vkb2_area_bottom_pane_g3_ParamLimits

0xcb60,	// (0x00031222) vkb2_area_bottom_pane_g3

0x0002,

0xfd6d,	// (0x0003442f) vkb2_area_bottom_pane_g_ParamLimits

0xfd6d,	// (0x0003442f) vkb2_area_bottom_pane_g

0x2433,	// (0x00026af5) vkb2_top_cell_left_pane_ParamLimits

0x2433,	// (0x00026af5) vkb2_top_cell_left_pane

0xe050,	// (0x00032712) vkb2_top_entry_pane_g1_ParamLimits

0xe050,	// (0x00032712) vkb2_top_entry_pane_g1

0xe05e,	// (0x00032720) vkb2_top_entry_pane_t1_ParamLimits

0xe05e,	// (0x00032720) vkb2_top_entry_pane_t1

0x7d0a,	// (0x0002c3cc) vkb2_top_entry_pane_t2_ParamLimits

0x7d0a,	// (0x0002c3cc) vkb2_top_entry_pane_t2

0x7d3c,	// (0x0002c3fe) vkb2_top_entry_pane_t3_ParamLimits

0x7d3c,	// (0x0002c3fe) vkb2_top_entry_pane_t3

0x0002,

0xfd74,	// (0x00034436) vkb2_top_entry_pane_t_ParamLimits

0xfd74,	// (0x00034436) vkb2_top_entry_pane_t

0xcbca,	// (0x0003128c) vkb2_top_grid_right_pane_g1_ParamLimits

0xcbca,	// (0x0003128c) vkb2_top_grid_right_pane_g1

0x2496,	// (0x00026b58) vkb2_top_grid_right_pane_g2_ParamLimits

0x2496,	// (0x00026b58) vkb2_top_grid_right_pane_g2

0x24ae,	// (0x00026b70) vkb2_top_grid_right_pane_g3_ParamLimits

0x24ae,	// (0x00026b70) vkb2_top_grid_right_pane_g3

0xcbe0,	// (0x000312a2) vkb2_top_grid_right_pane_g4_ParamLimits

0xcbe0,	// (0x000312a2) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7b,	// (0x0003443d) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7b,	// (0x0003443d) vkb2_top_grid_right_pane_g

0x24dc,	// (0x00026b9e) vkb2_top_cell_left_pane_g1

0x24f3,	// (0x00026bb5) vkb2_cell_keypad_pane_g1_ParamLimits

0x24f3,	// (0x00026bb5) vkb2_cell_keypad_pane_g1

0x7d60,	// (0x0002c422) vkb2_cell_keypad_pane_t1_ParamLimits

0x7d60,	// (0x0002c422) vkb2_cell_keypad_pane_t1

0x2501,	// (0x00026bc3) vkb2_cell_bottom_grid_pane_ParamLimits

0x2501,	// (0x00026bc3) vkb2_cell_bottom_grid_pane

0x253a,	// (0x00026bfc) vkb2_cell_bottom_grid_pane_g1

0xdd0a,	// (0x000323cc) aid_call2_pane_cp02

0xdd12,	// (0x000323d4) aid_call_pane_cp02

0xdd1a,	// (0x000323dc) clock_digital_number_pane_cp10

0xdd22,	// (0x000323e4) clock_digital_number_pane_cp11

0xdd2a,	// (0x000323ec) clock_digital_number_pane_cp12

0xdd32,	// (0x000323f4) clock_digital_number_pane_cp13

0xdd3a,	// (0x000323fc) clock_digital_separator_pane_cp10

0x0ab3,	// (0x00025175) popup_clock_digital_analogue_window_cp2_g1

0x0ab3,	// (0x00025175) popup_clock_digital_analogue_window_cp2_g2

0xdd42,	// (0x00032404) popup_clock_digital_analogue_window_cp2_g3

0x0ab3,	// (0x00025175) popup_clock_digital_analogue_window_cp2_g4

0xdd42,	// (0x00032404) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd30,	// (0x000343f2) popup_clock_digital_analogue_window_cp2_g

0xdd4a,	// (0x0003240c) popup_clock_digital_analogue_window_cp2_t1

0xdd58,	// (0x0003241a) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3b,	// (0x000343fd) popup_clock_digital_analogue_window_cp2_t

0x5dfb,	// (0x0002a4bd) clock_digital_number_pane_cp10_g1

0x5dfb,	// (0x0002a4bd) clock_digital_number_pane_cp10_g2

0x0001,

0xfb23,	// (0x000341e5) clock_digital_number_pane_cp10_g

0x5dfb,	// (0x0002a4bd) clock_digital_separator_pane_cp10_g1

0x5dfb,	// (0x0002a4bd) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb23,	// (0x000341e5) clock_digital_separator_pane_cp10_g

0x778b,	// (0x0002be4d) uniindi_top_pane_g3

0x779c,	// (0x0002be5e) uniindi_top_pane_g4

0x2314,	// (0x000269d6) vkb2_row_keypad_pane_ParamLimits

0x2314,	// (0x000269d6) vkb2_row_keypad_pane

0x2556,	// (0x00026c18) vkb2_cell_t_keypad_pane_ParamLimits

0x2556,	// (0x00026c18) vkb2_cell_t_keypad_pane

0x2566,	// (0x00026c28) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2566,	// (0x00026c28) vkb2_cell_t_keypad_pane_cp08

0x257b,	// (0x00026c3d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x257b,	// (0x00026c3d) vkb2_cell_t_keypad_pane_cp09

0x258f,	// (0x00026c51) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x258f,	// (0x00026c51) vkb2_cell_t_keypad_pane_cp01

0x25a0,	// (0x00026c62) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x25a0,	// (0x00026c62) vkb2_cell_t_keypad_pane_cp02

0x25b1,	// (0x00026c73) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x25b1,	// (0x00026c73) vkb2_cell_t_keypad_pane_cp03

0x25c2,	// (0x00026c84) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x25c2,	// (0x00026c84) vkb2_cell_t_keypad_pane_cp04

0x25d3,	// (0x00026c95) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x25d3,	// (0x00026c95) vkb2_cell_t_keypad_pane_cp05

0x25e4,	// (0x00026ca6) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x25e4,	// (0x00026ca6) vkb2_cell_t_keypad_pane_cp06

0x25f7,	// (0x00026cb9) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x25f7,	// (0x00026cb9) vkb2_cell_t_keypad_pane_cp07

0x260c,	// (0x00026cce) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x260c,	// (0x00026cce) vkb2_cell_t_keypad_pane_cp10

0x6076,	// (0x0002a738) vkb2_cell_t_keypad_pane_g1

0x7d77,	// (0x0002c439) vkb2_cell_t_keypad_pane_t1

0xce47,	// (0x00031509) popup_grid_graphic2_window

0xe097,	// (0x00032759) aid_size_cell_graphic2_ParamLimits

0xe097,	// (0x00032759) aid_size_cell_graphic2

0xe0d5,	// (0x00032797) bg_popup_window_pane_cp21_ParamLimits

0xe0d5,	// (0x00032797) bg_popup_window_pane_cp21

0xe0e3,	// (0x000327a5) graphic2_pages_pane_ParamLimits

0xe0e3,	// (0x000327a5) graphic2_pages_pane

0xe13b,	// (0x000327fd) grid_graphic2_control_pane_ParamLimits

0xe13b,	// (0x000327fd) grid_graphic2_control_pane

0xe183,	// (0x00032845) grid_graphic2_pane_ParamLimits

0xe183,	// (0x00032845) grid_graphic2_pane

0xe20e,	// (0x000328d0) cell_graphic2_pane

0xce47,	// (0x00031509) main_comp_mode_pane

0x6ff6,	// (0x0002b6b8) list_ai3_gene_pane_ParamLimits

0xda4a,	// (0x0003210c) bg_popup_window_pane_cp19_ParamLimits

0x73ca,	// (0x0002ba8c) bg_touch_area_indi_pane_ParamLimits

0x73ca,	// (0x0002ba8c) bg_touch_area_indi_pane

0x73e0,	// (0x0002baa2) bg_touch_area_indi_pane_cp01_ParamLimits

0x73e0,	// (0x0002baa2) bg_touch_area_indi_pane_cp01

0x73f6,	// (0x0002bab8) bg_touch_area_indi_pane_cp02_ParamLimits

0x73f6,	// (0x0002bab8) bg_touch_area_indi_pane_cp02

0x7410,	// (0x0002bad2) bg_touch_area_indi_pane_cp03_ParamLimits

0x7410,	// (0x0002bad2) bg_touch_area_indi_pane_cp03

0x742a,	// (0x0002baec) popup_slider_window_g1_ParamLimits

0x7446,	// (0x0002bb08) popup_slider_window_g2_ParamLimits

0x7462,	// (0x0002bb24) popup_slider_window_g3_ParamLimits

0xfcc5,	// (0x00034387) popup_slider_window_g_ParamLimits

0x74c8,	// (0x0002bb8a) popup_slider_window_t1_ParamLimits

0x753c,	// (0x0002bbfe) small_volume_slider_vertical_pane_ParamLimits

0xe20e,	// (0x000328d0) cell_graphic2_pane_ParamLimits

0xe270,	// (0x00032932) bg_button_pane_cp10_ParamLimits

0xe270,	// (0x00032932) bg_button_pane_cp10

0xe283,	// (0x00032945) bg_button_pane_cp11_ParamLimits

0xe283,	// (0x00032945) bg_button_pane_cp11

0xe296,	// (0x00032958) graphic2_pages_pane_g1_ParamLimits

0xe296,	// (0x00032958) graphic2_pages_pane_g1

0xe2b1,	// (0x00032973) graphic2_pages_pane_g2_ParamLimits

0xe2b1,	// (0x00032973) graphic2_pages_pane_g2

0x0001,

0xfd89,	// (0x0003444b) graphic2_pages_pane_g_ParamLimits

0xfd89,	// (0x0003444b) graphic2_pages_pane_g

0xe2c9,	// (0x0003298b) graphic2_pages_pane_t1_ParamLimits

0xe2c9,	// (0x0003298b) graphic2_pages_pane_t1

0xe2e1,	// (0x000329a3) cell_graphic2_control_pane_ParamLimits

0xe2e1,	// (0x000329a3) cell_graphic2_control_pane

0xe30f,	// (0x000329d1) cell_graphic2_pane_g1_ParamLimits

0xe30f,	// (0x000329d1) cell_graphic2_pane_g1

0xd5a7,	// (0x00031c69) cell_graphic2_pane_g2_ParamLimits

0xd5a7,	// (0x00031c69) cell_graphic2_pane_g2

0xe31c,	// (0x000329de) cell_graphic2_pane_g3_ParamLimits

0xe31c,	// (0x000329de) cell_graphic2_pane_g3

0xd5b4,	// (0x00031c76) cell_graphic2_pane_g4_ParamLimits

0xd5b4,	// (0x00031c76) cell_graphic2_pane_g4

0xe329,	// (0x000329eb) cell_graphic2_pane_g5_ParamLimits

0xe329,	// (0x000329eb) cell_graphic2_pane_g5

0x0004,

0xfd8e,	// (0x00034450) cell_graphic2_pane_g_ParamLimits

0xfd8e,	// (0x00034450) cell_graphic2_pane_g

0xe345,	// (0x00032a07) cell_graphic2_pane_t1_ParamLimits

0xe345,	// (0x00032a07) cell_graphic2_pane_t1

0x44b7,	// (0x00028b79) grid_highlight_pane_cp11_ParamLimits

0x44b7,	// (0x00028b79) grid_highlight_pane_cp11

0xcfea,	// (0x000316ac) bg_button_pane_cp05

0xe38e,	// (0x00032a50) cell_graphic2_control_pane_g1

0x5dfb,	// (0x0002a4bd) bg_touch_area_indi_pane_g1

0x805a,	// (0x0002c71c) aid_cmod_rocker_key_size

0x8064,	// (0x0002c726) aid_cmode_itu_key_size

0x806e,	// (0x0002c730) main_cmode_video_pane

0x8078,	// (0x0002c73a) main_comp_mode_itu_pane

0x8084,	// (0x0002c746) main_comp_mode_rocker_pane

0x8090,	// (0x0002c752) cell_cmode_rocker_pane_ParamLimits

0x8090,	// (0x0002c752) cell_cmode_rocker_pane

0x80a4,	// (0x0002c766) cell_cmode_itu_pane_ParamLimits

0x80a4,	// (0x0002c766) cell_cmode_itu_pane

0xd4f9,	// (0x00031bbb) bg_button_pane_cp06_ParamLimits

0xd4f9,	// (0x00031bbb) bg_button_pane_cp06

0x6076,	// (0x0002a738) cell_cmode_rocker_pane_g1_ParamLimits

0x6076,	// (0x0002a738) cell_cmode_rocker_pane_g1

0x75e3,	// (0x0002bca5) cell_cmode_rocker_pane_g2_ParamLimits

0x75e3,	// (0x0002bca5) cell_cmode_rocker_pane_g2

0x0001,

0xfd9e,	// (0x00034460) cell_cmode_rocker_pane_g_ParamLimits

0xfd9e,	// (0x00034460) cell_cmode_rocker_pane_g

0xce47,	// (0x00031509) bg_button_pane_cp07

0x80bb,	// (0x0002c77d) cell_cmode_itu_pane_g1

0x80c4,	// (0x0002c786) cell_cmode_itu_pane_t1

0x80d2,	// (0x0002c794) cell_cmode_itu_pane_t2

0x0001,

0xfda3,	// (0x00034465) cell_cmode_itu_pane_t

0x7810,	// (0x0002bed2) aid_touch_ctrl_left

0x7818,	// (0x0002beda) aid_touch_ctrl_right

0xce47,	// (0x00031509) compa_mode_pane

0xe3b6,	// (0x00032a78) aid_cmod_rocker_key_size_cp

0xe3c0,	// (0x00032a82) aid_cmode_itu_key_size_cp

0x80f4,	// (0x0002c7b6) compa_mode_pane_g1

0x80fc,	// (0x0002c7be) compa_mode_pane_g2

0x8104,	// (0x0002c7c6) compa_mode_pane_g3

0x0002,

0xfda8,	// (0x0003446a) compa_mode_pane_g

0xe3ca,	// (0x00032a8c) main_comp_mode_itu_pane_cp

0xe3d2,	// (0x00032a94) main_comp_mode_rocker_pane_cp

0xe3da,	// (0x00032a9c) cell_cmode_itu_pane_cp_ParamLimits

0xe3da,	// (0x00032a9c) cell_cmode_itu_pane_cp

0xe3ef,	// (0x00032ab1) cell_cmode_rocker_pane_cp_ParamLimits

0xe3ef,	// (0x00032ab1) cell_cmode_rocker_pane_cp

0xd4f9,	// (0x00031bbb) bg_button_pane_cp06_cp_ParamLimits

0xd4f9,	// (0x00031bbb) bg_button_pane_cp06_cp

0x6076,	// (0x0002a738) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6076,	// (0x0002a738) cell_cmode_rocker_pane_g1_cp

0x5dfb,	// (0x0002a4bd) cell_cmode_rocker_pane_g2_cp

0xce47,	// (0x00031509) bg_button_pane_cp07_cp

0xe401,	// (0x00032ac3) cell_cmode_itu_pane_g1_cp

0xe40a,	// (0x00032acc) cell_cmode_itu_pane_t1_cp

0xe40a,	// (0x00032acc) cell_cmode_itu_pane_t2_cp

0xc249,	// (0x0003090b) settings_code_pane_cp2

0xceb7,	// (0x00031579) bg_popup_window_pane_cp3_ParamLimits

0xd1fe,	// (0x000318c0) heading_pane_cp3_ParamLimits

0xd20d,	// (0x000318cf) listscroll_popup_graphic_pane_ParamLimits

0x1c04,	// (0x000262c6) fep_hwr_aid_pane_ParamLimits

0x1fe8,	// (0x000266aa) aid_touch_sctrl_top_ParamLimits

0x1ff5,	// (0x000266b7) sctrl_sk_top_pane_g1_ParamLimits

0x6076,	// (0x0002a738) sctrl_sk_top_pane_g2_ParamLimits

0xfcde,	// (0x000343a0) sctrl_sk_top_pane_g_ParamLimits

0x2002,	// (0x000266c4) sctrl_sk_top_pane_t1_ParamLimits

0x1fe8,	// (0x000266aa) aid_touch_sctrl_bottom_ParamLimits

0x2002,	// (0x000266c4) sctrl_sk_bottom_pane_t1_ParamLimits

0x7755,	// (0x0002be17) aid_area_touch_clock

0xca0e,	// (0x000310d0) aid_vkb2_area_top_pane_cell_ParamLimits

0xca0e,	// (0x000310d0) aid_vkb2_area_top_pane_cell

0xcab9,	// (0x0003117b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcab9,	// (0x0003117b) aid_vkb2_area_bottom_pane_cell

0x7cc2,	// (0x0002c384) popup_char_count_window

0x815a,	// (0x0002c81c) popup_char_count_window_g1

0x8163,	// (0x0002c825) popup_char_count_window_g2

0x816c,	// (0x0002c82e) popup_char_count_window_g3

0x0002,

0xfdaf,	// (0x00034471) popup_char_count_window_g

0x8175,	// (0x0002c837) popup_char_count_window_t1

0x20a5,	// (0x00026767) popup_fep_char_preview_window_ParamLimits

0x20a5,	// (0x00026767) popup_fep_char_preview_window

0xca2e,	// (0x000310f0) vkb2_top_candi_pane_ParamLimits

0xca2e,	// (0x000310f0) vkb2_top_candi_pane

0xe418,	// (0x00032ada) cell_vkb2_top_candi_pane_ParamLimits

0xe418,	// (0x00032ada) cell_vkb2_top_candi_pane

0x3e40,	// (0x00028502) bg_popup_fep_char_preview_window_ParamLimits

0x3e40,	// (0x00028502) bg_popup_fep_char_preview_window

0x2621,	// (0x00026ce3) popup_fep_char_preview_window_t1_ParamLimits

0x2621,	// (0x00026ce3) popup_fep_char_preview_window_t1

0x81d4,	// (0x0002c896) bg_popup_fep_char_preview_window_g1

0x81dc,	// (0x0002c89e) bg_popup_fep_char_preview_window_g2

0x81e4,	// (0x0002c8a6) bg_popup_fep_char_preview_window_g3

0x81ec,	// (0x0002c8ae) bg_popup_fep_char_preview_window_g4

0x81f4,	// (0x0002c8b6) bg_popup_fep_char_preview_window_g5

0x81fc,	// (0x0002c8be) bg_popup_fep_char_preview_window_g6

0x8204,	// (0x0002c8c6) bg_popup_fep_char_preview_window_g7

0x820c,	// (0x0002c8ce) bg_popup_fep_char_preview_window_g8

0x8214,	// (0x0002c8d6) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb6,	// (0x00034478) bg_popup_fep_char_preview_window_g

0x6076,	// (0x0002a738) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6076,	// (0x0002a738) cell_vkb2_top_candi_pane_g1

0x63b7,	// (0x0002aa79) cell_vkb2_top_candi_pane_g2_ParamLimits

0x63b7,	// (0x0002aa79) cell_vkb2_top_candi_pane_g2

0x63d8,	// (0x0002aa9a) cell_vkb2_top_candi_pane_g3_ParamLimits

0x63d8,	// (0x0002aa9a) cell_vkb2_top_candi_pane_g3

0x2663,	// (0x00026d25) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2663,	// (0x00026d25) cell_vkb2_top_candi_pane_g4

0x821c,	// (0x0002c8de) cell_vkb2_top_candi_pane_g5_ParamLimits

0x821c,	// (0x0002c8de) cell_vkb2_top_candi_pane_g5

0x75e3,	// (0x0002bca5) cell_vkb2_top_candi_pane_g6_ParamLimits

0x75e3,	// (0x0002bca5) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdcb,	// (0x0003448d) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdcb,	// (0x0003448d) cell_vkb2_top_candi_pane_g

0x2684,	// (0x00026d46) cell_vkb2_top_candi_pane_t1

0x1a64,	// (0x00026126) aid_size_touch_slider_mark_ParamLimits

0x1a64,	// (0x00026126) aid_size_touch_slider_mark

0xe11f,	// (0x000327e1) grid_graphic2_catg_pane_ParamLimits

0xe11f,	// (0x000327e1) grid_graphic2_catg_pane

0xe1dd,	// (0x0003289f) popup_grid_graphic2_window_t1_ParamLimits

0xe1dd,	// (0x0003289f) popup_grid_graphic2_window_t1

0xe1f3,	// (0x000328b5) popup_grid_graphic2_window_t2_ParamLimits

0xe1f3,	// (0x000328b5) popup_grid_graphic2_window_t2

0x0001,

0xfd84,	// (0x00034446) popup_grid_graphic2_window_t_ParamLimits

0xfd84,	// (0x00034446) popup_grid_graphic2_window_t

0xcfea,	// (0x000316ac) bg_button_pane_cp05_ParamLimits

0xe38e,	// (0x00032a50) cell_graphic2_control_pane_g1_ParamLimits

0xe482,	// (0x00032b44) cell_graphic2_catg_pane_ParamLimits

0xe482,	// (0x00032b44) cell_graphic2_catg_pane

0xce47,	// (0x00031509) bg_button_pane_cp12

0xe494,	// (0x00032b56) cell_graphic2_catg_pane_g1

0x7721,	// (0x0002bde3) cell_tb_ext_pane_t1_ParamLimits

0x2453,	// (0x00026b15) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2453,	// (0x00026b15) vkb2_top_cell_right_narrow_pane

0x246b,	// (0x00026b2d) vkb2_top_cell_right_wide_pane_ParamLimits

0x246b,	// (0x00026b2d) vkb2_top_cell_right_wide_pane

0x1bf6,	// (0x000262b8) bg_vkb2_func_pane_ParamLimits

0x1bf6,	// (0x000262b8) bg_vkb2_func_pane

0x24dc,	// (0x00026b9e) vkb2_top_cell_left_pane_g1_ParamLimits

0x1bf6,	// (0x000262b8) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1bf6,	// (0x000262b8) bg_vkb2_fuc_pane_cp03

0x253a,	// (0x00026bfc) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x37e2,	// (0x00027ea4) bg_vkb2_func_pane_g1

0x37ea,	// (0x00027eac) bg_vkb2_func_pane_g2

0x37fa,	// (0x00027ebc) bg_vkb2_func_pane_g3

0x37f2,	// (0x00027eb4) bg_vkb2_func_pane_g4

0x3802,	// (0x00027ec4) bg_vkb2_func_pane_g5

0x380a,	// (0x00027ecc) bg_vkb2_func_pane_g6

0x3812,	// (0x00027ed4) bg_vkb2_func_pane_g7

0x381a,	// (0x00027edc) bg_vkb2_func_pane_g8

0x37da,	// (0x00027e9c) bg_vkb2_func_pane_g9

0x0008,

0xfdd8,	// (0x0003449a) bg_vkb2_func_pane_g

0x1bf6,	// (0x000262b8) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1bf6,	// (0x000262b8) bg_vkb2_fuc_pane_cp01

0x24dc,	// (0x00026b9e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x24dc,	// (0x00026b9e) vkb2_top_cell_right_wide_pane_g1

0x1bf6,	// (0x000262b8) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1bf6,	// (0x000262b8) bg_vkb2_fuc_pane_cp02

0x253a,	// (0x00026bfc) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x253a,	// (0x00026bfc) vkb2_top_cell_right_narrow_pane_g1

0xd98c,	// (0x0003204e) aid_touch_area_decrease_ParamLimits

0xd98c,	// (0x0003204e) aid_touch_area_decrease

0xd9c6,	// (0x00032088) aid_touch_area_increase_ParamLimits

0xd9c6,	// (0x00032088) aid_touch_area_increase

0xd9ee,	// (0x000320b0) aid_touch_area_mute_ParamLimits

0xd9ee,	// (0x000320b0) aid_touch_area_mute

0xda16,	// (0x000320d8) aid_touch_area_slider_ParamLimits

0xda16,	// (0x000320d8) aid_touch_area_slider

0xda56,	// (0x00032118) popup_slider_window_g4_ParamLimits

0xda56,	// (0x00032118) popup_slider_window_g4

0xda7e,	// (0x00032140) popup_slider_window_g5_ParamLimits

0xda7e,	// (0x00032140) popup_slider_window_g5

0xdab2,	// (0x00032174) popup_slider_window_g6_ParamLimits

0xdab2,	// (0x00032174) popup_slider_window_g6

0x74f6,	// (0x0002bbb8) popup_slider_window_t2_ParamLimits

0x74f6,	// (0x0002bbb8) popup_slider_window_t2

0x0001,

0xfcd2,	// (0x00034394) popup_slider_window_t_ParamLimits

0xfcd2,	// (0x00034394) popup_slider_window_t

0xdace,	// (0x00032190) slider_pane_ParamLimits

0xdace,	// (0x00032190) slider_pane

0x8258,	// (0x0002c91a) slider_pane_g1_ParamLimits

0x8258,	// (0x0002c91a) slider_pane_g1

0x826c,	// (0x0002c92e) slider_pane_g2_ParamLimits

0x826c,	// (0x0002c92e) slider_pane_g2

0x8282,	// (0x0002c944) slider_pane_g3_ParamLimits

0x8282,	// (0x0002c944) slider_pane_g3

0x0003,

0xfdeb,	// (0x000344ad) slider_pane_g_ParamLimits

0xfdeb,	// (0x000344ad) slider_pane_g

0xb7e4,	// (0x0002fea6) popup_tb_float_extension_window_ParamLimits

0xb7e4,	// (0x0002fea6) popup_tb_float_extension_window

0x82ae,	// (0x0002c970) aid_size_cell_tb_float_ext

0xce47,	// (0x00031509) bg_popup_sub_window_cp28

0x82ba,	// (0x0002c97c) grid_tb_float_ext_pane

0x82c6,	// (0x0002c988) cell_tb_float_ext_pane_ParamLimits

0x82c6,	// (0x0002c988) cell_tb_float_ext_pane

0x82e2,	// (0x0002c9a4) cell_tb_float_ext_pane_g1

0x82eb,	// (0x0002c9ad) grid_highlight_pane_cp12

0xc63b,	// (0x00030cfd) cell_last_hwr_side_pane_ParamLimits

0xc63b,	// (0x00030cfd) cell_last_hwr_side_pane

0x5dfb,	// (0x0002a4bd) cell_last_hwr_side_pane_g1

0x82f4,	// (0x0002c9b6) cell_last_hwr_side_pane_g2

0x0001,

0xfdf4,	// (0x000344b6) cell_last_hwr_side_pane_g

0xcb95,	// (0x00031257) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcb95,	// (0x00031257) vkb2_area_bottom_space_btn_pane

0x6076,	// (0x0002a738) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7d77,	// (0x0002c439) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2684,	// (0x00026d46) cell_vkb2_top_candi_pane_t1_ParamLimits

0x26a2,	// (0x00026d64) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x26a2,	// (0x00026d64) vkb2_area_bottom_space_btn_pane_g1

0x26dc,	// (0x00026d9e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x26dc,	// (0x00026d9e) vkb2_area_bottom_space_btn_pane_g2

0x2712,	// (0x00026dd4) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2712,	// (0x00026dd4) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf9,	// (0x000344bb) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf9,	// (0x000344bb) vkb2_area_bottom_space_btn_pane_g

0x1cad,	// (0x0002636f) cel_fep_hwr_func_pane_ParamLimits

0x1cad,	// (0x0002636f) cel_fep_hwr_func_pane

0xc610,	// (0x00030cd2) cell_hwr_side_button_pane_ParamLimits

0xc610,	// (0x00030cd2) cell_hwr_side_button_pane

0x7755,	// (0x0002be17) aid_area_touch_clock_ParamLimits

0xcfea,	// (0x000316ac) bg_uniindi_top_pane_ParamLimits

0x7769,	// (0x0002be2b) uniindi_top_pane_g1_ParamLimits

0x777f,	// (0x0002be41) uniindi_top_pane_g2_ParamLimits

0x778b,	// (0x0002be4d) uniindi_top_pane_g3_ParamLimits

0x779c,	// (0x0002be5e) uniindi_top_pane_g4_ParamLimits

0xfd0a,	// (0x000343cc) uniindi_top_pane_g_ParamLimits

0x77a9,	// (0x0002be6b) uniindi_top_pane_t1_ParamLimits

0xcfea,	// (0x000316ac) bg_vkb2_func_pane_cp01_ParamLimits

0xcfea,	// (0x000316ac) bg_vkb2_func_pane_cp01

0x82fd,	// (0x0002c9bf) cel_fep_hwr_func_pane_g1_ParamLimits

0x82fd,	// (0x0002c9bf) cel_fep_hwr_func_pane_g1

0xcfea,	// (0x000316ac) bg_vkb2_func_pane_cp02_ParamLimits

0xcfea,	// (0x000316ac) bg_vkb2_func_pane_cp02

0x82fd,	// (0x0002c9bf) cell_hwr_side_button_pane_g1_ParamLimits

0x82fd,	// (0x0002c9bf) cell_hwr_side_button_pane_g1

0x365f,	// (0x00027d21) status_pane_g4_ParamLimits

0x365f,	// (0x00027d21) status_pane_g4

0x3679,	// (0x00027d3b) status_pane_t1

0x5bae,	// (0x0002a270) form2_midp_gauge_slider_cont_pane

0x5bb6,	// (0x0002a278) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc541,	// (0x00030c03) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc553,	// (0x00030c15) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad6,	// (0x00034198) form2_midp_gauge_slider_pane_t_ParamLimits

0x5bec,	// (0x0002a2ae) form2_midp_slider_pane_ParamLimits

0x2065,	// (0x00026727) aid_size_cell_func_vkb2_ParamLimits

0x2065,	// (0x00026727) aid_size_cell_func_vkb2

0x829a,	// (0x0002c95c) slider_pane_g4_ParamLimits

0x829a,	// (0x0002c95c) slider_pane_g4

0xcbfe,	// (0x000312c0) form2_midp_gauge_slider_pane_t2_cp01

0xcc0c,	// (0x000312ce) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcc0c,	// (0x000312ce) form2_midp_gauge_slider_pane_t3_cp01

0x2787,	// (0x00026e49) form2_midp_slider_pane_cp01

0xce47,	// (0x00031509) navi_smil_pane

0x8336,	// (0x0002c9f8) navi_smil_pane_g1

0x833e,	// (0x0002ca00) navi_smil_pane_t1

0x830b,	// (0x0002c9cd) form2_midp_slider_pane_g1

0x8314,	// (0x0002c9d6) form2_midp_slider_pane_g2

0x831c,	// (0x0002c9de) form2_midp_slider_pane_g3

0x830b,	// (0x0002c9cd) form2_midp_slider_pane_g4

0xe49d,	// (0x00032b5f) form2_midp_slider_pane_g5

0x0004,

0xfe02,	// (0x000344c4) form2_midp_slider_pane_g

0x274c,	// (0x00026e0e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x274c,	// (0x00026e0e) vkb2_area_bottom_space_btn_pane_g4

0xb9cb,	// (0x0003008d) lc0_navi_pane_ParamLimits

0xb9cb,	// (0x0003008d) lc0_navi_pane

0xba3b,	// (0x000300fd) lc0_stat_indi_pane_ParamLimits

0xba3b,	// (0x000300fd) lc0_stat_indi_pane

0xba50,	// (0x00030112) ls0_title_pane_ParamLimits

0xba50,	// (0x00030112) ls0_title_pane

0xd4f9,	// (0x00031bbb) bg_popup_sub_pane_cp14_ParamLimits

0x773c,	// (0x0002bdfe) list_uniindi_pane_ParamLimits

0x7748,	// (0x0002be0a) uniindi_top_pane_ParamLimits

0x77e8,	// (0x0002beaa) list_single_uniindi_pane_g1_ParamLimits

0x77fb,	// (0x0002bebd) list_single_uniindi_pane_t1_ParamLimits

0xcc29,	// (0x000312eb) lc0_stat_clock_pane_ParamLimits

0xcc29,	// (0x000312eb) lc0_stat_clock_pane

0xe4a6,	// (0x00032b68) lc0_stat_indi_pane_g1_ParamLimits

0xe4a6,	// (0x00032b68) lc0_stat_indi_pane_g1

0xe4b3,	// (0x00032b75) lc0_stat_indi_pane_g2_ParamLimits

0xe4b3,	// (0x00032b75) lc0_stat_indi_pane_g2

0x0001,

0xfe0d,	// (0x000344cf) lc0_stat_indi_pane_g_ParamLimits

0xfe0d,	// (0x000344cf) lc0_stat_indi_pane_g

0xcc36,	// (0x000312f8) lc0_uni_indicator_pane_ParamLimits

0xcc36,	// (0x000312f8) lc0_uni_indicator_pane

0xe4c0,	// (0x00032b82) ls0_title_pane_g1_ParamLimits

0xe4c0,	// (0x00032b82) ls0_title_pane_g1

0xe4d4,	// (0x00032b96) ls0_title_pane_t1_ParamLimits

0xe4d4,	// (0x00032b96) ls0_title_pane_t1

0xcc43,	// (0x00031305) lc0_uni_indicator_pane_g1_ParamLimits

0xcc43,	// (0x00031305) lc0_uni_indicator_pane_g1

0x83b0,	// (0x0002ca72) lc0_stat_clock_pane_t1

0xce47,	// (0x00031509) main_ai5_pane

0x83be,	// (0x0002ca80) ai5_sk_pane_ParamLimits

0x83be,	// (0x0002ca80) ai5_sk_pane

0xe502,	// (0x00032bc4) cell_ai5_widget_pane_ParamLimits

0xe502,	// (0x00032bc4) cell_ai5_widget_pane

0xe571,	// (0x00032c33) aid_size_cell_widget_grid

0x847c,	// (0x0002cb3e) bg_ai5_widget_pane_ParamLimits

0x847c,	// (0x0002cb3e) bg_ai5_widget_pane

0xe5a5,	// (0x00032c67) cell_ai5_widget_pane_g2

0xe5b9,	// (0x00032c7b) cell_ai5_widget_pane_g3

0xe5d3,	// (0x00032c95) cell_ai5_widget_pane_g4

0xe5e3,	// (0x00032ca5) cell_ai5_widget_pane_g5

0xe5f3,	// (0x00032cb5) cell_ai5_widget_pane_g6

0xe5ff,	// (0x00032cc1) cell_ai5_widget_pane_g7

0xe623,	// (0x00032ce5) cell_ai5_widget_pane_t1_ParamLimits

0xe623,	// (0x00032ce5) cell_ai5_widget_pane_t1

0x85db,	// (0x0002cc9d) cell_ai5_widget_pane_t2_ParamLimits

0x85db,	// (0x0002cc9d) cell_ai5_widget_pane_t2

0x85f3,	// (0x0002ccb5) cell_ai5_widget_pane_t3_ParamLimits

0x85f3,	// (0x0002ccb5) cell_ai5_widget_pane_t3

0xe640,	// (0x00032d02) cell_ai5_widget_pane_t4_ParamLimits

0xe640,	// (0x00032d02) cell_ai5_widget_pane_t4

0xe666,	// (0x00032d28) cell_ai5_widget_pane_t5_ParamLimits

0xe666,	// (0x00032d28) cell_ai5_widget_pane_t5

0x8651,	// (0x0002cd13) cell_ai5_widget_pane_t6_ParamLimits

0x8651,	// (0x0002cd13) cell_ai5_widget_pane_t6

0x8663,	// (0x0002cd25) cell_ai5_widget_pane_t7_ParamLimits

0x8663,	// (0x0002cd25) cell_ai5_widget_pane_t7

0x8682,	// (0x0002cd44) cell_ai5_widget_pane_t8_ParamLimits

0x8682,	// (0x0002cd44) cell_ai5_widget_pane_t8

0x000b,

0xfe2d,	// (0x000344ef) cell_ai5_widget_pane_t_ParamLimits

0xfe2d,	// (0x000344ef) cell_ai5_widget_pane_t

0xe6f8,	// (0x00032dba) grid_ai5_widget_pane

0xd4f9,	// (0x00031bbb) highlight_cell_ai5_widget_pane_ParamLimits

0xd4f9,	// (0x00031bbb) highlight_cell_ai5_widget_pane

0xe706,	// (0x00032dc8) ai5_sk_left_pane

0xe710,	// (0x00032dd2) ai5_sk_middle_pane

0xe71a,	// (0x00032ddc) ai5_sk_right_pane

0x8732,	// (0x0002cdf4) bg_ai5_widget_pane_g1_ParamLimits

0x8732,	// (0x0002cdf4) bg_ai5_widget_pane_g1

0x873e,	// (0x0002ce00) bg_ai5_widget_pane_g2_ParamLimits

0x873e,	// (0x0002ce00) bg_ai5_widget_pane_g2

0x874a,	// (0x0002ce0c) bg_ai5_widget_pane_g3_ParamLimits

0x874a,	// (0x0002ce0c) bg_ai5_widget_pane_g3

0x8756,	// (0x0002ce18) bg_ai5_widget_pane_g4_ParamLimits

0x8756,	// (0x0002ce18) bg_ai5_widget_pane_g4

0x8762,	// (0x0002ce24) bg_ai5_widget_pane_g5_ParamLimits

0x8762,	// (0x0002ce24) bg_ai5_widget_pane_g5

0x876e,	// (0x0002ce30) bg_ai5_widget_pane_g6_ParamLimits

0x876e,	// (0x0002ce30) bg_ai5_widget_pane_g6

0x877a,	// (0x0002ce3c) bg_ai5_widget_pane_g7_ParamLimits

0x877a,	// (0x0002ce3c) bg_ai5_widget_pane_g7

0x8786,	// (0x0002ce48) bg_ai5_widget_pane_g8_ParamLimits

0x8786,	// (0x0002ce48) bg_ai5_widget_pane_g8

0x8792,	// (0x0002ce54) bg_ai5_widget_pane_g9_ParamLimits

0x8792,	// (0x0002ce54) bg_ai5_widget_pane_g9

0x0008,

0xfe46,	// (0x00034508) bg_ai5_widget_pane_g_ParamLimits

0xfe46,	// (0x00034508) bg_ai5_widget_pane_g

0xe750,	// (0x00032e12) cell_shortcut_ai5_widget_pane_ParamLimits

0xe750,	// (0x00032e12) cell_shortcut_ai5_widget_pane

0x2f7d,	// (0x0002763f) bg_cell_shortcut_ai5_widget_pane

0x87dd,	// (0x0002ce9f) cell_grid_ai5_widget_pane_g1

0x2f7d,	// (0x0002763f) highlight_cell_shortcut_ai5_widget_pane

0x37ea,	// (0x00027eac) ai5_sk_left_pane_g1

0x87e6,	// (0x0002cea8) ai5_sk_left_pane_g2

0x87ee,	// (0x0002ceb0) ai5_sk_left_pane_g3

0x87f6,	// (0x0002ceb8) ai5_sk_left_pane_g4

0x0003,

0xfe59,	// (0x0003451b) ai5_sk_left_pane_g

0x87fe,	// (0x0002cec0) ai5_sk_left_pane_t1

0x37e2,	// (0x00027ea4) ai5_sk_right_pane_g1

0x880c,	// (0x0002cece) ai5_sk_right_pane_g2

0x8814,	// (0x0002ced6) ai5_sk_right_pane_g3

0x881c,	// (0x0002cede) ai5_sk_right_pane_g4

0x0003,

0xfe62,	// (0x00034524) ai5_sk_right_pane_g

0x8824,	// (0x0002cee6) ai5_sk_right_pane_t1

0x37e2,	// (0x00027ea4) ai5_sk_middle_pane_g1

0x37ea,	// (0x00027eac) ai5_sk_middle_pane_g2

0x3802,	// (0x00027ec4) ai5_sk_middle_pane_g3

0x8814,	// (0x0002ced6) ai5_sk_middle_pane_g4

0x87ee,	// (0x0002ceb0) ai5_sk_middle_pane_g5

0x8832,	// (0x0002cef4) ai5_sk_middle_pane_g6

0xe763,	// (0x00032e25) ai5_sk_middle_pane_g7

0x0006,

0xfe6b,	// (0x0003452d) ai5_sk_middle_pane_g

0xb8b5,	// (0x0002ff77) aid_touch_area_size_lc0_ParamLimits

0xb8b5,	// (0x0002ff77) aid_touch_area_size_lc0

0x1e4c,	// (0x0002650e) cell_hwr_candidate_pane_t1_ParamLimits

0x3322,	// (0x000279e4) aid_touch_navi_pane

0xbb5b,	// (0x0003021d) status_dt_navi_pane_ParamLimits

0xbb5b,	// (0x0003021d) status_dt_navi_pane

0xbb73,	// (0x00030235) status_dt_sta_pane_ParamLimits

0xbb73,	// (0x00030235) status_dt_sta_pane

0xe76b,	// (0x00032e2d) dt_sta_controll_pane

0xe778,	// (0x00032e3a) dt_sta_indi_pane

0xe785,	// (0x00032e47) dt_sta_title_pane

0xcfea,	// (0x000316ac) bg_dt_sta_indi_pane_ParamLimits

0xcfea,	// (0x000316ac) bg_dt_sta_indi_pane

0xe797,	// (0x00032e59) dt_sta_battery_pane

0xe79f,	// (0x00032e61) dt_sta_indi_pane_g1

0xe7a8,	// (0x00032e6a) dt_sta_indi_pane_g2

0xe7b1,	// (0x00032e73) dt_sta_indi_pane_g3

0x0002,

0xfe7a,	// (0x0003453c) dt_sta_indi_pane_g

0xe7ba,	// (0x00032e7c) dt_sta_signal_pane

0xd4f9,	// (0x00031bbb) bg_dt_sta_title_pane_ParamLimits

0xd4f9,	// (0x00031bbb) bg_dt_sta_title_pane

0xe7c3,	// (0x00032e85) dt_sta_title_pane_g1

0xe7cb,	// (0x00032e8d) dt_sta_title_pane_t1_ParamLimits

0xe7cb,	// (0x00032e8d) dt_sta_title_pane_t1

0xce47,	// (0x00031509) bg_dt_sta_control_pane

0xe7e0,	// (0x00032ea2) dt_sta_controll_pane_g1

0xe7e9,	// (0x00032eab) bg_dt_sta_title_pane_g1

0xe7f2,	// (0x00032eb4) bg_dt_sta_title_pane_g2

0xe7fb,	// (0x00032ebd) bg_dt_sta_title_pane_g3

0x0002,

0xfe81,	// (0x00034543) bg_dt_sta_title_pane_g

0x5dfb,	// (0x0002a4bd) bg_dt_sta_indi_pane_g1

0x88e0,	// (0x0002cfa2) dt_sta_signal_pane_g1

0x88e8,	// (0x0002cfaa) dt_sta_signal_pane_g2

0x0001,

0xfe88,	// (0x0003454a) dt_sta_signal_pane_g

0x88f0,	// (0x0002cfb2) dt_sta_battery_pane_g1

0x88f9,	// (0x0002cfbb) dt_sta_battery_pane_t1

0x5dfb,	// (0x0002a4bd) bg_dt_sta_control_pane_g1

0x0c96,	// (0x00025358) fep_china_uni_eep_pane

0x0c9e,	// (0x00025360) fep_china_uni_entry_pane_ParamLimits

0x0cae,	// (0x00025370) popup_fep_china_uni_window_g1_ParamLimits

0x0cbe,	// (0x00025380) popup_fep_china_uni_window_g2_ParamLimits

0x0cbe,	// (0x00025380) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x00033dba) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x00033dba) popup_fep_china_uni_window_g

0x8908,	// (0x0002cfca) fep_china_uni_eep_pane_g1

0x8910,	// (0x0002cfd2) fep_china_uni_eep_pane_t1

0x832d,	// (0x0002c9ef) aid_touch_area_size_smil_player

0x3476,	// (0x00027b38) lc0_clock_pane

0x366d,	// (0x00027d2f) status_pane_g5_ParamLimits

0x366d,	// (0x00027d2f) status_pane_g5

0xb30c,	// (0x0002f9ce) popup_keymap_window

0x3633,	// (0x00027cf5) status_icon_pane

0xe5b9,	// (0x00032c7b) cell_ai5_widget_pane_g3_ParamLimits

0xe5d3,	// (0x00032c95) cell_ai5_widget_pane_g4_ParamLimits

0xe5e3,	// (0x00032ca5) cell_ai5_widget_pane_g5_ParamLimits

0x855e,	// (0x0002cc20) cell_ai5_widget_pane_g8_ParamLimits

0x855e,	// (0x0002cc20) cell_ai5_widget_pane_g8

0x8572,	// (0x0002cc34) cell_ai5_widget_pane_g9_ParamLimits

0x8572,	// (0x0002cc34) cell_ai5_widget_pane_g9

0x8586,	// (0x0002cc48) cell_ai5_widget_pane_g10_ParamLimits

0x8586,	// (0x0002cc48) cell_ai5_widget_pane_g10

0x891f,	// (0x0002cfe1) status_icon_pane_g1

0xce47,	// (0x00031509) bg_popup_sub_pane_cp13

0x8927,	// (0x0002cfe9) popup_keymap_window_t1

0xaffb,	// (0x0002f6bd) control_pane_g6_ParamLimits

0xaffb,	// (0x0002f6bd) control_pane_g6

0xb008,	// (0x0002f6ca) control_pane_g7_ParamLimits

0xb008,	// (0x0002f6ca) control_pane_g7

0xb015,	// (0x0002f6d7) control_pane_g8_ParamLimits

0xb015,	// (0x0002f6d7) control_pane_g8

0xe76b,	// (0x00032e2d) dt_sta_controll_pane_ParamLimits

0xe778,	// (0x00032e3a) dt_sta_indi_pane_ParamLimits

0xe785,	// (0x00032e47) dt_sta_title_pane_ParamLimits

0xd43b,	// (0x00031afd) aid_size_touch_scroll_bar_cale

0xf4ed,	// (0x00033baf) popup_discreet_window_ParamLimits

0xf4ed,	// (0x00033baf) popup_discreet_window

0xa696,	// (0x0002ed58) popup_sk_window

0x3e40,	// (0x00028502) bg_popup_sub_pane_cp28_ParamLimits

0x3e40,	// (0x00028502) bg_popup_sub_pane_cp28

0x8935,	// (0x0002cff7) popup_discreet_window_g1_ParamLimits

0x8935,	// (0x0002cff7) popup_discreet_window_g1

0x8955,	// (0x0002d017) popup_discreet_window_t1_ParamLimits

0x8955,	// (0x0002d017) popup_discreet_window_t1

0x8973,	// (0x0002d035) popup_discreet_window_t2_ParamLimits

0x8973,	// (0x0002d035) popup_discreet_window_t2

0x0002,

0xfe8d,	// (0x0003454f) popup_discreet_window_t_ParamLimits

0xfe8d,	// (0x0003454f) popup_discreet_window_t

0x27bd,	// (0x00026e7f) popup_sk_window_g1

0x27c7,	// (0x00026e89) popup_sk_window_g2

0x0001,

0xfe94,	// (0x00034556) popup_sk_window_g

0x27cf,	// (0x00026e91) popup_sk_window_t1

0x27dd,	// (0x00026e9f) popup_sk_window_t1_copy1

0xe5a5,	// (0x00032c67) cell_ai5_widget_pane_g2_ParamLimits

0xe686,	// (0x00032d48) cell_ai5_widget_pane_t9_ParamLimits

0xe686,	// (0x00032d48) cell_ai5_widget_pane_t9

0xce47,	// (0x00031509) main_fep_fshwr2_pane

0xcc62,	// (0x00031324) aid_fshwr2_btn_pane

0xcc76,	// (0x00031338) aid_fshwr2_syb_pane

0xcc8a,	// (0x0003134c) aid_fshwr2_txt_pane

0xcc9a,	// (0x0003135c) fshwr2_func_candi_pane

0xccbc,	// (0x0003137e) fshwr2_hwr_syb_pane

0xcce0,	// (0x000313a2) fshwr2_icf_pane

0xce47,	// (0x00031509) fshwr2_icf_bg_pane

0x2877,	// (0x00026f39) fshwr2_icf_pane_t1_ParamLimits

0x2877,	// (0x00026f39) fshwr2_icf_pane_t1

0x0ab3,	// (0x00025175) fshwr2_func_candi_pane_g1

0xe804,	// (0x00032ec6) fshwr2_func_candi_row_pane_ParamLimits

0xe804,	// (0x00032ec6) fshwr2_func_candi_row_pane

0xcd10,	// (0x000313d2) cell_fshwr2_syb_pane_ParamLimits

0xcd10,	// (0x000313d2) cell_fshwr2_syb_pane

0x82fd,	// (0x0002c9bf) fshwr2_hwr_syb_pane_g1_ParamLimits

0x82fd,	// (0x0002c9bf) fshwr2_hwr_syb_pane_g1

0xce47,	// (0x00031509) bg_popup_call_pane_cp01

0xcd38,	// (0x000313fa) fshwr2_func_candi_cell_pane_ParamLimits

0xcd38,	// (0x000313fa) fshwr2_func_candi_cell_pane

0x3c20,	// (0x000282e2) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x3c20,	// (0x000282e2) fshwr2_func_candi_cell_bg_pane

0xcd83,	// (0x00031445) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcd83,	// (0x00031445) fshwr2_func_candi_cell_pane_g1

0xcdba,	// (0x0003147c) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcdba,	// (0x0003147c) fshwr2_func_candi_cell_pane_t1

0xce47,	// (0x00031509) bg_button_pane_cp08

0x32a4,	// (0x00027966) cell_fshwr2_syb_bg_pane

0xcdd5,	// (0x00031497) cell_fshwr2_syb_bg_pane_g1

0xcde9,	// (0x000314ab) cell_fshwr2_syb_bg_pane_t1

0xd4f9,	// (0x00031bbb) main_tmo_pane

0xc04e,	// (0x00030710) uni_indicator_pane_g1_ParamLimits

0xc064,	// (0x00030726) uni_indicator_pane_g2_ParamLimits

0xc07a,	// (0x0003073c) uni_indicator_pane_g3_ParamLimits

0xc08d,	// (0x0003074f) uni_indicator_pane_g4_ParamLimits

0xc08d,	// (0x0003074f) uni_indicator_pane_g4

0x49b7,	// (0x00029079) uni_indicator_pane_g5_ParamLimits

0x49b7,	// (0x00029079) uni_indicator_pane_g5

0x49b7,	// (0x00029079) uni_indicator_pane_g6_ParamLimits

0x49b7,	// (0x00029079) uni_indicator_pane_g6

0xf8f7,	// (0x00033fb9) uni_indicator_pane_g_ParamLimits

0xd95c,	// (0x0003201e) popup_tmo_note_window_ParamLimits

0xd95c,	// (0x0003201e) popup_tmo_note_window

0xd4f9,	// (0x00031bbb) fshwr2_bg_pane

0xcdab,	// (0x0003146d) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcdab,	// (0x0003146d) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe99,	// (0x0003455b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe99,	// (0x0003455b) fshwr2_func_candi_cell_pane_g

0x5dfb,	// (0x0002a4bd) bg_popup_window_pane_cp01

0x295b,	// (0x0002701d) bg_popup_window_pane_g1_cp01

0x89e8,	// (0x0002d0aa) bg_popup_window_pane_cp22_ParamLimits

0x89e8,	// (0x0002d0aa) bg_popup_window_pane_cp22

0x89f6,	// (0x0002d0b8) listscroll_tmo_link_pane_ParamLimits

0x89f6,	// (0x0002d0b8) listscroll_tmo_link_pane

0x8a36,	// (0x0002d0f8) popup_tmo_note_window_g1_ParamLimits

0x8a36,	// (0x0002d0f8) popup_tmo_note_window_g1

0x8a43,	// (0x0002d105) tmo_note_info_pane_ParamLimits

0x8a43,	// (0x0002d105) tmo_note_info_pane

0xe82b,	// (0x00032eed) list_tmo_note_info_pane_g1_ParamLimits

0xe82b,	// (0x00032eed) list_tmo_note_info_pane_g1

0x8a74,	// (0x0002d136) list_tmo_note_info_pane_g2_ParamLimits

0x8a74,	// (0x0002d136) list_tmo_note_info_pane_g2

0x0001,

0xfe9e,	// (0x00034560) list_tmo_note_info_pane_g_ParamLimits

0xfe9e,	// (0x00034560) list_tmo_note_info_pane_g

0x8a90,	// (0x0002d152) list_tmo_note_info_text_pane_ParamLimits

0x8a90,	// (0x0002d152) list_tmo_note_info_text_pane

0x8b15,	// (0x0002d1d7) list_tmo_link_pane

0x8b22,	// (0x0002d1e4) scroll_pane_cp20

0x8b2f,	// (0x0002d1f1) list_single_tmo_link_pane_ParamLimits

0x8b2f,	// (0x0002d1f1) list_single_tmo_link_pane

0x8b3f,	// (0x0002d201) list_single_tmo_link_pane_t1

0x8b4d,	// (0x0002d20f) list_tmo_note_info_text_pane_t1_ParamLimits

0x8b4d,	// (0x0002d20f) list_tmo_note_info_text_pane_t1

0xab38,	// (0x0002f1fa) aid_size_touch_scroll_bar_cp01_ParamLimits

0xab38,	// (0x0002f1fa) aid_size_touch_scroll_bar_cp01

0xa1c8,	// (0x0002e88a) aid_size_touch_slider_marker

0xa686,	// (0x0002ed48) popup_settings_window_ParamLimits

0xa686,	// (0x0002ed48) popup_settings_window

0xec7a,	// (0x0003333c) popup_candi_list_indi_window

0x3322,	// (0x000279e4) aid_touch_navi_pane_ParamLimits

0x1fbc,	// (0x0002667e) rs_clock_indi_pane

0x1fc5,	// (0x00026687) sctrl_sk_bottom_pane_ParamLimits

0x1fd6,	// (0x00026698) sctrl_sk_top_pane_ParamLimits

0x20bf,	// (0x00026781) popup_fep_tooltip_window

0xe571,	// (0x00032c33) aid_size_cell_widget_grid_ParamLimits

0xe590,	// (0x00032c52) cell_ai5_widget_pane_g1_ParamLimits

0xe590,	// (0x00032c52) cell_ai5_widget_pane_g1

0xe5f3,	// (0x00032cb5) cell_ai5_widget_pane_g6_ParamLimits

0xe5ff,	// (0x00032cc1) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe12,	// (0x000344d4) cell_ai5_widget_pane_g_ParamLimits

0xfe12,	// (0x000344d4) cell_ai5_widget_pane_g

0xe6b5,	// (0x00032d77) cell_ai5_widget_pane_t10_ParamLimits

0xe6b5,	// (0x00032d77) cell_ai5_widget_pane_t10

0xe6f8,	// (0x00032dba) grid_ai5_widget_pane_ParamLimits

0xe724,	// (0x00032de6) cell_contacts_ai5_widget_pane_ParamLimits

0xe724,	// (0x00032de6) cell_contacts_ai5_widget_pane

0x8988,	// (0x0002d04a) popup_discreet_window_t3_ParamLimits

0x8988,	// (0x0002d04a) popup_discreet_window_t3

0xccfc,	// (0x000313be) popup_fshwr2_char_preview_window_ParamLimits

0xccfc,	// (0x000313be) popup_fshwr2_char_preview_window

0xe842,	// (0x00032f04) tmo_note_info_pane_t1

0xe857,	// (0x00032f19) tmo_note_info_pane_t2

0xe870,	// (0x00032f32) tmo_note_info_pane_t3

0x8af1,	// (0x0002d1b3) tmo_note_info_pane_t4

0x8b03,	// (0x0002d1c5) tmo_note_info_pane_t5

0x0004,

0xfea3,	// (0x00034565) tmo_note_info_pane_t

0x8b15,	// (0x0002d1d7) list_tmo_link_pane_ParamLimits

0x8b22,	// (0x0002d1e4) scroll_pane_cp20_ParamLimits

0xce47,	// (0x00031509) bg_popup_fep_char_preview_window_cp01

0x8b66,	// (0x0002d228) popup_fshwr2_char_preview_window_t1

0x8b74,	// (0x0002d236) popup_candi_list_indi_window_g1

0x8b7d,	// (0x0002d23f) bg_cell_contacts_ai5_widget_pane

0x8b89,	// (0x0002d24b) cell_contacts_ai5_widget_pane_g1

0x8b9e,	// (0x0002d260) cell_contacts_ai5_widget_pane_g2

0x8baa,	// (0x0002d26c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeae,	// (0x00034570) cell_contacts_ai5_widget_pane_g

0x8bb6,	// (0x0002d278) cell_contacts_ai5_widget_pane_t1

0xd4f9,	// (0x00031bbb) highlight_cell_shortcut_ai5_widget_pane_cp01

0x8c2d,	// (0x0002d2ef) settings_container_pane

0x2f7d,	// (0x0002763f) listscroll_set_pane_copy1

0x5520,	// (0x00029be2) scroll_pane_cp121_copy1

0x8c39,	// (0x0002d2fb) set_content_pane_copy1

0x8c41,	// (0x0002d303) aid_height_set_list_copy1_ParamLimits

0x8c41,	// (0x0002d303) aid_height_set_list_copy1

0x4bb7,	// (0x00029279) aid_size_parent_copy1_ParamLimits

0x4bb7,	// (0x00029279) aid_size_parent_copy1

0x8c4d,	// (0x0002d30f) button_value_adjust_pane_cp6_copy1_ParamLimits

0x8c4d,	// (0x0002d30f) button_value_adjust_pane_cp6_copy1

0x32a4,	// (0x00027966) list_highlight_pane_cp2_copy1_ParamLimits

0x32a4,	// (0x00027966) list_highlight_pane_cp2_copy1

0x8c61,	// (0x0002d323) list_set_pane_copy1_ParamLimits

0x8c61,	// (0x0002d323) list_set_pane_copy1

0x8bc8,	// (0x0002d28a) main_pane_set_t1_copy1_ParamLimits

0x8bc8,	// (0x0002d28a) main_pane_set_t1_copy1

0x8c02,	// (0x0002d2c4) main_pane_set_t2_copy1_ParamLimits

0x8c02,	// (0x0002d2c4) main_pane_set_t2_copy1

0x8d22,	// (0x0002d3e4) main_pane_set_t3_copy1

0x8d30,	// (0x0002d3f2) main_pane_set_t4_copy1

0x8c21,	// (0x0002d2e3) set_content_pane_g1_copy1_ParamLimits

0x8c21,	// (0x0002d2e3) set_content_pane_g1_copy1

0x8d3e,	// (0x0002d400) setting_code_pane_copy1

0x8d46,	// (0x0002d408) setting_slider_graphic_pane_copy1

0x8d46,	// (0x0002d408) setting_slider_pane_copy1

0x8d4e,	// (0x0002d410) setting_text_pane_copy1

0x8d4e,	// (0x0002d410) setting_volume_pane_copy1

0x8d3e,	// (0x0002d400) settings_code_pane_cp2_copy1

0x8d56,	// (0x0002d418) settings_code_pane_cp_copy1_ParamLimits

0x8d56,	// (0x0002d418) settings_code_pane_cp_copy1

0x2964,	// (0x00027026) volume_set_pane_copy1

0x8d6a,	// (0x0002d42c) volume_set_pane_g10_copy1

0x8d76,	// (0x0002d438) volume_set_pane_g1_copy1

0x8d80,	// (0x0002d442) volume_set_pane_g2_copy1

0x8d8a,	// (0x0002d44c) volume_set_pane_g3_copy1

0x8d94,	// (0x0002d456) volume_set_pane_g4_copy1

0x8d9e,	// (0x0002d460) volume_set_pane_g5_copy1

0x8da8,	// (0x0002d46a) volume_set_pane_g6_copy1

0x8db2,	// (0x0002d474) volume_set_pane_g7_copy1

0x8dbc,	// (0x0002d47e) volume_set_pane_g8_copy1

0x8dc6,	// (0x0002d488) volume_set_pane_g9_copy1

0xceb7,	// (0x00031579) bg_set_opt_pane_cp_copy1_ParamLimits

0xceb7,	// (0x00031579) bg_set_opt_pane_cp_copy1

0x2970,	// (0x00027032) setting_slider_pane_t1_copy1_ParamLimits

0x2970,	// (0x00027032) setting_slider_pane_t1_copy1

0x298f,	// (0x00027051) setting_slider_pane_t2_copy1_ParamLimits

0x298f,	// (0x00027051) setting_slider_pane_t2_copy1

0x29a9,	// (0x0002706b) setting_slider_pane_t3_copy1_ParamLimits

0x29a9,	// (0x0002706b) setting_slider_pane_t3_copy1

0x29c1,	// (0x00027083) slider_set_pane_copy1_ParamLimits

0x29c1,	// (0x00027083) slider_set_pane_copy1

0xd551,	// (0x00031c13) set_opt_bg_pane_g1_copy2

0xd559,	// (0x00031c1b) set_opt_bg_pane_g2_copy2

0x8dd2,	// (0x0002d494) set_opt_bg_pane_g3_copy2

0xd569,	// (0x00031c2b) set_opt_bg_pane_g4_copy2

0xd571,	// (0x00031c33) set_opt_bg_pane_g5_copy2

0xd579,	// (0x00031c3b) set_opt_bg_pane_g6_copy2

0x8ddc,	// (0x0002d49e) set_opt_bg_pane_g7_copy2

0x8de6,	// (0x0002d4a8) set_opt_bg_pane_g8_copy2

0x8df0,	// (0x0002d4b2) set_opt_bg_pane_g9_copy2

0x29d7,	// (0x00027099) aid_size_touch_slider_mark_copy1_ParamLimits

0x29d7,	// (0x00027099) aid_size_touch_slider_mark_copy1

0x8dfa,	// (0x0002d4bc) slider_set_pane_g1_copy1

0x29eb,	// (0x000270ad) slider_set_pane_g2_copy1

0x1a84,	// (0x00026146) slider_set_pane_g3_copy1_ParamLimits

0x1a84,	// (0x00026146) slider_set_pane_g3_copy1

0x1a98,	// (0x0002615a) slider_set_pane_g4_copy1_ParamLimits

0x1a98,	// (0x0002615a) slider_set_pane_g4_copy1

0x1ab0,	// (0x00026172) slider_set_pane_g5_copy1_ParamLimits

0x1ab0,	// (0x00026172) slider_set_pane_g5_copy1

0x1a84,	// (0x00026146) slider_set_pane_g6_copy1_ParamLimits

0x1a84,	// (0x00026146) slider_set_pane_g6_copy1

0x29f3,	// (0x000270b5) slider_set_pane_g7_copy1_ParamLimits

0x29f3,	// (0x000270b5) slider_set_pane_g7_copy1

0xce5b,	// (0x0003151d) bg_set_opt_pane_cp2_copy1

0x8e03,	// (0x0002d4c5) setting_slider_graphic_pane_g1_copy1

0x8e0c,	// (0x0002d4ce) setting_slider_graphic_pane_t1_copy1

0x8e1c,	// (0x0002d4de) setting_slider_graphic_pane_t2_copy1

0x8e2c,	// (0x0002d4ee) slider_set_pane_cp_copy1

0x8e3c,	// (0x0002d4fe) input_focus_pane_cp1_copy1

0x8e45,	// (0x0002d507) list_set_text_pane_copy1

0x8e4d,	// (0x0002d50f) setting_text_pane_g1_copy1

0xf4bb,	// (0x00033b7d) set_text_pane_t1_copy1

0x8e3c,	// (0x0002d4fe) input_focus_pane_cp2_copy1

0x8e4d,	// (0x0002d50f) setting_code_pane_g1_copy1

0x8e56,	// (0x0002d518) setting_code_pane_t1_copy1

0x5325,	// (0x000299e7) list_set_graphic_pane_copy1

0xce5b,	// (0x0003151d) bg_set_opt_pane_cp4_copy1

0x2c6c,	// (0x0002732e) list_set_graphic_pane_g1_copy1_ParamLimits

0x2c6c,	// (0x0002732e) list_set_graphic_pane_g1_copy1

0x8e64,	// (0x0002d526) list_set_graphic_pane_g2_copy1

0x2c84,	// (0x00027346) list_set_graphic_pane_t1_copy1_ParamLimits

0x2c84,	// (0x00027346) list_set_graphic_pane_t1_copy1

0x5dfb,	// (0x0002a4bd) rs_clock_indi_pane_g1

0x8e6c,	// (0x0002d52e) rs_clock_indi_pane_t1

0x8e7a,	// (0x0002d53c) rs_indi_pane

0x8e82,	// (0x0002d544) rs_indi_pane_g1

0x8e8b,	// (0x0002d54d) rs_indi_pane_g2

0x8e94,	// (0x0002d556) rs_indi_pane_g3

0x0002,

0xfeb5,	// (0x00034577) rs_indi_pane_g

0x2f7d,	// (0x0002763f) bg_popup_preview_window_pane_cp03

0x8e9d,	// (0x0002d55f) popup_fep_tooltip_window_t1

0x6ab4,	// (0x0002b176) popup_note2_window_g2_ParamLimits

0x6ab4,	// (0x0002b176) popup_note2_window_g2

0x0001,

0xfc42,	// (0x00034304) popup_note2_window_g_ParamLimits

0xfc42,	// (0x00034304) popup_note2_window_g

0x6fbc,	// (0x0002b67e) bg_popup_sub_pane_cp11_ParamLimits

0x6fc9,	// (0x0002b68b) cell_ai3_links_pane_g1_ParamLimits

0x6fe0,	// (0x0002b6a2) cell_ai3_links_pane_t1

0xf4bb,	// (0x00033b7d) set_text_pane_t1_copy1_ParamLimits

0xae05,	// (0x0002f4c7) cell_graphic_popup_pane_cp2_ParamLimits

0xae05,	// (0x0002f4c7) cell_graphic_popup_pane_cp2

0x8eab,	// (0x0002d56d) cell_graphic_popup_pane_g1_cp2

0xd24e,	// (0x00031910) cell_graphic_popup_pane_g2_cp2

0x8eb3,	// (0x0002d575) cell_graphic_popup_pane_g3_cp2

0x8ebb,	// (0x0002d57d) cell_graphic_popup_pane_t2_cp2

0xd25f,	// (0x00031921) grid_highlight_pane_cp3_cp2

0x07b9,	// (0x00024e7b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xd4f9,	// (0x00031bbb) main_tmo_pane_ParamLimits

0xd950,	// (0x00032012) popup_tmo_big_image_note_window

0xe57f,	// (0x00032c41) cell_ai5_widget_list_pane

0xe587,	// (0x00032c49) cell_ai5_widget_lrg_icon_pane

0xe842,	// (0x00032f04) tmo_note_info_pane_t1_ParamLimits

0xe857,	// (0x00032f19) tmo_note_info_pane_t2_ParamLimits

0xe870,	// (0x00032f32) tmo_note_info_pane_t3_ParamLimits

0x8af1,	// (0x0002d1b3) tmo_note_info_pane_t4_ParamLimits

0x8b03,	// (0x0002d1c5) tmo_note_info_pane_t5_ParamLimits

0xfea3,	// (0x00034565) tmo_note_info_pane_t_ParamLimits

0x8c2d,	// (0x0002d2ef) settings_container_pane_ParamLimits

0x8e34,	// (0x0002d4f6) indicator_popup_pane_cp5

0x8e34,	// (0x0002d4f6) indicator_popup_pane_cp6

0x5325,	// (0x000299e7) list_set_graphic_pane_copy1_ParamLimits

0xce47,	// (0x00031509) bg_popup_window_pane_cp23

0x8ec9,	// (0x0002d58b) popup_tmo_big_image_note_window_g1

0x8ed5,	// (0x0002d597) popup_tmo_big_image_note_window_t1

0x8ee5,	// (0x0002d5a7) popup_tmo_big_image_note_window_t2

0x8ef5,	// (0x0002d5b7) popup_tmo_big_image_note_window_t3

0x0002,

0xfebc,	// (0x0003457e) popup_tmo_big_image_note_window_t

0x5dfb,	// (0x0002a4bd) cell_ai5_widget_lrg_icon_pane_g1

0xe885,	// (0x00032f47) cell_ai5_widget_lrg_icon_pane_t1

0xe893,	// (0x00032f55) cell_ai5_widget_list_row_pane_ParamLimits

0xe893,	// (0x00032f55) cell_ai5_widget_list_row_pane

0xe8ab,	// (0x00032f6d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe8ab,	// (0x00032f6d) cell_ai5_widget_list_row_pane_g1

0xe8b8,	// (0x00032f7a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe8b8,	// (0x00032f7a) cell_ai5_widget_list_row_pane_t1

0xe8e3,	// (0x00032fa5) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe8e3,	// (0x00032fa5) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec3,	// (0x00034585) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec3,	// (0x00034585) cell_ai5_widget_list_row_pane_t

0xce47,	// (0x00031509) main_fep_vtchi_ss_pane

0x8fb3,	// (0x0002d675) popup_fep_char_pre_window

0x8fbb,	// (0x0002d67d) popup_fep_ituss_window

0xe935,	// (0x00032ff7) popup_fep_vkbss_window

0x32a4,	// (0x00027966) grid_vkbss_keypad_pane_ParamLimits

0x32a4,	// (0x00027966) grid_vkbss_keypad_pane

0x9029,	// (0x0002d6eb) ituss_keypad_pane

0x2a15,	// (0x000270d7) aid_vkbss_key_offset_ParamLimits

0x2a15,	// (0x000270d7) aid_vkbss_key_offset

0xcdff,	// (0x000314c1) cell_vkbss_key_pane_ParamLimits

0xcdff,	// (0x000314c1) cell_vkbss_key_pane

0x9035,	// (0x0002d6f7) bg_cell_vkbss_key_g1_ParamLimits

0x9035,	// (0x0002d6f7) bg_cell_vkbss_key_g1

0xe944,	// (0x00033006) cell_vkbss_key_3p_pane_ParamLimits

0xe944,	// (0x00033006) cell_vkbss_key_3p_pane

0xe97a,	// (0x0003303c) cell_vkbss_key_g1_ParamLimits

0xe97a,	// (0x0003303c) cell_vkbss_key_g1

0xe9b0,	// (0x00033072) cell_vkbss_key_t1_ParamLimits

0xe9b0,	// (0x00033072) cell_vkbss_key_t1

0x2a5b,	// (0x0002711d) cell_ituss_key_pane_ParamLimits

0x2a5b,	// (0x0002711d) cell_ituss_key_pane

0x9109,	// (0x0002d7cb) bg_cell_ituss_key_g1_ParamLimits

0x9109,	// (0x0002d7cb) bg_cell_ituss_key_g1

0x9115,	// (0x0002d7d7) cell_ituss_key_pane_g1_ParamLimits

0x9115,	// (0x0002d7d7) cell_ituss_key_pane_g1

0x2a6c,	// (0x0002712e) cell_ituss_key_pane_g2_ParamLimits

0x2a6c,	// (0x0002712e) cell_ituss_key_pane_g2

0x0005,

0xfeca,	// (0x0003458c) cell_ituss_key_pane_g_ParamLimits

0xfeca,	// (0x0003458c) cell_ituss_key_pane_g

0x2af0,	// (0x000271b2) cell_ituss_key_t1_ParamLimits

0x2af0,	// (0x000271b2) cell_ituss_key_t1

0x2b2a,	// (0x000271ec) cell_ituss_key_t2_ParamLimits

0x2b2a,	// (0x000271ec) cell_ituss_key_t2

0x2b5b,	// (0x0002721d) cell_ituss_key_t3_ParamLimits

0x2b5b,	// (0x0002721d) cell_ituss_key_t3

0x2b2a,	// (0x000271ec) cell_ituss_key_t4_ParamLimits

0x2b2a,	// (0x000271ec) cell_ituss_key_t4

0x0004,

0xfed7,	// (0x00034599) cell_ituss_key_t_ParamLimits

0xfed7,	// (0x00034599) cell_ituss_key_t

0xea0c,	// (0x000330ce) cell_vkbss_key_3p_pane_g1

0xea14,	// (0x000330d6) cell_vkbss_key_3p_pane_g2

0xea1c,	// (0x000330de) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee2,	// (0x000345a4) cell_vkbss_key_3p_pane_g

0x2f7d,	// (0x0002763f) bg_popup_fep_char_preview_window_cp02

0x9153,	// (0x0002d815) popup_fep_char_pre_window_t1

0xe55e,	// (0x00032c20) main_ai5_sk_pane

0x8b7d,	// (0x0002d23f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x8b89,	// (0x0002d24b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8b9e,	// (0x0002d260) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8baa,	// (0x0002d26c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeae,	// (0x00034570) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8bb6,	// (0x0002d278) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xd4f9,	// (0x00031bbb) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xea24,	// (0x000330e6) main_ai5_sk_pane_g1

0x3c78,	// (0x0002833a) popup_query_code_window_g1

0xe926,	// (0x00032fe8) popup_fep_vkb_icf_pane

0x9000,	// (0x0002d6c2) popup_fep_vtchi_icf_pane

0x32a4,	// (0x00027966) bg_icf_pane

0x32a4,	// (0x00027966) list_vkb_icf_pane

0x916a,	// (0x0002d82c) bg_icf_pane_cp01

0x917d,	// (0x0002d83f) vtchi_icf_list_pane

0xea79,	// (0x0003313b) list_vkb_icf_pane_t1_ParamLimits

0xea79,	// (0x0003313b) list_vkb_icf_pane_t1

0x9201,	// (0x0002d8c3) vtchi_icf_list_pane_t1_ParamLimits

0x9201,	// (0x0002d8c3) vtchi_icf_list_pane_t1

0x8fbb,	// (0x0002d67d) popup_fep_ituss_window_ParamLimits

0x9000,	// (0x0002d6c2) popup_fep_vtchi_icf_pane_ParamLimits

0x9029,	// (0x0002d6eb) ituss_keypad_pane_ParamLimits

0x2a09,	// (0x000270cb) ituss_sks_pane

0x32a4,	// (0x00027966) bg_icf_pane_ParamLimits

0xe90b,	// (0x00032fcd) icf_edit_indi_pane_ParamLimits

0xe90b,	// (0x00032fcd) icf_edit_indi_pane

0x32a4,	// (0x00027966) list_vkb_icf_pane_ParamLimits

0x916a,	// (0x0002d82c) bg_icf_pane_cp01_ParamLimits

0x8fa6,	// (0x0002d668) icf_edit_indi_pane_cp01_ParamLimits

0x8fa6,	// (0x0002d668) icf_edit_indi_pane_cp01

0x9185,	// (0x0002d847) vtchi_query_pane

0x82fd,	// (0x0002c9bf) icf_edit_indi_pane_g1_ParamLimits

0x82fd,	// (0x0002c9bf) icf_edit_indi_pane_g1

0xea90,	// (0x00033152) icf_edit_indi_pane_g2_ParamLimits

0xea90,	// (0x00033152) icf_edit_indi_pane_g2

0x0001,

0xff0d,	// (0x000345cf) icf_edit_indi_pane_g_ParamLimits

0xff0d,	// (0x000345cf) icf_edit_indi_pane_g

0xeaa4,	// (0x00033166) icf_edit_indi_pane_t1

0x921a,	// (0x0002d8dc) bg_input_focus_pane_cp042

0xd432,	// (0x00031af4) vtchi_button_pane

0x9223,	// (0x0002d8e5) vtchi_query_pane_t1

0x9231,	// (0x0002d8f3) vtchi_query_pane_t2

0x923f,	// (0x0002d901) vtchi_query_pane_t3

0x0002,

0xfefc,	// (0x000345be) vtchi_query_pane_t

0xce47,	// (0x00031509) bg_button_pane_cp13

0x924d,	// (0x0002d90f) vtchi_button_pane_g1

0x2b9e,	// (0x00027260) ituss_sks_pane_g1

0x2ba9,	// (0x0002726b) ituss_sks_pane_g2

0x0001,

0xff03,	// (0x000345c5) ituss_sks_pane_g

0x9255,	// (0x0002d917) ituss_sks_pane_t1

0x9263,	// (0x0002d925) ituss_sks_pane_t2

0x0001,

0xff08,	// (0x000345ca) ituss_sks_pane_t

0x58cf,	// (0x00029f91) indicator_nsta_pane_cp_g1

0x58d8,	// (0x00029f9a) indicator_nsta_pane_cp_g2

0x58e0,	// (0x00029fa2) indicator_nsta_pane_cp_g3

0x58e8,	// (0x00029faa) indicator_nsta_pane_cp_g4

0x58d8,	// (0x00029f9a) indicator_nsta_pane_cp_g5

0x58e0,	// (0x00029fa2) indicator_nsta_pane_cp_g6

0x0005,

0xfa8c,	// (0x0003414e) indicator_nsta_pane_cp_g

0xe370,	// (0x00032a32) cell_graphic2_pane_t2_ParamLimits

0xe370,	// (0x00032a32) cell_graphic2_pane_t2

0x0001,

0xfd99,	// (0x0003445b) cell_graphic2_pane_t_ParamLimits

0xfd99,	// (0x0003445b) cell_graphic2_pane_t

0xe3a8,	// (0x00032a6a) cell_graphic2_control_pane_t1

0xad86,	// (0x0002f448) signal_pane_g3_ParamLimits

0xad86,	// (0x0002f448) signal_pane_g3

0xad9a,	// (0x0002f45c) signal_pane_g4_ParamLimits

0xad9a,	// (0x0002f45c) signal_pane_g4

0xe8f5,	// (0x00032fb7) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe8f5,	// (0x00032fb7) cell_ai5_widget_list_row_pane_t3

0x9129,	// (0x0002d7eb) cell_ituss_key_pane_t1_ParamLimits

0x9129,	// (0x0002d7eb) cell_ituss_key_pane_t1

0x38df,	// (0x00027fa1) form_field_data_wide_pane_vc_t2_ParamLimits

0x38df,	// (0x00027fa1) form_field_data_wide_pane_vc_t2

0x38f3,	// (0x00027fb5) form_field_data_wide_pane_vc_t3_ParamLimits

0x38f3,	// (0x00027fb5) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x00033ea1) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x00033ea1) form_field_data_wide_pane_vc_t

0x5560,	// (0x00029c22) form_field_slider_wide_pane_vc_t3_ParamLimits

0x5560,	// (0x00029c22) form_field_slider_wide_pane_vc_t3

0x5636,	// (0x00029cf8) form_field_popup_wide_pane_vc_t2_ParamLimits

0x5636,	// (0x00029cf8) form_field_popup_wide_pane_vc_t2

0x564d,	// (0x00029d0f) form_field_popup_wide_pane_vc_t3_ParamLimits

0x564d,	// (0x00029d0f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7b,	// (0x0003413d) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7b,	// (0x0003413d) form_field_popup_wide_pane_vc_t

0xcc62,	// (0x00031324) aid_fshwr2_btn_pane_ParamLimits

0xcc76,	// (0x00031338) aid_fshwr2_syb_pane_ParamLimits

0xcc8a,	// (0x0003134c) aid_fshwr2_txt_pane_ParamLimits

0xd4f9,	// (0x00031bbb) fshwr2_bg_pane_ParamLimits

0xcc9a,	// (0x0003135c) fshwr2_func_candi_pane_ParamLimits

0xccbc,	// (0x0003137e) fshwr2_hwr_syb_pane_ParamLimits

0xcce0,	// (0x000313a2) fshwr2_icf_pane_ParamLimits

0xf083,	// (0x00033745) list_double_graphic_pane_vc_g4_ParamLimits

0xf083,	// (0x00033745) list_double_graphic_pane_vc_g4

0x2a8c,	// (0x0002714e) cell_ituss_key_pane_g3_ParamLimits

0x2a8c,	// (0x0002714e) cell_ituss_key_pane_g3

0x2b8c,	// (0x0002724e) cell_ituss_key_t5_ParamLimits

0x2b8c,	// (0x0002724e) cell_ituss_key_t5

0xe935,	// (0x00032ff7) popup_fep_vkbss_window_ParamLimits

0xe568,	// (0x00032c2a) aid_cell_ai5_quarter

0xeaa4,	// (0x00033166) icf_edit_indi_pane_t1_ParamLimits

0xd092,	// (0x00031754) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xd092,	// (0x00031754) aid_tch_indicator_popup_pane_cp2

0xd0a5,	// (0x00031767) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xd0a5,	// (0x00031767) aid_tch_query_popup_data_pane_cp2

0x3c20,	// (0x000282e2) aid_tch_query_popup_pane_ParamLimits

0x3c20,	// (0x000282e2) aid_tch_query_popup_pane

0x3c20,	// (0x000282e2) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x3c20,	// (0x000282e2) aid_tch_query_popup_data_pane_cp1

0x32a4,	// (0x00027966) cell_fshwr2_syb_bg_pane_ParamLimits

0xcdd5,	// (0x00031497) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xcde9,	// (0x000314ab) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe926,	// (0x00032fe8) popup_fep_vkb_icf_pane_ParamLimits

0xcbf6,	// (0x000312b8) bg_popup_fep_char_preview_window_g10

0xe60b,	// (0x00032ccd) cell_ai5_widget_pane_g11_ParamLimits

0xe60b,	// (0x00032ccd) cell_ai5_widget_pane_g11

0x85a6,	// (0x0002cc68) cell_ai5_widget_pane_g12_ParamLimits

0x85a6,	// (0x0002cc68) cell_ai5_widget_pane_g12

0xe617,	// (0x00032cd9) cell_ai5_widget_pane_g13_ParamLimits

0xe617,	// (0x00032cd9) cell_ai5_widget_pane_g13

0xe6d4,	// (0x00032d96) cell_ai5_widget_pane_t11_ParamLimits

0xe6d4,	// (0x00032d96) cell_ai5_widget_pane_t11

0xe6e6,	// (0x00032da8) cell_ai5_widget_pane_t12_ParamLimits

0xe6e6,	// (0x00032da8) cell_ai5_widget_pane_t12

0x2a98,	// (0x0002715a) cell_ituss_key_pane_g4_ParamLimits

0x2a98,	// (0x0002715a) cell_ituss_key_pane_g4

0x2ab4,	// (0x00027176) cell_ituss_key_pane_g5_ParamLimits

0x2ab4,	// (0x00027176) cell_ituss_key_pane_g5

0x2ad0,	// (0x00027192) cell_ituss_key_pane_g6_ParamLimits

0x2ad0,	// (0x00027192) cell_ituss_key_pane_g6

0x37da,	// (0x00027e9c) bg_icf_pane_g1

0xea2d,	// (0x000330ef) bg_icf_pane_g2

0xea37,	// (0x000330f9) bg_icf_pane_g3

0xea3f,	// (0x00033101) bg_icf_pane_g4

0xea49,	// (0x0003310b) bg_icf_pane_g5

0xea53,	// (0x00033115) bg_icf_pane_g6

0xea5d,	// (0x0003311f) bg_icf_pane_g7

0xea65,	// (0x00033127) bg_icf_pane_g8

0xea6f,	// (0x00033131) bg_icf_pane_g9

0x0008,

0xfee9,	// (0x000345ab) bg_icf_pane_g

0x9016,	// (0x0002d6d8) popup_hyb_candi_window_ParamLimits

0x9016,	// (0x0002d6d8) popup_hyb_candi_window

0x384e,	// (0x00027f10) bg_popup_sub_pane_cp01_ParamLimits

0x384e,	// (0x00027f10) bg_popup_sub_pane_cp01

0x929e,	// (0x0002d960) entry_hyb_candi_pane_ParamLimits

0x929e,	// (0x0002d960) entry_hyb_candi_pane

0x92ad,	// (0x0002d96f) grid_hyb_candi_pane_ParamLimits

0x92ad,	// (0x0002d96f) grid_hyb_candi_pane

0x92c2,	// (0x0002d984) grid_hyb_phrase_pane_ParamLimits

0x92c2,	// (0x0002d984) grid_hyb_phrase_pane

0x92d1,	// (0x0002d993) cell_hyb_candi_pane_ParamLimits

0x92d1,	// (0x0002d993) cell_hyb_candi_pane

0xd43b,	// (0x00031afd) cell_hyb_candi_scroll_pane

0x0ab3,	// (0x00025175) cell_hyb_candi_pane_g1

0x92ed,	// (0x0002d9af) cell_hyb_candi_pane_t1

0x92fb,	// (0x0002d9bd) cell_hyb_phrase_pane

0x0ab3,	// (0x00025175) cell_hyb_phrase_pane_g1

0x9304,	// (0x0002d9c6) cell_hyb_phrase_pane_t1

0x9312,	// (0x0002d9d4) entry_hyb_candi_pane_t1

0x2f7d,	// (0x0002763f) input_focus_pane_cp06

0x9320,	// (0x0002d9e2) cell_hyb_candi_scroll_pane_g1

0x9328,	// (0x0002d9ea) cell_hyb_candi_scroll_pane_g1_aid

0x9330,	// (0x0002d9f2) cell_hyb_candi_scroll_pane_g2

0x9338,	// (0x0002d9fa) cell_hyb_candi_scroll_pane_g2_aid

0x9340,	// (0x0002da02) cell_hyb_candi_scroll_pane_g3

0x9348,	// (0x0002da0a) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small

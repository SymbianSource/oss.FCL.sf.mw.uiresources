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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00017307 };

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
0x33ba,	// (0x0001a6c1) Screen

0x33c6,	// (0x0001a6cd) application_window_ParamLimits

0x33c6,	// (0x0001a6cd) application_window

0xb902,	// (0x00022c09) screen_g1

0x80bc,	// (0x0001f3c3) area_bottom_pane_ParamLimits

0x80bc,	// (0x0001f3c3) area_bottom_pane

0x4e79,	// (0x0001c180) area_top_pane_ParamLimits

0x4e79,	// (0x0001c180) area_top_pane

0x4f0d,	// (0x0001c214) main_pane_ParamLimits

0x4f0d,	// (0x0001c214) main_pane

0xb90c,	// (0x00022c13) misc_graphics

0x9176,	// (0x0002047d) battery_pane_ParamLimits

0x9176,	// (0x0002047d) battery_pane

0xd65c,	// (0x00024963) bg_status_flat_pane_g8

0xd664,	// (0x0002496b) bg_status_flat_pane_g9

0xcdbd,	// (0x000240c4) context_pane_ParamLimits

0xcdbd,	// (0x000240c4) context_pane

0x92e1,	// (0x000205e8) navi_pane_ParamLimits

0x92e1,	// (0x000205e8) navi_pane

0x9358,	// (0x0002065f) signal_pane_ParamLimits

0x9358,	// (0x0002065f) signal_pane

0x0008,

0xf8ad,	// (0x00026bb4) bg_status_flat_pane_g

0x93e8,	// (0x000206ef) status_pane_g1_ParamLimits

0x93e8,	// (0x000206ef) status_pane_g1

0x93fe,	// (0x00020705) status_pane_g2_ParamLimits

0x93fe,	// (0x00020705) status_pane_g2

0xce22,	// (0x00024129) status_pane_g3_ParamLimits

0xce22,	// (0x00024129) status_pane_g3

0x0004,

0xf7e0,	// (0x00026ae7) status_pane_g_ParamLimits

0xf7e0,	// (0x00026ae7) status_pane_g

0x940a,	// (0x00020711) title_pane_ParamLimits

0x940a,	// (0x00020711) title_pane

0x946b,	// (0x00020772) uni_indicator_pane_ParamLimits

0x946b,	// (0x00020772) uni_indicator_pane

0xcbb0,	// (0x00023eb7) bg_list_pane_ParamLimits

0xcbb0,	// (0x00023eb7) bg_list_pane

0x8a52,	// (0x0001fd59) find_pane

0x8a5a,	// (0x0001fd61) listscroll_app_pane_ParamLimits

0x8a5a,	// (0x0001fd61) listscroll_app_pane

0xcbd0,	// (0x00023ed7) listscroll_form_pane

0x8a66,	// (0x0001fd6d) listscroll_gen_pane_ParamLimits

0x8a66,	// (0x0001fd6d) listscroll_gen_pane

0xcbd0,	// (0x00023ed7) listscroll_set_pane

0xdc60,	// (0x00024f67) main_idle_act_pane

0xc98e,	// (0x00023c95) main_idle_trad_pane

0xc98e,	// (0x00023c95) main_list_empty_pane

0xc0c1,	// (0x000233c8) main_midp_pane

0xcbea,	// (0x00023ef1) main_pane_g1_ParamLimits

0xcbea,	// (0x00023ef1) main_pane_g1

0x8a7a,	// (0x0001fd81) popup_ai_message_window_ParamLimits

0x8a7a,	// (0x0001fd81) popup_ai_message_window

0x8b0b,	// (0x0001fe12) popup_fep_china_uni_window_ParamLimits

0x8b0b,	// (0x0001fe12) popup_fep_china_uni_window

0xcc1c,	// (0x00023f23) popup_fep_japan_candidate_window_ParamLimits

0xcc1c,	// (0x00023f23) popup_fep_japan_candidate_window

0xcc3c,	// (0x00023f43) popup_fep_japan_predictive_window_ParamLimits

0xcc3c,	// (0x00023f43) popup_fep_japan_predictive_window

0x8b67,	// (0x0001fe6e) popup_find_window

0x8b84,	// (0x0001fe8b) popup_grid_graphic_window_ParamLimits

0x8b84,	// (0x0001fe8b) popup_grid_graphic_window

0xcc6c,	// (0x00023f73) popup_large_graphic_colour_window

0x8c1c,	// (0x0001ff23) popup_menu_window_ParamLimits

0x8c1c,	// (0x0001ff23) popup_menu_window

0x8dd6,	// (0x000200dd) popup_note_image_window

0x8d9c,	// (0x000200a3) popup_note_wait_window_ParamLimits

0x8d9c,	// (0x000200a3) popup_note_wait_window

0x8dee,	// (0x000200f5) popup_note_window_ParamLimits

0x8dee,	// (0x000200f5) popup_note_window

0x8e94,	// (0x0002019b) popup_query_code_window_ParamLimits

0x8e94,	// (0x0002019b) popup_query_code_window

0xcc92,	// (0x00023f99) popup_query_data_code_window_ParamLimits

0xcc92,	// (0x00023f99) popup_query_data_code_window

0x8ece,	// (0x000201d5) popup_query_data_window_ParamLimits

0x8ece,	// (0x000201d5) popup_query_data_window

0x8f44,	// (0x0002024b) popup_query_sat_info_window_ParamLimits

0x8f44,	// (0x0002024b) popup_query_sat_info_window

0x8fdb,	// (0x000202e2) popup_snote_single_graphic_window_ParamLimits

0x8fdb,	// (0x000202e2) popup_snote_single_graphic_window

0x8fdb,	// (0x000202e2) popup_snote_single_text_window_ParamLimits

0x8fdb,	// (0x000202e2) popup_snote_single_text_window

0xccaf,	// (0x00023fb6) popup_sub_window_general

0xccf7,	// (0x00023ffe) popup_window_general_ParamLimits

0xccf7,	// (0x00023ffe) popup_window_general

0xcd0c,	// (0x00024013) power_save_pane

0x88e3,	// (0x0001fbea) control_pane_g1_ParamLimits

0x88e3,	// (0x0001fbea) control_pane_g1

0x5695,	// (0x0001c99c) control_pane_g2_ParamLimits

0x5695,	// (0x0001c99c) control_pane_g2

0xcb8a,	// (0x00023e91) control_pane_g3_ParamLimits

0xcb8a,	// (0x00023e91) control_pane_g3

0x0007,

0xf7c8,	// (0x00026acf) control_pane_g_ParamLimits

0xf7c8,	// (0x00026acf) control_pane_g

0x8949,	// (0x0001fc50) control_pane_t1_ParamLimits

0x8949,	// (0x0001fc50) control_pane_t1

0x89a7,	// (0x0001fcae) control_pane_t2_ParamLimits

0x89a7,	// (0x0001fcae) control_pane_t2

0x0002,

0xf7d9,	// (0x00026ae0) control_pane_t_ParamLimits

0xf7d9,	// (0x00026ae0) control_pane_t

0xcaab,	// (0x00023db2) navi_navi_volume_pane_cp1

0xcab4,	// (0x00023dbb) status_small_icon_pane

0xcabc,	// (0x00023dc3) status_small_pane_g1_ParamLimits

0xcabc,	// (0x00023dc3) status_small_pane_g1

0xcaf0,	// (0x00023df7) status_small_pane_g2_ParamLimits

0xcaf0,	// (0x00023df7) status_small_pane_g2

0xcafc,	// (0x00023e03) status_small_pane_g3_ParamLimits

0xcafc,	// (0x00023e03) status_small_pane_g3

0xcb08,	// (0x00023e0f) status_small_pane_g4_ParamLimits

0xcb08,	// (0x00023e0f) status_small_pane_g4

0xcb14,	// (0x00023e1b) status_small_pane_g5_ParamLimits

0xcb14,	// (0x00023e1b) status_small_pane_g5

0xcb23,	// (0x00023e2a) status_small_pane_g6_ParamLimits

0xcb23,	// (0x00023e2a) status_small_pane_g6

0x0007,

0xf7b7,	// (0x00026abe) status_small_pane_g_ParamLimits

0xf7b7,	// (0x00026abe) status_small_pane_g

0xcb53,	// (0x00023e5a) status_small_pane_t1

0xcb76,	// (0x00023e7d) status_small_wait_pane_ParamLimits

0xcb76,	// (0x00023e7d) status_small_wait_pane

0x876a,	// (0x0001fa71) aid_levels_signal_ParamLimits

0x876a,	// (0x0001fa71) aid_levels_signal

0x8782,	// (0x0001fa89) signal_pane_g1_ParamLimits

0x8782,	// (0x0001fa89) signal_pane_g1

0x879d,	// (0x0001faa4) signal_pane_g2_ParamLimits

0x879d,	// (0x0001faa4) signal_pane_g2

0x0001,

0xf74c,	// (0x00026a53) signal_pane_g_ParamLimits

0xf74c,	// (0x00026a53) signal_pane_g

0xc4f4,	// (0x000237fb) context_pane_g1

0x8235,	// (0x0001f53c) title_pane_g1

0x826a,	// (0x0001f571) title_pane_t1

0xb922,	// (0x00022c29) title_pane_t2

0xb948,	// (0x00022c4f) title_pane_t3

0x0002,

0xf59b,	// (0x000268a2) title_pane_t

0x9493,	// (0x0002079a) aid_levels_battery_ParamLimits

0x9493,	// (0x0002079a) aid_levels_battery

0x94af,	// (0x000207b6) battery_pane_g1_ParamLimits

0x94af,	// (0x000207b6) battery_pane_g1

0x94cc,	// (0x000207d3) battery_pane_g2_ParamLimits

0x94cc,	// (0x000207d3) battery_pane_g2

0x0001,

0xf7eb,	// (0x00026af2) battery_pane_g_ParamLimits

0xf7eb,	// (0x00026af2) battery_pane_g

0x988e,	// (0x00020b95) uni_indicator_pane_g1

0x98a3,	// (0x00020baa) uni_indicator_pane_g2

0x98b8,	// (0x00020bbf) uni_indicator_pane_g3

0x0005,

0xf955,	// (0x00026c5c) uni_indicator_pane_g

0xc800,	// (0x00023b07) navi_icon_pane_ParamLimits

0xc800,	// (0x00023b07) navi_icon_pane

0xc749,	// (0x00023a50) navi_midp_pane

0xc81c,	// (0x00023b23) navi_navi_pane

0xc826,	// (0x00023b2d) navi_text_pane_ParamLimits

0xc826,	// (0x00023b2d) navi_text_pane

0xb902,	// (0x00022c09) status_small_wait_pane_g1

0xbc2f,	// (0x00022f36) status_small_wait_pane_g2

0x0001,

0xf950,	// (0x00026c57) status_small_wait_pane_g

0xdbed,	// (0x00024ef4) navi_navi_icon_text_pane

0xdbf5,	// (0x00024efc) navi_navi_pane_g1_ParamLimits

0xdbf5,	// (0x00024efc) navi_navi_pane_g1

0xdc07,	// (0x00024f0e) navi_navi_pane_g2_ParamLimits

0xdc07,	// (0x00024f0e) navi_navi_pane_g2

0x0001,

0xf91e,	// (0x00026c25) navi_navi_pane_g_ParamLimits

0xf91e,	// (0x00026c25) navi_navi_pane_g

0xdc19,	// (0x00024f20) navi_navi_tabs_pane

0xdc22,	// (0x00024f29) navi_navi_text_pane

0xdbed,	// (0x00024ef4) navi_navi_volume_pane

0x984f,	// (0x00020b56) navi_text_pane_t1

0x9843,	// (0x00020b4a) navi_icon_pane_g1

0xdb2e,	// (0x00024e35) navi_navi_text_pane_t1

0x9832,	// (0x00020b39) navi_navi_volume_pane_g1

0x983a,	// (0x00020b41) volume_small_pane

0x978e,	// (0x00020a95) navi_navi_icon_text_pane_g1

0x9796,	// (0x00020a9d) navi_navi_icon_text_pane_t1

0xc81c,	// (0x00023b23) navi_tabs_2_long_pane

0xc81c,	// (0x00023b23) navi_tabs_2_pane

0xc81c,	// (0x00023b23) navi_tabs_3_long_pane

0xc81c,	// (0x00023b23) navi_tabs_3_pane

0xc81c,	// (0x00023b23) navi_tabs_4_pane

0x976e,	// (0x00020a75) tabs_2_active_pane_ParamLimits

0x976e,	// (0x00020a75) tabs_2_active_pane

0x977e,	// (0x00020a85) tabs_2_passive_pane_ParamLimits

0x977e,	// (0x00020a85) tabs_2_passive_pane

0x973c,	// (0x00020a43) tabs_3_active_pane_ParamLimits

0x973c,	// (0x00020a43) tabs_3_active_pane

0x974c,	// (0x00020a53) tabs_3_passive_pane_ParamLimits

0x974c,	// (0x00020a53) tabs_3_passive_pane

0x975d,	// (0x00020a64) tabs_3_passive_pane_cp_ParamLimits

0x975d,	// (0x00020a64) tabs_3_passive_pane_cp

0x96f8,	// (0x000209ff) tabs_4_active_pane_ParamLimits

0x96f8,	// (0x000209ff) tabs_4_active_pane

0x9709,	// (0x00020a10) tabs_4_passive_pane_ParamLimits

0x9709,	// (0x00020a10) tabs_4_passive_pane

0x971a,	// (0x00020a21) tabs_4_passive_pane_cp_ParamLimits

0x971a,	// (0x00020a21) tabs_4_passive_pane_cp

0x972b,	// (0x00020a32) tabs_4_passive_pane_cp2_ParamLimits

0x972b,	// (0x00020a32) tabs_4_passive_pane_cp2

0x96d8,	// (0x000209df) tabs_2_long_active_pane_ParamLimits

0x96d8,	// (0x000209df) tabs_2_long_active_pane

0x96e8,	// (0x000209ef) tabs_2_long_passive_pane_ParamLimits

0x96e8,	// (0x000209ef) tabs_2_long_passive_pane

0x96a5,	// (0x000209ac) tabs_3_long_active_pane_ParamLimits

0x96a5,	// (0x000209ac) tabs_3_long_active_pane

0x96b6,	// (0x000209bd) tabs_3_long_passive_pane_ParamLimits

0x96b6,	// (0x000209bd) tabs_3_long_passive_pane

0x96c7,	// (0x000209ce) tabs_3_long_passive_pane_cp_ParamLimits

0x96c7,	// (0x000209ce) tabs_3_long_passive_pane_cp

0x58ed,	// (0x0001cbf4) volume_small_pane_g1

0x9654,	// (0x0002095b) volume_small_pane_g2

0x965d,	// (0x00020964) volume_small_pane_g3

0x9666,	// (0x0002096d) volume_small_pane_g4

0x966f,	// (0x00020976) volume_small_pane_g5

0x9678,	// (0x0002097f) volume_small_pane_g6

0x9681,	// (0x00020988) volume_small_pane_g7

0x968a,	// (0x00020991) volume_small_pane_g8

0x9693,	// (0x0002099a) volume_small_pane_g9

0x969c,	// (0x000209a3) volume_small_pane_g10

0x0009,

0xf8ea,	// (0x00026bf1) volume_small_pane_g

0xb95a,	// (0x00022c61) bg_active_tab_pane_cp2_ParamLimits

0xb95a,	// (0x00022c61) bg_active_tab_pane_cp2

0x82f6,	// (0x0001f5fd) tabs_3_active_pane_g1

0x82fe,	// (0x0001f605) tabs_3_active_pane_t1

0xb95a,	// (0x00022c61) bg_passive_tab_pane_cp2_ParamLimits

0xb95a,	// (0x00022c61) bg_passive_tab_pane_cp2

0x82f6,	// (0x0001f5fd) tabs_3_passive_pane_g1

0x82fe,	// (0x0001f605) tabs_3_passive_pane_t1

0xb95a,	// (0x00022c61) bg_active_tab_pane_cp3_ParamLimits

0xb95a,	// (0x00022c61) bg_active_tab_pane_cp3

0x8310,	// (0x0001f617) tabs_4_active_pane_g1

0x8318,	// (0x0001f61f) tabs_4_active_pane_t1

0xb95a,	// (0x00022c61) bg_passive_tab_pane_cp3_ParamLimits

0xb95a,	// (0x00022c61) bg_passive_tab_pane_cp3

0x8310,	// (0x0001f617) tabs_4_1_passive_pane_g1

0x8318,	// (0x0001f61f) tabs_4_1_passive_pane_t1

0xc0c1,	// (0x000233c8) list_highlight_pane_cp2

0x9941,	// (0x00020c48) list_set_pane_ParamLimits

0x9941,	// (0x00020c48) list_set_pane

0x99db,	// (0x00020ce2) main_pane_set_t1_ParamLimits

0x99db,	// (0x00020ce2) main_pane_set_t1

0x99fb,	// (0x00020d02) main_pane_set_t2_ParamLimits

0x99fb,	// (0x00020d02) main_pane_set_t2

0x9a0f,	// (0x00020d16) main_pane_set_t3_ParamLimits

0x9a0f,	// (0x00020d16) main_pane_set_t3

0x9a21,	// (0x00020d28) main_pane_set_t4_ParamLimits

0x9a21,	// (0x00020d28) main_pane_set_t4

0x0003,

0xf9ba,	// (0x00026cc1) main_pane_set_t_ParamLimits

0xf9ba,	// (0x00026cc1) main_pane_set_t

0x9a33,	// (0x00020d3a) setting_code_pane

0x9a3d,	// (0x00020d44) setting_slider_graphic_pane

0x9a3d,	// (0x00020d44) setting_slider_pane

0x9a3d,	// (0x00020d44) setting_text_pane

0x9a3d,	// (0x00020d44) setting_volume_pane

0x5152,	// (0x0001c459) volume_set_pane

0xb968,	// (0x00022c6f) bg_set_opt_pane_cp

0x515a,	// (0x0001c461) setting_slider_pane_t1

0x5173,	// (0x0001c47a) setting_slider_pane_t2

0x518d,	// (0x0001c494) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x000268a9) setting_slider_pane_t

0x51a5,	// (0x0001c4ac) slider_set_pane

0xb90c,	// (0x00022c13) bg_set_opt_pane_cp2

0xb976,	// (0x00022c7d) setting_slider_graphic_pane_g1

0x51bb,	// (0x0001c4c2) setting_slider_graphic_pane_t1

0x51cb,	// (0x0001c4d2) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x000268b0) setting_slider_graphic_pane_t

0x51db,	// (0x0001c4e2) slider_set_pane_cp

0xb90c,	// (0x00022c13) input_focus_pane_cp1

0xe098,	// (0x0002539f) list_set_text_pane

0xb902,	// (0x00022c09) setting_text_pane_g1

0xb90c,	// (0x00022c13) input_focus_pane_cp2

0xb902,	// (0x00022c09) setting_code_pane_g1

0xb97f,	// (0x00022c86) setting_code_pane_t1

0x3d5d,	// (0x0001b064) set_text_pane_t1_ParamLimits

0x3d5d,	// (0x0001b064) set_text_pane_t1

0xbfd0,	// (0x000232d7) set_opt_bg_pane_g1

0xbfd8,	// (0x000232df) set_opt_bg_pane_g2

0xe072,	// (0x00025379) set_opt_bg_pane_g3

0xbfe8,	// (0x000232ef) set_opt_bg_pane_g4

0xbff0,	// (0x000232f7) set_opt_bg_pane_g5

0xbff8,	// (0x000232ff) set_opt_bg_pane_g6

0xe07c,	// (0x00025383) set_opt_bg_pane_g7

0xe084,	// (0x0002538b) set_opt_bg_pane_g8

0xe08e,	// (0x00025395) set_opt_bg_pane_g9

0x0008,

0xf9a7,	// (0x00026cae) set_opt_bg_pane_g

0xe065,	// (0x0002536c) slider_set_pane_g1

0x5ab5,	// (0x0001cdbc) slider_set_pane_g2

0x0006,

0xf998,	// (0x00026c9f) slider_set_pane_g

0x5a51,	// (0x0001cd58) volume_set_pane_g1

0x5a59,	// (0x0001cd60) volume_set_pane_g2

0x5a61,	// (0x0001cd68) volume_set_pane_g3

0x5a69,	// (0x0001cd70) volume_set_pane_g4

0x5a71,	// (0x0001cd78) volume_set_pane_g5

0x5a79,	// (0x0001cd80) volume_set_pane_g6

0x5a81,	// (0x0001cd88) volume_set_pane_g7

0x5a89,	// (0x0001cd90) volume_set_pane_g8

0x5a91,	// (0x0001cd98) volume_set_pane_g9

0x5a99,	// (0x0001cda0) volume_set_pane_g10

0x0009,

0xf970,	// (0x00026c77) volume_set_pane_g

0x832a,	// (0x0001f631) indicator_pane_ParamLimits

0x832a,	// (0x0001f631) indicator_pane

0x8352,	// (0x0001f659) main_idle_pane_g2_ParamLimits

0x8352,	// (0x0001f659) main_idle_pane_g2

0x838a,	// (0x0001f691) main_pane_idle_g1_ParamLimits

0x838a,	// (0x0001f691) main_pane_idle_g1

0xb98d,	// (0x00022c94) popup_clock_digital_analogue_window_ParamLimits

0xb98d,	// (0x00022c94) popup_clock_digital_analogue_window

0x83b1,	// (0x0001f6b8) soft_indicator_pane_ParamLimits

0x83b1,	// (0x0001f6b8) soft_indicator_pane

0x83cb,	// (0x0001f6d2) wallpaper_pane_ParamLimits

0x83cb,	// (0x0001f6d2) wallpaper_pane

0xb902,	// (0x00022c09) wallpaper_pane_g1

0x83dd,	// (0x0001f6e4) indicator_pane_g1_ParamLimits

0x83dd,	// (0x0001f6e4) indicator_pane_g1

0xe1da,	// (0x000254e1) navi_navi_icon_text_pane_srt_g1

0xb9bb,	// (0x00022cc2) soft_indicator_pane_t1

0xb9d5,	// (0x00022cdc) aid_ps_area_pane

0x83f3,	// (0x0001f6fa) aid_ps_clock_pane

0xb9e6,	// (0x00022ced) aid_ps_indicator_pane

0xb9f2,	// (0x00022cf9) indicator_ps_pane_ParamLimits

0xb9f2,	// (0x00022cf9) indicator_ps_pane

0xba01,	// (0x00022d08) power_save_pane_g1_ParamLimits

0xba01,	// (0x00022d08) power_save_pane_g1

0xba0d,	// (0x00022d14) power_save_pane_g2_ParamLimits

0xba0d,	// (0x00022d14) power_save_pane_g2

0x4d6d,	// (0x0001c074) aid_navinavi_width_pane

0xb9d5,	// (0x00022cdc) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x000268b5) power_save_pane_g_ParamLimits

0xf5ae,	// (0x000268b5) power_save_pane_g

0xba1b,	// (0x00022d22) power_save_pane_t1_ParamLimits

0xba1b,	// (0x00022d22) power_save_pane_t1

0x83f3,	// (0x0001f6fa) aid_ps_clock_pane_ParamLimits

0xb9e6,	// (0x00022ced) aid_ps_indicator_pane_ParamLimits

0xba2d,	// (0x00022d34) power_save_pane_t4_ParamLimits

0xba2d,	// (0x00022d34) power_save_pane_t4

0x0001,

0xf5b3,	// (0x000268ba) power_save_pane_t_ParamLimits

0xf5b3,	// (0x000268ba) power_save_pane_t

0xba57,	// (0x00022d5e) power_save_t3_ParamLimits

0xba57,	// (0x00022d5e) power_save_t3

0xba42,	// (0x00022d49) power_save_t2_ParamLimits

0xba42,	// (0x00022d49) power_save_t2

0xba6c,	// (0x00022d73) indicator_ps_pane_g1

0x8401,	// (0x0001f708) ai_gene_pane_ParamLimits

0x8401,	// (0x0001f708) ai_gene_pane

0x8418,	// (0x0001f71f) ai_links_pane_ParamLimits

0x8418,	// (0x0001f71f) ai_links_pane

0x8430,	// (0x0001f737) indicator_pane_cp1_ParamLimits

0x8430,	// (0x0001f737) indicator_pane_cp1

0x843f,	// (0x0001f746) main_pane_idle_g1_cp_ParamLimits

0x843f,	// (0x0001f746) main_pane_idle_g1_cp

0xba75,	// (0x00022d7c) popup_ai_links_title_window

0x8457,	// (0x0001f75e) soft_indicator_pane_cp1_ParamLimits

0x8457,	// (0x0001f75e) soft_indicator_pane_cp1

0xdeb9,	// (0x000251c0) ai_links_pane_g1

0xdec2,	// (0x000251c9) grid_ai_links_pane

0x9885,	// (0x00020b8c) ai_gene_pane_1

0xdea7,	// (0x000251ae) ai_gene_pane_2

0xdeb0,	// (0x000251b7) list_highlight_pane_cp4

0x9861,	// (0x00020b68) cell_ai_link_pane_ParamLimits

0x9861,	// (0x00020b68) cell_ai_link_pane

0xde9f,	// (0x000251a6) cell_ai_link_pane_g1

0xbc2f,	// (0x00022f36) cell_ai_link_pane_g2

0x0001,

0xf94b,	// (0x00026c52) cell_ai_link_pane_g

0xb90c,	// (0x00022c13) grid_highlight_cp2

0xb90c,	// (0x00022c13) bg_popup_sub_pane_cp1

0xba8c,	// (0x00022d93) popup_ai_links_title_window_t1

0xdded,	// (0x000250f4) ai_gene_pane_1_g1_ParamLimits

0xdded,	// (0x000250f4) ai_gene_pane_1_g1

0xddf9,	// (0x00025100) ai_gene_pane_1_g2_ParamLimits

0xddf9,	// (0x00025100) ai_gene_pane_1_g2

0x0001,

0xf941,	// (0x00026c48) ai_gene_pane_1_g_ParamLimits

0xf941,	// (0x00026c48) ai_gene_pane_1_g

0xde06,	// (0x0002510d) ai_gene_pane_1_t1_ParamLimits

0xde06,	// (0x0002510d) ai_gene_pane_1_t1

0xde3a,	// (0x00025141) grid_ai_soft_ind_pane

0xddd8,	// (0x000250df) ai_gene_pane_2_t1_ParamLimits

0xddd8,	// (0x000250df) ai_gene_pane_2_t1

0x846b,	// (0x0001f772) main_pane_empty_t1_ParamLimits

0x846b,	// (0x0001f772) main_pane_empty_t1

0x8483,	// (0x0001f78a) main_pane_empty_t2_ParamLimits

0x8483,	// (0x0001f78a) main_pane_empty_t2

0x8498,	// (0x0001f79f) main_pane_empty_t3_ParamLimits

0x8498,	// (0x0001f79f) main_pane_empty_t3

0x84aa,	// (0x0001f7b1) main_pane_empty_t4_ParamLimits

0x84aa,	// (0x0001f7b1) main_pane_empty_t4

0x84bc,	// (0x0001f7c3) main_pane_empty_t5_ParamLimits

0x84bc,	// (0x0001f7c3) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x000268bf) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x000268bf) main_pane_empty_t

0xc021,	// (0x00023328) bg_popup_window_pane_ParamLimits

0xc021,	// (0x00023328) bg_popup_window_pane

0xdb3c,	// (0x00024e43) find_popup_pane_cp2_ParamLimits

0xdb3c,	// (0x00024e43) find_popup_pane_cp2

0xdb48,	// (0x00024e4f) heading_pane_ParamLimits

0xdb48,	// (0x00024e4f) heading_pane

0xb90c,	// (0x00022c13) bg_popup_sub_pane

0x97b3,	// (0x00020aba) bg_popup_window_pane_g1_ParamLimits

0x97b3,	// (0x00020aba) bg_popup_window_pane_g1

0x97c2,	// (0x00020ac9) bg_popup_window_pane_g2_ParamLimits

0x97c2,	// (0x00020ac9) bg_popup_window_pane_g2

0x97ce,	// (0x00020ad5) bg_popup_window_pane_g3_ParamLimits

0x97ce,	// (0x00020ad5) bg_popup_window_pane_g3

0x97da,	// (0x00020ae1) bg_popup_window_pane_g4_ParamLimits

0x97da,	// (0x00020ae1) bg_popup_window_pane_g4

0x97e9,	// (0x00020af0) bg_popup_window_pane_g5_ParamLimits

0x97e9,	// (0x00020af0) bg_popup_window_pane_g5

0x97f9,	// (0x00020b00) bg_popup_window_pane_g6_ParamLimits

0x97f9,	// (0x00020b00) bg_popup_window_pane_g6

0x9805,	// (0x00020b0c) bg_popup_window_pane_g7_ParamLimits

0x9805,	// (0x00020b0c) bg_popup_window_pane_g7

0x9814,	// (0x00020b1b) bg_popup_window_pane_g8_ParamLimits

0x9814,	// (0x00020b1b) bg_popup_window_pane_g8

0x9823,	// (0x00020b2a) bg_popup_window_pane_g9_ParamLimits

0x9823,	// (0x00020b2a) bg_popup_window_pane_g9

0xdb22,	// (0x00024e29) bg_popup_window_pane_g10_ParamLimits

0xdb22,	// (0x00024e29) bg_popup_window_pane_g10

0x0009,

0xf909,	// (0x00026c10) bg_popup_window_pane_g_ParamLimits

0xf909,	// (0x00026c10) bg_popup_window_pane_g

0xdad9,	// (0x00024de0) bg_popup_heading_pane_ParamLimits

0xdad9,	// (0x00024de0) bg_popup_heading_pane

0x5b3d,	// (0x0001ce44) tabs_4_passive_pane_cp_srt_ParamLimits

0x5b3d,	// (0x0001ce44) tabs_4_passive_pane_cp_srt

0x5b4f,	// (0x0001ce56) tabs_4_passive_pane_srt_ParamLimits

0xdaed,	// (0x00024df4) heading_pane_g2

0x5b4f,	// (0x0001ce56) tabs_4_passive_pane_srt

0xd008,	// (0x0002430f) bg_passive_tab_pane_cp3_srt_ParamLimits

0xd008,	// (0x0002430f) bg_passive_tab_pane_cp3_srt

0xdaf5,	// (0x00024dfc) heading_pane_t1_ParamLimits

0xdaf5,	// (0x00024dfc) heading_pane_t1

0xdb0c,	// (0x00024e13) heading_pane_t2_ParamLimits

0xdb0c,	// (0x00024e13) heading_pane_t2

0x0001,

0xf904,	// (0x00026c0b) heading_pane_t_ParamLimits

0xf904,	// (0x00026c0b) heading_pane_t

0xd624,	// (0x0002492b) bg_popup_heading_pane_g1

0xd6b5,	// (0x000249bc) bg_popup_heading_pane_g2

0xd6bf,	// (0x000249c6) bg_popup_heading_pane_g3

0xd6c9,	// (0x000249d0) bg_popup_heading_pane_g4

0xd6d3,	// (0x000249da) bg_popup_heading_pane_g5

0xd6dd,	// (0x000249e4) bg_popup_heading_pane_g6

0xd6e5,	// (0x000249ec) bg_popup_heading_pane_g7

0xd6ed,	// (0x000249f4) bg_popup_heading_pane_g8

0xd6f7,	// (0x000249fe) bg_popup_heading_pane_g9

0x0008,

0xf8c0,	// (0x00026bc7) bg_popup_heading_pane_g

0xcf18,	// (0x0002421f) bg_popup_sub_pane_g1

0xcf20,	// (0x00024227) bg_popup_sub_pane_g2

0xcf28,	// (0x0002422f) bg_popup_sub_pane_g3

0xcf30,	// (0x00024237) bg_popup_sub_pane_g4

0xcf38,	// (0x0002423f) bg_popup_sub_pane_g5

0xcf40,	// (0x00024247) bg_popup_sub_pane_g6

0xcf48,	// (0x0002424f) bg_popup_sub_pane_g7

0xcf50,	// (0x00024257) bg_popup_sub_pane_g8

0xcf58,	// (0x0002425f) bg_popup_sub_pane_g9

0x0008,

0xf89a,	// (0x00026ba1) bg_popup_sub_pane_g

0xb95a,	// (0x00022c61) bg_popup_window_pane_cp5_ParamLimits

0xb95a,	// (0x00022c61) bg_popup_window_pane_cp5

0xbaa9,	// (0x00022db0) popup_note_window_g1_ParamLimits

0xbaa9,	// (0x00022db0) popup_note_window_g1

0xbab5,	// (0x00022dbc) popup_note_window_t1_ParamLimits

0xbab5,	// (0x00022dbc) popup_note_window_t1

0xbacb,	// (0x00022dd2) popup_note_window_t2_ParamLimits

0xbacb,	// (0x00022dd2) popup_note_window_t2

0xbae1,	// (0x00022de8) popup_note_window_t3_ParamLimits

0xbae1,	// (0x00022de8) popup_note_window_t3

0xbaf7,	// (0x00022dfe) popup_note_window_t4_ParamLimits

0xbaf7,	// (0x00022dfe) popup_note_window_t4

0xbb1f,	// (0x00022e26) popup_note_window_t5_ParamLimits

0xbb1f,	// (0x00022e26) popup_note_window_t5

0x0004,

0xf5c3,	// (0x000268ca) popup_note_window_t_ParamLimits

0xf5c3,	// (0x000268ca) popup_note_window_t

0xbb43,	// (0x00022e4a) bg_popup_window_pane_cp6_ParamLimits

0xbb43,	// (0x00022e4a) bg_popup_window_pane_cp6

0xd5a0,	// (0x000248a7) popup_note_image_window_g1_ParamLimits

0xd5a0,	// (0x000248a7) popup_note_image_window_g1

0xd5ac,	// (0x000248b3) popup_note_image_window_g2_ParamLimits

0xd5ac,	// (0x000248b3) popup_note_image_window_g2

0x0001,

0xf88e,	// (0x00026b95) popup_note_image_window_g_ParamLimits

0xf88e,	// (0x00026b95) popup_note_image_window_g

0xd5c5,	// (0x000248cc) popup_note_image_window_t1_ParamLimits

0xd5c5,	// (0x000248cc) popup_note_image_window_t1

0xd5de,	// (0x000248e5) popup_note_image_window_t2_ParamLimits

0xd5de,	// (0x000248e5) popup_note_image_window_t2

0xd5f7,	// (0x000248fe) popup_note_image_window_t3_ParamLimits

0xd5f7,	// (0x000248fe) popup_note_image_window_t3

0x0002,

0xf893,	// (0x00026b9a) popup_note_image_window_t_ParamLimits

0xf893,	// (0x00026b9a) popup_note_image_window_t

0xd47d,	// (0x00024784) bg_popup_window_pane_cp7_ParamLimits

0xd47d,	// (0x00024784) bg_popup_window_pane_cp7

0xd4ad,	// (0x000247b4) popup_note_wait_window_g1_ParamLimits

0xd4ad,	// (0x000247b4) popup_note_wait_window_g1

0xd4b9,	// (0x000247c0) popup_note_wait_window_g2_ParamLimits

0xd4b9,	// (0x000247c0) popup_note_wait_window_g2

0x0002,

0xf87c,	// (0x00026b83) popup_note_wait_window_g_ParamLimits

0xf87c,	// (0x00026b83) popup_note_wait_window_g

0xd4d1,	// (0x000247d8) popup_note_wait_window_t1_ParamLimits

0xd4d1,	// (0x000247d8) popup_note_wait_window_t1

0xd4f8,	// (0x000247ff) popup_note_wait_window_t2_ParamLimits

0xd4f8,	// (0x000247ff) popup_note_wait_window_t2

0xd515,	// (0x0002481c) popup_note_wait_window_t3_ParamLimits

0xd515,	// (0x0002481c) popup_note_wait_window_t3

0xd528,	// (0x0002482f) popup_note_wait_window_t4_ParamLimits

0xd528,	// (0x0002482f) popup_note_wait_window_t4

0x0004,

0xf883,	// (0x00026b8a) popup_note_wait_window_t_ParamLimits

0xf883,	// (0x00026b8a) popup_note_wait_window_t

0xd54d,	// (0x00024854) wait_bar_pane_ParamLimits

0xd54d,	// (0x00024854) wait_bar_pane

0xb90c,	// (0x00022c13) wait_anim_pane

0xb90c,	// (0x00022c13) wait_border_pane

0xb902,	// (0x00022c09) wait_anim_pane_g1

0xb902,	// (0x00022c09) wait_anim_pane_g2

0x0001,

0xf747,	// (0x00026a4e) wait_anim_pane_g

0xd421,	// (0x00024728) wait_border_pane_g1

0xd42c,	// (0x00024733) wait_border_pane_g2

0xd435,	// (0x0002473c) wait_border_pane_g3

0x0002,

0xf875,	// (0x00026b7c) wait_border_pane_g

0xd37e,	// (0x00024685) bg_popup_window_pane_cp16_ParamLimits

0xd37e,	// (0x00024685) bg_popup_window_pane_cp16

0xd38c,	// (0x00024693) indicator_popup_pane_cp4_ParamLimits

0xd38c,	// (0x00024693) indicator_popup_pane_cp4

0xd3a0,	// (0x000246a7) popup_query_data_window_t1_ParamLimits

0xd3a0,	// (0x000246a7) popup_query_data_window_t1

0xd3b2,	// (0x000246b9) popup_query_data_window_t2_ParamLimits

0xd3b2,	// (0x000246b9) popup_query_data_window_t2

0xd3cb,	// (0x000246d2) popup_query_data_window_t3_ParamLimits

0xd3cb,	// (0x000246d2) popup_query_data_window_t3

0x0002,

0xf86e,	// (0x00026b75) popup_query_data_window_t_ParamLimits

0xf86e,	// (0x00026b75) popup_query_data_window_t

0xd3e5,	// (0x000246ec) query_popup_data_pane_ParamLimits

0xd3e5,	// (0x000246ec) query_popup_data_pane

0xd3f9,	// (0x00024700) query_popup_data_pane_cp1_ParamLimits

0xd3f9,	// (0x00024700) query_popup_data_pane_cp1

0xbb43,	// (0x00022e4a) bg_popup_window_pane_cp10_ParamLimits

0xbb43,	// (0x00022e4a) bg_popup_window_pane_cp10

0xd2e1,	// (0x000245e8) indicator_popup_pane_ParamLimits

0xd2e1,	// (0x000245e8) indicator_popup_pane

0xbb9a,	// (0x00022ea1) popup_query_code_window_t1_ParamLimits

0xbb9a,	// (0x00022ea1) popup_query_code_window_t1

0xd2f9,	// (0x00024600) popup_query_code_window_t2_ParamLimits

0xd2f9,	// (0x00024600) popup_query_code_window_t2

0xd337,	// (0x0002463e) popup_query_code_window_t3_ParamLimits

0xd337,	// (0x0002463e) popup_query_code_window_t3

0x0002,

0xf867,	// (0x00026b6e) popup_query_code_window_t_ParamLimits

0xf867,	// (0x00026b6e) popup_query_code_window_t

0xd366,	// (0x0002466d) query_popup_pane_ParamLimits

0xd366,	// (0x0002466d) query_popup_pane

0xbb43,	// (0x00022e4a) bg_popup_window_pane_cp15_ParamLimits

0xbb43,	// (0x00022e4a) bg_popup_window_pane_cp15

0xbb61,	// (0x00022e68) indicator_popup_pane_cp1_ParamLimits

0xbb61,	// (0x00022e68) indicator_popup_pane_cp1

0xbb74,	// (0x00022e7b) indicator_popup_pane_cp2_ParamLimits

0xbb74,	// (0x00022e7b) indicator_popup_pane_cp2

0xbb87,	// (0x00022e8e) popup_query_data_code_window_g1_ParamLimits

0xbb87,	// (0x00022e8e) popup_query_data_code_window_g1

0xbb9a,	// (0x00022ea1) popup_query_data_code_window_t1_ParamLimits

0xbb9a,	// (0x00022ea1) popup_query_data_code_window_t1

0xbbac,	// (0x00022eb3) popup_query_data_code_window_t2_ParamLimits

0xbbac,	// (0x00022eb3) popup_query_data_code_window_t2

0xbbbe,	// (0x00022ec5) popup_query_data_code_window_t3_ParamLimits

0xbbbe,	// (0x00022ec5) popup_query_data_code_window_t3

0xbbd4,	// (0x00022edb) popup_query_data_code_window_t4_ParamLimits

0xbbd4,	// (0x00022edb) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x000268d5) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x000268d5) popup_query_data_code_window_t

0x5816,	// (0x0001cb1d) list_single_midp_graphic_pane_g3

0xbbec,	// (0x00022ef3) query_popup_data_pane_cp2_ParamLimits

0xbbff,	// (0x00022f06) query_popup_pane_cp2_ParamLimits

0xbbff,	// (0x00022f06) query_popup_pane_cp2

0xb90c,	// (0x00022c13) bg_popup_window_pane_cp11

0xd2b5,	// (0x000245bc) heading_pane_cp5

0xbc8d,	// (0x00022f94) listscroll_popup_info_pane

0xb90c,	// (0x00022c13) input_focus_pane_cp3

0xbc12,	// (0x00022f19) query_popup_pane_t1

0xbc20,	// (0x00022f27) list_popup_info_pane_ParamLimits

0xbc20,	// (0x00022f27) list_popup_info_pane

0xbc2f,	// (0x00022f36) listscroll_popup_info_pane_g1

0xbc37,	// (0x00022f3e) scroll_pane_cp7

0xbc41,	// (0x00022f48) popup_info_list_pane_t1_ParamLimits

0xbc41,	// (0x00022f48) popup_info_list_pane_t1

0xbc5b,	// (0x00022f62) popup_info_list_pane_t2_ParamLimits

0xbc5b,	// (0x00022f62) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x000268de) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x000268de) popup_info_list_pane_t

0xb90c,	// (0x00022c13) bg_popup_window_pane_cp12

0xe1f4,	// (0x000254fb) find_popup_pane

0xb968,	// (0x00022c6f) bg_popup_window_pane_cp3

0xbc75,	// (0x00022f7c) heading_pane_cp3

0xbc81,	// (0x00022f88) listscroll_popup_graphic_pane

0xb90c,	// (0x00022c13) bg_popup_window_pane_cp4

0x851e,	// (0x0001f825) heading_pane_cp4

0xbc8d,	// (0x00022f94) listscroll_popup_colour_pane

0x8526,	// (0x0001f82d) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8526,	// (0x0001f82d) cell_large_graphic_colour_none_popup_pane

0x853a,	// (0x0001f841) grid_large_graphic_colour_popup_pane_ParamLimits

0x853a,	// (0x0001f841) grid_large_graphic_colour_popup_pane

0x855e,	// (0x0001f865) listscroll_popup_colour_pane_g1_ParamLimits

0x855e,	// (0x0001f865) listscroll_popup_colour_pane_g1

0x8575,	// (0x0001f87c) listscroll_popup_colour_pane_g2_ParamLimits

0x8575,	// (0x0001f87c) listscroll_popup_colour_pane_g2

0x858c,	// (0x0001f893) listscroll_popup_colour_pane_g3_ParamLimits

0x858c,	// (0x0001f893) listscroll_popup_colour_pane_g3

0x859c,	// (0x0001f8a3) listscroll_popup_colour_pane_g4_ParamLimits

0x859c,	// (0x0001f8a3) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x000268e3) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x000268e3) listscroll_popup_colour_pane_g

0xbc95,	// (0x00022f9c) scroll_pane_cp6_ParamLimits

0xbc95,	// (0x00022f9c) scroll_pane_cp6

0x85ac,	// (0x0001f8b3) cell_large_graphic_colour_popup_pane_ParamLimits

0x85ac,	// (0x0001f8b3) cell_large_graphic_colour_popup_pane

0xbca7,	// (0x00022fae) cell_large_graphic_colour_none_popup_pane_t1

0xb90c,	// (0x00022c13) grid_highlight_pane_cp5

0xbcb6,	// (0x00022fbd) cell_large_graphic_colour_popup_pane_g1

0xbcbe,	// (0x00022fc5) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x000268ec) cell_large_graphic_colour_popup_pane_g

0xbcc6,	// (0x00022fcd) cell_large_graphic_colour_popup_pane_g2_copy1

0xbccf,	// (0x00022fd6) grid_highlight_pane_cp4

0xbcd7,	// (0x00022fde) bg_popup_window_pane_cp8_ParamLimits

0xbcd7,	// (0x00022fde) bg_popup_window_pane_cp8

0xbcf2,	// (0x00022ff9) popup_snote_single_text_window_g1_ParamLimits

0xbcf2,	// (0x00022ff9) popup_snote_single_text_window_g1

0xbd04,	// (0x0002300b) popup_snote_single_text_window_t1_ParamLimits

0xbd04,	// (0x0002300b) popup_snote_single_text_window_t1

0xbd17,	// (0x0002301e) popup_snote_single_text_window_t2_ParamLimits

0xbd17,	// (0x0002301e) popup_snote_single_text_window_t2

0xbd2a,	// (0x00023031) popup_snote_single_text_window_t3_ParamLimits

0xbd2a,	// (0x00023031) popup_snote_single_text_window_t3

0xbd63,	// (0x0002306a) popup_snote_single_text_window_t4_ParamLimits

0xbd63,	// (0x0002306a) popup_snote_single_text_window_t4

0xbd97,	// (0x0002309e) popup_snote_single_text_window_t5_ParamLimits

0xbd97,	// (0x0002309e) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x000268f1) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x000268f1) popup_snote_single_text_window_t

0xbdc6,	// (0x000230cd) bg_popup_window_pane_cp9_ParamLimits

0xbdc6,	// (0x000230cd) bg_popup_window_pane_cp9

0xbcf2,	// (0x00022ff9) popup_snote_single_graphic_window_g1_ParamLimits

0xbcf2,	// (0x00022ff9) popup_snote_single_graphic_window_g1

0xbdd4,	// (0x000230db) popup_snote_single_graphic_window_g2_ParamLimits

0xbdd4,	// (0x000230db) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x000268fc) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x000268fc) popup_snote_single_graphic_window_g

0xbde0,	// (0x000230e7) popup_snote_single_graphic_window_t1_ParamLimits

0xbde0,	// (0x000230e7) popup_snote_single_graphic_window_t1

0xbdf3,	// (0x000230fa) popup_snote_single_graphic_window_t2_ParamLimits

0xbdf3,	// (0x000230fa) popup_snote_single_graphic_window_t2

0xbe06,	// (0x0002310d) popup_snote_single_graphic_window_t3_ParamLimits

0xbe06,	// (0x0002310d) popup_snote_single_graphic_window_t3

0xbe3f,	// (0x00023146) popup_snote_single_graphic_window_t4_ParamLimits

0xbe3f,	// (0x00023146) popup_snote_single_graphic_window_t4

0xbe73,	// (0x0002317a) popup_snote_single_graphic_window_t5_ParamLimits

0xbe73,	// (0x0002317a) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x00026901) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x00026901) popup_snote_single_graphic_window_t

0xe17c,	// (0x00025483) grid_graphic_popup_pane_ParamLimits

0xe17c,	// (0x00025483) grid_graphic_popup_pane

0xe1a4,	// (0x000254ab) listscroll_popup_graphic_pane_g1_ParamLimits

0xe1a4,	// (0x000254ab) listscroll_popup_graphic_pane_g1

0x9b49,	// (0x00020e50) listscroll_popup_graphic_pane_g2_ParamLimits

0x9b49,	// (0x00020e50) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e4,	// (0x00026ceb) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e4,	// (0x00026ceb) listscroll_popup_graphic_pane_g

0xdc72,	// (0x00024f79) scroll_pane_cp5

0x9b0d,	// (0x00020e14) cell_graphic_popup_pane_ParamLimits

0x9b0d,	// (0x00020e14) cell_graphic_popup_pane

0xe147,	// (0x0002544e) cell_graphic_popup_pane_g1

0xe14f,	// (0x00025456) cell_graphic_popup_pane_g2

0xbcc6,	// (0x00022fcd) cell_graphic_popup_pane_g3

0x0002,

0xf9dd,	// (0x00026ce4) cell_graphic_popup_pane_g

0xe158,	// (0x0002545f) cell_graphic_popup_pane_t2

0xbccf,	// (0x00022fd6) grid_highlight_pane_cp3

0xbeb4,	// (0x000231bb) list_gen_pane_ParamLimits

0xbeb4,	// (0x000231bb) list_gen_pane

0xbedc,	// (0x000231e3) scroll_pane

0x9ac8,	// (0x00020dcf) bg_list_pane_g1_ParamLimits

0x9ac8,	// (0x00020dcf) bg_list_pane_g1

0xe0f6,	// (0x000253fd) bg_list_pane_g2_ParamLimits

0xe0f6,	// (0x000253fd) bg_list_pane_g2

0xe109,	// (0x00025410) bg_list_pane_g3_ParamLimits

0xe109,	// (0x00025410) bg_list_pane_g3

0xe11b,	// (0x00025422) bg_list_pane_g4_ParamLimits

0xe11b,	// (0x00025422) bg_list_pane_g4

0x9ae3,	// (0x00020dea) bg_list_pane_g5_ParamLimits

0x9ae3,	// (0x00020dea) bg_list_pane_g5

0x0004,

0xf9d2,	// (0x00026cd9) bg_list_pane_g_ParamLimits

0xf9d2,	// (0x00026cd9) bg_list_pane_g

0x9a7f,	// (0x00020d86) list_double2_graphic_large_graphic_pane_ParamLimits

0x9a7f,	// (0x00020d86) list_double2_graphic_large_graphic_pane

0x9a7f,	// (0x00020d86) list_double2_graphic_pane_ParamLimits

0x9a7f,	// (0x00020d86) list_double2_graphic_pane

0x9a7f,	// (0x00020d86) list_double2_large_graphic_pane_ParamLimits

0x9a7f,	// (0x00020d86) list_double2_large_graphic_pane

0x9a7f,	// (0x00020d86) list_double2_pane_ParamLimits

0x9a7f,	// (0x00020d86) list_double2_pane

0x9a7f,	// (0x00020d86) list_double_graphic_heading_pane_ParamLimits

0x9a7f,	// (0x00020d86) list_double_graphic_heading_pane

0x9a7f,	// (0x00020d86) list_double_graphic_pane_ParamLimits

0x9a7f,	// (0x00020d86) list_double_graphic_pane

0x9a7f,	// (0x00020d86) list_double_heading_pane_ParamLimits

0x9a7f,	// (0x00020d86) list_double_heading_pane

0x9a7f,	// (0x00020d86) list_double_large_graphic_pane_ParamLimits

0x9a7f,	// (0x00020d86) list_double_large_graphic_pane

0x9a7f,	// (0x00020d86) list_double_number_pane_ParamLimits

0x9a7f,	// (0x00020d86) list_double_number_pane

0x9a7f,	// (0x00020d86) list_double_pane_ParamLimits

0x9a7f,	// (0x00020d86) list_double_pane

0x9a7f,	// (0x00020d86) list_double_time_pane_ParamLimits

0x9a7f,	// (0x00020d86) list_double_time_pane

0x9a7f,	// (0x00020d86) list_setting_number_pane_ParamLimits

0x9a7f,	// (0x00020d86) list_setting_number_pane

0x9a7f,	// (0x00020d86) list_setting_pane_ParamLimits

0x9a7f,	// (0x00020d86) list_setting_pane

0x9a91,	// (0x00020d98) list_single_2graphic_pane_ParamLimits

0x9a91,	// (0x00020d98) list_single_2graphic_pane

0x9a91,	// (0x00020d98) list_single_graphic_heading_pane_ParamLimits

0x9a91,	// (0x00020d98) list_single_graphic_heading_pane

0x9a91,	// (0x00020d98) list_single_graphic_pane_ParamLimits

0x9a91,	// (0x00020d98) list_single_graphic_pane

0x9a91,	// (0x00020d98) list_single_heading_pane_ParamLimits

0x9a91,	// (0x00020d98) list_single_heading_pane

0x9a91,	// (0x00020d98) list_single_large_graphic_pane_ParamLimits

0x9a91,	// (0x00020d98) list_single_large_graphic_pane

0x9a91,	// (0x00020d98) list_single_number_heading_pane_ParamLimits

0x9a91,	// (0x00020d98) list_single_number_heading_pane

0x9a91,	// (0x00020d98) list_single_number_pane_ParamLimits

0x9a91,	// (0x00020d98) list_single_number_pane

0x9a91,	// (0x00020d98) list_single_pane_ParamLimits

0x9a91,	// (0x00020d98) list_single_pane

0xb90c,	// (0x00022c13) list_highlight_pane_cp1

0x4560,	// (0x0001b867) list_single_pane_g1_ParamLimits

0x4560,	// (0x0001b867) list_single_pane_g1

0x456c,	// (0x0001b873) list_single_pane_g2_ParamLimits

0x456c,	// (0x0001b873) list_single_pane_g2

0x0001,

0xf60c,	// (0x00026913) list_single_pane_g_ParamLimits

0xf60c,	// (0x00026913) list_single_pane_g

0x47d7,	// (0x0001bade) list_single_pane_t1_ParamLimits

0x47d7,	// (0x0001bade) list_single_pane_t1

0x4560,	// (0x0001b867) list_single_number_pane_g1_ParamLimits

0x4560,	// (0x0001b867) list_single_number_pane_g1

0x456c,	// (0x0001b873) list_single_number_pane_g2_ParamLimits

0x456c,	// (0x0001b873) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x00026913) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x00026913) list_single_number_pane_g

0x45d8,	// (0x0001b8df) list_single_number_pane_t1_ParamLimits

0x45d8,	// (0x0001b8df) list_single_number_pane_t1

0x7e5b,	// (0x0001f162) list_single_number_pane_t2_ParamLimits

0x7e5b,	// (0x0001f162) list_single_number_pane_t2

0x0001,

0xf993,	// (0x00026c9a) list_single_number_pane_t_ParamLimits

0xf993,	// (0x00026c9a) list_single_number_pane_t

0x4bb4,	// (0x0001bebb) list_single_graphic_pane_g1_ParamLimits

0x4bb4,	// (0x0001bebb) list_single_graphic_pane_g1

0x4560,	// (0x0001b867) list_single_graphic_pane_g2_ParamLimits

0x4560,	// (0x0001b867) list_single_graphic_pane_g2

0x456c,	// (0x0001b873) list_single_graphic_pane_g3_ParamLimits

0x456c,	// (0x0001b873) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0002690c) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0002690c) list_single_graphic_pane_g

0x7866,	// (0x0001eb6d) list_single_graphic_pane_t1_ParamLimits

0x7866,	// (0x0001eb6d) list_single_graphic_pane_t1

0x4560,	// (0x0001b867) list_single_heading_pane_g1_ParamLimits

0x4560,	// (0x0001b867) list_single_heading_pane_g1

0x456c,	// (0x0001b873) list_single_heading_pane_g2_ParamLimits

0x456c,	// (0x0001b873) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x00026913) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x00026913) list_single_heading_pane_g

0x47f9,	// (0x0001bb00) list_single_heading_pane_t1_ParamLimits

0x47f9,	// (0x0001bb00) list_single_heading_pane_t1

0x787c,	// (0x0001eb83) list_single_heading_pane_t2_ParamLimits

0x787c,	// (0x0001eb83) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x00026918) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x00026918) list_single_heading_pane_t

0x4560,	// (0x0001b867) list_single_number_heading_pane_g1_ParamLimits

0x4560,	// (0x0001b867) list_single_number_heading_pane_g1

0x456c,	// (0x0001b873) list_single_number_heading_pane_g2_ParamLimits

0x456c,	// (0x0001b873) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x00026913) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x00026913) list_single_number_heading_pane_g

0x47f9,	// (0x0001bb00) list_single_number_heading_pane_t1_ParamLimits

0x47f9,	// (0x0001bb00) list_single_number_heading_pane_t1

0x788e,	// (0x0001eb95) list_single_number_heading_pane_t2_ParamLimits

0x788e,	// (0x0001eb95) list_single_number_heading_pane_t2

0x47b1,	// (0x0001bab8) list_single_number_heading_pane_t3_ParamLimits

0x47b1,	// (0x0001bab8) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0002691d) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0002691d) list_single_number_heading_pane_t

0x4554,	// (0x0001b85b) list_single_graphic_heading_pane_g1_ParamLimits

0x4554,	// (0x0001b85b) list_single_graphic_heading_pane_g1

0x78a0,	// (0x0001eba7) list_single_graphic_heading_pane_g4_ParamLimits

0x78a0,	// (0x0001eba7) list_single_graphic_heading_pane_g4

0x456c,	// (0x0001b873) list_single_graphic_heading_pane_g5_ParamLimits

0x456c,	// (0x0001b873) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x00026924) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x00026924) list_single_graphic_heading_pane_g

0x47f9,	// (0x0001bb00) list_single_graphic_heading_pane_t1_ParamLimits

0x47f9,	// (0x0001bb00) list_single_graphic_heading_pane_t1

0x78b1,	// (0x0001ebb8) list_single_graphic_heading_pane_t2_ParamLimits

0x78b1,	// (0x0001ebb8) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0002692b) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0002692b) list_single_graphic_heading_pane_t

0x47ed,	// (0x0001baf4) list_single_large_graphic_pane_g1_ParamLimits

0x47ed,	// (0x0001baf4) list_single_large_graphic_pane_g1

0x4560,	// (0x0001b867) list_single_large_graphic_pane_g2_ParamLimits

0x4560,	// (0x0001b867) list_single_large_graphic_pane_g2

0x456c,	// (0x0001b873) list_single_large_graphic_pane_g3_ParamLimits

0x456c,	// (0x0001b873) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x00026930) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x00026930) list_single_large_graphic_pane_g

0xd42c,	// (0x00024733) wait_border_pane_g2_copy1

0x78c3,	// (0x0001ebca) list_single_large_graphic_pane_g4_cp2

0x47f9,	// (0x0001bb00) list_single_large_graphic_pane_t1_ParamLimits

0x47f9,	// (0x0001bb00) list_single_large_graphic_pane_t1

0x49e6,	// (0x0001bced) list_double_pane_g1_ParamLimits

0x49e6,	// (0x0001bced) list_double_pane_g1

0x78cb,	// (0x0001ebd2) list_double_pane_g2_ParamLimits

0x78cb,	// (0x0001ebd2) list_double_pane_g2

0x0001,

0xf630,	// (0x00026937) list_double_pane_g_ParamLimits

0xf630,	// (0x00026937) list_double_pane_g

0x78d7,	// (0x0001ebde) list_double_pane_t1_ParamLimits

0x78d7,	// (0x0001ebde) list_double_pane_t1

0x78ed,	// (0x0001ebf4) list_double_pane_t2_ParamLimits

0x78ed,	// (0x0001ebf4) list_double_pane_t2

0x0001,

0xf635,	// (0x0002693c) list_double_pane_t_ParamLimits

0xf635,	// (0x0002693c) list_double_pane_t

0x78ff,	// (0x0001ec06) list_double2_pane_g1_ParamLimits

0x78ff,	// (0x0001ec06) list_double2_pane_g1

0x40b5,	// (0x0001b3bc) list_double2_pane_g2_ParamLimits

0x40b5,	// (0x0001b3bc) list_double2_pane_g2

0x0001,

0xf63a,	// (0x00026941) list_double2_pane_g_ParamLimits

0xf63a,	// (0x00026941) list_double2_pane_g

0x7910,	// (0x0001ec17) list_double2_pane_t1_ParamLimits

0x7910,	// (0x0001ec17) list_double2_pane_t1

0x7926,	// (0x0001ec2d) list_double2_pane_t2_ParamLimits

0x7926,	// (0x0001ec2d) list_double2_pane_t2

0x0001,

0xf63f,	// (0x00026946) list_double2_pane_t_ParamLimits

0xf63f,	// (0x00026946) list_double2_pane_t

0x49e6,	// (0x0001bced) list_double_number_pane_g1_ParamLimits

0x49e6,	// (0x0001bced) list_double_number_pane_g1

0x78cb,	// (0x0001ebd2) list_double_number_pane_g2_ParamLimits

0x78cb,	// (0x0001ebd2) list_double_number_pane_g2

0x0001,

0xf630,	// (0x00026937) list_double_number_pane_g_ParamLimits

0xf630,	// (0x00026937) list_double_number_pane_g

0x7938,	// (0x0001ec3f) list_double_number_pane_t1_ParamLimits

0x7938,	// (0x0001ec3f) list_double_number_pane_t1

0x794a,	// (0x0001ec51) list_double_number_pane_t2_ParamLimits

0x794a,	// (0x0001ec51) list_double_number_pane_t2

0x7960,	// (0x0001ec67) list_double_number_pane_t3_ParamLimits

0x7960,	// (0x0001ec67) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0002694b) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0002694b) list_double_number_pane_t

0x7972,	// (0x0001ec79) list_double_graphic_pane_g1_ParamLimits

0x7972,	// (0x0001ec79) list_double_graphic_pane_g1

0x797e,	// (0x0001ec85) list_double_graphic_pane_g2_ParamLimits

0x797e,	// (0x0001ec85) list_double_graphic_pane_g2

0x798d,	// (0x0001ec94) list_double_graphic_pane_g3_ParamLimits

0x798d,	// (0x0001ec94) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x00026952) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x00026952) list_double_graphic_pane_g

0x79a5,	// (0x0001ecac) list_double_graphic_pane_t1_ParamLimits

0x79a5,	// (0x0001ecac) list_double_graphic_pane_t1

0x79bb,	// (0x0001ecc2) list_double_graphic_pane_t2_ParamLimits

0x79bb,	// (0x0001ecc2) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0002695b) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0002695b) list_double_graphic_pane_t

0x79cd,	// (0x0001ecd4) list_double2_graphic_pane_g1_ParamLimits

0x79cd,	// (0x0001ecd4) list_double2_graphic_pane_g1

0x79d9,	// (0x0001ece0) list_double2_graphic_pane_g2_ParamLimits

0x79d9,	// (0x0001ece0) list_double2_graphic_pane_g2

0x40b5,	// (0x0001b3bc) list_double2_graphic_pane_g3_ParamLimits

0x40b5,	// (0x0001b3bc) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x00026960) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x00026960) list_double2_graphic_pane_g

0x79e5,	// (0x0001ecec) list_double2_graphic_pane_t1_ParamLimits

0x79e5,	// (0x0001ecec) list_double2_graphic_pane_t1

0x79fb,	// (0x0001ed02) list_double2_graphic_pane_t2_ParamLimits

0x79fb,	// (0x0001ed02) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x00026967) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x00026967) list_double2_graphic_pane_t

0x7a0d,	// (0x0001ed14) list_double_large_graphic_pane_g1_ParamLimits

0x7a0d,	// (0x0001ed14) list_double_large_graphic_pane_g1

0x7a38,	// (0x0001ed3f) list_double_large_graphic_pane_g2_ParamLimits

0x7a38,	// (0x0001ed3f) list_double_large_graphic_pane_g2

0x78cb,	// (0x0001ebd2) list_double_large_graphic_pane_g3_ParamLimits

0x78cb,	// (0x0001ebd2) list_double_large_graphic_pane_g3

0x7a49,	// (0x0001ed50) list_double_large_graphic_pane_g4_ParamLimits

0x7a49,	// (0x0001ed50) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0002696c) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0002696c) list_double_large_graphic_pane_g

0x7a5b,	// (0x0001ed62) list_double_large_graphic_pane_t1_ParamLimits

0x7a5b,	// (0x0001ed62) list_double_large_graphic_pane_t1

0x7a74,	// (0x0001ed7b) list_double_large_graphic_pane_t2_ParamLimits

0x7a74,	// (0x0001ed7b) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x00026977) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x00026977) list_double_large_graphic_pane_t

0x7a86,	// (0x0001ed8d) list_double2_large_graphic_pane_g1_ParamLimits

0x7a86,	// (0x0001ed8d) list_double2_large_graphic_pane_g1

0x78ff,	// (0x0001ec06) list_double2_large_graphic_pane_g2_ParamLimits

0x78ff,	// (0x0001ec06) list_double2_large_graphic_pane_g2

0x40b5,	// (0x0001b3bc) list_double2_large_graphic_pane_g3_ParamLimits

0x40b5,	// (0x0001b3bc) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0002697c) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0002697c) list_double2_large_graphic_pane_g

0x7a92,	// (0x0001ed99) list_double2_large_graphic_pane_t1_ParamLimits

0x7a92,	// (0x0001ed99) list_double2_large_graphic_pane_t1

0x7aa8,	// (0x0001edaf) list_double2_large_graphic_pane_t2_ParamLimits

0x7aa8,	// (0x0001edaf) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x00026983) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x00026983) list_double2_large_graphic_pane_t

0x7aba,	// (0x0001edc1) list_double_heading_pane_g1_ParamLimits

0x7aba,	// (0x0001edc1) list_double_heading_pane_g1

0x3ec0,	// (0x0001b1c7) list_double_heading_pane_g2_ParamLimits

0x3ec0,	// (0x0001b1c7) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x00026988) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x00026988) list_double_heading_pane_g

0x7acb,	// (0x0001edd2) list_double_heading_pane_t1_ParamLimits

0x7acb,	// (0x0001edd2) list_double_heading_pane_t1

0x7926,	// (0x0001ec2d) list_double_heading_pane_t2_ParamLimits

0x7926,	// (0x0001ec2d) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0002698d) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0002698d) list_double_heading_pane_t

0x7972,	// (0x0001ec79) list_double_graphic_heading_pane_g1_ParamLimits

0x7972,	// (0x0001ec79) list_double_graphic_heading_pane_g1

0x7aba,	// (0x0001edc1) list_double_graphic_heading_pane_g2_ParamLimits

0x7aba,	// (0x0001edc1) list_double_graphic_heading_pane_g2

0x3ec0,	// (0x0001b1c7) list_double_graphic_heading_pane_g3_ParamLimits

0x3ec0,	// (0x0001b1c7) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x00026992) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x00026992) list_double_graphic_heading_pane_g

0x7ae1,	// (0x0001ede8) list_double_graphic_heading_pane_t1_ParamLimits

0x7ae1,	// (0x0001ede8) list_double_graphic_heading_pane_t1

0x79fb,	// (0x0001ed02) list_double_graphic_heading_pane_t2_ParamLimits

0x79fb,	// (0x0001ed02) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x00026999) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x00026999) list_double_graphic_heading_pane_t

0x7a38,	// (0x0001ed3f) list_double_time_pane_g1_ParamLimits

0x7a38,	// (0x0001ed3f) list_double_time_pane_g1

0x78cb,	// (0x0001ebd2) list_double_time_pane_g2_ParamLimits

0x78cb,	// (0x0001ebd2) list_double_time_pane_g2

0x0001,

0xf697,	// (0x0002699e) list_double_time_pane_g_ParamLimits

0xf697,	// (0x0002699e) list_double_time_pane_g

0x7af7,	// (0x0001edfe) list_double_time_pane_t1_ParamLimits

0x7af7,	// (0x0001edfe) list_double_time_pane_t1

0x7b0d,	// (0x0001ee14) list_double_time_pane_t2_ParamLimits

0x7b0d,	// (0x0001ee14) list_double_time_pane_t2

0x7b1f,	// (0x0001ee26) list_double_time_pane_t3_ParamLimits

0x7b1f,	// (0x0001ee26) list_double_time_pane_t3

0x7b31,	// (0x0001ee38) list_double_time_pane_t4_ParamLimits

0x7b31,	// (0x0001ee38) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x000269a3) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x000269a3) list_double_time_pane_t

0x7b43,	// (0x0001ee4a) list_setting_pane_g1_ParamLimits

0x7b43,	// (0x0001ee4a) list_setting_pane_g1

0x7b4f,	// (0x0001ee56) list_setting_pane_g2_ParamLimits

0x7b4f,	// (0x0001ee56) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x000269ac) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x000269ac) list_setting_pane_g

0x7b5b,	// (0x0001ee62) list_setting_pane_t1_ParamLimits

0x7b5b,	// (0x0001ee62) list_setting_pane_t1

0x7b75,	// (0x0001ee7c) list_setting_pane_t2_ParamLimits

0x7b75,	// (0x0001ee7c) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x000269b1) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x000269b1) list_setting_pane_t

0x7bb4,	// (0x0001eebb) set_value_pane_cp_ParamLimits

0x7bb4,	// (0x0001eebb) set_value_pane_cp

0x7bc0,	// (0x0001eec7) list_setting_number_pane_g1_ParamLimits

0x7bc0,	// (0x0001eec7) list_setting_number_pane_g1

0x7bcc,	// (0x0001eed3) list_setting_number_pane_g2_ParamLimits

0x7bcc,	// (0x0001eed3) list_setting_number_pane_g2

0x0001,

0xf6b1,	// (0x000269b8) list_setting_number_pane_g_ParamLimits

0xf6b1,	// (0x000269b8) list_setting_number_pane_g

0x7bd8,	// (0x0001eedf) list_setting_number_pane_t1_ParamLimits

0x7bd8,	// (0x0001eedf) list_setting_number_pane_t1

0x7bf1,	// (0x0001eef8) list_setting_number_pane_t2_ParamLimits

0x7bf1,	// (0x0001eef8) list_setting_number_pane_t2

0x7c0b,	// (0x0001ef12) list_setting_number_pane_t3_ParamLimits

0x7c0b,	// (0x0001ef12) list_setting_number_pane_t3

0x0003,

0xf6b6,	// (0x000269bd) list_setting_number_pane_t_ParamLimits

0xf6b6,	// (0x000269bd) list_setting_number_pane_t

0x7bb4,	// (0x0001eebb) set_value_pane_ParamLimits

0x7bb4,	// (0x0001eebb) set_value_pane

0xbf10,	// (0x00023217) bg_set_opt_pane_ParamLimits

0xbf10,	// (0x00023217) bg_set_opt_pane

0x423e,	// (0x0001b545) set_value_pane_t1

0xbf31,	// (0x00023238) slider_set_pane_cp3

0xbf3a,	// (0x00023241) volume_small_pane_cp

0xbf43,	// (0x0002324a) list_form_gen_pane

0xbf4c,	// (0x00023253) scroll_pane_cp8

0x7c4e,	// (0x0001ef55) form_field_data_pane_ParamLimits

0x7c4e,	// (0x0001ef55) form_field_data_pane

0x7c65,	// (0x0001ef6c) form_field_data_wide_pane_ParamLimits

0x7c65,	// (0x0001ef6c) form_field_data_wide_pane

0x7c85,	// (0x0001ef8c) form_field_popup_pane_ParamLimits

0x7c85,	// (0x0001ef8c) form_field_popup_pane

0x7c9d,	// (0x0001efa4) form_field_popup_wide_pane_ParamLimits

0x7c9d,	// (0x0001efa4) form_field_popup_wide_pane

0x42d2,	// (0x0001b5d9) form_field_slider_pane_ParamLimits

0x42d2,	// (0x0001b5d9) form_field_slider_pane

0x42e5,	// (0x0001b5ec) form_field_slider_wide_pane_ParamLimits

0x42e5,	// (0x0001b5ec) form_field_slider_wide_pane

0xbf5d,	// (0x00023264) data_form_pane

0x7cbe,	// (0x0001efc5) form_field_data_pane_t1

0xbf69,	// (0x00023270) input_focus_pane

0xbf77,	// (0x0002327e) data_form_wide_pane

0x4326,	// (0x0001b62d) form_field_data_wide_pane_t1

0xbce4,	// (0x00022feb) input_focus_pane_cp6

0x7cd8,	// (0x0001efdf) form_field_popup_pane_t1

0xbf69,	// (0x00023270) input_focus_pane_cp7

0xbfa3,	// (0x000232aa) list_form_pane

0x4368,	// (0x0001b66f) form_field_popup_wide_pane_t1

0xbf69,	// (0x00023270) input_focus_pane_cp8

0xbfaf,	// (0x000232b6) list_form_wide_pane

0x7cfa,	// (0x0001f001) form_field_slider_pane_t1_ParamLimits

0x7cfa,	// (0x0001f001) form_field_slider_pane_t1

0x7d12,	// (0x0001f019) form_field_slider_pane_t2_ParamLimits

0x7d12,	// (0x0001f019) form_field_slider_pane_t2

0x0001,

0xf6c6,	// (0x000269cd) form_field_slider_pane_t_ParamLimits

0xf6c6,	// (0x000269cd) form_field_slider_pane_t

0xb95a,	// (0x00022c61) input_focus_pane_cp9_ParamLimits

0xb95a,	// (0x00022c61) input_focus_pane_cp9

0x7d27,	// (0x0001f02e) slider_cont_pane_ParamLimits

0x7d27,	// (0x0001f02e) slider_cont_pane

0xbfbe,	// (0x000232c5) form_field_slider_wide_pane_t1_ParamLimits

0xbfbe,	// (0x000232c5) form_field_slider_wide_pane_t1

0x43c4,	// (0x0001b6cb) form_field_slider_wide_pane_t2_ParamLimits

0x43c4,	// (0x0001b6cb) form_field_slider_wide_pane_t2

0x0001,

0xf6cb,	// (0x000269d2) form_field_slider_wide_pane_t_ParamLimits

0xf6cb,	// (0x000269d2) form_field_slider_wide_pane_t

0xb95a,	// (0x00022c61) input_focus_pane_cp10_ParamLimits

0xb95a,	// (0x00022c61) input_focus_pane_cp10

0x7d3b,	// (0x0001f042) slider_cont_pane_cp1_ParamLimits

0x7d3b,	// (0x0001f042) slider_cont_pane_cp1

0x7d4f,	// (0x0001f056) slider_form_pane_cp

0xbfd0,	// (0x000232d7) input_focus_pane_g1

0xbfd8,	// (0x000232df) input_focus_pane_g2

0xbfe0,	// (0x000232e7) input_focus_pane_g3

0xbfe8,	// (0x000232ef) input_focus_pane_g4

0xbff0,	// (0x000232f7) input_focus_pane_g5

0xbff8,	// (0x000232ff) input_focus_pane_g6

0xc000,	// (0x00023307) input_focus_pane_g7

0xc008,	// (0x0002330f) input_focus_pane_g8

0xc010,	// (0x00023317) input_focus_pane_g9

0xb902,	// (0x00022c09) input_focus_pane_g10

0x0009,

0xf6d0,	// (0x000269d7) input_focus_pane_g

0xd435,	// (0x0002473c) wait_border_pane_g3_copy1

0x7d57,	// (0x0001f05e) data_form_pane_t1

0xb902,	// (0x00022c09) wait_anim_pane_g1_copy1

0x7e6d,	// (0x0001f174) data_form_wide_pane_t1

0x85d5,	// (0x0001f8dc) list_form_graphic_pane_cp_ParamLimits

0x85d5,	// (0x0001f8dc) list_form_graphic_pane_cp

0xe0a0,	// (0x000253a7) slider_form_pane_g1

0xe0a9,	// (0x000253b0) slider_form_pane_g2

0x0006,

0xf9c3,	// (0x00026cca) slider_form_pane_g

0x85d5,	// (0x0001f8dc) list_form_graphic_pane_ParamLimits

0x85d5,	// (0x0001f8dc) list_form_graphic_pane

0x4442,	// (0x0001b749) list_form_graphic_pane_g1

0x444a,	// (0x0001b751) list_form_graphic_pane_t1_ParamLimits

0x444a,	// (0x0001b751) list_form_graphic_pane_t1

0xb968,	// (0x00022c6f) list_highlight_pane_cp5_ParamLimits

0xb968,	// (0x00022c6f) list_highlight_pane_cp5

0x7d71,	// (0x0001f078) find_pane_g1

0xc018,	// (0x0002331f) input_find_pane

0x7d7a,	// (0x0001f081) input_find_pane_g1_ParamLimits

0x7d7a,	// (0x0001f081) input_find_pane_g1

0x7d86,	// (0x0001f08d) input_find_pane_t1_ParamLimits

0x7d86,	// (0x0001f08d) input_find_pane_t1

0x7d9b,	// (0x0001f0a2) input_find_pane_t2_ParamLimits

0x7d9b,	// (0x0001f0a2) input_find_pane_t2

0x0001,

0xf6e5,	// (0x000269ec) input_find_pane_t_ParamLimits

0xf6e5,	// (0x000269ec) input_find_pane_t

0xc021,	// (0x00023328) input_focus_pane_cp5_ParamLimits

0xc021,	// (0x00023328) input_focus_pane_cp5

0x85f3,	// (0x0001f8fa) bg_popup_window_pane_cp2_ParamLimits

0x85f3,	// (0x0001f8fa) bg_popup_window_pane_cp2

0x8600,	// (0x0001f907) listscroll_menu_pane_ParamLimits

0x8600,	// (0x0001f907) listscroll_menu_pane

0x860c,	// (0x0001f913) popup_submenu_window_ParamLimits

0x860c,	// (0x0001f913) popup_submenu_window

0xc02f,	// (0x00023336) find_popup_pane_g1

0xc037,	// (0x0002333e) input_popup_find_pane_cp

0xc021,	// (0x00023328) input_focus_pane_cp4_ParamLimits

0xc021,	// (0x00023328) input_focus_pane_cp4

0xc041,	// (0x00023348) input_popup_find_pane_t1_ParamLimits

0xc041,	// (0x00023348) input_popup_find_pane_t1

0xb90c,	// (0x00022c13) bg_popup_sub_pane_cp

0xc06f,	// (0x00023376) listscroll_popup_sub_pane

0xc077,	// (0x0002337e) list_submenu_pane_ParamLimits

0xc077,	// (0x0002337e) list_submenu_pane

0xc088,	// (0x0002338f) scroll_pane_cp4

0xc090,	// (0x00023397) list_single_popup_submenu_pane_ParamLimits

0xc090,	// (0x00023397) list_single_popup_submenu_pane

0xc0a4,	// (0x000233ab) list_single_popup_submenu_pane_g1

0xc0ac,	// (0x000233b3) list_single_popup_submenu_pane_t1_ParamLimits

0xc0ac,	// (0x000233b3) list_single_popup_submenu_pane_t1

0xb95a,	// (0x00022c61) bg_active_tab_pane_cp1_ParamLimits

0xb95a,	// (0x00022c61) bg_active_tab_pane_cp1

0x8644,	// (0x0001f94b) tabs_2_active_pane_g1

0x864c,	// (0x0001f953) tabs_2_active_pane_t1

0xb95a,	// (0x00022c61) bg_passive_tab_pane_cp1_ParamLimits

0xb95a,	// (0x00022c61) bg_passive_tab_pane_cp1

0x8644,	// (0x0001f94b) tabs_2_passive_pane_g1

0x864c,	// (0x0001f953) tabs_2_passive_pane_t1

0xb968,	// (0x00022c6f) bg_active_tab_pane_cp4

0x865e,	// (0x0001f965) tabs_2_long_active_pane_t1

0xc0c1,	// (0x000233c8) bg_passive_tab_pane_cp4

0xcd29,	// (0x00024030) list_single_midp_graphic_pane_g4_ParamLimits

0xb968,	// (0x00022c6f) bg_active_tab_pane_cp5

0x8671,	// (0x0001f978) tabs_3_long_active_pane_t1

0xc0c1,	// (0x000233c8) bg_passive_tab_pane_cp5

0xcd29,	// (0x00024030) list_single_midp_graphic_pane_g4

0xb968,	// (0x00022c6f) bg_popup_window_pane_cp13_ParamLimits

0xb968,	// (0x00022c6f) bg_popup_window_pane_cp13

0xc0d6,	// (0x000233dd) listscroll_popup_fast_pane_ParamLimits

0xc0d6,	// (0x000233dd) listscroll_popup_fast_pane

0xc0e5,	// (0x000233ec) grid_popup_fast_pane_ParamLimits

0xc0e5,	// (0x000233ec) grid_popup_fast_pane

0xc0f7,	// (0x000233fe) scroll_pane_cp9_ParamLimits

0xc0f7,	// (0x000233fe) scroll_pane_cp9

0xf330,	// (0x00026637) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xf330,	// (0x00026637) list_single_graphic_hl_pane_t1_cp2

0xc11b,	// (0x00023422) input_focus_pane_cp20_ParamLimits

0xc11b,	// (0x00023422) input_focus_pane_cp20

0xc129,	// (0x00023430) query_popup_data_pane_t1_ParamLimits

0xc129,	// (0x00023430) query_popup_data_pane_t1

0xc13c,	// (0x00023443) query_popup_data_pane_t2_ParamLimits

0xc13c,	// (0x00023443) query_popup_data_pane_t2

0xc182,	// (0x00023489) query_popup_data_pane_t3_ParamLimits

0xc182,	// (0x00023489) query_popup_data_pane_t3

0xc1c3,	// (0x000234ca) query_popup_data_pane_t4_ParamLimits

0xc1c3,	// (0x000234ca) query_popup_data_pane_t4

0xc1ff,	// (0x00023506) query_popup_data_pane_t5_ParamLimits

0xc1ff,	// (0x00023506) query_popup_data_pane_t5

0x0004,

0xf6ea,	// (0x000269f1) query_popup_data_pane_t_ParamLimits

0xf6ea,	// (0x000269f1) query_popup_data_pane_t

0xbfd0,	// (0x000232d7) bg_set_opt_pane_g1

0xbfd8,	// (0x000232df) bg_set_opt_pane_g2

0xbfe0,	// (0x000232e7) bg_set_opt_pane_g3

0xbfe8,	// (0x000232ef) bg_set_opt_pane_g4

0xbff0,	// (0x000232f7) bg_set_opt_pane_g5

0xbff8,	// (0x000232ff) bg_set_opt_pane_g6

0xc000,	// (0x00023307) bg_set_opt_pane_g7

0xc008,	// (0x0002330f) bg_set_opt_pane_g8

0xc010,	// (0x00023317) bg_set_opt_pane_g9

0x0008,

0xf6f5,	// (0x000269fc) bg_set_opt_pane_g

0x5482,	// (0x0001c789) control_top_pane_stacon_ParamLimits

0x5482,	// (0x0001c789) control_top_pane_stacon

0x54d5,	// (0x0001c7dc) signal_pane_stacon_ParamLimits

0x54d5,	// (0x0001c7dc) signal_pane_stacon

0xc674,	// (0x0002397b) stacon_top_pane_g1_ParamLimits

0xc674,	// (0x0002397b) stacon_top_pane_g1

0x54fa,	// (0x0001c801) title_pane_stacon_ParamLimits

0x54fa,	// (0x0001c801) title_pane_stacon

0x5524,	// (0x0001c82b) uni_indicator_pane_stacon_ParamLimits

0x5524,	// (0x0001c82b) uni_indicator_pane_stacon

0x5539,	// (0x0001c840) battery_pane_stacon_ParamLimits

0x5539,	// (0x0001c840) battery_pane_stacon

0x557d,	// (0x0001c884) control_bottom_pane_stacon_ParamLimits

0x557d,	// (0x0001c884) control_bottom_pane_stacon

0x55a0,	// (0x0001c8a7) navi_pane_stacon_ParamLimits

0x55a0,	// (0x0001c8a7) navi_pane_stacon

0xc696,	// (0x0002399d) stacon_bottom_pane_g1_ParamLimits

0xc696,	// (0x0002399d) stacon_bottom_pane_g1

0x51e3,	// (0x0001c4ea) aid_levels_signal_lsc_ParamLimits

0x51e3,	// (0x0001c4ea) aid_levels_signal_lsc

0x51fa,	// (0x0001c501) signal_pane_stacon_g1_ParamLimits

0x51fa,	// (0x0001c501) signal_pane_stacon_g1

0x520e,	// (0x0001c515) signal_pane_stacon_g2_ParamLimits

0x520e,	// (0x0001c515) signal_pane_stacon_g2

0x0001,

0xf708,	// (0x00026a0f) signal_pane_stacon_g_ParamLimits

0xf708,	// (0x00026a0f) signal_pane_stacon_g

0x5243,	// (0x0001c54a) title_pane_stacon_t1_ParamLimits

0x5243,	// (0x0001c54a) title_pane_stacon_t1

0xc243,	// (0x0002354a) uni_indicator_pane_stacon_g1

0xc24d,	// (0x00023554) uni_indicator_pane_stacon_g2

0xc257,	// (0x0002355e) uni_indicator_pane_stacon_g3

0xc261,	// (0x00023568) uni_indicator_pane_stacon_g4

0x0003,

0xf714,	// (0x00026a1b) uni_indicator_pane_stacon_g

0x5268,	// (0x0001c56f) control_top_pane_stacon_g1

0x5270,	// (0x0001c577) control_top_pane_stacon_t1_ParamLimits

0x5270,	// (0x0001c577) control_top_pane_stacon_t1

0x52a7,	// (0x0001c5ae) aid_levels_battery_lsc_ParamLimits

0x52a7,	// (0x0001c5ae) aid_levels_battery_lsc

0x52bf,	// (0x0001c5c6) battery_pane_stacon_g1_ParamLimits

0x52bf,	// (0x0001c5c6) battery_pane_stacon_g1

0x52d2,	// (0x0001c5d9) battery_pane_stacon_g2_ParamLimits

0x52d2,	// (0x0001c5d9) battery_pane_stacon_g2

0x0001,

0xf71d,	// (0x00026a24) battery_pane_stacon_g_ParamLimits

0xf71d,	// (0x00026a24) battery_pane_stacon_g

0x5310,	// (0x0001c617) navi_icon_pane_stacon

0x5324,	// (0x0001c62b) navi_navi_pane_stacon

0x5310,	// (0x0001c617) navi_text_pane_stacon

0x5268,	// (0x0001c56f) control_bottom_pane_stacon_g1

0x5338,	// (0x0001c63f) control_bottom_pane_stacon_t1_ParamLimits

0x5338,	// (0x0001c63f) control_bottom_pane_stacon_t1

0x8683,	// (0x0001f98a) grid_app_pane_ParamLimits

0x8683,	// (0x0001f98a) grid_app_pane

0x86bb,	// (0x0001f9c2) scroll_pane_cp15_ParamLimits

0x86bb,	// (0x0001f9c2) scroll_pane_cp15

0x86d8,	// (0x0001f9df) cell_app_pane_ParamLimits

0x86d8,	// (0x0001f9df) cell_app_pane

0x871d,	// (0x0001fa24) cell_app_pane_g1_ParamLimits

0x871d,	// (0x0001fa24) cell_app_pane_g1

0xc285,	// (0x0002358c) cell_app_pane_g2_ParamLimits

0xc285,	// (0x0002358c) cell_app_pane_g2

0x0001,

0xf722,	// (0x00026a29) cell_app_pane_g_ParamLimits

0xf722,	// (0x00026a29) cell_app_pane_g

0xc291,	// (0x00023598) cell_app_pane_t1_ParamLimits

0xc291,	// (0x00023598) cell_app_pane_t1

0xc2a3,	// (0x000235aa) grid_highlight_pane_ParamLimits

0xc2a3,	// (0x000235aa) grid_highlight_pane

0xbfd0,	// (0x000232d7) cell_highlight_pane_g1

0xbfd8,	// (0x000232df) cell_highlight_pane_g2

0xbfe0,	// (0x000232e7) cell_highlight_pane_g3

0xbfe8,	// (0x000232ef) cell_highlight_pane_g4

0xbff0,	// (0x000232f7) cell_highlight_pane_g5

0xbff8,	// (0x000232ff) cell_highlight_pane_g6

0xc000,	// (0x00023307) cell_highlight_pane_g7

0xc008,	// (0x0002330f) cell_highlight_pane_g8

0xc010,	// (0x00023317) cell_highlight_pane_g9

0xb902,	// (0x00022c09) cell_highlight_pane_g10

0x0009,

0xf6d0,	// (0x000269d7) cell_highlight_pane_g

0xc2b4,	// (0x000235bb) bg_scroll_pane

0x5382,	// (0x0001c689) scroll_handle_pane

0xc2fb,	// (0x00023602) scroll_bg_pane_g1

0xc310,	// (0x00023617) scroll_bg_pane_g2

0xc328,	// (0x0002362f) scroll_bg_pane_g3

0x0002,

0xf727,	// (0x00026a2e) scroll_bg_pane_g

0xc33d,	// (0x00023644) scroll_handle_focus_pane_ParamLimits

0xc33d,	// (0x00023644) scroll_handle_focus_pane

0xc2fb,	// (0x00023602) scroll_handle_pane_g1

0xc34a,	// (0x00023651) scroll_handle_pane_g2

0xc328,	// (0x0002362f) scroll_handle_pane_g3

0x0002,

0xf72e,	// (0x00026a35) scroll_handle_pane_g

0xc021,	// (0x00023328) bg_popup_sub_pane_cp21_ParamLimits

0xc021,	// (0x00023328) bg_popup_sub_pane_cp21

0xc35e,	// (0x00023665) popup_fep_japan_predictive_window_t1_ParamLimits

0xc35e,	// (0x00023665) popup_fep_japan_predictive_window_t1

0xc378,	// (0x0002367f) popup_fep_japan_predictive_window_t2_ParamLimits

0xc378,	// (0x0002367f) popup_fep_japan_predictive_window_t2

0xc3ab,	// (0x000236b2) popup_fep_japan_predictive_window_t3_ParamLimits

0xc3ab,	// (0x000236b2) popup_fep_japan_predictive_window_t3

0x0002,

0xf735,	// (0x00026a3c) popup_fep_japan_predictive_window_t_ParamLimits

0xf735,	// (0x00026a3c) popup_fep_japan_predictive_window_t

0xb90c,	// (0x00022c13) bg_popup_sub_pane_cp23

0xc3e2,	// (0x000236e9) listscroll_japin_cand_pane

0xc3ea,	// (0x000236f1) popup_fep_japan_candidate_window_t1

0xc3f8,	// (0x000236ff) candidate_pane_ParamLimits

0xc3f8,	// (0x000236ff) candidate_pane

0xc40a,	// (0x00023711) scroll_pane_cp30

0xc412,	// (0x00023719) list_single_popup_jap_candidate_pane_ParamLimits

0xc412,	// (0x00023719) list_single_popup_jap_candidate_pane

0xb90c,	// (0x00022c13) list_highlight_pane_cp30

0xc427,	// (0x0002372e) list_single_popup_jap_candidate_pane_t1

0xc436,	// (0x0002373d) level_1_signal

0xc443,	// (0x0002374a) level_2_signal

0xc450,	// (0x00023757) level_3_signal

0xc45d,	// (0x00023764) level_4_signal

0xc46a,	// (0x00023771) level_5_signal

0xc477,	// (0x0002377e) level_6_signal

0xc484,	// (0x0002378b) level_7_signal

0xc436,	// (0x0002373d) level_1_battery

0xc443,	// (0x0002374a) level_2_battery

0xc450,	// (0x00023757) level_3_battery

0xc45d,	// (0x00023764) level_4_battery

0xc46a,	// (0x00023771) level_5_battery

0xc477,	// (0x0002377e) level_6_battery

0xc484,	// (0x0002378b) level_7_battery

0xc4a9,	// (0x000237b0) list_menu_pane_ParamLimits

0xc4a9,	// (0x000237b0) list_menu_pane

0xc4ba,	// (0x000237c1) scroll_pane_cp25_ParamLimits

0xc4ba,	// (0x000237c1) scroll_pane_cp25

0xc4d3,	// (0x000237da) list_double2_graphic_pane_cp2_ParamLimits

0xc4d3,	// (0x000237da) list_double2_graphic_pane_cp2

0xc4d3,	// (0x000237da) list_double2_large_graphic_pane_cp2_ParamLimits

0xc4d3,	// (0x000237da) list_double2_large_graphic_pane_cp2

0xc4d3,	// (0x000237da) list_double2_pane_cp2_ParamLimits

0xc4d3,	// (0x000237da) list_double2_pane_cp2

0xc4d3,	// (0x000237da) list_double_graphic_pane_cp2_ParamLimits

0xc4d3,	// (0x000237da) list_double_graphic_pane_cp2

0xc4d3,	// (0x000237da) list_double_large_graphic_pane_cp2_ParamLimits

0xc4d3,	// (0x000237da) list_double_large_graphic_pane_cp2

0xc4d3,	// (0x000237da) list_double_number_pane_cp2_ParamLimits

0xc4d3,	// (0x000237da) list_double_number_pane_cp2

0xc4d3,	// (0x000237da) list_double_pane_cp2_ParamLimits

0xc4d3,	// (0x000237da) list_double_pane_cp2

0x8759,	// (0x0001fa60) list_single_2graphic_pane_cp2_ParamLimits

0x8759,	// (0x0001fa60) list_single_2graphic_pane_cp2

0x8759,	// (0x0001fa60) list_single_graphic_heading_pane_cp2_ParamLimits

0x8759,	// (0x0001fa60) list_single_graphic_heading_pane_cp2

0x8759,	// (0x0001fa60) list_single_graphic_pane_cp2_ParamLimits

0x8759,	// (0x0001fa60) list_single_graphic_pane_cp2

0x8759,	// (0x0001fa60) list_single_heading_pane_cp2_ParamLimits

0x8759,	// (0x0001fa60) list_single_heading_pane_cp2

0xc4e3,	// (0x000237ea) list_single_large_graphic_pane_cp2_ParamLimits

0xc4e3,	// (0x000237ea) list_single_large_graphic_pane_cp2

0x8759,	// (0x0001fa60) list_single_number_heading_pane_cp2_ParamLimits

0x8759,	// (0x0001fa60) list_single_number_heading_pane_cp2

0x8759,	// (0x0001fa60) list_single_number_pane_cp2_ParamLimits

0x8759,	// (0x0001fa60) list_single_number_pane_cp2

0x8759,	// (0x0001fa60) list_single_pane_cp2_ParamLimits

0x8759,	// (0x0001fa60) list_single_pane_cp2

0xc4fd,	// (0x00023804) bg_popup_sub_pane_cp22

0x5434,	// (0x0001c73b) popup_side_volume_key_window_g1

0x545e,	// (0x0001c765) popup_side_volume_key_window_t1

0x547a,	// (0x0001c781) volume_small_pane_cp1

0xb95a,	// (0x00022c61) bg_popup_sub_pane_cp24_ParamLimits

0xb95a,	// (0x00022c61) bg_popup_sub_pane_cp24

0xc513,	// (0x0002381a) fep_china_uni_candidate_pane_ParamLimits

0xc513,	// (0x0002381a) fep_china_uni_candidate_pane

0xc527,	// (0x0002382e) fep_china_uni_entry_pane

0xc537,	// (0x0002383e) popup_fep_china_uni_window_g1

0xc553,	// (0x0002385a) fep_china_uni_entry_pane_g1

0xc55b,	// (0x00023862) fep_china_uni_entry_pane_g2

0x0001,

0xf762,	// (0x00026a69) fep_china_uni_entry_pane_g

0xc563,	// (0x0002386a) fep_entry_item_pane

0xc56d,	// (0x00023874) fep_candidate_item_pane

0xc575,	// (0x0002387c) fep_china_uni_candidate_pane_g1

0xc57d,	// (0x00023884) fep_china_uni_candidate_pane_g2

0xc585,	// (0x0002388c) fep_china_uni_candidate_pane_g3

0xc58d,	// (0x00023894) fep_china_uni_candidate_pane_g4

0x0003,

0xf767,	// (0x00026a6e) fep_china_uni_candidate_pane_g

0xb902,	// (0x00022c09) fep_entry_item_pane_g1

0xc595,	// (0x0002389c) fep_entry_item_pane_t1_ParamLimits

0xc595,	// (0x0002389c) fep_entry_item_pane_t1

0xc5ab,	// (0x000238b2) fep_candidate_item_pane_t1_ParamLimits

0xc5ab,	// (0x000238b2) fep_candidate_item_pane_t1

0xc5c0,	// (0x000238c7) fep_candidate_item_pane_t2_ParamLimits

0xc5c0,	// (0x000238c7) fep_candidate_item_pane_t2

0x0001,

0xf770,	// (0x00026a77) fep_candidate_item_pane_t_ParamLimits

0xf770,	// (0x00026a77) fep_candidate_item_pane_t

0xb968,	// (0x00022c6f) list_highlight_pane_cp31_ParamLimits

0xb968,	// (0x00022c6f) list_highlight_pane_cp31

0xc5d2,	// (0x000238d9) level_1_signal_lsc

0xc5db,	// (0x000238e2) level_2_signal_lsc

0xc5e4,	// (0x000238eb) level_3_signal_lsc

0xc5ed,	// (0x000238f4) level_4_signal_lsc

0xc5f6,	// (0x000238fd) level_5_signal_lsc

0xc5ff,	// (0x00023906) level_6_signal_lsc

0xc608,	// (0x0002390f) level_7_signal_lsc

0xc608,	// (0x0002390f) level_1_battery_lsc

0xc611,	// (0x00023918) level_2_battery_lsc

0xc61a,	// (0x00023921) level_3_battery_lsc

0xc623,	// (0x0002392a) level_4_battery_lsc

0xc62c,	// (0x00023933) level_5_battery_lsc

0xc635,	// (0x0002393c) level_6_battery_lsc

0xc5d2,	// (0x000238d9) level_7_battery_lsc

0xc63e,	// (0x00023945) scroll_handle_focus_pane_g1

0xc647,	// (0x0002394e) scroll_handle_focus_pane_g2

0xc650,	// (0x00023957) scroll_handle_focus_pane_g3

0x0002,

0xf775,	// (0x00026a7c) scroll_handle_focus_pane_g

0x7db0,	// (0x0001f0b7) list_single_2graphic_pane_g1_ParamLimits

0x7db0,	// (0x0001f0b7) list_single_2graphic_pane_g1

0x78a0,	// (0x0001eba7) list_single_2graphic_pane_g2_ParamLimits

0x78a0,	// (0x0001eba7) list_single_2graphic_pane_g2

0x456c,	// (0x0001b873) list_single_2graphic_pane_g3_ParamLimits

0x456c,	// (0x0001b873) list_single_2graphic_pane_g3

0x7dbc,	// (0x0001f0c3) list_single_2graphic_pane_g4_ParamLimits

0x7dbc,	// (0x0001f0c3) list_single_2graphic_pane_g4

0x0003,

0xf77c,	// (0x00026a83) list_single_2graphic_pane_g_ParamLimits

0xf77c,	// (0x00026a83) list_single_2graphic_pane_g

0x7dcd,	// (0x0001f0d4) list_single_2graphic_pane_t1_ParamLimits

0x7dcd,	// (0x0001f0d4) list_single_2graphic_pane_t1

0x7dfb,	// (0x0001f102) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7dfb,	// (0x0001f102) list_double2_graphic_large_graphic_pane_g1

0x78ff,	// (0x0001ec06) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x78ff,	// (0x0001ec06) list_double2_graphic_large_graphic_pane_g2

0x40b5,	// (0x0001b3bc) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x40b5,	// (0x0001b3bc) list_double2_graphic_large_graphic_pane_g3

0x7e0d,	// (0x0001f114) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7e0d,	// (0x0001f114) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf785,	// (0x00026a8c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf785,	// (0x00026a8c) list_double2_graphic_large_graphic_pane_g

0x7e19,	// (0x0001f120) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x7e19,	// (0x0001f120) list_double2_graphic_large_graphic_pane_t1

0x7e2f,	// (0x0001f136) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x7e2f,	// (0x0001f136) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf78e,	// (0x00026a95) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf78e,	// (0x00026a95) list_double2_graphic_large_graphic_pane_t

0xc711,	// (0x00023a18) popup_fast_swap_window_ParamLimits

0xc711,	// (0x00023a18) popup_fast_swap_window

0xc72d,	// (0x00023a34) popup_side_volume_key_window

0xc749,	// (0x00023a50) stacon_top_pane

0xc753,	// (0x00023a5a) status_pane_ParamLimits

0xc753,	// (0x00023a5a) status_pane

0xc749,	// (0x00023a50) status_small_pane

0xb90c,	// (0x00022c13) control_pane

0xb90c,	// (0x00022c13) stacon_bottom_pane

0xbf4c,	// (0x00023253) scroll_pane_cp121

0xbf43,	// (0x0002324a) set_content_pane

0xc659,	// (0x00023960) bg_active_tab_pane_g1_cp1

0xc662,	// (0x00023969) bg_active_tab_pane_g2_cp1

0xc66b,	// (0x00023972) bg_active_tab_pane_g3_cp1

0xc659,	// (0x00023960) bg_passive_tab_pane_g1_cp1

0xc662,	// (0x00023969) bg_passive_tab_pane_g2_cp1

0xc66b,	// (0x00023972) bg_passive_tab_pane_g3_cp1

0x87b9,	// (0x0001fac0) bg_active_tab_pane_g1_cp2

0xc662,	// (0x00023969) bg_active_tab_pane_g2_cp2

0x87c2,	// (0x0001fac9) bg_active_tab_pane_g3_cp2

0x87b9,	// (0x0001fac0) bg_passive_tab_pane_g1_cp2

0xc662,	// (0x00023969) bg_passive_tab_pane_g2_cp2

0x87c2,	// (0x0001fac9) bg_passive_tab_pane_g3_cp2

0x87cb,	// (0x0001fad2) bg_active_tab_pane_g1_cp3

0xc662,	// (0x00023969) bg_active_tab_pane_g2_cp3

0x87d4,	// (0x0001fadb) bg_active_tab_pane_g3_cp3

0x87cb,	// (0x0001fad2) bg_passive_tab_pane_g1_cp3

0xc662,	// (0x00023969) bg_passive_tab_pane_g2_cp3

0x87d4,	// (0x0001fadb) bg_passive_tab_pane_g3_cp3

0x87dd,	// (0x0001fae4) bg_active_tab_pane_g1_cp4

0xc662,	// (0x00023969) bg_active_tab_pane_g2_cp4

0x87e6,	// (0x0001faed) bg_active_tab_pane_g3_cp4

0x87dd,	// (0x0001fae4) bg_passive_tab_pane_g1_cp4

0xc662,	// (0x00023969) bg_passive_tab_pane_g2_cp4

0x87e6,	// (0x0001faed) bg_passive_tab_pane_g3_cp4

0xc6b2,	// (0x000239b9) bg_active_tab_pane_g1_cp5

0xc662,	// (0x00023969) bg_active_tab_pane_g2_cp5

0xc6bb,	// (0x000239c2) bg_active_tab_pane_g3_cp5

0xc6b2,	// (0x000239b9) bg_passive_tab_pane_g1_cp5

0xc662,	// (0x00023969) bg_passive_tab_pane_g2_cp5

0xc6bb,	// (0x000239c2) bg_passive_tab_pane_g3_cp5

0x85d5,	// (0x0001f8dc) list_set_graphic_pane_ParamLimits

0x85d5,	// (0x0001f8dc) list_set_graphic_pane

0xb90c,	// (0x00022c13) bg_set_opt_pane_cp4

0x87ef,	// (0x0001faf6) list_set_graphic_pane_g1_ParamLimits

0x87ef,	// (0x0001faf6) list_set_graphic_pane_g1

0x87fb,	// (0x0001fb02) list_set_graphic_pane_g2_ParamLimits

0x87fb,	// (0x0001fb02) list_set_graphic_pane_g2

0x0001,

0xf793,	// (0x00026a9a) list_set_graphic_pane_g_ParamLimits

0xf793,	// (0x00026a9a) list_set_graphic_pane_g

0x0009,

0xfaf9,	// (0x00026e00) volume_small_pane_cp_g

0xc6c4,	// (0x000239cb) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc6c4,	// (0x000239cb) list_double2_large_graphic_pane_g1_cp2

0xc6d0,	// (0x000239d7) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc6d0,	// (0x000239d7) list_double2_large_graphic_pane_g2_cp2

0xc6e1,	// (0x000239e8) list_double2_large_graphic_pane_g3_cp2

0xc6e9,	// (0x000239f0) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc6e9,	// (0x000239f0) list_double2_large_graphic_pane_t1_cp2

0xc6ff,	// (0x00023a06) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc6ff,	// (0x00023a06) list_double2_large_graphic_pane_t2_cp2

0xde4c,	// (0x00025153) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xde4c,	// (0x00025153) list_double_large_graphic_pane_g1_cp2

0xde5d,	// (0x00025164) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xde5d,	// (0x00025164) list_double_large_graphic_pane_g2_cp2

0xc86f,	// (0x00023b76) list_double_large_graphic_pane_g3_cp2

0xde6e,	// (0x00025175) list_double_large_graphic_pane_g4_cp

0xde76,	// (0x0002517d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xde76,	// (0x0002517d) list_double_large_graphic_pane_t1_cp2

0xde8d,	// (0x00025194) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xde8d,	// (0x00025194) list_double_large_graphic_pane_t2_cp2

0xc761,	// (0x00023a68) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc761,	// (0x00023a68) list_double2_graphic_pane_g1_cp2

0xc76f,	// (0x00023a76) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc76f,	// (0x00023a76) list_double2_graphic_pane_g2_cp2

0xc780,	// (0x00023a87) list_double2_graphic_pane_g3_cp2

0xc78a,	// (0x00023a91) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc78a,	// (0x00023a91) list_double2_graphic_pane_t1_cp2

0xc7a0,	// (0x00023aa7) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc7a0,	// (0x00023aa7) list_double2_graphic_pane_t2_cp2

0xc7b2,	// (0x00023ab9) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc7b2,	// (0x00023ab9) list_single_number_heading_pane_g1_cp2

0xc7be,	// (0x00023ac5) list_single_number_heading_pane_g2_cp2

0xc7c6,	// (0x00023acd) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc7c6,	// (0x00023acd) list_single_number_heading_pane_t1_cp2

0xc7dc,	// (0x00023ae3) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc7dc,	// (0x00023ae3) list_single_number_heading_pane_t2_cp2

0xc7ee,	// (0x00023af5) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc7ee,	// (0x00023af5) list_single_number_heading_pane_t3_cp2

0xc7b2,	// (0x00023ab9) list_single_heading_pane_g1_cp2_ParamLimits

0xc7b2,	// (0x00023ab9) list_single_heading_pane_g1_cp2

0xc7be,	// (0x00023ac5) list_single_heading_pane_g2_cp2

0xc7c6,	// (0x00023acd) list_single_heading_pane_t1_cp2_ParamLimits

0xc7c6,	// (0x00023acd) list_single_heading_pane_t1_cp2

0xdc2a,	// (0x00024f31) list_single_heading_pane_t2_cp2_ParamLimits

0xdc2a,	// (0x00024f31) list_single_heading_pane_t2_cp2

0xdb90,	// (0x00024e97) list_double_graphic_pane_g1_cp2_ParamLimits

0xdb90,	// (0x00024e97) list_double_graphic_pane_g1_cp2

0xdb9c,	// (0x00024ea3) list_double_graphic_pane_g2_cp2_ParamLimits

0xdb9c,	// (0x00024ea3) list_double_graphic_pane_g2_cp2

0xdbab,	// (0x00024eb2) list_double_graphic_pane_g3_cp2

0xdbb3,	// (0x00024eba) list_double_graphic_pane_t1_cp2_ParamLimits

0xdbb3,	// (0x00024eba) list_double_graphic_pane_t1_cp2

0xdbc9,	// (0x00024ed0) list_double_graphic_pane_t2_cp2_ParamLimits

0xdbc9,	// (0x00024ed0) list_double_graphic_pane_t2_cp2

0xc863,	// (0x00023b6a) list_double_number_pane_g1_cp2_ParamLimits

0xc863,	// (0x00023b6a) list_double_number_pane_g1_cp2

0xc86f,	// (0x00023b76) list_double_number_pane_g2_cp2

0xdb54,	// (0x00024e5b) list_double_number_pane_t1_cp2_ParamLimits

0xdb54,	// (0x00024e5b) list_double_number_pane_t1_cp2

0xdb68,	// (0x00024e6f) list_double_number_pane_t2_cp2_ParamLimits

0xdb68,	// (0x00024e6f) list_double_number_pane_t2_cp2

0xdb7e,	// (0x00024e85) list_double_number_pane_t3_cp2_ParamLimits

0xdb7e,	// (0x00024e85) list_double_number_pane_t3_cp2

0xdacb,	// (0x00024dd2) list_single_graphic_pane_g1_cp2_ParamLimits

0xdacb,	// (0x00024dd2) list_single_graphic_pane_g1_cp2

0xc8c7,	// (0x00023bce) list_single_graphic_pane_g2_cp2_ParamLimits

0xc8c7,	// (0x00023bce) list_single_graphic_pane_g2_cp2

0xc8d3,	// (0x00023bda) list_single_graphic_pane_g3_cp2

0xdaa1,	// (0x00024da8) list_single_graphic_pane_t1_cp2_ParamLimits

0xdaa1,	// (0x00024da8) list_single_graphic_pane_t1_cp2

0xc8c7,	// (0x00023bce) list_single_number_pane_g1_cp2_ParamLimits

0xc8c7,	// (0x00023bce) list_single_number_pane_g1_cp2

0xc8d3,	// (0x00023bda) list_single_number_pane_g2_cp2

0xdaa1,	// (0x00024da8) list_single_number_pane_t1_cp2_ParamLimits

0xdaa1,	// (0x00024da8) list_single_number_pane_t1_cp2

0xdab7,	// (0x00024dbe) list_single_number_pane_t2_cp2_ParamLimits

0xdab7,	// (0x00024dbe) list_single_number_pane_t2_cp2

0xc6d0,	// (0x000239d7) list_double2_pane_g1_cp2_ParamLimits

0xc6d0,	// (0x000239d7) list_double2_pane_g1_cp2

0xc6e1,	// (0x000239e8) list_double2_pane_g2_cp2

0xc83b,	// (0x00023b42) list_double2_pane_t1_cp2_ParamLimits

0xc83b,	// (0x00023b42) list_double2_pane_t1_cp2

0xc851,	// (0x00023b58) list_double2_pane_t2_cp2_ParamLimits

0xc851,	// (0x00023b58) list_double2_pane_t2_cp2

0xc863,	// (0x00023b6a) list_double_pane_g1_cp2_ParamLimits

0xc863,	// (0x00023b6a) list_double_pane_g1_cp2

0xc86f,	// (0x00023b76) list_double_pane_g2_cp2

0xc877,	// (0x00023b7e) list_double_pane_t1_cp2_ParamLimits

0xc877,	// (0x00023b7e) list_double_pane_t1_cp2

0xc88d,	// (0x00023b94) list_double_pane_t2_cp2_ParamLimits

0xc88d,	// (0x00023b94) list_double_pane_t2_cp2

0xc8b7,	// (0x00023bbe) list_single_pane_cp2_g3

0xc8c7,	// (0x00023bce) list_single_pane_g1_cp2_ParamLimits

0xc8c7,	// (0x00023bce) list_single_pane_g1_cp2

0xc8d3,	// (0x00023bda) list_single_pane_g2_cp2

0xc8db,	// (0x00023be2) list_single_pane_t1_cp2_ParamLimits

0xc8db,	// (0x00023be2) list_single_pane_t1_cp2

0xc8f3,	// (0x00023bfa) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xc8f3,	// (0x00023bfa) list_single_large_graphic_pane_g1_cp2

0xc8ff,	// (0x00023c06) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc8ff,	// (0x00023c06) list_single_large_graphic_pane_g2_cp2

0xc90b,	// (0x00023c12) list_single_large_graphic_pane_g3_cp2

0xc913,	// (0x00023c1a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc913,	// (0x00023c1a) list_single_large_graphic_pane_g4_cp1

0xc92d,	// (0x00023c34) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc92d,	// (0x00023c34) list_single_large_graphic_pane_t1_cp2

0xda6d,	// (0x00024d74) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xda6d,	// (0x00024d74) list_single_graphic_heading_pane_g1_cp2

0xda3a,	// (0x00024d41) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xda3a,	// (0x00024d41) list_single_graphic_heading_pane_g4_cp2

0xc8d3,	// (0x00023bda) list_single_graphic_heading_pane_g5_cp2

0xda79,	// (0x00024d80) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xda79,	// (0x00024d80) list_single_graphic_heading_pane_t1_cp2

0xda8f,	// (0x00024d96) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xda8f,	// (0x00024d96) list_single_graphic_heading_pane_t2_cp2

0xda2e,	// (0x00024d35) list_single_2graphic_pane_g1_cp2_ParamLimits

0xda2e,	// (0x00024d35) list_single_2graphic_pane_g1_cp2

0xda3a,	// (0x00024d41) list_single_2graphic_pane_g2_cp2_ParamLimits

0xda3a,	// (0x00024d41) list_single_2graphic_pane_g2_cp2

0xc8d3,	// (0x00023bda) list_single_2graphic_pane_g3_cp2

0xda4b,	// (0x00024d52) list_single_2graphic_pane_g4_cp2_ParamLimits

0xda4b,	// (0x00024d52) list_single_2graphic_pane_g4_cp2

0xda57,	// (0x00024d5e) list_single_2graphic_pane_t1_cp2_ParamLimits

0xda57,	// (0x00024d5e) list_single_2graphic_pane_t1_cp2

0xb902,	// (0x00022c09) list_highlight_pane_g10_cp1

0xd624,	// (0x0002492b) list_highlight_pane_g1_cp1

0xd62c,	// (0x00024933) list_highlight_pane_g2_cp1

0xd634,	// (0x0002493b) list_highlight_pane_g3_cp1

0xd63c,	// (0x00024943) list_highlight_pane_g4_cp1

0xd644,	// (0x0002494b) list_highlight_pane_g5_cp1

0xd64c,	// (0x00024953) list_highlight_pane_g6_cp1

0xd654,	// (0x0002495b) list_highlight_pane_g7_cp1

0xd65c,	// (0x00024963) list_highlight_pane_g8_cp1

0xd664,	// (0x0002496b) list_highlight_pane_g9_cp1

0x961a,	// (0x00020921) form_field_slider_pane_t3

0x9628,	// (0x0002092f) form_field_slider_pane_t4

0xd560,	// (0x00024867) slider_form_pane_ParamLimits

0xd560,	// (0x00024867) slider_form_pane

0xb90c,	// (0x00022c13) control_abbreviations

0xb90c,	// (0x00022c13) control_conventions

0xb90c,	// (0x00022c13) control_definitions

0xb90c,	// (0x00022c13) format_table_attribute

0xdc9e,	// (0x00024fa5) bg_popup_preview_window_pane_g9

0xb90c,	// (0x00022c13) format_table_data2

0xb90c,	// (0x00022c13) format_table_data3

0xb90c,	// (0x00022c13) format_table_data_example

0x0008,

0xb90c,	// (0x00022c13) intro_purpose

0xf923,	// (0x00026c2a) bg_popup_preview_window_pane_g

0xb90c,	// (0x00022c13) texts_category

0xb90c,	// (0x00022c13) texts_graphics

0xc943,	// (0x00023c4a) text_digital

0xc952,	// (0x00023c59) text_primary

0xc961,	// (0x00023c68) text_primary_small

0xc970,	// (0x00023c77) text_secondary

0xc97f,	// (0x00023c86) text_title

0xe12d,	// (0x00025434) bg_passive_tab_pane_g1_cp3_srt

0xc662,	// (0x00023969) bg_passive_tab_pane_g2_cp3_srt

0xe136,	// (0x0002543d) bg_passive_tab_pane_g3_cp3_srt

0xb95a,	// (0x00022c61) bg_active_tab_pane_cp3_srt_ParamLimits

0xb95a,	// (0x00022c61) bg_active_tab_pane_cp3_srt

0xe13f,	// (0x00025446) tabs_4_active_pane_srt_g1

0x9af7,	// (0x00020dfe) tabs_4_active_pane_srt_t1_ParamLimits

0x9af7,	// (0x00020dfe) tabs_4_active_pane_srt_t1

0xe12d,	// (0x00025434) bg_active_tab_pane_g1_cp3_copy1

0xc662,	// (0x00023969) bg_active_tab_pane_g2_cp3_copy1

0xe136,	// (0x0002543d) bg_active_tab_pane_g3_cp3_copy1

0xb968,	// (0x00022c6f) tabs_2_long_active_pane_srt_ParamLimits

0xb968,	// (0x00022c6f) tabs_2_long_active_pane_srt

0xb968,	// (0x00022c6f) tabs_2_long_passive_pane_srt_ParamLimits

0xb968,	// (0x00022c6f) tabs_2_long_passive_pane_srt

0xc0c1,	// (0x000233c8) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc0c1,	// (0x000233c8) bg_passive_tab_pane_cp4_srt

0xe053,	// (0x0002535a) bg_passive_tab_pane_g1_cp4_srt

0xc662,	// (0x00023969) bg_passive_tab_pane_g2_cp4_srt

0xe05c,	// (0x00025363) bg_passive_tab_pane_g3_cp4_srt

0xb968,	// (0x00022c6f) bg_active_tab_pane_cp4_srt_ParamLimits

0xb968,	// (0x00022c6f) bg_active_tab_pane_cp4_srt

0x9905,	// (0x00020c0c) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9905,	// (0x00020c0c) tabs_2_long_active_pane_srt_t1

0xe053,	// (0x0002535a) bg_active_tab_pane_g1_cp4_srt

0xc662,	// (0x00023969) bg_active_tab_pane_g2_cp4_srt

0xe05c,	// (0x00025363) bg_active_tab_pane_g3_cp4_srt

0xb95a,	// (0x00022c61) tabs_3_long_active_pane_srt_ParamLimits

0xb95a,	// (0x00022c61) tabs_3_long_active_pane_srt

0xb95a,	// (0x00022c61) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb95a,	// (0x00022c61) tabs_3_long_passive_pane_cp_srt

0xb95a,	// (0x00022c61) tabs_3_long_passive_pane_srt_ParamLimits

0xb95a,	// (0x00022c61) tabs_3_long_passive_pane_srt

0xc0c1,	// (0x000233c8) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc0c1,	// (0x000233c8) bg_passive_tab_pane_cp5_srt

0xc6b2,	// (0x000239b9) bg_passive_tab_pane_g1_cp5_srt

0xc662,	// (0x00023969) bg_passive_tab_pane_g2_cp5_srt

0xc6bb,	// (0x000239c2) bg_passive_tab_pane_g3_cp5_srt

0xb968,	// (0x00022c6f) bg_active_tab_pane_cp5_srt_ParamLimits

0xb968,	// (0x00022c6f) bg_active_tab_pane_cp5_srt

0x98ef,	// (0x00020bf6) tabs_3_long_active_pane_srt_t1_ParamLimits

0x98ef,	// (0x00020bf6) tabs_3_long_active_pane_srt_t1

0xc6b2,	// (0x000239b9) bg_active_tab_pane_g1_cp5_srt

0xc662,	// (0x00023969) bg_active_tab_pane_g2_cp5_srt

0xc6bb,	// (0x000239c2) bg_active_tab_pane_g3_cp5_srt

0xe045,	// (0x0002534c) navi_text_pane_srt_t1

0xe03d,	// (0x00025344) navi_icon_pane_srt_g1

0xca85,	// (0x00023d8c) midp_editing_number_pane_srt

0xc98e,	// (0x00023c95) midp_ticker_pane_srt

0xca8d,	// (0x00023d94) midp_ticker_pane_srt_g1

0xca95,	// (0x00023d9c) midp_ticker_pane_srt_g2

0x0001,

0xf7b2,	// (0x00026ab9) midp_ticker_pane_srt_g

0xca9d,	// (0x00023da4) midp_ticker_pane_srt_t1

0xe02e,	// (0x00025335) midp_editing_number_pane_t1_copy1

0x881f,	// (0x0001fb26) listscroll_midp_pane

0x881f,	// (0x0001fb26) midp_form_pane

0xc996,	// (0x00023c9d) midp_info_popup_window_ParamLimits

0xc996,	// (0x00023c9d) midp_info_popup_window

0xc021,	// (0x00023328) bg_popup_sub_pane_cp50_ParamLimits

0xc021,	// (0x00023328) bg_popup_sub_pane_cp50

0xd2a9,	// (0x000245b0) listscroll_midp_info_pane_ParamLimits

0xd2a9,	// (0x000245b0) listscroll_midp_info_pane

0xd291,	// (0x00024598) listscroll_form_midp_pane_ParamLimits

0xd291,	// (0x00024598) listscroll_form_midp_pane

0xd29d,	// (0x000245a4) scroll_bar_cp050

0x960e,	// (0x00020915) list_midp_pane

0xe9a3,	// (0x00025caa) signal_pane_g2_cp

0xd1c3,	// (0x000244ca) listscroll_midp_info_pane_t1_ParamLimits

0xd1c3,	// (0x000244ca) listscroll_midp_info_pane_t1

0xd1db,	// (0x000244e2) listscroll_midp_info_pane_t2_ParamLimits

0xd1db,	// (0x000244e2) listscroll_midp_info_pane_t2

0xd219,	// (0x00024520) listscroll_midp_info_pane_t3_ParamLimits

0xd219,	// (0x00024520) listscroll_midp_info_pane_t3

0xd253,	// (0x0002455a) listscroll_midp_info_pane_t4_ParamLimits

0xd253,	// (0x0002455a) listscroll_midp_info_pane_t4

0x0003,

0xf85e,	// (0x00026b65) listscroll_midp_info_pane_t_ParamLimits

0xf85e,	// (0x00026b65) listscroll_midp_info_pane_t

0xc088,	// (0x0002338f) scroll_pane_cp21

0xd161,	// (0x00024468) form_midp_field_choice_group_pane

0xd16a,	// (0x00024471) form_midp_field_text_pane

0xd1a9,	// (0x000244b0) form_midp_field_time_pane

0xd1b1,	// (0x000244b8) form_midp_gauge_slider_pane

0xd1ba,	// (0x000244c1) form_midp_gauge_wait_pane

0xb90c,	// (0x00022c13) form_midp_image_pane

0x7e41,	// (0x0001f148) list_single_midp_pane_ParamLimits

0x7e41,	// (0x0001f148) list_single_midp_pane

0x95ec,	// (0x000208f3) form_midp_field_text_pane_t1

0xd008,	// (0x0002430f) input_focus_pane_cp050

0xd150,	// (0x00024457) list_midp_form_text_pane

0xd11f,	// (0x00024426) form_midp_field_choice_group_pane_t1

0xd12d,	// (0x00024434) input_focus_pane_cp051

0xd141,	// (0x00024448) list_midp_choice_pane

0xb90c,	// (0x00022c13) status_idle_pane

0xd103,	// (0x0002440a) form_midp_field_time_pane_t1

0xb902,	// (0x00022c09) wait_anim_pane_g2_copy1

0xd111,	// (0x00024418) form_midp_field_time_pane_t2

0x0001,

0xc9ef,	// (0x00023cf6) aid_navinavi_width_2_pane

0xf859,	// (0x00026b60) form_midp_field_time_pane_t

0xb90c,	// (0x00022c13) input_focus_pane_cp052

0xb90c,	// (0x00022c13) bg_input_focus_pane_cp040

0xd0df,	// (0x000243e6) form_midp_gauge_slider_pane_t1

0xd0ed,	// (0x000243f4) form_midp_gauge_slider_pane_t2

0x95d0,	// (0x000208d7) form_midp_gauge_slider_pane_t3

0x95de,	// (0x000208e5) form_midp_gauge_slider_pane_t4

0x0003,

0xf850,	// (0x00026b57) form_midp_gauge_slider_pane_t

0xd0fb,	// (0x00024402) form_midp_slider_pane

0xb968,	// (0x00022c6f) bg_input_focus_pane_cp041_ParamLimits

0xb968,	// (0x00022c6f) bg_input_focus_pane_cp041

0xd0ac,	// (0x000243b3) form_midp_gauge_wait_pane_t1_ParamLimits

0xd0ac,	// (0x000243b3) form_midp_gauge_wait_pane_t1

0xd0be,	// (0x000243c5) form_midp_gauge_wait_pane_t2_ParamLimits

0xd0be,	// (0x000243c5) form_midp_gauge_wait_pane_t2

0x0001,

0xf84b,	// (0x00026b52) form_midp_gauge_wait_pane_t_ParamLimits

0xf84b,	// (0x00026b52) form_midp_gauge_wait_pane_t

0xd0d0,	// (0x000243d7) form_midp_wait_pane_ParamLimits

0xd0d0,	// (0x000243d7) form_midp_wait_pane

0xd076,	// (0x0002437d) form_midp_image_pane_g1

0xd07f,	// (0x00024386) form_midp_image_pane_t1

0xd08e,	// (0x00024395) form_midp_image_pane_t2

0xd09d,	// (0x000243a4) form_midp_image_pane_t3

0x0002,

0xf844,	// (0x00026b4b) form_midp_image_pane_t

0xd06d,	// (0x00024374) list_single_midp_pane_g1

0x4618,	// (0x0001b91f) list_single_midp_pane_t1

0x95bb,	// (0x000208c2) list_midp_form_item_pane_ParamLimits

0x95bb,	// (0x000208c2) list_midp_form_item_pane

0xc9a9,	// (0x00023cb0) list_midp_form_item_pane_t1

0xc9b8,	// (0x00023cbf) midp_ticker_pane_g1

0xc9c4,	// (0x00023ccb) midp_ticker_pane_g2

0x0001,

0xf798,	// (0x00026a9f) midp_ticker_pane_g

0x88c7,	// (0x0001fbce) midp_ticker_pane_t1

0x9a70,	// (0x00020d77) midp_editing_number_pane_t1

0xe0c2,	// (0x000253c9) midp_editing_number_pane

0xe0d1,	// (0x000253d8) midp_ticker_pane

0xe01e,	// (0x00025325) ai_message_heading_pane

0xb90c,	// (0x00022c13) bg_popup_window_pane_cp14

0xe026,	// (0x0002532d) listscroll_ai_message_pane

0xdfa8,	// (0x000252af) ai_message_heading_pane_g1_ParamLimits

0xdfa8,	// (0x000252af) ai_message_heading_pane_g1

0xdfb4,	// (0x000252bb) ai_message_heading_pane_g2_ParamLimits

0xdfb4,	// (0x000252bb) ai_message_heading_pane_g2

0xdfc0,	// (0x000252c7) ai_message_heading_pane_g3_ParamLimits

0xdfc0,	// (0x000252c7) ai_message_heading_pane_g3

0xdfcc,	// (0x000252d3) ai_message_heading_pane_g4_ParamLimits

0xdfcc,	// (0x000252d3) ai_message_heading_pane_g4

0x0003,

0xf985,	// (0x00026c8c) ai_message_heading_pane_g_ParamLimits

0xf985,	// (0x00026c8c) ai_message_heading_pane_g

0xdfd8,	// (0x000252df) ai_message_heading_pane_t1_ParamLimits

0xdfd8,	// (0x000252df) ai_message_heading_pane_t1

0xdff2,	// (0x000252f9) ai_message_heading_pane_t2_ParamLimits

0xdff2,	// (0x000252f9) ai_message_heading_pane_t2

0x0001,

0xf98e,	// (0x00026c95) ai_message_heading_pane_t_ParamLimits

0xf98e,	// (0x00026c95) ai_message_heading_pane_t

0xe004,	// (0x0002530b) bg_popup_heading_pane_cp1_ParamLimits

0xe004,	// (0x0002530b) bg_popup_heading_pane_cp1

0xdf96,	// (0x0002529d) list_ai_message_pane_ParamLimits

0xdf96,	// (0x0002529d) list_ai_message_pane

0xc088,	// (0x0002338f) scroll_pane_cp10

0xdf32,	// (0x00025239) list_ai_message_pane_g1

0xdf3a,	// (0x00025241) list_ai_message_pane_g2

0x0001,

0xf962,	// (0x00026c69) list_ai_message_pane_g

0xdf42,	// (0x00025249) list_ai_message_pane_t1_ParamLimits

0xdf42,	// (0x00025249) list_ai_message_pane_t1

0xdf57,	// (0x0002525e) list_ai_message_pane_t2_ParamLimits

0xdf57,	// (0x0002525e) list_ai_message_pane_t2

0xdf6c,	// (0x00025273) list_ai_message_pane_t3_ParamLimits

0xdf6c,	// (0x00025273) list_ai_message_pane_t3

0xdf81,	// (0x00025288) list_ai_message_pane_t4_ParamLimits

0xdf81,	// (0x00025288) list_ai_message_pane_t4

0x0003,

0xf967,	// (0x00026c6e) list_ai_message_pane_t_ParamLimits

0xf967,	// (0x00026c6e) list_ai_message_pane_t

0x98ce,	// (0x00020bd5) cell_ai_soft_ind_pane_ParamLimits

0x98ce,	// (0x00020bd5) cell_ai_soft_ind_pane

0xc9d0,	// (0x00023cd7) cell_ai_soft_ind_pane_g1_ParamLimits

0xc9d0,	// (0x00023cd7) cell_ai_soft_ind_pane_g1

0xb90c,	// (0x00022c13) grid_highlight_cp1

0xc9dd,	// (0x00023ce4) text_secondary_cp56_ParamLimits

0xc9dd,	// (0x00023ce4) text_secondary_cp56

0xdf07,	// (0x0002520e) example_general_pane_ParamLimits

0xdf07,	// (0x0002520e) example_general_pane

0xdf13,	// (0x0002521a) example_parent_pane_g1_ParamLimits

0xdf13,	// (0x0002521a) example_parent_pane_g1

0xdf1f,	// (0x00025226) example_parent_pane_t1_ParamLimits

0xdf1f,	// (0x00025226) example_parent_pane_t1

0x8e20,	// (0x00020127) popup_preview_text_window_ParamLimits

0x8e20,	// (0x00020127) popup_preview_text_window

0xc8bf,	// (0x00023bc6) list_single_pane_cp2_g4

0xbb43,	// (0x00022e4a) bg_popup_preview_window_pane_ParamLimits

0xbb43,	// (0x00022e4a) bg_popup_preview_window_pane

0xdca6,	// (0x00024fad) popup_preview_text_window_t1_ParamLimits

0xdca6,	// (0x00024fad) popup_preview_text_window_t1

0xdcc4,	// (0x00024fcb) popup_preview_text_window_t2_ParamLimits

0xdcc4,	// (0x00024fcb) popup_preview_text_window_t2

0xdd0d,	// (0x00025014) popup_preview_text_window_t3_ParamLimits

0xdd0d,	// (0x00025014) popup_preview_text_window_t3

0xdd52,	// (0x00025059) popup_preview_text_window_t4_ParamLimits

0xdd52,	// (0x00025059) popup_preview_text_window_t4

0x0004,

0xf936,	// (0x00026c3d) popup_preview_text_window_t_ParamLimits

0xf936,	// (0x00026c3d) popup_preview_text_window_t

0xddd0,	// (0x000250d7) scroll_pane_cp11

0xcf18,	// (0x0002421f) bg_popup_preview_window_pane_g1

0xdc3c,	// (0x00024f43) bg_popup_preview_window_pane_g2

0xdc44,	// (0x00024f4b) bg_popup_preview_window_pane_g3

0xdc4c,	// (0x00024f53) bg_popup_preview_window_pane_g4

0xdc7e,	// (0x00024f85) bg_popup_preview_window_pane_g5

0xdc86,	// (0x00024f8d) bg_popup_preview_window_pane_g6

0xdc8e,	// (0x00024f95) bg_popup_preview_window_pane_g7

0xdc96,	// (0x00024f9d) bg_popup_preview_window_pane_g8

0x4d79,	// (0x0001c080) aid_popup_width_pane

0x8d9c,	// (0x000200a3) popup_midp_note_alarm_window_ParamLimits

0x8d9c,	// (0x000200a3) popup_midp_note_alarm_window

0xbf5d,	// (0x00023264) data_form_pane_ParamLimits

0x7cb4,	// (0x0001efbb) form_field_data_pane_g1

0x7cbe,	// (0x0001efc5) form_field_data_pane_t1_ParamLimits

0xbf69,	// (0x00023270) input_focus_pane_ParamLimits

0xbf77,	// (0x0002327e) data_form_wide_pane_ParamLimits

0x431a,	// (0x0001b621) form_field_data_wide_pane_g1

0x4326,	// (0x0001b62d) form_field_data_wide_pane_t1_ParamLimits

0xbce4,	// (0x00022feb) input_focus_pane_cp6_ParamLimits

0x8636,	// (0x0001f93d) input_popup_find_pane_g1_ParamLimits

0x8636,	// (0x0001f93d) input_popup_find_pane_g1

0x52e3,	// (0x0001c5ea) aid_navi_side_left_pane

0x52f8,	// (0x0001c5ff) aid_navi_side_right_pane

0xd701,	// (0x00024a08) bg_popup_window_pane_cp30_ParamLimits

0xd701,	// (0x00024a08) bg_popup_window_pane_cp30

0xd77b,	// (0x00024a82) popup_midp_note_alarm_window_g1_ParamLimits

0xd77b,	// (0x00024a82) popup_midp_note_alarm_window_g1

0xd7ab,	// (0x00024ab2) popup_midp_note_alarm_window_t1_ParamLimits

0xd7ab,	// (0x00024ab2) popup_midp_note_alarm_window_t1

0xd84c,	// (0x00024b53) popup_midp_note_alarm_window_t2_ParamLimits

0xd84c,	// (0x00024b53) popup_midp_note_alarm_window_t2

0xd8fa,	// (0x00024c01) popup_midp_note_alarm_window_t3_ParamLimits

0xd8fa,	// (0x00024c01) popup_midp_note_alarm_window_t3

0xd92c,	// (0x00024c33) popup_midp_note_alarm_window_t4_ParamLimits

0xd92c,	// (0x00024c33) popup_midp_note_alarm_window_t4

0xd952,	// (0x00024c59) popup_midp_note_alarm_window_t5_ParamLimits

0xd952,	// (0x00024c59) popup_midp_note_alarm_window_t5

0x000a,

0xf8d3,	// (0x00026bda) popup_midp_note_alarm_window_t_ParamLimits

0xf8d3,	// (0x00026bda) popup_midp_note_alarm_window_t

0xd9fe,	// (0x00024d05) wait_bar_pane_cp1_ParamLimits

0xd9fe,	// (0x00024d05) wait_bar_pane_cp1

0xb90c,	// (0x00022c13) wait_anim_pane_copy1

0xb90c,	// (0x00022c13) wait_border_pane_copy1

0xd421,	// (0x00024728) wait_border_pane_g1_copy1

0x4340,	// (0x0001b647) form_field_popup_pane_g1

0x7cd8,	// (0x0001efdf) form_field_popup_pane_t1_ParamLimits

0xbf69,	// (0x00023270) input_focus_pane_cp7_ParamLimits

0xbfa3,	// (0x000232aa) list_form_pane_ParamLimits

0x4360,	// (0x0001b667) form_field_popup_wide_pane_g1

0x4368,	// (0x0001b66f) form_field_popup_wide_pane_t1_ParamLimits

0xbf69,	// (0x00023270) input_focus_pane_cp8_ParamLimits

0xbfaf,	// (0x000232b6) list_form_wide_pane_ParamLimits

0xe166,	// (0x0002546d) aid_size_cell_graphic_pane

0x7d57,	// (0x0001f05e) data_form_pane_t1_ParamLimits

0x7e6d,	// (0x0001f174) data_form_wide_pane_t1_ParamLimits

0x91d5,	// (0x000204dc) bg_status_flat_pane

0x826a,	// (0x0001f571) title_pane_t1_ParamLimits

0xb922,	// (0x00022c29) title_pane_t2_ParamLimits

0xb948,	// (0x00022c4f) title_pane_t3_ParamLimits

0xf59b,	// (0x000268a2) title_pane_t_ParamLimits

0xc436,	// (0x0002373d) level_1_signal_ParamLimits

0xc443,	// (0x0002374a) level_2_signal_ParamLimits

0xc450,	// (0x00023757) level_3_signal_ParamLimits

0xc45d,	// (0x00023764) level_4_signal_ParamLimits

0xc46a,	// (0x00023771) level_5_signal_ParamLimits

0xc477,	// (0x0002377e) level_6_signal_ParamLimits

0xc484,	// (0x0002378b) level_7_signal_ParamLimits

0xc436,	// (0x0002373d) level_1_battery_ParamLimits

0xc443,	// (0x0002374a) level_2_battery_ParamLimits

0xc450,	// (0x00023757) level_3_battery_ParamLimits

0xc45d,	// (0x00023764) level_4_battery_ParamLimits

0xc46a,	// (0x00023771) level_5_battery_ParamLimits

0xc477,	// (0x0002377e) level_6_battery_ParamLimits

0xc484,	// (0x0002378b) level_7_battery_ParamLimits

0xd624,	// (0x0002492b) bg_status_flat_pane_g1

0xd62c,	// (0x00024933) bg_status_flat_pane_g2

0xd634,	// (0x0002493b) bg_status_flat_pane_g3

0xd63c,	// (0x00024943) bg_status_flat_pane_g4

0xd644,	// (0x0002494b) bg_status_flat_pane_g5

0xd64c,	// (0x00024953) bg_status_flat_pane_g6

0xd654,	// (0x0002495b) bg_status_flat_pane_g7

0x82fe,	// (0x0001f605) tabs_3_active_pane_t1_ParamLimits

0x82fe,	// (0x0001f605) tabs_3_passive_pane_t1_ParamLimits

0x8318,	// (0x0001f61f) tabs_4_active_pane_t1_ParamLimits

0x8318,	// (0x0001f61f) tabs_4_1_passive_pane_t1_ParamLimits

0x864c,	// (0x0001f953) tabs_2_active_pane_t1_ParamLimits

0x864c,	// (0x0001f953) tabs_2_passive_pane_t1_ParamLimits

0xb968,	// (0x00022c6f) bg_active_tab_pane_cp4_ParamLimits

0x865e,	// (0x0001f965) tabs_2_long_active_pane_t1_ParamLimits

0xc0c1,	// (0x000233c8) bg_passive_tab_pane_cp4_ParamLimits

0x583a,	// (0x0001cb41) list_single_midp_graphic_pane_t1_ParamLimits

0xb968,	// (0x00022c6f) bg_active_tab_pane_cp5_ParamLimits

0x8671,	// (0x0001f978) tabs_3_long_active_pane_t1_ParamLimits

0xc0c1,	// (0x000233c8) bg_passive_tab_pane_cp5_ParamLimits

0x583a,	// (0x0001cb41) list_single_midp_graphic_pane_t1

0x91d5,	// (0x000204dc) bg_status_flat_pane_ParamLimits

0xcde9,	// (0x000240f0) indicator_pane_cp2_ParamLimits

0xcde9,	// (0x000240f0) indicator_pane_cp2

0x934c,	// (0x00020653) navi_pane_srt_ParamLimits

0x934c,	// (0x00020653) navi_pane_srt

0xce11,	// (0x00024118) popup_clock_digital_analogue_window_cp1

0xb9ac,	// (0x00022cb3) indicator_pane_t1

0xc98e,	// (0x00023c95) copy_highlight_pane

0xc98e,	// (0x00023c95) cursor_graphics_pane

0xc98e,	// (0x00023c95) graphic_within_text_pane

0xc98e,	// (0x00023c95) link_highlight_pane

0xdd93,	// (0x0002509a) popup_preview_text_window_t5_ParamLimits

0xdd93,	// (0x0002509a) popup_preview_text_window_t5

0xc9f7,	// (0x00023cfe) cursor_digital_pane

0xc9f7,	// (0x00023cfe) cursor_primary_pane

0xca08,	// (0x00023d0f) cursor_primary_small_pane

0xca10,	// (0x00023d17) cursor_secondary_pane

0xca18,	// (0x00023d1f) cursor_title_pane

0xc9f7,	// (0x00023cfe) link_highlight_digital_pane

0xc9ff,	// (0x00023d06) link_highlight_primary_pane

0xca08,	// (0x00023d0f) link_highlight_primary_small_pane

0xca10,	// (0x00023d17) link_highlight_secondary_pane

0xca18,	// (0x00023d1f) link_highlight_title_pane

0xc9f7,	// (0x00023cfe) copy_highlight_digital_pane

0xc9f7,	// (0x00023cfe) copy_highlight_primary_pane

0xca08,	// (0x00023d0f) copy_highlight_primary_small_pane

0xca10,	// (0x00023d17) copy_highlight_secondary_pane

0xca18,	// (0x00023d1f) copy_highlight_title_pane

0xca10,	// (0x00023d17) graphic_text_digital_pane

0xd6a4,	// (0x000249ab) graphic_text_primary_pane

0xd6ad,	// (0x000249b4) graphic_text_primary_small_pane

0xca08,	// (0x00023d0f) graphic_text_secondary_pane

0xc9f7,	// (0x00023cfe) graphic_text_title_pane

0x88d9,	// (0x0001fbe0) cursor_primary_pane_g1

0xd696,	// (0x0002499d) cursor_text_primary_t1

0x964a,	// (0x00020951) cursor_primary_small_pane_g1

0xd688,	// (0x0002498f) cursor_text_primary_small_t1

0x9640,	// (0x00020947) cursor_primary_small_pane_g1_copy1

0xd67a,	// (0x00024981) cursor_text_primary_small_t1_copy1

0xd66c,	// (0x00024973) cursor_text_title_t1

0x9636,	// (0x0002093d) cursor_title_pane_g1

0x88d9,	// (0x0001fbe0) cursor_digital_pane_g1

0xca20,	// (0x00023d27) cursor_text_digital_t1

0xca45,	// (0x00023d4c) link_highlight_primary_pane_g1

0xd615,	// (0x0002491c) link_highlight_primary_pane_t1

0xca2e,	// (0x00023d35) link_highlight_primary_small_pane_g1

0xca36,	// (0x00023d3d) link_highlight_primary_small_pane_t1

0xca45,	// (0x00023d4c) link_highlight_secondary_pane_g1

0xca4d,	// (0x00023d54) link_highlight_secondary_pane_t1

0xd589,	// (0x00024890) link_highlight_title_pane_g1

0xd591,	// (0x00024898) link_highlight_title_pane_t1

0xd572,	// (0x00024879) link_highlight_digital_pane_g1

0xd57a,	// (0x00024881) link_highlight_digital_pane_t1

0xd466,	// (0x0002476d) copy_highlight_primary_pane_g1

0xd46e,	// (0x00024775) copy_highlight_primary_pane_t1

0xd440,	// (0x00024747) copy_highlight_primary_small_pane_g1

0xd457,	// (0x0002475e) copy_highlight_primary_small_pane_t1

0xca5c,	// (0x00023d63) copy_highlight_secondary_pane_g1

0xca64,	// (0x00023d6b) copy_highlight_secondary_pane_t1

0xd440,	// (0x00024747) copy_highlight_title_pane_g1

0xd448,	// (0x0002474f) copy_highlight_title_pane_t1

0xd466,	// (0x0002476d) copy_highlight_digital_pane_g1

0xe2ec,	// (0x000255f3) copy_highlight_digital_pane_t1

0xe240,	// (0x00025547) graphic_text_primary_pane_g1

0xe2d0,	// (0x000255d7) graphic_text_primary_pane_t1

0xe2de,	// (0x000255e5) graphic_text_primary_pane_t2

0x0001,

0xfa02,	// (0x00026d09) graphic_text_primary_pane_t

0xe2ac,	// (0x000255b3) graphic_text_primary_small_pane_g1

0xe2b4,	// (0x000255bb) graphic_text_primary_small_pane_t1

0xe2c2,	// (0x000255c9) graphic_text_primary_small_pane_t2

0x0001,

0xf9fd,	// (0x00026d04) graphic_text_primary_small_pane_t

0xe288,	// (0x0002558f) graphic_text_secondary_pane_g1

0xe290,	// (0x00025597) graphic_text_secondary_pane_t1

0xe29e,	// (0x000255a5) graphic_text_secondary_pane_t2

0x0001,

0xf9f8,	// (0x00026cff) graphic_text_secondary_pane_t

0xe264,	// (0x0002556b) graphic_text_title_pane_g1

0xe26c,	// (0x00025573) graphic_text_title_pane_t1

0xe27a,	// (0x00025581) graphic_text_title_pane_t2

0x0001,

0xf9f3,	// (0x00026cfa) graphic_text_title_pane_t

0xe240,	// (0x00025547) graphic_text_digital_pane_g1

0xe248,	// (0x0002554f) graphic_text_digital_pane_t1

0xe256,	// (0x0002555d) graphic_text_digital_pane_t2

0x0001,

0xf9ee,	// (0x00026cf5) graphic_text_digital_pane_t

0xb968,	// (0x00022c6f) navi_icon_pane_srt_ParamLimits

0xb968,	// (0x00022c6f) navi_icon_pane_srt

0xb90c,	// (0x00022c13) navi_midp_pane_srt

0xb90c,	// (0x00022c13) navi_navi_pane_srt

0xb968,	// (0x00022c6f) navi_text_pane_srt_ParamLimits

0xb968,	// (0x00022c6f) navi_text_pane_srt

0xe20b,	// (0x00025512) navi_navi_icon_text_pane_srt

0xe213,	// (0x0002551a) navi_navi_pane_srt_g1_ParamLimits

0xe213,	// (0x0002551a) navi_navi_pane_srt_g1

0xe225,	// (0x0002552c) navi_navi_pane_srt_g2_ParamLimits

0xe225,	// (0x0002552c) navi_navi_pane_srt_g2

0x0001,

0xf9e9,	// (0x00026cf0) navi_navi_pane_srt_g_ParamLimits

0xf9e9,	// (0x00026cf0) navi_navi_pane_srt_g

0xe237,	// (0x0002553e) navi_navi_tabs_pane_srt

0xe20b,	// (0x00025512) navi_navi_text_pane_srt

0xe20b,	// (0x00025512) navi_navi_volume_pane_srt

0xe1fc,	// (0x00025503) navi_navi_text_pane_srt_t1

0x5bb4,	// (0x0001cebb) navi_navi_volume_pane_srt_g1

0x5bbc,	// (0x0001cec3) volume_small_pane_srt_ParamLimits

0x5bbc,	// (0x0001cec3) volume_small_pane_srt

0x55c3,	// (0x0001c8ca) volume_small_pane_srt_g1_ParamLimits

0x55c3,	// (0x0001c8ca) volume_small_pane_srt_g1

0x55d3,	// (0x0001c8da) volume_small_pane_srt_g2_ParamLimits

0x55d3,	// (0x0001c8da) volume_small_pane_srt_g2

0x55e4,	// (0x0001c8eb) volume_small_pane_srt_g3_ParamLimits

0x55e4,	// (0x0001c8eb) volume_small_pane_srt_g3

0x55f5,	// (0x0001c8fc) volume_small_pane_srt_g4_ParamLimits

0x55f5,	// (0x0001c8fc) volume_small_pane_srt_g4

0x5606,	// (0x0001c90d) volume_small_pane_srt_g5_ParamLimits

0x5606,	// (0x0001c90d) volume_small_pane_srt_g5

0x5617,	// (0x0001c91e) volume_small_pane_srt_g6_ParamLimits

0x5617,	// (0x0001c91e) volume_small_pane_srt_g6

0x5628,	// (0x0001c92f) volume_small_pane_srt_g7_ParamLimits

0x5628,	// (0x0001c92f) volume_small_pane_srt_g7

0x5639,	// (0x0001c940) volume_small_pane_srt_g8_ParamLimits

0x5639,	// (0x0001c940) volume_small_pane_srt_g8

0x564a,	// (0x0001c951) volume_small_pane_srt_g9_ParamLimits

0x564a,	// (0x0001c951) volume_small_pane_srt_g9

0x565b,	// (0x0001c962) volume_small_pane_srt_g10_ParamLimits

0x565b,	// (0x0001c962) volume_small_pane_srt_g10

0x0009,

0xf79d,	// (0x00026aa4) volume_small_pane_srt_g_ParamLimits

0xf79d,	// (0x00026aa4) volume_small_pane_srt_g

0xbbec,	// (0x00022ef3) query_popup_data_pane_cp2

0xe1e2,	// (0x000254e9) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xe1e2,	// (0x000254e9) navi_navi_icon_text_pane_srt_t1

0xd6a4,	// (0x000249ab) navi_tabs_2_long_pane_srt

0xd6a4,	// (0x000249ab) navi_tabs_2_pane_srt

0xd6a4,	// (0x000249ab) navi_tabs_3_long_pane_srt

0xd6a4,	// (0x000249ab) navi_tabs_3_pane_srt

0xd6a4,	// (0x000249ab) navi_tabs_4_pane_srt

0x5b94,	// (0x0001ce9b) tabs_2_active_pane_srt_ParamLimits

0x5b94,	// (0x0001ce9b) tabs_2_active_pane_srt

0x5ba4,	// (0x0001ceab) tabs_2_passive_pane_srt_ParamLimits

0x5ba4,	// (0x0001ceab) tabs_2_passive_pane_srt

0xd008,	// (0x0002430f) bg_passive_tab_pane_cp1_srt_ParamLimits

0xd008,	// (0x0002430f) bg_passive_tab_pane_cp1_srt

0xe1c0,	// (0x000254c7) bg_passive_tab_pane_g1_cp1_srt

0xc662,	// (0x00023969) bg_passive_tab_pane_g2_cp1_srt

0xe1c9,	// (0x000254d0) bg_passive_tab_pane_g3_cp1_srt

0xb95a,	// (0x00022c61) bg_active_tab_pane_cp1_srt_ParamLimits

0xb95a,	// (0x00022c61) bg_active_tab_pane_cp1_srt

0xe1d2,	// (0x000254d9) tabs_2_active_pane_srt_g1

0x9b73,	// (0x00020e7a) tabs_2_active_pane_srt_t1_ParamLimits

0x9b73,	// (0x00020e7a) tabs_2_active_pane_srt_t1

0xe1c0,	// (0x000254c7) bg_active_tab_pane_g1_cp1_srt

0xc662,	// (0x00023969) bg_active_tab_pane_g2_cp1_srt

0xe1c9,	// (0x000254d0) bg_active_tab_pane_g3_cp1_srt

0x5b61,	// (0x0001ce68) tabs_3_active_pane_srt_ParamLimits

0x5b61,	// (0x0001ce68) tabs_3_active_pane_srt

0x5b72,	// (0x0001ce79) tabs_3_passive_pane_cp_srt_ParamLimits

0x5b72,	// (0x0001ce79) tabs_3_passive_pane_cp_srt

0x5b83,	// (0x0001ce8a) tabs_3_passive_pane_srt_ParamLimits

0x5b83,	// (0x0001ce8a) tabs_3_passive_pane_srt

0xd008,	// (0x0002430f) bg_passive_tab_pane_cp2_srt_ParamLimits

0xd008,	// (0x0002430f) bg_passive_tab_pane_cp2_srt

0xca73,	// (0x00023d7a) bg_passive_tab_pane_g1_cp2_srt

0xc662,	// (0x00023969) bg_passive_tab_pane_g2_cp2_srt

0xca7c,	// (0x00023d83) bg_passive_tab_pane_g3_cp2_srt

0xb95a,	// (0x00022c61) bg_active_tab_pane_cp2_srt_ParamLimits

0xb95a,	// (0x00022c61) bg_active_tab_pane_cp2_srt

0xe1b8,	// (0x000254bf) tabs_3_active_pane_srt_g1

0x9b5d,	// (0x00020e64) tabs_3_active_pane_srt_t1_ParamLimits

0x9b5d,	// (0x00020e64) tabs_3_active_pane_srt_t1

0xca73,	// (0x00023d7a) bg_active_tab_pane_g1_cp2_srt

0xc662,	// (0x00023969) bg_active_tab_pane_g2_cp2_srt

0xca7c,	// (0x00023d83) bg_active_tab_pane_g3_cp2_srt

0x5b19,	// (0x0001ce20) tabs_4_active_pane_srt_ParamLimits

0x5b19,	// (0x0001ce20) tabs_4_active_pane_srt

0x5b2b,	// (0x0001ce32) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5b2b,	// (0x0001ce32) tabs_4_passive_pane_cp2_srt

0xcba0,	// (0x00023ea7) aid_size_cell_toolbar

0xdc60,	// (0x00024f67) main_idle_act_pane_ParamLimits

0xcc6c,	// (0x00023f73) popup_large_graphic_colour_window_ParamLimits

0x90a0,	// (0x000203a7) popup_toolbar_window_ParamLimits

0x90a0,	// (0x000203a7) popup_toolbar_window

0xe0e4,	// (0x000253eb) list_single_graphic_2heading_pane_ParamLimits

0xe0e4,	// (0x000253eb) list_single_graphic_2heading_pane

0xc26b,	// (0x00023572) aid_size_cell_apps_grid_lsc_pane

0xc27d,	// (0x00023584) aid_size_cell_apps_grid_prt_pane

0xc0c1,	// (0x000233c8) bg_wml_button_pane_cp1_ParamLimits

0xc0c1,	// (0x000233c8) bg_wml_button_pane_cp1

0x95ec,	// (0x000208f3) form_midp_field_text_pane_t1_ParamLimits

0xd008,	// (0x0002430f) input_focus_pane_cp050_ParamLimits

0xd150,	// (0x00024457) list_midp_form_text_pane_ParamLimits

0xd12d,	// (0x00024434) input_focus_pane_cp051_ParamLimits

0xd141,	// (0x00024448) list_midp_choice_pane_ParamLimits

0x9587,	// (0x0002088e) list_single_2graphic_pane_cp3_ParamLimits

0x9587,	// (0x0002088e) list_single_2graphic_pane_cp3

0x959b,	// (0x000208a2) list_single_midp_graphic_pane_ParamLimits

0x959b,	// (0x000208a2) list_single_midp_graphic_pane

0x4554,	// (0x0001b85b) list_single_graphic_2heading_pane_g1_ParamLimits

0x4554,	// (0x0001b85b) list_single_graphic_2heading_pane_g1

0x4560,	// (0x0001b867) list_single_graphic_2heading_pane_g4_ParamLimits

0x4560,	// (0x0001b867) list_single_graphic_2heading_pane_g4

0x456c,	// (0x0001b873) list_single_graphic_2heading_pane_g5_ParamLimits

0x456c,	// (0x0001b873) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f0,	// (0x00026af7) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f0,	// (0x00026af7) list_single_graphic_2heading_pane_g

0x4578,	// (0x0001b87f) list_single_graphic_2heading_pane_t1_ParamLimits

0x4578,	// (0x0001b87f) list_single_graphic_2heading_pane_t1

0x458c,	// (0x0001b893) list_single_graphic_2heading_pane_t2_ParamLimits

0x458c,	// (0x0001b893) list_single_graphic_2heading_pane_t2

0x45a8,	// (0x0001b8af) list_single_graphic_2heading_pane_t3_ParamLimits

0x45a8,	// (0x0001b8af) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f7,	// (0x00026afe) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f7,	// (0x00026afe) list_single_graphic_2heading_pane_t

0xce56,	// (0x0002415d) bg_popup_sub_pane_cp2

0xce80,	// (0x00024187) grid_toobar_pane

0x57c1,	// (0x0001cac8) cell_toolbar_pane_ParamLimits

0x57c1,	// (0x0001cac8) cell_toolbar_pane

0xcebc,	// (0x000241c3) cell_toolbar_pane_g1_ParamLimits

0xcebc,	// (0x000241c3) cell_toolbar_pane_g1

0xced0,	// (0x000241d7) cell_toolbar_pane_g2_ParamLimits

0xced0,	// (0x000241d7) cell_toolbar_pane_g2

0x0001,

0xf805,	// (0x00026b0c) cell_toolbar_pane_g_ParamLimits

0xf805,	// (0x00026b0c) cell_toolbar_pane_g

0xcef2,	// (0x000241f9) grid_highlight_pane_cp2_ParamLimits

0xcef2,	// (0x000241f9) grid_highlight_pane_cp2

0xcf0c,	// (0x00024213) toolbar_button_pane

0xcf18,	// (0x0002421f) toolbar_button_pane_g1

0xcf20,	// (0x00024227) toolbar_button_pane_g2

0xcf28,	// (0x0002422f) toolbar_button_pane_g3

0xcf30,	// (0x00024237) toolbar_button_pane_g4

0xcf38,	// (0x0002423f) toolbar_button_pane_g5

0xcf40,	// (0x00024247) toolbar_button_pane_g6

0xcf48,	// (0x0002424f) toolbar_button_pane_g7

0xcf50,	// (0x00024257) toolbar_button_pane_g8

0xcf58,	// (0x0002425f) toolbar_button_pane_g9

0x0009,

0xf80a,	// (0x00026b11) toolbar_button_pane_g

0x57f9,	// (0x0001cb00) list_single_2graphic_pane_g1_cp3_ParamLimits

0x57f9,	// (0x0001cb00) list_single_2graphic_pane_g1_cp3

0x94e9,	// (0x000207f0) list_single_2graphic_pane_g2_cp3_ParamLimits

0x94e9,	// (0x000207f0) list_single_2graphic_pane_g2_cp3

0x5816,	// (0x0001cb1d) list_single_2graphic_pane_g3_cp3

0xcd29,	// (0x00024030) list_single_2graphic_pane_g4_cp3_ParamLimits

0xcd29,	// (0x00024030) list_single_2graphic_pane_g4_cp3

0x581e,	// (0x0001cb25) list_single_2graphic_pane_t1_cp3_ParamLimits

0x581e,	// (0x0001cb25) list_single_2graphic_pane_t1_cp3

0xcd35,	// (0x0002403c) list_single_midp_graphic_pane_g2_ParamLimits

0xcd35,	// (0x0002403c) list_single_midp_graphic_pane_g2

0xcba8,	// (0x00023eaf) aid_zoom_text_primary

0x4528,	// (0x0001b82f) aid_zoom_text_secondary

0xcb30,	// (0x00023e37) status_small_pane_g7_ParamLimits

0xcb30,	// (0x00023e37) status_small_pane_g7

0xcb53,	// (0x00023e5a) status_small_pane_t1_ParamLimits

0x8246,	// (0x0001f54d) title_pane_g2

0x0003,

0xf592,	// (0x00026899) title_pane_g

0x84ce,	// (0x0001f7d5) aid_size_cell_colour_1_pane_ParamLimits

0x84ce,	// (0x0001f7d5) aid_size_cell_colour_1_pane

0x84e2,	// (0x0001f7e9) aid_size_cell_colour_2_pane_ParamLimits

0x84e2,	// (0x0001f7e9) aid_size_cell_colour_2_pane

0x84f6,	// (0x0001f7fd) aid_size_cell_colour_3_pane_ParamLimits

0x84f6,	// (0x0001f7fd) aid_size_cell_colour_3_pane

0x850a,	// (0x0001f811) aid_size_cell_colour_4_pane_ParamLimits

0x850a,	// (0x0001f811) aid_size_cell_colour_4_pane

0x521f,	// (0x0001c526) title_pane_stacon_g1_ParamLimits

0x521f,	// (0x0001c526) title_pane_stacon_g1

0xd4c5,	// (0x000247cc) popup_note_wait_window_g3_ParamLimits

0xd4c5,	// (0x000247cc) popup_note_wait_window_g3

0xd53b,	// (0x00024842) popup_note_wait_window_t5_ParamLimits

0xd53b,	// (0x00024842) popup_note_wait_window_t5

0xb90c,	// (0x00022c13) main_feb_china_hwr_fs_writing_pane

0x8ad2,	// (0x0001fdd9) popup_feb_china_hwr_fs_window_ParamLimits

0x8ad2,	// (0x0001fdd9) popup_feb_china_hwr_fs_window

0x94fa,	// (0x00020801) aid_size_cell_hwr_fs_ParamLimits

0x94fa,	// (0x00020801) aid_size_cell_hwr_fs

0xd008,	// (0x0002430f) bg_popup_sub_pane_cp3_ParamLimits

0xd008,	// (0x0002430f) bg_popup_sub_pane_cp3

0x950f,	// (0x00020816) grid_hwr_fs_pane_ParamLimits

0x950f,	// (0x00020816) grid_hwr_fs_pane

0x587d,	// (0x0001cb84) linegrid_hwr_fs_pane_ParamLimits

0x587d,	// (0x0001cb84) linegrid_hwr_fs_pane

0x9527,	// (0x0002082e) cell_hwr_fs_pane_ParamLimits

0x9527,	// (0x0002082e) cell_hwr_fs_pane

0xd014,	// (0x0002431b) linegrid_hwr_fs_pane_g1_ParamLimits

0xd014,	// (0x0002431b) linegrid_hwr_fs_pane_g1

0x954d,	// (0x00020854) linegrid_hwr_fs_pane_g2_ParamLimits

0x954d,	// (0x00020854) linegrid_hwr_fs_pane_g2

0xd020,	// (0x00024327) linegrid_hwr_fs_pane_g3_ParamLimits

0xd020,	// (0x00024327) linegrid_hwr_fs_pane_g3

0x58af,	// (0x0001cbb6) linegrid_hwr_fs_pane_g4_ParamLimits

0x58af,	// (0x0001cbb6) linegrid_hwr_fs_pane_g4

0x58c9,	// (0x0001cbd0) linegrid_hwr_fs_pane_g5_ParamLimits

0x58c9,	// (0x0001cbd0) linegrid_hwr_fs_pane_g5

0x0004,

0xf830,	// (0x00026b37) linegrid_hwr_fs_pane_g_ParamLimits

0xf830,	// (0x00026b37) linegrid_hwr_fs_pane_g

0xd02c,	// (0x00024333) cell_hwr_fs_pane_g1_ParamLimits

0xd02c,	// (0x00024333) cell_hwr_fs_pane_g1

0xce22,	// (0x00024129) cell_hwr_fs_pane_g2_ParamLimits

0xce22,	// (0x00024129) cell_hwr_fs_pane_g2

0x955f,	// (0x00020866) cell_hwr_fs_pane_g3_ParamLimits

0x955f,	// (0x00020866) cell_hwr_fs_pane_g3

0x956c,	// (0x00020873) cell_hwr_fs_pane_g4_ParamLimits

0x956c,	// (0x00020873) cell_hwr_fs_pane_g4

0x0003,

0xf83b,	// (0x00026b42) cell_hwr_fs_pane_g_ParamLimits

0xf83b,	// (0x00026b42) cell_hwr_fs_pane_g

0x9579,	// (0x00020880) cell_hwr_fs_pane_t1

0xb90c,	// (0x00022c13) grid_highlight_pane_cp6

0xb90c,	// (0x00022c13) main_idle_act2_pane

0xc06f,	// (0x00023376) aid_inside_area_popup_secondary

0x97a4,	// (0x00020aab) aid_inside_area_window_primary_ParamLimits

0x97a4,	// (0x00020aab) aid_inside_area_window_primary

0xe2fb,	// (0x00025602) ai2_news_ticker_pane

0xe303,	// (0x0002560a) aid_size_cell_ai1_link_ParamLimits

0xe303,	// (0x0002560a) aid_size_cell_ai1_link

0x9b89,	// (0x00020e90) popup_ai2_data_window_ParamLimits

0x9b89,	// (0x00020e90) popup_ai2_data_window

0xe31d,	// (0x00025624) popup_ai2_link_window_ParamLimits

0xe31d,	// (0x00025624) popup_ai2_link_window

0xd008,	// (0x0002430f) bg_popup_sub_pane_cp4_ParamLimits

0xd008,	// (0x0002430f) bg_popup_sub_pane_cp4

0xe331,	// (0x00025638) grid_ai2_link_pane_ParamLimits

0xe331,	// (0x00025638) grid_ai2_link_pane

0xe348,	// (0x0002564f) popup_ai2_link_window_g1_ParamLimits

0xe348,	// (0x0002564f) popup_ai2_link_window_g1

0xe354,	// (0x0002565b) popup_ai2_link_window_g2_ParamLimits

0xe354,	// (0x0002565b) popup_ai2_link_window_g2

0x0001,

0xfa07,	// (0x00026d0e) popup_ai2_link_window_g_ParamLimits

0xfa07,	// (0x00026d0e) popup_ai2_link_window_g

0xe363,	// (0x0002566a) ai2_mp_button_pane

0xe36b,	// (0x00025672) ai2_mp_volume_pane

0xd12d,	// (0x00024434) bg_popup_sub_pane_cp5_ParamLimits

0xd12d,	// (0x00024434) bg_popup_sub_pane_cp5

0xe373,	// (0x0002567a) heading_ai2_gene_pane_ParamLimits

0xe373,	// (0x0002567a) heading_ai2_gene_pane

0xe37f,	// (0x00025686) list_ai2_gene_pane_ParamLimits

0xe37f,	// (0x00025686) list_ai2_gene_pane

0xe3c7,	// (0x000256ce) cell_ai2_link_pane_ParamLimits

0xe3c7,	// (0x000256ce) cell_ai2_link_pane

0xe3dd,	// (0x000256e4) cell_ai2_link_pane_g1

0xb90c,	// (0x00022c13) grid_highlight_pane_cp7

0x5bd1,	// (0x0001ced8) ai2_mp_volume_pane_g1

0xe47a,	// (0x00025781) ai2_mp_volume_pane_g2

0x9bb3,	// (0x00020eba) list_ai2_gene_pane_t1

0xe482,	// (0x00025789) ai2_mp_volume_pane_g3

0x0002,

0xfa20,	// (0x00026d27) ai2_mp_volume_pane_g

0x5bd9,	// (0x0001cee0) volume_small_pane_cp3

0xe48a,	// (0x00025791) aid_size_cell_ai2_button

0xe492,	// (0x00025799) grid_ai2_button_pane

0xe49b,	// (0x000257a2) cell_ai2_button_pane_ParamLimits

0xe49b,	// (0x000257a2) cell_ai2_button_pane

0xb902,	// (0x00022c09) cell_ai2_button_pane_g1

0xb90c,	// (0x00022c13) grid_highlight_pane_cp8

0xe43a,	// (0x00025741) ai2_gene_pane_t1_ParamLimits

0xe43a,	// (0x00025741) ai2_gene_pane_t1

0x8a48,	// (0x0001fd4f) aid_height_parent_landscape

0x991c,	// (0x00020c23) aid_height_set_list

0xdc60,	// (0x00024f67) aid_size_parent

0xe166,	// (0x0002546d) aid_size_cell_graphic_pane_ParamLimits

0xe38f,	// (0x00025696) popup_ai2_data_window_g1_ParamLimits

0xe38f,	// (0x00025696) popup_ai2_data_window_g1

0xe39b,	// (0x000256a2) ai2_news_ticker_pane_g1

0xe3a3,	// (0x000256aa) ai2_news_ticker_pane_g2

0x0001,

0xfa0c,	// (0x00026d13) ai2_news_ticker_pane_g

0xe3ab,	// (0x000256b2) ai2_news_ticker_pane_t1

0xe3b9,	// (0x000256c0) ai2_news_ticker_pane_t2

0x0001,

0xfa11,	// (0x00026d18) ai2_news_ticker_pane_t

0xe3e6,	// (0x000256ed) heading_ai2_gene_pane_g1

0xe3ee,	// (0x000256f5) heading_ai2_gene_pane_t1_ParamLimits

0xe3ee,	// (0x000256f5) heading_ai2_gene_pane_t1

0xe403,	// (0x0002570a) list_highlight_pane_cp6

0x9b9d,	// (0x00020ea4) ai2_gene_pane_ParamLimits

0x9b9d,	// (0x00020ea4) ai2_gene_pane

0x9bc1,	// (0x00020ec8) list_ai2_gene_pane_t2

0x0001,

0xfa16,	// (0x00026d1d) list_ai2_gene_pane_t

0xe40b,	// (0x00025712) list_highlight_pane_cp8_ParamLimits

0xe40b,	// (0x00025712) list_highlight_pane_cp8

0xe41c,	// (0x00025723) ai2_gene_pane_g1_ParamLimits

0xe41c,	// (0x00025723) ai2_gene_pane_g1

0xe42e,	// (0x00025735) ai2_gene_pane_g2_ParamLimits

0xe42e,	// (0x00025735) ai2_gene_pane_g2

0x0001,

0xfa1b,	// (0x00026d22) ai2_gene_pane_g_ParamLimits

0xfa1b,	// (0x00026d22) ai2_gene_pane_g

0xbeff,	// (0x00023206) scroll_pane_cp12

0x8a05,	// (0x0001fd0c) control_pane_t3_ParamLimits

0x8a05,	// (0x0001fd0c) control_pane_t3

0xcb44,	// (0x00023e4b) status_small_pane_g8_ParamLimits

0xcb44,	// (0x00023e4b) status_small_pane_g8

0x8b67,	// (0x0001fe6e) popup_find_window_ParamLimits

0x8dd6,	// (0x000200dd) popup_note_image_window_ParamLimits

0x4554,	// (0x0001b85b) list_double2_graphic_pane_vc_g1_ParamLimits

0x4554,	// (0x0001b85b) list_double2_graphic_pane_vc_g1

0x45c0,	// (0x0001b8c7) list_double2_graphic_pane_vc_g2_ParamLimits

0x45c0,	// (0x0001b8c7) list_double2_graphic_pane_vc_g2

0x45cc,	// (0x0001b8d3) list_double2_graphic_pane_vc_g3_ParamLimits

0x45cc,	// (0x0001b8d3) list_double2_graphic_pane_vc_g3

0x0002,

0xf7fe,	// (0x00026b05) list_double2_graphic_pane_vc_g_ParamLimits

0xf7fe,	// (0x00026b05) list_double2_graphic_pane_vc_g

0x45d8,	// (0x0001b8df) list_double2_graphic_pane_vc_t1_ParamLimits

0x45d8,	// (0x0001b8df) list_double2_graphic_pane_vc_t1

0x4560,	// (0x0001b867) list_single_heading_pane_vc_g1_ParamLimits

0x4560,	// (0x0001b867) list_single_heading_pane_vc_g1

0x456c,	// (0x0001b873) list_single_heading_pane_vc_g2_ParamLimits

0x456c,	// (0x0001b873) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x00026913) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x00026913) list_single_heading_pane_vc_g

0x45ee,	// (0x0001b8f5) list_single_heading_pane_vc_t1_ParamLimits

0x45ee,	// (0x0001b8f5) list_single_heading_pane_vc_t1

0x4604,	// (0x0001b90b) list_single_heading_pane_vc_t2_ParamLimits

0x4604,	// (0x0001b90b) list_single_heading_pane_vc_t2

0x0001,

0xf81f,	// (0x00026b26) list_single_heading_pane_vc_t_ParamLimits

0xf81f,	// (0x00026b26) list_single_heading_pane_vc_t

0xcf60,	// (0x00024267) list_setting_number_pane_vc_g1_ParamLimits

0xcf60,	// (0x00024267) list_setting_number_pane_vc_g1

0xcf6c,	// (0x00024273) list_setting_number_pane_vc_g2_ParamLimits

0xcf6c,	// (0x00024273) list_setting_number_pane_vc_g2

0x0001,

0xf824,	// (0x00026b2b) list_setting_number_pane_vc_g_ParamLimits

0xf824,	// (0x00026b2b) list_setting_number_pane_vc_g

0xcf78,	// (0x0002427f) list_setting_number_pane_vc_t1_ParamLimits

0xcf78,	// (0x0002427f) list_setting_number_pane_vc_t1

0xcf8c,	// (0x00024293) list_setting_number_pane_vc_t2_ParamLimits

0xcf8c,	// (0x00024293) list_setting_number_pane_vc_t2

0xcfa8,	// (0x000242af) list_setting_number_pane_vc_t3_ParamLimits

0xcfa8,	// (0x000242af) list_setting_number_pane_vc_t3

0x0002,

0xf829,	// (0x00026b30) list_setting_number_pane_vc_t_ParamLimits

0xf829,	// (0x00026b30) list_setting_number_pane_vc_t

0xcfce,	// (0x000242d5) set_value_pane_vc_ParamLimits

0xcfce,	// (0x000242d5) set_value_pane_vc

0xe0e4,	// (0x000253eb) list_double2_graphic_pane_vc_ParamLimits

0xe0e4,	// (0x000253eb) list_double2_graphic_pane_vc

0xe0e4,	// (0x000253eb) list_double2_large_graphic_pane_vc_ParamLimits

0xe0e4,	// (0x000253eb) list_double2_large_graphic_pane_vc

0xe0e4,	// (0x000253eb) list_double2_pane_vc_ParamLimits

0xe0e4,	// (0x000253eb) list_double2_pane_vc

0xe0e4,	// (0x000253eb) list_double_graphic_heading_pane_vc_ParamLimits

0xe0e4,	// (0x000253eb) list_double_graphic_heading_pane_vc

0xe0e4,	// (0x000253eb) list_double_graphic_pane_vc_ParamLimits

0xe0e4,	// (0x000253eb) list_double_graphic_pane_vc

0xe0e4,	// (0x000253eb) list_double_heading_pane_vc_ParamLimits

0xe0e4,	// (0x000253eb) list_double_heading_pane_vc

0xe0e4,	// (0x000253eb) list_double_large_graphic_pane_vc_ParamLimits

0xe0e4,	// (0x000253eb) list_double_large_graphic_pane_vc

0xe0e4,	// (0x000253eb) list_double_number_pane_vc_ParamLimits

0xe0e4,	// (0x000253eb) list_double_number_pane_vc

0xe0e4,	// (0x000253eb) list_double_pane_vc_ParamLimits

0xe0e4,	// (0x000253eb) list_double_pane_vc

0xe0e4,	// (0x000253eb) list_double_time_pane_vc_ParamLimits

0xe0e4,	// (0x000253eb) list_double_time_pane_vc

0xe0e4,	// (0x000253eb) list_setting_number_pane_vc_ParamLimits

0xe0e4,	// (0x000253eb) list_setting_number_pane_vc

0xe0e4,	// (0x000253eb) list_setting_pane_vc_ParamLimits

0xe0e4,	// (0x000253eb) list_setting_pane_vc

0xe0e4,	// (0x000253eb) list_single_graphic_heading_pane_vc_ParamLimits

0xe0e4,	// (0x000253eb) list_single_graphic_heading_pane_vc

0xe0e4,	// (0x000253eb) list_single_heading_pane_vc_ParamLimits

0xe0e4,	// (0x000253eb) list_single_heading_pane_vc

0xe0e4,	// (0x000253eb) list_single_number_heading_pane_vc_ParamLimits

0xe0e4,	// (0x000253eb) list_single_number_heading_pane_vc

0x477d,	// (0x0001ba84) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x477d,	// (0x0001ba84) list_double_graphic_heading_pane_vc_g1

0x4560,	// (0x0001b867) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4560,	// (0x0001b867) list_double_graphic_heading_pane_vc_g2

0x456c,	// (0x0001b873) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x456c,	// (0x0001b873) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa27,	// (0x00026d2e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa27,	// (0x00026d2e) list_double_graphic_heading_pane_vc_g

0x4789,	// (0x0001ba90) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4789,	// (0x0001ba90) list_double_graphic_heading_pane_vc_t1

0x45ee,	// (0x0001b8f5) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x45ee,	// (0x0001b8f5) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa2e,	// (0x00026d35) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa2e,	// (0x00026d35) list_double_graphic_heading_pane_vc_t

0xcf60,	// (0x00024267) list_setting_pane_vc_g1_ParamLimits

0xcf60,	// (0x00024267) list_setting_pane_vc_g1

0xcf6c,	// (0x00024273) list_setting_pane_vc_g2_ParamLimits

0xcf6c,	// (0x00024273) list_setting_pane_vc_g2

0x0001,

0xf824,	// (0x00026b2b) list_setting_pane_vc_g_ParamLimits

0xf824,	// (0x00026b2b) list_setting_pane_vc_g

0xe6b1,	// (0x000259b8) list_setting_pane_vc_t1_ParamLimits

0xe6b1,	// (0x000259b8) list_setting_pane_vc_t1

0xe6c5,	// (0x000259cc) list_setting_pane_vc_t2_ParamLimits

0xe6c5,	// (0x000259cc) list_setting_pane_vc_t2

0x0001,

0xfa71,	// (0x00026d78) list_setting_pane_vc_t_ParamLimits

0xfa71,	// (0x00026d78) list_setting_pane_vc_t

0xcfce,	// (0x000242d5) set_value_pane_cp_vc_ParamLimits

0xcfce,	// (0x000242d5) set_value_pane_cp_vc

0x4560,	// (0x0001b867) list_single_number_heading_pane_vc_g1_ParamLimits

0x4560,	// (0x0001b867) list_single_number_heading_pane_vc_g1

0x456c,	// (0x0001b873) list_single_number_heading_pane_vc_g2_ParamLimits

0x456c,	// (0x0001b873) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x00026913) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x00026913) list_single_number_heading_pane_vc_g

0x45ee,	// (0x0001b8f5) list_single_number_heading_pane_vc_t1_ParamLimits

0x45ee,	// (0x0001b8f5) list_single_number_heading_pane_vc_t1

0x479d,	// (0x0001baa4) list_single_number_heading_pane_vc_t2_ParamLimits

0x479d,	// (0x0001baa4) list_single_number_heading_pane_vc_t2

0x47b1,	// (0x0001bab8) list_single_number_heading_pane_vc_t3_ParamLimits

0x47b1,	// (0x0001bab8) list_single_number_heading_pane_vc_t3

0x0002,

0xfa76,	// (0x00026d7d) list_single_number_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x00026d7d) list_single_number_heading_pane_vc_t

0x4554,	// (0x0001b85b) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4554,	// (0x0001b85b) list_single_graphic_heading_pane_vc_g1

0x4560,	// (0x0001b867) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4560,	// (0x0001b867) list_single_graphic_heading_pane_vc_g4

0x456c,	// (0x0001b873) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x456c,	// (0x0001b873) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7f0,	// (0x00026af7) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7f0,	// (0x00026af7) list_single_graphic_heading_pane_vc_g

0x45ee,	// (0x0001b8f5) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x45ee,	// (0x0001b8f5) list_single_graphic_heading_pane_vc_t1

0x47c3,	// (0x0001baca) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x47c3,	// (0x0001baca) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa7d,	// (0x00026d84) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa7d,	// (0x00026d84) list_single_graphic_heading_pane_vc_t

0x4560,	// (0x0001b867) list_double2_pane_vc_g1_ParamLimits

0x4560,	// (0x0001b867) list_double2_pane_vc_g1

0x456c,	// (0x0001b873) list_double2_pane_vc_g2_ParamLimits

0x456c,	// (0x0001b873) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x00026913) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x00026913) list_double2_pane_vc_g

0x47d7,	// (0x0001bade) list_double2_pane_vc_t1_ParamLimits

0x47d7,	// (0x0001bade) list_double2_pane_vc_t1

0x47ed,	// (0x0001baf4) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x47ed,	// (0x0001baf4) list_double2_large_graphic_pane_vc_g1

0x4560,	// (0x0001b867) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4560,	// (0x0001b867) list_double2_large_graphic_pane_vc_g2

0x456c,	// (0x0001b873) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x456c,	// (0x0001b873) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf629,	// (0x00026930) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf629,	// (0x00026930) list_double2_large_graphic_pane_vc_g

0x47f9,	// (0x0001bb00) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x47f9,	// (0x0001bb00) list_double2_large_graphic_pane_vc_t1

0x480f,	// (0x0001bb16) list_double_time_pane_vc_g1_ParamLimits

0x480f,	// (0x0001bb16) list_double_time_pane_vc_g1

0x481b,	// (0x0001bb22) list_double_time_pane_vc_g2_ParamLimits

0x481b,	// (0x0001bb22) list_double_time_pane_vc_g2

0x0001,

0xfa82,	// (0x00026d89) list_double_time_pane_vc_g_ParamLimits

0xfa82,	// (0x00026d89) list_double_time_pane_vc_g

0x4827,	// (0x0001bb2e) list_double_time_pane_vc_t1_ParamLimits

0x4827,	// (0x0001bb2e) list_double_time_pane_vc_t1

0x4840,	// (0x0001bb47) list_double_time_pane_vc_t2_ParamLimits

0x4840,	// (0x0001bb47) list_double_time_pane_vc_t2

0x487b,	// (0x0001bb82) list_double_time_pane_vc_t3_ParamLimits

0x487b,	// (0x0001bb82) list_double_time_pane_vc_t3

0x4893,	// (0x0001bb9a) list_double_time_pane_vc_t4_ParamLimits

0x4893,	// (0x0001bb9a) list_double_time_pane_vc_t4

0x0003,

0xfa87,	// (0x00026d8e) list_double_time_pane_vc_t_ParamLimits

0xfa87,	// (0x00026d8e) list_double_time_pane_vc_t

0x4560,	// (0x0001b867) list_double_pane_vc_g1_ParamLimits

0x4560,	// (0x0001b867) list_double_pane_vc_g1

0x456c,	// (0x0001b873) list_double_pane_vc_g2_ParamLimits

0x456c,	// (0x0001b873) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x00026913) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x00026913) list_double_pane_vc_g

0x48a7,	// (0x0001bbae) list_double_pane_vc_t1_ParamLimits

0x48a7,	// (0x0001bbae) list_double_pane_vc_t1

0x48b9,	// (0x0001bbc0) list_double_pane_vc_t2_ParamLimits

0x48b9,	// (0x0001bbc0) list_double_pane_vc_t2

0x0001,

0xfa90,	// (0x00026d97) list_double_pane_vc_t_ParamLimits

0xfa90,	// (0x00026d97) list_double_pane_vc_t

0x4560,	// (0x0001b867) list_double_number_pane_vc_g1_ParamLimits

0x4560,	// (0x0001b867) list_double_number_pane_vc_g1

0x456c,	// (0x0001b873) list_double_number_pane_vc_g2_ParamLimits

0x456c,	// (0x0001b873) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x00026913) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x00026913) list_double_number_pane_vc_g

0x48d1,	// (0x0001bbd8) list_double_number_pane_vc_t1_ParamLimits

0x48d1,	// (0x0001bbd8) list_double_number_pane_vc_t1

0x48e5,	// (0x0001bbec) list_double_number_pane_vc_t2_ParamLimits

0x48e5,	// (0x0001bbec) list_double_number_pane_vc_t2

0x48b9,	// (0x0001bbc0) list_double_number_pane_vc_t3_ParamLimits

0x48b9,	// (0x0001bbc0) list_double_number_pane_vc_t3

0x0002,

0xfa95,	// (0x00026d9c) list_double_number_pane_vc_t_ParamLimits

0xfa95,	// (0x00026d9c) list_double_number_pane_vc_t

0x48f7,	// (0x0001bbfe) list_double_large_graphic_pane_vc_g1_ParamLimits

0x48f7,	// (0x0001bbfe) list_double_large_graphic_pane_vc_g1

0x4903,	// (0x0001bc0a) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4903,	// (0x0001bc0a) list_double_large_graphic_pane_vc_g2

0x456c,	// (0x0001b873) list_double_large_graphic_pane_vc_g3_ParamLimits

0x456c,	// (0x0001b873) list_double_large_graphic_pane_vc_g3

0x4912,	// (0x0001bc19) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4912,	// (0x0001bc19) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa9c,	// (0x00026da3) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa9c,	// (0x00026da3) list_double_large_graphic_pane_vc_g

0x491e,	// (0x0001bc25) list_double_large_graphic_pane_vc_t1_ParamLimits

0x491e,	// (0x0001bc25) list_double_large_graphic_pane_vc_t1

0x4930,	// (0x0001bc37) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4930,	// (0x0001bc37) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa5,	// (0x00026dac) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa5,	// (0x00026dac) list_double_large_graphic_pane_vc_t

0x4560,	// (0x0001b867) list_double_heading_pane_vc_g1_ParamLimits

0x4560,	// (0x0001b867) list_double_heading_pane_vc_g1

0x456c,	// (0x0001b873) list_double_heading_pane_vc_g2_ParamLimits

0x456c,	// (0x0001b873) list_double_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x00026913) list_double_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x00026913) list_double_heading_pane_vc_g

0x4949,	// (0x0001bc50) list_double_heading_pane_vc_t1_ParamLimits

0x4949,	// (0x0001bc50) list_double_heading_pane_vc_t1

0x45ee,	// (0x0001b8f5) list_double_heading_pane_vc_t2_ParamLimits

0x45ee,	// (0x0001b8f5) list_double_heading_pane_vc_t2

0x0001,

0xfaaa,	// (0x00026db1) list_double_heading_pane_vc_t_ParamLimits

0xfaaa,	// (0x00026db1) list_double_heading_pane_vc_t

0x495d,	// (0x0001bc64) list_double_graphic_pane_vc_g1_ParamLimits

0x495d,	// (0x0001bc64) list_double_graphic_pane_vc_g1

0x496d,	// (0x0001bc74) list_double_graphic_pane_vc_g2_ParamLimits

0x496d,	// (0x0001bc74) list_double_graphic_pane_vc_g2

0x497c,	// (0x0001bc83) list_double_graphic_pane_vc_g3_ParamLimits

0x497c,	// (0x0001bc83) list_double_graphic_pane_vc_g3

0x0002,

0xfaaf,	// (0x00026db6) list_double_graphic_pane_vc_g_ParamLimits

0xfaaf,	// (0x00026db6) list_double_graphic_pane_vc_g

0x4988,	// (0x0001bc8f) list_double_graphic_pane_vc_t1_ParamLimits

0x4988,	// (0x0001bc8f) list_double_graphic_pane_vc_t1

0x48b9,	// (0x0001bbc0) list_double_graphic_pane_vc_t2_ParamLimits

0x48b9,	// (0x0001bbc0) list_double_graphic_pane_vc_t2

0x0001,

0xfab6,	// (0x00026dbd) list_double_graphic_pane_vc_t_ParamLimits

0xfab6,	// (0x00026dbd) list_double_graphic_pane_vc_t

0x4d85,	// (0x0001c08c) aid_size_cell_fastswap

0x8094,	// (0x0001f39b) aid_size_cell_touch_ParamLimits

0x8094,	// (0x0001f39b) aid_size_cell_touch

0x4fe8,	// (0x0001c2ef) popup_fast_swap_wide_window_ParamLimits

0x4fe8,	// (0x0001c2ef) popup_fast_swap_wide_window

0x81df,	// (0x0001f4e6) touch_pane_ParamLimits

0x81df,	// (0x0001f4e6) touch_pane

0xbf55,	// (0x0002325c) button_value_adjust_pane_cp2

0x424c,	// (0x0001b553) button_value_adjust_pane_cp4

0x426c,	// (0x0001b573) form_field_data_pane_cp2

0x7c7b,	// (0x0001ef82) form_field_data_wide_pane_cp2

0xc2b4,	// (0x000235bb) bg_scroll_pane_ParamLimits

0x5382,	// (0x0001c689) scroll_handle_pane_ParamLimits

0x5396,	// (0x0001c69d) scroll_sc2_down_pane_ParamLimits

0x5396,	// (0x0001c69d) scroll_sc2_down_pane

0xc2e5,	// (0x000235ec) scroll_sc2_up_pane_ParamLimits

0xc2e5,	// (0x000235ec) scroll_sc2_up_pane

0x9cec,	// (0x00020ff3) grid_wheel_folder_pane_g1_ParamLimits

0x9cec,	// (0x00020ff3) grid_wheel_folder_pane_g1

0x555b,	// (0x0001c862) clock_nsta_pane_cp2_ParamLimits

0x555b,	// (0x0001c862) clock_nsta_pane_cp2

0x881f,	// (0x0001fb26) listscroll_midp_pane_ParamLimits

0x8830,	// (0x0001fb37) midp_canvas_pane

0xcb98,	// (0x00023e9f) nsta_clock_indic_pane

0xcbd0,	// (0x00023ed7) listscroll_form_pane_vc

0xcbd8,	// (0x00023edf) listscroll_set_pane_vc_ParamLimits

0xcbd8,	// (0x00023edf) listscroll_set_pane_vc

0x91fd,	// (0x00020504) clock_nsta_pane

0x9227,	// (0x0002052e) indicator_nsta_pane

0xce56,	// (0x0002415d) bg_popup_sub_pane_cp2_ParamLimits

0xce6a,	// (0x00024171) find_pane_cp2_ParamLimits

0xce6a,	// (0x00024171) find_pane_cp2

0xce80,	// (0x00024187) grid_toobar_pane_ParamLimits

0xcfdc,	// (0x000242e3) list_form_gen_pane_vc_ParamLimits

0xcfdc,	// (0x000242e3) list_form_gen_pane_vc

0xcff2,	// (0x000242f9) scroll_pane_cp8_vc_ParamLimits

0xcff2,	// (0x000242f9) scroll_pane_cp8_vc

0xd042,	// (0x00024349) data_form_wide_pane_vc_ParamLimits

0xd042,	// (0x00024349) data_form_wide_pane_vc

0xd04e,	// (0x00024355) form_field_data_wide_pane_vc_g1

0xd056,	// (0x0002435d) form_field_data_wide_pane_vc_t1_ParamLimits

0xd056,	// (0x0002435d) form_field_data_wide_pane_vc_t1

0xbf69,	// (0x00023270) input_focus_pane_cp6_vc_ParamLimits

0xbf69,	// (0x00023270) input_focus_pane_cp6_vc

0x960e,	// (0x00020915) list_midp_pane_ParamLimits

0xdc72,	// (0x00024f79) scroll_pane_cp16_ParamLimits

0xdc72,	// (0x00024f79) scroll_pane_cp16

0xd2bd,	// (0x000245c4) button_value_adjust_pane_ParamLimits

0xd2bd,	// (0x000245c4) button_value_adjust_pane

0x992d,	// (0x00020c34) button_value_adjust_pane_cp6_ParamLimits

0x992d,	// (0x00020c34) button_value_adjust_pane_cp6

0x9a47,	// (0x00020d4e) settings_code_pane_cp_ParamLimits

0x9a47,	// (0x00020d4e) settings_code_pane_cp

0xb902,	// (0x00022c09) cell_touch_pane_g1

0xb902,	// (0x00022c09) cell_touch_pane_g2

0x0001,

0xf747,	// (0x00026a4e) cell_touch_pane_g

0x9bcf,	// (0x00020ed6) cell_touch_pane_cp_ParamLimits

0x9bcf,	// (0x00020ed6) cell_touch_pane_cp

0x9beb,	// (0x00020ef2) cell_touch_pane_ParamLimits

0x9beb,	// (0x00020ef2) cell_touch_pane

0xb902,	// (0x00022c09) scroll_sc2_down_pane_g1

0xb902,	// (0x00022c09) scroll_sc2_up_pane_g1

0xb90c,	// (0x00022c13) bg_set_opt_pane_cp4_vc

0xe4ad,	// (0x000257b4) list_set_graphic_pane_vc_g1_ParamLimits

0xe4ad,	// (0x000257b4) list_set_graphic_pane_vc_g1

0xe4b9,	// (0x000257c0) list_set_graphic_pane_vc_g2_ParamLimits

0xe4b9,	// (0x000257c0) list_set_graphic_pane_vc_g2

0x0001,

0xfa33,	// (0x00026d3a) list_set_graphic_pane_vc_g_ParamLimits

0xfa33,	// (0x00026d3a) list_set_graphic_pane_vc_g

0xe4c5,	// (0x000257cc) text_primary_small_cp13_vc_ParamLimits

0xe4c5,	// (0x000257cc) text_primary_small_cp13_vc

0xe4dd,	// (0x000257e4) list_set_graphic_pane_vc_ParamLimits

0xe4dd,	// (0x000257e4) list_set_graphic_pane_vc

0xb90c,	// (0x00022c13) input_focus_pane_cp2_vc

0xb902,	// (0x00022c09) setting_code_pane_vc_g1

0xe4f1,	// (0x000257f8) setting_code_pane_vc_t1

0xe4ff,	// (0x00025806) set_text_pane_vc_t1_ParamLimits

0xe4ff,	// (0x00025806) set_text_pane_vc_t1

0xb90c,	// (0x00022c13) input_focus_pane_cp1_vc

0xe51a,	// (0x00025821) list_set_text_pane_vc

0xb902,	// (0x00022c09) setting_text_pane_vc_g1

0xb90c,	// (0x00022c13) bg_set_opt_pane_cp2_vc

0xe524,	// (0x0002582b) setting_slider_graphic_pane_vc_g1

0xe52c,	// (0x00025833) setting_slider_graphic_pane_vc_t1

0xe53a,	// (0x00025841) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa38,	// (0x00026d3f) setting_slider_graphic_pane_vc_t

0xe548,	// (0x0002584f) slider_set_pane_cp_vc

0xe550,	// (0x00025857) slider_set_pane_vc_g1

0xe559,	// (0x00025860) slider_set_pane_vc_g2

0x0006,

0xfa3d,	// (0x00026d44) slider_set_pane_vc_g

0xbfd0,	// (0x000232d7) set_opt_bg_pane_g1_copy1

0xbfd8,	// (0x000232df) set_opt_bg_pane_g2_copy1

0xe585,	// (0x0002588c) set_opt_bg_pane_g3_copy1

0xbfe8,	// (0x000232ef) set_opt_bg_pane_g4_copy1

0xbff0,	// (0x000232f7) set_opt_bg_pane_g5_copy1

0xbff8,	// (0x000232ff) set_opt_bg_pane_g6_copy1

0xe58f,	// (0x00025896) set_opt_bg_pane_g7_copy1

0xe597,	// (0x0002589e) set_opt_bg_pane_g8_copy1

0xe5a1,	// (0x000258a8) set_opt_bg_pane_g9_copy1

0xb90c,	// (0x00022c13) bg_set_opt_pane_cp_vc

0xe5ab,	// (0x000258b2) setting_slider_pane_vc_t1

0xe52c,	// (0x00025833) setting_slider_pane_vc_t2

0xe53a,	// (0x00025841) setting_slider_pane_vc_t3

0x0002,

0xfa4c,	// (0x00026d53) setting_slider_pane_vc_t

0xe548,	// (0x0002584f) slider_set_pane_vc

0x58ed,	// (0x0001cbf4) volume_set_pane_vc_g1

0x58f6,	// (0x0001cbfd) volume_set_pane_vc_g2

0x58ff,	// (0x0001cc06) volume_set_pane_vc_g3

0x5908,	// (0x0001cc0f) volume_set_pane_vc_g4

0x5911,	// (0x0001cc18) volume_set_pane_vc_g5

0x591a,	// (0x0001cc21) volume_set_pane_vc_g6

0x5923,	// (0x0001cc2a) volume_set_pane_vc_g7

0x592c,	// (0x0001cc33) volume_set_pane_vc_g8

0x5935,	// (0x0001cc3c) volume_set_pane_vc_g9

0x593e,	// (0x0001cc45) volume_set_pane_vc_g10

0x0009,

0xfa53,	// (0x00026d5a) volume_set_pane_vc_g

0xe5ba,	// (0x000258c1) volume_set_pane_vc

0xe5c2,	// (0x000258c9) button_value_adjust_pane_cp1_vc

0xe5cc,	// (0x000258d3) list_highlight_pane_cp2_vc

0xe5d5,	// (0x000258dc) list_set_pane_vc_ParamLimits

0xe5d5,	// (0x000258dc) list_set_pane_vc

0xe63f,	// (0x00025946) main_pane_set_vc_t1_ParamLimits

0xe63f,	// (0x00025946) main_pane_set_vc_t1

0xe654,	// (0x0002595b) main_pane_set_vc_t2_ParamLimits

0xe654,	// (0x0002595b) main_pane_set_vc_t2

0xe666,	// (0x0002596d) main_pane_set_vc_t3_ParamLimits

0xe666,	// (0x0002596d) main_pane_set_vc_t3

0xe67a,	// (0x00025981) main_pane_set_vc_t4_ParamLimits

0xe67a,	// (0x00025981) main_pane_set_vc_t4

0x0003,

0xfa68,	// (0x00026d6f) main_pane_set_vc_t_ParamLimits

0xfa68,	// (0x00026d6f) main_pane_set_vc_t

0xe68e,	// (0x00025995) setting_code_pane_vc_ParamLimits

0xe68e,	// (0x00025995) setting_code_pane_vc

0xe69f,	// (0x000259a6) setting_slider_graphic_pane_vc

0xe69f,	// (0x000259a6) setting_slider_pane_vc

0xe69f,	// (0x000259a6) setting_text_pane_vc

0xe69f,	// (0x000259a6) setting_volume_pane_vc

0xe6a9,	// (0x000259b0) scroll_pane_cp121_vc

0xbf43,	// (0x0002324a) set_content_pane_vc

0xe6e7,	// (0x000259ee) button_value_adjust_pane_g1

0xe6f0,	// (0x000259f7) button_value_adjust_pane_g2

0x0001,

0xfabb,	// (0x00026dc2) button_value_adjust_pane_g

0xe6f9,	// (0x00025a00) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe6f9,	// (0x00025a00) form_field_slider_wide_pane_vc_t1

0xe70d,	// (0x00025a14) form_field_slider_wide_pane_vc_t2_ParamLimits

0xe70d,	// (0x00025a14) form_field_slider_wide_pane_vc_t2

0x0001,

0xfac0,	// (0x00026dc7) form_field_slider_wide_pane_vc_t_ParamLimits

0xfac0,	// (0x00026dc7) form_field_slider_wide_pane_vc_t

0xb95a,	// (0x00022c61) input_focus_pane_cp10_vc_ParamLimits

0xb95a,	// (0x00022c61) input_focus_pane_cp10_vc

0xe71f,	// (0x00025a26) slider_cont_pane_cp1_vc_ParamLimits

0xe71f,	// (0x00025a26) slider_cont_pane_cp1_vc

0xe550,	// (0x00025857) slider_form_pane_g1_cp2

0xe559,	// (0x00025860) slider_form_pane_g2_cp2

0xe738,	// (0x00025a3f) form_field_slider_pane_vc_t3

0xe746,	// (0x00025a4d) form_field_slider_pane_vc_t4

0xe754,	// (0x00025a5b) slider_form_pane_vc_ParamLimits

0xe754,	// (0x00025a5b) slider_form_pane_vc

0xe761,	// (0x00025a68) form_field_slider_pane_vc_t1_ParamLimits

0xe761,	// (0x00025a68) form_field_slider_pane_vc_t1

0xe70d,	// (0x00025a14) form_field_slider_pane_vc_t2_ParamLimits

0xe70d,	// (0x00025a14) form_field_slider_pane_vc_t2

0x0001,

0xfad0,	// (0x00026dd7) form_field_slider_pane_vc_t_ParamLimits

0xfad0,	// (0x00026dd7) form_field_slider_pane_vc_t

0xb95a,	// (0x00022c61) input_focus_pane_cp9_vc_ParamLimits

0xb95a,	// (0x00022c61) input_focus_pane_cp9_vc

0xe77d,	// (0x00025a84) slider_cont_pane_vc_ParamLimits

0xe77d,	// (0x00025a84) slider_cont_pane_vc

0xe78f,	// (0x00025a96) list_form_graphic_pane_cp_vc_ParamLimits

0xe78f,	// (0x00025a96) list_form_graphic_pane_cp_vc

0xd04e,	// (0x00024355) form_field_popup_wide_pane_vc_g1

0xe7a4,	// (0x00025aab) form_field_popup_wide_pane_vc_t1_ParamLimits

0xe7a4,	// (0x00025aab) form_field_popup_wide_pane_vc_t1

0xbf69,	// (0x00023270) input_focus_pane_cp8_vc_ParamLimits

0xbf69,	// (0x00023270) input_focus_pane_cp8_vc

0xe7bb,	// (0x00025ac2) list_form_wide_pane_vc_ParamLimits

0xe7bb,	// (0x00025ac2) list_form_wide_pane_vc

0xe7c7,	// (0x00025ace) list_form_graphic_pane_vc_g1

0xe7cf,	// (0x00025ad6) list_form_graphic_pane_vc_t1_ParamLimits

0xe7cf,	// (0x00025ad6) list_form_graphic_pane_vc_t1

0xb968,	// (0x00022c6f) list_highlight_pane_cp5_vc_ParamLimits

0xb968,	// (0x00022c6f) list_highlight_pane_cp5_vc

0xe7eb,	// (0x00025af2) list_form_graphic_pane_vc_ParamLimits

0xe7eb,	// (0x00025af2) list_form_graphic_pane_vc

0xd04e,	// (0x00024355) form_field_popup_pane_vc_g1

0xe801,	// (0x00025b08) form_field_popup_pane_vc_t1_ParamLimits

0xe801,	// (0x00025b08) form_field_popup_pane_vc_t1

0xbf69,	// (0x00023270) input_focus_pane_cp7_vc_ParamLimits

0xbf69,	// (0x00023270) input_focus_pane_cp7_vc

0xe818,	// (0x00025b1f) list_form_pane_vc_ParamLimits

0xe818,	// (0x00025b1f) list_form_pane_vc

0xe824,	// (0x00025b2b) data_form_pane_vc_t1_ParamLimits

0xe824,	// (0x00025b2b) data_form_pane_vc_t1

0xbfd0,	// (0x000232d7) input_focus_pane_vc_g1

0xbfd8,	// (0x000232df) input_focus_pane_vc_g2

0xbfe0,	// (0x000232e7) input_focus_pane_vc_g3

0xbfe8,	// (0x000232ef) input_focus_pane_vc_g4

0xbff0,	// (0x000232f7) input_focus_pane_vc_g5

0xbff8,	// (0x000232ff) input_focus_pane_vc_g6

0xc000,	// (0x00023307) input_focus_pane_vc_g7

0xc008,	// (0x0002330f) input_focus_pane_vc_g8

0xc010,	// (0x00023317) input_focus_pane_vc_g9

0xb902,	// (0x00022c09) input_focus_pane_vc_g10

0x0009,

0xf6d0,	// (0x000269d7) input_focus_pane_vc_g

0xd042,	// (0x00024349) data_form_pane_vc_ParamLimits

0xd042,	// (0x00024349) data_form_pane_vc

0xd04e,	// (0x00024355) form_field_data_pane_vc_g1

0xe83f,	// (0x00025b46) form_field_data_pane_vc_t1_ParamLimits

0xe83f,	// (0x00025b46) form_field_data_pane_vc_t1

0xbf69,	// (0x00023270) input_focus_pane_vc_ParamLimits

0xbf69,	// (0x00023270) input_focus_pane_vc

0xe859,	// (0x00025b60) button_value_adjust_pane_cp3_vc

0xe861,	// (0x00025b68) button_value_adjust_pane_cp5_vc

0xe869,	// (0x00025b70) form_field_data_pane_vc_ParamLimits

0xe869,	// (0x00025b70) form_field_data_pane_vc

0xe880,	// (0x00025b87) form_field_data_pane_vc_cp2

0xe888,	// (0x00025b8f) form_field_data_wide_pane_vc_ParamLimits

0xe888,	// (0x00025b8f) form_field_data_wide_pane_vc

0xe89e,	// (0x00025ba5) form_field_data_wide_pane_vc_cp2

0xe8a6,	// (0x00025bad) form_field_popup_pane_vc_ParamLimits

0xe8a6,	// (0x00025bad) form_field_popup_pane_vc

0xe8bd,	// (0x00025bc4) form_field_popup_wide_pane_vc_ParamLimits

0xe8bd,	// (0x00025bc4) form_field_popup_wide_pane_vc

0xe8d3,	// (0x00025bda) form_field_slider_pane_vc_ParamLimits

0xe8d3,	// (0x00025bda) form_field_slider_pane_vc

0xe8e6,	// (0x00025bed) form_field_slider_wide_pane_vc_ParamLimits

0xe8e6,	// (0x00025bed) form_field_slider_wide_pane_vc

0x9c09,	// (0x00020f10) grid_touch_1_pane_ParamLimits

0x9c09,	// (0x00020f10) grid_touch_1_pane

0x9c1d,	// (0x00020f24) grid_touch_2_pane_ParamLimits

0x9c1d,	// (0x00020f24) grid_touch_2_pane

0xe8f9,	// (0x00025c00) touch_pane_g1_ParamLimits

0xe8f9,	// (0x00025c00) touch_pane_g1

0xe907,	// (0x00025c0e) cell_app_pane_cp_wide_ParamLimits

0xe907,	// (0x00025c0e) cell_app_pane_cp_wide

0xe918,	// (0x00025c1f) grid_popup_fast_wide_pane_ParamLimits

0xe918,	// (0x00025c1f) grid_popup_fast_wide_pane

0xe92c,	// (0x00025c33) scroll_pane_cp19_ParamLimits

0xe92c,	// (0x00025c33) scroll_pane_cp19

0xb90c,	// (0x00022c13) bg_popup_window_pane_cp20

0xe940,	// (0x00025c47) listscroll_popup_fast_wide_pane

0xcd41,	// (0x00024048) grid_indicator_nsta_pane

0xe948,	// (0x00025c4f) clock_nsta_pane_g1

0xe951,	// (0x00025c58) clock_nsta_pane_t1

0x9c47,	// (0x00020f4e) cell_indicator_nsta_pane_ParamLimits

0x9c47,	// (0x00020f4e) cell_indicator_nsta_pane

0xe8f9,	// (0x00025c00) cell_indicator_nsta_pane_g1

0x9c60,	// (0x00020f67) cell_indicator_nsta_pane_g2

0x0001,

0xfada,	// (0x00026de1) cell_indicator_nsta_pane_g

0xe96d,	// (0x00025c74) clock_nsta_pane_cp

0xe975,	// (0x00025c7c) indicator_nsta_pane_cp

0xe97d,	// (0x00025c84) nsta_clock_indic_pane_g1

0xb9a4,	// (0x00022cab) grid_indicator_pane

0xc3da,	// (0x000236e1) scroll_pane_cp29

0x54aa,	// (0x0001c7b1) indicator_nsta_pane_cp2_ParamLimits

0x54aa,	// (0x0001c7b1) indicator_nsta_pane_cp2

0xb968,	// (0x00022c6f) main_apps_wheel_pane

0xd16a,	// (0x00024471) form_midp_field_text_pane_ParamLimits

0xd29d,	// (0x000245a4) scroll_bar_cp050_ParamLimits

0xe9b5,	// (0x00025cbc) cell_indicator_pane_ParamLimits

0xe9b5,	// (0x00025cbc) cell_indicator_pane

0xe9cc,	// (0x00025cd3) cell_indicator_pane_g1

0x9c76,	// (0x00020f7d) grid_wheel_folder_pane_ParamLimits

0x9c76,	// (0x00020f7d) grid_wheel_folder_pane

0x9c84,	// (0x00020f8b) list_wheel_apps_pane_ParamLimits

0x9c84,	// (0x00020f8b) list_wheel_apps_pane

0x9c92,	// (0x00020f99) main_apps_wheel_pane_g1_ParamLimits

0x9c92,	// (0x00020f99) main_apps_wheel_pane_g1

0x9c9e,	// (0x00020fa5) main_apps_wheel_pane_g2_ParamLimits

0x9c9e,	// (0x00020fa5) main_apps_wheel_pane_g2

0x0001,

0xfae9,	// (0x00026df0) main_apps_wheel_pane_g_ParamLimits

0xfae9,	// (0x00026df0) main_apps_wheel_pane_g

0x9cac,	// (0x00020fb3) main_apps_wheel_pane_t1_ParamLimits

0x9cac,	// (0x00020fb3) main_apps_wheel_pane_t1

0x9cc0,	// (0x00020fc7) list_wheel_apps_pane_g1

0x9cc8,	// (0x00020fcf) list_wheel_apps_pane_g2

0x9cd0,	// (0x00020fd7) list_wheel_apps_pane_g3

0x9cd8,	// (0x00020fdf) list_wheel_apps_pane_g4

0x9ce2,	// (0x00020fe9) list_wheel_apps_pane_g5

0x0004,

0xfaee,	// (0x00026df5) list_wheel_apps_pane_g

0xc80e,	// (0x00023b15) navi_icon_text_pane

0x90f8,	// (0x000203ff) aid_fill_nsta

0x9cf9,	// (0x00021000) navi_icon_text_pane_g1

0x9d05,	// (0x0002100c) navi_icon_text_pane_t1

0x8807,	// (0x0001fb0e) list_set_graphic_pane_t1_ParamLimits

0x8807,	// (0x0001fb0e) list_set_graphic_pane_t1

0xd981,	// (0x00024c88) popup_midp_note_alarm_window_t6_ParamLimits

0xd981,	// (0x00024c88) popup_midp_note_alarm_window_t6

0xd993,	// (0x00024c9a) popup_midp_note_alarm_window_t7_ParamLimits

0xd993,	// (0x00024c9a) popup_midp_note_alarm_window_t7

0xd9a5,	// (0x00024cac) popup_midp_note_alarm_window_t8_ParamLimits

0xd9a5,	// (0x00024cac) popup_midp_note_alarm_window_t8

0xd9b7,	// (0x00024cbe) popup_midp_note_alarm_window_t9_ParamLimits

0xd9b7,	// (0x00024cbe) popup_midp_note_alarm_window_t9

0xd9c9,	// (0x00024cd0) popup_midp_note_alarm_window_t10_ParamLimits

0xd9c9,	// (0x00024cd0) popup_midp_note_alarm_window_t10

0xd9db,	// (0x00024ce2) popup_midp_note_alarm_window_t11_ParamLimits

0xd9db,	// (0x00024ce2) popup_midp_note_alarm_window_t11

0xd9ed,	// (0x00024cf4) scroll_pane_cp17_ParamLimits

0xd9ed,	// (0x00024cf4) scroll_pane_cp17

0x58ed,	// (0x0001cbf4) volume_small_pane_cp_g1

0x5be2,	// (0x0001cee9) volume_small_pane_cp_g2

0x5beb,	// (0x0001cef2) volume_small_pane_cp_g3

0x5bf4,	// (0x0001cefb) volume_small_pane_cp_g4

0x5bfd,	// (0x0001cf04) volume_small_pane_cp_g5

0x5c06,	// (0x0001cf0d) volume_small_pane_cp_g6

0x5c0f,	// (0x0001cf16) volume_small_pane_cp_g7

0x5c18,	// (0x0001cf1f) volume_small_pane_cp_g8

0x5c21,	// (0x0001cf28) volume_small_pane_cp_g9

0x5c2a,	// (0x0001cf31) volume_small_pane_cp_g10

0xc9b8,	// (0x00023cbf) midp_ticker_pane_g1_ParamLimits

0xc9c4,	// (0x00023ccb) midp_ticker_pane_g2_ParamLimits

0xf798,	// (0x00026a9f) midp_ticker_pane_g_ParamLimits

0x88c7,	// (0x0001fbce) midp_ticker_pane_t1_ParamLimits

0x9118,	// (0x0002041f) aid_fill_nsta_2

0xd289,	// (0x00024590) list_form2_midp_pane

0xe0c2,	// (0x000253c9) midp_editing_number_pane_ParamLimits

0xe0d1,	// (0x000253d8) midp_ticker_pane_ParamLimits

0xe9d6,	// (0x00025cdd) form2_midp_field_pane

0xe9de,	// (0x00025ce5) scroll_pane_cp51

0xe9fe,	// (0x00025d05) form2_midp_button_pane_ParamLimits

0xe9fe,	// (0x00025d05) form2_midp_button_pane

0xea10,	// (0x00025d17) form2_midp_content_pane_ParamLimits

0xea10,	// (0x00025d17) form2_midp_content_pane

0xea2a,	// (0x00025d31) form2_midp_field_choice_group_pane

0xea32,	// (0x00025d39) form2_midp_field_pane_g1

0xea3a,	// (0x00025d41) form2_midp_field_pane_g2

0xea42,	// (0x00025d49) form2_midp_field_pane_g3

0xea4a,	// (0x00025d51) form2_midp_field_pane_g4

0x0003,

0xfb13,	// (0x00026e1a) form2_midp_field_pane_g

0xea52,	// (0x00025d59) form2_midp_gauge_slider_pane

0xea5a,	// (0x00025d61) form2_midp_gauge_wait_pane

0xea62,	// (0x00025d69) form2_midp_image_pane_ParamLimits

0xea62,	// (0x00025d69) form2_midp_image_pane

0xea7d,	// (0x00025d84) form2_midp_label_pane_ParamLimits

0xea7d,	// (0x00025d84) form2_midp_label_pane

0x9d33,	// (0x0002103a) form2_midp_label_pane_cp_ParamLimits

0x9d33,	// (0x0002103a) form2_midp_label_pane_cp

0xea96,	// (0x00025d9d) form2_midp_string_pane_ParamLimits

0xea96,	// (0x00025d9d) form2_midp_string_pane

0x499a,	// (0x0001bca1) form2_midp_text_pane_ParamLimits

0x499a,	// (0x0001bca1) form2_midp_text_pane

0xeaa8,	// (0x00025daf) form2_midp_time_pane

0xeab8,	// (0x00025dbf) input_focus_pane_cp51_ParamLimits

0xeab8,	// (0x00025dbf) input_focus_pane_cp51

0xead0,	// (0x00025dd7) form2_midp_label_pane_t1_ParamLimits

0xead0,	// (0x00025dd7) form2_midp_label_pane_t1

0x49b5,	// (0x0001bcbc) form2_mdip_text_pane_t1_ParamLimits

0x49b5,	// (0x0001bcbc) form2_mdip_text_pane_t1

0x49d3,	// (0x0001bcda) form2_midp_time_pane_t1

0xeb19,	// (0x00025e20) form2_midp_gauge_slider_pane_t1

0x9d54,	// (0x0002105b) form2_midp_gauge_slider_pane_t2

0x9d66,	// (0x0002106d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb1c,	// (0x00026e23) form2_midp_gauge_slider_pane_t

0xeb2b,	// (0x00025e32) form2_midp_slider_pane

0xeb37,	// (0x00025e3e) form2_midp_gauge_wait_pane_t1

0xeb45,	// (0x00025e4c) form2_midp_wait_pane_ParamLimits

0xeb45,	// (0x00025e4c) form2_midp_wait_pane

0x9d78,	// (0x0002107f) list_single_2graphic_pane_cp4_ParamLimits

0x9d78,	// (0x0002107f) list_single_2graphic_pane_cp4

0x959b,	// (0x000208a2) list_single_midp_graphic_pane_cp_ParamLimits

0x959b,	// (0x000208a2) list_single_midp_graphic_pane_cp

0xb90c,	// (0x00022c13) list_highlight_pane_cp20

0xeb70,	// (0x00025e77) list_single_2graphic_pane_g1_cp4

0xeb78,	// (0x00025e7f) list_single_2graphic_pane_g2_cp4

0xeb80,	// (0x00025e87) list_single_2graphic_pane_t1_cp4

0xb968,	// (0x00022c6f) list_highlight_pane_cp21

0xeb8f,	// (0x00025e96) list_single_midp_graphic_pane_g4_cp

0xeb9e,	// (0x00025ea5) list_single_midp_graphic_pane_t1_cp

0x9d8d,	// (0x00021094) form2_mdip_string_pane_t1_ParamLimits

0x9d8d,	// (0x00021094) form2_mdip_string_pane_t1

0xb90c,	// (0x00022c13) bg_wml_button_pane_cp2

0xb902,	// (0x00022c09) form2_midp_image_pane_g1

0x401f,	// (0x0001b326) list_double_large_graphic_pane_g5_ParamLimits

0x401f,	// (0x0001b326) list_double_large_graphic_pane_g5

0x881f,	// (0x0001fb26) midp_form_pane_ParamLimits

0xb968,	// (0x00022c6f) main_apps_wheel_pane_ParamLimits

0x8e54,	// (0x0002015b) popup_preview_window_ParamLimits

0x8e54,	// (0x0002015b) popup_preview_window

0xccb7,	// (0x00023fbe) popup_touch_info_window_ParamLimits

0xccb7,	// (0x00023fbe) popup_touch_info_window

0xccd5,	// (0x00023fdc) popup_touch_menu_window_ParamLimits

0xccd5,	// (0x00023fdc) popup_touch_menu_window

0xb8f8,	// (0x00022bff) bg_popup_sub_pane_cp6

0xebb3,	// (0x00025eba) list_touch_menu_pane

0xebbb,	// (0x00025ec2) list_single_touch_menu_pane_ParamLimits

0xebbb,	// (0x00025ec2) list_single_touch_menu_pane

0xebd2,	// (0x00025ed9) list_single_touch_menu_pane_t1

0xb968,	// (0x00022c6f) bg_popup_sub_pane_cp7_ParamLimits

0xb968,	// (0x00022c6f) bg_popup_sub_pane_cp7

0xebe0,	// (0x00025ee7) heading_sub_pane

0xebe8,	// (0x00025eef) list_touch_info_pane_ParamLimits

0xebe8,	// (0x00025eef) list_touch_info_pane

0xebf7,	// (0x00025efe) list_single_touch_info_pane_ParamLimits

0xebf7,	// (0x00025efe) list_single_touch_info_pane

0xec09,	// (0x00025f10) list_single_touch_info_pane_t1

0xec17,	// (0x00025f1e) list_single_touch_info_pane_t2

0x0001,

0xfb2a,	// (0x00026e31) list_single_touch_info_pane_t

0xc98e,	// (0x00023c95) bg_popup_heading_pane_cp

0xec25,	// (0x00025f2c) heading_sub_pane_t1

0xd008,	// (0x0002430f) bg_popup_preview_window_pane_cp_ParamLimits

0xd008,	// (0x0002430f) bg_popup_preview_window_pane_cp

0xebe0,	// (0x00025ee7) heading_preview_pane

0xebe8,	// (0x00025eef) list_preview_pane_ParamLimits

0xebe8,	// (0x00025eef) list_preview_pane

0xec33,	// (0x00025f3a) popup_preview_window_g1

0xebf7,	// (0x00025efe) list_single_preview_pane_ParamLimits

0xebf7,	// (0x00025efe) list_single_preview_pane

0xec3b,	// (0x00025f42) list_single_preview_pane_g1

0xec43,	// (0x00025f4a) list_single_preview_pane_t1

0xec09,	// (0x00025f10) list_single_preview_pane_t2

0x0001,

0xfb2f,	// (0x00026e36) list_single_preview_pane_t

0xec51,	// (0x00025f58) bg_popup_heading_pane_cp2_ParamLimits

0xec51,	// (0x00025f58) bg_popup_heading_pane_cp2

0xec67,	// (0x00025f6e) heading_preview_pane_g1

0xec6f,	// (0x00025f76) heading_preview_pane_t1_ParamLimits

0xec6f,	// (0x00025f76) heading_preview_pane_t1

0xb9bb,	// (0x00022cc2) soft_indicator_pane_t1_ParamLimits

0xbedc,	// (0x000231e3) scroll_pane_ParamLimits

0xc2d3,	// (0x000235da) scroll_sc2_left_pane

0xc2dc,	// (0x000235e3) scroll_sc2_right_pane

0xc2fb,	// (0x00023602) scroll_bg_pane_g1_ParamLimits

0xc310,	// (0x00023617) scroll_bg_pane_g2_ParamLimits

0xc328,	// (0x0002362f) scroll_bg_pane_g3_ParamLimits

0xf727,	// (0x00026a2e) scroll_bg_pane_g_ParamLimits

0xc2fb,	// (0x00023602) scroll_handle_pane_g1_ParamLimits

0xc34a,	// (0x00023651) scroll_handle_pane_g2_ParamLimits

0xc328,	// (0x0002362f) scroll_handle_pane_g3_ParamLimits

0xf72e,	// (0x00026a35) scroll_handle_pane_g_ParamLimits

0xcbf8,	// (0x00023eff) popup_choice_list_window_ParamLimits

0xcbf8,	// (0x00023eff) popup_choice_list_window

0xce62,	// (0x00024169) choice_list_pane

0xcee4,	// (0x000241eb) cell_toolbar_pane_t1

0xcf0c,	// (0x00024213) toolbar_button_pane_ParamLimits

0xde25,	// (0x0002512c) ai_gene_pane_1_t2_ParamLimits

0xde25,	// (0x0002512c) ai_gene_pane_1_t2

0x0001,

0xf946,	// (0x00026c4d) ai_gene_pane_1_t_ParamLimits

0xf946,	// (0x00026c4d) ai_gene_pane_1_t

0xec8c,	// (0x00025f93) scroll_sc2_left_pane_g1

0xec8c,	// (0x00025f93) scroll_sc2_right_pane_g1

0xc0c1,	// (0x000233c8) bg_popup_sub_pane_cp10

0xec96,	// (0x00025f9d) list_choice_list_pane

0xecad,	// (0x00025fb4) list_single_choice_list_pane_ParamLimits

0xecad,	// (0x00025fb4) list_single_choice_list_pane

0xecc1,	// (0x00025fc8) list_single_choice_list_pane_g1

0xecc9,	// (0x00025fd0) list_single_choice_list_pane_t1_ParamLimits

0xecc9,	// (0x00025fd0) list_single_choice_list_pane_t1

0xecde,	// (0x00025fe5) choice_list_pane_g1

0xece6,	// (0x00025fed) choice_list_pane_t1

0xb8f8,	// (0x00022bff) input_focus_pane_cp11

0xc236,	// (0x0002353d) title_pane_stacon_g2_ParamLimits

0xc236,	// (0x0002353d) title_pane_stacon_g2

0x0002,

0xf70d,	// (0x00026a14) title_pane_stacon_g_ParamLimits

0xf70d,	// (0x00026a14) title_pane_stacon_g

0xc98e,	// (0x00023c95) cursor_press_pane

0x8b1f,	// (0x0001fe26) popup_fep_hwr_window_ParamLimits

0x8b1f,	// (0x0001fe26) popup_fep_hwr_window

0xcc4e,	// (0x00023f55) popup_fep_vkb_window_ParamLimits

0xcc4e,	// (0x00023f55) popup_fep_vkb_window

0xecf4,	// (0x00025ffb) cursor_press_pane_g1

0x0002,

0xfb58,	// (0x00026e5f) fep_vkb_side_pane_g_ParamLimits

0x5c5e,	// (0x0001cf65) fep_hwr_candidate_pane_ParamLimits

0x5c5e,	// (0x0001cf65) fep_hwr_candidate_pane

0x5c88,	// (0x0001cf8f) fep_hwr_side_pane_ParamLimits

0x5c88,	// (0x0001cf8f) fep_hwr_side_pane

0x5ca8,	// (0x0001cfaf) fep_hwr_top_pane_ParamLimits

0x5ca8,	// (0x0001cfaf) fep_hwr_top_pane

0x5cc0,	// (0x0001cfc7) fep_hwr_write_pane_ParamLimits

0x5cc0,	// (0x0001cfc7) fep_hwr_write_pane

0xfb58,	// (0x00026e5f) fep_vkb_side_pane_g

0xecfc,	// (0x00026003) fep_hwr_top_pane_g1

0xed0e,	// (0x00026015) fep_hwr_top_pane_g2

0x5cec,	// (0x0001cff3) fep_hwr_top_pane_g3

0x0002,

0xfb34,	// (0x00026e3b) fep_hwr_top_pane_g

0x5d01,	// (0x0001d008) fep_hwr_top_text_pane

0xc4a1,	// (0x000237a8) fep_hwr_top_text_pane_g1

0xed44,	// (0x0002604b) fep_hwr_top_text_pane_t1

0x5df7,	// (0x0001d0fe) fep_hwr_candidate_pane_g1

0xee71,	// (0x00026178) fep_vkb_keypad_pane_g3_ParamLimits

0xee71,	// (0x00026178) fep_vkb_keypad_pane_g3

0xee99,	// (0x000261a0) fep_vkb_keypad_pane_g4_ParamLimits

0xee99,	// (0x000261a0) fep_vkb_keypad_pane_g4

0xef08,	// (0x0002620f) fep_vkb_bottom_pane_g2_ParamLimits

0xef08,	// (0x0002620f) fep_vkb_bottom_pane_g2

0x0001,

0xfb5f,	// (0x00026e66) fep_vkb_bottom_pane_g_ParamLimits

0xfb5f,	// (0x00026e66) fep_vkb_bottom_pane_g

0xec8c,	// (0x00025f93) cell_vkb_side_pane_g2

0x0001,

0xfb69,	// (0x00026e70) cell_vkb_side_pane_g

0xef4c,	// (0x00026253) cell_vkb_side_pane_t1

0xef5a,	// (0x00026261) cell_vkb_side_pane_t1_copy1

0xec8c,	// (0x00025f93) bg_fep_vkb_candidate_pane_g2

0xf03e,	// (0x00026345) cell_vkb_candidate_pane_ParamLimits

0xed52,	// (0x00026059) aid_size_cell_vkb_ParamLimits

0xed52,	// (0x00026059) aid_size_cell_vkb

0xf03e,	// (0x00026345) cell_vkb_candidate_pane

0x5e11,	// (0x0001d118) bg_popup_fep_shadow_pane_g1

0x9e68,	// (0x0002116f) fep_vkb_bottom_pane_ParamLimits

0x9e68,	// (0x0002116f) fep_vkb_bottom_pane

0xeddf,	// (0x000260e6) fep_vkb_candidate_pane_ParamLimits

0xeddf,	// (0x000260e6) fep_vkb_candidate_pane

0x9e8d,	// (0x00021194) fep_vkb_keypad_pane_ParamLimits

0x9e8d,	// (0x00021194) fep_vkb_keypad_pane

0x9ec9,	// (0x000211d0) fep_vkb_side_pane_ParamLimits

0x9ec9,	// (0x000211d0) fep_vkb_side_pane

0x9f05,	// (0x0002120c) fep_vkb_top_pane_ParamLimits

0x9f05,	// (0x0002120c) fep_vkb_top_pane

0xee05,	// (0x0002610c) fep_vkb_top_pane_g1_ParamLimits

0xee05,	// (0x0002610c) fep_vkb_top_pane_g1

0xee14,	// (0x0002611b) fep_vkb_top_pane_g2_ParamLimits

0xee14,	// (0x0002611b) fep_vkb_top_pane_g2

0xee23,	// (0x0002612a) fep_vkb_top_pane_g3_ParamLimits

0xee23,	// (0x0002612a) fep_vkb_top_pane_g3

0x0003,

0xfb4f,	// (0x00026e56) fep_vkb_top_pane_g_ParamLimits

0xfb4f,	// (0x00026e56) fep_vkb_top_pane_g

0xee41,	// (0x00026148) fep_vkb_top_text_pane_ParamLimits

0xee41,	// (0x00026148) fep_vkb_top_text_pane

0x9f41,	// (0x00021248) fep_vkb_side_pane_g1_ParamLimits

0x9f41,	// (0x00021248) fep_vkb_side_pane_g1

0xee60,	// (0x00026167) grid_vkb_side_pane_ParamLimits

0xee60,	// (0x00026167) grid_vkb_side_pane

0x5e19,	// (0x0001d120) bg_popup_fep_shadow_pane_g2

0x5e22,	// (0x0001d129) bg_popup_fep_shadow_pane_g3

0x5e2a,	// (0x0001d131) bg_popup_fep_shadow_pane_g4

0x5e33,	// (0x0001d13a) bg_popup_fep_shadow_pane_g5

0x5e3d,	// (0x0001d144) bg_popup_fep_shadow_pane_g6

0x5e45,	// (0x0001d14c) bg_popup_fep_shadow_pane_g7

0xbff0,	// (0x000232f7) bg_popup_fep_shadow_pane_g8

0xeeb7,	// (0x000261be) grid_vkb_keypad_number_pane_ParamLimits

0xeeb7,	// (0x000261be) grid_vkb_keypad_number_pane

0xeec7,	// (0x000261ce) grid_vkb_keypad_pane_ParamLimits

0xeec7,	// (0x000261ce) grid_vkb_keypad_pane

0xeeed,	// (0x000261f4) fep_vkb_bottom_pane_g1_ParamLimits

0xeeed,	// (0x000261f4) fep_vkb_bottom_pane_g1

0xef16,	// (0x0002621d) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xef16,	// (0x0002621d) grid_vkb_keypad_bottom_left_pane

0xef2b,	// (0x00026232) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xef2b,	// (0x00026232) grid_vkb_keypad_bottom_right_pane

0xef40,	// (0x00026247) fep_vkb_top_text_pane_g1

0x9f88,	// (0x0002128f) fep_vkb_top_text_pane_t1

0x9f9a,	// (0x000212a1) cell_vkb_side_pane_ParamLimits

0x9f9a,	// (0x000212a1) cell_vkb_side_pane

0xec8c,	// (0x00025f93) cell_vkb_side_pane_g1

0xef68,	// (0x0002626f) cell_vkb_keypad_pane_ParamLimits

0xef68,	// (0x0002626f) cell_vkb_keypad_pane

0xefdd,	// (0x000262e4) cell_vkb_keypad_pane_g1

0x0008,

0xfb7c,	// (0x00026e83) bg_popup_fep_shadow_pane_g

0xec8c,	// (0x00025f93) cell_hwr_side_pane_g1

0xec8c,	// (0x00025f93) cell_hwr_side_pane_g2

0xefe7,	// (0x000262ee) cell_vkb_keypad_pane_t1

0x9fb0,	// (0x000212b7) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x9fb0,	// (0x000212b7) cell_vkb_keypad_bottom_left_pane

0x9fc5,	// (0x000212cc) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x9fc5,	// (0x000212cc) cell_vkb_keypad_bottom_right_pane

0xec8c,	// (0x00025f93) cell_vkb_keypad_bottom_left_pane_g1

0xec8c,	// (0x00025f93) cell_vkb_keypad_bottom_right_pane_g1

0xf003,	// (0x0002630a) cell_vkb_keypad_number_pane_ParamLimits

0xf003,	// (0x0002630a) cell_vkb_keypad_number_pane

0xf022,	// (0x00026329) cell_vkb_keypad_number_pane_g1

0xf02c,	// (0x00026333) cell_vkb_keypad_number_pane_g2

0xf035,	// (0x0002633c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb6e,	// (0x00026e75) cell_vkb_keypad_number_pane_g

0xefe7,	// (0x000262ee) cell_vkb_keypad_number_pane_t1

0xf059,	// (0x00026360) fep_vkb_candidate_pane_g1

0x0001,

0xfb69,	// (0x00026e70) cell_hwr_side_pane_g

0xf072,	// (0x00026379) cell_hwr_side_pane_t1

0x5e57,	// (0x0001d15e) cell_hwr_side_pane_t1_copy1

0xee33,	// (0x0002613a) cell_hwr_candidate_pane_g1

0x5e65,	// (0x0001d16c) cell_hwr_candidate_pane_t1

0xec8c,	// (0x00025f93) cell_vkb_candidate_pane_g2

0xf0f8,	// (0x000263ff) cell_vkb_candidate_pane_t1

0xeff5,	// (0x000262fc) bg_popup_fep_shadow_pane_ParamLimits

0xeff5,	// (0x000262fc) bg_popup_fep_shadow_pane

0x2bb6,	// (0x00019ebd) bg_fep_hwr_top_pane_g4

0xed20,	// (0x00026027) bg_hwr_side_pane_g1_ParamLimits

0xed20,	// (0x00026027) bg_hwr_side_pane_g1

0x9e21,	// (0x00021128) cell_hwr_side_pane_ParamLimits

0x9e21,	// (0x00021128) cell_hwr_side_pane

0x5d78,	// (0x0001d07f) fep_hwr_write_pane_g1_ParamLimits

0x5d78,	// (0x0001d07f) fep_hwr_write_pane_g1

0x5d85,	// (0x0001d08c) fep_hwr_write_pane_g2_ParamLimits

0x5d85,	// (0x0001d08c) fep_hwr_write_pane_g2

0x5d92,	// (0x0001d099) fep_hwr_write_pane_g3_ParamLimits

0x5d92,	// (0x0001d099) fep_hwr_write_pane_g3

0x9e41,	// (0x00021148) fep_hwr_write_pane_g4_ParamLimits

0x9e41,	// (0x00021148) fep_hwr_write_pane_g4

0x0005,

0xfb3b,	// (0x00026e42) fep_hwr_write_pane_g_ParamLimits

0xfb3b,	// (0x00026e42) fep_hwr_write_pane_g

0x2bb6,	// (0x00019ebd) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2bb6,	// (0x00019ebd) bg_fep_hwr_candidate_pane_g2

0x5db5,	// (0x0001d0bc) cell_hwr_candidate_pane_ParamLimits

0x5db5,	// (0x0001d0bc) cell_hwr_candidate_pane

0x5df7,	// (0x0001d0fe) fep_hwr_candidate_pane_g1_ParamLimits

0xed80,	// (0x00026087) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xed80,	// (0x00026087) bg_popup_fep_shadow_pane_cp2

0xee33,	// (0x0002613a) fep_vkb_top_pane_g4_ParamLimits

0xee33,	// (0x0002613a) fep_vkb_top_pane_g4

0xee52,	// (0x00026159) fep_vkb_side_pane_g2_ParamLimits

0xee52,	// (0x00026159) fep_vkb_side_pane_g2

0x7b89,	// (0x0001ee90) list_setting_pane_t4_ParamLimits

0x7b89,	// (0x0001ee90) list_setting_pane_t4

0x7c23,	// (0x0001ef2a) list_setting_number_pane_t5_ParamLimits

0x7c23,	// (0x0001ef2a) list_setting_number_pane_t5

0x874a,	// (0x0001fa51) list_double_heading_pane_cp2_ParamLimits

0x874a,	// (0x0001fa51) list_double_heading_pane_cp2

0xbf83,	// (0x0002328a) list_double_heading_pane_g1_cp2_ParamLimits

0xbf83,	// (0x0002328a) list_double_heading_pane_g1_cp2

0xbf8f,	// (0x00023296) list_double_heading_pane_g2_cp2_ParamLimits

0xbf8f,	// (0x00023296) list_double_heading_pane_g2_cp2

0xf106,	// (0x0002640d) list_double_heading_pane_t1_cp2_ParamLimits

0xf106,	// (0x0002640d) list_double_heading_pane_t1_cp2

0xf11c,	// (0x00026423) list_double_heading_pane_t2_cp2_ParamLimits

0xf11c,	// (0x00026423) list_double_heading_pane_t2_cp2

0xb8f0,	// (0x00022bf7) aid_value_unit2

0x5042,	// (0x0001c349) popup_preview_fixed_window

0xba9b,	// (0x00022da2) bg_popup_preview_window_pane_cp02

0xf12e,	// (0x00026435) list_preview_fixed_pane

0xf174,	// (0x0002647b) list_empty_pane_fp_ParamLimits

0xf174,	// (0x0002647b) list_empty_pane_fp

0xf174,	// (0x0002647b) list_single_cale_day_pane_fp_ParamLimits

0xf174,	// (0x0002647b) list_single_cale_day_pane_fp

0xf174,	// (0x0002647b) list_single_graphic_heading_pane_fp_ParamLimits

0xf174,	// (0x0002647b) list_single_graphic_heading_pane_fp

0xf174,	// (0x0002647b) list_single_graphic_pane_fp_ParamLimits

0xf174,	// (0x0002647b) list_single_graphic_pane_fp

0xf174,	// (0x0002647b) list_single_heading_pane_fp_ParamLimits

0xf174,	// (0x0002647b) list_single_heading_pane_fp

0xf174,	// (0x0002647b) list_single_pane_fp_ParamLimits

0xf174,	// (0x0002647b) list_single_pane_fp

0xf189,	// (0x00026490) list_single_pane_fp_g1_ParamLimits

0xf189,	// (0x00026490) list_single_pane_fp_g1

0x49e6,	// (0x0001bced) list_single_pane_fp_g2_ParamLimits

0x49e6,	// (0x0001bced) list_single_pane_fp_g2

0x49f2,	// (0x0001bcf9) list_single_pane_fp_g3_ParamLimits

0x49f2,	// (0x0001bcf9) list_single_pane_fp_g3

0xf195,	// (0x0002649c) list_single_pane_fp_g4_ParamLimits

0xf195,	// (0x0002649c) list_single_pane_fp_g4

0x0003,

0xfb9d,	// (0x00026ea4) list_single_pane_fp_g_ParamLimits

0xfb9d,	// (0x00026ea4) list_single_pane_fp_g

0x4a06,	// (0x0001bd0d) list_single_pane_fp_t1_ParamLimits

0x4a06,	// (0x0001bd0d) list_single_pane_fp_t1

0x4a1d,	// (0x0001bd24) list_single_graphic_pane_fp_g1_ParamLimits

0x4a1d,	// (0x0001bd24) list_single_graphic_pane_fp_g1

0xf189,	// (0x00026490) list_single_graphic_pane_fp_g2_ParamLimits

0xf189,	// (0x00026490) list_single_graphic_pane_fp_g2

0x49e6,	// (0x0001bced) list_single_graphic_pane_fp_g3_ParamLimits

0x49e6,	// (0x0001bced) list_single_graphic_pane_fp_g3

0x49f2,	// (0x0001bcf9) list_single_graphic_pane_fp_g4_ParamLimits

0x49f2,	// (0x0001bcf9) list_single_graphic_pane_fp_g4

0xf195,	// (0x0002649c) list_single_graphic_pane_fp_g5_ParamLimits

0xf195,	// (0x0002649c) list_single_graphic_pane_fp_g5

0x0004,

0xfba6,	// (0x00026ead) list_single_graphic_pane_fp_g_ParamLimits

0xfba6,	// (0x00026ead) list_single_graphic_pane_fp_g

0x4a29,	// (0x0001bd30) list_single_graphic_pane_fp_t1_ParamLimits

0x4a29,	// (0x0001bd30) list_single_graphic_pane_fp_t1

0x4a1d,	// (0x0001bd24) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4a1d,	// (0x0001bd24) list_single_graphic_heading_pane_fp_g1

0xf189,	// (0x00026490) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xf189,	// (0x00026490) list_single_graphic_heading_pane_fp_g2

0x49e6,	// (0x0001bced) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x49e6,	// (0x0001bced) list_single_graphic_heading_pane_fp_g3

0x49f2,	// (0x0001bcf9) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x49f2,	// (0x0001bcf9) list_single_graphic_heading_pane_fp_g4

0xf195,	// (0x0002649c) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xf195,	// (0x0002649c) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba6,	// (0x00026ead) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba6,	// (0x00026ead) list_single_graphic_heading_pane_fp_g

0x4a3f,	// (0x0001bd46) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4a3f,	// (0x0001bd46) list_single_graphic_heading_pane_fp_t1

0x4a55,	// (0x0001bd5c) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4a55,	// (0x0001bd5c) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbb1,	// (0x00026eb8) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbb1,	// (0x00026eb8) list_single_graphic_heading_pane_fp_t

0x4a67,	// (0x0001bd6e) list_single_cale_day_pane_fp_g1_ParamLimits

0x4a67,	// (0x0001bd6e) list_single_cale_day_pane_fp_g1

0xf1a1,	// (0x000264a8) list_single_cale_day_pane_fp_g2_ParamLimits

0xf1a1,	// (0x000264a8) list_single_cale_day_pane_fp_g2

0x4a9f,	// (0x0001bda6) list_single_cale_day_pane_fp_g3_ParamLimits

0x4a9f,	// (0x0001bda6) list_single_cale_day_pane_fp_g3

0x4ac7,	// (0x0001bdce) list_single_cale_day_pane_fp_g4_ParamLimits

0x4ac7,	// (0x0001bdce) list_single_cale_day_pane_fp_g4

0x4aeb,	// (0x0001bdf2) list_single_cale_day_pane_fp_g5_ParamLimits

0x4aeb,	// (0x0001bdf2) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb6,	// (0x00026ebd) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb6,	// (0x00026ebd) list_single_cale_day_pane_fp_g

0x4b0f,	// (0x0001be16) list_single_cale_day_pane_fp_t1_ParamLimits

0x4b0f,	// (0x0001be16) list_single_cale_day_pane_fp_t1

0x4b35,	// (0x0001be3c) list_single_cale_day_pane_fp_t2_ParamLimits

0x4b35,	// (0x0001be3c) list_single_cale_day_pane_fp_t2

0x4b4e,	// (0x0001be55) list_single_cale_day_pane_fp_t3_ParamLimits

0x4b4e,	// (0x0001be55) list_single_cale_day_pane_fp_t3

0x0002,

0xfbc1,	// (0x00026ec8) list_single_cale_day_pane_fp_t_ParamLimits

0xfbc1,	// (0x00026ec8) list_single_cale_day_pane_fp_t

0xf189,	// (0x00026490) list_empty_pane_fp_g1_ParamLimits

0xf189,	// (0x00026490) list_empty_pane_fp_g1

0x4b67,	// (0x0001be6e) list_empty_pane_fp_t1

0x4b75,	// (0x0001be7c) list_empty_pane_fp_t2

0x0001,

0xfbc8,	// (0x00026ecf) list_empty_pane_fp_t

0xf189,	// (0x00026490) list_single_heading_pane_fp_g1_ParamLimits

0xf189,	// (0x00026490) list_single_heading_pane_fp_g1

0x49e6,	// (0x0001bced) list_single_heading_pane_fp_g2_ParamLimits

0x49e6,	// (0x0001bced) list_single_heading_pane_fp_g2

0x49f2,	// (0x0001bcf9) list_single_heading_pane_fp_g3_ParamLimits

0x49f2,	// (0x0001bcf9) list_single_heading_pane_fp_g3

0x0002,

0xfbcd,	// (0x00026ed4) list_single_heading_pane_fp_g_ParamLimits

0xfbcd,	// (0x00026ed4) list_single_heading_pane_fp_g

0x4b83,	// (0x0001be8a) list_single_heading_pane_fp_t1_ParamLimits

0x4b83,	// (0x0001be8a) list_single_heading_pane_fp_t1

0x4b95,	// (0x0001be9c) list_single_heading_pane_fp_t2_ParamLimits

0x4b95,	// (0x0001be9c) list_single_heading_pane_fp_t2

0x0001,

0xfbd4,	// (0x00026edb) list_single_heading_pane_fp_t_ParamLimits

0xfbd4,	// (0x00026edb) list_single_heading_pane_fp_t

0xc0cd,	// (0x000233d4) aid_size_cell_fast

0xba7e,	// (0x00022d85) soft_indicator_pane_cp1_t1

0xc10a,	// (0x00023411) cell_app_pane_cp2_ParamLimits

0xc10a,	// (0x00023411) cell_app_pane_cp2

0x5c47,	// (0x0001cf4e) fep_hwr_candidate_drop_down_list_pane

0x2bc4,	// (0x00019ecb) fep_hwr_candidate_pane_g3_ParamLimits

0x2bc4,	// (0x00019ecb) fep_hwr_candidate_pane_g3

0x2bd1,	// (0x00019ed8) fep_hwr_candidate_pane_g4_ParamLimits

0x2bd1,	// (0x00019ed8) fep_hwr_candidate_pane_g4

0x0002,

0xfb48,	// (0x00026e4f) fep_hwr_candidate_pane_g_ParamLimits

0xfb48,	// (0x00026e4f) fep_hwr_candidate_pane_g

0xedce,	// (0x000260d5) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xedce,	// (0x000260d5) fep_vkb_candidate_drop_down_list_pane

0xf061,	// (0x00026368) fep_vkb_candidate_pane_g3

0xf069,	// (0x00026370) fep_vkb_candidate_pane_g4

0x0002,

0xfb75,	// (0x00026e7c) fep_vkb_candidate_pane_g

0xee33,	// (0x0002613a) cell_hwr_candidate_pane_g1_ParamLimits

0xf080,	// (0x00026387) cell_hwr_candidate_pane_g3_ParamLimits

0xf080,	// (0x00026387) cell_hwr_candidate_pane_g3

0xf0a1,	// (0x000263a8) cell_hwr_candidate_pane_g4_ParamLimits

0xf0a1,	// (0x000263a8) cell_hwr_candidate_pane_g4

0x0002,

0xfb8f,	// (0x00026e96) cell_hwr_candidate_pane_g_ParamLimits

0xfb8f,	// (0x00026e96) cell_hwr_candidate_pane_g

0xf0c2,	// (0x000263c9) cell_vkb_candidate_pane_g3_ParamLimits

0xf0c2,	// (0x000263c9) cell_vkb_candidate_pane_g3

0xf0dd,	// (0x000263e4) cell_vkb_candidate_pane_g4_ParamLimits

0xf0dd,	// (0x000263e4) cell_vkb_candidate_pane_g4

0xf1ad,	// (0x000264b4) cell_app_pane_cp2_g1_ParamLimits

0xf1ad,	// (0x000264b4) cell_app_pane_cp2_g1

0xf1cb,	// (0x000264d2) cell_app_pane_cp2_g2_ParamLimits

0xf1cb,	// (0x000264d2) cell_app_pane_cp2_g2

0x0001,

0xfbd9,	// (0x00026ee0) cell_app_pane_cp2_g_ParamLimits

0xfbd9,	// (0x00026ee0) cell_app_pane_cp2_g

0xf1eb,	// (0x000264f2) cell_app_pane_cp2_t1_ParamLimits

0xf1eb,	// (0x000264f2) cell_app_pane_cp2_t1

0xbf69,	// (0x00023270) grid_highlight_pane_cp1_ParamLimits

0xbf69,	// (0x00023270) grid_highlight_pane_cp1

0x5e83,	// (0x0001d18a) cell_hwr_candidate_pane_cp1_ParamLimits

0x5e83,	// (0x0001d18a) cell_hwr_candidate_pane_cp1

0xee33,	// (0x0002613a) fep_hwr_candidate_drop_down_list_pane_g1

0xf1fd,	// (0x00026504) fep_hwr_candidate_drop_down_list_pane_g2

0xf20a,	// (0x00026511) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x00026ee5) fep_hwr_candidate_drop_down_list_pane_g

0x5ea2,	// (0x0001d1a9) fep_hwr_candidate_drop_down_list_scroll_pane

0x5eab,	// (0x0001d1b2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5eab,	// (0x0001d1b2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5eb8,	// (0x0001d1bf) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5eb8,	// (0x0001d1bf) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5ec5,	// (0x0001d1cc) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5ec5,	// (0x0001d1cc) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xf0c2,	// (0x000263c9) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf0c2,	// (0x000263c9) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xf0dd,	// (0x000263e4) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf0dd,	// (0x000263e4) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5ed2,	// (0x0001d1d9) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5ed2,	// (0x0001d1d9) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5eed,	// (0x0001d1f4) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5eed,	// (0x0001d1f4) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5f08,	// (0x0001d20f) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5f08,	// (0x0001d20f) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x00026eec) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x00026eec) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xf217,	// (0x0002651e) cell_vkb_candidate_pane_cp1_ParamLimits

0xf217,	// (0x0002651e) cell_vkb_candidate_pane_cp1

0xee33,	// (0x0002613a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xee33,	// (0x0002613a) fep_vkb_candidate_drop_down_list_pane_g1

0xf1fd,	// (0x00026504) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xf1fd,	// (0x00026504) fep_vkb_candidate_drop_down_list_pane_g2

0xf20a,	// (0x00026511) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xf20a,	// (0x00026511) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x00026ee5) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbde,	// (0x00026ee5) fep_vkb_candidate_drop_down_list_pane_g

0xf237,	// (0x0002653e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xf237,	// (0x0002653e) fep_vkb_candidate_drop_down_list_scroll_pane

0xf244,	// (0x0002654b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xf244,	// (0x0002654b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xf251,	// (0x00026558) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xf251,	// (0x00026558) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xf25d,	// (0x00026564) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xf25d,	// (0x00026564) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xf080,	// (0x00026387) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf080,	// (0x00026387) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xf0a1,	// (0x000263a8) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf0a1,	// (0x000263a8) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xf269,	// (0x00026570) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xf269,	// (0x00026570) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xf28a,	// (0x00026591) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xf28a,	// (0x00026591) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xf2ab,	// (0x000265b2) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xf2ab,	// (0x000265b2) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf6,	// (0x00026efd) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf6,	// (0x00026efd) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8235,	// (0x0001f53c) title_pane_g1_ParamLimits

0x8246,	// (0x0001f54d) title_pane_g2_ParamLimits

0xf592,	// (0x00026899) title_pane_g_ParamLimits

0xc491,	// (0x00023798) aid_call2_pane

0xc499,	// (0x000237a0) aid_call_pane

0xc4a1,	// (0x000237a8) popup_clock_analogue_window_g1

0xc4a1,	// (0x000237a8) popup_clock_analogue_window_g2

0x53ab,	// (0x0001c6b2) popup_clock_analogue_window_g3

0x53b4,	// (0x0001c6bb) popup_clock_analogue_window_g4

0xb902,	// (0x00022c09) popup_clock_analogue_window_g5

0x0004,

0xf73c,	// (0x00026a43) popup_clock_analogue_window_g

0x53bc,	// (0x0001c6c3) popup_clock_analogue_window_t1

0x53ca,	// (0x0001c6d1) clock_digital_number_pane_ParamLimits

0x53ca,	// (0x0001c6d1) clock_digital_number_pane

0x53d6,	// (0x0001c6dd) clock_digital_number_pane_cp02_ParamLimits

0x53d6,	// (0x0001c6dd) clock_digital_number_pane_cp02

0x53e2,	// (0x0001c6e9) clock_digital_number_pane_cp03_ParamLimits

0x53e2,	// (0x0001c6e9) clock_digital_number_pane_cp03

0x53ee,	// (0x0001c6f5) clock_digital_number_pane_cp04_ParamLimits

0x53ee,	// (0x0001c6f5) clock_digital_number_pane_cp04

0x53fa,	// (0x0001c701) clock_digital_separator_pane_ParamLimits

0x53fa,	// (0x0001c701) clock_digital_separator_pane

0x5406,	// (0x0001c70d) popup_clock_digital_window_t1_ParamLimits

0x5406,	// (0x0001c70d) popup_clock_digital_window_t1

0xb902,	// (0x00022c09) clock_digital_number_pane_g1

0xb902,	// (0x00022c09) clock_digital_number_pane_g2

0x0001,

0xf747,	// (0x00026a4e) clock_digital_number_pane_g

0xb902,	// (0x00022c09) clock_digital_separator_pane_g1

0xb902,	// (0x00022c09) clock_digital_separator_pane_g2

0x0001,

0xf747,	// (0x00026a4e) clock_digital_separator_pane_g

0x90f8,	// (0x000203ff) aid_fill_nsta_ParamLimits

0x9227,	// (0x0002052e) indicator_nsta_pane_ParamLimits

0xce09,	// (0x00024110) popup_clock_analogue_window

0xce09,	// (0x00024110) popup_clock_digital_window

0xcd41,	// (0x00024048) grid_indicator_nsta_pane_ParamLimits

0xe95f,	// (0x00025c66) clock_nsta_pane_t2

0x0001,

0xfad5,	// (0x00026ddc) clock_nsta_pane_t

0x536f,	// (0x0001c676) aid_size_max_handle

0x8741,	// (0x0001fa48) aid_size_min_handle

0xc98e,	// (0x00023c95) editor_scroll_pane

0xf2c6,	// (0x000265cd) ex_editor_pane

0xc088,	// (0x0002338f) scroll_pane_cp13

0xbf08,	// (0x0002320f) scroll_pane_cp14

0xc4cb,	// (0x000237d2) scroll_pane_cp36

0x8759,	// (0x0001fa60) list_single_graphic_hl_pane_cp2_ParamLimits

0x8759,	// (0x0001fa60) list_single_graphic_hl_pane_cp2

0x7e99,	// (0x0001f1a0) list_single_graphic_hl_pane_ParamLimits

0x7e99,	// (0x0001f1a0) list_single_graphic_hl_pane

0x4bab,	// (0x0001beb2) aid_size_min_hl_cp1

0xf2ce,	// (0x000265d5) list_highlight_pane_cp34_ParamLimits

0xf2ce,	// (0x000265d5) list_highlight_pane_cp34

0xf2df,	// (0x000265e6) list_single_graphic_hl_pane_g1_ParamLimits

0xf2df,	// (0x000265e6) list_single_graphic_hl_pane_g1

0x7eab,	// (0x0001f1b2) list_single_graphic_hl_pane_g2_ParamLimits

0x7eab,	// (0x0001f1b2) list_single_graphic_hl_pane_g2

0x7eab,	// (0x0001f1b2) list_single_graphic_hl_pane_g3_ParamLimits

0x7eab,	// (0x0001f1b2) list_single_graphic_hl_pane_g3

0x7eb7,	// (0x0001f1be) list_single_graphic_hl_pane_g4_ParamLimits

0x7eb7,	// (0x0001f1be) list_single_graphic_hl_pane_g4

0x7ec3,	// (0x0001f1ca) list_single_graphic_hl_pane_g5_ParamLimits

0x7ec3,	// (0x0001f1ca) list_single_graphic_hl_pane_g5

0x0004,

0xfc07,	// (0x00026f0e) list_single_graphic_hl_pane_g_ParamLimits

0xfc07,	// (0x00026f0e) list_single_graphic_hl_pane_g

0x7ed7,	// (0x0001f1de) list_single_graphic_hl_pane_t1_ParamLimits

0x7ed7,	// (0x0001f1de) list_single_graphic_hl_pane_t1

0xf2ec,	// (0x000265f3) aid_size_min_hl_cp2

0xf2f5,	// (0x000265fc) list_highlight_pane_cp34_cp2_ParamLimits

0xf2f5,	// (0x000265fc) list_highlight_pane_cp34_cp2

0xf2df,	// (0x000265e6) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xf2df,	// (0x000265e6) list_single_graphic_hl_pane_g1_cp2

0xf302,	// (0x00026609) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xf302,	// (0x00026609) list_single_graphic_hl_pane_g2_cp2

0xf30e,	// (0x00026615) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xf30e,	// (0x00026615) list_single_graphic_hl_pane_g3_cp2

0xdc54,	// (0x00024f5b) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xdc54,	// (0x00024f5b) list_single_graphic_hl_pane_g4_cp2

0xf31c,	// (0x00026623) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xf31c,	// (0x00026623) list_single_graphic_hl_pane_g5_cp2

0x890c,	// (0x0001fc13) control_pane_g4_ParamLimits

0x890c,	// (0x0001fc13) control_pane_g4

0xc0c1,	// (0x000233c8) bg_popup_sub_pane_cp10_ParamLimits

0xec96,	// (0x00025f9d) list_choice_list_pane_ParamLimits

0xeca5,	// (0x00025fac) scroll_pane_cp23

0xba9b,	// (0x00022da2) bg_popup_preview_window_pane_cp02_ParamLimits

0xf12e,	// (0x00026435) list_preview_fixed_pane_ParamLimits

0xf144,	// (0x0002644b) list_preview_fixed_pane_cp_ParamLimits

0xf144,	// (0x0002644b) list_preview_fixed_pane_cp

0xf150,	// (0x00026457) popup_preview_fixed_window_g1_ParamLimits

0xf150,	// (0x00026457) popup_preview_fixed_window_g1

0xf15c,	// (0x00026463) popup_preview_fixed_window_g2_ParamLimits

0xf15c,	// (0x00026463) popup_preview_fixed_window_g2

0x0002,

0xfb96,	// (0x00026e9d) popup_preview_fixed_window_g_ParamLimits

0xfb96,	// (0x00026e9d) popup_preview_fixed_window_g

0x52e3,	// (0x0001c5ea) aid_navi_side_left_pane_ParamLimits

0x52f8,	// (0x0001c5ff) aid_navi_side_right_pane_ParamLimits

0x5310,	// (0x0001c617) navi_icon_pane_stacon_ParamLimits

0x5324,	// (0x0001c62b) navi_navi_pane_stacon_ParamLimits

0x5310,	// (0x0001c617) navi_text_pane_stacon_ParamLimits

0xb8f8,	// (0x00022bff) main_text_info_pane

0xf346,	// (0x0002664d) listscroll_text_info_pane

0xf34e,	// (0x00026655) list_text_info_pane_ParamLimits

0xf34e,	// (0x00026655) list_text_info_pane

0xf35d,	// (0x00026664) scroll_pane_cp24_ParamLimits

0xf35d,	// (0x00026664) scroll_pane_cp24

0x9fe0,	// (0x000212e7) list_text_info_pane_t1_ParamLimits

0x9fe0,	// (0x000212e7) list_text_info_pane_t1

0x8a92,	// (0x0001fd99) popup_fast_swap2_window_ParamLimits

0x8a92,	// (0x0001fd99) popup_fast_swap2_window

0xf37b,	// (0x00026682) aid_size_cell_fast2

0xb8f8,	// (0x00022bff) bg_popup_window_pane_cp17

0xd2b5,	// (0x000245bc) heading_pane_cp2

0xbc8d,	// (0x00022f94) listscroll_fast2_pane

0xf385,	// (0x0002668c) grid_fast2_pane

0xf38f,	// (0x00026696) listscroll_fast2_pane_g1

0xf397,	// (0x0002669e) listscroll_fast2_pane_g2

0x0001,

0xfc12,	// (0x00026f19) listscroll_fast2_pane_g

0xc088,	// (0x0002338f) scroll_pane_cp26

0xf3a1,	// (0x000266a8) cell_fast2_pane_ParamLimits

0xf3a1,	// (0x000266a8) cell_fast2_pane

0xf3b6,	// (0x000266bd) cell_fast2_pane_g1

0xf3bf,	// (0x000266c6) cell_fast2_pane_g2

0xf3c8,	// (0x000266cf) cell_fast2_pane_g3

0x0002,

0xfc17,	// (0x00026f1e) cell_fast2_pane_g

0xbccf,	// (0x00022fd6) grid_highlight_pane_cp9

0xbce4,	// (0x00022feb) main_eswt_pane_ParamLimits

0xbce4,	// (0x00022feb) main_eswt_pane

0xf372,	// (0x00026679) list_single_text_info_pane

0xf3d0,	// (0x000266d7) eswt_ctrl_button_pane

0xf3d0,	// (0x000266d7) eswt_ctrl_canvas_pane

0xf3d8,	// (0x000266df) eswt_ctrl_combo_pane

0xf3d0,	// (0x000266d7) eswt_ctrl_default_pane

0xf3d0,	// (0x000266d7) eswt_ctrl_label_pane

0xf3e0,	// (0x000266e7) eswt_ctrl_wait_pane

0xf3e8,	// (0x000266ef) eswt_shell_pane

0xb8f8,	// (0x00022bff) listscroll_eswt_app_pane

0xf408,	// (0x0002670f) popup_eswt_tasktip_window_ParamLimits

0xf408,	// (0x0002670f) popup_eswt_tasktip_window

0xd008,	// (0x0002430f) bg_popup_window_pane_cp18

0xf419,	// (0x00026720) eswt_control_pane_g1_ParamLimits

0xf419,	// (0x00026720) eswt_control_pane_g1

0xf426,	// (0x0002672d) eswt_control_pane_g2_ParamLimits

0xf426,	// (0x0002672d) eswt_control_pane_g2

0xf433,	// (0x0002673a) eswt_control_pane_g3_ParamLimits

0xf433,	// (0x0002673a) eswt_control_pane_g3

0xf440,	// (0x00026747) eswt_control_pane_g4_ParamLimits

0xf440,	// (0x00026747) eswt_control_pane_g4

0x0003,

0xfc1e,	// (0x00026f25) eswt_control_pane_g_ParamLimits

0xfc1e,	// (0x00026f25) eswt_control_pane_g

0xbf69,	// (0x00023270) bg_button_pane_ParamLimits

0xbf69,	// (0x00023270) bg_button_pane

0xbce4,	// (0x00022feb) common_borders_pane_copy2_ParamLimits

0xbce4,	// (0x00022feb) common_borders_pane_copy2

0xf44d,	// (0x00026754) control_button_pane_g1_ParamLimits

0xf44d,	// (0x00026754) control_button_pane_g1

0xf459,	// (0x00026760) control_button_pane_g2_ParamLimits

0xf459,	// (0x00026760) control_button_pane_g2

0xf465,	// (0x0002676c) control_button_pane_g3_ParamLimits

0xf465,	// (0x0002676c) control_button_pane_g3

0x0002,

0xfc27,	// (0x00026f2e) control_button_pane_g_ParamLimits

0xfc27,	// (0x00026f2e) control_button_pane_g

0xf479,	// (0x00026780) control_button_pane_t1

0xf487,	// (0x0002678e) control_button_pane_t2

0x0001,

0xfc2e,	// (0x00026f35) control_button_pane_t

0xcf18,	// (0x0002421f) bg_button_pane_g1

0xcf20,	// (0x00024227) bg_button_pane_g2

0xcf28,	// (0x0002422f) bg_button_pane_g3

0xcf30,	// (0x00024237) bg_button_pane_g4

0xcf38,	// (0x0002423f) bg_button_pane_g5

0xcf40,	// (0x00024247) bg_button_pane_g6

0xcf48,	// (0x0002424f) bg_button_pane_g7

0xcf50,	// (0x00024257) bg_button_pane_g8

0xcf58,	// (0x0002425f) bg_button_pane_g9

0x0008,

0xf89a,	// (0x00026ba1) bg_button_pane_g

0xec51,	// (0x00025f58) common_borders_pane_ParamLimits

0xec51,	// (0x00025f58) common_borders_pane

0xf419,	// (0x00026720) eswt_control_pane_g1_copy1_ParamLimits

0xf419,	// (0x00026720) eswt_control_pane_g1_copy1

0xf426,	// (0x0002672d) eswt_control_pane_g2_copy1_ParamLimits

0xf426,	// (0x0002672d) eswt_control_pane_g2_copy1

0xf433,	// (0x0002673a) eswt_control_pane_g3_copy1_ParamLimits

0xf433,	// (0x0002673a) eswt_control_pane_g3_copy1

0xf440,	// (0x00026747) eswt_control_pane_g4_copy1_ParamLimits

0xf440,	// (0x00026747) eswt_control_pane_g4_copy1

0xec8c,	// (0x00025f93) bg_eswt_ctrl_canvas_pane_g1

0xec51,	// (0x00025f58) common_borders_pane_cp2_ParamLimits

0xec51,	// (0x00025f58) common_borders_pane_cp2

0xec51,	// (0x00025f58) common_borders_pane_cp3_ParamLimits

0xec51,	// (0x00025f58) common_borders_pane_cp3

0xf495,	// (0x0002679c) separator_horizontal_pane

0xf49d,	// (0x000267a4) separator_vertical_pane

0xf419,	// (0x00026720) eswt_control_pane_g1_copy2_ParamLimits

0xf419,	// (0x00026720) eswt_control_pane_g1_copy2

0xf426,	// (0x0002672d) eswt_control_pane_g2_copy2_ParamLimits

0xf426,	// (0x0002672d) eswt_control_pane_g2_copy2

0xf433,	// (0x0002673a) eswt_control_pane_g3_copy2_ParamLimits

0xf433,	// (0x0002673a) eswt_control_pane_g3_copy2

0xf440,	// (0x00026747) eswt_control_pane_g4_copy2_ParamLimits

0xf440,	// (0x00026747) eswt_control_pane_g4_copy2

0xb8f8,	// (0x00022bff) common_borders_pane_cp4

0xf4a6,	// (0x000267ad) separator_horizontal_pane_g1

0xf4af,	// (0x000267b6) separator_horizontal_pane_g2

0xf4b8,	// (0x000267bf) separator_horizontal_pane_g3

0x0002,

0xfc33,	// (0x00026f3a) separator_horizontal_pane_g

0xf419,	// (0x00026720) eswt_control_pane_g1_copy3_ParamLimits

0xf419,	// (0x00026720) eswt_control_pane_g1_copy3

0xf426,	// (0x0002672d) eswt_control_pane_g2_copy3_ParamLimits

0xf426,	// (0x0002672d) eswt_control_pane_g2_copy3

0xf433,	// (0x0002673a) eswt_control_pane_g3_copy3_ParamLimits

0xf433,	// (0x0002673a) eswt_control_pane_g3_copy3

0xf440,	// (0x00026747) eswt_control_pane_g4_copy3_ParamLimits

0xf440,	// (0x00026747) eswt_control_pane_g4_copy3

0xb8f8,	// (0x00022bff) common_borders_pane_cp5

0xf4c1,	// (0x000267c8) separator_vertical_pane_g1

0xf4ca,	// (0x000267d1) separator_vertical_pane_g2

0xf4d3,	// (0x000267da) separator_vertical_pane_g3

0x0002,

0xfc3a,	// (0x00026f41) separator_vertical_pane_g

0xf419,	// (0x00026720) eswt_control_pane_g1_copy4_ParamLimits

0xf419,	// (0x00026720) eswt_control_pane_g1_copy4

0xf426,	// (0x0002672d) eswt_control_pane_g2_copy4_ParamLimits

0xf426,	// (0x0002672d) eswt_control_pane_g2_copy4

0xf433,	// (0x0002673a) eswt_control_pane_g3_copy4_ParamLimits

0xf433,	// (0x0002673a) eswt_control_pane_g3_copy4

0xf440,	// (0x00026747) eswt_control_pane_g4_copy4_ParamLimits

0xf440,	// (0x00026747) eswt_control_pane_g4_copy4

0x9ffb,	// (0x00021302) eswt_ctrl_combo_button_pane

0xa003,	// (0x0002130a) eswt_ctrl_input_pane

0xa00b,	// (0x00021312) popup_choice_list_window_cp70

0xa013,	// (0x0002131a) eswt_ctrl_input_pane_t1

0xb8f8,	// (0x00022bff) input_focus_pane_cp70

0xec51,	// (0x00025f58) bg_button_pane_cp70_ParamLimits

0xec51,	// (0x00025f58) bg_button_pane_cp70

0xa021,	// (0x00021328) eswt_ctrl_combo_button_pane_g1

0xf4dc,	// (0x000267e3) wait_bar_pane_cp70

0xd008,	// (0x0002430f) bg_popup_window_pane_cp70_ParamLimits

0xd008,	// (0x0002430f) bg_popup_window_pane_cp70

0xf4e4,	// (0x000267eb) popup_eswt_tasktip_window_t1

0xf4fa,	// (0x00026801) wait_bar_pane_cp71_ParamLimits

0xf4fa,	// (0x00026801) wait_bar_pane_cp71

0xf506,	// (0x0002680d) grid_eswt_app_pane

0xc2dc,	// (0x000235e3) scroll_pane_cp70

0xa029,	// (0x00021330) cell_eswt_app_pane_ParamLimits

0xa029,	// (0x00021330) cell_eswt_app_pane

0xa053,	// (0x0002135a) cell_eswt_app_pane_g1_ParamLimits

0xa053,	// (0x0002135a) cell_eswt_app_pane_g1

0xa082,	// (0x00021389) cell_eswt_app_pane_g2_ParamLimits

0xa082,	// (0x00021389) cell_eswt_app_pane_g2

0x0001,

0xfc41,	// (0x00026f48) cell_eswt_app_pane_g_ParamLimits

0xfc41,	// (0x00026f48) cell_eswt_app_pane_g

0xa0ab,	// (0x000213b2) cell_eswt_app_pane_t1_ParamLimits

0xa0ab,	// (0x000213b2) cell_eswt_app_pane_t1

0xf50f,	// (0x00026816) grid_highlight_pane_cp70_ParamLimits

0xf50f,	// (0x00026816) grid_highlight_pane_cp70

0xc863,	// (0x00023b6a) set_content_pane_g1

0xcb6d,	// (0x00023e74) status_small_volume_pane

0x5f23,	// (0x0001d22a) status_small_volume_pane_g1

0x5f2b,	// (0x0001d232) volume_small2_pane

0x5f34,	// (0x0001d23b) volume_small2_pane_g1

0x5f3d,	// (0x0001d244) volume_small2_pane_g2

0x5f46,	// (0x0001d24d) volume_small2_pane_g3

0x5f4f,	// (0x0001d256) volume_small2_pane_g4

0x5f58,	// (0x0001d25f) volume_small2_pane_g5

0x5f61,	// (0x0001d268) volume_small2_pane_g6

0x5f6a,	// (0x0001d271) volume_small2_pane_g7

0x5f73,	// (0x0001d27a) volume_small2_pane_g8

0x5f7c,	// (0x0001d283) volume_small2_pane_g9

0x5f85,	// (0x0001d28c) volume_small2_pane_g10

0x0009,

0xfc46,	// (0x00026f4d) volume_small2_pane_g

0xef40,	// (0x00026247) fep_vkb_top_text_pane_g1_ParamLimits

0x9f88,	// (0x0002128f) fep_vkb_top_text_pane_t1_ParamLimits

0xf168,	// (0x0002646f) popup_preview_fixed_window_g3_ParamLimits

0xf168,	// (0x0002646f) popup_preview_fixed_window_g3

0x908b,	// (0x00020392) popup_toolbar_trans_pane

0x991c,	// (0x00020c23) aid_height_set_list_ParamLimits

0xdc60,	// (0x00024f67) aid_size_parent_ParamLimits

0xc0c1,	// (0x000233c8) list_highlight_pane_cp2_ParamLimits

0xc863,	// (0x00023b6a) set_content_pane_g1_ParamLimits

0x9ab7,	// (0x00020dbe) list_single_image_pane_ParamLimits

0x9ab7,	// (0x00020dbe) list_single_image_pane

0xf51b,	// (0x00026822) aid_size_cell_image_ParamLimits

0xf51b,	// (0x00026822) aid_size_cell_image

0xa0dd,	// (0x000213e4) grid_single_image_pane_ParamLimits

0xa0dd,	// (0x000213e4) grid_single_image_pane

0xcd35,	// (0x0002403c) list_single_image_pane_g1_ParamLimits

0xcd35,	// (0x0002403c) list_single_image_pane_g1

0xf1d7,	// (0x000264de) list_single_image_pane_g2_ParamLimits

0xf1d7,	// (0x000264de) list_single_image_pane_g2

0x0001,

0xfc5b,	// (0x00026f62) list_single_image_pane_g_ParamLimits

0xfc5b,	// (0x00026f62) list_single_image_pane_g

0xcd4f,	// (0x00024056) list_single_image_pane_t1_ParamLimits

0xcd4f,	// (0x00024056) list_single_image_pane_t1

0xa0eb,	// (0x000213f2) cell_image_list_pane_ParamLimits

0xa0eb,	// (0x000213f2) cell_image_list_pane

0xf528,	// (0x0002682f) cell_image_list_pane_g1

0xf531,	// (0x00026838) cell_image_list_pane_g2

0x0001,

0xfc60,	// (0x00026f67) cell_image_list_pane_g

0xf53a,	// (0x00026841) aid_size_cell_tb_trans_pane

0xbf69,	// (0x00023270) bg_tb_trans_pane

0xf54c,	// (0x00026853) grid_tb_trans_pane

0xcf18,	// (0x0002421f) bg_tb_trans_pane_g1

0xcf20,	// (0x00024227) bg_tb_trans_pane_g2

0xcf28,	// (0x0002422f) bg_tb_trans_pane_g3

0xcf30,	// (0x00024237) bg_tb_trans_pane_g4

0xcf38,	// (0x0002423f) bg_tb_trans_pane_g5

0xcf50,	// (0x00024257) bg_tb_trans_pane_g6

0xcf58,	// (0x0002425f) bg_tb_trans_pane_g7

0xcf40,	// (0x00024247) bg_tb_trans_pane_g8

0xcf48,	// (0x0002424f) bg_tb_trans_pane_g9

0x0008,

0xfc65,	// (0x00026f6c) bg_tb_trans_pane_g

0xf560,	// (0x00026867) cell_toolbar_trans_pane_ParamLimits

0xf560,	// (0x00026867) cell_toolbar_trans_pane

0xec8c,	// (0x00025f93) cell_toolbar_trans_pane_g1

0x9d17,	// (0x0002101e) list_form2_midp_pane_t1

0x9d25,	// (0x0002102c) list_form2_midp_pane_t2

0x0001,

0xfb0e,	// (0x00026e15) list_form2_midp_pane_t

0xe9de,	// (0x00025ce5) scroll_pane_cp51_ParamLimits

0xeb55,	// (0x00025e5c) form2_midp_wait_pane_g1

0xeb5e,	// (0x00025e65) form2_midp_wait_pane_g2

0xeb67,	// (0x00025e6e) form2_midp_wait_pane_g3

0x0002,

0xfb23,	// (0x00026e2a) form2_midp_wait_pane_g

0xb968,	// (0x00022c6f) list_highlight_pane_cp21_ParamLimits

0xeb8f,	// (0x00025e96) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xeb9e,	// (0x00025ea5) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe0e4,	// (0x000253eb) list_single_2graphic_im_pane_ParamLimits

0xe0e4,	// (0x000253eb) list_single_2graphic_im_pane

0xa101,	// (0x00021408) list_single_2graphic_im_pane_g1_ParamLimits

0xa101,	// (0x00021408) list_single_2graphic_im_pane_g1

0xa112,	// (0x00021419) list_single_2graphic_im_pane_g2_ParamLimits

0xa112,	// (0x00021419) list_single_2graphic_im_pane_g2

0xa11e,	// (0x00021425) list_single_2graphic_im_pane_g3_ParamLimits

0xa11e,	// (0x00021425) list_single_2graphic_im_pane_g3

0x0003,

0xfc78,	// (0x00026f7f) list_single_2graphic_im_pane_g_ParamLimits

0xfc78,	// (0x00026f7f) list_single_2graphic_im_pane_g

0xa132,	// (0x00021439) list_single_2graphic_im_pane_t1_ParamLimits

0xa132,	// (0x00021439) list_single_2graphic_im_pane_t1

0xf174,	// (0x0002647b) list_single_graphic_2heading_pane_fp_ParamLimits

0xf174,	// (0x0002647b) list_single_graphic_2heading_pane_fp

0x4a1d,	// (0x0001bd24) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4a1d,	// (0x0001bd24) list_single_graphic_2heading_pane_fp_g1

0xf189,	// (0x00026490) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xf189,	// (0x00026490) list_single_graphic_2heading_pane_fp_g2

0x49e6,	// (0x0001bced) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x49e6,	// (0x0001bced) list_single_graphic_2heading_pane_fp_g3

0x49f2,	// (0x0001bcf9) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x49f2,	// (0x0001bcf9) list_single_graphic_2heading_pane_fp_g4

0xf195,	// (0x0002649c) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xf195,	// (0x0002649c) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba6,	// (0x00026ead) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba6,	// (0x00026ead) list_single_graphic_2heading_pane_fp_g

0x4bea,	// (0x0001bef1) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4bea,	// (0x0001bef1) list_single_graphic_2heading_pane_fp_t1

0x4a55,	// (0x0001bd5c) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4a55,	// (0x0001bd5c) list_single_graphic_2heading_pane_fp_t2

0x4c00,	// (0x0001bf07) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4c00,	// (0x0001bf07) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc81,	// (0x00026f88) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc81,	// (0x00026f88) list_single_graphic_2heading_pane_fp_t

0xed2c,	// (0x00026033) fep_hwr_write_pane_g5_ParamLimits

0xed2c,	// (0x00026033) fep_hwr_write_pane_g5

0xed38,	// (0x0002603f) fep_hwr_write_pane_g6_ParamLimits

0xed38,	// (0x0002603f) fep_hwr_write_pane_g6

0xf3e8,	// (0x000266ef) eswt_shell_pane_ParamLimits

0xd008,	// (0x0002430f) bg_popup_window_pane_cp18_ParamLimits

0xe01e,	// (0x00025325) heading_pane_cp70

0xf4e4,	// (0x000267eb) popup_eswt_tasktip_window_t1_ParamLimits

0x914c,	// (0x00020453) aid_touch_tab_arrow_left

0x9162,	// (0x00020469) aid_touch_tab_arrow_right

0x825e,	// (0x0001f565) title_pane_g3_ParamLimits

0x825e,	// (0x0001f565) title_pane_g3

0xbf28,	// (0x0002322f) set_value_pane_g1

0x908b,	// (0x00020392) popup_toolbar_trans_pane_ParamLimits

0xf53a,	// (0x00026841) aid_size_cell_tb_trans_pane_ParamLimits

0xbf69,	// (0x00023270) bg_tb_trans_pane_ParamLimits

0xf54c,	// (0x00026853) grid_tb_trans_pane_ParamLimits

0xba9b,	// (0x00022da2) cont_note_pane_ParamLimits

0xba9b,	// (0x00022da2) cont_note_pane

0xbce4,	// (0x00022feb) cont_snote2_single_text_pane_ParamLimits

0xbce4,	// (0x00022feb) cont_snote2_single_text_pane

0xbce4,	// (0x00022feb) cont_snote2_single_graphic_pane_ParamLimits

0xbce4,	// (0x00022feb) cont_snote2_single_graphic_pane

0xd49f,	// (0x000247a6) cont_note_wait_pane_ParamLimits

0xd49f,	// (0x000247a6) cont_note_wait_pane

0xd49f,	// (0x000247a6) cont_note_image_pane_ParamLimits

0xd49f,	// (0x000247a6) cont_note_image_pane

0x0008,	// (0x0001730f) popup_note2_window_g1_ParamLimits

0x0008,	// (0x0001730f) popup_note2_window_g1

0x0039,	// (0x00017340) popup_note2_window_t1_ParamLimits

0x0039,	// (0x00017340) popup_note2_window_t1

0x007e,	// (0x00017385) popup_note2_window_t2_ParamLimits

0x007e,	// (0x00017385) popup_note2_window_t2

0x00c3,	// (0x000173ca) popup_note2_window_t3_ParamLimits

0x00c3,	// (0x000173ca) popup_note2_window_t3

0x0108,	// (0x0001740f) popup_note2_window_t4_ParamLimits

0x0108,	// (0x0001740f) popup_note2_window_t4

0xbb1f,	// (0x00022e26) popup_note2_window_t5_ParamLimits

0xbb1f,	// (0x00022e26) popup_note2_window_t5

0x0004,

0xfc8d,	// (0x00026f94) popup_note2_window_t_ParamLimits

0xfc8d,	// (0x00026f94) popup_note2_window_t

0x0137,	// (0x0001743e) popup_note2_image_window_g1_ParamLimits

0x0137,	// (0x0001743e) popup_note2_image_window_g1

0x0143,	// (0x0001744a) popup_note2_image_window_g2_ParamLimits

0x0143,	// (0x0001744a) popup_note2_image_window_g2

0x0001,

0xfc98,	// (0x00026f9f) popup_note2_image_window_g_ParamLimits

0xfc98,	// (0x00026f9f) popup_note2_image_window_g

0x0155,	// (0x0001745c) popup_note2_image_window_t1_ParamLimits

0x0155,	// (0x0001745c) popup_note2_image_window_t1

0x016d,	// (0x00017474) popup_note2_image_window_t2_ParamLimits

0x016d,	// (0x00017474) popup_note2_image_window_t2

0x0185,	// (0x0001748c) popup_note2_image_window_t3_ParamLimits

0x0185,	// (0x0001748c) popup_note2_image_window_t3

0x0002,

0xfc9d,	// (0x00026fa4) popup_note2_image_window_t_ParamLimits

0xfc9d,	// (0x00026fa4) popup_note2_image_window_t

0xd4ad,	// (0x000247b4) popup_note2_wait_window_g1_ParamLimits

0xd4ad,	// (0x000247b4) popup_note2_wait_window_g1

0x01a1,	// (0x000174a8) popup_note2_wait_window_g2_ParamLimits

0x01a1,	// (0x000174a8) popup_note2_wait_window_g2

0xd4c5,	// (0x000247cc) popup_note2_wait_window_g3_ParamLimits

0xd4c5,	// (0x000247cc) popup_note2_wait_window_g3

0x0002,

0xfca4,	// (0x00026fab) popup_note2_wait_window_g_ParamLimits

0xfca4,	// (0x00026fab) popup_note2_wait_window_g

0x01ad,	// (0x000174b4) popup_note2_wait_window_t1_ParamLimits

0x01ad,	// (0x000174b4) popup_note2_wait_window_t1

0x01cb,	// (0x000174d2) popup_note2_wait_window_t2_ParamLimits

0x01cb,	// (0x000174d2) popup_note2_wait_window_t2

0x01e9,	// (0x000174f0) popup_note2_wait_window_t3_ParamLimits

0x01e9,	// (0x000174f0) popup_note2_wait_window_t3

0x01fb,	// (0x00017502) popup_note2_wait_window_t4_ParamLimits

0x01fb,	// (0x00017502) popup_note2_wait_window_t4

0x0003,

0xfcab,	// (0x00026fb2) popup_note2_wait_window_t_ParamLimits

0xfcab,	// (0x00026fb2) popup_note2_wait_window_t

0x020d,	// (0x00017514) wait_bar2_pane_ParamLimits

0x020d,	// (0x00017514) wait_bar2_pane

0x0225,	// (0x0001752c) popup_snote2_single_text_window_g1_ParamLimits

0x0225,	// (0x0001752c) popup_snote2_single_text_window_g1

0x024d,	// (0x00017554) popup_snote2_single_text_window_t1_ParamLimits

0x024d,	// (0x00017554) popup_snote2_single_text_window_t1

0x0299,	// (0x000175a0) popup_snote2_single_text_window_t2_ParamLimits

0x0299,	// (0x000175a0) popup_snote2_single_text_window_t2

0x02e5,	// (0x000175ec) popup_snote2_single_text_window_t3_ParamLimits

0x02e5,	// (0x000175ec) popup_snote2_single_text_window_t3

0x0326,	// (0x0001762d) popup_snote2_single_text_window_t4_ParamLimits

0x0326,	// (0x0001762d) popup_snote2_single_text_window_t4

0x035c,	// (0x00017663) popup_snote2_single_text_window_t5_ParamLimits

0x035c,	// (0x00017663) popup_snote2_single_text_window_t5

0x0004,

0xfcb4,	// (0x00026fbb) popup_snote2_single_text_window_t_ParamLimits

0xfcb4,	// (0x00026fbb) popup_snote2_single_text_window_t

0x0387,	// (0x0001768e) popup_snote2_single_graphic_window_g1_ParamLimits

0x0387,	// (0x0001768e) popup_snote2_single_graphic_window_g1

0x03af,	// (0x000176b6) popup_snote2_single_graphic_window_g2_ParamLimits

0x03af,	// (0x000176b6) popup_snote2_single_graphic_window_g2

0x0001,

0xfcbf,	// (0x00026fc6) popup_snote2_single_graphic_window_g_ParamLimits

0xfcbf,	// (0x00026fc6) popup_snote2_single_graphic_window_g

0x03d7,	// (0x000176de) popup_snote2_single_graphic_window_t1_ParamLimits

0x03d7,	// (0x000176de) popup_snote2_single_graphic_window_t1

0x0423,	// (0x0001772a) popup_snote2_single_graphic_window_t2_ParamLimits

0x0423,	// (0x0001772a) popup_snote2_single_graphic_window_t2

0x02e5,	// (0x000175ec) popup_snote2_single_graphic_window_t3_ParamLimits

0x02e5,	// (0x000175ec) popup_snote2_single_graphic_window_t3

0x0326,	// (0x0001762d) popup_snote2_single_graphic_window_t4_ParamLimits

0x0326,	// (0x0001762d) popup_snote2_single_graphic_window_t4

0x035c,	// (0x00017663) popup_snote2_single_graphic_window_t5_ParamLimits

0x035c,	// (0x00017663) popup_snote2_single_graphic_window_t5

0x0004,

0xfcc4,	// (0x00026fcb) popup_snote2_single_graphic_window_t_ParamLimits

0xfcc4,	// (0x00026fcb) popup_snote2_single_graphic_window_t

0xe994,	// (0x00025c9b) clock_nsta_pane_cp2_t1

0xe994,	// (0x00025c9b) clock_nsta_pane_cp2_t2

0x0001,

0xfae4,	// (0x00026deb) clock_nsta_pane_cp2_t

0x431a,	// (0x0001b621) form_field_data_wide_pane_g1_ParamLimits

0xbf83,	// (0x0002328a) form_field_data_wide_pane_g2_ParamLimits

0xbf83,	// (0x0002328a) form_field_data_wide_pane_g2

0xbf8f,	// (0x00023296) form_field_data_wide_pane_g3_ParamLimits

0xbf8f,	// (0x00023296) form_field_data_wide_pane_g3

0x0002,

0xf6bf,	// (0x000269c6) form_field_data_wide_pane_g_ParamLimits

0xf6bf,	// (0x000269c6) form_field_data_wide_pane_g

0x9c31,	// (0x00020f38) grid_touch_3_pane_ParamLimits

0x9c31,	// (0x00020f38) grid_touch_3_pane

0xa163,	// (0x0002146a) cell_touch_3_pane_ParamLimits

0xa163,	// (0x0002146a) cell_touch_3_pane

0xec8c,	// (0x00025f93) cell_touch_3_pane_g1

0xec8c,	// (0x00025f93) cell_touch_3_pane_g2

0x0001,

0xfb69,	// (0x00026e70) cell_touch_3_pane_g

0xbb51,	// (0x00022e58) cont_query_data_pane

0xbb59,	// (0x00022e60) cont_query_data_pane_cp1

0x049d,	// (0x000177a4) button_value_adjust_pane_cp7

0x04a5,	// (0x000177ac) query_popup_pane_cp3

0xc4fd,	// (0x00023804) bg_popup_sub_pane_cp22_ParamLimits

0x5425,	// (0x0001c72c) navi_navi_volume_pane_cp2

0x5440,	// (0x0001c747) popup_side_volume_key_window_g2

0x544f,	// (0x0001c756) popup_side_volume_key_window_g3

0x0002,

0xf751,	// (0x00026a58) popup_side_volume_key_window_g

0x546c,	// (0x0001c773) popup_side_volume_key_window_t2

0x0001,

0xf758,	// (0x00026a5f) popup_side_volume_key_window_t

0xc72d,	// (0x00023a34) popup_side_volume_key_window_ParamLimits

0x7999,	// (0x0001eca0) list_double_graphic_pane_g4_ParamLimits

0x7999,	// (0x0001eca0) list_double_graphic_pane_g4

0x9aa4,	// (0x00020dab) list_single_2heading_msg_pane_ParamLimits

0x9aa4,	// (0x00020dab) list_single_2heading_msg_pane

0x7eed,	// (0x0001f1f4) list_single_2heading_msg_pane_g1_ParamLimits

0x7eed,	// (0x0001f1f4) list_single_2heading_msg_pane_g1

0x7ef9,	// (0x0001f200) list_single_2heading_msg_pane_g2_ParamLimits

0x7ef9,	// (0x0001f200) list_single_2heading_msg_pane_g2

0x7f0c,	// (0x0001f213) list_single_2heading_msg_pane_g3_ParamLimits

0x7f0c,	// (0x0001f213) list_single_2heading_msg_pane_g3

0x7f18,	// (0x0001f21f) list_single_2heading_msg_pane_g4_ParamLimits

0x7f18,	// (0x0001f21f) list_single_2heading_msg_pane_g4

0x0003,

0xfccf,	// (0x00026fd6) list_single_2heading_msg_pane_g_ParamLimits

0xfccf,	// (0x00026fd6) list_single_2heading_msg_pane_g

0x7f30,	// (0x0001f237) list_single_2heading_msg_pane_t1_ParamLimits

0x7f30,	// (0x0001f237) list_single_2heading_msg_pane_t1

0x7f58,	// (0x0001f25f) list_single_2heading_msg_pane_t2_ParamLimits

0x7f58,	// (0x0001f25f) list_single_2heading_msg_pane_t2

0x7fc3,	// (0x0001f2ca) list_single_2heading_msg_pane_t3_ParamLimits

0x7fc3,	// (0x0001f2ca) list_single_2heading_msg_pane_t3

0x4ce5,	// (0x0001bfec) list_single_2heading_msg_pane_t4_ParamLimits

0x4ce5,	// (0x0001bfec) list_single_2heading_msg_pane_t4

0x0003,

0xfcd8,	// (0x00026fdf) list_single_2heading_msg_pane_t_ParamLimits

0xfcd8,	// (0x00026fdf) list_single_2heading_msg_pane_t

0xb916,	// (0x00022c1d) title_pane_g4_ParamLimits

0xb916,	// (0x00022c1d) title_pane_g4

0x5233,	// (0x0001c53a) title_pane_stacon_g3_ParamLimits

0x5233,	// (0x0001c53a) title_pane_stacon_g3

0xf586,	// (0x0002688d) list_single_2graphic_im_pane_g4_ParamLimits

0xf586,	// (0x0002688d) list_single_2graphic_im_pane_g4

0xde42,	// (0x00025149) popup_side_volume_key_window_cp

0xe30f,	// (0x00025616) main_idle_act2_pane_t1

0x57f1,	// (0x0001caf8) toolbar_button_pane_g10

0x85cb,	// (0x0001f8d2) popup_toolbar_window_cp1

0xe985,	// (0x00025c8c) clock_nsta_pane_cp_t1

0xe985,	// (0x00025c8c) clock_nsta_pane_cp_t2

0x0001,

0xfadf,	// (0x00026de6) clock_nsta_pane_cp_t

0x5425,	// (0x0001c72c) navi_navi_volume_pane_cp2_ParamLimits

0x5434,	// (0x0001c73b) popup_side_volume_key_window_g1_ParamLimits

0x5440,	// (0x0001c747) popup_side_volume_key_window_g2_ParamLimits

0x544f,	// (0x0001c756) popup_side_volume_key_window_g3_ParamLimits

0xf751,	// (0x00026a58) popup_side_volume_key_window_g_ParamLimits

0x5c33,	// (0x0001cf3a) fep_hwr_aid_pane

0x2bb6,	// (0x00019ebd) bg_fep_hwr_top_pane_g4_ParamLimits

0xecfc,	// (0x00026003) fep_hwr_top_pane_g1_ParamLimits

0xed0e,	// (0x00026015) fep_hwr_top_pane_g2_ParamLimits

0x5cec,	// (0x0001cff3) fep_hwr_top_pane_g3_ParamLimits

0xfb34,	// (0x00026e3b) fep_hwr_top_pane_g_ParamLimits

0x5d01,	// (0x0001d008) fep_hwr_top_text_pane_ParamLimits

0xdbdb,	// (0x00024ee2) aid_touch_tab_arrow_arrow_2

0xdbe4,	// (0x00024eeb) aid_touch_tab_arrow_left_2

0x5c47,	// (0x0001cf4e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5c7e,	// (0x0001cf85) fep_hwr_prediction_pane

0xedfb,	// (0x00026102) fep_vkb_prediction_pane

0x9f68,	// (0x0002126f) fep_vkb_side_pane_g3_ParamLimits

0x9f68,	// (0x0002126f) fep_vkb_side_pane_g3

0xee33,	// (0x0002613a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xf1fd,	// (0x00026504) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xf20a,	// (0x00026511) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbde,	// (0x00026ee5) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x05b9,	// (0x000178c0) fep_hwr_prediction_pane_g1

0x5f8e,	// (0x0001d295) fep_hwr_prediction_pane_g2

0x5f96,	// (0x0001d29d) fep_hwr_prediction_pane_g3

0x5f9e,	// (0x0001d2a5) fep_hwr_prediction_pane_g4

0x0003,

0xfce1,	// (0x00026fe8) fep_hwr_prediction_pane_g

0x05b9,	// (0x000178c0) fep_vkb_prediction_pane_g1

0x05c3,	// (0x000178ca) fep_vkb_prediction_pane_g2

0x05cb,	// (0x000178d2) fep_vkb_prediction_pane_g3

0x05d3,	// (0x000178da) fep_vkb_prediction_pane_g4

0x0003,

0xfcea,	// (0x00026ff1) fep_vkb_prediction_pane_g

0x5ac1,	// (0x0001cdc8) slider_set_pane_g3

0x5ad5,	// (0x0001cddc) slider_set_pane_g4

0x5aed,	// (0x0001cdf4) slider_set_pane_g5

0x5ac1,	// (0x0001cdc8) slider_set_pane_g6

0x5b03,	// (0x0001ce0a) slider_set_pane_g7

0xe0a9,	// (0x000253b0) slider_form_pane_g3

0xe0b2,	// (0x000253b9) slider_form_pane_g4

0xe0ba,	// (0x000253c1) slider_form_pane_g5

0xe0a9,	// (0x000253b0) slider_form_pane_g6

0x9a67,	// (0x00020d6e) slider_form_pane_g7

0xe561,	// (0x00025868) slider_set_pane_vc_g3

0xe56a,	// (0x00025871) slider_set_pane_vc_g4

0xe573,	// (0x0002587a) slider_set_pane_vc_g5

0xe561,	// (0x00025868) slider_set_pane_vc_g6

0xe57c,	// (0x00025883) slider_set_pane_vc_g7

0xe561,	// (0x00025868) slider_form_pane_vc_g1

0xe56a,	// (0x00025871) slider_form_pane_vc_g2

0xe573,	// (0x0002587a) slider_form_pane_vc_g3

0xe561,	// (0x00025868) slider_form_pane_vc_g4

0xe72f,	// (0x00025a36) slider_form_pane_vc_g5

0x0004,

0xfac5,	// (0x00026dcc) slider_form_pane_vc_g

0xb8f8,	// (0x00022bff) main_idle_act3_pane

0x05db,	// (0x000178e2) ai3_links_pane

0xa1ac,	// (0x000214b3) popup_ai3_data_window_ParamLimits

0xa1ac,	// (0x000214b3) popup_ai3_data_window

0xb8f8,	// (0x00022bff) grid_ai3_links_pane

0xa1c6,	// (0x000214cd) cell_ai3_links_pane_ParamLimits

0xa1c6,	// (0x000214cd) cell_ai3_links_pane

0x0616,	// (0x0001791d) bg_popup_sub_pane_cp11

0x0623,	// (0x0001792a) cell_ai3_links_pane_g1

0xb8f8,	// (0x00022bff) bg_popup_sub_pane_cp12

0x0648,	// (0x0001794f) heading_ai3_data_pane

0x0650,	// (0x00017957) list_ai3_gene_pane

0x065c,	// (0x00017963) popup_ai3_data_window_g1

0x0664,	// (0x0001796b) heading_ai3_data_pane_g1

0x066c,	// (0x00017973) heading_ai3_data_pane_t1

0x067a,	// (0x00017981) list_double_ai3_gene_pane_ParamLimits

0x067a,	// (0x00017981) list_double_ai3_gene_pane

0x0687,	// (0x0001798e) list_single_ai3_gene_pane_ParamLimits

0x0687,	// (0x0001798e) list_single_ai3_gene_pane

0xec51,	// (0x00025f58) list_highlight_pane_cp7_ParamLimits

0xec51,	// (0x00025f58) list_highlight_pane_cp7

0x0694,	// (0x0001799b) list_single_a13_gene_pane_t1_ParamLimits

0x0694,	// (0x0001799b) list_single_a13_gene_pane_t1

0x06ab,	// (0x000179b2) list_single_ai3_gene_pane_g1

0x06b4,	// (0x000179bb) list_single_ai3_gene_pane_g2

0x0001,

0xfcf3,	// (0x00026ffa) list_single_ai3_gene_pane_g

0x06bc,	// (0x000179c3) list_double_ai3_gene_pane_g1_ParamLimits

0x06bc,	// (0x000179c3) list_double_ai3_gene_pane_g1

0x06c8,	// (0x000179cf) list_double_ai3_gene_pane_t1_ParamLimits

0x06c8,	// (0x000179cf) list_double_ai3_gene_pane_t1

0x06e4,	// (0x000179eb) list_double_ai3_gene_pane_t2_ParamLimits

0x06e4,	// (0x000179eb) list_double_ai3_gene_pane_t2

0x06fa,	// (0x00017a01) list_double_ai3_gene_pane_t3_ParamLimits

0x06fa,	// (0x00017a01) list_double_ai3_gene_pane_t3

0x0002,

0xfcf8,	// (0x00026fff) list_double_ai3_gene_pane_t_ParamLimits

0xfcf8,	// (0x00026fff) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4c16,	// (0x0001bf1d) aid_size_min_col_2

0xa196,	// (0x0002149d) aid_size_min_msg_ParamLimits

0xa196,	// (0x0002149d) aid_size_min_msg

0x9f7c,	// (0x00021283) fep_vkb_top_text_pane_g2_ParamLimits

0x9f7c,	// (0x00021283) fep_vkb_top_text_pane_g2

0x0001,

0xfb64,	// (0x00026e6b) fep_vkb_top_text_pane_g_ParamLimits

0xfb64,	// (0x00026e6b) fep_vkb_top_text_pane_g

0xb8f8,	// (0x00022bff) main_hc_apps_shell_pane

0x0717,	// (0x00017a1e) grid_hc_apps_pane_ParamLimits

0x0717,	// (0x00017a1e) grid_hc_apps_pane

0x0726,	// (0x00017a2d) list_hc_apps_pane

0x072e,	// (0x00017a35) scroll_pane_cp37_ParamLimits

0x072e,	// (0x00017a35) scroll_pane_cp37

0xa1e0,	// (0x000214e7) cell_hc_apps_pane_ParamLimits

0xa1e0,	// (0x000214e7) cell_hc_apps_pane

0xa29e,	// (0x000215a5) cell_hc_apps_pane_g1_ParamLimits

0xa29e,	// (0x000215a5) cell_hc_apps_pane_g1

0x0819,	// (0x00017b20) cell_hc_apps_pane_g2_ParamLimits

0x0819,	// (0x00017b20) cell_hc_apps_pane_g2

0x0835,	// (0x00017b3c) cell_hc_apps_pane_g3_ParamLimits

0x0835,	// (0x00017b3c) cell_hc_apps_pane_g3

0x0002,

0xfcff,	// (0x00027006) cell_hc_apps_pane_g_ParamLimits

0xfcff,	// (0x00027006) cell_hc_apps_pane_g

0xa2cb,	// (0x000215d2) cell_hc_apps_pane_t1_ParamLimits

0xa2cb,	// (0x000215d2) cell_hc_apps_pane_t1

0xba9b,	// (0x00022da2) grid_highlight_pane_cp10_ParamLimits

0xba9b,	// (0x00022da2) grid_highlight_pane_cp10

0xa309,	// (0x00021610) list_single_hc_apps_pane_ParamLimits

0xa309,	// (0x00021610) list_single_hc_apps_pane

0xa336,	// (0x0002163d) list_single_hc_apps_pane_g1

0x8031,	// (0x0001f338) list_single_hc_apps_pane_g2

0x0001,

0xfd06,	// (0x0002700d) list_single_hc_apps_pane_g

0x804a,	// (0x0001f351) list_single_hc_apps_pane_g2_copy1

0x8066,	// (0x0001f36d) list_single_hc_apps_pane_t1

0xb968,	// (0x00022c6f) bg_set_opt_pane_cp_ParamLimits

0x515a,	// (0x0001c461) setting_slider_pane_t1_ParamLimits

0x5173,	// (0x0001c47a) setting_slider_pane_t2_ParamLimits

0x518d,	// (0x0001c494) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x000268a9) setting_slider_pane_t_ParamLimits

0x51a5,	// (0x0001c4ac) slider_set_pane_ParamLimits

0x56cd,	// (0x0001c9d4) control_pane_g5_ParamLimits

0x56cd,	// (0x0001c9d4) control_pane_g5

0xe065,	// (0x0002536c) slider_set_pane_g1_ParamLimits

0x5ab5,	// (0x0001cdbc) slider_set_pane_g2_ParamLimits

0x5ac1,	// (0x0001cdc8) slider_set_pane_g3_ParamLimits

0x5ad5,	// (0x0001cddc) slider_set_pane_g4_ParamLimits

0x5aed,	// (0x0001cdf4) slider_set_pane_g5_ParamLimits

0x5ac1,	// (0x0001cdc8) slider_set_pane_g6_ParamLimits

0x5b03,	// (0x0001ce0a) slider_set_pane_g7_ParamLimits

0xf998,	// (0x00026c9f) slider_set_pane_g_ParamLimits

0xc80e,	// (0x00023b15) navi_icon_text_pane_ParamLimits

0x9118,	// (0x0002041f) aid_fill_nsta_2_ParamLimits

0x914c,	// (0x00020453) aid_touch_tab_arrow_left_ParamLimits

0x9162,	// (0x00020469) aid_touch_tab_arrow_right_ParamLimits

0x91fd,	// (0x00020504) clock_nsta_pane_ParamLimits

0x9843,	// (0x00020b4a) navi_icon_pane_g1_ParamLimits

0x984f,	// (0x00020b56) navi_text_pane_t1_ParamLimits

0x9cf9,	// (0x00021000) navi_icon_text_pane_g1_ParamLimits

0x9d05,	// (0x0002100c) navi_icon_text_pane_t1_ParamLimits

0xa336,	// (0x0002163d) list_single_hc_apps_pane_g1_ParamLimits

0x8031,	// (0x0001f338) list_single_hc_apps_pane_g2_ParamLimits

0xfd06,	// (0x0002700d) list_single_hc_apps_pane_g_ParamLimits

0x804a,	// (0x0001f351) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8066,	// (0x0001f36d) list_single_hc_apps_pane_t1_ParamLimits

0x81ca,	// (0x0001f4d1) popup_toolbar2_fixed_window_ParamLimits

0x81ca,	// (0x0001f4d1) popup_toolbar2_fixed_window

0x9081,	// (0x00020388) popup_toolbar2_float_window

0xb8f8,	// (0x00022bff) bg_popup_sub_pane_cp27

0x096f,	// (0x00017c76) grid_toolbar2_float_pane

0xb8f8,	// (0x00022bff) bg_popup_sub_pane_cp26

0x096f,	// (0x00017c76) grid_toolbar2_fixed_pane

0xa34f,	// (0x00021656) cell_toolbar2_fixed_pane_ParamLimits

0xa34f,	// (0x00021656) cell_toolbar2_fixed_pane

0xa36a,	// (0x00021671) cell_toolbar2_fixed_pane_g1

0x0990,	// (0x00017c97) toolbar2_fixed_button_pane

0xcf18,	// (0x0002421f) toolbar2_fixed_button_pane_g1

0xcf20,	// (0x00024227) toolbar2_fixed_button_pane_g2

0xcf28,	// (0x0002422f) toolbar2_fixed_button_pane_g3

0xcf30,	// (0x00024237) toolbar2_fixed_button_pane_g4

0xcf38,	// (0x0002423f) toolbar2_fixed_button_pane_g5

0xcf40,	// (0x00024247) toolbar2_fixed_button_pane_g6

0xcf48,	// (0x0002424f) toolbar2_fixed_button_pane_g7

0xcf50,	// (0x00024257) toolbar2_fixed_button_pane_g8

0xcf58,	// (0x0002425f) toolbar2_fixed_button_pane_g9

0x0008,

0xf89a,	// (0x00026ba1) toolbar2_fixed_button_pane_g

0x0998,	// (0x00017c9f) cell_toolbar2_float_pane_ParamLimits

0x0998,	// (0x00017c9f) cell_toolbar2_float_pane

0x09a9,	// (0x00017cb0) cell_toolbar2_float_pane_g1

0x0990,	// (0x00017c97) toolbar2_fixed_button_pane_cp

0x9e56,	// (0x0002115d) fep_vkb_accented_list_pane_ParamLimits

0x9e56,	// (0x0002115d) fep_vkb_accented_list_pane

0x5e4f,	// (0x0001d156) bg_popup_fep_shadow_pane_g9

0xc98e,	// (0x00023c95) bg_popup_fep_shadow_pane_cp3

0xc06f,	// (0x00023376) list_accented_list_pane

0x09b2,	// (0x00017cb9) list_single_accented_list_pane_ParamLimits

0x09b2,	// (0x00017cb9) list_single_accented_list_pane

0xc98e,	// (0x00023c95) list_highlight_pane_cp10

0x09c3,	// (0x00017cca) list_single_accented_list_pane_t1

0x8fab,	// (0x000202b2) popup_slider_window_ParamLimits

0x8fab,	// (0x000202b2) popup_slider_window

0x04ad,	// (0x000177b4) aid_indentation_list_msg

0xa463,	// (0x0002176a) bg_popup_window_pane_cp19

0x0ae7,	// (0x00017dee) popup_slider_window_g1

0x0b03,	// (0x00017e0a) popup_slider_window_g2

0x0b1f,	// (0x00017e26) popup_slider_window_g3

0x0005,

0xfd0b,	// (0x00027012) popup_slider_window_g

0x0b7b,	// (0x00017e82) popup_slider_window_t1

0x0bef,	// (0x00017ef6) small_volume_slider_vertical_pane

0xec8c,	// (0x00025f93) small_volume_slider_vertical_pane_g1

0xec8c,	// (0x00025f93) small_volume_slider_vertical_pane_g2

0x0c0b,	// (0x00017f12) small_volume_slider_vertical_pane_g3

0x0002,

0xfd1d,	// (0x00027024) small_volume_slider_vertical_pane_g

0x8138,	// (0x0001f43f) area_side_right_pane_ParamLimits

0x8138,	// (0x0001f43f) area_side_right_pane

0xa51b,	// (0x00021822) aid_size_side_button_ParamLimits

0xa51b,	// (0x00021822) aid_size_side_button

0xa534,	// (0x0002183b) grid_sctrl_middle_pane_ParamLimits

0xa534,	// (0x0002183b) grid_sctrl_middle_pane

0x5fda,	// (0x0001d2e1) sctrl_sk_bottom_pane

0x5feb,	// (0x0001d2f2) sctrl_sk_top_pane

0x5ffd,	// (0x0001d304) aid_touch_sctrl_top

0xba9b,	// (0x00022da2) bg_sctrl_sk_pane_ParamLimits

0xba9b,	// (0x00022da2) bg_sctrl_sk_pane

0x600a,	// (0x0001d311) sctrl_sk_top_pane_g1

0x6017,	// (0x0001d31e) sctrl_sk_top_pane_t1

0x5ffd,	// (0x0001d304) aid_touch_sctrl_bottom

0xba9b,	// (0x00022da2) bg_sctrl_sk_pane_cp_ParamLimits

0xba9b,	// (0x00022da2) bg_sctrl_sk_pane_cp

0x6032,	// (0x0001d339) sctrl_sk_bottom_pane_g1

0x6017,	// (0x0001d31e) sctrl_sk_bottom_pane_t1

0xa54e,	// (0x00021855) cell_sctrl_middle_pane_ParamLimits

0xa54e,	// (0x00021855) cell_sctrl_middle_pane

0xa55f,	// (0x00021866) aid_touch_sctrl_middle_ParamLimits

0xa55f,	// (0x00021866) aid_touch_sctrl_middle

0xa56c,	// (0x00021873) bg_sctrl_middle_pane_ParamLimits

0xa56c,	// (0x00021873) bg_sctrl_middle_pane

0x0c93,	// (0x00017f9a) cell_sctrl_middle_pane_g1_ParamLimits

0x0c93,	// (0x00017f9a) cell_sctrl_middle_pane_g1

0xa57a,	// (0x00021881) cell_sctrl_middle_pane_g2_ParamLimits

0xa57a,	// (0x00021881) cell_sctrl_middle_pane_g2

0x0001,

0xfd29,	// (0x00027030) cell_sctrl_middle_pane_g_ParamLimits

0xfd29,	// (0x00027030) cell_sctrl_middle_pane_g

0xcf18,	// (0x0002421f) bg_sctrl_middle_pane_g1

0xcf20,	// (0x00024227) bg_sctrl_middle_pane_g2

0xcf28,	// (0x0002422f) bg_sctrl_middle_pane_g3

0xcf30,	// (0x00024237) bg_sctrl_middle_pane_g4

0xcf38,	// (0x0002423f) bg_sctrl_middle_pane_g5

0xcf40,	// (0x00024247) bg_sctrl_middle_pane_g6

0xcf48,	// (0x0002424f) bg_sctrl_middle_pane_g7

0xcf50,	// (0x00024257) bg_sctrl_middle_pane_g8

0x0007,

0xfd2e,	// (0x00027035) bg_sctrl_middle_pane_g

0xcf58,	// (0x0002425f) bg_sctrl_middle_pane_g8_copy1

0xcf18,	// (0x0002421f) bg_sctrl_sk_pane_g1

0xcf20,	// (0x00024227) bg_sctrl_sk_pane_g2

0xcf28,	// (0x0002422f) bg_sctrl_sk_pane_g3

0x0008,

0xf89a,	// (0x00026ba1) bg_sctrl_sk_pane_g

0xbea2,	// (0x000231a9) aid_size_touch_scroll_bar

0xcf30,	// (0x00024237) bg_sctrl_sk_pane_g4

0xcf38,	// (0x0002423f) bg_sctrl_sk_pane_g5

0xcf40,	// (0x00024247) bg_sctrl_sk_pane_g6

0xcf48,	// (0x0002424f) bg_sctrl_sk_pane_g7

0xcf50,	// (0x00024257) bg_sctrl_sk_pane_g8

0xcf58,	// (0x0002425f) bg_sctrl_sk_pane_g9

0xcc12,	// (0x00023f19) popup_fep_china_hwr2_fs_candidate_window

0x8aef,	// (0x0001fdf6) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8aef,	// (0x0001fdf6) popup_fep_china_hwr2_fs_control_window

0xee33,	// (0x0002613a) sctrl_sk_top_pane_g2

0x0001,

0xfd24,	// (0x0002702b) sctrl_sk_top_pane_g

0xa586,	// (0x0002188d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xa586,	// (0x0002188d) aid_fep_china_hwr2_fs_cell

0xa59a,	// (0x000218a1) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xa59a,	// (0x000218a1) bg_popup_fep_shadow_pane_cp4

0xa5b1,	// (0x000218b8) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xa5b1,	// (0x000218b8) bg_popup_fep_shadow_pane_cp5

0xa5c3,	// (0x000218ca) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xa5c3,	// (0x000218ca) popup_fep_china_hwr2_fs_control_bar_grid

0xa5d7,	// (0x000218de) popup_fep_china_hwr2_fs_control_funtion_grid

0x0c67,	// (0x00017f6e) aid_fep_china_hwr2_fs_candi_cell

0xb8f8,	// (0x00022bff) bg_popup_fep_shadow_pane_cp6

0x0c71,	// (0x00017f78) popup_fep_china_hwr2_fs_candidate_grid

0xa5df,	// (0x000218e6) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xa5df,	// (0x000218e6) cell_fep_china_hwr2_fs_funtion_grid

0xec8c,	// (0x00025f93) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x0c93,	// (0x00017f9a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x0c93,	// (0x00017f9a) cell_fep_china_hwr2_fs_funtion_grid_g1

0x0ca1,	// (0x00017fa8) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x0ca1,	// (0x00017fa8) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd3f,	// (0x00027046) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd3f,	// (0x00027046) cell_fep_china_hwr2_fs_funtion_grid_g

0xa5f7,	// (0x000218fe) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xa5f7,	// (0x000218fe) cell_fep_china_hwr2_fs_funtion_grid_t1

0xa60c,	// (0x00021913) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xa60c,	// (0x00021913) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd44,	// (0x0002704b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd44,	// (0x0002704b) cell_fep_china_hwr2_fs_funtion_grid_t

0x0ce8,	// (0x00017fef) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x0cf0,	// (0x00017ff7) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x0cf8,	// (0x00017fff) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd49,	// (0x00027050) popup_fep_china_hwr2_fs_control_bar_grid_g

0x0d00,	// (0x00018007) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x0d00,	// (0x00018007) cell_fep_china_hwr2_fs_candidate_grid

0x0d19,	// (0x00018020) popup_fep_china_hwr2_fs_candidate_grid_g20

0x0d21,	// (0x00018028) popup_fep_china_hwr2_fs_candidate_grid_g21

0xec8c,	// (0x00025f93) cell_fep_china_hwr2_fs_candidate_grid_g1

0xec8c,	// (0x00025f93) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb69,	// (0x00026e70) cell_fep_china_hwr2_fs_candidate_grid_g

0x0d29,	// (0x00018030) cell_fep_china_hwr2_fs_candidate_grid_t1

0xcd65,	// (0x0002406c) clock_nsta_pane_cp_24_ParamLimits

0xcd65,	// (0x0002406c) clock_nsta_pane_cp_24

0xcdcd,	// (0x000240d4) indicator_nsta_pane_cp_24_ParamLimits

0xcdcd,	// (0x000240d4) indicator_nsta_pane_cp_24

0xdae5,	// (0x00024dec) heading_pane_g1

0x0001,

0xf8ff,	// (0x00026c06) heading_pane_g

0xe19c,	// (0x000254a3) grid_sct_catagory_button_pane

0xdc72,	// (0x00024f79) scroll_pane_cp5_ParamLimits

0xe9ea,	// (0x00025cf1) button_value_adjust_pane_cp5_ParamLimits

0xe9ea,	// (0x00025cf1) button_value_adjust_pane_cp5

0xeaa8,	// (0x00025daf) form2_midp_time_pane_ParamLimits

0x0d37,	// (0x0001803e) cell_sct_catagory_button_pane_ParamLimits

0x0d37,	// (0x0001803e) cell_sct_catagory_button_pane

0xec51,	// (0x00025f58) bg_button_pane_cp01_ParamLimits

0xec51,	// (0x00025f58) bg_button_pane_cp01

0xec8c,	// (0x00025f93) cell_sct_catagory_button_pane_g1

0x9024,	// (0x0002032b) popup_tb_extension_window

0xa628,	// (0x0002192f) aid_size_cell_ext_ParamLimits

0xa628,	// (0x0002192f) aid_size_cell_ext

0xbce4,	// (0x00022feb) bg_tb_trans_pane_cp1_ParamLimits

0xbce4,	// (0x00022feb) bg_tb_trans_pane_cp1

0xa64e,	// (0x00021955) grid_tb_ext_pane_ParamLimits

0xa64e,	// (0x00021955) grid_tb_ext_pane

0xa689,	// (0x00021990) cell_tb_ext_pane_ParamLimits

0xa689,	// (0x00021990) cell_tb_ext_pane

0xa6b1,	// (0x000219b8) cell_tb_ext_pane_g1_ParamLimits

0xa6b1,	// (0x000219b8) cell_tb_ext_pane_g1

0x0dcb,	// (0x000180d2) cell_tb_ext_pane_t1

0xba9b,	// (0x00022da2) list_highlight_pane_cp11_ParamLimits

0xba9b,	// (0x00022da2) list_highlight_pane_cp11

0x508d,	// (0x0001c394) popup_uni_indicator_window_ParamLimits

0x508d,	// (0x0001c394) popup_uni_indicator_window

0xbf69,	// (0x00023270) bg_popup_sub_pane_cp14

0x0de6,	// (0x000180ed) list_uniindi_pane

0x0df2,	// (0x000180f9) uniindi_top_pane

0xba9b,	// (0x00022da2) bg_uniindi_top_pane

0x0e11,	// (0x00018118) uniindi_top_pane_g1

0x0e27,	// (0x0001812e) uniindi_top_pane_g2

0x0003,

0xfd50,	// (0x00027057) uniindi_top_pane_g

0x0e51,	// (0x00018158) uniindi_top_pane_t1

0x0e7b,	// (0x00018182) list_single_uniindi_pane_ParamLimits

0x0e7b,	// (0x00018182) list_single_uniindi_pane

0xec8c,	// (0x00025f93) bg_uniindi_top_pane_g1

0x0e8e,	// (0x00018195) list_single_uniindi_pane_g1

0x0ea1,	// (0x000181a8) list_single_uniindi_pane_t1

0xb8f8,	// (0x00022bff) control_bg_pane

0x0ec6,	// (0x000181cd) bg_sctrl_sk_pane_cp1

0x0ecf,	// (0x000181d6) bg_sctrl_sk_pane_cp2

0x0ed8,	// (0x000181df) control_bg_pane_g1

0x0ee1,	// (0x000181e8) control_bg_pane_g2

0x0001,

0xfd59,	// (0x00027060) control_bg_pane_g

0xe8f9,	// (0x00025c00) cell_indicator_nsta_pane_g1_ParamLimits

0x9c60,	// (0x00020f67) cell_indicator_nsta_pane_g2_ParamLimits

0xfada,	// (0x00026de1) cell_indicator_nsta_pane_g_ParamLimits

0x49d3,	// (0x0001bcda) form2_midp_time_pane_t1_ParamLimits

0xeff5,	// (0x000262fc) main_idle_act4_pane_ParamLimits

0xeff5,	// (0x000262fc) main_idle_act4_pane

0x9024,	// (0x0002032b) popup_tb_extension_window_ParamLimits

0xa670,	// (0x00021977) tb_ext_find_pane_ParamLimits

0xa670,	// (0x00021977) tb_ext_find_pane

0x0eea,	// (0x000181f1) ai_gene_pane_1_cp1

0xca10,	// (0x00023d17) ai_gene_pane_2_cp1

0x0ef2,	// (0x000181f9) list_single_idle_plugin_calendar_pane

0x0efb,	// (0x00018202) list_single_idle_plugin_notification_pane

0x0f04,	// (0x0001820b) list_single_idle_plugin_player_pane

0xa6ce,	// (0x000219d5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xa6ce,	// (0x000219d5) list_single_idle_plugin_shortcut_pane

0xa6f6,	// (0x000219fd) main_idle_act4_pane_t1

0xa70c,	// (0x00021a13) main_idle_act4_pane_t2

0x0001,

0xfd5e,	// (0x00027065) main_idle_act4_pane_t

0xa722,	// (0x00021a29) middle_sk_idle_act4_pane_ParamLimits

0xa722,	// (0x00021a29) middle_sk_idle_act4_pane

0xa73e,	// (0x00021a45) popup_clock_digital_analogue_window_cp2

0xa766,	// (0x00021a6d) shortcut_wheel_idle_act4_pane_ParamLimits

0xa766,	// (0x00021a6d) shortcut_wheel_idle_act4_pane

0xec8c,	// (0x00025f93) shortcut_wheel_idle_act4_pane_g1

0xec8c,	// (0x00025f93) shortcut_wheel_idle_act4_pane_g2

0xec8c,	// (0x00025f93) shortcut_wheel_idle_act4_pane_g3

0xec8c,	// (0x00025f93) shortcut_wheel_idle_act4_pane_g4

0xec8c,	// (0x00025f93) shortcut_wheel_idle_act4_pane_g5

0x0f97,	// (0x0001829e) shortcut_wheel_idle_act4_pane_g6

0x0f9f,	// (0x000182a6) shortcut_wheel_idle_act4_pane_g7

0x0fa7,	// (0x000182ae) shortcut_wheel_idle_act4_pane_g8

0x0faf,	// (0x000182b6) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd63,	// (0x0002706a) shortcut_wheel_idle_act4_pane_g

0x2bb6,	// (0x00019ebd) middle_sk_idle_act4_pane_g1_ParamLimits

0x2bb6,	// (0x00019ebd) middle_sk_idle_act4_pane_g1

0xa7e3,	// (0x00021aea) middle_sk_idle_act4_pane_g2_ParamLimits

0xa7e3,	// (0x00021aea) middle_sk_idle_act4_pane_g2

0x0001,

0xfd86,	// (0x0002708d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd86,	// (0x0002708d) middle_sk_idle_act4_pane_g

0xa7fb,	// (0x00021b02) middle_sk_idle_act4_pane_t1_ParamLimits

0xa7fb,	// (0x00021b02) middle_sk_idle_act4_pane_t1

0xa82a,	// (0x00021b31) grid_ai_shortcut_pane_ParamLimits

0xa82a,	// (0x00021b31) grid_ai_shortcut_pane

0xa847,	// (0x00021b4e) list_highlight_pane_cp16_ParamLimits

0xa847,	// (0x00021b4e) list_highlight_pane_cp16

0xa854,	// (0x00021b5b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xa854,	// (0x00021b5b) list_single_idle_plugin_shortcut_pane_g1

0xa860,	// (0x00021b67) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xa860,	// (0x00021b67) list_single_idle_plugin_shortcut_pane_g2

0xa87c,	// (0x00021b83) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xa87c,	// (0x00021b83) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd8b,	// (0x00027092) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd8b,	// (0x00027092) list_single_idle_plugin_shortcut_pane_g

0xa891,	// (0x00021b98) cell_ai_shortcut_pane_ParamLimits

0xa891,	// (0x00021b98) cell_ai_shortcut_pane

0xa8a7,	// (0x00021bae) cell_ai_shortcut_pane_g1_ParamLimits

0xa8a7,	// (0x00021bae) cell_ai_shortcut_pane_g1

0x0eea,	// (0x000181f1) ai_gene_pane_1_cp2

0x10df,	// (0x000183e6) ai_gene_pane_2_cp2

0x10e7,	// (0x000183ee) list_highlight_pane_cp15

0x10f0,	// (0x000183f7) list_single_idle_plugin_calendar_pane_g1

0x10e7,	// (0x000183ee) list_highlight_pane_cp17

0x10f8,	// (0x000183ff) list_single_idle_plugin_calendar_pane_g1_copy1

0x1100,	// (0x00018407) list_single_idle_plugin_player_pane_g1

0xe39b,	// (0x000256a2) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd92,	// (0x00027099) list_single_idle_plugin_player_pane_g

0x1108,	// (0x0001840f) list_single_idle_plugin_player_pane_t1

0x1116,	// (0x0001841d) list_single_idle_plugin_player_pane_t2

0x1124,	// (0x0001842b) list_single_idle_plugin_player_pane_t3

0x1132,	// (0x00018439) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd97,	// (0x0002709e) list_single_idle_plugin_player_pane_t

0x1140,	// (0x00018447) wait_bar_pane_cp15

0x1148,	// (0x0001844f) grid_ai_notification_pane

0xe39b,	// (0x000256a2) list_single_idle_plugin_notification_pane_g1

0xa8c9,	// (0x00021bd0) cell_ai_notification_pane_ParamLimits

0xa8c9,	// (0x00021bd0) cell_ai_notification_pane

0x115e,	// (0x00018465) cell_ai_notification_pane_g1

0x1166,	// (0x0001846d) cell_ai_notification_pane_t1

0xa8d6,	// (0x00021bdd) tb_ext_find_button_pane

0xa8de,	// (0x00021be5) tb_ext_find_pane_g1

0xa8e6,	// (0x00021bed) tb_ext_find_pane_t1

0xc4a1,	// (0x000237a8) tb_ext_find_button_pane_g1

0x1192,	// (0x00018499) tb_ext_find_button_pane_g2

0x0001,

0xfda0,	// (0x000270a7) tb_ext_find_button_pane_g

0xa6f6,	// (0x000219fd) main_idle_act4_pane_t1_ParamLimits

0xa70c,	// (0x00021a13) main_idle_act4_pane_t2_ParamLimits

0xfd5e,	// (0x00027065) main_idle_act4_pane_t_ParamLimits

0xa73e,	// (0x00021a45) popup_clock_digital_analogue_window_cp2_ParamLimits

0xa756,	// (0x00021a5d) sat_plugin_idle_act4_pane_ParamLimits

0xa756,	// (0x00021a5d) sat_plugin_idle_act4_pane

0xa8f4,	// (0x00021bfb) sat_plugin_idle_act4_pane_t1_ParamLimits

0xa8f4,	// (0x00021bfb) sat_plugin_idle_act4_pane_t1

0xa90c,	// (0x00021c13) sat_plugin_idle_act4_pane_t2_ParamLimits

0xa90c,	// (0x00021c13) sat_plugin_idle_act4_pane_t2

0xa924,	// (0x00021c2b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xa924,	// (0x00021c2b) sat_plugin_idle_act4_pane_t3

0xa93c,	// (0x00021c43) sat_plugin_idle_act4_pane_t4_ParamLimits

0xa93c,	// (0x00021c43) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda5,	// (0x000270ac) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda5,	// (0x000270ac) sat_plugin_idle_act4_pane_t

0x4fc8,	// (0x0001c2cf) popup_battery_window_ParamLimits

0x4fc8,	// (0x0001c2cf) popup_battery_window

0xba9b,	// (0x00022da2) bg_popup_sub_pane_cp25_ParamLimits

0xba9b,	// (0x00022da2) bg_popup_sub_pane_cp25

0x11e7,	// (0x000184ee) popup_battery_window_g1_ParamLimits

0x11e7,	// (0x000184ee) popup_battery_window_g1

0x11f3,	// (0x000184fa) popup_battery_window_t1_ParamLimits

0x11f3,	// (0x000184fa) popup_battery_window_t1

0x1205,	// (0x0001850c) popup_battery_window_t2_ParamLimits

0x1205,	// (0x0001850c) popup_battery_window_t2

0x0001,

0xfdae,	// (0x000270b5) popup_battery_window_t_ParamLimits

0xfdae,	// (0x000270b5) popup_battery_window_t

0x8830,	// (0x0001fb37) midp_canvas_pane_ParamLimits

0x888b,	// (0x0001fb92) midp_keypad_pane_ParamLimits

0x888b,	// (0x0001fb92) midp_keypad_pane

0xc0c1,	// (0x000233c8) main_midp_pane_ParamLimits

0xe9a3,	// (0x00025caa) signal_pane_g2_cp_ParamLimits

0xa954,	// (0x00021c5b) aid_size_cell_midp_keypad_ParamLimits

0xa954,	// (0x00021c5b) aid_size_cell_midp_keypad

0xa972,	// (0x00021c79) midp_keyp_game_grid_pane_ParamLimits

0xa972,	// (0x00021c79) midp_keyp_game_grid_pane

0xa999,	// (0x00021ca0) midp_keyp_rocker_pane_ParamLimits

0xa999,	// (0x00021ca0) midp_keyp_rocker_pane

0xa9f2,	// (0x00021cf9) midp_keyp_sk_left_pane_ParamLimits

0xa9f2,	// (0x00021cf9) midp_keyp_sk_left_pane

0xaa46,	// (0x00021d4d) midp_keyp_sk_right_pane_ParamLimits

0xaa46,	// (0x00021d4d) midp_keyp_sk_right_pane

0xb8f8,	// (0x00022bff) bg_button_pane_cp03

0xaa9a,	// (0x00021da1) midp_keyp_sk_left_pane_g1

0xb8f8,	// (0x00022bff) bg_button_pane_cp04

0xaa9a,	// (0x00021da1) midp_keyp_sk_right_pane_g1

0xec8c,	// (0x00025f93) midp_keyp_rocker_pane_g1

0xaaa3,	// (0x00021daa) keyp_game_cell_pane_ParamLimits

0xaaa3,	// (0x00021daa) keyp_game_cell_pane

0xb8f8,	// (0x00022bff) bg_button_pane_cp02

0xaac7,	// (0x00021dce) keyp_game_cell_pane_g1

0x817a,	// (0x0001f481) popup_fep_vkb2_window_ParamLimits

0x817a,	// (0x0001f481) popup_fep_vkb2_window

0xaad0,	// (0x00021dd7) aid_size_cell_vkb2_ParamLimits

0xaad0,	// (0x00021dd7) aid_size_cell_vkb2

0xab06,	// (0x00021e0d) popup_fep_vkb2_window_g1_ParamLimits

0xab06,	// (0x00021e0d) popup_fep_vkb2_window_g1

0xab56,	// (0x00021e5d) vkb2_area_bottom_pane_ParamLimits

0xab56,	// (0x00021e5d) vkb2_area_bottom_pane

0xabaa,	// (0x00021eb1) vkb2_area_keypad_pane_ParamLimits

0xabaa,	// (0x00021eb1) vkb2_area_keypad_pane

0xabf2,	// (0x00021ef9) vkb2_area_top_pane_ParamLimits

0xabf2,	// (0x00021ef9) vkb2_area_top_pane

0xac78,	// (0x00021f7f) vkb2_top_entry_pane_ParamLimits

0xac78,	// (0x00021f7f) vkb2_top_entry_pane

0xaca5,	// (0x00021fac) vkb2_top_grid_left_pane_ParamLimits

0xaca5,	// (0x00021fac) vkb2_top_grid_left_pane

0xacc5,	// (0x00021fcc) vkb2_top_grid_right_pane_ParamLimits

0xacc5,	// (0x00021fcc) vkb2_top_grid_right_pane

0x6293,	// (0x0001d59a) vkb2_cell_keypad_pane_ParamLimits

0x6293,	// (0x0001d59a) vkb2_cell_keypad_pane

0xad0b,	// (0x00022012) vkb2_area_bottom_grid_pane_ParamLimits

0xad0b,	// (0x00022012) vkb2_area_bottom_grid_pane

0xad35,	// (0x0002203c) vkb2_area_bottom_pane_g1_ParamLimits

0xad35,	// (0x0002203c) vkb2_area_bottom_pane_g1

0xad5b,	// (0x00022062) vkb2_area_bottom_pane_g2_ParamLimits

0xad5b,	// (0x00022062) vkb2_area_bottom_pane_g2

0xad8c,	// (0x00022093) vkb2_area_bottom_pane_g3_ParamLimits

0xad8c,	// (0x00022093) vkb2_area_bottom_pane_g3

0x0002,

0xfdb3,	// (0x000270ba) vkb2_area_bottom_pane_g_ParamLimits

0xfdb3,	// (0x000270ba) vkb2_area_bottom_pane_g

0x643d,	// (0x0001d744) vkb2_top_cell_left_pane_ParamLimits

0x643d,	// (0x0001d744) vkb2_top_cell_left_pane

0xadf6,	// (0x000220fd) vkb2_top_entry_pane_g1_ParamLimits

0xadf6,	// (0x000220fd) vkb2_top_entry_pane_g1

0xae04,	// (0x0002210b) vkb2_top_entry_pane_t1_ParamLimits

0xae04,	// (0x0002210b) vkb2_top_entry_pane_t1

0x13b6,	// (0x000186bd) vkb2_top_entry_pane_t2_ParamLimits

0x13b6,	// (0x000186bd) vkb2_top_entry_pane_t2

0x13e8,	// (0x000186ef) vkb2_top_entry_pane_t3_ParamLimits

0x13e8,	// (0x000186ef) vkb2_top_entry_pane_t3

0x0002,

0xfdba,	// (0x000270c1) vkb2_top_entry_pane_t_ParamLimits

0xfdba,	// (0x000270c1) vkb2_top_entry_pane_t

0xae3d,	// (0x00022144) vkb2_top_grid_right_pane_g1_ParamLimits

0xae3d,	// (0x00022144) vkb2_top_grid_right_pane_g1

0x64a0,	// (0x0001d7a7) vkb2_top_grid_right_pane_g2_ParamLimits

0x64a0,	// (0x0001d7a7) vkb2_top_grid_right_pane_g2

0x64b8,	// (0x0001d7bf) vkb2_top_grid_right_pane_g3_ParamLimits

0x64b8,	// (0x0001d7bf) vkb2_top_grid_right_pane_g3

0xae53,	// (0x0002215a) vkb2_top_grid_right_pane_g4_ParamLimits

0xae53,	// (0x0002215a) vkb2_top_grid_right_pane_g4

0x0003,

0xfdc1,	// (0x000270c8) vkb2_top_grid_right_pane_g_ParamLimits

0xfdc1,	// (0x000270c8) vkb2_top_grid_right_pane_g

0x64e6,	// (0x0001d7ed) vkb2_top_cell_left_pane_g1

0x64fd,	// (0x0001d804) vkb2_cell_keypad_pane_g1_ParamLimits

0x64fd,	// (0x0001d804) vkb2_cell_keypad_pane_g1

0x140c,	// (0x00018713) vkb2_cell_keypad_pane_t1_ParamLimits

0x140c,	// (0x00018713) vkb2_cell_keypad_pane_t1

0x650b,	// (0x0001d812) vkb2_cell_bottom_grid_pane_ParamLimits

0x650b,	// (0x0001d812) vkb2_cell_bottom_grid_pane

0x6544,	// (0x0001d84b) vkb2_cell_bottom_grid_pane_g1

0xa787,	// (0x00021a8e) aid_call2_pane_cp02

0xa78f,	// (0x00021a96) aid_call_pane_cp02

0xa797,	// (0x00021a9e) clock_digital_number_pane_cp10

0xa79f,	// (0x00021aa6) clock_digital_number_pane_cp11

0xa7a7,	// (0x00021aae) clock_digital_number_pane_cp12

0xa7af,	// (0x00021ab6) clock_digital_number_pane_cp13

0xa7b7,	// (0x00021abe) clock_digital_separator_pane_cp10

0xc4a1,	// (0x000237a8) popup_clock_digital_analogue_window_cp2_g1

0xc4a1,	// (0x000237a8) popup_clock_digital_analogue_window_cp2_g2

0xa7bf,	// (0x00021ac6) popup_clock_digital_analogue_window_cp2_g3

0xc4a1,	// (0x000237a8) popup_clock_digital_analogue_window_cp2_g4

0xa7bf,	// (0x00021ac6) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd76,	// (0x0002707d) popup_clock_digital_analogue_window_cp2_g

0xa7c7,	// (0x00021ace) popup_clock_digital_analogue_window_cp2_t1

0xa7d5,	// (0x00021adc) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd81,	// (0x00027088) popup_clock_digital_analogue_window_cp2_t

0xec8c,	// (0x00025f93) clock_digital_number_pane_cp10_g1

0xec8c,	// (0x00025f93) clock_digital_number_pane_cp10_g2

0x0001,

0xfb69,	// (0x00026e70) clock_digital_number_pane_cp10_g

0xec8c,	// (0x00025f93) clock_digital_separator_pane_cp10_g1

0xec8c,	// (0x00025f93) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb69,	// (0x00026e70) clock_digital_separator_pane_cp10_g

0x0e33,	// (0x0001813a) uniindi_top_pane_g3

0x0e44,	// (0x0001814b) uniindi_top_pane_g4

0x631e,	// (0x0001d625) vkb2_row_keypad_pane_ParamLimits

0x631e,	// (0x0001d625) vkb2_row_keypad_pane

0x6560,	// (0x0001d867) vkb2_cell_t_keypad_pane_ParamLimits

0x6560,	// (0x0001d867) vkb2_cell_t_keypad_pane

0x6570,	// (0x0001d877) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6570,	// (0x0001d877) vkb2_cell_t_keypad_pane_cp08

0x6583,	// (0x0001d88a) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6583,	// (0x0001d88a) vkb2_cell_t_keypad_pane_cp09

0x6597,	// (0x0001d89e) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6597,	// (0x0001d89e) vkb2_cell_t_keypad_pane_cp01

0x65a8,	// (0x0001d8af) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x65a8,	// (0x0001d8af) vkb2_cell_t_keypad_pane_cp02

0x65b9,	// (0x0001d8c0) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x65b9,	// (0x0001d8c0) vkb2_cell_t_keypad_pane_cp03

0x65ca,	// (0x0001d8d1) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x65ca,	// (0x0001d8d1) vkb2_cell_t_keypad_pane_cp04

0x65db,	// (0x0001d8e2) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x65db,	// (0x0001d8e2) vkb2_cell_t_keypad_pane_cp05

0x65ec,	// (0x0001d8f3) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x65ec,	// (0x0001d8f3) vkb2_cell_t_keypad_pane_cp06

0x65fd,	// (0x0001d904) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x65fd,	// (0x0001d904) vkb2_cell_t_keypad_pane_cp07

0x660e,	// (0x0001d915) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x660e,	// (0x0001d915) vkb2_cell_t_keypad_pane_cp10

0xee33,	// (0x0002613a) vkb2_cell_t_keypad_pane_g1

0x1423,	// (0x0001872a) vkb2_cell_t_keypad_pane_t1

0xb8f8,	// (0x00022bff) popup_grid_graphic2_window

0xae69,	// (0x00022170) aid_size_cell_graphic2_ParamLimits

0xae69,	// (0x00022170) aid_size_cell_graphic2

0xd49f,	// (0x000247a6) bg_popup_window_pane_cp21_ParamLimits

0xd49f,	// (0x000247a6) bg_popup_window_pane_cp21

0xae9b,	// (0x000221a2) graphic2_pages_pane_ParamLimits

0xae9b,	// (0x000221a2) graphic2_pages_pane

0xaef1,	// (0x000221f8) grid_graphic2_control_pane_ParamLimits

0xaef1,	// (0x000221f8) grid_graphic2_control_pane

0xaf25,	// (0x0002222c) grid_graphic2_pane_ParamLimits

0xaf25,	// (0x0002222c) grid_graphic2_pane

0xaf98,	// (0x0002229f) cell_graphic2_pane

0xb8f8,	// (0x00022bff) main_comp_mode_pane

0x0650,	// (0x00017957) list_ai3_gene_pane_ParamLimits

0xa463,	// (0x0002176a) bg_popup_window_pane_cp19_ParamLimits

0x0a89,	// (0x00017d90) bg_touch_area_indi_pane_ParamLimits

0x0a89,	// (0x00017d90) bg_touch_area_indi_pane

0x0a9f,	// (0x00017da6) bg_touch_area_indi_pane_cp01_ParamLimits

0x0a9f,	// (0x00017da6) bg_touch_area_indi_pane_cp01

0x0ab5,	// (0x00017dbc) bg_touch_area_indi_pane_cp02_ParamLimits

0x0ab5,	// (0x00017dbc) bg_touch_area_indi_pane_cp02

0x0acd,	// (0x00017dd4) bg_touch_area_indi_pane_cp03_ParamLimits

0x0acd,	// (0x00017dd4) bg_touch_area_indi_pane_cp03

0x0ae7,	// (0x00017dee) popup_slider_window_g1_ParamLimits

0x0b03,	// (0x00017e0a) popup_slider_window_g2_ParamLimits

0x0b1f,	// (0x00017e26) popup_slider_window_g3_ParamLimits

0xfd0b,	// (0x00027012) popup_slider_window_g_ParamLimits

0x0b7b,	// (0x00017e82) popup_slider_window_t1_ParamLimits

0x0bef,	// (0x00017ef6) small_volume_slider_vertical_pane_ParamLimits

0xaf98,	// (0x0002229f) cell_graphic2_pane_ParamLimits

0xaff3,	// (0x000222fa) bg_button_pane_cp10_ParamLimits

0xaff3,	// (0x000222fa) bg_button_pane_cp10

0xb006,	// (0x0002230d) bg_button_pane_cp11_ParamLimits

0xb006,	// (0x0002230d) bg_button_pane_cp11

0xb019,	// (0x00022320) graphic2_pages_pane_g1_ParamLimits

0xb019,	// (0x00022320) graphic2_pages_pane_g1

0xb034,	// (0x0002233b) graphic2_pages_pane_g2_ParamLimits

0xb034,	// (0x0002233b) graphic2_pages_pane_g2

0x0001,

0xfdcf,	// (0x000270d6) graphic2_pages_pane_g_ParamLimits

0xfdcf,	// (0x000270d6) graphic2_pages_pane_g

0xb04c,	// (0x00022353) graphic2_pages_pane_t1_ParamLimits

0xb04c,	// (0x00022353) graphic2_pages_pane_t1

0xb064,	// (0x0002236b) cell_graphic2_control_pane_ParamLimits

0xb064,	// (0x0002236b) cell_graphic2_control_pane

0xb07e,	// (0x00022385) cell_graphic2_pane_g1_ParamLimits

0xb07e,	// (0x00022385) cell_graphic2_pane_g1

0x2bc4,	// (0x00019ecb) cell_graphic2_pane_g2_ParamLimits

0x2bc4,	// (0x00019ecb) cell_graphic2_pane_g2

0xb08b,	// (0x00022392) cell_graphic2_pane_g3_ParamLimits

0xb08b,	// (0x00022392) cell_graphic2_pane_g3

0x2bd1,	// (0x00019ed8) cell_graphic2_pane_g4_ParamLimits

0x2bd1,	// (0x00019ed8) cell_graphic2_pane_g4

0xb098,	// (0x0002239f) cell_graphic2_pane_g5_ParamLimits

0xb098,	// (0x0002239f) cell_graphic2_pane_g5

0x0004,

0xfdd4,	// (0x000270db) cell_graphic2_pane_g_ParamLimits

0xfdd4,	// (0x000270db) cell_graphic2_pane_g

0xb0b8,	// (0x000223bf) cell_graphic2_pane_t1_ParamLimits

0xb0b8,	// (0x000223bf) cell_graphic2_pane_t1

0xdad9,	// (0x00024de0) grid_highlight_pane_cp11_ParamLimits

0xdad9,	// (0x00024de0) grid_highlight_pane_cp11

0xbf69,	// (0x00023270) bg_button_pane_cp05

0xb0cf,	// (0x000223d6) cell_graphic2_control_pane_g1

0xec8c,	// (0x00025f93) bg_touch_area_indi_pane_g1

0x1681,	// (0x00018988) aid_cmod_rocker_key_size

0x168b,	// (0x00018992) aid_cmode_itu_key_size

0x1695,	// (0x0001899c) main_cmode_video_pane

0x169f,	// (0x000189a6) main_comp_mode_itu_pane

0x16ab,	// (0x000189b2) main_comp_mode_rocker_pane

0x16b7,	// (0x000189be) cell_cmode_rocker_pane_ParamLimits

0x16b7,	// (0x000189be) cell_cmode_rocker_pane

0x16c9,	// (0x000189d0) cell_cmode_itu_pane_ParamLimits

0x16c9,	// (0x000189d0) cell_cmode_itu_pane

0xbf69,	// (0x00023270) bg_button_pane_cp06_ParamLimits

0xbf69,	// (0x00023270) bg_button_pane_cp06

0xee33,	// (0x0002613a) cell_cmode_rocker_pane_g1_ParamLimits

0xee33,	// (0x0002613a) cell_cmode_rocker_pane_g1

0x0c93,	// (0x00017f9a) cell_cmode_rocker_pane_g2_ParamLimits

0x0c93,	// (0x00017f9a) cell_cmode_rocker_pane_g2

0x0001,

0xfddf,	// (0x000270e6) cell_cmode_rocker_pane_g_ParamLimits

0xfddf,	// (0x000270e6) cell_cmode_rocker_pane_g

0xb8f8,	// (0x00022bff) bg_button_pane_cp07

0x16de,	// (0x000189e5) cell_cmode_itu_pane_g1

0x16e7,	// (0x000189ee) cell_cmode_itu_pane_t1

0x16f5,	// (0x000189fc) cell_cmode_itu_pane_t2

0x0001,

0xfde4,	// (0x000270eb) cell_cmode_itu_pane_t

0x0eb6,	// (0x000181bd) aid_touch_ctrl_left

0x0ebe,	// (0x000181c5) aid_touch_ctrl_right

0xb8f8,	// (0x00022bff) compa_mode_pane

0xb0dc,	// (0x000223e3) aid_cmod_rocker_key_size_cp

0xb0e6,	// (0x000223ed) aid_cmode_itu_key_size_cp

0x1717,	// (0x00018a1e) compa_mode_pane_g1

0x171f,	// (0x00018a26) compa_mode_pane_g2

0x1727,	// (0x00018a2e) compa_mode_pane_g3

0x0002,

0xfde9,	// (0x000270f0) compa_mode_pane_g

0xb0f0,	// (0x000223f7) main_comp_mode_itu_pane_cp

0xb0f8,	// (0x000223ff) main_comp_mode_rocker_pane_cp

0xb100,	// (0x00022407) cell_cmode_itu_pane_cp_ParamLimits

0xb100,	// (0x00022407) cell_cmode_itu_pane_cp

0xb115,	// (0x0002241c) cell_cmode_rocker_pane_cp_ParamLimits

0xb115,	// (0x0002241c) cell_cmode_rocker_pane_cp

0xbf69,	// (0x00023270) bg_button_pane_cp06_cp_ParamLimits

0xbf69,	// (0x00023270) bg_button_pane_cp06_cp

0xee33,	// (0x0002613a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xee33,	// (0x0002613a) cell_cmode_rocker_pane_g1_cp

0xec8c,	// (0x00025f93) cell_cmode_rocker_pane_g2_cp

0xb8f8,	// (0x00022bff) bg_button_pane_cp07_cp

0xb127,	// (0x0002242e) cell_cmode_itu_pane_g1_cp

0xb130,	// (0x00022437) cell_cmode_itu_pane_t1_cp

0xb130,	// (0x00022437) cell_cmode_itu_pane_t2_cp

0x9a5d,	// (0x00020d64) settings_code_pane_cp2

0xb968,	// (0x00022c6f) bg_popup_window_pane_cp3_ParamLimits

0xbc75,	// (0x00022f7c) heading_pane_cp3_ParamLimits

0xbc81,	// (0x00022f88) listscroll_popup_graphic_pane_ParamLimits

0x5c33,	// (0x0001cf3a) fep_hwr_aid_pane_ParamLimits

0x5ffd,	// (0x0001d304) aid_touch_sctrl_top_ParamLimits

0x600a,	// (0x0001d311) sctrl_sk_top_pane_g1_ParamLimits

0xee33,	// (0x0002613a) sctrl_sk_top_pane_g2_ParamLimits

0xfd24,	// (0x0002702b) sctrl_sk_top_pane_g_ParamLimits

0x6017,	// (0x0001d31e) sctrl_sk_top_pane_t1_ParamLimits

0x5ffd,	// (0x0001d304) aid_touch_sctrl_bottom_ParamLimits

0x6017,	// (0x0001d31e) sctrl_sk_bottom_pane_t1_ParamLimits

0x0dff,	// (0x00018106) aid_area_touch_clock

0xac3a,	// (0x00021f41) aid_vkb2_area_top_pane_cell_ParamLimits

0xac3a,	// (0x00021f41) aid_vkb2_area_top_pane_cell

0xace5,	// (0x00021fec) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xace5,	// (0x00021fec) aid_vkb2_area_bottom_pane_cell

0x136e,	// (0x00018675) popup_char_count_window

0x1774,	// (0x00018a7b) popup_char_count_window_g1

0x177d,	// (0x00018a84) popup_char_count_window_g2

0x1786,	// (0x00018a8d) popup_char_count_window_g3

0x0002,

0xfdf0,	// (0x000270f7) popup_char_count_window_g

0x178f,	// (0x00018a96) popup_char_count_window_t1

0x60bb,	// (0x0001d3c2) popup_fep_char_preview_window_ParamLimits

0x60bb,	// (0x0001d3c2) popup_fep_char_preview_window

0xac5a,	// (0x00021f61) vkb2_top_candi_pane_ParamLimits

0xac5a,	// (0x00021f61) vkb2_top_candi_pane

0xb13e,	// (0x00022445) cell_vkb2_top_candi_pane_ParamLimits

0xb13e,	// (0x00022445) cell_vkb2_top_candi_pane

0xd49f,	// (0x000247a6) bg_popup_fep_char_preview_window_ParamLimits

0xd49f,	// (0x000247a6) bg_popup_fep_char_preview_window

0x6623,	// (0x0001d92a) popup_fep_char_preview_window_t1_ParamLimits

0x6623,	// (0x0001d92a) popup_fep_char_preview_window_t1

0x181b,	// (0x00018b22) bg_popup_fep_char_preview_window_g1

0x1813,	// (0x00018b1a) bg_popup_fep_char_preview_window_g2

0x180b,	// (0x00018b12) bg_popup_fep_char_preview_window_g3

0x183b,	// (0x00018b42) bg_popup_fep_char_preview_window_g4

0x1833,	// (0x00018b3a) bg_popup_fep_char_preview_window_g5

0x665d,	// (0x0001d964) bg_popup_fep_char_preview_window_g6

0x182b,	// (0x00018b32) bg_popup_fep_char_preview_window_g7

0x1823,	// (0x00018b2a) bg_popup_fep_char_preview_window_g8

0x1843,	// (0x00018b4a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf7,	// (0x000270fe) bg_popup_fep_char_preview_window_g

0xee33,	// (0x0002613a) cell_vkb2_top_candi_pane_g1_ParamLimits

0xee33,	// (0x0002613a) cell_vkb2_top_candi_pane_g1

0xf080,	// (0x00026387) cell_vkb2_top_candi_pane_g2_ParamLimits

0xf080,	// (0x00026387) cell_vkb2_top_candi_pane_g2

0xf0a1,	// (0x000263a8) cell_vkb2_top_candi_pane_g3_ParamLimits

0xf0a1,	// (0x000263a8) cell_vkb2_top_candi_pane_g3

0x6665,	// (0x0001d96c) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6665,	// (0x0001d96c) cell_vkb2_top_candi_pane_g4

0x17ea,	// (0x00018af1) cell_vkb2_top_candi_pane_g5_ParamLimits

0x17ea,	// (0x00018af1) cell_vkb2_top_candi_pane_g5

0x0c93,	// (0x00017f9a) cell_vkb2_top_candi_pane_g6_ParamLimits

0x0c93,	// (0x00017f9a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe0a,	// (0x00027111) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe0a,	// (0x00027111) cell_vkb2_top_candi_pane_g

0x6686,	// (0x0001d98d) cell_vkb2_top_candi_pane_t1

0x5aa1,	// (0x0001cda8) aid_size_touch_slider_mark_ParamLimits

0x5aa1,	// (0x0001cda8) aid_size_touch_slider_mark

0xaed7,	// (0x000221de) grid_graphic2_catg_pane_ParamLimits

0xaed7,	// (0x000221de) grid_graphic2_catg_pane

0xaf6b,	// (0x00022272) popup_grid_graphic2_window_t1_ParamLimits

0xaf6b,	// (0x00022272) popup_grid_graphic2_window_t1

0xaf81,	// (0x00022288) popup_grid_graphic2_window_t2_ParamLimits

0xaf81,	// (0x00022288) popup_grid_graphic2_window_t2

0x0001,

0xfdca,	// (0x000270d1) popup_grid_graphic2_window_t_ParamLimits

0xfdca,	// (0x000270d1) popup_grid_graphic2_window_t

0xbf69,	// (0x00023270) bg_button_pane_cp05_ParamLimits

0xb0cf,	// (0x000223d6) cell_graphic2_control_pane_g1_ParamLimits

0xb1a4,	// (0x000224ab) cell_graphic2_catg_pane_ParamLimits

0xb1a4,	// (0x000224ab) cell_graphic2_catg_pane

0xb8f8,	// (0x00022bff) bg_button_pane_cp12

0xb1b6,	// (0x000224bd) cell_graphic2_catg_pane_g1

0x0dcb,	// (0x000180d2) cell_tb_ext_pane_t1_ParamLimits

0x645d,	// (0x0001d764) vkb2_top_cell_right_narrow_pane_ParamLimits

0x645d,	// (0x0001d764) vkb2_top_cell_right_narrow_pane

0x6475,	// (0x0001d77c) vkb2_top_cell_right_wide_pane_ParamLimits

0x6475,	// (0x0001d77c) vkb2_top_cell_right_wide_pane

0xeff5,	// (0x000262fc) bg_vkb2_func_pane_ParamLimits

0xeff5,	// (0x000262fc) bg_vkb2_func_pane

0x64e6,	// (0x0001d7ed) vkb2_top_cell_left_pane_g1_ParamLimits

0xeff5,	// (0x000262fc) bg_vkb2_fuc_pane_cp03_ParamLimits

0xeff5,	// (0x000262fc) bg_vkb2_fuc_pane_cp03

0x6544,	// (0x0001d84b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xcf20,	// (0x00024227) bg_vkb2_func_pane_g1

0xcf28,	// (0x0002422f) bg_vkb2_func_pane_g2

0xcf38,	// (0x0002423f) bg_vkb2_func_pane_g3

0xcf30,	// (0x00024237) bg_vkb2_func_pane_g4

0xcf40,	// (0x00024247) bg_vkb2_func_pane_g5

0xcf48,	// (0x0002424f) bg_vkb2_func_pane_g6

0xcf50,	// (0x00024257) bg_vkb2_func_pane_g7

0xcf58,	// (0x0002425f) bg_vkb2_func_pane_g8

0xcf18,	// (0x0002421f) bg_vkb2_func_pane_g9

0x0008,

0xfe17,	// (0x0002711e) bg_vkb2_func_pane_g

0xeff5,	// (0x000262fc) bg_vkb2_fuc_pane_cp01_ParamLimits

0xeff5,	// (0x000262fc) bg_vkb2_fuc_pane_cp01

0x64e6,	// (0x0001d7ed) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x64e6,	// (0x0001d7ed) vkb2_top_cell_right_wide_pane_g1

0xeff5,	// (0x000262fc) bg_vkb2_fuc_pane_cp02_ParamLimits

0xeff5,	// (0x000262fc) bg_vkb2_fuc_pane_cp02

0x6544,	// (0x0001d84b) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6544,	// (0x0001d84b) vkb2_top_cell_right_narrow_pane_g1

0xa3a3,	// (0x000216aa) aid_touch_area_decrease_ParamLimits

0xa3a3,	// (0x000216aa) aid_touch_area_decrease

0xa3d7,	// (0x000216de) aid_touch_area_increase_ParamLimits

0xa3d7,	// (0x000216de) aid_touch_area_increase

0xa3ff,	// (0x00021706) aid_touch_area_mute_ParamLimits

0xa3ff,	// (0x00021706) aid_touch_area_mute

0xa42f,	// (0x00021736) aid_touch_area_slider_ParamLimits

0xa42f,	// (0x00021736) aid_touch_area_slider

0xa46f,	// (0x00021776) popup_slider_window_g4_ParamLimits

0xa46f,	// (0x00021776) popup_slider_window_g4

0xa497,	// (0x0002179e) popup_slider_window_g5_ParamLimits

0xa497,	// (0x0002179e) popup_slider_window_g5

0xa4cb,	// (0x000217d2) popup_slider_window_g6_ParamLimits

0xa4cb,	// (0x000217d2) popup_slider_window_g6

0x0ba9,	// (0x00017eb0) popup_slider_window_t2_ParamLimits

0x0ba9,	// (0x00017eb0) popup_slider_window_t2

0x0001,

0xfd18,	// (0x0002701f) popup_slider_window_t_ParamLimits

0xfd18,	// (0x0002701f) popup_slider_window_t

0xa4e7,	// (0x000217ee) slider_pane_ParamLimits

0xa4e7,	// (0x000217ee) slider_pane

0x1866,	// (0x00018b6d) slider_pane_g1_ParamLimits

0x1866,	// (0x00018b6d) slider_pane_g1

0x187a,	// (0x00018b81) slider_pane_g2_ParamLimits

0x187a,	// (0x00018b81) slider_pane_g2

0x1890,	// (0x00018b97) slider_pane_g3_ParamLimits

0x1890,	// (0x00018b97) slider_pane_g3

0x0003,

0xfe2a,	// (0x00027131) slider_pane_g_ParamLimits

0xfe2a,	// (0x00027131) slider_pane_g

0x906c,	// (0x00020373) popup_tb_float_extension_window_ParamLimits

0x906c,	// (0x00020373) popup_tb_float_extension_window

0x18bc,	// (0x00018bc3) aid_size_cell_tb_float_ext

0xb8f8,	// (0x00022bff) bg_popup_sub_window_cp28

0x18c8,	// (0x00018bcf) grid_tb_float_ext_pane

0x18d2,	// (0x00018bd9) cell_tb_float_ext_pane_ParamLimits

0x18d2,	// (0x00018bd9) cell_tb_float_ext_pane

0x18ec,	// (0x00018bf3) cell_tb_float_ext_pane_g1

0x18f5,	// (0x00018bfc) grid_highlight_pane_cp12

0x9e34,	// (0x0002113b) cell_last_hwr_side_pane_ParamLimits

0x9e34,	// (0x0002113b) cell_last_hwr_side_pane

0xec8c,	// (0x00025f93) cell_last_hwr_side_pane_g1

0x18fe,	// (0x00018c05) cell_last_hwr_side_pane_g2

0x0001,

0xfe33,	// (0x0002713a) cell_last_hwr_side_pane_g

0xadc1,	// (0x000220c8) vkb2_area_bottom_space_btn_pane_ParamLimits

0xadc1,	// (0x000220c8) vkb2_area_bottom_space_btn_pane

0xee33,	// (0x0002613a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x1423,	// (0x0001872a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6686,	// (0x0001d98d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x66a5,	// (0x0001d9ac) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x66a5,	// (0x0001d9ac) vkb2_area_bottom_space_btn_pane_g1

0x66df,	// (0x0001d9e6) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x66df,	// (0x0001d9e6) vkb2_area_bottom_space_btn_pane_g2

0x6715,	// (0x0001da1c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6715,	// (0x0001da1c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe38,	// (0x0002713f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe38,	// (0x0002713f) vkb2_area_bottom_space_btn_pane_g

0x5cda,	// (0x0001cfe1) cel_fep_hwr_func_pane_ParamLimits

0x5cda,	// (0x0001cfe1) cel_fep_hwr_func_pane

0x9e09,	// (0x00021110) cell_hwr_side_button_pane_ParamLimits

0x9e09,	// (0x00021110) cell_hwr_side_button_pane

0x0dff,	// (0x00018106) aid_area_touch_clock_ParamLimits

0xba9b,	// (0x00022da2) bg_uniindi_top_pane_ParamLimits

0x0e11,	// (0x00018118) uniindi_top_pane_g1_ParamLimits

0x0e27,	// (0x0001812e) uniindi_top_pane_g2_ParamLimits

0x0e33,	// (0x0001813a) uniindi_top_pane_g3_ParamLimits

0x0e44,	// (0x0001814b) uniindi_top_pane_g4_ParamLimits

0xfd50,	// (0x00027057) uniindi_top_pane_g_ParamLimits

0x0e51,	// (0x00018158) uniindi_top_pane_t1_ParamLimits

0xba9b,	// (0x00022da2) bg_vkb2_func_pane_cp01_ParamLimits

0xba9b,	// (0x00022da2) bg_vkb2_func_pane_cp01

0x2bde,	// (0x00019ee5) cel_fep_hwr_func_pane_g1_ParamLimits

0x2bde,	// (0x00019ee5) cel_fep_hwr_func_pane_g1

0xba9b,	// (0x00022da2) bg_vkb2_func_pane_cp02_ParamLimits

0xba9b,	// (0x00022da2) bg_vkb2_func_pane_cp02

0x2bde,	// (0x00019ee5) cell_hwr_side_button_pane_g1_ParamLimits

0x2bde,	// (0x00019ee5) cell_hwr_side_button_pane_g1

0xce2e,	// (0x00024135) status_pane_g4_ParamLimits

0xce2e,	// (0x00024135) status_pane_g4

0xce48,	// (0x0002414f) status_pane_t1

0xeb11,	// (0x00025e18) form2_midp_gauge_slider_cont_pane

0xeb19,	// (0x00025e20) form2_midp_gauge_slider_pane_t1_ParamLimits

0x9d54,	// (0x0002105b) form2_midp_gauge_slider_pane_t2_ParamLimits

0x9d66,	// (0x0002106d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb1c,	// (0x00026e23) form2_midp_gauge_slider_pane_t_ParamLimits

0xeb2b,	// (0x00025e32) form2_midp_slider_pane_ParamLimits

0x607b,	// (0x0001d382) aid_size_cell_func_vkb2_ParamLimits

0x607b,	// (0x0001d382) aid_size_cell_func_vkb2

0x18a8,	// (0x00018baf) slider_pane_g4_ParamLimits

0x18a8,	// (0x00018baf) slider_pane_g4

0xb1bf,	// (0x000224c6) form2_midp_gauge_slider_pane_t2_cp01

0xb1cd,	// (0x000224d4) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb1cd,	// (0x000224d4) form2_midp_gauge_slider_pane_t3_cp01

0x678a,	// (0x0001da91) form2_midp_slider_pane_cp01

0xb8f8,	// (0x00022bff) navi_smil_pane

0x2c0e,	// (0x00019f15) navi_smil_pane_g1

0x2c16,	// (0x00019f1d) navi_smil_pane_t1

0x2bec,	// (0x00019ef3) form2_midp_slider_pane_g1

0x2bf5,	// (0x00019efc) form2_midp_slider_pane_g2

0x2bfd,	// (0x00019f04) form2_midp_slider_pane_g3

0x2bec,	// (0x00019ef3) form2_midp_slider_pane_g4

0xb1ea,	// (0x000224f1) form2_midp_slider_pane_g5

0x0004,

0xfe41,	// (0x00027148) form2_midp_slider_pane_g

0x674f,	// (0x0001da56) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x674f,	// (0x0001da56) vkb2_area_bottom_space_btn_pane_g4

0x9248,	// (0x0002054f) lc0_navi_pane_ParamLimits

0x9248,	// (0x0002054f) lc0_navi_pane

0x92b2,	// (0x000205b9) lc0_stat_indi_pane_ParamLimits

0x92b2,	// (0x000205b9) lc0_stat_indi_pane

0x92c7,	// (0x000205ce) ls0_title_pane_ParamLimits

0x92c7,	// (0x000205ce) ls0_title_pane

0xbf69,	// (0x00023270) bg_popup_sub_pane_cp14_ParamLimits

0x0de6,	// (0x000180ed) list_uniindi_pane_ParamLimits

0x0df2,	// (0x000180f9) uniindi_top_pane_ParamLimits

0x0e8e,	// (0x00018195) list_single_uniindi_pane_g1_ParamLimits

0x0ea1,	// (0x000181a8) list_single_uniindi_pane_t1_ParamLimits

0xb1f3,	// (0x000224fa) lc0_stat_clock_pane_ParamLimits

0xb1f3,	// (0x000224fa) lc0_stat_clock_pane

0xb200,	// (0x00022507) lc0_stat_indi_pane_g1_ParamLimits

0xb200,	// (0x00022507) lc0_stat_indi_pane_g1

0xb20d,	// (0x00022514) lc0_stat_indi_pane_g2_ParamLimits

0xb20d,	// (0x00022514) lc0_stat_indi_pane_g2

0x0001,

0xfe4c,	// (0x00027153) lc0_stat_indi_pane_g_ParamLimits

0xfe4c,	// (0x00027153) lc0_stat_indi_pane_g

0xb21a,	// (0x00022521) lc0_uni_indicator_pane_ParamLimits

0xb21a,	// (0x00022521) lc0_uni_indicator_pane

0x2c24,	// (0x00019f2b) ls0_title_pane_g1_ParamLimits

0x2c24,	// (0x00019f2b) ls0_title_pane_g1

0xb227,	// (0x0002252e) ls0_title_pane_t1_ParamLimits

0xb227,	// (0x0002252e) ls0_title_pane_t1

0xb255,	// (0x0002255c) lc0_uni_indicator_pane_g1_ParamLimits

0xb255,	// (0x0002255c) lc0_uni_indicator_pane_g1

0x2c38,	// (0x00019f3f) lc0_stat_clock_pane_t1

0xb8f8,	// (0x00022bff) main_ai5_pane

0x2c46,	// (0x00019f4d) ai5_sk_pane_ParamLimits

0x2c46,	// (0x00019f4d) ai5_sk_pane

0xb27c,	// (0x00022583) cell_ai5_widget_pane_ParamLimits

0xb27c,	// (0x00022583) cell_ai5_widget_pane

0x2c53,	// (0x00019f5a) aid_size_cell_widget_grid

0x2c67,	// (0x00019f6e) bg_ai5_widget_pane_ParamLimits

0x2c67,	// (0x00019f6e) bg_ai5_widget_pane

0xb305,	// (0x0002260c) cell_ai5_widget_pane_g2

0xb315,	// (0x0002261c) cell_ai5_widget_pane_g3

0xb329,	// (0x00022630) cell_ai5_widget_pane_g4

0xb335,	// (0x0002263c) cell_ai5_widget_pane_g5

0xb341,	// (0x00022648) cell_ai5_widget_pane_g6

0xb34d,	// (0x00022654) cell_ai5_widget_pane_g7

0xb395,	// (0x0002269c) cell_ai5_widget_pane_t1_ParamLimits

0xb395,	// (0x0002269c) cell_ai5_widget_pane_t1

0xb3b2,	// (0x000226b9) cell_ai5_widget_pane_t2_ParamLimits

0xb3b2,	// (0x000226b9) cell_ai5_widget_pane_t2

0xb3ca,	// (0x000226d1) cell_ai5_widget_pane_t3_ParamLimits

0xb3ca,	// (0x000226d1) cell_ai5_widget_pane_t3

0xb3e2,	// (0x000226e9) cell_ai5_widget_pane_t4_ParamLimits

0xb3e2,	// (0x000226e9) cell_ai5_widget_pane_t4

0xb3fc,	// (0x00022703) cell_ai5_widget_pane_t5_ParamLimits

0xb3fc,	// (0x00022703) cell_ai5_widget_pane_t5

0x2c73,	// (0x00019f7a) cell_ai5_widget_pane_t6_ParamLimits

0x2c73,	// (0x00019f7a) cell_ai5_widget_pane_t6

0x2c85,	// (0x00019f8c) cell_ai5_widget_pane_t7_ParamLimits

0x2c85,	// (0x00019f8c) cell_ai5_widget_pane_t7

0xb41b,	// (0x00022722) cell_ai5_widget_pane_t8_ParamLimits

0xb41b,	// (0x00022722) cell_ai5_widget_pane_t8

0x0009,

0xfe66,	// (0x0002716d) cell_ai5_widget_pane_t_ParamLimits

0xfe66,	// (0x0002716d) cell_ai5_widget_pane_t

0xb463,	// (0x0002276a) grid_ai5_widget_pane

0xbf69,	// (0x00023270) highlight_cell_ai5_widget_pane_ParamLimits

0xbf69,	// (0x00023270) highlight_cell_ai5_widget_pane

0xb47b,	// (0x00022782) ai5_sk_left_pane

0xb485,	// (0x0002278c) ai5_sk_middle_pane

0xb48f,	// (0x00022796) ai5_sk_right_pane

0x2c9e,	// (0x00019fa5) bg_ai5_widget_pane_g1_ParamLimits

0x2c9e,	// (0x00019fa5) bg_ai5_widget_pane_g1

0x2caa,	// (0x00019fb1) bg_ai5_widget_pane_g2_ParamLimits

0x2caa,	// (0x00019fb1) bg_ai5_widget_pane_g2

0x2cb6,	// (0x00019fbd) bg_ai5_widget_pane_g3_ParamLimits

0x2cb6,	// (0x00019fbd) bg_ai5_widget_pane_g3

0x2cc2,	// (0x00019fc9) bg_ai5_widget_pane_g4_ParamLimits

0x2cc2,	// (0x00019fc9) bg_ai5_widget_pane_g4

0x2cce,	// (0x00019fd5) bg_ai5_widget_pane_g5_ParamLimits

0x2cce,	// (0x00019fd5) bg_ai5_widget_pane_g5

0x2cda,	// (0x00019fe1) bg_ai5_widget_pane_g6_ParamLimits

0x2cda,	// (0x00019fe1) bg_ai5_widget_pane_g6

0x2ce6,	// (0x00019fed) bg_ai5_widget_pane_g7_ParamLimits

0x2ce6,	// (0x00019fed) bg_ai5_widget_pane_g7

0x2cf2,	// (0x00019ff9) bg_ai5_widget_pane_g8_ParamLimits

0x2cf2,	// (0x00019ff9) bg_ai5_widget_pane_g8

0x2cfe,	// (0x0001a005) bg_ai5_widget_pane_g9_ParamLimits

0x2cfe,	// (0x0001a005) bg_ai5_widget_pane_g9

0x0008,

0xfe7b,	// (0x00027182) bg_ai5_widget_pane_g_ParamLimits

0xfe7b,	// (0x00027182) bg_ai5_widget_pane_g

0x2d31,	// (0x0001a038) cell_shortcut_ai5_widget_pane_ParamLimits

0x2d31,	// (0x0001a038) cell_shortcut_ai5_widget_pane

0xb9a4,	// (0x00022cab) bg_cell_shortcut_ai5_widget_pane

0x2d42,	// (0x0001a049) cell_grid_ai5_widget_pane_g1

0x2d4b,	// (0x0001a052) highlight_cell_shortcut_ai5_widget_pane

0xcf28,	// (0x0002422f) ai5_sk_left_pane_g1

0x2d53,	// (0x0001a05a) ai5_sk_left_pane_g2

0x2d5b,	// (0x0001a062) ai5_sk_left_pane_g3

0x2d63,	// (0x0001a06a) ai5_sk_left_pane_g4

0x0003,

0xfe8e,	// (0x00027195) ai5_sk_left_pane_g

0x2d6b,	// (0x0001a072) ai5_sk_left_pane_t1

0xcf20,	// (0x00024227) ai5_sk_right_pane_g1

0x2d79,	// (0x0001a080) ai5_sk_right_pane_g2

0x2d81,	// (0x0001a088) ai5_sk_right_pane_g3

0x2d89,	// (0x0001a090) ai5_sk_right_pane_g4

0x0003,

0xfe97,	// (0x0002719e) ai5_sk_right_pane_g

0x2d91,	// (0x0001a098) ai5_sk_right_pane_t1

0xcf20,	// (0x00024227) ai5_sk_middle_pane_g1

0xcf28,	// (0x0002422f) ai5_sk_middle_pane_g2

0xcf40,	// (0x00024247) ai5_sk_middle_pane_g3

0x2d81,	// (0x0001a088) ai5_sk_middle_pane_g4

0x2d5b,	// (0x0001a062) ai5_sk_middle_pane_g5

0x2d9f,	// (0x0001a0a6) ai5_sk_middle_pane_g6

0xb499,	// (0x000227a0) ai5_sk_middle_pane_g7

0x0006,

0xfea0,	// (0x000271a7) ai5_sk_middle_pane_g

0x9134,	// (0x0002043b) aid_touch_area_size_lc0_ParamLimits

0x9134,	// (0x0002043b) aid_touch_area_size_lc0

0x5e65,	// (0x0001d16c) cell_hwr_candidate_pane_t1_ParamLimits

0xcd14,	// (0x0002401b) aid_touch_navi_pane

0x93b9,	// (0x000206c0) status_dt_navi_pane_ParamLimits

0x93b9,	// (0x000206c0) status_dt_navi_pane

0x93d1,	// (0x000206d8) status_dt_sta_pane_ParamLimits

0x93d1,	// (0x000206d8) status_dt_sta_pane

0xb4a1,	// (0x000227a8) dt_sta_controll_pane

0xb4ae,	// (0x000227b5) dt_sta_indi_pane

0xb4bb,	// (0x000227c2) dt_sta_title_pane

0xba9b,	// (0x00022da2) bg_dt_sta_indi_pane_ParamLimits

0xba9b,	// (0x00022da2) bg_dt_sta_indi_pane

0x2da7,	// (0x0001a0ae) dt_sta_battery_pane

0xb4cd,	// (0x000227d4) dt_sta_indi_pane_g1

0xb4d6,	// (0x000227dd) dt_sta_indi_pane_g2

0xb4df,	// (0x000227e6) dt_sta_indi_pane_g3

0x0002,

0xfeaf,	// (0x000271b6) dt_sta_indi_pane_g

0xb4e8,	// (0x000227ef) dt_sta_signal_pane

0xbf69,	// (0x00023270) bg_dt_sta_title_pane_ParamLimits

0xbf69,	// (0x00023270) bg_dt_sta_title_pane

0xdbab,	// (0x00024eb2) dt_sta_title_pane_g1

0xb4f1,	// (0x000227f8) dt_sta_title_pane_t1_ParamLimits

0xb4f1,	// (0x000227f8) dt_sta_title_pane_t1

0xb8f8,	// (0x00022bff) bg_dt_sta_control_pane

0xb506,	// (0x0002280d) dt_sta_controll_pane_g1

0xb50f,	// (0x00022816) bg_dt_sta_title_pane_g1

0xb518,	// (0x0002281f) bg_dt_sta_title_pane_g2

0xb521,	// (0x00022828) bg_dt_sta_title_pane_g3

0x0002,

0xfeb6,	// (0x000271bd) bg_dt_sta_title_pane_g

0xec8c,	// (0x00025f93) bg_dt_sta_indi_pane_g1

0x2daf,	// (0x0001a0b6) dt_sta_signal_pane_g1

0x2db7,	// (0x0001a0be) dt_sta_signal_pane_g2

0x0001,

0xfebd,	// (0x000271c4) dt_sta_signal_pane_g

0x2dbf,	// (0x0001a0c6) dt_sta_battery_pane_g1

0x2dc8,	// (0x0001a0cf) dt_sta_battery_pane_t1

0xec8c,	// (0x00025f93) bg_dt_sta_control_pane_g1

0xc51f,	// (0x00023826) fep_china_uni_eep_pane

0xc527,	// (0x0002382e) fep_china_uni_entry_pane_ParamLimits

0xc537,	// (0x0002383e) popup_fep_china_uni_window_g1_ParamLimits

0xc547,	// (0x0002384e) popup_fep_china_uni_window_g2_ParamLimits

0xc547,	// (0x0002384e) popup_fep_china_uni_window_g2

0x0001,

0xf75d,	// (0x00026a64) popup_fep_china_uni_window_g_ParamLimits

0xf75d,	// (0x00026a64) popup_fep_china_uni_window_g

0x2dd7,	// (0x0001a0de) fep_china_uni_eep_pane_g1

0x2ddf,	// (0x0001a0e6) fep_china_uni_eep_pane_t1

0x2c05,	// (0x00019f0c) aid_touch_area_size_smil_player

0xce01,	// (0x00024108) lc0_clock_pane

0xce3c,	// (0x00024143) status_pane_g5_ParamLimits

0xce3c,	// (0x00024143) status_pane_g5

0x8c12,	// (0x0001ff19) popup_keymap_window

0xce1a,	// (0x00024121) status_icon_pane

0xb315,	// (0x0002261c) cell_ai5_widget_pane_g3_ParamLimits

0xb329,	// (0x00022630) cell_ai5_widget_pane_g4_ParamLimits

0xb335,	// (0x0002263c) cell_ai5_widget_pane_g5_ParamLimits

0xb359,	// (0x00022660) cell_ai5_widget_pane_g8_ParamLimits

0xb359,	// (0x00022660) cell_ai5_widget_pane_g8

0xb36d,	// (0x00022674) cell_ai5_widget_pane_g9_ParamLimits

0xb36d,	// (0x00022674) cell_ai5_widget_pane_g9

0xb381,	// (0x00022688) cell_ai5_widget_pane_g10_ParamLimits

0xb381,	// (0x00022688) cell_ai5_widget_pane_g10

0x2dee,	// (0x0001a0f5) status_icon_pane_g1

0xb8f8,	// (0x00022bff) bg_popup_sub_pane_cp13

0x2df6,	// (0x0001a0fd) popup_keymap_window_t1

0x8922,	// (0x0001fc29) control_pane_g6_ParamLimits

0x8922,	// (0x0001fc29) control_pane_g6

0x892f,	// (0x0001fc36) control_pane_g7_ParamLimits

0x892f,	// (0x0001fc36) control_pane_g7

0x893c,	// (0x0001fc43) control_pane_g8_ParamLimits

0x893c,	// (0x0001fc43) control_pane_g8

0xb4a1,	// (0x000227a8) dt_sta_controll_pane_ParamLimits

0xb4ae,	// (0x000227b5) dt_sta_indi_pane_ParamLimits

0xb4bb,	// (0x000227c2) dt_sta_title_pane_ParamLimits

0xbeab,	// (0x000231b2) aid_size_touch_scroll_bar_cale

0x4fdc,	// (0x0001c2e3) popup_discreet_window_ParamLimits

0x4fdc,	// (0x0001c2e3) popup_discreet_window

0x81c0,	// (0x0001f4c7) popup_sk_window

0xd49f,	// (0x000247a6) bg_popup_sub_pane_cp28_ParamLimits

0xd49f,	// (0x000247a6) bg_popup_sub_pane_cp28

0x2e04,	// (0x0001a10b) popup_discreet_window_g1_ParamLimits

0x2e04,	// (0x0001a10b) popup_discreet_window_g1

0x2e24,	// (0x0001a12b) popup_discreet_window_t1_ParamLimits

0x2e24,	// (0x0001a12b) popup_discreet_window_t1

0x2e42,	// (0x0001a149) popup_discreet_window_t2_ParamLimits

0x2e42,	// (0x0001a149) popup_discreet_window_t2

0x0002,

0xfec2,	// (0x000271c9) popup_discreet_window_t_ParamLimits

0xfec2,	// (0x000271c9) popup_discreet_window_t

0x6aea,	// (0x0001ddf1) popup_sk_window_g1

0x6af4,	// (0x0001ddfb) popup_sk_window_g2

0x0001,

0xfec9,	// (0x000271d0) popup_sk_window_g

0x2ea2,	// (0x0001a1a9) popup_sk_window_t1

0x2e94,	// (0x0001a19b) popup_sk_window_t1_copy1

0xb305,	// (0x0002260c) cell_ai5_widget_pane_g2_ParamLimits

0xb42d,	// (0x00022734) cell_ai5_widget_pane_t9_ParamLimits

0xb42d,	// (0x00022734) cell_ai5_widget_pane_t9

0xb8f8,	// (0x00022bff) main_fep_fshwr2_pane

0xb52a,	// (0x00022831) aid_fshwr2_btn_pane

0xb532,	// (0x00022839) aid_fshwr2_syb_pane

0xb53a,	// (0x00022841) aid_fshwr2_txt_pane

0xb542,	// (0x00022849) fshwr2_func_candi_pane

0xb54c,	// (0x00022853) fshwr2_hwr_syb_pane

0xb55a,	// (0x00022861) fshwr2_icf_pane

0xb8f8,	// (0x00022bff) fshwr2_icf_bg_pane

0xb564,	// (0x0002286b) fshwr2_icf_pane_t1_ParamLimits

0xb564,	// (0x0002286b) fshwr2_icf_pane_t1

0xec8c,	// (0x00025f93) fshwr2_func_candi_pane_g1

0x2ec4,	// (0x0001a1cb) fshwr2_func_candi_row_pane_ParamLimits

0x2ec4,	// (0x0001a1cb) fshwr2_func_candi_row_pane

0xb57c,	// (0x00022883) cell_fshwr2_syb_pane_ParamLimits

0xb57c,	// (0x00022883) cell_fshwr2_syb_pane

0xee33,	// (0x0002613a) fshwr2_hwr_syb_pane_g1_ParamLimits

0xee33,	// (0x0002613a) fshwr2_hwr_syb_pane_g1

0xb8f8,	// (0x00022bff) bg_popup_call_pane_cp01

0x2ed5,	// (0x0001a1dc) fshwr2_func_candi_cell_pane_ParamLimits

0x2ed5,	// (0x0001a1dc) fshwr2_func_candi_cell_pane

0x2f06,	// (0x0001a20d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2f06,	// (0x0001a20d) fshwr2_func_candi_cell_bg_pane

0x2f20,	// (0x0001a227) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x2f20,	// (0x0001a227) fshwr2_func_candi_cell_pane_g1

0x2f48,	// (0x0001a24f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x2f48,	// (0x0001a24f) fshwr2_func_candi_cell_pane_t1

0xb8f8,	// (0x00022bff) bg_button_pane_cp08

0xc98e,	// (0x00023c95) cell_fshwr2_syb_bg_pane

0xb596,	// (0x0002289d) cell_fshwr2_syb_bg_pane_g1

0xb59e,	// (0x000228a5) cell_fshwr2_syb_bg_pane_t1

0xbf69,	// (0x00023270) main_tmo_pane

0x988e,	// (0x00020b95) uni_indicator_pane_g1_ParamLimits

0x98a3,	// (0x00020baa) uni_indicator_pane_g2_ParamLimits

0x98b8,	// (0x00020bbf) uni_indicator_pane_g3_ParamLimits

0xdecb,	// (0x000251d2) uni_indicator_pane_g4_ParamLimits

0xdecb,	// (0x000251d2) uni_indicator_pane_g4

0xdedf,	// (0x000251e6) uni_indicator_pane_g5_ParamLimits

0xdedf,	// (0x000251e6) uni_indicator_pane_g5

0xdef3,	// (0x000251fa) uni_indicator_pane_g6_ParamLimits

0xdef3,	// (0x000251fa) uni_indicator_pane_g6

0xf955,	// (0x00026c5c) uni_indicator_pane_g_ParamLimits

0xa37f,	// (0x00021686) popup_tmo_note_window_ParamLimits

0xa37f,	// (0x00021686) popup_tmo_note_window

0xb8f8,	// (0x00022bff) fshwr2_bg_pane

0x2f39,	// (0x0001a240) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x2f39,	// (0x0001a240) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfece,	// (0x000271d5) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfece,	// (0x000271d5) fshwr2_func_candi_cell_pane_g

0xec8c,	// (0x00025f93) bg_popup_window_pane_cp01

0x2f5b,	// (0x0001a262) bg_popup_window_pane_g1_cp01

0x2f64,	// (0x0001a26b) bg_popup_window_pane_cp22_ParamLimits

0x2f64,	// (0x0001a26b) bg_popup_window_pane_cp22

0x2f72,	// (0x0001a279) listscroll_tmo_link_pane_ParamLimits

0x2f72,	// (0x0001a279) listscroll_tmo_link_pane

0x2fb2,	// (0x0001a2b9) popup_tmo_note_window_g1_ParamLimits

0x2fb2,	// (0x0001a2b9) popup_tmo_note_window_g1

0x2fbf,	// (0x0001a2c6) tmo_note_info_pane_ParamLimits

0x2fbf,	// (0x0001a2c6) tmo_note_info_pane

0xb5ad,	// (0x000228b4) list_tmo_note_info_pane_g1_ParamLimits

0xb5ad,	// (0x000228b4) list_tmo_note_info_pane_g1

0x2fd9,	// (0x0001a2e0) list_tmo_note_info_pane_g2_ParamLimits

0x2fd9,	// (0x0001a2e0) list_tmo_note_info_pane_g2

0x0001,

0xfed3,	// (0x000271da) list_tmo_note_info_pane_g_ParamLimits

0xfed3,	// (0x000271da) list_tmo_note_info_pane_g

0x2ff5,	// (0x0001a2fc) list_tmo_note_info_text_pane_ParamLimits

0x2ff5,	// (0x0001a2fc) list_tmo_note_info_text_pane

0x3037,	// (0x0001a33e) list_tmo_link_pane

0x3044,	// (0x0001a34b) scroll_pane_cp20

0x3051,	// (0x0001a358) list_single_tmo_link_pane_ParamLimits

0x3051,	// (0x0001a358) list_single_tmo_link_pane

0x3061,	// (0x0001a368) list_single_tmo_link_pane_t1

0x306f,	// (0x0001a376) list_tmo_note_info_text_pane_t1_ParamLimits

0x306f,	// (0x0001a376) list_tmo_note_info_text_pane_t1

0x85e7,	// (0x0001f8ee) aid_size_touch_scroll_bar_cp01_ParamLimits

0x85e7,	// (0x0001f8ee) aid_size_touch_scroll_bar_cp01

0x7cf2,	// (0x0001eff9) aid_size_touch_slider_marker

0x81b0,	// (0x0001f4b7) popup_settings_window_ParamLimits

0x81b0,	// (0x0001f4b7) popup_settings_window

0x454c,	// (0x0001b853) popup_candi_list_indi_window

0xcd14,	// (0x0002401b) aid_touch_navi_pane_ParamLimits

0x5fd1,	// (0x0001d2d8) rs_clock_indi_pane

0x5fda,	// (0x0001d2e1) sctrl_sk_bottom_pane_ParamLimits

0x5feb,	// (0x0001d2f2) sctrl_sk_top_pane_ParamLimits

0x60d5,	// (0x0001d3dc) popup_fep_tooltip_window

0x2c53,	// (0x00019f5a) aid_size_cell_widget_grid_ParamLimits

0xb2f9,	// (0x00022600) cell_ai5_widget_pane_g1_ParamLimits

0xb2f9,	// (0x00022600) cell_ai5_widget_pane_g1

0xb341,	// (0x00022648) cell_ai5_widget_pane_g6_ParamLimits

0xb34d,	// (0x00022654) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe51,	// (0x00027158) cell_ai5_widget_pane_g_ParamLimits

0xfe51,	// (0x00027158) cell_ai5_widget_pane_g

0xb451,	// (0x00022758) cell_ai5_widget_pane_t10_ParamLimits

0xb451,	// (0x00022758) cell_ai5_widget_pane_t10

0xb463,	// (0x0002276a) grid_ai5_widget_pane_ParamLimits

0x2d0a,	// (0x0001a011) cell_contacts_ai5_widget_pane_ParamLimits

0x2d0a,	// (0x0001a011) cell_contacts_ai5_widget_pane

0x2e57,	// (0x0001a15e) popup_discreet_window_t3_ParamLimits

0x2e57,	// (0x0001a15e) popup_discreet_window_t3

0x2eb0,	// (0x0001a1b7) popup_fshwr2_char_preview_window_ParamLimits

0x2eb0,	// (0x0001a1b7) popup_fshwr2_char_preview_window

0xb5c4,	// (0x000228cb) tmo_note_info_pane_t1

0xb5d9,	// (0x000228e0) tmo_note_info_pane_t2

0xb5f0,	// (0x000228f7) tmo_note_info_pane_t3

0x3013,	// (0x0001a31a) tmo_note_info_pane_t4

0x3025,	// (0x0001a32c) tmo_note_info_pane_t5

0x0004,

0xfed8,	// (0x000271df) tmo_note_info_pane_t

0x3037,	// (0x0001a33e) list_tmo_link_pane_ParamLimits

0x3044,	// (0x0001a34b) scroll_pane_cp20_ParamLimits

0xb8f8,	// (0x00022bff) bg_popup_fep_char_preview_window_cp01

0x3088,	// (0x0001a38f) popup_fshwr2_char_preview_window_t1

0x3096,	// (0x0001a39d) popup_candi_list_indi_window_g1

0x309f,	// (0x0001a3a6) bg_cell_contacts_ai5_widget_pane

0x30ab,	// (0x0001a3b2) cell_contacts_ai5_widget_pane_g1

0x30bf,	// (0x0001a3c6) cell_contacts_ai5_widget_pane_g2

0x30ce,	// (0x0001a3d5) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee3,	// (0x000271ea) cell_contacts_ai5_widget_pane_g

0x30e1,	// (0x0001a3e8) cell_contacts_ai5_widget_pane_t1

0xbf69,	// (0x00023270) highlight_cell_shortcut_ai5_widget_pane_cp01

0xb66a,	// (0x00022971) settings_container_pane

0xc98e,	// (0x00023c95) listscroll_set_pane_copy1

0xe6a9,	// (0x000259b0) scroll_pane_cp121_copy1

0x30f6,	// (0x0001a3fd) set_content_pane_copy1

0xb676,	// (0x0002297d) aid_height_set_list_copy1_ParamLimits

0xb676,	// (0x0002297d) aid_height_set_list_copy1

0xdc60,	// (0x00024f67) aid_size_parent_copy1_ParamLimits

0xdc60,	// (0x00024f67) aid_size_parent_copy1

0xb682,	// (0x00022989) button_value_adjust_pane_cp6_copy1_ParamLimits

0xb682,	// (0x00022989) button_value_adjust_pane_cp6_copy1

0xc0c1,	// (0x000233c8) list_highlight_pane_cp2_copy1_ParamLimits

0xc0c1,	// (0x000233c8) list_highlight_pane_cp2_copy1

0xb696,	// (0x0002299d) list_set_pane_copy1_ParamLimits

0xb696,	// (0x0002299d) list_set_pane_copy1

0xb605,	// (0x0002290c) main_pane_set_t1_copy1_ParamLimits

0xb605,	// (0x0002290c) main_pane_set_t1_copy1

0xb63f,	// (0x00022946) main_pane_set_t2_copy1_ParamLimits

0xb63f,	// (0x00022946) main_pane_set_t2_copy1

0xb743,	// (0x00022a4a) main_pane_set_t3_copy1

0xb751,	// (0x00022a58) main_pane_set_t4_copy1

0xb65e,	// (0x00022965) set_content_pane_g1_copy1_ParamLimits

0xb65e,	// (0x00022965) set_content_pane_g1_copy1

0xb75f,	// (0x00022a66) setting_code_pane_copy1

0x30fe,	// (0x0001a405) setting_slider_graphic_pane_copy1

0x30fe,	// (0x0001a405) setting_slider_pane_copy1

0x3108,	// (0x0001a40f) setting_text_pane_copy1

0x3112,	// (0x0001a419) setting_volume_pane_copy1

0xb769,	// (0x00022a70) settings_code_pane_cp2_copy1

0xb771,	// (0x00022a78) settings_code_pane_cp_copy1_ParamLimits

0xb771,	// (0x00022a78) settings_code_pane_cp_copy1

0xb785,	// (0x00022a8c) volume_set_pane_copy1

0xb78d,	// (0x00022a94) volume_set_pane_g10_copy1

0xb795,	// (0x00022a9c) volume_set_pane_g1_copy1

0xb79d,	// (0x00022aa4) volume_set_pane_g2_copy1

0xb7a5,	// (0x00022aac) volume_set_pane_g3_copy1

0xb7ad,	// (0x00022ab4) volume_set_pane_g4_copy1

0xb7b5,	// (0x00022abc) volume_set_pane_g5_copy1

0xb7bd,	// (0x00022ac4) volume_set_pane_g6_copy1

0xb7c5,	// (0x00022acc) volume_set_pane_g7_copy1

0xb7cd,	// (0x00022ad4) volume_set_pane_g8_copy1

0xb7d5,	// (0x00022adc) volume_set_pane_g9_copy1

0xb968,	// (0x00022c6f) bg_set_opt_pane_cp_copy1_ParamLimits

0xb968,	// (0x00022c6f) bg_set_opt_pane_cp_copy1

0x311b,	// (0x0001a422) setting_slider_pane_t1_copy1_ParamLimits

0x311b,	// (0x0001a422) setting_slider_pane_t1_copy1

0xb7dd,	// (0x00022ae4) setting_slider_pane_t2_copy1_ParamLimits

0xb7dd,	// (0x00022ae4) setting_slider_pane_t2_copy1

0xb7f7,	// (0x00022afe) setting_slider_pane_t3_copy1_ParamLimits

0xb7f7,	// (0x00022afe) setting_slider_pane_t3_copy1

0xb80f,	// (0x00022b16) slider_set_pane_copy1_ParamLimits

0xb80f,	// (0x00022b16) slider_set_pane_copy1

0xbfd0,	// (0x000232d7) set_opt_bg_pane_g1_copy2

0xbfd8,	// (0x000232df) set_opt_bg_pane_g2_copy2

0x3139,	// (0x0001a440) set_opt_bg_pane_g3_copy2

0xbfe8,	// (0x000232ef) set_opt_bg_pane_g4_copy2

0xbff0,	// (0x000232f7) set_opt_bg_pane_g5_copy2

0xbff8,	// (0x000232ff) set_opt_bg_pane_g6_copy2

0xb825,	// (0x00022b2c) set_opt_bg_pane_g7_copy2

0x3143,	// (0x0001a44a) set_opt_bg_pane_g8_copy2

0x314d,	// (0x0001a454) set_opt_bg_pane_g9_copy2

0x6dfe,	// (0x0001e105) aid_size_touch_slider_mark_copy1_ParamLimits

0x6dfe,	// (0x0001e105) aid_size_touch_slider_mark_copy1

0x3157,	// (0x0001a45e) slider_set_pane_g1_copy1

0x6e12,	// (0x0001e119) slider_set_pane_g2_copy1

0x5ac1,	// (0x0001cdc8) slider_set_pane_g3_copy1_ParamLimits

0x5ac1,	// (0x0001cdc8) slider_set_pane_g3_copy1

0x5ad5,	// (0x0001cddc) slider_set_pane_g4_copy1_ParamLimits

0x5ad5,	// (0x0001cddc) slider_set_pane_g4_copy1

0x5aed,	// (0x0001cdf4) slider_set_pane_g5_copy1_ParamLimits

0x5aed,	// (0x0001cdf4) slider_set_pane_g5_copy1

0x5ac1,	// (0x0001cdc8) slider_set_pane_g6_copy1_ParamLimits

0x5ac1,	// (0x0001cdc8) slider_set_pane_g6_copy1

0xb82d,	// (0x00022b34) slider_set_pane_g7_copy1_ParamLimits

0xb82d,	// (0x00022b34) slider_set_pane_g7_copy1

0xb90c,	// (0x00022c13) bg_set_opt_pane_cp2_copy1

0x3160,	// (0x0001a467) setting_slider_graphic_pane_g1_copy1

0xb843,	// (0x00022b4a) setting_slider_graphic_pane_t1_copy1

0xb853,	// (0x00022b5a) setting_slider_graphic_pane_t2_copy1

0xb863,	// (0x00022b6a) slider_set_pane_cp_copy1

0x3171,	// (0x0001a478) input_focus_pane_cp1_copy1

0x317a,	// (0x0001a481) list_set_text_pane_copy1

0x3182,	// (0x0001a489) setting_text_pane_g1_copy1

0x3d5d,	// (0x0001b064) set_text_pane_t1_copy1

0x3171,	// (0x0001a478) input_focus_pane_cp2_copy1

0x3182,	// (0x0001a489) setting_code_pane_g1_copy1

0xb86b,	// (0x00022b72) setting_code_pane_t1_copy1

0x85d5,	// (0x0001f8dc) list_set_graphic_pane_copy1

0xb90c,	// (0x00022c13) bg_set_opt_pane_cp4_copy1

0x87ef,	// (0x0001faf6) list_set_graphic_pane_g1_copy1_ParamLimits

0x87ef,	// (0x0001faf6) list_set_graphic_pane_g1_copy1

0xb879,	// (0x00022b80) list_set_graphic_pane_g2_copy1

0x8807,	// (0x0001fb0e) list_set_graphic_pane_t1_copy1_ParamLimits

0x8807,	// (0x0001fb0e) list_set_graphic_pane_t1_copy1

0xec8c,	// (0x00025f93) rs_clock_indi_pane_g1

0x318b,	// (0x0001a492) rs_clock_indi_pane_t1

0x2da7,	// (0x0001a0ae) rs_indi_pane

0x3199,	// (0x0001a4a0) rs_indi_pane_g1

0x31a2,	// (0x0001a4a9) rs_indi_pane_g2

0x31ab,	// (0x0001a4b2) rs_indi_pane_g3

0x0002,

0xfeea,	// (0x000271f1) rs_indi_pane_g

0xc98e,	// (0x00023c95) bg_popup_preview_window_pane_cp03

0x31b4,	// (0x0001a4bb) popup_fep_tooltip_window_t1

0x002c,	// (0x00017333) popup_note2_window_g2_ParamLimits

0x002c,	// (0x00017333) popup_note2_window_g2

0x0001,

0xfc88,	// (0x00026f8f) popup_note2_window_g_ParamLimits

0xfc88,	// (0x00026f8f) popup_note2_window_g

0x0616,	// (0x0001791d) bg_popup_sub_pane_cp11_ParamLimits

0x0623,	// (0x0001792a) cell_ai3_links_pane_g1_ParamLimits

0x063a,	// (0x00017941) cell_ai3_links_pane_t1

0x3d5d,	// (0x0001b064) set_text_pane_t1_copy1_ParamLimits

0xc89f,	// (0x00023ba6) cell_graphic_popup_pane_cp2_ParamLimits

0xc89f,	// (0x00023ba6) cell_graphic_popup_pane_cp2

0x31c2,	// (0x0001a4c9) cell_graphic_popup_pane_g1_cp2

0xbcbe,	// (0x00022fc5) cell_graphic_popup_pane_g2_cp2

0x31ca,	// (0x0001a4d1) cell_graphic_popup_pane_g3_cp2

0x31d2,	// (0x0001a4d9) cell_graphic_popup_pane_t2_cp2

0xbccf,	// (0x00022fd6) grid_highlight_pane_cp3_cp2

0xc26b,	// (0x00023572) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xbf69,	// (0x00023270) main_tmo_pane_ParamLimits

0xa373,	// (0x0002167a) popup_tmo_big_image_note_window

0xb2e9,	// (0x000225f0) cell_ai5_widget_list_pane

0xb2f1,	// (0x000225f8) cell_ai5_widget_lrg_icon_pane

0xb5c4,	// (0x000228cb) tmo_note_info_pane_t1_ParamLimits

0xb5d9,	// (0x000228e0) tmo_note_info_pane_t2_ParamLimits

0xb5f0,	// (0x000228f7) tmo_note_info_pane_t3_ParamLimits

0x3013,	// (0x0001a31a) tmo_note_info_pane_t4_ParamLimits

0x3025,	// (0x0001a32c) tmo_note_info_pane_t5_ParamLimits

0xfed8,	// (0x000271df) tmo_note_info_pane_t_ParamLimits

0xb66a,	// (0x00022971) settings_container_pane_ParamLimits

0x3169,	// (0x0001a470) indicator_popup_pane_cp5

0x3169,	// (0x0001a470) indicator_popup_pane_cp6

0x85d5,	// (0x0001f8dc) list_set_graphic_pane_copy1_ParamLimits

0xb8f8,	// (0x00022bff) bg_popup_window_pane_cp23

0x31e0,	// (0x0001a4e7) popup_tmo_big_image_note_window_g1

0x31ea,	// (0x0001a4f1) popup_tmo_big_image_note_window_t1

0x31fa,	// (0x0001a501) popup_tmo_big_image_note_window_t2

0x320a,	// (0x0001a511) popup_tmo_big_image_note_window_t3

0x0002,

0xfef1,	// (0x000271f8) popup_tmo_big_image_note_window_t

0xb881,	// (0x00022b88) cell_ai5_widget_lrg_icon_pane_g1

0xb889,	// (0x00022b90) cell_ai5_widget_lrg_icon_pane_t1

0xb897,	// (0x00022b9e) cell_ai5_widget_list_row_pane_ParamLimits

0xb897,	// (0x00022b9e) cell_ai5_widget_list_row_pane

0xb8b0,	// (0x00022bb7) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xb8b0,	// (0x00022bb7) cell_ai5_widget_list_row_pane_g1

0xb8bd,	// (0x00022bc4) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xb8bd,	// (0x00022bc4) cell_ai5_widget_list_row_pane_t1

0xb8d5,	// (0x00022bdc) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xb8d5,	// (0x00022bdc) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfef8,	// (0x000271ff) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef8,	// (0x000271ff) cell_ai5_widget_list_row_pane_t

0xb8f8,	// (0x00022bff) main_fep_vtchi_ss_pane

0x321a,	// (0x0001a521) popup_fep_char_pre_window

0x3222,	// (0x0001a529) popup_fep_ituss_window

0x322d,	// (0x0001a534) popup_fep_vkbss_window

0x3236,	// (0x0001a53d) grid_vkbss_keypad_pane_ParamLimits

0x3236,	// (0x0001a53d) grid_vkbss_keypad_pane

0x3246,	// (0x0001a54d) ituss_keypad_pane

0x324e,	// (0x0001a555) aid_vkbss_key_offset_ParamLimits

0x324e,	// (0x0001a555) aid_vkbss_key_offset

0x325d,	// (0x0001a564) cell_vkbss_key_pane_ParamLimits

0x325d,	// (0x0001a564) cell_vkbss_key_pane

0x3273,	// (0x0001a57a) bg_cell_vkbss_key_g1_ParamLimits

0x3273,	// (0x0001a57a) bg_cell_vkbss_key_g1

0x327f,	// (0x0001a586) cell_vkbss_key_3p_pane_ParamLimits

0x327f,	// (0x0001a586) cell_vkbss_key_3p_pane

0x3299,	// (0x0001a5a0) cell_vkbss_key_g1_ParamLimits

0x3299,	// (0x0001a5a0) cell_vkbss_key_g1

0x32b3,	// (0x0001a5ba) cell_vkbss_key_t1_ParamLimits

0x32b3,	// (0x0001a5ba) cell_vkbss_key_t1

0x32de,	// (0x0001a5e5) cell_ituss_key_pane_ParamLimits

0x32de,	// (0x0001a5e5) cell_ituss_key_pane

0x32ed,	// (0x0001a5f4) bg_cell_ituss_key_g1_ParamLimits

0x32ed,	// (0x0001a5f4) bg_cell_ituss_key_g1

0x32f9,	// (0x0001a600) cell_ituss_key_pane_g1_ParamLimits

0x32f9,	// (0x0001a600) cell_ituss_key_pane_g1

0x3305,	// (0x0001a60c) cell_ituss_key_pane_g2_ParamLimits

0x3305,	// (0x0001a60c) cell_ituss_key_pane_g2

0x0001,

0xfefd,	// (0x00027204) cell_ituss_key_pane_g_ParamLimits

0xfefd,	// (0x00027204) cell_ituss_key_pane_g

0x3318,	// (0x0001a61f) cell_ituss_key_t1_ParamLimits

0x3318,	// (0x0001a61f) cell_ituss_key_t1

0x3336,	// (0x0001a63d) cell_ituss_key_t2_ParamLimits

0x3336,	// (0x0001a63d) cell_ituss_key_t2

0x3355,	// (0x0001a65c) cell_ituss_key_t3_ParamLimits

0x3355,	// (0x0001a65c) cell_ituss_key_t3

0x3374,	// (0x0001a67b) cell_ituss_key_t4_ParamLimits

0x3374,	// (0x0001a67b) cell_ituss_key_t4

0x0003,

0xff02,	// (0x00027209) cell_ituss_key_t_ParamLimits

0xff02,	// (0x00027209) cell_ituss_key_t

0x3393,	// (0x0001a69a) cell_vkbss_key_3p_pane_g1

0x339b,	// (0x0001a6a2) cell_vkbss_key_3p_pane_g2

0x33a3,	// (0x0001a6aa) cell_vkbss_key_3p_pane_g3

0x0002,

0xff0b,	// (0x00027212) cell_vkbss_key_3p_pane_g

0xb8f8,	// (0x00022bff) bg_popup_fep_char_preview_window_cp02

0x33ab,	// (0x0001a6b2) popup_fep_char_pre_window_t1

0xb2df,	// (0x000225e6) main_ai5_sk_pane

0x309f,	// (0x0001a3a6) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x30ab,	// (0x0001a3b2) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x30bf,	// (0x0001a3c6) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x30ce,	// (0x0001a3d5) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee3,	// (0x000271ea) cell_contacts_ai5_widget_pane_g_ParamLimits

0x30e1,	// (0x0001a3e8) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xbf69,	// (0x00023270) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xb8e7,	// (0x00022bee) main_ai5_sk_pane_g1
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small

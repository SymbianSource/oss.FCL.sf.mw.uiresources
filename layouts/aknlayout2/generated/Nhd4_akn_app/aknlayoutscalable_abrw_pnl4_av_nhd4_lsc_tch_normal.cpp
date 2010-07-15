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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000147f1 };

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
0x99d4,	// (0x0001e1c5) Screen

0x99e0,	// (0x0001e1d1) application_window_ParamLimits

0x99e0,	// (0x0001e1d1) application_window

0xc2eb,	// (0x00020adc) screen_g1

0x84a4,	// (0x0001cc95) area_bottom_pane_ParamLimits

0x84a4,	// (0x0001cc95) area_bottom_pane

0xe145,	// (0x00022936) area_top_pane_ParamLimits

0xe145,	// (0x00022936) area_top_pane

0xe1e3,	// (0x000229d4) main_pane_ParamLimits

0xe1e3,	// (0x000229d4) main_pane

0xc2f5,	// (0x00020ae6) misc_graphics

0xab8c,	// (0x0001f37d) battery_pane_ParamLimits

0xab8c,	// (0x0001f37d) battery_pane

0x2257,	// (0x00016a48) bg_status_flat_pane_g8

0x225f,	// (0x00016a50) bg_status_flat_pane_g9

0x1542,	// (0x00015d33) context_pane_ParamLimits

0x1542,	// (0x00015d33) context_pane

0xacf7,	// (0x0001f4e8) navi_pane_ParamLimits

0xacf7,	// (0x0001f4e8) navi_pane

0xad75,	// (0x0001f566) signal_pane_ParamLimits

0xad75,	// (0x0001f566) signal_pane

0x0008,

0xf859,	// (0x0002404a) bg_status_flat_pane_g

0xae05,	// (0x0001f5f6) status_pane_g1_ParamLimits

0xae05,	// (0x0001f5f6) status_pane_g1

0xae1b,	// (0x0001f60c) status_pane_g2_ParamLimits

0xae1b,	// (0x0001f60c) status_pane_g2

0x1769,	// (0x00015f5a) status_pane_g3_ParamLimits

0x1769,	// (0x00015f5a) status_pane_g3

0x0004,

0xf78c,	// (0x00023f7d) status_pane_g_ParamLimits

0xf78c,	// (0x00023f7d) status_pane_g

0xae27,	// (0x0001f618) title_pane_ParamLimits

0xae27,	// (0x0001f618) title_pane

0xae8a,	// (0x0001f67b) uni_indicator_pane_ParamLimits

0xae8a,	// (0x0001f67b) uni_indicator_pane

0x139a,	// (0x00015b8b) bg_list_pane_ParamLimits

0x139a,	// (0x00015b8b) bg_list_pane

0xaaff,	// (0x0001f2f0) find_pane

0x1a33,	// (0x00016224) listscroll_app_pane_ParamLimits

0x1a33,	// (0x00016224) listscroll_app_pane

0x13ce,	// (0x00015bbf) listscroll_form_pane

0x890e,	// (0x0001d0ff) listscroll_gen_pane_ParamLimits

0x890e,	// (0x0001d0ff) listscroll_gen_pane

0xe867,	// (0x00023058) listscroll_set_pane

0x2dcd,	// (0x000175be) main_idle_act_pane

0x109a,	// (0x0001588b) main_idle_trad_pane

0x109a,	// (0x0001588b) main_list_empty_pane

0x13c2,	// (0x00015bb3) main_midp_pane

0x13e8,	// (0x00015bd9) main_pane_g1_ParamLimits

0x13e8,	// (0x00015bd9) main_pane_g1

0x8922,	// (0x0001d113) popup_ai_message_window_ParamLimits

0x8922,	// (0x0001d113) popup_ai_message_window

0x89d3,	// (0x0001d1c4) popup_fep_china_uni_window_ParamLimits

0x89d3,	// (0x0001d1c4) popup_fep_china_uni_window

0x8a2d,	// (0x0001d21e) popup_fep_japan_candidate_window_ParamLimits

0x8a2d,	// (0x0001d21e) popup_fep_japan_candidate_window

0x8a4b,	// (0x0001d23c) popup_fep_japan_predictive_window_ParamLimits

0x8a4b,	// (0x0001d23c) popup_fep_japan_predictive_window

0x8a5d,	// (0x0001d24e) popup_find_window

0x8a7a,	// (0x0001d26b) popup_grid_graphic_window_ParamLimits

0x8a7a,	// (0x0001d26b) popup_grid_graphic_window

0x8b18,	// (0x0001d309) popup_large_graphic_colour_window

0x8b3e,	// (0x0001d32f) popup_menu_window_ParamLimits

0x8b3e,	// (0x0001d32f) popup_menu_window

0x8d10,	// (0x0001d501) popup_note_image_window

0x8cd6,	// (0x0001d4c7) popup_note_wait_window_ParamLimits

0x8cd6,	// (0x0001d4c7) popup_note_wait_window

0x8d28,	// (0x0001d519) popup_note_window_ParamLimits

0x8d28,	// (0x0001d519) popup_note_window

0x8dd7,	// (0x0001d5c8) popup_query_code_window_ParamLimits

0x8dd7,	// (0x0001d5c8) popup_query_code_window

0x8e11,	// (0x0001d602) popup_query_data_code_window_ParamLimits

0x8e11,	// (0x0001d602) popup_query_data_code_window

0x8e2e,	// (0x0001d61f) popup_query_data_window_ParamLimits

0x8e2e,	// (0x0001d61f) popup_query_data_window

0x8eb0,	// (0x0001d6a1) popup_query_sat_info_window_ParamLimits

0x8eb0,	// (0x0001d6a1) popup_query_sat_info_window

0x8f47,	// (0x0001d738) popup_snote_single_graphic_window_ParamLimits

0x8f47,	// (0x0001d738) popup_snote_single_graphic_window

0x8f47,	// (0x0001d738) popup_snote_single_text_window_ParamLimits

0x8f47,	// (0x0001d738) popup_snote_single_text_window

0xe8a5,	// (0x00023096) popup_sub_window_general

0x90a4,	// (0x0001d895) popup_window_general_ParamLimits

0x90a4,	// (0x0001d895) popup_window_general

0x13fe,	// (0x00015bef) power_save_pane

0x8793,	// (0x0001cf84) control_pane_g1_ParamLimits

0x8793,	// (0x0001cf84) control_pane_g1

0x87bc,	// (0x0001cfad) control_pane_g2_ParamLimits

0x87bc,	// (0x0001cfad) control_pane_g2

0x135d,	// (0x00015b4e) control_pane_g3_ParamLimits

0x135d,	// (0x00015b4e) control_pane_g3

0x0007,

0xf774,	// (0x00023f65) control_pane_g_ParamLimits

0xf774,	// (0x00023f65) control_pane_g

0x87fd,	// (0x0001cfee) control_pane_t1_ParamLimits

0x87fd,	// (0x0001cfee) control_pane_t1

0x8863,	// (0x0001d054) control_pane_t2_ParamLimits

0x8863,	// (0x0001d054) control_pane_t2

0x0002,

0xf785,	// (0x00023f76) control_pane_t_ParamLimits

0xf785,	// (0x00023f76) control_pane_t

0xaa31,	// (0x0001f222) navi_navi_volume_pane_cp1

0xaa39,	// (0x0001f22a) status_small_icon_pane

0x1292,	// (0x00015a83) status_small_pane_g1_ParamLimits

0x1292,	// (0x00015a83) status_small_pane_g1

0xaa41,	// (0x0001f232) status_small_pane_g2_ParamLimits

0xaa41,	// (0x0001f232) status_small_pane_g2

0xaa4d,	// (0x0001f23e) status_small_pane_g3_ParamLimits

0xaa4d,	// (0x0001f23e) status_small_pane_g3

0xaa59,	// (0x0001f24a) status_small_pane_g4_ParamLimits

0xaa59,	// (0x0001f24a) status_small_pane_g4

0xaa65,	// (0x0001f256) status_small_pane_g5_ParamLimits

0xaa65,	// (0x0001f256) status_small_pane_g5

0xaa73,	// (0x0001f264) status_small_pane_g6_ParamLimits

0xaa73,	// (0x0001f264) status_small_pane_g6

0x0007,

0xf763,	// (0x00023f54) status_small_pane_g_ParamLimits

0xf763,	// (0x00023f54) status_small_pane_g

0xaaa2,	// (0x0001f293) status_small_pane_t1

0xaac4,	// (0x0001f2b5) status_small_wait_pane_ParamLimits

0xaac4,	// (0x0001f2b5) status_small_wait_pane

0xa750,	// (0x0001ef41) aid_levels_signal_ParamLimits

0xa750,	// (0x0001ef41) aid_levels_signal

0xa768,	// (0x0001ef59) signal_pane_g1_ParamLimits

0xa768,	// (0x0001ef59) signal_pane_g1

0xa783,	// (0x0001ef74) signal_pane_g2_ParamLimits

0xa783,	// (0x0001ef74) signal_pane_g2

0x0003,

0xf6f4,	// (0x00023ee5) signal_pane_g_ParamLimits

0xf6f4,	// (0x00023ee5) signal_pane_g

0xcc74,	// (0x00021465) context_pane_g1

0x99f0,	// (0x0001e1e1) title_pane_g1

0x9a27,	// (0x0001e218) title_pane_t1

0xc30b,	// (0x00020afc) title_pane_t2

0xc331,	// (0x00020b22) title_pane_t3

0x0002,

0xf557,	// (0x00023d48) title_pane_t

0xaeb2,	// (0x0001f6a3) aid_levels_battery_ParamLimits

0xaeb2,	// (0x0001f6a3) aid_levels_battery

0xaece,	// (0x0001f6bf) battery_pane_g1_ParamLimits

0xaece,	// (0x0001f6bf) battery_pane_g1

0xaeeb,	// (0x0001f6dc) battery_pane_g2_ParamLimits

0xaeeb,	// (0x0001f6dc) battery_pane_g2

0x0001,

0xf797,	// (0x00023f88) battery_pane_g_ParamLimits

0xf797,	// (0x00023f88) battery_pane_g

0xb4c8,	// (0x0001fcb9) uni_indicator_pane_g1

0xb4de,	// (0x0001fccf) uni_indicator_pane_g2

0xb4f4,	// (0x0001fce5) uni_indicator_pane_g3

0x0005,

0xf901,	// (0x000240f2) uni_indicator_pane_g

0x0f0c,	// (0x000156fd) navi_icon_pane_ParamLimits

0x0f0c,	// (0x000156fd) navi_icon_pane

0x0e56,	// (0x00015647) navi_midp_pane

0x0f28,	// (0x00015719) navi_navi_pane

0x0f32,	// (0x00015723) navi_text_pane_ParamLimits

0x0f32,	// (0x00015723) navi_text_pane

0xc2eb,	// (0x00020adc) status_small_wait_pane_g1

0xc59c,	// (0x00020d8d) status_small_wait_pane_g2

0x0001,

0xf8fc,	// (0x000240ed) status_small_wait_pane_g

0xb421,	// (0x0001fc12) navi_navi_icon_text_pane

0x28aa,	// (0x0001709b) navi_navi_pane_g1_ParamLimits

0x28aa,	// (0x0001709b) navi_navi_pane_g1

0x28bc,	// (0x000170ad) navi_navi_pane_g2_ParamLimits

0x28bc,	// (0x000170ad) navi_navi_pane_g2

0x0001,

0xf8ca,	// (0x000240bb) navi_navi_pane_g_ParamLimits

0xf8ca,	// (0x000240bb) navi_navi_pane_g

0x28ce,	// (0x000170bf) navi_navi_tabs_pane

0x28d7,	// (0x000170c8) navi_navi_text_pane

0xb421,	// (0x0001fc12) navi_navi_volume_pane

0x287e,	// (0x0001706f) navi_text_pane_t1

0x2872,	// (0x00017063) navi_icon_pane_g1

0x27c5,	// (0x00016fb6) navi_navi_text_pane_t1

0x9161,	// (0x0001d952) navi_navi_volume_pane_g1

0xeb1e,	// (0x0002330f) volume_small_pane

0x272b,	// (0x00016f1c) navi_navi_icon_text_pane_g1

0xb379,	// (0x0001fb6a) navi_navi_icon_text_pane_t1

0x0f28,	// (0x00015719) navi_tabs_2_long_pane

0x0f28,	// (0x00015719) navi_tabs_2_pane

0x0f28,	// (0x00015719) navi_tabs_3_long_pane

0x0f28,	// (0x00015719) navi_tabs_3_pane

0x0f28,	// (0x00015719) navi_tabs_4_pane

0xeafe,	// (0x000232ef) tabs_2_active_pane_ParamLimits

0xeafe,	// (0x000232ef) tabs_2_active_pane

0xeb0e,	// (0x000232ff) tabs_2_passive_pane_ParamLimits

0xeb0e,	// (0x000232ff) tabs_2_passive_pane

0xeacc,	// (0x000232bd) tabs_3_active_pane_ParamLimits

0xeacc,	// (0x000232bd) tabs_3_active_pane

0xeadc,	// (0x000232cd) tabs_3_passive_pane_ParamLimits

0xeadc,	// (0x000232cd) tabs_3_passive_pane

0xeaed,	// (0x000232de) tabs_3_passive_pane_cp_ParamLimits

0xeaed,	// (0x000232de) tabs_3_passive_pane_cp

0xea88,	// (0x00023279) tabs_4_active_pane_ParamLimits

0xea88,	// (0x00023279) tabs_4_active_pane

0xea99,	// (0x0002328a) tabs_4_passive_pane_ParamLimits

0xea99,	// (0x0002328a) tabs_4_passive_pane

0xeaaa,	// (0x0002329b) tabs_4_passive_pane_cp_ParamLimits

0xeaaa,	// (0x0002329b) tabs_4_passive_pane_cp

0xeabb,	// (0x000232ac) tabs_4_passive_pane_cp2_ParamLimits

0xeabb,	// (0x000232ac) tabs_4_passive_pane_cp2

0xea64,	// (0x00023255) tabs_2_long_active_pane_ParamLimits

0xea64,	// (0x00023255) tabs_2_long_active_pane

0xea76,	// (0x00023267) tabs_2_long_passive_pane_ParamLimits

0xea76,	// (0x00023267) tabs_2_long_passive_pane

0xea1f,	// (0x00023210) tabs_3_long_active_pane_ParamLimits

0xea1f,	// (0x00023210) tabs_3_long_active_pane

0xea38,	// (0x00023229) tabs_3_long_passive_pane_ParamLimits

0xea38,	// (0x00023229) tabs_3_long_passive_pane

0xea4b,	// (0x0002323c) tabs_3_long_passive_pane_cp_ParamLimits

0xea4b,	// (0x0002323c) tabs_3_long_passive_pane_cp

0xe9b7,	// (0x000231a8) volume_small_pane_g1

0xe9c0,	// (0x000231b1) volume_small_pane_g2

0xe9d7,	// (0x000231c8) volume_small_pane_g3

0xe9e0,	// (0x000231d1) volume_small_pane_g4

0xe9e9,	// (0x000231da) volume_small_pane_g5

0xe9f2,	// (0x000231e3) volume_small_pane_g6

0xe9fb,	// (0x000231ec) volume_small_pane_g7

0xea04,	// (0x000231f5) volume_small_pane_g8

0xea0d,	// (0x000231fe) volume_small_pane_g9

0xea16,	// (0x00023207) volume_small_pane_g10

0x0009,

0xf896,	// (0x00024087) volume_small_pane_g

0xc343,	// (0x00020b34) bg_active_tab_pane_cp2_ParamLimits

0xc343,	// (0x00020b34) bg_active_tab_pane_cp2

0x9ab3,	// (0x0001e2a4) tabs_3_active_pane_g1

0x9abb,	// (0x0001e2ac) tabs_3_active_pane_t1

0xc343,	// (0x00020b34) bg_passive_tab_pane_cp2_ParamLimits

0xc343,	// (0x00020b34) bg_passive_tab_pane_cp2

0x9ab3,	// (0x0001e2a4) tabs_3_passive_pane_g1

0x9abb,	// (0x0001e2ac) tabs_3_passive_pane_t1

0xc343,	// (0x00020b34) bg_active_tab_pane_cp3_ParamLimits

0xc343,	// (0x00020b34) bg_active_tab_pane_cp3

0x9acd,	// (0x0001e2be) tabs_4_active_pane_g1

0x9ad5,	// (0x0001e2c6) tabs_4_active_pane_t1

0xc343,	// (0x00020b34) bg_passive_tab_pane_cp3_ParamLimits

0xc343,	// (0x00020b34) bg_passive_tab_pane_cp3

0x9acd,	// (0x0001e2be) tabs_4_1_passive_pane_g1

0x9ad5,	// (0x0001e2c6) tabs_4_1_passive_pane_t1

0x13c2,	// (0x00015bb3) list_highlight_pane_cp2

0xb60c,	// (0x0001fdfd) list_set_pane_ParamLimits

0xb60c,	// (0x0001fdfd) list_set_pane

0xb6a6,	// (0x0001fe97) main_pane_set_t1_ParamLimits

0xb6a6,	// (0x0001fe97) main_pane_set_t1

0xb6c6,	// (0x0001feb7) main_pane_set_t2_ParamLimits

0xb6c6,	// (0x0001feb7) main_pane_set_t2

0xb6da,	// (0x0001fecb) main_pane_set_t3_ParamLimits

0xb6da,	// (0x0001fecb) main_pane_set_t3

0xb6ec,	// (0x0001fedd) main_pane_set_t4_ParamLimits

0xb6ec,	// (0x0001fedd) main_pane_set_t4

0x0003,

0xf966,	// (0x00024157) main_pane_set_t_ParamLimits

0xf966,	// (0x00024157) main_pane_set_t

0xb6fe,	// (0x0001feef) setting_code_pane

0xb708,	// (0x0001fef9) setting_slider_graphic_pane

0xb708,	// (0x0001fef9) setting_slider_pane

0xb708,	// (0x0001fef9) setting_text_pane

0xb708,	// (0x0001fef9) setting_volume_pane

0x86a2,	// (0x0001ce93) volume_set_pane

0xc351,	// (0x00020b42) bg_set_opt_pane_cp

0x86aa,	// (0x0001ce9b) setting_slider_pane_t1

0x86c3,	// (0x0001ceb4) setting_slider_pane_t2

0x86dd,	// (0x0001cece) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00023d4f) setting_slider_pane_t

0x86f5,	// (0x0001cee6) slider_set_pane

0xc2f5,	// (0x00020ae6) bg_set_opt_pane_cp2

0xc35f,	// (0x00020b50) setting_slider_graphic_pane_g1

0x870b,	// (0x0001cefc) setting_slider_graphic_pane_t1

0x871b,	// (0x0001cf0c) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00023d56) setting_slider_graphic_pane_t

0x872b,	// (0x0001cf1c) slider_set_pane_cp

0xc2f5,	// (0x00020ae6) input_focus_pane_cp1

0x2db4,	// (0x000175a5) list_set_text_pane

0xc2eb,	// (0x00020adc) setting_text_pane_g1

0xc2f5,	// (0x00020ae6) input_focus_pane_cp2

0xc2eb,	// (0x00020adc) setting_code_pane_g1

0xc368,	// (0x00020b59) setting_code_pane_t1

0xc376,	// (0x00020b67) set_text_pane_t1_ParamLimits

0xc376,	// (0x00020b67) set_text_pane_t1

0xc841,	// (0x00021032) set_opt_bg_pane_g1

0xc849,	// (0x0002103a) set_opt_bg_pane_g2

0xb5c1,	// (0x0001fdb2) set_opt_bg_pane_g3

0xc859,	// (0x0002104a) set_opt_bg_pane_g4

0xc861,	// (0x00021052) set_opt_bg_pane_g5

0xc869,	// (0x0002105a) set_opt_bg_pane_g6

0xb5cb,	// (0x0001fdbc) set_opt_bg_pane_g7

0xb5d3,	// (0x0001fdc4) set_opt_bg_pane_g8

0xb5dd,	// (0x0001fdce) set_opt_bg_pane_g9

0x0008,

0xf953,	// (0x00024144) set_opt_bg_pane_g

0xb5b4,	// (0x0001fda5) slider_set_pane_g1

0xeb27,	// (0x00023318) slider_set_pane_g2

0x0006,

0xf944,	// (0x00024135) slider_set_pane_g

0x9169,	// (0x0001d95a) volume_set_pane_g1

0x9171,	// (0x0001d962) volume_set_pane_g2

0x9179,	// (0x0001d96a) volume_set_pane_g3

0x9181,	// (0x0001d972) volume_set_pane_g4

0x9189,	// (0x0001d97a) volume_set_pane_g5

0x9191,	// (0x0001d982) volume_set_pane_g6

0x9199,	// (0x0001d98a) volume_set_pane_g7

0x91a1,	// (0x0001d992) volume_set_pane_g8

0x91a9,	// (0x0001d99a) volume_set_pane_g9

0x91b1,	// (0x0001d9a2) volume_set_pane_g10

0x0009,

0xf91c,	// (0x0002410d) volume_set_pane_g

0x9ae7,	// (0x0001e2d8) indicator_pane_ParamLimits

0x9ae7,	// (0x0001e2d8) indicator_pane

0x9b0f,	// (0x0001e300) main_idle_pane_g2_ParamLimits

0x9b0f,	// (0x0001e300) main_idle_pane_g2

0x9b47,	// (0x0001e338) main_pane_idle_g1_ParamLimits

0x9b47,	// (0x0001e338) main_pane_idle_g1

0xc390,	// (0x00020b81) popup_clock_digital_analogue_window_ParamLimits

0xc390,	// (0x00020b81) popup_clock_digital_analogue_window

0x9b6e,	// (0x0001e35f) soft_indicator_pane_ParamLimits

0x9b6e,	// (0x0001e35f) soft_indicator_pane

0x9b92,	// (0x0001e383) wallpaper_pane_ParamLimits

0x9b92,	// (0x0001e383) wallpaper_pane

0xc2eb,	// (0x00020adc) wallpaper_pane_g1

0x9ba4,	// (0x0001e395) indicator_pane_g1_ParamLimits

0x9ba4,	// (0x0001e395) indicator_pane_g1

0x3287,	// (0x00017a78) navi_navi_icon_text_pane_srt_g1

0xc3be,	// (0x00020baf) soft_indicator_pane_t1

0xc3d8,	// (0x00020bc9) aid_ps_area_pane

0x9bba,	// (0x0001e3ab) aid_ps_clock_pane

0xc3e9,	// (0x00020bda) aid_ps_indicator_pane

0xc3f5,	// (0x00020be6) indicator_ps_pane_ParamLimits

0xc3f5,	// (0x00020be6) indicator_ps_pane

0xc404,	// (0x00020bf5) power_save_pane_g1_ParamLimits

0xc404,	// (0x00020bf5) power_save_pane_g1

0xc410,	// (0x00020c01) power_save_pane_g2_ParamLimits

0xc410,	// (0x00020c01) power_save_pane_g2

0xe125,	// (0x00022916) aid_navinavi_width_pane

0xc3d8,	// (0x00020bc9) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00023d5b) power_save_pane_g_ParamLimits

0xf56a,	// (0x00023d5b) power_save_pane_g

0xc41e,	// (0x00020c0f) power_save_pane_t1_ParamLimits

0xc41e,	// (0x00020c0f) power_save_pane_t1

0x9bba,	// (0x0001e3ab) aid_ps_clock_pane_ParamLimits

0xc3e9,	// (0x00020bda) aid_ps_indicator_pane_ParamLimits

0xc430,	// (0x00020c21) power_save_pane_t4_ParamLimits

0xc430,	// (0x00020c21) power_save_pane_t4

0x0001,

0xf56f,	// (0x00023d60) power_save_pane_t_ParamLimits

0xf56f,	// (0x00023d60) power_save_pane_t

0xc45a,	// (0x00020c4b) power_save_t3_ParamLimits

0xc45a,	// (0x00020c4b) power_save_t3

0xc445,	// (0x00020c36) power_save_t2_ParamLimits

0xc445,	// (0x00020c36) power_save_t2

0xc46f,	// (0x00020c60) indicator_ps_pane_g1

0x9bc8,	// (0x0001e3b9) ai_gene_pane_ParamLimits

0x9bc8,	// (0x0001e3b9) ai_gene_pane

0x9bdf,	// (0x0001e3d0) ai_links_pane_ParamLimits

0x9bdf,	// (0x0001e3d0) ai_links_pane

0x9bf7,	// (0x0001e3e8) indicator_pane_cp1_ParamLimits

0x9bf7,	// (0x0001e3e8) indicator_pane_cp1

0x9c06,	// (0x0001e3f7) main_pane_idle_g1_cp_ParamLimits

0x9c06,	// (0x0001e3f7) main_pane_idle_g1_cp

0x9c1e,	// (0x0001e40f) popup_ai_links_title_window

0x9c27,	// (0x0001e418) soft_indicator_pane_cp1_ParamLimits

0x9c27,	// (0x0001e418) soft_indicator_pane_cp1

0x2b69,	// (0x0001735a) ai_links_pane_g1

0x2b72,	// (0x00017363) grid_ai_links_pane

0xb4bf,	// (0x0001fcb0) ai_gene_pane_1

0x2b57,	// (0x00017348) ai_gene_pane_2

0x2b60,	// (0x00017351) list_highlight_pane_cp4

0xb49b,	// (0x0001fc8c) cell_ai_link_pane_ParamLimits

0xb49b,	// (0x0001fc8c) cell_ai_link_pane

0x2b28,	// (0x00017319) cell_ai_link_pane_g1

0xc59c,	// (0x00020d8d) cell_ai_link_pane_g2

0x0001,

0xf8f7,	// (0x000240e8) cell_ai_link_pane_g

0xc2f5,	// (0x00020ae6) grid_highlight_cp2

0xc2f5,	// (0x00020ae6) bg_popup_sub_pane_cp1

0xc486,	// (0x00020c77) popup_ai_links_title_window_t1

0x2a78,	// (0x00017269) ai_gene_pane_1_g1_ParamLimits

0x2a78,	// (0x00017269) ai_gene_pane_1_g1

0x2a84,	// (0x00017275) ai_gene_pane_1_g2_ParamLimits

0x2a84,	// (0x00017275) ai_gene_pane_1_g2

0x0001,

0xf8ed,	// (0x000240de) ai_gene_pane_1_g_ParamLimits

0xf8ed,	// (0x000240de) ai_gene_pane_1_g

0x2a91,	// (0x00017282) ai_gene_pane_1_t1_ParamLimits

0x2a91,	// (0x00017282) ai_gene_pane_1_t1

0x2ac5,	// (0x000172b6) grid_ai_soft_ind_pane

0x2a63,	// (0x00017254) ai_gene_pane_2_t1_ParamLimits

0x2a63,	// (0x00017254) ai_gene_pane_2_t1

0x9c3b,	// (0x0001e42c) main_pane_empty_t1_ParamLimits

0x9c3b,	// (0x0001e42c) main_pane_empty_t1

0x9c53,	// (0x0001e444) main_pane_empty_t2_ParamLimits

0x9c53,	// (0x0001e444) main_pane_empty_t2

0x9c68,	// (0x0001e459) main_pane_empty_t3_ParamLimits

0x9c68,	// (0x0001e459) main_pane_empty_t3

0x9c7a,	// (0x0001e46b) main_pane_empty_t4_ParamLimits

0x9c7a,	// (0x0001e46b) main_pane_empty_t4

0x9c8c,	// (0x0001e47d) main_pane_empty_t5_ParamLimits

0x9c8c,	// (0x0001e47d) main_pane_empty_t5

0x0004,

0xf574,	// (0x00023d65) main_pane_empty_t_ParamLimits

0xf574,	// (0x00023d65) main_pane_empty_t

0xc892,	// (0x00021083) bg_popup_window_pane_ParamLimits

0xc892,	// (0x00021083) bg_popup_window_pane

0xb415,	// (0x0001fc06) find_popup_pane_cp2_ParamLimits

0xb415,	// (0x0001fc06) find_popup_pane_cp2

0x27df,	// (0x00016fd0) heading_pane_ParamLimits

0x27df,	// (0x00016fd0) heading_pane

0xc2f5,	// (0x00020ae6) bg_popup_sub_pane

0xb396,	// (0x0001fb87) bg_popup_window_pane_g1_ParamLimits

0xb396,	// (0x0001fb87) bg_popup_window_pane_g1

0xb3a5,	// (0x0001fb96) bg_popup_window_pane_g2_ParamLimits

0xb3a5,	// (0x0001fb96) bg_popup_window_pane_g2

0xb3b1,	// (0x0001fba2) bg_popup_window_pane_g3_ParamLimits

0xb3b1,	// (0x0001fba2) bg_popup_window_pane_g3

0xb3bd,	// (0x0001fbae) bg_popup_window_pane_g4_ParamLimits

0xb3bd,	// (0x0001fbae) bg_popup_window_pane_g4

0xb3cc,	// (0x0001fbbd) bg_popup_window_pane_g5_ParamLimits

0xb3cc,	// (0x0001fbbd) bg_popup_window_pane_g5

0xb3dc,	// (0x0001fbcd) bg_popup_window_pane_g6_ParamLimits

0xb3dc,	// (0x0001fbcd) bg_popup_window_pane_g6

0xb3e8,	// (0x0001fbd9) bg_popup_window_pane_g7_ParamLimits

0xb3e8,	// (0x0001fbd9) bg_popup_window_pane_g7

0xb3f7,	// (0x0001fbe8) bg_popup_window_pane_g8_ParamLimits

0xb3f7,	// (0x0001fbe8) bg_popup_window_pane_g8

0xb406,	// (0x0001fbf7) bg_popup_window_pane_g9_ParamLimits

0xb406,	// (0x0001fbf7) bg_popup_window_pane_g9

0x27b9,	// (0x00016faa) bg_popup_window_pane_g10_ParamLimits

0x27b9,	// (0x00016faa) bg_popup_window_pane_g10

0x0009,

0xf8b5,	// (0x000240a6) bg_popup_window_pane_g_ParamLimits

0xf8b5,	// (0x000240a6) bg_popup_window_pane_g

0x26e2,	// (0x00016ed3) bg_popup_heading_pane_ParamLimits

0x26e2,	// (0x00016ed3) bg_popup_heading_pane

0xeb57,	// (0x00023348) tabs_4_passive_pane_cp_srt_ParamLimits

0xeb57,	// (0x00023348) tabs_4_passive_pane_cp_srt

0xeb69,	// (0x0002335a) tabs_4_passive_pane_srt_ParamLimits

0x26f6,	// (0x00016ee7) heading_pane_g2

0xeb69,	// (0x0002335a) tabs_4_passive_pane_srt

0x1a33,	// (0x00016224) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1a33,	// (0x00016224) bg_passive_tab_pane_cp3_srt

0x26fe,	// (0x00016eef) heading_pane_t1_ParamLimits

0x26fe,	// (0x00016eef) heading_pane_t1

0x2715,	// (0x00016f06) heading_pane_t2_ParamLimits

0x2715,	// (0x00016f06) heading_pane_t2

0x0001,

0xf8b0,	// (0x000240a1) heading_pane_t_ParamLimits

0xf8b0,	// (0x000240a1) heading_pane_t

0x221f,	// (0x00016a10) bg_popup_heading_pane_g1

0x22ce,	// (0x00016abf) bg_popup_heading_pane_g2

0x22d8,	// (0x00016ac9) bg_popup_heading_pane_g3

0x22e2,	// (0x00016ad3) bg_popup_heading_pane_g4

0x22ec,	// (0x00016add) bg_popup_heading_pane_g5

0x22f6,	// (0x00016ae7) bg_popup_heading_pane_g6

0x22fe,	// (0x00016aef) bg_popup_heading_pane_g7

0x2306,	// (0x00016af7) bg_popup_heading_pane_g8

0x2310,	// (0x00016b01) bg_popup_heading_pane_g9

0x0008,

0xf86c,	// (0x0002405d) bg_popup_heading_pane_g

0x1913,	// (0x00016104) bg_popup_sub_pane_g1

0x1923,	// (0x00016114) bg_popup_sub_pane_g2

0x191b,	// (0x0001610c) bg_popup_sub_pane_g3

0x1933,	// (0x00016124) bg_popup_sub_pane_g4

0x192b,	// (0x0001611c) bg_popup_sub_pane_g5

0x193b,	// (0x0001612c) bg_popup_sub_pane_g6

0x1943,	// (0x00016134) bg_popup_sub_pane_g7

0x1953,	// (0x00016144) bg_popup_sub_pane_g8

0x194b,	// (0x0001613c) bg_popup_sub_pane_g9

0x0008,

0xf846,	// (0x00024037) bg_popup_sub_pane_g

0xc343,	// (0x00020b34) bg_popup_window_pane_cp5_ParamLimits

0xc343,	// (0x00020b34) bg_popup_window_pane_cp5

0xc4a3,	// (0x00020c94) popup_note_window_g1_ParamLimits

0xc4a3,	// (0x00020c94) popup_note_window_g1

0xc4af,	// (0x00020ca0) popup_note_window_t1_ParamLimits

0xc4af,	// (0x00020ca0) popup_note_window_t1

0xc4c5,	// (0x00020cb6) popup_note_window_t2_ParamLimits

0xc4c5,	// (0x00020cb6) popup_note_window_t2

0xc4db,	// (0x00020ccc) popup_note_window_t3_ParamLimits

0xc4db,	// (0x00020ccc) popup_note_window_t3

0xc4f1,	// (0x00020ce2) popup_note_window_t4_ParamLimits

0xc4f1,	// (0x00020ce2) popup_note_window_t4

0xc519,	// (0x00020d0a) popup_note_window_t5_ParamLimits

0xc519,	// (0x00020d0a) popup_note_window_t5

0x0004,

0xf57f,	// (0x00023d70) popup_note_window_t_ParamLimits

0xf57f,	// (0x00023d70) popup_note_window_t

0xc53d,	// (0x00020d2e) bg_popup_window_pane_cp6_ParamLimits

0xc53d,	// (0x00020d2e) bg_popup_window_pane_cp6

0x219b,	// (0x0001698c) popup_note_image_window_g1_ParamLimits

0x219b,	// (0x0001698c) popup_note_image_window_g1

0xb23b,	// (0x0001fa2c) popup_note_image_window_g2_ParamLimits

0xb23b,	// (0x0001fa2c) popup_note_image_window_g2

0x0001,

0xf83a,	// (0x0002402b) popup_note_image_window_g_ParamLimits

0xf83a,	// (0x0002402b) popup_note_image_window_g

0x21c0,	// (0x000169b1) popup_note_image_window_t1_ParamLimits

0x21c0,	// (0x000169b1) popup_note_image_window_t1

0x21d9,	// (0x000169ca) popup_note_image_window_t2_ParamLimits

0x21d9,	// (0x000169ca) popup_note_image_window_t2

0x21f2,	// (0x000169e3) popup_note_image_window_t3_ParamLimits

0x21f2,	// (0x000169e3) popup_note_image_window_t3

0x0002,

0xf83f,	// (0x00024030) popup_note_image_window_t_ParamLimits

0xf83f,	// (0x00024030) popup_note_image_window_t

0x2064,	// (0x00016855) bg_popup_window_pane_cp7_ParamLimits

0x2064,	// (0x00016855) bg_popup_window_pane_cp7

0x2094,	// (0x00016885) popup_note_wait_window_g1_ParamLimits

0x2094,	// (0x00016885) popup_note_wait_window_g1

0x20a0,	// (0x00016891) popup_note_wait_window_g2_ParamLimits

0x20a0,	// (0x00016891) popup_note_wait_window_g2

0x0002,

0xf828,	// (0x00024019) popup_note_wait_window_g_ParamLimits

0xf828,	// (0x00024019) popup_note_wait_window_g

0x20b8,	// (0x000168a9) popup_note_wait_window_t1_ParamLimits

0x20b8,	// (0x000168a9) popup_note_wait_window_t1

0xb1dc,	// (0x0001f9cd) popup_note_wait_window_t2_ParamLimits

0xb1dc,	// (0x0001f9cd) popup_note_wait_window_t2

0xb1f9,	// (0x0001f9ea) popup_note_wait_window_t3_ParamLimits

0xb1f9,	// (0x0001f9ea) popup_note_wait_window_t3

0xb20c,	// (0x0001f9fd) popup_note_wait_window_t4_ParamLimits

0xb20c,	// (0x0001f9fd) popup_note_wait_window_t4

0x0004,

0xf82f,	// (0x00024020) popup_note_wait_window_t_ParamLimits

0xf82f,	// (0x00024020) popup_note_wait_window_t

0x2134,	// (0x00016925) wait_bar_pane_ParamLimits

0x2134,	// (0x00016925) wait_bar_pane

0xc2f5,	// (0x00020ae6) wait_anim_pane

0xc2f5,	// (0x00020ae6) wait_border_pane

0xc2eb,	// (0x00020adc) wait_anim_pane_g1

0xc2eb,	// (0x00020adc) wait_anim_pane_g2

0x0001,

0xf6ef,	// (0x00023ee0) wait_anim_pane_g

0x2010,	// (0x00016801) wait_border_pane_g1

0x201b,	// (0x0001680c) wait_border_pane_g2

0x2024,	// (0x00016815) wait_border_pane_g3

0x0002,

0xf821,	// (0x00024012) wait_border_pane_g

0x1e7b,	// (0x0001666c) bg_popup_window_pane_cp16_ParamLimits

0x1e7b,	// (0x0001666c) bg_popup_window_pane_cp16

0xb18c,	// (0x0001f97d) indicator_popup_pane_cp4_ParamLimits

0xb18c,	// (0x0001f97d) indicator_popup_pane_cp4

0x1f8f,	// (0x00016780) popup_query_data_window_t1_ParamLimits

0x1f8f,	// (0x00016780) popup_query_data_window_t1

0x1fa1,	// (0x00016792) popup_query_data_window_t2_ParamLimits

0x1fa1,	// (0x00016792) popup_query_data_window_t2

0x1fba,	// (0x000167ab) popup_query_data_window_t3_ParamLimits

0x1fba,	// (0x000167ab) popup_query_data_window_t3

0x0002,

0xf81a,	// (0x0002400b) popup_query_data_window_t_ParamLimits

0xf81a,	// (0x0002400b) popup_query_data_window_t

0xb1a0,	// (0x0001f991) query_popup_data_pane_ParamLimits

0xb1a0,	// (0x0001f991) query_popup_data_pane

0xb1b4,	// (0x0001f9a5) query_popup_data_pane_cp1_ParamLimits

0xb1b4,	// (0x0001f9a5) query_popup_data_pane_cp1

0x1e7b,	// (0x0001666c) bg_popup_window_pane_cp10_ParamLimits

0x1e7b,	// (0x0001666c) bg_popup_window_pane_cp10

0xb107,	// (0x0001f8f8) indicator_popup_pane_ParamLimits

0xb107,	// (0x0001f8f8) indicator_popup_pane

0xb129,	// (0x0001f91a) popup_query_code_window_t1_ParamLimits

0xb129,	// (0x0001f91a) popup_query_code_window_t1

0xb143,	// (0x0001f934) popup_query_code_window_t2_ParamLimits

0xb143,	// (0x0001f934) popup_query_code_window_t2

0x1f32,	// (0x00016723) popup_query_code_window_t3_ParamLimits

0x1f32,	// (0x00016723) popup_query_code_window_t3

0x0002,

0xf813,	// (0x00024004) popup_query_code_window_t_ParamLimits

0xf813,	// (0x00024004) popup_query_code_window_t

0x1f61,	// (0x00016752) query_popup_pane_ParamLimits

0x1f61,	// (0x00016752) query_popup_pane

0xc53d,	// (0x00020d2e) bg_popup_window_pane_cp15_ParamLimits

0xc53d,	// (0x00020d2e) bg_popup_window_pane_cp15

0x9cc4,	// (0x0001e4b5) indicator_popup_pane_cp1_ParamLimits

0x9cc4,	// (0x0001e4b5) indicator_popup_pane_cp1

0x9cd7,	// (0x0001e4c8) indicator_popup_pane_cp2_ParamLimits

0x9cd7,	// (0x0001e4c8) indicator_popup_pane_cp2

0x9cea,	// (0x0001e4db) popup_query_data_code_window_g1_ParamLimits

0x9cea,	// (0x0001e4db) popup_query_data_code_window_g1

0xc55b,	// (0x00020d4c) popup_query_data_code_window_t1_ParamLimits

0xc55b,	// (0x00020d4c) popup_query_data_code_window_t1

0xc56d,	// (0x00020d5e) popup_query_data_code_window_t2_ParamLimits

0xc56d,	// (0x00020d5e) popup_query_data_code_window_t2

0x9cfd,	// (0x0001e4ee) popup_query_data_code_window_t3_ParamLimits

0x9cfd,	// (0x0001e4ee) popup_query_data_code_window_t3

0x9d13,	// (0x0001e504) popup_query_data_code_window_t4_ParamLimits

0x9d13,	// (0x0001e504) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00023d7b) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00023d7b) popup_query_data_code_window_t

0xe95b,	// (0x0002314c) list_single_midp_graphic_pane_g3

0x9d2b,	// (0x0001e51c) query_popup_data_pane_cp2_ParamLimits

0x9d3e,	// (0x0001e52f) query_popup_pane_cp2_ParamLimits

0x9d3e,	// (0x0001e52f) query_popup_pane_cp2

0xc2f5,	// (0x00020ae6) bg_popup_window_pane_cp11

0x1e67,	// (0x00016658) heading_pane_cp5

0xc5c9,	// (0x00020dba) listscroll_popup_info_pane

0xc2f5,	// (0x00020ae6) input_focus_pane_cp3

0xc57f,	// (0x00020d70) query_popup_pane_t1

0xc58d,	// (0x00020d7e) list_popup_info_pane_ParamLimits

0xc58d,	// (0x00020d7e) list_popup_info_pane

0xc59c,	// (0x00020d8d) listscroll_popup_info_pane_g1

0xc5a4,	// (0x00020d95) scroll_pane_cp7

0x9d51,	// (0x0001e542) popup_info_list_pane_t1_ParamLimits

0x9d51,	// (0x0001e542) popup_info_list_pane_t1

0x9d6b,	// (0x0001e55c) popup_info_list_pane_t2_ParamLimits

0x9d6b,	// (0x0001e55c) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00023d84) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00023d84) popup_info_list_pane_t

0xc2f5,	// (0x00020ae6) bg_popup_window_pane_cp12

0xb91c,	// (0x0002010d) find_popup_pane

0xc351,	// (0x00020b42) bg_popup_window_pane_cp3

0xc5ae,	// (0x00020d9f) heading_pane_cp3

0xc5ba,	// (0x00020dab) listscroll_popup_graphic_pane

0xc2f5,	// (0x00020ae6) bg_popup_window_pane_cp4

0x9dd5,	// (0x0001e5c6) heading_pane_cp4

0xc5c9,	// (0x00020dba) listscroll_popup_colour_pane

0x9ddd,	// (0x0001e5ce) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9ddd,	// (0x0001e5ce) cell_large_graphic_colour_none_popup_pane

0x9df1,	// (0x0001e5e2) grid_large_graphic_colour_popup_pane_ParamLimits

0x9df1,	// (0x0001e5e2) grid_large_graphic_colour_popup_pane

0x9e15,	// (0x0001e606) listscroll_popup_colour_pane_g1_ParamLimits

0x9e15,	// (0x0001e606) listscroll_popup_colour_pane_g1

0x9e2c,	// (0x0001e61d) listscroll_popup_colour_pane_g2_ParamLimits

0x9e2c,	// (0x0001e61d) listscroll_popup_colour_pane_g2

0x9e43,	// (0x0001e634) listscroll_popup_colour_pane_g3_ParamLimits

0x9e43,	// (0x0001e634) listscroll_popup_colour_pane_g3

0x9e53,	// (0x0001e644) listscroll_popup_colour_pane_g4_ParamLimits

0x9e53,	// (0x0001e644) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00023d89) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00023d89) listscroll_popup_colour_pane_g

0xc5d1,	// (0x00020dc2) scroll_pane_cp6_ParamLimits

0xc5d1,	// (0x00020dc2) scroll_pane_cp6

0x9e63,	// (0x0001e654) cell_large_graphic_colour_popup_pane_ParamLimits

0x9e63,	// (0x0001e654) cell_large_graphic_colour_popup_pane

0x9e82,	// (0x0001e673) cell_large_graphic_colour_none_popup_pane_t1

0xc2f5,	// (0x00020ae6) grid_highlight_pane_cp5

0xc5e3,	// (0x00020dd4) cell_large_graphic_colour_popup_pane_g1

0xc5eb,	// (0x00020ddc) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00023d92) cell_large_graphic_colour_popup_pane_g

0xc5f3,	// (0x00020de4) cell_large_graphic_colour_popup_pane_g2_copy1

0xc5fc,	// (0x00020ded) grid_highlight_pane_cp4

0xc604,	// (0x00020df5) bg_popup_window_pane_cp8_ParamLimits

0xc604,	// (0x00020df5) bg_popup_window_pane_cp8

0x9e91,	// (0x0001e682) popup_snote_single_text_window_g1_ParamLimits

0x9e91,	// (0x0001e682) popup_snote_single_text_window_g1

0x9ea3,	// (0x0001e694) popup_snote_single_text_window_t1_ParamLimits

0x9ea3,	// (0x0001e694) popup_snote_single_text_window_t1

0x9eb6,	// (0x0001e6a7) popup_snote_single_text_window_t2_ParamLimits

0x9eb6,	// (0x0001e6a7) popup_snote_single_text_window_t2

0x9ec9,	// (0x0001e6ba) popup_snote_single_text_window_t3_ParamLimits

0x9ec9,	// (0x0001e6ba) popup_snote_single_text_window_t3

0x9f02,	// (0x0001e6f3) popup_snote_single_text_window_t4_ParamLimits

0x9f02,	// (0x0001e6f3) popup_snote_single_text_window_t4

0x9f36,	// (0x0001e727) popup_snote_single_text_window_t5_ParamLimits

0x9f36,	// (0x0001e727) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00023d97) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00023d97) popup_snote_single_text_window_t

0xc61f,	// (0x00020e10) bg_popup_window_pane_cp9_ParamLimits

0xc61f,	// (0x00020e10) bg_popup_window_pane_cp9

0x9e91,	// (0x0001e682) popup_snote_single_graphic_window_g1_ParamLimits

0x9e91,	// (0x0001e682) popup_snote_single_graphic_window_g1

0xc62d,	// (0x00020e1e) popup_snote_single_graphic_window_g2_ParamLimits

0xc62d,	// (0x00020e1e) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00023da2) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00023da2) popup_snote_single_graphic_window_g

0xc639,	// (0x00020e2a) popup_snote_single_graphic_window_t1_ParamLimits

0xc639,	// (0x00020e2a) popup_snote_single_graphic_window_t1

0xc64c,	// (0x00020e3d) popup_snote_single_graphic_window_t2_ParamLimits

0xc64c,	// (0x00020e3d) popup_snote_single_graphic_window_t2

0x9ec9,	// (0x0001e6ba) popup_snote_single_graphic_window_t3_ParamLimits

0x9ec9,	// (0x0001e6ba) popup_snote_single_graphic_window_t3

0x9f02,	// (0x0001e6f3) popup_snote_single_graphic_window_t4_ParamLimits

0x9f02,	// (0x0001e6f3) popup_snote_single_graphic_window_t4

0x9f65,	// (0x0001e756) popup_snote_single_graphic_window_t5_ParamLimits

0x9f65,	// (0x0001e756) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00023da7) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00023da7) popup_snote_single_graphic_window_t

0x31e3,	// (0x000179d4) grid_graphic_popup_pane_ParamLimits

0x31e3,	// (0x000179d4) grid_graphic_popup_pane

0x320d,	// (0x000179fe) listscroll_popup_graphic_pane_g1_ParamLimits

0x320d,	// (0x000179fe) listscroll_popup_graphic_pane_g1

0xb8ba,	// (0x000200ab) listscroll_popup_graphic_pane_g2_ParamLimits

0xb8ba,	// (0x000200ab) listscroll_popup_graphic_pane_g2

0x0001,

0xf990,	// (0x00024181) listscroll_popup_graphic_pane_g_ParamLimits

0xf990,	// (0x00024181) listscroll_popup_graphic_pane_g

0x3235,	// (0x00017a26) scroll_pane_cp5

0xb85f,	// (0x00020050) cell_graphic_popup_pane_ParamLimits

0xb85f,	// (0x00020050) cell_graphic_popup_pane

0x3163,	// (0x00017954) cell_graphic_popup_pane_g1

0x316b,	// (0x0001795c) cell_graphic_popup_pane_g2

0xc5f3,	// (0x00020de4) cell_graphic_popup_pane_g3

0x0002,

0xf989,	// (0x0002417a) cell_graphic_popup_pane_g

0x3174,	// (0x00017965) cell_graphic_popup_pane_t2

0xc5fc,	// (0x00020ded) grid_highlight_pane_cp3

0xc671,	// (0x00020e62) list_gen_pane_ParamLimits

0xc671,	// (0x00020e62) list_gen_pane

0xc699,	// (0x00020e8a) scroll_pane

0xb7c9,	// (0x0001ffba) bg_list_pane_g1_ParamLimits

0xb7c9,	// (0x0001ffba) bg_list_pane_g1

0xb7e4,	// (0x0001ffd5) bg_list_pane_g2_ParamLimits

0xb7e4,	// (0x0001ffd5) bg_list_pane_g2

0xb7f7,	// (0x0001ffe8) bg_list_pane_g3_ParamLimits

0xb7f7,	// (0x0001ffe8) bg_list_pane_g3

0xb809,	// (0x0001fffa) bg_list_pane_g4_ParamLimits

0xb809,	// (0x0001fffa) bg_list_pane_g4

0xb81b,	// (0x0002000c) bg_list_pane_g5_ParamLimits

0xb81b,	// (0x0002000c) bg_list_pane_g5

0x0004,

0xf97e,	// (0x0002416f) bg_list_pane_g_ParamLimits

0xf97e,	// (0x0002416f) bg_list_pane_g

0xb76d,	// (0x0001ff5e) list_double2_graphic_large_graphic_pane_ParamLimits

0xb76d,	// (0x0001ff5e) list_double2_graphic_large_graphic_pane

0xb76d,	// (0x0001ff5e) list_double2_graphic_pane_ParamLimits

0xb76d,	// (0x0001ff5e) list_double2_graphic_pane

0xb76d,	// (0x0001ff5e) list_double2_large_graphic_pane_ParamLimits

0xb76d,	// (0x0001ff5e) list_double2_large_graphic_pane

0xb76d,	// (0x0001ff5e) list_double2_pane_ParamLimits

0xb76d,	// (0x0001ff5e) list_double2_pane

0xb76d,	// (0x0001ff5e) list_double_graphic_heading_pane_ParamLimits

0xb76d,	// (0x0001ff5e) list_double_graphic_heading_pane

0xb76d,	// (0x0001ff5e) list_double_graphic_pane_ParamLimits

0xb76d,	// (0x0001ff5e) list_double_graphic_pane

0xb76d,	// (0x0001ff5e) list_double_heading_pane_ParamLimits

0xb76d,	// (0x0001ff5e) list_double_heading_pane

0xb76d,	// (0x0001ff5e) list_double_large_graphic_pane_ParamLimits

0xb76d,	// (0x0001ff5e) list_double_large_graphic_pane

0xb76d,	// (0x0001ff5e) list_double_number_pane_ParamLimits

0xb76d,	// (0x0001ff5e) list_double_number_pane

0xb76d,	// (0x0001ff5e) list_double_pane_ParamLimits

0xb76d,	// (0x0001ff5e) list_double_pane

0xb76d,	// (0x0001ff5e) list_double_time_pane_ParamLimits

0xb76d,	// (0x0001ff5e) list_double_time_pane

0xb76d,	// (0x0001ff5e) list_setting_number_pane_ParamLimits

0xb76d,	// (0x0001ff5e) list_setting_number_pane

0xb76d,	// (0x0001ff5e) list_setting_pane_ParamLimits

0xb76d,	// (0x0001ff5e) list_setting_pane

0xb77f,	// (0x0001ff70) list_single_2graphic_pane_ParamLimits

0xb77f,	// (0x0001ff70) list_single_2graphic_pane

0xb77f,	// (0x0001ff70) list_single_graphic_heading_pane_ParamLimits

0xb77f,	// (0x0001ff70) list_single_graphic_heading_pane

0xb77f,	// (0x0001ff70) list_single_graphic_pane_ParamLimits

0xb77f,	// (0x0001ff70) list_single_graphic_pane

0xb77f,	// (0x0001ff70) list_single_heading_pane_ParamLimits

0xb77f,	// (0x0001ff70) list_single_heading_pane

0xb77f,	// (0x0001ff70) list_single_large_graphic_pane_ParamLimits

0xb77f,	// (0x0001ff70) list_single_large_graphic_pane

0xb77f,	// (0x0001ff70) list_single_number_heading_pane_ParamLimits

0xb77f,	// (0x0001ff70) list_single_number_heading_pane

0xb77f,	// (0x0001ff70) list_single_number_pane_ParamLimits

0xb77f,	// (0x0001ff70) list_single_number_pane

0xb77f,	// (0x0001ff70) list_single_pane_ParamLimits

0xb77f,	// (0x0001ff70) list_single_pane

0xc2f5,	// (0x00020ae6) list_highlight_pane_cp1

0xc6cd,	// (0x00020ebe) list_single_pane_g1_ParamLimits

0xc6cd,	// (0x00020ebe) list_single_pane_g1

0xc6d9,	// (0x00020eca) list_single_pane_g2_ParamLimits

0xc6d9,	// (0x00020eca) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00023db9) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00023db9) list_single_pane_g

0xb757,	// (0x0001ff48) list_single_pane_t1_ParamLimits

0xb757,	// (0x0001ff48) list_single_pane_t1

0xc6cd,	// (0x00020ebe) list_single_number_pane_g1_ParamLimits

0xc6cd,	// (0x00020ebe) list_single_number_pane_g1

0xc6d9,	// (0x00020eca) list_single_number_pane_g2_ParamLimits

0xc6d9,	// (0x00020eca) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00023db9) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00023db9) list_single_number_pane_g

0x18a1,	// (0x00016092) list_single_number_pane_t1_ParamLimits

0x18a1,	// (0x00016092) list_single_number_pane_t1

0xb563,	// (0x0001fd54) list_single_number_pane_t2_ParamLimits

0xb563,	// (0x0001fd54) list_single_number_pane_t2

0x0001,

0xf93f,	// (0x00024130) list_single_number_pane_t_ParamLimits

0xf93f,	// (0x00024130) list_single_number_pane_t

0x1895,	// (0x00016086) list_single_graphic_pane_g1_ParamLimits

0x1895,	// (0x00016086) list_single_graphic_pane_g1

0xc6cd,	// (0x00020ebe) list_single_graphic_pane_g2_ParamLimits

0xc6cd,	// (0x00020ebe) list_single_graphic_pane_g2

0xc6d9,	// (0x00020eca) list_single_graphic_pane_g3_ParamLimits

0xc6d9,	// (0x00020eca) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00023db2) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00023db2) list_single_graphic_pane_g

0x18a1,	// (0x00016092) list_single_graphic_pane_t1_ParamLimits

0x18a1,	// (0x00016092) list_single_graphic_pane_t1

0xc6cd,	// (0x00020ebe) list_single_heading_pane_g1_ParamLimits

0xc6cd,	// (0x00020ebe) list_single_heading_pane_g1

0xc6d9,	// (0x00020eca) list_single_heading_pane_g2_ParamLimits

0xc6d9,	// (0x00020eca) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00023db9) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00023db9) list_single_heading_pane_g

0x9f9e,	// (0x0001e78f) list_single_heading_pane_t1_ParamLimits

0x9f9e,	// (0x0001e78f) list_single_heading_pane_t1

0x9fb4,	// (0x0001e7a5) list_single_heading_pane_t2_ParamLimits

0x9fb4,	// (0x0001e7a5) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00023dbe) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00023dbe) list_single_heading_pane_t

0xc6cd,	// (0x00020ebe) list_single_number_heading_pane_g1_ParamLimits

0xc6cd,	// (0x00020ebe) list_single_number_heading_pane_g1

0xc6d9,	// (0x00020eca) list_single_number_heading_pane_g2_ParamLimits

0xc6d9,	// (0x00020eca) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00023db9) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00023db9) list_single_number_heading_pane_g

0x9f9e,	// (0x0001e78f) list_single_number_heading_pane_t1_ParamLimits

0x9f9e,	// (0x0001e78f) list_single_number_heading_pane_t1

0x9fc6,	// (0x0001e7b7) list_single_number_heading_pane_t2_ParamLimits

0x9fc6,	// (0x0001e7b7) list_single_number_heading_pane_t2

0x9fd8,	// (0x0001e7c9) list_single_number_heading_pane_t3_ParamLimits

0x9fd8,	// (0x0001e7c9) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00023dc3) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00023dc3) list_single_number_heading_pane_t

0x9fea,	// (0x0001e7db) list_single_graphic_heading_pane_g1_ParamLimits

0x9fea,	// (0x0001e7db) list_single_graphic_heading_pane_g1

0x9ff6,	// (0x0001e7e7) list_single_graphic_heading_pane_g4_ParamLimits

0x9ff6,	// (0x0001e7e7) list_single_graphic_heading_pane_g4

0xc6d9,	// (0x00020eca) list_single_graphic_heading_pane_g5_ParamLimits

0xc6d9,	// (0x00020eca) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00023dca) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00023dca) list_single_graphic_heading_pane_g

0x9f9e,	// (0x0001e78f) list_single_graphic_heading_pane_t1_ParamLimits

0x9f9e,	// (0x0001e78f) list_single_graphic_heading_pane_t1

0xa007,	// (0x0001e7f8) list_single_graphic_heading_pane_t2_ParamLimits

0xa007,	// (0x0001e7f8) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00023dd1) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00023dd1) list_single_graphic_heading_pane_t

0x38b9,	// (0x000180aa) list_single_large_graphic_pane_g1_ParamLimits

0x38b9,	// (0x000180aa) list_single_large_graphic_pane_g1

0xc6cd,	// (0x00020ebe) list_single_large_graphic_pane_g2_ParamLimits

0xc6cd,	// (0x00020ebe) list_single_large_graphic_pane_g2

0xc6d9,	// (0x00020eca) list_single_large_graphic_pane_g3_ParamLimits

0xc6d9,	// (0x00020eca) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00023dd6) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00023dd6) list_single_large_graphic_pane_g

0x201b,	// (0x0001680c) wait_border_pane_g2_copy1

0xa019,	// (0x0001e80a) list_single_large_graphic_pane_g4_cp2

0x18a1,	// (0x00016092) list_single_large_graphic_pane_t1_ParamLimits

0x18a1,	// (0x00016092) list_single_large_graphic_pane_t1

0xa021,	// (0x0001e812) list_double_pane_g1_ParamLimits

0xa021,	// (0x0001e812) list_double_pane_g1

0xa02d,	// (0x0001e81e) list_double_pane_g2_ParamLimits

0xa02d,	// (0x0001e81e) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00023ddd) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00023ddd) list_double_pane_g

0xa039,	// (0x0001e82a) list_double_pane_t1_ParamLimits

0xa039,	// (0x0001e82a) list_double_pane_t1

0xa04f,	// (0x0001e840) list_double_pane_t2_ParamLimits

0xa04f,	// (0x0001e840) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00023de2) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00023de2) list_double_pane_t

0xa061,	// (0x0001e852) list_double2_pane_g1_ParamLimits

0xa061,	// (0x0001e852) list_double2_pane_g1

0xa072,	// (0x0001e863) list_double2_pane_g2_ParamLimits

0xa072,	// (0x0001e863) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00023de7) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00023de7) list_double2_pane_g

0xa07e,	// (0x0001e86f) list_double2_pane_t1_ParamLimits

0xa07e,	// (0x0001e86f) list_double2_pane_t1

0xa094,	// (0x0001e885) list_double2_pane_t2_ParamLimits

0xa094,	// (0x0001e885) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00023dec) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00023dec) list_double2_pane_t

0xa021,	// (0x0001e812) list_double_number_pane_g1_ParamLimits

0xa021,	// (0x0001e812) list_double_number_pane_g1

0xa02d,	// (0x0001e81e) list_double_number_pane_g2_ParamLimits

0xa02d,	// (0x0001e81e) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00023ddd) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00023ddd) list_double_number_pane_g

0xa0a6,	// (0x0001e897) list_double_number_pane_t1_ParamLimits

0xa0a6,	// (0x0001e897) list_double_number_pane_t1

0xa0b8,	// (0x0001e8a9) list_double_number_pane_t2_ParamLimits

0xa0b8,	// (0x0001e8a9) list_double_number_pane_t2

0xa0ce,	// (0x0001e8bf) list_double_number_pane_t3_ParamLimits

0xa0ce,	// (0x0001e8bf) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00023df1) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00023df1) list_double_number_pane_t

0xa0e0,	// (0x0001e8d1) list_double_graphic_pane_g1_ParamLimits

0xa0e0,	// (0x0001e8d1) list_double_graphic_pane_g1

0xa0ec,	// (0x0001e8dd) list_double_graphic_pane_g2_ParamLimits

0xa0ec,	// (0x0001e8dd) list_double_graphic_pane_g2

0xa0fb,	// (0x0001e8ec) list_double_graphic_pane_g3_ParamLimits

0xa0fb,	// (0x0001e8ec) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00023df8) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00023df8) list_double_graphic_pane_g

0xa039,	// (0x0001e82a) list_double_graphic_pane_t1_ParamLimits

0xa039,	// (0x0001e82a) list_double_graphic_pane_t1

0xa04f,	// (0x0001e840) list_double_graphic_pane_t2_ParamLimits

0xa04f,	// (0x0001e840) list_double_graphic_pane_t2

0x0001,

0xf5f1,	// (0x00023de2) list_double_graphic_pane_t_ParamLimits

0xf5f1,	// (0x00023de2) list_double_graphic_pane_t

0xa113,	// (0x0001e904) list_double2_graphic_pane_g1_ParamLimits

0xa113,	// (0x0001e904) list_double2_graphic_pane_g1

0x49ee,	// (0x000191df) list_double2_graphic_pane_g2_ParamLimits

0x49ee,	// (0x000191df) list_double2_graphic_pane_g2

0xa072,	// (0x0001e863) list_double2_graphic_pane_g3_ParamLimits

0xa072,	// (0x0001e863) list_double2_graphic_pane_g3

0x0002,

0xf610,	// (0x00023e01) list_double2_graphic_pane_g_ParamLimits

0xf610,	// (0x00023e01) list_double2_graphic_pane_g

0xa11f,	// (0x0001e910) list_double2_graphic_pane_t1_ParamLimits

0xa11f,	// (0x0001e910) list_double2_graphic_pane_t1

0xa135,	// (0x0001e926) list_double2_graphic_pane_t2_ParamLimits

0xa135,	// (0x0001e926) list_double2_graphic_pane_t2

0x0001,

0xf617,	// (0x00023e08) list_double2_graphic_pane_t_ParamLimits

0xf617,	// (0x00023e08) list_double2_graphic_pane_t

0xa147,	// (0x0001e938) list_double_large_graphic_pane_g1_ParamLimits

0xa147,	// (0x0001e938) list_double_large_graphic_pane_g1

0xa166,	// (0x0001e957) list_double_large_graphic_pane_g2_ParamLimits

0xa166,	// (0x0001e957) list_double_large_graphic_pane_g2

0xa02d,	// (0x0001e81e) list_double_large_graphic_pane_g3_ParamLimits

0xa02d,	// (0x0001e81e) list_double_large_graphic_pane_g3

0xa177,	// (0x0001e968) list_double_large_graphic_pane_g4_ParamLimits

0xa177,	// (0x0001e968) list_double_large_graphic_pane_g4

0x0004,

0xf61c,	// (0x00023e0d) list_double_large_graphic_pane_g_ParamLimits

0xf61c,	// (0x00023e0d) list_double_large_graphic_pane_g

0xa18a,	// (0x0001e97b) list_double_large_graphic_pane_t1_ParamLimits

0xa18a,	// (0x0001e97b) list_double_large_graphic_pane_t1

0xa1a3,	// (0x0001e994) list_double_large_graphic_pane_t2_ParamLimits

0xa1a3,	// (0x0001e994) list_double_large_graphic_pane_t2

0x0001,

0xf627,	// (0x00023e18) list_double_large_graphic_pane_t_ParamLimits

0xf627,	// (0x00023e18) list_double_large_graphic_pane_t

0xa1b5,	// (0x0001e9a6) list_double2_large_graphic_pane_g1_ParamLimits

0xa1b5,	// (0x0001e9a6) list_double2_large_graphic_pane_g1

0xa061,	// (0x0001e852) list_double2_large_graphic_pane_g2_ParamLimits

0xa061,	// (0x0001e852) list_double2_large_graphic_pane_g2

0xa072,	// (0x0001e863) list_double2_large_graphic_pane_g3_ParamLimits

0xa072,	// (0x0001e863) list_double2_large_graphic_pane_g3

0x0002,

0xf62c,	// (0x00023e1d) list_double2_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x00023e1d) list_double2_large_graphic_pane_g

0xa11f,	// (0x0001e910) list_double2_large_graphic_pane_t1_ParamLimits

0xa11f,	// (0x0001e910) list_double2_large_graphic_pane_t1

0xa135,	// (0x0001e926) list_double2_large_graphic_pane_t2_ParamLimits

0xa135,	// (0x0001e926) list_double2_large_graphic_pane_t2

0x0001,

0xf617,	// (0x00023e08) list_double2_large_graphic_pane_t_ParamLimits

0xf617,	// (0x00023e08) list_double2_large_graphic_pane_t

0xa1c1,	// (0x0001e9b2) list_double_heading_pane_g1_ParamLimits

0xa1c1,	// (0x0001e9b2) list_double_heading_pane_g1

0xa1d2,	// (0x0001e9c3) list_double_heading_pane_g2_ParamLimits

0xa1d2,	// (0x0001e9c3) list_double_heading_pane_g2

0x0001,

0xf633,	// (0x00023e24) list_double_heading_pane_g_ParamLimits

0xf633,	// (0x00023e24) list_double_heading_pane_g

0xa1de,	// (0x0001e9cf) list_double_heading_pane_t1_ParamLimits

0xa1de,	// (0x0001e9cf) list_double_heading_pane_t1

0xa1f4,	// (0x0001e9e5) list_double_heading_pane_t2_ParamLimits

0xa1f4,	// (0x0001e9e5) list_double_heading_pane_t2

0x0001,

0xf638,	// (0x00023e29) list_double_heading_pane_t_ParamLimits

0xf638,	// (0x00023e29) list_double_heading_pane_t

0xa206,	// (0x0001e9f7) list_double_graphic_heading_pane_g1_ParamLimits

0xa206,	// (0x0001e9f7) list_double_graphic_heading_pane_g1

0xa1c1,	// (0x0001e9b2) list_double_graphic_heading_pane_g2_ParamLimits

0xa1c1,	// (0x0001e9b2) list_double_graphic_heading_pane_g2

0xa1d2,	// (0x0001e9c3) list_double_graphic_heading_pane_g3_ParamLimits

0xa1d2,	// (0x0001e9c3) list_double_graphic_heading_pane_g3

0x0002,

0xf63d,	// (0x00023e2e) list_double_graphic_heading_pane_g_ParamLimits

0xf63d,	// (0x00023e2e) list_double_graphic_heading_pane_g

0xa1de,	// (0x0001e9cf) list_double_graphic_heading_pane_t1_ParamLimits

0xa1de,	// (0x0001e9cf) list_double_graphic_heading_pane_t1

0xa1f4,	// (0x0001e9e5) list_double_graphic_heading_pane_t2_ParamLimits

0xa1f4,	// (0x0001e9e5) list_double_graphic_heading_pane_t2

0x0001,

0xf638,	// (0x00023e29) list_double_graphic_heading_pane_t_ParamLimits

0xf638,	// (0x00023e29) list_double_graphic_heading_pane_t

0xa166,	// (0x0001e957) list_double_time_pane_g1_ParamLimits

0xa166,	// (0x0001e957) list_double_time_pane_g1

0xa02d,	// (0x0001e81e) list_double_time_pane_g2_ParamLimits

0xa02d,	// (0x0001e81e) list_double_time_pane_g2

0x0001,

0xf644,	// (0x00023e35) list_double_time_pane_g_ParamLimits

0xf644,	// (0x00023e35) list_double_time_pane_g

0xa212,	// (0x0001ea03) list_double_time_pane_t1_ParamLimits

0xa212,	// (0x0001ea03) list_double_time_pane_t1

0xa228,	// (0x0001ea19) list_double_time_pane_t2_ParamLimits

0xa228,	// (0x0001ea19) list_double_time_pane_t2

0xa23a,	// (0x0001ea2b) list_double_time_pane_t3_ParamLimits

0xa23a,	// (0x0001ea2b) list_double_time_pane_t3

0xa24c,	// (0x0001ea3d) list_double_time_pane_t4_ParamLimits

0xa24c,	// (0x0001ea3d) list_double_time_pane_t4

0x0003,

0xf649,	// (0x00023e3a) list_double_time_pane_t_ParamLimits

0xf649,	// (0x00023e3a) list_double_time_pane_t

0x49ee,	// (0x000191df) list_setting_pane_g1_ParamLimits

0x49ee,	// (0x000191df) list_setting_pane_g1

0xa072,	// (0x0001e863) list_setting_pane_g2_ParamLimits

0xa072,	// (0x0001e863) list_setting_pane_g2

0x0001,

0xf652,	// (0x00023e43) list_setting_pane_g_ParamLimits

0xf652,	// (0x00023e43) list_setting_pane_g

0xa25e,	// (0x0001ea4f) list_setting_pane_t1_ParamLimits

0xa25e,	// (0x0001ea4f) list_setting_pane_t1

0xa275,	// (0x0001ea66) list_setting_pane_t2_ParamLimits

0xa275,	// (0x0001ea66) list_setting_pane_t2

0x0002,

0xf657,	// (0x00023e48) list_setting_pane_t_ParamLimits

0xf657,	// (0x00023e48) list_setting_pane_t

0xa2b4,	// (0x0001eaa5) set_value_pane_cp_ParamLimits

0xa2b4,	// (0x0001eaa5) set_value_pane_cp

0x49ee,	// (0x000191df) list_setting_number_pane_g1_ParamLimits

0x49ee,	// (0x000191df) list_setting_number_pane_g1

0xa072,	// (0x0001e863) list_setting_number_pane_g2_ParamLimits

0xa072,	// (0x0001e863) list_setting_number_pane_g2

0x0001,

0xf652,	// (0x00023e43) list_setting_number_pane_g_ParamLimits

0xf652,	// (0x00023e43) list_setting_number_pane_g

0xa2c0,	// (0x0001eab1) list_setting_number_pane_t1_ParamLimits

0xa2c0,	// (0x0001eab1) list_setting_number_pane_t1

0xa2d4,	// (0x0001eac5) list_setting_number_pane_t2_ParamLimits

0xa2d4,	// (0x0001eac5) list_setting_number_pane_t2

0xa2eb,	// (0x0001eadc) list_setting_number_pane_t3_ParamLimits

0xa2eb,	// (0x0001eadc) list_setting_number_pane_t3

0x0003,

0xf65e,	// (0x00023e4f) list_setting_number_pane_t_ParamLimits

0xf65e,	// (0x00023e4f) list_setting_number_pane_t

0xa2b4,	// (0x0001eaa5) set_value_pane_ParamLimits

0xa2b4,	// (0x0001eaa5) set_value_pane

0xc6fa,	// (0x00020eeb) bg_set_opt_pane_ParamLimits

0xc6fa,	// (0x00020eeb) bg_set_opt_pane

0xc71b,	// (0x00020f0c) set_value_pane_t1

0xc729,	// (0x00020f1a) slider_set_pane_cp3

0xa32e,	// (0x0001eb1f) volume_small_pane_cp

0xc732,	// (0x00020f23) list_form_gen_pane

0xc73b,	// (0x00020f2c) scroll_pane_cp8

0xa337,	// (0x0001eb28) form_field_data_pane_ParamLimits

0xa337,	// (0x0001eb28) form_field_data_pane

0xa34e,	// (0x0001eb3f) form_field_data_wide_pane_ParamLimits

0xa34e,	// (0x0001eb3f) form_field_data_wide_pane

0xa36e,	// (0x0001eb5f) form_field_popup_pane_ParamLimits

0xa36e,	// (0x0001eb5f) form_field_popup_pane

0xa38e,	// (0x0001eb7f) form_field_popup_wide_pane_ParamLimits

0xa38e,	// (0x0001eb7f) form_field_popup_wide_pane

0xc75c,	// (0x00020f4d) form_field_slider_pane_ParamLimits

0xc75c,	// (0x00020f4d) form_field_slider_pane

0xa3a5,	// (0x0001eb96) form_field_slider_wide_pane_ParamLimits

0xa3a5,	// (0x0001eb96) form_field_slider_wide_pane

0xc76f,	// (0x00020f60) data_form_pane

0xa3c2,	// (0x0001ebb3) form_field_data_pane_t1

0xc77b,	// (0x00020f6c) input_focus_pane

0xc789,	// (0x00020f7a) data_form_wide_pane

0xc7c6,	// (0x00020fb7) form_field_data_wide_pane_t1

0xc611,	// (0x00020e02) input_focus_pane_cp6

0xa3dc,	// (0x0001ebcd) form_field_popup_pane_t1

0xc77b,	// (0x00020f6c) input_focus_pane_cp7

0xc7e8,	// (0x00020fd9) list_form_pane

0xc7fc,	// (0x00020fed) form_field_popup_wide_pane_t1

0xc77b,	// (0x00020f6c) input_focus_pane_cp8

0xc811,	// (0x00021002) list_form_wide_pane

0xa3fe,	// (0x0001ebef) form_field_slider_pane_t1_ParamLimits

0xa3fe,	// (0x0001ebef) form_field_slider_pane_t1

0xa416,	// (0x0001ec07) form_field_slider_pane_t2_ParamLimits

0xa416,	// (0x0001ec07) form_field_slider_pane_t2

0x0001,

0xf66e,	// (0x00023e5f) form_field_slider_pane_t_ParamLimits

0xf66e,	// (0x00023e5f) form_field_slider_pane_t

0xc343,	// (0x00020b34) input_focus_pane_cp9_ParamLimits

0xc343,	// (0x00020b34) input_focus_pane_cp9

0xa42b,	// (0x0001ec1c) slider_cont_pane_ParamLimits

0xa42b,	// (0x0001ec1c) slider_cont_pane

0xc81d,	// (0x0002100e) form_field_slider_wide_pane_t1_ParamLimits

0xc81d,	// (0x0002100e) form_field_slider_wide_pane_t1

0xc82f,	// (0x00021020) form_field_slider_wide_pane_t2_ParamLimits

0xc82f,	// (0x00021020) form_field_slider_wide_pane_t2

0x0001,

0xf673,	// (0x00023e64) form_field_slider_wide_pane_t_ParamLimits

0xf673,	// (0x00023e64) form_field_slider_wide_pane_t

0xc343,	// (0x00020b34) input_focus_pane_cp10_ParamLimits

0xc343,	// (0x00020b34) input_focus_pane_cp10

0xa43f,	// (0x0001ec30) slider_cont_pane_cp1_ParamLimits

0xa43f,	// (0x0001ec30) slider_cont_pane_cp1

0xa453,	// (0x0001ec44) slider_form_pane_cp

0xc841,	// (0x00021032) input_focus_pane_g1

0xc849,	// (0x0002103a) input_focus_pane_g2

0xc851,	// (0x00021042) input_focus_pane_g3

0xc859,	// (0x0002104a) input_focus_pane_g4

0xc861,	// (0x00021052) input_focus_pane_g5

0xc869,	// (0x0002105a) input_focus_pane_g6

0xc871,	// (0x00021062) input_focus_pane_g7

0xc879,	// (0x0002106a) input_focus_pane_g8

0xc881,	// (0x00021072) input_focus_pane_g9

0xc2eb,	// (0x00020adc) input_focus_pane_g10

0x0009,

0xf678,	// (0x00023e69) input_focus_pane_g

0x2024,	// (0x00016815) wait_border_pane_g3_copy1

0xa45b,	// (0x0001ec4c) data_form_pane_t1

0xc2eb,	// (0x00020adc) wait_anim_pane_g1_copy1

0xb73b,	// (0x0001ff2c) data_form_wide_pane_t1

0xa475,	// (0x0001ec66) list_form_graphic_pane_cp_ParamLimits

0xa475,	// (0x0001ec66) list_form_graphic_pane_cp

0x2f25,	// (0x00017716) slider_form_pane_g1

0x2f2e,	// (0x0001771f) slider_form_pane_g2

0x0006,

0xf96f,	// (0x00024160) slider_form_pane_g

0xa487,	// (0x0001ec78) list_form_graphic_pane_ParamLimits

0xa487,	// (0x0001ec78) list_form_graphic_pane

0xa49a,	// (0x0001ec8b) list_form_graphic_pane_g1

0xa4a2,	// (0x0001ec93) list_form_graphic_pane_t1_ParamLimits

0xa4a2,	// (0x0001ec93) list_form_graphic_pane_t1

0xc351,	// (0x00020b42) list_highlight_pane_cp5_ParamLimits

0xc351,	// (0x00020b42) list_highlight_pane_cp5

0xa4b7,	// (0x0001eca8) find_pane_g1

0xc889,	// (0x0002107a) input_find_pane

0xa4c0,	// (0x0001ecb1) input_find_pane_g1_ParamLimits

0xa4c0,	// (0x0001ecb1) input_find_pane_g1

0xa4cc,	// (0x0001ecbd) input_find_pane_t1_ParamLimits

0xa4cc,	// (0x0001ecbd) input_find_pane_t1

0xa4e1,	// (0x0001ecd2) input_find_pane_t2_ParamLimits

0xa4e1,	// (0x0001ecd2) input_find_pane_t2

0x0001,

0xf68d,	// (0x00023e7e) input_find_pane_t_ParamLimits

0xf68d,	// (0x00023e7e) input_find_pane_t

0xc892,	// (0x00021083) input_focus_pane_cp5_ParamLimits

0xc892,	// (0x00021083) input_focus_pane_cp5

0xc8a0,	// (0x00021091) bg_popup_window_pane_cp2_ParamLimits

0xc8a0,	// (0x00021091) bg_popup_window_pane_cp2

0xc8ad,	// (0x0002109e) listscroll_menu_pane_ParamLimits

0xc8ad,	// (0x0002109e) listscroll_menu_pane

0xa502,	// (0x0001ecf3) popup_submenu_window_ParamLimits

0xa502,	// (0x0001ecf3) popup_submenu_window

0xc8b9,	// (0x000210aa) find_popup_pane_g1

0xa52a,	// (0x0001ed1b) input_popup_find_pane_cp

0xc892,	// (0x00021083) input_focus_pane_cp4_ParamLimits

0xc892,	// (0x00021083) input_focus_pane_cp4

0xc8c1,	// (0x000210b2) input_popup_find_pane_t1_ParamLimits

0xc8c1,	// (0x000210b2) input_popup_find_pane_t1

0xc2f5,	// (0x00020ae6) bg_popup_sub_pane_cp

0xc8ef,	// (0x000210e0) listscroll_popup_sub_pane

0xc8f7,	// (0x000210e8) list_submenu_pane_ParamLimits

0xc8f7,	// (0x000210e8) list_submenu_pane

0xc908,	// (0x000210f9) scroll_pane_cp4

0xa542,	// (0x0001ed33) list_single_popup_submenu_pane_ParamLimits

0xa542,	// (0x0001ed33) list_single_popup_submenu_pane

0xa556,	// (0x0001ed47) list_single_popup_submenu_pane_g1

0xa55e,	// (0x0001ed4f) list_single_popup_submenu_pane_t1_ParamLimits

0xa55e,	// (0x0001ed4f) list_single_popup_submenu_pane_t1

0xc343,	// (0x00020b34) bg_active_tab_pane_cp1_ParamLimits

0xc343,	// (0x00020b34) bg_active_tab_pane_cp1

0xc910,	// (0x00021101) tabs_2_active_pane_g1

0xa573,	// (0x0001ed64) tabs_2_active_pane_t1

0xc343,	// (0x00020b34) bg_passive_tab_pane_cp1_ParamLimits

0xc343,	// (0x00020b34) bg_passive_tab_pane_cp1

0xc910,	// (0x00021101) tabs_2_passive_pane_g1

0xa573,	// (0x0001ed64) tabs_2_passive_pane_t1

0xc351,	// (0x00020b42) bg_active_tab_pane_cp4

0xa585,	// (0x0001ed76) tabs_2_long_active_pane_t1

0x13c2,	// (0x00015bb3) bg_passive_tab_pane_cp4

0xe963,	// (0x00023154) list_single_midp_graphic_pane_g4_ParamLimits

0xc351,	// (0x00020b42) bg_active_tab_pane_cp5

0xa598,	// (0x0001ed89) tabs_3_long_active_pane_t1

0x13c2,	// (0x00015bb3) bg_passive_tab_pane_cp5

0xe963,	// (0x00023154) list_single_midp_graphic_pane_g4

0xc351,	// (0x00020b42) bg_popup_window_pane_cp13_ParamLimits

0xc351,	// (0x00020b42) bg_popup_window_pane_cp13

0xc918,	// (0x00021109) listscroll_popup_fast_pane_ParamLimits

0xc918,	// (0x00021109) listscroll_popup_fast_pane

0xc924,	// (0x00021115) grid_popup_fast_pane_ParamLimits

0xc924,	// (0x00021115) grid_popup_fast_pane

0xc936,	// (0x00021127) scroll_pane_cp9_ParamLimits

0xc936,	// (0x00021127) scroll_pane_cp9

0x4e77,	// (0x00019668) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4e77,	// (0x00019668) list_single_graphic_hl_pane_t1_cp2

0xc949,	// (0x0002113a) input_focus_pane_cp20_ParamLimits

0xc949,	// (0x0002113a) input_focus_pane_cp20

0xc957,	// (0x00021148) query_popup_data_pane_t1_ParamLimits

0xc957,	// (0x00021148) query_popup_data_pane_t1

0xc96a,	// (0x0002115b) query_popup_data_pane_t2_ParamLimits

0xc96a,	// (0x0002115b) query_popup_data_pane_t2

0xc9b0,	// (0x000211a1) query_popup_data_pane_t3_ParamLimits

0xc9b0,	// (0x000211a1) query_popup_data_pane_t3

0xc9f1,	// (0x000211e2) query_popup_data_pane_t4_ParamLimits

0xc9f1,	// (0x000211e2) query_popup_data_pane_t4

0xca2d,	// (0x0002121e) query_popup_data_pane_t5_ParamLimits

0xca2d,	// (0x0002121e) query_popup_data_pane_t5

0x0004,

0xf692,	// (0x00023e83) query_popup_data_pane_t_ParamLimits

0xf692,	// (0x00023e83) query_popup_data_pane_t

0xc841,	// (0x00021032) bg_set_opt_pane_g1

0xc849,	// (0x0002103a) bg_set_opt_pane_g2

0xc851,	// (0x00021042) bg_set_opt_pane_g3

0xc859,	// (0x0002104a) bg_set_opt_pane_g4

0xc861,	// (0x00021052) bg_set_opt_pane_g5

0xc869,	// (0x0002105a) bg_set_opt_pane_g6

0xc871,	// (0x00021062) bg_set_opt_pane_g7

0xc879,	// (0x0002106a) bg_set_opt_pane_g8

0xc881,	// (0x00021072) bg_set_opt_pane_g9

0x0008,

0xf69d,	// (0x00023e8e) bg_set_opt_pane_g

0xe5a9,	// (0x00022d9a) control_top_pane_stacon_ParamLimits

0xe5a9,	// (0x00022d9a) control_top_pane_stacon

0xe5fc,	// (0x00022ded) signal_pane_stacon_ParamLimits

0xe5fc,	// (0x00022ded) signal_pane_stacon

0xe621,	// (0x00022e12) stacon_top_pane_g1_ParamLimits

0xe621,	// (0x00022e12) stacon_top_pane_g1

0xe643,	// (0x00022e34) title_pane_stacon_ParamLimits

0xe643,	// (0x00022e34) title_pane_stacon

0xe66d,	// (0x00022e5e) uni_indicator_pane_stacon_ParamLimits

0xe66d,	// (0x00022e5e) uni_indicator_pane_stacon

0xe682,	// (0x00022e73) battery_pane_stacon_ParamLimits

0xe682,	// (0x00022e73) battery_pane_stacon

0xe6c6,	// (0x00022eb7) control_bottom_pane_stacon_ParamLimits

0xe6c6,	// (0x00022eb7) control_bottom_pane_stacon

0xe6e9,	// (0x00022eda) navi_pane_stacon_ParamLimits

0xe6e9,	// (0x00022eda) navi_pane_stacon

0xe70c,	// (0x00022efd) stacon_bottom_pane_g1_ParamLimits

0xe70c,	// (0x00022efd) stacon_bottom_pane_g1

0xe2be,	// (0x00022aaf) aid_levels_signal_lsc_ParamLimits

0xe2be,	// (0x00022aaf) aid_levels_signal_lsc

0xe2d4,	// (0x00022ac5) signal_pane_stacon_g1_ParamLimits

0xe2d4,	// (0x00022ac5) signal_pane_stacon_g1

0xe2e8,	// (0x00022ad9) signal_pane_stacon_g2_ParamLimits

0xe2e8,	// (0x00022ad9) signal_pane_stacon_g2

0x0001,

0xf6b0,	// (0x00023ea1) signal_pane_stacon_g_ParamLimits

0xf6b0,	// (0x00023ea1) signal_pane_stacon_g

0xe31d,	// (0x00022b0e) title_pane_stacon_t1_ParamLimits

0xe31d,	// (0x00022b0e) title_pane_stacon_t1

0xca71,	// (0x00021262) uni_indicator_pane_stacon_g1

0xca7b,	// (0x0002126c) uni_indicator_pane_stacon_g2

0xca85,	// (0x00021276) uni_indicator_pane_stacon_g3

0xca8f,	// (0x00021280) uni_indicator_pane_stacon_g4

0x0003,

0xf6bc,	// (0x00023ead) uni_indicator_pane_stacon_g

0xe342,	// (0x00022b33) control_top_pane_stacon_g1

0xe34a,	// (0x00022b3b) control_top_pane_stacon_t1_ParamLimits

0xe34a,	// (0x00022b3b) control_top_pane_stacon_t1

0xe381,	// (0x00022b72) aid_levels_battery_lsc_ParamLimits

0xe381,	// (0x00022b72) aid_levels_battery_lsc

0xe398,	// (0x00022b89) battery_pane_stacon_g1_ParamLimits

0xe398,	// (0x00022b89) battery_pane_stacon_g1

0xe3ab,	// (0x00022b9c) battery_pane_stacon_g2_ParamLimits

0xe3ab,	// (0x00022b9c) battery_pane_stacon_g2

0x0001,

0xf6c5,	// (0x00023eb6) battery_pane_stacon_g_ParamLimits

0xf6c5,	// (0x00023eb6) battery_pane_stacon_g

0xe3e9,	// (0x00022bda) navi_icon_pane_stacon

0xe3fd,	// (0x00022bee) navi_navi_pane_stacon

0xe3e9,	// (0x00022bda) navi_text_pane_stacon

0xe342,	// (0x00022b33) control_bottom_pane_stacon_g1

0xe411,	// (0x00022c02) control_bottom_pane_stacon_t1_ParamLimits

0xe411,	// (0x00022c02) control_bottom_pane_stacon_t1

0xa5c4,	// (0x0001edb5) grid_app_pane_ParamLimits

0xa5c4,	// (0x0001edb5) grid_app_pane

0xa5fc,	// (0x0001eded) scroll_pane_cp15_ParamLimits

0xa5fc,	// (0x0001eded) scroll_pane_cp15

0xa611,	// (0x0001ee02) cell_app_pane_ParamLimits

0xa611,	// (0x0001ee02) cell_app_pane

0xa656,	// (0x0001ee47) cell_app_pane_g1_ParamLimits

0xa656,	// (0x0001ee47) cell_app_pane_g1

0xcab3,	// (0x000212a4) cell_app_pane_g2_ParamLimits

0xcab3,	// (0x000212a4) cell_app_pane_g2

0x0001,

0xf6ca,	// (0x00023ebb) cell_app_pane_g_ParamLimits

0xf6ca,	// (0x00023ebb) cell_app_pane_g

0xa67a,	// (0x0001ee6b) cell_app_pane_t1_ParamLimits

0xa67a,	// (0x0001ee6b) cell_app_pane_t1

0xcabf,	// (0x000212b0) grid_highlight_pane_ParamLimits

0xcabf,	// (0x000212b0) grid_highlight_pane

0xc841,	// (0x00021032) cell_highlight_pane_g1

0xc849,	// (0x0002103a) cell_highlight_pane_g2

0xc851,	// (0x00021042) cell_highlight_pane_g3

0xc859,	// (0x0002104a) cell_highlight_pane_g4

0xc861,	// (0x00021052) cell_highlight_pane_g5

0xc869,	// (0x0002105a) cell_highlight_pane_g6

0xc871,	// (0x00021062) cell_highlight_pane_g7

0xc879,	// (0x0002106a) cell_highlight_pane_g8

0xc881,	// (0x00021072) cell_highlight_pane_g9

0xc2eb,	// (0x00020adc) cell_highlight_pane_g10

0x0009,

0xf678,	// (0x00023e69) cell_highlight_pane_g

0xcad0,	// (0x000212c1) bg_scroll_pane

0x873c,	// (0x0001cf2d) scroll_handle_pane

0xcb17,	// (0x00021308) scroll_bg_pane_g1

0xcb2c,	// (0x0002131d) scroll_bg_pane_g2

0xcb44,	// (0x00021335) scroll_bg_pane_g3

0x0002,

0xf6cf,	// (0x00023ec0) scroll_bg_pane_g

0xa691,	// (0x0001ee82) scroll_handle_focus_pane_ParamLimits

0xa691,	// (0x0001ee82) scroll_handle_focus_pane

0xcb17,	// (0x00021308) scroll_handle_pane_g1

0xcb59,	// (0x0002134a) scroll_handle_pane_g2

0xcb44,	// (0x00021335) scroll_handle_pane_g3

0x0002,

0xf6d6,	// (0x00023ec7) scroll_handle_pane_g

0xc892,	// (0x00021083) bg_popup_sub_pane_cp21_ParamLimits

0xc892,	// (0x00021083) bg_popup_sub_pane_cp21

0xa69e,	// (0x0001ee8f) popup_fep_japan_predictive_window_t1_ParamLimits

0xa69e,	// (0x0001ee8f) popup_fep_japan_predictive_window_t1

0xa6b5,	// (0x0001eea6) popup_fep_japan_predictive_window_t2_ParamLimits

0xa6b5,	// (0x0001eea6) popup_fep_japan_predictive_window_t2

0xa6e8,	// (0x0001eed9) popup_fep_japan_predictive_window_t3_ParamLimits

0xa6e8,	// (0x0001eed9) popup_fep_japan_predictive_window_t3

0x0002,

0xf6dd,	// (0x00023ece) popup_fep_japan_predictive_window_t_ParamLimits

0xf6dd,	// (0x00023ece) popup_fep_japan_predictive_window_t

0xc2f5,	// (0x00020ae6) bg_popup_sub_pane_cp23

0xa71f,	// (0x0001ef10) listscroll_japin_cand_pane

0xcb6d,	// (0x0002135e) popup_fep_japan_candidate_window_t1

0xcb7b,	// (0x0002136c) candidate_pane_ParamLimits

0xcb7b,	// (0x0002136c) candidate_pane

0xa727,	// (0x0001ef18) scroll_pane_cp30

0xcb8d,	// (0x0002137e) list_single_popup_jap_candidate_pane_ParamLimits

0xcb8d,	// (0x0002137e) list_single_popup_jap_candidate_pane

0xc2f5,	// (0x00020ae6) list_highlight_pane_cp30

0xcba2,	// (0x00021393) list_single_popup_jap_candidate_pane_t1

0xcbb1,	// (0x000213a2) level_1_signal

0xcbbe,	// (0x000213af) level_2_signal

0xcbcb,	// (0x000213bc) level_3_signal

0xcbd8,	// (0x000213c9) level_4_signal

0xcbe5,	// (0x000213d6) level_5_signal

0xcbf2,	// (0x000213e3) level_6_signal

0xcbff,	// (0x000213f0) level_7_signal

0xcbb1,	// (0x000213a2) level_1_battery

0xcbbe,	// (0x000213af) level_2_battery

0xcbcb,	// (0x000213bc) level_3_battery

0xcbd8,	// (0x000213c9) level_4_battery

0xcbe5,	// (0x000213d6) level_5_battery

0xcbf2,	// (0x000213e3) level_6_battery

0xcbff,	// (0x000213f0) level_7_battery

0xcc24,	// (0x00021415) list_menu_pane_ParamLimits

0xcc24,	// (0x00021415) list_menu_pane

0xcc3a,	// (0x0002142b) scroll_pane_cp25_ParamLimits

0xcc3a,	// (0x0002142b) scroll_pane_cp25

0xa72f,	// (0x0001ef20) list_double2_graphic_pane_cp2_ParamLimits

0xa72f,	// (0x0001ef20) list_double2_graphic_pane_cp2

0xa72f,	// (0x0001ef20) list_double2_large_graphic_pane_cp2_ParamLimits

0xa72f,	// (0x0001ef20) list_double2_large_graphic_pane_cp2

0xa72f,	// (0x0001ef20) list_double2_pane_cp2_ParamLimits

0xa72f,	// (0x0001ef20) list_double2_pane_cp2

0xa72f,	// (0x0001ef20) list_double_graphic_pane_cp2_ParamLimits

0xa72f,	// (0x0001ef20) list_double_graphic_pane_cp2

0xa72f,	// (0x0001ef20) list_double_large_graphic_pane_cp2_ParamLimits

0xa72f,	// (0x0001ef20) list_double_large_graphic_pane_cp2

0xa72f,	// (0x0001ef20) list_double_number_pane_cp2_ParamLimits

0xa72f,	// (0x0001ef20) list_double_number_pane_cp2

0xa72f,	// (0x0001ef20) list_double_pane_cp2_ParamLimits

0xa72f,	// (0x0001ef20) list_double_pane_cp2

0xa73e,	// (0x0001ef2f) list_single_2graphic_pane_cp2_ParamLimits

0xa73e,	// (0x0001ef2f) list_single_2graphic_pane_cp2

0xa73e,	// (0x0001ef2f) list_single_graphic_heading_pane_cp2_ParamLimits

0xa73e,	// (0x0001ef2f) list_single_graphic_heading_pane_cp2

0xa73e,	// (0x0001ef2f) list_single_graphic_pane_cp2_ParamLimits

0xa73e,	// (0x0001ef2f) list_single_graphic_pane_cp2

0xa73e,	// (0x0001ef2f) list_single_heading_pane_cp2_ParamLimits

0xa73e,	// (0x0001ef2f) list_single_heading_pane_cp2

0xcc63,	// (0x00021454) list_single_large_graphic_pane_cp2_ParamLimits

0xcc63,	// (0x00021454) list_single_large_graphic_pane_cp2

0xa73e,	// (0x0001ef2f) list_single_number_heading_pane_cp2_ParamLimits

0xa73e,	// (0x0001ef2f) list_single_number_heading_pane_cp2

0xa73e,	// (0x0001ef2f) list_single_number_pane_cp2_ParamLimits

0xa73e,	// (0x0001ef2f) list_single_number_pane_cp2

0xa73e,	// (0x0001ef2f) list_single_pane_cp2_ParamLimits

0xa73e,	// (0x0001ef2f) list_single_pane_cp2

0xcc7d,	// (0x0002146e) bg_popup_sub_pane_cp22

0xe4e1,	// (0x00022cd2) popup_side_volume_key_window_g1

0xe4ed,	// (0x00022cde) popup_side_volume_key_window_t1

0x878b,	// (0x0001cf7c) volume_small_pane_cp1

0xc343,	// (0x00020b34) bg_popup_sub_pane_cp24_ParamLimits

0xc343,	// (0x00020b34) bg_popup_sub_pane_cp24

0xcc93,	// (0x00021484) fep_china_uni_candidate_pane_ParamLimits

0xcc93,	// (0x00021484) fep_china_uni_candidate_pane

0xcca7,	// (0x00021498) fep_china_uni_entry_pane

0xccb7,	// (0x000214a8) popup_fep_china_uni_window_g1

0xa7cb,	// (0x0001efbc) fep_china_uni_entry_pane_g1

0xa7d3,	// (0x0001efc4) fep_china_uni_entry_pane_g2

0x0001,

0xf70e,	// (0x00023eff) fep_china_uni_entry_pane_g

0xccd3,	// (0x000214c4) fep_entry_item_pane

0xccdd,	// (0x000214ce) fep_candidate_item_pane

0xa7db,	// (0x0001efcc) fep_china_uni_candidate_pane_g1

0xcce5,	// (0x000214d6) fep_china_uni_candidate_pane_g2

0xcced,	// (0x000214de) fep_china_uni_candidate_pane_g3

0xa7e3,	// (0x0001efd4) fep_china_uni_candidate_pane_g4

0x0003,

0xf713,	// (0x00023f04) fep_china_uni_candidate_pane_g

0xc2eb,	// (0x00020adc) fep_entry_item_pane_g1

0xccf5,	// (0x000214e6) fep_entry_item_pane_t1_ParamLimits

0xccf5,	// (0x000214e6) fep_entry_item_pane_t1

0xe4fb,	// (0x00022cec) fep_candidate_item_pane_t1_ParamLimits

0xe4fb,	// (0x00022cec) fep_candidate_item_pane_t1

0xe510,	// (0x00022d01) fep_candidate_item_pane_t2_ParamLimits

0xe510,	// (0x00022d01) fep_candidate_item_pane_t2

0x0001,

0xf71c,	// (0x00023f0d) fep_candidate_item_pane_t_ParamLimits

0xf71c,	// (0x00023f0d) fep_candidate_item_pane_t

0xc351,	// (0x00020b42) list_highlight_pane_cp31_ParamLimits

0xc351,	// (0x00020b42) list_highlight_pane_cp31

0xe522,	// (0x00022d13) level_1_signal_lsc

0xe52b,	// (0x00022d1c) level_2_signal_lsc

0xe534,	// (0x00022d25) level_3_signal_lsc

0xe53d,	// (0x00022d2e) level_4_signal_lsc

0xe546,	// (0x00022d37) level_5_signal_lsc

0xe54f,	// (0x00022d40) level_6_signal_lsc

0xe558,	// (0x00022d49) level_7_signal_lsc

0xe558,	// (0x00022d49) level_1_battery_lsc

0xe561,	// (0x00022d52) level_2_battery_lsc

0xe56a,	// (0x00022d5b) level_3_battery_lsc

0xe573,	// (0x00022d64) level_4_battery_lsc

0xe57c,	// (0x00022d6d) level_5_battery_lsc

0xe585,	// (0x00022d76) level_6_battery_lsc

0xe522,	// (0x00022d13) level_7_battery_lsc

0xe58e,	// (0x00022d7f) scroll_handle_focus_pane_g1

0xe597,	// (0x00022d88) scroll_handle_focus_pane_g2

0xe5a0,	// (0x00022d91) scroll_handle_focus_pane_g3

0x0002,

0xf721,	// (0x00023f12) scroll_handle_focus_pane_g

0xa7eb,	// (0x0001efdc) list_single_2graphic_pane_g1_ParamLimits

0xa7eb,	// (0x0001efdc) list_single_2graphic_pane_g1

0x9ff6,	// (0x0001e7e7) list_single_2graphic_pane_g2_ParamLimits

0x9ff6,	// (0x0001e7e7) list_single_2graphic_pane_g2

0xc6d9,	// (0x00020eca) list_single_2graphic_pane_g3_ParamLimits

0xc6d9,	// (0x00020eca) list_single_2graphic_pane_g3

0xa7f7,	// (0x0001efe8) list_single_2graphic_pane_g4_ParamLimits

0xa7f7,	// (0x0001efe8) list_single_2graphic_pane_g4

0x0003,

0xf728,	// (0x00023f19) list_single_2graphic_pane_g_ParamLimits

0xf728,	// (0x00023f19) list_single_2graphic_pane_g

0xa803,	// (0x0001eff4) list_single_2graphic_pane_t1_ParamLimits

0xa803,	// (0x0001eff4) list_single_2graphic_pane_t1

0xa831,	// (0x0001f022) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa831,	// (0x0001f022) list_double2_graphic_large_graphic_pane_g1

0xa061,	// (0x0001e852) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa061,	// (0x0001e852) list_double2_graphic_large_graphic_pane_g2

0xa072,	// (0x0001e863) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa072,	// (0x0001e863) list_double2_graphic_large_graphic_pane_g3

0xa843,	// (0x0001f034) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa843,	// (0x0001f034) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf731,	// (0x00023f22) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf731,	// (0x00023f22) list_double2_graphic_large_graphic_pane_g

0xa84f,	// (0x0001f040) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa84f,	// (0x0001f040) list_double2_graphic_large_graphic_pane_t1

0xa865,	// (0x0001f056) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa865,	// (0x0001f056) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf73a,	// (0x00023f2b) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf73a,	// (0x00023f2b) list_double2_graphic_large_graphic_pane_t

0xa8ea,	// (0x0001f0db) popup_fast_swap_window_ParamLimits

0xa8ea,	// (0x0001f0db) popup_fast_swap_window

0xa906,	// (0x0001f0f7) popup_side_volume_key_window

0x0e56,	// (0x00015647) stacon_top_pane

0x0e60,	// (0x00015651) status_pane_ParamLimits

0x0e60,	// (0x00015651) status_pane

0xa920,	// (0x0001f111) status_small_pane

0xc2f5,	// (0x00020ae6) control_pane

0xc2f5,	// (0x00020ae6) stacon_bottom_pane

0xc73b,	// (0x00020f2c) scroll_pane_cp121

0xc732,	// (0x00020f23) set_content_pane

0xa877,	// (0x0001f068) bg_active_tab_pane_g1_cp1

0xa880,	// (0x0001f071) bg_active_tab_pane_g2_cp1

0xa889,	// (0x0001f07a) bg_active_tab_pane_g3_cp1

0xa877,	// (0x0001f068) bg_passive_tab_pane_g1_cp1

0xa880,	// (0x0001f071) bg_passive_tab_pane_g2_cp1

0xa889,	// (0x0001f07a) bg_passive_tab_pane_g3_cp1

0xa892,	// (0x0001f083) bg_active_tab_pane_g1_cp2

0xa880,	// (0x0001f071) bg_active_tab_pane_g2_cp2

0xa89b,	// (0x0001f08c) bg_active_tab_pane_g3_cp2

0xa892,	// (0x0001f083) bg_passive_tab_pane_g1_cp2

0xa880,	// (0x0001f071) bg_passive_tab_pane_g2_cp2

0xa89b,	// (0x0001f08c) bg_passive_tab_pane_g3_cp2

0xa8a4,	// (0x0001f095) bg_active_tab_pane_g1_cp3

0xa880,	// (0x0001f071) bg_active_tab_pane_g2_cp3

0xa8ad,	// (0x0001f09e) bg_active_tab_pane_g3_cp3

0xa8a4,	// (0x0001f095) bg_passive_tab_pane_g1_cp3

0xa880,	// (0x0001f071) bg_passive_tab_pane_g2_cp3

0xa8ad,	// (0x0001f09e) bg_passive_tab_pane_g3_cp3

0xa8b6,	// (0x0001f0a7) bg_active_tab_pane_g1_cp4

0xa880,	// (0x0001f071) bg_active_tab_pane_g2_cp4

0xa8c1,	// (0x0001f0b2) bg_active_tab_pane_g3_cp4

0xa8b6,	// (0x0001f0a7) bg_passive_tab_pane_g1_cp4

0xa880,	// (0x0001f071) bg_passive_tab_pane_g2_cp4

0xa8c1,	// (0x0001f0b2) bg_passive_tab_pane_g3_cp4

0xa8cc,	// (0x0001f0bd) bg_active_tab_pane_g1_cp5

0xa880,	// (0x0001f071) bg_active_tab_pane_g2_cp5

0xa8d5,	// (0x0001f0c6) bg_active_tab_pane_g3_cp5

0xa8cc,	// (0x0001f0bd) bg_passive_tab_pane_g1_cp5

0xa880,	// (0x0001f071) bg_passive_tab_pane_g2_cp5

0xa8d5,	// (0x0001f0c6) bg_passive_tab_pane_g3_cp5

0x362d,	// (0x00017e1e) list_set_graphic_pane_ParamLimits

0x362d,	// (0x00017e1e) list_set_graphic_pane

0xc2f5,	// (0x00020ae6) bg_set_opt_pane_cp4

0xe728,	// (0x00022f19) list_set_graphic_pane_g1_ParamLimits

0xe728,	// (0x00022f19) list_set_graphic_pane_g1

0xe734,	// (0x00022f25) list_set_graphic_pane_g2_ParamLimits

0xe734,	// (0x00022f25) list_set_graphic_pane_g2

0x0001,

0xf73f,	// (0x00023f30) list_set_graphic_pane_g_ParamLimits

0xf73f,	// (0x00023f30) list_set_graphic_pane_g

0x0009,

0xfac4,	// (0x000242b5) volume_small_pane_cp_g

0xa8de,	// (0x0001f0cf) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa8de,	// (0x0001f0cf) list_double2_large_graphic_pane_g1_cp2

0xe756,	// (0x00022f47) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xe756,	// (0x00022f47) list_double2_large_graphic_pane_g2_cp2

0xe767,	// (0x00022f58) list_double2_large_graphic_pane_g3_cp2

0xe76f,	// (0x00022f60) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xe76f,	// (0x00022f60) list_double2_large_graphic_pane_t1_cp2

0xe785,	// (0x00022f76) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xe785,	// (0x00022f76) list_double2_large_graphic_pane_t2_cp2

0xb48a,	// (0x0001fc7b) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb48a,	// (0x0001fc7b) list_double_large_graphic_pane_g1_cp2

0x2ae6,	// (0x000172d7) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x2ae6,	// (0x000172d7) list_double_large_graphic_pane_g2_cp2

0x0f7b,	// (0x0001576c) list_double_large_graphic_pane_g3_cp2

0x2af7,	// (0x000172e8) list_double_large_graphic_pane_g4_cp

0x2aff,	// (0x000172f0) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2aff,	// (0x000172f0) list_double_large_graphic_pane_t1_cp2

0x2b16,	// (0x00017307) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2b16,	// (0x00017307) list_double_large_graphic_pane_t2_cp2

0x0e79,	// (0x0001566a) list_double2_graphic_pane_g1_cp2_ParamLimits

0x0e79,	// (0x0001566a) list_double2_graphic_pane_g1_cp2

0x0e87,	// (0x00015678) list_double2_graphic_pane_g2_cp2_ParamLimits

0x0e87,	// (0x00015678) list_double2_graphic_pane_g2_cp2

0x0e98,	// (0x00015689) list_double2_graphic_pane_g3_cp2

0x0ea2,	// (0x00015693) list_double2_graphic_pane_t1_cp2_ParamLimits

0x0ea2,	// (0x00015693) list_double2_graphic_pane_t1_cp2

0x0eb8,	// (0x000156a9) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0eb8,	// (0x000156a9) list_double2_graphic_pane_t2_cp2

0xcd0b,	// (0x000214fc) list_single_number_heading_pane_g1_cp2_ParamLimits

0xcd0b,	// (0x000214fc) list_single_number_heading_pane_g1_cp2

0x0eca,	// (0x000156bb) list_single_number_heading_pane_g2_cp2

0x0ed2,	// (0x000156c3) list_single_number_heading_pane_t1_cp2_ParamLimits

0x0ed2,	// (0x000156c3) list_single_number_heading_pane_t1_cp2

0x0ee8,	// (0x000156d9) list_single_number_heading_pane_t2_cp2_ParamLimits

0x0ee8,	// (0x000156d9) list_single_number_heading_pane_t2_cp2

0x0efa,	// (0x000156eb) list_single_number_heading_pane_t3_cp2_ParamLimits

0x0efa,	// (0x000156eb) list_single_number_heading_pane_t3_cp2

0xcd0b,	// (0x000214fc) list_single_heading_pane_g1_cp2_ParamLimits

0xcd0b,	// (0x000214fc) list_single_heading_pane_g1_cp2

0x0eca,	// (0x000156bb) list_single_heading_pane_g2_cp2

0x0ed2,	// (0x000156c3) list_single_heading_pane_t1_cp2_ParamLimits

0x0ed2,	// (0x000156c3) list_single_heading_pane_t1_cp2

0x28df,	// (0x000170d0) list_single_heading_pane_t2_cp2_ParamLimits

0x28df,	// (0x000170d0) list_single_heading_pane_t2_cp2

0x2827,	// (0x00017018) list_double_graphic_pane_g1_cp2_ParamLimits

0x2827,	// (0x00017018) list_double_graphic_pane_g1_cp2

0x2833,	// (0x00017024) list_double_graphic_pane_g2_cp2_ParamLimits

0x2833,	// (0x00017024) list_double_graphic_pane_g2_cp2

0x2842,	// (0x00017033) list_double_graphic_pane_g3_cp2

0x284a,	// (0x0001703b) list_double_graphic_pane_t1_cp2_ParamLimits

0x284a,	// (0x0001703b) list_double_graphic_pane_t1_cp2

0x2860,	// (0x00017051) list_double_graphic_pane_t2_cp2_ParamLimits

0x2860,	// (0x00017051) list_double_graphic_pane_t2_cp2

0x0f6f,	// (0x00015760) list_double_number_pane_g1_cp2_ParamLimits

0x0f6f,	// (0x00015760) list_double_number_pane_g1_cp2

0x0f7b,	// (0x0001576c) list_double_number_pane_g2_cp2

0x27eb,	// (0x00016fdc) list_double_number_pane_t1_cp2_ParamLimits

0x27eb,	// (0x00016fdc) list_double_number_pane_t1_cp2

0x27ff,	// (0x00016ff0) list_double_number_pane_t2_cp2_ParamLimits

0x27ff,	// (0x00016ff0) list_double_number_pane_t2_cp2

0x2815,	// (0x00017006) list_double_number_pane_t3_cp2_ParamLimits

0x2815,	// (0x00017006) list_double_number_pane_t3_cp2

0x26d4,	// (0x00016ec5) list_single_graphic_pane_g1_cp2_ParamLimits

0x26d4,	// (0x00016ec5) list_single_graphic_pane_g1_cp2

0x0fd3,	// (0x000157c4) list_single_graphic_pane_g2_cp2_ParamLimits

0x0fd3,	// (0x000157c4) list_single_graphic_pane_g2_cp2

0x0fdf,	// (0x000157d0) list_single_graphic_pane_g3_cp2

0x26aa,	// (0x00016e9b) list_single_graphic_pane_t1_cp2_ParamLimits

0x26aa,	// (0x00016e9b) list_single_graphic_pane_t1_cp2

0x0fd3,	// (0x000157c4) list_single_number_pane_g1_cp2_ParamLimits

0x0fd3,	// (0x000157c4) list_single_number_pane_g1_cp2

0x0fdf,	// (0x000157d0) list_single_number_pane_g2_cp2

0x26aa,	// (0x00016e9b) list_single_number_pane_t1_cp2_ParamLimits

0x26aa,	// (0x00016e9b) list_single_number_pane_t1_cp2

0x26c0,	// (0x00016eb1) list_single_number_pane_t2_cp2_ParamLimits

0x26c0,	// (0x00016eb1) list_single_number_pane_t2_cp2

0xe756,	// (0x00022f47) list_double2_pane_g1_cp2_ParamLimits

0xe756,	// (0x00022f47) list_double2_pane_g1_cp2

0xe767,	// (0x00022f58) list_double2_pane_g2_cp2

0x0f47,	// (0x00015738) list_double2_pane_t1_cp2_ParamLimits

0x0f47,	// (0x00015738) list_double2_pane_t1_cp2

0x0f5d,	// (0x0001574e) list_double2_pane_t2_cp2_ParamLimits

0x0f5d,	// (0x0001574e) list_double2_pane_t2_cp2

0x0f6f,	// (0x00015760) list_double_pane_g1_cp2_ParamLimits

0x0f6f,	// (0x00015760) list_double_pane_g1_cp2

0x0f7b,	// (0x0001576c) list_double_pane_g2_cp2

0x0f83,	// (0x00015774) list_double_pane_t1_cp2_ParamLimits

0x0f83,	// (0x00015774) list_double_pane_t1_cp2

0x0f99,	// (0x0001578a) list_double_pane_t2_cp2_ParamLimits

0x0f99,	// (0x0001578a) list_double_pane_t2_cp2

0xa92b,	// (0x0001f11c) list_single_pane_cp2_g3

0x0fd3,	// (0x000157c4) list_single_pane_g1_cp2_ParamLimits

0x0fd3,	// (0x000157c4) list_single_pane_g1_cp2

0x0fdf,	// (0x000157d0) list_single_pane_g2_cp2

0x0fe7,	// (0x000157d8) list_single_pane_t1_cp2_ParamLimits

0x0fe7,	// (0x000157d8) list_single_pane_t1_cp2

0xa933,	// (0x0001f124) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa933,	// (0x0001f124) list_single_large_graphic_pane_g1_cp2

0x100b,	// (0x000157fc) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x100b,	// (0x000157fc) list_single_large_graphic_pane_g2_cp2

0x1017,	// (0x00015808) list_single_large_graphic_pane_g3_cp2

0xa93f,	// (0x0001f130) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa93f,	// (0x0001f130) list_single_large_graphic_pane_g4_cp1

0x1039,	// (0x0001582a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1039,	// (0x0001582a) list_single_large_graphic_pane_t1_cp2

0x2676,	// (0x00016e67) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2676,	// (0x00016e67) list_single_graphic_heading_pane_g1_cp2

0x2643,	// (0x00016e34) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2643,	// (0x00016e34) list_single_graphic_heading_pane_g4_cp2

0x0fdf,	// (0x000157d0) list_single_graphic_heading_pane_g5_cp2

0x2682,	// (0x00016e73) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2682,	// (0x00016e73) list_single_graphic_heading_pane_t1_cp2

0x2698,	// (0x00016e89) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2698,	// (0x00016e89) list_single_graphic_heading_pane_t2_cp2

0x2637,	// (0x00016e28) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2637,	// (0x00016e28) list_single_2graphic_pane_g1_cp2

0x2643,	// (0x00016e34) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2643,	// (0x00016e34) list_single_2graphic_pane_g2_cp2

0x0fdf,	// (0x000157d0) list_single_2graphic_pane_g3_cp2

0x2654,	// (0x00016e45) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2654,	// (0x00016e45) list_single_2graphic_pane_g4_cp2

0x2660,	// (0x00016e51) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2660,	// (0x00016e51) list_single_2graphic_pane_t1_cp2

0xc2eb,	// (0x00020adc) list_highlight_pane_g10_cp1

0x221f,	// (0x00016a10) list_highlight_pane_g1_cp1

0x2227,	// (0x00016a18) list_highlight_pane_g2_cp1

0x222f,	// (0x00016a20) list_highlight_pane_g3_cp1

0x2237,	// (0x00016a28) list_highlight_pane_g4_cp1

0x223f,	// (0x00016a30) list_highlight_pane_g5_cp1

0x2247,	// (0x00016a38) list_highlight_pane_g6_cp1

0x224f,	// (0x00016a40) list_highlight_pane_g7_cp1

0x2257,	// (0x00016a48) list_highlight_pane_g8_cp1

0x225f,	// (0x00016a50) list_highlight_pane_g9_cp1

0xb21f,	// (0x0001fa10) form_field_slider_pane_t3

0xb22d,	// (0x0001fa1e) form_field_slider_pane_t4

0x2163,	// (0x00016954) slider_form_pane_ParamLimits

0x2163,	// (0x00016954) slider_form_pane

0xc2f5,	// (0x00020ae6) control_abbreviations

0xc2f5,	// (0x00020ae6) control_conventions

0xc2f5,	// (0x00020ae6) control_definitions

0xc2f5,	// (0x00020ae6) format_table_attribute

0xb461,	// (0x0001fc52) bg_popup_preview_window_pane_g9

0xc2f5,	// (0x00020ae6) format_table_data2

0xc2f5,	// (0x00020ae6) format_table_data3

0xc2f5,	// (0x00020ae6) format_table_data_example

0x0008,

0xc2f5,	// (0x00020ae6) intro_purpose

0xf8cf,	// (0x000240c0) bg_popup_preview_window_pane_g

0xc2f5,	// (0x00020ae6) texts_category

0xc2f5,	// (0x00020ae6) texts_graphics

0x104f,	// (0x00015840) text_digital

0x105e,	// (0x0001584f) text_primary

0x106d,	// (0x0001585e) text_primary_small

0x107c,	// (0x0001586d) text_secondary

0x108b,	// (0x0001587c) text_title

0xb82f,	// (0x00020020) bg_passive_tab_pane_g1_cp3_srt

0xa880,	// (0x0001f071) bg_passive_tab_pane_g2_cp3_srt

0xb838,	// (0x00020029) bg_passive_tab_pane_g3_cp3_srt

0xc343,	// (0x00020b34) bg_active_tab_pane_cp3_srt_ParamLimits

0xc343,	// (0x00020b34) bg_active_tab_pane_cp3_srt

0xb841,	// (0x00020032) tabs_4_active_pane_srt_g1

0xb849,	// (0x0002003a) tabs_4_active_pane_srt_t1_ParamLimits

0xb849,	// (0x0002003a) tabs_4_active_pane_srt_t1

0xb82f,	// (0x00020020) bg_active_tab_pane_g1_cp3_copy1

0xa880,	// (0x0001f071) bg_active_tab_pane_g2_cp3_copy1

0xb838,	// (0x00020029) bg_active_tab_pane_g3_cp3_copy1

0xc351,	// (0x00020b42) tabs_2_long_active_pane_srt_ParamLimits

0xc351,	// (0x00020b42) tabs_2_long_active_pane_srt

0xc351,	// (0x00020b42) tabs_2_long_passive_pane_srt_ParamLimits

0xc351,	// (0x00020b42) tabs_2_long_passive_pane_srt

0x13c2,	// (0x00015bb3) bg_passive_tab_pane_cp4_srt_ParamLimits

0x13c2,	// (0x00015bb3) bg_passive_tab_pane_cp4_srt

0xb58b,	// (0x0001fd7c) bg_passive_tab_pane_g1_cp4_srt

0xa880,	// (0x0001f071) bg_passive_tab_pane_g2_cp4_srt

0xb594,	// (0x0001fd85) bg_passive_tab_pane_g3_cp4_srt

0xc351,	// (0x00020b42) bg_active_tab_pane_cp4_srt_ParamLimits

0xc351,	// (0x00020b42) bg_active_tab_pane_cp4_srt

0xb59d,	// (0x0001fd8e) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb59d,	// (0x0001fd8e) tabs_2_long_active_pane_srt_t1

0xb58b,	// (0x0001fd7c) bg_active_tab_pane_g1_cp4_srt

0xa880,	// (0x0001f071) bg_active_tab_pane_g2_cp4_srt

0xb594,	// (0x0001fd85) bg_active_tab_pane_g3_cp4_srt

0xc343,	// (0x00020b34) tabs_3_long_active_pane_srt_ParamLimits

0xc343,	// (0x00020b34) tabs_3_long_active_pane_srt

0xc343,	// (0x00020b34) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc343,	// (0x00020b34) tabs_3_long_passive_pane_cp_srt

0xc343,	// (0x00020b34) tabs_3_long_passive_pane_srt_ParamLimits

0xc343,	// (0x00020b34) tabs_3_long_passive_pane_srt

0x13c2,	// (0x00015bb3) bg_passive_tab_pane_cp5_srt_ParamLimits

0x13c2,	// (0x00015bb3) bg_passive_tab_pane_cp5_srt

0xa8cc,	// (0x0001f0bd) bg_passive_tab_pane_g1_cp5_srt

0xa880,	// (0x0001f071) bg_passive_tab_pane_g2_cp5_srt

0xa8d5,	// (0x0001f0c6) bg_passive_tab_pane_g3_cp5_srt

0xc351,	// (0x00020b42) bg_active_tab_pane_cp5_srt_ParamLimits

0xc351,	// (0x00020b42) bg_active_tab_pane_cp5_srt

0xb575,	// (0x0001fd66) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb575,	// (0x0001fd66) tabs_3_long_active_pane_srt_t1

0xa8cc,	// (0x0001f0bd) bg_active_tab_pane_g1_cp5_srt

0xa880,	// (0x0001f071) bg_active_tab_pane_g2_cp5_srt

0xa8d5,	// (0x0001f0c6) bg_active_tab_pane_g3_cp5_srt

0x2d3c,	// (0x0001752d) navi_text_pane_srt_t1

0x2d34,	// (0x00017525) navi_icon_pane_srt_g1

0x125c,	// (0x00015a4d) midp_editing_number_pane_srt

0x109a,	// (0x0001588b) midp_ticker_pane_srt

0x1264,	// (0x00015a55) midp_ticker_pane_srt_g1

0x126c,	// (0x00015a5d) midp_ticker_pane_srt_g2

0x0001,

0xf75e,	// (0x00023f4f) midp_ticker_pane_srt_g

0x1274,	// (0x00015a65) midp_ticker_pane_srt_t1

0x2d25,	// (0x00017516) midp_editing_number_pane_t1_copy1

0xa959,	// (0x0001f14a) listscroll_midp_pane

0xa959,	// (0x0001f14a) midp_form_pane

0xa9c4,	// (0x0001f1b5) midp_info_popup_window_ParamLimits

0xa9c4,	// (0x0001f1b5) midp_info_popup_window

0xc892,	// (0x00021083) bg_popup_sub_pane_cp50_ParamLimits

0xc892,	// (0x00021083) bg_popup_sub_pane_cp50

0x1e5b,	// (0x0001664c) listscroll_midp_info_pane_ParamLimits

0x1e5b,	// (0x0001664c) listscroll_midp_info_pane

0x1e3b,	// (0x0001662c) listscroll_form_midp_pane_ParamLimits

0x1e3b,	// (0x0001662c) listscroll_form_midp_pane

0x1e47,	// (0x00016638) scroll_bar_cp050

0x1e3b,	// (0x0001662c) list_midp_pane

0xb9dd,	// (0x000201ce) signal_pane_g2_cp

0x1d55,	// (0x00016546) listscroll_midp_info_pane_t1_ParamLimits

0x1d55,	// (0x00016546) listscroll_midp_info_pane_t1

0xb059,	// (0x0001f84a) listscroll_midp_info_pane_t2_ParamLimits

0xb059,	// (0x0001f84a) listscroll_midp_info_pane_t2

0xb097,	// (0x0001f888) listscroll_midp_info_pane_t3_ParamLimits

0xb097,	// (0x0001f888) listscroll_midp_info_pane_t3

0xb0d1,	// (0x0001f8c2) listscroll_midp_info_pane_t4_ParamLimits

0xb0d1,	// (0x0001f8c2) listscroll_midp_info_pane_t4

0x0003,

0xf80a,	// (0x00023ffb) listscroll_midp_info_pane_t_ParamLimits

0xf80a,	// (0x00023ffb) listscroll_midp_info_pane_t

0xc908,	// (0x000210f9) scroll_pane_cp21

0x1cf5,	// (0x000164e6) form_midp_field_choice_group_pane

0xb01c,	// (0x0001f80d) form_midp_field_text_pane

0x1d3b,	// (0x0001652c) form_midp_field_time_pane

0x1d43,	// (0x00016534) form_midp_gauge_slider_pane

0x1d4c,	// (0x0001653d) form_midp_gauge_wait_pane

0xc2f5,	// (0x00020ae6) form_midp_image_pane

0xb005,	// (0x0001f7f6) list_single_midp_pane_ParamLimits

0xb005,	// (0x0001f7f6) list_single_midp_pane

0xafe3,	// (0x0001f7d4) form_midp_field_text_pane_t1

0x1a33,	// (0x00016224) input_focus_pane_cp050

0x1cb2,	// (0x000164a3) list_midp_form_text_pane

0x1c47,	// (0x00016438) form_midp_field_choice_group_pane_t1

0x1c55,	// (0x00016446) input_focus_pane_cp051

0x1c69,	// (0x0001645a) list_midp_choice_pane

0xc2f5,	// (0x00020ae6) status_idle_pane

0x1c2b,	// (0x0001641c) form_midp_field_time_pane_t1

0xc2eb,	// (0x00020adc) wait_anim_pane_g2_copy1

0x1c39,	// (0x0001642a) form_midp_field_time_pane_t2

0x0001,

0x11c4,	// (0x000159b5) aid_navinavi_width_2_pane

0xf805,	// (0x00023ff6) form_midp_field_time_pane_t

0xc2f5,	// (0x00020ae6) input_focus_pane_cp052

0xc2f5,	// (0x00020ae6) bg_input_focus_pane_cp040

0x1beb,	// (0x000163dc) form_midp_gauge_slider_pane_t1

0x1bf9,	// (0x000163ea) form_midp_gauge_slider_pane_t2

0xafc7,	// (0x0001f7b8) form_midp_gauge_slider_pane_t3

0xafd5,	// (0x0001f7c6) form_midp_gauge_slider_pane_t4

0x0003,

0xf7fc,	// (0x00023fed) form_midp_gauge_slider_pane_t

0x1c23,	// (0x00016414) form_midp_slider_pane

0xc351,	// (0x00020b42) bg_input_focus_pane_cp041_ParamLimits

0xc351,	// (0x00020b42) bg_input_focus_pane_cp041

0x1bb8,	// (0x000163a9) form_midp_gauge_wait_pane_t1_ParamLimits

0x1bb8,	// (0x000163a9) form_midp_gauge_wait_pane_t1

0x1bca,	// (0x000163bb) form_midp_gauge_wait_pane_t2_ParamLimits

0x1bca,	// (0x000163bb) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f7,	// (0x00023fe8) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f7,	// (0x00023fe8) form_midp_gauge_wait_pane_t

0x1bdc,	// (0x000163cd) form_midp_wait_pane_ParamLimits

0x1bdc,	// (0x000163cd) form_midp_wait_pane

0xaf91,	// (0x0001f782) form_midp_image_pane_g1

0xaf9a,	// (0x0001f78b) form_midp_image_pane_t1

0xafa9,	// (0x0001f79a) form_midp_image_pane_t2

0xafb8,	// (0x0001f7a9) form_midp_image_pane_t3

0x0002,

0xf7f0,	// (0x00023fe1) form_midp_image_pane_t

0x1b6a,	// (0x0001635b) list_single_midp_pane_g1

0x1b73,	// (0x00016364) list_single_midp_pane_t1

0xaf7c,	// (0x0001f76d) list_midp_form_item_pane_ParamLimits

0xaf7c,	// (0x0001f76d) list_midp_form_item_pane

0x116c,	// (0x0001595d) list_midp_form_item_pane_t1

0x117b,	// (0x0001596c) midp_ticker_pane_g1

0x1187,	// (0x00015978) midp_ticker_pane_g2

0x0001,

0xf744,	// (0x00023f35) midp_ticker_pane_g

0x1193,	// (0x00015984) midp_ticker_pane_t1

0x2fa5,	// (0x00017796) midp_editing_number_pane_t1

0x2f83,	// (0x00017774) midp_editing_number_pane

0x2f92,	// (0x00017783) midp_ticker_pane

0x2d03,	// (0x000174f4) ai_message_heading_pane

0xc2f5,	// (0x00020ae6) bg_popup_window_pane_cp14

0x2d0b,	// (0x000174fc) listscroll_ai_message_pane

0x2c8d,	// (0x0001747e) ai_message_heading_pane_g1_ParamLimits

0x2c8d,	// (0x0001747e) ai_message_heading_pane_g1

0xb52b,	// (0x0001fd1c) ai_message_heading_pane_g2_ParamLimits

0xb52b,	// (0x0001fd1c) ai_message_heading_pane_g2

0x2ca5,	// (0x00017496) ai_message_heading_pane_g3_ParamLimits

0x2ca5,	// (0x00017496) ai_message_heading_pane_g3

0x2cb1,	// (0x000174a2) ai_message_heading_pane_g4_ParamLimits

0x2cb1,	// (0x000174a2) ai_message_heading_pane_g4

0x0003,

0xf931,	// (0x00024122) ai_message_heading_pane_g_ParamLimits

0xf931,	// (0x00024122) ai_message_heading_pane_g

0xb537,	// (0x0001fd28) ai_message_heading_pane_t1_ParamLimits

0xb537,	// (0x0001fd28) ai_message_heading_pane_t1

0xb551,	// (0x0001fd42) ai_message_heading_pane_t2_ParamLimits

0xb551,	// (0x0001fd42) ai_message_heading_pane_t2

0x0001,

0xf93a,	// (0x0002412b) ai_message_heading_pane_t_ParamLimits

0xf93a,	// (0x0002412b) ai_message_heading_pane_t

0x2ce9,	// (0x000174da) bg_popup_heading_pane_cp1_ParamLimits

0x2ce9,	// (0x000174da) bg_popup_heading_pane_cp1

0x2c7b,	// (0x0001746c) list_ai_message_pane_ParamLimits

0x2c7b,	// (0x0001746c) list_ai_message_pane

0xc908,	// (0x000210f9) scroll_pane_cp10

0x2c17,	// (0x00017408) list_ai_message_pane_g1

0x2c1f,	// (0x00017410) list_ai_message_pane_g2

0x0001,

0xf90e,	// (0x000240ff) list_ai_message_pane_g

0x2c27,	// (0x00017418) list_ai_message_pane_t1_ParamLimits

0x2c27,	// (0x00017418) list_ai_message_pane_t1

0x2c3c,	// (0x0001742d) list_ai_message_pane_t2_ParamLimits

0x2c3c,	// (0x0001742d) list_ai_message_pane_t2

0x2c51,	// (0x00017442) list_ai_message_pane_t3_ParamLimits

0x2c51,	// (0x00017442) list_ai_message_pane_t3

0x2c66,	// (0x00017457) list_ai_message_pane_t4_ParamLimits

0x2c66,	// (0x00017457) list_ai_message_pane_t4

0x0003,

0xf913,	// (0x00024104) list_ai_message_pane_t_ParamLimits

0xf913,	// (0x00024104) list_ai_message_pane_t

0xb507,	// (0x0001fcf8) cell_ai_soft_ind_pane_ParamLimits

0xb507,	// (0x0001fcf8) cell_ai_soft_ind_pane

0x11a5,	// (0x00015996) cell_ai_soft_ind_pane_g1_ParamLimits

0x11a5,	// (0x00015996) cell_ai_soft_ind_pane_g1

0xc2f5,	// (0x00020ae6) grid_highlight_cp1

0x11b2,	// (0x000159a3) text_secondary_cp56_ParamLimits

0x11b2,	// (0x000159a3) text_secondary_cp56

0x2bd7,	// (0x000173c8) example_general_pane_ParamLimits

0x2bd7,	// (0x000173c8) example_general_pane

0x2be3,	// (0x000173d4) example_parent_pane_g1_ParamLimits

0x2be3,	// (0x000173d4) example_parent_pane_g1

0x2bef,	// (0x000173e0) example_parent_pane_t1_ParamLimits

0x2bef,	// (0x000173e0) example_parent_pane_t1

0x8d5a,	// (0x0001d54b) popup_preview_text_window_ParamLimits

0x8d5a,	// (0x0001d54b) popup_preview_text_window

0x0fcb,	// (0x000157bc) list_single_pane_cp2_g4

0xc53d,	// (0x00020d2e) bg_popup_preview_window_pane_ParamLimits

0xc53d,	// (0x00020d2e) bg_popup_preview_window_pane

0xb469,	// (0x0001fc5a) popup_preview_text_window_t1_ParamLimits

0xb469,	// (0x0001fc5a) popup_preview_text_window_t1

0x294f,	// (0x00017140) popup_preview_text_window_t2_ParamLimits

0x294f,	// (0x00017140) popup_preview_text_window_t2

0x2998,	// (0x00017189) popup_preview_text_window_t3_ParamLimits

0x2998,	// (0x00017189) popup_preview_text_window_t3

0x29dd,	// (0x000171ce) popup_preview_text_window_t4_ParamLimits

0x29dd,	// (0x000171ce) popup_preview_text_window_t4

0x0004,

0xf8e2,	// (0x000240d3) popup_preview_text_window_t_ParamLimits

0xf8e2,	// (0x000240d3) popup_preview_text_window_t

0x2a5b,	// (0x0001724c) scroll_pane_cp11

0x1913,	// (0x00016104) bg_popup_preview_window_pane_g1

0xb429,	// (0x0001fc1a) bg_popup_preview_window_pane_g2

0xb431,	// (0x0001fc22) bg_popup_preview_window_pane_g3

0xb439,	// (0x0001fc2a) bg_popup_preview_window_pane_g4

0xb441,	// (0x0001fc32) bg_popup_preview_window_pane_g5

0xb449,	// (0x0001fc3a) bg_popup_preview_window_pane_g6

0xb451,	// (0x0001fc42) bg_popup_preview_window_pane_g7

0xb459,	// (0x0001fc4a) bg_popup_preview_window_pane_g8

0xe131,	// (0x00022922) aid_popup_width_pane

0x8cd6,	// (0x0001d4c7) popup_midp_note_alarm_window_ParamLimits

0x8cd6,	// (0x0001d4c7) popup_midp_note_alarm_window

0xc76f,	// (0x00020f60) data_form_pane_ParamLimits

0xa3b8,	// (0x0001eba9) form_field_data_pane_g1

0xa3c2,	// (0x0001ebb3) form_field_data_pane_t1_ParamLimits

0xc77b,	// (0x00020f6c) input_focus_pane_ParamLimits

0xc789,	// (0x00020f7a) data_form_wide_pane_ParamLimits

0xc79a,	// (0x00020f8b) form_field_data_wide_pane_g1

0xc7c6,	// (0x00020fb7) form_field_data_wide_pane_t1_ParamLimits

0xc611,	// (0x00020e02) input_focus_pane_cp6_ParamLimits

0xa534,	// (0x0001ed25) input_popup_find_pane_g1_ParamLimits

0xa534,	// (0x0001ed25) input_popup_find_pane_g1

0xe3bc,	// (0x00022bad) aid_navi_side_left_pane

0xe3d1,	// (0x00022bc2) aid_navi_side_right_pane

0x231a,	// (0x00016b0b) bg_popup_window_pane_cp30_ParamLimits

0x231a,	// (0x00016b0b) bg_popup_window_pane_cp30

0x2394,	// (0x00016b85) popup_midp_note_alarm_window_g1_ParamLimits

0x2394,	// (0x00016b85) popup_midp_note_alarm_window_g1

0x23c4,	// (0x00016bb5) popup_midp_note_alarm_window_t1_ParamLimits

0x23c4,	// (0x00016bb5) popup_midp_note_alarm_window_t1

0xb272,	// (0x0001fa63) popup_midp_note_alarm_window_t2_ParamLimits

0xb272,	// (0x0001fa63) popup_midp_note_alarm_window_t2

0xb320,	// (0x0001fb11) popup_midp_note_alarm_window_t3_ParamLimits

0xb320,	// (0x0001fb11) popup_midp_note_alarm_window_t3

0xb348,	// (0x0001fb39) popup_midp_note_alarm_window_t4_ParamLimits

0xb348,	// (0x0001fb39) popup_midp_note_alarm_window_t4

0x255b,	// (0x00016d4c) popup_midp_note_alarm_window_t5_ParamLimits

0x255b,	// (0x00016d4c) popup_midp_note_alarm_window_t5

0x000a,

0xf87f,	// (0x00024070) popup_midp_note_alarm_window_t_ParamLimits

0xf87f,	// (0x00024070) popup_midp_note_alarm_window_t

0x2607,	// (0x00016df8) wait_bar_pane_cp1_ParamLimits

0x2607,	// (0x00016df8) wait_bar_pane_cp1

0xc2f5,	// (0x00020ae6) wait_anim_pane_copy1

0xc2f5,	// (0x00020ae6) wait_border_pane_copy1

0x2010,	// (0x00016801) wait_border_pane_g1_copy1

0xc7e0,	// (0x00020fd1) form_field_popup_pane_g1

0xa3dc,	// (0x0001ebcd) form_field_popup_pane_t1_ParamLimits

0xc77b,	// (0x00020f6c) input_focus_pane_cp7_ParamLimits

0xc7e8,	// (0x00020fd9) list_form_pane_ParamLimits

0xc7f4,	// (0x00020fe5) form_field_popup_wide_pane_g1

0xc7fc,	// (0x00020fed) form_field_popup_wide_pane_t1_ParamLimits

0xc77b,	// (0x00020f6c) input_focus_pane_cp8_ParamLimits

0xc811,	// (0x00021002) list_form_wide_pane_ParamLimits

0xb8a2,	// (0x00020093) aid_size_cell_graphic_pane

0xa45b,	// (0x0001ec4c) data_form_pane_t1_ParamLimits

0xb73b,	// (0x0001ff2c) data_form_wide_pane_t1_ParamLimits

0xabeb,	// (0x0001f3dc) bg_status_flat_pane

0x9a27,	// (0x0001e218) title_pane_t1_ParamLimits

0xc30b,	// (0x00020afc) title_pane_t2_ParamLimits

0xc331,	// (0x00020b22) title_pane_t3_ParamLimits

0xf557,	// (0x00023d48) title_pane_t_ParamLimits

0xcbb1,	// (0x000213a2) level_1_signal_ParamLimits

0xcbbe,	// (0x000213af) level_2_signal_ParamLimits

0xcbcb,	// (0x000213bc) level_3_signal_ParamLimits

0xcbd8,	// (0x000213c9) level_4_signal_ParamLimits

0xcbe5,	// (0x000213d6) level_5_signal_ParamLimits

0xcbf2,	// (0x000213e3) level_6_signal_ParamLimits

0xcbff,	// (0x000213f0) level_7_signal_ParamLimits

0xcbb1,	// (0x000213a2) level_1_battery_ParamLimits

0xcbbe,	// (0x000213af) level_2_battery_ParamLimits

0xcbcb,	// (0x000213bc) level_3_battery_ParamLimits

0xcbd8,	// (0x000213c9) level_4_battery_ParamLimits

0xcbe5,	// (0x000213d6) level_5_battery_ParamLimits

0xcbf2,	// (0x000213e3) level_6_battery_ParamLimits

0xcbff,	// (0x000213f0) level_7_battery_ParamLimits

0x221f,	// (0x00016a10) bg_status_flat_pane_g1

0x2227,	// (0x00016a18) bg_status_flat_pane_g2

0x222f,	// (0x00016a20) bg_status_flat_pane_g3

0x2237,	// (0x00016a28) bg_status_flat_pane_g4

0x223f,	// (0x00016a30) bg_status_flat_pane_g5

0x2247,	// (0x00016a38) bg_status_flat_pane_g6

0x224f,	// (0x00016a40) bg_status_flat_pane_g7

0x9abb,	// (0x0001e2ac) tabs_3_active_pane_t1_ParamLimits

0x9abb,	// (0x0001e2ac) tabs_3_passive_pane_t1_ParamLimits

0x9ad5,	// (0x0001e2c6) tabs_4_active_pane_t1_ParamLimits

0x9ad5,	// (0x0001e2c6) tabs_4_1_passive_pane_t1_ParamLimits

0xa573,	// (0x0001ed64) tabs_2_active_pane_t1_ParamLimits

0xa573,	// (0x0001ed64) tabs_2_passive_pane_t1_ParamLimits

0xc351,	// (0x00020b42) bg_active_tab_pane_cp4_ParamLimits

0xa585,	// (0x0001ed76) tabs_2_long_active_pane_t1_ParamLimits

0x13c2,	// (0x00015bb3) bg_passive_tab_pane_cp4_ParamLimits

0xe97b,	// (0x0002316c) list_single_midp_graphic_pane_t1_ParamLimits

0xc351,	// (0x00020b42) bg_active_tab_pane_cp5_ParamLimits

0xa598,	// (0x0001ed89) tabs_3_long_active_pane_t1_ParamLimits

0x13c2,	// (0x00015bb3) bg_passive_tab_pane_cp5_ParamLimits

0xe97b,	// (0x0002316c) list_single_midp_graphic_pane_t1

0xabeb,	// (0x0001f3dc) bg_status_flat_pane_ParamLimits

0x1584,	// (0x00015d75) indicator_pane_cp2_ParamLimits

0x1584,	// (0x00015d75) indicator_pane_cp2

0xad69,	// (0x0001f55a) navi_pane_srt_ParamLimits

0xad69,	// (0x0001f55a) navi_pane_srt

0x16d3,	// (0x00015ec4) popup_clock_digital_analogue_window_cp1

0xc3af,	// (0x00020ba0) indicator_pane_t1

0x109a,	// (0x0001588b) copy_highlight_pane

0x109a,	// (0x0001588b) cursor_graphics_pane

0x109a,	// (0x0001588b) graphic_within_text_pane

0x109a,	// (0x0001588b) link_highlight_pane

0x2a1e,	// (0x0001720f) popup_preview_text_window_t5_ParamLimits

0x2a1e,	// (0x0001720f) popup_preview_text_window_t5

0x11cc,	// (0x000159bd) cursor_digital_pane

0x11cc,	// (0x000159bd) cursor_primary_pane

0x11dd,	// (0x000159ce) cursor_primary_small_pane

0x11e5,	// (0x000159d6) cursor_secondary_pane

0x11ed,	// (0x000159de) cursor_title_pane

0x11cc,	// (0x000159bd) link_highlight_digital_pane

0x11d4,	// (0x000159c5) link_highlight_primary_pane

0x11dd,	// (0x000159ce) link_highlight_primary_small_pane

0x11e5,	// (0x000159d6) link_highlight_secondary_pane

0x11ed,	// (0x000159de) link_highlight_title_pane

0x11cc,	// (0x000159bd) copy_highlight_digital_pane

0x11cc,	// (0x000159bd) copy_highlight_primary_pane

0x11dd,	// (0x000159ce) copy_highlight_primary_small_pane

0x11e5,	// (0x000159d6) copy_highlight_secondary_pane

0x11ed,	// (0x000159de) copy_highlight_title_pane

0x11e5,	// (0x000159d6) graphic_text_digital_pane

0x22bd,	// (0x00016aae) graphic_text_primary_pane

0x22c6,	// (0x00016ab7) graphic_text_primary_small_pane

0x11dd,	// (0x000159ce) graphic_text_secondary_pane

0x11cc,	// (0x000159bd) graphic_text_title_pane

0xaa15,	// (0x0001f206) cursor_primary_pane_g1

0x22af,	// (0x00016aa0) cursor_text_primary_t1

0xb268,	// (0x0001fa59) cursor_primary_small_pane_g1

0x22a1,	// (0x00016a92) cursor_text_primary_small_t1

0xb25e,	// (0x0001fa4f) cursor_primary_small_pane_g1_copy1

0x2289,	// (0x00016a7a) cursor_text_primary_small_t1_copy1

0x2267,	// (0x00016a58) cursor_text_title_t1

0xb254,	// (0x0001fa45) cursor_title_pane_g1

0xaa15,	// (0x0001f206) cursor_digital_pane_g1

0x11ff,	// (0x000159f0) cursor_text_digital_t1

0x120d,	// (0x000159fe) link_highlight_primary_pane_g1

0x2210,	// (0x00016a01) link_highlight_primary_pane_t1

0x120d,	// (0x000159fe) link_highlight_primary_small_pane_g1

0x1215,	// (0x00015a06) link_highlight_primary_small_pane_t1

0x120d,	// (0x000159fe) link_highlight_secondary_pane_g1

0x1224,	// (0x00015a15) link_highlight_secondary_pane_t1

0x2175,	// (0x00016966) link_highlight_title_pane_g1

0x218c,	// (0x0001697d) link_highlight_title_pane_t1

0x2175,	// (0x00016966) link_highlight_digital_pane_g1

0x217d,	// (0x0001696e) link_highlight_digital_pane_t1

0x202f,	// (0x00016820) copy_highlight_primary_pane_g1

0x2055,	// (0x00016846) copy_highlight_primary_pane_t1

0x202f,	// (0x00016820) copy_highlight_primary_small_pane_g1

0x2046,	// (0x00016837) copy_highlight_primary_small_pane_t1

0x1233,	// (0x00015a24) copy_highlight_secondary_pane_g1

0x123b,	// (0x00015a2c) copy_highlight_secondary_pane_t1

0x202f,	// (0x00016820) copy_highlight_title_pane_g1

0x2037,	// (0x00016828) copy_highlight_title_pane_t1

0x202f,	// (0x00016820) copy_highlight_digital_pane_g1

0x3399,	// (0x00017b8a) copy_highlight_digital_pane_t1

0x32ed,	// (0x00017ade) graphic_text_primary_pane_g1

0x337d,	// (0x00017b6e) graphic_text_primary_pane_t1

0x338b,	// (0x00017b7c) graphic_text_primary_pane_t2

0x0001,

0xf9ae,	// (0x0002419f) graphic_text_primary_pane_t

0x3359,	// (0x00017b4a) graphic_text_primary_small_pane_g1

0x3361,	// (0x00017b52) graphic_text_primary_small_pane_t1

0x336f,	// (0x00017b60) graphic_text_primary_small_pane_t2

0x0001,

0xf9a9,	// (0x0002419a) graphic_text_primary_small_pane_t

0x3335,	// (0x00017b26) graphic_text_secondary_pane_g1

0x333d,	// (0x00017b2e) graphic_text_secondary_pane_t1

0x334b,	// (0x00017b3c) graphic_text_secondary_pane_t2

0x0001,

0xf9a4,	// (0x00024195) graphic_text_secondary_pane_t

0x3311,	// (0x00017b02) graphic_text_title_pane_g1

0x3319,	// (0x00017b0a) graphic_text_title_pane_t1

0x3327,	// (0x00017b18) graphic_text_title_pane_t2

0x0001,

0xf99f,	// (0x00024190) graphic_text_title_pane_t

0x32ed,	// (0x00017ade) graphic_text_digital_pane_g1

0x32f5,	// (0x00017ae6) graphic_text_digital_pane_t1

0x3303,	// (0x00017af4) graphic_text_digital_pane_t2

0x0001,

0xf99a,	// (0x0002418b) graphic_text_digital_pane_t

0xc351,	// (0x00020b42) navi_icon_pane_srt_ParamLimits

0xc351,	// (0x00020b42) navi_icon_pane_srt

0xc2f5,	// (0x00020ae6) navi_midp_pane_srt

0xc2f5,	// (0x00020ae6) navi_navi_pane_srt

0xc351,	// (0x00020b42) navi_text_pane_srt_ParamLimits

0xc351,	// (0x00020b42) navi_text_pane_srt

0x32b8,	// (0x00017aa9) navi_navi_icon_text_pane_srt

0x32c0,	// (0x00017ab1) navi_navi_pane_srt_g1_ParamLimits

0x32c0,	// (0x00017ab1) navi_navi_pane_srt_g1

0x32d2,	// (0x00017ac3) navi_navi_pane_srt_g2_ParamLimits

0x32d2,	// (0x00017ac3) navi_navi_pane_srt_g2

0x0001,

0xf995,	// (0x00024186) navi_navi_pane_srt_g_ParamLimits

0xf995,	// (0x00024186) navi_navi_pane_srt_g

0x32e4,	// (0x00017ad5) navi_navi_tabs_pane_srt

0x32b8,	// (0x00017aa9) navi_navi_text_pane_srt

0x32b8,	// (0x00017aa9) navi_navi_volume_pane_srt

0x32a9,	// (0x00017a9a) navi_navi_text_pane_srt_t1

0xeb7b,	// (0x0002336c) navi_navi_volume_pane_srt_g1

0xeb83,	// (0x00023374) volume_small_pane_srt_ParamLimits

0xeb83,	// (0x00023374) volume_small_pane_srt

0xe797,	// (0x00022f88) volume_small_pane_srt_g1_ParamLimits

0xe797,	// (0x00022f88) volume_small_pane_srt_g1

0xe7a7,	// (0x00022f98) volume_small_pane_srt_g2_ParamLimits

0xe7a7,	// (0x00022f98) volume_small_pane_srt_g2

0xe7b8,	// (0x00022fa9) volume_small_pane_srt_g3_ParamLimits

0xe7b8,	// (0x00022fa9) volume_small_pane_srt_g3

0xe7c9,	// (0x00022fba) volume_small_pane_srt_g4_ParamLimits

0xe7c9,	// (0x00022fba) volume_small_pane_srt_g4

0xe7da,	// (0x00022fcb) volume_small_pane_srt_g5_ParamLimits

0xe7da,	// (0x00022fcb) volume_small_pane_srt_g5

0xe7eb,	// (0x00022fdc) volume_small_pane_srt_g6_ParamLimits

0xe7eb,	// (0x00022fdc) volume_small_pane_srt_g6

0xe7fc,	// (0x00022fed) volume_small_pane_srt_g7_ParamLimits

0xe7fc,	// (0x00022fed) volume_small_pane_srt_g7

0xe80d,	// (0x00022ffe) volume_small_pane_srt_g8_ParamLimits

0xe80d,	// (0x00022ffe) volume_small_pane_srt_g8

0xe81e,	// (0x0002300f) volume_small_pane_srt_g9_ParamLimits

0xe81e,	// (0x0002300f) volume_small_pane_srt_g9

0xe82f,	// (0x00023020) volume_small_pane_srt_g10_ParamLimits

0xe82f,	// (0x00023020) volume_small_pane_srt_g10

0x0009,

0xf749,	// (0x00023f3a) volume_small_pane_srt_g_ParamLimits

0xf749,	// (0x00023f3a) volume_small_pane_srt_g

0x9d2b,	// (0x0001e51c) query_popup_data_pane_cp2

0x328f,	// (0x00017a80) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x328f,	// (0x00017a80) navi_navi_icon_text_pane_srt_t1

0x22bd,	// (0x00016aae) navi_tabs_2_long_pane_srt

0x22bd,	// (0x00016aae) navi_tabs_2_pane_srt

0x22bd,	// (0x00016aae) navi_tabs_3_long_pane_srt

0x22bd,	// (0x00016aae) navi_tabs_3_pane_srt

0x22bd,	// (0x00016aae) navi_tabs_4_pane_srt

0x9258,	// (0x0001da49) tabs_2_active_pane_srt_ParamLimits

0x9258,	// (0x0001da49) tabs_2_active_pane_srt

0x9268,	// (0x0001da59) tabs_2_passive_pane_srt_ParamLimits

0x9268,	// (0x0001da59) tabs_2_passive_pane_srt

0x1a33,	// (0x00016224) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1a33,	// (0x00016224) bg_passive_tab_pane_cp1_srt

0xb8ec,	// (0x000200dd) bg_passive_tab_pane_g1_cp1_srt

0xa880,	// (0x0001f071) bg_passive_tab_pane_g2_cp1_srt

0xb8f5,	// (0x000200e6) bg_passive_tab_pane_g3_cp1_srt

0xc343,	// (0x00020b34) bg_active_tab_pane_cp1_srt_ParamLimits

0xc343,	// (0x00020b34) bg_active_tab_pane_cp1_srt

0xb8fe,	// (0x000200ef) tabs_2_active_pane_srt_g1

0xb906,	// (0x000200f7) tabs_2_active_pane_srt_t1_ParamLimits

0xb906,	// (0x000200f7) tabs_2_active_pane_srt_t1

0xb8ec,	// (0x000200dd) bg_active_tab_pane_g1_cp1_srt

0xa880,	// (0x0001f071) bg_active_tab_pane_g2_cp1_srt

0xb8f5,	// (0x000200e6) bg_active_tab_pane_g3_cp1_srt

0x9225,	// (0x0001da16) tabs_3_active_pane_srt_ParamLimits

0x9225,	// (0x0001da16) tabs_3_active_pane_srt

0x9236,	// (0x0001da27) tabs_3_passive_pane_cp_srt_ParamLimits

0x9236,	// (0x0001da27) tabs_3_passive_pane_cp_srt

0x9247,	// (0x0001da38) tabs_3_passive_pane_srt_ParamLimits

0x9247,	// (0x0001da38) tabs_3_passive_pane_srt

0x1a33,	// (0x00016224) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1a33,	// (0x00016224) bg_passive_tab_pane_cp2_srt

0xaa1f,	// (0x0001f210) bg_passive_tab_pane_g1_cp2_srt

0xa880,	// (0x0001f071) bg_passive_tab_pane_g2_cp2_srt

0xaa28,	// (0x0001f219) bg_passive_tab_pane_g3_cp2_srt

0xc343,	// (0x00020b34) bg_active_tab_pane_cp2_srt_ParamLimits

0xc343,	// (0x00020b34) bg_active_tab_pane_cp2_srt

0xb8ce,	// (0x000200bf) tabs_3_active_pane_srt_g1

0xb8d6,	// (0x000200c7) tabs_3_active_pane_srt_t1_ParamLimits

0xb8d6,	// (0x000200c7) tabs_3_active_pane_srt_t1

0xaa1f,	// (0x0001f210) bg_active_tab_pane_g1_cp2_srt

0xa880,	// (0x0001f071) bg_active_tab_pane_g2_cp2_srt

0xaa28,	// (0x0001f219) bg_active_tab_pane_g3_cp2_srt

0xeb33,	// (0x00023324) tabs_4_active_pane_srt_ParamLimits

0xeb33,	// (0x00023324) tabs_4_active_pane_srt

0xeb45,	// (0x00023336) tabs_4_passive_pane_cp2_srt_ParamLimits

0xeb45,	// (0x00023336) tabs_4_passive_pane_cp2_srt

0xe84f,	// (0x00023040) aid_size_cell_toolbar

0x2dcd,	// (0x000175be) main_idle_act_pane_ParamLimits

0x8b18,	// (0x0001d309) popup_large_graphic_colour_window_ParamLimits

0x900c,	// (0x0001d7fd) popup_toolbar_window_ParamLimits

0x900c,	// (0x0001d7fd) popup_toolbar_window

0x2fd0,	// (0x000177c1) list_single_graphic_2heading_pane_ParamLimits

0x2fd0,	// (0x000177c1) list_single_graphic_2heading_pane

0xca99,	// (0x0002128a) aid_size_cell_apps_grid_lsc_pane

0xcaab,	// (0x0002129c) aid_size_cell_apps_grid_prt_pane

0x13c2,	// (0x00015bb3) bg_wml_button_pane_cp1_ParamLimits

0x13c2,	// (0x00015bb3) bg_wml_button_pane_cp1

0xafe3,	// (0x0001f7d4) form_midp_field_text_pane_t1_ParamLimits

0x1a33,	// (0x00016224) input_focus_pane_cp050_ParamLimits

0x1cb2,	// (0x000164a3) list_midp_form_text_pane_ParamLimits

0x1c55,	// (0x00016446) input_focus_pane_cp051_ParamLimits

0x1c69,	// (0x0001645a) list_midp_choice_pane_ParamLimits

0xaf48,	// (0x0001f739) list_single_2graphic_pane_cp3_ParamLimits

0xaf48,	// (0x0001f739) list_single_2graphic_pane_cp3

0xaf5c,	// (0x0001f74d) list_single_midp_graphic_pane_ParamLimits

0xaf5c,	// (0x0001f74d) list_single_midp_graphic_pane

0xe8ad,	// (0x0002309e) list_single_graphic_2heading_pane_g1_ParamLimits

0xe8ad,	// (0x0002309e) list_single_graphic_2heading_pane_g1

0xe8b9,	// (0x000230aa) list_single_graphic_2heading_pane_g4_ParamLimits

0xe8b9,	// (0x000230aa) list_single_graphic_2heading_pane_g4

0xe8c5,	// (0x000230b6) list_single_graphic_2heading_pane_g5_ParamLimits

0xe8c5,	// (0x000230b6) list_single_graphic_2heading_pane_g5

0x0002,

0xf79c,	// (0x00023f8d) list_single_graphic_2heading_pane_g_ParamLimits

0xf79c,	// (0x00023f8d) list_single_graphic_2heading_pane_g

0xe8d1,	// (0x000230c2) list_single_graphic_2heading_pane_t1_ParamLimits

0xe8d1,	// (0x000230c2) list_single_graphic_2heading_pane_t1

0xe8e5,	// (0x000230d6) list_single_graphic_2heading_pane_t2_ParamLimits

0xe8e5,	// (0x000230d6) list_single_graphic_2heading_pane_t2

0xe8ff,	// (0x000230f0) list_single_graphic_2heading_pane_t3_ParamLimits

0xe8ff,	// (0x000230f0) list_single_graphic_2heading_pane_t3

0x0002,

0xf7a3,	// (0x00023f94) list_single_graphic_2heading_pane_t_ParamLimits

0xf7a3,	// (0x00023f94) list_single_graphic_2heading_pane_t

0x182f,	// (0x00016020) bg_popup_sub_pane_cp2

0x1859,	// (0x0001604a) grid_toobar_pane

0xe917,	// (0x00023108) cell_toolbar_pane_ParamLimits

0xe917,	// (0x00023108) cell_toolbar_pane

0x18b7,	// (0x000160a8) cell_toolbar_pane_g1_ParamLimits

0x18b7,	// (0x000160a8) cell_toolbar_pane_g1

0xaf08,	// (0x0001f6f9) cell_toolbar_pane_g2_ParamLimits

0xaf08,	// (0x0001f6f9) cell_toolbar_pane_g2

0x0001,

0xf7aa,	// (0x00023f9b) cell_toolbar_pane_g_ParamLimits

0xf7aa,	// (0x00023f9b) cell_toolbar_pane_g

0x18ed,	// (0x000160de) grid_highlight_pane_cp2_ParamLimits

0x18ed,	// (0x000160de) grid_highlight_pane_cp2

0x1907,	// (0x000160f8) toolbar_button_pane

0x1913,	// (0x00016104) toolbar_button_pane_g1

0x191b,	// (0x0001610c) toolbar_button_pane_g2

0x1923,	// (0x00016114) toolbar_button_pane_g3

0x192b,	// (0x0001611c) toolbar_button_pane_g4

0x1933,	// (0x00016124) toolbar_button_pane_g5

0x193b,	// (0x0001612c) toolbar_button_pane_g6

0x1943,	// (0x00016134) toolbar_button_pane_g7

0x194b,	// (0x0001613c) toolbar_button_pane_g8

0x1953,	// (0x00016144) toolbar_button_pane_g9

0x0009,

0xf7af,	// (0x00023fa0) toolbar_button_pane_g

0xe94f,	// (0x00023140) list_single_2graphic_pane_g1_cp3_ParamLimits

0xe94f,	// (0x00023140) list_single_2graphic_pane_g1_cp3

0x90b9,	// (0x0001d8aa) list_single_2graphic_pane_g2_cp3_ParamLimits

0x90b9,	// (0x0001d8aa) list_single_2graphic_pane_g2_cp3

0xe95b,	// (0x0002314c) list_single_2graphic_pane_g3_cp3

0xe963,	// (0x00023154) list_single_2graphic_pane_g4_cp3_ParamLimits

0xe963,	// (0x00023154) list_single_2graphic_pane_g4_cp3

0x90ca,	// (0x0001d8bb) list_single_2graphic_pane_t1_cp3_ParamLimits

0x90ca,	// (0x0001d8bb) list_single_2graphic_pane_t1_cp3

0xe96f,	// (0x00023160) list_single_midp_graphic_pane_g2_ParamLimits

0xe96f,	// (0x00023160) list_single_midp_graphic_pane_g2

0xe857,	// (0x00023048) aid_zoom_text_primary

0xe85f,	// (0x00023050) aid_zoom_text_secondary

0xaa7f,	// (0x0001f270) status_small_pane_g7_ParamLimits

0xaa7f,	// (0x0001f270) status_small_pane_g7

0xaaa2,	// (0x0001f293) status_small_pane_t1_ParamLimits

0x9a03,	// (0x0001e1f4) title_pane_g2

0x0003,

0xf54e,	// (0x00023d3f) title_pane_g

0x9d85,	// (0x0001e576) aid_size_cell_colour_1_pane_ParamLimits

0x9d85,	// (0x0001e576) aid_size_cell_colour_1_pane

0x9d99,	// (0x0001e58a) aid_size_cell_colour_2_pane_ParamLimits

0x9d99,	// (0x0001e58a) aid_size_cell_colour_2_pane

0x9dad,	// (0x0001e59e) aid_size_cell_colour_3_pane_ParamLimits

0x9dad,	// (0x0001e59e) aid_size_cell_colour_3_pane

0x9dc1,	// (0x0001e5b2) aid_size_cell_colour_4_pane_ParamLimits

0x9dc1,	// (0x0001e5b2) aid_size_cell_colour_4_pane

0xe2f9,	// (0x00022aea) title_pane_stacon_g1_ParamLimits

0xe2f9,	// (0x00022aea) title_pane_stacon_g1

0x20ac,	// (0x0001689d) popup_note_wait_window_g3_ParamLimits

0x20ac,	// (0x0001689d) popup_note_wait_window_g3

0x2122,	// (0x00016913) popup_note_wait_window_t5_ParamLimits

0x2122,	// (0x00016913) popup_note_wait_window_t5

0xc2f5,	// (0x00020ae6) main_feb_china_hwr_fs_writing_pane

0x899a,	// (0x0001d18b) popup_feb_china_hwr_fs_window_ParamLimits

0x899a,	// (0x0001d18b) popup_feb_china_hwr_fs_window

0x90e6,	// (0x0001d8d7) aid_size_cell_hwr_fs_ParamLimits

0x90e6,	// (0x0001d8d7) aid_size_cell_hwr_fs

0x1a33,	// (0x00016224) bg_popup_sub_pane_cp3_ParamLimits

0x1a33,	// (0x00016224) bg_popup_sub_pane_cp3

0x90fb,	// (0x0001d8ec) grid_hwr_fs_pane_ParamLimits

0x90fb,	// (0x0001d8ec) grid_hwr_fs_pane

0xe991,	// (0x00023182) linegrid_hwr_fs_pane_ParamLimits

0xe991,	// (0x00023182) linegrid_hwr_fs_pane

0x9113,	// (0x0001d904) cell_hwr_fs_pane_ParamLimits

0x9113,	// (0x0001d904) cell_hwr_fs_pane

0x1a3f,	// (0x00016230) linegrid_hwr_fs_pane_g1_ParamLimits

0x1a3f,	// (0x00016230) linegrid_hwr_fs_pane_g1

0xaf1c,	// (0x0001f70d) linegrid_hwr_fs_pane_g2_ParamLimits

0xaf1c,	// (0x0001f70d) linegrid_hwr_fs_pane_g2

0x1a5d,	// (0x0001624e) linegrid_hwr_fs_pane_g3_ParamLimits

0x1a5d,	// (0x0001624e) linegrid_hwr_fs_pane_g3

0x9139,	// (0x0001d92a) linegrid_hwr_fs_pane_g4_ParamLimits

0x9139,	// (0x0001d92a) linegrid_hwr_fs_pane_g4

0xe9a1,	// (0x00023192) linegrid_hwr_fs_pane_g5_ParamLimits

0xe9a1,	// (0x00023192) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d5,	// (0x00023fc6) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d5,	// (0x00023fc6) linegrid_hwr_fs_pane_g

0x1a69,	// (0x0001625a) cell_hwr_fs_pane_g1_ParamLimits

0x1a69,	// (0x0001625a) cell_hwr_fs_pane_g1

0x1769,	// (0x00015f5a) cell_hwr_fs_pane_g2_ParamLimits

0x1769,	// (0x00015f5a) cell_hwr_fs_pane_g2

0xaf2e,	// (0x0001f71f) cell_hwr_fs_pane_g3_ParamLimits

0xaf2e,	// (0x0001f71f) cell_hwr_fs_pane_g3

0xaf3b,	// (0x0001f72c) cell_hwr_fs_pane_g4_ParamLimits

0xaf3b,	// (0x0001f72c) cell_hwr_fs_pane_g4

0x0003,

0xf7e0,	// (0x00023fd1) cell_hwr_fs_pane_g_ParamLimits

0xf7e0,	// (0x00023fd1) cell_hwr_fs_pane_g

0x9153,	// (0x0001d944) cell_hwr_fs_pane_t1

0xc2f5,	// (0x00020ae6) grid_highlight_pane_cp6

0xc2f5,	// (0x00020ae6) main_idle_act2_pane

0xc8ef,	// (0x000210e0) aid_inside_area_popup_secondary

0xb387,	// (0x0001fb78) aid_inside_area_window_primary_ParamLimits

0xb387,	// (0x0001fb78) aid_inside_area_window_primary

0xb924,	// (0x00020115) ai2_news_ticker_pane

0x33b0,	// (0x00017ba1) aid_size_cell_ai1_link_ParamLimits

0x33b0,	// (0x00017ba1) aid_size_cell_ai1_link

0xb92c,	// (0x0002011d) popup_ai2_data_window_ParamLimits

0xb92c,	// (0x0002011d) popup_ai2_data_window

0x33e0,	// (0x00017bd1) popup_ai2_link_window_ParamLimits

0x33e0,	// (0x00017bd1) popup_ai2_link_window

0x1a33,	// (0x00016224) bg_popup_sub_pane_cp4_ParamLimits

0x1a33,	// (0x00016224) bg_popup_sub_pane_cp4

0x33f4,	// (0x00017be5) grid_ai2_link_pane_ParamLimits

0x33f4,	// (0x00017be5) grid_ai2_link_pane

0x340b,	// (0x00017bfc) popup_ai2_link_window_g1_ParamLimits

0x340b,	// (0x00017bfc) popup_ai2_link_window_g1

0x3417,	// (0x00017c08) popup_ai2_link_window_g2_ParamLimits

0x3417,	// (0x00017c08) popup_ai2_link_window_g2

0x0001,

0xf9b3,	// (0x000241a4) popup_ai2_link_window_g_ParamLimits

0xf9b3,	// (0x000241a4) popup_ai2_link_window_g

0x3426,	// (0x00017c17) ai2_mp_button_pane

0x342e,	// (0x00017c1f) ai2_mp_volume_pane

0x1c55,	// (0x00016446) bg_popup_sub_pane_cp5_ParamLimits

0x1c55,	// (0x00016446) bg_popup_sub_pane_cp5

0x3436,	// (0x00017c27) heading_ai2_gene_pane_ParamLimits

0x3436,	// (0x00017c27) heading_ai2_gene_pane

0x3442,	// (0x00017c33) list_ai2_gene_pane_ParamLimits

0x3442,	// (0x00017c33) list_ai2_gene_pane

0x348a,	// (0x00017c7b) cell_ai2_link_pane_ParamLimits

0x348a,	// (0x00017c7b) cell_ai2_link_pane

0x34a0,	// (0x00017c91) cell_ai2_link_pane_g1

0xc2f5,	// (0x00020ae6) grid_highlight_pane_cp7

0xeb98,	// (0x00023389) ai2_mp_volume_pane_g1

0x3570,	// (0x00017d61) ai2_mp_volume_pane_g2

0x34e5,	// (0x00017cd6) list_ai2_gene_pane_t1

0x3578,	// (0x00017d69) ai2_mp_volume_pane_g3

0x0002,

0xf9cc,	// (0x000241bd) ai2_mp_volume_pane_g

0x9278,	// (0x0001da69) volume_small_pane_cp3

0x3580,	// (0x00017d71) aid_size_cell_ai2_button

0x3588,	// (0x00017d79) grid_ai2_button_pane

0x3591,	// (0x00017d82) cell_ai2_button_pane_ParamLimits

0x3591,	// (0x00017d82) cell_ai2_button_pane

0xc2eb,	// (0x00020adc) cell_ai2_button_pane_g1

0xc2f5,	// (0x00020ae6) grid_highlight_pane_cp8

0x3530,	// (0x00017d21) ai2_gene_pane_t1_ParamLimits

0x3530,	// (0x00017d21) ai2_gene_pane_t1

0x8904,	// (0x0001d0f5) aid_height_parent_landscape

0xb5e7,	// (0x0001fdd8) aid_height_set_list

0x2dcd,	// (0x000175be) aid_size_parent

0xb8a2,	// (0x00020093) aid_size_cell_graphic_pane_ParamLimits

0x3452,	// (0x00017c43) popup_ai2_data_window_g1_ParamLimits

0x3452,	// (0x00017c43) popup_ai2_data_window_g1

0x345e,	// (0x00017c4f) ai2_news_ticker_pane_g1

0x3466,	// (0x00017c57) ai2_news_ticker_pane_g2

0x0001,

0xf9b8,	// (0x000241a9) ai2_news_ticker_pane_g

0x346e,	// (0x00017c5f) ai2_news_ticker_pane_t1

0x347c,	// (0x00017c6d) ai2_news_ticker_pane_t2

0x0001,

0xf9bd,	// (0x000241ae) ai2_news_ticker_pane_t

0x34a9,	// (0x00017c9a) heading_ai2_gene_pane_g1

0x34b1,	// (0x00017ca2) heading_ai2_gene_pane_t1_ParamLimits

0x34b1,	// (0x00017ca2) heading_ai2_gene_pane_t1

0x34c6,	// (0x00017cb7) list_highlight_pane_cp6

0x34ce,	// (0x00017cbf) ai2_gene_pane_ParamLimits

0x34ce,	// (0x00017cbf) ai2_gene_pane

0x34f3,	// (0x00017ce4) list_ai2_gene_pane_t2

0x0001,

0xf9c2,	// (0x000241b3) list_ai2_gene_pane_t

0x3501,	// (0x00017cf2) list_highlight_pane_cp8_ParamLimits

0x3501,	// (0x00017cf2) list_highlight_pane_cp8

0x3512,	// (0x00017d03) ai2_gene_pane_g1_ParamLimits

0x3512,	// (0x00017d03) ai2_gene_pane_g1

0x3524,	// (0x00017d15) ai2_gene_pane_g2_ParamLimits

0x3524,	// (0x00017d15) ai2_gene_pane_g2

0x0001,

0xf9c7,	// (0x000241b8) ai2_gene_pane_g_ParamLimits

0xf9c7,	// (0x000241b8) ai2_gene_pane_g

0xc6bc,	// (0x00020ead) scroll_pane_cp12

0x88c1,	// (0x0001d0b2) control_pane_t3_ParamLimits

0x88c1,	// (0x0001d0b2) control_pane_t3

0xaa93,	// (0x0001f284) status_small_pane_g8_ParamLimits

0xaa93,	// (0x0001f284) status_small_pane_g8

0x8a5d,	// (0x0001d24e) popup_find_window_ParamLimits

0x8d10,	// (0x0001d501) popup_note_image_window_ParamLimits

0x1895,	// (0x00016086) list_double2_graphic_pane_vc_g1_ParamLimits

0x1895,	// (0x00016086) list_double2_graphic_pane_vc_g1

0xc6cd,	// (0x00020ebe) list_double2_graphic_pane_vc_g2_ParamLimits

0xc6cd,	// (0x00020ebe) list_double2_graphic_pane_vc_g2

0xc6d9,	// (0x00020eca) list_double2_graphic_pane_vc_g3_ParamLimits

0xc6d9,	// (0x00020eca) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x00023db2) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x00023db2) list_double2_graphic_pane_vc_g

0x18a1,	// (0x00016092) list_double2_graphic_pane_vc_t1_ParamLimits

0x18a1,	// (0x00016092) list_double2_graphic_pane_vc_t1

0xc6cd,	// (0x00020ebe) list_single_heading_pane_vc_g1_ParamLimits

0xc6cd,	// (0x00020ebe) list_single_heading_pane_vc_g1

0xc6d9,	// (0x00020eca) list_single_heading_pane_vc_g2_ParamLimits

0xc6d9,	// (0x00020eca) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023db9) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023db9) list_single_heading_pane_vc_g

0x195b,	// (0x0001614c) list_single_heading_pane_vc_t1_ParamLimits

0x195b,	// (0x0001614c) list_single_heading_pane_vc_t1

0x1971,	// (0x00016162) list_single_heading_pane_vc_t2_ParamLimits

0x1971,	// (0x00016162) list_single_heading_pane_vc_t2

0x0001,

0xf7c4,	// (0x00023fb5) list_single_heading_pane_vc_t_ParamLimits

0xf7c4,	// (0x00023fb5) list_single_heading_pane_vc_t

0x1983,	// (0x00016174) list_setting_number_pane_vc_g1_ParamLimits

0x1983,	// (0x00016174) list_setting_number_pane_vc_g1

0x198f,	// (0x00016180) list_setting_number_pane_vc_g2_ParamLimits

0x198f,	// (0x00016180) list_setting_number_pane_vc_g2

0x0001,

0xf7c9,	// (0x00023fba) list_setting_number_pane_vc_g_ParamLimits

0xf7c9,	// (0x00023fba) list_setting_number_pane_vc_g

0x199b,	// (0x0001618c) list_setting_number_pane_vc_t1_ParamLimits

0x199b,	// (0x0001618c) list_setting_number_pane_vc_t1

0x19af,	// (0x000161a0) list_setting_number_pane_vc_t2_ParamLimits

0x19af,	// (0x000161a0) list_setting_number_pane_vc_t2

0x19cb,	// (0x000161bc) list_setting_number_pane_vc_t3_ParamLimits

0x19cb,	// (0x000161bc) list_setting_number_pane_vc_t3

0x0002,

0xf7ce,	// (0x00023fbf) list_setting_number_pane_vc_t_ParamLimits

0xf7ce,	// (0x00023fbf) list_setting_number_pane_vc_t

0x19f7,	// (0x000161e8) set_value_pane_vc_ParamLimits

0x19f7,	// (0x000161e8) set_value_pane_vc

0x2fd0,	// (0x000177c1) list_double2_graphic_pane_vc_ParamLimits

0x2fd0,	// (0x000177c1) list_double2_graphic_pane_vc

0x2fd0,	// (0x000177c1) list_double2_large_graphic_pane_vc_ParamLimits

0x2fd0,	// (0x000177c1) list_double2_large_graphic_pane_vc

0x2fd0,	// (0x000177c1) list_double2_pane_vc_ParamLimits

0x2fd0,	// (0x000177c1) list_double2_pane_vc

0x2fd0,	// (0x000177c1) list_double_graphic_heading_pane_vc_ParamLimits

0x2fd0,	// (0x000177c1) list_double_graphic_heading_pane_vc

0x2fd0,	// (0x000177c1) list_double_graphic_pane_vc_ParamLimits

0x2fd0,	// (0x000177c1) list_double_graphic_pane_vc

0x2fd0,	// (0x000177c1) list_double_heading_pane_vc_ParamLimits

0x2fd0,	// (0x000177c1) list_double_heading_pane_vc

0x2fe2,	// (0x000177d3) list_double_large_graphic_pane_vc_ParamLimits

0x2fe2,	// (0x000177d3) list_double_large_graphic_pane_vc

0x2fd0,	// (0x000177c1) list_double_number_pane_vc_ParamLimits

0x2fd0,	// (0x000177c1) list_double_number_pane_vc

0x2fd0,	// (0x000177c1) list_double_pane_vc_ParamLimits

0x2fd0,	// (0x000177c1) list_double_pane_vc

0x2fd0,	// (0x000177c1) list_double_time_pane_vc_ParamLimits

0x2fd0,	// (0x000177c1) list_double_time_pane_vc

0x2fd0,	// (0x000177c1) list_setting_number_pane_vc_ParamLimits

0x2fd0,	// (0x000177c1) list_setting_number_pane_vc

0x2fd0,	// (0x000177c1) list_setting_pane_vc_ParamLimits

0x2fd0,	// (0x000177c1) list_setting_pane_vc

0x2fd0,	// (0x000177c1) list_single_graphic_heading_pane_vc_ParamLimits

0x2fd0,	// (0x000177c1) list_single_graphic_heading_pane_vc

0x2fd0,	// (0x000177c1) list_single_heading_pane_vc_ParamLimits

0x2fd0,	// (0x000177c1) list_single_heading_pane_vc

0x2fd0,	// (0x000177c1) list_single_number_heading_pane_vc_ParamLimits

0x2fd0,	// (0x000177c1) list_single_number_heading_pane_vc

0x35c5,	// (0x00017db6) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x35c5,	// (0x00017db6) list_double_graphic_heading_pane_vc_g1

0xc6cd,	// (0x00020ebe) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc6cd,	// (0x00020ebe) list_double_graphic_heading_pane_vc_g2

0xc6d9,	// (0x00020eca) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xc6d9,	// (0x00020eca) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9d3,	// (0x000241c4) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9d3,	// (0x000241c4) list_double_graphic_heading_pane_vc_g

0x35d1,	// (0x00017dc2) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x35d1,	// (0x00017dc2) list_double_graphic_heading_pane_vc_t1

0x35e5,	// (0x00017dd6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x35e5,	// (0x00017dd6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9da,	// (0x000241cb) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9da,	// (0x000241cb) list_double_graphic_heading_pane_vc_t

0x1983,	// (0x00016174) list_setting_pane_vc_g1_ParamLimits

0x1983,	// (0x00016174) list_setting_pane_vc_g1

0x198f,	// (0x00016180) list_setting_pane_vc_g2_ParamLimits

0x198f,	// (0x00016180) list_setting_pane_vc_g2

0x0001,

0xf7c9,	// (0x00023fba) list_setting_pane_vc_g_ParamLimits

0xf7c9,	// (0x00023fba) list_setting_pane_vc_g

0x37fd,	// (0x00017fee) list_setting_pane_vc_t1_ParamLimits

0x37fd,	// (0x00017fee) list_setting_pane_vc_t1

0x3819,	// (0x0001800a) list_setting_pane_vc_t2_ParamLimits

0x3819,	// (0x0001800a) list_setting_pane_vc_t2

0x0001,

0xfa1d,	// (0x0002420e) list_setting_pane_vc_t_ParamLimits

0xfa1d,	// (0x0002420e) list_setting_pane_vc_t

0x19f7,	// (0x000161e8) set_value_pane_cp_vc_ParamLimits

0x19f7,	// (0x000161e8) set_value_pane_cp_vc

0xc6cd,	// (0x00020ebe) list_single_number_heading_pane_vc_g1_ParamLimits

0xc6cd,	// (0x00020ebe) list_single_number_heading_pane_vc_g1

0xc6d9,	// (0x00020eca) list_single_number_heading_pane_vc_g2_ParamLimits

0xc6d9,	// (0x00020eca) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023db9) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023db9) list_single_number_heading_pane_vc_g

0x3833,	// (0x00018024) list_single_number_heading_pane_vc_t1_ParamLimits

0x3833,	// (0x00018024) list_single_number_heading_pane_vc_t1

0x3849,	// (0x0001803a) list_single_number_heading_pane_vc_t2_ParamLimits

0x3849,	// (0x0001803a) list_single_number_heading_pane_vc_t2

0x385b,	// (0x0001804c) list_single_number_heading_pane_vc_t3_ParamLimits

0x385b,	// (0x0001804c) list_single_number_heading_pane_vc_t3

0x0002,

0xfa22,	// (0x00024213) list_single_number_heading_pane_vc_t_ParamLimits

0xfa22,	// (0x00024213) list_single_number_heading_pane_vc_t

0x386d,	// (0x0001805e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x386d,	// (0x0001805e) list_single_graphic_heading_pane_vc_g1

0xc6cd,	// (0x00020ebe) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc6cd,	// (0x00020ebe) list_single_graphic_heading_pane_vc_g4

0xc6d9,	// (0x00020eca) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xc6d9,	// (0x00020eca) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa29,	// (0x0002421a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa29,	// (0x0002421a) list_single_graphic_heading_pane_vc_g

0x3879,	// (0x0001806a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3879,	// (0x0001806a) list_single_graphic_heading_pane_vc_t1

0x388f,	// (0x00018080) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x388f,	// (0x00018080) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa30,	// (0x00024221) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa30,	// (0x00024221) list_single_graphic_heading_pane_vc_t

0xc6cd,	// (0x00020ebe) list_double2_pane_vc_g1_ParamLimits

0xc6cd,	// (0x00020ebe) list_double2_pane_vc_g1

0xc6d9,	// (0x00020eca) list_double2_pane_vc_g2_ParamLimits

0xc6d9,	// (0x00020eca) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023db9) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023db9) list_double2_pane_vc_g

0x38a1,	// (0x00018092) list_double2_pane_vc_t1_ParamLimits

0x38a1,	// (0x00018092) list_double2_pane_vc_t1

0x38b9,	// (0x000180aa) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x38b9,	// (0x000180aa) list_double2_large_graphic_pane_vc_g1

0xc6cd,	// (0x00020ebe) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xc6cd,	// (0x00020ebe) list_double2_large_graphic_pane_vc_g2

0xc6d9,	// (0x00020eca) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xc6d9,	// (0x00020eca) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00023dd6) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00023dd6) list_double2_large_graphic_pane_vc_g

0x18a1,	// (0x00016092) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x18a1,	// (0x00016092) list_double2_large_graphic_pane_vc_t1

0x38c5,	// (0x000180b6) list_double_time_pane_vc_g1_ParamLimits

0x38c5,	// (0x000180b6) list_double_time_pane_vc_g1

0x38d1,	// (0x000180c2) list_double_time_pane_vc_g2_ParamLimits

0x38d1,	// (0x000180c2) list_double_time_pane_vc_g2

0x0001,

0xfa35,	// (0x00024226) list_double_time_pane_vc_g_ParamLimits

0xfa35,	// (0x00024226) list_double_time_pane_vc_g

0x38dd,	// (0x000180ce) list_double_time_pane_vc_t1_ParamLimits

0x38dd,	// (0x000180ce) list_double_time_pane_vc_t1

0x3901,	// (0x000180f2) list_double_time_pane_vc_t2_ParamLimits

0x3901,	// (0x000180f2) list_double_time_pane_vc_t2

0x3930,	// (0x00018121) list_double_time_pane_vc_t3_ParamLimits

0x3930,	// (0x00018121) list_double_time_pane_vc_t3

0x3942,	// (0x00018133) list_double_time_pane_vc_t4_ParamLimits

0x3942,	// (0x00018133) list_double_time_pane_vc_t4

0x0003,

0xfa3a,	// (0x0002422b) list_double_time_pane_vc_t_ParamLimits

0xfa3a,	// (0x0002422b) list_double_time_pane_vc_t

0xc6cd,	// (0x00020ebe) list_double_pane_vc_g1_ParamLimits

0xc6cd,	// (0x00020ebe) list_double_pane_vc_g1

0xc6d9,	// (0x00020eca) list_double_pane_vc_g2_ParamLimits

0xc6d9,	// (0x00020eca) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023db9) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023db9) list_double_pane_vc_g

0x3956,	// (0x00018147) list_double_pane_vc_t1_ParamLimits

0x3956,	// (0x00018147) list_double_pane_vc_t1

0x396a,	// (0x0001815b) list_double_pane_vc_t2_ParamLimits

0x396a,	// (0x0001815b) list_double_pane_vc_t2

0x0001,

0xfa43,	// (0x00024234) list_double_pane_vc_t_ParamLimits

0xfa43,	// (0x00024234) list_double_pane_vc_t

0xc6cd,	// (0x00020ebe) list_double_number_pane_vc_g1_ParamLimits

0xc6cd,	// (0x00020ebe) list_double_number_pane_vc_g1

0xc6d9,	// (0x00020eca) list_double_number_pane_vc_g2_ParamLimits

0xc6d9,	// (0x00020eca) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023db9) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023db9) list_double_number_pane_vc_g

0x3982,	// (0x00018173) list_double_number_pane_vc_t1_ParamLimits

0x3982,	// (0x00018173) list_double_number_pane_vc_t1

0x3956,	// (0x00018147) list_double_number_pane_vc_t2_ParamLimits

0x3956,	// (0x00018147) list_double_number_pane_vc_t2

0x3994,	// (0x00018185) list_double_number_pane_vc_t3_ParamLimits

0x3994,	// (0x00018185) list_double_number_pane_vc_t3

0x0002,

0xfa48,	// (0x00024239) list_double_number_pane_vc_t_ParamLimits

0xfa48,	// (0x00024239) list_double_number_pane_vc_t

0x39ac,	// (0x0001819d) list_double_large_graphic_pane_vc_g1_ParamLimits

0x39ac,	// (0x0001819d) list_double_large_graphic_pane_vc_g1

0x39ce,	// (0x000181bf) list_double_large_graphic_pane_vc_g2_ParamLimits

0x39ce,	// (0x000181bf) list_double_large_graphic_pane_vc_g2

0x39e2,	// (0x000181d3) list_double_large_graphic_pane_vc_g3_ParamLimits

0x39e2,	// (0x000181d3) list_double_large_graphic_pane_vc_g3

0x39f1,	// (0x000181e2) list_double_large_graphic_pane_vc_g4_ParamLimits

0x39f1,	// (0x000181e2) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4f,	// (0x00024240) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4f,	// (0x00024240) list_double_large_graphic_pane_vc_g

0x39fd,	// (0x000181ee) list_double_large_graphic_pane_vc_t1_ParamLimits

0x39fd,	// (0x000181ee) list_double_large_graphic_pane_vc_t1

0x3a19,	// (0x0001820a) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3a19,	// (0x0001820a) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa58,	// (0x00024249) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa58,	// (0x00024249) list_double_large_graphic_pane_vc_t

0xc6cd,	// (0x00020ebe) list_double_heading_pane_vc_g1_ParamLimits

0xc6cd,	// (0x00020ebe) list_double_heading_pane_vc_g1

0xc6d9,	// (0x00020eca) list_double_heading_pane_vc_g2_ParamLimits

0xc6d9,	// (0x00020eca) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023db9) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023db9) list_double_heading_pane_vc_g

0x3a3b,	// (0x0001822c) list_double_heading_pane_vc_t1_ParamLimits

0x3a3b,	// (0x0001822c) list_double_heading_pane_vc_t1

0x3a4f,	// (0x00018240) list_double_heading_pane_vc_t2_ParamLimits

0x3a4f,	// (0x00018240) list_double_heading_pane_vc_t2

0x0001,

0xfa5d,	// (0x0002424e) list_double_heading_pane_vc_t_ParamLimits

0xfa5d,	// (0x0002424e) list_double_heading_pane_vc_t

0x3a67,	// (0x00018258) list_double_graphic_pane_vc_g1_ParamLimits

0x3a67,	// (0x00018258) list_double_graphic_pane_vc_g1

0x3a7a,	// (0x0001826b) list_double_graphic_pane_vc_g2_ParamLimits

0x3a7a,	// (0x0001826b) list_double_graphic_pane_vc_g2

0xc6cd,	// (0x00020ebe) list_double_graphic_pane_vc_g3_ParamLimits

0xc6cd,	// (0x00020ebe) list_double_graphic_pane_vc_g3

0x0003,

0xfa62,	// (0x00024253) list_double_graphic_pane_vc_g_ParamLimits

0xfa62,	// (0x00024253) list_double_graphic_pane_vc_g

0x3a97,	// (0x00018288) list_double_graphic_pane_vc_t1_ParamLimits

0x3a97,	// (0x00018288) list_double_graphic_pane_vc_t1

0x3ab6,	// (0x000182a7) list_double_graphic_pane_vc_t2_ParamLimits

0x3ab6,	// (0x000182a7) list_double_graphic_pane_vc_t2

0x0001,

0xfa6b,	// (0x0002425c) list_double_graphic_pane_vc_t_ParamLimits

0xfa6b,	// (0x0002425c) list_double_graphic_pane_vc_t

0xe13d,	// (0x0002292e) aid_size_cell_fastswap

0x847c,	// (0x0001cc6d) aid_size_cell_touch_ParamLimits

0x847c,	// (0x0001cc6d) aid_size_cell_touch

0xe29e,	// (0x00022a8f) popup_fast_swap_wide_window_ParamLimits

0xe29e,	// (0x00022a8f) popup_fast_swap_wide_window

0x864c,	// (0x0001ce3d) touch_pane_ParamLimits

0x864c,	// (0x0001ce3d) touch_pane

0xc744,	// (0x00020f35) button_value_adjust_pane_cp2

0xc74c,	// (0x00020f3d) button_value_adjust_pane_cp4

0xc754,	// (0x00020f45) form_field_data_pane_cp2

0xa364,	// (0x0001eb55) form_field_data_wide_pane_cp2

0xcad0,	// (0x000212c1) bg_scroll_pane_ParamLimits

0x873c,	// (0x0001cf2d) scroll_handle_pane_ParamLimits

0xe452,	// (0x00022c43) scroll_sc2_down_pane_ParamLimits

0xe452,	// (0x00022c43) scroll_sc2_down_pane

0xcb01,	// (0x000212f2) scroll_sc2_up_pane_ParamLimits

0xcb01,	// (0x000212f2) scroll_sc2_up_pane

0xba65,	// (0x00020256) grid_wheel_folder_pane_g1_ParamLimits

0xba65,	// (0x00020256) grid_wheel_folder_pane_g1

0xe6a4,	// (0x00022e95) clock_nsta_pane_cp2_ParamLimits

0xe6a4,	// (0x00022e95) clock_nsta_pane_cp2

0xa959,	// (0x0001f14a) listscroll_midp_pane_ParamLimits

0xa965,	// (0x0001f156) midp_canvas_pane

0x1392,	// (0x00015b83) nsta_clock_indic_pane

0x13ce,	// (0x00015bbf) listscroll_form_pane_vc

0x13d6,	// (0x00015bc7) listscroll_set_pane_vc_ParamLimits

0x13d6,	// (0x00015bc7) listscroll_set_pane_vc

0xac13,	// (0x0001f404) clock_nsta_pane

0xac3d,	// (0x0001f42e) indicator_nsta_pane

0x182f,	// (0x00016020) bg_popup_sub_pane_cp2_ParamLimits

0x1843,	// (0x00016034) find_pane_cp2_ParamLimits

0x1843,	// (0x00016034) find_pane_cp2

0x1859,	// (0x0001604a) grid_toobar_pane_ParamLimits

0x1a07,	// (0x000161f8) list_form_gen_pane_vc_ParamLimits

0x1a07,	// (0x000161f8) list_form_gen_pane_vc

0x1a1d,	// (0x0001620e) scroll_pane_cp8_vc_ParamLimits

0x1a1d,	// (0x0001620e) scroll_pane_cp8_vc

0x1a99,	// (0x0001628a) data_form_wide_pane_vc_ParamLimits

0x1a99,	// (0x0001628a) data_form_wide_pane_vc

0x1aa5,	// (0x00016296) form_field_data_wide_pane_vc_g1

0x1aad,	// (0x0001629e) form_field_data_wide_pane_vc_t1_ParamLimits

0x1aad,	// (0x0001629e) form_field_data_wide_pane_vc_t1

0xc77b,	// (0x00020f6c) input_focus_pane_cp6_vc_ParamLimits

0xc77b,	// (0x00020f6c) input_focus_pane_cp6_vc

0x1e3b,	// (0x0001662c) list_midp_pane_ParamLimits

0x3235,	// (0x00017a26) scroll_pane_cp16_ParamLimits

0x3235,	// (0x00017a26) scroll_pane_cp16

0x1e89,	// (0x0001667a) button_value_adjust_pane_ParamLimits

0x1e89,	// (0x0001667a) button_value_adjust_pane

0xb5f8,	// (0x0001fde9) button_value_adjust_pane_cp6_ParamLimits

0xb5f8,	// (0x0001fde9) button_value_adjust_pane_cp6

0xb712,	// (0x0001ff03) settings_code_pane_cp_ParamLimits

0xb712,	// (0x0001ff03) settings_code_pane_cp

0xc2eb,	// (0x00020adc) cell_touch_pane_g1

0xc2eb,	// (0x00020adc) cell_touch_pane_g2

0x0001,

0xf6ef,	// (0x00023ee0) cell_touch_pane_g

0xb942,	// (0x00020133) cell_touch_pane_cp_ParamLimits

0xb942,	// (0x00020133) cell_touch_pane_cp

0xb95e,	// (0x0002014f) cell_touch_pane_ParamLimits

0xb95e,	// (0x0002014f) cell_touch_pane

0xc2eb,	// (0x00020adc) scroll_sc2_down_pane_g1

0xc2eb,	// (0x00020adc) scroll_sc2_up_pane_g1

0xc2f5,	// (0x00020ae6) bg_set_opt_pane_cp4_vc

0x35fd,	// (0x00017dee) list_set_graphic_pane_vc_g1_ParamLimits

0x35fd,	// (0x00017dee) list_set_graphic_pane_vc_g1

0x3609,	// (0x00017dfa) list_set_graphic_pane_vc_g2_ParamLimits

0x3609,	// (0x00017dfa) list_set_graphic_pane_vc_g2

0x0001,

0xf9df,	// (0x000241d0) list_set_graphic_pane_vc_g_ParamLimits

0xf9df,	// (0x000241d0) list_set_graphic_pane_vc_g

0x3615,	// (0x00017e06) text_primary_small_cp13_vc_ParamLimits

0x3615,	// (0x00017e06) text_primary_small_cp13_vc

0x362d,	// (0x00017e1e) list_set_graphic_pane_vc_ParamLimits

0x362d,	// (0x00017e1e) list_set_graphic_pane_vc

0xc2f5,	// (0x00020ae6) input_focus_pane_cp2_vc

0xc2eb,	// (0x00020adc) setting_code_pane_vc_g1

0xc368,	// (0x00020b59) setting_code_pane_vc_t1

0x3640,	// (0x00017e31) set_text_pane_vc_t1_ParamLimits

0x3640,	// (0x00017e31) set_text_pane_vc_t1

0xc2f5,	// (0x00020ae6) input_focus_pane_cp1_vc

0x365c,	// (0x00017e4d) list_set_text_pane_vc

0xc2eb,	// (0x00020adc) setting_text_pane_vc_g1

0xc2f5,	// (0x00020ae6) bg_set_opt_pane_cp2_vc

0xc35f,	// (0x00020b50) setting_slider_graphic_pane_vc_g1

0x3666,	// (0x00017e57) setting_slider_graphic_pane_vc_t1

0x3676,	// (0x00017e67) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e4,	// (0x000241d5) setting_slider_graphic_pane_vc_t

0x3686,	// (0x00017e77) slider_set_pane_cp_vc

0x368e,	// (0x00017e7f) slider_set_pane_vc_g1

0x3697,	// (0x00017e88) slider_set_pane_vc_g2

0x0006,

0xf9e9,	// (0x000241da) slider_set_pane_vc_g

0xc841,	// (0x00021032) set_opt_bg_pane_g1_copy1

0xc849,	// (0x0002103a) set_opt_bg_pane_g2_copy1

0x36c3,	// (0x00017eb4) set_opt_bg_pane_g3_copy1

0xc859,	// (0x0002104a) set_opt_bg_pane_g4_copy1

0xc861,	// (0x00021052) set_opt_bg_pane_g5_copy1

0xc869,	// (0x0002105a) set_opt_bg_pane_g6_copy1

0x36cb,	// (0x00017ebc) set_opt_bg_pane_g7_copy1

0x36d3,	// (0x00017ec4) set_opt_bg_pane_g8_copy1

0x36db,	// (0x00017ecc) set_opt_bg_pane_g9_copy1

0xc2f5,	// (0x00020ae6) bg_set_opt_pane_cp_vc

0x36e3,	// (0x00017ed4) setting_slider_pane_vc_t1

0x36f2,	// (0x00017ee3) setting_slider_pane_vc_t2

0x3702,	// (0x00017ef3) setting_slider_pane_vc_t3

0x0002,

0xf9f8,	// (0x000241e9) setting_slider_pane_vc_t

0x3712,	// (0x00017f03) slider_set_pane_vc

0xe9b7,	// (0x000231a8) volume_set_pane_vc_g1

0xeba0,	// (0x00023391) volume_set_pane_vc_g2

0xeba9,	// (0x0002339a) volume_set_pane_vc_g3

0xebb2,	// (0x000233a3) volume_set_pane_vc_g4

0xebbb,	// (0x000233ac) volume_set_pane_vc_g5

0xebc4,	// (0x000233b5) volume_set_pane_vc_g6

0xebcd,	// (0x000233be) volume_set_pane_vc_g7

0xebd6,	// (0x000233c7) volume_set_pane_vc_g8

0xebdf,	// (0x000233d0) volume_set_pane_vc_g9

0xebe8,	// (0x000233d9) volume_set_pane_vc_g10

0x0009,

0xf9ff,	// (0x000241f0) volume_set_pane_vc_g

0x371a,	// (0x00017f0b) volume_set_pane_vc

0x3722,	// (0x00017f13) button_value_adjust_pane_cp1_vc

0x372c,	// (0x00017f1d) list_highlight_pane_cp2_vc

0x3735,	// (0x00017f26) list_set_pane_vc_ParamLimits

0x3735,	// (0x00017f26) list_set_pane_vc

0x3793,	// (0x00017f84) main_pane_set_vc_t1_ParamLimits

0x3793,	// (0x00017f84) main_pane_set_vc_t1

0x37a8,	// (0x00017f99) main_pane_set_vc_t2_ParamLimits

0x37a8,	// (0x00017f99) main_pane_set_vc_t2

0x37ba,	// (0x00017fab) main_pane_set_vc_t3_ParamLimits

0x37ba,	// (0x00017fab) main_pane_set_vc_t3

0x37cc,	// (0x00017fbd) main_pane_set_vc_t4_ParamLimits

0x37cc,	// (0x00017fbd) main_pane_set_vc_t4

0x0003,

0xfa14,	// (0x00024205) main_pane_set_vc_t_ParamLimits

0xfa14,	// (0x00024205) main_pane_set_vc_t

0x37de,	// (0x00017fcf) setting_code_pane_vc_ParamLimits

0x37de,	// (0x00017fcf) setting_code_pane_vc

0x37ed,	// (0x00017fde) setting_slider_graphic_pane_vc

0x37ed,	// (0x00017fde) setting_slider_pane_vc

0x37ed,	// (0x00017fde) setting_text_pane_vc

0x37ed,	// (0x00017fde) setting_volume_pane_vc

0x37f5,	// (0x00017fe6) scroll_pane_cp121_vc

0xc732,	// (0x00020f23) set_content_pane_vc

0x3ae0,	// (0x000182d1) button_value_adjust_pane_g1

0x3ae9,	// (0x000182da) button_value_adjust_pane_g2

0x0001,

0xfa70,	// (0x00024261) button_value_adjust_pane_g

0x3af2,	// (0x000182e3) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3af2,	// (0x000182e3) form_field_slider_wide_pane_vc_t1

0x3b06,	// (0x000182f7) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3b06,	// (0x000182f7) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa75,	// (0x00024266) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa75,	// (0x00024266) form_field_slider_wide_pane_vc_t

0xc343,	// (0x00020b34) input_focus_pane_cp10_vc_ParamLimits

0xc343,	// (0x00020b34) input_focus_pane_cp10_vc

0x3b34,	// (0x00018325) slider_cont_pane_cp1_vc_ParamLimits

0x3b34,	// (0x00018325) slider_cont_pane_cp1_vc

0x3b46,	// (0x00018337) slider_form_pane_g1_cp2

0x3697,	// (0x00017e88) slider_form_pane_g2_cp2

0x3b73,	// (0x00018364) form_field_slider_pane_vc_t3

0x3b81,	// (0x00018372) form_field_slider_pane_vc_t4

0x3b8f,	// (0x00018380) slider_form_pane_vc_ParamLimits

0x3b8f,	// (0x00018380) slider_form_pane_vc

0x3b9c,	// (0x0001838d) form_field_slider_pane_vc_t1_ParamLimits

0x3b9c,	// (0x0001838d) form_field_slider_pane_vc_t1

0x3b06,	// (0x000182f7) form_field_slider_pane_vc_t2_ParamLimits

0x3b06,	// (0x000182f7) form_field_slider_pane_vc_t2

0x0001,

0xfa87,	// (0x00024278) form_field_slider_pane_vc_t_ParamLimits

0xfa87,	// (0x00024278) form_field_slider_pane_vc_t

0xc343,	// (0x00020b34) input_focus_pane_cp9_vc_ParamLimits

0xc343,	// (0x00020b34) input_focus_pane_cp9_vc

0x3bb8,	// (0x000183a9) slider_cont_pane_vc_ParamLimits

0x3bb8,	// (0x000183a9) slider_cont_pane_vc

0x3bcc,	// (0x000183bd) list_form_graphic_pane_cp_vc_ParamLimits

0x3bcc,	// (0x000183bd) list_form_graphic_pane_cp_vc

0x1aa5,	// (0x00016296) form_field_popup_wide_pane_vc_g1

0x3be1,	// (0x000183d2) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3be1,	// (0x000183d2) form_field_popup_wide_pane_vc_t1

0xc77b,	// (0x00020f6c) input_focus_pane_cp8_vc_ParamLimits

0xc77b,	// (0x00020f6c) input_focus_pane_cp8_vc

0x3c26,	// (0x00018417) list_form_wide_pane_vc_ParamLimits

0x3c26,	// (0x00018417) list_form_wide_pane_vc

0x3c32,	// (0x00018423) list_form_graphic_pane_vc_g1

0x3c3a,	// (0x0001842b) list_form_graphic_pane_vc_t1_ParamLimits

0x3c3a,	// (0x0001842b) list_form_graphic_pane_vc_t1

0xc351,	// (0x00020b42) list_highlight_pane_cp5_vc_ParamLimits

0xc351,	// (0x00020b42) list_highlight_pane_cp5_vc

0x3c56,	// (0x00018447) list_form_graphic_pane_vc_ParamLimits

0x3c56,	// (0x00018447) list_form_graphic_pane_vc

0x1aa5,	// (0x00016296) form_field_popup_pane_vc_g1

0x3c6c,	// (0x0001845d) form_field_popup_pane_vc_t1_ParamLimits

0x3c6c,	// (0x0001845d) form_field_popup_pane_vc_t1

0xc77b,	// (0x00020f6c) input_focus_pane_cp7_vc_ParamLimits

0xc77b,	// (0x00020f6c) input_focus_pane_cp7_vc

0x3c83,	// (0x00018474) list_form_pane_vc_ParamLimits

0x3c83,	// (0x00018474) list_form_pane_vc

0x3c8f,	// (0x00018480) data_form_pane_vc_t1_ParamLimits

0x3c8f,	// (0x00018480) data_form_pane_vc_t1

0xc841,	// (0x00021032) input_focus_pane_vc_g1

0xc849,	// (0x0002103a) input_focus_pane_vc_g2

0xc851,	// (0x00021042) input_focus_pane_vc_g3

0xc859,	// (0x0002104a) input_focus_pane_vc_g4

0xc861,	// (0x00021052) input_focus_pane_vc_g5

0xc869,	// (0x0002105a) input_focus_pane_vc_g6

0xc871,	// (0x00021062) input_focus_pane_vc_g7

0xc879,	// (0x0002106a) input_focus_pane_vc_g8

0xc881,	// (0x00021072) input_focus_pane_vc_g9

0xc2eb,	// (0x00020adc) input_focus_pane_vc_g10

0x0009,

0xf678,	// (0x00023e69) input_focus_pane_vc_g

0x1a99,	// (0x0001628a) data_form_pane_vc_ParamLimits

0x1a99,	// (0x0001628a) data_form_pane_vc

0x1aa5,	// (0x00016296) form_field_data_pane_vc_g1

0x3caa,	// (0x0001849b) form_field_data_pane_vc_t1_ParamLimits

0x3caa,	// (0x0001849b) form_field_data_pane_vc_t1

0xc77b,	// (0x00020f6c) input_focus_pane_vc_ParamLimits

0xc77b,	// (0x00020f6c) input_focus_pane_vc

0x3cc4,	// (0x000184b5) button_value_adjust_pane_cp3_vc

0x3ccc,	// (0x000184bd) button_value_adjust_pane_cp5_vc

0x3cd4,	// (0x000184c5) form_field_data_pane_vc_ParamLimits

0x3cd4,	// (0x000184c5) form_field_data_pane_vc

0x3ceb,	// (0x000184dc) form_field_data_pane_vc_cp2

0x3cf3,	// (0x000184e4) form_field_data_wide_pane_vc_ParamLimits

0x3cf3,	// (0x000184e4) form_field_data_wide_pane_vc

0x3d09,	// (0x000184fa) form_field_data_wide_pane_vc_cp2

0x3d11,	// (0x00018502) form_field_popup_pane_vc_ParamLimits

0x3d11,	// (0x00018502) form_field_popup_pane_vc

0x3d28,	// (0x00018519) form_field_popup_wide_pane_vc_ParamLimits

0x3d28,	// (0x00018519) form_field_popup_wide_pane_vc

0x3d3e,	// (0x0001852f) form_field_slider_pane_vc_ParamLimits

0x3d3e,	// (0x0001852f) form_field_slider_pane_vc

0x3d51,	// (0x00018542) form_field_slider_wide_pane_vc_ParamLimits

0x3d51,	// (0x00018542) form_field_slider_wide_pane_vc

0xb97b,	// (0x0002016c) grid_touch_1_pane_ParamLimits

0xb97b,	// (0x0002016c) grid_touch_1_pane

0xb98f,	// (0x00020180) grid_touch_2_pane_ParamLimits

0xb98f,	// (0x00020180) grid_touch_2_pane

0x3e1f,	// (0x00018610) touch_pane_g1_ParamLimits

0x3e1f,	// (0x00018610) touch_pane_g1

0x3d88,	// (0x00018579) cell_app_pane_cp_wide_ParamLimits

0x3d88,	// (0x00018579) cell_app_pane_cp_wide

0x3d99,	// (0x0001858a) grid_popup_fast_wide_pane_ParamLimits

0x3d99,	// (0x0001858a) grid_popup_fast_wide_pane

0x3dad,	// (0x0001859e) scroll_pane_cp19_ParamLimits

0x3dad,	// (0x0001859e) scroll_pane_cp19

0xc2f5,	// (0x00020ae6) bg_popup_window_pane_cp20

0x3dc1,	// (0x000185b2) listscroll_popup_fast_wide_pane

0xcd17,	// (0x00021508) grid_indicator_nsta_pane

0x3dc9,	// (0x000185ba) clock_nsta_pane_g1

0x3dd2,	// (0x000185c3) clock_nsta_pane_t1

0xb9b9,	// (0x000201aa) cell_indicator_nsta_pane_ParamLimits

0xb9b9,	// (0x000201aa) cell_indicator_nsta_pane

0x3e1f,	// (0x00018610) cell_indicator_nsta_pane_g1

0xb9d0,	// (0x000201c1) cell_indicator_nsta_pane_g2

0x0001,

0xfa98,	// (0x00024289) cell_indicator_nsta_pane_g

0x3e3a,	// (0x0001862b) clock_nsta_pane_cp

0x3e43,	// (0x00018634) indicator_nsta_pane_cp

0x3e4b,	// (0x0001863c) nsta_clock_indic_pane_g1

0xc3a7,	// (0x00020b98) grid_indicator_pane

0xa717,	// (0x0001ef08) scroll_pane_cp29

0xe5d1,	// (0x00022dc2) indicator_nsta_pane_cp2_ParamLimits

0xe5d1,	// (0x00022dc2) indicator_nsta_pane_cp2

0xc351,	// (0x00020b42) main_apps_wheel_pane

0xb01c,	// (0x0001f80d) form_midp_field_text_pane_ParamLimits

0x1e47,	// (0x00016638) scroll_bar_cp050_ParamLimits

0x3e9b,	// (0x0001868c) cell_indicator_pane_ParamLimits

0x3e9b,	// (0x0001868c) cell_indicator_pane

0x3eb4,	// (0x000186a5) cell_indicator_pane_g1

0xb9ef,	// (0x000201e0) grid_wheel_folder_pane_ParamLimits

0xb9ef,	// (0x000201e0) grid_wheel_folder_pane

0xb9fd,	// (0x000201ee) list_wheel_apps_pane_ParamLimits

0xb9fd,	// (0x000201ee) list_wheel_apps_pane

0xba0b,	// (0x000201fc) main_apps_wheel_pane_g1_ParamLimits

0xba0b,	// (0x000201fc) main_apps_wheel_pane_g1

0xba17,	// (0x00020208) main_apps_wheel_pane_g2_ParamLimits

0xba17,	// (0x00020208) main_apps_wheel_pane_g2

0x0001,

0xfab4,	// (0x000242a5) main_apps_wheel_pane_g_ParamLimits

0xfab4,	// (0x000242a5) main_apps_wheel_pane_g

0xba25,	// (0x00020216) main_apps_wheel_pane_t1_ParamLimits

0xba25,	// (0x00020216) main_apps_wheel_pane_t1

0xba39,	// (0x0002022a) list_wheel_apps_pane_g1

0xba41,	// (0x00020232) list_wheel_apps_pane_g2

0xba49,	// (0x0002023a) list_wheel_apps_pane_g3

0xba51,	// (0x00020242) list_wheel_apps_pane_g4

0xba5b,	// (0x0002024c) list_wheel_apps_pane_g5

0x0004,

0xfab9,	// (0x000242aa) list_wheel_apps_pane_g

0x0f1a,	// (0x0001570b) navi_icon_text_pane

0xab07,	// (0x0001f2f8) aid_fill_nsta

0x3f7b,	// (0x0001876c) navi_icon_text_pane_g1

0x3f87,	// (0x00018778) navi_icon_text_pane_t1

0xe740,	// (0x00022f31) list_set_graphic_pane_t1_ParamLimits

0xe740,	// (0x00022f31) list_set_graphic_pane_t1

0x258a,	// (0x00016d7b) popup_midp_note_alarm_window_t6_ParamLimits

0x258a,	// (0x00016d7b) popup_midp_note_alarm_window_t6

0x259c,	// (0x00016d8d) popup_midp_note_alarm_window_t7_ParamLimits

0x259c,	// (0x00016d8d) popup_midp_note_alarm_window_t7

0x25ae,	// (0x00016d9f) popup_midp_note_alarm_window_t8_ParamLimits

0x25ae,	// (0x00016d9f) popup_midp_note_alarm_window_t8

0x25c0,	// (0x00016db1) popup_midp_note_alarm_window_t9_ParamLimits

0x25c0,	// (0x00016db1) popup_midp_note_alarm_window_t9

0x25d2,	// (0x00016dc3) popup_midp_note_alarm_window_t10_ParamLimits

0x25d2,	// (0x00016dc3) popup_midp_note_alarm_window_t10

0x25e4,	// (0x00016dd5) popup_midp_note_alarm_window_t11_ParamLimits

0x25e4,	// (0x00016dd5) popup_midp_note_alarm_window_t11

0xb368,	// (0x0001fb59) scroll_pane_cp17_ParamLimits

0xb368,	// (0x0001fb59) scroll_pane_cp17

0xe9b7,	// (0x000231a8) volume_small_pane_cp_g1

0xebf1,	// (0x000233e2) volume_small_pane_cp_g2

0xebfa,	// (0x000233eb) volume_small_pane_cp_g3

0xec03,	// (0x000233f4) volume_small_pane_cp_g4

0xec0c,	// (0x000233fd) volume_small_pane_cp_g5

0xebbb,	// (0x000233ac) volume_small_pane_cp_g6

0xec15,	// (0x00023406) volume_small_pane_cp_g7

0xec1e,	// (0x0002340f) volume_small_pane_cp_g8

0xec27,	// (0x00023418) volume_small_pane_cp_g9

0xec30,	// (0x00023421) volume_small_pane_cp_g10

0x117b,	// (0x0001596c) midp_ticker_pane_g1_ParamLimits

0x1187,	// (0x00015978) midp_ticker_pane_g2_ParamLimits

0xf744,	// (0x00023f35) midp_ticker_pane_g_ParamLimits

0x1193,	// (0x00015984) midp_ticker_pane_t1_ParamLimits

0xab2b,	// (0x0001f31c) aid_fill_nsta_2

0x1e33,	// (0x00016624) list_form2_midp_pane

0x2f83,	// (0x00017774) midp_editing_number_pane_ParamLimits

0x2f92,	// (0x00017783) midp_ticker_pane_ParamLimits

0x3f99,	// (0x0001878a) form2_midp_field_pane

0x3fbd,	// (0x000187ae) scroll_pane_cp51

0x3fdd,	// (0x000187ce) form2_midp_button_pane_ParamLimits

0x3fdd,	// (0x000187ce) form2_midp_button_pane

0x3fef,	// (0x000187e0) form2_midp_content_pane_ParamLimits

0x3fef,	// (0x000187e0) form2_midp_content_pane

0x4009,	// (0x000187fa) form2_midp_field_choice_group_pane

0x4011,	// (0x00018802) form2_midp_field_pane_g1

0x4019,	// (0x0001880a) form2_midp_field_pane_g2

0x4021,	// (0x00018812) form2_midp_field_pane_g3

0x4029,	// (0x0001881a) form2_midp_field_pane_g4

0x0003,

0xfade,	// (0x000242cf) form2_midp_field_pane_g

0x4031,	// (0x00018822) form2_midp_gauge_slider_pane

0x4039,	// (0x0001882a) form2_midp_gauge_wait_pane

0x4041,	// (0x00018832) form2_midp_image_pane_ParamLimits

0x4041,	// (0x00018832) form2_midp_image_pane

0xba8e,	// (0x0002027f) form2_midp_label_pane_ParamLimits

0xba8e,	// (0x0002027f) form2_midp_label_pane

0xbaa7,	// (0x00020298) form2_midp_label_pane_cp_ParamLimits

0xbaa7,	// (0x00020298) form2_midp_label_pane_cp

0x4096,	// (0x00018887) form2_midp_string_pane_ParamLimits

0x4096,	// (0x00018887) form2_midp_string_pane

0xbac6,	// (0x000202b7) form2_midp_text_pane_ParamLimits

0xbac6,	// (0x000202b7) form2_midp_text_pane

0x40c3,	// (0x000188b4) form2_midp_time_pane

0x40d3,	// (0x000188c4) input_focus_pane_cp51_ParamLimits

0x40d3,	// (0x000188c4) input_focus_pane_cp51

0xbadf,	// (0x000202d0) form2_midp_label_pane_t1_ParamLimits

0xbadf,	// (0x000202d0) form2_midp_label_pane_t1

0xbb1f,	// (0x00020310) form2_mdip_text_pane_t1_ParamLimits

0xbb1f,	// (0x00020310) form2_mdip_text_pane_t1

0x414b,	// (0x0001893c) form2_midp_time_pane_t1

0x4166,	// (0x00018957) form2_midp_gauge_slider_pane_t1

0xbb3b,	// (0x0002032c) form2_midp_gauge_slider_pane_t2

0xbb4d,	// (0x0002033e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae7,	// (0x000242d8) form2_midp_gauge_slider_pane_t

0x419c,	// (0x0001898d) form2_midp_slider_pane

0x41a8,	// (0x00018999) form2_midp_gauge_wait_pane_t1

0x41b6,	// (0x000189a7) form2_midp_wait_pane_ParamLimits

0x41b6,	// (0x000189a7) form2_midp_wait_pane

0xbb5f,	// (0x00020350) list_single_2graphic_pane_cp4_ParamLimits

0xbb5f,	// (0x00020350) list_single_2graphic_pane_cp4

0xaf5c,	// (0x0001f74d) list_single_midp_graphic_pane_cp_ParamLimits

0xaf5c,	// (0x0001f74d) list_single_midp_graphic_pane_cp

0xc2f5,	// (0x00020ae6) list_highlight_pane_cp20

0x4209,	// (0x000189fa) list_single_2graphic_pane_g1_cp4

0x34a9,	// (0x00017c9a) list_single_2graphic_pane_g2_cp4

0x4211,	// (0x00018a02) list_single_2graphic_pane_t1_cp4

0xc351,	// (0x00020b42) list_highlight_pane_cp21

0x4220,	// (0x00018a11) list_single_midp_graphic_pane_g4_cp

0x422f,	// (0x00018a20) list_single_midp_graphic_pane_t1_cp

0xbb74,	// (0x00020365) form2_mdip_string_pane_t1_ParamLimits

0xbb74,	// (0x00020365) form2_mdip_string_pane_t1

0xc2f5,	// (0x00020ae6) bg_wml_button_pane_cp2

0xc2eb,	// (0x00020adc) form2_midp_image_pane_g1

0xc6e5,	// (0x00020ed6) list_double_large_graphic_pane_g5_ParamLimits

0xc6e5,	// (0x00020ed6) list_double_large_graphic_pane_g5

0xa959,	// (0x0001f14a) midp_form_pane_ParamLimits

0xc351,	// (0x00020b42) main_apps_wheel_pane_ParamLimits

0x8d97,	// (0x0001d588) popup_preview_window_ParamLimits

0x8d97,	// (0x0001d588) popup_preview_window

0x9064,	// (0x0001d855) popup_touch_info_window_ParamLimits

0x9064,	// (0x0001d855) popup_touch_info_window

0x9082,	// (0x0001d873) popup_touch_menu_window_ParamLimits

0x9082,	// (0x0001d873) popup_touch_menu_window

0xc2e1,	// (0x00020ad2) bg_popup_sub_pane_cp6

0x434b,	// (0x00018b3c) list_touch_menu_pane

0xbbea,	// (0x000203db) list_single_touch_menu_pane_ParamLimits

0xbbea,	// (0x000203db) list_single_touch_menu_pane

0xbbfe,	// (0x000203ef) list_single_touch_menu_pane_t1

0xc351,	// (0x00020b42) bg_popup_sub_pane_cp7_ParamLimits

0xc351,	// (0x00020b42) bg_popup_sub_pane_cp7

0x4377,	// (0x00018b68) heading_sub_pane

0x437f,	// (0x00018b70) list_touch_info_pane_ParamLimits

0x437f,	// (0x00018b70) list_touch_info_pane

0x438e,	// (0x00018b7f) list_single_touch_info_pane_ParamLimits

0x438e,	// (0x00018b7f) list_single_touch_info_pane

0x43a0,	// (0x00018b91) list_single_touch_info_pane_t1

0x43ae,	// (0x00018b9f) list_single_touch_info_pane_t2

0x0001,

0xfaf5,	// (0x000242e6) list_single_touch_info_pane_t

0x109a,	// (0x0001588b) bg_popup_heading_pane_cp

0x43bc,	// (0x00018bad) heading_sub_pane_t1

0x1a33,	// (0x00016224) bg_popup_preview_window_pane_cp_ParamLimits

0x1a33,	// (0x00016224) bg_popup_preview_window_pane_cp

0x4377,	// (0x00018b68) heading_preview_pane

0x437f,	// (0x00018b70) list_preview_pane_ParamLimits

0x437f,	// (0x00018b70) list_preview_pane

0x43ca,	// (0x00018bbb) popup_preview_window_g1

0x438e,	// (0x00018b7f) list_single_preview_pane_ParamLimits

0x438e,	// (0x00018b7f) list_single_preview_pane

0x43d2,	// (0x00018bc3) list_single_preview_pane_g1

0x43da,	// (0x00018bcb) list_single_preview_pane_t1

0x43a0,	// (0x00018b91) list_single_preview_pane_t2

0x0001,

0xfafa,	// (0x000242eb) list_single_preview_pane_t

0x43e8,	// (0x00018bd9) bg_popup_heading_pane_cp2_ParamLimits

0x43e8,	// (0x00018bd9) bg_popup_heading_pane_cp2

0x43fe,	// (0x00018bef) heading_preview_pane_g1

0x4406,	// (0x00018bf7) heading_preview_pane_t1_ParamLimits

0x4406,	// (0x00018bf7) heading_preview_pane_t1

0xc3be,	// (0x00020baf) soft_indicator_pane_t1_ParamLimits

0xc699,	// (0x00020e8a) scroll_pane_ParamLimits

0xcaef,	// (0x000212e0) scroll_sc2_left_pane

0xcaf8,	// (0x000212e9) scroll_sc2_right_pane

0xcb17,	// (0x00021308) scroll_bg_pane_g1_ParamLimits

0xcb2c,	// (0x0002131d) scroll_bg_pane_g2_ParamLimits

0xcb44,	// (0x00021335) scroll_bg_pane_g3_ParamLimits

0xf6cf,	// (0x00023ec0) scroll_bg_pane_g_ParamLimits

0xcb17,	// (0x00021308) scroll_handle_pane_g1_ParamLimits

0xcb59,	// (0x0002134a) scroll_handle_pane_g2_ParamLimits

0xcb44,	// (0x00021335) scroll_handle_pane_g3_ParamLimits

0xf6d6,	// (0x00023ec7) scroll_handle_pane_g_ParamLimits

0x893e,	// (0x0001d12f) popup_choice_list_window_ParamLimits

0x893e,	// (0x0001d12f) popup_choice_list_window

0x183b,	// (0x0001602c) choice_list_pane

0x18df,	// (0x000160d0) cell_toolbar_pane_t1

0x1907,	// (0x000160f8) toolbar_button_pane_ParamLimits

0x2ab0,	// (0x000172a1) ai_gene_pane_1_t2_ParamLimits

0x2ab0,	// (0x000172a1) ai_gene_pane_1_t2

0x0001,

0xf8f2,	// (0x000240e3) ai_gene_pane_1_t_ParamLimits

0xf8f2,	// (0x000240e3) ai_gene_pane_1_t

0x4423,	// (0x00018c14) scroll_sc2_left_pane_g1

0x4423,	// (0x00018c14) scroll_sc2_right_pane_g1

0x13c2,	// (0x00015bb3) bg_popup_sub_pane_cp10

0x442d,	// (0x00018c1e) list_choice_list_pane

0xbc0c,	// (0x000203fd) list_single_choice_list_pane_ParamLimits

0xbc0c,	// (0x000203fd) list_single_choice_list_pane

0xcd25,	// (0x00021516) list_single_choice_list_pane_g1

0xa55e,	// (0x0001ed4f) list_single_choice_list_pane_t1_ParamLimits

0xa55e,	// (0x0001ed4f) list_single_choice_list_pane_t1

0x4461,	// (0x00018c52) choice_list_pane_g1

0xbc20,	// (0x00020411) choice_list_pane_t1

0xc2e1,	// (0x00020ad2) input_focus_pane_cp11

0xca64,	// (0x00021255) title_pane_stacon_g2_ParamLimits

0xca64,	// (0x00021255) title_pane_stacon_g2

0x0002,

0xf6b5,	// (0x00023ea6) title_pane_stacon_g_ParamLimits

0xf6b5,	// (0x00023ea6) title_pane_stacon_g

0x109a,	// (0x0001588b) cursor_press_pane

0x89e5,	// (0x0001d1d6) popup_fep_hwr_window_ParamLimits

0x89e5,	// (0x0001d1d6) popup_fep_hwr_window

0xe887,	// (0x00023078) popup_fep_vkb_window_ParamLimits

0xe887,	// (0x00023078) popup_fep_vkb_window

0xbc2e,	// (0x0002041f) cursor_press_pane_g1

0x0002,

0xfb23,	// (0x00024314) fep_vkb_side_pane_g_ParamLimits

0xec64,	// (0x00023455) fep_hwr_candidate_pane_ParamLimits

0xec64,	// (0x00023455) fep_hwr_candidate_pane

0xec8e,	// (0x0002347f) fep_hwr_side_pane_ParamLimits

0xec8e,	// (0x0002347f) fep_hwr_side_pane

0xecae,	// (0x0002349f) fep_hwr_top_pane_ParamLimits

0xecae,	// (0x0002349f) fep_hwr_top_pane

0xecc6,	// (0x000234b7) fep_hwr_write_pane_ParamLimits

0xecc6,	// (0x000234b7) fep_hwr_write_pane

0xfb23,	// (0x00024314) fep_vkb_side_pane_g

0x447f,	// (0x00018c70) fep_hwr_top_pane_g1

0x4491,	// (0x00018c82) fep_hwr_top_pane_g2

0xed00,	// (0x000234f1) fep_hwr_top_pane_g3

0x0002,

0xfaff,	// (0x000242f0) fep_hwr_top_pane_g

0xed15,	// (0x00023506) fep_hwr_top_text_pane

0xcc1c,	// (0x0002140d) fep_hwr_top_text_pane_g1

0x44c7,	// (0x00018cb8) fep_hwr_top_text_pane_t1

0xed94,	// (0x00023585) fep_hwr_candidate_pane_g1

0x470c,	// (0x00018efd) fep_vkb_keypad_pane_g3_ParamLimits

0x470c,	// (0x00018efd) fep_vkb_keypad_pane_g3

0x4734,	// (0x00018f25) fep_vkb_keypad_pane_g4_ParamLimits

0x4734,	// (0x00018f25) fep_vkb_keypad_pane_g4

0x47a3,	// (0x00018f94) fep_vkb_bottom_pane_g2_ParamLimits

0x47a3,	// (0x00018f94) fep_vkb_bottom_pane_g2

0x0001,

0xfb2a,	// (0x0002431b) fep_vkb_bottom_pane_g_ParamLimits

0xfb2a,	// (0x0002431b) fep_vkb_bottom_pane_g

0x4423,	// (0x00018c14) cell_vkb_side_pane_g2

0x0001,

0xfb34,	// (0x00024325) cell_vkb_side_pane_g

0x482e,	// (0x0001901f) cell_vkb_side_pane_t1

0x483c,	// (0x0001902d) cell_vkb_side_pane_t1_copy1

0x4423,	// (0x00018c14) bg_fep_vkb_candidate_pane_g2

0x4968,	// (0x00019159) cell_vkb_candidate_pane_ParamLimits

0x44d5,	// (0x00018cc6) aid_size_cell_vkb_ParamLimits

0x44d5,	// (0x00018cc6) aid_size_cell_vkb

0x4968,	// (0x00019159) cell_vkb_candidate_pane

0xedbb,	// (0x000235ac) bg_popup_fep_shadow_pane_g1

0xbc48,	// (0x00020439) fep_vkb_bottom_pane_ParamLimits

0xbc48,	// (0x00020439) fep_vkb_bottom_pane

0x4599,	// (0x00018d8a) fep_vkb_candidate_pane_ParamLimits

0x4599,	// (0x00018d8a) fep_vkb_candidate_pane

0xbc6d,	// (0x0002045e) fep_vkb_keypad_pane_ParamLimits

0xbc6d,	// (0x0002045e) fep_vkb_keypad_pane

0xbca2,	// (0x00020493) fep_vkb_side_pane_ParamLimits

0xbca2,	// (0x00020493) fep_vkb_side_pane

0xbcde,	// (0x000204cf) fep_vkb_top_pane_ParamLimits

0xbcde,	// (0x000204cf) fep_vkb_top_pane

0x4665,	// (0x00018e56) fep_vkb_top_pane_g1_ParamLimits

0x4665,	// (0x00018e56) fep_vkb_top_pane_g1

0x4674,	// (0x00018e65) fep_vkb_top_pane_g2_ParamLimits

0x4674,	// (0x00018e65) fep_vkb_top_pane_g2

0x4683,	// (0x00018e74) fep_vkb_top_pane_g3_ParamLimits

0x4683,	// (0x00018e74) fep_vkb_top_pane_g3

0x0003,

0xfb1a,	// (0x0002430b) fep_vkb_top_pane_g_ParamLimits

0xfb1a,	// (0x0002430b) fep_vkb_top_pane_g

0x46a1,	// (0x00018e92) fep_vkb_top_text_pane_ParamLimits

0x46a1,	// (0x00018e92) fep_vkb_top_text_pane

0xbd13,	// (0x00020504) fep_vkb_side_pane_g1_ParamLimits

0xbd13,	// (0x00020504) fep_vkb_side_pane_g1

0x46fb,	// (0x00018eec) grid_vkb_side_pane_ParamLimits

0x46fb,	// (0x00018eec) grid_vkb_side_pane

0xedc3,	// (0x000235b4) bg_popup_fep_shadow_pane_g2

0xedcc,	// (0x000235bd) bg_popup_fep_shadow_pane_g3

0xedd4,	// (0x000235c5) bg_popup_fep_shadow_pane_g4

0xeddd,	// (0x000235ce) bg_popup_fep_shadow_pane_g5

0xede7,	// (0x000235d8) bg_popup_fep_shadow_pane_g6

0xedef,	// (0x000235e0) bg_popup_fep_shadow_pane_g7

0xc859,	// (0x0002104a) bg_popup_fep_shadow_pane_g8

0x4752,	// (0x00018f43) grid_vkb_keypad_number_pane_ParamLimits

0x4752,	// (0x00018f43) grid_vkb_keypad_number_pane

0x4762,	// (0x00018f53) grid_vkb_keypad_pane_ParamLimits

0x4762,	// (0x00018f53) grid_vkb_keypad_pane

0x4788,	// (0x00018f79) fep_vkb_bottom_pane_g1_ParamLimits

0x4788,	// (0x00018f79) fep_vkb_bottom_pane_g1

0x47b1,	// (0x00018fa2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x47b1,	// (0x00018fa2) grid_vkb_keypad_bottom_left_pane

0x47c6,	// (0x00018fb7) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x47c6,	// (0x00018fb7) grid_vkb_keypad_bottom_right_pane

0x47db,	// (0x00018fcc) fep_vkb_top_text_pane_g1

0xbd5a,	// (0x0002054b) fep_vkb_top_text_pane_t1

0xbd6c,	// (0x0002055d) cell_vkb_side_pane_ParamLimits

0xbd6c,	// (0x0002055d) cell_vkb_side_pane

0x4423,	// (0x00018c14) cell_vkb_side_pane_g1

0x484a,	// (0x0001903b) cell_vkb_keypad_pane_ParamLimits

0x484a,	// (0x0001903b) cell_vkb_keypad_pane

0x48bf,	// (0x000190b0) cell_vkb_keypad_pane_g1

0x0008,

0xfb47,	// (0x00024338) bg_popup_fep_shadow_pane_g

0xee01,	// (0x000235f2) cell_hwr_side_pane_g1

0xee01,	// (0x000235f2) cell_hwr_side_pane_g2

0x48c9,	// (0x000190ba) cell_vkb_keypad_pane_t1

0xbd82,	// (0x00020573) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbd82,	// (0x00020573) cell_vkb_keypad_bottom_left_pane

0xbd97,	// (0x00020588) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbd97,	// (0x00020588) cell_vkb_keypad_bottom_right_pane

0x4423,	// (0x00018c14) cell_vkb_keypad_bottom_left_pane_g1

0x4423,	// (0x00018c14) cell_vkb_keypad_bottom_right_pane_g1

0x492d,	// (0x0001911e) cell_vkb_keypad_number_pane_ParamLimits

0x492d,	// (0x0001911e) cell_vkb_keypad_number_pane

0x494c,	// (0x0001913d) cell_vkb_keypad_number_pane_g1

0x4956,	// (0x00019147) cell_vkb_keypad_number_pane_g2

0x495f,	// (0x00019150) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb39,	// (0x0002432a) cell_vkb_keypad_number_pane_g

0x48c9,	// (0x000190ba) cell_vkb_keypad_number_pane_t1

0x4983,	// (0x00019174) fep_vkb_candidate_pane_g1

0x0001,

0xfb5a,	// (0x0002434b) cell_hwr_side_pane_g

0x499c,	// (0x0001918d) cell_hwr_side_pane_t1

0xee0b,	// (0x000235fc) cell_hwr_side_pane_t1_copy1

0xee19,	// (0x0002360a) cell_hwr_candidate_pane_g1

0xee48,	// (0x00023639) cell_hwr_candidate_pane_t1

0x4423,	// (0x00018c14) cell_vkb_candidate_pane_g2

0x49e0,	// (0x000191d1) cell_vkb_candidate_pane_t1

0xe9c9,	// (0x000231ba) bg_popup_fep_shadow_pane_ParamLimits

0xe9c9,	// (0x000231ba) bg_popup_fep_shadow_pane

0xece0,	// (0x000234d1) bg_fep_hwr_top_pane_g4

0x44a3,	// (0x00018c94) bg_hwr_side_pane_g1_ParamLimits

0x44a3,	// (0x00018c94) bg_hwr_side_pane_g1

0x9299,	// (0x0001da8a) cell_hwr_side_pane_ParamLimits

0x9299,	// (0x0001da8a) cell_hwr_side_pane

0xed2a,	// (0x0002351b) fep_hwr_write_pane_g1_ParamLimits

0xed2a,	// (0x0002351b) fep_hwr_write_pane_g1

0xed37,	// (0x00023528) fep_hwr_write_pane_g2_ParamLimits

0xed37,	// (0x00023528) fep_hwr_write_pane_g2

0xed44,	// (0x00023535) fep_hwr_write_pane_g3_ParamLimits

0xed44,	// (0x00023535) fep_hwr_write_pane_g3

0x92b9,	// (0x0001daaa) fep_hwr_write_pane_g4_ParamLimits

0x92b9,	// (0x0001daaa) fep_hwr_write_pane_g4

0x0005,

0xfb06,	// (0x000242f7) fep_hwr_write_pane_g_ParamLimits

0xfb06,	// (0x000242f7) fep_hwr_write_pane_g

0xece0,	// (0x000234d1) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xece0,	// (0x000234d1) bg_fep_hwr_candidate_pane_g2

0xed52,	// (0x00023543) cell_hwr_candidate_pane_ParamLimits

0xed52,	// (0x00023543) cell_hwr_candidate_pane

0xed94,	// (0x00023585) fep_hwr_candidate_pane_g1_ParamLimits

0x4503,	// (0x00018cf4) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4503,	// (0x00018cf4) bg_popup_fep_shadow_pane_cp2

0x4693,	// (0x00018e84) fep_vkb_top_pane_g4_ParamLimits

0x4693,	// (0x00018e84) fep_vkb_top_pane_g4

0x46d9,	// (0x00018eca) fep_vkb_side_pane_g2_ParamLimits

0x46d9,	// (0x00018eca) fep_vkb_side_pane_g2

0xa289,	// (0x0001ea7a) list_setting_pane_t4_ParamLimits

0xa289,	// (0x0001ea7a) list_setting_pane_t4

0xa303,	// (0x0001eaf4) list_setting_number_pane_t5_ParamLimits

0xa303,	// (0x0001eaf4) list_setting_number_pane_t5

0xcc53,	// (0x00021444) list_double_heading_pane_cp2_ParamLimits

0xcc53,	// (0x00021444) list_double_heading_pane_cp2

0x49ee,	// (0x000191df) list_double_heading_pane_g1_cp2_ParamLimits

0x49ee,	// (0x000191df) list_double_heading_pane_g1_cp2

0x49fa,	// (0x000191eb) list_double_heading_pane_g2_cp2_ParamLimits

0x49fa,	// (0x000191eb) list_double_heading_pane_g2_cp2

0x4a0e,	// (0x000191ff) list_double_heading_pane_t1_cp2_ParamLimits

0x4a0e,	// (0x000191ff) list_double_heading_pane_t1_cp2

0x4a24,	// (0x00019215) list_double_heading_pane_t2_cp2_ParamLimits

0x4a24,	// (0x00019215) list_double_heading_pane_t2_cp2

0xc2d9,	// (0x00020aca) aid_value_unit2

0xe2b4,	// (0x00022aa5) popup_preview_fixed_window

0xc495,	// (0x00020c86) bg_popup_preview_window_pane_cp02

0x4a36,	// (0x00019227) list_preview_fixed_pane

0x4a7c,	// (0x0001926d) list_empty_pane_fp_ParamLimits

0x4a7c,	// (0x0001926d) list_empty_pane_fp

0x4a7c,	// (0x0001926d) list_single_cale_day_pane_fp_ParamLimits

0x4a7c,	// (0x0001926d) list_single_cale_day_pane_fp

0x4a7c,	// (0x0001926d) list_single_graphic_heading_pane_fp_ParamLimits

0x4a7c,	// (0x0001926d) list_single_graphic_heading_pane_fp

0x4a7c,	// (0x0001926d) list_single_graphic_pane_fp_ParamLimits

0x4a7c,	// (0x0001926d) list_single_graphic_pane_fp

0x4a7c,	// (0x0001926d) list_single_heading_pane_fp_ParamLimits

0x4a7c,	// (0x0001926d) list_single_heading_pane_fp

0x4a7c,	// (0x0001926d) list_single_pane_fp_ParamLimits

0x4a7c,	// (0x0001926d) list_single_pane_fp

0x4a92,	// (0x00019283) list_single_pane_fp_g1_ParamLimits

0x4a92,	// (0x00019283) list_single_pane_fp_g1

0x4a9e,	// (0x0001928f) list_single_pane_fp_g2_ParamLimits

0x4a9e,	// (0x0001928f) list_single_pane_fp_g2

0x4aaa,	// (0x0001929b) list_single_pane_fp_g3_ParamLimits

0x4aaa,	// (0x0001929b) list_single_pane_fp_g3

0x4abe,	// (0x000192af) list_single_pane_fp_g4_ParamLimits

0x4abe,	// (0x000192af) list_single_pane_fp_g4

0x0003,

0xfb6d,	// (0x0002435e) list_single_pane_fp_g_ParamLimits

0xfb6d,	// (0x0002435e) list_single_pane_fp_g

0x4aca,	// (0x000192bb) list_single_pane_fp_t1_ParamLimits

0x4aca,	// (0x000192bb) list_single_pane_fp_t1

0x4ae1,	// (0x000192d2) list_single_graphic_pane_fp_g1_ParamLimits

0x4ae1,	// (0x000192d2) list_single_graphic_pane_fp_g1

0x4a92,	// (0x00019283) list_single_graphic_pane_fp_g2_ParamLimits

0x4a92,	// (0x00019283) list_single_graphic_pane_fp_g2

0x4a9e,	// (0x0001928f) list_single_graphic_pane_fp_g3_ParamLimits

0x4a9e,	// (0x0001928f) list_single_graphic_pane_fp_g3

0x4aaa,	// (0x0001929b) list_single_graphic_pane_fp_g4_ParamLimits

0x4aaa,	// (0x0001929b) list_single_graphic_pane_fp_g4

0x4abe,	// (0x000192af) list_single_graphic_pane_fp_g5_ParamLimits

0x4abe,	// (0x000192af) list_single_graphic_pane_fp_g5

0x0004,

0xfb76,	// (0x00024367) list_single_graphic_pane_fp_g_ParamLimits

0xfb76,	// (0x00024367) list_single_graphic_pane_fp_g

0x4aed,	// (0x000192de) list_single_graphic_pane_fp_t1_ParamLimits

0x4aed,	// (0x000192de) list_single_graphic_pane_fp_t1

0x4ae1,	// (0x000192d2) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4ae1,	// (0x000192d2) list_single_graphic_heading_pane_fp_g1

0x4a92,	// (0x00019283) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4a92,	// (0x00019283) list_single_graphic_heading_pane_fp_g2

0x4a9e,	// (0x0001928f) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4a9e,	// (0x0001928f) list_single_graphic_heading_pane_fp_g3

0x4aaa,	// (0x0001929b) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4aaa,	// (0x0001929b) list_single_graphic_heading_pane_fp_g4

0x4abe,	// (0x000192af) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4abe,	// (0x000192af) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb76,	// (0x00024367) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb76,	// (0x00024367) list_single_graphic_heading_pane_fp_g

0x4b03,	// (0x000192f4) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4b03,	// (0x000192f4) list_single_graphic_heading_pane_fp_t1

0x4b19,	// (0x0001930a) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4b19,	// (0x0001930a) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb81,	// (0x00024372) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb81,	// (0x00024372) list_single_graphic_heading_pane_fp_t

0x4b2b,	// (0x0001931c) list_single_cale_day_pane_fp_g1_ParamLimits

0x4b2b,	// (0x0001931c) list_single_cale_day_pane_fp_g1

0x4b63,	// (0x00019354) list_single_cale_day_pane_fp_g2_ParamLimits

0x4b63,	// (0x00019354) list_single_cale_day_pane_fp_g2

0x4b6f,	// (0x00019360) list_single_cale_day_pane_fp_g3_ParamLimits

0x4b6f,	// (0x00019360) list_single_cale_day_pane_fp_g3

0x4b97,	// (0x00019388) list_single_cale_day_pane_fp_g4_ParamLimits

0x4b97,	// (0x00019388) list_single_cale_day_pane_fp_g4

0x4bbb,	// (0x000193ac) list_single_cale_day_pane_fp_g5_ParamLimits

0x4bbb,	// (0x000193ac) list_single_cale_day_pane_fp_g5

0x0004,

0xfb86,	// (0x00024377) list_single_cale_day_pane_fp_g_ParamLimits

0xfb86,	// (0x00024377) list_single_cale_day_pane_fp_g

0x4bdf,	// (0x000193d0) list_single_cale_day_pane_fp_t1_ParamLimits

0x4bdf,	// (0x000193d0) list_single_cale_day_pane_fp_t1

0x4c05,	// (0x000193f6) list_single_cale_day_pane_fp_t2_ParamLimits

0x4c05,	// (0x000193f6) list_single_cale_day_pane_fp_t2

0x4c1e,	// (0x0001940f) list_single_cale_day_pane_fp_t3_ParamLimits

0x4c1e,	// (0x0001940f) list_single_cale_day_pane_fp_t3

0x0002,

0xfb91,	// (0x00024382) list_single_cale_day_pane_fp_t_ParamLimits

0xfb91,	// (0x00024382) list_single_cale_day_pane_fp_t

0x4a92,	// (0x00019283) list_empty_pane_fp_g1_ParamLimits

0x4a92,	// (0x00019283) list_empty_pane_fp_g1

0x4c37,	// (0x00019428) list_empty_pane_fp_t1

0x4c45,	// (0x00019436) list_empty_pane_fp_t2

0x0001,

0xfb98,	// (0x00024389) list_empty_pane_fp_t

0x4a92,	// (0x00019283) list_single_heading_pane_fp_g1_ParamLimits

0x4a92,	// (0x00019283) list_single_heading_pane_fp_g1

0x4a9e,	// (0x0001928f) list_single_heading_pane_fp_g2_ParamLimits

0x4a9e,	// (0x0001928f) list_single_heading_pane_fp_g2

0x4aaa,	// (0x0001929b) list_single_heading_pane_fp_g3_ParamLimits

0x4aaa,	// (0x0001929b) list_single_heading_pane_fp_g3

0x0002,

0xfb9d,	// (0x0002438e) list_single_heading_pane_fp_g_ParamLimits

0xfb9d,	// (0x0002438e) list_single_heading_pane_fp_g

0x4c53,	// (0x00019444) list_single_heading_pane_fp_t1_ParamLimits

0x4c53,	// (0x00019444) list_single_heading_pane_fp_t1

0x4c65,	// (0x00019456) list_single_heading_pane_fp_t2_ParamLimits

0x4c65,	// (0x00019456) list_single_heading_pane_fp_t2

0x0001,

0xfba4,	// (0x00024395) list_single_heading_pane_fp_t_ParamLimits

0xfba4,	// (0x00024395) list_single_heading_pane_fp_t

0xa5aa,	// (0x0001ed9b) aid_size_cell_fast

0xc478,	// (0x00020c69) soft_indicator_pane_cp1_t1

0xa5b3,	// (0x0001eda4) cell_app_pane_cp2_ParamLimits

0xa5b3,	// (0x0001eda4) cell_app_pane_cp2

0xec4d,	// (0x0002343e) fep_hwr_candidate_drop_down_list_pane

0xedae,	// (0x0002359f) fep_hwr_candidate_pane_g3_ParamLimits

0xedae,	// (0x0002359f) fep_hwr_candidate_pane_g3

0xcd2d,	// (0x0002151e) fep_hwr_candidate_pane_g4_ParamLimits

0xcd2d,	// (0x0002151e) fep_hwr_candidate_pane_g4

0x0002,

0xfb13,	// (0x00024304) fep_hwr_candidate_pane_g_ParamLimits

0xfb13,	// (0x00024304) fep_hwr_candidate_pane_g

0x4588,	// (0x00018d79) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4588,	// (0x00018d79) fep_vkb_candidate_drop_down_list_pane

0x498b,	// (0x0001917c) fep_vkb_candidate_pane_g3

0x4993,	// (0x00019184) fep_vkb_candidate_pane_g4

0x0002,

0xfb40,	// (0x00024331) fep_vkb_candidate_pane_g

0xee19,	// (0x0002360a) cell_hwr_candidate_pane_g1_ParamLimits

0xee27,	// (0x00023618) cell_hwr_candidate_pane_g3_ParamLimits

0xee27,	// (0x00023618) cell_hwr_candidate_pane_g3

0x5ebe,	// (0x0001a6af) cell_hwr_candidate_pane_g4_ParamLimits

0x5ebe,	// (0x0001a6af) cell_hwr_candidate_pane_g4

0x0002,

0xfb5f,	// (0x00024350) cell_hwr_candidate_pane_g_ParamLimits

0xfb5f,	// (0x00024350) cell_hwr_candidate_pane_g

0x49aa,	// (0x0001919b) cell_vkb_candidate_pane_g3_ParamLimits

0x49aa,	// (0x0001919b) cell_vkb_candidate_pane_g3

0x49c5,	// (0x000191b6) cell_vkb_candidate_pane_g4_ParamLimits

0x49c5,	// (0x000191b6) cell_vkb_candidate_pane_g4

0xbdb2,	// (0x000205a3) cell_app_pane_cp2_g1_ParamLimits

0xbdb2,	// (0x000205a3) cell_app_pane_cp2_g1

0x4c99,	// (0x0001948a) cell_app_pane_cp2_g2_ParamLimits

0x4c99,	// (0x0001948a) cell_app_pane_cp2_g2

0x0001,

0xfba9,	// (0x0002439a) cell_app_pane_cp2_g_ParamLimits

0xfba9,	// (0x0002439a) cell_app_pane_cp2_g

0x4ca5,	// (0x00019496) cell_app_pane_cp2_t1_ParamLimits

0x4ca5,	// (0x00019496) cell_app_pane_cp2_t1

0xc77b,	// (0x00020f6c) grid_highlight_pane_cp1_ParamLimits

0xc77b,	// (0x00020f6c) grid_highlight_pane_cp1

0xee66,	// (0x00023657) cell_hwr_candidate_pane_cp1_ParamLimits

0xee66,	// (0x00023657) cell_hwr_candidate_pane_cp1

0xee19,	// (0x0002360a) fep_hwr_candidate_drop_down_list_pane_g1

0xee85,	// (0x00023676) fep_hwr_candidate_drop_down_list_pane_g2

0xee92,	// (0x00023683) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbae,	// (0x0002439f) fep_hwr_candidate_drop_down_list_pane_g

0xee9f,	// (0x00023690) fep_hwr_candidate_drop_down_list_scroll_pane

0xeea8,	// (0x00023699) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xeea8,	// (0x00023699) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xeeb5,	// (0x000236a6) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xeeb5,	// (0x000236a6) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xeec2,	// (0x000236b3) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xeec2,	// (0x000236b3) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xeecf,	// (0x000236c0) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xeecf,	// (0x000236c0) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xeeea,	// (0x000236db) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xeeea,	// (0x000236db) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xef05,	// (0x000236f6) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xef05,	// (0x000236f6) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xef20,	// (0x00023711) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xef20,	// (0x00023711) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xef3b,	// (0x0002372c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xef3b,	// (0x0002372c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb5,	// (0x000243a6) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb5,	// (0x000243a6) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4cb7,	// (0x000194a8) cell_vkb_candidate_pane_cp1_ParamLimits

0x4cb7,	// (0x000194a8) cell_vkb_candidate_pane_cp1

0x4693,	// (0x00018e84) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4693,	// (0x00018e84) fep_vkb_candidate_drop_down_list_pane_g1

0x4cd7,	// (0x000194c8) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4cd7,	// (0x000194c8) fep_vkb_candidate_drop_down_list_pane_g2

0x4ce4,	// (0x000194d5) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4ce4,	// (0x000194d5) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x000243b7) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc6,	// (0x000243b7) fep_vkb_candidate_drop_down_list_pane_g

0x4cf1,	// (0x000194e2) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4cf1,	// (0x000194e2) fep_vkb_candidate_drop_down_list_scroll_pane

0x4cfe,	// (0x000194ef) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4cfe,	// (0x000194ef) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4d0b,	// (0x000194fc) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4d0b,	// (0x000194fc) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4d17,	// (0x00019508) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4d17,	// (0x00019508) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4d23,	// (0x00019514) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4d23,	// (0x00019514) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4d44,	// (0x00019535) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4d44,	// (0x00019535) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4d65,	// (0x00019556) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4d65,	// (0x00019556) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4d86,	// (0x00019577) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4d86,	// (0x00019577) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4da7,	// (0x00019598) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4da7,	// (0x00019598) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x000243be) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x000243be) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x99f0,	// (0x0001e1e1) title_pane_g1_ParamLimits

0x9a03,	// (0x0001e1f4) title_pane_g2_ParamLimits

0xf54e,	// (0x00023d3f) title_pane_g_ParamLimits

0xcc0c,	// (0x000213fd) aid_call2_pane

0xcc14,	// (0x00021405) aid_call_pane

0xcc1c,	// (0x0002140d) popup_clock_analogue_window_g1

0xcc1c,	// (0x0002140d) popup_clock_analogue_window_g2

0xe467,	// (0x00022c58) popup_clock_analogue_window_g3

0xe470,	// (0x00022c61) popup_clock_analogue_window_g4

0xc2eb,	// (0x00020adc) popup_clock_analogue_window_g5

0x0004,

0xf6e4,	// (0x00023ed5) popup_clock_analogue_window_g

0xe478,	// (0x00022c69) popup_clock_analogue_window_t1

0xe486,	// (0x00022c77) clock_digital_number_pane_ParamLimits

0xe486,	// (0x00022c77) clock_digital_number_pane

0xe492,	// (0x00022c83) clock_digital_number_pane_cp02_ParamLimits

0xe492,	// (0x00022c83) clock_digital_number_pane_cp02

0xe49e,	// (0x00022c8f) clock_digital_number_pane_cp03_ParamLimits

0xe49e,	// (0x00022c8f) clock_digital_number_pane_cp03

0xe4aa,	// (0x00022c9b) clock_digital_number_pane_cp04_ParamLimits

0xe4aa,	// (0x00022c9b) clock_digital_number_pane_cp04

0xe4b6,	// (0x00022ca7) clock_digital_separator_pane_ParamLimits

0xe4b6,	// (0x00022ca7) clock_digital_separator_pane

0xe4c2,	// (0x00022cb3) popup_clock_digital_window_t1_ParamLimits

0xe4c2,	// (0x00022cb3) popup_clock_digital_window_t1

0xc2eb,	// (0x00020adc) clock_digital_number_pane_g1

0xc2eb,	// (0x00020adc) clock_digital_number_pane_g2

0x0001,

0xf6ef,	// (0x00023ee0) clock_digital_number_pane_g

0xc2eb,	// (0x00020adc) clock_digital_separator_pane_g1

0xc2eb,	// (0x00020adc) clock_digital_separator_pane_g2

0x0001,

0xf6ef,	// (0x00023ee0) clock_digital_separator_pane_g

0xab07,	// (0x0001f2f8) aid_fill_nsta_ParamLimits

0xac3d,	// (0x0001f42e) indicator_nsta_pane_ParamLimits

0x16cb,	// (0x00015ebc) popup_clock_analogue_window

0x16cb,	// (0x00015ebc) popup_clock_digital_window

0xcd17,	// (0x00021508) grid_indicator_nsta_pane_ParamLimits

0x3de0,	// (0x000185d1) clock_nsta_pane_t2

0x0001,

0xfa93,	// (0x00024284) clock_nsta_pane_t

0xe448,	// (0x00022c39) aid_size_max_handle

0x8733,	// (0x0001cf24) aid_size_min_handle

0x109a,	// (0x0001588b) editor_scroll_pane

0x4dc2,	// (0x000195b3) ex_editor_pane

0xc908,	// (0x000210f9) scroll_pane_cp13

0xc6c5,	// (0x00020eb6) scroll_pane_cp14

0xcc4b,	// (0x0002143c) scroll_pane_cp36

0xa73e,	// (0x0001ef2f) list_single_graphic_hl_pane_cp2_ParamLimits

0xa73e,	// (0x0001ef2f) list_single_graphic_hl_pane_cp2

0xb7a5,	// (0x0001ff96) list_single_graphic_hl_pane_ParamLimits

0xb7a5,	// (0x0001ff96) list_single_graphic_hl_pane

0x6dba,	// (0x0001b5ab) aid_size_min_hl_cp1

0x4dd3,	// (0x000195c4) list_highlight_pane_cp34_ParamLimits

0x4dd3,	// (0x000195c4) list_highlight_pane_cp34

0x4de4,	// (0x000195d5) list_single_graphic_hl_pane_g1_ParamLimits

0x4de4,	// (0x000195d5) list_single_graphic_hl_pane_g1

0xbdd0,	// (0x000205c1) list_single_graphic_hl_pane_g2_ParamLimits

0xbdd0,	// (0x000205c1) list_single_graphic_hl_pane_g2

0xbdd0,	// (0x000205c1) list_single_graphic_hl_pane_g3_ParamLimits

0xbdd0,	// (0x000205c1) list_single_graphic_hl_pane_g3

0x0fd3,	// (0x000157c4) list_single_graphic_hl_pane_g4_ParamLimits

0x0fd3,	// (0x000157c4) list_single_graphic_hl_pane_g4

0x4e63,	// (0x00019654) list_single_graphic_hl_pane_g5_ParamLimits

0x4e63,	// (0x00019654) list_single_graphic_hl_pane_g5

0x0004,

0xfbde,	// (0x000243cf) list_single_graphic_hl_pane_g_ParamLimits

0xfbde,	// (0x000243cf) list_single_graphic_hl_pane_g

0xbddc,	// (0x000205cd) list_single_graphic_hl_pane_t1_ParamLimits

0xbddc,	// (0x000205cd) list_single_graphic_hl_pane_t1

0x4e33,	// (0x00019624) aid_size_min_hl_cp2

0x4e3c,	// (0x0001962d) list_highlight_pane_cp34_cp2_ParamLimits

0x4e3c,	// (0x0001962d) list_highlight_pane_cp34_cp2

0x4de4,	// (0x000195d5) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4de4,	// (0x000195d5) list_single_graphic_hl_pane_g1_cp2

0x4e49,	// (0x0001963a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4e49,	// (0x0001963a) list_single_graphic_hl_pane_g2_cp2

0xbdf2,	// (0x000205e3) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbdf2,	// (0x000205e3) list_single_graphic_hl_pane_g3_cp2

0x0fd3,	// (0x000157c4) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x0fd3,	// (0x000157c4) list_single_graphic_hl_pane_g4_cp2

0x4e63,	// (0x00019654) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4e63,	// (0x00019654) list_single_graphic_hl_pane_g5_cp2

0x87e5,	// (0x0001cfd6) control_pane_g4_ParamLimits

0x87e5,	// (0x0001cfd6) control_pane_g4

0x13c2,	// (0x00015bb3) bg_popup_sub_pane_cp10_ParamLimits

0x442d,	// (0x00018c1e) list_choice_list_pane_ParamLimits

0x443c,	// (0x00018c2d) scroll_pane_cp23

0xc495,	// (0x00020c86) bg_popup_preview_window_pane_cp02_ParamLimits

0x4a36,	// (0x00019227) list_preview_fixed_pane_ParamLimits

0x4a4c,	// (0x0001923d) list_preview_fixed_pane_cp_ParamLimits

0x4a4c,	// (0x0001923d) list_preview_fixed_pane_cp

0x4a58,	// (0x00019249) popup_preview_fixed_window_g1_ParamLimits

0x4a58,	// (0x00019249) popup_preview_fixed_window_g1

0x4a64,	// (0x00019255) popup_preview_fixed_window_g2_ParamLimits

0x4a64,	// (0x00019255) popup_preview_fixed_window_g2

0x0002,

0xfb66,	// (0x00024357) popup_preview_fixed_window_g_ParamLimits

0xfb66,	// (0x00024357) popup_preview_fixed_window_g

0xe3bc,	// (0x00022bad) aid_navi_side_left_pane_ParamLimits

0xe3d1,	// (0x00022bc2) aid_navi_side_right_pane_ParamLimits

0xe3e9,	// (0x00022bda) navi_icon_pane_stacon_ParamLimits

0xe3fd,	// (0x00022bee) navi_navi_pane_stacon_ParamLimits

0xe3e9,	// (0x00022bda) navi_text_pane_stacon_ParamLimits

0xe1d9,	// (0x000229ca) main_text_info_pane

0x4e8d,	// (0x0001967e) listscroll_text_info_pane

0x4e95,	// (0x00019686) list_text_info_pane_ParamLimits

0x4e95,	// (0x00019686) list_text_info_pane

0x4ea4,	// (0x00019695) scroll_pane_cp24_ParamLimits

0x4ea4,	// (0x00019695) scroll_pane_cp24

0xbe00,	// (0x000205f1) list_text_info_pane_t1_ParamLimits

0xbe00,	// (0x000205f1) list_text_info_pane_t1

0x895a,	// (0x0001d14b) popup_fast_swap2_window_ParamLimits

0x895a,	// (0x0001d14b) popup_fast_swap2_window

0x4ef6,	// (0x000196e7) aid_size_cell_fast2

0xc2e1,	// (0x00020ad2) bg_popup_window_pane_cp17

0x1e67,	// (0x00016658) heading_pane_cp2

0xc5c9,	// (0x00020dba) listscroll_fast2_pane

0x4f00,	// (0x000196f1) grid_fast2_pane

0x4f0a,	// (0x000196fb) listscroll_fast2_pane_g1

0x4f12,	// (0x00019703) listscroll_fast2_pane_g2

0x0001,

0xfbe9,	// (0x000243da) listscroll_fast2_pane_g

0xc908,	// (0x000210f9) scroll_pane_cp26

0x4f1c,	// (0x0001970d) cell_fast2_pane_ParamLimits

0x4f1c,	// (0x0001970d) cell_fast2_pane

0x4f31,	// (0x00019722) cell_fast2_pane_g1

0x4f3a,	// (0x0001972b) cell_fast2_pane_g2

0x4f43,	// (0x00019734) cell_fast2_pane_g3

0x0002,

0xfbee,	// (0x000243df) cell_fast2_pane_g

0xc5fc,	// (0x00020ded) grid_highlight_pane_cp9

0xe86f,	// (0x00023060) main_eswt_pane_ParamLimits

0xe86f,	// (0x00023060) main_eswt_pane

0x4eb9,	// (0x000196aa) list_single_text_info_pane

0x4f4b,	// (0x0001973c) eswt_ctrl_button_pane

0x4f4b,	// (0x0001973c) eswt_ctrl_canvas_pane

0xbe1c,	// (0x0002060d) eswt_ctrl_combo_pane

0x4f4b,	// (0x0001973c) eswt_ctrl_default_pane

0x4f4b,	// (0x0001973c) eswt_ctrl_label_pane

0x4f5b,	// (0x0001974c) eswt_ctrl_wait_pane

0xbe24,	// (0x00020615) eswt_shell_pane

0xc2e1,	// (0x00020ad2) listscroll_eswt_app_pane

0x4f83,	// (0x00019774) popup_eswt_tasktip_window_ParamLimits

0x4f83,	// (0x00019774) popup_eswt_tasktip_window

0x1a33,	// (0x00016224) bg_popup_window_pane_cp18

0x4f94,	// (0x00019785) eswt_control_pane_g1_ParamLimits

0x4f94,	// (0x00019785) eswt_control_pane_g1

0x4fa1,	// (0x00019792) eswt_control_pane_g2_ParamLimits

0x4fa1,	// (0x00019792) eswt_control_pane_g2

0x4fae,	// (0x0001979f) eswt_control_pane_g3_ParamLimits

0x4fae,	// (0x0001979f) eswt_control_pane_g3

0x4fbb,	// (0x000197ac) eswt_control_pane_g4_ParamLimits

0x4fbb,	// (0x000197ac) eswt_control_pane_g4

0x0003,

0xfbf5,	// (0x000243e6) eswt_control_pane_g_ParamLimits

0xfbf5,	// (0x000243e6) eswt_control_pane_g

0xc77b,	// (0x00020f6c) bg_button_pane_ParamLimits

0xc77b,	// (0x00020f6c) bg_button_pane

0xc611,	// (0x00020e02) common_borders_pane_copy2_ParamLimits

0xc611,	// (0x00020e02) common_borders_pane_copy2

0x4fc8,	// (0x000197b9) control_button_pane_g1_ParamLimits

0x4fc8,	// (0x000197b9) control_button_pane_g1

0x4fd4,	// (0x000197c5) control_button_pane_g2_ParamLimits

0x4fd4,	// (0x000197c5) control_button_pane_g2

0x4fe0,	// (0x000197d1) control_button_pane_g3_ParamLimits

0x4fe0,	// (0x000197d1) control_button_pane_g3

0x0002,

0xfbfe,	// (0x000243ef) control_button_pane_g_ParamLimits

0xfbfe,	// (0x000243ef) control_button_pane_g

0x4ff4,	// (0x000197e5) control_button_pane_t1

0x5002,	// (0x000197f3) control_button_pane_t2

0x0001,

0xfc05,	// (0x000243f6) control_button_pane_t

0x1913,	// (0x00016104) bg_button_pane_g1

0x1923,	// (0x00016114) bg_button_pane_g2

0x191b,	// (0x0001610c) bg_button_pane_g3

0x1933,	// (0x00016124) bg_button_pane_g4

0x192b,	// (0x0001611c) bg_button_pane_g5

0x193b,	// (0x0001612c) bg_button_pane_g6

0x1943,	// (0x00016134) bg_button_pane_g7

0x1953,	// (0x00016144) bg_button_pane_g8

0x194b,	// (0x0001613c) bg_button_pane_g9

0x0008,

0xf846,	// (0x00024037) bg_button_pane_g

0x43e8,	// (0x00018bd9) common_borders_pane_ParamLimits

0x43e8,	// (0x00018bd9) common_borders_pane

0x4f94,	// (0x00019785) eswt_control_pane_g1_copy1_ParamLimits

0x4f94,	// (0x00019785) eswt_control_pane_g1_copy1

0x4fa1,	// (0x00019792) eswt_control_pane_g2_copy1_ParamLimits

0x4fa1,	// (0x00019792) eswt_control_pane_g2_copy1

0x4fae,	// (0x0001979f) eswt_control_pane_g3_copy1_ParamLimits

0x4fae,	// (0x0001979f) eswt_control_pane_g3_copy1

0x4fbb,	// (0x000197ac) eswt_control_pane_g4_copy1_ParamLimits

0x4fbb,	// (0x000197ac) eswt_control_pane_g4_copy1

0x4423,	// (0x00018c14) bg_eswt_ctrl_canvas_pane_g1

0x43e8,	// (0x00018bd9) common_borders_pane_cp2_ParamLimits

0x43e8,	// (0x00018bd9) common_borders_pane_cp2

0x43e8,	// (0x00018bd9) common_borders_pane_cp3_ParamLimits

0x43e8,	// (0x00018bd9) common_borders_pane_cp3

0x5010,	// (0x00019801) separator_horizontal_pane

0x5018,	// (0x00019809) separator_vertical_pane

0x4f94,	// (0x00019785) eswt_control_pane_g1_copy2_ParamLimits

0x4f94,	// (0x00019785) eswt_control_pane_g1_copy2

0x4fa1,	// (0x00019792) eswt_control_pane_g2_copy2_ParamLimits

0x4fa1,	// (0x00019792) eswt_control_pane_g2_copy2

0x4fae,	// (0x0001979f) eswt_control_pane_g3_copy2_ParamLimits

0x4fae,	// (0x0001979f) eswt_control_pane_g3_copy2

0x4fbb,	// (0x000197ac) eswt_control_pane_g4_copy2_ParamLimits

0x4fbb,	// (0x000197ac) eswt_control_pane_g4_copy2

0xc2e1,	// (0x00020ad2) common_borders_pane_cp4

0x5021,	// (0x00019812) separator_horizontal_pane_g1

0x502a,	// (0x0001981b) separator_horizontal_pane_g2

0x5033,	// (0x00019824) separator_horizontal_pane_g3

0x0002,

0xfc0a,	// (0x000243fb) separator_horizontal_pane_g

0x4f94,	// (0x00019785) eswt_control_pane_g1_copy3_ParamLimits

0x4f94,	// (0x00019785) eswt_control_pane_g1_copy3

0x4fa1,	// (0x00019792) eswt_control_pane_g2_copy3_ParamLimits

0x4fa1,	// (0x00019792) eswt_control_pane_g2_copy3

0x4fae,	// (0x0001979f) eswt_control_pane_g3_copy3_ParamLimits

0x4fae,	// (0x0001979f) eswt_control_pane_g3_copy3

0x4fbb,	// (0x000197ac) eswt_control_pane_g4_copy3_ParamLimits

0x4fbb,	// (0x000197ac) eswt_control_pane_g4_copy3

0xc2e1,	// (0x00020ad2) common_borders_pane_cp5

0x503c,	// (0x0001982d) separator_vertical_pane_g1

0x5045,	// (0x00019836) separator_vertical_pane_g2

0x504e,	// (0x0001983f) separator_vertical_pane_g3

0x0002,

0xfc11,	// (0x00024402) separator_vertical_pane_g

0x4f94,	// (0x00019785) eswt_control_pane_g1_copy4_ParamLimits

0x4f94,	// (0x00019785) eswt_control_pane_g1_copy4

0x4fa1,	// (0x00019792) eswt_control_pane_g2_copy4_ParamLimits

0x4fa1,	// (0x00019792) eswt_control_pane_g2_copy4

0x4fae,	// (0x0001979f) eswt_control_pane_g3_copy4_ParamLimits

0x4fae,	// (0x0001979f) eswt_control_pane_g3_copy4

0x4fbb,	// (0x000197ac) eswt_control_pane_g4_copy4_ParamLimits

0x4fbb,	// (0x000197ac) eswt_control_pane_g4_copy4

0xbe44,	// (0x00020635) eswt_ctrl_combo_button_pane

0xbe4c,	// (0x0002063d) eswt_ctrl_input_pane

0xbe54,	// (0x00020645) popup_choice_list_window_cp70

0xbe5c,	// (0x0002064d) eswt_ctrl_input_pane_t1

0xc2e1,	// (0x00020ad2) input_focus_pane_cp70

0x43e8,	// (0x00018bd9) bg_button_pane_cp70_ParamLimits

0x43e8,	// (0x00018bd9) bg_button_pane_cp70

0xbe6a,	// (0x0002065b) eswt_ctrl_combo_button_pane_g1

0x5085,	// (0x00019876) wait_bar_pane_cp70

0x1a33,	// (0x00016224) bg_popup_window_pane_cp70_ParamLimits

0x1a33,	// (0x00016224) bg_popup_window_pane_cp70

0x508d,	// (0x0001987e) popup_eswt_tasktip_window_t1

0x50a3,	// (0x00019894) wait_bar_pane_cp71_ParamLimits

0x50a3,	// (0x00019894) wait_bar_pane_cp71

0x50af,	// (0x000198a0) grid_eswt_app_pane

0xcaef,	// (0x000212e0) scroll_pane_cp70

0xbe72,	// (0x00020663) cell_eswt_app_pane_ParamLimits

0xbe72,	// (0x00020663) cell_eswt_app_pane

0xbe9c,	// (0x0002068d) cell_eswt_app_pane_g1_ParamLimits

0xbe9c,	// (0x0002068d) cell_eswt_app_pane_g1

0xbecb,	// (0x000206bc) cell_eswt_app_pane_g2_ParamLimits

0xbecb,	// (0x000206bc) cell_eswt_app_pane_g2

0x0001,

0xfc18,	// (0x00024409) cell_eswt_app_pane_g_ParamLimits

0xfc18,	// (0x00024409) cell_eswt_app_pane_g

0xbeef,	// (0x000206e0) cell_eswt_app_pane_t1_ParamLimits

0xbeef,	// (0x000206e0) cell_eswt_app_pane_t1

0x516d,	// (0x0001995e) grid_highlight_pane_cp70_ParamLimits

0x516d,	// (0x0001995e) grid_highlight_pane_cp70

0x0f6f,	// (0x00015760) set_content_pane_g1

0xaabc,	// (0x0001f2ad) status_small_volume_pane

0x92ce,	// (0x0001dabf) status_small_volume_pane_g1

0x92d6,	// (0x0001dac7) volume_small2_pane

0x92df,	// (0x0001dad0) volume_small2_pane_g1

0x92e8,	// (0x0001dad9) volume_small2_pane_g2

0x92f1,	// (0x0001dae2) volume_small2_pane_g3

0x92fa,	// (0x0001daeb) volume_small2_pane_g4

0x9303,	// (0x0001daf4) volume_small2_pane_g5

0x930c,	// (0x0001dafd) volume_small2_pane_g6

0x9315,	// (0x0001db06) volume_small2_pane_g7

0x931e,	// (0x0001db0f) volume_small2_pane_g8

0x9327,	// (0x0001db18) volume_small2_pane_g9

0x9330,	// (0x0001db21) volume_small2_pane_g10

0x0009,

0xfc1d,	// (0x0002440e) volume_small2_pane_g

0x47db,	// (0x00018fcc) fep_vkb_top_text_pane_g1_ParamLimits

0xbd5a,	// (0x0002054b) fep_vkb_top_text_pane_t1_ParamLimits

0x4a70,	// (0x00019261) popup_preview_fixed_window_g3_ParamLimits

0x4a70,	// (0x00019261) popup_preview_fixed_window_g3

0x8ff7,	// (0x0001d7e8) popup_toolbar_trans_pane

0xb5e7,	// (0x0001fdd8) aid_height_set_list_ParamLimits

0x2dcd,	// (0x000175be) aid_size_parent_ParamLimits

0x13c2,	// (0x00015bb3) list_highlight_pane_cp2_ParamLimits

0x0f6f,	// (0x00015760) set_content_pane_g1_ParamLimits

0xb7b7,	// (0x0001ffa8) list_single_image_pane_ParamLimits

0xb7b7,	// (0x0001ffa8) list_single_image_pane

0xbf21,	// (0x00020712) aid_size_cell_image_ParamLimits

0xbf21,	// (0x00020712) aid_size_cell_image

0xbf2e,	// (0x0002071f) grid_single_image_pane_ParamLimits

0xbf2e,	// (0x0002071f) grid_single_image_pane

0x4a9e,	// (0x0001928f) list_single_image_pane_g1_ParamLimits

0x4a9e,	// (0x0001928f) list_single_image_pane_g1

0x4aaa,	// (0x0001929b) list_single_image_pane_g2_ParamLimits

0x4aaa,	// (0x0001929b) list_single_image_pane_g2

0x0001,

0xfc32,	// (0x00024423) list_single_image_pane_g_ParamLimits

0xfc32,	// (0x00024423) list_single_image_pane_g

0x5194,	// (0x00019985) list_single_image_pane_t1_ParamLimits

0x5194,	// (0x00019985) list_single_image_pane_t1

0xbf3a,	// (0x0002072b) cell_image_list_pane_ParamLimits

0xbf3a,	// (0x0002072b) cell_image_list_pane

0xbf4e,	// (0x0002073f) cell_image_list_pane_g1

0xbf57,	// (0x00020748) cell_image_list_pane_g2

0x0001,

0xfc37,	// (0x00024428) cell_image_list_pane_g

0xbf60,	// (0x00020751) aid_size_cell_tb_trans_pane

0xc77b,	// (0x00020f6c) bg_tb_trans_pane

0xbf72,	// (0x00020763) grid_tb_trans_pane

0x1913,	// (0x00016104) bg_tb_trans_pane_g1

0x1923,	// (0x00016114) bg_tb_trans_pane_g2

0x191b,	// (0x0001610c) bg_tb_trans_pane_g3

0x1933,	// (0x00016124) bg_tb_trans_pane_g4

0x192b,	// (0x0001611c) bg_tb_trans_pane_g5

0x1953,	// (0x00016144) bg_tb_trans_pane_g6

0x194b,	// (0x0001613c) bg_tb_trans_pane_g7

0x193b,	// (0x0001612c) bg_tb_trans_pane_g8

0x1943,	// (0x00016134) bg_tb_trans_pane_g9

0x0008,

0xfc3c,	// (0x0002442d) bg_tb_trans_pane_g

0xbf86,	// (0x00020777) cell_toolbar_trans_pane_ParamLimits

0xbf86,	// (0x00020777) cell_toolbar_trans_pane

0x4423,	// (0x00018c14) cell_toolbar_trans_pane_g1

0xba72,	// (0x00020263) list_form2_midp_pane_t1

0xba80,	// (0x00020271) list_form2_midp_pane_t2

0x0001,

0xfad9,	// (0x000242ca) list_form2_midp_pane_t

0x3fbd,	// (0x000187ae) scroll_pane_cp51_ParamLimits

0x41c6,	// (0x000189b7) form2_midp_wait_pane_g1

0x41cf,	// (0x000189c0) form2_midp_wait_pane_g2

0x41d8,	// (0x000189c9) form2_midp_wait_pane_g3

0x0002,

0xfaee,	// (0x000242df) form2_midp_wait_pane_g

0xc351,	// (0x00020b42) list_highlight_pane_cp21_ParamLimits

0x4220,	// (0x00018a11) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x422f,	// (0x00018a20) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x2fd0,	// (0x000177c1) list_single_2graphic_im_pane_ParamLimits

0x2fd0,	// (0x000177c1) list_single_2graphic_im_pane

0xbfac,	// (0x0002079d) list_single_2graphic_im_pane_g1_ParamLimits

0xbfac,	// (0x0002079d) list_single_2graphic_im_pane_g1

0xbfbd,	// (0x000207ae) list_single_2graphic_im_pane_g2_ParamLimits

0xbfbd,	// (0x000207ae) list_single_2graphic_im_pane_g2

0xbfc9,	// (0x000207ba) list_single_2graphic_im_pane_g3_ParamLimits

0xbfc9,	// (0x000207ba) list_single_2graphic_im_pane_g3

0x0003,

0xfc4f,	// (0x00024440) list_single_2graphic_im_pane_g_ParamLimits

0xfc4f,	// (0x00024440) list_single_2graphic_im_pane_g

0xbfdd,	// (0x000207ce) list_single_2graphic_im_pane_t1_ParamLimits

0xbfdd,	// (0x000207ce) list_single_2graphic_im_pane_t1

0x4a7c,	// (0x0001926d) list_single_graphic_2heading_pane_fp_ParamLimits

0x4a7c,	// (0x0001926d) list_single_graphic_2heading_pane_fp

0x4ae1,	// (0x000192d2) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4ae1,	// (0x000192d2) list_single_graphic_2heading_pane_fp_g1

0x4a92,	// (0x00019283) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4a92,	// (0x00019283) list_single_graphic_2heading_pane_fp_g2

0x4a9e,	// (0x0001928f) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4a9e,	// (0x0001928f) list_single_graphic_2heading_pane_fp_g3

0x4aaa,	// (0x0001929b) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4aaa,	// (0x0001929b) list_single_graphic_2heading_pane_fp_g4

0x4abe,	// (0x000192af) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4abe,	// (0x000192af) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb76,	// (0x00024367) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb76,	// (0x00024367) list_single_graphic_2heading_pane_fp_g

0x528a,	// (0x00019a7b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x528a,	// (0x00019a7b) list_single_graphic_2heading_pane_fp_t1

0x4b19,	// (0x0001930a) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4b19,	// (0x0001930a) list_single_graphic_2heading_pane_fp_t2

0x52a0,	// (0x00019a91) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x52a0,	// (0x00019a91) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc58,	// (0x00024449) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc58,	// (0x00024449) list_single_graphic_2heading_pane_fp_t

0x44af,	// (0x00018ca0) fep_hwr_write_pane_g5_ParamLimits

0x44af,	// (0x00018ca0) fep_hwr_write_pane_g5

0x44bb,	// (0x00018cac) fep_hwr_write_pane_g6_ParamLimits

0x44bb,	// (0x00018cac) fep_hwr_write_pane_g6

0xbe24,	// (0x00020615) eswt_shell_pane_ParamLimits

0x1a33,	// (0x00016224) bg_popup_window_pane_cp18_ParamLimits

0x2d03,	// (0x000174f4) heading_pane_cp70

0x508d,	// (0x0001987e) popup_eswt_tasktip_window_t1_ParamLimits

0xab62,	// (0x0001f353) aid_touch_tab_arrow_left

0xab78,	// (0x0001f369) aid_touch_tab_arrow_right

0x9a1b,	// (0x0001e20c) title_pane_g3_ParamLimits

0x9a1b,	// (0x0001e20c) title_pane_g3

0xc712,	// (0x00020f03) set_value_pane_g1

0x8ff7,	// (0x0001d7e8) popup_toolbar_trans_pane_ParamLimits

0xbf60,	// (0x00020751) aid_size_cell_tb_trans_pane_ParamLimits

0xc77b,	// (0x00020f6c) bg_tb_trans_pane_ParamLimits

0xbf72,	// (0x00020763) grid_tb_trans_pane_ParamLimits

0xc495,	// (0x00020c86) cont_note_pane_ParamLimits

0xc495,	// (0x00020c86) cont_note_pane

0xc611,	// (0x00020e02) cont_snote2_single_text_pane_ParamLimits

0xc611,	// (0x00020e02) cont_snote2_single_text_pane

0xc611,	// (0x00020e02) cont_snote2_single_graphic_pane_ParamLimits

0xc611,	// (0x00020e02) cont_snote2_single_graphic_pane

0x2086,	// (0x00016877) cont_note_wait_pane_ParamLimits

0x2086,	// (0x00016877) cont_note_wait_pane

0x2086,	// (0x00016877) cont_note_image_pane_ParamLimits

0x2086,	// (0x00016877) cont_note_image_pane

0x52b6,	// (0x00019aa7) popup_note2_window_g1_ParamLimits

0x52b6,	// (0x00019aa7) popup_note2_window_g1

0xc01b,	// (0x0002080c) popup_note2_window_t1_ParamLimits

0xc01b,	// (0x0002080c) popup_note2_window_t1

0xc060,	// (0x00020851) popup_note2_window_t2_ParamLimits

0xc060,	// (0x00020851) popup_note2_window_t2

0xc0a5,	// (0x00020896) popup_note2_window_t3_ParamLimits

0xc0a5,	// (0x00020896) popup_note2_window_t3

0x53b6,	// (0x00019ba7) popup_note2_window_t4_ParamLimits

0x53b6,	// (0x00019ba7) popup_note2_window_t4

0xc519,	// (0x00020d0a) popup_note2_window_t5_ParamLimits

0xc519,	// (0x00020d0a) popup_note2_window_t5

0x0004,

0xfc64,	// (0x00024455) popup_note2_window_t_ParamLimits

0xfc64,	// (0x00024455) popup_note2_window_t

0x53e5,	// (0x00019bd6) popup_note2_image_window_g1_ParamLimits

0x53e5,	// (0x00019bd6) popup_note2_image_window_g1

0xc0ea,	// (0x000208db) popup_note2_image_window_g2_ParamLimits

0xc0ea,	// (0x000208db) popup_note2_image_window_g2

0x0001,

0xfc6f,	// (0x00024460) popup_note2_image_window_g_ParamLimits

0xfc6f,	// (0x00024460) popup_note2_image_window_g

0x5403,	// (0x00019bf4) popup_note2_image_window_t1_ParamLimits

0x5403,	// (0x00019bf4) popup_note2_image_window_t1

0x541b,	// (0x00019c0c) popup_note2_image_window_t2_ParamLimits

0x541b,	// (0x00019c0c) popup_note2_image_window_t2

0x5433,	// (0x00019c24) popup_note2_image_window_t3_ParamLimits

0x5433,	// (0x00019c24) popup_note2_image_window_t3

0x0002,

0xfc74,	// (0x00024465) popup_note2_image_window_t_ParamLimits

0xfc74,	// (0x00024465) popup_note2_image_window_t

0x2094,	// (0x00016885) popup_note2_wait_window_g1_ParamLimits

0x2094,	// (0x00016885) popup_note2_wait_window_g1

0x20a0,	// (0x00016891) popup_note2_wait_window_g2_ParamLimits

0x20a0,	// (0x00016891) popup_note2_wait_window_g2

0x20ac,	// (0x0001689d) popup_note2_wait_window_g3_ParamLimits

0x20ac,	// (0x0001689d) popup_note2_wait_window_g3

0x0002,

0xf828,	// (0x00024019) popup_note2_wait_window_g_ParamLimits

0xf828,	// (0x00024019) popup_note2_wait_window_g

0x544f,	// (0x00019c40) popup_note2_wait_window_t1_ParamLimits

0x544f,	// (0x00019c40) popup_note2_wait_window_t1

0x546d,	// (0x00019c5e) popup_note2_wait_window_t2_ParamLimits

0x546d,	// (0x00019c5e) popup_note2_wait_window_t2

0x548b,	// (0x00019c7c) popup_note2_wait_window_t3_ParamLimits

0x548b,	// (0x00019c7c) popup_note2_wait_window_t3

0x549d,	// (0x00019c8e) popup_note2_wait_window_t4_ParamLimits

0x549d,	// (0x00019c8e) popup_note2_wait_window_t4

0x0003,

0xfc7b,	// (0x0002446c) popup_note2_wait_window_t_ParamLimits

0xfc7b,	// (0x0002446c) popup_note2_wait_window_t

0x54af,	// (0x00019ca0) wait_bar2_pane_ParamLimits

0x54af,	// (0x00019ca0) wait_bar2_pane

0x54c7,	// (0x00019cb8) popup_snote2_single_text_window_g1_ParamLimits

0x54c7,	// (0x00019cb8) popup_snote2_single_text_window_g1

0x54ef,	// (0x00019ce0) popup_snote2_single_text_window_t1_ParamLimits

0x54ef,	// (0x00019ce0) popup_snote2_single_text_window_t1

0x553b,	// (0x00019d2c) popup_snote2_single_text_window_t2_ParamLimits

0x553b,	// (0x00019d2c) popup_snote2_single_text_window_t2

0x5587,	// (0x00019d78) popup_snote2_single_text_window_t3_ParamLimits

0x5587,	// (0x00019d78) popup_snote2_single_text_window_t3

0x55c8,	// (0x00019db9) popup_snote2_single_text_window_t4_ParamLimits

0x55c8,	// (0x00019db9) popup_snote2_single_text_window_t4

0x55fe,	// (0x00019def) popup_snote2_single_text_window_t5_ParamLimits

0x55fe,	// (0x00019def) popup_snote2_single_text_window_t5

0x0004,

0xfc84,	// (0x00024475) popup_snote2_single_text_window_t_ParamLimits

0xfc84,	// (0x00024475) popup_snote2_single_text_window_t

0xc0fc,	// (0x000208ed) popup_snote2_single_graphic_window_g1_ParamLimits

0xc0fc,	// (0x000208ed) popup_snote2_single_graphic_window_g1

0x5651,	// (0x00019e42) popup_snote2_single_graphic_window_g2_ParamLimits

0x5651,	// (0x00019e42) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8f,	// (0x00024480) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8f,	// (0x00024480) popup_snote2_single_graphic_window_g

0x5679,	// (0x00019e6a) popup_snote2_single_graphic_window_t1_ParamLimits

0x5679,	// (0x00019e6a) popup_snote2_single_graphic_window_t1

0x56c5,	// (0x00019eb6) popup_snote2_single_graphic_window_t2_ParamLimits

0x56c5,	// (0x00019eb6) popup_snote2_single_graphic_window_t2

0x5587,	// (0x00019d78) popup_snote2_single_graphic_window_t3_ParamLimits

0x5587,	// (0x00019d78) popup_snote2_single_graphic_window_t3

0x55c8,	// (0x00019db9) popup_snote2_single_graphic_window_t4_ParamLimits

0x55c8,	// (0x00019db9) popup_snote2_single_graphic_window_t4

0x55fe,	// (0x00019def) popup_snote2_single_graphic_window_t5_ParamLimits

0x55fe,	// (0x00019def) popup_snote2_single_graphic_window_t5

0x0004,

0xfc94,	// (0x00024485) popup_snote2_single_graphic_window_t_ParamLimits

0xfc94,	// (0x00024485) popup_snote2_single_graphic_window_t

0x3e7a,	// (0x0001866b) clock_nsta_pane_cp2_t1

0x3e7a,	// (0x0001866b) clock_nsta_pane_cp2_t2

0x0001,

0xfaaf,	// (0x000242a0) clock_nsta_pane_cp2_t

0xc79a,	// (0x00020f8b) form_field_data_wide_pane_g1_ParamLimits

0xc7a6,	// (0x00020f97) form_field_data_wide_pane_g2_ParamLimits

0xc7a6,	// (0x00020f97) form_field_data_wide_pane_g2

0xc7b2,	// (0x00020fa3) form_field_data_wide_pane_g3_ParamLimits

0xc7b2,	// (0x00020fa3) form_field_data_wide_pane_g3

0x0002,

0xf667,	// (0x00023e58) form_field_data_wide_pane_g_ParamLimits

0xf667,	// (0x00023e58) form_field_data_wide_pane_g

0xb9a3,	// (0x00020194) grid_touch_3_pane_ParamLimits

0xb9a3,	// (0x00020194) grid_touch_3_pane

0xc124,	// (0x00020915) cell_touch_3_pane_ParamLimits

0xc124,	// (0x00020915) cell_touch_3_pane

0x4423,	// (0x00018c14) cell_touch_3_pane_g1

0x4423,	// (0x00018c14) cell_touch_3_pane_g2

0x0001,

0xfb34,	// (0x00024325) cell_touch_3_pane_g

0xc54b,	// (0x00020d3c) cont_query_data_pane

0xc553,	// (0x00020d44) cont_query_data_pane_cp1

0x573f,	// (0x00019f30) button_value_adjust_pane_cp7

0x5747,	// (0x00019f38) query_popup_pane_cp3

0xcc7d,	// (0x0002146e) bg_popup_sub_pane_cp22_ParamLimits

0x8750,	// (0x0001cf41) navi_navi_volume_pane_cp2

0x875f,	// (0x0001cf50) popup_side_volume_key_window_g2

0x876e,	// (0x0001cf5f) popup_side_volume_key_window_g3

0x0002,

0xf6fd,	// (0x00023eee) popup_side_volume_key_window_g

0x877d,	// (0x0001cf6e) popup_side_volume_key_window_t2

0x0001,

0xf704,	// (0x00023ef5) popup_side_volume_key_window_t

0xa906,	// (0x0001f0f7) popup_side_volume_key_window_ParamLimits

0xa107,	// (0x0001e8f8) list_double_graphic_pane_g4_ParamLimits

0xa107,	// (0x0001e8f8) list_double_graphic_pane_g4

0xb792,	// (0x0001ff83) list_single_2heading_msg_pane_ParamLimits

0xb792,	// (0x0001ff83) list_single_2heading_msg_pane

0xc16d,	// (0x0002095e) list_single_2heading_msg_pane_g1_ParamLimits

0xc16d,	// (0x0002095e) list_single_2heading_msg_pane_g1

0xc179,	// (0x0002096a) list_single_2heading_msg_pane_g2_ParamLimits

0xc179,	// (0x0002096a) list_single_2heading_msg_pane_g2

0xc18c,	// (0x0002097d) list_single_2heading_msg_pane_g3_ParamLimits

0xc18c,	// (0x0002097d) list_single_2heading_msg_pane_g3

0xc198,	// (0x00020989) list_single_2heading_msg_pane_g4_ParamLimits

0xc198,	// (0x00020989) list_single_2heading_msg_pane_g4

0x0003,

0xfc9f,	// (0x00024490) list_single_2heading_msg_pane_g_ParamLimits

0xfc9f,	// (0x00024490) list_single_2heading_msg_pane_g

0xc1b0,	// (0x000209a1) list_single_2heading_msg_pane_t1_ParamLimits

0xc1b0,	// (0x000209a1) list_single_2heading_msg_pane_t1

0xc1d8,	// (0x000209c9) list_single_2heading_msg_pane_t2_ParamLimits

0xc1d8,	// (0x000209c9) list_single_2heading_msg_pane_t2

0xc243,	// (0x00020a34) list_single_2heading_msg_pane_t3_ParamLimits

0xc243,	// (0x00020a34) list_single_2heading_msg_pane_t3

0x5836,	// (0x0001a027) list_single_2heading_msg_pane_t4_ParamLimits

0x5836,	// (0x0001a027) list_single_2heading_msg_pane_t4

0x0003,

0xfca8,	// (0x00024499) list_single_2heading_msg_pane_t_ParamLimits

0xfca8,	// (0x00024499) list_single_2heading_msg_pane_t

0xc2ff,	// (0x00020af0) title_pane_g4_ParamLimits

0xc2ff,	// (0x00020af0) title_pane_g4

0xe30d,	// (0x00022afe) title_pane_stacon_g3_ParamLimits

0xe30d,	// (0x00022afe) title_pane_stacon_g3

0x524d,	// (0x00019a3e) list_single_2graphic_im_pane_g4_ParamLimits

0x524d,	// (0x00019a3e) list_single_2graphic_im_pane_g4

0xb482,	// (0x0001fc73) popup_side_volume_key_window_cp

0x33bc,	// (0x00017bad) main_idle_act2_pane_t1

0xe947,	// (0x00023138) toolbar_button_pane_g10

0x9f94,	// (0x0001e785) popup_toolbar_window_cp1

0x3e6b,	// (0x0001865c) clock_nsta_pane_cp_t1

0x3e6b,	// (0x0001865c) clock_nsta_pane_cp_t2

0x0001,

0xfaaa,	// (0x0002429b) clock_nsta_pane_cp_t

0x8750,	// (0x0001cf41) navi_navi_volume_pane_cp2_ParamLimits

0xe4e1,	// (0x00022cd2) popup_side_volume_key_window_g1_ParamLimits

0x875f,	// (0x0001cf50) popup_side_volume_key_window_g2_ParamLimits

0x876e,	// (0x0001cf5f) popup_side_volume_key_window_g3_ParamLimits

0xf6fd,	// (0x00023eee) popup_side_volume_key_window_g_ParamLimits

0xec39,	// (0x0002342a) fep_hwr_aid_pane

0xece0,	// (0x000234d1) bg_fep_hwr_top_pane_g4_ParamLimits

0x447f,	// (0x00018c70) fep_hwr_top_pane_g1_ParamLimits

0x4491,	// (0x00018c82) fep_hwr_top_pane_g2_ParamLimits

0xed00,	// (0x000234f1) fep_hwr_top_pane_g3_ParamLimits

0xfaff,	// (0x000242f0) fep_hwr_top_pane_g_ParamLimits

0xed15,	// (0x00023506) fep_hwr_top_text_pane_ParamLimits

0x2890,	// (0x00017081) aid_touch_tab_arrow_arrow_2

0x2899,	// (0x0001708a) aid_touch_tab_arrow_left_2

0xec4d,	// (0x0002343e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xec84,	// (0x00023475) fep_hwr_prediction_pane

0x45ea,	// (0x00018ddb) fep_vkb_prediction_pane

0xbd3a,	// (0x0002052b) fep_vkb_side_pane_g3_ParamLimits

0xbd3a,	// (0x0002052b) fep_vkb_side_pane_g3

0xee19,	// (0x0002360a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xee85,	// (0x00023676) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xee92,	// (0x00023683) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbae,	// (0x0002439f) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xef56,	// (0x00023747) fep_hwr_prediction_pane_g1

0xef60,	// (0x00023751) fep_hwr_prediction_pane_g2

0xef68,	// (0x00023759) fep_hwr_prediction_pane_g3

0xef70,	// (0x00023761) fep_hwr_prediction_pane_g4

0x0003,

0xfcb1,	// (0x000244a2) fep_hwr_prediction_pane_g

0x585b,	// (0x0001a04c) fep_vkb_prediction_pane_g1

0x5865,	// (0x0001a056) fep_vkb_prediction_pane_g2

0x586d,	// (0x0001a05e) fep_vkb_prediction_pane_g3

0x5875,	// (0x0001a066) fep_vkb_prediction_pane_g4

0x0003,

0xfcba,	// (0x000244ab) fep_vkb_prediction_pane_g

0x91cd,	// (0x0001d9be) slider_set_pane_g3

0x91e1,	// (0x0001d9d2) slider_set_pane_g4

0x91f9,	// (0x0001d9ea) slider_set_pane_g5

0x91cd,	// (0x0001d9be) slider_set_pane_g6

0x920f,	// (0x0001da00) slider_set_pane_g7

0x2f2e,	// (0x0001771f) slider_form_pane_g3

0x2f37,	// (0x00017728) slider_form_pane_g4

0x2f3f,	// (0x00017730) slider_form_pane_g5

0x2f2e,	// (0x0001771f) slider_form_pane_g6

0xb732,	// (0x0001ff23) slider_form_pane_g7

0x369f,	// (0x00017e90) slider_set_pane_vc_g3

0x36a8,	// (0x00017e99) slider_set_pane_vc_g4

0x36b1,	// (0x00017ea2) slider_set_pane_vc_g5

0x369f,	// (0x00017e90) slider_set_pane_vc_g6

0x36ba,	// (0x00017eab) slider_set_pane_vc_g7

0x3b4f,	// (0x00018340) slider_form_pane_vc_g1

0x3b58,	// (0x00018349) slider_form_pane_vc_g2

0x3b61,	// (0x00018352) slider_form_pane_vc_g3

0x3b4f,	// (0x00018340) slider_form_pane_vc_g4

0x3b6a,	// (0x0001835b) slider_form_pane_vc_g5

0x0004,

0xfa7c,	// (0x0002426d) slider_form_pane_vc_g

0xe1d9,	// (0x000229ca) main_idle_act3_pane

0x587d,	// (0x0001a06e) ai3_links_pane

0xcd3a,	// (0x0002152b) popup_ai3_data_window_ParamLimits

0xcd3a,	// (0x0002152b) popup_ai3_data_window

0xc2e1,	// (0x00020ad2) grid_ai3_links_pane

0xcd52,	// (0x00021543) cell_ai3_links_pane_ParamLimits

0xcd52,	// (0x00021543) cell_ai3_links_pane

0x58b6,	// (0x0001a0a7) bg_popup_sub_pane_cp11

0x58c3,	// (0x0001a0b4) cell_ai3_links_pane_g1

0xc2e1,	// (0x00020ad2) bg_popup_sub_pane_cp12

0x58e8,	// (0x0001a0d9) heading_ai3_data_pane

0x58f0,	// (0x0001a0e1) list_ai3_gene_pane

0x58fc,	// (0x0001a0ed) popup_ai3_data_window_g1

0x5904,	// (0x0001a0f5) heading_ai3_data_pane_g1

0x590c,	// (0x0001a0fd) heading_ai3_data_pane_t1

0xcd6c,	// (0x0002155d) list_double_ai3_gene_pane_ParamLimits

0xcd6c,	// (0x0002155d) list_double_ai3_gene_pane

0x5927,	// (0x0001a118) list_single_ai3_gene_pane_ParamLimits

0x5927,	// (0x0001a118) list_single_ai3_gene_pane

0x43e8,	// (0x00018bd9) list_highlight_pane_cp7_ParamLimits

0x43e8,	// (0x00018bd9) list_highlight_pane_cp7

0x5934,	// (0x0001a125) list_single_a13_gene_pane_t1_ParamLimits

0x5934,	// (0x0001a125) list_single_a13_gene_pane_t1

0x594b,	// (0x0001a13c) list_single_ai3_gene_pane_g1

0x5954,	// (0x0001a145) list_single_ai3_gene_pane_g2

0x0001,

0xfcc3,	// (0x000244b4) list_single_ai3_gene_pane_g

0x595c,	// (0x0001a14d) list_double_ai3_gene_pane_g1_ParamLimits

0x595c,	// (0x0001a14d) list_double_ai3_gene_pane_g1

0xcd79,	// (0x0002156a) list_double_ai3_gene_pane_t1_ParamLimits

0xcd79,	// (0x0002156a) list_double_ai3_gene_pane_t1

0x5984,	// (0x0001a175) list_double_ai3_gene_pane_t2_ParamLimits

0x5984,	// (0x0001a175) list_double_ai3_gene_pane_t2

0x5999,	// (0x0001a18a) list_double_ai3_gene_pane_t3_ParamLimits

0x5999,	// (0x0001a18a) list_double_ai3_gene_pane_t3

0x0002,

0xfcc8,	// (0x000244b9) list_double_ai3_gene_pane_t_ParamLimits

0xfcc8,	// (0x000244b9) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5758,	// (0x00019f49) aid_size_min_col_2

0xc157,	// (0x00020948) aid_size_min_msg_ParamLimits

0xc157,	// (0x00020948) aid_size_min_msg

0xbd4e,	// (0x0002053f) fep_vkb_top_text_pane_g2_ParamLimits

0xbd4e,	// (0x0002053f) fep_vkb_top_text_pane_g2

0x0001,

0xfb2f,	// (0x00024320) fep_vkb_top_text_pane_g_ParamLimits

0xfb2f,	// (0x00024320) fep_vkb_top_text_pane_g

0xe1d9,	// (0x000229ca) main_hc_apps_shell_pane

0x59b6,	// (0x0001a1a7) grid_hc_apps_pane_ParamLimits

0x59b6,	// (0x0001a1a7) grid_hc_apps_pane

0x59c5,	// (0x0001a1b6) list_hc_apps_pane

0x59cd,	// (0x0001a1be) scroll_pane_cp37_ParamLimits

0x59cd,	// (0x0001a1be) scroll_pane_cp37

0xcd95,	// (0x00021586) cell_hc_apps_pane_ParamLimits

0xcd95,	// (0x00021586) cell_hc_apps_pane

0xce53,	// (0x00021644) cell_hc_apps_pane_g1_ParamLimits

0xce53,	// (0x00021644) cell_hc_apps_pane_g1

0x5ab8,	// (0x0001a2a9) cell_hc_apps_pane_g2_ParamLimits

0x5ab8,	// (0x0001a2a9) cell_hc_apps_pane_g2

0x5ad4,	// (0x0001a2c5) cell_hc_apps_pane_g3_ParamLimits

0x5ad4,	// (0x0001a2c5) cell_hc_apps_pane_g3

0x0002,

0xfccf,	// (0x000244c0) cell_hc_apps_pane_g_ParamLimits

0xfccf,	// (0x000244c0) cell_hc_apps_pane_g

0xce80,	// (0x00021671) cell_hc_apps_pane_t1_ParamLimits

0xce80,	// (0x00021671) cell_hc_apps_pane_t1

0xc495,	// (0x00020c86) grid_highlight_pane_cp10_ParamLimits

0xc495,	// (0x00020c86) grid_highlight_pane_cp10

0xcebe,	// (0x000216af) list_single_hc_apps_pane_ParamLimits

0xcebe,	// (0x000216af) list_single_hc_apps_pane

0xceee,	// (0x000216df) list_single_hc_apps_pane_g1

0xcf07,	// (0x000216f8) list_single_hc_apps_pane_g2

0x0001,

0xfcd6,	// (0x000244c7) list_single_hc_apps_pane_g

0xcf20,	// (0x00021711) list_single_hc_apps_pane_g2_copy1

0xcf3c,	// (0x0002172d) list_single_hc_apps_pane_t1

0xc351,	// (0x00020b42) bg_set_opt_pane_cp_ParamLimits

0x86aa,	// (0x0001ce9b) setting_slider_pane_t1_ParamLimits

0x86c3,	// (0x0001ceb4) setting_slider_pane_t2_ParamLimits

0x86dd,	// (0x0001cece) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00023d4f) setting_slider_pane_t_ParamLimits

0x86f5,	// (0x0001cee6) slider_set_pane_ParamLimits

0xe840,	// (0x00023031) control_pane_g5_ParamLimits

0xe840,	// (0x00023031) control_pane_g5

0xb5b4,	// (0x0001fda5) slider_set_pane_g1_ParamLimits

0xeb27,	// (0x00023318) slider_set_pane_g2_ParamLimits

0x91cd,	// (0x0001d9be) slider_set_pane_g3_ParamLimits

0x91e1,	// (0x0001d9d2) slider_set_pane_g4_ParamLimits

0x91f9,	// (0x0001d9ea) slider_set_pane_g5_ParamLimits

0x91cd,	// (0x0001d9be) slider_set_pane_g6_ParamLimits

0x920f,	// (0x0001da00) slider_set_pane_g7_ParamLimits

0xf944,	// (0x00024135) slider_set_pane_g_ParamLimits

0x0f1a,	// (0x0001570b) navi_icon_text_pane_ParamLimits

0xab2b,	// (0x0001f31c) aid_fill_nsta_2_ParamLimits

0xab62,	// (0x0001f353) aid_touch_tab_arrow_left_ParamLimits

0xab78,	// (0x0001f369) aid_touch_tab_arrow_right_ParamLimits

0xac13,	// (0x0001f404) clock_nsta_pane_ParamLimits

0x2872,	// (0x00017063) navi_icon_pane_g1_ParamLimits

0x287e,	// (0x0001706f) navi_text_pane_t1_ParamLimits

0x3f7b,	// (0x0001876c) navi_icon_text_pane_g1_ParamLimits

0x3f87,	// (0x00018778) navi_icon_text_pane_t1_ParamLimits

0xceee,	// (0x000216df) list_single_hc_apps_pane_g1_ParamLimits

0xcf07,	// (0x000216f8) list_single_hc_apps_pane_g2_ParamLimits

0xfcd6,	// (0x000244c7) list_single_hc_apps_pane_g_ParamLimits

0xcf20,	// (0x00021711) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcf3c,	// (0x0002172d) list_single_hc_apps_pane_t1_ParamLimits

0x85d2,	// (0x0001cdc3) popup_toolbar2_fixed_window_ParamLimits

0x85d2,	// (0x0001cdc3) popup_toolbar2_fixed_window

0x8fed,	// (0x0001d7de) popup_toolbar2_float_window

0xc2e1,	// (0x00020ad2) bg_popup_sub_pane_cp27

0x5c15,	// (0x0001a406) grid_toolbar2_float_pane

0xc2e1,	// (0x00020ad2) bg_popup_sub_pane_cp26

0x5c15,	// (0x0001a406) grid_toolbar2_fixed_pane

0xcf6a,	// (0x0002175b) cell_toolbar2_fixed_pane_ParamLimits

0xcf6a,	// (0x0002175b) cell_toolbar2_fixed_pane

0xcf84,	// (0x00021775) cell_toolbar2_fixed_pane_g1

0x1871,	// (0x00016062) toolbar2_fixed_button_pane

0x1913,	// (0x00016104) toolbar2_fixed_button_pane_g1

0x1923,	// (0x00016114) toolbar2_fixed_button_pane_g2

0x191b,	// (0x0001610c) toolbar2_fixed_button_pane_g3

0x1933,	// (0x00016124) toolbar2_fixed_button_pane_g4

0x192b,	// (0x0001611c) toolbar2_fixed_button_pane_g5

0x193b,	// (0x0001612c) toolbar2_fixed_button_pane_g6

0x1943,	// (0x00016134) toolbar2_fixed_button_pane_g7

0x1953,	// (0x00016144) toolbar2_fixed_button_pane_g8

0x194b,	// (0x0001613c) toolbar2_fixed_button_pane_g9

0x0008,

0xf846,	// (0x00024037) toolbar2_fixed_button_pane_g

0x5c36,	// (0x0001a427) cell_toolbar2_float_pane_ParamLimits

0x5c36,	// (0x0001a427) cell_toolbar2_float_pane

0x5c47,	// (0x0001a438) cell_toolbar2_float_pane_g1

0x1871,	// (0x00016062) toolbar2_fixed_button_pane_cp

0xbc36,	// (0x00020427) fep_vkb_accented_list_pane_ParamLimits

0xbc36,	// (0x00020427) fep_vkb_accented_list_pane

0xedf9,	// (0x000235ea) bg_popup_fep_shadow_pane_g9

0x109a,	// (0x0001588b) bg_popup_fep_shadow_pane_cp3

0xc8ef,	// (0x000210e0) list_accented_list_pane

0x5c50,	// (0x0001a441) list_single_accented_list_pane_ParamLimits

0x5c50,	// (0x0001a441) list_single_accented_list_pane

0x109a,	// (0x0001588b) list_highlight_pane_cp10

0x5c61,	// (0x0001a452) list_single_accented_list_pane_t1

0x8f17,	// (0x0001d708) popup_slider_window_ParamLimits

0x8f17,	// (0x0001d708) popup_slider_window

0x574f,	// (0x00019f40) aid_indentation_list_msg

0xd075,	// (0x00021866) bg_popup_window_pane_cp19

0x5d87,	// (0x0001a578) popup_slider_window_g1

0x5da3,	// (0x0001a594) popup_slider_window_g2

0x5dbf,	// (0x0001a5b0) popup_slider_window_g3

0x0005,

0xfcdb,	// (0x000244cc) popup_slider_window_g

0x5e25,	// (0x0001a616) popup_slider_window_t1

0x5e99,	// (0x0001a68a) small_volume_slider_vertical_pane

0x4423,	// (0x00018c14) small_volume_slider_vertical_pane_g1

0x4423,	// (0x00018c14) small_volume_slider_vertical_pane_g2

0x5eb5,	// (0x0001a6a6) small_volume_slider_vertical_pane_g3

0x0002,

0xfced,	// (0x000244de) small_volume_slider_vertical_pane_g

0x8520,	// (0x0001cd11) area_side_right_pane_ParamLimits

0x8520,	// (0x0001cd11) area_side_right_pane

0x9339,	// (0x0001db2a) aid_size_side_button_ParamLimits

0x9339,	// (0x0001db2a) aid_size_side_button

0x9352,	// (0x0001db43) grid_sctrl_middle_pane_ParamLimits

0x9352,	// (0x0001db43) grid_sctrl_middle_pane

0xef81,	// (0x00023772) sctrl_sk_bottom_pane

0xef92,	// (0x00023783) sctrl_sk_top_pane

0xefa4,	// (0x00023795) aid_touch_sctrl_top

0xefb1,	// (0x000237a2) bg_sctrl_sk_pane_ParamLimits

0xefb1,	// (0x000237a2) bg_sctrl_sk_pane

0xefbf,	// (0x000237b0) sctrl_sk_top_pane_g1

0xefcc,	// (0x000237bd) sctrl_sk_top_pane_t1

0xefa4,	// (0x00023795) aid_touch_sctrl_bottom

0xefb1,	// (0x000237a2) bg_sctrl_sk_pane_cp_ParamLimits

0xefb1,	// (0x000237a2) bg_sctrl_sk_pane_cp

0xefe7,	// (0x000237d8) sctrl_sk_bottom_pane_g1

0xefcc,	// (0x000237bd) sctrl_sk_bottom_pane_t1

0x936c,	// (0x0001db5d) cell_sctrl_middle_pane_ParamLimits

0x936c,	// (0x0001db5d) cell_sctrl_middle_pane

0x937d,	// (0x0001db6e) aid_touch_sctrl_middle_ParamLimits

0x937d,	// (0x0001db6e) aid_touch_sctrl_middle

0x938a,	// (0x0001db7b) bg_sctrl_middle_pane_ParamLimits

0x938a,	// (0x0001db7b) bg_sctrl_middle_pane

0xf00c,	// (0x000237fd) cell_sctrl_middle_pane_g1_ParamLimits

0xf00c,	// (0x000237fd) cell_sctrl_middle_pane_g1

0x9398,	// (0x0001db89) cell_sctrl_middle_pane_g2_ParamLimits

0x9398,	// (0x0001db89) cell_sctrl_middle_pane_g2

0x0001,

0xfcf9,	// (0x000244ea) cell_sctrl_middle_pane_g_ParamLimits

0xfcf9,	// (0x000244ea) cell_sctrl_middle_pane_g

0x1913,	// (0x00016104) bg_sctrl_middle_pane_g1

0x191b,	// (0x0001610c) bg_sctrl_middle_pane_g2

0x1923,	// (0x00016114) bg_sctrl_middle_pane_g3

0x192b,	// (0x0001611c) bg_sctrl_middle_pane_g4

0x1933,	// (0x00016124) bg_sctrl_middle_pane_g5

0x193b,	// (0x0001612c) bg_sctrl_middle_pane_g6

0x1943,	// (0x00016134) bg_sctrl_middle_pane_g7

0x194b,	// (0x0001613c) bg_sctrl_middle_pane_g8

0x0007,

0xfcfe,	// (0x000244ef) bg_sctrl_middle_pane_g

0x1953,	// (0x00016144) bg_sctrl_middle_pane_g8_copy1

0x1913,	// (0x00016104) bg_sctrl_sk_pane_g1

0x1923,	// (0x00016114) bg_sctrl_sk_pane_g2

0x191b,	// (0x0001610c) bg_sctrl_sk_pane_g3

0x0008,

0xf846,	// (0x00024037) bg_sctrl_sk_pane_g

0xc65f,	// (0x00020e50) aid_size_touch_scroll_bar

0x1933,	// (0x00016124) bg_sctrl_sk_pane_g4

0x192b,	// (0x0001611c) bg_sctrl_sk_pane_g5

0x193b,	// (0x0001612c) bg_sctrl_sk_pane_g6

0x1943,	// (0x00016134) bg_sctrl_sk_pane_g7

0x1953,	// (0x00016144) bg_sctrl_sk_pane_g8

0x194b,	// (0x0001613c) bg_sctrl_sk_pane_g9

0xe87d,	// (0x0002306e) popup_fep_china_hwr2_fs_candidate_window

0x89b7,	// (0x0001d1a8) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x89b7,	// (0x0001d1a8) popup_fep_china_hwr2_fs_control_window

0xee19,	// (0x0002360a) sctrl_sk_top_pane_g2

0x0001,

0xfcf4,	// (0x000244e5) sctrl_sk_top_pane_g

0xd12d,	// (0x0002191e) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd12d,	// (0x0002191e) aid_fep_china_hwr2_fs_cell

0xd141,	// (0x00021932) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd141,	// (0x00021932) bg_popup_fep_shadow_pane_cp4

0xd158,	// (0x00021949) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd158,	// (0x00021949) bg_popup_fep_shadow_pane_cp5

0xd16a,	// (0x0002195b) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd16a,	// (0x0002195b) popup_fep_china_hwr2_fs_control_bar_grid

0xd17e,	// (0x0002196f) popup_fep_china_hwr2_fs_control_funtion_grid

0x5f32,	// (0x0001a723) aid_fep_china_hwr2_fs_candi_cell

0xc2e1,	// (0x00020ad2) bg_popup_fep_shadow_pane_cp6

0x5f3c,	// (0x0001a72d) popup_fep_china_hwr2_fs_candidate_grid

0xd186,	// (0x00021977) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd186,	// (0x00021977) cell_fep_china_hwr2_fs_funtion_grid

0x4423,	// (0x00018c14) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5f5e,	// (0x0001a74f) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5f5e,	// (0x0001a74f) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5f6c,	// (0x0001a75d) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5f6c,	// (0x0001a75d) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0f,	// (0x00024500) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0f,	// (0x00024500) cell_fep_china_hwr2_fs_funtion_grid_g

0xd19e,	// (0x0002198f) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd19e,	// (0x0002198f) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd1b3,	// (0x000219a4) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd1b3,	// (0x000219a4) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd14,	// (0x00024505) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd14,	// (0x00024505) cell_fep_china_hwr2_fs_funtion_grid_t

0x5fb3,	// (0x0001a7a4) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5fbb,	// (0x0001a7ac) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5fc3,	// (0x0001a7b4) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd19,	// (0x0002450a) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5fcb,	// (0x0001a7bc) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5fcb,	// (0x0001a7bc) cell_fep_china_hwr2_fs_candidate_grid

0x5fe4,	// (0x0001a7d5) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5fec,	// (0x0001a7dd) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4423,	// (0x00018c14) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4423,	// (0x00018c14) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb34,	// (0x00024325) cell_fep_china_hwr2_fs_candidate_grid_g

0x5ff4,	// (0x0001a7e5) cell_fep_china_hwr2_fs_candidate_grid_t1

0x14ea,	// (0x00015cdb) clock_nsta_pane_cp_24_ParamLimits

0x14ea,	// (0x00015cdb) clock_nsta_pane_cp_24

0x1568,	// (0x00015d59) indicator_nsta_pane_cp_24_ParamLimits

0x1568,	// (0x00015d59) indicator_nsta_pane_cp_24

0x26ee,	// (0x00016edf) heading_pane_g1

0x0001,

0xf8ab,	// (0x0002409c) heading_pane_g

0x3205,	// (0x000179f6) grid_sct_catagory_button_pane

0x3235,	// (0x00017a26) scroll_pane_cp5_ParamLimits

0x3fc9,	// (0x000187ba) button_value_adjust_pane_cp5_ParamLimits

0x3fc9,	// (0x000187ba) button_value_adjust_pane_cp5

0x40c3,	// (0x000188b4) form2_midp_time_pane_ParamLimits

0x6002,	// (0x0001a7f3) cell_sct_catagory_button_pane_ParamLimits

0x6002,	// (0x0001a7f3) cell_sct_catagory_button_pane

0x43e8,	// (0x00018bd9) bg_button_pane_cp01_ParamLimits

0x43e8,	// (0x00018bd9) bg_button_pane_cp01

0x4423,	// (0x00018c14) cell_sct_catagory_button_pane_g1

0x8f90,	// (0x0001d781) popup_tb_extension_window

0xd1cf,	// (0x000219c0) aid_size_cell_ext_ParamLimits

0xd1cf,	// (0x000219c0) aid_size_cell_ext

0xc611,	// (0x00020e02) bg_tb_trans_pane_cp1_ParamLimits

0xc611,	// (0x00020e02) bg_tb_trans_pane_cp1

0xd1f5,	// (0x000219e6) grid_tb_ext_pane_ParamLimits

0xd1f5,	// (0x000219e6) grid_tb_ext_pane

0xd234,	// (0x00021a25) cell_tb_ext_pane_ParamLimits

0xd234,	// (0x00021a25) cell_tb_ext_pane

0xd25c,	// (0x00021a4d) cell_tb_ext_pane_g1_ParamLimits

0xd25c,	// (0x00021a4d) cell_tb_ext_pane_g1

0x6098,	// (0x0001a889) cell_tb_ext_pane_t1

0xc495,	// (0x00020c86) list_highlight_pane_cp11_ParamLimits

0xc495,	// (0x00020c86) list_highlight_pane_cp11

0x85e7,	// (0x0001cdd8) popup_uni_indicator_window_ParamLimits

0x85e7,	// (0x0001cdd8) popup_uni_indicator_window

0xc77b,	// (0x00020f6c) bg_popup_sub_pane_cp14

0xd279,	// (0x00021a6a) list_uniindi_pane

0xd285,	// (0x00021a76) uniindi_top_pane

0xc495,	// (0x00020c86) bg_uniindi_top_pane

0xd2a4,	// (0x00021a95) uniindi_top_pane_g1

0xd2ba,	// (0x00021aab) uniindi_top_pane_g2

0x0003,

0xfd20,	// (0x00024511) uniindi_top_pane_g

0xd2d7,	// (0x00021ac8) uniindi_top_pane_t1

0x6149,	// (0x0001a93a) list_single_uniindi_pane_ParamLimits

0x6149,	// (0x0001a93a) list_single_uniindi_pane

0x4423,	// (0x00018c14) bg_uniindi_top_pane_g1

0x615b,	// (0x0001a94c) list_single_uniindi_pane_g1

0x616e,	// (0x0001a95f) list_single_uniindi_pane_t1

0xe1d9,	// (0x000229ca) control_bg_pane

0x6193,	// (0x0001a984) bg_sctrl_sk_pane_cp1

0x619c,	// (0x0001a98d) bg_sctrl_sk_pane_cp2

0x61a5,	// (0x0001a996) control_bg_pane_g1

0x61ae,	// (0x0001a99f) control_bg_pane_g2

0x0001,

0xfd29,	// (0x0002451a) control_bg_pane_g

0x3e1f,	// (0x00018610) cell_indicator_nsta_pane_g1_ParamLimits

0xb9d0,	// (0x000201c1) cell_indicator_nsta_pane_g2_ParamLimits

0xfa98,	// (0x00024289) cell_indicator_nsta_pane_g_ParamLimits

0x414b,	// (0x0001893c) form2_midp_time_pane_t1_ParamLimits

0xe9c9,	// (0x000231ba) main_idle_act4_pane_ParamLimits

0xe9c9,	// (0x000231ba) main_idle_act4_pane

0x8f90,	// (0x0001d781) popup_tb_extension_window_ParamLimits

0xd21a,	// (0x00021a0b) tb_ext_find_pane_ParamLimits

0xd21a,	// (0x00021a0b) tb_ext_find_pane

0x61b7,	// (0x0001a9a8) ai_gene_pane_1_cp1

0x11e5,	// (0x000159d6) ai_gene_pane_2_cp1

0xd301,	// (0x00021af2) list_single_idle_plugin_calendar_pane

0x61c8,	// (0x0001a9b9) list_single_idle_plugin_notification_pane

0x61d1,	// (0x0001a9c2) list_single_idle_plugin_player_pane

0xd30a,	// (0x00021afb) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd30a,	// (0x00021afb) list_single_idle_plugin_shortcut_pane

0xd332,	// (0x00021b23) main_idle_act4_pane_t1

0xd349,	// (0x00021b3a) main_idle_act4_pane_t2

0x0001,

0xfd2e,	// (0x0002451f) main_idle_act4_pane_t

0xd360,	// (0x00021b51) middle_sk_idle_act4_pane_ParamLimits

0xd360,	// (0x00021b51) middle_sk_idle_act4_pane

0xd37c,	// (0x00021b6d) popup_clock_digital_analogue_window_cp2

0xd3a8,	// (0x00021b99) shortcut_wheel_idle_act4_pane_ParamLimits

0xd3a8,	// (0x00021b99) shortcut_wheel_idle_act4_pane

0x4423,	// (0x00018c14) shortcut_wheel_idle_act4_pane_g1

0x4423,	// (0x00018c14) shortcut_wheel_idle_act4_pane_g2

0x4423,	// (0x00018c14) shortcut_wheel_idle_act4_pane_g3

0x4423,	// (0x00018c14) shortcut_wheel_idle_act4_pane_g4

0x4423,	// (0x00018c14) shortcut_wheel_idle_act4_pane_g5

0x6264,	// (0x0001aa55) shortcut_wheel_idle_act4_pane_g6

0x626c,	// (0x0001aa5d) shortcut_wheel_idle_act4_pane_g7

0x6274,	// (0x0001aa65) shortcut_wheel_idle_act4_pane_g8

0x627c,	// (0x0001aa6d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd33,	// (0x00024524) shortcut_wheel_idle_act4_pane_g

0xc2b1,	// (0x00020aa2) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2b1,	// (0x00020aa2) middle_sk_idle_act4_pane_g1

0xd425,	// (0x00021c16) middle_sk_idle_act4_pane_g2_ParamLimits

0xd425,	// (0x00021c16) middle_sk_idle_act4_pane_g2

0x0001,

0xfd56,	// (0x00024547) middle_sk_idle_act4_pane_g_ParamLimits

0xfd56,	// (0x00024547) middle_sk_idle_act4_pane_g

0xd43d,	// (0x00021c2e) middle_sk_idle_act4_pane_t1_ParamLimits

0xd43d,	// (0x00021c2e) middle_sk_idle_act4_pane_t1

0xd46c,	// (0x00021c5d) grid_ai_shortcut_pane_ParamLimits

0xd46c,	// (0x00021c5d) grid_ai_shortcut_pane

0xd489,	// (0x00021c7a) list_highlight_pane_cp16_ParamLimits

0xd489,	// (0x00021c7a) list_highlight_pane_cp16

0xd496,	// (0x00021c87) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd496,	// (0x00021c87) list_single_idle_plugin_shortcut_pane_g1

0xd4a2,	// (0x00021c93) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd4a2,	// (0x00021c93) list_single_idle_plugin_shortcut_pane_g2

0xd4be,	// (0x00021caf) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd4be,	// (0x00021caf) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5b,	// (0x0002454c) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5b,	// (0x0002454c) list_single_idle_plugin_shortcut_pane_g

0xd4d3,	// (0x00021cc4) cell_ai_shortcut_pane_ParamLimits

0xd4d3,	// (0x00021cc4) cell_ai_shortcut_pane

0xd4e9,	// (0x00021cda) cell_ai_shortcut_pane_g1_ParamLimits

0xd4e9,	// (0x00021cda) cell_ai_shortcut_pane_g1

0x61b7,	// (0x0001a9a8) ai_gene_pane_1_cp2

0x63ac,	// (0x0001ab9d) ai_gene_pane_2_cp2

0x63b4,	// (0x0001aba5) list_highlight_pane_cp15

0xd50b,	// (0x00021cfc) list_single_idle_plugin_calendar_pane_g1

0x63b4,	// (0x0001aba5) list_highlight_pane_cp17

0x63c5,	// (0x0001abb6) list_single_idle_plugin_calendar_pane_g1_copy1

0x63cd,	// (0x0001abbe) list_single_idle_plugin_player_pane_g1

0x345e,	// (0x00017c4f) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd62,	// (0x00024553) list_single_idle_plugin_player_pane_g

0x63d5,	// (0x0001abc6) list_single_idle_plugin_player_pane_t1

0x63e3,	// (0x0001abd4) list_single_idle_plugin_player_pane_t2

0x63f1,	// (0x0001abe2) list_single_idle_plugin_player_pane_t3

0x63ff,	// (0x0001abf0) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd67,	// (0x00024558) list_single_idle_plugin_player_pane_t

0x640d,	// (0x0001abfe) wait_bar_pane_cp15

0x6415,	// (0x0001ac06) grid_ai_notification_pane

0x345e,	// (0x00017c4f) list_single_idle_plugin_notification_pane_g1

0xd513,	// (0x00021d04) cell_ai_notification_pane_ParamLimits

0xd513,	// (0x00021d04) cell_ai_notification_pane

0x642b,	// (0x0001ac1c) cell_ai_notification_pane_g1

0x6433,	// (0x0001ac24) cell_ai_notification_pane_t1

0xd520,	// (0x00021d11) tb_ext_find_button_pane

0xd528,	// (0x00021d19) tb_ext_find_pane_g1

0xd530,	// (0x00021d21) tb_ext_find_pane_t1

0xcc1c,	// (0x0002140d) tb_ext_find_button_pane_g1

0xd53e,	// (0x00021d2f) tb_ext_find_button_pane_g2

0x0001,

0xfd70,	// (0x00024561) tb_ext_find_button_pane_g

0xd332,	// (0x00021b23) main_idle_act4_pane_t1_ParamLimits

0xd349,	// (0x00021b3a) main_idle_act4_pane_t2_ParamLimits

0xfd2e,	// (0x0002451f) main_idle_act4_pane_t_ParamLimits

0xd37c,	// (0x00021b6d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd394,	// (0x00021b85) sat_plugin_idle_act4_pane_ParamLimits

0xd394,	// (0x00021b85) sat_plugin_idle_act4_pane

0xd547,	// (0x00021d38) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd547,	// (0x00021d38) sat_plugin_idle_act4_pane_t1

0xd55f,	// (0x00021d50) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd55f,	// (0x00021d50) sat_plugin_idle_act4_pane_t2

0xd577,	// (0x00021d68) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd577,	// (0x00021d68) sat_plugin_idle_act4_pane_t3

0xd58f,	// (0x00021d80) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd58f,	// (0x00021d80) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd75,	// (0x00024566) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd75,	// (0x00024566) sat_plugin_idle_act4_pane_t

0x8562,	// (0x0001cd53) popup_battery_window_ParamLimits

0x8562,	// (0x0001cd53) popup_battery_window

0xc495,	// (0x00020c86) bg_popup_sub_pane_cp25_ParamLimits

0xc495,	// (0x00020c86) bg_popup_sub_pane_cp25

0x64b4,	// (0x0001aca5) popup_battery_window_g1_ParamLimits

0x64b4,	// (0x0001aca5) popup_battery_window_g1

0x64c0,	// (0x0001acb1) popup_battery_window_t1_ParamLimits

0x64c0,	// (0x0001acb1) popup_battery_window_t1

0x64d2,	// (0x0001acc3) popup_battery_window_t2_ParamLimits

0x64d2,	// (0x0001acc3) popup_battery_window_t2

0x0001,

0xfd7e,	// (0x0002456f) popup_battery_window_t_ParamLimits

0xfd7e,	// (0x0002456f) popup_battery_window_t

0xa965,	// (0x0001f156) midp_canvas_pane_ParamLimits

0xa9d7,	// (0x0001f1c8) midp_keypad_pane_ParamLimits

0xa9d7,	// (0x0001f1c8) midp_keypad_pane

0x13c2,	// (0x00015bb3) main_midp_pane_ParamLimits

0xb9dd,	// (0x000201ce) signal_pane_g2_cp_ParamLimits

0xd5a7,	// (0x00021d98) aid_size_cell_midp_keypad_ParamLimits

0xd5a7,	// (0x00021d98) aid_size_cell_midp_keypad

0xd5c5,	// (0x00021db6) midp_keyp_game_grid_pane_ParamLimits

0xd5c5,	// (0x00021db6) midp_keyp_game_grid_pane

0xd5ec,	// (0x00021ddd) midp_keyp_rocker_pane_ParamLimits

0xd5ec,	// (0x00021ddd) midp_keyp_rocker_pane

0xd63d,	// (0x00021e2e) midp_keyp_sk_left_pane_ParamLimits

0xd63d,	// (0x00021e2e) midp_keyp_sk_left_pane

0xd691,	// (0x00021e82) midp_keyp_sk_right_pane_ParamLimits

0xd691,	// (0x00021e82) midp_keyp_sk_right_pane

0xc2e1,	// (0x00020ad2) bg_button_pane_cp03

0xd6e5,	// (0x00021ed6) midp_keyp_sk_left_pane_g1

0xc2e1,	// (0x00020ad2) bg_button_pane_cp04

0xd6e5,	// (0x00021ed6) midp_keyp_sk_right_pane_g1

0x4423,	// (0x00018c14) midp_keyp_rocker_pane_g1

0xd6ee,	// (0x00021edf) keyp_game_cell_pane_ParamLimits

0xd6ee,	// (0x00021edf) keyp_game_cell_pane

0xc2e1,	// (0x00020ad2) bg_button_pane_cp02

0xd712,	// (0x00021f03) keyp_game_cell_pane_g1

0x8582,	// (0x0001cd73) popup_fep_vkb2_window_ParamLimits

0x8582,	// (0x0001cd73) popup_fep_vkb2_window

0x93a4,	// (0x0001db95) aid_size_cell_vkb2_ParamLimits

0x93a4,	// (0x0001db95) aid_size_cell_vkb2

0x93e2,	// (0x0001dbd3) popup_fep_vkb2_window_g1_ParamLimits

0x93e2,	// (0x0001dbd3) popup_fep_vkb2_window_g1

0x9432,	// (0x0001dc23) vkb2_area_bottom_pane_ParamLimits

0x9432,	// (0x0001dc23) vkb2_area_bottom_pane

0x9486,	// (0x0001dc77) vkb2_area_keypad_pane_ParamLimits

0x9486,	// (0x0001dc77) vkb2_area_keypad_pane

0x94ce,	// (0x0001dcbf) vkb2_area_top_pane_ParamLimits

0x94ce,	// (0x0001dcbf) vkb2_area_top_pane

0x9554,	// (0x0001dd45) vkb2_top_entry_pane_ParamLimits

0x9554,	// (0x0001dd45) vkb2_top_entry_pane

0x9581,	// (0x0001dd72) vkb2_top_grid_left_pane_ParamLimits

0x9581,	// (0x0001dd72) vkb2_top_grid_left_pane

0x95a1,	// (0x0001dd92) vkb2_top_grid_right_pane_ParamLimits

0x95a1,	// (0x0001dd92) vkb2_top_grid_right_pane

0xf034,	// (0x00023825) vkb2_cell_keypad_pane_ParamLimits

0xf034,	// (0x00023825) vkb2_cell_keypad_pane

0x95e7,	// (0x0001ddd8) vkb2_area_bottom_grid_pane_ParamLimits

0x95e7,	// (0x0001ddd8) vkb2_area_bottom_grid_pane

0x9611,	// (0x0001de02) vkb2_area_bottom_pane_g1_ParamLimits

0x9611,	// (0x0001de02) vkb2_area_bottom_pane_g1

0x9637,	// (0x0001de28) vkb2_area_bottom_pane_g2_ParamLimits

0x9637,	// (0x0001de28) vkb2_area_bottom_pane_g2

0x9668,	// (0x0001de59) vkb2_area_bottom_pane_g3_ParamLimits

0x9668,	// (0x0001de59) vkb2_area_bottom_pane_g3

0x0002,

0xfd83,	// (0x00024574) vkb2_area_bottom_pane_g_ParamLimits

0xfd83,	// (0x00024574) vkb2_area_bottom_pane_g

0xf0e1,	// (0x000238d2) vkb2_top_cell_left_pane_ParamLimits

0xf0e1,	// (0x000238d2) vkb2_top_cell_left_pane

0xd71b,	// (0x00021f0c) vkb2_top_entry_pane_g1_ParamLimits

0xd71b,	// (0x00021f0c) vkb2_top_entry_pane_g1

0xd729,	// (0x00021f1a) vkb2_top_entry_pane_t1_ParamLimits

0xd729,	// (0x00021f1a) vkb2_top_entry_pane_t1

0x6683,	// (0x0001ae74) vkb2_top_entry_pane_t2_ParamLimits

0x6683,	// (0x0001ae74) vkb2_top_entry_pane_t2

0x66b5,	// (0x0001aea6) vkb2_top_entry_pane_t3_ParamLimits

0x66b5,	// (0x0001aea6) vkb2_top_entry_pane_t3

0x0002,

0xfd8a,	// (0x0002457b) vkb2_top_entry_pane_t_ParamLimits

0xfd8a,	// (0x0002457b) vkb2_top_entry_pane_t

0x96d2,	// (0x0001dec3) vkb2_top_grid_right_pane_g1_ParamLimits

0x96d2,	// (0x0001dec3) vkb2_top_grid_right_pane_g1

0xf12e,	// (0x0002391f) vkb2_top_grid_right_pane_g2_ParamLimits

0xf12e,	// (0x0002391f) vkb2_top_grid_right_pane_g2

0xf146,	// (0x00023937) vkb2_top_grid_right_pane_g3_ParamLimits

0xf146,	// (0x00023937) vkb2_top_grid_right_pane_g3

0x96e8,	// (0x0001ded9) vkb2_top_grid_right_pane_g4_ParamLimits

0x96e8,	// (0x0001ded9) vkb2_top_grid_right_pane_g4

0x0003,

0xfd91,	// (0x00024582) vkb2_top_grid_right_pane_g_ParamLimits

0xfd91,	// (0x00024582) vkb2_top_grid_right_pane_g

0xf15e,	// (0x0002394f) vkb2_top_cell_left_pane_g1

0xf175,	// (0x00023966) vkb2_cell_keypad_pane_g1_ParamLimits

0xf175,	// (0x00023966) vkb2_cell_keypad_pane_g1

0x66d9,	// (0x0001aeca) vkb2_cell_keypad_pane_t1_ParamLimits

0x66d9,	// (0x0001aeca) vkb2_cell_keypad_pane_t1

0xf183,	// (0x00023974) vkb2_cell_bottom_grid_pane_ParamLimits

0xf183,	// (0x00023974) vkb2_cell_bottom_grid_pane

0xf1bc,	// (0x000239ad) vkb2_cell_bottom_grid_pane_g1

0xd3c9,	// (0x00021bba) aid_call2_pane_cp02

0xd3d1,	// (0x00021bc2) aid_call_pane_cp02

0xd3d9,	// (0x00021bca) clock_digital_number_pane_cp10

0xd3e1,	// (0x00021bd2) clock_digital_number_pane_cp11

0xd3e9,	// (0x00021bda) clock_digital_number_pane_cp12

0xd3f1,	// (0x00021be2) clock_digital_number_pane_cp13

0xd3f9,	// (0x00021bea) clock_digital_separator_pane_cp10

0xcc1c,	// (0x0002140d) popup_clock_digital_analogue_window_cp2_g1

0xcc1c,	// (0x0002140d) popup_clock_digital_analogue_window_cp2_g2

0xd401,	// (0x00021bf2) popup_clock_digital_analogue_window_cp2_g3

0xcc1c,	// (0x0002140d) popup_clock_digital_analogue_window_cp2_g4

0xd401,	// (0x00021bf2) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd46,	// (0x00024537) popup_clock_digital_analogue_window_cp2_g

0xd409,	// (0x00021bfa) popup_clock_digital_analogue_window_cp2_t1

0xd417,	// (0x00021c08) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd51,	// (0x00024542) popup_clock_digital_analogue_window_cp2_t

0x4423,	// (0x00018c14) clock_digital_number_pane_cp10_g1

0x4423,	// (0x00018c14) clock_digital_number_pane_cp10_g2

0x0001,

0xfb34,	// (0x00024325) clock_digital_number_pane_cp10_g

0x4423,	// (0x00018c14) clock_digital_separator_pane_cp10_g1

0x4423,	// (0x00018c14) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb34,	// (0x00024325) clock_digital_separator_pane_cp10_g

0xd2c6,	// (0x00021ab7) uniindi_top_pane_g3

0x6112,	// (0x0001a903) uniindi_top_pane_g4

0xf0bf,	// (0x000238b0) vkb2_row_keypad_pane_ParamLimits

0xf0bf,	// (0x000238b0) vkb2_row_keypad_pane

0xf1d8,	// (0x000239c9) vkb2_cell_t_keypad_pane_ParamLimits

0xf1d8,	// (0x000239c9) vkb2_cell_t_keypad_pane

0xf1e8,	// (0x000239d9) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xf1e8,	// (0x000239d9) vkb2_cell_t_keypad_pane_cp08

0xf1fb,	// (0x000239ec) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xf1fb,	// (0x000239ec) vkb2_cell_t_keypad_pane_cp09

0xf20f,	// (0x00023a00) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xf20f,	// (0x00023a00) vkb2_cell_t_keypad_pane_cp01

0xf220,	// (0x00023a11) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xf220,	// (0x00023a11) vkb2_cell_t_keypad_pane_cp02

0xf231,	// (0x00023a22) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xf231,	// (0x00023a22) vkb2_cell_t_keypad_pane_cp03

0xf242,	// (0x00023a33) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xf242,	// (0x00023a33) vkb2_cell_t_keypad_pane_cp04

0xf253,	// (0x00023a44) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xf253,	// (0x00023a44) vkb2_cell_t_keypad_pane_cp05

0xf264,	// (0x00023a55) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xf264,	// (0x00023a55) vkb2_cell_t_keypad_pane_cp06

0xf275,	// (0x00023a66) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xf275,	// (0x00023a66) vkb2_cell_t_keypad_pane_cp07

0xf286,	// (0x00023a77) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xf286,	// (0x00023a77) vkb2_cell_t_keypad_pane_cp10

0xee19,	// (0x0002360a) vkb2_cell_t_keypad_pane_g1

0x66f0,	// (0x0001aee1) vkb2_cell_t_keypad_pane_t1

0xe1d9,	// (0x000229ca) popup_grid_graphic2_window

0xd762,	// (0x00021f53) aid_size_cell_graphic2_ParamLimits

0xd762,	// (0x00021f53) aid_size_cell_graphic2

0xd7a0,	// (0x00021f91) bg_popup_window_pane_cp21_ParamLimits

0xd7a0,	// (0x00021f91) bg_popup_window_pane_cp21

0xd7ae,	// (0x00021f9f) graphic2_pages_pane_ParamLimits

0xd7ae,	// (0x00021f9f) graphic2_pages_pane

0xd804,	// (0x00021ff5) grid_graphic2_control_pane_ParamLimits

0xd804,	// (0x00021ff5) grid_graphic2_control_pane

0xd84c,	// (0x0002203d) grid_graphic2_pane_ParamLimits

0xd84c,	// (0x0002203d) grid_graphic2_pane

0xd8d3,	// (0x000220c4) cell_graphic2_pane

0xe1d9,	// (0x000229ca) main_comp_mode_pane

0x58f0,	// (0x0001a0e1) list_ai3_gene_pane_ParamLimits

0xd075,	// (0x00021866) bg_popup_window_pane_cp19_ParamLimits

0x5d2b,	// (0x0001a51c) bg_touch_area_indi_pane_ParamLimits

0x5d2b,	// (0x0001a51c) bg_touch_area_indi_pane

0x5d41,	// (0x0001a532) bg_touch_area_indi_pane_cp01_ParamLimits

0x5d41,	// (0x0001a532) bg_touch_area_indi_pane_cp01

0x5d57,	// (0x0001a548) bg_touch_area_indi_pane_cp02_ParamLimits

0x5d57,	// (0x0001a548) bg_touch_area_indi_pane_cp02

0x5d6d,	// (0x0001a55e) bg_touch_area_indi_pane_cp03_ParamLimits

0x5d6d,	// (0x0001a55e) bg_touch_area_indi_pane_cp03

0x5d87,	// (0x0001a578) popup_slider_window_g1_ParamLimits

0x5da3,	// (0x0001a594) popup_slider_window_g2_ParamLimits

0x5dbf,	// (0x0001a5b0) popup_slider_window_g3_ParamLimits

0xfcdb,	// (0x000244cc) popup_slider_window_g_ParamLimits

0x5e25,	// (0x0001a616) popup_slider_window_t1_ParamLimits

0x5e99,	// (0x0001a68a) small_volume_slider_vertical_pane_ParamLimits

0xd8d3,	// (0x000220c4) cell_graphic2_pane_ParamLimits

0xd92e,	// (0x0002211f) bg_button_pane_cp10_ParamLimits

0xd92e,	// (0x0002211f) bg_button_pane_cp10

0xd941,	// (0x00022132) bg_button_pane_cp11_ParamLimits

0xd941,	// (0x00022132) bg_button_pane_cp11

0xd954,	// (0x00022145) graphic2_pages_pane_g1_ParamLimits

0xd954,	// (0x00022145) graphic2_pages_pane_g1

0xd96f,	// (0x00022160) graphic2_pages_pane_g2_ParamLimits

0xd96f,	// (0x00022160) graphic2_pages_pane_g2

0x0001,

0xfd9f,	// (0x00024590) graphic2_pages_pane_g_ParamLimits

0xfd9f,	// (0x00024590) graphic2_pages_pane_g

0xd987,	// (0x00022178) graphic2_pages_pane_t1_ParamLimits

0xd987,	// (0x00022178) graphic2_pages_pane_t1

0xd99f,	// (0x00022190) cell_graphic2_control_pane_ParamLimits

0xd99f,	// (0x00022190) cell_graphic2_control_pane

0xd9d1,	// (0x000221c2) cell_graphic2_pane_g1_ParamLimits

0xd9d1,	// (0x000221c2) cell_graphic2_pane_g1

0xc2bf,	// (0x00020ab0) cell_graphic2_pane_g2_ParamLimits

0xc2bf,	// (0x00020ab0) cell_graphic2_pane_g2

0xcd2d,	// (0x0002151e) cell_graphic2_pane_g3_ParamLimits

0xcd2d,	// (0x0002151e) cell_graphic2_pane_g3

0xc2cc,	// (0x00020abd) cell_graphic2_pane_g4_ParamLimits

0xc2cc,	// (0x00020abd) cell_graphic2_pane_g4

0xd9de,	// (0x000221cf) cell_graphic2_pane_g5_ParamLimits

0xd9de,	// (0x000221cf) cell_graphic2_pane_g5

0x0004,

0xfda4,	// (0x00024595) cell_graphic2_pane_g_ParamLimits

0xfda4,	// (0x00024595) cell_graphic2_pane_g

0xd9fe,	// (0x000221ef) cell_graphic2_pane_t1_ParamLimits

0xd9fe,	// (0x000221ef) cell_graphic2_pane_t1

0x26e2,	// (0x00016ed3) grid_highlight_pane_cp11_ParamLimits

0x26e2,	// (0x00016ed3) grid_highlight_pane_cp11

0xc495,	// (0x00020c86) bg_button_pane_cp05

0xda4a,	// (0x0002223b) cell_graphic2_control_pane_g1

0x4423,	// (0x00018c14) bg_touch_area_indi_pane_g1

0x69cc,	// (0x0001b1bd) aid_cmod_rocker_key_size

0x69d6,	// (0x0001b1c7) aid_cmode_itu_key_size

0x69e0,	// (0x0001b1d1) main_cmode_video_pane

0x69ea,	// (0x0001b1db) main_comp_mode_itu_pane

0x69f6,	// (0x0001b1e7) main_comp_mode_rocker_pane

0x6a02,	// (0x0001b1f3) cell_cmode_rocker_pane_ParamLimits

0x6a02,	// (0x0001b1f3) cell_cmode_rocker_pane

0x6a14,	// (0x0001b205) cell_cmode_itu_pane_ParamLimits

0x6a14,	// (0x0001b205) cell_cmode_itu_pane

0xc77b,	// (0x00020f6c) bg_button_pane_cp06_ParamLimits

0xc77b,	// (0x00020f6c) bg_button_pane_cp06

0x4693,	// (0x00018e84) cell_cmode_rocker_pane_g1_ParamLimits

0x4693,	// (0x00018e84) cell_cmode_rocker_pane_g1

0x5f5e,	// (0x0001a74f) cell_cmode_rocker_pane_g2_ParamLimits

0x5f5e,	// (0x0001a74f) cell_cmode_rocker_pane_g2

0x0001,

0xfdb4,	// (0x000245a5) cell_cmode_rocker_pane_g_ParamLimits

0xfdb4,	// (0x000245a5) cell_cmode_rocker_pane_g

0xc2e1,	// (0x00020ad2) bg_button_pane_cp07

0x6a29,	// (0x0001b21a) cell_cmode_itu_pane_g1

0x6a32,	// (0x0001b223) cell_cmode_itu_pane_t1

0x6a40,	// (0x0001b231) cell_cmode_itu_pane_t2

0x0001,

0xfdb9,	// (0x000245aa) cell_cmode_itu_pane_t

0x6183,	// (0x0001a974) aid_touch_ctrl_left

0x618b,	// (0x0001a97c) aid_touch_ctrl_right

0xc2e1,	// (0x00020ad2) compa_mode_pane

0xda70,	// (0x00022261) aid_cmod_rocker_key_size_cp

0xda7a,	// (0x0002226b) aid_cmode_itu_key_size_cp

0x6a62,	// (0x0001b253) compa_mode_pane_g1

0x6a6a,	// (0x0001b25b) compa_mode_pane_g2

0x6a72,	// (0x0001b263) compa_mode_pane_g3

0x0002,

0xfdbe,	// (0x000245af) compa_mode_pane_g

0xda84,	// (0x00022275) main_comp_mode_itu_pane_cp

0xda8c,	// (0x0002227d) main_comp_mode_rocker_pane_cp

0xda94,	// (0x00022285) cell_cmode_itu_pane_cp_ParamLimits

0xda94,	// (0x00022285) cell_cmode_itu_pane_cp

0xdaa9,	// (0x0002229a) cell_cmode_rocker_pane_cp_ParamLimits

0xdaa9,	// (0x0002229a) cell_cmode_rocker_pane_cp

0xc77b,	// (0x00020f6c) bg_button_pane_cp06_cp_ParamLimits

0xc77b,	// (0x00020f6c) bg_button_pane_cp06_cp

0x4693,	// (0x00018e84) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4693,	// (0x00018e84) cell_cmode_rocker_pane_g1_cp

0x4423,	// (0x00018c14) cell_cmode_rocker_pane_g2_cp

0xc2e1,	// (0x00020ad2) bg_button_pane_cp07_cp

0xdabb,	// (0x000222ac) cell_cmode_itu_pane_g1_cp

0xdac4,	// (0x000222b5) cell_cmode_itu_pane_t1_cp

0xdac4,	// (0x000222b5) cell_cmode_itu_pane_t2_cp

0xb728,	// (0x0001ff19) settings_code_pane_cp2

0xc351,	// (0x00020b42) bg_popup_window_pane_cp3_ParamLimits

0xc5ae,	// (0x00020d9f) heading_pane_cp3_ParamLimits

0xc5ba,	// (0x00020dab) listscroll_popup_graphic_pane_ParamLimits

0xec39,	// (0x0002342a) fep_hwr_aid_pane_ParamLimits

0xefa4,	// (0x00023795) aid_touch_sctrl_top_ParamLimits

0xefbf,	// (0x000237b0) sctrl_sk_top_pane_g1_ParamLimits

0xee19,	// (0x0002360a) sctrl_sk_top_pane_g2_ParamLimits

0xfcf4,	// (0x000244e5) sctrl_sk_top_pane_g_ParamLimits

0xefcc,	// (0x000237bd) sctrl_sk_top_pane_t1_ParamLimits

0xefa4,	// (0x00023795) aid_touch_sctrl_bottom_ParamLimits

0xefcc,	// (0x000237bd) sctrl_sk_bottom_pane_t1_ParamLimits

0xd292,	// (0x00021a83) aid_area_touch_clock

0x9516,	// (0x0001dd07) aid_vkb2_area_top_pane_cell_ParamLimits

0x9516,	// (0x0001dd07) aid_vkb2_area_top_pane_cell

0x95c1,	// (0x0001ddb2) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x95c1,	// (0x0001ddb2) aid_vkb2_area_bottom_pane_cell

0x663b,	// (0x0001ae2c) popup_char_count_window

0x6ac8,	// (0x0001b2b9) popup_char_count_window_g1

0x6ad1,	// (0x0001b2c2) popup_char_count_window_g2

0x6ada,	// (0x0001b2cb) popup_char_count_window_g3

0x0002,

0xfdc5,	// (0x000245b6) popup_char_count_window_g

0x6ae3,	// (0x0001b2d4) popup_char_count_window_t1

0xf01a,	// (0x0002380b) popup_fep_char_preview_window_ParamLimits

0xf01a,	// (0x0002380b) popup_fep_char_preview_window

0x9536,	// (0x0001dd27) vkb2_top_candi_pane_ParamLimits

0x9536,	// (0x0001dd27) vkb2_top_candi_pane

0xdad2,	// (0x000222c3) cell_vkb2_top_candi_pane_ParamLimits

0xdad2,	// (0x000222c3) cell_vkb2_top_candi_pane

0xf29b,	// (0x00023a8c) bg_popup_fep_char_preview_window_ParamLimits

0xf29b,	// (0x00023a8c) bg_popup_fep_char_preview_window

0xf2a9,	// (0x00023a9a) popup_fep_char_preview_window_t1_ParamLimits

0xf2a9,	// (0x00023a9a) popup_fep_char_preview_window_t1

0x6b3e,	// (0x0001b32f) bg_popup_fep_char_preview_window_g1

0x6b46,	// (0x0001b337) bg_popup_fep_char_preview_window_g2

0x6b4e,	// (0x0001b33f) bg_popup_fep_char_preview_window_g3

0x6b56,	// (0x0001b347) bg_popup_fep_char_preview_window_g4

0x6b5e,	// (0x0001b34f) bg_popup_fep_char_preview_window_g5

0xf2e3,	// (0x00023ad4) bg_popup_fep_char_preview_window_g6

0x6b66,	// (0x0001b357) bg_popup_fep_char_preview_window_g7

0x6b6e,	// (0x0001b35f) bg_popup_fep_char_preview_window_g8

0x6b76,	// (0x0001b367) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcc,	// (0x000245bd) bg_popup_fep_char_preview_window_g

0xee19,	// (0x0002360a) cell_vkb2_top_candi_pane_g1_ParamLimits

0xee19,	// (0x0002360a) cell_vkb2_top_candi_pane_g1

0xee27,	// (0x00023618) cell_vkb2_top_candi_pane_g2_ParamLimits

0xee27,	// (0x00023618) cell_vkb2_top_candi_pane_g2

0x5ebe,	// (0x0001a6af) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5ebe,	// (0x0001a6af) cell_vkb2_top_candi_pane_g3

0xf2eb,	// (0x00023adc) cell_vkb2_top_candi_pane_g4_ParamLimits

0xf2eb,	// (0x00023adc) cell_vkb2_top_candi_pane_g4

0x4d44,	// (0x00019535) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4d44,	// (0x00019535) cell_vkb2_top_candi_pane_g5

0xf00c,	// (0x000237fd) cell_vkb2_top_candi_pane_g6_ParamLimits

0xf00c,	// (0x000237fd) cell_vkb2_top_candi_pane_g6

0x0005,

0xfddf,	// (0x000245d0) cell_vkb2_top_candi_pane_g_ParamLimits

0xfddf,	// (0x000245d0) cell_vkb2_top_candi_pane_g

0xf30c,	// (0x00023afd) cell_vkb2_top_candi_pane_t1

0x91b9,	// (0x0001d9aa) aid_size_touch_slider_mark_ParamLimits

0x91b9,	// (0x0001d9aa) aid_size_touch_slider_mark

0xd7ea,	// (0x00021fdb) grid_graphic2_catg_pane_ParamLimits

0xd7ea,	// (0x00021fdb) grid_graphic2_catg_pane

0xd8a6,	// (0x00022097) popup_grid_graphic2_window_t1_ParamLimits

0xd8a6,	// (0x00022097) popup_grid_graphic2_window_t1

0xd8bc,	// (0x000220ad) popup_grid_graphic2_window_t2_ParamLimits

0xd8bc,	// (0x000220ad) popup_grid_graphic2_window_t2

0x0001,

0xfd9a,	// (0x0002458b) popup_grid_graphic2_window_t_ParamLimits

0xfd9a,	// (0x0002458b) popup_grid_graphic2_window_t

0xc495,	// (0x00020c86) bg_button_pane_cp05_ParamLimits

0xda4a,	// (0x0002223b) cell_graphic2_control_pane_g1_ParamLimits

0xdb38,	// (0x00022329) cell_graphic2_catg_pane_ParamLimits

0xdb38,	// (0x00022329) cell_graphic2_catg_pane

0xc2e1,	// (0x00020ad2) bg_button_pane_cp12

0xdb4a,	// (0x0002233b) cell_graphic2_catg_pane_g1

0x6098,	// (0x0001a889) cell_tb_ext_pane_t1_ParamLimits

0xf101,	// (0x000238f2) vkb2_top_cell_right_narrow_pane_ParamLimits

0xf101,	// (0x000238f2) vkb2_top_cell_right_narrow_pane

0xf119,	// (0x0002390a) vkb2_top_cell_right_wide_pane_ParamLimits

0xf119,	// (0x0002390a) vkb2_top_cell_right_wide_pane

0xe9c9,	// (0x000231ba) bg_vkb2_func_pane_ParamLimits

0xe9c9,	// (0x000231ba) bg_vkb2_func_pane

0xf15e,	// (0x0002394f) vkb2_top_cell_left_pane_g1_ParamLimits

0xe9c9,	// (0x000231ba) bg_vkb2_fuc_pane_cp03_ParamLimits

0xe9c9,	// (0x000231ba) bg_vkb2_fuc_pane_cp03

0xf1bc,	// (0x000239ad) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x191b,	// (0x0001610c) bg_vkb2_func_pane_g1

0x1923,	// (0x00016114) bg_vkb2_func_pane_g2

0x1933,	// (0x00016124) bg_vkb2_func_pane_g3

0x192b,	// (0x0001611c) bg_vkb2_func_pane_g4

0x193b,	// (0x0001612c) bg_vkb2_func_pane_g5

0x1943,	// (0x00016134) bg_vkb2_func_pane_g6

0x194b,	// (0x0001613c) bg_vkb2_func_pane_g7

0x1953,	// (0x00016144) bg_vkb2_func_pane_g8

0x1913,	// (0x00016104) bg_vkb2_func_pane_g9

0x0008,

0xfdec,	// (0x000245dd) bg_vkb2_func_pane_g

0xe9c9,	// (0x000231ba) bg_vkb2_fuc_pane_cp01_ParamLimits

0xe9c9,	// (0x000231ba) bg_vkb2_fuc_pane_cp01

0xf15e,	// (0x0002394f) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xf15e,	// (0x0002394f) vkb2_top_cell_right_wide_pane_g1

0xe9c9,	// (0x000231ba) bg_vkb2_fuc_pane_cp02_ParamLimits

0xe9c9,	// (0x000231ba) bg_vkb2_fuc_pane_cp02

0xf1bc,	// (0x000239ad) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xf1bc,	// (0x000239ad) vkb2_top_cell_right_narrow_pane_g1

0xcfb7,	// (0x000217a8) aid_touch_area_decrease_ParamLimits

0xcfb7,	// (0x000217a8) aid_touch_area_decrease

0xcff1,	// (0x000217e2) aid_touch_area_increase_ParamLimits

0xcff1,	// (0x000217e2) aid_touch_area_increase

0xd019,	// (0x0002180a) aid_touch_area_mute_ParamLimits

0xd019,	// (0x0002180a) aid_touch_area_mute

0xd041,	// (0x00021832) aid_touch_area_slider_ParamLimits

0xd041,	// (0x00021832) aid_touch_area_slider

0xd081,	// (0x00021872) popup_slider_window_g4_ParamLimits

0xd081,	// (0x00021872) popup_slider_window_g4

0xd0a9,	// (0x0002189a) popup_slider_window_g5_ParamLimits

0xd0a9,	// (0x0002189a) popup_slider_window_g5

0xd0dd,	// (0x000218ce) popup_slider_window_g6_ParamLimits

0xd0dd,	// (0x000218ce) popup_slider_window_g6

0x5e53,	// (0x0001a644) popup_slider_window_t2_ParamLimits

0x5e53,	// (0x0001a644) popup_slider_window_t2

0x0001,

0xfce8,	// (0x000244d9) popup_slider_window_t_ParamLimits

0xfce8,	// (0x000244d9) popup_slider_window_t

0xd0f9,	// (0x000218ea) slider_pane_ParamLimits

0xd0f9,	// (0x000218ea) slider_pane

0x6b99,	// (0x0001b38a) slider_pane_g1_ParamLimits

0x6b99,	// (0x0001b38a) slider_pane_g1

0x6bad,	// (0x0001b39e) slider_pane_g2_ParamLimits

0x6bad,	// (0x0001b39e) slider_pane_g2

0x6bc3,	// (0x0001b3b4) slider_pane_g3_ParamLimits

0x6bc3,	// (0x0001b3b4) slider_pane_g3

0x0003,

0xfdff,	// (0x000245f0) slider_pane_g_ParamLimits

0xfdff,	// (0x000245f0) slider_pane_g

0x8fd8,	// (0x0001d7c9) popup_tb_float_extension_window_ParamLimits

0x8fd8,	// (0x0001d7c9) popup_tb_float_extension_window

0x6bef,	// (0x0001b3e0) aid_size_cell_tb_float_ext

0xc2e1,	// (0x00020ad2) bg_popup_sub_window_cp28

0xdb53,	// (0x00022344) grid_tb_float_ext_pane

0xdb5d,	// (0x0002234e) cell_tb_float_ext_pane_ParamLimits

0xdb5d,	// (0x0002234e) cell_tb_float_ext_pane

0xdb77,	// (0x00022368) cell_tb_float_ext_pane_g1

0xdb80,	// (0x00022371) grid_highlight_pane_cp12

0x92ac,	// (0x0001da9d) cell_last_hwr_side_pane_ParamLimits

0x92ac,	// (0x0001da9d) cell_last_hwr_side_pane

0x4423,	// (0x00018c14) cell_last_hwr_side_pane_g1

0x6c31,	// (0x0001b422) cell_last_hwr_side_pane_g2

0x0001,

0xfe08,	// (0x000245f9) cell_last_hwr_side_pane_g

0x969d,	// (0x0001de8e) vkb2_area_bottom_space_btn_pane_ParamLimits

0x969d,	// (0x0001de8e) vkb2_area_bottom_space_btn_pane

0xee19,	// (0x0002360a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x66f0,	// (0x0001aee1) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xf30c,	// (0x00023afd) cell_vkb2_top_candi_pane_t1_ParamLimits

0xf32b,	// (0x00023b1c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xf32b,	// (0x00023b1c) vkb2_area_bottom_space_btn_pane_g1

0xf365,	// (0x00023b56) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xf365,	// (0x00023b56) vkb2_area_bottom_space_btn_pane_g2

0xf39b,	// (0x00023b8c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xf39b,	// (0x00023b8c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0d,	// (0x000245fe) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0d,	// (0x000245fe) vkb2_area_bottom_space_btn_pane_g

0xecee,	// (0x000234df) cel_fep_hwr_func_pane_ParamLimits

0xecee,	// (0x000234df) cel_fep_hwr_func_pane

0x9281,	// (0x0001da72) cell_hwr_side_button_pane_ParamLimits

0x9281,	// (0x0001da72) cell_hwr_side_button_pane

0xd292,	// (0x00021a83) aid_area_touch_clock_ParamLimits

0xc495,	// (0x00020c86) bg_uniindi_top_pane_ParamLimits

0xd2a4,	// (0x00021a95) uniindi_top_pane_g1_ParamLimits

0xd2ba,	// (0x00021aab) uniindi_top_pane_g2_ParamLimits

0xd2c6,	// (0x00021ab7) uniindi_top_pane_g3_ParamLimits

0x6112,	// (0x0001a903) uniindi_top_pane_g4_ParamLimits

0xfd20,	// (0x00024511) uniindi_top_pane_g_ParamLimits

0xd2d7,	// (0x00021ac8) uniindi_top_pane_t1_ParamLimits

0xc495,	// (0x00020c86) bg_vkb2_func_pane_cp01_ParamLimits

0xc495,	// (0x00020c86) bg_vkb2_func_pane_cp01

0x6c3a,	// (0x0001b42b) cel_fep_hwr_func_pane_g1_ParamLimits

0x6c3a,	// (0x0001b42b) cel_fep_hwr_func_pane_g1

0xc495,	// (0x00020c86) bg_vkb2_func_pane_cp02_ParamLimits

0xc495,	// (0x00020c86) bg_vkb2_func_pane_cp02

0x6c3a,	// (0x0001b42b) cell_hwr_side_button_pane_g1_ParamLimits

0x6c3a,	// (0x0001b42b) cell_hwr_side_button_pane_g1

0x1775,	// (0x00015f66) status_pane_g4_ParamLimits

0x1775,	// (0x00015f66) status_pane_g4

0x178f,	// (0x00015f80) status_pane_t1

0x415e,	// (0x0001894f) form2_midp_gauge_slider_cont_pane

0x4166,	// (0x00018957) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbb3b,	// (0x0002032c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbb4d,	// (0x0002033e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae7,	// (0x000242d8) form2_midp_gauge_slider_pane_t_ParamLimits

0x419c,	// (0x0001898d) form2_midp_slider_pane_ParamLimits

0xeff0,	// (0x000237e1) aid_size_cell_func_vkb2_ParamLimits

0xeff0,	// (0x000237e1) aid_size_cell_func_vkb2

0x6bdb,	// (0x0001b3cc) slider_pane_g4_ParamLimits

0x6bdb,	// (0x0001b3cc) slider_pane_g4

0x96fe,	// (0x0001deef) form2_midp_gauge_slider_pane_t2_cp01

0x970c,	// (0x0001defd) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x970c,	// (0x0001defd) form2_midp_gauge_slider_pane_t3_cp01

0xf3e5,	// (0x00023bd6) form2_midp_slider_pane_cp01

0xc2e1,	// (0x00020ad2) navi_smil_pane

0x6c73,	// (0x0001b464) navi_smil_pane_g1

0x6c7b,	// (0x0001b46c) navi_smil_pane_t1

0x6c48,	// (0x0001b439) form2_midp_slider_pane_g1

0x6c51,	// (0x0001b442) form2_midp_slider_pane_g2

0x6c59,	// (0x0001b44a) form2_midp_slider_pane_g3

0x6c48,	// (0x0001b439) form2_midp_slider_pane_g4

0xdb89,	// (0x0002237a) form2_midp_slider_pane_g5

0x0004,

0xfe16,	// (0x00024607) form2_midp_slider_pane_g

0xf3d5,	// (0x00023bc6) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xf3d5,	// (0x00023bc6) vkb2_area_bottom_space_btn_pane_g4

0xac5e,	// (0x0001f44f) lc0_navi_pane_ParamLimits

0xac5e,	// (0x0001f44f) lc0_navi_pane

0xacc8,	// (0x0001f4b9) lc0_stat_indi_pane_ParamLimits

0xacc8,	// (0x0001f4b9) lc0_stat_indi_pane

0xacdd,	// (0x0001f4ce) ls0_title_pane_ParamLimits

0xacdd,	// (0x0001f4ce) ls0_title_pane

0xc77b,	// (0x00020f6c) bg_popup_sub_pane_cp14_ParamLimits

0xd279,	// (0x00021a6a) list_uniindi_pane_ParamLimits

0xd285,	// (0x00021a76) uniindi_top_pane_ParamLimits

0x615b,	// (0x0001a94c) list_single_uniindi_pane_g1_ParamLimits

0x616e,	// (0x0001a95f) list_single_uniindi_pane_t1_ParamLimits

0x9729,	// (0x0001df1a) lc0_stat_clock_pane_ParamLimits

0x9729,	// (0x0001df1a) lc0_stat_clock_pane

0xdb94,	// (0x00022385) lc0_stat_indi_pane_g1_ParamLimits

0xdb94,	// (0x00022385) lc0_stat_indi_pane_g1

0xdba1,	// (0x00022392) lc0_stat_indi_pane_g2_ParamLimits

0xdba1,	// (0x00022392) lc0_stat_indi_pane_g2

0x0001,

0xfe21,	// (0x00024612) lc0_stat_indi_pane_g_ParamLimits

0xfe21,	// (0x00024612) lc0_stat_indi_pane_g

0x9739,	// (0x0001df2a) lc0_uni_indicator_pane_ParamLimits

0x9739,	// (0x0001df2a) lc0_uni_indicator_pane

0xdbae,	// (0x0002239f) ls0_title_pane_g1_ParamLimits

0xdbae,	// (0x0002239f) ls0_title_pane_g1

0xdbc2,	// (0x000223b3) ls0_title_pane_t1_ParamLimits

0xdbc2,	// (0x000223b3) ls0_title_pane_t1

0x9749,	// (0x0001df3a) lc0_uni_indicator_pane_g1_ParamLimits

0x9749,	// (0x0001df3a) lc0_uni_indicator_pane_g1

0x6ced,	// (0x0001b4de) lc0_stat_clock_pane_t1

0xe1d9,	// (0x000229ca) main_ai5_pane

0x6cfb,	// (0x0001b4ec) ai5_sk_pane_ParamLimits

0x6cfb,	// (0x0001b4ec) ai5_sk_pane

0xdbf0,	// (0x000223e1) cell_ai5_widget_pane_ParamLimits

0xdbf0,	// (0x000223e1) cell_ai5_widget_pane

0x6dc3,	// (0x0001b5b4) aid_size_cell_widget_grid

0x6dd1,	// (0x0001b5c2) bg_ai5_widget_pane_ParamLimits

0x6dd1,	// (0x0001b5c2) bg_ai5_widget_pane

0x6e49,	// (0x0001b63a) cell_ai5_widget_pane_g2

0x6e5d,	// (0x0001b64e) cell_ai5_widget_pane_g3

0x6e77,	// (0x0001b668) cell_ai5_widget_pane_g4

0x6e87,	// (0x0001b678) cell_ai5_widget_pane_g5

0x6e97,	// (0x0001b688) cell_ai5_widget_pane_g6

0x6ea3,	// (0x0001b694) cell_ai5_widget_pane_g7

0x6eeb,	// (0x0001b6dc) cell_ai5_widget_pane_t1_ParamLimits

0x6eeb,	// (0x0001b6dc) cell_ai5_widget_pane_t1

0x6f08,	// (0x0001b6f9) cell_ai5_widget_pane_t2_ParamLimits

0x6f08,	// (0x0001b6f9) cell_ai5_widget_pane_t2

0x6f20,	// (0x0001b711) cell_ai5_widget_pane_t3_ParamLimits

0x6f20,	// (0x0001b711) cell_ai5_widget_pane_t3

0x6f38,	// (0x0001b729) cell_ai5_widget_pane_t4_ParamLimits

0x6f38,	// (0x0001b729) cell_ai5_widget_pane_t4

0x6f5e,	// (0x0001b74f) cell_ai5_widget_pane_t5_ParamLimits

0x6f5e,	// (0x0001b74f) cell_ai5_widget_pane_t5

0x6f7e,	// (0x0001b76f) cell_ai5_widget_pane_t6_ParamLimits

0x6f7e,	// (0x0001b76f) cell_ai5_widget_pane_t6

0x6f90,	// (0x0001b781) cell_ai5_widget_pane_t7_ParamLimits

0x6f90,	// (0x0001b781) cell_ai5_widget_pane_t7

0x6fa9,	// (0x0001b79a) cell_ai5_widget_pane_t8_ParamLimits

0x6fa9,	// (0x0001b79a) cell_ai5_widget_pane_t8

0x0009,

0xfe3b,	// (0x0002462c) cell_ai5_widget_pane_t_ParamLimits

0xfe3b,	// (0x0002462c) cell_ai5_widget_pane_t

0x7008,	// (0x0001b7f9) grid_ai5_widget_pane

0xc77b,	// (0x00020f6c) highlight_cell_ai5_widget_pane_ParamLimits

0xc77b,	// (0x00020f6c) highlight_cell_ai5_widget_pane

0xdc56,	// (0x00022447) ai5_sk_left_pane

0xdc60,	// (0x00022451) ai5_sk_middle_pane

0xdc6a,	// (0x0002245b) ai5_sk_right_pane

0x7034,	// (0x0001b825) bg_ai5_widget_pane_g1_ParamLimits

0x7034,	// (0x0001b825) bg_ai5_widget_pane_g1

0x7040,	// (0x0001b831) bg_ai5_widget_pane_g2_ParamLimits

0x7040,	// (0x0001b831) bg_ai5_widget_pane_g2

0x704c,	// (0x0001b83d) bg_ai5_widget_pane_g3_ParamLimits

0x704c,	// (0x0001b83d) bg_ai5_widget_pane_g3

0x7058,	// (0x0001b849) bg_ai5_widget_pane_g4_ParamLimits

0x7058,	// (0x0001b849) bg_ai5_widget_pane_g4

0x7064,	// (0x0001b855) bg_ai5_widget_pane_g5_ParamLimits

0x7064,	// (0x0001b855) bg_ai5_widget_pane_g5

0x7070,	// (0x0001b861) bg_ai5_widget_pane_g6_ParamLimits

0x7070,	// (0x0001b861) bg_ai5_widget_pane_g6

0x707c,	// (0x0001b86d) bg_ai5_widget_pane_g7_ParamLimits

0x707c,	// (0x0001b86d) bg_ai5_widget_pane_g7

0x7088,	// (0x0001b879) bg_ai5_widget_pane_g8_ParamLimits

0x7088,	// (0x0001b879) bg_ai5_widget_pane_g8

0x7094,	// (0x0001b885) bg_ai5_widget_pane_g9_ParamLimits

0x7094,	// (0x0001b885) bg_ai5_widget_pane_g9

0x0008,

0xfe50,	// (0x00024641) bg_ai5_widget_pane_g_ParamLimits

0xfe50,	// (0x00024641) bg_ai5_widget_pane_g

0x70c6,	// (0x0001b8b7) cell_shortcut_ai5_widget_pane_ParamLimits

0x70c6,	// (0x0001b8b7) cell_shortcut_ai5_widget_pane

0x109a,	// (0x0001588b) bg_cell_shortcut_ai5_widget_pane

0x70d7,	// (0x0001b8c8) cell_grid_ai5_widget_pane_g1

0x109a,	// (0x0001588b) highlight_cell_shortcut_ai5_widget_pane

0x191b,	// (0x0001610c) ai5_sk_left_pane_g1

0x70e0,	// (0x0001b8d1) ai5_sk_left_pane_g2

0x70e8,	// (0x0001b8d9) ai5_sk_left_pane_g3

0x70f0,	// (0x0001b8e1) ai5_sk_left_pane_g4

0x0003,

0xfe63,	// (0x00024654) ai5_sk_left_pane_g

0x70f8,	// (0x0001b8e9) ai5_sk_left_pane_t1

0x1923,	// (0x00016114) ai5_sk_right_pane_g1

0x7106,	// (0x0001b8f7) ai5_sk_right_pane_g2

0x710e,	// (0x0001b8ff) ai5_sk_right_pane_g3

0x7116,	// (0x0001b907) ai5_sk_right_pane_g4

0x0003,

0xfe6c,	// (0x0002465d) ai5_sk_right_pane_g

0x711e,	// (0x0001b90f) ai5_sk_right_pane_t1

0x1923,	// (0x00016114) ai5_sk_middle_pane_g1

0x191b,	// (0x0001610c) ai5_sk_middle_pane_g2

0x193b,	// (0x0001612c) ai5_sk_middle_pane_g3

0x710e,	// (0x0001b8ff) ai5_sk_middle_pane_g4

0x70e8,	// (0x0001b8d9) ai5_sk_middle_pane_g5

0x712c,	// (0x0001b91d) ai5_sk_middle_pane_g6

0xdc74,	// (0x00022465) ai5_sk_middle_pane_g7

0x0006,

0xfe75,	// (0x00024666) ai5_sk_middle_pane_g

0xab4a,	// (0x0001f33b) aid_touch_area_size_lc0_ParamLimits

0xab4a,	// (0x0001f33b) aid_touch_area_size_lc0

0xee48,	// (0x00023639) cell_hwr_candidate_pane_t1_ParamLimits

0x1446,	// (0x00015c37) aid_touch_navi_pane

0xadd6,	// (0x0001f5c7) status_dt_navi_pane_ParamLimits

0xadd6,	// (0x0001f5c7) status_dt_navi_pane

0xadee,	// (0x0001f5df) status_dt_sta_pane_ParamLimits

0xadee,	// (0x0001f5df) status_dt_sta_pane

0xdc7c,	// (0x0002246d) dt_sta_controll_pane

0xdc89,	// (0x0002247a) dt_sta_indi_pane

0xdc96,	// (0x00022487) dt_sta_title_pane

0xc495,	// (0x00020c86) bg_dt_sta_indi_pane_ParamLimits

0xc495,	// (0x00020c86) bg_dt_sta_indi_pane

0xdca8,	// (0x00022499) dt_sta_battery_pane

0xdcb0,	// (0x000224a1) dt_sta_indi_pane_g1

0x717e,	// (0x0001b96f) dt_sta_indi_pane_g2

0x7187,	// (0x0001b978) dt_sta_indi_pane_g3

0x0002,

0xfe84,	// (0x00024675) dt_sta_indi_pane_g

0x7190,	// (0x0001b981) dt_sta_signal_pane

0xc77b,	// (0x00020f6c) bg_dt_sta_title_pane_ParamLimits

0xc77b,	// (0x00020f6c) bg_dt_sta_title_pane

0x2842,	// (0x00017033) dt_sta_title_pane_g1

0xdcb9,	// (0x000224aa) dt_sta_title_pane_t1_ParamLimits

0xdcb9,	// (0x000224aa) dt_sta_title_pane_t1

0xc2e1,	// (0x00020ad2) bg_dt_sta_control_pane

0xdcce,	// (0x000224bf) dt_sta_controll_pane_g1

0xdcd7,	// (0x000224c8) bg_dt_sta_title_pane_g1

0xdce0,	// (0x000224d1) bg_dt_sta_title_pane_g2

0xdce9,	// (0x000224da) bg_dt_sta_title_pane_g3

0x0002,

0xfe8b,	// (0x0002467c) bg_dt_sta_title_pane_g

0x4423,	// (0x00018c14) bg_dt_sta_indi_pane_g1

0x71d2,	// (0x0001b9c3) dt_sta_signal_pane_g1

0x71da,	// (0x0001b9cb) dt_sta_signal_pane_g2

0x0001,

0xfe92,	// (0x00024683) dt_sta_signal_pane_g

0x71e2,	// (0x0001b9d3) dt_sta_battery_pane_g1

0x71eb,	// (0x0001b9dc) dt_sta_battery_pane_t1

0x4423,	// (0x00018c14) bg_dt_sta_control_pane_g1

0xcc9f,	// (0x00021490) fep_china_uni_eep_pane

0xcca7,	// (0x00021498) fep_china_uni_entry_pane_ParamLimits

0xccb7,	// (0x000214a8) popup_fep_china_uni_window_g1_ParamLimits

0xccc7,	// (0x000214b8) popup_fep_china_uni_window_g2_ParamLimits

0xccc7,	// (0x000214b8) popup_fep_china_uni_window_g2

0x0001,

0xf709,	// (0x00023efa) popup_fep_china_uni_window_g_ParamLimits

0xf709,	// (0x00023efa) popup_fep_china_uni_window_g

0x71fa,	// (0x0001b9eb) fep_china_uni_eep_pane_g1

0x7202,	// (0x0001b9f3) fep_china_uni_eep_pane_t1

0x6c6a,	// (0x0001b45b) aid_touch_area_size_smil_player

0x159c,	// (0x00015d8d) lc0_clock_pane

0x1783,	// (0x00015f74) status_pane_g5_ParamLimits

0x1783,	// (0x00015f74) status_pane_g5

0x8b0e,	// (0x0001d2ff) popup_keymap_window

0x1741,	// (0x00015f32) status_icon_pane

0x6e5d,	// (0x0001b64e) cell_ai5_widget_pane_g3_ParamLimits

0x6e77,	// (0x0001b668) cell_ai5_widget_pane_g4_ParamLimits

0x6e87,	// (0x0001b678) cell_ai5_widget_pane_g5_ParamLimits

0x6eaf,	// (0x0001b6a0) cell_ai5_widget_pane_g8_ParamLimits

0x6eaf,	// (0x0001b6a0) cell_ai5_widget_pane_g8

0x6ec3,	// (0x0001b6b4) cell_ai5_widget_pane_g9_ParamLimits

0x6ec3,	// (0x0001b6b4) cell_ai5_widget_pane_g9

0x6ed7,	// (0x0001b6c8) cell_ai5_widget_pane_g10_ParamLimits

0x6ed7,	// (0x0001b6c8) cell_ai5_widget_pane_g10

0x7211,	// (0x0001ba02) status_icon_pane_g1

0xc2e1,	// (0x00020ad2) bg_popup_sub_pane_cp13

0x7219,	// (0x0001ba0a) popup_keymap_window_t1

0xaad8,	// (0x0001f2c9) control_pane_g6_ParamLimits

0xaad8,	// (0x0001f2c9) control_pane_g6

0xaae5,	// (0x0001f2d6) control_pane_g7_ParamLimits

0xaae5,	// (0x0001f2d6) control_pane_g7

0xaaf2,	// (0x0001f2e3) control_pane_g8_ParamLimits

0xaaf2,	// (0x0001f2e3) control_pane_g8

0xdc7c,	// (0x0002246d) dt_sta_controll_pane_ParamLimits

0xdc89,	// (0x0002247a) dt_sta_indi_pane_ParamLimits

0xdc96,	// (0x00022487) dt_sta_title_pane_ParamLimits

0xc668,	// (0x00020e59) aid_size_touch_scroll_bar_cale

0x8576,	// (0x0001cd67) popup_discreet_window_ParamLimits

0x8576,	// (0x0001cd67) popup_discreet_window

0x85c8,	// (0x0001cdb9) popup_sk_window

0x2086,	// (0x00016877) bg_popup_sub_pane_cp28_ParamLimits

0x2086,	// (0x00016877) bg_popup_sub_pane_cp28

0x7227,	// (0x0001ba18) popup_discreet_window_g1_ParamLimits

0x7227,	// (0x0001ba18) popup_discreet_window_g1

0xdcf2,	// (0x000224e3) popup_discreet_window_t1_ParamLimits

0xdcf2,	// (0x000224e3) popup_discreet_window_t1

0x7265,	// (0x0001ba56) popup_discreet_window_t2_ParamLimits

0x7265,	// (0x0001ba56) popup_discreet_window_t2

0x0002,

0xfe97,	// (0x00024688) popup_discreet_window_t_ParamLimits

0xfe97,	// (0x00024688) popup_discreet_window_t

0xf3ee,	// (0x00023bdf) popup_sk_window_g1

0xf3f8,	// (0x00023be9) popup_sk_window_g2

0x0001,

0xfe9e,	// (0x0002468f) popup_sk_window_g

0x9774,	// (0x0001df65) popup_sk_window_t1

0x9782,	// (0x0001df73) popup_sk_window_t1_copy1

0x6e49,	// (0x0001b63a) cell_ai5_widget_pane_g2_ParamLimits

0x6fbb,	// (0x0001b7ac) cell_ai5_widget_pane_t9_ParamLimits

0x6fbb,	// (0x0001b7ac) cell_ai5_widget_pane_t9

0xc2e1,	// (0x00020ad2) main_fep_fshwr2_pane

0x9790,	// (0x0001df81) aid_fshwr2_btn_pane

0x97a4,	// (0x0001df95) aid_fshwr2_syb_pane

0x97b8,	// (0x0001dfa9) aid_fshwr2_txt_pane

0x97c8,	// (0x0001dfb9) fshwr2_func_candi_pane

0x97e8,	// (0x0001dfd9) fshwr2_hwr_syb_pane

0x980a,	// (0x0001dffb) fshwr2_icf_pane

0xe1d9,	// (0x000229ca) fshwr2_icf_bg_pane

0xf400,	// (0x00023bf1) fshwr2_icf_pane_t1_ParamLimits

0xf400,	// (0x00023bf1) fshwr2_icf_pane_t1

0xcc1c,	// (0x0002140d) fshwr2_func_candi_pane_g1

0xdd10,	// (0x00022501) fshwr2_func_candi_row_pane_ParamLimits

0xdd10,	// (0x00022501) fshwr2_func_candi_row_pane

0x983a,	// (0x0001e02b) cell_fshwr2_syb_pane_ParamLimits

0x983a,	// (0x0001e02b) cell_fshwr2_syb_pane

0xf419,	// (0x00023c0a) fshwr2_hwr_syb_pane_g1_ParamLimits

0xf419,	// (0x00023c0a) fshwr2_hwr_syb_pane_g1

0xe1d9,	// (0x000229ca) bg_popup_call_pane_cp01

0x9860,	// (0x0001e051) fshwr2_func_candi_cell_pane_ParamLimits

0x9860,	// (0x0001e051) fshwr2_func_candi_cell_pane

0x1e6f,	// (0x00016660) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x1e6f,	// (0x00016660) fshwr2_func_candi_cell_bg_pane

0x98ab,	// (0x0001e09c) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x98ab,	// (0x0001e09c) fshwr2_func_candi_cell_pane_g1

0x98e2,	// (0x0001e0d3) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x98e2,	// (0x0001e0d3) fshwr2_func_candi_cell_pane_t1

0xe1d9,	// (0x000229ca) bg_button_pane_cp08

0x72de,	// (0x0001bacf) cell_fshwr2_syb_bg_pane

0x98fd,	// (0x0001e0ee) cell_fshwr2_syb_bg_pane_g1

0x9910,	// (0x0001e101) cell_fshwr2_syb_bg_pane_t1

0xc77b,	// (0x00020f6c) main_tmo_pane

0xb4c8,	// (0x0001fcb9) uni_indicator_pane_g1_ParamLimits

0xb4de,	// (0x0001fccf) uni_indicator_pane_g2_ParamLimits

0xb4f4,	// (0x0001fce5) uni_indicator_pane_g3_ParamLimits

0x2baf,	// (0x000173a0) uni_indicator_pane_g4_ParamLimits

0x2baf,	// (0x000173a0) uni_indicator_pane_g4

0x2bc3,	// (0x000173b4) uni_indicator_pane_g5_ParamLimits

0x2bc3,	// (0x000173b4) uni_indicator_pane_g5

0x2bc3,	// (0x000173b4) uni_indicator_pane_g6_ParamLimits

0x2bc3,	// (0x000173b4) uni_indicator_pane_g6

0xf901,	// (0x000240f2) uni_indicator_pane_g_ParamLimits

0xcf99,	// (0x0002178a) popup_tmo_note_window_ParamLimits

0xcf99,	// (0x0002178a) popup_tmo_note_window

0xeffe,	// (0x000237ef) fshwr2_bg_pane

0x98d3,	// (0x0001e0c4) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x98d3,	// (0x0001e0c4) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea3,	// (0x00024694) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea3,	// (0x00024694) fshwr2_func_candi_cell_pane_g

0xee01,	// (0x000235f2) bg_popup_window_pane_cp01

0xf427,	// (0x00023c18) bg_popup_window_pane_g1_cp01

0x72ea,	// (0x0001badb) bg_popup_window_pane_cp22_ParamLimits

0x72ea,	// (0x0001badb) bg_popup_window_pane_cp22

0xdd33,	// (0x00022524) listscroll_tmo_link_pane_ParamLimits

0xdd33,	// (0x00022524) listscroll_tmo_link_pane

0x7338,	// (0x0001bb29) popup_tmo_note_window_g1_ParamLimits

0x7338,	// (0x0001bb29) popup_tmo_note_window_g1

0xdd73,	// (0x00022564) tmo_note_info_pane_ParamLimits

0xdd73,	// (0x00022564) tmo_note_info_pane

0xdd8d,	// (0x0002257e) list_tmo_note_info_pane_g1_ParamLimits

0xdd8d,	// (0x0002257e) list_tmo_note_info_pane_g1

0x7376,	// (0x0001bb67) list_tmo_note_info_pane_g2_ParamLimits

0x7376,	// (0x0001bb67) list_tmo_note_info_pane_g2

0x0001,

0xfea8,	// (0x00024699) list_tmo_note_info_pane_g_ParamLimits

0xfea8,	// (0x00024699) list_tmo_note_info_pane_g

0x7392,	// (0x0001bb83) list_tmo_note_info_text_pane_ParamLimits

0x7392,	// (0x0001bb83) list_tmo_note_info_text_pane

0x7413,	// (0x0001bc04) list_tmo_link_pane

0x7420,	// (0x0001bc11) scroll_pane_cp20

0x742d,	// (0x0001bc1e) list_single_tmo_link_pane_ParamLimits

0x742d,	// (0x0001bc1e) list_single_tmo_link_pane

0x743d,	// (0x0001bc2e) list_single_tmo_link_pane_t1

0x744b,	// (0x0001bc3c) list_tmo_note_info_text_pane_t1_ParamLimits

0x744b,	// (0x0001bc3c) list_tmo_note_info_text_pane_t1

0xa4f6,	// (0x0001ece7) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa4f6,	// (0x0001ece7) aid_size_touch_scroll_bar_cp01

0xa3f6,	// (0x0001ebe7) aid_size_touch_slider_marker

0x85b8,	// (0x0001cda9) popup_settings_window_ParamLimits

0x85b8,	// (0x0001cda9) popup_settings_window

0x13f6,	// (0x00015be7) popup_candi_list_indi_window

0x1446,	// (0x00015c37) aid_touch_navi_pane_ParamLimits

0xef78,	// (0x00023769) rs_clock_indi_pane

0xef81,	// (0x00023772) sctrl_sk_bottom_pane_ParamLimits

0xef92,	// (0x00023783) sctrl_sk_top_pane_ParamLimits

0x93da,	// (0x0001dbcb) popup_fep_tooltip_window

0x6dc3,	// (0x0001b5b4) aid_size_cell_widget_grid_ParamLimits

0x6e34,	// (0x0001b625) cell_ai5_widget_pane_g1_ParamLimits

0x6e34,	// (0x0001b625) cell_ai5_widget_pane_g1

0x6e97,	// (0x0001b688) cell_ai5_widget_pane_g6_ParamLimits

0x6ea3,	// (0x0001b694) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe26,	// (0x00024617) cell_ai5_widget_pane_g_ParamLimits

0xfe26,	// (0x00024617) cell_ai5_widget_pane_g

0x6fea,	// (0x0001b7db) cell_ai5_widget_pane_t10_ParamLimits

0x6fea,	// (0x0001b7db) cell_ai5_widget_pane_t10

0x7008,	// (0x0001b7f9) grid_ai5_widget_pane_ParamLimits

0x70a0,	// (0x0001b891) cell_contacts_ai5_widget_pane_ParamLimits

0x70a0,	// (0x0001b891) cell_contacts_ai5_widget_pane

0x727a,	// (0x0001ba6b) popup_discreet_window_t3_ParamLimits

0x727a,	// (0x0001ba6b) popup_discreet_window_t3

0x9826,	// (0x0001e017) popup_fshwr2_char_preview_window_ParamLimits

0x9826,	// (0x0001e017) popup_fshwr2_char_preview_window

0xdda4,	// (0x00022595) tmo_note_info_pane_t1

0xddb9,	// (0x000225aa) tmo_note_info_pane_t2

0xddd0,	// (0x000225c1) tmo_note_info_pane_t3

0x73ef,	// (0x0001bbe0) tmo_note_info_pane_t4

0x7401,	// (0x0001bbf2) tmo_note_info_pane_t5

0x0004,

0xfead,	// (0x0002469e) tmo_note_info_pane_t

0x7413,	// (0x0001bc04) list_tmo_link_pane_ParamLimits

0x7420,	// (0x0001bc11) scroll_pane_cp20_ParamLimits

0xe1d9,	// (0x000229ca) bg_popup_fep_char_preview_window_cp01

0xdde5,	// (0x000225d6) popup_fshwr2_char_preview_window_t1

0x7472,	// (0x0001bc63) popup_candi_list_indi_window_g1

0x747b,	// (0x0001bc6c) bg_cell_contacts_ai5_widget_pane

0x7487,	// (0x0001bc78) cell_contacts_ai5_widget_pane_g1

0x4c99,	// (0x0001948a) cell_contacts_ai5_widget_pane_g2

0x749c,	// (0x0001bc8d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb8,	// (0x000246a9) cell_contacts_ai5_widget_pane_g

0x74a8,	// (0x0001bc99) cell_contacts_ai5_widget_pane_t1

0xc77b,	// (0x00020f6c) highlight_cell_shortcut_ai5_widget_pane_cp01

0x751f,	// (0x0001bd10) settings_container_pane

0x109a,	// (0x0001588b) listscroll_set_pane_copy1

0x37f5,	// (0x00017fe6) scroll_pane_cp121_copy1

0x1e33,	// (0x00016624) set_content_pane_copy1

0xde58,	// (0x00022649) aid_height_set_list_copy1_ParamLimits

0xde58,	// (0x00022649) aid_height_set_list_copy1

0x2dcd,	// (0x000175be) aid_size_parent_copy1_ParamLimits

0x2dcd,	// (0x000175be) aid_size_parent_copy1

0xde64,	// (0x00022655) button_value_adjust_pane_cp6_copy1_ParamLimits

0xde64,	// (0x00022655) button_value_adjust_pane_cp6_copy1

0x13c2,	// (0x00015bb3) list_highlight_pane_cp2_copy1_ParamLimits

0x13c2,	// (0x00015bb3) list_highlight_pane_cp2_copy1

0xde78,	// (0x00022669) list_set_pane_copy1_ParamLimits

0xde78,	// (0x00022669) list_set_pane_copy1

0xddf3,	// (0x000225e4) main_pane_set_t1_copy1_ParamLimits

0xddf3,	// (0x000225e4) main_pane_set_t1_copy1

0xde2d,	// (0x0002261e) main_pane_set_t2_copy1_ParamLimits

0xde2d,	// (0x0002261e) main_pane_set_t2_copy1

0xdf25,	// (0x00022716) main_pane_set_t3_copy1

0xdf33,	// (0x00022724) main_pane_set_t4_copy1

0xde4c,	// (0x0002263d) set_content_pane_g1_copy1_ParamLimits

0xde4c,	// (0x0002263d) set_content_pane_g1_copy1

0xdf41,	// (0x00022732) setting_code_pane_copy1

0x761c,	// (0x0001be0d) setting_slider_graphic_pane_copy1

0x761c,	// (0x0001be0d) setting_slider_pane_copy1

0x761c,	// (0x0001be0d) setting_text_pane_copy1

0x761c,	// (0x0001be0d) setting_volume_pane_copy1

0xdf41,	// (0x00022732) settings_code_pane_cp2_copy1

0xdf49,	// (0x0002273a) settings_code_pane_cp_copy1_ParamLimits

0xdf49,	// (0x0002273a) settings_code_pane_cp_copy1

0x9926,	// (0x0001e117) volume_set_pane_copy1

0xdf5d,	// (0x0002274e) volume_set_pane_g10_copy1

0xdf65,	// (0x00022756) volume_set_pane_g1_copy1

0xdf6d,	// (0x0002275e) volume_set_pane_g2_copy1

0xdf75,	// (0x00022766) volume_set_pane_g3_copy1

0xdf7d,	// (0x0002276e) volume_set_pane_g4_copy1

0xdf85,	// (0x00022776) volume_set_pane_g5_copy1

0xdf8d,	// (0x0002277e) volume_set_pane_g6_copy1

0xdf95,	// (0x00022786) volume_set_pane_g7_copy1

0xdf9d,	// (0x0002278e) volume_set_pane_g8_copy1

0xdfa5,	// (0x00022796) volume_set_pane_g9_copy1

0xc351,	// (0x00020b42) bg_set_opt_pane_cp_copy1_ParamLimits

0xc351,	// (0x00020b42) bg_set_opt_pane_cp_copy1

0x992e,	// (0x0001e11f) setting_slider_pane_t1_copy1_ParamLimits

0x992e,	// (0x0001e11f) setting_slider_pane_t1_copy1

0x994c,	// (0x0001e13d) setting_slider_pane_t2_copy1_ParamLimits

0x994c,	// (0x0001e13d) setting_slider_pane_t2_copy1

0x9966,	// (0x0001e157) setting_slider_pane_t3_copy1_ParamLimits

0x9966,	// (0x0001e157) setting_slider_pane_t3_copy1

0x997e,	// (0x0001e16f) slider_set_pane_copy1_ParamLimits

0x997e,	// (0x0001e16f) slider_set_pane_copy1

0xc841,	// (0x00021032) set_opt_bg_pane_g1_copy2

0xc849,	// (0x0002103a) set_opt_bg_pane_g2_copy2

0x7688,	// (0x0001be79) set_opt_bg_pane_g3_copy2

0xc859,	// (0x0002104a) set_opt_bg_pane_g4_copy2

0xc861,	// (0x00021052) set_opt_bg_pane_g5_copy2

0xc869,	// (0x0002105a) set_opt_bg_pane_g6_copy2

0xdfad,	// (0x0002279e) set_opt_bg_pane_g7_copy2

0x769a,	// (0x0001be8b) set_opt_bg_pane_g8_copy2

0x76a4,	// (0x0001be95) set_opt_bg_pane_g9_copy2

0x9994,	// (0x0001e185) aid_size_touch_slider_mark_copy1_ParamLimits

0x9994,	// (0x0001e185) aid_size_touch_slider_mark_copy1

0xdfb5,	// (0x000227a6) slider_set_pane_g1_copy1

0xf430,	// (0x00023c21) slider_set_pane_g2_copy1

0x91cd,	// (0x0001d9be) slider_set_pane_g3_copy1_ParamLimits

0x91cd,	// (0x0001d9be) slider_set_pane_g3_copy1

0x91e1,	// (0x0001d9d2) slider_set_pane_g4_copy1_ParamLimits

0x91e1,	// (0x0001d9d2) slider_set_pane_g4_copy1

0x91f9,	// (0x0001d9ea) slider_set_pane_g5_copy1_ParamLimits

0x91f9,	// (0x0001d9ea) slider_set_pane_g5_copy1

0x91cd,	// (0x0001d9be) slider_set_pane_g6_copy1_ParamLimits

0x91cd,	// (0x0001d9be) slider_set_pane_g6_copy1

0x99a8,	// (0x0001e199) slider_set_pane_g7_copy1_ParamLimits

0x99a8,	// (0x0001e199) slider_set_pane_g7_copy1

0xc2f5,	// (0x00020ae6) bg_set_opt_pane_cp2_copy1

0xdfbe,	// (0x000227af) setting_slider_graphic_pane_g1_copy1

0xdfc7,	// (0x000227b8) setting_slider_graphic_pane_t1_copy1

0xdfd7,	// (0x000227c8) setting_slider_graphic_pane_t2_copy1

0xdfe7,	// (0x000227d8) slider_set_pane_cp_copy1

0x76f0,	// (0x0001bee1) input_focus_pane_cp1_copy1

0x76f9,	// (0x0001beea) list_set_text_pane_copy1

0x7701,	// (0x0001bef2) setting_text_pane_g1_copy1

0x770a,	// (0x0001befb) set_text_pane_t1_copy1

0x76f0,	// (0x0001bee1) input_focus_pane_cp2_copy1

0x7701,	// (0x0001bef2) setting_code_pane_g1_copy1

0x7725,	// (0x0001bf16) setting_code_pane_t1_copy1

0x7733,	// (0x0001bf24) list_set_graphic_pane_copy1

0xc2f5,	// (0x00020ae6) bg_set_opt_pane_cp4_copy1

0xe728,	// (0x00022f19) list_set_graphic_pane_g1_copy1_ParamLimits

0xe728,	// (0x00022f19) list_set_graphic_pane_g1_copy1

0x7747,	// (0x0001bf38) list_set_graphic_pane_g2_copy1

0xe740,	// (0x00022f31) list_set_graphic_pane_t1_copy1_ParamLimits

0xe740,	// (0x00022f31) list_set_graphic_pane_t1_copy1

0x4423,	// (0x00018c14) rs_clock_indi_pane_g1

0x774f,	// (0x0001bf40) rs_clock_indi_pane_t1

0x775d,	// (0x0001bf4e) rs_indi_pane

0x7765,	// (0x0001bf56) rs_indi_pane_g1

0x776e,	// (0x0001bf5f) rs_indi_pane_g2

0x7472,	// (0x0001bc63) rs_indi_pane_g3

0x0002,

0xfebf,	// (0x000246b0) rs_indi_pane_g

0x109a,	// (0x0001588b) bg_popup_preview_window_pane_cp03

0x7777,	// (0x0001bf68) popup_fep_tooltip_window_t1

0xc00e,	// (0x000207ff) popup_note2_window_g2_ParamLimits

0xc00e,	// (0x000207ff) popup_note2_window_g2

0x0001,

0xfc5f,	// (0x00024450) popup_note2_window_g_ParamLimits

0xfc5f,	// (0x00024450) popup_note2_window_g

0x58b6,	// (0x0001a0a7) bg_popup_sub_pane_cp11_ParamLimits

0x58c3,	// (0x0001a0b4) cell_ai3_links_pane_g1_ParamLimits

0x58da,	// (0x0001a0cb) cell_ai3_links_pane_t1

0x770a,	// (0x0001befb) set_text_pane_t1_copy1_ParamLimits

0x0fab,	// (0x0001579c) cell_graphic_popup_pane_cp2_ParamLimits

0x0fab,	// (0x0001579c) cell_graphic_popup_pane_cp2

0xdff7,	// (0x000227e8) cell_graphic_popup_pane_g1_cp2

0xc5eb,	// (0x00020ddc) cell_graphic_popup_pane_g2_cp2

0x778d,	// (0x0001bf7e) cell_graphic_popup_pane_g3_cp2

0xdfff,	// (0x000227f0) cell_graphic_popup_pane_t2_cp2

0xc5fc,	// (0x00020ded) grid_highlight_pane_cp3_cp2

0xca99,	// (0x0002128a) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc77b,	// (0x00020f6c) main_tmo_pane_ParamLimits

0xcf8d,	// (0x0002177e) popup_tmo_big_image_note_window

0x6e23,	// (0x0001b614) cell_ai5_widget_list_pane

0x6e2b,	// (0x0001b61c) cell_ai5_widget_lrg_icon_pane

0xdda4,	// (0x00022595) tmo_note_info_pane_t1_ParamLimits

0xddb9,	// (0x000225aa) tmo_note_info_pane_t2_ParamLimits

0xddd0,	// (0x000225c1) tmo_note_info_pane_t3_ParamLimits

0x73ef,	// (0x0001bbe0) tmo_note_info_pane_t4_ParamLimits

0x7401,	// (0x0001bbf2) tmo_note_info_pane_t5_ParamLimits

0xfead,	// (0x0002469e) tmo_note_info_pane_t_ParamLimits

0x751f,	// (0x0001bd10) settings_container_pane_ParamLimits

0xdfef,	// (0x000227e0) indicator_popup_pane_cp5

0xdfef,	// (0x000227e0) indicator_popup_pane_cp6

0x7733,	// (0x0001bf24) list_set_graphic_pane_copy1_ParamLimits

0xc2e1,	// (0x00020ad2) bg_popup_window_pane_cp23

0x77a3,	// (0x0001bf94) popup_tmo_big_image_note_window_g1

0x77ac,	// (0x0001bf9d) popup_tmo_big_image_note_window_t1

0x77bc,	// (0x0001bfad) popup_tmo_big_image_note_window_t2

0x77cc,	// (0x0001bfbd) popup_tmo_big_image_note_window_t3

0x0002,

0xfec6,	// (0x000246b7) popup_tmo_big_image_note_window_t

0x4423,	// (0x00018c14) cell_ai5_widget_lrg_icon_pane_g1

0x77dc,	// (0x0001bfcd) cell_ai5_widget_lrg_icon_pane_t1

0x77ea,	// (0x0001bfdb) cell_ai5_widget_list_row_pane_ParamLimits

0x77ea,	// (0x0001bfdb) cell_ai5_widget_list_row_pane

0x7801,	// (0x0001bff2) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7801,	// (0x0001bff2) cell_ai5_widget_list_row_pane_g1

0xe00d,	// (0x000227fe) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe00d,	// (0x000227fe) cell_ai5_widget_list_row_pane_t1

0x7839,	// (0x0001c02a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7839,	// (0x0001c02a) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecd,	// (0x000246be) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecd,	// (0x000246be) cell_ai5_widget_list_row_pane_t

0xe1d9,	// (0x000229ca) main_fep_vtchi_ss_pane

0x7881,	// (0x0001c072) popup_fep_char_pre_window

0x7889,	// (0x0001c07a) popup_fep_ituss_window

0xe060,	// (0x00022851) popup_fep_vkbss_window

0xe06d,	// (0x0002285e) grid_vkbss_keypad_pane_ParamLimits

0xe06d,	// (0x0002285e) grid_vkbss_keypad_pane

0x78ef,	// (0x0001c0e0) ituss_keypad_pane

0xf444,	// (0x00023c35) aid_vkbss_key_offset_ParamLimits

0xf444,	// (0x00023c35) aid_vkbss_key_offset

0x99be,	// (0x0001e1af) cell_vkbss_key_pane_ParamLimits

0x99be,	// (0x0001e1af) cell_vkbss_key_pane

0x175d,	// (0x00015f4e) bg_cell_vkbss_key_g1_ParamLimits

0x175d,	// (0x00015f4e) bg_cell_vkbss_key_g1

0xe07d,	// (0x0002286e) cell_vkbss_key_3p_pane_ParamLimits

0xe07d,	// (0x0002286e) cell_vkbss_key_3p_pane

0xe097,	// (0x00022888) cell_vkbss_key_g1_ParamLimits

0xe097,	// (0x00022888) cell_vkbss_key_g1

0xe0b1,	// (0x000228a2) cell_vkbss_key_t1_ParamLimits

0xe0b1,	// (0x000228a2) cell_vkbss_key_t1

0xf450,	// (0x00023c41) cell_ituss_key_pane_ParamLimits

0xf450,	// (0x00023c41) cell_ituss_key_pane

0x7951,	// (0x0001c142) bg_cell_ituss_key_g1_ParamLimits

0x7951,	// (0x0001c142) bg_cell_ituss_key_g1

0x795d,	// (0x0001c14e) cell_ituss_key_pane_g1_ParamLimits

0x795d,	// (0x0001c14e) cell_ituss_key_pane_g1

0xf461,	// (0x00023c52) cell_ituss_key_pane_g2_ParamLimits

0xf461,	// (0x00023c52) cell_ituss_key_pane_g2

0x0002,

0xfed4,	// (0x000246c5) cell_ituss_key_pane_g_ParamLimits

0xfed4,	// (0x000246c5) cell_ituss_key_pane_g

0xf48d,	// (0x00023c7e) cell_ituss_key_t1_ParamLimits

0xf48d,	// (0x00023c7e) cell_ituss_key_t1

0xf4c7,	// (0x00023cb8) cell_ituss_key_t2_ParamLimits

0xf4c7,	// (0x00023cb8) cell_ituss_key_t2

0xf4f8,	// (0x00023ce9) cell_ituss_key_t3_ParamLimits

0xf4f8,	// (0x00023ce9) cell_ituss_key_t3

0xf4c7,	// (0x00023cb8) cell_ituss_key_t4_ParamLimits

0xf4c7,	// (0x00023cb8) cell_ituss_key_t4

0x0004,

0xfedb,	// (0x000246cc) cell_ituss_key_t_ParamLimits

0xfedb,	// (0x000246cc) cell_ituss_key_t

0x7983,	// (0x0001c174) cell_vkbss_key_3p_pane_g1

0x798b,	// (0x0001c17c) cell_vkbss_key_3p_pane_g2

0x7993,	// (0x0001c184) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee6,	// (0x000246d7) cell_vkbss_key_3p_pane_g

0x109a,	// (0x0001588b) bg_popup_fep_char_preview_window_cp02

0x799b,	// (0x0001c18c) popup_fep_char_pre_window_t1

0xdc4c,	// (0x0002243d) main_ai5_sk_pane

0x747b,	// (0x0001bc6c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7487,	// (0x0001bc78) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4c99,	// (0x0001948a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x749c,	// (0x0001bc8d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb8,	// (0x000246a9) cell_contacts_ai5_widget_pane_g_ParamLimits

0x74a8,	// (0x0001bc99) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc77b,	// (0x00020f6c) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe0dc,	// (0x000228cd) main_ai5_sk_pane_g1

0xb121,	// (0x0001f912) popup_query_code_window_g1

0xe051,	// (0x00022842) popup_fep_vkb_icf_pane

0x78c9,	// (0x0001c0ba) popup_fep_vtchi_icf_pane

0x79b2,	// (0x0001c1a3) bg_icf_pane

0x79be,	// (0x0001c1af) list_vkb_icf_pane

0x79cd,	// (0x0001c1be) bg_icf_pane_cp01

0x79e0,	// (0x0001c1d1) vtchi_icf_list_pane

0xe0e5,	// (0x000228d6) list_vkb_icf_pane_t1_ParamLimits

0xe0e5,	// (0x000228d6) list_vkb_icf_pane_t1

0x7a11,	// (0x0001c202) vtchi_icf_list_pane_t1_ParamLimits

0x7a11,	// (0x0001c202) vtchi_icf_list_pane_t1

0x7889,	// (0x0001c07a) popup_fep_ituss_window_ParamLimits

0x78c9,	// (0x0001c0ba) popup_fep_vtchi_icf_pane_ParamLimits

0x78ef,	// (0x0001c0e0) ituss_keypad_pane_ParamLimits

0xf438,	// (0x00023c29) ituss_sks_pane

0x79b2,	// (0x0001c1a3) bg_icf_pane_ParamLimits

0xe03e,	// (0x0002282f) icf_edit_indi_pane_ParamLimits

0xe03e,	// (0x0002282f) icf_edit_indi_pane

0x79be,	// (0x0001c1af) list_vkb_icf_pane_ParamLimits

0x79cd,	// (0x0001c1be) bg_icf_pane_cp01_ParamLimits

0x7874,	// (0x0001c065) icf_edit_indi_pane_cp01_ParamLimits

0x7874,	// (0x0001c065) icf_edit_indi_pane_cp01

0x79e8,	// (0x0001c1d9) vtchi_query_pane

0x6c3a,	// (0x0001b42b) icf_edit_indi_pane_g1_ParamLimits

0x6c3a,	// (0x0001b42b) icf_edit_indi_pane_g1

0xe0fc,	// (0x000228ed) icf_edit_indi_pane_g2_ParamLimits

0xe0fc,	// (0x000228ed) icf_edit_indi_pane_g2

0x0001,

0xfefe,	// (0x000246ef) icf_edit_indi_pane_g_ParamLimits

0xfefe,	// (0x000246ef) icf_edit_indi_pane_g

0xe10e,	// (0x000228ff) icf_edit_indi_pane_t1

0x7a2f,	// (0x0001c220) bg_input_focus_pane_cp042

0xc65f,	// (0x00020e50) vtchi_button_pane

0x7a38,	// (0x0001c229) vtchi_query_pane_t1

0x7a46,	// (0x0001c237) vtchi_query_pane_t2

0x7a54,	// (0x0001c245) vtchi_query_pane_t3

0x0002,

0xfeed,	// (0x000246de) vtchi_query_pane_t

0xe1d9,	// (0x000229ca) bg_button_pane_cp13

0x7a62,	// (0x0001c253) vtchi_button_pane_g1

0xf53b,	// (0x00023d2c) ituss_sks_pane_g1

0xf546,	// (0x00023d37) ituss_sks_pane_g2

0x0001,

0xfef4,	// (0x000246e5) ituss_sks_pane_g

0x7a6a,	// (0x0001c25b) ituss_sks_pane_t1

0x7a78,	// (0x0001c269) ituss_sks_pane_t2

0x0001,

0xfef9,	// (0x000246ea) ituss_sks_pane_t

0x3e53,	// (0x00018644) indicator_nsta_pane_cp_g1

0x3e5b,	// (0x0001864c) indicator_nsta_pane_cp_g2

0x3e63,	// (0x00018654) indicator_nsta_pane_cp_g3

0x3e53,	// (0x00018644) indicator_nsta_pane_cp_g4

0x3e5b,	// (0x0001864c) indicator_nsta_pane_cp_g5

0x3e63,	// (0x00018654) indicator_nsta_pane_cp_g6

0x0005,

0xfa9d,	// (0x0002428e) indicator_nsta_pane_cp_g

0xda29,	// (0x0002221a) cell_graphic2_pane_t2_ParamLimits

0xda29,	// (0x0002221a) cell_graphic2_pane_t2

0x0001,

0xfdaf,	// (0x000245a0) cell_graphic2_pane_t_ParamLimits

0xfdaf,	// (0x000245a0) cell_graphic2_pane_t

0xda62,	// (0x00022253) cell_graphic2_control_pane_t1

0xa79f,	// (0x0001ef90) signal_pane_g3_ParamLimits

0xa79f,	// (0x0001ef90) signal_pane_g3

0xa7b3,	// (0x0001efa4) signal_pane_g4_ParamLimits

0xa7b3,	// (0x0001efa4) signal_pane_g4

0x784b,	// (0x0001c03c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x784b,	// (0x0001c03c) cell_ai5_widget_list_row_pane_t3

0x7971,	// (0x0001c162) cell_ituss_key_pane_t1_ParamLimits

0x7971,	// (0x0001c162) cell_ituss_key_pane_t1

0x1ac1,	// (0x000162b2) form_field_data_wide_pane_vc_t2_ParamLimits

0x1ac1,	// (0x000162b2) form_field_data_wide_pane_vc_t2

0x1ad5,	// (0x000162c6) form_field_data_wide_pane_vc_t3_ParamLimits

0x1ad5,	// (0x000162c6) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e9,	// (0x00023fda) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e9,	// (0x00023fda) form_field_data_wide_pane_vc_t

0x3b1a,	// (0x0001830b) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3b1a,	// (0x0001830b) form_field_slider_wide_pane_vc_t3

0x3bf8,	// (0x000183e9) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3bf8,	// (0x000183e9) form_field_popup_wide_pane_vc_t2

0x3c0f,	// (0x00018400) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3c0f,	// (0x00018400) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa8c,	// (0x0002427d) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa8c,	// (0x0002427d) form_field_popup_wide_pane_vc_t

0x9790,	// (0x0001df81) aid_fshwr2_btn_pane_ParamLimits

0x97a4,	// (0x0001df95) aid_fshwr2_syb_pane_ParamLimits

0x97b8,	// (0x0001dfa9) aid_fshwr2_txt_pane_ParamLimits

0xeffe,	// (0x000237ef) fshwr2_bg_pane_ParamLimits

0x97c8,	// (0x0001dfb9) fshwr2_func_candi_pane_ParamLimits

0x97e8,	// (0x0001dfd9) fshwr2_hwr_syb_pane_ParamLimits

0x980a,	// (0x0001dffb) fshwr2_icf_pane_ParamLimits

0x3a8b,	// (0x0001827c) list_double_graphic_pane_vc_g4_ParamLimits

0x3a8b,	// (0x0001827c) list_double_graphic_pane_vc_g4

0xf481,	// (0x00023c72) cell_ituss_key_pane_g3_ParamLimits

0xf481,	// (0x00023c72) cell_ituss_key_pane_g3

0xf529,	// (0x00023d1a) cell_ituss_key_t5_ParamLimits

0xf529,	// (0x00023d1a) cell_ituss_key_t5

0xe060,	// (0x00022851) popup_fep_vkbss_window_ParamLimits

0x6dba,	// (0x0001b5ab) aid_cell_ai5_quarter

0xe10e,	// (0x000228ff) icf_edit_indi_pane_t1_ParamLimits

0x9c9e,	// (0x0001e48f) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x9c9e,	// (0x0001e48f) aid_tch_indicator_popup_pane_cp2

0x9cb1,	// (0x0001e4a2) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x9cb1,	// (0x0001e4a2) aid_tch_query_popup_data_pane_cp2

0x1e6f,	// (0x00016660) aid_tch_query_popup_pane_ParamLimits

0x1e6f,	// (0x00016660) aid_tch_query_popup_pane

0x1e6f,	// (0x00016660) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x1e6f,	// (0x00016660) aid_tch_query_popup_data_pane_cp1

0x72de,	// (0x0001bacf) cell_fshwr2_syb_bg_pane_ParamLimits

0x98fd,	// (0x0001e0ee) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x9910,	// (0x0001e101) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe051,	// (0x00022842) popup_fep_vkb_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal

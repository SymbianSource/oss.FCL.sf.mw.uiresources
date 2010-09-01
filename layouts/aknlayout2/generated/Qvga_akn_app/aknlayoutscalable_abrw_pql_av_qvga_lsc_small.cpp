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

#include "aknlayoutscalable_abrw_pql_av_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x00021dbf };

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
0xc3af,	// (0x0002e16e) Screen

0xc3b9,	// (0x0002e178) application_window_ParamLimits

0xc3b9,	// (0x0002e178) application_window

0x0c69,	// (0x00022a28) screen_g1

0xc3e7,	// (0x0002e1a6) area_bottom_pane_ParamLimits

0xc3e7,	// (0x0002e1a6) area_bottom_pane

0x0c73,	// (0x00022a32) area_top_pane_ParamLimits

0x0c73,	// (0x00022a32) area_top_pane

0x5bad,	// (0x0002796c) main_pane_ParamLimits

0x5bad,	// (0x0002796c) main_pane

0x0ceb,	// (0x00022aaa) misc_graphics

0xe13c,	// (0x0002fefb) battery_pane_ParamLimits

0xe13c,	// (0x0002fefb) battery_pane

0x27d1,	// (0x00024590) bg_status_flat_pane_g8

0x27d9,	// (0x00024598) bg_status_flat_pane_g9

0x1ee4,	// (0x00023ca3) context_pane_ParamLimits

0x1ee4,	// (0x00023ca3) context_pane

0xe296,	// (0x00030055) navi_pane_ParamLimits

0xe296,	// (0x00030055) navi_pane

0xe30b,	// (0x000300ca) signal_pane_ParamLimits

0xe30b,	// (0x000300ca) signal_pane

0x0008,

0xf84f,	// (0x0003160e) bg_status_flat_pane_g

0xe397,	// (0x00030156) status_pane_g1_ParamLimits

0xe397,	// (0x00030156) status_pane_g1

0xe3a3,	// (0x00030162) status_pane_g2_ParamLimits

0xe3a3,	// (0x00030162) status_pane_g2

0x1f4a,	// (0x00023d09) status_pane_g3_ParamLimits

0x1f4a,	// (0x00023d09) status_pane_g3

0x0004,

0xf77b,	// (0x0003153a) status_pane_g_ParamLimits

0xf77b,	// (0x0003153a) status_pane_g

0xe3af,	// (0x0003016e) title_pane_ParamLimits

0xe3af,	// (0x0003016e) title_pane

0xe40a,	// (0x000301c9) uni_indicator_pane_ParamLimits

0xe40a,	// (0x000301c9) uni_indicator_pane

0x1e3b,	// (0x00023bfa) bg_list_pane_ParamLimits

0x1e3b,	// (0x00023bfa) bg_list_pane

0xe0b0,	// (0x0002fe6f) find_pane

0xc714,	// (0x0002e4d3) listscroll_app_pane_ParamLimits

0xc714,	// (0x0002e4d3) listscroll_app_pane

0x1e5b,	// (0x00023c1a) listscroll_form_pane

0xe0b8,	// (0x0002fe77) listscroll_gen_pane_ParamLimits

0xe0b8,	// (0x0002fe77) listscroll_gen_pane

0x6a15,	// (0x000287d4) listscroll_set_pane

0xc724,	// (0x0002e4e3) main_idle_act_pane

0x1ca6,	// (0x00023a65) main_idle_trad_pane

0x1ca6,	// (0x00023a65) main_list_empty_pane

0x1488,	// (0x00023247) main_midp_pane

0x1e75,	// (0x00023c34) main_pane_g1_ParamLimits

0x1e75,	// (0x00023c34) main_pane_g1

0xc737,	// (0x0002e4f6) popup_ai_message_window_ParamLimits

0xc737,	// (0x0002e4f6) popup_ai_message_window

0xc7bb,	// (0x0002e57a) popup_fep_china_uni_window_ParamLimits

0xc7bb,	// (0x0002e57a) popup_fep_china_uni_window

0x6aff,	// (0x000288be) popup_fep_japan_candidate_window_ParamLimits

0x6aff,	// (0x000288be) popup_fep_japan_candidate_window

0x6b1d,	// (0x000288dc) popup_fep_japan_predictive_window_ParamLimits

0x6b1d,	// (0x000288dc) popup_fep_japan_predictive_window

0xc7f9,	// (0x0002e5b8) popup_find_window

0xc812,	// (0x0002e5d1) popup_grid_graphic_window_ParamLimits

0xc812,	// (0x0002e5d1) popup_grid_graphic_window

0x6b74,	// (0x00028933) popup_large_graphic_colour_window

0xc88e,	// (0x0002e64d) popup_menu_window_ParamLimits

0xc88e,	// (0x0002e64d) popup_menu_window

0xc9ec,	// (0x0002e7ab) popup_note_image_window

0xc9b4,	// (0x0002e773) popup_note_wait_window_ParamLimits

0xc9b4,	// (0x0002e773) popup_note_wait_window

0xca02,	// (0x0002e7c1) popup_note_window_ParamLimits

0xca02,	// (0x0002e7c1) popup_note_window

0xca96,	// (0x0002e855) popup_query_code_window_ParamLimits

0xca96,	// (0x0002e855) popup_query_code_window

0x6d31,	// (0x00028af0) popup_query_data_code_window_ParamLimits

0x6d31,	// (0x00028af0) popup_query_data_code_window

0xcace,	// (0x0002e88d) popup_query_data_window_ParamLimits

0xcace,	// (0x0002e88d) popup_query_data_window

0xcb42,	// (0x0002e901) popup_query_sat_info_window_ParamLimits

0xcb42,	// (0x0002e901) popup_query_sat_info_window

0xcbcf,	// (0x0002e98e) popup_snote_single_graphic_window_ParamLimits

0xcbcf,	// (0x0002e98e) popup_snote_single_graphic_window

0xcbcf,	// (0x0002e98e) popup_snote_single_text_window_ParamLimits

0xcbcf,	// (0x0002e98e) popup_snote_single_text_window

0x6da0,	// (0x00028b5f) popup_sub_window_general

0x6ea4,	// (0x00028c63) popup_window_general_ParamLimits

0x6ea4,	// (0x00028c63) popup_window_general

0x1e83,	// (0x00023c42) power_save_pane

0xc5e5,	// (0x0002e3a4) control_pane_g1_ParamLimits

0xc5e5,	// (0x0002e3a4) control_pane_g1

0x689f,	// (0x0002865e) control_pane_g2_ParamLimits

0x689f,	// (0x0002865e) control_pane_g2

0x1e2d,	// (0x00023bec) control_pane_g3_ParamLimits

0x1e2d,	// (0x00023bec) control_pane_g3

0x0007,

0xf763,	// (0x00031522) control_pane_g_ParamLimits

0xf763,	// (0x00031522) control_pane_g

0xc61a,	// (0x0002e3d9) control_pane_t1_ParamLimits

0xc61a,	// (0x0002e3d9) control_pane_t1

0xc676,	// (0x0002e435) control_pane_t2_ParamLimits

0xc676,	// (0x0002e435) control_pane_t2

0x0002,

0xf774,	// (0x00031533) control_pane_t_ParamLimits

0xf774,	// (0x00031533) control_pane_t

0x1dd5,	// (0x00023b94) navi_navi_volume_pane_cp1

0x1ddd,	// (0x00023b9c) status_small_icon_pane

0x1de5,	// (0x00023ba4) status_small_pane_g1_ParamLimits

0x1de5,	// (0x00023ba4) status_small_pane_g1

0xe008,	// (0x0002fdc7) status_small_pane_g2_ParamLimits

0xe008,	// (0x0002fdc7) status_small_pane_g2

0xe014,	// (0x0002fdd3) status_small_pane_g3_ParamLimits

0xe014,	// (0x0002fdd3) status_small_pane_g3

0xe020,	// (0x0002fddf) status_small_pane_g4_ParamLimits

0xe020,	// (0x0002fddf) status_small_pane_g4

0xe02c,	// (0x0002fdeb) status_small_pane_g5_ParamLimits

0xe02c,	// (0x0002fdeb) status_small_pane_g5

0x1e19,	// (0x00023bd8) status_small_pane_g6_ParamLimits

0x1e19,	// (0x00023bd8) status_small_pane_g6

0x0007,

0xf752,	// (0x00031511) status_small_pane_g_ParamLimits

0xf752,	// (0x00031511) status_small_pane_g

0xe05b,	// (0x0002fe1a) status_small_pane_t1

0xe075,	// (0x0002fe34) status_small_wait_pane_ParamLimits

0xe075,	// (0x0002fe34) status_small_wait_pane

0xdbf8,	// (0x0002f9b7) aid_levels_signal_ParamLimits

0xdbf8,	// (0x0002f9b7) aid_levels_signal

0xdc0c,	// (0x0002f9cb) signal_pane_g1_ParamLimits

0xdc0c,	// (0x0002f9cb) signal_pane_g1

0xdc26,	// (0x0002f9e5) signal_pane_g2_ParamLimits

0xdc26,	// (0x0002f9e5) signal_pane_g2

0x0003,

0xf6e3,	// (0x000314a2) signal_pane_g_ParamLimits

0xf6e3,	// (0x000314a2) signal_pane_g

0x184b,	// (0x0002360a) context_pane_g1

0xd45d,	// (0x0002f21c) title_pane_g1

0xd49f,	// (0x0002f25e) title_pane_t1

0x0d01,	// (0x00022ac0) title_pane_t2

0x0d27,	// (0x00022ae6) title_pane_t3

0x0002,

0xf532,	// (0x000312f1) title_pane_t

0xe430,	// (0x000301ef) aid_levels_battery_ParamLimits

0xe430,	// (0x000301ef) aid_levels_battery

0xe448,	// (0x00030207) battery_pane_g1_ParamLimits

0xe448,	// (0x00030207) battery_pane_g1

0xe463,	// (0x00030222) battery_pane_g2_ParamLimits

0xe463,	// (0x00030222) battery_pane_g2

0x0001,

0xf786,	// (0x00031545) battery_pane_g_ParamLimits

0xf786,	// (0x00031545) battery_pane_g

0xe609,	// (0x000303c8) uni_indicator_pane_g1

0xe61d,	// (0x000303dc) uni_indicator_pane_g2

0xe632,	// (0x000303f1) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x000316b6) uni_indicator_pane_g

0x13fc,	// (0x000231bb) navi_icon_pane_ParamLimits

0x13fc,	// (0x000231bb) navi_icon_pane

0x0ceb,	// (0x00022aaa) navi_midp_pane

0x0ceb,	// (0x00022aaa) navi_navi_pane

0x13fc,	// (0x000231bb) navi_text_pane_ParamLimits

0x13fc,	// (0x000231bb) navi_text_pane

0x0c69,	// (0x00022a28) status_small_wait_pane_g1

0x103c,	// (0x00022dfb) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x000316b1) status_small_wait_pane_g

0xe5af,	// (0x0003036e) navi_navi_icon_text_pane

0xe5b7,	// (0x00030376) navi_navi_pane_g1_ParamLimits

0xe5b7,	// (0x00030376) navi_navi_pane_g1

0xe5c9,	// (0x00030388) navi_navi_pane_g2_ParamLimits

0xe5c9,	// (0x00030388) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x0003167f) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x0003167f) navi_navi_pane_g

0xe5db,	// (0x0003039a) navi_navi_tabs_pane

0xe5af,	// (0x0003036e) navi_navi_text_pane

0xe5af,	// (0x0003036e) navi_navi_volume_pane

0x2d17,	// (0x00024ad6) navi_text_pane_t1

0x2d0b,	// (0x00024aca) navi_icon_pane_g1

0x2c5f,	// (0x00024a1e) navi_navi_text_pane_t1

0x754b,	// (0x0002930a) navi_navi_volume_pane_g1

0xce1d,	// (0x0002ebdc) volume_small_pane

0xe50b,	// (0x000302ca) navi_navi_icon_text_pane_g1

0xe513,	// (0x000302d2) navi_navi_icon_text_pane_t1

0x2819,	// (0x000245d8) navi_tabs_2_long_pane

0x2819,	// (0x000245d8) navi_tabs_2_pane

0x2819,	// (0x000245d8) navi_tabs_3_long_pane

0x2819,	// (0x000245d8) navi_tabs_3_pane

0x2819,	// (0x000245d8) navi_tabs_4_pane

0xcdfd,	// (0x0002ebbc) tabs_2_active_pane_ParamLimits

0xcdfd,	// (0x0002ebbc) tabs_2_active_pane

0xce0d,	// (0x0002ebcc) tabs_2_passive_pane_ParamLimits

0xce0d,	// (0x0002ebcc) tabs_2_passive_pane

0xcdcb,	// (0x0002eb8a) tabs_3_active_pane_ParamLimits

0xcdcb,	// (0x0002eb8a) tabs_3_active_pane

0xcddb,	// (0x0002eb9a) tabs_3_passive_pane_ParamLimits

0xcddb,	// (0x0002eb9a) tabs_3_passive_pane

0xcdec,	// (0x0002ebab) tabs_3_passive_pane_cp_ParamLimits

0xcdec,	// (0x0002ebab) tabs_3_passive_pane_cp

0xcd87,	// (0x0002eb46) tabs_4_active_pane_ParamLimits

0xcd87,	// (0x0002eb46) tabs_4_active_pane

0xcd98,	// (0x0002eb57) tabs_4_passive_pane_ParamLimits

0xcd98,	// (0x0002eb57) tabs_4_passive_pane

0xcda9,	// (0x0002eb68) tabs_4_passive_pane_cp_ParamLimits

0xcda9,	// (0x0002eb68) tabs_4_passive_pane_cp

0xcdba,	// (0x0002eb79) tabs_4_passive_pane_cp2_ParamLimits

0xcdba,	// (0x0002eb79) tabs_4_passive_pane_cp2

0xcd67,	// (0x0002eb26) tabs_2_long_active_pane_ParamLimits

0xcd67,	// (0x0002eb26) tabs_2_long_active_pane

0xcd77,	// (0x0002eb36) tabs_2_long_passive_pane_ParamLimits

0xcd77,	// (0x0002eb36) tabs_2_long_passive_pane

0xcd30,	// (0x0002eaef) tabs_3_long_active_pane_ParamLimits

0xcd30,	// (0x0002eaef) tabs_3_long_active_pane

0xcd43,	// (0x0002eb02) tabs_3_long_passive_pane_ParamLimits

0xcd43,	// (0x0002eb02) tabs_3_long_passive_pane

0xcd54,	// (0x0002eb13) tabs_3_long_passive_pane_cp_ParamLimits

0xcd54,	// (0x0002eb13) tabs_3_long_passive_pane_cp

0x7378,	// (0x00029137) volume_small_pane_g1

0x7381,	// (0x00029140) volume_small_pane_g2

0x738a,	// (0x00029149) volume_small_pane_g3

0x7393,	// (0x00029152) volume_small_pane_g4

0x739c,	// (0x0002915b) volume_small_pane_g5

0x73a5,	// (0x00029164) volume_small_pane_g6

0x73ae,	// (0x0002916d) volume_small_pane_g7

0x73b7,	// (0x00029176) volume_small_pane_g8

0x73c0,	// (0x0002917f) volume_small_pane_g9

0x73c9,	// (0x00029188) volume_small_pane_g10

0x0009,

0xf88c,	// (0x0003164b) volume_small_pane_g

0x0d39,	// (0x00022af8) bg_active_tab_pane_cp2_ParamLimits

0x0d39,	// (0x00022af8) bg_active_tab_pane_cp2

0x0d47,	// (0x00022b06) tabs_3_active_pane_g1

0xd52c,	// (0x0002f2eb) tabs_3_active_pane_t1

0x0d39,	// (0x00022af8) bg_passive_tab_pane_cp2_ParamLimits

0x0d39,	// (0x00022af8) bg_passive_tab_pane_cp2

0x0d47,	// (0x00022b06) tabs_3_passive_pane_g1

0xd52c,	// (0x0002f2eb) tabs_3_passive_pane_t1

0x0d39,	// (0x00022af8) bg_active_tab_pane_cp3_ParamLimits

0x0d39,	// (0x00022af8) bg_active_tab_pane_cp3

0x31b7,	// (0x00024f76) tabs_4_active_pane_g1

0xd542,	// (0x0002f301) tabs_4_active_pane_t1

0x0d39,	// (0x00022af8) bg_passive_tab_pane_cp3_ParamLimits

0x0d39,	// (0x00022af8) bg_passive_tab_pane_cp3

0x31b7,	// (0x00024f76) tabs_4_1_passive_pane_g1

0xd542,	// (0x0002f301) tabs_4_1_passive_pane_t1

0x1488,	// (0x00023247) list_highlight_pane_cp2

0xe67b,	// (0x0003043a) list_set_pane_ParamLimits

0xe67b,	// (0x0003043a) list_set_pane

0xe709,	// (0x000304c8) main_pane_set_t1_ParamLimits

0xe709,	// (0x000304c8) main_pane_set_t1

0xe729,	// (0x000304e8) main_pane_set_t2_ParamLimits

0xe729,	// (0x000304e8) main_pane_set_t2

0xe73d,	// (0x000304fc) main_pane_set_t3_ParamLimits

0xe73d,	// (0x000304fc) main_pane_set_t3

0xe74f,	// (0x0003050e) main_pane_set_t4_ParamLimits

0xe74f,	// (0x0003050e) main_pane_set_t4

0x0003,

0xf95c,	// (0x0003171b) main_pane_set_t_ParamLimits

0xf95c,	// (0x0003171b) main_pane_set_t

0xe761,	// (0x00030520) setting_code_pane

0xe769,	// (0x00030528) setting_slider_graphic_pane

0xe769,	// (0x00030528) setting_slider_pane

0xe769,	// (0x00030528) setting_text_pane

0xe769,	// (0x00030528) setting_volume_pane

0xc57e,	// (0x0002e33d) volume_set_pane

0x0d4f,	// (0x00022b0e) bg_set_opt_pane_cp

0x5e72,	// (0x00027c31) setting_slider_pane_t1

0xc586,	// (0x0002e345) setting_slider_pane_t2

0xc59f,	// (0x0002e35e) setting_slider_pane_t3

0x0002,

0xf539,	// (0x000312f8) setting_slider_pane_t

0x5eb8,	// (0x00027c77) slider_set_pane

0x0ceb,	// (0x00022aaa) bg_set_opt_pane_cp2

0x0d5d,	// (0x00022b1c) setting_slider_graphic_pane_g1

0xc5b6,	// (0x0002e375) setting_slider_graphic_pane_t1

0xc5c5,	// (0x0002e384) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x000312ff) setting_slider_graphic_pane_t

0xc5d4,	// (0x0002e393) slider_set_pane_cp

0x0ceb,	// (0x00022aaa) input_focus_pane_cp1

0x3153,	// (0x00024f12) list_set_text_pane

0x0c69,	// (0x00022a28) setting_text_pane_g1

0x0ceb,	// (0x00022aaa) input_focus_pane_cp2

0x0c69,	// (0x00022a28) setting_code_pane_g1

0x0d66,	// (0x00022b25) setting_code_pane_t1

0xd558,	// (0x0002f317) set_text_pane_t1_ParamLimits

0xd558,	// (0x0002f317) set_text_pane_t1

0x134a,	// (0x00023109) set_opt_bg_pane_g1

0x1352,	// (0x00023111) set_opt_bg_pane_g2

0xe647,	// (0x00030406) set_opt_bg_pane_g3

0x1362,	// (0x00023121) set_opt_bg_pane_g4

0x136a,	// (0x00023129) set_opt_bg_pane_g5

0x1372,	// (0x00023131) set_opt_bg_pane_g6

0xe64f,	// (0x0003040e) set_opt_bg_pane_g7

0xe657,	// (0x00030416) set_opt_bg_pane_g8

0xe65f,	// (0x0003041e) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x00031708) set_opt_bg_pane_g

0x3146,	// (0x00024f05) slider_set_pane_g1

0x7623,	// (0x000293e2) slider_set_pane_g2

0x0006,

0xf93a,	// (0x000316f9) slider_set_pane_g

0xce26,	// (0x0002ebe5) volume_set_pane_g1

0xce2e,	// (0x0002ebed) volume_set_pane_g2

0xce36,	// (0x0002ebf5) volume_set_pane_g3

0xce3e,	// (0x0002ebfd) volume_set_pane_g4

0xce46,	// (0x0002ec05) volume_set_pane_g5

0xce4e,	// (0x0002ec0d) volume_set_pane_g6

0xce56,	// (0x0002ec15) volume_set_pane_g7

0xce5e,	// (0x0002ec1d) volume_set_pane_g8

0xce66,	// (0x0002ec25) volume_set_pane_g9

0xce6e,	// (0x0002ec2d) volume_set_pane_g10

0x0009,

0xf912,	// (0x000316d1) volume_set_pane_g

0xd572,	// (0x0002f331) indicator_pane_ParamLimits

0xd572,	// (0x0002f331) indicator_pane

0xd59a,	// (0x0002f359) main_idle_pane_g2_ParamLimits

0xd59a,	// (0x0002f359) main_idle_pane_g2

0xd5ca,	// (0x0002f389) main_pane_idle_g1_ParamLimits

0xd5ca,	// (0x0002f389) main_pane_idle_g1

0x0d74,	// (0x00022b33) popup_clock_digital_analogue_window_ParamLimits

0x0d74,	// (0x00022b33) popup_clock_digital_analogue_window

0xd5ef,	// (0x0002f3ae) soft_indicator_pane_ParamLimits

0xd5ef,	// (0x0002f3ae) soft_indicator_pane

0xd609,	// (0x0002f3c8) wallpaper_pane_ParamLimits

0xd609,	// (0x0002f3c8) wallpaper_pane

0x0c69,	// (0x00022a28) wallpaper_pane_g1

0xd61b,	// (0x0002f3da) indicator_pane_g1_ParamLimits

0xd61b,	// (0x0002f3da) indicator_pane_g1

0x32c7,	// (0x00025086) navi_navi_icon_text_pane_srt_g1

0x0da2,	// (0x00022b61) soft_indicator_pane_t1

0x0dbc,	// (0x00022b7b) aid_ps_area_pane

0xd634,	// (0x0002f3f3) aid_ps_clock_pane

0x0dcd,	// (0x00022b8c) aid_ps_indicator_pane

0x0dd9,	// (0x00022b98) indicator_ps_pane_ParamLimits

0x0dd9,	// (0x00022b98) indicator_ps_pane

0x0de8,	// (0x00022ba7) power_save_pane_g1_ParamLimits

0x0de8,	// (0x00022ba7) power_save_pane_g1

0x0df4,	// (0x00022bb3) power_save_pane_g2_ParamLimits

0x0df4,	// (0x00022bb3) power_save_pane_g2

0x5aba,	// (0x00027879) aid_navinavi_width_pane

0x0dbc,	// (0x00022b7b) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00031304) power_save_pane_g_ParamLimits

0xf545,	// (0x00031304) power_save_pane_g

0x0e02,	// (0x00022bc1) power_save_pane_t1_ParamLimits

0x0e02,	// (0x00022bc1) power_save_pane_t1

0xd634,	// (0x0002f3f3) aid_ps_clock_pane_ParamLimits

0x0dcd,	// (0x00022b8c) aid_ps_indicator_pane_ParamLimits

0x0e14,	// (0x00022bd3) power_save_pane_t4_ParamLimits

0x0e14,	// (0x00022bd3) power_save_pane_t4

0x0001,

0xf54a,	// (0x00031309) power_save_pane_t_ParamLimits

0xf54a,	// (0x00031309) power_save_pane_t

0x0e3e,	// (0x00022bfd) power_save_t3_ParamLimits

0x0e3e,	// (0x00022bfd) power_save_t3

0x0e29,	// (0x00022be8) power_save_t2_ParamLimits

0x0e29,	// (0x00022be8) power_save_t2

0x0e53,	// (0x00022c12) indicator_ps_pane_g1

0xd640,	// (0x0002f3ff) ai_gene_pane_ParamLimits

0xd640,	// (0x0002f3ff) ai_gene_pane

0xd657,	// (0x0002f416) ai_links_pane_ParamLimits

0xd657,	// (0x0002f416) ai_links_pane

0xd669,	// (0x0002f428) indicator_pane_cp1_ParamLimits

0xd669,	// (0x0002f428) indicator_pane_cp1

0xd678,	// (0x0002f437) main_pane_idle_g1_cp_ParamLimits

0xd678,	// (0x0002f437) main_pane_idle_g1_cp

0x0e5c,	// (0x00022c1b) popup_ai_links_title_window

0xd690,	// (0x0002f44f) soft_indicator_pane_cp1_ParamLimits

0xd690,	// (0x0002f44f) soft_indicator_pane_cp1

0x2f9c,	// (0x00024d5b) ai_links_pane_g1

0x2fa5,	// (0x00024d64) grid_ai_links_pane

0xe600,	// (0x000303bf) ai_gene_pane_1

0x2f8a,	// (0x00024d49) ai_gene_pane_2

0x2f93,	// (0x00024d52) list_highlight_pane_cp4

0xe5e4,	// (0x000303a3) cell_ai_link_pane_ParamLimits

0xe5e4,	// (0x000303a3) cell_ai_link_pane

0x2f82,	// (0x00024d41) cell_ai_link_pane_g1

0x103c,	// (0x00022dfb) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x000316ac) cell_ai_link_pane_g

0x0ceb,	// (0x00022aaa) grid_highlight_cp2

0x0ceb,	// (0x00022aaa) bg_popup_sub_pane_cp1

0x0e73,	// (0x00022c32) popup_ai_links_title_window_t1

0x2ed4,	// (0x00024c93) ai_gene_pane_1_g1_ParamLimits

0x2ed4,	// (0x00024c93) ai_gene_pane_1_g1

0x2ee0,	// (0x00024c9f) ai_gene_pane_1_g2_ParamLimits

0x2ee0,	// (0x00024c9f) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x000316a2) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x000316a2) ai_gene_pane_1_g

0x2eed,	// (0x00024cac) ai_gene_pane_1_t1_ParamLimits

0x2eed,	// (0x00024cac) ai_gene_pane_1_t1

0x2f21,	// (0x00024ce0) grid_ai_soft_ind_pane

0x2ebf,	// (0x00024c7e) ai_gene_pane_2_t1_ParamLimits

0x2ebf,	// (0x00024c7e) ai_gene_pane_2_t1

0xd6a4,	// (0x0002f463) main_pane_empty_t1_ParamLimits

0xd6a4,	// (0x0002f463) main_pane_empty_t1

0xd6c1,	// (0x0002f480) main_pane_empty_t2_ParamLimits

0xd6c1,	// (0x0002f480) main_pane_empty_t2

0xd6d9,	// (0x0002f498) main_pane_empty_t3_ParamLimits

0xd6d9,	// (0x0002f498) main_pane_empty_t3

0xd6ec,	// (0x0002f4ab) main_pane_empty_t4_ParamLimits

0xd6ec,	// (0x0002f4ab) main_pane_empty_t4

0xd6ff,	// (0x0002f4be) main_pane_empty_t5_ParamLimits

0xd6ff,	// (0x0002f4be) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0003130e) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0003130e) main_pane_empty_t

0x13fc,	// (0x000231bb) bg_popup_window_pane_ParamLimits

0x13fc,	// (0x000231bb) bg_popup_window_pane

0x2c6e,	// (0x00024a2d) find_popup_pane_cp2_ParamLimits

0x2c6e,	// (0x00024a2d) find_popup_pane_cp2

0x2c7a,	// (0x00024a39) heading_pane_ParamLimits

0x2c7a,	// (0x00024a39) heading_pane

0x0ceb,	// (0x00022aaa) bg_popup_sub_pane

0xe530,	// (0x000302ef) bg_popup_window_pane_g1_ParamLimits

0xe530,	// (0x000302ef) bg_popup_window_pane_g1

0xe53f,	// (0x000302fe) bg_popup_window_pane_g2_ParamLimits

0xe53f,	// (0x000302fe) bg_popup_window_pane_g2

0xe54b,	// (0x0003030a) bg_popup_window_pane_g3_ParamLimits

0xe54b,	// (0x0003030a) bg_popup_window_pane_g3

0xe557,	// (0x00030316) bg_popup_window_pane_g4_ParamLimits

0xe557,	// (0x00030316) bg_popup_window_pane_g4

0xe566,	// (0x00030325) bg_popup_window_pane_g5_ParamLimits

0xe566,	// (0x00030325) bg_popup_window_pane_g5

0xe576,	// (0x00030335) bg_popup_window_pane_g6_ParamLimits

0xe576,	// (0x00030335) bg_popup_window_pane_g6

0xe582,	// (0x00030341) bg_popup_window_pane_g7_ParamLimits

0xe582,	// (0x00030341) bg_popup_window_pane_g7

0xe591,	// (0x00030350) bg_popup_window_pane_g8_ParamLimits

0xe591,	// (0x00030350) bg_popup_window_pane_g8

0xe5a0,	// (0x0003035f) bg_popup_window_pane_g9_ParamLimits

0xe5a0,	// (0x0003035f) bg_popup_window_pane_g9

0x2c53,	// (0x00024a12) bg_popup_window_pane_g10_ParamLimits

0x2c53,	// (0x00024a12) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x0003166a) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x0003166a) bg_popup_window_pane_g

0x2c0a,	// (0x000249c9) bg_popup_heading_pane_ParamLimits

0x2c0a,	// (0x000249c9) bg_popup_heading_pane

0x7908,	// (0x000296c7) tabs_4_passive_pane_cp_srt_ParamLimits

0x7908,	// (0x000296c7) tabs_4_passive_pane_cp_srt

0x791a,	// (0x000296d9) tabs_4_passive_pane_srt_ParamLimits

0x2c1e,	// (0x000249dd) heading_pane_g2

0x791a,	// (0x000296d9) tabs_4_passive_pane_srt

0x20da,	// (0x00023e99) bg_passive_tab_pane_cp3_srt_ParamLimits

0x20da,	// (0x00023e99) bg_passive_tab_pane_cp3_srt

0x2c26,	// (0x000249e5) heading_pane_t1_ParamLimits

0x2c26,	// (0x000249e5) heading_pane_t1

0x2c3d,	// (0x000249fc) heading_pane_t2_ParamLimits

0x2c3d,	// (0x000249fc) heading_pane_t2

0x0001,

0xf8a6,	// (0x00031665) heading_pane_t_ParamLimits

0xf8a6,	// (0x00031665) heading_pane_t

0x2799,	// (0x00024558) bg_popup_heading_pane_g1

0x282a,	// (0x000245e9) bg_popup_heading_pane_g2

0x2832,	// (0x000245f1) bg_popup_heading_pane_g3

0x283a,	// (0x000245f9) bg_popup_heading_pane_g4

0x2842,	// (0x00024601) bg_popup_heading_pane_g5

0x284a,	// (0x00024609) bg_popup_heading_pane_g6

0x2852,	// (0x00024611) bg_popup_heading_pane_g7

0x285a,	// (0x00024619) bg_popup_heading_pane_g8

0x2862,	// (0x00024621) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x00031621) bg_popup_heading_pane_g

0x2032,	// (0x00023df1) bg_popup_sub_pane_g1

0x203a,	// (0x00023df9) bg_popup_sub_pane_g2

0x2042,	// (0x00023e01) bg_popup_sub_pane_g3

0x204a,	// (0x00023e09) bg_popup_sub_pane_g4

0x2052,	// (0x00023e11) bg_popup_sub_pane_g5

0x205a,	// (0x00023e19) bg_popup_sub_pane_g6

0x2062,	// (0x00023e21) bg_popup_sub_pane_g7

0x206a,	// (0x00023e29) bg_popup_sub_pane_g8

0x2072,	// (0x00023e31) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x000315fb) bg_popup_sub_pane_g

0x0d39,	// (0x00022af8) bg_popup_window_pane_cp5_ParamLimits

0x0d39,	// (0x00022af8) bg_popup_window_pane_cp5

0x0e90,	// (0x00022c4f) popup_note_window_g1_ParamLimits

0x0e90,	// (0x00022c4f) popup_note_window_g1

0x0e9c,	// (0x00022c5b) popup_note_window_t1_ParamLimits

0x0e9c,	// (0x00022c5b) popup_note_window_t1

0x0eb2,	// (0x00022c71) popup_note_window_t2_ParamLimits

0x0eb2,	// (0x00022c71) popup_note_window_t2

0x0ec8,	// (0x00022c87) popup_note_window_t3_ParamLimits

0x0ec8,	// (0x00022c87) popup_note_window_t3

0x0ede,	// (0x00022c9d) popup_note_window_t4_ParamLimits

0x0ede,	// (0x00022c9d) popup_note_window_t4

0x0f06,	// (0x00022cc5) popup_note_window_t5_ParamLimits

0x0f06,	// (0x00022cc5) popup_note_window_t5

0x0004,

0xf55a,	// (0x00031319) popup_note_window_t_ParamLimits

0xf55a,	// (0x00031319) popup_note_window_t

0x0f50,	// (0x00022d0f) bg_popup_window_pane_cp6_ParamLimits

0x0f50,	// (0x00022d0f) bg_popup_window_pane_cp6

0x2715,	// (0x000244d4) popup_note_image_window_g1_ParamLimits

0x2715,	// (0x000244d4) popup_note_image_window_g1

0x2721,	// (0x000244e0) popup_note_image_window_g2_ParamLimits

0x2721,	// (0x000244e0) popup_note_image_window_g2

0x0001,

0xf830,	// (0x000315ef) popup_note_image_window_g_ParamLimits

0xf830,	// (0x000315ef) popup_note_image_window_g

0x273a,	// (0x000244f9) popup_note_image_window_t1_ParamLimits

0x273a,	// (0x000244f9) popup_note_image_window_t1

0x2753,	// (0x00024512) popup_note_image_window_t2_ParamLimits

0x2753,	// (0x00024512) popup_note_image_window_t2

0x276c,	// (0x0002452b) popup_note_image_window_t3_ParamLimits

0x276c,	// (0x0002452b) popup_note_image_window_t3

0x0002,

0xf835,	// (0x000315f4) popup_note_image_window_t_ParamLimits

0xf835,	// (0x000315f4) popup_note_image_window_t

0x2600,	// (0x000243bf) bg_popup_window_pane_cp7_ParamLimits

0x2600,	// (0x000243bf) bg_popup_window_pane_cp7

0x2630,	// (0x000243ef) popup_note_wait_window_g1_ParamLimits

0x2630,	// (0x000243ef) popup_note_wait_window_g1

0x263c,	// (0x000243fb) popup_note_wait_window_g2_ParamLimits

0x263c,	// (0x000243fb) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x000315dd) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x000315dd) popup_note_wait_window_g

0x2654,	// (0x00024413) popup_note_wait_window_t1_ParamLimits

0x2654,	// (0x00024413) popup_note_wait_window_t1

0x267b,	// (0x0002443a) popup_note_wait_window_t2_ParamLimits

0x267b,	// (0x0002443a) popup_note_wait_window_t2

0x2698,	// (0x00024457) popup_note_wait_window_t3_ParamLimits

0x2698,	// (0x00024457) popup_note_wait_window_t3

0x26ab,	// (0x0002446a) popup_note_wait_window_t4_ParamLimits

0x26ab,	// (0x0002446a) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x000315e4) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x000315e4) popup_note_wait_window_t

0x26d0,	// (0x0002448f) wait_bar_pane_ParamLimits

0x26d0,	// (0x0002448f) wait_bar_pane

0x0ceb,	// (0x00022aaa) wait_anim_pane

0x0ceb,	// (0x00022aaa) wait_border_pane

0x0c69,	// (0x00022a28) wait_anim_pane_g1

0x0c69,	// (0x00022a28) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x0003149d) wait_anim_pane_g

0x25b0,	// (0x0002436f) wait_border_pane_g1

0x25b9,	// (0x00024378) wait_border_pane_g2

0x25c2,	// (0x00024381) wait_border_pane_g3

0x0002,

0xf817,	// (0x000315d6) wait_border_pane_g

0x2420,	// (0x000241df) bg_popup_window_pane_cp16_ParamLimits

0x2420,	// (0x000241df) bg_popup_window_pane_cp16

0x2520,	// (0x000242df) indicator_popup_pane_cp4_ParamLimits

0x2520,	// (0x000242df) indicator_popup_pane_cp4

0x2534,	// (0x000242f3) popup_query_data_window_t1_ParamLimits

0x2534,	// (0x000242f3) popup_query_data_window_t1

0x2546,	// (0x00024305) popup_query_data_window_t2_ParamLimits

0x2546,	// (0x00024305) popup_query_data_window_t2

0x255f,	// (0x0002431e) popup_query_data_window_t3_ParamLimits

0x255f,	// (0x0002431e) popup_query_data_window_t3

0x0002,

0xf810,	// (0x000315cf) popup_query_data_window_t_ParamLimits

0xf810,	// (0x000315cf) popup_query_data_window_t

0x2579,	// (0x00024338) query_popup_data_pane_ParamLimits

0x2579,	// (0x00024338) query_popup_data_pane

0x258d,	// (0x0002434c) query_popup_data_pane_cp1_ParamLimits

0x258d,	// (0x0002434c) query_popup_data_pane_cp1

0x2420,	// (0x000241df) bg_popup_window_pane_cp10_ParamLimits

0x2420,	// (0x000241df) bg_popup_window_pane_cp10

0x2452,	// (0x00024211) indicator_popup_pane_ParamLimits

0x2452,	// (0x00024211) indicator_popup_pane

0x2474,	// (0x00024233) popup_query_code_window_t1_ParamLimits

0x2474,	// (0x00024233) popup_query_code_window_t1

0x248e,	// (0x0002424d) popup_query_code_window_t2_ParamLimits

0x248e,	// (0x0002424d) popup_query_code_window_t2

0x24d7,	// (0x00024296) popup_query_code_window_t3_ParamLimits

0x24d7,	// (0x00024296) popup_query_code_window_t3

0x0002,

0xf809,	// (0x000315c8) popup_query_code_window_t_ParamLimits

0xf809,	// (0x000315c8) popup_query_code_window_t

0x2506,	// (0x000242c5) query_popup_pane_ParamLimits

0x2506,	// (0x000242c5) query_popup_pane

0x0f50,	// (0x00022d0f) bg_popup_window_pane_cp15_ParamLimits

0x0f50,	// (0x00022d0f) bg_popup_window_pane_cp15

0x0f6e,	// (0x00022d2d) indicator_popup_pane_cp1_ParamLimits

0x0f6e,	// (0x00022d2d) indicator_popup_pane_cp1

0x0f81,	// (0x00022d40) indicator_popup_pane_cp2_ParamLimits

0x0f81,	// (0x00022d40) indicator_popup_pane_cp2

0x0f94,	// (0x00022d53) popup_query_data_code_window_g1_ParamLimits

0x0f94,	// (0x00022d53) popup_query_data_code_window_g1

0x0fa7,	// (0x00022d66) popup_query_data_code_window_t1_ParamLimits

0x0fa7,	// (0x00022d66) popup_query_data_code_window_t1

0x0fb9,	// (0x00022d78) popup_query_data_code_window_t2_ParamLimits

0x0fb9,	// (0x00022d78) popup_query_data_code_window_t2

0x0fcb,	// (0x00022d8a) popup_query_data_code_window_t3_ParamLimits

0x0fcb,	// (0x00022d8a) popup_query_data_code_window_t3

0x0fe1,	// (0x00022da0) popup_query_data_code_window_t4_ParamLimits

0x0fe1,	// (0x00022da0) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00031324) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00031324) popup_query_data_code_window_t

0x71ff,	// (0x00028fbe) list_single_midp_graphic_pane_g3

0x0ff9,	// (0x00022db8) query_popup_data_pane_cp2_ParamLimits

0x100c,	// (0x00022dcb) query_popup_pane_cp2_ParamLimits

0x100c,	// (0x00022dcb) query_popup_pane_cp2

0x0ceb,	// (0x00022aaa) bg_popup_window_pane_cp11

0x2404,	// (0x000241c3) heading_pane_cp5

0x240c,	// (0x000241cb) listscroll_popup_info_pane

0x0ceb,	// (0x00022aaa) input_focus_pane_cp3

0x101f,	// (0x00022dde) query_popup_pane_t1

0x102d,	// (0x00022dec) list_popup_info_pane_ParamLimits

0x102d,	// (0x00022dec) list_popup_info_pane

0x103c,	// (0x00022dfb) listscroll_popup_info_pane_g1

0x1044,	// (0x00022e03) scroll_pane_cp7

0x104c,	// (0x00022e0b) popup_info_list_pane_t1_ParamLimits

0x104c,	// (0x00022e0b) popup_info_list_pane_t1

0x1066,	// (0x00022e25) popup_info_list_pane_t2_ParamLimits

0x1066,	// (0x00022e25) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0003132d) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0003132d) popup_info_list_pane_t

0x0ceb,	// (0x00022aaa) bg_popup_window_pane_cp12

0x32e1,	// (0x000250a0) find_popup_pane

0x0d4f,	// (0x00022b0e) bg_popup_window_pane_cp3

0x1080,	// (0x00022e3f) heading_pane_cp3

0x108f,	// (0x00022e4e) listscroll_popup_graphic_pane

0x0ceb,	// (0x00022aaa) bg_popup_window_pane_cp4

0xd762,	// (0x0002f521) heading_pane_cp4

0x109e,	// (0x00022e5d) listscroll_popup_colour_pane

0x10a6,	// (0x00022e65) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x10a6,	// (0x00022e65) cell_large_graphic_colour_none_popup_pane

0xd76a,	// (0x0002f529) grid_large_graphic_colour_popup_pane_ParamLimits

0xd76a,	// (0x0002f529) grid_large_graphic_colour_popup_pane

0xd786,	// (0x0002f545) listscroll_popup_colour_pane_g1_ParamLimits

0xd786,	// (0x0002f545) listscroll_popup_colour_pane_g1

0xd79d,	// (0x0002f55c) listscroll_popup_colour_pane_g2_ParamLimits

0xd79d,	// (0x0002f55c) listscroll_popup_colour_pane_g2

0x10b6,	// (0x00022e75) listscroll_popup_colour_pane_g3_ParamLimits

0x10b6,	// (0x00022e75) listscroll_popup_colour_pane_g3

0xd7b1,	// (0x0002f570) listscroll_popup_colour_pane_g4_ParamLimits

0xd7b1,	// (0x0002f570) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00031332) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00031332) listscroll_popup_colour_pane_g

0x10c6,	// (0x00022e85) scroll_pane_cp6_ParamLimits

0x10c6,	// (0x00022e85) scroll_pane_cp6

0xd7c0,	// (0x0002f57f) cell_large_graphic_colour_popup_pane_ParamLimits

0xd7c0,	// (0x0002f57f) cell_large_graphic_colour_popup_pane

0x10d8,	// (0x00022e97) cell_large_graphic_colour_none_popup_pane_t1

0x0ceb,	// (0x00022aaa) grid_highlight_pane_cp5

0x10e7,	// (0x00022ea6) cell_large_graphic_colour_popup_pane_g1

0x10ef,	// (0x00022eae) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0003133b) cell_large_graphic_colour_popup_pane_g

0x10f7,	// (0x00022eb6) cell_large_graphic_colour_popup_pane_g2_copy1

0x1100,	// (0x00022ebf) grid_highlight_pane_cp4

0x1108,	// (0x00022ec7) bg_popup_window_pane_cp8_ParamLimits

0x1108,	// (0x00022ec7) bg_popup_window_pane_cp8

0x1123,	// (0x00022ee2) popup_snote_single_text_window_g1_ParamLimits

0x1123,	// (0x00022ee2) popup_snote_single_text_window_g1

0x1135,	// (0x00022ef4) popup_snote_single_text_window_t1_ParamLimits

0x1135,	// (0x00022ef4) popup_snote_single_text_window_t1

0x1148,	// (0x00022f07) popup_snote_single_text_window_t2_ParamLimits

0x1148,	// (0x00022f07) popup_snote_single_text_window_t2

0x115b,	// (0x00022f1a) popup_snote_single_text_window_t3_ParamLimits

0x115b,	// (0x00022f1a) popup_snote_single_text_window_t3

0x1194,	// (0x00022f53) popup_snote_single_text_window_t4_ParamLimits

0x1194,	// (0x00022f53) popup_snote_single_text_window_t4

0x11c8,	// (0x00022f87) popup_snote_single_text_window_t5_ParamLimits

0x11c8,	// (0x00022f87) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00031340) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00031340) popup_snote_single_text_window_t

0x11f7,	// (0x00022fb6) bg_popup_window_pane_cp9_ParamLimits

0x11f7,	// (0x00022fb6) bg_popup_window_pane_cp9

0x1123,	// (0x00022ee2) popup_snote_single_graphic_window_g1_ParamLimits

0x1123,	// (0x00022ee2) popup_snote_single_graphic_window_g1

0x1205,	// (0x00022fc4) popup_snote_single_graphic_window_g2_ParamLimits

0x1205,	// (0x00022fc4) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0003134b) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0003134b) popup_snote_single_graphic_window_g

0x1211,	// (0x00022fd0) popup_snote_single_graphic_window_t1_ParamLimits

0x1211,	// (0x00022fd0) popup_snote_single_graphic_window_t1

0x1224,	// (0x00022fe3) popup_snote_single_graphic_window_t2_ParamLimits

0x1224,	// (0x00022fe3) popup_snote_single_graphic_window_t2

0x115b,	// (0x00022f1a) popup_snote_single_graphic_window_t3_ParamLimits

0x115b,	// (0x00022f1a) popup_snote_single_graphic_window_t3

0x1194,	// (0x00022f53) popup_snote_single_graphic_window_t4_ParamLimits

0x1194,	// (0x00022f53) popup_snote_single_graphic_window_t4

0x11c8,	// (0x00022f87) popup_snote_single_graphic_window_t5_ParamLimits

0x11c8,	// (0x00022f87) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00031350) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00031350) popup_snote_single_graphic_window_t

0xe82e,	// (0x000305ed) grid_graphic_popup_pane_ParamLimits

0xe82e,	// (0x000305ed) grid_graphic_popup_pane

0xe851,	// (0x00030610) listscroll_popup_graphic_pane_g1_ParamLimits

0xe851,	// (0x00030610) listscroll_popup_graphic_pane_g1

0xe865,	// (0x00030624) listscroll_popup_graphic_pane_g2_ParamLimits

0xe865,	// (0x00030624) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x00031745) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x00031745) listscroll_popup_graphic_pane_g

0x31e1,	// (0x00024fa0) scroll_pane_cp5

0xe7ea,	// (0x000305a9) cell_graphic_popup_pane_ParamLimits

0xe7ea,	// (0x000305a9) cell_graphic_popup_pane

0x328a,	// (0x00025049) cell_graphic_popup_pane_g1

0x3292,	// (0x00025051) cell_graphic_popup_pane_g2

0x10f7,	// (0x00022eb6) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x0003173e) cell_graphic_popup_pane_g

0x329b,	// (0x0002505a) cell_graphic_popup_pane_t2

0x1100,	// (0x00022ebf) grid_highlight_pane_cp3

0x1249,	// (0x00023008) list_gen_pane_ParamLimits

0x1249,	// (0x00023008) list_gen_pane

0x1272,	// (0x00023031) scroll_pane

0xe7bd,	// (0x0003057c) bg_list_pane_g1_ParamLimits

0xe7bd,	// (0x0003057c) bg_list_pane_g1

0x3241,	// (0x00025000) bg_list_pane_g2_ParamLimits

0x3241,	// (0x00025000) bg_list_pane_g2

0x3254,	// (0x00025013) bg_list_pane_g3_ParamLimits

0x3254,	// (0x00025013) bg_list_pane_g3

0x3266,	// (0x00025025) bg_list_pane_g4_ParamLimits

0x3266,	// (0x00025025) bg_list_pane_g4

0xe7d8,	// (0x00030597) bg_list_pane_g5_ParamLimits

0xe7d8,	// (0x00030597) bg_list_pane_g5

0x0004,

0xf974,	// (0x00031733) bg_list_pane_g_ParamLimits

0xf974,	// (0x00031733) bg_list_pane_g

0xe796,	// (0x00030555) list_double2_graphic_large_graphic_pane_ParamLimits

0xe796,	// (0x00030555) list_double2_graphic_large_graphic_pane

0xe796,	// (0x00030555) list_double2_graphic_pane_ParamLimits

0xe796,	// (0x00030555) list_double2_graphic_pane

0xe796,	// (0x00030555) list_double2_large_graphic_pane_ParamLimits

0xe796,	// (0x00030555) list_double2_large_graphic_pane

0xe796,	// (0x00030555) list_double2_pane_ParamLimits

0xe796,	// (0x00030555) list_double2_pane

0xe796,	// (0x00030555) list_double_graphic_heading_pane_ParamLimits

0xe796,	// (0x00030555) list_double_graphic_heading_pane

0xe796,	// (0x00030555) list_double_graphic_pane_ParamLimits

0xe796,	// (0x00030555) list_double_graphic_pane

0xe796,	// (0x00030555) list_double_heading_pane_ParamLimits

0xe796,	// (0x00030555) list_double_heading_pane

0xe796,	// (0x00030555) list_double_large_graphic_pane_ParamLimits

0xe796,	// (0x00030555) list_double_large_graphic_pane

0xe796,	// (0x00030555) list_double_number_pane_ParamLimits

0xe796,	// (0x00030555) list_double_number_pane

0xe796,	// (0x00030555) list_double_pane_ParamLimits

0xe796,	// (0x00030555) list_double_pane

0xe796,	// (0x00030555) list_double_time_pane_ParamLimits

0xe796,	// (0x00030555) list_double_time_pane

0xe796,	// (0x00030555) list_setting_number_pane_ParamLimits

0xe796,	// (0x00030555) list_setting_number_pane

0xe796,	// (0x00030555) list_setting_pane_ParamLimits

0xe796,	// (0x00030555) list_setting_pane

0xe7a8,	// (0x00030567) list_single_2graphic_pane_ParamLimits

0xe7a8,	// (0x00030567) list_single_2graphic_pane

0xe7a8,	// (0x00030567) list_single_graphic_heading_pane_ParamLimits

0xe7a8,	// (0x00030567) list_single_graphic_heading_pane

0xe7a8,	// (0x00030567) list_single_graphic_pane_ParamLimits

0xe7a8,	// (0x00030567) list_single_graphic_pane

0xe7a8,	// (0x00030567) list_single_heading_pane_ParamLimits

0xe7a8,	// (0x00030567) list_single_heading_pane

0xddd6,	// (0x0002fb95) list_single_large_graphic_pane_ParamLimits

0xddd6,	// (0x0002fb95) list_single_large_graphic_pane

0xe7a8,	// (0x00030567) list_single_number_heading_pane_ParamLimits

0xe7a8,	// (0x00030567) list_single_number_heading_pane

0xe7a8,	// (0x00030567) list_single_number_pane_ParamLimits

0xe7a8,	// (0x00030567) list_single_number_pane

0xe7a8,	// (0x00030567) list_single_pane_ParamLimits

0xe7a8,	// (0x00030567) list_single_pane

0x0ceb,	// (0x00022aaa) list_highlight_pane_cp1

0x9734,	// (0x0002b4f3) list_single_pane_g1_ParamLimits

0x9734,	// (0x0002b4f3) list_single_pane_g1

0x9740,	// (0x0002b4ff) list_single_pane_g2_ParamLimits

0x9740,	// (0x0002b4ff) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00031362) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00031362) list_single_pane_g

0x9f97,	// (0x0002bd56) list_single_pane_t1_ParamLimits

0x9f97,	// (0x0002bd56) list_single_pane_t1

0x9734,	// (0x0002b4f3) list_single_number_pane_g1_ParamLimits

0x9734,	// (0x0002b4f3) list_single_number_pane_g1

0x9740,	// (0x0002b4ff) list_single_number_pane_g2_ParamLimits

0x9740,	// (0x0002b4ff) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00031362) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00031362) list_single_number_pane_g

0x974c,	// (0x0002b50b) list_single_number_pane_t1_ParamLimits

0x974c,	// (0x0002b50b) list_single_number_pane_t1

0x9f58,	// (0x0002bd17) list_single_number_pane_t2_ParamLimits

0x9f58,	// (0x0002bd17) list_single_number_pane_t2

0x0001,

0xf935,	// (0x000316f4) list_single_number_pane_t_ParamLimits

0xf935,	// (0x000316f4) list_single_number_pane_t

0x9e93,	// (0x0002bc52) list_single_graphic_pane_g1_ParamLimits

0x9e93,	// (0x0002bc52) list_single_graphic_pane_g1

0x9734,	// (0x0002b4f3) list_single_graphic_pane_g2_ParamLimits

0x9734,	// (0x0002b4f3) list_single_graphic_pane_g2

0x9740,	// (0x0002b4ff) list_single_graphic_pane_g3_ParamLimits

0x9740,	// (0x0002b4ff) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0003135b) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0003135b) list_single_graphic_pane_g

0x974c,	// (0x0002b50b) list_single_graphic_pane_t1_ParamLimits

0x974c,	// (0x0002b50b) list_single_graphic_pane_t1

0x9734,	// (0x0002b4f3) list_single_heading_pane_g1_ParamLimits

0x9734,	// (0x0002b4f3) list_single_heading_pane_g1

0x9740,	// (0x0002b4ff) list_single_heading_pane_g2_ParamLimits

0x9740,	// (0x0002b4ff) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00031362) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00031362) list_single_heading_pane_g

0x9762,	// (0x0002b521) list_single_heading_pane_t1_ParamLimits

0x9762,	// (0x0002b521) list_single_heading_pane_t1

0x9778,	// (0x0002b537) list_single_heading_pane_t2_ParamLimits

0x9778,	// (0x0002b537) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00031367) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00031367) list_single_heading_pane_t

0x9734,	// (0x0002b4f3) list_single_number_heading_pane_g1_ParamLimits

0x9734,	// (0x0002b4f3) list_single_number_heading_pane_g1

0x9740,	// (0x0002b4ff) list_single_number_heading_pane_g2_ParamLimits

0x9740,	// (0x0002b4ff) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00031362) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00031362) list_single_number_heading_pane_g

0x9762,	// (0x0002b521) list_single_number_heading_pane_t1_ParamLimits

0x9762,	// (0x0002b521) list_single_number_heading_pane_t1

0x978a,	// (0x0002b549) list_single_number_heading_pane_t2_ParamLimits

0x978a,	// (0x0002b549) list_single_number_heading_pane_t2

0x979c,	// (0x0002b55b) list_single_number_heading_pane_t3_ParamLimits

0x979c,	// (0x0002b55b) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0003136c) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0003136c) list_single_number_heading_pane_t

0x9e93,	// (0x0002bc52) list_single_graphic_heading_pane_g1_ParamLimits

0x9e93,	// (0x0002bc52) list_single_graphic_heading_pane_g1

0xd7e7,	// (0x0002f5a6) list_single_graphic_heading_pane_g4_ParamLimits

0xd7e7,	// (0x0002f5a6) list_single_graphic_heading_pane_g4

0x9740,	// (0x0002b4ff) list_single_graphic_heading_pane_g5_ParamLimits

0x9740,	// (0x0002b4ff) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00031373) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00031373) list_single_graphic_heading_pane_g

0x9762,	// (0x0002b521) list_single_graphic_heading_pane_t1_ParamLimits

0x9762,	// (0x0002b521) list_single_graphic_heading_pane_t1

0x97bd,	// (0x0002b57c) list_single_graphic_heading_pane_t2_ParamLimits

0x97bd,	// (0x0002b57c) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0003137a) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0003137a) list_single_graphic_heading_pane_t

0xa0ae,	// (0x0002be6d) list_single_large_graphic_pane_g1_ParamLimits

0xa0ae,	// (0x0002be6d) list_single_large_graphic_pane_g1

0xa0ba,	// (0x0002be79) list_single_large_graphic_pane_g2_ParamLimits

0xa0ba,	// (0x0002be79) list_single_large_graphic_pane_g2

0xa0c6,	// (0x0002be85) list_single_large_graphic_pane_g3_ParamLimits

0xa0c6,	// (0x0002be85) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0003137f) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0003137f) list_single_large_graphic_pane_g

0x25b9,	// (0x00024378) wait_border_pane_g2_copy1

0xd7f8,	// (0x0002f5b7) list_single_large_graphic_pane_g4_cp2

0xa0d2,	// (0x0002be91) list_single_large_graphic_pane_t1_ParamLimits

0xa0d2,	// (0x0002be91) list_single_large_graphic_pane_t1

0x9811,	// (0x0002b5d0) list_double_pane_g1_ParamLimits

0x9811,	// (0x0002b5d0) list_double_pane_g1

0x981d,	// (0x0002b5dc) list_double_pane_g2_ParamLimits

0x981d,	// (0x0002b5dc) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00031386) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00031386) list_double_pane_g

0x9829,	// (0x0002b5e8) list_double_pane_t1_ParamLimits

0x9829,	// (0x0002b5e8) list_double_pane_t1

0x983f,	// (0x0002b5fe) list_double_pane_t2_ParamLimits

0x983f,	// (0x0002b5fe) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0003138b) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0003138b) list_double_pane_t

0xd800,	// (0x0002f5bf) list_double2_pane_g1_ParamLimits

0xd800,	// (0x0002f5bf) list_double2_pane_g1

0x99f5,	// (0x0002b7b4) list_double2_pane_g2_ParamLimits

0x99f5,	// (0x0002b7b4) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00031390) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00031390) list_double2_pane_g

0xd811,	// (0x0002f5d0) list_double2_pane_t1_ParamLimits

0xd811,	// (0x0002f5d0) list_double2_pane_t1

0x9a5a,	// (0x0002b819) list_double2_pane_t2_ParamLimits

0x9a5a,	// (0x0002b819) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00031395) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00031395) list_double2_pane_t

0x9811,	// (0x0002b5d0) list_double_number_pane_g1_ParamLimits

0x9811,	// (0x0002b5d0) list_double_number_pane_g1

0x981d,	// (0x0002b5dc) list_double_number_pane_g2_ParamLimits

0x981d,	// (0x0002b5dc) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00031386) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00031386) list_double_number_pane_g

0x9894,	// (0x0002b653) list_double_number_pane_t1_ParamLimits

0x9894,	// (0x0002b653) list_double_number_pane_t1

0x98a6,	// (0x0002b665) list_double_number_pane_t2_ParamLimits

0x98a6,	// (0x0002b665) list_double_number_pane_t2

0x98bc,	// (0x0002b67b) list_double_number_pane_t3_ParamLimits

0x98bc,	// (0x0002b67b) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0003139a) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0003139a) list_double_number_pane_t

0x9728,	// (0x0002b4e7) list_double_graphic_pane_g1_ParamLimits

0x9728,	// (0x0002b4e7) list_double_graphic_pane_g1

0x98ce,	// (0x0002b68d) list_double_graphic_pane_g2_ParamLimits

0x98ce,	// (0x0002b68d) list_double_graphic_pane_g2

0x98dd,	// (0x0002b69c) list_double_graphic_pane_g3_ParamLimits

0x98dd,	// (0x0002b69c) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x000313a1) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x000313a1) list_double_graphic_pane_g

0x98f5,	// (0x0002b6b4) list_double_graphic_pane_t1_ParamLimits

0x98f5,	// (0x0002b6b4) list_double_graphic_pane_t1

0x990b,	// (0x0002b6ca) list_double_graphic_pane_t2_ParamLimits

0x990b,	// (0x0002b6ca) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x000313aa) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x000313aa) list_double_graphic_pane_t

0x991d,	// (0x0002b6dc) list_double2_graphic_pane_g1_ParamLimits

0x991d,	// (0x0002b6dc) list_double2_graphic_pane_g1

0x9811,	// (0x0002b5d0) list_double2_graphic_pane_g2_ParamLimits

0x9811,	// (0x0002b5d0) list_double2_graphic_pane_g2

0x981d,	// (0x0002b5dc) list_double2_graphic_pane_g3_ParamLimits

0x981d,	// (0x0002b5dc) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x000313af) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x000313af) list_double2_graphic_pane_g

0x9929,	// (0x0002b6e8) list_double2_graphic_pane_t1_ParamLimits

0x9929,	// (0x0002b6e8) list_double2_graphic_pane_t1

0x993f,	// (0x0002b6fe) list_double2_graphic_pane_t2_ParamLimits

0x993f,	// (0x0002b6fe) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x000313b6) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x000313b6) list_double2_graphic_pane_t

0xd827,	// (0x0002f5e6) list_double_large_graphic_pane_g1_ParamLimits

0xd827,	// (0x0002f5e6) list_double_large_graphic_pane_g1

0xd850,	// (0x0002f60f) list_double_large_graphic_pane_g2_ParamLimits

0xd850,	// (0x0002f60f) list_double_large_graphic_pane_g2

0x981d,	// (0x0002b5dc) list_double_large_graphic_pane_g3_ParamLimits

0x981d,	// (0x0002b5dc) list_double_large_graphic_pane_g3

0xd861,	// (0x0002f620) list_double_large_graphic_pane_g4_ParamLimits

0xd861,	// (0x0002f620) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x000313bb) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x000313bb) list_double_large_graphic_pane_g

0x99af,	// (0x0002b76e) list_double_large_graphic_pane_t1_ParamLimits

0x99af,	// (0x0002b76e) list_double_large_graphic_pane_t1

0x99c8,	// (0x0002b787) list_double_large_graphic_pane_t2_ParamLimits

0x99c8,	// (0x0002b787) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x000313c6) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x000313c6) list_double_large_graphic_pane_t

0x99da,	// (0x0002b799) list_double2_large_graphic_pane_g1_ParamLimits

0x99da,	// (0x0002b799) list_double2_large_graphic_pane_g1

0xd800,	// (0x0002f5bf) list_double2_large_graphic_pane_g2_ParamLimits

0xd800,	// (0x0002f5bf) list_double2_large_graphic_pane_g2

0x99f5,	// (0x0002b7b4) list_double2_large_graphic_pane_g3_ParamLimits

0x99f5,	// (0x0002b7b4) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x000313cb) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x000313cb) list_double2_large_graphic_pane_g

0x9a01,	// (0x0002b7c0) list_double2_large_graphic_pane_t1_ParamLimits

0x9a01,	// (0x0002b7c0) list_double2_large_graphic_pane_t1

0x9a17,	// (0x0002b7d6) list_double2_large_graphic_pane_t2_ParamLimits

0x9a17,	// (0x0002b7d6) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x000313d2) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x000313d2) list_double2_large_graphic_pane_t

0xd872,	// (0x0002f631) list_double_heading_pane_g1_ParamLimits

0xd872,	// (0x0002f631) list_double_heading_pane_g1

0x9a38,	// (0x0002b7f7) list_double_heading_pane_g2_ParamLimits

0x9a38,	// (0x0002b7f7) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x000313d7) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x000313d7) list_double_heading_pane_g

0x9a44,	// (0x0002b803) list_double_heading_pane_t1_ParamLimits

0x9a44,	// (0x0002b803) list_double_heading_pane_t1

0x9a5a,	// (0x0002b819) list_double_heading_pane_t2_ParamLimits

0x9a5a,	// (0x0002b819) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x000313dc) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x000313dc) list_double_heading_pane_t

0x9a6c,	// (0x0002b82b) list_double_graphic_heading_pane_g1_ParamLimits

0x9a6c,	// (0x0002b82b) list_double_graphic_heading_pane_g1

0xd872,	// (0x0002f631) list_double_graphic_heading_pane_g2_ParamLimits

0xd872,	// (0x0002f631) list_double_graphic_heading_pane_g2

0x9a38,	// (0x0002b7f7) list_double_graphic_heading_pane_g3_ParamLimits

0x9a38,	// (0x0002b7f7) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x000313e1) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x000313e1) list_double_graphic_heading_pane_g

0x9a78,	// (0x0002b837) list_double_graphic_heading_pane_t1_ParamLimits

0x9a78,	// (0x0002b837) list_double_graphic_heading_pane_t1

0x993f,	// (0x0002b6fe) list_double_graphic_heading_pane_t2_ParamLimits

0x993f,	// (0x0002b6fe) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x000313e8) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x000313e8) list_double_graphic_heading_pane_t

0xd850,	// (0x0002f60f) list_double_time_pane_g1_ParamLimits

0xd850,	// (0x0002f60f) list_double_time_pane_g1

0x981d,	// (0x0002b5dc) list_double_time_pane_g2_ParamLimits

0x981d,	// (0x0002b5dc) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x000313ed) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x000313ed) list_double_time_pane_g

0x9a8e,	// (0x0002b84d) list_double_time_pane_t1_ParamLimits

0x9a8e,	// (0x0002b84d) list_double_time_pane_t1

0x9aa4,	// (0x0002b863) list_double_time_pane_t2_ParamLimits

0x9aa4,	// (0x0002b863) list_double_time_pane_t2

0x9ab6,	// (0x0002b875) list_double_time_pane_t3_ParamLimits

0x9ab6,	// (0x0002b875) list_double_time_pane_t3

0x9ac8,	// (0x0002b887) list_double_time_pane_t4_ParamLimits

0x9ac8,	// (0x0002b887) list_double_time_pane_t4

0x0003,

0xf633,	// (0x000313f2) list_double_time_pane_t_ParamLimits

0xf633,	// (0x000313f2) list_double_time_pane_t

0x9ada,	// (0x0002b899) list_setting_pane_g1_ParamLimits

0x9ada,	// (0x0002b899) list_setting_pane_g1

0x99f5,	// (0x0002b7b4) list_setting_pane_g2_ParamLimits

0x99f5,	// (0x0002b7b4) list_setting_pane_g2

0x0001,

0xf63c,	// (0x000313fb) list_setting_pane_g_ParamLimits

0xf63c,	// (0x000313fb) list_setting_pane_g

0x9ae6,	// (0x0002b8a5) list_setting_pane_t1_ParamLimits

0x9ae6,	// (0x0002b8a5) list_setting_pane_t1

0x9b00,	// (0x0002b8bf) list_setting_pane_t2_ParamLimits

0x9b00,	// (0x0002b8bf) list_setting_pane_t2

0x0002,

0xf641,	// (0x00031400) list_setting_pane_t_ParamLimits

0xf641,	// (0x00031400) list_setting_pane_t

0x9b3d,	// (0x0002b8fc) set_value_pane_cp_ParamLimits

0x9b3d,	// (0x0002b8fc) set_value_pane_cp

0x9b49,	// (0x0002b908) list_setting_number_pane_g1_ParamLimits

0x9b49,	// (0x0002b908) list_setting_number_pane_g1

0x9b55,	// (0x0002b914) list_setting_number_pane_g2_ParamLimits

0x9b55,	// (0x0002b914) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x00031407) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x00031407) list_setting_number_pane_g

0xd883,	// (0x0002f642) list_setting_number_pane_t1_ParamLimits

0xd883,	// (0x0002f642) list_setting_number_pane_t1

0x9b78,	// (0x0002b937) list_setting_number_pane_t2_ParamLimits

0x9b78,	// (0x0002b937) list_setting_number_pane_t2

0xd89c,	// (0x0002f65b) list_setting_number_pane_t3_ParamLimits

0xd89c,	// (0x0002f65b) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x0003140c) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x0003140c) list_setting_number_pane_t

0x9b3d,	// (0x0002b8fc) set_value_pane_ParamLimits

0x9b3d,	// (0x0002b8fc) set_value_pane

0x12a7,	// (0x00023066) bg_set_opt_pane_ParamLimits

0x12a7,	// (0x00023066) bg_set_opt_pane

0x9bd3,	// (0x0002b992) set_value_pane_t1

0x12c8,	// (0x00023087) slider_set_pane_cp3

0x12d1,	// (0x00023090) volume_small_pane_cp

0x12da,	// (0x00023099) list_form_gen_pane

0x1296,	// (0x00023055) scroll_pane_cp8

0xd8b4,	// (0x0002f673) form_field_data_pane_ParamLimits

0xd8b4,	// (0x0002f673) form_field_data_pane

0xd8cb,	// (0x0002f68a) form_field_data_wide_pane_ParamLimits

0xd8cb,	// (0x0002f68a) form_field_data_wide_pane

0xd8eb,	// (0x0002f6aa) form_field_popup_pane_ParamLimits

0xd8eb,	// (0x0002f6aa) form_field_popup_pane

0xd903,	// (0x0002f6c2) form_field_popup_wide_pane_ParamLimits

0xd903,	// (0x0002f6c2) form_field_popup_wide_pane

0x9c57,	// (0x0002ba16) form_field_slider_pane_ParamLimits

0x9c57,	// (0x0002ba16) form_field_slider_pane

0x9c6a,	// (0x0002ba29) form_field_slider_wide_pane_ParamLimits

0x9c6a,	// (0x0002ba29) form_field_slider_wide_pane

0x12e3,	// (0x000230a2) data_form_pane

0xd924,	// (0x0002f6e3) form_field_data_pane_t1

0x12ef,	// (0x000230ae) input_focus_pane

0x12fd,	// (0x000230bc) data_form_wide_pane

0x9c91,	// (0x0002ba50) form_field_data_wide_pane_t1

0x1115,	// (0x00022ed4) input_focus_pane_cp6

0xd93c,	// (0x0002f6fb) form_field_popup_pane_t1

0x12ef,	// (0x000230ae) input_focus_pane_cp7

0x12e3,	// (0x000230a2) list_form_pane

0x9cd3,	// (0x0002ba92) form_field_popup_wide_pane_t1

0x12ef,	// (0x000230ae) input_focus_pane_cp8

0x1329,	// (0x000230e8) list_form_wide_pane

0xd95c,	// (0x0002f71b) form_field_slider_pane_t1_ParamLimits

0xd95c,	// (0x0002f71b) form_field_slider_pane_t1

0xd972,	// (0x0002f731) form_field_slider_pane_t2_ParamLimits

0xd972,	// (0x0002f731) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x0003141c) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x0003141c) form_field_slider_pane_t

0x0d39,	// (0x00022af8) input_focus_pane_cp9_ParamLimits

0x0d39,	// (0x00022af8) input_focus_pane_cp9

0xd987,	// (0x0002f746) slider_cont_pane_ParamLimits

0xd987,	// (0x0002f746) slider_cont_pane

0x1338,	// (0x000230f7) form_field_slider_wide_pane_t1_ParamLimits

0x1338,	// (0x000230f7) form_field_slider_wide_pane_t1

0x9d28,	// (0x0002bae7) form_field_slider_wide_pane_t2_ParamLimits

0x9d28,	// (0x0002bae7) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x00031421) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x00031421) form_field_slider_wide_pane_t

0x0d39,	// (0x00022af8) input_focus_pane_cp10_ParamLimits

0x0d39,	// (0x00022af8) input_focus_pane_cp10

0xd99b,	// (0x0002f75a) slider_cont_pane_cp1_ParamLimits

0xd99b,	// (0x0002f75a) slider_cont_pane_cp1

0xd9b1,	// (0x0002f770) slider_form_pane_cp

0x134a,	// (0x00023109) input_focus_pane_g1

0x1352,	// (0x00023111) input_focus_pane_g2

0x135a,	// (0x00023119) input_focus_pane_g3

0x1362,	// (0x00023121) input_focus_pane_g4

0x136a,	// (0x00023129) input_focus_pane_g5

0x1372,	// (0x00023131) input_focus_pane_g6

0x137a,	// (0x00023139) input_focus_pane_g7

0x1382,	// (0x00023141) input_focus_pane_g8

0x138a,	// (0x00023149) input_focus_pane_g9

0x0c69,	// (0x00022a28) input_focus_pane_g10

0x0009,

0xf667,	// (0x00031426) input_focus_pane_g

0x25c2,	// (0x00024381) wait_border_pane_g3_copy1

0xd9b9,	// (0x0002f778) data_form_pane_t1

0x0c69,	// (0x00022a28) wait_anim_pane_g1_copy1

0xdd81,	// (0x0002fb40) data_form_wide_pane_t1

0xd9d2,	// (0x0002f791) list_form_graphic_pane_cp_ParamLimits

0xd9d2,	// (0x0002f791) list_form_graphic_pane_cp

0x3179,	// (0x00024f38) slider_form_pane_g1

0x31ed,	// (0x00024fac) slider_form_pane_g2

0x0006,

0xf965,	// (0x00031724) slider_form_pane_g

0xd9e6,	// (0x0002f7a5) list_form_graphic_pane_ParamLimits

0xd9e6,	// (0x0002f7a5) list_form_graphic_pane

0x9d88,	// (0x0002bb47) list_form_graphic_pane_g1

0x9d90,	// (0x0002bb4f) list_form_graphic_pane_t1_ParamLimits

0x9d90,	// (0x0002bb4f) list_form_graphic_pane_t1

0x0d4f,	// (0x00022b0e) list_highlight_pane_cp5_ParamLimits

0x0d4f,	// (0x00022b0e) list_highlight_pane_cp5

0xd9fb,	// (0x0002f7ba) find_pane_g1

0x1392,	// (0x00023151) input_find_pane

0x9dae,	// (0x0002bb6d) input_find_pane_g1_ParamLimits

0x9dae,	// (0x0002bb6d) input_find_pane_g1

0xda06,	// (0x0002f7c5) input_find_pane_t1_ParamLimits

0xda06,	// (0x0002f7c5) input_find_pane_t1

0xda1b,	// (0x0002f7da) input_find_pane_t2_ParamLimits

0xda1b,	// (0x0002f7da) input_find_pane_t2

0x0001,

0xf67c,	// (0x0003143b) input_find_pane_t_ParamLimits

0xf67c,	// (0x0003143b) input_find_pane_t

0x139b,	// (0x0002315a) input_focus_pane_cp5_ParamLimits

0x139b,	// (0x0002315a) input_focus_pane_cp5

0x0d39,	// (0x00022af8) bg_popup_window_pane_cp2_ParamLimits

0x0d39,	// (0x00022af8) bg_popup_window_pane_cp2

0x13ba,	// (0x00023179) listscroll_menu_pane_ParamLimits

0x13ba,	// (0x00023179) listscroll_menu_pane

0x13c6,	// (0x00023185) popup_submenu_window_ParamLimits

0x13c6,	// (0x00023185) popup_submenu_window

0x13ea,	// (0x000231a9) find_popup_pane_g1

0x13f2,	// (0x000231b1) input_popup_find_pane_cp

0x13fc,	// (0x000231bb) input_focus_pane_cp4_ParamLimits

0x13fc,	// (0x000231bb) input_focus_pane_cp4

0x140a,	// (0x000231c9) input_popup_find_pane_t1_ParamLimits

0x140a,	// (0x000231c9) input_popup_find_pane_t1

0x0ceb,	// (0x00022aaa) bg_popup_sub_pane_cp

0x1438,	// (0x000231f7) listscroll_popup_sub_pane

0x1440,	// (0x000231ff) list_submenu_pane_ParamLimits

0x1440,	// (0x000231ff) list_submenu_pane

0x1451,	// (0x00023210) scroll_pane_cp4

0x1459,	// (0x00023218) list_single_popup_submenu_pane_ParamLimits

0x1459,	// (0x00023218) list_single_popup_submenu_pane

0x146b,	// (0x0002322a) list_single_popup_submenu_pane_g1

0x1473,	// (0x00023232) list_single_popup_submenu_pane_t1_ParamLimits

0x1473,	// (0x00023232) list_single_popup_submenu_pane_t1

0x0d39,	// (0x00022af8) bg_active_tab_pane_cp1_ParamLimits

0x0d39,	// (0x00022af8) bg_active_tab_pane_cp1

0x31c7,	// (0x00024f86) tabs_2_active_pane_g1

0xda3c,	// (0x0002f7fb) tabs_2_active_pane_t1

0x0d39,	// (0x00022af8) bg_passive_tab_pane_cp1_ParamLimits

0x0d39,	// (0x00022af8) bg_passive_tab_pane_cp1

0x31c7,	// (0x00024f86) tabs_2_passive_pane_g1

0xda3c,	// (0x0002f7fb) tabs_2_passive_pane_t1

0x0d4f,	// (0x00022b0e) bg_active_tab_pane_cp4

0xda52,	// (0x0002f811) tabs_2_long_active_pane_t1

0x1488,	// (0x00023247) bg_passive_tab_pane_cp4

0x7207,	// (0x00028fc6) list_single_midp_graphic_pane_g4_ParamLimits

0x0d4f,	// (0x00022b0e) bg_active_tab_pane_cp5

0xda69,	// (0x0002f828) tabs_3_long_active_pane_t1

0x1488,	// (0x00023247) bg_passive_tab_pane_cp5

0x7207,	// (0x00028fc6) list_single_midp_graphic_pane_g4

0x0d4f,	// (0x00022b0e) bg_popup_window_pane_cp13_ParamLimits

0x0d4f,	// (0x00022b0e) bg_popup_window_pane_cp13

0x149d,	// (0x0002325c) listscroll_popup_fast_pane_ParamLimits

0x149d,	// (0x0002325c) listscroll_popup_fast_pane

0x14ac,	// (0x0002326b) grid_popup_fast_pane_ParamLimits

0x14ac,	// (0x0002326b) grid_popup_fast_pane

0x14be,	// (0x0002327d) scroll_pane_cp9_ParamLimits

0x14be,	// (0x0002327d) scroll_pane_cp9

0x44d0,	// (0x0002628f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x44d0,	// (0x0002628f) list_single_graphic_hl_pane_t1_cp2

0x14e2,	// (0x000232a1) input_focus_pane_cp20_ParamLimits

0x14e2,	// (0x000232a1) input_focus_pane_cp20

0x14f0,	// (0x000232af) query_popup_data_pane_t1_ParamLimits

0x14f0,	// (0x000232af) query_popup_data_pane_t1

0x1503,	// (0x000232c2) query_popup_data_pane_t2_ParamLimits

0x1503,	// (0x000232c2) query_popup_data_pane_t2

0x1549,	// (0x00023308) query_popup_data_pane_t3_ParamLimits

0x1549,	// (0x00023308) query_popup_data_pane_t3

0x158a,	// (0x00023349) query_popup_data_pane_t4_ParamLimits

0x158a,	// (0x00023349) query_popup_data_pane_t4

0x15c6,	// (0x00023385) query_popup_data_pane_t5_ParamLimits

0x15c6,	// (0x00023385) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x00031440) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x00031440) query_popup_data_pane_t

0x134a,	// (0x00023109) bg_set_opt_pane_g1

0x1352,	// (0x00023111) bg_set_opt_pane_g2

0x135a,	// (0x00023119) bg_set_opt_pane_g3

0x1362,	// (0x00023121) bg_set_opt_pane_g4

0x136a,	// (0x00023129) bg_set_opt_pane_g5

0x1372,	// (0x00023131) bg_set_opt_pane_g6

0x137a,	// (0x00023139) bg_set_opt_pane_g7

0x1382,	// (0x00023141) bg_set_opt_pane_g8

0x138a,	// (0x00023149) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x0003144b) bg_set_opt_pane_g

0x6558,	// (0x00028317) control_top_pane_stacon_ParamLimits

0x6558,	// (0x00028317) control_top_pane_stacon

0x65ab,	// (0x0002836a) signal_pane_stacon_ParamLimits

0x65ab,	// (0x0002836a) signal_pane_stacon

0x19b9,	// (0x00023778) stacon_top_pane_g1_ParamLimits

0x19b9,	// (0x00023778) stacon_top_pane_g1

0x65d0,	// (0x0002838f) title_pane_stacon_ParamLimits

0x65d0,	// (0x0002838f) title_pane_stacon

0x65f2,	// (0x000283b1) uni_indicator_pane_stacon_ParamLimits

0x65f2,	// (0x000283b1) uni_indicator_pane_stacon

0x6607,	// (0x000283c6) battery_pane_stacon_ParamLimits

0x6607,	// (0x000283c6) battery_pane_stacon

0x6647,	// (0x00028406) control_bottom_pane_stacon_ParamLimits

0x6647,	// (0x00028406) control_bottom_pane_stacon

0x6666,	// (0x00028425) navi_pane_stacon_ParamLimits

0x6666,	// (0x00028425) navi_pane_stacon

0x19db,	// (0x0002379a) stacon_bottom_pane_g1_ParamLimits

0x19db,	// (0x0002379a) stacon_bottom_pane_g1

0x15fd,	// (0x000233bc) aid_levels_signal_lsc_ParamLimits

0x15fd,	// (0x000233bc) aid_levels_signal_lsc

0x615d,	// (0x00027f1c) signal_pane_stacon_g1_ParamLimits

0x615d,	// (0x00027f1c) signal_pane_stacon_g1

0x6169,	// (0x00027f28) signal_pane_stacon_g2_ParamLimits

0x6169,	// (0x00027f28) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x0003145e) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x0003145e) signal_pane_stacon_g

0x619d,	// (0x00027f5c) title_pane_stacon_t1_ParamLimits

0x619d,	// (0x00027f5c) title_pane_stacon_t1

0x162b,	// (0x000233ea) uni_indicator_pane_stacon_g1

0x1635,	// (0x000233f4) uni_indicator_pane_stacon_g2

0x1617,	// (0x000233d6) uni_indicator_pane_stacon_g3

0x1621,	// (0x000233e0) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x0003146a) uni_indicator_pane_stacon_g

0x61c2,	// (0x00027f81) control_top_pane_stacon_g1

0x61ca,	// (0x00027f89) control_top_pane_stacon_t1_ParamLimits

0x61ca,	// (0x00027f89) control_top_pane_stacon_t1

0x163f,	// (0x000233fe) aid_levels_battery_lsc_ParamLimits

0x163f,	// (0x000233fe) aid_levels_battery_lsc

0x61fb,	// (0x00027fba) battery_pane_stacon_g1_ParamLimits

0x61fb,	// (0x00027fba) battery_pane_stacon_g1

0x6207,	// (0x00027fc6) battery_pane_stacon_g2_ParamLimits

0x6207,	// (0x00027fc6) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x00031473) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x00031473) battery_pane_stacon_g

0x6236,	// (0x00027ff5) navi_icon_pane_stacon

0x6246,	// (0x00028005) navi_navi_pane_stacon

0x6236,	// (0x00027ff5) navi_text_pane_stacon

0x61c2,	// (0x00027f81) control_bottom_pane_stacon_g1

0x6256,	// (0x00028015) control_bottom_pane_stacon_t1_ParamLimits

0x6256,	// (0x00028015) control_bottom_pane_stacon_t1

0xda7f,	// (0x0002f83e) grid_app_pane_ParamLimits

0xda7f,	// (0x0002f83e) grid_app_pane

0xdaad,	// (0x0002f86c) scroll_pane_cp15_ParamLimits

0xdaad,	// (0x0002f86c) scroll_pane_cp15

0xdac0,	// (0x0002f87f) cell_app_pane_ParamLimits

0xdac0,	// (0x0002f87f) cell_app_pane

0xdafd,	// (0x0002f8bc) cell_app_pane_g1_ParamLimits

0xdafd,	// (0x0002f8bc) cell_app_pane_g1

0x1667,	// (0x00023426) cell_app_pane_g2_ParamLimits

0x1667,	// (0x00023426) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x00031478) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x00031478) cell_app_pane_g

0xdb21,	// (0x0002f8e0) cell_app_pane_t1_ParamLimits

0xdb21,	// (0x0002f8e0) cell_app_pane_t1

0x1673,	// (0x00023432) grid_highlight_pane_ParamLimits

0x1673,	// (0x00023432) grid_highlight_pane

0x134a,	// (0x00023109) cell_highlight_pane_g1

0x1352,	// (0x00023111) cell_highlight_pane_g2

0x135a,	// (0x00023119) cell_highlight_pane_g3

0x1362,	// (0x00023121) cell_highlight_pane_g4

0x136a,	// (0x00023129) cell_highlight_pane_g5

0x1372,	// (0x00023131) cell_highlight_pane_g6

0x137a,	// (0x00023139) cell_highlight_pane_g7

0x1382,	// (0x00023141) cell_highlight_pane_g8

0x138a,	// (0x00023149) cell_highlight_pane_g9

0x0c69,	// (0x00022a28) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x00031426) cell_highlight_pane_g

0x1684,	// (0x00023443) bg_scroll_pane

0x6326,	// (0x000280e5) scroll_handle_pane

0x16cb,	// (0x0002348a) scroll_bg_pane_g1

0x16e0,	// (0x0002349f) scroll_bg_pane_g2

0x16f8,	// (0x000234b7) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x0003147d) scroll_bg_pane_g

0x170d,	// (0x000234cc) scroll_handle_focus_pane_ParamLimits

0x170d,	// (0x000234cc) scroll_handle_focus_pane

0x16cb,	// (0x0002348a) scroll_handle_pane_g1

0x171a,	// (0x000234d9) scroll_handle_pane_g2

0x16f8,	// (0x000234b7) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x00031484) scroll_handle_pane_g

0x13fc,	// (0x000231bb) bg_popup_sub_pane_cp21_ParamLimits

0x13fc,	// (0x000231bb) bg_popup_sub_pane_cp21

0x172e,	// (0x000234ed) popup_fep_japan_predictive_window_t1_ParamLimits

0x172e,	// (0x000234ed) popup_fep_japan_predictive_window_t1

0x1745,	// (0x00023504) popup_fep_japan_predictive_window_t2_ParamLimits

0x1745,	// (0x00023504) popup_fep_japan_predictive_window_t2

0x1778,	// (0x00023537) popup_fep_japan_predictive_window_t3_ParamLimits

0x1778,	// (0x00023537) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x0003148b) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x0003148b) popup_fep_japan_predictive_window_t

0x0ceb,	// (0x00022aaa) bg_popup_sub_pane_cp23

0x17af,	// (0x0002356e) listscroll_japin_cand_pane

0x17b7,	// (0x00023576) popup_fep_japan_candidate_window_t1

0x17c5,	// (0x00023584) candidate_pane_ParamLimits

0x17c5,	// (0x00023584) candidate_pane

0x17d8,	// (0x00023597) scroll_pane_cp30

0x17e0,	// (0x0002359f) list_single_popup_jap_candidate_pane_ParamLimits

0x17e0,	// (0x0002359f) list_single_popup_jap_candidate_pane

0x0ceb,	// (0x00022aaa) list_highlight_pane_cp30

0x17f5,	// (0x000235b4) list_single_popup_jap_candidate_pane_t1

0xdb38,	// (0x0002f8f7) level_1_signal

0xdb4a,	// (0x0002f909) level_2_signal

0xdb5d,	// (0x0002f91c) level_3_signal

0xdb70,	// (0x0002f92f) level_4_signal

0xdb83,	// (0x0002f942) level_5_signal

0xdb96,	// (0x0002f955) level_6_signal

0xdba9,	// (0x0002f968) level_7_signal

0xdb38,	// (0x0002f8f7) level_1_battery

0xdb4a,	// (0x0002f909) level_2_battery

0xdb5d,	// (0x0002f91c) level_3_battery

0xdb70,	// (0x0002f92f) level_4_battery

0xdb83,	// (0x0002f942) level_5_battery

0xdb96,	// (0x0002f955) level_6_battery

0xdba9,	// (0x0002f968) level_7_battery

0x181c,	// (0x000235db) list_menu_pane_ParamLimits

0x181c,	// (0x000235db) list_menu_pane

0x1832,	// (0x000235f1) scroll_pane_cp25_ParamLimits

0x1832,	// (0x000235f1) scroll_pane_cp25

0xdbbc,	// (0x0002f97b) list_double2_graphic_pane_cp2_ParamLimits

0xdbbc,	// (0x0002f97b) list_double2_graphic_pane_cp2

0xdbbc,	// (0x0002f97b) list_double2_large_graphic_pane_cp2_ParamLimits

0xdbbc,	// (0x0002f97b) list_double2_large_graphic_pane_cp2

0xdbbc,	// (0x0002f97b) list_double2_pane_cp2_ParamLimits

0xdbbc,	// (0x0002f97b) list_double2_pane_cp2

0xdbbc,	// (0x0002f97b) list_double_graphic_pane_cp2_ParamLimits

0xdbbc,	// (0x0002f97b) list_double_graphic_pane_cp2

0xdbbc,	// (0x0002f97b) list_double_large_graphic_pane_cp2_ParamLimits

0xdbbc,	// (0x0002f97b) list_double_large_graphic_pane_cp2

0xdbbc,	// (0x0002f97b) list_double_number_pane_cp2_ParamLimits

0xdbbc,	// (0x0002f97b) list_double_number_pane_cp2

0xdbbc,	// (0x0002f97b) list_double_pane_cp2_ParamLimits

0xdbbc,	// (0x0002f97b) list_double_pane_cp2

0xdbd7,	// (0x0002f996) list_single_2graphic_pane_cp2_ParamLimits

0xdbd7,	// (0x0002f996) list_single_2graphic_pane_cp2

0xdbd7,	// (0x0002f996) list_single_graphic_heading_pane_cp2_ParamLimits

0xdbd7,	// (0x0002f996) list_single_graphic_heading_pane_cp2

0xdbd7,	// (0x0002f996) list_single_graphic_pane_cp2_ParamLimits

0xdbd7,	// (0x0002f996) list_single_graphic_pane_cp2

0xdbd7,	// (0x0002f996) list_single_heading_pane_cp2_ParamLimits

0xdbd7,	// (0x0002f996) list_single_heading_pane_cp2

0xdbe8,	// (0x0002f9a7) list_single_large_graphic_pane_cp2_ParamLimits

0xdbe8,	// (0x0002f9a7) list_single_large_graphic_pane_cp2

0xdbd7,	// (0x0002f996) list_single_number_heading_pane_cp2_ParamLimits

0xdbd7,	// (0x0002f996) list_single_number_heading_pane_cp2

0xdbd7,	// (0x0002f996) list_single_number_pane_cp2_ParamLimits

0xdbd7,	// (0x0002f996) list_single_number_pane_cp2

0xdbd7,	// (0x0002f996) list_single_pane_cp2_ParamLimits

0xdbd7,	// (0x0002f996) list_single_pane_cp2

0x1854,	// (0x00023613) bg_popup_sub_pane_cp22

0x64c8,	// (0x00028287) popup_side_volume_key_window_g1

0x64ec,	// (0x000282ab) popup_side_volume_key_window_t1

0x6508,	// (0x000282c7) volume_small_pane_cp1

0x0d39,	// (0x00022af8) bg_popup_sub_pane_cp24_ParamLimits

0x0d39,	// (0x00022af8) bg_popup_sub_pane_cp24

0x186a,	// (0x00023629) fep_china_uni_candidate_pane_ParamLimits

0x186a,	// (0x00023629) fep_china_uni_candidate_pane

0x187e,	// (0x0002363d) fep_china_uni_entry_pane

0x188e,	// (0x0002364d) popup_fep_china_uni_window_g1

0x18aa,	// (0x00023669) fep_china_uni_entry_pane_g1

0x18b2,	// (0x00023671) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x000314bc) fep_china_uni_entry_pane_g

0x18ba,	// (0x00023679) fep_entry_item_pane

0x18c4,	// (0x00023683) fep_candidate_item_pane

0x18cc,	// (0x0002368b) fep_china_uni_candidate_pane_g1

0x18d4,	// (0x00023693) fep_china_uni_candidate_pane_g2

0x18dc,	// (0x0002369b) fep_china_uni_candidate_pane_g3

0x18e4,	// (0x000236a3) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x000314c1) fep_china_uni_candidate_pane_g

0x0c69,	// (0x00022a28) fep_entry_item_pane_g1

0x18ec,	// (0x000236ab) fep_entry_item_pane_t1_ParamLimits

0x18ec,	// (0x000236ab) fep_entry_item_pane_t1

0x1902,	// (0x000236c1) fep_candidate_item_pane_t1_ParamLimits

0x1902,	// (0x000236c1) fep_candidate_item_pane_t1

0x1917,	// (0x000236d6) fep_candidate_item_pane_t2_ParamLimits

0x1917,	// (0x000236d6) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x000314ca) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x000314ca) fep_candidate_item_pane_t

0x0d4f,	// (0x00022b0e) list_highlight_pane_cp31_ParamLimits

0x0d4f,	// (0x00022b0e) list_highlight_pane_cp31

0x1929,	// (0x000236e8) level_1_signal_lsc

0x1932,	// (0x000236f1) level_2_signal_lsc

0x193b,	// (0x000236fa) level_3_signal_lsc

0x1944,	// (0x00023703) level_4_signal_lsc

0x194d,	// (0x0002370c) level_5_signal_lsc

0x1956,	// (0x00023715) level_6_signal_lsc

0x195f,	// (0x0002371e) level_7_signal_lsc

0x195f,	// (0x0002371e) level_1_battery_lsc

0x1968,	// (0x00023727) level_2_battery_lsc

0x1971,	// (0x00023730) level_3_battery_lsc

0x197a,	// (0x00023739) level_4_battery_lsc

0x1983,	// (0x00023742) level_5_battery_lsc

0x198c,	// (0x0002374b) level_6_battery_lsc

0x1929,	// (0x000236e8) level_7_battery_lsc

0x1995,	// (0x00023754) scroll_handle_focus_pane_g1

0x199e,	// (0x0002375d) scroll_handle_focus_pane_g2

0x19a7,	// (0x00023766) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x000314cf) scroll_handle_focus_pane_g

0xdc6d,	// (0x0002fa2c) list_single_2graphic_pane_g1_ParamLimits

0xdc6d,	// (0x0002fa2c) list_single_2graphic_pane_g1

0xd7e7,	// (0x0002f5a6) list_single_2graphic_pane_g2_ParamLimits

0xd7e7,	// (0x0002f5a6) list_single_2graphic_pane_g2

0x9740,	// (0x0002b4ff) list_single_2graphic_pane_g3_ParamLimits

0x9740,	// (0x0002b4ff) list_single_2graphic_pane_g3

0xdc79,	// (0x0002fa38) list_single_2graphic_pane_g4_ParamLimits

0xdc79,	// (0x0002fa38) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x000314d6) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x000314d6) list_single_2graphic_pane_g

0xdc8a,	// (0x0002fa49) list_single_2graphic_pane_t1_ParamLimits

0xdc8a,	// (0x0002fa49) list_single_2graphic_pane_t1

0xdcb8,	// (0x0002fa77) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xdcb8,	// (0x0002fa77) list_double2_graphic_large_graphic_pane_g1

0xd800,	// (0x0002f5bf) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xd800,	// (0x0002f5bf) list_double2_graphic_large_graphic_pane_g2

0x99f5,	// (0x0002b7b4) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x99f5,	// (0x0002b7b4) list_double2_graphic_large_graphic_pane_g3

0x9e3a,	// (0x0002bbf9) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9e3a,	// (0x0002bbf9) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x000314df) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x000314df) list_double2_graphic_large_graphic_pane_g

0x9e46,	// (0x0002bc05) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9e46,	// (0x0002bc05) list_double2_graphic_large_graphic_pane_t1

0x9e5c,	// (0x0002bc1b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9e5c,	// (0x0002bc1b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x000314e8) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x000314e8) list_double2_graphic_large_graphic_pane_t

0x1a82,	// (0x00023841) popup_fast_swap_window_ParamLimits

0x1a82,	// (0x00023841) popup_fast_swap_window

0x1a9e,	// (0x0002385d) popup_side_volume_key_window

0x1ab8,	// (0x00023877) stacon_top_pane

0x1ac2,	// (0x00023881) status_pane_ParamLimits

0x1ac2,	// (0x00023881) status_pane

0xdcfe,	// (0x0002fabd) status_small_pane

0x0ceb,	// (0x00022aaa) control_pane

0x0ceb,	// (0x00022aaa) stacon_bottom_pane

0x1296,	// (0x00023055) scroll_pane_cp121

0x12da,	// (0x00023099) set_content_pane

0x31d8,	// (0x00024f97) bg_active_tab_pane_g1_cp1

0x19b0,	// (0x0002376f) bg_active_tab_pane_g2_cp1

0x31cf,	// (0x00024f8e) bg_active_tab_pane_g3_cp1

0x31d8,	// (0x00024f97) bg_passive_tab_pane_g1_cp1

0x19b0,	// (0x0002376f) bg_passive_tab_pane_g2_cp1

0x31cf,	// (0x00024f8e) bg_passive_tab_pane_g3_cp1

0xdcc8,	// (0x0002fa87) bg_active_tab_pane_g1_cp2

0x19b0,	// (0x0002376f) bg_active_tab_pane_g2_cp2

0xdcd1,	// (0x0002fa90) bg_active_tab_pane_g3_cp2

0xdcc8,	// (0x0002fa87) bg_passive_tab_pane_g1_cp2

0x19b0,	// (0x0002376f) bg_passive_tab_pane_g2_cp2

0xdcd1,	// (0x0002fa90) bg_passive_tab_pane_g3_cp2

0xdcda,	// (0x0002fa99) bg_active_tab_pane_g1_cp3

0x19b0,	// (0x0002376f) bg_active_tab_pane_g2_cp3

0xdce3,	// (0x0002faa2) bg_active_tab_pane_g3_cp3

0xdcda,	// (0x0002fa99) bg_passive_tab_pane_g1_cp3

0x19b0,	// (0x0002376f) bg_passive_tab_pane_g2_cp3

0xdce3,	// (0x0002faa2) bg_passive_tab_pane_g3_cp3

0xdcec,	// (0x0002faab) bg_active_tab_pane_g1_cp4

0x19b0,	// (0x0002376f) bg_active_tab_pane_g2_cp4

0xdcf5,	// (0x0002fab4) bg_active_tab_pane_g3_cp4

0xdcec,	// (0x0002faab) bg_passive_tab_pane_g1_cp4

0x19b0,	// (0x0002376f) bg_passive_tab_pane_g2_cp4

0xdcf5,	// (0x0002fab4) bg_passive_tab_pane_g3_cp4

0x1a00,	// (0x000237bf) bg_active_tab_pane_g1_cp5

0x19b0,	// (0x0002376f) bg_active_tab_pane_g2_cp5

0x19f7,	// (0x000237b6) bg_active_tab_pane_g3_cp5

0x1a00,	// (0x000237bf) bg_passive_tab_pane_g1_cp5

0x19b0,	// (0x0002376f) bg_passive_tab_pane_g2_cp5

0x19f7,	// (0x000237b6) bg_passive_tab_pane_g3_cp5

0xaf0f,	// (0x0002ccce) list_set_graphic_pane_ParamLimits

0xaf0f,	// (0x0002ccce) list_set_graphic_pane

0x0ceb,	// (0x00022aaa) bg_set_opt_pane_cp4

0x1a09,	// (0x000237c8) list_set_graphic_pane_g1_ParamLimits

0x1a09,	// (0x000237c8) list_set_graphic_pane_g1

0x1a15,	// (0x000237d4) list_set_graphic_pane_g2_ParamLimits

0x1a15,	// (0x000237d4) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x000314ed) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x000314ed) list_set_graphic_pane_g

0x0009,

0xfaac,	// (0x0003186b) volume_small_pane_cp_g

0x1a37,	// (0x000237f6) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x1a37,	// (0x000237f6) list_double2_large_graphic_pane_g1_cp2

0x1a43,	// (0x00023802) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x1a43,	// (0x00023802) list_double2_large_graphic_pane_g2_cp2

0x1a52,	// (0x00023811) list_double2_large_graphic_pane_g3_cp2

0x1a5a,	// (0x00023819) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x1a5a,	// (0x00023819) list_double2_large_graphic_pane_t1_cp2

0x1a70,	// (0x0002382f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x1a70,	// (0x0002382f) list_double2_large_graphic_pane_t2_cp2

0x2f31,	// (0x00024cf0) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x2f31,	// (0x00024cf0) list_double_large_graphic_pane_g1_cp2

0x2f42,	// (0x00024d01) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x2f42,	// (0x00024d01) list_double_large_graphic_pane_g2_cp2

0x1b9d,	// (0x0002395c) list_double_large_graphic_pane_g3_cp2

0x2f51,	// (0x00024d10) list_double_large_graphic_pane_g4_cp

0x2f59,	// (0x00024d18) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2f59,	// (0x00024d18) list_double_large_graphic_pane_t1_cp2

0x2f70,	// (0x00024d2f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2f70,	// (0x00024d2f) list_double_large_graphic_pane_t2_cp2

0x1ad0,	// (0x0002388f) list_double2_graphic_pane_g1_cp2_ParamLimits

0x1ad0,	// (0x0002388f) list_double2_graphic_pane_g1_cp2

0x1adc,	// (0x0002389b) list_double2_graphic_pane_g2_cp2_ParamLimits

0x1adc,	// (0x0002389b) list_double2_graphic_pane_g2_cp2

0x1aeb,	// (0x000238aa) list_double2_graphic_pane_g3_cp2

0x1af3,	// (0x000238b2) list_double2_graphic_pane_t1_cp2_ParamLimits

0x1af3,	// (0x000238b2) list_double2_graphic_pane_t1_cp2

0x1b09,	// (0x000238c8) list_double2_graphic_pane_t2_cp2_ParamLimits

0x1b09,	// (0x000238c8) list_double2_graphic_pane_t2_cp2

0x1b1b,	// (0x000238da) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1b1b,	// (0x000238da) list_single_number_heading_pane_g1_cp2

0x1b27,	// (0x000238e6) list_single_number_heading_pane_g2_cp2

0x1b2f,	// (0x000238ee) list_single_number_heading_pane_t1_cp2_ParamLimits

0x1b2f,	// (0x000238ee) list_single_number_heading_pane_t1_cp2

0x1b45,	// (0x00023904) list_single_number_heading_pane_t2_cp2_ParamLimits

0x1b45,	// (0x00023904) list_single_number_heading_pane_t2_cp2

0x1b57,	// (0x00023916) list_single_number_heading_pane_t3_cp2_ParamLimits

0x1b57,	// (0x00023916) list_single_number_heading_pane_t3_cp2

0x1b1b,	// (0x000238da) list_single_heading_pane_g1_cp2_ParamLimits

0x1b1b,	// (0x000238da) list_single_heading_pane_g1_cp2

0x1b27,	// (0x000238e6) list_single_heading_pane_g2_cp2

0x1b2f,	// (0x000238ee) list_single_heading_pane_t1_cp2_ParamLimits

0x1b2f,	// (0x000238ee) list_single_heading_pane_t1_cp2

0x2d3b,	// (0x00024afa) list_single_heading_pane_t2_cp2_ParamLimits

0x2d3b,	// (0x00024afa) list_single_heading_pane_t2_cp2

0x2cc0,	// (0x00024a7f) list_double_graphic_pane_g1_cp2_ParamLimits

0x2cc0,	// (0x00024a7f) list_double_graphic_pane_g1_cp2

0x2ccc,	// (0x00024a8b) list_double_graphic_pane_g2_cp2_ParamLimits

0x2ccc,	// (0x00024a8b) list_double_graphic_pane_g2_cp2

0x2cdb,	// (0x00024a9a) list_double_graphic_pane_g3_cp2

0x2ce3,	// (0x00024aa2) list_double_graphic_pane_t1_cp2_ParamLimits

0x2ce3,	// (0x00024aa2) list_double_graphic_pane_t1_cp2

0x2cf9,	// (0x00024ab8) list_double_graphic_pane_t2_cp2_ParamLimits

0x2cf9,	// (0x00024ab8) list_double_graphic_pane_t2_cp2

0x1b91,	// (0x00023950) list_double_number_pane_g1_cp2_ParamLimits

0x1b91,	// (0x00023950) list_double_number_pane_g1_cp2

0x1b9d,	// (0x0002395c) list_double_number_pane_g2_cp2

0x2c86,	// (0x00024a45) list_double_number_pane_t1_cp2_ParamLimits

0x2c86,	// (0x00024a45) list_double_number_pane_t1_cp2

0x2c98,	// (0x00024a57) list_double_number_pane_t2_cp2_ParamLimits

0x2c98,	// (0x00024a57) list_double_number_pane_t2_cp2

0x2cae,	// (0x00024a6d) list_double_number_pane_t3_cp2_ParamLimits

0x2cae,	// (0x00024a6d) list_double_number_pane_t3_cp2

0x2bfe,	// (0x000249bd) list_single_graphic_pane_g1_cp2_ParamLimits

0x2bfe,	// (0x000249bd) list_single_graphic_pane_g1_cp2

0x1b1b,	// (0x000238da) list_single_graphic_pane_g2_cp2_ParamLimits

0x1b1b,	// (0x000238da) list_single_graphic_pane_g2_cp2

0x1b27,	// (0x000238e6) list_single_graphic_pane_g3_cp2

0x2bd6,	// (0x00024995) list_single_graphic_pane_t1_cp2_ParamLimits

0x2bd6,	// (0x00024995) list_single_graphic_pane_t1_cp2

0x1b1b,	// (0x000238da) list_single_number_pane_g1_cp2_ParamLimits

0x1b1b,	// (0x000238da) list_single_number_pane_g1_cp2

0x1b27,	// (0x000238e6) list_single_number_pane_g2_cp2

0x2bd6,	// (0x00024995) list_single_number_pane_t1_cp2_ParamLimits

0x2bd6,	// (0x00024995) list_single_number_pane_t1_cp2

0x2bec,	// (0x000249ab) list_single_number_pane_t2_cp2_ParamLimits

0x2bec,	// (0x000249ab) list_single_number_pane_t2_cp2

0x1a43,	// (0x00023802) list_double2_pane_g1_cp2_ParamLimits

0x1a43,	// (0x00023802) list_double2_pane_g1_cp2

0x1a52,	// (0x00023811) list_double2_pane_g2_cp2

0x1b69,	// (0x00023928) list_double2_pane_t1_cp2_ParamLimits

0x1b69,	// (0x00023928) list_double2_pane_t1_cp2

0x1b7f,	// (0x0002393e) list_double2_pane_t2_cp2_ParamLimits

0x1b7f,	// (0x0002393e) list_double2_pane_t2_cp2

0x1b91,	// (0x00023950) list_double_pane_g1_cp2_ParamLimits

0x1b91,	// (0x00023950) list_double_pane_g1_cp2

0x1b9d,	// (0x0002395c) list_double_pane_g2_cp2

0x1ba5,	// (0x00023964) list_double_pane_t1_cp2_ParamLimits

0x1ba5,	// (0x00023964) list_double_pane_t1_cp2

0x1bbb,	// (0x0002397a) list_double_pane_t2_cp2_ParamLimits

0x1bbb,	// (0x0002397a) list_double_pane_t2_cp2

0x1be3,	// (0x000239a2) list_single_pane_cp2_g3

0x1b1b,	// (0x000238da) list_single_pane_g1_cp2_ParamLimits

0x1b1b,	// (0x000238da) list_single_pane_g1_cp2

0x1b27,	// (0x000238e6) list_single_pane_g2_cp2

0x1bf3,	// (0x000239b2) list_single_pane_t1_cp2_ParamLimits

0x1bf3,	// (0x000239b2) list_single_pane_t1_cp2

0x1c0b,	// (0x000239ca) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x1c0b,	// (0x000239ca) list_single_large_graphic_pane_g1_cp2

0x1c17,	// (0x000239d6) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1c17,	// (0x000239d6) list_single_large_graphic_pane_g2_cp2

0x1c23,	// (0x000239e2) list_single_large_graphic_pane_g3_cp2

0x1c2b,	// (0x000239ea) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x1c2b,	// (0x000239ea) list_single_large_graphic_pane_g4_cp1

0x1c45,	// (0x00023a04) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1c45,	// (0x00023a04) list_single_large_graphic_pane_t1_cp2

0x2bb8,	// (0x00024977) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2bb8,	// (0x00024977) list_single_graphic_heading_pane_g1_cp2

0x2b93,	// (0x00024952) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2b93,	// (0x00024952) list_single_graphic_heading_pane_g4_cp2

0x1b27,	// (0x000238e6) list_single_graphic_heading_pane_g5_cp2

0x1b2f,	// (0x000238ee) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x1b2f,	// (0x000238ee) list_single_graphic_heading_pane_t1_cp2

0x2bc4,	// (0x00024983) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2bc4,	// (0x00024983) list_single_graphic_heading_pane_t2_cp2

0x2b87,	// (0x00024946) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2b87,	// (0x00024946) list_single_2graphic_pane_g1_cp2

0x2b93,	// (0x00024952) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2b93,	// (0x00024952) list_single_2graphic_pane_g2_cp2

0x1b27,	// (0x000238e6) list_single_2graphic_pane_g3_cp2

0x20a2,	// (0x00023e61) list_single_2graphic_pane_g4_cp2_ParamLimits

0x20a2,	// (0x00023e61) list_single_2graphic_pane_g4_cp2

0x2ba2,	// (0x00024961) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2ba2,	// (0x00024961) list_single_2graphic_pane_t1_cp2

0x0c69,	// (0x00022a28) list_highlight_pane_g10_cp1

0x2799,	// (0x00024558) list_highlight_pane_g1_cp1

0x27a1,	// (0x00024560) list_highlight_pane_g2_cp1

0x27a9,	// (0x00024568) list_highlight_pane_g3_cp1

0x27b1,	// (0x00024570) list_highlight_pane_g4_cp1

0x27b9,	// (0x00024578) list_highlight_pane_g5_cp1

0x27c1,	// (0x00024580) list_highlight_pane_g6_cp1

0x27c9,	// (0x00024588) list_highlight_pane_g7_cp1

0x27d1,	// (0x00024590) list_highlight_pane_g8_cp1

0x27d9,	// (0x00024598) list_highlight_pane_g9_cp1

0xe4d1,	// (0x00030290) form_field_slider_pane_t3

0xe4df,	// (0x0003029e) form_field_slider_pane_t4

0x26e3,	// (0x000244a2) slider_form_pane_ParamLimits

0x26e3,	// (0x000244a2) slider_form_pane

0x0ceb,	// (0x00022aaa) control_abbreviations

0x0ceb,	// (0x00022aaa) control_conventions

0x0ceb,	// (0x00022aaa) control_definitions

0x0ceb,	// (0x00022aaa) format_table_attribute

0x2d85,	// (0x00024b44) bg_popup_preview_window_pane_g9

0x0ceb,	// (0x00022aaa) format_table_data2

0x0ceb,	// (0x00022aaa) format_table_data3

0x0ceb,	// (0x00022aaa) format_table_data_example

0x0008,

0x0ceb,	// (0x00022aaa) intro_purpose

0xf8c5,	// (0x00031684) bg_popup_preview_window_pane_g

0x0ceb,	// (0x00022aaa) texts_category

0x0ceb,	// (0x00022aaa) texts_graphics

0x1c5b,	// (0x00023a1a) text_digital

0x1c6a,	// (0x00023a29) text_primary

0x1c79,	// (0x00023a38) text_primary_small

0x1c88,	// (0x00023a47) text_secondary

0x1c97,	// (0x00023a56) text_title

0x3281,	// (0x00025040) bg_passive_tab_pane_g1_cp3_srt

0x19b0,	// (0x0002376f) bg_passive_tab_pane_g2_cp3_srt

0x3278,	// (0x00025037) bg_passive_tab_pane_g3_cp3_srt

0x0d39,	// (0x00022af8) bg_active_tab_pane_cp3_srt_ParamLimits

0x0d39,	// (0x00022af8) bg_active_tab_pane_cp3_srt

0x31b7,	// (0x00024f76) tabs_4_active_pane_srt_g1

0xd542,	// (0x0002f301) tabs_4_active_pane_srt_t1_ParamLimits

0xd542,	// (0x0002f301) tabs_4_active_pane_srt_t1

0x3281,	// (0x00025040) bg_active_tab_pane_g1_cp3_copy1

0x19b0,	// (0x0002376f) bg_active_tab_pane_g2_cp3_copy1

0x3278,	// (0x00025037) bg_active_tab_pane_g3_cp3_copy1

0x0d4f,	// (0x00022b0e) tabs_2_long_active_pane_srt_ParamLimits

0x0d4f,	// (0x00022b0e) tabs_2_long_active_pane_srt

0x0d4f,	// (0x00022b0e) tabs_2_long_passive_pane_srt_ParamLimits

0x0d4f,	// (0x00022b0e) tabs_2_long_passive_pane_srt

0x1488,	// (0x00023247) bg_passive_tab_pane_cp4_srt_ParamLimits

0x1488,	// (0x00023247) bg_passive_tab_pane_cp4_srt

0x313d,	// (0x00024efc) bg_passive_tab_pane_g1_cp4_srt

0x19b0,	// (0x0002376f) bg_passive_tab_pane_g2_cp4_srt

0x3134,	// (0x00024ef3) bg_passive_tab_pane_g3_cp4_srt

0x0d4f,	// (0x00022b0e) bg_active_tab_pane_cp4_srt_ParamLimits

0x0d4f,	// (0x00022b0e) bg_active_tab_pane_cp4_srt

0xda52,	// (0x0002f811) tabs_2_long_active_pane_srt_t1_ParamLimits

0xda52,	// (0x0002f811) tabs_2_long_active_pane_srt_t1

0x313d,	// (0x00024efc) bg_active_tab_pane_g1_cp4_srt

0x19b0,	// (0x0002376f) bg_active_tab_pane_g2_cp4_srt

0x3134,	// (0x00024ef3) bg_active_tab_pane_g3_cp4_srt

0x0d39,	// (0x00022af8) tabs_3_long_active_pane_srt_ParamLimits

0x0d39,	// (0x00022af8) tabs_3_long_active_pane_srt

0x0d39,	// (0x00022af8) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0d39,	// (0x00022af8) tabs_3_long_passive_pane_cp_srt

0x0d39,	// (0x00022af8) tabs_3_long_passive_pane_srt_ParamLimits

0x0d39,	// (0x00022af8) tabs_3_long_passive_pane_srt

0x1488,	// (0x00023247) bg_passive_tab_pane_cp5_srt_ParamLimits

0x1488,	// (0x00023247) bg_passive_tab_pane_cp5_srt

0x1a00,	// (0x000237bf) bg_passive_tab_pane_g1_cp5_srt

0x19b0,	// (0x0002376f) bg_passive_tab_pane_g2_cp5_srt

0x19f7,	// (0x000237b6) bg_passive_tab_pane_g3_cp5_srt

0x0d4f,	// (0x00022b0e) bg_active_tab_pane_cp5_srt_ParamLimits

0x0d4f,	// (0x00022b0e) bg_active_tab_pane_cp5_srt

0xda69,	// (0x0002f828) tabs_3_long_active_pane_srt_t1_ParamLimits

0xda69,	// (0x0002f828) tabs_3_long_active_pane_srt_t1

0x1a00,	// (0x000237bf) bg_active_tab_pane_g1_cp5_srt

0x19b0,	// (0x0002376f) bg_active_tab_pane_g2_cp5_srt

0x19f7,	// (0x000237b6) bg_active_tab_pane_g3_cp5_srt

0x3126,	// (0x00024ee5) navi_text_pane_srt_t1

0x311e,	// (0x00024edd) navi_icon_pane_srt_g1

0x1daf,	// (0x00023b6e) midp_editing_number_pane_srt

0x1ca6,	// (0x00023a65) midp_ticker_pane_srt

0x1db7,	// (0x00023b76) midp_ticker_pane_srt_g1

0x1dbf,	// (0x00023b7e) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x0003150c) midp_ticker_pane_srt_g

0x1dc7,	// (0x00023b86) midp_ticker_pane_srt_t1

0x310f,	// (0x00024ece) midp_editing_number_pane_t1_copy1

0xdd07,	// (0x0002fac6) listscroll_midp_pane

0xdd07,	// (0x0002fac6) midp_form_pane

0x1cae,	// (0x00023a6d) midp_info_popup_window_ParamLimits

0x1cae,	// (0x00023a6d) midp_info_popup_window

0x13fc,	// (0x000231bb) bg_popup_sub_pane_cp50_ParamLimits

0x13fc,	// (0x000231bb) bg_popup_sub_pane_cp50

0x23f8,	// (0x000241b7) listscroll_midp_info_pane_ParamLimits

0x23f8,	// (0x000241b7) listscroll_midp_info_pane

0x23e0,	// (0x0002419f) listscroll_form_midp_pane_ParamLimits

0x23e0,	// (0x0002419f) listscroll_form_midp_pane

0x23ec,	// (0x000241ab) scroll_bar_cp050

0xe4c5,	// (0x00030284) list_midp_pane

0x3a62,	// (0x00025821) signal_pane_g2_cp

0x2312,	// (0x000240d1) listscroll_midp_info_pane_t1_ParamLimits

0x2312,	// (0x000240d1) listscroll_midp_info_pane_t1

0x232a,	// (0x000240e9) listscroll_midp_info_pane_t2_ParamLimits

0x232a,	// (0x000240e9) listscroll_midp_info_pane_t2

0x2368,	// (0x00024127) listscroll_midp_info_pane_t3_ParamLimits

0x2368,	// (0x00024127) listscroll_midp_info_pane_t3

0x23a2,	// (0x00024161) listscroll_midp_info_pane_t4_ParamLimits

0x23a2,	// (0x00024161) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x000315bf) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x000315bf) listscroll_midp_info_pane_t

0x1451,	// (0x00023210) scroll_pane_cp21

0x22b6,	// (0x00024075) form_midp_field_choice_group_pane

0x22bf,	// (0x0002407e) form_midp_field_text_pane

0x22f8,	// (0x000240b7) form_midp_field_time_pane

0x2300,	// (0x000240bf) form_midp_gauge_slider_pane

0x2309,	// (0x000240c8) form_midp_gauge_wait_pane

0x0ceb,	// (0x00022aaa) form_midp_image_pane

0xdd6b,	// (0x0002fb2a) list_single_midp_pane_ParamLimits

0xdd6b,	// (0x0002fb2a) list_single_midp_pane

0x2284,	// (0x00024043) form_midp_field_text_pane_t1

0x20da,	// (0x00023e99) input_focus_pane_cp050

0x22a5,	// (0x00024064) list_midp_form_text_pane

0x2253,	// (0x00024012) form_midp_field_choice_group_pane_t1

0x2261,	// (0x00024020) input_focus_pane_cp051

0x2275,	// (0x00024034) list_midp_choice_pane

0x0ceb,	// (0x00022aaa) status_idle_pane

0x2237,	// (0x00023ff6) form_midp_field_time_pane_t1

0x0c69,	// (0x00022a28) wait_anim_pane_g2_copy1

0x2245,	// (0x00024004) form_midp_field_time_pane_t2

0x0001,

0x1d19,	// (0x00023ad8) aid_navinavi_width_2_pane

0xf7fb,	// (0x000315ba) form_midp_field_time_pane_t

0x0ceb,	// (0x00022aaa) input_focus_pane_cp052

0x0ceb,	// (0x00022aaa) bg_input_focus_pane_cp040

0x2213,	// (0x00023fd2) form_midp_gauge_slider_pane_t1

0x2221,	// (0x00023fe0) form_midp_gauge_slider_pane_t2

0xe4a9,	// (0x00030268) form_midp_gauge_slider_pane_t3

0xe4b7,	// (0x00030276) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x000315b1) form_midp_gauge_slider_pane_t

0x222f,	// (0x00023fee) form_midp_slider_pane

0x0d4f,	// (0x00022b0e) bg_input_focus_pane_cp041_ParamLimits

0x0d4f,	// (0x00022b0e) bg_input_focus_pane_cp041

0x21e3,	// (0x00023fa2) form_midp_gauge_wait_pane_t1_ParamLimits

0x21e3,	// (0x00023fa2) form_midp_gauge_wait_pane_t1

0x21f5,	// (0x00023fb4) form_midp_gauge_wait_pane_t2_ParamLimits

0x21f5,	// (0x00023fb4) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x000315ac) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x000315ac) form_midp_gauge_wait_pane_t

0x2207,	// (0x00023fc6) form_midp_wait_pane_ParamLimits

0x2207,	// (0x00023fc6) form_midp_wait_pane

0x21ad,	// (0x00023f6c) form_midp_image_pane_g1

0x21b6,	// (0x00023f75) form_midp_image_pane_t1

0x21c5,	// (0x00023f84) form_midp_image_pane_t2

0x21d4,	// (0x00023f93) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x000315a5) form_midp_image_pane_t

0x21a4,	// (0x00023f63) list_single_midp_pane_g1

0x9f33,	// (0x0002bcf2) list_single_midp_pane_t1

0x2190,	// (0x00023f4f) list_midp_form_item_pane_ParamLimits

0x2190,	// (0x00023f4f) list_midp_form_item_pane

0x1cc1,	// (0x00023a80) list_midp_form_item_pane_t1

0x1cd0,	// (0x00023a8f) midp_ticker_pane_g1

0x1cdc,	// (0x00023a9b) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x000314f2) midp_ticker_pane_g

0x1ce8,	// (0x00023aa7) midp_ticker_pane_t1

0x310f,	// (0x00024ece) midp_editing_number_pane_t1

0x320e,	// (0x00024fcd) midp_editing_number_pane

0x321a,	// (0x00024fd9) midp_ticker_pane

0x30ff,	// (0x00024ebe) ai_message_heading_pane

0x0ceb,	// (0x00022aaa) bg_popup_window_pane_cp14

0x3107,	// (0x00024ec6) listscroll_ai_message_pane

0x3089,	// (0x00024e48) ai_message_heading_pane_g1_ParamLimits

0x3089,	// (0x00024e48) ai_message_heading_pane_g1

0x3095,	// (0x00024e54) ai_message_heading_pane_g2_ParamLimits

0x3095,	// (0x00024e54) ai_message_heading_pane_g2

0x30a1,	// (0x00024e60) ai_message_heading_pane_g3_ParamLimits

0x30a1,	// (0x00024e60) ai_message_heading_pane_g3

0x30ad,	// (0x00024e6c) ai_message_heading_pane_g4_ParamLimits

0x30ad,	// (0x00024e6c) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x000316e6) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x000316e6) ai_message_heading_pane_g

0x30b9,	// (0x00024e78) ai_message_heading_pane_t1_ParamLimits

0x30b9,	// (0x00024e78) ai_message_heading_pane_t1

0x30d3,	// (0x00024e92) ai_message_heading_pane_t2_ParamLimits

0x30d3,	// (0x00024e92) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x000316ef) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x000316ef) ai_message_heading_pane_t

0x30e5,	// (0x00024ea4) bg_popup_heading_pane_cp1_ParamLimits

0x30e5,	// (0x00024ea4) bg_popup_heading_pane_cp1

0x3077,	// (0x00024e36) list_ai_message_pane_ParamLimits

0x3077,	// (0x00024e36) list_ai_message_pane

0x1451,	// (0x00023210) scroll_pane_cp10

0x3013,	// (0x00024dd2) list_ai_message_pane_g1

0x301b,	// (0x00024dda) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x000316c3) list_ai_message_pane_g

0x3023,	// (0x00024de2) list_ai_message_pane_t1_ParamLimits

0x3023,	// (0x00024de2) list_ai_message_pane_t1

0x3038,	// (0x00024df7) list_ai_message_pane_t2_ParamLimits

0x3038,	// (0x00024df7) list_ai_message_pane_t2

0x304d,	// (0x00024e0c) list_ai_message_pane_t3_ParamLimits

0x304d,	// (0x00024e0c) list_ai_message_pane_t3

0x3062,	// (0x00024e21) list_ai_message_pane_t4_ParamLimits

0x3062,	// (0x00024e21) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x000316c8) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x000316c8) list_ai_message_pane_t

0x3001,	// (0x00024dc0) cell_ai_soft_ind_pane_ParamLimits

0x3001,	// (0x00024dc0) cell_ai_soft_ind_pane

0x1cfa,	// (0x00023ab9) cell_ai_soft_ind_pane_g1_ParamLimits

0x1cfa,	// (0x00023ab9) cell_ai_soft_ind_pane_g1

0x0ceb,	// (0x00022aaa) grid_highlight_cp1

0x1d07,	// (0x00023ac6) text_secondary_cp56_ParamLimits

0x1d07,	// (0x00023ac6) text_secondary_cp56

0x2fd6,	// (0x00024d95) example_general_pane_ParamLimits

0x2fd6,	// (0x00024d95) example_general_pane

0x2fe2,	// (0x00024da1) example_parent_pane_g1_ParamLimits

0x2fe2,	// (0x00024da1) example_parent_pane_g1

0x2fee,	// (0x00024dad) example_parent_pane_t1_ParamLimits

0x2fee,	// (0x00024dad) example_parent_pane_t1

0xca32,	// (0x0002e7f1) popup_preview_text_window_ParamLimits

0xca32,	// (0x0002e7f1) popup_preview_text_window

0x1beb,	// (0x000239aa) list_single_pane_cp2_g4

0x0f50,	// (0x00022d0f) bg_popup_preview_window_pane_ParamLimits

0x0f50,	// (0x00022d0f) bg_popup_preview_window_pane

0x2d8d,	// (0x00024b4c) popup_preview_text_window_t1_ParamLimits

0x2d8d,	// (0x00024b4c) popup_preview_text_window_t1

0x2dab,	// (0x00024b6a) popup_preview_text_window_t2_ParamLimits

0x2dab,	// (0x00024b6a) popup_preview_text_window_t2

0x2df4,	// (0x00024bb3) popup_preview_text_window_t3_ParamLimits

0x2df4,	// (0x00024bb3) popup_preview_text_window_t3

0x2e39,	// (0x00024bf8) popup_preview_text_window_t4_ParamLimits

0x2e39,	// (0x00024bf8) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x00031697) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x00031697) popup_preview_text_window_t

0x2eb7,	// (0x00024c76) scroll_pane_cp11

0x2032,	// (0x00023df1) bg_popup_preview_window_pane_g1

0x2d4d,	// (0x00024b0c) bg_popup_preview_window_pane_g2

0x2d55,	// (0x00024b14) bg_popup_preview_window_pane_g3

0x2d5d,	// (0x00024b1c) bg_popup_preview_window_pane_g4

0x2d65,	// (0x00024b24) bg_popup_preview_window_pane_g5

0x2d6d,	// (0x00024b2c) bg_popup_preview_window_pane_g6

0x2d75,	// (0x00024b34) bg_popup_preview_window_pane_g7

0x2d7d,	// (0x00024b3c) bg_popup_preview_window_pane_g8

0x5ac2,	// (0x00027881) aid_popup_width_pane

0xc9b4,	// (0x0002e773) popup_midp_note_alarm_window_ParamLimits

0xc9b4,	// (0x0002e773) popup_midp_note_alarm_window

0x12e3,	// (0x000230a2) data_form_pane_ParamLimits

0xd91a,	// (0x0002f6d9) form_field_data_pane_g1

0xd924,	// (0x0002f6e3) form_field_data_pane_t1_ParamLimits

0x12ef,	// (0x000230ae) input_focus_pane_ParamLimits

0x12fd,	// (0x000230bc) data_form_wide_pane_ParamLimits

0x9c85,	// (0x0002ba44) form_field_data_wide_pane_g1

0x9c91,	// (0x0002ba50) form_field_data_wide_pane_t1_ParamLimits

0x1115,	// (0x00022ed4) input_focus_pane_cp6_ParamLimits

0xda30,	// (0x0002f7ef) input_popup_find_pane_g1_ParamLimits

0xda30,	// (0x0002f7ef) input_popup_find_pane_g1

0x6217,	// (0x00027fd6) aid_navi_side_left_pane

0x6227,	// (0x00027fe6) aid_navi_side_right_pane

0x286a,	// (0x00024629) bg_popup_window_pane_cp30_ParamLimits

0x286a,	// (0x00024629) bg_popup_window_pane_cp30

0x28e4,	// (0x000246a3) popup_midp_note_alarm_window_g1_ParamLimits

0x28e4,	// (0x000246a3) popup_midp_note_alarm_window_g1

0x2914,	// (0x000246d3) popup_midp_note_alarm_window_t1_ParamLimits

0x2914,	// (0x000246d3) popup_midp_note_alarm_window_t1

0x29b5,	// (0x00024774) popup_midp_note_alarm_window_t2_ParamLimits

0x29b5,	// (0x00024774) popup_midp_note_alarm_window_t2

0x2a63,	// (0x00024822) popup_midp_note_alarm_window_t3_ParamLimits

0x2a63,	// (0x00024822) popup_midp_note_alarm_window_t3

0x2a8b,	// (0x0002484a) popup_midp_note_alarm_window_t4_ParamLimits

0x2a8b,	// (0x0002484a) popup_midp_note_alarm_window_t4

0x2aab,	// (0x0002486a) popup_midp_note_alarm_window_t5_ParamLimits

0x2aab,	// (0x0002486a) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x00031634) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x00031634) popup_midp_note_alarm_window_t

0x2b57,	// (0x00024916) wait_bar_pane_cp1_ParamLimits

0x2b57,	// (0x00024916) wait_bar_pane_cp1

0x0ceb,	// (0x00022aaa) wait_anim_pane_copy1

0x0ceb,	// (0x00022aaa) wait_border_pane_copy1

0x25b0,	// (0x0002436f) wait_border_pane_g1_copy1

0x9cab,	// (0x0002ba6a) form_field_popup_pane_g1

0xd93c,	// (0x0002f6fb) form_field_popup_pane_t1_ParamLimits

0x12ef,	// (0x000230ae) input_focus_pane_cp7_ParamLimits

0x12e3,	// (0x000230a2) list_form_pane_ParamLimits

0x9ccb,	// (0x0002ba8a) form_field_popup_wide_pane_g1

0x9cd3,	// (0x0002ba92) form_field_popup_wide_pane_t1_ParamLimits

0x12ef,	// (0x000230ae) input_focus_pane_cp8_ParamLimits

0x1329,	// (0x000230e8) list_form_wide_pane_ParamLimits

0x32a9,	// (0x00025068) aid_size_cell_graphic_pane

0xd9b9,	// (0x0002f778) data_form_pane_t1_ParamLimits

0xdd81,	// (0x0002fb40) data_form_wide_pane_t1_ParamLimits

0xe199,	// (0x0002ff58) bg_status_flat_pane

0xd49f,	// (0x0002f25e) title_pane_t1_ParamLimits

0x0d01,	// (0x00022ac0) title_pane_t2_ParamLimits

0x0d27,	// (0x00022ae6) title_pane_t3_ParamLimits

0xf532,	// (0x000312f1) title_pane_t_ParamLimits

0xdb38,	// (0x0002f8f7) level_1_signal_ParamLimits

0xdb4a,	// (0x0002f909) level_2_signal_ParamLimits

0xdb5d,	// (0x0002f91c) level_3_signal_ParamLimits

0xdb70,	// (0x0002f92f) level_4_signal_ParamLimits

0xdb83,	// (0x0002f942) level_5_signal_ParamLimits

0xdb96,	// (0x0002f955) level_6_signal_ParamLimits

0xdba9,	// (0x0002f968) level_7_signal_ParamLimits

0xdb38,	// (0x0002f8f7) level_1_battery_ParamLimits

0xdb4a,	// (0x0002f909) level_2_battery_ParamLimits

0xdb5d,	// (0x0002f91c) level_3_battery_ParamLimits

0xdb70,	// (0x0002f92f) level_4_battery_ParamLimits

0xdb83,	// (0x0002f942) level_5_battery_ParamLimits

0xdb96,	// (0x0002f955) level_6_battery_ParamLimits

0xdba9,	// (0x0002f968) level_7_battery_ParamLimits

0x2799,	// (0x00024558) bg_status_flat_pane_g1

0x27a1,	// (0x00024560) bg_status_flat_pane_g2

0x27a9,	// (0x00024568) bg_status_flat_pane_g3

0x27b1,	// (0x00024570) bg_status_flat_pane_g4

0x27b9,	// (0x00024578) bg_status_flat_pane_g5

0x27c1,	// (0x00024580) bg_status_flat_pane_g6

0x27c9,	// (0x00024588) bg_status_flat_pane_g7

0xd52c,	// (0x0002f2eb) tabs_3_active_pane_t1_ParamLimits

0xd52c,	// (0x0002f2eb) tabs_3_passive_pane_t1_ParamLimits

0xd542,	// (0x0002f301) tabs_4_active_pane_t1_ParamLimits

0xd542,	// (0x0002f301) tabs_4_1_passive_pane_t1_ParamLimits

0xda3c,	// (0x0002f7fb) tabs_2_active_pane_t1_ParamLimits

0xda3c,	// (0x0002f7fb) tabs_2_passive_pane_t1_ParamLimits

0x0d4f,	// (0x00022b0e) bg_active_tab_pane_cp4_ParamLimits

0xda52,	// (0x0002f811) tabs_2_long_active_pane_t1_ParamLimits

0x1488,	// (0x00023247) bg_passive_tab_pane_cp4_ParamLimits

0x7239,	// (0x00028ff8) list_single_midp_graphic_pane_t1_ParamLimits

0x0d4f,	// (0x00022b0e) bg_active_tab_pane_cp5_ParamLimits

0xda69,	// (0x0002f828) tabs_3_long_active_pane_t1_ParamLimits

0x1488,	// (0x00023247) bg_passive_tab_pane_cp5_ParamLimits

0x7239,	// (0x00028ff8) list_single_midp_graphic_pane_t1

0xe199,	// (0x0002ff58) bg_status_flat_pane_ParamLimits

0x1f11,	// (0x00023cd0) indicator_pane_cp2_ParamLimits

0x1f11,	// (0x00023cd0) indicator_pane_cp2

0xe2ff,	// (0x000300be) navi_pane_srt_ParamLimits

0xe2ff,	// (0x000300be) navi_pane_srt

0x1f39,	// (0x00023cf8) popup_clock_digital_analogue_window_cp1

0x0d93,	// (0x00022b52) indicator_pane_t1

0x1ca6,	// (0x00023a65) copy_highlight_pane

0x1ca6,	// (0x00023a65) cursor_graphics_pane

0x1ca6,	// (0x00023a65) graphic_within_text_pane

0x1ca6,	// (0x00023a65) link_highlight_pane

0x2e7a,	// (0x00024c39) popup_preview_text_window_t5_ParamLimits

0x2e7a,	// (0x00024c39) popup_preview_text_window_t5

0x1d21,	// (0x00023ae0) cursor_digital_pane

0x1d21,	// (0x00023ae0) cursor_primary_pane

0x1d32,	// (0x00023af1) cursor_primary_small_pane

0x1d3a,	// (0x00023af9) cursor_secondary_pane

0x1d42,	// (0x00023b01) cursor_title_pane

0x1d21,	// (0x00023ae0) link_highlight_digital_pane

0x1d29,	// (0x00023ae8) link_highlight_primary_pane

0x1d32,	// (0x00023af1) link_highlight_primary_small_pane

0x1d3a,	// (0x00023af9) link_highlight_secondary_pane

0x1d42,	// (0x00023b01) link_highlight_title_pane

0x1d21,	// (0x00023ae0) copy_highlight_digital_pane

0x1d21,	// (0x00023ae0) copy_highlight_primary_pane

0x1d32,	// (0x00023af1) copy_highlight_primary_small_pane

0x1d3a,	// (0x00023af9) copy_highlight_secondary_pane

0x1d42,	// (0x00023b01) copy_highlight_title_pane

0x1d3a,	// (0x00023af9) graphic_text_digital_pane

0x2819,	// (0x000245d8) graphic_text_primary_pane

0x2822,	// (0x000245e1) graphic_text_primary_small_pane

0x1d32,	// (0x00023af1) graphic_text_secondary_pane

0x1d21,	// (0x00023ae0) graphic_text_title_pane

0xdffe,	// (0x0002fdbd) cursor_primary_pane_g1

0x280b,	// (0x000245ca) cursor_text_primary_t1

0xe501,	// (0x000302c0) cursor_primary_small_pane_g1

0x27fd,	// (0x000245bc) cursor_text_primary_small_t1

0xe4f7,	// (0x000302b6) cursor_primary_small_pane_g1_copy1

0x27ef,	// (0x000245ae) cursor_text_primary_small_t1_copy1

0x27e1,	// (0x000245a0) cursor_text_title_t1

0xe4ed,	// (0x000302ac) cursor_title_pane_g1

0xdffe,	// (0x0002fdbd) cursor_digital_pane_g1

0x1d4a,	// (0x00023b09) cursor_text_digital_t1

0x1d58,	// (0x00023b17) link_highlight_primary_pane_g1

0x278a,	// (0x00024549) link_highlight_primary_pane_t1

0x1d58,	// (0x00023b17) link_highlight_primary_small_pane_g1

0x1d60,	// (0x00023b1f) link_highlight_primary_small_pane_t1

0x1d6f,	// (0x00023b2e) link_highlight_secondary_pane_g1

0x1d77,	// (0x00023b36) link_highlight_secondary_pane_t1

0x26ef,	// (0x000244ae) link_highlight_title_pane_g1

0x2706,	// (0x000244c5) link_highlight_title_pane_t1

0x26ef,	// (0x000244ae) link_highlight_digital_pane_g1

0x26f7,	// (0x000244b6) link_highlight_digital_pane_t1

0x25cb,	// (0x0002438a) copy_highlight_primary_pane_g1

0x25f1,	// (0x000243b0) copy_highlight_primary_pane_t1

0x25cb,	// (0x0002438a) copy_highlight_primary_small_pane_g1

0x25e2,	// (0x000243a1) copy_highlight_primary_small_pane_t1

0x1d86,	// (0x00023b45) copy_highlight_secondary_pane_g1

0x1d8e,	// (0x00023b4d) copy_highlight_secondary_pane_t1

0x25cb,	// (0x0002438a) copy_highlight_title_pane_g1

0x25d3,	// (0x00024392) copy_highlight_title_pane_t1

0x25cb,	// (0x0002438a) copy_highlight_digital_pane_g1

0x33a4,	// (0x00025163) copy_highlight_digital_pane_t1

0x32f8,	// (0x000250b7) graphic_text_primary_pane_g1

0x3388,	// (0x00025147) graphic_text_primary_pane_t1

0x3396,	// (0x00025155) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x00031763) graphic_text_primary_pane_t

0x3364,	// (0x00025123) graphic_text_primary_small_pane_g1

0x336c,	// (0x0002512b) graphic_text_primary_small_pane_t1

0x337a,	// (0x00025139) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x0003175e) graphic_text_primary_small_pane_t

0x3340,	// (0x000250ff) graphic_text_secondary_pane_g1

0x3348,	// (0x00025107) graphic_text_secondary_pane_t1

0x3356,	// (0x00025115) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x00031759) graphic_text_secondary_pane_t

0x331c,	// (0x000250db) graphic_text_title_pane_g1

0x3324,	// (0x000250e3) graphic_text_title_pane_t1

0x3332,	// (0x000250f1) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x00031754) graphic_text_title_pane_t

0x32f8,	// (0x000250b7) graphic_text_digital_pane_g1

0x3300,	// (0x000250bf) graphic_text_digital_pane_t1

0x330e,	// (0x000250cd) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x0003174f) graphic_text_digital_pane_t

0x0d4f,	// (0x00022b0e) navi_icon_pane_srt_ParamLimits

0x0d4f,	// (0x00022b0e) navi_icon_pane_srt

0x0ceb,	// (0x00022aaa) navi_midp_pane_srt

0x0ceb,	// (0x00022aaa) navi_navi_pane_srt

0x0d4f,	// (0x00022b0e) navi_text_pane_srt_ParamLimits

0x0d4f,	// (0x00022b0e) navi_text_pane_srt

0x3182,	// (0x00024f41) navi_navi_icon_text_pane_srt

0x319c,	// (0x00024f5b) navi_navi_pane_srt_g1_ParamLimits

0x319c,	// (0x00024f5b) navi_navi_pane_srt_g1

0x318a,	// (0x00024f49) navi_navi_pane_srt_g2_ParamLimits

0x318a,	// (0x00024f49) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x0003174a) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x0003174a) navi_navi_pane_srt_g

0x31ae,	// (0x00024f6d) navi_navi_tabs_pane_srt

0x3182,	// (0x00024f41) navi_navi_text_pane_srt

0x3182,	// (0x00024f41) navi_navi_volume_pane_srt

0x32e9,	// (0x000250a8) navi_navi_text_pane_srt_t1

0x797f,	// (0x0002973e) navi_navi_volume_pane_srt_g1

0x7987,	// (0x00029746) volume_small_pane_srt_ParamLimits

0x7987,	// (0x00029746) volume_small_pane_srt

0x6754,	// (0x00028513) volume_small_pane_srt_g1_ParamLimits

0x6754,	// (0x00028513) volume_small_pane_srt_g1

0x6764,	// (0x00028523) volume_small_pane_srt_g2_ParamLimits

0x6764,	// (0x00028523) volume_small_pane_srt_g2

0x6775,	// (0x00028534) volume_small_pane_srt_g3_ParamLimits

0x6775,	// (0x00028534) volume_small_pane_srt_g3

0x6786,	// (0x00028545) volume_small_pane_srt_g4_ParamLimits

0x6786,	// (0x00028545) volume_small_pane_srt_g4

0x6797,	// (0x00028556) volume_small_pane_srt_g5_ParamLimits

0x6797,	// (0x00028556) volume_small_pane_srt_g5

0x67a8,	// (0x00028567) volume_small_pane_srt_g6_ParamLimits

0x67a8,	// (0x00028567) volume_small_pane_srt_g6

0x67b9,	// (0x00028578) volume_small_pane_srt_g7_ParamLimits

0x67b9,	// (0x00028578) volume_small_pane_srt_g7

0x67ca,	// (0x00028589) volume_small_pane_srt_g8_ParamLimits

0x67ca,	// (0x00028589) volume_small_pane_srt_g8

0x67db,	// (0x0002859a) volume_small_pane_srt_g9_ParamLimits

0x67db,	// (0x0002859a) volume_small_pane_srt_g9

0x67ec,	// (0x000285ab) volume_small_pane_srt_g10_ParamLimits

0x67ec,	// (0x000285ab) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x000314f7) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x000314f7) volume_small_pane_srt_g

0x0ff9,	// (0x00022db8) query_popup_data_pane_cp2

0x32cf,	// (0x0002508e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x32cf,	// (0x0002508e) navi_navi_icon_text_pane_srt_t1

0x2819,	// (0x000245d8) navi_tabs_2_long_pane_srt

0x2819,	// (0x000245d8) navi_tabs_2_pane_srt

0x2819,	// (0x000245d8) navi_tabs_3_long_pane_srt

0x2819,	// (0x000245d8) navi_tabs_3_pane_srt

0x2819,	// (0x000245d8) navi_tabs_4_pane_srt

0x795f,	// (0x0002971e) tabs_2_active_pane_srt_ParamLimits

0x795f,	// (0x0002971e) tabs_2_active_pane_srt

0x796f,	// (0x0002972e) tabs_2_passive_pane_srt_ParamLimits

0x796f,	// (0x0002972e) tabs_2_passive_pane_srt

0x20da,	// (0x00023e99) bg_passive_tab_pane_cp1_srt_ParamLimits

0x20da,	// (0x00023e99) bg_passive_tab_pane_cp1_srt

0x31d8,	// (0x00024f97) bg_passive_tab_pane_g1_cp1_srt

0x19b0,	// (0x0002376f) bg_passive_tab_pane_g2_cp1_srt

0x31cf,	// (0x00024f8e) bg_passive_tab_pane_g3_cp1_srt

0x0d39,	// (0x00022af8) bg_active_tab_pane_cp1_srt_ParamLimits

0x0d39,	// (0x00022af8) bg_active_tab_pane_cp1_srt

0x31c7,	// (0x00024f86) tabs_2_active_pane_srt_g1

0xda3c,	// (0x0002f7fb) tabs_2_active_pane_srt_t1_ParamLimits

0xda3c,	// (0x0002f7fb) tabs_2_active_pane_srt_t1

0x31d8,	// (0x00024f97) bg_active_tab_pane_g1_cp1_srt

0x19b0,	// (0x0002376f) bg_active_tab_pane_g2_cp1_srt

0x31cf,	// (0x00024f8e) bg_active_tab_pane_g3_cp1_srt

0x792c,	// (0x000296eb) tabs_3_active_pane_srt_ParamLimits

0x792c,	// (0x000296eb) tabs_3_active_pane_srt

0x793d,	// (0x000296fc) tabs_3_passive_pane_cp_srt_ParamLimits

0x793d,	// (0x000296fc) tabs_3_passive_pane_cp_srt

0x794e,	// (0x0002970d) tabs_3_passive_pane_srt_ParamLimits

0x794e,	// (0x0002970d) tabs_3_passive_pane_srt

0x20da,	// (0x00023e99) bg_passive_tab_pane_cp2_srt_ParamLimits

0x20da,	// (0x00023e99) bg_passive_tab_pane_cp2_srt

0x1da6,	// (0x00023b65) bg_passive_tab_pane_g1_cp2_srt

0x19b0,	// (0x0002376f) bg_passive_tab_pane_g2_cp2_srt

0x1d9d,	// (0x00023b5c) bg_passive_tab_pane_g3_cp2_srt

0x0d39,	// (0x00022af8) bg_active_tab_pane_cp2_srt_ParamLimits

0x0d39,	// (0x00022af8) bg_active_tab_pane_cp2_srt

0x32bf,	// (0x0002507e) tabs_3_active_pane_srt_g1

0xd52c,	// (0x0002f2eb) tabs_3_active_pane_srt_t1_ParamLimits

0xd52c,	// (0x0002f2eb) tabs_3_active_pane_srt_t1

0x1da6,	// (0x00023b65) bg_active_tab_pane_g1_cp2_srt

0x19b0,	// (0x0002376f) bg_active_tab_pane_g2_cp2_srt

0x1d9d,	// (0x00023b5c) bg_active_tab_pane_g3_cp2_srt

0x78e4,	// (0x000296a3) tabs_4_active_pane_srt_ParamLimits

0x78e4,	// (0x000296a3) tabs_4_active_pane_srt

0x78f6,	// (0x000296b5) tabs_4_passive_pane_cp2_srt_ParamLimits

0x78f6,	// (0x000296b5) tabs_4_passive_pane_cp2_srt

0x69f9,	// (0x000287b8) aid_size_cell_toolbar

0xc724,	// (0x0002e4e3) main_idle_act_pane_ParamLimits

0x6b74,	// (0x00028933) popup_large_graphic_colour_window_ParamLimits

0xcc82,	// (0x0002ea41) popup_toolbar_window_ParamLimits

0xcc82,	// (0x0002ea41) popup_toolbar_window

0x322d,	// (0x00024fec) list_single_graphic_2heading_pane_ParamLimits

0x322d,	// (0x00024fec) list_single_graphic_2heading_pane

0x164d,	// (0x0002340c) aid_size_cell_apps_grid_lsc_pane

0x165f,	// (0x0002341e) aid_size_cell_apps_grid_prt_pane

0x1488,	// (0x00023247) bg_wml_button_pane_cp1_ParamLimits

0x1488,	// (0x00023247) bg_wml_button_pane_cp1

0x2284,	// (0x00024043) form_midp_field_text_pane_t1_ParamLimits

0x20da,	// (0x00023e99) input_focus_pane_cp050_ParamLimits

0x22a5,	// (0x00024064) list_midp_form_text_pane_ParamLimits

0x2261,	// (0x00024020) input_focus_pane_cp051_ParamLimits

0x2275,	// (0x00024034) list_midp_choice_pane_ParamLimits

0x215e,	// (0x00023f1d) list_single_2graphic_pane_cp3_ParamLimits

0x215e,	// (0x00023f1d) list_single_2graphic_pane_cp3

0x2171,	// (0x00023f30) list_single_midp_graphic_pane_ParamLimits

0x2171,	// (0x00023f30) list_single_midp_graphic_pane

0x5a38,	// (0x000277f7) list_single_graphic_2heading_pane_g1_ParamLimits

0x5a38,	// (0x000277f7) list_single_graphic_2heading_pane_g1

0x5a44,	// (0x00027803) list_single_graphic_2heading_pane_g4_ParamLimits

0x5a44,	// (0x00027803) list_single_graphic_2heading_pane_g4

0x5a50,	// (0x0002780f) list_single_graphic_2heading_pane_g5_ParamLimits

0x5a50,	// (0x0002780f) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x0003154a) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x0003154a) list_single_graphic_2heading_pane_g

0x5a5c,	// (0x0002781b) list_single_graphic_2heading_pane_t1_ParamLimits

0x5a5c,	// (0x0002781b) list_single_graphic_2heading_pane_t1

0x5a70,	// (0x0002782f) list_single_graphic_2heading_pane_t2_ParamLimits

0x5a70,	// (0x0002782f) list_single_graphic_2heading_pane_t2

0x5a8a,	// (0x00027849) list_single_graphic_2heading_pane_t3_ParamLimits

0x5a8a,	// (0x00027849) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x00031551) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x00031551) list_single_graphic_2heading_pane_t

0x1f7c,	// (0x00023d3b) bg_popup_sub_pane_cp2

0x1fa2,	// (0x00023d61) grid_toobar_pane

0x71b5,	// (0x00028f74) cell_toolbar_pane_ParamLimits

0x71b5,	// (0x00028f74) cell_toolbar_pane

0x1fd8,	// (0x00023d97) cell_toolbar_pane_g1_ParamLimits

0x1fd8,	// (0x00023d97) cell_toolbar_pane_g1

0x1fea,	// (0x00023da9) cell_toolbar_pane_g2_ParamLimits

0x1fea,	// (0x00023da9) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x0003155f) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x0003155f) cell_toolbar_pane_g

0x200c,	// (0x00023dcb) grid_highlight_pane_cp2_ParamLimits

0x200c,	// (0x00023dcb) grid_highlight_pane_cp2

0x2026,	// (0x00023de5) toolbar_button_pane

0x2032,	// (0x00023df1) toolbar_button_pane_g1

0x2042,	// (0x00023e01) toolbar_button_pane_g2

0x203a,	// (0x00023df9) toolbar_button_pane_g3

0x2052,	// (0x00023e11) toolbar_button_pane_g4

0x204a,	// (0x00023e09) toolbar_button_pane_g5

0x205a,	// (0x00023e19) toolbar_button_pane_g6

0x2062,	// (0x00023e21) toolbar_button_pane_g7

0x2072,	// (0x00023e31) toolbar_button_pane_g8

0x206a,	// (0x00023e29) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x00031564) toolbar_button_pane_g

0x71e4,	// (0x00028fa3) list_single_2graphic_pane_g1_cp3_ParamLimits

0x71e4,	// (0x00028fa3) list_single_2graphic_pane_g1_cp3

0xccc4,	// (0x0002ea83) list_single_2graphic_pane_g2_cp3_ParamLimits

0xccc4,	// (0x0002ea83) list_single_2graphic_pane_g2_cp3

0x71ff,	// (0x00028fbe) list_single_2graphic_pane_g3_cp3

0x7207,	// (0x00028fc6) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7207,	// (0x00028fc6) list_single_2graphic_pane_g4_cp3

0x7213,	// (0x00028fd2) list_single_2graphic_pane_t1_cp3_ParamLimits

0x7213,	// (0x00028fd2) list_single_2graphic_pane_t1_cp3

0x722d,	// (0x00028fec) list_single_midp_graphic_pane_g2_ParamLimits

0x722d,	// (0x00028fec) list_single_midp_graphic_pane_g2

0x6a01,	// (0x000287c0) aid_zoom_text_primary

0x5a30,	// (0x000277ef) aid_zoom_text_secondary

0xe038,	// (0x0002fdf7) status_small_pane_g7_ParamLimits

0xe038,	// (0x0002fdf7) status_small_pane_g7

0xe05b,	// (0x0002fe1a) status_small_pane_t1_ParamLimits

0xd474,	// (0x0002f233) title_pane_g2

0x0003,

0xf529,	// (0x000312e8) title_pane_g

0xd712,	// (0x0002f4d1) aid_size_cell_colour_1_pane_ParamLimits

0xd712,	// (0x0002f4d1) aid_size_cell_colour_1_pane

0xd726,	// (0x0002f4e5) aid_size_cell_colour_2_pane_ParamLimits

0xd726,	// (0x0002f4e5) aid_size_cell_colour_2_pane

0xd73a,	// (0x0002f4f9) aid_size_cell_colour_3_pane_ParamLimits

0xd73a,	// (0x0002f4f9) aid_size_cell_colour_3_pane

0xd74e,	// (0x0002f50d) aid_size_cell_colour_4_pane_ParamLimits

0xd74e,	// (0x0002f50d) aid_size_cell_colour_4_pane

0x6179,	// (0x00027f38) title_pane_stacon_g1_ParamLimits

0x6179,	// (0x00027f38) title_pane_stacon_g1

0x2648,	// (0x00024407) popup_note_wait_window_g3_ParamLimits

0x2648,	// (0x00024407) popup_note_wait_window_g3

0x26be,	// (0x0002447d) popup_note_wait_window_t5_ParamLimits

0x26be,	// (0x0002447d) popup_note_wait_window_t5

0x0ceb,	// (0x00022aaa) main_feb_china_hwr_fs_writing_pane

0xc785,	// (0x0002e544) popup_feb_china_hwr_fs_window_ParamLimits

0xc785,	// (0x0002e544) popup_feb_china_hwr_fs_window

0xccd5,	// (0x0002ea94) aid_size_cell_hwr_fs_ParamLimits

0xccd5,	// (0x0002ea94) aid_size_cell_hwr_fs

0x20da,	// (0x00023e99) bg_popup_sub_pane_cp3_ParamLimits

0x20da,	// (0x00023e99) bg_popup_sub_pane_cp3

0xccea,	// (0x0002eaa9) grid_hwr_fs_pane_ParamLimits

0xccea,	// (0x0002eaa9) grid_hwr_fs_pane

0x7278,	// (0x00029037) linegrid_hwr_fs_pane_ParamLimits

0x7278,	// (0x00029037) linegrid_hwr_fs_pane

0xcd02,	// (0x0002eac1) cell_hwr_fs_pane_ParamLimits

0xcd02,	// (0x0002eac1) cell_hwr_fs_pane

0x20e6,	// (0x00023ea5) linegrid_hwr_fs_pane_g1_ParamLimits

0x20e6,	// (0x00023ea5) linegrid_hwr_fs_pane_g1

0xe47d,	// (0x0003023c) linegrid_hwr_fs_pane_g2_ParamLimits

0xe47d,	// (0x0003023c) linegrid_hwr_fs_pane_g2

0x20f2,	// (0x00023eb1) linegrid_hwr_fs_pane_g3_ParamLimits

0x20f2,	// (0x00023eb1) linegrid_hwr_fs_pane_g3

0x72b8,	// (0x00029077) linegrid_hwr_fs_pane_g4_ParamLimits

0x72b8,	// (0x00029077) linegrid_hwr_fs_pane_g4

0x72d2,	// (0x00029091) linegrid_hwr_fs_pane_g5_ParamLimits

0x72d2,	// (0x00029091) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x0003158a) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x0003158a) linegrid_hwr_fs_pane_g

0x20fe,	// (0x00023ebd) cell_hwr_fs_pane_g1_ParamLimits

0x20fe,	// (0x00023ebd) cell_hwr_fs_pane_g1

0x1f4a,	// (0x00023d09) cell_hwr_fs_pane_g2_ParamLimits

0x1f4a,	// (0x00023d09) cell_hwr_fs_pane_g2

0xe48f,	// (0x0003024e) cell_hwr_fs_pane_g3_ParamLimits

0xe48f,	// (0x0003024e) cell_hwr_fs_pane_g3

0xe49c,	// (0x0003025b) cell_hwr_fs_pane_g4_ParamLimits

0xe49c,	// (0x0003025b) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x00031595) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x00031595) cell_hwr_fs_pane_g

0xcd22,	// (0x0002eae1) cell_hwr_fs_pane_t1

0x0ceb,	// (0x00022aaa) grid_highlight_pane_cp6

0x0ceb,	// (0x00022aaa) main_idle_act2_pane

0x1438,	// (0x000231f7) aid_inside_area_popup_secondary

0xe521,	// (0x000302e0) aid_inside_area_window_primary_ParamLimits

0xe521,	// (0x000302e0) aid_inside_area_window_primary

0x33b3,	// (0x00025172) ai2_news_ticker_pane

0x33bb,	// (0x0002517a) aid_size_cell_ai1_link_ParamLimits

0x33bb,	// (0x0002517a) aid_size_cell_ai1_link

0xe879,	// (0x00030638) popup_ai2_data_window_ParamLimits

0xe879,	// (0x00030638) popup_ai2_data_window

0x33d5,	// (0x00025194) popup_ai2_link_window_ParamLimits

0x33d5,	// (0x00025194) popup_ai2_link_window

0x20da,	// (0x00023e99) bg_popup_sub_pane_cp4_ParamLimits

0x20da,	// (0x00023e99) bg_popup_sub_pane_cp4

0x33e9,	// (0x000251a8) grid_ai2_link_pane_ParamLimits

0x33e9,	// (0x000251a8) grid_ai2_link_pane

0x3400,	// (0x000251bf) popup_ai2_link_window_g1_ParamLimits

0x3400,	// (0x000251bf) popup_ai2_link_window_g1

0x340c,	// (0x000251cb) popup_ai2_link_window_g2_ParamLimits

0x340c,	// (0x000251cb) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x00031768) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x00031768) popup_ai2_link_window_g

0x341b,	// (0x000251da) ai2_mp_button_pane

0x3423,	// (0x000251e2) ai2_mp_volume_pane

0x2261,	// (0x00024020) bg_popup_sub_pane_cp5_ParamLimits

0x2261,	// (0x00024020) bg_popup_sub_pane_cp5

0x342b,	// (0x000251ea) heading_ai2_gene_pane_ParamLimits

0x342b,	// (0x000251ea) heading_ai2_gene_pane

0x3437,	// (0x000251f6) list_ai2_gene_pane_ParamLimits

0x3437,	// (0x000251f6) list_ai2_gene_pane

0x347f,	// (0x0002523e) cell_ai2_link_pane_ParamLimits

0x347f,	// (0x0002523e) cell_ai2_link_pane

0x3495,	// (0x00025254) cell_ai2_link_pane_g1

0x0ceb,	// (0x00022aaa) grid_highlight_pane_cp7

0x79e3,	// (0x000297a2) ai2_mp_volume_pane_g1

0x353a,	// (0x000252f9) ai2_mp_volume_pane_g2

0xe8a3,	// (0x00030662) list_ai2_gene_pane_t1

0x3532,	// (0x000252f1) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x00031781) ai2_mp_volume_pane_g

0x79eb,	// (0x000297aa) volume_small_pane_cp3

0x3542,	// (0x00025301) aid_size_cell_ai2_button

0x354a,	// (0x00025309) grid_ai2_button_pane

0x3553,	// (0x00025312) cell_ai2_button_pane_ParamLimits

0x3553,	// (0x00025312) cell_ai2_button_pane

0x0c69,	// (0x00022a28) cell_ai2_button_pane_g1

0x0ceb,	// (0x00022aaa) grid_highlight_pane_cp8

0x34f2,	// (0x000252b1) ai2_gene_pane_t1_ParamLimits

0x34f2,	// (0x000252b1) ai2_gene_pane_t1

0xc70c,	// (0x0002e4cb) aid_height_parent_landscape

0x315b,	// (0x00024f1a) aid_height_set_list

0x3167,	// (0x00024f26) aid_size_parent

0x32a9,	// (0x00025068) aid_size_cell_graphic_pane_ParamLimits

0x3447,	// (0x00025206) popup_ai2_data_window_g1_ParamLimits

0x3447,	// (0x00025206) popup_ai2_data_window_g1

0x3453,	// (0x00025212) ai2_news_ticker_pane_g1

0x345b,	// (0x0002521a) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x0003176d) ai2_news_ticker_pane_g

0x3463,	// (0x00025222) ai2_news_ticker_pane_t1

0x3471,	// (0x00025230) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x00031772) ai2_news_ticker_pane_t

0x349e,	// (0x0002525d) heading_ai2_gene_pane_g1

0x34a6,	// (0x00025265) heading_ai2_gene_pane_t1_ParamLimits

0x34a6,	// (0x00025265) heading_ai2_gene_pane_t1

0x34bb,	// (0x0002527a) list_highlight_pane_cp6

0xe88d,	// (0x0003064c) ai2_gene_pane_ParamLimits

0xe88d,	// (0x0003064c) ai2_gene_pane

0xe8b1,	// (0x00030670) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x00031777) list_ai2_gene_pane_t

0x34c3,	// (0x00025282) list_highlight_pane_cp8_ParamLimits

0x34c3,	// (0x00025282) list_highlight_pane_cp8

0x34d4,	// (0x00025293) ai2_gene_pane_g1_ParamLimits

0x34d4,	// (0x00025293) ai2_gene_pane_g1

0x34e6,	// (0x000252a5) ai2_gene_pane_g2_ParamLimits

0x34e6,	// (0x000252a5) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x0003177c) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x0003177c) ai2_gene_pane_g

0x1296,	// (0x00023055) scroll_pane_cp12

0xc6cb,	// (0x0002e48a) control_pane_t3_ParamLimits

0xc6cb,	// (0x0002e48a) control_pane_t3

0xe04c,	// (0x0002fe0b) status_small_pane_g8_ParamLimits

0xe04c,	// (0x0002fe0b) status_small_pane_g8

0xc7f9,	// (0x0002e5b8) popup_find_window_ParamLimits

0xc9ec,	// (0x0002e7ab) popup_note_image_window_ParamLimits

0x9e93,	// (0x0002bc52) list_double2_graphic_pane_vc_g1_ParamLimits

0x9e93,	// (0x0002bc52) list_double2_graphic_pane_vc_g1

0x9e9f,	// (0x0002bc5e) list_double2_graphic_pane_vc_g2_ParamLimits

0x9e9f,	// (0x0002bc5e) list_double2_graphic_pane_vc_g2

0x9eab,	// (0x0002bc6a) list_double2_graphic_pane_vc_g3_ParamLimits

0x9eab,	// (0x0002bc6a) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x00031558) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x00031558) list_double2_graphic_pane_vc_g

0x974c,	// (0x0002b50b) list_double2_graphic_pane_vc_t1_ParamLimits

0x974c,	// (0x0002b50b) list_double2_graphic_pane_vc_t1

0x9734,	// (0x0002b4f3) list_single_heading_pane_vc_g1_ParamLimits

0x9734,	// (0x0002b4f3) list_single_heading_pane_vc_g1

0x9740,	// (0x0002b4ff) list_single_heading_pane_vc_g2_ParamLimits

0x9740,	// (0x0002b4ff) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00031362) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00031362) list_single_heading_pane_vc_g

0x9eb7,	// (0x0002bc76) list_single_heading_pane_vc_t1_ParamLimits

0x9eb7,	// (0x0002bc76) list_single_heading_pane_vc_t1

0x9ecd,	// (0x0002bc8c) list_single_heading_pane_vc_t2_ParamLimits

0x9ecd,	// (0x0002bc8c) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x00031579) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x00031579) list_single_heading_pane_vc_t

0x207a,	// (0x00023e39) list_setting_number_pane_vc_g1_ParamLimits

0x207a,	// (0x00023e39) list_setting_number_pane_vc_g1

0x2086,	// (0x00023e45) list_setting_number_pane_vc_g2_ParamLimits

0x2086,	// (0x00023e45) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x0003157e) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x0003157e) list_setting_number_pane_vc_g

0x9edf,	// (0x0002bc9e) list_setting_number_pane_vc_t1_ParamLimits

0x9edf,	// (0x0002bc9e) list_setting_number_pane_vc_t1

0x9ef3,	// (0x0002bcb2) list_setting_number_pane_vc_t2_ParamLimits

0x9ef3,	// (0x0002bcb2) list_setting_number_pane_vc_t2

0x9f0f,	// (0x0002bcce) list_setting_number_pane_vc_t3_ParamLimits

0x9f0f,	// (0x0002bcce) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x00031583) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x00031583) list_setting_number_pane_vc_t

0x9f27,	// (0x0002bce6) set_value_pane_vc_ParamLimits

0x9f27,	// (0x0002bce6) set_value_pane_vc

0x322d,	// (0x00024fec) list_double2_graphic_pane_vc_ParamLimits

0x322d,	// (0x00024fec) list_double2_graphic_pane_vc

0x9fc0,	// (0x0002bd7f) list_double2_large_graphic_pane_vc_ParamLimits

0x9fc0,	// (0x0002bd7f) list_double2_large_graphic_pane_vc

0x322d,	// (0x00024fec) list_double2_pane_vc_ParamLimits

0x322d,	// (0x00024fec) list_double2_pane_vc

0x322d,	// (0x00024fec) list_double_graphic_heading_pane_vc_ParamLimits

0x322d,	// (0x00024fec) list_double_graphic_heading_pane_vc

0x322d,	// (0x00024fec) list_double_graphic_pane_vc_ParamLimits

0x322d,	// (0x00024fec) list_double_graphic_pane_vc

0x322d,	// (0x00024fec) list_double_heading_pane_vc_ParamLimits

0x322d,	// (0x00024fec) list_double_heading_pane_vc

0x9fd2,	// (0x0002bd91) list_double_large_graphic_pane_vc_ParamLimits

0x9fd2,	// (0x0002bd91) list_double_large_graphic_pane_vc

0x322d,	// (0x00024fec) list_double_number_pane_vc_ParamLimits

0x322d,	// (0x00024fec) list_double_number_pane_vc

0x322d,	// (0x00024fec) list_double_pane_vc_ParamLimits

0x322d,	// (0x00024fec) list_double_pane_vc

0x322d,	// (0x00024fec) list_double_time_pane_vc_ParamLimits

0x322d,	// (0x00024fec) list_double_time_pane_vc

0x322d,	// (0x00024fec) list_setting_number_pane_vc_ParamLimits

0x322d,	// (0x00024fec) list_setting_number_pane_vc

0x322d,	// (0x00024fec) list_setting_pane_vc_ParamLimits

0x322d,	// (0x00024fec) list_setting_pane_vc

0x322d,	// (0x00024fec) list_single_graphic_heading_pane_vc_ParamLimits

0x322d,	// (0x00024fec) list_single_graphic_heading_pane_vc

0x322d,	// (0x00024fec) list_single_heading_pane_vc_ParamLimits

0x322d,	// (0x00024fec) list_single_heading_pane_vc

0x322d,	// (0x00024fec) list_single_number_heading_pane_vc_ParamLimits

0x322d,	// (0x00024fec) list_single_number_heading_pane_vc

0x9e93,	// (0x0002bc52) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x9e93,	// (0x0002bc52) list_double_graphic_heading_pane_vc_g1

0x9734,	// (0x0002b4f3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9734,	// (0x0002b4f3) list_double_graphic_heading_pane_vc_g2

0x9740,	// (0x0002b4ff) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x9740,	// (0x0002b4ff) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf59c,	// (0x0003135b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf59c,	// (0x0003135b) list_double_graphic_heading_pane_vc_g

0xa034,	// (0x0002bdf3) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xa034,	// (0x0002bdf3) list_double_graphic_heading_pane_vc_t1

0xa04a,	// (0x0002be09) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xa04a,	// (0x0002be09) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c9,	// (0x00031788) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c9,	// (0x00031788) list_double_graphic_heading_pane_vc_t

0x207a,	// (0x00023e39) list_setting_pane_vc_g1_ParamLimits

0x207a,	// (0x00023e39) list_setting_pane_vc_g1

0x2086,	// (0x00023e45) list_setting_pane_vc_g2_ParamLimits

0x2086,	// (0x00023e45) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x0003157e) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x0003157e) list_setting_pane_vc_g

0xa062,	// (0x0002be21) list_setting_pane_vc_t1_ParamLimits

0xa062,	// (0x0002be21) list_setting_pane_vc_t1

0xa076,	// (0x0002be35) list_setting_pane_vc_t2_ParamLimits

0xa076,	// (0x0002be35) list_setting_pane_vc_t2

0x0001,

0xfa0c,	// (0x000317cb) list_setting_pane_vc_t_ParamLimits

0xfa0c,	// (0x000317cb) list_setting_pane_vc_t

0x9f27,	// (0x0002bce6) set_value_pane_cp_vc_ParamLimits

0x9f27,	// (0x0002bce6) set_value_pane_cp_vc

0x9734,	// (0x0002b4f3) list_single_number_heading_pane_vc_g1_ParamLimits

0x9734,	// (0x0002b4f3) list_single_number_heading_pane_vc_g1

0x9740,	// (0x0002b4ff) list_single_number_heading_pane_vc_g2_ParamLimits

0x9740,	// (0x0002b4ff) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00031362) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00031362) list_single_number_heading_pane_vc_g

0x9eb7,	// (0x0002bc76) list_single_number_heading_pane_vc_t1_ParamLimits

0x9eb7,	// (0x0002bc76) list_single_number_heading_pane_vc_t1

0xa08a,	// (0x0002be49) list_single_number_heading_pane_vc_t2_ParamLimits

0xa08a,	// (0x0002be49) list_single_number_heading_pane_vc_t2

0x979c,	// (0x0002b55b) list_single_number_heading_pane_vc_t3_ParamLimits

0x979c,	// (0x0002b55b) list_single_number_heading_pane_vc_t3

0x0002,

0xfa11,	// (0x000317d0) list_single_number_heading_pane_vc_t_ParamLimits

0xfa11,	// (0x000317d0) list_single_number_heading_pane_vc_t

0x9e93,	// (0x0002bc52) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x9e93,	// (0x0002bc52) list_single_graphic_heading_pane_vc_g1

0x9734,	// (0x0002b4f3) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9734,	// (0x0002b4f3) list_single_graphic_heading_pane_vc_g4

0x9740,	// (0x0002b4ff) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x9740,	// (0x0002b4ff) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf59c,	// (0x0003135b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf59c,	// (0x0003135b) list_single_graphic_heading_pane_vc_g

0x9eb7,	// (0x0002bc76) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x9eb7,	// (0x0002bc76) list_single_graphic_heading_pane_vc_t1

0xa09c,	// (0x0002be5b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xa09c,	// (0x0002be5b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa18,	// (0x000317d7) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa18,	// (0x000317d7) list_single_graphic_heading_pane_vc_t

0x9734,	// (0x0002b4f3) list_double2_pane_vc_g1_ParamLimits

0x9734,	// (0x0002b4f3) list_double2_pane_vc_g1

0x9740,	// (0x0002b4ff) list_double2_pane_vc_g2_ParamLimits

0x9740,	// (0x0002b4ff) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00031362) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00031362) list_double2_pane_vc_g

0x9f97,	// (0x0002bd56) list_double2_pane_vc_t1_ParamLimits

0x9f97,	// (0x0002bd56) list_double2_pane_vc_t1

0xa0ae,	// (0x0002be6d) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xa0ae,	// (0x0002be6d) list_double2_large_graphic_pane_vc_g1

0xa0ba,	// (0x0002be79) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xa0ba,	// (0x0002be79) list_double2_large_graphic_pane_vc_g2

0xa0c6,	// (0x0002be85) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xa0c6,	// (0x0002be85) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x0003137f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x0003137f) list_double2_large_graphic_pane_vc_g

0xa0d2,	// (0x0002be91) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xa0d2,	// (0x0002be91) list_double2_large_graphic_pane_vc_t1

0xa0e8,	// (0x0002bea7) list_double_time_pane_vc_g1_ParamLimits

0xa0e8,	// (0x0002bea7) list_double_time_pane_vc_g1

0xa0f4,	// (0x0002beb3) list_double_time_pane_vc_g2_ParamLimits

0xa0f4,	// (0x0002beb3) list_double_time_pane_vc_g2

0x0001,

0xfa1d,	// (0x000317dc) list_double_time_pane_vc_g_ParamLimits

0xfa1d,	// (0x000317dc) list_double_time_pane_vc_g

0xa100,	// (0x0002bebf) list_double_time_pane_vc_t1_ParamLimits

0xa100,	// (0x0002bebf) list_double_time_pane_vc_t1

0xa11e,	// (0x0002bedd) list_double_time_pane_vc_t2_ParamLimits

0xa11e,	// (0x0002bedd) list_double_time_pane_vc_t2

0xa167,	// (0x0002bf26) list_double_time_pane_vc_t3_ParamLimits

0xa167,	// (0x0002bf26) list_double_time_pane_vc_t3

0xa179,	// (0x0002bf38) list_double_time_pane_vc_t4_ParamLimits

0xa179,	// (0x0002bf38) list_double_time_pane_vc_t4

0x0003,

0xfa22,	// (0x000317e1) list_double_time_pane_vc_t_ParamLimits

0xfa22,	// (0x000317e1) list_double_time_pane_vc_t

0x9734,	// (0x0002b4f3) list_double_pane_vc_g1_ParamLimits

0x9734,	// (0x0002b4f3) list_double_pane_vc_g1

0x9740,	// (0x0002b4ff) list_double_pane_vc_g2_ParamLimits

0x9740,	// (0x0002b4ff) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00031362) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00031362) list_double_pane_vc_g

0xa18b,	// (0x0002bf4a) list_double_pane_vc_t1_ParamLimits

0xa18b,	// (0x0002bf4a) list_double_pane_vc_t1

0xa19d,	// (0x0002bf5c) list_double_pane_vc_t2_ParamLimits

0xa19d,	// (0x0002bf5c) list_double_pane_vc_t2

0x0001,

0xfa2b,	// (0x000317ea) list_double_pane_vc_t_ParamLimits

0xfa2b,	// (0x000317ea) list_double_pane_vc_t

0x9734,	// (0x0002b4f3) list_double_number_pane_vc_g1_ParamLimits

0x9734,	// (0x0002b4f3) list_double_number_pane_vc_g1

0x9740,	// (0x0002b4ff) list_double_number_pane_vc_g2_ParamLimits

0x9740,	// (0x0002b4ff) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00031362) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00031362) list_double_number_pane_vc_g

0xa1b3,	// (0x0002bf72) list_double_number_pane_vc_t1_ParamLimits

0xa1b3,	// (0x0002bf72) list_double_number_pane_vc_t1

0xa1c7,	// (0x0002bf86) list_double_number_pane_vc_t2_ParamLimits

0xa1c7,	// (0x0002bf86) list_double_number_pane_vc_t2

0xa1d9,	// (0x0002bf98) list_double_number_pane_vc_t3_ParamLimits

0xa1d9,	// (0x0002bf98) list_double_number_pane_vc_t3

0x0002,

0xfa30,	// (0x000317ef) list_double_number_pane_vc_t_ParamLimits

0xfa30,	// (0x000317ef) list_double_number_pane_vc_t

0xa1ef,	// (0x0002bfae) list_double_large_graphic_pane_vc_g1_ParamLimits

0xa1ef,	// (0x0002bfae) list_double_large_graphic_pane_vc_g1

0xa217,	// (0x0002bfd6) list_double_large_graphic_pane_vc_g2_ParamLimits

0xa217,	// (0x0002bfd6) list_double_large_graphic_pane_vc_g2

0xa22b,	// (0x0002bfea) list_double_large_graphic_pane_vc_g3_ParamLimits

0xa22b,	// (0x0002bfea) list_double_large_graphic_pane_vc_g3

0xa23a,	// (0x0002bff9) list_double_large_graphic_pane_vc_g4_ParamLimits

0xa23a,	// (0x0002bff9) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa37,	// (0x000317f6) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa37,	// (0x000317f6) list_double_large_graphic_pane_vc_g

0xa24a,	// (0x0002c009) list_double_large_graphic_pane_vc_t1_ParamLimits

0xa24a,	// (0x0002c009) list_double_large_graphic_pane_vc_t1

0xa264,	// (0x0002c023) list_double_large_graphic_pane_vc_t2_ParamLimits

0xa264,	// (0x0002c023) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa40,	// (0x000317ff) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa40,	// (0x000317ff) list_double_large_graphic_pane_vc_t

0x9734,	// (0x0002b4f3) list_double_heading_pane_vc_g1_ParamLimits

0x9734,	// (0x0002b4f3) list_double_heading_pane_vc_g1

0x9740,	// (0x0002b4ff) list_double_heading_pane_vc_g2_ParamLimits

0x9740,	// (0x0002b4ff) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00031362) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00031362) list_double_heading_pane_vc_g

0xa284,	// (0x0002c043) list_double_heading_pane_vc_t1_ParamLimits

0xa284,	// (0x0002c043) list_double_heading_pane_vc_t1

0x9eb7,	// (0x0002bc76) list_double_heading_pane_vc_t2_ParamLimits

0x9eb7,	// (0x0002bc76) list_double_heading_pane_vc_t2

0x0001,

0xfa45,	// (0x00031804) list_double_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x00031804) list_double_heading_pane_vc_t

0xa296,	// (0x0002c055) list_double_graphic_pane_vc_g1_ParamLimits

0xa296,	// (0x0002c055) list_double_graphic_pane_vc_g1

0xa2a2,	// (0x0002c061) list_double_graphic_pane_vc_g2_ParamLimits

0xa2a2,	// (0x0002c061) list_double_graphic_pane_vc_g2

0x9734,	// (0x0002b4f3) list_double_graphic_pane_vc_g3_ParamLimits

0x9734,	// (0x0002b4f3) list_double_graphic_pane_vc_g3

0x0003,

0xfa4a,	// (0x00031809) list_double_graphic_pane_vc_g_ParamLimits

0xfa4a,	// (0x00031809) list_double_graphic_pane_vc_g

0xa2bf,	// (0x0002c07e) list_double_graphic_pane_vc_t1_ParamLimits

0xa2bf,	// (0x0002c07e) list_double_graphic_pane_vc_t1

0xa2dd,	// (0x0002c09c) list_double_graphic_pane_vc_t2_ParamLimits

0xa2dd,	// (0x0002c09c) list_double_graphic_pane_vc_t2

0x0001,

0xfa53,	// (0x00031812) list_double_graphic_pane_vc_t_ParamLimits

0xfa53,	// (0x00031812) list_double_graphic_pane_vc_t

0x5aca,	// (0x00027889) aid_size_cell_fastswap

0xc3c7,	// (0x0002e186) aid_size_cell_touch_ParamLimits

0xc3c7,	// (0x0002e186) aid_size_cell_touch

0x5c86,	// (0x00027a45) popup_fast_swap_wide_window_ParamLimits

0x5c86,	// (0x00027a45) popup_fast_swap_wide_window

0xc528,	// (0x0002e2e7) touch_pane_ParamLimits

0xc528,	// (0x0002e2e7) touch_pane

0x9be1,	// (0x0002b9a0) button_value_adjust_pane_cp2

0x31bf,	// (0x00024f7e) button_value_adjust_pane_cp4

0x9c01,	// (0x0002b9c0) form_field_data_pane_cp2

0xd8e1,	// (0x0002f6a0) form_field_data_wide_pane_cp2

0x1684,	// (0x00023443) bg_scroll_pane_ParamLimits

0x6326,	// (0x000280e5) scroll_handle_pane_ParamLimits

0x633a,	// (0x000280f9) scroll_sc2_down_pane_ParamLimits

0x633a,	// (0x000280f9) scroll_sc2_down_pane

0x16b5,	// (0x00023474) scroll_sc2_up_pane_ParamLimits

0x16b5,	// (0x00023474) scroll_sc2_up_pane

0xe9d3,	// (0x00030792) grid_wheel_folder_pane_g1_ParamLimits

0xe9d3,	// (0x00030792) grid_wheel_folder_pane_g1

0x6629,	// (0x000283e8) clock_nsta_pane_cp2_ParamLimits

0x6629,	// (0x000283e8) clock_nsta_pane_cp2

0xdd07,	// (0x0002fac6) listscroll_midp_pane_ParamLimits

0xdd16,	// (0x0002fad5) midp_canvas_pane

0x69e7,	// (0x000287a6) nsta_clock_indic_pane

0x1e5b,	// (0x00023c1a) listscroll_form_pane_vc

0x1e63,	// (0x00023c22) listscroll_set_pane_vc_ParamLimits

0x1e63,	// (0x00023c22) listscroll_set_pane_vc

0xe1c1,	// (0x0002ff80) clock_nsta_pane

0xe1e4,	// (0x0002ffa3) indicator_nsta_pane

0x1f7c,	// (0x00023d3b) bg_popup_sub_pane_cp2_ParamLimits

0x1f90,	// (0x00023d4f) find_pane_cp2_ParamLimits

0x1f90,	// (0x00023d4f) find_pane_cp2

0x1fa2,	// (0x00023d61) grid_toobar_pane_ParamLimits

0x20ae,	// (0x00023e6d) list_form_gen_pane_vc_ParamLimits

0x20ae,	// (0x00023e6d) list_form_gen_pane_vc

0x20c4,	// (0x00023e83) scroll_pane_cp8_vc_ParamLimits

0x20c4,	// (0x00023e83) scroll_pane_cp8_vc

0x2114,	// (0x00023ed3) data_form_wide_pane_vc_ParamLimits

0x2114,	// (0x00023ed3) data_form_wide_pane_vc

0x2120,	// (0x00023edf) form_field_data_wide_pane_vc_g1

0x2128,	// (0x00023ee7) form_field_data_wide_pane_vc_t1_ParamLimits

0x2128,	// (0x00023ee7) form_field_data_wide_pane_vc_t1

0x12ef,	// (0x000230ae) input_focus_pane_cp6_vc_ParamLimits

0x12ef,	// (0x000230ae) input_focus_pane_cp6_vc

0xe4c5,	// (0x00030284) list_midp_pane_ParamLimits

0x31e1,	// (0x00024fa0) scroll_pane_cp16_ParamLimits

0x31e1,	// (0x00024fa0) scroll_pane_cp16

0x242e,	// (0x000241ed) button_value_adjust_pane_ParamLimits

0x242e,	// (0x000241ed) button_value_adjust_pane

0xe667,	// (0x00030426) button_value_adjust_pane_cp6_ParamLimits

0xe667,	// (0x00030426) button_value_adjust_pane_cp6

0xe771,	// (0x00030530) settings_code_pane_cp_ParamLimits

0xe771,	// (0x00030530) settings_code_pane_cp

0x0c69,	// (0x00022a28) cell_touch_pane_g1

0x0c69,	// (0x00022a28) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x0003149d) cell_touch_pane_g

0xe8bf,	// (0x0003067e) cell_touch_pane_cp_ParamLimits

0xe8bf,	// (0x0003067e) cell_touch_pane_cp

0xe8db,	// (0x0003069a) cell_touch_pane_ParamLimits

0xe8db,	// (0x0003069a) cell_touch_pane

0x0c69,	// (0x00022a28) scroll_sc2_down_pane_g1

0x0c69,	// (0x00022a28) scroll_sc2_up_pane_g1

0x0ceb,	// (0x00022aaa) bg_set_opt_pane_cp4_vc

0x3565,	// (0x00025324) list_set_graphic_pane_vc_g1_ParamLimits

0x3565,	// (0x00025324) list_set_graphic_pane_vc_g1

0x3571,	// (0x00025330) list_set_graphic_pane_vc_g2_ParamLimits

0x3571,	// (0x00025330) list_set_graphic_pane_vc_g2

0x0001,

0xf9ce,	// (0x0003178d) list_set_graphic_pane_vc_g_ParamLimits

0xf9ce,	// (0x0003178d) list_set_graphic_pane_vc_g

0x357d,	// (0x0002533c) text_primary_small_cp13_vc_ParamLimits

0x357d,	// (0x0002533c) text_primary_small_cp13_vc

0x3595,	// (0x00025354) list_set_graphic_pane_vc_ParamLimits

0x3595,	// (0x00025354) list_set_graphic_pane_vc

0x0ceb,	// (0x00022aaa) input_focus_pane_cp2_vc

0x0c69,	// (0x00022a28) setting_code_pane_vc_g1

0x35a8,	// (0x00025367) setting_code_pane_vc_t1

0x35b6,	// (0x00025375) set_text_pane_vc_t1_ParamLimits

0x35b6,	// (0x00025375) set_text_pane_vc_t1

0x0ceb,	// (0x00022aaa) input_focus_pane_cp1_vc

0x35d1,	// (0x00025390) list_set_text_pane_vc

0x0c69,	// (0x00022a28) setting_text_pane_vc_g1

0x0ceb,	// (0x00022aaa) bg_set_opt_pane_cp2_vc

0x35db,	// (0x0002539a) setting_slider_graphic_pane_vc_g1

0x35e3,	// (0x000253a2) setting_slider_graphic_pane_vc_t1

0x35f1,	// (0x000253b0) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d3,	// (0x00031792) setting_slider_graphic_pane_vc_t

0x35ff,	// (0x000253be) slider_set_pane_cp_vc

0x3607,	// (0x000253c6) slider_set_pane_vc_g1

0x3610,	// (0x000253cf) slider_set_pane_vc_g2

0x0006,

0xf9d8,	// (0x00031797) slider_set_pane_vc_g

0x134a,	// (0x00023109) set_opt_bg_pane_g1_copy1

0x1352,	// (0x00023111) set_opt_bg_pane_g2_copy1

0x363c,	// (0x000253fb) set_opt_bg_pane_g3_copy1

0x1362,	// (0x00023121) set_opt_bg_pane_g4_copy1

0x136a,	// (0x00023129) set_opt_bg_pane_g5_copy1

0x1372,	// (0x00023131) set_opt_bg_pane_g6_copy1

0x3644,	// (0x00025403) set_opt_bg_pane_g7_copy1

0x364c,	// (0x0002540b) set_opt_bg_pane_g8_copy1

0x3654,	// (0x00025413) set_opt_bg_pane_g9_copy1

0x0ceb,	// (0x00022aaa) bg_set_opt_pane_cp_vc

0x365c,	// (0x0002541b) setting_slider_pane_vc_t1

0x35e3,	// (0x000253a2) setting_slider_pane_vc_t2

0x35f1,	// (0x000253b0) setting_slider_pane_vc_t3

0x0002,

0xf9e7,	// (0x000317a6) setting_slider_pane_vc_t

0x35ff,	// (0x000253be) slider_set_pane_vc

0x7378,	// (0x00029137) volume_set_pane_vc_g1

0x7a16,	// (0x000297d5) volume_set_pane_vc_g2

0x7a1f,	// (0x000297de) volume_set_pane_vc_g3

0x7a28,	// (0x000297e7) volume_set_pane_vc_g4

0x7a31,	// (0x000297f0) volume_set_pane_vc_g5

0x7a3a,	// (0x000297f9) volume_set_pane_vc_g6

0x7a43,	// (0x00029802) volume_set_pane_vc_g7

0x7a4c,	// (0x0002980b) volume_set_pane_vc_g8

0x7a55,	// (0x00029814) volume_set_pane_vc_g9

0x7a5e,	// (0x0002981d) volume_set_pane_vc_g10

0x0009,

0xf9ee,	// (0x000317ad) volume_set_pane_vc_g

0x366b,	// (0x0002542a) volume_set_pane_vc

0x3673,	// (0x00025432) button_value_adjust_pane_cp1_vc

0x367d,	// (0x0002543c) list_highlight_pane_cp2_vc

0x3686,	// (0x00025445) list_set_pane_vc_ParamLimits

0x3686,	// (0x00025445) list_set_pane_vc

0x36d8,	// (0x00025497) main_pane_set_vc_t1_ParamLimits

0x36d8,	// (0x00025497) main_pane_set_vc_t1

0x36ed,	// (0x000254ac) main_pane_set_vc_t2_ParamLimits

0x36ed,	// (0x000254ac) main_pane_set_vc_t2

0x36ff,	// (0x000254be) main_pane_set_vc_t3_ParamLimits

0x36ff,	// (0x000254be) main_pane_set_vc_t3

0x3711,	// (0x000254d0) main_pane_set_vc_t4_ParamLimits

0x3711,	// (0x000254d0) main_pane_set_vc_t4

0x0003,

0xfa03,	// (0x000317c2) main_pane_set_vc_t_ParamLimits

0xfa03,	// (0x000317c2) main_pane_set_vc_t

0x3723,	// (0x000254e2) setting_code_pane_vc_ParamLimits

0x3723,	// (0x000254e2) setting_code_pane_vc

0x3732,	// (0x000254f1) setting_slider_graphic_pane_vc

0x3732,	// (0x000254f1) setting_slider_pane_vc

0x3732,	// (0x000254f1) setting_text_pane_vc

0x3732,	// (0x000254f1) setting_volume_pane_vc

0x373a,	// (0x000254f9) scroll_pane_cp121_vc

0x12da,	// (0x00023099) set_content_pane_vc

0x3742,	// (0x00025501) button_value_adjust_pane_g1

0x374b,	// (0x0002550a) button_value_adjust_pane_g2

0x0001,

0xfa58,	// (0x00031817) button_value_adjust_pane_g

0x3754,	// (0x00025513) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3754,	// (0x00025513) form_field_slider_wide_pane_vc_t1

0x376a,	// (0x00025529) form_field_slider_wide_pane_vc_t2_ParamLimits

0x376a,	// (0x00025529) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5d,	// (0x0003181c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5d,	// (0x0003181c) form_field_slider_wide_pane_vc_t

0x0d39,	// (0x00022af8) input_focus_pane_cp10_vc_ParamLimits

0x0d39,	// (0x00022af8) input_focus_pane_cp10_vc

0x3795,	// (0x00025554) slider_cont_pane_cp1_vc_ParamLimits

0x3795,	// (0x00025554) slider_cont_pane_cp1_vc

0x3607,	// (0x000253c6) slider_form_pane_g1_cp2

0x3610,	// (0x000253cf) slider_form_pane_g2_cp2

0x37b0,	// (0x0002556f) form_field_slider_pane_vc_t3

0x37be,	// (0x0002557d) form_field_slider_pane_vc_t4

0x37cc,	// (0x0002558b) slider_form_pane_vc_ParamLimits

0x37cc,	// (0x0002558b) slider_form_pane_vc

0x37d9,	// (0x00025598) form_field_slider_pane_vc_t1_ParamLimits

0x37d9,	// (0x00025598) form_field_slider_pane_vc_t1

0x37ef,	// (0x000255ae) form_field_slider_pane_vc_t2_ParamLimits

0x37ef,	// (0x000255ae) form_field_slider_pane_vc_t2

0x0001,

0xfa6f,	// (0x0003182e) form_field_slider_pane_vc_t_ParamLimits

0xfa6f,	// (0x0003182e) form_field_slider_pane_vc_t

0x0d39,	// (0x00022af8) input_focus_pane_cp9_vc_ParamLimits

0x0d39,	// (0x00022af8) input_focus_pane_cp9_vc

0x3801,	// (0x000255c0) slider_cont_pane_vc_ParamLimits

0x3801,	// (0x000255c0) slider_cont_pane_vc

0x3813,	// (0x000255d2) list_form_graphic_pane_cp_vc_ParamLimits

0x3813,	// (0x000255d2) list_form_graphic_pane_cp_vc

0x2120,	// (0x00023edf) form_field_popup_wide_pane_vc_g1

0x3828,	// (0x000255e7) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3828,	// (0x000255e7) form_field_popup_wide_pane_vc_t1

0x12ef,	// (0x000230ae) input_focus_pane_cp8_vc_ParamLimits

0x12ef,	// (0x000230ae) input_focus_pane_cp8_vc

0x3867,	// (0x00025626) list_form_wide_pane_vc_ParamLimits

0x3867,	// (0x00025626) list_form_wide_pane_vc

0x3873,	// (0x00025632) list_form_graphic_pane_vc_g1

0x387b,	// (0x0002563a) list_form_graphic_pane_vc_t1_ParamLimits

0x387b,	// (0x0002563a) list_form_graphic_pane_vc_t1

0x0d4f,	// (0x00022b0e) list_highlight_pane_cp5_vc_ParamLimits

0x0d4f,	// (0x00022b0e) list_highlight_pane_cp5_vc

0x3897,	// (0x00025656) list_form_graphic_pane_vc_ParamLimits

0x3897,	// (0x00025656) list_form_graphic_pane_vc

0x2120,	// (0x00023edf) form_field_popup_pane_vc_g1

0x38ad,	// (0x0002566c) form_field_popup_pane_vc_t1_ParamLimits

0x38ad,	// (0x0002566c) form_field_popup_pane_vc_t1

0x12ef,	// (0x000230ae) input_focus_pane_cp7_vc_ParamLimits

0x12ef,	// (0x000230ae) input_focus_pane_cp7_vc

0x38c2,	// (0x00025681) list_form_pane_vc_ParamLimits

0x38c2,	// (0x00025681) list_form_pane_vc

0x38ce,	// (0x0002568d) data_form_pane_vc_t1_ParamLimits

0x38ce,	// (0x0002568d) data_form_pane_vc_t1

0x134a,	// (0x00023109) input_focus_pane_vc_g1

0x1352,	// (0x00023111) input_focus_pane_vc_g2

0x135a,	// (0x00023119) input_focus_pane_vc_g3

0x1362,	// (0x00023121) input_focus_pane_vc_g4

0x136a,	// (0x00023129) input_focus_pane_vc_g5

0x1372,	// (0x00023131) input_focus_pane_vc_g6

0x137a,	// (0x00023139) input_focus_pane_vc_g7

0x1382,	// (0x00023141) input_focus_pane_vc_g8

0x138a,	// (0x00023149) input_focus_pane_vc_g9

0x0c69,	// (0x00022a28) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x00031426) input_focus_pane_vc_g

0x2114,	// (0x00023ed3) data_form_pane_vc_ParamLimits

0x2114,	// (0x00023ed3) data_form_pane_vc

0x2120,	// (0x00023edf) form_field_data_pane_vc_g1

0x38e9,	// (0x000256a8) form_field_data_pane_vc_t1_ParamLimits

0x38e9,	// (0x000256a8) form_field_data_pane_vc_t1

0x12ef,	// (0x000230ae) input_focus_pane_vc_ParamLimits

0x12ef,	// (0x000230ae) input_focus_pane_vc

0x2092,	// (0x00023e51) button_value_adjust_pane_cp3_vc

0x31bf,	// (0x00024f7e) button_value_adjust_pane_cp5_vc

0x38ff,	// (0x000256be) form_field_data_pane_vc_ParamLimits

0x38ff,	// (0x000256be) form_field_data_pane_vc

0x209a,	// (0x00023e59) form_field_data_pane_vc_cp2

0x3916,	// (0x000256d5) form_field_data_wide_pane_vc_ParamLimits

0x3916,	// (0x000256d5) form_field_data_wide_pane_vc

0x392c,	// (0x000256eb) form_field_data_wide_pane_vc_cp2

0x3934,	// (0x000256f3) form_field_popup_pane_vc_ParamLimits

0x3934,	// (0x000256f3) form_field_popup_pane_vc

0x394b,	// (0x0002570a) form_field_popup_wide_pane_vc_ParamLimits

0x394b,	// (0x0002570a) form_field_popup_wide_pane_vc

0x3961,	// (0x00025720) form_field_slider_pane_vc_ParamLimits

0x3961,	// (0x00025720) form_field_slider_pane_vc

0x3974,	// (0x00025733) form_field_slider_wide_pane_vc_ParamLimits

0x3974,	// (0x00025733) form_field_slider_wide_pane_vc

0xe8f9,	// (0x000306b8) grid_touch_1_pane_ParamLimits

0xe8f9,	// (0x000306b8) grid_touch_1_pane

0xe90d,	// (0x000306cc) grid_touch_2_pane_ParamLimits

0xe90d,	// (0x000306cc) grid_touch_2_pane

0x3987,	// (0x00025746) touch_pane_g1_ParamLimits

0x3987,	// (0x00025746) touch_pane_g1

0x3995,	// (0x00025754) cell_app_pane_cp_wide_ParamLimits

0x3995,	// (0x00025754) cell_app_pane_cp_wide

0x39a5,	// (0x00025764) grid_popup_fast_wide_pane_ParamLimits

0x39a5,	// (0x00025764) grid_popup_fast_wide_pane

0x39b9,	// (0x00025778) scroll_pane_cp19_ParamLimits

0x39b9,	// (0x00025778) scroll_pane_cp19

0x0ceb,	// (0x00022aaa) bg_popup_window_pane_cp20

0x39cd,	// (0x0002578c) listscroll_popup_fast_wide_pane

0xe937,	// (0x000306f6) grid_indicator_nsta_pane

0x39d5,	// (0x00025794) clock_nsta_pane_g1

0x39de,	// (0x0002579d) clock_nsta_pane_t1

0xe943,	// (0x00030702) cell_indicator_nsta_pane_ParamLimits

0xe943,	// (0x00030702) cell_indicator_nsta_pane

0x3987,	// (0x00025746) cell_indicator_nsta_pane_g1

0xe95a,	// (0x00030719) cell_indicator_nsta_pane_g2

0x0001,

0xfa80,	// (0x0003183f) cell_indicator_nsta_pane_g

0x39fa,	// (0x000257b9) clock_nsta_pane_cp

0x3a02,	// (0x000257c1) indicator_nsta_pane_cp

0x3a0b,	// (0x000257ca) nsta_clock_indic_pane_g1

0x0d8b,	// (0x00022b4a) grid_indicator_pane

0x17a7,	// (0x00023566) scroll_pane_cp29

0x6580,	// (0x0002833f) indicator_nsta_pane_cp2_ParamLimits

0x6580,	// (0x0002833f) indicator_nsta_pane_cp2

0x0d4f,	// (0x00022b0e) main_apps_wheel_pane

0x22bf,	// (0x0002407e) form_midp_field_text_pane_ParamLimits

0x23ec,	// (0x000241ab) scroll_bar_cp050_ParamLimits

0x3a74,	// (0x00025833) cell_indicator_pane_ParamLimits

0x3a74,	// (0x00025833) cell_indicator_pane

0x3a8a,	// (0x00025849) cell_indicator_pane_g1

0xe967,	// (0x00030726) grid_wheel_folder_pane_ParamLimits

0xe967,	// (0x00030726) grid_wheel_folder_pane

0xe975,	// (0x00030734) list_wheel_apps_pane_ParamLimits

0xe975,	// (0x00030734) list_wheel_apps_pane

0xe981,	// (0x00030740) main_apps_wheel_pane_g1_ParamLimits

0xe981,	// (0x00030740) main_apps_wheel_pane_g1

0xe98d,	// (0x0003074c) main_apps_wheel_pane_g2_ParamLimits

0xe98d,	// (0x0003074c) main_apps_wheel_pane_g2

0x0001,

0xfa9c,	// (0x0003185b) main_apps_wheel_pane_g_ParamLimits

0xfa9c,	// (0x0003185b) main_apps_wheel_pane_g

0xe999,	// (0x00030758) main_apps_wheel_pane_t1_ParamLimits

0xe999,	// (0x00030758) main_apps_wheel_pane_t1

0xe9ab,	// (0x0003076a) list_wheel_apps_pane_g1

0xe9b3,	// (0x00030772) list_wheel_apps_pane_g2

0xe9bb,	// (0x0003077a) list_wheel_apps_pane_g3

0xe9c3,	// (0x00030782) list_wheel_apps_pane_g4

0xe9cb,	// (0x0003078a) list_wheel_apps_pane_g5

0x0004,

0xfaa1,	// (0x00031860) list_wheel_apps_pane_g

0x0d4f,	// (0x00022b0e) navi_icon_text_pane

0xe0cd,	// (0x0002fe8c) aid_fill_nsta

0x3a94,	// (0x00025853) navi_icon_text_pane_g1

0x3aa0,	// (0x0002585f) navi_icon_text_pane_t1

0x1a21,	// (0x000237e0) list_set_graphic_pane_t1_ParamLimits

0x1a21,	// (0x000237e0) list_set_graphic_pane_t1

0x2ada,	// (0x00024899) popup_midp_note_alarm_window_t6_ParamLimits

0x2ada,	// (0x00024899) popup_midp_note_alarm_window_t6

0x2aec,	// (0x000248ab) popup_midp_note_alarm_window_t7_ParamLimits

0x2aec,	// (0x000248ab) popup_midp_note_alarm_window_t7

0x2afe,	// (0x000248bd) popup_midp_note_alarm_window_t8_ParamLimits

0x2afe,	// (0x000248bd) popup_midp_note_alarm_window_t8

0x2b10,	// (0x000248cf) popup_midp_note_alarm_window_t9_ParamLimits

0x2b10,	// (0x000248cf) popup_midp_note_alarm_window_t9

0x2b22,	// (0x000248e1) popup_midp_note_alarm_window_t10_ParamLimits

0x2b22,	// (0x000248e1) popup_midp_note_alarm_window_t10

0x2b34,	// (0x000248f3) popup_midp_note_alarm_window_t11_ParamLimits

0x2b34,	// (0x000248f3) popup_midp_note_alarm_window_t11

0x2b46,	// (0x00024905) scroll_pane_cp17_ParamLimits

0x2b46,	// (0x00024905) scroll_pane_cp17

0x7378,	// (0x00029137) volume_small_pane_cp_g1

0x7b85,	// (0x00029944) volume_small_pane_cp_g2

0x7b8e,	// (0x0002994d) volume_small_pane_cp_g3

0x7b97,	// (0x00029956) volume_small_pane_cp_g4

0x73a5,	// (0x00029164) volume_small_pane_cp_g5

0x7ba0,	// (0x0002995f) volume_small_pane_cp_g6

0x7ba9,	// (0x00029968) volume_small_pane_cp_g7

0x7bb2,	// (0x00029971) volume_small_pane_cp_g8

0x7bbb,	// (0x0002997a) volume_small_pane_cp_g9

0x7bc4,	// (0x00029983) volume_small_pane_cp_g10

0x1cd0,	// (0x00023a8f) midp_ticker_pane_g1_ParamLimits

0x1cdc,	// (0x00023a9b) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x000314f2) midp_ticker_pane_g_ParamLimits

0x1ce8,	// (0x00023aa7) midp_ticker_pane_t1_ParamLimits

0xe0e3,	// (0x0002fea2) aid_fill_nsta_2

0x23d8,	// (0x00024197) list_form2_midp_pane

0x320e,	// (0x00024fcd) midp_editing_number_pane_ParamLimits

0x321a,	// (0x00024fd9) midp_ticker_pane_ParamLimits

0x3ab2,	// (0x00025871) form2_midp_field_pane

0x3aba,	// (0x00025879) scroll_pane_cp51

0x3ada,	// (0x00025899) form2_midp_button_pane_ParamLimits

0x3ada,	// (0x00025899) form2_midp_button_pane

0x3aec,	// (0x000258ab) form2_midp_content_pane_ParamLimits

0x3aec,	// (0x000258ab) form2_midp_content_pane

0x3b06,	// (0x000258c5) form2_midp_field_choice_group_pane

0x3b0e,	// (0x000258cd) form2_midp_field_pane_g1

0x3b16,	// (0x000258d5) form2_midp_field_pane_g2

0x3b1e,	// (0x000258dd) form2_midp_field_pane_g3

0x3b26,	// (0x000258e5) form2_midp_field_pane_g4

0x0003,

0xfac6,	// (0x00031885) form2_midp_field_pane_g

0x3b2e,	// (0x000258ed) form2_midp_gauge_slider_pane

0x3b36,	// (0x000258f5) form2_midp_gauge_wait_pane

0x3b3e,	// (0x000258fd) form2_midp_image_pane_ParamLimits

0x3b3e,	// (0x000258fd) form2_midp_image_pane

0x3b59,	// (0x00025918) form2_midp_label_pane_ParamLimits

0x3b59,	// (0x00025918) form2_midp_label_pane

0xea00,	// (0x000307bf) form2_midp_label_pane_cp_ParamLimits

0xea00,	// (0x000307bf) form2_midp_label_pane_cp

0x3b72,	// (0x00025931) form2_midp_string_pane_ParamLimits

0x3b72,	// (0x00025931) form2_midp_string_pane

0xa2fb,	// (0x0002c0ba) form2_midp_text_pane_ParamLimits

0xa2fb,	// (0x0002c0ba) form2_midp_text_pane

0x3b84,	// (0x00025943) form2_midp_time_pane

0x3b94,	// (0x00025953) input_focus_pane_cp51_ParamLimits

0x3b94,	// (0x00025953) input_focus_pane_cp51

0x3bac,	// (0x0002596b) form2_midp_label_pane_t1_ParamLimits

0x3bac,	// (0x0002596b) form2_midp_label_pane_t1

0xa314,	// (0x0002c0d3) form2_mdip_text_pane_t1_ParamLimits

0xa314,	// (0x0002c0d3) form2_mdip_text_pane_t1

0xa32f,	// (0x0002c0ee) form2_midp_time_pane_t1

0x3bf4,	// (0x000259b3) form2_midp_gauge_slider_pane_t1

0xea1f,	// (0x000307de) form2_midp_gauge_slider_pane_t2

0xea31,	// (0x000307f0) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacf,	// (0x0003188e) form2_midp_gauge_slider_pane_t

0x3c06,	// (0x000259c5) form2_midp_slider_pane

0x3c12,	// (0x000259d1) form2_midp_gauge_wait_pane_t1

0x3c20,	// (0x000259df) form2_midp_wait_pane_ParamLimits

0x3c20,	// (0x000259df) form2_midp_wait_pane

0x215e,	// (0x00023f1d) list_single_2graphic_pane_cp4_ParamLimits

0x215e,	// (0x00023f1d) list_single_2graphic_pane_cp4

0x3c4b,	// (0x00025a0a) list_single_midp_graphic_pane_cp_ParamLimits

0x3c4b,	// (0x00025a0a) list_single_midp_graphic_pane_cp

0x0ceb,	// (0x00022aaa) list_highlight_pane_cp20

0x3c69,	// (0x00025a28) list_single_2graphic_pane_g1_cp4

0x349e,	// (0x0002525d) list_single_2graphic_pane_g2_cp4

0x3c71,	// (0x00025a30) list_single_2graphic_pane_t1_cp4

0x0d4f,	// (0x00022b0e) list_highlight_pane_cp21

0x3c96,	// (0x00025a55) list_single_midp_graphic_pane_g4_cp

0x3ca5,	// (0x00025a64) list_single_midp_graphic_pane_t1_cp

0x3cba,	// (0x00025a79) form2_mdip_string_pane_t1_ParamLimits

0x3cba,	// (0x00025a79) form2_mdip_string_pane_t1

0x0ceb,	// (0x00022aaa) bg_wml_button_pane_cp2

0x0c69,	// (0x00022a28) form2_midp_image_pane_g1

0x999a,	// (0x0002b759) list_double_large_graphic_pane_g5_ParamLimits

0x999a,	// (0x0002b759) list_double_large_graphic_pane_g5

0xdd07,	// (0x0002fac6) midp_form_pane_ParamLimits

0x0d4f,	// (0x00022b0e) main_apps_wheel_pane_ParamLimits

0xca66,	// (0x0002e825) popup_preview_window_ParamLimits

0xca66,	// (0x0002e825) popup_preview_window

0x6e6a,	// (0x00028c29) popup_touch_info_window_ParamLimits

0x6e6a,	// (0x00028c29) popup_touch_info_window

0x6e88,	// (0x00028c47) popup_touch_menu_window_ParamLimits

0x6e88,	// (0x00028c47) popup_touch_menu_window

0x0c5f,	// (0x00022a1e) bg_popup_sub_pane_cp6

0x3d24,	// (0x00025ae3) list_touch_menu_pane

0x3d2c,	// (0x00025aeb) list_single_touch_menu_pane_ParamLimits

0x3d2c,	// (0x00025aeb) list_single_touch_menu_pane

0x3d43,	// (0x00025b02) list_single_touch_menu_pane_t1

0x0d4f,	// (0x00022b0e) bg_popup_sub_pane_cp7_ParamLimits

0x0d4f,	// (0x00022b0e) bg_popup_sub_pane_cp7

0x3d51,	// (0x00025b10) heading_sub_pane

0x3d59,	// (0x00025b18) list_touch_info_pane_ParamLimits

0x3d59,	// (0x00025b18) list_touch_info_pane

0x3d68,	// (0x00025b27) list_single_touch_info_pane_ParamLimits

0x3d68,	// (0x00025b27) list_single_touch_info_pane

0x3d79,	// (0x00025b38) list_single_touch_info_pane_t1

0x3d87,	// (0x00025b46) list_single_touch_info_pane_t2

0x0001,

0xfadd,	// (0x0003189c) list_single_touch_info_pane_t

0x1ca6,	// (0x00023a65) bg_popup_heading_pane_cp

0x3d95,	// (0x00025b54) heading_sub_pane_t1

0x20da,	// (0x00023e99) bg_popup_preview_window_pane_cp_ParamLimits

0x20da,	// (0x00023e99) bg_popup_preview_window_pane_cp

0x3d51,	// (0x00025b10) heading_preview_pane

0x3d59,	// (0x00025b18) list_preview_pane_ParamLimits

0x3d59,	// (0x00025b18) list_preview_pane

0x3da3,	// (0x00025b62) popup_preview_window_g1

0x3d68,	// (0x00025b27) list_single_preview_pane_ParamLimits

0x3d68,	// (0x00025b27) list_single_preview_pane

0x3dab,	// (0x00025b6a) list_single_preview_pane_g1

0x3db3,	// (0x00025b72) list_single_preview_pane_t1

0x3d79,	// (0x00025b38) list_single_preview_pane_t2

0x0001,

0xfae2,	// (0x000318a1) list_single_preview_pane_t

0x3dc1,	// (0x00025b80) bg_popup_heading_pane_cp2_ParamLimits

0x3dc1,	// (0x00025b80) bg_popup_heading_pane_cp2

0x3dd7,	// (0x00025b96) heading_preview_pane_g1

0x3ddf,	// (0x00025b9e) heading_preview_pane_t1_ParamLimits

0x3ddf,	// (0x00025b9e) heading_preview_pane_t1

0x0da2,	// (0x00022b61) soft_indicator_pane_t1_ParamLimits

0x1272,	// (0x00023031) scroll_pane_ParamLimits

0x16ac,	// (0x0002346b) scroll_sc2_left_pane

0x16a3,	// (0x00023462) scroll_sc2_right_pane

0x16cb,	// (0x0002348a) scroll_bg_pane_g1_ParamLimits

0x16e0,	// (0x0002349f) scroll_bg_pane_g2_ParamLimits

0x16f8,	// (0x000234b7) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x0003147d) scroll_bg_pane_g_ParamLimits

0x16cb,	// (0x0002348a) scroll_handle_pane_g1_ParamLimits

0x171a,	// (0x000234d9) scroll_handle_pane_g2_ParamLimits

0x16f8,	// (0x000234b7) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x00031484) scroll_handle_pane_g_ParamLimits

0x6a37,	// (0x000287f6) popup_choice_list_window_ParamLimits

0x6a37,	// (0x000287f6) popup_choice_list_window

0x1f88,	// (0x00023d47) choice_list_pane

0x1ffe,	// (0x00023dbd) cell_toolbar_pane_t1

0x2026,	// (0x00023de5) toolbar_button_pane_ParamLimits

0x2f0c,	// (0x00024ccb) ai_gene_pane_1_t2_ParamLimits

0x2f0c,	// (0x00024ccb) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x000316a7) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x000316a7) ai_gene_pane_1_t

0x3dfc,	// (0x00025bbb) scroll_sc2_left_pane_g1

0x3dfc,	// (0x00025bbb) scroll_sc2_right_pane_g1

0x1488,	// (0x00023247) bg_popup_sub_pane_cp10

0x3e06,	// (0x00025bc5) list_choice_list_pane

0x3e1d,	// (0x00025bdc) list_single_choice_list_pane_ParamLimits

0x3e1d,	// (0x00025bdc) list_single_choice_list_pane

0x3e2f,	// (0x00025bee) list_single_choice_list_pane_g1

0x1473,	// (0x00023232) list_single_choice_list_pane_t1_ParamLimits

0x1473,	// (0x00023232) list_single_choice_list_pane_t1

0x3e37,	// (0x00025bf6) choice_list_pane_g1

0x3e3f,	// (0x00025bfe) choice_list_pane_t1

0x0c5f,	// (0x00022a1e) input_focus_pane_cp11

0x160a,	// (0x000233c9) title_pane_stacon_g2_ParamLimits

0x160a,	// (0x000233c9) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x00031463) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x00031463) title_pane_stacon_g

0x1ca6,	// (0x00023a65) cursor_press_pane

0xc7cd,	// (0x0002e58c) popup_fep_hwr_window_ParamLimits

0xc7cd,	// (0x0002e58c) popup_fep_hwr_window

0x6b2f,	// (0x000288ee) popup_fep_vkb_window_ParamLimits

0x6b2f,	// (0x000288ee) popup_fep_vkb_window

0x3e4d,	// (0x00025c0c) cursor_press_pane_g1

0x0002,

0xfb0b,	// (0x000318ca) fep_vkb_side_pane_g_ParamLimits

0x7c61,	// (0x00029a20) fep_hwr_candidate_pane_ParamLimits

0x7c61,	// (0x00029a20) fep_hwr_candidate_pane

0x7c89,	// (0x00029a48) fep_hwr_side_pane_ParamLimits

0x7c89,	// (0x00029a48) fep_hwr_side_pane

0x7ca9,	// (0x00029a68) fep_hwr_top_pane_ParamLimits

0x7ca9,	// (0x00029a68) fep_hwr_top_pane

0x7cc1,	// (0x00029a80) fep_hwr_write_pane_ParamLimits

0x7cc1,	// (0x00029a80) fep_hwr_write_pane

0xfb0b,	// (0x000318ca) fep_vkb_side_pane_g

0x3e67,	// (0x00025c26) fep_hwr_top_pane_g1

0x3e55,	// (0x00025c14) fep_hwr_top_pane_g2

0x7cfb,	// (0x00029aba) fep_hwr_top_pane_g3

0x0002,

0xfae7,	// (0x000318a6) fep_hwr_top_pane_g

0x7d10,	// (0x00029acf) fep_hwr_top_text_pane

0x1814,	// (0x000235d3) fep_hwr_top_text_pane_g1

0x3e9d,	// (0x00025c5c) fep_hwr_top_text_pane_t1

0x7dfe,	// (0x00029bbd) fep_hwr_candidate_pane_g1

0x4066,	// (0x00025e25) fep_vkb_keypad_pane_g3_ParamLimits

0x4066,	// (0x00025e25) fep_vkb_keypad_pane_g3

0x4088,	// (0x00025e47) fep_vkb_keypad_pane_g4_ParamLimits

0x4088,	// (0x00025e47) fep_vkb_keypad_pane_g4

0x40f7,	// (0x00025eb6) fep_vkb_bottom_pane_g2_ParamLimits

0x40f7,	// (0x00025eb6) fep_vkb_bottom_pane_g2

0x0001,

0xfb12,	// (0x000318d1) fep_vkb_bottom_pane_g_ParamLimits

0xfb12,	// (0x000318d1) fep_vkb_bottom_pane_g

0x3dfc,	// (0x00025bbb) cell_vkb_side_pane_g2

0x0001,

0xfb1c,	// (0x000318db) cell_vkb_side_pane_g

0x413b,	// (0x00025efa) cell_vkb_side_pane_t1

0x4149,	// (0x00025f08) cell_vkb_side_pane_t1_copy1

0x3dfc,	// (0x00025bbb) bg_fep_vkb_candidate_pane_g2

0x4217,	// (0x00025fd6) cell_vkb_candidate_pane_ParamLimits

0x3eab,	// (0x00025c6a) aid_size_cell_vkb_ParamLimits

0x3eab,	// (0x00025c6a) aid_size_cell_vkb

0x4217,	// (0x00025fd6) cell_vkb_candidate_pane

0x7f09,	// (0x00029cc8) bg_popup_fep_shadow_pane_g1

0x3f15,	// (0x00025cd4) fep_vkb_bottom_pane_ParamLimits

0x3f15,	// (0x00025cd4) fep_vkb_bottom_pane

0x3f52,	// (0x00025d11) fep_vkb_candidate_pane_ParamLimits

0x3f52,	// (0x00025d11) fep_vkb_candidate_pane

0x3f6e,	// (0x00025d2d) fep_vkb_keypad_pane_ParamLimits

0x3f6e,	// (0x00025d2d) fep_vkb_keypad_pane

0x3fa2,	// (0x00025d61) fep_vkb_side_pane_ParamLimits

0x3fa2,	// (0x00025d61) fep_vkb_side_pane

0x3fce,	// (0x00025d8d) fep_vkb_top_pane_ParamLimits

0x3fce,	// (0x00025d8d) fep_vkb_top_pane

0x3ffa,	// (0x00025db9) fep_vkb_top_pane_g1_ParamLimits

0x3ffa,	// (0x00025db9) fep_vkb_top_pane_g1

0x4009,	// (0x00025dc8) fep_vkb_top_pane_g2_ParamLimits

0x4009,	// (0x00025dc8) fep_vkb_top_pane_g2

0x4018,	// (0x00025dd7) fep_vkb_top_pane_g3_ParamLimits

0x4018,	// (0x00025dd7) fep_vkb_top_pane_g3

0x0003,

0xfb02,	// (0x000318c1) fep_vkb_top_pane_g_ParamLimits

0xfb02,	// (0x000318c1) fep_vkb_top_pane_g

0x4036,	// (0x00025df5) fep_vkb_top_text_pane_ParamLimits

0x4036,	// (0x00025df5) fep_vkb_top_text_pane

0xea53,	// (0x00030812) fep_vkb_side_pane_g1_ParamLimits

0xea53,	// (0x00030812) fep_vkb_side_pane_g1

0x4055,	// (0x00025e14) grid_vkb_side_pane_ParamLimits

0x4055,	// (0x00025e14) grid_vkb_side_pane

0x7f11,	// (0x00029cd0) bg_popup_fep_shadow_pane_g2

0x7f1a,	// (0x00029cd9) bg_popup_fep_shadow_pane_g3

0x7f22,	// (0x00029ce1) bg_popup_fep_shadow_pane_g4

0x7f2b,	// (0x00029cea) bg_popup_fep_shadow_pane_g5

0x7f33,	// (0x00029cf2) bg_popup_fep_shadow_pane_g6

0x7f3b,	// (0x00029cfa) bg_popup_fep_shadow_pane_g7

0x1362,	// (0x00023121) bg_popup_fep_shadow_pane_g8

0x40a6,	// (0x00025e65) grid_vkb_keypad_number_pane_ParamLimits

0x40a6,	// (0x00025e65) grid_vkb_keypad_number_pane

0x40b6,	// (0x00025e75) grid_vkb_keypad_pane_ParamLimits

0x40b6,	// (0x00025e75) grid_vkb_keypad_pane

0x40dc,	// (0x00025e9b) fep_vkb_bottom_pane_g1_ParamLimits

0x40dc,	// (0x00025e9b) fep_vkb_bottom_pane_g1

0x4105,	// (0x00025ec4) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4105,	// (0x00025ec4) grid_vkb_keypad_bottom_left_pane

0x411a,	// (0x00025ed9) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x411a,	// (0x00025ed9) grid_vkb_keypad_bottom_right_pane

0x412f,	// (0x00025eee) fep_vkb_top_text_pane_g1

0xea9a,	// (0x00030859) fep_vkb_top_text_pane_t1

0xeaac,	// (0x0003086b) cell_vkb_side_pane_ParamLimits

0xeaac,	// (0x0003086b) cell_vkb_side_pane

0x3dfc,	// (0x00025bbb) cell_vkb_side_pane_g1

0x4157,	// (0x00025f16) cell_vkb_keypad_pane_ParamLimits

0x4157,	// (0x00025f16) cell_vkb_keypad_pane

0x41c4,	// (0x00025f83) cell_vkb_keypad_pane_g1

0x0008,

0xfb2f,	// (0x000318ee) bg_popup_fep_shadow_pane_g

0x7f4b,	// (0x00029d0a) cell_hwr_side_pane_g1

0x7f4b,	// (0x00029d0a) cell_hwr_side_pane_g2

0x41ce,	// (0x00025f8d) cell_vkb_keypad_pane_t1

0xeac2,	// (0x00030881) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xeac2,	// (0x00030881) cell_vkb_keypad_bottom_left_pane

0xead7,	// (0x00030896) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xead7,	// (0x00030896) cell_vkb_keypad_bottom_right_pane

0x3dfc,	// (0x00025bbb) cell_vkb_keypad_bottom_left_pane_g1

0x3dfc,	// (0x00025bbb) cell_vkb_keypad_bottom_right_pane_g1

0x41dc,	// (0x00025f9b) cell_vkb_keypad_number_pane_ParamLimits

0x41dc,	// (0x00025f9b) cell_vkb_keypad_number_pane

0x41fb,	// (0x00025fba) cell_vkb_keypad_number_pane_g1

0x4205,	// (0x00025fc4) cell_vkb_keypad_number_pane_g2

0x420e,	// (0x00025fcd) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb21,	// (0x000318e0) cell_vkb_keypad_number_pane_g

0x41ce,	// (0x00025f8d) cell_vkb_keypad_number_pane_t1

0x4230,	// (0x00025fef) fep_vkb_candidate_pane_g1

0x0001,

0xfb42,	// (0x00031901) cell_hwr_side_pane_g

0x4249,	// (0x00026008) cell_hwr_side_pane_t1

0x7f55,	// (0x00029d14) cell_hwr_side_pane_t1_copy1

0x7f63,	// (0x00029d22) cell_hwr_candidate_pane_g1

0x7f92,	// (0x00029d51) cell_hwr_candidate_pane_t1

0x3dfc,	// (0x00025bbb) cell_vkb_candidate_pane_g2

0x42cf,	// (0x0002608e) cell_vkb_candidate_pane_t1

0x7c2c,	// (0x000299eb) bg_popup_fep_shadow_pane_ParamLimits

0x7c2c,	// (0x000299eb) bg_popup_fep_shadow_pane

0x7cdb,	// (0x00029a9a) bg_fep_hwr_top_pane_g4

0x3e79,	// (0x00025c38) bg_hwr_side_pane_g1_ParamLimits

0x3e79,	// (0x00025c38) bg_hwr_side_pane_g1

0xcea4,	// (0x0002ec63) cell_hwr_side_pane_ParamLimits

0xcea4,	// (0x0002ec63) cell_hwr_side_pane

0x7d87,	// (0x00029b46) fep_hwr_write_pane_g1_ParamLimits

0x7d87,	// (0x00029b46) fep_hwr_write_pane_g1

0x7d94,	// (0x00029b53) fep_hwr_write_pane_g2_ParamLimits

0x7d94,	// (0x00029b53) fep_hwr_write_pane_g2

0x7da1,	// (0x00029b60) fep_hwr_write_pane_g3_ParamLimits

0x7da1,	// (0x00029b60) fep_hwr_write_pane_g3

0xcec4,	// (0x0002ec83) fep_hwr_write_pane_g4_ParamLimits

0xcec4,	// (0x0002ec83) fep_hwr_write_pane_g4

0x0005,

0xfaee,	// (0x000318ad) fep_hwr_write_pane_g_ParamLimits

0xfaee,	// (0x000318ad) fep_hwr_write_pane_g

0x7cdb,	// (0x00029a9a) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7cdb,	// (0x00029a9a) bg_fep_hwr_candidate_pane_g2

0x7dc4,	// (0x00029b83) cell_hwr_candidate_pane_ParamLimits

0x7dc4,	// (0x00029b83) cell_hwr_candidate_pane

0x7dfe,	// (0x00029bbd) fep_hwr_candidate_pane_g1_ParamLimits

0x3ed9,	// (0x00025c98) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x3ed9,	// (0x00025c98) bg_popup_fep_shadow_pane_cp2

0x4028,	// (0x00025de7) fep_vkb_top_pane_g4_ParamLimits

0x4028,	// (0x00025de7) fep_vkb_top_pane_g4

0x4047,	// (0x00025e06) fep_vkb_side_pane_g2_ParamLimits

0x4047,	// (0x00025e06) fep_vkb_side_pane_g2

0x9b12,	// (0x0002b8d1) list_setting_pane_t4_ParamLimits

0x9b12,	// (0x0002b8d1) list_setting_pane_t4

0x9ba8,	// (0x0002b967) list_setting_number_pane_t5_ParamLimits

0x9ba8,	// (0x0002b967) list_setting_number_pane_t5

0xdbcb,	// (0x0002f98a) list_double_heading_pane_cp2_ParamLimits

0xdbcb,	// (0x0002f98a) list_double_heading_pane_cp2

0x1b1b,	// (0x000238da) list_double_heading_pane_g1_cp2_ParamLimits

0x1b1b,	// (0x000238da) list_double_heading_pane_g1_cp2

0x42dd,	// (0x0002609c) list_double_heading_pane_g2_cp2_ParamLimits

0x42dd,	// (0x0002609c) list_double_heading_pane_g2_cp2

0x42f1,	// (0x000260b0) list_double_heading_pane_t1_cp2_ParamLimits

0x42f1,	// (0x000260b0) list_double_heading_pane_t1_cp2

0x4307,	// (0x000260c6) list_double_heading_pane_t2_cp2_ParamLimits

0x4307,	// (0x000260c6) list_double_heading_pane_t2_cp2

0x0c57,	// (0x00022a16) aid_value_unit2

0x5cc2,	// (0x00027a81) popup_preview_fixed_window

0x0e82,	// (0x00022c41) bg_popup_preview_window_pane_cp02

0x4319,	// (0x000260d8) list_preview_fixed_pane

0x435f,	// (0x0002611e) list_empty_pane_fp_ParamLimits

0x435f,	// (0x0002611e) list_empty_pane_fp

0x435f,	// (0x0002611e) list_single_cale_day_pane_fp_ParamLimits

0x435f,	// (0x0002611e) list_single_cale_day_pane_fp

0x435f,	// (0x0002611e) list_single_graphic_heading_pane_fp_ParamLimits

0x435f,	// (0x0002611e) list_single_graphic_heading_pane_fp

0x435f,	// (0x0002611e) list_single_graphic_pane_fp_ParamLimits

0x435f,	// (0x0002611e) list_single_graphic_pane_fp

0x435f,	// (0x0002611e) list_single_heading_pane_fp_ParamLimits

0x435f,	// (0x0002611e) list_single_heading_pane_fp

0x435f,	// (0x0002611e) list_single_pane_fp_ParamLimits

0x435f,	// (0x0002611e) list_single_pane_fp

0x4373,	// (0x00026132) list_single_pane_fp_g1_ParamLimits

0x4373,	// (0x00026132) list_single_pane_fp_g1

0xa363,	// (0x0002c122) list_single_pane_fp_g2_ParamLimits

0xa363,	// (0x0002c122) list_single_pane_fp_g2

0xa36f,	// (0x0002c12e) list_single_pane_fp_g3_ParamLimits

0xa36f,	// (0x0002c12e) list_single_pane_fp_g3

0x437f,	// (0x0002613e) list_single_pane_fp_g4_ParamLimits

0x437f,	// (0x0002613e) list_single_pane_fp_g4

0x0003,

0xfb55,	// (0x00031914) list_single_pane_fp_g_ParamLimits

0xfb55,	// (0x00031914) list_single_pane_fp_g

0xa383,	// (0x0002c142) list_single_pane_fp_t1_ParamLimits

0xa383,	// (0x0002c142) list_single_pane_fp_t1

0xa39a,	// (0x0002c159) list_single_graphic_pane_fp_g1_ParamLimits

0xa39a,	// (0x0002c159) list_single_graphic_pane_fp_g1

0x4373,	// (0x00026132) list_single_graphic_pane_fp_g2_ParamLimits

0x4373,	// (0x00026132) list_single_graphic_pane_fp_g2

0xa363,	// (0x0002c122) list_single_graphic_pane_fp_g3_ParamLimits

0xa363,	// (0x0002c122) list_single_graphic_pane_fp_g3

0xa36f,	// (0x0002c12e) list_single_graphic_pane_fp_g4_ParamLimits

0xa36f,	// (0x0002c12e) list_single_graphic_pane_fp_g4

0x437f,	// (0x0002613e) list_single_graphic_pane_fp_g5_ParamLimits

0x437f,	// (0x0002613e) list_single_graphic_pane_fp_g5

0x0004,

0xfb5e,	// (0x0003191d) list_single_graphic_pane_fp_g_ParamLimits

0xfb5e,	// (0x0003191d) list_single_graphic_pane_fp_g

0xa3a6,	// (0x0002c165) list_single_graphic_pane_fp_t1_ParamLimits

0xa3a6,	// (0x0002c165) list_single_graphic_pane_fp_t1

0xa39a,	// (0x0002c159) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xa39a,	// (0x0002c159) list_single_graphic_heading_pane_fp_g1

0x4373,	// (0x00026132) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4373,	// (0x00026132) list_single_graphic_heading_pane_fp_g2

0xa363,	// (0x0002c122) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xa363,	// (0x0002c122) list_single_graphic_heading_pane_fp_g3

0xa36f,	// (0x0002c12e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xa36f,	// (0x0002c12e) list_single_graphic_heading_pane_fp_g4

0x437f,	// (0x0002613e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x437f,	// (0x0002613e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5e,	// (0x0003191d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5e,	// (0x0003191d) list_single_graphic_heading_pane_fp_g

0xa3bc,	// (0x0002c17b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xa3bc,	// (0x0002c17b) list_single_graphic_heading_pane_fp_t1

0xa3d2,	// (0x0002c191) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xa3d2,	// (0x0002c191) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb69,	// (0x00031928) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb69,	// (0x00031928) list_single_graphic_heading_pane_fp_t

0xa3e4,	// (0x0002c1a3) list_single_cale_day_pane_fp_g1_ParamLimits

0xa3e4,	// (0x0002c1a3) list_single_cale_day_pane_fp_g1

0x438b,	// (0x0002614a) list_single_cale_day_pane_fp_g2_ParamLimits

0x438b,	// (0x0002614a) list_single_cale_day_pane_fp_g2

0xa41c,	// (0x0002c1db) list_single_cale_day_pane_fp_g3_ParamLimits

0xa41c,	// (0x0002c1db) list_single_cale_day_pane_fp_g3

0xa444,	// (0x0002c203) list_single_cale_day_pane_fp_g4_ParamLimits

0xa444,	// (0x0002c203) list_single_cale_day_pane_fp_g4

0xa468,	// (0x0002c227) list_single_cale_day_pane_fp_g5_ParamLimits

0xa468,	// (0x0002c227) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6e,	// (0x0003192d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6e,	// (0x0003192d) list_single_cale_day_pane_fp_g

0xa48c,	// (0x0002c24b) list_single_cale_day_pane_fp_t1_ParamLimits

0xa48c,	// (0x0002c24b) list_single_cale_day_pane_fp_t1

0xa4b2,	// (0x0002c271) list_single_cale_day_pane_fp_t2_ParamLimits

0xa4b2,	// (0x0002c271) list_single_cale_day_pane_fp_t2

0xa4cb,	// (0x0002c28a) list_single_cale_day_pane_fp_t3_ParamLimits

0xa4cb,	// (0x0002c28a) list_single_cale_day_pane_fp_t3

0x0002,

0xfb79,	// (0x00031938) list_single_cale_day_pane_fp_t_ParamLimits

0xfb79,	// (0x00031938) list_single_cale_day_pane_fp_t

0x4373,	// (0x00026132) list_empty_pane_fp_g1_ParamLimits

0x4373,	// (0x00026132) list_empty_pane_fp_g1

0xa4e4,	// (0x0002c2a3) list_empty_pane_fp_t1

0xa4f2,	// (0x0002c2b1) list_empty_pane_fp_t2

0x0001,

0xfb80,	// (0x0003193f) list_empty_pane_fp_t

0x4373,	// (0x00026132) list_single_heading_pane_fp_g1_ParamLimits

0x4373,	// (0x00026132) list_single_heading_pane_fp_g1

0xa363,	// (0x0002c122) list_single_heading_pane_fp_g2_ParamLimits

0xa363,	// (0x0002c122) list_single_heading_pane_fp_g2

0xa36f,	// (0x0002c12e) list_single_heading_pane_fp_g3_ParamLimits

0xa36f,	// (0x0002c12e) list_single_heading_pane_fp_g3

0x0002,

0xfb85,	// (0x00031944) list_single_heading_pane_fp_g_ParamLimits

0xfb85,	// (0x00031944) list_single_heading_pane_fp_g

0xa500,	// (0x0002c2bf) list_single_heading_pane_fp_t1_ParamLimits

0xa500,	// (0x0002c2bf) list_single_heading_pane_fp_t1

0xa512,	// (0x0002c2d1) list_single_heading_pane_fp_t2_ParamLimits

0xa512,	// (0x0002c2d1) list_single_heading_pane_fp_t2

0x0001,

0xfb8c,	// (0x0003194b) list_single_heading_pane_fp_t_ParamLimits

0xfb8c,	// (0x0003194b) list_single_heading_pane_fp_t

0x1494,	// (0x00023253) aid_size_cell_fast

0x0e65,	// (0x00022c24) soft_indicator_pane_cp1_t1

0x14d1,	// (0x00023290) cell_app_pane_cp2_ParamLimits

0x14d1,	// (0x00023290) cell_app_pane_cp2

0x7c4e,	// (0x00029a0d) fep_hwr_candidate_drop_down_list_pane

0x7e18,	// (0x00029bd7) fep_hwr_candidate_pane_g3_ParamLimits

0x7e18,	// (0x00029bd7) fep_hwr_candidate_pane_g3

0x03c5,	// (0x00022184) fep_hwr_candidate_pane_g4_ParamLimits

0x03c5,	// (0x00022184) fep_hwr_candidate_pane_g4

0x0002,

0xfafb,	// (0x000318ba) fep_hwr_candidate_pane_g_ParamLimits

0xfafb,	// (0x000318ba) fep_hwr_candidate_pane_g

0x3f41,	// (0x00025d00) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x3f41,	// (0x00025d00) fep_vkb_candidate_drop_down_list_pane

0x4238,	// (0x00025ff7) fep_vkb_candidate_pane_g3

0x4240,	// (0x00025fff) fep_vkb_candidate_pane_g4

0x0002,

0xfb28,	// (0x000318e7) fep_vkb_candidate_pane_g

0x7f63,	// (0x00029d22) cell_hwr_candidate_pane_g1_ParamLimits

0x7f71,	// (0x00029d30) cell_hwr_candidate_pane_g3_ParamLimits

0x7f71,	// (0x00029d30) cell_hwr_candidate_pane_g3

0xa342,	// (0x0002c101) cell_hwr_candidate_pane_g4_ParamLimits

0xa342,	// (0x0002c101) cell_hwr_candidate_pane_g4

0x0002,

0xfb47,	// (0x00031906) cell_hwr_candidate_pane_g_ParamLimits

0xfb47,	// (0x00031906) cell_hwr_candidate_pane_g

0x4299,	// (0x00026058) cell_vkb_candidate_pane_g3_ParamLimits

0x4299,	// (0x00026058) cell_vkb_candidate_pane_g3

0x42b4,	// (0x00026073) cell_vkb_candidate_pane_g4_ParamLimits

0x42b4,	// (0x00026073) cell_vkb_candidate_pane_g4

0x4397,	// (0x00026156) cell_app_pane_cp2_g1_ParamLimits

0x4397,	// (0x00026156) cell_app_pane_cp2_g1

0x43b5,	// (0x00026174) cell_app_pane_cp2_g2_ParamLimits

0x43b5,	// (0x00026174) cell_app_pane_cp2_g2

0x0001,

0xfb91,	// (0x00031950) cell_app_pane_cp2_g_ParamLimits

0xfb91,	// (0x00031950) cell_app_pane_cp2_g

0x43c1,	// (0x00026180) cell_app_pane_cp2_t1_ParamLimits

0x43c1,	// (0x00026180) cell_app_pane_cp2_t1

0x12ef,	// (0x000230ae) grid_highlight_pane_cp1_ParamLimits

0x12ef,	// (0x000230ae) grid_highlight_pane_cp1

0x7faf,	// (0x00029d6e) cell_hwr_candidate_pane_cp1_ParamLimits

0x7faf,	// (0x00029d6e) cell_hwr_candidate_pane_cp1

0x7f63,	// (0x00029d22) fep_hwr_candidate_drop_down_list_pane_g1

0x7fcd,	// (0x00029d8c) fep_hwr_candidate_drop_down_list_pane_g2

0x7fda,	// (0x00029d99) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb96,	// (0x00031955) fep_hwr_candidate_drop_down_list_pane_g

0x7fe7,	// (0x00029da6) fep_hwr_candidate_drop_down_list_scroll_pane

0x7ff0,	// (0x00029daf) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7ff0,	// (0x00029daf) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7ffd,	// (0x00029dbc) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7ffd,	// (0x00029dbc) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x800a,	// (0x00029dc9) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x800a,	// (0x00029dc9) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x8017,	// (0x00029dd6) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8017,	// (0x00029dd6) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x8032,	// (0x00029df1) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8032,	// (0x00029df1) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x804d,	// (0x00029e0c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x804d,	// (0x00029e0c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8068,	// (0x00029e27) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8068,	// (0x00029e27) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8083,	// (0x00029e42) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8083,	// (0x00029e42) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9d,	// (0x0003195c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9d,	// (0x0003195c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xeaf2,	// (0x000308b1) cell_vkb_candidate_pane_cp1_ParamLimits

0xeaf2,	// (0x000308b1) cell_vkb_candidate_pane_cp1

0x4028,	// (0x00025de7) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4028,	// (0x00025de7) fep_vkb_candidate_drop_down_list_pane_g1

0x43d3,	// (0x00026192) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x43d3,	// (0x00026192) fep_vkb_candidate_drop_down_list_pane_g2

0x43e0,	// (0x0002619f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x43e0,	// (0x0002619f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbae,	// (0x0003196d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbae,	// (0x0003196d) fep_vkb_candidate_drop_down_list_pane_g

0x43ed,	// (0x000261ac) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x43ed,	// (0x000261ac) fep_vkb_candidate_drop_down_list_scroll_pane

0x43fa,	// (0x000261b9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x43fa,	// (0x000261b9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4407,	// (0x000261c6) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4407,	// (0x000261c6) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4413,	// (0x000261d2) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4413,	// (0x000261d2) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4257,	// (0x00026016) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4257,	// (0x00026016) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4278,	// (0x00026037) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4278,	// (0x00026037) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x441f,	// (0x000261de) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x441f,	// (0x000261de) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4440,	// (0x000261ff) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4440,	// (0x000261ff) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4461,	// (0x00026220) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4461,	// (0x00026220) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb5,	// (0x00031974) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb5,	// (0x00031974) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xd45d,	// (0x0002f21c) title_pane_g1_ParamLimits

0xd474,	// (0x0002f233) title_pane_g2_ParamLimits

0xf529,	// (0x000312e8) title_pane_g_ParamLimits

0x180c,	// (0x000235cb) aid_call2_pane

0x1804,	// (0x000235c3) aid_call_pane

0x1814,	// (0x000235d3) popup_clock_analogue_window_g1

0x1814,	// (0x000235d3) popup_clock_analogue_window_g2

0x63aa,	// (0x00028169) popup_clock_analogue_window_g3

0x63b3,	// (0x00028172) popup_clock_analogue_window_g4

0x0c69,	// (0x00022a28) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x00031492) popup_clock_analogue_window_g

0x63bb,	// (0x0002817a) popup_clock_analogue_window_t1

0x63ff,	// (0x000281be) clock_digital_number_pane_ParamLimits

0x63ff,	// (0x000281be) clock_digital_number_pane

0x640b,	// (0x000281ca) clock_digital_number_pane_cp02_ParamLimits

0x640b,	// (0x000281ca) clock_digital_number_pane_cp02

0x6417,	// (0x000281d6) clock_digital_number_pane_cp03_ParamLimits

0x6417,	// (0x000281d6) clock_digital_number_pane_cp03

0x6423,	// (0x000281e2) clock_digital_number_pane_cp04_ParamLimits

0x6423,	// (0x000281e2) clock_digital_number_pane_cp04

0x642f,	// (0x000281ee) clock_digital_separator_pane_ParamLimits

0x642f,	// (0x000281ee) clock_digital_separator_pane

0x643b,	// (0x000281fa) popup_clock_digital_window_t1_ParamLimits

0x643b,	// (0x000281fa) popup_clock_digital_window_t1

0x0c69,	// (0x00022a28) clock_digital_number_pane_g1

0x0c69,	// (0x00022a28) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x0003149d) clock_digital_number_pane_g

0x0c69,	// (0x00022a28) clock_digital_separator_pane_g1

0x0c69,	// (0x00022a28) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x0003149d) clock_digital_separator_pane_g

0xe0cd,	// (0x0002fe8c) aid_fill_nsta_ParamLimits

0xe1e4,	// (0x0002ffa3) indicator_nsta_pane_ParamLimits

0x1f31,	// (0x00023cf0) popup_clock_analogue_window

0x1f31,	// (0x00023cf0) popup_clock_digital_window

0xe937,	// (0x000306f6) grid_indicator_nsta_pane_ParamLimits

0x39ec,	// (0x000257ab) clock_nsta_pane_t2

0x0001,

0xfa7b,	// (0x0003183a) clock_nsta_pane_t

0x6313,	// (0x000280d2) aid_size_max_handle

0xc5dc,	// (0x0002e39b) aid_size_min_handle

0x1ca6,	// (0x00023a65) editor_scroll_pane

0x447c,	// (0x0002623b) ex_editor_pane

0x1451,	// (0x00023210) scroll_pane_cp13

0x129f,	// (0x0002305e) scroll_pane_cp14

0x1843,	// (0x00023602) scroll_pane_cp36

0xdbd7,	// (0x0002f996) list_single_graphic_hl_pane_cp2_ParamLimits

0xdbd7,	// (0x0002f996) list_single_graphic_hl_pane_cp2

0xddc2,	// (0x0002fb81) list_single_graphic_hl_pane_ParamLimits

0xddc2,	// (0x0002fb81) list_single_graphic_hl_pane

0xa528,	// (0x0002c2e7) aid_size_min_hl_cp1

0x4484,	// (0x00026243) list_highlight_pane_cp34_ParamLimits

0x4484,	// (0x00026243) list_highlight_pane_cp34

0x4495,	// (0x00026254) list_single_graphic_hl_pane_g1_ParamLimits

0x4495,	// (0x00026254) list_single_graphic_hl_pane_g1

0xdde9,	// (0x0002fba8) list_single_graphic_hl_pane_g2_ParamLimits

0xdde9,	// (0x0002fba8) list_single_graphic_hl_pane_g2

0xdde9,	// (0x0002fba8) list_single_graphic_hl_pane_g3_ParamLimits

0xdde9,	// (0x0002fba8) list_single_graphic_hl_pane_g3

0x9811,	// (0x0002b5d0) list_single_graphic_hl_pane_g4_ParamLimits

0x9811,	// (0x0002b5d0) list_single_graphic_hl_pane_g4

0xddf5,	// (0x0002fbb4) list_single_graphic_hl_pane_g5_ParamLimits

0xddf5,	// (0x0002fbb4) list_single_graphic_hl_pane_g5

0x0004,

0xfbc6,	// (0x00031985) list_single_graphic_hl_pane_g_ParamLimits

0xfbc6,	// (0x00031985) list_single_graphic_hl_pane_g

0xde09,	// (0x0002fbc8) list_single_graphic_hl_pane_t1_ParamLimits

0xde09,	// (0x0002fbc8) list_single_graphic_hl_pane_t1

0x44a2,	// (0x00026261) aid_size_min_hl_cp2

0x44ab,	// (0x0002626a) list_highlight_pane_cp34_cp2_ParamLimits

0x44ab,	// (0x0002626a) list_highlight_pane_cp34_cp2

0x4495,	// (0x00026254) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4495,	// (0x00026254) list_single_graphic_hl_pane_g1_cp2

0x44b8,	// (0x00026277) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x44b8,	// (0x00026277) list_single_graphic_hl_pane_g2_cp2

0x44c4,	// (0x00026283) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x44c4,	// (0x00026283) list_single_graphic_hl_pane_g3_cp2

0x1b1b,	// (0x000238da) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1b1b,	// (0x000238da) list_single_graphic_hl_pane_g4_cp2

0x42dd,	// (0x0002609c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x42dd,	// (0x0002609c) list_single_graphic_hl_pane_g5_cp2

0xc606,	// (0x0002e3c5) control_pane_g4_ParamLimits

0xc606,	// (0x0002e3c5) control_pane_g4

0x1488,	// (0x00023247) bg_popup_sub_pane_cp10_ParamLimits

0x3e06,	// (0x00025bc5) list_choice_list_pane_ParamLimits

0x3e15,	// (0x00025bd4) scroll_pane_cp23

0x0e82,	// (0x00022c41) bg_popup_preview_window_pane_cp02_ParamLimits

0x4319,	// (0x000260d8) list_preview_fixed_pane_ParamLimits

0x432f,	// (0x000260ee) list_preview_fixed_pane_cp_ParamLimits

0x432f,	// (0x000260ee) list_preview_fixed_pane_cp

0x433b,	// (0x000260fa) popup_preview_fixed_window_g1_ParamLimits

0x433b,	// (0x000260fa) popup_preview_fixed_window_g1

0x4347,	// (0x00026106) popup_preview_fixed_window_g2_ParamLimits

0x4347,	// (0x00026106) popup_preview_fixed_window_g2

0x0002,

0xfb4e,	// (0x0003190d) popup_preview_fixed_window_g_ParamLimits

0xfb4e,	// (0x0003190d) popup_preview_fixed_window_g

0x6217,	// (0x00027fd6) aid_navi_side_left_pane_ParamLimits

0x6227,	// (0x00027fe6) aid_navi_side_right_pane_ParamLimits

0x6236,	// (0x00027ff5) navi_icon_pane_stacon_ParamLimits

0x6246,	// (0x00028005) navi_navi_pane_stacon_ParamLimits

0x6236,	// (0x00027ff5) navi_text_pane_stacon_ParamLimits

0x5ba3,	// (0x00027962) main_text_info_pane

0x44e6,	// (0x000262a5) listscroll_text_info_pane

0x44ee,	// (0x000262ad) list_text_info_pane_ParamLimits

0x44ee,	// (0x000262ad) list_text_info_pane

0x44fd,	// (0x000262bc) scroll_pane_cp24_ParamLimits

0x44fd,	// (0x000262bc) scroll_pane_cp24

0xeb12,	// (0x000308d1) list_text_info_pane_t1_ParamLimits

0xeb12,	// (0x000308d1) list_text_info_pane_t1

0xc74d,	// (0x0002e50c) popup_fast_swap2_window_ParamLimits

0xc74d,	// (0x0002e50c) popup_fast_swap2_window

0x451b,	// (0x000262da) aid_size_cell_fast2

0x0c5f,	// (0x00022a1e) bg_popup_window_pane_cp17

0x2404,	// (0x000241c3) heading_pane_cp2

0x240c,	// (0x000241cb) listscroll_fast2_pane

0x4525,	// (0x000262e4) grid_fast2_pane

0x452d,	// (0x000262ec) listscroll_fast2_pane_g1

0x4535,	// (0x000262f4) listscroll_fast2_pane_g2

0x0001,

0xfbd1,	// (0x00031990) listscroll_fast2_pane_g

0x1451,	// (0x00023210) scroll_pane_cp26

0x453d,	// (0x000262fc) cell_fast2_pane_ParamLimits

0x453d,	// (0x000262fc) cell_fast2_pane

0x4553,	// (0x00026312) cell_fast2_pane_g1

0x455c,	// (0x0002631b) cell_fast2_pane_g2

0x4565,	// (0x00026324) cell_fast2_pane_g3

0x0002,

0xfbd6,	// (0x00031995) cell_fast2_pane_g

0x1100,	// (0x00022ebf) grid_highlight_pane_cp9

0x6a1d,	// (0x000287dc) main_eswt_pane_ParamLimits

0x6a1d,	// (0x000287dc) main_eswt_pane

0x4512,	// (0x000262d1) list_single_text_info_pane

0x456d,	// (0x0002632c) eswt_ctrl_button_pane

0x456d,	// (0x0002632c) eswt_ctrl_canvas_pane

0x4575,	// (0x00026334) eswt_ctrl_combo_pane

0x456d,	// (0x0002632c) eswt_ctrl_default_pane

0x456d,	// (0x0002632c) eswt_ctrl_label_pane

0x457d,	// (0x0002633c) eswt_ctrl_wait_pane

0x4585,	// (0x00026344) eswt_shell_pane

0x0c5f,	// (0x00022a1e) listscroll_eswt_app_pane

0x45a1,	// (0x00026360) popup_eswt_tasktip_window_ParamLimits

0x45a1,	// (0x00026360) popup_eswt_tasktip_window

0x20da,	// (0x00023e99) bg_popup_window_pane_cp18

0x45b2,	// (0x00026371) eswt_control_pane_g1_ParamLimits

0x45b2,	// (0x00026371) eswt_control_pane_g1

0x45bf,	// (0x0002637e) eswt_control_pane_g2_ParamLimits

0x45bf,	// (0x0002637e) eswt_control_pane_g2

0x45cc,	// (0x0002638b) eswt_control_pane_g3_ParamLimits

0x45cc,	// (0x0002638b) eswt_control_pane_g3

0x45d9,	// (0x00026398) eswt_control_pane_g4_ParamLimits

0x45d9,	// (0x00026398) eswt_control_pane_g4

0x0003,

0xfbdd,	// (0x0003199c) eswt_control_pane_g_ParamLimits

0xfbdd,	// (0x0003199c) eswt_control_pane_g

0x12ef,	// (0x000230ae) bg_button_pane_ParamLimits

0x12ef,	// (0x000230ae) bg_button_pane

0x1115,	// (0x00022ed4) common_borders_pane_copy2_ParamLimits

0x1115,	// (0x00022ed4) common_borders_pane_copy2

0x45e6,	// (0x000263a5) control_button_pane_g1_ParamLimits

0x45e6,	// (0x000263a5) control_button_pane_g1

0x45f2,	// (0x000263b1) control_button_pane_g2_ParamLimits

0x45f2,	// (0x000263b1) control_button_pane_g2

0x45fe,	// (0x000263bd) control_button_pane_g3_ParamLimits

0x45fe,	// (0x000263bd) control_button_pane_g3

0x0002,

0xfbe6,	// (0x000319a5) control_button_pane_g_ParamLimits

0xfbe6,	// (0x000319a5) control_button_pane_g

0x4612,	// (0x000263d1) control_button_pane_t1

0x4620,	// (0x000263df) control_button_pane_t2

0x0001,

0xfbed,	// (0x000319ac) control_button_pane_t

0x2032,	// (0x00023df1) bg_button_pane_g1

0x203a,	// (0x00023df9) bg_button_pane_g2

0x2042,	// (0x00023e01) bg_button_pane_g3

0x204a,	// (0x00023e09) bg_button_pane_g4

0x2052,	// (0x00023e11) bg_button_pane_g5

0x205a,	// (0x00023e19) bg_button_pane_g6

0x2062,	// (0x00023e21) bg_button_pane_g7

0x206a,	// (0x00023e29) bg_button_pane_g8

0x2072,	// (0x00023e31) bg_button_pane_g9

0x0008,

0xf83c,	// (0x000315fb) bg_button_pane_g

0x3dc1,	// (0x00025b80) common_borders_pane_ParamLimits

0x3dc1,	// (0x00025b80) common_borders_pane

0x45b2,	// (0x00026371) eswt_control_pane_g1_copy1_ParamLimits

0x45b2,	// (0x00026371) eswt_control_pane_g1_copy1

0x45bf,	// (0x0002637e) eswt_control_pane_g2_copy1_ParamLimits

0x45bf,	// (0x0002637e) eswt_control_pane_g2_copy1

0x45cc,	// (0x0002638b) eswt_control_pane_g3_copy1_ParamLimits

0x45cc,	// (0x0002638b) eswt_control_pane_g3_copy1

0x45d9,	// (0x00026398) eswt_control_pane_g4_copy1_ParamLimits

0x45d9,	// (0x00026398) eswt_control_pane_g4_copy1

0x3dfc,	// (0x00025bbb) bg_eswt_ctrl_canvas_pane_g1

0x3dc1,	// (0x00025b80) common_borders_pane_cp2_ParamLimits

0x3dc1,	// (0x00025b80) common_borders_pane_cp2

0x3dc1,	// (0x00025b80) common_borders_pane_cp3_ParamLimits

0x3dc1,	// (0x00025b80) common_borders_pane_cp3

0x462e,	// (0x000263ed) separator_horizontal_pane

0x16a3,	// (0x00023462) separator_vertical_pane

0x45b2,	// (0x00026371) eswt_control_pane_g1_copy2_ParamLimits

0x45b2,	// (0x00026371) eswt_control_pane_g1_copy2

0x45bf,	// (0x0002637e) eswt_control_pane_g2_copy2_ParamLimits

0x45bf,	// (0x0002637e) eswt_control_pane_g2_copy2

0x45cc,	// (0x0002638b) eswt_control_pane_g3_copy2_ParamLimits

0x45cc,	// (0x0002638b) eswt_control_pane_g3_copy2

0x45d9,	// (0x00026398) eswt_control_pane_g4_copy2_ParamLimits

0x45d9,	// (0x00026398) eswt_control_pane_g4_copy2

0x0c5f,	// (0x00022a1e) common_borders_pane_cp4

0x4636,	// (0x000263f5) separator_horizontal_pane_g1

0x463f,	// (0x000263fe) separator_horizontal_pane_g2

0x4648,	// (0x00026407) separator_horizontal_pane_g3

0x0002,

0xfbf2,	// (0x000319b1) separator_horizontal_pane_g

0x45b2,	// (0x00026371) eswt_control_pane_g1_copy3_ParamLimits

0x45b2,	// (0x00026371) eswt_control_pane_g1_copy3

0x45bf,	// (0x0002637e) eswt_control_pane_g2_copy3_ParamLimits

0x45bf,	// (0x0002637e) eswt_control_pane_g2_copy3

0x45cc,	// (0x0002638b) eswt_control_pane_g3_copy3_ParamLimits

0x45cc,	// (0x0002638b) eswt_control_pane_g3_copy3

0x45d9,	// (0x00026398) eswt_control_pane_g4_copy3_ParamLimits

0x45d9,	// (0x00026398) eswt_control_pane_g4_copy3

0x0c5f,	// (0x00022a1e) common_borders_pane_cp5

0x4651,	// (0x00026410) separator_vertical_pane_g1

0x465a,	// (0x00026419) separator_vertical_pane_g2

0x4663,	// (0x00026422) separator_vertical_pane_g3

0x0002,

0xfbf9,	// (0x000319b8) separator_vertical_pane_g

0x45b2,	// (0x00026371) eswt_control_pane_g1_copy4_ParamLimits

0x45b2,	// (0x00026371) eswt_control_pane_g1_copy4

0x45bf,	// (0x0002637e) eswt_control_pane_g2_copy4_ParamLimits

0x45bf,	// (0x0002637e) eswt_control_pane_g2_copy4

0x45cc,	// (0x0002638b) eswt_control_pane_g3_copy4_ParamLimits

0x45cc,	// (0x0002638b) eswt_control_pane_g3_copy4

0x45d9,	// (0x00026398) eswt_control_pane_g4_copy4_ParamLimits

0x45d9,	// (0x00026398) eswt_control_pane_g4_copy4

0xeb2d,	// (0x000308ec) eswt_ctrl_combo_button_pane

0xeb35,	// (0x000308f4) eswt_ctrl_input_pane

0xeb3d,	// (0x000308fc) popup_choice_list_window_cp70

0xeb45,	// (0x00030904) eswt_ctrl_input_pane_t1

0x0c5f,	// (0x00022a1e) input_focus_pane_cp70

0x3dc1,	// (0x00025b80) bg_button_pane_cp70_ParamLimits

0x3dc1,	// (0x00025b80) bg_button_pane_cp70

0x345b,	// (0x0002521a) eswt_ctrl_combo_button_pane_g1

0x466c,	// (0x0002642b) wait_bar_pane_cp70

0x20da,	// (0x00023e99) bg_popup_window_pane_cp70_ParamLimits

0x20da,	// (0x00023e99) bg_popup_window_pane_cp70

0x4674,	// (0x00026433) popup_eswt_tasktip_window_t1

0x468a,	// (0x00026449) wait_bar_pane_cp71_ParamLimits

0x468a,	// (0x00026449) wait_bar_pane_cp71

0x4696,	// (0x00026455) grid_eswt_app_pane

0x16ac,	// (0x0002346b) scroll_pane_cp70

0xeb53,	// (0x00030912) cell_eswt_app_pane_ParamLimits

0xeb53,	// (0x00030912) cell_eswt_app_pane

0xeb7b,	// (0x0003093a) cell_eswt_app_pane_g1_ParamLimits

0xeb7b,	// (0x0003093a) cell_eswt_app_pane_g1

0xebaa,	// (0x00030969) cell_eswt_app_pane_g2_ParamLimits

0xebaa,	// (0x00030969) cell_eswt_app_pane_g2

0x0001,

0xfc00,	// (0x000319bf) cell_eswt_app_pane_g_ParamLimits

0xfc00,	// (0x000319bf) cell_eswt_app_pane_g

0xebd3,	// (0x00030992) cell_eswt_app_pane_t1_ParamLimits

0xebd3,	// (0x00030992) cell_eswt_app_pane_t1

0x469f,	// (0x0002645e) grid_highlight_pane_cp70_ParamLimits

0x469f,	// (0x0002645e) grid_highlight_pane_cp70

0x1309,	// (0x000230c8) set_content_pane_g1

0x1e25,	// (0x00023be4) status_small_volume_pane

0x81be,	// (0x00029f7d) status_small_volume_pane_g1

0x81c6,	// (0x00029f85) volume_small2_pane

0x81cf,	// (0x00029f8e) volume_small2_pane_g1

0x81d8,	// (0x00029f97) volume_small2_pane_g2

0x81e1,	// (0x00029fa0) volume_small2_pane_g3

0x81ea,	// (0x00029fa9) volume_small2_pane_g4

0x81f3,	// (0x00029fb2) volume_small2_pane_g5

0x81fc,	// (0x00029fbb) volume_small2_pane_g6

0x8205,	// (0x00029fc4) volume_small2_pane_g7

0x820e,	// (0x00029fcd) volume_small2_pane_g8

0x8217,	// (0x00029fd6) volume_small2_pane_g9

0x8220,	// (0x00029fdf) volume_small2_pane_g10

0x0009,

0xfc05,	// (0x000319c4) volume_small2_pane_g

0x412f,	// (0x00025eee) fep_vkb_top_text_pane_g1_ParamLimits

0xea9a,	// (0x00030859) fep_vkb_top_text_pane_t1_ParamLimits

0x4353,	// (0x00026112) popup_preview_fixed_window_g3_ParamLimits

0x4353,	// (0x00026112) popup_preview_fixed_window_g3

0xcc6d,	// (0x0002ea2c) popup_toolbar_trans_pane

0x315b,	// (0x00024f1a) aid_height_set_list_ParamLimits

0x3167,	// (0x00024f26) aid_size_parent_ParamLimits

0x1488,	// (0x00023247) list_highlight_pane_cp2_ParamLimits

0x1309,	// (0x000230c8) set_content_pane_g1_ParamLimits

0x14d1,	// (0x00023290) list_single_image_pane_ParamLimits

0x14d1,	// (0x00023290) list_single_image_pane

0xec05,	// (0x000309c4) aid_size_cell_image_ParamLimits

0xec05,	// (0x000309c4) aid_size_cell_image

0xec12,	// (0x000309d1) grid_single_image_pane_ParamLimits

0xec12,	// (0x000309d1) grid_single_image_pane

0x1309,	// (0x000230c8) list_single_image_pane_g1_ParamLimits

0x1309,	// (0x000230c8) list_single_image_pane_g1

0x1315,	// (0x000230d4) list_single_image_pane_g2_ParamLimits

0x1315,	// (0x000230d4) list_single_image_pane_g2

0x0001,

0xfc1a,	// (0x000319d9) list_single_image_pane_g_ParamLimits

0xfc1a,	// (0x000319d9) list_single_image_pane_g

0x3c80,	// (0x00025a3f) list_single_image_pane_t1_ParamLimits

0x3c80,	// (0x00025a3f) list_single_image_pane_t1

0xec20,	// (0x000309df) cell_image_list_pane_ParamLimits

0xec20,	// (0x000309df) cell_image_list_pane

0xec34,	// (0x000309f3) cell_image_list_pane_g1

0xec3d,	// (0x000309fc) cell_image_list_pane_g2

0x0001,

0xfc1f,	// (0x000319de) cell_image_list_pane_g

0x46ab,	// (0x0002646a) aid_size_cell_tb_trans_pane

0x12ef,	// (0x000230ae) bg_tb_trans_pane

0x46bd,	// (0x0002647c) grid_tb_trans_pane

0x2032,	// (0x00023df1) bg_tb_trans_pane_g1

0x203a,	// (0x00023df9) bg_tb_trans_pane_g2

0x2042,	// (0x00023e01) bg_tb_trans_pane_g3

0x204a,	// (0x00023e09) bg_tb_trans_pane_g4

0x2052,	// (0x00023e11) bg_tb_trans_pane_g5

0x206a,	// (0x00023e29) bg_tb_trans_pane_g6

0x2072,	// (0x00023e31) bg_tb_trans_pane_g7

0x205a,	// (0x00023e19) bg_tb_trans_pane_g8

0x2062,	// (0x00023e21) bg_tb_trans_pane_g9

0x0008,

0xfc24,	// (0x000319e3) bg_tb_trans_pane_g

0x46d1,	// (0x00026490) cell_toolbar_trans_pane_ParamLimits

0x46d1,	// (0x00026490) cell_toolbar_trans_pane

0x3dfc,	// (0x00025bbb) cell_toolbar_trans_pane_g1

0xe9e4,	// (0x000307a3) list_form2_midp_pane_t1

0xe9f2,	// (0x000307b1) list_form2_midp_pane_t2

0x0001,

0xfac1,	// (0x00031880) list_form2_midp_pane_t

0x3aba,	// (0x00025879) scroll_pane_cp51_ParamLimits

0x3c30,	// (0x000259ef) form2_midp_wait_pane_g1

0x3c39,	// (0x000259f8) form2_midp_wait_pane_g2

0x3c42,	// (0x00025a01) form2_midp_wait_pane_g3

0x0002,

0xfad6,	// (0x00031895) form2_midp_wait_pane_g

0x0d4f,	// (0x00022b0e) list_highlight_pane_cp21_ParamLimits

0x3c96,	// (0x00025a55) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x3ca5,	// (0x00025a64) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x322d,	// (0x00024fec) list_single_2graphic_im_pane_ParamLimits

0x322d,	// (0x00024fec) list_single_2graphic_im_pane

0xec46,	// (0x00030a05) list_single_2graphic_im_pane_g1_ParamLimits

0xec46,	// (0x00030a05) list_single_2graphic_im_pane_g1

0xec57,	// (0x00030a16) list_single_2graphic_im_pane_g2_ParamLimits

0xec57,	// (0x00030a16) list_single_2graphic_im_pane_g2

0xec63,	// (0x00030a22) list_single_2graphic_im_pane_g3_ParamLimits

0xec63,	// (0x00030a22) list_single_2graphic_im_pane_g3

0x0003,

0xfc37,	// (0x000319f6) list_single_2graphic_im_pane_g_ParamLimits

0xfc37,	// (0x000319f6) list_single_2graphic_im_pane_g

0xec77,	// (0x00030a36) list_single_2graphic_im_pane_t1_ParamLimits

0xec77,	// (0x00030a36) list_single_2graphic_im_pane_t1

0x435f,	// (0x0002611e) list_single_graphic_2heading_pane_fp_ParamLimits

0x435f,	// (0x0002611e) list_single_graphic_2heading_pane_fp

0xa39a,	// (0x0002c159) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xa39a,	// (0x0002c159) list_single_graphic_2heading_pane_fp_g1

0x4373,	// (0x00026132) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4373,	// (0x00026132) list_single_graphic_2heading_pane_fp_g2

0xa363,	// (0x0002c122) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xa363,	// (0x0002c122) list_single_graphic_2heading_pane_fp_g3

0xa36f,	// (0x0002c12e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xa36f,	// (0x0002c12e) list_single_graphic_2heading_pane_fp_g4

0x437f,	// (0x0002613e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x437f,	// (0x0002613e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5e,	// (0x0003191d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5e,	// (0x0003191d) list_single_graphic_2heading_pane_fp_g

0xa567,	// (0x0002c326) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xa567,	// (0x0002c326) list_single_graphic_2heading_pane_fp_t1

0xa3d2,	// (0x0002c191) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xa3d2,	// (0x0002c191) list_single_graphic_2heading_pane_fp_t2

0xa57d,	// (0x0002c33c) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xa57d,	// (0x0002c33c) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc40,	// (0x000319ff) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc40,	// (0x000319ff) list_single_graphic_2heading_pane_fp_t

0x3e85,	// (0x00025c44) fep_hwr_write_pane_g5_ParamLimits

0x3e85,	// (0x00025c44) fep_hwr_write_pane_g5

0x3e91,	// (0x00025c50) fep_hwr_write_pane_g6_ParamLimits

0x3e91,	// (0x00025c50) fep_hwr_write_pane_g6

0x4585,	// (0x00026344) eswt_shell_pane_ParamLimits

0x20da,	// (0x00023e99) bg_popup_window_pane_cp18_ParamLimits

0x30ff,	// (0x00024ebe) heading_pane_cp70

0x4674,	// (0x00026433) popup_eswt_tasktip_window_t1_ParamLimits

0xe111,	// (0x0002fed0) aid_touch_tab_arrow_left

0xe125,	// (0x0002fee4) aid_touch_tab_arrow_right

0xd493,	// (0x0002f252) title_pane_g3_ParamLimits

0xd493,	// (0x0002f252) title_pane_g3

0x12bf,	// (0x0002307e) set_value_pane_g1

0xcc6d,	// (0x0002ea2c) popup_toolbar_trans_pane_ParamLimits

0x46ab,	// (0x0002646a) aid_size_cell_tb_trans_pane_ParamLimits

0x12ef,	// (0x000230ae) bg_tb_trans_pane_ParamLimits

0x46bd,	// (0x0002647c) grid_tb_trans_pane_ParamLimits

0x0e82,	// (0x00022c41) cont_note_pane_ParamLimits

0x0e82,	// (0x00022c41) cont_note_pane

0x1115,	// (0x00022ed4) cont_snote2_single_text_pane_ParamLimits

0x1115,	// (0x00022ed4) cont_snote2_single_text_pane

0x1115,	// (0x00022ed4) cont_snote2_single_graphic_pane_ParamLimits

0x1115,	// (0x00022ed4) cont_snote2_single_graphic_pane

0x2622,	// (0x000243e1) cont_note_wait_pane_ParamLimits

0x2622,	// (0x000243e1) cont_note_wait_pane

0x2622,	// (0x000243e1) cont_note_image_pane_ParamLimits

0x2622,	// (0x000243e1) cont_note_image_pane

0x4703,	// (0x000264c2) popup_note2_window_g1_ParamLimits

0x4703,	// (0x000264c2) popup_note2_window_g1

0x4734,	// (0x000264f3) popup_note2_window_t1_ParamLimits

0x4734,	// (0x000264f3) popup_note2_window_t1

0x4779,	// (0x00026538) popup_note2_window_t2_ParamLimits

0x4779,	// (0x00026538) popup_note2_window_t2

0x47be,	// (0x0002657d) popup_note2_window_t3_ParamLimits

0x47be,	// (0x0002657d) popup_note2_window_t3

0x4803,	// (0x000265c2) popup_note2_window_t4_ParamLimits

0x4803,	// (0x000265c2) popup_note2_window_t4

0x0f06,	// (0x00022cc5) popup_note2_window_t5_ParamLimits

0x0f06,	// (0x00022cc5) popup_note2_window_t5

0x0004,

0xfc4c,	// (0x00031a0b) popup_note2_window_t_ParamLimits

0xfc4c,	// (0x00031a0b) popup_note2_window_t

0x4832,	// (0x000265f1) popup_note2_image_window_g1_ParamLimits

0x4832,	// (0x000265f1) popup_note2_image_window_g1

0x483e,	// (0x000265fd) popup_note2_image_window_g2_ParamLimits

0x483e,	// (0x000265fd) popup_note2_image_window_g2

0x0001,

0xfc57,	// (0x00031a16) popup_note2_image_window_g_ParamLimits

0xfc57,	// (0x00031a16) popup_note2_image_window_g

0x4850,	// (0x0002660f) popup_note2_image_window_t1_ParamLimits

0x4850,	// (0x0002660f) popup_note2_image_window_t1

0x4868,	// (0x00026627) popup_note2_image_window_t2_ParamLimits

0x4868,	// (0x00026627) popup_note2_image_window_t2

0x4880,	// (0x0002663f) popup_note2_image_window_t3_ParamLimits

0x4880,	// (0x0002663f) popup_note2_image_window_t3

0x0002,

0xfc5c,	// (0x00031a1b) popup_note2_image_window_t_ParamLimits

0xfc5c,	// (0x00031a1b) popup_note2_image_window_t

0x2630,	// (0x000243ef) popup_note2_wait_window_g1_ParamLimits

0x2630,	// (0x000243ef) popup_note2_wait_window_g1

0x263c,	// (0x000243fb) popup_note2_wait_window_g2_ParamLimits

0x263c,	// (0x000243fb) popup_note2_wait_window_g2

0x2648,	// (0x00024407) popup_note2_wait_window_g3_ParamLimits

0x2648,	// (0x00024407) popup_note2_wait_window_g3

0x0002,

0xf81e,	// (0x000315dd) popup_note2_wait_window_g_ParamLimits

0xf81e,	// (0x000315dd) popup_note2_wait_window_g

0x489c,	// (0x0002665b) popup_note2_wait_window_t1_ParamLimits

0x489c,	// (0x0002665b) popup_note2_wait_window_t1

0x48ba,	// (0x00026679) popup_note2_wait_window_t2_ParamLimits

0x48ba,	// (0x00026679) popup_note2_wait_window_t2

0x48d8,	// (0x00026697) popup_note2_wait_window_t3_ParamLimits

0x48d8,	// (0x00026697) popup_note2_wait_window_t3

0x48ea,	// (0x000266a9) popup_note2_wait_window_t4_ParamLimits

0x48ea,	// (0x000266a9) popup_note2_wait_window_t4

0x0003,

0xfc63,	// (0x00031a22) popup_note2_wait_window_t_ParamLimits

0xfc63,	// (0x00031a22) popup_note2_wait_window_t

0x48fc,	// (0x000266bb) wait_bar2_pane_ParamLimits

0x48fc,	// (0x000266bb) wait_bar2_pane

0x4914,	// (0x000266d3) popup_snote2_single_text_window_g1_ParamLimits

0x4914,	// (0x000266d3) popup_snote2_single_text_window_g1

0x493c,	// (0x000266fb) popup_snote2_single_text_window_t1_ParamLimits

0x493c,	// (0x000266fb) popup_snote2_single_text_window_t1

0x4988,	// (0x00026747) popup_snote2_single_text_window_t2_ParamLimits

0x4988,	// (0x00026747) popup_snote2_single_text_window_t2

0x49d4,	// (0x00026793) popup_snote2_single_text_window_t3_ParamLimits

0x49d4,	// (0x00026793) popup_snote2_single_text_window_t3

0x4a15,	// (0x000267d4) popup_snote2_single_text_window_t4_ParamLimits

0x4a15,	// (0x000267d4) popup_snote2_single_text_window_t4

0x4a4b,	// (0x0002680a) popup_snote2_single_text_window_t5_ParamLimits

0x4a4b,	// (0x0002680a) popup_snote2_single_text_window_t5

0x0004,

0xfc6c,	// (0x00031a2b) popup_snote2_single_text_window_t_ParamLimits

0xfc6c,	// (0x00031a2b) popup_snote2_single_text_window_t

0x4a76,	// (0x00026835) popup_snote2_single_graphic_window_g1_ParamLimits

0x4a76,	// (0x00026835) popup_snote2_single_graphic_window_g1

0x4a9e,	// (0x0002685d) popup_snote2_single_graphic_window_g2_ParamLimits

0x4a9e,	// (0x0002685d) popup_snote2_single_graphic_window_g2

0x0001,

0xfc77,	// (0x00031a36) popup_snote2_single_graphic_window_g_ParamLimits

0xfc77,	// (0x00031a36) popup_snote2_single_graphic_window_g

0x4ac6,	// (0x00026885) popup_snote2_single_graphic_window_t1_ParamLimits

0x4ac6,	// (0x00026885) popup_snote2_single_graphic_window_t1

0x4b12,	// (0x000268d1) popup_snote2_single_graphic_window_t2_ParamLimits

0x4b12,	// (0x000268d1) popup_snote2_single_graphic_window_t2

0x49d4,	// (0x00026793) popup_snote2_single_graphic_window_t3_ParamLimits

0x49d4,	// (0x00026793) popup_snote2_single_graphic_window_t3

0x4a15,	// (0x000267d4) popup_snote2_single_graphic_window_t4_ParamLimits

0x4a15,	// (0x000267d4) popup_snote2_single_graphic_window_t4

0x4a4b,	// (0x0002680a) popup_snote2_single_graphic_window_t5_ParamLimits

0x4a4b,	// (0x0002680a) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7c,	// (0x00031a3b) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7c,	// (0x00031a3b) popup_snote2_single_graphic_window_t

0x3a53,	// (0x00025812) clock_nsta_pane_cp2_t1

0x3a53,	// (0x00025812) clock_nsta_pane_cp2_t2

0x0001,

0xfa97,	// (0x00031856) clock_nsta_pane_cp2_t

0x9c85,	// (0x0002ba44) form_field_data_wide_pane_g1_ParamLimits

0x1309,	// (0x000230c8) form_field_data_wide_pane_g2_ParamLimits

0x1309,	// (0x000230c8) form_field_data_wide_pane_g2

0x1315,	// (0x000230d4) form_field_data_wide_pane_g3_ParamLimits

0x1315,	// (0x000230d4) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x00031415) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x00031415) form_field_data_wide_pane_g

0xe921,	// (0x000306e0) grid_touch_3_pane_ParamLimits

0xe921,	// (0x000306e0) grid_touch_3_pane

0xeca8,	// (0x00030a67) cell_touch_3_pane_ParamLimits

0xeca8,	// (0x00030a67) cell_touch_3_pane

0x3dfc,	// (0x00025bbb) cell_touch_3_pane_g1

0x3dfc,	// (0x00025bbb) cell_touch_3_pane_g2

0x0001,

0xfb1c,	// (0x000318db) cell_touch_3_pane_g

0x0f5e,	// (0x00022d1d) cont_query_data_pane

0x0f66,	// (0x00022d25) cont_query_data_pane_cp1

0x4b5e,	// (0x0002691d) button_value_adjust_pane_cp7

0x4b66,	// (0x00026925) query_popup_pane_cp3

0x1854,	// (0x00023613) bg_popup_sub_pane_cp22_ParamLimits

0x64bc,	// (0x0002827b) navi_navi_volume_pane_cp2

0x64d4,	// (0x00028293) popup_side_volume_key_window_g2

0x64e0,	// (0x0002829f) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x000314ab) popup_side_volume_key_window_g

0x64fa,	// (0x000282b9) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x000314b2) popup_side_volume_key_window_t

0x1a9e,	// (0x0002385d) popup_side_volume_key_window_ParamLimits

0x98e9,	// (0x0002b6a8) list_double_graphic_pane_g4_ParamLimits

0x98e9,	// (0x0002b6a8) list_double_graphic_pane_g4

0xddac,	// (0x0002fb6b) list_single_2heading_msg_pane_ParamLimits

0xddac,	// (0x0002fb6b) list_single_2heading_msg_pane

0xde1f,	// (0x0002fbde) list_single_2heading_msg_pane_g1_ParamLimits

0xde1f,	// (0x0002fbde) list_single_2heading_msg_pane_g1

0xde2b,	// (0x0002fbea) list_single_2heading_msg_pane_g2_ParamLimits

0xde2b,	// (0x0002fbea) list_single_2heading_msg_pane_g2

0xde3e,	// (0x0002fbfd) list_single_2heading_msg_pane_g3_ParamLimits

0xde3e,	// (0x0002fbfd) list_single_2heading_msg_pane_g3

0xde4a,	// (0x0002fc09) list_single_2heading_msg_pane_g4_ParamLimits

0xde4a,	// (0x0002fc09) list_single_2heading_msg_pane_g4

0x0003,

0xfc87,	// (0x00031a46) list_single_2heading_msg_pane_g_ParamLimits

0xfc87,	// (0x00031a46) list_single_2heading_msg_pane_g

0xde62,	// (0x0002fc21) list_single_2heading_msg_pane_t1_ParamLimits

0xde62,	// (0x0002fc21) list_single_2heading_msg_pane_t1

0xde8a,	// (0x0002fc49) list_single_2heading_msg_pane_t2_ParamLimits

0xde8a,	// (0x0002fc49) list_single_2heading_msg_pane_t2

0xdef5,	// (0x0002fcb4) list_single_2heading_msg_pane_t3_ParamLimits

0xdef5,	// (0x0002fcb4) list_single_2heading_msg_pane_t3

0xa654,	// (0x0002c413) list_single_2heading_msg_pane_t4_ParamLimits

0xa654,	// (0x0002c413) list_single_2heading_msg_pane_t4

0x0003,

0xfc90,	// (0x00031a4f) list_single_2heading_msg_pane_t_ParamLimits

0xfc90,	// (0x00031a4f) list_single_2heading_msg_pane_t

0x0cf5,	// (0x00022ab4) title_pane_g4_ParamLimits

0x0cf5,	// (0x00022ab4) title_pane_g4

0x618d,	// (0x00027f4c) title_pane_stacon_g3_ParamLimits

0x618d,	// (0x00027f4c) title_pane_stacon_g3

0x46f7,	// (0x000264b6) list_single_2graphic_im_pane_g4_ParamLimits

0x46f7,	// (0x000264b6) list_single_2graphic_im_pane_g4

0x2f29,	// (0x00024ce8) popup_side_volume_key_window_cp

0x33c7,	// (0x00025186) main_idle_act2_pane_t1

0x71dc,	// (0x00028f9b) toolbar_button_pane_g10

0xd7df,	// (0x0002f59e) popup_toolbar_window_cp1

0x3a44,	// (0x00025803) clock_nsta_pane_cp_t1

0x3a44,	// (0x00025803) clock_nsta_pane_cp_t2

0x0001,

0xfa92,	// (0x00031851) clock_nsta_pane_cp_t

0x64bc,	// (0x0002827b) navi_navi_volume_pane_cp2_ParamLimits

0x64c8,	// (0x00028287) popup_side_volume_key_window_g1_ParamLimits

0x64d4,	// (0x00028293) popup_side_volume_key_window_g2_ParamLimits

0x64e0,	// (0x0002829f) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x000314ab) popup_side_volume_key_window_g_ParamLimits

0x7c3a,	// (0x000299f9) fep_hwr_aid_pane

0x7cdb,	// (0x00029a9a) bg_fep_hwr_top_pane_g4_ParamLimits

0x3e67,	// (0x00025c26) fep_hwr_top_pane_g1_ParamLimits

0x3e55,	// (0x00025c14) fep_hwr_top_pane_g2_ParamLimits

0x7cfb,	// (0x00029aba) fep_hwr_top_pane_g3_ParamLimits

0xfae7,	// (0x000318a6) fep_hwr_top_pane_g_ParamLimits

0x7d10,	// (0x00029acf) fep_hwr_top_text_pane_ParamLimits

0x2d32,	// (0x00024af1) aid_touch_tab_arrow_arrow_2

0x2d29,	// (0x00024ae8) aid_touch_tab_arrow_left_2

0x7c4e,	// (0x00029a0d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7c81,	// (0x00029a40) fep_hwr_prediction_pane

0x3f9a,	// (0x00025d59) fep_vkb_prediction_pane

0xea7a,	// (0x00030839) fep_vkb_side_pane_g3_ParamLimits

0xea7a,	// (0x00030839) fep_vkb_side_pane_g3

0x7f63,	// (0x00029d22) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7fcd,	// (0x00029d8c) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7fda,	// (0x00029d99) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb96,	// (0x00031955) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x830a,	// (0x0002a0c9) fep_hwr_prediction_pane_g1

0x8314,	// (0x0002a0d3) fep_hwr_prediction_pane_g2

0x831c,	// (0x0002a0db) fep_hwr_prediction_pane_g3

0x8324,	// (0x0002a0e3) fep_hwr_prediction_pane_g4

0x0003,

0xfc99,	// (0x00031a58) fep_hwr_prediction_pane_g

0x4b77,	// (0x00026936) fep_vkb_prediction_pane_g1

0x4b81,	// (0x00026940) fep_vkb_prediction_pane_g2

0x4b89,	// (0x00026948) fep_vkb_prediction_pane_g3

0x4b91,	// (0x00026950) fep_vkb_prediction_pane_g4

0x0003,

0xfca2,	// (0x00031a61) fep_vkb_prediction_pane_g

0x762f,	// (0x000293ee) slider_set_pane_g3

0x7643,	// (0x00029402) slider_set_pane_g4

0x765b,	// (0x0002941a) slider_set_pane_g5

0x762f,	// (0x000293ee) slider_set_pane_g6

0xce76,	// (0x0002ec35) slider_set_pane_g7

0x31f5,	// (0x00024fb4) slider_form_pane_g3

0x31fe,	// (0x00024fbd) slider_form_pane_g4

0x3206,	// (0x00024fc5) slider_form_pane_g5

0x31f5,	// (0x00024fb4) slider_form_pane_g6

0xe78d,	// (0x0003054c) slider_form_pane_g7

0x3618,	// (0x000253d7) slider_set_pane_vc_g3

0x3621,	// (0x000253e0) slider_set_pane_vc_g4

0x362a,	// (0x000253e9) slider_set_pane_vc_g5

0x3618,	// (0x000253d7) slider_set_pane_vc_g6

0x3633,	// (0x000253f2) slider_set_pane_vc_g7

0x3618,	// (0x000253d7) slider_form_pane_vc_g1

0x3621,	// (0x000253e0) slider_form_pane_vc_g2

0x362a,	// (0x000253e9) slider_form_pane_vc_g3

0x3618,	// (0x000253d7) slider_form_pane_vc_g4

0x37a7,	// (0x00025566) slider_form_pane_vc_g5

0x0004,

0xfa64,	// (0x00031823) slider_form_pane_vc_g

0x5ba3,	// (0x00027962) main_idle_act3_pane

0x4b99,	// (0x00026958) ai3_links_pane

0xecef,	// (0x00030aae) popup_ai3_data_window_ParamLimits

0xecef,	// (0x00030aae) popup_ai3_data_window

0x0c5f,	// (0x00022a1e) grid_ai3_links_pane

0xed07,	// (0x00030ac6) cell_ai3_links_pane_ParamLimits

0xed07,	// (0x00030ac6) cell_ai3_links_pane

0x4ba2,	// (0x00026961) bg_popup_sub_pane_cp11

0x4baf,	// (0x0002696e) cell_ai3_links_pane_g1

0x0c5f,	// (0x00022a1e) bg_popup_sub_pane_cp12

0x4bd4,	// (0x00026993) heading_ai3_data_pane

0x4bdc,	// (0x0002699b) list_ai3_gene_pane

0x4be8,	// (0x000269a7) popup_ai3_data_window_g1

0x4bf0,	// (0x000269af) heading_ai3_data_pane_g1

0x4bf8,	// (0x000269b7) heading_ai3_data_pane_t1

0x4c06,	// (0x000269c5) list_double_ai3_gene_pane_ParamLimits

0x4c06,	// (0x000269c5) list_double_ai3_gene_pane

0x4c13,	// (0x000269d2) list_single_ai3_gene_pane_ParamLimits

0x4c13,	// (0x000269d2) list_single_ai3_gene_pane

0x3dc1,	// (0x00025b80) list_highlight_pane_cp7_ParamLimits

0x3dc1,	// (0x00025b80) list_highlight_pane_cp7

0x4c20,	// (0x000269df) list_single_a13_gene_pane_t1_ParamLimits

0x4c20,	// (0x000269df) list_single_a13_gene_pane_t1

0x4c37,	// (0x000269f6) list_single_ai3_gene_pane_g1

0x4c40,	// (0x000269ff) list_single_ai3_gene_pane_g2

0x0001,

0xfcab,	// (0x00031a6a) list_single_ai3_gene_pane_g

0x4c48,	// (0x00026a07) list_double_ai3_gene_pane_g1_ParamLimits

0x4c48,	// (0x00026a07) list_double_ai3_gene_pane_g1

0x4c54,	// (0x00026a13) list_double_ai3_gene_pane_t1_ParamLimits

0x4c54,	// (0x00026a13) list_double_ai3_gene_pane_t1

0x4c70,	// (0x00026a2f) list_double_ai3_gene_pane_t2_ParamLimits

0x4c70,	// (0x00026a2f) list_double_ai3_gene_pane_t2

0x4c85,	// (0x00026a44) list_double_ai3_gene_pane_t3_ParamLimits

0x4c85,	// (0x00026a44) list_double_ai3_gene_pane_t3

0x0002,

0xfcb0,	// (0x00031a6f) list_double_ai3_gene_pane_t_ParamLimits

0xfcb0,	// (0x00031a6f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa593,	// (0x0002c352) aid_size_min_col_2

0xecdb,	// (0x00030a9a) aid_size_min_msg_ParamLimits

0xecdb,	// (0x00030a9a) aid_size_min_msg

0xea8e,	// (0x0003084d) fep_vkb_top_text_pane_g2_ParamLimits

0xea8e,	// (0x0003084d) fep_vkb_top_text_pane_g2

0x0001,

0xfb17,	// (0x000318d6) fep_vkb_top_text_pane_g_ParamLimits

0xfb17,	// (0x000318d6) fep_vkb_top_text_pane_g

0x5ba3,	// (0x00027962) main_hc_apps_shell_pane

0x4ca2,	// (0x00026a61) grid_hc_apps_pane_ParamLimits

0x4ca2,	// (0x00026a61) grid_hc_apps_pane

0x4cb4,	// (0x00026a73) list_hc_apps_pane

0x4cbc,	// (0x00026a7b) scroll_pane_cp37_ParamLimits

0x4cbc,	// (0x00026a7b) scroll_pane_cp37

0xed1d,	// (0x00030adc) cell_hc_apps_pane_ParamLimits

0xed1d,	// (0x00030adc) cell_hc_apps_pane

0xedb7,	// (0x00030b76) cell_hc_apps_pane_g1_ParamLimits

0xedb7,	// (0x00030b76) cell_hc_apps_pane_g1

0x4cc8,	// (0x00026a87) cell_hc_apps_pane_g2_ParamLimits

0x4cc8,	// (0x00026a87) cell_hc_apps_pane_g2

0x4ce4,	// (0x00026aa3) cell_hc_apps_pane_g3_ParamLimits

0x4ce4,	// (0x00026aa3) cell_hc_apps_pane_g3

0x0002,

0xfcb7,	// (0x00031a76) cell_hc_apps_pane_g_ParamLimits

0xfcb7,	// (0x00031a76) cell_hc_apps_pane_g

0xede3,	// (0x00030ba2) cell_hc_apps_pane_t1_ParamLimits

0xede3,	// (0x00030ba2) cell_hc_apps_pane_t1

0x0e82,	// (0x00022c41) grid_highlight_pane_cp10_ParamLimits

0x0e82,	// (0x00022c41) grid_highlight_pane_cp10

0xee21,	// (0x00030be0) list_single_hc_apps_pane_ParamLimits

0xee21,	// (0x00030be0) list_single_hc_apps_pane

0xee4d,	// (0x00030c0c) list_single_hc_apps_pane_g1

0xdf63,	// (0x0002fd22) list_single_hc_apps_pane_g2

0x0001,

0xfcbe,	// (0x00031a7d) list_single_hc_apps_pane_g

0xdf7c,	// (0x0002fd3b) list_single_hc_apps_pane_g2_copy1

0xdf98,	// (0x0002fd57) list_single_hc_apps_pane_t1

0x0d4f,	// (0x00022b0e) bg_set_opt_pane_cp_ParamLimits

0x5e72,	// (0x00027c31) setting_slider_pane_t1_ParamLimits

0xc586,	// (0x0002e345) setting_slider_pane_t2_ParamLimits

0xc59f,	// (0x0002e35e) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x000312f8) setting_slider_pane_t_ParamLimits

0x5eb8,	// (0x00027c77) slider_set_pane_ParamLimits

0x68d4,	// (0x00028693) control_pane_g5_ParamLimits

0x68d4,	// (0x00028693) control_pane_g5

0x3146,	// (0x00024f05) slider_set_pane_g1_ParamLimits

0x7623,	// (0x000293e2) slider_set_pane_g2_ParamLimits

0x762f,	// (0x000293ee) slider_set_pane_g3_ParamLimits

0x7643,	// (0x00029402) slider_set_pane_g4_ParamLimits

0x765b,	// (0x0002941a) slider_set_pane_g5_ParamLimits

0x762f,	// (0x000293ee) slider_set_pane_g6_ParamLimits

0xce76,	// (0x0002ec35) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x000316f9) slider_set_pane_g_ParamLimits

0x0d4f,	// (0x00022b0e) navi_icon_text_pane_ParamLimits

0xe0e3,	// (0x0002fea2) aid_fill_nsta_2_ParamLimits

0xe111,	// (0x0002fed0) aid_touch_tab_arrow_left_ParamLimits

0xe125,	// (0x0002fee4) aid_touch_tab_arrow_right_ParamLimits

0xe1c1,	// (0x0002ff80) clock_nsta_pane_ParamLimits

0x2d0b,	// (0x00024aca) navi_icon_pane_g1_ParamLimits

0x2d17,	// (0x00024ad6) navi_text_pane_t1_ParamLimits

0x3a94,	// (0x00025853) navi_icon_text_pane_g1_ParamLimits

0x3aa0,	// (0x0002585f) navi_icon_text_pane_t1_ParamLimits

0xee4d,	// (0x00030c0c) list_single_hc_apps_pane_g1_ParamLimits

0xdf63,	// (0x0002fd22) list_single_hc_apps_pane_g2_ParamLimits

0xfcbe,	// (0x00031a7d) list_single_hc_apps_pane_g_ParamLimits

0xdf7c,	// (0x0002fd3b) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xdf98,	// (0x0002fd57) list_single_hc_apps_pane_t1_ParamLimits

0xc4cc,	// (0x0002e28b) popup_toolbar2_fixed_window_ParamLimits

0xc4cc,	// (0x0002e28b) popup_toolbar2_fixed_window

0xcc65,	// (0x0002ea24) popup_toolbar2_float_window

0x0c5f,	// (0x00022a1e) bg_popup_sub_pane_cp27

0x4d06,	// (0x00026ac5) grid_toolbar2_float_pane

0x0c5f,	// (0x00022a1e) bg_popup_sub_pane_cp26

0x4d06,	// (0x00026ac5) grid_toolbar2_fixed_pane

0xee66,	// (0x00030c25) cell_toolbar2_fixed_pane_ParamLimits

0xee66,	// (0x00030c25) cell_toolbar2_fixed_pane

0xee81,	// (0x00030c40) cell_toolbar2_fixed_pane_g1

0x4d0e,	// (0x00026acd) toolbar2_fixed_button_pane

0x2032,	// (0x00023df1) toolbar2_fixed_button_pane_g1

0x203a,	// (0x00023df9) toolbar2_fixed_button_pane_g2

0x2042,	// (0x00023e01) toolbar2_fixed_button_pane_g3

0x204a,	// (0x00023e09) toolbar2_fixed_button_pane_g4

0x2052,	// (0x00023e11) toolbar2_fixed_button_pane_g5

0x205a,	// (0x00023e19) toolbar2_fixed_button_pane_g6

0x2062,	// (0x00023e21) toolbar2_fixed_button_pane_g7

0x206a,	// (0x00023e29) toolbar2_fixed_button_pane_g8

0x2072,	// (0x00023e31) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x000315fb) toolbar2_fixed_button_pane_g

0x4d16,	// (0x00026ad5) cell_toolbar2_float_pane_ParamLimits

0x4d16,	// (0x00026ad5) cell_toolbar2_float_pane

0x4d27,	// (0x00026ae6) cell_toolbar2_float_pane_g1

0x4d0e,	// (0x00026acd) toolbar2_fixed_button_pane_cp

0xea43,	// (0x00030802) fep_vkb_accented_list_pane_ParamLimits

0xea43,	// (0x00030802) fep_vkb_accented_list_pane

0x7f43,	// (0x00029d02) bg_popup_fep_shadow_pane_g9

0x1ca6,	// (0x00023a65) bg_popup_fep_shadow_pane_cp3

0x1438,	// (0x000231f7) list_accented_list_pane

0x4d30,	// (0x00026aef) list_single_accented_list_pane_ParamLimits

0x4d30,	// (0x00026aef) list_single_accented_list_pane

0x1ca6,	// (0x00023a65) list_highlight_pane_cp10

0x4d41,	// (0x00026b00) list_single_accented_list_pane_t1

0xcba7,	// (0x0002e966) popup_slider_window_ParamLimits

0xcba7,	// (0x0002e966) popup_slider_window

0x4b6e,	// (0x0002692d) aid_indentation_list_msg

0xef60,	// (0x00030d1f) bg_popup_window_pane_cp19

0x4da7,	// (0x00026b66) popup_slider_window_g1

0x4dc3,	// (0x00026b82) popup_slider_window_g2

0x4ddf,	// (0x00026b9e) popup_slider_window_g3

0x0005,

0xfcc3,	// (0x00031a82) popup_slider_window_g

0x4dfb,	// (0x00026bba) popup_slider_window_t1

0x4e3f,	// (0x00026bfe) small_volume_slider_vertical_pane

0x3dfc,	// (0x00025bbb) small_volume_slider_vertical_pane_g1

0x3dfc,	// (0x00025bbb) small_volume_slider_vertical_pane_g2

0x4e5b,	// (0x00026c1a) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd5,	// (0x00031a94) small_volume_slider_vertical_pane_g

0xc450,	// (0x0002e20f) area_side_right_pane_ParamLimits

0xc450,	// (0x0002e20f) area_side_right_pane

0xced9,	// (0x0002ec98) aid_size_side_button_ParamLimits

0xced9,	// (0x0002ec98) aid_size_side_button

0xcef2,	// (0x0002ecb1) grid_sctrl_middle_pane_ParamLimits

0xcef2,	// (0x0002ecb1) grid_sctrl_middle_pane

0x85ef,	// (0x0002a3ae) sctrl_sk_bottom_pane

0x8600,	// (0x0002a3bf) sctrl_sk_top_pane

0x8612,	// (0x0002a3d1) aid_touch_sctrl_top

0x861f,	// (0x0002a3de) bg_sctrl_sk_pane_ParamLimits

0x861f,	// (0x0002a3de) bg_sctrl_sk_pane

0x862d,	// (0x0002a3ec) sctrl_sk_top_pane_g1

0x863a,	// (0x0002a3f9) sctrl_sk_top_pane_t1

0x8612,	// (0x0002a3d1) aid_touch_sctrl_bottom

0x861f,	// (0x0002a3de) bg_sctrl_sk_pane_cp_ParamLimits

0x861f,	// (0x0002a3de) bg_sctrl_sk_pane_cp

0x8655,	// (0x0002a414) sctrl_sk_bottom_pane_g1

0x863a,	// (0x0002a3f9) sctrl_sk_bottom_pane_t1

0xcf08,	// (0x0002ecc7) cell_sctrl_middle_pane_ParamLimits

0xcf08,	// (0x0002ecc7) cell_sctrl_middle_pane

0xcf19,	// (0x0002ecd8) aid_touch_sctrl_middle_ParamLimits

0xcf19,	// (0x0002ecd8) aid_touch_sctrl_middle

0xcf26,	// (0x0002ece5) bg_sctrl_middle_pane_ParamLimits

0xcf26,	// (0x0002ece5) bg_sctrl_middle_pane

0x9220,	// (0x0002afdf) cell_sctrl_middle_pane_g1_ParamLimits

0x9220,	// (0x0002afdf) cell_sctrl_middle_pane_g1

0xcf34,	// (0x0002ecf3) cell_sctrl_middle_pane_g2_ParamLimits

0xcf34,	// (0x0002ecf3) cell_sctrl_middle_pane_g2

0x0001,

0xfce1,	// (0x00031aa0) cell_sctrl_middle_pane_g_ParamLimits

0xfce1,	// (0x00031aa0) cell_sctrl_middle_pane_g

0x2032,	// (0x00023df1) bg_sctrl_middle_pane_g1

0x2042,	// (0x00023e01) bg_sctrl_middle_pane_g2

0x203a,	// (0x00023df9) bg_sctrl_middle_pane_g3

0x2052,	// (0x00023e11) bg_sctrl_middle_pane_g4

0x204a,	// (0x00023e09) bg_sctrl_middle_pane_g5

0x205a,	// (0x00023e19) bg_sctrl_middle_pane_g6

0x2062,	// (0x00023e21) bg_sctrl_middle_pane_g7

0x2072,	// (0x00023e31) bg_sctrl_middle_pane_g8

0x0007,

0xfce6,	// (0x00031aa5) bg_sctrl_middle_pane_g

0x206a,	// (0x00023e29) bg_sctrl_middle_pane_g8_copy1

0x2032,	// (0x00023df1) bg_sctrl_sk_pane_g1

0x203a,	// (0x00023df9) bg_sctrl_sk_pane_g2

0x2042,	// (0x00023e01) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x000315fb) bg_sctrl_sk_pane_g

0x1237,	// (0x00022ff6) aid_size_touch_scroll_bar

0x204a,	// (0x00023e09) bg_sctrl_sk_pane_g4

0x2052,	// (0x00023e11) bg_sctrl_sk_pane_g5

0x205a,	// (0x00023e19) bg_sctrl_sk_pane_g6

0x2062,	// (0x00023e21) bg_sctrl_sk_pane_g7

0x206a,	// (0x00023e29) bg_sctrl_sk_pane_g8

0x2072,	// (0x00023e31) bg_sctrl_sk_pane_g9

0x6aa7,	// (0x00028866) popup_fep_china_hwr2_fs_candidate_window

0xc7a2,	// (0x0002e561) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc7a2,	// (0x0002e561) popup_fep_china_hwr2_fs_control_window

0x7f63,	// (0x00029d22) sctrl_sk_top_pane_g2

0x0001,

0xfcdc,	// (0x00031a9b) sctrl_sk_top_pane_g

0xf018,	// (0x00030dd7) aid_fep_china_hwr2_fs_cell_ParamLimits

0xf018,	// (0x00030dd7) aid_fep_china_hwr2_fs_cell

0xf02c,	// (0x00030deb) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xf02c,	// (0x00030deb) bg_popup_fep_shadow_pane_cp4

0xf043,	// (0x00030e02) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xf043,	// (0x00030e02) bg_popup_fep_shadow_pane_cp5

0xf055,	// (0x00030e14) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xf055,	// (0x00030e14) popup_fep_china_hwr2_fs_control_bar_grid

0xf069,	// (0x00030e28) popup_fep_china_hwr2_fs_control_funtion_grid

0x4e72,	// (0x00026c31) aid_fep_china_hwr2_fs_candi_cell

0x0c5f,	// (0x00022a1e) bg_popup_fep_shadow_pane_cp6

0x4e7c,	// (0x00026c3b) popup_fep_china_hwr2_fs_candidate_grid

0xf071,	// (0x00030e30) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xf071,	// (0x00030e30) cell_fep_china_hwr2_fs_funtion_grid

0x3dfc,	// (0x00025bbb) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x4e64,	// (0x00026c23) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x4e64,	// (0x00026c23) cell_fep_china_hwr2_fs_funtion_grid_g1

0x4e84,	// (0x00026c43) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x4e84,	// (0x00026c43) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf7,	// (0x00031ab6) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf7,	// (0x00031ab6) cell_fep_china_hwr2_fs_funtion_grid_g

0xf089,	// (0x00030e48) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xf089,	// (0x00030e48) cell_fep_china_hwr2_fs_funtion_grid_t1

0xf09e,	// (0x00030e5d) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xf09e,	// (0x00030e5d) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfc,	// (0x00031abb) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfc,	// (0x00031abb) cell_fep_china_hwr2_fs_funtion_grid_t

0x4e9a,	// (0x00026c59) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x4ea2,	// (0x00026c61) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x4eaa,	// (0x00026c69) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd01,	// (0x00031ac0) popup_fep_china_hwr2_fs_control_bar_grid_g

0x4eb2,	// (0x00026c71) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x4eb2,	// (0x00026c71) cell_fep_china_hwr2_fs_candidate_grid

0x4ecb,	// (0x00026c8a) popup_fep_china_hwr2_fs_candidate_grid_g20

0x4ed3,	// (0x00026c92) popup_fep_china_hwr2_fs_candidate_grid_g21

0x3dfc,	// (0x00025bbb) cell_fep_china_hwr2_fs_candidate_grid_g1

0x3dfc,	// (0x00025bbb) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1c,	// (0x000318db) cell_fep_china_hwr2_fs_candidate_grid_g

0x4edb,	// (0x00026c9a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1e97,	// (0x00023c56) clock_nsta_pane_cp_24_ParamLimits

0x1e97,	// (0x00023c56) clock_nsta_pane_cp_24

0x1ef4,	// (0x00023cb3) indicator_nsta_pane_cp_24_ParamLimits

0x1ef4,	// (0x00023cb3) indicator_nsta_pane_cp_24

0x2c16,	// (0x000249d5) heading_pane_g1

0x0001,

0xf8a1,	// (0x00031660) heading_pane_g

0xe849,	// (0x00030608) grid_sct_catagory_button_pane

0x31e1,	// (0x00024fa0) scroll_pane_cp5_ParamLimits

0x3ac6,	// (0x00025885) button_value_adjust_pane_cp5_ParamLimits

0x3ac6,	// (0x00025885) button_value_adjust_pane_cp5

0x3b84,	// (0x00025943) form2_midp_time_pane_ParamLimits

0x4ee9,	// (0x00026ca8) cell_sct_catagory_button_pane_ParamLimits

0x4ee9,	// (0x00026ca8) cell_sct_catagory_button_pane

0x3dc1,	// (0x00025b80) bg_button_pane_cp01_ParamLimits

0x3dc1,	// (0x00025b80) bg_button_pane_cp01

0x3dfc,	// (0x00025bbb) cell_sct_catagory_button_pane_g1

0xcc16,	// (0x0002e9d5) popup_tb_extension_window

0xf0ba,	// (0x00030e79) aid_size_cell_ext_ParamLimits

0xf0ba,	// (0x00030e79) aid_size_cell_ext

0x1115,	// (0x00022ed4) bg_tb_trans_pane_cp1_ParamLimits

0x1115,	// (0x00022ed4) bg_tb_trans_pane_cp1

0xf0e0,	// (0x00030e9f) grid_tb_ext_pane_ParamLimits

0xf0e0,	// (0x00030e9f) grid_tb_ext_pane

0xf116,	// (0x00030ed5) cell_tb_ext_pane_ParamLimits

0xf116,	// (0x00030ed5) cell_tb_ext_pane

0xf13a,	// (0x00030ef9) cell_tb_ext_pane_g1_ParamLimits

0xf13a,	// (0x00030ef9) cell_tb_ext_pane_g1

0x4efb,	// (0x00026cba) cell_tb_ext_pane_t1

0x0e82,	// (0x00022c41) list_highlight_pane_cp11_ParamLimits

0x0e82,	// (0x00022c41) list_highlight_pane_cp11

0xc4e1,	// (0x0002e2a0) popup_uni_indicator_window_ParamLimits

0xc4e1,	// (0x0002e2a0) popup_uni_indicator_window

0x12ef,	// (0x000230ae) bg_popup_sub_pane_cp14

0x4f16,	// (0x00026cd5) list_uniindi_pane

0x4f22,	// (0x00026ce1) uniindi_top_pane

0x0e82,	// (0x00022c41) bg_uniindi_top_pane

0x4f41,	// (0x00026d00) uniindi_top_pane_g1

0x4f57,	// (0x00026d16) uniindi_top_pane_g2

0x0003,

0xfd08,	// (0x00031ac7) uniindi_top_pane_g

0x4f81,	// (0x00026d40) uniindi_top_pane_t1

0x4fab,	// (0x00026d6a) list_single_uniindi_pane_ParamLimits

0x4fab,	// (0x00026d6a) list_single_uniindi_pane

0x3dfc,	// (0x00025bbb) bg_uniindi_top_pane_g1

0x4fbd,	// (0x00026d7c) list_single_uniindi_pane_g1

0x4fd0,	// (0x00026d8f) list_single_uniindi_pane_t1

0x5ba3,	// (0x00027962) control_bg_pane

0x4ff5,	// (0x00026db4) bg_sctrl_sk_pane_cp1

0x4ffe,	// (0x00026dbd) bg_sctrl_sk_pane_cp2

0x5007,	// (0x00026dc6) control_bg_pane_g1

0x5010,	// (0x00026dcf) control_bg_pane_g2

0x0001,

0xfd11,	// (0x00031ad0) control_bg_pane_g

0x3987,	// (0x00025746) cell_indicator_nsta_pane_g1_ParamLimits

0xe95a,	// (0x00030719) cell_indicator_nsta_pane_g2_ParamLimits

0xfa80,	// (0x0003183f) cell_indicator_nsta_pane_g_ParamLimits

0xa32f,	// (0x0002c0ee) form2_midp_time_pane_t1_ParamLimits

0x7c2c,	// (0x000299eb) main_idle_act4_pane_ParamLimits

0x7c2c,	// (0x000299eb) main_idle_act4_pane

0xcc16,	// (0x0002e9d5) popup_tb_extension_window_ParamLimits

0xf100,	// (0x00030ebf) tb_ext_find_pane_ParamLimits

0xf100,	// (0x00030ebf) tb_ext_find_pane

0x5019,	// (0x00026dd8) ai_gene_pane_1_cp1

0x1d3a,	// (0x00023af9) ai_gene_pane_2_cp1

0x5021,	// (0x00026de0) list_single_idle_plugin_calendar_pane

0x502a,	// (0x00026de9) list_single_idle_plugin_notification_pane

0x5033,	// (0x00026df2) list_single_idle_plugin_player_pane

0xf157,	// (0x00030f16) list_single_idle_plugin_shortcut_pane_ParamLimits

0xf157,	// (0x00030f16) list_single_idle_plugin_shortcut_pane

0xf17f,	// (0x00030f3e) main_idle_act4_pane_t1

0xf195,	// (0x00030f54) main_idle_act4_pane_t2

0x0001,

0xfd16,	// (0x00031ad5) main_idle_act4_pane_t

0xf1ab,	// (0x00030f6a) middle_sk_idle_act4_pane_ParamLimits

0xf1ab,	// (0x00030f6a) middle_sk_idle_act4_pane

0xf1c7,	// (0x00030f86) popup_clock_digital_analogue_window_cp2

0xf1ed,	// (0x00030fac) shortcut_wheel_idle_act4_pane_ParamLimits

0xf1ed,	// (0x00030fac) shortcut_wheel_idle_act4_pane

0x3dfc,	// (0x00025bbb) shortcut_wheel_idle_act4_pane_g1

0x3dfc,	// (0x00025bbb) shortcut_wheel_idle_act4_pane_g2

0x3dfc,	// (0x00025bbb) shortcut_wheel_idle_act4_pane_g3

0x3dfc,	// (0x00025bbb) shortcut_wheel_idle_act4_pane_g4

0x3dfc,	// (0x00025bbb) shortcut_wheel_idle_act4_pane_g5

0x503c,	// (0x00026dfb) shortcut_wheel_idle_act4_pane_g6

0x5044,	// (0x00026e03) shortcut_wheel_idle_act4_pane_g7

0x504c,	// (0x00026e0b) shortcut_wheel_idle_act4_pane_g8

0x5054,	// (0x00026e13) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1b,	// (0x00031ada) shortcut_wheel_idle_act4_pane_g

0xcf41,	// (0x0002ed00) middle_sk_idle_act4_pane_g1_ParamLimits

0xcf41,	// (0x0002ed00) middle_sk_idle_act4_pane_g1

0xf268,	// (0x00031027) middle_sk_idle_act4_pane_g2_ParamLimits

0xf268,	// (0x00031027) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3e,	// (0x00031afd) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3e,	// (0x00031afd) middle_sk_idle_act4_pane_g

0xf280,	// (0x0003103f) middle_sk_idle_act4_pane_t1_ParamLimits

0xf280,	// (0x0003103f) middle_sk_idle_act4_pane_t1

0xf2af,	// (0x0003106e) grid_ai_shortcut_pane_ParamLimits

0xf2af,	// (0x0003106e) grid_ai_shortcut_pane

0xf2cc,	// (0x0003108b) list_highlight_pane_cp16_ParamLimits

0xf2cc,	// (0x0003108b) list_highlight_pane_cp16

0xf2d9,	// (0x00031098) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xf2d9,	// (0x00031098) list_single_idle_plugin_shortcut_pane_g1

0xf2e5,	// (0x000310a4) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xf2e5,	// (0x000310a4) list_single_idle_plugin_shortcut_pane_g2

0xf301,	// (0x000310c0) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xf301,	// (0x000310c0) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd43,	// (0x00031b02) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd43,	// (0x00031b02) list_single_idle_plugin_shortcut_pane_g

0xf316,	// (0x000310d5) cell_ai_shortcut_pane_ParamLimits

0xf316,	// (0x000310d5) cell_ai_shortcut_pane

0xf32c,	// (0x000310eb) cell_ai_shortcut_pane_g1_ParamLimits

0xf32c,	// (0x000310eb) cell_ai_shortcut_pane_g1

0x5019,	// (0x00026dd8) ai_gene_pane_1_cp2

0x8970,	// (0x0002a72f) ai_gene_pane_2_cp2

0x8978,	// (0x0002a737) list_highlight_pane_cp15

0x8981,	// (0x0002a740) list_single_idle_plugin_calendar_pane_g1

0x8978,	// (0x0002a737) list_highlight_pane_cp17

0x8989,	// (0x0002a748) list_single_idle_plugin_calendar_pane_g1_copy1

0x8991,	// (0x0002a750) list_single_idle_plugin_player_pane_g1

0x3453,	// (0x00025212) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4a,	// (0x00031b09) list_single_idle_plugin_player_pane_g

0x8999,	// (0x0002a758) list_single_idle_plugin_player_pane_t1

0x89a7,	// (0x0002a766) list_single_idle_plugin_player_pane_t2

0x89b5,	// (0x0002a774) list_single_idle_plugin_player_pane_t3

0x89c3,	// (0x0002a782) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4f,	// (0x00031b0e) list_single_idle_plugin_player_pane_t

0x89d1,	// (0x0002a790) wait_bar_pane_cp15

0x89d9,	// (0x0002a798) grid_ai_notification_pane

0x3453,	// (0x00025212) list_single_idle_plugin_notification_pane_g1

0xf34e,	// (0x0003110d) cell_ai_notification_pane_ParamLimits

0xf34e,	// (0x0003110d) cell_ai_notification_pane

0x89ef,	// (0x0002a7ae) cell_ai_notification_pane_g1

0x89f7,	// (0x0002a7b6) cell_ai_notification_pane_t1

0xf35b,	// (0x0003111a) tb_ext_find_button_pane

0xf363,	// (0x00031122) tb_ext_find_pane_g1

0xf36b,	// (0x0003112a) tb_ext_find_pane_t1

0x1814,	// (0x000235d3) tb_ext_find_button_pane_g1

0x8a23,	// (0x0002a7e2) tb_ext_find_button_pane_g2

0x0001,

0xfd58,	// (0x00031b17) tb_ext_find_button_pane_g

0xf17f,	// (0x00030f3e) main_idle_act4_pane_t1_ParamLimits

0xf195,	// (0x00030f54) main_idle_act4_pane_t2_ParamLimits

0xfd16,	// (0x00031ad5) main_idle_act4_pane_t_ParamLimits

0xf1c7,	// (0x00030f86) popup_clock_digital_analogue_window_cp2_ParamLimits

0xf1dd,	// (0x00030f9c) sat_plugin_idle_act4_pane_ParamLimits

0xf1dd,	// (0x00030f9c) sat_plugin_idle_act4_pane

0xf379,	// (0x00031138) sat_plugin_idle_act4_pane_t1_ParamLimits

0xf379,	// (0x00031138) sat_plugin_idle_act4_pane_t1

0xf391,	// (0x00031150) sat_plugin_idle_act4_pane_t2_ParamLimits

0xf391,	// (0x00031150) sat_plugin_idle_act4_pane_t2

0xf3a9,	// (0x00031168) sat_plugin_idle_act4_pane_t3_ParamLimits

0xf3a9,	// (0x00031168) sat_plugin_idle_act4_pane_t3

0xf3c1,	// (0x00031180) sat_plugin_idle_act4_pane_t4_ParamLimits

0xf3c1,	// (0x00031180) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5d,	// (0x00031b1c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5d,	// (0x00031b1c) sat_plugin_idle_act4_pane_t

0x5c66,	// (0x00027a25) popup_battery_window_ParamLimits

0x5c66,	// (0x00027a25) popup_battery_window

0x0e82,	// (0x00022c41) bg_popup_sub_pane_cp25_ParamLimits

0x0e82,	// (0x00022c41) bg_popup_sub_pane_cp25

0x8a78,	// (0x0002a837) popup_battery_window_g1_ParamLimits

0x8a78,	// (0x0002a837) popup_battery_window_g1

0x8a84,	// (0x0002a843) popup_battery_window_t1_ParamLimits

0x8a84,	// (0x0002a843) popup_battery_window_t1

0x8a96,	// (0x0002a855) popup_battery_window_t2_ParamLimits

0x8a96,	// (0x0002a855) popup_battery_window_t2

0x0001,

0xfd66,	// (0x00031b25) popup_battery_window_t_ParamLimits

0xfd66,	// (0x00031b25) popup_battery_window_t

0xdd16,	// (0x0002fad5) midp_canvas_pane_ParamLimits

0xdfc6,	// (0x0002fd85) midp_keypad_pane_ParamLimits

0xdfc6,	// (0x0002fd85) midp_keypad_pane

0x1488,	// (0x00023247) main_midp_pane_ParamLimits

0x3a62,	// (0x00025821) signal_pane_g2_cp_ParamLimits

0xf3d9,	// (0x00031198) aid_size_cell_midp_keypad_ParamLimits

0xf3d9,	// (0x00031198) aid_size_cell_midp_keypad

0xf3f7,	// (0x000311b6) midp_keyp_game_grid_pane_ParamLimits

0xf3f7,	// (0x000311b6) midp_keyp_game_grid_pane

0xf416,	// (0x000311d5) midp_keyp_rocker_pane_ParamLimits

0xf416,	// (0x000311d5) midp_keyp_rocker_pane

0xf457,	// (0x00031216) midp_keyp_sk_left_pane_ParamLimits

0xf457,	// (0x00031216) midp_keyp_sk_left_pane

0xf4a9,	// (0x00031268) midp_keyp_sk_right_pane_ParamLimits

0xf4a9,	// (0x00031268) midp_keyp_sk_right_pane

0x0c5f,	// (0x00022a1e) bg_button_pane_cp03

0xf4f5,	// (0x000312b4) midp_keyp_sk_left_pane_g1

0x0c5f,	// (0x00022a1e) bg_button_pane_cp04

0xf4f5,	// (0x000312b4) midp_keyp_sk_right_pane_g1

0x3dfc,	// (0x00025bbb) midp_keyp_rocker_pane_g1

0xf4fe,	// (0x000312bd) keyp_game_cell_pane_ParamLimits

0xf4fe,	// (0x000312bd) keyp_game_cell_pane

0x0c5f,	// (0x00022a1e) bg_button_pane_cp02

0xf520,	// (0x000312df) keyp_game_cell_pane_g1

0xc492,	// (0x0002e251) popup_fep_vkb2_window_ParamLimits

0xc492,	// (0x0002e251) popup_fep_vkb2_window

0xcf4f,	// (0x0002ed0e) aid_size_cell_vkb2_ParamLimits

0xcf4f,	// (0x0002ed0e) aid_size_cell_vkb2

0xcf85,	// (0x0002ed44) popup_fep_vkb2_window_g1_ParamLimits

0xcf85,	// (0x0002ed44) popup_fep_vkb2_window_g1

0xcfd5,	// (0x0002ed94) vkb2_area_bottom_pane_ParamLimits

0xcfd5,	// (0x0002ed94) vkb2_area_bottom_pane

0xd013,	// (0x0002edd2) vkb2_area_keypad_pane_ParamLimits

0xd013,	// (0x0002edd2) vkb2_area_keypad_pane

0xd051,	// (0x0002ee10) vkb2_area_top_pane_ParamLimits

0xd051,	// (0x0002ee10) vkb2_area_top_pane

0xd0cd,	// (0x0002ee8c) vkb2_top_entry_pane_ParamLimits

0xd0cd,	// (0x0002ee8c) vkb2_top_entry_pane

0xd0fa,	// (0x0002eeb9) vkb2_top_grid_left_pane_ParamLimits

0xd0fa,	// (0x0002eeb9) vkb2_top_grid_left_pane

0xd11a,	// (0x0002eed9) vkb2_top_grid_right_pane_ParamLimits

0xd11a,	// (0x0002eed9) vkb2_top_grid_right_pane

0x8dd1,	// (0x0002ab90) vkb2_cell_keypad_pane_ParamLimits

0x8dd1,	// (0x0002ab90) vkb2_cell_keypad_pane

0xd160,	// (0x0002ef1f) vkb2_area_bottom_grid_pane_ParamLimits

0xd160,	// (0x0002ef1f) vkb2_area_bottom_grid_pane

0xd186,	// (0x0002ef45) vkb2_area_bottom_pane_g1_ParamLimits

0xd186,	// (0x0002ef45) vkb2_area_bottom_pane_g1

0xd1ac,	// (0x0002ef6b) vkb2_area_bottom_pane_g2_ParamLimits

0xd1ac,	// (0x0002ef6b) vkb2_area_bottom_pane_g2

0xd1dd,	// (0x0002ef9c) vkb2_area_bottom_pane_g3_ParamLimits

0xd1dd,	// (0x0002ef9c) vkb2_area_bottom_pane_g3

0x0002,

0xfd6b,	// (0x00031b2a) vkb2_area_bottom_pane_g_ParamLimits

0xfd6b,	// (0x00031b2a) vkb2_area_bottom_pane_g

0x8f49,	// (0x0002ad08) vkb2_top_cell_left_pane_ParamLimits

0x8f49,	// (0x0002ad08) vkb2_top_cell_left_pane

0x0121,	// (0x00021ee0) vkb2_top_entry_pane_g1_ParamLimits

0x0121,	// (0x00021ee0) vkb2_top_entry_pane_g1

0x012f,	// (0x00021eee) vkb2_top_entry_pane_t1_ParamLimits

0x012f,	// (0x00021eee) vkb2_top_entry_pane_t1

0x8fb1,	// (0x0002ad70) vkb2_top_entry_pane_t2_ParamLimits

0x8fb1,	// (0x0002ad70) vkb2_top_entry_pane_t2

0x8fe3,	// (0x0002ada2) vkb2_top_entry_pane_t3_ParamLimits

0x8fe3,	// (0x0002ada2) vkb2_top_entry_pane_t3

0x0002,

0xfd72,	// (0x00031b31) vkb2_top_entry_pane_t_ParamLimits

0xfd72,	// (0x00031b31) vkb2_top_entry_pane_t

0xd233,	// (0x0002eff2) vkb2_top_grid_right_pane_g1_ParamLimits

0xd233,	// (0x0002eff2) vkb2_top_grid_right_pane_g1

0x903c,	// (0x0002adfb) vkb2_top_grid_right_pane_g2_ParamLimits

0x903c,	// (0x0002adfb) vkb2_top_grid_right_pane_g2

0x9054,	// (0x0002ae13) vkb2_top_grid_right_pane_g3_ParamLimits

0x9054,	// (0x0002ae13) vkb2_top_grid_right_pane_g3

0xd249,	// (0x0002f008) vkb2_top_grid_right_pane_g4_ParamLimits

0xd249,	// (0x0002f008) vkb2_top_grid_right_pane_g4

0x0003,

0xfd79,	// (0x00031b38) vkb2_top_grid_right_pane_g_ParamLimits

0xfd79,	// (0x00031b38) vkb2_top_grid_right_pane_g

0x9082,	// (0x0002ae41) vkb2_top_cell_left_pane_g1

0x9099,	// (0x0002ae58) vkb2_cell_keypad_pane_g1_ParamLimits

0x9099,	// (0x0002ae58) vkb2_cell_keypad_pane_g1

0xa6dc,	// (0x0002c49b) vkb2_cell_keypad_pane_t1_ParamLimits

0xa6dc,	// (0x0002c49b) vkb2_cell_keypad_pane_t1

0x90a7,	// (0x0002ae66) vkb2_cell_bottom_grid_pane_ParamLimits

0x90a7,	// (0x0002ae66) vkb2_cell_bottom_grid_pane

0x90e0,	// (0x0002ae9f) vkb2_cell_bottom_grid_pane_g1

0xf20c,	// (0x00030fcb) aid_call2_pane_cp02

0xf214,	// (0x00030fd3) aid_call_pane_cp02

0xf21c,	// (0x00030fdb) clock_digital_number_pane_cp10

0xf224,	// (0x00030fe3) clock_digital_number_pane_cp11

0xf22c,	// (0x00030feb) clock_digital_number_pane_cp12

0xf234,	// (0x00030ff3) clock_digital_number_pane_cp13

0xf23c,	// (0x00030ffb) clock_digital_separator_pane_cp10

0x1814,	// (0x000235d3) popup_clock_digital_analogue_window_cp2_g1

0x1814,	// (0x000235d3) popup_clock_digital_analogue_window_cp2_g2

0xf244,	// (0x00031003) popup_clock_digital_analogue_window_cp2_g3

0x1814,	// (0x000235d3) popup_clock_digital_analogue_window_cp2_g4

0xf244,	// (0x00031003) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2e,	// (0x00031aed) popup_clock_digital_analogue_window_cp2_g

0xf24c,	// (0x0003100b) popup_clock_digital_analogue_window_cp2_t1

0xf25a,	// (0x00031019) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd39,	// (0x00031af8) popup_clock_digital_analogue_window_cp2_t

0x3dfc,	// (0x00025bbb) clock_digital_number_pane_cp10_g1

0x3dfc,	// (0x00025bbb) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1c,	// (0x000318db) clock_digital_number_pane_cp10_g

0x3dfc,	// (0x00025bbb) clock_digital_separator_pane_cp10_g1

0x3dfc,	// (0x00025bbb) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1c,	// (0x000318db) clock_digital_separator_pane_cp10_g

0x4f63,	// (0x00026d22) uniindi_top_pane_g3

0x4f74,	// (0x00026d33) uniindi_top_pane_g4

0x8e3c,	// (0x0002abfb) vkb2_row_keypad_pane_ParamLimits

0x8e3c,	// (0x0002abfb) vkb2_row_keypad_pane

0x90fc,	// (0x0002aebb) vkb2_cell_t_keypad_pane_ParamLimits

0x90fc,	// (0x0002aebb) vkb2_cell_t_keypad_pane

0x9109,	// (0x0002aec8) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9109,	// (0x0002aec8) vkb2_cell_t_keypad_pane_cp08

0x9119,	// (0x0002aed8) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x9119,	// (0x0002aed8) vkb2_cell_t_keypad_pane_cp09

0x912a,	// (0x0002aee9) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x912a,	// (0x0002aee9) vkb2_cell_t_keypad_pane_cp01

0x913a,	// (0x0002aef9) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x913a,	// (0x0002aef9) vkb2_cell_t_keypad_pane_cp02

0x914a,	// (0x0002af09) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x914a,	// (0x0002af09) vkb2_cell_t_keypad_pane_cp03

0x915a,	// (0x0002af19) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x915a,	// (0x0002af19) vkb2_cell_t_keypad_pane_cp04

0x916a,	// (0x0002af29) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x916a,	// (0x0002af29) vkb2_cell_t_keypad_pane_cp05

0x917a,	// (0x0002af39) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x917a,	// (0x0002af39) vkb2_cell_t_keypad_pane_cp06

0x918a,	// (0x0002af49) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x918a,	// (0x0002af49) vkb2_cell_t_keypad_pane_cp07

0x919a,	// (0x0002af59) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x919a,	// (0x0002af59) vkb2_cell_t_keypad_pane_cp10

0x7f63,	// (0x00029d22) vkb2_cell_t_keypad_pane_g1

0xa6f3,	// (0x0002c4b2) vkb2_cell_t_keypad_pane_t1

0x5ba3,	// (0x00027962) popup_grid_graphic2_window

0x0194,	// (0x00021f53) aid_size_cell_graphic2_ParamLimits

0x0194,	// (0x00021f53) aid_size_cell_graphic2

0x01d2,	// (0x00021f91) bg_popup_window_pane_cp21_ParamLimits

0x01d2,	// (0x00021f91) bg_popup_window_pane_cp21

0x01e0,	// (0x00021f9f) graphic2_pages_pane_ParamLimits

0x01e0,	// (0x00021f9f) graphic2_pages_pane

0x0229,	// (0x00021fe8) grid_graphic2_control_pane_ParamLimits

0x0229,	// (0x00021fe8) grid_graphic2_control_pane

0x0267,	// (0x00022026) grid_graphic2_pane_ParamLimits

0x0267,	// (0x00022026) grid_graphic2_pane

0x02d6,	// (0x00022095) cell_graphic2_pane

0x5ba3,	// (0x00027962) main_comp_mode_pane

0x4bdc,	// (0x0002699b) list_ai3_gene_pane_ParamLimits

0xef60,	// (0x00030d1f) bg_popup_window_pane_cp19_ParamLimits

0x4d4f,	// (0x00026b0e) bg_touch_area_indi_pane_ParamLimits

0x4d4f,	// (0x00026b0e) bg_touch_area_indi_pane

0x4d65,	// (0x00026b24) bg_touch_area_indi_pane_cp01_ParamLimits

0x4d65,	// (0x00026b24) bg_touch_area_indi_pane_cp01

0x4d7b,	// (0x00026b3a) bg_touch_area_indi_pane_cp02_ParamLimits

0x4d7b,	// (0x00026b3a) bg_touch_area_indi_pane_cp02

0x4d91,	// (0x00026b50) bg_touch_area_indi_pane_cp03_ParamLimits

0x4d91,	// (0x00026b50) bg_touch_area_indi_pane_cp03

0x4da7,	// (0x00026b66) popup_slider_window_g1_ParamLimits

0x4dc3,	// (0x00026b82) popup_slider_window_g2_ParamLimits

0x4ddf,	// (0x00026b9e) popup_slider_window_g3_ParamLimits

0xfcc3,	// (0x00031a82) popup_slider_window_g_ParamLimits

0x4dfb,	// (0x00026bba) popup_slider_window_t1_ParamLimits

0x4e3f,	// (0x00026bfe) small_volume_slider_vertical_pane_ParamLimits

0x02d6,	// (0x00022095) cell_graphic2_pane_ParamLimits

0x0321,	// (0x000220e0) bg_button_pane_cp10_ParamLimits

0x0321,	// (0x000220e0) bg_button_pane_cp10

0x0332,	// (0x000220f1) bg_button_pane_cp11_ParamLimits

0x0332,	// (0x000220f1) bg_button_pane_cp11

0x0343,	// (0x00022102) graphic2_pages_pane_g1_ParamLimits

0x0343,	// (0x00022102) graphic2_pages_pane_g1

0x035e,	// (0x0002211d) graphic2_pages_pane_g2_ParamLimits

0x035e,	// (0x0002211d) graphic2_pages_pane_g2

0x0001,

0xfd87,	// (0x00031b46) graphic2_pages_pane_g_ParamLimits

0xfd87,	// (0x00031b46) graphic2_pages_pane_g

0x0376,	// (0x00022135) graphic2_pages_pane_t1_ParamLimits

0x0376,	// (0x00022135) graphic2_pages_pane_t1

0x038e,	// (0x0002214d) cell_graphic2_control_pane_ParamLimits

0x038e,	// (0x0002214d) cell_graphic2_control_pane

0x03b8,	// (0x00022177) cell_graphic2_pane_g1_ParamLimits

0x03b8,	// (0x00022177) cell_graphic2_pane_g1

0xd25f,	// (0x0002f01e) cell_graphic2_pane_g2_ParamLimits

0xd25f,	// (0x0002f01e) cell_graphic2_pane_g2

0x03c5,	// (0x00022184) cell_graphic2_pane_g3_ParamLimits

0x03c5,	// (0x00022184) cell_graphic2_pane_g3

0xd26c,	// (0x0002f02b) cell_graphic2_pane_g4_ParamLimits

0xd26c,	// (0x0002f02b) cell_graphic2_pane_g4

0x03d2,	// (0x00022191) cell_graphic2_pane_g5_ParamLimits

0x03d2,	// (0x00022191) cell_graphic2_pane_g5

0x0004,

0xfd8c,	// (0x00031b4b) cell_graphic2_pane_g_ParamLimits

0xfd8c,	// (0x00031b4b) cell_graphic2_pane_g

0x03ef,	// (0x000221ae) cell_graphic2_pane_t1_ParamLimits

0x03ef,	// (0x000221ae) cell_graphic2_pane_t1

0x2c0a,	// (0x000249c9) grid_highlight_pane_cp11_ParamLimits

0x2c0a,	// (0x000249c9) grid_highlight_pane_cp11

0x0e82,	// (0x00022c41) bg_button_pane_cp05

0x0424,	// (0x000221e3) cell_graphic2_control_pane_g1

0x3dfc,	// (0x00025bbb) bg_touch_area_indi_pane_g1

0xa705,	// (0x0002c4c4) aid_cmod_rocker_key_size

0xa70f,	// (0x0002c4ce) aid_cmode_itu_key_size

0xa719,	// (0x0002c4d8) main_cmode_video_pane

0xa721,	// (0x0002c4e0) main_comp_mode_itu_pane

0xa72b,	// (0x0002c4ea) main_comp_mode_rocker_pane

0xa733,	// (0x0002c4f2) cell_cmode_rocker_pane_ParamLimits

0xa733,	// (0x0002c4f2) cell_cmode_rocker_pane

0xa745,	// (0x0002c504) cell_cmode_itu_pane_ParamLimits

0xa745,	// (0x0002c504) cell_cmode_itu_pane

0x12ef,	// (0x000230ae) bg_button_pane_cp06_ParamLimits

0x12ef,	// (0x000230ae) bg_button_pane_cp06

0x4028,	// (0x00025de7) cell_cmode_rocker_pane_g1_ParamLimits

0x4028,	// (0x00025de7) cell_cmode_rocker_pane_g1

0x4e64,	// (0x00026c23) cell_cmode_rocker_pane_g2_ParamLimits

0x4e64,	// (0x00026c23) cell_cmode_rocker_pane_g2

0x0001,

0xfd9c,	// (0x00031b5b) cell_cmode_rocker_pane_g_ParamLimits

0xfd9c,	// (0x00031b5b) cell_cmode_rocker_pane_g

0x0c5f,	// (0x00022a1e) bg_button_pane_cp07

0xa75a,	// (0x0002c519) cell_cmode_itu_pane_g1

0xa763,	// (0x0002c522) cell_cmode_itu_pane_t1

0xa771,	// (0x0002c530) cell_cmode_itu_pane_t2

0x0001,

0xfda1,	// (0x00031b60) cell_cmode_itu_pane_t

0x4fe5,	// (0x00026da4) aid_touch_ctrl_left

0x4fed,	// (0x00026dac) aid_touch_ctrl_right

0x0c5f,	// (0x00022a1e) compa_mode_pane

0x044c,	// (0x0002220b) aid_cmod_rocker_key_size_cp

0x0456,	// (0x00022215) aid_cmode_itu_key_size_cp

0xa77f,	// (0x0002c53e) compa_mode_pane_g1

0xa787,	// (0x0002c546) compa_mode_pane_g2

0xa78f,	// (0x0002c54e) compa_mode_pane_g3

0x0002,

0xfda6,	// (0x00031b65) compa_mode_pane_g

0x0460,	// (0x0002221f) main_comp_mode_itu_pane_cp

0x046a,	// (0x00022229) main_comp_mode_rocker_pane_cp

0x0474,	// (0x00022233) cell_cmode_itu_pane_cp_ParamLimits

0x0474,	// (0x00022233) cell_cmode_itu_pane_cp

0x0489,	// (0x00022248) cell_cmode_rocker_pane_cp_ParamLimits

0x0489,	// (0x00022248) cell_cmode_rocker_pane_cp

0x12ef,	// (0x000230ae) bg_button_pane_cp06_cp_ParamLimits

0x12ef,	// (0x000230ae) bg_button_pane_cp06_cp

0x4028,	// (0x00025de7) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4028,	// (0x00025de7) cell_cmode_rocker_pane_g1_cp

0x3dfc,	// (0x00025bbb) cell_cmode_rocker_pane_g2_cp

0x0c5f,	// (0x00022a1e) bg_button_pane_cp07_cp

0x049b,	// (0x0002225a) cell_cmode_itu_pane_g1_cp

0x04a4,	// (0x00022263) cell_cmode_itu_pane_t1_cp

0x04b2,	// (0x00022271) cell_cmode_itu_pane_t2_cp

0xe785,	// (0x00030544) settings_code_pane_cp2

0x0d4f,	// (0x00022b0e) bg_popup_window_pane_cp3_ParamLimits

0x1080,	// (0x00022e3f) heading_pane_cp3_ParamLimits

0x108f,	// (0x00022e4e) listscroll_popup_graphic_pane_ParamLimits

0x7c3a,	// (0x000299f9) fep_hwr_aid_pane_ParamLimits

0x8612,	// (0x0002a3d1) aid_touch_sctrl_top_ParamLimits

0x862d,	// (0x0002a3ec) sctrl_sk_top_pane_g1_ParamLimits

0x7f63,	// (0x00029d22) sctrl_sk_top_pane_g2_ParamLimits

0xfcdc,	// (0x00031a9b) sctrl_sk_top_pane_g_ParamLimits

0x863a,	// (0x0002a3f9) sctrl_sk_top_pane_t1_ParamLimits

0x8612,	// (0x0002a3d1) aid_touch_sctrl_bottom_ParamLimits

0x863a,	// (0x0002a3f9) sctrl_sk_bottom_pane_t1_ParamLimits

0x4f2f,	// (0x00026cee) aid_area_touch_clock

0xd08f,	// (0x0002ee4e) aid_vkb2_area_top_pane_cell_ParamLimits

0xd08f,	// (0x0002ee4e) aid_vkb2_area_top_pane_cell

0xd13a,	// (0x0002eef9) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd13a,	// (0x0002eef9) aid_vkb2_area_bottom_pane_cell

0x8f69,	// (0x0002ad28) popup_char_count_window

0xa797,	// (0x0002c556) popup_char_count_window_g1

0xa7a0,	// (0x0002c55f) popup_char_count_window_g2

0xa7a9,	// (0x0002c568) popup_char_count_window_g3

0x0002,

0xfdad,	// (0x00031b6c) popup_char_count_window_g

0xa7b2,	// (0x0002c571) popup_char_count_window_t1

0x8c21,	// (0x0002a9e0) popup_fep_char_preview_window_ParamLimits

0x8c21,	// (0x0002a9e0) popup_fep_char_preview_window

0xd0af,	// (0x0002ee6e) vkb2_top_candi_pane_ParamLimits

0xd0af,	// (0x0002ee6e) vkb2_top_candi_pane

0x04c0,	// (0x0002227f) cell_vkb2_top_candi_pane_ParamLimits

0x04c0,	// (0x0002227f) cell_vkb2_top_candi_pane

0x91af,	// (0x0002af6e) bg_popup_fep_char_preview_window_ParamLimits

0x91af,	// (0x0002af6e) bg_popup_fep_char_preview_window

0x91bd,	// (0x0002af7c) popup_fep_char_preview_window_t1_ParamLimits

0x91bd,	// (0x0002af7c) popup_fep_char_preview_window_t1

0xa7c0,	// (0x0002c57f) bg_popup_fep_char_preview_window_g1

0xa7c8,	// (0x0002c587) bg_popup_fep_char_preview_window_g2

0xa7d0,	// (0x0002c58f) bg_popup_fep_char_preview_window_g3

0xa7d8,	// (0x0002c597) bg_popup_fep_char_preview_window_g4

0xa7e0,	// (0x0002c59f) bg_popup_fep_char_preview_window_g5

0xa7e8,	// (0x0002c5a7) bg_popup_fep_char_preview_window_g6

0xa7f0,	// (0x0002c5af) bg_popup_fep_char_preview_window_g7

0xa7f8,	// (0x0002c5b7) bg_popup_fep_char_preview_window_g8

0xa800,	// (0x0002c5bf) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb4,	// (0x00031b73) bg_popup_fep_char_preview_window_g

0x7f63,	// (0x00029d22) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7f63,	// (0x00029d22) cell_vkb2_top_candi_pane_g1

0x7f71,	// (0x00029d30) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7f71,	// (0x00029d30) cell_vkb2_top_candi_pane_g2

0xa342,	// (0x0002c101) cell_vkb2_top_candi_pane_g3_ParamLimits

0xa342,	// (0x0002c101) cell_vkb2_top_candi_pane_g3

0x91ff,	// (0x0002afbe) cell_vkb2_top_candi_pane_g4_ParamLimits

0x91ff,	// (0x0002afbe) cell_vkb2_top_candi_pane_g4

0x4278,	// (0x00026037) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4278,	// (0x00026037) cell_vkb2_top_candi_pane_g5

0x9220,	// (0x0002afdf) cell_vkb2_top_candi_pane_g6_ParamLimits

0x9220,	// (0x0002afdf) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc9,	// (0x00031b88) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc9,	// (0x00031b88) cell_vkb2_top_candi_pane_g

0x922e,	// (0x0002afed) cell_vkb2_top_candi_pane_t1

0x760f,	// (0x000293ce) aid_size_touch_slider_mark_ParamLimits

0x760f,	// (0x000293ce) aid_size_touch_slider_mark

0x0214,	// (0x00021fd3) grid_graphic2_catg_pane_ParamLimits

0x0214,	// (0x00021fd3) grid_graphic2_catg_pane

0x02ab,	// (0x0002206a) popup_grid_graphic2_window_t1_ParamLimits

0x02ab,	// (0x0002206a) popup_grid_graphic2_window_t1

0x02c0,	// (0x0002207f) popup_grid_graphic2_window_t2_ParamLimits

0x02c0,	// (0x0002207f) popup_grid_graphic2_window_t2

0x0001,

0xfd82,	// (0x00031b41) popup_grid_graphic2_window_t_ParamLimits

0xfd82,	// (0x00031b41) popup_grid_graphic2_window_t

0x0e82,	// (0x00022c41) bg_button_pane_cp05_ParamLimits

0x0424,	// (0x000221e3) cell_graphic2_control_pane_g1_ParamLimits

0x4fab,	// (0x00026d6a) cell_graphic2_catg_pane_ParamLimits

0x4fab,	// (0x00026d6a) cell_graphic2_catg_pane

0x0c5f,	// (0x00022a1e) bg_button_pane_cp12

0x0512,	// (0x000222d1) cell_graphic2_catg_pane_g1

0x4efb,	// (0x00026cba) cell_tb_ext_pane_t1_ParamLimits

0x8ff9,	// (0x0002adb8) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8ff9,	// (0x0002adb8) vkb2_top_cell_right_narrow_pane

0x9011,	// (0x0002add0) vkb2_top_cell_right_wide_pane_ParamLimits

0x9011,	// (0x0002add0) vkb2_top_cell_right_wide_pane

0x7c2c,	// (0x000299eb) bg_vkb2_func_pane_ParamLimits

0x7c2c,	// (0x000299eb) bg_vkb2_func_pane

0x9082,	// (0x0002ae41) vkb2_top_cell_left_pane_g1_ParamLimits

0x7c2c,	// (0x000299eb) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7c2c,	// (0x000299eb) bg_vkb2_fuc_pane_cp03

0x90e0,	// (0x0002ae9f) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2042,	// (0x00023e01) bg_vkb2_func_pane_g1

0x203a,	// (0x00023df9) bg_vkb2_func_pane_g2

0x204a,	// (0x00023e09) bg_vkb2_func_pane_g3

0x2052,	// (0x00023e11) bg_vkb2_func_pane_g4

0x205a,	// (0x00023e19) bg_vkb2_func_pane_g5

0x2062,	// (0x00023e21) bg_vkb2_func_pane_g6

0x2072,	// (0x00023e31) bg_vkb2_func_pane_g7

0x206a,	// (0x00023e29) bg_vkb2_func_pane_g8

0x2032,	// (0x00023df1) bg_vkb2_func_pane_g9

0x0008,

0xfdd6,	// (0x00031b95) bg_vkb2_func_pane_g

0x7c2c,	// (0x000299eb) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7c2c,	// (0x000299eb) bg_vkb2_fuc_pane_cp01

0x9082,	// (0x0002ae41) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9082,	// (0x0002ae41) vkb2_top_cell_right_wide_pane_g1

0x7c2c,	// (0x000299eb) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7c2c,	// (0x000299eb) bg_vkb2_fuc_pane_cp02

0x90e0,	// (0x0002ae9f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x90e0,	// (0x0002ae9f) vkb2_top_cell_right_narrow_pane_g1

0xeeae,	// (0x00030c6d) aid_touch_area_decrease_ParamLimits

0xeeae,	// (0x00030c6d) aid_touch_area_decrease

0xeedc,	// (0x00030c9b) aid_touch_area_increase_ParamLimits

0xeedc,	// (0x00030c9b) aid_touch_area_increase

0xef04,	// (0x00030cc3) aid_touch_area_mute_ParamLimits

0xef04,	// (0x00030cc3) aid_touch_area_mute

0xef2c,	// (0x00030ceb) aid_touch_area_slider_ParamLimits

0xef2c,	// (0x00030ceb) aid_touch_area_slider

0xef6c,	// (0x00030d2b) popup_slider_window_g4_ParamLimits

0xef6c,	// (0x00030d2b) popup_slider_window_g4

0xef94,	// (0x00030d53) popup_slider_window_g5_ParamLimits

0xef94,	// (0x00030d53) popup_slider_window_g5

0xefc8,	// (0x00030d87) popup_slider_window_g6_ParamLimits

0xefc8,	// (0x00030d87) popup_slider_window_g6

0x4e27,	// (0x00026be6) popup_slider_window_t2_ParamLimits

0x4e27,	// (0x00026be6) popup_slider_window_t2

0x0001,

0xfcd0,	// (0x00031a8f) popup_slider_window_t_ParamLimits

0xfcd0,	// (0x00031a8f) popup_slider_window_t

0xefe4,	// (0x00030da3) slider_pane_ParamLimits

0xefe4,	// (0x00030da3) slider_pane

0xa808,	// (0x0002c5c7) slider_pane_g1_ParamLimits

0xa808,	// (0x0002c5c7) slider_pane_g1

0xa81c,	// (0x0002c5db) slider_pane_g2_ParamLimits

0xa81c,	// (0x0002c5db) slider_pane_g2

0xa832,	// (0x0002c5f1) slider_pane_g3_ParamLimits

0xa832,	// (0x0002c5f1) slider_pane_g3

0x0003,

0xfde9,	// (0x00031ba8) slider_pane_g_ParamLimits

0xfde9,	// (0x00031ba8) slider_pane_g

0xcc52,	// (0x0002ea11) popup_tb_float_extension_window_ParamLimits

0xcc52,	// (0x0002ea11) popup_tb_float_extension_window

0xa85e,	// (0x0002c61d) aid_size_cell_tb_float_ext

0x0c5f,	// (0x00022a1e) bg_popup_sub_window_cp28

0xa869,	// (0x0002c628) grid_tb_float_ext_pane

0xa871,	// (0x0002c630) cell_tb_float_ext_pane_ParamLimits

0xa871,	// (0x0002c630) cell_tb_float_ext_pane

0xa889,	// (0x0002c648) cell_tb_float_ext_pane_g1

0xa892,	// (0x0002c651) grid_highlight_pane_cp12

0xceb7,	// (0x0002ec76) cell_last_hwr_side_pane_ParamLimits

0xceb7,	// (0x0002ec76) cell_last_hwr_side_pane

0x3dfc,	// (0x00025bbb) cell_last_hwr_side_pane_g1

0xa89b,	// (0x0002c65a) cell_last_hwr_side_pane_g2

0x0001,

0xfdf2,	// (0x00031bb1) cell_last_hwr_side_pane_g

0xd20e,	// (0x0002efcd) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd20e,	// (0x0002efcd) vkb2_area_bottom_space_btn_pane

0x7f63,	// (0x00029d22) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xa6f3,	// (0x0002c4b2) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x922e,	// (0x0002afed) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9244,	// (0x0002b003) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9244,	// (0x0002b003) vkb2_area_bottom_space_btn_pane_g1

0x927a,	// (0x0002b039) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x927a,	// (0x0002b039) vkb2_area_bottom_space_btn_pane_g2

0x92b0,	// (0x0002b06f) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x92b0,	// (0x0002b06f) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf7,	// (0x00031bb6) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf7,	// (0x00031bb6) vkb2_area_bottom_space_btn_pane_g

0x7ce9,	// (0x00029aa8) cel_fep_hwr_func_pane_ParamLimits

0x7ce9,	// (0x00029aa8) cel_fep_hwr_func_pane

0xce8c,	// (0x0002ec4b) cell_hwr_side_button_pane_ParamLimits

0xce8c,	// (0x0002ec4b) cell_hwr_side_button_pane

0x4f2f,	// (0x00026cee) aid_area_touch_clock_ParamLimits

0x0e82,	// (0x00022c41) bg_uniindi_top_pane_ParamLimits

0x4f41,	// (0x00026d00) uniindi_top_pane_g1_ParamLimits

0x4f57,	// (0x00026d16) uniindi_top_pane_g2_ParamLimits

0x4f63,	// (0x00026d22) uniindi_top_pane_g3_ParamLimits

0x4f74,	// (0x00026d33) uniindi_top_pane_g4_ParamLimits

0xfd08,	// (0x00031ac7) uniindi_top_pane_g_ParamLimits

0x4f81,	// (0x00026d40) uniindi_top_pane_t1_ParamLimits

0x0e82,	// (0x00022c41) bg_vkb2_func_pane_cp01_ParamLimits

0x0e82,	// (0x00022c41) bg_vkb2_func_pane_cp01

0xa8a4,	// (0x0002c663) cel_fep_hwr_func_pane_g1_ParamLimits

0xa8a4,	// (0x0002c663) cel_fep_hwr_func_pane_g1

0x0e82,	// (0x00022c41) bg_vkb2_func_pane_cp02_ParamLimits

0x0e82,	// (0x00022c41) bg_vkb2_func_pane_cp02

0xa8a4,	// (0x0002c663) cell_hwr_side_button_pane_g1_ParamLimits

0xa8a4,	// (0x0002c663) cell_hwr_side_button_pane_g1

0x1f56,	// (0x00023d15) status_pane_g4_ParamLimits

0x1f56,	// (0x00023d15) status_pane_g4

0x1f6e,	// (0x00023d2d) status_pane_t1

0x3bec,	// (0x000259ab) form2_midp_gauge_slider_cont_pane

0x3bf4,	// (0x000259b3) form2_midp_gauge_slider_pane_t1_ParamLimits

0xea1f,	// (0x000307de) form2_midp_gauge_slider_pane_t2_ParamLimits

0xea31,	// (0x000307f0) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacf,	// (0x0003188e) form2_midp_gauge_slider_pane_t_ParamLimits

0x3c06,	// (0x000259c5) form2_midp_slider_pane_ParamLimits

0x8be1,	// (0x0002a9a0) aid_size_cell_func_vkb2_ParamLimits

0x8be1,	// (0x0002a9a0) aid_size_cell_func_vkb2

0xa84a,	// (0x0002c609) slider_pane_g4_ParamLimits

0xa84a,	// (0x0002c609) slider_pane_g4

0xd281,	// (0x0002f040) form2_midp_gauge_slider_pane_t2_cp01

0xd28f,	// (0x0002f04e) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd28f,	// (0x0002f04e) form2_midp_gauge_slider_pane_t3_cp01

0x9321,	// (0x0002b0e0) form2_midp_slider_pane_cp01

0x0c5f,	// (0x00022a1e) navi_smil_pane

0xa8d4,	// (0x0002c693) navi_smil_pane_g1

0xa8dc,	// (0x0002c69b) navi_smil_pane_t1

0xa8b2,	// (0x0002c671) form2_midp_slider_pane_g1

0xa8bb,	// (0x0002c67a) form2_midp_slider_pane_g2

0xa8c3,	// (0x0002c682) form2_midp_slider_pane_g3

0xa8b2,	// (0x0002c671) form2_midp_slider_pane_g4

0x0546,	// (0x00022305) form2_midp_slider_pane_g5

0x0004,

0xfe00,	// (0x00031bbf) form2_midp_slider_pane_g

0x92e6,	// (0x0002b0a5) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x92e6,	// (0x0002b0a5) vkb2_area_bottom_space_btn_pane_g4

0xe1fd,	// (0x0002ffbc) lc0_navi_pane_ParamLimits

0xe1fd,	// (0x0002ffbc) lc0_navi_pane

0xe267,	// (0x00030026) lc0_stat_indi_pane_ParamLimits

0xe267,	// (0x00030026) lc0_stat_indi_pane

0xe27c,	// (0x0003003b) ls0_title_pane_ParamLimits

0xe27c,	// (0x0003003b) ls0_title_pane

0x12ef,	// (0x000230ae) bg_popup_sub_pane_cp14_ParamLimits

0x4f16,	// (0x00026cd5) list_uniindi_pane_ParamLimits

0x4f22,	// (0x00026ce1) uniindi_top_pane_ParamLimits

0x4fbd,	// (0x00026d7c) list_single_uniindi_pane_g1_ParamLimits

0x4fd0,	// (0x00026d8f) list_single_uniindi_pane_t1_ParamLimits

0xd2ac,	// (0x0002f06b) lc0_stat_clock_pane_ParamLimits

0xd2ac,	// (0x0002f06b) lc0_stat_clock_pane

0x0569,	// (0x00022328) lc0_stat_indi_pane_g1_ParamLimits

0x0569,	// (0x00022328) lc0_stat_indi_pane_g1

0x055c,	// (0x0002231b) lc0_stat_indi_pane_g2_ParamLimits

0x055c,	// (0x0002231b) lc0_stat_indi_pane_g2

0x0001,

0xfe0b,	// (0x00031bca) lc0_stat_indi_pane_g_ParamLimits

0xfe0b,	// (0x00031bca) lc0_stat_indi_pane_g

0xd2b9,	// (0x0002f078) lc0_uni_indicator_pane_ParamLimits

0xd2b9,	// (0x0002f078) lc0_uni_indicator_pane

0xa8ea,	// (0x0002c6a9) ls0_title_pane_g1_ParamLimits

0xa8ea,	// (0x0002c6a9) ls0_title_pane_g1

0x0583,	// (0x00022342) ls0_title_pane_t1_ParamLimits

0x0583,	// (0x00022342) ls0_title_pane_t1

0xd2c6,	// (0x0002f085) lc0_uni_indicator_pane_g1_ParamLimits

0xd2c6,	// (0x0002f085) lc0_uni_indicator_pane_g1

0xa8fe,	// (0x0002c6bd) lc0_stat_clock_pane_t1

0x5ba3,	// (0x00027962) main_ai5_pane

0xa90c,	// (0x0002c6cb) ai5_sk_pane_ParamLimits

0xa90c,	// (0x0002c6cb) ai5_sk_pane

0x05c6,	// (0x00022385) cell_ai5_widget_pane_ParamLimits

0x05c6,	// (0x00022385) cell_ai5_widget_pane

0xa919,	// (0x0002c6d8) aid_size_cell_widget_grid

0xa926,	// (0x0002c6e5) bg_ai5_widget_pane_ParamLimits

0xa926,	// (0x0002c6e5) bg_ai5_widget_pane

0x0653,	// (0x00022412) cell_ai5_widget_pane_g2

0x0667,	// (0x00022426) cell_ai5_widget_pane_g3

0x0681,	// (0x00022440) cell_ai5_widget_pane_g4

0x0691,	// (0x00022450) cell_ai5_widget_pane_g5

0x06a1,	// (0x00022460) cell_ai5_widget_pane_g6

0x06ad,	// (0x0002246c) cell_ai5_widget_pane_g7

0x0719,	// (0x000224d8) cell_ai5_widget_pane_t1_ParamLimits

0x0719,	// (0x000224d8) cell_ai5_widget_pane_t1

0x0736,	// (0x000224f5) cell_ai5_widget_pane_t2_ParamLimits

0x0736,	// (0x000224f5) cell_ai5_widget_pane_t2

0x074e,	// (0x0002250d) cell_ai5_widget_pane_t3_ParamLimits

0x074e,	// (0x0002250d) cell_ai5_widget_pane_t3

0x0766,	// (0x00022525) cell_ai5_widget_pane_t4_ParamLimits

0x0766,	// (0x00022525) cell_ai5_widget_pane_t4

0x078c,	// (0x0002254b) cell_ai5_widget_pane_t5_ParamLimits

0x078c,	// (0x0002254b) cell_ai5_widget_pane_t5

0xa960,	// (0x0002c71f) cell_ai5_widget_pane_t6_ParamLimits

0xa960,	// (0x0002c71f) cell_ai5_widget_pane_t6

0xa972,	// (0x0002c731) cell_ai5_widget_pane_t7_ParamLimits

0xa972,	// (0x0002c731) cell_ai5_widget_pane_t7

0x07ab,	// (0x0002256a) cell_ai5_widget_pane_t8_ParamLimits

0x07ab,	// (0x0002256a) cell_ai5_widget_pane_t8

0x000b,

0xfe2b,	// (0x00031bea) cell_ai5_widget_pane_t_ParamLimits

0xfe2b,	// (0x00031bea) cell_ai5_widget_pane_t

0x082f,	// (0x000225ee) grid_ai5_widget_pane

0x12ef,	// (0x000230ae) highlight_cell_ai5_widget_pane_ParamLimits

0x12ef,	// (0x000230ae) highlight_cell_ai5_widget_pane

0x083b,	// (0x000225fa) ai5_sk_left_pane

0x0845,	// (0x00022604) ai5_sk_middle_pane

0x084f,	// (0x0002260e) ai5_sk_right_pane

0xa991,	// (0x0002c750) bg_ai5_widget_pane_g1_ParamLimits

0xa991,	// (0x0002c750) bg_ai5_widget_pane_g1

0xa99d,	// (0x0002c75c) bg_ai5_widget_pane_g2_ParamLimits

0xa99d,	// (0x0002c75c) bg_ai5_widget_pane_g2

0xa9a9,	// (0x0002c768) bg_ai5_widget_pane_g3_ParamLimits

0xa9a9,	// (0x0002c768) bg_ai5_widget_pane_g3

0xa9b5,	// (0x0002c774) bg_ai5_widget_pane_g4_ParamLimits

0xa9b5,	// (0x0002c774) bg_ai5_widget_pane_g4

0xa9c1,	// (0x0002c780) bg_ai5_widget_pane_g5_ParamLimits

0xa9c1,	// (0x0002c780) bg_ai5_widget_pane_g5

0xa9cd,	// (0x0002c78c) bg_ai5_widget_pane_g6_ParamLimits

0xa9cd,	// (0x0002c78c) bg_ai5_widget_pane_g6

0xa9d9,	// (0x0002c798) bg_ai5_widget_pane_g7_ParamLimits

0xa9d9,	// (0x0002c798) bg_ai5_widget_pane_g7

0xa9e5,	// (0x0002c7a4) bg_ai5_widget_pane_g8_ParamLimits

0xa9e5,	// (0x0002c7a4) bg_ai5_widget_pane_g8

0xa9f1,	// (0x0002c7b0) bg_ai5_widget_pane_g9_ParamLimits

0xa9f1,	// (0x0002c7b0) bg_ai5_widget_pane_g9

0x0008,

0xfe44,	// (0x00031c03) bg_ai5_widget_pane_g_ParamLimits

0xfe44,	// (0x00031c03) bg_ai5_widget_pane_g

0xaa21,	// (0x0002c7e0) cell_shortcut_ai5_widget_pane_ParamLimits

0xaa21,	// (0x0002c7e0) cell_shortcut_ai5_widget_pane

0xaa32,	// (0x0002c7f1) bg_cell_shortcut_ai5_widget_pane

0x103c,	// (0x00022dfb) cell_grid_ai5_widget_pane_g1

0x1ca6,	// (0x00023a65) highlight_cell_shortcut_ai5_widget_pane

0x2042,	// (0x00023e01) ai5_sk_left_pane_g1

0xaa3a,	// (0x0002c7f9) ai5_sk_left_pane_g2

0xaa42,	// (0x0002c801) ai5_sk_left_pane_g3

0xaa4a,	// (0x0002c809) ai5_sk_left_pane_g4

0x0003,

0xfe57,	// (0x00031c16) ai5_sk_left_pane_g

0xaa52,	// (0x0002c811) ai5_sk_left_pane_t1

0x203a,	// (0x00023df9) ai5_sk_right_pane_g1

0xaa60,	// (0x0002c81f) ai5_sk_right_pane_g2

0xaa68,	// (0x0002c827) ai5_sk_right_pane_g3

0xaa70,	// (0x0002c82f) ai5_sk_right_pane_g4

0x0003,

0xfe60,	// (0x00031c1f) ai5_sk_right_pane_g

0xaa78,	// (0x0002c837) ai5_sk_right_pane_t1

0x203a,	// (0x00023df9) ai5_sk_middle_pane_g1

0x2042,	// (0x00023e01) ai5_sk_middle_pane_g2

0x205a,	// (0x00023e19) ai5_sk_middle_pane_g3

0xaa68,	// (0x0002c827) ai5_sk_middle_pane_g4

0xaa42,	// (0x0002c801) ai5_sk_middle_pane_g5

0xaa86,	// (0x0002c845) ai5_sk_middle_pane_g6

0x0859,	// (0x00022618) ai5_sk_middle_pane_g7

0x0006,

0xfe69,	// (0x00031c28) ai5_sk_middle_pane_g

0xe0fb,	// (0x0002feba) aid_touch_area_size_lc0_ParamLimits

0xe0fb,	// (0x0002feba) aid_touch_area_size_lc0

0x7f92,	// (0x00029d51) cell_hwr_candidate_pane_t1_ParamLimits

0x1e8b,	// (0x00023c4a) aid_touch_navi_pane

0xe368,	// (0x00030127) status_dt_navi_pane_ParamLimits

0xe368,	// (0x00030127) status_dt_navi_pane

0xe380,	// (0x0003013f) status_dt_sta_pane_ParamLimits

0xe380,	// (0x0003013f) status_dt_sta_pane

0x0861,	// (0x00022620) dt_sta_controll_pane

0x086e,	// (0x0002262d) dt_sta_indi_pane

0x087b,	// (0x0002263a) dt_sta_title_pane

0x0e82,	// (0x00022c41) bg_dt_sta_indi_pane_ParamLimits

0x0e82,	// (0x00022c41) bg_dt_sta_indi_pane

0x088d,	// (0x0002264c) dt_sta_battery_pane

0x0895,	// (0x00022654) dt_sta_indi_pane_g1

0x089e,	// (0x0002265d) dt_sta_indi_pane_g2

0x08a7,	// (0x00022666) dt_sta_indi_pane_g3

0x0002,

0xfe78,	// (0x00031c37) dt_sta_indi_pane_g

0x08b0,	// (0x0002266f) dt_sta_signal_pane

0x12ef,	// (0x000230ae) bg_dt_sta_title_pane_ParamLimits

0x12ef,	// (0x000230ae) bg_dt_sta_title_pane

0x08b9,	// (0x00022678) dt_sta_title_pane_g1

0x08c1,	// (0x00022680) dt_sta_title_pane_t1_ParamLimits

0x08c1,	// (0x00022680) dt_sta_title_pane_t1

0x0c5f,	// (0x00022a1e) bg_dt_sta_control_pane

0x08d6,	// (0x00022695) dt_sta_controll_pane_g1

0x08df,	// (0x0002269e) bg_dt_sta_title_pane_g1

0x08e8,	// (0x000226a7) bg_dt_sta_title_pane_g2

0x08f1,	// (0x000226b0) bg_dt_sta_title_pane_g3

0x0002,

0xfe7f,	// (0x00031c3e) bg_dt_sta_title_pane_g

0x3dfc,	// (0x00025bbb) bg_dt_sta_indi_pane_g1

0x08fa,	// (0x000226b9) dt_sta_signal_pane_g1

0x0902,	// (0x000226c1) dt_sta_signal_pane_g2

0x0001,

0xfe86,	// (0x00031c45) dt_sta_signal_pane_g

0xaa8e,	// (0x0002c84d) dt_sta_battery_pane_g1

0xaa97,	// (0x0002c856) dt_sta_battery_pane_t1

0x3dfc,	// (0x00025bbb) bg_dt_sta_control_pane_g1

0x1876,	// (0x00023635) fep_china_uni_eep_pane

0x187e,	// (0x0002363d) fep_china_uni_entry_pane_ParamLimits

0x188e,	// (0x0002364d) popup_fep_china_uni_window_g1_ParamLimits

0x189e,	// (0x0002365d) popup_fep_china_uni_window_g2_ParamLimits

0x189e,	// (0x0002365d) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x000314b7) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x000314b7) popup_fep_china_uni_window_g

0xaaa6,	// (0x0002c865) fep_china_uni_eep_pane_g1

0xaaae,	// (0x0002c86d) fep_china_uni_eep_pane_t1

0xa8cb,	// (0x0002c68a) aid_touch_area_size_smil_player

0x1f29,	// (0x00023ce8) lc0_clock_pane

0x1f62,	// (0x00023d21) status_pane_g5_ParamLimits

0x1f62,	// (0x00023d21) status_pane_g5

0xc886,	// (0x0002e645) popup_keymap_window

0x1f42,	// (0x00023d01) status_icon_pane

0x0667,	// (0x00022426) cell_ai5_widget_pane_g3_ParamLimits

0x0681,	// (0x00022440) cell_ai5_widget_pane_g4_ParamLimits

0x0691,	// (0x00022450) cell_ai5_widget_pane_g5_ParamLimits

0x06b9,	// (0x00022478) cell_ai5_widget_pane_g8_ParamLimits

0x06b9,	// (0x00022478) cell_ai5_widget_pane_g8

0x06cd,	// (0x0002248c) cell_ai5_widget_pane_g9_ParamLimits

0x06cd,	// (0x0002248c) cell_ai5_widget_pane_g9

0x06e1,	// (0x000224a0) cell_ai5_widget_pane_g10_ParamLimits

0x06e1,	// (0x000224a0) cell_ai5_widget_pane_g10

0xaabd,	// (0x0002c87c) status_icon_pane_g1

0x0c5f,	// (0x00022a1e) bg_popup_sub_pane_cp13

0xaac5,	// (0x0002c884) popup_keymap_window_t1

0xe089,	// (0x0002fe48) control_pane_g6_ParamLimits

0xe089,	// (0x0002fe48) control_pane_g6

0xe096,	// (0x0002fe55) control_pane_g7_ParamLimits

0xe096,	// (0x0002fe55) control_pane_g7

0xe0a3,	// (0x0002fe62) control_pane_g8_ParamLimits

0xe0a3,	// (0x0002fe62) control_pane_g8

0x0861,	// (0x00022620) dt_sta_controll_pane_ParamLimits

0x086e,	// (0x0002262d) dt_sta_indi_pane_ParamLimits

0x087b,	// (0x0002263a) dt_sta_title_pane_ParamLimits

0x1240,	// (0x00022fff) aid_size_touch_scroll_bar_cale

0x5c7a,	// (0x00027a39) popup_discreet_window_ParamLimits

0x5c7a,	// (0x00027a39) popup_discreet_window

0xc4c4,	// (0x0002e283) popup_sk_window

0x2622,	// (0x000243e1) bg_popup_sub_pane_cp28_ParamLimits

0x2622,	// (0x000243e1) bg_popup_sub_pane_cp28

0xaad3,	// (0x0002c892) popup_discreet_window_g1_ParamLimits

0xaad3,	// (0x0002c892) popup_discreet_window_g1

0xaaf3,	// (0x0002c8b2) popup_discreet_window_t1_ParamLimits

0xaaf3,	// (0x0002c8b2) popup_discreet_window_t1

0xab11,	// (0x0002c8d0) popup_discreet_window_t2_ParamLimits

0xab11,	// (0x0002c8d0) popup_discreet_window_t2

0x0002,

0xfe8b,	// (0x00031c4a) popup_discreet_window_t_ParamLimits

0xfe8b,	// (0x00031c4a) popup_discreet_window_t

0x9356,	// (0x0002b115) popup_sk_window_g1

0x935f,	// (0x0002b11e) popup_sk_window_g2

0x0001,

0xfe92,	// (0x00031c51) popup_sk_window_g

0x9368,	// (0x0002b127) popup_sk_window_t1

0x9376,	// (0x0002b135) popup_sk_window_t1_copy1

0x0653,	// (0x00022412) cell_ai5_widget_pane_g2_ParamLimits

0x07bd,	// (0x0002257c) cell_ai5_widget_pane_t9_ParamLimits

0x07bd,	// (0x0002257c) cell_ai5_widget_pane_t9

0x0c5f,	// (0x00022a1e) main_fep_fshwr2_pane

0xd2db,	// (0x0002f09a) aid_fshwr2_btn_pane

0xd2ef,	// (0x0002f0ae) aid_fshwr2_syb_pane

0xd303,	// (0x0002f0c2) aid_fshwr2_txt_pane

0xd313,	// (0x0002f0d2) fshwr2_func_candi_pane

0xd32b,	// (0x0002f0ea) fshwr2_hwr_syb_pane

0xd343,	// (0x0002f102) fshwr2_icf_pane

0x5ba3,	// (0x00027962) fshwr2_icf_bg_pane

0xd36d,	// (0x0002f12c) fshwr2_icf_pane_t1_ParamLimits

0xd36d,	// (0x0002f12c) fshwr2_icf_pane_t1

0x1814,	// (0x000235d3) fshwr2_func_candi_pane_g1

0x09b3,	// (0x00022772) fshwr2_func_candi_row_pane_ParamLimits

0x09b3,	// (0x00022772) fshwr2_func_candi_row_pane

0xd384,	// (0x0002f143) cell_fshwr2_syb_pane_ParamLimits

0xd384,	// (0x0002f143) cell_fshwr2_syb_pane

0x9433,	// (0x0002b1f2) fshwr2_hwr_syb_pane_g1_ParamLimits

0x9433,	// (0x0002b1f2) fshwr2_hwr_syb_pane_g1

0x5ba3,	// (0x00027962) bg_popup_call_pane_cp01

0xd3a6,	// (0x0002f165) fshwr2_func_candi_cell_pane_ParamLimits

0xd3a6,	// (0x0002f165) fshwr2_func_candi_cell_pane

0x2414,	// (0x000241d3) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2414,	// (0x000241d3) fshwr2_func_candi_cell_bg_pane

0xd3e5,	// (0x0002f1a4) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd3e5,	// (0x0002f1a4) fshwr2_func_candi_cell_pane_g1

0xd41c,	// (0x0002f1db) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd41c,	// (0x0002f1db) fshwr2_func_candi_cell_pane_t1

0x5ba3,	// (0x00027962) bg_button_pane_cp08

0x1488,	// (0x00023247) cell_fshwr2_syb_bg_pane

0xd437,	// (0x0002f1f6) cell_fshwr2_syb_bg_pane_g1

0xd447,	// (0x0002f206) cell_fshwr2_syb_bg_pane_t1

0x12ef,	// (0x000230ae) main_tmo_pane

0xe609,	// (0x000303c8) uni_indicator_pane_g1_ParamLimits

0xe61d,	// (0x000303dc) uni_indicator_pane_g2_ParamLimits

0xe632,	// (0x000303f1) uni_indicator_pane_g3_ParamLimits

0x2fae,	// (0x00024d6d) uni_indicator_pane_g4_ParamLimits

0x2fae,	// (0x00024d6d) uni_indicator_pane_g4

0x2fc2,	// (0x00024d81) uni_indicator_pane_g5_ParamLimits

0x2fc2,	// (0x00024d81) uni_indicator_pane_g5

0x2fc2,	// (0x00024d81) uni_indicator_pane_g6_ParamLimits

0x2fc2,	// (0x00024d81) uni_indicator_pane_g6

0xf8f7,	// (0x000316b6) uni_indicator_pane_g_ParamLimits

0xee92,	// (0x00030c51) popup_tmo_note_window_ParamLimits

0xee92,	// (0x00030c51) popup_tmo_note_window

0x868a,	// (0x0002a449) fshwr2_bg_pane

0xd40d,	// (0x0002f1cc) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd40d,	// (0x0002f1cc) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe97,	// (0x00031c56) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe97,	// (0x00031c56) fshwr2_func_candi_cell_pane_g

0x7f4b,	// (0x00029d0a) bg_popup_window_pane_cp01

0x94dd,	// (0x0002b29c) bg_popup_window_pane_g1_cp01

0xab63,	// (0x0002c922) bg_popup_window_pane_cp22_ParamLimits

0xab63,	// (0x0002c922) bg_popup_window_pane_cp22

0xab71,	// (0x0002c930) listscroll_tmo_link_pane_ParamLimits

0xab71,	// (0x0002c930) listscroll_tmo_link_pane

0xabb1,	// (0x0002c970) popup_tmo_note_window_g1_ParamLimits

0xabb1,	// (0x0002c970) popup_tmo_note_window_g1

0xabbe,	// (0x0002c97d) tmo_note_info_pane_ParamLimits

0xabbe,	// (0x0002c97d) tmo_note_info_pane

0x0aaf,	// (0x0002286e) list_tmo_note_info_pane_g1_ParamLimits

0x0aaf,	// (0x0002286e) list_tmo_note_info_pane_g1

0xabd8,	// (0x0002c997) list_tmo_note_info_pane_g2_ParamLimits

0xabd8,	// (0x0002c997) list_tmo_note_info_pane_g2

0x0001,

0xfe9c,	// (0x00031c5b) list_tmo_note_info_pane_g_ParamLimits

0xfe9c,	// (0x00031c5b) list_tmo_note_info_pane_g

0xabf4,	// (0x0002c9b3) list_tmo_note_info_text_pane_ParamLimits

0xabf4,	// (0x0002c9b3) list_tmo_note_info_text_pane

0xac36,	// (0x0002c9f5) list_tmo_link_pane

0xac43,	// (0x0002ca02) scroll_pane_cp20

0xac50,	// (0x0002ca0f) list_single_tmo_link_pane_ParamLimits

0xac50,	// (0x0002ca0f) list_single_tmo_link_pane

0xac60,	// (0x0002ca1f) list_single_tmo_link_pane_t1

0xac6e,	// (0x0002ca2d) list_tmo_note_info_text_pane_t1_ParamLimits

0xac6e,	// (0x0002ca2d) list_tmo_note_info_text_pane_t1

0x13ae,	// (0x0002316d) aid_size_touch_scroll_bar_cp01_ParamLimits

0x13ae,	// (0x0002316d) aid_size_touch_scroll_bar_cp01

0xd954,	// (0x0002f713) aid_size_touch_slider_marker

0xc4b8,	// (0x0002e277) popup_settings_window_ParamLimits

0xc4b8,	// (0x0002e277) popup_settings_window

0x9e8b,	// (0x0002bc4a) popup_candi_list_indi_window

0x1e8b,	// (0x00023c4a) aid_touch_navi_pane_ParamLimits

0x85e6,	// (0x0002a3a5) rs_clock_indi_pane

0x85ef,	// (0x0002a3ae) sctrl_sk_bottom_pane_ParamLimits

0x8600,	// (0x0002a3bf) sctrl_sk_top_pane_ParamLimits

0x8c3b,	// (0x0002a9fa) popup_fep_tooltip_window

0xa919,	// (0x0002c6d8) aid_size_cell_widget_grid_ParamLimits

0x063f,	// (0x000223fe) cell_ai5_widget_pane_g1_ParamLimits

0x063f,	// (0x000223fe) cell_ai5_widget_pane_g1

0x06a1,	// (0x00022460) cell_ai5_widget_pane_g6_ParamLimits

0x06ad,	// (0x0002246c) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe10,	// (0x00031bcf) cell_ai5_widget_pane_g_ParamLimits

0xfe10,	// (0x00031bcf) cell_ai5_widget_pane_g

0x07ec,	// (0x000225ab) cell_ai5_widget_pane_t10_ParamLimits

0x07ec,	// (0x000225ab) cell_ai5_widget_pane_t10

0x082f,	// (0x000225ee) grid_ai5_widget_pane_ParamLimits

0xa9fd,	// (0x0002c7bc) cell_contacts_ai5_widget_pane_ParamLimits

0xa9fd,	// (0x0002c7bc) cell_contacts_ai5_widget_pane

0xab26,	// (0x0002c8e5) popup_discreet_window_t3_ParamLimits

0xab26,	// (0x0002c8e5) popup_discreet_window_t3

0xd35b,	// (0x0002f11a) popup_fshwr2_char_preview_window_ParamLimits

0xd35b,	// (0x0002f11a) popup_fshwr2_char_preview_window

0x0ac6,	// (0x00022885) tmo_note_info_pane_t1

0x0adb,	// (0x0002289a) tmo_note_info_pane_t2

0x0af0,	// (0x000228af) tmo_note_info_pane_t3

0xac12,	// (0x0002c9d1) tmo_note_info_pane_t4

0xac24,	// (0x0002c9e3) tmo_note_info_pane_t5

0x0004,

0xfea1,	// (0x00031c60) tmo_note_info_pane_t

0xac36,	// (0x0002c9f5) list_tmo_link_pane_ParamLimits

0xac43,	// (0x0002ca02) scroll_pane_cp20_ParamLimits

0x5ba3,	// (0x00027962) bg_popup_fep_char_preview_window_cp01

0xac87,	// (0x0002ca46) popup_fshwr2_char_preview_window_t1

0xac95,	// (0x0002ca54) popup_candi_list_indi_window_g1

0xac9e,	// (0x0002ca5d) bg_cell_contacts_ai5_widget_pane

0xacaa,	// (0x0002ca69) cell_contacts_ai5_widget_pane_g1

0xacbf,	// (0x0002ca7e) cell_contacts_ai5_widget_pane_g2

0xaccb,	// (0x0002ca8a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeac,	// (0x00031c6b) cell_contacts_ai5_widget_pane_g

0xacd7,	// (0x0002ca96) cell_contacts_ai5_widget_pane_t1

0x12ef,	// (0x000230ae) highlight_cell_shortcut_ai5_widget_pane_cp01

0xad4c,	// (0x0002cb0b) settings_container_pane

0x1ca6,	// (0x00023a65) listscroll_set_pane_copy1

0x373a,	// (0x000254f9) scroll_pane_cp121_copy1

0xad58,	// (0x0002cb17) set_content_pane_copy1

0xad60,	// (0x0002cb1f) aid_height_set_list_copy1_ParamLimits

0xad60,	// (0x0002cb1f) aid_height_set_list_copy1

0x3167,	// (0x00024f26) aid_size_parent_copy1_ParamLimits

0x3167,	// (0x00024f26) aid_size_parent_copy1

0xad6c,	// (0x0002cb2b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xad6c,	// (0x0002cb2b) button_value_adjust_pane_cp6_copy1

0x1488,	// (0x00023247) list_highlight_pane_cp2_copy1_ParamLimits

0x1488,	// (0x00023247) list_highlight_pane_cp2_copy1

0xad80,	// (0x0002cb3f) list_set_pane_copy1_ParamLimits

0xad80,	// (0x0002cb3f) list_set_pane_copy1

0xace9,	// (0x0002caa8) main_pane_set_t1_copy1_ParamLimits

0xace9,	// (0x0002caa8) main_pane_set_t1_copy1

0xad23,	// (0x0002cae2) main_pane_set_t2_copy1_ParamLimits

0xad23,	// (0x0002cae2) main_pane_set_t2_copy1

0xae0e,	// (0x0002cbcd) main_pane_set_t3_copy1

0xae1c,	// (0x0002cbdb) main_pane_set_t4_copy1

0xad40,	// (0x0002caff) set_content_pane_g1_copy1_ParamLimits

0xad40,	// (0x0002caff) set_content_pane_g1_copy1

0xae2a,	// (0x0002cbe9) setting_code_pane_copy1

0xae32,	// (0x0002cbf1) setting_slider_graphic_pane_copy1

0xae32,	// (0x0002cbf1) setting_slider_pane_copy1

0xae32,	// (0x0002cbf1) setting_text_pane_copy1

0xae32,	// (0x0002cbf1) setting_volume_pane_copy1

0xae3a,	// (0x0002cbf9) settings_code_pane_cp2_copy1

0xae42,	// (0x0002cc01) settings_code_pane_cp_copy1_ParamLimits

0xae42,	// (0x0002cc01) settings_code_pane_cp_copy1

0x94e6,	// (0x0002b2a5) volume_set_pane_copy1

0xae56,	// (0x0002cc15) volume_set_pane_g10_copy1

0xae5e,	// (0x0002cc1d) volume_set_pane_g1_copy1

0xae66,	// (0x0002cc25) volume_set_pane_g2_copy1

0xae6e,	// (0x0002cc2d) volume_set_pane_g3_copy1

0xae76,	// (0x0002cc35) volume_set_pane_g4_copy1

0xae7e,	// (0x0002cc3d) volume_set_pane_g5_copy1

0xae86,	// (0x0002cc45) volume_set_pane_g6_copy1

0xae8e,	// (0x0002cc4d) volume_set_pane_g7_copy1

0xae96,	// (0x0002cc55) volume_set_pane_g8_copy1

0xae9e,	// (0x0002cc5d) volume_set_pane_g9_copy1

0x0d4f,	// (0x00022b0e) bg_set_opt_pane_cp_copy1_ParamLimits

0x0d4f,	// (0x00022b0e) bg_set_opt_pane_cp_copy1

0x94ee,	// (0x0002b2ad) setting_slider_pane_t1_copy1_ParamLimits

0x94ee,	// (0x0002b2ad) setting_slider_pane_t1_copy1

0x9505,	// (0x0002b2c4) setting_slider_pane_t2_copy1_ParamLimits

0x9505,	// (0x0002b2c4) setting_slider_pane_t2_copy1

0x951e,	// (0x0002b2dd) setting_slider_pane_t3_copy1_ParamLimits

0x951e,	// (0x0002b2dd) setting_slider_pane_t3_copy1

0x5eb8,	// (0x00027c77) slider_set_pane_copy1_ParamLimits

0x5eb8,	// (0x00027c77) slider_set_pane_copy1

0x134a,	// (0x00023109) set_opt_bg_pane_g1_copy2

0x1352,	// (0x00023111) set_opt_bg_pane_g2_copy2

0xaea6,	// (0x0002cc65) set_opt_bg_pane_g3_copy2

0x1362,	// (0x00023121) set_opt_bg_pane_g4_copy2

0x136a,	// (0x00023129) set_opt_bg_pane_g5_copy2

0x1372,	// (0x00023131) set_opt_bg_pane_g6_copy2

0xaeae,	// (0x0002cc6d) set_opt_bg_pane_g7_copy2

0xaeb6,	// (0x0002cc75) set_opt_bg_pane_g8_copy2

0xaebe,	// (0x0002cc7d) set_opt_bg_pane_g9_copy2

0x760f,	// (0x000293ce) aid_size_touch_slider_mark_copy1_ParamLimits

0x760f,	// (0x000293ce) aid_size_touch_slider_mark_copy1

0x3179,	// (0x00024f38) slider_set_pane_g1_copy1

0x3206,	// (0x00024fc5) slider_set_pane_g2_copy1

0x762f,	// (0x000293ee) slider_set_pane_g3_copy1_ParamLimits

0x762f,	// (0x000293ee) slider_set_pane_g3_copy1

0x7643,	// (0x00029402) slider_set_pane_g4_copy1_ParamLimits

0x7643,	// (0x00029402) slider_set_pane_g4_copy1

0x765b,	// (0x0002941a) slider_set_pane_g5_copy1_ParamLimits

0x765b,	// (0x0002941a) slider_set_pane_g5_copy1

0x762f,	// (0x000293ee) slider_set_pane_g6_copy1_ParamLimits

0x762f,	// (0x000293ee) slider_set_pane_g6_copy1

0x9535,	// (0x0002b2f4) slider_set_pane_g7_copy1_ParamLimits

0x9535,	// (0x0002b2f4) slider_set_pane_g7_copy1

0x0ceb,	// (0x00022aaa) bg_set_opt_pane_cp2_copy1

0x0d5d,	// (0x00022b1c) setting_slider_graphic_pane_g1_copy1

0x954b,	// (0x0002b30a) setting_slider_graphic_pane_t1_copy1

0x955a,	// (0x0002b319) setting_slider_graphic_pane_t2_copy1

0x9569,	// (0x0002b328) slider_set_pane_cp_copy1

0xaece,	// (0x0002cc8d) input_focus_pane_cp1_copy1

0xaed7,	// (0x0002cc96) list_set_text_pane_copy1

0xaedf,	// (0x0002cc9e) setting_text_pane_g1_copy1

0xaee8,	// (0x0002cca7) set_text_pane_t1_copy1

0xaece,	// (0x0002cc8d) input_focus_pane_cp2_copy1

0xaedf,	// (0x0002cc9e) setting_code_pane_g1_copy1

0xaf01,	// (0x0002ccc0) setting_code_pane_t1_copy1

0xaf0f,	// (0x0002ccce) list_set_graphic_pane_copy1

0x0ceb,	// (0x00022aaa) bg_set_opt_pane_cp4_copy1

0x1a09,	// (0x000237c8) list_set_graphic_pane_g1_copy1_ParamLimits

0x1a09,	// (0x000237c8) list_set_graphic_pane_g1_copy1

0xaf24,	// (0x0002cce3) list_set_graphic_pane_g2_copy1

0x1a21,	// (0x000237e0) list_set_graphic_pane_t1_copy1_ParamLimits

0x1a21,	// (0x000237e0) list_set_graphic_pane_t1_copy1

0x3dfc,	// (0x00025bbb) rs_clock_indi_pane_g1

0xaf2c,	// (0x0002cceb) rs_clock_indi_pane_t1

0xaf3a,	// (0x0002ccf9) rs_indi_pane

0xaf42,	// (0x0002cd01) rs_indi_pane_g1

0xaf4b,	// (0x0002cd0a) rs_indi_pane_g2

0xac95,	// (0x0002ca54) rs_indi_pane_g3

0x0002,

0xfeb3,	// (0x00031c72) rs_indi_pane_g

0x1ca6,	// (0x00023a65) bg_popup_preview_window_pane_cp03

0xaf54,	// (0x0002cd13) popup_fep_tooltip_window_t1

0x4727,	// (0x000264e6) popup_note2_window_g2_ParamLimits

0x4727,	// (0x000264e6) popup_note2_window_g2

0x0001,

0xfc47,	// (0x00031a06) popup_note2_window_g_ParamLimits

0xfc47,	// (0x00031a06) popup_note2_window_g

0x4ba2,	// (0x00026961) bg_popup_sub_pane_cp11_ParamLimits

0x4baf,	// (0x0002696e) cell_ai3_links_pane_g1_ParamLimits

0x4bc6,	// (0x00026985) cell_ai3_links_pane_t1

0xaee8,	// (0x0002cca7) set_text_pane_t1_copy1_ParamLimits

0x1bcd,	// (0x0002398c) cell_graphic_popup_pane_cp2_ParamLimits

0x1bcd,	// (0x0002398c) cell_graphic_popup_pane_cp2

0xaf62,	// (0x0002cd21) cell_graphic_popup_pane_g1_cp2

0x10ef,	// (0x00022eae) cell_graphic_popup_pane_g2_cp2

0xaf6a,	// (0x0002cd29) cell_graphic_popup_pane_g3_cp2

0xaf72,	// (0x0002cd31) cell_graphic_popup_pane_t2_cp2

0x1100,	// (0x00022ebf) grid_highlight_pane_cp3_cp2

0x164d,	// (0x0002340c) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x12ef,	// (0x000230ae) main_tmo_pane_ParamLimits

0xee8a,	// (0x00030c49) popup_tmo_big_image_note_window

0xa958,	// (0x0002c717) cell_ai5_widget_list_pane

0x0636,	// (0x000223f5) cell_ai5_widget_lrg_icon_pane

0x0ac6,	// (0x00022885) tmo_note_info_pane_t1_ParamLimits

0x0adb,	// (0x0002289a) tmo_note_info_pane_t2_ParamLimits

0x0af0,	// (0x000228af) tmo_note_info_pane_t3_ParamLimits

0xac12,	// (0x0002c9d1) tmo_note_info_pane_t4_ParamLimits

0xac24,	// (0x0002c9e3) tmo_note_info_pane_t5_ParamLimits

0xfea1,	// (0x00031c60) tmo_note_info_pane_t_ParamLimits

0xad4c,	// (0x0002cb0b) settings_container_pane_ParamLimits

0xaec6,	// (0x0002cc85) indicator_popup_pane_cp5

0xaec6,	// (0x0002cc85) indicator_popup_pane_cp6

0xaf0f,	// (0x0002ccce) list_set_graphic_pane_copy1_ParamLimits

0x0c5f,	// (0x00022a1e) bg_popup_window_pane_cp23

0xaf80,	// (0x0002cd3f) popup_tmo_big_image_note_window_g1

0xaf89,	// (0x0002cd48) popup_tmo_big_image_note_window_t1

0xaf97,	// (0x0002cd56) popup_tmo_big_image_note_window_t2

0xafa5,	// (0x0002cd64) popup_tmo_big_image_note_window_t3

0x0002,

0xfeba,	// (0x00031c79) popup_tmo_big_image_note_window_t

0x3dfc,	// (0x00025bbb) cell_ai5_widget_lrg_icon_pane_g1

0xafb3,	// (0x0002cd72) cell_ai5_widget_lrg_icon_pane_t1

0x0b05,	// (0x000228c4) cell_ai5_widget_list_row_pane_ParamLimits

0x0b05,	// (0x000228c4) cell_ai5_widget_list_row_pane

0x0b1c,	// (0x000228db) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x0b1c,	// (0x000228db) cell_ai5_widget_list_row_pane_g1

0x0b29,	// (0x000228e8) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x0b29,	// (0x000228e8) cell_ai5_widget_list_row_pane_t1

0x0b5a,	// (0x00022919) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x0b5a,	// (0x00022919) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec1,	// (0x00031c80) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec1,	// (0x00031c80) cell_ai5_widget_list_row_pane_t

0x5ba3,	// (0x00027962) main_fep_vtchi_ss_pane

0xafce,	// (0x0002cd8d) popup_fep_char_pre_window

0xafd6,	// (0x0002cd95) popup_fep_ituss_window

0x0bad,	// (0x0002296c) popup_fep_vkbss_window

0xb011,	// (0x0002cdd0) grid_vkbss_keypad_pane_ParamLimits

0xb011,	// (0x0002cdd0) grid_vkbss_keypad_pane

0xb021,	// (0x0002cde0) ituss_keypad_pane

0x957b,	// (0x0002b33a) aid_vkbss_key_offset_ParamLimits

0x957b,	// (0x0002b33a) aid_vkbss_key_offset

0x9587,	// (0x0002b346) cell_vkbss_key_pane_ParamLimits

0x9587,	// (0x0002b346) cell_vkbss_key_pane

0xb030,	// (0x0002cdef) bg_cell_vkbss_key_g1_ParamLimits

0xb030,	// (0x0002cdef) bg_cell_vkbss_key_g1

0xb03c,	// (0x0002cdfb) cell_vkbss_key_3p_pane_ParamLimits

0xb03c,	// (0x0002cdfb) cell_vkbss_key_3p_pane

0xb072,	// (0x0002ce31) cell_vkbss_key_g1_ParamLimits

0xb072,	// (0x0002ce31) cell_vkbss_key_g1

0xb0a8,	// (0x0002ce67) cell_vkbss_key_t1_ParamLimits

0xb0a8,	// (0x0002ce67) cell_vkbss_key_t1

0x95bb,	// (0x0002b37a) cell_ituss_key_pane_ParamLimits

0x95bb,	// (0x0002b37a) cell_ituss_key_pane

0xb118,	// (0x0002ced7) bg_cell_ituss_key_g1_ParamLimits

0xb118,	// (0x0002ced7) bg_cell_ituss_key_g1

0xb124,	// (0x0002cee3) cell_ituss_key_pane_g1_ParamLimits

0xb124,	// (0x0002cee3) cell_ituss_key_pane_g1

0x95cc,	// (0x0002b38b) cell_ituss_key_pane_g2_ParamLimits

0x95cc,	// (0x0002b38b) cell_ituss_key_pane_g2

0x0005,

0xfec8,	// (0x00031c87) cell_ituss_key_pane_g_ParamLimits

0xfec8,	// (0x00031c87) cell_ituss_key_pane_g

0x9650,	// (0x0002b40f) cell_ituss_key_t1_ParamLimits

0x9650,	// (0x0002b40f) cell_ituss_key_t1

0x9686,	// (0x0002b445) cell_ituss_key_t2_ParamLimits

0x9686,	// (0x0002b445) cell_ituss_key_t2

0x96b7,	// (0x0002b476) cell_ituss_key_t3_ParamLimits

0x96b7,	// (0x0002b476) cell_ituss_key_t3

0x9686,	// (0x0002b445) cell_ituss_key_t4_ParamLimits

0x9686,	// (0x0002b445) cell_ituss_key_t4

0x0004,

0xfed5,	// (0x00031c94) cell_ituss_key_t_ParamLimits

0xfed5,	// (0x00031c94) cell_ituss_key_t

0xb14a,	// (0x0002cf09) cell_vkbss_key_3p_pane_g1

0xb152,	// (0x0002cf11) cell_vkbss_key_3p_pane_g2

0xb15a,	// (0x0002cf19) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee0,	// (0x00031c9f) cell_vkbss_key_3p_pane_g

0x1ca6,	// (0x00023a65) bg_popup_fep_char_preview_window_cp02

0xb162,	// (0x0002cf21) popup_fep_char_pre_window_t1

0x0623,	// (0x000223e2) main_ai5_sk_pane

0xac9e,	// (0x0002ca5d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xacaa,	// (0x0002ca69) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xacbf,	// (0x0002ca7e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xaccb,	// (0x0002ca8a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeac,	// (0x00031c6b) cell_contacts_ai5_widget_pane_g_ParamLimits

0xacd7,	// (0x0002ca96) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x12ef,	// (0x000230ae) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x0bba,	// (0x00022979) main_ai5_sk_pane_g1

0x246c,	// (0x0002422b) popup_query_code_window_g1

0x0b9e,	// (0x0002295d) popup_fep_vkb_icf_pane

0xafe8,	// (0x0002cda7) popup_fep_vtchi_icf_pane

0x1488,	// (0x00023247) bg_icf_pane

0x1488,	// (0x00023247) list_vkb_icf_pane

0xb170,	// (0x0002cf2f) bg_icf_pane_cp01

0xb183,	// (0x0002cf42) vtchi_icf_list_pane

0x0c0f,	// (0x000229ce) list_vkb_icf_pane_t1_ParamLimits

0x0c0f,	// (0x000229ce) list_vkb_icf_pane_t1

0xb193,	// (0x0002cf52) vtchi_icf_list_pane_t1_ParamLimits

0xb193,	// (0x0002cf52) vtchi_icf_list_pane_t1

0xafd6,	// (0x0002cd95) popup_fep_ituss_window_ParamLimits

0xafe8,	// (0x0002cda7) popup_fep_vtchi_icf_pane_ParamLimits

0xb021,	// (0x0002cde0) ituss_keypad_pane_ParamLimits

0x9571,	// (0x0002b330) ituss_sks_pane

0x1488,	// (0x00023247) bg_icf_pane_ParamLimits

0x0b82,	// (0x00022941) icf_edit_indi_pane_ParamLimits

0x0b82,	// (0x00022941) icf_edit_indi_pane

0x1488,	// (0x00023247) list_vkb_icf_pane_ParamLimits

0xb170,	// (0x0002cf2f) bg_icf_pane_cp01_ParamLimits

0xafc1,	// (0x0002cd80) icf_edit_indi_pane_cp01_ParamLimits

0xafc1,	// (0x0002cd80) icf_edit_indi_pane_cp01

0xb18b,	// (0x0002cf4a) vtchi_query_pane

0xa8a4,	// (0x0002c663) icf_edit_indi_pane_g1_ParamLimits

0xa8a4,	// (0x0002c663) icf_edit_indi_pane_g1

0x0c25,	// (0x000229e4) icf_edit_indi_pane_g2_ParamLimits

0x0c25,	// (0x000229e4) icf_edit_indi_pane_g2

0x0001,

0xff0b,	// (0x00031cca) icf_edit_indi_pane_g_ParamLimits

0xff0b,	// (0x00031cca) icf_edit_indi_pane_g

0x0c39,	// (0x000229f8) icf_edit_indi_pane_t1

0xb1ab,	// (0x0002cf6a) bg_input_focus_pane_cp042

0xb1b4,	// (0x0002cf73) vtchi_button_pane

0xb1bd,	// (0x0002cf7c) vtchi_query_pane_t1

0xb1cb,	// (0x0002cf8a) vtchi_query_pane_t2

0xb1d9,	// (0x0002cf98) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x00031cb9) vtchi_query_pane_t

0x5ba3,	// (0x00027962) bg_button_pane_cp13

0xb1e7,	// (0x0002cfa6) vtchi_button_pane_g1

0x96fa,	// (0x0002b4b9) ituss_sks_pane_g1

0x9703,	// (0x0002b4c2) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x00031cc0) ituss_sks_pane_g

0xb1ef,	// (0x0002cfae) ituss_sks_pane_t1

0xb1fd,	// (0x0002cfbc) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x00031cc5) ituss_sks_pane_t

0x3a13,	// (0x000257d2) indicator_nsta_pane_cp_g1

0x3a1c,	// (0x000257db) indicator_nsta_pane_cp_g2

0x3a24,	// (0x000257e3) indicator_nsta_pane_cp_g3

0x3a2c,	// (0x000257eb) indicator_nsta_pane_cp_g4

0x3a34,	// (0x000257f3) indicator_nsta_pane_cp_g5

0x3a3c,	// (0x000257fb) indicator_nsta_pane_cp_g6

0x0005,

0xfa85,	// (0x00031844) indicator_nsta_pane_cp_g

0x0406,	// (0x000221c5) cell_graphic2_pane_t2_ParamLimits

0x0406,	// (0x000221c5) cell_graphic2_pane_t2

0x0001,

0xfd97,	// (0x00031b56) cell_graphic2_pane_t_ParamLimits

0xfd97,	// (0x00031b56) cell_graphic2_pane_t

0x043e,	// (0x000221fd) cell_graphic2_control_pane_t1

0xdc41,	// (0x0002fa00) signal_pane_g3_ParamLimits

0xdc41,	// (0x0002fa00) signal_pane_g3

0xdc55,	// (0x0002fa14) signal_pane_g4_ParamLimits

0xdc55,	// (0x0002fa14) signal_pane_g4

0x0b6c,	// (0x0002292b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x0b6c,	// (0x0002292b) cell_ai5_widget_list_row_pane_t3

0xb138,	// (0x0002cef7) cell_ituss_key_pane_t1_ParamLimits

0xb138,	// (0x0002cef7) cell_ituss_key_pane_t1

0x213a,	// (0x00023ef9) form_field_data_wide_pane_vc_t2_ParamLimits

0x213a,	// (0x00023ef9) form_field_data_wide_pane_vc_t2

0x214c,	// (0x00023f0b) form_field_data_wide_pane_vc_t3_ParamLimits

0x214c,	// (0x00023f0b) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x0003159e) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x0003159e) form_field_data_wide_pane_vc_t

0x377f,	// (0x0002553e) form_field_slider_wide_pane_vc_t3_ParamLimits

0x377f,	// (0x0002553e) form_field_slider_wide_pane_vc_t3

0x383d,	// (0x000255fc) form_field_popup_wide_pane_vc_t2_ParamLimits

0x383d,	// (0x000255fc) form_field_popup_wide_pane_vc_t2

0x3852,	// (0x00025611) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3852,	// (0x00025611) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa74,	// (0x00031833) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa74,	// (0x00031833) form_field_popup_wide_pane_vc_t

0xd2db,	// (0x0002f09a) aid_fshwr2_btn_pane_ParamLimits

0xd2ef,	// (0x0002f0ae) aid_fshwr2_syb_pane_ParamLimits

0xd303,	// (0x0002f0c2) aid_fshwr2_txt_pane_ParamLimits

0x868a,	// (0x0002a449) fshwr2_bg_pane_ParamLimits

0xd313,	// (0x0002f0d2) fshwr2_func_candi_pane_ParamLimits

0xd32b,	// (0x0002f0ea) fshwr2_hwr_syb_pane_ParamLimits

0xd343,	// (0x0002f102) fshwr2_icf_pane_ParamLimits

0xa2b3,	// (0x0002c072) list_double_graphic_pane_vc_g4_ParamLimits

0xa2b3,	// (0x0002c072) list_double_graphic_pane_vc_g4

0x95ec,	// (0x0002b3ab) cell_ituss_key_pane_g3_ParamLimits

0x95ec,	// (0x0002b3ab) cell_ituss_key_pane_g3

0x96e8,	// (0x0002b4a7) cell_ituss_key_t5_ParamLimits

0x96e8,	// (0x0002b4a7) cell_ituss_key_t5

0x0bad,	// (0x0002296c) popup_fep_vkbss_window_ParamLimits

0x062d,	// (0x000223ec) aid_cell_ai5_quarter

0x0c39,	// (0x000229f8) icf_edit_indi_pane_t1_ParamLimits

0x0f2a,	// (0x00022ce9) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x0f2a,	// (0x00022ce9) aid_tch_indicator_popup_pane_cp2

0x0f3d,	// (0x00022cfc) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x0f3d,	// (0x00022cfc) aid_tch_query_popup_data_pane_cp2

0x2414,	// (0x000241d3) aid_tch_query_popup_pane_ParamLimits

0x2414,	// (0x000241d3) aid_tch_query_popup_pane

0x2414,	// (0x000241d3) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x2414,	// (0x000241d3) aid_tch_query_popup_data_pane_cp1

0x1488,	// (0x00023247) cell_fshwr2_syb_bg_pane_ParamLimits

0xd437,	// (0x0002f1f6) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xd447,	// (0x0002f206) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0x0b9e,	// (0x0002295d) popup_fep_vkb_icf_pane_ParamLimits

0xd279,	// (0x0002f038) bg_popup_fep_char_preview_window_g10

0x06f5,	// (0x000224b4) cell_ai5_widget_pane_g11_ParamLimits

0x06f5,	// (0x000224b4) cell_ai5_widget_pane_g11

0x0701,	// (0x000224c0) cell_ai5_widget_pane_g12_ParamLimits

0x0701,	// (0x000224c0) cell_ai5_widget_pane_g12

0x070d,	// (0x000224cc) cell_ai5_widget_pane_g13_ParamLimits

0x070d,	// (0x000224cc) cell_ai5_widget_pane_g13

0x080b,	// (0x000225ca) cell_ai5_widget_pane_t11_ParamLimits

0x080b,	// (0x000225ca) cell_ai5_widget_pane_t11

0x081d,	// (0x000225dc) cell_ai5_widget_pane_t12_ParamLimits

0x081d,	// (0x000225dc) cell_ai5_widget_pane_t12

0x95f8,	// (0x0002b3b7) cell_ituss_key_pane_g4_ParamLimits

0x95f8,	// (0x0002b3b7) cell_ituss_key_pane_g4

0x9614,	// (0x0002b3d3) cell_ituss_key_pane_g5_ParamLimits

0x9614,	// (0x0002b3d3) cell_ituss_key_pane_g5

0x9630,	// (0x0002b3ef) cell_ituss_key_pane_g6_ParamLimits

0x9630,	// (0x0002b3ef) cell_ituss_key_pane_g6

0x2032,	// (0x00023df1) bg_icf_pane_g1

0x0bc3,	// (0x00022982) bg_icf_pane_g2

0x0bcd,	// (0x0002298c) bg_icf_pane_g3

0x0bd5,	// (0x00022994) bg_icf_pane_g4

0x0bdf,	// (0x0002299e) bg_icf_pane_g5

0x0be9,	// (0x000229a8) bg_icf_pane_g6

0x0bf3,	// (0x000229b2) bg_icf_pane_g7

0x0bfb,	// (0x000229ba) bg_icf_pane_g8

0x0c05,	// (0x000229c4) bg_icf_pane_g9

0x0008,

0xfee7,	// (0x00031ca6) bg_icf_pane_g

0xaffe,	// (0x0002cdbd) popup_hyb_candi_window_ParamLimits

0xaffe,	// (0x0002cdbd) popup_hyb_candi_window

0x20da,	// (0x00023e99) bg_popup_sub_pane_cp01_ParamLimits

0x20da,	// (0x00023e99) bg_popup_sub_pane_cp01

0xb20b,	// (0x0002cfca) entry_hyb_candi_pane_ParamLimits

0xb20b,	// (0x0002cfca) entry_hyb_candi_pane

0xb21a,	// (0x0002cfd9) grid_hyb_candi_pane_ParamLimits

0xb21a,	// (0x0002cfd9) grid_hyb_candi_pane

0xb22f,	// (0x0002cfee) grid_hyb_phrase_pane_ParamLimits

0xb22f,	// (0x0002cfee) grid_hyb_phrase_pane

0xb23e,	// (0x0002cffd) cell_hyb_candi_pane_ParamLimits

0xb23e,	// (0x0002cffd) cell_hyb_candi_pane

0xb256,	// (0x0002d015) cell_hyb_candi_scroll_pane

0x1814,	// (0x000235d3) cell_hyb_candi_pane_g1

0xb25f,	// (0x0002d01e) cell_hyb_candi_pane_t1

0xb26d,	// (0x0002d02c) cell_hyb_phrase_pane

0x1814,	// (0x000235d3) cell_hyb_phrase_pane_g1

0xb276,	// (0x0002d035) cell_hyb_phrase_pane_t1

0xb284,	// (0x0002d043) entry_hyb_candi_pane_t1

0x1ca6,	// (0x00023a65) input_focus_pane_cp06

0xb292,	// (0x0002d051) cell_hyb_candi_scroll_pane_g1

0xb29a,	// (0x0002d059) cell_hyb_candi_scroll_pane_g1_aid

0xb2a2,	// (0x0002d061) cell_hyb_candi_scroll_pane_g2

0xb2aa,	// (0x0002d069) cell_hyb_candi_scroll_pane_g2_aid

0xb2b2,	// (0x0002d071) cell_hyb_candi_scroll_pane_g3

0xb2ba,	// (0x0002d079) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Small

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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004f8d8 };

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
0xb2f1,	// (0x0005abc9) Screen

0xb2fd,	// (0x0005abd5) application_window_ParamLimits

0xb2fd,	// (0x0005abd5) application_window

0x2c15,	// (0x000524ed) screen_g1

0xb335,	// (0x0005ac0d) area_bottom_pane_ParamLimits

0xb335,	// (0x0005ac0d) area_bottom_pane

0xf333,	// (0x0005ec0b) area_top_pane_ParamLimits

0xf333,	// (0x0005ec0b) area_top_pane

0xf445,	// (0x0005ed1d) main_pane_ParamLimits

0xf445,	// (0x0005ed1d) main_pane

0x2c1f,	// (0x000524f7) misc_graphics

0xd397,	// (0x0005cc6f) battery_pane_ParamLimits

0xd397,	// (0x0005cc6f) battery_pane

0x5997,	// (0x0005526f) bg_status_flat_pane_g8

0x599f,	// (0x00055277) bg_status_flat_pane_g9

0x4d93,	// (0x0005466b) context_pane_ParamLimits

0x4d93,	// (0x0005466b) context_pane

0xd502,	// (0x0005cdda) navi_pane_ParamLimits

0xd502,	// (0x0005cdda) navi_pane

0xd580,	// (0x0005ce58) signal_pane_ParamLimits

0xd580,	// (0x0005ce58) signal_pane

0x0008,

0xf879,	// (0x0005f151) bg_status_flat_pane_g

0xd610,	// (0x0005cee8) status_pane_g1_ParamLimits

0xd610,	// (0x0005cee8) status_pane_g1

0xd626,	// (0x0005cefe) status_pane_g2_ParamLimits

0xd626,	// (0x0005cefe) status_pane_g2

0x4fba,	// (0x00054892) status_pane_g3_ParamLimits

0x4fba,	// (0x00054892) status_pane_g3

0x0004,

0xf7a5,	// (0x0005f07d) status_pane_g_ParamLimits

0xf7a5,	// (0x0005f07d) status_pane_g

0xd632,	// (0x0005cf0a) title_pane_ParamLimits

0xd632,	// (0x0005cf0a) title_pane

0xd695,	// (0x0005cf6d) uni_indicator_pane_ParamLimits

0xd695,	// (0x0005cf6d) uni_indicator_pane

0x4bf5,	// (0x000544cd) bg_list_pane_ParamLimits

0x4bf5,	// (0x000544cd) bg_list_pane

0xd30a,	// (0x0005cbe2) find_pane

0xbd2f,	// (0x0005b607) listscroll_app_pane_ParamLimits

0xbd2f,	// (0x0005b607) listscroll_app_pane

0x4c21,	// (0x000544f9) listscroll_form_pane

0xbd3f,	// (0x0005b617) listscroll_gen_pane_ParamLimits

0xbd3f,	// (0x0005b617) listscroll_gen_pane

0x0e2f,	// (0x00050707) listscroll_set_pane

0x6525,	// (0x00055dfd) main_idle_act_pane

0x48fd,	// (0x000541d5) main_idle_trad_pane

0x48fd,	// (0x000541d5) main_list_empty_pane

0x4c3b,	// (0x00054513) main_midp_pane

0x4c47,	// (0x0005451f) main_pane_g1_ParamLimits

0x4c47,	// (0x0005451f) main_pane_g1

0xbd53,	// (0x0005b62b) popup_ai_message_window_ParamLimits

0xbd53,	// (0x0005b62b) popup_ai_message_window

0xbde4,	// (0x0005b6bc) popup_fep_china_uni_window_ParamLimits

0xbde4,	// (0x0005b6bc) popup_fep_china_uni_window

0x0f4f,	// (0x00050827) popup_fep_japan_candidate_window_ParamLimits

0x0f4f,	// (0x00050827) popup_fep_japan_candidate_window

0x0f6f,	// (0x00050847) popup_fep_japan_predictive_window_ParamLimits

0x0f6f,	// (0x00050847) popup_fep_japan_predictive_window

0xbe40,	// (0x0005b718) popup_find_window

0xbe5d,	// (0x0005b735) popup_grid_graphic_window_ParamLimits

0xbe5d,	// (0x0005b735) popup_grid_graphic_window

0x0fd6,	// (0x000508ae) popup_large_graphic_colour_window

0xbefb,	// (0x0005b7d3) popup_menu_window_ParamLimits

0xbefb,	// (0x0005b7d3) popup_menu_window

0xc0cd,	// (0x0005b9a5) popup_note_image_window

0xc093,	// (0x0005b96b) popup_note_wait_window_ParamLimits

0xc093,	// (0x0005b96b) popup_note_wait_window

0xc0e5,	// (0x0005b9bd) popup_note_window_ParamLimits

0xc0e5,	// (0x0005b9bd) popup_note_window

0xc18b,	// (0x0005ba63) popup_query_code_window_ParamLimits

0xc18b,	// (0x0005ba63) popup_query_code_window

0x121e,	// (0x00050af6) popup_query_data_code_window_ParamLimits

0x121e,	// (0x00050af6) popup_query_data_code_window

0xc1c5,	// (0x0005ba9d) popup_query_data_window_ParamLimits

0xc1c5,	// (0x0005ba9d) popup_query_data_window

0xc247,	// (0x0005bb1f) popup_query_sat_info_window_ParamLimits

0xc247,	// (0x0005bb1f) popup_query_sat_info_window

0xc2de,	// (0x0005bbb6) popup_snote_single_graphic_window_ParamLimits

0xc2de,	// (0x0005bbb6) popup_snote_single_graphic_window

0xc2de,	// (0x0005bbb6) popup_snote_single_text_window_ParamLimits

0xc2de,	// (0x0005bbb6) popup_snote_single_text_window

0x12a5,	// (0x00050b7d) popup_sub_window_general

0x13d5,	// (0x00050cad) popup_window_general_ParamLimits

0x13d5,	// (0x00050cad) popup_window_general

0x4c55,	// (0x0005452d) power_save_pane

0xbbbe,	// (0x0005b496) control_pane_g1_ParamLimits

0xbbbe,	// (0x0005b496) control_pane_g1

0xbbe7,	// (0x0005b4bf) control_pane_g2_ParamLimits

0xbbe7,	// (0x0005b4bf) control_pane_g2

0x4bb8,	// (0x00054490) control_pane_g3_ParamLimits

0x4bb8,	// (0x00054490) control_pane_g3

0x0007,

0xf78d,	// (0x0005f065) control_pane_g_ParamLimits

0xf78d,	// (0x0005f065) control_pane_g

0xbc28,	// (0x0005b500) control_pane_t1_ParamLimits

0xbc28,	// (0x0005b500) control_pane_t1

0xbc86,	// (0x0005b55e) control_pane_t2_ParamLimits

0xbc86,	// (0x0005b55e) control_pane_t2

0x0002,

0xf79e,	// (0x0005f076) control_pane_t_ParamLimits

0xf79e,	// (0x0005f076) control_pane_t

0xd23c,	// (0x0005cb14) navi_navi_volume_pane_cp1

0xd244,	// (0x0005cb1c) status_small_icon_pane

0x4aed,	// (0x000543c5) status_small_pane_g1_ParamLimits

0x4aed,	// (0x000543c5) status_small_pane_g1

0xd24c,	// (0x0005cb24) status_small_pane_g2_ParamLimits

0xd24c,	// (0x0005cb24) status_small_pane_g2

0xd258,	// (0x0005cb30) status_small_pane_g3_ParamLimits

0xd258,	// (0x0005cb30) status_small_pane_g3

0xd264,	// (0x0005cb3c) status_small_pane_g4_ParamLimits

0xd264,	// (0x0005cb3c) status_small_pane_g4

0xd270,	// (0x0005cb48) status_small_pane_g5_ParamLimits

0xd270,	// (0x0005cb48) status_small_pane_g5

0xd27e,	// (0x0005cb56) status_small_pane_g6_ParamLimits

0xd27e,	// (0x0005cb56) status_small_pane_g6

0x0007,

0xf77c,	// (0x0005f054) status_small_pane_g_ParamLimits

0xf77c,	// (0x0005f054) status_small_pane_g

0xd2ad,	// (0x0005cb85) status_small_pane_t1

0xd2cf,	// (0x0005cba7) status_small_wait_pane_ParamLimits

0xd2cf,	// (0x0005cba7) status_small_wait_pane

0xd0e3,	// (0x0005c9bb) aid_levels_signal_ParamLimits

0xd0e3,	// (0x0005c9bb) aid_levels_signal

0xd0fb,	// (0x0005c9d3) signal_pane_g1_ParamLimits

0xd0fb,	// (0x0005c9d3) signal_pane_g1

0xd116,	// (0x0005c9ee) signal_pane_g2_ParamLimits

0xd116,	// (0x0005c9ee) signal_pane_g2

0x0003,

0xf70d,	// (0x0005efe5) signal_pane_g_ParamLimits

0xf70d,	// (0x0005efe5) signal_pane_g

0x43d1,	// (0x00053ca9) context_pane_g1

0xcc4b,	// (0x0005c523) title_pane_g1

0xcc82,	// (0x0005c55a) title_pane_t1

0x2cc7,	// (0x0005259f) title_pane_t2

0x2ced,	// (0x000525c5) title_pane_t3

0x0002,

0xf557,	// (0x0005ee2f) title_pane_t

0xd6bd,	// (0x0005cf95) aid_levels_battery_ParamLimits

0xd6bd,	// (0x0005cf95) aid_levels_battery

0xd6d9,	// (0x0005cfb1) battery_pane_g1_ParamLimits

0xd6d9,	// (0x0005cfb1) battery_pane_g1

0xd6f6,	// (0x0005cfce) battery_pane_g2_ParamLimits

0xd6f6,	// (0x0005cfce) battery_pane_g2

0x0001,

0xf7b0,	// (0x0005f088) battery_pane_g_ParamLimits

0xf7b0,	// (0x0005f088) battery_pane_g

0xd95f,	// (0x0005d237) uni_indicator_pane_g1

0xd975,	// (0x0005d24d) uni_indicator_pane_g2

0xd98b,	// (0x0005d263) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0005f1f9) uni_indicator_pane_g

0x476f,	// (0x00054047) navi_icon_pane_ParamLimits

0x476f,	// (0x00054047) navi_icon_pane

0x46ad,	// (0x00053f85) navi_midp_pane

0x478b,	// (0x00054063) navi_navi_pane

0x4795,	// (0x0005406d) navi_text_pane_ParamLimits

0x4795,	// (0x0005406d) navi_text_pane

0x2c15,	// (0x000524ed) status_small_wait_pane_g1

0x3819,	// (0x000530f1) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0005f1f4) status_small_wait_pane_g

0x5ffe,	// (0x000558d6) navi_navi_icon_text_pane

0x6006,	// (0x000558de) navi_navi_pane_g1_ParamLimits

0x6006,	// (0x000558de) navi_navi_pane_g1

0x6018,	// (0x000558f0) navi_navi_pane_g2_ParamLimits

0x6018,	// (0x000558f0) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0005f1c2) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0005f1c2) navi_navi_pane_g

0x602a,	// (0x00055902) navi_navi_tabs_pane

0x6033,	// (0x0005590b) navi_navi_text_pane

0x5ffe,	// (0x000558d6) navi_navi_volume_pane

0x5fda,	// (0x000558b2) navi_text_pane_t1

0x5fce,	// (0x000558a6) navi_icon_pane_g1

0x5f21,	// (0x000557f9) navi_navi_text_pane_t1

0x177d,	// (0x00051055) navi_navi_volume_pane_g1

0x1785,	// (0x0005105d) volume_small_pane

0x5e87,	// (0x0005575f) navi_navi_icon_text_pane_g1

0x5e8f,	// (0x00055767) navi_navi_icon_text_pane_t1

0x478b,	// (0x00054063) navi_tabs_2_long_pane

0x478b,	// (0x00054063) navi_tabs_2_pane

0x478b,	// (0x00054063) navi_tabs_3_long_pane

0x478b,	// (0x00054063) navi_tabs_3_pane

0x478b,	// (0x00054063) navi_tabs_4_pane

0x175d,	// (0x00051035) tabs_2_active_pane_ParamLimits

0x175d,	// (0x00051035) tabs_2_active_pane

0x176d,	// (0x00051045) tabs_2_passive_pane_ParamLimits

0x176d,	// (0x00051045) tabs_2_passive_pane

0x172b,	// (0x00051003) tabs_3_active_pane_ParamLimits

0x172b,	// (0x00051003) tabs_3_active_pane

0x173b,	// (0x00051013) tabs_3_passive_pane_ParamLimits

0x173b,	// (0x00051013) tabs_3_passive_pane

0x174c,	// (0x00051024) tabs_3_passive_pane_cp_ParamLimits

0x174c,	// (0x00051024) tabs_3_passive_pane_cp

0x16e7,	// (0x00050fbf) tabs_4_active_pane_ParamLimits

0x16e7,	// (0x00050fbf) tabs_4_active_pane

0x16f8,	// (0x00050fd0) tabs_4_passive_pane_ParamLimits

0x16f8,	// (0x00050fd0) tabs_4_passive_pane

0x1709,	// (0x00050fe1) tabs_4_passive_pane_cp_ParamLimits

0x1709,	// (0x00050fe1) tabs_4_passive_pane_cp

0x171a,	// (0x00050ff2) tabs_4_passive_pane_cp2_ParamLimits

0x171a,	// (0x00050ff2) tabs_4_passive_pane_cp2

0x16c3,	// (0x00050f9b) tabs_2_long_active_pane_ParamLimits

0x16c3,	// (0x00050f9b) tabs_2_long_active_pane

0x16d5,	// (0x00050fad) tabs_2_long_passive_pane_ParamLimits

0x16d5,	// (0x00050fad) tabs_2_long_passive_pane

0x1684,	// (0x00050f5c) tabs_3_long_active_pane_ParamLimits

0x1684,	// (0x00050f5c) tabs_3_long_active_pane

0x1697,	// (0x00050f6f) tabs_3_long_passive_pane_ParamLimits

0x1697,	// (0x00050f6f) tabs_3_long_passive_pane

0x16b0,	// (0x00050f88) tabs_3_long_passive_pane_cp_ParamLimits

0x16b0,	// (0x00050f88) tabs_3_long_passive_pane_cp

0x162a,	// (0x00050f02) volume_small_pane_g1

0x1633,	// (0x00050f0b) volume_small_pane_g2

0x163c,	// (0x00050f14) volume_small_pane_g3

0x1645,	// (0x00050f1d) volume_small_pane_g4

0x164e,	// (0x00050f26) volume_small_pane_g5

0x1657,	// (0x00050f2f) volume_small_pane_g6

0x1660,	// (0x00050f38) volume_small_pane_g7

0x1669,	// (0x00050f41) volume_small_pane_g8

0x1672,	// (0x00050f4a) volume_small_pane_g9

0x167b,	// (0x00050f53) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0005f18e) volume_small_pane_g

0x2f7a,	// (0x00052852) bg_active_tab_pane_cp2_ParamLimits

0x2f7a,	// (0x00052852) bg_active_tab_pane_cp2

0x2d0d,	// (0x000525e5) tabs_3_active_pane_g1

0xcd0e,	// (0x0005c5e6) tabs_3_active_pane_t1

0x2f7a,	// (0x00052852) bg_passive_tab_pane_cp2_ParamLimits

0x2f7a,	// (0x00052852) bg_passive_tab_pane_cp2

0x2d0d,	// (0x000525e5) tabs_3_passive_pane_g1

0xcd0e,	// (0x0005c5e6) tabs_3_passive_pane_t1

0x2f7a,	// (0x00052852) bg_active_tab_pane_cp3_ParamLimits

0x2f7a,	// (0x00052852) bg_active_tab_pane_cp3

0x2d27,	// (0x000525ff) tabs_4_active_pane_g1

0xcd20,	// (0x0005c5f8) tabs_4_active_pane_t1

0x2f7a,	// (0x00052852) bg_passive_tab_pane_cp3_ParamLimits

0x2f7a,	// (0x00052852) bg_passive_tab_pane_cp3

0x2d27,	// (0x000525ff) tabs_4_1_passive_pane_g1

0xcd20,	// (0x0005c5f8) tabs_4_1_passive_pane_t1

0x4c3b,	// (0x00054513) list_highlight_pane_cp2

0xda13,	// (0x0005d2eb) list_set_pane_ParamLimits

0xda13,	// (0x0005d2eb) list_set_pane

0xdaad,	// (0x0005d385) main_pane_set_t1_ParamLimits

0xdaad,	// (0x0005d385) main_pane_set_t1

0xdacd,	// (0x0005d3a5) main_pane_set_t2_ParamLimits

0xdacd,	// (0x0005d3a5) main_pane_set_t2

0xdae1,	// (0x0005d3b9) main_pane_set_t3_ParamLimits

0xdae1,	// (0x0005d3b9) main_pane_set_t3

0xdaf3,	// (0x0005d3cb) main_pane_set_t4_ParamLimits

0xdaf3,	// (0x0005d3cb) main_pane_set_t4

0x0003,

0xf986,	// (0x0005f25e) main_pane_set_t_ParamLimits

0xf986,	// (0x0005f25e) main_pane_set_t

0xdb05,	// (0x0005d3dd) setting_code_pane

0xdb0f,	// (0x0005d3e7) setting_slider_graphic_pane

0xdb0f,	// (0x0005d3e7) setting_slider_pane

0xdb0f,	// (0x0005d3e7) setting_text_pane

0xdb0f,	// (0x0005d3e7) setting_volume_pane

0x005e,	// (0x0004f936) volume_set_pane

0x2cff,	// (0x000525d7) bg_set_opt_pane_cp

0x0066,	// (0x0004f93e) setting_slider_pane_t1

0x007f,	// (0x0004f957) setting_slider_pane_t2

0x0099,	// (0x0004f971) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0005ee36) setting_slider_pane_t

0x00b1,	// (0x0004f989) slider_set_pane

0x2c1f,	// (0x000524f7) bg_set_opt_pane_cp2

0x2d41,	// (0x00052619) setting_slider_graphic_pane_g1

0x00c7,	// (0x0004f99f) setting_slider_graphic_pane_t1

0x00d7,	// (0x0004f9af) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0005ee3d) setting_slider_graphic_pane_t

0x00e7,	// (0x0004f9bf) slider_set_pane_cp

0x2c1f,	// (0x000524f7) input_focus_pane_cp1

0x650c,	// (0x00055de4) list_set_text_pane

0x2c15,	// (0x000524ed) setting_text_pane_g1

0x2c1f,	// (0x000524f7) input_focus_pane_cp2

0x2c15,	// (0x000524ed) setting_code_pane_g1

0x2d4a,	// (0x00052622) setting_code_pane_t1

0xef11,	// (0x0005e7e9) set_text_pane_t1_ParamLimits

0xef11,	// (0x0005e7e9) set_text_pane_t1

0x3cc6,	// (0x0005359e) set_opt_bg_pane_g1

0x3cce,	// (0x000535a6) set_opt_bg_pane_g2

0x64e6,	// (0x00055dbe) set_opt_bg_pane_g3

0x3cde,	// (0x000535b6) set_opt_bg_pane_g4

0x3ce6,	// (0x000535be) set_opt_bg_pane_g5

0x3cee,	// (0x000535c6) set_opt_bg_pane_g6

0x64f0,	// (0x00055dc8) set_opt_bg_pane_g7

0x64f8,	// (0x00055dd0) set_opt_bg_pane_g8

0x6502,	// (0x00055dda) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0005f24b) set_opt_bg_pane_g

0x64d9,	// (0x00055db1) slider_set_pane_g1

0x181a,	// (0x000510f2) slider_set_pane_g2

0x0006,

0xf964,	// (0x0005f23c) slider_set_pane_g

0x178e,	// (0x00051066) volume_set_pane_g1

0x1796,	// (0x0005106e) volume_set_pane_g2

0x179e,	// (0x00051076) volume_set_pane_g3

0x17a6,	// (0x0005107e) volume_set_pane_g4

0x17ae,	// (0x00051086) volume_set_pane_g5

0x17b6,	// (0x0005108e) volume_set_pane_g6

0x17be,	// (0x00051096) volume_set_pane_g7

0x17c6,	// (0x0005109e) volume_set_pane_g8

0x17ce,	// (0x000510a6) volume_set_pane_g9

0x17d6,	// (0x000510ae) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0005f214) volume_set_pane_g

0xcd32,	// (0x0005c60a) indicator_pane_ParamLimits

0xcd32,	// (0x0005c60a) indicator_pane

0xcd5a,	// (0x0005c632) main_idle_pane_g2_ParamLimits

0xcd5a,	// (0x0005c632) main_idle_pane_g2

0xcd92,	// (0x0005c66a) main_pane_idle_g1_ParamLimits

0xcd92,	// (0x0005c66a) main_pane_idle_g1

0x2d99,	// (0x00052671) popup_clock_digital_analogue_window_ParamLimits

0x2d99,	// (0x00052671) popup_clock_digital_analogue_window

0xcdb9,	// (0x0005c691) soft_indicator_pane_ParamLimits

0xcdb9,	// (0x0005c691) soft_indicator_pane

0xcdd3,	// (0x0005c6ab) wallpaper_pane_ParamLimits

0xcdd3,	// (0x0005c6ab) wallpaper_pane

0x2c15,	// (0x000524ed) wallpaper_pane_g1

0xcde5,	// (0x0005c6bd) indicator_pane_g1_ParamLimits

0xcde5,	// (0x0005c6bd) indicator_pane_g1

0x68bc,	// (0x00056194) navi_navi_icon_text_pane_srt_g1

0x2deb,	// (0x000526c3) soft_indicator_pane_t1

0x2e05,	// (0x000526dd) aid_ps_area_pane

0xcdfb,	// (0x0005c6d3) aid_ps_clock_pane

0x2e24,	// (0x000526fc) aid_ps_indicator_pane

0x2e30,	// (0x00052708) indicator_ps_pane_ParamLimits

0x2e30,	// (0x00052708) indicator_ps_pane

0x2e3f,	// (0x00052717) power_save_pane_g1_ParamLimits

0x2e3f,	// (0x00052717) power_save_pane_g1

0x2e4b,	// (0x00052723) power_save_pane_g2_ParamLimits

0x2e4b,	// (0x00052723) power_save_pane_g2

0xf313,	// (0x0005ebeb) aid_navinavi_width_pane

0x2e05,	// (0x000526dd) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0005ee42) power_save_pane_g_ParamLimits

0xf56a,	// (0x0005ee42) power_save_pane_g

0x2e59,	// (0x00052731) power_save_pane_t1_ParamLimits

0x2e59,	// (0x00052731) power_save_pane_t1

0xcdfb,	// (0x0005c6d3) aid_ps_clock_pane_ParamLimits

0x2e24,	// (0x000526fc) aid_ps_indicator_pane_ParamLimits

0x2e6b,	// (0x00052743) power_save_pane_t4_ParamLimits

0x2e6b,	// (0x00052743) power_save_pane_t4

0x0001,

0xf56f,	// (0x0005ee47) power_save_pane_t_ParamLimits

0xf56f,	// (0x0005ee47) power_save_pane_t

0x2e95,	// (0x0005276d) power_save_t3_ParamLimits

0x2e95,	// (0x0005276d) power_save_t3

0x2e80,	// (0x00052758) power_save_t2_ParamLimits

0x2e80,	// (0x00052758) power_save_t2

0x2eaa,	// (0x00052782) indicator_ps_pane_g1

0xce09,	// (0x0005c6e1) ai_gene_pane_ParamLimits

0xce09,	// (0x0005c6e1) ai_gene_pane

0xce20,	// (0x0005c6f8) ai_links_pane_ParamLimits

0xce20,	// (0x0005c6f8) ai_links_pane

0xce38,	// (0x0005c710) indicator_pane_cp1_ParamLimits

0xce38,	// (0x0005c710) indicator_pane_cp1

0xce47,	// (0x0005c71f) main_pane_idle_g1_cp_ParamLimits

0xce47,	// (0x0005c71f) main_pane_idle_g1_cp

0x2ee3,	// (0x000527bb) popup_ai_links_title_window

0xce5f,	// (0x0005c737) soft_indicator_pane_cp1_ParamLimits

0xce5f,	// (0x0005c737) soft_indicator_pane_cp1

0x62c7,	// (0x00055b9f) ai_links_pane_g1

0x62d0,	// (0x00055ba8) grid_ai_links_pane

0xd956,	// (0x0005d22e) ai_gene_pane_1

0x62b5,	// (0x00055b8d) ai_gene_pane_2

0x62be,	// (0x00055b96) list_highlight_pane_cp4

0xd932,	// (0x0005d20a) cell_ai_link_pane_ParamLimits

0xd932,	// (0x0005d20a) cell_ai_link_pane

0x6286,	// (0x00055b5e) cell_ai_link_pane_g1

0x3819,	// (0x000530f1) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0005f1ef) cell_ai_link_pane_g

0x2c1f,	// (0x000524f7) grid_highlight_cp2

0x2c1f,	// (0x000524f7) bg_popup_sub_pane_cp1

0x2f06,	// (0x000527de) popup_ai_links_title_window_t1

0x61d4,	// (0x00055aac) ai_gene_pane_1_g1_ParamLimits

0x61d4,	// (0x00055aac) ai_gene_pane_1_g1

0x61e0,	// (0x00055ab8) ai_gene_pane_1_g2_ParamLimits

0x61e0,	// (0x00055ab8) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0005f1e5) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0005f1e5) ai_gene_pane_1_g

0x61ed,	// (0x00055ac5) ai_gene_pane_1_t1_ParamLimits

0x61ed,	// (0x00055ac5) ai_gene_pane_1_t1

0x6221,	// (0x00055af9) grid_ai_soft_ind_pane

0x61bf,	// (0x00055a97) ai_gene_pane_2_t1_ParamLimits

0x61bf,	// (0x00055a97) ai_gene_pane_2_t1

0xce73,	// (0x0005c74b) main_pane_empty_t1_ParamLimits

0xce73,	// (0x0005c74b) main_pane_empty_t1

0xce8b,	// (0x0005c763) main_pane_empty_t2_ParamLimits

0xce8b,	// (0x0005c763) main_pane_empty_t2

0xcea0,	// (0x0005c778) main_pane_empty_t3_ParamLimits

0xcea0,	// (0x0005c778) main_pane_empty_t3

0xceb2,	// (0x0005c78a) main_pane_empty_t4_ParamLimits

0xceb2,	// (0x0005c78a) main_pane_empty_t4

0xcec4,	// (0x0005c79c) main_pane_empty_t5_ParamLimits

0xcec4,	// (0x0005c79c) main_pane_empty_t5

0x0004,

0xf574,	// (0x0005ee4c) main_pane_empty_t_ParamLimits

0xf574,	// (0x0005ee4c) main_pane_empty_t

0x3d17,	// (0x000535ef) bg_popup_window_pane_ParamLimits

0x3d17,	// (0x000535ef) bg_popup_window_pane

0x5f2f,	// (0x00055807) find_popup_pane_cp2_ParamLimits

0x5f2f,	// (0x00055807) find_popup_pane_cp2

0x5f3b,	// (0x00055813) heading_pane_ParamLimits

0x5f3b,	// (0x00055813) heading_pane

0x2c1f,	// (0x000524f7) bg_popup_sub_pane

0xd8b3,	// (0x0005d18b) bg_popup_window_pane_g1_ParamLimits

0xd8b3,	// (0x0005d18b) bg_popup_window_pane_g1

0xd8c2,	// (0x0005d19a) bg_popup_window_pane_g2_ParamLimits

0xd8c2,	// (0x0005d19a) bg_popup_window_pane_g2

0xd8ce,	// (0x0005d1a6) bg_popup_window_pane_g3_ParamLimits

0xd8ce,	// (0x0005d1a6) bg_popup_window_pane_g3

0xd8da,	// (0x0005d1b2) bg_popup_window_pane_g4_ParamLimits

0xd8da,	// (0x0005d1b2) bg_popup_window_pane_g4

0xd8e9,	// (0x0005d1c1) bg_popup_window_pane_g5_ParamLimits

0xd8e9,	// (0x0005d1c1) bg_popup_window_pane_g5

0xd8f9,	// (0x0005d1d1) bg_popup_window_pane_g6_ParamLimits

0xd8f9,	// (0x0005d1d1) bg_popup_window_pane_g6

0xd905,	// (0x0005d1dd) bg_popup_window_pane_g7_ParamLimits

0xd905,	// (0x0005d1dd) bg_popup_window_pane_g7

0xd914,	// (0x0005d1ec) bg_popup_window_pane_g8_ParamLimits

0xd914,	// (0x0005d1ec) bg_popup_window_pane_g8

0xd923,	// (0x0005d1fb) bg_popup_window_pane_g9_ParamLimits

0xd923,	// (0x0005d1fb) bg_popup_window_pane_g9

0x5f15,	// (0x000557ed) bg_popup_window_pane_g10_ParamLimits

0x5f15,	// (0x000557ed) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0005f1ad) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0005f1ad) bg_popup_window_pane_g

0x5e3e,	// (0x00055716) bg_popup_heading_pane_ParamLimits

0x5e3e,	// (0x00055716) bg_popup_heading_pane

0x1948,	// (0x00051220) tabs_4_passive_pane_cp_srt_ParamLimits

0x1948,	// (0x00051220) tabs_4_passive_pane_cp_srt

0x195a,	// (0x00051232) tabs_4_passive_pane_srt_ParamLimits

0x5e52,	// (0x0005572a) heading_pane_g2

0x195a,	// (0x00051232) tabs_4_passive_pane_srt

0x51b9,	// (0x00054a91) bg_passive_tab_pane_cp3_srt_ParamLimits

0x51b9,	// (0x00054a91) bg_passive_tab_pane_cp3_srt

0x5e5a,	// (0x00055732) heading_pane_t1_ParamLimits

0x5e5a,	// (0x00055732) heading_pane_t1

0x5e71,	// (0x00055749) heading_pane_t2_ParamLimits

0x5e71,	// (0x00055749) heading_pane_t2

0x0001,

0xf8d0,	// (0x0005f1a8) heading_pane_t_ParamLimits

0xf8d0,	// (0x0005f1a8) heading_pane_t

0x595f,	// (0x00055237) bg_popup_heading_pane_g1

0x5a1a,	// (0x000552f2) bg_popup_heading_pane_g2

0x5a24,	// (0x000552fc) bg_popup_heading_pane_g3

0x5a2e,	// (0x00055306) bg_popup_heading_pane_g4

0x5a38,	// (0x00055310) bg_popup_heading_pane_g5

0x5a42,	// (0x0005531a) bg_popup_heading_pane_g6

0x5a4a,	// (0x00055322) bg_popup_heading_pane_g7

0x5a52,	// (0x0005532a) bg_popup_heading_pane_g8

0x5a5c,	// (0x00055334) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0005f164) bg_popup_heading_pane_g

0x5145,	// (0x00054a1d) bg_popup_sub_pane_g1

0x5155,	// (0x00054a2d) bg_popup_sub_pane_g2

0x514d,	// (0x00054a25) bg_popup_sub_pane_g3

0x5165,	// (0x00054a3d) bg_popup_sub_pane_g4

0x515d,	// (0x00054a35) bg_popup_sub_pane_g5

0x516d,	// (0x00054a45) bg_popup_sub_pane_g6

0x5175,	// (0x00054a4d) bg_popup_sub_pane_g7

0x5185,	// (0x00054a5d) bg_popup_sub_pane_g8

0x517d,	// (0x00054a55) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0005f13e) bg_popup_sub_pane_g

0x2f7a,	// (0x00052852) bg_popup_window_pane_cp5_ParamLimits

0x2f7a,	// (0x00052852) bg_popup_window_pane_cp5

0x2f96,	// (0x0005286e) popup_note_window_g1_ParamLimits

0x2f96,	// (0x0005286e) popup_note_window_g1

0x2fa2,	// (0x0005287a) popup_note_window_t1_ParamLimits

0x2fa2,	// (0x0005287a) popup_note_window_t1

0x2fb8,	// (0x00052890) popup_note_window_t2_ParamLimits

0x2fb8,	// (0x00052890) popup_note_window_t2

0x2fce,	// (0x000528a6) popup_note_window_t3_ParamLimits

0x2fce,	// (0x000528a6) popup_note_window_t3

0x2fe4,	// (0x000528bc) popup_note_window_t4_ParamLimits

0x2fe4,	// (0x000528bc) popup_note_window_t4

0x300c,	// (0x000528e4) popup_note_window_t5_ParamLimits

0x300c,	// (0x000528e4) popup_note_window_t5

0x0004,

0xf57f,	// (0x0005ee57) popup_note_window_t_ParamLimits

0xf57f,	// (0x0005ee57) popup_note_window_t

0x3030,	// (0x00052908) bg_popup_window_pane_cp6_ParamLimits

0x3030,	// (0x00052908) bg_popup_window_pane_cp6

0x58db,	// (0x000551b3) popup_note_image_window_g1_ParamLimits

0x58db,	// (0x000551b3) popup_note_image_window_g1

0x58e7,	// (0x000551bf) popup_note_image_window_g2_ParamLimits

0x58e7,	// (0x000551bf) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0005f132) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0005f132) popup_note_image_window_g

0x5900,	// (0x000551d8) popup_note_image_window_t1_ParamLimits

0x5900,	// (0x000551d8) popup_note_image_window_t1

0x5919,	// (0x000551f1) popup_note_image_window_t2_ParamLimits

0x5919,	// (0x000551f1) popup_note_image_window_t2

0x5932,	// (0x0005520a) popup_note_image_window_t3_ParamLimits

0x5932,	// (0x0005520a) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0005f137) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0005f137) popup_note_image_window_t

0x579c,	// (0x00055074) bg_popup_window_pane_cp7_ParamLimits

0x579c,	// (0x00055074) bg_popup_window_pane_cp7

0x57cc,	// (0x000550a4) popup_note_wait_window_g1_ParamLimits

0x57cc,	// (0x000550a4) popup_note_wait_window_g1

0x57d8,	// (0x000550b0) popup_note_wait_window_g2_ParamLimits

0x57d8,	// (0x000550b0) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0005f120) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0005f120) popup_note_wait_window_g

0x57f0,	// (0x000550c8) popup_note_wait_window_t1_ParamLimits

0x57f0,	// (0x000550c8) popup_note_wait_window_t1

0x5817,	// (0x000550ef) popup_note_wait_window_t2_ParamLimits

0x5817,	// (0x000550ef) popup_note_wait_window_t2

0x5834,	// (0x0005510c) popup_note_wait_window_t3_ParamLimits

0x5834,	// (0x0005510c) popup_note_wait_window_t3

0x5847,	// (0x0005511f) popup_note_wait_window_t4_ParamLimits

0x5847,	// (0x0005511f) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0005f127) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0005f127) popup_note_wait_window_t

0x586c,	// (0x00055144) wait_bar_pane_ParamLimits

0x586c,	// (0x00055144) wait_bar_pane

0x2c1f,	// (0x000524f7) wait_anim_pane

0x2c1f,	// (0x000524f7) wait_border_pane

0x2c15,	// (0x000524ed) wait_anim_pane_g1

0x2c15,	// (0x000524ed) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0005efe0) wait_anim_pane_g

0x5740,	// (0x00055018) wait_border_pane_g1

0x574b,	// (0x00055023) wait_border_pane_g2

0x5754,	// (0x0005502c) wait_border_pane_g3

0x0002,

0xf841,	// (0x0005f119) wait_border_pane_g

0x55ab,	// (0x00054e83) bg_popup_window_pane_cp16_ParamLimits

0x55ab,	// (0x00054e83) bg_popup_window_pane_cp16

0x56ab,	// (0x00054f83) indicator_popup_pane_cp4_ParamLimits

0x56ab,	// (0x00054f83) indicator_popup_pane_cp4

0x56bf,	// (0x00054f97) popup_query_data_window_t1_ParamLimits

0x56bf,	// (0x00054f97) popup_query_data_window_t1

0x56d1,	// (0x00054fa9) popup_query_data_window_t2_ParamLimits

0x56d1,	// (0x00054fa9) popup_query_data_window_t2

0x56ea,	// (0x00054fc2) popup_query_data_window_t3_ParamLimits

0x56ea,	// (0x00054fc2) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0005f112) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0005f112) popup_query_data_window_t

0x5704,	// (0x00054fdc) query_popup_data_pane_ParamLimits

0x5704,	// (0x00054fdc) query_popup_data_pane

0x5718,	// (0x00054ff0) query_popup_data_pane_cp1_ParamLimits

0x5718,	// (0x00054ff0) query_popup_data_pane_cp1

0x55ab,	// (0x00054e83) bg_popup_window_pane_cp10_ParamLimits

0x55ab,	// (0x00054e83) bg_popup_window_pane_cp10

0x55dd,	// (0x00054eb5) indicator_popup_pane_ParamLimits

0x55dd,	// (0x00054eb5) indicator_popup_pane

0x55ff,	// (0x00054ed7) popup_query_code_window_t1_ParamLimits

0x55ff,	// (0x00054ed7) popup_query_code_window_t1

0x5619,	// (0x00054ef1) popup_query_code_window_t2_ParamLimits

0x5619,	// (0x00054ef1) popup_query_code_window_t2

0x5662,	// (0x00054f3a) popup_query_code_window_t3_ParamLimits

0x5662,	// (0x00054f3a) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0005f10b) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0005f10b) popup_query_code_window_t

0x5691,	// (0x00054f69) query_popup_pane_ParamLimits

0x5691,	// (0x00054f69) query_popup_pane

0x3030,	// (0x00052908) bg_popup_window_pane_cp15_ParamLimits

0x3030,	// (0x00052908) bg_popup_window_pane_cp15

0x304e,	// (0x00052926) indicator_popup_pane_cp1_ParamLimits

0x304e,	// (0x00052926) indicator_popup_pane_cp1

0x375e,	// (0x00053036) indicator_popup_pane_cp2_ParamLimits

0x375e,	// (0x00053036) indicator_popup_pane_cp2

0x3771,	// (0x00053049) popup_query_data_code_window_g1_ParamLimits

0x3771,	// (0x00053049) popup_query_data_code_window_g1

0x3784,	// (0x0005305c) popup_query_data_code_window_t1_ParamLimits

0x3784,	// (0x0005305c) popup_query_data_code_window_t1

0x3796,	// (0x0005306e) popup_query_data_code_window_t2_ParamLimits

0x3796,	// (0x0005306e) popup_query_data_code_window_t2

0x37a8,	// (0x00053080) popup_query_data_code_window_t3_ParamLimits

0x37a8,	// (0x00053080) popup_query_data_code_window_t3

0x37be,	// (0x00053096) popup_query_data_code_window_t4_ParamLimits

0x37be,	// (0x00053096) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0005ee62) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0005ee62) popup_query_data_code_window_t

0x1461,	// (0x00050d39) list_single_midp_graphic_pane_g3

0x37d6,	// (0x000530ae) query_popup_data_pane_cp2_ParamLimits

0x37e9,	// (0x000530c1) query_popup_pane_cp2_ParamLimits

0x37e9,	// (0x000530c1) query_popup_pane_cp2

0x2c1f,	// (0x000524f7) bg_popup_window_pane_cp11

0x55a3,	// (0x00054e7b) heading_pane_cp5

0x38d4,	// (0x000531ac) listscroll_popup_info_pane

0x2c1f,	// (0x000524f7) input_focus_pane_cp3

0x37fc,	// (0x000530d4) query_popup_pane_t1

0x380a,	// (0x000530e2) list_popup_info_pane_ParamLimits

0x380a,	// (0x000530e2) list_popup_info_pane

0x3819,	// (0x000530f1) listscroll_popup_info_pane_g1

0x3821,	// (0x000530f9) scroll_pane_cp7

0x382b,	// (0x00053103) popup_info_list_pane_t1_ParamLimits

0x382b,	// (0x00053103) popup_info_list_pane_t1

0x3845,	// (0x0005311d) popup_info_list_pane_t2_ParamLimits

0x3845,	// (0x0005311d) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0005ee6b) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0005ee6b) popup_info_list_pane_t

0x2c1f,	// (0x000524f7) bg_popup_window_pane_cp12

0x68d6,	// (0x000561ae) find_popup_pane

0x2cff,	// (0x000525d7) bg_popup_window_pane_cp3

0x385f,	// (0x00053137) heading_pane_cp3

0x386b,	// (0x00053143) listscroll_popup_graphic_pane

0x2c1f,	// (0x000524f7) bg_popup_window_pane_cp4

0xcf26,	// (0x0005c7fe) heading_pane_cp4

0x38d4,	// (0x000531ac) listscroll_popup_colour_pane

0x38dc,	// (0x000531b4) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x38dc,	// (0x000531b4) cell_large_graphic_colour_none_popup_pane

0xcf2e,	// (0x0005c806) grid_large_graphic_colour_popup_pane_ParamLimits

0xcf2e,	// (0x0005c806) grid_large_graphic_colour_popup_pane

0x391c,	// (0x000531f4) listscroll_popup_colour_pane_g1_ParamLimits

0x391c,	// (0x000531f4) listscroll_popup_colour_pane_g1

0x3933,	// (0x0005320b) listscroll_popup_colour_pane_g2_ParamLimits

0x3933,	// (0x0005320b) listscroll_popup_colour_pane_g2

0x394a,	// (0x00053222) listscroll_popup_colour_pane_g3_ParamLimits

0x394a,	// (0x00053222) listscroll_popup_colour_pane_g3

0xcf52,	// (0x0005c82a) listscroll_popup_colour_pane_g4_ParamLimits

0xcf52,	// (0x0005c82a) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0005ee70) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0005ee70) listscroll_popup_colour_pane_g

0x396e,	// (0x00053246) scroll_pane_cp6_ParamLimits

0x396e,	// (0x00053246) scroll_pane_cp6

0xcf62,	// (0x0005c83a) cell_large_graphic_colour_popup_pane_ParamLimits

0xcf62,	// (0x0005c83a) cell_large_graphic_colour_popup_pane

0x399f,	// (0x00053277) cell_large_graphic_colour_none_popup_pane_t1

0x2c1f,	// (0x000524f7) grid_highlight_pane_cp5

0x39ae,	// (0x00053286) cell_large_graphic_colour_popup_pane_g1

0x39b6,	// (0x0005328e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0005ee79) cell_large_graphic_colour_popup_pane_g

0x39be,	// (0x00053296) cell_large_graphic_colour_popup_pane_g2_copy1

0x39c7,	// (0x0005329f) grid_highlight_pane_cp4

0x39cf,	// (0x000532a7) bg_popup_window_pane_cp8_ParamLimits

0x39cf,	// (0x000532a7) bg_popup_window_pane_cp8

0x39ea,	// (0x000532c2) popup_snote_single_text_window_g1_ParamLimits

0x39ea,	// (0x000532c2) popup_snote_single_text_window_g1

0x39fc,	// (0x000532d4) popup_snote_single_text_window_t1_ParamLimits

0x39fc,	// (0x000532d4) popup_snote_single_text_window_t1

0x3a0f,	// (0x000532e7) popup_snote_single_text_window_t2_ParamLimits

0x3a0f,	// (0x000532e7) popup_snote_single_text_window_t2

0x3a22,	// (0x000532fa) popup_snote_single_text_window_t3_ParamLimits

0x3a22,	// (0x000532fa) popup_snote_single_text_window_t3

0x3a5b,	// (0x00053333) popup_snote_single_text_window_t4_ParamLimits

0x3a5b,	// (0x00053333) popup_snote_single_text_window_t4

0x3a8f,	// (0x00053367) popup_snote_single_text_window_t5_ParamLimits

0x3a8f,	// (0x00053367) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0005ee7e) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0005ee7e) popup_snote_single_text_window_t

0x3abe,	// (0x00053396) bg_popup_window_pane_cp9_ParamLimits

0x3abe,	// (0x00053396) bg_popup_window_pane_cp9

0x39ea,	// (0x000532c2) popup_snote_single_graphic_window_g1_ParamLimits

0x39ea,	// (0x000532c2) popup_snote_single_graphic_window_g1

0x3acc,	// (0x000533a4) popup_snote_single_graphic_window_g2_ParamLimits

0x3acc,	// (0x000533a4) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0005ee89) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0005ee89) popup_snote_single_graphic_window_g

0x3ad8,	// (0x000533b0) popup_snote_single_graphic_window_t1_ParamLimits

0x3ad8,	// (0x000533b0) popup_snote_single_graphic_window_t1

0x3aeb,	// (0x000533c3) popup_snote_single_graphic_window_t2_ParamLimits

0x3aeb,	// (0x000533c3) popup_snote_single_graphic_window_t2

0x3afe,	// (0x000533d6) popup_snote_single_graphic_window_t3_ParamLimits

0x3afe,	// (0x000533d6) popup_snote_single_graphic_window_t3

0x3b37,	// (0x0005340f) popup_snote_single_graphic_window_t4_ParamLimits

0x3b37,	// (0x0005340f) popup_snote_single_graphic_window_t4

0x3b6b,	// (0x00053443) popup_snote_single_graphic_window_t5_ParamLimits

0x3b6b,	// (0x00053443) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0005ee8e) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0005ee8e) popup_snote_single_graphic_window_t

0xdc07,	// (0x0005d4df) grid_graphic_popup_pane_ParamLimits

0xdc07,	// (0x0005d4df) grid_graphic_popup_pane

0x6842,	// (0x0005611a) listscroll_popup_graphic_pane_g1_ParamLimits

0x6842,	// (0x0005611a) listscroll_popup_graphic_pane_g1

0xdc26,	// (0x0005d4fe) listscroll_popup_graphic_pane_g2_ParamLimits

0xdc26,	// (0x0005d4fe) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0005f288) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0005f288) listscroll_popup_graphic_pane_g

0x686a,	// (0x00056142) scroll_pane_cp5

0xdbc3,	// (0x0005d49b) cell_graphic_popup_pane_ParamLimits

0xdbc3,	// (0x0005d49b) cell_graphic_popup_pane

0x6797,	// (0x0005606f) cell_graphic_popup_pane_g1

0x679f,	// (0x00056077) cell_graphic_popup_pane_g2

0x39be,	// (0x00053296) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0005f281) cell_graphic_popup_pane_g

0x67a8,	// (0x00056080) cell_graphic_popup_pane_t2

0x39c7,	// (0x0005329f) grid_highlight_pane_cp3

0x3bac,	// (0x00053484) list_gen_pane_ParamLimits

0x3bac,	// (0x00053484) list_gen_pane

0x3bde,	// (0x000534b6) scroll_pane

0xdb7a,	// (0x0005d452) bg_list_pane_g1_ParamLimits

0xdb7a,	// (0x0005d452) bg_list_pane_g1

0x670c,	// (0x00055fe4) bg_list_pane_g2_ParamLimits

0x670c,	// (0x00055fe4) bg_list_pane_g2

0x6721,	// (0x00055ff9) bg_list_pane_g3_ParamLimits

0x6721,	// (0x00055ff9) bg_list_pane_g3

0x6735,	// (0x0005600d) bg_list_pane_g4_ParamLimits

0x6735,	// (0x0005600d) bg_list_pane_g4

0xdb97,	// (0x0005d46f) bg_list_pane_g5_ParamLimits

0xdb97,	// (0x0005d46f) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0005f276) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0005f276) bg_list_pane_g

0xdb42,	// (0x0005d41a) list_double2_graphic_large_graphic_pane_ParamLimits

0xdb42,	// (0x0005d41a) list_double2_graphic_large_graphic_pane

0xdb42,	// (0x0005d41a) list_double2_graphic_pane_ParamLimits

0xdb42,	// (0x0005d41a) list_double2_graphic_pane

0xdb42,	// (0x0005d41a) list_double2_large_graphic_pane_ParamLimits

0xdb42,	// (0x0005d41a) list_double2_large_graphic_pane

0xdb42,	// (0x0005d41a) list_double2_pane_ParamLimits

0xdb42,	// (0x0005d41a) list_double2_pane

0xdb42,	// (0x0005d41a) list_double_graphic_heading_pane_ParamLimits

0xdb42,	// (0x0005d41a) list_double_graphic_heading_pane

0xdb42,	// (0x0005d41a) list_double_graphic_pane_ParamLimits

0xdb42,	// (0x0005d41a) list_double_graphic_pane

0xdb42,	// (0x0005d41a) list_double_heading_pane_ParamLimits

0xdb42,	// (0x0005d41a) list_double_heading_pane

0xdb42,	// (0x0005d41a) list_double_large_graphic_pane_ParamLimits

0xdb42,	// (0x0005d41a) list_double_large_graphic_pane

0xdb42,	// (0x0005d41a) list_double_number_pane_ParamLimits

0xdb42,	// (0x0005d41a) list_double_number_pane

0xdb42,	// (0x0005d41a) list_double_pane_ParamLimits

0xdb42,	// (0x0005d41a) list_double_pane

0xdb42,	// (0x0005d41a) list_double_time_pane_ParamLimits

0xdb42,	// (0x0005d41a) list_double_time_pane

0xdb42,	// (0x0005d41a) list_setting_number_pane_ParamLimits

0xdb42,	// (0x0005d41a) list_setting_number_pane

0xdb42,	// (0x0005d41a) list_setting_pane_ParamLimits

0xdb42,	// (0x0005d41a) list_setting_pane

0xdb54,	// (0x0005d42c) list_single_2graphic_pane_ParamLimits

0xdb54,	// (0x0005d42c) list_single_2graphic_pane

0xdb54,	// (0x0005d42c) list_single_graphic_heading_pane_ParamLimits

0xdb54,	// (0x0005d42c) list_single_graphic_heading_pane

0xdb54,	// (0x0005d42c) list_single_graphic_pane_ParamLimits

0xdb54,	// (0x0005d42c) list_single_graphic_pane

0xdb54,	// (0x0005d42c) list_single_heading_pane_ParamLimits

0xdb54,	// (0x0005d42c) list_single_heading_pane

0xdb42,	// (0x0005d41a) list_single_large_graphic_pane_ParamLimits

0xdb42,	// (0x0005d41a) list_single_large_graphic_pane

0xdb54,	// (0x0005d42c) list_single_number_heading_pane_ParamLimits

0xdb54,	// (0x0005d42c) list_single_number_heading_pane

0xdb54,	// (0x0005d42c) list_single_number_pane_ParamLimits

0xdb54,	// (0x0005d42c) list_single_number_pane

0xdb54,	// (0x0005d42c) list_single_pane_ParamLimits

0xdb54,	// (0x0005d42c) list_single_pane

0x2c1f,	// (0x000524f7) list_highlight_pane_cp1

0x4836,	// (0x0005410e) list_single_pane_g1_ParamLimits

0x4836,	// (0x0005410e) list_single_pane_g1

0x3131,	// (0x00052a09) list_single_pane_g2_ParamLimits

0x3131,	// (0x00052a09) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0005eeaa) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0005eeaa) list_single_pane_g

0x1a99,	// (0x00051371) list_single_pane_t1_ParamLimits

0x1a99,	// (0x00051371) list_single_pane_t1

0x4836,	// (0x0005410e) list_single_number_pane_g1_ParamLimits

0x4836,	// (0x0005410e) list_single_number_pane_g1

0x3131,	// (0x00052a09) list_single_number_pane_g2_ParamLimits

0x3131,	// (0x00052a09) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0005eeaa) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0005eeaa) list_single_number_pane_g

0x1426,	// (0x00050cfe) list_single_number_pane_t1_ParamLimits

0x1426,	// (0x00050cfe) list_single_number_pane_t1

0xc483,	// (0x0005bd5b) list_single_number_pane_t2_ParamLimits

0xc483,	// (0x0005bd5b) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0005f237) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0005f237) list_single_number_pane_t

0xb513,	// (0x0005adeb) list_single_graphic_pane_g1_ParamLimits

0xb513,	// (0x0005adeb) list_single_graphic_pane_g1

0x4836,	// (0x0005410e) list_single_graphic_pane_g2_ParamLimits

0x4836,	// (0x0005410e) list_single_graphic_pane_g2

0x3131,	// (0x00052a09) list_single_graphic_pane_g3_ParamLimits

0x3131,	// (0x00052a09) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0005ee99) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0005ee99) list_single_graphic_pane_g

0xb51f,	// (0x0005adf7) list_single_graphic_pane_t1_ParamLimits

0xb51f,	// (0x0005adf7) list_single_graphic_pane_t1

0xb535,	// (0x0005ae0d) list_single_heading_pane_g1_ParamLimits

0xb535,	// (0x0005ae0d) list_single_heading_pane_g1

0x3131,	// (0x00052a09) list_single_heading_pane_g2_ParamLimits

0x3131,	// (0x00052a09) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0005eea0) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0005eea0) list_single_heading_pane_g

0xb548,	// (0x0005ae20) list_single_heading_pane_t1_ParamLimits

0xb548,	// (0x0005ae20) list_single_heading_pane_t1

0xb55e,	// (0x0005ae36) list_single_heading_pane_t2_ParamLimits

0xb55e,	// (0x0005ae36) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0005eea5) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0005eea5) list_single_heading_pane_t

0x4836,	// (0x0005410e) list_single_number_heading_pane_g1_ParamLimits

0x4836,	// (0x0005410e) list_single_number_heading_pane_g1

0x3131,	// (0x00052a09) list_single_number_heading_pane_g2_ParamLimits

0x3131,	// (0x00052a09) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0005eeaa) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0005eeaa) list_single_number_heading_pane_g

0xb570,	// (0x0005ae48) list_single_number_heading_pane_t1_ParamLimits

0xb570,	// (0x0005ae48) list_single_number_heading_pane_t1

0xb586,	// (0x0005ae5e) list_single_number_heading_pane_t2_ParamLimits

0xb586,	// (0x0005ae5e) list_single_number_heading_pane_t2

0x1a73,	// (0x0005134b) list_single_number_heading_pane_t3_ParamLimits

0x1a73,	// (0x0005134b) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0005eeaf) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0005eeaf) list_single_number_heading_pane_t

0xb598,	// (0x0005ae70) list_single_graphic_heading_pane_g1_ParamLimits

0xb598,	// (0x0005ae70) list_single_graphic_heading_pane_g1

0xb5b0,	// (0x0005ae88) list_single_graphic_heading_pane_g4_ParamLimits

0xb5b0,	// (0x0005ae88) list_single_graphic_heading_pane_g4

0x3131,	// (0x00052a09) list_single_graphic_heading_pane_g5_ParamLimits

0x3131,	// (0x00052a09) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0005eeb6) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0005eeb6) list_single_graphic_heading_pane_g

0xb570,	// (0x0005ae48) list_single_graphic_heading_pane_t1_ParamLimits

0xb570,	// (0x0005ae48) list_single_graphic_heading_pane_t1

0xb5c1,	// (0x0005ae99) list_single_graphic_heading_pane_t2_ParamLimits

0xb5c1,	// (0x0005ae99) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0005eebd) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0005eebd) list_single_graphic_heading_pane_t

0x1aaf,	// (0x00051387) list_single_large_graphic_pane_g1_ParamLimits

0x1aaf,	// (0x00051387) list_single_large_graphic_pane_g1

0x1abb,	// (0x00051393) list_single_large_graphic_pane_g2_ParamLimits

0x1abb,	// (0x00051393) list_single_large_graphic_pane_g2

0x1ac7,	// (0x0005139f) list_single_large_graphic_pane_g3_ParamLimits

0x1ac7,	// (0x0005139f) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0005eec2) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0005eec2) list_single_large_graphic_pane_g

0x574b,	// (0x00055023) wait_border_pane_g2_copy1

0x30c0,	// (0x00052998) list_single_large_graphic_pane_g4_cp2

0x1ad3,	// (0x000513ab) list_single_large_graphic_pane_t1_ParamLimits

0x1ad3,	// (0x000513ab) list_single_large_graphic_pane_t1

0x4721,	// (0x00053ff9) list_double_pane_g1_ParamLimits

0x4721,	// (0x00053ff9) list_double_pane_g1

0xb5d7,	// (0x0005aeaf) list_double_pane_g2_ParamLimits

0xb5d7,	// (0x0005aeaf) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0005eec9) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0005eec9) list_double_pane_g

0xb5e3,	// (0x0005aebb) list_double_pane_t1_ParamLimits

0xb5e3,	// (0x0005aebb) list_double_pane_t1

0xb5f9,	// (0x0005aed1) list_double_pane_t2_ParamLimits

0xb5f9,	// (0x0005aed1) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0005eece) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0005eece) list_double_pane_t

0xb60b,	// (0x0005aee3) list_double2_pane_g1_ParamLimits

0xb60b,	// (0x0005aee3) list_double2_pane_g1

0xb61c,	// (0x0005aef4) list_double2_pane_g2_ParamLimits

0xb61c,	// (0x0005aef4) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0005eed3) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0005eed3) list_double2_pane_g

0xb628,	// (0x0005af00) list_double2_pane_t1_ParamLimits

0xb628,	// (0x0005af00) list_double2_pane_t1

0xb63e,	// (0x0005af16) list_double2_pane_t2_ParamLimits

0xb63e,	// (0x0005af16) list_double2_pane_t2

0x0001,

0xf600,	// (0x0005eed8) list_double2_pane_t_ParamLimits

0xf600,	// (0x0005eed8) list_double2_pane_t

0x4721,	// (0x00053ff9) list_double_number_pane_g1_ParamLimits

0x4721,	// (0x00053ff9) list_double_number_pane_g1

0xb5d7,	// (0x0005aeaf) list_double_number_pane_g2_ParamLimits

0xb5d7,	// (0x0005aeaf) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0005eec9) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0005eec9) list_double_number_pane_g

0xb650,	// (0x0005af28) list_double_number_pane_t1_ParamLimits

0xb650,	// (0x0005af28) list_double_number_pane_t1

0xb662,	// (0x0005af3a) list_double_number_pane_t2_ParamLimits

0xb662,	// (0x0005af3a) list_double_number_pane_t2

0xb678,	// (0x0005af50) list_double_number_pane_t3_ParamLimits

0xb678,	// (0x0005af50) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0005eedd) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0005eedd) list_double_number_pane_t

0xb68a,	// (0x0005af62) list_double_graphic_pane_g1_ParamLimits

0xb68a,	// (0x0005af62) list_double_graphic_pane_g1

0xb696,	// (0x0005af6e) list_double_graphic_pane_g2_ParamLimits

0xb696,	// (0x0005af6e) list_double_graphic_pane_g2

0xb6a5,	// (0x0005af7d) list_double_graphic_pane_g3_ParamLimits

0xb6a5,	// (0x0005af7d) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0005eee4) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0005eee4) list_double_graphic_pane_g

0xb6bd,	// (0x0005af95) list_double_graphic_pane_t1_ParamLimits

0xb6bd,	// (0x0005af95) list_double_graphic_pane_t1

0xb6d3,	// (0x0005afab) list_double_graphic_pane_t2_ParamLimits

0xb6d3,	// (0x0005afab) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0005eeed) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0005eeed) list_double_graphic_pane_t

0xb6e5,	// (0x0005afbd) list_double2_graphic_pane_g1_ParamLimits

0xb6e5,	// (0x0005afbd) list_double2_graphic_pane_g1

0xb6f1,	// (0x0005afc9) list_double2_graphic_pane_g2_ParamLimits

0xb6f1,	// (0x0005afc9) list_double2_graphic_pane_g2

0xb6fd,	// (0x0005afd5) list_double2_graphic_pane_g3_ParamLimits

0xb6fd,	// (0x0005afd5) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0005eef2) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0005eef2) list_double2_graphic_pane_g

0xb709,	// (0x0005afe1) list_double2_graphic_pane_t1_ParamLimits

0xb709,	// (0x0005afe1) list_double2_graphic_pane_t1

0xb71f,	// (0x0005aff7) list_double2_graphic_pane_t2_ParamLimits

0xb71f,	// (0x0005aff7) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0005eef9) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0005eef9) list_double2_graphic_pane_t

0xb731,	// (0x0005b009) list_double_large_graphic_pane_g1_ParamLimits

0xb731,	// (0x0005b009) list_double_large_graphic_pane_g1

0xb750,	// (0x0005b028) list_double_large_graphic_pane_g2_ParamLimits

0xb750,	// (0x0005b028) list_double_large_graphic_pane_g2

0xb5d7,	// (0x0005aeaf) list_double_large_graphic_pane_g3_ParamLimits

0xb5d7,	// (0x0005aeaf) list_double_large_graphic_pane_g3

0xb766,	// (0x0005b03e) list_double_large_graphic_pane_g4_ParamLimits

0xb766,	// (0x0005b03e) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0005eefe) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0005eefe) list_double_large_graphic_pane_g

0xb778,	// (0x0005b050) list_double_large_graphic_pane_t1_ParamLimits

0xb778,	// (0x0005b050) list_double_large_graphic_pane_t1

0xb791,	// (0x0005b069) list_double_large_graphic_pane_t2_ParamLimits

0xb791,	// (0x0005b069) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0005ef09) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0005ef09) list_double_large_graphic_pane_t

0xb7a3,	// (0x0005b07b) list_double2_large_graphic_pane_g1_ParamLimits

0xb7a3,	// (0x0005b07b) list_double2_large_graphic_pane_g1

0xb7af,	// (0x0005b087) list_double2_large_graphic_pane_g2_ParamLimits

0xb7af,	// (0x0005b087) list_double2_large_graphic_pane_g2

0xb6fd,	// (0x0005afd5) list_double2_large_graphic_pane_g3_ParamLimits

0xb6fd,	// (0x0005afd5) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0005ef0e) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0005ef0e) list_double2_large_graphic_pane_g

0xb7c0,	// (0x0005b098) list_double2_large_graphic_pane_t1_ParamLimits

0xb7c0,	// (0x0005b098) list_double2_large_graphic_pane_t1

0xb7d6,	// (0x0005b0ae) list_double2_large_graphic_pane_t2_ParamLimits

0xb7d6,	// (0x0005b0ae) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0005ef15) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0005ef15) list_double2_large_graphic_pane_t

0xb7e8,	// (0x0005b0c0) list_double_heading_pane_g1_ParamLimits

0xb7e8,	// (0x0005b0c0) list_double_heading_pane_g1

0xb7f9,	// (0x0005b0d1) list_double_heading_pane_g2_ParamLimits

0xb7f9,	// (0x0005b0d1) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0005ef1a) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0005ef1a) list_double_heading_pane_g

0xb805,	// (0x0005b0dd) list_double_heading_pane_t1_ParamLimits

0xb805,	// (0x0005b0dd) list_double_heading_pane_t1

0xb63e,	// (0x0005af16) list_double_heading_pane_t2_ParamLimits

0xb63e,	// (0x0005af16) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0005ef1f) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0005ef1f) list_double_heading_pane_t

0xb81b,	// (0x0005b0f3) list_double_graphic_heading_pane_g1_ParamLimits

0xb81b,	// (0x0005b0f3) list_double_graphic_heading_pane_g1

0xb7e8,	// (0x0005b0c0) list_double_graphic_heading_pane_g2_ParamLimits

0xb7e8,	// (0x0005b0c0) list_double_graphic_heading_pane_g2

0xb7f9,	// (0x0005b0d1) list_double_graphic_heading_pane_g3_ParamLimits

0xb7f9,	// (0x0005b0d1) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0005ef24) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0005ef24) list_double_graphic_heading_pane_g

0xb827,	// (0x0005b0ff) list_double_graphic_heading_pane_t1_ParamLimits

0xb827,	// (0x0005b0ff) list_double_graphic_heading_pane_t1

0xb71f,	// (0x0005aff7) list_double_graphic_heading_pane_t2_ParamLimits

0xb71f,	// (0x0005aff7) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0005ef2b) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0005ef2b) list_double_graphic_heading_pane_t

0xb83d,	// (0x0005b115) list_double_time_pane_g1_ParamLimits

0xb83d,	// (0x0005b115) list_double_time_pane_g1

0xb84e,	// (0x0005b126) list_double_time_pane_g2_ParamLimits

0xb84e,	// (0x0005b126) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0005ef30) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0005ef30) list_double_time_pane_g

0xb85a,	// (0x0005b132) list_double_time_pane_t1_ParamLimits

0xb85a,	// (0x0005b132) list_double_time_pane_t1

0xb870,	// (0x0005b148) list_double_time_pane_t2_ParamLimits

0xb870,	// (0x0005b148) list_double_time_pane_t2

0xb882,	// (0x0005b15a) list_double_time_pane_t3_ParamLimits

0xb882,	// (0x0005b15a) list_double_time_pane_t3

0xb894,	// (0x0005b16c) list_double_time_pane_t4_ParamLimits

0xb894,	// (0x0005b16c) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0005ef35) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0005ef35) list_double_time_pane_t

0xb8a6,	// (0x0005b17e) list_setting_pane_g1_ParamLimits

0xb8a6,	// (0x0005b17e) list_setting_pane_g1

0xb61c,	// (0x0005aef4) list_setting_pane_g2_ParamLimits

0xb61c,	// (0x0005aef4) list_setting_pane_g2

0x0001,

0xf666,	// (0x0005ef3e) list_setting_pane_g_ParamLimits

0xf666,	// (0x0005ef3e) list_setting_pane_g

0xb8b2,	// (0x0005b18a) list_setting_pane_t1_ParamLimits

0xb8b2,	// (0x0005b18a) list_setting_pane_t1

0xb8cc,	// (0x0005b1a4) list_setting_pane_t2_ParamLimits

0xb8cc,	// (0x0005b1a4) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0005ef43) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0005ef43) list_setting_pane_t

0xb90b,	// (0x0005b1e3) set_value_pane_cp_ParamLimits

0xb90b,	// (0x0005b1e3) set_value_pane_cp

0xb917,	// (0x0005b1ef) list_setting_number_pane_g1_ParamLimits

0xb917,	// (0x0005b1ef) list_setting_number_pane_g1

0xb923,	// (0x0005b1fb) list_setting_number_pane_g2_ParamLimits

0xb923,	// (0x0005b1fb) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0005ef4a) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0005ef4a) list_setting_number_pane_g

0xb92f,	// (0x0005b207) list_setting_number_pane_t1_ParamLimits

0xb92f,	// (0x0005b207) list_setting_number_pane_t1

0xb948,	// (0x0005b220) list_setting_number_pane_t2_ParamLimits

0xb948,	// (0x0005b220) list_setting_number_pane_t2

0xb962,	// (0x0005b23a) list_setting_number_pane_t3_ParamLimits

0xb962,	// (0x0005b23a) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0005ef4f) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0005ef4f) list_setting_number_pane_t

0xb90b,	// (0x0005b1e3) set_value_pane_ParamLimits

0xb90b,	// (0x0005b1e3) set_value_pane

0x3c1e,	// (0x000534f6) bg_set_opt_pane_ParamLimits

0x3c1e,	// (0x000534f6) bg_set_opt_pane

0x0549,	// (0x0004fe21) set_value_pane_t1

0x3c3f,	// (0x00053517) slider_set_pane_cp3

0x3c48,	// (0x00053520) volume_small_pane_cp

0x3c51,	// (0x00053529) list_form_gen_pane

0x3c5a,	// (0x00053532) scroll_pane_cp8

0xb9a5,	// (0x0005b27d) form_field_data_pane_ParamLimits

0xb9a5,	// (0x0005b27d) form_field_data_pane

0xb9bc,	// (0x0005b294) form_field_data_wide_pane_ParamLimits

0xb9bc,	// (0x0005b294) form_field_data_wide_pane

0xb9dc,	// (0x0005b2b4) form_field_popup_pane_ParamLimits

0xb9dc,	// (0x0005b2b4) form_field_popup_pane

0xb9f4,	// (0x0005b2cc) form_field_popup_wide_pane_ParamLimits

0xb9f4,	// (0x0005b2cc) form_field_popup_wide_pane

0x05e5,	// (0x0004febd) form_field_slider_pane_ParamLimits

0x05e5,	// (0x0004febd) form_field_slider_pane

0x05f8,	// (0x0004fed0) form_field_slider_wide_pane_ParamLimits

0x05f8,	// (0x0004fed0) form_field_slider_wide_pane

0x3c6b,	// (0x00053543) data_form_pane

0xba15,	// (0x0005b2ed) form_field_data_pane_t1

0x3c77,	// (0x0005354f) input_focus_pane

0x062d,	// (0x0004ff05) data_form_wide_pane

0x064a,	// (0x0004ff22) form_field_data_wide_pane_t1

0x39dc,	// (0x000532b4) input_focus_pane_cp6

0xba2f,	// (0x0005b307) form_field_popup_pane_t1

0x3c77,	// (0x0005354f) input_focus_pane_cp7

0x3c99,	// (0x00053571) list_form_pane

0x068c,	// (0x0004ff64) form_field_popup_wide_pane_t1

0x3c77,	// (0x0005354f) input_focus_pane_cp8

0x3ca5,	// (0x0005357d) list_form_wide_pane

0xba51,	// (0x0005b329) form_field_slider_pane_t1_ParamLimits

0xba51,	// (0x0005b329) form_field_slider_pane_t1

0xba69,	// (0x0005b341) form_field_slider_pane_t2_ParamLimits

0xba69,	// (0x0005b341) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0005ef5f) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0005ef5f) form_field_slider_pane_t

0x2f7a,	// (0x00052852) input_focus_pane_cp9_ParamLimits

0x2f7a,	// (0x00052852) input_focus_pane_cp9

0xba7e,	// (0x0005b356) slider_cont_pane_ParamLimits

0xba7e,	// (0x0005b356) slider_cont_pane

0x3cb4,	// (0x0005358c) form_field_slider_wide_pane_t1_ParamLimits

0x3cb4,	// (0x0005358c) form_field_slider_wide_pane_t1

0x06e8,	// (0x0004ffc0) form_field_slider_wide_pane_t2_ParamLimits

0x06e8,	// (0x0004ffc0) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0005ef64) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0005ef64) form_field_slider_wide_pane_t

0x2f7a,	// (0x00052852) input_focus_pane_cp10_ParamLimits

0x2f7a,	// (0x00052852) input_focus_pane_cp10

0xba92,	// (0x0005b36a) slider_cont_pane_cp1_ParamLimits

0xba92,	// (0x0005b36a) slider_cont_pane_cp1

0xbaa6,	// (0x0005b37e) slider_form_pane_cp

0x3cc6,	// (0x0005359e) input_focus_pane_g1

0x3cce,	// (0x000535a6) input_focus_pane_g2

0x3cd6,	// (0x000535ae) input_focus_pane_g3

0x3cde,	// (0x000535b6) input_focus_pane_g4

0x3ce6,	// (0x000535be) input_focus_pane_g5

0x3cee,	// (0x000535c6) input_focus_pane_g6

0x3cf6,	// (0x000535ce) input_focus_pane_g7

0x3cfe,	// (0x000535d6) input_focus_pane_g8

0x3d06,	// (0x000535de) input_focus_pane_g9

0x2c15,	// (0x000524ed) input_focus_pane_g10

0x0009,

0xf691,	// (0x0005ef69) input_focus_pane_g

0x5754,	// (0x0005502c) wait_border_pane_g3_copy1

0xbaae,	// (0x0005b386) data_form_pane_t1

0x2c15,	// (0x000524ed) wait_anim_pane_g1_copy1

0xc495,	// (0x0005bd6d) data_form_wide_pane_t1

0xbac7,	// (0x0005b39f) list_form_graphic_pane_cp_ParamLimits

0xbac7,	// (0x0005b39f) list_form_graphic_pane_cp

0x6681,	// (0x00055f59) slider_form_pane_g1

0x668a,	// (0x00055f62) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0005f267) slider_form_pane_g

0xbad8,	// (0x0005b3b0) list_form_graphic_pane_ParamLimits

0xbad8,	// (0x0005b3b0) list_form_graphic_pane

0x0766,	// (0x0005003e) list_form_graphic_pane_g1

0x076e,	// (0x00050046) list_form_graphic_pane_t1_ParamLimits

0x076e,	// (0x00050046) list_form_graphic_pane_t1

0x2cff,	// (0x000525d7) list_highlight_pane_cp5_ParamLimits

0x2cff,	// (0x000525d7) list_highlight_pane_cp5

0xbaea,	// (0x0005b3c2) find_pane_g1

0x3d0e,	// (0x000535e6) input_find_pane

0xbaf3,	// (0x0005b3cb) input_find_pane_g1_ParamLimits

0xbaf3,	// (0x0005b3cb) input_find_pane_g1

0xbaff,	// (0x0005b3d7) input_find_pane_t1_ParamLimits

0xbaff,	// (0x0005b3d7) input_find_pane_t1

0xbb14,	// (0x0005b3ec) input_find_pane_t2_ParamLimits

0xbb14,	// (0x0005b3ec) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0005ef7e) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0005ef7e) input_find_pane_t

0x3d17,	// (0x000535ef) input_focus_pane_cp5_ParamLimits

0x3d17,	// (0x000535ef) input_focus_pane_cp5

0x3d31,	// (0x00053609) bg_popup_window_pane_cp2_ParamLimits

0x3d31,	// (0x00053609) bg_popup_window_pane_cp2

0x3d3e,	// (0x00053616) listscroll_menu_pane_ParamLimits

0x3d3e,	// (0x00053616) listscroll_menu_pane

0xcf97,	// (0x0005c86f) popup_submenu_window_ParamLimits

0xcf97,	// (0x0005c86f) popup_submenu_window

0x3d76,	// (0x0005364e) find_popup_pane_g1

0x3d7e,	// (0x00053656) input_popup_find_pane_cp

0x3d17,	// (0x000535ef) input_focus_pane_cp4_ParamLimits

0x3d17,	// (0x000535ef) input_focus_pane_cp4

0x3d94,	// (0x0005366c) input_popup_find_pane_t1_ParamLimits

0x3d94,	// (0x0005366c) input_popup_find_pane_t1

0x2c1f,	// (0x000524f7) bg_popup_sub_pane_cp

0x3dc2,	// (0x0005369a) listscroll_popup_sub_pane

0x3dca,	// (0x000536a2) list_submenu_pane_ParamLimits

0x3dca,	// (0x000536a2) list_submenu_pane

0x3ddb,	// (0x000536b3) scroll_pane_cp4

0x3de3,	// (0x000536bb) list_single_popup_submenu_pane_ParamLimits

0x3de3,	// (0x000536bb) list_single_popup_submenu_pane

0x3df7,	// (0x000536cf) list_single_popup_submenu_pane_g1

0x3dff,	// (0x000536d7) list_single_popup_submenu_pane_t1_ParamLimits

0x3dff,	// (0x000536d7) list_single_popup_submenu_pane_t1

0x2f7a,	// (0x00052852) bg_active_tab_pane_cp1_ParamLimits

0x2f7a,	// (0x00052852) bg_active_tab_pane_cp1

0x3e14,	// (0x000536ec) tabs_2_active_pane_g1

0xcfd1,	// (0x0005c8a9) tabs_2_active_pane_t1

0x2f7a,	// (0x00052852) bg_passive_tab_pane_cp1_ParamLimits

0x2f7a,	// (0x00052852) bg_passive_tab_pane_cp1

0x3e14,	// (0x000536ec) tabs_2_passive_pane_g1

0xcfd1,	// (0x0005c8a9) tabs_2_passive_pane_t1

0x2cff,	// (0x000525d7) bg_active_tab_pane_cp4

0xcfe3,	// (0x0005c8bb) tabs_2_long_active_pane_t1

0x4c3b,	// (0x00054513) bg_passive_tab_pane_cp4

0x1469,	// (0x00050d41) list_single_midp_graphic_pane_g4_ParamLimits

0x2cff,	// (0x000525d7) bg_active_tab_pane_cp5

0xcff6,	// (0x0005c8ce) tabs_3_long_active_pane_t1

0x4c3b,	// (0x00054513) bg_passive_tab_pane_cp5

0x1469,	// (0x00050d41) list_single_midp_graphic_pane_g4

0x2cff,	// (0x000525d7) bg_popup_window_pane_cp13_ParamLimits

0x2cff,	// (0x000525d7) bg_popup_window_pane_cp13

0x3e76,	// (0x0005374e) listscroll_popup_fast_pane_ParamLimits

0x3e76,	// (0x0005374e) listscroll_popup_fast_pane

0x3e85,	// (0x0005375d) grid_popup_fast_pane_ParamLimits

0x3e85,	// (0x0005375d) grid_popup_fast_pane

0x3e97,	// (0x0005376f) scroll_pane_cp9_ParamLimits

0x3e97,	// (0x0005376f) scroll_pane_cp9

0x7f48,	// (0x00057820) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7f48,	// (0x00057820) list_single_graphic_hl_pane_t1_cp2

0x3ebb,	// (0x00053793) input_focus_pane_cp20_ParamLimits

0x3ebb,	// (0x00053793) input_focus_pane_cp20

0x3ec9,	// (0x000537a1) query_popup_data_pane_t1_ParamLimits

0x3ec9,	// (0x000537a1) query_popup_data_pane_t1

0x3edc,	// (0x000537b4) query_popup_data_pane_t2_ParamLimits

0x3edc,	// (0x000537b4) query_popup_data_pane_t2

0x3f22,	// (0x000537fa) query_popup_data_pane_t3_ParamLimits

0x3f22,	// (0x000537fa) query_popup_data_pane_t3

0x3f63,	// (0x0005383b) query_popup_data_pane_t4_ParamLimits

0x3f63,	// (0x0005383b) query_popup_data_pane_t4

0x3f9f,	// (0x00053877) query_popup_data_pane_t5_ParamLimits

0x3f9f,	// (0x00053877) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0005ef83) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0005ef83) query_popup_data_pane_t

0x3cc6,	// (0x0005359e) bg_set_opt_pane_g1

0x3cce,	// (0x000535a6) bg_set_opt_pane_g2

0x3cd6,	// (0x000535ae) bg_set_opt_pane_g3

0x3cde,	// (0x000535b6) bg_set_opt_pane_g4

0x3ce6,	// (0x000535be) bg_set_opt_pane_g5

0x3cee,	// (0x000535c6) bg_set_opt_pane_g6

0x3cf6,	// (0x000535ce) bg_set_opt_pane_g7

0x3cfe,	// (0x000535d6) bg_set_opt_pane_g8

0x3d06,	// (0x000535de) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0005ef8e) bg_set_opt_pane_g

0x0acd,	// (0x000503a5) control_top_pane_stacon_ParamLimits

0x0acd,	// (0x000503a5) control_top_pane_stacon

0x0b20,	// (0x000503f8) signal_pane_stacon_ParamLimits

0x0b20,	// (0x000503f8) signal_pane_stacon

0x458b,	// (0x00053e63) stacon_top_pane_g1_ParamLimits

0x458b,	// (0x00053e63) stacon_top_pane_g1

0x0b45,	// (0x0005041d) title_pane_stacon_ParamLimits

0x0b45,	// (0x0005041d) title_pane_stacon

0x0b6f,	// (0x00050447) uni_indicator_pane_stacon_ParamLimits

0x0b6f,	// (0x00050447) uni_indicator_pane_stacon

0x0b84,	// (0x0005045c) battery_pane_stacon_ParamLimits

0x0b84,	// (0x0005045c) battery_pane_stacon

0x0bc8,	// (0x000504a0) control_bottom_pane_stacon_ParamLimits

0x0bc8,	// (0x000504a0) control_bottom_pane_stacon

0x0beb,	// (0x000504c3) navi_pane_stacon_ParamLimits

0x0beb,	// (0x000504c3) navi_pane_stacon

0x45ad,	// (0x00053e85) stacon_bottom_pane_g1_ParamLimits

0x45ad,	// (0x00053e85) stacon_bottom_pane_g1

0x07c2,	// (0x0005009a) aid_levels_signal_lsc_ParamLimits

0x07c2,	// (0x0005009a) aid_levels_signal_lsc

0x07d8,	// (0x000500b0) signal_pane_stacon_g1_ParamLimits

0x07d8,	// (0x000500b0) signal_pane_stacon_g1

0x07ec,	// (0x000500c4) signal_pane_stacon_g2_ParamLimits

0x07ec,	// (0x000500c4) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0005efa1) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0005efa1) signal_pane_stacon_g

0x0821,	// (0x000500f9) title_pane_stacon_t1_ParamLimits

0x0821,	// (0x000500f9) title_pane_stacon_t1

0x3fe3,	// (0x000538bb) uni_indicator_pane_stacon_g1

0x3fed,	// (0x000538c5) uni_indicator_pane_stacon_g2

0x3ff7,	// (0x000538cf) uni_indicator_pane_stacon_g3

0x4001,	// (0x000538d9) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0005efad) uni_indicator_pane_stacon_g

0x0846,	// (0x0005011e) control_top_pane_stacon_g1

0x084e,	// (0x00050126) control_top_pane_stacon_t1_ParamLimits

0x084e,	// (0x00050126) control_top_pane_stacon_t1

0x0885,	// (0x0005015d) aid_levels_battery_lsc_ParamLimits

0x0885,	// (0x0005015d) aid_levels_battery_lsc

0x089c,	// (0x00050174) battery_pane_stacon_g1_ParamLimits

0x089c,	// (0x00050174) battery_pane_stacon_g1

0x08af,	// (0x00050187) battery_pane_stacon_g2_ParamLimits

0x08af,	// (0x00050187) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0005efb6) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0005efb6) battery_pane_stacon_g

0x08ed,	// (0x000501c5) navi_icon_pane_stacon

0x0901,	// (0x000501d9) navi_navi_pane_stacon

0x08ed,	// (0x000501c5) navi_text_pane_stacon

0x0846,	// (0x0005011e) control_bottom_pane_stacon_g1

0x0915,	// (0x000501ed) control_bottom_pane_stacon_t1_ParamLimits

0x0915,	// (0x000501ed) control_bottom_pane_stacon_t1

0xd008,	// (0x0005c8e0) grid_app_pane_ParamLimits

0xd008,	// (0x0005c8e0) grid_app_pane

0xd040,	// (0x0005c918) scroll_pane_cp15_ParamLimits

0xd040,	// (0x0005c918) scroll_pane_cp15

0xd055,	// (0x0005c92d) cell_app_pane_ParamLimits

0xd055,	// (0x0005c92d) cell_app_pane

0xd09a,	// (0x0005c972) cell_app_pane_g1_ParamLimits

0xd09a,	// (0x0005c972) cell_app_pane_g1

0x40a0,	// (0x00053978) cell_app_pane_g2_ParamLimits

0x40a0,	// (0x00053978) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0005efbb) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0005efbb) cell_app_pane_g

0xd0ba,	// (0x0005c992) cell_app_pane_t1_ParamLimits

0xd0ba,	// (0x0005c992) cell_app_pane_t1

0x40c3,	// (0x0005399b) grid_highlight_pane_ParamLimits

0x40c3,	// (0x0005399b) grid_highlight_pane

0x3cc6,	// (0x0005359e) cell_highlight_pane_g1

0x3cce,	// (0x000535a6) cell_highlight_pane_g2

0x3cd6,	// (0x000535ae) cell_highlight_pane_g3

0x3cde,	// (0x000535b6) cell_highlight_pane_g4

0x3ce6,	// (0x000535be) cell_highlight_pane_g5

0x3cee,	// (0x000535c6) cell_highlight_pane_g6

0x3cf6,	// (0x000535ce) cell_highlight_pane_g7

0x3cfe,	// (0x000535d6) cell_highlight_pane_g8

0x3d06,	// (0x000535de) cell_highlight_pane_g9

0x2c15,	// (0x000524ed) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0005ef69) cell_highlight_pane_g

0x40d4,	// (0x000539ac) bg_scroll_pane

0x095f,	// (0x00050237) scroll_handle_pane

0x411b,	// (0x000539f3) scroll_bg_pane_g1

0x4130,	// (0x00053a08) scroll_bg_pane_g2

0x4148,	// (0x00053a20) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0005efc0) scroll_bg_pane_g

0x415d,	// (0x00053a35) scroll_handle_focus_pane_ParamLimits

0x415d,	// (0x00053a35) scroll_handle_focus_pane

0x411b,	// (0x000539f3) scroll_handle_pane_g1

0x416a,	// (0x00053a42) scroll_handle_pane_g2

0x4148,	// (0x00053a20) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0005efc7) scroll_handle_pane_g

0x3d17,	// (0x000535ef) bg_popup_sub_pane_cp21_ParamLimits

0x3d17,	// (0x000535ef) bg_popup_sub_pane_cp21

0x417e,	// (0x00053a56) popup_fep_japan_predictive_window_t1_ParamLimits

0x417e,	// (0x00053a56) popup_fep_japan_predictive_window_t1

0x4198,	// (0x00053a70) popup_fep_japan_predictive_window_t2_ParamLimits

0x4198,	// (0x00053a70) popup_fep_japan_predictive_window_t2

0x41cb,	// (0x00053aa3) popup_fep_japan_predictive_window_t3_ParamLimits

0x41cb,	// (0x00053aa3) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0005efce) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0005efce) popup_fep_japan_predictive_window_t

0x2c1f,	// (0x000524f7) bg_popup_sub_pane_cp23

0x4202,	// (0x00053ada) listscroll_japin_cand_pane

0x420a,	// (0x00053ae2) popup_fep_japan_candidate_window_t1

0x4218,	// (0x00053af0) candidate_pane_ParamLimits

0x4218,	// (0x00053af0) candidate_pane

0x422a,	// (0x00053b02) scroll_pane_cp30

0x4232,	// (0x00053b0a) list_single_popup_jap_candidate_pane_ParamLimits

0x4232,	// (0x00053b0a) list_single_popup_jap_candidate_pane

0x2c1f,	// (0x000524f7) list_highlight_pane_cp30

0x4247,	// (0x00053b1f) list_single_popup_jap_candidate_pane_t1

0x4256,	// (0x00053b2e) level_1_signal

0x4268,	// (0x00053b40) level_2_signal

0x427b,	// (0x00053b53) level_3_signal

0x428e,	// (0x00053b66) level_4_signal

0x42a1,	// (0x00053b79) level_5_signal

0x42b4,	// (0x00053b8c) level_6_signal

0x42c7,	// (0x00053b9f) level_7_signal

0x4256,	// (0x00053b2e) level_1_battery

0x4268,	// (0x00053b40) level_2_battery

0x427b,	// (0x00053b53) level_3_battery

0x428e,	// (0x00053b66) level_4_battery

0x42a1,	// (0x00053b79) level_5_battery

0x42b4,	// (0x00053b8c) level_6_battery

0x42c7,	// (0x00053b9f) level_7_battery

0x42f2,	// (0x00053bca) list_menu_pane_ParamLimits

0x42f2,	// (0x00053bca) list_menu_pane

0x4308,	// (0x00053be0) scroll_pane_cp25_ParamLimits

0x4308,	// (0x00053be0) scroll_pane_cp25

0x4321,	// (0x00053bf9) list_double2_graphic_pane_cp2_ParamLimits

0x4321,	// (0x00053bf9) list_double2_graphic_pane_cp2

0x4321,	// (0x00053bf9) list_double2_large_graphic_pane_cp2_ParamLimits

0x4321,	// (0x00053bf9) list_double2_large_graphic_pane_cp2

0x4321,	// (0x00053bf9) list_double2_pane_cp2_ParamLimits

0x4321,	// (0x00053bf9) list_double2_pane_cp2

0x4321,	// (0x00053bf9) list_double_graphic_pane_cp2_ParamLimits

0x4321,	// (0x00053bf9) list_double_graphic_pane_cp2

0x4321,	// (0x00053bf9) list_double_large_graphic_pane_cp2_ParamLimits

0x4321,	// (0x00053bf9) list_double_large_graphic_pane_cp2

0x4321,	// (0x00053bf9) list_double_number_pane_cp2_ParamLimits

0x4321,	// (0x00053bf9) list_double_number_pane_cp2

0x4321,	// (0x00053bf9) list_double_pane_cp2_ParamLimits

0x4321,	// (0x00053bf9) list_double_pane_cp2

0xd0d1,	// (0x0005c9a9) list_single_2graphic_pane_cp2_ParamLimits

0xd0d1,	// (0x0005c9a9) list_single_2graphic_pane_cp2

0xd0d1,	// (0x0005c9a9) list_single_graphic_heading_pane_cp2_ParamLimits

0xd0d1,	// (0x0005c9a9) list_single_graphic_heading_pane_cp2

0xd0d1,	// (0x0005c9a9) list_single_graphic_pane_cp2_ParamLimits

0xd0d1,	// (0x0005c9a9) list_single_graphic_pane_cp2

0xd0d1,	// (0x0005c9a9) list_single_heading_pane_cp2_ParamLimits

0xd0d1,	// (0x0005c9a9) list_single_heading_pane_cp2

0x435e,	// (0x00053c36) list_single_large_graphic_pane_cp2_ParamLimits

0x435e,	// (0x00053c36) list_single_large_graphic_pane_cp2

0xd0d1,	// (0x0005c9a9) list_single_number_heading_pane_cp2_ParamLimits

0xd0d1,	// (0x0005c9a9) list_single_number_heading_pane_cp2

0xd0d1,	// (0x0005c9a9) list_single_number_pane_cp2_ParamLimits

0xd0d1,	// (0x0005c9a9) list_single_number_pane_cp2

0xd0d1,	// (0x0005c9a9) list_single_pane_cp2_ParamLimits

0xd0d1,	// (0x0005c9a9) list_single_pane_cp2

0x43da,	// (0x00053cb2) bg_popup_sub_pane_cp22

0x0a11,	// (0x000502e9) popup_side_volume_key_window_g1

0x0a3b,	// (0x00050313) popup_side_volume_key_window_t1

0x0a57,	// (0x0005032f) volume_small_pane_cp1

0x2f7a,	// (0x00052852) bg_popup_sub_pane_cp24_ParamLimits

0x2f7a,	// (0x00052852) bg_popup_sub_pane_cp24

0x43f0,	// (0x00053cc8) fep_china_uni_candidate_pane_ParamLimits

0x43f0,	// (0x00053cc8) fep_china_uni_candidate_pane

0x4404,	// (0x00053cdc) fep_china_uni_entry_pane

0x4414,	// (0x00053cec) popup_fep_china_uni_window_g1

0x4430,	// (0x00053d08) fep_china_uni_entry_pane_g1

0x4438,	// (0x00053d10) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0005efff) fep_china_uni_entry_pane_g

0x4440,	// (0x00053d18) fep_entry_item_pane

0x444a,	// (0x00053d22) fep_candidate_item_pane

0x4452,	// (0x00053d2a) fep_china_uni_candidate_pane_g1

0x445a,	// (0x00053d32) fep_china_uni_candidate_pane_g2

0x4462,	// (0x00053d3a) fep_china_uni_candidate_pane_g3

0x446a,	// (0x00053d42) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0005f004) fep_china_uni_candidate_pane_g

0x2c15,	// (0x000524ed) fep_entry_item_pane_g1

0x4472,	// (0x00053d4a) fep_entry_item_pane_t1_ParamLimits

0x4472,	// (0x00053d4a) fep_entry_item_pane_t1

0x4488,	// (0x00053d60) fep_candidate_item_pane_t1_ParamLimits

0x4488,	// (0x00053d60) fep_candidate_item_pane_t1

0x449d,	// (0x00053d75) fep_candidate_item_pane_t2_ParamLimits

0x449d,	// (0x00053d75) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0005f00d) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0005f00d) fep_candidate_item_pane_t

0x2cff,	// (0x000525d7) list_highlight_pane_cp31_ParamLimits

0x2cff,	// (0x000525d7) list_highlight_pane_cp31

0x44af,	// (0x00053d87) level_1_signal_lsc

0x44b8,	// (0x00053d90) level_2_signal_lsc

0x44c1,	// (0x00053d99) level_3_signal_lsc

0x44ca,	// (0x00053da2) level_4_signal_lsc

0x44d3,	// (0x00053dab) level_5_signal_lsc

0x44dc,	// (0x00053db4) level_6_signal_lsc

0x44e5,	// (0x00053dbd) level_7_signal_lsc

0x44e5,	// (0x00053dbd) level_1_battery_lsc

0x44ee,	// (0x00053dc6) level_2_battery_lsc

0x44f7,	// (0x00053dcf) level_3_battery_lsc

0x4500,	// (0x00053dd8) level_4_battery_lsc

0x4509,	// (0x00053de1) level_5_battery_lsc

0x4512,	// (0x00053dea) level_6_battery_lsc

0x44af,	// (0x00053d87) level_7_battery_lsc

0x451b,	// (0x00053df3) scroll_handle_focus_pane_g1

0x4524,	// (0x00053dfc) scroll_handle_focus_pane_g2

0x452d,	// (0x00053e05) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0005f012) scroll_handle_focus_pane_g

0xbb32,	// (0x0005b40a) list_single_2graphic_pane_g1_ParamLimits

0xbb32,	// (0x0005b40a) list_single_2graphic_pane_g1

0xb5b0,	// (0x0005ae88) list_single_2graphic_pane_g2_ParamLimits

0xb5b0,	// (0x0005ae88) list_single_2graphic_pane_g2

0x3131,	// (0x00052a09) list_single_2graphic_pane_g3_ParamLimits

0x3131,	// (0x00052a09) list_single_2graphic_pane_g3

0xbb3e,	// (0x0005b416) list_single_2graphic_pane_g4_ParamLimits

0xbb3e,	// (0x0005b416) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0005f019) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0005f019) list_single_2graphic_pane_g

0xbb4a,	// (0x0005b422) list_single_2graphic_pane_t1_ParamLimits

0xbb4a,	// (0x0005b422) list_single_2graphic_pane_t1

0xbb78,	// (0x0005b450) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbb78,	// (0x0005b450) list_double2_graphic_large_graphic_pane_g1

0xb7af,	// (0x0005b087) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb7af,	// (0x0005b087) list_double2_graphic_large_graphic_pane_g2

0xb6fd,	// (0x0005afd5) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb6fd,	// (0x0005afd5) list_double2_graphic_large_graphic_pane_g3

0xbb8a,	// (0x0005b462) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbb8a,	// (0x0005b462) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0005f022) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0005f022) list_double2_graphic_large_graphic_pane_g

0xbb96,	// (0x0005b46e) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbb96,	// (0x0005b46e) list_double2_graphic_large_graphic_pane_t1

0xbbac,	// (0x0005b484) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbbac,	// (0x0005b484) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0005f02b) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0005f02b) list_double2_graphic_large_graphic_pane_t

0x4675,	// (0x00053f4d) popup_fast_swap_window_ParamLimits

0x4675,	// (0x00053f4d) popup_fast_swap_window

0x4691,	// (0x00053f69) popup_side_volume_key_window

0x46ad,	// (0x00053f85) stacon_top_pane

0x46b7,	// (0x00053f8f) status_pane_ParamLimits

0x46b7,	// (0x00053f8f) status_pane

0xd18e,	// (0x0005ca66) status_small_pane

0x2c1f,	// (0x000524f7) control_pane

0x2c1f,	// (0x000524f7) stacon_bottom_pane

0x3c5a,	// (0x00053532) scroll_pane_cp121

0x3c51,	// (0x00053529) set_content_pane

0x4536,	// (0x00053e0e) bg_active_tab_pane_g1_cp1

0x453f,	// (0x00053e17) bg_active_tab_pane_g2_cp1

0x4548,	// (0x00053e20) bg_active_tab_pane_g3_cp1

0x4536,	// (0x00053e0e) bg_passive_tab_pane_g1_cp1

0x453f,	// (0x00053e17) bg_passive_tab_pane_g2_cp1

0x4548,	// (0x00053e20) bg_passive_tab_pane_g3_cp1

0x4551,	// (0x00053e29) bg_active_tab_pane_g1_cp2

0x453f,	// (0x00053e17) bg_active_tab_pane_g2_cp2

0x455a,	// (0x00053e32) bg_active_tab_pane_g3_cp2

0x4551,	// (0x00053e29) bg_passive_tab_pane_g1_cp2

0x453f,	// (0x00053e17) bg_passive_tab_pane_g2_cp2

0x455a,	// (0x00053e32) bg_passive_tab_pane_g3_cp2

0x4563,	// (0x00053e3b) bg_active_tab_pane_g1_cp3

0x453f,	// (0x00053e17) bg_active_tab_pane_g2_cp3

0x456c,	// (0x00053e44) bg_active_tab_pane_g3_cp3

0x4563,	// (0x00053e3b) bg_passive_tab_pane_g1_cp3

0x453f,	// (0x00053e17) bg_passive_tab_pane_g2_cp3

0x456c,	// (0x00053e44) bg_passive_tab_pane_g3_cp3

0x4575,	// (0x00053e4d) bg_active_tab_pane_g1_cp4

0x453f,	// (0x00053e17) bg_active_tab_pane_g2_cp4

0x4580,	// (0x00053e58) bg_active_tab_pane_g3_cp4

0x4575,	// (0x00053e4d) bg_passive_tab_pane_g1_cp4

0x453f,	// (0x00053e17) bg_passive_tab_pane_g2_cp4

0x4580,	// (0x00053e58) bg_passive_tab_pane_g3_cp4

0x45c9,	// (0x00053ea1) bg_active_tab_pane_g1_cp5

0x453f,	// (0x00053e17) bg_active_tab_pane_g2_cp5

0x45d2,	// (0x00053eaa) bg_active_tab_pane_g3_cp5

0x45c9,	// (0x00053ea1) bg_passive_tab_pane_g1_cp5

0x453f,	// (0x00053e17) bg_passive_tab_pane_g2_cp5

0x45d2,	// (0x00053eaa) bg_passive_tab_pane_g3_cp5

0x6c2a,	// (0x00056502) list_set_graphic_pane_ParamLimits

0x6c2a,	// (0x00056502) list_set_graphic_pane

0x2c1f,	// (0x000524f7) bg_set_opt_pane_cp4

0xd15e,	// (0x0005ca36) list_set_graphic_pane_g1_ParamLimits

0xd15e,	// (0x0005ca36) list_set_graphic_pane_g1

0xd16a,	// (0x0005ca42) list_set_graphic_pane_g2_ParamLimits

0xd16a,	// (0x0005ca42) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0005f030) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0005f030) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x0005f399) volume_small_pane_cp_g

0x4628,	// (0x00053f00) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4628,	// (0x00053f00) list_double2_large_graphic_pane_g1_cp2

0x4634,	// (0x00053f0c) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4634,	// (0x00053f0c) list_double2_large_graphic_pane_g2_cp2

0x4645,	// (0x00053f1d) list_double2_large_graphic_pane_g3_cp2

0x464d,	// (0x00053f25) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x464d,	// (0x00053f25) list_double2_large_graphic_pane_t1_cp2

0x4663,	// (0x00053f3b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4663,	// (0x00053f3b) list_double2_large_graphic_pane_t2_cp2

0x6233,	// (0x00055b0b) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6233,	// (0x00055b0b) list_double_large_graphic_pane_g1_cp2

0x6244,	// (0x00055b1c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6244,	// (0x00055b1c) list_double_large_graphic_pane_g2_cp2

0x47de,	// (0x000540b6) list_double_large_graphic_pane_g3_cp2

0x6255,	// (0x00055b2d) list_double_large_graphic_pane_g4_cp

0x625d,	// (0x00055b35) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x625d,	// (0x00055b35) list_double_large_graphic_pane_t1_cp2

0x6274,	// (0x00055b4c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6274,	// (0x00055b4c) list_double_large_graphic_pane_t2_cp2

0x46d0,	// (0x00053fa8) list_double2_graphic_pane_g1_cp2_ParamLimits

0x46d0,	// (0x00053fa8) list_double2_graphic_pane_g1_cp2

0x46de,	// (0x00053fb6) list_double2_graphic_pane_g2_cp2_ParamLimits

0x46de,	// (0x00053fb6) list_double2_graphic_pane_g2_cp2

0x46ef,	// (0x00053fc7) list_double2_graphic_pane_g3_cp2

0x46f9,	// (0x00053fd1) list_double2_graphic_pane_t1_cp2_ParamLimits

0x46f9,	// (0x00053fd1) list_double2_graphic_pane_t1_cp2

0x470f,	// (0x00053fe7) list_double2_graphic_pane_t2_cp2_ParamLimits

0x470f,	// (0x00053fe7) list_double2_graphic_pane_t2_cp2

0x4721,	// (0x00053ff9) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4721,	// (0x00053ff9) list_single_number_heading_pane_g1_cp2

0x472d,	// (0x00054005) list_single_number_heading_pane_g2_cp2

0x4735,	// (0x0005400d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4735,	// (0x0005400d) list_single_number_heading_pane_t1_cp2

0x474b,	// (0x00054023) list_single_number_heading_pane_t2_cp2_ParamLimits

0x474b,	// (0x00054023) list_single_number_heading_pane_t2_cp2

0x475d,	// (0x00054035) list_single_number_heading_pane_t3_cp2_ParamLimits

0x475d,	// (0x00054035) list_single_number_heading_pane_t3_cp2

0x4721,	// (0x00053ff9) list_single_heading_pane_g1_cp2_ParamLimits

0x4721,	// (0x00053ff9) list_single_heading_pane_g1_cp2

0x472d,	// (0x00054005) list_single_heading_pane_g2_cp2

0x4735,	// (0x0005400d) list_single_heading_pane_t1_cp2_ParamLimits

0x4735,	// (0x0005400d) list_single_heading_pane_t1_cp2

0x603b,	// (0x00055913) list_single_heading_pane_t2_cp2_ParamLimits

0x603b,	// (0x00055913) list_single_heading_pane_t2_cp2

0x5f83,	// (0x0005585b) list_double_graphic_pane_g1_cp2_ParamLimits

0x5f83,	// (0x0005585b) list_double_graphic_pane_g1_cp2

0x5f8f,	// (0x00055867) list_double_graphic_pane_g2_cp2_ParamLimits

0x5f8f,	// (0x00055867) list_double_graphic_pane_g2_cp2

0x5f9e,	// (0x00055876) list_double_graphic_pane_g3_cp2

0x5fa6,	// (0x0005587e) list_double_graphic_pane_t1_cp2_ParamLimits

0x5fa6,	// (0x0005587e) list_double_graphic_pane_t1_cp2

0x5fbc,	// (0x00055894) list_double_graphic_pane_t2_cp2_ParamLimits

0x5fbc,	// (0x00055894) list_double_graphic_pane_t2_cp2

0x47d2,	// (0x000540aa) list_double_number_pane_g1_cp2_ParamLimits

0x47d2,	// (0x000540aa) list_double_number_pane_g1_cp2

0x47de,	// (0x000540b6) list_double_number_pane_g2_cp2

0x5f47,	// (0x0005581f) list_double_number_pane_t1_cp2_ParamLimits

0x5f47,	// (0x0005581f) list_double_number_pane_t1_cp2

0x5f5b,	// (0x00055833) list_double_number_pane_t2_cp2_ParamLimits

0x5f5b,	// (0x00055833) list_double_number_pane_t2_cp2

0x5f71,	// (0x00055849) list_double_number_pane_t3_cp2_ParamLimits

0x5f71,	// (0x00055849) list_double_number_pane_t3_cp2

0x5e30,	// (0x00055708) list_single_graphic_pane_g1_cp2_ParamLimits

0x5e30,	// (0x00055708) list_single_graphic_pane_g1_cp2

0x4836,	// (0x0005410e) list_single_graphic_pane_g2_cp2_ParamLimits

0x4836,	// (0x0005410e) list_single_graphic_pane_g2_cp2

0x4842,	// (0x0005411a) list_single_graphic_pane_g3_cp2

0x5e06,	// (0x000556de) list_single_graphic_pane_t1_cp2_ParamLimits

0x5e06,	// (0x000556de) list_single_graphic_pane_t1_cp2

0x4836,	// (0x0005410e) list_single_number_pane_g1_cp2_ParamLimits

0x4836,	// (0x0005410e) list_single_number_pane_g1_cp2

0x4842,	// (0x0005411a) list_single_number_pane_g2_cp2

0x5e06,	// (0x000556de) list_single_number_pane_t1_cp2_ParamLimits

0x5e06,	// (0x000556de) list_single_number_pane_t1_cp2

0x5e1c,	// (0x000556f4) list_single_number_pane_t2_cp2_ParamLimits

0x5e1c,	// (0x000556f4) list_single_number_pane_t2_cp2

0x4634,	// (0x00053f0c) list_double2_pane_g1_cp2_ParamLimits

0x4634,	// (0x00053f0c) list_double2_pane_g1_cp2

0x4645,	// (0x00053f1d) list_double2_pane_g2_cp2

0x47aa,	// (0x00054082) list_double2_pane_t1_cp2_ParamLimits

0x47aa,	// (0x00054082) list_double2_pane_t1_cp2

0x47c0,	// (0x00054098) list_double2_pane_t2_cp2_ParamLimits

0x47c0,	// (0x00054098) list_double2_pane_t2_cp2

0x47d2,	// (0x000540aa) list_double_pane_g1_cp2_ParamLimits

0x47d2,	// (0x000540aa) list_double_pane_g1_cp2

0x47de,	// (0x000540b6) list_double_pane_g2_cp2

0x47e6,	// (0x000540be) list_double_pane_t1_cp2_ParamLimits

0x47e6,	// (0x000540be) list_double_pane_t1_cp2

0x47fc,	// (0x000540d4) list_double_pane_t2_cp2_ParamLimits

0x47fc,	// (0x000540d4) list_double_pane_t2_cp2

0x4826,	// (0x000540fe) list_single_pane_cp2_g3

0x4836,	// (0x0005410e) list_single_pane_g1_cp2_ParamLimits

0x4836,	// (0x0005410e) list_single_pane_g1_cp2

0x4842,	// (0x0005411a) list_single_pane_g2_cp2

0x484a,	// (0x00054122) list_single_pane_t1_cp2_ParamLimits

0x484a,	// (0x00054122) list_single_pane_t1_cp2

0x4862,	// (0x0005413a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4862,	// (0x0005413a) list_single_large_graphic_pane_g1_cp2

0x486e,	// (0x00054146) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x486e,	// (0x00054146) list_single_large_graphic_pane_g2_cp2

0x487a,	// (0x00054152) list_single_large_graphic_pane_g3_cp2

0x4882,	// (0x0005415a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4882,	// (0x0005415a) list_single_large_graphic_pane_g4_cp1

0x489c,	// (0x00054174) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x489c,	// (0x00054174) list_single_large_graphic_pane_t1_cp2

0x5dd2,	// (0x000556aa) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5dd2,	// (0x000556aa) list_single_graphic_heading_pane_g1_cp2

0x5d9f,	// (0x00055677) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5d9f,	// (0x00055677) list_single_graphic_heading_pane_g4_cp2

0x4842,	// (0x0005411a) list_single_graphic_heading_pane_g5_cp2

0x5dde,	// (0x000556b6) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5dde,	// (0x000556b6) list_single_graphic_heading_pane_t1_cp2

0x5df4,	// (0x000556cc) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5df4,	// (0x000556cc) list_single_graphic_heading_pane_t2_cp2

0x5d93,	// (0x0005566b) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5d93,	// (0x0005566b) list_single_2graphic_pane_g1_cp2

0x5d9f,	// (0x00055677) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5d9f,	// (0x00055677) list_single_2graphic_pane_g2_cp2

0x4842,	// (0x0005411a) list_single_2graphic_pane_g3_cp2

0x5db0,	// (0x00055688) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5db0,	// (0x00055688) list_single_2graphic_pane_g4_cp2

0x5dbc,	// (0x00055694) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5dbc,	// (0x00055694) list_single_2graphic_pane_t1_cp2

0x2c15,	// (0x000524ed) list_highlight_pane_g10_cp1

0x595f,	// (0x00055237) list_highlight_pane_g1_cp1

0x5967,	// (0x0005523f) list_highlight_pane_g2_cp1

0x596f,	// (0x00055247) list_highlight_pane_g3_cp1

0x5977,	// (0x0005524f) list_highlight_pane_g4_cp1

0x597f,	// (0x00055257) list_highlight_pane_g5_cp1

0x5987,	// (0x0005525f) list_highlight_pane_g6_cp1

0x598f,	// (0x00055267) list_highlight_pane_g7_cp1

0x5997,	// (0x0005526f) list_highlight_pane_g8_cp1

0x599f,	// (0x00055277) list_highlight_pane_g9_cp1

0xd86a,	// (0x0005d142) form_field_slider_pane_t3

0xd878,	// (0x0005d150) form_field_slider_pane_t4

0x589b,	// (0x00055173) slider_form_pane_ParamLimits

0x589b,	// (0x00055173) slider_form_pane

0x2c1f,	// (0x000524f7) control_abbreviations

0x2c1f,	// (0x000524f7) control_conventions

0x2c1f,	// (0x000524f7) control_definitions

0x2c1f,	// (0x000524f7) format_table_attribute

0x6085,	// (0x0005595d) bg_popup_preview_window_pane_g9

0x2c1f,	// (0x000524f7) format_table_data2

0x2c1f,	// (0x000524f7) format_table_data3

0x2c1f,	// (0x000524f7) format_table_data_example

0x0008,

0x2c1f,	// (0x000524f7) intro_purpose

0xf8ef,	// (0x0005f1c7) bg_popup_preview_window_pane_g

0x2c1f,	// (0x000524f7) texts_category

0x2c1f,	// (0x000524f7) texts_graphics

0x48b2,	// (0x0005418a) text_digital

0x48c1,	// (0x00054199) text_primary

0x48d0,	// (0x000541a8) text_primary_small

0x48df,	// (0x000541b7) text_secondary

0x48ee,	// (0x000541c6) text_title

0x676b,	// (0x00056043) bg_passive_tab_pane_g1_cp3_srt

0x453f,	// (0x00053e17) bg_passive_tab_pane_g2_cp3_srt

0x6774,	// (0x0005604c) bg_passive_tab_pane_g3_cp3_srt

0x2f7a,	// (0x00052852) bg_active_tab_pane_cp3_srt_ParamLimits

0x2f7a,	// (0x00052852) bg_active_tab_pane_cp3_srt

0x677d,	// (0x00056055) tabs_4_active_pane_srt_g1

0xdbad,	// (0x0005d485) tabs_4_active_pane_srt_t1_ParamLimits

0xdbad,	// (0x0005d485) tabs_4_active_pane_srt_t1

0x676b,	// (0x00056043) bg_active_tab_pane_g1_cp3_copy1

0x453f,	// (0x00053e17) bg_active_tab_pane_g2_cp3_copy1

0x6774,	// (0x0005604c) bg_active_tab_pane_g3_cp3_copy1

0x2cff,	// (0x000525d7) tabs_2_long_active_pane_srt_ParamLimits

0x2cff,	// (0x000525d7) tabs_2_long_active_pane_srt

0x2cff,	// (0x000525d7) tabs_2_long_passive_pane_srt_ParamLimits

0x2cff,	// (0x000525d7) tabs_2_long_passive_pane_srt

0x4c3b,	// (0x00054513) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4c3b,	// (0x00054513) bg_passive_tab_pane_cp4_srt

0x64b4,	// (0x00055d8c) bg_passive_tab_pane_g1_cp4_srt

0x453f,	// (0x00053e17) bg_passive_tab_pane_g2_cp4_srt

0x64bd,	// (0x00055d95) bg_passive_tab_pane_g3_cp4_srt

0x2cff,	// (0x000525d7) bg_active_tab_pane_cp4_srt_ParamLimits

0x2cff,	// (0x000525d7) bg_active_tab_pane_cp4_srt

0xd9d7,	// (0x0005d2af) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd9d7,	// (0x0005d2af) tabs_2_long_active_pane_srt_t1

0x64b4,	// (0x00055d8c) bg_active_tab_pane_g1_cp4_srt

0x453f,	// (0x00053e17) bg_active_tab_pane_g2_cp4_srt

0x64bd,	// (0x00055d95) bg_active_tab_pane_g3_cp4_srt

0x2f7a,	// (0x00052852) tabs_3_long_active_pane_srt_ParamLimits

0x2f7a,	// (0x00052852) tabs_3_long_active_pane_srt

0x2f7a,	// (0x00052852) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2f7a,	// (0x00052852) tabs_3_long_passive_pane_cp_srt

0x2f7a,	// (0x00052852) tabs_3_long_passive_pane_srt_ParamLimits

0x2f7a,	// (0x00052852) tabs_3_long_passive_pane_srt

0x4c3b,	// (0x00054513) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4c3b,	// (0x00054513) bg_passive_tab_pane_cp5_srt

0x45c9,	// (0x00053ea1) bg_passive_tab_pane_g1_cp5_srt

0x453f,	// (0x00053e17) bg_passive_tab_pane_g2_cp5_srt

0x45d2,	// (0x00053eaa) bg_passive_tab_pane_g3_cp5_srt

0x2cff,	// (0x000525d7) bg_active_tab_pane_cp5_srt_ParamLimits

0x2cff,	// (0x000525d7) bg_active_tab_pane_cp5_srt

0xd9c1,	// (0x0005d299) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd9c1,	// (0x0005d299) tabs_3_long_active_pane_srt_t1

0x45c9,	// (0x00053ea1) bg_active_tab_pane_g1_cp5_srt

0x453f,	// (0x00053e17) bg_active_tab_pane_g2_cp5_srt

0x45d2,	// (0x00053eaa) bg_active_tab_pane_g3_cp5_srt

0x6494,	// (0x00055d6c) navi_text_pane_srt_t1

0x648c,	// (0x00055d64) navi_icon_pane_srt_g1

0x4ab7,	// (0x0005438f) midp_editing_number_pane_srt

0x48fd,	// (0x000541d5) midp_ticker_pane_srt

0x4abf,	// (0x00054397) midp_ticker_pane_srt_g1

0x4ac7,	// (0x0005439f) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0005f04f) midp_ticker_pane_srt_g

0x4acf,	// (0x000543a7) midp_ticker_pane_srt_t1

0x647d,	// (0x00055d55) midp_editing_number_pane_t1_copy1

0x4c3b,	// (0x00054513) listscroll_midp_pane

0x4c3b,	// (0x00054513) midp_form_pane

0x4969,	// (0x00054241) midp_info_popup_window_ParamLimits

0x4969,	// (0x00054241) midp_info_popup_window

0x3d17,	// (0x000535ef) bg_popup_sub_pane_cp50_ParamLimits

0x3d17,	// (0x000535ef) bg_popup_sub_pane_cp50

0x5597,	// (0x00054e6f) listscroll_midp_info_pane_ParamLimits

0x5597,	// (0x00054e6f) listscroll_midp_info_pane

0x557f,	// (0x00054e57) listscroll_form_midp_pane_ParamLimits

0x557f,	// (0x00054e57) listscroll_form_midp_pane

0x558b,	// (0x00054e63) scroll_bar_cp050

0xd85e,	// (0x0005d136) list_midp_pane

0x71c1,	// (0x00056a99) signal_pane_g2_cp

0x5499,	// (0x00054d71) listscroll_midp_info_pane_t1_ParamLimits

0x5499,	// (0x00054d71) listscroll_midp_info_pane_t1

0x54b1,	// (0x00054d89) listscroll_midp_info_pane_t2_ParamLimits

0x54b1,	// (0x00054d89) listscroll_midp_info_pane_t2

0x54ef,	// (0x00054dc7) listscroll_midp_info_pane_t3_ParamLimits

0x54ef,	// (0x00054dc7) listscroll_midp_info_pane_t3

0x5529,	// (0x00054e01) listscroll_midp_info_pane_t4_ParamLimits

0x5529,	// (0x00054e01) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0005f102) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0005f102) listscroll_midp_info_pane_t

0x3ddb,	// (0x000536b3) scroll_pane_cp21

0x5437,	// (0x00054d0f) form_midp_field_choice_group_pane

0x5440,	// (0x00054d18) form_midp_field_text_pane

0x547f,	// (0x00054d57) form_midp_field_time_pane

0x5487,	// (0x00054d5f) form_midp_gauge_slider_pane

0x5490,	// (0x00054d68) form_midp_gauge_wait_pane

0x2c1f,	// (0x000524f7) form_midp_image_pane

0xc46d,	// (0x0005bd45) list_single_midp_pane_ParamLimits

0xc46d,	// (0x0005bd45) list_single_midp_pane

0xd83c,	// (0x0005d114) form_midp_field_text_pane_t1

0x51b9,	// (0x00054a91) input_focus_pane_cp050

0x5426,	// (0x00054cfe) list_midp_form_text_pane

0x53be,	// (0x00054c96) form_midp_field_choice_group_pane_t1

0x53cc,	// (0x00054ca4) input_focus_pane_cp051

0x53e0,	// (0x00054cb8) list_midp_choice_pane

0x2c1f,	// (0x000524f7) status_idle_pane

0x53a2,	// (0x00054c7a) form_midp_field_time_pane_t1

0x2c15,	// (0x000524ed) wait_anim_pane_g2_copy1

0x53b0,	// (0x00054c88) form_midp_field_time_pane_t2

0x0001,

0x4a17,	// (0x000542ef) aid_navinavi_width_2_pane

0xf825,	// (0x0005f0fd) form_midp_field_time_pane_t

0x2c1f,	// (0x000524f7) input_focus_pane_cp052

0x2c1f,	// (0x000524f7) bg_input_focus_pane_cp040

0x5362,	// (0x00054c3a) form_midp_gauge_slider_pane_t1

0x5370,	// (0x00054c48) form_midp_gauge_slider_pane_t2

0xd820,	// (0x0005d0f8) form_midp_gauge_slider_pane_t3

0xd82e,	// (0x0005d106) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0005f0f4) form_midp_gauge_slider_pane_t

0x539a,	// (0x00054c72) form_midp_slider_pane

0x2cff,	// (0x000525d7) bg_input_focus_pane_cp041_ParamLimits

0x2cff,	// (0x000525d7) bg_input_focus_pane_cp041

0x532f,	// (0x00054c07) form_midp_gauge_wait_pane_t1_ParamLimits

0x532f,	// (0x00054c07) form_midp_gauge_wait_pane_t1

0x5341,	// (0x00054c19) form_midp_gauge_wait_pane_t2_ParamLimits

0x5341,	// (0x00054c19) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0005f0ef) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0005f0ef) form_midp_gauge_wait_pane_t

0x5353,	// (0x00054c2b) form_midp_wait_pane_ParamLimits

0x5353,	// (0x00054c2b) form_midp_wait_pane

0x52f9,	// (0x00054bd1) form_midp_image_pane_g1

0x5302,	// (0x00054bda) form_midp_image_pane_t1

0x5311,	// (0x00054be9) form_midp_image_pane_t2

0x5320,	// (0x00054bf8) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0005f0e8) form_midp_image_pane_t

0x52f0,	// (0x00054bc8) list_single_midp_pane_g1

0x15f0,	// (0x00050ec8) list_single_midp_pane_t1

0xd80b,	// (0x0005d0e3) list_midp_form_item_pane_ParamLimits

0xd80b,	// (0x0005d0e3) list_midp_form_item_pane

0x49bf,	// (0x00054297) list_midp_form_item_pane_t1

0x49ce,	// (0x000542a6) midp_ticker_pane_g1

0x49da,	// (0x000542b2) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0005f035) midp_ticker_pane_g

0x49e6,	// (0x000542be) midp_ticker_pane_t1

0x66ce,	// (0x00055fa6) midp_editing_number_pane_t1

0x66ac,	// (0x00055f84) midp_editing_number_pane

0x66bb,	// (0x00055f93) midp_ticker_pane

0x646d,	// (0x00055d45) ai_message_heading_pane

0x2c1f,	// (0x000524f7) bg_popup_window_pane_cp14

0x6475,	// (0x00055d4d) listscroll_ai_message_pane

0x63f7,	// (0x00055ccf) ai_message_heading_pane_g1_ParamLimits

0x63f7,	// (0x00055ccf) ai_message_heading_pane_g1

0x6403,	// (0x00055cdb) ai_message_heading_pane_g2_ParamLimits

0x6403,	// (0x00055cdb) ai_message_heading_pane_g2

0x640f,	// (0x00055ce7) ai_message_heading_pane_g3_ParamLimits

0x640f,	// (0x00055ce7) ai_message_heading_pane_g3

0x641b,	// (0x00055cf3) ai_message_heading_pane_g4_ParamLimits

0x641b,	// (0x00055cf3) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0005f229) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0005f229) ai_message_heading_pane_g

0x6427,	// (0x00055cff) ai_message_heading_pane_t1_ParamLimits

0x6427,	// (0x00055cff) ai_message_heading_pane_t1

0x6441,	// (0x00055d19) ai_message_heading_pane_t2_ParamLimits

0x6441,	// (0x00055d19) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0005f232) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0005f232) ai_message_heading_pane_t

0x6453,	// (0x00055d2b) bg_popup_heading_pane_cp1_ParamLimits

0x6453,	// (0x00055d2b) bg_popup_heading_pane_cp1

0x63e5,	// (0x00055cbd) list_ai_message_pane_ParamLimits

0x63e5,	// (0x00055cbd) list_ai_message_pane

0x3ddb,	// (0x000536b3) scroll_pane_cp10

0x6381,	// (0x00055c59) list_ai_message_pane_g1

0x6389,	// (0x00055c61) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0005f206) list_ai_message_pane_g

0x6391,	// (0x00055c69) list_ai_message_pane_t1_ParamLimits

0x6391,	// (0x00055c69) list_ai_message_pane_t1

0x63a6,	// (0x00055c7e) list_ai_message_pane_t2_ParamLimits

0x63a6,	// (0x00055c7e) list_ai_message_pane_t2

0x63bb,	// (0x00055c93) list_ai_message_pane_t3_ParamLimits

0x63bb,	// (0x00055c93) list_ai_message_pane_t3

0x63d0,	// (0x00055ca8) list_ai_message_pane_t4_ParamLimits

0x63d0,	// (0x00055ca8) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0005f20b) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0005f20b) list_ai_message_pane_t

0xd9a0,	// (0x0005d278) cell_ai_soft_ind_pane_ParamLimits

0xd9a0,	// (0x0005d278) cell_ai_soft_ind_pane

0x49f8,	// (0x000542d0) cell_ai_soft_ind_pane_g1_ParamLimits

0x49f8,	// (0x000542d0) cell_ai_soft_ind_pane_g1

0x2c1f,	// (0x000524f7) grid_highlight_cp1

0x4a05,	// (0x000542dd) text_secondary_cp56_ParamLimits

0x4a05,	// (0x000542dd) text_secondary_cp56

0x6341,	// (0x00055c19) example_general_pane_ParamLimits

0x6341,	// (0x00055c19) example_general_pane

0x634d,	// (0x00055c25) example_parent_pane_g1_ParamLimits

0x634d,	// (0x00055c25) example_parent_pane_g1

0x6359,	// (0x00055c31) example_parent_pane_t1_ParamLimits

0x6359,	// (0x00055c31) example_parent_pane_t1

0xc117,	// (0x0005b9ef) popup_preview_text_window_ParamLimits

0xc117,	// (0x0005b9ef) popup_preview_text_window

0x482e,	// (0x00054106) list_single_pane_cp2_g4

0x3030,	// (0x00052908) bg_popup_preview_window_pane_ParamLimits

0x3030,	// (0x00052908) bg_popup_preview_window_pane

0x608d,	// (0x00055965) popup_preview_text_window_t1_ParamLimits

0x608d,	// (0x00055965) popup_preview_text_window_t1

0x60ab,	// (0x00055983) popup_preview_text_window_t2_ParamLimits

0x60ab,	// (0x00055983) popup_preview_text_window_t2

0x60f4,	// (0x000559cc) popup_preview_text_window_t3_ParamLimits

0x60f4,	// (0x000559cc) popup_preview_text_window_t3

0x6139,	// (0x00055a11) popup_preview_text_window_t4_ParamLimits

0x6139,	// (0x00055a11) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0005f1da) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0005f1da) popup_preview_text_window_t

0x61b7,	// (0x00055a8f) scroll_pane_cp11

0x5145,	// (0x00054a1d) bg_popup_preview_window_pane_g1

0x604d,	// (0x00055925) bg_popup_preview_window_pane_g2

0x6055,	// (0x0005592d) bg_popup_preview_window_pane_g3

0x605d,	// (0x00055935) bg_popup_preview_window_pane_g4

0x6065,	// (0x0005593d) bg_popup_preview_window_pane_g5

0x606d,	// (0x00055945) bg_popup_preview_window_pane_g6

0x6075,	// (0x0005594d) bg_popup_preview_window_pane_g7

0x607d,	// (0x00055955) bg_popup_preview_window_pane_g8

0xf31f,	// (0x0005ebf7) aid_popup_width_pane

0xc093,	// (0x0005b96b) popup_midp_note_alarm_window_ParamLimits

0xc093,	// (0x0005b96b) popup_midp_note_alarm_window

0x3c6b,	// (0x00053543) data_form_pane_ParamLimits

0xba0b,	// (0x0005b2e3) form_field_data_pane_g1

0xba15,	// (0x0005b2ed) form_field_data_pane_t1_ParamLimits

0x3c77,	// (0x0005354f) input_focus_pane_ParamLimits

0x062d,	// (0x0004ff05) data_form_wide_pane_ParamLimits

0x063e,	// (0x0004ff16) form_field_data_wide_pane_g1

0x064a,	// (0x0004ff22) form_field_data_wide_pane_t1_ParamLimits

0x39dc,	// (0x000532b4) input_focus_pane_cp6_ParamLimits

0xcfc3,	// (0x0005c89b) input_popup_find_pane_g1_ParamLimits

0xcfc3,	// (0x0005c89b) input_popup_find_pane_g1

0x08c0,	// (0x00050198) aid_navi_side_left_pane

0x08d5,	// (0x000501ad) aid_navi_side_right_pane

0x5a66,	// (0x0005533e) bg_popup_window_pane_cp30_ParamLimits

0x5a66,	// (0x0005533e) bg_popup_window_pane_cp30

0x5ae0,	// (0x000553b8) popup_midp_note_alarm_window_g1_ParamLimits

0x5ae0,	// (0x000553b8) popup_midp_note_alarm_window_g1

0x5b10,	// (0x000553e8) popup_midp_note_alarm_window_t1_ParamLimits

0x5b10,	// (0x000553e8) popup_midp_note_alarm_window_t1

0x5bb1,	// (0x00055489) popup_midp_note_alarm_window_t2_ParamLimits

0x5bb1,	// (0x00055489) popup_midp_note_alarm_window_t2

0x5c5f,	// (0x00055537) popup_midp_note_alarm_window_t3_ParamLimits

0x5c5f,	// (0x00055537) popup_midp_note_alarm_window_t3

0x5c91,	// (0x00055569) popup_midp_note_alarm_window_t4_ParamLimits

0x5c91,	// (0x00055569) popup_midp_note_alarm_window_t4

0x5cb7,	// (0x0005558f) popup_midp_note_alarm_window_t5_ParamLimits

0x5cb7,	// (0x0005558f) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0005f177) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0005f177) popup_midp_note_alarm_window_t

0x5d63,	// (0x0005563b) wait_bar_pane_cp1_ParamLimits

0x5d63,	// (0x0005563b) wait_bar_pane_cp1

0x2c1f,	// (0x000524f7) wait_anim_pane_copy1

0x2c1f,	// (0x000524f7) wait_border_pane_copy1

0x5740,	// (0x00055018) wait_border_pane_g1_copy1

0x0664,	// (0x0004ff3c) form_field_popup_pane_g1

0xba2f,	// (0x0005b307) form_field_popup_pane_t1_ParamLimits

0x3c77,	// (0x0005354f) input_focus_pane_cp7_ParamLimits

0x3c99,	// (0x00053571) list_form_pane_ParamLimits

0x0684,	// (0x0004ff5c) form_field_popup_wide_pane_g1

0x068c,	// (0x0004ff64) form_field_popup_wide_pane_t1_ParamLimits

0x3c77,	// (0x0005354f) input_focus_pane_cp8_ParamLimits

0x3ca5,	// (0x0005357d) list_form_wide_pane_ParamLimits

0x6803,	// (0x000560db) aid_size_cell_graphic_pane

0xbaae,	// (0x0005b386) data_form_pane_t1_ParamLimits

0xc495,	// (0x0005bd6d) data_form_wide_pane_t1_ParamLimits

0xd3f6,	// (0x0005ccce) bg_status_flat_pane

0xcc82,	// (0x0005c55a) title_pane_t1_ParamLimits

0x2cc7,	// (0x0005259f) title_pane_t2_ParamLimits

0x2ced,	// (0x000525c5) title_pane_t3_ParamLimits

0xf557,	// (0x0005ee2f) title_pane_t_ParamLimits

0x4256,	// (0x00053b2e) level_1_signal_ParamLimits

0x4268,	// (0x00053b40) level_2_signal_ParamLimits

0x427b,	// (0x00053b53) level_3_signal_ParamLimits

0x428e,	// (0x00053b66) level_4_signal_ParamLimits

0x42a1,	// (0x00053b79) level_5_signal_ParamLimits

0x42b4,	// (0x00053b8c) level_6_signal_ParamLimits

0x42c7,	// (0x00053b9f) level_7_signal_ParamLimits

0x4256,	// (0x00053b2e) level_1_battery_ParamLimits

0x4268,	// (0x00053b40) level_2_battery_ParamLimits

0x427b,	// (0x00053b53) level_3_battery_ParamLimits

0x428e,	// (0x00053b66) level_4_battery_ParamLimits

0x42a1,	// (0x00053b79) level_5_battery_ParamLimits

0x42b4,	// (0x00053b8c) level_6_battery_ParamLimits

0x42c7,	// (0x00053b9f) level_7_battery_ParamLimits

0x595f,	// (0x00055237) bg_status_flat_pane_g1

0x5967,	// (0x0005523f) bg_status_flat_pane_g2

0x596f,	// (0x00055247) bg_status_flat_pane_g3

0x5977,	// (0x0005524f) bg_status_flat_pane_g4

0x597f,	// (0x00055257) bg_status_flat_pane_g5

0x5987,	// (0x0005525f) bg_status_flat_pane_g6

0x598f,	// (0x00055267) bg_status_flat_pane_g7

0xcd0e,	// (0x0005c5e6) tabs_3_active_pane_t1_ParamLimits

0xcd0e,	// (0x0005c5e6) tabs_3_passive_pane_t1_ParamLimits

0xcd20,	// (0x0005c5f8) tabs_4_active_pane_t1_ParamLimits

0xcd20,	// (0x0005c5f8) tabs_4_1_passive_pane_t1_ParamLimits

0xcfd1,	// (0x0005c8a9) tabs_2_active_pane_t1_ParamLimits

0xcfd1,	// (0x0005c8a9) tabs_2_passive_pane_t1_ParamLimits

0x2cff,	// (0x000525d7) bg_active_tab_pane_cp4_ParamLimits

0xcfe3,	// (0x0005c8bb) tabs_2_long_active_pane_t1_ParamLimits

0x4c3b,	// (0x00054513) bg_passive_tab_pane_cp4_ParamLimits

0x14d1,	// (0x00050da9) list_single_midp_graphic_pane_t1_ParamLimits

0x2cff,	// (0x000525d7) bg_active_tab_pane_cp5_ParamLimits

0xcff6,	// (0x0005c8ce) tabs_3_long_active_pane_t1_ParamLimits

0x4c3b,	// (0x00054513) bg_passive_tab_pane_cp5_ParamLimits

0x14d1,	// (0x00050da9) list_single_midp_graphic_pane_t1

0xd3f6,	// (0x0005ccce) bg_status_flat_pane_ParamLimits

0x4dd5,	// (0x000546ad) indicator_pane_cp2_ParamLimits

0x4dd5,	// (0x000546ad) indicator_pane_cp2

0xd574,	// (0x0005ce4c) navi_pane_srt_ParamLimits

0xd574,	// (0x0005ce4c) navi_pane_srt

0x4f24,	// (0x000547fc) popup_clock_digital_analogue_window_cp1

0x2ddc,	// (0x000526b4) indicator_pane_t1

0x48fd,	// (0x000541d5) copy_highlight_pane

0x48fd,	// (0x000541d5) cursor_graphics_pane

0x48fd,	// (0x000541d5) graphic_within_text_pane

0x48fd,	// (0x000541d5) link_highlight_pane

0x617a,	// (0x00055a52) popup_preview_text_window_t5_ParamLimits

0x617a,	// (0x00055a52) popup_preview_text_window_t5

0x4a1f,	// (0x000542f7) cursor_digital_pane

0x4a1f,	// (0x000542f7) cursor_primary_pane

0x4a30,	// (0x00054308) cursor_primary_small_pane

0x4a38,	// (0x00054310) cursor_secondary_pane

0x4a40,	// (0x00054318) cursor_title_pane

0x4a1f,	// (0x000542f7) link_highlight_digital_pane

0x4a27,	// (0x000542ff) link_highlight_primary_pane

0x4a30,	// (0x00054308) link_highlight_primary_small_pane

0x4a38,	// (0x00054310) link_highlight_secondary_pane

0x4a40,	// (0x00054318) link_highlight_title_pane

0x4a1f,	// (0x000542f7) copy_highlight_digital_pane

0x4a1f,	// (0x000542f7) copy_highlight_primary_pane

0x4a30,	// (0x00054308) copy_highlight_primary_small_pane

0x4a38,	// (0x00054310) copy_highlight_secondary_pane

0x4a40,	// (0x00054318) copy_highlight_title_pane

0x4a38,	// (0x00054310) graphic_text_digital_pane

0x5a09,	// (0x000552e1) graphic_text_primary_pane

0x5a12,	// (0x000552ea) graphic_text_primary_small_pane

0x4a30,	// (0x00054308) graphic_text_secondary_pane

0x4a1f,	// (0x000542f7) graphic_text_title_pane

0xd232,	// (0x0005cb0a) cursor_primary_pane_g1

0x59fb,	// (0x000552d3) cursor_text_primary_t1

0xd89a,	// (0x0005d172) cursor_primary_small_pane_g1

0x59ed,	// (0x000552c5) cursor_text_primary_small_t1

0xd890,	// (0x0005d168) cursor_primary_small_pane_g1_copy1

0x59c9,	// (0x000552a1) cursor_text_primary_small_t1_copy1

0x59a7,	// (0x0005527f) cursor_text_title_t1

0xd886,	// (0x0005d15e) cursor_title_pane_g1

0xd232,	// (0x0005cb0a) cursor_digital_pane_g1

0x4a52,	// (0x0005432a) cursor_text_digital_t1

0x4a77,	// (0x0005434f) link_highlight_primary_pane_g1

0x5950,	// (0x00055228) link_highlight_primary_pane_t1

0x4a60,	// (0x00054338) link_highlight_primary_small_pane_g1

0x4a68,	// (0x00054340) link_highlight_primary_small_pane_t1

0x4a77,	// (0x0005434f) link_highlight_secondary_pane_g1

0x4a7f,	// (0x00054357) link_highlight_secondary_pane_t1

0x58c4,	// (0x0005519c) link_highlight_title_pane_g1

0x58cc,	// (0x000551a4) link_highlight_title_pane_t1

0x58ad,	// (0x00055185) link_highlight_digital_pane_g1

0x58b5,	// (0x0005518d) link_highlight_digital_pane_t1

0x5785,	// (0x0005505d) copy_highlight_primary_pane_g1

0x578d,	// (0x00055065) copy_highlight_primary_pane_t1

0x575f,	// (0x00055037) copy_highlight_primary_small_pane_g1

0x5776,	// (0x0005504e) copy_highlight_primary_small_pane_t1

0x4a8e,	// (0x00054366) copy_highlight_secondary_pane_g1

0x4a96,	// (0x0005436e) copy_highlight_secondary_pane_t1

0x575f,	// (0x00055037) copy_highlight_title_pane_g1

0x5767,	// (0x0005503f) copy_highlight_title_pane_t1

0x5785,	// (0x0005505d) copy_highlight_digital_pane_g1

0x69ce,	// (0x000562a6) copy_highlight_digital_pane_t1

0x6922,	// (0x000561fa) graphic_text_primary_pane_g1

0x69b2,	// (0x0005628a) graphic_text_primary_pane_t1

0x69c0,	// (0x00056298) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0005f2a6) graphic_text_primary_pane_t

0x698e,	// (0x00056266) graphic_text_primary_small_pane_g1

0x6996,	// (0x0005626e) graphic_text_primary_small_pane_t1

0x69a4,	// (0x0005627c) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0005f2a1) graphic_text_primary_small_pane_t

0x696a,	// (0x00056242) graphic_text_secondary_pane_g1

0x6972,	// (0x0005624a) graphic_text_secondary_pane_t1

0x6980,	// (0x00056258) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0005f29c) graphic_text_secondary_pane_t

0x6946,	// (0x0005621e) graphic_text_title_pane_g1

0x694e,	// (0x00056226) graphic_text_title_pane_t1

0x695c,	// (0x00056234) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0005f297) graphic_text_title_pane_t

0x6922,	// (0x000561fa) graphic_text_digital_pane_g1

0x692a,	// (0x00056202) graphic_text_digital_pane_t1

0x6938,	// (0x00056210) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0005f292) graphic_text_digital_pane_t

0x2cff,	// (0x000525d7) navi_icon_pane_srt_ParamLimits

0x2cff,	// (0x000525d7) navi_icon_pane_srt

0x2c1f,	// (0x000524f7) navi_midp_pane_srt

0x2c1f,	// (0x000524f7) navi_navi_pane_srt

0x2cff,	// (0x000525d7) navi_text_pane_srt_ParamLimits

0x2cff,	// (0x000525d7) navi_text_pane_srt

0x68ed,	// (0x000561c5) navi_navi_icon_text_pane_srt

0x68f5,	// (0x000561cd) navi_navi_pane_srt_g1_ParamLimits

0x68f5,	// (0x000561cd) navi_navi_pane_srt_g1

0x6907,	// (0x000561df) navi_navi_pane_srt_g2_ParamLimits

0x6907,	// (0x000561df) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0005f28d) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0005f28d) navi_navi_pane_srt_g

0x6919,	// (0x000561f1) navi_navi_tabs_pane_srt

0x68ed,	// (0x000561c5) navi_navi_text_pane_srt

0x68ed,	// (0x000561c5) navi_navi_volume_pane_srt

0x68de,	// (0x000561b6) navi_navi_text_pane_srt_t1

0x19bf,	// (0x00051297) navi_navi_volume_pane_srt_g1

0x19c7,	// (0x0005129f) volume_small_pane_srt_ParamLimits

0x19c7,	// (0x0005129f) volume_small_pane_srt

0x0c0e,	// (0x000504e6) volume_small_pane_srt_g1_ParamLimits

0x0c0e,	// (0x000504e6) volume_small_pane_srt_g1

0x0c1e,	// (0x000504f6) volume_small_pane_srt_g2_ParamLimits

0x0c1e,	// (0x000504f6) volume_small_pane_srt_g2

0x0c2f,	// (0x00050507) volume_small_pane_srt_g3_ParamLimits

0x0c2f,	// (0x00050507) volume_small_pane_srt_g3

0x0c40,	// (0x00050518) volume_small_pane_srt_g4_ParamLimits

0x0c40,	// (0x00050518) volume_small_pane_srt_g4

0x0c51,	// (0x00050529) volume_small_pane_srt_g5_ParamLimits

0x0c51,	// (0x00050529) volume_small_pane_srt_g5

0x0c62,	// (0x0005053a) volume_small_pane_srt_g6_ParamLimits

0x0c62,	// (0x0005053a) volume_small_pane_srt_g6

0x0c73,	// (0x0005054b) volume_small_pane_srt_g7_ParamLimits

0x0c73,	// (0x0005054b) volume_small_pane_srt_g7

0x0c84,	// (0x0005055c) volume_small_pane_srt_g8_ParamLimits

0x0c84,	// (0x0005055c) volume_small_pane_srt_g8

0x0c95,	// (0x0005056d) volume_small_pane_srt_g9_ParamLimits

0x0c95,	// (0x0005056d) volume_small_pane_srt_g9

0x0ca6,	// (0x0005057e) volume_small_pane_srt_g10_ParamLimits

0x0ca6,	// (0x0005057e) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0005f03a) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0005f03a) volume_small_pane_srt_g

0x37d6,	// (0x000530ae) query_popup_data_pane_cp2

0x68c4,	// (0x0005619c) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x68c4,	// (0x0005619c) navi_navi_icon_text_pane_srt_t1

0x5a09,	// (0x000552e1) navi_tabs_2_long_pane_srt

0x5a09,	// (0x000552e1) navi_tabs_2_pane_srt

0x5a09,	// (0x000552e1) navi_tabs_3_long_pane_srt

0x5a09,	// (0x000552e1) navi_tabs_3_pane_srt

0x5a09,	// (0x000552e1) navi_tabs_4_pane_srt

0x199f,	// (0x00051277) tabs_2_active_pane_srt_ParamLimits

0x199f,	// (0x00051277) tabs_2_active_pane_srt

0x19af,	// (0x00051287) tabs_2_passive_pane_srt_ParamLimits

0x19af,	// (0x00051287) tabs_2_passive_pane_srt

0x51b9,	// (0x00054a91) bg_passive_tab_pane_cp1_srt_ParamLimits

0x51b9,	// (0x00054a91) bg_passive_tab_pane_cp1_srt

0x6890,	// (0x00056168) bg_passive_tab_pane_g1_cp1_srt

0x453f,	// (0x00053e17) bg_passive_tab_pane_g2_cp1_srt

0x6899,	// (0x00056171) bg_passive_tab_pane_g3_cp1_srt

0x2f7a,	// (0x00052852) bg_active_tab_pane_cp1_srt_ParamLimits

0x2f7a,	// (0x00052852) bg_active_tab_pane_cp1_srt

0x68a2,	// (0x0005617a) tabs_2_active_pane_srt_g1

0xdc50,	// (0x0005d528) tabs_2_active_pane_srt_t1_ParamLimits

0xdc50,	// (0x0005d528) tabs_2_active_pane_srt_t1

0x6890,	// (0x00056168) bg_active_tab_pane_g1_cp1_srt

0x453f,	// (0x00053e17) bg_active_tab_pane_g2_cp1_srt

0x6899,	// (0x00056171) bg_active_tab_pane_g3_cp1_srt

0x196c,	// (0x00051244) tabs_3_active_pane_srt_ParamLimits

0x196c,	// (0x00051244) tabs_3_active_pane_srt

0x197d,	// (0x00051255) tabs_3_passive_pane_cp_srt_ParamLimits

0x197d,	// (0x00051255) tabs_3_passive_pane_cp_srt

0x198e,	// (0x00051266) tabs_3_passive_pane_srt_ParamLimits

0x198e,	// (0x00051266) tabs_3_passive_pane_srt

0x51b9,	// (0x00054a91) bg_passive_tab_pane_cp2_srt_ParamLimits

0x51b9,	// (0x00054a91) bg_passive_tab_pane_cp2_srt

0x4aa5,	// (0x0005437d) bg_passive_tab_pane_g1_cp2_srt

0x453f,	// (0x00053e17) bg_passive_tab_pane_g2_cp2_srt

0x4aae,	// (0x00054386) bg_passive_tab_pane_g3_cp2_srt

0x2f7a,	// (0x00052852) bg_active_tab_pane_cp2_srt_ParamLimits

0x2f7a,	// (0x00052852) bg_active_tab_pane_cp2_srt

0x6876,	// (0x0005614e) tabs_3_active_pane_srt_g1

0xdc3a,	// (0x0005d512) tabs_3_active_pane_srt_t1_ParamLimits

0xdc3a,	// (0x0005d512) tabs_3_active_pane_srt_t1

0x4aa5,	// (0x0005437d) bg_active_tab_pane_g1_cp2_srt

0x453f,	// (0x00053e17) bg_active_tab_pane_g2_cp2_srt

0x4aae,	// (0x00054386) bg_active_tab_pane_g3_cp2_srt

0x1924,	// (0x000511fc) tabs_4_active_pane_srt_ParamLimits

0x1924,	// (0x000511fc) tabs_4_active_pane_srt

0x1936,	// (0x0005120e) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1936,	// (0x0005120e) tabs_4_passive_pane_cp2_srt

0x0e0b,	// (0x000506e3) aid_size_cell_toolbar

0x6525,	// (0x00055dfd) main_idle_act_pane_ParamLimits

0x0fd6,	// (0x000508ae) popup_large_graphic_colour_window_ParamLimits

0xc3a3,	// (0x0005bc7b) popup_toolbar_window_ParamLimits

0xc3a3,	// (0x0005bc7b) popup_toolbar_window

0x66dd,	// (0x00055fb5) list_single_graphic_2heading_pane_ParamLimits

0x66dd,	// (0x00055fb5) list_single_graphic_2heading_pane

0x400b,	// (0x000538e3) aid_size_cell_apps_grid_lsc_pane

0x401d,	// (0x000538f5) aid_size_cell_apps_grid_prt_pane

0x4c3b,	// (0x00054513) bg_wml_button_pane_cp1_ParamLimits

0x4c3b,	// (0x00054513) bg_wml_button_pane_cp1

0xd83c,	// (0x0005d114) form_midp_field_text_pane_t1_ParamLimits

0x51b9,	// (0x00054a91) input_focus_pane_cp050_ParamLimits

0x5426,	// (0x00054cfe) list_midp_form_text_pane_ParamLimits

0x53cc,	// (0x00054ca4) input_focus_pane_cp051_ParamLimits

0x53e0,	// (0x00054cb8) list_midp_choice_pane_ParamLimits

0xd7d9,	// (0x0005d0b1) list_single_2graphic_pane_cp3_ParamLimits

0xd7d9,	// (0x0005d0b1) list_single_2graphic_pane_cp3

0xd7ec,	// (0x0005d0c4) list_single_midp_graphic_pane_ParamLimits

0xd7ec,	// (0x0005d0c4) list_single_midp_graphic_pane

0xf3cf,	// (0x0005eca7) list_single_graphic_2heading_pane_g1_ParamLimits

0xf3cf,	// (0x0005eca7) list_single_graphic_2heading_pane_g1

0xf3db,	// (0x0005ecb3) list_single_graphic_2heading_pane_g4_ParamLimits

0xf3db,	// (0x0005ecb3) list_single_graphic_2heading_pane_g4

0xf3e7,	// (0x0005ecbf) list_single_graphic_2heading_pane_g5_ParamLimits

0xf3e7,	// (0x0005ecbf) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0005f08d) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0005f08d) list_single_graphic_2heading_pane_g

0xf3f3,	// (0x0005eccb) list_single_graphic_2heading_pane_t1_ParamLimits

0xf3f3,	// (0x0005eccb) list_single_graphic_2heading_pane_t1

0xf407,	// (0x0005ecdf) list_single_graphic_2heading_pane_t2_ParamLimits

0xf407,	// (0x0005ecdf) list_single_graphic_2heading_pane_t2

0xf423,	// (0x0005ecfb) list_single_graphic_2heading_pane_t3_ParamLimits

0xf423,	// (0x0005ecfb) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0005f094) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0005f094) list_single_graphic_2heading_pane_t

0x5083,	// (0x0005495b) bg_popup_sub_pane_cp2

0x50ad,	// (0x00054985) grid_toobar_pane

0x13ea,	// (0x00050cc2) cell_toolbar_pane_ParamLimits

0x13ea,	// (0x00050cc2) cell_toolbar_pane

0x50e9,	// (0x000549c1) cell_toolbar_pane_g1_ParamLimits

0x50e9,	// (0x000549c1) cell_toolbar_pane_g1

0x50fd,	// (0x000549d5) cell_toolbar_pane_g2_ParamLimits

0x50fd,	// (0x000549d5) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0005f0a2) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0005f0a2) cell_toolbar_pane_g

0x511f,	// (0x000549f7) grid_highlight_pane_cp2_ParamLimits

0x511f,	// (0x000549f7) grid_highlight_pane_cp2

0x5139,	// (0x00054a11) toolbar_button_pane

0x5145,	// (0x00054a1d) toolbar_button_pane_g1

0x514d,	// (0x00054a25) toolbar_button_pane_g2

0x5155,	// (0x00054a2d) toolbar_button_pane_g3

0x515d,	// (0x00054a35) toolbar_button_pane_g4

0x5165,	// (0x00054a3d) toolbar_button_pane_g5

0x516d,	// (0x00054a45) toolbar_button_pane_g6

0x5175,	// (0x00054a4d) toolbar_button_pane_g7

0x517d,	// (0x00054a55) toolbar_button_pane_g8

0x5185,	// (0x00054a5d) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0005f0a7) toolbar_button_pane_g

0x1444,	// (0x00050d1c) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1444,	// (0x00050d1c) list_single_2graphic_pane_g1_cp3

0xc3fb,	// (0x0005bcd3) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc3fb,	// (0x0005bcd3) list_single_2graphic_pane_g2_cp3

0x1461,	// (0x00050d39) list_single_2graphic_pane_g3_cp3

0x1469,	// (0x00050d41) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1469,	// (0x00050d41) list_single_2graphic_pane_g4_cp3

0x1475,	// (0x00050d4d) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1475,	// (0x00050d4d) list_single_2graphic_pane_t1_cp3

0x14c5,	// (0x00050d9d) list_single_midp_graphic_pane_g2_ParamLimits

0x14c5,	// (0x00050d9d) list_single_midp_graphic_pane_g2

0xf3c7,	// (0x0005ec9f) aid_zoom_text_primary

0x0e13,	// (0x000506eb) aid_zoom_text_secondary

0xd28a,	// (0x0005cb62) status_small_pane_g7_ParamLimits

0xd28a,	// (0x0005cb62) status_small_pane_g7

0xd2ad,	// (0x0005cb85) status_small_pane_t1_ParamLimits

0xcc5e,	// (0x0005c536) title_pane_g2

0x0003,

0xf54e,	// (0x0005ee26) title_pane_g

0xced6,	// (0x0005c7ae) aid_size_cell_colour_1_pane_ParamLimits

0xced6,	// (0x0005c7ae) aid_size_cell_colour_1_pane

0xceea,	// (0x0005c7c2) aid_size_cell_colour_2_pane_ParamLimits

0xceea,	// (0x0005c7c2) aid_size_cell_colour_2_pane

0xcefe,	// (0x0005c7d6) aid_size_cell_colour_3_pane_ParamLimits

0xcefe,	// (0x0005c7d6) aid_size_cell_colour_3_pane

0xcf12,	// (0x0005c7ea) aid_size_cell_colour_4_pane_ParamLimits

0xcf12,	// (0x0005c7ea) aid_size_cell_colour_4_pane

0x07fd,	// (0x000500d5) title_pane_stacon_g1_ParamLimits

0x07fd,	// (0x000500d5) title_pane_stacon_g1

0x57e4,	// (0x000550bc) popup_note_wait_window_g3_ParamLimits

0x57e4,	// (0x000550bc) popup_note_wait_window_g3

0x585a,	// (0x00055132) popup_note_wait_window_t5_ParamLimits

0x585a,	// (0x00055132) popup_note_wait_window_t5

0x2c1f,	// (0x000524f7) main_feb_china_hwr_fs_writing_pane

0xbdab,	// (0x0005b683) popup_feb_china_hwr_fs_window_ParamLimits

0xbdab,	// (0x0005b683) popup_feb_china_hwr_fs_window

0xc40c,	// (0x0005bce4) aid_size_cell_hwr_fs_ParamLimits

0xc40c,	// (0x0005bce4) aid_size_cell_hwr_fs

0x51b9,	// (0x00054a91) bg_popup_sub_pane_cp3_ParamLimits

0x51b9,	// (0x00054a91) bg_popup_sub_pane_cp3

0xc421,	// (0x0005bcf9) grid_hwr_fs_pane_ParamLimits

0xc421,	// (0x0005bcf9) grid_hwr_fs_pane

0x1580,	// (0x00050e58) linegrid_hwr_fs_pane_ParamLimits

0x1580,	// (0x00050e58) linegrid_hwr_fs_pane

0xc439,	// (0x0005bd11) cell_hwr_fs_pane_ParamLimits

0xc439,	// (0x0005bd11) cell_hwr_fs_pane

0x51c5,	// (0x00054a9d) linegrid_hwr_fs_pane_g1_ParamLimits

0x51c5,	// (0x00054a9d) linegrid_hwr_fs_pane_g1

0xd713,	// (0x0005cfeb) linegrid_hwr_fs_pane_g2_ParamLimits

0xd713,	// (0x0005cfeb) linegrid_hwr_fs_pane_g2

0x51e3,	// (0x00054abb) linegrid_hwr_fs_pane_g3_ParamLimits

0x51e3,	// (0x00054abb) linegrid_hwr_fs_pane_g3

0x15b2,	// (0x00050e8a) linegrid_hwr_fs_pane_g4_ParamLimits

0x15b2,	// (0x00050e8a) linegrid_hwr_fs_pane_g4

0x15cc,	// (0x00050ea4) linegrid_hwr_fs_pane_g5_ParamLimits

0x15cc,	// (0x00050ea4) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0005f0cd) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0005f0cd) linegrid_hwr_fs_pane_g

0x51ef,	// (0x00054ac7) cell_hwr_fs_pane_g1_ParamLimits

0x51ef,	// (0x00054ac7) cell_hwr_fs_pane_g1

0x4fba,	// (0x00054892) cell_hwr_fs_pane_g2_ParamLimits

0x4fba,	// (0x00054892) cell_hwr_fs_pane_g2

0xd725,	// (0x0005cffd) cell_hwr_fs_pane_g3_ParamLimits

0xd725,	// (0x0005cffd) cell_hwr_fs_pane_g3

0xd7cc,	// (0x0005d0a4) cell_hwr_fs_pane_g4_ParamLimits

0xd7cc,	// (0x0005d0a4) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0005f0d8) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0005f0d8) cell_hwr_fs_pane_g

0xc45f,	// (0x0005bd37) cell_hwr_fs_pane_t1

0x2c1f,	// (0x000524f7) grid_highlight_pane_cp6

0x2c1f,	// (0x000524f7) main_idle_act2_pane

0x3dc2,	// (0x0005369a) aid_inside_area_popup_secondary

0xd8a4,	// (0x0005d17c) aid_inside_area_window_primary_ParamLimits

0xd8a4,	// (0x0005d17c) aid_inside_area_window_primary

0x69dd,	// (0x000562b5) ai2_news_ticker_pane

0x69e5,	// (0x000562bd) aid_size_cell_ai1_link_ParamLimits

0x69e5,	// (0x000562bd) aid_size_cell_ai1_link

0xdc66,	// (0x0005d53e) popup_ai2_data_window_ParamLimits

0xdc66,	// (0x0005d53e) popup_ai2_data_window

0x6a15,	// (0x000562ed) popup_ai2_link_window_ParamLimits

0x6a15,	// (0x000562ed) popup_ai2_link_window

0x51b9,	// (0x00054a91) bg_popup_sub_pane_cp4_ParamLimits

0x51b9,	// (0x00054a91) bg_popup_sub_pane_cp4

0x6a29,	// (0x00056301) grid_ai2_link_pane_ParamLimits

0x6a29,	// (0x00056301) grid_ai2_link_pane

0x6a40,	// (0x00056318) popup_ai2_link_window_g1_ParamLimits

0x6a40,	// (0x00056318) popup_ai2_link_window_g1

0x6a4c,	// (0x00056324) popup_ai2_link_window_g2_ParamLimits

0x6a4c,	// (0x00056324) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0005f2ab) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0005f2ab) popup_ai2_link_window_g

0x6a5b,	// (0x00056333) ai2_mp_button_pane

0x6a63,	// (0x0005633b) ai2_mp_volume_pane

0x53cc,	// (0x00054ca4) bg_popup_sub_pane_cp5_ParamLimits

0x53cc,	// (0x00054ca4) bg_popup_sub_pane_cp5

0x6a6b,	// (0x00056343) heading_ai2_gene_pane_ParamLimits

0x6a6b,	// (0x00056343) heading_ai2_gene_pane

0x6a77,	// (0x0005634f) list_ai2_gene_pane_ParamLimits

0x6a77,	// (0x0005634f) list_ai2_gene_pane

0x6abf,	// (0x00056397) cell_ai2_link_pane_ParamLimits

0x6abf,	// (0x00056397) cell_ai2_link_pane

0x6ad5,	// (0x000563ad) cell_ai2_link_pane_g1

0x2c1f,	// (0x000524f7) grid_highlight_pane_cp7

0x19dc,	// (0x000512b4) ai2_mp_volume_pane_g1

0x6ba5,	// (0x0005647d) ai2_mp_volume_pane_g2

0xdc90,	// (0x0005d568) list_ai2_gene_pane_t1

0x6bad,	// (0x00056485) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0005f2c4) ai2_mp_volume_pane_g

0x19e4,	// (0x000512bc) volume_small_pane_cp3

0x6bb5,	// (0x0005648d) aid_size_cell_ai2_button

0x6bbd,	// (0x00056495) grid_ai2_button_pane

0x6bc6,	// (0x0005649e) cell_ai2_button_pane_ParamLimits

0x6bc6,	// (0x0005649e) cell_ai2_button_pane

0x2c15,	// (0x000524ed) cell_ai2_button_pane_g1

0x2c1f,	// (0x000524f7) grid_highlight_pane_cp8

0x6b65,	// (0x0005643d) ai2_gene_pane_t1_ParamLimits

0x6b65,	// (0x0005643d) ai2_gene_pane_t1

0xbd25,	// (0x0005b5fd) aid_height_parent_landscape

0xd9ee,	// (0x0005d2c6) aid_height_set_list

0x6525,	// (0x00055dfd) aid_size_parent

0x6803,	// (0x000560db) aid_size_cell_graphic_pane_ParamLimits

0x6a87,	// (0x0005635f) popup_ai2_data_window_g1_ParamLimits

0x6a87,	// (0x0005635f) popup_ai2_data_window_g1

0x6a93,	// (0x0005636b) ai2_news_ticker_pane_g1

0x6a9b,	// (0x00056373) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0005f2b0) ai2_news_ticker_pane_g

0x6aa3,	// (0x0005637b) ai2_news_ticker_pane_t1

0x6ab1,	// (0x00056389) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0005f2b5) ai2_news_ticker_pane_t

0x6ade,	// (0x000563b6) heading_ai2_gene_pane_g1

0x6ae6,	// (0x000563be) heading_ai2_gene_pane_t1_ParamLimits

0x6ae6,	// (0x000563be) heading_ai2_gene_pane_t1

0x6afb,	// (0x000563d3) list_highlight_pane_cp6

0xdc7a,	// (0x0005d552) ai2_gene_pane_ParamLimits

0xdc7a,	// (0x0005d552) ai2_gene_pane

0xdc9e,	// (0x0005d576) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0005f2ba) list_ai2_gene_pane_t

0x6b36,	// (0x0005640e) list_highlight_pane_cp8_ParamLimits

0x6b36,	// (0x0005640e) list_highlight_pane_cp8

0x6b47,	// (0x0005641f) ai2_gene_pane_g1_ParamLimits

0x6b47,	// (0x0005641f) ai2_gene_pane_g1

0x6b59,	// (0x00056431) ai2_gene_pane_g2_ParamLimits

0x6b59,	// (0x00056431) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0005f2bf) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0005f2bf) ai2_gene_pane_g

0x3c01,	// (0x000534d9) scroll_pane_cp12

0xbce4,	// (0x0005b5bc) control_pane_t3_ParamLimits

0xbce4,	// (0x0005b5bc) control_pane_t3

0xd29e,	// (0x0005cb76) status_small_pane_g8_ParamLimits

0xd29e,	// (0x0005cb76) status_small_pane_g8

0xbe40,	// (0x0005b718) popup_find_window_ParamLimits

0xc0cd,	// (0x0005b9a5) popup_note_image_window_ParamLimits

0x141a,	// (0x00050cf2) list_double2_graphic_pane_vc_g1_ParamLimits

0x141a,	// (0x00050cf2) list_double2_graphic_pane_vc_g1

0x4836,	// (0x0005410e) list_double2_graphic_pane_vc_g2_ParamLimits

0x4836,	// (0x0005410e) list_double2_graphic_pane_vc_g2

0x3131,	// (0x00052a09) list_double2_graphic_pane_vc_g3_ParamLimits

0x3131,	// (0x00052a09) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0005f09b) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005f09b) list_double2_graphic_pane_vc_g

0x1426,	// (0x00050cfe) list_double2_graphic_pane_vc_t1_ParamLimits

0x1426,	// (0x00050cfe) list_double2_graphic_pane_vc_t1

0x4836,	// (0x0005410e) list_single_heading_pane_vc_g1_ParamLimits

0x4836,	// (0x0005410e) list_single_heading_pane_vc_g1

0x3131,	// (0x00052a09) list_single_heading_pane_vc_g2_ParamLimits

0x3131,	// (0x00052a09) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005eeaa) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005eeaa) list_single_heading_pane_vc_g

0x1491,	// (0x00050d69) list_single_heading_pane_vc_t1_ParamLimits

0x1491,	// (0x00050d69) list_single_heading_pane_vc_t1

0x14a9,	// (0x00050d81) list_single_heading_pane_vc_t2_ParamLimits

0x14a9,	// (0x00050d81) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0005f0bc) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0005f0bc) list_single_heading_pane_vc_t

0x313d,	// (0x00052a15) list_setting_number_pane_vc_g1_ParamLimits

0x313d,	// (0x00052a15) list_setting_number_pane_vc_g1

0x3149,	// (0x00052a21) list_setting_number_pane_vc_g2_ParamLimits

0x3149,	// (0x00052a21) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0005f0c1) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0005f0c1) list_setting_number_pane_vc_g

0x14e7,	// (0x00050dbf) list_setting_number_pane_vc_t1_ParamLimits

0x14e7,	// (0x00050dbf) list_setting_number_pane_vc_t1

0x14fb,	// (0x00050dd3) list_setting_number_pane_vc_t2_ParamLimits

0x14fb,	// (0x00050dd3) list_setting_number_pane_vc_t2

0x1517,	// (0x00050def) list_setting_number_pane_vc_t3_ParamLimits

0x1517,	// (0x00050def) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0005f0c6) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0005f0c6) list_setting_number_pane_vc_t

0x1543,	// (0x00050e1b) set_value_pane_vc_ParamLimits

0x1543,	// (0x00050e1b) set_value_pane_vc

0x66dd,	// (0x00055fb5) list_double2_graphic_pane_vc_ParamLimits

0x66dd,	// (0x00055fb5) list_double2_graphic_pane_vc

0x18c4,	// (0x0005119c) list_double2_large_graphic_pane_vc_ParamLimits

0x18c4,	// (0x0005119c) list_double2_large_graphic_pane_vc

0x66dd,	// (0x00055fb5) list_double2_pane_vc_ParamLimits

0x66dd,	// (0x00055fb5) list_double2_pane_vc

0x66dd,	// (0x00055fb5) list_double_graphic_heading_pane_vc_ParamLimits

0x66dd,	// (0x00055fb5) list_double_graphic_heading_pane_vc

0x66dd,	// (0x00055fb5) list_double_graphic_pane_vc_ParamLimits

0x66dd,	// (0x00055fb5) list_double_graphic_pane_vc

0x66dd,	// (0x00055fb5) list_double_heading_pane_vc_ParamLimits

0x66dd,	// (0x00055fb5) list_double_heading_pane_vc

0x18d5,	// (0x000511ad) list_double_large_graphic_pane_vc_ParamLimits

0x18d5,	// (0x000511ad) list_double_large_graphic_pane_vc

0x66dd,	// (0x00055fb5) list_double_number_pane_vc_ParamLimits

0x66dd,	// (0x00055fb5) list_double_number_pane_vc

0x66dd,	// (0x00055fb5) list_double_pane_vc_ParamLimits

0x66dd,	// (0x00055fb5) list_double_pane_vc

0x66dd,	// (0x00055fb5) list_double_time_pane_vc_ParamLimits

0x66dd,	// (0x00055fb5) list_double_time_pane_vc

0x66dd,	// (0x00055fb5) list_setting_number_pane_vc_ParamLimits

0x66dd,	// (0x00055fb5) list_setting_number_pane_vc

0x66dd,	// (0x00055fb5) list_setting_pane_vc_ParamLimits

0x66dd,	// (0x00055fb5) list_setting_pane_vc

0x66dd,	// (0x00055fb5) list_single_graphic_heading_pane_vc_ParamLimits

0x66dd,	// (0x00055fb5) list_single_graphic_heading_pane_vc

0x66dd,	// (0x00055fb5) list_single_heading_pane_vc_ParamLimits

0x66dd,	// (0x00055fb5) list_single_heading_pane_vc

0x66dd,	// (0x00055fb5) list_single_number_heading_pane_vc_ParamLimits

0x66dd,	// (0x00055fb5) list_single_number_heading_pane_vc

0x141a,	// (0x00050cf2) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x141a,	// (0x00050cf2) list_double_graphic_heading_pane_vc_g1

0x4836,	// (0x0005410e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4836,	// (0x0005410e) list_double_graphic_heading_pane_vc_g2

0x3131,	// (0x00052a09) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3131,	// (0x00052a09) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0005f09b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005f09b) list_double_graphic_heading_pane_vc_g

0x19ed,	// (0x000512c5) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x19ed,	// (0x000512c5) list_double_graphic_heading_pane_vc_t1

0x1a09,	// (0x000512e1) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x1a09,	// (0x000512e1) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0005f2cb) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0005f2cb) list_double_graphic_heading_pane_vc_t

0x313d,	// (0x00052a15) list_setting_pane_vc_g1_ParamLimits

0x313d,	// (0x00052a15) list_setting_pane_vc_g1

0x3149,	// (0x00052a21) list_setting_pane_vc_g2_ParamLimits

0x3149,	// (0x00052a21) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0005f0c1) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0005f0c1) list_setting_pane_vc_g

0x1a27,	// (0x000512ff) list_setting_pane_vc_t1_ParamLimits

0x1a27,	// (0x000512ff) list_setting_pane_vc_t1

0x1a43,	// (0x0005131b) list_setting_pane_vc_t2_ParamLimits

0x1a43,	// (0x0005131b) list_setting_pane_vc_t2

0x0001,

0xfa21,	// (0x0005f2f9) list_setting_pane_vc_t_ParamLimits

0xfa21,	// (0x0005f2f9) list_setting_pane_vc_t

0x1543,	// (0x00050e1b) set_value_pane_cp_vc_ParamLimits

0x1543,	// (0x00050e1b) set_value_pane_cp_vc

0x4836,	// (0x0005410e) list_single_number_heading_pane_vc_g1_ParamLimits

0x4836,	// (0x0005410e) list_single_number_heading_pane_vc_g1

0x3131,	// (0x00052a09) list_single_number_heading_pane_vc_g2_ParamLimits

0x3131,	// (0x00052a09) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005eeaa) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005eeaa) list_single_number_heading_pane_vc_g

0x1491,	// (0x00050d69) list_single_number_heading_pane_vc_t1_ParamLimits

0x1491,	// (0x00050d69) list_single_number_heading_pane_vc_t1

0x1a5f,	// (0x00051337) list_single_number_heading_pane_vc_t2_ParamLimits

0x1a5f,	// (0x00051337) list_single_number_heading_pane_vc_t2

0x1a73,	// (0x0005134b) list_single_number_heading_pane_vc_t3_ParamLimits

0x1a73,	// (0x0005134b) list_single_number_heading_pane_vc_t3

0x0002,

0xfa26,	// (0x0005f2fe) list_single_number_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0005f2fe) list_single_number_heading_pane_vc_t

0x141a,	// (0x00050cf2) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x141a,	// (0x00050cf2) list_single_graphic_heading_pane_vc_g1

0x4836,	// (0x0005410e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4836,	// (0x0005410e) list_single_graphic_heading_pane_vc_g4

0x3131,	// (0x00052a09) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3131,	// (0x00052a09) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0005f09b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005f09b) list_single_graphic_heading_pane_vc_g

0x1491,	// (0x00050d69) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x1491,	// (0x00050d69) list_single_graphic_heading_pane_vc_t1

0x1a85,	// (0x0005135d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x1a85,	// (0x0005135d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2d,	// (0x0005f305) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2d,	// (0x0005f305) list_single_graphic_heading_pane_vc_t

0x4836,	// (0x0005410e) list_double2_pane_vc_g1_ParamLimits

0x4836,	// (0x0005410e) list_double2_pane_vc_g1

0x3131,	// (0x00052a09) list_double2_pane_vc_g2_ParamLimits

0x3131,	// (0x00052a09) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005eeaa) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005eeaa) list_double2_pane_vc_g

0x1a99,	// (0x00051371) list_double2_pane_vc_t1_ParamLimits

0x1a99,	// (0x00051371) list_double2_pane_vc_t1

0x1aaf,	// (0x00051387) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x1aaf,	// (0x00051387) list_double2_large_graphic_pane_vc_g1

0x1abb,	// (0x00051393) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x1abb,	// (0x00051393) list_double2_large_graphic_pane_vc_g2

0x1ac7,	// (0x0005139f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x1ac7,	// (0x0005139f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0005eec2) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0005eec2) list_double2_large_graphic_pane_vc_g

0x1ad3,	// (0x000513ab) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x1ad3,	// (0x000513ab) list_double2_large_graphic_pane_vc_t1

0x31eb,	// (0x00052ac3) list_double_time_pane_vc_g1_ParamLimits

0x31eb,	// (0x00052ac3) list_double_time_pane_vc_g1

0x31f7,	// (0x00052acf) list_double_time_pane_vc_g2_ParamLimits

0x31f7,	// (0x00052acf) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x0005f30a) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x0005f30a) list_double_time_pane_vc_g

0x1ae9,	// (0x000513c1) list_double_time_pane_vc_t1_ParamLimits

0x1ae9,	// (0x000513c1) list_double_time_pane_vc_t1

0x1b0d,	// (0x000513e5) list_double_time_pane_vc_t2_ParamLimits

0x1b0d,	// (0x000513e5) list_double_time_pane_vc_t2

0x3203,	// (0x00052adb) list_double_time_pane_vc_t3_ParamLimits

0x3203,	// (0x00052adb) list_double_time_pane_vc_t3

0x3215,	// (0x00052aed) list_double_time_pane_vc_t4_ParamLimits

0x3215,	// (0x00052aed) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x0005f30f) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x0005f30f) list_double_time_pane_vc_t

0x4836,	// (0x0005410e) list_double_pane_vc_g1_ParamLimits

0x4836,	// (0x0005410e) list_double_pane_vc_g1

0x3131,	// (0x00052a09) list_double_pane_vc_g2_ParamLimits

0x3131,	// (0x00052a09) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005eeaa) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005eeaa) list_double_pane_vc_g

0x3229,	// (0x00052b01) list_double_pane_vc_t1_ParamLimits

0x3229,	// (0x00052b01) list_double_pane_vc_t1

0x323d,	// (0x00052b15) list_double_pane_vc_t2_ParamLimits

0x323d,	// (0x00052b15) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x0005f318) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x0005f318) list_double_pane_vc_t

0x4836,	// (0x0005410e) list_double_number_pane_vc_g1_ParamLimits

0x4836,	// (0x0005410e) list_double_number_pane_vc_g1

0x3131,	// (0x00052a09) list_double_number_pane_vc_g2_ParamLimits

0x3131,	// (0x00052a09) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005eeaa) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005eeaa) list_double_number_pane_vc_g

0x3255,	// (0x00052b2d) list_double_number_pane_vc_t1_ParamLimits

0x3255,	// (0x00052b2d) list_double_number_pane_vc_t1

0x3267,	// (0x00052b3f) list_double_number_pane_vc_t2_ParamLimits

0x3267,	// (0x00052b3f) list_double_number_pane_vc_t2

0x327b,	// (0x00052b53) list_double_number_pane_vc_t3_ParamLimits

0x327b,	// (0x00052b53) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x0005f31d) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x0005f31d) list_double_number_pane_vc_t

0x3293,	// (0x00052b6b) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3293,	// (0x00052b6b) list_double_large_graphic_pane_vc_g1

0x32b5,	// (0x00052b8d) list_double_large_graphic_pane_vc_g2_ParamLimits

0x32b5,	// (0x00052b8d) list_double_large_graphic_pane_vc_g2

0x32c9,	// (0x00052ba1) list_double_large_graphic_pane_vc_g3_ParamLimits

0x32c9,	// (0x00052ba1) list_double_large_graphic_pane_vc_g3

0x32d8,	// (0x00052bb0) list_double_large_graphic_pane_vc_g4_ParamLimits

0x32d8,	// (0x00052bb0) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x0005f324) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x0005f324) list_double_large_graphic_pane_vc_g

0x32e4,	// (0x00052bbc) list_double_large_graphic_pane_vc_t1_ParamLimits

0x32e4,	// (0x00052bbc) list_double_large_graphic_pane_vc_t1

0x3300,	// (0x00052bd8) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3300,	// (0x00052bd8) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x0005f32d) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x0005f32d) list_double_large_graphic_pane_vc_t

0x4836,	// (0x0005410e) list_double_heading_pane_vc_g1_ParamLimits

0x4836,	// (0x0005410e) list_double_heading_pane_vc_g1

0x3131,	// (0x00052a09) list_double_heading_pane_vc_g2_ParamLimits

0x3131,	// (0x00052a09) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005eeaa) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005eeaa) list_double_heading_pane_vc_g

0x3322,	// (0x00052bfa) list_double_heading_pane_vc_t1_ParamLimits

0x3322,	// (0x00052bfa) list_double_heading_pane_vc_t1

0x1491,	// (0x00050d69) list_double_heading_pane_vc_t2_ParamLimits

0x1491,	// (0x00050d69) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x0005f332) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x0005f332) list_double_heading_pane_vc_t

0x3336,	// (0x00052c0e) list_double_graphic_pane_vc_g1_ParamLimits

0x3336,	// (0x00052c0e) list_double_graphic_pane_vc_g1

0x3342,	// (0x00052c1a) list_double_graphic_pane_vc_g2_ParamLimits

0x3342,	// (0x00052c1a) list_double_graphic_pane_vc_g2

0x4836,	// (0x0005410e) list_double_graphic_pane_vc_g3_ParamLimits

0x4836,	// (0x0005410e) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x0005f337) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x0005f337) list_double_graphic_pane_vc_g

0x335f,	// (0x00052c37) list_double_graphic_pane_vc_t1_ParamLimits

0x335f,	// (0x00052c37) list_double_graphic_pane_vc_t1

0x3389,	// (0x00052c61) list_double_graphic_pane_vc_t2_ParamLimits

0x3389,	// (0x00052c61) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x0005f340) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x0005f340) list_double_graphic_pane_vc_t

0xf32b,	// (0x0005ec03) aid_size_cell_fastswap

0xb30d,	// (0x0005abe5) aid_size_cell_touch_ParamLimits

0xb30d,	// (0x0005abe5) aid_size_cell_touch

0xf520,	// (0x0005edf8) popup_fast_swap_wide_window_ParamLimits

0xf520,	// (0x0005edf8) popup_fast_swap_wide_window

0xb4bd,	// (0x0005ad95) touch_pane_ParamLimits

0xb4bd,	// (0x0005ad95) touch_pane

0x3c63,	// (0x0005353b) button_value_adjust_pane_cp2

0x0557,	// (0x0004fe2f) button_value_adjust_pane_cp4

0x057b,	// (0x0004fe53) form_field_data_pane_cp2

0xb9d2,	// (0x0005b2aa) form_field_data_wide_pane_cp2

0x40d4,	// (0x000539ac) bg_scroll_pane_ParamLimits

0x095f,	// (0x00050237) scroll_handle_pane_ParamLimits

0x0973,	// (0x0005024b) scroll_sc2_down_pane_ParamLimits

0x0973,	// (0x0005024b) scroll_sc2_down_pane

0x4105,	// (0x000539dd) scroll_sc2_up_pane_ParamLimits

0x4105,	// (0x000539dd) scroll_sc2_up_pane

0xddbe,	// (0x0005d696) grid_wheel_folder_pane_g1_ParamLimits

0xddbe,	// (0x0005d696) grid_wheel_folder_pane_g1

0x0ba6,	// (0x0005047e) clock_nsta_pane_cp2_ParamLimits

0x0ba6,	// (0x0005047e) clock_nsta_pane_cp2

0x4c3b,	// (0x00054513) listscroll_midp_pane_ParamLimits

0xd199,	// (0x0005ca71) midp_canvas_pane

0x4bed,	// (0x000544c5) nsta_clock_indic_pane

0x4c21,	// (0x000544f9) listscroll_form_pane_vc

0x4c29,	// (0x00054501) listscroll_set_pane_vc_ParamLimits

0x4c29,	// (0x00054501) listscroll_set_pane_vc

0xd41e,	// (0x0005ccf6) clock_nsta_pane

0xd448,	// (0x0005cd20) indicator_nsta_pane

0x5083,	// (0x0005495b) bg_popup_sub_pane_cp2_ParamLimits

0x5097,	// (0x0005496f) find_pane_cp2_ParamLimits

0x5097,	// (0x0005496f) find_pane_cp2

0x50ad,	// (0x00054985) grid_toobar_pane_ParamLimits

0x518d,	// (0x00054a65) list_form_gen_pane_vc_ParamLimits

0x518d,	// (0x00054a65) list_form_gen_pane_vc

0x51a3,	// (0x00054a7b) scroll_pane_cp8_vc_ParamLimits

0x51a3,	// (0x00054a7b) scroll_pane_cp8_vc

0x521f,	// (0x00054af7) data_form_wide_pane_vc_ParamLimits

0x521f,	// (0x00054af7) data_form_wide_pane_vc

0x522b,	// (0x00054b03) form_field_data_wide_pane_vc_g1

0x5233,	// (0x00054b0b) form_field_data_wide_pane_vc_t1_ParamLimits

0x5233,	// (0x00054b0b) form_field_data_wide_pane_vc_t1

0x3c77,	// (0x0005354f) input_focus_pane_cp6_vc_ParamLimits

0x3c77,	// (0x0005354f) input_focus_pane_cp6_vc

0xd85e,	// (0x0005d136) list_midp_pane_ParamLimits

0x686a,	// (0x00056142) scroll_pane_cp16_ParamLimits

0x686a,	// (0x00056142) scroll_pane_cp16

0x55b9,	// (0x00054e91) button_value_adjust_pane_ParamLimits

0x55b9,	// (0x00054e91) button_value_adjust_pane

0xd9ff,	// (0x0005d2d7) button_value_adjust_pane_cp6_ParamLimits

0xd9ff,	// (0x0005d2d7) button_value_adjust_pane_cp6

0xdb19,	// (0x0005d3f1) settings_code_pane_cp_ParamLimits

0xdb19,	// (0x0005d3f1) settings_code_pane_cp

0x2c15,	// (0x000524ed) cell_touch_pane_g1

0x2c15,	// (0x000524ed) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0005efe0) cell_touch_pane_g

0xdcac,	// (0x0005d584) cell_touch_pane_cp_ParamLimits

0xdcac,	// (0x0005d584) cell_touch_pane_cp

0xdcc8,	// (0x0005d5a0) cell_touch_pane_ParamLimits

0xdcc8,	// (0x0005d5a0) cell_touch_pane

0x2c15,	// (0x000524ed) scroll_sc2_down_pane_g1

0x2c15,	// (0x000524ed) scroll_sc2_up_pane_g1

0x2c1f,	// (0x000524f7) bg_set_opt_pane_cp4_vc

0x6bfa,	// (0x000564d2) list_set_graphic_pane_vc_g1_ParamLimits

0x6bfa,	// (0x000564d2) list_set_graphic_pane_vc_g1

0x6c06,	// (0x000564de) list_set_graphic_pane_vc_g2_ParamLimits

0x6c06,	// (0x000564de) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0005f2d0) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0005f2d0) list_set_graphic_pane_vc_g

0x6c12,	// (0x000564ea) text_primary_small_cp13_vc_ParamLimits

0x6c12,	// (0x000564ea) text_primary_small_cp13_vc

0x6c2a,	// (0x00056502) list_set_graphic_pane_vc_ParamLimits

0x6c2a,	// (0x00056502) list_set_graphic_pane_vc

0x2c1f,	// (0x000524f7) input_focus_pane_cp2_vc

0x2c15,	// (0x000524ed) setting_code_pane_vc_g1

0x2d4a,	// (0x00052622) setting_code_pane_vc_t1

0x6c3d,	// (0x00056515) set_text_pane_vc_t1_ParamLimits

0x6c3d,	// (0x00056515) set_text_pane_vc_t1

0x2c1f,	// (0x000524f7) input_focus_pane_cp1_vc

0x6c59,	// (0x00056531) list_set_text_pane_vc

0x2c15,	// (0x000524ed) setting_text_pane_vc_g1

0x2c1f,	// (0x000524f7) bg_set_opt_pane_cp2_vc

0x2d41,	// (0x00052619) setting_slider_graphic_pane_vc_g1

0x6c63,	// (0x0005653b) setting_slider_graphic_pane_vc_t1

0x6c73,	// (0x0005654b) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0005f2d5) setting_slider_graphic_pane_vc_t

0x6c83,	// (0x0005655b) slider_set_pane_cp_vc

0x6c8b,	// (0x00056563) slider_set_pane_vc_g1

0x6c94,	// (0x0005656c) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0005f2da) slider_set_pane_vc_g

0x3cc6,	// (0x0005359e) set_opt_bg_pane_g1_copy1

0x3cce,	// (0x000535a6) set_opt_bg_pane_g2_copy1

0x6cc0,	// (0x00056598) set_opt_bg_pane_g3_copy1

0x3cde,	// (0x000535b6) set_opt_bg_pane_g4_copy1

0x3ce6,	// (0x000535be) set_opt_bg_pane_g5_copy1

0x3cee,	// (0x000535c6) set_opt_bg_pane_g6_copy1

0x6cca,	// (0x000565a2) set_opt_bg_pane_g7_copy1

0x6cd2,	// (0x000565aa) set_opt_bg_pane_g8_copy1

0x6cdc,	// (0x000565b4) set_opt_bg_pane_g9_copy1

0x2c1f,	// (0x000524f7) bg_set_opt_pane_cp_vc

0x6ce6,	// (0x000565be) setting_slider_pane_vc_t1

0x6cf5,	// (0x000565cd) setting_slider_pane_vc_t2

0x6d05,	// (0x000565dd) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0005f2e9) setting_slider_pane_vc_t

0x6d15,	// (0x000565ed) slider_set_pane_vc

0x162a,	// (0x00050f02) volume_set_pane_vc_g1

0x1633,	// (0x00050f0b) volume_set_pane_vc_g2

0x163c,	// (0x00050f14) volume_set_pane_vc_g3

0x1645,	// (0x00050f1d) volume_set_pane_vc_g4

0x164e,	// (0x00050f26) volume_set_pane_vc_g5

0x1657,	// (0x00050f2f) volume_set_pane_vc_g6

0x1660,	// (0x00050f38) volume_set_pane_vc_g7

0x1669,	// (0x00050f41) volume_set_pane_vc_g8

0x1672,	// (0x00050f4a) volume_set_pane_vc_g9

0x167b,	// (0x00050f53) volume_set_pane_vc_g10

0x0009,

0xf8b6,	// (0x0005f18e) volume_set_pane_vc_g

0x6d1d,	// (0x000565f5) volume_set_pane_vc

0x6d25,	// (0x000565fd) button_value_adjust_pane_cp1_vc

0x6d2f,	// (0x00056607) list_highlight_pane_cp2_vc

0x6d38,	// (0x00056610) list_set_pane_vc_ParamLimits

0x6d38,	// (0x00056610) list_set_pane_vc

0x6d96,	// (0x0005666e) main_pane_set_vc_t1_ParamLimits

0x6d96,	// (0x0005666e) main_pane_set_vc_t1

0x6dab,	// (0x00056683) main_pane_set_vc_t2_ParamLimits

0x6dab,	// (0x00056683) main_pane_set_vc_t2

0x6dbd,	// (0x00056695) main_pane_set_vc_t3_ParamLimits

0x6dbd,	// (0x00056695) main_pane_set_vc_t3

0x6dd1,	// (0x000566a9) main_pane_set_vc_t4_ParamLimits

0x6dd1,	// (0x000566a9) main_pane_set_vc_t4

0x0003,

0xfa18,	// (0x0005f2f0) main_pane_set_vc_t_ParamLimits

0xfa18,	// (0x0005f2f0) main_pane_set_vc_t

0x6de5,	// (0x000566bd) setting_code_pane_vc_ParamLimits

0x6de5,	// (0x000566bd) setting_code_pane_vc

0x6df6,	// (0x000566ce) setting_slider_graphic_pane_vc

0x6df6,	// (0x000566ce) setting_slider_pane_vc

0x6df6,	// (0x000566ce) setting_text_pane_vc

0x6df6,	// (0x000566ce) setting_volume_pane_vc

0x6e00,	// (0x000566d8) scroll_pane_cp121_vc

0x3c51,	// (0x00053529) set_content_pane_vc

0x6e08,	// (0x000566e0) button_value_adjust_pane_g1

0x6e11,	// (0x000566e9) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x0005f345) button_value_adjust_pane_g

0x6e1a,	// (0x000566f2) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6e1a,	// (0x000566f2) form_field_slider_wide_pane_vc_t1

0x6e2e,	// (0x00056706) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6e2e,	// (0x00056706) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x0005f34a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0005f34a) form_field_slider_wide_pane_vc_t

0x2f7a,	// (0x00052852) input_focus_pane_cp10_vc_ParamLimits

0x2f7a,	// (0x00052852) input_focus_pane_cp10_vc

0x6e5c,	// (0x00056734) slider_cont_pane_cp1_vc_ParamLimits

0x6e5c,	// (0x00056734) slider_cont_pane_cp1_vc

0x6e6e,	// (0x00056746) slider_form_pane_g1_cp2

0x6c94,	// (0x0005656c) slider_form_pane_g2_cp2

0x6e9b,	// (0x00056773) form_field_slider_pane_vc_t3

0x6ea9,	// (0x00056781) form_field_slider_pane_vc_t4

0x6eb7,	// (0x0005678f) slider_form_pane_vc_ParamLimits

0x6eb7,	// (0x0005678f) slider_form_pane_vc

0x6ec4,	// (0x0005679c) form_field_slider_pane_vc_t1_ParamLimits

0x6ec4,	// (0x0005679c) form_field_slider_pane_vc_t1

0x6e2e,	// (0x00056706) form_field_slider_pane_vc_t2_ParamLimits

0x6e2e,	// (0x00056706) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x0005f35c) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x0005f35c) form_field_slider_pane_vc_t

0x2f7a,	// (0x00052852) input_focus_pane_cp9_vc_ParamLimits

0x2f7a,	// (0x00052852) input_focus_pane_cp9_vc

0x6ee0,	// (0x000567b8) slider_cont_pane_vc_ParamLimits

0x6ee0,	// (0x000567b8) slider_cont_pane_vc

0x6ef4,	// (0x000567cc) list_form_graphic_pane_cp_vc_ParamLimits

0x6ef4,	// (0x000567cc) list_form_graphic_pane_cp_vc

0x522b,	// (0x00054b03) form_field_popup_wide_pane_vc_g1

0x6f09,	// (0x000567e1) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6f09,	// (0x000567e1) form_field_popup_wide_pane_vc_t1

0x3c77,	// (0x0005354f) input_focus_pane_cp8_vc_ParamLimits

0x3c77,	// (0x0005354f) input_focus_pane_cp8_vc

0x6f4e,	// (0x00056826) list_form_wide_pane_vc_ParamLimits

0x6f4e,	// (0x00056826) list_form_wide_pane_vc

0x6f5a,	// (0x00056832) list_form_graphic_pane_vc_g1

0x6f62,	// (0x0005683a) list_form_graphic_pane_vc_t1_ParamLimits

0x6f62,	// (0x0005683a) list_form_graphic_pane_vc_t1

0x2cff,	// (0x000525d7) list_highlight_pane_cp5_vc_ParamLimits

0x2cff,	// (0x000525d7) list_highlight_pane_cp5_vc

0x6f7e,	// (0x00056856) list_form_graphic_pane_vc_ParamLimits

0x6f7e,	// (0x00056856) list_form_graphic_pane_vc

0x522b,	// (0x00054b03) form_field_popup_pane_vc_g1

0x6f94,	// (0x0005686c) form_field_popup_pane_vc_t1_ParamLimits

0x6f94,	// (0x0005686c) form_field_popup_pane_vc_t1

0x3c77,	// (0x0005354f) input_focus_pane_cp7_vc_ParamLimits

0x3c77,	// (0x0005354f) input_focus_pane_cp7_vc

0x6fab,	// (0x00056883) list_form_pane_vc_ParamLimits

0x6fab,	// (0x00056883) list_form_pane_vc

0x6fb7,	// (0x0005688f) data_form_pane_vc_t1_ParamLimits

0x6fb7,	// (0x0005688f) data_form_pane_vc_t1

0x3cc6,	// (0x0005359e) input_focus_pane_vc_g1

0x3cce,	// (0x000535a6) input_focus_pane_vc_g2

0x3cd6,	// (0x000535ae) input_focus_pane_vc_g3

0x3cde,	// (0x000535b6) input_focus_pane_vc_g4

0x3ce6,	// (0x000535be) input_focus_pane_vc_g5

0x3cee,	// (0x000535c6) input_focus_pane_vc_g6

0x3cf6,	// (0x000535ce) input_focus_pane_vc_g7

0x3cfe,	// (0x000535d6) input_focus_pane_vc_g8

0x3d06,	// (0x000535de) input_focus_pane_vc_g9

0x2c15,	// (0x000524ed) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0005ef69) input_focus_pane_vc_g

0x521f,	// (0x00054af7) data_form_pane_vc_ParamLimits

0x521f,	// (0x00054af7) data_form_pane_vc

0x522b,	// (0x00054b03) form_field_data_pane_vc_g1

0x6fd2,	// (0x000568aa) form_field_data_pane_vc_t1_ParamLimits

0x6fd2,	// (0x000568aa) form_field_data_pane_vc_t1

0x3c77,	// (0x0005354f) input_focus_pane_vc_ParamLimits

0x3c77,	// (0x0005354f) input_focus_pane_vc

0x6fec,	// (0x000568c4) button_value_adjust_pane_cp3_vc

0x6ff4,	// (0x000568cc) button_value_adjust_pane_cp5_vc

0x6ffc,	// (0x000568d4) form_field_data_pane_vc_ParamLimits

0x6ffc,	// (0x000568d4) form_field_data_pane_vc

0x7013,	// (0x000568eb) form_field_data_pane_vc_cp2

0x701b,	// (0x000568f3) form_field_data_wide_pane_vc_ParamLimits

0x701b,	// (0x000568f3) form_field_data_wide_pane_vc

0x7031,	// (0x00056909) form_field_data_wide_pane_vc_cp2

0x7039,	// (0x00056911) form_field_popup_pane_vc_ParamLimits

0x7039,	// (0x00056911) form_field_popup_pane_vc

0x7050,	// (0x00056928) form_field_popup_wide_pane_vc_ParamLimits

0x7050,	// (0x00056928) form_field_popup_wide_pane_vc

0x7066,	// (0x0005693e) form_field_slider_pane_vc_ParamLimits

0x7066,	// (0x0005693e) form_field_slider_pane_vc

0x7079,	// (0x00056951) form_field_slider_wide_pane_vc_ParamLimits

0x7079,	// (0x00056951) form_field_slider_wide_pane_vc

0xdce6,	// (0x0005d5be) grid_touch_1_pane_ParamLimits

0xdce6,	// (0x0005d5be) grid_touch_1_pane

0xdcfa,	// (0x0005d5d2) grid_touch_2_pane_ParamLimits

0xdcfa,	// (0x0005d5d2) grid_touch_2_pane

0x7147,	// (0x00056a1f) touch_pane_g1_ParamLimits

0x7147,	// (0x00056a1f) touch_pane_g1

0x70b0,	// (0x00056988) cell_app_pane_cp_wide_ParamLimits

0x70b0,	// (0x00056988) cell_app_pane_cp_wide

0x70c1,	// (0x00056999) grid_popup_fast_wide_pane_ParamLimits

0x70c1,	// (0x00056999) grid_popup_fast_wide_pane

0x70d5,	// (0x000569ad) scroll_pane_cp19_ParamLimits

0x70d5,	// (0x000569ad) scroll_pane_cp19

0x2c1f,	// (0x000524f7) bg_popup_window_pane_cp20

0x70e9,	// (0x000569c1) listscroll_popup_fast_wide_pane

0x3e2e,	// (0x00053706) grid_indicator_nsta_pane

0x70f1,	// (0x000569c9) clock_nsta_pane_g1

0x70fa,	// (0x000569d2) clock_nsta_pane_t1

0xdd24,	// (0x0005d5fc) cell_indicator_nsta_pane_ParamLimits

0xdd24,	// (0x0005d5fc) cell_indicator_nsta_pane

0x7147,	// (0x00056a1f) cell_indicator_nsta_pane_g1

0xdd3b,	// (0x0005d613) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x0005f36d) cell_indicator_nsta_pane_g

0x7162,	// (0x00056a3a) clock_nsta_pane_cp

0x716a,	// (0x00056a42) indicator_nsta_pane_cp

0x7172,	// (0x00056a4a) nsta_clock_indic_pane_g1

0x2dc8,	// (0x000526a0) grid_indicator_pane

0x41fa,	// (0x00053ad2) scroll_pane_cp29

0x0af5,	// (0x000503cd) indicator_nsta_pane_cp2_ParamLimits

0x0af5,	// (0x000503cd) indicator_nsta_pane_cp2

0x2cff,	// (0x000525d7) main_apps_wheel_pane

0x5440,	// (0x00054d18) form_midp_field_text_pane_ParamLimits

0x558b,	// (0x00054e63) scroll_bar_cp050_ParamLimits

0x71d3,	// (0x00056aab) cell_indicator_pane_ParamLimits

0x71d3,	// (0x00056aab) cell_indicator_pane

0x71ea,	// (0x00056ac2) cell_indicator_pane_g1

0xdd48,	// (0x0005d620) grid_wheel_folder_pane_ParamLimits

0xdd48,	// (0x0005d620) grid_wheel_folder_pane

0xdd56,	// (0x0005d62e) list_wheel_apps_pane_ParamLimits

0xdd56,	// (0x0005d62e) list_wheel_apps_pane

0xdd64,	// (0x0005d63c) main_apps_wheel_pane_g1_ParamLimits

0xdd64,	// (0x0005d63c) main_apps_wheel_pane_g1

0xdd70,	// (0x0005d648) main_apps_wheel_pane_g2_ParamLimits

0xdd70,	// (0x0005d648) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x0005f389) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x0005f389) main_apps_wheel_pane_g

0xdd7e,	// (0x0005d656) main_apps_wheel_pane_t1_ParamLimits

0xdd7e,	// (0x0005d656) main_apps_wheel_pane_t1

0xdd92,	// (0x0005d66a) list_wheel_apps_pane_g1

0xdd9a,	// (0x0005d672) list_wheel_apps_pane_g2

0xdda2,	// (0x0005d67a) list_wheel_apps_pane_g3

0xddaa,	// (0x0005d682) list_wheel_apps_pane_g4

0xddb4,	// (0x0005d68c) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x0005f38e) list_wheel_apps_pane_g

0x477d,	// (0x00054055) navi_icon_text_pane

0xd312,	// (0x0005cbea) aid_fill_nsta

0x72af,	// (0x00056b87) navi_icon_text_pane_g1

0x72bb,	// (0x00056b93) navi_icon_text_pane_t1

0xd176,	// (0x0005ca4e) list_set_graphic_pane_t1_ParamLimits

0xd176,	// (0x0005ca4e) list_set_graphic_pane_t1

0x5ce6,	// (0x000555be) popup_midp_note_alarm_window_t6_ParamLimits

0x5ce6,	// (0x000555be) popup_midp_note_alarm_window_t6

0x5cf8,	// (0x000555d0) popup_midp_note_alarm_window_t7_ParamLimits

0x5cf8,	// (0x000555d0) popup_midp_note_alarm_window_t7

0x5d0a,	// (0x000555e2) popup_midp_note_alarm_window_t8_ParamLimits

0x5d0a,	// (0x000555e2) popup_midp_note_alarm_window_t8

0x5d1c,	// (0x000555f4) popup_midp_note_alarm_window_t9_ParamLimits

0x5d1c,	// (0x000555f4) popup_midp_note_alarm_window_t9

0x5d2e,	// (0x00055606) popup_midp_note_alarm_window_t10_ParamLimits

0x5d2e,	// (0x00055606) popup_midp_note_alarm_window_t10

0x5d40,	// (0x00055618) popup_midp_note_alarm_window_t11_ParamLimits

0x5d40,	// (0x00055618) popup_midp_note_alarm_window_t11

0x5d52,	// (0x0005562a) scroll_pane_cp17_ParamLimits

0x5d52,	// (0x0005562a) scroll_pane_cp17

0x162a,	// (0x00050f02) volume_small_pane_cp_g1

0x1b5c,	// (0x00051434) volume_small_pane_cp_g2

0x1b65,	// (0x0005143d) volume_small_pane_cp_g3

0x1b6e,	// (0x00051446) volume_small_pane_cp_g4

0x1b77,	// (0x0005144f) volume_small_pane_cp_g5

0x1b80,	// (0x00051458) volume_small_pane_cp_g6

0x1b89,	// (0x00051461) volume_small_pane_cp_g7

0x1b92,	// (0x0005146a) volume_small_pane_cp_g8

0x1b9b,	// (0x00051473) volume_small_pane_cp_g9

0x1ba4,	// (0x0005147c) volume_small_pane_cp_g10

0x49ce,	// (0x000542a6) midp_ticker_pane_g1_ParamLimits

0x49da,	// (0x000542b2) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0005f035) midp_ticker_pane_g_ParamLimits

0x49e6,	// (0x000542be) midp_ticker_pane_t1_ParamLimits

0xd336,	// (0x0005cc0e) aid_fill_nsta_2

0x5577,	// (0x00054e4f) list_form2_midp_pane

0x66ac,	// (0x00055f84) midp_editing_number_pane_ParamLimits

0x66bb,	// (0x00055f93) midp_ticker_pane_ParamLimits

0x72cd,	// (0x00056ba5) form2_midp_field_pane

0x72f1,	// (0x00056bc9) scroll_pane_cp51

0x7311,	// (0x00056be9) form2_midp_button_pane_ParamLimits

0x7311,	// (0x00056be9) form2_midp_button_pane

0x7323,	// (0x00056bfb) form2_midp_content_pane_ParamLimits

0x7323,	// (0x00056bfb) form2_midp_content_pane

0x733d,	// (0x00056c15) form2_midp_field_choice_group_pane

0x7345,	// (0x00056c1d) form2_midp_field_pane_g1

0x734d,	// (0x00056c25) form2_midp_field_pane_g2

0x7355,	// (0x00056c2d) form2_midp_field_pane_g3

0x735d,	// (0x00056c35) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x0005f3b3) form2_midp_field_pane_g

0x7365,	// (0x00056c3d) form2_midp_gauge_slider_pane

0x736d,	// (0x00056c45) form2_midp_gauge_wait_pane

0x7375,	// (0x00056c4d) form2_midp_image_pane_ParamLimits

0x7375,	// (0x00056c4d) form2_midp_image_pane

0x7390,	// (0x00056c68) form2_midp_label_pane_ParamLimits

0x7390,	// (0x00056c68) form2_midp_label_pane

0xdde7,	// (0x0005d6bf) form2_midp_label_pane_cp_ParamLimits

0xdde7,	// (0x0005d6bf) form2_midp_label_pane_cp

0x73ca,	// (0x00056ca2) form2_midp_string_pane_ParamLimits

0x73ca,	// (0x00056ca2) form2_midp_string_pane

0xc4c1,	// (0x0005bd99) form2_midp_text_pane_ParamLimits

0xc4c1,	// (0x0005bd99) form2_midp_text_pane

0x73dc,	// (0x00056cb4) form2_midp_time_pane

0x73ec,	// (0x00056cc4) input_focus_pane_cp51_ParamLimits

0x73ec,	// (0x00056cc4) input_focus_pane_cp51

0x7404,	// (0x00056cdc) form2_midp_label_pane_t1_ParamLimits

0x7404,	// (0x00056cdc) form2_midp_label_pane_t1

0xc4e0,	// (0x0005bdb8) form2_mdip_text_pane_t1_ParamLimits

0xc4e0,	// (0x0005bdb8) form2_mdip_text_pane_t1

0x33f0,	// (0x00052cc8) form2_midp_time_pane_t1

0x744d,	// (0x00056d25) form2_midp_gauge_slider_pane_t1

0xde06,	// (0x0005d6de) form2_midp_gauge_slider_pane_t2

0xde18,	// (0x0005d6f0) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x0005f3bc) form2_midp_gauge_slider_pane_t

0x7483,	// (0x00056d5b) form2_midp_slider_pane

0x748f,	// (0x00056d67) form2_midp_gauge_wait_pane_t1

0x749d,	// (0x00056d75) form2_midp_wait_pane_ParamLimits

0x749d,	// (0x00056d75) form2_midp_wait_pane

0xde2a,	// (0x0005d702) list_single_2graphic_pane_cp4_ParamLimits

0xde2a,	// (0x0005d702) list_single_2graphic_pane_cp4

0xd7ec,	// (0x0005d0c4) list_single_midp_graphic_pane_cp_ParamLimits

0xd7ec,	// (0x0005d0c4) list_single_midp_graphic_pane_cp

0x2c1f,	// (0x000524f7) list_highlight_pane_cp20

0x74f7,	// (0x00056dcf) list_single_2graphic_pane_g1_cp4

0x74ff,	// (0x00056dd7) list_single_2graphic_pane_g2_cp4

0x7507,	// (0x00056ddf) list_single_2graphic_pane_t1_cp4

0x2cff,	// (0x000525d7) list_highlight_pane_cp21

0x7516,	// (0x00056dee) list_single_midp_graphic_pane_g4_cp

0x7525,	// (0x00056dfd) list_single_midp_graphic_pane_t1_cp

0xde3e,	// (0x0005d716) form2_mdip_string_pane_t1_ParamLimits

0xde3e,	// (0x0005d716) form2_mdip_string_pane_t1

0x2c1f,	// (0x000524f7) bg_wml_button_pane_cp2

0x2c15,	// (0x000524ed) form2_midp_image_pane_g1

0x30e0,	// (0x000529b8) list_double_large_graphic_pane_g5_ParamLimits

0x30e0,	// (0x000529b8) list_double_large_graphic_pane_g5

0x4c3b,	// (0x00054513) midp_form_pane_ParamLimits

0x2cff,	// (0x000525d7) main_apps_wheel_pane_ParamLimits

0xc14b,	// (0x0005ba23) popup_preview_window_ParamLimits

0xc14b,	// (0x0005ba23) popup_preview_window

0x1395,	// (0x00050c6d) popup_touch_info_window_ParamLimits

0x1395,	// (0x00050c6d) popup_touch_info_window

0x13b3,	// (0x00050c8b) popup_touch_menu_window_ParamLimits

0x13b3,	// (0x00050c8b) popup_touch_menu_window

0x2c0b,	// (0x000524e3) bg_popup_sub_pane_cp6

0x7633,	// (0x00056f0b) list_touch_menu_pane

0x763b,	// (0x00056f13) list_single_touch_menu_pane_ParamLimits

0x763b,	// (0x00056f13) list_single_touch_menu_pane

0x7651,	// (0x00056f29) list_single_touch_menu_pane_t1

0x2cff,	// (0x000525d7) bg_popup_sub_pane_cp7_ParamLimits

0x2cff,	// (0x000525d7) bg_popup_sub_pane_cp7

0x765f,	// (0x00056f37) heading_sub_pane

0x7667,	// (0x00056f3f) list_touch_info_pane_ParamLimits

0x7667,	// (0x00056f3f) list_touch_info_pane

0x7676,	// (0x00056f4e) list_single_touch_info_pane_ParamLimits

0x7676,	// (0x00056f4e) list_single_touch_info_pane

0x7688,	// (0x00056f60) list_single_touch_info_pane_t1

0x7696,	// (0x00056f6e) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x0005f3ca) list_single_touch_info_pane_t

0x48fd,	// (0x000541d5) bg_popup_heading_pane_cp

0x76a4,	// (0x00056f7c) heading_sub_pane_t1

0x51b9,	// (0x00054a91) bg_popup_preview_window_pane_cp_ParamLimits

0x51b9,	// (0x00054a91) bg_popup_preview_window_pane_cp

0x765f,	// (0x00056f37) heading_preview_pane

0x7667,	// (0x00056f3f) list_preview_pane_ParamLimits

0x7667,	// (0x00056f3f) list_preview_pane

0x76b2,	// (0x00056f8a) popup_preview_window_g1

0x7676,	// (0x00056f4e) list_single_preview_pane_ParamLimits

0x7676,	// (0x00056f4e) list_single_preview_pane

0x76ba,	// (0x00056f92) list_single_preview_pane_g1

0x76c2,	// (0x00056f9a) list_single_preview_pane_t1

0x7688,	// (0x00056f60) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x0005f3cf) list_single_preview_pane_t

0x76d0,	// (0x00056fa8) bg_popup_heading_pane_cp2_ParamLimits

0x76d0,	// (0x00056fa8) bg_popup_heading_pane_cp2

0x76e6,	// (0x00056fbe) heading_preview_pane_g1

0x76ee,	// (0x00056fc6) heading_preview_pane_t1_ParamLimits

0x76ee,	// (0x00056fc6) heading_preview_pane_t1

0x2deb,	// (0x000526c3) soft_indicator_pane_t1_ParamLimits

0x3bde,	// (0x000534b6) scroll_pane_ParamLimits

0x40f3,	// (0x000539cb) scroll_sc2_left_pane

0x40fc,	// (0x000539d4) scroll_sc2_right_pane

0x411b,	// (0x000539f3) scroll_bg_pane_g1_ParamLimits

0x4130,	// (0x00053a08) scroll_bg_pane_g2_ParamLimits

0x4148,	// (0x00053a20) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0005efc0) scroll_bg_pane_g_ParamLimits

0x411b,	// (0x000539f3) scroll_handle_pane_g1_ParamLimits

0x416a,	// (0x00053a42) scroll_handle_pane_g2_ParamLimits

0x4148,	// (0x00053a20) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0005efc7) scroll_handle_pane_g_ParamLimits

0x0e5b,	// (0x00050733) popup_choice_list_window_ParamLimits

0x0e5b,	// (0x00050733) popup_choice_list_window

0x508f,	// (0x00054967) choice_list_pane

0x5111,	// (0x000549e9) cell_toolbar_pane_t1

0x5139,	// (0x00054a11) toolbar_button_pane_ParamLimits

0x620c,	// (0x00055ae4) ai_gene_pane_1_t2_ParamLimits

0x620c,	// (0x00055ae4) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0005f1ea) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0005f1ea) ai_gene_pane_1_t

0x770b,	// (0x00056fe3) scroll_sc2_left_pane_g1

0x770b,	// (0x00056fe3) scroll_sc2_right_pane_g1

0x4c3b,	// (0x00054513) bg_popup_sub_pane_cp10

0x7715,	// (0x00056fed) list_choice_list_pane

0x772e,	// (0x00057006) list_single_choice_list_pane_ParamLimits

0x772e,	// (0x00057006) list_single_choice_list_pane

0x7741,	// (0x00057019) list_single_choice_list_pane_g1

0x3dff,	// (0x000536d7) list_single_choice_list_pane_t1_ParamLimits

0x3dff,	// (0x000536d7) list_single_choice_list_pane_t1

0x7749,	// (0x00057021) choice_list_pane_g1

0x7751,	// (0x00057029) choice_list_pane_t1

0x2c0b,	// (0x000524e3) input_focus_pane_cp11

0x3fd6,	// (0x000538ae) title_pane_stacon_g2_ParamLimits

0x3fd6,	// (0x000538ae) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0005efa6) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0005efa6) title_pane_stacon_g

0x48fd,	// (0x000541d5) cursor_press_pane

0xbdf8,	// (0x0005b6d0) popup_fep_hwr_window_ParamLimits

0xbdf8,	// (0x0005b6d0) popup_fep_hwr_window

0x0f81,	// (0x00050859) popup_fep_vkb_window_ParamLimits

0x0f81,	// (0x00050859) popup_fep_vkb_window

0x775f,	// (0x00057037) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x0005f3f8) fep_vkb_side_pane_g_ParamLimits

0x1be6,	// (0x000514be) fep_hwr_candidate_pane_ParamLimits

0x1be6,	// (0x000514be) fep_hwr_candidate_pane

0x1c10,	// (0x000514e8) fep_hwr_side_pane_ParamLimits

0x1c10,	// (0x000514e8) fep_hwr_side_pane

0x1c30,	// (0x00051508) fep_hwr_top_pane_ParamLimits

0x1c30,	// (0x00051508) fep_hwr_top_pane

0x1c48,	// (0x00051520) fep_hwr_write_pane_ParamLimits

0x1c48,	// (0x00051520) fep_hwr_write_pane

0xfb20,	// (0x0005f3f8) fep_vkb_side_pane_g

0x7767,	// (0x0005703f) fep_hwr_top_pane_g1

0x7779,	// (0x00057051) fep_hwr_top_pane_g2

0x1c82,	// (0x0005155a) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x0005f3d4) fep_hwr_top_pane_g

0x1c97,	// (0x0005156f) fep_hwr_top_text_pane

0x42ea,	// (0x00053bc2) fep_hwr_top_text_pane_g1

0x77af,	// (0x00057087) fep_hwr_top_text_pane_t1

0x1d8d,	// (0x00051665) fep_hwr_candidate_pane_g1

0x7a02,	// (0x000572da) fep_vkb_keypad_pane_g3_ParamLimits

0x7a02,	// (0x000572da) fep_vkb_keypad_pane_g3

0x7a2a,	// (0x00057302) fep_vkb_keypad_pane_g4_ParamLimits

0x7a2a,	// (0x00057302) fep_vkb_keypad_pane_g4

0x7a99,	// (0x00057371) fep_vkb_bottom_pane_g2_ParamLimits

0x7a99,	// (0x00057371) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x0005f3ff) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x0005f3ff) fep_vkb_bottom_pane_g

0x770b,	// (0x00056fe3) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x0005f409) cell_vkb_side_pane_g

0x7b24,	// (0x000573fc) cell_vkb_side_pane_t1

0x7b32,	// (0x0005740a) cell_vkb_side_pane_t1_copy1

0x770b,	// (0x00056fe3) bg_fep_vkb_candidate_pane_g2

0x7c5e,	// (0x00057536) cell_vkb_candidate_pane_ParamLimits

0x77bd,	// (0x00057095) aid_size_cell_vkb_ParamLimits

0x77bd,	// (0x00057095) aid_size_cell_vkb

0x7c5e,	// (0x00057536) cell_vkb_candidate_pane

0x1db4,	// (0x0005168c) bg_popup_fep_shadow_pane_g1

0xdecf,	// (0x0005d7a7) fep_vkb_bottom_pane_ParamLimits

0xdecf,	// (0x0005d7a7) fep_vkb_bottom_pane

0x7881,	// (0x00057159) fep_vkb_candidate_pane_ParamLimits

0x7881,	// (0x00057159) fep_vkb_candidate_pane

0xdef4,	// (0x0005d7cc) fep_vkb_keypad_pane_ParamLimits

0xdef4,	// (0x0005d7cc) fep_vkb_keypad_pane

0xdf30,	// (0x0005d808) fep_vkb_side_pane_ParamLimits

0xdf30,	// (0x0005d808) fep_vkb_side_pane

0xdf6c,	// (0x0005d844) fep_vkb_top_pane_ParamLimits

0xdf6c,	// (0x0005d844) fep_vkb_top_pane

0x795b,	// (0x00057233) fep_vkb_top_pane_g1_ParamLimits

0x795b,	// (0x00057233) fep_vkb_top_pane_g1

0x796a,	// (0x00057242) fep_vkb_top_pane_g2_ParamLimits

0x796a,	// (0x00057242) fep_vkb_top_pane_g2

0x7979,	// (0x00057251) fep_vkb_top_pane_g3_ParamLimits

0x7979,	// (0x00057251) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x0005f3ef) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x0005f3ef) fep_vkb_top_pane_g

0x7997,	// (0x0005726f) fep_vkb_top_text_pane_ParamLimits

0x7997,	// (0x0005726f) fep_vkb_top_text_pane

0xdfa8,	// (0x0005d880) fep_vkb_side_pane_g1_ParamLimits

0xdfa8,	// (0x0005d880) fep_vkb_side_pane_g1

0x79f1,	// (0x000572c9) grid_vkb_side_pane_ParamLimits

0x79f1,	// (0x000572c9) grid_vkb_side_pane

0x1dbc,	// (0x00051694) bg_popup_fep_shadow_pane_g2

0x1dc5,	// (0x0005169d) bg_popup_fep_shadow_pane_g3

0x1dcd,	// (0x000516a5) bg_popup_fep_shadow_pane_g4

0x1dd6,	// (0x000516ae) bg_popup_fep_shadow_pane_g5

0x1de0,	// (0x000516b8) bg_popup_fep_shadow_pane_g6

0x1de8,	// (0x000516c0) bg_popup_fep_shadow_pane_g7

0x3cde,	// (0x000535b6) bg_popup_fep_shadow_pane_g8

0x7a48,	// (0x00057320) grid_vkb_keypad_number_pane_ParamLimits

0x7a48,	// (0x00057320) grid_vkb_keypad_number_pane

0x7a58,	// (0x00057330) grid_vkb_keypad_pane_ParamLimits

0x7a58,	// (0x00057330) grid_vkb_keypad_pane

0x7a7e,	// (0x00057356) fep_vkb_bottom_pane_g1_ParamLimits

0x7a7e,	// (0x00057356) fep_vkb_bottom_pane_g1

0x7aa7,	// (0x0005737f) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7aa7,	// (0x0005737f) grid_vkb_keypad_bottom_left_pane

0x7abc,	// (0x00057394) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7abc,	// (0x00057394) grid_vkb_keypad_bottom_right_pane

0x7ad1,	// (0x000573a9) fep_vkb_top_text_pane_g1

0xdfef,	// (0x0005d8c7) fep_vkb_top_text_pane_t1

0xe001,	// (0x0005d8d9) cell_vkb_side_pane_ParamLimits

0xe001,	// (0x0005d8d9) cell_vkb_side_pane

0x770b,	// (0x00056fe3) cell_vkb_side_pane_g1

0x7b40,	// (0x00057418) cell_vkb_keypad_pane_ParamLimits

0x7b40,	// (0x00057418) cell_vkb_keypad_pane

0x7bb5,	// (0x0005748d) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x0005f41c) bg_popup_fep_shadow_pane_g

0x1dfa,	// (0x000516d2) cell_hwr_side_pane_g1

0x1dfa,	// (0x000516d2) cell_hwr_side_pane_g2

0x7bbf,	// (0x00057497) cell_vkb_keypad_pane_t1

0xe017,	// (0x0005d8ef) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe017,	// (0x0005d8ef) cell_vkb_keypad_bottom_left_pane

0xe02c,	// (0x0005d904) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe02c,	// (0x0005d904) cell_vkb_keypad_bottom_right_pane

0x770b,	// (0x00056fe3) cell_vkb_keypad_bottom_left_pane_g1

0x770b,	// (0x00056fe3) cell_vkb_keypad_bottom_right_pane_g1

0x7c23,	// (0x000574fb) cell_vkb_keypad_number_pane_ParamLimits

0x7c23,	// (0x000574fb) cell_vkb_keypad_number_pane

0x7c42,	// (0x0005751a) cell_vkb_keypad_number_pane_g1

0x7c4c,	// (0x00057524) cell_vkb_keypad_number_pane_g2

0x7c55,	// (0x0005752d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x0005f40e) cell_vkb_keypad_number_pane_g

0x7bbf,	// (0x00057497) cell_vkb_keypad_number_pane_t1

0x7c79,	// (0x00057551) fep_vkb_candidate_pane_g1

0x0001,

0xfb57,	// (0x0005f42f) cell_hwr_side_pane_g

0x7c92,	// (0x0005756a) cell_hwr_side_pane_t1

0x1e04,	// (0x000516dc) cell_hwr_side_pane_t1_copy1

0x1e12,	// (0x000516ea) cell_hwr_candidate_pane_g1

0x1e41,	// (0x00051719) cell_hwr_candidate_pane_t1

0x770b,	// (0x00056fe3) cell_vkb_candidate_pane_g2

0x7ce2,	// (0x000575ba) cell_vkb_candidate_pane_t1

0x1bad,	// (0x00051485) bg_popup_fep_shadow_pane_ParamLimits

0x1bad,	// (0x00051485) bg_popup_fep_shadow_pane

0x1c62,	// (0x0005153a) bg_fep_hwr_top_pane_g4

0x778b,	// (0x00057063) bg_hwr_side_pane_g1_ParamLimits

0x778b,	// (0x00057063) bg_hwr_side_pane_g1

0xc512,	// (0x0005bdea) cell_hwr_side_pane_ParamLimits

0xc512,	// (0x0005bdea) cell_hwr_side_pane

0x1d0e,	// (0x000515e6) fep_hwr_write_pane_g1_ParamLimits

0x1d0e,	// (0x000515e6) fep_hwr_write_pane_g1

0x1d1b,	// (0x000515f3) fep_hwr_write_pane_g2_ParamLimits

0x1d1b,	// (0x000515f3) fep_hwr_write_pane_g2

0x1d28,	// (0x00051600) fep_hwr_write_pane_g3_ParamLimits

0x1d28,	// (0x00051600) fep_hwr_write_pane_g3

0xc532,	// (0x0005be0a) fep_hwr_write_pane_g4_ParamLimits

0xc532,	// (0x0005be0a) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x0005f3db) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x0005f3db) fep_hwr_write_pane_g

0x1c62,	// (0x0005153a) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1c62,	// (0x0005153a) bg_fep_hwr_candidate_pane_g2

0x1d4b,	// (0x00051623) cell_hwr_candidate_pane_ParamLimits

0x1d4b,	// (0x00051623) cell_hwr_candidate_pane

0x1d8d,	// (0x00051665) fep_hwr_candidate_pane_g1_ParamLimits

0x77eb,	// (0x000570c3) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x77eb,	// (0x000570c3) bg_popup_fep_shadow_pane_cp2

0x7989,	// (0x00057261) fep_vkb_top_pane_g4_ParamLimits

0x7989,	// (0x00057261) fep_vkb_top_pane_g4

0x79cf,	// (0x000572a7) fep_vkb_side_pane_g2_ParamLimits

0x79cf,	// (0x000572a7) fep_vkb_side_pane_g2

0xb8e0,	// (0x0005b1b8) list_setting_pane_t4_ParamLimits

0xb8e0,	// (0x0005b1b8) list_setting_pane_t4

0xb97a,	// (0x0005b252) list_setting_number_pane_t5_ParamLimits

0xb97a,	// (0x0005b252) list_setting_number_pane_t5

0x4321,	// (0x00053bf9) list_double_heading_pane_cp2_ParamLimits

0x4321,	// (0x00053bf9) list_double_heading_pane_cp2

0x3c12,	// (0x000534ea) list_double_heading_pane_g1_cp2_ParamLimits

0x3c12,	// (0x000534ea) list_double_heading_pane_g1_cp2

0x3c85,	// (0x0005355d) list_double_heading_pane_g2_cp2_ParamLimits

0x3c85,	// (0x0005355d) list_double_heading_pane_g2_cp2

0x7cf0,	// (0x000575c8) list_double_heading_pane_t1_cp2_ParamLimits

0x7cf0,	// (0x000575c8) list_double_heading_pane_t1_cp2

0x7d06,	// (0x000575de) list_double_heading_pane_t2_cp2_ParamLimits

0x7d06,	// (0x000575de) list_double_heading_pane_t2_cp2

0x2bf3,	// (0x000524cb) aid_value_unit2

0xf544,	// (0x0005ee1c) popup_preview_fixed_window

0x2f88,	// (0x00052860) bg_popup_preview_window_pane_cp02

0x7d18,	// (0x000575f0) list_preview_fixed_pane

0x7d5e,	// (0x00057636) list_empty_pane_fp_ParamLimits

0x7d5e,	// (0x00057636) list_empty_pane_fp

0x7d5e,	// (0x00057636) list_single_cale_day_pane_fp_ParamLimits

0x7d5e,	// (0x00057636) list_single_cale_day_pane_fp

0x7d5e,	// (0x00057636) list_single_graphic_heading_pane_fp_ParamLimits

0x7d5e,	// (0x00057636) list_single_graphic_heading_pane_fp

0x7d5e,	// (0x00057636) list_single_graphic_pane_fp_ParamLimits

0x7d5e,	// (0x00057636) list_single_graphic_pane_fp

0x7d5e,	// (0x00057636) list_single_heading_pane_fp_ParamLimits

0x7d5e,	// (0x00057636) list_single_heading_pane_fp

0x7d5e,	// (0x00057636) list_single_pane_fp_ParamLimits

0x7d5e,	// (0x00057636) list_single_pane_fp

0x7d73,	// (0x0005764b) list_single_pane_fp_g1_ParamLimits

0x7d73,	// (0x0005764b) list_single_pane_fp_g1

0x3c12,	// (0x000534ea) list_single_pane_fp_g2_ParamLimits

0x3c12,	// (0x000534ea) list_single_pane_fp_g2

0x3c85,	// (0x0005355d) list_single_pane_fp_g3_ParamLimits

0x3c85,	// (0x0005355d) list_single_pane_fp_g3

0x7d7f,	// (0x00057657) list_single_pane_fp_g4_ParamLimits

0x7d7f,	// (0x00057657) list_single_pane_fp_g4

0x0003,

0xfb6a,	// (0x0005f442) list_single_pane_fp_g_ParamLimits

0xfb6a,	// (0x0005f442) list_single_pane_fp_g

0x3403,	// (0x00052cdb) list_single_pane_fp_t1_ParamLimits

0x3403,	// (0x00052cdb) list_single_pane_fp_t1

0x341a,	// (0x00052cf2) list_single_graphic_pane_fp_g1_ParamLimits

0x341a,	// (0x00052cf2) list_single_graphic_pane_fp_g1

0x7d73,	// (0x0005764b) list_single_graphic_pane_fp_g2_ParamLimits

0x7d73,	// (0x0005764b) list_single_graphic_pane_fp_g2

0x3c12,	// (0x000534ea) list_single_graphic_pane_fp_g3_ParamLimits

0x3c12,	// (0x000534ea) list_single_graphic_pane_fp_g3

0x3c85,	// (0x0005355d) list_single_graphic_pane_fp_g4_ParamLimits

0x3c85,	// (0x0005355d) list_single_graphic_pane_fp_g4

0x7d7f,	// (0x00057657) list_single_graphic_pane_fp_g5_ParamLimits

0x7d7f,	// (0x00057657) list_single_graphic_pane_fp_g5

0x0004,

0xfb73,	// (0x0005f44b) list_single_graphic_pane_fp_g_ParamLimits

0xfb73,	// (0x0005f44b) list_single_graphic_pane_fp_g

0x3426,	// (0x00052cfe) list_single_graphic_pane_fp_t1_ParamLimits

0x3426,	// (0x00052cfe) list_single_graphic_pane_fp_t1

0x341a,	// (0x00052cf2) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x341a,	// (0x00052cf2) list_single_graphic_heading_pane_fp_g1

0x7d73,	// (0x0005764b) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7d73,	// (0x0005764b) list_single_graphic_heading_pane_fp_g2

0x3c12,	// (0x000534ea) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3c12,	// (0x000534ea) list_single_graphic_heading_pane_fp_g3

0x3c85,	// (0x0005355d) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3c85,	// (0x0005355d) list_single_graphic_heading_pane_fp_g4

0x7d7f,	// (0x00057657) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7d7f,	// (0x00057657) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb73,	// (0x0005f44b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb73,	// (0x0005f44b) list_single_graphic_heading_pane_fp_g

0x343c,	// (0x00052d14) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x343c,	// (0x00052d14) list_single_graphic_heading_pane_fp_t1

0x3452,	// (0x00052d2a) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3452,	// (0x00052d2a) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb7e,	// (0x0005f456) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb7e,	// (0x0005f456) list_single_graphic_heading_pane_fp_t

0x3464,	// (0x00052d3c) list_single_cale_day_pane_fp_g1_ParamLimits

0x3464,	// (0x00052d3c) list_single_cale_day_pane_fp_g1

0x7d8b,	// (0x00057663) list_single_cale_day_pane_fp_g2_ParamLimits

0x7d8b,	// (0x00057663) list_single_cale_day_pane_fp_g2

0x349c,	// (0x00052d74) list_single_cale_day_pane_fp_g3_ParamLimits

0x349c,	// (0x00052d74) list_single_cale_day_pane_fp_g3

0x34c4,	// (0x00052d9c) list_single_cale_day_pane_fp_g4_ParamLimits

0x34c4,	// (0x00052d9c) list_single_cale_day_pane_fp_g4

0x34e8,	// (0x00052dc0) list_single_cale_day_pane_fp_g5_ParamLimits

0x34e8,	// (0x00052dc0) list_single_cale_day_pane_fp_g5

0x0004,

0xfb83,	// (0x0005f45b) list_single_cale_day_pane_fp_g_ParamLimits

0xfb83,	// (0x0005f45b) list_single_cale_day_pane_fp_g

0x350c,	// (0x00052de4) list_single_cale_day_pane_fp_t1_ParamLimits

0x350c,	// (0x00052de4) list_single_cale_day_pane_fp_t1

0x3532,	// (0x00052e0a) list_single_cale_day_pane_fp_t2_ParamLimits

0x3532,	// (0x00052e0a) list_single_cale_day_pane_fp_t2

0x354b,	// (0x00052e23) list_single_cale_day_pane_fp_t3_ParamLimits

0x354b,	// (0x00052e23) list_single_cale_day_pane_fp_t3

0x0002,

0xfb8e,	// (0x0005f466) list_single_cale_day_pane_fp_t_ParamLimits

0xfb8e,	// (0x0005f466) list_single_cale_day_pane_fp_t

0x7d73,	// (0x0005764b) list_empty_pane_fp_g1_ParamLimits

0x7d73,	// (0x0005764b) list_empty_pane_fp_g1

0x3564,	// (0x00052e3c) list_empty_pane_fp_t1

0x3572,	// (0x00052e4a) list_empty_pane_fp_t2

0x0001,

0xfb95,	// (0x0005f46d) list_empty_pane_fp_t

0x7d73,	// (0x0005764b) list_single_heading_pane_fp_g1_ParamLimits

0x7d73,	// (0x0005764b) list_single_heading_pane_fp_g1

0x3c12,	// (0x000534ea) list_single_heading_pane_fp_g2_ParamLimits

0x3c12,	// (0x000534ea) list_single_heading_pane_fp_g2

0x3c85,	// (0x0005355d) list_single_heading_pane_fp_g3_ParamLimits

0x3c85,	// (0x0005355d) list_single_heading_pane_fp_g3

0x0002,

0xfb9a,	// (0x0005f472) list_single_heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x0005f472) list_single_heading_pane_fp_g

0x3580,	// (0x00052e58) list_single_heading_pane_fp_t1_ParamLimits

0x3580,	// (0x00052e58) list_single_heading_pane_fp_t1

0x3592,	// (0x00052e6a) list_single_heading_pane_fp_t2_ParamLimits

0x3592,	// (0x00052e6a) list_single_heading_pane_fp_t2

0x0001,

0xfba1,	// (0x0005f479) list_single_heading_pane_fp_t_ParamLimits

0xfba1,	// (0x0005f479) list_single_heading_pane_fp_t

0x3e6d,	// (0x00053745) aid_size_cell_fast

0x2ef8,	// (0x000527d0) soft_indicator_pane_cp1_t1

0x3eaa,	// (0x00053782) cell_app_pane_cp2_ParamLimits

0x3eaa,	// (0x00053782) cell_app_pane_cp2

0x1bcf,	// (0x000514a7) fep_hwr_candidate_drop_down_list_pane

0x1da7,	// (0x0005167f) fep_hwr_candidate_pane_g3_ParamLimits

0x1da7,	// (0x0005167f) fep_hwr_candidate_pane_g3

0xdeb0,	// (0x0005d788) fep_hwr_candidate_pane_g4_ParamLimits

0xdeb0,	// (0x0005d788) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x0005f3e8) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x0005f3e8) fep_hwr_candidate_pane_g

0x7870,	// (0x00057148) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7870,	// (0x00057148) fep_vkb_candidate_drop_down_list_pane

0x7c81,	// (0x00057559) fep_vkb_candidate_pane_g3

0x7c89,	// (0x00057561) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x0005f415) fep_vkb_candidate_pane_g

0x1e12,	// (0x000516ea) cell_hwr_candidate_pane_g1_ParamLimits

0x1e20,	// (0x000516f8) cell_hwr_candidate_pane_g3_ParamLimits

0x1e20,	// (0x000516f8) cell_hwr_candidate_pane_g3

0x885c,	// (0x00058134) cell_hwr_candidate_pane_g4_ParamLimits

0x885c,	// (0x00058134) cell_hwr_candidate_pane_g4

0x0002,

0xfb5c,	// (0x0005f434) cell_hwr_candidate_pane_g_ParamLimits

0xfb5c,	// (0x0005f434) cell_hwr_candidate_pane_g

0x7ca0,	// (0x00057578) cell_vkb_candidate_pane_g3_ParamLimits

0x7ca0,	// (0x00057578) cell_vkb_candidate_pane_g3

0x7cbb,	// (0x00057593) cell_vkb_candidate_pane_g4_ParamLimits

0x7cbb,	// (0x00057593) cell_vkb_candidate_pane_g4

0x7d97,	// (0x0005766f) cell_app_pane_cp2_g1_ParamLimits

0x7d97,	// (0x0005766f) cell_app_pane_cp2_g1

0x7db5,	// (0x0005768d) cell_app_pane_cp2_g2_ParamLimits

0x7db5,	// (0x0005768d) cell_app_pane_cp2_g2

0x0001,

0xfba6,	// (0x0005f47e) cell_app_pane_cp2_g_ParamLimits

0xfba6,	// (0x0005f47e) cell_app_pane_cp2_g

0x7dc1,	// (0x00057699) cell_app_pane_cp2_t1_ParamLimits

0x7dc1,	// (0x00057699) cell_app_pane_cp2_t1

0x3c77,	// (0x0005354f) grid_highlight_pane_cp1_ParamLimits

0x3c77,	// (0x0005354f) grid_highlight_pane_cp1

0x1e5f,	// (0x00051737) cell_hwr_candidate_pane_cp1_ParamLimits

0x1e5f,	// (0x00051737) cell_hwr_candidate_pane_cp1

0x1e12,	// (0x000516ea) fep_hwr_candidate_drop_down_list_pane_g1

0x1e7e,	// (0x00051756) fep_hwr_candidate_drop_down_list_pane_g2

0x1e8b,	// (0x00051763) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbab,	// (0x0005f483) fep_hwr_candidate_drop_down_list_pane_g

0x1e98,	// (0x00051770) fep_hwr_candidate_drop_down_list_scroll_pane

0x1ea1,	// (0x00051779) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1ea1,	// (0x00051779) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1eae,	// (0x00051786) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1eae,	// (0x00051786) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1ebb,	// (0x00051793) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1ebb,	// (0x00051793) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1ec8,	// (0x000517a0) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1ec8,	// (0x000517a0) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1ee3,	// (0x000517bb) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1ee3,	// (0x000517bb) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1efe,	// (0x000517d6) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1efe,	// (0x000517d6) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1f19,	// (0x000517f1) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1f19,	// (0x000517f1) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1f34,	// (0x0005180c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1f34,	// (0x0005180c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb2,	// (0x0005f48a) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb2,	// (0x0005f48a) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7dd3,	// (0x000576ab) cell_vkb_candidate_pane_cp1_ParamLimits

0x7dd3,	// (0x000576ab) cell_vkb_candidate_pane_cp1

0x7989,	// (0x00057261) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7989,	// (0x00057261) fep_vkb_candidate_drop_down_list_pane_g1

0x7df3,	// (0x000576cb) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7df3,	// (0x000576cb) fep_vkb_candidate_drop_down_list_pane_g2

0x7e00,	// (0x000576d8) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7e00,	// (0x000576d8) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x0005f49b) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc3,	// (0x0005f49b) fep_vkb_candidate_drop_down_list_pane_g

0x7e0d,	// (0x000576e5) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7e0d,	// (0x000576e5) fep_vkb_candidate_drop_down_list_scroll_pane

0x7e1a,	// (0x000576f2) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7e1a,	// (0x000576f2) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7e27,	// (0x000576ff) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7e27,	// (0x000576ff) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7e33,	// (0x0005770b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7e33,	// (0x0005770b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7e3f,	// (0x00057717) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7e3f,	// (0x00057717) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7e60,	// (0x00057738) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7e60,	// (0x00057738) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7e81,	// (0x00057759) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7e81,	// (0x00057759) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7ea2,	// (0x0005777a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7ea2,	// (0x0005777a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7ec3,	// (0x0005779b) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7ec3,	// (0x0005779b) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x0005f4a2) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x0005f4a2) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xcc4b,	// (0x0005c523) title_pane_g1_ParamLimits

0xcc5e,	// (0x0005c536) title_pane_g2_ParamLimits

0xf54e,	// (0x0005ee26) title_pane_g_ParamLimits

0x42da,	// (0x00053bb2) aid_call2_pane

0x42e2,	// (0x00053bba) aid_call_pane

0x42ea,	// (0x00053bc2) popup_clock_analogue_window_g1

0x42ea,	// (0x00053bc2) popup_clock_analogue_window_g2

0x0988,	// (0x00050260) popup_clock_analogue_window_g3

0x0991,	// (0x00050269) popup_clock_analogue_window_g4

0x2c15,	// (0x000524ed) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0005efd5) popup_clock_analogue_window_g

0x0999,	// (0x00050271) popup_clock_analogue_window_t1

0x09a7,	// (0x0005027f) clock_digital_number_pane_ParamLimits

0x09a7,	// (0x0005027f) clock_digital_number_pane

0x09b3,	// (0x0005028b) clock_digital_number_pane_cp02_ParamLimits

0x09b3,	// (0x0005028b) clock_digital_number_pane_cp02

0x09bf,	// (0x00050297) clock_digital_number_pane_cp03_ParamLimits

0x09bf,	// (0x00050297) clock_digital_number_pane_cp03

0x09cb,	// (0x000502a3) clock_digital_number_pane_cp04_ParamLimits

0x09cb,	// (0x000502a3) clock_digital_number_pane_cp04

0x09d7,	// (0x000502af) clock_digital_separator_pane_ParamLimits

0x09d7,	// (0x000502af) clock_digital_separator_pane

0x09e3,	// (0x000502bb) popup_clock_digital_window_t1_ParamLimits

0x09e3,	// (0x000502bb) popup_clock_digital_window_t1

0x2c15,	// (0x000524ed) clock_digital_number_pane_g1

0x2c15,	// (0x000524ed) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0005efe0) clock_digital_number_pane_g

0x2c15,	// (0x000524ed) clock_digital_separator_pane_g1

0x2c15,	// (0x000524ed) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0005efe0) clock_digital_separator_pane_g

0xd312,	// (0x0005cbea) aid_fill_nsta_ParamLimits

0xd448,	// (0x0005cd20) indicator_nsta_pane_ParamLimits

0x4f1c,	// (0x000547f4) popup_clock_analogue_window

0x4f1c,	// (0x000547f4) popup_clock_digital_window

0x3e2e,	// (0x00053706) grid_indicator_nsta_pane_ParamLimits

0x7108,	// (0x000569e0) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x0005f368) clock_nsta_pane_t

0x094c,	// (0x00050224) aid_size_max_handle

0xbb29,	// (0x0005b401) aid_size_min_handle

0x48fd,	// (0x000541d5) editor_scroll_pane

0x7ede,	// (0x000577b6) ex_editor_pane

0x3ddb,	// (0x000536b3) scroll_pane_cp13

0x3c0a,	// (0x000534e2) scroll_pane_cp14

0x4319,	// (0x00053bf1) scroll_pane_cp36

0xd0d1,	// (0x0005c9a9) list_single_graphic_hl_pane_cp2_ParamLimits

0xd0d1,	// (0x0005c9a9) list_single_graphic_hl_pane_cp2

0xd732,	// (0x0005d00a) list_single_graphic_hl_pane_ParamLimits

0xd732,	// (0x0005d00a) list_single_graphic_hl_pane

0x35a8,	// (0x00052e80) aid_size_min_hl_cp1

0x7ee6,	// (0x000577be) list_highlight_pane_cp34_ParamLimits

0x7ee6,	// (0x000577be) list_highlight_pane_cp34

0x7ef7,	// (0x000577cf) list_single_graphic_hl_pane_g1_ParamLimits

0x7ef7,	// (0x000577cf) list_single_graphic_hl_pane_g1

0xc547,	// (0x0005be1f) list_single_graphic_hl_pane_g2_ParamLimits

0xc547,	// (0x0005be1f) list_single_graphic_hl_pane_g2

0xc547,	// (0x0005be1f) list_single_graphic_hl_pane_g3_ParamLimits

0xc547,	// (0x0005be1f) list_single_graphic_hl_pane_g3

0x486e,	// (0x00054146) list_single_graphic_hl_pane_g4_ParamLimits

0x486e,	// (0x00054146) list_single_graphic_hl_pane_g4

0x35bd,	// (0x00052e95) list_single_graphic_hl_pane_g5_ParamLimits

0x35bd,	// (0x00052e95) list_single_graphic_hl_pane_g5

0x0004,

0xfbdb,	// (0x0005f4b3) list_single_graphic_hl_pane_g_ParamLimits

0xfbdb,	// (0x0005f4b3) list_single_graphic_hl_pane_g

0xc553,	// (0x0005be2b) list_single_graphic_hl_pane_t1_ParamLimits

0xc553,	// (0x0005be2b) list_single_graphic_hl_pane_t1

0x7f04,	// (0x000577dc) aid_size_min_hl_cp2

0x7f0d,	// (0x000577e5) list_highlight_pane_cp34_cp2_ParamLimits

0x7f0d,	// (0x000577e5) list_highlight_pane_cp34_cp2

0x7ef7,	// (0x000577cf) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7ef7,	// (0x000577cf) list_single_graphic_hl_pane_g1_cp2

0x7f1a,	// (0x000577f2) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7f1a,	// (0x000577f2) list_single_graphic_hl_pane_g2_cp2

0x7f26,	// (0x000577fe) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7f26,	// (0x000577fe) list_single_graphic_hl_pane_g3_cp2

0x7cd6,	// (0x000575ae) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7cd6,	// (0x000575ae) list_single_graphic_hl_pane_g4_cp2

0x7f34,	// (0x0005780c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7f34,	// (0x0005780c) list_single_graphic_hl_pane_g5_cp2

0xbc10,	// (0x0005b4e8) control_pane_g4_ParamLimits

0xbc10,	// (0x0005b4e8) control_pane_g4

0x4c3b,	// (0x00054513) bg_popup_sub_pane_cp10_ParamLimits

0x7715,	// (0x00056fed) list_choice_list_pane_ParamLimits

0x7724,	// (0x00056ffc) scroll_pane_cp23

0x2f88,	// (0x00052860) bg_popup_preview_window_pane_cp02_ParamLimits

0x7d18,	// (0x000575f0) list_preview_fixed_pane_ParamLimits

0x7d2e,	// (0x00057606) list_preview_fixed_pane_cp_ParamLimits

0x7d2e,	// (0x00057606) list_preview_fixed_pane_cp

0x7d3a,	// (0x00057612) popup_preview_fixed_window_g1_ParamLimits

0x7d3a,	// (0x00057612) popup_preview_fixed_window_g1

0x7d46,	// (0x0005761e) popup_preview_fixed_window_g2_ParamLimits

0x7d46,	// (0x0005761e) popup_preview_fixed_window_g2

0x0002,

0xfb63,	// (0x0005f43b) popup_preview_fixed_window_g_ParamLimits

0xfb63,	// (0x0005f43b) popup_preview_fixed_window_g

0x08c0,	// (0x00050198) aid_navi_side_left_pane_ParamLimits

0x08d5,	// (0x000501ad) aid_navi_side_right_pane_ParamLimits

0x08ed,	// (0x000501c5) navi_icon_pane_stacon_ParamLimits

0x0901,	// (0x000501d9) navi_navi_pane_stacon_ParamLimits

0x08ed,	// (0x000501c5) navi_text_pane_stacon_ParamLimits

0xf43b,	// (0x0005ed13) main_text_info_pane

0x7f5e,	// (0x00057836) listscroll_text_info_pane

0x7f66,	// (0x0005783e) list_text_info_pane_ParamLimits

0x7f66,	// (0x0005783e) list_text_info_pane

0x7f75,	// (0x0005784d) scroll_pane_cp24_ParamLimits

0x7f75,	// (0x0005784d) scroll_pane_cp24

0xe047,	// (0x0005d91f) list_text_info_pane_t1_ParamLimits

0xe047,	// (0x0005d91f) list_text_info_pane_t1

0xbd6b,	// (0x0005b643) popup_fast_swap2_window_ParamLimits

0xbd6b,	// (0x0005b643) popup_fast_swap2_window

0x7fc4,	// (0x0005789c) aid_size_cell_fast2

0x2c0b,	// (0x000524e3) bg_popup_window_pane_cp17

0x55a3,	// (0x00054e7b) heading_pane_cp2

0x38d4,	// (0x000531ac) listscroll_fast2_pane

0x7fce,	// (0x000578a6) grid_fast2_pane

0x7fd8,	// (0x000578b0) listscroll_fast2_pane_g1

0x7fe0,	// (0x000578b8) listscroll_fast2_pane_g2

0x0001,

0xfbe6,	// (0x0005f4be) listscroll_fast2_pane_g

0x3ddb,	// (0x000536b3) scroll_pane_cp26

0x7fea,	// (0x000578c2) cell_fast2_pane_ParamLimits

0x7fea,	// (0x000578c2) cell_fast2_pane

0x7fff,	// (0x000578d7) cell_fast2_pane_g1

0x8008,	// (0x000578e0) cell_fast2_pane_g2

0x8011,	// (0x000578e9) cell_fast2_pane_g3

0x0002,

0xfbeb,	// (0x0005f4c3) cell_fast2_pane_g

0x39c7,	// (0x0005329f) grid_highlight_pane_cp9

0x0e37,	// (0x0005070f) main_eswt_pane_ParamLimits

0x0e37,	// (0x0005070f) main_eswt_pane

0x7f8a,	// (0x00057862) list_single_text_info_pane

0x8019,	// (0x000578f1) eswt_ctrl_button_pane

0x8019,	// (0x000578f1) eswt_ctrl_canvas_pane

0x8021,	// (0x000578f9) eswt_ctrl_combo_pane

0x8019,	// (0x000578f1) eswt_ctrl_default_pane

0x8019,	// (0x000578f1) eswt_ctrl_label_pane

0x8029,	// (0x00057901) eswt_ctrl_wait_pane

0x8031,	// (0x00057909) eswt_shell_pane

0x2c0b,	// (0x000524e3) listscroll_eswt_app_pane

0x8051,	// (0x00057929) popup_eswt_tasktip_window_ParamLimits

0x8051,	// (0x00057929) popup_eswt_tasktip_window

0x51b9,	// (0x00054a91) bg_popup_window_pane_cp18

0x8062,	// (0x0005793a) eswt_control_pane_g1_ParamLimits

0x8062,	// (0x0005793a) eswt_control_pane_g1

0x806f,	// (0x00057947) eswt_control_pane_g2_ParamLimits

0x806f,	// (0x00057947) eswt_control_pane_g2

0x807c,	// (0x00057954) eswt_control_pane_g3_ParamLimits

0x807c,	// (0x00057954) eswt_control_pane_g3

0x8089,	// (0x00057961) eswt_control_pane_g4_ParamLimits

0x8089,	// (0x00057961) eswt_control_pane_g4

0x0003,

0xfbf2,	// (0x0005f4ca) eswt_control_pane_g_ParamLimits

0xfbf2,	// (0x0005f4ca) eswt_control_pane_g

0x3c77,	// (0x0005354f) bg_button_pane_ParamLimits

0x3c77,	// (0x0005354f) bg_button_pane

0x39dc,	// (0x000532b4) common_borders_pane_copy2_ParamLimits

0x39dc,	// (0x000532b4) common_borders_pane_copy2

0x8096,	// (0x0005796e) control_button_pane_g1_ParamLimits

0x8096,	// (0x0005796e) control_button_pane_g1

0x80a2,	// (0x0005797a) control_button_pane_g2_ParamLimits

0x80a2,	// (0x0005797a) control_button_pane_g2

0x80ae,	// (0x00057986) control_button_pane_g3_ParamLimits

0x80ae,	// (0x00057986) control_button_pane_g3

0x0002,

0xfbfb,	// (0x0005f4d3) control_button_pane_g_ParamLimits

0xfbfb,	// (0x0005f4d3) control_button_pane_g

0x80c2,	// (0x0005799a) control_button_pane_t1

0x80d0,	// (0x000579a8) control_button_pane_t2

0x0001,

0xfc02,	// (0x0005f4da) control_button_pane_t

0x5145,	// (0x00054a1d) bg_button_pane_g1

0x5155,	// (0x00054a2d) bg_button_pane_g2

0x514d,	// (0x00054a25) bg_button_pane_g3

0x5165,	// (0x00054a3d) bg_button_pane_g4

0x515d,	// (0x00054a35) bg_button_pane_g5

0x516d,	// (0x00054a45) bg_button_pane_g6

0x5175,	// (0x00054a4d) bg_button_pane_g7

0x5185,	// (0x00054a5d) bg_button_pane_g8

0x517d,	// (0x00054a55) bg_button_pane_g9

0x0008,

0xf866,	// (0x0005f13e) bg_button_pane_g

0x76d0,	// (0x00056fa8) common_borders_pane_ParamLimits

0x76d0,	// (0x00056fa8) common_borders_pane

0x8062,	// (0x0005793a) eswt_control_pane_g1_copy1_ParamLimits

0x8062,	// (0x0005793a) eswt_control_pane_g1_copy1

0x806f,	// (0x00057947) eswt_control_pane_g2_copy1_ParamLimits

0x806f,	// (0x00057947) eswt_control_pane_g2_copy1

0x807c,	// (0x00057954) eswt_control_pane_g3_copy1_ParamLimits

0x807c,	// (0x00057954) eswt_control_pane_g3_copy1

0x8089,	// (0x00057961) eswt_control_pane_g4_copy1_ParamLimits

0x8089,	// (0x00057961) eswt_control_pane_g4_copy1

0x770b,	// (0x00056fe3) bg_eswt_ctrl_canvas_pane_g1

0x76d0,	// (0x00056fa8) common_borders_pane_cp2_ParamLimits

0x76d0,	// (0x00056fa8) common_borders_pane_cp2

0x76d0,	// (0x00056fa8) common_borders_pane_cp3_ParamLimits

0x76d0,	// (0x00056fa8) common_borders_pane_cp3

0x80de,	// (0x000579b6) separator_horizontal_pane

0x80e6,	// (0x000579be) separator_vertical_pane

0x8062,	// (0x0005793a) eswt_control_pane_g1_copy2_ParamLimits

0x8062,	// (0x0005793a) eswt_control_pane_g1_copy2

0x806f,	// (0x00057947) eswt_control_pane_g2_copy2_ParamLimits

0x806f,	// (0x00057947) eswt_control_pane_g2_copy2

0x807c,	// (0x00057954) eswt_control_pane_g3_copy2_ParamLimits

0x807c,	// (0x00057954) eswt_control_pane_g3_copy2

0x8089,	// (0x00057961) eswt_control_pane_g4_copy2_ParamLimits

0x8089,	// (0x00057961) eswt_control_pane_g4_copy2

0x2c0b,	// (0x000524e3) common_borders_pane_cp4

0x80ef,	// (0x000579c7) separator_horizontal_pane_g1

0x80f8,	// (0x000579d0) separator_horizontal_pane_g2

0x8101,	// (0x000579d9) separator_horizontal_pane_g3

0x0002,

0xfc07,	// (0x0005f4df) separator_horizontal_pane_g

0x8062,	// (0x0005793a) eswt_control_pane_g1_copy3_ParamLimits

0x8062,	// (0x0005793a) eswt_control_pane_g1_copy3

0x806f,	// (0x00057947) eswt_control_pane_g2_copy3_ParamLimits

0x806f,	// (0x00057947) eswt_control_pane_g2_copy3

0x807c,	// (0x00057954) eswt_control_pane_g3_copy3_ParamLimits

0x807c,	// (0x00057954) eswt_control_pane_g3_copy3

0x8089,	// (0x00057961) eswt_control_pane_g4_copy3_ParamLimits

0x8089,	// (0x00057961) eswt_control_pane_g4_copy3

0x2c0b,	// (0x000524e3) common_borders_pane_cp5

0x810a,	// (0x000579e2) separator_vertical_pane_g1

0x8113,	// (0x000579eb) separator_vertical_pane_g2

0x811c,	// (0x000579f4) separator_vertical_pane_g3

0x0002,

0xfc0e,	// (0x0005f4e6) separator_vertical_pane_g

0x8062,	// (0x0005793a) eswt_control_pane_g1_copy4_ParamLimits

0x8062,	// (0x0005793a) eswt_control_pane_g1_copy4

0x806f,	// (0x00057947) eswt_control_pane_g2_copy4_ParamLimits

0x806f,	// (0x00057947) eswt_control_pane_g2_copy4

0x807c,	// (0x00057954) eswt_control_pane_g3_copy4_ParamLimits

0x807c,	// (0x00057954) eswt_control_pane_g3_copy4

0x8089,	// (0x00057961) eswt_control_pane_g4_copy4_ParamLimits

0x8089,	// (0x00057961) eswt_control_pane_g4_copy4

0xe062,	// (0x0005d93a) eswt_ctrl_combo_button_pane

0xe06a,	// (0x0005d942) eswt_ctrl_input_pane

0xe072,	// (0x0005d94a) popup_choice_list_window_cp70

0xe07a,	// (0x0005d952) eswt_ctrl_input_pane_t1

0x2c0b,	// (0x000524e3) input_focus_pane_cp70

0x76d0,	// (0x00056fa8) bg_button_pane_cp70_ParamLimits

0x76d0,	// (0x00056fa8) bg_button_pane_cp70

0xe088,	// (0x0005d960) eswt_ctrl_combo_button_pane_g1

0x8153,	// (0x00057a2b) wait_bar_pane_cp70

0x51b9,	// (0x00054a91) bg_popup_window_pane_cp70_ParamLimits

0x51b9,	// (0x00054a91) bg_popup_window_pane_cp70

0x815b,	// (0x00057a33) popup_eswt_tasktip_window_t1

0x8171,	// (0x00057a49) wait_bar_pane_cp71_ParamLimits

0x8171,	// (0x00057a49) wait_bar_pane_cp71

0x817d,	// (0x00057a55) grid_eswt_app_pane

0x40f3,	// (0x000539cb) scroll_pane_cp70

0xe090,	// (0x0005d968) cell_eswt_app_pane_ParamLimits

0xe090,	// (0x0005d968) cell_eswt_app_pane

0xe0ba,	// (0x0005d992) cell_eswt_app_pane_g1_ParamLimits

0xe0ba,	// (0x0005d992) cell_eswt_app_pane_g1

0xe0e9,	// (0x0005d9c1) cell_eswt_app_pane_g2_ParamLimits

0xe0e9,	// (0x0005d9c1) cell_eswt_app_pane_g2

0x0001,

0xfc15,	// (0x0005f4ed) cell_eswt_app_pane_g_ParamLimits

0xfc15,	// (0x0005f4ed) cell_eswt_app_pane_g

0xe112,	// (0x0005d9ea) cell_eswt_app_pane_t1_ParamLimits

0xe112,	// (0x0005d9ea) cell_eswt_app_pane_t1

0x8240,	// (0x00057b18) grid_highlight_pane_cp70_ParamLimits

0x8240,	// (0x00057b18) grid_highlight_pane_cp70

0x47d2,	// (0x000540aa) set_content_pane_g1

0xd2c7,	// (0x0005cb9f) status_small_volume_pane

0x1f4f,	// (0x00051827) status_small_volume_pane_g1

0x1f57,	// (0x0005182f) volume_small2_pane

0x1f60,	// (0x00051838) volume_small2_pane_g1

0x1f69,	// (0x00051841) volume_small2_pane_g2

0x1f72,	// (0x0005184a) volume_small2_pane_g3

0x1f7b,	// (0x00051853) volume_small2_pane_g4

0x1f84,	// (0x0005185c) volume_small2_pane_g5

0x1f8d,	// (0x00051865) volume_small2_pane_g6

0x1f96,	// (0x0005186e) volume_small2_pane_g7

0x1f9f,	// (0x00051877) volume_small2_pane_g8

0x1fa8,	// (0x00051880) volume_small2_pane_g9

0x1fb1,	// (0x00051889) volume_small2_pane_g10

0x0009,

0xfc1a,	// (0x0005f4f2) volume_small2_pane_g

0x7ad1,	// (0x000573a9) fep_vkb_top_text_pane_g1_ParamLimits

0xdfef,	// (0x0005d8c7) fep_vkb_top_text_pane_t1_ParamLimits

0x7d52,	// (0x0005762a) popup_preview_fixed_window_g3_ParamLimits

0x7d52,	// (0x0005762a) popup_preview_fixed_window_g3

0xc38e,	// (0x0005bc66) popup_toolbar_trans_pane

0xd9ee,	// (0x0005d2c6) aid_height_set_list_ParamLimits

0x6525,	// (0x00055dfd) aid_size_parent_ParamLimits

0x4c3b,	// (0x00054513) list_highlight_pane_cp2_ParamLimits

0x47d2,	// (0x000540aa) set_content_pane_g1_ParamLimits

0xd743,	// (0x0005d01b) list_single_image_pane_ParamLimits

0xd743,	// (0x0005d01b) list_single_image_pane

0xe144,	// (0x0005da1c) aid_size_cell_image_ParamLimits

0xe144,	// (0x0005da1c) aid_size_cell_image

0xe151,	// (0x0005da29) grid_single_image_pane_ParamLimits

0xe151,	// (0x0005da29) grid_single_image_pane

0x59e1,	// (0x000552b9) list_single_image_pane_g1_ParamLimits

0x59e1,	// (0x000552b9) list_single_image_pane_g1

0x8265,	// (0x00057b3d) list_single_image_pane_g2_ParamLimits

0x8265,	// (0x00057b3d) list_single_image_pane_g2

0x0001,

0xfc2f,	// (0x0005f507) list_single_image_pane_g_ParamLimits

0xfc2f,	// (0x0005f507) list_single_image_pane_g

0x8279,	// (0x00057b51) list_single_image_pane_t1_ParamLimits

0x8279,	// (0x00057b51) list_single_image_pane_t1

0xe15f,	// (0x0005da37) cell_image_list_pane_ParamLimits

0xe15f,	// (0x0005da37) cell_image_list_pane

0xe175,	// (0x0005da4d) cell_image_list_pane_g1

0xe17e,	// (0x0005da56) cell_image_list_pane_g2

0x0001,

0xfc34,	// (0x0005f50c) cell_image_list_pane_g

0x82b5,	// (0x00057b8d) aid_size_cell_tb_trans_pane

0x3c77,	// (0x0005354f) bg_tb_trans_pane

0x82c7,	// (0x00057b9f) grid_tb_trans_pane

0x5145,	// (0x00054a1d) bg_tb_trans_pane_g1

0x5155,	// (0x00054a2d) bg_tb_trans_pane_g2

0x514d,	// (0x00054a25) bg_tb_trans_pane_g3

0x5165,	// (0x00054a3d) bg_tb_trans_pane_g4

0x515d,	// (0x00054a35) bg_tb_trans_pane_g5

0x5185,	// (0x00054a5d) bg_tb_trans_pane_g6

0x517d,	// (0x00054a55) bg_tb_trans_pane_g7

0x516d,	// (0x00054a45) bg_tb_trans_pane_g8

0x5175,	// (0x00054a4d) bg_tb_trans_pane_g9

0x0008,

0xfc39,	// (0x0005f511) bg_tb_trans_pane_g

0x82db,	// (0x00057bb3) cell_toolbar_trans_pane_ParamLimits

0x82db,	// (0x00057bb3) cell_toolbar_trans_pane

0x770b,	// (0x00056fe3) cell_toolbar_trans_pane_g1

0xddcb,	// (0x0005d6a3) list_form2_midp_pane_t1

0xddd9,	// (0x0005d6b1) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x0005f3ae) list_form2_midp_pane_t

0x72f1,	// (0x00056bc9) scroll_pane_cp51_ParamLimits

0x74ad,	// (0x00056d85) form2_midp_wait_pane_g1

0x74b6,	// (0x00056d8e) form2_midp_wait_pane_g2

0x74bf,	// (0x00056d97) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x0005f3c3) form2_midp_wait_pane_g

0x2cff,	// (0x000525d7) list_highlight_pane_cp21_ParamLimits

0x7516,	// (0x00056dee) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7525,	// (0x00056dfd) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x66dd,	// (0x00055fb5) list_single_2graphic_im_pane_ParamLimits

0x66dd,	// (0x00055fb5) list_single_2graphic_im_pane

0xe187,	// (0x0005da5f) list_single_2graphic_im_pane_g1_ParamLimits

0xe187,	// (0x0005da5f) list_single_2graphic_im_pane_g1

0xe198,	// (0x0005da70) list_single_2graphic_im_pane_g2_ParamLimits

0xe198,	// (0x0005da70) list_single_2graphic_im_pane_g2

0xe1a4,	// (0x0005da7c) list_single_2graphic_im_pane_g3_ParamLimits

0xe1a4,	// (0x0005da7c) list_single_2graphic_im_pane_g3

0x0003,

0xfc4c,	// (0x0005f524) list_single_2graphic_im_pane_g_ParamLimits

0xfc4c,	// (0x0005f524) list_single_2graphic_im_pane_g

0xe1b8,	// (0x0005da90) list_single_2graphic_im_pane_t1_ParamLimits

0xe1b8,	// (0x0005da90) list_single_2graphic_im_pane_t1

0x7d5e,	// (0x00057636) list_single_graphic_2heading_pane_fp_ParamLimits

0x7d5e,	// (0x00057636) list_single_graphic_2heading_pane_fp

0x341a,	// (0x00052cf2) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x341a,	// (0x00052cf2) list_single_graphic_2heading_pane_fp_g1

0x7d73,	// (0x0005764b) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7d73,	// (0x0005764b) list_single_graphic_2heading_pane_fp_g2

0x3c12,	// (0x000534ea) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3c12,	// (0x000534ea) list_single_graphic_2heading_pane_fp_g3

0x3c85,	// (0x0005355d) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3c85,	// (0x0005355d) list_single_graphic_2heading_pane_fp_g4

0x7d7f,	// (0x00057657) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7d7f,	// (0x00057657) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb73,	// (0x0005f44b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb73,	// (0x0005f44b) list_single_graphic_2heading_pane_fp_g

0x35e7,	// (0x00052ebf) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x35e7,	// (0x00052ebf) list_single_graphic_2heading_pane_fp_t1

0x3452,	// (0x00052d2a) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3452,	// (0x00052d2a) list_single_graphic_2heading_pane_fp_t2

0x35fd,	// (0x00052ed5) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x35fd,	// (0x00052ed5) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc55,	// (0x0005f52d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc55,	// (0x0005f52d) list_single_graphic_2heading_pane_fp_t

0x7797,	// (0x0005706f) fep_hwr_write_pane_g5_ParamLimits

0x7797,	// (0x0005706f) fep_hwr_write_pane_g5

0x77a3,	// (0x0005707b) fep_hwr_write_pane_g6_ParamLimits

0x77a3,	// (0x0005707b) fep_hwr_write_pane_g6

0x8031,	// (0x00057909) eswt_shell_pane_ParamLimits

0x51b9,	// (0x00054a91) bg_popup_window_pane_cp18_ParamLimits

0x646d,	// (0x00055d45) heading_pane_cp70

0x815b,	// (0x00057a33) popup_eswt_tasktip_window_t1_ParamLimits

0xd36d,	// (0x0005cc45) aid_touch_tab_arrow_left

0xd383,	// (0x0005cc5b) aid_touch_tab_arrow_right

0xcc76,	// (0x0005c54e) title_pane_g3_ParamLimits

0xcc76,	// (0x0005c54e) title_pane_g3

0x3c36,	// (0x0005350e) set_value_pane_g1

0xc38e,	// (0x0005bc66) popup_toolbar_trans_pane_ParamLimits

0x82b5,	// (0x00057b8d) aid_size_cell_tb_trans_pane_ParamLimits

0x3c77,	// (0x0005354f) bg_tb_trans_pane_ParamLimits

0x82c7,	// (0x00057b9f) grid_tb_trans_pane_ParamLimits

0x2f88,	// (0x00052860) cont_note_pane_ParamLimits

0x2f88,	// (0x00052860) cont_note_pane

0x39dc,	// (0x000532b4) cont_snote2_single_text_pane_ParamLimits

0x39dc,	// (0x000532b4) cont_snote2_single_text_pane

0x39dc,	// (0x000532b4) cont_snote2_single_graphic_pane_ParamLimits

0x39dc,	// (0x000532b4) cont_snote2_single_graphic_pane

0x57be,	// (0x00055096) cont_note_wait_pane_ParamLimits

0x57be,	// (0x00055096) cont_note_wait_pane

0x57be,	// (0x00055096) cont_note_image_pane_ParamLimits

0x57be,	// (0x00055096) cont_note_image_pane

0x836f,	// (0x00057c47) popup_note2_window_g1_ParamLimits

0x836f,	// (0x00057c47) popup_note2_window_g1

0x83a0,	// (0x00057c78) popup_note2_window_t1_ParamLimits

0x83a0,	// (0x00057c78) popup_note2_window_t1

0x83e5,	// (0x00057cbd) popup_note2_window_t2_ParamLimits

0x83e5,	// (0x00057cbd) popup_note2_window_t2

0x842a,	// (0x00057d02) popup_note2_window_t3_ParamLimits

0x842a,	// (0x00057d02) popup_note2_window_t3

0x846f,	// (0x00057d47) popup_note2_window_t4_ParamLimits

0x846f,	// (0x00057d47) popup_note2_window_t4

0x300c,	// (0x000528e4) popup_note2_window_t5_ParamLimits

0x300c,	// (0x000528e4) popup_note2_window_t5

0x0004,

0xfc61,	// (0x0005f539) popup_note2_window_t_ParamLimits

0xfc61,	// (0x0005f539) popup_note2_window_t

0x849e,	// (0x00057d76) popup_note2_image_window_g1_ParamLimits

0x849e,	// (0x00057d76) popup_note2_image_window_g1

0x84aa,	// (0x00057d82) popup_note2_image_window_g2_ParamLimits

0x84aa,	// (0x00057d82) popup_note2_image_window_g2

0x0001,

0xfc6c,	// (0x0005f544) popup_note2_image_window_g_ParamLimits

0xfc6c,	// (0x0005f544) popup_note2_image_window_g

0x84bc,	// (0x00057d94) popup_note2_image_window_t1_ParamLimits

0x84bc,	// (0x00057d94) popup_note2_image_window_t1

0x84d4,	// (0x00057dac) popup_note2_image_window_t2_ParamLimits

0x84d4,	// (0x00057dac) popup_note2_image_window_t2

0x84ec,	// (0x00057dc4) popup_note2_image_window_t3_ParamLimits

0x84ec,	// (0x00057dc4) popup_note2_image_window_t3

0x0002,

0xfc71,	// (0x0005f549) popup_note2_image_window_t_ParamLimits

0xfc71,	// (0x0005f549) popup_note2_image_window_t

0x57cc,	// (0x000550a4) popup_note2_wait_window_g1_ParamLimits

0x57cc,	// (0x000550a4) popup_note2_wait_window_g1

0x8508,	// (0x00057de0) popup_note2_wait_window_g2_ParamLimits

0x8508,	// (0x00057de0) popup_note2_wait_window_g2

0x57e4,	// (0x000550bc) popup_note2_wait_window_g3_ParamLimits

0x57e4,	// (0x000550bc) popup_note2_wait_window_g3

0x0002,

0xfc78,	// (0x0005f550) popup_note2_wait_window_g_ParamLimits

0xfc78,	// (0x0005f550) popup_note2_wait_window_g

0x8514,	// (0x00057dec) popup_note2_wait_window_t1_ParamLimits

0x8514,	// (0x00057dec) popup_note2_wait_window_t1

0x8532,	// (0x00057e0a) popup_note2_wait_window_t2_ParamLimits

0x8532,	// (0x00057e0a) popup_note2_wait_window_t2

0x8550,	// (0x00057e28) popup_note2_wait_window_t3_ParamLimits

0x8550,	// (0x00057e28) popup_note2_wait_window_t3

0x8562,	// (0x00057e3a) popup_note2_wait_window_t4_ParamLimits

0x8562,	// (0x00057e3a) popup_note2_wait_window_t4

0x0003,

0xfc7f,	// (0x0005f557) popup_note2_wait_window_t_ParamLimits

0xfc7f,	// (0x0005f557) popup_note2_wait_window_t

0x8574,	// (0x00057e4c) wait_bar2_pane_ParamLimits

0x8574,	// (0x00057e4c) wait_bar2_pane

0x858c,	// (0x00057e64) popup_snote2_single_text_window_g1_ParamLimits

0x858c,	// (0x00057e64) popup_snote2_single_text_window_g1

0x85b4,	// (0x00057e8c) popup_snote2_single_text_window_t1_ParamLimits

0x85b4,	// (0x00057e8c) popup_snote2_single_text_window_t1

0x8600,	// (0x00057ed8) popup_snote2_single_text_window_t2_ParamLimits

0x8600,	// (0x00057ed8) popup_snote2_single_text_window_t2

0x864c,	// (0x00057f24) popup_snote2_single_text_window_t3_ParamLimits

0x864c,	// (0x00057f24) popup_snote2_single_text_window_t3

0x868d,	// (0x00057f65) popup_snote2_single_text_window_t4_ParamLimits

0x868d,	// (0x00057f65) popup_snote2_single_text_window_t4

0x86c3,	// (0x00057f9b) popup_snote2_single_text_window_t5_ParamLimits

0x86c3,	// (0x00057f9b) popup_snote2_single_text_window_t5

0x0004,

0xfc88,	// (0x0005f560) popup_snote2_single_text_window_t_ParamLimits

0xfc88,	// (0x0005f560) popup_snote2_single_text_window_t

0x86ee,	// (0x00057fc6) popup_snote2_single_graphic_window_g1_ParamLimits

0x86ee,	// (0x00057fc6) popup_snote2_single_graphic_window_g1

0x8716,	// (0x00057fee) popup_snote2_single_graphic_window_g2_ParamLimits

0x8716,	// (0x00057fee) popup_snote2_single_graphic_window_g2

0x0001,

0xfc93,	// (0x0005f56b) popup_snote2_single_graphic_window_g_ParamLimits

0xfc93,	// (0x0005f56b) popup_snote2_single_graphic_window_g

0x873e,	// (0x00058016) popup_snote2_single_graphic_window_t1_ParamLimits

0x873e,	// (0x00058016) popup_snote2_single_graphic_window_t1

0x878a,	// (0x00058062) popup_snote2_single_graphic_window_t2_ParamLimits

0x878a,	// (0x00058062) popup_snote2_single_graphic_window_t2

0x864c,	// (0x00057f24) popup_snote2_single_graphic_window_t3_ParamLimits

0x864c,	// (0x00057f24) popup_snote2_single_graphic_window_t3

0x868d,	// (0x00057f65) popup_snote2_single_graphic_window_t4_ParamLimits

0x868d,	// (0x00057f65) popup_snote2_single_graphic_window_t4

0x86c3,	// (0x00057f9b) popup_snote2_single_graphic_window_t5_ParamLimits

0x86c3,	// (0x00057f9b) popup_snote2_single_graphic_window_t5

0x0004,

0xfc98,	// (0x0005f570) popup_snote2_single_graphic_window_t_ParamLimits

0xfc98,	// (0x0005f570) popup_snote2_single_graphic_window_t

0x71b2,	// (0x00056a8a) clock_nsta_pane_cp2_t1

0x71b2,	// (0x00056a8a) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x0005f384) clock_nsta_pane_cp2_t

0x063e,	// (0x0004ff16) form_field_data_wide_pane_g1_ParamLimits

0x3c12,	// (0x000534ea) form_field_data_wide_pane_g2_ParamLimits

0x3c12,	// (0x000534ea) form_field_data_wide_pane_g2

0x3c85,	// (0x0005355d) form_field_data_wide_pane_g3_ParamLimits

0x3c85,	// (0x0005355d) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0005ef58) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0005ef58) form_field_data_wide_pane_g

0xdd0e,	// (0x0005d5e6) grid_touch_3_pane_ParamLimits

0xdd0e,	// (0x0005d5e6) grid_touch_3_pane

0xe1e9,	// (0x0005dac1) cell_touch_3_pane_ParamLimits

0xe1e9,	// (0x0005dac1) cell_touch_3_pane

0x770b,	// (0x00056fe3) cell_touch_3_pane_g1

0x770b,	// (0x00056fe3) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x0005f409) cell_touch_3_pane_g

0x303e,	// (0x00052916) cont_query_data_pane

0x3046,	// (0x0005291e) cont_query_data_pane_cp1

0x8804,	// (0x000580dc) button_value_adjust_pane_cp7

0x880c,	// (0x000580e4) query_popup_pane_cp3

0x43da,	// (0x00053cb2) bg_popup_sub_pane_cp22_ParamLimits

0x0a02,	// (0x000502da) navi_navi_volume_pane_cp2

0x0a1d,	// (0x000502f5) popup_side_volume_key_window_g2

0x0a2c,	// (0x00050304) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0005efee) popup_side_volume_key_window_g

0x0a49,	// (0x00050321) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0005eff5) popup_side_volume_key_window_t

0x4691,	// (0x00053f69) popup_side_volume_key_window_ParamLimits

0xb6b1,	// (0x0005af89) list_double_graphic_pane_g4_ParamLimits

0xb6b1,	// (0x0005af89) list_double_graphic_pane_g4

0xdb67,	// (0x0005d43f) list_single_2heading_msg_pane_ParamLimits

0xdb67,	// (0x0005d43f) list_single_2heading_msg_pane

0xd754,	// (0x0005d02c) list_single_2heading_msg_pane_g1_ParamLimits

0xd754,	// (0x0005d02c) list_single_2heading_msg_pane_g1

0xd760,	// (0x0005d038) list_single_2heading_msg_pane_g2_ParamLimits

0xd760,	// (0x0005d038) list_single_2heading_msg_pane_g2

0xd773,	// (0x0005d04b) list_single_2heading_msg_pane_g3_ParamLimits

0xd773,	// (0x0005d04b) list_single_2heading_msg_pane_g3

0xd77f,	// (0x0005d057) list_single_2heading_msg_pane_g4_ParamLimits

0xd77f,	// (0x0005d057) list_single_2heading_msg_pane_g4

0x0003,

0xfca3,	// (0x0005f57b) list_single_2heading_msg_pane_g_ParamLimits

0xfca3,	// (0x0005f57b) list_single_2heading_msg_pane_g

0xc569,	// (0x0005be41) list_single_2heading_msg_pane_t1_ParamLimits

0xc569,	// (0x0005be41) list_single_2heading_msg_pane_t1

0xc591,	// (0x0005be69) list_single_2heading_msg_pane_t2_ParamLimits

0xc591,	// (0x0005be69) list_single_2heading_msg_pane_t2

0xc5fc,	// (0x0005bed4) list_single_2heading_msg_pane_t3_ParamLimits

0xc5fc,	// (0x0005bed4) list_single_2heading_msg_pane_t3

0x36d6,	// (0x00052fae) list_single_2heading_msg_pane_t4_ParamLimits

0x36d6,	// (0x00052fae) list_single_2heading_msg_pane_t4

0x0003,

0xfcac,	// (0x0005f584) list_single_2heading_msg_pane_t_ParamLimits

0xfcac,	// (0x0005f584) list_single_2heading_msg_pane_t

0x2c53,	// (0x0005252b) title_pane_g4_ParamLimits

0x2c53,	// (0x0005252b) title_pane_g4

0x0811,	// (0x000500e9) title_pane_stacon_g3_ParamLimits

0x0811,	// (0x000500e9) title_pane_stacon_g3

0x8332,	// (0x00057c0a) list_single_2graphic_im_pane_g4_ParamLimits

0x8332,	// (0x00057c0a) list_single_2graphic_im_pane_g4

0x6229,	// (0x00055b01) popup_side_volume_key_window_cp

0x69f1,	// (0x000562c9) main_idle_act2_pane_t1

0x143c,	// (0x00050d14) toolbar_button_pane_g10

0xcf81,	// (0x0005c859) popup_toolbar_window_cp1

0x71a3,	// (0x00056a7b) clock_nsta_pane_cp_t1

0x71a3,	// (0x00056a7b) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x0005f37f) clock_nsta_pane_cp_t

0x0a02,	// (0x000502da) navi_navi_volume_pane_cp2_ParamLimits

0x0a11,	// (0x000502e9) popup_side_volume_key_window_g1_ParamLimits

0x0a1d,	// (0x000502f5) popup_side_volume_key_window_g2_ParamLimits

0x0a2c,	// (0x00050304) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0005efee) popup_side_volume_key_window_g_ParamLimits

0x1bbb,	// (0x00051493) fep_hwr_aid_pane

0x1c62,	// (0x0005153a) bg_fep_hwr_top_pane_g4_ParamLimits

0x7767,	// (0x0005703f) fep_hwr_top_pane_g1_ParamLimits

0x7779,	// (0x00057051) fep_hwr_top_pane_g2_ParamLimits

0x1c82,	// (0x0005155a) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x0005f3d4) fep_hwr_top_pane_g_ParamLimits

0x1c97,	// (0x0005156f) fep_hwr_top_text_pane_ParamLimits

0x5fec,	// (0x000558c4) aid_touch_tab_arrow_arrow_2

0x5ff5,	// (0x000558cd) aid_touch_tab_arrow_left_2

0x1bcf,	// (0x000514a7) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1c06,	// (0x000514de) fep_hwr_prediction_pane

0x78d9,	// (0x000571b1) fep_vkb_prediction_pane

0xdfcf,	// (0x0005d8a7) fep_vkb_side_pane_g3_ParamLimits

0xdfcf,	// (0x0005d8a7) fep_vkb_side_pane_g3

0x1e12,	// (0x000516ea) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1e7e,	// (0x00051756) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1e8b,	// (0x00051763) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbab,	// (0x0005f483) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1fba,	// (0x00051892) fep_hwr_prediction_pane_g1

0x1fc4,	// (0x0005189c) fep_hwr_prediction_pane_g2

0x1fcc,	// (0x000518a4) fep_hwr_prediction_pane_g3

0x1fd4,	// (0x000518ac) fep_hwr_prediction_pane_g4

0x0003,

0xfcb5,	// (0x0005f58d) fep_hwr_prediction_pane_g

0x8831,	// (0x00058109) fep_vkb_prediction_pane_g1

0x883b,	// (0x00058113) fep_vkb_prediction_pane_g2

0x8843,	// (0x0005811b) fep_vkb_prediction_pane_g3

0x884b,	// (0x00058123) fep_vkb_prediction_pane_g4

0x0003,

0xfcbe,	// (0x0005f596) fep_vkb_prediction_pane_g

0x1826,	// (0x000510fe) slider_set_pane_g3

0x183a,	// (0x00051112) slider_set_pane_g4

0x1852,	// (0x0005112a) slider_set_pane_g5

0x1826,	// (0x000510fe) slider_set_pane_g6

0x1868,	// (0x00051140) slider_set_pane_g7

0x668a,	// (0x00055f62) slider_form_pane_g3

0x6693,	// (0x00055f6b) slider_form_pane_g4

0x669b,	// (0x00055f73) slider_form_pane_g5

0x668a,	// (0x00055f62) slider_form_pane_g6

0xdb39,	// (0x0005d411) slider_form_pane_g7

0x6c9c,	// (0x00056574) slider_set_pane_vc_g3

0x6ca5,	// (0x0005657d) slider_set_pane_vc_g4

0x6cae,	// (0x00056586) slider_set_pane_vc_g5

0x6c9c,	// (0x00056574) slider_set_pane_vc_g6

0x6cb7,	// (0x0005658f) slider_set_pane_vc_g7

0x6e77,	// (0x0005674f) slider_form_pane_vc_g1

0x6e80,	// (0x00056758) slider_form_pane_vc_g2

0x6e89,	// (0x00056761) slider_form_pane_vc_g3

0x6e77,	// (0x0005674f) slider_form_pane_vc_g4

0x6e92,	// (0x0005676a) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x0005f351) slider_form_pane_vc_g

0xf43b,	// (0x0005ed13) main_idle_act3_pane

0x8853,	// (0x0005812b) ai3_links_pane

0xe231,	// (0x0005db09) popup_ai3_data_window_ParamLimits

0xe231,	// (0x0005db09) popup_ai3_data_window

0x2c0b,	// (0x000524e3) grid_ai3_links_pane

0xe24b,	// (0x0005db23) cell_ai3_links_pane_ParamLimits

0xe24b,	// (0x0005db23) cell_ai3_links_pane

0x88af,	// (0x00058187) bg_popup_sub_pane_cp11

0x88bc,	// (0x00058194) cell_ai3_links_pane_g1

0x2c0b,	// (0x000524e3) bg_popup_sub_pane_cp12

0x88e1,	// (0x000581b9) heading_ai3_data_pane

0x88e9,	// (0x000581c1) list_ai3_gene_pane

0x88f5,	// (0x000581cd) popup_ai3_data_window_g1

0x88fd,	// (0x000581d5) heading_ai3_data_pane_g1

0x8905,	// (0x000581dd) heading_ai3_data_pane_t1

0x8913,	// (0x000581eb) list_double_ai3_gene_pane_ParamLimits

0x8913,	// (0x000581eb) list_double_ai3_gene_pane

0x8920,	// (0x000581f8) list_single_ai3_gene_pane_ParamLimits

0x8920,	// (0x000581f8) list_single_ai3_gene_pane

0x76d0,	// (0x00056fa8) list_highlight_pane_cp7_ParamLimits

0x76d0,	// (0x00056fa8) list_highlight_pane_cp7

0x892d,	// (0x00058205) list_single_a13_gene_pane_t1_ParamLimits

0x892d,	// (0x00058205) list_single_a13_gene_pane_t1

0x8944,	// (0x0005821c) list_single_ai3_gene_pane_g1

0x894d,	// (0x00058225) list_single_ai3_gene_pane_g2

0x0001,

0xfcc7,	// (0x0005f59f) list_single_ai3_gene_pane_g

0x8955,	// (0x0005822d) list_double_ai3_gene_pane_g1_ParamLimits

0x8955,	// (0x0005822d) list_double_ai3_gene_pane_g1

0x8961,	// (0x00058239) list_double_ai3_gene_pane_t1_ParamLimits

0x8961,	// (0x00058239) list_double_ai3_gene_pane_t1

0x897d,	// (0x00058255) list_double_ai3_gene_pane_t2_ParamLimits

0x897d,	// (0x00058255) list_double_ai3_gene_pane_t2

0x8993,	// (0x0005826b) list_double_ai3_gene_pane_t3_ParamLimits

0x8993,	// (0x0005826b) list_double_ai3_gene_pane_t3

0x0002,

0xfccc,	// (0x0005f5a4) list_double_ai3_gene_pane_t_ParamLimits

0xfccc,	// (0x0005f5a4) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3613,	// (0x00052eeb) aid_size_min_col_2

0xe21b,	// (0x0005daf3) aid_size_min_msg_ParamLimits

0xe21b,	// (0x0005daf3) aid_size_min_msg

0xdfe3,	// (0x0005d8bb) fep_vkb_top_text_pane_g2_ParamLimits

0xdfe3,	// (0x0005d8bb) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x0005f404) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x0005f404) fep_vkb_top_text_pane_g

0xf43b,	// (0x0005ed13) main_hc_apps_shell_pane

0x89b0,	// (0x00058288) grid_hc_apps_pane_ParamLimits

0x89b0,	// (0x00058288) grid_hc_apps_pane

0x89bf,	// (0x00058297) list_hc_apps_pane

0x89c7,	// (0x0005829f) scroll_pane_cp37_ParamLimits

0x89c7,	// (0x0005829f) scroll_pane_cp37

0xe265,	// (0x0005db3d) cell_hc_apps_pane_ParamLimits

0xe265,	// (0x0005db3d) cell_hc_apps_pane

0xe323,	// (0x0005dbfb) cell_hc_apps_pane_g1_ParamLimits

0xe323,	// (0x0005dbfb) cell_hc_apps_pane_g1

0x8ab2,	// (0x0005838a) cell_hc_apps_pane_g2_ParamLimits

0x8ab2,	// (0x0005838a) cell_hc_apps_pane_g2

0x8ace,	// (0x000583a6) cell_hc_apps_pane_g3_ParamLimits

0x8ace,	// (0x000583a6) cell_hc_apps_pane_g3

0x0002,

0xfcd3,	// (0x0005f5ab) cell_hc_apps_pane_g_ParamLimits

0xfcd3,	// (0x0005f5ab) cell_hc_apps_pane_g

0xe378,	// (0x0005dc50) cell_hc_apps_pane_t1_ParamLimits

0xe378,	// (0x0005dc50) cell_hc_apps_pane_t1

0x2f88,	// (0x00052860) grid_highlight_pane_cp10_ParamLimits

0x2f88,	// (0x00052860) grid_highlight_pane_cp10

0xe3b6,	// (0x0005dc8e) list_single_hc_apps_pane_ParamLimits

0xe3b6,	// (0x0005dc8e) list_single_hc_apps_pane

0xe3e3,	// (0x0005dcbb) list_single_hc_apps_pane_g1

0xd797,	// (0x0005d06f) list_single_hc_apps_pane_g2

0x0001,

0xfcda,	// (0x0005f5b2) list_single_hc_apps_pane_g

0xd7b0,	// (0x0005d088) list_single_hc_apps_pane_g2_copy1

0x3730,	// (0x00053008) list_single_hc_apps_pane_t1

0x2cff,	// (0x000525d7) bg_set_opt_pane_cp_ParamLimits

0x0066,	// (0x0004f93e) setting_slider_pane_t1_ParamLimits

0x007f,	// (0x0004f957) setting_slider_pane_t2_ParamLimits

0x0099,	// (0x0004f971) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0005ee36) setting_slider_pane_t_ParamLimits

0x00b1,	// (0x0004f989) slider_set_pane_ParamLimits

0x0d19,	// (0x000505f1) control_pane_g5_ParamLimits

0x0d19,	// (0x000505f1) control_pane_g5

0x64d9,	// (0x00055db1) slider_set_pane_g1_ParamLimits

0x181a,	// (0x000510f2) slider_set_pane_g2_ParamLimits

0x1826,	// (0x000510fe) slider_set_pane_g3_ParamLimits

0x183a,	// (0x00051112) slider_set_pane_g4_ParamLimits

0x1852,	// (0x0005112a) slider_set_pane_g5_ParamLimits

0x1826,	// (0x000510fe) slider_set_pane_g6_ParamLimits

0x1868,	// (0x00051140) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0005f23c) slider_set_pane_g_ParamLimits

0x477d,	// (0x00054055) navi_icon_text_pane_ParamLimits

0xd336,	// (0x0005cc0e) aid_fill_nsta_2_ParamLimits

0xd36d,	// (0x0005cc45) aid_touch_tab_arrow_left_ParamLimits

0xd383,	// (0x0005cc5b) aid_touch_tab_arrow_right_ParamLimits

0xd41e,	// (0x0005ccf6) clock_nsta_pane_ParamLimits

0x5fce,	// (0x000558a6) navi_icon_pane_g1_ParamLimits

0x5fda,	// (0x000558b2) navi_text_pane_t1_ParamLimits

0x72af,	// (0x00056b87) navi_icon_text_pane_g1_ParamLimits

0x72bb,	// (0x00056b93) navi_icon_text_pane_t1_ParamLimits

0xe3e3,	// (0x0005dcbb) list_single_hc_apps_pane_g1_ParamLimits

0xd797,	// (0x0005d06f) list_single_hc_apps_pane_g2_ParamLimits

0xfcda,	// (0x0005f5b2) list_single_hc_apps_pane_g_ParamLimits

0xd7b0,	// (0x0005d088) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x3730,	// (0x00053008) list_single_hc_apps_pane_t1_ParamLimits

0xb443,	// (0x0005ad1b) popup_toolbar2_fixed_window_ParamLimits

0xb443,	// (0x0005ad1b) popup_toolbar2_fixed_window

0xc384,	// (0x0005bc5c) popup_toolbar2_float_window

0x2c0b,	// (0x000524e3) bg_popup_sub_pane_cp27

0x8ba5,	// (0x0005847d) grid_toolbar2_float_pane

0x2c0b,	// (0x000524e3) bg_popup_sub_pane_cp26

0x8ba5,	// (0x0005847d) grid_toolbar2_fixed_pane

0xe3fc,	// (0x0005dcd4) cell_toolbar2_fixed_pane_ParamLimits

0xe3fc,	// (0x0005dcd4) cell_toolbar2_fixed_pane

0xe416,	// (0x0005dcee) cell_toolbar2_fixed_pane_g1

0x8bc6,	// (0x0005849e) toolbar2_fixed_button_pane

0x5145,	// (0x00054a1d) toolbar2_fixed_button_pane_g1

0x5155,	// (0x00054a2d) toolbar2_fixed_button_pane_g2

0x514d,	// (0x00054a25) toolbar2_fixed_button_pane_g3

0x5165,	// (0x00054a3d) toolbar2_fixed_button_pane_g4

0x515d,	// (0x00054a35) toolbar2_fixed_button_pane_g5

0x516d,	// (0x00054a45) toolbar2_fixed_button_pane_g6

0x5175,	// (0x00054a4d) toolbar2_fixed_button_pane_g7

0x5185,	// (0x00054a5d) toolbar2_fixed_button_pane_g8

0x517d,	// (0x00054a55) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0005f13e) toolbar2_fixed_button_pane_g

0x8bce,	// (0x000584a6) cell_toolbar2_float_pane_ParamLimits

0x8bce,	// (0x000584a6) cell_toolbar2_float_pane

0x8bdf,	// (0x000584b7) cell_toolbar2_float_pane_g1

0x8bc6,	// (0x0005849e) toolbar2_fixed_button_pane_cp

0xdebd,	// (0x0005d795) fep_vkb_accented_list_pane_ParamLimits

0xdebd,	// (0x0005d795) fep_vkb_accented_list_pane

0x1df2,	// (0x000516ca) bg_popup_fep_shadow_pane_g9

0x48fd,	// (0x000541d5) bg_popup_fep_shadow_pane_cp3

0x3dc2,	// (0x0005369a) list_accented_list_pane

0x8be8,	// (0x000584c0) list_single_accented_list_pane_ParamLimits

0x8be8,	// (0x000584c0) list_single_accented_list_pane

0x48fd,	// (0x000541d5) list_highlight_pane_cp10

0x8bf9,	// (0x000584d1) list_single_accented_list_pane_t1

0xc2ae,	// (0x0005bb86) popup_slider_window_ParamLimits

0xc2ae,	// (0x0005bb86) popup_slider_window

0x8814,	// (0x000580ec) aid_indentation_list_msg

0xe50f,	// (0x0005dde7) bg_popup_window_pane_cp19

0x8d1d,	// (0x000585f5) popup_slider_window_g1

0x8d39,	// (0x00058611) popup_slider_window_g2

0x8d55,	// (0x0005862d) popup_slider_window_g3

0x0005,

0xfcdf,	// (0x0005f5b7) popup_slider_window_g

0x8db1,	// (0x00058689) popup_slider_window_t1

0x8e25,	// (0x000586fd) small_volume_slider_vertical_pane

0x770b,	// (0x00056fe3) small_volume_slider_vertical_pane_g1

0x770b,	// (0x00056fe3) small_volume_slider_vertical_pane_g2

0x8e41,	// (0x00058719) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf1,	// (0x0005f5c9) small_volume_slider_vertical_pane_g

0xb3b1,	// (0x0005ac89) area_side_right_pane_ParamLimits

0xb3b1,	// (0x0005ac89) area_side_right_pane

0xc66a,	// (0x0005bf42) aid_size_side_button_ParamLimits

0xc66a,	// (0x0005bf42) aid_size_side_button

0xc683,	// (0x0005bf5b) grid_sctrl_middle_pane_ParamLimits

0xc683,	// (0x0005bf5b) grid_sctrl_middle_pane

0x200f,	// (0x000518e7) sctrl_sk_bottom_pane

0x2020,	// (0x000518f8) sctrl_sk_top_pane

0x2032,	// (0x0005190a) aid_touch_sctrl_top

0x203f,	// (0x00051917) bg_sctrl_sk_pane_ParamLimits

0x203f,	// (0x00051917) bg_sctrl_sk_pane

0x204d,	// (0x00051925) sctrl_sk_top_pane_g1

0x205a,	// (0x00051932) sctrl_sk_top_pane_t1

0x2032,	// (0x0005190a) aid_touch_sctrl_bottom

0x203f,	// (0x00051917) bg_sctrl_sk_pane_cp_ParamLimits

0x203f,	// (0x00051917) bg_sctrl_sk_pane_cp

0x2075,	// (0x0005194d) sctrl_sk_bottom_pane_g1

0x205a,	// (0x00051932) sctrl_sk_bottom_pane_t1

0xc69d,	// (0x0005bf75) cell_sctrl_middle_pane_ParamLimits

0xc69d,	// (0x0005bf75) cell_sctrl_middle_pane

0xc6ae,	// (0x0005bf86) aid_touch_sctrl_middle_ParamLimits

0xc6ae,	// (0x0005bf86) aid_touch_sctrl_middle

0xc6bb,	// (0x0005bf93) bg_sctrl_middle_pane_ParamLimits

0xc6bb,	// (0x0005bf93) bg_sctrl_middle_pane

0x26e2,	// (0x00051fba) cell_sctrl_middle_pane_g1_ParamLimits

0x26e2,	// (0x00051fba) cell_sctrl_middle_pane_g1

0xc6c9,	// (0x0005bfa1) cell_sctrl_middle_pane_g2_ParamLimits

0xc6c9,	// (0x0005bfa1) cell_sctrl_middle_pane_g2

0x0001,

0xfcfd,	// (0x0005f5d5) cell_sctrl_middle_pane_g_ParamLimits

0xfcfd,	// (0x0005f5d5) cell_sctrl_middle_pane_g

0x5145,	// (0x00054a1d) bg_sctrl_middle_pane_g1

0x514d,	// (0x00054a25) bg_sctrl_middle_pane_g2

0x5155,	// (0x00054a2d) bg_sctrl_middle_pane_g3

0x515d,	// (0x00054a35) bg_sctrl_middle_pane_g4

0x5165,	// (0x00054a3d) bg_sctrl_middle_pane_g5

0x516d,	// (0x00054a45) bg_sctrl_middle_pane_g6

0x5175,	// (0x00054a4d) bg_sctrl_middle_pane_g7

0x517d,	// (0x00054a55) bg_sctrl_middle_pane_g8

0x0007,

0xfd02,	// (0x0005f5da) bg_sctrl_middle_pane_g

0x5185,	// (0x00054a5d) bg_sctrl_middle_pane_g8_copy1

0x5145,	// (0x00054a1d) bg_sctrl_sk_pane_g1

0x5155,	// (0x00054a2d) bg_sctrl_sk_pane_g2

0x514d,	// (0x00054a25) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0005f13e) bg_sctrl_sk_pane_g

0x3b9a,	// (0x00053472) aid_size_touch_scroll_bar

0x5165,	// (0x00054a3d) bg_sctrl_sk_pane_g4

0x515d,	// (0x00054a35) bg_sctrl_sk_pane_g5

0x516d,	// (0x00054a45) bg_sctrl_sk_pane_g6

0x5175,	// (0x00054a4d) bg_sctrl_sk_pane_g7

0x5185,	// (0x00054a5d) bg_sctrl_sk_pane_g8

0x517d,	// (0x00054a55) bg_sctrl_sk_pane_g9

0x0ed7,	// (0x000507af) popup_fep_china_hwr2_fs_candidate_window

0xbdc8,	// (0x0005b6a0) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbdc8,	// (0x0005b6a0) popup_fep_china_hwr2_fs_control_window

0x1e12,	// (0x000516ea) sctrl_sk_top_pane_g2

0x0001,

0xfcf8,	// (0x0005f5d0) sctrl_sk_top_pane_g

0xe5c7,	// (0x0005de9f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe5c7,	// (0x0005de9f) aid_fep_china_hwr2_fs_cell

0xe5db,	// (0x0005deb3) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe5db,	// (0x0005deb3) bg_popup_fep_shadow_pane_cp4

0xe5f2,	// (0x0005deca) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe5f2,	// (0x0005deca) bg_popup_fep_shadow_pane_cp5

0xe604,	// (0x0005dedc) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe604,	// (0x0005dedc) popup_fep_china_hwr2_fs_control_bar_grid

0xe618,	// (0x0005def0) popup_fep_china_hwr2_fs_control_funtion_grid

0x8e9d,	// (0x00058775) aid_fep_china_hwr2_fs_candi_cell

0x2c0b,	// (0x000524e3) bg_popup_fep_shadow_pane_cp6

0x8ea7,	// (0x0005877f) popup_fep_china_hwr2_fs_candidate_grid

0xe620,	// (0x0005def8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe620,	// (0x0005def8) cell_fep_china_hwr2_fs_funtion_grid

0x770b,	// (0x00056fe3) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8ec9,	// (0x000587a1) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8ec9,	// (0x000587a1) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8ed7,	// (0x000587af) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8ed7,	// (0x000587af) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd13,	// (0x0005f5eb) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd13,	// (0x0005f5eb) cell_fep_china_hwr2_fs_funtion_grid_g

0xe638,	// (0x0005df10) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe638,	// (0x0005df10) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe64d,	// (0x0005df25) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe64d,	// (0x0005df25) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd18,	// (0x0005f5f0) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd18,	// (0x0005f5f0) cell_fep_china_hwr2_fs_funtion_grid_t

0x8f1e,	// (0x000587f6) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8f26,	// (0x000587fe) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8f2e,	// (0x00058806) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1d,	// (0x0005f5f5) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8f36,	// (0x0005880e) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8f36,	// (0x0005880e) cell_fep_china_hwr2_fs_candidate_grid

0x8f4f,	// (0x00058827) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8f57,	// (0x0005882f) popup_fep_china_hwr2_fs_candidate_grid_g21

0x770b,	// (0x00056fe3) cell_fep_china_hwr2_fs_candidate_grid_g1

0x770b,	// (0x00056fe3) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x0005f409) cell_fep_china_hwr2_fs_candidate_grid_g

0x8f5f,	// (0x00058837) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4d3b,	// (0x00054613) clock_nsta_pane_cp_24_ParamLimits

0x4d3b,	// (0x00054613) clock_nsta_pane_cp_24

0x4db9,	// (0x00054691) indicator_nsta_pane_cp_24_ParamLimits

0x4db9,	// (0x00054691) indicator_nsta_pane_cp_24

0x5e4a,	// (0x00055722) heading_pane_g1

0x0001,

0xf8cb,	// (0x0005f1a3) heading_pane_g

0x683a,	// (0x00056112) grid_sct_catagory_button_pane

0x686a,	// (0x00056142) scroll_pane_cp5_ParamLimits

0x72fd,	// (0x00056bd5) button_value_adjust_pane_cp5_ParamLimits

0x72fd,	// (0x00056bd5) button_value_adjust_pane_cp5

0x73dc,	// (0x00056cb4) form2_midp_time_pane_ParamLimits

0x8f6d,	// (0x00058845) cell_sct_catagory_button_pane_ParamLimits

0x8f6d,	// (0x00058845) cell_sct_catagory_button_pane

0x76d0,	// (0x00056fa8) bg_button_pane_cp01_ParamLimits

0x76d0,	// (0x00056fa8) bg_button_pane_cp01

0x770b,	// (0x00056fe3) cell_sct_catagory_button_pane_g1

0xc327,	// (0x0005bbff) popup_tb_extension_window

0xe669,	// (0x0005df41) aid_size_cell_ext_ParamLimits

0xe669,	// (0x0005df41) aid_size_cell_ext

0x39dc,	// (0x000532b4) bg_tb_trans_pane_cp1_ParamLimits

0x39dc,	// (0x000532b4) bg_tb_trans_pane_cp1

0xe68f,	// (0x0005df67) grid_tb_ext_pane_ParamLimits

0xe68f,	// (0x0005df67) grid_tb_ext_pane

0xe6ca,	// (0x0005dfa2) cell_tb_ext_pane_ParamLimits

0xe6ca,	// (0x0005dfa2) cell_tb_ext_pane

0xe6f2,	// (0x0005dfca) cell_tb_ext_pane_g1_ParamLimits

0xe6f2,	// (0x0005dfca) cell_tb_ext_pane_g1

0x9001,	// (0x000588d9) cell_tb_ext_pane_t1

0x2f88,	// (0x00052860) list_highlight_pane_cp11_ParamLimits

0x2f88,	// (0x00052860) list_highlight_pane_cp11

0xb458,	// (0x0005ad30) popup_uni_indicator_window_ParamLimits

0xb458,	// (0x0005ad30) popup_uni_indicator_window

0x3c77,	// (0x0005354f) bg_popup_sub_pane_cp14

0x901c,	// (0x000588f4) list_uniindi_pane

0x9028,	// (0x00058900) uniindi_top_pane

0x2f88,	// (0x00052860) bg_uniindi_top_pane

0x9047,	// (0x0005891f) uniindi_top_pane_g1

0x905d,	// (0x00058935) uniindi_top_pane_g2

0x0003,

0xfd24,	// (0x0005f5fc) uniindi_top_pane_g

0x9087,	// (0x0005895f) uniindi_top_pane_t1

0x90b1,	// (0x00058989) list_single_uniindi_pane_ParamLimits

0x90b1,	// (0x00058989) list_single_uniindi_pane

0x770b,	// (0x00056fe3) bg_uniindi_top_pane_g1

0x90c4,	// (0x0005899c) list_single_uniindi_pane_g1

0x90d7,	// (0x000589af) list_single_uniindi_pane_t1

0xf43b,	// (0x0005ed13) control_bg_pane

0x90fc,	// (0x000589d4) bg_sctrl_sk_pane_cp1

0x9105,	// (0x000589dd) bg_sctrl_sk_pane_cp2

0x910e,	// (0x000589e6) control_bg_pane_g1

0x9117,	// (0x000589ef) control_bg_pane_g2

0x0001,

0xfd2d,	// (0x0005f605) control_bg_pane_g

0x7147,	// (0x00056a1f) cell_indicator_nsta_pane_g1_ParamLimits

0xdd3b,	// (0x0005d613) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x0005f36d) cell_indicator_nsta_pane_g_ParamLimits

0x33f0,	// (0x00052cc8) form2_midp_time_pane_t1_ParamLimits

0x1bad,	// (0x00051485) main_idle_act4_pane_ParamLimits

0x1bad,	// (0x00051485) main_idle_act4_pane

0xc327,	// (0x0005bbff) popup_tb_extension_window_ParamLimits

0xe6b1,	// (0x0005df89) tb_ext_find_pane_ParamLimits

0xe6b1,	// (0x0005df89) tb_ext_find_pane

0x9120,	// (0x000589f8) ai_gene_pane_1_cp1

0x4a38,	// (0x00054310) ai_gene_pane_2_cp1

0x9128,	// (0x00058a00) list_single_idle_plugin_calendar_pane

0x9131,	// (0x00058a09) list_single_idle_plugin_notification_pane

0x913a,	// (0x00058a12) list_single_idle_plugin_player_pane

0xe70f,	// (0x0005dfe7) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe70f,	// (0x0005dfe7) list_single_idle_plugin_shortcut_pane

0xe737,	// (0x0005e00f) main_idle_act4_pane_t1

0xe74d,	// (0x0005e025) main_idle_act4_pane_t2

0x0001,

0xfd32,	// (0x0005f60a) main_idle_act4_pane_t

0xe763,	// (0x0005e03b) middle_sk_idle_act4_pane_ParamLimits

0xe763,	// (0x0005e03b) middle_sk_idle_act4_pane

0xe77f,	// (0x0005e057) popup_clock_digital_analogue_window_cp2

0xe7a7,	// (0x0005e07f) shortcut_wheel_idle_act4_pane_ParamLimits

0xe7a7,	// (0x0005e07f) shortcut_wheel_idle_act4_pane

0x770b,	// (0x00056fe3) shortcut_wheel_idle_act4_pane_g1

0x770b,	// (0x00056fe3) shortcut_wheel_idle_act4_pane_g2

0x770b,	// (0x00056fe3) shortcut_wheel_idle_act4_pane_g3

0x770b,	// (0x00056fe3) shortcut_wheel_idle_act4_pane_g4

0x770b,	// (0x00056fe3) shortcut_wheel_idle_act4_pane_g5

0x91cd,	// (0x00058aa5) shortcut_wheel_idle_act4_pane_g6

0x91d5,	// (0x00058aad) shortcut_wheel_idle_act4_pane_g7

0x91dd,	// (0x00058ab5) shortcut_wheel_idle_act4_pane_g8

0x91e5,	// (0x00058abd) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd37,	// (0x0005f60f) shortcut_wheel_idle_act4_pane_g

0xe350,	// (0x0005dc28) middle_sk_idle_act4_pane_g1_ParamLimits

0xe350,	// (0x0005dc28) middle_sk_idle_act4_pane_g1

0xe824,	// (0x0005e0fc) middle_sk_idle_act4_pane_g2_ParamLimits

0xe824,	// (0x0005e0fc) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5a,	// (0x0005f632) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5a,	// (0x0005f632) middle_sk_idle_act4_pane_g

0xe83c,	// (0x0005e114) middle_sk_idle_act4_pane_t1_ParamLimits

0xe83c,	// (0x0005e114) middle_sk_idle_act4_pane_t1

0xe86b,	// (0x0005e143) grid_ai_shortcut_pane_ParamLimits

0xe86b,	// (0x0005e143) grid_ai_shortcut_pane

0xe888,	// (0x0005e160) list_highlight_pane_cp16_ParamLimits

0xe888,	// (0x0005e160) list_highlight_pane_cp16

0xe895,	// (0x0005e16d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe895,	// (0x0005e16d) list_single_idle_plugin_shortcut_pane_g1

0xe8a1,	// (0x0005e179) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe8a1,	// (0x0005e179) list_single_idle_plugin_shortcut_pane_g2

0xe8bd,	// (0x0005e195) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe8bd,	// (0x0005e195) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5f,	// (0x0005f637) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5f,	// (0x0005f637) list_single_idle_plugin_shortcut_pane_g

0xe8d2,	// (0x0005e1aa) cell_ai_shortcut_pane_ParamLimits

0xe8d2,	// (0x0005e1aa) cell_ai_shortcut_pane

0xe8e8,	// (0x0005e1c0) cell_ai_shortcut_pane_g1_ParamLimits

0xe8e8,	// (0x0005e1c0) cell_ai_shortcut_pane_g1

0x9120,	// (0x000589f8) ai_gene_pane_1_cp2

0x9315,	// (0x00058bed) ai_gene_pane_2_cp2

0x931d,	// (0x00058bf5) list_highlight_pane_cp15

0x9326,	// (0x00058bfe) list_single_idle_plugin_calendar_pane_g1

0x931d,	// (0x00058bf5) list_highlight_pane_cp17

0x932e,	// (0x00058c06) list_single_idle_plugin_calendar_pane_g1_copy1

0x9336,	// (0x00058c0e) list_single_idle_plugin_player_pane_g1

0x6a93,	// (0x0005636b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd66,	// (0x0005f63e) list_single_idle_plugin_player_pane_g

0x933e,	// (0x00058c16) list_single_idle_plugin_player_pane_t1

0x934c,	// (0x00058c24) list_single_idle_plugin_player_pane_t2

0x935a,	// (0x00058c32) list_single_idle_plugin_player_pane_t3

0x9368,	// (0x00058c40) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6b,	// (0x0005f643) list_single_idle_plugin_player_pane_t

0x9376,	// (0x00058c4e) wait_bar_pane_cp15

0x937e,	// (0x00058c56) grid_ai_notification_pane

0x6a93,	// (0x0005636b) list_single_idle_plugin_notification_pane_g1

0xe90a,	// (0x0005e1e2) cell_ai_notification_pane_ParamLimits

0xe90a,	// (0x0005e1e2) cell_ai_notification_pane

0x9394,	// (0x00058c6c) cell_ai_notification_pane_g1

0x939c,	// (0x00058c74) cell_ai_notification_pane_t1

0xe917,	// (0x0005e1ef) tb_ext_find_button_pane

0xe91f,	// (0x0005e1f7) tb_ext_find_pane_g1

0xe927,	// (0x0005e1ff) tb_ext_find_pane_t1

0x42ea,	// (0x00053bc2) tb_ext_find_button_pane_g1

0x93c8,	// (0x00058ca0) tb_ext_find_button_pane_g2

0x0001,

0xfd74,	// (0x0005f64c) tb_ext_find_button_pane_g

0xe737,	// (0x0005e00f) main_idle_act4_pane_t1_ParamLimits

0xe74d,	// (0x0005e025) main_idle_act4_pane_t2_ParamLimits

0xfd32,	// (0x0005f60a) main_idle_act4_pane_t_ParamLimits

0xe77f,	// (0x0005e057) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe797,	// (0x0005e06f) sat_plugin_idle_act4_pane_ParamLimits

0xe797,	// (0x0005e06f) sat_plugin_idle_act4_pane

0xe935,	// (0x0005e20d) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe935,	// (0x0005e20d) sat_plugin_idle_act4_pane_t1

0xe94d,	// (0x0005e225) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe94d,	// (0x0005e225) sat_plugin_idle_act4_pane_t2

0xe965,	// (0x0005e23d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe965,	// (0x0005e23d) sat_plugin_idle_act4_pane_t3

0xe97d,	// (0x0005e255) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe97d,	// (0x0005e255) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd79,	// (0x0005f651) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd79,	// (0x0005f651) sat_plugin_idle_act4_pane_t

0xf500,	// (0x0005edd8) popup_battery_window_ParamLimits

0xf500,	// (0x0005edd8) popup_battery_window

0x2f88,	// (0x00052860) bg_popup_sub_pane_cp25_ParamLimits

0x2f88,	// (0x00052860) bg_popup_sub_pane_cp25

0x941d,	// (0x00058cf5) popup_battery_window_g1_ParamLimits

0x941d,	// (0x00058cf5) popup_battery_window_g1

0x9429,	// (0x00058d01) popup_battery_window_t1_ParamLimits

0x9429,	// (0x00058d01) popup_battery_window_t1

0x943b,	// (0x00058d13) popup_battery_window_t2_ParamLimits

0x943b,	// (0x00058d13) popup_battery_window_t2

0x0001,

0xfd82,	// (0x0005f65a) popup_battery_window_t_ParamLimits

0xfd82,	// (0x0005f65a) popup_battery_window_t

0xd199,	// (0x0005ca71) midp_canvas_pane_ParamLimits

0xd1f6,	// (0x0005cace) midp_keypad_pane_ParamLimits

0xd1f6,	// (0x0005cace) midp_keypad_pane

0x4c3b,	// (0x00054513) main_midp_pane_ParamLimits

0x71c1,	// (0x00056a99) signal_pane_g2_cp_ParamLimits

0xe995,	// (0x0005e26d) aid_size_cell_midp_keypad_ParamLimits

0xe995,	// (0x0005e26d) aid_size_cell_midp_keypad

0xe9b3,	// (0x0005e28b) midp_keyp_game_grid_pane_ParamLimits

0xe9b3,	// (0x0005e28b) midp_keyp_game_grid_pane

0xe9da,	// (0x0005e2b2) midp_keyp_rocker_pane_ParamLimits

0xe9da,	// (0x0005e2b2) midp_keyp_rocker_pane

0xea2b,	// (0x0005e303) midp_keyp_sk_left_pane_ParamLimits

0xea2b,	// (0x0005e303) midp_keyp_sk_left_pane

0xea7f,	// (0x0005e357) midp_keyp_sk_right_pane_ParamLimits

0xea7f,	// (0x0005e357) midp_keyp_sk_right_pane

0x2c0b,	// (0x000524e3) bg_button_pane_cp03

0xead3,	// (0x0005e3ab) midp_keyp_sk_left_pane_g1

0x2c0b,	// (0x000524e3) bg_button_pane_cp04

0xead3,	// (0x0005e3ab) midp_keyp_sk_right_pane_g1

0x770b,	// (0x00056fe3) midp_keyp_rocker_pane_g1

0xeadc,	// (0x0005e3b4) keyp_game_cell_pane_ParamLimits

0xeadc,	// (0x0005e3b4) keyp_game_cell_pane

0x2c0b,	// (0x000524e3) bg_button_pane_cp02

0xeb00,	// (0x0005e3d8) keyp_game_cell_pane_g1

0xb3f3,	// (0x0005accb) popup_fep_vkb2_window_ParamLimits

0xb3f3,	// (0x0005accb) popup_fep_vkb2_window

0xc6d5,	// (0x0005bfad) aid_size_cell_vkb2_ParamLimits

0xc6d5,	// (0x0005bfad) aid_size_cell_vkb2

0xc70b,	// (0x0005bfe3) popup_fep_vkb2_window_g1_ParamLimits

0xc70b,	// (0x0005bfe3) popup_fep_vkb2_window_g1

0xc75b,	// (0x0005c033) vkb2_area_bottom_pane_ParamLimits

0xc75b,	// (0x0005c033) vkb2_area_bottom_pane

0xc7af,	// (0x0005c087) vkb2_area_keypad_pane_ParamLimits

0xc7af,	// (0x0005c087) vkb2_area_keypad_pane

0xc7f7,	// (0x0005c0cf) vkb2_area_top_pane_ParamLimits

0xc7f7,	// (0x0005c0cf) vkb2_area_top_pane

0xc87d,	// (0x0005c155) vkb2_top_entry_pane_ParamLimits

0xc87d,	// (0x0005c155) vkb2_top_entry_pane

0xc8aa,	// (0x0005c182) vkb2_top_grid_left_pane_ParamLimits

0xc8aa,	// (0x0005c182) vkb2_top_grid_left_pane

0xc8ca,	// (0x0005c1a2) vkb2_top_grid_right_pane_ParamLimits

0xc8ca,	// (0x0005c1a2) vkb2_top_grid_right_pane

0x22e1,	// (0x00051bb9) vkb2_cell_keypad_pane_ParamLimits

0x22e1,	// (0x00051bb9) vkb2_cell_keypad_pane

0xc910,	// (0x0005c1e8) vkb2_area_bottom_grid_pane_ParamLimits

0xc910,	// (0x0005c1e8) vkb2_area_bottom_grid_pane

0xc93a,	// (0x0005c212) vkb2_area_bottom_pane_g1_ParamLimits

0xc93a,	// (0x0005c212) vkb2_area_bottom_pane_g1

0xc960,	// (0x0005c238) vkb2_area_bottom_pane_g2_ParamLimits

0xc960,	// (0x0005c238) vkb2_area_bottom_pane_g2

0xc991,	// (0x0005c269) vkb2_area_bottom_pane_g3_ParamLimits

0xc991,	// (0x0005c269) vkb2_area_bottom_pane_g3

0x0002,

0xfd87,	// (0x0005f65f) vkb2_area_bottom_pane_g_ParamLimits

0xfd87,	// (0x0005f65f) vkb2_area_bottom_pane_g

0x248b,	// (0x00051d63) vkb2_top_cell_left_pane_ParamLimits

0x248b,	// (0x00051d63) vkb2_top_cell_left_pane

0xeb09,	// (0x0005e3e1) vkb2_top_entry_pane_g1_ParamLimits

0xeb09,	// (0x0005e3e1) vkb2_top_entry_pane_g1

0xeb17,	// (0x0005e3ef) vkb2_top_entry_pane_t1_ParamLimits

0xeb17,	// (0x0005e3ef) vkb2_top_entry_pane_t1

0x95ec,	// (0x00058ec4) vkb2_top_entry_pane_t2_ParamLimits

0x95ec,	// (0x00058ec4) vkb2_top_entry_pane_t2

0x961e,	// (0x00058ef6) vkb2_top_entry_pane_t3_ParamLimits

0x961e,	// (0x00058ef6) vkb2_top_entry_pane_t3

0x0002,

0xfd8e,	// (0x0005f666) vkb2_top_entry_pane_t_ParamLimits

0xfd8e,	// (0x0005f666) vkb2_top_entry_pane_t

0xc9fb,	// (0x0005c2d3) vkb2_top_grid_right_pane_g1_ParamLimits

0xc9fb,	// (0x0005c2d3) vkb2_top_grid_right_pane_g1

0x24ee,	// (0x00051dc6) vkb2_top_grid_right_pane_g2_ParamLimits

0x24ee,	// (0x00051dc6) vkb2_top_grid_right_pane_g2

0x2506,	// (0x00051dde) vkb2_top_grid_right_pane_g3_ParamLimits

0x2506,	// (0x00051dde) vkb2_top_grid_right_pane_g3

0xca11,	// (0x0005c2e9) vkb2_top_grid_right_pane_g4_ParamLimits

0xca11,	// (0x0005c2e9) vkb2_top_grid_right_pane_g4

0x0003,

0xfd95,	// (0x0005f66d) vkb2_top_grid_right_pane_g_ParamLimits

0xfd95,	// (0x0005f66d) vkb2_top_grid_right_pane_g

0x2534,	// (0x00051e0c) vkb2_top_cell_left_pane_g1

0x254b,	// (0x00051e23) vkb2_cell_keypad_pane_g1_ParamLimits

0x254b,	// (0x00051e23) vkb2_cell_keypad_pane_g1

0x9642,	// (0x00058f1a) vkb2_cell_keypad_pane_t1_ParamLimits

0x9642,	// (0x00058f1a) vkb2_cell_keypad_pane_t1

0x2559,	// (0x00051e31) vkb2_cell_bottom_grid_pane_ParamLimits

0x2559,	// (0x00051e31) vkb2_cell_bottom_grid_pane

0x2592,	// (0x00051e6a) vkb2_cell_bottom_grid_pane_g1

0xe7c8,	// (0x0005e0a0) aid_call2_pane_cp02

0xe7d0,	// (0x0005e0a8) aid_call_pane_cp02

0xe7d8,	// (0x0005e0b0) clock_digital_number_pane_cp10

0xe7e0,	// (0x0005e0b8) clock_digital_number_pane_cp11

0xe7e8,	// (0x0005e0c0) clock_digital_number_pane_cp12

0xe7f0,	// (0x0005e0c8) clock_digital_number_pane_cp13

0xe7f8,	// (0x0005e0d0) clock_digital_separator_pane_cp10

0x42ea,	// (0x00053bc2) popup_clock_digital_analogue_window_cp2_g1

0x42ea,	// (0x00053bc2) popup_clock_digital_analogue_window_cp2_g2

0xe800,	// (0x0005e0d8) popup_clock_digital_analogue_window_cp2_g3

0x42ea,	// (0x00053bc2) popup_clock_digital_analogue_window_cp2_g4

0xe800,	// (0x0005e0d8) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4a,	// (0x0005f622) popup_clock_digital_analogue_window_cp2_g

0xe808,	// (0x0005e0e0) popup_clock_digital_analogue_window_cp2_t1

0xe816,	// (0x0005e0ee) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd55,	// (0x0005f62d) popup_clock_digital_analogue_window_cp2_t

0x770b,	// (0x00056fe3) clock_digital_number_pane_cp10_g1

0x770b,	// (0x00056fe3) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x0005f409) clock_digital_number_pane_cp10_g

0x770b,	// (0x00056fe3) clock_digital_separator_pane_cp10_g1

0x770b,	// (0x00056fe3) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x0005f409) clock_digital_separator_pane_cp10_g

0x9069,	// (0x00058941) uniindi_top_pane_g3

0x907a,	// (0x00058952) uniindi_top_pane_g4

0x236c,	// (0x00051c44) vkb2_row_keypad_pane_ParamLimits

0x236c,	// (0x00051c44) vkb2_row_keypad_pane

0x25ae,	// (0x00051e86) vkb2_cell_t_keypad_pane_ParamLimits

0x25ae,	// (0x00051e86) vkb2_cell_t_keypad_pane

0x25be,	// (0x00051e96) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x25be,	// (0x00051e96) vkb2_cell_t_keypad_pane_cp08

0x25d1,	// (0x00051ea9) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x25d1,	// (0x00051ea9) vkb2_cell_t_keypad_pane_cp09

0x25e5,	// (0x00051ebd) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x25e5,	// (0x00051ebd) vkb2_cell_t_keypad_pane_cp01

0x25f6,	// (0x00051ece) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x25f6,	// (0x00051ece) vkb2_cell_t_keypad_pane_cp02

0x2607,	// (0x00051edf) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2607,	// (0x00051edf) vkb2_cell_t_keypad_pane_cp03

0x2618,	// (0x00051ef0) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2618,	// (0x00051ef0) vkb2_cell_t_keypad_pane_cp04

0x2629,	// (0x00051f01) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2629,	// (0x00051f01) vkb2_cell_t_keypad_pane_cp05

0x263a,	// (0x00051f12) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x263a,	// (0x00051f12) vkb2_cell_t_keypad_pane_cp06

0x264b,	// (0x00051f23) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x264b,	// (0x00051f23) vkb2_cell_t_keypad_pane_cp07

0x265c,	// (0x00051f34) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x265c,	// (0x00051f34) vkb2_cell_t_keypad_pane_cp10

0x1e12,	// (0x000516ea) vkb2_cell_t_keypad_pane_g1

0x9659,	// (0x00058f31) vkb2_cell_t_keypad_pane_t1

0xf43b,	// (0x0005ed13) popup_grid_graphic2_window

0xeb50,	// (0x0005e428) aid_size_cell_graphic2_ParamLimits

0xeb50,	// (0x0005e428) aid_size_cell_graphic2

0xeb8e,	// (0x0005e466) bg_popup_window_pane_cp21_ParamLimits

0xeb8e,	// (0x0005e466) bg_popup_window_pane_cp21

0xeb9c,	// (0x0005e474) graphic2_pages_pane_ParamLimits

0xeb9c,	// (0x0005e474) graphic2_pages_pane

0xebf2,	// (0x0005e4ca) grid_graphic2_control_pane_ParamLimits

0xebf2,	// (0x0005e4ca) grid_graphic2_control_pane

0xec3a,	// (0x0005e512) grid_graphic2_pane_ParamLimits

0xec3a,	// (0x0005e512) grid_graphic2_pane

0xecc1,	// (0x0005e599) cell_graphic2_pane

0xf43b,	// (0x0005ed13) main_comp_mode_pane

0x88e9,	// (0x000581c1) list_ai3_gene_pane_ParamLimits

0xe50f,	// (0x0005dde7) bg_popup_window_pane_cp19_ParamLimits

0x8cbf,	// (0x00058597) bg_touch_area_indi_pane_ParamLimits

0x8cbf,	// (0x00058597) bg_touch_area_indi_pane

0x8cd5,	// (0x000585ad) bg_touch_area_indi_pane_cp01_ParamLimits

0x8cd5,	// (0x000585ad) bg_touch_area_indi_pane_cp01

0x8ceb,	// (0x000585c3) bg_touch_area_indi_pane_cp02_ParamLimits

0x8ceb,	// (0x000585c3) bg_touch_area_indi_pane_cp02

0x8d03,	// (0x000585db) bg_touch_area_indi_pane_cp03_ParamLimits

0x8d03,	// (0x000585db) bg_touch_area_indi_pane_cp03

0x8d1d,	// (0x000585f5) popup_slider_window_g1_ParamLimits

0x8d39,	// (0x00058611) popup_slider_window_g2_ParamLimits

0x8d55,	// (0x0005862d) popup_slider_window_g3_ParamLimits

0xfcdf,	// (0x0005f5b7) popup_slider_window_g_ParamLimits

0x8db1,	// (0x00058689) popup_slider_window_t1_ParamLimits

0x8e25,	// (0x000586fd) small_volume_slider_vertical_pane_ParamLimits

0xecc1,	// (0x0005e599) cell_graphic2_pane_ParamLimits

0xed1e,	// (0x0005e5f6) bg_button_pane_cp10_ParamLimits

0xed1e,	// (0x0005e5f6) bg_button_pane_cp10

0xed31,	// (0x0005e609) bg_button_pane_cp11_ParamLimits

0xed31,	// (0x0005e609) bg_button_pane_cp11

0xed44,	// (0x0005e61c) graphic2_pages_pane_g1_ParamLimits

0xed44,	// (0x0005e61c) graphic2_pages_pane_g1

0xed5f,	// (0x0005e637) graphic2_pages_pane_g2_ParamLimits

0xed5f,	// (0x0005e637) graphic2_pages_pane_g2

0x0001,

0xfda3,	// (0x0005f67b) graphic2_pages_pane_g_ParamLimits

0xfda3,	// (0x0005f67b) graphic2_pages_pane_g

0xed77,	// (0x0005e64f) graphic2_pages_pane_t1_ParamLimits

0xed77,	// (0x0005e64f) graphic2_pages_pane_t1

0xed8f,	// (0x0005e667) cell_graphic2_control_pane_ParamLimits

0xed8f,	// (0x0005e667) cell_graphic2_control_pane

0xedc1,	// (0x0005e699) cell_graphic2_pane_g1_ParamLimits

0xedc1,	// (0x0005e699) cell_graphic2_pane_g1

0xe35e,	// (0x0005dc36) cell_graphic2_pane_g2_ParamLimits

0xe35e,	// (0x0005dc36) cell_graphic2_pane_g2

0xdeb0,	// (0x0005d788) cell_graphic2_pane_g3_ParamLimits

0xdeb0,	// (0x0005d788) cell_graphic2_pane_g3

0xe36b,	// (0x0005dc43) cell_graphic2_pane_g4_ParamLimits

0xe36b,	// (0x0005dc43) cell_graphic2_pane_g4

0xedce,	// (0x0005e6a6) cell_graphic2_pane_g5_ParamLimits

0xedce,	// (0x0005e6a6) cell_graphic2_pane_g5

0x0004,

0xfda8,	// (0x0005f680) cell_graphic2_pane_g_ParamLimits

0xfda8,	// (0x0005f680) cell_graphic2_pane_g

0xedee,	// (0x0005e6c6) cell_graphic2_pane_t1_ParamLimits

0xedee,	// (0x0005e6c6) cell_graphic2_pane_t1

0x5e3e,	// (0x00055716) grid_highlight_pane_cp11_ParamLimits

0x5e3e,	// (0x00055716) grid_highlight_pane_cp11

0x2f88,	// (0x00052860) bg_button_pane_cp05

0xee23,	// (0x0005e6fb) cell_graphic2_control_pane_g1

0x770b,	// (0x00056fe3) bg_touch_area_indi_pane_g1

0x9929,	// (0x00059201) aid_cmod_rocker_key_size

0x9933,	// (0x0005920b) aid_cmode_itu_key_size

0x993d,	// (0x00059215) main_cmode_video_pane

0x9947,	// (0x0005921f) main_comp_mode_itu_pane

0x9953,	// (0x0005922b) main_comp_mode_rocker_pane

0x995f,	// (0x00059237) cell_cmode_rocker_pane_ParamLimits

0x995f,	// (0x00059237) cell_cmode_rocker_pane

0x9971,	// (0x00059249) cell_cmode_itu_pane_ParamLimits

0x9971,	// (0x00059249) cell_cmode_itu_pane

0x3c77,	// (0x0005354f) bg_button_pane_cp06_ParamLimits

0x3c77,	// (0x0005354f) bg_button_pane_cp06

0x7989,	// (0x00057261) cell_cmode_rocker_pane_g1_ParamLimits

0x7989,	// (0x00057261) cell_cmode_rocker_pane_g1

0x8ec9,	// (0x000587a1) cell_cmode_rocker_pane_g2_ParamLimits

0x8ec9,	// (0x000587a1) cell_cmode_rocker_pane_g2

0x0001,

0xfdb8,	// (0x0005f690) cell_cmode_rocker_pane_g_ParamLimits

0xfdb8,	// (0x0005f690) cell_cmode_rocker_pane_g

0x2c0b,	// (0x000524e3) bg_button_pane_cp07

0x9986,	// (0x0005925e) cell_cmode_itu_pane_g1

0x998f,	// (0x00059267) cell_cmode_itu_pane_t1

0x999d,	// (0x00059275) cell_cmode_itu_pane_t2

0x0001,

0xfdbd,	// (0x0005f695) cell_cmode_itu_pane_t

0x90ec,	// (0x000589c4) aid_touch_ctrl_left

0x90f4,	// (0x000589cc) aid_touch_ctrl_right

0x2c0b,	// (0x000524e3) compa_mode_pane

0xee49,	// (0x0005e721) aid_cmod_rocker_key_size_cp

0xee53,	// (0x0005e72b) aid_cmode_itu_key_size_cp

0x99bf,	// (0x00059297) compa_mode_pane_g1

0x99c7,	// (0x0005929f) compa_mode_pane_g2

0x99cf,	// (0x000592a7) compa_mode_pane_g3

0x0002,

0xfdc2,	// (0x0005f69a) compa_mode_pane_g

0xee5d,	// (0x0005e735) main_comp_mode_itu_pane_cp

0xee65,	// (0x0005e73d) main_comp_mode_rocker_pane_cp

0xee6d,	// (0x0005e745) cell_cmode_itu_pane_cp_ParamLimits

0xee6d,	// (0x0005e745) cell_cmode_itu_pane_cp

0xee82,	// (0x0005e75a) cell_cmode_rocker_pane_cp_ParamLimits

0xee82,	// (0x0005e75a) cell_cmode_rocker_pane_cp

0x3c77,	// (0x0005354f) bg_button_pane_cp06_cp_ParamLimits

0x3c77,	// (0x0005354f) bg_button_pane_cp06_cp

0x7989,	// (0x00057261) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7989,	// (0x00057261) cell_cmode_rocker_pane_g1_cp

0x770b,	// (0x00056fe3) cell_cmode_rocker_pane_g2_cp

0x2c0b,	// (0x000524e3) bg_button_pane_cp07_cp

0xee94,	// (0x0005e76c) cell_cmode_itu_pane_g1_cp

0xee9d,	// (0x0005e775) cell_cmode_itu_pane_t1_cp

0xee9d,	// (0x0005e775) cell_cmode_itu_pane_t2_cp

0xdb2f,	// (0x0005d407) settings_code_pane_cp2

0x2cff,	// (0x000525d7) bg_popup_window_pane_cp3_ParamLimits

0x385f,	// (0x00053137) heading_pane_cp3_ParamLimits

0x386b,	// (0x00053143) listscroll_popup_graphic_pane_ParamLimits

0x1bbb,	// (0x00051493) fep_hwr_aid_pane_ParamLimits

0x2032,	// (0x0005190a) aid_touch_sctrl_top_ParamLimits

0x204d,	// (0x00051925) sctrl_sk_top_pane_g1_ParamLimits

0x1e12,	// (0x000516ea) sctrl_sk_top_pane_g2_ParamLimits

0xfcf8,	// (0x0005f5d0) sctrl_sk_top_pane_g_ParamLimits

0x205a,	// (0x00051932) sctrl_sk_top_pane_t1_ParamLimits

0x2032,	// (0x0005190a) aid_touch_sctrl_bottom_ParamLimits

0x205a,	// (0x00051932) sctrl_sk_bottom_pane_t1_ParamLimits

0x9035,	// (0x0005890d) aid_area_touch_clock

0xc83f,	// (0x0005c117) aid_vkb2_area_top_pane_cell_ParamLimits

0xc83f,	// (0x0005c117) aid_vkb2_area_top_pane_cell

0xc8ea,	// (0x0005c1c2) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc8ea,	// (0x0005c1c2) aid_vkb2_area_bottom_pane_cell

0x95a4,	// (0x00058e7c) popup_char_count_window

0x9a1c,	// (0x000592f4) popup_char_count_window_g1

0x9a25,	// (0x000592fd) popup_char_count_window_g2

0x9a2e,	// (0x00059306) popup_char_count_window_g3

0x0002,

0xfdc9,	// (0x0005f6a1) popup_char_count_window_g

0x9a37,	// (0x0005930f) popup_char_count_window_t1

0x2109,	// (0x000519e1) popup_fep_char_preview_window_ParamLimits

0x2109,	// (0x000519e1) popup_fep_char_preview_window

0xc85f,	// (0x0005c137) vkb2_top_candi_pane_ParamLimits

0xc85f,	// (0x0005c137) vkb2_top_candi_pane

0xeeab,	// (0x0005e783) cell_vkb2_top_candi_pane_ParamLimits

0xeeab,	// (0x0005e783) cell_vkb2_top_candi_pane

0x2671,	// (0x00051f49) bg_popup_fep_char_preview_window_ParamLimits

0x2671,	// (0x00051f49) bg_popup_fep_char_preview_window

0x267f,	// (0x00051f57) popup_fep_char_preview_window_t1_ParamLimits

0x267f,	// (0x00051f57) popup_fep_char_preview_window_t1

0x9a92,	// (0x0005936a) bg_popup_fep_char_preview_window_g1

0x9a9a,	// (0x00059372) bg_popup_fep_char_preview_window_g2

0x9aa2,	// (0x0005937a) bg_popup_fep_char_preview_window_g3

0x9aaa,	// (0x00059382) bg_popup_fep_char_preview_window_g4

0x9ab2,	// (0x0005938a) bg_popup_fep_char_preview_window_g5

0x26b9,	// (0x00051f91) bg_popup_fep_char_preview_window_g6

0x9aba,	// (0x00059392) bg_popup_fep_char_preview_window_g7

0x9ac2,	// (0x0005939a) bg_popup_fep_char_preview_window_g8

0x9aca,	// (0x000593a2) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd0,	// (0x0005f6a8) bg_popup_fep_char_preview_window_g

0x1e12,	// (0x000516ea) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1e12,	// (0x000516ea) cell_vkb2_top_candi_pane_g1

0x1e20,	// (0x000516f8) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1e20,	// (0x000516f8) cell_vkb2_top_candi_pane_g2

0x885c,	// (0x00058134) cell_vkb2_top_candi_pane_g3_ParamLimits

0x885c,	// (0x00058134) cell_vkb2_top_candi_pane_g3

0x26c1,	// (0x00051f99) cell_vkb2_top_candi_pane_g4_ParamLimits

0x26c1,	// (0x00051f99) cell_vkb2_top_candi_pane_g4

0x7e60,	// (0x00057738) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7e60,	// (0x00057738) cell_vkb2_top_candi_pane_g5

0x26e2,	// (0x00051fba) cell_vkb2_top_candi_pane_g6_ParamLimits

0x26e2,	// (0x00051fba) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde3,	// (0x0005f6bb) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde3,	// (0x0005f6bb) cell_vkb2_top_candi_pane_g

0x26f0,	// (0x00051fc8) cell_vkb2_top_candi_pane_t1

0x1806,	// (0x000510de) aid_size_touch_slider_mark_ParamLimits

0x1806,	// (0x000510de) aid_size_touch_slider_mark

0xebd8,	// (0x0005e4b0) grid_graphic2_catg_pane_ParamLimits

0xebd8,	// (0x0005e4b0) grid_graphic2_catg_pane

0xec94,	// (0x0005e56c) popup_grid_graphic2_window_t1_ParamLimits

0xec94,	// (0x0005e56c) popup_grid_graphic2_window_t1

0xecaa,	// (0x0005e582) popup_grid_graphic2_window_t2_ParamLimits

0xecaa,	// (0x0005e582) popup_grid_graphic2_window_t2

0x0001,

0xfd9e,	// (0x0005f676) popup_grid_graphic2_window_t_ParamLimits

0xfd9e,	// (0x0005f676) popup_grid_graphic2_window_t

0x2f88,	// (0x00052860) bg_button_pane_cp05_ParamLimits

0xee23,	// (0x0005e6fb) cell_graphic2_control_pane_g1_ParamLimits

0xef2a,	// (0x0005e802) cell_graphic2_catg_pane_ParamLimits

0xef2a,	// (0x0005e802) cell_graphic2_catg_pane

0x2c0b,	// (0x000524e3) bg_button_pane_cp12

0xef3c,	// (0x0005e814) cell_graphic2_catg_pane_g1

0x9001,	// (0x000588d9) cell_tb_ext_pane_t1_ParamLimits

0x24ab,	// (0x00051d83) vkb2_top_cell_right_narrow_pane_ParamLimits

0x24ab,	// (0x00051d83) vkb2_top_cell_right_narrow_pane

0x24c3,	// (0x00051d9b) vkb2_top_cell_right_wide_pane_ParamLimits

0x24c3,	// (0x00051d9b) vkb2_top_cell_right_wide_pane

0x1bad,	// (0x00051485) bg_vkb2_func_pane_ParamLimits

0x1bad,	// (0x00051485) bg_vkb2_func_pane

0x2534,	// (0x00051e0c) vkb2_top_cell_left_pane_g1_ParamLimits

0x1bad,	// (0x00051485) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1bad,	// (0x00051485) bg_vkb2_fuc_pane_cp03

0x2592,	// (0x00051e6a) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x514d,	// (0x00054a25) bg_vkb2_func_pane_g1

0x5155,	// (0x00054a2d) bg_vkb2_func_pane_g2

0x5165,	// (0x00054a3d) bg_vkb2_func_pane_g3

0x515d,	// (0x00054a35) bg_vkb2_func_pane_g4

0x516d,	// (0x00054a45) bg_vkb2_func_pane_g5

0x5175,	// (0x00054a4d) bg_vkb2_func_pane_g6

0x517d,	// (0x00054a55) bg_vkb2_func_pane_g7

0x5185,	// (0x00054a5d) bg_vkb2_func_pane_g8

0x5145,	// (0x00054a1d) bg_vkb2_func_pane_g9

0x0008,

0xfdf0,	// (0x0005f6c8) bg_vkb2_func_pane_g

0x1bad,	// (0x00051485) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1bad,	// (0x00051485) bg_vkb2_fuc_pane_cp01

0x2534,	// (0x00051e0c) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2534,	// (0x00051e0c) vkb2_top_cell_right_wide_pane_g1

0x1bad,	// (0x00051485) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1bad,	// (0x00051485) bg_vkb2_fuc_pane_cp02

0x2592,	// (0x00051e6a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2592,	// (0x00051e6a) vkb2_top_cell_right_narrow_pane_g1

0xe44f,	// (0x0005dd27) aid_touch_area_decrease_ParamLimits

0xe44f,	// (0x0005dd27) aid_touch_area_decrease

0xe483,	// (0x0005dd5b) aid_touch_area_increase_ParamLimits

0xe483,	// (0x0005dd5b) aid_touch_area_increase

0xe4ab,	// (0x0005dd83) aid_touch_area_mute_ParamLimits

0xe4ab,	// (0x0005dd83) aid_touch_area_mute

0xe4db,	// (0x0005ddb3) aid_touch_area_slider_ParamLimits

0xe4db,	// (0x0005ddb3) aid_touch_area_slider

0xe51b,	// (0x0005ddf3) popup_slider_window_g4_ParamLimits

0xe51b,	// (0x0005ddf3) popup_slider_window_g4

0xe543,	// (0x0005de1b) popup_slider_window_g5_ParamLimits

0xe543,	// (0x0005de1b) popup_slider_window_g5

0xe577,	// (0x0005de4f) popup_slider_window_g6_ParamLimits

0xe577,	// (0x0005de4f) popup_slider_window_g6

0x8ddf,	// (0x000586b7) popup_slider_window_t2_ParamLimits

0x8ddf,	// (0x000586b7) popup_slider_window_t2

0x0001,

0xfcec,	// (0x0005f5c4) popup_slider_window_t_ParamLimits

0xfcec,	// (0x0005f5c4) popup_slider_window_t

0xe593,	// (0x0005de6b) slider_pane_ParamLimits

0xe593,	// (0x0005de6b) slider_pane

0x9aed,	// (0x000593c5) slider_pane_g1_ParamLimits

0x9aed,	// (0x000593c5) slider_pane_g1

0x9b01,	// (0x000593d9) slider_pane_g2_ParamLimits

0x9b01,	// (0x000593d9) slider_pane_g2

0x9b17,	// (0x000593ef) slider_pane_g3_ParamLimits

0x9b17,	// (0x000593ef) slider_pane_g3

0x0003,

0xfe03,	// (0x0005f6db) slider_pane_g_ParamLimits

0xfe03,	// (0x0005f6db) slider_pane_g

0xc36f,	// (0x0005bc47) popup_tb_float_extension_window_ParamLimits

0xc36f,	// (0x0005bc47) popup_tb_float_extension_window

0x9b43,	// (0x0005941b) aid_size_cell_tb_float_ext

0x2c0b,	// (0x000524e3) bg_popup_sub_window_cp28

0x9b4f,	// (0x00059427) grid_tb_float_ext_pane

0x9b59,	// (0x00059431) cell_tb_float_ext_pane_ParamLimits

0x9b59,	// (0x00059431) cell_tb_float_ext_pane

0x9b73,	// (0x0005944b) cell_tb_float_ext_pane_g1

0x9b7c,	// (0x00059454) grid_highlight_pane_cp12

0xc525,	// (0x0005bdfd) cell_last_hwr_side_pane_ParamLimits

0xc525,	// (0x0005bdfd) cell_last_hwr_side_pane

0x770b,	// (0x00056fe3) cell_last_hwr_side_pane_g1

0x9b85,	// (0x0005945d) cell_last_hwr_side_pane_g2

0x0001,

0xfe0c,	// (0x0005f6e4) cell_last_hwr_side_pane_g

0xc9c6,	// (0x0005c29e) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc9c6,	// (0x0005c29e) vkb2_area_bottom_space_btn_pane

0x1e12,	// (0x000516ea) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9659,	// (0x00058f31) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x26f0,	// (0x00051fc8) cell_vkb2_top_candi_pane_t1_ParamLimits

0x270f,	// (0x00051fe7) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x270f,	// (0x00051fe7) vkb2_area_bottom_space_btn_pane_g1

0x2749,	// (0x00052021) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2749,	// (0x00052021) vkb2_area_bottom_space_btn_pane_g2

0x277f,	// (0x00052057) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x277f,	// (0x00052057) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe11,	// (0x0005f6e9) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe11,	// (0x0005f6e9) vkb2_area_bottom_space_btn_pane_g

0x1c70,	// (0x00051548) cel_fep_hwr_func_pane_ParamLimits

0x1c70,	// (0x00051548) cel_fep_hwr_func_pane

0xc4fa,	// (0x0005bdd2) cell_hwr_side_button_pane_ParamLimits

0xc4fa,	// (0x0005bdd2) cell_hwr_side_button_pane

0x9035,	// (0x0005890d) aid_area_touch_clock_ParamLimits

0x2f88,	// (0x00052860) bg_uniindi_top_pane_ParamLimits

0x9047,	// (0x0005891f) uniindi_top_pane_g1_ParamLimits

0x905d,	// (0x00058935) uniindi_top_pane_g2_ParamLimits

0x9069,	// (0x00058941) uniindi_top_pane_g3_ParamLimits

0x907a,	// (0x00058952) uniindi_top_pane_g4_ParamLimits

0xfd24,	// (0x0005f5fc) uniindi_top_pane_g_ParamLimits

0x9087,	// (0x0005895f) uniindi_top_pane_t1_ParamLimits

0x2f88,	// (0x00052860) bg_vkb2_func_pane_cp01_ParamLimits

0x2f88,	// (0x00052860) bg_vkb2_func_pane_cp01

0x9b8e,	// (0x00059466) cel_fep_hwr_func_pane_g1_ParamLimits

0x9b8e,	// (0x00059466) cel_fep_hwr_func_pane_g1

0x2f88,	// (0x00052860) bg_vkb2_func_pane_cp02_ParamLimits

0x2f88,	// (0x00052860) bg_vkb2_func_pane_cp02

0x9b8e,	// (0x00059466) cell_hwr_side_button_pane_g1_ParamLimits

0x9b8e,	// (0x00059466) cell_hwr_side_button_pane_g1

0x4fc6,	// (0x0005489e) status_pane_g4_ParamLimits

0x4fc6,	// (0x0005489e) status_pane_g4

0x4fe0,	// (0x000548b8) status_pane_t1

0x7445,	// (0x00056d1d) form2_midp_gauge_slider_cont_pane

0x744d,	// (0x00056d25) form2_midp_gauge_slider_pane_t1_ParamLimits

0xde06,	// (0x0005d6de) form2_midp_gauge_slider_pane_t2_ParamLimits

0xde18,	// (0x0005d6f0) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x0005f3bc) form2_midp_gauge_slider_pane_t_ParamLimits

0x7483,	// (0x00056d5b) form2_midp_slider_pane_ParamLimits

0x20c9,	// (0x000519a1) aid_size_cell_func_vkb2_ParamLimits

0x20c9,	// (0x000519a1) aid_size_cell_func_vkb2

0x9b2f,	// (0x00059407) slider_pane_g4_ParamLimits

0x9b2f,	// (0x00059407) slider_pane_g4

0xca27,	// (0x0005c2ff) form2_midp_gauge_slider_pane_t2_cp01

0xca35,	// (0x0005c30d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xca35,	// (0x0005c30d) form2_midp_gauge_slider_pane_t3_cp01

0x27f4,	// (0x000520cc) form2_midp_slider_pane_cp01

0x2c0b,	// (0x000524e3) navi_smil_pane

0x9bc7,	// (0x0005949f) navi_smil_pane_g1

0x9bcf,	// (0x000594a7) navi_smil_pane_t1

0x9b9c,	// (0x00059474) form2_midp_slider_pane_g1

0x9ba5,	// (0x0005947d) form2_midp_slider_pane_g2

0x9bad,	// (0x00059485) form2_midp_slider_pane_g3

0x9b9c,	// (0x00059474) form2_midp_slider_pane_g4

0xef45,	// (0x0005e81d) form2_midp_slider_pane_g5

0x0004,

0xfe1a,	// (0x0005f6f2) form2_midp_slider_pane_g

0x27b9,	// (0x00052091) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x27b9,	// (0x00052091) vkb2_area_bottom_space_btn_pane_g4

0xd469,	// (0x0005cd41) lc0_navi_pane_ParamLimits

0xd469,	// (0x0005cd41) lc0_navi_pane

0xd4d3,	// (0x0005cdab) lc0_stat_indi_pane_ParamLimits

0xd4d3,	// (0x0005cdab) lc0_stat_indi_pane

0xd4e8,	// (0x0005cdc0) ls0_title_pane_ParamLimits

0xd4e8,	// (0x0005cdc0) ls0_title_pane

0x3c77,	// (0x0005354f) bg_popup_sub_pane_cp14_ParamLimits

0x901c,	// (0x000588f4) list_uniindi_pane_ParamLimits

0x9028,	// (0x00058900) uniindi_top_pane_ParamLimits

0x90c4,	// (0x0005899c) list_single_uniindi_pane_g1_ParamLimits

0x90d7,	// (0x000589af) list_single_uniindi_pane_t1_ParamLimits

0xca52,	// (0x0005c32a) lc0_stat_clock_pane_ParamLimits

0xca52,	// (0x0005c32a) lc0_stat_clock_pane

0xef50,	// (0x0005e828) lc0_stat_indi_pane_g1_ParamLimits

0xef50,	// (0x0005e828) lc0_stat_indi_pane_g1

0xef5d,	// (0x0005e835) lc0_stat_indi_pane_g2_ParamLimits

0xef5d,	// (0x0005e835) lc0_stat_indi_pane_g2

0x0001,

0xfe25,	// (0x0005f6fd) lc0_stat_indi_pane_g_ParamLimits

0xfe25,	// (0x0005f6fd) lc0_stat_indi_pane_g

0xca5f,	// (0x0005c337) lc0_uni_indicator_pane_ParamLimits

0xca5f,	// (0x0005c337) lc0_uni_indicator_pane

0xef6a,	// (0x0005e842) ls0_title_pane_g1_ParamLimits

0xef6a,	// (0x0005e842) ls0_title_pane_g1

0xef7e,	// (0x0005e856) ls0_title_pane_t1_ParamLimits

0xef7e,	// (0x0005e856) ls0_title_pane_t1

0xca6c,	// (0x0005c344) lc0_uni_indicator_pane_g1_ParamLimits

0xca6c,	// (0x0005c344) lc0_uni_indicator_pane_g1

0x9c41,	// (0x00059519) lc0_stat_clock_pane_t1

0xf43b,	// (0x0005ed13) main_ai5_pane

0x9c4f,	// (0x00059527) ai5_sk_pane_ParamLimits

0x9c4f,	// (0x00059527) ai5_sk_pane

0xefac,	// (0x0005e884) cell_ai5_widget_pane_ParamLimits

0xefac,	// (0x0005e884) cell_ai5_widget_pane

0x9d12,	// (0x000595ea) aid_size_cell_widget_grid

0x9d28,	// (0x00059600) bg_ai5_widget_pane_ParamLimits

0x9d28,	// (0x00059600) bg_ai5_widget_pane

0x9d9c,	// (0x00059674) cell_ai5_widget_pane_g2

0x9dac,	// (0x00059684) cell_ai5_widget_pane_g3

0x9dc3,	// (0x0005969b) cell_ai5_widget_pane_g4

0x9dcf,	// (0x000596a7) cell_ai5_widget_pane_g5

0x9ddb,	// (0x000596b3) cell_ai5_widget_pane_g6

0x9de7,	// (0x000596bf) cell_ai5_widget_pane_g7

0x9e2f,	// (0x00059707) cell_ai5_widget_pane_t1_ParamLimits

0x9e2f,	// (0x00059707) cell_ai5_widget_pane_t1

0x9e4c,	// (0x00059724) cell_ai5_widget_pane_t2_ParamLimits

0x9e4c,	// (0x00059724) cell_ai5_widget_pane_t2

0x9e64,	// (0x0005973c) cell_ai5_widget_pane_t3_ParamLimits

0x9e64,	// (0x0005973c) cell_ai5_widget_pane_t3

0x9e7c,	// (0x00059754) cell_ai5_widget_pane_t4_ParamLimits

0x9e7c,	// (0x00059754) cell_ai5_widget_pane_t4

0x9e99,	// (0x00059771) cell_ai5_widget_pane_t5_ParamLimits

0x9e99,	// (0x00059771) cell_ai5_widget_pane_t5

0x9eb8,	// (0x00059790) cell_ai5_widget_pane_t6_ParamLimits

0x9eb8,	// (0x00059790) cell_ai5_widget_pane_t6

0x9eca,	// (0x000597a2) cell_ai5_widget_pane_t7_ParamLimits

0x9eca,	// (0x000597a2) cell_ai5_widget_pane_t7

0x9ee3,	// (0x000597bb) cell_ai5_widget_pane_t8_ParamLimits

0x9ee3,	// (0x000597bb) cell_ai5_widget_pane_t8

0x0009,

0xfe3f,	// (0x0005f717) cell_ai5_widget_pane_t_ParamLimits

0xfe3f,	// (0x0005f717) cell_ai5_widget_pane_t

0x9f37,	// (0x0005980f) grid_ai5_widget_pane

0x3c77,	// (0x0005354f) highlight_cell_ai5_widget_pane_ParamLimits

0x3c77,	// (0x0005354f) highlight_cell_ai5_widget_pane

0xf016,	// (0x0005e8ee) ai5_sk_left_pane

0xf020,	// (0x0005e8f8) ai5_sk_middle_pane

0xf02a,	// (0x0005e902) ai5_sk_right_pane

0x9f6c,	// (0x00059844) bg_ai5_widget_pane_g1_ParamLimits

0x9f6c,	// (0x00059844) bg_ai5_widget_pane_g1

0x9f78,	// (0x00059850) bg_ai5_widget_pane_g2_ParamLimits

0x9f78,	// (0x00059850) bg_ai5_widget_pane_g2

0x9f84,	// (0x0005985c) bg_ai5_widget_pane_g3_ParamLimits

0x9f84,	// (0x0005985c) bg_ai5_widget_pane_g3

0x9f90,	// (0x00059868) bg_ai5_widget_pane_g4_ParamLimits

0x9f90,	// (0x00059868) bg_ai5_widget_pane_g4

0x9f9c,	// (0x00059874) bg_ai5_widget_pane_g5_ParamLimits

0x9f9c,	// (0x00059874) bg_ai5_widget_pane_g5

0x9fa8,	// (0x00059880) bg_ai5_widget_pane_g6_ParamLimits

0x9fa8,	// (0x00059880) bg_ai5_widget_pane_g6

0x9fb4,	// (0x0005988c) bg_ai5_widget_pane_g7_ParamLimits

0x9fb4,	// (0x0005988c) bg_ai5_widget_pane_g7

0x9fc0,	// (0x00059898) bg_ai5_widget_pane_g8_ParamLimits

0x9fc0,	// (0x00059898) bg_ai5_widget_pane_g8

0x9fcc,	// (0x000598a4) bg_ai5_widget_pane_g9_ParamLimits

0x9fcc,	// (0x000598a4) bg_ai5_widget_pane_g9

0x0008,

0xfe54,	// (0x0005f72c) bg_ai5_widget_pane_g_ParamLimits

0xfe54,	// (0x0005f72c) bg_ai5_widget_pane_g

0x9ffe,	// (0x000598d6) cell_shortcut_ai5_widget_pane_ParamLimits

0x9ffe,	// (0x000598d6) cell_shortcut_ai5_widget_pane

0x48fd,	// (0x000541d5) bg_cell_shortcut_ai5_widget_pane

0xa00f,	// (0x000598e7) cell_grid_ai5_widget_pane_g1

0x48fd,	// (0x000541d5) highlight_cell_shortcut_ai5_widget_pane

0x514d,	// (0x00054a25) ai5_sk_left_pane_g1

0xa018,	// (0x000598f0) ai5_sk_left_pane_g2

0xa020,	// (0x000598f8) ai5_sk_left_pane_g3

0xa028,	// (0x00059900) ai5_sk_left_pane_g4

0x0003,

0xfe67,	// (0x0005f73f) ai5_sk_left_pane_g

0xa030,	// (0x00059908) ai5_sk_left_pane_t1

0x5155,	// (0x00054a2d) ai5_sk_right_pane_g1

0xa03e,	// (0x00059916) ai5_sk_right_pane_g2

0xa046,	// (0x0005991e) ai5_sk_right_pane_g3

0xa04e,	// (0x00059926) ai5_sk_right_pane_g4

0x0003,

0xfe70,	// (0x0005f748) ai5_sk_right_pane_g

0xa056,	// (0x0005992e) ai5_sk_right_pane_t1

0x5155,	// (0x00054a2d) ai5_sk_middle_pane_g1

0x514d,	// (0x00054a25) ai5_sk_middle_pane_g2

0x516d,	// (0x00054a45) ai5_sk_middle_pane_g3

0xa046,	// (0x0005991e) ai5_sk_middle_pane_g4

0xa020,	// (0x000598f8) ai5_sk_middle_pane_g5

0xa064,	// (0x0005993c) ai5_sk_middle_pane_g6

0xf034,	// (0x0005e90c) ai5_sk_middle_pane_g7

0x0006,

0xfe79,	// (0x0005f751) ai5_sk_middle_pane_g

0xd355,	// (0x0005cc2d) aid_touch_area_size_lc0_ParamLimits

0xd355,	// (0x0005cc2d) aid_touch_area_size_lc0

0x1e41,	// (0x00051719) cell_hwr_candidate_pane_t1_ParamLimits

0x4c9d,	// (0x00054575) aid_touch_navi_pane

0xd5e1,	// (0x0005ceb9) status_dt_navi_pane_ParamLimits

0xd5e1,	// (0x0005ceb9) status_dt_navi_pane

0xd5f9,	// (0x0005ced1) status_dt_sta_pane_ParamLimits

0xd5f9,	// (0x0005ced1) status_dt_sta_pane

0xf03c,	// (0x0005e914) dt_sta_controll_pane

0xf049,	// (0x0005e921) dt_sta_indi_pane

0xf056,	// (0x0005e92e) dt_sta_title_pane

0x2f88,	// (0x00052860) bg_dt_sta_indi_pane_ParamLimits

0x2f88,	// (0x00052860) bg_dt_sta_indi_pane

0xf068,	// (0x0005e940) dt_sta_battery_pane

0xf070,	// (0x0005e948) dt_sta_indi_pane_g1

0xa0b6,	// (0x0005998e) dt_sta_indi_pane_g2

0xa0bf,	// (0x00059997) dt_sta_indi_pane_g3

0x0002,

0xfe88,	// (0x0005f760) dt_sta_indi_pane_g

0xa0c8,	// (0x000599a0) dt_sta_signal_pane

0x3c77,	// (0x0005354f) bg_dt_sta_title_pane_ParamLimits

0x3c77,	// (0x0005354f) bg_dt_sta_title_pane

0xa0d1,	// (0x000599a9) dt_sta_title_pane_g1

0xa0d9,	// (0x000599b1) dt_sta_title_pane_t1_ParamLimits

0xa0d9,	// (0x000599b1) dt_sta_title_pane_t1

0x2c0b,	// (0x000524e3) bg_dt_sta_control_pane

0xf079,	// (0x0005e951) dt_sta_controll_pane_g1

0xa0f7,	// (0x000599cf) bg_dt_sta_title_pane_g1

0xa100,	// (0x000599d8) bg_dt_sta_title_pane_g2

0xa109,	// (0x000599e1) bg_dt_sta_title_pane_g3

0x0002,

0xfe8f,	// (0x0005f767) bg_dt_sta_title_pane_g

0x770b,	// (0x00056fe3) bg_dt_sta_indi_pane_g1

0xa112,	// (0x000599ea) dt_sta_signal_pane_g1

0xa11a,	// (0x000599f2) dt_sta_signal_pane_g2

0x0001,

0xfe96,	// (0x0005f76e) dt_sta_signal_pane_g

0xa122,	// (0x000599fa) dt_sta_battery_pane_g1

0xa12b,	// (0x00059a03) dt_sta_battery_pane_t1

0x770b,	// (0x00056fe3) bg_dt_sta_control_pane_g1

0x43fc,	// (0x00053cd4) fep_china_uni_eep_pane

0x4404,	// (0x00053cdc) fep_china_uni_entry_pane_ParamLimits

0x4414,	// (0x00053cec) popup_fep_china_uni_window_g1_ParamLimits

0x4424,	// (0x00053cfc) popup_fep_china_uni_window_g2_ParamLimits

0x4424,	// (0x00053cfc) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0005effa) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0005effa) popup_fep_china_uni_window_g

0xa13a,	// (0x00059a12) fep_china_uni_eep_pane_g1

0xa142,	// (0x00059a1a) fep_china_uni_eep_pane_t1

0x9bbe,	// (0x00059496) aid_touch_area_size_smil_player

0x4ded,	// (0x000546c5) lc0_clock_pane

0x4fd4,	// (0x000548ac) status_pane_g5_ParamLimits

0x4fd4,	// (0x000548ac) status_pane_g5

0xbef1,	// (0x0005b7c9) popup_keymap_window

0x4f92,	// (0x0005486a) status_icon_pane

0x9dac,	// (0x00059684) cell_ai5_widget_pane_g3_ParamLimits

0x9dc3,	// (0x0005969b) cell_ai5_widget_pane_g4_ParamLimits

0x9dcf,	// (0x000596a7) cell_ai5_widget_pane_g5_ParamLimits

0x9df3,	// (0x000596cb) cell_ai5_widget_pane_g8_ParamLimits

0x9df3,	// (0x000596cb) cell_ai5_widget_pane_g8

0x9e07,	// (0x000596df) cell_ai5_widget_pane_g9_ParamLimits

0x9e07,	// (0x000596df) cell_ai5_widget_pane_g9

0x9e1b,	// (0x000596f3) cell_ai5_widget_pane_g10_ParamLimits

0x9e1b,	// (0x000596f3) cell_ai5_widget_pane_g10

0xa151,	// (0x00059a29) status_icon_pane_g1

0x2c0b,	// (0x000524e3) bg_popup_sub_pane_cp13

0xa159,	// (0x00059a31) popup_keymap_window_t1

0xd2e3,	// (0x0005cbbb) control_pane_g6_ParamLimits

0xd2e3,	// (0x0005cbbb) control_pane_g6

0xd2f0,	// (0x0005cbc8) control_pane_g7_ParamLimits

0xd2f0,	// (0x0005cbc8) control_pane_g7

0xd2fd,	// (0x0005cbd5) control_pane_g8_ParamLimits

0xd2fd,	// (0x0005cbd5) control_pane_g8

0xf03c,	// (0x0005e914) dt_sta_controll_pane_ParamLimits

0xf049,	// (0x0005e921) dt_sta_indi_pane_ParamLimits

0xf056,	// (0x0005e92e) dt_sta_title_pane_ParamLimits

0x3ba3,	// (0x0005347b) aid_size_touch_scroll_bar_cale

0xf514,	// (0x0005edec) popup_discreet_window_ParamLimits

0xf514,	// (0x0005edec) popup_discreet_window

0xb439,	// (0x0005ad11) popup_sk_window

0x57be,	// (0x00055096) bg_popup_sub_pane_cp28_ParamLimits

0x57be,	// (0x00055096) bg_popup_sub_pane_cp28

0xa167,	// (0x00059a3f) popup_discreet_window_g1_ParamLimits

0xa167,	// (0x00059a3f) popup_discreet_window_g1

0xa187,	// (0x00059a5f) popup_discreet_window_t1_ParamLimits

0xa187,	// (0x00059a5f) popup_discreet_window_t1

0xa1a5,	// (0x00059a7d) popup_discreet_window_t2_ParamLimits

0xa1a5,	// (0x00059a7d) popup_discreet_window_t2

0x0002,

0xfe9b,	// (0x0005f773) popup_discreet_window_t_ParamLimits

0xfe9b,	// (0x0005f773) popup_discreet_window_t

0x282b,	// (0x00052103) popup_sk_window_g1

0x2835,	// (0x0005210d) popup_sk_window_g2

0x0001,

0xfea2,	// (0x0005f77a) popup_sk_window_g

0x283f,	// (0x00052117) popup_sk_window_t1

0x284d,	// (0x00052125) popup_sk_window_t1_copy1

0x9d9c,	// (0x00059674) cell_ai5_widget_pane_g2_ParamLimits

0x9ef5,	// (0x000597cd) cell_ai5_widget_pane_t9_ParamLimits

0x9ef5,	// (0x000597cd) cell_ai5_widget_pane_t9

0x2c0b,	// (0x000524e3) main_fep_fshwr2_pane

0xca93,	// (0x0005c36b) aid_fshwr2_btn_pane

0xcaa4,	// (0x0005c37c) aid_fshwr2_syb_pane

0xcab5,	// (0x0005c38d) aid_fshwr2_txt_pane

0xcac1,	// (0x0005c399) fshwr2_func_candi_pane

0xcae0,	// (0x0005c3b8) fshwr2_hwr_syb_pane

0xcafb,	// (0x0005c3d3) fshwr2_icf_pane

0xf43b,	// (0x0005ed13) fshwr2_icf_bg_pane

0x28cd,	// (0x000521a5) fshwr2_icf_pane_t1_ParamLimits

0x28cd,	// (0x000521a5) fshwr2_icf_pane_t1

0x42ea,	// (0x00053bc2) fshwr2_func_candi_pane_g1

0xf082,	// (0x0005e95a) fshwr2_func_candi_row_pane_ParamLimits

0xf082,	// (0x0005e95a) fshwr2_func_candi_row_pane

0xcb27,	// (0x0005c3ff) cell_fshwr2_syb_pane_ParamLimits

0xcb27,	// (0x0005c3ff) cell_fshwr2_syb_pane

0x1e12,	// (0x000516ea) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1e12,	// (0x000516ea) fshwr2_hwr_syb_pane_g1

0xf43b,	// (0x0005ed13) bg_popup_call_pane_cp01

0xcb3d,	// (0x0005c415) fshwr2_func_candi_cell_pane_ParamLimits

0xcb3d,	// (0x0005c415) fshwr2_func_candi_cell_pane

0xf09a,	// (0x0005e972) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf09a,	// (0x0005e972) fshwr2_func_candi_cell_bg_pane

0xcb72,	// (0x0005c44a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcb72,	// (0x0005c44a) fshwr2_func_candi_cell_pane_g1

0xcba1,	// (0x0005c479) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcba1,	// (0x0005c479) fshwr2_func_candi_cell_pane_t1

0xf43b,	// (0x0005ed13) bg_button_pane_cp08

0xa213,	// (0x00059aeb) cell_fshwr2_syb_bg_pane

0xcbb4,	// (0x0005c48c) cell_fshwr2_syb_bg_pane_g1

0xcbbc,	// (0x0005c494) cell_fshwr2_syb_bg_pane_t1

0x3c77,	// (0x0005354f) main_tmo_pane

0xd95f,	// (0x0005d237) uni_indicator_pane_g1_ParamLimits

0xd975,	// (0x0005d24d) uni_indicator_pane_g2_ParamLimits

0xd98b,	// (0x0005d263) uni_indicator_pane_g3_ParamLimits

0x6319,	// (0x00055bf1) uni_indicator_pane_g4_ParamLimits

0x6319,	// (0x00055bf1) uni_indicator_pane_g4

0x632d,	// (0x00055c05) uni_indicator_pane_g5_ParamLimits

0x632d,	// (0x00055c05) uni_indicator_pane_g5

0x632d,	// (0x00055c05) uni_indicator_pane_g6_ParamLimits

0x632d,	// (0x00055c05) uni_indicator_pane_g6

0xf921,	// (0x0005f1f9) uni_indicator_pane_g_ParamLimits

0xe42b,	// (0x0005dd03) popup_tmo_note_window_ParamLimits

0xe42b,	// (0x0005dd03) popup_tmo_note_window

0x20ab,	// (0x00051983) fshwr2_bg_pane

0xcb92,	// (0x0005c46a) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcb92,	// (0x0005c46a) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea7,	// (0x0005f77f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea7,	// (0x0005f77f) fshwr2_func_candi_cell_pane_g

0x1dfa,	// (0x000516d2) bg_popup_window_pane_cp01

0x2982,	// (0x0005225a) bg_popup_window_pane_g1_cp01

0xa21b,	// (0x00059af3) bg_popup_window_pane_cp22_ParamLimits

0xa21b,	// (0x00059af3) bg_popup_window_pane_cp22

0xa229,	// (0x00059b01) listscroll_tmo_link_pane_ParamLimits

0xa229,	// (0x00059b01) listscroll_tmo_link_pane

0xa269,	// (0x00059b41) popup_tmo_note_window_g1_ParamLimits

0xa269,	// (0x00059b41) popup_tmo_note_window_g1

0xa276,	// (0x00059b4e) tmo_note_info_pane_ParamLimits

0xa276,	// (0x00059b4e) tmo_note_info_pane

0xf0a6,	// (0x0005e97e) list_tmo_note_info_pane_g1_ParamLimits

0xf0a6,	// (0x0005e97e) list_tmo_note_info_pane_g1

0xa2a7,	// (0x00059b7f) list_tmo_note_info_pane_g2_ParamLimits

0xa2a7,	// (0x00059b7f) list_tmo_note_info_pane_g2

0x0001,

0xfeac,	// (0x0005f784) list_tmo_note_info_pane_g_ParamLimits

0xfeac,	// (0x0005f784) list_tmo_note_info_pane_g

0xa2c3,	// (0x00059b9b) list_tmo_note_info_text_pane_ParamLimits

0xa2c3,	// (0x00059b9b) list_tmo_note_info_text_pane

0xa344,	// (0x00059c1c) list_tmo_link_pane

0xa351,	// (0x00059c29) scroll_pane_cp20

0xa35e,	// (0x00059c36) list_single_tmo_link_pane_ParamLimits

0xa35e,	// (0x00059c36) list_single_tmo_link_pane

0xa36e,	// (0x00059c46) list_single_tmo_link_pane_t1

0xa37c,	// (0x00059c54) list_tmo_note_info_text_pane_t1_ParamLimits

0xa37c,	// (0x00059c54) list_tmo_note_info_text_pane_t1

0xcf8b,	// (0x0005c863) aid_size_touch_scroll_bar_cp01_ParamLimits

0xcf8b,	// (0x0005c863) aid_size_touch_scroll_bar_cp01

0xba49,	// (0x0005b321) aid_size_touch_slider_marker

0xb429,	// (0x0005ad01) popup_settings_window_ParamLimits

0xb429,	// (0x0005ad01) popup_settings_window

0x0e53,	// (0x0005072b) popup_candi_list_indi_window

0x4c9d,	// (0x00054575) aid_touch_navi_pane_ParamLimits

0x2006,	// (0x000518de) rs_clock_indi_pane

0x200f,	// (0x000518e7) sctrl_sk_bottom_pane_ParamLimits

0x2020,	// (0x000518f8) sctrl_sk_top_pane_ParamLimits

0x2123,	// (0x000519fb) popup_fep_tooltip_window

0x9d12,	// (0x000595ea) aid_size_cell_widget_grid_ParamLimits

0x9d87,	// (0x0005965f) cell_ai5_widget_pane_g1_ParamLimits

0x9d87,	// (0x0005965f) cell_ai5_widget_pane_g1

0x9ddb,	// (0x000596b3) cell_ai5_widget_pane_g6_ParamLimits

0x9de7,	// (0x000596bf) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2a,	// (0x0005f702) cell_ai5_widget_pane_g_ParamLimits

0xfe2a,	// (0x0005f702) cell_ai5_widget_pane_g

0x9f19,	// (0x000597f1) cell_ai5_widget_pane_t10_ParamLimits

0x9f19,	// (0x000597f1) cell_ai5_widget_pane_t10

0x9f37,	// (0x0005980f) grid_ai5_widget_pane_ParamLimits

0x9fd8,	// (0x000598b0) cell_contacts_ai5_widget_pane_ParamLimits

0x9fd8,	// (0x000598b0) cell_contacts_ai5_widget_pane

0xa1ba,	// (0x00059a92) popup_discreet_window_t3_ParamLimits

0xa1ba,	// (0x00059a92) popup_discreet_window_t3

0xcb13,	// (0x0005c3eb) popup_fshwr2_char_preview_window_ParamLimits

0xcb13,	// (0x0005c3eb) popup_fshwr2_char_preview_window

0xf0bd,	// (0x0005e995) tmo_note_info_pane_t1

0xf0d2,	// (0x0005e9aa) tmo_note_info_pane_t2

0xf0e9,	// (0x0005e9c1) tmo_note_info_pane_t3

0xa320,	// (0x00059bf8) tmo_note_info_pane_t4

0xa332,	// (0x00059c0a) tmo_note_info_pane_t5

0x0004,

0xfeb1,	// (0x0005f789) tmo_note_info_pane_t

0xa344,	// (0x00059c1c) list_tmo_link_pane_ParamLimits

0xa351,	// (0x00059c29) scroll_pane_cp20_ParamLimits

0xf43b,	// (0x0005ed13) bg_popup_fep_char_preview_window_cp01

0xa395,	// (0x00059c6d) popup_fshwr2_char_preview_window_t1

0xa3a3,	// (0x00059c7b) popup_candi_list_indi_window_g1

0xa3ac,	// (0x00059c84) bg_cell_contacts_ai5_widget_pane

0xa3b8,	// (0x00059c90) cell_contacts_ai5_widget_pane_g1

0x7db5,	// (0x0005768d) cell_contacts_ai5_widget_pane_g2

0xa3cd,	// (0x00059ca5) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebc,	// (0x0005f794) cell_contacts_ai5_widget_pane_g

0xa3d9,	// (0x00059cb1) cell_contacts_ai5_widget_pane_t1

0x3c77,	// (0x0005354f) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf163,	// (0x0005ea3b) settings_container_pane

0x48fd,	// (0x000541d5) listscroll_set_pane_copy1

0x6e00,	// (0x000566d8) scroll_pane_cp121_copy1

0xa45c,	// (0x00059d34) set_content_pane_copy1

0xf16f,	// (0x0005ea47) aid_height_set_list_copy1_ParamLimits

0xf16f,	// (0x0005ea47) aid_height_set_list_copy1

0x6525,	// (0x00055dfd) aid_size_parent_copy1_ParamLimits

0x6525,	// (0x00055dfd) aid_size_parent_copy1

0xf17b,	// (0x0005ea53) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf17b,	// (0x0005ea53) button_value_adjust_pane_cp6_copy1

0x4c3b,	// (0x00054513) list_highlight_pane_cp2_copy1_ParamLimits

0x4c3b,	// (0x00054513) list_highlight_pane_cp2_copy1

0xf18f,	// (0x0005ea67) list_set_pane_copy1_ParamLimits

0xf18f,	// (0x0005ea67) list_set_pane_copy1

0xf0fe,	// (0x0005e9d6) main_pane_set_t1_copy1_ParamLimits

0xf0fe,	// (0x0005e9d6) main_pane_set_t1_copy1

0xf138,	// (0x0005ea10) main_pane_set_t2_copy1_ParamLimits

0xf138,	// (0x0005ea10) main_pane_set_t2_copy1

0xf23c,	// (0x0005eb14) main_pane_set_t3_copy1

0xf24a,	// (0x0005eb22) main_pane_set_t4_copy1

0xf157,	// (0x0005ea2f) set_content_pane_g1_copy1_ParamLimits

0xf157,	// (0x0005ea2f) set_content_pane_g1_copy1

0xf258,	// (0x0005eb30) setting_code_pane_copy1

0xa555,	// (0x00059e2d) setting_slider_graphic_pane_copy1

0xa555,	// (0x00059e2d) setting_slider_pane_copy1

0xa555,	// (0x00059e2d) setting_text_pane_copy1

0xa555,	// (0x00059e2d) setting_volume_pane_copy1

0xf258,	// (0x0005eb30) settings_code_pane_cp2_copy1

0xf260,	// (0x0005eb38) settings_code_pane_cp_copy1_ParamLimits

0xf260,	// (0x0005eb38) settings_code_pane_cp_copy1

0xcbcb,	// (0x0005c4a3) volume_set_pane_copy1

0xf274,	// (0x0005eb4c) volume_set_pane_g10_copy1

0xf27c,	// (0x0005eb54) volume_set_pane_g1_copy1

0xf284,	// (0x0005eb5c) volume_set_pane_g2_copy1

0xf28c,	// (0x0005eb64) volume_set_pane_g3_copy1

0xf294,	// (0x0005eb6c) volume_set_pane_g4_copy1

0xf29c,	// (0x0005eb74) volume_set_pane_g5_copy1

0xf2a4,	// (0x0005eb7c) volume_set_pane_g6_copy1

0xf2ac,	// (0x0005eb84) volume_set_pane_g7_copy1

0xf2b4,	// (0x0005eb8c) volume_set_pane_g8_copy1

0xf2bc,	// (0x0005eb94) volume_set_pane_g9_copy1

0x2cff,	// (0x000525d7) bg_set_opt_pane_cp_copy1_ParamLimits

0x2cff,	// (0x000525d7) bg_set_opt_pane_cp_copy1

0x2993,	// (0x0005226b) setting_slider_pane_t1_copy1_ParamLimits

0x2993,	// (0x0005226b) setting_slider_pane_t1_copy1

0xcbd3,	// (0x0005c4ab) setting_slider_pane_t2_copy1_ParamLimits

0xcbd3,	// (0x0005c4ab) setting_slider_pane_t2_copy1

0xcbed,	// (0x0005c4c5) setting_slider_pane_t3_copy1_ParamLimits

0xcbed,	// (0x0005c4c5) setting_slider_pane_t3_copy1

0xcc05,	// (0x0005c4dd) slider_set_pane_copy1_ParamLimits

0xcc05,	// (0x0005c4dd) slider_set_pane_copy1

0x3cc6,	// (0x0005359e) set_opt_bg_pane_g1_copy2

0x3cce,	// (0x000535a6) set_opt_bg_pane_g2_copy2

0xa5c1,	// (0x00059e99) set_opt_bg_pane_g3_copy2

0x3cde,	// (0x000535b6) set_opt_bg_pane_g4_copy2

0x3ce6,	// (0x000535be) set_opt_bg_pane_g5_copy2

0x3cee,	// (0x000535c6) set_opt_bg_pane_g6_copy2

0xf2c4,	// (0x0005eb9c) set_opt_bg_pane_g7_copy2

0xa5d3,	// (0x00059eab) set_opt_bg_pane_g8_copy2

0xa5dd,	// (0x00059eb5) set_opt_bg_pane_g9_copy2

0x29f9,	// (0x000522d1) aid_size_touch_slider_mark_copy1_ParamLimits

0x29f9,	// (0x000522d1) aid_size_touch_slider_mark_copy1

0xa5e7,	// (0x00059ebf) slider_set_pane_g1_copy1

0x2a0d,	// (0x000522e5) slider_set_pane_g2_copy1

0x1826,	// (0x000510fe) slider_set_pane_g3_copy1_ParamLimits

0x1826,	// (0x000510fe) slider_set_pane_g3_copy1

0x183a,	// (0x00051112) slider_set_pane_g4_copy1_ParamLimits

0x183a,	// (0x00051112) slider_set_pane_g4_copy1

0x1852,	// (0x0005112a) slider_set_pane_g5_copy1_ParamLimits

0x1852,	// (0x0005112a) slider_set_pane_g5_copy1

0x1826,	// (0x000510fe) slider_set_pane_g6_copy1_ParamLimits

0x1826,	// (0x000510fe) slider_set_pane_g6_copy1

0xcc1b,	// (0x0005c4f3) slider_set_pane_g7_copy1_ParamLimits

0xcc1b,	// (0x0005c4f3) slider_set_pane_g7_copy1

0x2c1f,	// (0x000524f7) bg_set_opt_pane_cp2_copy1

0xa5f0,	// (0x00059ec8) setting_slider_graphic_pane_g1_copy1

0xf2cc,	// (0x0005eba4) setting_slider_graphic_pane_t1_copy1

0xf2dc,	// (0x0005ebb4) setting_slider_graphic_pane_t2_copy1

0xf2ec,	// (0x0005ebc4) slider_set_pane_cp_copy1

0xa629,	// (0x00059f01) input_focus_pane_cp1_copy1

0xa632,	// (0x00059f0a) list_set_text_pane_copy1

0xa63a,	// (0x00059f12) setting_text_pane_g1_copy1

0xcc31,	// (0x0005c509) set_text_pane_t1_copy1

0xa629,	// (0x00059f01) input_focus_pane_cp2_copy1

0xa63a,	// (0x00059f12) setting_code_pane_g1_copy1

0xf2f4,	// (0x0005ebcc) setting_code_pane_t1_copy1

0x6c2a,	// (0x00056502) list_set_graphic_pane_copy1

0x2c1f,	// (0x000524f7) bg_set_opt_pane_cp4_copy1

0xd15e,	// (0x0005ca36) list_set_graphic_pane_g1_copy1_ParamLimits

0xd15e,	// (0x0005ca36) list_set_graphic_pane_g1_copy1

0xf302,	// (0x0005ebda) list_set_graphic_pane_g2_copy1

0xd176,	// (0x0005ca4e) list_set_graphic_pane_t1_copy1_ParamLimits

0xd176,	// (0x0005ca4e) list_set_graphic_pane_t1_copy1

0x770b,	// (0x00056fe3) rs_clock_indi_pane_g1

0xa66b,	// (0x00059f43) rs_clock_indi_pane_t1

0xa679,	// (0x00059f51) rs_indi_pane

0xa681,	// (0x00059f59) rs_indi_pane_g1

0xa68a,	// (0x00059f62) rs_indi_pane_g2

0xa693,	// (0x00059f6b) rs_indi_pane_g3

0x0002,

0xfec3,	// (0x0005f79b) rs_indi_pane_g

0x48fd,	// (0x000541d5) bg_popup_preview_window_pane_cp03

0xa69c,	// (0x00059f74) popup_fep_tooltip_window_t1

0x8393,	// (0x00057c6b) popup_note2_window_g2_ParamLimits

0x8393,	// (0x00057c6b) popup_note2_window_g2

0x0001,

0xfc5c,	// (0x0005f534) popup_note2_window_g_ParamLimits

0xfc5c,	// (0x0005f534) popup_note2_window_g

0x88af,	// (0x00058187) bg_popup_sub_pane_cp11_ParamLimits

0x88bc,	// (0x00058194) cell_ai3_links_pane_g1_ParamLimits

0x88d3,	// (0x000581ab) cell_ai3_links_pane_t1

0xcc31,	// (0x0005c509) set_text_pane_t1_copy1_ParamLimits

0x480e,	// (0x000540e6) cell_graphic_popup_pane_cp2_ParamLimits

0x480e,	// (0x000540e6) cell_graphic_popup_pane_cp2

0xa6aa,	// (0x00059f82) cell_graphic_popup_pane_g1_cp2

0x39b6,	// (0x0005328e) cell_graphic_popup_pane_g2_cp2

0xa6b2,	// (0x00059f8a) cell_graphic_popup_pane_g3_cp2

0xa6ba,	// (0x00059f92) cell_graphic_popup_pane_t2_cp2

0x39c7,	// (0x0005329f) grid_highlight_pane_cp3_cp2

0x400b,	// (0x000538e3) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3c77,	// (0x0005354f) main_tmo_pane_ParamLimits

0xe41f,	// (0x0005dcf7) popup_tmo_big_image_note_window

0x9d76,	// (0x0005964e) cell_ai5_widget_list_pane

0x9d7e,	// (0x00059656) cell_ai5_widget_lrg_icon_pane

0xf0bd,	// (0x0005e995) tmo_note_info_pane_t1_ParamLimits

0xf0d2,	// (0x0005e9aa) tmo_note_info_pane_t2_ParamLimits

0xf0e9,	// (0x0005e9c1) tmo_note_info_pane_t3_ParamLimits

0xa320,	// (0x00059bf8) tmo_note_info_pane_t4_ParamLimits

0xa332,	// (0x00059c0a) tmo_note_info_pane_t5_ParamLimits

0xfeb1,	// (0x0005f789) tmo_note_info_pane_t_ParamLimits

0xf163,	// (0x0005ea3b) settings_container_pane_ParamLimits

0xa621,	// (0x00059ef9) indicator_popup_pane_cp5

0xa621,	// (0x00059ef9) indicator_popup_pane_cp6

0x6c2a,	// (0x00056502) list_set_graphic_pane_copy1_ParamLimits

0x2c0b,	// (0x000524e3) bg_popup_window_pane_cp23

0xa6c8,	// (0x00059fa0) popup_tmo_big_image_note_window_g1

0xa6d2,	// (0x00059faa) popup_tmo_big_image_note_window_t1

0xa6e2,	// (0x00059fba) popup_tmo_big_image_note_window_t2

0xa6f2,	// (0x00059fca) popup_tmo_big_image_note_window_t3

0x0002,

0xfeca,	// (0x0005f7a2) popup_tmo_big_image_note_window_t

0x770b,	// (0x00056fe3) cell_ai5_widget_lrg_icon_pane_g1

0xa702,	// (0x00059fda) cell_ai5_widget_lrg_icon_pane_t1

0xa710,	// (0x00059fe8) cell_ai5_widget_list_row_pane_ParamLimits

0xa710,	// (0x00059fe8) cell_ai5_widget_list_row_pane

0xa727,	// (0x00059fff) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa727,	// (0x00059fff) cell_ai5_widget_list_row_pane_g1

0xa734,	// (0x0005a00c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa734,	// (0x0005a00c) cell_ai5_widget_list_row_pane_t1

0xa765,	// (0x0005a03d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa765,	// (0x0005a03d) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed1,	// (0x0005f7a9) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed1,	// (0x0005f7a9) cell_ai5_widget_list_row_pane_t

0xf43b,	// (0x0005ed13) main_fep_vtchi_ss_pane

0x2a47,	// (0x0005231f) popup_fep_char_pre_window

0x2a4f,	// (0x00052327) popup_fep_ituss_window

0x2a70,	// (0x00052348) popup_fep_vkbss_window

0xa78d,	// (0x0005a065) grid_vkbss_keypad_pane_ParamLimits

0xa78d,	// (0x0005a065) grid_vkbss_keypad_pane

0xa79d,	// (0x0005a075) ituss_keypad_pane

0x2a9b,	// (0x00052373) aid_vkbss_key_offset_ParamLimits

0x2a9b,	// (0x00052373) aid_vkbss_key_offset

0x2aa7,	// (0x0005237f) cell_vkbss_key_pane_ParamLimits

0x2aa7,	// (0x0005237f) cell_vkbss_key_pane

0xa7ac,	// (0x0005a084) bg_cell_vkbss_key_g1_ParamLimits

0xa7ac,	// (0x0005a084) bg_cell_vkbss_key_g1

0xa7b8,	// (0x0005a090) cell_vkbss_key_3p_pane_ParamLimits

0xa7b8,	// (0x0005a090) cell_vkbss_key_3p_pane

0xa7d2,	// (0x0005a0aa) cell_vkbss_key_g1_ParamLimits

0xa7d2,	// (0x0005a0aa) cell_vkbss_key_g1

0xa7ec,	// (0x0005a0c4) cell_vkbss_key_t1_ParamLimits

0xa7ec,	// (0x0005a0c4) cell_vkbss_key_t1

0x2abd,	// (0x00052395) cell_ituss_key_pane_ParamLimits

0x2abd,	// (0x00052395) cell_ituss_key_pane

0xa817,	// (0x0005a0ef) bg_cell_ituss_key_g1_ParamLimits

0xa817,	// (0x0005a0ef) bg_cell_ituss_key_g1

0xa823,	// (0x0005a0fb) cell_ituss_key_pane_g1_ParamLimits

0xa823,	// (0x0005a0fb) cell_ituss_key_pane_g1

0x2ace,	// (0x000523a6) cell_ituss_key_pane_g2_ParamLimits

0x2ace,	// (0x000523a6) cell_ituss_key_pane_g2

0x0002,

0xfed8,	// (0x0005f7b0) cell_ituss_key_pane_g_ParamLimits

0xfed8,	// (0x0005f7b0) cell_ituss_key_pane_g

0x2afa,	// (0x000523d2) cell_ituss_key_t1_ParamLimits

0x2afa,	// (0x000523d2) cell_ituss_key_t1

0x2b34,	// (0x0005240c) cell_ituss_key_t2_ParamLimits

0x2b34,	// (0x0005240c) cell_ituss_key_t2

0x2b65,	// (0x0005243d) cell_ituss_key_t3_ParamLimits

0x2b65,	// (0x0005243d) cell_ituss_key_t3

0x2b34,	// (0x0005240c) cell_ituss_key_t4_ParamLimits

0x2b34,	// (0x0005240c) cell_ituss_key_t4

0x0004,

0xfedf,	// (0x0005f7b7) cell_ituss_key_t_ParamLimits

0xfedf,	// (0x0005f7b7) cell_ituss_key_t

0xa84f,	// (0x0005a127) cell_vkbss_key_3p_pane_g1

0xa857,	// (0x0005a12f) cell_vkbss_key_3p_pane_g2

0xa85f,	// (0x0005a137) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeea,	// (0x0005f7c2) cell_vkbss_key_3p_pane_g

0xf43b,	// (0x0005ed13) bg_popup_fep_char_preview_window_cp02

0x2ba8,	// (0x00052480) popup_fep_char_pre_window_t1

0xf00c,	// (0x0005e8e4) main_ai5_sk_pane

0xa3ac,	// (0x00059c84) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa3b8,	// (0x00059c90) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7db5,	// (0x0005768d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa3cd,	// (0x00059ca5) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebc,	// (0x0005f794) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa3d9,	// (0x00059cb1) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3c77,	// (0x0005354f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf30a,	// (0x0005ebe2) main_ai5_sk_pane_g1

0x55f7,	// (0x00054ecf) popup_query_code_window_g1

0x2a65,	// (0x0005233d) popup_fep_vkb_icf_pane

0x2a79,	// (0x00052351) popup_fep_vtchi_icf_pane

0xa870,	// (0x0005a148) bg_icf_pane

0xa87c,	// (0x0005a154) list_vkb_icf_pane

0xa888,	// (0x0005a160) bg_icf_pane_cp01

0xa894,	// (0x0005a16c) vtchi_icf_list_pane

0xa8a5,	// (0x0005a17d) list_vkb_icf_pane_t1_ParamLimits

0xa8a5,	// (0x0005a17d) list_vkb_icf_pane_t1

0xa8bb,	// (0x0005a193) vtchi_icf_list_pane_t1_ParamLimits

0xa8bb,	// (0x0005a193) vtchi_icf_list_pane_t1

0x2a4f,	// (0x00052327) popup_fep_ituss_window_ParamLimits

0x2a79,	// (0x00052351) popup_fep_vtchi_icf_pane_ParamLimits

0xa79d,	// (0x0005a075) ituss_keypad_pane_ParamLimits

0x2a8f,	// (0x00052367) ituss_sks_pane

0xa870,	// (0x0005a148) bg_icf_pane_ParamLimits

0x2a2b,	// (0x00052303) icf_edit_indi_pane_ParamLimits

0x2a2b,	// (0x00052303) icf_edit_indi_pane

0xa87c,	// (0x0005a154) list_vkb_icf_pane_ParamLimits

0xa888,	// (0x0005a160) bg_icf_pane_cp01_ParamLimits

0x2a3a,	// (0x00052312) icf_edit_indi_pane_cp01_ParamLimits

0x2a3a,	// (0x00052312) icf_edit_indi_pane_cp01

0xa89c,	// (0x0005a174) vtchi_query_pane

0x1e12,	// (0x000516ea) icf_edit_indi_pane_g1_ParamLimits

0x1e12,	// (0x000516ea) icf_edit_indi_pane_g1

0x2bca,	// (0x000524a2) icf_edit_indi_pane_g2_ParamLimits

0x2bca,	// (0x000524a2) icf_edit_indi_pane_g2

0x0001,

0xff02,	// (0x0005f7da) icf_edit_indi_pane_g_ParamLimits

0xff02,	// (0x0005f7da) icf_edit_indi_pane_g

0x2bd9,	// (0x000524b1) icf_edit_indi_pane_t1

0xa8d5,	// (0x0005a1ad) bg_input_focus_pane_cp042

0x3b9a,	// (0x00053472) vtchi_button_pane

0xa8de,	// (0x0005a1b6) vtchi_query_pane_t1

0xa8ec,	// (0x0005a1c4) vtchi_query_pane_t2

0xa8fa,	// (0x0005a1d2) vtchi_query_pane_t3

0x0002,

0xfef1,	// (0x0005f7c9) vtchi_query_pane_t

0xf43b,	// (0x0005ed13) bg_button_pane_cp13

0xa908,	// (0x0005a1e0) vtchi_button_pane_g1

0x2bb7,	// (0x0005248f) ituss_sks_pane_g1

0x2bc2,	// (0x0005249a) ituss_sks_pane_g2

0x0001,

0xfef8,	// (0x0005f7d0) ituss_sks_pane_g

0xa910,	// (0x0005a1e8) ituss_sks_pane_t1

0xa91e,	// (0x0005a1f6) ituss_sks_pane_t2

0x0001,

0xfefd,	// (0x0005f7d5) ituss_sks_pane_t

0x717a,	// (0x00056a52) indicator_nsta_pane_cp_g1

0x7183,	// (0x00056a5b) indicator_nsta_pane_cp_g2

0x718b,	// (0x00056a63) indicator_nsta_pane_cp_g3

0x7193,	// (0x00056a6b) indicator_nsta_pane_cp_g4

0x719b,	// (0x00056a73) indicator_nsta_pane_cp_g5

0x719b,	// (0x00056a73) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x0005f372) indicator_nsta_pane_cp_g

0xee05,	// (0x0005e6dd) cell_graphic2_pane_t2_ParamLimits

0xee05,	// (0x0005e6dd) cell_graphic2_pane_t2

0x0001,

0xfdb3,	// (0x0005f68b) cell_graphic2_pane_t_ParamLimits

0xfdb3,	// (0x0005f68b) cell_graphic2_pane_t

0xee3b,	// (0x0005e713) cell_graphic2_control_pane_t1

0xd132,	// (0x0005ca0a) signal_pane_g3_ParamLimits

0xd132,	// (0x0005ca0a) signal_pane_g3

0xd146,	// (0x0005ca1e) signal_pane_g4_ParamLimits

0xd146,	// (0x0005ca1e) signal_pane_g4

0xa777,	// (0x0005a04f) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa777,	// (0x0005a04f) cell_ai5_widget_list_row_pane_t3

0xa83d,	// (0x0005a115) cell_ituss_key_pane_t1_ParamLimits

0xa83d,	// (0x0005a115) cell_ituss_key_pane_t1

0x524a,	// (0x00054b22) form_field_data_wide_pane_vc_t2_ParamLimits

0x524a,	// (0x00054b22) form_field_data_wide_pane_vc_t2

0x525e,	// (0x00054b36) form_field_data_wide_pane_vc_t3_ParamLimits

0x525e,	// (0x00054b36) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0005f0e1) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0005f0e1) form_field_data_wide_pane_vc_t

0x6e42,	// (0x0005671a) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6e42,	// (0x0005671a) form_field_slider_wide_pane_vc_t3

0x6f20,	// (0x000567f8) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6f20,	// (0x000567f8) form_field_popup_wide_pane_vc_t2

0x6f37,	// (0x0005680f) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6f37,	// (0x0005680f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x0005f361) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0005f361) form_field_popup_wide_pane_vc_t

0xca93,	// (0x0005c36b) aid_fshwr2_btn_pane_ParamLimits

0xcaa4,	// (0x0005c37c) aid_fshwr2_syb_pane_ParamLimits

0xcab5,	// (0x0005c38d) aid_fshwr2_txt_pane_ParamLimits

0x20ab,	// (0x00051983) fshwr2_bg_pane_ParamLimits

0xcac1,	// (0x0005c399) fshwr2_func_candi_pane_ParamLimits

0xcae0,	// (0x0005c3b8) fshwr2_hwr_syb_pane_ParamLimits

0xcafb,	// (0x0005c3d3) fshwr2_icf_pane_ParamLimits

0x3353,	// (0x00052c2b) list_double_graphic_pane_vc_g4_ParamLimits

0x3353,	// (0x00052c2b) list_double_graphic_pane_vc_g4

0x2aee,	// (0x000523c6) cell_ituss_key_pane_g3_ParamLimits

0x2aee,	// (0x000523c6) cell_ituss_key_pane_g3

0x2b96,	// (0x0005246e) cell_ituss_key_t5_ParamLimits

0x2b96,	// (0x0005246e) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large

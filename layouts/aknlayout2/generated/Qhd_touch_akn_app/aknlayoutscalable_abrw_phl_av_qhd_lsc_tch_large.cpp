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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00051d00 };

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
0xb3c4,	// (0x0005d0c4) Screen

0xb3d0,	// (0x0005d0d0) application_window_ParamLimits

0xb3d0,	// (0x0005d0d0) application_window

0xd06b,	// (0x0005ed6b) screen_g1

0xb408,	// (0x0005d108) area_bottom_pane_ParamLimits

0xb408,	// (0x0005d108) area_bottom_pane

0xf27d,	// (0x00060f7d) area_top_pane_ParamLimits

0xf27d,	// (0x00060f7d) area_top_pane

0xf31b,	// (0x0006101b) main_pane_ParamLimits

0xf31b,	// (0x0006101b) main_pane

0x2c56,	// (0x00054956) misc_graphics

0xd30f,	// (0x0005f00f) battery_pane_ParamLimits

0xd30f,	// (0x0005f00f) battery_pane

0x571f,	// (0x0005741f) bg_status_flat_pane_g8

0x5727,	// (0x00057427) bg_status_flat_pane_g9

0x4af9,	// (0x000567f9) context_pane_ParamLimits

0x4af9,	// (0x000567f9) context_pane

0xd47a,	// (0x0005f17a) navi_pane_ParamLimits

0xd47a,	// (0x0005f17a) navi_pane

0xd4f8,	// (0x0005f1f8) signal_pane_ParamLimits

0xd4f8,	// (0x0005f1f8) signal_pane

0x0008,

0xf854,	// (0x00061554) bg_status_flat_pane_g

0xd588,	// (0x0005f288) status_pane_g1_ParamLimits

0xd588,	// (0x0005f288) status_pane_g1

0xd59e,	// (0x0005f29e) status_pane_g2_ParamLimits

0xd59e,	// (0x0005f29e) status_pane_g2

0x4d20,	// (0x00056a20) status_pane_g3_ParamLimits

0x4d20,	// (0x00056a20) status_pane_g3

0x0004,

0xf780,	// (0x00061480) status_pane_g_ParamLimits

0xf780,	// (0x00061480) status_pane_g

0xd5aa,	// (0x0005f2aa) title_pane_ParamLimits

0xd5aa,	// (0x0005f2aa) title_pane

0xd60d,	// (0x0005f30d) uni_indicator_pane_ParamLimits

0xd60d,	// (0x0005f30d) uni_indicator_pane

0x4961,	// (0x00056661) bg_list_pane_ParamLimits

0x4961,	// (0x00056661) bg_list_pane

0x366e,	// (0x0005536e) find_pane

0x4f1f,	// (0x00056c1f) listscroll_app_pane_ParamLimits

0x4f1f,	// (0x00056c1f) listscroll_app_pane

0x498d,	// (0x0005668d) listscroll_form_pane

0x0b04,	// (0x00052804) listscroll_gen_pane_ParamLimits

0x0b04,	// (0x00052804) listscroll_gen_pane

0x0b18,	// (0x00052818) listscroll_set_pane

0x62a0,	// (0x00057fa0) main_idle_act_pane

0x465d,	// (0x0005635d) main_idle_trad_pane

0x465d,	// (0x0005635d) main_list_empty_pane

0x4981,	// (0x00056681) main_midp_pane

0x49a7,	// (0x000566a7) main_pane_g1_ParamLimits

0x49a7,	// (0x000566a7) main_pane_g1

0xc140,	// (0x0005de40) popup_ai_message_window_ParamLimits

0xc140,	// (0x0005de40) popup_ai_message_window

0xc1d1,	// (0x0005ded1) popup_fep_china_uni_window_ParamLimits

0xc1d1,	// (0x0005ded1) popup_fep_china_uni_window

0x0c38,	// (0x00052938) popup_fep_japan_candidate_window_ParamLimits

0x0c38,	// (0x00052938) popup_fep_japan_candidate_window

0x0c58,	// (0x00052958) popup_fep_japan_predictive_window_ParamLimits

0x0c58,	// (0x00052958) popup_fep_japan_predictive_window

0xc22d,	// (0x0005df2d) popup_find_window

0xc24a,	// (0x0005df4a) popup_grid_graphic_window_ParamLimits

0xc24a,	// (0x0005df4a) popup_grid_graphic_window

0x0cc1,	// (0x000529c1) popup_large_graphic_colour_window

0xc2ee,	// (0x0005dfee) popup_menu_window_ParamLimits

0xc2ee,	// (0x0005dfee) popup_menu_window

0xc4c0,	// (0x0005e1c0) popup_note_image_window

0xc486,	// (0x0005e186) popup_note_wait_window_ParamLimits

0xc486,	// (0x0005e186) popup_note_wait_window

0xc4d8,	// (0x0005e1d8) popup_note_window_ParamLimits

0xc4d8,	// (0x0005e1d8) popup_note_window

0xc57e,	// (0x0005e27e) popup_query_code_window_ParamLimits

0xc57e,	// (0x0005e27e) popup_query_code_window

0x0f09,	// (0x00052c09) popup_query_data_code_window_ParamLimits

0x0f09,	// (0x00052c09) popup_query_data_code_window

0xc5b8,	// (0x0005e2b8) popup_query_data_window_ParamLimits

0xc5b8,	// (0x0005e2b8) popup_query_data_window

0xc63a,	// (0x0005e33a) popup_query_sat_info_window_ParamLimits

0xc63a,	// (0x0005e33a) popup_query_sat_info_window

0xc6d1,	// (0x0005e3d1) popup_snote_single_graphic_window_ParamLimits

0xc6d1,	// (0x0005e3d1) popup_snote_single_graphic_window

0xc6d1,	// (0x0005e3d1) popup_snote_single_text_window_ParamLimits

0xc6d1,	// (0x0005e3d1) popup_snote_single_text_window

0x0f90,	// (0x00052c90) popup_sub_window_general

0x10c0,	// (0x00052dc0) popup_window_general_ParamLimits

0x10c0,	// (0x00052dc0) popup_window_general

0x49b5,	// (0x000566b5) power_save_pane

0xbfc1,	// (0x0005dcc1) control_pane_g1_ParamLimits

0xbfc1,	// (0x0005dcc1) control_pane_g1

0xbfea,	// (0x0005dcea) control_pane_g2_ParamLimits

0xbfea,	// (0x0005dcea) control_pane_g2

0x4924,	// (0x00056624) control_pane_g3_ParamLimits

0x4924,	// (0x00056624) control_pane_g3

0x0007,

0xf768,	// (0x00061468) control_pane_g_ParamLimits

0xf768,	// (0x00061468) control_pane_g

0xc02b,	// (0x0005dd2b) control_pane_t1_ParamLimits

0xc02b,	// (0x0005dd2b) control_pane_t1

0xc093,	// (0x0005dd93) control_pane_t2_ParamLimits

0xc093,	// (0x0005dd93) control_pane_t2

0x0002,

0xf779,	// (0x00061479) control_pane_t_ParamLimits

0xf779,	// (0x00061479) control_pane_t

0xd1bc,	// (0x0005eebc) navi_navi_volume_pane_cp1

0xd1c4,	// (0x0005eec4) status_small_icon_pane

0x4859,	// (0x00056559) status_small_pane_g1_ParamLimits

0x4859,	// (0x00056559) status_small_pane_g1

0xd1cc,	// (0x0005eecc) status_small_pane_g2_ParamLimits

0xd1cc,	// (0x0005eecc) status_small_pane_g2

0xd1d8,	// (0x0005eed8) status_small_pane_g3_ParamLimits

0xd1d8,	// (0x0005eed8) status_small_pane_g3

0xd1e4,	// (0x0005eee4) status_small_pane_g4_ParamLimits

0xd1e4,	// (0x0005eee4) status_small_pane_g4

0xd1f0,	// (0x0005eef0) status_small_pane_g5_ParamLimits

0xd1f0,	// (0x0005eef0) status_small_pane_g5

0xd1fe,	// (0x0005eefe) status_small_pane_g6_ParamLimits

0xd1fe,	// (0x0005eefe) status_small_pane_g6

0x0007,

0xf757,	// (0x00061457) status_small_pane_g_ParamLimits

0xf757,	// (0x00061457) status_small_pane_g

0xd22d,	// (0x0005ef2d) status_small_pane_t1

0xd24f,	// (0x0005ef4f) status_small_wait_pane_ParamLimits

0xd24f,	// (0x0005ef4f) status_small_wait_pane

0xd087,	// (0x0005ed87) aid_levels_signal_ParamLimits

0xd087,	// (0x0005ed87) aid_levels_signal

0xd09f,	// (0x0005ed9f) signal_pane_g1_ParamLimits

0xd09f,	// (0x0005ed9f) signal_pane_g1

0xd0ba,	// (0x0005edba) signal_pane_g2_ParamLimits

0xd0ba,	// (0x0005edba) signal_pane_g2

0x0003,

0xf6e8,	// (0x000613e8) signal_pane_g_ParamLimits

0xf6e8,	// (0x000613e8) signal_pane_g

0x4131,	// (0x00055e31) context_pane_g1

0xb5e6,	// (0x0005d2e6) title_pane_g1

0xb61d,	// (0x0005d31d) title_pane_t1

0x2cfe,	// (0x000549fe) title_pane_t2

0x2d24,	// (0x00054a24) title_pane_t3

0x0002,

0xf532,	// (0x00061232) title_pane_t

0xd635,	// (0x0005f335) aid_levels_battery_ParamLimits

0xd635,	// (0x0005f335) aid_levels_battery

0xd651,	// (0x0005f351) battery_pane_g1_ParamLimits

0xd651,	// (0x0005f351) battery_pane_g1

0xd66e,	// (0x0005f36e) battery_pane_g2_ParamLimits

0xd66e,	// (0x0005f36e) battery_pane_g2

0x0001,

0xf78b,	// (0x0006148b) battery_pane_g_ParamLimits

0xf78b,	// (0x0006148b) battery_pane_g

0xd82f,	// (0x0005f52f) uni_indicator_pane_g1

0xd845,	// (0x0005f545) uni_indicator_pane_g2

0xd85b,	// (0x0005f55b) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x000615fc) uni_indicator_pane_g

0x44d2,	// (0x000561d2) navi_icon_pane_ParamLimits

0x44d2,	// (0x000561d2) navi_icon_pane

0x4410,	// (0x00056110) navi_midp_pane

0x44ee,	// (0x000561ee) navi_navi_pane

0x44f8,	// (0x000561f8) navi_text_pane_ParamLimits

0x44f8,	// (0x000561f8) navi_text_pane

0xd06b,	// (0x0005ed6b) status_small_wait_pane_g1

0x3179,	// (0x00054e79) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x000615f7) status_small_wait_pane_g

0x5d7a,	// (0x00057a7a) navi_navi_icon_text_pane

0x5d82,	// (0x00057a82) navi_navi_pane_g1_ParamLimits

0x5d82,	// (0x00057a82) navi_navi_pane_g1

0x5d94,	// (0x00057a94) navi_navi_pane_g2_ParamLimits

0x5d94,	// (0x00057a94) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x000615c5) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x000615c5) navi_navi_pane_g

0x5da6,	// (0x00057aa6) navi_navi_tabs_pane

0x5daf,	// (0x00057aaf) navi_navi_text_pane

0x5d7a,	// (0x00057a7a) navi_navi_volume_pane

0x5d56,	// (0x00057a56) navi_text_pane_t1

0x5d4a,	// (0x00057a4a) navi_icon_pane_g1

0x5c9d,	// (0x0005799d) navi_navi_text_pane_t1

0x145b,	// (0x0005315b) navi_navi_volume_pane_g1

0x1463,	// (0x00053163) volume_small_pane

0x5c03,	// (0x00057903) navi_navi_icon_text_pane_g1

0x5c0b,	// (0x0005790b) navi_navi_icon_text_pane_t1

0x44ee,	// (0x000561ee) navi_tabs_2_long_pane

0x44ee,	// (0x000561ee) navi_tabs_2_pane

0x44ee,	// (0x000561ee) navi_tabs_3_long_pane

0x44ee,	// (0x000561ee) navi_tabs_3_pane

0x44ee,	// (0x000561ee) navi_tabs_4_pane

0x143b,	// (0x0005313b) tabs_2_active_pane_ParamLimits

0x143b,	// (0x0005313b) tabs_2_active_pane

0x144b,	// (0x0005314b) tabs_2_passive_pane_ParamLimits

0x144b,	// (0x0005314b) tabs_2_passive_pane

0x1409,	// (0x00053109) tabs_3_active_pane_ParamLimits

0x1409,	// (0x00053109) tabs_3_active_pane

0x1419,	// (0x00053119) tabs_3_passive_pane_ParamLimits

0x1419,	// (0x00053119) tabs_3_passive_pane

0x142a,	// (0x0005312a) tabs_3_passive_pane_cp_ParamLimits

0x142a,	// (0x0005312a) tabs_3_passive_pane_cp

0x13c5,	// (0x000530c5) tabs_4_active_pane_ParamLimits

0x13c5,	// (0x000530c5) tabs_4_active_pane

0x13d6,	// (0x000530d6) tabs_4_passive_pane_ParamLimits

0x13d6,	// (0x000530d6) tabs_4_passive_pane

0x13e7,	// (0x000530e7) tabs_4_passive_pane_cp_ParamLimits

0x13e7,	// (0x000530e7) tabs_4_passive_pane_cp

0x13f8,	// (0x000530f8) tabs_4_passive_pane_cp2_ParamLimits

0x13f8,	// (0x000530f8) tabs_4_passive_pane_cp2

0x13a1,	// (0x000530a1) tabs_2_long_active_pane_ParamLimits

0x13a1,	// (0x000530a1) tabs_2_long_active_pane

0x13b3,	// (0x000530b3) tabs_2_long_passive_pane_ParamLimits

0x13b3,	// (0x000530b3) tabs_2_long_passive_pane

0x1362,	// (0x00053062) tabs_3_long_active_pane_ParamLimits

0x1362,	// (0x00053062) tabs_3_long_active_pane

0x1375,	// (0x00053075) tabs_3_long_passive_pane_ParamLimits

0x1375,	// (0x00053075) tabs_3_long_passive_pane

0x138e,	// (0x0005308e) tabs_3_long_passive_pane_cp_ParamLimits

0x138e,	// (0x0005308e) tabs_3_long_passive_pane_cp

0x1308,	// (0x00053008) volume_small_pane_g1

0x1311,	// (0x00053011) volume_small_pane_g2

0x131a,	// (0x0005301a) volume_small_pane_g3

0x1323,	// (0x00053023) volume_small_pane_g4

0x132c,	// (0x0005302c) volume_small_pane_g5

0x1335,	// (0x00053035) volume_small_pane_g6

0x133e,	// (0x0005303e) volume_small_pane_g7

0x1347,	// (0x00053047) volume_small_pane_g8

0x1350,	// (0x00053050) volume_small_pane_g9

0x1359,	// (0x00053059) volume_small_pane_g10

0x0009,

0xf891,	// (0x00061591) volume_small_pane_g

0x2fb1,	// (0x00054cb1) bg_active_tab_pane_cp2_ParamLimits

0x2fb1,	// (0x00054cb1) bg_active_tab_pane_cp2

0x2d44,	// (0x00054a44) tabs_3_active_pane_g1

0xb6a9,	// (0x0005d3a9) tabs_3_active_pane_t1

0x2fb1,	// (0x00054cb1) bg_passive_tab_pane_cp2_ParamLimits

0x2fb1,	// (0x00054cb1) bg_passive_tab_pane_cp2

0x2d44,	// (0x00054a44) tabs_3_passive_pane_g1

0xb6a9,	// (0x0005d3a9) tabs_3_passive_pane_t1

0x2fb1,	// (0x00054cb1) bg_active_tab_pane_cp3_ParamLimits

0x2fb1,	// (0x00054cb1) bg_active_tab_pane_cp3

0x2d5e,	// (0x00054a5e) tabs_4_active_pane_g1

0xb6bb,	// (0x0005d3bb) tabs_4_active_pane_t1

0x2fb1,	// (0x00054cb1) bg_passive_tab_pane_cp3_ParamLimits

0x2fb1,	// (0x00054cb1) bg_passive_tab_pane_cp3

0x2d5e,	// (0x00054a5e) tabs_4_1_passive_pane_g1

0xb6bb,	// (0x0005d3bb) tabs_4_1_passive_pane_t1

0x4981,	// (0x00056681) list_highlight_pane_cp2

0xd8e1,	// (0x0005f5e1) list_set_pane_ParamLimits

0xd8e1,	// (0x0005f5e1) list_set_pane

0xd97b,	// (0x0005f67b) main_pane_set_t1_ParamLimits

0xd97b,	// (0x0005f67b) main_pane_set_t1

0xd99b,	// (0x0005f69b) main_pane_set_t2_ParamLimits

0xd99b,	// (0x0005f69b) main_pane_set_t2

0xd9af,	// (0x0005f6af) main_pane_set_t3_ParamLimits

0xd9af,	// (0x0005f6af) main_pane_set_t3

0xd9c1,	// (0x0005f6c1) main_pane_set_t4_ParamLimits

0xd9c1,	// (0x0005f6c1) main_pane_set_t4

0x0003,

0xf961,	// (0x00061661) main_pane_set_t_ParamLimits

0xf961,	// (0x00061661) main_pane_set_t

0xd9d3,	// (0x0005f6d3) setting_code_pane

0xd9dd,	// (0x0005f6dd) setting_slider_graphic_pane

0xd9dd,	// (0x0005f6dd) setting_slider_pane

0xd9dd,	// (0x0005f6dd) setting_text_pane

0xd9dd,	// (0x0005f6dd) setting_volume_pane

0xf498,	// (0x00061198) volume_set_pane

0x2d36,	// (0x00054a36) bg_set_opt_pane_cp

0xf4a0,	// (0x000611a0) setting_slider_pane_t1

0xf4b9,	// (0x000611b9) setting_slider_pane_t2

0xf4d3,	// (0x000611d3) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00061239) setting_slider_pane_t

0xf4eb,	// (0x000611eb) slider_set_pane

0x2c56,	// (0x00054956) bg_set_opt_pane_cp2

0x2d78,	// (0x00054a78) setting_slider_graphic_pane_g1

0xf501,	// (0x00061201) setting_slider_graphic_pane_t1

0xf511,	// (0x00061211) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00061240) setting_slider_graphic_pane_t

0xf521,	// (0x00061221) slider_set_pane_cp

0x2c56,	// (0x00054956) input_focus_pane_cp1

0x6287,	// (0x00057f87) list_set_text_pane

0xd06b,	// (0x0005ed6b) setting_text_pane_g1

0x2c56,	// (0x00054956) input_focus_pane_cp2

0xd06b,	// (0x0005ed6b) setting_code_pane_g1

0x2d81,	// (0x00054a81) setting_code_pane_t1

0xeb6c,	// (0x0006086c) set_text_pane_t1_ParamLimits

0xeb6c,	// (0x0006086c) set_text_pane_t1

0x39f4,	// (0x000556f4) set_opt_bg_pane_g1

0x39fc,	// (0x000556fc) set_opt_bg_pane_g2

0x6261,	// (0x00057f61) set_opt_bg_pane_g3

0x3a0c,	// (0x0005570c) set_opt_bg_pane_g4

0x3a14,	// (0x00055714) set_opt_bg_pane_g5

0x3a1c,	// (0x0005571c) set_opt_bg_pane_g6

0x626b,	// (0x00057f6b) set_opt_bg_pane_g7

0x6273,	// (0x00057f73) set_opt_bg_pane_g8

0x627d,	// (0x00057f7d) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x0006164e) set_opt_bg_pane_g

0x6254,	// (0x00057f54) slider_set_pane_g1

0x14e2,	// (0x000531e2) slider_set_pane_g2

0x0006,

0xf93f,	// (0x0006163f) slider_set_pane_g

0x146c,	// (0x0005316c) volume_set_pane_g1

0x1474,	// (0x00053174) volume_set_pane_g2

0x147c,	// (0x0005317c) volume_set_pane_g3

0x1484,	// (0x00053184) volume_set_pane_g4

0x148c,	// (0x0005318c) volume_set_pane_g5

0x1494,	// (0x00053194) volume_set_pane_g6

0x149c,	// (0x0005319c) volume_set_pane_g7

0x14a4,	// (0x000531a4) volume_set_pane_g8

0x14ac,	// (0x000531ac) volume_set_pane_g9

0x14b4,	// (0x000531b4) volume_set_pane_g10

0x0009,

0xf917,	// (0x00061617) volume_set_pane_g

0xb6cd,	// (0x0005d3cd) indicator_pane_ParamLimits

0xb6cd,	// (0x0005d3cd) indicator_pane

0xb6f5,	// (0x0005d3f5) main_idle_pane_g2_ParamLimits

0xb6f5,	// (0x0005d3f5) main_idle_pane_g2

0xb72d,	// (0x0005d42d) main_pane_idle_g1_ParamLimits

0xb72d,	// (0x0005d42d) main_pane_idle_g1

0x2dd0,	// (0x00054ad0) popup_clock_digital_analogue_window_ParamLimits

0x2dd0,	// (0x00054ad0) popup_clock_digital_analogue_window

0xb754,	// (0x0005d454) soft_indicator_pane_ParamLimits

0xb754,	// (0x0005d454) soft_indicator_pane

0xb76e,	// (0x0005d46e) wallpaper_pane_ParamLimits

0xb76e,	// (0x0005d46e) wallpaper_pane

0xd06b,	// (0x0005ed6b) wallpaper_pane_g1

0xb780,	// (0x0005d480) indicator_pane_g1_ParamLimits

0xb780,	// (0x0005d480) indicator_pane_g1

0x6680,	// (0x00058380) navi_navi_icon_text_pane_srt_g1

0x2e22,	// (0x00054b22) soft_indicator_pane_t1

0x2e3c,	// (0x00054b3c) aid_ps_area_pane

0xb796,	// (0x0005d496) aid_ps_clock_pane

0x2e5b,	// (0x00054b5b) aid_ps_indicator_pane

0x2e67,	// (0x00054b67) indicator_ps_pane_ParamLimits

0x2e67,	// (0x00054b67) indicator_ps_pane

0x2e76,	// (0x00054b76) power_save_pane_g1_ParamLimits

0x2e76,	// (0x00054b76) power_save_pane_g1

0x2e82,	// (0x00054b82) power_save_pane_g2_ParamLimits

0x2e82,	// (0x00054b82) power_save_pane_g2

0xf25d,	// (0x00060f5d) aid_navinavi_width_pane

0x2e3c,	// (0x00054b3c) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00061245) power_save_pane_g_ParamLimits

0xf545,	// (0x00061245) power_save_pane_g

0x2e90,	// (0x00054b90) power_save_pane_t1_ParamLimits

0x2e90,	// (0x00054b90) power_save_pane_t1

0xb796,	// (0x0005d496) aid_ps_clock_pane_ParamLimits

0x2e5b,	// (0x00054b5b) aid_ps_indicator_pane_ParamLimits

0x2ea2,	// (0x00054ba2) power_save_pane_t4_ParamLimits

0x2ea2,	// (0x00054ba2) power_save_pane_t4

0x0001,

0xf54a,	// (0x0006124a) power_save_pane_t_ParamLimits

0xf54a,	// (0x0006124a) power_save_pane_t

0x2ecc,	// (0x00054bcc) power_save_t3_ParamLimits

0x2ecc,	// (0x00054bcc) power_save_t3

0x2eb7,	// (0x00054bb7) power_save_t2_ParamLimits

0x2eb7,	// (0x00054bb7) power_save_t2

0x2ee1,	// (0x00054be1) indicator_ps_pane_g1

0xb7a4,	// (0x0005d4a4) ai_gene_pane_ParamLimits

0xb7a4,	// (0x0005d4a4) ai_gene_pane

0xb7bb,	// (0x0005d4bb) ai_links_pane_ParamLimits

0xb7bb,	// (0x0005d4bb) ai_links_pane

0xb7d3,	// (0x0005d4d3) indicator_pane_cp1_ParamLimits

0xb7d3,	// (0x0005d4d3) indicator_pane_cp1

0xb7e2,	// (0x0005d4e2) main_pane_idle_g1_cp_ParamLimits

0xb7e2,	// (0x0005d4e2) main_pane_idle_g1_cp

0x2f1a,	// (0x00054c1a) popup_ai_links_title_window

0xb7fa,	// (0x0005d4fa) soft_indicator_pane_cp1_ParamLimits

0xb7fa,	// (0x0005d4fa) soft_indicator_pane_cp1

0x6043,	// (0x00057d43) ai_links_pane_g1

0x604c,	// (0x00057d4c) grid_ai_links_pane

0xd826,	// (0x0005f526) ai_gene_pane_1

0x6031,	// (0x00057d31) ai_gene_pane_2

0x603a,	// (0x00057d3a) list_highlight_pane_cp4

0xd802,	// (0x0005f502) cell_ai_link_pane_ParamLimits

0xd802,	// (0x0005f502) cell_ai_link_pane

0x6002,	// (0x00057d02) cell_ai_link_pane_g1

0x3179,	// (0x00054e79) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x000615f2) cell_ai_link_pane_g

0x2c56,	// (0x00054956) grid_highlight_cp2

0x2c56,	// (0x00054956) bg_popup_sub_pane_cp1

0x2f3d,	// (0x00054c3d) popup_ai_links_title_window_t1

0x5f50,	// (0x00057c50) ai_gene_pane_1_g1_ParamLimits

0x5f50,	// (0x00057c50) ai_gene_pane_1_g1

0x5f5c,	// (0x00057c5c) ai_gene_pane_1_g2_ParamLimits

0x5f5c,	// (0x00057c5c) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x000615e8) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x000615e8) ai_gene_pane_1_g

0x5f69,	// (0x00057c69) ai_gene_pane_1_t1_ParamLimits

0x5f69,	// (0x00057c69) ai_gene_pane_1_t1

0x5f9d,	// (0x00057c9d) grid_ai_soft_ind_pane

0x5f3b,	// (0x00057c3b) ai_gene_pane_2_t1_ParamLimits

0x5f3b,	// (0x00057c3b) ai_gene_pane_2_t1

0xb80e,	// (0x0005d50e) main_pane_empty_t1_ParamLimits

0xb80e,	// (0x0005d50e) main_pane_empty_t1

0xb826,	// (0x0005d526) main_pane_empty_t2_ParamLimits

0xb826,	// (0x0005d526) main_pane_empty_t2

0xb83b,	// (0x0005d53b) main_pane_empty_t3_ParamLimits

0xb83b,	// (0x0005d53b) main_pane_empty_t3

0xb84d,	// (0x0005d54d) main_pane_empty_t4_ParamLimits

0xb84d,	// (0x0005d54d) main_pane_empty_t4

0xb85f,	// (0x0005d55f) main_pane_empty_t5_ParamLimits

0xb85f,	// (0x0005d55f) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0006124f) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0006124f) main_pane_empty_t

0x3abb,	// (0x000557bb) bg_popup_window_pane_ParamLimits

0x3abb,	// (0x000557bb) bg_popup_window_pane

0x5cab,	// (0x000579ab) find_popup_pane_cp2_ParamLimits

0x5cab,	// (0x000579ab) find_popup_pane_cp2

0x5cb7,	// (0x000579b7) heading_pane_ParamLimits

0x5cb7,	// (0x000579b7) heading_pane

0x2c56,	// (0x00054956) bg_popup_sub_pane

0xd783,	// (0x0005f483) bg_popup_window_pane_g1_ParamLimits

0xd783,	// (0x0005f483) bg_popup_window_pane_g1

0xd792,	// (0x0005f492) bg_popup_window_pane_g2_ParamLimits

0xd792,	// (0x0005f492) bg_popup_window_pane_g2

0xd79e,	// (0x0005f49e) bg_popup_window_pane_g3_ParamLimits

0xd79e,	// (0x0005f49e) bg_popup_window_pane_g3

0xd7aa,	// (0x0005f4aa) bg_popup_window_pane_g4_ParamLimits

0xd7aa,	// (0x0005f4aa) bg_popup_window_pane_g4

0xd7b9,	// (0x0005f4b9) bg_popup_window_pane_g5_ParamLimits

0xd7b9,	// (0x0005f4b9) bg_popup_window_pane_g5

0xd7c9,	// (0x0005f4c9) bg_popup_window_pane_g6_ParamLimits

0xd7c9,	// (0x0005f4c9) bg_popup_window_pane_g6

0xd7d5,	// (0x0005f4d5) bg_popup_window_pane_g7_ParamLimits

0xd7d5,	// (0x0005f4d5) bg_popup_window_pane_g7

0xd7e4,	// (0x0005f4e4) bg_popup_window_pane_g8_ParamLimits

0xd7e4,	// (0x0005f4e4) bg_popup_window_pane_g8

0xd7f3,	// (0x0005f4f3) bg_popup_window_pane_g9_ParamLimits

0xd7f3,	// (0x0005f4f3) bg_popup_window_pane_g9

0x5c91,	// (0x00057991) bg_popup_window_pane_g10_ParamLimits

0x5c91,	// (0x00057991) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x000615b0) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x000615b0) bg_popup_window_pane_g

0x5bba,	// (0x000578ba) bg_popup_heading_pane_ParamLimits

0x5bba,	// (0x000578ba) bg_popup_heading_pane

0x15e7,	// (0x000532e7) tabs_4_passive_pane_cp_srt_ParamLimits

0x15e7,	// (0x000532e7) tabs_4_passive_pane_cp_srt

0x15f9,	// (0x000532f9) tabs_4_passive_pane_srt_ParamLimits

0x5bce,	// (0x000578ce) heading_pane_g2

0x15f9,	// (0x000532f9) tabs_4_passive_pane_srt

0x4f1f,	// (0x00056c1f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4f1f,	// (0x00056c1f) bg_passive_tab_pane_cp3_srt

0x5bd6,	// (0x000578d6) heading_pane_t1_ParamLimits

0x5bd6,	// (0x000578d6) heading_pane_t1

0x5bed,	// (0x000578ed) heading_pane_t2_ParamLimits

0x5bed,	// (0x000578ed) heading_pane_t2

0x0001,

0xf8ab,	// (0x000615ab) heading_pane_t_ParamLimits

0xf8ab,	// (0x000615ab) heading_pane_t

0x56e7,	// (0x000573e7) bg_popup_heading_pane_g1

0x5796,	// (0x00057496) bg_popup_heading_pane_g2

0x57a0,	// (0x000574a0) bg_popup_heading_pane_g3

0x57aa,	// (0x000574aa) bg_popup_heading_pane_g4

0x57b4,	// (0x000574b4) bg_popup_heading_pane_g5

0x57be,	// (0x000574be) bg_popup_heading_pane_g6

0x57c6,	// (0x000574c6) bg_popup_heading_pane_g7

0x57ce,	// (0x000574ce) bg_popup_heading_pane_g8

0x57d8,	// (0x000574d8) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x00061567) bg_popup_heading_pane_g

0x4eab,	// (0x00056bab) bg_popup_sub_pane_g1

0x4ebb,	// (0x00056bbb) bg_popup_sub_pane_g2

0x4eb3,	// (0x00056bb3) bg_popup_sub_pane_g3

0x4ecb,	// (0x00056bcb) bg_popup_sub_pane_g4

0x4ec3,	// (0x00056bc3) bg_popup_sub_pane_g5

0x4ed3,	// (0x00056bd3) bg_popup_sub_pane_g6

0x4edb,	// (0x00056bdb) bg_popup_sub_pane_g7

0x4eeb,	// (0x00056beb) bg_popup_sub_pane_g8

0x4ee3,	// (0x00056be3) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x00061541) bg_popup_sub_pane_g

0x2fb1,	// (0x00054cb1) bg_popup_window_pane_cp5_ParamLimits

0x2fb1,	// (0x00054cb1) bg_popup_window_pane_cp5

0x2fcd,	// (0x00054ccd) popup_note_window_g1_ParamLimits

0x2fcd,	// (0x00054ccd) popup_note_window_g1

0x2fd9,	// (0x00054cd9) popup_note_window_t1_ParamLimits

0x2fd9,	// (0x00054cd9) popup_note_window_t1

0x2fef,	// (0x00054cef) popup_note_window_t2_ParamLimits

0x2fef,	// (0x00054cef) popup_note_window_t2

0x3005,	// (0x00054d05) popup_note_window_t3_ParamLimits

0x3005,	// (0x00054d05) popup_note_window_t3

0x301b,	// (0x00054d1b) popup_note_window_t4_ParamLimits

0x301b,	// (0x00054d1b) popup_note_window_t4

0x3043,	// (0x00054d43) popup_note_window_t5_ParamLimits

0x3043,	// (0x00054d43) popup_note_window_t5

0x0004,

0xf55a,	// (0x0006125a) popup_note_window_t_ParamLimits

0xf55a,	// (0x0006125a) popup_note_window_t

0x308d,	// (0x00054d8d) bg_popup_window_pane_cp6_ParamLimits

0x308d,	// (0x00054d8d) bg_popup_window_pane_cp6

0x5663,	// (0x00057363) popup_note_image_window_g1_ParamLimits

0x5663,	// (0x00057363) popup_note_image_window_g1

0x566f,	// (0x0005736f) popup_note_image_window_g2_ParamLimits

0x566f,	// (0x0005736f) popup_note_image_window_g2

0x0001,

0xf835,	// (0x00061535) popup_note_image_window_g_ParamLimits

0xf835,	// (0x00061535) popup_note_image_window_g

0x5688,	// (0x00057388) popup_note_image_window_t1_ParamLimits

0x5688,	// (0x00057388) popup_note_image_window_t1

0x56a1,	// (0x000573a1) popup_note_image_window_t2_ParamLimits

0x56a1,	// (0x000573a1) popup_note_image_window_t2

0x56ba,	// (0x000573ba) popup_note_image_window_t3_ParamLimits

0x56ba,	// (0x000573ba) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x0006153a) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x0006153a) popup_note_image_window_t

0x5524,	// (0x00057224) bg_popup_window_pane_cp7_ParamLimits

0x5524,	// (0x00057224) bg_popup_window_pane_cp7

0x5554,	// (0x00057254) popup_note_wait_window_g1_ParamLimits

0x5554,	// (0x00057254) popup_note_wait_window_g1

0x5560,	// (0x00057260) popup_note_wait_window_g2_ParamLimits

0x5560,	// (0x00057260) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x00061523) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x00061523) popup_note_wait_window_g

0x5578,	// (0x00057278) popup_note_wait_window_t1_ParamLimits

0x5578,	// (0x00057278) popup_note_wait_window_t1

0x559f,	// (0x0005729f) popup_note_wait_window_t2_ParamLimits

0x559f,	// (0x0005729f) popup_note_wait_window_t2

0x55bc,	// (0x000572bc) popup_note_wait_window_t3_ParamLimits

0x55bc,	// (0x000572bc) popup_note_wait_window_t3

0x55cf,	// (0x000572cf) popup_note_wait_window_t4_ParamLimits

0x55cf,	// (0x000572cf) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x0006152a) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x0006152a) popup_note_wait_window_t

0x55f4,	// (0x000572f4) wait_bar_pane_ParamLimits

0x55f4,	// (0x000572f4) wait_bar_pane

0x2c56,	// (0x00054956) wait_anim_pane

0x2c56,	// (0x00054956) wait_border_pane

0xd06b,	// (0x0005ed6b) wait_anim_pane_g1

0xd06b,	// (0x0005ed6b) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x000613e3) wait_anim_pane_g

0x54c8,	// (0x000571c8) wait_border_pane_g1

0x54d3,	// (0x000571d3) wait_border_pane_g2

0x54dc,	// (0x000571dc) wait_border_pane_g3

0x0002,

0xf81c,	// (0x0006151c) wait_border_pane_g

0x5327,	// (0x00057027) bg_popup_window_pane_cp16_ParamLimits

0x5327,	// (0x00057027) bg_popup_window_pane_cp16

0x5427,	// (0x00057127) indicator_popup_pane_cp4_ParamLimits

0x5427,	// (0x00057127) indicator_popup_pane_cp4

0x543b,	// (0x0005713b) popup_query_data_window_t1_ParamLimits

0x543b,	// (0x0005713b) popup_query_data_window_t1

0x544d,	// (0x0005714d) popup_query_data_window_t2_ParamLimits

0x544d,	// (0x0005714d) popup_query_data_window_t2

0x5466,	// (0x00057166) popup_query_data_window_t3_ParamLimits

0x5466,	// (0x00057166) popup_query_data_window_t3

0x0002,

0xf815,	// (0x00061515) popup_query_data_window_t_ParamLimits

0xf815,	// (0x00061515) popup_query_data_window_t

0x548c,	// (0x0005718c) query_popup_data_pane_ParamLimits

0x548c,	// (0x0005718c) query_popup_data_pane

0x54a0,	// (0x000571a0) query_popup_data_pane_cp1_ParamLimits

0x54a0,	// (0x000571a0) query_popup_data_pane_cp1

0x5327,	// (0x00057027) bg_popup_window_pane_cp10_ParamLimits

0x5327,	// (0x00057027) bg_popup_window_pane_cp10

0x5359,	// (0x00057059) indicator_popup_pane_ParamLimits

0x5359,	// (0x00057059) indicator_popup_pane

0x537b,	// (0x0005707b) popup_query_code_window_t1_ParamLimits

0x537b,	// (0x0005707b) popup_query_code_window_t1

0x5395,	// (0x00057095) popup_query_code_window_t2_ParamLimits

0x5395,	// (0x00057095) popup_query_code_window_t2

0x53de,	// (0x000570de) popup_query_code_window_t3_ParamLimits

0x53de,	// (0x000570de) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x0006150e) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x0006150e) popup_query_code_window_t

0x540d,	// (0x0005710d) query_popup_pane_ParamLimits

0x540d,	// (0x0005710d) query_popup_pane

0x308d,	// (0x00054d8d) bg_popup_window_pane_cp15_ParamLimits

0x308d,	// (0x00054d8d) bg_popup_window_pane_cp15

0x30ab,	// (0x00054dab) indicator_popup_pane_cp1_ParamLimits

0x30ab,	// (0x00054dab) indicator_popup_pane_cp1

0x30be,	// (0x00054dbe) indicator_popup_pane_cp2_ParamLimits

0x30be,	// (0x00054dbe) indicator_popup_pane_cp2

0x30d1,	// (0x00054dd1) popup_query_data_code_window_g1_ParamLimits

0x30d1,	// (0x00054dd1) popup_query_data_code_window_g1

0x30e4,	// (0x00054de4) popup_query_data_code_window_t1_ParamLimits

0x30e4,	// (0x00054de4) popup_query_data_code_window_t1

0x30f6,	// (0x00054df6) popup_query_data_code_window_t2_ParamLimits

0x30f6,	// (0x00054df6) popup_query_data_code_window_t2

0x3108,	// (0x00054e08) popup_query_data_code_window_t3_ParamLimits

0x3108,	// (0x00054e08) popup_query_data_code_window_t3

0x311e,	// (0x00054e1e) popup_query_data_code_window_t4_ParamLimits

0x311e,	// (0x00054e1e) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00061265) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00061265) popup_query_data_code_window_t

0x114c,	// (0x00052e4c) list_single_midp_graphic_pane_g3

0x3136,	// (0x00054e36) query_popup_data_pane_cp2_ParamLimits

0x3149,	// (0x00054e49) query_popup_pane_cp2_ParamLimits

0x3149,	// (0x00054e49) query_popup_pane_cp2

0x2c56,	// (0x00054956) bg_popup_window_pane_cp11

0x530b,	// (0x0005700b) heading_pane_cp5

0x5313,	// (0x00057013) listscroll_popup_info_pane

0x2c56,	// (0x00054956) input_focus_pane_cp3

0x315c,	// (0x00054e5c) query_popup_pane_t1

0x316a,	// (0x00054e6a) list_popup_info_pane_ParamLimits

0x316a,	// (0x00054e6a) list_popup_info_pane

0x3179,	// (0x00054e79) listscroll_popup_info_pane_g1

0x3181,	// (0x00054e81) scroll_pane_cp7

0x318b,	// (0x00054e8b) popup_info_list_pane_t1_ParamLimits

0x318b,	// (0x00054e8b) popup_info_list_pane_t1

0x31a5,	// (0x00054ea5) popup_info_list_pane_t2_ParamLimits

0x31a5,	// (0x00054ea5) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0006126e) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0006126e) popup_info_list_pane_t

0x2c56,	// (0x00054956) bg_popup_window_pane_cp12

0x669a,	// (0x0005839a) find_popup_pane

0x2d36,	// (0x00054a36) bg_popup_window_pane_cp3

0x31bf,	// (0x00054ebf) heading_pane_cp3

0x31ce,	// (0x00054ece) listscroll_popup_graphic_pane

0x2c56,	// (0x00054956) bg_popup_window_pane_cp4

0xb8c1,	// (0x0005d5c1) heading_pane_cp4

0x3238,	// (0x00054f38) listscroll_popup_colour_pane

0xb8cb,	// (0x0005d5cb) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb8cb,	// (0x0005d5cb) cell_large_graphic_colour_none_popup_pane

0xb8df,	// (0x0005d5df) grid_large_graphic_colour_popup_pane_ParamLimits

0xb8df,	// (0x0005d5df) grid_large_graphic_colour_popup_pane

0xb903,	// (0x0005d603) listscroll_popup_colour_pane_g1_ParamLimits

0xb903,	// (0x0005d603) listscroll_popup_colour_pane_g1

0xb91a,	// (0x0005d61a) listscroll_popup_colour_pane_g2_ParamLimits

0xb91a,	// (0x0005d61a) listscroll_popup_colour_pane_g2

0xb931,	// (0x0005d631) listscroll_popup_colour_pane_g3_ParamLimits

0xb931,	// (0x0005d631) listscroll_popup_colour_pane_g3

0xb941,	// (0x0005d641) listscroll_popup_colour_pane_g4_ParamLimits

0xb941,	// (0x0005d641) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00061273) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00061273) listscroll_popup_colour_pane_g

0x32c6,	// (0x00054fc6) scroll_pane_cp6_ParamLimits

0x32c6,	// (0x00054fc6) scroll_pane_cp6

0xb951,	// (0x0005d651) cell_large_graphic_colour_popup_pane_ParamLimits

0xb951,	// (0x0005d651) cell_large_graphic_colour_popup_pane

0x32f7,	// (0x00054ff7) cell_large_graphic_colour_none_popup_pane_t1

0x2c56,	// (0x00054956) grid_highlight_pane_cp5

0x3306,	// (0x00055006) cell_large_graphic_colour_popup_pane_g1

0x330e,	// (0x0005500e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0006127c) cell_large_graphic_colour_popup_pane_g

0x3316,	// (0x00055016) cell_large_graphic_colour_popup_pane_g2_copy1

0x331f,	// (0x0005501f) grid_highlight_pane_cp4

0x3327,	// (0x00055027) bg_popup_window_pane_cp8_ParamLimits

0x3327,	// (0x00055027) bg_popup_window_pane_cp8

0x3342,	// (0x00055042) popup_snote_single_text_window_g1_ParamLimits

0x3342,	// (0x00055042) popup_snote_single_text_window_g1

0x3354,	// (0x00055054) popup_snote_single_text_window_t1_ParamLimits

0x3354,	// (0x00055054) popup_snote_single_text_window_t1

0x3367,	// (0x00055067) popup_snote_single_text_window_t2_ParamLimits

0x3367,	// (0x00055067) popup_snote_single_text_window_t2

0x337a,	// (0x0005507a) popup_snote_single_text_window_t3_ParamLimits

0x337a,	// (0x0005507a) popup_snote_single_text_window_t3

0x33b3,	// (0x000550b3) popup_snote_single_text_window_t4_ParamLimits

0x33b3,	// (0x000550b3) popup_snote_single_text_window_t4

0x33e7,	// (0x000550e7) popup_snote_single_text_window_t5_ParamLimits

0x33e7,	// (0x000550e7) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00061281) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00061281) popup_snote_single_text_window_t

0x3416,	// (0x00055116) bg_popup_window_pane_cp9_ParamLimits

0x3416,	// (0x00055116) bg_popup_window_pane_cp9

0x3342,	// (0x00055042) popup_snote_single_graphic_window_g1_ParamLimits

0x3342,	// (0x00055042) popup_snote_single_graphic_window_g1

0x3424,	// (0x00055124) popup_snote_single_graphic_window_g2_ParamLimits

0x3424,	// (0x00055124) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0006128c) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0006128c) popup_snote_single_graphic_window_g

0x3430,	// (0x00055130) popup_snote_single_graphic_window_t1_ParamLimits

0x3430,	// (0x00055130) popup_snote_single_graphic_window_t1

0x3443,	// (0x00055143) popup_snote_single_graphic_window_t2_ParamLimits

0x3443,	// (0x00055143) popup_snote_single_graphic_window_t2

0x3456,	// (0x00055156) popup_snote_single_graphic_window_t3_ParamLimits

0x3456,	// (0x00055156) popup_snote_single_graphic_window_t3

0x348f,	// (0x0005518f) popup_snote_single_graphic_window_t4_ParamLimits

0x348f,	// (0x0005518f) popup_snote_single_graphic_window_t4

0x34c3,	// (0x000551c3) popup_snote_single_graphic_window_t5_ParamLimits

0x34c3,	// (0x000551c3) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00061291) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00061291) popup_snote_single_graphic_window_t

0x65dc,	// (0x000582dc) grid_graphic_popup_pane_ParamLimits

0x65dc,	// (0x000582dc) grid_graphic_popup_pane

0x6606,	// (0x00058306) listscroll_popup_graphic_pane_g1_ParamLimits

0x6606,	// (0x00058306) listscroll_popup_graphic_pane_g1

0xdae6,	// (0x0005f7e6) listscroll_popup_graphic_pane_g2_ParamLimits

0xdae6,	// (0x0005f7e6) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x0006168b) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x0006168b) listscroll_popup_graphic_pane_g

0x662e,	// (0x0005832e) scroll_pane_cp5

0xdaa3,	// (0x0005f7a3) cell_graphic_popup_pane_ParamLimits

0xdaa3,	// (0x0005f7a3) cell_graphic_popup_pane

0x654e,	// (0x0005824e) cell_graphic_popup_pane_g1

0x6556,	// (0x00058256) cell_graphic_popup_pane_g2

0x3316,	// (0x00055016) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x00061684) cell_graphic_popup_pane_g

0x655f,	// (0x0005825f) cell_graphic_popup_pane_t2

0x331f,	// (0x0005501f) grid_highlight_pane_cp3

0x3504,	// (0x00055204) list_gen_pane_ParamLimits

0x3504,	// (0x00055204) list_gen_pane

0x3536,	// (0x00055236) scroll_pane

0xda5a,	// (0x0005f75a) bg_list_pane_g1_ParamLimits

0xda5a,	// (0x0005f75a) bg_list_pane_g1

0x64c3,	// (0x000581c3) bg_list_pane_g2_ParamLimits

0x64c3,	// (0x000581c3) bg_list_pane_g2

0x64d8,	// (0x000581d8) bg_list_pane_g3_ParamLimits

0x64d8,	// (0x000581d8) bg_list_pane_g3

0x64ec,	// (0x000581ec) bg_list_pane_g4_ParamLimits

0x64ec,	// (0x000581ec) bg_list_pane_g4

0xda77,	// (0x0005f777) bg_list_pane_g5_ParamLimits

0xda77,	// (0x0005f777) bg_list_pane_g5

0x0004,

0xf979,	// (0x00061679) bg_list_pane_g_ParamLimits

0xf979,	// (0x00061679) bg_list_pane_g

0xda10,	// (0x0005f710) list_double2_graphic_large_graphic_pane_ParamLimits

0xda10,	// (0x0005f710) list_double2_graphic_large_graphic_pane

0xda10,	// (0x0005f710) list_double2_graphic_pane_ParamLimits

0xda10,	// (0x0005f710) list_double2_graphic_pane

0xda10,	// (0x0005f710) list_double2_large_graphic_pane_ParamLimits

0xda10,	// (0x0005f710) list_double2_large_graphic_pane

0xda10,	// (0x0005f710) list_double2_pane_ParamLimits

0xda10,	// (0x0005f710) list_double2_pane

0xda10,	// (0x0005f710) list_double_graphic_heading_pane_ParamLimits

0xda10,	// (0x0005f710) list_double_graphic_heading_pane

0xda10,	// (0x0005f710) list_double_graphic_pane_ParamLimits

0xda10,	// (0x0005f710) list_double_graphic_pane

0xda10,	// (0x0005f710) list_double_heading_pane_ParamLimits

0xda10,	// (0x0005f710) list_double_heading_pane

0xda10,	// (0x0005f710) list_double_large_graphic_pane_ParamLimits

0xda10,	// (0x0005f710) list_double_large_graphic_pane

0xda10,	// (0x0005f710) list_double_number_pane_ParamLimits

0xda10,	// (0x0005f710) list_double_number_pane

0xda10,	// (0x0005f710) list_double_pane_ParamLimits

0xda10,	// (0x0005f710) list_double_pane

0xda10,	// (0x0005f710) list_double_time_pane_ParamLimits

0xda10,	// (0x0005f710) list_double_time_pane

0xda10,	// (0x0005f710) list_setting_number_pane_ParamLimits

0xda10,	// (0x0005f710) list_setting_number_pane

0xda10,	// (0x0005f710) list_setting_pane_ParamLimits

0xda10,	// (0x0005f710) list_setting_pane

0xda22,	// (0x0005f722) list_single_2graphic_pane_ParamLimits

0xda22,	// (0x0005f722) list_single_2graphic_pane

0xda22,	// (0x0005f722) list_single_graphic_heading_pane_ParamLimits

0xda22,	// (0x0005f722) list_single_graphic_heading_pane

0xda22,	// (0x0005f722) list_single_graphic_pane_ParamLimits

0xda22,	// (0x0005f722) list_single_graphic_pane

0xda22,	// (0x0005f722) list_single_heading_pane_ParamLimits

0xda22,	// (0x0005f722) list_single_heading_pane

0xda22,	// (0x0005f722) list_single_large_graphic_pane_ParamLimits

0xda22,	// (0x0005f722) list_single_large_graphic_pane

0xda22,	// (0x0005f722) list_single_number_heading_pane_ParamLimits

0xda22,	// (0x0005f722) list_single_number_heading_pane

0xda22,	// (0x0005f722) list_single_number_pane_ParamLimits

0xda22,	// (0x0005f722) list_single_number_pane

0xda22,	// (0x0005f722) list_single_pane_ParamLimits

0xda22,	// (0x0005f722) list_single_pane

0x2c56,	// (0x00054956) list_highlight_pane_cp1

0x399c,	// (0x0005569c) list_single_pane_g1_ParamLimits

0x399c,	// (0x0005569c) list_single_pane_g1

0x356a,	// (0x0005526a) list_single_pane_g2_ParamLimits

0x356a,	// (0x0005526a) list_single_pane_g2

0x0001,

0xf5ad,	// (0x000612ad) list_single_pane_g_ParamLimits

0xf5ad,	// (0x000612ad) list_single_pane_g

0x1576,	// (0x00053276) list_single_pane_t1_ParamLimits

0x1576,	// (0x00053276) list_single_pane_t1

0x399c,	// (0x0005569c) list_single_number_pane_g1_ParamLimits

0x399c,	// (0x0005569c) list_single_number_pane_g1

0x356a,	// (0x0005526a) list_single_number_pane_g2_ParamLimits

0x356a,	// (0x0005526a) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x000612ad) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x000612ad) list_single_number_pane_g

0x1111,	// (0x00052e11) list_single_number_pane_t1_ParamLimits

0x1111,	// (0x00052e11) list_single_number_pane_t1

0x14bc,	// (0x000531bc) list_single_number_pane_t2_ParamLimits

0x14bc,	// (0x000531bc) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x0006163a) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x0006163a) list_single_number_pane_t

0xeb85,	// (0x00060885) list_single_graphic_pane_g1_ParamLimits

0xeb85,	// (0x00060885) list_single_graphic_pane_g1

0x399c,	// (0x0005569c) list_single_graphic_pane_g2_ParamLimits

0x399c,	// (0x0005569c) list_single_graphic_pane_g2

0x356a,	// (0x0005526a) list_single_graphic_pane_g3_ParamLimits

0x356a,	// (0x0005526a) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0006129c) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0006129c) list_single_graphic_pane_g

0xeb91,	// (0x00060891) list_single_graphic_pane_t1_ParamLimits

0xeb91,	// (0x00060891) list_single_graphic_pane_t1

0xeba7,	// (0x000608a7) list_single_heading_pane_g1_ParamLimits

0xeba7,	// (0x000608a7) list_single_heading_pane_g1

0x356a,	// (0x0005526a) list_single_heading_pane_g2_ParamLimits

0x356a,	// (0x0005526a) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x000612a3) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x000612a3) list_single_heading_pane_g

0xebba,	// (0x000608ba) list_single_heading_pane_t1_ParamLimits

0xebba,	// (0x000608ba) list_single_heading_pane_t1

0x3576,	// (0x00055276) list_single_heading_pane_t2_ParamLimits

0x3576,	// (0x00055276) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x000612a8) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x000612a8) list_single_heading_pane_t

0x399c,	// (0x0005569c) list_single_number_heading_pane_g1_ParamLimits

0x399c,	// (0x0005569c) list_single_number_heading_pane_g1

0x356a,	// (0x0005526a) list_single_number_heading_pane_g2_ParamLimits

0x356a,	// (0x0005526a) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x000612ad) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x000612ad) list_single_number_heading_pane_g

0xebd0,	// (0x000608d0) list_single_number_heading_pane_t1_ParamLimits

0xebd0,	// (0x000608d0) list_single_number_heading_pane_t1

0xebe6,	// (0x000608e6) list_single_number_heading_pane_t2_ParamLimits

0xebe6,	// (0x000608e6) list_single_number_heading_pane_t2

0xebf8,	// (0x000608f8) list_single_number_heading_pane_t3_ParamLimits

0xebf8,	// (0x000608f8) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x000612b2) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x000612b2) list_single_number_heading_pane_t

0xec0a,	// (0x0006090a) list_single_graphic_heading_pane_g1_ParamLimits

0xec0a,	// (0x0006090a) list_single_graphic_heading_pane_g1

0xb97a,	// (0x0005d67a) list_single_graphic_heading_pane_g4_ParamLimits

0xb97a,	// (0x0005d67a) list_single_graphic_heading_pane_g4

0x356a,	// (0x0005526a) list_single_graphic_heading_pane_g5_ParamLimits

0x356a,	// (0x0005526a) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x000612b9) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x000612b9) list_single_graphic_heading_pane_g

0xebd0,	// (0x000608d0) list_single_graphic_heading_pane_t1_ParamLimits

0xebd0,	// (0x000608d0) list_single_graphic_heading_pane_t1

0xec22,	// (0x00060922) list_single_graphic_heading_pane_t2_ParamLimits

0xec22,	// (0x00060922) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x000612c0) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x000612c0) list_single_graphic_heading_pane_t

0x3705,	// (0x00055405) list_single_large_graphic_pane_g1_ParamLimits

0x3705,	// (0x00055405) list_single_large_graphic_pane_g1

0x399c,	// (0x0005569c) list_single_large_graphic_pane_g2_ParamLimits

0x399c,	// (0x0005569c) list_single_large_graphic_pane_g2

0x356a,	// (0x0005526a) list_single_large_graphic_pane_g3_ParamLimits

0x356a,	// (0x0005526a) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x000612c5) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x000612c5) list_single_large_graphic_pane_g

0x54d3,	// (0x000571d3) wait_border_pane_g2_copy1

0xb98b,	// (0x0005d68b) list_single_large_graphic_pane_g4_cp2

0x1726,	// (0x00053426) list_single_large_graphic_pane_t1_ParamLimits

0x1726,	// (0x00053426) list_single_large_graphic_pane_t1

0x35cc,	// (0x000552cc) list_double_pane_g1_ParamLimits

0x35cc,	// (0x000552cc) list_double_pane_g1

0x35d8,	// (0x000552d8) list_double_pane_g2_ParamLimits

0x35d8,	// (0x000552d8) list_double_pane_g2

0x0001,

0xf5cc,	// (0x000612cc) list_double_pane_g_ParamLimits

0xf5cc,	// (0x000612cc) list_double_pane_g

0xb993,	// (0x0005d693) list_double_pane_t1_ParamLimits

0xb993,	// (0x0005d693) list_double_pane_t1

0xb9a9,	// (0x0005d6a9) list_double_pane_t2_ParamLimits

0xb9a9,	// (0x0005d6a9) list_double_pane_t2

0x0001,

0xf5d1,	// (0x000612d1) list_double_pane_t_ParamLimits

0xf5d1,	// (0x000612d1) list_double_pane_t

0xb9bb,	// (0x0005d6bb) list_double2_pane_g1_ParamLimits

0xb9bb,	// (0x0005d6bb) list_double2_pane_g1

0x0125,	// (0x00051e25) list_double2_pane_g2_ParamLimits

0x0125,	// (0x00051e25) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x000612d6) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x000612d6) list_double2_pane_g

0xb9cc,	// (0x0005d6cc) list_double2_pane_t1_ParamLimits

0xb9cc,	// (0x0005d6cc) list_double2_pane_t1

0xb9e2,	// (0x0005d6e2) list_double2_pane_t2_ParamLimits

0xb9e2,	// (0x0005d6e2) list_double2_pane_t2

0x0001,

0xf5db,	// (0x000612db) list_double2_pane_t_ParamLimits

0xf5db,	// (0x000612db) list_double2_pane_t

0x35cc,	// (0x000552cc) list_double_number_pane_g1_ParamLimits

0x35cc,	// (0x000552cc) list_double_number_pane_g1

0x35d8,	// (0x000552d8) list_double_number_pane_g2_ParamLimits

0x35d8,	// (0x000552d8) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x000612cc) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x000612cc) list_double_number_pane_g

0xb9f4,	// (0x0005d6f4) list_double_number_pane_t1_ParamLimits

0xb9f4,	// (0x0005d6f4) list_double_number_pane_t1

0xec38,	// (0x00060938) list_double_number_pane_t2_ParamLimits

0xec38,	// (0x00060938) list_double_number_pane_t2

0xba06,	// (0x0005d706) list_double_number_pane_t3_ParamLimits

0xba06,	// (0x0005d706) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x000612e0) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x000612e0) list_double_number_pane_t

0xec4e,	// (0x0006094e) list_double_graphic_pane_g1_ParamLimits

0xec4e,	// (0x0006094e) list_double_graphic_pane_g1

0xba18,	// (0x0005d718) list_double_graphic_pane_g2_ParamLimits

0xba18,	// (0x0005d718) list_double_graphic_pane_g2

0xba27,	// (0x0005d727) list_double_graphic_pane_g3_ParamLimits

0xba27,	// (0x0005d727) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x000612e7) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x000612e7) list_double_graphic_pane_g

0xba3f,	// (0x0005d73f) list_double_graphic_pane_t1_ParamLimits

0xba3f,	// (0x0005d73f) list_double_graphic_pane_t1

0xba55,	// (0x0005d755) list_double_graphic_pane_t2_ParamLimits

0xba55,	// (0x0005d755) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x000612f0) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x000612f0) list_double_graphic_pane_t

0xba67,	// (0x0005d767) list_double2_graphic_pane_g1_ParamLimits

0xba67,	// (0x0005d767) list_double2_graphic_pane_g1

0x5480,	// (0x00057180) list_double2_graphic_pane_g2_ParamLimits

0x5480,	// (0x00057180) list_double2_graphic_pane_g2

0xba73,	// (0x0005d773) list_double2_graphic_pane_g3_ParamLimits

0xba73,	// (0x0005d773) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x000612f5) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x000612f5) list_double2_graphic_pane_g

0xba7f,	// (0x0005d77f) list_double2_graphic_pane_t1_ParamLimits

0xba7f,	// (0x0005d77f) list_double2_graphic_pane_t1

0xba95,	// (0x0005d795) list_double2_graphic_pane_t2_ParamLimits

0xba95,	// (0x0005d795) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x000612fc) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x000612fc) list_double2_graphic_pane_t

0xbaa7,	// (0x0005d7a7) list_double_large_graphic_pane_g1_ParamLimits

0xbaa7,	// (0x0005d7a7) list_double_large_graphic_pane_g1

0xbac6,	// (0x0005d7c6) list_double_large_graphic_pane_g2_ParamLimits

0xbac6,	// (0x0005d7c6) list_double_large_graphic_pane_g2

0x35d8,	// (0x000552d8) list_double_large_graphic_pane_g3_ParamLimits

0x35d8,	// (0x000552d8) list_double_large_graphic_pane_g3

0xbadc,	// (0x0005d7dc) list_double_large_graphic_pane_g4_ParamLimits

0xbadc,	// (0x0005d7dc) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x00061301) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00061301) list_double_large_graphic_pane_g

0xbaef,	// (0x0005d7ef) list_double_large_graphic_pane_t1_ParamLimits

0xbaef,	// (0x0005d7ef) list_double_large_graphic_pane_t1

0xbb08,	// (0x0005d808) list_double_large_graphic_pane_t2_ParamLimits

0xbb08,	// (0x0005d808) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x0006130c) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x0006130c) list_double_large_graphic_pane_t

0xbb1a,	// (0x0005d81a) list_double2_large_graphic_pane_g1_ParamLimits

0xbb1a,	// (0x0005d81a) list_double2_large_graphic_pane_g1

0xbb26,	// (0x0005d826) list_double2_large_graphic_pane_g2_ParamLimits

0xbb26,	// (0x0005d826) list_double2_large_graphic_pane_g2

0xba73,	// (0x0005d773) list_double2_large_graphic_pane_g3_ParamLimits

0xba73,	// (0x0005d773) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x00061311) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x00061311) list_double2_large_graphic_pane_g

0xbb37,	// (0x0005d837) list_double2_large_graphic_pane_t1_ParamLimits

0xbb37,	// (0x0005d837) list_double2_large_graphic_pane_t1

0xbb4d,	// (0x0005d84d) list_double2_large_graphic_pane_t2_ParamLimits

0xbb4d,	// (0x0005d84d) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x00061318) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x00061318) list_double2_large_graphic_pane_t

0xbb5f,	// (0x0005d85f) list_double_heading_pane_g1_ParamLimits

0xbb5f,	// (0x0005d85f) list_double_heading_pane_g1

0xbb70,	// (0x0005d870) list_double_heading_pane_g2_ParamLimits

0xbb70,	// (0x0005d870) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x0006131d) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x0006131d) list_double_heading_pane_g

0xbb7c,	// (0x0005d87c) list_double_heading_pane_t1_ParamLimits

0xbb7c,	// (0x0005d87c) list_double_heading_pane_t1

0xb9e2,	// (0x0005d6e2) list_double_heading_pane_t2_ParamLimits

0xb9e2,	// (0x0005d6e2) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x00061322) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x00061322) list_double_heading_pane_t

0xec5a,	// (0x0006095a) list_double_graphic_heading_pane_g1_ParamLimits

0xec5a,	// (0x0006095a) list_double_graphic_heading_pane_g1

0xbb5f,	// (0x0005d85f) list_double_graphic_heading_pane_g2_ParamLimits

0xbb5f,	// (0x0005d85f) list_double_graphic_heading_pane_g2

0xbb70,	// (0x0005d870) list_double_graphic_heading_pane_g3_ParamLimits

0xbb70,	// (0x0005d870) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x00061327) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x00061327) list_double_graphic_heading_pane_g

0xbb92,	// (0x0005d892) list_double_graphic_heading_pane_t1_ParamLimits

0xbb92,	// (0x0005d892) list_double_graphic_heading_pane_t1

0xba95,	// (0x0005d795) list_double_graphic_heading_pane_t2_ParamLimits

0xba95,	// (0x0005d795) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x0006132e) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x0006132e) list_double_graphic_heading_pane_t

0xbba8,	// (0x0005d8a8) list_double_time_pane_g1_ParamLimits

0xbba8,	// (0x0005d8a8) list_double_time_pane_g1

0xec66,	// (0x00060966) list_double_time_pane_g2_ParamLimits

0xec66,	// (0x00060966) list_double_time_pane_g2

0x0001,

0xf633,	// (0x00061333) list_double_time_pane_g_ParamLimits

0xf633,	// (0x00061333) list_double_time_pane_g

0xbbb9,	// (0x0005d8b9) list_double_time_pane_t1_ParamLimits

0xbbb9,	// (0x0005d8b9) list_double_time_pane_t1

0xbbcf,	// (0x0005d8cf) list_double_time_pane_t2_ParamLimits

0xbbcf,	// (0x0005d8cf) list_double_time_pane_t2

0xbbe1,	// (0x0005d8e1) list_double_time_pane_t3_ParamLimits

0xbbe1,	// (0x0005d8e1) list_double_time_pane_t3

0xbbf3,	// (0x0005d8f3) list_double_time_pane_t4_ParamLimits

0xbbf3,	// (0x0005d8f3) list_double_time_pane_t4

0x0003,

0xf638,	// (0x00061338) list_double_time_pane_t_ParamLimits

0xf638,	// (0x00061338) list_double_time_pane_t

0x0119,	// (0x00051e19) list_setting_pane_g1_ParamLimits

0x0119,	// (0x00051e19) list_setting_pane_g1

0x0125,	// (0x00051e25) list_setting_pane_g2_ParamLimits

0x0125,	// (0x00051e25) list_setting_pane_g2

0x0001,

0xf641,	// (0x00061341) list_setting_pane_g_ParamLimits

0xf641,	// (0x00061341) list_setting_pane_g

0xbc05,	// (0x0005d905) list_setting_pane_t1_ParamLimits

0xbc05,	// (0x0005d905) list_setting_pane_t1

0xbc1f,	// (0x0005d91f) list_setting_pane_t2_ParamLimits

0xbc1f,	// (0x0005d91f) list_setting_pane_t2

0x0002,

0xf646,	// (0x00061346) list_setting_pane_t_ParamLimits

0xf646,	// (0x00061346) list_setting_pane_t

0xbc5e,	// (0x0005d95e) set_value_pane_cp_ParamLimits

0xbc5e,	// (0x0005d95e) set_value_pane_cp

0x0196,	// (0x00051e96) list_setting_number_pane_g1_ParamLimits

0x0196,	// (0x00051e96) list_setting_number_pane_g1

0x01a2,	// (0x00051ea2) list_setting_number_pane_g2_ParamLimits

0x01a2,	// (0x00051ea2) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x0006134d) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x0006134d) list_setting_number_pane_g

0xbc6a,	// (0x0005d96a) list_setting_number_pane_t1_ParamLimits

0xbc6a,	// (0x0005d96a) list_setting_number_pane_t1

0xbc83,	// (0x0005d983) list_setting_number_pane_t2_ParamLimits

0xbc83,	// (0x0005d983) list_setting_number_pane_t2

0xbc9d,	// (0x0005d99d) list_setting_number_pane_t3_ParamLimits

0xbc9d,	// (0x0005d99d) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x00061352) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x00061352) list_setting_number_pane_t

0xbc5e,	// (0x0005d95e) set_value_pane_ParamLimits

0xbc5e,	// (0x0005d95e) set_value_pane

0x35f9,	// (0x000552f9) bg_set_opt_pane_ParamLimits

0x35f9,	// (0x000552f9) bg_set_opt_pane

0x0224,	// (0x00051f24) set_value_pane_t1

0x361a,	// (0x0005531a) slider_set_pane_cp3

0x3623,	// (0x00055323) volume_small_pane_cp

0x362c,	// (0x0005532c) list_form_gen_pane

0x3635,	// (0x00055335) scroll_pane_cp8

0xbce0,	// (0x0005d9e0) form_field_data_pane_ParamLimits

0xbce0,	// (0x0005d9e0) form_field_data_pane

0xbcf9,	// (0x0005d9f9) form_field_data_wide_pane_ParamLimits

0xbcf9,	// (0x0005d9f9) form_field_data_wide_pane

0xbd19,	// (0x0005da19) form_field_popup_pane_ParamLimits

0xbd19,	// (0x0005da19) form_field_popup_pane

0xbd31,	// (0x0005da31) form_field_popup_wide_pane_ParamLimits

0xbd31,	// (0x0005da31) form_field_popup_wide_pane

0x02c0,	// (0x00051fc0) form_field_slider_pane_ParamLimits

0x02c0,	// (0x00051fc0) form_field_slider_pane

0x02d3,	// (0x00051fd3) form_field_slider_wide_pane_ParamLimits

0x02d3,	// (0x00051fd3) form_field_slider_wide_pane

0x3646,	// (0x00055346) data_form_pane

0xbd5a,	// (0x0005da5a) form_field_data_pane_t1

0x39a8,	// (0x000556a8) input_focus_pane

0x0308,	// (0x00052008) data_form_wide_pane

0x0325,	// (0x00052025) form_field_data_wide_pane_t1

0x3334,	// (0x00055034) input_focus_pane_cp6

0xbd74,	// (0x0005da74) form_field_popup_pane_t1

0x39a8,	// (0x000556a8) input_focus_pane_cp7

0x39ca,	// (0x000556ca) list_form_pane

0x0367,	// (0x00052067) form_field_popup_wide_pane_t1

0x39a8,	// (0x000556a8) input_focus_pane_cp8

0x39d6,	// (0x000556d6) list_form_wide_pane

0xbd96,	// (0x0005da96) form_field_slider_pane_t1_ParamLimits

0xbd96,	// (0x0005da96) form_field_slider_pane_t1

0xbdae,	// (0x0005daae) form_field_slider_pane_t2_ParamLimits

0xbdae,	// (0x0005daae) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x00061362) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x00061362) form_field_slider_pane_t

0x2fb1,	// (0x00054cb1) input_focus_pane_cp9_ParamLimits

0x2fb1,	// (0x00054cb1) input_focus_pane_cp9

0xbdc3,	// (0x0005dac3) slider_cont_pane_ParamLimits

0xbdc3,	// (0x0005dac3) slider_cont_pane

0x39e2,	// (0x000556e2) form_field_slider_wide_pane_t1_ParamLimits

0x39e2,	// (0x000556e2) form_field_slider_wide_pane_t1

0x03c3,	// (0x000520c3) form_field_slider_wide_pane_t2_ParamLimits

0x03c3,	// (0x000520c3) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x00061367) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x00061367) form_field_slider_wide_pane_t

0x2fb1,	// (0x00054cb1) input_focus_pane_cp10_ParamLimits

0x2fb1,	// (0x00054cb1) input_focus_pane_cp10

0xbdd7,	// (0x0005dad7) slider_cont_pane_cp1_ParamLimits

0xbdd7,	// (0x0005dad7) slider_cont_pane_cp1

0xbdeb,	// (0x0005daeb) slider_form_pane_cp

0x39f4,	// (0x000556f4) input_focus_pane_g1

0x39fc,	// (0x000556fc) input_focus_pane_g2

0x3a04,	// (0x00055704) input_focus_pane_g3

0x3a0c,	// (0x0005570c) input_focus_pane_g4

0x3a14,	// (0x00055714) input_focus_pane_g5

0x3a1c,	// (0x0005571c) input_focus_pane_g6

0x3a24,	// (0x00055724) input_focus_pane_g7

0x3a2c,	// (0x0005572c) input_focus_pane_g8

0x3a34,	// (0x00055734) input_focus_pane_g9

0xd06b,	// (0x0005ed6b) input_focus_pane_g10

0x0009,

0xf66c,	// (0x0006136c) input_focus_pane_g

0x54dc,	// (0x000571dc) wait_border_pane_g3_copy1

0xbdf3,	// (0x0005daf3) data_form_pane_t1

0xd06b,	// (0x0005ed6b) wait_anim_pane_g1_copy1

0xc875,	// (0x0005e575) data_form_wide_pane_t1

0xbe0d,	// (0x0005db0d) list_form_graphic_pane_cp_ParamLimits

0xbe0d,	// (0x0005db0d) list_form_graphic_pane_cp

0x63fc,	// (0x000580fc) slider_form_pane_g1

0x6405,	// (0x00058105) slider_form_pane_g2

0x0006,

0xf96a,	// (0x0006166a) slider_form_pane_g

0xbe0d,	// (0x0005db0d) list_form_graphic_pane_ParamLimits

0xbe0d,	// (0x0005db0d) list_form_graphic_pane

0x0441,	// (0x00052141) list_form_graphic_pane_g1

0x0449,	// (0x00052149) list_form_graphic_pane_t1_ParamLimits

0x0449,	// (0x00052149) list_form_graphic_pane_t1

0x2d36,	// (0x00054a36) list_highlight_pane_cp5_ParamLimits

0x2d36,	// (0x00054a36) list_highlight_pane_cp5

0x045e,	// (0x0005215e) find_pane_g1

0x3a3c,	// (0x0005573c) input_find_pane

0x0467,	// (0x00052167) input_find_pane_g1_ParamLimits

0x0467,	// (0x00052167) input_find_pane_g1

0x0473,	// (0x00052173) input_find_pane_t1_ParamLimits

0x0473,	// (0x00052173) input_find_pane_t1

0x0488,	// (0x00052188) input_find_pane_t2_ParamLimits

0x0488,	// (0x00052188) input_find_pane_t2

0x0001,

0xf681,	// (0x00061381) input_find_pane_t_ParamLimits

0xf681,	// (0x00061381) input_find_pane_t

0x3a45,	// (0x00055745) input_focus_pane_cp5_ParamLimits

0x3a45,	// (0x00055745) input_focus_pane_cp5

0x3a64,	// (0x00055764) bg_popup_window_pane_cp2_ParamLimits

0x3a64,	// (0x00055764) bg_popup_window_pane_cp2

0x3a71,	// (0x00055771) listscroll_menu_pane_ParamLimits

0x3a71,	// (0x00055771) listscroll_menu_pane

0xbe2b,	// (0x0005db2b) popup_submenu_window_ParamLimits

0xbe2b,	// (0x0005db2b) popup_submenu_window

0x3aa9,	// (0x000557a9) find_popup_pane_g1

0x3ab1,	// (0x000557b1) input_popup_find_pane_cp

0x3abb,	// (0x000557bb) input_focus_pane_cp4_ParamLimits

0x3abb,	// (0x000557bb) input_focus_pane_cp4

0x3ad5,	// (0x000557d5) input_popup_find_pane_t1_ParamLimits

0x3ad5,	// (0x000557d5) input_popup_find_pane_t1

0x2c56,	// (0x00054956) bg_popup_sub_pane_cp

0x3b03,	// (0x00055803) listscroll_popup_sub_pane

0x3b0b,	// (0x0005580b) list_submenu_pane_ParamLimits

0x3b0b,	// (0x0005580b) list_submenu_pane

0x3b1c,	// (0x0005581c) scroll_pane_cp4

0x3b24,	// (0x00055824) list_single_popup_submenu_pane_ParamLimits

0x3b24,	// (0x00055824) list_single_popup_submenu_pane

0x3b38,	// (0x00055838) list_single_popup_submenu_pane_g1

0x3b40,	// (0x00055840) list_single_popup_submenu_pane_t1_ParamLimits

0x3b40,	// (0x00055840) list_single_popup_submenu_pane_t1

0x2fb1,	// (0x00054cb1) bg_active_tab_pane_cp1_ParamLimits

0x2fb1,	// (0x00054cb1) bg_active_tab_pane_cp1

0x3b55,	// (0x00055855) tabs_2_active_pane_g1

0xbe65,	// (0x0005db65) tabs_2_active_pane_t1

0x2fb1,	// (0x00054cb1) bg_passive_tab_pane_cp1_ParamLimits

0x2fb1,	// (0x00054cb1) bg_passive_tab_pane_cp1

0x3b55,	// (0x00055855) tabs_2_passive_pane_g1

0xbe65,	// (0x0005db65) tabs_2_passive_pane_t1

0x2d36,	// (0x00054a36) bg_active_tab_pane_cp4

0xbe77,	// (0x0005db77) tabs_2_long_active_pane_t1

0x4981,	// (0x00056681) bg_passive_tab_pane_cp4

0x1154,	// (0x00052e54) list_single_midp_graphic_pane_g4_ParamLimits

0x2d36,	// (0x00054a36) bg_active_tab_pane_cp5

0xbe8a,	// (0x0005db8a) tabs_3_long_active_pane_t1

0x4981,	// (0x00056681) bg_passive_tab_pane_cp5

0x1154,	// (0x00052e54) list_single_midp_graphic_pane_g4

0x2d36,	// (0x00054a36) bg_popup_window_pane_cp13_ParamLimits

0x2d36,	// (0x00054a36) bg_popup_window_pane_cp13

0x3bb7,	// (0x000558b7) listscroll_popup_fast_pane_ParamLimits

0x3bb7,	// (0x000558b7) listscroll_popup_fast_pane

0x3bc6,	// (0x000558c6) grid_popup_fast_pane_ParamLimits

0x3bc6,	// (0x000558c6) grid_popup_fast_pane

0x3bd8,	// (0x000558d8) scroll_pane_cp9_ParamLimits

0x3bd8,	// (0x000558d8) scroll_pane_cp9

0x7d19,	// (0x00059a19) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7d19,	// (0x00059a19) list_single_graphic_hl_pane_t1_cp2

0x3bfc,	// (0x000558fc) input_focus_pane_cp20_ParamLimits

0x3bfc,	// (0x000558fc) input_focus_pane_cp20

0x3c0a,	// (0x0005590a) query_popup_data_pane_t1_ParamLimits

0x3c0a,	// (0x0005590a) query_popup_data_pane_t1

0x3c1d,	// (0x0005591d) query_popup_data_pane_t2_ParamLimits

0x3c1d,	// (0x0005591d) query_popup_data_pane_t2

0x3c63,	// (0x00055963) query_popup_data_pane_t3_ParamLimits

0x3c63,	// (0x00055963) query_popup_data_pane_t3

0x3ca4,	// (0x000559a4) query_popup_data_pane_t4_ParamLimits

0x3ca4,	// (0x000559a4) query_popup_data_pane_t4

0x3ce0,	// (0x000559e0) query_popup_data_pane_t5_ParamLimits

0x3ce0,	// (0x000559e0) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x00061386) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x00061386) query_popup_data_pane_t

0x39f4,	// (0x000556f4) bg_set_opt_pane_g1

0x39fc,	// (0x000556fc) bg_set_opt_pane_g2

0x3a04,	// (0x00055704) bg_set_opt_pane_g3

0x3a0c,	// (0x0005570c) bg_set_opt_pane_g4

0x3a14,	// (0x00055714) bg_set_opt_pane_g5

0x3a1c,	// (0x0005571c) bg_set_opt_pane_g6

0x3a24,	// (0x00055724) bg_set_opt_pane_g7

0x3a2c,	// (0x0005572c) bg_set_opt_pane_g8

0x3a34,	// (0x00055734) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x00061391) bg_set_opt_pane_g

0x07a8,	// (0x000524a8) control_top_pane_stacon_ParamLimits

0x07a8,	// (0x000524a8) control_top_pane_stacon

0x07fb,	// (0x000524fb) signal_pane_stacon_ParamLimits

0x07fb,	// (0x000524fb) signal_pane_stacon

0x42eb,	// (0x00055feb) stacon_top_pane_g1_ParamLimits

0x42eb,	// (0x00055feb) stacon_top_pane_g1

0x0820,	// (0x00052520) title_pane_stacon_ParamLimits

0x0820,	// (0x00052520) title_pane_stacon

0x084a,	// (0x0005254a) uni_indicator_pane_stacon_ParamLimits

0x084a,	// (0x0005254a) uni_indicator_pane_stacon

0x085f,	// (0x0005255f) battery_pane_stacon_ParamLimits

0x085f,	// (0x0005255f) battery_pane_stacon

0x08a3,	// (0x000525a3) control_bottom_pane_stacon_ParamLimits

0x08a3,	// (0x000525a3) control_bottom_pane_stacon

0x08c6,	// (0x000525c6) navi_pane_stacon_ParamLimits

0x08c6,	// (0x000525c6) navi_pane_stacon

0x430d,	// (0x0005600d) stacon_bottom_pane_g1_ParamLimits

0x430d,	// (0x0005600d) stacon_bottom_pane_g1

0x049d,	// (0x0005219d) aid_levels_signal_lsc_ParamLimits

0x049d,	// (0x0005219d) aid_levels_signal_lsc

0x04b3,	// (0x000521b3) signal_pane_stacon_g1_ParamLimits

0x04b3,	// (0x000521b3) signal_pane_stacon_g1

0x04c7,	// (0x000521c7) signal_pane_stacon_g2_ParamLimits

0x04c7,	// (0x000521c7) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x000613a4) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x000613a4) signal_pane_stacon_g

0x04fc,	// (0x000521fc) title_pane_stacon_t1_ParamLimits

0x04fc,	// (0x000521fc) title_pane_stacon_t1

0x3d24,	// (0x00055a24) uni_indicator_pane_stacon_g1

0x3d2e,	// (0x00055a2e) uni_indicator_pane_stacon_g2

0x3d38,	// (0x00055a38) uni_indicator_pane_stacon_g3

0x3d42,	// (0x00055a42) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x000613b0) uni_indicator_pane_stacon_g

0x0521,	// (0x00052221) control_top_pane_stacon_g1

0x0529,	// (0x00052229) control_top_pane_stacon_t1_ParamLimits

0x0529,	// (0x00052229) control_top_pane_stacon_t1

0x0560,	// (0x00052260) aid_levels_battery_lsc_ParamLimits

0x0560,	// (0x00052260) aid_levels_battery_lsc

0x0577,	// (0x00052277) battery_pane_stacon_g1_ParamLimits

0x0577,	// (0x00052277) battery_pane_stacon_g1

0x058a,	// (0x0005228a) battery_pane_stacon_g2_ParamLimits

0x058a,	// (0x0005228a) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x000613b9) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x000613b9) battery_pane_stacon_g

0x05c8,	// (0x000522c8) navi_icon_pane_stacon

0x05dc,	// (0x000522dc) navi_navi_pane_stacon

0x05c8,	// (0x000522c8) navi_text_pane_stacon

0x0521,	// (0x00052221) control_bottom_pane_stacon_g1

0x05f0,	// (0x000522f0) control_bottom_pane_stacon_t1_ParamLimits

0x05f0,	// (0x000522f0) control_bottom_pane_stacon_t1

0xbe9c,	// (0x0005db9c) grid_app_pane_ParamLimits

0xbe9c,	// (0x0005db9c) grid_app_pane

0xbed4,	// (0x0005dbd4) scroll_pane_cp15_ParamLimits

0xbed4,	// (0x0005dbd4) scroll_pane_cp15

0xbee9,	// (0x0005dbe9) cell_app_pane_ParamLimits

0xbee9,	// (0x0005dbe9) cell_app_pane

0xbf2e,	// (0x0005dc2e) cell_app_pane_g1_ParamLimits

0xbf2e,	// (0x0005dc2e) cell_app_pane_g1

0x3de7,	// (0x00055ae7) cell_app_pane_g2_ParamLimits

0x3de7,	// (0x00055ae7) cell_app_pane_g2

0x0001,

0xf6be,	// (0x000613be) cell_app_pane_g_ParamLimits

0xf6be,	// (0x000613be) cell_app_pane_g

0xbf52,	// (0x0005dc52) cell_app_pane_t1_ParamLimits

0xbf52,	// (0x0005dc52) cell_app_pane_t1

0x3e0a,	// (0x00055b0a) grid_highlight_pane_ParamLimits

0x3e0a,	// (0x00055b0a) grid_highlight_pane

0x39f4,	// (0x000556f4) cell_highlight_pane_g1

0x39fc,	// (0x000556fc) cell_highlight_pane_g2

0x3a04,	// (0x00055704) cell_highlight_pane_g3

0x3a0c,	// (0x0005570c) cell_highlight_pane_g4

0x3a14,	// (0x00055714) cell_highlight_pane_g5

0x3a1c,	// (0x0005571c) cell_highlight_pane_g6

0x3a24,	// (0x00055724) cell_highlight_pane_g7

0x3a2c,	// (0x0005572c) cell_highlight_pane_g8

0x3a34,	// (0x00055734) cell_highlight_pane_g9

0xd06b,	// (0x0005ed6b) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x0006136c) cell_highlight_pane_g

0x3e1b,	// (0x00055b1b) bg_scroll_pane

0x063a,	// (0x0005233a) scroll_handle_pane

0x3e62,	// (0x00055b62) scroll_bg_pane_g1

0x3e77,	// (0x00055b77) scroll_bg_pane_g2

0x3e8f,	// (0x00055b8f) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x000613c3) scroll_bg_pane_g

0x3ea4,	// (0x00055ba4) scroll_handle_focus_pane_ParamLimits

0x3ea4,	// (0x00055ba4) scroll_handle_focus_pane

0x3e62,	// (0x00055b62) scroll_handle_pane_g1

0x3eb1,	// (0x00055bb1) scroll_handle_pane_g2

0x3e8f,	// (0x00055b8f) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x000613ca) scroll_handle_pane_g

0x3abb,	// (0x000557bb) bg_popup_sub_pane_cp21_ParamLimits

0x3abb,	// (0x000557bb) bg_popup_sub_pane_cp21

0x3ec5,	// (0x00055bc5) popup_fep_japan_predictive_window_t1_ParamLimits

0x3ec5,	// (0x00055bc5) popup_fep_japan_predictive_window_t1

0x3edf,	// (0x00055bdf) popup_fep_japan_predictive_window_t2_ParamLimits

0x3edf,	// (0x00055bdf) popup_fep_japan_predictive_window_t2

0x3f12,	// (0x00055c12) popup_fep_japan_predictive_window_t3_ParamLimits

0x3f12,	// (0x00055c12) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x000613d1) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x000613d1) popup_fep_japan_predictive_window_t

0x2c56,	// (0x00054956) bg_popup_sub_pane_cp23

0x3f49,	// (0x00055c49) listscroll_japin_cand_pane

0x3f51,	// (0x00055c51) popup_fep_japan_candidate_window_t1

0x3f5f,	// (0x00055c5f) candidate_pane_ParamLimits

0x3f5f,	// (0x00055c5f) candidate_pane

0x3f71,	// (0x00055c71) scroll_pane_cp30

0x3f79,	// (0x00055c79) list_single_popup_jap_candidate_pane_ParamLimits

0x3f79,	// (0x00055c79) list_single_popup_jap_candidate_pane

0x2c56,	// (0x00054956) list_highlight_pane_cp30

0x3f8e,	// (0x00055c8e) list_single_popup_jap_candidate_pane_t1

0x3f9d,	// (0x00055c9d) level_1_signal

0x3faf,	// (0x00055caf) level_2_signal

0x3fc2,	// (0x00055cc2) level_3_signal

0x3fd5,	// (0x00055cd5) level_4_signal

0x3fe8,	// (0x00055ce8) level_5_signal

0x3ffb,	// (0x00055cfb) level_6_signal

0x400e,	// (0x00055d0e) level_7_signal

0x3f9d,	// (0x00055c9d) level_1_battery

0x3faf,	// (0x00055caf) level_2_battery

0x3fc2,	// (0x00055cc2) level_3_battery

0x3fd5,	// (0x00055cd5) level_4_battery

0x3fe8,	// (0x00055ce8) level_5_battery

0x3ffb,	// (0x00055cfb) level_6_battery

0x400e,	// (0x00055d0e) level_7_battery

0x4039,	// (0x00055d39) list_menu_pane_ParamLimits

0x4039,	// (0x00055d39) list_menu_pane

0x404f,	// (0x00055d4f) scroll_pane_cp25_ParamLimits

0x404f,	// (0x00055d4f) scroll_pane_cp25

0x4068,	// (0x00055d68) list_double2_graphic_pane_cp2_ParamLimits

0x4068,	// (0x00055d68) list_double2_graphic_pane_cp2

0x4068,	// (0x00055d68) list_double2_large_graphic_pane_cp2_ParamLimits

0x4068,	// (0x00055d68) list_double2_large_graphic_pane_cp2

0x4068,	// (0x00055d68) list_double2_pane_cp2_ParamLimits

0x4068,	// (0x00055d68) list_double2_pane_cp2

0x4068,	// (0x00055d68) list_double_graphic_pane_cp2_ParamLimits

0x4068,	// (0x00055d68) list_double_graphic_pane_cp2

0x4068,	// (0x00055d68) list_double_large_graphic_pane_cp2_ParamLimits

0x4068,	// (0x00055d68) list_double_large_graphic_pane_cp2

0x4068,	// (0x00055d68) list_double_number_pane_cp2_ParamLimits

0x4068,	// (0x00055d68) list_double_number_pane_cp2

0x4068,	// (0x00055d68) list_double_pane_cp2_ParamLimits

0x4068,	// (0x00055d68) list_double_pane_cp2

0xbf69,	// (0x0005dc69) list_single_2graphic_pane_cp2_ParamLimits

0xbf69,	// (0x0005dc69) list_single_2graphic_pane_cp2

0xbf69,	// (0x0005dc69) list_single_graphic_heading_pane_cp2_ParamLimits

0xbf69,	// (0x0005dc69) list_single_graphic_heading_pane_cp2

0xbf69,	// (0x0005dc69) list_single_graphic_pane_cp2_ParamLimits

0xbf69,	// (0x0005dc69) list_single_graphic_pane_cp2

0xbf69,	// (0x0005dc69) list_single_heading_pane_cp2_ParamLimits

0xbf69,	// (0x0005dc69) list_single_heading_pane_cp2

0x40a5,	// (0x00055da5) list_single_large_graphic_pane_cp2_ParamLimits

0x40a5,	// (0x00055da5) list_single_large_graphic_pane_cp2

0xbf69,	// (0x0005dc69) list_single_number_heading_pane_cp2_ParamLimits

0xbf69,	// (0x0005dc69) list_single_number_heading_pane_cp2

0xbf69,	// (0x0005dc69) list_single_number_pane_cp2_ParamLimits

0xbf69,	// (0x0005dc69) list_single_number_pane_cp2

0xd075,	// (0x0005ed75) list_single_pane_cp2_ParamLimits

0xd075,	// (0x0005ed75) list_single_pane_cp2

0x413a,	// (0x00055e3a) bg_popup_sub_pane_cp22

0x06ec,	// (0x000523ec) popup_side_volume_key_window_g1

0x0716,	// (0x00052416) popup_side_volume_key_window_t1

0x0732,	// (0x00052432) volume_small_pane_cp1

0x2fb1,	// (0x00054cb1) bg_popup_sub_pane_cp24_ParamLimits

0x2fb1,	// (0x00054cb1) bg_popup_sub_pane_cp24

0x4150,	// (0x00055e50) fep_china_uni_candidate_pane_ParamLimits

0x4150,	// (0x00055e50) fep_china_uni_candidate_pane

0x4164,	// (0x00055e64) fep_china_uni_entry_pane

0x4174,	// (0x00055e74) popup_fep_china_uni_window_g1

0x4190,	// (0x00055e90) fep_china_uni_entry_pane_g1

0x4198,	// (0x00055e98) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x00061402) fep_china_uni_entry_pane_g

0x41a0,	// (0x00055ea0) fep_entry_item_pane

0x41aa,	// (0x00055eaa) fep_candidate_item_pane

0x41b2,	// (0x00055eb2) fep_china_uni_candidate_pane_g1

0x41ba,	// (0x00055eba) fep_china_uni_candidate_pane_g2

0x41c2,	// (0x00055ec2) fep_china_uni_candidate_pane_g3

0x41ca,	// (0x00055eca) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x00061407) fep_china_uni_candidate_pane_g

0xd06b,	// (0x0005ed6b) fep_entry_item_pane_g1

0x41d2,	// (0x00055ed2) fep_entry_item_pane_t1_ParamLimits

0x41d2,	// (0x00055ed2) fep_entry_item_pane_t1

0x41e8,	// (0x00055ee8) fep_candidate_item_pane_t1_ParamLimits

0x41e8,	// (0x00055ee8) fep_candidate_item_pane_t1

0x41fd,	// (0x00055efd) fep_candidate_item_pane_t2_ParamLimits

0x41fd,	// (0x00055efd) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x00061410) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x00061410) fep_candidate_item_pane_t

0x2d36,	// (0x00054a36) list_highlight_pane_cp31_ParamLimits

0x2d36,	// (0x00054a36) list_highlight_pane_cp31

0x420f,	// (0x00055f0f) level_1_signal_lsc

0x4218,	// (0x00055f18) level_2_signal_lsc

0x4221,	// (0x00055f21) level_3_signal_lsc

0x422a,	// (0x00055f2a) level_4_signal_lsc

0x4233,	// (0x00055f33) level_5_signal_lsc

0x423c,	// (0x00055f3c) level_6_signal_lsc

0x4245,	// (0x00055f45) level_7_signal_lsc

0x4245,	// (0x00055f45) level_1_battery_lsc

0x424e,	// (0x00055f4e) level_2_battery_lsc

0x4257,	// (0x00055f57) level_3_battery_lsc

0x4260,	// (0x00055f60) level_4_battery_lsc

0x4269,	// (0x00055f69) level_5_battery_lsc

0x4272,	// (0x00055f72) level_6_battery_lsc

0x420f,	// (0x00055f0f) level_7_battery_lsc

0x427b,	// (0x00055f7b) scroll_handle_focus_pane_g1

0x4284,	// (0x00055f84) scroll_handle_focus_pane_g2

0x428d,	// (0x00055f8d) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x00061415) scroll_handle_focus_pane_g

0x073a,	// (0x0005243a) list_single_2graphic_pane_g1_ParamLimits

0x073a,	// (0x0005243a) list_single_2graphic_pane_g1

0xb97a,	// (0x0005d67a) list_single_2graphic_pane_g2_ParamLimits

0xb97a,	// (0x0005d67a) list_single_2graphic_pane_g2

0x356a,	// (0x0005526a) list_single_2graphic_pane_g3_ParamLimits

0x356a,	// (0x0005526a) list_single_2graphic_pane_g3

0x0746,	// (0x00052446) list_single_2graphic_pane_g4_ParamLimits

0x0746,	// (0x00052446) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x0006141c) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x0006141c) list_single_2graphic_pane_g

0x0752,	// (0x00052452) list_single_2graphic_pane_t1_ParamLimits

0x0752,	// (0x00052452) list_single_2graphic_pane_t1

0xbf7b,	// (0x0005dc7b) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbf7b,	// (0x0005dc7b) list_double2_graphic_large_graphic_pane_g1

0xbb26,	// (0x0005d826) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbb26,	// (0x0005d826) list_double2_graphic_large_graphic_pane_g2

0xba73,	// (0x0005d773) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xba73,	// (0x0005d773) list_double2_graphic_large_graphic_pane_g3

0xbf8d,	// (0x0005dc8d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbf8d,	// (0x0005dc8d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x00061425) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x00061425) list_double2_graphic_large_graphic_pane_g

0xbf99,	// (0x0005dc99) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbf99,	// (0x0005dc99) list_double2_graphic_large_graphic_pane_t1

0xbfaf,	// (0x0005dcaf) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbfaf,	// (0x0005dcaf) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x0006142e) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x0006142e) list_double2_graphic_large_graphic_pane_t

0x43d8,	// (0x000560d8) popup_fast_swap_window_ParamLimits

0x43d8,	// (0x000560d8) popup_fast_swap_window

0x43f4,	// (0x000560f4) popup_side_volume_key_window

0x4410,	// (0x00056110) stacon_top_pane

0x441a,	// (0x0005611a) status_pane_ParamLimits

0x441a,	// (0x0005611a) status_pane

0xd102,	// (0x0005ee02) status_small_pane

0x2c56,	// (0x00054956) control_pane

0x2c56,	// (0x00054956) stacon_bottom_pane

0x3635,	// (0x00055335) scroll_pane_cp121

0x362c,	// (0x0005532c) set_content_pane

0x4296,	// (0x00055f96) bg_active_tab_pane_g1_cp1

0x429f,	// (0x00055f9f) bg_active_tab_pane_g2_cp1

0x42a8,	// (0x00055fa8) bg_active_tab_pane_g3_cp1

0x4296,	// (0x00055f96) bg_passive_tab_pane_g1_cp1

0x429f,	// (0x00055f9f) bg_passive_tab_pane_g2_cp1

0x42a8,	// (0x00055fa8) bg_passive_tab_pane_g3_cp1

0x42b1,	// (0x00055fb1) bg_active_tab_pane_g1_cp2

0x429f,	// (0x00055f9f) bg_active_tab_pane_g2_cp2

0x42ba,	// (0x00055fba) bg_active_tab_pane_g3_cp2

0x42b1,	// (0x00055fb1) bg_passive_tab_pane_g1_cp2

0x429f,	// (0x00055f9f) bg_passive_tab_pane_g2_cp2

0x42ba,	// (0x00055fba) bg_passive_tab_pane_g3_cp2

0x42c3,	// (0x00055fc3) bg_active_tab_pane_g1_cp3

0x429f,	// (0x00055f9f) bg_active_tab_pane_g2_cp3

0x42cc,	// (0x00055fcc) bg_active_tab_pane_g3_cp3

0x42c3,	// (0x00055fc3) bg_passive_tab_pane_g1_cp3

0x429f,	// (0x00055f9f) bg_passive_tab_pane_g2_cp3

0x42cc,	// (0x00055fcc) bg_passive_tab_pane_g3_cp3

0x42d5,	// (0x00055fd5) bg_active_tab_pane_g1_cp4

0x429f,	// (0x00055f9f) bg_active_tab_pane_g2_cp4

0x42e0,	// (0x00055fe0) bg_active_tab_pane_g3_cp4

0x42d5,	// (0x00055fd5) bg_passive_tab_pane_g1_cp4

0x429f,	// (0x00055f9f) bg_passive_tab_pane_g2_cp4

0x42e0,	// (0x00055fe0) bg_passive_tab_pane_g3_cp4

0x4329,	// (0x00056029) bg_active_tab_pane_g1_cp5

0x429f,	// (0x00055f9f) bg_active_tab_pane_g2_cp5

0x4332,	// (0x00056032) bg_active_tab_pane_g3_cp5

0x4329,	// (0x00056029) bg_passive_tab_pane_g1_cp5

0x429f,	// (0x00055f9f) bg_passive_tab_pane_g2_cp5

0x4332,	// (0x00056032) bg_passive_tab_pane_g3_cp5

0x69ee,	// (0x000586ee) list_set_graphic_pane_ParamLimits

0x69ee,	// (0x000586ee) list_set_graphic_pane

0x2c56,	// (0x00054956) bg_set_opt_pane_cp4

0x435b,	// (0x0005605b) list_set_graphic_pane_g1_ParamLimits

0x435b,	// (0x0005605b) list_set_graphic_pane_g1

0x4367,	// (0x00056067) list_set_graphic_pane_g2_ParamLimits

0x4367,	// (0x00056067) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x00061433) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x00061433) list_set_graphic_pane_g

0x0009,

0xfa9c,	// (0x0006179c) volume_small_pane_cp_g

0x438b,	// (0x0005608b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x438b,	// (0x0005608b) list_double2_large_graphic_pane_g1_cp2

0x4397,	// (0x00056097) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4397,	// (0x00056097) list_double2_large_graphic_pane_g2_cp2

0x43a8,	// (0x000560a8) list_double2_large_graphic_pane_g3_cp2

0x43b0,	// (0x000560b0) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x43b0,	// (0x000560b0) list_double2_large_graphic_pane_t1_cp2

0x43c6,	// (0x000560c6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x43c6,	// (0x000560c6) list_double2_large_graphic_pane_t2_cp2

0x5faf,	// (0x00057caf) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5faf,	// (0x00057caf) list_double_large_graphic_pane_g1_cp2

0x5fc0,	// (0x00057cc0) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5fc0,	// (0x00057cc0) list_double_large_graphic_pane_g2_cp2

0x4541,	// (0x00056241) list_double_large_graphic_pane_g3_cp2

0x5fd1,	// (0x00057cd1) list_double_large_graphic_pane_g4_cp

0x5fd9,	// (0x00057cd9) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5fd9,	// (0x00057cd9) list_double_large_graphic_pane_t1_cp2

0x5ff0,	// (0x00057cf0) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5ff0,	// (0x00057cf0) list_double_large_graphic_pane_t2_cp2

0x4433,	// (0x00056133) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4433,	// (0x00056133) list_double2_graphic_pane_g1_cp2

0x4441,	// (0x00056141) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4441,	// (0x00056141) list_double2_graphic_pane_g2_cp2

0x4452,	// (0x00056152) list_double2_graphic_pane_g3_cp2

0x445c,	// (0x0005615c) list_double2_graphic_pane_t1_cp2_ParamLimits

0x445c,	// (0x0005615c) list_double2_graphic_pane_t1_cp2

0x4472,	// (0x00056172) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4472,	// (0x00056172) list_double2_graphic_pane_t2_cp2

0x4484,	// (0x00056184) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4484,	// (0x00056184) list_single_number_heading_pane_g1_cp2

0x4490,	// (0x00056190) list_single_number_heading_pane_g2_cp2

0x4498,	// (0x00056198) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4498,	// (0x00056198) list_single_number_heading_pane_t1_cp2

0x44ae,	// (0x000561ae) list_single_number_heading_pane_t2_cp2_ParamLimits

0x44ae,	// (0x000561ae) list_single_number_heading_pane_t2_cp2

0x44c0,	// (0x000561c0) list_single_number_heading_pane_t3_cp2_ParamLimits

0x44c0,	// (0x000561c0) list_single_number_heading_pane_t3_cp2

0x4484,	// (0x00056184) list_single_heading_pane_g1_cp2_ParamLimits

0x4484,	// (0x00056184) list_single_heading_pane_g1_cp2

0x4490,	// (0x00056190) list_single_heading_pane_g2_cp2

0x4498,	// (0x00056198) list_single_heading_pane_t1_cp2_ParamLimits

0x4498,	// (0x00056198) list_single_heading_pane_t1_cp2

0x5db7,	// (0x00057ab7) list_single_heading_pane_t2_cp2_ParamLimits

0x5db7,	// (0x00057ab7) list_single_heading_pane_t2_cp2

0x5cff,	// (0x000579ff) list_double_graphic_pane_g1_cp2_ParamLimits

0x5cff,	// (0x000579ff) list_double_graphic_pane_g1_cp2

0x5d0b,	// (0x00057a0b) list_double_graphic_pane_g2_cp2_ParamLimits

0x5d0b,	// (0x00057a0b) list_double_graphic_pane_g2_cp2

0x5d1a,	// (0x00057a1a) list_double_graphic_pane_g3_cp2

0x5d22,	// (0x00057a22) list_double_graphic_pane_t1_cp2_ParamLimits

0x5d22,	// (0x00057a22) list_double_graphic_pane_t1_cp2

0x5d38,	// (0x00057a38) list_double_graphic_pane_t2_cp2_ParamLimits

0x5d38,	// (0x00057a38) list_double_graphic_pane_t2_cp2

0x4535,	// (0x00056235) list_double_number_pane_g1_cp2_ParamLimits

0x4535,	// (0x00056235) list_double_number_pane_g1_cp2

0x4541,	// (0x00056241) list_double_number_pane_g2_cp2

0x5cc3,	// (0x000579c3) list_double_number_pane_t1_cp2_ParamLimits

0x5cc3,	// (0x000579c3) list_double_number_pane_t1_cp2

0x5cd7,	// (0x000579d7) list_double_number_pane_t2_cp2_ParamLimits

0x5cd7,	// (0x000579d7) list_double_number_pane_t2_cp2

0x5ced,	// (0x000579ed) list_double_number_pane_t3_cp2_ParamLimits

0x5ced,	// (0x000579ed) list_double_number_pane_t3_cp2

0x5bac,	// (0x000578ac) list_single_graphic_pane_g1_cp2_ParamLimits

0x5bac,	// (0x000578ac) list_single_graphic_pane_g1_cp2

0x45a2,	// (0x000562a2) list_single_graphic_pane_g2_cp2_ParamLimits

0x45a2,	// (0x000562a2) list_single_graphic_pane_g2_cp2

0x45ae,	// (0x000562ae) list_single_graphic_pane_g3_cp2

0x5b82,	// (0x00057882) list_single_graphic_pane_t1_cp2_ParamLimits

0x5b82,	// (0x00057882) list_single_graphic_pane_t1_cp2

0x45a2,	// (0x000562a2) list_single_number_pane_g1_cp2_ParamLimits

0x45a2,	// (0x000562a2) list_single_number_pane_g1_cp2

0x45ae,	// (0x000562ae) list_single_number_pane_g2_cp2

0x5b82,	// (0x00057882) list_single_number_pane_t1_cp2_ParamLimits

0x5b82,	// (0x00057882) list_single_number_pane_t1_cp2

0x5b98,	// (0x00057898) list_single_number_pane_t2_cp2_ParamLimits

0x5b98,	// (0x00057898) list_single_number_pane_t2_cp2

0x4397,	// (0x00056097) list_double2_pane_g1_cp2_ParamLimits

0x4397,	// (0x00056097) list_double2_pane_g1_cp2

0x43a8,	// (0x000560a8) list_double2_pane_g2_cp2

0x450d,	// (0x0005620d) list_double2_pane_t1_cp2_ParamLimits

0x450d,	// (0x0005620d) list_double2_pane_t1_cp2

0x4523,	// (0x00056223) list_double2_pane_t2_cp2_ParamLimits

0x4523,	// (0x00056223) list_double2_pane_t2_cp2

0x4535,	// (0x00056235) list_double_pane_g1_cp2_ParamLimits

0x4535,	// (0x00056235) list_double_pane_g1_cp2

0x4541,	// (0x00056241) list_double_pane_g2_cp2

0x4549,	// (0x00056249) list_double_pane_t1_cp2_ParamLimits

0x4549,	// (0x00056249) list_double_pane_t1_cp2

0x455f,	// (0x0005625f) list_double_pane_t2_cp2_ParamLimits

0x455f,	// (0x0005625f) list_double_pane_t2_cp2

0x4592,	// (0x00056292) list_single_pane_cp2_g3

0x45a2,	// (0x000562a2) list_single_pane_g1_cp2_ParamLimits

0x45a2,	// (0x000562a2) list_single_pane_g1_cp2

0x45ae,	// (0x000562ae) list_single_pane_g2_cp2

0x45b6,	// (0x000562b6) list_single_pane_t1_cp2_ParamLimits

0x45b6,	// (0x000562b6) list_single_pane_t1_cp2

0x45ce,	// (0x000562ce) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x45ce,	// (0x000562ce) list_single_large_graphic_pane_g1_cp2

0x399c,	// (0x0005569c) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x399c,	// (0x0005569c) list_single_large_graphic_pane_g2_cp2

0x45da,	// (0x000562da) list_single_large_graphic_pane_g3_cp2

0x45e2,	// (0x000562e2) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x45e2,	// (0x000562e2) list_single_large_graphic_pane_g4_cp1

0x45fc,	// (0x000562fc) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x45fc,	// (0x000562fc) list_single_large_graphic_pane_t1_cp2

0x5b4e,	// (0x0005784e) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5b4e,	// (0x0005784e) list_single_graphic_heading_pane_g1_cp2

0x5b1b,	// (0x0005781b) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5b1b,	// (0x0005781b) list_single_graphic_heading_pane_g4_cp2

0x45ae,	// (0x000562ae) list_single_graphic_heading_pane_g5_cp2

0x5b5a,	// (0x0005785a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5b5a,	// (0x0005785a) list_single_graphic_heading_pane_t1_cp2

0x5b70,	// (0x00057870) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5b70,	// (0x00057870) list_single_graphic_heading_pane_t2_cp2

0x5b0f,	// (0x0005780f) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5b0f,	// (0x0005780f) list_single_2graphic_pane_g1_cp2

0x5b1b,	// (0x0005781b) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5b1b,	// (0x0005781b) list_single_2graphic_pane_g2_cp2

0x45ae,	// (0x000562ae) list_single_2graphic_pane_g3_cp2

0x5b2c,	// (0x0005782c) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5b2c,	// (0x0005782c) list_single_2graphic_pane_g4_cp2

0x5b38,	// (0x00057838) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5b38,	// (0x00057838) list_single_2graphic_pane_t1_cp2

0xd06b,	// (0x0005ed6b) list_highlight_pane_g10_cp1

0x56e7,	// (0x000573e7) list_highlight_pane_g1_cp1

0x56ef,	// (0x000573ef) list_highlight_pane_g2_cp1

0x56f7,	// (0x000573f7) list_highlight_pane_g3_cp1

0x56ff,	// (0x000573ff) list_highlight_pane_g4_cp1

0x5707,	// (0x00057407) list_highlight_pane_g5_cp1

0x570f,	// (0x0005740f) list_highlight_pane_g6_cp1

0x5717,	// (0x00057417) list_highlight_pane_g7_cp1

0x571f,	// (0x0005741f) list_highlight_pane_g8_cp1

0x5727,	// (0x00057427) list_highlight_pane_g9_cp1

0xd73a,	// (0x0005f43a) form_field_slider_pane_t3

0xd748,	// (0x0005f448) form_field_slider_pane_t4

0x5623,	// (0x00057323) slider_form_pane_ParamLimits

0x5623,	// (0x00057323) slider_form_pane

0x2c56,	// (0x00054956) control_abbreviations

0x2c56,	// (0x00054956) control_conventions

0x2c56,	// (0x00054956) control_definitions

0x2c56,	// (0x00054956) format_table_attribute

0x5e01,	// (0x00057b01) bg_popup_preview_window_pane_g9

0x2c56,	// (0x00054956) format_table_data2

0x2c56,	// (0x00054956) format_table_data3

0x2c56,	// (0x00054956) format_table_data_example

0x0008,

0x2c56,	// (0x00054956) intro_purpose

0xf8ca,	// (0x000615ca) bg_popup_preview_window_pane_g

0x2c56,	// (0x00054956) texts_category

0x2c56,	// (0x00054956) texts_graphics

0x4612,	// (0x00056312) text_digital

0x4621,	// (0x00056321) text_primary

0x4630,	// (0x00056330) text_primary_small

0x463f,	// (0x0005633f) text_secondary

0x464e,	// (0x0005634e) text_title

0x6522,	// (0x00058222) bg_passive_tab_pane_g1_cp3_srt

0x429f,	// (0x00055f9f) bg_passive_tab_pane_g2_cp3_srt

0x652b,	// (0x0005822b) bg_passive_tab_pane_g3_cp3_srt

0x2fb1,	// (0x00054cb1) bg_active_tab_pane_cp3_srt_ParamLimits

0x2fb1,	// (0x00054cb1) bg_active_tab_pane_cp3_srt

0x6534,	// (0x00058234) tabs_4_active_pane_srt_g1

0xda8d,	// (0x0005f78d) tabs_4_active_pane_srt_t1_ParamLimits

0xda8d,	// (0x0005f78d) tabs_4_active_pane_srt_t1

0x6522,	// (0x00058222) bg_active_tab_pane_g1_cp3_copy1

0x429f,	// (0x00055f9f) bg_active_tab_pane_g2_cp3_copy1

0x652b,	// (0x0005822b) bg_active_tab_pane_g3_cp3_copy1

0x2d36,	// (0x00054a36) tabs_2_long_active_pane_srt_ParamLimits

0x2d36,	// (0x00054a36) tabs_2_long_active_pane_srt

0x2d36,	// (0x00054a36) tabs_2_long_passive_pane_srt_ParamLimits

0x2d36,	// (0x00054a36) tabs_2_long_passive_pane_srt

0x4981,	// (0x00056681) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4981,	// (0x00056681) bg_passive_tab_pane_cp4_srt

0x622f,	// (0x00057f2f) bg_passive_tab_pane_g1_cp4_srt

0x429f,	// (0x00055f9f) bg_passive_tab_pane_g2_cp4_srt

0x6238,	// (0x00057f38) bg_passive_tab_pane_g3_cp4_srt

0x2d36,	// (0x00054a36) bg_active_tab_pane_cp4_srt_ParamLimits

0x2d36,	// (0x00054a36) bg_active_tab_pane_cp4_srt

0xd8a5,	// (0x0005f5a5) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd8a5,	// (0x0005f5a5) tabs_2_long_active_pane_srt_t1

0x622f,	// (0x00057f2f) bg_active_tab_pane_g1_cp4_srt

0x429f,	// (0x00055f9f) bg_active_tab_pane_g2_cp4_srt

0x6238,	// (0x00057f38) bg_active_tab_pane_g3_cp4_srt

0x2fb1,	// (0x00054cb1) tabs_3_long_active_pane_srt_ParamLimits

0x2fb1,	// (0x00054cb1) tabs_3_long_active_pane_srt

0x2fb1,	// (0x00054cb1) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2fb1,	// (0x00054cb1) tabs_3_long_passive_pane_cp_srt

0x2fb1,	// (0x00054cb1) tabs_3_long_passive_pane_srt_ParamLimits

0x2fb1,	// (0x00054cb1) tabs_3_long_passive_pane_srt

0x4981,	// (0x00056681) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4981,	// (0x00056681) bg_passive_tab_pane_cp5_srt

0x4329,	// (0x00056029) bg_passive_tab_pane_g1_cp5_srt

0x429f,	// (0x00055f9f) bg_passive_tab_pane_g2_cp5_srt

0x4332,	// (0x00056032) bg_passive_tab_pane_g3_cp5_srt

0x2d36,	// (0x00054a36) bg_active_tab_pane_cp5_srt_ParamLimits

0x2d36,	// (0x00054a36) bg_active_tab_pane_cp5_srt

0xd88f,	// (0x0005f58f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd88f,	// (0x0005f58f) tabs_3_long_active_pane_srt_t1

0x4329,	// (0x00056029) bg_active_tab_pane_g1_cp5_srt

0x429f,	// (0x00055f9f) bg_active_tab_pane_g2_cp5_srt

0x4332,	// (0x00056032) bg_active_tab_pane_g3_cp5_srt

0x620f,	// (0x00057f0f) navi_text_pane_srt_t1

0x6207,	// (0x00057f07) navi_icon_pane_srt_g1

0x4823,	// (0x00056523) midp_editing_number_pane_srt

0x465d,	// (0x0005635d) midp_ticker_pane_srt

0x482b,	// (0x0005652b) midp_ticker_pane_srt_g1

0x4833,	// (0x00056533) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x00061452) midp_ticker_pane_srt_g

0x483b,	// (0x0005653b) midp_ticker_pane_srt_t1

0x61f8,	// (0x00057ef8) midp_editing_number_pane_t1_copy1

0xd10d,	// (0x0005ee0d) listscroll_midp_pane

0xd10d,	// (0x0005ee0d) midp_form_pane

0x46d5,	// (0x000563d5) midp_info_popup_window_ParamLimits

0x46d5,	// (0x000563d5) midp_info_popup_window

0x3abb,	// (0x000557bb) bg_popup_sub_pane_cp50_ParamLimits

0x3abb,	// (0x000557bb) bg_popup_sub_pane_cp50

0x52ff,	// (0x00056fff) listscroll_midp_info_pane_ParamLimits

0x52ff,	// (0x00056fff) listscroll_midp_info_pane

0x52df,	// (0x00056fdf) listscroll_form_midp_pane_ParamLimits

0x52df,	// (0x00056fdf) listscroll_form_midp_pane

0x52eb,	// (0x00056feb) scroll_bar_cp050

0x52df,	// (0x00056fdf) list_midp_pane

0x6f9d,	// (0x00058c9d) signal_pane_g2_cp

0x51f9,	// (0x00056ef9) listscroll_midp_info_pane_t1_ParamLimits

0x51f9,	// (0x00056ef9) listscroll_midp_info_pane_t1

0x5211,	// (0x00056f11) listscroll_midp_info_pane_t2_ParamLimits

0x5211,	// (0x00056f11) listscroll_midp_info_pane_t2

0x524f,	// (0x00056f4f) listscroll_midp_info_pane_t3_ParamLimits

0x524f,	// (0x00056f4f) listscroll_midp_info_pane_t3

0x5289,	// (0x00056f89) listscroll_midp_info_pane_t4_ParamLimits

0x5289,	// (0x00056f89) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x00061505) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x00061505) listscroll_midp_info_pane_t

0x3b1c,	// (0x0005581c) scroll_pane_cp21

0x5197,	// (0x00056e97) form_midp_field_choice_group_pane

0x51a0,	// (0x00056ea0) form_midp_field_text_pane

0x51df,	// (0x00056edf) form_midp_field_time_pane

0x51e7,	// (0x00056ee7) form_midp_gauge_slider_pane

0x51f0,	// (0x00056ef0) form_midp_gauge_wait_pane

0x2c56,	// (0x00054956) form_midp_image_pane

0xc860,	// (0x0005e560) list_single_midp_pane_ParamLimits

0xc860,	// (0x0005e560) list_single_midp_pane

0xd719,	// (0x0005f419) form_midp_field_text_pane_t1

0x4f1f,	// (0x00056c1f) input_focus_pane_cp050

0x5186,	// (0x00056e86) list_midp_form_text_pane

0x511e,	// (0x00056e1e) form_midp_field_choice_group_pane_t1

0x512c,	// (0x00056e2c) input_focus_pane_cp051

0x5140,	// (0x00056e40) list_midp_choice_pane

0x2c56,	// (0x00054956) status_idle_pane

0x5102,	// (0x00056e02) form_midp_field_time_pane_t1

0xd06b,	// (0x0005ed6b) wait_anim_pane_g2_copy1

0x5110,	// (0x00056e10) form_midp_field_time_pane_t2

0x0001,

0x4783,	// (0x00056483) aid_navinavi_width_2_pane

0xf800,	// (0x00061500) form_midp_field_time_pane_t

0x2c56,	// (0x00054956) input_focus_pane_cp052

0x2c56,	// (0x00054956) bg_input_focus_pane_cp040

0x50c2,	// (0x00056dc2) form_midp_gauge_slider_pane_t1

0x50d0,	// (0x00056dd0) form_midp_gauge_slider_pane_t2

0xd6fd,	// (0x0005f3fd) form_midp_gauge_slider_pane_t3

0xd70b,	// (0x0005f40b) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x000614f7) form_midp_gauge_slider_pane_t

0x50fa,	// (0x00056dfa) form_midp_slider_pane

0x2d36,	// (0x00054a36) bg_input_focus_pane_cp041_ParamLimits

0x2d36,	// (0x00054a36) bg_input_focus_pane_cp041

0x508f,	// (0x00056d8f) form_midp_gauge_wait_pane_t1_ParamLimits

0x508f,	// (0x00056d8f) form_midp_gauge_wait_pane_t1

0x50a1,	// (0x00056da1) form_midp_gauge_wait_pane_t2_ParamLimits

0x50a1,	// (0x00056da1) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x000614f2) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x000614f2) form_midp_gauge_wait_pane_t

0x50b3,	// (0x00056db3) form_midp_wait_pane_ParamLimits

0x50b3,	// (0x00056db3) form_midp_wait_pane

0x5059,	// (0x00056d59) form_midp_image_pane_g1

0x5062,	// (0x00056d62) form_midp_image_pane_t1

0x5071,	// (0x00056d71) form_midp_image_pane_t2

0x5080,	// (0x00056d80) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x000614eb) form_midp_image_pane_t

0x5050,	// (0x00056d50) list_single_midp_pane_g1

0x12cf,	// (0x00052fcf) list_single_midp_pane_t1

0xd6e9,	// (0x0005f3e9) list_midp_form_item_pane_ParamLimits

0xd6e9,	// (0x0005f3e9) list_midp_form_item_pane

0x472b,	// (0x0005642b) list_midp_form_item_pane_t1

0x473a,	// (0x0005643a) midp_ticker_pane_g1

0x4746,	// (0x00056446) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x00061438) midp_ticker_pane_g

0x4752,	// (0x00056452) midp_ticker_pane_t1

0x6449,	// (0x00058149) midp_editing_number_pane_t1

0x6427,	// (0x00058127) midp_editing_number_pane

0x6436,	// (0x00058136) midp_ticker_pane

0x61e8,	// (0x00057ee8) ai_message_heading_pane

0x2c56,	// (0x00054956) bg_popup_window_pane_cp14

0x61f0,	// (0x00057ef0) listscroll_ai_message_pane

0x6172,	// (0x00057e72) ai_message_heading_pane_g1_ParamLimits

0x6172,	// (0x00057e72) ai_message_heading_pane_g1

0x617e,	// (0x00057e7e) ai_message_heading_pane_g2_ParamLimits

0x617e,	// (0x00057e7e) ai_message_heading_pane_g2

0x618a,	// (0x00057e8a) ai_message_heading_pane_g3_ParamLimits

0x618a,	// (0x00057e8a) ai_message_heading_pane_g3

0x6196,	// (0x00057e96) ai_message_heading_pane_g4_ParamLimits

0x6196,	// (0x00057e96) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x0006162c) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x0006162c) ai_message_heading_pane_g

0x61a2,	// (0x00057ea2) ai_message_heading_pane_t1_ParamLimits

0x61a2,	// (0x00057ea2) ai_message_heading_pane_t1

0x61bc,	// (0x00057ebc) ai_message_heading_pane_t2_ParamLimits

0x61bc,	// (0x00057ebc) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x00061635) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x00061635) ai_message_heading_pane_t

0x61ce,	// (0x00057ece) bg_popup_heading_pane_cp1_ParamLimits

0x61ce,	// (0x00057ece) bg_popup_heading_pane_cp1

0x6160,	// (0x00057e60) list_ai_message_pane_ParamLimits

0x6160,	// (0x00057e60) list_ai_message_pane

0x3b1c,	// (0x0005581c) scroll_pane_cp10

0x60fc,	// (0x00057dfc) list_ai_message_pane_g1

0x6104,	// (0x00057e04) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x00061609) list_ai_message_pane_g

0x610c,	// (0x00057e0c) list_ai_message_pane_t1_ParamLimits

0x610c,	// (0x00057e0c) list_ai_message_pane_t1

0x6121,	// (0x00057e21) list_ai_message_pane_t2_ParamLimits

0x6121,	// (0x00057e21) list_ai_message_pane_t2

0x6136,	// (0x00057e36) list_ai_message_pane_t3_ParamLimits

0x6136,	// (0x00057e36) list_ai_message_pane_t3

0x614b,	// (0x00057e4b) list_ai_message_pane_t4_ParamLimits

0x614b,	// (0x00057e4b) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x0006160e) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x0006160e) list_ai_message_pane_t

0xd86e,	// (0x0005f56e) cell_ai_soft_ind_pane_ParamLimits

0xd86e,	// (0x0005f56e) cell_ai_soft_ind_pane

0x4764,	// (0x00056464) cell_ai_soft_ind_pane_g1_ParamLimits

0x4764,	// (0x00056464) cell_ai_soft_ind_pane_g1

0x2c56,	// (0x00054956) grid_highlight_cp1

0x4771,	// (0x00056471) text_secondary_cp56_ParamLimits

0x4771,	// (0x00056471) text_secondary_cp56

0x60bc,	// (0x00057dbc) example_general_pane_ParamLimits

0x60bc,	// (0x00057dbc) example_general_pane

0x60c8,	// (0x00057dc8) example_parent_pane_g1_ParamLimits

0x60c8,	// (0x00057dc8) example_parent_pane_g1

0x60d4,	// (0x00057dd4) example_parent_pane_t1_ParamLimits

0x60d4,	// (0x00057dd4) example_parent_pane_t1

0xc50a,	// (0x0005e20a) popup_preview_text_window_ParamLimits

0xc50a,	// (0x0005e20a) popup_preview_text_window

0x459a,	// (0x0005629a) list_single_pane_cp2_g4

0x308d,	// (0x00054d8d) bg_popup_preview_window_pane_ParamLimits

0x308d,	// (0x00054d8d) bg_popup_preview_window_pane

0x5e09,	// (0x00057b09) popup_preview_text_window_t1_ParamLimits

0x5e09,	// (0x00057b09) popup_preview_text_window_t1

0x5e27,	// (0x00057b27) popup_preview_text_window_t2_ParamLimits

0x5e27,	// (0x00057b27) popup_preview_text_window_t2

0x5e70,	// (0x00057b70) popup_preview_text_window_t3_ParamLimits

0x5e70,	// (0x00057b70) popup_preview_text_window_t3

0x5eb5,	// (0x00057bb5) popup_preview_text_window_t4_ParamLimits

0x5eb5,	// (0x00057bb5) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x000615dd) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x000615dd) popup_preview_text_window_t

0x5f33,	// (0x00057c33) scroll_pane_cp11

0x4eab,	// (0x00056bab) bg_popup_preview_window_pane_g1

0x5dc9,	// (0x00057ac9) bg_popup_preview_window_pane_g2

0x5dd1,	// (0x00057ad1) bg_popup_preview_window_pane_g3

0x5dd9,	// (0x00057ad9) bg_popup_preview_window_pane_g4

0x5de1,	// (0x00057ae1) bg_popup_preview_window_pane_g5

0x5de9,	// (0x00057ae9) bg_popup_preview_window_pane_g6

0x5df1,	// (0x00057af1) bg_popup_preview_window_pane_g7

0x5df9,	// (0x00057af9) bg_popup_preview_window_pane_g8

0xf269,	// (0x00060f69) aid_popup_width_pane

0xc486,	// (0x0005e186) popup_midp_note_alarm_window_ParamLimits

0xc486,	// (0x0005e186) popup_midp_note_alarm_window

0x3646,	// (0x00055346) data_form_pane_ParamLimits

0xbd50,	// (0x0005da50) form_field_data_pane_g1

0xbd5a,	// (0x0005da5a) form_field_data_pane_t1_ParamLimits

0x39a8,	// (0x000556a8) input_focus_pane_ParamLimits

0x0308,	// (0x00052008) data_form_wide_pane_ParamLimits

0x0319,	// (0x00052019) form_field_data_wide_pane_g1

0x0325,	// (0x00052025) form_field_data_wide_pane_t1_ParamLimits

0x3334,	// (0x00055034) input_focus_pane_cp6_ParamLimits

0xbe57,	// (0x0005db57) input_popup_find_pane_g1_ParamLimits

0xbe57,	// (0x0005db57) input_popup_find_pane_g1

0x059b,	// (0x0005229b) aid_navi_side_left_pane

0x05b0,	// (0x000522b0) aid_navi_side_right_pane

0x57e2,	// (0x000574e2) bg_popup_window_pane_cp30_ParamLimits

0x57e2,	// (0x000574e2) bg_popup_window_pane_cp30

0x585c,	// (0x0005755c) popup_midp_note_alarm_window_g1_ParamLimits

0x585c,	// (0x0005755c) popup_midp_note_alarm_window_g1

0x588c,	// (0x0005758c) popup_midp_note_alarm_window_t1_ParamLimits

0x588c,	// (0x0005758c) popup_midp_note_alarm_window_t1

0x592d,	// (0x0005762d) popup_midp_note_alarm_window_t2_ParamLimits

0x592d,	// (0x0005762d) popup_midp_note_alarm_window_t2

0x59db,	// (0x000576db) popup_midp_note_alarm_window_t3_ParamLimits

0x59db,	// (0x000576db) popup_midp_note_alarm_window_t3

0x5a0d,	// (0x0005770d) popup_midp_note_alarm_window_t4_ParamLimits

0x5a0d,	// (0x0005770d) popup_midp_note_alarm_window_t4

0x5a33,	// (0x00057733) popup_midp_note_alarm_window_t5_ParamLimits

0x5a33,	// (0x00057733) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x0006157a) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x0006157a) popup_midp_note_alarm_window_t

0x5adf,	// (0x000577df) wait_bar_pane_cp1_ParamLimits

0x5adf,	// (0x000577df) wait_bar_pane_cp1

0x2c56,	// (0x00054956) wait_anim_pane_copy1

0x2c56,	// (0x00054956) wait_border_pane_copy1

0x54c8,	// (0x000571c8) wait_border_pane_g1_copy1

0x033f,	// (0x0005203f) form_field_popup_pane_g1

0xbd74,	// (0x0005da74) form_field_popup_pane_t1_ParamLimits

0x39a8,	// (0x000556a8) input_focus_pane_cp7_ParamLimits

0x39ca,	// (0x000556ca) list_form_pane_ParamLimits

0x035f,	// (0x0005205f) form_field_popup_wide_pane_g1

0x0367,	// (0x00052067) form_field_popup_wide_pane_t1_ParamLimits

0x39a8,	// (0x000556a8) input_focus_pane_cp8_ParamLimits

0x39d6,	// (0x000556d6) list_form_wide_pane_ParamLimits

0x65c4,	// (0x000582c4) aid_size_cell_graphic_pane

0xbdf3,	// (0x0005daf3) data_form_pane_t1_ParamLimits

0xc875,	// (0x0005e575) data_form_wide_pane_t1_ParamLimits

0xd36e,	// (0x0005f06e) bg_status_flat_pane

0xb61d,	// (0x0005d31d) title_pane_t1_ParamLimits

0x2cfe,	// (0x000549fe) title_pane_t2_ParamLimits

0x2d24,	// (0x00054a24) title_pane_t3_ParamLimits

0xf532,	// (0x00061232) title_pane_t_ParamLimits

0x3f9d,	// (0x00055c9d) level_1_signal_ParamLimits

0x3faf,	// (0x00055caf) level_2_signal_ParamLimits

0x3fc2,	// (0x00055cc2) level_3_signal_ParamLimits

0x3fd5,	// (0x00055cd5) level_4_signal_ParamLimits

0x3fe8,	// (0x00055ce8) level_5_signal_ParamLimits

0x3ffb,	// (0x00055cfb) level_6_signal_ParamLimits

0x400e,	// (0x00055d0e) level_7_signal_ParamLimits

0x3f9d,	// (0x00055c9d) level_1_battery_ParamLimits

0x3faf,	// (0x00055caf) level_2_battery_ParamLimits

0x3fc2,	// (0x00055cc2) level_3_battery_ParamLimits

0x3fd5,	// (0x00055cd5) level_4_battery_ParamLimits

0x3fe8,	// (0x00055ce8) level_5_battery_ParamLimits

0x3ffb,	// (0x00055cfb) level_6_battery_ParamLimits

0x400e,	// (0x00055d0e) level_7_battery_ParamLimits

0x56e7,	// (0x000573e7) bg_status_flat_pane_g1

0x56ef,	// (0x000573ef) bg_status_flat_pane_g2

0x56f7,	// (0x000573f7) bg_status_flat_pane_g3

0x56ff,	// (0x000573ff) bg_status_flat_pane_g4

0x5707,	// (0x00057407) bg_status_flat_pane_g5

0x570f,	// (0x0005740f) bg_status_flat_pane_g6

0x5717,	// (0x00057417) bg_status_flat_pane_g7

0xb6a9,	// (0x0005d3a9) tabs_3_active_pane_t1_ParamLimits

0xb6a9,	// (0x0005d3a9) tabs_3_passive_pane_t1_ParamLimits

0xb6bb,	// (0x0005d3bb) tabs_4_active_pane_t1_ParamLimits

0xb6bb,	// (0x0005d3bb) tabs_4_1_passive_pane_t1_ParamLimits

0xbe65,	// (0x0005db65) tabs_2_active_pane_t1_ParamLimits

0xbe65,	// (0x0005db65) tabs_2_passive_pane_t1_ParamLimits

0x2d36,	// (0x00054a36) bg_active_tab_pane_cp4_ParamLimits

0xbe77,	// (0x0005db77) tabs_2_long_active_pane_t1_ParamLimits

0x4981,	// (0x00056681) bg_passive_tab_pane_cp4_ParamLimits

0x11b0,	// (0x00052eb0) list_single_midp_graphic_pane_t1_ParamLimits

0x2d36,	// (0x00054a36) bg_active_tab_pane_cp5_ParamLimits

0xbe8a,	// (0x0005db8a) tabs_3_long_active_pane_t1_ParamLimits

0x4981,	// (0x00056681) bg_passive_tab_pane_cp5_ParamLimits

0x11b0,	// (0x00052eb0) list_single_midp_graphic_pane_t1

0xd36e,	// (0x0005f06e) bg_status_flat_pane_ParamLimits

0x4b3b,	// (0x0005683b) indicator_pane_cp2_ParamLimits

0x4b3b,	// (0x0005683b) indicator_pane_cp2

0xd4ec,	// (0x0005f1ec) navi_pane_srt_ParamLimits

0xd4ec,	// (0x0005f1ec) navi_pane_srt

0x4c8a,	// (0x0005698a) popup_clock_digital_analogue_window_cp1

0x2e13,	// (0x00054b13) indicator_pane_t1

0x465d,	// (0x0005635d) copy_highlight_pane

0x465d,	// (0x0005635d) cursor_graphics_pane

0x465d,	// (0x0005635d) graphic_within_text_pane

0x465d,	// (0x0005635d) link_highlight_pane

0x5ef6,	// (0x00057bf6) popup_preview_text_window_t5_ParamLimits

0x5ef6,	// (0x00057bf6) popup_preview_text_window_t5

0x478b,	// (0x0005648b) cursor_digital_pane

0x478b,	// (0x0005648b) cursor_primary_pane

0x479c,	// (0x0005649c) cursor_primary_small_pane

0x47a4,	// (0x000564a4) cursor_secondary_pane

0x47ac,	// (0x000564ac) cursor_title_pane

0x478b,	// (0x0005648b) link_highlight_digital_pane

0x4793,	// (0x00056493) link_highlight_primary_pane

0x479c,	// (0x0005649c) link_highlight_primary_small_pane

0x47a4,	// (0x000564a4) link_highlight_secondary_pane

0x47ac,	// (0x000564ac) link_highlight_title_pane

0x478b,	// (0x0005648b) copy_highlight_digital_pane

0x478b,	// (0x0005648b) copy_highlight_primary_pane

0x479c,	// (0x0005649c) copy_highlight_primary_small_pane

0x47a4,	// (0x000564a4) copy_highlight_secondary_pane

0x47ac,	// (0x000564ac) copy_highlight_title_pane

0x47a4,	// (0x000564a4) graphic_text_digital_pane

0x5785,	// (0x00057485) graphic_text_primary_pane

0x578e,	// (0x0005748e) graphic_text_primary_small_pane

0x479c,	// (0x0005649c) graphic_text_secondary_pane

0x478b,	// (0x0005648b) graphic_text_title_pane

0xd1b2,	// (0x0005eeb2) cursor_primary_pane_g1

0x5777,	// (0x00057477) cursor_text_primary_t1

0xd76a,	// (0x0005f46a) cursor_primary_small_pane_g1

0x5769,	// (0x00057469) cursor_text_primary_small_t1

0xd760,	// (0x0005f460) cursor_primary_small_pane_g1_copy1

0x5751,	// (0x00057451) cursor_text_primary_small_t1_copy1

0x572f,	// (0x0005742f) cursor_text_title_t1

0xd756,	// (0x0005f456) cursor_title_pane_g1

0xd1b2,	// (0x0005eeb2) cursor_digital_pane_g1

0x47be,	// (0x000564be) cursor_text_digital_t1

0x47e3,	// (0x000564e3) link_highlight_primary_pane_g1

0x56d8,	// (0x000573d8) link_highlight_primary_pane_t1

0x47cc,	// (0x000564cc) link_highlight_primary_small_pane_g1

0x47d4,	// (0x000564d4) link_highlight_primary_small_pane_t1

0x47e3,	// (0x000564e3) link_highlight_secondary_pane_g1

0x47eb,	// (0x000564eb) link_highlight_secondary_pane_t1

0x564c,	// (0x0005734c) link_highlight_title_pane_g1

0x5654,	// (0x00057354) link_highlight_title_pane_t1

0x5635,	// (0x00057335) link_highlight_digital_pane_g1

0x563d,	// (0x0005733d) link_highlight_digital_pane_t1

0x550d,	// (0x0005720d) copy_highlight_primary_pane_g1

0x5515,	// (0x00057215) copy_highlight_primary_pane_t1

0x54e7,	// (0x000571e7) copy_highlight_primary_small_pane_g1

0x54fe,	// (0x000571fe) copy_highlight_primary_small_pane_t1

0x47fa,	// (0x000564fa) copy_highlight_secondary_pane_g1

0x4802,	// (0x00056502) copy_highlight_secondary_pane_t1

0x54e7,	// (0x000571e7) copy_highlight_title_pane_g1

0x54ef,	// (0x000571ef) copy_highlight_title_pane_t1

0x550d,	// (0x0005720d) copy_highlight_digital_pane_g1

0x6792,	// (0x00058492) copy_highlight_digital_pane_t1

0x66e6,	// (0x000583e6) graphic_text_primary_pane_g1

0x6776,	// (0x00058476) graphic_text_primary_pane_t1

0x6784,	// (0x00058484) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x000616a9) graphic_text_primary_pane_t

0x6752,	// (0x00058452) graphic_text_primary_small_pane_g1

0x675a,	// (0x0005845a) graphic_text_primary_small_pane_t1

0x6768,	// (0x00058468) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x000616a4) graphic_text_primary_small_pane_t

0x672e,	// (0x0005842e) graphic_text_secondary_pane_g1

0x6736,	// (0x00058436) graphic_text_secondary_pane_t1

0x6744,	// (0x00058444) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x0006169f) graphic_text_secondary_pane_t

0x670a,	// (0x0005840a) graphic_text_title_pane_g1

0x6712,	// (0x00058412) graphic_text_title_pane_t1

0x6720,	// (0x00058420) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x0006169a) graphic_text_title_pane_t

0x66e6,	// (0x000583e6) graphic_text_digital_pane_g1

0x66ee,	// (0x000583ee) graphic_text_digital_pane_t1

0x66fc,	// (0x000583fc) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x00061695) graphic_text_digital_pane_t

0x2d36,	// (0x00054a36) navi_icon_pane_srt_ParamLimits

0x2d36,	// (0x00054a36) navi_icon_pane_srt

0x2c56,	// (0x00054956) navi_midp_pane_srt

0x2c56,	// (0x00054956) navi_navi_pane_srt

0x2d36,	// (0x00054a36) navi_text_pane_srt_ParamLimits

0x2d36,	// (0x00054a36) navi_text_pane_srt

0x66b1,	// (0x000583b1) navi_navi_icon_text_pane_srt

0x66b9,	// (0x000583b9) navi_navi_pane_srt_g1_ParamLimits

0x66b9,	// (0x000583b9) navi_navi_pane_srt_g1

0x66cb,	// (0x000583cb) navi_navi_pane_srt_g2_ParamLimits

0x66cb,	// (0x000583cb) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x00061690) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x00061690) navi_navi_pane_srt_g

0x66dd,	// (0x000583dd) navi_navi_tabs_pane_srt

0x66b1,	// (0x000583b1) navi_navi_text_pane_srt

0x66b1,	// (0x000583b1) navi_navi_volume_pane_srt

0x66a2,	// (0x000583a2) navi_navi_text_pane_srt_t1

0x165e,	// (0x0005335e) navi_navi_volume_pane_srt_g1

0x1666,	// (0x00053366) volume_small_pane_srt_ParamLimits

0x1666,	// (0x00053366) volume_small_pane_srt

0x08e9,	// (0x000525e9) volume_small_pane_srt_g1_ParamLimits

0x08e9,	// (0x000525e9) volume_small_pane_srt_g1

0x08f9,	// (0x000525f9) volume_small_pane_srt_g2_ParamLimits

0x08f9,	// (0x000525f9) volume_small_pane_srt_g2

0x090a,	// (0x0005260a) volume_small_pane_srt_g3_ParamLimits

0x090a,	// (0x0005260a) volume_small_pane_srt_g3

0x091b,	// (0x0005261b) volume_small_pane_srt_g4_ParamLimits

0x091b,	// (0x0005261b) volume_small_pane_srt_g4

0x092c,	// (0x0005262c) volume_small_pane_srt_g5_ParamLimits

0x092c,	// (0x0005262c) volume_small_pane_srt_g5

0x093d,	// (0x0005263d) volume_small_pane_srt_g6_ParamLimits

0x093d,	// (0x0005263d) volume_small_pane_srt_g6

0x094e,	// (0x0005264e) volume_small_pane_srt_g7_ParamLimits

0x094e,	// (0x0005264e) volume_small_pane_srt_g7

0x095f,	// (0x0005265f) volume_small_pane_srt_g8_ParamLimits

0x095f,	// (0x0005265f) volume_small_pane_srt_g8

0x0970,	// (0x00052670) volume_small_pane_srt_g9_ParamLimits

0x0970,	// (0x00052670) volume_small_pane_srt_g9

0x0981,	// (0x00052681) volume_small_pane_srt_g10_ParamLimits

0x0981,	// (0x00052681) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x0006143d) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x0006143d) volume_small_pane_srt_g

0x3136,	// (0x00054e36) query_popup_data_pane_cp2

0x6688,	// (0x00058388) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6688,	// (0x00058388) navi_navi_icon_text_pane_srt_t1

0x5785,	// (0x00057485) navi_tabs_2_long_pane_srt

0x5785,	// (0x00057485) navi_tabs_2_pane_srt

0x5785,	// (0x00057485) navi_tabs_3_long_pane_srt

0x5785,	// (0x00057485) navi_tabs_3_pane_srt

0x5785,	// (0x00057485) navi_tabs_4_pane_srt

0x163e,	// (0x0005333e) tabs_2_active_pane_srt_ParamLimits

0x163e,	// (0x0005333e) tabs_2_active_pane_srt

0x164e,	// (0x0005334e) tabs_2_passive_pane_srt_ParamLimits

0x164e,	// (0x0005334e) tabs_2_passive_pane_srt

0x4f1f,	// (0x00056c1f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4f1f,	// (0x00056c1f) bg_passive_tab_pane_cp1_srt

0x6654,	// (0x00058354) bg_passive_tab_pane_g1_cp1_srt

0x429f,	// (0x00055f9f) bg_passive_tab_pane_g2_cp1_srt

0x665d,	// (0x0005835d) bg_passive_tab_pane_g3_cp1_srt

0x2fb1,	// (0x00054cb1) bg_active_tab_pane_cp1_srt_ParamLimits

0x2fb1,	// (0x00054cb1) bg_active_tab_pane_cp1_srt

0x6666,	// (0x00058366) tabs_2_active_pane_srt_g1

0xdb10,	// (0x0005f810) tabs_2_active_pane_srt_t1_ParamLimits

0xdb10,	// (0x0005f810) tabs_2_active_pane_srt_t1

0x6654,	// (0x00058354) bg_active_tab_pane_g1_cp1_srt

0x429f,	// (0x00055f9f) bg_active_tab_pane_g2_cp1_srt

0x665d,	// (0x0005835d) bg_active_tab_pane_g3_cp1_srt

0x160b,	// (0x0005330b) tabs_3_active_pane_srt_ParamLimits

0x160b,	// (0x0005330b) tabs_3_active_pane_srt

0x161c,	// (0x0005331c) tabs_3_passive_pane_cp_srt_ParamLimits

0x161c,	// (0x0005331c) tabs_3_passive_pane_cp_srt

0x162d,	// (0x0005332d) tabs_3_passive_pane_srt_ParamLimits

0x162d,	// (0x0005332d) tabs_3_passive_pane_srt

0x4f1f,	// (0x00056c1f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4f1f,	// (0x00056c1f) bg_passive_tab_pane_cp2_srt

0x4811,	// (0x00056511) bg_passive_tab_pane_g1_cp2_srt

0x429f,	// (0x00055f9f) bg_passive_tab_pane_g2_cp2_srt

0x481a,	// (0x0005651a) bg_passive_tab_pane_g3_cp2_srt

0x2fb1,	// (0x00054cb1) bg_active_tab_pane_cp2_srt_ParamLimits

0x2fb1,	// (0x00054cb1) bg_active_tab_pane_cp2_srt

0x663a,	// (0x0005833a) tabs_3_active_pane_srt_g1

0xdafa,	// (0x0005f7fa) tabs_3_active_pane_srt_t1_ParamLimits

0xdafa,	// (0x0005f7fa) tabs_3_active_pane_srt_t1

0x4811,	// (0x00056511) bg_active_tab_pane_g1_cp2_srt

0x429f,	// (0x00055f9f) bg_active_tab_pane_g2_cp2_srt

0x481a,	// (0x0005651a) bg_active_tab_pane_g3_cp2_srt

0x15c3,	// (0x000532c3) tabs_4_active_pane_srt_ParamLimits

0x15c3,	// (0x000532c3) tabs_4_active_pane_srt

0x15d5,	// (0x000532d5) tabs_4_passive_pane_cp2_srt_ParamLimits

0x15d5,	// (0x000532d5) tabs_4_passive_pane_cp2_srt

0x0af4,	// (0x000527f4) aid_size_cell_toolbar

0x62a0,	// (0x00057fa0) main_idle_act_pane_ParamLimits

0x0cc1,	// (0x000529c1) popup_large_graphic_colour_window_ParamLimits

0xc796,	// (0x0005e496) popup_toolbar_window_ParamLimits

0xc796,	// (0x0005e496) popup_toolbar_window

0x6458,	// (0x00058158) list_single_graphic_2heading_pane_ParamLimits

0x6458,	// (0x00058158) list_single_graphic_2heading_pane

0x3d4c,	// (0x00055a4c) aid_size_cell_apps_grid_lsc_pane

0x3d5e,	// (0x00055a5e) aid_size_cell_apps_grid_prt_pane

0x4981,	// (0x00056681) bg_wml_button_pane_cp1_ParamLimits

0x4981,	// (0x00056681) bg_wml_button_pane_cp1

0xd719,	// (0x0005f419) form_midp_field_text_pane_t1_ParamLimits

0x4f1f,	// (0x00056c1f) input_focus_pane_cp050_ParamLimits

0x5186,	// (0x00056e86) list_midp_form_text_pane_ParamLimits

0x512c,	// (0x00056e2c) input_focus_pane_cp051_ParamLimits

0x5140,	// (0x00056e40) list_midp_choice_pane_ParamLimits

0xd6b7,	// (0x0005f3b7) list_single_2graphic_pane_cp3_ParamLimits

0xd6b7,	// (0x0005f3b7) list_single_2graphic_pane_cp3

0xd6ca,	// (0x0005f3ca) list_single_midp_graphic_pane_ParamLimits

0xd6ca,	// (0x0005f3ca) list_single_midp_graphic_pane

0xf42c,	// (0x0006112c) list_single_graphic_2heading_pane_g1_ParamLimits

0xf42c,	// (0x0006112c) list_single_graphic_2heading_pane_g1

0xf438,	// (0x00061138) list_single_graphic_2heading_pane_g4_ParamLimits

0xf438,	// (0x00061138) list_single_graphic_2heading_pane_g4

0xf444,	// (0x00061144) list_single_graphic_2heading_pane_g5_ParamLimits

0xf444,	// (0x00061144) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x00061490) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x00061490) list_single_graphic_2heading_pane_g

0xf450,	// (0x00061150) list_single_graphic_2heading_pane_t1_ParamLimits

0xf450,	// (0x00061150) list_single_graphic_2heading_pane_t1

0xf464,	// (0x00061164) list_single_graphic_2heading_pane_t2_ParamLimits

0xf464,	// (0x00061164) list_single_graphic_2heading_pane_t2

0xf480,	// (0x00061180) list_single_graphic_2heading_pane_t3_ParamLimits

0xf480,	// (0x00061180) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x00061497) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x00061497) list_single_graphic_2heading_pane_t

0x4de9,	// (0x00056ae9) bg_popup_sub_pane_cp2

0x4e13,	// (0x00056b13) grid_toobar_pane

0x10d5,	// (0x00052dd5) cell_toolbar_pane_ParamLimits

0x10d5,	// (0x00052dd5) cell_toolbar_pane

0x4e4f,	// (0x00056b4f) cell_toolbar_pane_g1_ParamLimits

0x4e4f,	// (0x00056b4f) cell_toolbar_pane_g1

0x4e63,	// (0x00056b63) cell_toolbar_pane_g2_ParamLimits

0x4e63,	// (0x00056b63) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x000614a5) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x000614a5) cell_toolbar_pane_g

0x4e85,	// (0x00056b85) grid_highlight_pane_cp2_ParamLimits

0x4e85,	// (0x00056b85) grid_highlight_pane_cp2

0x4e9f,	// (0x00056b9f) toolbar_button_pane

0x4eab,	// (0x00056bab) toolbar_button_pane_g1

0x4eb3,	// (0x00056bb3) toolbar_button_pane_g2

0x4ebb,	// (0x00056bbb) toolbar_button_pane_g3

0x4ec3,	// (0x00056bc3) toolbar_button_pane_g4

0x4ecb,	// (0x00056bcb) toolbar_button_pane_g5

0x4ed3,	// (0x00056bd3) toolbar_button_pane_g6

0x4edb,	// (0x00056bdb) toolbar_button_pane_g7

0x4ee3,	// (0x00056be3) toolbar_button_pane_g8

0x4eeb,	// (0x00056beb) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x000614aa) toolbar_button_pane_g

0x112f,	// (0x00052e2f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x112f,	// (0x00052e2f) list_single_2graphic_pane_g1_cp3

0xc7ee,	// (0x0005e4ee) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc7ee,	// (0x0005e4ee) list_single_2graphic_pane_g2_cp3

0x114c,	// (0x00052e4c) list_single_2graphic_pane_g3_cp3

0x1154,	// (0x00052e54) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1154,	// (0x00052e54) list_single_2graphic_pane_g4_cp3

0x1160,	// (0x00052e60) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1160,	// (0x00052e60) list_single_2graphic_pane_t1_cp3

0x11a4,	// (0x00052ea4) list_single_midp_graphic_pane_g2_ParamLimits

0x11a4,	// (0x00052ea4) list_single_midp_graphic_pane_g2

0xf424,	// (0x00061124) aid_zoom_text_primary

0x0afc,	// (0x000527fc) aid_zoom_text_secondary

0xd20a,	// (0x0005ef0a) status_small_pane_g7_ParamLimits

0xd20a,	// (0x0005ef0a) status_small_pane_g7

0xd22d,	// (0x0005ef2d) status_small_pane_t1_ParamLimits

0xb5f9,	// (0x0005d2f9) title_pane_g2

0x0003,

0xf529,	// (0x00061229) title_pane_g

0xb871,	// (0x0005d571) aid_size_cell_colour_1_pane_ParamLimits

0xb871,	// (0x0005d571) aid_size_cell_colour_1_pane

0xb885,	// (0x0005d585) aid_size_cell_colour_2_pane_ParamLimits

0xb885,	// (0x0005d585) aid_size_cell_colour_2_pane

0xb899,	// (0x0005d599) aid_size_cell_colour_3_pane_ParamLimits

0xb899,	// (0x0005d599) aid_size_cell_colour_3_pane

0xb8ad,	// (0x0005d5ad) aid_size_cell_colour_4_pane_ParamLimits

0xb8ad,	// (0x0005d5ad) aid_size_cell_colour_4_pane

0x04d8,	// (0x000521d8) title_pane_stacon_g1_ParamLimits

0x04d8,	// (0x000521d8) title_pane_stacon_g1

0x556c,	// (0x0005726c) popup_note_wait_window_g3_ParamLimits

0x556c,	// (0x0005726c) popup_note_wait_window_g3

0x55e2,	// (0x000572e2) popup_note_wait_window_t5_ParamLimits

0x55e2,	// (0x000572e2) popup_note_wait_window_t5

0x2c56,	// (0x00054956) main_feb_china_hwr_fs_writing_pane

0xc198,	// (0x0005de98) popup_feb_china_hwr_fs_window_ParamLimits

0xc198,	// (0x0005de98) popup_feb_china_hwr_fs_window

0xc7ff,	// (0x0005e4ff) aid_size_cell_hwr_fs_ParamLimits

0xc7ff,	// (0x0005e4ff) aid_size_cell_hwr_fs

0x4f1f,	// (0x00056c1f) bg_popup_sub_pane_cp3_ParamLimits

0x4f1f,	// (0x00056c1f) bg_popup_sub_pane_cp3

0xc814,	// (0x0005e514) grid_hwr_fs_pane_ParamLimits

0xc814,	// (0x0005e514) grid_hwr_fs_pane

0x125f,	// (0x00052f5f) linegrid_hwr_fs_pane_ParamLimits

0x125f,	// (0x00052f5f) linegrid_hwr_fs_pane

0xc82c,	// (0x0005e52c) cell_hwr_fs_pane_ParamLimits

0xc82c,	// (0x0005e52c) cell_hwr_fs_pane

0x4f2b,	// (0x00056c2b) linegrid_hwr_fs_pane_g1_ParamLimits

0x4f2b,	// (0x00056c2b) linegrid_hwr_fs_pane_g1

0xd68b,	// (0x0005f38b) linegrid_hwr_fs_pane_g2_ParamLimits

0xd68b,	// (0x0005f38b) linegrid_hwr_fs_pane_g2

0x4f49,	// (0x00056c49) linegrid_hwr_fs_pane_g3_ParamLimits

0x4f49,	// (0x00056c49) linegrid_hwr_fs_pane_g3

0x1291,	// (0x00052f91) linegrid_hwr_fs_pane_g4_ParamLimits

0x1291,	// (0x00052f91) linegrid_hwr_fs_pane_g4

0x12ab,	// (0x00052fab) linegrid_hwr_fs_pane_g5_ParamLimits

0x12ab,	// (0x00052fab) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x000614d0) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x000614d0) linegrid_hwr_fs_pane_g

0x4f55,	// (0x00056c55) cell_hwr_fs_pane_g1_ParamLimits

0x4f55,	// (0x00056c55) cell_hwr_fs_pane_g1

0x4d20,	// (0x00056a20) cell_hwr_fs_pane_g2_ParamLimits

0x4d20,	// (0x00056a20) cell_hwr_fs_pane_g2

0xd69d,	// (0x0005f39d) cell_hwr_fs_pane_g3_ParamLimits

0xd69d,	// (0x0005f39d) cell_hwr_fs_pane_g3

0xd6aa,	// (0x0005f3aa) cell_hwr_fs_pane_g4_ParamLimits

0xd6aa,	// (0x0005f3aa) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x000614db) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x000614db) cell_hwr_fs_pane_g

0xc852,	// (0x0005e552) cell_hwr_fs_pane_t1

0x2c56,	// (0x00054956) grid_highlight_pane_cp6

0x2c56,	// (0x00054956) main_idle_act2_pane

0x3b03,	// (0x00055803) aid_inside_area_popup_secondary

0xd774,	// (0x0005f474) aid_inside_area_window_primary_ParamLimits

0xd774,	// (0x0005f474) aid_inside_area_window_primary

0x67a1,	// (0x000584a1) ai2_news_ticker_pane

0x67a9,	// (0x000584a9) aid_size_cell_ai1_link_ParamLimits

0x67a9,	// (0x000584a9) aid_size_cell_ai1_link

0xdb26,	// (0x0005f826) popup_ai2_data_window_ParamLimits

0xdb26,	// (0x0005f826) popup_ai2_data_window

0x67d9,	// (0x000584d9) popup_ai2_link_window_ParamLimits

0x67d9,	// (0x000584d9) popup_ai2_link_window

0x4f1f,	// (0x00056c1f) bg_popup_sub_pane_cp4_ParamLimits

0x4f1f,	// (0x00056c1f) bg_popup_sub_pane_cp4

0x67ed,	// (0x000584ed) grid_ai2_link_pane_ParamLimits

0x67ed,	// (0x000584ed) grid_ai2_link_pane

0x6804,	// (0x00058504) popup_ai2_link_window_g1_ParamLimits

0x6804,	// (0x00058504) popup_ai2_link_window_g1

0x6810,	// (0x00058510) popup_ai2_link_window_g2_ParamLimits

0x6810,	// (0x00058510) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x000616ae) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x000616ae) popup_ai2_link_window_g

0x681f,	// (0x0005851f) ai2_mp_button_pane

0x6827,	// (0x00058527) ai2_mp_volume_pane

0x512c,	// (0x00056e2c) bg_popup_sub_pane_cp5_ParamLimits

0x512c,	// (0x00056e2c) bg_popup_sub_pane_cp5

0x682f,	// (0x0005852f) heading_ai2_gene_pane_ParamLimits

0x682f,	// (0x0005852f) heading_ai2_gene_pane

0x683b,	// (0x0005853b) list_ai2_gene_pane_ParamLimits

0x683b,	// (0x0005853b) list_ai2_gene_pane

0x6883,	// (0x00058583) cell_ai2_link_pane_ParamLimits

0x6883,	// (0x00058583) cell_ai2_link_pane

0x6899,	// (0x00058599) cell_ai2_link_pane_g1

0x2c56,	// (0x00054956) grid_highlight_pane_cp7

0x167b,	// (0x0005337b) ai2_mp_volume_pane_g1

0x6969,	// (0x00058669) ai2_mp_volume_pane_g2

0xdb50,	// (0x0005f850) list_ai2_gene_pane_t1

0x6971,	// (0x00058671) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x000616c7) ai2_mp_volume_pane_g

0x1683,	// (0x00053383) volume_small_pane_cp3

0x6979,	// (0x00058679) aid_size_cell_ai2_button

0x6981,	// (0x00058681) grid_ai2_button_pane

0x698a,	// (0x0005868a) cell_ai2_button_pane_ParamLimits

0x698a,	// (0x0005868a) cell_ai2_button_pane

0xd06b,	// (0x0005ed6b) cell_ai2_button_pane_g1

0x2c56,	// (0x00054956) grid_highlight_pane_cp8

0x6929,	// (0x00058629) ai2_gene_pane_t1_ParamLimits

0x6929,	// (0x00058629) ai2_gene_pane_t1

0xc136,	// (0x0005de36) aid_height_parent_landscape

0xd8bc,	// (0x0005f5bc) aid_height_set_list

0x62a0,	// (0x00057fa0) aid_size_parent

0x65c4,	// (0x000582c4) aid_size_cell_graphic_pane_ParamLimits

0x684b,	// (0x0005854b) popup_ai2_data_window_g1_ParamLimits

0x684b,	// (0x0005854b) popup_ai2_data_window_g1

0x6857,	// (0x00058557) ai2_news_ticker_pane_g1

0x685f,	// (0x0005855f) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x000616b3) ai2_news_ticker_pane_g

0x6867,	// (0x00058567) ai2_news_ticker_pane_t1

0x6875,	// (0x00058575) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x000616b8) ai2_news_ticker_pane_t

0x68a2,	// (0x000585a2) heading_ai2_gene_pane_g1

0x68aa,	// (0x000585aa) heading_ai2_gene_pane_t1_ParamLimits

0x68aa,	// (0x000585aa) heading_ai2_gene_pane_t1

0x68bf,	// (0x000585bf) list_highlight_pane_cp6

0xdb3a,	// (0x0005f83a) ai2_gene_pane_ParamLimits

0xdb3a,	// (0x0005f83a) ai2_gene_pane

0xdb5e,	// (0x0005f85e) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x000616bd) list_ai2_gene_pane_t

0x68fa,	// (0x000585fa) list_highlight_pane_cp8_ParamLimits

0x68fa,	// (0x000585fa) list_highlight_pane_cp8

0x690b,	// (0x0005860b) ai2_gene_pane_g1_ParamLimits

0x690b,	// (0x0005860b) ai2_gene_pane_g1

0x691d,	// (0x0005861d) ai2_gene_pane_g2_ParamLimits

0x691d,	// (0x0005861d) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x000616c2) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x000616c2) ai2_gene_pane_g

0x3559,	// (0x00055259) scroll_pane_cp12

0xc0f3,	// (0x0005ddf3) control_pane_t3_ParamLimits

0xc0f3,	// (0x0005ddf3) control_pane_t3

0xd21e,	// (0x0005ef1e) status_small_pane_g8_ParamLimits

0xd21e,	// (0x0005ef1e) status_small_pane_g8

0xc22d,	// (0x0005df2d) popup_find_window_ParamLimits

0xc4c0,	// (0x0005e1c0) popup_note_image_window_ParamLimits

0x1105,	// (0x00052e05) list_double2_graphic_pane_vc_g1_ParamLimits

0x1105,	// (0x00052e05) list_double2_graphic_pane_vc_g1

0x399c,	// (0x0005569c) list_double2_graphic_pane_vc_g2_ParamLimits

0x399c,	// (0x0005569c) list_double2_graphic_pane_vc_g2

0x356a,	// (0x0005526a) list_double2_graphic_pane_vc_g3_ParamLimits

0x356a,	// (0x0005526a) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x0006149e) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x0006149e) list_double2_graphic_pane_vc_g

0x1111,	// (0x00052e11) list_double2_graphic_pane_vc_t1_ParamLimits

0x1111,	// (0x00052e11) list_double2_graphic_pane_vc_t1

0x399c,	// (0x0005569c) list_single_heading_pane_vc_g1_ParamLimits

0x399c,	// (0x0005569c) list_single_heading_pane_vc_g1

0x356a,	// (0x0005526a) list_single_heading_pane_vc_g2_ParamLimits

0x356a,	// (0x0005526a) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x000612ad) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x000612ad) list_single_heading_pane_vc_g

0x117c,	// (0x00052e7c) list_single_heading_pane_vc_t1_ParamLimits

0x117c,	// (0x00052e7c) list_single_heading_pane_vc_t1

0x1192,	// (0x00052e92) list_single_heading_pane_vc_t2_ParamLimits

0x1192,	// (0x00052e92) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x000614bf) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x000614bf) list_single_heading_pane_vc_t

0x3676,	// (0x00055376) list_setting_number_pane_vc_g1_ParamLimits

0x3676,	// (0x00055376) list_setting_number_pane_vc_g1

0x3682,	// (0x00055382) list_setting_number_pane_vc_g2_ParamLimits

0x3682,	// (0x00055382) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x000614c4) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x000614c4) list_setting_number_pane_vc_g

0x11c6,	// (0x00052ec6) list_setting_number_pane_vc_t1_ParamLimits

0x11c6,	// (0x00052ec6) list_setting_number_pane_vc_t1

0x11da,	// (0x00052eda) list_setting_number_pane_vc_t2_ParamLimits

0x11da,	// (0x00052eda) list_setting_number_pane_vc_t2

0x11f6,	// (0x00052ef6) list_setting_number_pane_vc_t3_ParamLimits

0x11f6,	// (0x00052ef6) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x000614c9) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x000614c9) list_setting_number_pane_vc_t

0x1222,	// (0x00052f22) set_value_pane_vc_ParamLimits

0x1222,	// (0x00052f22) set_value_pane_vc

0x6458,	// (0x00058158) list_double2_graphic_pane_vc_ParamLimits

0x6458,	// (0x00058158) list_double2_graphic_pane_vc

0x6458,	// (0x00058158) list_double2_large_graphic_pane_vc_ParamLimits

0x6458,	// (0x00058158) list_double2_large_graphic_pane_vc

0x6458,	// (0x00058158) list_double2_pane_vc_ParamLimits

0x6458,	// (0x00058158) list_double2_pane_vc

0x6458,	// (0x00058158) list_double_graphic_heading_pane_vc_ParamLimits

0x6458,	// (0x00058158) list_double_graphic_heading_pane_vc

0x6458,	// (0x00058158) list_double_graphic_pane_vc_ParamLimits

0x6458,	// (0x00058158) list_double_graphic_pane_vc

0x6458,	// (0x00058158) list_double_heading_pane_vc_ParamLimits

0x6458,	// (0x00058158) list_double_heading_pane_vc

0x646a,	// (0x0005816a) list_double_large_graphic_pane_vc_ParamLimits

0x646a,	// (0x0005816a) list_double_large_graphic_pane_vc

0x6458,	// (0x00058158) list_double_number_pane_vc_ParamLimits

0x6458,	// (0x00058158) list_double_number_pane_vc

0x6458,	// (0x00058158) list_double_pane_vc_ParamLimits

0x6458,	// (0x00058158) list_double_pane_vc

0x6458,	// (0x00058158) list_double_time_pane_vc_ParamLimits

0x6458,	// (0x00058158) list_double_time_pane_vc

0x6458,	// (0x00058158) list_setting_number_pane_vc_ParamLimits

0x6458,	// (0x00058158) list_setting_number_pane_vc

0x6458,	// (0x00058158) list_setting_pane_vc_ParamLimits

0x6458,	// (0x00058158) list_setting_pane_vc

0x6458,	// (0x00058158) list_single_graphic_heading_pane_vc_ParamLimits

0x6458,	// (0x00058158) list_single_graphic_heading_pane_vc

0x6458,	// (0x00058158) list_single_heading_pane_vc_ParamLimits

0x6458,	// (0x00058158) list_single_heading_pane_vc

0x6458,	// (0x00058158) list_single_number_heading_pane_vc_ParamLimits

0x6458,	// (0x00058158) list_single_number_heading_pane_vc

0x1105,	// (0x00052e05) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x1105,	// (0x00052e05) list_double_graphic_heading_pane_vc_g1

0x399c,	// (0x0005569c) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x399c,	// (0x0005569c) list_double_graphic_heading_pane_vc_g2

0x356a,	// (0x0005526a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x356a,	// (0x0005526a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf79e,	// (0x0006149e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x0006149e) list_double_graphic_heading_pane_vc_g

0x168c,	// (0x0005338c) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x168c,	// (0x0005338c) list_double_graphic_heading_pane_vc_t1

0x16a8,	// (0x000533a8) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x16a8,	// (0x000533a8) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ce,	// (0x000616ce) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ce,	// (0x000616ce) list_double_graphic_heading_pane_vc_t

0x3676,	// (0x00055376) list_setting_pane_vc_g1_ParamLimits

0x3676,	// (0x00055376) list_setting_pane_vc_g1

0x3682,	// (0x00055382) list_setting_pane_vc_g2_ParamLimits

0x3682,	// (0x00055382) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x000614c4) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x000614c4) list_setting_pane_vc_g

0x16c6,	// (0x000533c6) list_setting_pane_vc_t1_ParamLimits

0x16c6,	// (0x000533c6) list_setting_pane_vc_t1

0x16e2,	// (0x000533e2) list_setting_pane_vc_t2_ParamLimits

0x16e2,	// (0x000533e2) list_setting_pane_vc_t2

0x0001,

0xf9fc,	// (0x000616fc) list_setting_pane_vc_t_ParamLimits

0xf9fc,	// (0x000616fc) list_setting_pane_vc_t

0x1222,	// (0x00052f22) set_value_pane_cp_vc_ParamLimits

0x1222,	// (0x00052f22) set_value_pane_cp_vc

0x399c,	// (0x0005569c) list_single_number_heading_pane_vc_g1_ParamLimits

0x399c,	// (0x0005569c) list_single_number_heading_pane_vc_g1

0x356a,	// (0x0005526a) list_single_number_heading_pane_vc_g2_ParamLimits

0x356a,	// (0x0005526a) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x000612ad) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x000612ad) list_single_number_heading_pane_vc_g

0x16fe,	// (0x000533fe) list_single_number_heading_pane_vc_t1_ParamLimits

0x16fe,	// (0x000533fe) list_single_number_heading_pane_vc_t1

0xebe6,	// (0x000608e6) list_single_number_heading_pane_vc_t2_ParamLimits

0xebe6,	// (0x000608e6) list_single_number_heading_pane_vc_t2

0xebf8,	// (0x000608f8) list_single_number_heading_pane_vc_t3_ParamLimits

0xebf8,	// (0x000608f8) list_single_number_heading_pane_vc_t3

0x0002,

0xfa01,	// (0x00061701) list_single_number_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x00061701) list_single_number_heading_pane_vc_t

0x1105,	// (0x00052e05) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1105,	// (0x00052e05) list_single_graphic_heading_pane_vc_g1

0x399c,	// (0x0005569c) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x399c,	// (0x0005569c) list_single_graphic_heading_pane_vc_g4

0x356a,	// (0x0005526a) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x356a,	// (0x0005526a) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x0006149e) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x0006149e) list_single_graphic_heading_pane_vc_g

0x16fe,	// (0x000533fe) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x16fe,	// (0x000533fe) list_single_graphic_heading_pane_vc_t1

0x1714,	// (0x00053414) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x1714,	// (0x00053414) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa08,	// (0x00061708) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x00061708) list_single_graphic_heading_pane_vc_t

0x399c,	// (0x0005569c) list_double2_pane_vc_g1_ParamLimits

0x399c,	// (0x0005569c) list_double2_pane_vc_g1

0x356a,	// (0x0005526a) list_double2_pane_vc_g2_ParamLimits

0x356a,	// (0x0005526a) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x000612ad) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x000612ad) list_double2_pane_vc_g

0x1576,	// (0x00053276) list_double2_pane_vc_t1_ParamLimits

0x1576,	// (0x00053276) list_double2_pane_vc_t1

0x3705,	// (0x00055405) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3705,	// (0x00055405) list_double2_large_graphic_pane_vc_g1

0x399c,	// (0x0005569c) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x399c,	// (0x0005569c) list_double2_large_graphic_pane_vc_g2

0x356a,	// (0x0005526a) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x356a,	// (0x0005526a) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x000612c5) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x000612c5) list_double2_large_graphic_pane_vc_g

0x1726,	// (0x00053426) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x1726,	// (0x00053426) list_double2_large_graphic_pane_vc_t1

0x3711,	// (0x00055411) list_double_time_pane_vc_g1_ParamLimits

0x3711,	// (0x00055411) list_double_time_pane_vc_g1

0x371d,	// (0x0005541d) list_double_time_pane_vc_g2_ParamLimits

0x371d,	// (0x0005541d) list_double_time_pane_vc_g2

0x0001,

0xfa0d,	// (0x0006170d) list_double_time_pane_vc_g_ParamLimits

0xfa0d,	// (0x0006170d) list_double_time_pane_vc_g

0x173c,	// (0x0005343c) list_double_time_pane_vc_t1_ParamLimits

0x173c,	// (0x0005343c) list_double_time_pane_vc_t1

0x1760,	// (0x00053460) list_double_time_pane_vc_t2_ParamLimits

0x1760,	// (0x00053460) list_double_time_pane_vc_t2

0x17af,	// (0x000534af) list_double_time_pane_vc_t3_ParamLimits

0x17af,	// (0x000534af) list_double_time_pane_vc_t3

0x17c1,	// (0x000534c1) list_double_time_pane_vc_t4_ParamLimits

0x17c1,	// (0x000534c1) list_double_time_pane_vc_t4

0x0003,

0xfa12,	// (0x00061712) list_double_time_pane_vc_t_ParamLimits

0xfa12,	// (0x00061712) list_double_time_pane_vc_t

0x399c,	// (0x0005569c) list_double_pane_vc_g1_ParamLimits

0x399c,	// (0x0005569c) list_double_pane_vc_g1

0x356a,	// (0x0005526a) list_double_pane_vc_g2_ParamLimits

0x356a,	// (0x0005526a) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x000612ad) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x000612ad) list_double_pane_vc_g

0x17d5,	// (0x000534d5) list_double_pane_vc_t1_ParamLimits

0x17d5,	// (0x000534d5) list_double_pane_vc_t1

0x17e9,	// (0x000534e9) list_double_pane_vc_t2_ParamLimits

0x17e9,	// (0x000534e9) list_double_pane_vc_t2

0x0001,

0xfa1b,	// (0x0006171b) list_double_pane_vc_t_ParamLimits

0xfa1b,	// (0x0006171b) list_double_pane_vc_t

0x399c,	// (0x0005569c) list_double_number_pane_vc_g1_ParamLimits

0x399c,	// (0x0005569c) list_double_number_pane_vc_g1

0x356a,	// (0x0005526a) list_double_number_pane_vc_g2_ParamLimits

0x356a,	// (0x0005526a) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x000612ad) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x000612ad) list_double_number_pane_vc_g

0x1801,	// (0x00053501) list_double_number_pane_vc_t1_ParamLimits

0x1801,	// (0x00053501) list_double_number_pane_vc_t1

0x1813,	// (0x00053513) list_double_number_pane_vc_t2_ParamLimits

0x1813,	// (0x00053513) list_double_number_pane_vc_t2

0x1827,	// (0x00053527) list_double_number_pane_vc_t3_ParamLimits

0x1827,	// (0x00053527) list_double_number_pane_vc_t3

0x0002,

0xfa20,	// (0x00061720) list_double_number_pane_vc_t_ParamLimits

0xfa20,	// (0x00061720) list_double_number_pane_vc_t

0x3729,	// (0x00055429) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3729,	// (0x00055429) list_double_large_graphic_pane_vc_g1

0x3745,	// (0x00055445) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3745,	// (0x00055445) list_double_large_graphic_pane_vc_g2

0x3759,	// (0x00055459) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3759,	// (0x00055459) list_double_large_graphic_pane_vc_g3

0x183f,	// (0x0005353f) list_double_large_graphic_pane_vc_g4_ParamLimits

0x183f,	// (0x0005353f) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa27,	// (0x00061727) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa27,	// (0x00061727) list_double_large_graphic_pane_vc_g

0x184e,	// (0x0005354e) list_double_large_graphic_pane_vc_t1_ParamLimits

0x184e,	// (0x0005354e) list_double_large_graphic_pane_vc_t1

0x186a,	// (0x0005356a) list_double_large_graphic_pane_vc_t2_ParamLimits

0x186a,	// (0x0005356a) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa30,	// (0x00061730) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa30,	// (0x00061730) list_double_large_graphic_pane_vc_t

0x399c,	// (0x0005569c) list_double_heading_pane_vc_g1_ParamLimits

0x399c,	// (0x0005569c) list_double_heading_pane_vc_g1

0x356a,	// (0x0005526a) list_double_heading_pane_vc_g2_ParamLimits

0x356a,	// (0x0005526a) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x000612ad) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x000612ad) list_double_heading_pane_vc_g

0x188c,	// (0x0005358c) list_double_heading_pane_vc_t1_ParamLimits

0x188c,	// (0x0005358c) list_double_heading_pane_vc_t1

0x18a0,	// (0x000535a0) list_double_heading_pane_vc_t2_ParamLimits

0x18a0,	// (0x000535a0) list_double_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x00061735) list_double_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x00061735) list_double_heading_pane_vc_t

0x18b8,	// (0x000535b8) list_double_graphic_pane_vc_g1_ParamLimits

0x18b8,	// (0x000535b8) list_double_graphic_pane_vc_g1

0x3768,	// (0x00055468) list_double_graphic_pane_vc_g2_ParamLimits

0x3768,	// (0x00055468) list_double_graphic_pane_vc_g2

0x399c,	// (0x0005569c) list_double_graphic_pane_vc_g3_ParamLimits

0x399c,	// (0x0005569c) list_double_graphic_pane_vc_g3

0x0003,

0xfa3a,	// (0x0006173a) list_double_graphic_pane_vc_g_ParamLimits

0xfa3a,	// (0x0006173a) list_double_graphic_pane_vc_g

0x18c4,	// (0x000535c4) list_double_graphic_pane_vc_t1_ParamLimits

0x18c4,	// (0x000535c4) list_double_graphic_pane_vc_t1

0x18ee,	// (0x000535ee) list_double_graphic_pane_vc_t2_ParamLimits

0x18ee,	// (0x000535ee) list_double_graphic_pane_vc_t2

0x0001,

0xfa43,	// (0x00061743) list_double_graphic_pane_vc_t_ParamLimits

0xfa43,	// (0x00061743) list_double_graphic_pane_vc_t

0xf275,	// (0x00060f75) aid_size_cell_fastswap

0xb3e0,	// (0x0005d0e0) aid_size_cell_touch_ParamLimits

0xb3e0,	// (0x0005d0e0) aid_size_cell_touch

0xf3f6,	// (0x000610f6) popup_fast_swap_wide_window_ParamLimits

0xf3f6,	// (0x000610f6) popup_fast_swap_wide_window

0xb590,	// (0x0005d290) touch_pane_ParamLimits

0xb590,	// (0x0005d290) touch_pane

0x363e,	// (0x0005533e) button_value_adjust_pane_cp2

0x0232,	// (0x00051f32) button_value_adjust_pane_cp4

0x0256,	// (0x00051f56) form_field_data_pane_cp2

0xbd0f,	// (0x0005da0f) form_field_data_wide_pane_cp2

0x3e1b,	// (0x00055b1b) bg_scroll_pane_ParamLimits

0x063a,	// (0x0005233a) scroll_handle_pane_ParamLimits

0x064e,	// (0x0005234e) scroll_sc2_down_pane_ParamLimits

0x064e,	// (0x0005234e) scroll_sc2_down_pane

0x3e4c,	// (0x00055b4c) scroll_sc2_up_pane_ParamLimits

0x3e4c,	// (0x00055b4c) scroll_sc2_up_pane

0xdc8e,	// (0x0005f98e) grid_wheel_folder_pane_g1_ParamLimits

0xdc8e,	// (0x0005f98e) grid_wheel_folder_pane_g1

0x0881,	// (0x00052581) clock_nsta_pane_cp2_ParamLimits

0x0881,	// (0x00052581) clock_nsta_pane_cp2

0xd10d,	// (0x0005ee0d) listscroll_midp_pane_ParamLimits

0xd119,	// (0x0005ee19) midp_canvas_pane

0x4959,	// (0x00056659) nsta_clock_indic_pane

0x498d,	// (0x0005668d) listscroll_form_pane_vc

0x4995,	// (0x00056695) listscroll_set_pane_vc_ParamLimits

0x4995,	// (0x00056695) listscroll_set_pane_vc

0xd396,	// (0x0005f096) clock_nsta_pane

0xd3c0,	// (0x0005f0c0) indicator_nsta_pane

0x4de9,	// (0x00056ae9) bg_popup_sub_pane_cp2_ParamLimits

0x4dfd,	// (0x00056afd) find_pane_cp2_ParamLimits

0x4dfd,	// (0x00056afd) find_pane_cp2

0x4e13,	// (0x00056b13) grid_toobar_pane_ParamLimits

0x4ef3,	// (0x00056bf3) list_form_gen_pane_vc_ParamLimits

0x4ef3,	// (0x00056bf3) list_form_gen_pane_vc

0x4f09,	// (0x00056c09) scroll_pane_cp8_vc_ParamLimits

0x4f09,	// (0x00056c09) scroll_pane_cp8_vc

0x4f85,	// (0x00056c85) data_form_wide_pane_vc_ParamLimits

0x4f85,	// (0x00056c85) data_form_wide_pane_vc

0x4f91,	// (0x00056c91) form_field_data_wide_pane_vc_g1

0x4f99,	// (0x00056c99) form_field_data_wide_pane_vc_t1_ParamLimits

0x4f99,	// (0x00056c99) form_field_data_wide_pane_vc_t1

0x39a8,	// (0x000556a8) input_focus_pane_cp6_vc_ParamLimits

0x39a8,	// (0x000556a8) input_focus_pane_cp6_vc

0x52df,	// (0x00056fdf) list_midp_pane_ParamLimits

0x662e,	// (0x0005832e) scroll_pane_cp16_ParamLimits

0x662e,	// (0x0005832e) scroll_pane_cp16

0x5335,	// (0x00057035) button_value_adjust_pane_ParamLimits

0x5335,	// (0x00057035) button_value_adjust_pane

0xd8cd,	// (0x0005f5cd) button_value_adjust_pane_cp6_ParamLimits

0xd8cd,	// (0x0005f5cd) button_value_adjust_pane_cp6

0xd9e7,	// (0x0005f6e7) settings_code_pane_cp_ParamLimits

0xd9e7,	// (0x0005f6e7) settings_code_pane_cp

0xd06b,	// (0x0005ed6b) cell_touch_pane_g1

0xd06b,	// (0x0005ed6b) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x000613e3) cell_touch_pane_g

0xdb6c,	// (0x0005f86c) cell_touch_pane_cp_ParamLimits

0xdb6c,	// (0x0005f86c) cell_touch_pane_cp

0xdb88,	// (0x0005f888) cell_touch_pane_ParamLimits

0xdb88,	// (0x0005f888) cell_touch_pane

0xd06b,	// (0x0005ed6b) scroll_sc2_down_pane_g1

0xd06b,	// (0x0005ed6b) scroll_sc2_up_pane_g1

0x2c56,	// (0x00054956) bg_set_opt_pane_cp4_vc

0x69be,	// (0x000586be) list_set_graphic_pane_vc_g1_ParamLimits

0x69be,	// (0x000586be) list_set_graphic_pane_vc_g1

0x69ca,	// (0x000586ca) list_set_graphic_pane_vc_g2_ParamLimits

0x69ca,	// (0x000586ca) list_set_graphic_pane_vc_g2

0x0001,

0xf9d3,	// (0x000616d3) list_set_graphic_pane_vc_g_ParamLimits

0xf9d3,	// (0x000616d3) list_set_graphic_pane_vc_g

0x69d6,	// (0x000586d6) text_primary_small_cp13_vc_ParamLimits

0x69d6,	// (0x000586d6) text_primary_small_cp13_vc

0x69ee,	// (0x000586ee) list_set_graphic_pane_vc_ParamLimits

0x69ee,	// (0x000586ee) list_set_graphic_pane_vc

0x2c56,	// (0x00054956) input_focus_pane_cp2_vc

0xd06b,	// (0x0005ed6b) setting_code_pane_vc_g1

0x2d81,	// (0x00054a81) setting_code_pane_vc_t1

0x6a01,	// (0x00058701) set_text_pane_vc_t1_ParamLimits

0x6a01,	// (0x00058701) set_text_pane_vc_t1

0x2c56,	// (0x00054956) input_focus_pane_cp1_vc

0x6a1d,	// (0x0005871d) list_set_text_pane_vc

0xd06b,	// (0x0005ed6b) setting_text_pane_vc_g1

0x2c56,	// (0x00054956) bg_set_opt_pane_cp2_vc

0x2d78,	// (0x00054a78) setting_slider_graphic_pane_vc_g1

0x6a27,	// (0x00058727) setting_slider_graphic_pane_vc_t1

0x6a37,	// (0x00058737) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d8,	// (0x000616d8) setting_slider_graphic_pane_vc_t

0x6a47,	// (0x00058747) slider_set_pane_cp_vc

0x6a4f,	// (0x0005874f) slider_set_pane_vc_g1

0x6a58,	// (0x00058758) slider_set_pane_vc_g2

0x0006,

0xf9dd,	// (0x000616dd) slider_set_pane_vc_g

0x39f4,	// (0x000556f4) set_opt_bg_pane_g1_copy1

0x39fc,	// (0x000556fc) set_opt_bg_pane_g2_copy1

0x6a84,	// (0x00058784) set_opt_bg_pane_g3_copy1

0x3a0c,	// (0x0005570c) set_opt_bg_pane_g4_copy1

0x3a14,	// (0x00055714) set_opt_bg_pane_g5_copy1

0x3a1c,	// (0x0005571c) set_opt_bg_pane_g6_copy1

0x6a8e,	// (0x0005878e) set_opt_bg_pane_g7_copy1

0x6a98,	// (0x00058798) set_opt_bg_pane_g8_copy1

0x6aa2,	// (0x000587a2) set_opt_bg_pane_g9_copy1

0x2c56,	// (0x00054956) bg_set_opt_pane_cp_vc

0x6aac,	// (0x000587ac) setting_slider_pane_vc_t1

0x6abb,	// (0x000587bb) setting_slider_pane_vc_t2

0x6acb,	// (0x000587cb) setting_slider_pane_vc_t3

0x0002,

0xf9ec,	// (0x000616ec) setting_slider_pane_vc_t

0x6adb,	// (0x000587db) slider_set_pane_vc

0x1308,	// (0x00053008) volume_set_pane_vc_g1

0x1311,	// (0x00053011) volume_set_pane_vc_g2

0x131a,	// (0x0005301a) volume_set_pane_vc_g3

0x1323,	// (0x00053023) volume_set_pane_vc_g4

0x132c,	// (0x0005302c) volume_set_pane_vc_g5

0x1335,	// (0x00053035) volume_set_pane_vc_g6

0x133e,	// (0x0005303e) volume_set_pane_vc_g7

0x1347,	// (0x00053047) volume_set_pane_vc_g8

0x1350,	// (0x00053050) volume_set_pane_vc_g9

0x1359,	// (0x00053059) volume_set_pane_vc_g10

0x0009,

0xf891,	// (0x00061591) volume_set_pane_vc_g

0x6ae3,	// (0x000587e3) volume_set_pane_vc

0x6aeb,	// (0x000587eb) button_value_adjust_pane_cp1_vc

0x6af5,	// (0x000587f5) list_highlight_pane_cp2_vc

0x6afe,	// (0x000587fe) list_set_pane_vc_ParamLimits

0x6afe,	// (0x000587fe) list_set_pane_vc

0x6b5c,	// (0x0005885c) main_pane_set_vc_t1_ParamLimits

0x6b5c,	// (0x0005885c) main_pane_set_vc_t1

0x6b71,	// (0x00058871) main_pane_set_vc_t2_ParamLimits

0x6b71,	// (0x00058871) main_pane_set_vc_t2

0x6b83,	// (0x00058883) main_pane_set_vc_t3_ParamLimits

0x6b83,	// (0x00058883) main_pane_set_vc_t3

0x6b97,	// (0x00058897) main_pane_set_vc_t4_ParamLimits

0x6b97,	// (0x00058897) main_pane_set_vc_t4

0x0003,

0xf9f3,	// (0x000616f3) main_pane_set_vc_t_ParamLimits

0xf9f3,	// (0x000616f3) main_pane_set_vc_t

0x6bab,	// (0x000588ab) setting_code_pane_vc_ParamLimits

0x6bab,	// (0x000588ab) setting_code_pane_vc

0x6bbc,	// (0x000588bc) setting_slider_graphic_pane_vc

0x6bbc,	// (0x000588bc) setting_slider_pane_vc

0x6bbc,	// (0x000588bc) setting_text_pane_vc

0x6bbc,	// (0x000588bc) setting_volume_pane_vc

0x6bc6,	// (0x000588c6) scroll_pane_cp121_vc

0x362c,	// (0x0005532c) set_content_pane_vc

0x6bce,	// (0x000588ce) button_value_adjust_pane_g1

0x6bd7,	// (0x000588d7) button_value_adjust_pane_g2

0x0001,

0xfa48,	// (0x00061748) button_value_adjust_pane_g

0x6be0,	// (0x000588e0) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6be0,	// (0x000588e0) form_field_slider_wide_pane_vc_t1

0x6bf4,	// (0x000588f4) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6bf4,	// (0x000588f4) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa4d,	// (0x0006174d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa4d,	// (0x0006174d) form_field_slider_wide_pane_vc_t

0x2fb1,	// (0x00054cb1) input_focus_pane_cp10_vc_ParamLimits

0x2fb1,	// (0x00054cb1) input_focus_pane_cp10_vc

0x6c22,	// (0x00058922) slider_cont_pane_cp1_vc_ParamLimits

0x6c22,	// (0x00058922) slider_cont_pane_cp1_vc

0x6c34,	// (0x00058934) slider_form_pane_g1_cp2

0x6a58,	// (0x00058758) slider_form_pane_g2_cp2

0x6c61,	// (0x00058961) form_field_slider_pane_vc_t3

0x6c6f,	// (0x0005896f) form_field_slider_pane_vc_t4

0x6c7d,	// (0x0005897d) slider_form_pane_vc_ParamLimits

0x6c7d,	// (0x0005897d) slider_form_pane_vc

0x6c8a,	// (0x0005898a) form_field_slider_pane_vc_t1_ParamLimits

0x6c8a,	// (0x0005898a) form_field_slider_pane_vc_t1

0x6bf4,	// (0x000588f4) form_field_slider_pane_vc_t2_ParamLimits

0x6bf4,	// (0x000588f4) form_field_slider_pane_vc_t2

0x0001,

0xfa5f,	// (0x0006175f) form_field_slider_pane_vc_t_ParamLimits

0xfa5f,	// (0x0006175f) form_field_slider_pane_vc_t

0x2fb1,	// (0x00054cb1) input_focus_pane_cp9_vc_ParamLimits

0x2fb1,	// (0x00054cb1) input_focus_pane_cp9_vc

0x6ca6,	// (0x000589a6) slider_cont_pane_vc_ParamLimits

0x6ca6,	// (0x000589a6) slider_cont_pane_vc

0x6cba,	// (0x000589ba) list_form_graphic_pane_cp_vc_ParamLimits

0x6cba,	// (0x000589ba) list_form_graphic_pane_cp_vc

0x4f91,	// (0x00056c91) form_field_popup_wide_pane_vc_g1

0x6ccf,	// (0x000589cf) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6ccf,	// (0x000589cf) form_field_popup_wide_pane_vc_t1

0x39a8,	// (0x000556a8) input_focus_pane_cp8_vc_ParamLimits

0x39a8,	// (0x000556a8) input_focus_pane_cp8_vc

0x6d14,	// (0x00058a14) list_form_wide_pane_vc_ParamLimits

0x6d14,	// (0x00058a14) list_form_wide_pane_vc

0x6d20,	// (0x00058a20) list_form_graphic_pane_vc_g1

0x6d28,	// (0x00058a28) list_form_graphic_pane_vc_t1_ParamLimits

0x6d28,	// (0x00058a28) list_form_graphic_pane_vc_t1

0x2d36,	// (0x00054a36) list_highlight_pane_cp5_vc_ParamLimits

0x2d36,	// (0x00054a36) list_highlight_pane_cp5_vc

0x6d44,	// (0x00058a44) list_form_graphic_pane_vc_ParamLimits

0x6d44,	// (0x00058a44) list_form_graphic_pane_vc

0x4f91,	// (0x00056c91) form_field_popup_pane_vc_g1

0x6d5a,	// (0x00058a5a) form_field_popup_pane_vc_t1_ParamLimits

0x6d5a,	// (0x00058a5a) form_field_popup_pane_vc_t1

0x39a8,	// (0x000556a8) input_focus_pane_cp7_vc_ParamLimits

0x39a8,	// (0x000556a8) input_focus_pane_cp7_vc

0x6d71,	// (0x00058a71) list_form_pane_vc_ParamLimits

0x6d71,	// (0x00058a71) list_form_pane_vc

0x6d7d,	// (0x00058a7d) data_form_pane_vc_t1_ParamLimits

0x6d7d,	// (0x00058a7d) data_form_pane_vc_t1

0x39f4,	// (0x000556f4) input_focus_pane_vc_g1

0x39fc,	// (0x000556fc) input_focus_pane_vc_g2

0x3a04,	// (0x00055704) input_focus_pane_vc_g3

0x3a0c,	// (0x0005570c) input_focus_pane_vc_g4

0x3a14,	// (0x00055714) input_focus_pane_vc_g5

0x3a1c,	// (0x0005571c) input_focus_pane_vc_g6

0x3a24,	// (0x00055724) input_focus_pane_vc_g7

0x3a2c,	// (0x0005572c) input_focus_pane_vc_g8

0x3a34,	// (0x00055734) input_focus_pane_vc_g9

0xd06b,	// (0x0005ed6b) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x0006136c) input_focus_pane_vc_g

0x4f85,	// (0x00056c85) data_form_pane_vc_ParamLimits

0x4f85,	// (0x00056c85) data_form_pane_vc

0x4f91,	// (0x00056c91) form_field_data_pane_vc_g1

0x6d98,	// (0x00058a98) form_field_data_pane_vc_t1_ParamLimits

0x6d98,	// (0x00058a98) form_field_data_pane_vc_t1

0x39a8,	// (0x000556a8) input_focus_pane_vc_ParamLimits

0x39a8,	// (0x000556a8) input_focus_pane_vc

0x6db2,	// (0x00058ab2) button_value_adjust_pane_cp3_vc

0x6dba,	// (0x00058aba) button_value_adjust_pane_cp5_vc

0x6dc2,	// (0x00058ac2) form_field_data_pane_vc_ParamLimits

0x6dc2,	// (0x00058ac2) form_field_data_pane_vc

0x6dd9,	// (0x00058ad9) form_field_data_pane_vc_cp2

0x6de1,	// (0x00058ae1) form_field_data_wide_pane_vc_ParamLimits

0x6de1,	// (0x00058ae1) form_field_data_wide_pane_vc

0x6df7,	// (0x00058af7) form_field_data_wide_pane_vc_cp2

0x6dff,	// (0x00058aff) form_field_popup_pane_vc_ParamLimits

0x6dff,	// (0x00058aff) form_field_popup_pane_vc

0x6e16,	// (0x00058b16) form_field_popup_wide_pane_vc_ParamLimits

0x6e16,	// (0x00058b16) form_field_popup_wide_pane_vc

0x6e2c,	// (0x00058b2c) form_field_slider_pane_vc_ParamLimits

0x6e2c,	// (0x00058b2c) form_field_slider_pane_vc

0x6e3f,	// (0x00058b3f) form_field_slider_wide_pane_vc_ParamLimits

0x6e3f,	// (0x00058b3f) form_field_slider_wide_pane_vc

0xdba6,	// (0x0005f8a6) grid_touch_1_pane_ParamLimits

0xdba6,	// (0x0005f8a6) grid_touch_1_pane

0xdbba,	// (0x0005f8ba) grid_touch_2_pane_ParamLimits

0xdbba,	// (0x0005f8ba) grid_touch_2_pane

0x6f23,	// (0x00058c23) touch_pane_g1_ParamLimits

0x6f23,	// (0x00058c23) touch_pane_g1

0x6e76,	// (0x00058b76) cell_app_pane_cp_wide_ParamLimits

0x6e76,	// (0x00058b76) cell_app_pane_cp_wide

0x6e87,	// (0x00058b87) grid_popup_fast_wide_pane_ParamLimits

0x6e87,	// (0x00058b87) grid_popup_fast_wide_pane

0x6e9b,	// (0x00058b9b) scroll_pane_cp19_ParamLimits

0x6e9b,	// (0x00058b9b) scroll_pane_cp19

0x2c56,	// (0x00054956) bg_popup_window_pane_cp20

0x6eaf,	// (0x00058baf) listscroll_popup_fast_wide_pane

0xdbe4,	// (0x0005f8e4) grid_indicator_nsta_pane

0x6ec9,	// (0x00058bc9) clock_nsta_pane_g1

0x6ed2,	// (0x00058bd2) clock_nsta_pane_t1

0xdbf0,	// (0x0005f8f0) cell_indicator_nsta_pane_ParamLimits

0xdbf0,	// (0x0005f8f0) cell_indicator_nsta_pane

0x6f23,	// (0x00058c23) cell_indicator_nsta_pane_g1

0xdc0b,	// (0x0005f90b) cell_indicator_nsta_pane_g2

0x0001,

0xfa70,	// (0x00061770) cell_indicator_nsta_pane_g

0x6f43,	// (0x00058c43) clock_nsta_pane_cp

0x6f4c,	// (0x00058c4c) indicator_nsta_pane_cp

0x6f56,	// (0x00058c56) nsta_clock_indic_pane_g1

0x2dff,	// (0x00054aff) grid_indicator_pane

0x3f41,	// (0x00055c41) scroll_pane_cp29

0x07d0,	// (0x000524d0) indicator_nsta_pane_cp2_ParamLimits

0x07d0,	// (0x000524d0) indicator_nsta_pane_cp2

0x2d36,	// (0x00054a36) main_apps_wheel_pane

0x51a0,	// (0x00056ea0) form_midp_field_text_pane_ParamLimits

0x52eb,	// (0x00056feb) scroll_bar_cp050_ParamLimits

0x6faf,	// (0x00058caf) cell_indicator_pane_ParamLimits

0x6faf,	// (0x00058caf) cell_indicator_pane

0x6fc6,	// (0x00058cc6) cell_indicator_pane_g1

0xdc18,	// (0x0005f918) grid_wheel_folder_pane_ParamLimits

0xdc18,	// (0x0005f918) grid_wheel_folder_pane

0xdc26,	// (0x0005f926) list_wheel_apps_pane_ParamLimits

0xdc26,	// (0x0005f926) list_wheel_apps_pane

0xdc34,	// (0x0005f934) main_apps_wheel_pane_g1_ParamLimits

0xdc34,	// (0x0005f934) main_apps_wheel_pane_g1

0xdc40,	// (0x0005f940) main_apps_wheel_pane_g2_ParamLimits

0xdc40,	// (0x0005f940) main_apps_wheel_pane_g2

0x0001,

0xfa8c,	// (0x0006178c) main_apps_wheel_pane_g_ParamLimits

0xfa8c,	// (0x0006178c) main_apps_wheel_pane_g

0xdc4e,	// (0x0005f94e) main_apps_wheel_pane_t1_ParamLimits

0xdc4e,	// (0x0005f94e) main_apps_wheel_pane_t1

0xdc62,	// (0x0005f962) list_wheel_apps_pane_g1

0xdc6a,	// (0x0005f96a) list_wheel_apps_pane_g2

0xdc72,	// (0x0005f972) list_wheel_apps_pane_g3

0xdc7a,	// (0x0005f97a) list_wheel_apps_pane_g4

0xdc84,	// (0x0005f984) list_wheel_apps_pane_g5

0x0004,

0xfa91,	// (0x00061791) list_wheel_apps_pane_g

0x44e0,	// (0x000561e0) navi_icon_text_pane

0xd28a,	// (0x0005ef8a) aid_fill_nsta

0x708b,	// (0x00058d8b) navi_icon_text_pane_g1

0x7097,	// (0x00058d97) navi_icon_text_pane_t1

0x4373,	// (0x00056073) list_set_graphic_pane_t1_ParamLimits

0x4373,	// (0x00056073) list_set_graphic_pane_t1

0x5a62,	// (0x00057762) popup_midp_note_alarm_window_t6_ParamLimits

0x5a62,	// (0x00057762) popup_midp_note_alarm_window_t6

0x5a74,	// (0x00057774) popup_midp_note_alarm_window_t7_ParamLimits

0x5a74,	// (0x00057774) popup_midp_note_alarm_window_t7

0x5a86,	// (0x00057786) popup_midp_note_alarm_window_t8_ParamLimits

0x5a86,	// (0x00057786) popup_midp_note_alarm_window_t8

0x5a98,	// (0x00057798) popup_midp_note_alarm_window_t9_ParamLimits

0x5a98,	// (0x00057798) popup_midp_note_alarm_window_t9

0x5aaa,	// (0x000577aa) popup_midp_note_alarm_window_t10_ParamLimits

0x5aaa,	// (0x000577aa) popup_midp_note_alarm_window_t10

0x5abc,	// (0x000577bc) popup_midp_note_alarm_window_t11_ParamLimits

0x5abc,	// (0x000577bc) popup_midp_note_alarm_window_t11

0x5ace,	// (0x000577ce) scroll_pane_cp17_ParamLimits

0x5ace,	// (0x000577ce) scroll_pane_cp17

0x1308,	// (0x00053008) volume_small_pane_cp_g1

0x1918,	// (0x00053618) volume_small_pane_cp_g2

0x1921,	// (0x00053621) volume_small_pane_cp_g3

0x192a,	// (0x0005362a) volume_small_pane_cp_g4

0x1933,	// (0x00053633) volume_small_pane_cp_g5

0x193c,	// (0x0005363c) volume_small_pane_cp_g6

0x1945,	// (0x00053645) volume_small_pane_cp_g7

0x194e,	// (0x0005364e) volume_small_pane_cp_g8

0x1957,	// (0x00053657) volume_small_pane_cp_g9

0x1960,	// (0x00053660) volume_small_pane_cp_g10

0x473a,	// (0x0005643a) midp_ticker_pane_g1_ParamLimits

0x4746,	// (0x00056446) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x00061438) midp_ticker_pane_g_ParamLimits

0x4752,	// (0x00056452) midp_ticker_pane_t1_ParamLimits

0xd2ae,	// (0x0005efae) aid_fill_nsta_2

0x52d7,	// (0x00056fd7) list_form2_midp_pane

0x6427,	// (0x00058127) midp_editing_number_pane_ParamLimits

0x6436,	// (0x00058136) midp_ticker_pane_ParamLimits

0x70a9,	// (0x00058da9) form2_midp_field_pane

0x70cd,	// (0x00058dcd) scroll_pane_cp51

0x70ed,	// (0x00058ded) form2_midp_button_pane_ParamLimits

0x70ed,	// (0x00058ded) form2_midp_button_pane

0x70ff,	// (0x00058dff) form2_midp_content_pane_ParamLimits

0x70ff,	// (0x00058dff) form2_midp_content_pane

0x7119,	// (0x00058e19) form2_midp_field_choice_group_pane

0x7121,	// (0x00058e21) form2_midp_field_pane_g1

0x7129,	// (0x00058e29) form2_midp_field_pane_g2

0x7131,	// (0x00058e31) form2_midp_field_pane_g3

0x7139,	// (0x00058e39) form2_midp_field_pane_g4

0x0003,

0xfab6,	// (0x000617b6) form2_midp_field_pane_g

0x7141,	// (0x00058e41) form2_midp_gauge_slider_pane

0x7149,	// (0x00058e49) form2_midp_gauge_wait_pane

0x7151,	// (0x00058e51) form2_midp_image_pane_ParamLimits

0x7151,	// (0x00058e51) form2_midp_image_pane

0x716c,	// (0x00058e6c) form2_midp_label_pane_ParamLimits

0x716c,	// (0x00058e6c) form2_midp_label_pane

0xdcb7,	// (0x0005f9b7) form2_midp_label_pane_cp_ParamLimits

0xdcb7,	// (0x0005f9b7) form2_midp_label_pane_cp

0x71a6,	// (0x00058ea6) form2_midp_string_pane_ParamLimits

0x71a6,	// (0x00058ea6) form2_midp_string_pane

0xc8b2,	// (0x0005e5b2) form2_midp_text_pane_ParamLimits

0xc8b2,	// (0x0005e5b2) form2_midp_text_pane

0x71b8,	// (0x00058eb8) form2_midp_time_pane

0x71c8,	// (0x00058ec8) input_focus_pane_cp51_ParamLimits

0x71c8,	// (0x00058ec8) input_focus_pane_cp51

0x71e0,	// (0x00058ee0) form2_midp_label_pane_t1_ParamLimits

0x71e0,	// (0x00058ee0) form2_midp_label_pane_t1

0xc8cb,	// (0x0005e5cb) form2_mdip_text_pane_t1_ParamLimits

0xc8cb,	// (0x0005e5cb) form2_mdip_text_pane_t1

0x19a6,	// (0x000536a6) form2_midp_time_pane_t1

0x7229,	// (0x00058f29) form2_midp_gauge_slider_pane_t1

0xdcd6,	// (0x0005f9d6) form2_midp_gauge_slider_pane_t2

0xdce8,	// (0x0005f9e8) form2_midp_gauge_slider_pane_t3

0x0002,

0xfabf,	// (0x000617bf) form2_midp_gauge_slider_pane_t

0x725f,	// (0x00058f5f) form2_midp_slider_pane

0x726b,	// (0x00058f6b) form2_midp_gauge_wait_pane_t1

0x7279,	// (0x00058f79) form2_midp_wait_pane_ParamLimits

0x7279,	// (0x00058f79) form2_midp_wait_pane

0xdcfa,	// (0x0005f9fa) list_single_2graphic_pane_cp4_ParamLimits

0xdcfa,	// (0x0005f9fa) list_single_2graphic_pane_cp4

0xd6ca,	// (0x0005f3ca) list_single_midp_graphic_pane_cp_ParamLimits

0xd6ca,	// (0x0005f3ca) list_single_midp_graphic_pane_cp

0x2c56,	// (0x00054956) list_highlight_pane_cp20

0x72c8,	// (0x00058fc8) list_single_2graphic_pane_g1_cp4

0x72d0,	// (0x00058fd0) list_single_2graphic_pane_g2_cp4

0x72d8,	// (0x00058fd8) list_single_2graphic_pane_t1_cp4

0x2d36,	// (0x00054a36) list_highlight_pane_cp21

0x72e7,	// (0x00058fe7) list_single_midp_graphic_pane_g4_cp

0x72f6,	// (0x00058ff6) list_single_midp_graphic_pane_t1_cp

0xdd0e,	// (0x0005fa0e) form2_mdip_string_pane_t1_ParamLimits

0xdd0e,	// (0x0005fa0e) form2_mdip_string_pane_t1

0x2c56,	// (0x00054956) bg_wml_button_pane_cp2

0xd06b,	// (0x0005ed6b) form2_midp_image_pane_g1

0x35e4,	// (0x000552e4) list_double_large_graphic_pane_g5_ParamLimits

0x35e4,	// (0x000552e4) list_double_large_graphic_pane_g5

0xd10d,	// (0x0005ee0d) midp_form_pane_ParamLimits

0x2d36,	// (0x00054a36) main_apps_wheel_pane_ParamLimits

0xc53e,	// (0x0005e23e) popup_preview_window_ParamLimits

0xc53e,	// (0x0005e23e) popup_preview_window

0x1080,	// (0x00052d80) popup_touch_info_window_ParamLimits

0x1080,	// (0x00052d80) popup_touch_info_window

0x109e,	// (0x00052d9e) popup_touch_menu_window_ParamLimits

0x109e,	// (0x00052d9e) popup_touch_menu_window

0xd061,	// (0x0005ed61) bg_popup_sub_pane_cp6

0x7404,	// (0x00059104) list_touch_menu_pane

0x740c,	// (0x0005910c) list_single_touch_menu_pane_ParamLimits

0x740c,	// (0x0005910c) list_single_touch_menu_pane

0x7422,	// (0x00059122) list_single_touch_menu_pane_t1

0x2d36,	// (0x00054a36) bg_popup_sub_pane_cp7_ParamLimits

0x2d36,	// (0x00054a36) bg_popup_sub_pane_cp7

0x7430,	// (0x00059130) heading_sub_pane

0x7438,	// (0x00059138) list_touch_info_pane_ParamLimits

0x7438,	// (0x00059138) list_touch_info_pane

0x7447,	// (0x00059147) list_single_touch_info_pane_ParamLimits

0x7447,	// (0x00059147) list_single_touch_info_pane

0x7459,	// (0x00059159) list_single_touch_info_pane_t1

0x7467,	// (0x00059167) list_single_touch_info_pane_t2

0x0001,

0xfacd,	// (0x000617cd) list_single_touch_info_pane_t

0x465d,	// (0x0005635d) bg_popup_heading_pane_cp

0x7475,	// (0x00059175) heading_sub_pane_t1

0x4f1f,	// (0x00056c1f) bg_popup_preview_window_pane_cp_ParamLimits

0x4f1f,	// (0x00056c1f) bg_popup_preview_window_pane_cp

0x7430,	// (0x00059130) heading_preview_pane

0x7438,	// (0x00059138) list_preview_pane_ParamLimits

0x7438,	// (0x00059138) list_preview_pane

0x7483,	// (0x00059183) popup_preview_window_g1

0x7447,	// (0x00059147) list_single_preview_pane_ParamLimits

0x7447,	// (0x00059147) list_single_preview_pane

0x748b,	// (0x0005918b) list_single_preview_pane_g1

0x7493,	// (0x00059193) list_single_preview_pane_t1

0x7459,	// (0x00059159) list_single_preview_pane_t2

0x0001,

0xfad2,	// (0x000617d2) list_single_preview_pane_t

0x74a1,	// (0x000591a1) bg_popup_heading_pane_cp2_ParamLimits

0x74a1,	// (0x000591a1) bg_popup_heading_pane_cp2

0x74b7,	// (0x000591b7) heading_preview_pane_g1

0x74bf,	// (0x000591bf) heading_preview_pane_t1_ParamLimits

0x74bf,	// (0x000591bf) heading_preview_pane_t1

0x2e22,	// (0x00054b22) soft_indicator_pane_t1_ParamLimits

0x3536,	// (0x00055236) scroll_pane_ParamLimits

0x3e3a,	// (0x00055b3a) scroll_sc2_left_pane

0x3e43,	// (0x00055b43) scroll_sc2_right_pane

0x3e62,	// (0x00055b62) scroll_bg_pane_g1_ParamLimits

0x3e77,	// (0x00055b77) scroll_bg_pane_g2_ParamLimits

0x3e8f,	// (0x00055b8f) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x000613c3) scroll_bg_pane_g_ParamLimits

0x3e62,	// (0x00055b62) scroll_handle_pane_g1_ParamLimits

0x3eb1,	// (0x00055bb1) scroll_handle_pane_g2_ParamLimits

0x3e8f,	// (0x00055b8f) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x000613ca) scroll_handle_pane_g_ParamLimits

0x0b44,	// (0x00052844) popup_choice_list_window_ParamLimits

0x0b44,	// (0x00052844) popup_choice_list_window

0x4df5,	// (0x00056af5) choice_list_pane

0x4e77,	// (0x00056b77) cell_toolbar_pane_t1

0x4e9f,	// (0x00056b9f) toolbar_button_pane_ParamLimits

0x5f88,	// (0x00057c88) ai_gene_pane_1_t2_ParamLimits

0x5f88,	// (0x00057c88) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x000615ed) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x000615ed) ai_gene_pane_1_t

0x74dc,	// (0x000591dc) scroll_sc2_left_pane_g1

0x74dc,	// (0x000591dc) scroll_sc2_right_pane_g1

0x4981,	// (0x00056681) bg_popup_sub_pane_cp10

0x74e6,	// (0x000591e6) list_choice_list_pane

0x74ff,	// (0x000591ff) list_single_choice_list_pane_ParamLimits

0x74ff,	// (0x000591ff) list_single_choice_list_pane

0x7512,	// (0x00059212) list_single_choice_list_pane_g1

0x3b40,	// (0x00055840) list_single_choice_list_pane_t1_ParamLimits

0x3b40,	// (0x00055840) list_single_choice_list_pane_t1

0x751a,	// (0x0005921a) choice_list_pane_g1

0x7522,	// (0x00059222) choice_list_pane_t1

0xd061,	// (0x0005ed61) input_focus_pane_cp11

0x3d17,	// (0x00055a17) title_pane_stacon_g2_ParamLimits

0x3d17,	// (0x00055a17) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x000613a9) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x000613a9) title_pane_stacon_g

0x465d,	// (0x0005635d) cursor_press_pane

0xc1e5,	// (0x0005dee5) popup_fep_hwr_window_ParamLimits

0xc1e5,	// (0x0005dee5) popup_fep_hwr_window

0x0c6a,	// (0x0005296a) popup_fep_vkb_window_ParamLimits

0x0c6a,	// (0x0005296a) popup_fep_vkb_window

0x7530,	// (0x00059230) cursor_press_pane_g1

0x0002,

0xfafb,	// (0x000617fb) fep_vkb_side_pane_g_ParamLimits

0x19f2,	// (0x000536f2) fep_hwr_candidate_pane_ParamLimits

0x19f2,	// (0x000536f2) fep_hwr_candidate_pane

0x1a1c,	// (0x0005371c) fep_hwr_side_pane_ParamLimits

0x1a1c,	// (0x0005371c) fep_hwr_side_pane

0x1a3c,	// (0x0005373c) fep_hwr_top_pane_ParamLimits

0x1a3c,	// (0x0005373c) fep_hwr_top_pane

0x1a54,	// (0x00053754) fep_hwr_write_pane_ParamLimits

0x1a54,	// (0x00053754) fep_hwr_write_pane

0xfafb,	// (0x000617fb) fep_vkb_side_pane_g

0x7538,	// (0x00059238) fep_hwr_top_pane_g1

0x754a,	// (0x0005924a) fep_hwr_top_pane_g2

0x1a8e,	// (0x0005378e) fep_hwr_top_pane_g3

0x0002,

0xfad7,	// (0x000617d7) fep_hwr_top_pane_g

0x1aa3,	// (0x000537a3) fep_hwr_top_text_pane

0x4031,	// (0x00055d31) fep_hwr_top_text_pane_g1

0x7580,	// (0x00059280) fep_hwr_top_text_pane_t1

0x1b99,	// (0x00053899) fep_hwr_candidate_pane_g1

0x77d3,	// (0x000594d3) fep_vkb_keypad_pane_g3_ParamLimits

0x77d3,	// (0x000594d3) fep_vkb_keypad_pane_g3

0x77fb,	// (0x000594fb) fep_vkb_keypad_pane_g4_ParamLimits

0x77fb,	// (0x000594fb) fep_vkb_keypad_pane_g4

0x786a,	// (0x0005956a) fep_vkb_bottom_pane_g2_ParamLimits

0x786a,	// (0x0005956a) fep_vkb_bottom_pane_g2

0x0001,

0xfb02,	// (0x00061802) fep_vkb_bottom_pane_g_ParamLimits

0xfb02,	// (0x00061802) fep_vkb_bottom_pane_g

0x74dc,	// (0x000591dc) cell_vkb_side_pane_g2

0x0001,

0xfb0c,	// (0x0006180c) cell_vkb_side_pane_g

0x78f5,	// (0x000595f5) cell_vkb_side_pane_t1

0x7903,	// (0x00059603) cell_vkb_side_pane_t1_copy1

0x74dc,	// (0x000591dc) bg_fep_vkb_candidate_pane_g2

0x7a2f,	// (0x0005972f) cell_vkb_candidate_pane_ParamLimits

0x758e,	// (0x0005928e) aid_size_cell_vkb_ParamLimits

0x758e,	// (0x0005928e) aid_size_cell_vkb

0x7a2f,	// (0x0005972f) cell_vkb_candidate_pane

0x1bc0,	// (0x000538c0) bg_popup_fep_shadow_pane_g1

0xde11,	// (0x0005fb11) fep_vkb_bottom_pane_ParamLimits

0xde11,	// (0x0005fb11) fep_vkb_bottom_pane

0x7652,	// (0x00059352) fep_vkb_candidate_pane_ParamLimits

0x7652,	// (0x00059352) fep_vkb_candidate_pane

0xde36,	// (0x0005fb36) fep_vkb_keypad_pane_ParamLimits

0xde36,	// (0x0005fb36) fep_vkb_keypad_pane

0xde72,	// (0x0005fb72) fep_vkb_side_pane_ParamLimits

0xde72,	// (0x0005fb72) fep_vkb_side_pane

0xdeae,	// (0x0005fbae) fep_vkb_top_pane_ParamLimits

0xdeae,	// (0x0005fbae) fep_vkb_top_pane

0x772c,	// (0x0005942c) fep_vkb_top_pane_g1_ParamLimits

0x772c,	// (0x0005942c) fep_vkb_top_pane_g1

0x773b,	// (0x0005943b) fep_vkb_top_pane_g2_ParamLimits

0x773b,	// (0x0005943b) fep_vkb_top_pane_g2

0x774a,	// (0x0005944a) fep_vkb_top_pane_g3_ParamLimits

0x774a,	// (0x0005944a) fep_vkb_top_pane_g3

0x0003,

0xfaf2,	// (0x000617f2) fep_vkb_top_pane_g_ParamLimits

0xfaf2,	// (0x000617f2) fep_vkb_top_pane_g

0x7768,	// (0x00059468) fep_vkb_top_text_pane_ParamLimits

0x7768,	// (0x00059468) fep_vkb_top_text_pane

0xdeea,	// (0x0005fbea) fep_vkb_side_pane_g1_ParamLimits

0xdeea,	// (0x0005fbea) fep_vkb_side_pane_g1

0x77c2,	// (0x000594c2) grid_vkb_side_pane_ParamLimits

0x77c2,	// (0x000594c2) grid_vkb_side_pane

0x1bc8,	// (0x000538c8) bg_popup_fep_shadow_pane_g2

0x1bd1,	// (0x000538d1) bg_popup_fep_shadow_pane_g3

0x1bd9,	// (0x000538d9) bg_popup_fep_shadow_pane_g4

0x1be2,	// (0x000538e2) bg_popup_fep_shadow_pane_g5

0x1bec,	// (0x000538ec) bg_popup_fep_shadow_pane_g6

0x1bf4,	// (0x000538f4) bg_popup_fep_shadow_pane_g7

0x3a0c,	// (0x0005570c) bg_popup_fep_shadow_pane_g8

0x7819,	// (0x00059519) grid_vkb_keypad_number_pane_ParamLimits

0x7819,	// (0x00059519) grid_vkb_keypad_number_pane

0x7829,	// (0x00059529) grid_vkb_keypad_pane_ParamLimits

0x7829,	// (0x00059529) grid_vkb_keypad_pane

0x784f,	// (0x0005954f) fep_vkb_bottom_pane_g1_ParamLimits

0x784f,	// (0x0005954f) fep_vkb_bottom_pane_g1

0x7878,	// (0x00059578) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7878,	// (0x00059578) grid_vkb_keypad_bottom_left_pane

0x788d,	// (0x0005958d) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x788d,	// (0x0005958d) grid_vkb_keypad_bottom_right_pane

0x78a2,	// (0x000595a2) fep_vkb_top_text_pane_g1

0xdf31,	// (0x0005fc31) fep_vkb_top_text_pane_t1

0xdf43,	// (0x0005fc43) cell_vkb_side_pane_ParamLimits

0xdf43,	// (0x0005fc43) cell_vkb_side_pane

0x74dc,	// (0x000591dc) cell_vkb_side_pane_g1

0x7911,	// (0x00059611) cell_vkb_keypad_pane_ParamLimits

0x7911,	// (0x00059611) cell_vkb_keypad_pane

0x7986,	// (0x00059686) cell_vkb_keypad_pane_g1

0x0008,

0xfb1f,	// (0x0006181f) bg_popup_fep_shadow_pane_g

0x1c06,	// (0x00053906) cell_hwr_side_pane_g1

0x1c06,	// (0x00053906) cell_hwr_side_pane_g2

0x7990,	// (0x00059690) cell_vkb_keypad_pane_t1

0xdf59,	// (0x0005fc59) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdf59,	// (0x0005fc59) cell_vkb_keypad_bottom_left_pane

0xdf6e,	// (0x0005fc6e) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdf6e,	// (0x0005fc6e) cell_vkb_keypad_bottom_right_pane

0x74dc,	// (0x000591dc) cell_vkb_keypad_bottom_left_pane_g1

0x74dc,	// (0x000591dc) cell_vkb_keypad_bottom_right_pane_g1

0x79f4,	// (0x000596f4) cell_vkb_keypad_number_pane_ParamLimits

0x79f4,	// (0x000596f4) cell_vkb_keypad_number_pane

0x7a13,	// (0x00059713) cell_vkb_keypad_number_pane_g1

0x7a1d,	// (0x0005971d) cell_vkb_keypad_number_pane_g2

0x7a26,	// (0x00059726) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb11,	// (0x00061811) cell_vkb_keypad_number_pane_g

0x7990,	// (0x00059690) cell_vkb_keypad_number_pane_t1

0x7a4a,	// (0x0005974a) fep_vkb_candidate_pane_g1

0x0001,

0xfb32,	// (0x00061832) cell_hwr_side_pane_g

0x7a63,	// (0x00059763) cell_hwr_side_pane_t1

0x1c10,	// (0x00053910) cell_hwr_side_pane_t1_copy1

0x1c1e,	// (0x0005391e) cell_hwr_candidate_pane_g1

0x1c4d,	// (0x0005394d) cell_hwr_candidate_pane_t1

0x74dc,	// (0x000591dc) cell_vkb_candidate_pane_g2

0x7aa7,	// (0x000597a7) cell_vkb_candidate_pane_t1

0x19b9,	// (0x000536b9) bg_popup_fep_shadow_pane_ParamLimits

0x19b9,	// (0x000536b9) bg_popup_fep_shadow_pane

0x1a6e,	// (0x0005376e) bg_fep_hwr_top_pane_g4

0x755c,	// (0x0005925c) bg_hwr_side_pane_g1_ParamLimits

0x755c,	// (0x0005925c) bg_hwr_side_pane_g1

0xc8fc,	// (0x0005e5fc) cell_hwr_side_pane_ParamLimits

0xc8fc,	// (0x0005e5fc) cell_hwr_side_pane

0x1b1a,	// (0x0005381a) fep_hwr_write_pane_g1_ParamLimits

0x1b1a,	// (0x0005381a) fep_hwr_write_pane_g1

0x1b27,	// (0x00053827) fep_hwr_write_pane_g2_ParamLimits

0x1b27,	// (0x00053827) fep_hwr_write_pane_g2

0x1b34,	// (0x00053834) fep_hwr_write_pane_g3_ParamLimits

0x1b34,	// (0x00053834) fep_hwr_write_pane_g3

0xc91c,	// (0x0005e61c) fep_hwr_write_pane_g4_ParamLimits

0xc91c,	// (0x0005e61c) fep_hwr_write_pane_g4

0x0005,

0xfade,	// (0x000617de) fep_hwr_write_pane_g_ParamLimits

0xfade,	// (0x000617de) fep_hwr_write_pane_g

0x1a6e,	// (0x0005376e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1a6e,	// (0x0005376e) bg_fep_hwr_candidate_pane_g2

0x1b57,	// (0x00053857) cell_hwr_candidate_pane_ParamLimits

0x1b57,	// (0x00053857) cell_hwr_candidate_pane

0x1b99,	// (0x00053899) fep_hwr_candidate_pane_g1_ParamLimits

0x75bc,	// (0x000592bc) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x75bc,	// (0x000592bc) bg_popup_fep_shadow_pane_cp2

0x775a,	// (0x0005945a) fep_vkb_top_pane_g4_ParamLimits

0x775a,	// (0x0005945a) fep_vkb_top_pane_g4

0x77a0,	// (0x000594a0) fep_vkb_side_pane_g2_ParamLimits

0x77a0,	// (0x000594a0) fep_vkb_side_pane_g2

0xbc33,	// (0x0005d933) list_setting_pane_t4_ParamLimits

0xbc33,	// (0x0005d933) list_setting_pane_t4

0xbcb5,	// (0x0005d9b5) list_setting_number_pane_t5_ParamLimits

0xbcb5,	// (0x0005d9b5) list_setting_number_pane_t5

0x4068,	// (0x00055d68) list_double_heading_pane_cp2_ParamLimits

0x4068,	// (0x00055d68) list_double_heading_pane_cp2

0x35cc,	// (0x000552cc) list_double_heading_pane_g1_cp2_ParamLimits

0x35cc,	// (0x000552cc) list_double_heading_pane_g1_cp2

0x39b6,	// (0x000556b6) list_double_heading_pane_g2_cp2_ParamLimits

0x39b6,	// (0x000556b6) list_double_heading_pane_g2_cp2

0x7ab5,	// (0x000597b5) list_double_heading_pane_t1_cp2_ParamLimits

0x7ab5,	// (0x000597b5) list_double_heading_pane_t1_cp2

0x7acb,	// (0x000597cb) list_double_heading_pane_t2_cp2_ParamLimits

0x7acb,	// (0x000597cb) list_double_heading_pane_t2_cp2

0xd059,	// (0x0005ed59) aid_value_unit2

0xf41a,	// (0x0006111a) popup_preview_fixed_window

0x2fbf,	// (0x00054cbf) bg_popup_preview_window_pane_cp02

0x7add,	// (0x000597dd) list_preview_fixed_pane

0x7b23,	// (0x00059823) list_empty_pane_fp_ParamLimits

0x7b23,	// (0x00059823) list_empty_pane_fp

0x7b23,	// (0x00059823) list_single_cale_day_pane_fp_ParamLimits

0x7b23,	// (0x00059823) list_single_cale_day_pane_fp

0x7b23,	// (0x00059823) list_single_graphic_heading_pane_fp_ParamLimits

0x7b23,	// (0x00059823) list_single_graphic_heading_pane_fp

0x7b23,	// (0x00059823) list_single_graphic_pane_fp_ParamLimits

0x7b23,	// (0x00059823) list_single_graphic_pane_fp

0x7b23,	// (0x00059823) list_single_heading_pane_fp_ParamLimits

0x7b23,	// (0x00059823) list_single_heading_pane_fp

0x7b23,	// (0x00059823) list_single_pane_fp_ParamLimits

0x7b23,	// (0x00059823) list_single_pane_fp

0x7b38,	// (0x00059838) list_single_pane_fp_g1_ParamLimits

0x7b38,	// (0x00059838) list_single_pane_fp_g1

0x35cc,	// (0x000552cc) list_single_pane_fp_g2_ParamLimits

0x35cc,	// (0x000552cc) list_single_pane_fp_g2

0x39b6,	// (0x000556b6) list_single_pane_fp_g3_ParamLimits

0x39b6,	// (0x000556b6) list_single_pane_fp_g3

0x7b44,	// (0x00059844) list_single_pane_fp_g4_ParamLimits

0x7b44,	// (0x00059844) list_single_pane_fp_g4

0x0003,

0xfb45,	// (0x00061845) list_single_pane_fp_g_ParamLimits

0xfb45,	// (0x00061845) list_single_pane_fp_g

0x1c6b,	// (0x0005396b) list_single_pane_fp_t1_ParamLimits

0x1c6b,	// (0x0005396b) list_single_pane_fp_t1

0x1c82,	// (0x00053982) list_single_graphic_pane_fp_g1_ParamLimits

0x1c82,	// (0x00053982) list_single_graphic_pane_fp_g1

0x7b38,	// (0x00059838) list_single_graphic_pane_fp_g2_ParamLimits

0x7b38,	// (0x00059838) list_single_graphic_pane_fp_g2

0x35cc,	// (0x000552cc) list_single_graphic_pane_fp_g3_ParamLimits

0x35cc,	// (0x000552cc) list_single_graphic_pane_fp_g3

0x39b6,	// (0x000556b6) list_single_graphic_pane_fp_g4_ParamLimits

0x39b6,	// (0x000556b6) list_single_graphic_pane_fp_g4

0x7b44,	// (0x00059844) list_single_graphic_pane_fp_g5_ParamLimits

0x7b44,	// (0x00059844) list_single_graphic_pane_fp_g5

0x0004,

0xfb4e,	// (0x0006184e) list_single_graphic_pane_fp_g_ParamLimits

0xfb4e,	// (0x0006184e) list_single_graphic_pane_fp_g

0x1c8e,	// (0x0005398e) list_single_graphic_pane_fp_t1_ParamLimits

0x1c8e,	// (0x0005398e) list_single_graphic_pane_fp_t1

0x1c82,	// (0x00053982) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x1c82,	// (0x00053982) list_single_graphic_heading_pane_fp_g1

0x7b38,	// (0x00059838) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7b38,	// (0x00059838) list_single_graphic_heading_pane_fp_g2

0x35cc,	// (0x000552cc) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x35cc,	// (0x000552cc) list_single_graphic_heading_pane_fp_g3

0x39b6,	// (0x000556b6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x39b6,	// (0x000556b6) list_single_graphic_heading_pane_fp_g4

0x7b44,	// (0x00059844) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7b44,	// (0x00059844) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb4e,	// (0x0006184e) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb4e,	// (0x0006184e) list_single_graphic_heading_pane_fp_g

0x1ca4,	// (0x000539a4) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x1ca4,	// (0x000539a4) list_single_graphic_heading_pane_fp_t1

0x1cba,	// (0x000539ba) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x1cba,	// (0x000539ba) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb59,	// (0x00061859) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb59,	// (0x00061859) list_single_graphic_heading_pane_fp_t

0x1ccc,	// (0x000539cc) list_single_cale_day_pane_fp_g1_ParamLimits

0x1ccc,	// (0x000539cc) list_single_cale_day_pane_fp_g1

0x7b50,	// (0x00059850) list_single_cale_day_pane_fp_g2_ParamLimits

0x7b50,	// (0x00059850) list_single_cale_day_pane_fp_g2

0x3785,	// (0x00055485) list_single_cale_day_pane_fp_g3_ParamLimits

0x3785,	// (0x00055485) list_single_cale_day_pane_fp_g3

0x37ad,	// (0x000554ad) list_single_cale_day_pane_fp_g4_ParamLimits

0x37ad,	// (0x000554ad) list_single_cale_day_pane_fp_g4

0x37d1,	// (0x000554d1) list_single_cale_day_pane_fp_g5_ParamLimits

0x37d1,	// (0x000554d1) list_single_cale_day_pane_fp_g5

0x0004,

0xfb5e,	// (0x0006185e) list_single_cale_day_pane_fp_g_ParamLimits

0xfb5e,	// (0x0006185e) list_single_cale_day_pane_fp_g

0x1d04,	// (0x00053a04) list_single_cale_day_pane_fp_t1_ParamLimits

0x1d04,	// (0x00053a04) list_single_cale_day_pane_fp_t1

0x1d2a,	// (0x00053a2a) list_single_cale_day_pane_fp_t2_ParamLimits

0x1d2a,	// (0x00053a2a) list_single_cale_day_pane_fp_t2

0x1d43,	// (0x00053a43) list_single_cale_day_pane_fp_t3_ParamLimits

0x1d43,	// (0x00053a43) list_single_cale_day_pane_fp_t3

0x0002,

0xfb69,	// (0x00061869) list_single_cale_day_pane_fp_t_ParamLimits

0xfb69,	// (0x00061869) list_single_cale_day_pane_fp_t

0x7b38,	// (0x00059838) list_empty_pane_fp_g1_ParamLimits

0x7b38,	// (0x00059838) list_empty_pane_fp_g1

0x1d5c,	// (0x00053a5c) list_empty_pane_fp_t1

0x1d6a,	// (0x00053a6a) list_empty_pane_fp_t2

0x0001,

0xfb70,	// (0x00061870) list_empty_pane_fp_t

0x7b38,	// (0x00059838) list_single_heading_pane_fp_g1_ParamLimits

0x7b38,	// (0x00059838) list_single_heading_pane_fp_g1

0x35cc,	// (0x000552cc) list_single_heading_pane_fp_g2_ParamLimits

0x35cc,	// (0x000552cc) list_single_heading_pane_fp_g2

0x39b6,	// (0x000556b6) list_single_heading_pane_fp_g3_ParamLimits

0x39b6,	// (0x000556b6) list_single_heading_pane_fp_g3

0x0002,

0xfb75,	// (0x00061875) list_single_heading_pane_fp_g_ParamLimits

0xfb75,	// (0x00061875) list_single_heading_pane_fp_g

0x1d78,	// (0x00053a78) list_single_heading_pane_fp_t1_ParamLimits

0x1d78,	// (0x00053a78) list_single_heading_pane_fp_t1

0x1d8a,	// (0x00053a8a) list_single_heading_pane_fp_t2_ParamLimits

0x1d8a,	// (0x00053a8a) list_single_heading_pane_fp_t2

0x0001,

0xfb7c,	// (0x0006187c) list_single_heading_pane_fp_t_ParamLimits

0xfb7c,	// (0x0006187c) list_single_heading_pane_fp_t

0x3bae,	// (0x000558ae) aid_size_cell_fast

0x2f2f,	// (0x00054c2f) soft_indicator_pane_cp1_t1

0x3beb,	// (0x000558eb) cell_app_pane_cp2_ParamLimits

0x3beb,	// (0x000558eb) cell_app_pane_cp2

0x19db,	// (0x000536db) fep_hwr_candidate_drop_down_list_pane

0x1bb3,	// (0x000538b3) fep_hwr_candidate_pane_g3_ParamLimits

0x1bb3,	// (0x000538b3) fep_hwr_candidate_pane_g3

0xddf2,	// (0x0005faf2) fep_hwr_candidate_pane_g4_ParamLimits

0xddf2,	// (0x0005faf2) fep_hwr_candidate_pane_g4

0x0002,

0xfaeb,	// (0x000617eb) fep_hwr_candidate_pane_g_ParamLimits

0xfaeb,	// (0x000617eb) fep_hwr_candidate_pane_g

0x7641,	// (0x00059341) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7641,	// (0x00059341) fep_vkb_candidate_drop_down_list_pane

0x7a52,	// (0x00059752) fep_vkb_candidate_pane_g3

0x7a5a,	// (0x0005975a) fep_vkb_candidate_pane_g4

0x0002,

0xfb18,	// (0x00061818) fep_vkb_candidate_pane_g

0x1c1e,	// (0x0005391e) cell_hwr_candidate_pane_g1_ParamLimits

0x1c2c,	// (0x0005392c) cell_hwr_candidate_pane_g3_ParamLimits

0x1c2c,	// (0x0005392c) cell_hwr_candidate_pane_g3

0x978c,	// (0x0005b48c) cell_hwr_candidate_pane_g4_ParamLimits

0x978c,	// (0x0005b48c) cell_hwr_candidate_pane_g4

0x0002,

0xfb37,	// (0x00061837) cell_hwr_candidate_pane_g_ParamLimits

0xfb37,	// (0x00061837) cell_hwr_candidate_pane_g

0x7a71,	// (0x00059771) cell_vkb_candidate_pane_g3_ParamLimits

0x7a71,	// (0x00059771) cell_vkb_candidate_pane_g3

0x7a8c,	// (0x0005978c) cell_vkb_candidate_pane_g4_ParamLimits

0x7a8c,	// (0x0005978c) cell_vkb_candidate_pane_g4

0x7b5c,	// (0x0005985c) cell_app_pane_cp2_g1_ParamLimits

0x7b5c,	// (0x0005985c) cell_app_pane_cp2_g1

0x7b7a,	// (0x0005987a) cell_app_pane_cp2_g2_ParamLimits

0x7b7a,	// (0x0005987a) cell_app_pane_cp2_g2

0x0001,

0xfb81,	// (0x00061881) cell_app_pane_cp2_g_ParamLimits

0xfb81,	// (0x00061881) cell_app_pane_cp2_g

0x7b86,	// (0x00059886) cell_app_pane_cp2_t1_ParamLimits

0x7b86,	// (0x00059886) cell_app_pane_cp2_t1

0x39a8,	// (0x000556a8) grid_highlight_pane_cp1_ParamLimits

0x39a8,	// (0x000556a8) grid_highlight_pane_cp1

0x1da0,	// (0x00053aa0) cell_hwr_candidate_pane_cp1_ParamLimits

0x1da0,	// (0x00053aa0) cell_hwr_candidate_pane_cp1

0x1c1e,	// (0x0005391e) fep_hwr_candidate_drop_down_list_pane_g1

0x1dbf,	// (0x00053abf) fep_hwr_candidate_drop_down_list_pane_g2

0x1dcc,	// (0x00053acc) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb86,	// (0x00061886) fep_hwr_candidate_drop_down_list_pane_g

0x1dd9,	// (0x00053ad9) fep_hwr_candidate_drop_down_list_scroll_pane

0x1de2,	// (0x00053ae2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1de2,	// (0x00053ae2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1def,	// (0x00053aef) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1def,	// (0x00053aef) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1dfc,	// (0x00053afc) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1dfc,	// (0x00053afc) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1e09,	// (0x00053b09) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1e09,	// (0x00053b09) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1e24,	// (0x00053b24) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1e24,	// (0x00053b24) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1e3f,	// (0x00053b3f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1e3f,	// (0x00053b3f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1e5a,	// (0x00053b5a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1e5a,	// (0x00053b5a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1e75,	// (0x00053b75) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1e75,	// (0x00053b75) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb8d,	// (0x0006188d) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb8d,	// (0x0006188d) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7b98,	// (0x00059898) cell_vkb_candidate_pane_cp1_ParamLimits

0x7b98,	// (0x00059898) cell_vkb_candidate_pane_cp1

0x775a,	// (0x0005945a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x775a,	// (0x0005945a) fep_vkb_candidate_drop_down_list_pane_g1

0x7bb8,	// (0x000598b8) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7bb8,	// (0x000598b8) fep_vkb_candidate_drop_down_list_pane_g2

0x7bc5,	// (0x000598c5) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7bc5,	// (0x000598c5) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb9e,	// (0x0006189e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb9e,	// (0x0006189e) fep_vkb_candidate_drop_down_list_pane_g

0x7bd2,	// (0x000598d2) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7bd2,	// (0x000598d2) fep_vkb_candidate_drop_down_list_scroll_pane

0x7bdf,	// (0x000598df) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7bdf,	// (0x000598df) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7bec,	// (0x000598ec) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7bec,	// (0x000598ec) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7bf8,	// (0x000598f8) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7bf8,	// (0x000598f8) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7c04,	// (0x00059904) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c04,	// (0x00059904) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7c25,	// (0x00059925) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c25,	// (0x00059925) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7c46,	// (0x00059946) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7c46,	// (0x00059946) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7c67,	// (0x00059967) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7c67,	// (0x00059967) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7c88,	// (0x00059988) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7c88,	// (0x00059988) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba5,	// (0x000618a5) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba5,	// (0x000618a5) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb5e6,	// (0x0005d2e6) title_pane_g1_ParamLimits

0xb5f9,	// (0x0005d2f9) title_pane_g2_ParamLimits

0xf529,	// (0x00061229) title_pane_g_ParamLimits

0x4021,	// (0x00055d21) aid_call2_pane

0x4029,	// (0x00055d29) aid_call_pane

0x4031,	// (0x00055d31) popup_clock_analogue_window_g1

0x4031,	// (0x00055d31) popup_clock_analogue_window_g2

0x0663,	// (0x00052363) popup_clock_analogue_window_g3

0x066c,	// (0x0005236c) popup_clock_analogue_window_g4

0xd06b,	// (0x0005ed6b) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x000613d8) popup_clock_analogue_window_g

0x0674,	// (0x00052374) popup_clock_analogue_window_t1

0x0682,	// (0x00052382) clock_digital_number_pane_ParamLimits

0x0682,	// (0x00052382) clock_digital_number_pane

0x068e,	// (0x0005238e) clock_digital_number_pane_cp02_ParamLimits

0x068e,	// (0x0005238e) clock_digital_number_pane_cp02

0x069a,	// (0x0005239a) clock_digital_number_pane_cp03_ParamLimits

0x069a,	// (0x0005239a) clock_digital_number_pane_cp03

0x06a6,	// (0x000523a6) clock_digital_number_pane_cp04_ParamLimits

0x06a6,	// (0x000523a6) clock_digital_number_pane_cp04

0x06b2,	// (0x000523b2) clock_digital_separator_pane_ParamLimits

0x06b2,	// (0x000523b2) clock_digital_separator_pane

0x06be,	// (0x000523be) popup_clock_digital_window_t1_ParamLimits

0x06be,	// (0x000523be) popup_clock_digital_window_t1

0xd06b,	// (0x0005ed6b) clock_digital_number_pane_g1

0xd06b,	// (0x0005ed6b) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x000613e3) clock_digital_number_pane_g

0xd06b,	// (0x0005ed6b) clock_digital_separator_pane_g1

0xd06b,	// (0x0005ed6b) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x000613e3) clock_digital_separator_pane_g

0xd28a,	// (0x0005ef8a) aid_fill_nsta_ParamLimits

0xd3c0,	// (0x0005f0c0) indicator_nsta_pane_ParamLimits

0x4c82,	// (0x00056982) popup_clock_analogue_window

0x4c82,	// (0x00056982) popup_clock_digital_window

0xdbe4,	// (0x0005f8e4) grid_indicator_nsta_pane_ParamLimits

0x6ee0,	// (0x00058be0) clock_nsta_pane_t2

0x0001,

0xfa6b,	// (0x0006176b) clock_nsta_pane_t

0x0627,	// (0x00052327) aid_size_max_handle

0x0631,	// (0x00052331) aid_size_min_handle

0x465d,	// (0x0005635d) editor_scroll_pane

0x7ca3,	// (0x000599a3) ex_editor_pane

0x3b1c,	// (0x0005581c) scroll_pane_cp13

0x3562,	// (0x00055262) scroll_pane_cp14

0x4060,	// (0x00055d60) scroll_pane_cp36

0xbf69,	// (0x0005dc69) list_single_graphic_hl_pane_cp2_ParamLimits

0xbf69,	// (0x0005dc69) list_single_graphic_hl_pane_cp2

0xda48,	// (0x0005f748) list_single_graphic_hl_pane_ParamLimits

0xda48,	// (0x0005f748) list_single_graphic_hl_pane

0x1e90,	// (0x00053b90) aid_size_min_hl_cp1

0x7cab,	// (0x000599ab) list_highlight_pane_cp34_ParamLimits

0x7cab,	// (0x000599ab) list_highlight_pane_cp34

0x7cbc,	// (0x000599bc) list_single_graphic_hl_pane_g1_ParamLimits

0x7cbc,	// (0x000599bc) list_single_graphic_hl_pane_g1

0xc931,	// (0x0005e631) list_single_graphic_hl_pane_g2_ParamLimits

0xc931,	// (0x0005e631) list_single_graphic_hl_pane_g2

0xc931,	// (0x0005e631) list_single_graphic_hl_pane_g3_ParamLimits

0xc931,	// (0x0005e631) list_single_graphic_hl_pane_g3

0x4535,	// (0x00056235) list_single_graphic_hl_pane_g4_ParamLimits

0x4535,	// (0x00056235) list_single_graphic_hl_pane_g4

0xdd7e,	// (0x0005fa7e) list_single_graphic_hl_pane_g5_ParamLimits

0xdd7e,	// (0x0005fa7e) list_single_graphic_hl_pane_g5

0x0004,

0xfbb6,	// (0x000618b6) list_single_graphic_hl_pane_g_ParamLimits

0xfbb6,	// (0x000618b6) list_single_graphic_hl_pane_g

0xc93d,	// (0x0005e63d) list_single_graphic_hl_pane_t1_ParamLimits

0xc93d,	// (0x0005e63d) list_single_graphic_hl_pane_t1

0x7cc9,	// (0x000599c9) aid_size_min_hl_cp2

0x7cd2,	// (0x000599d2) list_highlight_pane_cp34_cp2_ParamLimits

0x7cd2,	// (0x000599d2) list_highlight_pane_cp34_cp2

0x7cbc,	// (0x000599bc) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7cbc,	// (0x000599bc) list_single_graphic_hl_pane_g1_cp2

0x7cdf,	// (0x000599df) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7cdf,	// (0x000599df) list_single_graphic_hl_pane_g2_cp2

0x7ceb,	// (0x000599eb) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7ceb,	// (0x000599eb) list_single_graphic_hl_pane_g3_cp2

0x7cf9,	// (0x000599f9) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7cf9,	// (0x000599f9) list_single_graphic_hl_pane_g4_cp2

0x7d05,	// (0x00059a05) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7d05,	// (0x00059a05) list_single_graphic_hl_pane_g5_cp2

0xc013,	// (0x0005dd13) control_pane_g4_ParamLimits

0xc013,	// (0x0005dd13) control_pane_g4

0x4981,	// (0x00056681) bg_popup_sub_pane_cp10_ParamLimits

0x74e6,	// (0x000591e6) list_choice_list_pane_ParamLimits

0x74f5,	// (0x000591f5) scroll_pane_cp23

0x2fbf,	// (0x00054cbf) bg_popup_preview_window_pane_cp02_ParamLimits

0x7add,	// (0x000597dd) list_preview_fixed_pane_ParamLimits

0x7af3,	// (0x000597f3) list_preview_fixed_pane_cp_ParamLimits

0x7af3,	// (0x000597f3) list_preview_fixed_pane_cp

0x7aff,	// (0x000597ff) popup_preview_fixed_window_g1_ParamLimits

0x7aff,	// (0x000597ff) popup_preview_fixed_window_g1

0x7b0b,	// (0x0005980b) popup_preview_fixed_window_g2_ParamLimits

0x7b0b,	// (0x0005980b) popup_preview_fixed_window_g2

0x0002,

0xfb3e,	// (0x0006183e) popup_preview_fixed_window_g_ParamLimits

0xfb3e,	// (0x0006183e) popup_preview_fixed_window_g

0x059b,	// (0x0005229b) aid_navi_side_left_pane_ParamLimits

0x05b0,	// (0x000522b0) aid_navi_side_right_pane_ParamLimits

0x05c8,	// (0x000522c8) navi_icon_pane_stacon_ParamLimits

0x05dc,	// (0x000522dc) navi_navi_pane_stacon_ParamLimits

0x05c8,	// (0x000522c8) navi_text_pane_stacon_ParamLimits

0xf311,	// (0x00061011) main_text_info_pane

0x7d2f,	// (0x00059a2f) listscroll_text_info_pane

0x7d37,	// (0x00059a37) list_text_info_pane_ParamLimits

0x7d37,	// (0x00059a37) list_text_info_pane

0x7d46,	// (0x00059a46) scroll_pane_cp24_ParamLimits

0x7d46,	// (0x00059a46) scroll_pane_cp24

0xdf89,	// (0x0005fc89) list_text_info_pane_t1_ParamLimits

0xdf89,	// (0x0005fc89) list_text_info_pane_t1

0xc158,	// (0x0005de58) popup_fast_swap2_window_ParamLimits

0xc158,	// (0x0005de58) popup_fast_swap2_window

0x7d95,	// (0x00059a95) aid_size_cell_fast2

0xd061,	// (0x0005ed61) bg_popup_window_pane_cp17

0x530b,	// (0x0005700b) heading_pane_cp2

0x5313,	// (0x00057013) listscroll_fast2_pane

0x7d9f,	// (0x00059a9f) grid_fast2_pane

0x7da9,	// (0x00059aa9) listscroll_fast2_pane_g1

0x7db1,	// (0x00059ab1) listscroll_fast2_pane_g2

0x0001,

0xfbc1,	// (0x000618c1) listscroll_fast2_pane_g

0x3b1c,	// (0x0005581c) scroll_pane_cp26

0x7dbb,	// (0x00059abb) cell_fast2_pane_ParamLimits

0x7dbb,	// (0x00059abb) cell_fast2_pane

0x7dd0,	// (0x00059ad0) cell_fast2_pane_g1

0x7dd9,	// (0x00059ad9) cell_fast2_pane_g2

0x7de2,	// (0x00059ae2) cell_fast2_pane_g3

0x0002,

0xfbc6,	// (0x000618c6) cell_fast2_pane_g

0x331f,	// (0x0005501f) grid_highlight_pane_cp9

0x0b20,	// (0x00052820) main_eswt_pane_ParamLimits

0x0b20,	// (0x00052820) main_eswt_pane

0x7d5b,	// (0x00059a5b) list_single_text_info_pane

0x7dea,	// (0x00059aea) eswt_ctrl_button_pane

0x7dea,	// (0x00059aea) eswt_ctrl_canvas_pane

0x7df2,	// (0x00059af2) eswt_ctrl_combo_pane

0x7dea,	// (0x00059aea) eswt_ctrl_default_pane

0x7dea,	// (0x00059aea) eswt_ctrl_label_pane

0x7dfa,	// (0x00059afa) eswt_ctrl_wait_pane

0x7e02,	// (0x00059b02) eswt_shell_pane

0xd061,	// (0x0005ed61) listscroll_eswt_app_pane

0x7e22,	// (0x00059b22) popup_eswt_tasktip_window_ParamLimits

0x7e22,	// (0x00059b22) popup_eswt_tasktip_window

0x4f1f,	// (0x00056c1f) bg_popup_window_pane_cp18

0x7e33,	// (0x00059b33) eswt_control_pane_g1_ParamLimits

0x7e33,	// (0x00059b33) eswt_control_pane_g1

0x7e40,	// (0x00059b40) eswt_control_pane_g2_ParamLimits

0x7e40,	// (0x00059b40) eswt_control_pane_g2

0x7e4d,	// (0x00059b4d) eswt_control_pane_g3_ParamLimits

0x7e4d,	// (0x00059b4d) eswt_control_pane_g3

0x7e5a,	// (0x00059b5a) eswt_control_pane_g4_ParamLimits

0x7e5a,	// (0x00059b5a) eswt_control_pane_g4

0x0003,

0xfbcd,	// (0x000618cd) eswt_control_pane_g_ParamLimits

0xfbcd,	// (0x000618cd) eswt_control_pane_g

0x39a8,	// (0x000556a8) bg_button_pane_ParamLimits

0x39a8,	// (0x000556a8) bg_button_pane

0x3334,	// (0x00055034) common_borders_pane_copy2_ParamLimits

0x3334,	// (0x00055034) common_borders_pane_copy2

0x7e67,	// (0x00059b67) control_button_pane_g1_ParamLimits

0x7e67,	// (0x00059b67) control_button_pane_g1

0x7e73,	// (0x00059b73) control_button_pane_g2_ParamLimits

0x7e73,	// (0x00059b73) control_button_pane_g2

0x7e7f,	// (0x00059b7f) control_button_pane_g3_ParamLimits

0x7e7f,	// (0x00059b7f) control_button_pane_g3

0x0002,

0xfbd6,	// (0x000618d6) control_button_pane_g_ParamLimits

0xfbd6,	// (0x000618d6) control_button_pane_g

0x7e93,	// (0x00059b93) control_button_pane_t1

0x7ea1,	// (0x00059ba1) control_button_pane_t2

0x0001,

0xfbdd,	// (0x000618dd) control_button_pane_t

0x4eab,	// (0x00056bab) bg_button_pane_g1

0x4ebb,	// (0x00056bbb) bg_button_pane_g2

0x4eb3,	// (0x00056bb3) bg_button_pane_g3

0x4ecb,	// (0x00056bcb) bg_button_pane_g4

0x4ec3,	// (0x00056bc3) bg_button_pane_g5

0x4ed3,	// (0x00056bd3) bg_button_pane_g6

0x4edb,	// (0x00056bdb) bg_button_pane_g7

0x4eeb,	// (0x00056beb) bg_button_pane_g8

0x4ee3,	// (0x00056be3) bg_button_pane_g9

0x0008,

0xf841,	// (0x00061541) bg_button_pane_g

0x74a1,	// (0x000591a1) common_borders_pane_ParamLimits

0x74a1,	// (0x000591a1) common_borders_pane

0x7e33,	// (0x00059b33) eswt_control_pane_g1_copy1_ParamLimits

0x7e33,	// (0x00059b33) eswt_control_pane_g1_copy1

0x7e40,	// (0x00059b40) eswt_control_pane_g2_copy1_ParamLimits

0x7e40,	// (0x00059b40) eswt_control_pane_g2_copy1

0x7e4d,	// (0x00059b4d) eswt_control_pane_g3_copy1_ParamLimits

0x7e4d,	// (0x00059b4d) eswt_control_pane_g3_copy1

0x7e5a,	// (0x00059b5a) eswt_control_pane_g4_copy1_ParamLimits

0x7e5a,	// (0x00059b5a) eswt_control_pane_g4_copy1

0x74dc,	// (0x000591dc) bg_eswt_ctrl_canvas_pane_g1

0x74a1,	// (0x000591a1) common_borders_pane_cp2_ParamLimits

0x74a1,	// (0x000591a1) common_borders_pane_cp2

0x74a1,	// (0x000591a1) common_borders_pane_cp3_ParamLimits

0x74a1,	// (0x000591a1) common_borders_pane_cp3

0x7eaf,	// (0x00059baf) separator_horizontal_pane

0x7eb7,	// (0x00059bb7) separator_vertical_pane

0x7e33,	// (0x00059b33) eswt_control_pane_g1_copy2_ParamLimits

0x7e33,	// (0x00059b33) eswt_control_pane_g1_copy2

0x7e40,	// (0x00059b40) eswt_control_pane_g2_copy2_ParamLimits

0x7e40,	// (0x00059b40) eswt_control_pane_g2_copy2

0x7e4d,	// (0x00059b4d) eswt_control_pane_g3_copy2_ParamLimits

0x7e4d,	// (0x00059b4d) eswt_control_pane_g3_copy2

0x7e5a,	// (0x00059b5a) eswt_control_pane_g4_copy2_ParamLimits

0x7e5a,	// (0x00059b5a) eswt_control_pane_g4_copy2

0xd061,	// (0x0005ed61) common_borders_pane_cp4

0x7ec0,	// (0x00059bc0) separator_horizontal_pane_g1

0x7ec9,	// (0x00059bc9) separator_horizontal_pane_g2

0x7ed2,	// (0x00059bd2) separator_horizontal_pane_g3

0x0002,

0xfbe2,	// (0x000618e2) separator_horizontal_pane_g

0x7e33,	// (0x00059b33) eswt_control_pane_g1_copy3_ParamLimits

0x7e33,	// (0x00059b33) eswt_control_pane_g1_copy3

0x7e40,	// (0x00059b40) eswt_control_pane_g2_copy3_ParamLimits

0x7e40,	// (0x00059b40) eswt_control_pane_g2_copy3

0x7e4d,	// (0x00059b4d) eswt_control_pane_g3_copy3_ParamLimits

0x7e4d,	// (0x00059b4d) eswt_control_pane_g3_copy3

0x7e5a,	// (0x00059b5a) eswt_control_pane_g4_copy3_ParamLimits

0x7e5a,	// (0x00059b5a) eswt_control_pane_g4_copy3

0xd061,	// (0x0005ed61) common_borders_pane_cp5

0x7edb,	// (0x00059bdb) separator_vertical_pane_g1

0x7ee4,	// (0x00059be4) separator_vertical_pane_g2

0x7eed,	// (0x00059bed) separator_vertical_pane_g3

0x0002,

0xfbe9,	// (0x000618e9) separator_vertical_pane_g

0x7e33,	// (0x00059b33) eswt_control_pane_g1_copy4_ParamLimits

0x7e33,	// (0x00059b33) eswt_control_pane_g1_copy4

0x7e40,	// (0x00059b40) eswt_control_pane_g2_copy4_ParamLimits

0x7e40,	// (0x00059b40) eswt_control_pane_g2_copy4

0x7e4d,	// (0x00059b4d) eswt_control_pane_g3_copy4_ParamLimits

0x7e4d,	// (0x00059b4d) eswt_control_pane_g3_copy4

0x7e5a,	// (0x00059b5a) eswt_control_pane_g4_copy4_ParamLimits

0x7e5a,	// (0x00059b5a) eswt_control_pane_g4_copy4

0x7ef6,	// (0x00059bf6) eswt_ctrl_combo_button_pane

0x7efe,	// (0x00059bfe) eswt_ctrl_input_pane

0x7f06,	// (0x00059c06) popup_choice_list_window_cp70

0x7f0e,	// (0x00059c0e) eswt_ctrl_input_pane_t1

0xd061,	// (0x0005ed61) input_focus_pane_cp70

0x74a1,	// (0x000591a1) bg_button_pane_cp70_ParamLimits

0x74a1,	// (0x000591a1) bg_button_pane_cp70

0x7f1c,	// (0x00059c1c) eswt_ctrl_combo_button_pane_g1

0x7f24,	// (0x00059c24) wait_bar_pane_cp70

0x4f1f,	// (0x00056c1f) bg_popup_window_pane_cp70_ParamLimits

0x4f1f,	// (0x00056c1f) bg_popup_window_pane_cp70

0x7f2c,	// (0x00059c2c) popup_eswt_tasktip_window_t1

0x7f42,	// (0x00059c42) wait_bar_pane_cp71_ParamLimits

0x7f42,	// (0x00059c42) wait_bar_pane_cp71

0x7f4e,	// (0x00059c4e) grid_eswt_app_pane

0x3e3a,	// (0x00055b3a) scroll_pane_cp70

0xdfa4,	// (0x0005fca4) cell_eswt_app_pane_ParamLimits

0xdfa4,	// (0x0005fca4) cell_eswt_app_pane

0xdfce,	// (0x0005fcce) cell_eswt_app_pane_g1_ParamLimits

0xdfce,	// (0x0005fcce) cell_eswt_app_pane_g1

0xdffd,	// (0x0005fcfd) cell_eswt_app_pane_g2_ParamLimits

0xdffd,	// (0x0005fcfd) cell_eswt_app_pane_g2

0x0001,

0xfbf0,	// (0x000618f0) cell_eswt_app_pane_g_ParamLimits

0xfbf0,	// (0x000618f0) cell_eswt_app_pane_g

0xe026,	// (0x0005fd26) cell_eswt_app_pane_t1_ParamLimits

0xe026,	// (0x0005fd26) cell_eswt_app_pane_t1

0x8011,	// (0x00059d11) grid_highlight_pane_cp70_ParamLimits

0x8011,	// (0x00059d11) grid_highlight_pane_cp70

0x4535,	// (0x00056235) set_content_pane_g1

0xd247,	// (0x0005ef47) status_small_volume_pane

0x1ebb,	// (0x00053bbb) status_small_volume_pane_g1

0x1ec3,	// (0x00053bc3) volume_small2_pane

0x1ecc,	// (0x00053bcc) volume_small2_pane_g1

0x1ed5,	// (0x00053bd5) volume_small2_pane_g2

0x1ede,	// (0x00053bde) volume_small2_pane_g3

0x1ee7,	// (0x00053be7) volume_small2_pane_g4

0x1ef0,	// (0x00053bf0) volume_small2_pane_g5

0x1ef9,	// (0x00053bf9) volume_small2_pane_g6

0x1f02,	// (0x00053c02) volume_small2_pane_g7

0x1f0b,	// (0x00053c0b) volume_small2_pane_g8

0x1f14,	// (0x00053c14) volume_small2_pane_g9

0x1f1d,	// (0x00053c1d) volume_small2_pane_g10

0x0009,

0xfbf5,	// (0x000618f5) volume_small2_pane_g

0x78a2,	// (0x000595a2) fep_vkb_top_text_pane_g1_ParamLimits

0xdf31,	// (0x0005fc31) fep_vkb_top_text_pane_t1_ParamLimits

0x7b17,	// (0x00059817) popup_preview_fixed_window_g3_ParamLimits

0x7b17,	// (0x00059817) popup_preview_fixed_window_g3

0xc781,	// (0x0005e481) popup_toolbar_trans_pane

0xd8bc,	// (0x0005f5bc) aid_height_set_list_ParamLimits

0x62a0,	// (0x00057fa0) aid_size_parent_ParamLimits

0x4981,	// (0x00056681) list_highlight_pane_cp2_ParamLimits

0x4535,	// (0x00056235) set_content_pane_g1_ParamLimits

0xc8a1,	// (0x0005e5a1) list_single_image_pane_ParamLimits

0xc8a1,	// (0x0005e5a1) list_single_image_pane

0xe058,	// (0x0005fd58) aid_size_cell_image_ParamLimits

0xe058,	// (0x0005fd58) aid_size_cell_image

0xe065,	// (0x0005fd65) grid_single_image_pane_ParamLimits

0xe065,	// (0x0005fd65) grid_single_image_pane

0x5480,	// (0x00057180) list_single_image_pane_g1_ParamLimits

0x5480,	// (0x00057180) list_single_image_pane_g1

0x8036,	// (0x00059d36) list_single_image_pane_g2_ParamLimits

0x8036,	// (0x00059d36) list_single_image_pane_g2

0x0001,

0xfc0a,	// (0x0006190a) list_single_image_pane_g_ParamLimits

0xfc0a,	// (0x0006190a) list_single_image_pane_g

0x804a,	// (0x00059d4a) list_single_image_pane_t1_ParamLimits

0x804a,	// (0x00059d4a) list_single_image_pane_t1

0xe071,	// (0x0005fd71) cell_image_list_pane_ParamLimits

0xe071,	// (0x0005fd71) cell_image_list_pane

0xe085,	// (0x0005fd85) cell_image_list_pane_g1

0xe08e,	// (0x0005fd8e) cell_image_list_pane_g2

0x0001,

0xfc0f,	// (0x0006190f) cell_image_list_pane_g

0x8086,	// (0x00059d86) aid_size_cell_tb_trans_pane

0x39a8,	// (0x000556a8) bg_tb_trans_pane

0x8098,	// (0x00059d98) grid_tb_trans_pane

0x4eab,	// (0x00056bab) bg_tb_trans_pane_g1

0x4ebb,	// (0x00056bbb) bg_tb_trans_pane_g2

0x4eb3,	// (0x00056bb3) bg_tb_trans_pane_g3

0x4ecb,	// (0x00056bcb) bg_tb_trans_pane_g4

0x4ec3,	// (0x00056bc3) bg_tb_trans_pane_g5

0x4eeb,	// (0x00056beb) bg_tb_trans_pane_g6

0x4ee3,	// (0x00056be3) bg_tb_trans_pane_g7

0x4ed3,	// (0x00056bd3) bg_tb_trans_pane_g8

0x4edb,	// (0x00056bdb) bg_tb_trans_pane_g9

0x0008,

0xfc14,	// (0x00061914) bg_tb_trans_pane_g

0x80ac,	// (0x00059dac) cell_toolbar_trans_pane_ParamLimits

0x80ac,	// (0x00059dac) cell_toolbar_trans_pane

0x74dc,	// (0x000591dc) cell_toolbar_trans_pane_g1

0xdc9b,	// (0x0005f99b) list_form2_midp_pane_t1

0xdca9,	// (0x0005f9a9) list_form2_midp_pane_t2

0x0001,

0xfab1,	// (0x000617b1) list_form2_midp_pane_t

0x70cd,	// (0x00058dcd) scroll_pane_cp51_ParamLimits

0x7289,	// (0x00058f89) form2_midp_wait_pane_g1

0x7292,	// (0x00058f92) form2_midp_wait_pane_g2

0x729b,	// (0x00058f9b) form2_midp_wait_pane_g3

0x0002,

0xfac6,	// (0x000617c6) form2_midp_wait_pane_g

0x2d36,	// (0x00054a36) list_highlight_pane_cp21_ParamLimits

0x72e7,	// (0x00058fe7) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x72f6,	// (0x00058ff6) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6458,	// (0x00058158) list_single_2graphic_im_pane_ParamLimits

0x6458,	// (0x00058158) list_single_2graphic_im_pane

0x80d2,	// (0x00059dd2) list_single_2graphic_im_pane_g1_ParamLimits

0x80d2,	// (0x00059dd2) list_single_2graphic_im_pane_g1

0x80e3,	// (0x00059de3) list_single_2graphic_im_pane_g2_ParamLimits

0x80e3,	// (0x00059de3) list_single_2graphic_im_pane_g2

0x80ef,	// (0x00059def) list_single_2graphic_im_pane_g3_ParamLimits

0x80ef,	// (0x00059def) list_single_2graphic_im_pane_g3

0x0003,

0xfc27,	// (0x00061927) list_single_2graphic_im_pane_g_ParamLimits

0xfc27,	// (0x00061927) list_single_2graphic_im_pane_g

0x810f,	// (0x00059e0f) list_single_2graphic_im_pane_t1_ParamLimits

0x810f,	// (0x00059e0f) list_single_2graphic_im_pane_t1

0x7b23,	// (0x00059823) list_single_graphic_2heading_pane_fp_ParamLimits

0x7b23,	// (0x00059823) list_single_graphic_2heading_pane_fp

0x1c82,	// (0x00053982) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x1c82,	// (0x00053982) list_single_graphic_2heading_pane_fp_g1

0x7b38,	// (0x00059838) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7b38,	// (0x00059838) list_single_graphic_2heading_pane_fp_g2

0x35cc,	// (0x000552cc) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x35cc,	// (0x000552cc) list_single_graphic_2heading_pane_fp_g3

0x39b6,	// (0x000556b6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x39b6,	// (0x000556b6) list_single_graphic_2heading_pane_fp_g4

0x7b44,	// (0x00059844) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7b44,	// (0x00059844) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb4e,	// (0x0006184e) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb4e,	// (0x0006184e) list_single_graphic_2heading_pane_fp_g

0x1f26,	// (0x00053c26) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x1f26,	// (0x00053c26) list_single_graphic_2heading_pane_fp_t1

0x1cba,	// (0x000539ba) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x1cba,	// (0x000539ba) list_single_graphic_2heading_pane_fp_t2

0x3809,	// (0x00055509) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3809,	// (0x00055509) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc30,	// (0x00061930) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc30,	// (0x00061930) list_single_graphic_2heading_pane_fp_t

0x7568,	// (0x00059268) fep_hwr_write_pane_g5_ParamLimits

0x7568,	// (0x00059268) fep_hwr_write_pane_g5

0x7574,	// (0x00059274) fep_hwr_write_pane_g6_ParamLimits

0x7574,	// (0x00059274) fep_hwr_write_pane_g6

0x7e02,	// (0x00059b02) eswt_shell_pane_ParamLimits

0x4f1f,	// (0x00056c1f) bg_popup_window_pane_cp18_ParamLimits

0x61e8,	// (0x00057ee8) heading_pane_cp70

0x7f2c,	// (0x00059c2c) popup_eswt_tasktip_window_t1_ParamLimits

0xd2e5,	// (0x0005efe5) aid_touch_tab_arrow_left

0xd2fb,	// (0x0005effb) aid_touch_tab_arrow_right

0xb611,	// (0x0005d311) title_pane_g3_ParamLimits

0xb611,	// (0x0005d311) title_pane_g3

0x3611,	// (0x00055311) set_value_pane_g1

0xc781,	// (0x0005e481) popup_toolbar_trans_pane_ParamLimits

0x8086,	// (0x00059d86) aid_size_cell_tb_trans_pane_ParamLimits

0x39a8,	// (0x000556a8) bg_tb_trans_pane_ParamLimits

0x8098,	// (0x00059d98) grid_tb_trans_pane_ParamLimits

0x2fbf,	// (0x00054cbf) cont_note_pane_ParamLimits

0x2fbf,	// (0x00054cbf) cont_note_pane

0x3334,	// (0x00055034) cont_snote2_single_text_pane_ParamLimits

0x3334,	// (0x00055034) cont_snote2_single_text_pane

0x3334,	// (0x00055034) cont_snote2_single_graphic_pane_ParamLimits

0x3334,	// (0x00055034) cont_snote2_single_graphic_pane

0x5546,	// (0x00057246) cont_note_wait_pane_ParamLimits

0x5546,	// (0x00057246) cont_note_wait_pane

0x5546,	// (0x00057246) cont_note_image_pane_ParamLimits

0x5546,	// (0x00057246) cont_note_image_pane

0x8140,	// (0x00059e40) popup_note2_window_g1_ParamLimits

0x8140,	// (0x00059e40) popup_note2_window_g1

0x8171,	// (0x00059e71) popup_note2_window_t1_ParamLimits

0x8171,	// (0x00059e71) popup_note2_window_t1

0x81b6,	// (0x00059eb6) popup_note2_window_t2_ParamLimits

0x81b6,	// (0x00059eb6) popup_note2_window_t2

0x81fb,	// (0x00059efb) popup_note2_window_t3_ParamLimits

0x81fb,	// (0x00059efb) popup_note2_window_t3

0x8240,	// (0x00059f40) popup_note2_window_t4_ParamLimits

0x8240,	// (0x00059f40) popup_note2_window_t4

0x3043,	// (0x00054d43) popup_note2_window_t5_ParamLimits

0x3043,	// (0x00054d43) popup_note2_window_t5

0x0004,

0xfc3c,	// (0x0006193c) popup_note2_window_t_ParamLimits

0xfc3c,	// (0x0006193c) popup_note2_window_t

0x826f,	// (0x00059f6f) popup_note2_image_window_g1_ParamLimits

0x826f,	// (0x00059f6f) popup_note2_image_window_g1

0x827b,	// (0x00059f7b) popup_note2_image_window_g2_ParamLimits

0x827b,	// (0x00059f7b) popup_note2_image_window_g2

0x0001,

0xfc47,	// (0x00061947) popup_note2_image_window_g_ParamLimits

0xfc47,	// (0x00061947) popup_note2_image_window_g

0x828d,	// (0x00059f8d) popup_note2_image_window_t1_ParamLimits

0x828d,	// (0x00059f8d) popup_note2_image_window_t1

0x82a5,	// (0x00059fa5) popup_note2_image_window_t2_ParamLimits

0x82a5,	// (0x00059fa5) popup_note2_image_window_t2

0x82bd,	// (0x00059fbd) popup_note2_image_window_t3_ParamLimits

0x82bd,	// (0x00059fbd) popup_note2_image_window_t3

0x0002,

0xfc4c,	// (0x0006194c) popup_note2_image_window_t_ParamLimits

0xfc4c,	// (0x0006194c) popup_note2_image_window_t

0x5554,	// (0x00057254) popup_note2_wait_window_g1_ParamLimits

0x5554,	// (0x00057254) popup_note2_wait_window_g1

0x82d9,	// (0x00059fd9) popup_note2_wait_window_g2_ParamLimits

0x82d9,	// (0x00059fd9) popup_note2_wait_window_g2

0x556c,	// (0x0005726c) popup_note2_wait_window_g3_ParamLimits

0x556c,	// (0x0005726c) popup_note2_wait_window_g3

0x0002,

0xfc53,	// (0x00061953) popup_note2_wait_window_g_ParamLimits

0xfc53,	// (0x00061953) popup_note2_wait_window_g

0x82e5,	// (0x00059fe5) popup_note2_wait_window_t1_ParamLimits

0x82e5,	// (0x00059fe5) popup_note2_wait_window_t1

0x8303,	// (0x0005a003) popup_note2_wait_window_t2_ParamLimits

0x8303,	// (0x0005a003) popup_note2_wait_window_t2

0x8321,	// (0x0005a021) popup_note2_wait_window_t3_ParamLimits

0x8321,	// (0x0005a021) popup_note2_wait_window_t3

0x8333,	// (0x0005a033) popup_note2_wait_window_t4_ParamLimits

0x8333,	// (0x0005a033) popup_note2_wait_window_t4

0x0003,

0xfc5a,	// (0x0006195a) popup_note2_wait_window_t_ParamLimits

0xfc5a,	// (0x0006195a) popup_note2_wait_window_t

0x8345,	// (0x0005a045) wait_bar2_pane_ParamLimits

0x8345,	// (0x0005a045) wait_bar2_pane

0x835d,	// (0x0005a05d) popup_snote2_single_text_window_g1_ParamLimits

0x835d,	// (0x0005a05d) popup_snote2_single_text_window_g1

0x8385,	// (0x0005a085) popup_snote2_single_text_window_t1_ParamLimits

0x8385,	// (0x0005a085) popup_snote2_single_text_window_t1

0x83d1,	// (0x0005a0d1) popup_snote2_single_text_window_t2_ParamLimits

0x83d1,	// (0x0005a0d1) popup_snote2_single_text_window_t2

0x841d,	// (0x0005a11d) popup_snote2_single_text_window_t3_ParamLimits

0x841d,	// (0x0005a11d) popup_snote2_single_text_window_t3

0x845e,	// (0x0005a15e) popup_snote2_single_text_window_t4_ParamLimits

0x845e,	// (0x0005a15e) popup_snote2_single_text_window_t4

0x8494,	// (0x0005a194) popup_snote2_single_text_window_t5_ParamLimits

0x8494,	// (0x0005a194) popup_snote2_single_text_window_t5

0x0004,

0xfc63,	// (0x00061963) popup_snote2_single_text_window_t_ParamLimits

0xfc63,	// (0x00061963) popup_snote2_single_text_window_t

0x84bf,	// (0x0005a1bf) popup_snote2_single_graphic_window_g1_ParamLimits

0x84bf,	// (0x0005a1bf) popup_snote2_single_graphic_window_g1

0x84e7,	// (0x0005a1e7) popup_snote2_single_graphic_window_g2_ParamLimits

0x84e7,	// (0x0005a1e7) popup_snote2_single_graphic_window_g2

0x0001,

0xfc6e,	// (0x0006196e) popup_snote2_single_graphic_window_g_ParamLimits

0xfc6e,	// (0x0006196e) popup_snote2_single_graphic_window_g

0x850f,	// (0x0005a20f) popup_snote2_single_graphic_window_t1_ParamLimits

0x850f,	// (0x0005a20f) popup_snote2_single_graphic_window_t1

0x855b,	// (0x0005a25b) popup_snote2_single_graphic_window_t2_ParamLimits

0x855b,	// (0x0005a25b) popup_snote2_single_graphic_window_t2

0x841d,	// (0x0005a11d) popup_snote2_single_graphic_window_t3_ParamLimits

0x841d,	// (0x0005a11d) popup_snote2_single_graphic_window_t3

0x845e,	// (0x0005a15e) popup_snote2_single_graphic_window_t4_ParamLimits

0x845e,	// (0x0005a15e) popup_snote2_single_graphic_window_t4

0x8494,	// (0x0005a194) popup_snote2_single_graphic_window_t5_ParamLimits

0x8494,	// (0x0005a194) popup_snote2_single_graphic_window_t5

0x0004,

0xfc73,	// (0x00061973) popup_snote2_single_graphic_window_t_ParamLimits

0xfc73,	// (0x00061973) popup_snote2_single_graphic_window_t

0x6f8e,	// (0x00058c8e) clock_nsta_pane_cp2_t1

0x6f8e,	// (0x00058c8e) clock_nsta_pane_cp2_t2

0x0001,

0xfa87,	// (0x00061787) clock_nsta_pane_cp2_t

0x0319,	// (0x00052019) form_field_data_wide_pane_g1_ParamLimits

0x35cc,	// (0x000552cc) form_field_data_wide_pane_g2_ParamLimits

0x35cc,	// (0x000552cc) form_field_data_wide_pane_g2

0x39b6,	// (0x000556b6) form_field_data_wide_pane_g3_ParamLimits

0x39b6,	// (0x000556b6) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x0006135b) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x0006135b) form_field_data_wide_pane_g

0xdbce,	// (0x0005f8ce) grid_touch_3_pane_ParamLimits

0xdbce,	// (0x0005f8ce) grid_touch_3_pane

0xe097,	// (0x0005fd97) cell_touch_3_pane_ParamLimits

0xe097,	// (0x0005fd97) cell_touch_3_pane

0x74dc,	// (0x000591dc) cell_touch_3_pane_g1

0x74dc,	// (0x000591dc) cell_touch_3_pane_g2

0x0001,

0xfb0c,	// (0x0006180c) cell_touch_3_pane_g

0x309b,	// (0x00054d9b) cont_query_data_pane

0x30a3,	// (0x00054da3) cont_query_data_pane_cp1

0x85d5,	// (0x0005a2d5) button_value_adjust_pane_cp7

0x85dd,	// (0x0005a2dd) query_popup_pane_cp3

0x413a,	// (0x00055e3a) bg_popup_sub_pane_cp22_ParamLimits

0x06dd,	// (0x000523dd) navi_navi_volume_pane_cp2

0x06f8,	// (0x000523f8) popup_side_volume_key_window_g2

0x0707,	// (0x00052407) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x000613f1) popup_side_volume_key_window_g

0x0724,	// (0x00052424) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x000613f8) popup_side_volume_key_window_t

0x43f4,	// (0x000560f4) popup_side_volume_key_window_ParamLimits

0xba33,	// (0x0005d733) list_double_graphic_pane_g4_ParamLimits

0xba33,	// (0x0005d733) list_double_graphic_pane_g4

0xda35,	// (0x0005f735) list_single_2heading_msg_pane_ParamLimits

0xda35,	// (0x0005f735) list_single_2heading_msg_pane

0xdd92,	// (0x0005fa92) list_single_2heading_msg_pane_g1_ParamLimits

0xdd92,	// (0x0005fa92) list_single_2heading_msg_pane_g1

0xdd9e,	// (0x0005fa9e) list_single_2heading_msg_pane_g2_ParamLimits

0xdd9e,	// (0x0005fa9e) list_single_2heading_msg_pane_g2

0xddb1,	// (0x0005fab1) list_single_2heading_msg_pane_g3_ParamLimits

0xddb1,	// (0x0005fab1) list_single_2heading_msg_pane_g3

0x384d,	// (0x0005554d) list_single_2heading_msg_pane_g4_ParamLimits

0x384d,	// (0x0005554d) list_single_2heading_msg_pane_g4

0x0003,

0xfc7e,	// (0x0006197e) list_single_2heading_msg_pane_g_ParamLimits

0xfc7e,	// (0x0006197e) list_single_2heading_msg_pane_g

0x3865,	// (0x00055565) list_single_2heading_msg_pane_t1_ParamLimits

0x3865,	// (0x00055565) list_single_2heading_msg_pane_t1

0xc953,	// (0x0005e653) list_single_2heading_msg_pane_t2_ParamLimits

0xc953,	// (0x0005e653) list_single_2heading_msg_pane_t2

0xc9be,	// (0x0005e6be) list_single_2heading_msg_pane_t3_ParamLimits

0xc9be,	// (0x0005e6be) list_single_2heading_msg_pane_t3

0x38fa,	// (0x000555fa) list_single_2heading_msg_pane_t4_ParamLimits

0x38fa,	// (0x000555fa) list_single_2heading_msg_pane_t4

0x0003,

0xfc87,	// (0x00061987) list_single_2heading_msg_pane_t_ParamLimits

0xfc87,	// (0x00061987) list_single_2heading_msg_pane_t

0x2c8a,	// (0x0005498a) title_pane_g4_ParamLimits

0x2c8a,	// (0x0005498a) title_pane_g4

0x04ec,	// (0x000521ec) title_pane_stacon_g3_ParamLimits

0x04ec,	// (0x000521ec) title_pane_stacon_g3

0x8103,	// (0x00059e03) list_single_2graphic_im_pane_g4_ParamLimits

0x8103,	// (0x00059e03) list_single_2graphic_im_pane_g4

0x5fa5,	// (0x00057ca5) popup_side_volume_key_window_cp

0x67b5,	// (0x000584b5) main_idle_act2_pane_t1

0x1127,	// (0x00052e27) toolbar_button_pane_g10

0xb970,	// (0x0005d670) popup_toolbar_window_cp1

0x6f7f,	// (0x00058c7f) clock_nsta_pane_cp_t1

0x6f7f,	// (0x00058c7f) clock_nsta_pane_cp_t2

0x0001,

0xfa82,	// (0x00061782) clock_nsta_pane_cp_t

0x06dd,	// (0x000523dd) navi_navi_volume_pane_cp2_ParamLimits

0x06ec,	// (0x000523ec) popup_side_volume_key_window_g1_ParamLimits

0x06f8,	// (0x000523f8) popup_side_volume_key_window_g2_ParamLimits

0x0707,	// (0x00052407) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x000613f1) popup_side_volume_key_window_g_ParamLimits

0x19c7,	// (0x000536c7) fep_hwr_aid_pane

0x1a6e,	// (0x0005376e) bg_fep_hwr_top_pane_g4_ParamLimits

0x7538,	// (0x00059238) fep_hwr_top_pane_g1_ParamLimits

0x754a,	// (0x0005924a) fep_hwr_top_pane_g2_ParamLimits

0x1a8e,	// (0x0005378e) fep_hwr_top_pane_g3_ParamLimits

0xfad7,	// (0x000617d7) fep_hwr_top_pane_g_ParamLimits

0x1aa3,	// (0x000537a3) fep_hwr_top_text_pane_ParamLimits

0x5d68,	// (0x00057a68) aid_touch_tab_arrow_arrow_2

0x5d71,	// (0x00057a71) aid_touch_tab_arrow_left_2

0x19db,	// (0x000536db) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1a12,	// (0x00053712) fep_hwr_prediction_pane

0x76aa,	// (0x000593aa) fep_vkb_prediction_pane

0xdf11,	// (0x0005fc11) fep_vkb_side_pane_g3_ParamLimits

0xdf11,	// (0x0005fc11) fep_vkb_side_pane_g3

0x1c1e,	// (0x0005391e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1dbf,	// (0x00053abf) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1dcc,	// (0x00053acc) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb86,	// (0x00061886) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1f3c,	// (0x00053c3c) fep_hwr_prediction_pane_g1

0x1f46,	// (0x00053c46) fep_hwr_prediction_pane_g2

0x1f4e,	// (0x00053c4e) fep_hwr_prediction_pane_g3

0x1f56,	// (0x00053c56) fep_hwr_prediction_pane_g4

0x0003,

0xfc90,	// (0x00061990) fep_hwr_prediction_pane_g

0x8602,	// (0x0005a302) fep_vkb_prediction_pane_g1

0x860c,	// (0x0005a30c) fep_vkb_prediction_pane_g2

0x8614,	// (0x0005a314) fep_vkb_prediction_pane_g3

0x861c,	// (0x0005a31c) fep_vkb_prediction_pane_g4

0x0003,

0xfc99,	// (0x00061999) fep_vkb_prediction_pane_g

0x14ee,	// (0x000531ee) slider_set_pane_g3

0x1502,	// (0x00053202) slider_set_pane_g4

0x151a,	// (0x0005321a) slider_set_pane_g5

0x14ee,	// (0x000531ee) slider_set_pane_g6

0x1530,	// (0x00053230) slider_set_pane_g7

0x6405,	// (0x00058105) slider_form_pane_g3

0x640e,	// (0x0005810e) slider_form_pane_g4

0x6416,	// (0x00058116) slider_form_pane_g5

0x6405,	// (0x00058105) slider_form_pane_g6

0xda07,	// (0x0005f707) slider_form_pane_g7

0x6a60,	// (0x00058760) slider_set_pane_vc_g3

0x6a69,	// (0x00058769) slider_set_pane_vc_g4

0x6a72,	// (0x00058772) slider_set_pane_vc_g5

0x6a60,	// (0x00058760) slider_set_pane_vc_g6

0x6a7b,	// (0x0005877b) slider_set_pane_vc_g7

0x6c3d,	// (0x0005893d) slider_form_pane_vc_g1

0x6c46,	// (0x00058946) slider_form_pane_vc_g2

0x6c4f,	// (0x0005894f) slider_form_pane_vc_g3

0x6c3d,	// (0x0005893d) slider_form_pane_vc_g4

0x6c58,	// (0x00058958) slider_form_pane_vc_g5

0x0004,

0xfa54,	// (0x00061754) slider_form_pane_vc_g

0xf311,	// (0x00061011) main_idle_act3_pane

0x8624,	// (0x0005a324) ai3_links_pane

0xe0df,	// (0x0005fddf) popup_ai3_data_window_ParamLimits

0xe0df,	// (0x0005fddf) popup_ai3_data_window

0xd061,	// (0x0005ed61) grid_ai3_links_pane

0xe0f9,	// (0x0005fdf9) cell_ai3_links_pane_ParamLimits

0xe0f9,	// (0x0005fdf9) cell_ai3_links_pane

0x865f,	// (0x0005a35f) bg_popup_sub_pane_cp11

0x866c,	// (0x0005a36c) cell_ai3_links_pane_g1

0xd061,	// (0x0005ed61) bg_popup_sub_pane_cp12

0x8691,	// (0x0005a391) heading_ai3_data_pane

0x8699,	// (0x0005a399) list_ai3_gene_pane

0x86a5,	// (0x0005a3a5) popup_ai3_data_window_g1

0x86ad,	// (0x0005a3ad) heading_ai3_data_pane_g1

0x86b5,	// (0x0005a3b5) heading_ai3_data_pane_t1

0x86c3,	// (0x0005a3c3) list_double_ai3_gene_pane_ParamLimits

0x86c3,	// (0x0005a3c3) list_double_ai3_gene_pane

0x86d0,	// (0x0005a3d0) list_single_ai3_gene_pane_ParamLimits

0x86d0,	// (0x0005a3d0) list_single_ai3_gene_pane

0x74a1,	// (0x000591a1) list_highlight_pane_cp7_ParamLimits

0x74a1,	// (0x000591a1) list_highlight_pane_cp7

0x86dd,	// (0x0005a3dd) list_single_a13_gene_pane_t1_ParamLimits

0x86dd,	// (0x0005a3dd) list_single_a13_gene_pane_t1

0x86f4,	// (0x0005a3f4) list_single_ai3_gene_pane_g1

0x86fd,	// (0x0005a3fd) list_single_ai3_gene_pane_g2

0x0001,

0xfca2,	// (0x000619a2) list_single_ai3_gene_pane_g

0x8705,	// (0x0005a405) list_double_ai3_gene_pane_g1_ParamLimits

0x8705,	// (0x0005a405) list_double_ai3_gene_pane_g1

0x8711,	// (0x0005a411) list_double_ai3_gene_pane_t1_ParamLimits

0x8711,	// (0x0005a411) list_double_ai3_gene_pane_t1

0x872d,	// (0x0005a42d) list_double_ai3_gene_pane_t2_ParamLimits

0x872d,	// (0x0005a42d) list_double_ai3_gene_pane_t2

0x8743,	// (0x0005a443) list_double_ai3_gene_pane_t3_ParamLimits

0x8743,	// (0x0005a443) list_double_ai3_gene_pane_t3

0x0002,

0xfca7,	// (0x000619a7) list_double_ai3_gene_pane_t_ParamLimits

0xfca7,	// (0x000619a7) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x381f,	// (0x0005551f) aid_size_min_col_2

0xe0c9,	// (0x0005fdc9) aid_size_min_msg_ParamLimits

0xe0c9,	// (0x0005fdc9) aid_size_min_msg

0xdf25,	// (0x0005fc25) fep_vkb_top_text_pane_g2_ParamLimits

0xdf25,	// (0x0005fc25) fep_vkb_top_text_pane_g2

0x0001,

0xfb07,	// (0x00061807) fep_vkb_top_text_pane_g_ParamLimits

0xfb07,	// (0x00061807) fep_vkb_top_text_pane_g

0xf311,	// (0x00061011) main_hc_apps_shell_pane

0x8760,	// (0x0005a460) grid_hc_apps_pane_ParamLimits

0x8760,	// (0x0005a460) grid_hc_apps_pane

0x8772,	// (0x0005a472) list_hc_apps_pane

0x877a,	// (0x0005a47a) scroll_pane_cp37_ParamLimits

0x877a,	// (0x0005a47a) scroll_pane_cp37

0xe113,	// (0x0005fe13) cell_hc_apps_pane_ParamLimits

0xe113,	// (0x0005fe13) cell_hc_apps_pane

0xe1d1,	// (0x0005fed1) cell_hc_apps_pane_g1_ParamLimits

0xe1d1,	// (0x0005fed1) cell_hc_apps_pane_g1

0x8864,	// (0x0005a564) cell_hc_apps_pane_g2_ParamLimits

0x8864,	// (0x0005a564) cell_hc_apps_pane_g2

0x8880,	// (0x0005a580) cell_hc_apps_pane_g3_ParamLimits

0x8880,	// (0x0005a580) cell_hc_apps_pane_g3

0x0002,

0xfcae,	// (0x000619ae) cell_hc_apps_pane_g_ParamLimits

0xfcae,	// (0x000619ae) cell_hc_apps_pane_g

0xe1fd,	// (0x0005fefd) cell_hc_apps_pane_t1_ParamLimits

0xe1fd,	// (0x0005fefd) cell_hc_apps_pane_t1

0x2fbf,	// (0x00054cbf) grid_highlight_pane_cp10_ParamLimits

0x2fbf,	// (0x00054cbf) grid_highlight_pane_cp10

0xe23b,	// (0x0005ff3b) list_single_hc_apps_pane_ParamLimits

0xe23b,	// (0x0005ff3b) list_single_hc_apps_pane

0xe268,	// (0x0005ff68) list_single_hc_apps_pane_g1

0xddbd,	// (0x0005fabd) list_single_hc_apps_pane_g2

0x0001,

0xfcb5,	// (0x000619b5) list_single_hc_apps_pane_g

0xddd6,	// (0x0005fad6) list_single_hc_apps_pane_g2_copy1

0x3954,	// (0x00055654) list_single_hc_apps_pane_t1

0x2d36,	// (0x00054a36) bg_set_opt_pane_cp_ParamLimits

0xf4a0,	// (0x000611a0) setting_slider_pane_t1_ParamLimits

0xf4b9,	// (0x000611b9) setting_slider_pane_t2_ParamLimits

0xf4d3,	// (0x000611d3) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00061239) setting_slider_pane_t_ParamLimits

0xf4eb,	// (0x000611eb) slider_set_pane_ParamLimits

0x09f4,	// (0x000526f4) control_pane_g5_ParamLimits

0x09f4,	// (0x000526f4) control_pane_g5

0x6254,	// (0x00057f54) slider_set_pane_g1_ParamLimits

0x14e2,	// (0x000531e2) slider_set_pane_g2_ParamLimits

0x14ee,	// (0x000531ee) slider_set_pane_g3_ParamLimits

0x1502,	// (0x00053202) slider_set_pane_g4_ParamLimits

0x151a,	// (0x0005321a) slider_set_pane_g5_ParamLimits

0x14ee,	// (0x000531ee) slider_set_pane_g6_ParamLimits

0x1530,	// (0x00053230) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x0006163f) slider_set_pane_g_ParamLimits

0x44e0,	// (0x000561e0) navi_icon_text_pane_ParamLimits

0xd2ae,	// (0x0005efae) aid_fill_nsta_2_ParamLimits

0xd2e5,	// (0x0005efe5) aid_touch_tab_arrow_left_ParamLimits

0xd2fb,	// (0x0005effb) aid_touch_tab_arrow_right_ParamLimits

0xd396,	// (0x0005f096) clock_nsta_pane_ParamLimits

0x5d4a,	// (0x00057a4a) navi_icon_pane_g1_ParamLimits

0x5d56,	// (0x00057a56) navi_text_pane_t1_ParamLimits

0x708b,	// (0x00058d8b) navi_icon_text_pane_g1_ParamLimits

0x7097,	// (0x00058d97) navi_icon_text_pane_t1_ParamLimits

0xe268,	// (0x0005ff68) list_single_hc_apps_pane_g1_ParamLimits

0xddbd,	// (0x0005fabd) list_single_hc_apps_pane_g2_ParamLimits

0xfcb5,	// (0x000619b5) list_single_hc_apps_pane_g_ParamLimits

0xddd6,	// (0x0005fad6) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x3954,	// (0x00055654) list_single_hc_apps_pane_t1_ParamLimits

0xb516,	// (0x0005d216) popup_toolbar2_fixed_window_ParamLimits

0xb516,	// (0x0005d216) popup_toolbar2_fixed_window

0xc777,	// (0x0005e477) popup_toolbar2_float_window

0xd061,	// (0x0005ed61) bg_popup_sub_pane_cp27

0x8957,	// (0x0005a657) grid_toolbar2_float_pane

0xd061,	// (0x0005ed61) bg_popup_sub_pane_cp26

0x8957,	// (0x0005a657) grid_toolbar2_fixed_pane

0xe281,	// (0x0005ff81) cell_toolbar2_fixed_pane_ParamLimits

0xe281,	// (0x0005ff81) cell_toolbar2_fixed_pane

0xe29b,	// (0x0005ff9b) cell_toolbar2_fixed_pane_g1

0x8978,	// (0x0005a678) toolbar2_fixed_button_pane

0x4eab,	// (0x00056bab) toolbar2_fixed_button_pane_g1

0x4ebb,	// (0x00056bbb) toolbar2_fixed_button_pane_g2

0x4eb3,	// (0x00056bb3) toolbar2_fixed_button_pane_g3

0x4ecb,	// (0x00056bcb) toolbar2_fixed_button_pane_g4

0x4ec3,	// (0x00056bc3) toolbar2_fixed_button_pane_g5

0x4ed3,	// (0x00056bd3) toolbar2_fixed_button_pane_g6

0x4edb,	// (0x00056bdb) toolbar2_fixed_button_pane_g7

0x4eeb,	// (0x00056beb) toolbar2_fixed_button_pane_g8

0x4ee3,	// (0x00056be3) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x00061541) toolbar2_fixed_button_pane_g

0x8980,	// (0x0005a680) cell_toolbar2_float_pane_ParamLimits

0x8980,	// (0x0005a680) cell_toolbar2_float_pane

0x8991,	// (0x0005a691) cell_toolbar2_float_pane_g1

0x8978,	// (0x0005a678) toolbar2_fixed_button_pane_cp

0xddff,	// (0x0005faff) fep_vkb_accented_list_pane_ParamLimits

0xddff,	// (0x0005faff) fep_vkb_accented_list_pane

0x1bfe,	// (0x000538fe) bg_popup_fep_shadow_pane_g9

0x465d,	// (0x0005635d) bg_popup_fep_shadow_pane_cp3

0x3b03,	// (0x00055803) list_accented_list_pane

0x899a,	// (0x0005a69a) list_single_accented_list_pane_ParamLimits

0x899a,	// (0x0005a69a) list_single_accented_list_pane

0x465d,	// (0x0005635d) list_highlight_pane_cp10

0x89ab,	// (0x0005a6ab) list_single_accented_list_pane_t1

0xc6a1,	// (0x0005e3a1) popup_slider_window_ParamLimits

0xc6a1,	// (0x0005e3a1) popup_slider_window

0x85e5,	// (0x0005a2e5) aid_indentation_list_msg

0xe392,	// (0x00060092) bg_popup_window_pane_cp19

0x8ad7,	// (0x0005a7d7) popup_slider_window_g1

0x8af3,	// (0x0005a7f3) popup_slider_window_g2

0x8b0f,	// (0x0005a80f) popup_slider_window_g3

0x0005,

0xfcba,	// (0x000619ba) popup_slider_window_g

0x8b75,	// (0x0005a875) popup_slider_window_t1

0x8be9,	// (0x0005a8e9) small_volume_slider_vertical_pane

0x74dc,	// (0x000591dc) small_volume_slider_vertical_pane_g1

0x74dc,	// (0x000591dc) small_volume_slider_vertical_pane_g2

0x8c05,	// (0x0005a905) small_volume_slider_vertical_pane_g3

0x0002,

0xfccc,	// (0x000619cc) small_volume_slider_vertical_pane_g

0xb484,	// (0x0005d184) area_side_right_pane_ParamLimits

0xb484,	// (0x0005d184) area_side_right_pane

0xca2c,	// (0x0005e72c) aid_size_side_button_ParamLimits

0xca2c,	// (0x0005e72c) aid_size_side_button

0xca45,	// (0x0005e745) grid_sctrl_middle_pane_ParamLimits

0xca45,	// (0x0005e745) grid_sctrl_middle_pane

0x1f91,	// (0x00053c91) sctrl_sk_bottom_pane

0x1fa2,	// (0x00053ca2) sctrl_sk_top_pane

0x1fb4,	// (0x00053cb4) aid_touch_sctrl_top

0x1fc1,	// (0x00053cc1) bg_sctrl_sk_pane_ParamLimits

0x1fc1,	// (0x00053cc1) bg_sctrl_sk_pane

0x1fcf,	// (0x00053ccf) sctrl_sk_top_pane_g1

0x1fdc,	// (0x00053cdc) sctrl_sk_top_pane_t1

0x1fb4,	// (0x00053cb4) aid_touch_sctrl_bottom

0x1fc1,	// (0x00053cc1) bg_sctrl_sk_pane_cp_ParamLimits

0x1fc1,	// (0x00053cc1) bg_sctrl_sk_pane_cp

0x1ff7,	// (0x00053cf7) sctrl_sk_bottom_pane_g1

0x1fdc,	// (0x00053cdc) sctrl_sk_bottom_pane_t1

0xca5f,	// (0x0005e75f) cell_sctrl_middle_pane_ParamLimits

0xca5f,	// (0x0005e75f) cell_sctrl_middle_pane

0xca70,	// (0x0005e770) aid_touch_sctrl_middle_ParamLimits

0xca70,	// (0x0005e770) aid_touch_sctrl_middle

0xca7d,	// (0x0005e77d) bg_sctrl_middle_pane_ParamLimits

0xca7d,	// (0x0005e77d) bg_sctrl_middle_pane

0x2667,	// (0x00054367) cell_sctrl_middle_pane_g1_ParamLimits

0x2667,	// (0x00054367) cell_sctrl_middle_pane_g1

0xca8b,	// (0x0005e78b) cell_sctrl_middle_pane_g2_ParamLimits

0xca8b,	// (0x0005e78b) cell_sctrl_middle_pane_g2

0x0001,

0xfcd8,	// (0x000619d8) cell_sctrl_middle_pane_g_ParamLimits

0xfcd8,	// (0x000619d8) cell_sctrl_middle_pane_g

0x4eab,	// (0x00056bab) bg_sctrl_middle_pane_g1

0x4eb3,	// (0x00056bb3) bg_sctrl_middle_pane_g2

0x4ebb,	// (0x00056bbb) bg_sctrl_middle_pane_g3

0x4ec3,	// (0x00056bc3) bg_sctrl_middle_pane_g4

0x4ecb,	// (0x00056bcb) bg_sctrl_middle_pane_g5

0x4ed3,	// (0x00056bd3) bg_sctrl_middle_pane_g6

0x4edb,	// (0x00056bdb) bg_sctrl_middle_pane_g7

0x4ee3,	// (0x00056be3) bg_sctrl_middle_pane_g8

0x0007,

0xfcdd,	// (0x000619dd) bg_sctrl_middle_pane_g

0x4eeb,	// (0x00056beb) bg_sctrl_middle_pane_g8_copy1

0x4eab,	// (0x00056bab) bg_sctrl_sk_pane_g1

0x4ebb,	// (0x00056bbb) bg_sctrl_sk_pane_g2

0x4eb3,	// (0x00056bb3) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x00061541) bg_sctrl_sk_pane_g

0x34f2,	// (0x000551f2) aid_size_touch_scroll_bar

0x4ecb,	// (0x00056bcb) bg_sctrl_sk_pane_g4

0x4ec3,	// (0x00056bc3) bg_sctrl_sk_pane_g5

0x4ed3,	// (0x00056bd3) bg_sctrl_sk_pane_g6

0x4edb,	// (0x00056bdb) bg_sctrl_sk_pane_g7

0x4eeb,	// (0x00056beb) bg_sctrl_sk_pane_g8

0x4ee3,	// (0x00056be3) bg_sctrl_sk_pane_g9

0x0bc0,	// (0x000528c0) popup_fep_china_hwr2_fs_candidate_window

0xc1b5,	// (0x0005deb5) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc1b5,	// (0x0005deb5) popup_fep_china_hwr2_fs_control_window

0x1c1e,	// (0x0005391e) sctrl_sk_top_pane_g2

0x0001,

0xfcd3,	// (0x000619d3) sctrl_sk_top_pane_g

0xe44a,	// (0x0006014a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe44a,	// (0x0006014a) aid_fep_china_hwr2_fs_cell

0xe45e,	// (0x0006015e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe45e,	// (0x0006015e) bg_popup_fep_shadow_pane_cp4

0xe475,	// (0x00060175) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe475,	// (0x00060175) bg_popup_fep_shadow_pane_cp5

0xe487,	// (0x00060187) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe487,	// (0x00060187) popup_fep_china_hwr2_fs_control_bar_grid

0xe49b,	// (0x0006019b) popup_fep_china_hwr2_fs_control_funtion_grid

0x8c61,	// (0x0005a961) aid_fep_china_hwr2_fs_candi_cell

0xd061,	// (0x0005ed61) bg_popup_fep_shadow_pane_cp6

0x8c6b,	// (0x0005a96b) popup_fep_china_hwr2_fs_candidate_grid

0xe4a3,	// (0x000601a3) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe4a3,	// (0x000601a3) cell_fep_china_hwr2_fs_funtion_grid

0x74dc,	// (0x000591dc) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8c8d,	// (0x0005a98d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8c8d,	// (0x0005a98d) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8c9b,	// (0x0005a99b) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8c9b,	// (0x0005a99b) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcee,	// (0x000619ee) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcee,	// (0x000619ee) cell_fep_china_hwr2_fs_funtion_grid_g

0xe4bb,	// (0x000601bb) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe4bb,	// (0x000601bb) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe4d0,	// (0x000601d0) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe4d0,	// (0x000601d0) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf3,	// (0x000619f3) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf3,	// (0x000619f3) cell_fep_china_hwr2_fs_funtion_grid_t

0x8ce2,	// (0x0005a9e2) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8cea,	// (0x0005a9ea) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8cf2,	// (0x0005a9f2) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf8,	// (0x000619f8) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8cfa,	// (0x0005a9fa) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8cfa,	// (0x0005a9fa) cell_fep_china_hwr2_fs_candidate_grid

0x8d13,	// (0x0005aa13) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8d1b,	// (0x0005aa1b) popup_fep_china_hwr2_fs_candidate_grid_g21

0x74dc,	// (0x000591dc) cell_fep_china_hwr2_fs_candidate_grid_g1

0x74dc,	// (0x000591dc) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb0c,	// (0x0006180c) cell_fep_china_hwr2_fs_candidate_grid_g

0x8d23,	// (0x0005aa23) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4aa1,	// (0x000567a1) clock_nsta_pane_cp_24_ParamLimits

0x4aa1,	// (0x000567a1) clock_nsta_pane_cp_24

0x4b1f,	// (0x0005681f) indicator_nsta_pane_cp_24_ParamLimits

0x4b1f,	// (0x0005681f) indicator_nsta_pane_cp_24

0x5bc6,	// (0x000578c6) heading_pane_g1

0x0001,

0xf8a6,	// (0x000615a6) heading_pane_g

0x65fe,	// (0x000582fe) grid_sct_catagory_button_pane

0x662e,	// (0x0005832e) scroll_pane_cp5_ParamLimits

0x70d9,	// (0x00058dd9) button_value_adjust_pane_cp5_ParamLimits

0x70d9,	// (0x00058dd9) button_value_adjust_pane_cp5

0x71b8,	// (0x00058eb8) form2_midp_time_pane_ParamLimits

0x8d31,	// (0x0005aa31) cell_sct_catagory_button_pane_ParamLimits

0x8d31,	// (0x0005aa31) cell_sct_catagory_button_pane

0x74a1,	// (0x000591a1) bg_button_pane_cp01_ParamLimits

0x74a1,	// (0x000591a1) bg_button_pane_cp01

0x74dc,	// (0x000591dc) cell_sct_catagory_button_pane_g1

0xc71a,	// (0x0005e41a) popup_tb_extension_window

0xe4ec,	// (0x000601ec) aid_size_cell_ext_ParamLimits

0xe4ec,	// (0x000601ec) aid_size_cell_ext

0x3334,	// (0x00055034) bg_tb_trans_pane_cp1_ParamLimits

0x3334,	// (0x00055034) bg_tb_trans_pane_cp1

0xe512,	// (0x00060212) grid_tb_ext_pane_ParamLimits

0xe512,	// (0x00060212) grid_tb_ext_pane

0xe54d,	// (0x0006024d) cell_tb_ext_pane_ParamLimits

0xe54d,	// (0x0006024d) cell_tb_ext_pane

0xe575,	// (0x00060275) cell_tb_ext_pane_g1_ParamLimits

0xe575,	// (0x00060275) cell_tb_ext_pane_g1

0x8dc5,	// (0x0005aac5) cell_tb_ext_pane_t1

0x2fbf,	// (0x00054cbf) list_highlight_pane_cp11_ParamLimits

0x2fbf,	// (0x00054cbf) list_highlight_pane_cp11

0xb52b,	// (0x0005d22b) popup_uni_indicator_window_ParamLimits

0xb52b,	// (0x0005d22b) popup_uni_indicator_window

0x39a8,	// (0x000556a8) bg_popup_sub_pane_cp14

0x8de0,	// (0x0005aae0) list_uniindi_pane

0x8dec,	// (0x0005aaec) uniindi_top_pane

0x2fbf,	// (0x00054cbf) bg_uniindi_top_pane

0x8e0b,	// (0x0005ab0b) uniindi_top_pane_g1

0x8e21,	// (0x0005ab21) uniindi_top_pane_g2

0x0003,

0xfcff,	// (0x000619ff) uniindi_top_pane_g

0x8e4b,	// (0x0005ab4b) uniindi_top_pane_t1

0x8e75,	// (0x0005ab75) list_single_uniindi_pane_ParamLimits

0x8e75,	// (0x0005ab75) list_single_uniindi_pane

0x74dc,	// (0x000591dc) bg_uniindi_top_pane_g1

0x8e88,	// (0x0005ab88) list_single_uniindi_pane_g1

0x8e9b,	// (0x0005ab9b) list_single_uniindi_pane_t1

0xf311,	// (0x00061011) control_bg_pane

0x8ec0,	// (0x0005abc0) bg_sctrl_sk_pane_cp1

0x8ec9,	// (0x0005abc9) bg_sctrl_sk_pane_cp2

0x8ed2,	// (0x0005abd2) control_bg_pane_g1

0x8edb,	// (0x0005abdb) control_bg_pane_g2

0x0001,

0xfd08,	// (0x00061a08) control_bg_pane_g

0x6f23,	// (0x00058c23) cell_indicator_nsta_pane_g1_ParamLimits

0xdc0b,	// (0x0005f90b) cell_indicator_nsta_pane_g2_ParamLimits

0xfa70,	// (0x00061770) cell_indicator_nsta_pane_g_ParamLimits

0x19a6,	// (0x000536a6) form2_midp_time_pane_t1_ParamLimits

0x19b9,	// (0x000536b9) main_idle_act4_pane_ParamLimits

0x19b9,	// (0x000536b9) main_idle_act4_pane

0xc71a,	// (0x0005e41a) popup_tb_extension_window_ParamLimits

0xe534,	// (0x00060234) tb_ext_find_pane_ParamLimits

0xe534,	// (0x00060234) tb_ext_find_pane

0x8ee4,	// (0x0005abe4) ai_gene_pane_1_cp1

0x47a4,	// (0x000564a4) ai_gene_pane_2_cp1

0x8eec,	// (0x0005abec) list_single_idle_plugin_calendar_pane

0x8ef5,	// (0x0005abf5) list_single_idle_plugin_notification_pane

0x8efe,	// (0x0005abfe) list_single_idle_plugin_player_pane

0xe592,	// (0x00060292) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe592,	// (0x00060292) list_single_idle_plugin_shortcut_pane

0xe5ba,	// (0x000602ba) main_idle_act4_pane_t1

0xe5d0,	// (0x000602d0) main_idle_act4_pane_t2

0x0001,

0xfd0d,	// (0x00061a0d) main_idle_act4_pane_t

0xe5e6,	// (0x000602e6) middle_sk_idle_act4_pane_ParamLimits

0xe5e6,	// (0x000602e6) middle_sk_idle_act4_pane

0xe602,	// (0x00060302) popup_clock_digital_analogue_window_cp2

0xe62a,	// (0x0006032a) shortcut_wheel_idle_act4_pane_ParamLimits

0xe62a,	// (0x0006032a) shortcut_wheel_idle_act4_pane

0x74dc,	// (0x000591dc) shortcut_wheel_idle_act4_pane_g1

0x74dc,	// (0x000591dc) shortcut_wheel_idle_act4_pane_g2

0x74dc,	// (0x000591dc) shortcut_wheel_idle_act4_pane_g3

0x74dc,	// (0x000591dc) shortcut_wheel_idle_act4_pane_g4

0x74dc,	// (0x000591dc) shortcut_wheel_idle_act4_pane_g5

0x8f91,	// (0x0005ac91) shortcut_wheel_idle_act4_pane_g6

0x8f99,	// (0x0005ac99) shortcut_wheel_idle_act4_pane_g7

0x8fa1,	// (0x0005aca1) shortcut_wheel_idle_act4_pane_g8

0x8fa9,	// (0x0005aca9) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd12,	// (0x00061a12) shortcut_wheel_idle_act4_pane_g

0xe6a7,	// (0x000603a7) middle_sk_idle_act4_pane_g1_ParamLimits

0xe6a7,	// (0x000603a7) middle_sk_idle_act4_pane_g1

0xe6b5,	// (0x000603b5) middle_sk_idle_act4_pane_g2_ParamLimits

0xe6b5,	// (0x000603b5) middle_sk_idle_act4_pane_g2

0x0001,

0xfd35,	// (0x00061a35) middle_sk_idle_act4_pane_g_ParamLimits

0xfd35,	// (0x00061a35) middle_sk_idle_act4_pane_g

0xe6cd,	// (0x000603cd) middle_sk_idle_act4_pane_t1_ParamLimits

0xe6cd,	// (0x000603cd) middle_sk_idle_act4_pane_t1

0xe6fc,	// (0x000603fc) grid_ai_shortcut_pane_ParamLimits

0xe6fc,	// (0x000603fc) grid_ai_shortcut_pane

0xe719,	// (0x00060419) list_highlight_pane_cp16_ParamLimits

0xe719,	// (0x00060419) list_highlight_pane_cp16

0xe726,	// (0x00060426) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe726,	// (0x00060426) list_single_idle_plugin_shortcut_pane_g1

0xe732,	// (0x00060432) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe732,	// (0x00060432) list_single_idle_plugin_shortcut_pane_g2

0xe74e,	// (0x0006044e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe74e,	// (0x0006044e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3a,	// (0x00061a3a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3a,	// (0x00061a3a) list_single_idle_plugin_shortcut_pane_g

0xe763,	// (0x00060463) cell_ai_shortcut_pane_ParamLimits

0xe763,	// (0x00060463) cell_ai_shortcut_pane

0xe779,	// (0x00060479) cell_ai_shortcut_pane_g1_ParamLimits

0xe779,	// (0x00060479) cell_ai_shortcut_pane_g1

0x8ee4,	// (0x0005abe4) ai_gene_pane_1_cp2

0x90d9,	// (0x0005add9) ai_gene_pane_2_cp2

0x90e1,	// (0x0005ade1) list_highlight_pane_cp15

0x90ea,	// (0x0005adea) list_single_idle_plugin_calendar_pane_g1

0x90e1,	// (0x0005ade1) list_highlight_pane_cp17

0x90f2,	// (0x0005adf2) list_single_idle_plugin_calendar_pane_g1_copy1

0x90fa,	// (0x0005adfa) list_single_idle_plugin_player_pane_g1

0x6857,	// (0x00058557) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd41,	// (0x00061a41) list_single_idle_plugin_player_pane_g

0x9102,	// (0x0005ae02) list_single_idle_plugin_player_pane_t1

0x9110,	// (0x0005ae10) list_single_idle_plugin_player_pane_t2

0x911e,	// (0x0005ae1e) list_single_idle_plugin_player_pane_t3

0x912c,	// (0x0005ae2c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd46,	// (0x00061a46) list_single_idle_plugin_player_pane_t

0x913a,	// (0x0005ae3a) wait_bar_pane_cp15

0x9142,	// (0x0005ae42) grid_ai_notification_pane

0x6857,	// (0x00058557) list_single_idle_plugin_notification_pane_g1

0xe79b,	// (0x0006049b) cell_ai_notification_pane_ParamLimits

0xe79b,	// (0x0006049b) cell_ai_notification_pane

0x9158,	// (0x0005ae58) cell_ai_notification_pane_g1

0x9160,	// (0x0005ae60) cell_ai_notification_pane_t1

0xe7a8,	// (0x000604a8) tb_ext_find_button_pane

0xe7b0,	// (0x000604b0) tb_ext_find_pane_g1

0xe7b8,	// (0x000604b8) tb_ext_find_pane_t1

0x4031,	// (0x00055d31) tb_ext_find_button_pane_g1

0x918c,	// (0x0005ae8c) tb_ext_find_button_pane_g2

0x0001,

0xfd4f,	// (0x00061a4f) tb_ext_find_button_pane_g

0xe5ba,	// (0x000602ba) main_idle_act4_pane_t1_ParamLimits

0xe5d0,	// (0x000602d0) main_idle_act4_pane_t2_ParamLimits

0xfd0d,	// (0x00061a0d) main_idle_act4_pane_t_ParamLimits

0xe602,	// (0x00060302) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe61a,	// (0x0006031a) sat_plugin_idle_act4_pane_ParamLimits

0xe61a,	// (0x0006031a) sat_plugin_idle_act4_pane

0xe7c6,	// (0x000604c6) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe7c6,	// (0x000604c6) sat_plugin_idle_act4_pane_t1

0xe7de,	// (0x000604de) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe7de,	// (0x000604de) sat_plugin_idle_act4_pane_t2

0xe7f6,	// (0x000604f6) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe7f6,	// (0x000604f6) sat_plugin_idle_act4_pane_t3

0xe80e,	// (0x0006050e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe80e,	// (0x0006050e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd54,	// (0x00061a54) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd54,	// (0x00061a54) sat_plugin_idle_act4_pane_t

0xf3d6,	// (0x000610d6) popup_battery_window_ParamLimits

0xf3d6,	// (0x000610d6) popup_battery_window

0x2fbf,	// (0x00054cbf) bg_popup_sub_pane_cp25_ParamLimits

0x2fbf,	// (0x00054cbf) bg_popup_sub_pane_cp25

0x91e1,	// (0x0005aee1) popup_battery_window_g1_ParamLimits

0x91e1,	// (0x0005aee1) popup_battery_window_g1

0x91ed,	// (0x0005aeed) popup_battery_window_t1_ParamLimits

0x91ed,	// (0x0005aeed) popup_battery_window_t1

0x91ff,	// (0x0005aeff) popup_battery_window_t2_ParamLimits

0x91ff,	// (0x0005aeff) popup_battery_window_t2

0x0001,

0xfd5d,	// (0x00061a5d) popup_battery_window_t_ParamLimits

0xfd5d,	// (0x00061a5d) popup_battery_window_t

0xd119,	// (0x0005ee19) midp_canvas_pane_ParamLimits

0xd176,	// (0x0005ee76) midp_keypad_pane_ParamLimits

0xd176,	// (0x0005ee76) midp_keypad_pane

0x4981,	// (0x00056681) main_midp_pane_ParamLimits

0x6f9d,	// (0x00058c9d) signal_pane_g2_cp_ParamLimits

0xe826,	// (0x00060526) aid_size_cell_midp_keypad_ParamLimits

0xe826,	// (0x00060526) aid_size_cell_midp_keypad

0xe844,	// (0x00060544) midp_keyp_game_grid_pane_ParamLimits

0xe844,	// (0x00060544) midp_keyp_game_grid_pane

0xe86b,	// (0x0006056b) midp_keyp_rocker_pane_ParamLimits

0xe86b,	// (0x0006056b) midp_keyp_rocker_pane

0xe8bc,	// (0x000605bc) midp_keyp_sk_left_pane_ParamLimits

0xe8bc,	// (0x000605bc) midp_keyp_sk_left_pane

0xe910,	// (0x00060610) midp_keyp_sk_right_pane_ParamLimits

0xe910,	// (0x00060610) midp_keyp_sk_right_pane

0xd061,	// (0x0005ed61) bg_button_pane_cp03

0xe964,	// (0x00060664) midp_keyp_sk_left_pane_g1

0xd061,	// (0x0005ed61) bg_button_pane_cp04

0xe964,	// (0x00060664) midp_keyp_sk_right_pane_g1

0x74dc,	// (0x000591dc) midp_keyp_rocker_pane_g1

0xe96d,	// (0x0006066d) keyp_game_cell_pane_ParamLimits

0xe96d,	// (0x0006066d) keyp_game_cell_pane

0xd061,	// (0x0005ed61) bg_button_pane_cp02

0xe991,	// (0x00060691) keyp_game_cell_pane_g1

0xb4c6,	// (0x0005d1c6) popup_fep_vkb2_window_ParamLimits

0xb4c6,	// (0x0005d1c6) popup_fep_vkb2_window

0xca97,	// (0x0005e797) aid_size_cell_vkb2_ParamLimits

0xca97,	// (0x0005e797) aid_size_cell_vkb2

0xcac3,	// (0x0005e7c3) popup_fep_vkb2_window_g1_ParamLimits

0xcac3,	// (0x0005e7c3) popup_fep_vkb2_window_g1

0xcb13,	// (0x0005e813) vkb2_area_bottom_pane_ParamLimits

0xcb13,	// (0x0005e813) vkb2_area_bottom_pane

0xcb67,	// (0x0005e867) vkb2_area_keypad_pane_ParamLimits

0xcb67,	// (0x0005e867) vkb2_area_keypad_pane

0xcbaf,	// (0x0005e8af) vkb2_area_top_pane_ParamLimits

0xcbaf,	// (0x0005e8af) vkb2_area_top_pane

0xcc3b,	// (0x0005e93b) vkb2_top_entry_pane_ParamLimits

0xcc3b,	// (0x0005e93b) vkb2_top_entry_pane

0xcc68,	// (0x0005e968) vkb2_top_grid_left_pane_ParamLimits

0xcc68,	// (0x0005e968) vkb2_top_grid_left_pane

0xcc89,	// (0x0005e989) vkb2_top_grid_right_pane_ParamLimits

0xcc89,	// (0x0005e989) vkb2_top_grid_right_pane

0x2262,	// (0x00053f62) vkb2_cell_keypad_pane_ParamLimits

0x2262,	// (0x00053f62) vkb2_cell_keypad_pane

0xccd1,	// (0x0005e9d1) vkb2_area_bottom_grid_pane_ParamLimits

0xccd1,	// (0x0005e9d1) vkb2_area_bottom_grid_pane

0xccfb,	// (0x0005e9fb) vkb2_area_bottom_pane_g1_ParamLimits

0xccfb,	// (0x0005e9fb) vkb2_area_bottom_pane_g1

0xcd21,	// (0x0005ea21) vkb2_area_bottom_pane_g2_ParamLimits

0xcd21,	// (0x0005ea21) vkb2_area_bottom_pane_g2

0xcd52,	// (0x0005ea52) vkb2_area_bottom_pane_g3_ParamLimits

0xcd52,	// (0x0005ea52) vkb2_area_bottom_pane_g3

0x0002,

0xfd62,	// (0x00061a62) vkb2_area_bottom_pane_g_ParamLimits

0xfd62,	// (0x00061a62) vkb2_area_bottom_pane_g

0x240c,	// (0x0005410c) vkb2_top_cell_left_pane_ParamLimits

0x240c,	// (0x0005410c) vkb2_top_cell_left_pane

0xe99a,	// (0x0006069a) vkb2_top_entry_pane_g1_ParamLimits

0xe99a,	// (0x0006069a) vkb2_top_entry_pane_g1

0xe9a8,	// (0x000606a8) vkb2_top_entry_pane_t1_ParamLimits

0xe9a8,	// (0x000606a8) vkb2_top_entry_pane_t1

0x93b0,	// (0x0005b0b0) vkb2_top_entry_pane_t2_ParamLimits

0x93b0,	// (0x0005b0b0) vkb2_top_entry_pane_t2

0x93e2,	// (0x0005b0e2) vkb2_top_entry_pane_t3_ParamLimits

0x93e2,	// (0x0005b0e2) vkb2_top_entry_pane_t3

0x0002,

0xfd69,	// (0x00061a69) vkb2_top_entry_pane_t_ParamLimits

0xfd69,	// (0x00061a69) vkb2_top_entry_pane_t

0xcdbc,	// (0x0005eabc) vkb2_top_grid_right_pane_g1_ParamLimits

0xcdbc,	// (0x0005eabc) vkb2_top_grid_right_pane_g1

0x246f,	// (0x0005416f) vkb2_top_grid_right_pane_g2_ParamLimits

0x246f,	// (0x0005416f) vkb2_top_grid_right_pane_g2

0x2487,	// (0x00054187) vkb2_top_grid_right_pane_g3_ParamLimits

0x2487,	// (0x00054187) vkb2_top_grid_right_pane_g3

0xcdd2,	// (0x0005ead2) vkb2_top_grid_right_pane_g4_ParamLimits

0xcdd2,	// (0x0005ead2) vkb2_top_grid_right_pane_g4

0x0003,

0xfd70,	// (0x00061a70) vkb2_top_grid_right_pane_g_ParamLimits

0xfd70,	// (0x00061a70) vkb2_top_grid_right_pane_g

0x24b5,	// (0x000541b5) vkb2_top_cell_left_pane_g1

0x24cc,	// (0x000541cc) vkb2_cell_keypad_pane_g1_ParamLimits

0x24cc,	// (0x000541cc) vkb2_cell_keypad_pane_g1

0x9406,	// (0x0005b106) vkb2_cell_keypad_pane_t1_ParamLimits

0x9406,	// (0x0005b106) vkb2_cell_keypad_pane_t1

0x24da,	// (0x000541da) vkb2_cell_bottom_grid_pane_ParamLimits

0x24da,	// (0x000541da) vkb2_cell_bottom_grid_pane

0x2513,	// (0x00054213) vkb2_cell_bottom_grid_pane_g1

0xe64b,	// (0x0006034b) aid_call2_pane_cp02

0xe653,	// (0x00060353) aid_call_pane_cp02

0xe65b,	// (0x0006035b) clock_digital_number_pane_cp10

0xe663,	// (0x00060363) clock_digital_number_pane_cp11

0xe66b,	// (0x0006036b) clock_digital_number_pane_cp12

0xe673,	// (0x00060373) clock_digital_number_pane_cp13

0xe67b,	// (0x0006037b) clock_digital_separator_pane_cp10

0x4031,	// (0x00055d31) popup_clock_digital_analogue_window_cp2_g1

0x4031,	// (0x00055d31) popup_clock_digital_analogue_window_cp2_g2

0xe683,	// (0x00060383) popup_clock_digital_analogue_window_cp2_g3

0x4031,	// (0x00055d31) popup_clock_digital_analogue_window_cp2_g4

0xe683,	// (0x00060383) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd25,	// (0x00061a25) popup_clock_digital_analogue_window_cp2_g

0xe68b,	// (0x0006038b) popup_clock_digital_analogue_window_cp2_t1

0xe699,	// (0x00060399) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd30,	// (0x00061a30) popup_clock_digital_analogue_window_cp2_t

0x74dc,	// (0x000591dc) clock_digital_number_pane_cp10_g1

0x74dc,	// (0x000591dc) clock_digital_number_pane_cp10_g2

0x0001,

0xfb0c,	// (0x0006180c) clock_digital_number_pane_cp10_g

0x74dc,	// (0x000591dc) clock_digital_separator_pane_cp10_g1

0x74dc,	// (0x000591dc) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb0c,	// (0x0006180c) clock_digital_separator_pane_cp10_g

0x8e2d,	// (0x0005ab2d) uniindi_top_pane_g3

0x8e3e,	// (0x0005ab3e) uniindi_top_pane_g4

0x22ed,	// (0x00053fed) vkb2_row_keypad_pane_ParamLimits

0x22ed,	// (0x00053fed) vkb2_row_keypad_pane

0x2533,	// (0x00054233) vkb2_cell_t_keypad_pane_ParamLimits

0x2533,	// (0x00054233) vkb2_cell_t_keypad_pane

0x2543,	// (0x00054243) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2543,	// (0x00054243) vkb2_cell_t_keypad_pane_cp08

0x2556,	// (0x00054256) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2556,	// (0x00054256) vkb2_cell_t_keypad_pane_cp09

0x256a,	// (0x0005426a) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x256a,	// (0x0005426a) vkb2_cell_t_keypad_pane_cp01

0x257b,	// (0x0005427b) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x257b,	// (0x0005427b) vkb2_cell_t_keypad_pane_cp02

0x258c,	// (0x0005428c) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x258c,	// (0x0005428c) vkb2_cell_t_keypad_pane_cp03

0x259d,	// (0x0005429d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x259d,	// (0x0005429d) vkb2_cell_t_keypad_pane_cp04

0x25ae,	// (0x000542ae) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x25ae,	// (0x000542ae) vkb2_cell_t_keypad_pane_cp05

0x25bf,	// (0x000542bf) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x25bf,	// (0x000542bf) vkb2_cell_t_keypad_pane_cp06

0x25d0,	// (0x000542d0) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x25d0,	// (0x000542d0) vkb2_cell_t_keypad_pane_cp07

0x25e1,	// (0x000542e1) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x25e1,	// (0x000542e1) vkb2_cell_t_keypad_pane_cp10

0x1c1e,	// (0x0005391e) vkb2_cell_t_keypad_pane_g1

0x941d,	// (0x0005b11d) vkb2_cell_t_keypad_pane_t1

0xf311,	// (0x00061011) popup_grid_graphic2_window

0xe9e1,	// (0x000606e1) aid_size_cell_graphic2_ParamLimits

0xe9e1,	// (0x000606e1) aid_size_cell_graphic2

0xea1f,	// (0x0006071f) bg_popup_window_pane_cp21_ParamLimits

0xea1f,	// (0x0006071f) bg_popup_window_pane_cp21

0xea2d,	// (0x0006072d) graphic2_pages_pane_ParamLimits

0xea2d,	// (0x0006072d) graphic2_pages_pane

0xea83,	// (0x00060783) grid_graphic2_control_pane_ParamLimits

0xea83,	// (0x00060783) grid_graphic2_control_pane

0xeacb,	// (0x000607cb) grid_graphic2_pane_ParamLimits

0xeacb,	// (0x000607cb) grid_graphic2_pane

0xec72,	// (0x00060972) cell_graphic2_pane

0xf311,	// (0x00061011) main_comp_mode_pane

0x8699,	// (0x0005a399) list_ai3_gene_pane_ParamLimits

0xe392,	// (0x00060092) bg_popup_window_pane_cp19_ParamLimits

0x8a7b,	// (0x0005a77b) bg_touch_area_indi_pane_ParamLimits

0x8a7b,	// (0x0005a77b) bg_touch_area_indi_pane

0x8a91,	// (0x0005a791) bg_touch_area_indi_pane_cp01_ParamLimits

0x8a91,	// (0x0005a791) bg_touch_area_indi_pane_cp01

0x8aa7,	// (0x0005a7a7) bg_touch_area_indi_pane_cp02_ParamLimits

0x8aa7,	// (0x0005a7a7) bg_touch_area_indi_pane_cp02

0x8abd,	// (0x0005a7bd) bg_touch_area_indi_pane_cp03_ParamLimits

0x8abd,	// (0x0005a7bd) bg_touch_area_indi_pane_cp03

0x8ad7,	// (0x0005a7d7) popup_slider_window_g1_ParamLimits

0x8af3,	// (0x0005a7f3) popup_slider_window_g2_ParamLimits

0x8b0f,	// (0x0005a80f) popup_slider_window_g3_ParamLimits

0xfcba,	// (0x000619ba) popup_slider_window_g_ParamLimits

0x8b75,	// (0x0005a875) popup_slider_window_t1_ParamLimits

0x8be9,	// (0x0005a8e9) small_volume_slider_vertical_pane_ParamLimits

0xec72,	// (0x00060972) cell_graphic2_pane_ParamLimits

0xeccd,	// (0x000609cd) bg_button_pane_cp10_ParamLimits

0xeccd,	// (0x000609cd) bg_button_pane_cp10

0xece0,	// (0x000609e0) bg_button_pane_cp11_ParamLimits

0xece0,	// (0x000609e0) bg_button_pane_cp11

0xecf3,	// (0x000609f3) graphic2_pages_pane_g1_ParamLimits

0xecf3,	// (0x000609f3) graphic2_pages_pane_g1

0xed0e,	// (0x00060a0e) graphic2_pages_pane_g2_ParamLimits

0xed0e,	// (0x00060a0e) graphic2_pages_pane_g2

0x0001,

0xfd7e,	// (0x00061a7e) graphic2_pages_pane_g_ParamLimits

0xfd7e,	// (0x00061a7e) graphic2_pages_pane_g

0xed26,	// (0x00060a26) graphic2_pages_pane_t1_ParamLimits

0xed26,	// (0x00060a26) graphic2_pages_pane_t1

0xed3e,	// (0x00060a3e) cell_graphic2_control_pane_ParamLimits

0xed3e,	// (0x00060a3e) cell_graphic2_control_pane

0xed70,	// (0x00060a70) cell_graphic2_pane_g1_ParamLimits

0xed70,	// (0x00060a70) cell_graphic2_pane_g1

0xeb52,	// (0x00060852) cell_graphic2_pane_g2_ParamLimits

0xeb52,	// (0x00060852) cell_graphic2_pane_g2

0xddf2,	// (0x0005faf2) cell_graphic2_pane_g3_ParamLimits

0xddf2,	// (0x0005faf2) cell_graphic2_pane_g3

0xeb5f,	// (0x0006085f) cell_graphic2_pane_g4_ParamLimits

0xeb5f,	// (0x0006085f) cell_graphic2_pane_g4

0xed7d,	// (0x00060a7d) cell_graphic2_pane_g5_ParamLimits

0xed7d,	// (0x00060a7d) cell_graphic2_pane_g5

0x0004,

0xfd83,	// (0x00061a83) cell_graphic2_pane_g_ParamLimits

0xfd83,	// (0x00061a83) cell_graphic2_pane_g

0xed9a,	// (0x00060a9a) cell_graphic2_pane_t1_ParamLimits

0xed9a,	// (0x00060a9a) cell_graphic2_pane_t1

0x5bba,	// (0x000578ba) grid_highlight_pane_cp11_ParamLimits

0x5bba,	// (0x000578ba) grid_highlight_pane_cp11

0x2fbf,	// (0x00054cbf) bg_button_pane_cp05

0xede4,	// (0x00060ae4) cell_graphic2_control_pane_g1

0x74dc,	// (0x000591dc) bg_touch_area_indi_pane_g1

0x96f6,	// (0x0005b3f6) aid_cmod_rocker_key_size

0x9700,	// (0x0005b400) aid_cmode_itu_key_size

0x970a,	// (0x0005b40a) main_cmode_video_pane

0x9714,	// (0x0005b414) main_comp_mode_itu_pane

0x9720,	// (0x0005b420) main_comp_mode_rocker_pane

0x972c,	// (0x0005b42c) cell_cmode_rocker_pane_ParamLimits

0x972c,	// (0x0005b42c) cell_cmode_rocker_pane

0x973e,	// (0x0005b43e) cell_cmode_itu_pane_ParamLimits

0x973e,	// (0x0005b43e) cell_cmode_itu_pane

0x39a8,	// (0x000556a8) bg_button_pane_cp06_ParamLimits

0x39a8,	// (0x000556a8) bg_button_pane_cp06

0x775a,	// (0x0005945a) cell_cmode_rocker_pane_g1_ParamLimits

0x775a,	// (0x0005945a) cell_cmode_rocker_pane_g1

0x8c8d,	// (0x0005a98d) cell_cmode_rocker_pane_g2_ParamLimits

0x8c8d,	// (0x0005a98d) cell_cmode_rocker_pane_g2

0x0001,

0xfd93,	// (0x00061a93) cell_cmode_rocker_pane_g_ParamLimits

0xfd93,	// (0x00061a93) cell_cmode_rocker_pane_g

0xd061,	// (0x0005ed61) bg_button_pane_cp07

0x9753,	// (0x0005b453) cell_cmode_itu_pane_g1

0x975c,	// (0x0005b45c) cell_cmode_itu_pane_t1

0x976a,	// (0x0005b46a) cell_cmode_itu_pane_t2

0x0001,

0xfd98,	// (0x00061a98) cell_cmode_itu_pane_t

0x8eb0,	// (0x0005abb0) aid_touch_ctrl_left

0x8eb8,	// (0x0005abb8) aid_touch_ctrl_right

0xd061,	// (0x0005ed61) compa_mode_pane

0xee08,	// (0x00060b08) aid_cmod_rocker_key_size_cp

0xee12,	// (0x00060b12) aid_cmode_itu_key_size_cp

0x97ad,	// (0x0005b4ad) compa_mode_pane_g1

0x97b5,	// (0x0005b4b5) compa_mode_pane_g2

0x97bd,	// (0x0005b4bd) compa_mode_pane_g3

0x0002,

0xfd9d,	// (0x00061a9d) compa_mode_pane_g

0xee1c,	// (0x00060b1c) main_comp_mode_itu_pane_cp

0xee24,	// (0x00060b24) main_comp_mode_rocker_pane_cp

0xee2c,	// (0x00060b2c) cell_cmode_itu_pane_cp_ParamLimits

0xee2c,	// (0x00060b2c) cell_cmode_itu_pane_cp

0xee41,	// (0x00060b41) cell_cmode_rocker_pane_cp_ParamLimits

0xee41,	// (0x00060b41) cell_cmode_rocker_pane_cp

0x39a8,	// (0x000556a8) bg_button_pane_cp06_cp_ParamLimits

0x39a8,	// (0x000556a8) bg_button_pane_cp06_cp

0x775a,	// (0x0005945a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x775a,	// (0x0005945a) cell_cmode_rocker_pane_g1_cp

0x74dc,	// (0x000591dc) cell_cmode_rocker_pane_g2_cp

0xd061,	// (0x0005ed61) bg_button_pane_cp07_cp

0xee53,	// (0x00060b53) cell_cmode_itu_pane_g1_cp

0xee5c,	// (0x00060b5c) cell_cmode_itu_pane_t1_cp

0xee5c,	// (0x00060b5c) cell_cmode_itu_pane_t2_cp

0xd9fd,	// (0x0005f6fd) settings_code_pane_cp2

0x2d36,	// (0x00054a36) bg_popup_window_pane_cp3_ParamLimits

0x31bf,	// (0x00054ebf) heading_pane_cp3_ParamLimits

0x31ce,	// (0x00054ece) listscroll_popup_graphic_pane_ParamLimits

0x19c7,	// (0x000536c7) fep_hwr_aid_pane_ParamLimits

0x1fb4,	// (0x00053cb4) aid_touch_sctrl_top_ParamLimits

0x1fcf,	// (0x00053ccf) sctrl_sk_top_pane_g1_ParamLimits

0x1c1e,	// (0x0005391e) sctrl_sk_top_pane_g2_ParamLimits

0xfcd3,	// (0x000619d3) sctrl_sk_top_pane_g_ParamLimits

0x1fdc,	// (0x00053cdc) sctrl_sk_top_pane_t1_ParamLimits

0x1fb4,	// (0x00053cb4) aid_touch_sctrl_bottom_ParamLimits

0x1fdc,	// (0x00053cdc) sctrl_sk_bottom_pane_t1_ParamLimits

0x8df9,	// (0x0005aaf9) aid_area_touch_clock

0xcbfb,	// (0x0005e8fb) aid_vkb2_area_top_pane_cell_ParamLimits

0xcbfb,	// (0x0005e8fb) aid_vkb2_area_top_pane_cell

0xccaa,	// (0x0005e9aa) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xccaa,	// (0x0005e9aa) aid_vkb2_area_bottom_pane_cell

0x9368,	// (0x0005b068) popup_char_count_window

0x980a,	// (0x0005b50a) popup_char_count_window_g1

0x9813,	// (0x0005b513) popup_char_count_window_g2

0x981c,	// (0x0005b51c) popup_char_count_window_g3

0x0002,

0xfda4,	// (0x00061aa4) popup_char_count_window_g

0x9825,	// (0x0005b525) popup_char_count_window_t1

0x2083,	// (0x00053d83) popup_fep_char_preview_window_ParamLimits

0x2083,	// (0x00053d83) popup_fep_char_preview_window

0xcc1b,	// (0x0005e91b) vkb2_top_candi_pane_ParamLimits

0xcc1b,	// (0x0005e91b) vkb2_top_candi_pane

0xee6a,	// (0x00060b6a) cell_vkb2_top_candi_pane_ParamLimits

0xee6a,	// (0x00060b6a) cell_vkb2_top_candi_pane

0x25f6,	// (0x000542f6) bg_popup_fep_char_preview_window_ParamLimits

0x25f6,	// (0x000542f6) bg_popup_fep_char_preview_window

0x2604,	// (0x00054304) popup_fep_char_preview_window_t1_ParamLimits

0x2604,	// (0x00054304) popup_fep_char_preview_window_t1

0x987d,	// (0x0005b57d) bg_popup_fep_char_preview_window_g1

0x9885,	// (0x0005b585) bg_popup_fep_char_preview_window_g2

0x988d,	// (0x0005b58d) bg_popup_fep_char_preview_window_g3

0x9895,	// (0x0005b595) bg_popup_fep_char_preview_window_g4

0x989d,	// (0x0005b59d) bg_popup_fep_char_preview_window_g5

0x98a5,	// (0x0005b5a5) bg_popup_fep_char_preview_window_g6

0x98ad,	// (0x0005b5ad) bg_popup_fep_char_preview_window_g7

0x98b5,	// (0x0005b5b5) bg_popup_fep_char_preview_window_g8

0x98bd,	// (0x0005b5bd) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdab,	// (0x00061aab) bg_popup_fep_char_preview_window_g

0x1c1e,	// (0x0005391e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1c1e,	// (0x0005391e) cell_vkb2_top_candi_pane_g1

0x1c2c,	// (0x0005392c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1c2c,	// (0x0005392c) cell_vkb2_top_candi_pane_g2

0x978c,	// (0x0005b48c) cell_vkb2_top_candi_pane_g3_ParamLimits

0x978c,	// (0x0005b48c) cell_vkb2_top_candi_pane_g3

0x2646,	// (0x00054346) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2646,	// (0x00054346) cell_vkb2_top_candi_pane_g4

0x7c25,	// (0x00059925) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7c25,	// (0x00059925) cell_vkb2_top_candi_pane_g5

0x2667,	// (0x00054367) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2667,	// (0x00054367) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc0,	// (0x00061ac0) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc0,	// (0x00061ac0) cell_vkb2_top_candi_pane_g

0x2675,	// (0x00054375) cell_vkb2_top_candi_pane_t1

0x14ce,	// (0x000531ce) aid_size_touch_slider_mark_ParamLimits

0x14ce,	// (0x000531ce) aid_size_touch_slider_mark

0xea69,	// (0x00060769) grid_graphic2_catg_pane_ParamLimits

0xea69,	// (0x00060769) grid_graphic2_catg_pane

0xeb25,	// (0x00060825) popup_grid_graphic2_window_t1_ParamLimits

0xeb25,	// (0x00060825) popup_grid_graphic2_window_t1

0xeb3b,	// (0x0006083b) popup_grid_graphic2_window_t2_ParamLimits

0xeb3b,	// (0x0006083b) popup_grid_graphic2_window_t2

0x0001,

0xfd79,	// (0x00061a79) popup_grid_graphic2_window_t_ParamLimits

0xfd79,	// (0x00061a79) popup_grid_graphic2_window_t

0x2fbf,	// (0x00054cbf) bg_button_pane_cp05_ParamLimits

0xede4,	// (0x00060ae4) cell_graphic2_control_pane_g1_ParamLimits

0xeeca,	// (0x00060bca) cell_graphic2_catg_pane_ParamLimits

0xeeca,	// (0x00060bca) cell_graphic2_catg_pane

0xd061,	// (0x0005ed61) bg_button_pane_cp12

0xeedc,	// (0x00060bdc) cell_graphic2_catg_pane_g1

0x8dc5,	// (0x0005aac5) cell_tb_ext_pane_t1_ParamLimits

0x242c,	// (0x0005412c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x242c,	// (0x0005412c) vkb2_top_cell_right_narrow_pane

0x2444,	// (0x00054144) vkb2_top_cell_right_wide_pane_ParamLimits

0x2444,	// (0x00054144) vkb2_top_cell_right_wide_pane

0x19b9,	// (0x000536b9) bg_vkb2_func_pane_ParamLimits

0x19b9,	// (0x000536b9) bg_vkb2_func_pane

0x24b5,	// (0x000541b5) vkb2_top_cell_left_pane_g1_ParamLimits

0x19b9,	// (0x000536b9) bg_vkb2_fuc_pane_cp03_ParamLimits

0x19b9,	// (0x000536b9) bg_vkb2_fuc_pane_cp03

0x2513,	// (0x00054213) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4eb3,	// (0x00056bb3) bg_vkb2_func_pane_g1

0x4ebb,	// (0x00056bbb) bg_vkb2_func_pane_g2

0x4ecb,	// (0x00056bcb) bg_vkb2_func_pane_g3

0x4ec3,	// (0x00056bc3) bg_vkb2_func_pane_g4

0x4ed3,	// (0x00056bd3) bg_vkb2_func_pane_g5

0x4edb,	// (0x00056bdb) bg_vkb2_func_pane_g6

0x4ee3,	// (0x00056be3) bg_vkb2_func_pane_g7

0x4eeb,	// (0x00056beb) bg_vkb2_func_pane_g8

0x4eab,	// (0x00056bab) bg_vkb2_func_pane_g9

0x0008,

0xfdcd,	// (0x00061acd) bg_vkb2_func_pane_g

0x19b9,	// (0x000536b9) bg_vkb2_fuc_pane_cp01_ParamLimits

0x19b9,	// (0x000536b9) bg_vkb2_fuc_pane_cp01

0x24b5,	// (0x000541b5) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x24b5,	// (0x000541b5) vkb2_top_cell_right_wide_pane_g1

0x19b9,	// (0x000536b9) bg_vkb2_fuc_pane_cp02_ParamLimits

0x19b9,	// (0x000536b9) bg_vkb2_fuc_pane_cp02

0x2694,	// (0x00054394) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2694,	// (0x00054394) vkb2_top_cell_right_narrow_pane_g1

0xe2d4,	// (0x0005ffd4) aid_touch_area_decrease_ParamLimits

0xe2d4,	// (0x0005ffd4) aid_touch_area_decrease

0xe30e,	// (0x0006000e) aid_touch_area_increase_ParamLimits

0xe30e,	// (0x0006000e) aid_touch_area_increase

0xe336,	// (0x00060036) aid_touch_area_mute_ParamLimits

0xe336,	// (0x00060036) aid_touch_area_mute

0xe35e,	// (0x0006005e) aid_touch_area_slider_ParamLimits

0xe35e,	// (0x0006005e) aid_touch_area_slider

0xe39e,	// (0x0006009e) popup_slider_window_g4_ParamLimits

0xe39e,	// (0x0006009e) popup_slider_window_g4

0xe3c6,	// (0x000600c6) popup_slider_window_g5_ParamLimits

0xe3c6,	// (0x000600c6) popup_slider_window_g5

0xe3fa,	// (0x000600fa) popup_slider_window_g6_ParamLimits

0xe3fa,	// (0x000600fa) popup_slider_window_g6

0x8ba3,	// (0x0005a8a3) popup_slider_window_t2_ParamLimits

0x8ba3,	// (0x0005a8a3) popup_slider_window_t2

0x0001,

0xfcc7,	// (0x000619c7) popup_slider_window_t_ParamLimits

0xfcc7,	// (0x000619c7) popup_slider_window_t

0xe416,	// (0x00060116) slider_pane_ParamLimits

0xe416,	// (0x00060116) slider_pane

0x98e0,	// (0x0005b5e0) slider_pane_g1_ParamLimits

0x98e0,	// (0x0005b5e0) slider_pane_g1

0x98f4,	// (0x0005b5f4) slider_pane_g2_ParamLimits

0x98f4,	// (0x0005b5f4) slider_pane_g2

0x990a,	// (0x0005b60a) slider_pane_g3_ParamLimits

0x990a,	// (0x0005b60a) slider_pane_g3

0x0003,

0xfde0,	// (0x00061ae0) slider_pane_g_ParamLimits

0xfde0,	// (0x00061ae0) slider_pane_g

0xc762,	// (0x0005e462) popup_tb_float_extension_window_ParamLimits

0xc762,	// (0x0005e462) popup_tb_float_extension_window

0x9936,	// (0x0005b636) aid_size_cell_tb_float_ext

0xd061,	// (0x0005ed61) bg_popup_sub_window_cp28

0x9942,	// (0x0005b642) grid_tb_float_ext_pane

0x994c,	// (0x0005b64c) cell_tb_float_ext_pane_ParamLimits

0x994c,	// (0x0005b64c) cell_tb_float_ext_pane

0x9966,	// (0x0005b666) cell_tb_float_ext_pane_g1

0x996f,	// (0x0005b66f) grid_highlight_pane_cp12

0xc90f,	// (0x0005e60f) cell_last_hwr_side_pane_ParamLimits

0xc90f,	// (0x0005e60f) cell_last_hwr_side_pane

0x74dc,	// (0x000591dc) cell_last_hwr_side_pane_g1

0x9978,	// (0x0005b678) cell_last_hwr_side_pane_g2

0x0001,

0xfde9,	// (0x00061ae9) cell_last_hwr_side_pane_g

0xcd87,	// (0x0005ea87) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcd87,	// (0x0005ea87) vkb2_area_bottom_space_btn_pane

0x1c1e,	// (0x0005391e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x941d,	// (0x0005b11d) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2675,	// (0x00054375) cell_vkb2_top_candi_pane_t1_ParamLimits

0x26b4,	// (0x000543b4) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x26b4,	// (0x000543b4) vkb2_area_bottom_space_btn_pane_g1

0x26ee,	// (0x000543ee) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x26ee,	// (0x000543ee) vkb2_area_bottom_space_btn_pane_g2

0x2724,	// (0x00054424) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2724,	// (0x00054424) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdee,	// (0x00061aee) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdee,	// (0x00061aee) vkb2_area_bottom_space_btn_pane_g

0x1a7c,	// (0x0005377c) cel_fep_hwr_func_pane_ParamLimits

0x1a7c,	// (0x0005377c) cel_fep_hwr_func_pane

0xc8e4,	// (0x0005e5e4) cell_hwr_side_button_pane_ParamLimits

0xc8e4,	// (0x0005e5e4) cell_hwr_side_button_pane

0x8df9,	// (0x0005aaf9) aid_area_touch_clock_ParamLimits

0x2fbf,	// (0x00054cbf) bg_uniindi_top_pane_ParamLimits

0x8e0b,	// (0x0005ab0b) uniindi_top_pane_g1_ParamLimits

0x8e21,	// (0x0005ab21) uniindi_top_pane_g2_ParamLimits

0x8e2d,	// (0x0005ab2d) uniindi_top_pane_g3_ParamLimits

0x8e3e,	// (0x0005ab3e) uniindi_top_pane_g4_ParamLimits

0xfcff,	// (0x000619ff) uniindi_top_pane_g_ParamLimits

0x8e4b,	// (0x0005ab4b) uniindi_top_pane_t1_ParamLimits

0x2fbf,	// (0x00054cbf) bg_vkb2_func_pane_cp01_ParamLimits

0x2fbf,	// (0x00054cbf) bg_vkb2_func_pane_cp01

0x9981,	// (0x0005b681) cel_fep_hwr_func_pane_g1_ParamLimits

0x9981,	// (0x0005b681) cel_fep_hwr_func_pane_g1

0x2fbf,	// (0x00054cbf) bg_vkb2_func_pane_cp02_ParamLimits

0x2fbf,	// (0x00054cbf) bg_vkb2_func_pane_cp02

0x9981,	// (0x0005b681) cell_hwr_side_button_pane_g1_ParamLimits

0x9981,	// (0x0005b681) cell_hwr_side_button_pane_g1

0x4d2c,	// (0x00056a2c) status_pane_g4_ParamLimits

0x4d2c,	// (0x00056a2c) status_pane_g4

0x4d46,	// (0x00056a46) status_pane_t1

0x7221,	// (0x00058f21) form2_midp_gauge_slider_cont_pane

0x7229,	// (0x00058f29) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdcd6,	// (0x0005f9d6) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdce8,	// (0x0005f9e8) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfabf,	// (0x000617bf) form2_midp_gauge_slider_pane_t_ParamLimits

0x725f,	// (0x00058f5f) form2_midp_slider_pane_ParamLimits

0x204b,	// (0x00053d4b) aid_size_cell_func_vkb2_ParamLimits

0x204b,	// (0x00053d4b) aid_size_cell_func_vkb2

0x9922,	// (0x0005b622) slider_pane_g4_ParamLimits

0x9922,	// (0x0005b622) slider_pane_g4

0xcdf0,	// (0x0005eaf0) form2_midp_gauge_slider_pane_t2_cp01

0xcdfe,	// (0x0005eafe) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcdfe,	// (0x0005eafe) form2_midp_gauge_slider_pane_t3_cp01

0x2799,	// (0x00054499) form2_midp_slider_pane_cp01

0xd061,	// (0x0005ed61) navi_smil_pane

0x99ba,	// (0x0005b6ba) navi_smil_pane_g1

0x99c2,	// (0x0005b6c2) navi_smil_pane_t1

0x998f,	// (0x0005b68f) form2_midp_slider_pane_g1

0x9998,	// (0x0005b698) form2_midp_slider_pane_g2

0x99a0,	// (0x0005b6a0) form2_midp_slider_pane_g3

0x998f,	// (0x0005b68f) form2_midp_slider_pane_g4

0xeee5,	// (0x00060be5) form2_midp_slider_pane_g5

0x0004,

0xfdf7,	// (0x00061af7) form2_midp_slider_pane_g

0x275e,	// (0x0005445e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x275e,	// (0x0005445e) vkb2_area_bottom_space_btn_pane_g4

0xd3e1,	// (0x0005f0e1) lc0_navi_pane_ParamLimits

0xd3e1,	// (0x0005f0e1) lc0_navi_pane

0xd44b,	// (0x0005f14b) lc0_stat_indi_pane_ParamLimits

0xd44b,	// (0x0005f14b) lc0_stat_indi_pane

0xd460,	// (0x0005f160) ls0_title_pane_ParamLimits

0xd460,	// (0x0005f160) ls0_title_pane

0x39a8,	// (0x000556a8) bg_popup_sub_pane_cp14_ParamLimits

0x8de0,	// (0x0005aae0) list_uniindi_pane_ParamLimits

0x8dec,	// (0x0005aaec) uniindi_top_pane_ParamLimits

0x8e88,	// (0x0005ab88) list_single_uniindi_pane_g1_ParamLimits

0x8e9b,	// (0x0005ab9b) list_single_uniindi_pane_t1_ParamLimits

0xce1b,	// (0x0005eb1b) lc0_stat_clock_pane_ParamLimits

0xce1b,	// (0x0005eb1b) lc0_stat_clock_pane

0xeef0,	// (0x00060bf0) lc0_stat_indi_pane_g1_ParamLimits

0xeef0,	// (0x00060bf0) lc0_stat_indi_pane_g1

0xeefd,	// (0x00060bfd) lc0_stat_indi_pane_g2_ParamLimits

0xeefd,	// (0x00060bfd) lc0_stat_indi_pane_g2

0x0001,

0xfe02,	// (0x00061b02) lc0_stat_indi_pane_g_ParamLimits

0xfe02,	// (0x00061b02) lc0_stat_indi_pane_g

0xce28,	// (0x0005eb28) lc0_uni_indicator_pane_ParamLimits

0xce28,	// (0x0005eb28) lc0_uni_indicator_pane

0xef0a,	// (0x00060c0a) ls0_title_pane_g1_ParamLimits

0xef0a,	// (0x00060c0a) ls0_title_pane_g1

0xef1e,	// (0x00060c1e) ls0_title_pane_t1_ParamLimits

0xef1e,	// (0x00060c1e) ls0_title_pane_t1

0xce35,	// (0x0005eb35) lc0_uni_indicator_pane_g1_ParamLimits

0xce35,	// (0x0005eb35) lc0_uni_indicator_pane_g1

0x9a34,	// (0x0005b734) lc0_stat_clock_pane_t1

0xf311,	// (0x00061011) main_ai5_pane

0x9a42,	// (0x0005b742) ai5_sk_pane_ParamLimits

0x9a42,	// (0x0005b742) ai5_sk_pane

0xef4c,	// (0x00060c4c) cell_ai5_widget_pane_ParamLimits

0xef4c,	// (0x00060c4c) cell_ai5_widget_pane

0x9b18,	// (0x0005b818) aid_size_cell_widget_grid

0x9b2e,	// (0x0005b82e) bg_ai5_widget_pane_ParamLimits

0x9b2e,	// (0x0005b82e) bg_ai5_widget_pane

0x9baa,	// (0x0005b8aa) cell_ai5_widget_pane_g2

0x9bbe,	// (0x0005b8be) cell_ai5_widget_pane_g3

0x9bd8,	// (0x0005b8d8) cell_ai5_widget_pane_g4

0x9be8,	// (0x0005b8e8) cell_ai5_widget_pane_g5

0x9bf8,	// (0x0005b8f8) cell_ai5_widget_pane_g6

0x9c04,	// (0x0005b904) cell_ai5_widget_pane_g7

0x9c70,	// (0x0005b970) cell_ai5_widget_pane_t1_ParamLimits

0x9c70,	// (0x0005b970) cell_ai5_widget_pane_t1

0x9c8d,	// (0x0005b98d) cell_ai5_widget_pane_t2_ParamLimits

0x9c8d,	// (0x0005b98d) cell_ai5_widget_pane_t2

0x9ca5,	// (0x0005b9a5) cell_ai5_widget_pane_t3_ParamLimits

0x9ca5,	// (0x0005b9a5) cell_ai5_widget_pane_t3

0x9cbd,	// (0x0005b9bd) cell_ai5_widget_pane_t4_ParamLimits

0x9cbd,	// (0x0005b9bd) cell_ai5_widget_pane_t4

0x9ce3,	// (0x0005b9e3) cell_ai5_widget_pane_t5_ParamLimits

0x9ce3,	// (0x0005b9e3) cell_ai5_widget_pane_t5

0x9d02,	// (0x0005ba02) cell_ai5_widget_pane_t6_ParamLimits

0x9d02,	// (0x0005ba02) cell_ai5_widget_pane_t6

0x9d14,	// (0x0005ba14) cell_ai5_widget_pane_t7_ParamLimits

0x9d14,	// (0x0005ba14) cell_ai5_widget_pane_t7

0x9d33,	// (0x0005ba33) cell_ai5_widget_pane_t8_ParamLimits

0x9d33,	// (0x0005ba33) cell_ai5_widget_pane_t8

0x000b,

0xfe22,	// (0x00061b22) cell_ai5_widget_pane_t_ParamLimits

0xfe22,	// (0x00061b22) cell_ai5_widget_pane_t

0x9db7,	// (0x0005bab7) grid_ai5_widget_pane

0x39a8,	// (0x000556a8) highlight_cell_ai5_widget_pane_ParamLimits

0x39a8,	// (0x000556a8) highlight_cell_ai5_widget_pane

0xefb8,	// (0x00060cb8) ai5_sk_left_pane

0xefc2,	// (0x00060cc2) ai5_sk_middle_pane

0xefcc,	// (0x00060ccc) ai5_sk_right_pane

0x9dec,	// (0x0005baec) bg_ai5_widget_pane_g1_ParamLimits

0x9dec,	// (0x0005baec) bg_ai5_widget_pane_g1

0x9df8,	// (0x0005baf8) bg_ai5_widget_pane_g2_ParamLimits

0x9df8,	// (0x0005baf8) bg_ai5_widget_pane_g2

0x9e04,	// (0x0005bb04) bg_ai5_widget_pane_g3_ParamLimits

0x9e04,	// (0x0005bb04) bg_ai5_widget_pane_g3

0x9e10,	// (0x0005bb10) bg_ai5_widget_pane_g4_ParamLimits

0x9e10,	// (0x0005bb10) bg_ai5_widget_pane_g4

0x9e1c,	// (0x0005bb1c) bg_ai5_widget_pane_g5_ParamLimits

0x9e1c,	// (0x0005bb1c) bg_ai5_widget_pane_g5

0x9e28,	// (0x0005bb28) bg_ai5_widget_pane_g6_ParamLimits

0x9e28,	// (0x0005bb28) bg_ai5_widget_pane_g6

0x9e34,	// (0x0005bb34) bg_ai5_widget_pane_g7_ParamLimits

0x9e34,	// (0x0005bb34) bg_ai5_widget_pane_g7

0x9e40,	// (0x0005bb40) bg_ai5_widget_pane_g8_ParamLimits

0x9e40,	// (0x0005bb40) bg_ai5_widget_pane_g8

0x9e4c,	// (0x0005bb4c) bg_ai5_widget_pane_g9_ParamLimits

0x9e4c,	// (0x0005bb4c) bg_ai5_widget_pane_g9

0x0008,

0xfe3b,	// (0x00061b3b) bg_ai5_widget_pane_g_ParamLimits

0xfe3b,	// (0x00061b3b) bg_ai5_widget_pane_g

0x9e7e,	// (0x0005bb7e) cell_shortcut_ai5_widget_pane_ParamLimits

0x9e7e,	// (0x0005bb7e) cell_shortcut_ai5_widget_pane

0x465d,	// (0x0005635d) bg_cell_shortcut_ai5_widget_pane

0x9e8f,	// (0x0005bb8f) cell_grid_ai5_widget_pane_g1

0x465d,	// (0x0005635d) highlight_cell_shortcut_ai5_widget_pane

0x4eb3,	// (0x00056bb3) ai5_sk_left_pane_g1

0x9e98,	// (0x0005bb98) ai5_sk_left_pane_g2

0x9ea0,	// (0x0005bba0) ai5_sk_left_pane_g3

0x9ea8,	// (0x0005bba8) ai5_sk_left_pane_g4

0x0003,

0xfe4e,	// (0x00061b4e) ai5_sk_left_pane_g

0x9eb0,	// (0x0005bbb0) ai5_sk_left_pane_t1

0x4ebb,	// (0x00056bbb) ai5_sk_right_pane_g1

0x9ebe,	// (0x0005bbbe) ai5_sk_right_pane_g2

0x9ec6,	// (0x0005bbc6) ai5_sk_right_pane_g3

0x9ece,	// (0x0005bbce) ai5_sk_right_pane_g4

0x0003,

0xfe57,	// (0x00061b57) ai5_sk_right_pane_g

0x9ed6,	// (0x0005bbd6) ai5_sk_right_pane_t1

0x4ebb,	// (0x00056bbb) ai5_sk_middle_pane_g1

0x4eb3,	// (0x00056bb3) ai5_sk_middle_pane_g2

0x4ed3,	// (0x00056bd3) ai5_sk_middle_pane_g3

0x9ec6,	// (0x0005bbc6) ai5_sk_middle_pane_g4

0x9ea0,	// (0x0005bba0) ai5_sk_middle_pane_g5

0x9ee4,	// (0x0005bbe4) ai5_sk_middle_pane_g6

0xefd6,	// (0x00060cd6) ai5_sk_middle_pane_g7

0x0006,

0xfe60,	// (0x00061b60) ai5_sk_middle_pane_g

0xd2cd,	// (0x0005efcd) aid_touch_area_size_lc0_ParamLimits

0xd2cd,	// (0x0005efcd) aid_touch_area_size_lc0

0x1c4d,	// (0x0005394d) cell_hwr_candidate_pane_t1_ParamLimits

0x49fd,	// (0x000566fd) aid_touch_navi_pane

0xd559,	// (0x0005f259) status_dt_navi_pane_ParamLimits

0xd559,	// (0x0005f259) status_dt_navi_pane

0xd571,	// (0x0005f271) status_dt_sta_pane_ParamLimits

0xd571,	// (0x0005f271) status_dt_sta_pane

0xefde,	// (0x00060cde) dt_sta_controll_pane

0xefeb,	// (0x00060ceb) dt_sta_indi_pane

0xeff8,	// (0x00060cf8) dt_sta_title_pane

0x2fbf,	// (0x00054cbf) bg_dt_sta_indi_pane_ParamLimits

0x2fbf,	// (0x00054cbf) bg_dt_sta_indi_pane

0xf00a,	// (0x00060d0a) dt_sta_battery_pane

0xf012,	// (0x00060d12) dt_sta_indi_pane_g1

0x9f36,	// (0x0005bc36) dt_sta_indi_pane_g2

0x9f3f,	// (0x0005bc3f) dt_sta_indi_pane_g3

0x0002,

0xfe6f,	// (0x00061b6f) dt_sta_indi_pane_g

0x9f48,	// (0x0005bc48) dt_sta_signal_pane

0x39a8,	// (0x000556a8) bg_dt_sta_title_pane_ParamLimits

0x39a8,	// (0x000556a8) bg_dt_sta_title_pane

0x9f51,	// (0x0005bc51) dt_sta_title_pane_g1

0x9f59,	// (0x0005bc59) dt_sta_title_pane_t1_ParamLimits

0x9f59,	// (0x0005bc59) dt_sta_title_pane_t1

0xd061,	// (0x0005ed61) bg_dt_sta_control_pane

0xf01b,	// (0x00060d1b) dt_sta_controll_pane_g1

0x9f77,	// (0x0005bc77) bg_dt_sta_title_pane_g1

0x9f80,	// (0x0005bc80) bg_dt_sta_title_pane_g2

0x9f89,	// (0x0005bc89) bg_dt_sta_title_pane_g3

0x0002,

0xfe76,	// (0x00061b76) bg_dt_sta_title_pane_g

0x74dc,	// (0x000591dc) bg_dt_sta_indi_pane_g1

0x9f92,	// (0x0005bc92) dt_sta_signal_pane_g1

0x9f9a,	// (0x0005bc9a) dt_sta_signal_pane_g2

0x0001,

0xfe7d,	// (0x00061b7d) dt_sta_signal_pane_g

0x9fa2,	// (0x0005bca2) dt_sta_battery_pane_g1

0x9fab,	// (0x0005bcab) dt_sta_battery_pane_t1

0x74dc,	// (0x000591dc) bg_dt_sta_control_pane_g1

0x415c,	// (0x00055e5c) fep_china_uni_eep_pane

0x4164,	// (0x00055e64) fep_china_uni_entry_pane_ParamLimits

0x4174,	// (0x00055e74) popup_fep_china_uni_window_g1_ParamLimits

0x4184,	// (0x00055e84) popup_fep_china_uni_window_g2_ParamLimits

0x4184,	// (0x00055e84) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x000613fd) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x000613fd) popup_fep_china_uni_window_g

0x9fba,	// (0x0005bcba) fep_china_uni_eep_pane_g1

0x9fc2,	// (0x0005bcc2) fep_china_uni_eep_pane_t1

0x99b1,	// (0x0005b6b1) aid_touch_area_size_smil_player

0x4b53,	// (0x00056853) lc0_clock_pane

0x4d3a,	// (0x00056a3a) status_pane_g5_ParamLimits

0x4d3a,	// (0x00056a3a) status_pane_g5

0xc2e4,	// (0x0005dfe4) popup_keymap_window

0x4cf8,	// (0x000569f8) status_icon_pane

0x9bbe,	// (0x0005b8be) cell_ai5_widget_pane_g3_ParamLimits

0x9bd8,	// (0x0005b8d8) cell_ai5_widget_pane_g4_ParamLimits

0x9be8,	// (0x0005b8e8) cell_ai5_widget_pane_g5_ParamLimits

0x9c10,	// (0x0005b910) cell_ai5_widget_pane_g8_ParamLimits

0x9c10,	// (0x0005b910) cell_ai5_widget_pane_g8

0x9c24,	// (0x0005b924) cell_ai5_widget_pane_g9_ParamLimits

0x9c24,	// (0x0005b924) cell_ai5_widget_pane_g9

0x9c38,	// (0x0005b938) cell_ai5_widget_pane_g10_ParamLimits

0x9c38,	// (0x0005b938) cell_ai5_widget_pane_g10

0x9fd1,	// (0x0005bcd1) status_icon_pane_g1

0xd061,	// (0x0005ed61) bg_popup_sub_pane_cp13

0x9fd9,	// (0x0005bcd9) popup_keymap_window_t1

0xd263,	// (0x0005ef63) control_pane_g6_ParamLimits

0xd263,	// (0x0005ef63) control_pane_g6

0xd270,	// (0x0005ef70) control_pane_g7_ParamLimits

0xd270,	// (0x0005ef70) control_pane_g7

0xd27d,	// (0x0005ef7d) control_pane_g8_ParamLimits

0xd27d,	// (0x0005ef7d) control_pane_g8

0xefde,	// (0x00060cde) dt_sta_controll_pane_ParamLimits

0xefeb,	// (0x00060ceb) dt_sta_indi_pane_ParamLimits

0xeff8,	// (0x00060cf8) dt_sta_title_pane_ParamLimits

0x34fb,	// (0x000551fb) aid_size_touch_scroll_bar_cale

0xf3ea,	// (0x000610ea) popup_discreet_window_ParamLimits

0xf3ea,	// (0x000610ea) popup_discreet_window

0xb50c,	// (0x0005d20c) popup_sk_window

0x5546,	// (0x00057246) bg_popup_sub_pane_cp28_ParamLimits

0x5546,	// (0x00057246) bg_popup_sub_pane_cp28

0x9fe7,	// (0x0005bce7) popup_discreet_window_g1_ParamLimits

0x9fe7,	// (0x0005bce7) popup_discreet_window_g1

0xa007,	// (0x0005bd07) popup_discreet_window_t1_ParamLimits

0xa007,	// (0x0005bd07) popup_discreet_window_t1

0xa025,	// (0x0005bd25) popup_discreet_window_t2_ParamLimits

0xa025,	// (0x0005bd25) popup_discreet_window_t2

0x0002,

0xfe82,	// (0x00061b82) popup_discreet_window_t_ParamLimits

0xfe82,	// (0x00061b82) popup_discreet_window_t

0x27d0,	// (0x000544d0) popup_sk_window_g1

0x27da,	// (0x000544da) popup_sk_window_g2

0x0001,

0xfe89,	// (0x00061b89) popup_sk_window_g

0x27e2,	// (0x000544e2) popup_sk_window_t1

0x27f0,	// (0x000544f0) popup_sk_window_t1_copy1

0x9baa,	// (0x0005b8aa) cell_ai5_widget_pane_g2_ParamLimits

0x9d45,	// (0x0005ba45) cell_ai5_widget_pane_t9_ParamLimits

0x9d45,	// (0x0005ba45) cell_ai5_widget_pane_t9

0xd061,	// (0x0005ed61) main_fep_fshwr2_pane

0xce5c,	// (0x0005eb5c) aid_fshwr2_btn_pane

0xce6c,	// (0x0005eb6c) aid_fshwr2_syb_pane

0xce80,	// (0x0005eb80) aid_fshwr2_txt_pane

0xce90,	// (0x0005eb90) fshwr2_func_candi_pane

0xceb0,	// (0x0005ebb0) fshwr2_hwr_syb_pane

0xced2,	// (0x0005ebd2) fshwr2_icf_pane

0xf311,	// (0x00061011) fshwr2_icf_bg_pane

0xcf02,	// (0x0005ec02) fshwr2_icf_pane_t1_ParamLimits

0xcf02,	// (0x0005ec02) fshwr2_icf_pane_t1

0x4031,	// (0x00055d31) fshwr2_func_candi_pane_g1

0xf024,	// (0x00060d24) fshwr2_func_candi_row_pane_ParamLimits

0xf024,	// (0x00060d24) fshwr2_func_candi_row_pane

0xcf1b,	// (0x0005ec1b) cell_fshwr2_syb_pane_ParamLimits

0xcf1b,	// (0x0005ec1b) cell_fshwr2_syb_pane

0x28d9,	// (0x000545d9) fshwr2_hwr_syb_pane_g1_ParamLimits

0x28d9,	// (0x000545d9) fshwr2_hwr_syb_pane_g1

0xf311,	// (0x00061011) bg_popup_call_pane_cp01

0xcf41,	// (0x0005ec41) fshwr2_func_candi_cell_pane_ParamLimits

0xcf41,	// (0x0005ec41) fshwr2_func_candi_cell_pane

0x531b,	// (0x0005701b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x531b,	// (0x0005701b) fshwr2_func_candi_cell_bg_pane

0xcf8c,	// (0x0005ec8c) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcf8c,	// (0x0005ec8c) fshwr2_func_candi_cell_pane_g1

0xcfc3,	// (0x0005ecc3) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcfc3,	// (0x0005ecc3) fshwr2_func_candi_cell_pane_t1

0xf311,	// (0x00061011) bg_button_pane_cp08

0x4981,	// (0x00056681) cell_fshwr2_syb_bg_pane

0xcfde,	// (0x0005ecde) cell_fshwr2_syb_bg_pane_g1

0xcff1,	// (0x0005ecf1) cell_fshwr2_syb_bg_pane_t1

0x39a8,	// (0x000556a8) main_tmo_pane

0xd82f,	// (0x0005f52f) uni_indicator_pane_g1_ParamLimits

0xd845,	// (0x0005f545) uni_indicator_pane_g2_ParamLimits

0xd85b,	// (0x0005f55b) uni_indicator_pane_g3_ParamLimits

0x6094,	// (0x00057d94) uni_indicator_pane_g4_ParamLimits

0x6094,	// (0x00057d94) uni_indicator_pane_g4

0x60a8,	// (0x00057da8) uni_indicator_pane_g5_ParamLimits

0x60a8,	// (0x00057da8) uni_indicator_pane_g5

0x60a8,	// (0x00057da8) uni_indicator_pane_g6_ParamLimits

0x60a8,	// (0x00057da8) uni_indicator_pane_g6

0xf8fc,	// (0x000615fc) uni_indicator_pane_g_ParamLimits

0xe2b0,	// (0x0005ffb0) popup_tmo_note_window_ParamLimits

0xe2b0,	// (0x0005ffb0) popup_tmo_note_window

0x202d,	// (0x00053d2d) fshwr2_bg_pane

0xcfb4,	// (0x0005ecb4) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcfb4,	// (0x0005ecb4) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe8e,	// (0x00061b8e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe8e,	// (0x00061b8e) fshwr2_func_candi_cell_pane_g

0x1c06,	// (0x00053906) bg_popup_window_pane_cp01

0x299a,	// (0x0005469a) bg_popup_window_pane_g1_cp01

0xa09e,	// (0x0005bd9e) bg_popup_window_pane_cp22_ParamLimits

0xa09e,	// (0x0005bd9e) bg_popup_window_pane_cp22

0xa0ac,	// (0x0005bdac) listscroll_tmo_link_pane_ParamLimits

0xa0ac,	// (0x0005bdac) listscroll_tmo_link_pane

0xa0ec,	// (0x0005bdec) popup_tmo_note_window_g1_ParamLimits

0xa0ec,	// (0x0005bdec) popup_tmo_note_window_g1

0xa0f9,	// (0x0005bdf9) tmo_note_info_pane_ParamLimits

0xa0f9,	// (0x0005bdf9) tmo_note_info_pane

0xf047,	// (0x00060d47) list_tmo_note_info_pane_g1_ParamLimits

0xf047,	// (0x00060d47) list_tmo_note_info_pane_g1

0xa12a,	// (0x0005be2a) list_tmo_note_info_pane_g2_ParamLimits

0xa12a,	// (0x0005be2a) list_tmo_note_info_pane_g2

0x0001,

0xfe93,	// (0x00061b93) list_tmo_note_info_pane_g_ParamLimits

0xfe93,	// (0x00061b93) list_tmo_note_info_pane_g

0xa146,	// (0x0005be46) list_tmo_note_info_text_pane_ParamLimits

0xa146,	// (0x0005be46) list_tmo_note_info_text_pane

0xa1c7,	// (0x0005bec7) list_tmo_link_pane

0xa1d4,	// (0x0005bed4) scroll_pane_cp20

0xa1e1,	// (0x0005bee1) list_single_tmo_link_pane_ParamLimits

0xa1e1,	// (0x0005bee1) list_single_tmo_link_pane

0xa1f1,	// (0x0005bef1) list_single_tmo_link_pane_t1

0xa1ff,	// (0x0005beff) list_tmo_note_info_text_pane_t1_ParamLimits

0xa1ff,	// (0x0005beff) list_tmo_note_info_text_pane_t1

0xbe1f,	// (0x0005db1f) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbe1f,	// (0x0005db1f) aid_size_touch_scroll_bar_cp01

0xbd8e,	// (0x0005da8e) aid_size_touch_slider_marker

0xb4fc,	// (0x0005d1fc) popup_settings_window_ParamLimits

0xb4fc,	// (0x0005d1fc) popup_settings_window

0x0b3c,	// (0x0005283c) popup_candi_list_indi_window

0x49fd,	// (0x000566fd) aid_touch_navi_pane_ParamLimits

0x1f88,	// (0x00053c88) rs_clock_indi_pane

0x1f91,	// (0x00053c91) sctrl_sk_bottom_pane_ParamLimits

0x1fa2,	// (0x00053ca2) sctrl_sk_top_pane_ParamLimits

0x209d,	// (0x00053d9d) popup_fep_tooltip_window

0x9b18,	// (0x0005b818) aid_size_cell_widget_grid_ParamLimits

0x9b95,	// (0x0005b895) cell_ai5_widget_pane_g1_ParamLimits

0x9b95,	// (0x0005b895) cell_ai5_widget_pane_g1

0x9bf8,	// (0x0005b8f8) cell_ai5_widget_pane_g6_ParamLimits

0x9c04,	// (0x0005b904) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe07,	// (0x00061b07) cell_ai5_widget_pane_g_ParamLimits

0xfe07,	// (0x00061b07) cell_ai5_widget_pane_g

0x9d74,	// (0x0005ba74) cell_ai5_widget_pane_t10_ParamLimits

0x9d74,	// (0x0005ba74) cell_ai5_widget_pane_t10

0x9db7,	// (0x0005bab7) grid_ai5_widget_pane_ParamLimits

0x9e58,	// (0x0005bb58) cell_contacts_ai5_widget_pane_ParamLimits

0x9e58,	// (0x0005bb58) cell_contacts_ai5_widget_pane

0xa03a,	// (0x0005bd3a) popup_discreet_window_t3_ParamLimits

0xa03a,	// (0x0005bd3a) popup_discreet_window_t3

0xceee,	// (0x0005ebee) popup_fshwr2_char_preview_window_ParamLimits

0xceee,	// (0x0005ebee) popup_fshwr2_char_preview_window

0xf05e,	// (0x00060d5e) tmo_note_info_pane_t1

0xf073,	// (0x00060d73) tmo_note_info_pane_t2

0xf08a,	// (0x00060d8a) tmo_note_info_pane_t3

0xa1a3,	// (0x0005bea3) tmo_note_info_pane_t4

0xa1b5,	// (0x0005beb5) tmo_note_info_pane_t5

0x0004,

0xfe98,	// (0x00061b98) tmo_note_info_pane_t

0xa1c7,	// (0x0005bec7) list_tmo_link_pane_ParamLimits

0xa1d4,	// (0x0005bed4) scroll_pane_cp20_ParamLimits

0xf311,	// (0x00061011) bg_popup_fep_char_preview_window_cp01

0xf09f,	// (0x00060d9f) popup_fshwr2_char_preview_window_t1

0xa226,	// (0x0005bf26) popup_candi_list_indi_window_g1

0xa22f,	// (0x0005bf2f) bg_cell_contacts_ai5_widget_pane

0xa23b,	// (0x0005bf3b) cell_contacts_ai5_widget_pane_g1

0x7b7a,	// (0x0005987a) cell_contacts_ai5_widget_pane_g2

0xa250,	// (0x0005bf50) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea3,	// (0x00061ba3) cell_contacts_ai5_widget_pane_g

0xa25c,	// (0x0005bf5c) cell_contacts_ai5_widget_pane_t1

0x39a8,	// (0x000556a8) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa2d3,	// (0x0005bfd3) settings_container_pane

0x465d,	// (0x0005635d) listscroll_set_pane_copy1

0x6bc6,	// (0x000588c6) scroll_pane_cp121_copy1

0x52d7,	// (0x00056fd7) set_content_pane_copy1

0xa2df,	// (0x0005bfdf) aid_height_set_list_copy1_ParamLimits

0xa2df,	// (0x0005bfdf) aid_height_set_list_copy1

0x62a0,	// (0x00057fa0) aid_size_parent_copy1_ParamLimits

0x62a0,	// (0x00057fa0) aid_size_parent_copy1

0xa2eb,	// (0x0005bfeb) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa2eb,	// (0x0005bfeb) button_value_adjust_pane_cp6_copy1

0x4981,	// (0x00056681) list_highlight_pane_cp2_copy1_ParamLimits

0x4981,	// (0x00056681) list_highlight_pane_cp2_copy1

0xa2ff,	// (0x0005bfff) list_set_pane_copy1_ParamLimits

0xa2ff,	// (0x0005bfff) list_set_pane_copy1

0xa26e,	// (0x0005bf6e) main_pane_set_t1_copy1_ParamLimits

0xa26e,	// (0x0005bf6e) main_pane_set_t1_copy1

0xa2a8,	// (0x0005bfa8) main_pane_set_t2_copy1_ParamLimits

0xa2a8,	// (0x0005bfa8) main_pane_set_t2_copy1

0xa3ac,	// (0x0005c0ac) main_pane_set_t3_copy1

0xa3ba,	// (0x0005c0ba) main_pane_set_t4_copy1

0xa2c7,	// (0x0005bfc7) set_content_pane_g1_copy1_ParamLimits

0xa2c7,	// (0x0005bfc7) set_content_pane_g1_copy1

0xa3c8,	// (0x0005c0c8) setting_code_pane_copy1

0xa3d0,	// (0x0005c0d0) setting_slider_graphic_pane_copy1

0xa3d0,	// (0x0005c0d0) setting_slider_pane_copy1

0xa3d8,	// (0x0005c0d8) setting_text_pane_copy1

0xa3d8,	// (0x0005c0d8) setting_volume_pane_copy1

0xa3c8,	// (0x0005c0c8) settings_code_pane_cp2_copy1

0xa3e0,	// (0x0005c0e0) settings_code_pane_cp_copy1_ParamLimits

0xa3e0,	// (0x0005c0e0) settings_code_pane_cp_copy1

0x29a3,	// (0x000546a3) volume_set_pane_copy1

0xa3f4,	// (0x0005c0f4) volume_set_pane_g10_copy1

0xa3fc,	// (0x0005c0fc) volume_set_pane_g1_copy1

0xa404,	// (0x0005c104) volume_set_pane_g2_copy1

0xa40c,	// (0x0005c10c) volume_set_pane_g3_copy1

0xa414,	// (0x0005c114) volume_set_pane_g4_copy1

0xa41c,	// (0x0005c11c) volume_set_pane_g5_copy1

0xa424,	// (0x0005c124) volume_set_pane_g6_copy1

0xa42c,	// (0x0005c12c) volume_set_pane_g7_copy1

0xa434,	// (0x0005c134) volume_set_pane_g8_copy1

0xa43c,	// (0x0005c13c) volume_set_pane_g9_copy1

0x2d36,	// (0x00054a36) bg_set_opt_pane_cp_copy1_ParamLimits

0x2d36,	// (0x00054a36) bg_set_opt_pane_cp_copy1

0x29ab,	// (0x000546ab) setting_slider_pane_t1_copy1_ParamLimits

0x29ab,	// (0x000546ab) setting_slider_pane_t1_copy1

0x29ca,	// (0x000546ca) setting_slider_pane_t2_copy1_ParamLimits

0x29ca,	// (0x000546ca) setting_slider_pane_t2_copy1

0x29e4,	// (0x000546e4) setting_slider_pane_t3_copy1_ParamLimits

0x29e4,	// (0x000546e4) setting_slider_pane_t3_copy1

0x29fc,	// (0x000546fc) slider_set_pane_copy1_ParamLimits

0x29fc,	// (0x000546fc) slider_set_pane_copy1

0x39f4,	// (0x000556f4) set_opt_bg_pane_g1_copy2

0x39fc,	// (0x000556fc) set_opt_bg_pane_g2_copy2

0xa444,	// (0x0005c144) set_opt_bg_pane_g3_copy2

0x3a0c,	// (0x0005570c) set_opt_bg_pane_g4_copy2

0x3a14,	// (0x00055714) set_opt_bg_pane_g5_copy2

0x3a1c,	// (0x0005571c) set_opt_bg_pane_g6_copy2

0xa44e,	// (0x0005c14e) set_opt_bg_pane_g7_copy2

0xa456,	// (0x0005c156) set_opt_bg_pane_g8_copy2

0xa460,	// (0x0005c160) set_opt_bg_pane_g9_copy2

0x2a12,	// (0x00054712) aid_size_touch_slider_mark_copy1_ParamLimits

0x2a12,	// (0x00054712) aid_size_touch_slider_mark_copy1

0xa46a,	// (0x0005c16a) slider_set_pane_g1_copy1

0x2a26,	// (0x00054726) slider_set_pane_g2_copy1

0x14ee,	// (0x000531ee) slider_set_pane_g3_copy1_ParamLimits

0x14ee,	// (0x000531ee) slider_set_pane_g3_copy1

0x1502,	// (0x00053202) slider_set_pane_g4_copy1_ParamLimits

0x1502,	// (0x00053202) slider_set_pane_g4_copy1

0x151a,	// (0x0005321a) slider_set_pane_g5_copy1_ParamLimits

0x151a,	// (0x0005321a) slider_set_pane_g5_copy1

0x14ee,	// (0x000531ee) slider_set_pane_g6_copy1_ParamLimits

0x14ee,	// (0x000531ee) slider_set_pane_g6_copy1

0x2a2e,	// (0x0005472e) slider_set_pane_g7_copy1_ParamLimits

0x2a2e,	// (0x0005472e) slider_set_pane_g7_copy1

0x2c56,	// (0x00054956) bg_set_opt_pane_cp2_copy1

0xa473,	// (0x0005c173) setting_slider_graphic_pane_g1_copy1

0xa47c,	// (0x0005c17c) setting_slider_graphic_pane_t1_copy1

0xa48c,	// (0x0005c18c) setting_slider_graphic_pane_t2_copy1

0xa49c,	// (0x0005c19c) slider_set_pane_cp_copy1

0xa4ac,	// (0x0005c1ac) input_focus_pane_cp1_copy1

0xa4b5,	// (0x0005c1b5) list_set_text_pane_copy1

0xa4bd,	// (0x0005c1bd) setting_text_pane_g1_copy1

0x3982,	// (0x00055682) set_text_pane_t1_copy1

0xa4ac,	// (0x0005c1ac) input_focus_pane_cp2_copy1

0xa4bd,	// (0x0005c1bd) setting_code_pane_g1_copy1

0xa4c6,	// (0x0005c1c6) setting_code_pane_t1_copy1

0x69ee,	// (0x000586ee) list_set_graphic_pane_copy1

0x2c56,	// (0x00054956) bg_set_opt_pane_cp4_copy1

0x435b,	// (0x0005605b) list_set_graphic_pane_g1_copy1_ParamLimits

0x435b,	// (0x0005605b) list_set_graphic_pane_g1_copy1

0xa4d4,	// (0x0005c1d4) list_set_graphic_pane_g2_copy1

0x4373,	// (0x00056073) list_set_graphic_pane_t1_copy1_ParamLimits

0x4373,	// (0x00056073) list_set_graphic_pane_t1_copy1

0x74dc,	// (0x000591dc) rs_clock_indi_pane_g1

0xa4dc,	// (0x0005c1dc) rs_clock_indi_pane_t1

0xa4ea,	// (0x0005c1ea) rs_indi_pane

0xa4f2,	// (0x0005c1f2) rs_indi_pane_g1

0xa4fb,	// (0x0005c1fb) rs_indi_pane_g2

0xa504,	// (0x0005c204) rs_indi_pane_g3

0x0002,

0xfeaa,	// (0x00061baa) rs_indi_pane_g

0x465d,	// (0x0005635d) bg_popup_preview_window_pane_cp03

0xa50d,	// (0x0005c20d) popup_fep_tooltip_window_t1

0x8164,	// (0x00059e64) popup_note2_window_g2_ParamLimits

0x8164,	// (0x00059e64) popup_note2_window_g2

0x0001,

0xfc37,	// (0x00061937) popup_note2_window_g_ParamLimits

0xfc37,	// (0x00061937) popup_note2_window_g

0x865f,	// (0x0005a35f) bg_popup_sub_pane_cp11_ParamLimits

0x866c,	// (0x0005a36c) cell_ai3_links_pane_g1_ParamLimits

0x8683,	// (0x0005a383) cell_ai3_links_pane_t1

0x3982,	// (0x00055682) set_text_pane_t1_copy1_ParamLimits

0x4571,	// (0x00056271) cell_graphic_popup_pane_cp2_ParamLimits

0x4571,	// (0x00056271) cell_graphic_popup_pane_cp2

0xa51b,	// (0x0005c21b) cell_graphic_popup_pane_g1_cp2

0x330e,	// (0x0005500e) cell_graphic_popup_pane_g2_cp2

0xa523,	// (0x0005c223) cell_graphic_popup_pane_g3_cp2

0xa52b,	// (0x0005c22b) cell_graphic_popup_pane_t2_cp2

0x331f,	// (0x0005501f) grid_highlight_pane_cp3_cp2

0x3d4c,	// (0x00055a4c) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x39a8,	// (0x000556a8) main_tmo_pane_ParamLimits

0xe2a4,	// (0x0005ffa4) popup_tmo_big_image_note_window

0x9b84,	// (0x0005b884) cell_ai5_widget_list_pane

0x9b8c,	// (0x0005b88c) cell_ai5_widget_lrg_icon_pane

0xf05e,	// (0x00060d5e) tmo_note_info_pane_t1_ParamLimits

0xf073,	// (0x00060d73) tmo_note_info_pane_t2_ParamLimits

0xf08a,	// (0x00060d8a) tmo_note_info_pane_t3_ParamLimits

0xa1a3,	// (0x0005bea3) tmo_note_info_pane_t4_ParamLimits

0xa1b5,	// (0x0005beb5) tmo_note_info_pane_t5_ParamLimits

0xfe98,	// (0x00061b98) tmo_note_info_pane_t_ParamLimits

0xa2d3,	// (0x0005bfd3) settings_container_pane_ParamLimits

0xa4a4,	// (0x0005c1a4) indicator_popup_pane_cp5

0xa4a4,	// (0x0005c1a4) indicator_popup_pane_cp6

0x69ee,	// (0x000586ee) list_set_graphic_pane_copy1_ParamLimits

0xd061,	// (0x0005ed61) bg_popup_window_pane_cp23

0xa539,	// (0x0005c239) popup_tmo_big_image_note_window_g1

0xa543,	// (0x0005c243) popup_tmo_big_image_note_window_t1

0xa553,	// (0x0005c253) popup_tmo_big_image_note_window_t2

0xa563,	// (0x0005c263) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb1,	// (0x00061bb1) popup_tmo_big_image_note_window_t

0x74dc,	// (0x000591dc) cell_ai5_widget_lrg_icon_pane_g1

0xa573,	// (0x0005c273) cell_ai5_widget_lrg_icon_pane_t1

0xa581,	// (0x0005c281) cell_ai5_widget_list_row_pane_ParamLimits

0xa581,	// (0x0005c281) cell_ai5_widget_list_row_pane

0xa598,	// (0x0005c298) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa598,	// (0x0005c298) cell_ai5_widget_list_row_pane_g1

0xa5a5,	// (0x0005c2a5) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa5a5,	// (0x0005c2a5) cell_ai5_widget_list_row_pane_t1

0xa5d6,	// (0x0005c2d6) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa5d6,	// (0x0005c2d6) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb8,	// (0x00061bb8) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb8,	// (0x00061bb8) cell_ai5_widget_list_row_pane_t

0xf311,	// (0x00061011) main_fep_vtchi_ss_pane

0xa626,	// (0x0005c326) popup_fep_char_pre_window

0xa62e,	// (0x0005c32e) popup_fep_ituss_window

0xf0d7,	// (0x00060dd7) popup_fep_vkbss_window

0x4981,	// (0x00056681) grid_vkbss_keypad_pane_ParamLimits

0x4981,	// (0x00056681) grid_vkbss_keypad_pane

0xa69a,	// (0x0005c39a) ituss_keypad_pane

0x2a4e,	// (0x0005474e) aid_vkbss_key_offset_ParamLimits

0x2a4e,	// (0x0005474e) aid_vkbss_key_offset

0xd007,	// (0x0005ed07) cell_vkbss_key_pane_ParamLimits

0xd007,	// (0x0005ed07) cell_vkbss_key_pane

0xa6a6,	// (0x0005c3a6) bg_cell_vkbss_key_g1_ParamLimits

0xa6a6,	// (0x0005c3a6) bg_cell_vkbss_key_g1

0xf0e4,	// (0x00060de4) cell_vkbss_key_3p_pane_ParamLimits

0xf0e4,	// (0x00060de4) cell_vkbss_key_3p_pane

0xf11a,	// (0x00060e1a) cell_vkbss_key_g1_ParamLimits

0xf11a,	// (0x00060e1a) cell_vkbss_key_g1

0xf150,	// (0x00060e50) cell_vkbss_key_t1_ParamLimits

0xf150,	// (0x00060e50) cell_vkbss_key_t1

0x2ab2,	// (0x000547b2) cell_ituss_key_pane_ParamLimits

0x2ab2,	// (0x000547b2) cell_ituss_key_pane

0xa77a,	// (0x0005c47a) bg_cell_ituss_key_g1_ParamLimits

0xa77a,	// (0x0005c47a) bg_cell_ituss_key_g1

0xa786,	// (0x0005c486) cell_ituss_key_pane_g1_ParamLimits

0xa786,	// (0x0005c486) cell_ituss_key_pane_g1

0x2ac3,	// (0x000547c3) cell_ituss_key_pane_g2_ParamLimits

0x2ac3,	// (0x000547c3) cell_ituss_key_pane_g2

0x0005,

0xfebf,	// (0x00061bbf) cell_ituss_key_pane_g_ParamLimits

0xfebf,	// (0x00061bbf) cell_ituss_key_pane_g

0x2b47,	// (0x00054847) cell_ituss_key_t1_ParamLimits

0x2b47,	// (0x00054847) cell_ituss_key_t1

0x2b81,	// (0x00054881) cell_ituss_key_t2_ParamLimits

0x2b81,	// (0x00054881) cell_ituss_key_t2

0x2bb3,	// (0x000548b3) cell_ituss_key_t3_ParamLimits

0x2bb3,	// (0x000548b3) cell_ituss_key_t3

0x2be4,	// (0x000548e4) cell_ituss_key_t4_ParamLimits

0x2be4,	// (0x000548e4) cell_ituss_key_t4

0x0004,

0xfecc,	// (0x00061bcc) cell_ituss_key_t_ParamLimits

0xfecc,	// (0x00061bcc) cell_ituss_key_t

0xf1ac,	// (0x00060eac) cell_vkbss_key_3p_pane_g1

0xf1b4,	// (0x00060eb4) cell_vkbss_key_3p_pane_g2

0xf1bc,	// (0x00060ebc) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed7,	// (0x00061bd7) cell_vkbss_key_3p_pane_g

0x465d,	// (0x0005635d) bg_popup_fep_char_preview_window_cp02

0xa7c4,	// (0x0005c4c4) popup_fep_char_pre_window_t1

0xefae,	// (0x00060cae) main_ai5_sk_pane

0xa22f,	// (0x0005bf2f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa23b,	// (0x0005bf3b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7b7a,	// (0x0005987a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa250,	// (0x0005bf50) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea3,	// (0x00061ba3) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa25c,	// (0x0005bf5c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x39a8,	// (0x000556a8) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf1c4,	// (0x00060ec4) main_ai5_sk_pane_g1

0x5373,	// (0x00057073) popup_query_code_window_g1

0xf0c8,	// (0x00060dc8) popup_fep_vkb_icf_pane

0xa671,	// (0x0005c371) popup_fep_vtchi_icf_pane

0xa7db,	// (0x0005c4db) bg_icf_pane

0xa7db,	// (0x0005c4db) list_vkb_icf_pane

0xa7e7,	// (0x0005c4e7) bg_icf_pane_cp01

0xa7fa,	// (0x0005c4fa) vtchi_icf_list_pane

0xf219,	// (0x00060f19) list_vkb_icf_pane_t1_ParamLimits

0xf219,	// (0x00060f19) list_vkb_icf_pane_t1

0xa87b,	// (0x0005c57b) vtchi_icf_list_pane_t1_ParamLimits

0xa87b,	// (0x0005c57b) vtchi_icf_list_pane_t1

0xa62e,	// (0x0005c32e) popup_fep_ituss_window_ParamLimits

0xa671,	// (0x0005c371) popup_fep_vtchi_icf_pane_ParamLimits

0xa69a,	// (0x0005c39a) ituss_keypad_pane_ParamLimits

0x2a44,	// (0x00054744) ituss_sks_pane

0xa7db,	// (0x0005c4db) bg_icf_pane_ParamLimits

0xf0ad,	// (0x00060dad) icf_edit_indi_pane_ParamLimits

0xf0ad,	// (0x00060dad) icf_edit_indi_pane

0xa7db,	// (0x0005c4db) list_vkb_icf_pane_ParamLimits

0xa7e7,	// (0x0005c4e7) bg_icf_pane_cp01_ParamLimits

0xa619,	// (0x0005c319) icf_edit_indi_pane_cp01_ParamLimits

0xa619,	// (0x0005c319) icf_edit_indi_pane_cp01

0xa7fa,	// (0x0005c4fa) vtchi_query_pane

0x9981,	// (0x0005b681) icf_edit_indi_pane_g1_ParamLimits

0x9981,	// (0x0005b681) icf_edit_indi_pane_g1

0xf230,	// (0x00060f30) icf_edit_indi_pane_g2_ParamLimits

0xf230,	// (0x00060f30) icf_edit_indi_pane_g2

0x0001,

0xff02,	// (0x00061c02) icf_edit_indi_pane_g_ParamLimits

0xff02,	// (0x00061c02) icf_edit_indi_pane_g

0xf244,	// (0x00060f44) icf_edit_indi_pane_t1

0xa899,	// (0x0005c599) bg_input_focus_pane_cp042

0x34f2,	// (0x000551f2) vtchi_button_pane

0xa8a2,	// (0x0005c5a2) vtchi_query_pane_t1

0xa8b0,	// (0x0005c5b0) vtchi_query_pane_t2

0xa8be,	// (0x0005c5be) vtchi_query_pane_t3

0x0002,

0xfef1,	// (0x00061bf1) vtchi_query_pane_t

0xf311,	// (0x00061011) bg_button_pane_cp13

0xa8cc,	// (0x0005c5cc) vtchi_button_pane_g1

0x2c27,	// (0x00054927) ituss_sks_pane_g1

0x2c32,	// (0x00054932) ituss_sks_pane_g2

0x0001,

0xfef8,	// (0x00061bf8) ituss_sks_pane_g

0xa8d4,	// (0x0005c5d4) ituss_sks_pane_t1

0xa8e2,	// (0x0005c5e2) ituss_sks_pane_t2

0x0001,

0xfefd,	// (0x00061bfd) ituss_sks_pane_t

0x6f5e,	// (0x00058c5e) indicator_nsta_pane_cp_g1

0x6f67,	// (0x00058c67) indicator_nsta_pane_cp_g2

0x6f6f,	// (0x00058c6f) indicator_nsta_pane_cp_g3

0x6f77,	// (0x00058c77) indicator_nsta_pane_cp_g4

0x6f67,	// (0x00058c67) indicator_nsta_pane_cp_g5

0x6f6f,	// (0x00058c6f) indicator_nsta_pane_cp_g6

0x0005,

0xfa75,	// (0x00061775) indicator_nsta_pane_cp_g

0xedc5,	// (0x00060ac5) cell_graphic2_pane_t2_ParamLimits

0xedc5,	// (0x00060ac5) cell_graphic2_pane_t2

0x0001,

0xfd8e,	// (0x00061a8e) cell_graphic2_pane_t_ParamLimits

0xfd8e,	// (0x00061a8e) cell_graphic2_pane_t

0xedfa,	// (0x00060afa) cell_graphic2_control_pane_t1

0xd0d6,	// (0x0005edd6) signal_pane_g3_ParamLimits

0xd0d6,	// (0x0005edd6) signal_pane_g3

0xd0ea,	// (0x0005edea) signal_pane_g4_ParamLimits

0xd0ea,	// (0x0005edea) signal_pane_g4

0xa5e8,	// (0x0005c2e8) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa5e8,	// (0x0005c2e8) cell_ai5_widget_list_row_pane_t3

0xa79a,	// (0x0005c49a) cell_ituss_key_pane_t1_ParamLimits

0xa79a,	// (0x0005c49a) cell_ituss_key_pane_t1

0x4fb0,	// (0x00056cb0) form_field_data_wide_pane_vc_t2_ParamLimits

0x4fb0,	// (0x00056cb0) form_field_data_wide_pane_vc_t2

0x4fc4,	// (0x00056cc4) form_field_data_wide_pane_vc_t3_ParamLimits

0x4fc4,	// (0x00056cc4) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x000614e4) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x000614e4) form_field_data_wide_pane_vc_t

0x6c08,	// (0x00058908) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6c08,	// (0x00058908) form_field_slider_wide_pane_vc_t3

0x6ce6,	// (0x000589e6) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6ce6,	// (0x000589e6) form_field_popup_wide_pane_vc_t2

0x6cfd,	// (0x000589fd) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6cfd,	// (0x000589fd) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa64,	// (0x00061764) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa64,	// (0x00061764) form_field_popup_wide_pane_vc_t

0xce5c,	// (0x0005eb5c) aid_fshwr2_btn_pane_ParamLimits

0xce6c,	// (0x0005eb6c) aid_fshwr2_syb_pane_ParamLimits

0xce80,	// (0x0005eb80) aid_fshwr2_txt_pane_ParamLimits

0x202d,	// (0x00053d2d) fshwr2_bg_pane_ParamLimits

0xce90,	// (0x0005eb90) fshwr2_func_candi_pane_ParamLimits

0xceb0,	// (0x0005ebb0) fshwr2_hwr_syb_pane_ParamLimits

0xced2,	// (0x0005ebd2) fshwr2_icf_pane_ParamLimits

0x3779,	// (0x00055479) list_double_graphic_pane_vc_g4_ParamLimits

0x3779,	// (0x00055479) list_double_graphic_pane_vc_g4

0x2ae3,	// (0x000547e3) cell_ituss_key_pane_g3_ParamLimits

0x2ae3,	// (0x000547e3) cell_ituss_key_pane_g3

0x2c15,	// (0x00054915) cell_ituss_key_t5_ParamLimits

0x2c15,	// (0x00054915) cell_ituss_key_t5

0xf0d7,	// (0x00060dd7) popup_fep_vkbss_window_ParamLimits

0x9b0f,	// (0x0005b80f) aid_cell_ai5_quarter

0xf244,	// (0x00060f44) icf_edit_indi_pane_t1_ParamLimits

0x3067,	// (0x00054d67) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x3067,	// (0x00054d67) aid_tch_indicator_popup_pane_cp2

0x307a,	// (0x00054d7a) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x307a,	// (0x00054d7a) aid_tch_query_popup_data_pane_cp2

0x531b,	// (0x0005701b) aid_tch_query_popup_pane_ParamLimits

0x531b,	// (0x0005701b) aid_tch_query_popup_pane

0x531b,	// (0x0005701b) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x531b,	// (0x0005701b) aid_tch_query_popup_data_pane_cp1

0x4981,	// (0x00056681) cell_fshwr2_syb_bg_pane_ParamLimits

0xcfde,	// (0x0005ecde) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xcff1,	// (0x0005ecf1) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf0c8,	// (0x00060dc8) popup_fep_vkb_icf_pane_ParamLimits

0xcde8,	// (0x0005eae8) bg_popup_fep_char_preview_window_g10

0x9c4c,	// (0x0005b94c) cell_ai5_widget_pane_g11_ParamLimits

0x9c4c,	// (0x0005b94c) cell_ai5_widget_pane_g11

0x9c58,	// (0x0005b958) cell_ai5_widget_pane_g12_ParamLimits

0x9c58,	// (0x0005b958) cell_ai5_widget_pane_g12

0x9c64,	// (0x0005b964) cell_ai5_widget_pane_g13_ParamLimits

0x9c64,	// (0x0005b964) cell_ai5_widget_pane_g13

0x9d93,	// (0x0005ba93) cell_ai5_widget_pane_t11_ParamLimits

0x9d93,	// (0x0005ba93) cell_ai5_widget_pane_t11

0x9da5,	// (0x0005baa5) cell_ai5_widget_pane_t12_ParamLimits

0x9da5,	// (0x0005baa5) cell_ai5_widget_pane_t12

0x2aef,	// (0x000547ef) cell_ituss_key_pane_g4_ParamLimits

0x2aef,	// (0x000547ef) cell_ituss_key_pane_g4

0x2b0b,	// (0x0005480b) cell_ituss_key_pane_g5_ParamLimits

0x2b0b,	// (0x0005480b) cell_ituss_key_pane_g5

0x2b27,	// (0x00054827) cell_ituss_key_pane_g6_ParamLimits

0x2b27,	// (0x00054827) cell_ituss_key_pane_g6

0x4eab,	// (0x00056bab) bg_icf_pane_g1

0xf1cd,	// (0x00060ecd) bg_icf_pane_g2

0xf1d7,	// (0x00060ed7) bg_icf_pane_g3

0xf1df,	// (0x00060edf) bg_icf_pane_g4

0xf1e9,	// (0x00060ee9) bg_icf_pane_g5

0xf1f3,	// (0x00060ef3) bg_icf_pane_g6

0xf1fd,	// (0x00060efd) bg_icf_pane_g7

0xf205,	// (0x00060f05) bg_icf_pane_g8

0xf20f,	// (0x00060f0f) bg_icf_pane_g9

0x0008,

0xfede,	// (0x00061bde) bg_icf_pane_g

0xa687,	// (0x0005c387) popup_hyb_candi_window_ParamLimits

0xa687,	// (0x0005c387) popup_hyb_candi_window

0x4f1f,	// (0x00056c1f) bg_popup_sub_pane_cp01_ParamLimits

0x4f1f,	// (0x00056c1f) bg_popup_sub_pane_cp01

0xa91d,	// (0x0005c61d) entry_hyb_candi_pane_ParamLimits

0xa91d,	// (0x0005c61d) entry_hyb_candi_pane

0xa92c,	// (0x0005c62c) grid_hyb_candi_pane_ParamLimits

0xa92c,	// (0x0005c62c) grid_hyb_candi_pane

0xa941,	// (0x0005c641) grid_hyb_phrase_pane_ParamLimits

0xa941,	// (0x0005c641) grid_hyb_phrase_pane

0xa950,	// (0x0005c650) cell_hyb_candi_pane_ParamLimits

0xa950,	// (0x0005c650) cell_hyb_candi_pane

0xa973,	// (0x0005c673) cell_hyb_candi_scroll_pane

0x4031,	// (0x00055d31) cell_hyb_candi_pane_g1

0xa97c,	// (0x0005c67c) cell_hyb_candi_pane_t1

0xa98a,	// (0x0005c68a) cell_hyb_phrase_pane

0x4031,	// (0x00055d31) cell_hyb_phrase_pane_g1

0xa993,	// (0x0005c693) cell_hyb_phrase_pane_t1

0xa9a1,	// (0x0005c6a1) entry_hyb_candi_pane_t1

0x465d,	// (0x0005635d) input_focus_pane_cp06

0xa9af,	// (0x0005c6af) cell_hyb_candi_scroll_pane_g1

0xa9b7,	// (0x0005c6b7) cell_hyb_candi_scroll_pane_g1_aid

0xa9bf,	// (0x0005c6bf) cell_hyb_candi_scroll_pane_g2

0xa9c7,	// (0x0005c6c7) cell_hyb_candi_scroll_pane_g2_aid

0xa9cf,	// (0x0005c6cf) cell_hyb_candi_scroll_pane_g3

0xa9d7,	// (0x0005c6d7) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large

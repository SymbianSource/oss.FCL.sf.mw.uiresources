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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004a6a2 };

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
0x6fad,	// (0x0005164f) Screen

0x6fc1,	// (0x00051663) application_window_ParamLimits

0x6fc1,	// (0x00051663) application_window

0x6fdb,	// (0x0005167d) screen_g1

0x4b76,	// (0x0004f218) area_bottom_pane_ParamLimits

0x4b76,	// (0x0004f218) area_bottom_pane

0x4c36,	// (0x0004f2d8) area_top_pane_ParamLimits

0x4c36,	// (0x0004f2d8) area_top_pane

0x4cd4,	// (0x0004f376) main_pane_ParamLimits

0x4cd4,	// (0x0004f376) main_pane

0x6fe5,	// (0x00051687) misc_graphics

0x9620,	// (0x00053cc2) battery_pane_ParamLimits

0x9620,	// (0x00053cc2) battery_pane

0xa370,	// (0x00054a12) bg_status_flat_pane_g8

0xa378,	// (0x00054a1a) bg_status_flat_pane_g9

0x96e2,	// (0x00053d84) context_pane_ParamLimits

0x96e2,	// (0x00053d84) context_pane

0x981a,	// (0x00053ebc) navi_pane_ParamLimits

0x981a,	// (0x00053ebc) navi_pane

0x9897,	// (0x00053f39) signal_pane_ParamLimits

0x9897,	// (0x00053f39) signal_pane

0x0008,

0xf88f,	// (0x00059f31) bg_status_flat_pane_g

0x9904,	// (0x00053fa6) status_pane_g1_ParamLimits

0x9904,	// (0x00053fa6) status_pane_g1

0x9918,	// (0x00053fba) status_pane_g2_ParamLimits

0x9918,	// (0x00053fba) status_pane_g2

0x9924,	// (0x00053fc6) status_pane_g3_ParamLimits

0x9924,	// (0x00053fc6) status_pane_g3

0x0004,

0xf7bd,	// (0x00059e5f) status_pane_g_ParamLimits

0xf7bd,	// (0x00059e5f) status_pane_g

0x9958,	// (0x00053ffa) title_pane_ParamLimits

0x9958,	// (0x00053ffa) title_pane

0x9995,	// (0x00054037) uni_indicator_pane_ParamLimits

0x9995,	// (0x00054037) uni_indicator_pane

0x8fb1,	// (0x00053653) bg_list_pane_ParamLimits

0x8fb1,	// (0x00053653) bg_list_pane

0x72f4,	// (0x00051996) find_pane

0x8fd1,	// (0x00053673) listscroll_app_pane_ParamLimits

0x8fd1,	// (0x00053673) listscroll_app_pane

0x8fdd,	// (0x0005367f) listscroll_form_pane

0x72fc,	// (0x0005199e) listscroll_gen_pane_ParamLimits

0x72fc,	// (0x0005199e) listscroll_gen_pane

0x8fdd,	// (0x0005367f) listscroll_set_pane

0x8244,	// (0x000528e6) main_idle_act_pane

0x8c99,	// (0x0005333b) main_idle_trad_pane

0x8c99,	// (0x0005333b) main_list_empty_pane

0x8ff7,	// (0x00053699) main_midp_pane

0x9003,	// (0x000536a5) main_pane_g1_ParamLimits

0x9003,	// (0x000536a5) main_pane_g1

0x9011,	// (0x000536b3) popup_ai_message_window_ParamLimits

0x9011,	// (0x000536b3) popup_ai_message_window

0x90b3,	// (0x00053755) popup_fep_china_uni_window_ParamLimits

0x90b3,	// (0x00053755) popup_fep_china_uni_window

0x910f,	// (0x000537b1) popup_fep_japan_candidate_window_ParamLimits

0x910f,	// (0x000537b1) popup_fep_japan_candidate_window

0x912f,	// (0x000537d1) popup_fep_japan_predictive_window_ParamLimits

0x912f,	// (0x000537d1) popup_fep_japan_predictive_window

0x915f,	// (0x00053801) popup_find_window

0x916c,	// (0x0005380e) popup_grid_graphic_window_ParamLimits

0x916c,	// (0x0005380e) popup_grid_graphic_window

0x9194,	// (0x00053836) popup_large_graphic_colour_window

0x91ba,	// (0x0005385c) popup_menu_window_ParamLimits

0x91ba,	// (0x0005385c) popup_menu_window

0x9372,	// (0x00053a14) popup_note_image_window

0x935e,	// (0x00053a00) popup_note_wait_window_ParamLimits

0x935e,	// (0x00053a00) popup_note_wait_window

0x935e,	// (0x00053a00) popup_note_window_ParamLimits

0x935e,	// (0x00053a00) popup_note_window

0x93c8,	// (0x00053a6a) popup_query_code_window_ParamLimits

0x93c8,	// (0x00053a6a) popup_query_code_window

0x93dc,	// (0x00053a7e) popup_query_data_code_window_ParamLimits

0x93dc,	// (0x00053a7e) popup_query_data_code_window

0x93f9,	// (0x00053a9b) popup_query_data_window_ParamLimits

0x93f9,	// (0x00053a9b) popup_query_data_window

0x9415,	// (0x00053ab7) popup_query_sat_info_window_ParamLimits

0x9415,	// (0x00053ab7) popup_query_sat_info_window

0x944e,	// (0x00053af0) popup_snote_single_graphic_window_ParamLimits

0x944e,	// (0x00053af0) popup_snote_single_graphic_window

0x944e,	// (0x00053af0) popup_snote_single_text_window_ParamLimits

0x944e,	// (0x00053af0) popup_snote_single_text_window

0x9463,	// (0x00053b05) popup_sub_window_general

0x9593,	// (0x00053c35) popup_window_general_ParamLimits

0x9593,	// (0x00053c35) popup_window_general

0x95a8,	// (0x00053c4a) power_save_pane

0x5be1,	// (0x00050283) control_pane_g1_ParamLimits

0x5be1,	// (0x00050283) control_pane_g1

0x5c08,	// (0x000502aa) control_pane_g2_ParamLimits

0x5c08,	// (0x000502aa) control_pane_g2

0x8f62,	// (0x00053604) control_pane_g3_ParamLimits

0x8f62,	// (0x00053604) control_pane_g3

0x0007,

0xf7a5,	// (0x00059e47) control_pane_g_ParamLimits

0xf7a5,	// (0x00059e47) control_pane_g

0x5c4e,	// (0x000502f0) control_pane_t1_ParamLimits

0x5c4e,	// (0x000502f0) control_pane_t1

0x5c9a,	// (0x0005033c) control_pane_t2_ParamLimits

0x5c9a,	// (0x0005033c) control_pane_t2

0x0002,

0xf7b6,	// (0x00059e58) control_pane_t_ParamLimits

0xf7b6,	// (0x00059e58) control_pane_t

0x8e83,	// (0x00053525) navi_navi_volume_pane_cp1

0x8e8c,	// (0x0005352e) status_small_icon_pane

0x8e94,	// (0x00053536) status_small_pane_g1_ParamLimits

0x8e94,	// (0x00053536) status_small_pane_g1

0x8ec8,	// (0x0005356a) status_small_pane_g2_ParamLimits

0x8ec8,	// (0x0005356a) status_small_pane_g2

0x8ed4,	// (0x00053576) status_small_pane_g3_ParamLimits

0x8ed4,	// (0x00053576) status_small_pane_g3

0x8ee0,	// (0x00053582) status_small_pane_g4_ParamLimits

0x8ee0,	// (0x00053582) status_small_pane_g4

0x8eec,	// (0x0005358e) status_small_pane_g5_ParamLimits

0x8eec,	// (0x0005358e) status_small_pane_g5

0x8efb,	// (0x0005359d) status_small_pane_g6_ParamLimits

0x8efb,	// (0x0005359d) status_small_pane_g6

0x0007,

0xf794,	// (0x00059e36) status_small_pane_g_ParamLimits

0xf794,	// (0x00059e36) status_small_pane_g

0x8f2b,	// (0x000535cd) status_small_pane_t1

0x8f4e,	// (0x000535f0) status_small_wait_pane_ParamLimits

0x8f4e,	// (0x000535f0) status_small_wait_pane

0x8748,	// (0x00052dea) aid_levels_signal_ParamLimits

0x8748,	// (0x00052dea) aid_levels_signal

0x875a,	// (0x00052dfc) signal_pane_g1_ParamLimits

0x875a,	// (0x00052dfc) signal_pane_g1

0x876f,	// (0x00052e11) signal_pane_g2_ParamLimits

0x876f,	// (0x00052e11) signal_pane_g2

0x0001,

0xf729,	// (0x00059dcb) signal_pane_g_ParamLimits

0xf729,	// (0x00059dcb) signal_pane_g

0x8784,	// (0x00052e26) context_pane_g1

0x6fef,	// (0x00051691) title_pane_g1

0x7025,	// (0x000516c7) title_pane_t1

0x708d,	// (0x0005172f) title_pane_t2

0x70b3,	// (0x00051755) title_pane_t3

0x0002,

0xf573,	// (0x00059c15) title_pane_t

0x99ad,	// (0x0005404f) aid_levels_battery_ParamLimits

0x99ad,	// (0x0005404f) aid_levels_battery

0x99c1,	// (0x00054063) battery_pane_g1_ParamLimits

0x99c1,	// (0x00054063) battery_pane_g1

0x99d7,	// (0x00054079) battery_pane_g2_ParamLimits

0x99d7,	// (0x00054079) battery_pane_g2

0x0001,

0xf7c8,	// (0x00059e6a) battery_pane_g_ParamLimits

0xf7c8,	// (0x00059e6a) battery_pane_g

0xac9d,	// (0x0005533f) uni_indicator_pane_g1

0xacb2,	// (0x00055354) uni_indicator_pane_g2

0xacc8,	// (0x0005536a) uni_indicator_pane_g3

0x0005,

0xf937,	// (0x00059fd9) uni_indicator_pane_g

0x8b17,	// (0x000531b9) navi_icon_pane_ParamLimits

0x8b17,	// (0x000531b9) navi_icon_pane

0x8a60,	// (0x00053102) navi_midp_pane

0x8b33,	// (0x000531d5) navi_navi_pane

0x8b3d,	// (0x000531df) navi_text_pane_ParamLimits

0x8b3d,	// (0x000531df) navi_text_pane

0x6fdb,	// (0x0005167d) status_small_wait_pane_g1

0x7c07,	// (0x000522a9) status_small_wait_pane_g2

0x0001,

0xf932,	// (0x00059fd4) status_small_wait_pane_g

0xa9c2,	// (0x00055064) navi_navi_icon_text_pane

0xa9ca,	// (0x0005506c) navi_navi_pane_g1_ParamLimits

0xa9ca,	// (0x0005506c) navi_navi_pane_g1

0xa9dc,	// (0x0005507e) navi_navi_pane_g2_ParamLimits

0xa9dc,	// (0x0005507e) navi_navi_pane_g2

0x0001,

0xf900,	// (0x00059fa2) navi_navi_pane_g_ParamLimits

0xf900,	// (0x00059fa2) navi_navi_pane_g

0xa9ee,	// (0x00055090) navi_navi_tabs_pane

0xa9f7,	// (0x00055099) navi_navi_text_pane

0xa9c2,	// (0x00055064) navi_navi_volume_pane

0xa99b,	// (0x0005503d) navi_text_pane_t1

0xa98c,	// (0x0005502e) navi_icon_pane_g1

0xa8ee,	// (0x00054f90) navi_navi_text_pane_t1

0x6054,	// (0x000506f6) navi_navi_volume_pane_g1

0x605c,	// (0x000506fe) volume_small_pane

0xa854,	// (0x00054ef6) navi_navi_icon_text_pane_g1

0xa85c,	// (0x00054efe) navi_navi_icon_text_pane_t1

0x8b33,	// (0x000531d5) navi_tabs_2_long_pane

0x8b33,	// (0x000531d5) navi_tabs_2_pane

0x8b33,	// (0x000531d5) navi_tabs_3_long_pane

0x8b33,	// (0x000531d5) navi_tabs_3_pane

0x8b33,	// (0x000531d5) navi_tabs_4_pane

0x6034,	// (0x000506d6) tabs_2_active_pane_ParamLimits

0x6034,	// (0x000506d6) tabs_2_active_pane

0x6044,	// (0x000506e6) tabs_2_passive_pane_ParamLimits

0x6044,	// (0x000506e6) tabs_2_passive_pane

0x6002,	// (0x000506a4) tabs_3_active_pane_ParamLimits

0x6002,	// (0x000506a4) tabs_3_active_pane

0x6012,	// (0x000506b4) tabs_3_passive_pane_ParamLimits

0x6012,	// (0x000506b4) tabs_3_passive_pane

0x6023,	// (0x000506c5) tabs_3_passive_pane_cp_ParamLimits

0x6023,	// (0x000506c5) tabs_3_passive_pane_cp

0x5fbe,	// (0x00050660) tabs_4_active_pane_ParamLimits

0x5fbe,	// (0x00050660) tabs_4_active_pane

0x5fcf,	// (0x00050671) tabs_4_passive_pane_ParamLimits

0x5fcf,	// (0x00050671) tabs_4_passive_pane

0x5fe0,	// (0x00050682) tabs_4_passive_pane_cp_ParamLimits

0x5fe0,	// (0x00050682) tabs_4_passive_pane_cp

0x5ff1,	// (0x00050693) tabs_4_passive_pane_cp2_ParamLimits

0x5ff1,	// (0x00050693) tabs_4_passive_pane_cp2

0x5f9a,	// (0x0005063c) tabs_2_long_active_pane_ParamLimits

0x5f9a,	// (0x0005063c) tabs_2_long_active_pane

0x5fac,	// (0x0005064e) tabs_2_long_passive_pane_ParamLimits

0x5fac,	// (0x0005064e) tabs_2_long_passive_pane

0x5f5b,	// (0x000505fd) tabs_3_long_active_pane_ParamLimits

0x5f5b,	// (0x000505fd) tabs_3_long_active_pane

0x5f6e,	// (0x00050610) tabs_3_long_passive_pane_ParamLimits

0x5f6e,	// (0x00050610) tabs_3_long_passive_pane

0x5f87,	// (0x00050629) tabs_3_long_passive_pane_cp_ParamLimits

0x5f87,	// (0x00050629) tabs_3_long_passive_pane_cp

0x5f01,	// (0x000505a3) volume_small_pane_g1

0x5f0a,	// (0x000505ac) volume_small_pane_g2

0x5f13,	// (0x000505b5) volume_small_pane_g3

0x5f1c,	// (0x000505be) volume_small_pane_g4

0x5f25,	// (0x000505c7) volume_small_pane_g5

0x5f2e,	// (0x000505d0) volume_small_pane_g6

0x5f37,	// (0x000505d9) volume_small_pane_g7

0x5f40,	// (0x000505e2) volume_small_pane_g8

0x5f49,	// (0x000505eb) volume_small_pane_g9

0x5f52,	// (0x000505f4) volume_small_pane_g10

0x0009,

0xf8cc,	// (0x00059f6e) volume_small_pane_g

0x70c5,	// (0x00051767) bg_active_tab_pane_cp2_ParamLimits

0x70c5,	// (0x00051767) bg_active_tab_pane_cp2

0x70d3,	// (0x00051775) tabs_3_active_pane_g1

0x70db,	// (0x0005177d) tabs_3_active_pane_t1

0x70c5,	// (0x00051767) bg_passive_tab_pane_cp2_ParamLimits

0x70c5,	// (0x00051767) bg_passive_tab_pane_cp2

0x70d3,	// (0x00051775) tabs_3_passive_pane_g1

0x70db,	// (0x0005177d) tabs_3_passive_pane_t1

0x70c5,	// (0x00051767) bg_active_tab_pane_cp3_ParamLimits

0x70c5,	// (0x00051767) bg_active_tab_pane_cp3

0x70ed,	// (0x0005178f) tabs_4_active_pane_g1

0x70f5,	// (0x00051797) tabs_4_active_pane_t1

0x70c5,	// (0x00051767) bg_passive_tab_pane_cp3_ParamLimits

0x70c5,	// (0x00051767) bg_passive_tab_pane_cp3

0x70ed,	// (0x0005178f) tabs_4_1_passive_pane_g1

0x70f5,	// (0x00051797) tabs_4_1_passive_pane_t1

0x8ff7,	// (0x00053699) list_highlight_pane_cp2

0xaf26,	// (0x000555c8) list_set_pane_ParamLimits

0xaf26,	// (0x000555c8) list_set_pane

0xafcc,	// (0x0005566e) main_pane_set_t1_ParamLimits

0xafcc,	// (0x0005566e) main_pane_set_t1

0xafec,	// (0x0005568e) main_pane_set_t2_ParamLimits

0xafec,	// (0x0005568e) main_pane_set_t2

0xb000,	// (0x000556a2) main_pane_set_t3_ParamLimits

0xb000,	// (0x000556a2) main_pane_set_t3

0xb012,	// (0x000556b4) main_pane_set_t4_ParamLimits

0xb012,	// (0x000556b4) main_pane_set_t4

0x0003,

0xf99c,	// (0x0005a03e) main_pane_set_t_ParamLimits

0xf99c,	// (0x0005a03e) main_pane_set_t

0xb024,	// (0x000556c6) setting_code_pane

0xb030,	// (0x000556d2) setting_slider_graphic_pane

0xb030,	// (0x000556d2) setting_slider_pane

0xb030,	// (0x000556d2) setting_text_pane

0xb030,	// (0x000556d2) setting_volume_pane

0x4f19,	// (0x0004f5bb) volume_set_pane

0x70c5,	// (0x00051767) bg_set_opt_pane_cp

0x4f21,	// (0x0004f5c3) setting_slider_pane_t1

0x4f3a,	// (0x0004f5dc) setting_slider_pane_t2

0x4f54,	// (0x0004f5f6) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x00059c1c) setting_slider_pane_t

0x4f6c,	// (0x0004f60e) slider_set_pane

0x6fe5,	// (0x00051687) bg_set_opt_pane_cp2

0x7107,	// (0x000517a9) setting_slider_graphic_pane_g1

0x4f82,	// (0x0004f624) setting_slider_graphic_pane_t1

0x4f92,	// (0x0004f634) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x00059c23) setting_slider_graphic_pane_t

0x4fa2,	// (0x0004f644) slider_set_pane_cp

0x6fe5,	// (0x00051687) input_focus_pane_cp1

0xaee5,	// (0x00055587) list_set_text_pane

0x6fdb,	// (0x0005167d) setting_text_pane_g1

0x6fe5,	// (0x00051687) input_focus_pane_cp2

0x6fdb,	// (0x0005167d) setting_code_pane_g1

0x7110,	// (0x000517b2) setting_code_pane_t1

0x4faa,	// (0x0004f64c) set_text_pane_t1_ParamLimits

0x4faa,	// (0x0004f64c) set_text_pane_t1

0x80bd,	// (0x0005275f) set_opt_bg_pane_g1

0x80c5,	// (0x00052767) set_opt_bg_pane_g2

0xaebf,	// (0x00055561) set_opt_bg_pane_g3

0x80d5,	// (0x00052777) set_opt_bg_pane_g4

0x80dd,	// (0x0005277f) set_opt_bg_pane_g5

0x80e5,	// (0x00052787) set_opt_bg_pane_g6

0xaec9,	// (0x0005556b) set_opt_bg_pane_g7

0xaed1,	// (0x00055573) set_opt_bg_pane_g8

0xaedb,	// (0x0005557d) set_opt_bg_pane_g9

0x0008,

0xf989,	// (0x0005a02b) set_opt_bg_pane_g

0xaeb2,	// (0x00055554) slider_set_pane_g1

0x60f1,	// (0x00050793) slider_set_pane_g2

0x0006,

0xf97a,	// (0x0005a01c) slider_set_pane_g

0x6065,	// (0x00050707) volume_set_pane_g1

0x606d,	// (0x0005070f) volume_set_pane_g2

0x6075,	// (0x00050717) volume_set_pane_g3

0x607d,	// (0x0005071f) volume_set_pane_g4

0x6085,	// (0x00050727) volume_set_pane_g5

0x608d,	// (0x0005072f) volume_set_pane_g6

0x6095,	// (0x00050737) volume_set_pane_g7

0x609d,	// (0x0005073f) volume_set_pane_g8

0x60a5,	// (0x00050747) volume_set_pane_g9

0x60ad,	// (0x0005074f) volume_set_pane_g10

0x0009,

0xf952,	// (0x00059ff4) volume_set_pane_g

0x711e,	// (0x000517c0) indicator_pane_ParamLimits

0x711e,	// (0x000517c0) indicator_pane

0x712a,	// (0x000517cc) main_idle_pane_g2_ParamLimits

0x712a,	// (0x000517cc) main_idle_pane_g2

0x7152,	// (0x000517f4) main_pane_idle_g1_ParamLimits

0x7152,	// (0x000517f4) main_pane_idle_g1

0x715f,	// (0x00051801) popup_clock_digital_analogue_window_ParamLimits

0x715f,	// (0x00051801) popup_clock_digital_analogue_window

0x7176,	// (0x00051818) soft_indicator_pane_ParamLimits

0x7176,	// (0x00051818) soft_indicator_pane

0x7182,	// (0x00051824) wallpaper_pane_ParamLimits

0x7182,	// (0x00051824) wallpaper_pane

0x6fdb,	// (0x0005167d) wallpaper_pane_g1

0x7196,	// (0x00051838) indicator_pane_g1_ParamLimits

0x7196,	// (0x00051838) indicator_pane_g1

0xb299,	// (0x0005593b) navi_navi_icon_text_pane_srt_g1

0x71b1,	// (0x00051853) soft_indicator_pane_t1

0x71cb,	// (0x0005186d) aid_ps_area_pane

0x71dc,	// (0x0005187e) aid_ps_clock_pane

0x71ea,	// (0x0005188c) aid_ps_indicator_pane

0x71f6,	// (0x00051898) indicator_ps_pane_ParamLimits

0x71f6,	// (0x00051898) indicator_ps_pane

0x7205,	// (0x000518a7) power_save_pane_g1_ParamLimits

0x7205,	// (0x000518a7) power_save_pane_g1

0x7211,	// (0x000518b3) power_save_pane_g2_ParamLimits

0x7211,	// (0x000518b3) power_save_pane_g2

0x4b2a,	// (0x0004f1cc) aid_navinavi_width_pane

0x71cb,	// (0x0005186d) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x00059c28) power_save_pane_g_ParamLimits

0xf586,	// (0x00059c28) power_save_pane_g

0x721f,	// (0x000518c1) power_save_pane_t1_ParamLimits

0x721f,	// (0x000518c1) power_save_pane_t1

0x71dc,	// (0x0005187e) aid_ps_clock_pane_ParamLimits

0x71ea,	// (0x0005188c) aid_ps_indicator_pane_ParamLimits

0x7231,	// (0x000518d3) power_save_pane_t4_ParamLimits

0x7231,	// (0x000518d3) power_save_pane_t4

0x0001,

0xf58b,	// (0x00059c2d) power_save_pane_t_ParamLimits

0xf58b,	// (0x00059c2d) power_save_pane_t

0x725b,	// (0x000518fd) power_save_t3_ParamLimits

0x725b,	// (0x000518fd) power_save_t3

0x7246,	// (0x000518e8) power_save_t2_ParamLimits

0x7246,	// (0x000518e8) power_save_t2

0x7995,	// (0x00052037) indicator_ps_pane_g1

0x799e,	// (0x00052040) ai_gene_pane_ParamLimits

0x799e,	// (0x00052040) ai_gene_pane

0x79aa,	// (0x0005204c) ai_links_pane_ParamLimits

0x79aa,	// (0x0005204c) ai_links_pane

0x79b6,	// (0x00052058) indicator_pane_cp1_ParamLimits

0x79b6,	// (0x00052058) indicator_pane_cp1

0x79c2,	// (0x00052064) main_pane_idle_g1_cp_ParamLimits

0x79c2,	// (0x00052064) main_pane_idle_g1_cp

0x79ce,	// (0x00052070) popup_ai_links_title_window

0x79d7,	// (0x00052079) soft_indicator_pane_cp1_ParamLimits

0x79d7,	// (0x00052079) soft_indicator_pane_cp1

0xac8b,	// (0x0005532d) ai_links_pane_g1

0xac94,	// (0x00055336) grid_ai_links_pane

0xac6e,	// (0x00055310) ai_gene_pane_1

0xac79,	// (0x0005531b) ai_gene_pane_2

0xac82,	// (0x00055324) list_highlight_pane_cp4

0xac52,	// (0x000552f4) cell_ai_link_pane_ParamLimits

0xac52,	// (0x000552f4) cell_ai_link_pane

0xac4a,	// (0x000552ec) cell_ai_link_pane_g1

0x7c07,	// (0x000522a9) cell_ai_link_pane_g2

0x0001,

0xf92d,	// (0x00059fcf) cell_ai_link_pane_g

0x6fe5,	// (0x00051687) grid_highlight_cp2

0x6fe5,	// (0x00051687) bg_popup_sub_pane_cp1

0x79f1,	// (0x00052093) popup_ai_links_title_window_t1

0xab98,	// (0x0005523a) ai_gene_pane_1_g1_ParamLimits

0xab98,	// (0x0005523a) ai_gene_pane_1_g1

0xaba4,	// (0x00055246) ai_gene_pane_1_g2_ParamLimits

0xaba4,	// (0x00055246) ai_gene_pane_1_g2

0x0001,

0xf923,	// (0x00059fc5) ai_gene_pane_1_g_ParamLimits

0xf923,	// (0x00059fc5) ai_gene_pane_1_g

0xabb1,	// (0x00055253) ai_gene_pane_1_t1_ParamLimits

0xabb1,	// (0x00055253) ai_gene_pane_1_t1

0xabe5,	// (0x00055287) grid_ai_soft_ind_pane

0xab83,	// (0x00055225) ai_gene_pane_2_t1_ParamLimits

0xab83,	// (0x00055225) ai_gene_pane_2_t1

0x7a00,	// (0x000520a2) main_pane_empty_t1_ParamLimits

0x7a00,	// (0x000520a2) main_pane_empty_t1

0x7a18,	// (0x000520ba) main_pane_empty_t2_ParamLimits

0x7a18,	// (0x000520ba) main_pane_empty_t2

0x7a2d,	// (0x000520cf) main_pane_empty_t3_ParamLimits

0x7a2d,	// (0x000520cf) main_pane_empty_t3

0x7a3f,	// (0x000520e1) main_pane_empty_t4_ParamLimits

0x7a3f,	// (0x000520e1) main_pane_empty_t4

0x7a51,	// (0x000520f3) main_pane_empty_t5_ParamLimits

0x7a51,	// (0x000520f3) main_pane_empty_t5

0x0004,

0xf590,	// (0x00059c32) main_pane_empty_t_ParamLimits

0xf590,	// (0x00059c32) main_pane_empty_t

0x810e,	// (0x000527b0) bg_popup_window_pane_ParamLimits

0x810e,	// (0x000527b0) bg_popup_window_pane

0xa8fc,	// (0x00054f9e) find_popup_pane_cp2_ParamLimits

0xa8fc,	// (0x00054f9e) find_popup_pane_cp2

0xa908,	// (0x00054faa) heading_pane_ParamLimits

0xa908,	// (0x00054faa) heading_pane

0x6fe5,	// (0x00051687) bg_popup_sub_pane

0xa876,	// (0x00054f18) bg_popup_window_pane_g1_ParamLimits

0xa876,	// (0x00054f18) bg_popup_window_pane_g1

0xa882,	// (0x00054f24) bg_popup_window_pane_g2_ParamLimits

0xa882,	// (0x00054f24) bg_popup_window_pane_g2

0xa88e,	// (0x00054f30) bg_popup_window_pane_g3_ParamLimits

0xa88e,	// (0x00054f30) bg_popup_window_pane_g3

0xa89a,	// (0x00054f3c) bg_popup_window_pane_g4_ParamLimits

0xa89a,	// (0x00054f3c) bg_popup_window_pane_g4

0xa8a6,	// (0x00054f48) bg_popup_window_pane_g5_ParamLimits

0xa8a6,	// (0x00054f48) bg_popup_window_pane_g5

0xa8b2,	// (0x00054f54) bg_popup_window_pane_g6_ParamLimits

0xa8b2,	// (0x00054f54) bg_popup_window_pane_g6

0xa8be,	// (0x00054f60) bg_popup_window_pane_g7_ParamLimits

0xa8be,	// (0x00054f60) bg_popup_window_pane_g7

0xa8ca,	// (0x00054f6c) bg_popup_window_pane_g8_ParamLimits

0xa8ca,	// (0x00054f6c) bg_popup_window_pane_g8

0xa8d6,	// (0x00054f78) bg_popup_window_pane_g9_ParamLimits

0xa8d6,	// (0x00054f78) bg_popup_window_pane_g9

0xa8e2,	// (0x00054f84) bg_popup_window_pane_g10_ParamLimits

0xa8e2,	// (0x00054f84) bg_popup_window_pane_g10

0x0009,

0xf8eb,	// (0x00059f8d) bg_popup_window_pane_g_ParamLimits

0xf8eb,	// (0x00059f8d) bg_popup_window_pane_g

0xa80b,	// (0x00054ead) bg_popup_heading_pane_ParamLimits

0xa80b,	// (0x00054ead) bg_popup_heading_pane

0x61f2,	// (0x00050894) tabs_4_passive_pane_cp_srt_ParamLimits

0x61f2,	// (0x00050894) tabs_4_passive_pane_cp_srt

0x6204,	// (0x000508a6) tabs_4_passive_pane_srt_ParamLimits

0xa81f,	// (0x00054ec1) heading_pane_g2

0x6204,	// (0x000508a6) tabs_4_passive_pane_srt

0x8ff7,	// (0x00053699) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8ff7,	// (0x00053699) bg_passive_tab_pane_cp3_srt

0xa827,	// (0x00054ec9) heading_pane_t1_ParamLimits

0xa827,	// (0x00054ec9) heading_pane_t1

0xa83e,	// (0x00054ee0) heading_pane_t2_ParamLimits

0xa83e,	// (0x00054ee0) heading_pane_t2

0x0001,

0xf8e6,	// (0x00059f88) heading_pane_t_ParamLimits

0xf8e6,	// (0x00059f88) heading_pane_t

0xa338,	// (0x000549da) bg_popup_heading_pane_g1

0xa3e7,	// (0x00054a89) bg_popup_heading_pane_g2

0xa3f1,	// (0x00054a93) bg_popup_heading_pane_g3

0xa3fb,	// (0x00054a9d) bg_popup_heading_pane_g4

0xa405,	// (0x00054aa7) bg_popup_heading_pane_g5

0xa40f,	// (0x00054ab1) bg_popup_heading_pane_g6

0xa417,	// (0x00054ab9) bg_popup_heading_pane_g7

0xa41f,	// (0x00054ac1) bg_popup_heading_pane_g8

0xa429,	// (0x00054acb) bg_popup_heading_pane_g9

0x0008,

0xf8a2,	// (0x00059f44) bg_popup_heading_pane_g

0x9abb,	// (0x0005415d) bg_popup_sub_pane_g1

0x9acb,	// (0x0005416d) bg_popup_sub_pane_g2

0x9ac3,	// (0x00054165) bg_popup_sub_pane_g3

0x9adb,	// (0x0005417d) bg_popup_sub_pane_g4

0x9ad3,	// (0x00054175) bg_popup_sub_pane_g5

0x9ae3,	// (0x00054185) bg_popup_sub_pane_g6

0x9aeb,	// (0x0005418d) bg_popup_sub_pane_g7

0x9afb,	// (0x0005419d) bg_popup_sub_pane_g8

0x9af3,	// (0x00054195) bg_popup_sub_pane_g9

0x0008,

0xf87c,	// (0x00059f1e) bg_popup_sub_pane_g

0x7a65,	// (0x00052107) bg_popup_window_pane_cp5_ParamLimits

0x7a65,	// (0x00052107) bg_popup_window_pane_cp5

0x7a81,	// (0x00052123) popup_note_window_g1_ParamLimits

0x7a81,	// (0x00052123) popup_note_window_g1

0x7a8d,	// (0x0005212f) popup_note_window_t1_ParamLimits

0x7a8d,	// (0x0005212f) popup_note_window_t1

0x7aa3,	// (0x00052145) popup_note_window_t2_ParamLimits

0x7aa3,	// (0x00052145) popup_note_window_t2

0x7ab9,	// (0x0005215b) popup_note_window_t3_ParamLimits

0x7ab9,	// (0x0005215b) popup_note_window_t3

0x7acf,	// (0x00052171) popup_note_window_t4_ParamLimits

0x7acf,	// (0x00052171) popup_note_window_t4

0x7af7,	// (0x00052199) popup_note_window_t5_ParamLimits

0x7af7,	// (0x00052199) popup_note_window_t5

0x0004,

0xf59b,	// (0x00059c3d) popup_note_window_t_ParamLimits

0xf59b,	// (0x00059c3d) popup_note_window_t

0x7b1b,	// (0x000521bd) bg_popup_window_pane_cp6_ParamLimits

0x7b1b,	// (0x000521bd) bg_popup_window_pane_cp6

0xa2b4,	// (0x00054956) popup_note_image_window_g1_ParamLimits

0xa2b4,	// (0x00054956) popup_note_image_window_g1

0xa2c0,	// (0x00054962) popup_note_image_window_g2_ParamLimits

0xa2c0,	// (0x00054962) popup_note_image_window_g2

0x0001,

0xf870,	// (0x00059f12) popup_note_image_window_g_ParamLimits

0xf870,	// (0x00059f12) popup_note_image_window_g

0xa2d9,	// (0x0005497b) popup_note_image_window_t1_ParamLimits

0xa2d9,	// (0x0005497b) popup_note_image_window_t1

0xa2f2,	// (0x00054994) popup_note_image_window_t2_ParamLimits

0xa2f2,	// (0x00054994) popup_note_image_window_t2

0xa30b,	// (0x000549ad) popup_note_image_window_t3_ParamLimits

0xa30b,	// (0x000549ad) popup_note_image_window_t3

0x0002,

0xf875,	// (0x00059f17) popup_note_image_window_t_ParamLimits

0xf875,	// (0x00059f17) popup_note_image_window_t

0xa175,	// (0x00054817) bg_popup_window_pane_cp7_ParamLimits

0xa175,	// (0x00054817) bg_popup_window_pane_cp7

0xa1a5,	// (0x00054847) popup_note_wait_window_g1_ParamLimits

0xa1a5,	// (0x00054847) popup_note_wait_window_g1

0xa1b1,	// (0x00054853) popup_note_wait_window_g2_ParamLimits

0xa1b1,	// (0x00054853) popup_note_wait_window_g2

0x0002,

0xf85e,	// (0x00059f00) popup_note_wait_window_g_ParamLimits

0xf85e,	// (0x00059f00) popup_note_wait_window_g

0xa1c9,	// (0x0005486b) popup_note_wait_window_t1_ParamLimits

0xa1c9,	// (0x0005486b) popup_note_wait_window_t1

0xa1f0,	// (0x00054892) popup_note_wait_window_t2_ParamLimits

0xa1f0,	// (0x00054892) popup_note_wait_window_t2

0xa20d,	// (0x000548af) popup_note_wait_window_t3_ParamLimits

0xa20d,	// (0x000548af) popup_note_wait_window_t3

0xa220,	// (0x000548c2) popup_note_wait_window_t4_ParamLimits

0xa220,	// (0x000548c2) popup_note_wait_window_t4

0x0004,

0xf865,	// (0x00059f07) popup_note_wait_window_t_ParamLimits

0xf865,	// (0x00059f07) popup_note_wait_window_t

0xa245,	// (0x000548e7) wait_bar_pane_ParamLimits

0xa245,	// (0x000548e7) wait_bar_pane

0x6fe5,	// (0x00051687) wait_anim_pane

0x6fe5,	// (0x00051687) wait_border_pane

0x6fdb,	// (0x0005167d) wait_anim_pane_g1

0x6fdb,	// (0x0005167d) wait_anim_pane_g2

0x0001,

0xf724,	// (0x00059dc6) wait_anim_pane_g

0xa10a,	// (0x000547ac) wait_border_pane_g1

0xa115,	// (0x000547b7) wait_border_pane_g2

0xa11e,	// (0x000547c0) wait_border_pane_g3

0x0002,

0xf857,	// (0x00059ef9) wait_border_pane_g

0x9f75,	// (0x00054617) bg_popup_window_pane_cp16_ParamLimits

0x9f75,	// (0x00054617) bg_popup_window_pane_cp16

0xa075,	// (0x00054717) indicator_popup_pane_cp4_ParamLimits

0xa075,	// (0x00054717) indicator_popup_pane_cp4

0xa089,	// (0x0005472b) popup_query_data_window_t1_ParamLimits

0xa089,	// (0x0005472b) popup_query_data_window_t1

0xa09b,	// (0x0005473d) popup_query_data_window_t2_ParamLimits

0xa09b,	// (0x0005473d) popup_query_data_window_t2

0xa0b4,	// (0x00054756) popup_query_data_window_t3_ParamLimits

0xa0b4,	// (0x00054756) popup_query_data_window_t3

0x0002,

0xf850,	// (0x00059ef2) popup_query_data_window_t_ParamLimits

0xf850,	// (0x00059ef2) popup_query_data_window_t

0xa0ce,	// (0x00054770) query_popup_data_pane_ParamLimits

0xa0ce,	// (0x00054770) query_popup_data_pane

0xa0e2,	// (0x00054784) query_popup_data_pane_cp1_ParamLimits

0xa0e2,	// (0x00054784) query_popup_data_pane_cp1

0x9f75,	// (0x00054617) bg_popup_window_pane_cp10_ParamLimits

0x9f75,	// (0x00054617) bg_popup_window_pane_cp10

0x9fa7,	// (0x00054649) indicator_popup_pane_ParamLimits

0x9fa7,	// (0x00054649) indicator_popup_pane

0x9fc9,	// (0x0005466b) popup_query_code_window_t1_ParamLimits

0x9fc9,	// (0x0005466b) popup_query_code_window_t1

0x9fe3,	// (0x00054685) popup_query_code_window_t2_ParamLimits

0x9fe3,	// (0x00054685) popup_query_code_window_t2

0xa02c,	// (0x000546ce) popup_query_code_window_t3_ParamLimits

0xa02c,	// (0x000546ce) popup_query_code_window_t3

0x0002,

0xf849,	// (0x00059eeb) popup_query_code_window_t_ParamLimits

0xf849,	// (0x00059eeb) popup_query_code_window_t

0xa05b,	// (0x000546fd) query_popup_pane_ParamLimits

0xa05b,	// (0x000546fd) query_popup_pane

0x7b1b,	// (0x000521bd) bg_popup_window_pane_cp15_ParamLimits

0x7b1b,	// (0x000521bd) bg_popup_window_pane_cp15

0x7b39,	// (0x000521db) indicator_popup_pane_cp1_ParamLimits

0x7b39,	// (0x000521db) indicator_popup_pane_cp1

0x7b4c,	// (0x000521ee) indicator_popup_pane_cp2_ParamLimits

0x7b4c,	// (0x000521ee) indicator_popup_pane_cp2

0x7b5f,	// (0x00052201) popup_query_data_code_window_g1_ParamLimits

0x7b5f,	// (0x00052201) popup_query_data_code_window_g1

0x7b72,	// (0x00052214) popup_query_data_code_window_t1_ParamLimits

0x7b72,	// (0x00052214) popup_query_data_code_window_t1

0x7b84,	// (0x00052226) popup_query_data_code_window_t2_ParamLimits

0x7b84,	// (0x00052226) popup_query_data_code_window_t2

0x7b96,	// (0x00052238) popup_query_data_code_window_t3_ParamLimits

0x7b96,	// (0x00052238) popup_query_data_code_window_t3

0x7bac,	// (0x0005224e) popup_query_data_code_window_t4_ParamLimits

0x7bac,	// (0x0005224e) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x00059c48) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x00059c48) popup_query_data_code_window_t

0x5dae,	// (0x00050450) list_single_midp_graphic_pane_g3

0x7bc4,	// (0x00052266) query_popup_data_pane_cp2_ParamLimits

0x7bd7,	// (0x00052279) query_popup_pane_cp2_ParamLimits

0x7bd7,	// (0x00052279) query_popup_pane_cp2

0x6fe5,	// (0x00051687) bg_popup_window_pane_cp11

0x9f6d,	// (0x0005460f) heading_pane_cp5

0x7cbf,	// (0x00052361) listscroll_popup_info_pane

0x6fe5,	// (0x00051687) input_focus_pane_cp3

0x7bea,	// (0x0005228c) query_popup_pane_t1

0x7bf8,	// (0x0005229a) list_popup_info_pane_ParamLimits

0x7bf8,	// (0x0005229a) list_popup_info_pane

0x7c07,	// (0x000522a9) listscroll_popup_info_pane_g1

0x7c0f,	// (0x000522b1) scroll_pane_cp7

0x7c19,	// (0x000522bb) popup_info_list_pane_t1_ParamLimits

0x7c19,	// (0x000522bb) popup_info_list_pane_t1

0x7c33,	// (0x000522d5) popup_info_list_pane_t2_ParamLimits

0x7c33,	// (0x000522d5) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x00059c51) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x00059c51) popup_info_list_pane_t

0x6fe5,	// (0x00051687) bg_popup_window_pane_cp12

0xb2b3,	// (0x00055955) find_popup_pane

0x70c5,	// (0x00051767) bg_popup_window_pane_cp3

0x7c4d,	// (0x000522ef) heading_pane_cp3

0x7c59,	// (0x000522fb) listscroll_popup_graphic_pane

0x6fe5,	// (0x00051687) bg_popup_window_pane_cp4

0x7cb5,	// (0x00052357) heading_pane_cp4

0x7cbf,	// (0x00052361) listscroll_popup_colour_pane

0x7cc7,	// (0x00052369) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7cc7,	// (0x00052369) cell_large_graphic_colour_none_popup_pane

0x7cdb,	// (0x0005237d) grid_large_graphic_colour_popup_pane_ParamLimits

0x7cdb,	// (0x0005237d) grid_large_graphic_colour_popup_pane

0x7d07,	// (0x000523a9) listscroll_popup_colour_pane_g1_ParamLimits

0x7d07,	// (0x000523a9) listscroll_popup_colour_pane_g1

0x7d1e,	// (0x000523c0) listscroll_popup_colour_pane_g2_ParamLimits

0x7d1e,	// (0x000523c0) listscroll_popup_colour_pane_g2

0x7d35,	// (0x000523d7) listscroll_popup_colour_pane_g3_ParamLimits

0x7d35,	// (0x000523d7) listscroll_popup_colour_pane_g3

0x7d45,	// (0x000523e7) listscroll_popup_colour_pane_g4_ParamLimits

0x7d45,	// (0x000523e7) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x00059c56) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x00059c56) listscroll_popup_colour_pane_g

0x7d59,	// (0x000523fb) scroll_pane_cp6_ParamLimits

0x7d59,	// (0x000523fb) scroll_pane_cp6

0x7d6b,	// (0x0005240d) cell_large_graphic_colour_popup_pane_ParamLimits

0x7d6b,	// (0x0005240d) cell_large_graphic_colour_popup_pane

0x7d8a,	// (0x0005242c) cell_large_graphic_colour_none_popup_pane_t1

0x6fe5,	// (0x00051687) grid_highlight_pane_cp5

0x7d99,	// (0x0005243b) cell_large_graphic_colour_popup_pane_g1

0x7da1,	// (0x00052443) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x00059c5f) cell_large_graphic_colour_popup_pane_g

0x7da9,	// (0x0005244b) cell_large_graphic_colour_popup_pane_g2_copy1

0x7db2,	// (0x00052454) grid_highlight_pane_cp4

0x7dba,	// (0x0005245c) bg_popup_window_pane_cp8_ParamLimits

0x7dba,	// (0x0005245c) bg_popup_window_pane_cp8

0x7dd5,	// (0x00052477) popup_snote_single_text_window_g1_ParamLimits

0x7dd5,	// (0x00052477) popup_snote_single_text_window_g1

0x7de7,	// (0x00052489) popup_snote_single_text_window_t1_ParamLimits

0x7de7,	// (0x00052489) popup_snote_single_text_window_t1

0x7dfa,	// (0x0005249c) popup_snote_single_text_window_t2_ParamLimits

0x7dfa,	// (0x0005249c) popup_snote_single_text_window_t2

0x7e0d,	// (0x000524af) popup_snote_single_text_window_t3_ParamLimits

0x7e0d,	// (0x000524af) popup_snote_single_text_window_t3

0x7e46,	// (0x000524e8) popup_snote_single_text_window_t4_ParamLimits

0x7e46,	// (0x000524e8) popup_snote_single_text_window_t4

0x7e7a,	// (0x0005251c) popup_snote_single_text_window_t5_ParamLimits

0x7e7a,	// (0x0005251c) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x00059c64) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x00059c64) popup_snote_single_text_window_t

0x7ea9,	// (0x0005254b) bg_popup_window_pane_cp9_ParamLimits

0x7ea9,	// (0x0005254b) bg_popup_window_pane_cp9

0x7dd5,	// (0x00052477) popup_snote_single_graphic_window_g1_ParamLimits

0x7dd5,	// (0x00052477) popup_snote_single_graphic_window_g1

0x7eb7,	// (0x00052559) popup_snote_single_graphic_window_g2_ParamLimits

0x7eb7,	// (0x00052559) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x00059c6f) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x00059c6f) popup_snote_single_graphic_window_g

0x7ec3,	// (0x00052565) popup_snote_single_graphic_window_t1_ParamLimits

0x7ec3,	// (0x00052565) popup_snote_single_graphic_window_t1

0x7ed6,	// (0x00052578) popup_snote_single_graphic_window_t2_ParamLimits

0x7ed6,	// (0x00052578) popup_snote_single_graphic_window_t2

0x7ee9,	// (0x0005258b) popup_snote_single_graphic_window_t3_ParamLimits

0x7ee9,	// (0x0005258b) popup_snote_single_graphic_window_t3

0x7f22,	// (0x000525c4) popup_snote_single_graphic_window_t4_ParamLimits

0x7f22,	// (0x000525c4) popup_snote_single_graphic_window_t4

0x7f56,	// (0x000525f8) popup_snote_single_graphic_window_t5_ParamLimits

0x7f56,	// (0x000525f8) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x00059c74) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x00059c74) popup_snote_single_graphic_window_t

0xb1f7,	// (0x00055899) grid_graphic_popup_pane_ParamLimits

0xb1f7,	// (0x00055899) grid_graphic_popup_pane

0xb21f,	// (0x000558c1) listscroll_popup_graphic_pane_g1_ParamLimits

0xb21f,	// (0x000558c1) listscroll_popup_graphic_pane_g1

0xb233,	// (0x000558d5) listscroll_popup_graphic_pane_g2_ParamLimits

0xb233,	// (0x000558d5) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c6,	// (0x0005a068) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c6,	// (0x0005a068) listscroll_popup_graphic_pane_g

0xb247,	// (0x000558e9) scroll_pane_cp5

0xb1a0,	// (0x00055842) cell_graphic_popup_pane_ParamLimits

0xb1a0,	// (0x00055842) cell_graphic_popup_pane

0xb181,	// (0x00055823) cell_graphic_popup_pane_g1

0xb189,	// (0x0005582b) cell_graphic_popup_pane_g2

0x7da9,	// (0x0005244b) cell_graphic_popup_pane_g3

0x0002,

0xf9bf,	// (0x0005a061) cell_graphic_popup_pane_g

0xb192,	// (0x00055834) cell_graphic_popup_pane_t2

0x7db2,	// (0x00052454) grid_highlight_pane_cp3

0x7f97,	// (0x00052639) list_gen_pane_ParamLimits

0x7f97,	// (0x00052639) list_gen_pane

0x7fc9,	// (0x0005266b) scroll_pane

0xb0e3,	// (0x00055785) bg_list_pane_g1_ParamLimits

0xb0e3,	// (0x00055785) bg_list_pane_g1

0xb0fe,	// (0x000557a0) bg_list_pane_g2_ParamLimits

0xb0fe,	// (0x000557a0) bg_list_pane_g2

0xb111,	// (0x000557b3) bg_list_pane_g3_ParamLimits

0xb111,	// (0x000557b3) bg_list_pane_g3

0xb123,	// (0x000557c5) bg_list_pane_g4_ParamLimits

0xb123,	// (0x000557c5) bg_list_pane_g4

0xb135,	// (0x000557d7) bg_list_pane_g5_ParamLimits

0xb135,	// (0x000557d7) bg_list_pane_g5

0x0004,

0xf9b4,	// (0x0005a056) bg_list_pane_g_ParamLimits

0xf9b4,	// (0x0005a056) bg_list_pane_g

0x619b,	// (0x0005083d) list_double2_graphic_large_graphic_pane_ParamLimits

0x619b,	// (0x0005083d) list_double2_graphic_large_graphic_pane

0x619b,	// (0x0005083d) list_double2_graphic_pane_ParamLimits

0x619b,	// (0x0005083d) list_double2_graphic_pane

0x619b,	// (0x0005083d) list_double2_large_graphic_pane_ParamLimits

0x619b,	// (0x0005083d) list_double2_large_graphic_pane

0xb0c8,	// (0x0005576a) list_double2_pane_ParamLimits

0xb0c8,	// (0x0005576a) list_double2_pane

0x619b,	// (0x0005083d) list_double_graphic_heading_pane_ParamLimits

0x619b,	// (0x0005083d) list_double_graphic_heading_pane

0x619b,	// (0x0005083d) list_double_graphic_pane_ParamLimits

0x619b,	// (0x0005083d) list_double_graphic_pane

0x619b,	// (0x0005083d) list_double_heading_pane_ParamLimits

0x619b,	// (0x0005083d) list_double_heading_pane

0x619b,	// (0x0005083d) list_double_large_graphic_pane_ParamLimits

0x619b,	// (0x0005083d) list_double_large_graphic_pane

0x619b,	// (0x0005083d) list_double_number_pane_ParamLimits

0x619b,	// (0x0005083d) list_double_number_pane

0x619b,	// (0x0005083d) list_double_pane_ParamLimits

0x619b,	// (0x0005083d) list_double_pane

0x619b,	// (0x0005083d) list_double_time_pane_ParamLimits

0x619b,	// (0x0005083d) list_double_time_pane

0x619b,	// (0x0005083d) list_setting_number_pane_ParamLimits

0x619b,	// (0x0005083d) list_setting_number_pane

0x619b,	// (0x0005083d) list_setting_pane_ParamLimits

0x619b,	// (0x0005083d) list_setting_pane

0x734b,	// (0x000519ed) list_single_2graphic_pane_ParamLimits

0x734b,	// (0x000519ed) list_single_2graphic_pane

0x734b,	// (0x000519ed) list_single_graphic_heading_pane_ParamLimits

0x734b,	// (0x000519ed) list_single_graphic_heading_pane

0x734b,	// (0x000519ed) list_single_graphic_pane_ParamLimits

0x734b,	// (0x000519ed) list_single_graphic_pane

0x734b,	// (0x000519ed) list_single_heading_pane_ParamLimits

0x734b,	// (0x000519ed) list_single_heading_pane

0x73a1,	// (0x00051a43) list_single_large_graphic_pane_ParamLimits

0x73a1,	// (0x00051a43) list_single_large_graphic_pane

0x734b,	// (0x000519ed) list_single_number_heading_pane_ParamLimits

0x734b,	// (0x000519ed) list_single_number_heading_pane

0x734b,	// (0x000519ed) list_single_number_pane_ParamLimits

0x734b,	// (0x000519ed) list_single_number_pane

0x734b,	// (0x000519ed) list_single_pane_ParamLimits

0x734b,	// (0x000519ed) list_single_pane

0x6fe5,	// (0x00051687) list_highlight_pane_cp1

0x7270,	// (0x00051912) list_single_pane_g1_ParamLimits

0x7270,	// (0x00051912) list_single_pane_g1

0x727c,	// (0x0005191e) list_single_pane_g2_ParamLimits

0x727c,	// (0x0005191e) list_single_pane_g2

0x0001,

0xf5ee,	// (0x00059c90) list_single_pane_g_ParamLimits

0xf5ee,	// (0x00059c90) list_single_pane_g

0x6185,	// (0x00050827) list_single_pane_t1_ParamLimits

0x6185,	// (0x00050827) list_single_pane_t1

0x7270,	// (0x00051912) list_single_number_pane_g1_ParamLimits

0x7270,	// (0x00051912) list_single_number_pane_g1

0x727c,	// (0x0005191e) list_single_number_pane_g2_ParamLimits

0x727c,	// (0x0005191e) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x00059c90) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x00059c90) list_single_number_pane_g

0x60b5,	// (0x00050757) list_single_number_pane_t1_ParamLimits

0x60b5,	// (0x00050757) list_single_number_pane_t1

0x60cb,	// (0x0005076d) list_single_number_pane_t2_ParamLimits

0x60cb,	// (0x0005076d) list_single_number_pane_t2

0x0001,

0xf975,	// (0x0005a017) list_single_number_pane_t_ParamLimits

0xf975,	// (0x0005a017) list_single_number_pane_t

0x4fc3,	// (0x0004f665) list_single_graphic_pane_g1_ParamLimits

0x4fc3,	// (0x0004f665) list_single_graphic_pane_g1

0x7270,	// (0x00051912) list_single_graphic_pane_g2_ParamLimits

0x7270,	// (0x00051912) list_single_graphic_pane_g2

0x727c,	// (0x0005191e) list_single_graphic_pane_g3_ParamLimits

0x727c,	// (0x0005191e) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x00059c7f) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x00059c7f) list_single_graphic_pane_g

0x4fcf,	// (0x0004f671) list_single_graphic_pane_t1_ParamLimits

0x4fcf,	// (0x0004f671) list_single_graphic_pane_t1

0x4fe5,	// (0x0004f687) list_single_heading_pane_g1_ParamLimits

0x4fe5,	// (0x0004f687) list_single_heading_pane_g1

0x727c,	// (0x0005191e) list_single_heading_pane_g2_ParamLimits

0x727c,	// (0x0005191e) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x00059c86) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x00059c86) list_single_heading_pane_g

0x4ff8,	// (0x0004f69a) list_single_heading_pane_t1_ParamLimits

0x4ff8,	// (0x0004f69a) list_single_heading_pane_t1

0x7288,	// (0x0005192a) list_single_heading_pane_t2_ParamLimits

0x7288,	// (0x0005192a) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x00059c8b) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x00059c8b) list_single_heading_pane_t

0x7270,	// (0x00051912) list_single_number_heading_pane_g1_ParamLimits

0x7270,	// (0x00051912) list_single_number_heading_pane_g1

0x727c,	// (0x0005191e) list_single_number_heading_pane_g2_ParamLimits

0x727c,	// (0x0005191e) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x00059c90) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x00059c90) list_single_number_heading_pane_g

0x500e,	// (0x0004f6b0) list_single_number_heading_pane_t1_ParamLimits

0x500e,	// (0x0004f6b0) list_single_number_heading_pane_t1

0x5024,	// (0x0004f6c6) list_single_number_heading_pane_t2_ParamLimits

0x5024,	// (0x0004f6c6) list_single_number_heading_pane_t2

0x5036,	// (0x0004f6d8) list_single_number_heading_pane_t3_ParamLimits

0x5036,	// (0x0004f6d8) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x00059c95) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x00059c95) list_single_number_heading_pane_t

0x5048,	// (0x0004f6ea) list_single_graphic_heading_pane_g1_ParamLimits

0x5048,	// (0x0004f6ea) list_single_graphic_heading_pane_g1

0x729a,	// (0x0005193c) list_single_graphic_heading_pane_g4_ParamLimits

0x729a,	// (0x0005193c) list_single_graphic_heading_pane_g4

0x727c,	// (0x0005191e) list_single_graphic_heading_pane_g5_ParamLimits

0x727c,	// (0x0005191e) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x00059c9c) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x00059c9c) list_single_graphic_heading_pane_g

0x500e,	// (0x0004f6b0) list_single_graphic_heading_pane_t1_ParamLimits

0x500e,	// (0x0004f6b0) list_single_graphic_heading_pane_t1

0x5060,	// (0x0004f702) list_single_graphic_heading_pane_t2_ParamLimits

0x5060,	// (0x0004f702) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x00059ca3) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x00059ca3) list_single_graphic_heading_pane_t

0x72ab,	// (0x0005194d) list_single_large_graphic_pane_g1_ParamLimits

0x72ab,	// (0x0005194d) list_single_large_graphic_pane_g1

0x72b7,	// (0x00051959) list_single_large_graphic_pane_g2_ParamLimits

0x72b7,	// (0x00051959) list_single_large_graphic_pane_g2

0x72c3,	// (0x00051965) list_single_large_graphic_pane_g3_ParamLimits

0x72c3,	// (0x00051965) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x00059ca8) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x00059ca8) list_single_large_graphic_pane_g

0xa115,	// (0x000547b7) wait_border_pane_g2_copy1

0x72cf,	// (0x00051971) list_single_large_graphic_pane_g4_cp2

0x5076,	// (0x0004f718) list_single_large_graphic_pane_t1_ParamLimits

0x5076,	// (0x0004f718) list_single_large_graphic_pane_t1

0x8394,	// (0x00052a36) list_double_pane_g1_ParamLimits

0x8394,	// (0x00052a36) list_double_pane_g1

0x508c,	// (0x0004f72e) list_double_pane_g2_ParamLimits

0x508c,	// (0x0004f72e) list_double_pane_g2

0x0001,

0xf60d,	// (0x00059caf) list_double_pane_g_ParamLimits

0xf60d,	// (0x00059caf) list_double_pane_g

0x5098,	// (0x0004f73a) list_double_pane_t1_ParamLimits

0x5098,	// (0x0004f73a) list_double_pane_t1

0x50ae,	// (0x0004f750) list_double_pane_t2_ParamLimits

0x50ae,	// (0x0004f750) list_double_pane_t2

0x0001,

0xf612,	// (0x00059cb4) list_double_pane_t_ParamLimits

0xf612,	// (0x00059cb4) list_double_pane_t

0x50c0,	// (0x0004f762) list_double2_pane_g1_ParamLimits

0x50c0,	// (0x0004f762) list_double2_pane_g1

0x50d1,	// (0x0004f773) list_double2_pane_g2_ParamLimits

0x50d1,	// (0x0004f773) list_double2_pane_g2

0x0001,

0xf617,	// (0x00059cb9) list_double2_pane_g_ParamLimits

0xf617,	// (0x00059cb9) list_double2_pane_g

0x50dd,	// (0x0004f77f) list_double2_pane_t1_ParamLimits

0x50dd,	// (0x0004f77f) list_double2_pane_t1

0x50f3,	// (0x0004f795) list_double2_pane_t2_ParamLimits

0x50f3,	// (0x0004f795) list_double2_pane_t2

0x0001,

0xf61c,	// (0x00059cbe) list_double2_pane_t_ParamLimits

0xf61c,	// (0x00059cbe) list_double2_pane_t

0x8394,	// (0x00052a36) list_double_number_pane_g1_ParamLimits

0x8394,	// (0x00052a36) list_double_number_pane_g1

0x508c,	// (0x0004f72e) list_double_number_pane_g2_ParamLimits

0x508c,	// (0x0004f72e) list_double_number_pane_g2

0x0001,

0xf60d,	// (0x00059caf) list_double_number_pane_g_ParamLimits

0xf60d,	// (0x00059caf) list_double_number_pane_g

0x5105,	// (0x0004f7a7) list_double_number_pane_t1_ParamLimits

0x5105,	// (0x0004f7a7) list_double_number_pane_t1

0x5117,	// (0x0004f7b9) list_double_number_pane_t2_ParamLimits

0x5117,	// (0x0004f7b9) list_double_number_pane_t2

0x512d,	// (0x0004f7cf) list_double_number_pane_t3_ParamLimits

0x512d,	// (0x0004f7cf) list_double_number_pane_t3

0x0002,

0xf621,	// (0x00059cc3) list_double_number_pane_t_ParamLimits

0xf621,	// (0x00059cc3) list_double_number_pane_t

0x513f,	// (0x0004f7e1) list_double_graphic_pane_g1_ParamLimits

0x513f,	// (0x0004f7e1) list_double_graphic_pane_g1

0xa140,	// (0x000547e2) list_double_graphic_pane_g2_ParamLimits

0xa140,	// (0x000547e2) list_double_graphic_pane_g2

0x514b,	// (0x0004f7ed) list_double_graphic_pane_g3_ParamLimits

0x514b,	// (0x0004f7ed) list_double_graphic_pane_g3

0x0003,

0xf628,	// (0x00059cca) list_double_graphic_pane_g_ParamLimits

0xf628,	// (0x00059cca) list_double_graphic_pane_g

0x5163,	// (0x0004f805) list_double_graphic_pane_t1_ParamLimits

0x5163,	// (0x0004f805) list_double_graphic_pane_t1

0x5179,	// (0x0004f81b) list_double_graphic_pane_t2_ParamLimits

0x5179,	// (0x0004f81b) list_double_graphic_pane_t2

0x0001,

0xf631,	// (0x00059cd3) list_double_graphic_pane_t_ParamLimits

0xf631,	// (0x00059cd3) list_double_graphic_pane_t

0x518b,	// (0x0004f82d) list_double2_graphic_pane_g1_ParamLimits

0x518b,	// (0x0004f82d) list_double2_graphic_pane_g1

0x5197,	// (0x0004f839) list_double2_graphic_pane_g2_ParamLimits

0x5197,	// (0x0004f839) list_double2_graphic_pane_g2

0x51a3,	// (0x0004f845) list_double2_graphic_pane_g3_ParamLimits

0x51a3,	// (0x0004f845) list_double2_graphic_pane_g3

0x0002,

0xf636,	// (0x00059cd8) list_double2_graphic_pane_g_ParamLimits

0xf636,	// (0x00059cd8) list_double2_graphic_pane_g

0x51af,	// (0x0004f851) list_double2_graphic_pane_t1_ParamLimits

0x51af,	// (0x0004f851) list_double2_graphic_pane_t1

0x51c5,	// (0x0004f867) list_double2_graphic_pane_t2_ParamLimits

0x51c5,	// (0x0004f867) list_double2_graphic_pane_t2

0x0001,

0xf63d,	// (0x00059cdf) list_double2_graphic_pane_t_ParamLimits

0xf63d,	// (0x00059cdf) list_double2_graphic_pane_t

0x51d7,	// (0x0004f879) list_double_large_graphic_pane_g1_ParamLimits

0x51d7,	// (0x0004f879) list_double_large_graphic_pane_g1

0x5200,	// (0x0004f8a2) list_double_large_graphic_pane_g2_ParamLimits

0x5200,	// (0x0004f8a2) list_double_large_graphic_pane_g2

0x508c,	// (0x0004f72e) list_double_large_graphic_pane_g3_ParamLimits

0x508c,	// (0x0004f72e) list_double_large_graphic_pane_g3

0x5216,	// (0x0004f8b8) list_double_large_graphic_pane_g4_ParamLimits

0x5216,	// (0x0004f8b8) list_double_large_graphic_pane_g4

0x0004,

0xf642,	// (0x00059ce4) list_double_large_graphic_pane_g_ParamLimits

0xf642,	// (0x00059ce4) list_double_large_graphic_pane_g

0x5227,	// (0x0004f8c9) list_double_large_graphic_pane_t1_ParamLimits

0x5227,	// (0x0004f8c9) list_double_large_graphic_pane_t1

0x5240,	// (0x0004f8e2) list_double_large_graphic_pane_t2_ParamLimits

0x5240,	// (0x0004f8e2) list_double_large_graphic_pane_t2

0x0001,

0xf64d,	// (0x00059cef) list_double_large_graphic_pane_t_ParamLimits

0xf64d,	// (0x00059cef) list_double_large_graphic_pane_t

0x5252,	// (0x0004f8f4) list_double2_large_graphic_pane_g1_ParamLimits

0x5252,	// (0x0004f8f4) list_double2_large_graphic_pane_g1

0x525e,	// (0x0004f900) list_double2_large_graphic_pane_g2_ParamLimits

0x525e,	// (0x0004f900) list_double2_large_graphic_pane_g2

0x51a3,	// (0x0004f845) list_double2_large_graphic_pane_g3_ParamLimits

0x51a3,	// (0x0004f845) list_double2_large_graphic_pane_g3

0x0002,

0xf652,	// (0x00059cf4) list_double2_large_graphic_pane_g_ParamLimits

0xf652,	// (0x00059cf4) list_double2_large_graphic_pane_g

0x526f,	// (0x0004f911) list_double2_large_graphic_pane_t1_ParamLimits

0x526f,	// (0x0004f911) list_double2_large_graphic_pane_t1

0x5285,	// (0x0004f927) list_double2_large_graphic_pane_t2_ParamLimits

0x5285,	// (0x0004f927) list_double2_large_graphic_pane_t2

0x0001,

0xf659,	// (0x00059cfb) list_double2_large_graphic_pane_t_ParamLimits

0xf659,	// (0x00059cfb) list_double2_large_graphic_pane_t

0x5297,	// (0x0004f939) list_double_heading_pane_g1_ParamLimits

0x5297,	// (0x0004f939) list_double_heading_pane_g1

0x52a8,	// (0x0004f94a) list_double_heading_pane_g2_ParamLimits

0x52a8,	// (0x0004f94a) list_double_heading_pane_g2

0x0001,

0xf65e,	// (0x00059d00) list_double_heading_pane_g_ParamLimits

0xf65e,	// (0x00059d00) list_double_heading_pane_g

0x52b4,	// (0x0004f956) list_double_heading_pane_t1_ParamLimits

0x52b4,	// (0x0004f956) list_double_heading_pane_t1

0x52ca,	// (0x0004f96c) list_double_heading_pane_t2_ParamLimits

0x52ca,	// (0x0004f96c) list_double_heading_pane_t2

0x0001,

0xf663,	// (0x00059d05) list_double_heading_pane_t_ParamLimits

0xf663,	// (0x00059d05) list_double_heading_pane_t

0x518b,	// (0x0004f82d) list_double_graphic_heading_pane_g1_ParamLimits

0x518b,	// (0x0004f82d) list_double_graphic_heading_pane_g1

0x5297,	// (0x0004f939) list_double_graphic_heading_pane_g2_ParamLimits

0x5297,	// (0x0004f939) list_double_graphic_heading_pane_g2

0x52a8,	// (0x0004f94a) list_double_graphic_heading_pane_g3_ParamLimits

0x52a8,	// (0x0004f94a) list_double_graphic_heading_pane_g3

0x0002,

0xf668,	// (0x00059d0a) list_double_graphic_heading_pane_g_ParamLimits

0xf668,	// (0x00059d0a) list_double_graphic_heading_pane_g

0x52dc,	// (0x0004f97e) list_double_graphic_heading_pane_t1_ParamLimits

0x52dc,	// (0x0004f97e) list_double_graphic_heading_pane_t1

0x51c5,	// (0x0004f867) list_double_graphic_heading_pane_t2_ParamLimits

0x51c5,	// (0x0004f867) list_double_graphic_heading_pane_t2

0x0001,

0xf66f,	// (0x00059d11) list_double_graphic_heading_pane_t_ParamLimits

0xf66f,	// (0x00059d11) list_double_graphic_heading_pane_t

0x52f2,	// (0x0004f994) list_double_time_pane_g1_ParamLimits

0x52f2,	// (0x0004f994) list_double_time_pane_g1

0x5303,	// (0x0004f9a5) list_double_time_pane_g2_ParamLimits

0x5303,	// (0x0004f9a5) list_double_time_pane_g2

0x0001,

0xf674,	// (0x00059d16) list_double_time_pane_g_ParamLimits

0xf674,	// (0x00059d16) list_double_time_pane_g

0x530f,	// (0x0004f9b1) list_double_time_pane_t1_ParamLimits

0x530f,	// (0x0004f9b1) list_double_time_pane_t1

0x5325,	// (0x0004f9c7) list_double_time_pane_t2_ParamLimits

0x5325,	// (0x0004f9c7) list_double_time_pane_t2

0x5337,	// (0x0004f9d9) list_double_time_pane_t3_ParamLimits

0x5337,	// (0x0004f9d9) list_double_time_pane_t3

0x5349,	// (0x0004f9eb) list_double_time_pane_t4_ParamLimits

0x5349,	// (0x0004f9eb) list_double_time_pane_t4

0x0003,

0xf679,	// (0x00059d1b) list_double_time_pane_t_ParamLimits

0xf679,	// (0x00059d1b) list_double_time_pane_t

0x535b,	// (0x0004f9fd) list_setting_pane_g1_ParamLimits

0x535b,	// (0x0004f9fd) list_setting_pane_g1

0x5367,	// (0x0004fa09) list_setting_pane_g2_ParamLimits

0x5367,	// (0x0004fa09) list_setting_pane_g2

0x0001,

0xf682,	// (0x00059d24) list_setting_pane_g_ParamLimits

0xf682,	// (0x00059d24) list_setting_pane_g

0x5373,	// (0x0004fa15) list_setting_pane_t1_ParamLimits

0x5373,	// (0x0004fa15) list_setting_pane_t1

0x538d,	// (0x0004fa2f) list_setting_pane_t2_ParamLimits

0x538d,	// (0x0004fa2f) list_setting_pane_t2

0x0002,

0xf687,	// (0x00059d29) list_setting_pane_t_ParamLimits

0xf687,	// (0x00059d29) list_setting_pane_t

0x53cc,	// (0x0004fa6e) set_value_pane_cp_ParamLimits

0x53cc,	// (0x0004fa6e) set_value_pane_cp

0x53d8,	// (0x0004fa7a) list_setting_number_pane_g1_ParamLimits

0x53d8,	// (0x0004fa7a) list_setting_number_pane_g1

0x53e4,	// (0x0004fa86) list_setting_number_pane_g2_ParamLimits

0x53e4,	// (0x0004fa86) list_setting_number_pane_g2

0x0001,

0xf68e,	// (0x00059d30) list_setting_number_pane_g_ParamLimits

0xf68e,	// (0x00059d30) list_setting_number_pane_g

0x53f0,	// (0x0004fa92) list_setting_number_pane_t1_ParamLimits

0x53f0,	// (0x0004fa92) list_setting_number_pane_t1

0x5409,	// (0x0004faab) list_setting_number_pane_t2_ParamLimits

0x5409,	// (0x0004faab) list_setting_number_pane_t2

0x5423,	// (0x0004fac5) list_setting_number_pane_t3_ParamLimits

0x5423,	// (0x0004fac5) list_setting_number_pane_t3

0x0003,

0xf693,	// (0x00059d35) list_setting_number_pane_t_ParamLimits

0xf693,	// (0x00059d35) list_setting_number_pane_t

0x53cc,	// (0x0004fa6e) set_value_pane_ParamLimits

0x53cc,	// (0x0004fa6e) set_value_pane

0x7ffd,	// (0x0005269f) bg_set_opt_pane_ParamLimits

0x7ffd,	// (0x0005269f) bg_set_opt_pane

0x5466,	// (0x0004fb08) set_value_pane_t1

0x801e,	// (0x000526c0) slider_set_pane_cp3

0x8027,	// (0x000526c9) volume_small_pane_cp

0x8030,	// (0x000526d2) list_form_gen_pane

0x8039,	// (0x000526db) scroll_pane_cp8

0x547c,	// (0x0004fb1e) form_field_data_pane_ParamLimits

0x547c,	// (0x0004fb1e) form_field_data_pane

0x54a0,	// (0x0004fb42) form_field_data_wide_pane_ParamLimits

0x54a0,	// (0x0004fb42) form_field_data_wide_pane

0x54c3,	// (0x0004fb65) form_field_popup_pane_ParamLimits

0x54c3,	// (0x0004fb65) form_field_popup_pane

0x54e3,	// (0x0004fb85) form_field_popup_wide_pane_ParamLimits

0x54e3,	// (0x0004fb85) form_field_popup_wide_pane

0x5502,	// (0x0004fba4) form_field_slider_pane_ParamLimits

0x5502,	// (0x0004fba4) form_field_slider_pane

0x5515,	// (0x0004fbb7) form_field_slider_wide_pane_ParamLimits

0x5515,	// (0x0004fbb7) form_field_slider_wide_pane

0x804a,	// (0x000526ec) data_form_pane

0x5532,	// (0x0004fbd4) form_field_data_pane_t1

0x8056,	// (0x000526f8) input_focus_pane

0x8064,	// (0x00052706) data_form_wide_pane

0x5556,	// (0x0004fbf8) form_field_data_wide_pane_t1

0x7dc7,	// (0x00052469) input_focus_pane_cp6

0x5578,	// (0x0004fc1a) form_field_popup_pane_t1

0x8056,	// (0x000526f8) input_focus_pane_cp7

0x8090,	// (0x00052732) list_form_pane

0x5598,	// (0x0004fc3a) form_field_popup_wide_pane_t1

0x8056,	// (0x000526f8) input_focus_pane_cp8

0x809c,	// (0x0005273e) list_form_wide_pane

0x55b5,	// (0x0004fc57) form_field_slider_pane_t1_ParamLimits

0x55b5,	// (0x0004fc57) form_field_slider_pane_t1

0x55cb,	// (0x0004fc6d) form_field_slider_pane_t2_ParamLimits

0x55cb,	// (0x0004fc6d) form_field_slider_pane_t2

0x0001,

0xf6a3,	// (0x00059d45) form_field_slider_pane_t_ParamLimits

0xf6a3,	// (0x00059d45) form_field_slider_pane_t

0x7a65,	// (0x00052107) input_focus_pane_cp9_ParamLimits

0x7a65,	// (0x00052107) input_focus_pane_cp9

0x55e0,	// (0x0004fc82) slider_cont_pane_ParamLimits

0x55e0,	// (0x0004fc82) slider_cont_pane

0x80ab,	// (0x0005274d) form_field_slider_wide_pane_t1_ParamLimits

0x80ab,	// (0x0005274d) form_field_slider_wide_pane_t1

0x55f4,	// (0x0004fc96) form_field_slider_wide_pane_t2_ParamLimits

0x55f4,	// (0x0004fc96) form_field_slider_wide_pane_t2

0x0001,

0xf6a8,	// (0x00059d4a) form_field_slider_wide_pane_t_ParamLimits

0xf6a8,	// (0x00059d4a) form_field_slider_wide_pane_t

0x7a65,	// (0x00052107) input_focus_pane_cp10_ParamLimits

0x7a65,	// (0x00052107) input_focus_pane_cp10

0x5606,	// (0x0004fca8) slider_cont_pane_cp1_ParamLimits

0x5606,	// (0x0004fca8) slider_cont_pane_cp1

0x561a,	// (0x0004fcbc) slider_form_pane_cp

0x80bd,	// (0x0005275f) input_focus_pane_g1

0x80c5,	// (0x00052767) input_focus_pane_g2

0x80cd,	// (0x0005276f) input_focus_pane_g3

0x80d5,	// (0x00052777) input_focus_pane_g4

0x80dd,	// (0x0005277f) input_focus_pane_g5

0x80e5,	// (0x00052787) input_focus_pane_g6

0x80ed,	// (0x0005278f) input_focus_pane_g7

0x80f5,	// (0x00052797) input_focus_pane_g8

0x80fd,	// (0x0005279f) input_focus_pane_g9

0x6fdb,	// (0x0005167d) input_focus_pane_g10

0x0009,

0xf6ad,	// (0x00059d4f) input_focus_pane_g

0xa11e,	// (0x000547c0) wait_border_pane_g3_copy1

0x5622,	// (0x0004fcc4) data_form_pane_t1

0x6fdb,	// (0x0005167d) wait_anim_pane_g1_copy1

0x6155,	// (0x000507f7) data_form_wide_pane_t1

0x563d,	// (0x0004fcdf) list_form_graphic_pane_cp_ParamLimits

0x563d,	// (0x0004fcdf) list_form_graphic_pane_cp

0xb05a,	// (0x000556fc) slider_form_pane_g1

0xb063,	// (0x00055705) slider_form_pane_g2

0x0006,

0xf9a5,	// (0x0005a047) slider_form_pane_g

0x5656,	// (0x0004fcf8) list_form_graphic_pane_ParamLimits

0x5656,	// (0x0004fcf8) list_form_graphic_pane

0x5672,	// (0x0004fd14) list_form_graphic_pane_g1

0x567a,	// (0x0004fd1c) list_form_graphic_pane_t1_ParamLimits

0x567a,	// (0x0004fd1c) list_form_graphic_pane_t1

0x70c5,	// (0x00051767) list_highlight_pane_cp5_ParamLimits

0x70c5,	// (0x00051767) list_highlight_pane_cp5

0x568f,	// (0x0004fd31) find_pane_g1

0x8105,	// (0x000527a7) input_find_pane

0x5698,	// (0x0004fd3a) input_find_pane_g1_ParamLimits

0x5698,	// (0x0004fd3a) input_find_pane_g1

0x56a4,	// (0x0004fd46) input_find_pane_t1_ParamLimits

0x56a4,	// (0x0004fd46) input_find_pane_t1

0x56b9,	// (0x0004fd5b) input_find_pane_t2_ParamLimits

0x56b9,	// (0x0004fd5b) input_find_pane_t2

0x0001,

0xf6c2,	// (0x00059d64) input_find_pane_t_ParamLimits

0xf6c2,	// (0x00059d64) input_find_pane_t

0x810e,	// (0x000527b0) input_focus_pane_cp5_ParamLimits

0x810e,	// (0x000527b0) input_focus_pane_cp5

0x8128,	// (0x000527ca) bg_popup_window_pane_cp2_ParamLimits

0x8128,	// (0x000527ca) bg_popup_window_pane_cp2

0x8135,	// (0x000527d7) listscroll_menu_pane_ParamLimits

0x8135,	// (0x000527d7) listscroll_menu_pane

0x8141,	// (0x000527e3) popup_submenu_window_ParamLimits

0x8141,	// (0x000527e3) popup_submenu_window

0x816b,	// (0x0005280d) find_popup_pane_g1

0x8173,	// (0x00052815) input_popup_find_pane_cp

0x810e,	// (0x000527b0) input_focus_pane_cp4_ParamLimits

0x810e,	// (0x000527b0) input_focus_pane_cp4

0x8189,	// (0x0005282b) input_popup_find_pane_t1_ParamLimits

0x8189,	// (0x0005282b) input_popup_find_pane_t1

0x6fe5,	// (0x00051687) bg_popup_sub_pane_cp

0x81b7,	// (0x00052859) listscroll_popup_sub_pane

0x81bf,	// (0x00052861) list_submenu_pane_ParamLimits

0x81bf,	// (0x00052861) list_submenu_pane

0x81d0,	// (0x00052872) scroll_pane_cp4

0x81d8,	// (0x0005287a) list_single_popup_submenu_pane_ParamLimits

0x81d8,	// (0x0005287a) list_single_popup_submenu_pane

0x81ec,	// (0x0005288e) list_single_popup_submenu_pane_g1

0x81f4,	// (0x00052896) list_single_popup_submenu_pane_t1_ParamLimits

0x81f4,	// (0x00052896) list_single_popup_submenu_pane_t1

0x70c5,	// (0x00051767) bg_active_tab_pane_cp1_ParamLimits

0x70c5,	// (0x00051767) bg_active_tab_pane_cp1

0x8209,	// (0x000528ab) tabs_2_active_pane_g1

0x8211,	// (0x000528b3) tabs_2_active_pane_t1

0x70c5,	// (0x00051767) bg_passive_tab_pane_cp1_ParamLimits

0x70c5,	// (0x00051767) bg_passive_tab_pane_cp1

0x8209,	// (0x000528ab) tabs_2_passive_pane_g1

0x8211,	// (0x000528b3) tabs_2_passive_pane_t1

0x8223,	// (0x000528c5) bg_active_tab_pane_cp4

0x8231,	// (0x000528d3) tabs_2_long_active_pane_t1

0x8244,	// (0x000528e6) bg_passive_tab_pane_cp4

0x5db6,	// (0x00050458) list_single_midp_graphic_pane_g4_ParamLimits

0x8223,	// (0x000528c5) bg_active_tab_pane_cp5

0x8250,	// (0x000528f2) tabs_3_long_active_pane_t1

0x8244,	// (0x000528e6) bg_passive_tab_pane_cp5

0x5db6,	// (0x00050458) list_single_midp_graphic_pane_g4

0x70c5,	// (0x00051767) bg_popup_window_pane_cp13_ParamLimits

0x70c5,	// (0x00051767) bg_popup_window_pane_cp13

0x826b,	// (0x0005290d) listscroll_popup_fast_pane_ParamLimits

0x826b,	// (0x0005290d) listscroll_popup_fast_pane

0x827a,	// (0x0005291c) grid_popup_fast_pane_ParamLimits

0x827a,	// (0x0005291c) grid_popup_fast_pane

0x828c,	// (0x0005292e) scroll_pane_cp9_ParamLimits

0x828c,	// (0x0005292e) scroll_pane_cp9

0xc919,	// (0x00056fbb) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc919,	// (0x00056fbb) list_single_graphic_hl_pane_t1_cp2

0x82b0,	// (0x00052952) input_focus_pane_cp20_ParamLimits

0x82b0,	// (0x00052952) input_focus_pane_cp20

0x82be,	// (0x00052960) query_popup_data_pane_t1_ParamLimits

0x82be,	// (0x00052960) query_popup_data_pane_t1

0x82d1,	// (0x00052973) query_popup_data_pane_t2_ParamLimits

0x82d1,	// (0x00052973) query_popup_data_pane_t2

0x8317,	// (0x000529b9) query_popup_data_pane_t3_ParamLimits

0x8317,	// (0x000529b9) query_popup_data_pane_t3

0x8358,	// (0x000529fa) query_popup_data_pane_t4_ParamLimits

0x8358,	// (0x000529fa) query_popup_data_pane_t4

0x83a0,	// (0x00052a42) query_popup_data_pane_t5_ParamLimits

0x83a0,	// (0x00052a42) query_popup_data_pane_t5

0x0004,

0xf6c7,	// (0x00059d69) query_popup_data_pane_t_ParamLimits

0xf6c7,	// (0x00059d69) query_popup_data_pane_t

0x80bd,	// (0x0005275f) bg_set_opt_pane_g1

0x80c5,	// (0x00052767) bg_set_opt_pane_g2

0x80cd,	// (0x0005276f) bg_set_opt_pane_g3

0x80d5,	// (0x00052777) bg_set_opt_pane_g4

0x80dd,	// (0x0005277f) bg_set_opt_pane_g5

0x80e5,	// (0x00052787) bg_set_opt_pane_g6

0x80ed,	// (0x0005278f) bg_set_opt_pane_g7

0x80f5,	// (0x00052797) bg_set_opt_pane_g8

0x80fd,	// (0x0005279f) bg_set_opt_pane_g9

0x0008,

0xf6d2,	// (0x00059d74) bg_set_opt_pane_g

0x59f7,	// (0x00050099) control_top_pane_stacon_ParamLimits

0x59f7,	// (0x00050099) control_top_pane_stacon

0x5a4a,	// (0x000500ec) signal_pane_stacon_ParamLimits

0x5a4a,	// (0x000500ec) signal_pane_stacon

0x893e,	// (0x00052fe0) stacon_top_pane_g1_ParamLimits

0x893e,	// (0x00052fe0) stacon_top_pane_g1

0x5a6f,	// (0x00050111) title_pane_stacon_ParamLimits

0x5a6f,	// (0x00050111) title_pane_stacon

0x5a99,	// (0x0005013b) uni_indicator_pane_stacon_ParamLimits

0x5a99,	// (0x0005013b) uni_indicator_pane_stacon

0x5aae,	// (0x00050150) battery_pane_stacon_ParamLimits

0x5aae,	// (0x00050150) battery_pane_stacon

0x5af2,	// (0x00050194) control_bottom_pane_stacon_ParamLimits

0x5af2,	// (0x00050194) control_bottom_pane_stacon

0x5b15,	// (0x000501b7) navi_pane_stacon_ParamLimits

0x5b15,	// (0x000501b7) navi_pane_stacon

0x8960,	// (0x00053002) stacon_bottom_pane_g1_ParamLimits

0x8960,	// (0x00053002) stacon_bottom_pane_g1

0x56ce,	// (0x0004fd70) aid_levels_signal_lsc_ParamLimits

0x56ce,	// (0x0004fd70) aid_levels_signal_lsc

0x56e5,	// (0x0004fd87) signal_pane_stacon_g1_ParamLimits

0x56e5,	// (0x0004fd87) signal_pane_stacon_g1

0x56f9,	// (0x0004fd9b) signal_pane_stacon_g2_ParamLimits

0x56f9,	// (0x0004fd9b) signal_pane_stacon_g2

0x0001,

0xf6e5,	// (0x00059d87) signal_pane_stacon_g_ParamLimits

0xf6e5,	// (0x00059d87) signal_pane_stacon_g

0x572e,	// (0x0004fdd0) title_pane_stacon_t1_ParamLimits

0x572e,	// (0x0004fdd0) title_pane_stacon_t1

0x83e4,	// (0x00052a86) uni_indicator_pane_stacon_g1

0x83ee,	// (0x00052a90) uni_indicator_pane_stacon_g2

0x83f8,	// (0x00052a9a) uni_indicator_pane_stacon_g3

0x8402,	// (0x00052aa4) uni_indicator_pane_stacon_g4

0x0003,

0xf6f1,	// (0x00059d93) uni_indicator_pane_stacon_g

0x5753,	// (0x0004fdf5) control_top_pane_stacon_g1

0x575b,	// (0x0004fdfd) control_top_pane_stacon_t1_ParamLimits

0x575b,	// (0x0004fdfd) control_top_pane_stacon_t1

0x5792,	// (0x0004fe34) aid_levels_battery_lsc_ParamLimits

0x5792,	// (0x0004fe34) aid_levels_battery_lsc

0x57aa,	// (0x0004fe4c) battery_pane_stacon_g1_ParamLimits

0x57aa,	// (0x0004fe4c) battery_pane_stacon_g1

0x57bd,	// (0x0004fe5f) battery_pane_stacon_g2_ParamLimits

0x57bd,	// (0x0004fe5f) battery_pane_stacon_g2

0x0001,

0xf6fa,	// (0x00059d9c) battery_pane_stacon_g_ParamLimits

0xf6fa,	// (0x00059d9c) battery_pane_stacon_g

0x57fb,	// (0x0004fe9d) navi_icon_pane_stacon

0x580f,	// (0x0004feb1) navi_navi_pane_stacon

0x57fb,	// (0x0004fe9d) navi_text_pane_stacon

0x5753,	// (0x0004fdf5) control_bottom_pane_stacon_g1

0x5823,	// (0x0004fec5) control_bottom_pane_stacon_t1_ParamLimits

0x5823,	// (0x0004fec5) control_bottom_pane_stacon_t1

0x8426,	// (0x00052ac8) grid_app_pane_ParamLimits

0x8426,	// (0x00052ac8) grid_app_pane

0x844a,	// (0x00052aec) scroll_pane_cp15_ParamLimits

0x844a,	// (0x00052aec) scroll_pane_cp15

0x845f,	// (0x00052b01) cell_app_pane_ParamLimits

0x845f,	// (0x00052b01) cell_app_pane

0x8483,	// (0x00052b25) cell_app_pane_g1_ParamLimits

0x8483,	// (0x00052b25) cell_app_pane_g1

0x84a7,	// (0x00052b49) cell_app_pane_g2_ParamLimits

0x84a7,	// (0x00052b49) cell_app_pane_g2

0x0001,

0xf6ff,	// (0x00059da1) cell_app_pane_g_ParamLimits

0xf6ff,	// (0x00059da1) cell_app_pane_g

0x84b3,	// (0x00052b55) cell_app_pane_t1_ParamLimits

0x84b3,	// (0x00052b55) cell_app_pane_t1

0x84ca,	// (0x00052b6c) grid_highlight_pane_ParamLimits

0x84ca,	// (0x00052b6c) grid_highlight_pane

0x80bd,	// (0x0005275f) cell_highlight_pane_g1

0x80c5,	// (0x00052767) cell_highlight_pane_g2

0x80cd,	// (0x0005276f) cell_highlight_pane_g3

0x80d5,	// (0x00052777) cell_highlight_pane_g4

0x80dd,	// (0x0005277f) cell_highlight_pane_g5

0x80e5,	// (0x00052787) cell_highlight_pane_g6

0x80ed,	// (0x0005278f) cell_highlight_pane_g7

0x80f5,	// (0x00052797) cell_highlight_pane_g8

0x80fd,	// (0x0005279f) cell_highlight_pane_g9

0x6fdb,	// (0x0005167d) cell_highlight_pane_g10

0x0009,

0xf6ad,	// (0x00059d4f) cell_highlight_pane_g

0x84db,	// (0x00052b7d) bg_scroll_pane

0x586d,	// (0x0004ff0f) scroll_handle_pane

0x8522,	// (0x00052bc4) scroll_bg_pane_g1

0x8537,	// (0x00052bd9) scroll_bg_pane_g2

0x854f,	// (0x00052bf1) scroll_bg_pane_g3

0x0002,

0xf704,	// (0x00059da6) scroll_bg_pane_g

0x8564,	// (0x00052c06) scroll_handle_focus_pane_ParamLimits

0x8564,	// (0x00052c06) scroll_handle_focus_pane

0x8522,	// (0x00052bc4) scroll_handle_pane_g1

0x8571,	// (0x00052c13) scroll_handle_pane_g2

0x854f,	// (0x00052bf1) scroll_handle_pane_g3

0x0002,

0xf70b,	// (0x00059dad) scroll_handle_pane_g

0x810e,	// (0x000527b0) bg_popup_sub_pane_cp21_ParamLimits

0x810e,	// (0x000527b0) bg_popup_sub_pane_cp21

0x8585,	// (0x00052c27) popup_fep_japan_predictive_window_t1_ParamLimits

0x8585,	// (0x00052c27) popup_fep_japan_predictive_window_t1

0x859f,	// (0x00052c41) popup_fep_japan_predictive_window_t2_ParamLimits

0x859f,	// (0x00052c41) popup_fep_japan_predictive_window_t2

0x85d2,	// (0x00052c74) popup_fep_japan_predictive_window_t3_ParamLimits

0x85d2,	// (0x00052c74) popup_fep_japan_predictive_window_t3

0x0002,

0xf712,	// (0x00059db4) popup_fep_japan_predictive_window_t_ParamLimits

0xf712,	// (0x00059db4) popup_fep_japan_predictive_window_t

0x6fe5,	// (0x00051687) bg_popup_sub_pane_cp23

0x8609,	// (0x00052cab) listscroll_japin_cand_pane

0x8611,	// (0x00052cb3) popup_fep_japan_candidate_window_t1

0x861f,	// (0x00052cc1) candidate_pane_ParamLimits

0x861f,	// (0x00052cc1) candidate_pane

0x8631,	// (0x00052cd3) scroll_pane_cp30

0x8639,	// (0x00052cdb) list_single_popup_jap_candidate_pane_ParamLimits

0x8639,	// (0x00052cdb) list_single_popup_jap_candidate_pane

0x6fe5,	// (0x00051687) list_highlight_pane_cp30

0x864e,	// (0x00052cf0) list_single_popup_jap_candidate_pane_t1

0x865d,	// (0x00052cff) level_1_signal

0x866a,	// (0x00052d0c) level_2_signal

0x8677,	// (0x00052d19) level_3_signal

0x8684,	// (0x00052d26) level_4_signal

0x8691,	// (0x00052d33) level_5_signal

0x869e,	// (0x00052d40) level_6_signal

0x86ab,	// (0x00052d4d) level_7_signal

0x865d,	// (0x00052cff) level_1_battery

0x866a,	// (0x00052d0c) level_2_battery

0x8677,	// (0x00052d19) level_3_battery

0x8684,	// (0x00052d26) level_4_battery

0x8691,	// (0x00052d33) level_5_battery

0x869e,	// (0x00052d40) level_6_battery

0x86ab,	// (0x00052d4d) level_7_battery

0x86d0,	// (0x00052d72) list_menu_pane_ParamLimits

0x86d0,	// (0x00052d72) list_menu_pane

0x86e1,	// (0x00052d83) scroll_pane_cp25_ParamLimits

0x86e1,	// (0x00052d83) scroll_pane_cp25

0x86fa,	// (0x00052d9c) list_double2_graphic_pane_cp2_ParamLimits

0x86fa,	// (0x00052d9c) list_double2_graphic_pane_cp2

0x86fa,	// (0x00052d9c) list_double2_large_graphic_pane_cp2_ParamLimits

0x86fa,	// (0x00052d9c) list_double2_large_graphic_pane_cp2

0x86fa,	// (0x00052d9c) list_double2_pane_cp2_ParamLimits

0x86fa,	// (0x00052d9c) list_double2_pane_cp2

0x86fa,	// (0x00052d9c) list_double_graphic_pane_cp2_ParamLimits

0x86fa,	// (0x00052d9c) list_double_graphic_pane_cp2

0x86fa,	// (0x00052d9c) list_double_large_graphic_pane_cp2_ParamLimits

0x86fa,	// (0x00052d9c) list_double_large_graphic_pane_cp2

0x86fa,	// (0x00052d9c) list_double_number_pane_cp2_ParamLimits

0x86fa,	// (0x00052d9c) list_double_number_pane_cp2

0x86fa,	// (0x00052d9c) list_double_pane_cp2_ParamLimits

0x86fa,	// (0x00052d9c) list_double_pane_cp2

0x871e,	// (0x00052dc0) list_single_2graphic_pane_cp2_ParamLimits

0x871e,	// (0x00052dc0) list_single_2graphic_pane_cp2

0x871e,	// (0x00052dc0) list_single_graphic_heading_pane_cp2_ParamLimits

0x871e,	// (0x00052dc0) list_single_graphic_heading_pane_cp2

0x871e,	// (0x00052dc0) list_single_graphic_pane_cp2_ParamLimits

0x871e,	// (0x00052dc0) list_single_graphic_pane_cp2

0x871e,	// (0x00052dc0) list_single_heading_pane_cp2_ParamLimits

0x871e,	// (0x00052dc0) list_single_heading_pane_cp2

0x8737,	// (0x00052dd9) list_single_large_graphic_pane_cp2_ParamLimits

0x8737,	// (0x00052dd9) list_single_large_graphic_pane_cp2

0x871e,	// (0x00052dc0) list_single_number_heading_pane_cp2_ParamLimits

0x871e,	// (0x00052dc0) list_single_number_heading_pane_cp2

0x871e,	// (0x00052dc0) list_single_number_pane_cp2_ParamLimits

0x871e,	// (0x00052dc0) list_single_number_pane_cp2

0x871e,	// (0x00052dc0) list_single_pane_cp2_ParamLimits

0x871e,	// (0x00052dc0) list_single_pane_cp2

0x878d,	// (0x00052e2f) bg_popup_sub_pane_cp22

0x591f,	// (0x0004ffc1) popup_side_volume_key_window_g1

0x5949,	// (0x0004ffeb) popup_side_volume_key_window_t1

0x5965,	// (0x00050007) volume_small_pane_cp1

0x7a65,	// (0x00052107) bg_popup_sub_pane_cp24_ParamLimits

0x7a65,	// (0x00052107) bg_popup_sub_pane_cp24

0x87a3,	// (0x00052e45) fep_china_uni_candidate_pane_ParamLimits

0x87a3,	// (0x00052e45) fep_china_uni_candidate_pane

0x87b7,	// (0x00052e59) fep_china_uni_entry_pane

0x87c7,	// (0x00052e69) popup_fep_china_uni_window_g1

0x87e3,	// (0x00052e85) fep_china_uni_entry_pane_g1

0x87eb,	// (0x00052e8d) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x00059de1) fep_china_uni_entry_pane_g

0x87f3,	// (0x00052e95) fep_entry_item_pane

0x87fd,	// (0x00052e9f) fep_candidate_item_pane

0x8805,	// (0x00052ea7) fep_china_uni_candidate_pane_g1

0x880d,	// (0x00052eaf) fep_china_uni_candidate_pane_g2

0x8815,	// (0x00052eb7) fep_china_uni_candidate_pane_g3

0x881d,	// (0x00052ebf) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x00059de6) fep_china_uni_candidate_pane_g

0x6fdb,	// (0x0005167d) fep_entry_item_pane_g1

0x8825,	// (0x00052ec7) fep_entry_item_pane_t1_ParamLimits

0x8825,	// (0x00052ec7) fep_entry_item_pane_t1

0x883b,	// (0x00052edd) fep_candidate_item_pane_t1_ParamLimits

0x883b,	// (0x00052edd) fep_candidate_item_pane_t1

0x8850,	// (0x00052ef2) fep_candidate_item_pane_t2_ParamLimits

0x8850,	// (0x00052ef2) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x00059def) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x00059def) fep_candidate_item_pane_t

0x70c5,	// (0x00051767) list_highlight_pane_cp31_ParamLimits

0x70c5,	// (0x00051767) list_highlight_pane_cp31

0x8862,	// (0x00052f04) level_1_signal_lsc

0x886b,	// (0x00052f0d) level_2_signal_lsc

0x8874,	// (0x00052f16) level_3_signal_lsc

0x887d,	// (0x00052f1f) level_4_signal_lsc

0x8886,	// (0x00052f28) level_5_signal_lsc

0x888f,	// (0x00052f31) level_6_signal_lsc

0x8898,	// (0x00052f3a) level_7_signal_lsc

0x8898,	// (0x00052f3a) level_1_battery_lsc

0x88a1,	// (0x00052f43) level_2_battery_lsc

0x88aa,	// (0x00052f4c) level_3_battery_lsc

0x88b3,	// (0x00052f55) level_4_battery_lsc

0x88bc,	// (0x00052f5e) level_5_battery_lsc

0x88c5,	// (0x00052f67) level_6_battery_lsc

0x8862,	// (0x00052f04) level_7_battery_lsc

0x88ce,	// (0x00052f70) scroll_handle_focus_pane_g1

0x88d7,	// (0x00052f79) scroll_handle_focus_pane_g2

0x88e0,	// (0x00052f82) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x00059df4) scroll_handle_focus_pane_g

0x596d,	// (0x0005000f) list_single_2graphic_pane_g1_ParamLimits

0x596d,	// (0x0005000f) list_single_2graphic_pane_g1

0x729a,	// (0x0005193c) list_single_2graphic_pane_g2_ParamLimits

0x729a,	// (0x0005193c) list_single_2graphic_pane_g2

0x727c,	// (0x0005191e) list_single_2graphic_pane_g3_ParamLimits

0x727c,	// (0x0005191e) list_single_2graphic_pane_g3

0x5979,	// (0x0005001b) list_single_2graphic_pane_g4_ParamLimits

0x5979,	// (0x0005001b) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x00059dfb) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x00059dfb) list_single_2graphic_pane_g

0x5985,	// (0x00050027) list_single_2graphic_pane_t1_ParamLimits

0x5985,	// (0x00050027) list_single_2graphic_pane_t1

0x59b3,	// (0x00050055) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x59b3,	// (0x00050055) list_double2_graphic_large_graphic_pane_g1

0x525e,	// (0x0004f900) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x525e,	// (0x0004f900) list_double2_graphic_large_graphic_pane_g2

0x51a3,	// (0x0004f845) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x51a3,	// (0x0004f845) list_double2_graphic_large_graphic_pane_g3

0x59c3,	// (0x00050065) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x59c3,	// (0x00050065) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x00059e04) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x00059e04) list_double2_graphic_large_graphic_pane_g

0x59cf,	// (0x00050071) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x59cf,	// (0x00050071) list_double2_graphic_large_graphic_pane_t1

0x59e5,	// (0x00050087) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x59e5,	// (0x00050087) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x00059e0d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x00059e0d) list_double2_graphic_large_graphic_pane_t

0x8a28,	// (0x000530ca) popup_fast_swap_window_ParamLimits

0x8a28,	// (0x000530ca) popup_fast_swap_window

0x8a44,	// (0x000530e6) popup_side_volume_key_window

0x8a60,	// (0x00053102) stacon_top_pane

0x8a6a,	// (0x0005310c) status_pane_ParamLimits

0x8a6a,	// (0x0005310c) status_pane

0x8a60,	// (0x00053102) status_small_pane

0x6fe5,	// (0x00051687) control_pane

0x6fe5,	// (0x00051687) stacon_bottom_pane

0x8039,	// (0x000526db) scroll_pane_cp121

0x8030,	// (0x000526d2) set_content_pane

0x88e9,	// (0x00052f8b) bg_active_tab_pane_g1_cp1

0x88f2,	// (0x00052f94) bg_active_tab_pane_g2_cp1

0x88fb,	// (0x00052f9d) bg_active_tab_pane_g3_cp1

0x88e9,	// (0x00052f8b) bg_passive_tab_pane_g1_cp1

0x88f2,	// (0x00052f94) bg_passive_tab_pane_g2_cp1

0x88fb,	// (0x00052f9d) bg_passive_tab_pane_g3_cp1

0x8904,	// (0x00052fa6) bg_active_tab_pane_g1_cp2

0x88f2,	// (0x00052f94) bg_active_tab_pane_g2_cp2

0x890d,	// (0x00052faf) bg_active_tab_pane_g3_cp2

0x8904,	// (0x00052fa6) bg_passive_tab_pane_g1_cp2

0x88f2,	// (0x00052f94) bg_passive_tab_pane_g2_cp2

0x890d,	// (0x00052faf) bg_passive_tab_pane_g3_cp2

0x8916,	// (0x00052fb8) bg_active_tab_pane_g1_cp3

0x88f2,	// (0x00052f94) bg_active_tab_pane_g2_cp3

0x891f,	// (0x00052fc1) bg_active_tab_pane_g3_cp3

0x8916,	// (0x00052fb8) bg_passive_tab_pane_g1_cp3

0x88f2,	// (0x00052f94) bg_passive_tab_pane_g2_cp3

0x891f,	// (0x00052fc1) bg_passive_tab_pane_g3_cp3

0x8928,	// (0x00052fca) bg_active_tab_pane_g1_cp4

0x88f2,	// (0x00052f94) bg_active_tab_pane_g2_cp4

0x8933,	// (0x00052fd5) bg_active_tab_pane_g3_cp4

0x8928,	// (0x00052fca) bg_passive_tab_pane_g1_cp4

0x88f2,	// (0x00052f94) bg_passive_tab_pane_g2_cp4

0x8933,	// (0x00052fd5) bg_passive_tab_pane_g3_cp4

0x897c,	// (0x0005301e) bg_active_tab_pane_g1_cp5

0x88f2,	// (0x00052f94) bg_active_tab_pane_g2_cp5

0x8985,	// (0x00053027) bg_active_tab_pane_g3_cp5

0x897c,	// (0x0005301e) bg_passive_tab_pane_g1_cp5

0x88f2,	// (0x00052f94) bg_passive_tab_pane_g2_cp5

0x8985,	// (0x00053027) bg_passive_tab_pane_g3_cp5

0x898e,	// (0x00053030) list_set_graphic_pane_ParamLimits

0x898e,	// (0x00053030) list_set_graphic_pane

0x6fe5,	// (0x00051687) bg_set_opt_pane_cp4

0x89ab,	// (0x0005304d) list_set_graphic_pane_g1_ParamLimits

0x89ab,	// (0x0005304d) list_set_graphic_pane_g1

0x89b7,	// (0x00053059) list_set_graphic_pane_g2_ParamLimits

0x89b7,	// (0x00053059) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x00059e12) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x00059e12) list_set_graphic_pane_g

0x0009,

0xfad3,	// (0x0005a175) volume_small_pane_cp_g

0x89db,	// (0x0005307d) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x89db,	// (0x0005307d) list_double2_large_graphic_pane_g1_cp2

0x89e7,	// (0x00053089) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x89e7,	// (0x00053089) list_double2_large_graphic_pane_g2_cp2

0x89f8,	// (0x0005309a) list_double2_large_graphic_pane_g3_cp2

0x8a00,	// (0x000530a2) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8a00,	// (0x000530a2) list_double2_large_graphic_pane_t1_cp2

0x8a16,	// (0x000530b8) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8a16,	// (0x000530b8) list_double2_large_graphic_pane_t2_cp2

0xabf7,	// (0x00055299) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xabf7,	// (0x00055299) list_double_large_graphic_pane_g1_cp2

0xac08,	// (0x000552aa) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xac08,	// (0x000552aa) list_double_large_graphic_pane_g2_cp2

0x8b7a,	// (0x0005321c) list_double_large_graphic_pane_g3_cp2

0xac19,	// (0x000552bb) list_double_large_graphic_pane_g4_cp

0xac21,	// (0x000552c3) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xac21,	// (0x000552c3) list_double_large_graphic_pane_t1_cp2

0xac38,	// (0x000552da) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xac38,	// (0x000552da) list_double_large_graphic_pane_t2_cp2

0x8a78,	// (0x0005311a) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8a78,	// (0x0005311a) list_double2_graphic_pane_g1_cp2

0x8a86,	// (0x00053128) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8a86,	// (0x00053128) list_double2_graphic_pane_g2_cp2

0x8a97,	// (0x00053139) list_double2_graphic_pane_g3_cp2

0x8aa1,	// (0x00053143) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8aa1,	// (0x00053143) list_double2_graphic_pane_t1_cp2

0x8ab7,	// (0x00053159) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8ab7,	// (0x00053159) list_double2_graphic_pane_t2_cp2

0x8ac9,	// (0x0005316b) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8ac9,	// (0x0005316b) list_single_number_heading_pane_g1_cp2

0x8ad5,	// (0x00053177) list_single_number_heading_pane_g2_cp2

0x8add,	// (0x0005317f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8add,	// (0x0005317f) list_single_number_heading_pane_t1_cp2

0x8af3,	// (0x00053195) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8af3,	// (0x00053195) list_single_number_heading_pane_t2_cp2

0x8b05,	// (0x000531a7) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8b05,	// (0x000531a7) list_single_number_heading_pane_t3_cp2

0x8ac9,	// (0x0005316b) list_single_heading_pane_g1_cp2_ParamLimits

0x8ac9,	// (0x0005316b) list_single_heading_pane_g1_cp2

0x8ad5,	// (0x00053177) list_single_heading_pane_g2_cp2

0x8add,	// (0x0005317f) list_single_heading_pane_t1_cp2_ParamLimits

0x8add,	// (0x0005317f) list_single_heading_pane_t1_cp2

0xa9ff,	// (0x000550a1) list_single_heading_pane_t2_cp2_ParamLimits

0xa9ff,	// (0x000550a1) list_single_heading_pane_t2_cp2

0xa950,	// (0x00054ff2) list_double_graphic_pane_g1_cp2_ParamLimits

0xa950,	// (0x00054ff2) list_double_graphic_pane_g1_cp2

0xa140,	// (0x000547e2) list_double_graphic_pane_g2_cp2_ParamLimits

0xa140,	// (0x000547e2) list_double_graphic_pane_g2_cp2

0xa95c,	// (0x00054ffe) list_double_graphic_pane_g3_cp2

0xa964,	// (0x00055006) list_double_graphic_pane_t1_cp2_ParamLimits

0xa964,	// (0x00055006) list_double_graphic_pane_t1_cp2

0xa97a,	// (0x0005501c) list_double_graphic_pane_t2_cp2_ParamLimits

0xa97a,	// (0x0005501c) list_double_graphic_pane_t2_cp2

0x8394,	// (0x00052a36) list_double_number_pane_g1_cp2_ParamLimits

0x8394,	// (0x00052a36) list_double_number_pane_g1_cp2

0x8b7a,	// (0x0005321c) list_double_number_pane_g2_cp2

0xa914,	// (0x00054fb6) list_double_number_pane_t1_cp2_ParamLimits

0xa914,	// (0x00054fb6) list_double_number_pane_t1_cp2

0xa928,	// (0x00054fca) list_double_number_pane_t2_cp2_ParamLimits

0xa928,	// (0x00054fca) list_double_number_pane_t2_cp2

0xa93e,	// (0x00054fe0) list_double_number_pane_t3_cp2_ParamLimits

0xa93e,	// (0x00054fe0) list_double_number_pane_t3_cp2

0xa7fd,	// (0x00054e9f) list_single_graphic_pane_g1_cp2_ParamLimits

0xa7fd,	// (0x00054e9f) list_single_graphic_pane_g1_cp2

0x8bd2,	// (0x00053274) list_single_graphic_pane_g2_cp2_ParamLimits

0x8bd2,	// (0x00053274) list_single_graphic_pane_g2_cp2

0x8bde,	// (0x00053280) list_single_graphic_pane_g3_cp2

0xa7d3,	// (0x00054e75) list_single_graphic_pane_t1_cp2_ParamLimits

0xa7d3,	// (0x00054e75) list_single_graphic_pane_t1_cp2

0x8bd2,	// (0x00053274) list_single_number_pane_g1_cp2_ParamLimits

0x8bd2,	// (0x00053274) list_single_number_pane_g1_cp2

0x8bde,	// (0x00053280) list_single_number_pane_g2_cp2

0xa7d3,	// (0x00054e75) list_single_number_pane_t1_cp2_ParamLimits

0xa7d3,	// (0x00054e75) list_single_number_pane_t1_cp2

0xa7e9,	// (0x00054e8b) list_single_number_pane_t2_cp2_ParamLimits

0xa7e9,	// (0x00054e8b) list_single_number_pane_t2_cp2

0x89e7,	// (0x00053089) list_double2_pane_g1_cp2_ParamLimits

0x89e7,	// (0x00053089) list_double2_pane_g1_cp2

0x89f8,	// (0x0005309a) list_double2_pane_g2_cp2

0x8b52,	// (0x000531f4) list_double2_pane_t1_cp2_ParamLimits

0x8b52,	// (0x000531f4) list_double2_pane_t1_cp2

0x8b68,	// (0x0005320a) list_double2_pane_t2_cp2_ParamLimits

0x8b68,	// (0x0005320a) list_double2_pane_t2_cp2

0x8394,	// (0x00052a36) list_double_pane_g1_cp2_ParamLimits

0x8394,	// (0x00052a36) list_double_pane_g1_cp2

0x8b7a,	// (0x0005321c) list_double_pane_g2_cp2

0x8b82,	// (0x00053224) list_double_pane_t1_cp2_ParamLimits

0x8b82,	// (0x00053224) list_double_pane_t1_cp2

0x8b98,	// (0x0005323a) list_double_pane_t2_cp2_ParamLimits

0x8b98,	// (0x0005323a) list_double_pane_t2_cp2

0x8bc2,	// (0x00053264) list_single_pane_cp2_g3

0x8bd2,	// (0x00053274) list_single_pane_g1_cp2_ParamLimits

0x8bd2,	// (0x00053274) list_single_pane_g1_cp2

0x8bde,	// (0x00053280) list_single_pane_g2_cp2

0x8be6,	// (0x00053288) list_single_pane_t1_cp2_ParamLimits

0x8be6,	// (0x00053288) list_single_pane_t1_cp2

0x8bfe,	// (0x000532a0) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8bfe,	// (0x000532a0) list_single_large_graphic_pane_g1_cp2

0x8c0a,	// (0x000532ac) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8c0a,	// (0x000532ac) list_single_large_graphic_pane_g2_cp2

0x8c16,	// (0x000532b8) list_single_large_graphic_pane_g3_cp2

0x8c1e,	// (0x000532c0) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8c1e,	// (0x000532c0) list_single_large_graphic_pane_g4_cp1

0x8c38,	// (0x000532da) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8c38,	// (0x000532da) list_single_large_graphic_pane_t1_cp2

0xa79f,	// (0x00054e41) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa79f,	// (0x00054e41) list_single_graphic_heading_pane_g1_cp2

0xa76c,	// (0x00054e0e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa76c,	// (0x00054e0e) list_single_graphic_heading_pane_g4_cp2

0x8bde,	// (0x00053280) list_single_graphic_heading_pane_g5_cp2

0xa7ab,	// (0x00054e4d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa7ab,	// (0x00054e4d) list_single_graphic_heading_pane_t1_cp2

0xa7c1,	// (0x00054e63) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa7c1,	// (0x00054e63) list_single_graphic_heading_pane_t2_cp2

0xa760,	// (0x00054e02) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa760,	// (0x00054e02) list_single_2graphic_pane_g1_cp2

0xa76c,	// (0x00054e0e) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa76c,	// (0x00054e0e) list_single_2graphic_pane_g2_cp2

0x8bde,	// (0x00053280) list_single_2graphic_pane_g3_cp2

0xa77d,	// (0x00054e1f) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa77d,	// (0x00054e1f) list_single_2graphic_pane_g4_cp2

0xa789,	// (0x00054e2b) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa789,	// (0x00054e2b) list_single_2graphic_pane_t1_cp2

0x6fdb,	// (0x0005167d) list_highlight_pane_g10_cp1

0xa338,	// (0x000549da) list_highlight_pane_g1_cp1

0xa340,	// (0x000549e2) list_highlight_pane_g2_cp1

0xa348,	// (0x000549ea) list_highlight_pane_g3_cp1

0xa350,	// (0x000549f2) list_highlight_pane_g4_cp1

0xa358,	// (0x000549fa) list_highlight_pane_g5_cp1

0xa360,	// (0x00054a02) list_highlight_pane_g6_cp1

0xa368,	// (0x00054a0a) list_highlight_pane_g7_cp1

0xa370,	// (0x00054a12) list_highlight_pane_g8_cp1

0xa378,	// (0x00054a1a) list_highlight_pane_g9_cp1

0xa258,	// (0x000548fa) form_field_slider_pane_t3

0xa266,	// (0x00054908) form_field_slider_pane_t4

0xa274,	// (0x00054916) slider_form_pane_ParamLimits

0xa274,	// (0x00054916) slider_form_pane

0x6fe5,	// (0x00051687) control_abbreviations

0x6fe5,	// (0x00051687) control_conventions

0x6fe5,	// (0x00051687) control_definitions

0x6fe5,	// (0x00051687) format_table_attribute

0xaa49,	// (0x000550eb) bg_popup_preview_window_pane_g9

0x6fe5,	// (0x00051687) format_table_data2

0x6fe5,	// (0x00051687) format_table_data3

0x6fe5,	// (0x00051687) format_table_data_example

0x0008,

0x6fe5,	// (0x00051687) intro_purpose

0xf905,	// (0x00059fa7) bg_popup_preview_window_pane_g

0x6fe5,	// (0x00051687) texts_category

0x6fe5,	// (0x00051687) texts_graphics

0x8c4e,	// (0x000532f0) text_digital

0x8c5d,	// (0x000532ff) text_primary

0x8c6c,	// (0x0005330e) text_primary_small

0x8c7b,	// (0x0005331d) text_secondary

0x8c8a,	// (0x0005332c) text_title

0xb155,	// (0x000557f7) bg_passive_tab_pane_g1_cp3_srt

0x88f2,	// (0x00052f94) bg_passive_tab_pane_g2_cp3_srt

0xb15e,	// (0x00055800) bg_passive_tab_pane_g3_cp3_srt

0x70c5,	// (0x00051767) bg_active_tab_pane_cp3_srt_ParamLimits

0x70c5,	// (0x00051767) bg_active_tab_pane_cp3_srt

0xb167,	// (0x00055809) tabs_4_active_pane_srt_g1

0xb16f,	// (0x00055811) tabs_4_active_pane_srt_t1_ParamLimits

0xb16f,	// (0x00055811) tabs_4_active_pane_srt_t1

0xb155,	// (0x000557f7) bg_active_tab_pane_g1_cp3_copy1

0x88f2,	// (0x00052f94) bg_active_tab_pane_g2_cp3_copy1

0xb15e,	// (0x00055800) bg_active_tab_pane_g3_cp3_copy1

0x70c5,	// (0x00051767) tabs_2_long_active_pane_srt_ParamLimits

0x70c5,	// (0x00051767) tabs_2_long_active_pane_srt

0x70c5,	// (0x00051767) tabs_2_long_passive_pane_srt_ParamLimits

0x70c5,	// (0x00051767) tabs_2_long_passive_pane_srt

0x8244,	// (0x000528e6) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8244,	// (0x000528e6) bg_passive_tab_pane_cp4_srt

0xae8d,	// (0x0005552f) bg_passive_tab_pane_g1_cp4_srt

0x88f2,	// (0x00052f94) bg_passive_tab_pane_g2_cp4_srt

0xae96,	// (0x00055538) bg_passive_tab_pane_g3_cp4_srt

0x8223,	// (0x000528c5) bg_active_tab_pane_cp4_srt_ParamLimits

0x8223,	// (0x000528c5) bg_active_tab_pane_cp4_srt

0xae9f,	// (0x00055541) tabs_2_long_active_pane_srt_t1_ParamLimits

0xae9f,	// (0x00055541) tabs_2_long_active_pane_srt_t1

0xae8d,	// (0x0005552f) bg_active_tab_pane_g1_cp4_srt

0x88f2,	// (0x00052f94) bg_active_tab_pane_g2_cp4_srt

0xae96,	// (0x00055538) bg_active_tab_pane_g3_cp4_srt

0x7a65,	// (0x00052107) tabs_3_long_active_pane_srt_ParamLimits

0x7a65,	// (0x00052107) tabs_3_long_active_pane_srt

0x7a65,	// (0x00052107) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7a65,	// (0x00052107) tabs_3_long_passive_pane_cp_srt

0x7a65,	// (0x00052107) tabs_3_long_passive_pane_srt_ParamLimits

0x7a65,	// (0x00052107) tabs_3_long_passive_pane_srt

0x8244,	// (0x000528e6) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8244,	// (0x000528e6) bg_passive_tab_pane_cp5_srt

0x897c,	// (0x0005301e) bg_passive_tab_pane_g1_cp5_srt

0x88f2,	// (0x00052f94) bg_passive_tab_pane_g2_cp5_srt

0x8985,	// (0x00053027) bg_passive_tab_pane_g3_cp5_srt

0x8223,	// (0x000528c5) bg_active_tab_pane_cp5_srt_ParamLimits

0x8223,	// (0x000528c5) bg_active_tab_pane_cp5_srt

0xae7b,	// (0x0005551d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xae7b,	// (0x0005551d) tabs_3_long_active_pane_srt_t1

0x897c,	// (0x0005301e) bg_active_tab_pane_g1_cp5_srt

0x88f2,	// (0x00052f94) bg_active_tab_pane_g2_cp5_srt

0x8985,	// (0x00053027) bg_active_tab_pane_g3_cp5_srt

0xae6d,	// (0x0005550f) navi_text_pane_srt_t1

0xae65,	// (0x00055507) navi_icon_pane_srt_g1

0x8e5d,	// (0x000534ff) midp_editing_number_pane_srt

0x8c99,	// (0x0005333b) midp_ticker_pane_srt

0x8e65,	// (0x00053507) midp_ticker_pane_srt_g1

0x8e6d,	// (0x0005350f) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x00059e31) midp_ticker_pane_srt_g

0x8e75,	// (0x00053517) midp_ticker_pane_srt_t1

0xae56,	// (0x000554f8) midp_editing_number_pane_t1_copy1

0x8ca1,	// (0x00053343) listscroll_midp_pane

0x8ca1,	// (0x00053343) midp_form_pane

0x8d0f,	// (0x000533b1) midp_info_popup_window_ParamLimits

0x8d0f,	// (0x000533b1) midp_info_popup_window

0x810e,	// (0x000527b0) bg_popup_sub_pane_cp50_ParamLimits

0x810e,	// (0x000527b0) bg_popup_sub_pane_cp50

0x9f61,	// (0x00054603) listscroll_midp_info_pane_ParamLimits

0x9f61,	// (0x00054603) listscroll_midp_info_pane

0x9f49,	// (0x000545eb) listscroll_form_midp_pane_ParamLimits

0x9f49,	// (0x000545eb) listscroll_form_midp_pane

0x9f55,	// (0x000545f7) scroll_bar_cp050

0x9f29,	// (0x000545cb) list_midp_pane

0xbb71,	// (0x00056213) signal_pane_g2_cp

0x9e63,	// (0x00054505) listscroll_midp_info_pane_t1_ParamLimits

0x9e63,	// (0x00054505) listscroll_midp_info_pane_t1

0x9e7b,	// (0x0005451d) listscroll_midp_info_pane_t2_ParamLimits

0x9e7b,	// (0x0005451d) listscroll_midp_info_pane_t2

0x9eb9,	// (0x0005455b) listscroll_midp_info_pane_t3_ParamLimits

0x9eb9,	// (0x0005455b) listscroll_midp_info_pane_t3

0x9ef3,	// (0x00054595) listscroll_midp_info_pane_t4_ParamLimits

0x9ef3,	// (0x00054595) listscroll_midp_info_pane_t4

0x0003,

0xf840,	// (0x00059ee2) listscroll_midp_info_pane_t_ParamLimits

0xf840,	// (0x00059ee2) listscroll_midp_info_pane_t

0x81d0,	// (0x00052872) scroll_pane_cp21

0x9e01,	// (0x000544a3) form_midp_field_choice_group_pane

0x9e0a,	// (0x000544ac) form_midp_field_text_pane

0x9e49,	// (0x000544eb) form_midp_field_time_pane

0x9e51,	// (0x000544f3) form_midp_gauge_slider_pane

0x9e5a,	// (0x000544fc) form_midp_gauge_wait_pane

0x6fe5,	// (0x00051687) form_midp_image_pane

0x5ed6,	// (0x00050578) list_single_midp_pane_ParamLimits

0x5ed6,	// (0x00050578) list_single_midp_pane

0x9db9,	// (0x0005445b) form_midp_field_text_pane_t1

0x9bab,	// (0x0005424d) input_focus_pane_cp050

0x9df0,	// (0x00054492) list_midp_form_text_pane

0x9d88,	// (0x0005442a) form_midp_field_choice_group_pane_t1

0x9d96,	// (0x00054438) input_focus_pane_cp051

0x9daa,	// (0x0005444c) list_midp_choice_pane

0x6fe5,	// (0x00051687) status_idle_pane

0x9d6c,	// (0x0005440e) form_midp_field_time_pane_t1

0x6fdb,	// (0x0005167d) wait_anim_pane_g2_copy1

0x9d7a,	// (0x0005441c) form_midp_field_time_pane_t2

0x0001,

0x8dbd,	// (0x0005345f) aid_navinavi_width_2_pane

0xf83b,	// (0x00059edd) form_midp_field_time_pane_t

0x6fe5,	// (0x00051687) input_focus_pane_cp052

0x6fe5,	// (0x00051687) bg_input_focus_pane_cp040

0x9d2c,	// (0x000543ce) form_midp_gauge_slider_pane_t1

0x9d3a,	// (0x000543dc) form_midp_gauge_slider_pane_t2

0x9d48,	// (0x000543ea) form_midp_gauge_slider_pane_t3

0x9d56,	// (0x000543f8) form_midp_gauge_slider_pane_t4

0x0003,

0xf832,	// (0x00059ed4) form_midp_gauge_slider_pane_t

0x9d64,	// (0x00054406) form_midp_slider_pane

0x70c5,	// (0x00051767) bg_input_focus_pane_cp041_ParamLimits

0x70c5,	// (0x00051767) bg_input_focus_pane_cp041

0x9cf9,	// (0x0005439b) form_midp_gauge_wait_pane_t1_ParamLimits

0x9cf9,	// (0x0005439b) form_midp_gauge_wait_pane_t1

0x9d0b,	// (0x000543ad) form_midp_gauge_wait_pane_t2_ParamLimits

0x9d0b,	// (0x000543ad) form_midp_gauge_wait_pane_t2

0x0001,

0xf82d,	// (0x00059ecf) form_midp_gauge_wait_pane_t_ParamLimits

0xf82d,	// (0x00059ecf) form_midp_gauge_wait_pane_t

0x9d1d,	// (0x000543bf) form_midp_wait_pane_ParamLimits

0x9d1d,	// (0x000543bf) form_midp_wait_pane

0x9cc3,	// (0x00054365) form_midp_image_pane_g1

0x9ccc,	// (0x0005436e) form_midp_image_pane_t1

0x9cdb,	// (0x0005437d) form_midp_image_pane_t2

0x9cea,	// (0x0005438c) form_midp_image_pane_t3

0x0002,

0xf826,	// (0x00059ec8) form_midp_image_pane_t

0x9cba,	// (0x0005435c) list_single_midp_pane_g1

0x5ec7,	// (0x00050569) list_single_midp_pane_t1

0x9c92,	// (0x00054334) list_midp_form_item_pane_ParamLimits

0x9c92,	// (0x00054334) list_midp_form_item_pane

0x8d65,	// (0x00053407) list_midp_form_item_pane_t1

0x8d74,	// (0x00053416) midp_ticker_pane_g1

0x8d80,	// (0x00053422) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x00059e17) midp_ticker_pane_g

0x8d8c,	// (0x0005342e) midp_ticker_pane_t1

0xb0a7,	// (0x00055749) midp_editing_number_pane_t1

0xb085,	// (0x00055727) midp_editing_number_pane

0xb094,	// (0x00055736) midp_ticker_pane

0xae46,	// (0x000554e8) ai_message_heading_pane

0x6fe5,	// (0x00051687) bg_popup_window_pane_cp14

0xae4e,	// (0x000554f0) listscroll_ai_message_pane

0xadd0,	// (0x00055472) ai_message_heading_pane_g1_ParamLimits

0xadd0,	// (0x00055472) ai_message_heading_pane_g1

0xaddc,	// (0x0005547e) ai_message_heading_pane_g2_ParamLimits

0xaddc,	// (0x0005547e) ai_message_heading_pane_g2

0xade8,	// (0x0005548a) ai_message_heading_pane_g3_ParamLimits

0xade8,	// (0x0005548a) ai_message_heading_pane_g3

0xadf4,	// (0x00055496) ai_message_heading_pane_g4_ParamLimits

0xadf4,	// (0x00055496) ai_message_heading_pane_g4

0x0003,

0xf967,	// (0x0005a009) ai_message_heading_pane_g_ParamLimits

0xf967,	// (0x0005a009) ai_message_heading_pane_g

0xae00,	// (0x000554a2) ai_message_heading_pane_t1_ParamLimits

0xae00,	// (0x000554a2) ai_message_heading_pane_t1

0xae1a,	// (0x000554bc) ai_message_heading_pane_t2_ParamLimits

0xae1a,	// (0x000554bc) ai_message_heading_pane_t2

0x0001,

0xf970,	// (0x0005a012) ai_message_heading_pane_t_ParamLimits

0xf970,	// (0x0005a012) ai_message_heading_pane_t

0xae2c,	// (0x000554ce) bg_popup_heading_pane_cp1_ParamLimits

0xae2c,	// (0x000554ce) bg_popup_heading_pane_cp1

0xadbe,	// (0x00055460) list_ai_message_pane_ParamLimits

0xadbe,	// (0x00055460) list_ai_message_pane

0x81d0,	// (0x00052872) scroll_pane_cp10

0xad5a,	// (0x000553fc) list_ai_message_pane_g1

0xad62,	// (0x00055404) list_ai_message_pane_g2

0x0001,

0xf944,	// (0x00059fe6) list_ai_message_pane_g

0xad6a,	// (0x0005540c) list_ai_message_pane_t1_ParamLimits

0xad6a,	// (0x0005540c) list_ai_message_pane_t1

0xad7f,	// (0x00055421) list_ai_message_pane_t2_ParamLimits

0xad7f,	// (0x00055421) list_ai_message_pane_t2

0xad94,	// (0x00055436) list_ai_message_pane_t3_ParamLimits

0xad94,	// (0x00055436) list_ai_message_pane_t3

0xada9,	// (0x0005544b) list_ai_message_pane_t4_ParamLimits

0xada9,	// (0x0005544b) list_ai_message_pane_t4

0x0003,

0xf949,	// (0x00059feb) list_ai_message_pane_t_ParamLimits

0xf949,	// (0x00059feb) list_ai_message_pane_t

0xad45,	// (0x000553e7) cell_ai_soft_ind_pane_ParamLimits

0xad45,	// (0x000553e7) cell_ai_soft_ind_pane

0x8d9e,	// (0x00053440) cell_ai_soft_ind_pane_g1_ParamLimits

0x8d9e,	// (0x00053440) cell_ai_soft_ind_pane_g1

0x6fe5,	// (0x00051687) grid_highlight_cp1

0x8dab,	// (0x0005344d) text_secondary_cp56_ParamLimits

0x8dab,	// (0x0005344d) text_secondary_cp56

0xad1a,	// (0x000553bc) example_general_pane_ParamLimits

0xad1a,	// (0x000553bc) example_general_pane

0xad26,	// (0x000553c8) example_parent_pane_g1_ParamLimits

0xad26,	// (0x000553c8) example_parent_pane_g1

0xad32,	// (0x000553d4) example_parent_pane_t1_ParamLimits

0xad32,	// (0x000553d4) example_parent_pane_t1

0x9380,	// (0x00053a22) popup_preview_text_window_ParamLimits

0x9380,	// (0x00053a22) popup_preview_text_window

0x8bca,	// (0x0005326c) list_single_pane_cp2_g4

0x7b1b,	// (0x000521bd) bg_popup_preview_window_pane_ParamLimits

0x7b1b,	// (0x000521bd) bg_popup_preview_window_pane

0xaa51,	// (0x000550f3) popup_preview_text_window_t1_ParamLimits

0xaa51,	// (0x000550f3) popup_preview_text_window_t1

0xaa6f,	// (0x00055111) popup_preview_text_window_t2_ParamLimits

0xaa6f,	// (0x00055111) popup_preview_text_window_t2

0xaab8,	// (0x0005515a) popup_preview_text_window_t3_ParamLimits

0xaab8,	// (0x0005515a) popup_preview_text_window_t3

0xaafd,	// (0x0005519f) popup_preview_text_window_t4_ParamLimits

0xaafd,	// (0x0005519f) popup_preview_text_window_t4

0x0004,

0xf918,	// (0x00059fba) popup_preview_text_window_t_ParamLimits

0xf918,	// (0x00059fba) popup_preview_text_window_t

0xab7b,	// (0x0005521d) scroll_pane_cp11

0x9abb,	// (0x0005415d) bg_popup_preview_window_pane_g1

0xaa11,	// (0x000550b3) bg_popup_preview_window_pane_g2

0xaa19,	// (0x000550bb) bg_popup_preview_window_pane_g3

0xaa21,	// (0x000550c3) bg_popup_preview_window_pane_g4

0xaa29,	// (0x000550cb) bg_popup_preview_window_pane_g5

0xaa31,	// (0x000550d3) bg_popup_preview_window_pane_g6

0xaa39,	// (0x000550db) bg_popup_preview_window_pane_g7

0xaa41,	// (0x000550e3) bg_popup_preview_window_pane_g8

0x4b36,	// (0x0004f1d8) aid_popup_width_pane

0x935e,	// (0x00053a00) popup_midp_note_alarm_window_ParamLimits

0x935e,	// (0x00053a00) popup_midp_note_alarm_window

0x804a,	// (0x000526ec) data_form_pane_ParamLimits

0x5528,	// (0x0004fbca) form_field_data_pane_g1

0x5532,	// (0x0004fbd4) form_field_data_pane_t1_ParamLimits

0x8056,	// (0x000526f8) input_focus_pane_ParamLimits

0x8064,	// (0x00052706) data_form_wide_pane_ParamLimits

0x554a,	// (0x0004fbec) form_field_data_wide_pane_g1

0x5556,	// (0x0004fbf8) form_field_data_wide_pane_t1_ParamLimits

0x7dc7,	// (0x00052469) input_focus_pane_cp6_ParamLimits

0x817d,	// (0x0005281f) input_popup_find_pane_g1_ParamLimits

0x817d,	// (0x0005281f) input_popup_find_pane_g1

0x57ce,	// (0x0004fe70) aid_navi_side_left_pane

0x57e3,	// (0x0004fe85) aid_navi_side_right_pane

0xa433,	// (0x00054ad5) bg_popup_window_pane_cp30_ParamLimits

0xa433,	// (0x00054ad5) bg_popup_window_pane_cp30

0xa4ad,	// (0x00054b4f) popup_midp_note_alarm_window_g1_ParamLimits

0xa4ad,	// (0x00054b4f) popup_midp_note_alarm_window_g1

0xa4dd,	// (0x00054b7f) popup_midp_note_alarm_window_t1_ParamLimits

0xa4dd,	// (0x00054b7f) popup_midp_note_alarm_window_t1

0xa57e,	// (0x00054c20) popup_midp_note_alarm_window_t2_ParamLimits

0xa57e,	// (0x00054c20) popup_midp_note_alarm_window_t2

0xa62c,	// (0x00054cce) popup_midp_note_alarm_window_t3_ParamLimits

0xa62c,	// (0x00054cce) popup_midp_note_alarm_window_t3

0xa65e,	// (0x00054d00) popup_midp_note_alarm_window_t4_ParamLimits

0xa65e,	// (0x00054d00) popup_midp_note_alarm_window_t4

0xa684,	// (0x00054d26) popup_midp_note_alarm_window_t5_ParamLimits

0xa684,	// (0x00054d26) popup_midp_note_alarm_window_t5

0x000a,

0xf8b5,	// (0x00059f57) popup_midp_note_alarm_window_t_ParamLimits

0xf8b5,	// (0x00059f57) popup_midp_note_alarm_window_t

0xa730,	// (0x00054dd2) wait_bar_pane_cp1_ParamLimits

0xa730,	// (0x00054dd2) wait_bar_pane_cp1

0x6fe5,	// (0x00051687) wait_anim_pane_copy1

0x6fe5,	// (0x00051687) wait_border_pane_copy1

0xa10a,	// (0x000547ac) wait_border_pane_g1_copy1

0x5570,	// (0x0004fc12) form_field_popup_pane_g1

0x5578,	// (0x0004fc1a) form_field_popup_pane_t1_ParamLimits

0x8056,	// (0x000526f8) input_focus_pane_cp7_ParamLimits

0x8090,	// (0x00052732) list_form_pane_ParamLimits

0x5590,	// (0x0004fc32) form_field_popup_wide_pane_g1

0x5598,	// (0x0004fc3a) form_field_popup_wide_pane_t1_ParamLimits

0x8056,	// (0x000526f8) input_focus_pane_cp8_ParamLimits

0x809c,	// (0x0005273e) list_form_wide_pane_ParamLimits

0xb1e1,	// (0x00055883) aid_size_cell_graphic_pane

0x5622,	// (0x0004fcc4) data_form_pane_t1_ParamLimits

0x6155,	// (0x000507f7) data_form_wide_pane_t1_ParamLimits

0x9661,	// (0x00053d03) bg_status_flat_pane

0x7025,	// (0x000516c7) title_pane_t1_ParamLimits

0x708d,	// (0x0005172f) title_pane_t2_ParamLimits

0x70b3,	// (0x00051755) title_pane_t3_ParamLimits

0xf573,	// (0x00059c15) title_pane_t_ParamLimits

0x865d,	// (0x00052cff) level_1_signal_ParamLimits

0x866a,	// (0x00052d0c) level_2_signal_ParamLimits

0x8677,	// (0x00052d19) level_3_signal_ParamLimits

0x8684,	// (0x00052d26) level_4_signal_ParamLimits

0x8691,	// (0x00052d33) level_5_signal_ParamLimits

0x869e,	// (0x00052d40) level_6_signal_ParamLimits

0x86ab,	// (0x00052d4d) level_7_signal_ParamLimits

0x865d,	// (0x00052cff) level_1_battery_ParamLimits

0x866a,	// (0x00052d0c) level_2_battery_ParamLimits

0x8677,	// (0x00052d19) level_3_battery_ParamLimits

0x8684,	// (0x00052d26) level_4_battery_ParamLimits

0x8691,	// (0x00052d33) level_5_battery_ParamLimits

0x869e,	// (0x00052d40) level_6_battery_ParamLimits

0x86ab,	// (0x00052d4d) level_7_battery_ParamLimits

0xa338,	// (0x000549da) bg_status_flat_pane_g1

0xa340,	// (0x000549e2) bg_status_flat_pane_g2

0xa348,	// (0x000549ea) bg_status_flat_pane_g3

0xa350,	// (0x000549f2) bg_status_flat_pane_g4

0xa358,	// (0x000549fa) bg_status_flat_pane_g5

0xa360,	// (0x00054a02) bg_status_flat_pane_g6

0xa368,	// (0x00054a0a) bg_status_flat_pane_g7

0x70db,	// (0x0005177d) tabs_3_active_pane_t1_ParamLimits

0x70db,	// (0x0005177d) tabs_3_passive_pane_t1_ParamLimits

0x70f5,	// (0x00051797) tabs_4_active_pane_t1_ParamLimits

0x70f5,	// (0x00051797) tabs_4_1_passive_pane_t1_ParamLimits

0x8211,	// (0x000528b3) tabs_2_active_pane_t1_ParamLimits

0x8211,	// (0x000528b3) tabs_2_passive_pane_t1_ParamLimits

0x8223,	// (0x000528c5) bg_active_tab_pane_cp4_ParamLimits

0x8231,	// (0x000528d3) tabs_2_long_active_pane_t1_ParamLimits

0x8244,	// (0x000528e6) bg_passive_tab_pane_cp4_ParamLimits

0x5e14,	// (0x000504b6) list_single_midp_graphic_pane_t1_ParamLimits

0x8223,	// (0x000528c5) bg_active_tab_pane_cp5_ParamLimits

0x8250,	// (0x000528f2) tabs_3_long_active_pane_t1_ParamLimits

0x8244,	// (0x000528e6) bg_passive_tab_pane_cp5_ParamLimits

0x5e14,	// (0x000504b6) list_single_midp_graphic_pane_t1

0x9661,	// (0x00053d03) bg_status_flat_pane_ParamLimits

0x9724,	// (0x00053dc6) indicator_pane_cp2_ParamLimits

0x9724,	// (0x00053dc6) indicator_pane_cp2

0x986a,	// (0x00053f0c) navi_pane_srt_ParamLimits

0x986a,	// (0x00053f0c) navi_pane_srt

0x988e,	// (0x00053f30) popup_clock_digital_analogue_window_cp1

0x71a2,	// (0x00051844) indicator_pane_t1

0x8c99,	// (0x0005333b) copy_highlight_pane

0x8c99,	// (0x0005333b) cursor_graphics_pane

0x8c99,	// (0x0005333b) graphic_within_text_pane

0x8c99,	// (0x0005333b) link_highlight_pane

0xab3e,	// (0x000551e0) popup_preview_text_window_t5_ParamLimits

0xab3e,	// (0x000551e0) popup_preview_text_window_t5

0x8dc5,	// (0x00053467) cursor_digital_pane

0x8dc5,	// (0x00053467) cursor_primary_pane

0x8dd6,	// (0x00053478) cursor_primary_small_pane

0x8dde,	// (0x00053480) cursor_secondary_pane

0x8de6,	// (0x00053488) cursor_title_pane

0x8dc5,	// (0x00053467) link_highlight_digital_pane

0x8dcd,	// (0x0005346f) link_highlight_primary_pane

0x8dd6,	// (0x00053478) link_highlight_primary_small_pane

0x8dde,	// (0x00053480) link_highlight_secondary_pane

0x8de6,	// (0x00053488) link_highlight_title_pane

0x8dc5,	// (0x00053467) copy_highlight_digital_pane

0x8dc5,	// (0x00053467) copy_highlight_primary_pane

0x8dd6,	// (0x00053478) copy_highlight_primary_small_pane

0x8dde,	// (0x00053480) copy_highlight_secondary_pane

0x8de6,	// (0x00053488) copy_highlight_title_pane

0x8dde,	// (0x00053480) graphic_text_digital_pane

0xa3d6,	// (0x00054a78) graphic_text_primary_pane

0xa3df,	// (0x00054a81) graphic_text_primary_small_pane

0x8dd6,	// (0x00053478) graphic_text_secondary_pane

0x8dc5,	// (0x00053467) graphic_text_title_pane

0x8dee,	// (0x00053490) cursor_primary_pane_g1

0xa3c8,	// (0x00054a6a) cursor_text_primary_t1

0xa3b0,	// (0x00054a52) cursor_primary_small_pane_g1

0xa3ba,	// (0x00054a5c) cursor_text_primary_small_t1

0xa398,	// (0x00054a3a) cursor_primary_small_pane_g1_copy1

0xa3a2,	// (0x00054a44) cursor_text_primary_small_t1_copy1

0xa380,	// (0x00054a22) cursor_text_title_t1

0xa38e,	// (0x00054a30) cursor_title_pane_g1

0x8dee,	// (0x00053490) cursor_digital_pane_g1

0x8df8,	// (0x0005349a) cursor_text_digital_t1

0x8e1d,	// (0x000534bf) link_highlight_primary_pane_g1

0xa329,	// (0x000549cb) link_highlight_primary_pane_t1

0x8e06,	// (0x000534a8) link_highlight_primary_small_pane_g1

0x8e0e,	// (0x000534b0) link_highlight_primary_small_pane_t1

0x8e1d,	// (0x000534bf) link_highlight_secondary_pane_g1

0x8e25,	// (0x000534c7) link_highlight_secondary_pane_t1

0xa29d,	// (0x0005493f) link_highlight_title_pane_g1

0xa2a5,	// (0x00054947) link_highlight_title_pane_t1

0xa286,	// (0x00054928) link_highlight_digital_pane_g1

0xa28e,	// (0x00054930) link_highlight_digital_pane_t1

0xa15e,	// (0x00054800) copy_highlight_primary_pane_g1

0xa166,	// (0x00054808) copy_highlight_primary_pane_t1

0xa129,	// (0x000547cb) copy_highlight_primary_small_pane_g1

0xa14f,	// (0x000547f1) copy_highlight_primary_small_pane_t1

0x8e34,	// (0x000534d6) copy_highlight_secondary_pane_g1

0x8e3c,	// (0x000534de) copy_highlight_secondary_pane_t1

0xa129,	// (0x000547cb) copy_highlight_title_pane_g1

0xa131,	// (0x000547d3) copy_highlight_title_pane_t1

0xa15e,	// (0x00054800) copy_highlight_digital_pane_g1

0xb3ab,	// (0x00055a4d) copy_highlight_digital_pane_t1

0xb2ff,	// (0x000559a1) graphic_text_primary_pane_g1

0xb38f,	// (0x00055a31) graphic_text_primary_pane_t1

0xb39d,	// (0x00055a3f) graphic_text_primary_pane_t2

0x0001,

0xf9e4,	// (0x0005a086) graphic_text_primary_pane_t

0xb36b,	// (0x00055a0d) graphic_text_primary_small_pane_g1

0xb373,	// (0x00055a15) graphic_text_primary_small_pane_t1

0xb381,	// (0x00055a23) graphic_text_primary_small_pane_t2

0x0001,

0xf9df,	// (0x0005a081) graphic_text_primary_small_pane_t

0xb347,	// (0x000559e9) graphic_text_secondary_pane_g1

0xb34f,	// (0x000559f1) graphic_text_secondary_pane_t1

0xb35d,	// (0x000559ff) graphic_text_secondary_pane_t2

0x0001,

0xf9da,	// (0x0005a07c) graphic_text_secondary_pane_t

0xb323,	// (0x000559c5) graphic_text_title_pane_g1

0xb32b,	// (0x000559cd) graphic_text_title_pane_t1

0xb339,	// (0x000559db) graphic_text_title_pane_t2

0x0001,

0xf9d5,	// (0x0005a077) graphic_text_title_pane_t

0xb2ff,	// (0x000559a1) graphic_text_digital_pane_g1

0xb307,	// (0x000559a9) graphic_text_digital_pane_t1

0xb315,	// (0x000559b7) graphic_text_digital_pane_t2

0x0001,

0xf9d0,	// (0x0005a072) graphic_text_digital_pane_t

0x70c5,	// (0x00051767) navi_icon_pane_srt_ParamLimits

0x70c5,	// (0x00051767) navi_icon_pane_srt

0x6fe5,	// (0x00051687) navi_midp_pane_srt

0x6fe5,	// (0x00051687) navi_navi_pane_srt

0x70c5,	// (0x00051767) navi_text_pane_srt_ParamLimits

0x70c5,	// (0x00051767) navi_text_pane_srt

0xb2ca,	// (0x0005596c) navi_navi_icon_text_pane_srt

0xb2d2,	// (0x00055974) navi_navi_pane_srt_g1_ParamLimits

0xb2d2,	// (0x00055974) navi_navi_pane_srt_g1

0xb2e4,	// (0x00055986) navi_navi_pane_srt_g2_ParamLimits

0xb2e4,	// (0x00055986) navi_navi_pane_srt_g2

0x0001,

0xf9cb,	// (0x0005a06d) navi_navi_pane_srt_g_ParamLimits

0xf9cb,	// (0x0005a06d) navi_navi_pane_srt_g

0xb2f6,	// (0x00055998) navi_navi_tabs_pane_srt

0xb2ca,	// (0x0005596c) navi_navi_text_pane_srt

0xb2ca,	// (0x0005596c) navi_navi_volume_pane_srt

0xb2bb,	// (0x0005595d) navi_navi_text_pane_srt_t1

0x6269,	// (0x0005090b) navi_navi_volume_pane_srt_g1

0x6271,	// (0x00050913) volume_small_pane_srt_ParamLimits

0x6271,	// (0x00050913) volume_small_pane_srt

0x5b38,	// (0x000501da) volume_small_pane_srt_g1_ParamLimits

0x5b38,	// (0x000501da) volume_small_pane_srt_g1

0x5b48,	// (0x000501ea) volume_small_pane_srt_g2_ParamLimits

0x5b48,	// (0x000501ea) volume_small_pane_srt_g2

0x5b59,	// (0x000501fb) volume_small_pane_srt_g3_ParamLimits

0x5b59,	// (0x000501fb) volume_small_pane_srt_g3

0x5b6a,	// (0x0005020c) volume_small_pane_srt_g4_ParamLimits

0x5b6a,	// (0x0005020c) volume_small_pane_srt_g4

0x5b7b,	// (0x0005021d) volume_small_pane_srt_g5_ParamLimits

0x5b7b,	// (0x0005021d) volume_small_pane_srt_g5

0x5b8c,	// (0x0005022e) volume_small_pane_srt_g6_ParamLimits

0x5b8c,	// (0x0005022e) volume_small_pane_srt_g6

0x5b9d,	// (0x0005023f) volume_small_pane_srt_g7_ParamLimits

0x5b9d,	// (0x0005023f) volume_small_pane_srt_g7

0x5bae,	// (0x00050250) volume_small_pane_srt_g8_ParamLimits

0x5bae,	// (0x00050250) volume_small_pane_srt_g8

0x5bbf,	// (0x00050261) volume_small_pane_srt_g9_ParamLimits

0x5bbf,	// (0x00050261) volume_small_pane_srt_g9

0x5bd0,	// (0x00050272) volume_small_pane_srt_g10_ParamLimits

0x5bd0,	// (0x00050272) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x00059e1c) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x00059e1c) volume_small_pane_srt_g

0x7bc4,	// (0x00052266) query_popup_data_pane_cp2

0xb2a1,	// (0x00055943) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb2a1,	// (0x00055943) navi_navi_icon_text_pane_srt_t1

0xa3d6,	// (0x00054a78) navi_tabs_2_long_pane_srt

0xa3d6,	// (0x00054a78) navi_tabs_2_pane_srt

0xa3d6,	// (0x00054a78) navi_tabs_3_long_pane_srt

0xa3d6,	// (0x00054a78) navi_tabs_3_pane_srt

0xa3d6,	// (0x00054a78) navi_tabs_4_pane_srt

0x6249,	// (0x000508eb) tabs_2_active_pane_srt_ParamLimits

0x6249,	// (0x000508eb) tabs_2_active_pane_srt

0x6259,	// (0x000508fb) tabs_2_passive_pane_srt_ParamLimits

0x6259,	// (0x000508fb) tabs_2_passive_pane_srt

0x8ff7,	// (0x00053699) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8ff7,	// (0x00053699) bg_passive_tab_pane_cp1_srt

0xb26d,	// (0x0005590f) bg_passive_tab_pane_g1_cp1_srt

0x88f2,	// (0x00052f94) bg_passive_tab_pane_g2_cp1_srt

0xb276,	// (0x00055918) bg_passive_tab_pane_g3_cp1_srt

0x70c5,	// (0x00051767) bg_active_tab_pane_cp1_srt_ParamLimits

0x70c5,	// (0x00051767) bg_active_tab_pane_cp1_srt

0xb27f,	// (0x00055921) tabs_2_active_pane_srt_g1

0xb287,	// (0x00055929) tabs_2_active_pane_srt_t1_ParamLimits

0xb287,	// (0x00055929) tabs_2_active_pane_srt_t1

0xb26d,	// (0x0005590f) bg_active_tab_pane_g1_cp1_srt

0x88f2,	// (0x00052f94) bg_active_tab_pane_g2_cp1_srt

0xb276,	// (0x00055918) bg_active_tab_pane_g3_cp1_srt

0x6216,	// (0x000508b8) tabs_3_active_pane_srt_ParamLimits

0x6216,	// (0x000508b8) tabs_3_active_pane_srt

0x6227,	// (0x000508c9) tabs_3_passive_pane_cp_srt_ParamLimits

0x6227,	// (0x000508c9) tabs_3_passive_pane_cp_srt

0x6238,	// (0x000508da) tabs_3_passive_pane_srt_ParamLimits

0x6238,	// (0x000508da) tabs_3_passive_pane_srt

0x8ff7,	// (0x00053699) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8ff7,	// (0x00053699) bg_passive_tab_pane_cp2_srt

0x8e4b,	// (0x000534ed) bg_passive_tab_pane_g1_cp2_srt

0x88f2,	// (0x00052f94) bg_passive_tab_pane_g2_cp2_srt

0x8e54,	// (0x000534f6) bg_passive_tab_pane_g3_cp2_srt

0x70c5,	// (0x00051767) bg_active_tab_pane_cp2_srt_ParamLimits

0x70c5,	// (0x00051767) bg_active_tab_pane_cp2_srt

0xb253,	// (0x000558f5) tabs_3_active_pane_srt_g1

0xb25b,	// (0x000558fd) tabs_3_active_pane_srt_t1_ParamLimits

0xb25b,	// (0x000558fd) tabs_3_active_pane_srt_t1

0x8e4b,	// (0x000534ed) bg_active_tab_pane_g1_cp2_srt

0x88f2,	// (0x00052f94) bg_active_tab_pane_g2_cp2_srt

0x8e54,	// (0x000534f6) bg_active_tab_pane_g3_cp2_srt

0x61ce,	// (0x00050870) tabs_4_active_pane_srt_ParamLimits

0x61ce,	// (0x00050870) tabs_4_active_pane_srt

0x61e0,	// (0x00050882) tabs_4_passive_pane_cp2_srt_ParamLimits

0x61e0,	// (0x00050882) tabs_4_passive_pane_cp2_srt

0x8fa9,	// (0x0005364b) aid_size_cell_toolbar

0x8244,	// (0x000528e6) main_idle_act_pane_ParamLimits

0x9194,	// (0x00053836) popup_large_graphic_colour_window_ParamLimits

0x94fb,	// (0x00053b9d) popup_toolbar_window_ParamLimits

0x94fb,	// (0x00053b9d) popup_toolbar_window

0xb0b6,	// (0x00055758) list_single_graphic_2heading_pane_ParamLimits

0xb0b6,	// (0x00055758) list_single_graphic_2heading_pane

0x840c,	// (0x00052aae) aid_size_cell_apps_grid_lsc_pane

0x841e,	// (0x00052ac0) aid_size_cell_apps_grid_prt_pane

0x8ff7,	// (0x00053699) bg_wml_button_pane_cp1_ParamLimits

0x8ff7,	// (0x00053699) bg_wml_button_pane_cp1

0x9db9,	// (0x0005445b) form_midp_field_text_pane_t1_ParamLimits

0x9bab,	// (0x0005424d) input_focus_pane_cp050_ParamLimits

0x9df0,	// (0x00054492) list_midp_form_text_pane_ParamLimits

0x9d96,	// (0x00054438) input_focus_pane_cp051_ParamLimits

0x9daa,	// (0x0005444c) list_midp_choice_pane_ParamLimits

0x9c3c,	// (0x000542de) list_single_2graphic_pane_cp3_ParamLimits

0x9c3c,	// (0x000542de) list_single_2graphic_pane_cp3

0x9c60,	// (0x00054302) list_single_midp_graphic_pane_ParamLimits

0x9c60,	// (0x00054302) list_single_midp_graphic_pane

0x4abe,	// (0x0004f160) list_single_graphic_2heading_pane_g1_ParamLimits

0x4abe,	// (0x0004f160) list_single_graphic_2heading_pane_g1

0x4aca,	// (0x0004f16c) list_single_graphic_2heading_pane_g4_ParamLimits

0x4aca,	// (0x0004f16c) list_single_graphic_2heading_pane_g4

0x4ad6,	// (0x0004f178) list_single_graphic_2heading_pane_g5_ParamLimits

0x4ad6,	// (0x0004f178) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x00059e6f) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x00059e6f) list_single_graphic_2heading_pane_g

0x4ae2,	// (0x0004f184) list_single_graphic_2heading_pane_t1_ParamLimits

0x4ae2,	// (0x0004f184) list_single_graphic_2heading_pane_t1

0x4af6,	// (0x0004f198) list_single_graphic_2heading_pane_t2_ParamLimits

0x4af6,	// (0x0004f198) list_single_graphic_2heading_pane_t2

0x4b12,	// (0x0004f1b4) list_single_graphic_2heading_pane_t3_ParamLimits

0x4b12,	// (0x0004f1b4) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x00059e76) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x00059e76) list_single_graphic_2heading_pane_t

0x99ed,	// (0x0005408f) bg_popup_sub_pane_cp2

0x9a17,	// (0x000540b9) grid_toobar_pane

0x5d37,	// (0x000503d9) cell_toolbar_pane_ParamLimits

0x5d37,	// (0x000503d9) cell_toolbar_pane

0x9a5f,	// (0x00054101) cell_toolbar_pane_g1_ParamLimits

0x9a5f,	// (0x00054101) cell_toolbar_pane_g1

0x9a73,	// (0x00054115) cell_toolbar_pane_g2_ParamLimits

0x9a73,	// (0x00054115) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x00059e84) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x00059e84) cell_toolbar_pane_g

0x9a95,	// (0x00054137) grid_highlight_pane_cp2_ParamLimits

0x9a95,	// (0x00054137) grid_highlight_pane_cp2

0x9aaf,	// (0x00054151) toolbar_button_pane

0x9abb,	// (0x0005415d) toolbar_button_pane_g1

0x9ac3,	// (0x00054165) toolbar_button_pane_g2

0x9acb,	// (0x0005416d) toolbar_button_pane_g3

0x9ad3,	// (0x00054175) toolbar_button_pane_g4

0x9adb,	// (0x0005417d) toolbar_button_pane_g5

0x9ae3,	// (0x00054185) toolbar_button_pane_g6

0x9aeb,	// (0x0005418d) toolbar_button_pane_g7

0x9af3,	// (0x00054195) toolbar_button_pane_g8

0x9afb,	// (0x0005419d) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x00059e89) toolbar_button_pane_g

0x5d91,	// (0x00050433) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5d91,	// (0x00050433) list_single_2graphic_pane_g1_cp3

0x5d9d,	// (0x0005043f) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5d9d,	// (0x0005043f) list_single_2graphic_pane_g2_cp3

0x5dae,	// (0x00050450) list_single_2graphic_pane_g3_cp3

0x5db6,	// (0x00050458) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5db6,	// (0x00050458) list_single_2graphic_pane_g4_cp3

0x5dc2,	// (0x00050464) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5dc2,	// (0x00050464) list_single_2graphic_pane_t1_cp3

0x5e08,	// (0x000504aa) list_single_midp_graphic_pane_g2_ParamLimits

0x5e08,	// (0x000504aa) list_single_midp_graphic_pane_g2

0x5d27,	// (0x000503c9) aid_zoom_text_primary

0x72ec,	// (0x0005198e) aid_zoom_text_secondary

0x8f08,	// (0x000535aa) status_small_pane_g7_ParamLimits

0x8f08,	// (0x000535aa) status_small_pane_g7

0x8f2b,	// (0x000535cd) status_small_pane_t1_ParamLimits

0x6ffc,	// (0x0005169e) title_pane_g2

0x0003,

0xf56a,	// (0x00059c0c) title_pane_g

0x7c65,	// (0x00052307) aid_size_cell_colour_1_pane_ParamLimits

0x7c65,	// (0x00052307) aid_size_cell_colour_1_pane

0x7c79,	// (0x0005231b) aid_size_cell_colour_2_pane_ParamLimits

0x7c79,	// (0x0005231b) aid_size_cell_colour_2_pane

0x7c8d,	// (0x0005232f) aid_size_cell_colour_3_pane_ParamLimits

0x7c8d,	// (0x0005232f) aid_size_cell_colour_3_pane

0x7ca1,	// (0x00052343) aid_size_cell_colour_4_pane_ParamLimits

0x7ca1,	// (0x00052343) aid_size_cell_colour_4_pane

0x570a,	// (0x0004fdac) title_pane_stacon_g1_ParamLimits

0x570a,	// (0x0004fdac) title_pane_stacon_g1

0xa1bd,	// (0x0005485f) popup_note_wait_window_g3_ParamLimits

0xa1bd,	// (0x0005485f) popup_note_wait_window_g3

0xa233,	// (0x000548d5) popup_note_wait_window_t5_ParamLimits

0xa233,	// (0x000548d5) popup_note_wait_window_t5

0x6fe5,	// (0x00051687) main_feb_china_hwr_fs_writing_pane

0x9079,	// (0x0005371b) popup_feb_china_hwr_fs_window_ParamLimits

0x9079,	// (0x0005371b) popup_feb_china_hwr_fs_window

0x5e2a,	// (0x000504cc) aid_size_cell_hwr_fs_ParamLimits

0x5e2a,	// (0x000504cc) aid_size_cell_hwr_fs

0x9bab,	// (0x0005424d) bg_popup_sub_pane_cp3_ParamLimits

0x9bab,	// (0x0005424d) bg_popup_sub_pane_cp3

0x5e3f,	// (0x000504e1) grid_hwr_fs_pane_ParamLimits

0x5e3f,	// (0x000504e1) grid_hwr_fs_pane

0x5e57,	// (0x000504f9) linegrid_hwr_fs_pane_ParamLimits

0x5e57,	// (0x000504f9) linegrid_hwr_fs_pane

0x5e67,	// (0x00050509) cell_hwr_fs_pane_ParamLimits

0x5e67,	// (0x00050509) cell_hwr_fs_pane

0x9bb7,	// (0x00054259) linegrid_hwr_fs_pane_g1_ParamLimits

0x9bb7,	// (0x00054259) linegrid_hwr_fs_pane_g1

0x9bc3,	// (0x00054265) linegrid_hwr_fs_pane_g2_ParamLimits

0x9bc3,	// (0x00054265) linegrid_hwr_fs_pane_g2

0x9bd5,	// (0x00054277) linegrid_hwr_fs_pane_g3_ParamLimits

0x9bd5,	// (0x00054277) linegrid_hwr_fs_pane_g3

0x5e89,	// (0x0005052b) linegrid_hwr_fs_pane_g4_ParamLimits

0x5e89,	// (0x0005052b) linegrid_hwr_fs_pane_g4

0x5ea3,	// (0x00050545) linegrid_hwr_fs_pane_g5_ParamLimits

0x5ea3,	// (0x00050545) linegrid_hwr_fs_pane_g5

0x0004,

0xf812,	// (0x00059eb4) linegrid_hwr_fs_pane_g_ParamLimits

0xf812,	// (0x00059eb4) linegrid_hwr_fs_pane_g

0x9be1,	// (0x00054283) cell_hwr_fs_pane_g1_ParamLimits

0x9be1,	// (0x00054283) cell_hwr_fs_pane_g1

0x9924,	// (0x00053fc6) cell_hwr_fs_pane_g2_ParamLimits

0x9924,	// (0x00053fc6) cell_hwr_fs_pane_g2

0x9bf7,	// (0x00054299) cell_hwr_fs_pane_g3_ParamLimits

0x9bf7,	// (0x00054299) cell_hwr_fs_pane_g3

0x9c04,	// (0x000542a6) cell_hwr_fs_pane_g4_ParamLimits

0x9c04,	// (0x000542a6) cell_hwr_fs_pane_g4

0x0003,

0xf81d,	// (0x00059ebf) cell_hwr_fs_pane_g_ParamLimits

0xf81d,	// (0x00059ebf) cell_hwr_fs_pane_g

0x5eb9,	// (0x0005055b) cell_hwr_fs_pane_t1

0x6fe5,	// (0x00051687) grid_highlight_pane_cp6

0x6fe5,	// (0x00051687) main_idle_act2_pane

0x81b7,	// (0x00052859) aid_inside_area_popup_secondary

0xa86a,	// (0x00054f0c) aid_inside_area_window_primary_ParamLimits

0xa86a,	// (0x00054f0c) aid_inside_area_window_primary

0xb3ba,	// (0x00055a5c) ai2_news_ticker_pane

0xb3c2,	// (0x00055a64) aid_size_cell_ai1_link_ParamLimits

0xb3c2,	// (0x00055a64) aid_size_cell_ai1_link

0xb3dc,	// (0x00055a7e) popup_ai2_data_window_ParamLimits

0xb3dc,	// (0x00055a7e) popup_ai2_data_window

0xb3f2,	// (0x00055a94) popup_ai2_link_window_ParamLimits

0xb3f2,	// (0x00055a94) popup_ai2_link_window

0x9bab,	// (0x0005424d) bg_popup_sub_pane_cp4_ParamLimits

0x9bab,	// (0x0005424d) bg_popup_sub_pane_cp4

0xb406,	// (0x00055aa8) grid_ai2_link_pane_ParamLimits

0xb406,	// (0x00055aa8) grid_ai2_link_pane

0xb41d,	// (0x00055abf) popup_ai2_link_window_g1_ParamLimits

0xb41d,	// (0x00055abf) popup_ai2_link_window_g1

0xb429,	// (0x00055acb) popup_ai2_link_window_g2_ParamLimits

0xb429,	// (0x00055acb) popup_ai2_link_window_g2

0x0001,

0xf9e9,	// (0x0005a08b) popup_ai2_link_window_g_ParamLimits

0xf9e9,	// (0x0005a08b) popup_ai2_link_window_g

0xb438,	// (0x00055ada) ai2_mp_button_pane

0xb440,	// (0x00055ae2) ai2_mp_volume_pane

0x9d96,	// (0x00054438) bg_popup_sub_pane_cp5_ParamLimits

0x9d96,	// (0x00054438) bg_popup_sub_pane_cp5

0xb448,	// (0x00055aea) heading_ai2_gene_pane_ParamLimits

0xb448,	// (0x00055aea) heading_ai2_gene_pane

0xb454,	// (0x00055af6) list_ai2_gene_pane_ParamLimits

0xb454,	// (0x00055af6) list_ai2_gene_pane

0xb49c,	// (0x00055b3e) cell_ai2_link_pane_ParamLimits

0xb49c,	// (0x00055b3e) cell_ai2_link_pane

0xb4b2,	// (0x00055b54) cell_ai2_link_pane_g1

0x6fe5,	// (0x00051687) grid_highlight_pane_cp7

0x6286,	// (0x00050928) ai2_mp_volume_pane_g1

0xb582,	// (0x00055c24) ai2_mp_volume_pane_g2

0xb4f7,	// (0x00055b99) list_ai2_gene_pane_t1

0xb58a,	// (0x00055c2c) ai2_mp_volume_pane_g3

0x0002,

0xfa02,	// (0x0005a0a4) ai2_mp_volume_pane_g

0x628e,	// (0x00050930) volume_small_pane_cp3

0xb592,	// (0x00055c34) aid_size_cell_ai2_button

0xb59a,	// (0x00055c3c) grid_ai2_button_pane

0xb5a3,	// (0x00055c45) cell_ai2_button_pane_ParamLimits

0xb5a3,	// (0x00055c45) cell_ai2_button_pane

0x6fdb,	// (0x0005167d) cell_ai2_button_pane_g1

0x6fe5,	// (0x00051687) grid_highlight_pane_cp8

0xb542,	// (0x00055be4) ai2_gene_pane_t1_ParamLimits

0xb542,	// (0x00055be4) ai2_gene_pane_t1

0x8f9f,	// (0x00053641) aid_height_parent_landscape

0xaeed,	// (0x0005558f) aid_height_set_list

0xaefe,	// (0x000555a0) aid_size_parent

0xb1e1,	// (0x00055883) aid_size_cell_graphic_pane_ParamLimits

0xb464,	// (0x00055b06) popup_ai2_data_window_g1_ParamLimits

0xb464,	// (0x00055b06) popup_ai2_data_window_g1

0xb470,	// (0x00055b12) ai2_news_ticker_pane_g1

0xb478,	// (0x00055b1a) ai2_news_ticker_pane_g2

0x0001,

0xf9ee,	// (0x0005a090) ai2_news_ticker_pane_g

0xb480,	// (0x00055b22) ai2_news_ticker_pane_t1

0xb48e,	// (0x00055b30) ai2_news_ticker_pane_t2

0x0001,

0xf9f3,	// (0x0005a095) ai2_news_ticker_pane_t

0xb4bb,	// (0x00055b5d) heading_ai2_gene_pane_g1

0xb4c3,	// (0x00055b65) heading_ai2_gene_pane_t1_ParamLimits

0xb4c3,	// (0x00055b65) heading_ai2_gene_pane_t1

0xb4d8,	// (0x00055b7a) list_highlight_pane_cp6

0xb4e0,	// (0x00055b82) ai2_gene_pane_ParamLimits

0xb4e0,	// (0x00055b82) ai2_gene_pane

0xb505,	// (0x00055ba7) list_ai2_gene_pane_t2

0x0001,

0xf9f8,	// (0x0005a09a) list_ai2_gene_pane_t

0xb513,	// (0x00055bb5) list_highlight_pane_cp8_ParamLimits

0xb513,	// (0x00055bb5) list_highlight_pane_cp8

0xb524,	// (0x00055bc6) ai2_gene_pane_g1_ParamLimits

0xb524,	// (0x00055bc6) ai2_gene_pane_g1

0xb536,	// (0x00055bd8) ai2_gene_pane_g2_ParamLimits

0xb536,	// (0x00055bd8) ai2_gene_pane_g2

0x0001,

0xf9fd,	// (0x0005a09f) ai2_gene_pane_g_ParamLimits

0xf9fd,	// (0x0005a09f) ai2_gene_pane_g

0x7fec,	// (0x0005268e) scroll_pane_cp12

0x5ce6,	// (0x00050388) control_pane_t3_ParamLimits

0x5ce6,	// (0x00050388) control_pane_t3

0x8f1c,	// (0x000535be) status_small_pane_g8_ParamLimits

0x8f1c,	// (0x000535be) status_small_pane_g8

0x915f,	// (0x00053801) popup_find_window_ParamLimits

0x9372,	// (0x00053a14) popup_note_image_window_ParamLimits

0x5d67,	// (0x00050409) list_double2_graphic_pane_vc_g1_ParamLimits

0x5d67,	// (0x00050409) list_double2_graphic_pane_vc_g1

0x9a53,	// (0x000540f5) list_double2_graphic_pane_vc_g2_ParamLimits

0x9a53,	// (0x000540f5) list_double2_graphic_pane_vc_g2

0x7310,	// (0x000519b2) list_double2_graphic_pane_vc_g3_ParamLimits

0x7310,	// (0x000519b2) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x00059e7d) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x00059e7d) list_double2_graphic_pane_vc_g

0x5d73,	// (0x00050415) list_double2_graphic_pane_vc_t1_ParamLimits

0x5d73,	// (0x00050415) list_double2_graphic_pane_vc_t1

0x9a53,	// (0x000540f5) list_single_heading_pane_vc_g1_ParamLimits

0x9a53,	// (0x000540f5) list_single_heading_pane_vc_g1

0x7310,	// (0x000519b2) list_single_heading_pane_vc_g2_ParamLimits

0x7310,	// (0x000519b2) list_single_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x00059e9e) list_single_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x00059e9e) list_single_heading_pane_vc_g

0x5dde,	// (0x00050480) list_single_heading_pane_vc_t1_ParamLimits

0x5dde,	// (0x00050480) list_single_heading_pane_vc_t1

0x5df4,	// (0x00050496) list_single_heading_pane_vc_t2_ParamLimits

0x5df4,	// (0x00050496) list_single_heading_pane_vc_t2

0x0001,

0xf801,	// (0x00059ea3) list_single_heading_pane_vc_t_ParamLimits

0xf801,	// (0x00059ea3) list_single_heading_pane_vc_t

0x9b03,	// (0x000541a5) list_setting_number_pane_vc_g1_ParamLimits

0x9b03,	// (0x000541a5) list_setting_number_pane_vc_g1

0x9b0f,	// (0x000541b1) list_setting_number_pane_vc_g2_ParamLimits

0x9b0f,	// (0x000541b1) list_setting_number_pane_vc_g2

0x0001,

0xf806,	// (0x00059ea8) list_setting_number_pane_vc_g_ParamLimits

0xf806,	// (0x00059ea8) list_setting_number_pane_vc_g

0x9b1b,	// (0x000541bd) list_setting_number_pane_vc_t1_ParamLimits

0x9b1b,	// (0x000541bd) list_setting_number_pane_vc_t1

0x9b2f,	// (0x000541d1) list_setting_number_pane_vc_t2_ParamLimits

0x9b2f,	// (0x000541d1) list_setting_number_pane_vc_t2

0x9b4b,	// (0x000541ed) list_setting_number_pane_vc_t3_ParamLimits

0x9b4b,	// (0x000541ed) list_setting_number_pane_vc_t3

0x0002,

0xf80b,	// (0x00059ead) list_setting_number_pane_vc_t_ParamLimits

0xf80b,	// (0x00059ead) list_setting_number_pane_vc_t

0x9b71,	// (0x00054213) set_value_pane_vc_ParamLimits

0x9b71,	// (0x00054213) set_value_pane_vc

0xb0b6,	// (0x00055758) list_double2_graphic_pane_vc_ParamLimits

0xb0b6,	// (0x00055758) list_double2_graphic_pane_vc

0x731c,	// (0x000519be) list_double2_large_graphic_pane_vc_ParamLimits

0x731c,	// (0x000519be) list_double2_large_graphic_pane_vc

0xb0b6,	// (0x00055758) list_double2_pane_vc_ParamLimits

0xb0b6,	// (0x00055758) list_double2_pane_vc

0xb0b6,	// (0x00055758) list_double_graphic_heading_pane_vc_ParamLimits

0xb0b6,	// (0x00055758) list_double_graphic_heading_pane_vc

0xb0b6,	// (0x00055758) list_double_graphic_pane_vc_ParamLimits

0xb0b6,	// (0x00055758) list_double_graphic_pane_vc

0xb0b6,	// (0x00055758) list_double_heading_pane_vc_ParamLimits

0xb0b6,	// (0x00055758) list_double_heading_pane_vc

0x731c,	// (0x000519be) list_double_large_graphic_pane_vc_ParamLimits

0x731c,	// (0x000519be) list_double_large_graphic_pane_vc

0xb0b6,	// (0x00055758) list_double_number_pane_vc_ParamLimits

0xb0b6,	// (0x00055758) list_double_number_pane_vc

0xb0b6,	// (0x00055758) list_double_pane_vc_ParamLimits

0xb0b6,	// (0x00055758) list_double_pane_vc

0xb0b6,	// (0x00055758) list_double_time_pane_vc_ParamLimits

0xb0b6,	// (0x00055758) list_double_time_pane_vc

0xb0b6,	// (0x00055758) list_setting_number_pane_vc_ParamLimits

0xb0b6,	// (0x00055758) list_setting_number_pane_vc

0xb0b6,	// (0x00055758) list_setting_pane_vc_ParamLimits

0xb0b6,	// (0x00055758) list_setting_pane_vc

0xb0b6,	// (0x00055758) list_single_graphic_heading_pane_vc_ParamLimits

0xb0b6,	// (0x00055758) list_single_graphic_heading_pane_vc

0xb0b6,	// (0x00055758) list_single_heading_pane_vc_ParamLimits

0xb0b6,	// (0x00055758) list_single_heading_pane_vc

0x732d,	// (0x000519cf) list_single_number_heading_pane_vc_ParamLimits

0x732d,	// (0x000519cf) list_single_number_heading_pane_vc

0x5d67,	// (0x00050409) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5d67,	// (0x00050409) list_double_graphic_heading_pane_vc_g1

0x9a53,	// (0x000540f5) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9a53,	// (0x000540f5) list_double_graphic_heading_pane_vc_g2

0x7310,	// (0x000519b2) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7310,	// (0x000519b2) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7db,	// (0x00059e7d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x00059e7d) list_double_graphic_heading_pane_vc_g

0x73c0,	// (0x00051a62) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x73c0,	// (0x00051a62) list_double_graphic_heading_pane_vc_t1

0x5dde,	// (0x00050480) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5dde,	// (0x00050480) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa09,	// (0x0005a0ab) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x0005a0ab) list_double_graphic_heading_pane_vc_t

0x9b03,	// (0x000541a5) list_setting_pane_vc_g1_ParamLimits

0x9b03,	// (0x000541a5) list_setting_pane_vc_g1

0x9b0f,	// (0x000541b1) list_setting_pane_vc_g2_ParamLimits

0x9b0f,	// (0x000541b1) list_setting_pane_vc_g2

0x0001,

0xf806,	// (0x00059ea8) list_setting_pane_vc_g_ParamLimits

0xf806,	// (0x00059ea8) list_setting_pane_vc_g

0xb7db,	// (0x00055e7d) list_setting_pane_vc_t1_ParamLimits

0xb7db,	// (0x00055e7d) list_setting_pane_vc_t1

0xb7ef,	// (0x00055e91) list_setting_pane_vc_t2_ParamLimits

0xb7ef,	// (0x00055e91) list_setting_pane_vc_t2

0x0001,

0xfa37,	// (0x0005a0d9) list_setting_pane_vc_t_ParamLimits

0xfa37,	// (0x0005a0d9) list_setting_pane_vc_t

0x9b71,	// (0x00054213) set_value_pane_cp_vc_ParamLimits

0x9b71,	// (0x00054213) set_value_pane_cp_vc

0x9a53,	// (0x000540f5) list_single_number_heading_pane_vc_g1_ParamLimits

0x9a53,	// (0x000540f5) list_single_number_heading_pane_vc_g1

0x7310,	// (0x000519b2) list_single_number_heading_pane_vc_g2_ParamLimits

0x7310,	// (0x000519b2) list_single_number_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x00059e9e) list_single_number_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x00059e9e) list_single_number_heading_pane_vc_g

0x5dde,	// (0x00050480) list_single_number_heading_pane_vc_t1_ParamLimits

0x5dde,	// (0x00050480) list_single_number_heading_pane_vc_t1

0x73d4,	// (0x00051a76) list_single_number_heading_pane_vc_t2_ParamLimits

0x73d4,	// (0x00051a76) list_single_number_heading_pane_vc_t2

0x73e8,	// (0x00051a8a) list_single_number_heading_pane_vc_t3_ParamLimits

0x73e8,	// (0x00051a8a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3c,	// (0x0005a0de) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3c,	// (0x0005a0de) list_single_number_heading_pane_vc_t

0x5d67,	// (0x00050409) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5d67,	// (0x00050409) list_single_graphic_heading_pane_vc_g1

0x9a53,	// (0x000540f5) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9a53,	// (0x000540f5) list_single_graphic_heading_pane_vc_g4

0x7310,	// (0x000519b2) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7310,	// (0x000519b2) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x00059e7d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x00059e7d) list_single_graphic_heading_pane_vc_g

0x5dde,	// (0x00050480) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5dde,	// (0x00050480) list_single_graphic_heading_pane_vc_t1

0x73fa,	// (0x00051a9c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x73fa,	// (0x00051a9c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x0005a0e5) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0005a0e5) list_single_graphic_heading_pane_vc_t

0x9a53,	// (0x000540f5) list_double2_pane_vc_g1_ParamLimits

0x9a53,	// (0x000540f5) list_double2_pane_vc_g1

0x7310,	// (0x000519b2) list_double2_pane_vc_g2_ParamLimits

0x7310,	// (0x000519b2) list_double2_pane_vc_g2

0x0001,

0xf7fc,	// (0x00059e9e) list_double2_pane_vc_g_ParamLimits

0xf7fc,	// (0x00059e9e) list_double2_pane_vc_g

0x740e,	// (0x00051ab0) list_double2_pane_vc_t1_ParamLimits

0x740e,	// (0x00051ab0) list_double2_pane_vc_t1

0x7424,	// (0x00051ac6) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7424,	// (0x00051ac6) list_double2_large_graphic_pane_vc_g1

0x7430,	// (0x00051ad2) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x7430,	// (0x00051ad2) list_double2_large_graphic_pane_vc_g2

0x743c,	// (0x00051ade) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x743c,	// (0x00051ade) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa48,	// (0x0005a0ea) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x0005a0ea) list_double2_large_graphic_pane_vc_g

0x7448,	// (0x00051aea) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x7448,	// (0x00051aea) list_double2_large_graphic_pane_vc_t1

0x745e,	// (0x00051b00) list_double_time_pane_vc_g1_ParamLimits

0x745e,	// (0x00051b00) list_double_time_pane_vc_g1

0x746a,	// (0x00051b0c) list_double_time_pane_vc_g2_ParamLimits

0x746a,	// (0x00051b0c) list_double_time_pane_vc_g2

0x0001,

0xfa4f,	// (0x0005a0f1) list_double_time_pane_vc_g_ParamLimits

0xfa4f,	// (0x0005a0f1) list_double_time_pane_vc_g

0x7476,	// (0x00051b18) list_double_time_pane_vc_t1_ParamLimits

0x7476,	// (0x00051b18) list_double_time_pane_vc_t1

0x748f,	// (0x00051b31) list_double_time_pane_vc_t2_ParamLimits

0x748f,	// (0x00051b31) list_double_time_pane_vc_t2

0x74cf,	// (0x00051b71) list_double_time_pane_vc_t3_ParamLimits

0x74cf,	// (0x00051b71) list_double_time_pane_vc_t3

0x74e7,	// (0x00051b89) list_double_time_pane_vc_t4_ParamLimits

0x74e7,	// (0x00051b89) list_double_time_pane_vc_t4

0x0003,

0xfa54,	// (0x0005a0f6) list_double_time_pane_vc_t_ParamLimits

0xfa54,	// (0x0005a0f6) list_double_time_pane_vc_t

0x9a53,	// (0x000540f5) list_double_pane_vc_g1_ParamLimits

0x9a53,	// (0x000540f5) list_double_pane_vc_g1

0x7310,	// (0x000519b2) list_double_pane_vc_g2_ParamLimits

0x7310,	// (0x000519b2) list_double_pane_vc_g2

0x0001,

0xf7fc,	// (0x00059e9e) list_double_pane_vc_g_ParamLimits

0xf7fc,	// (0x00059e9e) list_double_pane_vc_g

0x74fb,	// (0x00051b9d) list_double_pane_vc_t1_ParamLimits

0x74fb,	// (0x00051b9d) list_double_pane_vc_t1

0x750d,	// (0x00051baf) list_double_pane_vc_t2_ParamLimits

0x750d,	// (0x00051baf) list_double_pane_vc_t2

0x0001,

0xfa5d,	// (0x0005a0ff) list_double_pane_vc_t_ParamLimits

0xfa5d,	// (0x0005a0ff) list_double_pane_vc_t

0x9a53,	// (0x000540f5) list_double_number_pane_vc_g1_ParamLimits

0x9a53,	// (0x000540f5) list_double_number_pane_vc_g1

0x7310,	// (0x000519b2) list_double_number_pane_vc_g2_ParamLimits

0x7310,	// (0x000519b2) list_double_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x00059e9e) list_double_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x00059e9e) list_double_number_pane_vc_g

0x7525,	// (0x00051bc7) list_double_number_pane_vc_t1_ParamLimits

0x7525,	// (0x00051bc7) list_double_number_pane_vc_t1

0x7539,	// (0x00051bdb) list_double_number_pane_vc_t2_ParamLimits

0x7539,	// (0x00051bdb) list_double_number_pane_vc_t2

0x750d,	// (0x00051baf) list_double_number_pane_vc_t3_ParamLimits

0x750d,	// (0x00051baf) list_double_number_pane_vc_t3

0x0002,

0xfa62,	// (0x0005a104) list_double_number_pane_vc_t_ParamLimits

0xfa62,	// (0x0005a104) list_double_number_pane_vc_t

0x754b,	// (0x00051bed) list_double_large_graphic_pane_vc_g1_ParamLimits

0x754b,	// (0x00051bed) list_double_large_graphic_pane_vc_g1

0x7557,	// (0x00051bf9) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7557,	// (0x00051bf9) list_double_large_graphic_pane_vc_g2

0x743c,	// (0x00051ade) list_double_large_graphic_pane_vc_g3_ParamLimits

0x743c,	// (0x00051ade) list_double_large_graphic_pane_vc_g3

0x7566,	// (0x00051c08) list_double_large_graphic_pane_vc_g4_ParamLimits

0x7566,	// (0x00051c08) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa69,	// (0x0005a10b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa69,	// (0x0005a10b) list_double_large_graphic_pane_vc_g

0x7572,	// (0x00051c14) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7572,	// (0x00051c14) list_double_large_graphic_pane_vc_t1

0x7584,	// (0x00051c26) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7584,	// (0x00051c26) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa72,	// (0x0005a114) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa72,	// (0x0005a114) list_double_large_graphic_pane_vc_t

0x9a53,	// (0x000540f5) list_double_heading_pane_vc_g1_ParamLimits

0x9a53,	// (0x000540f5) list_double_heading_pane_vc_g1

0x7310,	// (0x000519b2) list_double_heading_pane_vc_g2_ParamLimits

0x7310,	// (0x000519b2) list_double_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x00059e9e) list_double_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x00059e9e) list_double_heading_pane_vc_g

0x759d,	// (0x00051c3f) list_double_heading_pane_vc_t1_ParamLimits

0x759d,	// (0x00051c3f) list_double_heading_pane_vc_t1

0x5dde,	// (0x00050480) list_double_heading_pane_vc_t2_ParamLimits

0x5dde,	// (0x00050480) list_double_heading_pane_vc_t2

0x0001,

0xfa77,	// (0x0005a119) list_double_heading_pane_vc_t_ParamLimits

0xfa77,	// (0x0005a119) list_double_heading_pane_vc_t

0x5d67,	// (0x00050409) list_double_graphic_pane_vc_g1_ParamLimits

0x5d67,	// (0x00050409) list_double_graphic_pane_vc_g1

0x75b1,	// (0x00051c53) list_double_graphic_pane_vc_g2_ParamLimits

0x75b1,	// (0x00051c53) list_double_graphic_pane_vc_g2

0x75c0,	// (0x00051c62) list_double_graphic_pane_vc_g3_ParamLimits

0x75c0,	// (0x00051c62) list_double_graphic_pane_vc_g3

0x0002,

0xfa7c,	// (0x0005a11e) list_double_graphic_pane_vc_g_ParamLimits

0xfa7c,	// (0x0005a11e) list_double_graphic_pane_vc_g

0x75cc,	// (0x00051c6e) list_double_graphic_pane_vc_t1_ParamLimits

0x75cc,	// (0x00051c6e) list_double_graphic_pane_vc_t1

0x750d,	// (0x00051baf) list_double_graphic_pane_vc_t2_ParamLimits

0x750d,	// (0x00051baf) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x0005a125) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x0005a125) list_double_graphic_pane_vc_t

0x4b42,	// (0x0004f1e4) aid_size_cell_fastswap

0x4b4a,	// (0x0004f1ec) aid_size_cell_touch_ParamLimits

0x4b4a,	// (0x0004f1ec) aid_size_cell_touch

0x4daf,	// (0x0004f451) popup_fast_swap_wide_window_ParamLimits

0x4daf,	// (0x0004f451) popup_fast_swap_wide_window

0x4eb9,	// (0x0004f55b) touch_pane_ParamLimits

0x4eb9,	// (0x0004f55b) touch_pane

0x8042,	// (0x000526e4) button_value_adjust_pane_cp2

0x5474,	// (0x0004fb16) button_value_adjust_pane_cp4

0x5498,	// (0x0004fb3a) form_field_data_pane_cp2

0x54b9,	// (0x0004fb5b) form_field_data_wide_pane_cp2

0x84db,	// (0x00052b7d) bg_scroll_pane_ParamLimits

0x586d,	// (0x0004ff0f) scroll_handle_pane_ParamLimits

0x5881,	// (0x0004ff23) scroll_sc2_down_pane_ParamLimits

0x5881,	// (0x0004ff23) scroll_sc2_down_pane

0x850c,	// (0x00052bae) scroll_sc2_up_pane_ParamLimits

0x850c,	// (0x00052bae) scroll_sc2_up_pane

0xbc44,	// (0x000562e6) grid_wheel_folder_pane_g1_ParamLimits

0xbc44,	// (0x000562e6) grid_wheel_folder_pane_g1

0x5ad0,	// (0x00050172) clock_nsta_pane_cp2_ParamLimits

0x5ad0,	// (0x00050172) clock_nsta_pane_cp2

0x8ca1,	// (0x00053343) listscroll_midp_pane_ParamLimits

0x8cad,	// (0x0005334f) midp_canvas_pane

0x8f97,	// (0x00053639) nsta_clock_indic_pane

0x8fdd,	// (0x0005367f) listscroll_form_pane_vc

0x8fe5,	// (0x00053687) listscroll_set_pane_vc_ParamLimits

0x8fe5,	// (0x00053687) listscroll_set_pane_vc

0x967d,	// (0x00053d1f) clock_nsta_pane

0x96f2,	// (0x00053d94) indicator_nsta_pane

0x99ed,	// (0x0005408f) bg_popup_sub_pane_cp2_ParamLimits

0x9a01,	// (0x000540a3) find_pane_cp2_ParamLimits

0x9a01,	// (0x000540a3) find_pane_cp2

0x9a17,	// (0x000540b9) grid_toobar_pane_ParamLimits

0x9b7f,	// (0x00054221) list_form_gen_pane_vc_ParamLimits

0x9b7f,	// (0x00054221) list_form_gen_pane_vc

0x9b95,	// (0x00054237) scroll_pane_cp8_vc_ParamLimits

0x9b95,	// (0x00054237) scroll_pane_cp8_vc

0x9c11,	// (0x000542b3) data_form_wide_pane_vc_ParamLimits

0x9c11,	// (0x000542b3) data_form_wide_pane_vc

0x9c1d,	// (0x000542bf) form_field_data_wide_pane_vc_g1

0x9c25,	// (0x000542c7) form_field_data_wide_pane_vc_t1_ParamLimits

0x9c25,	// (0x000542c7) form_field_data_wide_pane_vc_t1

0x8056,	// (0x000526f8) input_focus_pane_cp6_vc_ParamLimits

0x8056,	// (0x000526f8) input_focus_pane_cp6_vc

0x9f29,	// (0x000545cb) list_midp_pane_ParamLimits

0x9f35,	// (0x000545d7) scroll_pane_cp16_ParamLimits

0x9f35,	// (0x000545d7) scroll_pane_cp16

0x9f83,	// (0x00054625) button_value_adjust_pane_ParamLimits

0x9f83,	// (0x00054625) button_value_adjust_pane

0xaf10,	// (0x000555b2) button_value_adjust_pane_cp6_ParamLimits

0xaf10,	// (0x000555b2) button_value_adjust_pane_cp6

0xb03a,	// (0x000556dc) settings_code_pane_cp_ParamLimits

0xb03a,	// (0x000556dc) settings_code_pane_cp

0x6fdb,	// (0x0005167d) cell_touch_pane_g1

0x6fdb,	// (0x0005167d) cell_touch_pane_g2

0x0001,

0xf724,	// (0x00059dc6) cell_touch_pane_g

0xb5b5,	// (0x00055c57) cell_touch_pane_cp_ParamLimits

0xb5b5,	// (0x00055c57) cell_touch_pane_cp

0xb5c5,	// (0x00055c67) cell_touch_pane_ParamLimits

0xb5c5,	// (0x00055c67) cell_touch_pane

0x6fdb,	// (0x0005167d) scroll_sc2_down_pane_g1

0x6fdb,	// (0x0005167d) scroll_sc2_up_pane_g1

0x6fe5,	// (0x00051687) bg_set_opt_pane_cp4_vc

0xb5d7,	// (0x00055c79) list_set_graphic_pane_vc_g1_ParamLimits

0xb5d7,	// (0x00055c79) list_set_graphic_pane_vc_g1

0xb5e3,	// (0x00055c85) list_set_graphic_pane_vc_g2_ParamLimits

0xb5e3,	// (0x00055c85) list_set_graphic_pane_vc_g2

0x0001,

0xfa0e,	// (0x0005a0b0) list_set_graphic_pane_vc_g_ParamLimits

0xfa0e,	// (0x0005a0b0) list_set_graphic_pane_vc_g

0xb5ef,	// (0x00055c91) text_primary_small_cp13_vc_ParamLimits

0xb5ef,	// (0x00055c91) text_primary_small_cp13_vc

0xb607,	// (0x00055ca9) list_set_graphic_pane_vc_ParamLimits

0xb607,	// (0x00055ca9) list_set_graphic_pane_vc

0x6fe5,	// (0x00051687) input_focus_pane_cp2_vc

0x6fdb,	// (0x0005167d) setting_code_pane_vc_g1

0xb61b,	// (0x00055cbd) setting_code_pane_vc_t1

0xb629,	// (0x00055ccb) set_text_pane_vc_t1_ParamLimits

0xb629,	// (0x00055ccb) set_text_pane_vc_t1

0x6fe5,	// (0x00051687) input_focus_pane_cp1_vc

0xb644,	// (0x00055ce6) list_set_text_pane_vc

0x6fdb,	// (0x0005167d) setting_text_pane_vc_g1

0x6fe5,	// (0x00051687) bg_set_opt_pane_cp2_vc

0xb64e,	// (0x00055cf0) setting_slider_graphic_pane_vc_g1

0xb656,	// (0x00055cf8) setting_slider_graphic_pane_vc_t1

0xb664,	// (0x00055d06) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa13,	// (0x0005a0b5) setting_slider_graphic_pane_vc_t

0xb672,	// (0x00055d14) slider_set_pane_cp_vc

0xb67a,	// (0x00055d1c) slider_set_pane_vc_g1

0xb683,	// (0x00055d25) slider_set_pane_vc_g2

0x0006,

0xfa18,	// (0x0005a0ba) slider_set_pane_vc_g

0x80bd,	// (0x0005275f) set_opt_bg_pane_g1_copy1

0x80c5,	// (0x00052767) set_opt_bg_pane_g2_copy1

0xb6af,	// (0x00055d51) set_opt_bg_pane_g3_copy1

0x80d5,	// (0x00052777) set_opt_bg_pane_g4_copy1

0x80dd,	// (0x0005277f) set_opt_bg_pane_g5_copy1

0x80e5,	// (0x00052787) set_opt_bg_pane_g6_copy1

0xb6b9,	// (0x00055d5b) set_opt_bg_pane_g7_copy1

0xb6c1,	// (0x00055d63) set_opt_bg_pane_g8_copy1

0xb6cb,	// (0x00055d6d) set_opt_bg_pane_g9_copy1

0x6fe5,	// (0x00051687) bg_set_opt_pane_cp_vc

0xb6d5,	// (0x00055d77) setting_slider_pane_vc_t1

0xb656,	// (0x00055cf8) setting_slider_pane_vc_t2

0xb664,	// (0x00055d06) setting_slider_pane_vc_t3

0x0002,

0xfa27,	// (0x0005a0c9) setting_slider_pane_vc_t

0xb672,	// (0x00055d14) slider_set_pane_vc

0x5f01,	// (0x000505a3) volume_set_pane_vc_g1

0x5f0a,	// (0x000505ac) volume_set_pane_vc_g2

0x5f13,	// (0x000505b5) volume_set_pane_vc_g3

0x5f1c,	// (0x000505be) volume_set_pane_vc_g4

0x5f25,	// (0x000505c7) volume_set_pane_vc_g5

0x5f2e,	// (0x000505d0) volume_set_pane_vc_g6

0x5f37,	// (0x000505d9) volume_set_pane_vc_g7

0x5f40,	// (0x000505e2) volume_set_pane_vc_g8

0x5f49,	// (0x000505eb) volume_set_pane_vc_g9

0x5f52,	// (0x000505f4) volume_set_pane_vc_g10

0x0009,

0xf8cc,	// (0x00059f6e) volume_set_pane_vc_g

0xb6e4,	// (0x00055d86) volume_set_pane_vc

0xb6ec,	// (0x00055d8e) button_value_adjust_pane_cp1_vc

0xb6f6,	// (0x00055d98) list_highlight_pane_cp2_vc

0xb6ff,	// (0x00055da1) list_set_pane_vc_ParamLimits

0xb6ff,	// (0x00055da1) list_set_pane_vc

0xb769,	// (0x00055e0b) main_pane_set_vc_t1_ParamLimits

0xb769,	// (0x00055e0b) main_pane_set_vc_t1

0xb77e,	// (0x00055e20) main_pane_set_vc_t2_ParamLimits

0xb77e,	// (0x00055e20) main_pane_set_vc_t2

0xb790,	// (0x00055e32) main_pane_set_vc_t3_ParamLimits

0xb790,	// (0x00055e32) main_pane_set_vc_t3

0xb7a4,	// (0x00055e46) main_pane_set_vc_t4_ParamLimits

0xb7a4,	// (0x00055e46) main_pane_set_vc_t4

0x0003,

0xfa2e,	// (0x0005a0d0) main_pane_set_vc_t_ParamLimits

0xfa2e,	// (0x0005a0d0) main_pane_set_vc_t

0xb7b8,	// (0x00055e5a) setting_code_pane_vc_ParamLimits

0xb7b8,	// (0x00055e5a) setting_code_pane_vc

0xb7c9,	// (0x00055e6b) setting_slider_graphic_pane_vc

0xb7c9,	// (0x00055e6b) setting_slider_pane_vc

0xb7c9,	// (0x00055e6b) setting_text_pane_vc

0xb7c9,	// (0x00055e6b) setting_volume_pane_vc

0xb7d3,	// (0x00055e75) scroll_pane_cp121_vc

0x8030,	// (0x000526d2) set_content_pane_vc

0xb811,	// (0x00055eb3) button_value_adjust_pane_g1

0xb81a,	// (0x00055ebc) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x0005a12a) button_value_adjust_pane_g

0xb823,	// (0x00055ec5) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb823,	// (0x00055ec5) form_field_slider_wide_pane_vc_t1

0xb837,	// (0x00055ed9) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb837,	// (0x00055ed9) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8d,	// (0x0005a12f) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x0005a12f) form_field_slider_wide_pane_vc_t

0x7a65,	// (0x00052107) input_focus_pane_cp10_vc_ParamLimits

0x7a65,	// (0x00052107) input_focus_pane_cp10_vc

0xb849,	// (0x00055eeb) slider_cont_pane_cp1_vc_ParamLimits

0xb849,	// (0x00055eeb) slider_cont_pane_cp1_vc

0xb67a,	// (0x00055d1c) slider_form_pane_g1_cp2

0xb683,	// (0x00055d25) slider_form_pane_g2_cp2

0xb862,	// (0x00055f04) form_field_slider_pane_vc_t3

0xb870,	// (0x00055f12) form_field_slider_pane_vc_t4

0xb87e,	// (0x00055f20) slider_form_pane_vc_ParamLimits

0xb87e,	// (0x00055f20) slider_form_pane_vc

0xb88b,	// (0x00055f2d) form_field_slider_pane_vc_t1_ParamLimits

0xb88b,	// (0x00055f2d) form_field_slider_pane_vc_t1

0xb837,	// (0x00055ed9) form_field_slider_pane_vc_t2_ParamLimits

0xb837,	// (0x00055ed9) form_field_slider_pane_vc_t2

0x0001,

0xfa9d,	// (0x0005a13f) form_field_slider_pane_vc_t_ParamLimits

0xfa9d,	// (0x0005a13f) form_field_slider_pane_vc_t

0x7a65,	// (0x00052107) input_focus_pane_cp9_vc_ParamLimits

0x7a65,	// (0x00052107) input_focus_pane_cp9_vc

0xb8a7,	// (0x00055f49) slider_cont_pane_vc_ParamLimits

0xb8a7,	// (0x00055f49) slider_cont_pane_vc

0xb8b9,	// (0x00055f5b) list_form_graphic_pane_cp_vc_ParamLimits

0xb8b9,	// (0x00055f5b) list_form_graphic_pane_cp_vc

0x9c1d,	// (0x000542bf) form_field_popup_wide_pane_vc_g1

0xb8ce,	// (0x00055f70) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb8ce,	// (0x00055f70) form_field_popup_wide_pane_vc_t1

0x8056,	// (0x000526f8) input_focus_pane_cp8_vc_ParamLimits

0x8056,	// (0x000526f8) input_focus_pane_cp8_vc

0xb8e5,	// (0x00055f87) list_form_wide_pane_vc_ParamLimits

0xb8e5,	// (0x00055f87) list_form_wide_pane_vc

0xb8f1,	// (0x00055f93) list_form_graphic_pane_vc_g1

0xb8f9,	// (0x00055f9b) list_form_graphic_pane_vc_t1_ParamLimits

0xb8f9,	// (0x00055f9b) list_form_graphic_pane_vc_t1

0x70c5,	// (0x00051767) list_highlight_pane_cp5_vc_ParamLimits

0x70c5,	// (0x00051767) list_highlight_pane_cp5_vc

0xb915,	// (0x00055fb7) list_form_graphic_pane_vc_ParamLimits

0xb915,	// (0x00055fb7) list_form_graphic_pane_vc

0x9c1d,	// (0x000542bf) form_field_popup_pane_vc_g1

0xb92b,	// (0x00055fcd) form_field_popup_pane_vc_t1_ParamLimits

0xb92b,	// (0x00055fcd) form_field_popup_pane_vc_t1

0x8056,	// (0x000526f8) input_focus_pane_cp7_vc_ParamLimits

0x8056,	// (0x000526f8) input_focus_pane_cp7_vc

0xb942,	// (0x00055fe4) list_form_pane_vc_ParamLimits

0xb942,	// (0x00055fe4) list_form_pane_vc

0xb94e,	// (0x00055ff0) data_form_pane_vc_t1_ParamLimits

0xb94e,	// (0x00055ff0) data_form_pane_vc_t1

0x80bd,	// (0x0005275f) input_focus_pane_vc_g1

0x80c5,	// (0x00052767) input_focus_pane_vc_g2

0x80cd,	// (0x0005276f) input_focus_pane_vc_g3

0x80d5,	// (0x00052777) input_focus_pane_vc_g4

0x80dd,	// (0x0005277f) input_focus_pane_vc_g5

0x80e5,	// (0x00052787) input_focus_pane_vc_g6

0x80ed,	// (0x0005278f) input_focus_pane_vc_g7

0x80f5,	// (0x00052797) input_focus_pane_vc_g8

0x80fd,	// (0x0005279f) input_focus_pane_vc_g9

0x6fdb,	// (0x0005167d) input_focus_pane_vc_g10

0x0009,

0xf6ad,	// (0x00059d4f) input_focus_pane_vc_g

0x9c11,	// (0x000542b3) data_form_pane_vc_ParamLimits

0x9c11,	// (0x000542b3) data_form_pane_vc

0x9c1d,	// (0x000542bf) form_field_data_pane_vc_g1

0xb969,	// (0x0005600b) form_field_data_pane_vc_t1_ParamLimits

0xb969,	// (0x0005600b) form_field_data_pane_vc_t1

0x8056,	// (0x000526f8) input_focus_pane_vc_ParamLimits

0x8056,	// (0x000526f8) input_focus_pane_vc

0xb983,	// (0x00056025) button_value_adjust_pane_cp3_vc

0xb98b,	// (0x0005602d) button_value_adjust_pane_cp5_vc

0xb993,	// (0x00056035) form_field_data_pane_vc_ParamLimits

0xb993,	// (0x00056035) form_field_data_pane_vc

0xb9aa,	// (0x0005604c) form_field_data_pane_vc_cp2

0xb9b2,	// (0x00056054) form_field_data_wide_pane_vc_ParamLimits

0xb9b2,	// (0x00056054) form_field_data_wide_pane_vc

0xb9c8,	// (0x0005606a) form_field_data_wide_pane_vc_cp2

0xb9d0,	// (0x00056072) form_field_popup_pane_vc_ParamLimits

0xb9d0,	// (0x00056072) form_field_popup_pane_vc

0xb9e7,	// (0x00056089) form_field_popup_wide_pane_vc_ParamLimits

0xb9e7,	// (0x00056089) form_field_popup_wide_pane_vc

0xb9fd,	// (0x0005609f) form_field_slider_pane_vc_ParamLimits

0xb9fd,	// (0x0005609f) form_field_slider_pane_vc

0xba10,	// (0x000560b2) form_field_slider_wide_pane_vc_ParamLimits

0xba10,	// (0x000560b2) form_field_slider_wide_pane_vc

0xba23,	// (0x000560c5) grid_touch_1_pane_ParamLimits

0xba23,	// (0x000560c5) grid_touch_1_pane

0xba2f,	// (0x000560d1) grid_touch_2_pane_ParamLimits

0xba2f,	// (0x000560d1) grid_touch_2_pane

0x8f62,	// (0x00053604) touch_pane_g1_ParamLimits

0x8f62,	// (0x00053604) touch_pane_g1

0xba47,	// (0x000560e9) cell_app_pane_cp_wide_ParamLimits

0xba47,	// (0x000560e9) cell_app_pane_cp_wide

0xba58,	// (0x000560fa) grid_popup_fast_wide_pane_ParamLimits

0xba58,	// (0x000560fa) grid_popup_fast_wide_pane

0xba6c,	// (0x0005610e) scroll_pane_cp19_ParamLimits

0xba6c,	// (0x0005610e) scroll_pane_cp19

0x6fe5,	// (0x00051687) bg_popup_window_pane_cp20

0xba80,	// (0x00056122) listscroll_popup_fast_wide_pane

0x70c5,	// (0x00051767) grid_indicator_nsta_pane

0xba88,	// (0x0005612a) clock_nsta_pane_g1

0xba91,	// (0x00056133) clock_nsta_pane_t1

0xbaad,	// (0x0005614f) cell_indicator_nsta_pane_ParamLimits

0xbaad,	// (0x0005614f) cell_indicator_nsta_pane

0xbae5,	// (0x00056187) cell_indicator_nsta_pane_g1

0xbaf3,	// (0x00056195) cell_indicator_nsta_pane_g2

0x0001,

0xfaa7,	// (0x0005a149) cell_indicator_nsta_pane_g

0xbb09,	// (0x000561ab) clock_nsta_pane_cp

0xbb11,	// (0x000561b3) indicator_nsta_pane_cp

0xbb1a,	// (0x000561bc) nsta_clock_indic_pane_g1

0x718e,	// (0x00051830) grid_indicator_pane

0x8601,	// (0x00052ca3) scroll_pane_cp29

0x5a1f,	// (0x000500c1) indicator_nsta_pane_cp2_ParamLimits

0x5a1f,	// (0x000500c1) indicator_nsta_pane_cp2

0x70c5,	// (0x00051767) main_apps_wheel_pane

0x9e0a,	// (0x000544ac) form_midp_field_text_pane_ParamLimits

0x9f55,	// (0x000545f7) scroll_bar_cp050_ParamLimits

0xbb83,	// (0x00056225) cell_indicator_pane_ParamLimits

0xbb83,	// (0x00056225) cell_indicator_pane

0xbb9a,	// (0x0005623c) cell_indicator_pane_g1

0xbba4,	// (0x00056246) grid_wheel_folder_pane_ParamLimits

0xbba4,	// (0x00056246) grid_wheel_folder_pane

0xbbb8,	// (0x0005625a) list_wheel_apps_pane_ParamLimits

0xbbb8,	// (0x0005625a) list_wheel_apps_pane

0xbbc9,	// (0x0005626b) main_apps_wheel_pane_g1_ParamLimits

0xbbc9,	// (0x0005626b) main_apps_wheel_pane_g1

0xbbdd,	// (0x0005627f) main_apps_wheel_pane_g2_ParamLimits

0xbbdd,	// (0x0005627f) main_apps_wheel_pane_g2

0x0001,

0xfac3,	// (0x0005a165) main_apps_wheel_pane_g_ParamLimits

0xfac3,	// (0x0005a165) main_apps_wheel_pane_g

0xbbf5,	// (0x00056297) main_apps_wheel_pane_t1_ParamLimits

0xbbf5,	// (0x00056297) main_apps_wheel_pane_t1

0xbc18,	// (0x000562ba) list_wheel_apps_pane_g1

0xbc20,	// (0x000562c2) list_wheel_apps_pane_g2

0xbc28,	// (0x000562ca) list_wheel_apps_pane_g3

0xbc30,	// (0x000562d2) list_wheel_apps_pane_g4

0xbc3a,	// (0x000562dc) list_wheel_apps_pane_g5

0x0004,

0xfac8,	// (0x0005a16a) list_wheel_apps_pane_g

0x8b25,	// (0x000531c7) navi_icon_text_pane

0x95b0,	// (0x00053c52) aid_fill_nsta

0xbc5d,	// (0x000562ff) navi_icon_text_pane_g1

0xbc6c,	// (0x0005630e) navi_icon_text_pane_t1

0x89c3,	// (0x00053065) list_set_graphic_pane_t1_ParamLimits

0x89c3,	// (0x00053065) list_set_graphic_pane_t1

0xa6b3,	// (0x00054d55) popup_midp_note_alarm_window_t6_ParamLimits

0xa6b3,	// (0x00054d55) popup_midp_note_alarm_window_t6

0xa6c5,	// (0x00054d67) popup_midp_note_alarm_window_t7_ParamLimits

0xa6c5,	// (0x00054d67) popup_midp_note_alarm_window_t7

0xa6d7,	// (0x00054d79) popup_midp_note_alarm_window_t8_ParamLimits

0xa6d7,	// (0x00054d79) popup_midp_note_alarm_window_t8

0xa6e9,	// (0x00054d8b) popup_midp_note_alarm_window_t9_ParamLimits

0xa6e9,	// (0x00054d8b) popup_midp_note_alarm_window_t9

0xa6fb,	// (0x00054d9d) popup_midp_note_alarm_window_t10_ParamLimits

0xa6fb,	// (0x00054d9d) popup_midp_note_alarm_window_t10

0xa70d,	// (0x00054daf) popup_midp_note_alarm_window_t11_ParamLimits

0xa70d,	// (0x00054daf) popup_midp_note_alarm_window_t11

0xa71f,	// (0x00054dc1) scroll_pane_cp17_ParamLimits

0xa71f,	// (0x00054dc1) scroll_pane_cp17

0x5f01,	// (0x000505a3) volume_small_pane_cp_g1

0x6297,	// (0x00050939) volume_small_pane_cp_g2

0x62a0,	// (0x00050942) volume_small_pane_cp_g3

0x62a9,	// (0x0005094b) volume_small_pane_cp_g4

0x62b2,	// (0x00050954) volume_small_pane_cp_g5

0x62bb,	// (0x0005095d) volume_small_pane_cp_g6

0x62c4,	// (0x00050966) volume_small_pane_cp_g7

0x62cd,	// (0x0005096f) volume_small_pane_cp_g8

0x62d6,	// (0x00050978) volume_small_pane_cp_g9

0x62df,	// (0x00050981) volume_small_pane_cp_g10

0x8d74,	// (0x00053416) midp_ticker_pane_g1_ParamLimits

0x8d80,	// (0x00053422) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x00059e17) midp_ticker_pane_g_ParamLimits

0x8d8c,	// (0x0005342e) midp_ticker_pane_t1_ParamLimits

0x95c6,	// (0x00053c68) aid_fill_nsta_2

0x9f41,	// (0x000545e3) list_form2_midp_pane

0xb085,	// (0x00055727) midp_editing_number_pane_ParamLimits

0xb094,	// (0x00055736) midp_ticker_pane_ParamLimits

0xbc81,	// (0x00056323) form2_midp_field_pane

0xbca5,	// (0x00056347) scroll_pane_cp51

0xbcc5,	// (0x00056367) form2_midp_button_pane_ParamLimits

0xbcc5,	// (0x00056367) form2_midp_button_pane

0xbcd7,	// (0x00056379) form2_midp_content_pane_ParamLimits

0xbcd7,	// (0x00056379) form2_midp_content_pane

0xbcf1,	// (0x00056393) form2_midp_field_choice_group_pane

0xbcf9,	// (0x0005639b) form2_midp_field_pane_g1

0xbd01,	// (0x000563a3) form2_midp_field_pane_g2

0xbd09,	// (0x000563ab) form2_midp_field_pane_g3

0xbd11,	// (0x000563b3) form2_midp_field_pane_g4

0x0003,

0xfaed,	// (0x0005a18f) form2_midp_field_pane_g

0xbd19,	// (0x000563bb) form2_midp_gauge_slider_pane

0xbd21,	// (0x000563c3) form2_midp_gauge_wait_pane

0xbd29,	// (0x000563cb) form2_midp_image_pane_ParamLimits

0xbd29,	// (0x000563cb) form2_midp_image_pane

0xbd44,	// (0x000563e6) form2_midp_label_pane_ParamLimits

0xbd44,	// (0x000563e6) form2_midp_label_pane

0xbd5d,	// (0x000563ff) form2_midp_label_pane_cp_ParamLimits

0xbd5d,	// (0x000563ff) form2_midp_label_pane_cp

0xbd7e,	// (0x00056420) form2_midp_string_pane_ParamLimits

0xbd7e,	// (0x00056420) form2_midp_string_pane

0x75de,	// (0x00051c80) form2_midp_text_pane_ParamLimits

0x75de,	// (0x00051c80) form2_midp_text_pane

0xbd90,	// (0x00056432) form2_midp_time_pane

0xbda0,	// (0x00056442) input_focus_pane_cp51_ParamLimits

0xbda0,	// (0x00056442) input_focus_pane_cp51

0xbdb8,	// (0x0005645a) form2_midp_label_pane_t1_ParamLimits

0xbdb8,	// (0x0005645a) form2_midp_label_pane_t1

0x75fd,	// (0x00051c9f) form2_mdip_text_pane_t1_ParamLimits

0x75fd,	// (0x00051c9f) form2_mdip_text_pane_t1

0x761b,	// (0x00051cbd) form2_midp_time_pane_t1

0xbe01,	// (0x000564a3) form2_midp_gauge_slider_pane_t1

0xbe13,	// (0x000564b5) form2_midp_gauge_slider_pane_t2

0xbe25,	// (0x000564c7) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf6,	// (0x0005a198) form2_midp_gauge_slider_pane_t

0xbe37,	// (0x000564d9) form2_midp_slider_pane

0xbe43,	// (0x000564e5) form2_midp_gauge_wait_pane_t1

0xbe51,	// (0x000564f3) form2_midp_wait_pane_ParamLimits

0xbe51,	// (0x000564f3) form2_midp_wait_pane

0x9c3c,	// (0x000542de) list_single_2graphic_pane_cp4_ParamLimits

0x9c3c,	// (0x000542de) list_single_2graphic_pane_cp4

0xbe7c,	// (0x0005651e) list_single_midp_graphic_pane_cp_ParamLimits

0xbe7c,	// (0x0005651e) list_single_midp_graphic_pane_cp

0x6fe5,	// (0x00051687) list_highlight_pane_cp20

0xbeab,	// (0x0005654d) list_single_2graphic_pane_g1_cp4

0xbeb3,	// (0x00056555) list_single_2graphic_pane_g2_cp4

0xbebb,	// (0x0005655d) list_single_2graphic_pane_t1_cp4

0x70c5,	// (0x00051767) list_highlight_pane_cp21

0xbeca,	// (0x0005656c) list_single_midp_graphic_pane_g4_cp

0xbed9,	// (0x0005657b) list_single_midp_graphic_pane_t1_cp

0xbeee,	// (0x00056590) form2_mdip_string_pane_t1_ParamLimits

0xbeee,	// (0x00056590) form2_mdip_string_pane_t1

0x6fe5,	// (0x00051687) bg_wml_button_pane_cp2

0x6fdb,	// (0x0005167d) form2_midp_image_pane_g1

0x72d7,	// (0x00051979) list_double_large_graphic_pane_g5_ParamLimits

0x72d7,	// (0x00051979) list_double_large_graphic_pane_g5

0x8ca1,	// (0x00053343) midp_form_pane_ParamLimits

0x70c5,	// (0x00051767) main_apps_wheel_pane_ParamLimits

0x9398,	// (0x00053a3a) popup_preview_window_ParamLimits

0x9398,	// (0x00053a3a) popup_preview_window

0x9553,	// (0x00053bf5) popup_touch_info_window_ParamLimits

0x9553,	// (0x00053bf5) popup_touch_info_window

0x9571,	// (0x00053c13) popup_touch_menu_window_ParamLimits

0x9571,	// (0x00053c13) popup_touch_menu_window

0x6fd1,	// (0x00051673) bg_popup_sub_pane_cp6

0xbfe7,	// (0x00056689) list_touch_menu_pane

0xbfef,	// (0x00056691) list_single_touch_menu_pane_ParamLimits

0xbfef,	// (0x00056691) list_single_touch_menu_pane

0xc006,	// (0x000566a8) list_single_touch_menu_pane_t1

0x70c5,	// (0x00051767) bg_popup_sub_pane_cp7_ParamLimits

0x70c5,	// (0x00051767) bg_popup_sub_pane_cp7

0xc014,	// (0x000566b6) heading_sub_pane

0xc01c,	// (0x000566be) list_touch_info_pane_ParamLimits

0xc01c,	// (0x000566be) list_touch_info_pane

0xc02b,	// (0x000566cd) list_single_touch_info_pane_ParamLimits

0xc02b,	// (0x000566cd) list_single_touch_info_pane

0xc03d,	// (0x000566df) list_single_touch_info_pane_t1

0xc04b,	// (0x000566ed) list_single_touch_info_pane_t2

0x0001,

0xfb04,	// (0x0005a1a6) list_single_touch_info_pane_t

0x8c99,	// (0x0005333b) bg_popup_heading_pane_cp

0xc059,	// (0x000566fb) heading_sub_pane_t1

0x9bab,	// (0x0005424d) bg_popup_preview_window_pane_cp_ParamLimits

0x9bab,	// (0x0005424d) bg_popup_preview_window_pane_cp

0xc014,	// (0x000566b6) heading_preview_pane

0xc01c,	// (0x000566be) list_preview_pane_ParamLimits

0xc01c,	// (0x000566be) list_preview_pane

0xc067,	// (0x00056709) popup_preview_window_g1

0xc02b,	// (0x000566cd) list_single_preview_pane_ParamLimits

0xc02b,	// (0x000566cd) list_single_preview_pane

0xc06f,	// (0x00056711) list_single_preview_pane_g1

0xc077,	// (0x00056719) list_single_preview_pane_t1

0xc03d,	// (0x000566df) list_single_preview_pane_t2

0x0001,

0xfb09,	// (0x0005a1ab) list_single_preview_pane_t

0xc085,	// (0x00056727) bg_popup_heading_pane_cp2_ParamLimits

0xc085,	// (0x00056727) bg_popup_heading_pane_cp2

0xc09b,	// (0x0005673d) heading_preview_pane_g1

0xc0a3,	// (0x00056745) heading_preview_pane_t1_ParamLimits

0xc0a3,	// (0x00056745) heading_preview_pane_t1

0x71b1,	// (0x00051853) soft_indicator_pane_t1_ParamLimits

0x7fc9,	// (0x0005266b) scroll_pane_ParamLimits

0x84fa,	// (0x00052b9c) scroll_sc2_left_pane

0x8503,	// (0x00052ba5) scroll_sc2_right_pane

0x8522,	// (0x00052bc4) scroll_bg_pane_g1_ParamLimits

0x8537,	// (0x00052bd9) scroll_bg_pane_g2_ParamLimits

0x854f,	// (0x00052bf1) scroll_bg_pane_g3_ParamLimits

0xf704,	// (0x00059da6) scroll_bg_pane_g_ParamLimits

0x8522,	// (0x00052bc4) scroll_handle_pane_g1_ParamLimits

0x8571,	// (0x00052c13) scroll_handle_pane_g2_ParamLimits

0x854f,	// (0x00052bf1) scroll_handle_pane_g3_ParamLimits

0xf70b,	// (0x00059dad) scroll_handle_pane_g_ParamLimits

0x901f,	// (0x000536c1) popup_choice_list_window_ParamLimits

0x901f,	// (0x000536c1) popup_choice_list_window

0x99f9,	// (0x0005409b) choice_list_pane

0x9a87,	// (0x00054129) cell_toolbar_pane_t1

0x9aaf,	// (0x00054151) toolbar_button_pane_ParamLimits

0xabd0,	// (0x00055272) ai_gene_pane_1_t2_ParamLimits

0xabd0,	// (0x00055272) ai_gene_pane_1_t2

0x0001,

0xf928,	// (0x00059fca) ai_gene_pane_1_t_ParamLimits

0xf928,	// (0x00059fca) ai_gene_pane_1_t

0xc0c0,	// (0x00056762) scroll_sc2_left_pane_g1

0xc0c0,	// (0x00056762) scroll_sc2_right_pane_g1

0x8ff7,	// (0x00053699) bg_popup_sub_pane_cp10

0xc0ca,	// (0x0005676c) list_choice_list_pane

0xc0e1,	// (0x00056783) list_single_choice_list_pane_ParamLimits

0xc0e1,	// (0x00056783) list_single_choice_list_pane

0xc0f5,	// (0x00056797) list_single_choice_list_pane_g1

0xc0fd,	// (0x0005679f) list_single_choice_list_pane_t1_ParamLimits

0xc0fd,	// (0x0005679f) list_single_choice_list_pane_t1

0xc112,	// (0x000567b4) choice_list_pane_g1

0xc11a,	// (0x000567bc) choice_list_pane_t1

0x6fd1,	// (0x00051673) input_focus_pane_cp11

0x83d7,	// (0x00052a79) title_pane_stacon_g2_ParamLimits

0x83d7,	// (0x00052a79) title_pane_stacon_g2

0x0002,

0xf6ea,	// (0x00059d8c) title_pane_stacon_g_ParamLimits

0xf6ea,	// (0x00059d8c) title_pane_stacon_g

0x8c99,	// (0x0005333b) cursor_press_pane

0x90c7,	// (0x00053769) popup_fep_hwr_window_ParamLimits

0x90c7,	// (0x00053769) popup_fep_hwr_window

0x9141,	// (0x000537e3) popup_fep_vkb_window_ParamLimits

0x9141,	// (0x000537e3) popup_fep_vkb_window

0xc128,	// (0x000567ca) cursor_press_pane_g1

0x0002,

0xfb32,	// (0x0005a1d4) fep_vkb_side_pane_g_ParamLimits

0x6321,	// (0x000509c3) fep_hwr_candidate_pane_ParamLimits

0x6321,	// (0x000509c3) fep_hwr_candidate_pane

0x634b,	// (0x000509ed) fep_hwr_side_pane_ParamLimits

0x634b,	// (0x000509ed) fep_hwr_side_pane

0x636b,	// (0x00050a0d) fep_hwr_top_pane_ParamLimits

0x636b,	// (0x00050a0d) fep_hwr_top_pane

0x6383,	// (0x00050a25) fep_hwr_write_pane_ParamLimits

0x6383,	// (0x00050a25) fep_hwr_write_pane

0xfb32,	// (0x0005a1d4) fep_vkb_side_pane_g

0xc130,	// (0x000567d2) fep_hwr_top_pane_g1

0xc142,	// (0x000567e4) fep_hwr_top_pane_g2

0x63bd,	// (0x00050a5f) fep_hwr_top_pane_g3

0x0002,

0xfb0e,	// (0x0005a1b0) fep_hwr_top_pane_g

0x63d2,	// (0x00050a74) fep_hwr_top_text_pane

0x86c8,	// (0x00052d6a) fep_hwr_top_text_pane_g1

0xc178,	// (0x0005681a) fep_hwr_top_text_pane_t1

0x64c8,	// (0x00050b6a) fep_hwr_candidate_pane_g1

0xc3cb,	// (0x00056a6d) fep_vkb_keypad_pane_g3_ParamLimits

0xc3cb,	// (0x00056a6d) fep_vkb_keypad_pane_g3

0xc3f3,	// (0x00056a95) fep_vkb_keypad_pane_g4_ParamLimits

0xc3f3,	// (0x00056a95) fep_vkb_keypad_pane_g4

0xc462,	// (0x00056b04) fep_vkb_bottom_pane_g2_ParamLimits

0xc462,	// (0x00056b04) fep_vkb_bottom_pane_g2

0x0001,

0xfb39,	// (0x0005a1db) fep_vkb_bottom_pane_g_ParamLimits

0xfb39,	// (0x0005a1db) fep_vkb_bottom_pane_g

0xc0c0,	// (0x00056762) cell_vkb_side_pane_g2

0x0001,

0xfb43,	// (0x0005a1e5) cell_vkb_side_pane_g

0xc4ed,	// (0x00056b8f) cell_vkb_side_pane_t1

0xc4fb,	// (0x00056b9d) cell_vkb_side_pane_t1_copy1

0xc0c0,	// (0x00056762) bg_fep_vkb_candidate_pane_g2

0xc627,	// (0x00056cc9) cell_vkb_candidate_pane_ParamLimits

0xc186,	// (0x00056828) aid_size_cell_vkb_ParamLimits

0xc186,	// (0x00056828) aid_size_cell_vkb

0xc627,	// (0x00056cc9) cell_vkb_candidate_pane

0x64ef,	// (0x00050b91) bg_popup_fep_shadow_pane_g1

0xc214,	// (0x000568b6) fep_vkb_bottom_pane_ParamLimits

0xc214,	// (0x000568b6) fep_vkb_bottom_pane

0xc24a,	// (0x000568ec) fep_vkb_candidate_pane_ParamLimits

0xc24a,	// (0x000568ec) fep_vkb_candidate_pane

0xc266,	// (0x00056908) fep_vkb_keypad_pane_ParamLimits

0xc266,	// (0x00056908) fep_vkb_keypad_pane

0xc2ac,	// (0x0005694e) fep_vkb_side_pane_ParamLimits

0xc2ac,	// (0x0005694e) fep_vkb_side_pane

0xc2e8,	// (0x0005698a) fep_vkb_top_pane_ParamLimits

0xc2e8,	// (0x0005698a) fep_vkb_top_pane

0xc324,	// (0x000569c6) fep_vkb_top_pane_g1_ParamLimits

0xc324,	// (0x000569c6) fep_vkb_top_pane_g1

0xc333,	// (0x000569d5) fep_vkb_top_pane_g2_ParamLimits

0xc333,	// (0x000569d5) fep_vkb_top_pane_g2

0xc342,	// (0x000569e4) fep_vkb_top_pane_g3_ParamLimits

0xc342,	// (0x000569e4) fep_vkb_top_pane_g3

0x0003,

0xfb29,	// (0x0005a1cb) fep_vkb_top_pane_g_ParamLimits

0xfb29,	// (0x0005a1cb) fep_vkb_top_pane_g

0xc360,	// (0x00056a02) fep_vkb_top_text_pane_ParamLimits

0xc360,	// (0x00056a02) fep_vkb_top_text_pane

0xc371,	// (0x00056a13) fep_vkb_side_pane_g1_ParamLimits

0xc371,	// (0x00056a13) fep_vkb_side_pane_g1

0xc3ba,	// (0x00056a5c) grid_vkb_side_pane_ParamLimits

0xc3ba,	// (0x00056a5c) grid_vkb_side_pane

0x64f7,	// (0x00050b99) bg_popup_fep_shadow_pane_g2

0x6500,	// (0x00050ba2) bg_popup_fep_shadow_pane_g3

0x6508,	// (0x00050baa) bg_popup_fep_shadow_pane_g4

0x6511,	// (0x00050bb3) bg_popup_fep_shadow_pane_g5

0x651b,	// (0x00050bbd) bg_popup_fep_shadow_pane_g6

0x6523,	// (0x00050bc5) bg_popup_fep_shadow_pane_g7

0x80d5,	// (0x00052777) bg_popup_fep_shadow_pane_g8

0xc411,	// (0x00056ab3) grid_vkb_keypad_number_pane_ParamLimits

0xc411,	// (0x00056ab3) grid_vkb_keypad_number_pane

0xc421,	// (0x00056ac3) grid_vkb_keypad_pane_ParamLimits

0xc421,	// (0x00056ac3) grid_vkb_keypad_pane

0xc447,	// (0x00056ae9) fep_vkb_bottom_pane_g1_ParamLimits

0xc447,	// (0x00056ae9) fep_vkb_bottom_pane_g1

0xc470,	// (0x00056b12) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc470,	// (0x00056b12) grid_vkb_keypad_bottom_left_pane

0xc485,	// (0x00056b27) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc485,	// (0x00056b27) grid_vkb_keypad_bottom_right_pane

0xc49a,	// (0x00056b3c) fep_vkb_top_text_pane_g1

0xc4b5,	// (0x00056b57) fep_vkb_top_text_pane_t1

0xc4ca,	// (0x00056b6c) cell_vkb_side_pane_ParamLimits

0xc4ca,	// (0x00056b6c) cell_vkb_side_pane

0xc0c0,	// (0x00056762) cell_vkb_side_pane_g1

0xc509,	// (0x00056bab) cell_vkb_keypad_pane_ParamLimits

0xc509,	// (0x00056bab) cell_vkb_keypad_pane

0xc57e,	// (0x00056c20) cell_vkb_keypad_pane_g1

0x0008,

0xfb56,	// (0x0005a1f8) bg_popup_fep_shadow_pane_g

0x6535,	// (0x00050bd7) cell_hwr_side_pane_g1

0x6535,	// (0x00050bd7) cell_hwr_side_pane_g2

0xc588,	// (0x00056c2a) cell_vkb_keypad_pane_t1

0xc596,	// (0x00056c38) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc596,	// (0x00056c38) cell_vkb_keypad_bottom_left_pane

0xc5b3,	// (0x00056c55) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc5b3,	// (0x00056c55) cell_vkb_keypad_bottom_right_pane

0xc0c0,	// (0x00056762) cell_vkb_keypad_bottom_left_pane_g1

0xc0c0,	// (0x00056762) cell_vkb_keypad_bottom_right_pane_g1

0xc5ec,	// (0x00056c8e) cell_vkb_keypad_number_pane_ParamLimits

0xc5ec,	// (0x00056c8e) cell_vkb_keypad_number_pane

0xc60b,	// (0x00056cad) cell_vkb_keypad_number_pane_g1

0xc615,	// (0x00056cb7) cell_vkb_keypad_number_pane_g2

0xc61e,	// (0x00056cc0) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb48,	// (0x0005a1ea) cell_vkb_keypad_number_pane_g

0xc588,	// (0x00056c2a) cell_vkb_keypad_number_pane_t1

0xc642,	// (0x00056ce4) fep_vkb_candidate_pane_g1

0x0001,

0xfb69,	// (0x0005a20b) cell_hwr_side_pane_g

0xc65b,	// (0x00056cfd) cell_hwr_side_pane_t1

0x653f,	// (0x00050be1) cell_hwr_side_pane_t1_copy1

0x654d,	// (0x00050bef) cell_hwr_candidate_pane_g1

0x657c,	// (0x00050c1e) cell_hwr_candidate_pane_t1

0xc0c0,	// (0x00056762) cell_vkb_candidate_pane_g2

0xc69f,	// (0x00056d41) cell_vkb_candidate_pane_t1

0x62e8,	// (0x0005098a) bg_popup_fep_shadow_pane_ParamLimits

0x62e8,	// (0x0005098a) bg_popup_fep_shadow_pane

0x639d,	// (0x00050a3f) bg_fep_hwr_top_pane_g4

0xc154,	// (0x000567f6) bg_hwr_side_pane_g1_ParamLimits

0xc154,	// (0x000567f6) bg_hwr_side_pane_g1

0x640e,	// (0x00050ab0) cell_hwr_side_pane_ParamLimits

0x640e,	// (0x00050ab0) cell_hwr_side_pane

0x6449,	// (0x00050aeb) fep_hwr_write_pane_g1_ParamLimits

0x6449,	// (0x00050aeb) fep_hwr_write_pane_g1

0x6456,	// (0x00050af8) fep_hwr_write_pane_g2_ParamLimits

0x6456,	// (0x00050af8) fep_hwr_write_pane_g2

0x6463,	// (0x00050b05) fep_hwr_write_pane_g3_ParamLimits

0x6463,	// (0x00050b05) fep_hwr_write_pane_g3

0x6471,	// (0x00050b13) fep_hwr_write_pane_g4_ParamLimits

0x6471,	// (0x00050b13) fep_hwr_write_pane_g4

0x0005,

0xfb15,	// (0x0005a1b7) fep_hwr_write_pane_g_ParamLimits

0xfb15,	// (0x0005a1b7) fep_hwr_write_pane_g

0x639d,	// (0x00050a3f) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x639d,	// (0x00050a3f) bg_fep_hwr_candidate_pane_g2

0x6486,	// (0x00050b28) cell_hwr_candidate_pane_ParamLimits

0x6486,	// (0x00050b28) cell_hwr_candidate_pane

0x64c8,	// (0x00050b6a) fep_hwr_candidate_pane_g1_ParamLimits

0xc1b4,	// (0x00056856) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc1b4,	// (0x00056856) bg_popup_fep_shadow_pane_cp2

0xc352,	// (0x000569f4) fep_vkb_top_pane_g4_ParamLimits

0xc352,	// (0x000569f4) fep_vkb_top_pane_g4

0xc398,	// (0x00056a3a) fep_vkb_side_pane_g2_ParamLimits

0xc398,	// (0x00056a3a) fep_vkb_side_pane_g2

0x53a1,	// (0x0004fa43) list_setting_pane_t4_ParamLimits

0x53a1,	// (0x0004fa43) list_setting_pane_t4

0x543b,	// (0x0004fadd) list_setting_number_pane_t5_ParamLimits

0x543b,	// (0x0004fadd) list_setting_number_pane_t5

0x870a,	// (0x00052dac) list_double_heading_pane_cp2_ParamLimits

0x870a,	// (0x00052dac) list_double_heading_pane_cp2

0x8070,	// (0x00052712) list_double_heading_pane_g1_cp2_ParamLimits

0x8070,	// (0x00052712) list_double_heading_pane_g1_cp2

0x807c,	// (0x0005271e) list_double_heading_pane_g2_cp2_ParamLimits

0x807c,	// (0x0005271e) list_double_heading_pane_g2_cp2

0xc6ad,	// (0x00056d4f) list_double_heading_pane_t1_cp2_ParamLimits

0xc6ad,	// (0x00056d4f) list_double_heading_pane_t1_cp2

0xc6c3,	// (0x00056d65) list_double_heading_pane_t2_cp2_ParamLimits

0xc6c3,	// (0x00056d65) list_double_heading_pane_t2_cp2

0x6fb9,	// (0x0005165b) aid_value_unit2

0x4e09,	// (0x0004f4ab) popup_preview_fixed_window

0x7a73,	// (0x00052115) bg_popup_preview_window_pane_cp02

0xc6d5,	// (0x00056d77) list_preview_fixed_pane

0xc71b,	// (0x00056dbd) list_empty_pane_fp_ParamLimits

0xc71b,	// (0x00056dbd) list_empty_pane_fp

0xc71b,	// (0x00056dbd) list_single_cale_day_pane_fp_ParamLimits

0xc71b,	// (0x00056dbd) list_single_cale_day_pane_fp

0xc71b,	// (0x00056dbd) list_single_graphic_heading_pane_fp_ParamLimits

0xc71b,	// (0x00056dbd) list_single_graphic_heading_pane_fp

0xc71b,	// (0x00056dbd) list_single_graphic_pane_fp_ParamLimits

0xc71b,	// (0x00056dbd) list_single_graphic_pane_fp

0xc71b,	// (0x00056dbd) list_single_heading_pane_fp_ParamLimits

0xc71b,	// (0x00056dbd) list_single_heading_pane_fp

0xc71b,	// (0x00056dbd) list_single_pane_fp_ParamLimits

0xc71b,	// (0x00056dbd) list_single_pane_fp

0xc730,	// (0x00056dd2) list_single_pane_fp_g1_ParamLimits

0xc730,	// (0x00056dd2) list_single_pane_fp_g1

0x973c,	// (0x00053dde) list_single_pane_fp_g2_ParamLimits

0x973c,	// (0x00053dde) list_single_pane_fp_g2

0xc73c,	// (0x00056dde) list_single_pane_fp_g3_ParamLimits

0xc73c,	// (0x00056dde) list_single_pane_fp_g3

0xc750,	// (0x00056df2) list_single_pane_fp_g4_ParamLimits

0xc750,	// (0x00056df2) list_single_pane_fp_g4

0x0003,

0xfb7c,	// (0x0005a21e) list_single_pane_fp_g_ParamLimits

0xfb7c,	// (0x0005a21e) list_single_pane_fp_g

0x762e,	// (0x00051cd0) list_single_pane_fp_t1_ParamLimits

0x762e,	// (0x00051cd0) list_single_pane_fp_t1

0x7645,	// (0x00051ce7) list_single_graphic_pane_fp_g1_ParamLimits

0x7645,	// (0x00051ce7) list_single_graphic_pane_fp_g1

0xc730,	// (0x00056dd2) list_single_graphic_pane_fp_g2_ParamLimits

0xc730,	// (0x00056dd2) list_single_graphic_pane_fp_g2

0x973c,	// (0x00053dde) list_single_graphic_pane_fp_g3_ParamLimits

0x973c,	// (0x00053dde) list_single_graphic_pane_fp_g3

0xc73c,	// (0x00056dde) list_single_graphic_pane_fp_g4_ParamLimits

0xc73c,	// (0x00056dde) list_single_graphic_pane_fp_g4

0xc750,	// (0x00056df2) list_single_graphic_pane_fp_g5_ParamLimits

0xc750,	// (0x00056df2) list_single_graphic_pane_fp_g5

0x0004,

0xfb85,	// (0x0005a227) list_single_graphic_pane_fp_g_ParamLimits

0xfb85,	// (0x0005a227) list_single_graphic_pane_fp_g

0x7651,	// (0x00051cf3) list_single_graphic_pane_fp_t1_ParamLimits

0x7651,	// (0x00051cf3) list_single_graphic_pane_fp_t1

0x7645,	// (0x00051ce7) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7645,	// (0x00051ce7) list_single_graphic_heading_pane_fp_g1

0xc730,	// (0x00056dd2) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc730,	// (0x00056dd2) list_single_graphic_heading_pane_fp_g2

0x973c,	// (0x00053dde) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x973c,	// (0x00053dde) list_single_graphic_heading_pane_fp_g3

0xc73c,	// (0x00056dde) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc73c,	// (0x00056dde) list_single_graphic_heading_pane_fp_g4

0xc750,	// (0x00056df2) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc750,	// (0x00056df2) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0005a227) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0005a227) list_single_graphic_heading_pane_fp_g

0x7667,	// (0x00051d09) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7667,	// (0x00051d09) list_single_graphic_heading_pane_fp_t1

0x767d,	// (0x00051d1f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x767d,	// (0x00051d1f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x0005a232) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x0005a232) list_single_graphic_heading_pane_fp_t

0x768f,	// (0x00051d31) list_single_cale_day_pane_fp_g1_ParamLimits

0x768f,	// (0x00051d31) list_single_cale_day_pane_fp_g1

0xc75c,	// (0x00056dfe) list_single_cale_day_pane_fp_g2_ParamLimits

0xc75c,	// (0x00056dfe) list_single_cale_day_pane_fp_g2

0x76c7,	// (0x00051d69) list_single_cale_day_pane_fp_g3_ParamLimits

0x76c7,	// (0x00051d69) list_single_cale_day_pane_fp_g3

0x76ef,	// (0x00051d91) list_single_cale_day_pane_fp_g4_ParamLimits

0x76ef,	// (0x00051d91) list_single_cale_day_pane_fp_g4

0x7713,	// (0x00051db5) list_single_cale_day_pane_fp_g5_ParamLimits

0x7713,	// (0x00051db5) list_single_cale_day_pane_fp_g5

0x0004,

0xfb95,	// (0x0005a237) list_single_cale_day_pane_fp_g_ParamLimits

0xfb95,	// (0x0005a237) list_single_cale_day_pane_fp_g

0x7737,	// (0x00051dd9) list_single_cale_day_pane_fp_t1_ParamLimits

0x7737,	// (0x00051dd9) list_single_cale_day_pane_fp_t1

0x775d,	// (0x00051dff) list_single_cale_day_pane_fp_t2_ParamLimits

0x775d,	// (0x00051dff) list_single_cale_day_pane_fp_t2

0x7776,	// (0x00051e18) list_single_cale_day_pane_fp_t3_ParamLimits

0x7776,	// (0x00051e18) list_single_cale_day_pane_fp_t3

0x0002,

0xfba0,	// (0x0005a242) list_single_cale_day_pane_fp_t_ParamLimits

0xfba0,	// (0x0005a242) list_single_cale_day_pane_fp_t

0xc730,	// (0x00056dd2) list_empty_pane_fp_g1_ParamLimits

0xc730,	// (0x00056dd2) list_empty_pane_fp_g1

0x778f,	// (0x00051e31) list_empty_pane_fp_t1

0x779d,	// (0x00051e3f) list_empty_pane_fp_t2

0x0001,

0xfba7,	// (0x0005a249) list_empty_pane_fp_t

0xc730,	// (0x00056dd2) list_single_heading_pane_fp_g1_ParamLimits

0xc730,	// (0x00056dd2) list_single_heading_pane_fp_g1

0x973c,	// (0x00053dde) list_single_heading_pane_fp_g2_ParamLimits

0x973c,	// (0x00053dde) list_single_heading_pane_fp_g2

0xc73c,	// (0x00056dde) list_single_heading_pane_fp_g3_ParamLimits

0xc73c,	// (0x00056dde) list_single_heading_pane_fp_g3

0x0002,

0xfbac,	// (0x0005a24e) list_single_heading_pane_fp_g_ParamLimits

0xfbac,	// (0x0005a24e) list_single_heading_pane_fp_g

0x77ab,	// (0x00051e4d) list_single_heading_pane_fp_t1_ParamLimits

0x77ab,	// (0x00051e4d) list_single_heading_pane_fp_t1

0x77bd,	// (0x00051e5f) list_single_heading_pane_fp_t2_ParamLimits

0x77bd,	// (0x00051e5f) list_single_heading_pane_fp_t2

0x0001,

0xfbb3,	// (0x0005a255) list_single_heading_pane_fp_t_ParamLimits

0xfbb3,	// (0x0005a255) list_single_heading_pane_fp_t

0x8262,	// (0x00052904) aid_size_cell_fast

0x79e3,	// (0x00052085) soft_indicator_pane_cp1_t1

0x829f,	// (0x00052941) cell_app_pane_cp2_ParamLimits

0x829f,	// (0x00052941) cell_app_pane_cp2

0x630a,	// (0x000509ac) fep_hwr_candidate_drop_down_list_pane

0x64e2,	// (0x00050b84) fep_hwr_candidate_pane_g3_ParamLimits

0x64e2,	// (0x00050b84) fep_hwr_candidate_pane_g3

0x37f3,	// (0x0004de95) fep_hwr_candidate_pane_g4_ParamLimits

0x37f3,	// (0x0004de95) fep_hwr_candidate_pane_g4

0x0002,

0xfb22,	// (0x0005a1c4) fep_hwr_candidate_pane_g_ParamLimits

0xfb22,	// (0x0005a1c4) fep_hwr_candidate_pane_g

0xc239,	// (0x000568db) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc239,	// (0x000568db) fep_vkb_candidate_drop_down_list_pane

0xc64a,	// (0x00056cec) fep_vkb_candidate_pane_g3

0xc652,	// (0x00056cf4) fep_vkb_candidate_pane_g4

0x0002,

0xfb4f,	// (0x0005a1f1) fep_vkb_candidate_pane_g

0x654d,	// (0x00050bef) cell_hwr_candidate_pane_g1_ParamLimits

0x655b,	// (0x00050bfd) cell_hwr_candidate_pane_g3_ParamLimits

0x655b,	// (0x00050bfd) cell_hwr_candidate_pane_g3

0xdddf,	// (0x00058481) cell_hwr_candidate_pane_g4_ParamLimits

0xdddf,	// (0x00058481) cell_hwr_candidate_pane_g4

0x0002,

0xfb6e,	// (0x0005a210) cell_hwr_candidate_pane_g_ParamLimits

0xfb6e,	// (0x0005a210) cell_hwr_candidate_pane_g

0xc669,	// (0x00056d0b) cell_vkb_candidate_pane_g3_ParamLimits

0xc669,	// (0x00056d0b) cell_vkb_candidate_pane_g3

0xc684,	// (0x00056d26) cell_vkb_candidate_pane_g4_ParamLimits

0xc684,	// (0x00056d26) cell_vkb_candidate_pane_g4

0xc768,	// (0x00056e0a) cell_app_pane_cp2_g1_ParamLimits

0xc768,	// (0x00056e0a) cell_app_pane_cp2_g1

0xc786,	// (0x00056e28) cell_app_pane_cp2_g2_ParamLimits

0xc786,	// (0x00056e28) cell_app_pane_cp2_g2

0x0001,

0xfbb8,	// (0x0005a25a) cell_app_pane_cp2_g_ParamLimits

0xfbb8,	// (0x0005a25a) cell_app_pane_cp2_g

0xc792,	// (0x00056e34) cell_app_pane_cp2_t1_ParamLimits

0xc792,	// (0x00056e34) cell_app_pane_cp2_t1

0x8056,	// (0x000526f8) grid_highlight_pane_cp1_ParamLimits

0x8056,	// (0x000526f8) grid_highlight_pane_cp1

0x659a,	// (0x00050c3c) cell_hwr_candidate_pane_cp1_ParamLimits

0x659a,	// (0x00050c3c) cell_hwr_candidate_pane_cp1

0x654d,	// (0x00050bef) fep_hwr_candidate_drop_down_list_pane_g1

0x65b9,	// (0x00050c5b) fep_hwr_candidate_drop_down_list_pane_g2

0x65c6,	// (0x00050c68) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x0005a25f) fep_hwr_candidate_drop_down_list_pane_g

0x65d3,	// (0x00050c75) fep_hwr_candidate_drop_down_list_scroll_pane

0x65dc,	// (0x00050c7e) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x65dc,	// (0x00050c7e) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x65e9,	// (0x00050c8b) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x65e9,	// (0x00050c8b) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x65f6,	// (0x00050c98) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x65f6,	// (0x00050c98) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6603,	// (0x00050ca5) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6603,	// (0x00050ca5) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x661e,	// (0x00050cc0) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x661e,	// (0x00050cc0) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6639,	// (0x00050cdb) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6639,	// (0x00050cdb) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6654,	// (0x00050cf6) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6654,	// (0x00050cf6) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x666f,	// (0x00050d11) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x666f,	// (0x00050d11) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc4,	// (0x0005a266) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc4,	// (0x0005a266) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc7a4,	// (0x00056e46) cell_vkb_candidate_pane_cp1_ParamLimits

0xc7a4,	// (0x00056e46) cell_vkb_candidate_pane_cp1

0xc352,	// (0x000569f4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc352,	// (0x000569f4) fep_vkb_candidate_drop_down_list_pane_g1

0xc7c4,	// (0x00056e66) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc7c4,	// (0x00056e66) fep_vkb_candidate_drop_down_list_pane_g2

0xc7d1,	// (0x00056e73) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc7d1,	// (0x00056e73) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd5,	// (0x0005a277) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd5,	// (0x0005a277) fep_vkb_candidate_drop_down_list_pane_g

0xc7de,	// (0x00056e80) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc7de,	// (0x00056e80) fep_vkb_candidate_drop_down_list_scroll_pane

0xc7eb,	// (0x00056e8d) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc7eb,	// (0x00056e8d) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc7f8,	// (0x00056e9a) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc7f8,	// (0x00056e9a) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc804,	// (0x00056ea6) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc804,	// (0x00056ea6) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc810,	// (0x00056eb2) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc810,	// (0x00056eb2) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc831,	// (0x00056ed3) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc831,	// (0x00056ed3) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc852,	// (0x00056ef4) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc852,	// (0x00056ef4) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc873,	// (0x00056f15) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc873,	// (0x00056f15) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc894,	// (0x00056f36) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc894,	// (0x00056f36) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdc,	// (0x0005a27e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdc,	// (0x0005a27e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6fef,	// (0x00051691) title_pane_g1_ParamLimits

0x6ffc,	// (0x0005169e) title_pane_g2_ParamLimits

0xf56a,	// (0x00059c0c) title_pane_g_ParamLimits

0x86b8,	// (0x00052d5a) aid_call2_pane

0x86c0,	// (0x00052d62) aid_call_pane

0x86c8,	// (0x00052d6a) popup_clock_analogue_window_g1

0x86c8,	// (0x00052d6a) popup_clock_analogue_window_g2

0x5896,	// (0x0004ff38) popup_clock_analogue_window_g3

0x589f,	// (0x0004ff41) popup_clock_analogue_window_g4

0x6fdb,	// (0x0005167d) popup_clock_analogue_window_g5

0x0004,

0xf719,	// (0x00059dbb) popup_clock_analogue_window_g

0x58a7,	// (0x0004ff49) popup_clock_analogue_window_t1

0x58b5,	// (0x0004ff57) clock_digital_number_pane_ParamLimits

0x58b5,	// (0x0004ff57) clock_digital_number_pane

0x58c1,	// (0x0004ff63) clock_digital_number_pane_cp02_ParamLimits

0x58c1,	// (0x0004ff63) clock_digital_number_pane_cp02

0x58cd,	// (0x0004ff6f) clock_digital_number_pane_cp03_ParamLimits

0x58cd,	// (0x0004ff6f) clock_digital_number_pane_cp03

0x58d9,	// (0x0004ff7b) clock_digital_number_pane_cp04_ParamLimits

0x58d9,	// (0x0004ff7b) clock_digital_number_pane_cp04

0x58e5,	// (0x0004ff87) clock_digital_separator_pane_ParamLimits

0x58e5,	// (0x0004ff87) clock_digital_separator_pane

0x58f1,	// (0x0004ff93) popup_clock_digital_window_t1_ParamLimits

0x58f1,	// (0x0004ff93) popup_clock_digital_window_t1

0x6fdb,	// (0x0005167d) clock_digital_number_pane_g1

0x6fdb,	// (0x0005167d) clock_digital_number_pane_g2

0x0001,

0xf724,	// (0x00059dc6) clock_digital_number_pane_g

0x6fdb,	// (0x0005167d) clock_digital_separator_pane_g1

0x6fdb,	// (0x0005167d) clock_digital_separator_pane_g2

0x0001,

0xf724,	// (0x00059dc6) clock_digital_separator_pane_g

0x95b0,	// (0x00053c52) aid_fill_nsta_ParamLimits

0x96f2,	// (0x00053d94) indicator_nsta_pane_ParamLimits

0x9886,	// (0x00053f28) popup_clock_analogue_window

0x9886,	// (0x00053f28) popup_clock_digital_window

0x70c5,	// (0x00051767) grid_indicator_nsta_pane_ParamLimits

0xba9f,	// (0x00056141) clock_nsta_pane_t2

0x0001,

0xfaa2,	// (0x0005a144) clock_nsta_pane_t

0x585a,	// (0x0004fefc) aid_size_max_handle

0x5864,	// (0x0004ff06) aid_size_min_handle

0x8c99,	// (0x0005333b) editor_scroll_pane

0xc8af,	// (0x00056f51) ex_editor_pane

0x81d0,	// (0x00052872) scroll_pane_cp13

0x7ff5,	// (0x00052697) scroll_pane_cp14

0x86f2,	// (0x00052d94) scroll_pane_cp36

0x871e,	// (0x00052dc0) list_single_graphic_hl_pane_cp2_ParamLimits

0x871e,	// (0x00052dc0) list_single_graphic_hl_pane_cp2

0x61b3,	// (0x00050855) list_single_graphic_hl_pane_ParamLimits

0x61b3,	// (0x00050855) list_single_graphic_hl_pane

0x77d3,	// (0x00051e75) aid_size_min_hl_cp1

0xc8b7,	// (0x00056f59) list_highlight_pane_cp34_ParamLimits

0xc8b7,	// (0x00056f59) list_highlight_pane_cp34

0xc8c8,	// (0x00056f6a) list_single_graphic_hl_pane_g1_ParamLimits

0xc8c8,	// (0x00056f6a) list_single_graphic_hl_pane_g1

0x77dc,	// (0x00051e7e) list_single_graphic_hl_pane_g2_ParamLimits

0x77dc,	// (0x00051e7e) list_single_graphic_hl_pane_g2

0x77dc,	// (0x00051e7e) list_single_graphic_hl_pane_g3_ParamLimits

0x77dc,	// (0x00051e7e) list_single_graphic_hl_pane_g3

0x8c0a,	// (0x000532ac) list_single_graphic_hl_pane_g4_ParamLimits

0x8c0a,	// (0x000532ac) list_single_graphic_hl_pane_g4

0x77e8,	// (0x00051e8a) list_single_graphic_hl_pane_g5_ParamLimits

0x77e8,	// (0x00051e8a) list_single_graphic_hl_pane_g5

0x0004,

0xfbed,	// (0x0005a28f) list_single_graphic_hl_pane_g_ParamLimits

0xfbed,	// (0x0005a28f) list_single_graphic_hl_pane_g

0x77fc,	// (0x00051e9e) list_single_graphic_hl_pane_t1_ParamLimits

0x77fc,	// (0x00051e9e) list_single_graphic_hl_pane_t1

0xc8d5,	// (0x00056f77) aid_size_min_hl_cp2

0xc8de,	// (0x00056f80) list_highlight_pane_cp34_cp2_ParamLimits

0xc8de,	// (0x00056f80) list_highlight_pane_cp34_cp2

0xc8c8,	// (0x00056f6a) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc8c8,	// (0x00056f6a) list_single_graphic_hl_pane_g1_cp2

0xc8eb,	// (0x00056f8d) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc8eb,	// (0x00056f8d) list_single_graphic_hl_pane_g2_cp2

0xc8f7,	// (0x00056f99) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc8f7,	// (0x00056f99) list_single_graphic_hl_pane_g3_cp2

0x9a53,	// (0x000540f5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x9a53,	// (0x000540f5) list_single_graphic_hl_pane_g4_cp2

0xc905,	// (0x00056fa7) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc905,	// (0x00056fa7) list_single_graphic_hl_pane_g5_cp2

0x5c2b,	// (0x000502cd) control_pane_g4_ParamLimits

0x5c2b,	// (0x000502cd) control_pane_g4

0x8ff7,	// (0x00053699) bg_popup_sub_pane_cp10_ParamLimits

0xc0ca,	// (0x0005676c) list_choice_list_pane_ParamLimits

0xc0d9,	// (0x0005677b) scroll_pane_cp23

0x7a73,	// (0x00052115) bg_popup_preview_window_pane_cp02_ParamLimits

0xc6d5,	// (0x00056d77) list_preview_fixed_pane_ParamLimits

0xc6eb,	// (0x00056d8d) list_preview_fixed_pane_cp_ParamLimits

0xc6eb,	// (0x00056d8d) list_preview_fixed_pane_cp

0xc6f7,	// (0x00056d99) popup_preview_fixed_window_g1_ParamLimits

0xc6f7,	// (0x00056d99) popup_preview_fixed_window_g1

0xc703,	// (0x00056da5) popup_preview_fixed_window_g2_ParamLimits

0xc703,	// (0x00056da5) popup_preview_fixed_window_g2

0x0002,

0xfb75,	// (0x0005a217) popup_preview_fixed_window_g_ParamLimits

0xfb75,	// (0x0005a217) popup_preview_fixed_window_g

0x57ce,	// (0x0004fe70) aid_navi_side_left_pane_ParamLimits

0x57e3,	// (0x0004fe85) aid_navi_side_right_pane_ParamLimits

0x57fb,	// (0x0004fe9d) navi_icon_pane_stacon_ParamLimits

0x580f,	// (0x0004feb1) navi_navi_pane_stacon_ParamLimits

0x57fb,	// (0x0004fe9d) navi_text_pane_stacon_ParamLimits

0x6fd1,	// (0x00051673) main_text_info_pane

0xc92f,	// (0x00056fd1) listscroll_text_info_pane

0xc937,	// (0x00056fd9) list_text_info_pane_ParamLimits

0xc937,	// (0x00056fd9) list_text_info_pane

0xc946,	// (0x00056fe8) scroll_pane_cp24_ParamLimits

0xc946,	// (0x00056fe8) scroll_pane_cp24

0xc964,	// (0x00057006) list_text_info_pane_t1_ParamLimits

0xc964,	// (0x00057006) list_text_info_pane_t1

0x9039,	// (0x000536db) popup_fast_swap2_window_ParamLimits

0x9039,	// (0x000536db) popup_fast_swap2_window

0xc995,	// (0x00057037) aid_size_cell_fast2

0x6fd1,	// (0x00051673) bg_popup_window_pane_cp17

0x9f6d,	// (0x0005460f) heading_pane_cp2

0x7cbf,	// (0x00052361) listscroll_fast2_pane

0xc99f,	// (0x00057041) grid_fast2_pane

0xc9a9,	// (0x0005704b) listscroll_fast2_pane_g1

0xc9b1,	// (0x00057053) listscroll_fast2_pane_g2

0x0001,

0xfbf8,	// (0x0005a29a) listscroll_fast2_pane_g

0x81d0,	// (0x00052872) scroll_pane_cp26

0xc9bb,	// (0x0005705d) cell_fast2_pane_ParamLimits

0xc9bb,	// (0x0005705d) cell_fast2_pane

0xc9d0,	// (0x00057072) cell_fast2_pane_g1

0xc9d9,	// (0x0005707b) cell_fast2_pane_g2

0xc9e2,	// (0x00057084) cell_fast2_pane_g3

0x0002,

0xfbfd,	// (0x0005a29f) cell_fast2_pane_g

0x7db2,	// (0x00052454) grid_highlight_pane_cp9

0x7dc7,	// (0x00052469) main_eswt_pane_ParamLimits

0x7dc7,	// (0x00052469) main_eswt_pane

0xc95b,	// (0x00056ffd) list_single_text_info_pane

0xc9ea,	// (0x0005708c) eswt_ctrl_button_pane

0xc9ea,	// (0x0005708c) eswt_ctrl_canvas_pane

0xc9f2,	// (0x00057094) eswt_ctrl_combo_pane

0xc9ea,	// (0x0005708c) eswt_ctrl_default_pane

0xc9ea,	// (0x0005708c) eswt_ctrl_label_pane

0xc9fa,	// (0x0005709c) eswt_ctrl_wait_pane

0xca02,	// (0x000570a4) eswt_shell_pane

0x6fd1,	// (0x00051673) listscroll_eswt_app_pane

0xca22,	// (0x000570c4) popup_eswt_tasktip_window_ParamLimits

0xca22,	// (0x000570c4) popup_eswt_tasktip_window

0x9bab,	// (0x0005424d) bg_popup_window_pane_cp18

0xca33,	// (0x000570d5) eswt_control_pane_g1_ParamLimits

0xca33,	// (0x000570d5) eswt_control_pane_g1

0xca40,	// (0x000570e2) eswt_control_pane_g2_ParamLimits

0xca40,	// (0x000570e2) eswt_control_pane_g2

0xca4d,	// (0x000570ef) eswt_control_pane_g3_ParamLimits

0xca4d,	// (0x000570ef) eswt_control_pane_g3

0xca5a,	// (0x000570fc) eswt_control_pane_g4_ParamLimits

0xca5a,	// (0x000570fc) eswt_control_pane_g4

0x0003,

0xfc04,	// (0x0005a2a6) eswt_control_pane_g_ParamLimits

0xfc04,	// (0x0005a2a6) eswt_control_pane_g

0x8056,	// (0x000526f8) bg_button_pane_ParamLimits

0x8056,	// (0x000526f8) bg_button_pane

0x7dc7,	// (0x00052469) common_borders_pane_copy2_ParamLimits

0x7dc7,	// (0x00052469) common_borders_pane_copy2

0xca67,	// (0x00057109) control_button_pane_g1_ParamLimits

0xca67,	// (0x00057109) control_button_pane_g1

0xca73,	// (0x00057115) control_button_pane_g2_ParamLimits

0xca73,	// (0x00057115) control_button_pane_g2

0xca7f,	// (0x00057121) control_button_pane_g3_ParamLimits

0xca7f,	// (0x00057121) control_button_pane_g3

0x0002,

0xfc0d,	// (0x0005a2af) control_button_pane_g_ParamLimits

0xfc0d,	// (0x0005a2af) control_button_pane_g

0xca93,	// (0x00057135) control_button_pane_t1

0xcaa1,	// (0x00057143) control_button_pane_t2

0x0001,

0xfc14,	// (0x0005a2b6) control_button_pane_t

0x9abb,	// (0x0005415d) bg_button_pane_g1

0x9acb,	// (0x0005416d) bg_button_pane_g2

0x9ac3,	// (0x00054165) bg_button_pane_g3

0x9adb,	// (0x0005417d) bg_button_pane_g4

0x9ad3,	// (0x00054175) bg_button_pane_g5

0x9ae3,	// (0x00054185) bg_button_pane_g6

0x9aeb,	// (0x0005418d) bg_button_pane_g7

0x9afb,	// (0x0005419d) bg_button_pane_g8

0x9af3,	// (0x00054195) bg_button_pane_g9

0x0008,

0xf87c,	// (0x00059f1e) bg_button_pane_g

0xc085,	// (0x00056727) common_borders_pane_ParamLimits

0xc085,	// (0x00056727) common_borders_pane

0xca33,	// (0x000570d5) eswt_control_pane_g1_copy1_ParamLimits

0xca33,	// (0x000570d5) eswt_control_pane_g1_copy1

0xca40,	// (0x000570e2) eswt_control_pane_g2_copy1_ParamLimits

0xca40,	// (0x000570e2) eswt_control_pane_g2_copy1

0xca4d,	// (0x000570ef) eswt_control_pane_g3_copy1_ParamLimits

0xca4d,	// (0x000570ef) eswt_control_pane_g3_copy1

0xca5a,	// (0x000570fc) eswt_control_pane_g4_copy1_ParamLimits

0xca5a,	// (0x000570fc) eswt_control_pane_g4_copy1

0xc0c0,	// (0x00056762) bg_eswt_ctrl_canvas_pane_g1

0xc085,	// (0x00056727) common_borders_pane_cp2_ParamLimits

0xc085,	// (0x00056727) common_borders_pane_cp2

0xc085,	// (0x00056727) common_borders_pane_cp3_ParamLimits

0xc085,	// (0x00056727) common_borders_pane_cp3

0xcaaf,	// (0x00057151) separator_horizontal_pane

0xcab7,	// (0x00057159) separator_vertical_pane

0xca33,	// (0x000570d5) eswt_control_pane_g1_copy2_ParamLimits

0xca33,	// (0x000570d5) eswt_control_pane_g1_copy2

0xca40,	// (0x000570e2) eswt_control_pane_g2_copy2_ParamLimits

0xca40,	// (0x000570e2) eswt_control_pane_g2_copy2

0xca4d,	// (0x000570ef) eswt_control_pane_g3_copy2_ParamLimits

0xca4d,	// (0x000570ef) eswt_control_pane_g3_copy2

0xca5a,	// (0x000570fc) eswt_control_pane_g4_copy2_ParamLimits

0xca5a,	// (0x000570fc) eswt_control_pane_g4_copy2

0x6fd1,	// (0x00051673) common_borders_pane_cp4

0xcac0,	// (0x00057162) separator_horizontal_pane_g1

0xcac9,	// (0x0005716b) separator_horizontal_pane_g2

0xcad2,	// (0x00057174) separator_horizontal_pane_g3

0x0002,

0xfc19,	// (0x0005a2bb) separator_horizontal_pane_g

0xca33,	// (0x000570d5) eswt_control_pane_g1_copy3_ParamLimits

0xca33,	// (0x000570d5) eswt_control_pane_g1_copy3

0xca40,	// (0x000570e2) eswt_control_pane_g2_copy3_ParamLimits

0xca40,	// (0x000570e2) eswt_control_pane_g2_copy3

0xca4d,	// (0x000570ef) eswt_control_pane_g3_copy3_ParamLimits

0xca4d,	// (0x000570ef) eswt_control_pane_g3_copy3

0xca5a,	// (0x000570fc) eswt_control_pane_g4_copy3_ParamLimits

0xca5a,	// (0x000570fc) eswt_control_pane_g4_copy3

0x6fd1,	// (0x00051673) common_borders_pane_cp5

0xcadb,	// (0x0005717d) separator_vertical_pane_g1

0xcae4,	// (0x00057186) separator_vertical_pane_g2

0xcaed,	// (0x0005718f) separator_vertical_pane_g3

0x0002,

0xfc20,	// (0x0005a2c2) separator_vertical_pane_g

0xca33,	// (0x000570d5) eswt_control_pane_g1_copy4_ParamLimits

0xca33,	// (0x000570d5) eswt_control_pane_g1_copy4

0xca40,	// (0x000570e2) eswt_control_pane_g2_copy4_ParamLimits

0xca40,	// (0x000570e2) eswt_control_pane_g2_copy4

0xca4d,	// (0x000570ef) eswt_control_pane_g3_copy4_ParamLimits

0xca4d,	// (0x000570ef) eswt_control_pane_g3_copy4

0xca5a,	// (0x000570fc) eswt_control_pane_g4_copy4_ParamLimits

0xca5a,	// (0x000570fc) eswt_control_pane_g4_copy4

0xcaf6,	// (0x00057198) eswt_ctrl_combo_button_pane

0xcafe,	// (0x000571a0) eswt_ctrl_input_pane

0xcb06,	// (0x000571a8) popup_choice_list_window_cp70

0xcb0e,	// (0x000571b0) eswt_ctrl_input_pane_t1

0x6fd1,	// (0x00051673) input_focus_pane_cp70

0xc085,	// (0x00056727) bg_button_pane_cp70_ParamLimits

0xc085,	// (0x00056727) bg_button_pane_cp70

0xcb1c,	// (0x000571be) eswt_ctrl_combo_button_pane_g1

0xcb24,	// (0x000571c6) wait_bar_pane_cp70

0x9bab,	// (0x0005424d) bg_popup_window_pane_cp70_ParamLimits

0x9bab,	// (0x0005424d) bg_popup_window_pane_cp70

0xcb2c,	// (0x000571ce) popup_eswt_tasktip_window_t1

0xcb42,	// (0x000571e4) wait_bar_pane_cp71_ParamLimits

0xcb42,	// (0x000571e4) wait_bar_pane_cp71

0xcb4e,	// (0x000571f0) grid_eswt_app_pane

0x84fa,	// (0x00052b9c) scroll_pane_cp70

0xcb57,	// (0x000571f9) cell_eswt_app_pane_ParamLimits

0xcb57,	// (0x000571f9) cell_eswt_app_pane

0xcb87,	// (0x00057229) cell_eswt_app_pane_g1_ParamLimits

0xcb87,	// (0x00057229) cell_eswt_app_pane_g1

0xcbb6,	// (0x00057258) cell_eswt_app_pane_g2_ParamLimits

0xcbb6,	// (0x00057258) cell_eswt_app_pane_g2

0x0001,

0xfc27,	// (0x0005a2c9) cell_eswt_app_pane_g_ParamLimits

0xfc27,	// (0x0005a2c9) cell_eswt_app_pane_g

0xcbdf,	// (0x00057281) cell_eswt_app_pane_t1_ParamLimits

0xcbdf,	// (0x00057281) cell_eswt_app_pane_t1

0xcc11,	// (0x000572b3) grid_highlight_pane_cp70_ParamLimits

0xcc11,	// (0x000572b3) grid_highlight_pane_cp70

0x8394,	// (0x00052a36) set_content_pane_g1

0x8f45,	// (0x000535e7) status_small_volume_pane

0x668a,	// (0x00050d2c) status_small_volume_pane_g1

0x6692,	// (0x00050d34) volume_small2_pane

0x669b,	// (0x00050d3d) volume_small2_pane_g1

0x66a4,	// (0x00050d46) volume_small2_pane_g2

0x66ad,	// (0x00050d4f) volume_small2_pane_g3

0x66b6,	// (0x00050d58) volume_small2_pane_g4

0x66bf,	// (0x00050d61) volume_small2_pane_g5

0x66c8,	// (0x00050d6a) volume_small2_pane_g6

0x66d1,	// (0x00050d73) volume_small2_pane_g7

0x66da,	// (0x00050d7c) volume_small2_pane_g8

0x66e3,	// (0x00050d85) volume_small2_pane_g9

0x66ec,	// (0x00050d8e) volume_small2_pane_g10

0x0009,

0xfc2c,	// (0x0005a2ce) volume_small2_pane_g

0xc49a,	// (0x00056b3c) fep_vkb_top_text_pane_g1_ParamLimits

0xc4b5,	// (0x00056b57) fep_vkb_top_text_pane_t1_ParamLimits

0xc70f,	// (0x00056db1) popup_preview_fixed_window_g3_ParamLimits

0xc70f,	// (0x00056db1) popup_preview_fixed_window_g3

0x94e6,	// (0x00053b88) popup_toolbar_trans_pane

0xaeed,	// (0x0005558f) aid_height_set_list_ParamLimits

0xaefe,	// (0x000555a0) aid_size_parent_ParamLimits

0x8ff7,	// (0x00053699) list_highlight_pane_cp2_ParamLimits

0x8394,	// (0x00052a36) set_content_pane_g1_ParamLimits

0x7389,	// (0x00051a2b) list_single_image_pane_ParamLimits

0x7389,	// (0x00051a2b) list_single_image_pane

0xcc1d,	// (0x000572bf) aid_size_cell_image_ParamLimits

0xcc1d,	// (0x000572bf) aid_size_cell_image

0xcc2a,	// (0x000572cc) grid_single_image_pane_ParamLimits

0xcc2a,	// (0x000572cc) grid_single_image_pane

0x973c,	// (0x00053dde) list_single_image_pane_g1_ParamLimits

0x973c,	// (0x00053dde) list_single_image_pane_g1

0xc73c,	// (0x00056dde) list_single_image_pane_g2_ParamLimits

0xc73c,	// (0x00056dde) list_single_image_pane_g2

0x0001,

0xfc41,	// (0x0005a2e3) list_single_image_pane_g_ParamLimits

0xfc41,	// (0x0005a2e3) list_single_image_pane_g

0x9748,	// (0x00053dea) list_single_image_pane_t1_ParamLimits

0x9748,	// (0x00053dea) list_single_image_pane_t1

0xcc38,	// (0x000572da) cell_image_list_pane_ParamLimits

0xcc38,	// (0x000572da) cell_image_list_pane

0xcc4b,	// (0x000572ed) cell_image_list_pane_g1

0xcc54,	// (0x000572f6) cell_image_list_pane_g2

0x0001,

0xfc46,	// (0x0005a2e8) cell_image_list_pane_g

0xcc5d,	// (0x000572ff) aid_size_cell_tb_trans_pane

0x8056,	// (0x000526f8) bg_tb_trans_pane

0xcc6f,	// (0x00057311) grid_tb_trans_pane

0x9abb,	// (0x0005415d) bg_tb_trans_pane_g1

0x9acb,	// (0x0005416d) bg_tb_trans_pane_g2

0x9ac3,	// (0x00054165) bg_tb_trans_pane_g3

0x9adb,	// (0x0005417d) bg_tb_trans_pane_g4

0x9ad3,	// (0x00054175) bg_tb_trans_pane_g5

0x9afb,	// (0x0005419d) bg_tb_trans_pane_g6

0x9af3,	// (0x00054195) bg_tb_trans_pane_g7

0x9ae3,	// (0x00054185) bg_tb_trans_pane_g8

0x9aeb,	// (0x0005418d) bg_tb_trans_pane_g9

0x0008,

0xfc4b,	// (0x0005a2ed) bg_tb_trans_pane_g

0xcc83,	// (0x00057325) cell_toolbar_trans_pane_ParamLimits

0xcc83,	// (0x00057325) cell_toolbar_trans_pane

0xc0c0,	// (0x00056762) cell_toolbar_trans_pane_g1

0xbc89,	// (0x0005632b) list_form2_midp_pane_t1

0xbc97,	// (0x00056339) list_form2_midp_pane_t2

0x0001,

0xfae8,	// (0x0005a18a) list_form2_midp_pane_t

0xbca5,	// (0x00056347) scroll_pane_cp51_ParamLimits

0xbe61,	// (0x00056503) form2_midp_wait_pane_g1

0xbe6a,	// (0x0005650c) form2_midp_wait_pane_g2

0xbe73,	// (0x00056515) form2_midp_wait_pane_g3

0x0002,

0xfafd,	// (0x0005a19f) form2_midp_wait_pane_g

0x70c5,	// (0x00051767) list_highlight_pane_cp21_ParamLimits

0xbeca,	// (0x0005656c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbed9,	// (0x0005657b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x732d,	// (0x000519cf) list_single_2graphic_im_pane_ParamLimits

0x732d,	// (0x000519cf) list_single_2graphic_im_pane

0xcca9,	// (0x0005734b) list_single_2graphic_im_pane_g1_ParamLimits

0xcca9,	// (0x0005734b) list_single_2graphic_im_pane_g1

0xccba,	// (0x0005735c) list_single_2graphic_im_pane_g2_ParamLimits

0xccba,	// (0x0005735c) list_single_2graphic_im_pane_g2

0xccc6,	// (0x00057368) list_single_2graphic_im_pane_g3_ParamLimits

0xccc6,	// (0x00057368) list_single_2graphic_im_pane_g3

0x0003,

0xfc5e,	// (0x0005a300) list_single_2graphic_im_pane_g_ParamLimits

0xfc5e,	// (0x0005a300) list_single_2graphic_im_pane_g

0xcce6,	// (0x00057388) list_single_2graphic_im_pane_t1_ParamLimits

0xcce6,	// (0x00057388) list_single_2graphic_im_pane_t1

0xc71b,	// (0x00056dbd) list_single_graphic_2heading_pane_fp_ParamLimits

0xc71b,	// (0x00056dbd) list_single_graphic_2heading_pane_fp

0x7645,	// (0x00051ce7) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7645,	// (0x00051ce7) list_single_graphic_2heading_pane_fp_g1

0xc730,	// (0x00056dd2) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc730,	// (0x00056dd2) list_single_graphic_2heading_pane_fp_g2

0x973c,	// (0x00053dde) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x973c,	// (0x00053dde) list_single_graphic_2heading_pane_fp_g3

0xc73c,	// (0x00056dde) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc73c,	// (0x00056dde) list_single_graphic_2heading_pane_fp_g4

0xc750,	// (0x00056df2) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc750,	// (0x00056df2) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0005a227) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0005a227) list_single_graphic_2heading_pane_fp_g

0x7812,	// (0x00051eb4) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7812,	// (0x00051eb4) list_single_graphic_2heading_pane_fp_t1

0x767d,	// (0x00051d1f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x767d,	// (0x00051d1f) list_single_graphic_2heading_pane_fp_t2

0x7828,	// (0x00051eca) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7828,	// (0x00051eca) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc67,	// (0x0005a309) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc67,	// (0x0005a309) list_single_graphic_2heading_pane_fp_t

0xc160,	// (0x00056802) fep_hwr_write_pane_g5_ParamLimits

0xc160,	// (0x00056802) fep_hwr_write_pane_g5

0xc16c,	// (0x0005680e) fep_hwr_write_pane_g6_ParamLimits

0xc16c,	// (0x0005680e) fep_hwr_write_pane_g6

0xca02,	// (0x000570a4) eswt_shell_pane_ParamLimits

0x9bab,	// (0x0005424d) bg_popup_window_pane_cp18_ParamLimits

0xae46,	// (0x000554e8) heading_pane_cp70

0xcb2c,	// (0x000571ce) popup_eswt_tasktip_window_t1_ParamLimits

0x9605,	// (0x00053ca7) aid_touch_tab_arrow_left

0x9611,	// (0x00053cb3) aid_touch_tab_arrow_right

0x700d,	// (0x000516af) title_pane_g3_ParamLimits

0x700d,	// (0x000516af) title_pane_g3

0x8015,	// (0x000526b7) set_value_pane_g1

0x94e6,	// (0x00053b88) popup_toolbar_trans_pane_ParamLimits

0xcc5d,	// (0x000572ff) aid_size_cell_tb_trans_pane_ParamLimits

0x8056,	// (0x000526f8) bg_tb_trans_pane_ParamLimits

0xcc6f,	// (0x00057311) grid_tb_trans_pane_ParamLimits

0x7a73,	// (0x00052115) cont_note_pane_ParamLimits

0x7a73,	// (0x00052115) cont_note_pane

0x7dc7,	// (0x00052469) cont_snote2_single_text_pane_ParamLimits

0x7dc7,	// (0x00052469) cont_snote2_single_text_pane

0x7dc7,	// (0x00052469) cont_snote2_single_graphic_pane_ParamLimits

0x7dc7,	// (0x00052469) cont_snote2_single_graphic_pane

0xa197,	// (0x00054839) cont_note_wait_pane_ParamLimits

0xa197,	// (0x00054839) cont_note_wait_pane

0xa197,	// (0x00054839) cont_note_image_pane_ParamLimits

0xa197,	// (0x00054839) cont_note_image_pane

0xcd17,	// (0x000573b9) popup_note2_window_g1_ParamLimits

0xcd17,	// (0x000573b9) popup_note2_window_g1

0xcd48,	// (0x000573ea) popup_note2_window_t1_ParamLimits

0xcd48,	// (0x000573ea) popup_note2_window_t1

0xcd8d,	// (0x0005742f) popup_note2_window_t2_ParamLimits

0xcd8d,	// (0x0005742f) popup_note2_window_t2

0xcdd2,	// (0x00057474) popup_note2_window_t3_ParamLimits

0xcdd2,	// (0x00057474) popup_note2_window_t3

0xce17,	// (0x000574b9) popup_note2_window_t4_ParamLimits

0xce17,	// (0x000574b9) popup_note2_window_t4

0x7af7,	// (0x00052199) popup_note2_window_t5_ParamLimits

0x7af7,	// (0x00052199) popup_note2_window_t5

0x0004,

0xfc73,	// (0x0005a315) popup_note2_window_t_ParamLimits

0xfc73,	// (0x0005a315) popup_note2_window_t

0xce46,	// (0x000574e8) popup_note2_image_window_g1_ParamLimits

0xce46,	// (0x000574e8) popup_note2_image_window_g1

0xce52,	// (0x000574f4) popup_note2_image_window_g2_ParamLimits

0xce52,	// (0x000574f4) popup_note2_image_window_g2

0x0001,

0xfc7e,	// (0x0005a320) popup_note2_image_window_g_ParamLimits

0xfc7e,	// (0x0005a320) popup_note2_image_window_g

0xce64,	// (0x00057506) popup_note2_image_window_t1_ParamLimits

0xce64,	// (0x00057506) popup_note2_image_window_t1

0xce7c,	// (0x0005751e) popup_note2_image_window_t2_ParamLimits

0xce7c,	// (0x0005751e) popup_note2_image_window_t2

0xce94,	// (0x00057536) popup_note2_image_window_t3_ParamLimits

0xce94,	// (0x00057536) popup_note2_image_window_t3

0x0002,

0xfc83,	// (0x0005a325) popup_note2_image_window_t_ParamLimits

0xfc83,	// (0x0005a325) popup_note2_image_window_t

0xa1a5,	// (0x00054847) popup_note2_wait_window_g1_ParamLimits

0xa1a5,	// (0x00054847) popup_note2_wait_window_g1

0xceb0,	// (0x00057552) popup_note2_wait_window_g2_ParamLimits

0xceb0,	// (0x00057552) popup_note2_wait_window_g2

0xa1bd,	// (0x0005485f) popup_note2_wait_window_g3_ParamLimits

0xa1bd,	// (0x0005485f) popup_note2_wait_window_g3

0x0002,

0xfc8a,	// (0x0005a32c) popup_note2_wait_window_g_ParamLimits

0xfc8a,	// (0x0005a32c) popup_note2_wait_window_g

0xcebc,	// (0x0005755e) popup_note2_wait_window_t1_ParamLimits

0xcebc,	// (0x0005755e) popup_note2_wait_window_t1

0xceda,	// (0x0005757c) popup_note2_wait_window_t2_ParamLimits

0xceda,	// (0x0005757c) popup_note2_wait_window_t2

0xcef8,	// (0x0005759a) popup_note2_wait_window_t3_ParamLimits

0xcef8,	// (0x0005759a) popup_note2_wait_window_t3

0xcf0a,	// (0x000575ac) popup_note2_wait_window_t4_ParamLimits

0xcf0a,	// (0x000575ac) popup_note2_wait_window_t4

0x0003,

0xfc91,	// (0x0005a333) popup_note2_wait_window_t_ParamLimits

0xfc91,	// (0x0005a333) popup_note2_wait_window_t

0xcf1c,	// (0x000575be) wait_bar2_pane_ParamLimits

0xcf1c,	// (0x000575be) wait_bar2_pane

0xcf34,	// (0x000575d6) popup_snote2_single_text_window_g1_ParamLimits

0xcf34,	// (0x000575d6) popup_snote2_single_text_window_g1

0xcf5c,	// (0x000575fe) popup_snote2_single_text_window_t1_ParamLimits

0xcf5c,	// (0x000575fe) popup_snote2_single_text_window_t1

0xcfa8,	// (0x0005764a) popup_snote2_single_text_window_t2_ParamLimits

0xcfa8,	// (0x0005764a) popup_snote2_single_text_window_t2

0xcff4,	// (0x00057696) popup_snote2_single_text_window_t3_ParamLimits

0xcff4,	// (0x00057696) popup_snote2_single_text_window_t3

0xd035,	// (0x000576d7) popup_snote2_single_text_window_t4_ParamLimits

0xd035,	// (0x000576d7) popup_snote2_single_text_window_t4

0xd06b,	// (0x0005770d) popup_snote2_single_text_window_t5_ParamLimits

0xd06b,	// (0x0005770d) popup_snote2_single_text_window_t5

0x0004,

0xfc9a,	// (0x0005a33c) popup_snote2_single_text_window_t_ParamLimits

0xfc9a,	// (0x0005a33c) popup_snote2_single_text_window_t

0xd096,	// (0x00057738) popup_snote2_single_graphic_window_g1_ParamLimits

0xd096,	// (0x00057738) popup_snote2_single_graphic_window_g1

0xd0be,	// (0x00057760) popup_snote2_single_graphic_window_g2_ParamLimits

0xd0be,	// (0x00057760) popup_snote2_single_graphic_window_g2

0x0001,

0xfca5,	// (0x0005a347) popup_snote2_single_graphic_window_g_ParamLimits

0xfca5,	// (0x0005a347) popup_snote2_single_graphic_window_g

0xd0e6,	// (0x00057788) popup_snote2_single_graphic_window_t1_ParamLimits

0xd0e6,	// (0x00057788) popup_snote2_single_graphic_window_t1

0xd132,	// (0x000577d4) popup_snote2_single_graphic_window_t2_ParamLimits

0xd132,	// (0x000577d4) popup_snote2_single_graphic_window_t2

0xcff4,	// (0x00057696) popup_snote2_single_graphic_window_t3_ParamLimits

0xcff4,	// (0x00057696) popup_snote2_single_graphic_window_t3

0xd035,	// (0x000576d7) popup_snote2_single_graphic_window_t4_ParamLimits

0xd035,	// (0x000576d7) popup_snote2_single_graphic_window_t4

0xd06b,	// (0x0005770d) popup_snote2_single_graphic_window_t5_ParamLimits

0xd06b,	// (0x0005770d) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaa,	// (0x0005a34c) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaa,	// (0x0005a34c) popup_snote2_single_graphic_window_t

0xbb62,	// (0x00056204) clock_nsta_pane_cp2_t1

0xbb62,	// (0x00056204) clock_nsta_pane_cp2_t2

0x0001,

0xfabe,	// (0x0005a160) clock_nsta_pane_cp2_t

0x554a,	// (0x0004fbec) form_field_data_wide_pane_g1_ParamLimits

0x8070,	// (0x00052712) form_field_data_wide_pane_g2_ParamLimits

0x8070,	// (0x00052712) form_field_data_wide_pane_g2

0x807c,	// (0x0005271e) form_field_data_wide_pane_g3_ParamLimits

0x807c,	// (0x0005271e) form_field_data_wide_pane_g3

0x0002,

0xf69c,	// (0x00059d3e) form_field_data_wide_pane_g_ParamLimits

0xf69c,	// (0x00059d3e) form_field_data_wide_pane_g

0xba3b,	// (0x000560dd) grid_touch_3_pane_ParamLimits

0xba3b,	// (0x000560dd) grid_touch_3_pane

0xd17e,	// (0x00057820) cell_touch_3_pane_ParamLimits

0xd17e,	// (0x00057820) cell_touch_3_pane

0xc0c0,	// (0x00056762) cell_touch_3_pane_g1

0xc0c0,	// (0x00056762) cell_touch_3_pane_g2

0x0001,

0xfb43,	// (0x0005a1e5) cell_touch_3_pane_g

0x7b29,	// (0x000521cb) cont_query_data_pane

0x7b31,	// (0x000521d3) cont_query_data_pane_cp1

0xd1ac,	// (0x0005784e) button_value_adjust_pane_cp7

0xd1b4,	// (0x00057856) query_popup_pane_cp3

0x878d,	// (0x00052e2f) bg_popup_sub_pane_cp22_ParamLimits

0x5910,	// (0x0004ffb2) navi_navi_volume_pane_cp2

0x592b,	// (0x0004ffcd) popup_side_volume_key_window_g2

0x593a,	// (0x0004ffdc) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x00059dd0) popup_side_volume_key_window_g

0x5957,	// (0x0004fff9) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x00059dd7) popup_side_volume_key_window_t

0x8a44,	// (0x000530e6) popup_side_volume_key_window_ParamLimits

0x5157,	// (0x0004f7f9) list_double_graphic_pane_g4_ParamLimits

0x5157,	// (0x0004f7f9) list_double_graphic_pane_g4

0x736a,	// (0x00051a0c) list_single_2heading_msg_pane_ParamLimits

0x736a,	// (0x00051a0c) list_single_2heading_msg_pane

0x7848,	// (0x00051eea) list_single_2heading_msg_pane_g1_ParamLimits

0x7848,	// (0x00051eea) list_single_2heading_msg_pane_g1

0x8bd2,	// (0x00053274) list_single_2heading_msg_pane_g2_ParamLimits

0x8bd2,	// (0x00053274) list_single_2heading_msg_pane_g2

0x7854,	// (0x00051ef6) list_single_2heading_msg_pane_g3_ParamLimits

0x7854,	// (0x00051ef6) list_single_2heading_msg_pane_g3

0x7860,	// (0x00051f02) list_single_2heading_msg_pane_g4_ParamLimits

0x7860,	// (0x00051f02) list_single_2heading_msg_pane_g4

0x0003,

0xfcb5,	// (0x0005a357) list_single_2heading_msg_pane_g_ParamLimits

0xfcb5,	// (0x0005a357) list_single_2heading_msg_pane_g

0x7878,	// (0x00051f1a) list_single_2heading_msg_pane_t1_ParamLimits

0x7878,	// (0x00051f1a) list_single_2heading_msg_pane_t1

0x78a0,	// (0x00051f42) list_single_2heading_msg_pane_t2_ParamLimits

0x78a0,	// (0x00051f42) list_single_2heading_msg_pane_t2

0x78d4,	// (0x00051f76) list_single_2heading_msg_pane_t3_ParamLimits

0x78d4,	// (0x00051f76) list_single_2heading_msg_pane_t3

0x790d,	// (0x00051faf) list_single_2heading_msg_pane_t4_ParamLimits

0x790d,	// (0x00051faf) list_single_2heading_msg_pane_t4

0x0003,

0xfcbe,	// (0x0005a360) list_single_2heading_msg_pane_t_ParamLimits

0xfcbe,	// (0x0005a360) list_single_2heading_msg_pane_t

0x7019,	// (0x000516bb) title_pane_g4_ParamLimits

0x7019,	// (0x000516bb) title_pane_g4

0x571e,	// (0x0004fdc0) title_pane_stacon_g3_ParamLimits

0x571e,	// (0x0004fdc0) title_pane_stacon_g3

0xccda,	// (0x0005737c) list_single_2graphic_im_pane_g4_ParamLimits

0xccda,	// (0x0005737c) list_single_2graphic_im_pane_g4

0xabed,	// (0x0005528f) popup_side_volume_key_window_cp

0xb3ce,	// (0x00055a70) main_idle_act2_pane_t1

0x5d89,	// (0x0005042b) toolbar_button_pane_g10

0x7fbf,	// (0x00052661) popup_toolbar_window_cp1

0xbb53,	// (0x000561f5) clock_nsta_pane_cp_t1

0xbb53,	// (0x000561f5) clock_nsta_pane_cp_t2

0x0001,

0xfab9,	// (0x0005a15b) clock_nsta_pane_cp_t

0x5910,	// (0x0004ffb2) navi_navi_volume_pane_cp2_ParamLimits

0x591f,	// (0x0004ffc1) popup_side_volume_key_window_g1_ParamLimits

0x592b,	// (0x0004ffcd) popup_side_volume_key_window_g2_ParamLimits

0x593a,	// (0x0004ffdc) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x00059dd0) popup_side_volume_key_window_g_ParamLimits

0x62f6,	// (0x00050998) fep_hwr_aid_pane

0x639d,	// (0x00050a3f) bg_fep_hwr_top_pane_g4_ParamLimits

0xc130,	// (0x000567d2) fep_hwr_top_pane_g1_ParamLimits

0xc142,	// (0x000567e4) fep_hwr_top_pane_g2_ParamLimits

0x63bd,	// (0x00050a5f) fep_hwr_top_pane_g3_ParamLimits

0xfb0e,	// (0x0005a1b0) fep_hwr_top_pane_g_ParamLimits

0x63d2,	// (0x00050a74) fep_hwr_top_text_pane_ParamLimits

0xa9b0,	// (0x00055052) aid_touch_tab_arrow_arrow_2

0xa9b9,	// (0x0005505b) aid_touch_tab_arrow_left_2

0x630a,	// (0x000509ac) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6341,	// (0x000509e3) fep_hwr_prediction_pane

0xc2a2,	// (0x00056944) fep_vkb_prediction_pane

0xc3a6,	// (0x00056a48) fep_vkb_side_pane_g3_ParamLimits

0xc3a6,	// (0x00056a48) fep_vkb_side_pane_g3

0x654d,	// (0x00050bef) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x65b9,	// (0x00050c5b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x65c6,	// (0x00050c68) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbd,	// (0x0005a25f) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x66f5,	// (0x00050d97) fep_hwr_prediction_pane_g1

0x66ff,	// (0x00050da1) fep_hwr_prediction_pane_g2

0x6707,	// (0x00050da9) fep_hwr_prediction_pane_g3

0x670f,	// (0x00050db1) fep_hwr_prediction_pane_g4

0x0003,

0xfcc7,	// (0x0005a369) fep_hwr_prediction_pane_g

0xd1d9,	// (0x0005787b) fep_vkb_prediction_pane_g1

0xd1e3,	// (0x00057885) fep_vkb_prediction_pane_g2

0xd1eb,	// (0x0005788d) fep_vkb_prediction_pane_g3

0xd1f3,	// (0x00057895) fep_vkb_prediction_pane_g4

0x0003,

0xfcd0,	// (0x0005a372) fep_vkb_prediction_pane_g

0x60fd,	// (0x0005079f) slider_set_pane_g3

0x6111,	// (0x000507b3) slider_set_pane_g4

0x6129,	// (0x000507cb) slider_set_pane_g5

0x60fd,	// (0x0005079f) slider_set_pane_g6

0x613f,	// (0x000507e1) slider_set_pane_g7

0xb063,	// (0x00055705) slider_form_pane_g3

0xb06c,	// (0x0005570e) slider_form_pane_g4

0xb074,	// (0x00055716) slider_form_pane_g5

0xb063,	// (0x00055705) slider_form_pane_g6

0xb07c,	// (0x0005571e) slider_form_pane_g7

0xb68b,	// (0x00055d2d) slider_set_pane_vc_g3

0xb694,	// (0x00055d36) slider_set_pane_vc_g4

0xb69d,	// (0x00055d3f) slider_set_pane_vc_g5

0xb68b,	// (0x00055d2d) slider_set_pane_vc_g6

0xb6a6,	// (0x00055d48) slider_set_pane_vc_g7

0xb68b,	// (0x00055d2d) slider_form_pane_vc_g1

0xb694,	// (0x00055d36) slider_form_pane_vc_g2

0xb69d,	// (0x00055d3f) slider_form_pane_vc_g3

0xb68b,	// (0x00055d2d) slider_form_pane_vc_g4

0xb859,	// (0x00055efb) slider_form_pane_vc_g5

0x0004,

0xfa92,	// (0x0005a134) slider_form_pane_vc_g

0x6fd1,	// (0x00051673) main_idle_act3_pane

0xd1fb,	// (0x0005789d) ai3_links_pane

0xd204,	// (0x000578a6) popup_ai3_data_window_ParamLimits

0xd204,	// (0x000578a6) popup_ai3_data_window

0x6fd1,	// (0x00051673) grid_ai3_links_pane

0xd21e,	// (0x000578c0) cell_ai3_links_pane_ParamLimits

0xd21e,	// (0x000578c0) cell_ai3_links_pane

0xd236,	// (0x000578d8) bg_popup_sub_pane_cp11

0xd243,	// (0x000578e5) cell_ai3_links_pane_g1

0x6fd1,	// (0x00051673) bg_popup_sub_pane_cp12

0xd268,	// (0x0005790a) heading_ai3_data_pane

0xd270,	// (0x00057912) list_ai3_gene_pane

0xd27c,	// (0x0005791e) popup_ai3_data_window_g1

0xd284,	// (0x00057926) heading_ai3_data_pane_g1

0xd28c,	// (0x0005792e) heading_ai3_data_pane_t1

0xd29a,	// (0x0005793c) list_double_ai3_gene_pane_ParamLimits

0xd29a,	// (0x0005793c) list_double_ai3_gene_pane

0xd2a7,	// (0x00057949) list_single_ai3_gene_pane_ParamLimits

0xd2a7,	// (0x00057949) list_single_ai3_gene_pane

0xc085,	// (0x00056727) list_highlight_pane_cp7_ParamLimits

0xc085,	// (0x00056727) list_highlight_pane_cp7

0xd2b4,	// (0x00057956) list_single_a13_gene_pane_t1_ParamLimits

0xd2b4,	// (0x00057956) list_single_a13_gene_pane_t1

0xd2cb,	// (0x0005796d) list_single_ai3_gene_pane_g1

0xd2d4,	// (0x00057976) list_single_ai3_gene_pane_g2

0x0001,

0xfcd9,	// (0x0005a37b) list_single_ai3_gene_pane_g

0xd2dc,	// (0x0005797e) list_double_ai3_gene_pane_g1_ParamLimits

0xd2dc,	// (0x0005797e) list_double_ai3_gene_pane_g1

0xd2e8,	// (0x0005798a) list_double_ai3_gene_pane_t1_ParamLimits

0xd2e8,	// (0x0005798a) list_double_ai3_gene_pane_t1

0xd304,	// (0x000579a6) list_double_ai3_gene_pane_t2_ParamLimits

0xd304,	// (0x000579a6) list_double_ai3_gene_pane_t2

0xd31a,	// (0x000579bc) list_double_ai3_gene_pane_t3_ParamLimits

0xd31a,	// (0x000579bc) list_double_ai3_gene_pane_t3

0x0002,

0xfcde,	// (0x0005a380) list_double_ai3_gene_pane_t_ParamLimits

0xfcde,	// (0x0005a380) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x783e,	// (0x00051ee0) aid_size_min_col_2

0xd1c5,	// (0x00057867) aid_size_min_msg_ParamLimits

0xd1c5,	// (0x00057867) aid_size_min_msg

0xc4a6,	// (0x00056b48) fep_vkb_top_text_pane_g2_ParamLimits

0xc4a6,	// (0x00056b48) fep_vkb_top_text_pane_g2

0x0001,

0xfb3e,	// (0x0005a1e0) fep_vkb_top_text_pane_g_ParamLimits

0xfb3e,	// (0x0005a1e0) fep_vkb_top_text_pane_g

0x6fd1,	// (0x00051673) main_hc_apps_shell_pane

0xd337,	// (0x000579d9) grid_hc_apps_pane_ParamLimits

0xd337,	// (0x000579d9) grid_hc_apps_pane

0xd346,	// (0x000579e8) list_hc_apps_pane

0xd34e,	// (0x000579f0) scroll_pane_cp37_ParamLimits

0xd34e,	// (0x000579f0) scroll_pane_cp37

0xd35a,	// (0x000579fc) cell_hc_apps_pane_ParamLimits

0xd35a,	// (0x000579fc) cell_hc_apps_pane

0xd408,	// (0x00057aaa) cell_hc_apps_pane_g1_ParamLimits

0xd408,	// (0x00057aaa) cell_hc_apps_pane_g1

0xd439,	// (0x00057adb) cell_hc_apps_pane_g2_ParamLimits

0xd439,	// (0x00057adb) cell_hc_apps_pane_g2

0xd455,	// (0x00057af7) cell_hc_apps_pane_g3_ParamLimits

0xd455,	// (0x00057af7) cell_hc_apps_pane_g3

0x0002,

0xfce5,	// (0x0005a387) cell_hc_apps_pane_g_ParamLimits

0xfce5,	// (0x0005a387) cell_hc_apps_pane_g

0xd477,	// (0x00057b19) cell_hc_apps_pane_t1_ParamLimits

0xd477,	// (0x00057b19) cell_hc_apps_pane_t1

0x7a73,	// (0x00052115) grid_highlight_pane_cp10_ParamLimits

0x7a73,	// (0x00052115) grid_highlight_pane_cp10

0xd4b7,	// (0x00057b59) list_single_hc_apps_pane_ParamLimits

0xd4b7,	// (0x00057b59) list_single_hc_apps_pane

0xd513,	// (0x00057bb5) list_single_hc_apps_pane_g1

0x7932,	// (0x00051fd4) list_single_hc_apps_pane_g2

0x0001,

0xfcec,	// (0x0005a38e) list_single_hc_apps_pane_g

0x794b,	// (0x00051fed) list_single_hc_apps_pane_g2_copy1

0x7967,	// (0x00052009) list_single_hc_apps_pane_t1

0x70c5,	// (0x00051767) bg_set_opt_pane_cp_ParamLimits

0x4f21,	// (0x0004f5c3) setting_slider_pane_t1_ParamLimits

0x4f3a,	// (0x0004f5dc) setting_slider_pane_t2_ParamLimits

0x4f54,	// (0x0004f5f6) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x00059c1c) setting_slider_pane_t_ParamLimits

0x4f6c,	// (0x0004f60e) slider_set_pane_ParamLimits

0x5c3f,	// (0x000502e1) control_pane_g5_ParamLimits

0x5c3f,	// (0x000502e1) control_pane_g5

0xaeb2,	// (0x00055554) slider_set_pane_g1_ParamLimits

0x60f1,	// (0x00050793) slider_set_pane_g2_ParamLimits

0x60fd,	// (0x0005079f) slider_set_pane_g3_ParamLimits

0x6111,	// (0x000507b3) slider_set_pane_g4_ParamLimits

0x6129,	// (0x000507cb) slider_set_pane_g5_ParamLimits

0x60fd,	// (0x0005079f) slider_set_pane_g6_ParamLimits

0x613f,	// (0x000507e1) slider_set_pane_g7_ParamLimits

0xf97a,	// (0x0005a01c) slider_set_pane_g_ParamLimits

0x8b25,	// (0x000531c7) navi_icon_text_pane_ParamLimits

0x95c6,	// (0x00053c68) aid_fill_nsta_2_ParamLimits

0x9605,	// (0x00053ca7) aid_touch_tab_arrow_left_ParamLimits

0x9611,	// (0x00053cb3) aid_touch_tab_arrow_right_ParamLimits

0x967d,	// (0x00053d1f) clock_nsta_pane_ParamLimits

0xa98c,	// (0x0005502e) navi_icon_pane_g1_ParamLimits

0xa99b,	// (0x0005503d) navi_text_pane_t1_ParamLimits

0xbc5d,	// (0x000562ff) navi_icon_text_pane_g1_ParamLimits

0xbc6c,	// (0x0005630e) navi_icon_text_pane_t1_ParamLimits

0xd513,	// (0x00057bb5) list_single_hc_apps_pane_g1_ParamLimits

0x7932,	// (0x00051fd4) list_single_hc_apps_pane_g2_ParamLimits

0xfcec,	// (0x0005a38e) list_single_hc_apps_pane_g_ParamLimits

0x794b,	// (0x00051fed) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7967,	// (0x00052009) list_single_hc_apps_pane_t1_ParamLimits

0x4e35,	// (0x0004f4d7) popup_toolbar2_fixed_window_ParamLimits

0x4e35,	// (0x0004f4d7) popup_toolbar2_fixed_window

0x94dc,	// (0x00053b7e) popup_toolbar2_float_window

0x6fd1,	// (0x00051673) bg_popup_sub_pane_cp27

0xd52c,	// (0x00057bce) grid_toolbar2_float_pane

0x6fd1,	// (0x00051673) bg_popup_sub_pane_cp26

0xd52c,	// (0x00057bce) grid_toolbar2_fixed_pane

0xd534,	// (0x00057bd6) cell_toolbar2_fixed_pane_ParamLimits

0xd534,	// (0x00057bd6) cell_toolbar2_fixed_pane

0xd544,	// (0x00057be6) cell_toolbar2_fixed_pane_g1

0xd54d,	// (0x00057bef) toolbar2_fixed_button_pane

0x9abb,	// (0x0005415d) toolbar2_fixed_button_pane_g1

0x9acb,	// (0x0005416d) toolbar2_fixed_button_pane_g2

0x9ac3,	// (0x00054165) toolbar2_fixed_button_pane_g3

0x9adb,	// (0x0005417d) toolbar2_fixed_button_pane_g4

0x9ad3,	// (0x00054175) toolbar2_fixed_button_pane_g5

0x9ae3,	// (0x00054185) toolbar2_fixed_button_pane_g6

0x9aeb,	// (0x0005418d) toolbar2_fixed_button_pane_g7

0x9afb,	// (0x0005419d) toolbar2_fixed_button_pane_g8

0x9af3,	// (0x00054195) toolbar2_fixed_button_pane_g9

0x0008,

0xf87c,	// (0x00059f1e) toolbar2_fixed_button_pane_g

0xd555,	// (0x00057bf7) cell_toolbar2_float_pane_ParamLimits

0xd555,	// (0x00057bf7) cell_toolbar2_float_pane

0xd566,	// (0x00057c08) cell_toolbar2_float_pane_g1

0xd54d,	// (0x00057bef) toolbar2_fixed_button_pane_cp

0xc202,	// (0x000568a4) fep_vkb_accented_list_pane_ParamLimits

0xc202,	// (0x000568a4) fep_vkb_accented_list_pane

0x652d,	// (0x00050bcf) bg_popup_fep_shadow_pane_g9

0x8c99,	// (0x0005333b) bg_popup_fep_shadow_pane_cp3

0x81b7,	// (0x00052859) list_accented_list_pane

0xd56f,	// (0x00057c11) list_single_accented_list_pane_ParamLimits

0xd56f,	// (0x00057c11) list_single_accented_list_pane

0x8c99,	// (0x0005333b) list_highlight_pane_cp10

0xd580,	// (0x00057c22) list_single_accented_list_pane_t1

0x942c,	// (0x00053ace) popup_slider_window_ParamLimits

0x942c,	// (0x00053ace) popup_slider_window

0xd1bc,	// (0x0005785e) aid_indentation_list_msg

0xd63a,	// (0x00057cdc) bg_popup_window_pane_cp19

0xd6a4,	// (0x00057d46) popup_slider_window_g1

0xd6c0,	// (0x00057d62) popup_slider_window_g2

0xd6dc,	// (0x00057d7e) popup_slider_window_g3

0x0005,

0xfcf1,	// (0x0005a393) popup_slider_window_g

0xd738,	// (0x00057dda) popup_slider_window_t1

0xd7ac,	// (0x00057e4e) small_volume_slider_vertical_pane

0xc0c0,	// (0x00056762) small_volume_slider_vertical_pane_g1

0xc0c0,	// (0x00056762) small_volume_slider_vertical_pane_g2

0xd7c8,	// (0x00057e6a) small_volume_slider_vertical_pane_g3

0x0002,

0xfd03,	// (0x0005a3a5) small_volume_slider_vertical_pane_g

0x4bed,	// (0x0004f28f) area_side_right_pane_ParamLimits

0x4bed,	// (0x0004f28f) area_side_right_pane

0x6717,	// (0x00050db9) aid_size_side_button_ParamLimits

0x6717,	// (0x00050db9) aid_size_side_button

0x672b,	// (0x00050dcd) grid_sctrl_middle_pane_ParamLimits

0x672b,	// (0x00050dcd) grid_sctrl_middle_pane

0x674b,	// (0x00050ded) sctrl_sk_bottom_pane

0x675c,	// (0x00050dfe) sctrl_sk_top_pane

0x676e,	// (0x00050e10) aid_touch_sctrl_top

0x677b,	// (0x00050e1d) bg_sctrl_sk_pane_ParamLimits

0x677b,	// (0x00050e1d) bg_sctrl_sk_pane

0x6789,	// (0x00050e2b) sctrl_sk_top_pane_g1

0x6796,	// (0x00050e38) sctrl_sk_top_pane_t1

0x676e,	// (0x00050e10) aid_touch_sctrl_bottom

0x677b,	// (0x00050e1d) bg_sctrl_sk_pane_cp_ParamLimits

0x677b,	// (0x00050e1d) bg_sctrl_sk_pane_cp

0x67b1,	// (0x00050e53) sctrl_sk_bottom_pane_g1

0x6796,	// (0x00050e38) sctrl_sk_bottom_pane_t1

0x67ba,	// (0x00050e5c) cell_sctrl_middle_pane_ParamLimits

0x67ba,	// (0x00050e5c) cell_sctrl_middle_pane

0x67d5,	// (0x00050e77) aid_touch_sctrl_middle_ParamLimits

0x67d5,	// (0x00050e77) aid_touch_sctrl_middle

0x67e7,	// (0x00050e89) bg_sctrl_middle_pane_ParamLimits

0x67e7,	// (0x00050e89) bg_sctrl_middle_pane

0x654d,	// (0x00050bef) cell_sctrl_middle_pane_g1_ParamLimits

0x654d,	// (0x00050bef) cell_sctrl_middle_pane_g1

0x67f5,	// (0x00050e97) cell_sctrl_middle_pane_g2_ParamLimits

0x67f5,	// (0x00050e97) cell_sctrl_middle_pane_g2

0x0001,

0xfd0f,	// (0x0005a3b1) cell_sctrl_middle_pane_g_ParamLimits

0xfd0f,	// (0x0005a3b1) cell_sctrl_middle_pane_g

0x9abb,	// (0x0005415d) bg_sctrl_middle_pane_g1

0x9ac3,	// (0x00054165) bg_sctrl_middle_pane_g2

0x9acb,	// (0x0005416d) bg_sctrl_middle_pane_g3

0x9ad3,	// (0x00054175) bg_sctrl_middle_pane_g4

0x9adb,	// (0x0005417d) bg_sctrl_middle_pane_g5

0x9ae3,	// (0x00054185) bg_sctrl_middle_pane_g6

0x9aeb,	// (0x0005418d) bg_sctrl_middle_pane_g7

0x9af3,	// (0x00054195) bg_sctrl_middle_pane_g8

0x0007,

0xfd14,	// (0x0005a3b6) bg_sctrl_middle_pane_g

0x9afb,	// (0x0005419d) bg_sctrl_middle_pane_g8_copy1

0x9abb,	// (0x0005415d) bg_sctrl_sk_pane_g1

0x9acb,	// (0x0005416d) bg_sctrl_sk_pane_g2

0x9ac3,	// (0x00054165) bg_sctrl_sk_pane_g3

0x0008,

0xf87c,	// (0x00059f1e) bg_sctrl_sk_pane_g

0x7f85,	// (0x00052627) aid_size_touch_scroll_bar

0x9adb,	// (0x0005417d) bg_sctrl_sk_pane_g4

0x9ad3,	// (0x00054175) bg_sctrl_sk_pane_g5

0x9ae3,	// (0x00054185) bg_sctrl_sk_pane_g6

0x9aeb,	// (0x0005418d) bg_sctrl_sk_pane_g7

0x9afb,	// (0x0005419d) bg_sctrl_sk_pane_g8

0x9af3,	// (0x00054195) bg_sctrl_sk_pane_g9

0x9097,	// (0x00053739) popup_fep_china_hwr2_fs_candidate_window

0x90a1,	// (0x00053743) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x90a1,	// (0x00053743) popup_fep_china_hwr2_fs_control_window

0x654d,	// (0x00050bef) sctrl_sk_top_pane_g2

0x0001,

0xfd0a,	// (0x0005a3ac) sctrl_sk_top_pane_g

0xd7d1,	// (0x00057e73) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd7d1,	// (0x00057e73) aid_fep_china_hwr2_fs_cell

0xd7e3,	// (0x00057e85) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd7e3,	// (0x00057e85) bg_popup_fep_shadow_pane_cp4

0xd7fa,	// (0x00057e9c) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7fa,	// (0x00057e9c) bg_popup_fep_shadow_pane_cp5

0xd80c,	// (0x00057eae) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd80c,	// (0x00057eae) popup_fep_china_hwr2_fs_control_bar_grid

0xd81c,	// (0x00057ebe) popup_fep_china_hwr2_fs_control_funtion_grid

0xd824,	// (0x00057ec6) aid_fep_china_hwr2_fs_candi_cell

0x6fd1,	// (0x00051673) bg_popup_fep_shadow_pane_cp6

0xd82e,	// (0x00057ed0) popup_fep_china_hwr2_fs_candidate_grid

0xd838,	// (0x00057eda) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd838,	// (0x00057eda) cell_fep_china_hwr2_fs_funtion_grid

0xc0c0,	// (0x00056762) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd850,	// (0x00057ef2) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd850,	// (0x00057ef2) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd85e,	// (0x00057f00) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd85e,	// (0x00057f00) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd25,	// (0x0005a3c7) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd25,	// (0x0005a3c7) cell_fep_china_hwr2_fs_funtion_grid_g

0xd874,	// (0x00057f16) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd874,	// (0x00057f16) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd889,	// (0x00057f2b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd889,	// (0x00057f2b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2a,	// (0x0005a3cc) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2a,	// (0x0005a3cc) cell_fep_china_hwr2_fs_funtion_grid_t

0xd8a5,	// (0x00057f47) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd8ad,	// (0x00057f4f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd8b5,	// (0x00057f57) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2f,	// (0x0005a3d1) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd8bd,	// (0x00057f5f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd8bd,	// (0x00057f5f) cell_fep_china_hwr2_fs_candidate_grid

0xd8d6,	// (0x00057f78) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd8de,	// (0x00057f80) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc0c0,	// (0x00056762) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc0c0,	// (0x00056762) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb43,	// (0x0005a1e5) cell_fep_china_hwr2_fs_candidate_grid_g

0xd8e6,	// (0x00057f88) cell_fep_china_hwr2_fs_candidate_grid_t1

0x968a,	// (0x00053d2c) clock_nsta_pane_cp_24_ParamLimits

0x968a,	// (0x00053d2c) clock_nsta_pane_cp_24

0x9708,	// (0x00053daa) indicator_nsta_pane_cp_24_ParamLimits

0x9708,	// (0x00053daa) indicator_nsta_pane_cp_24

0xa817,	// (0x00054eb9) heading_pane_g1

0x0001,

0xf8e1,	// (0x00059f83) heading_pane_g

0xb217,	// (0x000558b9) grid_sct_catagory_button_pane

0xb247,	// (0x000558e9) scroll_pane_cp5_ParamLimits

0xbcb1,	// (0x00056353) button_value_adjust_pane_cp5_ParamLimits

0xbcb1,	// (0x00056353) button_value_adjust_pane_cp5

0xbd90,	// (0x00056432) form2_midp_time_pane_ParamLimits

0xd8f4,	// (0x00057f96) cell_sct_catagory_button_pane_ParamLimits

0xd8f4,	// (0x00057f96) cell_sct_catagory_button_pane

0xc085,	// (0x00056727) bg_button_pane_cp01_ParamLimits

0xc085,	// (0x00056727) bg_button_pane_cp01

0xc0c0,	// (0x00056762) cell_sct_catagory_button_pane_g1

0x946b,	// (0x00053b0d) popup_tb_extension_window

0xd906,	// (0x00057fa8) aid_size_cell_ext_ParamLimits

0xd906,	// (0x00057fa8) aid_size_cell_ext

0x7a73,	// (0x00052115) bg_tb_trans_pane_cp1_ParamLimits

0x7a73,	// (0x00052115) bg_tb_trans_pane_cp1

0xd926,	// (0x00057fc8) grid_tb_ext_pane_ParamLimits

0xd926,	// (0x00057fc8) grid_tb_ext_pane

0xd954,	// (0x00057ff6) cell_tb_ext_pane_ParamLimits

0xd954,	// (0x00057ff6) cell_tb_ext_pane

0xd96b,	// (0x0005800d) cell_tb_ext_pane_g1_ParamLimits

0xd96b,	// (0x0005800d) cell_tb_ext_pane_g1

0xd988,	// (0x0005802a) cell_tb_ext_pane_t1

0x7a73,	// (0x00052115) list_highlight_pane_cp11_ParamLimits

0x7a73,	// (0x00052115) list_highlight_pane_cp11

0x4e54,	// (0x0004f4f6) popup_uni_indicator_window_ParamLimits

0x4e54,	// (0x0004f4f6) popup_uni_indicator_window

0x8056,	// (0x000526f8) bg_popup_sub_pane_cp14

0xd9a3,	// (0x00058045) list_uniindi_pane

0xd9af,	// (0x00058051) uniindi_top_pane

0x7a73,	// (0x00052115) bg_uniindi_top_pane

0xd9ce,	// (0x00058070) uniindi_top_pane_g1

0xd9e4,	// (0x00058086) uniindi_top_pane_g2

0x0003,

0xfd36,	// (0x0005a3d8) uniindi_top_pane_g

0xda0e,	// (0x000580b0) uniindi_top_pane_t1

0xda38,	// (0x000580da) list_single_uniindi_pane_ParamLimits

0xda38,	// (0x000580da) list_single_uniindi_pane

0xc0c0,	// (0x00056762) bg_uniindi_top_pane_g1

0xda4b,	// (0x000580ed) list_single_uniindi_pane_g1

0xda5e,	// (0x00058100) list_single_uniindi_pane_t1

0x4cca,	// (0x0004f36c) control_bg_pane

0xda83,	// (0x00058125) bg_sctrl_sk_pane_cp1

0xda8c,	// (0x0005812e) bg_sctrl_sk_pane_cp2

0xda95,	// (0x00058137) control_bg_pane_g1

0xda9e,	// (0x00058140) control_bg_pane_g2

0x0001,

0xfd3f,	// (0x0005a3e1) control_bg_pane_g

0xbae5,	// (0x00056187) cell_indicator_nsta_pane_g1_ParamLimits

0xbaf3,	// (0x00056195) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa7,	// (0x0005a149) cell_indicator_nsta_pane_g_ParamLimits

0x761b,	// (0x00051cbd) form2_midp_time_pane_t1_ParamLimits

0x7dc7,	// (0x00052469) main_idle_act4_pane_ParamLimits

0x7dc7,	// (0x00052469) main_idle_act4_pane

0x946b,	// (0x00053b0d) popup_tb_extension_window_ParamLimits

0xd944,	// (0x00057fe6) tb_ext_find_pane_ParamLimits

0xd944,	// (0x00057fe6) tb_ext_find_pane

0xdaa7,	// (0x00058149) ai_gene_pane_1_cp1

0x8dde,	// (0x00053480) ai_gene_pane_2_cp1

0xdaaf,	// (0x00058151) list_single_idle_plugin_calendar_pane

0xdab8,	// (0x0005815a) list_single_idle_plugin_notification_pane

0xdac1,	// (0x00058163) list_single_idle_plugin_player_pane

0xdaca,	// (0x0005816c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdaca,	// (0x0005816c) list_single_idle_plugin_shortcut_pane

0xdaec,	// (0x0005818e) main_idle_act4_pane_t1

0xdafe,	// (0x000581a0) main_idle_act4_pane_t2

0x0001,

0xfd44,	// (0x0005a3e6) main_idle_act4_pane_t

0xdb10,	// (0x000581b2) middle_sk_idle_act4_pane_ParamLimits

0xdb10,	// (0x000581b2) middle_sk_idle_act4_pane

0xdb26,	// (0x000581c8) popup_clock_digital_analogue_window_cp2

0xdb40,	// (0x000581e2) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb40,	// (0x000581e2) shortcut_wheel_idle_act4_pane

0xc0c0,	// (0x00056762) shortcut_wheel_idle_act4_pane_g1

0xc0c0,	// (0x00056762) shortcut_wheel_idle_act4_pane_g2

0xc0c0,	// (0x00056762) shortcut_wheel_idle_act4_pane_g3

0xc0c0,	// (0x00056762) shortcut_wheel_idle_act4_pane_g4

0xc0c0,	// (0x00056762) shortcut_wheel_idle_act4_pane_g5

0xdb54,	// (0x000581f6) shortcut_wheel_idle_act4_pane_g6

0xdb5c,	// (0x000581fe) shortcut_wheel_idle_act4_pane_g7

0xdb64,	// (0x00058206) shortcut_wheel_idle_act4_pane_g8

0xdb6c,	// (0x0005820e) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd49,	// (0x0005a3eb) shortcut_wheel_idle_act4_pane_g

0xc352,	// (0x000569f4) middle_sk_idle_act4_pane_g1_ParamLimits

0xc352,	// (0x000569f4) middle_sk_idle_act4_pane_g1

0xdbd0,	// (0x00058272) middle_sk_idle_act4_pane_g2_ParamLimits

0xdbd0,	// (0x00058272) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6c,	// (0x0005a40e) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6c,	// (0x0005a40e) middle_sk_idle_act4_pane_g

0xdbdc,	// (0x0005827e) middle_sk_idle_act4_pane_t1_ParamLimits

0xdbdc,	// (0x0005827e) middle_sk_idle_act4_pane_t1

0xdbf9,	// (0x0005829b) grid_ai_shortcut_pane_ParamLimits

0xdbf9,	// (0x0005829b) grid_ai_shortcut_pane

0xdc12,	// (0x000582b4) list_highlight_pane_cp16_ParamLimits

0xdc12,	// (0x000582b4) list_highlight_pane_cp16

0xdc1f,	// (0x000582c1) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc1f,	// (0x000582c1) list_single_idle_plugin_shortcut_pane_g1

0xdc2b,	// (0x000582cd) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc2b,	// (0x000582cd) list_single_idle_plugin_shortcut_pane_g2

0xdc43,	// (0x000582e5) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc43,	// (0x000582e5) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd71,	// (0x0005a413) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd71,	// (0x0005a413) list_single_idle_plugin_shortcut_pane_g

0xdc56,	// (0x000582f8) cell_ai_shortcut_pane_ParamLimits

0xdc56,	// (0x000582f8) cell_ai_shortcut_pane

0xdc7a,	// (0x0005831c) cell_ai_shortcut_pane_g1_ParamLimits

0xdc7a,	// (0x0005831c) cell_ai_shortcut_pane_g1

0xdaa7,	// (0x00058149) ai_gene_pane_1_cp2

0xdc9c,	// (0x0005833e) ai_gene_pane_2_cp2

0xdca4,	// (0x00058346) list_highlight_pane_cp15

0xdcad,	// (0x0005834f) list_single_idle_plugin_calendar_pane_g1

0xdca4,	// (0x00058346) list_highlight_pane_cp17

0xdcb5,	// (0x00058357) list_single_idle_plugin_calendar_pane_g1_copy1

0xdcbd,	// (0x0005835f) list_single_idle_plugin_player_pane_g1

0xb470,	// (0x00055b12) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd78,	// (0x0005a41a) list_single_idle_plugin_player_pane_g

0xdcc5,	// (0x00058367) list_single_idle_plugin_player_pane_t1

0xdcd3,	// (0x00058375) list_single_idle_plugin_player_pane_t2

0xdce1,	// (0x00058383) list_single_idle_plugin_player_pane_t3

0xdcef,	// (0x00058391) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7d,	// (0x0005a41f) list_single_idle_plugin_player_pane_t

0xdcfd,	// (0x0005839f) wait_bar_pane_cp15

0xdd05,	// (0x000583a7) grid_ai_notification_pane

0xb470,	// (0x00055b12) list_single_idle_plugin_notification_pane_g1

0xdd0e,	// (0x000583b0) cell_ai_notification_pane_ParamLimits

0xdd0e,	// (0x000583b0) cell_ai_notification_pane

0xdd1b,	// (0x000583bd) cell_ai_notification_pane_g1

0xdd23,	// (0x000583c5) cell_ai_notification_pane_t1

0xdd31,	// (0x000583d3) tb_ext_find_button_pane

0xdd39,	// (0x000583db) tb_ext_find_pane_g1

0xdd41,	// (0x000583e3) tb_ext_find_pane_t1

0x86c8,	// (0x00052d6a) tb_ext_find_button_pane_g1

0xdd4f,	// (0x000583f1) tb_ext_find_button_pane_g2

0x0001,

0xfd86,	// (0x0005a428) tb_ext_find_button_pane_g

0xdaec,	// (0x0005818e) main_idle_act4_pane_t1_ParamLimits

0xdafe,	// (0x000581a0) main_idle_act4_pane_t2_ParamLimits

0xfd44,	// (0x0005a3e6) main_idle_act4_pane_t_ParamLimits

0xdb26,	// (0x000581c8) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb34,	// (0x000581d6) sat_plugin_idle_act4_pane_ParamLimits

0xdb34,	// (0x000581d6) sat_plugin_idle_act4_pane

0xdd58,	// (0x000583fa) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd58,	// (0x000583fa) sat_plugin_idle_act4_pane_t1

0xdd6b,	// (0x0005840d) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd6b,	// (0x0005840d) sat_plugin_idle_act4_pane_t2

0xdd7e,	// (0x00058420) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd7e,	// (0x00058420) sat_plugin_idle_act4_pane_t3

0xdd91,	// (0x00058433) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd91,	// (0x00058433) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8b,	// (0x0005a42d) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8b,	// (0x0005a42d) sat_plugin_idle_act4_pane_t

0x4d8f,	// (0x0004f431) popup_battery_window_ParamLimits

0x4d8f,	// (0x0004f431) popup_battery_window

0x7a73,	// (0x00052115) bg_popup_sub_pane_cp25_ParamLimits

0x7a73,	// (0x00052115) bg_popup_sub_pane_cp25

0xdda4,	// (0x00058446) popup_battery_window_g1_ParamLimits

0xdda4,	// (0x00058446) popup_battery_window_g1

0xddb0,	// (0x00058452) popup_battery_window_t1_ParamLimits

0xddb0,	// (0x00058452) popup_battery_window_t1

0xddc2,	// (0x00058464) popup_battery_window_t2_ParamLimits

0xddc2,	// (0x00058464) popup_battery_window_t2

0x0001,

0xfd94,	// (0x0005a436) popup_battery_window_t_ParamLimits

0xfd94,	// (0x0005a436) popup_battery_window_t

0x8cad,	// (0x0005334f) midp_canvas_pane_ParamLimits

0x8d22,	// (0x000533c4) midp_keypad_pane_ParamLimits

0x8d22,	// (0x000533c4) midp_keypad_pane

0x8ff7,	// (0x00053699) main_midp_pane_ParamLimits

0xbb71,	// (0x00056213) signal_pane_g2_cp_ParamLimits

0xde00,	// (0x000584a2) aid_size_cell_midp_keypad_ParamLimits

0xde00,	// (0x000584a2) aid_size_cell_midp_keypad

0xde1a,	// (0x000584bc) midp_keyp_game_grid_pane_ParamLimits

0xde1a,	// (0x000584bc) midp_keyp_game_grid_pane

0xde3a,	// (0x000584dc) midp_keyp_rocker_pane_ParamLimits

0xde3a,	// (0x000584dc) midp_keyp_rocker_pane

0xde73,	// (0x00058515) midp_keyp_sk_left_pane_ParamLimits

0xde73,	// (0x00058515) midp_keyp_sk_left_pane

0xdecd,	// (0x0005856f) midp_keyp_sk_right_pane_ParamLimits

0xdecd,	// (0x0005856f) midp_keyp_sk_right_pane

0x6fd1,	// (0x00051673) bg_button_pane_cp03

0xdf27,	// (0x000585c9) midp_keyp_sk_left_pane_g1

0x6fd1,	// (0x00051673) bg_button_pane_cp04

0xdf27,	// (0x000585c9) midp_keyp_sk_right_pane_g1

0xc0c0,	// (0x00056762) midp_keyp_rocker_pane_g1

0xdf30,	// (0x000585d2) keyp_game_cell_pane_ParamLimits

0xdf30,	// (0x000585d2) keyp_game_cell_pane

0x6fd1,	// (0x00051673) bg_button_pane_cp02

0xdf43,	// (0x000585e5) keyp_game_cell_pane_g1

0x4dd3,	// (0x0004f475) popup_fep_vkb2_window_ParamLimits

0x4dd3,	// (0x0004f475) popup_fep_vkb2_window

0x6813,	// (0x00050eb5) aid_size_cell_vkb2_ParamLimits

0x6813,	// (0x00050eb5) aid_size_cell_vkb2

0x6867,	// (0x00050f09) popup_fep_vkb2_window_g1_ParamLimits

0x6867,	// (0x00050f09) popup_fep_vkb2_window_g1

0x68af,	// (0x00050f51) vkb2_area_bottom_pane_ParamLimits

0x68af,	// (0x00050f51) vkb2_area_bottom_pane

0x68fb,	// (0x00050f9d) vkb2_area_keypad_pane_ParamLimits

0x68fb,	// (0x00050f9d) vkb2_area_keypad_pane

0x693d,	// (0x00050fdf) vkb2_area_top_pane_ParamLimits

0x693d,	// (0x00050fdf) vkb2_area_top_pane

0x69b7,	// (0x00051059) vkb2_top_entry_pane_ParamLimits

0x69b7,	// (0x00051059) vkb2_top_entry_pane

0x69e1,	// (0x00051083) vkb2_top_grid_left_pane_ParamLimits

0x69e1,	// (0x00051083) vkb2_top_grid_left_pane

0x69ff,	// (0x000510a1) vkb2_top_grid_right_pane_ParamLimits

0x69ff,	// (0x000510a1) vkb2_top_grid_right_pane

0x6a1d,	// (0x000510bf) vkb2_cell_keypad_pane_ParamLimits

0x6a1d,	// (0x000510bf) vkb2_cell_keypad_pane

0x6aee,	// (0x00051190) vkb2_area_bottom_grid_pane_ParamLimits

0x6aee,	// (0x00051190) vkb2_area_bottom_grid_pane

0x6b14,	// (0x000511b6) vkb2_area_bottom_pane_g1_ParamLimits

0x6b14,	// (0x000511b6) vkb2_area_bottom_pane_g1

0x6b38,	// (0x000511da) vkb2_area_bottom_pane_g2_ParamLimits

0x6b38,	// (0x000511da) vkb2_area_bottom_pane_g2

0x6b66,	// (0x00051208) vkb2_area_bottom_pane_g3_ParamLimits

0x6b66,	// (0x00051208) vkb2_area_bottom_pane_g3

0x0002,

0xfd99,	// (0x0005a43b) vkb2_area_bottom_pane_g_ParamLimits

0xfd99,	// (0x0005a43b) vkb2_area_bottom_pane_g

0x6bc7,	// (0x00051269) vkb2_top_cell_left_pane_ParamLimits

0x6bc7,	// (0x00051269) vkb2_top_cell_left_pane

0xdf54,	// (0x000585f6) vkb2_top_entry_pane_g1_ParamLimits

0xdf54,	// (0x000585f6) vkb2_top_entry_pane_g1

0xdf62,	// (0x00058604) vkb2_top_entry_pane_t1_ParamLimits

0xdf62,	// (0x00058604) vkb2_top_entry_pane_t1

0xdf94,	// (0x00058636) vkb2_top_entry_pane_t2_ParamLimits

0xdf94,	// (0x00058636) vkb2_top_entry_pane_t2

0xdfc6,	// (0x00058668) vkb2_top_entry_pane_t3_ParamLimits

0xdfc6,	// (0x00058668) vkb2_top_entry_pane_t3

0x0002,

0xfda0,	// (0x0005a442) vkb2_top_entry_pane_t_ParamLimits

0xfda0,	// (0x0005a442) vkb2_top_entry_pane_t

0x6c14,	// (0x000512b6) vkb2_top_grid_right_pane_g1_ParamLimits

0x6c14,	// (0x000512b6) vkb2_top_grid_right_pane_g1

0x6c2a,	// (0x000512cc) vkb2_top_grid_right_pane_g2_ParamLimits

0x6c2a,	// (0x000512cc) vkb2_top_grid_right_pane_g2

0x6c42,	// (0x000512e4) vkb2_top_grid_right_pane_g3_ParamLimits

0x6c42,	// (0x000512e4) vkb2_top_grid_right_pane_g3

0x6c5a,	// (0x000512fc) vkb2_top_grid_right_pane_g4_ParamLimits

0x6c5a,	// (0x000512fc) vkb2_top_grid_right_pane_g4

0x0003,

0xfda7,	// (0x0005a449) vkb2_top_grid_right_pane_g_ParamLimits

0xfda7,	// (0x0005a449) vkb2_top_grid_right_pane_g

0x6c70,	// (0x00051312) vkb2_top_cell_left_pane_g1

0x6c87,	// (0x00051329) vkb2_cell_keypad_pane_g1_ParamLimits

0x6c87,	// (0x00051329) vkb2_cell_keypad_pane_g1

0xdfea,	// (0x0005868c) vkb2_cell_keypad_pane_t1_ParamLimits

0xdfea,	// (0x0005868c) vkb2_cell_keypad_pane_t1

0x6c95,	// (0x00051337) vkb2_cell_bottom_grid_pane_ParamLimits

0x6c95,	// (0x00051337) vkb2_cell_bottom_grid_pane

0x6cce,	// (0x00051370) vkb2_cell_bottom_grid_pane_g1

0xdb74,	// (0x00058216) aid_call2_pane_cp02

0xdb7c,	// (0x0005821e) aid_call_pane_cp02

0xdb84,	// (0x00058226) clock_digital_number_pane_cp10

0xdb8c,	// (0x0005822e) clock_digital_number_pane_cp11

0xdb94,	// (0x00058236) clock_digital_number_pane_cp12

0xdb9c,	// (0x0005823e) clock_digital_number_pane_cp13

0xdba4,	// (0x00058246) clock_digital_separator_pane_cp10

0x86c8,	// (0x00052d6a) popup_clock_digital_analogue_window_cp2_g1

0x86c8,	// (0x00052d6a) popup_clock_digital_analogue_window_cp2_g2

0xdbac,	// (0x0005824e) popup_clock_digital_analogue_window_cp2_g3

0x86c8,	// (0x00052d6a) popup_clock_digital_analogue_window_cp2_g4

0xdbac,	// (0x0005824e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5c,	// (0x0005a3fe) popup_clock_digital_analogue_window_cp2_g

0xdbb4,	// (0x00058256) popup_clock_digital_analogue_window_cp2_t1

0xdbc2,	// (0x00058264) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd67,	// (0x0005a409) popup_clock_digital_analogue_window_cp2_t

0xc0c0,	// (0x00056762) clock_digital_number_pane_cp10_g1

0xc0c0,	// (0x00056762) clock_digital_number_pane_cp10_g2

0x0001,

0xfb43,	// (0x0005a1e5) clock_digital_number_pane_cp10_g

0xc0c0,	// (0x00056762) clock_digital_separator_pane_cp10_g1

0xc0c0,	// (0x00056762) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb43,	// (0x0005a1e5) clock_digital_separator_pane_cp10_g

0xd9f0,	// (0x00058092) uniindi_top_pane_g3

0xda01,	// (0x000580a3) uniindi_top_pane_g4

0x6aa8,	// (0x0005114a) vkb2_row_keypad_pane_ParamLimits

0x6aa8,	// (0x0005114a) vkb2_row_keypad_pane

0x6cea,	// (0x0005138c) vkb2_cell_t_keypad_pane_ParamLimits

0x6cea,	// (0x0005138c) vkb2_cell_t_keypad_pane

0x6cfa,	// (0x0005139c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6cfa,	// (0x0005139c) vkb2_cell_t_keypad_pane_cp08

0x6d0d,	// (0x000513af) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6d0d,	// (0x000513af) vkb2_cell_t_keypad_pane_cp09

0x6d21,	// (0x000513c3) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6d21,	// (0x000513c3) vkb2_cell_t_keypad_pane_cp01

0x6d32,	// (0x000513d4) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6d32,	// (0x000513d4) vkb2_cell_t_keypad_pane_cp02

0x6d43,	// (0x000513e5) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6d43,	// (0x000513e5) vkb2_cell_t_keypad_pane_cp03

0x6d54,	// (0x000513f6) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6d54,	// (0x000513f6) vkb2_cell_t_keypad_pane_cp04

0x6d65,	// (0x00051407) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6d65,	// (0x00051407) vkb2_cell_t_keypad_pane_cp05

0x6d76,	// (0x00051418) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6d76,	// (0x00051418) vkb2_cell_t_keypad_pane_cp06

0x6d87,	// (0x00051429) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6d87,	// (0x00051429) vkb2_cell_t_keypad_pane_cp07

0x6d98,	// (0x0005143a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6d98,	// (0x0005143a) vkb2_cell_t_keypad_pane_cp10

0x654d,	// (0x00050bef) vkb2_cell_t_keypad_pane_g1

0xe001,	// (0x000586a3) vkb2_cell_t_keypad_pane_t1

0x4cca,	// (0x0004f36c) popup_grid_graphic2_window

0xe013,	// (0x000586b5) aid_size_cell_graphic2_ParamLimits

0xe013,	// (0x000586b5) aid_size_cell_graphic2

0xe04b,	// (0x000586ed) bg_popup_window_pane_cp21_ParamLimits

0xe04b,	// (0x000586ed) bg_popup_window_pane_cp21

0xe059,	// (0x000586fb) graphic2_pages_pane_ParamLimits

0xe059,	// (0x000586fb) graphic2_pages_pane

0xe09f,	// (0x00058741) grid_graphic2_control_pane_ParamLimits

0xe09f,	// (0x00058741) grid_graphic2_control_pane

0xe0dd,	// (0x0005877f) grid_graphic2_pane_ParamLimits

0xe0dd,	// (0x0005877f) grid_graphic2_pane

0xe151,	// (0x000587f3) cell_graphic2_pane

0x6fd1,	// (0x00051673) main_comp_mode_pane

0xd270,	// (0x00057912) list_ai3_gene_pane_ParamLimits

0xd63a,	// (0x00057cdc) bg_popup_window_pane_cp19_ParamLimits

0xd646,	// (0x00057ce8) bg_touch_area_indi_pane_ParamLimits

0xd646,	// (0x00057ce8) bg_touch_area_indi_pane

0xd65c,	// (0x00057cfe) bg_touch_area_indi_pane_cp01_ParamLimits

0xd65c,	// (0x00057cfe) bg_touch_area_indi_pane_cp01

0xd672,	// (0x00057d14) bg_touch_area_indi_pane_cp02_ParamLimits

0xd672,	// (0x00057d14) bg_touch_area_indi_pane_cp02

0xd68a,	// (0x00057d2c) bg_touch_area_indi_pane_cp03_ParamLimits

0xd68a,	// (0x00057d2c) bg_touch_area_indi_pane_cp03

0xd6a4,	// (0x00057d46) popup_slider_window_g1_ParamLimits

0xd6c0,	// (0x00057d62) popup_slider_window_g2_ParamLimits

0xd6dc,	// (0x00057d7e) popup_slider_window_g3_ParamLimits

0xfcf1,	// (0x0005a393) popup_slider_window_g_ParamLimits

0xd738,	// (0x00057dda) popup_slider_window_t1_ParamLimits

0xd7ac,	// (0x00057e4e) small_volume_slider_vertical_pane_ParamLimits

0xe151,	// (0x000587f3) cell_graphic2_pane_ParamLimits

0xe19f,	// (0x00058841) bg_button_pane_cp10_ParamLimits

0xe19f,	// (0x00058841) bg_button_pane_cp10

0xe1b2,	// (0x00058854) bg_button_pane_cp11_ParamLimits

0xe1b2,	// (0x00058854) bg_button_pane_cp11

0xe1c5,	// (0x00058867) graphic2_pages_pane_g1_ParamLimits

0xe1c5,	// (0x00058867) graphic2_pages_pane_g1

0xe1e0,	// (0x00058882) graphic2_pages_pane_g2_ParamLimits

0xe1e0,	// (0x00058882) graphic2_pages_pane_g2

0x0001,

0xfdb5,	// (0x0005a457) graphic2_pages_pane_g_ParamLimits

0xfdb5,	// (0x0005a457) graphic2_pages_pane_g

0xe1f8,	// (0x0005889a) graphic2_pages_pane_t1_ParamLimits

0xe1f8,	// (0x0005889a) graphic2_pages_pane_t1

0xe210,	// (0x000588b2) cell_graphic2_control_pane_ParamLimits

0xe210,	// (0x000588b2) cell_graphic2_control_pane

0xe231,	// (0x000588d3) cell_graphic2_pane_g1_ParamLimits

0xe231,	// (0x000588d3) cell_graphic2_pane_g1

0xe23e,	// (0x000588e0) cell_graphic2_pane_g2_ParamLimits

0xe23e,	// (0x000588e0) cell_graphic2_pane_g2

0xe24b,	// (0x000588ed) cell_graphic2_pane_g3_ParamLimits

0xe24b,	// (0x000588ed) cell_graphic2_pane_g3

0xe258,	// (0x000588fa) cell_graphic2_pane_g4_ParamLimits

0xe258,	// (0x000588fa) cell_graphic2_pane_g4

0xe265,	// (0x00058907) cell_graphic2_pane_g5_ParamLimits

0xe265,	// (0x00058907) cell_graphic2_pane_g5

0x0004,

0xfdba,	// (0x0005a45c) cell_graphic2_pane_g_ParamLimits

0xfdba,	// (0x0005a45c) cell_graphic2_pane_g

0xe280,	// (0x00058922) cell_graphic2_pane_t1_ParamLimits

0xe280,	// (0x00058922) cell_graphic2_pane_t1

0x9bab,	// (0x0005424d) grid_highlight_pane_cp11_ParamLimits

0x9bab,	// (0x0005424d) grid_highlight_pane_cp11

0x7a73,	// (0x00052115) bg_button_pane_cp05

0xe2a9,	// (0x0005894b) cell_graphic2_control_pane_g1

0xc0c0,	// (0x00056762) bg_touch_area_indi_pane_g1

0xe2d1,	// (0x00058973) aid_cmod_rocker_key_size

0xe2db,	// (0x0005897d) aid_cmode_itu_key_size

0xe2e5,	// (0x00058987) main_cmode_video_pane

0xe2ef,	// (0x00058991) main_comp_mode_itu_pane

0xe2fb,	// (0x0005899d) main_comp_mode_rocker_pane

0xe307,	// (0x000589a9) cell_cmode_rocker_pane_ParamLimits

0xe307,	// (0x000589a9) cell_cmode_rocker_pane

0xe319,	// (0x000589bb) cell_cmode_itu_pane_ParamLimits

0xe319,	// (0x000589bb) cell_cmode_itu_pane

0x8056,	// (0x000526f8) bg_button_pane_cp06_ParamLimits

0x8056,	// (0x000526f8) bg_button_pane_cp06

0xc352,	// (0x000569f4) cell_cmode_rocker_pane_g1_ParamLimits

0xc352,	// (0x000569f4) cell_cmode_rocker_pane_g1

0xd850,	// (0x00057ef2) cell_cmode_rocker_pane_g2_ParamLimits

0xd850,	// (0x00057ef2) cell_cmode_rocker_pane_g2

0x0001,

0xfdca,	// (0x0005a46c) cell_cmode_rocker_pane_g_ParamLimits

0xfdca,	// (0x0005a46c) cell_cmode_rocker_pane_g

0x6fd1,	// (0x00051673) bg_button_pane_cp07

0xe32e,	// (0x000589d0) cell_cmode_itu_pane_g1

0xe337,	// (0x000589d9) cell_cmode_itu_pane_t1

0xe345,	// (0x000589e7) cell_cmode_itu_pane_t2

0x0001,

0xfdcf,	// (0x0005a471) cell_cmode_itu_pane_t

0xda73,	// (0x00058115) aid_touch_ctrl_left

0xda7b,	// (0x0005811d) aid_touch_ctrl_right

0x6fd1,	// (0x00051673) compa_mode_pane

0xe353,	// (0x000589f5) aid_cmod_rocker_key_size_cp

0xe35d,	// (0x000589ff) aid_cmode_itu_key_size_cp

0xe367,	// (0x00058a09) compa_mode_pane_g1

0xe36f,	// (0x00058a11) compa_mode_pane_g2

0xe377,	// (0x00058a19) compa_mode_pane_g3

0x0002,

0xfdd4,	// (0x0005a476) compa_mode_pane_g

0xe37f,	// (0x00058a21) main_comp_mode_itu_pane_cp

0xe387,	// (0x00058a29) main_comp_mode_rocker_pane_cp

0xe38f,	// (0x00058a31) cell_cmode_itu_pane_cp_ParamLimits

0xe38f,	// (0x00058a31) cell_cmode_itu_pane_cp

0xe3a4,	// (0x00058a46) cell_cmode_rocker_pane_cp_ParamLimits

0xe3a4,	// (0x00058a46) cell_cmode_rocker_pane_cp

0x8056,	// (0x000526f8) bg_button_pane_cp06_cp_ParamLimits

0x8056,	// (0x000526f8) bg_button_pane_cp06_cp

0xc352,	// (0x000569f4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc352,	// (0x000569f4) cell_cmode_rocker_pane_g1_cp

0xc0c0,	// (0x00056762) cell_cmode_rocker_pane_g2_cp

0x6fd1,	// (0x00051673) bg_button_pane_cp07_cp

0xb063,	// (0x00055705) cell_cmode_itu_pane_g1_cp

0xe3b6,	// (0x00058a58) cell_cmode_itu_pane_t1_cp

0xe3b6,	// (0x00058a58) cell_cmode_itu_pane_t2_cp

0xb050,	// (0x000556f2) settings_code_pane_cp2

0x70c5,	// (0x00051767) bg_popup_window_pane_cp3_ParamLimits

0x7c4d,	// (0x000522ef) heading_pane_cp3_ParamLimits

0x7c59,	// (0x000522fb) listscroll_popup_graphic_pane_ParamLimits

0x62f6,	// (0x00050998) fep_hwr_aid_pane_ParamLimits

0x676e,	// (0x00050e10) aid_touch_sctrl_top_ParamLimits

0x6789,	// (0x00050e2b) sctrl_sk_top_pane_g1_ParamLimits

0x654d,	// (0x00050bef) sctrl_sk_top_pane_g2_ParamLimits

0xfd0a,	// (0x0005a3ac) sctrl_sk_top_pane_g_ParamLimits

0x6796,	// (0x00050e38) sctrl_sk_top_pane_t1_ParamLimits

0x676e,	// (0x00050e10) aid_touch_sctrl_bottom_ParamLimits

0x6796,	// (0x00050e38) sctrl_sk_bottom_pane_t1_ParamLimits

0xd9bc,	// (0x0005805e) aid_area_touch_clock

0x697f,	// (0x00051021) aid_vkb2_area_top_pane_cell_ParamLimits

0x697f,	// (0x00051021) aid_vkb2_area_top_pane_cell

0x6aca,	// (0x0005116c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6aca,	// (0x0005116c) aid_vkb2_area_bottom_pane_cell

0xdf4c,	// (0x000585ee) popup_char_count_window

0xe3c4,	// (0x00058a66) popup_char_count_window_g1

0xe3cd,	// (0x00058a6f) popup_char_count_window_g2

0xe3d6,	// (0x00058a78) popup_char_count_window_g3

0x0002,

0xfddb,	// (0x0005a47d) popup_char_count_window_g

0xe3df,	// (0x00058a81) popup_char_count_window_t1

0x6845,	// (0x00050ee7) popup_fep_char_preview_window_ParamLimits

0x6845,	// (0x00050ee7) popup_fep_char_preview_window

0x699d,	// (0x0005103f) vkb2_top_candi_pane_ParamLimits

0x699d,	// (0x0005103f) vkb2_top_candi_pane

0xe3ed,	// (0x00058a8f) cell_vkb2_top_candi_pane_ParamLimits

0xe3ed,	// (0x00058a8f) cell_vkb2_top_candi_pane

0x6dad,	// (0x0005144f) bg_popup_fep_char_preview_window_ParamLimits

0x6dad,	// (0x0005144f) bg_popup_fep_char_preview_window

0x6dbb,	// (0x0005145d) popup_fep_char_preview_window_t1_ParamLimits

0x6dbb,	// (0x0005145d) popup_fep_char_preview_window_t1

0xe43a,	// (0x00058adc) bg_popup_fep_char_preview_window_g1

0xe442,	// (0x00058ae4) bg_popup_fep_char_preview_window_g2

0xe44a,	// (0x00058aec) bg_popup_fep_char_preview_window_g3

0xe452,	// (0x00058af4) bg_popup_fep_char_preview_window_g4

0xe45a,	// (0x00058afc) bg_popup_fep_char_preview_window_g5

0x6df5,	// (0x00051497) bg_popup_fep_char_preview_window_g6

0xe462,	// (0x00058b04) bg_popup_fep_char_preview_window_g7

0xe46a,	// (0x00058b0c) bg_popup_fep_char_preview_window_g8

0xe472,	// (0x00058b14) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde2,	// (0x0005a484) bg_popup_fep_char_preview_window_g

0x654d,	// (0x00050bef) cell_vkb2_top_candi_pane_g1_ParamLimits

0x654d,	// (0x00050bef) cell_vkb2_top_candi_pane_g1

0x655b,	// (0x00050bfd) cell_vkb2_top_candi_pane_g2_ParamLimits

0x655b,	// (0x00050bfd) cell_vkb2_top_candi_pane_g2

0xdddf,	// (0x00058481) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdddf,	// (0x00058481) cell_vkb2_top_candi_pane_g3

0x6dfd,	// (0x0005149f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6dfd,	// (0x0005149f) cell_vkb2_top_candi_pane_g4

0xc831,	// (0x00056ed3) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc831,	// (0x00056ed3) cell_vkb2_top_candi_pane_g5

0x6e1e,	// (0x000514c0) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6e1e,	// (0x000514c0) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf5,	// (0x0005a497) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf5,	// (0x0005a497) cell_vkb2_top_candi_pane_g

0x6e2c,	// (0x000514ce) cell_vkb2_top_candi_pane_t1

0x60dd,	// (0x0005077f) aid_size_touch_slider_mark_ParamLimits

0x60dd,	// (0x0005077f) aid_size_touch_slider_mark

0xe08f,	// (0x00058731) grid_graphic2_catg_pane_ParamLimits

0xe08f,	// (0x00058731) grid_graphic2_catg_pane

0xe12d,	// (0x000587cf) popup_grid_graphic2_window_t1_ParamLimits

0xe12d,	// (0x000587cf) popup_grid_graphic2_window_t1

0xe13f,	// (0x000587e1) popup_grid_graphic2_window_t2_ParamLimits

0xe13f,	// (0x000587e1) popup_grid_graphic2_window_t2

0x0001,

0xfdb0,	// (0x0005a452) popup_grid_graphic2_window_t_ParamLimits

0xfdb0,	// (0x0005a452) popup_grid_graphic2_window_t

0x7a73,	// (0x00052115) bg_button_pane_cp05_ParamLimits

0xe2a9,	// (0x0005894b) cell_graphic2_control_pane_g1_ParamLimits

0xe47a,	// (0x00058b1c) cell_graphic2_catg_pane_ParamLimits

0xe47a,	// (0x00058b1c) cell_graphic2_catg_pane

0x6fd1,	// (0x00051673) bg_button_pane_cp12

0xe48c,	// (0x00058b2e) cell_graphic2_catg_pane_g1

0xd988,	// (0x0005802a) cell_tb_ext_pane_t1_ParamLimits

0x6be7,	// (0x00051289) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6be7,	// (0x00051289) vkb2_top_cell_right_narrow_pane

0x6bff,	// (0x000512a1) vkb2_top_cell_right_wide_pane_ParamLimits

0x6bff,	// (0x000512a1) vkb2_top_cell_right_wide_pane

0x62e8,	// (0x0005098a) bg_vkb2_func_pane_ParamLimits

0x62e8,	// (0x0005098a) bg_vkb2_func_pane

0x6c70,	// (0x00051312) vkb2_top_cell_left_pane_g1_ParamLimits

0x62e8,	// (0x0005098a) bg_vkb2_fuc_pane_cp03_ParamLimits

0x62e8,	// (0x0005098a) bg_vkb2_fuc_pane_cp03

0x6cce,	// (0x00051370) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9ac3,	// (0x00054165) bg_vkb2_func_pane_g1

0x9acb,	// (0x0005416d) bg_vkb2_func_pane_g2

0x9adb,	// (0x0005417d) bg_vkb2_func_pane_g3

0x9ad3,	// (0x00054175) bg_vkb2_func_pane_g4

0x9ae3,	// (0x00054185) bg_vkb2_func_pane_g5

0x9aeb,	// (0x0005418d) bg_vkb2_func_pane_g6

0x9af3,	// (0x00054195) bg_vkb2_func_pane_g7

0x9afb,	// (0x0005419d) bg_vkb2_func_pane_g8

0x9abb,	// (0x0005415d) bg_vkb2_func_pane_g9

0x0008,

0xfe02,	// (0x0005a4a4) bg_vkb2_func_pane_g

0x62e8,	// (0x0005098a) bg_vkb2_fuc_pane_cp01_ParamLimits

0x62e8,	// (0x0005098a) bg_vkb2_fuc_pane_cp01

0x6c70,	// (0x00051312) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6c70,	// (0x00051312) vkb2_top_cell_right_wide_pane_g1

0x62e8,	// (0x0005098a) bg_vkb2_fuc_pane_cp02_ParamLimits

0x62e8,	// (0x0005098a) bg_vkb2_fuc_pane_cp02

0x6cce,	// (0x00051370) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6cce,	// (0x00051370) vkb2_top_cell_right_narrow_pane_g1

0xd5be,	// (0x00057c60) aid_touch_area_decrease_ParamLimits

0xd5be,	// (0x00057c60) aid_touch_area_decrease

0xd5dc,	// (0x00057c7e) aid_touch_area_increase_ParamLimits

0xd5dc,	// (0x00057c7e) aid_touch_area_increase

0xd5e8,	// (0x00057c8a) aid_touch_area_mute_ParamLimits

0xd5e8,	// (0x00057c8a) aid_touch_area_mute

0xd60c,	// (0x00057cae) aid_touch_area_slider_ParamLimits

0xd60c,	// (0x00057cae) aid_touch_area_slider

0xd6f8,	// (0x00057d9a) popup_slider_window_g4_ParamLimits

0xd6f8,	// (0x00057d9a) popup_slider_window_g4

0xd704,	// (0x00057da6) popup_slider_window_g5_ParamLimits

0xd704,	// (0x00057da6) popup_slider_window_g5

0xd726,	// (0x00057dc8) popup_slider_window_g6_ParamLimits

0xd726,	// (0x00057dc8) popup_slider_window_g6

0xd766,	// (0x00057e08) popup_slider_window_t2_ParamLimits

0xd766,	// (0x00057e08) popup_slider_window_t2

0x0001,

0xfcfe,	// (0x0005a3a0) popup_slider_window_t_ParamLimits

0xfcfe,	// (0x0005a3a0) popup_slider_window_t

0xd77e,	// (0x00057e20) slider_pane_ParamLimits

0xd77e,	// (0x00057e20) slider_pane

0xe495,	// (0x00058b37) slider_pane_g1_ParamLimits

0xe495,	// (0x00058b37) slider_pane_g1

0xe4a9,	// (0x00058b4b) slider_pane_g2_ParamLimits

0xe4a9,	// (0x00058b4b) slider_pane_g2

0xe4bf,	// (0x00058b61) slider_pane_g3_ParamLimits

0xe4bf,	// (0x00058b61) slider_pane_g3

0x0003,

0xfe15,	// (0x0005a4b7) slider_pane_g_ParamLimits

0xfe15,	// (0x0005a4b7) slider_pane_g

0x94c7,	// (0x00053b69) popup_tb_float_extension_window_ParamLimits

0x94c7,	// (0x00053b69) popup_tb_float_extension_window

0xe4eb,	// (0x00058b8d) aid_size_cell_tb_float_ext

0x6fd1,	// (0x00051673) bg_popup_sub_window_cp28

0xe4f7,	// (0x00058b99) grid_tb_float_ext_pane

0xe501,	// (0x00058ba3) cell_tb_float_ext_pane_ParamLimits

0xe501,	// (0x00058ba3) cell_tb_float_ext_pane

0xe51b,	// (0x00058bbd) cell_tb_float_ext_pane_g1

0xe524,	// (0x00058bc6) grid_highlight_pane_cp12

0x6437,	// (0x00050ad9) cell_last_hwr_side_pane_ParamLimits

0x6437,	// (0x00050ad9) cell_last_hwr_side_pane

0xc0c0,	// (0x00056762) cell_last_hwr_side_pane_g1

0xe52d,	// (0x00058bcf) cell_last_hwr_side_pane_g2

0x0001,

0xfe1e,	// (0x0005a4c0) cell_last_hwr_side_pane_g

0x6b96,	// (0x00051238) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6b96,	// (0x00051238) vkb2_area_bottom_space_btn_pane

0x654d,	// (0x00050bef) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe001,	// (0x000586a3) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6e2c,	// (0x000514ce) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6e4b,	// (0x000514ed) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6e4b,	// (0x000514ed) vkb2_area_bottom_space_btn_pane_g1

0x6e85,	// (0x00051527) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6e85,	// (0x00051527) vkb2_area_bottom_space_btn_pane_g2

0x6ebb,	// (0x0005155d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6ebb,	// (0x0005155d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe23,	// (0x0005a4c5) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe23,	// (0x0005a4c5) vkb2_area_bottom_space_btn_pane_g

0x63ab,	// (0x00050a4d) cel_fep_hwr_func_pane_ParamLimits

0x63ab,	// (0x00050a4d) cel_fep_hwr_func_pane

0x63e7,	// (0x00050a89) cell_hwr_side_button_pane_ParamLimits

0x63e7,	// (0x00050a89) cell_hwr_side_button_pane

0xd9bc,	// (0x0005805e) aid_area_touch_clock_ParamLimits

0x7a73,	// (0x00052115) bg_uniindi_top_pane_ParamLimits

0xd9ce,	// (0x00058070) uniindi_top_pane_g1_ParamLimits

0xd9e4,	// (0x00058086) uniindi_top_pane_g2_ParamLimits

0xd9f0,	// (0x00058092) uniindi_top_pane_g3_ParamLimits

0xda01,	// (0x000580a3) uniindi_top_pane_g4_ParamLimits

0xfd36,	// (0x0005a3d8) uniindi_top_pane_g_ParamLimits

0xda0e,	// (0x000580b0) uniindi_top_pane_t1_ParamLimits

0x7a73,	// (0x00052115) bg_vkb2_func_pane_cp01_ParamLimits

0x7a73,	// (0x00052115) bg_vkb2_func_pane_cp01

0xe536,	// (0x00058bd8) cel_fep_hwr_func_pane_g1_ParamLimits

0xe536,	// (0x00058bd8) cel_fep_hwr_func_pane_g1

0x7a73,	// (0x00052115) bg_vkb2_func_pane_cp02_ParamLimits

0x7a73,	// (0x00052115) bg_vkb2_func_pane_cp02

0xe536,	// (0x00058bd8) cell_hwr_side_button_pane_g1_ParamLimits

0xe536,	// (0x00058bd8) cell_hwr_side_button_pane_g1

0x9930,	// (0x00053fd2) status_pane_g4_ParamLimits

0x9930,	// (0x00053fd2) status_pane_g4

0x994a,	// (0x00053fec) status_pane_t1

0xbdf9,	// (0x0005649b) form2_midp_gauge_slider_cont_pane

0xbe01,	// (0x000564a3) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe13,	// (0x000564b5) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbe25,	// (0x000564c7) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf6,	// (0x0005a198) form2_midp_gauge_slider_pane_t_ParamLimits

0xbe37,	// (0x000564d9) form2_midp_slider_pane_ParamLimits

0x6805,	// (0x00050ea7) aid_size_cell_func_vkb2_ParamLimits

0x6805,	// (0x00050ea7) aid_size_cell_func_vkb2

0xe4d7,	// (0x00058b79) slider_pane_g4_ParamLimits

0xe4d7,	// (0x00058b79) slider_pane_g4

0x6f05,	// (0x000515a7) form2_midp_gauge_slider_pane_t2_cp01

0x6f13,	// (0x000515b5) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x6f13,	// (0x000515b5) form2_midp_gauge_slider_pane_t3_cp01

0x6f30,	// (0x000515d2) form2_midp_slider_pane_cp01

0x6fd1,	// (0x00051673) navi_smil_pane

0xe56f,	// (0x00058c11) navi_smil_pane_g1

0xe577,	// (0x00058c19) navi_smil_pane_t1

0xe544,	// (0x00058be6) form2_midp_slider_pane_g1

0xe54d,	// (0x00058bef) form2_midp_slider_pane_g2

0xe555,	// (0x00058bf7) form2_midp_slider_pane_g3

0xe544,	// (0x00058be6) form2_midp_slider_pane_g4

0xe55d,	// (0x00058bff) form2_midp_slider_pane_g5

0x0004,

0xfe2c,	// (0x0005a4ce) form2_midp_slider_pane_g

0x6ef5,	// (0x00051597) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6ef5,	// (0x00051597) vkb2_area_bottom_space_btn_pane_g4

0x9766,	// (0x00053e08) lc0_navi_pane_ParamLimits

0x9766,	// (0x00053e08) lc0_navi_pane

0x97dc,	// (0x00053e7e) lc0_stat_indi_pane_ParamLimits

0x97dc,	// (0x00053e7e) lc0_stat_indi_pane

0x97f3,	// (0x00053e95) ls0_title_pane_ParamLimits

0x97f3,	// (0x00053e95) ls0_title_pane

0x8056,	// (0x000526f8) bg_popup_sub_pane_cp14_ParamLimits

0xd9a3,	// (0x00058045) list_uniindi_pane_ParamLimits

0xd9af,	// (0x00058051) uniindi_top_pane_ParamLimits

0xda4b,	// (0x000580ed) list_single_uniindi_pane_g1_ParamLimits

0xda5e,	// (0x00058100) list_single_uniindi_pane_t1_ParamLimits

0x6f39,	// (0x000515db) lc0_stat_clock_pane_ParamLimits

0x6f39,	// (0x000515db) lc0_stat_clock_pane

0xe585,	// (0x00058c27) lc0_stat_indi_pane_g1_ParamLimits

0xe585,	// (0x00058c27) lc0_stat_indi_pane_g1

0xe592,	// (0x00058c34) lc0_stat_indi_pane_g2_ParamLimits

0xe592,	// (0x00058c34) lc0_stat_indi_pane_g2

0x0001,

0xfe37,	// (0x0005a4d9) lc0_stat_indi_pane_g_ParamLimits

0xfe37,	// (0x0005a4d9) lc0_stat_indi_pane_g

0x6f46,	// (0x000515e8) lc0_uni_indicator_pane_ParamLimits

0x6f46,	// (0x000515e8) lc0_uni_indicator_pane

0xe59f,	// (0x00058c41) ls0_title_pane_g1_ParamLimits

0xe59f,	// (0x00058c41) ls0_title_pane_g1

0xe5b3,	// (0x00058c55) ls0_title_pane_t1_ParamLimits

0xe5b3,	// (0x00058c55) ls0_title_pane_t1

0x6f53,	// (0x000515f5) lc0_uni_indicator_pane_g1_ParamLimits

0x6f53,	// (0x000515f5) lc0_uni_indicator_pane_g1

0xe5e9,	// (0x00058c8b) lc0_stat_clock_pane_t1

0x6fd1,	// (0x00051673) main_ai5_pane

0xe5f7,	// (0x00058c99) ai5_sk_pane_ParamLimits

0xe5f7,	// (0x00058c99) ai5_sk_pane

0xe604,	// (0x00058ca6) cell_ai5_widget_pane_ParamLimits

0xe604,	// (0x00058ca6) cell_ai5_widget_pane

0xe686,	// (0x00058d28) aid_size_cell_widget_grid

0xe69a,	// (0x00058d3c) bg_ai5_widget_pane_ParamLimits

0xe69a,	// (0x00058d3c) bg_ai5_widget_pane

0xe6c2,	// (0x00058d64) cell_ai5_widget_pane_g2

0xe6d2,	// (0x00058d74) cell_ai5_widget_pane_g3

0xe6f1,	// (0x00058d93) cell_ai5_widget_pane_g4

0xe6fd,	// (0x00058d9f) cell_ai5_widget_pane_g5

0xe709,	// (0x00058dab) cell_ai5_widget_pane_g6

0xe715,	// (0x00058db7) cell_ai5_widget_pane_g7

0xe75d,	// (0x00058dff) cell_ai5_widget_pane_t1_ParamLimits

0xe75d,	// (0x00058dff) cell_ai5_widget_pane_t1

0xe77a,	// (0x00058e1c) cell_ai5_widget_pane_t2_ParamLimits

0xe77a,	// (0x00058e1c) cell_ai5_widget_pane_t2

0xe792,	// (0x00058e34) cell_ai5_widget_pane_t3_ParamLimits

0xe792,	// (0x00058e34) cell_ai5_widget_pane_t3

0xe7aa,	// (0x00058e4c) cell_ai5_widget_pane_t4_ParamLimits

0xe7aa,	// (0x00058e4c) cell_ai5_widget_pane_t4

0xe7c4,	// (0x00058e66) cell_ai5_widget_pane_t5_ParamLimits

0xe7c4,	// (0x00058e66) cell_ai5_widget_pane_t5

0xe7e3,	// (0x00058e85) cell_ai5_widget_pane_t6_ParamLimits

0xe7e3,	// (0x00058e85) cell_ai5_widget_pane_t6

0xe7f5,	// (0x00058e97) cell_ai5_widget_pane_t7_ParamLimits

0xe7f5,	// (0x00058e97) cell_ai5_widget_pane_t7

0xe80e,	// (0x00058eb0) cell_ai5_widget_pane_t8_ParamLimits

0xe80e,	// (0x00058eb0) cell_ai5_widget_pane_t8

0x0009,

0xfe51,	// (0x0005a4f3) cell_ai5_widget_pane_t_ParamLimits

0xfe51,	// (0x0005a4f3) cell_ai5_widget_pane_t

0xe85a,	// (0x00058efc) grid_ai5_widget_pane

0x8056,	// (0x000526f8) highlight_cell_ai5_widget_pane_ParamLimits

0x8056,	// (0x000526f8) highlight_cell_ai5_widget_pane

0xe872,	// (0x00058f14) ai5_sk_left_pane

0xe87c,	// (0x00058f1e) ai5_sk_middle_pane

0xe886,	// (0x00058f28) ai5_sk_right_pane

0xe890,	// (0x00058f32) bg_ai5_widget_pane_g1_ParamLimits

0xe890,	// (0x00058f32) bg_ai5_widget_pane_g1

0xe89c,	// (0x00058f3e) bg_ai5_widget_pane_g2_ParamLimits

0xe89c,	// (0x00058f3e) bg_ai5_widget_pane_g2

0xe8a8,	// (0x00058f4a) bg_ai5_widget_pane_g3_ParamLimits

0xe8a8,	// (0x00058f4a) bg_ai5_widget_pane_g3

0xe8b4,	// (0x00058f56) bg_ai5_widget_pane_g4_ParamLimits

0xe8b4,	// (0x00058f56) bg_ai5_widget_pane_g4

0xe8c0,	// (0x00058f62) bg_ai5_widget_pane_g5_ParamLimits

0xe8c0,	// (0x00058f62) bg_ai5_widget_pane_g5

0xe8cc,	// (0x00058f6e) bg_ai5_widget_pane_g6_ParamLimits

0xe8cc,	// (0x00058f6e) bg_ai5_widget_pane_g6

0xe8d8,	// (0x00058f7a) bg_ai5_widget_pane_g7_ParamLimits

0xe8d8,	// (0x00058f7a) bg_ai5_widget_pane_g7

0xe8e4,	// (0x00058f86) bg_ai5_widget_pane_g8_ParamLimits

0xe8e4,	// (0x00058f86) bg_ai5_widget_pane_g8

0xe8f0,	// (0x00058f92) bg_ai5_widget_pane_g9_ParamLimits

0xe8f0,	// (0x00058f92) bg_ai5_widget_pane_g9

0x0008,

0xfe66,	// (0x0005a508) bg_ai5_widget_pane_g_ParamLimits

0xfe66,	// (0x0005a508) bg_ai5_widget_pane_g

0xe923,	// (0x00058fc5) cell_shortcut_ai5_widget_pane_ParamLimits

0xe923,	// (0x00058fc5) cell_shortcut_ai5_widget_pane

0x718e,	// (0x00051830) bg_cell_shortcut_ai5_widget_pane

0xe934,	// (0x00058fd6) cell_grid_ai5_widget_pane_g1

0xe93d,	// (0x00058fdf) highlight_cell_shortcut_ai5_widget_pane

0x9ac3,	// (0x00054165) ai5_sk_left_pane_g1

0xe945,	// (0x00058fe7) ai5_sk_left_pane_g2

0xe94d,	// (0x00058fef) ai5_sk_left_pane_g3

0xe955,	// (0x00058ff7) ai5_sk_left_pane_g4

0x0003,

0xfe79,	// (0x0005a51b) ai5_sk_left_pane_g

0xe95d,	// (0x00058fff) ai5_sk_left_pane_t1

0x9acb,	// (0x0005416d) ai5_sk_right_pane_g1

0xe96b,	// (0x0005900d) ai5_sk_right_pane_g2

0xe973,	// (0x00059015) ai5_sk_right_pane_g3

0xe97b,	// (0x0005901d) ai5_sk_right_pane_g4

0x0003,

0xfe82,	// (0x0005a524) ai5_sk_right_pane_g

0xe983,	// (0x00059025) ai5_sk_right_pane_t1

0x9acb,	// (0x0005416d) ai5_sk_middle_pane_g1

0x9ac3,	// (0x00054165) ai5_sk_middle_pane_g2

0x9ae3,	// (0x00054185) ai5_sk_middle_pane_g3

0xe973,	// (0x00059015) ai5_sk_middle_pane_g4

0xe94d,	// (0x00058fef) ai5_sk_middle_pane_g5

0xe991,	// (0x00059033) ai5_sk_middle_pane_g6

0xe999,	// (0x0005903b) ai5_sk_middle_pane_g7

0x0006,

0xfe8b,	// (0x0005a52d) ai5_sk_middle_pane_g

0x95d4,	// (0x00053c76) aid_touch_area_size_lc0_ParamLimits

0x95d4,	// (0x00053c76) aid_touch_area_size_lc0

0x657c,	// (0x00050c1e) cell_hwr_candidate_pane_t1_ParamLimits

0x95f0,	// (0x00053c92) aid_touch_navi_pane

0x98da,	// (0x00053f7c) status_dt_navi_pane_ParamLimits

0x98da,	// (0x00053f7c) status_dt_navi_pane

0x98e7,	// (0x00053f89) status_dt_sta_pane_ParamLimits

0x98e7,	// (0x00053f89) status_dt_sta_pane

0xe9a1,	// (0x00059043) dt_sta_controll_pane

0xe9ae,	// (0x00059050) dt_sta_indi_pane

0xe9bf,	// (0x00059061) dt_sta_title_pane

0x7a73,	// (0x00052115) bg_dt_sta_indi_pane_ParamLimits

0x7a73,	// (0x00052115) bg_dt_sta_indi_pane

0xe9d2,	// (0x00059074) dt_sta_battery_pane

0xe9da,	// (0x0005907c) dt_sta_indi_pane_g1

0xe9e3,	// (0x00059085) dt_sta_indi_pane_g2

0xe9ec,	// (0x0005908e) dt_sta_indi_pane_g3

0x0002,

0xfe9a,	// (0x0005a53c) dt_sta_indi_pane_g

0xe9f5,	// (0x00059097) dt_sta_signal_pane

0x8056,	// (0x000526f8) bg_dt_sta_title_pane_ParamLimits

0x8056,	// (0x000526f8) bg_dt_sta_title_pane

0xe9fe,	// (0x000590a0) dt_sta_title_pane_g1

0xea06,	// (0x000590a8) dt_sta_title_pane_t1_ParamLimits

0xea06,	// (0x000590a8) dt_sta_title_pane_t1

0x6fd1,	// (0x00051673) bg_dt_sta_control_pane

0xea1b,	// (0x000590bd) dt_sta_controll_pane_g1

0xea24,	// (0x000590c6) bg_dt_sta_title_pane_g1

0xea2d,	// (0x000590cf) bg_dt_sta_title_pane_g2

0xea36,	// (0x000590d8) bg_dt_sta_title_pane_g3

0x0002,

0xfea1,	// (0x0005a543) bg_dt_sta_title_pane_g

0xc0c0,	// (0x00056762) bg_dt_sta_indi_pane_g1

0xea3f,	// (0x000590e1) dt_sta_signal_pane_g1

0xea47,	// (0x000590e9) dt_sta_signal_pane_g2

0x0001,

0xfea8,	// (0x0005a54a) dt_sta_signal_pane_g

0xea4f,	// (0x000590f1) dt_sta_battery_pane_g1

0xea58,	// (0x000590fa) dt_sta_battery_pane_t1

0xc0c0,	// (0x00056762) bg_dt_sta_control_pane_g1

0x87af,	// (0x00052e51) fep_china_uni_eep_pane

0x87b7,	// (0x00052e59) fep_china_uni_entry_pane_ParamLimits

0x87c7,	// (0x00052e69) popup_fep_china_uni_window_g1_ParamLimits

0x87d7,	// (0x00052e79) popup_fep_china_uni_window_g2_ParamLimits

0x87d7,	// (0x00052e79) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x00059ddc) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x00059ddc) popup_fep_china_uni_window_g

0xea67,	// (0x00059109) fep_china_uni_eep_pane_g1

0xea6f,	// (0x00059111) fep_china_uni_eep_pane_t1

0xe566,	// (0x00058c08) aid_touch_area_size_smil_player

0x975e,	// (0x00053e00) lc0_clock_pane

0x993e,	// (0x00053fe0) status_pane_g5_ParamLimits

0x993e,	// (0x00053fe0) status_pane_g5

0x918c,	// (0x0005382e) popup_keymap_window

0x98fc,	// (0x00053f9e) status_icon_pane

0xe6d2,	// (0x00058d74) cell_ai5_widget_pane_g3_ParamLimits

0xe6f1,	// (0x00058d93) cell_ai5_widget_pane_g4_ParamLimits

0xe6fd,	// (0x00058d9f) cell_ai5_widget_pane_g5_ParamLimits

0xe721,	// (0x00058dc3) cell_ai5_widget_pane_g8_ParamLimits

0xe721,	// (0x00058dc3) cell_ai5_widget_pane_g8

0xe735,	// (0x00058dd7) cell_ai5_widget_pane_g9_ParamLimits

0xe735,	// (0x00058dd7) cell_ai5_widget_pane_g9

0xe749,	// (0x00058deb) cell_ai5_widget_pane_g10_ParamLimits

0xe749,	// (0x00058deb) cell_ai5_widget_pane_g10

0xea7e,	// (0x00059120) status_icon_pane_g1

0x6fd1,	// (0x00051673) bg_popup_sub_pane_cp13

0xea86,	// (0x00059128) popup_keymap_window_t1

0x8f70,	// (0x00053612) control_pane_g6_ParamLimits

0x8f70,	// (0x00053612) control_pane_g6

0x8f7d,	// (0x0005361f) control_pane_g7_ParamLimits

0x8f7d,	// (0x0005361f) control_pane_g7

0x8f8a,	// (0x0005362c) control_pane_g8_ParamLimits

0x8f8a,	// (0x0005362c) control_pane_g8

0xe9a1,	// (0x00059043) dt_sta_controll_pane_ParamLimits

0xe9ae,	// (0x00059050) dt_sta_indi_pane_ParamLimits

0xe9bf,	// (0x00059061) dt_sta_title_pane_ParamLimits

0x7f8e,	// (0x00052630) aid_size_touch_scroll_bar_cale

0x4da3,	// (0x0004f445) popup_discreet_window_ParamLimits

0x4da3,	// (0x0004f445) popup_discreet_window

0x4e2b,	// (0x0004f4cd) popup_sk_window

0xa197,	// (0x00054839) bg_popup_sub_pane_cp28_ParamLimits

0xa197,	// (0x00054839) bg_popup_sub_pane_cp28

0xea94,	// (0x00059136) popup_discreet_window_g1_ParamLimits

0xea94,	// (0x00059136) popup_discreet_window_g1

0xeab4,	// (0x00059156) popup_discreet_window_t1_ParamLimits

0xeab4,	// (0x00059156) popup_discreet_window_t1

0xead2,	// (0x00059174) popup_discreet_window_t2_ParamLimits

0xead2,	// (0x00059174) popup_discreet_window_t2

0x0002,

0xfead,	// (0x0005a54f) popup_discreet_window_t_ParamLimits

0xfead,	// (0x0005a54f) popup_discreet_window_t

0x6f67,	// (0x00051609) popup_sk_window_g1

0x6f71,	// (0x00051613) popup_sk_window_g2

0x0001,

0xfeb4,	// (0x0005a556) popup_sk_window_g

0xeb24,	// (0x000591c6) popup_sk_window_t1

0xeb32,	// (0x000591d4) popup_sk_window_t1_copy1

0xe6c2,	// (0x00058d64) cell_ai5_widget_pane_g2_ParamLimits

0xe820,	// (0x00058ec2) cell_ai5_widget_pane_t9_ParamLimits

0xe820,	// (0x00058ec2) cell_ai5_widget_pane_t9

0x6fd1,	// (0x00051673) main_fep_fshwr2_pane

0xeb40,	// (0x000591e2) aid_fshwr2_btn_pane

0xeb48,	// (0x000591ea) aid_fshwr2_syb_pane

0xeb50,	// (0x000591f2) aid_fshwr2_txt_pane

0xeb58,	// (0x000591fa) fshwr2_func_candi_pane

0xeb64,	// (0x00059206) fshwr2_hwr_syb_pane

0xeb70,	// (0x00059212) fshwr2_icf_pane

0x6fd1,	// (0x00051673) fshwr2_icf_bg_pane

0xeb8e,	// (0x00059230) fshwr2_icf_pane_t1_ParamLimits

0xeb8e,	// (0x00059230) fshwr2_icf_pane_t1

0xc0c0,	// (0x00056762) fshwr2_func_candi_pane_g1

0xeba5,	// (0x00059247) fshwr2_func_candi_row_pane_ParamLimits

0xeba5,	// (0x00059247) fshwr2_func_candi_row_pane

0xebb6,	// (0x00059258) cell_fshwr2_syb_pane_ParamLimits

0xebb6,	// (0x00059258) cell_fshwr2_syb_pane

0xc352,	// (0x000569f4) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc352,	// (0x000569f4) fshwr2_hwr_syb_pane_g1

0x6fd1,	// (0x00051673) bg_popup_call_pane_cp01

0xebd0,	// (0x00059272) fshwr2_func_candi_cell_pane_ParamLimits

0xebd0,	// (0x00059272) fshwr2_func_candi_cell_pane

0xec01,	// (0x000592a3) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec01,	// (0x000592a3) fshwr2_func_candi_cell_bg_pane

0xec1b,	// (0x000592bd) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec1b,	// (0x000592bd) fshwr2_func_candi_cell_pane_g1

0xec43,	// (0x000592e5) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xec43,	// (0x000592e5) fshwr2_func_candi_cell_pane_t1

0x6fd1,	// (0x00051673) bg_button_pane_cp08

0x8c99,	// (0x0005333b) cell_fshwr2_syb_bg_pane

0xec56,	// (0x000592f8) cell_fshwr2_syb_bg_pane_g1

0xec5e,	// (0x00059300) cell_fshwr2_syb_bg_pane_t1

0x8056,	// (0x000526f8) main_tmo_pane

0xac9d,	// (0x0005533f) uni_indicator_pane_g1_ParamLimits

0xacb2,	// (0x00055354) uni_indicator_pane_g2_ParamLimits

0xacc8,	// (0x0005536a) uni_indicator_pane_g3_ParamLimits

0xacde,	// (0x00055380) uni_indicator_pane_g4_ParamLimits

0xacde,	// (0x00055380) uni_indicator_pane_g4

0xacf2,	// (0x00055394) uni_indicator_pane_g5_ParamLimits

0xacf2,	// (0x00055394) uni_indicator_pane_g5

0xad06,	// (0x000553a8) uni_indicator_pane_g6_ParamLimits

0xad06,	// (0x000553a8) uni_indicator_pane_g6

0xf937,	// (0x00059fd9) uni_indicator_pane_g_ParamLimits

0xd59a,	// (0x00057c3c) popup_tmo_note_window_ParamLimits

0xd59a,	// (0x00057c3c) popup_tmo_note_window

0x6fd1,	// (0x00051673) fshwr2_bg_pane

0xec34,	// (0x000592d6) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xec34,	// (0x000592d6) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb9,	// (0x0005a55b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb9,	// (0x0005a55b) fshwr2_func_candi_cell_pane_g

0xc0c0,	// (0x00056762) bg_popup_window_pane_cp01

0xec6d,	// (0x0005930f) bg_popup_window_pane_g1_cp01

0xec76,	// (0x00059318) bg_popup_window_pane_cp22_ParamLimits

0xec76,	// (0x00059318) bg_popup_window_pane_cp22

0xec84,	// (0x00059326) listscroll_tmo_link_pane_ParamLimits

0xec84,	// (0x00059326) listscroll_tmo_link_pane

0xecc4,	// (0x00059366) popup_tmo_note_window_g1_ParamLimits

0xecc4,	// (0x00059366) popup_tmo_note_window_g1

0xecd1,	// (0x00059373) tmo_note_info_pane_ParamLimits

0xecd1,	// (0x00059373) tmo_note_info_pane

0xeceb,	// (0x0005938d) list_tmo_note_info_pane_g1_ParamLimits

0xeceb,	// (0x0005938d) list_tmo_note_info_pane_g1

0xed02,	// (0x000593a4) list_tmo_note_info_pane_g2_ParamLimits

0xed02,	// (0x000593a4) list_tmo_note_info_pane_g2

0x0001,

0xfebe,	// (0x0005a560) list_tmo_note_info_pane_g_ParamLimits

0xfebe,	// (0x0005a560) list_tmo_note_info_pane_g

0xed1e,	// (0x000593c0) list_tmo_note_info_text_pane_ParamLimits

0xed1e,	// (0x000593c0) list_tmo_note_info_text_pane

0xed9f,	// (0x00059441) list_tmo_link_pane

0xedac,	// (0x0005944e) scroll_pane_cp20

0xedb9,	// (0x0005945b) list_single_tmo_link_pane_ParamLimits

0xedb9,	// (0x0005945b) list_single_tmo_link_pane

0xedc9,	// (0x0005946b) list_single_tmo_link_pane_t1

0xedd7,	// (0x00059479) list_tmo_note_info_text_pane_t1_ParamLimits

0xedd7,	// (0x00059479) list_tmo_note_info_text_pane_t1

0x811c,	// (0x000527be) aid_size_touch_scroll_bar_cp01_ParamLimits

0x811c,	// (0x000527be) aid_size_touch_scroll_bar_cp01

0x55ad,	// (0x0004fc4f) aid_size_touch_slider_marker

0x4e13,	// (0x0004f4b5) popup_settings_window_ParamLimits

0x4e13,	// (0x0004f4b5) popup_settings_window

0x5d2f,	// (0x000503d1) popup_candi_list_indi_window

0x95f0,	// (0x00053c92) aid_touch_navi_pane_ParamLimits

0x6742,	// (0x00050de4) rs_clock_indi_pane

0x674b,	// (0x00050ded) sctrl_sk_bottom_pane_ParamLimits

0x675c,	// (0x00050dfe) sctrl_sk_top_pane_ParamLimits

0x685f,	// (0x00050f01) popup_fep_tooltip_window

0xe686,	// (0x00058d28) aid_size_cell_widget_grid_ParamLimits

0xe6b6,	// (0x00058d58) cell_ai5_widget_pane_g1_ParamLimits

0xe6b6,	// (0x00058d58) cell_ai5_widget_pane_g1

0xe709,	// (0x00058dab) cell_ai5_widget_pane_g6_ParamLimits

0xe715,	// (0x00058db7) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3c,	// (0x0005a4de) cell_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x0005a4de) cell_ai5_widget_pane_g

0xe844,	// (0x00058ee6) cell_ai5_widget_pane_t10_ParamLimits

0xe844,	// (0x00058ee6) cell_ai5_widget_pane_t10

0xe85a,	// (0x00058efc) grid_ai5_widget_pane_ParamLimits

0xe8fc,	// (0x00058f9e) cell_contacts_ai5_widget_pane_ParamLimits

0xe8fc,	// (0x00058f9e) cell_contacts_ai5_widget_pane

0xeae7,	// (0x00059189) popup_discreet_window_t3_ParamLimits

0xeae7,	// (0x00059189) popup_discreet_window_t3

0xeb7a,	// (0x0005921c) popup_fshwr2_char_preview_window_ParamLimits

0xeb7a,	// (0x0005921c) popup_fshwr2_char_preview_window

0xed3c,	// (0x000593de) tmo_note_info_pane_t1

0xed51,	// (0x000593f3) tmo_note_info_pane_t2

0xed66,	// (0x00059408) tmo_note_info_pane_t3

0xed7b,	// (0x0005941d) tmo_note_info_pane_t4

0xed8d,	// (0x0005942f) tmo_note_info_pane_t5

0x0004,

0xfec3,	// (0x0005a565) tmo_note_info_pane_t

0xed9f,	// (0x00059441) list_tmo_link_pane_ParamLimits

0xedac,	// (0x0005944e) scroll_pane_cp20_ParamLimits

0x6fd1,	// (0x00051673) bg_popup_fep_char_preview_window_cp01

0xedf0,	// (0x00059492) popup_fshwr2_char_preview_window_t1

0xedfe,	// (0x000594a0) popup_candi_list_indi_window_g1

0xee07,	// (0x000594a9) bg_cell_contacts_ai5_widget_pane

0xee13,	// (0x000594b5) cell_contacts_ai5_widget_pane_g1

0xee27,	// (0x000594c9) cell_contacts_ai5_widget_pane_g2

0xee36,	// (0x000594d8) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfece,	// (0x0005a570) cell_contacts_ai5_widget_pane_g

0xee49,	// (0x000594eb) cell_contacts_ai5_widget_pane_t1

0x8056,	// (0x000526f8) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeec3,	// (0x00059565) settings_container_pane

0x8c99,	// (0x0005333b) listscroll_set_pane_copy1

0xb7d3,	// (0x00055e75) scroll_pane_cp121_copy1

0xeecf,	// (0x00059571) set_content_pane_copy1

0xeed7,	// (0x00059579) aid_height_set_list_copy1_ParamLimits

0xeed7,	// (0x00059579) aid_height_set_list_copy1

0xaefe,	// (0x000555a0) aid_size_parent_copy1_ParamLimits

0xaefe,	// (0x000555a0) aid_size_parent_copy1

0xeee3,	// (0x00059585) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeee3,	// (0x00059585) button_value_adjust_pane_cp6_copy1

0x8ff7,	// (0x00053699) list_highlight_pane_cp2_copy1_ParamLimits

0x8ff7,	// (0x00053699) list_highlight_pane_cp2_copy1

0xeef7,	// (0x00059599) list_set_pane_copy1_ParamLimits

0xeef7,	// (0x00059599) list_set_pane_copy1

0xee5e,	// (0x00059500) main_pane_set_t1_copy1_ParamLimits

0xee5e,	// (0x00059500) main_pane_set_t1_copy1

0xee98,	// (0x0005953a) main_pane_set_t2_copy1_ParamLimits

0xee98,	// (0x0005953a) main_pane_set_t2_copy1

0xefa4,	// (0x00059646) main_pane_set_t3_copy1

0xefb2,	// (0x00059654) main_pane_set_t4_copy1

0xeeb7,	// (0x00059559) set_content_pane_g1_copy1_ParamLimits

0xeeb7,	// (0x00059559) set_content_pane_g1_copy1

0xefc0,	// (0x00059662) setting_code_pane_copy1

0xefca,	// (0x0005966c) setting_slider_graphic_pane_copy1

0xefca,	// (0x0005966c) setting_slider_pane_copy1

0xefca,	// (0x0005966c) setting_text_pane_copy1

0xefd4,	// (0x00059676) setting_volume_pane_copy1

0xefdd,	// (0x0005967f) settings_code_pane_cp2_copy1

0xefe5,	// (0x00059687) settings_code_pane_cp_copy1_ParamLimits

0xefe5,	// (0x00059687) settings_code_pane_cp_copy1

0xeff9,	// (0x0005969b) volume_set_pane_copy1

0xf001,	// (0x000596a3) volume_set_pane_g10_copy1

0xf009,	// (0x000596ab) volume_set_pane_g1_copy1

0xf011,	// (0x000596b3) volume_set_pane_g2_copy1

0xf019,	// (0x000596bb) volume_set_pane_g3_copy1

0xf021,	// (0x000596c3) volume_set_pane_g4_copy1

0xf029,	// (0x000596cb) volume_set_pane_g5_copy1

0xf031,	// (0x000596d3) volume_set_pane_g6_copy1

0xf039,	// (0x000596db) volume_set_pane_g7_copy1

0xf041,	// (0x000596e3) volume_set_pane_g8_copy1

0xf049,	// (0x000596eb) volume_set_pane_g9_copy1

0x70c5,	// (0x00051767) bg_set_opt_pane_cp_copy1_ParamLimits

0x70c5,	// (0x00051767) bg_set_opt_pane_cp_copy1

0xf051,	// (0x000596f3) setting_slider_pane_t1_copy1_ParamLimits

0xf051,	// (0x000596f3) setting_slider_pane_t1_copy1

0xf06f,	// (0x00059711) setting_slider_pane_t2_copy1_ParamLimits

0xf06f,	// (0x00059711) setting_slider_pane_t2_copy1

0xf089,	// (0x0005972b) setting_slider_pane_t3_copy1_ParamLimits

0xf089,	// (0x0005972b) setting_slider_pane_t3_copy1

0xf0a1,	// (0x00059743) slider_set_pane_copy1_ParamLimits

0xf0a1,	// (0x00059743) slider_set_pane_copy1

0x80bd,	// (0x0005275f) set_opt_bg_pane_g1_copy2

0x80c5,	// (0x00052767) set_opt_bg_pane_g2_copy2

0xf0b7,	// (0x00059759) set_opt_bg_pane_g3_copy2

0x80d5,	// (0x00052777) set_opt_bg_pane_g4_copy2

0x80dd,	// (0x0005277f) set_opt_bg_pane_g5_copy2

0x80e5,	// (0x00052787) set_opt_bg_pane_g6_copy2

0xf0c1,	// (0x00059763) set_opt_bg_pane_g7_copy2

0xf0c9,	// (0x0005976b) set_opt_bg_pane_g8_copy2

0xf0d3,	// (0x00059775) set_opt_bg_pane_g9_copy2

0x6f7b,	// (0x0005161d) aid_size_touch_slider_mark_copy1_ParamLimits

0x6f7b,	// (0x0005161d) aid_size_touch_slider_mark_copy1

0xf0dd,	// (0x0005977f) slider_set_pane_g1_copy1

0x6f8f,	// (0x00051631) slider_set_pane_g2_copy1

0x60fd,	// (0x0005079f) slider_set_pane_g3_copy1_ParamLimits

0x60fd,	// (0x0005079f) slider_set_pane_g3_copy1

0x6111,	// (0x000507b3) slider_set_pane_g4_copy1_ParamLimits

0x6111,	// (0x000507b3) slider_set_pane_g4_copy1

0x6129,	// (0x000507cb) slider_set_pane_g5_copy1_ParamLimits

0x6129,	// (0x000507cb) slider_set_pane_g5_copy1

0x60fd,	// (0x0005079f) slider_set_pane_g6_copy1_ParamLimits

0x60fd,	// (0x0005079f) slider_set_pane_g6_copy1

0x6f97,	// (0x00051639) slider_set_pane_g7_copy1_ParamLimits

0x6f97,	// (0x00051639) slider_set_pane_g7_copy1

0x6fe5,	// (0x00051687) bg_set_opt_pane_cp2_copy1

0xf0e6,	// (0x00059788) setting_slider_graphic_pane_g1_copy1

0xf0ef,	// (0x00059791) setting_slider_graphic_pane_t1_copy1

0xf0ff,	// (0x000597a1) setting_slider_graphic_pane_t2_copy1

0xf10f,	// (0x000597b1) slider_set_pane_cp_copy1

0xf11f,	// (0x000597c1) input_focus_pane_cp1_copy1

0xf128,	// (0x000597ca) list_set_text_pane_copy1

0xf130,	// (0x000597d2) setting_text_pane_g1_copy1

0x4faa,	// (0x0004f64c) set_text_pane_t1_copy1

0xf11f,	// (0x000597c1) input_focus_pane_cp2_copy1

0xf130,	// (0x000597d2) setting_code_pane_g1_copy1

0xf139,	// (0x000597db) setting_code_pane_t1_copy1

0xf147,	// (0x000597e9) list_set_graphic_pane_copy1

0x6fe5,	// (0x00051687) bg_set_opt_pane_cp4_copy1

0x89ab,	// (0x0005304d) list_set_graphic_pane_g1_copy1_ParamLimits

0x89ab,	// (0x0005304d) list_set_graphic_pane_g1_copy1

0xf159,	// (0x000597fb) list_set_graphic_pane_g2_copy1

0x89c3,	// (0x00053065) list_set_graphic_pane_t1_copy1_ParamLimits

0x89c3,	// (0x00053065) list_set_graphic_pane_t1_copy1

0xc0c0,	// (0x00056762) rs_clock_indi_pane_g1

0xf161,	// (0x00059803) rs_clock_indi_pane_t1

0xe9d2,	// (0x00059074) rs_indi_pane

0xf16f,	// (0x00059811) rs_indi_pane_g1

0xf178,	// (0x0005981a) rs_indi_pane_g2

0xf181,	// (0x00059823) rs_indi_pane_g3

0x0002,

0xfed5,	// (0x0005a577) rs_indi_pane_g

0x8c99,	// (0x0005333b) bg_popup_preview_window_pane_cp03

0xf18a,	// (0x0005982c) popup_fep_tooltip_window_t1

0xcd3b,	// (0x000573dd) popup_note2_window_g2_ParamLimits

0xcd3b,	// (0x000573dd) popup_note2_window_g2

0x0001,

0xfc6e,	// (0x0005a310) popup_note2_window_g_ParamLimits

0xfc6e,	// (0x0005a310) popup_note2_window_g

0xd236,	// (0x000578d8) bg_popup_sub_pane_cp11_ParamLimits

0xd243,	// (0x000578e5) cell_ai3_links_pane_g1_ParamLimits

0xd25a,	// (0x000578fc) cell_ai3_links_pane_t1

0x4faa,	// (0x0004f64c) set_text_pane_t1_copy1_ParamLimits

0x8baa,	// (0x0005324c) cell_graphic_popup_pane_cp2_ParamLimits

0x8baa,	// (0x0005324c) cell_graphic_popup_pane_cp2

0xf198,	// (0x0005983a) cell_graphic_popup_pane_g1_cp2

0x7da1,	// (0x00052443) cell_graphic_popup_pane_g2_cp2

0xf1a0,	// (0x00059842) cell_graphic_popup_pane_g3_cp2

0xf1a8,	// (0x0005984a) cell_graphic_popup_pane_t2_cp2

0x7db2,	// (0x00052454) grid_highlight_pane_cp3_cp2

0x840c,	// (0x00052aae) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8056,	// (0x000526f8) main_tmo_pane_ParamLimits

0xd58e,	// (0x00057c30) popup_tmo_big_image_note_window

0xe6a6,	// (0x00058d48) cell_ai5_widget_list_pane

0xe6ae,	// (0x00058d50) cell_ai5_widget_lrg_icon_pane

0xed3c,	// (0x000593de) tmo_note_info_pane_t1_ParamLimits

0xed51,	// (0x000593f3) tmo_note_info_pane_t2_ParamLimits

0xed66,	// (0x00059408) tmo_note_info_pane_t3_ParamLimits

0xed7b,	// (0x0005941d) tmo_note_info_pane_t4_ParamLimits

0xed8d,	// (0x0005942f) tmo_note_info_pane_t5_ParamLimits

0xfec3,	// (0x0005a565) tmo_note_info_pane_t_ParamLimits

0xeec3,	// (0x00059565) settings_container_pane_ParamLimits

0xf117,	// (0x000597b9) indicator_popup_pane_cp5

0xf117,	// (0x000597b9) indicator_popup_pane_cp6

0xf147,	// (0x000597e9) list_set_graphic_pane_copy1_ParamLimits

0x6fd1,	// (0x00051673) bg_popup_window_pane_cp23

0xf1b6,	// (0x00059858) popup_tmo_big_image_note_window_g1

0xf1c0,	// (0x00059862) popup_tmo_big_image_note_window_t1

0xf1d0,	// (0x00059872) popup_tmo_big_image_note_window_t2

0xf1e0,	// (0x00059882) popup_tmo_big_image_note_window_t3

0x0002,

0xfedc,	// (0x0005a57e) popup_tmo_big_image_note_window_t

0xf1f0,	// (0x00059892) cell_ai5_widget_lrg_icon_pane_g1

0xf1f8,	// (0x0005989a) cell_ai5_widget_lrg_icon_pane_t1

0xf206,	// (0x000598a8) cell_ai5_widget_list_row_pane_ParamLimits

0xf206,	// (0x000598a8) cell_ai5_widget_list_row_pane

0xf21f,	// (0x000598c1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf21f,	// (0x000598c1) cell_ai5_widget_list_row_pane_g1

0xf22c,	// (0x000598ce) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf22c,	// (0x000598ce) cell_ai5_widget_list_row_pane_t1

0xf244,	// (0x000598e6) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf244,	// (0x000598e6) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee3,	// (0x0005a585) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee3,	// (0x0005a585) cell_ai5_widget_list_row_pane_t

0x4cca,	// (0x0004f36c) main_fep_vtchi_ss_pane

0xf256,	// (0x000598f8) popup_fep_char_pre_window

0xf25e,	// (0x00059900) popup_fep_ituss_window

0xf27f,	// (0x00059921) popup_fep_vkbss_window

0xf29e,	// (0x00059940) grid_vkbss_keypad_pane_ParamLimits

0xf29e,	// (0x00059940) grid_vkbss_keypad_pane

0xf2ae,	// (0x00059950) ituss_keypad_pane

0xf2c7,	// (0x00059969) aid_vkbss_key_offset_ParamLimits

0xf2c7,	// (0x00059969) aid_vkbss_key_offset

0xf2d3,	// (0x00059975) cell_vkbss_key_pane_ParamLimits

0xf2d3,	// (0x00059975) cell_vkbss_key_pane

0xf2e9,	// (0x0005998b) bg_cell_vkbss_key_g1_ParamLimits

0xf2e9,	// (0x0005998b) bg_cell_vkbss_key_g1

0xf2f5,	// (0x00059997) cell_vkbss_key_3p_pane_ParamLimits

0xf2f5,	// (0x00059997) cell_vkbss_key_3p_pane

0xf30f,	// (0x000599b1) cell_vkbss_key_g1_ParamLimits

0xf30f,	// (0x000599b1) cell_vkbss_key_g1

0xf329,	// (0x000599cb) cell_vkbss_key_t1_ParamLimits

0xf329,	// (0x000599cb) cell_vkbss_key_t1

0xf354,	// (0x000599f6) cell_ituss_key_pane_ParamLimits

0xf354,	// (0x000599f6) cell_ituss_key_pane

0xf364,	// (0x00059a06) bg_cell_ituss_key_g1_ParamLimits

0xf364,	// (0x00059a06) bg_cell_ituss_key_g1

0xf370,	// (0x00059a12) cell_ituss_key_pane_g1_ParamLimits

0xf370,	// (0x00059a12) cell_ituss_key_pane_g1

0xf37c,	// (0x00059a1e) cell_ituss_key_pane_g2_ParamLimits

0xf37c,	// (0x00059a1e) cell_ituss_key_pane_g2

0x0001,

0xfee8,	// (0x0005a58a) cell_ituss_key_pane_g_ParamLimits

0xfee8,	// (0x0005a58a) cell_ituss_key_pane_g

0xf395,	// (0x00059a37) cell_ituss_key_t1_ParamLimits

0xf395,	// (0x00059a37) cell_ituss_key_t1

0xf3c3,	// (0x00059a65) cell_ituss_key_t2_ParamLimits

0xf3c3,	// (0x00059a65) cell_ituss_key_t2

0xf3f4,	// (0x00059a96) cell_ituss_key_t3_ParamLimits

0xf3f4,	// (0x00059a96) cell_ituss_key_t3

0xf425,	// (0x00059ac7) cell_ituss_key_t4_ParamLimits

0xf425,	// (0x00059ac7) cell_ituss_key_t4

0x0003,

0xfeed,	// (0x0005a58f) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x0005a58f) cell_ituss_key_t

0xf456,	// (0x00059af8) cell_vkbss_key_3p_pane_g1

0xf45e,	// (0x00059b00) cell_vkbss_key_3p_pane_g2

0xf466,	// (0x00059b08) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef6,	// (0x0005a598) cell_vkbss_key_3p_pane_g

0x6fd1,	// (0x00051673) bg_popup_fep_char_preview_window_cp02

0xf46e,	// (0x00059b10) popup_fep_char_pre_window_t1

0xe67c,	// (0x00058d1e) main_ai5_sk_pane

0xee07,	// (0x000594a9) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee13,	// (0x000594b5) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xee27,	// (0x000594c9) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee36,	// (0x000594d8) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfece,	// (0x0005a570) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee49,	// (0x000594eb) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8056,	// (0x000526f8) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf47d,	// (0x00059b1f) main_ai5_sk_pane_g1

0x9fc1,	// (0x00054663) popup_query_code_window_g1

0xf274,	// (0x00059916) popup_fep_vkb_icf_pane

0xf288,	// (0x0005992a) popup_fep_vtchi_icf_pane

0x8056,	// (0x000526f8) bg_icf_pane

0xf495,	// (0x00059b37) list_vkb_icf_pane

0x8056,	// (0x000526f8) bg_icf_pane_cp01

0xf4ad,	// (0x00059b4f) vtchi_icf_list_pane

0xf4bd,	// (0x00059b5f) list_vkb_icf_pane_t1_ParamLimits

0xf4bd,	// (0x00059b5f) list_vkb_icf_pane_t1

0xf4d4,	// (0x00059b76) vtchi_icf_list_pane_t1_ParamLimits

0xf4d4,	// (0x00059b76) vtchi_icf_list_pane_t1

0xf25e,	// (0x00059900) popup_fep_ituss_window_ParamLimits

0xf288,	// (0x0005992a) popup_fep_vtchi_icf_pane_ParamLimits

0xf2ae,	// (0x00059950) ituss_keypad_pane_ParamLimits

0xf2be,	// (0x00059960) ituss_sks_pane

0x8056,	// (0x000526f8) bg_icf_pane_ParamLimits

0xf486,	// (0x00059b28) icf_edit_indi_pane_ParamLimits

0xf486,	// (0x00059b28) icf_edit_indi_pane

0xf495,	// (0x00059b37) list_vkb_icf_pane_ParamLimits

0x8056,	// (0x000526f8) bg_icf_pane_cp01_ParamLimits

0xf4a1,	// (0x00059b43) icf_edit_indi_pane_cp01_ParamLimits

0xf4a1,	// (0x00059b43) icf_edit_indi_pane_cp01

0xf4b5,	// (0x00059b57) vtchi_query_pane

0xc352,	// (0x000569f4) icf_edit_indi_pane_g1_ParamLimits

0xc352,	// (0x000569f4) icf_edit_indi_pane_g1

0xf4f0,	// (0x00059b92) icf_edit_indi_pane_g2_ParamLimits

0xf4f0,	// (0x00059b92) icf_edit_indi_pane_g2

0x0001,

0xfefd,	// (0x0005a59f) icf_edit_indi_pane_g_ParamLimits

0xfefd,	// (0x0005a59f) icf_edit_indi_pane_g

0xf4fc,	// (0x00059b9e) icf_edit_indi_pane_t1

0xf50a,	// (0x00059bac) bg_input_focus_pane_cp042

0x7f85,	// (0x00052627) vtchi_button_pane

0xf513,	// (0x00059bb5) vtchi_query_pane_t1

0xf521,	// (0x00059bc3) vtchi_query_pane_t2

0xf52f,	// (0x00059bd1) vtchi_query_pane_t3

0x0002,

0xff02,	// (0x0005a5a4) vtchi_query_pane_t

0x6fd1,	// (0x00051673) bg_button_pane_cp13

0xf53d,	// (0x00059bdf) vtchi_button_pane_g1

0xda95,	// (0x00058137) ituss_sks_pane_g1

0xf545,	// (0x00059be7) ituss_sks_pane_g2

0x0001,

0xff09,	// (0x0005a5ab) ituss_sks_pane_g

0xf54e,	// (0x00059bf0) ituss_sks_pane_t1

0xf55c,	// (0x00059bfe) ituss_sks_pane_t2

0x0001,

0xff0e,	// (0x0005a5b0) ituss_sks_pane_t

0xbb22,	// (0x000561c4) indicator_nsta_pane_cp_g1

0xbb2b,	// (0x000561cd) indicator_nsta_pane_cp_g2

0xbb33,	// (0x000561d5) indicator_nsta_pane_cp_g3

0xbb3b,	// (0x000561dd) indicator_nsta_pane_cp_g4

0xbb43,	// (0x000561e5) indicator_nsta_pane_cp_g5

0xbb4b,	// (0x000561ed) indicator_nsta_pane_cp_g6

0x0005,

0xfaac,	// (0x0005a14e) indicator_nsta_pane_cp_g

0xe296,	// (0x00058938) cell_graphic2_pane_t2_ParamLimits

0xe296,	// (0x00058938) cell_graphic2_pane_t2

0x0001,

0xfdc5,	// (0x0005a467) cell_graphic2_pane_t_ParamLimits

0xfdc5,	// (0x0005a467) cell_graphic2_pane_t

0xe2c3,	// (0x00058965) cell_graphic2_control_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large

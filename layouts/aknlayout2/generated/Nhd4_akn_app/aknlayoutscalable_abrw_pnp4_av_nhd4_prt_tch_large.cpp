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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0003e6e8 };

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
0xb2a7,	// (0x0004998f) Screen

0xb2b3,	// (0x0004999b) application_window_ParamLimits

0xb2b3,	// (0x0004999b) application_window

0x3f5b,	// (0x00042643) screen_g1

0x8aaa,	// (0x00047192) area_bottom_pane_ParamLimits

0x8aaa,	// (0x00047192) area_bottom_pane

0x8b6a,	// (0x00047252) area_top_pane_ParamLimits

0x8b6a,	// (0x00047252) area_top_pane

0x8c08,	// (0x000472f0) main_pane_ParamLimits

0x8c08,	// (0x000472f0) main_pane

0x3f65,	// (0x0004264d) misc_graphics

0xbb52,	// (0x0004a23a) battery_pane_ParamLimits

0xbb52,	// (0x0004a23a) battery_pane

0x5b91,	// (0x00044279) bg_status_flat_pane_g8

0x5b99,	// (0x00044281) bg_status_flat_pane_g9

0x5284,	// (0x0004396c) context_pane_ParamLimits

0x5284,	// (0x0004396c) context_pane

0xbc86,	// (0x0004a36e) navi_pane_ParamLimits

0xbc86,	// (0x0004a36e) navi_pane

0xbcf3,	// (0x0004a3db) signal_pane_ParamLimits

0xbcf3,	// (0x0004a3db) signal_pane

0x0008,

0xf884,	// (0x0004df6c) bg_status_flat_pane_g

0xbd58,	// (0x0004a440) status_pane_g1_ParamLimits

0xbd58,	// (0x0004a440) status_pane_g1

0x5869,	// (0x00043f51) status_pane_g2_ParamLimits

0x5869,	// (0x00043f51) status_pane_g2

0x52e9,	// (0x000439d1) status_pane_g3_ParamLimits

0x52e9,	// (0x000439d1) status_pane_g3

0x0004,

0xf7ab,	// (0x0004de93) status_pane_g_ParamLimits

0xf7ab,	// (0x0004de93) status_pane_g

0xbd6c,	// (0x0004a454) title_pane_ParamLimits

0xbd6c,	// (0x0004a454) title_pane

0xbda9,	// (0x0004a491) uni_indicator_pane_ParamLimits

0xbda9,	// (0x0004a491) uni_indicator_pane

0x51c7,	// (0x000438af) bg_list_pane_ParamLimits

0x51c7,	// (0x000438af) bg_list_pane

0xbad7,	// (0x0004a1bf) find_pane

0xbadf,	// (0x0004a1c7) listscroll_app_pane_ParamLimits

0xbadf,	// (0x0004a1c7) listscroll_app_pane

0x51e7,	// (0x000438cf) listscroll_form_pane

0x9af4,	// (0x000481dc) listscroll_gen_pane_ParamLimits

0x9af4,	// (0x000481dc) listscroll_gen_pane

0x51e7,	// (0x000438cf) listscroll_set_pane

0xb768,	// (0x00049e50) main_idle_act_pane

0x4fab,	// (0x00043693) main_idle_trad_pane

0x4fab,	// (0x00043693) main_list_empty_pane

0x4726,	// (0x00042e0e) main_midp_pane

0x5201,	// (0x000438e9) main_pane_g1_ParamLimits

0x5201,	// (0x000438e9) main_pane_g1

0x9b16,	// (0x000481fe) popup_ai_message_window_ParamLimits

0x9b16,	// (0x000481fe) popup_ai_message_window

0x9bb8,	// (0x000482a0) popup_fep_china_uni_window_ParamLimits

0x9bb8,	// (0x000482a0) popup_fep_china_uni_window

0x9c12,	// (0x000482fa) popup_fep_japan_candidate_window_ParamLimits

0x9c12,	// (0x000482fa) popup_fep_japan_candidate_window

0x9c30,	// (0x00048318) popup_fep_japan_predictive_window_ParamLimits

0x9c30,	// (0x00048318) popup_fep_japan_predictive_window

0x9c60,	// (0x00048348) popup_find_window

0x9c6d,	// (0x00048355) popup_grid_graphic_window_ParamLimits

0x9c6d,	// (0x00048355) popup_grid_graphic_window

0x9c93,	// (0x0004837b) popup_large_graphic_colour_window

0x9cb9,	// (0x000483a1) popup_menu_window_ParamLimits

0x9cb9,	// (0x000483a1) popup_menu_window

0x9e73,	// (0x0004855b) popup_note_image_window

0x9e5f,	// (0x00048547) popup_note_wait_window_ParamLimits

0x9e5f,	// (0x00048547) popup_note_wait_window

0x9e5f,	// (0x00048547) popup_note_window_ParamLimits

0x9e5f,	// (0x00048547) popup_note_window

0x9ec9,	// (0x000485b1) popup_query_code_window_ParamLimits

0x9ec9,	// (0x000485b1) popup_query_code_window

0x9edd,	// (0x000485c5) popup_query_data_code_window_ParamLimits

0x9edd,	// (0x000485c5) popup_query_data_code_window

0x9ef4,	// (0x000485dc) popup_query_data_window_ParamLimits

0x9ef4,	// (0x000485dc) popup_query_data_window

0x9f0c,	// (0x000485f4) popup_query_sat_info_window_ParamLimits

0x9f0c,	// (0x000485f4) popup_query_sat_info_window

0x9f45,	// (0x0004862d) popup_snote_single_graphic_window_ParamLimits

0x9f45,	// (0x0004862d) popup_snote_single_graphic_window

0x9f45,	// (0x0004862d) popup_snote_single_text_window_ParamLimits

0x9f45,	// (0x0004862d) popup_snote_single_text_window

0x9f5a,	// (0x00048642) popup_sub_window_general

0xa088,	// (0x00048770) popup_window_general_ParamLimits

0xa088,	// (0x00048770) popup_window_general

0x520f,	// (0x000438f7) power_save_pane

0x999e,	// (0x00048086) control_pane_g1_ParamLimits

0x999e,	// (0x00048086) control_pane_g1

0x99c5,	// (0x000480ad) control_pane_g2_ParamLimits

0x99c5,	// (0x000480ad) control_pane_g2

0x51b1,	// (0x00043899) control_pane_g3_ParamLimits

0x51b1,	// (0x00043899) control_pane_g3

0x0007,

0xf793,	// (0x0004de7b) control_pane_g_ParamLimits

0xf793,	// (0x0004de7b) control_pane_g

0x9a09,	// (0x000480f1) control_pane_t1_ParamLimits

0x9a09,	// (0x000480f1) control_pane_t1

0x9a55,	// (0x0004813d) control_pane_t2_ParamLimits

0x9a55,	// (0x0004813d) control_pane_t2

0x0002,

0xf7a4,	// (0x0004de8c) control_pane_t_ParamLimits

0xf7a4,	// (0x0004de8c) control_pane_t

0x50d2,	// (0x000437ba) navi_navi_volume_pane_cp1

0x50db,	// (0x000437c3) status_small_icon_pane

0x50e3,	// (0x000437cb) status_small_pane_g1_ParamLimits

0x50e3,	// (0x000437cb) status_small_pane_g1

0x5117,	// (0x000437ff) status_small_pane_g2_ParamLimits

0x5117,	// (0x000437ff) status_small_pane_g2

0x5123,	// (0x0004380b) status_small_pane_g3_ParamLimits

0x5123,	// (0x0004380b) status_small_pane_g3

0x512f,	// (0x00043817) status_small_pane_g4_ParamLimits

0x512f,	// (0x00043817) status_small_pane_g4

0x513b,	// (0x00043823) status_small_pane_g5_ParamLimits

0x513b,	// (0x00043823) status_small_pane_g5

0x514a,	// (0x00043832) status_small_pane_g6_ParamLimits

0x514a,	// (0x00043832) status_small_pane_g6

0x0007,

0xf782,	// (0x0004de6a) status_small_pane_g_ParamLimits

0xf782,	// (0x0004de6a) status_small_pane_g

0x517a,	// (0x00043862) status_small_pane_t1

0x519d,	// (0x00043885) status_small_wait_pane_ParamLimits

0x519d,	// (0x00043885) status_small_wait_pane

0xb81e,	// (0x00049f06) aid_levels_signal_ParamLimits

0xb81e,	// (0x00049f06) aid_levels_signal

0xb830,	// (0x00049f18) signal_pane_g1_ParamLimits

0xb830,	// (0x00049f18) signal_pane_g1

0xb845,	// (0x00049f2d) signal_pane_g2_ParamLimits

0xb845,	// (0x00049f2d) signal_pane_g2

0x0003,

0xf713,	// (0x0004ddfb) signal_pane_g_ParamLimits

0xf713,	// (0x0004ddfb) signal_pane_g

0x4b71,	// (0x00043259) context_pane_g1

0xb2c3,	// (0x000499ab) title_pane_g1

0xb2ed,	// (0x000499d5) title_pane_t1

0x3f7b,	// (0x00042663) title_pane_t2

0x3fa1,	// (0x00042689) title_pane_t3

0x0002,

0xf55d,	// (0x0004dc45) title_pane_t

0xbdc1,	// (0x0004a4a9) aid_levels_battery_ParamLimits

0xbdc1,	// (0x0004a4a9) aid_levels_battery

0xbdd5,	// (0x0004a4bd) battery_pane_g1_ParamLimits

0xbdd5,	// (0x0004a4bd) battery_pane_g1

0xbdeb,	// (0x0004a4d3) battery_pane_g2_ParamLimits

0xbdeb,	// (0x0004a4d3) battery_pane_g2

0x0001,

0xf7b6,	// (0x0004de9e) battery_pane_g_ParamLimits

0xf7b6,	// (0x0004de9e) battery_pane_g

0xc14b,	// (0x0004a833) uni_indicator_pane_g1

0xc160,	// (0x0004a848) uni_indicator_pane_g2

0x6387,	// (0x00044a6f) uni_indicator_pane_g3

0x0005,

0xf92c,	// (0x0004e014) uni_indicator_pane_g

0x4e41,	// (0x00043529) navi_icon_pane_ParamLimits

0x4e41,	// (0x00043529) navi_icon_pane

0x4dc5,	// (0x000434ad) navi_midp_pane

0x4e5d,	// (0x00043545) navi_navi_pane

0x4e67,	// (0x0004354f) navi_text_pane_ParamLimits

0x4e67,	// (0x0004354f) navi_text_pane

0x3f5b,	// (0x00042643) status_small_wait_pane_g1

0x427c,	// (0x00042964) status_small_wait_pane_g2

0x0001,

0xf927,	// (0x0004e00f) status_small_wait_pane_g

0x6109,	// (0x000447f1) navi_navi_icon_text_pane

0x6123,	// (0x0004480b) navi_navi_pane_g1_ParamLimits

0x6123,	// (0x0004480b) navi_navi_pane_g1

0x6111,	// (0x000447f9) navi_navi_pane_g2_ParamLimits

0x6111,	// (0x000447f9) navi_navi_pane_g2

0x0001,

0xf8f5,	// (0x0004dfdd) navi_navi_pane_g_ParamLimits

0xf8f5,	// (0x0004dfdd) navi_navi_pane_g

0x6135,	// (0x0004481d) navi_navi_tabs_pane

0x613e,	// (0x00044826) navi_navi_text_pane

0x6109,	// (0x000447f1) navi_navi_volume_pane

0x60e5,	// (0x000447cd) navi_text_pane_t1

0x60d9,	// (0x000447c1) navi_icon_pane_g1

0x6040,	// (0x00044728) navi_navi_text_pane_t1

0xa338,	// (0x00048a20) navi_navi_volume_pane_g1

0xa340,	// (0x00048a28) volume_small_pane

0xc04a,	// (0x0004a732) navi_navi_icon_text_pane_g1

0xc052,	// (0x0004a73a) navi_navi_icon_text_pane_t1

0x4e5d,	// (0x00043545) navi_tabs_2_long_pane

0x4e5d,	// (0x00043545) navi_tabs_2_pane

0x4e5d,	// (0x00043545) navi_tabs_3_long_pane

0x4e5d,	// (0x00043545) navi_tabs_3_pane

0x4e5d,	// (0x00043545) navi_tabs_4_pane

0xa318,	// (0x00048a00) tabs_2_active_pane_ParamLimits

0xa318,	// (0x00048a00) tabs_2_active_pane

0xa328,	// (0x00048a10) tabs_2_passive_pane_ParamLimits

0xa328,	// (0x00048a10) tabs_2_passive_pane

0xa2e6,	// (0x000489ce) tabs_3_active_pane_ParamLimits

0xa2e6,	// (0x000489ce) tabs_3_active_pane

0xa2f6,	// (0x000489de) tabs_3_passive_pane_ParamLimits

0xa2f6,	// (0x000489de) tabs_3_passive_pane

0xa307,	// (0x000489ef) tabs_3_passive_pane_cp_ParamLimits

0xa307,	// (0x000489ef) tabs_3_passive_pane_cp

0xa2a2,	// (0x0004898a) tabs_4_active_pane_ParamLimits

0xa2a2,	// (0x0004898a) tabs_4_active_pane

0xa2b3,	// (0x0004899b) tabs_4_passive_pane_ParamLimits

0xa2b3,	// (0x0004899b) tabs_4_passive_pane

0xa2c4,	// (0x000489ac) tabs_4_passive_pane_cp_ParamLimits

0xa2c4,	// (0x000489ac) tabs_4_passive_pane_cp

0xa2d5,	// (0x000489bd) tabs_4_passive_pane_cp2_ParamLimits

0xa2d5,	// (0x000489bd) tabs_4_passive_pane_cp2

0xa27e,	// (0x00048966) tabs_2_long_active_pane_ParamLimits

0xa27e,	// (0x00048966) tabs_2_long_active_pane

0xa290,	// (0x00048978) tabs_2_long_passive_pane_ParamLimits

0xa290,	// (0x00048978) tabs_2_long_passive_pane

0xa239,	// (0x00048921) tabs_3_long_active_pane_ParamLimits

0xa239,	// (0x00048921) tabs_3_long_active_pane

0xa252,	// (0x0004893a) tabs_3_long_passive_pane_ParamLimits

0xa252,	// (0x0004893a) tabs_3_long_passive_pane

0xa265,	// (0x0004894d) tabs_3_long_passive_pane_cp_ParamLimits

0xa265,	// (0x0004894d) tabs_3_long_passive_pane_cp

0xa1df,	// (0x000488c7) volume_small_pane_g1

0xa1e8,	// (0x000488d0) volume_small_pane_g2

0xa1f1,	// (0x000488d9) volume_small_pane_g3

0xa1fa,	// (0x000488e2) volume_small_pane_g4

0xa203,	// (0x000488eb) volume_small_pane_g5

0xa20c,	// (0x000488f4) volume_small_pane_g6

0xa215,	// (0x000488fd) volume_small_pane_g7

0xa21e,	// (0x00048906) volume_small_pane_g8

0xa227,	// (0x0004890f) volume_small_pane_g9

0xa230,	// (0x00048918) volume_small_pane_g10

0x0009,

0xf8c1,	// (0x0004dfa9) volume_small_pane_g

0x3fc1,	// (0x000426a9) bg_active_tab_pane_cp2_ParamLimits

0x3fc1,	// (0x000426a9) bg_active_tab_pane_cp2

0xb355,	// (0x00049a3d) tabs_3_active_pane_g1

0xb35d,	// (0x00049a45) tabs_3_active_pane_t1

0x3fc1,	// (0x000426a9) bg_passive_tab_pane_cp2_ParamLimits

0x3fc1,	// (0x000426a9) bg_passive_tab_pane_cp2

0xb355,	// (0x00049a3d) tabs_3_passive_pane_g1

0xb35d,	// (0x00049a45) tabs_3_passive_pane_t1

0x3fc1,	// (0x000426a9) bg_active_tab_pane_cp3_ParamLimits

0x3fc1,	// (0x000426a9) bg_active_tab_pane_cp3

0xb36f,	// (0x00049a57) tabs_4_active_pane_g1

0xb377,	// (0x00049a5f) tabs_4_active_pane_t1

0x3fc1,	// (0x000426a9) bg_passive_tab_pane_cp3_ParamLimits

0x3fc1,	// (0x000426a9) bg_passive_tab_pane_cp3

0xb36f,	// (0x00049a57) tabs_4_1_passive_pane_g1

0xb377,	// (0x00049a5f) tabs_4_1_passive_pane_t1

0x4726,	// (0x00042e0e) list_highlight_pane_cp2

0xc7f2,	// (0x0004aeda) list_set_pane_ParamLimits

0xc7f2,	// (0x0004aeda) list_set_pane

0xc894,	// (0x0004af7c) main_pane_set_t1_ParamLimits

0xc894,	// (0x0004af7c) main_pane_set_t1

0xc8b4,	// (0x0004af9c) main_pane_set_t2_ParamLimits

0xc8b4,	// (0x0004af9c) main_pane_set_t2

0xc8c8,	// (0x0004afb0) main_pane_set_t3_ParamLimits

0xc8c8,	// (0x0004afb0) main_pane_set_t3

0xc8da,	// (0x0004afc2) main_pane_set_t4_ParamLimits

0xc8da,	// (0x0004afc2) main_pane_set_t4

0x0003,

0xf991,	// (0x0004e079) main_pane_set_t_ParamLimits

0xf991,	// (0x0004e079) main_pane_set_t

0xc8ec,	// (0x0004afd4) setting_code_pane

0xc8f6,	// (0x0004afde) setting_slider_graphic_pane

0xc8f6,	// (0x0004afde) setting_slider_pane

0xc8f6,	// (0x0004afde) setting_text_pane

0xc8f6,	// (0x0004afde) setting_volume_pane

0x8e39,	// (0x00047521) volume_set_pane

0x3fc1,	// (0x000426a9) bg_set_opt_pane_cp

0x8e41,	// (0x00047529) setting_slider_pane_t1

0x8e5a,	// (0x00047542) setting_slider_pane_t2

0x8e73,	// (0x0004755b) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0004dc4c) setting_slider_pane_t

0x8e8a,	// (0x00047572) slider_set_pane

0x3f65,	// (0x0004264d) bg_set_opt_pane_cp2

0x3fcf,	// (0x000426b7) setting_slider_graphic_pane_g1

0x8ea0,	// (0x00047588) setting_slider_graphic_pane_t1

0x8eaf,	// (0x00047597) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0004dc53) setting_slider_graphic_pane_t

0x8ebe,	// (0x000475a6) slider_set_pane_cp

0x3f65,	// (0x0004264d) input_focus_pane_cp1

0x6564,	// (0x00044c4c) list_set_text_pane

0x3f5b,	// (0x00042643) setting_text_pane_g1

0x3f65,	// (0x0004264d) input_focus_pane_cp2

0x3f5b,	// (0x00042643) setting_code_pane_g1

0x3fd8,	// (0x000426c0) setting_code_pane_t1

0x8ec6,	// (0x000475ae) set_text_pane_t1_ParamLimits

0x8ec6,	// (0x000475ae) set_text_pane_t1

0x461d,	// (0x00042d05) set_opt_bg_pane_g1

0x4625,	// (0x00042d0d) set_opt_bg_pane_g2

0x6544,	// (0x00044c2c) set_opt_bg_pane_g3

0x4635,	// (0x00042d1d) set_opt_bg_pane_g4

0x463d,	// (0x00042d25) set_opt_bg_pane_g5

0x4645,	// (0x00042d2d) set_opt_bg_pane_g6

0x654c,	// (0x00044c34) set_opt_bg_pane_g7

0x6554,	// (0x00044c3c) set_opt_bg_pane_g8

0x655c,	// (0x00044c44) set_opt_bg_pane_g9

0x0008,

0xf97e,	// (0x0004e066) set_opt_bg_pane_g

0x6537,	// (0x00044c1f) slider_set_pane_g1

0xa3ad,	// (0x00048a95) slider_set_pane_g2

0x0006,

0xf96f,	// (0x0004e057) slider_set_pane_g

0xa349,	// (0x00048a31) volume_set_pane_g1

0xa351,	// (0x00048a39) volume_set_pane_g2

0xa359,	// (0x00048a41) volume_set_pane_g3

0xa361,	// (0x00048a49) volume_set_pane_g4

0xa369,	// (0x00048a51) volume_set_pane_g5

0xa371,	// (0x00048a59) volume_set_pane_g6

0xa379,	// (0x00048a61) volume_set_pane_g7

0xa381,	// (0x00048a69) volume_set_pane_g8

0xa389,	// (0x00048a71) volume_set_pane_g9

0xa391,	// (0x00048a79) volume_set_pane_g10

0x0009,

0xf947,	// (0x0004e02f) volume_set_pane_g

0xb389,	// (0x00049a71) indicator_pane_ParamLimits

0xb389,	// (0x00049a71) indicator_pane

0xb395,	// (0x00049a7d) main_idle_pane_g2_ParamLimits

0xb395,	// (0x00049a7d) main_idle_pane_g2

0xb3bd,	// (0x00049aa5) main_pane_idle_g1_ParamLimits

0xb3bd,	// (0x00049aa5) main_pane_idle_g1

0x3fe6,	// (0x000426ce) popup_clock_digital_analogue_window_ParamLimits

0x3fe6,	// (0x000426ce) popup_clock_digital_analogue_window

0xb3ca,	// (0x00049ab2) soft_indicator_pane_ParamLimits

0xb3ca,	// (0x00049ab2) soft_indicator_pane

0xb3d6,	// (0x00049abe) wallpaper_pane_ParamLimits

0xb3d6,	// (0x00049abe) wallpaper_pane

0x3f5b,	// (0x00042643) wallpaper_pane_g1

0xb3e2,	// (0x00049aca) indicator_pane_g1_ParamLimits

0xb3e2,	// (0x00049aca) indicator_pane_g1

0x66ba,	// (0x00044da2) navi_navi_icon_text_pane_srt_g1

0x4014,	// (0x000426fc) soft_indicator_pane_t1

0x402e,	// (0x00042716) aid_ps_area_pane

0xb3ee,	// (0x00049ad6) aid_ps_clock_pane

0x403f,	// (0x00042727) aid_ps_indicator_pane

0x404b,	// (0x00042733) indicator_ps_pane_ParamLimits

0x404b,	// (0x00042733) indicator_ps_pane

0x405a,	// (0x00042742) power_save_pane_g1_ParamLimits

0x405a,	// (0x00042742) power_save_pane_g1

0x4066,	// (0x0004274e) power_save_pane_g2_ParamLimits

0x4066,	// (0x0004274e) power_save_pane_g2

0x8a5e,	// (0x00047146) aid_navinavi_width_pane

0x402e,	// (0x00042716) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0004dc58) power_save_pane_g_ParamLimits

0xf570,	// (0x0004dc58) power_save_pane_g

0x4074,	// (0x0004275c) power_save_pane_t1_ParamLimits

0x4074,	// (0x0004275c) power_save_pane_t1

0xb3ee,	// (0x00049ad6) aid_ps_clock_pane_ParamLimits

0x403f,	// (0x00042727) aid_ps_indicator_pane_ParamLimits

0x4086,	// (0x0004276e) power_save_pane_t4_ParamLimits

0x4086,	// (0x0004276e) power_save_pane_t4

0x0001,

0xf575,	// (0x0004dc5d) power_save_pane_t_ParamLimits

0xf575,	// (0x0004dc5d) power_save_pane_t

0x40b0,	// (0x00042798) power_save_t3_ParamLimits

0x40b0,	// (0x00042798) power_save_t3

0x409b,	// (0x00042783) power_save_t2_ParamLimits

0x409b,	// (0x00042783) power_save_t2

0x40c5,	// (0x000427ad) indicator_ps_pane_g1

0xb3fc,	// (0x00049ae4) ai_gene_pane_ParamLimits

0xb3fc,	// (0x00049ae4) ai_gene_pane

0xb408,	// (0x00049af0) ai_links_pane_ParamLimits

0xb408,	// (0x00049af0) ai_links_pane

0xb414,	// (0x00049afc) indicator_pane_cp1_ParamLimits

0xb414,	// (0x00049afc) indicator_pane_cp1

0xb420,	// (0x00049b08) main_pane_idle_g1_cp_ParamLimits

0xb420,	// (0x00049b08) main_pane_idle_g1_cp

0x40ce,	// (0x000427b6) popup_ai_links_title_window

0xb42c,	// (0x00049b14) soft_indicator_pane_cp1_ParamLimits

0xb42c,	// (0x00049b14) soft_indicator_pane_cp1

0x6375,	// (0x00044a5d) ai_links_pane_g1

0x637e,	// (0x00044a66) grid_ai_links_pane

0xc140,	// (0x0004a828) ai_gene_pane_1

0x6363,	// (0x00044a4b) ai_gene_pane_2

0x636c,	// (0x00044a54) list_highlight_pane_cp4

0xc124,	// (0x0004a80c) cell_ai_link_pane_ParamLimits

0xc124,	// (0x0004a80c) cell_ai_link_pane

0x635b,	// (0x00044a43) cell_ai_link_pane_g1

0x427c,	// (0x00042964) cell_ai_link_pane_g2

0x0001,

0xf922,	// (0x0004e00a) cell_ai_link_pane_g

0x3f65,	// (0x0004264d) grid_highlight_cp2

0x3f65,	// (0x0004264d) bg_popup_sub_pane_cp1

0x40e5,	// (0x000427cd) popup_ai_links_title_window_t1

0x62cd,	// (0x000449b5) ai_gene_pane_1_g1_ParamLimits

0x62cd,	// (0x000449b5) ai_gene_pane_1_g1

0x62d9,	// (0x000449c1) ai_gene_pane_1_g2_ParamLimits

0x62d9,	// (0x000449c1) ai_gene_pane_1_g2

0x0001,

0xf918,	// (0x0004e000) ai_gene_pane_1_g_ParamLimits

0xf918,	// (0x0004e000) ai_gene_pane_1_g

0x62e6,	// (0x000449ce) ai_gene_pane_1_t1_ParamLimits

0x62e6,	// (0x000449ce) ai_gene_pane_1_t1

0x631a,	// (0x00044a02) grid_ai_soft_ind_pane

0x62b8,	// (0x000449a0) ai_gene_pane_2_t1_ParamLimits

0x62b8,	// (0x000449a0) ai_gene_pane_2_t1

0xb438,	// (0x00049b20) main_pane_empty_t1_ParamLimits

0xb438,	// (0x00049b20) main_pane_empty_t1

0xb450,	// (0x00049b38) main_pane_empty_t2_ParamLimits

0xb450,	// (0x00049b38) main_pane_empty_t2

0xb465,	// (0x00049b4d) main_pane_empty_t3_ParamLimits

0xb465,	// (0x00049b4d) main_pane_empty_t3

0xb477,	// (0x00049b5f) main_pane_empty_t4_ParamLimits

0xb477,	// (0x00049b5f) main_pane_empty_t4

0xb489,	// (0x00049b71) main_pane_empty_t5_ParamLimits

0xb489,	// (0x00049b71) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0004dc62) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0004dc62) main_pane_empty_t

0x466e,	// (0x00042d56) bg_popup_window_pane_ParamLimits

0x466e,	// (0x00042d56) bg_popup_window_pane

0x604e,	// (0x00044736) find_popup_pane_cp2_ParamLimits

0x604e,	// (0x00044736) find_popup_pane_cp2

0x605a,	// (0x00044742) heading_pane_ParamLimits

0x605a,	// (0x00044742) heading_pane

0x3f65,	// (0x0004264d) bg_popup_sub_pane

0xc06c,	// (0x0004a754) bg_popup_window_pane_g1_ParamLimits

0xc06c,	// (0x0004a754) bg_popup_window_pane_g1

0xc078,	// (0x0004a760) bg_popup_window_pane_g2_ParamLimits

0xc078,	// (0x0004a760) bg_popup_window_pane_g2

0xc084,	// (0x0004a76c) bg_popup_window_pane_g3_ParamLimits

0xc084,	// (0x0004a76c) bg_popup_window_pane_g3

0xc090,	// (0x0004a778) bg_popup_window_pane_g4_ParamLimits

0xc090,	// (0x0004a778) bg_popup_window_pane_g4

0xc09c,	// (0x0004a784) bg_popup_window_pane_g5_ParamLimits

0xc09c,	// (0x0004a784) bg_popup_window_pane_g5

0xc0a8,	// (0x0004a790) bg_popup_window_pane_g6_ParamLimits

0xc0a8,	// (0x0004a790) bg_popup_window_pane_g6

0xc0b4,	// (0x0004a79c) bg_popup_window_pane_g7_ParamLimits

0xc0b4,	// (0x0004a79c) bg_popup_window_pane_g7

0xc0c0,	// (0x0004a7a8) bg_popup_window_pane_g8_ParamLimits

0xc0c0,	// (0x0004a7a8) bg_popup_window_pane_g8

0xc0cc,	// (0x0004a7b4) bg_popup_window_pane_g9_ParamLimits

0xc0cc,	// (0x0004a7b4) bg_popup_window_pane_g9

0x6034,	// (0x0004471c) bg_popup_window_pane_g10_ParamLimits

0x6034,	// (0x0004471c) bg_popup_window_pane_g10

0x0009,

0xf8e0,	// (0x0004dfc8) bg_popup_window_pane_g_ParamLimits

0xf8e0,	// (0x0004dfc8) bg_popup_window_pane_g

0x5feb,	// (0x000446d3) bg_popup_heading_pane_ParamLimits

0x5feb,	// (0x000446d3) bg_popup_heading_pane

0xa435,	// (0x00048b1d) tabs_4_passive_pane_cp_srt_ParamLimits

0xa435,	// (0x00048b1d) tabs_4_passive_pane_cp_srt

0xa447,	// (0x00048b2f) tabs_4_passive_pane_srt_ParamLimits

0x5fff,	// (0x000446e7) heading_pane_g2

0xa447,	// (0x00048b2f) tabs_4_passive_pane_srt

0x4726,	// (0x00042e0e) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4726,	// (0x00042e0e) bg_passive_tab_pane_cp3_srt

0x6007,	// (0x000446ef) heading_pane_t1_ParamLimits

0x6007,	// (0x000446ef) heading_pane_t1

0x601e,	// (0x00044706) heading_pane_t2_ParamLimits

0x601e,	// (0x00044706) heading_pane_t2

0x0001,

0xf8db,	// (0x0004dfc3) heading_pane_t_ParamLimits

0xf8db,	// (0x0004dfc3) heading_pane_t

0x5b59,	// (0x00044241) bg_popup_heading_pane_g1

0x5bea,	// (0x000442d2) bg_popup_heading_pane_g2

0x5bf4,	// (0x000442dc) bg_popup_heading_pane_g3

0x5bfe,	// (0x000442e6) bg_popup_heading_pane_g4

0x5c08,	// (0x000442f0) bg_popup_heading_pane_g5

0x5c12,	// (0x000442fa) bg_popup_heading_pane_g6

0x5c1a,	// (0x00044302) bg_popup_heading_pane_g7

0x5c22,	// (0x0004430a) bg_popup_heading_pane_g8

0x5c2c,	// (0x00044314) bg_popup_heading_pane_g9

0x0008,

0xf897,	// (0x0004df7f) bg_popup_heading_pane_g

0x53dd,	// (0x00043ac5) bg_popup_sub_pane_g1

0x53e5,	// (0x00043acd) bg_popup_sub_pane_g2

0x53ed,	// (0x00043ad5) bg_popup_sub_pane_g3

0x53f5,	// (0x00043add) bg_popup_sub_pane_g4

0x53fd,	// (0x00043ae5) bg_popup_sub_pane_g5

0x5405,	// (0x00043aed) bg_popup_sub_pane_g6

0x540d,	// (0x00043af5) bg_popup_sub_pane_g7

0x5415,	// (0x00043afd) bg_popup_sub_pane_g8

0x541d,	// (0x00043b05) bg_popup_sub_pane_g9

0x0008,

0xf871,	// (0x0004df59) bg_popup_sub_pane_g

0x3fb3,	// (0x0004269b) bg_popup_window_pane_cp5_ParamLimits

0x3fb3,	// (0x0004269b) bg_popup_window_pane_cp5

0x4102,	// (0x000427ea) popup_note_window_g1_ParamLimits

0x4102,	// (0x000427ea) popup_note_window_g1

0x410e,	// (0x000427f6) popup_note_window_t1_ParamLimits

0x410e,	// (0x000427f6) popup_note_window_t1

0x4120,	// (0x00042808) popup_note_window_t2_ParamLimits

0x4120,	// (0x00042808) popup_note_window_t2

0x4132,	// (0x0004281a) popup_note_window_t3_ParamLimits

0x4132,	// (0x0004281a) popup_note_window_t3

0x4144,	// (0x0004282c) popup_note_window_t4_ParamLimits

0x4144,	// (0x0004282c) popup_note_window_t4

0x416c,	// (0x00042854) popup_note_window_t5_ParamLimits

0x416c,	// (0x00042854) popup_note_window_t5

0x0004,

0xf585,	// (0x0004dc6d) popup_note_window_t_ParamLimits

0xf585,	// (0x0004dc6d) popup_note_window_t

0x4190,	// (0x00042878) bg_popup_window_pane_cp6_ParamLimits

0x4190,	// (0x00042878) bg_popup_window_pane_cp6

0x5acd,	// (0x000441b5) popup_note_image_window_g1_ParamLimits

0x5acd,	// (0x000441b5) popup_note_image_window_g1

0x5ad9,	// (0x000441c1) popup_note_image_window_g2_ParamLimits

0x5ad9,	// (0x000441c1) popup_note_image_window_g2

0x0001,

0xf865,	// (0x0004df4d) popup_note_image_window_g_ParamLimits

0xf865,	// (0x0004df4d) popup_note_image_window_g

0x5af2,	// (0x000441da) popup_note_image_window_t1_ParamLimits

0x5af2,	// (0x000441da) popup_note_image_window_t1

0x5b0b,	// (0x000441f3) popup_note_image_window_t2_ParamLimits

0x5b0b,	// (0x000441f3) popup_note_image_window_t2

0x5b24,	// (0x0004420c) popup_note_image_window_t3_ParamLimits

0x5b24,	// (0x0004420c) popup_note_image_window_t3

0x0002,

0xf86a,	// (0x0004df52) popup_note_image_window_t_ParamLimits

0xf86a,	// (0x0004df52) popup_note_image_window_t

0x59aa,	// (0x00044092) bg_popup_window_pane_cp7_ParamLimits

0x59aa,	// (0x00044092) bg_popup_window_pane_cp7

0x59da,	// (0x000440c2) popup_note_wait_window_g1_ParamLimits

0x59da,	// (0x000440c2) popup_note_wait_window_g1

0x59e6,	// (0x000440ce) popup_note_wait_window_g2_ParamLimits

0x59e6,	// (0x000440ce) popup_note_wait_window_g2

0x0002,

0xf853,	// (0x0004df3b) popup_note_wait_window_g_ParamLimits

0xf853,	// (0x0004df3b) popup_note_wait_window_g

0x59fe,	// (0x000440e6) popup_note_wait_window_t1_ParamLimits

0x59fe,	// (0x000440e6) popup_note_wait_window_t1

0x5a25,	// (0x0004410d) popup_note_wait_window_t2_ParamLimits

0x5a25,	// (0x0004410d) popup_note_wait_window_t2

0x5a42,	// (0x0004412a) popup_note_wait_window_t3_ParamLimits

0x5a42,	// (0x0004412a) popup_note_wait_window_t3

0x5a55,	// (0x0004413d) popup_note_wait_window_t4_ParamLimits

0x5a55,	// (0x0004413d) popup_note_wait_window_t4

0x0004,

0xf85a,	// (0x0004df42) popup_note_wait_window_t_ParamLimits

0xf85a,	// (0x0004df42) popup_note_wait_window_t

0x5a7a,	// (0x00044162) wait_bar_pane_ParamLimits

0x5a7a,	// (0x00044162) wait_bar_pane

0x3f65,	// (0x0004264d) wait_anim_pane

0x3f65,	// (0x0004264d) wait_border_pane

0x3f5b,	// (0x00042643) wait_anim_pane_g1

0x3f5b,	// (0x00042643) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x0004ddf6) wait_anim_pane_g

0x594e,	// (0x00044036) wait_border_pane_g1

0x5959,	// (0x00044041) wait_border_pane_g2

0x5962,	// (0x0004404a) wait_border_pane_g3

0x0002,

0xf84c,	// (0x0004df34) wait_border_pane_g

0x57a4,	// (0x00043e8c) bg_popup_window_pane_cp16_ParamLimits

0x57a4,	// (0x00043e8c) bg_popup_window_pane_cp16

0x58be,	// (0x00043fa6) indicator_popup_pane_cp4_ParamLimits

0x58be,	// (0x00043fa6) indicator_popup_pane_cp4

0x58d2,	// (0x00043fba) popup_query_data_window_t1_ParamLimits

0x58d2,	// (0x00043fba) popup_query_data_window_t1

0x58e4,	// (0x00043fcc) popup_query_data_window_t2_ParamLimits

0x58e4,	// (0x00043fcc) popup_query_data_window_t2

0x58fd,	// (0x00043fe5) popup_query_data_window_t3_ParamLimits

0x58fd,	// (0x00043fe5) popup_query_data_window_t3

0x0002,

0xf845,	// (0x0004df2d) popup_query_data_window_t_ParamLimits

0xf845,	// (0x0004df2d) popup_query_data_window_t

0x5917,	// (0x00043fff) query_popup_data_pane_ParamLimits

0x5917,	// (0x00043fff) query_popup_data_pane

0x592b,	// (0x00044013) query_popup_data_pane_cp1_ParamLimits

0x592b,	// (0x00044013) query_popup_data_pane_cp1

0x57a4,	// (0x00043e8c) bg_popup_window_pane_cp10_ParamLimits

0x57a4,	// (0x00043e8c) bg_popup_window_pane_cp10

0x57d6,	// (0x00043ebe) indicator_popup_pane_ParamLimits

0x57d6,	// (0x00043ebe) indicator_popup_pane

0x57f8,	// (0x00043ee0) popup_query_code_window_t1_ParamLimits

0x57f8,	// (0x00043ee0) popup_query_code_window_t1

0x5812,	// (0x00043efa) popup_query_code_window_t2_ParamLimits

0x5812,	// (0x00043efa) popup_query_code_window_t2

0x5875,	// (0x00043f5d) popup_query_code_window_t3_ParamLimits

0x5875,	// (0x00043f5d) popup_query_code_window_t3

0x0002,

0xf83e,	// (0x0004df26) popup_query_code_window_t_ParamLimits

0xf83e,	// (0x0004df26) popup_query_code_window_t

0x58a4,	// (0x00043f8c) query_popup_pane_ParamLimits

0x58a4,	// (0x00043f8c) query_popup_pane

0x4190,	// (0x00042878) bg_popup_window_pane_cp15_ParamLimits

0x4190,	// (0x00042878) bg_popup_window_pane_cp15

0x41ae,	// (0x00042896) indicator_popup_pane_cp1_ParamLimits

0x41ae,	// (0x00042896) indicator_popup_pane_cp1

0x41c1,	// (0x000428a9) indicator_popup_pane_cp2_ParamLimits

0x41c1,	// (0x000428a9) indicator_popup_pane_cp2

0x41d4,	// (0x000428bc) popup_query_data_code_window_g1_ParamLimits

0x41d4,	// (0x000428bc) popup_query_data_code_window_g1

0x41e7,	// (0x000428cf) popup_query_data_code_window_t1_ParamLimits

0x41e7,	// (0x000428cf) popup_query_data_code_window_t1

0x41f9,	// (0x000428e1) popup_query_data_code_window_t2_ParamLimits

0x41f9,	// (0x000428e1) popup_query_data_code_window_t2

0x420b,	// (0x000428f3) popup_query_data_code_window_t3_ParamLimits

0x420b,	// (0x000428f3) popup_query_data_code_window_t3

0x4221,	// (0x00042909) popup_query_data_code_window_t4_ParamLimits

0x4221,	// (0x00042909) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0004dc78) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0004dc78) popup_query_data_code_window_t

0xa0f2,	// (0x000487da) list_single_midp_graphic_pane_g3

0x4239,	// (0x00042921) query_popup_data_pane_cp2_ParamLimits

0x424c,	// (0x00042934) query_popup_pane_cp2_ParamLimits

0x424c,	// (0x00042934) query_popup_pane_cp2

0x3f65,	// (0x0004264d) bg_popup_window_pane_cp11

0x579c,	// (0x00043e84) heading_pane_cp5

0x42da,	// (0x000429c2) listscroll_popup_info_pane

0x3f65,	// (0x0004264d) input_focus_pane_cp3

0x425f,	// (0x00042947) query_popup_pane_t1

0x426d,	// (0x00042955) list_popup_info_pane_ParamLimits

0x426d,	// (0x00042955) list_popup_info_pane

0x427c,	// (0x00042964) listscroll_popup_info_pane_g1

0x4284,	// (0x0004296c) scroll_pane_cp7

0x428e,	// (0x00042976) popup_info_list_pane_t1_ParamLimits

0x428e,	// (0x00042976) popup_info_list_pane_t1

0x42a8,	// (0x00042990) popup_info_list_pane_t2_ParamLimits

0x42a8,	// (0x00042990) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0004dc81) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0004dc81) popup_info_list_pane_t

0x3f65,	// (0x0004264d) bg_popup_window_pane_cp12

0x66d4,	// (0x00044dbc) find_popup_pane

0x3fc1,	// (0x000426a9) bg_popup_window_pane_cp3

0x42c2,	// (0x000429aa) heading_pane_cp3

0x42ce,	// (0x000429b6) listscroll_popup_graphic_pane

0x3f65,	// (0x0004264d) bg_popup_window_pane_cp4

0xb4ed,	// (0x00049bd5) heading_pane_cp4

0x42da,	// (0x000429c2) listscroll_popup_colour_pane

0xb4f7,	// (0x00049bdf) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb4f7,	// (0x00049bdf) cell_large_graphic_colour_none_popup_pane

0xb50b,	// (0x00049bf3) grid_large_graphic_colour_popup_pane_ParamLimits

0xb50b,	// (0x00049bf3) grid_large_graphic_colour_popup_pane

0xb52f,	// (0x00049c17) listscroll_popup_colour_pane_g1_ParamLimits

0xb52f,	// (0x00049c17) listscroll_popup_colour_pane_g1

0xb546,	// (0x00049c2e) listscroll_popup_colour_pane_g2_ParamLimits

0xb546,	// (0x00049c2e) listscroll_popup_colour_pane_g2

0xb55d,	// (0x00049c45) listscroll_popup_colour_pane_g3_ParamLimits

0xb55d,	// (0x00049c45) listscroll_popup_colour_pane_g3

0xb56d,	// (0x00049c55) listscroll_popup_colour_pane_g4_ParamLimits

0xb56d,	// (0x00049c55) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0004dc86) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0004dc86) listscroll_popup_colour_pane_g

0x42e2,	// (0x000429ca) scroll_pane_cp6_ParamLimits

0x42e2,	// (0x000429ca) scroll_pane_cp6

0xb57c,	// (0x00049c64) cell_large_graphic_colour_popup_pane_ParamLimits

0xb57c,	// (0x00049c64) cell_large_graphic_colour_popup_pane

0x42f4,	// (0x000429dc) cell_large_graphic_colour_none_popup_pane_t1

0x3f65,	// (0x0004264d) grid_highlight_pane_cp5

0x4303,	// (0x000429eb) cell_large_graphic_colour_popup_pane_g1

0x430b,	// (0x000429f3) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0004dc8f) cell_large_graphic_colour_popup_pane_g

0x4313,	// (0x000429fb) cell_large_graphic_colour_popup_pane_g2_copy1

0x431c,	// (0x00042a04) grid_highlight_pane_cp4

0x4324,	// (0x00042a0c) bg_popup_window_pane_cp8_ParamLimits

0x4324,	// (0x00042a0c) bg_popup_window_pane_cp8

0x433f,	// (0x00042a27) popup_snote_single_text_window_g1_ParamLimits

0x433f,	// (0x00042a27) popup_snote_single_text_window_g1

0x4351,	// (0x00042a39) popup_snote_single_text_window_t1_ParamLimits

0x4351,	// (0x00042a39) popup_snote_single_text_window_t1

0x4364,	// (0x00042a4c) popup_snote_single_text_window_t2_ParamLimits

0x4364,	// (0x00042a4c) popup_snote_single_text_window_t2

0x4377,	// (0x00042a5f) popup_snote_single_text_window_t3_ParamLimits

0x4377,	// (0x00042a5f) popup_snote_single_text_window_t3

0x43b0,	// (0x00042a98) popup_snote_single_text_window_t4_ParamLimits

0x43b0,	// (0x00042a98) popup_snote_single_text_window_t4

0x43e4,	// (0x00042acc) popup_snote_single_text_window_t5_ParamLimits

0x43e4,	// (0x00042acc) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0004dc94) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0004dc94) popup_snote_single_text_window_t

0x4413,	// (0x00042afb) bg_popup_window_pane_cp9_ParamLimits

0x4413,	// (0x00042afb) bg_popup_window_pane_cp9

0x433f,	// (0x00042a27) popup_snote_single_graphic_window_g1_ParamLimits

0x433f,	// (0x00042a27) popup_snote_single_graphic_window_g1

0x4421,	// (0x00042b09) popup_snote_single_graphic_window_g2_ParamLimits

0x4421,	// (0x00042b09) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0004dc9f) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0004dc9f) popup_snote_single_graphic_window_g

0x442d,	// (0x00042b15) popup_snote_single_graphic_window_t1_ParamLimits

0x442d,	// (0x00042b15) popup_snote_single_graphic_window_t1

0x4440,	// (0x00042b28) popup_snote_single_graphic_window_t2_ParamLimits

0x4440,	// (0x00042b28) popup_snote_single_graphic_window_t2

0x4453,	// (0x00042b3b) popup_snote_single_graphic_window_t3_ParamLimits

0x4453,	// (0x00042b3b) popup_snote_single_graphic_window_t3

0x448c,	// (0x00042b74) popup_snote_single_graphic_window_t4_ParamLimits

0x448c,	// (0x00042b74) popup_snote_single_graphic_window_t4

0x44c0,	// (0x00042ba8) popup_snote_single_graphic_window_t5_ParamLimits

0x44c0,	// (0x00042ba8) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0004dca4) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0004dca4) popup_snote_single_graphic_window_t

0x6658,	// (0x00044d40) grid_graphic_popup_pane_ParamLimits

0x6658,	// (0x00044d40) grid_graphic_popup_pane

0x6684,	// (0x00044d6c) listscroll_popup_graphic_pane_g1_ParamLimits

0x6684,	// (0x00044d6c) listscroll_popup_graphic_pane_g1

0xca69,	// (0x0004b151) listscroll_popup_graphic_pane_g2_ParamLimits

0xca69,	// (0x0004b151) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bb,	// (0x0004e0a3) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bb,	// (0x0004e0a3) listscroll_popup_graphic_pane_g

0x5ede,	// (0x000445c6) scroll_pane_cp5

0xca2a,	// (0x0004b112) cell_graphic_popup_pane_ParamLimits

0xca2a,	// (0x0004b112) cell_graphic_popup_pane

0x6623,	// (0x00044d0b) cell_graphic_popup_pane_g1

0x662b,	// (0x00044d13) cell_graphic_popup_pane_g2

0x4313,	// (0x000429fb) cell_graphic_popup_pane_g3

0x0002,

0xf9b4,	// (0x0004e09c) cell_graphic_popup_pane_g

0x6634,	// (0x00044d1c) cell_graphic_popup_pane_t2

0x431c,	// (0x00042a04) grid_highlight_pane_cp3

0x4501,	// (0x00042be9) list_gen_pane_ParamLimits

0x4501,	// (0x00042be9) list_gen_pane

0x4529,	// (0x00042c11) scroll_pane

0xc9dd,	// (0x0004b0c5) bg_list_pane_g1_ParamLimits

0xc9dd,	// (0x0004b0c5) bg_list_pane_g1

0x65d2,	// (0x00044cba) bg_list_pane_g2_ParamLimits

0x65d2,	// (0x00044cba) bg_list_pane_g2

0x65e5,	// (0x00044ccd) bg_list_pane_g3_ParamLimits

0x65e5,	// (0x00044ccd) bg_list_pane_g3

0x65f7,	// (0x00044cdf) bg_list_pane_g4_ParamLimits

0x65f7,	// (0x00044cdf) bg_list_pane_g4

0xc9f8,	// (0x0004b0e0) bg_list_pane_g5_ParamLimits

0xc9f8,	// (0x0004b0e0) bg_list_pane_g5

0x0004,

0xf9a9,	// (0x0004e091) bg_list_pane_g_ParamLimits

0xf9a9,	// (0x0004e091) bg_list_pane_g

0xc927,	// (0x0004b00f) list_double2_graphic_large_graphic_pane_ParamLimits

0xc927,	// (0x0004b00f) list_double2_graphic_large_graphic_pane

0xc927,	// (0x0004b00f) list_double2_graphic_pane_ParamLimits

0xc927,	// (0x0004b00f) list_double2_graphic_pane

0xc927,	// (0x0004b00f) list_double2_large_graphic_pane_ParamLimits

0xc927,	// (0x0004b00f) list_double2_large_graphic_pane

0xc927,	// (0x0004b00f) list_double2_pane_ParamLimits

0xc927,	// (0x0004b00f) list_double2_pane

0xc927,	// (0x0004b00f) list_double_graphic_heading_pane_ParamLimits

0xc927,	// (0x0004b00f) list_double_graphic_heading_pane

0xc927,	// (0x0004b00f) list_double_graphic_pane_ParamLimits

0xc927,	// (0x0004b00f) list_double_graphic_pane

0xc927,	// (0x0004b00f) list_double_heading_pane_ParamLimits

0xc927,	// (0x0004b00f) list_double_heading_pane

0xc927,	// (0x0004b00f) list_double_large_graphic_pane_ParamLimits

0xc927,	// (0x0004b00f) list_double_large_graphic_pane

0xc927,	// (0x0004b00f) list_double_number_pane_ParamLimits

0xc927,	// (0x0004b00f) list_double_number_pane

0xc927,	// (0x0004b00f) list_double_pane_ParamLimits

0xc927,	// (0x0004b00f) list_double_pane

0xc927,	// (0x0004b00f) list_double_time_pane_ParamLimits

0xc927,	// (0x0004b00f) list_double_time_pane

0xc927,	// (0x0004b00f) list_setting_number_pane_ParamLimits

0xc927,	// (0x0004b00f) list_setting_number_pane

0xc927,	// (0x0004b00f) list_setting_pane_ParamLimits

0xc927,	// (0x0004b00f) list_setting_pane

0xc96b,	// (0x0004b053) list_single_2graphic_pane_ParamLimits

0xc96b,	// (0x0004b053) list_single_2graphic_pane

0xc96b,	// (0x0004b053) list_single_graphic_heading_pane_ParamLimits

0xc96b,	// (0x0004b053) list_single_graphic_heading_pane

0xc96b,	// (0x0004b053) list_single_graphic_pane_ParamLimits

0xc96b,	// (0x0004b053) list_single_graphic_pane

0xc96b,	// (0x0004b053) list_single_heading_pane_ParamLimits

0xc96b,	// (0x0004b053) list_single_heading_pane

0xc9b7,	// (0x0004b09f) list_single_large_graphic_pane_ParamLimits

0xc9b7,	// (0x0004b09f) list_single_large_graphic_pane

0xc96b,	// (0x0004b053) list_single_number_heading_pane_ParamLimits

0xc96b,	// (0x0004b053) list_single_number_heading_pane

0xc96b,	// (0x0004b053) list_single_number_pane_ParamLimits

0xc96b,	// (0x0004b053) list_single_number_pane

0xc96b,	// (0x0004b053) list_single_pane_ParamLimits

0xc96b,	// (0x0004b053) list_single_pane

0x3f65,	// (0x0004264d) list_highlight_pane_cp1

0x4f1c,	// (0x00043604) list_single_pane_g1_ParamLimits

0x4f1c,	// (0x00043604) list_single_pane_g1

0x8eeb,	// (0x000475d3) list_single_pane_g2_ParamLimits

0x8eeb,	// (0x000475d3) list_single_pane_g2

0x0001,

0xf5d8,	// (0x0004dcc0) list_single_pane_g_ParamLimits

0xf5d8,	// (0x0004dcc0) list_single_pane_g

0xc1e4,	// (0x0004a8cc) list_single_pane_t1_ParamLimits

0xc1e4,	// (0x0004a8cc) list_single_pane_t1

0x4f1c,	// (0x00043604) list_single_number_pane_g1_ParamLimits

0x4f1c,	// (0x00043604) list_single_number_pane_g1

0x8eeb,	// (0x000475d3) list_single_number_pane_g2_ParamLimits

0x8eeb,	// (0x000475d3) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x0004dcc0) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x0004dcc0) list_single_number_pane_g

0xc18c,	// (0x0004a874) list_single_number_pane_t1_ParamLimits

0xc18c,	// (0x0004a874) list_single_number_pane_t1

0xc1a2,	// (0x0004a88a) list_single_number_pane_t2_ParamLimits

0xc1a2,	// (0x0004a88a) list_single_number_pane_t2

0x0001,

0xf96a,	// (0x0004e052) list_single_number_pane_t_ParamLimits

0xf96a,	// (0x0004e052) list_single_number_pane_t

0x8edf,	// (0x000475c7) list_single_graphic_pane_g1_ParamLimits

0x8edf,	// (0x000475c7) list_single_graphic_pane_g1

0x4f1c,	// (0x00043604) list_single_graphic_pane_g2_ParamLimits

0x4f1c,	// (0x00043604) list_single_graphic_pane_g2

0x8eeb,	// (0x000475d3) list_single_graphic_pane_g3_ParamLimits

0x8eeb,	// (0x000475d3) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0004dcaf) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0004dcaf) list_single_graphic_pane_g

0x8ef7,	// (0x000475df) list_single_graphic_pane_t1_ParamLimits

0x8ef7,	// (0x000475df) list_single_graphic_pane_t1

0x8f0d,	// (0x000475f5) list_single_heading_pane_g1_ParamLimits

0x8f0d,	// (0x000475f5) list_single_heading_pane_g1

0x8eeb,	// (0x000475d3) list_single_heading_pane_g2_ParamLimits

0x8eeb,	// (0x000475d3) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0004dcb6) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0004dcb6) list_single_heading_pane_g

0x8f20,	// (0x00047608) list_single_heading_pane_t1_ParamLimits

0x8f20,	// (0x00047608) list_single_heading_pane_t1

0xb5a5,	// (0x00049c8d) list_single_heading_pane_t2_ParamLimits

0xb5a5,	// (0x00049c8d) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0004dcbb) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0004dcbb) list_single_heading_pane_t

0x4f1c,	// (0x00043604) list_single_number_heading_pane_g1_ParamLimits

0x4f1c,	// (0x00043604) list_single_number_heading_pane_g1

0x8eeb,	// (0x000475d3) list_single_number_heading_pane_g2_ParamLimits

0x8eeb,	// (0x000475d3) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x0004dcc0) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x0004dcc0) list_single_number_heading_pane_g

0x8f36,	// (0x0004761e) list_single_number_heading_pane_t1_ParamLimits

0x8f36,	// (0x0004761e) list_single_number_heading_pane_t1

0x8f4c,	// (0x00047634) list_single_number_heading_pane_t2_ParamLimits

0x8f4c,	// (0x00047634) list_single_number_heading_pane_t2

0x8f5e,	// (0x00047646) list_single_number_heading_pane_t3_ParamLimits

0x8f5e,	// (0x00047646) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x0004dcc5) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x0004dcc5) list_single_number_heading_pane_t

0x8f70,	// (0x00047658) list_single_graphic_heading_pane_g1_ParamLimits

0x8f70,	// (0x00047658) list_single_graphic_heading_pane_g1

0x8f86,	// (0x0004766e) list_single_graphic_heading_pane_g4_ParamLimits

0x8f86,	// (0x0004766e) list_single_graphic_heading_pane_g4

0x8eeb,	// (0x000475d3) list_single_graphic_heading_pane_g5_ParamLimits

0x8eeb,	// (0x000475d3) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x0004dccc) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x0004dccc) list_single_graphic_heading_pane_g

0x8f36,	// (0x0004761e) list_single_graphic_heading_pane_t1_ParamLimits

0x8f36,	// (0x0004761e) list_single_graphic_heading_pane_t1

0x8f97,	// (0x0004767f) list_single_graphic_heading_pane_t2_ParamLimits

0x8f97,	// (0x0004767f) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x0004dcd3) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x0004dcd3) list_single_graphic_heading_pane_t

0xb5b7,	// (0x00049c9f) list_single_large_graphic_pane_g1_ParamLimits

0xb5b7,	// (0x00049c9f) list_single_large_graphic_pane_g1

0xb5c3,	// (0x00049cab) list_single_large_graphic_pane_g2_ParamLimits

0xb5c3,	// (0x00049cab) list_single_large_graphic_pane_g2

0xb5cf,	// (0x00049cb7) list_single_large_graphic_pane_g3_ParamLimits

0xb5cf,	// (0x00049cb7) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0004dcd8) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0004dcd8) list_single_large_graphic_pane_g

0x5959,	// (0x00044041) wait_border_pane_g2_copy1

0xb5db,	// (0x00049cc3) list_single_large_graphic_pane_g4_cp2

0x8faf,	// (0x00047697) list_single_large_graphic_pane_t1_ParamLimits

0x8faf,	// (0x00047697) list_single_large_graphic_pane_t1

0xb5e3,	// (0x00049ccb) list_double_pane_g1_ParamLimits

0xb5e3,	// (0x00049ccb) list_double_pane_g1

0xb5ef,	// (0x00049cd7) list_double_pane_g2_ParamLimits

0xb5ef,	// (0x00049cd7) list_double_pane_g2

0x0001,

0xf5f7,	// (0x0004dcdf) list_double_pane_g_ParamLimits

0xf5f7,	// (0x0004dcdf) list_double_pane_g

0x8fc5,	// (0x000476ad) list_double_pane_t1_ParamLimits

0x8fc5,	// (0x000476ad) list_double_pane_t1

0x8fdb,	// (0x000476c3) list_double_pane_t2_ParamLimits

0x8fdb,	// (0x000476c3) list_double_pane_t2

0x0001,

0xf5fc,	// (0x0004dce4) list_double_pane_t_ParamLimits

0xf5fc,	// (0x0004dce4) list_double_pane_t

0x8fed,	// (0x000476d5) list_double2_pane_g1_ParamLimits

0x8fed,	// (0x000476d5) list_double2_pane_g1

0x8ffe,	// (0x000476e6) list_double2_pane_g2_ParamLimits

0x8ffe,	// (0x000476e6) list_double2_pane_g2

0x0001,

0xf601,	// (0x0004dce9) list_double2_pane_g_ParamLimits

0xf601,	// (0x0004dce9) list_double2_pane_g

0x900a,	// (0x000476f2) list_double2_pane_t1_ParamLimits

0x900a,	// (0x000476f2) list_double2_pane_t1

0x9020,	// (0x00047708) list_double2_pane_t2_ParamLimits

0x9020,	// (0x00047708) list_double2_pane_t2

0x0001,

0xf606,	// (0x0004dcee) list_double2_pane_t_ParamLimits

0xf606,	// (0x0004dcee) list_double2_pane_t

0xb5e3,	// (0x00049ccb) list_double_number_pane_g1_ParamLimits

0xb5e3,	// (0x00049ccb) list_double_number_pane_g1

0xb5ef,	// (0x00049cd7) list_double_number_pane_g2_ParamLimits

0xb5ef,	// (0x00049cd7) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x0004dcdf) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x0004dcdf) list_double_number_pane_g

0x9032,	// (0x0004771a) list_double_number_pane_t1_ParamLimits

0x9032,	// (0x0004771a) list_double_number_pane_t1

0x9044,	// (0x0004772c) list_double_number_pane_t2_ParamLimits

0x9044,	// (0x0004772c) list_double_number_pane_t2

0x905a,	// (0x00047742) list_double_number_pane_t3_ParamLimits

0x905a,	// (0x00047742) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x0004dcf3) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x0004dcf3) list_double_number_pane_t

0x906c,	// (0x00047754) list_double_graphic_pane_g1_ParamLimits

0x906c,	// (0x00047754) list_double_graphic_pane_g1

0xb5fb,	// (0x00049ce3) list_double_graphic_pane_g2_ParamLimits

0xb5fb,	// (0x00049ce3) list_double_graphic_pane_g2

0xb60a,	// (0x00049cf2) list_double_graphic_pane_g3_ParamLimits

0xb60a,	// (0x00049cf2) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x0004dcfa) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x0004dcfa) list_double_graphic_pane_g

0x9084,	// (0x0004776c) list_double_graphic_pane_t1_ParamLimits

0x9084,	// (0x0004776c) list_double_graphic_pane_t1

0x909a,	// (0x00047782) list_double_graphic_pane_t2_ParamLimits

0x909a,	// (0x00047782) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x0004dd03) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x0004dd03) list_double_graphic_pane_t

0x90ac,	// (0x00047794) list_double2_graphic_pane_g1_ParamLimits

0x90ac,	// (0x00047794) list_double2_graphic_pane_g1

0xb616,	// (0x00049cfe) list_double2_graphic_pane_g2_ParamLimits

0xb616,	// (0x00049cfe) list_double2_graphic_pane_g2

0xb622,	// (0x00049d0a) list_double2_graphic_pane_g3_ParamLimits

0xb622,	// (0x00049d0a) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x0004dd08) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x0004dd08) list_double2_graphic_pane_g

0x90b8,	// (0x000477a0) list_double2_graphic_pane_t1_ParamLimits

0x90b8,	// (0x000477a0) list_double2_graphic_pane_t1

0x90ce,	// (0x000477b6) list_double2_graphic_pane_t2_ParamLimits

0x90ce,	// (0x000477b6) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x0004dd0f) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x0004dd0f) list_double2_graphic_pane_t

0x90e0,	// (0x000477c8) list_double_large_graphic_pane_g1_ParamLimits

0x90e0,	// (0x000477c8) list_double_large_graphic_pane_g1

0x910b,	// (0x000477f3) list_double_large_graphic_pane_g2_ParamLimits

0x910b,	// (0x000477f3) list_double_large_graphic_pane_g2

0xb5ef,	// (0x00049cd7) list_double_large_graphic_pane_g3_ParamLimits

0xb5ef,	// (0x00049cd7) list_double_large_graphic_pane_g3

0x9121,	// (0x00047809) list_double_large_graphic_pane_g4_ParamLimits

0x9121,	// (0x00047809) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x0004dd14) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x0004dd14) list_double_large_graphic_pane_g

0x9134,	// (0x0004781c) list_double_large_graphic_pane_t1_ParamLimits

0x9134,	// (0x0004781c) list_double_large_graphic_pane_t1

0x914d,	// (0x00047835) list_double_large_graphic_pane_t2_ParamLimits

0x914d,	// (0x00047835) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x0004dd1f) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x0004dd1f) list_double_large_graphic_pane_t

0xb643,	// (0x00049d2b) list_double2_large_graphic_pane_g1_ParamLimits

0xb643,	// (0x00049d2b) list_double2_large_graphic_pane_g1

0xb64f,	// (0x00049d37) list_double2_large_graphic_pane_g2_ParamLimits

0xb64f,	// (0x00049d37) list_double2_large_graphic_pane_g2

0xb622,	// (0x00049d0a) list_double2_large_graphic_pane_g3_ParamLimits

0xb622,	// (0x00049d0a) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x0004dd24) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x0004dd24) list_double2_large_graphic_pane_g

0x915f,	// (0x00047847) list_double2_large_graphic_pane_t1_ParamLimits

0x915f,	// (0x00047847) list_double2_large_graphic_pane_t1

0x9175,	// (0x0004785d) list_double2_large_graphic_pane_t2_ParamLimits

0x9175,	// (0x0004785d) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x0004dd2b) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x0004dd2b) list_double2_large_graphic_pane_t

0x9187,	// (0x0004786f) list_double_heading_pane_g1_ParamLimits

0x9187,	// (0x0004786f) list_double_heading_pane_g1

0xb660,	// (0x00049d48) list_double_heading_pane_g2_ParamLimits

0xb660,	// (0x00049d48) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x0004dd30) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x0004dd30) list_double_heading_pane_g

0x9198,	// (0x00047880) list_double_heading_pane_t1_ParamLimits

0x9198,	// (0x00047880) list_double_heading_pane_t1

0x9020,	// (0x00047708) list_double_heading_pane_t2_ParamLimits

0x9020,	// (0x00047708) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x0004dd35) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x0004dd35) list_double_heading_pane_t

0x91ae,	// (0x00047896) list_double_graphic_heading_pane_g1_ParamLimits

0x91ae,	// (0x00047896) list_double_graphic_heading_pane_g1

0x9187,	// (0x0004786f) list_double_graphic_heading_pane_g2_ParamLimits

0x9187,	// (0x0004786f) list_double_graphic_heading_pane_g2

0xb660,	// (0x00049d48) list_double_graphic_heading_pane_g3_ParamLimits

0xb660,	// (0x00049d48) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x0004dd3a) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x0004dd3a) list_double_graphic_heading_pane_g

0x91ba,	// (0x000478a2) list_double_graphic_heading_pane_t1_ParamLimits

0x91ba,	// (0x000478a2) list_double_graphic_heading_pane_t1

0x90ce,	// (0x000477b6) list_double_graphic_heading_pane_t2_ParamLimits

0x90ce,	// (0x000477b6) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x0004dd41) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x0004dd41) list_double_graphic_heading_pane_t

0x91d0,	// (0x000478b8) list_double_time_pane_g1_ParamLimits

0x91d0,	// (0x000478b8) list_double_time_pane_g1

0x91e1,	// (0x000478c9) list_double_time_pane_g2_ParamLimits

0x91e1,	// (0x000478c9) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x0004dd46) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x0004dd46) list_double_time_pane_g

0x91ed,	// (0x000478d5) list_double_time_pane_t1_ParamLimits

0x91ed,	// (0x000478d5) list_double_time_pane_t1

0x9203,	// (0x000478eb) list_double_time_pane_t2_ParamLimits

0x9203,	// (0x000478eb) list_double_time_pane_t2

0x9215,	// (0x000478fd) list_double_time_pane_t3_ParamLimits

0x9215,	// (0x000478fd) list_double_time_pane_t3

0x9227,	// (0x0004790f) list_double_time_pane_t4_ParamLimits

0x9227,	// (0x0004790f) list_double_time_pane_t4

0x0003,

0xf663,	// (0x0004dd4b) list_double_time_pane_t_ParamLimits

0xf663,	// (0x0004dd4b) list_double_time_pane_t

0x9239,	// (0x00047921) list_setting_pane_g1_ParamLimits

0x9239,	// (0x00047921) list_setting_pane_g1

0x9245,	// (0x0004792d) list_setting_pane_g2_ParamLimits

0x9245,	// (0x0004792d) list_setting_pane_g2

0x0001,

0xf66c,	// (0x0004dd54) list_setting_pane_g_ParamLimits

0xf66c,	// (0x0004dd54) list_setting_pane_g

0x9251,	// (0x00047939) list_setting_pane_t1_ParamLimits

0x9251,	// (0x00047939) list_setting_pane_t1

0x926b,	// (0x00047953) list_setting_pane_t2_ParamLimits

0x926b,	// (0x00047953) list_setting_pane_t2

0x0002,

0xf671,	// (0x0004dd59) list_setting_pane_t_ParamLimits

0xf671,	// (0x0004dd59) list_setting_pane_t

0x92a8,	// (0x00047990) set_value_pane_cp_ParamLimits

0x92a8,	// (0x00047990) set_value_pane_cp

0x92b4,	// (0x0004799c) list_setting_number_pane_g1_ParamLimits

0x92b4,	// (0x0004799c) list_setting_number_pane_g1

0x92c0,	// (0x000479a8) list_setting_number_pane_g2_ParamLimits

0x92c0,	// (0x000479a8) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x0004dd60) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x0004dd60) list_setting_number_pane_g

0x92cc,	// (0x000479b4) list_setting_number_pane_t1_ParamLimits

0x92cc,	// (0x000479b4) list_setting_number_pane_t1

0x92e5,	// (0x000479cd) list_setting_number_pane_t2_ParamLimits

0x92e5,	// (0x000479cd) list_setting_number_pane_t2

0x92ff,	// (0x000479e7) list_setting_number_pane_t3_ParamLimits

0x92ff,	// (0x000479e7) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x0004dd65) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x0004dd65) list_setting_number_pane_t

0x92a8,	// (0x00047990) set_value_pane_ParamLimits

0x92a8,	// (0x00047990) set_value_pane

0x455d,	// (0x00042c45) bg_set_opt_pane_ParamLimits

0x455d,	// (0x00042c45) bg_set_opt_pane

0x9342,	// (0x00047a2a) set_value_pane_t1

0x457e,	// (0x00042c66) slider_set_pane_cp3

0x4587,	// (0x00042c6f) volume_small_pane_cp

0x459c,	// (0x00042c84) list_form_gen_pane

0x45a5,	// (0x00042c8d) scroll_pane_cp8

0x9358,	// (0x00047a40) form_field_data_pane_ParamLimits

0x9358,	// (0x00047a40) form_field_data_pane

0x9378,	// (0x00047a60) form_field_data_wide_pane_ParamLimits

0x9378,	// (0x00047a60) form_field_data_wide_pane

0x9399,	// (0x00047a81) form_field_popup_pane_ParamLimits

0x9399,	// (0x00047a81) form_field_popup_pane

0x93b7,	// (0x00047a9f) form_field_popup_wide_pane_ParamLimits

0x93b7,	// (0x00047a9f) form_field_popup_wide_pane

0x93d4,	// (0x00047abc) form_field_slider_pane_ParamLimits

0x93d4,	// (0x00047abc) form_field_slider_pane

0x93e7,	// (0x00047acf) form_field_slider_wide_pane_ParamLimits

0x93e7,	// (0x00047acf) form_field_slider_wide_pane

0x45b6,	// (0x00042c9e) data_form_pane

0x9404,	// (0x00047aec) form_field_data_pane_t1

0x45c2,	// (0x00042caa) input_focus_pane

0x45d0,	// (0x00042cb8) data_form_wide_pane

0x942a,	// (0x00047b12) form_field_data_wide_pane_t1

0x4331,	// (0x00042a19) input_focus_pane_cp6

0x944c,	// (0x00047b34) form_field_popup_pane_t1

0x45c2,	// (0x00042caa) input_focus_pane_cp7

0x45f0,	// (0x00042cd8) list_form_pane

0x946e,	// (0x00047b56) form_field_popup_wide_pane_t1

0x45c2,	// (0x00042caa) input_focus_pane_cp8

0x45fc,	// (0x00042ce4) list_form_wide_pane

0x948b,	// (0x00047b73) form_field_slider_pane_t1_ParamLimits

0x948b,	// (0x00047b73) form_field_slider_pane_t1

0x94a3,	// (0x00047b8b) form_field_slider_pane_t2_ParamLimits

0x94a3,	// (0x00047b8b) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x0004dd75) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x0004dd75) form_field_slider_pane_t

0x3fb3,	// (0x0004269b) input_focus_pane_cp9_ParamLimits

0x3fb3,	// (0x0004269b) input_focus_pane_cp9

0x94b8,	// (0x00047ba0) slider_cont_pane_ParamLimits

0x94b8,	// (0x00047ba0) slider_cont_pane

0x460b,	// (0x00042cf3) form_field_slider_wide_pane_t1_ParamLimits

0x460b,	// (0x00042cf3) form_field_slider_wide_pane_t1

0x94cc,	// (0x00047bb4) form_field_slider_wide_pane_t2_ParamLimits

0x94cc,	// (0x00047bb4) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x0004dd7a) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x0004dd7a) form_field_slider_wide_pane_t

0x3fb3,	// (0x0004269b) input_focus_pane_cp10_ParamLimits

0x3fb3,	// (0x0004269b) input_focus_pane_cp10

0x94de,	// (0x00047bc6) slider_cont_pane_cp1_ParamLimits

0x94de,	// (0x00047bc6) slider_cont_pane_cp1

0x94f2,	// (0x00047bda) slider_form_pane_cp

0x461d,	// (0x00042d05) input_focus_pane_g1

0x4625,	// (0x00042d0d) input_focus_pane_g2

0x462d,	// (0x00042d15) input_focus_pane_g3

0x4635,	// (0x00042d1d) input_focus_pane_g4

0x463d,	// (0x00042d25) input_focus_pane_g5

0x4645,	// (0x00042d2d) input_focus_pane_g6

0x464d,	// (0x00042d35) input_focus_pane_g7

0x4655,	// (0x00042d3d) input_focus_pane_g8

0x465d,	// (0x00042d45) input_focus_pane_g9

0x3f5b,	// (0x00042643) input_focus_pane_g10

0x0009,

0xf697,	// (0x0004dd7f) input_focus_pane_g

0x5962,	// (0x0004404a) wait_border_pane_g3_copy1

0x94fa,	// (0x00047be2) data_form_pane_t1

0x3f5b,	// (0x00042643) wait_anim_pane_g1_copy1

0xc1b4,	// (0x0004a89c) data_form_wide_pane_t1

0xb66c,	// (0x00049d54) list_form_graphic_pane_cp_ParamLimits

0xb66c,	// (0x00049d54) list_form_graphic_pane_cp

0x656c,	// (0x00044c54) slider_form_pane_g1

0x6575,	// (0x00044c5d) slider_form_pane_g2

0x0006,

0xf99a,	// (0x0004e082) slider_form_pane_g

0xb683,	// (0x00049d6b) list_form_graphic_pane_ParamLimits

0xb683,	// (0x00049d6b) list_form_graphic_pane

0xb69d,	// (0x00049d85) list_form_graphic_pane_g1

0xb6a5,	// (0x00049d8d) list_form_graphic_pane_t1_ParamLimits

0xb6a5,	// (0x00049d8d) list_form_graphic_pane_t1

0x3fc1,	// (0x000426a9) list_highlight_pane_cp5_ParamLimits

0x3fc1,	// (0x000426a9) list_highlight_pane_cp5

0xb6ba,	// (0x00049da2) find_pane_g1

0x4665,	// (0x00042d4d) input_find_pane

0xb6c3,	// (0x00049dab) input_find_pane_g1_ParamLimits

0xb6c3,	// (0x00049dab) input_find_pane_g1

0xb6cf,	// (0x00049db7) input_find_pane_t1_ParamLimits

0xb6cf,	// (0x00049db7) input_find_pane_t1

0xb6e4,	// (0x00049dcc) input_find_pane_t2_ParamLimits

0xb6e4,	// (0x00049dcc) input_find_pane_t2

0x0001,

0xf6ac,	// (0x0004dd94) input_find_pane_t_ParamLimits

0xf6ac,	// (0x0004dd94) input_find_pane_t

0x466e,	// (0x00042d56) input_focus_pane_cp5_ParamLimits

0x466e,	// (0x00042d56) input_focus_pane_cp5

0x467c,	// (0x00042d64) bg_popup_window_pane_cp2_ParamLimits

0x467c,	// (0x00042d64) bg_popup_window_pane_cp2

0x4689,	// (0x00042d71) listscroll_menu_pane_ParamLimits

0x4689,	// (0x00042d71) listscroll_menu_pane

0xb705,	// (0x00049ded) popup_submenu_window_ParamLimits

0xb705,	// (0x00049ded) popup_submenu_window

0x4695,	// (0x00042d7d) find_popup_pane_g1

0x469d,	// (0x00042d85) input_popup_find_pane_cp

0x466e,	// (0x00042d56) input_focus_pane_cp4_ParamLimits

0x466e,	// (0x00042d56) input_focus_pane_cp4

0x46a7,	// (0x00042d8f) input_popup_find_pane_t1_ParamLimits

0x46a7,	// (0x00042d8f) input_popup_find_pane_t1

0x3f65,	// (0x0004264d) bg_popup_sub_pane_cp

0x46d5,	// (0x00042dbd) listscroll_popup_sub_pane

0x46dd,	// (0x00042dc5) list_submenu_pane_ParamLimits

0x46dd,	// (0x00042dc5) list_submenu_pane

0x46ee,	// (0x00042dd6) scroll_pane_cp4

0x46f6,	// (0x00042dde) list_single_popup_submenu_pane_ParamLimits

0x46f6,	// (0x00042dde) list_single_popup_submenu_pane

0x4709,	// (0x00042df1) list_single_popup_submenu_pane_g1

0x4711,	// (0x00042df9) list_single_popup_submenu_pane_t1_ParamLimits

0x4711,	// (0x00042df9) list_single_popup_submenu_pane_t1

0x3fc1,	// (0x000426a9) bg_active_tab_pane_cp1_ParamLimits

0x3fc1,	// (0x000426a9) bg_active_tab_pane_cp1

0xb73b,	// (0x00049e23) tabs_2_active_pane_g1

0xb743,	// (0x00049e2b) tabs_2_active_pane_t1

0x3fc1,	// (0x000426a9) bg_passive_tab_pane_cp1_ParamLimits

0x3fc1,	// (0x000426a9) bg_passive_tab_pane_cp1

0xb73b,	// (0x00049e23) tabs_2_passive_pane_g1

0xb743,	// (0x00049e2b) tabs_2_passive_pane_t1

0x585b,	// (0x00043f43) bg_active_tab_pane_cp4

0xb755,	// (0x00049e3d) tabs_2_long_active_pane_t1

0xb768,	// (0x00049e50) bg_passive_tab_pane_cp4

0xa0fa,	// (0x000487e2) list_single_midp_graphic_pane_g4_ParamLimits

0x585b,	// (0x00043f43) bg_active_tab_pane_cp5

0xb774,	// (0x00049e5c) tabs_3_long_active_pane_t1

0xb768,	// (0x00049e50) bg_passive_tab_pane_cp5

0xa0fa,	// (0x000487e2) list_single_midp_graphic_pane_g4

0x3fc1,	// (0x000426a9) bg_popup_window_pane_cp13_ParamLimits

0x3fc1,	// (0x000426a9) bg_popup_window_pane_cp13

0x473b,	// (0x00042e23) listscroll_popup_fast_pane_ParamLimits

0x473b,	// (0x00042e23) listscroll_popup_fast_pane

0x474a,	// (0x00042e32) grid_popup_fast_pane_ParamLimits

0x474a,	// (0x00042e32) grid_popup_fast_pane

0x475c,	// (0x00042e44) scroll_pane_cp9_ParamLimits

0x475c,	// (0x00042e44) scroll_pane_cp9

0x79c6,	// (0x000460ae) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x79c6,	// (0x000460ae) list_single_graphic_hl_pane_t1_cp2

0x4780,	// (0x00042e68) input_focus_pane_cp20_ParamLimits

0x4780,	// (0x00042e68) input_focus_pane_cp20

0x478e,	// (0x00042e76) query_popup_data_pane_t1_ParamLimits

0x478e,	// (0x00042e76) query_popup_data_pane_t1

0x47a1,	// (0x00042e89) query_popup_data_pane_t2_ParamLimits

0x47a1,	// (0x00042e89) query_popup_data_pane_t2

0x47e7,	// (0x00042ecf) query_popup_data_pane_t3_ParamLimits

0x47e7,	// (0x00042ecf) query_popup_data_pane_t3

0x4828,	// (0x00042f10) query_popup_data_pane_t4_ParamLimits

0x4828,	// (0x00042f10) query_popup_data_pane_t4

0x4864,	// (0x00042f4c) query_popup_data_pane_t5_ParamLimits

0x4864,	// (0x00042f4c) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x0004dd99) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x0004dd99) query_popup_data_pane_t

0x461d,	// (0x00042d05) bg_set_opt_pane_g1

0x4625,	// (0x00042d0d) bg_set_opt_pane_g2

0x462d,	// (0x00042d15) bg_set_opt_pane_g3

0x4635,	// (0x00042d1d) bg_set_opt_pane_g4

0x463d,	// (0x00042d25) bg_set_opt_pane_g5

0x4645,	// (0x00042d2d) bg_set_opt_pane_g6

0x464d,	// (0x00042d35) bg_set_opt_pane_g7

0x4655,	// (0x00042d3d) bg_set_opt_pane_g8

0x465d,	// (0x00042d45) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x0004dda4) bg_set_opt_pane_g

0x97b4,	// (0x00047e9c) control_top_pane_stacon_ParamLimits

0x97b4,	// (0x00047e9c) control_top_pane_stacon

0x9807,	// (0x00047eef) signal_pane_stacon_ParamLimits

0x9807,	// (0x00047eef) signal_pane_stacon

0x4cdf,	// (0x000433c7) stacon_top_pane_g1_ParamLimits

0x4cdf,	// (0x000433c7) stacon_top_pane_g1

0x982c,	// (0x00047f14) title_pane_stacon_ParamLimits

0x982c,	// (0x00047f14) title_pane_stacon

0x9856,	// (0x00047f3e) uni_indicator_pane_stacon_ParamLimits

0x9856,	// (0x00047f3e) uni_indicator_pane_stacon

0x986b,	// (0x00047f53) battery_pane_stacon_ParamLimits

0x986b,	// (0x00047f53) battery_pane_stacon

0x98af,	// (0x00047f97) control_bottom_pane_stacon_ParamLimits

0x98af,	// (0x00047f97) control_bottom_pane_stacon

0x98d2,	// (0x00047fba) navi_pane_stacon_ParamLimits

0x98d2,	// (0x00047fba) navi_pane_stacon

0x4d01,	// (0x000433e9) stacon_bottom_pane_g1_ParamLimits

0x4d01,	// (0x000433e9) stacon_bottom_pane_g1

0x9515,	// (0x00047bfd) aid_levels_signal_lsc_ParamLimits

0x9515,	// (0x00047bfd) aid_levels_signal_lsc

0x952c,	// (0x00047c14) signal_pane_stacon_g1_ParamLimits

0x952c,	// (0x00047c14) signal_pane_stacon_g1

0x9540,	// (0x00047c28) signal_pane_stacon_g2_ParamLimits

0x9540,	// (0x00047c28) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0004ddb7) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0004ddb7) signal_pane_stacon_g

0x9575,	// (0x00047c5d) title_pane_stacon_t1_ParamLimits

0x9575,	// (0x00047c5d) title_pane_stacon_t1

0x48bc,	// (0x00042fa4) uni_indicator_pane_stacon_g1

0x48c6,	// (0x00042fae) uni_indicator_pane_stacon_g2

0x48a8,	// (0x00042f90) uni_indicator_pane_stacon_g3

0x48b2,	// (0x00042f9a) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x0004ddc3) uni_indicator_pane_stacon_g

0x959a,	// (0x00047c82) control_top_pane_stacon_g1

0x95a2,	// (0x00047c8a) control_top_pane_stacon_t1_ParamLimits

0x95a2,	// (0x00047c8a) control_top_pane_stacon_t1

0x95d9,	// (0x00047cc1) aid_levels_battery_lsc_ParamLimits

0x95d9,	// (0x00047cc1) aid_levels_battery_lsc

0x95f1,	// (0x00047cd9) battery_pane_stacon_g1_ParamLimits

0x95f1,	// (0x00047cd9) battery_pane_stacon_g1

0x9604,	// (0x00047cec) battery_pane_stacon_g2_ParamLimits

0x9604,	// (0x00047cec) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x0004ddcc) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x0004ddcc) battery_pane_stacon_g

0x9642,	// (0x00047d2a) navi_icon_pane_stacon

0x9656,	// (0x00047d3e) navi_navi_pane_stacon

0x9642,	// (0x00047d2a) navi_text_pane_stacon

0x959a,	// (0x00047c82) control_bottom_pane_stacon_g1

0x966a,	// (0x00047d52) control_bottom_pane_stacon_t1_ParamLimits

0x966a,	// (0x00047d52) control_bottom_pane_stacon_t1

0xb786,	// (0x00049e6e) grid_app_pane_ParamLimits

0xb786,	// (0x00049e6e) grid_app_pane

0xb7a8,	// (0x00049e90) scroll_pane_cp15_ParamLimits

0xb7a8,	// (0x00049e90) scroll_pane_cp15

0xb7bd,	// (0x00049ea5) cell_app_pane_ParamLimits

0xb7bd,	// (0x00049ea5) cell_app_pane

0xb7e7,	// (0x00049ecf) cell_app_pane_g1_ParamLimits

0xb7e7,	// (0x00049ecf) cell_app_pane_g1

0x48ea,	// (0x00042fd2) cell_app_pane_g2_ParamLimits

0x48ea,	// (0x00042fd2) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x0004ddd1) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x0004ddd1) cell_app_pane_g

0xb807,	// (0x00049eef) cell_app_pane_t1_ParamLimits

0xb807,	// (0x00049eef) cell_app_pane_t1

0x48f6,	// (0x00042fde) grid_highlight_pane_ParamLimits

0x48f6,	// (0x00042fde) grid_highlight_pane

0x461d,	// (0x00042d05) cell_highlight_pane_g1

0x4625,	// (0x00042d0d) cell_highlight_pane_g2

0x462d,	// (0x00042d15) cell_highlight_pane_g3

0x4635,	// (0x00042d1d) cell_highlight_pane_g4

0x463d,	// (0x00042d25) cell_highlight_pane_g5

0x4645,	// (0x00042d2d) cell_highlight_pane_g6

0x464d,	// (0x00042d35) cell_highlight_pane_g7

0x4655,	// (0x00042d3d) cell_highlight_pane_g8

0x465d,	// (0x00042d45) cell_highlight_pane_g9

0x3f5b,	// (0x00042643) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x0004dd7f) cell_highlight_pane_g

0x4907,	// (0x00042fef) bg_scroll_pane

0x96b4,	// (0x00047d9c) scroll_handle_pane

0x494e,	// (0x00043036) scroll_bg_pane_g1

0x4963,	// (0x0004304b) scroll_bg_pane_g2

0x497b,	// (0x00043063) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x0004ddd6) scroll_bg_pane_g

0x4990,	// (0x00043078) scroll_handle_focus_pane_ParamLimits

0x4990,	// (0x00043078) scroll_handle_focus_pane

0x494e,	// (0x00043036) scroll_handle_pane_g1

0x499d,	// (0x00043085) scroll_handle_pane_g2

0x497b,	// (0x00043063) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x0004dddd) scroll_handle_pane_g

0x466e,	// (0x00042d56) bg_popup_sub_pane_cp21_ParamLimits

0x466e,	// (0x00042d56) bg_popup_sub_pane_cp21

0x49b1,	// (0x00043099) popup_fep_japan_predictive_window_t1_ParamLimits

0x49b1,	// (0x00043099) popup_fep_japan_predictive_window_t1

0x49c8,	// (0x000430b0) popup_fep_japan_predictive_window_t2_ParamLimits

0x49c8,	// (0x000430b0) popup_fep_japan_predictive_window_t2

0x49fb,	// (0x000430e3) popup_fep_japan_predictive_window_t3_ParamLimits

0x49fb,	// (0x000430e3) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x0004dde4) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x0004dde4) popup_fep_japan_predictive_window_t

0x3f65,	// (0x0004264d) bg_popup_sub_pane_cp23

0x4a32,	// (0x0004311a) listscroll_japin_cand_pane

0x4a3a,	// (0x00043122) popup_fep_japan_candidate_window_t1

0x4a48,	// (0x00043130) candidate_pane_ParamLimits

0x4a48,	// (0x00043130) candidate_pane

0x4a5a,	// (0x00043142) scroll_pane_cp30

0x4a62,	// (0x0004314a) list_single_popup_jap_candidate_pane_ParamLimits

0x4a62,	// (0x0004314a) list_single_popup_jap_candidate_pane

0x3f65,	// (0x0004264d) list_highlight_pane_cp30

0x4a76,	// (0x0004315e) list_single_popup_jap_candidate_pane_t1

0x4a85,	// (0x0004316d) level_1_signal

0x4a92,	// (0x0004317a) level_2_signal

0x4a9f,	// (0x00043187) level_3_signal

0x4aac,	// (0x00043194) level_4_signal

0x4ab9,	// (0x000431a1) level_5_signal

0x4ac6,	// (0x000431ae) level_6_signal

0x4ad3,	// (0x000431bb) level_7_signal

0x4a85,	// (0x0004316d) level_1_battery

0x4a92,	// (0x0004317a) level_2_battery

0x4a9f,	// (0x00043187) level_3_battery

0x4aac,	// (0x00043194) level_4_battery

0x4ab9,	// (0x000431a1) level_5_battery

0x4ac6,	// (0x000431ae) level_6_battery

0x4ad3,	// (0x000431bb) level_7_battery

0x4af8,	// (0x000431e0) list_menu_pane_ParamLimits

0x4af8,	// (0x000431e0) list_menu_pane

0x4b0e,	// (0x000431f6) scroll_pane_cp25_ParamLimits

0x4b0e,	// (0x000431f6) scroll_pane_cp25

0x4b27,	// (0x0004320f) list_double2_graphic_pane_cp2_ParamLimits

0x4b27,	// (0x0004320f) list_double2_graphic_pane_cp2

0x4b27,	// (0x0004320f) list_double2_large_graphic_pane_cp2_ParamLimits

0x4b27,	// (0x0004320f) list_double2_large_graphic_pane_cp2

0x4b27,	// (0x0004320f) list_double2_pane_cp2_ParamLimits

0x4b27,	// (0x0004320f) list_double2_pane_cp2

0x4b27,	// (0x0004320f) list_double_graphic_pane_cp2_ParamLimits

0x4b27,	// (0x0004320f) list_double_graphic_pane_cp2

0x4b27,	// (0x0004320f) list_double_large_graphic_pane_cp2_ParamLimits

0x4b27,	// (0x0004320f) list_double_large_graphic_pane_cp2

0x4b27,	// (0x0004320f) list_double_number_pane_cp2_ParamLimits

0x4b27,	// (0x0004320f) list_double_number_pane_cp2

0x4b27,	// (0x0004320f) list_double_pane_cp2_ParamLimits

0x4b27,	// (0x0004320f) list_double_pane_cp2

0x4b49,	// (0x00043231) list_single_2graphic_pane_cp2_ParamLimits

0x4b49,	// (0x00043231) list_single_2graphic_pane_cp2

0x4b49,	// (0x00043231) list_single_graphic_heading_pane_cp2_ParamLimits

0x4b49,	// (0x00043231) list_single_graphic_heading_pane_cp2

0x4b49,	// (0x00043231) list_single_graphic_pane_cp2_ParamLimits

0x4b49,	// (0x00043231) list_single_graphic_pane_cp2

0x4b49,	// (0x00043231) list_single_heading_pane_cp2_ParamLimits

0x4b49,	// (0x00043231) list_single_heading_pane_cp2

0x4b60,	// (0x00043248) list_single_large_graphic_pane_cp2_ParamLimits

0x4b60,	// (0x00043248) list_single_large_graphic_pane_cp2

0x4b49,	// (0x00043231) list_single_number_heading_pane_cp2_ParamLimits

0x4b49,	// (0x00043231) list_single_number_heading_pane_cp2

0x4b49,	// (0x00043231) list_single_number_pane_cp2_ParamLimits

0x4b49,	// (0x00043231) list_single_number_pane_cp2

0x4b49,	// (0x00043231) list_single_pane_cp2_ParamLimits

0x4b49,	// (0x00043231) list_single_pane_cp2

0x4b7a,	// (0x00043262) bg_popup_sub_pane_cp22

0x9766,	// (0x00047e4e) popup_side_volume_key_window_g1

0x9790,	// (0x00047e78) popup_side_volume_key_window_t1

0x97ac,	// (0x00047e94) volume_small_pane_cp1

0x3fb3,	// (0x0004269b) bg_popup_sub_pane_cp24_ParamLimits

0x3fb3,	// (0x0004269b) bg_popup_sub_pane_cp24

0x4b90,	// (0x00043278) fep_china_uni_candidate_pane_ParamLimits

0x4b90,	// (0x00043278) fep_china_uni_candidate_pane

0x4ba4,	// (0x0004328c) fep_china_uni_entry_pane

0x4bb4,	// (0x0004329c) popup_fep_china_uni_window_g1

0x4bd0,	// (0x000432b8) fep_china_uni_entry_pane_g1

0x4bd8,	// (0x000432c0) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x0004de15) fep_china_uni_entry_pane_g

0x4be0,	// (0x000432c8) fep_entry_item_pane

0x4bea,	// (0x000432d2) fep_candidate_item_pane

0x4bf2,	// (0x000432da) fep_china_uni_candidate_pane_g1

0x4bfa,	// (0x000432e2) fep_china_uni_candidate_pane_g2

0x4c02,	// (0x000432ea) fep_china_uni_candidate_pane_g3

0x4c0a,	// (0x000432f2) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x0004de1a) fep_china_uni_candidate_pane_g

0x3f5b,	// (0x00042643) fep_entry_item_pane_g1

0x4c12,	// (0x000432fa) fep_entry_item_pane_t1_ParamLimits

0x4c12,	// (0x000432fa) fep_entry_item_pane_t1

0x4c28,	// (0x00043310) fep_candidate_item_pane_t1_ParamLimits

0x4c28,	// (0x00043310) fep_candidate_item_pane_t1

0x4c3d,	// (0x00043325) fep_candidate_item_pane_t2_ParamLimits

0x4c3d,	// (0x00043325) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x0004de23) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x0004de23) fep_candidate_item_pane_t

0x3fc1,	// (0x000426a9) list_highlight_pane_cp31_ParamLimits

0x3fc1,	// (0x000426a9) list_highlight_pane_cp31

0x4c4f,	// (0x00043337) level_1_signal_lsc

0x4c58,	// (0x00043340) level_2_signal_lsc

0x4c61,	// (0x00043349) level_3_signal_lsc

0x4c6a,	// (0x00043352) level_4_signal_lsc

0x4c73,	// (0x0004335b) level_5_signal_lsc

0x4c7c,	// (0x00043364) level_6_signal_lsc

0x4c85,	// (0x0004336d) level_7_signal_lsc

0x4c85,	// (0x0004336d) level_1_battery_lsc

0x4c8e,	// (0x00043376) level_2_battery_lsc

0x4c97,	// (0x0004337f) level_3_battery_lsc

0x4ca0,	// (0x00043388) level_4_battery_lsc

0x4ca9,	// (0x00043391) level_5_battery_lsc

0x4cb2,	// (0x0004339a) level_6_battery_lsc

0x4c4f,	// (0x00043337) level_7_battery_lsc

0x4cbb,	// (0x000433a3) scroll_handle_focus_pane_g1

0x4cc4,	// (0x000433ac) scroll_handle_focus_pane_g2

0x4ccd,	// (0x000433b5) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x0004de28) scroll_handle_focus_pane_g

0xb880,	// (0x00049f68) list_single_2graphic_pane_g1_ParamLimits

0xb880,	// (0x00049f68) list_single_2graphic_pane_g1

0x8f86,	// (0x0004766e) list_single_2graphic_pane_g2_ParamLimits

0x8f86,	// (0x0004766e) list_single_2graphic_pane_g2

0x8eeb,	// (0x000475d3) list_single_2graphic_pane_g3_ParamLimits

0x8eeb,	// (0x000475d3) list_single_2graphic_pane_g3

0xb88c,	// (0x00049f74) list_single_2graphic_pane_g4_ParamLimits

0xb88c,	// (0x00049f74) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x0004de2f) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x0004de2f) list_single_2graphic_pane_g

0xb89d,	// (0x00049f85) list_single_2graphic_pane_t1_ParamLimits

0xb89d,	// (0x00049f85) list_single_2graphic_pane_t1

0xb8cb,	// (0x00049fb3) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb8cb,	// (0x00049fb3) list_double2_graphic_large_graphic_pane_g1

0xb64f,	// (0x00049d37) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb64f,	// (0x00049d37) list_double2_graphic_large_graphic_pane_g2

0xb622,	// (0x00049d0a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb622,	// (0x00049d0a) list_double2_graphic_large_graphic_pane_g3

0xb8dd,	// (0x00049fc5) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb8dd,	// (0x00049fc5) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x0004de38) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x0004de38) list_double2_graphic_large_graphic_pane_g

0xb8e9,	// (0x00049fd1) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb8e9,	// (0x00049fd1) list_double2_graphic_large_graphic_pane_t1

0xb8ff,	// (0x00049fe7) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb8ff,	// (0x00049fe7) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x0004de41) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x0004de41) list_double2_graphic_large_graphic_pane_t

0x4d8f,	// (0x00043477) popup_fast_swap_window_ParamLimits

0x4d8f,	// (0x00043477) popup_fast_swap_window

0x4dab,	// (0x00043493) popup_side_volume_key_window

0x4dc5,	// (0x000434ad) stacon_top_pane

0x4dcf,	// (0x000434b7) status_pane_ParamLimits

0x4dcf,	// (0x000434b7) status_pane

0x4dc5,	// (0x000434ad) status_small_pane

0x3f65,	// (0x0004264d) control_pane

0x3f65,	// (0x0004264d) stacon_bottom_pane

0x45a5,	// (0x00042c8d) scroll_pane_cp121

0x459c,	// (0x00042c84) set_content_pane

0xb911,	// (0x00049ff9) bg_active_tab_pane_g1_cp1

0x4cd6,	// (0x000433be) bg_active_tab_pane_g2_cp1

0xb91a,	// (0x0004a002) bg_active_tab_pane_g3_cp1

0xb911,	// (0x00049ff9) bg_passive_tab_pane_g1_cp1

0x4cd6,	// (0x000433be) bg_passive_tab_pane_g2_cp1

0xb91a,	// (0x0004a002) bg_passive_tab_pane_g3_cp1

0xb923,	// (0x0004a00b) bg_active_tab_pane_g1_cp2

0x4cd6,	// (0x000433be) bg_active_tab_pane_g2_cp2

0xb92c,	// (0x0004a014) bg_active_tab_pane_g3_cp2

0xb923,	// (0x0004a00b) bg_passive_tab_pane_g1_cp2

0x4cd6,	// (0x000433be) bg_passive_tab_pane_g2_cp2

0xb92c,	// (0x0004a014) bg_passive_tab_pane_g3_cp2

0xb935,	// (0x0004a01d) bg_active_tab_pane_g1_cp3

0x4cd6,	// (0x000433be) bg_active_tab_pane_g2_cp3

0xb93e,	// (0x0004a026) bg_active_tab_pane_g3_cp3

0xb935,	// (0x0004a01d) bg_passive_tab_pane_g1_cp3

0x4cd6,	// (0x000433be) bg_passive_tab_pane_g2_cp3

0xb93e,	// (0x0004a026) bg_passive_tab_pane_g3_cp3

0xb947,	// (0x0004a02f) bg_active_tab_pane_g1_cp4

0x4cd6,	// (0x000433be) bg_active_tab_pane_g2_cp4

0xb952,	// (0x0004a03a) bg_active_tab_pane_g3_cp4

0xb947,	// (0x0004a02f) bg_passive_tab_pane_g1_cp4

0x4cd6,	// (0x000433be) bg_passive_tab_pane_g2_cp4

0xb952,	// (0x0004a03a) bg_passive_tab_pane_g3_cp4

0x4d26,	// (0x0004340e) bg_active_tab_pane_g1_cp5

0x4cd6,	// (0x000433be) bg_active_tab_pane_g2_cp5

0x4d1d,	// (0x00043405) bg_active_tab_pane_g3_cp5

0x4d26,	// (0x0004340e) bg_passive_tab_pane_g1_cp5

0x4cd6,	// (0x000433be) bg_passive_tab_pane_g2_cp5

0x4d1d,	// (0x00043405) bg_passive_tab_pane_g3_cp5

0xb95d,	// (0x0004a045) list_set_graphic_pane_ParamLimits

0xb95d,	// (0x0004a045) list_set_graphic_pane

0x3f65,	// (0x0004264d) bg_set_opt_pane_cp4

0x4d2f,	// (0x00043417) list_set_graphic_pane_g1_ParamLimits

0x4d2f,	// (0x00043417) list_set_graphic_pane_g1

0x4d3b,	// (0x00043423) list_set_graphic_pane_g2_ParamLimits

0x4d3b,	// (0x00043423) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x0004de46) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x0004de46) list_set_graphic_pane_g

0x0009,

0xfae6,	// (0x0004e1ce) volume_small_pane_cp_g

0xb97b,	// (0x0004a063) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xb97b,	// (0x0004a063) list_double2_large_graphic_pane_g1_cp2

0xb989,	// (0x0004a071) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xb989,	// (0x0004a071) list_double2_large_graphic_pane_g2_cp2

0x4d5f,	// (0x00043447) list_double2_large_graphic_pane_g3_cp2

0x4d67,	// (0x0004344f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4d67,	// (0x0004344f) list_double2_large_graphic_pane_t1_cp2

0x4d7d,	// (0x00043465) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4d7d,	// (0x00043465) list_double2_large_graphic_pane_t2_cp2

0xc100,	// (0x0004a7e8) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc100,	// (0x0004a7e8) list_double_large_graphic_pane_g1_cp2

0xc113,	// (0x0004a7fb) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xc113,	// (0x0004a7fb) list_double_large_graphic_pane_g2_cp2

0x4eb0,	// (0x00043598) list_double_large_graphic_pane_g3_cp2

0x632a,	// (0x00044a12) list_double_large_graphic_pane_g4_cp

0x6332,	// (0x00044a1a) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6332,	// (0x00044a1a) list_double_large_graphic_pane_t1_cp2

0x6349,	// (0x00044a31) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6349,	// (0x00044a31) list_double_large_graphic_pane_t2_cp2

0xb99a,	// (0x0004a082) list_double2_graphic_pane_g1_cp2_ParamLimits

0xb99a,	// (0x0004a082) list_double2_graphic_pane_g1_cp2

0xb9a8,	// (0x0004a090) list_double2_graphic_pane_g2_cp2_ParamLimits

0xb9a8,	// (0x0004a090) list_double2_graphic_pane_g2_cp2

0xb9b9,	// (0x0004a0a1) list_double2_graphic_pane_g3_cp2

0x4ddd,	// (0x000434c5) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4ddd,	// (0x000434c5) list_double2_graphic_pane_t1_cp2

0x4df3,	// (0x000434db) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4df3,	// (0x000434db) list_double2_graphic_pane_t2_cp2

0x4e05,	// (0x000434ed) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4e05,	// (0x000434ed) list_single_number_heading_pane_g1_cp2

0x4e11,	// (0x000434f9) list_single_number_heading_pane_g2_cp2

0x4e19,	// (0x00043501) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4e19,	// (0x00043501) list_single_number_heading_pane_t1_cp2

0xb9c3,	// (0x0004a0ab) list_single_number_heading_pane_t2_cp2_ParamLimits

0xb9c3,	// (0x0004a0ab) list_single_number_heading_pane_t2_cp2

0x4e2f,	// (0x00043517) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4e2f,	// (0x00043517) list_single_number_heading_pane_t3_cp2

0x4e05,	// (0x000434ed) list_single_heading_pane_g1_cp2_ParamLimits

0x4e05,	// (0x000434ed) list_single_heading_pane_g1_cp2

0x4e11,	// (0x000434f9) list_single_heading_pane_g2_cp2

0x4e19,	// (0x00043501) list_single_heading_pane_t1_cp2_ParamLimits

0x4e19,	// (0x00043501) list_single_heading_pane_t1_cp2

0xc0ec,	// (0x0004a7d4) list_single_heading_pane_t2_cp2_ParamLimits

0xc0ec,	// (0x0004a7d4) list_single_heading_pane_t2_cp2

0x608e,	// (0x00044776) list_double_graphic_pane_g1_cp2_ParamLimits

0x608e,	// (0x00044776) list_double_graphic_pane_g1_cp2

0x609a,	// (0x00044782) list_double_graphic_pane_g2_cp2_ParamLimits

0x609a,	// (0x00044782) list_double_graphic_pane_g2_cp2

0x60a9,	// (0x00044791) list_double_graphic_pane_g3_cp2

0x60b1,	// (0x00044799) list_double_graphic_pane_t1_cp2_ParamLimits

0x60b1,	// (0x00044799) list_double_graphic_pane_t1_cp2

0x60c7,	// (0x000447af) list_double_graphic_pane_t2_cp2_ParamLimits

0x60c7,	// (0x000447af) list_double_graphic_pane_t2_cp2

0x4ea4,	// (0x0004358c) list_double_number_pane_g1_cp2_ParamLimits

0x4ea4,	// (0x0004358c) list_double_number_pane_g1_cp2

0x4eb0,	// (0x00043598) list_double_number_pane_g2_cp2

0xc0d8,	// (0x0004a7c0) list_double_number_pane_t1_cp2_ParamLimits

0xc0d8,	// (0x0004a7c0) list_double_number_pane_t1_cp2

0x6066,	// (0x0004474e) list_double_number_pane_t2_cp2_ParamLimits

0x6066,	// (0x0004474e) list_double_number_pane_t2_cp2

0x607c,	// (0x00044764) list_double_number_pane_t3_cp2_ParamLimits

0x607c,	// (0x00044764) list_double_number_pane_t3_cp2

0xc03c,	// (0x0004a724) list_single_graphic_pane_g1_cp2_ParamLimits

0xc03c,	// (0x0004a724) list_single_graphic_pane_g1_cp2

0x4ef0,	// (0x000435d8) list_single_graphic_pane_g2_cp2_ParamLimits

0x4ef0,	// (0x000435d8) list_single_graphic_pane_g2_cp2

0x4efc,	// (0x000435e4) list_single_graphic_pane_g3_cp2

0x5fd5,	// (0x000446bd) list_single_graphic_pane_t1_cp2_ParamLimits

0x5fd5,	// (0x000446bd) list_single_graphic_pane_t1_cp2

0x4ef0,	// (0x000435d8) list_single_number_pane_g1_cp2_ParamLimits

0x4ef0,	// (0x000435d8) list_single_number_pane_g1_cp2

0x4efc,	// (0x000435e4) list_single_number_pane_g2_cp2

0x5fd5,	// (0x000446bd) list_single_number_pane_t1_cp2_ParamLimits

0x5fd5,	// (0x000446bd) list_single_number_pane_t1_cp2

0xc028,	// (0x0004a710) list_single_number_pane_t2_cp2_ParamLimits

0xc028,	// (0x0004a710) list_single_number_pane_t2_cp2

0xb989,	// (0x0004a071) list_double2_pane_g1_cp2_ParamLimits

0xb989,	// (0x0004a071) list_double2_pane_g1_cp2

0x4d5f,	// (0x00043447) list_double2_pane_g2_cp2

0x4e7c,	// (0x00043564) list_double2_pane_t1_cp2_ParamLimits

0x4e7c,	// (0x00043564) list_double2_pane_t1_cp2

0x4e92,	// (0x0004357a) list_double2_pane_t2_cp2_ParamLimits

0x4e92,	// (0x0004357a) list_double2_pane_t2_cp2

0x4ea4,	// (0x0004358c) list_double_pane_g1_cp2_ParamLimits

0x4ea4,	// (0x0004358c) list_double_pane_g1_cp2

0x4eb0,	// (0x00043598) list_double_pane_g2_cp2

0x4eb8,	// (0x000435a0) list_double_pane_t1_cp2_ParamLimits

0x4eb8,	// (0x000435a0) list_double_pane_t1_cp2

0x4ece,	// (0x000435b6) list_double_pane_t2_cp2_ParamLimits

0x4ece,	// (0x000435b6) list_double_pane_t2_cp2

0x4ee0,	// (0x000435c8) list_single_pane_cp2_g3

0x4ef0,	// (0x000435d8) list_single_pane_g1_cp2_ParamLimits

0x4ef0,	// (0x000435d8) list_single_pane_g1_cp2

0x4efc,	// (0x000435e4) list_single_pane_g2_cp2

0x4f04,	// (0x000435ec) list_single_pane_t1_cp2_ParamLimits

0x4f04,	// (0x000435ec) list_single_pane_t1_cp2

0xb9ef,	// (0x0004a0d7) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xb9ef,	// (0x0004a0d7) list_single_large_graphic_pane_g1_cp2

0x4f1c,	// (0x00043604) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4f1c,	// (0x00043604) list_single_large_graphic_pane_g2_cp2

0x4f28,	// (0x00043610) list_single_large_graphic_pane_g3_cp2

0x4f30,	// (0x00043618) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4f30,	// (0x00043618) list_single_large_graphic_pane_g4_cp1

0x4f4a,	// (0x00043632) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4f4a,	// (0x00043632) list_single_large_graphic_pane_t1_cp2

0x5fb3,	// (0x0004469b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5fb3,	// (0x0004469b) list_single_graphic_heading_pane_g1_cp2

0xc003,	// (0x0004a6eb) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xc003,	// (0x0004a6eb) list_single_graphic_heading_pane_g4_cp2

0x4efc,	// (0x000435e4) list_single_graphic_heading_pane_g5_cp2

0x5fbf,	// (0x000446a7) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5fbf,	// (0x000446a7) list_single_graphic_heading_pane_t1_cp2

0xc014,	// (0x0004a6fc) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xc014,	// (0x0004a6fc) list_single_graphic_heading_pane_t2_cp2

0x5f85,	// (0x0004466d) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5f85,	// (0x0004466d) list_single_2graphic_pane_g1_cp2

0xc003,	// (0x0004a6eb) list_single_2graphic_pane_g2_cp2_ParamLimits

0xc003,	// (0x0004a6eb) list_single_2graphic_pane_g2_cp2

0x4efc,	// (0x000435e4) list_single_2graphic_pane_g3_cp2

0x5f91,	// (0x00044679) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5f91,	// (0x00044679) list_single_2graphic_pane_g4_cp2

0x5f9d,	// (0x00044685) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5f9d,	// (0x00044685) list_single_2graphic_pane_t1_cp2

0x3f5b,	// (0x00042643) list_highlight_pane_g10_cp1

0x5b59,	// (0x00044241) list_highlight_pane_g1_cp1

0x5b61,	// (0x00044249) list_highlight_pane_g2_cp1

0x5b69,	// (0x00044251) list_highlight_pane_g3_cp1

0x5b71,	// (0x00044259) list_highlight_pane_g4_cp1

0x5b79,	// (0x00044261) list_highlight_pane_g5_cp1

0x5b81,	// (0x00044269) list_highlight_pane_g6_cp1

0x5b89,	// (0x00044271) list_highlight_pane_g7_cp1

0x5b91,	// (0x00044279) list_highlight_pane_g8_cp1

0x5b99,	// (0x00044281) list_highlight_pane_g9_cp1

0xbfc9,	// (0x0004a6b1) form_field_slider_pane_t3

0xbfd7,	// (0x0004a6bf) form_field_slider_pane_t4

0x5a8d,	// (0x00044175) slider_form_pane_ParamLimits

0x5a8d,	// (0x00044175) slider_form_pane

0x3f65,	// (0x0004264d) control_abbreviations

0x3f65,	// (0x0004264d) control_conventions

0x3f65,	// (0x0004264d) control_definitions

0x3f65,	// (0x0004264d) format_table_attribute

0x617e,	// (0x00044866) bg_popup_preview_window_pane_g9

0x3f65,	// (0x0004264d) format_table_data2

0x3f65,	// (0x0004264d) format_table_data3

0x3f65,	// (0x0004264d) format_table_data_example

0x0008,

0x3f65,	// (0x0004264d) intro_purpose

0xf8fa,	// (0x0004dfe2) bg_popup_preview_window_pane_g

0x3f65,	// (0x0004264d) texts_category

0x3f65,	// (0x0004264d) texts_graphics

0x4f60,	// (0x00043648) text_digital

0x4f6f,	// (0x00043657) text_primary

0x4f7e,	// (0x00043666) text_primary_small

0x4f8d,	// (0x00043675) text_secondary

0x4f9c,	// (0x00043684) text_title

0x6612,	// (0x00044cfa) bg_passive_tab_pane_g1_cp3_srt

0x4cd6,	// (0x000433be) bg_passive_tab_pane_g2_cp3_srt

0x6609,	// (0x00044cf1) bg_passive_tab_pane_g3_cp3_srt

0x3fc1,	// (0x000426a9) bg_active_tab_pane_cp3_srt_ParamLimits

0x3fc1,	// (0x000426a9) bg_active_tab_pane_cp3_srt

0x661b,	// (0x00044d03) tabs_4_active_pane_srt_g1

0xca18,	// (0x0004b100) tabs_4_active_pane_srt_t1_ParamLimits

0xca18,	// (0x0004b100) tabs_4_active_pane_srt_t1

0x6612,	// (0x00044cfa) bg_active_tab_pane_g1_cp3_copy1

0x4cd6,	// (0x000433be) bg_active_tab_pane_g2_cp3_copy1

0x6609,	// (0x00044cf1) bg_active_tab_pane_g3_cp3_copy1

0x3fc1,	// (0x000426a9) tabs_2_long_active_pane_srt_ParamLimits

0x3fc1,	// (0x000426a9) tabs_2_long_active_pane_srt

0x3fc1,	// (0x000426a9) tabs_2_long_passive_pane_srt_ParamLimits

0x3fc1,	// (0x000426a9) tabs_2_long_passive_pane_srt

0xb768,	// (0x00049e50) bg_passive_tab_pane_cp4_srt_ParamLimits

0xb768,	// (0x00049e50) bg_passive_tab_pane_cp4_srt

0x652e,	// (0x00044c16) bg_passive_tab_pane_g1_cp4_srt

0x4cd6,	// (0x000433be) bg_passive_tab_pane_g2_cp4_srt

0x6525,	// (0x00044c0d) bg_passive_tab_pane_g3_cp4_srt

0x585b,	// (0x00043f43) bg_active_tab_pane_cp4_srt_ParamLimits

0x585b,	// (0x00043f43) bg_active_tab_pane_cp4_srt

0xc7b8,	// (0x0004aea0) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc7b8,	// (0x0004aea0) tabs_2_long_active_pane_srt_t1

0x652e,	// (0x00044c16) bg_active_tab_pane_g1_cp4_srt

0x4cd6,	// (0x000433be) bg_active_tab_pane_g2_cp4_srt

0x6525,	// (0x00044c0d) bg_active_tab_pane_g3_cp4_srt

0x3fb3,	// (0x0004269b) tabs_3_long_active_pane_srt_ParamLimits

0x3fb3,	// (0x0004269b) tabs_3_long_active_pane_srt

0x3fb3,	// (0x0004269b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3fb3,	// (0x0004269b) tabs_3_long_passive_pane_cp_srt

0x3fb3,	// (0x0004269b) tabs_3_long_passive_pane_srt_ParamLimits

0x3fb3,	// (0x0004269b) tabs_3_long_passive_pane_srt

0xb768,	// (0x00049e50) bg_passive_tab_pane_cp5_srt_ParamLimits

0xb768,	// (0x00049e50) bg_passive_tab_pane_cp5_srt

0x4d26,	// (0x0004340e) bg_passive_tab_pane_g1_cp5_srt

0x4cd6,	// (0x000433be) bg_passive_tab_pane_g2_cp5_srt

0x4d1d,	// (0x00043405) bg_passive_tab_pane_g3_cp5_srt

0x585b,	// (0x00043f43) bg_active_tab_pane_cp5_srt_ParamLimits

0x585b,	// (0x00043f43) bg_active_tab_pane_cp5_srt

0xc7a6,	// (0x0004ae8e) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc7a6,	// (0x0004ae8e) tabs_3_long_active_pane_srt_t1

0x4d26,	// (0x0004340e) bg_active_tab_pane_g1_cp5_srt

0x4cd6,	// (0x000433be) bg_active_tab_pane_g2_cp5_srt

0x4d1d,	// (0x00043405) bg_active_tab_pane_g3_cp5_srt

0x6517,	// (0x00044bff) navi_text_pane_srt_t1

0x650f,	// (0x00044bf7) navi_icon_pane_srt_g1

0x50ac,	// (0x00043794) midp_editing_number_pane_srt

0x4fab,	// (0x00043693) midp_ticker_pane_srt

0x50b4,	// (0x0004379c) midp_ticker_pane_srt_g1

0x50bc,	// (0x000437a4) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x0004de65) midp_ticker_pane_srt_g

0x50c4,	// (0x000437ac) midp_ticker_pane_srt_t1

0x6500,	// (0x00044be8) midp_editing_number_pane_t1_copy1

0xb768,	// (0x00049e50) listscroll_midp_pane

0xb768,	// (0x00049e50) midp_form_pane

0x4fb3,	// (0x0004369b) midp_info_popup_window_ParamLimits

0x4fb3,	// (0x0004369b) midp_info_popup_window

0x466e,	// (0x00042d56) bg_popup_sub_pane_cp50_ParamLimits

0x466e,	// (0x00042d56) bg_popup_sub_pane_cp50

0x5790,	// (0x00043e78) listscroll_midp_info_pane_ParamLimits

0x5790,	// (0x00043e78) listscroll_midp_info_pane

0x5778,	// (0x00043e60) listscroll_form_midp_pane_ParamLimits

0x5778,	// (0x00043e60) listscroll_form_midp_pane

0x5784,	// (0x00043e6c) scroll_bar_cp050

0xbfb1,	// (0x0004a699) list_midp_pane

0x6f85,	// (0x0004566d) signal_pane_g2_cp

0x56aa,	// (0x00043d92) listscroll_midp_info_pane_t1_ParamLimits

0x56aa,	// (0x00043d92) listscroll_midp_info_pane_t1

0x56c2,	// (0x00043daa) listscroll_midp_info_pane_t2_ParamLimits

0x56c2,	// (0x00043daa) listscroll_midp_info_pane_t2

0x5700,	// (0x00043de8) listscroll_midp_info_pane_t3_ParamLimits

0x5700,	// (0x00043de8) listscroll_midp_info_pane_t3

0x573a,	// (0x00043e22) listscroll_midp_info_pane_t4_ParamLimits

0x573a,	// (0x00043e22) listscroll_midp_info_pane_t4

0x0003,

0xf835,	// (0x0004df1d) listscroll_midp_info_pane_t_ParamLimits

0xf835,	// (0x0004df1d) listscroll_midp_info_pane_t

0x46ee,	// (0x00042dd6) scroll_pane_cp21

0x564e,	// (0x00043d36) form_midp_field_choice_group_pane

0x5657,	// (0x00043d3f) form_midp_field_text_pane

0x5690,	// (0x00043d78) form_midp_field_time_pane

0x5698,	// (0x00043d80) form_midp_gauge_slider_pane

0x56a1,	// (0x00043d89) form_midp_gauge_wait_pane

0x3f65,	// (0x0004264d) form_midp_image_pane

0xbf79,	// (0x0004a661) list_single_midp_pane_ParamLimits

0xbf79,	// (0x0004a661) list_single_midp_pane

0xbf3a,	// (0x0004a622) form_midp_field_text_pane_t1

0x54cd,	// (0x00043bb5) input_focus_pane_cp050

0x563d,	// (0x00043d25) list_midp_form_text_pane

0x560c,	// (0x00043cf4) form_midp_field_choice_group_pane_t1

0x561a,	// (0x00043d02) input_focus_pane_cp051

0x562e,	// (0x00043d16) list_midp_choice_pane

0x3f65,	// (0x0004264d) status_idle_pane

0x55f0,	// (0x00043cd8) form_midp_field_time_pane_t1

0x3f5b,	// (0x00042643) wait_anim_pane_g2_copy1

0x55fe,	// (0x00043ce6) form_midp_field_time_pane_t2

0x0001,

0x501e,	// (0x00043706) aid_navinavi_width_2_pane

0xf830,	// (0x0004df18) form_midp_field_time_pane_t

0x3f65,	// (0x0004264d) input_focus_pane_cp052

0x3f65,	// (0x0004264d) bg_input_focus_pane_cp040

0x55cc,	// (0x00043cb4) form_midp_gauge_slider_pane_t1

0x55da,	// (0x00043cc2) form_midp_gauge_slider_pane_t2

0xbf1e,	// (0x0004a606) form_midp_gauge_slider_pane_t3

0xbf2c,	// (0x0004a614) form_midp_gauge_slider_pane_t4

0x0003,

0xf827,	// (0x0004df0f) form_midp_gauge_slider_pane_t

0x55e8,	// (0x00043cd0) form_midp_slider_pane

0x3fc1,	// (0x000426a9) bg_input_focus_pane_cp041_ParamLimits

0x3fc1,	// (0x000426a9) bg_input_focus_pane_cp041

0x5599,	// (0x00043c81) form_midp_gauge_wait_pane_t1_ParamLimits

0x5599,	// (0x00043c81) form_midp_gauge_wait_pane_t1

0x55ab,	// (0x00043c93) form_midp_gauge_wait_pane_t2_ParamLimits

0x55ab,	// (0x00043c93) form_midp_gauge_wait_pane_t2

0x0001,

0xf822,	// (0x0004df0a) form_midp_gauge_wait_pane_t_ParamLimits

0xf822,	// (0x0004df0a) form_midp_gauge_wait_pane_t

0x55bd,	// (0x00043ca5) form_midp_wait_pane_ParamLimits

0x55bd,	// (0x00043ca5) form_midp_wait_pane

0x5563,	// (0x00043c4b) form_midp_image_pane_g1

0x556c,	// (0x00043c54) form_midp_image_pane_t1

0x557b,	// (0x00043c63) form_midp_image_pane_t2

0x558a,	// (0x00043c72) form_midp_image_pane_t3

0x0002,

0xf81b,	// (0x0004df03) form_midp_image_pane_t

0x555a,	// (0x00043c42) list_single_midp_pane_g1

0xbf0f,	// (0x0004a5f7) list_single_midp_pane_t1

0xbedf,	// (0x0004a5c7) list_midp_form_item_pane_ParamLimits

0xbedf,	// (0x0004a5c7) list_midp_form_item_pane

0x4fc6,	// (0x000436ae) list_midp_form_item_pane_t1

0x4fd5,	// (0x000436bd) midp_ticker_pane_g1

0x4fe1,	// (0x000436c9) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x0004de4b) midp_ticker_pane_g

0x4fed,	// (0x000436d5) midp_ticker_pane_t1

0x65b0,	// (0x00044c98) midp_editing_number_pane_t1

0x658e,	// (0x00044c76) midp_editing_number_pane

0x659d,	// (0x00044c85) midp_ticker_pane

0x64f0,	// (0x00044bd8) ai_message_heading_pane

0x3f65,	// (0x0004264d) bg_popup_window_pane_cp14

0x64f8,	// (0x00044be0) listscroll_ai_message_pane

0x647a,	// (0x00044b62) ai_message_heading_pane_g1_ParamLimits

0x647a,	// (0x00044b62) ai_message_heading_pane_g1

0x6486,	// (0x00044b6e) ai_message_heading_pane_g2_ParamLimits

0x6486,	// (0x00044b6e) ai_message_heading_pane_g2

0x6492,	// (0x00044b7a) ai_message_heading_pane_g3_ParamLimits

0x6492,	// (0x00044b7a) ai_message_heading_pane_g3

0x649e,	// (0x00044b86) ai_message_heading_pane_g4_ParamLimits

0x649e,	// (0x00044b86) ai_message_heading_pane_g4

0x0003,

0xf95c,	// (0x0004e044) ai_message_heading_pane_g_ParamLimits

0xf95c,	// (0x0004e044) ai_message_heading_pane_g

0x64aa,	// (0x00044b92) ai_message_heading_pane_t1_ParamLimits

0x64aa,	// (0x00044b92) ai_message_heading_pane_t1

0x64c4,	// (0x00044bac) ai_message_heading_pane_t2_ParamLimits

0x64c4,	// (0x00044bac) ai_message_heading_pane_t2

0x0001,

0xf965,	// (0x0004e04d) ai_message_heading_pane_t_ParamLimits

0xf965,	// (0x0004e04d) ai_message_heading_pane_t

0x64d6,	// (0x00044bbe) bg_popup_heading_pane_cp1_ParamLimits

0x64d6,	// (0x00044bbe) bg_popup_heading_pane_cp1

0x6468,	// (0x00044b50) list_ai_message_pane_ParamLimits

0x6468,	// (0x00044b50) list_ai_message_pane

0x46ee,	// (0x00042dd6) scroll_pane_cp10

0x6404,	// (0x00044aec) list_ai_message_pane_g1

0x640c,	// (0x00044af4) list_ai_message_pane_g2

0x0001,

0xf939,	// (0x0004e021) list_ai_message_pane_g

0x6414,	// (0x00044afc) list_ai_message_pane_t1_ParamLimits

0x6414,	// (0x00044afc) list_ai_message_pane_t1

0x6429,	// (0x00044b11) list_ai_message_pane_t2_ParamLimits

0x6429,	// (0x00044b11) list_ai_message_pane_t2

0x643e,	// (0x00044b26) list_ai_message_pane_t3_ParamLimits

0x643e,	// (0x00044b26) list_ai_message_pane_t3

0x6453,	// (0x00044b3b) list_ai_message_pane_t4_ParamLimits

0x6453,	// (0x00044b3b) list_ai_message_pane_t4

0x0003,

0xf93e,	// (0x0004e026) list_ai_message_pane_t_ParamLimits

0xf93e,	// (0x0004e026) list_ai_message_pane_t

0xc176,	// (0x0004a85e) cell_ai_soft_ind_pane_ParamLimits

0xc176,	// (0x0004a85e) cell_ai_soft_ind_pane

0x4fff,	// (0x000436e7) cell_ai_soft_ind_pane_g1_ParamLimits

0x4fff,	// (0x000436e7) cell_ai_soft_ind_pane_g1

0x3f65,	// (0x0004264d) grid_highlight_cp1

0x500c,	// (0x000436f4) text_secondary_cp56_ParamLimits

0x500c,	// (0x000436f4) text_secondary_cp56

0x63d9,	// (0x00044ac1) example_general_pane_ParamLimits

0x63d9,	// (0x00044ac1) example_general_pane

0x63e5,	// (0x00044acd) example_parent_pane_g1_ParamLimits

0x63e5,	// (0x00044acd) example_parent_pane_g1

0x63f1,	// (0x00044ad9) example_parent_pane_t1_ParamLimits

0x63f1,	// (0x00044ad9) example_parent_pane_t1

0x9e81,	// (0x00048569) popup_preview_text_window_ParamLimits

0x9e81,	// (0x00048569) popup_preview_text_window

0x4ee8,	// (0x000435d0) list_single_pane_cp2_g4

0x4190,	// (0x00042878) bg_popup_preview_window_pane_ParamLimits

0x4190,	// (0x00042878) bg_popup_preview_window_pane

0x6186,	// (0x0004486e) popup_preview_text_window_t1_ParamLimits

0x6186,	// (0x0004486e) popup_preview_text_window_t1

0x61a4,	// (0x0004488c) popup_preview_text_window_t2_ParamLimits

0x61a4,	// (0x0004488c) popup_preview_text_window_t2

0x61ed,	// (0x000448d5) popup_preview_text_window_t3_ParamLimits

0x61ed,	// (0x000448d5) popup_preview_text_window_t3

0x6232,	// (0x0004491a) popup_preview_text_window_t4_ParamLimits

0x6232,	// (0x0004491a) popup_preview_text_window_t4

0x0004,

0xf90d,	// (0x0004dff5) popup_preview_text_window_t_ParamLimits

0xf90d,	// (0x0004dff5) popup_preview_text_window_t

0x62b0,	// (0x00044998) scroll_pane_cp11

0x53dd,	// (0x00043ac5) bg_popup_preview_window_pane_g1

0x6146,	// (0x0004482e) bg_popup_preview_window_pane_g2

0x614e,	// (0x00044836) bg_popup_preview_window_pane_g3

0x6156,	// (0x0004483e) bg_popup_preview_window_pane_g4

0x615e,	// (0x00044846) bg_popup_preview_window_pane_g5

0x6166,	// (0x0004484e) bg_popup_preview_window_pane_g6

0x616e,	// (0x00044856) bg_popup_preview_window_pane_g7

0x6176,	// (0x0004485e) bg_popup_preview_window_pane_g8

0x8a6a,	// (0x00047152) aid_popup_width_pane

0x9e5f,	// (0x00048547) popup_midp_note_alarm_window_ParamLimits

0x9e5f,	// (0x00048547) popup_midp_note_alarm_window

0x45b6,	// (0x00042c9e) data_form_pane_ParamLimits

0x93fa,	// (0x00047ae2) form_field_data_pane_g1

0x9404,	// (0x00047aec) form_field_data_pane_t1_ParamLimits

0x45c2,	// (0x00042caa) input_focus_pane_ParamLimits

0x45d0,	// (0x00042cb8) data_form_wide_pane_ParamLimits

0x941e,	// (0x00047b06) form_field_data_wide_pane_g1

0x942a,	// (0x00047b12) form_field_data_wide_pane_t1_ParamLimits

0x4331,	// (0x00042a19) input_focus_pane_cp6_ParamLimits

0xb72d,	// (0x00049e15) input_popup_find_pane_g1_ParamLimits

0xb72d,	// (0x00049e15) input_popup_find_pane_g1

0x9615,	// (0x00047cfd) aid_navi_side_left_pane

0x962a,	// (0x00047d12) aid_navi_side_right_pane

0x5c36,	// (0x0004431e) bg_popup_window_pane_cp30_ParamLimits

0x5c36,	// (0x0004431e) bg_popup_window_pane_cp30

0x5cb0,	// (0x00044398) popup_midp_note_alarm_window_g1_ParamLimits

0x5cb0,	// (0x00044398) popup_midp_note_alarm_window_g1

0x5ce0,	// (0x000443c8) popup_midp_note_alarm_window_t1_ParamLimits

0x5ce0,	// (0x000443c8) popup_midp_note_alarm_window_t1

0x5d81,	// (0x00044469) popup_midp_note_alarm_window_t2_ParamLimits

0x5d81,	// (0x00044469) popup_midp_note_alarm_window_t2

0x5e2f,	// (0x00044517) popup_midp_note_alarm_window_t3_ParamLimits

0x5e2f,	// (0x00044517) popup_midp_note_alarm_window_t3

0x5e57,	// (0x0004453f) popup_midp_note_alarm_window_t4_ParamLimits

0x5e57,	// (0x0004453f) popup_midp_note_alarm_window_t4

0x5e77,	// (0x0004455f) popup_midp_note_alarm_window_t5_ParamLimits

0x5e77,	// (0x0004455f) popup_midp_note_alarm_window_t5

0x000a,

0xf8aa,	// (0x0004df92) popup_midp_note_alarm_window_t_ParamLimits

0xf8aa,	// (0x0004df92) popup_midp_note_alarm_window_t

0x5f55,	// (0x0004463d) wait_bar_pane_cp1_ParamLimits

0x5f55,	// (0x0004463d) wait_bar_pane_cp1

0x3f65,	// (0x0004264d) wait_anim_pane_copy1

0x3f65,	// (0x0004264d) wait_border_pane_copy1

0x594e,	// (0x00044036) wait_border_pane_g1_copy1

0x9444,	// (0x00047b2c) form_field_popup_pane_g1

0x944c,	// (0x00047b34) form_field_popup_pane_t1_ParamLimits

0x45c2,	// (0x00042caa) input_focus_pane_cp7_ParamLimits

0x45f0,	// (0x00042cd8) list_form_pane_ParamLimits

0x9466,	// (0x00047b4e) form_field_popup_wide_pane_g1

0x946e,	// (0x00047b56) form_field_popup_wide_pane_t1_ParamLimits

0x45c2,	// (0x00042caa) input_focus_pane_cp8_ParamLimits

0x45fc,	// (0x00042ce4) list_form_wide_pane_ParamLimits

0x6642,	// (0x00044d2a) aid_size_cell_graphic_pane

0x94fa,	// (0x00047be2) data_form_pane_t1_ParamLimits

0xc1b4,	// (0x0004a89c) data_form_wide_pane_t1_ParamLimits

0xbb93,	// (0x0004a27b) bg_status_flat_pane

0xb2ed,	// (0x000499d5) title_pane_t1_ParamLimits

0x3f7b,	// (0x00042663) title_pane_t2_ParamLimits

0x3fa1,	// (0x00042689) title_pane_t3_ParamLimits

0xf55d,	// (0x0004dc45) title_pane_t_ParamLimits

0x4a85,	// (0x0004316d) level_1_signal_ParamLimits

0x4a92,	// (0x0004317a) level_2_signal_ParamLimits

0x4a9f,	// (0x00043187) level_3_signal_ParamLimits

0x4aac,	// (0x00043194) level_4_signal_ParamLimits

0x4ab9,	// (0x000431a1) level_5_signal_ParamLimits

0x4ac6,	// (0x000431ae) level_6_signal_ParamLimits

0x4ad3,	// (0x000431bb) level_7_signal_ParamLimits

0x4a85,	// (0x0004316d) level_1_battery_ParamLimits

0x4a92,	// (0x0004317a) level_2_battery_ParamLimits

0x4a9f,	// (0x00043187) level_3_battery_ParamLimits

0x4aac,	// (0x00043194) level_4_battery_ParamLimits

0x4ab9,	// (0x000431a1) level_5_battery_ParamLimits

0x4ac6,	// (0x000431ae) level_6_battery_ParamLimits

0x4ad3,	// (0x000431bb) level_7_battery_ParamLimits

0x5b59,	// (0x00044241) bg_status_flat_pane_g1

0x5b61,	// (0x00044249) bg_status_flat_pane_g2

0x5b69,	// (0x00044251) bg_status_flat_pane_g3

0x5b71,	// (0x00044259) bg_status_flat_pane_g4

0x5b79,	// (0x00044261) bg_status_flat_pane_g5

0x5b81,	// (0x00044269) bg_status_flat_pane_g6

0x5b89,	// (0x00044271) bg_status_flat_pane_g7

0xb35d,	// (0x00049a45) tabs_3_active_pane_t1_ParamLimits

0xb35d,	// (0x00049a45) tabs_3_passive_pane_t1_ParamLimits

0xb377,	// (0x00049a5f) tabs_4_active_pane_t1_ParamLimits

0xb377,	// (0x00049a5f) tabs_4_1_passive_pane_t1_ParamLimits

0xb743,	// (0x00049e2b) tabs_2_active_pane_t1_ParamLimits

0xb743,	// (0x00049e2b) tabs_2_passive_pane_t1_ParamLimits

0x585b,	// (0x00043f43) bg_active_tab_pane_cp4_ParamLimits

0xb755,	// (0x00049e3d) tabs_2_long_active_pane_t1_ParamLimits

0xb768,	// (0x00049e50) bg_passive_tab_pane_cp4_ParamLimits

0xa12c,	// (0x00048814) list_single_midp_graphic_pane_t1_ParamLimits

0x585b,	// (0x00043f43) bg_active_tab_pane_cp5_ParamLimits

0xb774,	// (0x00049e5c) tabs_3_long_active_pane_t1_ParamLimits

0xb768,	// (0x00049e50) bg_passive_tab_pane_cp5_ParamLimits

0xa12c,	// (0x00048814) list_single_midp_graphic_pane_t1

0xbb93,	// (0x0004a27b) bg_status_flat_pane_ParamLimits

0x52b0,	// (0x00043998) indicator_pane_cp2_ParamLimits

0x52b0,	// (0x00043998) indicator_pane_cp2

0xbcd7,	// (0x0004a3bf) navi_pane_srt_ParamLimits

0xbcd7,	// (0x0004a3bf) navi_pane_srt

0x52d8,	// (0x000439c0) popup_clock_digital_analogue_window_cp1

0x4005,	// (0x000426ed) indicator_pane_t1

0x4fab,	// (0x00043693) copy_highlight_pane

0x4fab,	// (0x00043693) cursor_graphics_pane

0x4fab,	// (0x00043693) graphic_within_text_pane

0x4fab,	// (0x00043693) link_highlight_pane

0x6273,	// (0x0004495b) popup_preview_text_window_t5_ParamLimits

0x6273,	// (0x0004495b) popup_preview_text_window_t5

0x5026,	// (0x0004370e) cursor_digital_pane

0x5026,	// (0x0004370e) cursor_primary_pane

0x5037,	// (0x0004371f) cursor_primary_small_pane

0x503f,	// (0x00043727) cursor_secondary_pane

0x5047,	// (0x0004372f) cursor_title_pane

0x5026,	// (0x0004370e) link_highlight_digital_pane

0x502e,	// (0x00043716) link_highlight_primary_pane

0x5037,	// (0x0004371f) link_highlight_primary_small_pane

0x503f,	// (0x00043727) link_highlight_secondary_pane

0x5047,	// (0x0004372f) link_highlight_title_pane

0x5026,	// (0x0004370e) copy_highlight_digital_pane

0x5026,	// (0x0004370e) copy_highlight_primary_pane

0x5037,	// (0x0004371f) copy_highlight_primary_small_pane

0x503f,	// (0x00043727) copy_highlight_secondary_pane

0x5047,	// (0x0004372f) copy_highlight_title_pane

0x503f,	// (0x00043727) graphic_text_digital_pane

0x5bd9,	// (0x000442c1) graphic_text_primary_pane

0x5be2,	// (0x000442ca) graphic_text_primary_small_pane

0x5037,	// (0x0004371f) graphic_text_secondary_pane

0x5026,	// (0x0004370e) graphic_text_title_pane

0xbaa6,	// (0x0004a18e) cursor_primary_pane_g1

0x5bcb,	// (0x000442b3) cursor_text_primary_t1

0xbff9,	// (0x0004a6e1) cursor_primary_small_pane_g1

0x5bbd,	// (0x000442a5) cursor_text_primary_small_t1

0xbfef,	// (0x0004a6d7) cursor_primary_small_pane_g1_copy1

0x5baf,	// (0x00044297) cursor_text_primary_small_t1_copy1

0x5ba1,	// (0x00044289) cursor_text_title_t1

0xbfe5,	// (0x0004a6cd) cursor_title_pane_g1

0xbaa6,	// (0x0004a18e) cursor_digital_pane_g1

0x504f,	// (0x00043737) cursor_text_digital_t1

0x5b42,	// (0x0004422a) link_highlight_primary_pane_g1

0x5b4a,	// (0x00044232) link_highlight_primary_pane_t1

0x505d,	// (0x00043745) link_highlight_primary_small_pane_g1

0x5065,	// (0x0004374d) link_highlight_primary_small_pane_t1

0x505d,	// (0x00043745) link_highlight_secondary_pane_g1

0x5074,	// (0x0004375c) link_highlight_secondary_pane_t1

0x5ab6,	// (0x0004419e) link_highlight_title_pane_g1

0x5abe,	// (0x000441a6) link_highlight_title_pane_t1

0x5a9f,	// (0x00044187) link_highlight_digital_pane_g1

0x5aa7,	// (0x0004418f) link_highlight_digital_pane_t1

0x5993,	// (0x0004407b) copy_highlight_primary_pane_g1

0x599b,	// (0x00044083) copy_highlight_primary_pane_t1

0x596d,	// (0x00044055) copy_highlight_primary_small_pane_g1

0x5984,	// (0x0004406c) copy_highlight_primary_small_pane_t1

0x5083,	// (0x0004376b) copy_highlight_secondary_pane_g1

0x508b,	// (0x00043773) copy_highlight_secondary_pane_t1

0x596d,	// (0x00044055) copy_highlight_title_pane_g1

0x5975,	// (0x0004405d) copy_highlight_title_pane_t1

0x5993,	// (0x0004407b) copy_highlight_digital_pane_g1

0x67cc,	// (0x00044eb4) copy_highlight_digital_pane_t1

0x6720,	// (0x00044e08) graphic_text_primary_pane_g1

0x67b0,	// (0x00044e98) graphic_text_primary_pane_t1

0x67be,	// (0x00044ea6) graphic_text_primary_pane_t2

0x0001,

0xf9d9,	// (0x0004e0c1) graphic_text_primary_pane_t

0x678c,	// (0x00044e74) graphic_text_primary_small_pane_g1

0x6794,	// (0x00044e7c) graphic_text_primary_small_pane_t1

0x67a2,	// (0x00044e8a) graphic_text_primary_small_pane_t2

0x0001,

0xf9d4,	// (0x0004e0bc) graphic_text_primary_small_pane_t

0x6768,	// (0x00044e50) graphic_text_secondary_pane_g1

0x6770,	// (0x00044e58) graphic_text_secondary_pane_t1

0x677e,	// (0x00044e66) graphic_text_secondary_pane_t2

0x0001,

0xf9cf,	// (0x0004e0b7) graphic_text_secondary_pane_t

0x6744,	// (0x00044e2c) graphic_text_title_pane_g1

0x674c,	// (0x00044e34) graphic_text_title_pane_t1

0x675a,	// (0x00044e42) graphic_text_title_pane_t2

0x0001,

0xf9ca,	// (0x0004e0b2) graphic_text_title_pane_t

0x6720,	// (0x00044e08) graphic_text_digital_pane_g1

0x6728,	// (0x00044e10) graphic_text_digital_pane_t1

0x6736,	// (0x00044e1e) graphic_text_digital_pane_t2

0x0001,

0xf9c5,	// (0x0004e0ad) graphic_text_digital_pane_t

0x3fc1,	// (0x000426a9) navi_icon_pane_srt_ParamLimits

0x3fc1,	// (0x000426a9) navi_icon_pane_srt

0x3f65,	// (0x0004264d) navi_midp_pane_srt

0x3f65,	// (0x0004264d) navi_navi_pane_srt

0x3fc1,	// (0x000426a9) navi_text_pane_srt_ParamLimits

0x3fc1,	// (0x000426a9) navi_text_pane_srt

0x66eb,	// (0x00044dd3) navi_navi_icon_text_pane_srt

0x6705,	// (0x00044ded) navi_navi_pane_srt_g1_ParamLimits

0x6705,	// (0x00044ded) navi_navi_pane_srt_g1

0x66f3,	// (0x00044ddb) navi_navi_pane_srt_g2_ParamLimits

0x66f3,	// (0x00044ddb) navi_navi_pane_srt_g2

0x0001,

0xf9c0,	// (0x0004e0a8) navi_navi_pane_srt_g_ParamLimits

0xf9c0,	// (0x0004e0a8) navi_navi_pane_srt_g

0x6717,	// (0x00044dff) navi_navi_tabs_pane_srt

0x66eb,	// (0x00044dd3) navi_navi_text_pane_srt

0x66eb,	// (0x00044dd3) navi_navi_volume_pane_srt

0x66dc,	// (0x00044dc4) navi_navi_text_pane_srt_t1

0xa4ac,	// (0x00048b94) navi_navi_volume_pane_srt_g1

0xa4b4,	// (0x00048b9c) volume_small_pane_srt_ParamLimits

0xa4b4,	// (0x00048b9c) volume_small_pane_srt

0x98f5,	// (0x00047fdd) volume_small_pane_srt_g1_ParamLimits

0x98f5,	// (0x00047fdd) volume_small_pane_srt_g1

0x9905,	// (0x00047fed) volume_small_pane_srt_g2_ParamLimits

0x9905,	// (0x00047fed) volume_small_pane_srt_g2

0x9916,	// (0x00047ffe) volume_small_pane_srt_g3_ParamLimits

0x9916,	// (0x00047ffe) volume_small_pane_srt_g3

0x9927,	// (0x0004800f) volume_small_pane_srt_g4_ParamLimits

0x9927,	// (0x0004800f) volume_small_pane_srt_g4

0x9938,	// (0x00048020) volume_small_pane_srt_g5_ParamLimits

0x9938,	// (0x00048020) volume_small_pane_srt_g5

0x9949,	// (0x00048031) volume_small_pane_srt_g6_ParamLimits

0x9949,	// (0x00048031) volume_small_pane_srt_g6

0x995a,	// (0x00048042) volume_small_pane_srt_g7_ParamLimits

0x995a,	// (0x00048042) volume_small_pane_srt_g7

0x996b,	// (0x00048053) volume_small_pane_srt_g8_ParamLimits

0x996b,	// (0x00048053) volume_small_pane_srt_g8

0x997c,	// (0x00048064) volume_small_pane_srt_g9_ParamLimits

0x997c,	// (0x00048064) volume_small_pane_srt_g9

0x998d,	// (0x00048075) volume_small_pane_srt_g10_ParamLimits

0x998d,	// (0x00048075) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x0004de50) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x0004de50) volume_small_pane_srt_g

0x4239,	// (0x00042921) query_popup_data_pane_cp2

0x66c2,	// (0x00044daa) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x66c2,	// (0x00044daa) navi_navi_icon_text_pane_srt_t1

0x5bd9,	// (0x000442c1) navi_tabs_2_long_pane_srt

0x5bd9,	// (0x000442c1) navi_tabs_2_pane_srt

0x5bd9,	// (0x000442c1) navi_tabs_3_long_pane_srt

0x5bd9,	// (0x000442c1) navi_tabs_3_pane_srt

0x5bd9,	// (0x000442c1) navi_tabs_4_pane_srt

0xa48c,	// (0x00048b74) tabs_2_active_pane_srt_ParamLimits

0xa48c,	// (0x00048b74) tabs_2_active_pane_srt

0xa49c,	// (0x00048b84) tabs_2_passive_pane_srt_ParamLimits

0xa49c,	// (0x00048b84) tabs_2_passive_pane_srt

0x4726,	// (0x00042e0e) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4726,	// (0x00042e0e) bg_passive_tab_pane_cp1_srt

0x66a9,	// (0x00044d91) bg_passive_tab_pane_g1_cp1_srt

0x4cd6,	// (0x000433be) bg_passive_tab_pane_g2_cp1_srt

0x66a0,	// (0x00044d88) bg_passive_tab_pane_g3_cp1_srt

0x3fc1,	// (0x000426a9) bg_active_tab_pane_cp1_srt_ParamLimits

0x3fc1,	// (0x000426a9) bg_active_tab_pane_cp1_srt

0x66b2,	// (0x00044d9a) tabs_2_active_pane_srt_g1

0xca8f,	// (0x0004b177) tabs_2_active_pane_srt_t1_ParamLimits

0xca8f,	// (0x0004b177) tabs_2_active_pane_srt_t1

0x66a9,	// (0x00044d91) bg_active_tab_pane_g1_cp1_srt

0x4cd6,	// (0x000433be) bg_active_tab_pane_g2_cp1_srt

0x66a0,	// (0x00044d88) bg_active_tab_pane_g3_cp1_srt

0xa459,	// (0x00048b41) tabs_3_active_pane_srt_ParamLimits

0xa459,	// (0x00048b41) tabs_3_active_pane_srt

0xa46a,	// (0x00048b52) tabs_3_passive_pane_cp_srt_ParamLimits

0xa46a,	// (0x00048b52) tabs_3_passive_pane_cp_srt

0xa47b,	// (0x00048b63) tabs_3_passive_pane_srt_ParamLimits

0xa47b,	// (0x00048b63) tabs_3_passive_pane_srt

0x4726,	// (0x00042e0e) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4726,	// (0x00042e0e) bg_passive_tab_pane_cp2_srt

0x50a3,	// (0x0004378b) bg_passive_tab_pane_g1_cp2_srt

0x4cd6,	// (0x000433be) bg_passive_tab_pane_g2_cp2_srt

0x509a,	// (0x00043782) bg_passive_tab_pane_g3_cp2_srt

0x3fc1,	// (0x000426a9) bg_active_tab_pane_cp2_srt_ParamLimits

0x3fc1,	// (0x000426a9) bg_active_tab_pane_cp2_srt

0x6698,	// (0x00044d80) tabs_3_active_pane_srt_g1

0xca7d,	// (0x0004b165) tabs_3_active_pane_srt_t1_ParamLimits

0xca7d,	// (0x0004b165) tabs_3_active_pane_srt_t1

0x50a3,	// (0x0004378b) bg_active_tab_pane_g1_cp2_srt

0x4cd6,	// (0x000433be) bg_active_tab_pane_g2_cp2_srt

0x509a,	// (0x00043782) bg_active_tab_pane_g3_cp2_srt

0xa411,	// (0x00048af9) tabs_4_active_pane_srt_ParamLimits

0xa411,	// (0x00048af9) tabs_4_active_pane_srt

0xa423,	// (0x00048b0b) tabs_4_passive_pane_cp2_srt_ParamLimits

0xa423,	// (0x00048b0b) tabs_4_passive_pane_cp2_srt

0x9aec,	// (0x000481d4) aid_size_cell_toolbar

0xb768,	// (0x00049e50) main_idle_act_pane_ParamLimits

0x9c93,	// (0x0004837b) popup_large_graphic_colour_window_ParamLimits

0x9ff2,	// (0x000486da) popup_toolbar_window_ParamLimits

0x9ff2,	// (0x000486da) popup_toolbar_window

0x65bf,	// (0x00044ca7) list_single_graphic_2heading_pane_ParamLimits

0x65bf,	// (0x00044ca7) list_single_graphic_2heading_pane

0x48d0,	// (0x00042fb8) aid_size_cell_apps_grid_lsc_pane

0x48e2,	// (0x00042fca) aid_size_cell_apps_grid_prt_pane

0x4726,	// (0x00042e0e) bg_wml_button_pane_cp1_ParamLimits

0x4726,	// (0x00042e0e) bg_wml_button_pane_cp1

0xbf3a,	// (0x0004a622) form_midp_field_text_pane_t1_ParamLimits

0x54cd,	// (0x00043bb5) input_focus_pane_cp050_ParamLimits

0x563d,	// (0x00043d25) list_midp_form_text_pane_ParamLimits

0x561a,	// (0x00043d02) input_focus_pane_cp051_ParamLimits

0x562e,	// (0x00043d16) list_midp_choice_pane_ParamLimits

0xbe79,	// (0x0004a561) list_single_2graphic_pane_cp3_ParamLimits

0xbe79,	// (0x0004a561) list_single_2graphic_pane_cp3

0xbea5,	// (0x0004a58d) list_single_midp_graphic_pane_ParamLimits

0xbea5,	// (0x0004a58d) list_single_midp_graphic_pane

0x89f4,	// (0x000470dc) list_single_graphic_2heading_pane_g1_ParamLimits

0x89f4,	// (0x000470dc) list_single_graphic_2heading_pane_g1

0x8a00,	// (0x000470e8) list_single_graphic_2heading_pane_g4_ParamLimits

0x8a00,	// (0x000470e8) list_single_graphic_2heading_pane_g4

0x8a0c,	// (0x000470f4) list_single_graphic_2heading_pane_g5_ParamLimits

0x8a0c,	// (0x000470f4) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x0004dea3) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x0004dea3) list_single_graphic_2heading_pane_g

0x8a18,	// (0x00047100) list_single_graphic_2heading_pane_t1_ParamLimits

0x8a18,	// (0x00047100) list_single_graphic_2heading_pane_t1

0x8a2c,	// (0x00047114) list_single_graphic_2heading_pane_t2_ParamLimits

0x8a2c,	// (0x00047114) list_single_graphic_2heading_pane_t2

0x8a46,	// (0x0004712e) list_single_graphic_2heading_pane_t3_ParamLimits

0x8a46,	// (0x0004712e) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x0004deaa) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x0004deaa) list_single_graphic_2heading_pane_t

0x531b,	// (0x00043a03) bg_popup_sub_pane_cp2

0x5345,	// (0x00043a2d) grid_toobar_pane

0xa09d,	// (0x00048785) cell_toolbar_pane_ParamLimits

0xa09d,	// (0x00048785) cell_toolbar_pane

0x5381,	// (0x00043a69) cell_toolbar_pane_g1_ParamLimits

0x5381,	// (0x00043a69) cell_toolbar_pane_g1

0x5395,	// (0x00043a7d) cell_toolbar_pane_g2_ParamLimits

0x5395,	// (0x00043a7d) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x0004deb8) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x0004deb8) cell_toolbar_pane_g

0x53b7,	// (0x00043a9f) grid_highlight_pane_cp2_ParamLimits

0x53b7,	// (0x00043a9f) grid_highlight_pane_cp2

0x53d1,	// (0x00043ab9) toolbar_button_pane

0x53dd,	// (0x00043ac5) toolbar_button_pane_g1

0x53ed,	// (0x00043ad5) toolbar_button_pane_g2

0x53e5,	// (0x00043acd) toolbar_button_pane_g3

0x53fd,	// (0x00043ae5) toolbar_button_pane_g4

0x53f5,	// (0x00043add) toolbar_button_pane_g5

0x5405,	// (0x00043aed) toolbar_button_pane_g6

0x540d,	// (0x00043af5) toolbar_button_pane_g7

0x541d,	// (0x00043b05) toolbar_button_pane_g8

0x5415,	// (0x00043afd) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x0004debd) toolbar_button_pane_g

0xa0d5,	// (0x000487bd) list_single_2graphic_pane_g1_cp3_ParamLimits

0xa0d5,	// (0x000487bd) list_single_2graphic_pane_g1_cp3

0xa0e1,	// (0x000487c9) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa0e1,	// (0x000487c9) list_single_2graphic_pane_g2_cp3

0xa0f2,	// (0x000487da) list_single_2graphic_pane_g3_cp3

0xa0fa,	// (0x000487e2) list_single_2graphic_pane_g4_cp3_ParamLimits

0xa0fa,	// (0x000487e2) list_single_2graphic_pane_g4_cp3

0xa106,	// (0x000487ee) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa106,	// (0x000487ee) list_single_2graphic_pane_t1_cp3

0xa120,	// (0x00048808) list_single_midp_graphic_pane_g2_ParamLimits

0xa120,	// (0x00048808) list_single_midp_graphic_pane_g2

0x89e4,	// (0x000470cc) aid_zoom_text_primary

0x89ec,	// (0x000470d4) aid_zoom_text_secondary

0x5157,	// (0x0004383f) status_small_pane_g7_ParamLimits

0x5157,	// (0x0004383f) status_small_pane_g7

0x517a,	// (0x00043862) status_small_pane_t1_ParamLimits

0xb2d0,	// (0x000499b8) title_pane_g2

0x0003,

0xf554,	// (0x0004dc3c) title_pane_g

0xb49d,	// (0x00049b85) aid_size_cell_colour_1_pane_ParamLimits

0xb49d,	// (0x00049b85) aid_size_cell_colour_1_pane

0xb4b1,	// (0x00049b99) aid_size_cell_colour_2_pane_ParamLimits

0xb4b1,	// (0x00049b99) aid_size_cell_colour_2_pane

0xb4c5,	// (0x00049bad) aid_size_cell_colour_3_pane_ParamLimits

0xb4c5,	// (0x00049bad) aid_size_cell_colour_3_pane

0xb4d9,	// (0x00049bc1) aid_size_cell_colour_4_pane_ParamLimits

0xb4d9,	// (0x00049bc1) aid_size_cell_colour_4_pane

0x9551,	// (0x00047c39) title_pane_stacon_g1_ParamLimits

0x9551,	// (0x00047c39) title_pane_stacon_g1

0x59f2,	// (0x000440da) popup_note_wait_window_g3_ParamLimits

0x59f2,	// (0x000440da) popup_note_wait_window_g3

0x5a68,	// (0x00044150) popup_note_wait_window_t5_ParamLimits

0x5a68,	// (0x00044150) popup_note_wait_window_t5

0x3f65,	// (0x0004264d) main_feb_china_hwr_fs_writing_pane

0x9b7e,	// (0x00048266) popup_feb_china_hwr_fs_window_ParamLimits

0x9b7e,	// (0x00048266) popup_feb_china_hwr_fs_window

0xa142,	// (0x0004882a) aid_size_cell_hwr_fs_ParamLimits

0xa142,	// (0x0004882a) aid_size_cell_hwr_fs

0x54cd,	// (0x00043bb5) bg_popup_sub_pane_cp3_ParamLimits

0x54cd,	// (0x00043bb5) bg_popup_sub_pane_cp3

0xa157,	// (0x0004883f) grid_hwr_fs_pane_ParamLimits

0xa157,	// (0x0004883f) grid_hwr_fs_pane

0xa16f,	// (0x00048857) linegrid_hwr_fs_pane_ParamLimits

0xa16f,	// (0x00048857) linegrid_hwr_fs_pane

0xa17f,	// (0x00048867) cell_hwr_fs_pane_ParamLimits

0xa17f,	// (0x00048867) cell_hwr_fs_pane

0x54d9,	// (0x00043bc1) linegrid_hwr_fs_pane_g1_ParamLimits

0x54d9,	// (0x00043bc1) linegrid_hwr_fs_pane_g1

0xbe4d,	// (0x0004a535) linegrid_hwr_fs_pane_g2_ParamLimits

0xbe4d,	// (0x0004a535) linegrid_hwr_fs_pane_g2

0x54e5,	// (0x00043bcd) linegrid_hwr_fs_pane_g3_ParamLimits

0x54e5,	// (0x00043bcd) linegrid_hwr_fs_pane_g3

0xa1a1,	// (0x00048889) linegrid_hwr_fs_pane_g4_ParamLimits

0xa1a1,	// (0x00048889) linegrid_hwr_fs_pane_g4

0xa1bb,	// (0x000488a3) linegrid_hwr_fs_pane_g5_ParamLimits

0xa1bb,	// (0x000488a3) linegrid_hwr_fs_pane_g5

0x0004,

0xf800,	// (0x0004dee8) linegrid_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0004dee8) linegrid_hwr_fs_pane_g

0x54f1,	// (0x00043bd9) cell_hwr_fs_pane_g1_ParamLimits

0x54f1,	// (0x00043bd9) cell_hwr_fs_pane_g1

0x52e9,	// (0x000439d1) cell_hwr_fs_pane_g2_ParamLimits

0x52e9,	// (0x000439d1) cell_hwr_fs_pane_g2

0xbe5f,	// (0x0004a547) cell_hwr_fs_pane_g3_ParamLimits

0xbe5f,	// (0x0004a547) cell_hwr_fs_pane_g3

0xbe6c,	// (0x0004a554) cell_hwr_fs_pane_g4_ParamLimits

0xbe6c,	// (0x0004a554) cell_hwr_fs_pane_g4

0x0003,

0xf80b,	// (0x0004def3) cell_hwr_fs_pane_g_ParamLimits

0xf80b,	// (0x0004def3) cell_hwr_fs_pane_g

0xa1d1,	// (0x000488b9) cell_hwr_fs_pane_t1

0x3f65,	// (0x0004264d) grid_highlight_pane_cp6

0x3f65,	// (0x0004264d) main_idle_act2_pane

0x46d5,	// (0x00042dbd) aid_inside_area_popup_secondary

0xc060,	// (0x0004a748) aid_inside_area_window_primary_ParamLimits

0xc060,	// (0x0004a748) aid_inside_area_window_primary

0x67db,	// (0x00044ec3) ai2_news_ticker_pane

0x67e3,	// (0x00044ecb) aid_size_cell_ai1_link_ParamLimits

0x67e3,	// (0x00044ecb) aid_size_cell_ai1_link

0x67fd,	// (0x00044ee5) popup_ai2_data_window_ParamLimits

0x67fd,	// (0x00044ee5) popup_ai2_data_window

0x6811,	// (0x00044ef9) popup_ai2_link_window_ParamLimits

0x6811,	// (0x00044ef9) popup_ai2_link_window

0x54cd,	// (0x00043bb5) bg_popup_sub_pane_cp4_ParamLimits

0x54cd,	// (0x00043bb5) bg_popup_sub_pane_cp4

0x6825,	// (0x00044f0d) grid_ai2_link_pane_ParamLimits

0x6825,	// (0x00044f0d) grid_ai2_link_pane

0x683c,	// (0x00044f24) popup_ai2_link_window_g1_ParamLimits

0x683c,	// (0x00044f24) popup_ai2_link_window_g1

0x6848,	// (0x00044f30) popup_ai2_link_window_g2_ParamLimits

0x6848,	// (0x00044f30) popup_ai2_link_window_g2

0x0001,

0xf9de,	// (0x0004e0c6) popup_ai2_link_window_g_ParamLimits

0xf9de,	// (0x0004e0c6) popup_ai2_link_window_g

0x6857,	// (0x00044f3f) ai2_mp_button_pane

0x685f,	// (0x00044f47) ai2_mp_volume_pane

0x561a,	// (0x00043d02) bg_popup_sub_pane_cp5_ParamLimits

0x561a,	// (0x00043d02) bg_popup_sub_pane_cp5

0x6867,	// (0x00044f4f) heading_ai2_gene_pane_ParamLimits

0x6867,	// (0x00044f4f) heading_ai2_gene_pane

0x6873,	// (0x00044f5b) list_ai2_gene_pane_ParamLimits

0x6873,	// (0x00044f5b) list_ai2_gene_pane

0x68bb,	// (0x00044fa3) cell_ai2_link_pane_ParamLimits

0x68bb,	// (0x00044fa3) cell_ai2_link_pane

0x68d1,	// (0x00044fb9) cell_ai2_link_pane_g1

0x3f65,	// (0x0004264d) grid_highlight_pane_cp7

0xa4c9,	// (0x00048bb1) ai2_mp_volume_pane_g1

0x69aa,	// (0x00045092) ai2_mp_volume_pane_g2

0x6917,	// (0x00044fff) list_ai2_gene_pane_t1

0x69a2,	// (0x0004508a) ai2_mp_volume_pane_g3

0x0002,

0xf9f7,	// (0x0004e0df) ai2_mp_volume_pane_g

0xa4d1,	// (0x00048bb9) volume_small_pane_cp3

0x69b2,	// (0x0004509a) aid_size_cell_ai2_button

0x69ba,	// (0x000450a2) grid_ai2_button_pane

0x69c3,	// (0x000450ab) cell_ai2_button_pane_ParamLimits

0x69c3,	// (0x000450ab) cell_ai2_button_pane

0x3f5b,	// (0x00042643) cell_ai2_button_pane_g1

0x3f65,	// (0x0004264d) grid_highlight_pane_cp8

0x6962,	// (0x0004504a) ai2_gene_pane_t1_ParamLimits

0x6962,	// (0x0004504a) ai2_gene_pane_t1

0x9ae2,	// (0x000481ca) aid_height_parent_landscape

0xc7cb,	// (0x0004aeb3) aid_height_set_list

0x5ecc,	// (0x000445b4) aid_size_parent

0x6642,	// (0x00044d2a) aid_size_cell_graphic_pane_ParamLimits

0x6883,	// (0x00044f6b) popup_ai2_data_window_g1_ParamLimits

0x6883,	// (0x00044f6b) popup_ai2_data_window_g1

0x688f,	// (0x00044f77) ai2_news_ticker_pane_g1

0x6897,	// (0x00044f7f) ai2_news_ticker_pane_g2

0x0001,

0xf9e3,	// (0x0004e0cb) ai2_news_ticker_pane_g

0x689f,	// (0x00044f87) ai2_news_ticker_pane_t1

0x68ad,	// (0x00044f95) ai2_news_ticker_pane_t2

0x0001,

0xf9e8,	// (0x0004e0d0) ai2_news_ticker_pane_t

0x68da,	// (0x00044fc2) heading_ai2_gene_pane_g1

0x68e2,	// (0x00044fca) heading_ai2_gene_pane_t1_ParamLimits

0x68e2,	// (0x00044fca) heading_ai2_gene_pane_t1

0x68f7,	// (0x00044fdf) list_highlight_pane_cp6

0x68ff,	// (0x00044fe7) ai2_gene_pane_ParamLimits

0x68ff,	// (0x00044fe7) ai2_gene_pane

0x6925,	// (0x0004500d) list_ai2_gene_pane_t2

0x0001,

0xf9ed,	// (0x0004e0d5) list_ai2_gene_pane_t

0x6933,	// (0x0004501b) list_highlight_pane_cp8_ParamLimits

0x6933,	// (0x0004501b) list_highlight_pane_cp8

0x6944,	// (0x0004502c) ai2_gene_pane_g1_ParamLimits

0x6944,	// (0x0004502c) ai2_gene_pane_g1

0x6956,	// (0x0004503e) ai2_gene_pane_g2_ParamLimits

0x6956,	// (0x0004503e) ai2_gene_pane_g2

0x0001,

0xf9f2,	// (0x0004e0da) ai2_gene_pane_g_ParamLimits

0xf9f2,	// (0x0004e0da) ai2_gene_pane_g

0x454c,	// (0x00042c34) scroll_pane_cp12

0x9aa1,	// (0x00048189) control_pane_t3_ParamLimits

0x9aa1,	// (0x00048189) control_pane_t3

0x516b,	// (0x00043853) status_small_pane_g8_ParamLimits

0x516b,	// (0x00043853) status_small_pane_g8

0x9c60,	// (0x00048348) popup_find_window_ParamLimits

0x9e73,	// (0x0004855b) popup_note_image_window_ParamLimits

0xbe01,	// (0x0004a4e9) list_double2_graphic_pane_vc_g1_ParamLimits

0xbe01,	// (0x0004a4e9) list_double2_graphic_pane_vc_g1

0xb5c3,	// (0x00049cab) list_double2_graphic_pane_vc_g2_ParamLimits

0xb5c3,	// (0x00049cab) list_double2_graphic_pane_vc_g2

0xb5cf,	// (0x00049cb7) list_double2_graphic_pane_vc_g3_ParamLimits

0xb5cf,	// (0x00049cb7) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x0004deb1) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x0004deb1) list_double2_graphic_pane_vc_g

0xbe0d,	// (0x0004a4f5) list_double2_graphic_pane_vc_t1_ParamLimits

0xbe0d,	// (0x0004a4f5) list_double2_graphic_pane_vc_t1

0xb5c3,	// (0x00049cab) list_single_heading_pane_vc_g1_ParamLimits

0xb5c3,	// (0x00049cab) list_single_heading_pane_vc_g1

0xb5cf,	// (0x00049cb7) list_single_heading_pane_vc_g2_ParamLimits

0xb5cf,	// (0x00049cb7) list_single_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x0004ded2) list_single_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x0004ded2) list_single_heading_pane_vc_g

0xbe23,	// (0x0004a50b) list_single_heading_pane_vc_t1_ParamLimits

0xbe23,	// (0x0004a50b) list_single_heading_pane_vc_t1

0xbe39,	// (0x0004a521) list_single_heading_pane_vc_t2_ParamLimits

0xbe39,	// (0x0004a521) list_single_heading_pane_vc_t2

0x0001,

0xf7ef,	// (0x0004ded7) list_single_heading_pane_vc_t_ParamLimits

0xf7ef,	// (0x0004ded7) list_single_heading_pane_vc_t

0x5425,	// (0x00043b0d) list_setting_number_pane_vc_g1_ParamLimits

0x5425,	// (0x00043b0d) list_setting_number_pane_vc_g1

0x5431,	// (0x00043b19) list_setting_number_pane_vc_g2_ParamLimits

0x5431,	// (0x00043b19) list_setting_number_pane_vc_g2

0x0001,

0xf7f4,	// (0x0004dedc) list_setting_number_pane_vc_g_ParamLimits

0xf7f4,	// (0x0004dedc) list_setting_number_pane_vc_g

0x543d,	// (0x00043b25) list_setting_number_pane_vc_t1_ParamLimits

0x543d,	// (0x00043b25) list_setting_number_pane_vc_t1

0x5451,	// (0x00043b39) list_setting_number_pane_vc_t2_ParamLimits

0x5451,	// (0x00043b39) list_setting_number_pane_vc_t2

0x546b,	// (0x00043b53) list_setting_number_pane_vc_t3_ParamLimits

0x546b,	// (0x00043b53) list_setting_number_pane_vc_t3

0x0002,

0xf7f9,	// (0x0004dee1) list_setting_number_pane_vc_t_ParamLimits

0xf7f9,	// (0x0004dee1) list_setting_number_pane_vc_t

0x5491,	// (0x00043b79) set_value_pane_vc_ParamLimits

0x5491,	// (0x00043b79) set_value_pane_vc

0x65bf,	// (0x00044ca7) list_double2_graphic_pane_vc_ParamLimits

0x65bf,	// (0x00044ca7) list_double2_graphic_pane_vc

0x65bf,	// (0x00044ca7) list_double2_large_graphic_pane_vc_ParamLimits

0x65bf,	// (0x00044ca7) list_double2_large_graphic_pane_vc

0x65bf,	// (0x00044ca7) list_double2_pane_vc_ParamLimits

0x65bf,	// (0x00044ca7) list_double2_pane_vc

0x65bf,	// (0x00044ca7) list_double_graphic_heading_pane_vc_ParamLimits

0x65bf,	// (0x00044ca7) list_double_graphic_heading_pane_vc

0x65bf,	// (0x00044ca7) list_double_graphic_pane_vc_ParamLimits

0x65bf,	// (0x00044ca7) list_double_graphic_pane_vc

0x65bf,	// (0x00044ca7) list_double_heading_pane_vc_ParamLimits

0x65bf,	// (0x00044ca7) list_double_heading_pane_vc

0x65bf,	// (0x00044ca7) list_double_large_graphic_pane_vc_ParamLimits

0x65bf,	// (0x00044ca7) list_double_large_graphic_pane_vc

0x65bf,	// (0x00044ca7) list_double_number_pane_vc_ParamLimits

0x65bf,	// (0x00044ca7) list_double_number_pane_vc

0x65bf,	// (0x00044ca7) list_double_pane_vc_ParamLimits

0x65bf,	// (0x00044ca7) list_double_pane_vc

0x65bf,	// (0x00044ca7) list_double_time_pane_vc_ParamLimits

0x65bf,	// (0x00044ca7) list_double_time_pane_vc

0x65bf,	// (0x00044ca7) list_setting_number_pane_vc_ParamLimits

0x65bf,	// (0x00044ca7) list_setting_number_pane_vc

0x65bf,	// (0x00044ca7) list_setting_pane_vc_ParamLimits

0x65bf,	// (0x00044ca7) list_setting_pane_vc

0x65bf,	// (0x00044ca7) list_single_graphic_heading_pane_vc_ParamLimits

0x65bf,	// (0x00044ca7) list_single_graphic_heading_pane_vc

0x65bf,	// (0x00044ca7) list_single_heading_pane_vc_ParamLimits

0x65bf,	// (0x00044ca7) list_single_heading_pane_vc

0xc946,	// (0x0004b02e) list_single_number_heading_pane_vc_ParamLimits

0xc946,	// (0x0004b02e) list_single_number_heading_pane_vc

0xbe01,	// (0x0004a4e9) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xbe01,	// (0x0004a4e9) list_double_graphic_heading_pane_vc_g1

0xb5c3,	// (0x00049cab) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xb5c3,	// (0x00049cab) list_double_graphic_heading_pane_vc_g2

0xb5cf,	// (0x00049cb7) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xb5cf,	// (0x00049cb7) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c9,	// (0x0004deb1) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0004deb1) list_double_graphic_heading_pane_vc_g

0xc238,	// (0x0004a920) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xc238,	// (0x0004a920) list_double_graphic_heading_pane_vc_t1

0xbe23,	// (0x0004a50b) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xbe23,	// (0x0004a50b) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fe,	// (0x0004e0e6) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fe,	// (0x0004e0e6) list_double_graphic_heading_pane_vc_t

0x5425,	// (0x00043b0d) list_setting_pane_vc_g1_ParamLimits

0x5425,	// (0x00043b0d) list_setting_pane_vc_g1

0x5431,	// (0x00043b19) list_setting_pane_vc_g2_ParamLimits

0x5431,	// (0x00043b19) list_setting_pane_vc_g2

0x0001,

0xf7f4,	// (0x0004dedc) list_setting_pane_vc_g_ParamLimits

0xf7f4,	// (0x0004dedc) list_setting_pane_vc_g

0x6bfb,	// (0x000452e3) list_setting_pane_vc_t1_ParamLimits

0x6bfb,	// (0x000452e3) list_setting_pane_vc_t1

0x6c15,	// (0x000452fd) list_setting_pane_vc_t2_ParamLimits

0x6c15,	// (0x000452fd) list_setting_pane_vc_t2

0x0001,

0xfa41,	// (0x0004e129) list_setting_pane_vc_t_ParamLimits

0xfa41,	// (0x0004e129) list_setting_pane_vc_t

0x5491,	// (0x00043b79) set_value_pane_cp_vc_ParamLimits

0x5491,	// (0x00043b79) set_value_pane_cp_vc

0xb5c3,	// (0x00049cab) list_single_number_heading_pane_vc_g1_ParamLimits

0xb5c3,	// (0x00049cab) list_single_number_heading_pane_vc_g1

0xb5cf,	// (0x00049cb7) list_single_number_heading_pane_vc_g2_ParamLimits

0xb5cf,	// (0x00049cb7) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x0004ded2) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x0004ded2) list_single_number_heading_pane_vc_g

0xbe23,	// (0x0004a50b) list_single_number_heading_pane_vc_t1_ParamLimits

0xbe23,	// (0x0004a50b) list_single_number_heading_pane_vc_t1

0xc24c,	// (0x0004a934) list_single_number_heading_pane_vc_t2_ParamLimits

0xc24c,	// (0x0004a934) list_single_number_heading_pane_vc_t2

0xc260,	// (0x0004a948) list_single_number_heading_pane_vc_t3_ParamLimits

0xc260,	// (0x0004a948) list_single_number_heading_pane_vc_t3

0x0002,

0xfa46,	// (0x0004e12e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa46,	// (0x0004e12e) list_single_number_heading_pane_vc_t

0xbe01,	// (0x0004a4e9) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xbe01,	// (0x0004a4e9) list_single_graphic_heading_pane_vc_g1

0xb5c3,	// (0x00049cab) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xb5c3,	// (0x00049cab) list_single_graphic_heading_pane_vc_g4

0xb5cf,	// (0x00049cb7) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xb5cf,	// (0x00049cb7) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x0004deb1) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0004deb1) list_single_graphic_heading_pane_vc_g

0xbe23,	// (0x0004a50b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xbe23,	// (0x0004a50b) list_single_graphic_heading_pane_vc_t1

0xc272,	// (0x0004a95a) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xc272,	// (0x0004a95a) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4d,	// (0x0004e135) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4d,	// (0x0004e135) list_single_graphic_heading_pane_vc_t

0xb5c3,	// (0x00049cab) list_double2_pane_vc_g1_ParamLimits

0xb5c3,	// (0x00049cab) list_double2_pane_vc_g1

0xb5cf,	// (0x00049cb7) list_double2_pane_vc_g2_ParamLimits

0xb5cf,	// (0x00049cb7) list_double2_pane_vc_g2

0x0001,

0xf7ea,	// (0x0004ded2) list_double2_pane_vc_g_ParamLimits

0xf7ea,	// (0x0004ded2) list_double2_pane_vc_g

0xc286,	// (0x0004a96e) list_double2_pane_vc_t1_ParamLimits

0xc286,	// (0x0004a96e) list_double2_pane_vc_t1

0xcac3,	// (0x0004b1ab) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xcac3,	// (0x0004b1ab) list_double2_large_graphic_pane_vc_g1

0xb5c3,	// (0x00049cab) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xb5c3,	// (0x00049cab) list_double2_large_graphic_pane_vc_g2

0xb5cf,	// (0x00049cb7) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xb5cf,	// (0x00049cb7) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa52,	// (0x0004e13a) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa52,	// (0x0004e13a) list_double2_large_graphic_pane_vc_g

0xc29c,	// (0x0004a984) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xc29c,	// (0x0004a984) list_double2_large_graphic_pane_vc_t1

0xc2b2,	// (0x0004a99a) list_double_time_pane_vc_g1_ParamLimits

0xc2b2,	// (0x0004a99a) list_double_time_pane_vc_g1

0xc2be,	// (0x0004a9a6) list_double_time_pane_vc_g2_ParamLimits

0xc2be,	// (0x0004a9a6) list_double_time_pane_vc_g2

0x0001,

0xfa59,	// (0x0004e141) list_double_time_pane_vc_g_ParamLimits

0xfa59,	// (0x0004e141) list_double_time_pane_vc_g

0xc2ca,	// (0x0004a9b2) list_double_time_pane_vc_t1_ParamLimits

0xc2ca,	// (0x0004a9b2) list_double_time_pane_vc_t1

0xc2e8,	// (0x0004a9d0) list_double_time_pane_vc_t2_ParamLimits

0xc2e8,	// (0x0004a9d0) list_double_time_pane_vc_t2

0xc337,	// (0x0004aa1f) list_double_time_pane_vc_t3_ParamLimits

0xc337,	// (0x0004aa1f) list_double_time_pane_vc_t3

0xc349,	// (0x0004aa31) list_double_time_pane_vc_t4_ParamLimits

0xc349,	// (0x0004aa31) list_double_time_pane_vc_t4

0x0003,

0xfa5e,	// (0x0004e146) list_double_time_pane_vc_t_ParamLimits

0xfa5e,	// (0x0004e146) list_double_time_pane_vc_t

0xb5c3,	// (0x00049cab) list_double_pane_vc_g1_ParamLimits

0xb5c3,	// (0x00049cab) list_double_pane_vc_g1

0xb5cf,	// (0x00049cb7) list_double_pane_vc_g2_ParamLimits

0xb5cf,	// (0x00049cb7) list_double_pane_vc_g2

0x0001,

0xf7ea,	// (0x0004ded2) list_double_pane_vc_g_ParamLimits

0xf7ea,	// (0x0004ded2) list_double_pane_vc_g

0xc35d,	// (0x0004aa45) list_double_pane_vc_t1_ParamLimits

0xc35d,	// (0x0004aa45) list_double_pane_vc_t1

0xc36f,	// (0x0004aa57) list_double_pane_vc_t2_ParamLimits

0xc36f,	// (0x0004aa57) list_double_pane_vc_t2

0x0001,

0xfa67,	// (0x0004e14f) list_double_pane_vc_t_ParamLimits

0xfa67,	// (0x0004e14f) list_double_pane_vc_t

0xb5c3,	// (0x00049cab) list_double_number_pane_vc_g1_ParamLimits

0xb5c3,	// (0x00049cab) list_double_number_pane_vc_g1

0xb5cf,	// (0x00049cb7) list_double_number_pane_vc_g2_ParamLimits

0xb5cf,	// (0x00049cb7) list_double_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x0004ded2) list_double_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x0004ded2) list_double_number_pane_vc_g

0xc387,	// (0x0004aa6f) list_double_number_pane_vc_t1_ParamLimits

0xc387,	// (0x0004aa6f) list_double_number_pane_vc_t1

0xc39b,	// (0x0004aa83) list_double_number_pane_vc_t2_ParamLimits

0xc39b,	// (0x0004aa83) list_double_number_pane_vc_t2

0xc36f,	// (0x0004aa57) list_double_number_pane_vc_t3_ParamLimits

0xc36f,	// (0x0004aa57) list_double_number_pane_vc_t3

0x0002,

0xfa6c,	// (0x0004e154) list_double_number_pane_vc_t_ParamLimits

0xfa6c,	// (0x0004e154) list_double_number_pane_vc_t

0xcacf,	// (0x0004b1b7) list_double_large_graphic_pane_vc_g1_ParamLimits

0xcacf,	// (0x0004b1b7) list_double_large_graphic_pane_vc_g1

0xcae0,	// (0x0004b1c8) list_double_large_graphic_pane_vc_g2_ParamLimits

0xcae0,	// (0x0004b1c8) list_double_large_graphic_pane_vc_g2

0xb5cf,	// (0x00049cb7) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb5cf,	// (0x00049cb7) list_double_large_graphic_pane_vc_g3

0xc3ad,	// (0x0004aa95) list_double_large_graphic_pane_vc_g4_ParamLimits

0xc3ad,	// (0x0004aa95) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa73,	// (0x0004e15b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa73,	// (0x0004e15b) list_double_large_graphic_pane_vc_g

0xc3b9,	// (0x0004aaa1) list_double_large_graphic_pane_vc_t1_ParamLimits

0xc3b9,	// (0x0004aaa1) list_double_large_graphic_pane_vc_t1

0xc3d0,	// (0x0004aab8) list_double_large_graphic_pane_vc_t2_ParamLimits

0xc3d0,	// (0x0004aab8) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa7c,	// (0x0004e164) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa7c,	// (0x0004e164) list_double_large_graphic_pane_vc_t

0xb5c3,	// (0x00049cab) list_double_heading_pane_vc_g1_ParamLimits

0xb5c3,	// (0x00049cab) list_double_heading_pane_vc_g1

0xb5cf,	// (0x00049cb7) list_double_heading_pane_vc_g2_ParamLimits

0xb5cf,	// (0x00049cb7) list_double_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x0004ded2) list_double_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x0004ded2) list_double_heading_pane_vc_g

0xc3e9,	// (0x0004aad1) list_double_heading_pane_vc_t1_ParamLimits

0xc3e9,	// (0x0004aad1) list_double_heading_pane_vc_t1

0xbe23,	// (0x0004a50b) list_double_heading_pane_vc_t2_ParamLimits

0xbe23,	// (0x0004a50b) list_double_heading_pane_vc_t2

0x0001,

0xfa81,	// (0x0004e169) list_double_heading_pane_vc_t_ParamLimits

0xfa81,	// (0x0004e169) list_double_heading_pane_vc_t

0xbe01,	// (0x0004a4e9) list_double_graphic_pane_vc_g1_ParamLimits

0xbe01,	// (0x0004a4e9) list_double_graphic_pane_vc_g1

0xc3fd,	// (0x0004aae5) list_double_graphic_pane_vc_g2_ParamLimits

0xc3fd,	// (0x0004aae5) list_double_graphic_pane_vc_g2

0xc40c,	// (0x0004aaf4) list_double_graphic_pane_vc_g3_ParamLimits

0xc40c,	// (0x0004aaf4) list_double_graphic_pane_vc_g3

0x0002,

0xfa86,	// (0x0004e16e) list_double_graphic_pane_vc_g_ParamLimits

0xfa86,	// (0x0004e16e) list_double_graphic_pane_vc_g

0xc418,	// (0x0004ab00) list_double_graphic_pane_vc_t1_ParamLimits

0xc418,	// (0x0004ab00) list_double_graphic_pane_vc_t1

0xc36f,	// (0x0004aa57) list_double_graphic_pane_vc_t2_ParamLimits

0xc36f,	// (0x0004aa57) list_double_graphic_pane_vc_t2

0x0001,

0xfa8d,	// (0x0004e175) list_double_graphic_pane_vc_t_ParamLimits

0xfa8d,	// (0x0004e175) list_double_graphic_pane_vc_t

0x8a76,	// (0x0004715e) aid_size_cell_fastswap

0x8a7e,	// (0x00047166) aid_size_cell_touch_ParamLimits

0x8a7e,	// (0x00047166) aid_size_cell_touch

0x8ce3,	// (0x000473cb) popup_fast_swap_wide_window_ParamLimits

0x8ce3,	// (0x000473cb) popup_fast_swap_wide_window

0x8dd9,	// (0x000474c1) touch_pane_ParamLimits

0x8dd9,	// (0x000474c1) touch_pane

0x45ae,	// (0x00042c96) button_value_adjust_pane_cp2

0x9350,	// (0x00047a38) button_value_adjust_pane_cp4

0x9370,	// (0x00047a58) form_field_data_pane_cp2

0x938f,	// (0x00047a77) form_field_data_wide_pane_cp2

0x4907,	// (0x00042fef) bg_scroll_pane_ParamLimits

0x96b4,	// (0x00047d9c) scroll_handle_pane_ParamLimits

0x96c8,	// (0x00047db0) scroll_sc2_down_pane_ParamLimits

0x96c8,	// (0x00047db0) scroll_sc2_down_pane

0x4938,	// (0x00043020) scroll_sc2_up_pane_ParamLimits

0x4938,	// (0x00043020) scroll_sc2_up_pane

0xcc05,	// (0x0004b2ed) grid_wheel_folder_pane_g1_ParamLimits

0xcc05,	// (0x0004b2ed) grid_wheel_folder_pane_g1

0x988d,	// (0x00047f75) clock_nsta_pane_cp2_ParamLimits

0x988d,	// (0x00047f75) clock_nsta_pane_cp2

0xb768,	// (0x00049e50) listscroll_midp_pane_ParamLimits

0xb9fd,	// (0x0004a0e5) midp_canvas_pane

0x51bf,	// (0x000438a7) nsta_clock_indic_pane

0x51e7,	// (0x000438cf) listscroll_form_pane_vc

0x51ef,	// (0x000438d7) listscroll_set_pane_vc_ParamLimits

0x51ef,	// (0x000438d7) listscroll_set_pane_vc

0xbbaf,	// (0x0004a297) clock_nsta_pane

0xbbbc,	// (0x0004a2a4) indicator_nsta_pane

0x531b,	// (0x00043a03) bg_popup_sub_pane_cp2_ParamLimits

0x532f,	// (0x00043a17) find_pane_cp2_ParamLimits

0x532f,	// (0x00043a17) find_pane_cp2

0x5345,	// (0x00043a2d) grid_toobar_pane_ParamLimits

0x54a1,	// (0x00043b89) list_form_gen_pane_vc_ParamLimits

0x54a1,	// (0x00043b89) list_form_gen_pane_vc

0x54b7,	// (0x00043b9f) scroll_pane_cp8_vc_ParamLimits

0x54b7,	// (0x00043b9f) scroll_pane_cp8_vc

0x5507,	// (0x00043bef) data_form_wide_pane_vc_ParamLimits

0x5507,	// (0x00043bef) data_form_wide_pane_vc

0x5513,	// (0x00043bfb) form_field_data_wide_pane_vc_g1

0x551b,	// (0x00043c03) form_field_data_wide_pane_vc_t1_ParamLimits

0x551b,	// (0x00043c03) form_field_data_wide_pane_vc_t1

0x45c2,	// (0x00042caa) input_focus_pane_cp6_vc_ParamLimits

0x45c2,	// (0x00042caa) input_focus_pane_cp6_vc

0xbfb1,	// (0x0004a699) list_midp_pane_ParamLimits

0xbfbd,	// (0x0004a6a5) scroll_pane_cp16_ParamLimits

0xbfbd,	// (0x0004a6a5) scroll_pane_cp16

0x57b2,	// (0x00043e9a) button_value_adjust_pane_ParamLimits

0x57b2,	// (0x00043e9a) button_value_adjust_pane

0xc7dc,	// (0x0004aec4) button_value_adjust_pane_cp6_ParamLimits

0xc7dc,	// (0x0004aec4) button_value_adjust_pane_cp6

0xc8fe,	// (0x0004afe6) settings_code_pane_cp_ParamLimits

0xc8fe,	// (0x0004afe6) settings_code_pane_cp

0x3f5b,	// (0x00042643) cell_touch_pane_g1

0x3f5b,	// (0x00042643) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x0004ddf6) cell_touch_pane_g

0xcaa1,	// (0x0004b189) cell_touch_pane_cp_ParamLimits

0xcaa1,	// (0x0004b189) cell_touch_pane_cp

0xcab1,	// (0x0004b199) cell_touch_pane_ParamLimits

0xcab1,	// (0x0004b199) cell_touch_pane

0x3f5b,	// (0x00042643) scroll_sc2_down_pane_g1

0x3f5b,	// (0x00042643) scroll_sc2_up_pane_g1

0x3f65,	// (0x0004264d) bg_set_opt_pane_cp4_vc

0x69d5,	// (0x000450bd) list_set_graphic_pane_vc_g1_ParamLimits

0x69d5,	// (0x000450bd) list_set_graphic_pane_vc_g1

0x69e1,	// (0x000450c9) list_set_graphic_pane_vc_g2_ParamLimits

0x69e1,	// (0x000450c9) list_set_graphic_pane_vc_g2

0x0001,

0xfa03,	// (0x0004e0eb) list_set_graphic_pane_vc_g_ParamLimits

0xfa03,	// (0x0004e0eb) list_set_graphic_pane_vc_g

0x69ed,	// (0x000450d5) text_primary_small_cp13_vc_ParamLimits

0x69ed,	// (0x000450d5) text_primary_small_cp13_vc

0x5eb8,	// (0x000445a0) list_set_graphic_pane_vc_ParamLimits

0x5eb8,	// (0x000445a0) list_set_graphic_pane_vc

0x3f65,	// (0x0004264d) input_focus_pane_cp2_vc

0x3f5b,	// (0x00042643) setting_code_pane_vc_g1

0x3fd8,	// (0x000426c0) setting_code_pane_vc_t1

0x6a05,	// (0x000450ed) set_text_pane_vc_t1_ParamLimits

0x6a05,	// (0x000450ed) set_text_pane_vc_t1

0x3f65,	// (0x0004264d) input_focus_pane_cp1_vc

0x6a24,	// (0x0004510c) list_set_text_pane_vc

0x3f5b,	// (0x00042643) setting_text_pane_vc_g1

0x3f65,	// (0x0004264d) bg_set_opt_pane_cp2_vc

0x3fcf,	// (0x000426b7) setting_slider_graphic_pane_vc_g1

0x6a2e,	// (0x00045116) setting_slider_graphic_pane_vc_t1

0x6a3d,	// (0x00045125) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa08,	// (0x0004e0f0) setting_slider_graphic_pane_vc_t

0x6a4c,	// (0x00045134) slider_set_pane_cp_vc

0x6a54,	// (0x0004513c) slider_set_pane_vc_g1

0x6a5d,	// (0x00045145) slider_set_pane_vc_g2

0x0006,

0xfa0d,	// (0x0004e0f5) slider_set_pane_vc_g

0x461d,	// (0x00042d05) set_opt_bg_pane_g1_copy1

0x4625,	// (0x00042d0d) set_opt_bg_pane_g2_copy1

0x6a89,	// (0x00045171) set_opt_bg_pane_g3_copy1

0x4635,	// (0x00042d1d) set_opt_bg_pane_g4_copy1

0x463d,	// (0x00042d25) set_opt_bg_pane_g5_copy1

0x4645,	// (0x00042d2d) set_opt_bg_pane_g6_copy1

0x6a91,	// (0x00045179) set_opt_bg_pane_g7_copy1

0x6a9b,	// (0x00045183) set_opt_bg_pane_g8_copy1

0x6aa3,	// (0x0004518b) set_opt_bg_pane_g9_copy1

0x3f65,	// (0x0004264d) bg_set_opt_pane_cp_vc

0x6aab,	// (0x00045193) setting_slider_pane_vc_t1

0x6aba,	// (0x000451a2) setting_slider_pane_vc_t2

0x6ac9,	// (0x000451b1) setting_slider_pane_vc_t3

0x0002,

0xfa1c,	// (0x0004e104) setting_slider_pane_vc_t

0x6ad8,	// (0x000451c0) slider_set_pane_vc

0xa1df,	// (0x000488c7) volume_set_pane_vc_g1

0xa4da,	// (0x00048bc2) volume_set_pane_vc_g2

0xa4e3,	// (0x00048bcb) volume_set_pane_vc_g3

0xa4ec,	// (0x00048bd4) volume_set_pane_vc_g4

0xa4f5,	// (0x00048bdd) volume_set_pane_vc_g5

0xa4fe,	// (0x00048be6) volume_set_pane_vc_g6

0xa507,	// (0x00048bef) volume_set_pane_vc_g7

0xa510,	// (0x00048bf8) volume_set_pane_vc_g8

0xa519,	// (0x00048c01) volume_set_pane_vc_g9

0xa522,	// (0x00048c0a) volume_set_pane_vc_g10

0x0009,

0xfa23,	// (0x0004e10b) volume_set_pane_vc_g

0x6ae0,	// (0x000451c8) volume_set_pane_vc

0x6aea,	// (0x000451d2) button_value_adjust_pane_cp1_vc

0x6af4,	// (0x000451dc) list_highlight_pane_cp2_vc

0x6afd,	// (0x000451e5) list_set_pane_vc_ParamLimits

0x6afd,	// (0x000451e5) list_set_pane_vc

0x6b91,	// (0x00045279) main_pane_set_vc_t1_ParamLimits

0x6b91,	// (0x00045279) main_pane_set_vc_t1

0x6ba6,	// (0x0004528e) main_pane_set_vc_t2_ParamLimits

0x6ba6,	// (0x0004528e) main_pane_set_vc_t2

0x6bb8,	// (0x000452a0) main_pane_set_vc_t3_ParamLimits

0x6bb8,	// (0x000452a0) main_pane_set_vc_t3

0x6bca,	// (0x000452b2) main_pane_set_vc_t4_ParamLimits

0x6bca,	// (0x000452b2) main_pane_set_vc_t4

0x0003,

0xfa38,	// (0x0004e120) main_pane_set_vc_t_ParamLimits

0xfa38,	// (0x0004e120) main_pane_set_vc_t

0x6bdc,	// (0x000452c4) setting_code_pane_vc_ParamLimits

0x6bdc,	// (0x000452c4) setting_code_pane_vc

0x6beb,	// (0x000452d3) setting_slider_graphic_pane_vc

0x6beb,	// (0x000452d3) setting_slider_pane_vc

0x6beb,	// (0x000452d3) setting_text_pane_vc

0x6beb,	// (0x000452d3) setting_volume_pane_vc

0x6bf3,	// (0x000452db) scroll_pane_cp121_vc

0x459c,	// (0x00042c84) set_content_pane_vc

0x6c2b,	// (0x00045313) button_value_adjust_pane_g1

0x6c34,	// (0x0004531c) button_value_adjust_pane_g2

0x0001,

0xfa92,	// (0x0004e17a) button_value_adjust_pane_g

0x6c3d,	// (0x00045325) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6c3d,	// (0x00045325) form_field_slider_wide_pane_vc_t1

0x6c51,	// (0x00045339) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6c51,	// (0x00045339) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa97,	// (0x0004e17f) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x0004e17f) form_field_slider_wide_pane_vc_t

0x3fb3,	// (0x0004269b) input_focus_pane_cp10_vc_ParamLimits

0x3fb3,	// (0x0004269b) input_focus_pane_cp10_vc

0x6c7d,	// (0x00045365) slider_cont_pane_cp1_vc_ParamLimits

0x6c7d,	// (0x00045365) slider_cont_pane_cp1_vc

0x6c8d,	// (0x00045375) slider_form_pane_g1_cp2

0x6a5d,	// (0x00045145) slider_form_pane_g2_cp2

0x6cba,	// (0x000453a2) form_field_slider_pane_vc_t3

0x6cc8,	// (0x000453b0) form_field_slider_pane_vc_t4

0x6cd6,	// (0x000453be) slider_form_pane_vc_ParamLimits

0x6cd6,	// (0x000453be) slider_form_pane_vc

0x6ce3,	// (0x000453cb) form_field_slider_pane_vc_t1_ParamLimits

0x6ce3,	// (0x000453cb) form_field_slider_pane_vc_t1

0x6c51,	// (0x00045339) form_field_slider_pane_vc_t2_ParamLimits

0x6c51,	// (0x00045339) form_field_slider_pane_vc_t2

0x0001,

0xfaa9,	// (0x0004e191) form_field_slider_pane_vc_t_ParamLimits

0xfaa9,	// (0x0004e191) form_field_slider_pane_vc_t

0x3fb3,	// (0x0004269b) input_focus_pane_cp9_vc_ParamLimits

0x3fb3,	// (0x0004269b) input_focus_pane_cp9_vc

0x6cff,	// (0x000453e7) slider_cont_pane_vc_ParamLimits

0x6cff,	// (0x000453e7) slider_cont_pane_vc

0x6d11,	// (0x000453f9) list_form_graphic_pane_cp_vc_ParamLimits

0x6d11,	// (0x000453f9) list_form_graphic_pane_cp_vc

0x5513,	// (0x00043bfb) form_field_popup_wide_pane_vc_g1

0x6d26,	// (0x0004540e) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6d26,	// (0x0004540e) form_field_popup_wide_pane_vc_t1

0x45c2,	// (0x00042caa) input_focus_pane_cp8_vc_ParamLimits

0x45c2,	// (0x00042caa) input_focus_pane_cp8_vc

0x6d6b,	// (0x00045453) list_form_wide_pane_vc_ParamLimits

0x6d6b,	// (0x00045453) list_form_wide_pane_vc

0x6d77,	// (0x0004545f) list_form_graphic_pane_vc_g1

0x6d7f,	// (0x00045467) list_form_graphic_pane_vc_t1_ParamLimits

0x6d7f,	// (0x00045467) list_form_graphic_pane_vc_t1

0x3fc1,	// (0x000426a9) list_highlight_pane_cp5_vc_ParamLimits

0x3fc1,	// (0x000426a9) list_highlight_pane_cp5_vc

0x6d9b,	// (0x00045483) list_form_graphic_pane_vc_ParamLimits

0x6d9b,	// (0x00045483) list_form_graphic_pane_vc

0x5513,	// (0x00043bfb) form_field_popup_pane_vc_g1

0x6db1,	// (0x00045499) form_field_popup_pane_vc_t1_ParamLimits

0x6db1,	// (0x00045499) form_field_popup_pane_vc_t1

0x45c2,	// (0x00042caa) input_focus_pane_cp7_vc_ParamLimits

0x45c2,	// (0x00042caa) input_focus_pane_cp7_vc

0x6dc8,	// (0x000454b0) list_form_pane_vc_ParamLimits

0x6dc8,	// (0x000454b0) list_form_pane_vc

0x6dd4,	// (0x000454bc) data_form_pane_vc_t1_ParamLimits

0x6dd4,	// (0x000454bc) data_form_pane_vc_t1

0x461d,	// (0x00042d05) input_focus_pane_vc_g1

0x4625,	// (0x00042d0d) input_focus_pane_vc_g2

0x462d,	// (0x00042d15) input_focus_pane_vc_g3

0x4635,	// (0x00042d1d) input_focus_pane_vc_g4

0x463d,	// (0x00042d25) input_focus_pane_vc_g5

0x4645,	// (0x00042d2d) input_focus_pane_vc_g6

0x464d,	// (0x00042d35) input_focus_pane_vc_g7

0x4655,	// (0x00042d3d) input_focus_pane_vc_g8

0x465d,	// (0x00042d45) input_focus_pane_vc_g9

0x3f5b,	// (0x00042643) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x0004dd7f) input_focus_pane_vc_g

0x5507,	// (0x00043bef) data_form_pane_vc_ParamLimits

0x5507,	// (0x00043bef) data_form_pane_vc

0x5513,	// (0x00043bfb) form_field_data_pane_vc_g1

0x6def,	// (0x000454d7) form_field_data_pane_vc_t1_ParamLimits

0x6def,	// (0x000454d7) form_field_data_pane_vc_t1

0x45c2,	// (0x00042caa) input_focus_pane_vc_ParamLimits

0x45c2,	// (0x00042caa) input_focus_pane_vc

0x6e09,	// (0x000454f1) button_value_adjust_pane_cp3_vc

0x6e11,	// (0x000454f9) button_value_adjust_pane_cp5_vc

0x6e19,	// (0x00045501) form_field_data_pane_vc_ParamLimits

0x6e19,	// (0x00045501) form_field_data_pane_vc

0x6e30,	// (0x00045518) form_field_data_pane_vc_cp2

0x6e38,	// (0x00045520) form_field_data_wide_pane_vc_ParamLimits

0x6e38,	// (0x00045520) form_field_data_wide_pane_vc

0x6e4e,	// (0x00045536) form_field_data_wide_pane_vc_cp2

0x6e56,	// (0x0004553e) form_field_popup_pane_vc_ParamLimits

0x6e56,	// (0x0004553e) form_field_popup_pane_vc

0x6e6d,	// (0x00045555) form_field_popup_wide_pane_vc_ParamLimits

0x6e6d,	// (0x00045555) form_field_popup_wide_pane_vc

0x6e83,	// (0x0004556b) form_field_slider_pane_vc_ParamLimits

0x6e83,	// (0x0004556b) form_field_slider_pane_vc

0x6e96,	// (0x0004557e) form_field_slider_wide_pane_vc_ParamLimits

0x6e96,	// (0x0004557e) form_field_slider_wide_pane_vc

0xcaef,	// (0x0004b1d7) grid_touch_1_pane_ParamLimits

0xcaef,	// (0x0004b1d7) grid_touch_1_pane

0xcafb,	// (0x0004b1e3) grid_touch_2_pane_ParamLimits

0xcafb,	// (0x0004b1e3) grid_touch_2_pane

0x51b1,	// (0x00043899) touch_pane_g1_ParamLimits

0x51b1,	// (0x00043899) touch_pane_g1

0x6eb7,	// (0x0004559f) cell_app_pane_cp_wide_ParamLimits

0x6eb7,	// (0x0004559f) cell_app_pane_cp_wide

0x6ec8,	// (0x000455b0) grid_popup_fast_wide_pane_ParamLimits

0x6ec8,	// (0x000455b0) grid_popup_fast_wide_pane

0x6edc,	// (0x000455c4) scroll_pane_cp19_ParamLimits

0x6edc,	// (0x000455c4) scroll_pane_cp19

0x3f65,	// (0x0004264d) bg_popup_window_pane_cp20

0x6ef0,	// (0x000455d8) listscroll_popup_fast_wide_pane

0x3fc1,	// (0x000426a9) grid_indicator_nsta_pane

0x6ef8,	// (0x000455e0) clock_nsta_pane_g1

0x6f01,	// (0x000455e9) clock_nsta_pane_t1

0xcb13,	// (0x0004b1fb) cell_indicator_nsta_pane_ParamLimits

0xcb13,	// (0x0004b1fb) cell_indicator_nsta_pane

0x6ea9,	// (0x00045591) cell_indicator_nsta_pane_g1

0xcb4b,	// (0x0004b233) cell_indicator_nsta_pane_g2

0x0001,

0xfaba,	// (0x0004e1a2) cell_indicator_nsta_pane_g

0x6f1d,	// (0x00045605) clock_nsta_pane_cp

0x6f25,	// (0x0004560d) indicator_nsta_pane_cp

0x6f2e,	// (0x00045616) nsta_clock_indic_pane_g1

0x3ffd,	// (0x000426e5) grid_indicator_pane

0x4a2a,	// (0x00043112) scroll_pane_cp29

0x97dc,	// (0x00047ec4) indicator_nsta_pane_cp2_ParamLimits

0x97dc,	// (0x00047ec4) indicator_nsta_pane_cp2

0x3fc1,	// (0x000426a9) main_apps_wheel_pane

0x5657,	// (0x00043d3f) form_midp_field_text_pane_ParamLimits

0x5784,	// (0x00043e6c) scroll_bar_cp050_ParamLimits

0x6f97,	// (0x0004567f) cell_indicator_pane_ParamLimits

0x6f97,	// (0x0004567f) cell_indicator_pane

0x6fb4,	// (0x0004569c) cell_indicator_pane_g1

0xcb61,	// (0x0004b249) grid_wheel_folder_pane_ParamLimits

0xcb61,	// (0x0004b249) grid_wheel_folder_pane

0xcb77,	// (0x0004b25f) list_wheel_apps_pane_ParamLimits

0xcb77,	// (0x0004b25f) list_wheel_apps_pane

0xcb88,	// (0x0004b270) main_apps_wheel_pane_g1_ParamLimits

0xcb88,	// (0x0004b270) main_apps_wheel_pane_g1

0xcb9c,	// (0x0004b284) main_apps_wheel_pane_g2_ParamLimits

0xcb9c,	// (0x0004b284) main_apps_wheel_pane_g2

0x0001,

0xfad6,	// (0x0004e1be) main_apps_wheel_pane_g_ParamLimits

0xfad6,	// (0x0004e1be) main_apps_wheel_pane_g

0xcbb4,	// (0x0004b29c) main_apps_wheel_pane_t1_ParamLimits

0xcbb4,	// (0x0004b29c) main_apps_wheel_pane_t1

0xcbd7,	// (0x0004b2bf) list_wheel_apps_pane_g1

0xcbdf,	// (0x0004b2c7) list_wheel_apps_pane_g2

0xcbe7,	// (0x0004b2cf) list_wheel_apps_pane_g3

0xcbf1,	// (0x0004b2d9) list_wheel_apps_pane_g4

0xcbfb,	// (0x0004b2e3) list_wheel_apps_pane_g5

0x0004,

0xfadb,	// (0x0004e1c3) list_wheel_apps_pane_g

0x4e4f,	// (0x00043537) navi_icon_text_pane

0xbaf3,	// (0x0004a1db) aid_fill_nsta

0x6fbe,	// (0x000456a6) navi_icon_text_pane_g1

0x6fca,	// (0x000456b2) navi_icon_text_pane_t1

0x4d47,	// (0x0004342f) list_set_graphic_pane_t1_ParamLimits

0x4d47,	// (0x0004342f) list_set_graphic_pane_t1

0x5ea6,	// (0x0004458e) popup_midp_note_alarm_window_t6_ParamLimits

0x5ea6,	// (0x0004458e) popup_midp_note_alarm_window_t6

0x5eea,	// (0x000445d2) popup_midp_note_alarm_window_t7_ParamLimits

0x5eea,	// (0x000445d2) popup_midp_note_alarm_window_t7

0x5efc,	// (0x000445e4) popup_midp_note_alarm_window_t8_ParamLimits

0x5efc,	// (0x000445e4) popup_midp_note_alarm_window_t8

0x5f0e,	// (0x000445f6) popup_midp_note_alarm_window_t9_ParamLimits

0x5f0e,	// (0x000445f6) popup_midp_note_alarm_window_t9

0x5f20,	// (0x00044608) popup_midp_note_alarm_window_t10_ParamLimits

0x5f20,	// (0x00044608) popup_midp_note_alarm_window_t10

0x5f32,	// (0x0004461a) popup_midp_note_alarm_window_t11_ParamLimits

0x5f32,	// (0x0004461a) popup_midp_note_alarm_window_t11

0x5f44,	// (0x0004462c) scroll_pane_cp17_ParamLimits

0x5f44,	// (0x0004462c) scroll_pane_cp17

0xa1df,	// (0x000488c7) volume_small_pane_cp_g1

0xa52b,	// (0x00048c13) volume_small_pane_cp_g2

0xa534,	// (0x00048c1c) volume_small_pane_cp_g3

0xa53d,	// (0x00048c25) volume_small_pane_cp_g4

0xa546,	// (0x00048c2e) volume_small_pane_cp_g5

0xa54f,	// (0x00048c37) volume_small_pane_cp_g6

0xa558,	// (0x00048c40) volume_small_pane_cp_g7

0xa561,	// (0x00048c49) volume_small_pane_cp_g8

0xa56a,	// (0x00048c52) volume_small_pane_cp_g9

0xa573,	// (0x00048c5b) volume_small_pane_cp_g10

0x4fd5,	// (0x000436bd) midp_ticker_pane_g1_ParamLimits

0x4fe1,	// (0x000436c9) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x0004de4b) midp_ticker_pane_g_ParamLimits

0x4fed,	// (0x000436d5) midp_ticker_pane_t1_ParamLimits

0xbb09,	// (0x0004a1f1) aid_fill_nsta_2

0x5770,	// (0x00043e58) list_form2_midp_pane

0x658e,	// (0x00044c76) midp_editing_number_pane_ParamLimits

0x659d,	// (0x00044c85) midp_ticker_pane_ParamLimits

0x6fdc,	// (0x000456c4) form2_midp_field_pane

0x6fe4,	// (0x000456cc) scroll_pane_cp51

0x7004,	// (0x000456ec) form2_midp_button_pane_ParamLimits

0x7004,	// (0x000456ec) form2_midp_button_pane

0x7016,	// (0x000456fe) form2_midp_content_pane_ParamLimits

0x7016,	// (0x000456fe) form2_midp_content_pane

0x7030,	// (0x00045718) form2_midp_field_choice_group_pane

0x7038,	// (0x00045720) form2_midp_field_pane_g1

0x7040,	// (0x00045728) form2_midp_field_pane_g2

0x7048,	// (0x00045730) form2_midp_field_pane_g3

0x7050,	// (0x00045738) form2_midp_field_pane_g4

0x0003,

0xfb00,	// (0x0004e1e8) form2_midp_field_pane_g

0x7058,	// (0x00045740) form2_midp_gauge_slider_pane

0x7060,	// (0x00045748) form2_midp_gauge_wait_pane

0x7068,	// (0x00045750) form2_midp_image_pane_ParamLimits

0x7068,	// (0x00045750) form2_midp_image_pane

0x7083,	// (0x0004576b) form2_midp_label_pane_ParamLimits

0x7083,	// (0x0004576b) form2_midp_label_pane

0xcc3a,	// (0x0004b322) form2_midp_label_pane_cp_ParamLimits

0xcc3a,	// (0x0004b322) form2_midp_label_pane_cp

0x709c,	// (0x00045784) form2_midp_string_pane_ParamLimits

0x709c,	// (0x00045784) form2_midp_string_pane

0xc42a,	// (0x0004ab12) form2_midp_text_pane_ParamLimits

0xc42a,	// (0x0004ab12) form2_midp_text_pane

0x70ae,	// (0x00045796) form2_midp_time_pane

0x70be,	// (0x000457a6) input_focus_pane_cp51_ParamLimits

0x70be,	// (0x000457a6) input_focus_pane_cp51

0x70d6,	// (0x000457be) form2_midp_label_pane_t1_ParamLimits

0x70d6,	// (0x000457be) form2_midp_label_pane_t1

0xc445,	// (0x0004ab2d) form2_mdip_text_pane_t1_ParamLimits

0xc445,	// (0x0004ab2d) form2_mdip_text_pane_t1

0xc461,	// (0x0004ab49) form2_midp_time_pane_t1

0x711e,	// (0x00045806) form2_midp_gauge_slider_pane_t1

0xcc5b,	// (0x0004b343) form2_midp_gauge_slider_pane_t2

0xcc6d,	// (0x0004b355) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb09,	// (0x0004e1f1) form2_midp_gauge_slider_pane_t

0x7130,	// (0x00045818) form2_midp_slider_pane

0x713c,	// (0x00045824) form2_midp_gauge_wait_pane_t1

0x714a,	// (0x00045832) form2_midp_wait_pane_ParamLimits

0x714a,	// (0x00045832) form2_midp_wait_pane

0xcc7f,	// (0x0004b367) list_single_2graphic_pane_cp4_ParamLimits

0xcc7f,	// (0x0004b367) list_single_2graphic_pane_cp4

0xbea5,	// (0x0004a58d) list_single_midp_graphic_pane_cp_ParamLimits

0xbea5,	// (0x0004a58d) list_single_midp_graphic_pane_cp

0x3f65,	// (0x0004264d) list_highlight_pane_cp20

0x7175,	// (0x0004585d) list_single_2graphic_pane_g1_cp4

0x68da,	// (0x00044fc2) list_single_2graphic_pane_g2_cp4

0x717d,	// (0x00045865) list_single_2graphic_pane_t1_cp4

0x3fc1,	// (0x000426a9) list_highlight_pane_cp21

0x718c,	// (0x00045874) list_single_midp_graphic_pane_g4_cp

0x719b,	// (0x00045883) list_single_midp_graphic_pane_t1_cp

0xccae,	// (0x0004b396) form2_mdip_string_pane_t1_ParamLimits

0xccae,	// (0x0004b396) form2_mdip_string_pane_t1

0x3f65,	// (0x0004264d) bg_wml_button_pane_cp2

0x3f5b,	// (0x00042643) form2_midp_image_pane_g1

0xb62e,	// (0x00049d16) list_double_large_graphic_pane_g5_ParamLimits

0xb62e,	// (0x00049d16) list_double_large_graphic_pane_g5

0xb768,	// (0x00049e50) midp_form_pane_ParamLimits

0x3fc1,	// (0x000426a9) main_apps_wheel_pane_ParamLimits

0x9e99,	// (0x00048581) popup_preview_window_ParamLimits

0x9e99,	// (0x00048581) popup_preview_window

0xa04a,	// (0x00048732) popup_touch_info_window_ParamLimits

0xa04a,	// (0x00048732) popup_touch_info_window

0xa068,	// (0x00048750) popup_touch_menu_window_ParamLimits

0xa068,	// (0x00048750) popup_touch_menu_window

0x3f51,	// (0x00042639) bg_popup_sub_pane_cp6

0x71b0,	// (0x00045898) list_touch_menu_pane

0x71b8,	// (0x000458a0) list_single_touch_menu_pane_ParamLimits

0x71b8,	// (0x000458a0) list_single_touch_menu_pane

0x71cc,	// (0x000458b4) list_single_touch_menu_pane_t1

0x3fc1,	// (0x000426a9) bg_popup_sub_pane_cp7_ParamLimits

0x3fc1,	// (0x000426a9) bg_popup_sub_pane_cp7

0x71da,	// (0x000458c2) heading_sub_pane

0x71e2,	// (0x000458ca) list_touch_info_pane_ParamLimits

0x71e2,	// (0x000458ca) list_touch_info_pane

0x71f1,	// (0x000458d9) list_single_touch_info_pane_ParamLimits

0x71f1,	// (0x000458d9) list_single_touch_info_pane

0x7203,	// (0x000458eb) list_single_touch_info_pane_t1

0x7211,	// (0x000458f9) list_single_touch_info_pane_t2

0x0001,

0xfb17,	// (0x0004e1ff) list_single_touch_info_pane_t

0x4fab,	// (0x00043693) bg_popup_heading_pane_cp

0x721f,	// (0x00045907) heading_sub_pane_t1

0x54cd,	// (0x00043bb5) bg_popup_preview_window_pane_cp_ParamLimits

0x54cd,	// (0x00043bb5) bg_popup_preview_window_pane_cp

0x71da,	// (0x000458c2) heading_preview_pane

0x71e2,	// (0x000458ca) list_preview_pane_ParamLimits

0x71e2,	// (0x000458ca) list_preview_pane

0x722d,	// (0x00045915) popup_preview_window_g1

0x71f1,	// (0x000458d9) list_single_preview_pane_ParamLimits

0x71f1,	// (0x000458d9) list_single_preview_pane

0x7235,	// (0x0004591d) list_single_preview_pane_g1

0x723d,	// (0x00045925) list_single_preview_pane_t1

0x7203,	// (0x000458eb) list_single_preview_pane_t2

0x0001,

0xfb1c,	// (0x0004e204) list_single_preview_pane_t

0x724b,	// (0x00045933) bg_popup_heading_pane_cp2_ParamLimits

0x724b,	// (0x00045933) bg_popup_heading_pane_cp2

0x7261,	// (0x00045949) heading_preview_pane_g1

0x7269,	// (0x00045951) heading_preview_pane_t1_ParamLimits

0x7269,	// (0x00045951) heading_preview_pane_t1

0x4014,	// (0x000426fc) soft_indicator_pane_t1_ParamLimits

0x4529,	// (0x00042c11) scroll_pane_ParamLimits

0x492f,	// (0x00043017) scroll_sc2_left_pane

0x4926,	// (0x0004300e) scroll_sc2_right_pane

0x494e,	// (0x00043036) scroll_bg_pane_g1_ParamLimits

0x4963,	// (0x0004304b) scroll_bg_pane_g2_ParamLimits

0x497b,	// (0x00043063) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x0004ddd6) scroll_bg_pane_g_ParamLimits

0x494e,	// (0x00043036) scroll_handle_pane_g1_ParamLimits

0x499d,	// (0x00043085) scroll_handle_pane_g2_ParamLimits

0x497b,	// (0x00043063) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x0004dddd) scroll_handle_pane_g_ParamLimits

0x9b24,	// (0x0004820c) popup_choice_list_window_ParamLimits

0x9b24,	// (0x0004820c) popup_choice_list_window

0x5327,	// (0x00043a0f) choice_list_pane

0x53a9,	// (0x00043a91) cell_toolbar_pane_t1

0x53d1,	// (0x00043ab9) toolbar_button_pane_ParamLimits

0x6305,	// (0x000449ed) ai_gene_pane_1_t2_ParamLimits

0x6305,	// (0x000449ed) ai_gene_pane_1_t2

0x0001,

0xf91d,	// (0x0004e005) ai_gene_pane_1_t_ParamLimits

0xf91d,	// (0x0004e005) ai_gene_pane_1_t

0x7286,	// (0x0004596e) scroll_sc2_left_pane_g1

0x7286,	// (0x0004596e) scroll_sc2_right_pane_g1

0x4726,	// (0x00042e0e) bg_popup_sub_pane_cp10

0x7290,	// (0x00045978) list_choice_list_pane

0x72a7,	// (0x0004598f) list_single_choice_list_pane_ParamLimits

0x72a7,	// (0x0004598f) list_single_choice_list_pane

0x4709,	// (0x00042df1) list_single_choice_list_pane_g1

0x4711,	// (0x00042df9) list_single_choice_list_pane_t1_ParamLimits

0x4711,	// (0x00042df9) list_single_choice_list_pane_t1

0x72ba,	// (0x000459a2) choice_list_pane_g1

0x72c2,	// (0x000459aa) choice_list_pane_t1

0x3f51,	// (0x00042639) input_focus_pane_cp11

0x489b,	// (0x00042f83) title_pane_stacon_g2_ParamLimits

0x489b,	// (0x00042f83) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x0004ddbc) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0004ddbc) title_pane_stacon_g

0x4fab,	// (0x00043693) cursor_press_pane

0x9bca,	// (0x000482b2) popup_fep_hwr_window_ParamLimits

0x9bca,	// (0x000482b2) popup_fep_hwr_window

0x9c42,	// (0x0004832a) popup_fep_vkb_window_ParamLimits

0x9c42,	// (0x0004832a) popup_fep_vkb_window

0x72d0,	// (0x000459b8) cursor_press_pane_g1

0x0002,

0xfb45,	// (0x0004e22d) fep_vkb_side_pane_g_ParamLimits

0xa5b5,	// (0x00048c9d) fep_hwr_candidate_pane_ParamLimits

0xa5b5,	// (0x00048c9d) fep_hwr_candidate_pane

0xa5df,	// (0x00048cc7) fep_hwr_side_pane_ParamLimits

0xa5df,	// (0x00048cc7) fep_hwr_side_pane

0xa5ff,	// (0x00048ce7) fep_hwr_top_pane_ParamLimits

0xa5ff,	// (0x00048ce7) fep_hwr_top_pane

0xa617,	// (0x00048cff) fep_hwr_write_pane_ParamLimits

0xa617,	// (0x00048cff) fep_hwr_write_pane

0xfb45,	// (0x0004e22d) fep_vkb_side_pane_g

0x72ea,	// (0x000459d2) fep_hwr_top_pane_g1

0x72d8,	// (0x000459c0) fep_hwr_top_pane_g2

0xa651,	// (0x00048d39) fep_hwr_top_pane_g3

0x0002,

0xfb21,	// (0x0004e209) fep_hwr_top_pane_g

0xa666,	// (0x00048d4e) fep_hwr_top_text_pane

0x4af0,	// (0x000431d8) fep_hwr_top_text_pane_g1

0x7320,	// (0x00045a08) fep_hwr_top_text_pane_t1

0xa75c,	// (0x00048e44) fep_hwr_candidate_pane_g1

0x752d,	// (0x00045c15) fep_vkb_keypad_pane_g3_ParamLimits

0x752d,	// (0x00045c15) fep_vkb_keypad_pane_g3

0x7555,	// (0x00045c3d) fep_vkb_keypad_pane_g4_ParamLimits

0x7555,	// (0x00045c3d) fep_vkb_keypad_pane_g4

0x75c4,	// (0x00045cac) fep_vkb_bottom_pane_g2_ParamLimits

0x75c4,	// (0x00045cac) fep_vkb_bottom_pane_g2

0x0001,

0xfb4c,	// (0x0004e234) fep_vkb_bottom_pane_g_ParamLimits

0xfb4c,	// (0x0004e234) fep_vkb_bottom_pane_g

0x7286,	// (0x0004596e) cell_vkb_side_pane_g2

0x0001,

0xfb56,	// (0x0004e23e) cell_vkb_side_pane_g

0x7608,	// (0x00045cf0) cell_vkb_side_pane_t1

0x7616,	// (0x00045cfe) cell_vkb_side_pane_t1_copy1

0x7286,	// (0x0004596e) bg_fep_vkb_candidate_pane_g2

0x76f2,	// (0x00045dda) cell_vkb_candidate_pane_ParamLimits

0x732e,	// (0x00045a16) aid_size_cell_vkb_ParamLimits

0x732e,	// (0x00045a16) aid_size_cell_vkb

0x76f2,	// (0x00045dda) cell_vkb_candidate_pane

0xa783,	// (0x00048e6b) bg_popup_fep_shadow_pane_g1

0x73aa,	// (0x00045a92) fep_vkb_bottom_pane_ParamLimits

0x73aa,	// (0x00045a92) fep_vkb_bottom_pane

0x73e7,	// (0x00045acf) fep_vkb_candidate_pane_ParamLimits

0x73e7,	// (0x00045acf) fep_vkb_candidate_pane

0x7403,	// (0x00045aeb) fep_vkb_keypad_pane_ParamLimits

0x7403,	// (0x00045aeb) fep_vkb_keypad_pane

0x7449,	// (0x00045b31) fep_vkb_side_pane_ParamLimits

0x7449,	// (0x00045b31) fep_vkb_side_pane

0x7485,	// (0x00045b6d) fep_vkb_top_pane_ParamLimits

0x7485,	// (0x00045b6d) fep_vkb_top_pane

0x74c1,	// (0x00045ba9) fep_vkb_top_pane_g1_ParamLimits

0x74c1,	// (0x00045ba9) fep_vkb_top_pane_g1

0x74d0,	// (0x00045bb8) fep_vkb_top_pane_g2_ParamLimits

0x74d0,	// (0x00045bb8) fep_vkb_top_pane_g2

0x74df,	// (0x00045bc7) fep_vkb_top_pane_g3_ParamLimits

0x74df,	// (0x00045bc7) fep_vkb_top_pane_g3

0x0003,

0xfb3c,	// (0x0004e224) fep_vkb_top_pane_g_ParamLimits

0xfb3c,	// (0x0004e224) fep_vkb_top_pane_g

0x74fd,	// (0x00045be5) fep_vkb_top_text_pane_ParamLimits

0x74fd,	// (0x00045be5) fep_vkb_top_text_pane

0xcdfa,	// (0x0004b4e2) fep_vkb_side_pane_g1_ParamLimits

0xcdfa,	// (0x0004b4e2) fep_vkb_side_pane_g1

0x751c,	// (0x00045c04) grid_vkb_side_pane_ParamLimits

0x751c,	// (0x00045c04) grid_vkb_side_pane

0xa78b,	// (0x00048e73) bg_popup_fep_shadow_pane_g2

0xa794,	// (0x00048e7c) bg_popup_fep_shadow_pane_g3

0xa79c,	// (0x00048e84) bg_popup_fep_shadow_pane_g4

0xa7a5,	// (0x00048e8d) bg_popup_fep_shadow_pane_g5

0xa7af,	// (0x00048e97) bg_popup_fep_shadow_pane_g6

0xa7b7,	// (0x00048e9f) bg_popup_fep_shadow_pane_g7

0x4635,	// (0x00042d1d) bg_popup_fep_shadow_pane_g8

0x7573,	// (0x00045c5b) grid_vkb_keypad_number_pane_ParamLimits

0x7573,	// (0x00045c5b) grid_vkb_keypad_number_pane

0x7583,	// (0x00045c6b) grid_vkb_keypad_pane_ParamLimits

0x7583,	// (0x00045c6b) grid_vkb_keypad_pane

0x75a9,	// (0x00045c91) fep_vkb_bottom_pane_g1_ParamLimits

0x75a9,	// (0x00045c91) fep_vkb_bottom_pane_g1

0x75d2,	// (0x00045cba) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x75d2,	// (0x00045cba) grid_vkb_keypad_bottom_left_pane

0x75e7,	// (0x00045ccf) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x75e7,	// (0x00045ccf) grid_vkb_keypad_bottom_right_pane

0x75fc,	// (0x00045ce4) fep_vkb_top_text_pane_g1

0xce44,	// (0x0004b52c) fep_vkb_top_text_pane_t1

0xce59,	// (0x0004b541) cell_vkb_side_pane_ParamLimits

0xce59,	// (0x0004b541) cell_vkb_side_pane

0x7286,	// (0x0004596e) cell_vkb_side_pane_g1

0x7624,	// (0x00045d0c) cell_vkb_keypad_pane_ParamLimits

0x7624,	// (0x00045d0c) cell_vkb_keypad_pane

0x769f,	// (0x00045d87) cell_vkb_keypad_pane_g1

0x0008,

0xfb69,	// (0x0004e251) bg_popup_fep_shadow_pane_g

0xa7c9,	// (0x00048eb1) cell_hwr_side_pane_g1

0xa7c9,	// (0x00048eb1) cell_hwr_side_pane_g2

0x76a9,	// (0x00045d91) cell_vkb_keypad_pane_t1

0xce7c,	// (0x0004b564) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xce7c,	// (0x0004b564) cell_vkb_keypad_bottom_left_pane

0xce99,	// (0x0004b581) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xce99,	// (0x0004b581) cell_vkb_keypad_bottom_right_pane

0x7286,	// (0x0004596e) cell_vkb_keypad_bottom_left_pane_g1

0x7286,	// (0x0004596e) cell_vkb_keypad_bottom_right_pane_g1

0x76b7,	// (0x00045d9f) cell_vkb_keypad_number_pane_ParamLimits

0x76b7,	// (0x00045d9f) cell_vkb_keypad_number_pane

0x76d6,	// (0x00045dbe) cell_vkb_keypad_number_pane_g1

0x76e0,	// (0x00045dc8) cell_vkb_keypad_number_pane_g2

0x76e9,	// (0x00045dd1) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5b,	// (0x0004e243) cell_vkb_keypad_number_pane_g

0x76a9,	// (0x00045d91) cell_vkb_keypad_number_pane_t1

0x770f,	// (0x00045df7) fep_vkb_candidate_pane_g1

0x0001,

0xfb7c,	// (0x0004e264) cell_hwr_side_pane_g

0x7728,	// (0x00045e10) cell_hwr_side_pane_t1

0xa7d3,	// (0x00048ebb) cell_hwr_side_pane_t1_copy1

0xa7e1,	// (0x00048ec9) cell_hwr_candidate_pane_g1

0xa810,	// (0x00048ef8) cell_hwr_candidate_pane_t1

0x7286,	// (0x0004596e) cell_vkb_candidate_pane_g2

0x776c,	// (0x00045e54) cell_vkb_candidate_pane_t1

0xa57c,	// (0x00048c64) bg_popup_fep_shadow_pane_ParamLimits

0xa57c,	// (0x00048c64) bg_popup_fep_shadow_pane

0xa631,	// (0x00048d19) bg_fep_hwr_top_pane_g4

0x72fc,	// (0x000459e4) bg_hwr_side_pane_g1_ParamLimits

0x72fc,	// (0x000459e4) bg_hwr_side_pane_g1

0xa6a2,	// (0x00048d8a) cell_hwr_side_pane_ParamLimits

0xa6a2,	// (0x00048d8a) cell_hwr_side_pane

0xa6dd,	// (0x00048dc5) fep_hwr_write_pane_g1_ParamLimits

0xa6dd,	// (0x00048dc5) fep_hwr_write_pane_g1

0xa6ea,	// (0x00048dd2) fep_hwr_write_pane_g2_ParamLimits

0xa6ea,	// (0x00048dd2) fep_hwr_write_pane_g2

0xa6f7,	// (0x00048ddf) fep_hwr_write_pane_g3_ParamLimits

0xa6f7,	// (0x00048ddf) fep_hwr_write_pane_g3

0xa705,	// (0x00048ded) fep_hwr_write_pane_g4_ParamLimits

0xa705,	// (0x00048ded) fep_hwr_write_pane_g4

0x0005,

0xfb28,	// (0x0004e210) fep_hwr_write_pane_g_ParamLimits

0xfb28,	// (0x0004e210) fep_hwr_write_pane_g

0xa631,	// (0x00048d19) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xa631,	// (0x00048d19) bg_fep_hwr_candidate_pane_g2

0xa71a,	// (0x00048e02) cell_hwr_candidate_pane_ParamLimits

0xa71a,	// (0x00048e02) cell_hwr_candidate_pane

0xa75c,	// (0x00048e44) fep_hwr_candidate_pane_g1_ParamLimits

0x735c,	// (0x00045a44) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x735c,	// (0x00045a44) bg_popup_fep_shadow_pane_cp2

0x74ef,	// (0x00045bd7) fep_vkb_top_pane_g4_ParamLimits

0x74ef,	// (0x00045bd7) fep_vkb_top_pane_g4

0x750e,	// (0x00045bf6) fep_vkb_side_pane_g2_ParamLimits

0x750e,	// (0x00045bf6) fep_vkb_side_pane_g2

0x927d,	// (0x00047965) list_setting_pane_t4_ParamLimits

0x927d,	// (0x00047965) list_setting_pane_t4

0x9317,	// (0x000479ff) list_setting_number_pane_t5_ParamLimits

0x9317,	// (0x000479ff) list_setting_number_pane_t5

0x4b37,	// (0x0004321f) list_double_heading_pane_cp2_ParamLimits

0x4b37,	// (0x0004321f) list_double_heading_pane_cp2

0x4590,	// (0x00042c78) list_double_heading_pane_g1_cp2_ParamLimits

0x4590,	// (0x00042c78) list_double_heading_pane_g1_cp2

0x45dc,	// (0x00042cc4) list_double_heading_pane_g2_cp2_ParamLimits

0x45dc,	// (0x00042cc4) list_double_heading_pane_g2_cp2

0x777a,	// (0x00045e62) list_double_heading_pane_t1_cp2_ParamLimits

0x777a,	// (0x00045e62) list_double_heading_pane_t1_cp2

0x7790,	// (0x00045e78) list_double_heading_pane_t2_cp2_ParamLimits

0x7790,	// (0x00045e78) list_double_heading_pane_t2_cp2

0x3f49,	// (0x00042631) aid_value_unit2

0x8d2f,	// (0x00047417) popup_preview_fixed_window

0x40f4,	// (0x000427dc) bg_popup_preview_window_pane_cp02

0x77a2,	// (0x00045e8a) list_preview_fixed_pane

0x782a,	// (0x00045f12) list_empty_pane_fp_ParamLimits

0x782a,	// (0x00045f12) list_empty_pane_fp

0x782a,	// (0x00045f12) list_single_cale_day_pane_fp_ParamLimits

0x782a,	// (0x00045f12) list_single_cale_day_pane_fp

0x782a,	// (0x00045f12) list_single_graphic_heading_pane_fp_ParamLimits

0x782a,	// (0x00045f12) list_single_graphic_heading_pane_fp

0x782a,	// (0x00045f12) list_single_graphic_pane_fp_ParamLimits

0x782a,	// (0x00045f12) list_single_graphic_pane_fp

0x782a,	// (0x00045f12) list_single_heading_pane_fp_ParamLimits

0x782a,	// (0x00045f12) list_single_heading_pane_fp

0x782a,	// (0x00045f12) list_single_pane_fp_ParamLimits

0x782a,	// (0x00045f12) list_single_pane_fp

0x7841,	// (0x00045f29) list_single_pane_fp_g1_ParamLimits

0x7841,	// (0x00045f29) list_single_pane_fp_g1

0xb616,	// (0x00049cfe) list_single_pane_fp_g2_ParamLimits

0xb616,	// (0x00049cfe) list_single_pane_fp_g2

0xc474,	// (0x0004ab5c) list_single_pane_fp_g3_ParamLimits

0xc474,	// (0x0004ab5c) list_single_pane_fp_g3

0x784d,	// (0x00045f35) list_single_pane_fp_g4_ParamLimits

0x784d,	// (0x00045f35) list_single_pane_fp_g4

0x0003,

0xfb8f,	// (0x0004e277) list_single_pane_fp_g_ParamLimits

0xfb8f,	// (0x0004e277) list_single_pane_fp_g

0xc488,	// (0x0004ab70) list_single_pane_fp_t1_ParamLimits

0xc488,	// (0x0004ab70) list_single_pane_fp_t1

0xc49f,	// (0x0004ab87) list_single_graphic_pane_fp_g1_ParamLimits

0xc49f,	// (0x0004ab87) list_single_graphic_pane_fp_g1

0x7841,	// (0x00045f29) list_single_graphic_pane_fp_g2_ParamLimits

0x7841,	// (0x00045f29) list_single_graphic_pane_fp_g2

0xb616,	// (0x00049cfe) list_single_graphic_pane_fp_g3_ParamLimits

0xb616,	// (0x00049cfe) list_single_graphic_pane_fp_g3

0xc474,	// (0x0004ab5c) list_single_graphic_pane_fp_g4_ParamLimits

0xc474,	// (0x0004ab5c) list_single_graphic_pane_fp_g4

0x784d,	// (0x00045f35) list_single_graphic_pane_fp_g5_ParamLimits

0x784d,	// (0x00045f35) list_single_graphic_pane_fp_g5

0x0004,

0xfb98,	// (0x0004e280) list_single_graphic_pane_fp_g_ParamLimits

0xfb98,	// (0x0004e280) list_single_graphic_pane_fp_g

0xc4ab,	// (0x0004ab93) list_single_graphic_pane_fp_t1_ParamLimits

0xc4ab,	// (0x0004ab93) list_single_graphic_pane_fp_t1

0xc49f,	// (0x0004ab87) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc49f,	// (0x0004ab87) list_single_graphic_heading_pane_fp_g1

0x7841,	// (0x00045f29) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7841,	// (0x00045f29) list_single_graphic_heading_pane_fp_g2

0xb616,	// (0x00049cfe) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xb616,	// (0x00049cfe) list_single_graphic_heading_pane_fp_g3

0xc474,	// (0x0004ab5c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc474,	// (0x0004ab5c) list_single_graphic_heading_pane_fp_g4

0x784d,	// (0x00045f35) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x784d,	// (0x00045f35) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb98,	// (0x0004e280) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb98,	// (0x0004e280) list_single_graphic_heading_pane_fp_g

0xc4c1,	// (0x0004aba9) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc4c1,	// (0x0004aba9) list_single_graphic_heading_pane_fp_t1

0xc4d7,	// (0x0004abbf) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc4d7,	// (0x0004abbf) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba3,	// (0x0004e28b) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba3,	// (0x0004e28b) list_single_graphic_heading_pane_fp_t

0xc4e9,	// (0x0004abd1) list_single_cale_day_pane_fp_g1_ParamLimits

0xc4e9,	// (0x0004abd1) list_single_cale_day_pane_fp_g1

0x7859,	// (0x00045f41) list_single_cale_day_pane_fp_g2_ParamLimits

0x7859,	// (0x00045f41) list_single_cale_day_pane_fp_g2

0xc521,	// (0x0004ac09) list_single_cale_day_pane_fp_g3_ParamLimits

0xc521,	// (0x0004ac09) list_single_cale_day_pane_fp_g3

0xc549,	// (0x0004ac31) list_single_cale_day_pane_fp_g4_ParamLimits

0xc549,	// (0x0004ac31) list_single_cale_day_pane_fp_g4

0xc56d,	// (0x0004ac55) list_single_cale_day_pane_fp_g5_ParamLimits

0xc56d,	// (0x0004ac55) list_single_cale_day_pane_fp_g5

0x0004,

0xfba8,	// (0x0004e290) list_single_cale_day_pane_fp_g_ParamLimits

0xfba8,	// (0x0004e290) list_single_cale_day_pane_fp_g

0xc591,	// (0x0004ac79) list_single_cale_day_pane_fp_t1_ParamLimits

0xc591,	// (0x0004ac79) list_single_cale_day_pane_fp_t1

0xc5b7,	// (0x0004ac9f) list_single_cale_day_pane_fp_t2_ParamLimits

0xc5b7,	// (0x0004ac9f) list_single_cale_day_pane_fp_t2

0xc5d0,	// (0x0004acb8) list_single_cale_day_pane_fp_t3_ParamLimits

0xc5d0,	// (0x0004acb8) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb3,	// (0x0004e29b) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb3,	// (0x0004e29b) list_single_cale_day_pane_fp_t

0x7841,	// (0x00045f29) list_empty_pane_fp_g1_ParamLimits

0x7841,	// (0x00045f29) list_empty_pane_fp_g1

0xc5e9,	// (0x0004acd1) list_empty_pane_fp_t1

0xc5f7,	// (0x0004acdf) list_empty_pane_fp_t2

0x0001,

0xfbba,	// (0x0004e2a2) list_empty_pane_fp_t

0x7841,	// (0x00045f29) list_single_heading_pane_fp_g1_ParamLimits

0x7841,	// (0x00045f29) list_single_heading_pane_fp_g1

0xb616,	// (0x00049cfe) list_single_heading_pane_fp_g2_ParamLimits

0xb616,	// (0x00049cfe) list_single_heading_pane_fp_g2

0xc474,	// (0x0004ab5c) list_single_heading_pane_fp_g3_ParamLimits

0xc474,	// (0x0004ab5c) list_single_heading_pane_fp_g3

0x0002,

0xfbbf,	// (0x0004e2a7) list_single_heading_pane_fp_g_ParamLimits

0xfbbf,	// (0x0004e2a7) list_single_heading_pane_fp_g

0xc605,	// (0x0004aced) list_single_heading_pane_fp_t1_ParamLimits

0xc605,	// (0x0004aced) list_single_heading_pane_fp_t1

0xc617,	// (0x0004acff) list_single_heading_pane_fp_t2_ParamLimits

0xc617,	// (0x0004acff) list_single_heading_pane_fp_t2

0x0001,

0xfbc6,	// (0x0004e2ae) list_single_heading_pane_fp_t_ParamLimits

0xfbc6,	// (0x0004e2ae) list_single_heading_pane_fp_t

0x4732,	// (0x00042e1a) aid_size_cell_fast

0x40d7,	// (0x000427bf) soft_indicator_pane_cp1_t1

0x476f,	// (0x00042e57) cell_app_pane_cp2_ParamLimits

0x476f,	// (0x00042e57) cell_app_pane_cp2

0xa59e,	// (0x00048c86) fep_hwr_candidate_drop_down_list_pane

0xa776,	// (0x00048e5e) fep_hwr_candidate_pane_g3_ParamLimits

0xa776,	// (0x00048e5e) fep_hwr_candidate_pane_g3

0x1d33,	// (0x0004041b) fep_hwr_candidate_pane_g4_ParamLimits

0x1d33,	// (0x0004041b) fep_hwr_candidate_pane_g4

0x0002,

0xfb35,	// (0x0004e21d) fep_hwr_candidate_pane_g_ParamLimits

0xfb35,	// (0x0004e21d) fep_hwr_candidate_pane_g

0x73d6,	// (0x00045abe) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x73d6,	// (0x00045abe) fep_vkb_candidate_drop_down_list_pane

0x7717,	// (0x00045dff) fep_vkb_candidate_pane_g3

0x771f,	// (0x00045e07) fep_vkb_candidate_pane_g4

0x0002,

0xfb62,	// (0x0004e24a) fep_vkb_candidate_pane_g

0xa7e1,	// (0x00048ec9) cell_hwr_candidate_pane_g1_ParamLimits

0xa7ef,	// (0x00048ed7) cell_hwr_candidate_pane_g3_ParamLimits

0xa7ef,	// (0x00048ed7) cell_hwr_candidate_pane_g3

0xdc4e,	// (0x0004c336) cell_hwr_candidate_pane_g4_ParamLimits

0xdc4e,	// (0x0004c336) cell_hwr_candidate_pane_g4

0x0002,

0xfb81,	// (0x0004e269) cell_hwr_candidate_pane_g_ParamLimits

0xfb81,	// (0x0004e269) cell_hwr_candidate_pane_g

0x7736,	// (0x00045e1e) cell_vkb_candidate_pane_g3_ParamLimits

0x7736,	// (0x00045e1e) cell_vkb_candidate_pane_g3

0x7751,	// (0x00045e39) cell_vkb_candidate_pane_g4_ParamLimits

0x7751,	// (0x00045e39) cell_vkb_candidate_pane_g4

0x7865,	// (0x00045f4d) cell_app_pane_cp2_g1_ParamLimits

0x7865,	// (0x00045f4d) cell_app_pane_cp2_g1

0x7883,	// (0x00045f6b) cell_app_pane_cp2_g2_ParamLimits

0x7883,	// (0x00045f6b) cell_app_pane_cp2_g2

0x0001,

0xfbcb,	// (0x0004e2b3) cell_app_pane_cp2_g_ParamLimits

0xfbcb,	// (0x0004e2b3) cell_app_pane_cp2_g

0x788f,	// (0x00045f77) cell_app_pane_cp2_t1_ParamLimits

0x788f,	// (0x00045f77) cell_app_pane_cp2_t1

0x45c2,	// (0x00042caa) grid_highlight_pane_cp1_ParamLimits

0x45c2,	// (0x00042caa) grid_highlight_pane_cp1

0xa82e,	// (0x00048f16) cell_hwr_candidate_pane_cp1_ParamLimits

0xa82e,	// (0x00048f16) cell_hwr_candidate_pane_cp1

0xa7e1,	// (0x00048ec9) fep_hwr_candidate_drop_down_list_pane_g1

0xa84d,	// (0x00048f35) fep_hwr_candidate_drop_down_list_pane_g2

0xa85a,	// (0x00048f42) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd0,	// (0x0004e2b8) fep_hwr_candidate_drop_down_list_pane_g

0xa867,	// (0x00048f4f) fep_hwr_candidate_drop_down_list_scroll_pane

0xa870,	// (0x00048f58) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xa870,	// (0x00048f58) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xa87d,	// (0x00048f65) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xa87d,	// (0x00048f65) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xa88a,	// (0x00048f72) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xa88a,	// (0x00048f72) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xa897,	// (0x00048f7f) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xa897,	// (0x00048f7f) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xa8b2,	// (0x00048f9a) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xa8b2,	// (0x00048f9a) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xa8cd,	// (0x00048fb5) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xa8cd,	// (0x00048fb5) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xa8e8,	// (0x00048fd0) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xa8e8,	// (0x00048fd0) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xa903,	// (0x00048feb) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xa903,	// (0x00048feb) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd7,	// (0x0004e2bf) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd7,	// (0x0004e2bf) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x78d6,	// (0x00045fbe) cell_vkb_candidate_pane_cp1_ParamLimits

0x78d6,	// (0x00045fbe) cell_vkb_candidate_pane_cp1

0x74ef,	// (0x00045bd7) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x74ef,	// (0x00045bd7) fep_vkb_candidate_drop_down_list_pane_g1

0x78a1,	// (0x00045f89) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x78a1,	// (0x00045f89) fep_vkb_candidate_drop_down_list_pane_g2

0x78ae,	// (0x00045f96) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x78ae,	// (0x00045f96) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe8,	// (0x0004e2d0) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe8,	// (0x0004e2d0) fep_vkb_candidate_drop_down_list_pane_g

0x78f6,	// (0x00045fde) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x78f6,	// (0x00045fde) fep_vkb_candidate_drop_down_list_scroll_pane

0x7903,	// (0x00045feb) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7903,	// (0x00045feb) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7910,	// (0x00045ff8) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7910,	// (0x00045ff8) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x791c,	// (0x00046004) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x791c,	// (0x00046004) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x77b8,	// (0x00045ea0) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x77b8,	// (0x00045ea0) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x77d9,	// (0x00045ec1) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x77d9,	// (0x00045ec1) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7928,	// (0x00046010) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7928,	// (0x00046010) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7949,	// (0x00046031) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7949,	// (0x00046031) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x78bb,	// (0x00045fa3) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x78bb,	// (0x00045fa3) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbef,	// (0x0004e2d7) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbef,	// (0x0004e2d7) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb2c3,	// (0x000499ab) title_pane_g1_ParamLimits

0xb2d0,	// (0x000499b8) title_pane_g2_ParamLimits

0xf554,	// (0x0004dc3c) title_pane_g_ParamLimits

0x4ae8,	// (0x000431d0) aid_call2_pane

0x4ae0,	// (0x000431c8) aid_call_pane

0x4af0,	// (0x000431d8) popup_clock_analogue_window_g1

0x4af0,	// (0x000431d8) popup_clock_analogue_window_g2

0x96dd,	// (0x00047dc5) popup_clock_analogue_window_g3

0x96e6,	// (0x00047dce) popup_clock_analogue_window_g4

0x3f5b,	// (0x00042643) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x0004ddeb) popup_clock_analogue_window_g

0x96ee,	// (0x00047dd6) popup_clock_analogue_window_t1

0x96fc,	// (0x00047de4) clock_digital_number_pane_ParamLimits

0x96fc,	// (0x00047de4) clock_digital_number_pane

0x9708,	// (0x00047df0) clock_digital_number_pane_cp02_ParamLimits

0x9708,	// (0x00047df0) clock_digital_number_pane_cp02

0x9714,	// (0x00047dfc) clock_digital_number_pane_cp03_ParamLimits

0x9714,	// (0x00047dfc) clock_digital_number_pane_cp03

0x9720,	// (0x00047e08) clock_digital_number_pane_cp04_ParamLimits

0x9720,	// (0x00047e08) clock_digital_number_pane_cp04

0x972c,	// (0x00047e14) clock_digital_separator_pane_ParamLimits

0x972c,	// (0x00047e14) clock_digital_separator_pane

0x9738,	// (0x00047e20) popup_clock_digital_window_t1_ParamLimits

0x9738,	// (0x00047e20) popup_clock_digital_window_t1

0x3f5b,	// (0x00042643) clock_digital_number_pane_g1

0x3f5b,	// (0x00042643) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x0004ddf6) clock_digital_number_pane_g

0x3f5b,	// (0x00042643) clock_digital_separator_pane_g1

0x3f5b,	// (0x00042643) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x0004ddf6) clock_digital_separator_pane_g

0xbaf3,	// (0x0004a1db) aid_fill_nsta_ParamLimits

0xbbbc,	// (0x0004a2a4) indicator_nsta_pane_ParamLimits

0x52d0,	// (0x000439b8) popup_clock_analogue_window

0x52d0,	// (0x000439b8) popup_clock_digital_window

0x3fc1,	// (0x000426a9) grid_indicator_nsta_pane_ParamLimits

0x6f0f,	// (0x000455f7) clock_nsta_pane_t2

0x0001,

0xfab5,	// (0x0004e19d) clock_nsta_pane_t

0x96a1,	// (0x00047d89) aid_size_max_handle

0x96ab,	// (0x00047d93) aid_size_min_handle

0x4fab,	// (0x00043693) editor_scroll_pane

0x796a,	// (0x00046052) ex_editor_pane

0x46ee,	// (0x00042dd6) scroll_pane_cp13

0x4555,	// (0x00042c3d) scroll_pane_cp14

0x4b1f,	// (0x00043207) scroll_pane_cp36

0x4b49,	// (0x00043231) list_single_graphic_hl_pane_cp2_ParamLimits

0x4b49,	// (0x00043231) list_single_graphic_hl_pane_cp2

0xc1fa,	// (0x0004a8e2) list_single_graphic_hl_pane_ParamLimits

0xc1fa,	// (0x0004a8e2) list_single_graphic_hl_pane

0xc62d,	// (0x0004ad15) aid_size_min_hl_cp1

0x7972,	// (0x0004605a) list_highlight_pane_cp34_ParamLimits

0x7972,	// (0x0004605a) list_highlight_pane_cp34

0x7983,	// (0x0004606b) list_single_graphic_hl_pane_g1_ParamLimits

0x7983,	// (0x0004606b) list_single_graphic_hl_pane_g1

0xc636,	// (0x0004ad1e) list_single_graphic_hl_pane_g2_ParamLimits

0xc636,	// (0x0004ad1e) list_single_graphic_hl_pane_g2

0xc636,	// (0x0004ad1e) list_single_graphic_hl_pane_g3_ParamLimits

0xc636,	// (0x0004ad1e) list_single_graphic_hl_pane_g3

0x4f1c,	// (0x00043604) list_single_graphic_hl_pane_g4_ParamLimits

0x4f1c,	// (0x00043604) list_single_graphic_hl_pane_g4

0xc642,	// (0x0004ad2a) list_single_graphic_hl_pane_g5_ParamLimits

0xc642,	// (0x0004ad2a) list_single_graphic_hl_pane_g5

0x0004,

0xfc00,	// (0x0004e2e8) list_single_graphic_hl_pane_g_ParamLimits

0xfc00,	// (0x0004e2e8) list_single_graphic_hl_pane_g

0xc656,	// (0x0004ad3e) list_single_graphic_hl_pane_t1_ParamLimits

0xc656,	// (0x0004ad3e) list_single_graphic_hl_pane_t1

0x7990,	// (0x00046078) aid_size_min_hl_cp2

0x7999,	// (0x00046081) list_highlight_pane_cp34_cp2_ParamLimits

0x7999,	// (0x00046081) list_highlight_pane_cp34_cp2

0x7983,	// (0x0004606b) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7983,	// (0x0004606b) list_single_graphic_hl_pane_g1_cp2

0x79a6,	// (0x0004608e) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x79a6,	// (0x0004608e) list_single_graphic_hl_pane_g2_cp2

0xced2,	// (0x0004b5ba) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xced2,	// (0x0004b5ba) list_single_graphic_hl_pane_g3_cp2

0x4ef0,	// (0x000435d8) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4ef0,	// (0x000435d8) list_single_graphic_hl_pane_g4_cp2

0x79b2,	// (0x0004609a) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x79b2,	// (0x0004609a) list_single_graphic_hl_pane_g5_cp2

0x99e8,	// (0x000480d0) control_pane_g4_ParamLimits

0x99e8,	// (0x000480d0) control_pane_g4

0x4726,	// (0x00042e0e) bg_popup_sub_pane_cp10_ParamLimits

0x7290,	// (0x00045978) list_choice_list_pane_ParamLimits

0x729f,	// (0x00045987) scroll_pane_cp23

0x40f4,	// (0x000427dc) bg_popup_preview_window_pane_cp02_ParamLimits

0x77a2,	// (0x00045e8a) list_preview_fixed_pane_ParamLimits

0x77fa,	// (0x00045ee2) list_preview_fixed_pane_cp_ParamLimits

0x77fa,	// (0x00045ee2) list_preview_fixed_pane_cp

0x7806,	// (0x00045eee) popup_preview_fixed_window_g1_ParamLimits

0x7806,	// (0x00045eee) popup_preview_fixed_window_g1

0x7812,	// (0x00045efa) popup_preview_fixed_window_g2_ParamLimits

0x7812,	// (0x00045efa) popup_preview_fixed_window_g2

0x0002,

0xfb88,	// (0x0004e270) popup_preview_fixed_window_g_ParamLimits

0xfb88,	// (0x0004e270) popup_preview_fixed_window_g

0x9615,	// (0x00047cfd) aid_navi_side_left_pane_ParamLimits

0x962a,	// (0x00047d12) aid_navi_side_right_pane_ParamLimits

0x9642,	// (0x00047d2a) navi_icon_pane_stacon_ParamLimits

0x9656,	// (0x00047d3e) navi_navi_pane_stacon_ParamLimits

0x9642,	// (0x00047d2a) navi_text_pane_stacon_ParamLimits

0x8bfe,	// (0x000472e6) main_text_info_pane

0x79dc,	// (0x000460c4) listscroll_text_info_pane

0x79e4,	// (0x000460cc) list_text_info_pane_ParamLimits

0x79e4,	// (0x000460cc) list_text_info_pane

0x79f3,	// (0x000460db) scroll_pane_cp24_ParamLimits

0x79f3,	// (0x000460db) scroll_pane_cp24

0xcee0,	// (0x0004b5c8) list_text_info_pane_t1_ParamLimits

0xcee0,	// (0x0004b5c8) list_text_info_pane_t1

0x9b3e,	// (0x00048226) popup_fast_swap2_window_ParamLimits

0x9b3e,	// (0x00048226) popup_fast_swap2_window

0x7a11,	// (0x000460f9) aid_size_cell_fast2

0x3f51,	// (0x00042639) bg_popup_window_pane_cp17

0x579c,	// (0x00043e84) heading_pane_cp2

0x42da,	// (0x000429c2) listscroll_fast2_pane

0x7a1b,	// (0x00046103) grid_fast2_pane

0x7a25,	// (0x0004610d) listscroll_fast2_pane_g1

0x7a2d,	// (0x00046115) listscroll_fast2_pane_g2

0x0001,

0xfc0b,	// (0x0004e2f3) listscroll_fast2_pane_g

0x46ee,	// (0x00042dd6) scroll_pane_cp26

0x7a37,	// (0x0004611f) cell_fast2_pane_ParamLimits

0x7a37,	// (0x0004611f) cell_fast2_pane

0x7a4c,	// (0x00046134) cell_fast2_pane_g1

0x7a55,	// (0x0004613d) cell_fast2_pane_g2

0x7a5e,	// (0x00046146) cell_fast2_pane_g3

0x0002,

0xfc10,	// (0x0004e2f8) cell_fast2_pane_g

0x431c,	// (0x00042a04) grid_highlight_pane_cp9

0x9b08,	// (0x000481f0) main_eswt_pane_ParamLimits

0x9b08,	// (0x000481f0) main_eswt_pane

0x7a08,	// (0x000460f0) list_single_text_info_pane

0x7a66,	// (0x0004614e) eswt_ctrl_button_pane

0x7a66,	// (0x0004614e) eswt_ctrl_canvas_pane

0x7a6e,	// (0x00046156) eswt_ctrl_combo_pane

0x7a66,	// (0x0004614e) eswt_ctrl_default_pane

0x7a66,	// (0x0004614e) eswt_ctrl_label_pane

0x7a76,	// (0x0004615e) eswt_ctrl_wait_pane

0x7a7e,	// (0x00046166) eswt_shell_pane

0x3f51,	// (0x00042639) listscroll_eswt_app_pane

0x7a9e,	// (0x00046186) popup_eswt_tasktip_window_ParamLimits

0x7a9e,	// (0x00046186) popup_eswt_tasktip_window

0x54cd,	// (0x00043bb5) bg_popup_window_pane_cp18

0x7aaf,	// (0x00046197) eswt_control_pane_g1_ParamLimits

0x7aaf,	// (0x00046197) eswt_control_pane_g1

0x7abc,	// (0x000461a4) eswt_control_pane_g2_ParamLimits

0x7abc,	// (0x000461a4) eswt_control_pane_g2

0x7ac9,	// (0x000461b1) eswt_control_pane_g3_ParamLimits

0x7ac9,	// (0x000461b1) eswt_control_pane_g3

0x7ad6,	// (0x000461be) eswt_control_pane_g4_ParamLimits

0x7ad6,	// (0x000461be) eswt_control_pane_g4

0x0003,

0xfc17,	// (0x0004e2ff) eswt_control_pane_g_ParamLimits

0xfc17,	// (0x0004e2ff) eswt_control_pane_g

0x45c2,	// (0x00042caa) bg_button_pane_ParamLimits

0x45c2,	// (0x00042caa) bg_button_pane

0x4331,	// (0x00042a19) common_borders_pane_copy2_ParamLimits

0x4331,	// (0x00042a19) common_borders_pane_copy2

0x7ae3,	// (0x000461cb) control_button_pane_g1_ParamLimits

0x7ae3,	// (0x000461cb) control_button_pane_g1

0x7aef,	// (0x000461d7) control_button_pane_g2_ParamLimits

0x7aef,	// (0x000461d7) control_button_pane_g2

0x7afb,	// (0x000461e3) control_button_pane_g3_ParamLimits

0x7afb,	// (0x000461e3) control_button_pane_g3

0x0002,

0xfc20,	// (0x0004e308) control_button_pane_g_ParamLimits

0xfc20,	// (0x0004e308) control_button_pane_g

0x7b0f,	// (0x000461f7) control_button_pane_t1

0x7b1d,	// (0x00046205) control_button_pane_t2

0x0001,

0xfc27,	// (0x0004e30f) control_button_pane_t

0x53dd,	// (0x00043ac5) bg_button_pane_g1

0x53e5,	// (0x00043acd) bg_button_pane_g2

0x53ed,	// (0x00043ad5) bg_button_pane_g3

0x53f5,	// (0x00043add) bg_button_pane_g4

0x53fd,	// (0x00043ae5) bg_button_pane_g5

0x5405,	// (0x00043aed) bg_button_pane_g6

0x540d,	// (0x00043af5) bg_button_pane_g7

0x5415,	// (0x00043afd) bg_button_pane_g8

0x541d,	// (0x00043b05) bg_button_pane_g9

0x0008,

0xf871,	// (0x0004df59) bg_button_pane_g

0x724b,	// (0x00045933) common_borders_pane_ParamLimits

0x724b,	// (0x00045933) common_borders_pane

0x7aaf,	// (0x00046197) eswt_control_pane_g1_copy1_ParamLimits

0x7aaf,	// (0x00046197) eswt_control_pane_g1_copy1

0x7abc,	// (0x000461a4) eswt_control_pane_g2_copy1_ParamLimits

0x7abc,	// (0x000461a4) eswt_control_pane_g2_copy1

0x7ac9,	// (0x000461b1) eswt_control_pane_g3_copy1_ParamLimits

0x7ac9,	// (0x000461b1) eswt_control_pane_g3_copy1

0x7ad6,	// (0x000461be) eswt_control_pane_g4_copy1_ParamLimits

0x7ad6,	// (0x000461be) eswt_control_pane_g4_copy1

0x7286,	// (0x0004596e) bg_eswt_ctrl_canvas_pane_g1

0x724b,	// (0x00045933) common_borders_pane_cp2_ParamLimits

0x724b,	// (0x00045933) common_borders_pane_cp2

0x724b,	// (0x00045933) common_borders_pane_cp3_ParamLimits

0x724b,	// (0x00045933) common_borders_pane_cp3

0x7b2b,	// (0x00046213) separator_horizontal_pane

0x7b33,	// (0x0004621b) separator_vertical_pane

0x7aaf,	// (0x00046197) eswt_control_pane_g1_copy2_ParamLimits

0x7aaf,	// (0x00046197) eswt_control_pane_g1_copy2

0x7abc,	// (0x000461a4) eswt_control_pane_g2_copy2_ParamLimits

0x7abc,	// (0x000461a4) eswt_control_pane_g2_copy2

0x7ac9,	// (0x000461b1) eswt_control_pane_g3_copy2_ParamLimits

0x7ac9,	// (0x000461b1) eswt_control_pane_g3_copy2

0x7ad6,	// (0x000461be) eswt_control_pane_g4_copy2_ParamLimits

0x7ad6,	// (0x000461be) eswt_control_pane_g4_copy2

0x3f51,	// (0x00042639) common_borders_pane_cp4

0x7b3c,	// (0x00046224) separator_horizontal_pane_g1

0x7b45,	// (0x0004622d) separator_horizontal_pane_g2

0x7b4e,	// (0x00046236) separator_horizontal_pane_g3

0x0002,

0xfc2c,	// (0x0004e314) separator_horizontal_pane_g

0x7aaf,	// (0x00046197) eswt_control_pane_g1_copy3_ParamLimits

0x7aaf,	// (0x00046197) eswt_control_pane_g1_copy3

0x7abc,	// (0x000461a4) eswt_control_pane_g2_copy3_ParamLimits

0x7abc,	// (0x000461a4) eswt_control_pane_g2_copy3

0x7ac9,	// (0x000461b1) eswt_control_pane_g3_copy3_ParamLimits

0x7ac9,	// (0x000461b1) eswt_control_pane_g3_copy3

0x7ad6,	// (0x000461be) eswt_control_pane_g4_copy3_ParamLimits

0x7ad6,	// (0x000461be) eswt_control_pane_g4_copy3

0x3f51,	// (0x00042639) common_borders_pane_cp5

0x7b57,	// (0x0004623f) separator_vertical_pane_g1

0x7b60,	// (0x00046248) separator_vertical_pane_g2

0x7b69,	// (0x00046251) separator_vertical_pane_g3

0x0002,

0xfc33,	// (0x0004e31b) separator_vertical_pane_g

0x7aaf,	// (0x00046197) eswt_control_pane_g1_copy4_ParamLimits

0x7aaf,	// (0x00046197) eswt_control_pane_g1_copy4

0x7abc,	// (0x000461a4) eswt_control_pane_g2_copy4_ParamLimits

0x7abc,	// (0x000461a4) eswt_control_pane_g2_copy4

0x7ac9,	// (0x000461b1) eswt_control_pane_g3_copy4_ParamLimits

0x7ac9,	// (0x000461b1) eswt_control_pane_g3_copy4

0x7ad6,	// (0x000461be) eswt_control_pane_g4_copy4_ParamLimits

0x7ad6,	// (0x000461be) eswt_control_pane_g4_copy4

0xcf19,	// (0x0004b601) eswt_ctrl_combo_button_pane

0xcf21,	// (0x0004b609) eswt_ctrl_input_pane

0xcf29,	// (0x0004b611) popup_choice_list_window_cp70

0xcf31,	// (0x0004b619) eswt_ctrl_input_pane_t1

0x3f51,	// (0x00042639) input_focus_pane_cp70

0x724b,	// (0x00045933) bg_button_pane_cp70_ParamLimits

0x724b,	// (0x00045933) bg_button_pane_cp70

0xcf3f,	// (0x0004b627) eswt_ctrl_combo_button_pane_g1

0x7b72,	// (0x0004625a) wait_bar_pane_cp70

0x54cd,	// (0x00043bb5) bg_popup_window_pane_cp70_ParamLimits

0x54cd,	// (0x00043bb5) bg_popup_window_pane_cp70

0x7b7a,	// (0x00046262) popup_eswt_tasktip_window_t1

0x7b90,	// (0x00046278) wait_bar_pane_cp71_ParamLimits

0x7b90,	// (0x00046278) wait_bar_pane_cp71

0x7b9c,	// (0x00046284) grid_eswt_app_pane

0x492f,	// (0x00043017) scroll_pane_cp70

0xcf47,	// (0x0004b62f) cell_eswt_app_pane_ParamLimits

0xcf47,	// (0x0004b62f) cell_eswt_app_pane

0xcf7b,	// (0x0004b663) cell_eswt_app_pane_g1_ParamLimits

0xcf7b,	// (0x0004b663) cell_eswt_app_pane_g1

0xcfaa,	// (0x0004b692) cell_eswt_app_pane_g2_ParamLimits

0xcfaa,	// (0x0004b692) cell_eswt_app_pane_g2

0x0001,

0xfc3a,	// (0x0004e322) cell_eswt_app_pane_g_ParamLimits

0xfc3a,	// (0x0004e322) cell_eswt_app_pane_g

0xcfd3,	// (0x0004b6bb) cell_eswt_app_pane_t1_ParamLimits

0xcfd3,	// (0x0004b6bb) cell_eswt_app_pane_t1

0x7ba5,	// (0x0004628d) grid_highlight_pane_cp70_ParamLimits

0x7ba5,	// (0x0004628d) grid_highlight_pane_cp70

0x4ea4,	// (0x0004358c) set_content_pane_g1

0x5194,	// (0x0004387c) status_small_volume_pane

0xa91e,	// (0x00049006) status_small_volume_pane_g1

0xa926,	// (0x0004900e) volume_small2_pane

0xa92f,	// (0x00049017) volume_small2_pane_g1

0xa938,	// (0x00049020) volume_small2_pane_g2

0xa941,	// (0x00049029) volume_small2_pane_g3

0xa94a,	// (0x00049032) volume_small2_pane_g4

0xa953,	// (0x0004903b) volume_small2_pane_g5

0xa95c,	// (0x00049044) volume_small2_pane_g6

0xa965,	// (0x0004904d) volume_small2_pane_g7

0xa96e,	// (0x00049056) volume_small2_pane_g8

0xa977,	// (0x0004905f) volume_small2_pane_g9

0xa980,	// (0x00049068) volume_small2_pane_g10

0x0009,

0xfc3f,	// (0x0004e327) volume_small2_pane_g

0x75fc,	// (0x00045ce4) fep_vkb_top_text_pane_g1_ParamLimits

0xce44,	// (0x0004b52c) fep_vkb_top_text_pane_t1_ParamLimits

0x781e,	// (0x00045f06) popup_preview_fixed_window_g3_ParamLimits

0x781e,	// (0x00045f06) popup_preview_fixed_window_g3

0x9fdd,	// (0x000486c5) popup_toolbar_trans_pane

0xc7cb,	// (0x0004aeb3) aid_height_set_list_ParamLimits

0x5ecc,	// (0x000445b4) aid_size_parent_ParamLimits

0x4726,	// (0x00042e0e) list_highlight_pane_cp2_ParamLimits

0x4ea4,	// (0x0004358c) set_content_pane_g1_ParamLimits

0xc21c,	// (0x0004a904) list_single_image_pane_ParamLimits

0xc21c,	// (0x0004a904) list_single_image_pane

0xd005,	// (0x0004b6ed) aid_size_cell_image_ParamLimits

0xd005,	// (0x0004b6ed) aid_size_cell_image

0xd012,	// (0x0004b6fa) grid_single_image_pane_ParamLimits

0xd012,	// (0x0004b6fa) grid_single_image_pane

0x4590,	// (0x00042c78) list_single_image_pane_g1_ParamLimits

0x4590,	// (0x00042c78) list_single_image_pane_g1

0x45dc,	// (0x00042cc4) list_single_image_pane_g2_ParamLimits

0x45dc,	// (0x00042cc4) list_single_image_pane_g2

0x0001,

0xfc54,	// (0x0004e33c) list_single_image_pane_g_ParamLimits

0xfc54,	// (0x0004e33c) list_single_image_pane_g

0x7bb1,	// (0x00046299) list_single_image_pane_t1_ParamLimits

0x7bb1,	// (0x00046299) list_single_image_pane_t1

0xd01e,	// (0x0004b706) cell_image_list_pane_ParamLimits

0xd01e,	// (0x0004b706) cell_image_list_pane

0xd032,	// (0x0004b71a) cell_image_list_pane_g1

0xd03b,	// (0x0004b723) cell_image_list_pane_g2

0x0001,

0xfc59,	// (0x0004e341) cell_image_list_pane_g

0x7bc7,	// (0x000462af) aid_size_cell_tb_trans_pane

0x45c2,	// (0x00042caa) bg_tb_trans_pane

0x7bd9,	// (0x000462c1) grid_tb_trans_pane

0x53dd,	// (0x00043ac5) bg_tb_trans_pane_g1

0x53e5,	// (0x00043acd) bg_tb_trans_pane_g2

0x53ed,	// (0x00043ad5) bg_tb_trans_pane_g3

0x53f5,	// (0x00043add) bg_tb_trans_pane_g4

0x53fd,	// (0x00043ae5) bg_tb_trans_pane_g5

0x5415,	// (0x00043afd) bg_tb_trans_pane_g6

0x541d,	// (0x00043b05) bg_tb_trans_pane_g7

0x5405,	// (0x00043aed) bg_tb_trans_pane_g8

0x540d,	// (0x00043af5) bg_tb_trans_pane_g9

0x0008,

0xfc5e,	// (0x0004e346) bg_tb_trans_pane_g

0x7bed,	// (0x000462d5) cell_toolbar_trans_pane_ParamLimits

0x7bed,	// (0x000462d5) cell_toolbar_trans_pane

0x7286,	// (0x0004596e) cell_toolbar_trans_pane_g1

0xcc1e,	// (0x0004b306) list_form2_midp_pane_t1

0xcc2c,	// (0x0004b314) list_form2_midp_pane_t2

0x0001,

0xfafb,	// (0x0004e1e3) list_form2_midp_pane_t

0x6fe4,	// (0x000456cc) scroll_pane_cp51_ParamLimits

0x715a,	// (0x00045842) form2_midp_wait_pane_g1

0x7163,	// (0x0004584b) form2_midp_wait_pane_g2

0x716c,	// (0x00045854) form2_midp_wait_pane_g3

0x0002,

0xfb10,	// (0x0004e1f8) form2_midp_wait_pane_g

0x3fc1,	// (0x000426a9) list_highlight_pane_cp21_ParamLimits

0x718c,	// (0x00045874) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x719b,	// (0x00045883) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xc946,	// (0x0004b02e) list_single_2graphic_im_pane_ParamLimits

0xc946,	// (0x0004b02e) list_single_2graphic_im_pane

0xd044,	// (0x0004b72c) list_single_2graphic_im_pane_g1_ParamLimits

0xd044,	// (0x0004b72c) list_single_2graphic_im_pane_g1

0xd055,	// (0x0004b73d) list_single_2graphic_im_pane_g2_ParamLimits

0xd055,	// (0x0004b73d) list_single_2graphic_im_pane_g2

0xd061,	// (0x0004b749) list_single_2graphic_im_pane_g3_ParamLimits

0xd061,	// (0x0004b749) list_single_2graphic_im_pane_g3

0x0003,

0xfc71,	// (0x0004e359) list_single_2graphic_im_pane_g_ParamLimits

0xfc71,	// (0x0004e359) list_single_2graphic_im_pane_g

0xd075,	// (0x0004b75d) list_single_2graphic_im_pane_t1_ParamLimits

0xd075,	// (0x0004b75d) list_single_2graphic_im_pane_t1

0x782a,	// (0x00045f12) list_single_graphic_2heading_pane_fp_ParamLimits

0x782a,	// (0x00045f12) list_single_graphic_2heading_pane_fp

0xc49f,	// (0x0004ab87) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc49f,	// (0x0004ab87) list_single_graphic_2heading_pane_fp_g1

0x7841,	// (0x00045f29) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7841,	// (0x00045f29) list_single_graphic_2heading_pane_fp_g2

0xb616,	// (0x00049cfe) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xb616,	// (0x00049cfe) list_single_graphic_2heading_pane_fp_g3

0xc474,	// (0x0004ab5c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc474,	// (0x0004ab5c) list_single_graphic_2heading_pane_fp_g4

0x784d,	// (0x00045f35) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x784d,	// (0x00045f35) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb98,	// (0x0004e280) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb98,	// (0x0004e280) list_single_graphic_2heading_pane_fp_g

0xc66c,	// (0x0004ad54) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc66c,	// (0x0004ad54) list_single_graphic_2heading_pane_fp_t1

0xc4d7,	// (0x0004abbf) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc4d7,	// (0x0004abbf) list_single_graphic_2heading_pane_fp_t2

0xc682,	// (0x0004ad6a) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc682,	// (0x0004ad6a) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7a,	// (0x0004e362) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7a,	// (0x0004e362) list_single_graphic_2heading_pane_fp_t

0x7308,	// (0x000459f0) fep_hwr_write_pane_g5_ParamLimits

0x7308,	// (0x000459f0) fep_hwr_write_pane_g5

0x7314,	// (0x000459fc) fep_hwr_write_pane_g6_ParamLimits

0x7314,	// (0x000459fc) fep_hwr_write_pane_g6

0x7a7e,	// (0x00046166) eswt_shell_pane_ParamLimits

0x54cd,	// (0x00043bb5) bg_popup_window_pane_cp18_ParamLimits

0x64f0,	// (0x00044bd8) heading_pane_cp70

0x7b7a,	// (0x00046262) popup_eswt_tasktip_window_t1_ParamLimits

0xbb33,	// (0x0004a21b) aid_touch_tab_arrow_left

0xbb42,	// (0x0004a22a) aid_touch_tab_arrow_right

0xb2e1,	// (0x000499c9) title_pane_g3_ParamLimits

0xb2e1,	// (0x000499c9) title_pane_g3

0x4575,	// (0x00042c5d) set_value_pane_g1

0x9fdd,	// (0x000486c5) popup_toolbar_trans_pane_ParamLimits

0x7bc7,	// (0x000462af) aid_size_cell_tb_trans_pane_ParamLimits

0x45c2,	// (0x00042caa) bg_tb_trans_pane_ParamLimits

0x7bd9,	// (0x000462c1) grid_tb_trans_pane_ParamLimits

0x40f4,	// (0x000427dc) cont_note_pane_ParamLimits

0x40f4,	// (0x000427dc) cont_note_pane

0x4331,	// (0x00042a19) cont_snote2_single_text_pane_ParamLimits

0x4331,	// (0x00042a19) cont_snote2_single_text_pane

0x4331,	// (0x00042a19) cont_snote2_single_graphic_pane_ParamLimits

0x4331,	// (0x00042a19) cont_snote2_single_graphic_pane

0x59cc,	// (0x000440b4) cont_note_wait_pane_ParamLimits

0x59cc,	// (0x000440b4) cont_note_wait_pane

0x59cc,	// (0x000440b4) cont_note_image_pane_ParamLimits

0x59cc,	// (0x000440b4) cont_note_image_pane

0x7c1f,	// (0x00046307) popup_note2_window_g1_ParamLimits

0x7c1f,	// (0x00046307) popup_note2_window_g1

0x7c50,	// (0x00046338) popup_note2_window_t1_ParamLimits

0x7c50,	// (0x00046338) popup_note2_window_t1

0x7c95,	// (0x0004637d) popup_note2_window_t2_ParamLimits

0x7c95,	// (0x0004637d) popup_note2_window_t2

0x7cda,	// (0x000463c2) popup_note2_window_t3_ParamLimits

0x7cda,	// (0x000463c2) popup_note2_window_t3

0x7d1f,	// (0x00046407) popup_note2_window_t4_ParamLimits

0x7d1f,	// (0x00046407) popup_note2_window_t4

0x416c,	// (0x00042854) popup_note2_window_t5_ParamLimits

0x416c,	// (0x00042854) popup_note2_window_t5

0x0004,

0xfc86,	// (0x0004e36e) popup_note2_window_t_ParamLimits

0xfc86,	// (0x0004e36e) popup_note2_window_t

0x7d4e,	// (0x00046436) popup_note2_image_window_g1_ParamLimits

0x7d4e,	// (0x00046436) popup_note2_image_window_g1

0x7d5a,	// (0x00046442) popup_note2_image_window_g2_ParamLimits

0x7d5a,	// (0x00046442) popup_note2_image_window_g2

0x0001,

0xfc91,	// (0x0004e379) popup_note2_image_window_g_ParamLimits

0xfc91,	// (0x0004e379) popup_note2_image_window_g

0x7d6c,	// (0x00046454) popup_note2_image_window_t1_ParamLimits

0x7d6c,	// (0x00046454) popup_note2_image_window_t1

0x7d84,	// (0x0004646c) popup_note2_image_window_t2_ParamLimits

0x7d84,	// (0x0004646c) popup_note2_image_window_t2

0x7d9c,	// (0x00046484) popup_note2_image_window_t3_ParamLimits

0x7d9c,	// (0x00046484) popup_note2_image_window_t3

0x0002,

0xfc96,	// (0x0004e37e) popup_note2_image_window_t_ParamLimits

0xfc96,	// (0x0004e37e) popup_note2_image_window_t

0x59da,	// (0x000440c2) popup_note2_wait_window_g1_ParamLimits

0x59da,	// (0x000440c2) popup_note2_wait_window_g1

0x59e6,	// (0x000440ce) popup_note2_wait_window_g2_ParamLimits

0x59e6,	// (0x000440ce) popup_note2_wait_window_g2

0x59f2,	// (0x000440da) popup_note2_wait_window_g3_ParamLimits

0x59f2,	// (0x000440da) popup_note2_wait_window_g3

0x0002,

0xf853,	// (0x0004df3b) popup_note2_wait_window_g_ParamLimits

0xf853,	// (0x0004df3b) popup_note2_wait_window_g

0x7db8,	// (0x000464a0) popup_note2_wait_window_t1_ParamLimits

0x7db8,	// (0x000464a0) popup_note2_wait_window_t1

0x7dd6,	// (0x000464be) popup_note2_wait_window_t2_ParamLimits

0x7dd6,	// (0x000464be) popup_note2_wait_window_t2

0x7df4,	// (0x000464dc) popup_note2_wait_window_t3_ParamLimits

0x7df4,	// (0x000464dc) popup_note2_wait_window_t3

0x7e06,	// (0x000464ee) popup_note2_wait_window_t4_ParamLimits

0x7e06,	// (0x000464ee) popup_note2_wait_window_t4

0x0003,

0xfc9d,	// (0x0004e385) popup_note2_wait_window_t_ParamLimits

0xfc9d,	// (0x0004e385) popup_note2_wait_window_t

0x7e18,	// (0x00046500) wait_bar2_pane_ParamLimits

0x7e18,	// (0x00046500) wait_bar2_pane

0x7e30,	// (0x00046518) popup_snote2_single_text_window_g1_ParamLimits

0x7e30,	// (0x00046518) popup_snote2_single_text_window_g1

0x7e58,	// (0x00046540) popup_snote2_single_text_window_t1_ParamLimits

0x7e58,	// (0x00046540) popup_snote2_single_text_window_t1

0x7ea4,	// (0x0004658c) popup_snote2_single_text_window_t2_ParamLimits

0x7ea4,	// (0x0004658c) popup_snote2_single_text_window_t2

0x7ef0,	// (0x000465d8) popup_snote2_single_text_window_t3_ParamLimits

0x7ef0,	// (0x000465d8) popup_snote2_single_text_window_t3

0x7f31,	// (0x00046619) popup_snote2_single_text_window_t4_ParamLimits

0x7f31,	// (0x00046619) popup_snote2_single_text_window_t4

0x7f67,	// (0x0004664f) popup_snote2_single_text_window_t5_ParamLimits

0x7f67,	// (0x0004664f) popup_snote2_single_text_window_t5

0x0004,

0xfca6,	// (0x0004e38e) popup_snote2_single_text_window_t_ParamLimits

0xfca6,	// (0x0004e38e) popup_snote2_single_text_window_t

0x7f92,	// (0x0004667a) popup_snote2_single_graphic_window_g1_ParamLimits

0x7f92,	// (0x0004667a) popup_snote2_single_graphic_window_g1

0x7fba,	// (0x000466a2) popup_snote2_single_graphic_window_g2_ParamLimits

0x7fba,	// (0x000466a2) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb1,	// (0x0004e399) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb1,	// (0x0004e399) popup_snote2_single_graphic_window_g

0x7fe2,	// (0x000466ca) popup_snote2_single_graphic_window_t1_ParamLimits

0x7fe2,	// (0x000466ca) popup_snote2_single_graphic_window_t1

0x802e,	// (0x00046716) popup_snote2_single_graphic_window_t2_ParamLimits

0x802e,	// (0x00046716) popup_snote2_single_graphic_window_t2

0x7ef0,	// (0x000465d8) popup_snote2_single_graphic_window_t3_ParamLimits

0x7ef0,	// (0x000465d8) popup_snote2_single_graphic_window_t3

0x7f31,	// (0x00046619) popup_snote2_single_graphic_window_t4_ParamLimits

0x7f31,	// (0x00046619) popup_snote2_single_graphic_window_t4

0x7f67,	// (0x0004664f) popup_snote2_single_graphic_window_t5_ParamLimits

0x7f67,	// (0x0004664f) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb6,	// (0x0004e39e) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb6,	// (0x0004e39e) popup_snote2_single_graphic_window_t

0x6f76,	// (0x0004565e) clock_nsta_pane_cp2_t1

0x6f76,	// (0x0004565e) clock_nsta_pane_cp2_t2

0x0001,

0xfad1,	// (0x0004e1b9) clock_nsta_pane_cp2_t

0x941e,	// (0x00047b06) form_field_data_wide_pane_g1_ParamLimits

0x4590,	// (0x00042c78) form_field_data_wide_pane_g2_ParamLimits

0x4590,	// (0x00042c78) form_field_data_wide_pane_g2

0x45dc,	// (0x00042cc4) form_field_data_wide_pane_g3_ParamLimits

0x45dc,	// (0x00042cc4) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x0004dd6e) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x0004dd6e) form_field_data_wide_pane_g

0xcb07,	// (0x0004b1ef) grid_touch_3_pane_ParamLimits

0xcb07,	// (0x0004b1ef) grid_touch_3_pane

0xd0a6,	// (0x0004b78e) cell_touch_3_pane_ParamLimits

0xd0a6,	// (0x0004b78e) cell_touch_3_pane

0x7286,	// (0x0004596e) cell_touch_3_pane_g1

0x7286,	// (0x0004596e) cell_touch_3_pane_g2

0x0001,

0xfb56,	// (0x0004e23e) cell_touch_3_pane_g

0x419e,	// (0x00042886) cont_query_data_pane

0x41a6,	// (0x0004288e) cont_query_data_pane_cp1

0x807a,	// (0x00046762) button_value_adjust_pane_cp7

0x8082,	// (0x0004676a) query_popup_pane_cp3

0x4b7a,	// (0x00043262) bg_popup_sub_pane_cp22_ParamLimits

0x9757,	// (0x00047e3f) navi_navi_volume_pane_cp2

0x9772,	// (0x00047e5a) popup_side_volume_key_window_g2

0x9781,	// (0x00047e69) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x0004de04) popup_side_volume_key_window_g

0x979e,	// (0x00047e86) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x0004de0b) popup_side_volume_key_window_t

0x4dab,	// (0x00043493) popup_side_volume_key_window_ParamLimits

0x9078,	// (0x00047760) list_double_graphic_pane_g4_ParamLimits

0x9078,	// (0x00047760) list_double_graphic_pane_g4

0xc991,	// (0x0004b079) list_single_2heading_msg_pane_ParamLimits

0xc991,	// (0x0004b079) list_single_2heading_msg_pane

0xd0e9,	// (0x0004b7d1) list_single_2heading_msg_pane_g1_ParamLimits

0xd0e9,	// (0x0004b7d1) list_single_2heading_msg_pane_g1

0xd0f5,	// (0x0004b7dd) list_single_2heading_msg_pane_g2_ParamLimits

0xd0f5,	// (0x0004b7dd) list_single_2heading_msg_pane_g2

0xd101,	// (0x0004b7e9) list_single_2heading_msg_pane_g3_ParamLimits

0xd101,	// (0x0004b7e9) list_single_2heading_msg_pane_g3

0xd10d,	// (0x0004b7f5) list_single_2heading_msg_pane_g4_ParamLimits

0xd10d,	// (0x0004b7f5) list_single_2heading_msg_pane_g4

0x0003,

0xfcc1,	// (0x0004e3a9) list_single_2heading_msg_pane_g_ParamLimits

0xfcc1,	// (0x0004e3a9) list_single_2heading_msg_pane_g

0xc6a2,	// (0x0004ad8a) list_single_2heading_msg_pane_t1_ParamLimits

0xc6a2,	// (0x0004ad8a) list_single_2heading_msg_pane_t1

0xc6ca,	// (0x0004adb2) list_single_2heading_msg_pane_t2_ParamLimits

0xc6ca,	// (0x0004adb2) list_single_2heading_msg_pane_t2

0xc6fe,	// (0x0004ade6) list_single_2heading_msg_pane_t3_ParamLimits

0xc6fe,	// (0x0004ade6) list_single_2heading_msg_pane_t3

0xc737,	// (0x0004ae1f) list_single_2heading_msg_pane_t4_ParamLimits

0xc737,	// (0x0004ae1f) list_single_2heading_msg_pane_t4

0x0003,

0xfcca,	// (0x0004e3b2) list_single_2heading_msg_pane_t_ParamLimits

0xfcca,	// (0x0004e3b2) list_single_2heading_msg_pane_t

0x3f6f,	// (0x00042657) title_pane_g4_ParamLimits

0x3f6f,	// (0x00042657) title_pane_g4

0x9565,	// (0x00047c4d) title_pane_stacon_g3_ParamLimits

0x9565,	// (0x00047c4d) title_pane_stacon_g3

0x7c13,	// (0x000462fb) list_single_2graphic_im_pane_g4_ParamLimits

0x7c13,	// (0x000462fb) list_single_2graphic_im_pane_g4

0x6322,	// (0x00044a0a) popup_side_volume_key_window_cp

0x67ef,	// (0x00044ed7) main_idle_act2_pane_t1

0xa0cd,	// (0x000487b5) toolbar_button_pane_g10

0xb59b,	// (0x00049c83) popup_toolbar_window_cp1

0x6f67,	// (0x0004564f) clock_nsta_pane_cp_t1

0x6f67,	// (0x0004564f) clock_nsta_pane_cp_t2

0x0001,

0xfacc,	// (0x0004e1b4) clock_nsta_pane_cp_t

0x9757,	// (0x00047e3f) navi_navi_volume_pane_cp2_ParamLimits

0x9766,	// (0x00047e4e) popup_side_volume_key_window_g1_ParamLimits

0x9772,	// (0x00047e5a) popup_side_volume_key_window_g2_ParamLimits

0x9781,	// (0x00047e69) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x0004de04) popup_side_volume_key_window_g_ParamLimits

0xa58a,	// (0x00048c72) fep_hwr_aid_pane

0xa631,	// (0x00048d19) bg_fep_hwr_top_pane_g4_ParamLimits

0x72ea,	// (0x000459d2) fep_hwr_top_pane_g1_ParamLimits

0x72d8,	// (0x000459c0) fep_hwr_top_pane_g2_ParamLimits

0xa651,	// (0x00048d39) fep_hwr_top_pane_g3_ParamLimits

0xfb21,	// (0x0004e209) fep_hwr_top_pane_g_ParamLimits

0xa666,	// (0x00048d4e) fep_hwr_top_text_pane_ParamLimits

0x6100,	// (0x000447e8) aid_touch_tab_arrow_arrow_2

0x60f7,	// (0x000447df) aid_touch_tab_arrow_left_2

0xa59e,	// (0x00048c86) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xa5d5,	// (0x00048cbd) fep_hwr_prediction_pane

0x743f,	// (0x00045b27) fep_vkb_prediction_pane

0xce21,	// (0x0004b509) fep_vkb_side_pane_g3_ParamLimits

0xce21,	// (0x0004b509) fep_vkb_side_pane_g3

0xa7e1,	// (0x00048ec9) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xa84d,	// (0x00048f35) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xa85a,	// (0x00048f42) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd0,	// (0x0004e2b8) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xa989,	// (0x00049071) fep_hwr_prediction_pane_g1

0xa993,	// (0x0004907b) fep_hwr_prediction_pane_g2

0xa99b,	// (0x00049083) fep_hwr_prediction_pane_g3

0xa9a3,	// (0x0004908b) fep_hwr_prediction_pane_g4

0x0003,

0xfcd3,	// (0x0004e3bb) fep_hwr_prediction_pane_g

0xd125,	// (0x0004b80d) fep_vkb_prediction_pane_g1

0xd12f,	// (0x0004b817) fep_vkb_prediction_pane_g2

0xd137,	// (0x0004b81f) fep_vkb_prediction_pane_g3

0xd13f,	// (0x0004b827) fep_vkb_prediction_pane_g4

0x0003,

0xfcdc,	// (0x0004e3c4) fep_vkb_prediction_pane_g

0xa3b9,	// (0x00048aa1) slider_set_pane_g3

0xa3cd,	// (0x00048ab5) slider_set_pane_g4

0xa3e5,	// (0x00048acd) slider_set_pane_g5

0xa3b9,	// (0x00048aa1) slider_set_pane_g6

0xa3fb,	// (0x00048ae3) slider_set_pane_g7

0x6575,	// (0x00044c5d) slider_form_pane_g3

0x657e,	// (0x00044c66) slider_form_pane_g4

0x6586,	// (0x00044c6e) slider_form_pane_g5

0x6575,	// (0x00044c5d) slider_form_pane_g6

0xc91e,	// (0x0004b006) slider_form_pane_g7

0x6a65,	// (0x0004514d) slider_set_pane_vc_g3

0x6a6e,	// (0x00045156) slider_set_pane_vc_g4

0x6a77,	// (0x0004515f) slider_set_pane_vc_g5

0x6a65,	// (0x0004514d) slider_set_pane_vc_g6

0x6a80,	// (0x00045168) slider_set_pane_vc_g7

0x6c96,	// (0x0004537e) slider_form_pane_vc_g1

0x6c9f,	// (0x00045387) slider_form_pane_vc_g2

0x6ca8,	// (0x00045390) slider_form_pane_vc_g3

0x6c96,	// (0x0004537e) slider_form_pane_vc_g4

0x6cb1,	// (0x00045399) slider_form_pane_vc_g5

0x0004,

0xfa9e,	// (0x0004e186) slider_form_pane_vc_g

0x8bfe,	// (0x000472e6) main_idle_act3_pane

0xd147,	// (0x0004b82f) ai3_links_pane

0xd519,	// (0x0004bc01) popup_ai3_data_window_ParamLimits

0xd519,	// (0x0004bc01) popup_ai3_data_window

0x3f51,	// (0x00042639) grid_ai3_links_pane

0xd531,	// (0x0004bc19) cell_ai3_links_pane_ParamLimits

0xd531,	// (0x0004bc19) cell_ai3_links_pane

0xd150,	// (0x0004b838) bg_popup_sub_pane_cp11

0xd15d,	// (0x0004b845) cell_ai3_links_pane_g1

0x3f51,	// (0x00042639) bg_popup_sub_pane_cp12

0xd182,	// (0x0004b86a) heading_ai3_data_pane

0xd18a,	// (0x0004b872) list_ai3_gene_pane

0xd196,	// (0x0004b87e) popup_ai3_data_window_g1

0xd19e,	// (0x0004b886) heading_ai3_data_pane_g1

0xd1a6,	// (0x0004b88e) heading_ai3_data_pane_t1

0xd1b4,	// (0x0004b89c) list_double_ai3_gene_pane_ParamLimits

0xd1b4,	// (0x0004b89c) list_double_ai3_gene_pane

0xd1c1,	// (0x0004b8a9) list_single_ai3_gene_pane_ParamLimits

0xd1c1,	// (0x0004b8a9) list_single_ai3_gene_pane

0x724b,	// (0x00045933) list_highlight_pane_cp7_ParamLimits

0x724b,	// (0x00045933) list_highlight_pane_cp7

0xd1ce,	// (0x0004b8b6) list_single_a13_gene_pane_t1_ParamLimits

0xd1ce,	// (0x0004b8b6) list_single_a13_gene_pane_t1

0xd1e5,	// (0x0004b8cd) list_single_ai3_gene_pane_g1

0xd1ee,	// (0x0004b8d6) list_single_ai3_gene_pane_g2

0x0001,

0xfce5,	// (0x0004e3cd) list_single_ai3_gene_pane_g

0xd1f6,	// (0x0004b8de) list_double_ai3_gene_pane_g1_ParamLimits

0xd1f6,	// (0x0004b8de) list_double_ai3_gene_pane_g1

0xd202,	// (0x0004b8ea) list_double_ai3_gene_pane_t1_ParamLimits

0xd202,	// (0x0004b8ea) list_double_ai3_gene_pane_t1

0xd21e,	// (0x0004b906) list_double_ai3_gene_pane_t2_ParamLimits

0xd21e,	// (0x0004b906) list_double_ai3_gene_pane_t2

0xd233,	// (0x0004b91b) list_double_ai3_gene_pane_t3_ParamLimits

0xd233,	// (0x0004b91b) list_double_ai3_gene_pane_t3

0x0002,

0xfcea,	// (0x0004e3d2) list_double_ai3_gene_pane_t_ParamLimits

0xfcea,	// (0x0004e3d2) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc698,	// (0x0004ad80) aid_size_min_col_2

0xd0d5,	// (0x0004b7bd) aid_size_min_msg_ParamLimits

0xd0d5,	// (0x0004b7bd) aid_size_min_msg

0xce35,	// (0x0004b51d) fep_vkb_top_text_pane_g2_ParamLimits

0xce35,	// (0x0004b51d) fep_vkb_top_text_pane_g2

0x0001,

0xfb51,	// (0x0004e239) fep_vkb_top_text_pane_g_ParamLimits

0xfb51,	// (0x0004e239) fep_vkb_top_text_pane_g

0x8bfe,	// (0x000472e6) main_hc_apps_shell_pane

0xd250,	// (0x0004b938) grid_hc_apps_pane_ParamLimits

0xd250,	// (0x0004b938) grid_hc_apps_pane

0xd25f,	// (0x0004b947) list_hc_apps_pane

0xd267,	// (0x0004b94f) scroll_pane_cp37_ParamLimits

0xd267,	// (0x0004b94f) scroll_pane_cp37

0xd549,	// (0x0004bc31) cell_hc_apps_pane_ParamLimits

0xd549,	// (0x0004bc31) cell_hc_apps_pane

0xd5f9,	// (0x0004bce1) cell_hc_apps_pane_g1_ParamLimits

0xd5f9,	// (0x0004bce1) cell_hc_apps_pane_g1

0xd273,	// (0x0004b95b) cell_hc_apps_pane_g2_ParamLimits

0xd273,	// (0x0004b95b) cell_hc_apps_pane_g2

0xd28f,	// (0x0004b977) cell_hc_apps_pane_g3_ParamLimits

0xd28f,	// (0x0004b977) cell_hc_apps_pane_g3

0x0002,

0xfcf1,	// (0x0004e3d9) cell_hc_apps_pane_g_ParamLimits

0xfcf1,	// (0x0004e3d9) cell_hc_apps_pane_g

0xd62a,	// (0x0004bd12) cell_hc_apps_pane_t1_ParamLimits

0xd62a,	// (0x0004bd12) cell_hc_apps_pane_t1

0x40f4,	// (0x000427dc) grid_highlight_pane_cp10_ParamLimits

0x40f4,	// (0x000427dc) grid_highlight_pane_cp10

0xd66a,	// (0x0004bd52) list_single_hc_apps_pane_ParamLimits

0xd66a,	// (0x0004bd52) list_single_hc_apps_pane

0xd6dd,	// (0x0004bdc5) list_single_hc_apps_pane_g1

0xd2b1,	// (0x0004b999) list_single_hc_apps_pane_g2

0x0001,

0xfcf8,	// (0x0004e3e0) list_single_hc_apps_pane_g

0xd2ca,	// (0x0004b9b2) list_single_hc_apps_pane_g2_copy1

0xc75c,	// (0x0004ae44) list_single_hc_apps_pane_t1

0x3fc1,	// (0x000426a9) bg_set_opt_pane_cp_ParamLimits

0x8e41,	// (0x00047529) setting_slider_pane_t1_ParamLimits

0x8e5a,	// (0x00047542) setting_slider_pane_t2_ParamLimits

0x8e73,	// (0x0004755b) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0004dc4c) setting_slider_pane_t_ParamLimits

0x8e8a,	// (0x00047572) slider_set_pane_ParamLimits

0x99fc,	// (0x000480e4) control_pane_g5_ParamLimits

0x99fc,	// (0x000480e4) control_pane_g5

0x6537,	// (0x00044c1f) slider_set_pane_g1_ParamLimits

0xa3ad,	// (0x00048a95) slider_set_pane_g2_ParamLimits

0xa3b9,	// (0x00048aa1) slider_set_pane_g3_ParamLimits

0xa3cd,	// (0x00048ab5) slider_set_pane_g4_ParamLimits

0xa3e5,	// (0x00048acd) slider_set_pane_g5_ParamLimits

0xa3b9,	// (0x00048aa1) slider_set_pane_g6_ParamLimits

0xa3fb,	// (0x00048ae3) slider_set_pane_g7_ParamLimits

0xf96f,	// (0x0004e057) slider_set_pane_g_ParamLimits

0x4e4f,	// (0x00043537) navi_icon_text_pane_ParamLimits

0xbb09,	// (0x0004a1f1) aid_fill_nsta_2_ParamLimits

0xbb33,	// (0x0004a21b) aid_touch_tab_arrow_left_ParamLimits

0xbb42,	// (0x0004a22a) aid_touch_tab_arrow_right_ParamLimits

0xbbaf,	// (0x0004a297) clock_nsta_pane_ParamLimits

0x60d9,	// (0x000447c1) navi_icon_pane_g1_ParamLimits

0x60e5,	// (0x000447cd) navi_text_pane_t1_ParamLimits

0x6fbe,	// (0x000456a6) navi_icon_text_pane_g1_ParamLimits

0x6fca,	// (0x000456b2) navi_icon_text_pane_t1_ParamLimits

0xd6dd,	// (0x0004bdc5) list_single_hc_apps_pane_g1_ParamLimits

0xd2b1,	// (0x0004b999) list_single_hc_apps_pane_g2_ParamLimits

0xfcf8,	// (0x0004e3e0) list_single_hc_apps_pane_g_ParamLimits

0xd2ca,	// (0x0004b9b2) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc75c,	// (0x0004ae44) list_single_hc_apps_pane_t1_ParamLimits

0x8d5b,	// (0x00047443) popup_toolbar2_fixed_window_ParamLimits

0x8d5b,	// (0x00047443) popup_toolbar2_fixed_window

0x9fd3,	// (0x000486bb) popup_toolbar2_float_window

0x3f51,	// (0x00042639) bg_popup_sub_pane_cp27

0xd2e6,	// (0x0004b9ce) grid_toolbar2_float_pane

0x3f51,	// (0x00042639) bg_popup_sub_pane_cp26

0xd2e6,	// (0x0004b9ce) grid_toolbar2_fixed_pane

0xd6f6,	// (0x0004bdde) cell_toolbar2_fixed_pane_ParamLimits

0xd6f6,	// (0x0004bdde) cell_toolbar2_fixed_pane

0xd707,	// (0x0004bdef) cell_toolbar2_fixed_pane_g1

0xd2ee,	// (0x0004b9d6) toolbar2_fixed_button_pane

0x53dd,	// (0x00043ac5) toolbar2_fixed_button_pane_g1

0x53e5,	// (0x00043acd) toolbar2_fixed_button_pane_g2

0x53ed,	// (0x00043ad5) toolbar2_fixed_button_pane_g3

0x53f5,	// (0x00043add) toolbar2_fixed_button_pane_g4

0x53fd,	// (0x00043ae5) toolbar2_fixed_button_pane_g5

0x5405,	// (0x00043aed) toolbar2_fixed_button_pane_g6

0x540d,	// (0x00043af5) toolbar2_fixed_button_pane_g7

0x5415,	// (0x00043afd) toolbar2_fixed_button_pane_g8

0x541d,	// (0x00043b05) toolbar2_fixed_button_pane_g9

0x0008,

0xf871,	// (0x0004df59) toolbar2_fixed_button_pane_g

0xd2f6,	// (0x0004b9de) cell_toolbar2_float_pane_ParamLimits

0xd2f6,	// (0x0004b9de) cell_toolbar2_float_pane

0xd307,	// (0x0004b9ef) cell_toolbar2_float_pane_g1

0xd2ee,	// (0x0004b9d6) toolbar2_fixed_button_pane_cp

0xcde8,	// (0x0004b4d0) fep_vkb_accented_list_pane_ParamLimits

0xcde8,	// (0x0004b4d0) fep_vkb_accented_list_pane

0xa7c1,	// (0x00048ea9) bg_popup_fep_shadow_pane_g9

0x4fab,	// (0x00043693) bg_popup_fep_shadow_pane_cp3

0x46d5,	// (0x00042dbd) list_accented_list_pane

0xd310,	// (0x0004b9f8) list_single_accented_list_pane_ParamLimits

0xd310,	// (0x0004b9f8) list_single_accented_list_pane

0x4fab,	// (0x00043693) list_highlight_pane_cp10

0xd321,	// (0x0004ba09) list_single_accented_list_pane_t1

0x9f23,	// (0x0004860b) popup_slider_window_ParamLimits

0x9f23,	// (0x0004860b) popup_slider_window

0x808a,	// (0x00046772) aid_indentation_list_msg

0xd7bc,	// (0x0004bea4) bg_popup_window_pane_cp19

0xd38d,	// (0x0004ba75) popup_slider_window_g1

0xd3a9,	// (0x0004ba91) popup_slider_window_g2

0xd3c5,	// (0x0004baad) popup_slider_window_g3

0x0005,

0xfcfd,	// (0x0004e3e5) popup_slider_window_g

0xd3e1,	// (0x0004bac9) popup_slider_window_t1

0xd427,	// (0x0004bb0f) small_volume_slider_vertical_pane

0x7286,	// (0x0004596e) small_volume_slider_vertical_pane_g1

0x7286,	// (0x0004596e) small_volume_slider_vertical_pane_g2

0xd443,	// (0x0004bb2b) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0f,	// (0x0004e3f7) small_volume_slider_vertical_pane_g

0x8b21,	// (0x00047209) area_side_right_pane_ParamLimits

0x8b21,	// (0x00047209) area_side_right_pane

0xa9ab,	// (0x00049093) aid_size_side_button_ParamLimits

0xa9ab,	// (0x00049093) aid_size_side_button

0xa9bf,	// (0x000490a7) grid_sctrl_middle_pane_ParamLimits

0xa9bf,	// (0x000490a7) grid_sctrl_middle_pane

0xa9df,	// (0x000490c7) sctrl_sk_bottom_pane

0xa9f0,	// (0x000490d8) sctrl_sk_top_pane

0xaa02,	// (0x000490ea) aid_touch_sctrl_top

0xaa0f,	// (0x000490f7) bg_sctrl_sk_pane_ParamLimits

0xaa0f,	// (0x000490f7) bg_sctrl_sk_pane

0xaa1d,	// (0x00049105) sctrl_sk_top_pane_g1

0xaa2a,	// (0x00049112) sctrl_sk_top_pane_t1

0xaa02,	// (0x000490ea) aid_touch_sctrl_bottom

0xaa0f,	// (0x000490f7) bg_sctrl_sk_pane_cp_ParamLimits

0xaa0f,	// (0x000490f7) bg_sctrl_sk_pane_cp

0xaa45,	// (0x0004912d) sctrl_sk_bottom_pane_g1

0xaa2a,	// (0x00049112) sctrl_sk_bottom_pane_t1

0xaa4e,	// (0x00049136) cell_sctrl_middle_pane_ParamLimits

0xaa4e,	// (0x00049136) cell_sctrl_middle_pane

0xaa69,	// (0x00049151) aid_touch_sctrl_middle_ParamLimits

0xaa69,	// (0x00049151) aid_touch_sctrl_middle

0xaa7b,	// (0x00049163) bg_sctrl_middle_pane_ParamLimits

0xaa7b,	// (0x00049163) bg_sctrl_middle_pane

0xa7e1,	// (0x00048ec9) cell_sctrl_middle_pane_g1_ParamLimits

0xa7e1,	// (0x00048ec9) cell_sctrl_middle_pane_g1

0xaa89,	// (0x00049171) cell_sctrl_middle_pane_g2_ParamLimits

0xaa89,	// (0x00049171) cell_sctrl_middle_pane_g2

0x0001,

0xfd1b,	// (0x0004e403) cell_sctrl_middle_pane_g_ParamLimits

0xfd1b,	// (0x0004e403) cell_sctrl_middle_pane_g

0x53dd,	// (0x00043ac5) bg_sctrl_middle_pane_g1

0x53ed,	// (0x00043ad5) bg_sctrl_middle_pane_g2

0x53e5,	// (0x00043acd) bg_sctrl_middle_pane_g3

0x53fd,	// (0x00043ae5) bg_sctrl_middle_pane_g4

0x53f5,	// (0x00043add) bg_sctrl_middle_pane_g5

0x5405,	// (0x00043aed) bg_sctrl_middle_pane_g6

0x540d,	// (0x00043af5) bg_sctrl_middle_pane_g7

0x541d,	// (0x00043b05) bg_sctrl_middle_pane_g8

0x0007,

0xfd20,	// (0x0004e408) bg_sctrl_middle_pane_g

0x5415,	// (0x00043afd) bg_sctrl_middle_pane_g8_copy1

0x53dd,	// (0x00043ac5) bg_sctrl_sk_pane_g1

0x53e5,	// (0x00043acd) bg_sctrl_sk_pane_g2

0x53ed,	// (0x00043ad5) bg_sctrl_sk_pane_g3

0x0008,

0xf871,	// (0x0004df59) bg_sctrl_sk_pane_g

0x44ef,	// (0x00042bd7) aid_size_touch_scroll_bar

0x53f5,	// (0x00043add) bg_sctrl_sk_pane_g4

0x53fd,	// (0x00043ae5) bg_sctrl_sk_pane_g5

0x5405,	// (0x00043aed) bg_sctrl_sk_pane_g6

0x540d,	// (0x00043af5) bg_sctrl_sk_pane_g7

0x5415,	// (0x00043afd) bg_sctrl_sk_pane_g8

0x541d,	// (0x00043b05) bg_sctrl_sk_pane_g9

0x9b9c,	// (0x00048284) popup_fep_china_hwr2_fs_candidate_window

0x9ba6,	// (0x0004828e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9ba6,	// (0x0004828e) popup_fep_china_hwr2_fs_control_window

0xa7e1,	// (0x00048ec9) sctrl_sk_top_pane_g2

0x0001,

0xfd16,	// (0x0004e3fe) sctrl_sk_top_pane_g

0xd836,	// (0x0004bf1e) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd836,	// (0x0004bf1e) aid_fep_china_hwr2_fs_cell

0xd848,	// (0x0004bf30) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd848,	// (0x0004bf30) bg_popup_fep_shadow_pane_cp4

0xd85f,	// (0x0004bf47) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd85f,	// (0x0004bf47) bg_popup_fep_shadow_pane_cp5

0xd871,	// (0x0004bf59) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd871,	// (0x0004bf59) popup_fep_china_hwr2_fs_control_bar_grid

0xd881,	// (0x0004bf69) popup_fep_china_hwr2_fs_control_funtion_grid

0xd44c,	// (0x0004bb34) aid_fep_china_hwr2_fs_candi_cell

0x3f51,	// (0x00042639) bg_popup_fep_shadow_pane_cp6

0xd456,	// (0x0004bb3e) popup_fep_china_hwr2_fs_candidate_grid

0xd889,	// (0x0004bf71) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd889,	// (0x0004bf71) cell_fep_china_hwr2_fs_funtion_grid

0x7286,	// (0x0004596e) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd460,	// (0x0004bb48) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd460,	// (0x0004bb48) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd46e,	// (0x0004bb56) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd46e,	// (0x0004bb56) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd31,	// (0x0004e419) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd31,	// (0x0004e419) cell_fep_china_hwr2_fs_funtion_grid_g

0xd8a1,	// (0x0004bf89) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd8a1,	// (0x0004bf89) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8b6,	// (0x0004bf9e) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8b6,	// (0x0004bf9e) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd36,	// (0x0004e41e) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd36,	// (0x0004e41e) cell_fep_china_hwr2_fs_funtion_grid_t

0xd484,	// (0x0004bb6c) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd48c,	// (0x0004bb74) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd494,	// (0x0004bb7c) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3b,	// (0x0004e423) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd49c,	// (0x0004bb84) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd49c,	// (0x0004bb84) cell_fep_china_hwr2_fs_candidate_grid

0xd4b5,	// (0x0004bb9d) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd4bd,	// (0x0004bba5) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7286,	// (0x0004596e) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7286,	// (0x0004596e) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb56,	// (0x0004e23e) cell_fep_china_hwr2_fs_candidate_grid_g

0xd4c5,	// (0x0004bbad) cell_fep_china_hwr2_fs_candidate_grid_t1

0x522c,	// (0x00043914) clock_nsta_pane_cp_24_ParamLimits

0x522c,	// (0x00043914) clock_nsta_pane_cp_24

0x5294,	// (0x0004397c) indicator_nsta_pane_cp_24_ParamLimits

0x5294,	// (0x0004397c) indicator_nsta_pane_cp_24

0x5ff7,	// (0x000446df) heading_pane_g1

0x0001,

0xf8d6,	// (0x0004dfbe) heading_pane_g

0x667a,	// (0x00044d62) grid_sct_catagory_button_pane

0x5ede,	// (0x000445c6) scroll_pane_cp5_ParamLimits

0x6ff0,	// (0x000456d8) button_value_adjust_pane_cp5_ParamLimits

0x6ff0,	// (0x000456d8) button_value_adjust_pane_cp5

0x70ae,	// (0x00045796) form2_midp_time_pane_ParamLimits

0xd4d3,	// (0x0004bbbb) cell_sct_catagory_button_pane_ParamLimits

0xd4d3,	// (0x0004bbbb) cell_sct_catagory_button_pane

0x724b,	// (0x00045933) bg_button_pane_cp01_ParamLimits

0x724b,	// (0x00045933) bg_button_pane_cp01

0x7286,	// (0x0004596e) cell_sct_catagory_button_pane_g1

0x9f62,	// (0x0004864a) popup_tb_extension_window

0xd8d2,	// (0x0004bfba) aid_size_cell_ext_ParamLimits

0xd8d2,	// (0x0004bfba) aid_size_cell_ext

0x40f4,	// (0x000427dc) bg_tb_trans_pane_cp1_ParamLimits

0x40f4,	// (0x000427dc) bg_tb_trans_pane_cp1

0xd8f2,	// (0x0004bfda) grid_tb_ext_pane_ParamLimits

0xd8f2,	// (0x0004bfda) grid_tb_ext_pane

0xd922,	// (0x0004c00a) cell_tb_ext_pane_ParamLimits

0xd922,	// (0x0004c00a) cell_tb_ext_pane

0xd939,	// (0x0004c021) cell_tb_ext_pane_g1_ParamLimits

0xd939,	// (0x0004c021) cell_tb_ext_pane_g1

0xd4e5,	// (0x0004bbcd) cell_tb_ext_pane_t1

0x40f4,	// (0x000427dc) list_highlight_pane_cp11_ParamLimits

0x40f4,	// (0x000427dc) list_highlight_pane_cp11

0x8d7a,	// (0x00047462) popup_uni_indicator_window_ParamLimits

0x8d7a,	// (0x00047462) popup_uni_indicator_window

0x45c2,	// (0x00042caa) bg_popup_sub_pane_cp14

0xd500,	// (0x0004bbe8) list_uniindi_pane

0xd50c,	// (0x0004bbf4) uniindi_top_pane

0x40f4,	// (0x000427dc) bg_uniindi_top_pane

0xd968,	// (0x0004c050) uniindi_top_pane_g1

0xd97e,	// (0x0004c066) uniindi_top_pane_g2

0x0003,

0xfd42,	// (0x0004e42a) uniindi_top_pane_g

0xd9a8,	// (0x0004c090) uniindi_top_pane_t1

0xd9d2,	// (0x0004c0ba) list_single_uniindi_pane_ParamLimits

0xd9d2,	// (0x0004c0ba) list_single_uniindi_pane

0x7286,	// (0x0004596e) bg_uniindi_top_pane_g1

0xd9e4,	// (0x0004c0cc) list_single_uniindi_pane_g1

0xd9f7,	// (0x0004c0df) list_single_uniindi_pane_t1

0x8bfe,	// (0x000472e6) control_bg_pane

0xda1c,	// (0x0004c104) bg_sctrl_sk_pane_cp1

0xda25,	// (0x0004c10d) bg_sctrl_sk_pane_cp2

0xdc6f,	// (0x0004c357) control_bg_pane_g1

0xdc78,	// (0x0004c360) control_bg_pane_g2

0x0001,

0xfd4b,	// (0x0004e433) control_bg_pane_g

0x6ea9,	// (0x00045591) cell_indicator_nsta_pane_g1_ParamLimits

0xcb4b,	// (0x0004b233) cell_indicator_nsta_pane_g2_ParamLimits

0xfaba,	// (0x0004e1a2) cell_indicator_nsta_pane_g_ParamLimits

0xc461,	// (0x0004ab49) form2_midp_time_pane_t1_ParamLimits

0x9b08,	// (0x000481f0) main_idle_act4_pane_ParamLimits

0x9b08,	// (0x000481f0) main_idle_act4_pane

0x9f62,	// (0x0004864a) popup_tb_extension_window_ParamLimits

0xd912,	// (0x0004bffa) tb_ext_find_pane_ParamLimits

0xd912,	// (0x0004bffa) tb_ext_find_pane

0xdc81,	// (0x0004c369) ai_gene_pane_1_cp1

0x503f,	// (0x00043727) ai_gene_pane_2_cp1

0xdc89,	// (0x0004c371) list_single_idle_plugin_calendar_pane

0xdc92,	// (0x0004c37a) list_single_idle_plugin_notification_pane

0xdc9b,	// (0x0004c383) list_single_idle_plugin_player_pane

0xdca4,	// (0x0004c38c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdca4,	// (0x0004c38c) list_single_idle_plugin_shortcut_pane

0xdcc6,	// (0x0004c3ae) main_idle_act4_pane_t1

0xdcd8,	// (0x0004c3c0) main_idle_act4_pane_t2

0x0001,

0xfd50,	// (0x0004e438) main_idle_act4_pane_t

0xdcea,	// (0x0004c3d2) middle_sk_idle_act4_pane_ParamLimits

0xdcea,	// (0x0004c3d2) middle_sk_idle_act4_pane

0xdd00,	// (0x0004c3e8) popup_clock_digital_analogue_window_cp2

0xdd1a,	// (0x0004c402) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd1a,	// (0x0004c402) shortcut_wheel_idle_act4_pane

0x7286,	// (0x0004596e) shortcut_wheel_idle_act4_pane_g1

0x7286,	// (0x0004596e) shortcut_wheel_idle_act4_pane_g2

0x7286,	// (0x0004596e) shortcut_wheel_idle_act4_pane_g3

0x7286,	// (0x0004596e) shortcut_wheel_idle_act4_pane_g4

0x7286,	// (0x0004596e) shortcut_wheel_idle_act4_pane_g5

0xdd2e,	// (0x0004c416) shortcut_wheel_idle_act4_pane_g6

0xdd36,	// (0x0004c41e) shortcut_wheel_idle_act4_pane_g7

0xdd3e,	// (0x0004c426) shortcut_wheel_idle_act4_pane_g8

0xdd46,	// (0x0004c42e) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd55,	// (0x0004e43d) shortcut_wheel_idle_act4_pane_g

0x74ef,	// (0x00045bd7) middle_sk_idle_act4_pane_g1_ParamLimits

0x74ef,	// (0x00045bd7) middle_sk_idle_act4_pane_g1

0xddaa,	// (0x0004c492) middle_sk_idle_act4_pane_g2_ParamLimits

0xddaa,	// (0x0004c492) middle_sk_idle_act4_pane_g2

0x0001,

0xfd78,	// (0x0004e460) middle_sk_idle_act4_pane_g_ParamLimits

0xfd78,	// (0x0004e460) middle_sk_idle_act4_pane_g

0xddb6,	// (0x0004c49e) middle_sk_idle_act4_pane_t1_ParamLimits

0xddb6,	// (0x0004c49e) middle_sk_idle_act4_pane_t1

0xddd3,	// (0x0004c4bb) grid_ai_shortcut_pane_ParamLimits

0xddd3,	// (0x0004c4bb) grid_ai_shortcut_pane

0xddec,	// (0x0004c4d4) list_highlight_pane_cp16_ParamLimits

0xddec,	// (0x0004c4d4) list_highlight_pane_cp16

0xddf9,	// (0x0004c4e1) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xddf9,	// (0x0004c4e1) list_single_idle_plugin_shortcut_pane_g1

0xde05,	// (0x0004c4ed) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde05,	// (0x0004c4ed) list_single_idle_plugin_shortcut_pane_g2

0xde1d,	// (0x0004c505) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde1d,	// (0x0004c505) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7d,	// (0x0004e465) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7d,	// (0x0004e465) list_single_idle_plugin_shortcut_pane_g

0xde30,	// (0x0004c518) cell_ai_shortcut_pane_ParamLimits

0xde30,	// (0x0004c518) cell_ai_shortcut_pane

0xde51,	// (0x0004c539) cell_ai_shortcut_pane_g1_ParamLimits

0xde51,	// (0x0004c539) cell_ai_shortcut_pane_g1

0xdc81,	// (0x0004c369) ai_gene_pane_1_cp2

0xde73,	// (0x0004c55b) ai_gene_pane_2_cp2

0xde7b,	// (0x0004c563) list_highlight_pane_cp15

0xde84,	// (0x0004c56c) list_single_idle_plugin_calendar_pane_g1

0xde7b,	// (0x0004c563) list_highlight_pane_cp17

0xde8c,	// (0x0004c574) list_single_idle_plugin_calendar_pane_g1_copy1

0xde94,	// (0x0004c57c) list_single_idle_plugin_player_pane_g1

0x688f,	// (0x00044f77) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd84,	// (0x0004e46c) list_single_idle_plugin_player_pane_g

0xde9c,	// (0x0004c584) list_single_idle_plugin_player_pane_t1

0xdeaa,	// (0x0004c592) list_single_idle_plugin_player_pane_t2

0xdeb8,	// (0x0004c5a0) list_single_idle_plugin_player_pane_t3

0xdec6,	// (0x0004c5ae) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd89,	// (0x0004e471) list_single_idle_plugin_player_pane_t

0xded4,	// (0x0004c5bc) wait_bar_pane_cp15

0xdedc,	// (0x0004c5c4) grid_ai_notification_pane

0x688f,	// (0x00044f77) list_single_idle_plugin_notification_pane_g1

0xdee5,	// (0x0004c5cd) cell_ai_notification_pane_ParamLimits

0xdee5,	// (0x0004c5cd) cell_ai_notification_pane

0xdef2,	// (0x0004c5da) cell_ai_notification_pane_g1

0xdefa,	// (0x0004c5e2) cell_ai_notification_pane_t1

0xdf08,	// (0x0004c5f0) tb_ext_find_button_pane

0xdf10,	// (0x0004c5f8) tb_ext_find_pane_g1

0xdf18,	// (0x0004c600) tb_ext_find_pane_t1

0x4af0,	// (0x000431d8) tb_ext_find_button_pane_g1

0xdf26,	// (0x0004c60e) tb_ext_find_button_pane_g2

0x0001,

0xfd92,	// (0x0004e47a) tb_ext_find_button_pane_g

0xdcc6,	// (0x0004c3ae) main_idle_act4_pane_t1_ParamLimits

0xdcd8,	// (0x0004c3c0) main_idle_act4_pane_t2_ParamLimits

0xfd50,	// (0x0004e438) main_idle_act4_pane_t_ParamLimits

0xdd00,	// (0x0004c3e8) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd0e,	// (0x0004c3f6) sat_plugin_idle_act4_pane_ParamLimits

0xdd0e,	// (0x0004c3f6) sat_plugin_idle_act4_pane

0xdf2f,	// (0x0004c617) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf2f,	// (0x0004c617) sat_plugin_idle_act4_pane_t1

0xdf42,	// (0x0004c62a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf42,	// (0x0004c62a) sat_plugin_idle_act4_pane_t2

0xdf55,	// (0x0004c63d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf55,	// (0x0004c63d) sat_plugin_idle_act4_pane_t3

0xdf68,	// (0x0004c650) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf68,	// (0x0004c650) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd97,	// (0x0004e47f) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd97,	// (0x0004e47f) sat_plugin_idle_act4_pane_t

0x8cc3,	// (0x000473ab) popup_battery_window_ParamLimits

0x8cc3,	// (0x000473ab) popup_battery_window

0x40f4,	// (0x000427dc) bg_popup_sub_pane_cp25_ParamLimits

0x40f4,	// (0x000427dc) bg_popup_sub_pane_cp25

0xdf7b,	// (0x0004c663) popup_battery_window_g1_ParamLimits

0xdf7b,	// (0x0004c663) popup_battery_window_g1

0xdf87,	// (0x0004c66f) popup_battery_window_t1_ParamLimits

0xdf87,	// (0x0004c66f) popup_battery_window_t1

0xdf99,	// (0x0004c681) popup_battery_window_t2_ParamLimits

0xdf99,	// (0x0004c681) popup_battery_window_t2

0x0001,

0xfda0,	// (0x0004e488) popup_battery_window_t_ParamLimits

0xfda0,	// (0x0004e488) popup_battery_window_t

0xb9fd,	// (0x0004a0e5) midp_canvas_pane_ParamLimits

0xba61,	// (0x0004a149) midp_keypad_pane_ParamLimits

0xba61,	// (0x0004a149) midp_keypad_pane

0x4726,	// (0x00042e0e) main_midp_pane_ParamLimits

0x6f85,	// (0x0004566d) signal_pane_g2_cp_ParamLimits

0xdfb6,	// (0x0004c69e) aid_size_cell_midp_keypad_ParamLimits

0xdfb6,	// (0x0004c69e) aid_size_cell_midp_keypad

0xdfd0,	// (0x0004c6b8) midp_keyp_game_grid_pane_ParamLimits

0xdfd0,	// (0x0004c6b8) midp_keyp_game_grid_pane

0xdff0,	// (0x0004c6d8) midp_keyp_rocker_pane_ParamLimits

0xdff0,	// (0x0004c6d8) midp_keyp_rocker_pane

0xe01b,	// (0x0004c703) midp_keyp_sk_left_pane_ParamLimits

0xe01b,	// (0x0004c703) midp_keyp_sk_left_pane

0xe075,	// (0x0004c75d) midp_keyp_sk_right_pane_ParamLimits

0xe075,	// (0x0004c75d) midp_keyp_sk_right_pane

0x3f51,	// (0x00042639) bg_button_pane_cp03

0xe0cf,	// (0x0004c7b7) midp_keyp_sk_left_pane_g1

0x3f51,	// (0x00042639) bg_button_pane_cp04

0xe0cf,	// (0x0004c7b7) midp_keyp_sk_right_pane_g1

0x7286,	// (0x0004596e) midp_keyp_rocker_pane_g1

0xe0d8,	// (0x0004c7c0) keyp_game_cell_pane_ParamLimits

0xe0d8,	// (0x0004c7c0) keyp_game_cell_pane

0x3f51,	// (0x00042639) bg_button_pane_cp02

0xe0eb,	// (0x0004c7d3) keyp_game_cell_pane_g1

0x8cf9,	// (0x000473e1) popup_fep_vkb2_window_ParamLimits

0x8cf9,	// (0x000473e1) popup_fep_vkb2_window

0xaaa7,	// (0x0004918f) aid_size_cell_vkb2_ParamLimits

0xaaa7,	// (0x0004918f) aid_size_cell_vkb2

0xaafb,	// (0x000491e3) popup_fep_vkb2_window_g1_ParamLimits

0xaafb,	// (0x000491e3) popup_fep_vkb2_window_g1

0xab3b,	// (0x00049223) vkb2_area_bottom_pane_ParamLimits

0xab3b,	// (0x00049223) vkb2_area_bottom_pane

0xab87,	// (0x0004926f) vkb2_area_keypad_pane_ParamLimits

0xab87,	// (0x0004926f) vkb2_area_keypad_pane

0xabc9,	// (0x000492b1) vkb2_area_top_pane_ParamLimits

0xabc9,	// (0x000492b1) vkb2_area_top_pane

0xac43,	// (0x0004932b) vkb2_top_entry_pane_ParamLimits

0xac43,	// (0x0004932b) vkb2_top_entry_pane

0xac6d,	// (0x00049355) vkb2_top_grid_left_pane_ParamLimits

0xac6d,	// (0x00049355) vkb2_top_grid_left_pane

0xac8b,	// (0x00049373) vkb2_top_grid_right_pane_ParamLimits

0xac8b,	// (0x00049373) vkb2_top_grid_right_pane

0xaca9,	// (0x00049391) vkb2_cell_keypad_pane_ParamLimits

0xaca9,	// (0x00049391) vkb2_cell_keypad_pane

0xad7a,	// (0x00049462) vkb2_area_bottom_grid_pane_ParamLimits

0xad7a,	// (0x00049462) vkb2_area_bottom_grid_pane

0xada0,	// (0x00049488) vkb2_area_bottom_pane_g1_ParamLimits

0xada0,	// (0x00049488) vkb2_area_bottom_pane_g1

0xadc4,	// (0x000494ac) vkb2_area_bottom_pane_g2_ParamLimits

0xadc4,	// (0x000494ac) vkb2_area_bottom_pane_g2

0xadf2,	// (0x000494da) vkb2_area_bottom_pane_g3_ParamLimits

0xadf2,	// (0x000494da) vkb2_area_bottom_pane_g3

0x0002,

0xfda5,	// (0x0004e48d) vkb2_area_bottom_pane_g_ParamLimits

0xfda5,	// (0x0004e48d) vkb2_area_bottom_pane_g

0xae53,	// (0x0004953b) vkb2_top_cell_left_pane_ParamLimits

0xae53,	// (0x0004953b) vkb2_top_cell_left_pane

0xe0fc,	// (0x0004c7e4) vkb2_top_entry_pane_g1_ParamLimits

0xe0fc,	// (0x0004c7e4) vkb2_top_entry_pane_g1

0xe10a,	// (0x0004c7f2) vkb2_top_entry_pane_t1_ParamLimits

0xe10a,	// (0x0004c7f2) vkb2_top_entry_pane_t1

0xe13c,	// (0x0004c824) vkb2_top_entry_pane_t2_ParamLimits

0xe13c,	// (0x0004c824) vkb2_top_entry_pane_t2

0xe16e,	// (0x0004c856) vkb2_top_entry_pane_t3_ParamLimits

0xe16e,	// (0x0004c856) vkb2_top_entry_pane_t3

0x0002,

0xfdac,	// (0x0004e494) vkb2_top_entry_pane_t_ParamLimits

0xfdac,	// (0x0004e494) vkb2_top_entry_pane_t

0xaea0,	// (0x00049588) vkb2_top_grid_right_pane_g1_ParamLimits

0xaea0,	// (0x00049588) vkb2_top_grid_right_pane_g1

0xaeb6,	// (0x0004959e) vkb2_top_grid_right_pane_g2_ParamLimits

0xaeb6,	// (0x0004959e) vkb2_top_grid_right_pane_g2

0xaece,	// (0x000495b6) vkb2_top_grid_right_pane_g3_ParamLimits

0xaece,	// (0x000495b6) vkb2_top_grid_right_pane_g3

0xaee6,	// (0x000495ce) vkb2_top_grid_right_pane_g4_ParamLimits

0xaee6,	// (0x000495ce) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb3,	// (0x0004e49b) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb3,	// (0x0004e49b) vkb2_top_grid_right_pane_g

0xaefc,	// (0x000495e4) vkb2_top_cell_left_pane_g1

0xaf13,	// (0x000495fb) vkb2_cell_keypad_pane_g1_ParamLimits

0xaf13,	// (0x000495fb) vkb2_cell_keypad_pane_g1

0xe192,	// (0x0004c87a) vkb2_cell_keypad_pane_t1_ParamLimits

0xe192,	// (0x0004c87a) vkb2_cell_keypad_pane_t1

0xaf21,	// (0x00049609) vkb2_cell_bottom_grid_pane_ParamLimits

0xaf21,	// (0x00049609) vkb2_cell_bottom_grid_pane

0xaf5a,	// (0x00049642) vkb2_cell_bottom_grid_pane_g1

0xdd4e,	// (0x0004c436) aid_call2_pane_cp02

0xdd56,	// (0x0004c43e) aid_call_pane_cp02

0xdd5e,	// (0x0004c446) clock_digital_number_pane_cp10

0xdd66,	// (0x0004c44e) clock_digital_number_pane_cp11

0xdd6e,	// (0x0004c456) clock_digital_number_pane_cp12

0xdd76,	// (0x0004c45e) clock_digital_number_pane_cp13

0xdd7e,	// (0x0004c466) clock_digital_separator_pane_cp10

0x4af0,	// (0x000431d8) popup_clock_digital_analogue_window_cp2_g1

0x4af0,	// (0x000431d8) popup_clock_digital_analogue_window_cp2_g2

0xdd86,	// (0x0004c46e) popup_clock_digital_analogue_window_cp2_g3

0x4af0,	// (0x000431d8) popup_clock_digital_analogue_window_cp2_g4

0xdd86,	// (0x0004c46e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd68,	// (0x0004e450) popup_clock_digital_analogue_window_cp2_g

0xdd8e,	// (0x0004c476) popup_clock_digital_analogue_window_cp2_t1

0xdd9c,	// (0x0004c484) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd73,	// (0x0004e45b) popup_clock_digital_analogue_window_cp2_t

0x7286,	// (0x0004596e) clock_digital_number_pane_cp10_g1

0x7286,	// (0x0004596e) clock_digital_number_pane_cp10_g2

0x0001,

0xfb56,	// (0x0004e23e) clock_digital_number_pane_cp10_g

0x7286,	// (0x0004596e) clock_digital_separator_pane_cp10_g1

0x7286,	// (0x0004596e) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb56,	// (0x0004e23e) clock_digital_separator_pane_cp10_g

0xd98a,	// (0x0004c072) uniindi_top_pane_g3

0xd99b,	// (0x0004c083) uniindi_top_pane_g4

0xad34,	// (0x0004941c) vkb2_row_keypad_pane_ParamLimits

0xad34,	// (0x0004941c) vkb2_row_keypad_pane

0xaf7a,	// (0x00049662) vkb2_cell_t_keypad_pane_ParamLimits

0xaf7a,	// (0x00049662) vkb2_cell_t_keypad_pane

0xaf8a,	// (0x00049672) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xaf8a,	// (0x00049672) vkb2_cell_t_keypad_pane_cp08

0xaf9d,	// (0x00049685) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xaf9d,	// (0x00049685) vkb2_cell_t_keypad_pane_cp09

0xafb1,	// (0x00049699) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xafb1,	// (0x00049699) vkb2_cell_t_keypad_pane_cp01

0xafc2,	// (0x000496aa) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xafc2,	// (0x000496aa) vkb2_cell_t_keypad_pane_cp02

0xafd3,	// (0x000496bb) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xafd3,	// (0x000496bb) vkb2_cell_t_keypad_pane_cp03

0xafe4,	// (0x000496cc) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xafe4,	// (0x000496cc) vkb2_cell_t_keypad_pane_cp04

0xaff5,	// (0x000496dd) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xaff5,	// (0x000496dd) vkb2_cell_t_keypad_pane_cp05

0xb006,	// (0x000496ee) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xb006,	// (0x000496ee) vkb2_cell_t_keypad_pane_cp06

0xb017,	// (0x000496ff) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xb017,	// (0x000496ff) vkb2_cell_t_keypad_pane_cp07

0xb028,	// (0x00049710) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xb028,	// (0x00049710) vkb2_cell_t_keypad_pane_cp10

0xa7e1,	// (0x00048ec9) vkb2_cell_t_keypad_pane_g1

0xe1a9,	// (0x0004c891) vkb2_cell_t_keypad_pane_t1

0x8bfe,	// (0x000472e6) popup_grid_graphic2_window

0xe1bb,	// (0x0004c8a3) aid_size_cell_graphic2_ParamLimits

0xe1bb,	// (0x0004c8a3) aid_size_cell_graphic2

0xe397,	// (0x0004ca7f) bg_popup_window_pane_cp21_ParamLimits

0xe397,	// (0x0004ca7f) bg_popup_window_pane_cp21

0xe3a5,	// (0x0004ca8d) graphic2_pages_pane_ParamLimits

0xe3a5,	// (0x0004ca8d) graphic2_pages_pane

0xe3eb,	// (0x0004cad3) grid_graphic2_control_pane_ParamLimits

0xe3eb,	// (0x0004cad3) grid_graphic2_control_pane

0xe429,	// (0x0004cb11) grid_graphic2_pane_ParamLimits

0xe429,	// (0x0004cb11) grid_graphic2_pane

0xe49d,	// (0x0004cb85) cell_graphic2_pane

0x8bfe,	// (0x000472e6) main_comp_mode_pane

0xd18a,	// (0x0004b872) list_ai3_gene_pane_ParamLimits

0xd7bc,	// (0x0004bea4) bg_popup_window_pane_cp19_ParamLimits

0xd32f,	// (0x0004ba17) bg_touch_area_indi_pane_ParamLimits

0xd32f,	// (0x0004ba17) bg_touch_area_indi_pane

0xd345,	// (0x0004ba2d) bg_touch_area_indi_pane_cp01_ParamLimits

0xd345,	// (0x0004ba2d) bg_touch_area_indi_pane_cp01

0xd35b,	// (0x0004ba43) bg_touch_area_indi_pane_cp02_ParamLimits

0xd35b,	// (0x0004ba43) bg_touch_area_indi_pane_cp02

0xd373,	// (0x0004ba5b) bg_touch_area_indi_pane_cp03_ParamLimits

0xd373,	// (0x0004ba5b) bg_touch_area_indi_pane_cp03

0xd38d,	// (0x0004ba75) popup_slider_window_g1_ParamLimits

0xd3a9,	// (0x0004ba91) popup_slider_window_g2_ParamLimits

0xd3c5,	// (0x0004baad) popup_slider_window_g3_ParamLimits

0xfcfd,	// (0x0004e3e5) popup_slider_window_g_ParamLimits

0xd3e1,	// (0x0004bac9) popup_slider_window_t1_ParamLimits

0xd427,	// (0x0004bb0f) small_volume_slider_vertical_pane_ParamLimits

0xe49d,	// (0x0004cb85) cell_graphic2_pane_ParamLimits

0xe4eb,	// (0x0004cbd3) bg_button_pane_cp10_ParamLimits

0xe4eb,	// (0x0004cbd3) bg_button_pane_cp10

0xe4fe,	// (0x0004cbe6) bg_button_pane_cp11_ParamLimits

0xe4fe,	// (0x0004cbe6) bg_button_pane_cp11

0xe511,	// (0x0004cbf9) graphic2_pages_pane_g1_ParamLimits

0xe511,	// (0x0004cbf9) graphic2_pages_pane_g1

0xe52c,	// (0x0004cc14) graphic2_pages_pane_g2_ParamLimits

0xe52c,	// (0x0004cc14) graphic2_pages_pane_g2

0x0001,

0x0132,	// (0x0003e81a) graphic2_pages_pane_g_ParamLimits

0x0132,	// (0x0003e81a) graphic2_pages_pane_g

0xe544,	// (0x0004cc2c) graphic2_pages_pane_t1_ParamLimits

0xe544,	// (0x0004cc2c) graphic2_pages_pane_t1

0xe55a,	// (0x0004cc42) cell_graphic2_control_pane_ParamLimits

0xe55a,	// (0x0004cc42) cell_graphic2_control_pane

0xe57b,	// (0x0004cc63) cell_graphic2_pane_g1_ParamLimits

0xe57b,	// (0x0004cc63) cell_graphic2_pane_g1

0xe588,	// (0x0004cc70) cell_graphic2_pane_g2_ParamLimits

0xe588,	// (0x0004cc70) cell_graphic2_pane_g2

0xe595,	// (0x0004cc7d) cell_graphic2_pane_g3_ParamLimits

0xe595,	// (0x0004cc7d) cell_graphic2_pane_g3

0xe5a2,	// (0x0004cc8a) cell_graphic2_pane_g4_ParamLimits

0xe5a2,	// (0x0004cc8a) cell_graphic2_pane_g4

0xe5af,	// (0x0004cc97) cell_graphic2_pane_g5_ParamLimits

0xe5af,	// (0x0004cc97) cell_graphic2_pane_g5

0x0004,

0x0137,	// (0x0003e81f) cell_graphic2_pane_g_ParamLimits

0x0137,	// (0x0003e81f) cell_graphic2_pane_g

0xe5ca,	// (0x0004ccb2) cell_graphic2_pane_t1_ParamLimits

0xe5ca,	// (0x0004ccb2) cell_graphic2_pane_t1

0x54cd,	// (0x00043bb5) grid_highlight_pane_cp11_ParamLimits

0x54cd,	// (0x00043bb5) grid_highlight_pane_cp11

0x40f4,	// (0x000427dc) bg_button_pane_cp05

0xe5f3,	// (0x0004ccdb) cell_graphic2_control_pane_g1

0x7286,	// (0x0004596e) bg_touch_area_indi_pane_g1

0xe1f3,	// (0x0004c8db) aid_cmod_rocker_key_size

0xe1fd,	// (0x0004c8e5) aid_cmode_itu_key_size

0xe207,	// (0x0004c8ef) main_cmode_video_pane

0xe211,	// (0x0004c8f9) main_comp_mode_itu_pane

0xe21d,	// (0x0004c905) main_comp_mode_rocker_pane

0xe229,	// (0x0004c911) cell_cmode_rocker_pane_ParamLimits

0xe229,	// (0x0004c911) cell_cmode_rocker_pane

0xe23b,	// (0x0004c923) cell_cmode_itu_pane_ParamLimits

0xe23b,	// (0x0004c923) cell_cmode_itu_pane

0x45c2,	// (0x00042caa) bg_button_pane_cp06_ParamLimits

0x45c2,	// (0x00042caa) bg_button_pane_cp06

0x74ef,	// (0x00045bd7) cell_cmode_rocker_pane_g1_ParamLimits

0x74ef,	// (0x00045bd7) cell_cmode_rocker_pane_g1

0xd460,	// (0x0004bb48) cell_cmode_rocker_pane_g2_ParamLimits

0xd460,	// (0x0004bb48) cell_cmode_rocker_pane_g2

0x0001,

0xfdbc,	// (0x0004e4a4) cell_cmode_rocker_pane_g_ParamLimits

0xfdbc,	// (0x0004e4a4) cell_cmode_rocker_pane_g

0x3f51,	// (0x00042639) bg_button_pane_cp07

0xe250,	// (0x0004c938) cell_cmode_itu_pane_g1

0xe259,	// (0x0004c941) cell_cmode_itu_pane_t1

0xe267,	// (0x0004c94f) cell_cmode_itu_pane_t2

0x0001,

0xfdc1,	// (0x0004e4a9) cell_cmode_itu_pane_t

0xda0c,	// (0x0004c0f4) aid_touch_ctrl_left

0xda14,	// (0x0004c0fc) aid_touch_ctrl_right

0x3f51,	// (0x00042639) compa_mode_pane

0xe61b,	// (0x0004cd03) aid_cmod_rocker_key_size_cp

0xe625,	// (0x0004cd0d) aid_cmode_itu_key_size_cp

0xe275,	// (0x0004c95d) compa_mode_pane_g1

0xe27d,	// (0x0004c965) compa_mode_pane_g2

0xe285,	// (0x0004c96d) compa_mode_pane_g3

0x0002,

0xfdc6,	// (0x0004e4ae) compa_mode_pane_g

0xe62f,	// (0x0004cd17) main_comp_mode_itu_pane_cp

0xe637,	// (0x0004cd1f) main_comp_mode_rocker_pane_cp

0xe63f,	// (0x0004cd27) cell_cmode_itu_pane_cp_ParamLimits

0xe63f,	// (0x0004cd27) cell_cmode_itu_pane_cp

0xe654,	// (0x0004cd3c) cell_cmode_rocker_pane_cp_ParamLimits

0xe654,	// (0x0004cd3c) cell_cmode_rocker_pane_cp

0x45c2,	// (0x00042caa) bg_button_pane_cp06_cp_ParamLimits

0x45c2,	// (0x00042caa) bg_button_pane_cp06_cp

0x74ef,	// (0x00045bd7) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x74ef,	// (0x00045bd7) cell_cmode_rocker_pane_g1_cp

0x7286,	// (0x0004596e) cell_cmode_rocker_pane_g2_cp

0x3f51,	// (0x00042639) bg_button_pane_cp07_cp

0xe666,	// (0x0004cd4e) cell_cmode_itu_pane_g1_cp

0xe66f,	// (0x0004cd57) cell_cmode_itu_pane_t1_cp

0xe66f,	// (0x0004cd57) cell_cmode_itu_pane_t2_cp

0xc914,	// (0x0004affc) settings_code_pane_cp2

0x3fc1,	// (0x000426a9) bg_popup_window_pane_cp3_ParamLimits

0x42c2,	// (0x000429aa) heading_pane_cp3_ParamLimits

0x42ce,	// (0x000429b6) listscroll_popup_graphic_pane_ParamLimits

0xa58a,	// (0x00048c72) fep_hwr_aid_pane_ParamLimits

0xaa02,	// (0x000490ea) aid_touch_sctrl_top_ParamLimits

0xaa1d,	// (0x00049105) sctrl_sk_top_pane_g1_ParamLimits

0xa7e1,	// (0x00048ec9) sctrl_sk_top_pane_g2_ParamLimits

0xfd16,	// (0x0004e3fe) sctrl_sk_top_pane_g_ParamLimits

0xaa2a,	// (0x00049112) sctrl_sk_top_pane_t1_ParamLimits

0xaa02,	// (0x000490ea) aid_touch_sctrl_bottom_ParamLimits

0xaa2a,	// (0x00049112) sctrl_sk_bottom_pane_t1_ParamLimits

0xd956,	// (0x0004c03e) aid_area_touch_clock

0xac0b,	// (0x000492f3) aid_vkb2_area_top_pane_cell_ParamLimits

0xac0b,	// (0x000492f3) aid_vkb2_area_top_pane_cell

0xad56,	// (0x0004943e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xad56,	// (0x0004943e) aid_vkb2_area_bottom_pane_cell

0xe0f4,	// (0x0004c7dc) popup_char_count_window

0xe28d,	// (0x0004c975) popup_char_count_window_g1

0xe296,	// (0x0004c97e) popup_char_count_window_g2

0xe29f,	// (0x0004c987) popup_char_count_window_g3

0x0002,

0xfdcd,	// (0x0004e4b5) popup_char_count_window_g

0xe2a8,	// (0x0004c990) popup_char_count_window_t1

0xaad9,	// (0x000491c1) popup_fep_char_preview_window_ParamLimits

0xaad9,	// (0x000491c1) popup_fep_char_preview_window

0xac29,	// (0x00049311) vkb2_top_candi_pane_ParamLimits

0xac29,	// (0x00049311) vkb2_top_candi_pane

0xe67d,	// (0x0004cd65) cell_vkb2_top_candi_pane_ParamLimits

0xe67d,	// (0x0004cd65) cell_vkb2_top_candi_pane

0xb03d,	// (0x00049725) bg_popup_fep_char_preview_window_ParamLimits

0xb03d,	// (0x00049725) bg_popup_fep_char_preview_window

0xb04b,	// (0x00049733) popup_fep_char_preview_window_t1_ParamLimits

0xb04b,	// (0x00049733) popup_fep_char_preview_window_t1

0xe2b6,	// (0x0004c99e) bg_popup_fep_char_preview_window_g1

0xe2be,	// (0x0004c9a6) bg_popup_fep_char_preview_window_g2

0xe2c6,	// (0x0004c9ae) bg_popup_fep_char_preview_window_g3

0xe2ce,	// (0x0004c9b6) bg_popup_fep_char_preview_window_g4

0xe2d6,	// (0x0004c9be) bg_popup_fep_char_preview_window_g5

0xb085,	// (0x0004976d) bg_popup_fep_char_preview_window_g6

0xe2de,	// (0x0004c9c6) bg_popup_fep_char_preview_window_g7

0xe2e6,	// (0x0004c9ce) bg_popup_fep_char_preview_window_g8

0xe2ee,	// (0x0004c9d6) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd4,	// (0x0004e4bc) bg_popup_fep_char_preview_window_g

0xa7e1,	// (0x00048ec9) cell_vkb2_top_candi_pane_g1_ParamLimits

0xa7e1,	// (0x00048ec9) cell_vkb2_top_candi_pane_g1

0xa7ef,	// (0x00048ed7) cell_vkb2_top_candi_pane_g2_ParamLimits

0xa7ef,	// (0x00048ed7) cell_vkb2_top_candi_pane_g2

0xdc4e,	// (0x0004c336) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdc4e,	// (0x0004c336) cell_vkb2_top_candi_pane_g3

0xb08d,	// (0x00049775) cell_vkb2_top_candi_pane_g4_ParamLimits

0xb08d,	// (0x00049775) cell_vkb2_top_candi_pane_g4

0x77d9,	// (0x00045ec1) cell_vkb2_top_candi_pane_g5_ParamLimits

0x77d9,	// (0x00045ec1) cell_vkb2_top_candi_pane_g5

0xb0ae,	// (0x00049796) cell_vkb2_top_candi_pane_g6_ParamLimits

0xb0ae,	// (0x00049796) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde7,	// (0x0004e4cf) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde7,	// (0x0004e4cf) cell_vkb2_top_candi_pane_g

0xb0bc,	// (0x000497a4) cell_vkb2_top_candi_pane_t1

0xa399,	// (0x00048a81) aid_size_touch_slider_mark_ParamLimits

0xa399,	// (0x00048a81) aid_size_touch_slider_mark

0xe3db,	// (0x0004cac3) grid_graphic2_catg_pane_ParamLimits

0xe3db,	// (0x0004cac3) grid_graphic2_catg_pane

0xe479,	// (0x0004cb61) popup_grid_graphic2_window_t1_ParamLimits

0xe479,	// (0x0004cb61) popup_grid_graphic2_window_t1

0xe48b,	// (0x0004cb73) popup_grid_graphic2_window_t2_ParamLimits

0xe48b,	// (0x0004cb73) popup_grid_graphic2_window_t2

0x0001,

0x012d,	// (0x0003e815) popup_grid_graphic2_window_t_ParamLimits

0x012d,	// (0x0003e815) popup_grid_graphic2_window_t

0x40f4,	// (0x000427dc) bg_button_pane_cp05_ParamLimits

0xe5f3,	// (0x0004ccdb) cell_graphic2_control_pane_g1_ParamLimits

0xe6ca,	// (0x0004cdb2) cell_graphic2_catg_pane_ParamLimits

0xe6ca,	// (0x0004cdb2) cell_graphic2_catg_pane

0x3f51,	// (0x00042639) bg_button_pane_cp12

0xe6dc,	// (0x0004cdc4) cell_graphic2_catg_pane_g1

0xd4e5,	// (0x0004bbcd) cell_tb_ext_pane_t1_ParamLimits

0xae73,	// (0x0004955b) vkb2_top_cell_right_narrow_pane_ParamLimits

0xae73,	// (0x0004955b) vkb2_top_cell_right_narrow_pane

0xae8b,	// (0x00049573) vkb2_top_cell_right_wide_pane_ParamLimits

0xae8b,	// (0x00049573) vkb2_top_cell_right_wide_pane

0xa57c,	// (0x00048c64) bg_vkb2_func_pane_ParamLimits

0xa57c,	// (0x00048c64) bg_vkb2_func_pane

0xaefc,	// (0x000495e4) vkb2_top_cell_left_pane_g1_ParamLimits

0xa57c,	// (0x00048c64) bg_vkb2_fuc_pane_cp03_ParamLimits

0xa57c,	// (0x00048c64) bg_vkb2_fuc_pane_cp03

0xaf5a,	// (0x00049642) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x53ed,	// (0x00043ad5) bg_vkb2_func_pane_g1

0x53e5,	// (0x00043acd) bg_vkb2_func_pane_g2

0x53f5,	// (0x00043add) bg_vkb2_func_pane_g3

0x53fd,	// (0x00043ae5) bg_vkb2_func_pane_g4

0x5405,	// (0x00043aed) bg_vkb2_func_pane_g5

0x540d,	// (0x00043af5) bg_vkb2_func_pane_g6

0x541d,	// (0x00043b05) bg_vkb2_func_pane_g7

0x5415,	// (0x00043afd) bg_vkb2_func_pane_g8

0x53dd,	// (0x00043ac5) bg_vkb2_func_pane_g9

0x0008,

0xfdf4,	// (0x0004e4dc) bg_vkb2_func_pane_g

0xa57c,	// (0x00048c64) bg_vkb2_fuc_pane_cp01_ParamLimits

0xa57c,	// (0x00048c64) bg_vkb2_fuc_pane_cp01

0xaefc,	// (0x000495e4) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xaefc,	// (0x000495e4) vkb2_top_cell_right_wide_pane_g1

0xa57c,	// (0x00048c64) bg_vkb2_fuc_pane_cp02_ParamLimits

0xa57c,	// (0x00048c64) bg_vkb2_fuc_pane_cp02

0xaf5a,	// (0x00049642) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xaf5a,	// (0x00049642) vkb2_top_cell_right_narrow_pane_g1

0xd73a,	// (0x0004be22) aid_touch_area_decrease_ParamLimits

0xd73a,	// (0x0004be22) aid_touch_area_decrease

0xd75e,	// (0x0004be46) aid_touch_area_increase_ParamLimits

0xd75e,	// (0x0004be46) aid_touch_area_increase

0xd76a,	// (0x0004be52) aid_touch_area_mute_ParamLimits

0xd76a,	// (0x0004be52) aid_touch_area_mute

0xd78e,	// (0x0004be76) aid_touch_area_slider_ParamLimits

0xd78e,	// (0x0004be76) aid_touch_area_slider

0xd7c8,	// (0x0004beb0) popup_slider_window_g4_ParamLimits

0xd7c8,	// (0x0004beb0) popup_slider_window_g4

0xd7d4,	// (0x0004bebc) popup_slider_window_g5_ParamLimits

0xd7d4,	// (0x0004bebc) popup_slider_window_g5

0xd7f6,	// (0x0004bede) popup_slider_window_g6_ParamLimits

0xd7f6,	// (0x0004bede) popup_slider_window_g6

0xd40f,	// (0x0004baf7) popup_slider_window_t2_ParamLimits

0xd40f,	// (0x0004baf7) popup_slider_window_t2

0x0001,

0xfd0a,	// (0x0004e3f2) popup_slider_window_t_ParamLimits

0xfd0a,	// (0x0004e3f2) popup_slider_window_t

0xd808,	// (0x0004bef0) slider_pane_ParamLimits

0xd808,	// (0x0004bef0) slider_pane

0xe2f6,	// (0x0004c9de) slider_pane_g1_ParamLimits

0xe2f6,	// (0x0004c9de) slider_pane_g1

0xe30a,	// (0x0004c9f2) slider_pane_g2_ParamLimits

0xe30a,	// (0x0004c9f2) slider_pane_g2

0xe320,	// (0x0004ca08) slider_pane_g3_ParamLimits

0xe320,	// (0x0004ca08) slider_pane_g3

0x0003,

0xfe07,	// (0x0004e4ef) slider_pane_g_ParamLimits

0xfe07,	// (0x0004e4ef) slider_pane_g

0x9fbe,	// (0x000486a6) popup_tb_float_extension_window_ParamLimits

0x9fbe,	// (0x000486a6) popup_tb_float_extension_window

0xe34c,	// (0x0004ca34) aid_size_cell_tb_float_ext

0x3f51,	// (0x00042639) bg_popup_sub_window_cp28

0xe358,	// (0x0004ca40) grid_tb_float_ext_pane

0xe362,	// (0x0004ca4a) cell_tb_float_ext_pane_ParamLimits

0xe362,	// (0x0004ca4a) cell_tb_float_ext_pane

0xe37c,	// (0x0004ca64) cell_tb_float_ext_pane_g1

0xe385,	// (0x0004ca6d) grid_highlight_pane_cp12

0xa6cb,	// (0x00048db3) cell_last_hwr_side_pane_ParamLimits

0xa6cb,	// (0x00048db3) cell_last_hwr_side_pane

0x7286,	// (0x0004596e) cell_last_hwr_side_pane_g1

0xe38e,	// (0x0004ca76) cell_last_hwr_side_pane_g2

0x0001,

0xfe10,	// (0x0004e4f8) cell_last_hwr_side_pane_g

0xae22,	// (0x0004950a) vkb2_area_bottom_space_btn_pane_ParamLimits

0xae22,	// (0x0004950a) vkb2_area_bottom_space_btn_pane

0xa7e1,	// (0x00048ec9) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1a9,	// (0x0004c891) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xb0bc,	// (0x000497a4) cell_vkb2_top_candi_pane_t1_ParamLimits

0xb0db,	// (0x000497c3) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xb0db,	// (0x000497c3) vkb2_area_bottom_space_btn_pane_g1

0xb115,	// (0x000497fd) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xb115,	// (0x000497fd) vkb2_area_bottom_space_btn_pane_g2

0xb14b,	// (0x00049833) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xb14b,	// (0x00049833) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe15,	// (0x0004e4fd) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe15,	// (0x0004e4fd) vkb2_area_bottom_space_btn_pane_g

0xa63f,	// (0x00048d27) cel_fep_hwr_func_pane_ParamLimits

0xa63f,	// (0x00048d27) cel_fep_hwr_func_pane

0xa67b,	// (0x00048d63) cell_hwr_side_button_pane_ParamLimits

0xa67b,	// (0x00048d63) cell_hwr_side_button_pane

0xd956,	// (0x0004c03e) aid_area_touch_clock_ParamLimits

0x40f4,	// (0x000427dc) bg_uniindi_top_pane_ParamLimits

0xd968,	// (0x0004c050) uniindi_top_pane_g1_ParamLimits

0xd97e,	// (0x0004c066) uniindi_top_pane_g2_ParamLimits

0xd98a,	// (0x0004c072) uniindi_top_pane_g3_ParamLimits

0xd99b,	// (0x0004c083) uniindi_top_pane_g4_ParamLimits

0xfd42,	// (0x0004e42a) uniindi_top_pane_g_ParamLimits

0xd9a8,	// (0x0004c090) uniindi_top_pane_t1_ParamLimits

0x40f4,	// (0x000427dc) bg_vkb2_func_pane_cp01_ParamLimits

0x40f4,	// (0x000427dc) bg_vkb2_func_pane_cp01

0xe6e5,	// (0x0004cdcd) cel_fep_hwr_func_pane_g1_ParamLimits

0xe6e5,	// (0x0004cdcd) cel_fep_hwr_func_pane_g1

0x40f4,	// (0x000427dc) bg_vkb2_func_pane_cp02_ParamLimits

0x40f4,	// (0x000427dc) bg_vkb2_func_pane_cp02

0xe6e5,	// (0x0004cdcd) cell_hwr_side_button_pane_g1_ParamLimits

0xe6e5,	// (0x0004cdcd) cell_hwr_side_button_pane_g1

0x52f5,	// (0x000439dd) status_pane_g4_ParamLimits

0x52f5,	// (0x000439dd) status_pane_g4

0x530d,	// (0x000439f5) status_pane_t1

0x7116,	// (0x000457fe) form2_midp_gauge_slider_cont_pane

0x711e,	// (0x00045806) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcc5b,	// (0x0004b343) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcc6d,	// (0x0004b355) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb09,	// (0x0004e1f1) form2_midp_gauge_slider_pane_t_ParamLimits

0x7130,	// (0x00045818) form2_midp_slider_pane_ParamLimits

0xaa99,	// (0x00049181) aid_size_cell_func_vkb2_ParamLimits

0xaa99,	// (0x00049181) aid_size_cell_func_vkb2

0xe338,	// (0x0004ca20) slider_pane_g4_ParamLimits

0xe338,	// (0x0004ca20) slider_pane_g4

0xb195,	// (0x0004987d) form2_midp_gauge_slider_pane_t2_cp01

0xb1a3,	// (0x0004988b) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb1a3,	// (0x0004988b) form2_midp_gauge_slider_pane_t3_cp01

0xb1c0,	// (0x000498a8) form2_midp_slider_pane_cp01

0x3f51,	// (0x00042639) navi_smil_pane

0xe715,	// (0x0004cdfd) navi_smil_pane_g1

0xe71d,	// (0x0004ce05) navi_smil_pane_t1

0xe6f3,	// (0x0004cddb) form2_midp_slider_pane_g1

0xe6fc,	// (0x0004cde4) form2_midp_slider_pane_g2

0xe704,	// (0x0004cdec) form2_midp_slider_pane_g3

0xe6f3,	// (0x0004cddb) form2_midp_slider_pane_g4

0xda2e,	// (0x0004c116) form2_midp_slider_pane_g5

0x0004,

0xfe1e,	// (0x0004e506) form2_midp_slider_pane_g

0xb185,	// (0x0004986d) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xb185,	// (0x0004986d) vkb2_area_bottom_space_btn_pane_g4

0xbbd2,	// (0x0004a2ba) lc0_navi_pane_ParamLimits

0xbbd2,	// (0x0004a2ba) lc0_navi_pane

0xbc48,	// (0x0004a330) lc0_stat_indi_pane_ParamLimits

0xbc48,	// (0x0004a330) lc0_stat_indi_pane

0xbc5f,	// (0x0004a347) ls0_title_pane_ParamLimits

0xbc5f,	// (0x0004a347) ls0_title_pane

0x45c2,	// (0x00042caa) bg_popup_sub_pane_cp14_ParamLimits

0xd500,	// (0x0004bbe8) list_uniindi_pane_ParamLimits

0xd50c,	// (0x0004bbf4) uniindi_top_pane_ParamLimits

0xd9e4,	// (0x0004c0cc) list_single_uniindi_pane_g1_ParamLimits

0xd9f7,	// (0x0004c0df) list_single_uniindi_pane_t1_ParamLimits

0xb1c9,	// (0x000498b1) lc0_stat_clock_pane_ParamLimits

0xb1c9,	// (0x000498b1) lc0_stat_clock_pane

0xda37,	// (0x0004c11f) lc0_stat_indi_pane_g1_ParamLimits

0xda37,	// (0x0004c11f) lc0_stat_indi_pane_g1

0xda44,	// (0x0004c12c) lc0_stat_indi_pane_g2_ParamLimits

0xda44,	// (0x0004c12c) lc0_stat_indi_pane_g2

0x0001,

0xfe29,	// (0x0004e511) lc0_stat_indi_pane_g_ParamLimits

0xfe29,	// (0x0004e511) lc0_stat_indi_pane_g

0xb1d6,	// (0x000498be) lc0_uni_indicator_pane_ParamLimits

0xb1d6,	// (0x000498be) lc0_uni_indicator_pane

0xe72b,	// (0x0004ce13) ls0_title_pane_g1_ParamLimits

0xe72b,	// (0x0004ce13) ls0_title_pane_g1

0xda51,	// (0x0004c139) ls0_title_pane_t1_ParamLimits

0xda51,	// (0x0004c139) ls0_title_pane_t1

0xb1e3,	// (0x000498cb) lc0_uni_indicator_pane_g1_ParamLimits

0xb1e3,	// (0x000498cb) lc0_uni_indicator_pane_g1

0xe73f,	// (0x0004ce27) lc0_stat_clock_pane_t1

0x8bfe,	// (0x000472e6) main_ai5_pane

0xe74d,	// (0x0004ce35) ai5_sk_pane_ParamLimits

0xe74d,	// (0x0004ce35) ai5_sk_pane

0xda87,	// (0x0004c16f) cell_ai5_widget_pane_ParamLimits

0xda87,	// (0x0004c16f) cell_ai5_widget_pane

0xe75a,	// (0x0004ce42) aid_size_cell_widget_grid

0xe770,	// (0x0004ce58) bg_ai5_widget_pane_ParamLimits

0xe770,	// (0x0004ce58) bg_ai5_widget_pane

0xe7da,	// (0x0004cec2) cell_ai5_widget_pane_g2

0xe7ea,	// (0x0004ced2) cell_ai5_widget_pane_g3

0xe809,	// (0x0004cef1) cell_ai5_widget_pane_g4

0xe815,	// (0x0004cefd) cell_ai5_widget_pane_g5

0xe821,	// (0x0004cf09) cell_ai5_widget_pane_g6

0xe82d,	// (0x0004cf15) cell_ai5_widget_pane_g7

0xe875,	// (0x0004cf5d) cell_ai5_widget_pane_t1_ParamLimits

0xe875,	// (0x0004cf5d) cell_ai5_widget_pane_t1

0xe892,	// (0x0004cf7a) cell_ai5_widget_pane_t2_ParamLimits

0xe892,	// (0x0004cf7a) cell_ai5_widget_pane_t2

0xe8aa,	// (0x0004cf92) cell_ai5_widget_pane_t3_ParamLimits

0xe8aa,	// (0x0004cf92) cell_ai5_widget_pane_t3

0xe8c2,	// (0x0004cfaa) cell_ai5_widget_pane_t4_ParamLimits

0xe8c2,	// (0x0004cfaa) cell_ai5_widget_pane_t4

0xe8dc,	// (0x0004cfc4) cell_ai5_widget_pane_t5_ParamLimits

0xe8dc,	// (0x0004cfc4) cell_ai5_widget_pane_t5

0xe8fb,	// (0x0004cfe3) cell_ai5_widget_pane_t6_ParamLimits

0xe8fb,	// (0x0004cfe3) cell_ai5_widget_pane_t6

0xe90d,	// (0x0004cff5) cell_ai5_widget_pane_t7_ParamLimits

0xe90d,	// (0x0004cff5) cell_ai5_widget_pane_t7

0xe926,	// (0x0004d00e) cell_ai5_widget_pane_t8_ParamLimits

0xe926,	// (0x0004d00e) cell_ai5_widget_pane_t8

0x0009,

0x01ce,	// (0x0003e8b6) cell_ai5_widget_pane_t_ParamLimits

0x01ce,	// (0x0003e8b6) cell_ai5_widget_pane_t

0xe972,	// (0x0004d05a) grid_ai5_widget_pane

0x45c2,	// (0x00042caa) highlight_cell_ai5_widget_pane_ParamLimits

0x45c2,	// (0x00042caa) highlight_cell_ai5_widget_pane

0xdb57,	// (0x0004c23f) ai5_sk_left_pane

0xdb61,	// (0x0004c249) ai5_sk_middle_pane

0xdb6b,	// (0x0004c253) ai5_sk_right_pane

0xe986,	// (0x0004d06e) bg_ai5_widget_pane_g1_ParamLimits

0xe986,	// (0x0004d06e) bg_ai5_widget_pane_g1

0xe992,	// (0x0004d07a) bg_ai5_widget_pane_g2_ParamLimits

0xe992,	// (0x0004d07a) bg_ai5_widget_pane_g2

0xe99e,	// (0x0004d086) bg_ai5_widget_pane_g3_ParamLimits

0xe99e,	// (0x0004d086) bg_ai5_widget_pane_g3

0xe9aa,	// (0x0004d092) bg_ai5_widget_pane_g4_ParamLimits

0xe9aa,	// (0x0004d092) bg_ai5_widget_pane_g4

0xe9b6,	// (0x0004d09e) bg_ai5_widget_pane_g5_ParamLimits

0xe9b6,	// (0x0004d09e) bg_ai5_widget_pane_g5

0xe9c2,	// (0x0004d0aa) bg_ai5_widget_pane_g6_ParamLimits

0xe9c2,	// (0x0004d0aa) bg_ai5_widget_pane_g6

0xe9ce,	// (0x0004d0b6) bg_ai5_widget_pane_g7_ParamLimits

0xe9ce,	// (0x0004d0b6) bg_ai5_widget_pane_g7

0xe9da,	// (0x0004d0c2) bg_ai5_widget_pane_g8_ParamLimits

0xe9da,	// (0x0004d0c2) bg_ai5_widget_pane_g8

0xe9e6,	// (0x0004d0ce) bg_ai5_widget_pane_g9_ParamLimits

0xe9e6,	// (0x0004d0ce) bg_ai5_widget_pane_g9

0x0008,

0x01e3,	// (0x0003e8cb) bg_ai5_widget_pane_g_ParamLimits

0x01e3,	// (0x0003e8cb) bg_ai5_widget_pane_g

0xea19,	// (0x0004d101) cell_shortcut_ai5_widget_pane_ParamLimits

0xea19,	// (0x0004d101) cell_shortcut_ai5_widget_pane

0x4fab,	// (0x00043693) bg_cell_shortcut_ai5_widget_pane

0xea2a,	// (0x0004d112) cell_grid_ai5_widget_pane_g1

0xea33,	// (0x0004d11b) highlight_cell_shortcut_ai5_widget_pane

0x53ed,	// (0x00043ad5) ai5_sk_left_pane_g1

0xea3b,	// (0x0004d123) ai5_sk_left_pane_g2

0xea43,	// (0x0004d12b) ai5_sk_left_pane_g3

0xea4b,	// (0x0004d133) ai5_sk_left_pane_g4

0x0003,

0xfe2e,	// (0x0004e516) ai5_sk_left_pane_g

0xea53,	// (0x0004d13b) ai5_sk_left_pane_t1

0x53e5,	// (0x00043acd) ai5_sk_right_pane_g1

0xea61,	// (0x0004d149) ai5_sk_right_pane_g2

0xea69,	// (0x0004d151) ai5_sk_right_pane_g3

0xea71,	// (0x0004d159) ai5_sk_right_pane_g4

0x0003,

0xfe37,	// (0x0004e51f) ai5_sk_right_pane_g

0xea79,	// (0x0004d161) ai5_sk_right_pane_t1

0x53e5,	// (0x00043acd) ai5_sk_middle_pane_g1

0x53ed,	// (0x00043ad5) ai5_sk_middle_pane_g2

0x5405,	// (0x00043aed) ai5_sk_middle_pane_g3

0xea69,	// (0x0004d151) ai5_sk_middle_pane_g4

0xea43,	// (0x0004d12b) ai5_sk_middle_pane_g5

0xea87,	// (0x0004d16f) ai5_sk_middle_pane_g6

0xdb75,	// (0x0004c25d) ai5_sk_middle_pane_g7

0x0006,

0xfe40,	// (0x0004e528) ai5_sk_middle_pane_g

0xbb17,	// (0x0004a1ff) aid_touch_area_size_lc0_ParamLimits

0xbb17,	// (0x0004a1ff) aid_touch_area_size_lc0

0xa810,	// (0x00048ef8) cell_hwr_candidate_pane_t1_ParamLimits

0x5217,	// (0x000438ff) aid_touch_navi_pane

0xbd36,	// (0x0004a41e) status_dt_navi_pane_ParamLimits

0xbd36,	// (0x0004a41e) status_dt_navi_pane

0xbd43,	// (0x0004a42b) status_dt_sta_pane_ParamLimits

0xbd43,	// (0x0004a42b) status_dt_sta_pane

0xdb7d,	// (0x0004c265) dt_sta_controll_pane

0xdb8a,	// (0x0004c272) dt_sta_indi_pane

0xdb97,	// (0x0004c27f) dt_sta_title_pane

0x40f4,	// (0x000427dc) bg_dt_sta_indi_pane_ParamLimits

0x40f4,	// (0x000427dc) bg_dt_sta_indi_pane

0xea8f,	// (0x0004d177) dt_sta_battery_pane

0xea97,	// (0x0004d17f) dt_sta_indi_pane_g1

0xeaa0,	// (0x0004d188) dt_sta_indi_pane_g2

0xeaa9,	// (0x0004d191) dt_sta_indi_pane_g3

0x0002,

0x0217,	// (0x0003e8ff) dt_sta_indi_pane_g

0xeab2,	// (0x0004d19a) dt_sta_signal_pane

0x45c2,	// (0x00042caa) bg_dt_sta_title_pane_ParamLimits

0x45c2,	// (0x00042caa) bg_dt_sta_title_pane

0x60a9,	// (0x00044791) dt_sta_title_pane_g1

0xeabb,	// (0x0004d1a3) dt_sta_title_pane_t1_ParamLimits

0xeabb,	// (0x0004d1a3) dt_sta_title_pane_t1

0x3f51,	// (0x00042639) bg_dt_sta_control_pane

0xead0,	// (0x0004d1b8) dt_sta_controll_pane_g1

0xead9,	// (0x0004d1c1) bg_dt_sta_title_pane_g1

0xeae2,	// (0x0004d1ca) bg_dt_sta_title_pane_g2

0xeaeb,	// (0x0004d1d3) bg_dt_sta_title_pane_g3

0x0002,

0x021e,	// (0x0003e906) bg_dt_sta_title_pane_g

0x7286,	// (0x0004596e) bg_dt_sta_indi_pane_g1

0xeaf4,	// (0x0004d1dc) dt_sta_signal_pane_g1

0xeafc,	// (0x0004d1e4) dt_sta_signal_pane_g2

0x0001,

0x0225,	// (0x0003e90d) dt_sta_signal_pane_g

0xeb04,	// (0x0004d1ec) dt_sta_battery_pane_g1

0xeb0d,	// (0x0004d1f5) dt_sta_battery_pane_t1

0x7286,	// (0x0004596e) bg_dt_sta_control_pane_g1

0x4b9c,	// (0x00043284) fep_china_uni_eep_pane

0x4ba4,	// (0x0004328c) fep_china_uni_entry_pane_ParamLimits

0x4bb4,	// (0x0004329c) popup_fep_china_uni_window_g1_ParamLimits

0x4bc4,	// (0x000432ac) popup_fep_china_uni_window_g2_ParamLimits

0x4bc4,	// (0x000432ac) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x0004de10) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x0004de10) popup_fep_china_uni_window_g

0xeb1c,	// (0x0004d204) fep_china_uni_eep_pane_g1

0xeb24,	// (0x0004d20c) fep_china_uni_eep_pane_t1

0xe70c,	// (0x0004cdf4) aid_touch_area_size_smil_player

0x52c8,	// (0x000439b0) lc0_clock_pane

0x5301,	// (0x000439e9) status_pane_g5_ParamLimits

0x5301,	// (0x000439e9) status_pane_g5

0x9c8b,	// (0x00048373) popup_keymap_window

0x52e1,	// (0x000439c9) status_icon_pane

0xe7ea,	// (0x0004ced2) cell_ai5_widget_pane_g3_ParamLimits

0xe809,	// (0x0004cef1) cell_ai5_widget_pane_g4_ParamLimits

0xe815,	// (0x0004cefd) cell_ai5_widget_pane_g5_ParamLimits

0xe839,	// (0x0004cf21) cell_ai5_widget_pane_g8_ParamLimits

0xe839,	// (0x0004cf21) cell_ai5_widget_pane_g8

0xe84d,	// (0x0004cf35) cell_ai5_widget_pane_g9_ParamLimits

0xe84d,	// (0x0004cf35) cell_ai5_widget_pane_g9

0xe861,	// (0x0004cf49) cell_ai5_widget_pane_g10_ParamLimits

0xe861,	// (0x0004cf49) cell_ai5_widget_pane_g10

0xeb33,	// (0x0004d21b) status_icon_pane_g1

0x3f51,	// (0x00042639) bg_popup_sub_pane_cp13

0xeb3b,	// (0x0004d223) popup_keymap_window_t1

0xbab0,	// (0x0004a198) control_pane_g6_ParamLimits

0xbab0,	// (0x0004a198) control_pane_g6

0xbabd,	// (0x0004a1a5) control_pane_g7_ParamLimits

0xbabd,	// (0x0004a1a5) control_pane_g7

0xbaca,	// (0x0004a1b2) control_pane_g8_ParamLimits

0xbaca,	// (0x0004a1b2) control_pane_g8

0xdb7d,	// (0x0004c265) dt_sta_controll_pane_ParamLimits

0xdb8a,	// (0x0004c272) dt_sta_indi_pane_ParamLimits

0xdb97,	// (0x0004c27f) dt_sta_title_pane_ParamLimits

0x44f8,	// (0x00042be0) aid_size_touch_scroll_bar_cale

0x8cd7,	// (0x000473bf) popup_discreet_window_ParamLimits

0x8cd7,	// (0x000473bf) popup_discreet_window

0x8d51,	// (0x00047439) popup_sk_window

0x59cc,	// (0x000440b4) bg_popup_sub_pane_cp28_ParamLimits

0x59cc,	// (0x000440b4) bg_popup_sub_pane_cp28

0xeb49,	// (0x0004d231) popup_discreet_window_g1_ParamLimits

0xeb49,	// (0x0004d231) popup_discreet_window_g1

0xeb69,	// (0x0004d251) popup_discreet_window_t1_ParamLimits

0xeb69,	// (0x0004d251) popup_discreet_window_t1

0xeb87,	// (0x0004d26f) popup_discreet_window_t2_ParamLimits

0xeb87,	// (0x0004d26f) popup_discreet_window_t2

0x0002,

0x022a,	// (0x0003e912) popup_discreet_window_t_ParamLimits

0x022a,	// (0x0003e912) popup_discreet_window_t

0xb1f9,	// (0x000498e1) popup_sk_window_g1

0xb203,	// (0x000498eb) popup_sk_window_g2

0x0001,

0xfe4f,	// (0x0004e537) popup_sk_window_g

0xb20d,	// (0x000498f5) popup_sk_window_t1

0xb21b,	// (0x00049903) popup_sk_window_t1_copy1

0xe7da,	// (0x0004cec2) cell_ai5_widget_pane_g2_ParamLimits

0xe938,	// (0x0004d020) cell_ai5_widget_pane_t9_ParamLimits

0xe938,	// (0x0004d020) cell_ai5_widget_pane_t9

0x3f51,	// (0x00042639) main_fep_fshwr2_pane

0xb229,	// (0x00049911) aid_fshwr2_btn_pane

0xb235,	// (0x0004991d) aid_fshwr2_syb_pane

0xb246,	// (0x0004992e) aid_fshwr2_txt_pane

0xb252,	// (0x0004993a) fshwr2_func_candi_pane

0xb267,	// (0x0004994f) fshwr2_hwr_syb_pane

0xb27e,	// (0x00049966) fshwr2_icf_pane

0x3f51,	// (0x00042639) fshwr2_icf_bg_pane

0xdba8,	// (0x0004c290) fshwr2_icf_pane_t1_ParamLimits

0xdba8,	// (0x0004c290) fshwr2_icf_pane_t1

0x7286,	// (0x0004596e) fshwr2_func_candi_pane_g1

0xebd9,	// (0x0004d2c1) fshwr2_func_candi_row_pane_ParamLimits

0xebd9,	// (0x0004d2c1) fshwr2_func_candi_row_pane

0xdbbf,	// (0x0004c2a7) cell_fshwr2_syb_pane_ParamLimits

0xdbbf,	// (0x0004c2a7) cell_fshwr2_syb_pane

0x74ef,	// (0x00045bd7) fshwr2_hwr_syb_pane_g1_ParamLimits

0x74ef,	// (0x00045bd7) fshwr2_hwr_syb_pane_g1

0x3f51,	// (0x00042639) bg_popup_call_pane_cp01

0xebea,	// (0x0004d2d2) fshwr2_func_candi_cell_pane_ParamLimits

0xebea,	// (0x0004d2d2) fshwr2_func_candi_cell_pane

0xec1b,	// (0x0004d303) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec1b,	// (0x0004d303) fshwr2_func_candi_cell_bg_pane

0xec35,	// (0x0004d31d) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec35,	// (0x0004d31d) fshwr2_func_candi_cell_pane_g1

0xec55,	// (0x0004d33d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xec55,	// (0x0004d33d) fshwr2_func_candi_cell_pane_t1

0x3f51,	// (0x00042639) bg_button_pane_cp08

0x4fab,	// (0x00043693) cell_fshwr2_syb_bg_pane

0xdbdb,	// (0x0004c2c3) cell_fshwr2_syb_bg_pane_g1

0xec68,	// (0x0004d350) cell_fshwr2_syb_bg_pane_t1

0x45c2,	// (0x00042caa) main_tmo_pane

0xc14b,	// (0x0004a833) uni_indicator_pane_g1_ParamLimits

0xc160,	// (0x0004a848) uni_indicator_pane_g2_ParamLimits

0x6387,	// (0x00044a6f) uni_indicator_pane_g3_ParamLimits

0x639d,	// (0x00044a85) uni_indicator_pane_g4_ParamLimits

0x639d,	// (0x00044a85) uni_indicator_pane_g4

0x63b1,	// (0x00044a99) uni_indicator_pane_g5_ParamLimits

0x63b1,	// (0x00044a99) uni_indicator_pane_g5

0x63c5,	// (0x00044aad) uni_indicator_pane_g6_ParamLimits

0x63c5,	// (0x00044aad) uni_indicator_pane_g6

0xf92c,	// (0x0004e014) uni_indicator_pane_g_ParamLimits

0xd71c,	// (0x0004be04) popup_tmo_note_window_ParamLimits

0xd71c,	// (0x0004be04) popup_tmo_note_window

0xaa7b,	// (0x00049163) fshwr2_bg_pane

0xec46,	// (0x0004d32e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xec46,	// (0x0004d32e) fshwr2_func_candi_cell_pane_g2

0x0001,

0x0236,	// (0x0003e91e) fshwr2_func_candi_cell_pane_g_ParamLimits

0x0236,	// (0x0003e91e) fshwr2_func_candi_cell_pane_g

0x7286,	// (0x0004596e) bg_popup_window_pane_cp01

0xec77,	// (0x0004d35f) bg_popup_window_pane_g1_cp01

0xec80,	// (0x0004d368) bg_popup_window_pane_cp22_ParamLimits

0xec80,	// (0x0004d368) bg_popup_window_pane_cp22

0xec8e,	// (0x0004d376) listscroll_tmo_link_pane_ParamLimits

0xec8e,	// (0x0004d376) listscroll_tmo_link_pane

0xecce,	// (0x0004d3b6) popup_tmo_note_window_g1_ParamLimits

0xecce,	// (0x0004d3b6) popup_tmo_note_window_g1

0xecdb,	// (0x0004d3c3) tmo_note_info_pane_ParamLimits

0xecdb,	// (0x0004d3c3) tmo_note_info_pane

0xdbe3,	// (0x0004c2cb) list_tmo_note_info_pane_g1_ParamLimits

0xdbe3,	// (0x0004c2cb) list_tmo_note_info_pane_g1

0xecf5,	// (0x0004d3dd) list_tmo_note_info_pane_g2_ParamLimits

0xecf5,	// (0x0004d3dd) list_tmo_note_info_pane_g2

0x0001,

0xfe54,	// (0x0004e53c) list_tmo_note_info_pane_g_ParamLimits

0xfe54,	// (0x0004e53c) list_tmo_note_info_pane_g

0xed11,	// (0x0004d3f9) list_tmo_note_info_text_pane_ParamLimits

0xed11,	// (0x0004d3f9) list_tmo_note_info_text_pane

0xed53,	// (0x0004d43b) list_tmo_link_pane

0xed60,	// (0x0004d448) scroll_pane_cp20

0xed6d,	// (0x0004d455) list_single_tmo_link_pane_ParamLimits

0xed6d,	// (0x0004d455) list_single_tmo_link_pane

0xed7d,	// (0x0004d465) list_single_tmo_link_pane_t1

0xed8b,	// (0x0004d473) list_tmo_note_info_text_pane_t1_ParamLimits

0xed8b,	// (0x0004d473) list_tmo_note_info_text_pane_t1

0xb6f9,	// (0x00049de1) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb6f9,	// (0x00049de1) aid_size_touch_scroll_bar_cp01

0x9483,	// (0x00047b6b) aid_size_touch_slider_marker

0x8d39,	// (0x00047421) popup_settings_window_ParamLimits

0x8d39,	// (0x00047421) popup_settings_window

0xbaeb,	// (0x0004a1d3) popup_candi_list_indi_window

0x5217,	// (0x000438ff) aid_touch_navi_pane_ParamLimits

0xa9d6,	// (0x000490be) rs_clock_indi_pane

0xa9df,	// (0x000490c7) sctrl_sk_bottom_pane_ParamLimits

0xa9f0,	// (0x000490d8) sctrl_sk_top_pane_ParamLimits

0xaaf3,	// (0x000491db) popup_fep_tooltip_window

0xe75a,	// (0x0004ce42) aid_size_cell_widget_grid_ParamLimits

0xe7ce,	// (0x0004ceb6) cell_ai5_widget_pane_g1_ParamLimits

0xe7ce,	// (0x0004ceb6) cell_ai5_widget_pane_g1

0xe821,	// (0x0004cf09) cell_ai5_widget_pane_g6_ParamLimits

0xe82d,	// (0x0004cf15) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x01b9,	// (0x0003e8a1) cell_ai5_widget_pane_g_ParamLimits

0x01b9,	// (0x0003e8a1) cell_ai5_widget_pane_g

0xe95c,	// (0x0004d044) cell_ai5_widget_pane_t10_ParamLimits

0xe95c,	// (0x0004d044) cell_ai5_widget_pane_t10

0xe972,	// (0x0004d05a) grid_ai5_widget_pane_ParamLimits

0xe9f2,	// (0x0004d0da) cell_contacts_ai5_widget_pane_ParamLimits

0xe9f2,	// (0x0004d0da) cell_contacts_ai5_widget_pane

0xeb9c,	// (0x0004d284) popup_discreet_window_t3_ParamLimits

0xeb9c,	// (0x0004d284) popup_discreet_window_t3

0xb293,	// (0x0004997b) popup_fshwr2_char_preview_window_ParamLimits

0xb293,	// (0x0004997b) popup_fshwr2_char_preview_window

0xdbfa,	// (0x0004c2e2) tmo_note_info_pane_t1

0xdc0f,	// (0x0004c2f7) tmo_note_info_pane_t2

0xdc28,	// (0x0004c310) tmo_note_info_pane_t3

0xed2f,	// (0x0004d417) tmo_note_info_pane_t4

0xed41,	// (0x0004d429) tmo_note_info_pane_t5

0x0004,

0xfe59,	// (0x0004e541) tmo_note_info_pane_t

0xed53,	// (0x0004d43b) list_tmo_link_pane_ParamLimits

0xed60,	// (0x0004d448) scroll_pane_cp20_ParamLimits

0x3f51,	// (0x00042639) bg_popup_fep_char_preview_window_cp01

0xeda4,	// (0x0004d48c) popup_fshwr2_char_preview_window_t1

0xedb2,	// (0x0004d49a) popup_candi_list_indi_window_g1

0xedbb,	// (0x0004d4a3) bg_cell_contacts_ai5_widget_pane

0xedc7,	// (0x0004d4af) cell_contacts_ai5_widget_pane_g1

0xedda,	// (0x0004d4c2) cell_contacts_ai5_widget_pane_g2

0xede6,	// (0x0004d4ce) cell_contacts_ai5_widget_pane_g3

0x0002,

0x024b,	// (0x0003e933) cell_contacts_ai5_widget_pane_g

0xedf8,	// (0x0004d4e0) cell_contacts_ai5_widget_pane_t1

0x45c2,	// (0x00042caa) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee72,	// (0x0004d55a) settings_container_pane

0x4fab,	// (0x00043693) listscroll_set_pane_copy1

0x6bf3,	// (0x000452db) scroll_pane_cp121_copy1

0xee7e,	// (0x0004d566) set_content_pane_copy1

0xee86,	// (0x0004d56e) aid_height_set_list_copy1_ParamLimits

0xee86,	// (0x0004d56e) aid_height_set_list_copy1

0x5ecc,	// (0x000445b4) aid_size_parent_copy1_ParamLimits

0x5ecc,	// (0x000445b4) aid_size_parent_copy1

0xee92,	// (0x0004d57a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee92,	// (0x0004d57a) button_value_adjust_pane_cp6_copy1

0x4726,	// (0x00042e0e) list_highlight_pane_cp2_copy1_ParamLimits

0x4726,	// (0x00042e0e) list_highlight_pane_cp2_copy1

0xeea6,	// (0x0004d58e) list_set_pane_copy1_ParamLimits

0xeea6,	// (0x0004d58e) list_set_pane_copy1

0xee0d,	// (0x0004d4f5) main_pane_set_t1_copy1_ParamLimits

0xee0d,	// (0x0004d4f5) main_pane_set_t1_copy1

0xee47,	// (0x0004d52f) main_pane_set_t2_copy1_ParamLimits

0xee47,	// (0x0004d52f) main_pane_set_t2_copy1

0xef53,	// (0x0004d63b) main_pane_set_t3_copy1

0xef61,	// (0x0004d649) main_pane_set_t4_copy1

0xee66,	// (0x0004d54e) set_content_pane_g1_copy1_ParamLimits

0xee66,	// (0x0004d54e) set_content_pane_g1_copy1

0xef6f,	// (0x0004d657) setting_code_pane_copy1

0xef77,	// (0x0004d65f) setting_slider_graphic_pane_copy1

0xef77,	// (0x0004d65f) setting_slider_pane_copy1

0xef77,	// (0x0004d65f) setting_text_pane_copy1

0xef77,	// (0x0004d65f) setting_volume_pane_copy1

0xef6f,	// (0x0004d657) settings_code_pane_cp2_copy1

0xef7f,	// (0x0004d667) settings_code_pane_cp_copy1_ParamLimits

0xef7f,	// (0x0004d667) settings_code_pane_cp_copy1

0xef93,	// (0x0004d67b) volume_set_pane_copy1

0xef9b,	// (0x0004d683) volume_set_pane_g10_copy1

0xefa3,	// (0x0004d68b) volume_set_pane_g1_copy1

0xefab,	// (0x0004d693) volume_set_pane_g2_copy1

0xefb3,	// (0x0004d69b) volume_set_pane_g3_copy1

0xefbb,	// (0x0004d6a3) volume_set_pane_g4_copy1

0xefc3,	// (0x0004d6ab) volume_set_pane_g5_copy1

0xefcb,	// (0x0004d6b3) volume_set_pane_g6_copy1

0xefd3,	// (0x0004d6bb) volume_set_pane_g7_copy1

0xefdb,	// (0x0004d6c3) volume_set_pane_g8_copy1

0xefe3,	// (0x0004d6cb) volume_set_pane_g9_copy1

0x3fc1,	// (0x000426a9) bg_set_opt_pane_cp_copy1_ParamLimits

0x3fc1,	// (0x000426a9) bg_set_opt_pane_cp_copy1

0xefeb,	// (0x0004d6d3) setting_slider_pane_t1_copy1_ParamLimits

0xefeb,	// (0x0004d6d3) setting_slider_pane_t1_copy1

0xf009,	// (0x0004d6f1) setting_slider_pane_t2_copy1_ParamLimits

0xf009,	// (0x0004d6f1) setting_slider_pane_t2_copy1

0xf023,	// (0x0004d70b) setting_slider_pane_t3_copy1_ParamLimits

0xf023,	// (0x0004d70b) setting_slider_pane_t3_copy1

0xf03b,	// (0x0004d723) slider_set_pane_copy1_ParamLimits

0xf03b,	// (0x0004d723) slider_set_pane_copy1

0x461d,	// (0x00042d05) set_opt_bg_pane_g1_copy2

0x4625,	// (0x00042d0d) set_opt_bg_pane_g2_copy2

0xf051,	// (0x0004d739) set_opt_bg_pane_g3_copy2

0x4635,	// (0x00042d1d) set_opt_bg_pane_g4_copy2

0x463d,	// (0x00042d25) set_opt_bg_pane_g5_copy2

0x4645,	// (0x00042d2d) set_opt_bg_pane_g6_copy2

0xf05b,	// (0x0004d743) set_opt_bg_pane_g7_copy2

0xf063,	// (0x0004d74b) set_opt_bg_pane_g8_copy2

0xf06d,	// (0x0004d755) set_opt_bg_pane_g9_copy2

0xf077,	// (0x0004d75f) aid_size_touch_slider_mark_copy1_ParamLimits

0xf077,	// (0x0004d75f) aid_size_touch_slider_mark_copy1

0xf08b,	// (0x0004d773) slider_set_pane_g1_copy1

0xf094,	// (0x0004d77c) slider_set_pane_g2_copy1

0x6b4f,	// (0x00045237) slider_set_pane_g3_copy1_ParamLimits

0x6b4f,	// (0x00045237) slider_set_pane_g3_copy1

0x6b63,	// (0x0004524b) slider_set_pane_g4_copy1_ParamLimits

0x6b63,	// (0x0004524b) slider_set_pane_g4_copy1

0x6b7b,	// (0x00045263) slider_set_pane_g5_copy1_ParamLimits

0x6b7b,	// (0x00045263) slider_set_pane_g5_copy1

0x6b4f,	// (0x00045237) slider_set_pane_g6_copy1_ParamLimits

0x6b4f,	// (0x00045237) slider_set_pane_g6_copy1

0xf09c,	// (0x0004d784) slider_set_pane_g7_copy1_ParamLimits

0xf09c,	// (0x0004d784) slider_set_pane_g7_copy1

0x3f65,	// (0x0004264d) bg_set_opt_pane_cp2_copy1

0xf0b2,	// (0x0004d79a) setting_slider_graphic_pane_g1_copy1

0xf0bb,	// (0x0004d7a3) setting_slider_graphic_pane_t1_copy1

0xf0cb,	// (0x0004d7b3) setting_slider_graphic_pane_t2_copy1

0xf0db,	// (0x0004d7c3) slider_set_pane_cp_copy1

0xf0eb,	// (0x0004d7d3) input_focus_pane_cp1_copy1

0xf0f4,	// (0x0004d7dc) list_set_text_pane_copy1

0xf0fc,	// (0x0004d7e4) setting_text_pane_g1_copy1

0xc78a,	// (0x0004ae72) set_text_pane_t1_copy1

0xf0eb,	// (0x0004d7d3) input_focus_pane_cp2_copy1

0xf0fc,	// (0x0004d7e4) setting_code_pane_g1_copy1

0xf105,	// (0x0004d7ed) setting_code_pane_t1_copy1

0x5eb8,	// (0x000445a0) list_set_graphic_pane_copy1

0x3f65,	// (0x0004264d) bg_set_opt_pane_cp4_copy1

0x4d2f,	// (0x00043417) list_set_graphic_pane_g1_copy1_ParamLimits

0x4d2f,	// (0x00043417) list_set_graphic_pane_g1_copy1

0xf113,	// (0x0004d7fb) list_set_graphic_pane_g2_copy1

0x4d47,	// (0x0004342f) list_set_graphic_pane_t1_copy1_ParamLimits

0x4d47,	// (0x0004342f) list_set_graphic_pane_t1_copy1

0x7286,	// (0x0004596e) rs_clock_indi_pane_g1

0xf11b,	// (0x0004d803) rs_clock_indi_pane_t1

0xf129,	// (0x0004d811) rs_indi_pane

0xf131,	// (0x0004d819) rs_indi_pane_g1

0xf13a,	// (0x0004d822) rs_indi_pane_g2

0xf143,	// (0x0004d82b) rs_indi_pane_g3

0x0002,

0x0252,	// (0x0003e93a) rs_indi_pane_g

0x4fab,	// (0x00043693) bg_popup_preview_window_pane_cp03

0xf14c,	// (0x0004d834) popup_fep_tooltip_window_t1

0x7c43,	// (0x0004632b) popup_note2_window_g2_ParamLimits

0x7c43,	// (0x0004632b) popup_note2_window_g2

0x0001,

0xfc81,	// (0x0004e369) popup_note2_window_g_ParamLimits

0xfc81,	// (0x0004e369) popup_note2_window_g

0xd150,	// (0x0004b838) bg_popup_sub_pane_cp11_ParamLimits

0xd15d,	// (0x0004b845) cell_ai3_links_pane_g1_ParamLimits

0xd174,	// (0x0004b85c) cell_ai3_links_pane_t1

0xc78a,	// (0x0004ae72) set_text_pane_t1_copy1_ParamLimits

0xb9d7,	// (0x0004a0bf) cell_graphic_popup_pane_cp2_ParamLimits

0xb9d7,	// (0x0004a0bf) cell_graphic_popup_pane_cp2

0xdc3d,	// (0x0004c325) cell_graphic_popup_pane_g1_cp2

0x430b,	// (0x000429f3) cell_graphic_popup_pane_g2_cp2

0xf15a,	// (0x0004d842) cell_graphic_popup_pane_g3_cp2

0xf162,	// (0x0004d84a) cell_graphic_popup_pane_t2_cp2

0x431c,	// (0x00042a04) grid_highlight_pane_cp3_cp2

0x48d0,	// (0x00042fb8) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x45c2,	// (0x00042caa) main_tmo_pane_ParamLimits

0xd710,	// (0x0004bdf8) popup_tmo_big_image_note_window

0xe7be,	// (0x0004cea6) cell_ai5_widget_list_pane

0xe7c6,	// (0x0004ceae) cell_ai5_widget_lrg_icon_pane

0xdbfa,	// (0x0004c2e2) tmo_note_info_pane_t1_ParamLimits

0xdc0f,	// (0x0004c2f7) tmo_note_info_pane_t2_ParamLimits

0xdc28,	// (0x0004c310) tmo_note_info_pane_t3_ParamLimits

0xed2f,	// (0x0004d417) tmo_note_info_pane_t4_ParamLimits

0xed41,	// (0x0004d429) tmo_note_info_pane_t5_ParamLimits

0xfe59,	// (0x0004e541) tmo_note_info_pane_t_ParamLimits

0xee72,	// (0x0004d55a) settings_container_pane_ParamLimits

0xf0e3,	// (0x0004d7cb) indicator_popup_pane_cp5

0xf0e3,	// (0x0004d7cb) indicator_popup_pane_cp6

0x5eb8,	// (0x000445a0) list_set_graphic_pane_copy1_ParamLimits

0x3f51,	// (0x00042639) bg_popup_window_pane_cp23

0xf170,	// (0x0004d858) popup_tmo_big_image_note_window_g1

0xf17b,	// (0x0004d863) popup_tmo_big_image_note_window_t1

0xf18b,	// (0x0004d873) popup_tmo_big_image_note_window_t2

0xf19b,	// (0x0004d883) popup_tmo_big_image_note_window_t3

0x0002,

0x0259,	// (0x0003e941) popup_tmo_big_image_note_window_t

0xf1ab,	// (0x0004d893) cell_ai5_widget_lrg_icon_pane_g1

0xf1b3,	// (0x0004d89b) cell_ai5_widget_lrg_icon_pane_t1

0xf1c1,	// (0x0004d8a9) cell_ai5_widget_list_row_pane_ParamLimits

0xf1c1,	// (0x0004d8a9) cell_ai5_widget_list_row_pane

0xf1da,	// (0x0004d8c2) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf1da,	// (0x0004d8c2) cell_ai5_widget_list_row_pane_g1

0xf1e7,	// (0x0004d8cf) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf1e7,	// (0x0004d8cf) cell_ai5_widget_list_row_pane_t1

0xf1ff,	// (0x0004d8e7) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf1ff,	// (0x0004d8e7) cell_ai5_widget_list_row_pane_t2

0x0002,

0x0260,	// (0x0003e948) cell_ai5_widget_list_row_pane_t_ParamLimits

0x0260,	// (0x0003e948) cell_ai5_widget_list_row_pane_t

0x8bfe,	// (0x000472e6) main_fep_vtchi_ss_pane

0xf236,	// (0x0004d91e) popup_fep_char_pre_window

0xf23e,	// (0x0004d926) popup_fep_ituss_window

0xf25f,	// (0x0004d947) popup_fep_vkbss_window

0xf27e,	// (0x0004d966) grid_vkbss_keypad_pane_ParamLimits

0xf27e,	// (0x0004d966) grid_vkbss_keypad_pane

0xf28e,	// (0x0004d976) ituss_keypad_pane

0xf2aa,	// (0x0004d992) aid_vkbss_key_offset_ParamLimits

0xf2aa,	// (0x0004d992) aid_vkbss_key_offset

0xf2b6,	// (0x0004d99e) cell_vkbss_key_pane_ParamLimits

0xf2b6,	// (0x0004d99e) cell_vkbss_key_pane

0x5869,	// (0x00043f51) bg_cell_vkbss_key_g1_ParamLimits

0x5869,	// (0x00043f51) bg_cell_vkbss_key_g1

0xf2cc,	// (0x0004d9b4) cell_vkbss_key_3p_pane_ParamLimits

0xf2cc,	// (0x0004d9b4) cell_vkbss_key_3p_pane

0xf2e6,	// (0x0004d9ce) cell_vkbss_key_g1_ParamLimits

0xf2e6,	// (0x0004d9ce) cell_vkbss_key_g1

0xf300,	// (0x0004d9e8) cell_vkbss_key_t1_ParamLimits

0xf300,	// (0x0004d9e8) cell_vkbss_key_t1

0xf32b,	// (0x0004da13) cell_ituss_key_pane_ParamLimits

0xf32b,	// (0x0004da13) cell_ituss_key_pane

0xf33c,	// (0x0004da24) bg_cell_ituss_key_g1_ParamLimits

0xf33c,	// (0x0004da24) bg_cell_ituss_key_g1

0xf348,	// (0x0004da30) cell_ituss_key_pane_g1_ParamLimits

0xf348,	// (0x0004da30) cell_ituss_key_pane_g1

0xf35c,	// (0x0004da44) cell_ituss_key_pane_g2_ParamLimits

0xf35c,	// (0x0004da44) cell_ituss_key_pane_g2

0x0001,

0x0267,	// (0x0003e94f) cell_ituss_key_pane_g_ParamLimits

0x0267,	// (0x0003e94f) cell_ituss_key_pane_g

0xf387,	// (0x0004da6f) cell_ituss_key_t1_ParamLimits

0xf387,	// (0x0004da6f) cell_ituss_key_t1

0xf3b5,	// (0x0004da9d) cell_ituss_key_t2_ParamLimits

0xf3b5,	// (0x0004da9d) cell_ituss_key_t2

0xf3e6,	// (0x0004dace) cell_ituss_key_t3_ParamLimits

0xf3e6,	// (0x0004dace) cell_ituss_key_t3

0xf417,	// (0x0004daff) cell_ituss_key_t4_ParamLimits

0xf417,	// (0x0004daff) cell_ituss_key_t4

0x0003,

0x026c,	// (0x0003e954) cell_ituss_key_t_ParamLimits

0x026c,	// (0x0003e954) cell_ituss_key_t

0xf448,	// (0x0004db30) cell_vkbss_key_3p_pane_g1

0xf450,	// (0x0004db38) cell_vkbss_key_3p_pane_g2

0xf458,	// (0x0004db40) cell_vkbss_key_3p_pane_g3

0x0002,

0x0275,	// (0x0003e95d) cell_vkbss_key_3p_pane_g

0x3f51,	// (0x00042639) bg_popup_fep_char_preview_window_cp02

0xf460,	// (0x0004db48) popup_fep_char_pre_window_t1

0xdb4d,	// (0x0004c235) main_ai5_sk_pane

0xedbb,	// (0x0004d4a3) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xedc7,	// (0x0004d4af) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xedda,	// (0x0004d4c2) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xede6,	// (0x0004d4ce) cell_contacts_ai5_widget_pane_g3_ParamLimits

0x024b,	// (0x0003e933) cell_contacts_ai5_widget_pane_g_ParamLimits

0xedf8,	// (0x0004d4e0) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x45c2,	// (0x00042caa) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xdc45,	// (0x0004c32d) main_ai5_sk_pane_g1

0x57f0,	// (0x00043ed8) popup_query_code_window_g1

0xf254,	// (0x0004d93c) popup_fep_vkb_icf_pane

0xf268,	// (0x0004d950) popup_fep_vtchi_icf_pane

0x45c2,	// (0x00042caa) bg_icf_pane

0xf46f,	// (0x0004db57) list_vkb_icf_pane

0x45c2,	// (0x00042caa) bg_icf_pane_cp01

0xf47b,	// (0x0004db63) vtchi_icf_list_pane

0xf48c,	// (0x0004db74) list_vkb_icf_pane_t1_ParamLimits

0xf48c,	// (0x0004db74) list_vkb_icf_pane_t1

0xf4a6,	// (0x0004db8e) vtchi_icf_list_pane_t1_ParamLimits

0xf4a6,	// (0x0004db8e) vtchi_icf_list_pane_t1

0xf23e,	// (0x0004d926) popup_fep_ituss_window_ParamLimits

0xf268,	// (0x0004d950) popup_fep_vtchi_icf_pane_ParamLimits

0xf28e,	// (0x0004d976) ituss_keypad_pane_ParamLimits

0xf29e,	// (0x0004d986) ituss_sks_pane

0x45c2,	// (0x00042caa) bg_icf_pane_ParamLimits

0xf227,	// (0x0004d90f) icf_edit_indi_pane_ParamLimits

0xf227,	// (0x0004d90f) icf_edit_indi_pane

0xf46f,	// (0x0004db57) list_vkb_icf_pane_ParamLimits

0x45c2,	// (0x00042caa) bg_icf_pane_cp01_ParamLimits

0xf227,	// (0x0004d90f) icf_edit_indi_pane_cp01_ParamLimits

0xf227,	// (0x0004d90f) icf_edit_indi_pane_cp01

0xf483,	// (0x0004db6b) vtchi_query_pane

0x74ef,	// (0x00045bd7) icf_edit_indi_pane_g1_ParamLimits

0x74ef,	// (0x00045bd7) icf_edit_indi_pane_g1

0xf537,	// (0x0004dc1f) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x0004dc1f) icf_edit_indi_pane_g2

0x0001,

0xfe64,	// (0x0004e54c) icf_edit_indi_pane_g_ParamLimits

0xfe64,	// (0x0004e54c) icf_edit_indi_pane_g

0xf546,	// (0x0004dc2e) icf_edit_indi_pane_t1

0xf4cd,	// (0x0004dbb5) bg_input_focus_pane_cp042

0x44ef,	// (0x00042bd7) vtchi_button_pane

0xf4d6,	// (0x0004dbbe) vtchi_query_pane_t1

0xf4e4,	// (0x0004dbcc) vtchi_query_pane_t2

0xf4f2,	// (0x0004dbda) vtchi_query_pane_t3

0x0002,

0x027c,	// (0x0003e964) vtchi_query_pane_t

0x3f51,	// (0x00042639) bg_button_pane_cp13

0xf500,	// (0x0004dbe8) vtchi_button_pane_g1

0xf508,	// (0x0004dbf0) ituss_sks_pane_g1

0xf513,	// (0x0004dbfb) ituss_sks_pane_g2

0x0001,

0x0283,	// (0x0003e96b) ituss_sks_pane_g

0xf51b,	// (0x0004dc03) ituss_sks_pane_t1

0xf529,	// (0x0004dc11) ituss_sks_pane_t2

0x0001,

0x0288,	// (0x0003e970) ituss_sks_pane_t

0x6f36,	// (0x0004561e) indicator_nsta_pane_cp_g1

0x6f3f,	// (0x00045627) indicator_nsta_pane_cp_g2

0x6f47,	// (0x0004562f) indicator_nsta_pane_cp_g3

0x6f4f,	// (0x00045637) indicator_nsta_pane_cp_g4

0x6f57,	// (0x0004563f) indicator_nsta_pane_cp_g5

0x6f5f,	// (0x00045647) indicator_nsta_pane_cp_g6

0x0005,

0xfabf,	// (0x0004e1a7) indicator_nsta_pane_cp_g

0xe5e0,	// (0x0004ccc8) cell_graphic2_pane_t2_ParamLimits

0xe5e0,	// (0x0004ccc8) cell_graphic2_pane_t2

0x0001,

0x0142,	// (0x0003e82a) cell_graphic2_pane_t_ParamLimits

0x0142,	// (0x0003e82a) cell_graphic2_pane_t

0xe60d,	// (0x0004ccf5) cell_graphic2_control_pane_t1

0xb85a,	// (0x00049f42) signal_pane_g3_ParamLimits

0xb85a,	// (0x00049f42) signal_pane_g3

0xb86c,	// (0x00049f54) signal_pane_g4_ParamLimits

0xb86c,	// (0x00049f54) signal_pane_g4

0xf211,	// (0x0004d8f9) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf211,	// (0x0004d8f9) cell_ai5_widget_list_row_pane_t3

0xf375,	// (0x0004da5d) cell_ituss_key_pane_t1_ParamLimits

0xf375,	// (0x0004da5d) cell_ituss_key_pane_t1

0x5532,	// (0x00043c1a) form_field_data_wide_pane_vc_t2_ParamLimits

0x5532,	// (0x00043c1a) form_field_data_wide_pane_vc_t2

0x5546,	// (0x00043c2e) form_field_data_wide_pane_vc_t3_ParamLimits

0x5546,	// (0x00043c2e) form_field_data_wide_pane_vc_t3

0x0002,

0xf814,	// (0x0004defc) form_field_data_wide_pane_vc_t_ParamLimits

0xf814,	// (0x0004defc) form_field_data_wide_pane_vc_t

0x6c63,	// (0x0004534b) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6c63,	// (0x0004534b) form_field_slider_wide_pane_vc_t3

0x6d3d,	// (0x00045425) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6d3d,	// (0x00045425) form_field_popup_wide_pane_vc_t2

0x6d54,	// (0x0004543c) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6d54,	// (0x0004543c) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaae,	// (0x0004e196) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaae,	// (0x0004e196) form_field_popup_wide_pane_vc_t

0xb229,	// (0x00049911) aid_fshwr2_btn_pane_ParamLimits

0xb235,	// (0x0004991d) aid_fshwr2_syb_pane_ParamLimits

0xb246,	// (0x0004992e) aid_fshwr2_txt_pane_ParamLimits

0xaa7b,	// (0x00049163) fshwr2_bg_pane_ParamLimits

0xb252,	// (0x0004993a) fshwr2_func_candi_pane_ParamLimits

0xb267,	// (0x0004994f) fshwr2_hwr_syb_pane_ParamLimits

0xb27e,	// (0x00049966) fshwr2_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large

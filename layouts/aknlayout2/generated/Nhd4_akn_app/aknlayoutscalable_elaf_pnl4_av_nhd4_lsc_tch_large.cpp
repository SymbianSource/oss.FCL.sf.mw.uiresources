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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00048f0e };

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
0x964c,	// (0x0005255a) Screen

0x9660,	// (0x0005256e) application_window_ParamLimits

0x9660,	// (0x0005256e) application_window

0x967a,	// (0x00052588) screen_g1

0x96ac,	// (0x000525ba) area_bottom_pane_ParamLimits

0x96ac,	// (0x000525ba) area_bottom_pane

0xeda1,	// (0x00057caf) area_top_pane_ParamLimits

0xeda1,	// (0x00057caf) area_top_pane

0xee35,	// (0x00057d43) main_pane_ParamLimits

0xee35,	// (0x00057d43) main_pane

0x976a,	// (0x00052678) misc_graphics

0xc15a,	// (0x00055068) battery_pane_ParamLimits

0xc15a,	// (0x00055068) battery_pane

0x34f1,	// (0x0004c3ff) bg_status_flat_pane_g8

0x34f9,	// (0x0004c407) bg_status_flat_pane_g9

0x28f7,	// (0x0004b805) context_pane_ParamLimits

0x28f7,	// (0x0004b805) context_pane

0xc2c5,	// (0x000551d3) navi_pane_ParamLimits

0xc2c5,	// (0x000551d3) navi_pane

0xc343,	// (0x00055251) signal_pane_ParamLimits

0xc343,	// (0x00055251) signal_pane

0x0008,

0xf868,	// (0x00058776) bg_status_flat_pane_g

0xc3d3,	// (0x000552e1) status_pane_g1_ParamLimits

0xc3d3,	// (0x000552e1) status_pane_g1

0xc3e9,	// (0x000552f7) status_pane_g2_ParamLimits

0xc3e9,	// (0x000552f7) status_pane_g2

0x2b1e,	// (0x0004ba2c) status_pane_g3_ParamLimits

0x2b1e,	// (0x0004ba2c) status_pane_g3

0x0004,

0xf79b,	// (0x000586a9) status_pane_g_ParamLimits

0xf79b,	// (0x000586a9) status_pane_g

0xc3f5,	// (0x00055303) title_pane_ParamLimits

0xc3f5,	// (0x00055303) title_pane

0xc458,	// (0x00055366) uni_indicator_pane_ParamLimits

0xc458,	// (0x00055366) uni_indicator_pane

0x274e,	// (0x0004b65c) bg_list_pane_ParamLimits

0x274e,	// (0x0004b65c) bg_list_pane

0xae82,	// (0x00053d90) find_pane

0xae8a,	// (0x00053d98) listscroll_app_pane_ParamLimits

0xae8a,	// (0x00053d98) listscroll_app_pane

0x277f,	// (0x0004b68d) listscroll_form_pane

0xae9e,	// (0x00053dac) listscroll_gen_pane_ParamLimits

0xae9e,	// (0x00053dac) listscroll_gen_pane

0x0826,	// (0x00049734) listscroll_set_pane

0x4055,	// (0x0004cf63) main_idle_act_pane

0x244e,	// (0x0004b35c) main_idle_trad_pane

0x244e,	// (0x0004b35c) main_list_empty_pane

0x2799,	// (0x0004b6a7) main_midp_pane

0x27a5,	// (0x0004b6b3) main_pane_g1_ParamLimits

0x27a5,	// (0x0004b6b3) main_pane_g1

0xaeb2,	// (0x00053dc0) popup_ai_message_window_ParamLimits

0xaeb2,	// (0x00053dc0) popup_ai_message_window

0xaf63,	// (0x00053e71) popup_fep_china_uni_window_ParamLimits

0xaf63,	// (0x00053e71) popup_fep_china_uni_window

0xafbd,	// (0x00053ecb) popup_fep_japan_candidate_window_ParamLimits

0xafbd,	// (0x00053ecb) popup_fep_japan_candidate_window

0xafdb,	// (0x00053ee9) popup_fep_japan_predictive_window_ParamLimits

0xafdb,	// (0x00053ee9) popup_fep_japan_predictive_window

0xafed,	// (0x00053efb) popup_find_window

0xb00a,	// (0x00053f18) popup_grid_graphic_window_ParamLimits

0xb00a,	// (0x00053f18) popup_grid_graphic_window

0xb0a8,	// (0x00053fb6) popup_large_graphic_colour_window

0xb0ce,	// (0x00053fdc) popup_menu_window_ParamLimits

0xb0ce,	// (0x00053fdc) popup_menu_window

0xb2a0,	// (0x000541ae) popup_note_image_window

0xb266,	// (0x00054174) popup_note_wait_window_ParamLimits

0xb266,	// (0x00054174) popup_note_wait_window

0xb2b8,	// (0x000541c6) popup_note_window_ParamLimits

0xb2b8,	// (0x000541c6) popup_note_window

0xb367,	// (0x00054275) popup_query_code_window_ParamLimits

0xb367,	// (0x00054275) popup_query_code_window

0xb3a1,	// (0x000542af) popup_query_data_code_window_ParamLimits

0xb3a1,	// (0x000542af) popup_query_data_code_window

0xb3be,	// (0x000542cc) popup_query_data_window_ParamLimits

0xb3be,	// (0x000542cc) popup_query_data_window

0xb440,	// (0x0005434e) popup_query_sat_info_window_ParamLimits

0xb440,	// (0x0005434e) popup_query_sat_info_window

0xb4d7,	// (0x000543e5) popup_snote_single_graphic_window_ParamLimits

0xb4d7,	// (0x000543e5) popup_snote_single_graphic_window

0xb4d7,	// (0x000543e5) popup_snote_single_text_window_ParamLimits

0xb4d7,	// (0x000543e5) popup_snote_single_text_window

0x0c84,	// (0x00049b92) popup_sub_window_general

0xb634,	// (0x00054542) popup_window_general_ParamLimits

0xb634,	// (0x00054542) popup_window_general

0x27b3,	// (0x0004b6c1) power_save_pane

0xace0,	// (0x00053bee) control_pane_g1_ParamLimits

0xace0,	// (0x00053bee) control_pane_g1

0xad09,	// (0x00053c17) control_pane_g2_ParamLimits

0xad09,	// (0x00053c17) control_pane_g2

0x2711,	// (0x0004b61f) control_pane_g3_ParamLimits

0x2711,	// (0x0004b61f) control_pane_g3

0x0007,

0xf783,	// (0x00058691) control_pane_g_ParamLimits

0xf783,	// (0x00058691) control_pane_g

0xad71,	// (0x00053c7f) control_pane_t1_ParamLimits

0xad71,	// (0x00053c7f) control_pane_t1

0xadd7,	// (0x00053ce5) control_pane_t2_ParamLimits

0xadd7,	// (0x00053ce5) control_pane_t2

0x0002,

0xf794,	// (0x000586a2) control_pane_t_ParamLimits

0xf794,	// (0x000586a2) control_pane_t

0xac39,	// (0x00053b47) navi_navi_volume_pane_cp1

0xac41,	// (0x00053b4f) status_small_icon_pane

0x2646,	// (0x0004b554) status_small_pane_g1_ParamLimits

0x2646,	// (0x0004b554) status_small_pane_g1

0xac49,	// (0x00053b57) status_small_pane_g2_ParamLimits

0xac49,	// (0x00053b57) status_small_pane_g2

0xac55,	// (0x00053b63) status_small_pane_g3_ParamLimits

0xac55,	// (0x00053b63) status_small_pane_g3

0xac61,	// (0x00053b6f) status_small_pane_g4_ParamLimits

0xac61,	// (0x00053b6f) status_small_pane_g4

0xac6d,	// (0x00053b7b) status_small_pane_g5_ParamLimits

0xac6d,	// (0x00053b7b) status_small_pane_g5

0xac7b,	// (0x00053b89) status_small_pane_g6_ParamLimits

0xac7b,	// (0x00053b89) status_small_pane_g6

0x0007,

0xf772,	// (0x00058680) status_small_pane_g_ParamLimits

0xf772,	// (0x00058680) status_small_pane_g

0xacaa,	// (0x00053bb8) status_small_pane_t1

0xaccc,	// (0x00053bda) status_small_wait_pane_ParamLimits

0xaccc,	// (0x00053bda) status_small_wait_pane

0xa98f,	// (0x0005389d) aid_levels_signal_ParamLimits

0xa98f,	// (0x0005389d) aid_levels_signal

0xa9a7,	// (0x000538b5) signal_pane_g1_ParamLimits

0xa9a7,	// (0x000538b5) signal_pane_g1

0xa9c2,	// (0x000538d0) signal_pane_g2_ParamLimits

0xa9c2,	// (0x000538d0) signal_pane_g2

0x0003,

0xf703,	// (0x00058611) signal_pane_g_ParamLimits

0xf703,	// (0x00058611) signal_pane_g

0xc06a,	// (0x00054f78) context_pane_g1

0x98b4,	// (0x000527c2) title_pane_g1

0x98f7,	// (0x00052805) title_pane_t1

0x9983,	// (0x00052891) title_pane_t2

0x99a9,	// (0x000528b7) title_pane_t3

0x0002,

0xf557,	// (0x00058465) title_pane_t

0xc480,	// (0x0005538e) aid_levels_battery_ParamLimits

0xc480,	// (0x0005538e) aid_levels_battery

0xc49c,	// (0x000553aa) battery_pane_g1_ParamLimits

0xc49c,	// (0x000553aa) battery_pane_g1

0xc4b9,	// (0x000553c7) battery_pane_g2_ParamLimits

0xc4b9,	// (0x000553c7) battery_pane_g2

0x0001,

0xf7a6,	// (0x000586b4) battery_pane_g_ParamLimits

0xf7a6,	// (0x000586b4) battery_pane_g

0xca7f,	// (0x0005598d) uni_indicator_pane_g1

0xca95,	// (0x000559a3) uni_indicator_pane_g2

0xcaab,	// (0x000559b9) uni_indicator_pane_g3

0x0005,

0xf910,	// (0x0005881e) uni_indicator_pane_g

0x0520,	// (0x0004942e) navi_icon_pane_ParamLimits

0x0520,	// (0x0004942e) navi_icon_pane

0xe3db,	// (0x000572e9) navi_midp_pane

0x053c,	// (0x0004944a) navi_navi_pane

0x0546,	// (0x00049454) navi_text_pane_ParamLimits

0x0546,	// (0x00049454) navi_text_pane

0x967a,	// (0x00052588) status_small_wait_pane_g1

0x9f03,	// (0x00052e11) status_small_wait_pane_g2

0x0001,

0xf90b,	// (0x00058819) status_small_wait_pane_g

0xc9d8,	// (0x000558e6) navi_navi_icon_text_pane

0x3b44,	// (0x0004ca52) navi_navi_pane_g1_ParamLimits

0x3b44,	// (0x0004ca52) navi_navi_pane_g1

0x3b56,	// (0x0004ca64) navi_navi_pane_g2_ParamLimits

0x3b56,	// (0x0004ca64) navi_navi_pane_g2

0x0001,

0xf8d9,	// (0x000587e7) navi_navi_pane_g_ParamLimits

0xf8d9,	// (0x000587e7) navi_navi_pane_g

0x3b68,	// (0x0004ca76) navi_navi_tabs_pane

0x3b71,	// (0x0004ca7f) navi_navi_text_pane

0xc9d8,	// (0x000558e6) navi_navi_volume_pane

0x3b18,	// (0x0004ca26) navi_text_pane_t1

0x3b0c,	// (0x0004ca1a) navi_icon_pane_g1

0x3a5f,	// (0x0004c96d) navi_navi_text_pane_t1

0xb6f1,	// (0x000545ff) navi_navi_volume_pane_g1

0x1072,	// (0x00049f80) volume_small_pane

0x39c5,	// (0x0004c8d3) navi_navi_icon_text_pane_g1

0xc930,	// (0x0005583e) navi_navi_icon_text_pane_t1

0x053c,	// (0x0004944a) navi_tabs_2_long_pane

0x053c,	// (0x0004944a) navi_tabs_2_pane

0x053c,	// (0x0004944a) navi_tabs_3_long_pane

0x053c,	// (0x0004944a) navi_tabs_3_pane

0x053c,	// (0x0004944a) navi_tabs_4_pane

0x104a,	// (0x00049f58) tabs_2_active_pane_ParamLimits

0x104a,	// (0x00049f58) tabs_2_active_pane

0x105a,	// (0x00049f68) tabs_2_passive_pane_ParamLimits

0x105a,	// (0x00049f68) tabs_2_passive_pane

0x1018,	// (0x00049f26) tabs_3_active_pane_ParamLimits

0x1018,	// (0x00049f26) tabs_3_active_pane

0x1028,	// (0x00049f36) tabs_3_passive_pane_ParamLimits

0x1028,	// (0x00049f36) tabs_3_passive_pane

0x1039,	// (0x00049f47) tabs_3_passive_pane_cp_ParamLimits

0x1039,	// (0x00049f47) tabs_3_passive_pane_cp

0x0fd4,	// (0x00049ee2) tabs_4_active_pane_ParamLimits

0x0fd4,	// (0x00049ee2) tabs_4_active_pane

0x0fe5,	// (0x00049ef3) tabs_4_passive_pane_ParamLimits

0x0fe5,	// (0x00049ef3) tabs_4_passive_pane

0x0ff6,	// (0x00049f04) tabs_4_passive_pane_cp_ParamLimits

0x0ff6,	// (0x00049f04) tabs_4_passive_pane_cp

0x1007,	// (0x00049f15) tabs_4_passive_pane_cp2_ParamLimits

0x1007,	// (0x00049f15) tabs_4_passive_pane_cp2

0x0fb0,	// (0x00049ebe) tabs_2_long_active_pane_ParamLimits

0x0fb0,	// (0x00049ebe) tabs_2_long_active_pane

0x0fc2,	// (0x00049ed0) tabs_2_long_passive_pane_ParamLimits

0x0fc2,	// (0x00049ed0) tabs_2_long_passive_pane

0x0f6b,	// (0x00049e79) tabs_3_long_active_pane_ParamLimits

0x0f6b,	// (0x00049e79) tabs_3_long_active_pane

0x0f84,	// (0x00049e92) tabs_3_long_passive_pane_ParamLimits

0x0f84,	// (0x00049e92) tabs_3_long_passive_pane

0x0f97,	// (0x00049ea5) tabs_3_long_passive_pane_cp_ParamLimits

0x0f97,	// (0x00049ea5) tabs_3_long_passive_pane_cp

0x0f11,	// (0x00049e1f) volume_small_pane_g1

0x0f1a,	// (0x00049e28) volume_small_pane_g2

0x0f23,	// (0x00049e31) volume_small_pane_g3

0x0f2c,	// (0x00049e3a) volume_small_pane_g4

0x0f35,	// (0x00049e43) volume_small_pane_g5

0x0f3e,	// (0x00049e4c) volume_small_pane_g6

0x0f47,	// (0x00049e55) volume_small_pane_g7

0x0f50,	// (0x00049e5e) volume_small_pane_g8

0x0f59,	// (0x00049e67) volume_small_pane_g9

0x0f62,	// (0x00049e70) volume_small_pane_g10

0x0009,

0xf8a5,	// (0x000587b3) volume_small_pane_g

0x99bb,	// (0x000528c9) bg_active_tab_pane_cp2_ParamLimits

0x99bb,	// (0x000528c9) bg_active_tab_pane_cp2

0x99c9,	// (0x000528d7) tabs_3_active_pane_g1

0x99d1,	// (0x000528df) tabs_3_active_pane_t1

0x99bb,	// (0x000528c9) bg_passive_tab_pane_cp2_ParamLimits

0x99bb,	// (0x000528c9) bg_passive_tab_pane_cp2

0x99c9,	// (0x000528d7) tabs_3_passive_pane_g1

0x99d1,	// (0x000528df) tabs_3_passive_pane_t1

0x99bb,	// (0x000528c9) bg_active_tab_pane_cp3_ParamLimits

0x99bb,	// (0x000528c9) bg_active_tab_pane_cp3

0x99e3,	// (0x000528f1) tabs_4_active_pane_g1

0x99eb,	// (0x000528f9) tabs_4_active_pane_t1

0x99bb,	// (0x000528c9) bg_passive_tab_pane_cp3_ParamLimits

0x99bb,	// (0x000528c9) bg_passive_tab_pane_cp3

0x99e3,	// (0x000528f1) tabs_4_1_passive_pane_g1

0x99eb,	// (0x000528f9) tabs_4_1_passive_pane_t1

0x2799,	// (0x0004b6a7) list_highlight_pane_cp2

0xcbb1,	// (0x00055abf) list_set_pane_ParamLimits

0xcbb1,	// (0x00055abf) list_set_pane

0xcc4b,	// (0x00055b59) main_pane_set_t1_ParamLimits

0xcc4b,	// (0x00055b59) main_pane_set_t1

0xcc6b,	// (0x00055b79) main_pane_set_t2_ParamLimits

0xcc6b,	// (0x00055b79) main_pane_set_t2

0xcc7f,	// (0x00055b8d) main_pane_set_t3_ParamLimits

0xcc7f,	// (0x00055b8d) main_pane_set_t3

0xcc91,	// (0x00055b9f) main_pane_set_t4_ParamLimits

0xcc91,	// (0x00055b9f) main_pane_set_t4

0x0003,

0xf975,	// (0x00058883) main_pane_set_t_ParamLimits

0xf975,	// (0x00058883) main_pane_set_t

0xcca3,	// (0x00055bb1) setting_code_pane

0xccad,	// (0x00055bbb) setting_slider_graphic_pane

0xccad,	// (0x00055bbb) setting_slider_pane

0xccad,	// (0x00055bbb) setting_text_pane

0xccad,	// (0x00055bbb) setting_volume_pane

0x99fd,	// (0x0005290b) volume_set_pane

0x9a05,	// (0x00052913) bg_set_opt_pane_cp

0x9a13,	// (0x00052921) setting_slider_pane_t1

0x9a2c,	// (0x0005293a) setting_slider_pane_t2

0x9a46,	// (0x00052954) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0005846c) setting_slider_pane_t

0x9a5e,	// (0x0005296c) slider_set_pane

0x976a,	// (0x00052678) bg_set_opt_pane_cp2

0x9a74,	// (0x00052982) setting_slider_graphic_pane_g1

0x9a7d,	// (0x0005298b) setting_slider_graphic_pane_t1

0x9a8d,	// (0x0005299b) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00058473) setting_slider_graphic_pane_t

0x9a9d,	// (0x000529ab) slider_set_pane_cp

0x976a,	// (0x00052678) input_focus_pane_cp1

0x403c,	// (0x0004cf4a) list_set_text_pane

0x967a,	// (0x00052588) setting_text_pane_g1

0x976a,	// (0x00052678) input_focus_pane_cp2

0x967a,	// (0x00052588) setting_code_pane_g1

0x9aa5,	// (0x000529b3) setting_code_pane_t1

0xe162,	// (0x00057070) set_text_pane_t1_ParamLimits

0xe162,	// (0x00057070) set_text_pane_t1

0xa381,	// (0x0005328f) set_opt_bg_pane_g1

0xa389,	// (0x00053297) set_opt_bg_pane_g2

0xcb66,	// (0x00055a74) set_opt_bg_pane_g3

0xa399,	// (0x000532a7) set_opt_bg_pane_g4

0xa3a1,	// (0x000532af) set_opt_bg_pane_g5

0xa3a9,	// (0x000532b7) set_opt_bg_pane_g6

0xcb70,	// (0x00055a7e) set_opt_bg_pane_g7

0xcb78,	// (0x00055a86) set_opt_bg_pane_g8

0xcb82,	// (0x00055a90) set_opt_bg_pane_g9

0x0008,

0xf962,	// (0x00058870) set_opt_bg_pane_g

0xcb59,	// (0x00055a67) slider_set_pane_g1

0x10df,	// (0x00049fed) slider_set_pane_g2

0x0006,

0xf953,	// (0x00058861) slider_set_pane_g

0xb6f9,	// (0x00054607) volume_set_pane_g1

0xb701,	// (0x0005460f) volume_set_pane_g2

0xb709,	// (0x00054617) volume_set_pane_g3

0xb711,	// (0x0005461f) volume_set_pane_g4

0xb719,	// (0x00054627) volume_set_pane_g5

0xb721,	// (0x0005462f) volume_set_pane_g6

0xb729,	// (0x00054637) volume_set_pane_g7

0xb731,	// (0x0005463f) volume_set_pane_g8

0xb739,	// (0x00054647) volume_set_pane_g9

0xb741,	// (0x0005464f) volume_set_pane_g10

0x0009,

0xf92b,	// (0x00058839) volume_set_pane_g

0x9ab3,	// (0x000529c1) indicator_pane_ParamLimits

0x9ab3,	// (0x000529c1) indicator_pane

0x9adb,	// (0x000529e9) main_idle_pane_g2_ParamLimits

0x9adb,	// (0x000529e9) main_idle_pane_g2

0x9b13,	// (0x00052a21) main_pane_idle_g1_ParamLimits

0x9b13,	// (0x00052a21) main_pane_idle_g1

0x9b3a,	// (0x00052a48) popup_clock_digital_analogue_window_ParamLimits

0x9b3a,	// (0x00052a48) popup_clock_digital_analogue_window

0x9b51,	// (0x00052a5f) soft_indicator_pane_ParamLimits

0x9b51,	// (0x00052a5f) soft_indicator_pane

0x9b75,	// (0x00052a83) wallpaper_pane_ParamLimits

0x9b75,	// (0x00052a83) wallpaper_pane

0x967a,	// (0x00052588) wallpaper_pane_g1

0x9b8f,	// (0x00052a9d) indicator_pane_g1_ParamLimits

0x9b8f,	// (0x00052a9d) indicator_pane_g1

0x4405,	// (0x0004d313) navi_navi_icon_text_pane_srt_g1

0x9bb4,	// (0x00052ac2) soft_indicator_pane_t1

0x9bce,	// (0x00052adc) aid_ps_area_pane

0x9bdf,	// (0x00052aed) aid_ps_clock_pane

0x9bed,	// (0x00052afb) aid_ps_indicator_pane

0x9bf9,	// (0x00052b07) indicator_ps_pane_ParamLimits

0x9bf9,	// (0x00052b07) indicator_ps_pane

0x9c08,	// (0x00052b16) power_save_pane_g1_ParamLimits

0x9c08,	// (0x00052b16) power_save_pane_g1

0x9c14,	// (0x00052b22) power_save_pane_g2_ParamLimits

0x9c14,	// (0x00052b22) power_save_pane_g2

0xed81,	// (0x00057c8f) aid_navinavi_width_pane

0x9bce,	// (0x00052adc) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00058478) power_save_pane_g_ParamLimits

0xf56a,	// (0x00058478) power_save_pane_g

0x9c22,	// (0x00052b30) power_save_pane_t1_ParamLimits

0x9c22,	// (0x00052b30) power_save_pane_t1

0x9bdf,	// (0x00052aed) aid_ps_clock_pane_ParamLimits

0x9bed,	// (0x00052afb) aid_ps_indicator_pane_ParamLimits

0x9c34,	// (0x00052b42) power_save_pane_t4_ParamLimits

0x9c34,	// (0x00052b42) power_save_pane_t4

0x0001,

0xf56f,	// (0x0005847d) power_save_pane_t_ParamLimits

0xf56f,	// (0x0005847d) power_save_pane_t

0x9c5e,	// (0x00052b6c) power_save_t3_ParamLimits

0x9c5e,	// (0x00052b6c) power_save_t3

0x9c49,	// (0x00052b57) power_save_t2_ParamLimits

0x9c49,	// (0x00052b57) power_save_t2

0x9c73,	// (0x00052b81) indicator_ps_pane_g1

0x9c7c,	// (0x00052b8a) ai_gene_pane_ParamLimits

0x9c7c,	// (0x00052b8a) ai_gene_pane

0x9c93,	// (0x00052ba1) ai_links_pane_ParamLimits

0x9c93,	// (0x00052ba1) ai_links_pane

0x9cab,	// (0x00052bb9) indicator_pane_cp1_ParamLimits

0x9cab,	// (0x00052bb9) indicator_pane_cp1

0x9cba,	// (0x00052bc8) main_pane_idle_g1_cp_ParamLimits

0x9cba,	// (0x00052bc8) main_pane_idle_g1_cp

0x9cd2,	// (0x00052be0) popup_ai_links_title_window

0x9cdb,	// (0x00052be9) soft_indicator_pane_cp1_ParamLimits

0x9cdb,	// (0x00052be9) soft_indicator_pane_cp1

0x3e03,	// (0x0004cd11) ai_links_pane_g1

0x3e0c,	// (0x0004cd1a) grid_ai_links_pane

0xca76,	// (0x00055984) ai_gene_pane_1

0x3df1,	// (0x0004ccff) ai_gene_pane_2

0x3dfa,	// (0x0004cd08) list_highlight_pane_cp4

0xca52,	// (0x00055960) cell_ai_link_pane_ParamLimits

0xca52,	// (0x00055960) cell_ai_link_pane

0x3dc2,	// (0x0004ccd0) cell_ai_link_pane_g1

0x9f03,	// (0x00052e11) cell_ai_link_pane_g2

0x0001,

0xf906,	// (0x00058814) cell_ai_link_pane_g

0x976a,	// (0x00052678) grid_highlight_cp2

0x976a,	// (0x00052678) bg_popup_sub_pane_cp1

0x9cfd,	// (0x00052c0b) popup_ai_links_title_window_t1

0x3d12,	// (0x0004cc20) ai_gene_pane_1_g1_ParamLimits

0x3d12,	// (0x0004cc20) ai_gene_pane_1_g1

0x3d1e,	// (0x0004cc2c) ai_gene_pane_1_g2_ParamLimits

0x3d1e,	// (0x0004cc2c) ai_gene_pane_1_g2

0x0001,

0xf8fc,	// (0x0005880a) ai_gene_pane_1_g_ParamLimits

0xf8fc,	// (0x0005880a) ai_gene_pane_1_g

0x3d2b,	// (0x0004cc39) ai_gene_pane_1_t1_ParamLimits

0x3d2b,	// (0x0004cc39) ai_gene_pane_1_t1

0x3d5f,	// (0x0004cc6d) grid_ai_soft_ind_pane

0x3cfd,	// (0x0004cc0b) ai_gene_pane_2_t1_ParamLimits

0x3cfd,	// (0x0004cc0b) ai_gene_pane_2_t1

0x9d0c,	// (0x00052c1a) main_pane_empty_t1_ParamLimits

0x9d0c,	// (0x00052c1a) main_pane_empty_t1

0x9d24,	// (0x00052c32) main_pane_empty_t2_ParamLimits

0x9d24,	// (0x00052c32) main_pane_empty_t2

0x9d39,	// (0x00052c47) main_pane_empty_t3_ParamLimits

0x9d39,	// (0x00052c47) main_pane_empty_t3

0x9d4b,	// (0x00052c59) main_pane_empty_t4_ParamLimits

0x9d4b,	// (0x00052c59) main_pane_empty_t4

0x9d5d,	// (0x00052c6b) main_pane_empty_t5_ParamLimits

0x9d5d,	// (0x00052c6b) main_pane_empty_t5

0x0004,

0xf574,	// (0x00058482) main_pane_empty_t_ParamLimits

0xf574,	// (0x00058482) main_pane_empty_t

0xa3d2,	// (0x000532e0) bg_popup_window_pane_ParamLimits

0xa3d2,	// (0x000532e0) bg_popup_window_pane

0xc9cc,	// (0x000558da) find_popup_pane_cp2_ParamLimits

0xc9cc,	// (0x000558da) find_popup_pane_cp2

0x3a79,	// (0x0004c987) heading_pane_ParamLimits

0x3a79,	// (0x0004c987) heading_pane

0x976a,	// (0x00052678) bg_popup_sub_pane

0xc94d,	// (0x0005585b) bg_popup_window_pane_g1_ParamLimits

0xc94d,	// (0x0005585b) bg_popup_window_pane_g1

0xc95c,	// (0x0005586a) bg_popup_window_pane_g2_ParamLimits

0xc95c,	// (0x0005586a) bg_popup_window_pane_g2

0xc968,	// (0x00055876) bg_popup_window_pane_g3_ParamLimits

0xc968,	// (0x00055876) bg_popup_window_pane_g3

0xc974,	// (0x00055882) bg_popup_window_pane_g4_ParamLimits

0xc974,	// (0x00055882) bg_popup_window_pane_g4

0xc983,	// (0x00055891) bg_popup_window_pane_g5_ParamLimits

0xc983,	// (0x00055891) bg_popup_window_pane_g5

0xc993,	// (0x000558a1) bg_popup_window_pane_g6_ParamLimits

0xc993,	// (0x000558a1) bg_popup_window_pane_g6

0xc99f,	// (0x000558ad) bg_popup_window_pane_g7_ParamLimits

0xc99f,	// (0x000558ad) bg_popup_window_pane_g7

0xc9ae,	// (0x000558bc) bg_popup_window_pane_g8_ParamLimits

0xc9ae,	// (0x000558bc) bg_popup_window_pane_g8

0xc9bd,	// (0x000558cb) bg_popup_window_pane_g9_ParamLimits

0xc9bd,	// (0x000558cb) bg_popup_window_pane_g9

0x3a53,	// (0x0004c961) bg_popup_window_pane_g10_ParamLimits

0x3a53,	// (0x0004c961) bg_popup_window_pane_g10

0x0009,

0xf8c4,	// (0x000587d2) bg_popup_window_pane_g_ParamLimits

0xf8c4,	// (0x000587d2) bg_popup_window_pane_g

0x397c,	// (0x0004c88a) bg_popup_heading_pane_ParamLimits

0x397c,	// (0x0004c88a) bg_popup_heading_pane

0x1203,	// (0x0004a111) tabs_4_passive_pane_cp_srt_ParamLimits

0x1203,	// (0x0004a111) tabs_4_passive_pane_cp_srt

0x1215,	// (0x0004a123) tabs_4_passive_pane_srt_ParamLimits

0x3990,	// (0x0004c89e) heading_pane_g2

0x1215,	// (0x0004a123) tabs_4_passive_pane_srt

0x2d1a,	// (0x0004bc28) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2d1a,	// (0x0004bc28) bg_passive_tab_pane_cp3_srt

0x3998,	// (0x0004c8a6) heading_pane_t1_ParamLimits

0x3998,	// (0x0004c8a6) heading_pane_t1

0x39af,	// (0x0004c8bd) heading_pane_t2_ParamLimits

0x39af,	// (0x0004c8bd) heading_pane_t2

0x0001,

0xf8bf,	// (0x000587cd) heading_pane_t_ParamLimits

0xf8bf,	// (0x000587cd) heading_pane_t

0x34b9,	// (0x0004c3c7) bg_popup_heading_pane_g1

0x3568,	// (0x0004c476) bg_popup_heading_pane_g2

0x3572,	// (0x0004c480) bg_popup_heading_pane_g3

0x357c,	// (0x0004c48a) bg_popup_heading_pane_g4

0x3586,	// (0x0004c494) bg_popup_heading_pane_g5

0x3590,	// (0x0004c49e) bg_popup_heading_pane_g6

0x3598,	// (0x0004c4a6) bg_popup_heading_pane_g7

0x35a0,	// (0x0004c4ae) bg_popup_heading_pane_g8

0x35aa,	// (0x0004c4b8) bg_popup_heading_pane_g9

0x0008,

0xf87b,	// (0x00058789) bg_popup_heading_pane_g

0x2ca6,	// (0x0004bbb4) bg_popup_sub_pane_g1

0x2cae,	// (0x0004bbbc) bg_popup_sub_pane_g2

0x2cb6,	// (0x0004bbc4) bg_popup_sub_pane_g3

0x2cbe,	// (0x0004bbcc) bg_popup_sub_pane_g4

0x2cc6,	// (0x0004bbd4) bg_popup_sub_pane_g5

0x2cce,	// (0x0004bbdc) bg_popup_sub_pane_g6

0x2cd6,	// (0x0004bbe4) bg_popup_sub_pane_g7

0x2cde,	// (0x0004bbec) bg_popup_sub_pane_g8

0x2ce6,	// (0x0004bbf4) bg_popup_sub_pane_g9

0x0008,

0xf855,	// (0x00058763) bg_popup_sub_pane_g

0x99bb,	// (0x000528c9) bg_popup_window_pane_cp5_ParamLimits

0x99bb,	// (0x000528c9) bg_popup_window_pane_cp5

0x9d7d,	// (0x00052c8b) popup_note_window_g1_ParamLimits

0x9d7d,	// (0x00052c8b) popup_note_window_g1

0x9d89,	// (0x00052c97) popup_note_window_t1_ParamLimits

0x9d89,	// (0x00052c97) popup_note_window_t1

0x9d9f,	// (0x00052cad) popup_note_window_t2_ParamLimits

0x9d9f,	// (0x00052cad) popup_note_window_t2

0x9db5,	// (0x00052cc3) popup_note_window_t3_ParamLimits

0x9db5,	// (0x00052cc3) popup_note_window_t3

0x9dcb,	// (0x00052cd9) popup_note_window_t4_ParamLimits

0x9dcb,	// (0x00052cd9) popup_note_window_t4

0x9df3,	// (0x00052d01) popup_note_window_t5_ParamLimits

0x9df3,	// (0x00052d01) popup_note_window_t5

0x0004,

0xf57f,	// (0x0005848d) popup_note_window_t_ParamLimits

0xf57f,	// (0x0005848d) popup_note_window_t

0x9e17,	// (0x00052d25) bg_popup_window_pane_cp6_ParamLimits

0x9e17,	// (0x00052d25) bg_popup_window_pane_cp6

0x3435,	// (0x0004c343) popup_note_image_window_g1_ParamLimits

0x3435,	// (0x0004c343) popup_note_image_window_g1

0xc7f2,	// (0x00055700) popup_note_image_window_g2_ParamLimits

0xc7f2,	// (0x00055700) popup_note_image_window_g2

0x0001,

0xf849,	// (0x00058757) popup_note_image_window_g_ParamLimits

0xf849,	// (0x00058757) popup_note_image_window_g

0x345a,	// (0x0004c368) popup_note_image_window_t1_ParamLimits

0x345a,	// (0x0004c368) popup_note_image_window_t1

0x3473,	// (0x0004c381) popup_note_image_window_t2_ParamLimits

0x3473,	// (0x0004c381) popup_note_image_window_t2

0x348c,	// (0x0004c39a) popup_note_image_window_t3_ParamLimits

0x348c,	// (0x0004c39a) popup_note_image_window_t3

0x0002,

0xf84e,	// (0x0005875c) popup_note_image_window_t_ParamLimits

0xf84e,	// (0x0005875c) popup_note_image_window_t

0x32fe,	// (0x0004c20c) bg_popup_window_pane_cp7_ParamLimits

0x32fe,	// (0x0004c20c) bg_popup_window_pane_cp7

0x332e,	// (0x0004c23c) popup_note_wait_window_g1_ParamLimits

0x332e,	// (0x0004c23c) popup_note_wait_window_g1

0x333a,	// (0x0004c248) popup_note_wait_window_g2_ParamLimits

0x333a,	// (0x0004c248) popup_note_wait_window_g2

0x0002,

0xf837,	// (0x00058745) popup_note_wait_window_g_ParamLimits

0xf837,	// (0x00058745) popup_note_wait_window_g

0x3352,	// (0x0004c260) popup_note_wait_window_t1_ParamLimits

0x3352,	// (0x0004c260) popup_note_wait_window_t1

0xc793,	// (0x000556a1) popup_note_wait_window_t2_ParamLimits

0xc793,	// (0x000556a1) popup_note_wait_window_t2

0xc7b0,	// (0x000556be) popup_note_wait_window_t3_ParamLimits

0xc7b0,	// (0x000556be) popup_note_wait_window_t3

0xc7c3,	// (0x000556d1) popup_note_wait_window_t4_ParamLimits

0xc7c3,	// (0x000556d1) popup_note_wait_window_t4

0x0004,

0xf83e,	// (0x0005874c) popup_note_wait_window_t_ParamLimits

0xf83e,	// (0x0005874c) popup_note_wait_window_t

0x33ce,	// (0x0004c2dc) wait_bar_pane_ParamLimits

0x33ce,	// (0x0004c2dc) wait_bar_pane

0x976a,	// (0x00052678) wait_anim_pane

0x976a,	// (0x00052678) wait_border_pane

0x967a,	// (0x00052588) wait_anim_pane_g1

0x967a,	// (0x00052588) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0005860c) wait_anim_pane_g

0x32aa,	// (0x0004c1b8) wait_border_pane_g1

0x32b5,	// (0x0004c1c3) wait_border_pane_g2

0x32be,	// (0x0004c1cc) wait_border_pane_g3

0x0002,

0xf830,	// (0x0005873e) wait_border_pane_g

0x3115,	// (0x0004c023) bg_popup_window_pane_cp16_ParamLimits

0x3115,	// (0x0004c023) bg_popup_window_pane_cp16

0xc743,	// (0x00055651) indicator_popup_pane_cp4_ParamLimits

0xc743,	// (0x00055651) indicator_popup_pane_cp4

0x3229,	// (0x0004c137) popup_query_data_window_t1_ParamLimits

0x3229,	// (0x0004c137) popup_query_data_window_t1

0x323b,	// (0x0004c149) popup_query_data_window_t2_ParamLimits

0x323b,	// (0x0004c149) popup_query_data_window_t2

0x3254,	// (0x0004c162) popup_query_data_window_t3_ParamLimits

0x3254,	// (0x0004c162) popup_query_data_window_t3

0x0002,

0xf829,	// (0x00058737) popup_query_data_window_t_ParamLimits

0xf829,	// (0x00058737) popup_query_data_window_t

0xc757,	// (0x00055665) query_popup_data_pane_ParamLimits

0xc757,	// (0x00055665) query_popup_data_pane

0xc76b,	// (0x00055679) query_popup_data_pane_cp1_ParamLimits

0xc76b,	// (0x00055679) query_popup_data_pane_cp1

0x3115,	// (0x0004c023) bg_popup_window_pane_cp10_ParamLimits

0x3115,	// (0x0004c023) bg_popup_window_pane_cp10

0xc6be,	// (0x000555cc) indicator_popup_pane_ParamLimits

0xc6be,	// (0x000555cc) indicator_popup_pane

0xc6e0,	// (0x000555ee) popup_query_code_window_t1_ParamLimits

0xc6e0,	// (0x000555ee) popup_query_code_window_t1

0xc6fa,	// (0x00055608) popup_query_code_window_t2_ParamLimits

0xc6fa,	// (0x00055608) popup_query_code_window_t2

0x31cc,	// (0x0004c0da) popup_query_code_window_t3_ParamLimits

0x31cc,	// (0x0004c0da) popup_query_code_window_t3

0x0002,

0xf822,	// (0x00058730) popup_query_code_window_t_ParamLimits

0xf822,	// (0x00058730) popup_query_code_window_t

0x31fb,	// (0x0004c109) query_popup_pane_ParamLimits

0x31fb,	// (0x0004c109) query_popup_pane

0x9e17,	// (0x00052d25) bg_popup_window_pane_cp15_ParamLimits

0x9e17,	// (0x00052d25) bg_popup_window_pane_cp15

0x9e35,	// (0x00052d43) indicator_popup_pane_cp1_ParamLimits

0x9e35,	// (0x00052d43) indicator_popup_pane_cp1

0x9e48,	// (0x00052d56) indicator_popup_pane_cp2_ParamLimits

0x9e48,	// (0x00052d56) indicator_popup_pane_cp2

0x9e5b,	// (0x00052d69) popup_query_data_code_window_g1_ParamLimits

0x9e5b,	// (0x00052d69) popup_query_data_code_window_g1

0x9e6e,	// (0x00052d7c) popup_query_data_code_window_t1_ParamLimits

0x9e6e,	// (0x00052d7c) popup_query_data_code_window_t1

0x9e80,	// (0x00052d8e) popup_query_data_code_window_t2_ParamLimits

0x9e80,	// (0x00052d8e) popup_query_data_code_window_t2

0x9e92,	// (0x00052da0) popup_query_data_code_window_t3_ParamLimits

0x9e92,	// (0x00052da0) popup_query_data_code_window_t3

0x9ea8,	// (0x00052db6) popup_query_data_code_window_t4_ParamLimits

0x9ea8,	// (0x00052db6) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00058498) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00058498) popup_query_data_code_window_t

0x04de,	// (0x000493ec) list_single_midp_graphic_pane_g3

0x9ec0,	// (0x00052dce) query_popup_data_pane_cp2_ParamLimits

0x9ed3,	// (0x00052de1) query_popup_pane_cp2_ParamLimits

0x9ed3,	// (0x00052de1) query_popup_pane_cp2

0x976a,	// (0x00052678) bg_popup_window_pane_cp11

0x310d,	// (0x0004c01b) heading_pane_cp5

0x9fbc,	// (0x00052eca) listscroll_popup_info_pane

0x976a,	// (0x00052678) input_focus_pane_cp3

0x9ee6,	// (0x00052df4) query_popup_pane_t1

0x9ef4,	// (0x00052e02) list_popup_info_pane_ParamLimits

0x9ef4,	// (0x00052e02) list_popup_info_pane

0x9f03,	// (0x00052e11) listscroll_popup_info_pane_g1

0x9f0b,	// (0x00052e19) scroll_pane_cp7

0x9f15,	// (0x00052e23) popup_info_list_pane_t1_ParamLimits

0x9f15,	// (0x00052e23) popup_info_list_pane_t1

0x9f2f,	// (0x00052e3d) popup_info_list_pane_t2_ParamLimits

0x9f2f,	// (0x00052e3d) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000584a1) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000584a1) popup_info_list_pane_t

0x976a,	// (0x00052678) bg_popup_window_pane_cp12

0xce6a,	// (0x00055d78) find_popup_pane

0x9a05,	// (0x00052913) bg_popup_window_pane_cp3

0x9f49,	// (0x00052e57) heading_pane_cp3

0x9f55,	// (0x00052e63) listscroll_popup_graphic_pane

0x976a,	// (0x00052678) bg_popup_window_pane_cp4

0x9fb4,	// (0x00052ec2) heading_pane_cp4

0x9fbc,	// (0x00052eca) listscroll_popup_colour_pane

0x9fc4,	// (0x00052ed2) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9fc4,	// (0x00052ed2) cell_large_graphic_colour_none_popup_pane

0x9fd8,	// (0x00052ee6) grid_large_graphic_colour_popup_pane_ParamLimits

0x9fd8,	// (0x00052ee6) grid_large_graphic_colour_popup_pane

0x9ffc,	// (0x00052f0a) listscroll_popup_colour_pane_g1_ParamLimits

0x9ffc,	// (0x00052f0a) listscroll_popup_colour_pane_g1

0xa013,	// (0x00052f21) listscroll_popup_colour_pane_g2_ParamLimits

0xa013,	// (0x00052f21) listscroll_popup_colour_pane_g2

0xa02a,	// (0x00052f38) listscroll_popup_colour_pane_g3_ParamLimits

0xa02a,	// (0x00052f38) listscroll_popup_colour_pane_g3

0xa03a,	// (0x00052f48) listscroll_popup_colour_pane_g4_ParamLimits

0xa03a,	// (0x00052f48) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000584a6) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000584a6) listscroll_popup_colour_pane_g

0xa04a,	// (0x00052f58) scroll_pane_cp6_ParamLimits

0xa04a,	// (0x00052f58) scroll_pane_cp6

0xa05c,	// (0x00052f6a) cell_large_graphic_colour_popup_pane_ParamLimits

0xa05c,	// (0x00052f6a) cell_large_graphic_colour_popup_pane

0xa07b,	// (0x00052f89) cell_large_graphic_colour_none_popup_pane_t1

0x976a,	// (0x00052678) grid_highlight_pane_cp5

0xa08a,	// (0x00052f98) cell_large_graphic_colour_popup_pane_g1

0xa092,	// (0x00052fa0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000584af) cell_large_graphic_colour_popup_pane_g

0xa09a,	// (0x00052fa8) cell_large_graphic_colour_popup_pane_g2_copy1

0xa0a3,	// (0x00052fb1) grid_highlight_pane_cp4

0xa0ab,	// (0x00052fb9) bg_popup_window_pane_cp8_ParamLimits

0xa0ab,	// (0x00052fb9) bg_popup_window_pane_cp8

0xa0c6,	// (0x00052fd4) popup_snote_single_text_window_g1_ParamLimits

0xa0c6,	// (0x00052fd4) popup_snote_single_text_window_g1

0xa0d8,	// (0x00052fe6) popup_snote_single_text_window_t1_ParamLimits

0xa0d8,	// (0x00052fe6) popup_snote_single_text_window_t1

0xa0eb,	// (0x00052ff9) popup_snote_single_text_window_t2_ParamLimits

0xa0eb,	// (0x00052ff9) popup_snote_single_text_window_t2

0xa0fe,	// (0x0005300c) popup_snote_single_text_window_t3_ParamLimits

0xa0fe,	// (0x0005300c) popup_snote_single_text_window_t3

0xa137,	// (0x00053045) popup_snote_single_text_window_t4_ParamLimits

0xa137,	// (0x00053045) popup_snote_single_text_window_t4

0xa16b,	// (0x00053079) popup_snote_single_text_window_t5_ParamLimits

0xa16b,	// (0x00053079) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000584b4) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000584b4) popup_snote_single_text_window_t

0xa19a,	// (0x000530a8) bg_popup_window_pane_cp9_ParamLimits

0xa19a,	// (0x000530a8) bg_popup_window_pane_cp9

0xa0c6,	// (0x00052fd4) popup_snote_single_graphic_window_g1_ParamLimits

0xa0c6,	// (0x00052fd4) popup_snote_single_graphic_window_g1

0xa1a8,	// (0x000530b6) popup_snote_single_graphic_window_g2_ParamLimits

0xa1a8,	// (0x000530b6) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000584bf) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000584bf) popup_snote_single_graphic_window_g

0xa1b4,	// (0x000530c2) popup_snote_single_graphic_window_t1_ParamLimits

0xa1b4,	// (0x000530c2) popup_snote_single_graphic_window_t1

0xa1c7,	// (0x000530d5) popup_snote_single_graphic_window_t2_ParamLimits

0xa1c7,	// (0x000530d5) popup_snote_single_graphic_window_t2

0xa0fe,	// (0x0005300c) popup_snote_single_graphic_window_t3_ParamLimits

0xa0fe,	// (0x0005300c) popup_snote_single_graphic_window_t3

0xa137,	// (0x00053045) popup_snote_single_graphic_window_t4_ParamLimits

0xa137,	// (0x00053045) popup_snote_single_graphic_window_t4

0xa1da,	// (0x000530e8) popup_snote_single_graphic_window_t5_ParamLimits

0xa1da,	// (0x000530e8) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000584c4) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000584c4) popup_snote_single_graphic_window_t

0x4361,	// (0x0004d26f) grid_graphic_popup_pane_ParamLimits

0x4361,	// (0x0004d26f) grid_graphic_popup_pane

0x438b,	// (0x0004d299) listscroll_popup_graphic_pane_g1_ParamLimits

0x438b,	// (0x0004d299) listscroll_popup_graphic_pane_g1

0xce08,	// (0x00055d16) listscroll_popup_graphic_pane_g2_ParamLimits

0xce08,	// (0x00055d16) listscroll_popup_graphic_pane_g2

0x0001,

0xf99f,	// (0x000588ad) listscroll_popup_graphic_pane_g_ParamLimits

0xf99f,	// (0x000588ad) listscroll_popup_graphic_pane_g

0x43b3,	// (0x0004d2c1) scroll_pane_cp5

0xcdad,	// (0x00055cbb) cell_graphic_popup_pane_ParamLimits

0xcdad,	// (0x00055cbb) cell_graphic_popup_pane

0x42e1,	// (0x0004d1ef) cell_graphic_popup_pane_g1

0x42e9,	// (0x0004d1f7) cell_graphic_popup_pane_g2

0xa09a,	// (0x00052fa8) cell_graphic_popup_pane_g3

0x0002,

0xf998,	// (0x000588a6) cell_graphic_popup_pane_g

0x42f2,	// (0x0004d200) cell_graphic_popup_pane_t2

0xa0a3,	// (0x00052fb1) grid_highlight_pane_cp3

0xa21b,	// (0x00053129) list_gen_pane_ParamLimits

0xa21b,	// (0x00053129) list_gen_pane

0xa24d,	// (0x0005315b) scroll_pane

0xcd17,	// (0x00055c25) bg_list_pane_g1_ParamLimits

0xcd17,	// (0x00055c25) bg_list_pane_g1

0xcd32,	// (0x00055c40) bg_list_pane_g2_ParamLimits

0xcd32,	// (0x00055c40) bg_list_pane_g2

0xcd45,	// (0x00055c53) bg_list_pane_g3_ParamLimits

0xcd45,	// (0x00055c53) bg_list_pane_g3

0xcd57,	// (0x00055c65) bg_list_pane_g4_ParamLimits

0xcd57,	// (0x00055c65) bg_list_pane_g4

0xcd69,	// (0x00055c77) bg_list_pane_g5_ParamLimits

0xcd69,	// (0x00055c77) bg_list_pane_g5

0x0004,

0xf98d,	// (0x0005889b) bg_list_pane_g_ParamLimits

0xf98d,	// (0x0005889b) bg_list_pane_g

0xb7b5,	// (0x000546c3) list_double2_graphic_large_graphic_pane_ParamLimits

0xb7b5,	// (0x000546c3) list_double2_graphic_large_graphic_pane

0xb7b5,	// (0x000546c3) list_double2_graphic_pane_ParamLimits

0xb7b5,	// (0x000546c3) list_double2_graphic_pane

0xb7b5,	// (0x000546c3) list_double2_large_graphic_pane_ParamLimits

0xb7b5,	// (0x000546c3) list_double2_large_graphic_pane

0xb7b5,	// (0x000546c3) list_double2_pane_ParamLimits

0xb7b5,	// (0x000546c3) list_double2_pane

0xb7b5,	// (0x000546c3) list_double_graphic_heading_pane_ParamLimits

0xb7b5,	// (0x000546c3) list_double_graphic_heading_pane

0xb7b5,	// (0x000546c3) list_double_graphic_pane_ParamLimits

0xb7b5,	// (0x000546c3) list_double_graphic_pane

0xb7b5,	// (0x000546c3) list_double_heading_pane_ParamLimits

0xb7b5,	// (0x000546c3) list_double_heading_pane

0xb7b5,	// (0x000546c3) list_double_large_graphic_pane_ParamLimits

0xb7b5,	// (0x000546c3) list_double_large_graphic_pane

0xb7b5,	// (0x000546c3) list_double_number_pane_ParamLimits

0xb7b5,	// (0x000546c3) list_double_number_pane

0xb7b5,	// (0x000546c3) list_double_pane_ParamLimits

0xb7b5,	// (0x000546c3) list_double_pane

0xb7b5,	// (0x000546c3) list_double_time_pane_ParamLimits

0xb7b5,	// (0x000546c3) list_double_time_pane

0xb7b5,	// (0x000546c3) list_setting_number_pane_ParamLimits

0xb7b5,	// (0x000546c3) list_setting_number_pane

0xb7b5,	// (0x000546c3) list_setting_pane_ParamLimits

0xb7b5,	// (0x000546c3) list_setting_pane

0xcce0,	// (0x00055bee) list_single_2graphic_pane_ParamLimits

0xcce0,	// (0x00055bee) list_single_2graphic_pane

0xcce0,	// (0x00055bee) list_single_graphic_heading_pane_ParamLimits

0xcce0,	// (0x00055bee) list_single_graphic_heading_pane

0xcce0,	// (0x00055bee) list_single_graphic_pane_ParamLimits

0xcce0,	// (0x00055bee) list_single_graphic_pane

0xcce0,	// (0x00055bee) list_single_heading_pane_ParamLimits

0xcce0,	// (0x00055bee) list_single_heading_pane

0xcce0,	// (0x00055bee) list_single_large_graphic_pane_ParamLimits

0xcce0,	// (0x00055bee) list_single_large_graphic_pane

0xcce0,	// (0x00055bee) list_single_number_heading_pane_ParamLimits

0xcce0,	// (0x00055bee) list_single_number_heading_pane

0xcce0,	// (0x00055bee) list_single_number_pane_ParamLimits

0xcce0,	// (0x00055bee) list_single_number_pane

0xcce0,	// (0x00055bee) list_single_pane_ParamLimits

0xcce0,	// (0x00055bee) list_single_pane

0x976a,	// (0x00052678) list_highlight_pane_cp1

0xf38b,	// (0x00058299) list_single_pane_g1_ParamLimits

0xf38b,	// (0x00058299) list_single_pane_g1

0xf397,	// (0x000582a5) list_single_pane_g2_ParamLimits

0xf397,	// (0x000582a5) list_single_pane_g2

0x0001,

0xf5d2,	// (0x000584e0) list_single_pane_g_ParamLimits

0xf5d2,	// (0x000584e0) list_single_pane_g

0x94a9,	// (0x000523b7) list_single_pane_t1_ParamLimits

0x94a9,	// (0x000523b7) list_single_pane_t1

0xf38b,	// (0x00058299) list_single_number_pane_g1_ParamLimits

0xf38b,	// (0x00058299) list_single_number_pane_g1

0xf397,	// (0x000582a5) list_single_number_pane_g2_ParamLimits

0xf397,	// (0x000582a5) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x000584e0) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x000584e0) list_single_number_pane_g

0xe187,	// (0x00057095) list_single_number_pane_t1_ParamLimits

0xe187,	// (0x00057095) list_single_number_pane_t1

0x9469,	// (0x00052377) list_single_number_pane_t2_ParamLimits

0x9469,	// (0x00052377) list_single_number_pane_t2

0x0001,

0xf94e,	// (0x0005885c) list_single_number_pane_t_ParamLimits

0xf94e,	// (0x0005885c) list_single_number_pane_t

0xe17b,	// (0x00057089) list_single_graphic_pane_g1_ParamLimits

0xe17b,	// (0x00057089) list_single_graphic_pane_g1

0xf38b,	// (0x00058299) list_single_graphic_pane_g2_ParamLimits

0xf38b,	// (0x00058299) list_single_graphic_pane_g2

0xf397,	// (0x000582a5) list_single_graphic_pane_g3_ParamLimits

0xf397,	// (0x000582a5) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000584cf) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000584cf) list_single_graphic_pane_g

0xe187,	// (0x00057095) list_single_graphic_pane_t1_ParamLimits

0xe187,	// (0x00057095) list_single_graphic_pane_t1

0x8e77,	// (0x00051d85) list_single_heading_pane_g1_ParamLimits

0x8e77,	// (0x00051d85) list_single_heading_pane_g1

0xf397,	// (0x000582a5) list_single_heading_pane_g2_ParamLimits

0xf397,	// (0x000582a5) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000584d6) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000584d6) list_single_heading_pane_g

0x8e8a,	// (0x00051d98) list_single_heading_pane_t1_ParamLimits

0x8e8a,	// (0x00051d98) list_single_heading_pane_t1

0xa281,	// (0x0005318f) list_single_heading_pane_t2_ParamLimits

0xa281,	// (0x0005318f) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000584db) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000584db) list_single_heading_pane_t

0xf38b,	// (0x00058299) list_single_number_heading_pane_g1_ParamLimits

0xf38b,	// (0x00058299) list_single_number_heading_pane_g1

0xf397,	// (0x000582a5) list_single_number_heading_pane_g2_ParamLimits

0xf397,	// (0x000582a5) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x000584e0) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x000584e0) list_single_number_heading_pane_g

0x8ea0,	// (0x00051dae) list_single_number_heading_pane_t1_ParamLimits

0x8ea0,	// (0x00051dae) list_single_number_heading_pane_t1

0x8eb6,	// (0x00051dc4) list_single_number_heading_pane_t2_ParamLimits

0x8eb6,	// (0x00051dc4) list_single_number_heading_pane_t2

0x8ec8,	// (0x00051dd6) list_single_number_heading_pane_t3_ParamLimits

0x8ec8,	// (0x00051dd6) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x000584e5) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x000584e5) list_single_number_heading_pane_t

0x8eda,	// (0x00051de8) list_single_graphic_heading_pane_g1_ParamLimits

0x8eda,	// (0x00051de8) list_single_graphic_heading_pane_g1

0xa293,	// (0x000531a1) list_single_graphic_heading_pane_g4_ParamLimits

0xa293,	// (0x000531a1) list_single_graphic_heading_pane_g4

0xf397,	// (0x000582a5) list_single_graphic_heading_pane_g5_ParamLimits

0xf397,	// (0x000582a5) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x000584ec) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x000584ec) list_single_graphic_heading_pane_g

0x8ea0,	// (0x00051dae) list_single_graphic_heading_pane_t1_ParamLimits

0x8ea0,	// (0x00051dae) list_single_graphic_heading_pane_t1

0x8ef0,	// (0x00051dfe) list_single_graphic_heading_pane_t2_ParamLimits

0x8ef0,	// (0x00051dfe) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x000584f3) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x000584f3) list_single_graphic_heading_pane_t

0x12f9,	// (0x0004a207) list_single_large_graphic_pane_g1_ParamLimits

0x12f9,	// (0x0004a207) list_single_large_graphic_pane_g1

0xf38b,	// (0x00058299) list_single_large_graphic_pane_g2_ParamLimits

0xf38b,	// (0x00058299) list_single_large_graphic_pane_g2

0xf397,	// (0x000582a5) list_single_large_graphic_pane_g3_ParamLimits

0xf397,	// (0x000582a5) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x000584f8) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x000584f8) list_single_large_graphic_pane_g

0x32b5,	// (0x0004c1c3) wait_border_pane_g2_copy1

0xa2a4,	// (0x000531b2) list_single_large_graphic_pane_g4_cp2

0xe187,	// (0x00057095) list_single_large_graphic_pane_t1_ParamLimits

0xe187,	// (0x00057095) list_single_large_graphic_pane_t1

0x4c10,	// (0x0004db1e) list_double_pane_g1_ParamLimits

0x4c10,	// (0x0004db1e) list_double_pane_g1

0xf3a3,	// (0x000582b1) list_double_pane_g2_ParamLimits

0xf3a3,	// (0x000582b1) list_double_pane_g2

0x0001,

0xf5f1,	// (0x000584ff) list_double_pane_g_ParamLimits

0xf5f1,	// (0x000584ff) list_double_pane_g

0x8f08,	// (0x00051e16) list_double_pane_t1_ParamLimits

0x8f08,	// (0x00051e16) list_double_pane_t1

0x8f1e,	// (0x00051e2c) list_double_pane_t2_ParamLimits

0x8f1e,	// (0x00051e2c) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00058504) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00058504) list_double_pane_t

0x8f30,	// (0x00051e3e) list_double2_pane_g1_ParamLimits

0x8f30,	// (0x00051e3e) list_double2_pane_g1

0x8f41,	// (0x00051e4f) list_double2_pane_g2_ParamLimits

0x8f41,	// (0x00051e4f) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00058509) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00058509) list_double2_pane_g

0x8f4d,	// (0x00051e5b) list_double2_pane_t1_ParamLimits

0x8f4d,	// (0x00051e5b) list_double2_pane_t1

0x8f63,	// (0x00051e71) list_double2_pane_t2_ParamLimits

0x8f63,	// (0x00051e71) list_double2_pane_t2

0x0001,

0xf600,	// (0x0005850e) list_double2_pane_t_ParamLimits

0xf600,	// (0x0005850e) list_double2_pane_t

0x4c10,	// (0x0004db1e) list_double_number_pane_g1_ParamLimits

0x4c10,	// (0x0004db1e) list_double_number_pane_g1

0xf3a3,	// (0x000582b1) list_double_number_pane_g2_ParamLimits

0xf3a3,	// (0x000582b1) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x000584ff) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x000584ff) list_double_number_pane_g

0x8f75,	// (0x00051e83) list_double_number_pane_t1_ParamLimits

0x8f75,	// (0x00051e83) list_double_number_pane_t1

0x8f87,	// (0x00051e95) list_double_number_pane_t2_ParamLimits

0x8f87,	// (0x00051e95) list_double_number_pane_t2

0x8f9d,	// (0x00051eab) list_double_number_pane_t3_ParamLimits

0x8f9d,	// (0x00051eab) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00058513) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00058513) list_double_number_pane_t

0x8faf,	// (0x00051ebd) list_double_graphic_pane_g1_ParamLimits

0x8faf,	// (0x00051ebd) list_double_graphic_pane_g1

0x8fbb,	// (0x00051ec9) list_double_graphic_pane_g2_ParamLimits

0x8fbb,	// (0x00051ec9) list_double_graphic_pane_g2

0x8fca,	// (0x00051ed8) list_double_graphic_pane_g3_ParamLimits

0x8fca,	// (0x00051ed8) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0005851a) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0005851a) list_double_graphic_pane_g

0x8f87,	// (0x00051e95) list_double_graphic_pane_t1_ParamLimits

0x8f87,	// (0x00051e95) list_double_graphic_pane_t1

0x8f9d,	// (0x00051eab) list_double_graphic_pane_t2_ParamLimits

0x8f9d,	// (0x00051eab) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00058523) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00058523) list_double_graphic_pane_t

0x8fe2,	// (0x00051ef0) list_double2_graphic_pane_g1_ParamLimits

0x8fe2,	// (0x00051ef0) list_double2_graphic_pane_g1

0xa2ac,	// (0x000531ba) list_double2_graphic_pane_g2_ParamLimits

0xa2ac,	// (0x000531ba) list_double2_graphic_pane_g2

0xa2b8,	// (0x000531c6) list_double2_graphic_pane_g3_ParamLimits

0xa2b8,	// (0x000531c6) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00058528) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00058528) list_double2_graphic_pane_g

0x8fee,	// (0x00051efc) list_double2_graphic_pane_t1_ParamLimits

0x8fee,	// (0x00051efc) list_double2_graphic_pane_t1

0x9004,	// (0x00051f12) list_double2_graphic_pane_t2_ParamLimits

0x9004,	// (0x00051f12) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0005852f) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0005852f) list_double2_graphic_pane_t

0x9016,	// (0x00051f24) list_double_large_graphic_pane_g1_ParamLimits

0x9016,	// (0x00051f24) list_double_large_graphic_pane_g1

0x9035,	// (0x00051f43) list_double_large_graphic_pane_g2_ParamLimits

0x9035,	// (0x00051f43) list_double_large_graphic_pane_g2

0xf3a3,	// (0x000582b1) list_double_large_graphic_pane_g3_ParamLimits

0xf3a3,	// (0x000582b1) list_double_large_graphic_pane_g3

0x904b,	// (0x00051f59) list_double_large_graphic_pane_g4_ParamLimits

0x904b,	// (0x00051f59) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00058534) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00058534) list_double_large_graphic_pane_g

0x905e,	// (0x00051f6c) list_double_large_graphic_pane_t1_ParamLimits

0x905e,	// (0x00051f6c) list_double_large_graphic_pane_t1

0x9077,	// (0x00051f85) list_double_large_graphic_pane_t2_ParamLimits

0x9077,	// (0x00051f85) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0005853f) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0005853f) list_double_large_graphic_pane_t

0xa2c4,	// (0x000531d2) list_double2_large_graphic_pane_g1_ParamLimits

0xa2c4,	// (0x000531d2) list_double2_large_graphic_pane_g1

0x9089,	// (0x00051f97) list_double2_large_graphic_pane_g2_ParamLimits

0x9089,	// (0x00051f97) list_double2_large_graphic_pane_g2

0xa2b8,	// (0x000531c6) list_double2_large_graphic_pane_g3_ParamLimits

0xa2b8,	// (0x000531c6) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00058544) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00058544) list_double2_large_graphic_pane_g

0x8fee,	// (0x00051efc) list_double2_large_graphic_pane_t1_ParamLimits

0x8fee,	// (0x00051efc) list_double2_large_graphic_pane_t1

0x9004,	// (0x00051f12) list_double2_large_graphic_pane_t2_ParamLimits

0x9004,	// (0x00051f12) list_double2_large_graphic_pane_t2

0x0001,

0xf621,	// (0x0005852f) list_double2_large_graphic_pane_t_ParamLimits

0xf621,	// (0x0005852f) list_double2_large_graphic_pane_t

0x909a,	// (0x00051fa8) list_double_heading_pane_g1_ParamLimits

0x909a,	// (0x00051fa8) list_double_heading_pane_g1

0xa2d0,	// (0x000531de) list_double_heading_pane_g2_ParamLimits

0xa2d0,	// (0x000531de) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0005854b) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0005854b) list_double_heading_pane_g

0x90ab,	// (0x00051fb9) list_double_heading_pane_t1_ParamLimits

0x90ab,	// (0x00051fb9) list_double_heading_pane_t1

0x9004,	// (0x00051f12) list_double_heading_pane_t2_ParamLimits

0x9004,	// (0x00051f12) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00058550) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00058550) list_double_heading_pane_t

0x90c1,	// (0x00051fcf) list_double_graphic_heading_pane_g1_ParamLimits

0x90c1,	// (0x00051fcf) list_double_graphic_heading_pane_g1

0x909a,	// (0x00051fa8) list_double_graphic_heading_pane_g2_ParamLimits

0x909a,	// (0x00051fa8) list_double_graphic_heading_pane_g2

0xa2d0,	// (0x000531de) list_double_graphic_heading_pane_g3_ParamLimits

0xa2d0,	// (0x000531de) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00058555) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00058555) list_double_graphic_heading_pane_g

0x90ab,	// (0x00051fb9) list_double_graphic_heading_pane_t1_ParamLimits

0x90ab,	// (0x00051fb9) list_double_graphic_heading_pane_t1

0x9004,	// (0x00051f12) list_double_graphic_heading_pane_t2_ParamLimits

0x9004,	// (0x00051f12) list_double_graphic_heading_pane_t2

0x0001,

0xf642,	// (0x00058550) list_double_graphic_heading_pane_t_ParamLimits

0xf642,	// (0x00058550) list_double_graphic_heading_pane_t

0x90cd,	// (0x00051fdb) list_double_time_pane_g1_ParamLimits

0x90cd,	// (0x00051fdb) list_double_time_pane_g1

0xe19d,	// (0x000570ab) list_double_time_pane_g2_ParamLimits

0xe19d,	// (0x000570ab) list_double_time_pane_g2

0x0001,

0xf64e,	// (0x0005855c) list_double_time_pane_g_ParamLimits

0xf64e,	// (0x0005855c) list_double_time_pane_g

0x90de,	// (0x00051fec) list_double_time_pane_t1_ParamLimits

0x90de,	// (0x00051fec) list_double_time_pane_t1

0x90f4,	// (0x00052002) list_double_time_pane_t2_ParamLimits

0x90f4,	// (0x00052002) list_double_time_pane_t2

0x9106,	// (0x00052014) list_double_time_pane_t3_ParamLimits

0x9106,	// (0x00052014) list_double_time_pane_t3

0x9118,	// (0x00052026) list_double_time_pane_t4_ParamLimits

0x9118,	// (0x00052026) list_double_time_pane_t4

0x0003,

0xf653,	// (0x00058561) list_double_time_pane_t_ParamLimits

0xf653,	// (0x00058561) list_double_time_pane_t

0x912a,	// (0x00052038) list_setting_pane_g1_ParamLimits

0x912a,	// (0x00052038) list_setting_pane_g1

0x9136,	// (0x00052044) list_setting_pane_g2_ParamLimits

0x9136,	// (0x00052044) list_setting_pane_g2

0x0001,

0xf65c,	// (0x0005856a) list_setting_pane_g_ParamLimits

0xf65c,	// (0x0005856a) list_setting_pane_g

0x9142,	// (0x00052050) list_setting_pane_t1_ParamLimits

0x9142,	// (0x00052050) list_setting_pane_t1

0x915c,	// (0x0005206a) list_setting_pane_t2_ParamLimits

0x915c,	// (0x0005206a) list_setting_pane_t2

0x0002,

0xf661,	// (0x0005856f) list_setting_pane_t_ParamLimits

0xf661,	// (0x0005856f) list_setting_pane_t

0x919b,	// (0x000520a9) set_value_pane_cp_ParamLimits

0x919b,	// (0x000520a9) set_value_pane_cp

0x91a7,	// (0x000520b5) list_setting_number_pane_g1_ParamLimits

0x91a7,	// (0x000520b5) list_setting_number_pane_g1

0x91b3,	// (0x000520c1) list_setting_number_pane_g2_ParamLimits

0x91b3,	// (0x000520c1) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x00058576) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x00058576) list_setting_number_pane_g

0x91bf,	// (0x000520cd) list_setting_number_pane_t1_ParamLimits

0x91bf,	// (0x000520cd) list_setting_number_pane_t1

0x91d8,	// (0x000520e6) list_setting_number_pane_t2_ParamLimits

0x91d8,	// (0x000520e6) list_setting_number_pane_t2

0x91f2,	// (0x00052100) list_setting_number_pane_t3_ParamLimits

0x91f2,	// (0x00052100) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0005857b) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0005857b) list_setting_number_pane_t

0x919b,	// (0x000520a9) set_value_pane_ParamLimits

0x919b,	// (0x000520a9) set_value_pane

0xa2dc,	// (0x000531ea) bg_set_opt_pane_ParamLimits

0xa2dc,	// (0x000531ea) bg_set_opt_pane

0xe1a9,	// (0x000570b7) set_value_pane_t1

0xa2fd,	// (0x0005320b) slider_set_pane_cp3

0xa306,	// (0x00053214) volume_small_pane_cp

0xa30f,	// (0x0005321d) list_form_gen_pane

0xa318,	// (0x00053226) scroll_pane_cp8

0x9235,	// (0x00052143) form_field_data_pane_ParamLimits

0x9235,	// (0x00052143) form_field_data_pane

0x924c,	// (0x0005215a) form_field_data_wide_pane_ParamLimits

0x924c,	// (0x0005215a) form_field_data_wide_pane

0x926c,	// (0x0005217a) form_field_popup_pane_ParamLimits

0x926c,	// (0x0005217a) form_field_popup_pane

0x9284,	// (0x00052192) form_field_popup_wide_pane_ParamLimits

0x9284,	// (0x00052192) form_field_popup_wide_pane

0xe1c7,	// (0x000570d5) form_field_slider_pane_ParamLimits

0xe1c7,	// (0x000570d5) form_field_slider_pane

0x929b,	// (0x000521a9) form_field_slider_wide_pane_ParamLimits

0x929b,	// (0x000521a9) form_field_slider_wide_pane

0xa329,	// (0x00053237) data_form_pane

0x92b8,	// (0x000521c6) form_field_data_pane_t1

0xa335,	// (0x00053243) input_focus_pane

0xe1da,	// (0x000570e8) data_form_wide_pane

0xe1f7,	// (0x00057105) form_field_data_wide_pane_t1

0xa0b8,	// (0x00052fc6) input_focus_pane_cp6

0x92d2,	// (0x000521e0) form_field_popup_pane_t1

0xa335,	// (0x00053243) input_focus_pane_cp7

0xa357,	// (0x00053265) list_form_pane

0xe221,	// (0x0005712f) form_field_popup_wide_pane_t1

0xa335,	// (0x00053243) input_focus_pane_cp8

0xa363,	// (0x00053271) list_form_wide_pane

0x92f4,	// (0x00052202) form_field_slider_pane_t1_ParamLimits

0x92f4,	// (0x00052202) form_field_slider_pane_t1

0x930c,	// (0x0005221a) form_field_slider_pane_t2_ParamLimits

0x930c,	// (0x0005221a) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0005858b) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0005858b) form_field_slider_pane_t

0x99bb,	// (0x000528c9) input_focus_pane_cp9_ParamLimits

0x99bb,	// (0x000528c9) input_focus_pane_cp9

0x9321,	// (0x0005222f) slider_cont_pane_ParamLimits

0x9321,	// (0x0005222f) slider_cont_pane

0xa36f,	// (0x0005327d) form_field_slider_wide_pane_t1_ParamLimits

0xa36f,	// (0x0005327d) form_field_slider_wide_pane_t1

0xe236,	// (0x00057144) form_field_slider_wide_pane_t2_ParamLimits

0xe236,	// (0x00057144) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x00058590) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x00058590) form_field_slider_wide_pane_t

0x99bb,	// (0x000528c9) input_focus_pane_cp10_ParamLimits

0x99bb,	// (0x000528c9) input_focus_pane_cp10

0x9335,	// (0x00052243) slider_cont_pane_cp1_ParamLimits

0x9335,	// (0x00052243) slider_cont_pane_cp1

0x9349,	// (0x00052257) slider_form_pane_cp

0xa381,	// (0x0005328f) input_focus_pane_g1

0xa389,	// (0x00053297) input_focus_pane_g2

0xa391,	// (0x0005329f) input_focus_pane_g3

0xa399,	// (0x000532a7) input_focus_pane_g4

0xa3a1,	// (0x000532af) input_focus_pane_g5

0xa3a9,	// (0x000532b7) input_focus_pane_g6

0xa3b1,	// (0x000532bf) input_focus_pane_g7

0xa3b9,	// (0x000532c7) input_focus_pane_g8

0xa3c1,	// (0x000532cf) input_focus_pane_g9

0x967a,	// (0x00052588) input_focus_pane_g10

0x0009,

0xf687,	// (0x00058595) input_focus_pane_g

0x32be,	// (0x0004c1cc) wait_border_pane_g3_copy1

0x9351,	// (0x0005225f) data_form_pane_t1

0x967a,	// (0x00052588) wait_anim_pane_g1_copy1

0x947b,	// (0x00052389) data_form_wide_pane_t1

0x936b,	// (0x00052279) list_form_graphic_pane_cp_ParamLimits

0x936b,	// (0x00052279) list_form_graphic_pane_cp

0x41ad,	// (0x0004d0bb) slider_form_pane_g1

0x41b6,	// (0x0004d0c4) slider_form_pane_g2

0x0006,

0xf97e,	// (0x0005888c) slider_form_pane_g

0x936b,	// (0x00052279) list_form_graphic_pane_ParamLimits

0x936b,	// (0x00052279) list_form_graphic_pane

0x937d,	// (0x0005228b) list_form_graphic_pane_g1

0x9385,	// (0x00052293) list_form_graphic_pane_t1_ParamLimits

0x9385,	// (0x00052293) list_form_graphic_pane_t1

0x9a05,	// (0x00052913) list_highlight_pane_cp5_ParamLimits

0x9a05,	// (0x00052913) list_highlight_pane_cp5

0x939a,	// (0x000522a8) find_pane_g1

0xa3c9,	// (0x000532d7) input_find_pane

0x93a3,	// (0x000522b1) input_find_pane_g1_ParamLimits

0x93a3,	// (0x000522b1) input_find_pane_g1

0x93af,	// (0x000522bd) input_find_pane_t1_ParamLimits

0x93af,	// (0x000522bd) input_find_pane_t1

0x93c4,	// (0x000522d2) input_find_pane_t2_ParamLimits

0x93c4,	// (0x000522d2) input_find_pane_t2

0x0001,

0xf69c,	// (0x000585aa) input_find_pane_t_ParamLimits

0xf69c,	// (0x000585aa) input_find_pane_t

0xa3d2,	// (0x000532e0) input_focus_pane_cp5_ParamLimits

0xa3d2,	// (0x000532e0) input_focus_pane_cp5

0xa3ec,	// (0x000532fa) bg_popup_window_pane_cp2_ParamLimits

0xa3ec,	// (0x000532fa) bg_popup_window_pane_cp2

0xa3f9,	// (0x00053307) listscroll_menu_pane_ParamLimits

0xa3f9,	// (0x00053307) listscroll_menu_pane

0xa405,	// (0x00053313) popup_submenu_window_ParamLimits

0xa405,	// (0x00053313) popup_submenu_window

0xa42d,	// (0x0005333b) find_popup_pane_g1

0xa435,	// (0x00053343) input_popup_find_pane_cp

0xa3d2,	// (0x000532e0) input_focus_pane_cp4_ParamLimits

0xa3d2,	// (0x000532e0) input_focus_pane_cp4

0xa44d,	// (0x0005335b) input_popup_find_pane_t1_ParamLimits

0xa44d,	// (0x0005335b) input_popup_find_pane_t1

0x976a,	// (0x00052678) bg_popup_sub_pane_cp

0xa47b,	// (0x00053389) listscroll_popup_sub_pane

0xa483,	// (0x00053391) list_submenu_pane_ParamLimits

0xa483,	// (0x00053391) list_submenu_pane

0xa494,	// (0x000533a2) scroll_pane_cp4

0xa49c,	// (0x000533aa) list_single_popup_submenu_pane_ParamLimits

0xa49c,	// (0x000533aa) list_single_popup_submenu_pane

0xa4b0,	// (0x000533be) list_single_popup_submenu_pane_g1

0xa4b8,	// (0x000533c6) list_single_popup_submenu_pane_t1_ParamLimits

0xa4b8,	// (0x000533c6) list_single_popup_submenu_pane_t1

0x99bb,	// (0x000528c9) bg_active_tab_pane_cp1_ParamLimits

0x99bb,	// (0x000528c9) bg_active_tab_pane_cp1

0xa4cd,	// (0x000533db) tabs_2_active_pane_g1

0xa4d5,	// (0x000533e3) tabs_2_active_pane_t1

0x99bb,	// (0x000528c9) bg_passive_tab_pane_cp1_ParamLimits

0x99bb,	// (0x000528c9) bg_passive_tab_pane_cp1

0xa4cd,	// (0x000533db) tabs_2_passive_pane_g1

0xa4d5,	// (0x000533e3) tabs_2_passive_pane_t1

0x9a05,	// (0x00052913) bg_active_tab_pane_cp4

0xa4e7,	// (0x000533f5) tabs_2_long_active_pane_t1

0x2799,	// (0x0004b6a7) bg_passive_tab_pane_cp4

0x0e1e,	// (0x00049d2c) list_single_midp_graphic_pane_g4_ParamLimits

0x9a05,	// (0x00052913) bg_active_tab_pane_cp5

0xa4fa,	// (0x00053408) tabs_3_long_active_pane_t1

0x2799,	// (0x0004b6a7) bg_passive_tab_pane_cp5

0x0e1e,	// (0x00049d2c) list_single_midp_graphic_pane_g4

0x9a05,	// (0x00052913) bg_popup_window_pane_cp13_ParamLimits

0x9a05,	// (0x00052913) bg_popup_window_pane_cp13

0xa515,	// (0x00053423) listscroll_popup_fast_pane_ParamLimits

0xa515,	// (0x00053423) listscroll_popup_fast_pane

0xa521,	// (0x0005342f) grid_popup_fast_pane_ParamLimits

0xa521,	// (0x0005342f) grid_popup_fast_pane

0xa533,	// (0x00053441) scroll_pane_cp9_ParamLimits

0xa533,	// (0x00053441) scroll_pane_cp9

0x5a9c,	// (0x0004e9aa) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5a9c,	// (0x0004e9aa) list_single_graphic_hl_pane_t1_cp2

0xa557,	// (0x00053465) input_focus_pane_cp20_ParamLimits

0xa557,	// (0x00053465) input_focus_pane_cp20

0xa565,	// (0x00053473) query_popup_data_pane_t1_ParamLimits

0xa565,	// (0x00053473) query_popup_data_pane_t1

0xa578,	// (0x00053486) query_popup_data_pane_t2_ParamLimits

0xa578,	// (0x00053486) query_popup_data_pane_t2

0xa5be,	// (0x000534cc) query_popup_data_pane_t3_ParamLimits

0xa5be,	// (0x000534cc) query_popup_data_pane_t3

0xa5ff,	// (0x0005350d) query_popup_data_pane_t4_ParamLimits

0xa5ff,	// (0x0005350d) query_popup_data_pane_t4

0xa63b,	// (0x00053549) query_popup_data_pane_t5_ParamLimits

0xa63b,	// (0x00053549) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x000585af) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x000585af) query_popup_data_pane_t

0xa381,	// (0x0005328f) bg_set_opt_pane_g1

0xa389,	// (0x00053297) bg_set_opt_pane_g2

0xa391,	// (0x0005329f) bg_set_opt_pane_g3

0xa399,	// (0x000532a7) bg_set_opt_pane_g4

0xa3a1,	// (0x000532af) bg_set_opt_pane_g5

0xa3a9,	// (0x000532b7) bg_set_opt_pane_g6

0xa3b1,	// (0x000532bf) bg_set_opt_pane_g7

0xa3b9,	// (0x000532c7) bg_set_opt_pane_g8

0xa3c1,	// (0x000532cf) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x000585ba) bg_set_opt_pane_g

0x02cf,	// (0x000491dd) control_top_pane_stacon_ParamLimits

0x02cf,	// (0x000491dd) control_top_pane_stacon

0x0322,	// (0x00049230) signal_pane_stacon_ParamLimits

0x0322,	// (0x00049230) signal_pane_stacon

0xe32e,	// (0x0005723c) stacon_top_pane_g1_ParamLimits

0xe32e,	// (0x0005723c) stacon_top_pane_g1

0x0347,	// (0x00049255) title_pane_stacon_ParamLimits

0x0347,	// (0x00049255) title_pane_stacon

0x0371,	// (0x0004927f) uni_indicator_pane_stacon_ParamLimits

0x0371,	// (0x0004927f) uni_indicator_pane_stacon

0x0386,	// (0x00049294) battery_pane_stacon_ParamLimits

0x0386,	// (0x00049294) battery_pane_stacon

0x03ca,	// (0x000492d8) control_bottom_pane_stacon_ParamLimits

0x03ca,	// (0x000492d8) control_bottom_pane_stacon

0x03ed,	// (0x000492fb) navi_pane_stacon_ParamLimits

0x03ed,	// (0x000492fb) navi_pane_stacon

0xe350,	// (0x0005725e) stacon_bottom_pane_g1_ParamLimits

0xe350,	// (0x0005725e) stacon_bottom_pane_g1

0xf3c4,	// (0x000582d2) aid_levels_signal_lsc_ParamLimits

0xf3c4,	// (0x000582d2) aid_levels_signal_lsc

0xf3da,	// (0x000582e8) signal_pane_stacon_g1_ParamLimits

0xf3da,	// (0x000582e8) signal_pane_stacon_g1

0xf3ee,	// (0x000582fc) signal_pane_stacon_g2_ParamLimits

0xf3ee,	// (0x000582fc) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x000585cd) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x000585cd) signal_pane_stacon_g

0xf423,	// (0x00058331) title_pane_stacon_t1_ParamLimits

0xf423,	// (0x00058331) title_pane_stacon_t1

0xa67f,	// (0x0005358d) uni_indicator_pane_stacon_g1

0xa689,	// (0x00053597) uni_indicator_pane_stacon_g2

0xa693,	// (0x000535a1) uni_indicator_pane_stacon_g3

0xa69d,	// (0x000535ab) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x000585d9) uni_indicator_pane_stacon_g

0xf448,	// (0x00058356) control_top_pane_stacon_g1

0xf450,	// (0x0005835e) control_top_pane_stacon_t1_ParamLimits

0xf450,	// (0x0005835e) control_top_pane_stacon_t1

0xf487,	// (0x00058395) aid_levels_battery_lsc_ParamLimits

0xf487,	// (0x00058395) aid_levels_battery_lsc

0xf49e,	// (0x000583ac) battery_pane_stacon_g1_ParamLimits

0xf49e,	// (0x000583ac) battery_pane_stacon_g1

0xf4b1,	// (0x000583bf) battery_pane_stacon_g2_ParamLimits

0xf4b1,	// (0x000583bf) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x000585e2) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x000585e2) battery_pane_stacon_g

0xf4ef,	// (0x000583fd) navi_icon_pane_stacon

0xf503,	// (0x00058411) navi_navi_pane_stacon

0xf4ef,	// (0x000583fd) navi_text_pane_stacon

0xf448,	// (0x00058356) control_bottom_pane_stacon_g1

0xf517,	// (0x00058425) control_bottom_pane_stacon_t1_ParamLimits

0xf517,	// (0x00058425) control_bottom_pane_stacon_t1

0xa6c1,	// (0x000535cf) grid_app_pane_ParamLimits

0xa6c1,	// (0x000535cf) grid_app_pane

0xa6f9,	// (0x00053607) scroll_pane_cp15_ParamLimits

0xa6f9,	// (0x00053607) scroll_pane_cp15

0xa70e,	// (0x0005361c) cell_app_pane_ParamLimits

0xa70e,	// (0x0005361c) cell_app_pane

0xa753,	// (0x00053661) cell_app_pane_g1_ParamLimits

0xa753,	// (0x00053661) cell_app_pane_g1

0xa777,	// (0x00053685) cell_app_pane_g2_ParamLimits

0xa777,	// (0x00053685) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x000585e7) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x000585e7) cell_app_pane_g

0xa783,	// (0x00053691) cell_app_pane_t1_ParamLimits

0xa783,	// (0x00053691) cell_app_pane_t1

0xa79a,	// (0x000536a8) grid_highlight_pane_ParamLimits

0xa79a,	// (0x000536a8) grid_highlight_pane

0xa381,	// (0x0005328f) cell_highlight_pane_g1

0xa389,	// (0x00053297) cell_highlight_pane_g2

0xa391,	// (0x0005329f) cell_highlight_pane_g3

0xa399,	// (0x000532a7) cell_highlight_pane_g4

0xa3a1,	// (0x000532af) cell_highlight_pane_g5

0xa3a9,	// (0x000532b7) cell_highlight_pane_g6

0xa3b1,	// (0x000532bf) cell_highlight_pane_g7

0xa3b9,	// (0x000532c7) cell_highlight_pane_g8

0xa3c1,	// (0x000532cf) cell_highlight_pane_g9

0x967a,	// (0x00052588) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x00058595) cell_highlight_pane_g

0xa7b4,	// (0x000536c2) bg_scroll_pane

0xa7d3,	// (0x000536e1) scroll_handle_pane

0xa80f,	// (0x0005371d) scroll_bg_pane_g1

0xa824,	// (0x00053732) scroll_bg_pane_g2

0xa83c,	// (0x0005374a) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x000585ec) scroll_bg_pane_g

0xa851,	// (0x0005375f) scroll_handle_focus_pane_ParamLimits

0xa851,	// (0x0005375f) scroll_handle_focus_pane

0xa80f,	// (0x0005371d) scroll_handle_pane_g1

0xa85e,	// (0x0005376c) scroll_handle_pane_g2

0xa83c,	// (0x0005374a) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x000585f3) scroll_handle_pane_g

0xa3d2,	// (0x000532e0) bg_popup_sub_pane_cp21_ParamLimits

0xa3d2,	// (0x000532e0) bg_popup_sub_pane_cp21

0xa872,	// (0x00053780) popup_fep_japan_predictive_window_t1_ParamLimits

0xa872,	// (0x00053780) popup_fep_japan_predictive_window_t1

0xa889,	// (0x00053797) popup_fep_japan_predictive_window_t2_ParamLimits

0xa889,	// (0x00053797) popup_fep_japan_predictive_window_t2

0xa8bc,	// (0x000537ca) popup_fep_japan_predictive_window_t3_ParamLimits

0xa8bc,	// (0x000537ca) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x000585fa) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x000585fa) popup_fep_japan_predictive_window_t

0x976a,	// (0x00052678) bg_popup_sub_pane_cp23

0xa8f3,	// (0x00053801) listscroll_japin_cand_pane

0xa8fb,	// (0x00053809) popup_fep_japan_candidate_window_t1

0xa909,	// (0x00053817) candidate_pane_ParamLimits

0xa909,	// (0x00053817) candidate_pane

0xa91b,	// (0x00053829) scroll_pane_cp30

0xa923,	// (0x00053831) list_single_popup_jap_candidate_pane_ParamLimits

0xa923,	// (0x00053831) list_single_popup_jap_candidate_pane

0x976a,	// (0x00052678) list_highlight_pane_cp30

0xa938,	// (0x00053846) list_single_popup_jap_candidate_pane_t1

0xa947,	// (0x00053855) level_1_signal

0xa954,	// (0x00053862) level_2_signal

0xa961,	// (0x0005386f) level_3_signal

0xbfce,	// (0x00054edc) level_4_signal

0xbfdb,	// (0x00054ee9) level_5_signal

0xbfe8,	// (0x00054ef6) level_6_signal

0xbff5,	// (0x00054f03) level_7_signal

0xa947,	// (0x00053855) level_1_battery

0xa954,	// (0x00053862) level_2_battery

0xa961,	// (0x0005386f) level_3_battery

0xbfce,	// (0x00054edc) level_4_battery

0xbfdb,	// (0x00054ee9) level_5_battery

0xbfe8,	// (0x00054ef6) level_6_battery

0xbff5,	// (0x00054f03) level_7_battery

0xc01a,	// (0x00054f28) list_menu_pane_ParamLimits

0xc01a,	// (0x00054f28) list_menu_pane

0xc030,	// (0x00054f3e) scroll_pane_cp25_ParamLimits

0xc030,	// (0x00054f3e) scroll_pane_cp25

0xa96e,	// (0x0005387c) list_double2_graphic_pane_cp2_ParamLimits

0xa96e,	// (0x0005387c) list_double2_graphic_pane_cp2

0xa96e,	// (0x0005387c) list_double2_large_graphic_pane_cp2_ParamLimits

0xa96e,	// (0x0005387c) list_double2_large_graphic_pane_cp2

0xa96e,	// (0x0005387c) list_double2_pane_cp2_ParamLimits

0xa96e,	// (0x0005387c) list_double2_pane_cp2

0xa96e,	// (0x0005387c) list_double_graphic_pane_cp2_ParamLimits

0xa96e,	// (0x0005387c) list_double_graphic_pane_cp2

0xa96e,	// (0x0005387c) list_double_large_graphic_pane_cp2_ParamLimits

0xa96e,	// (0x0005387c) list_double_large_graphic_pane_cp2

0xa96e,	// (0x0005387c) list_double_number_pane_cp2_ParamLimits

0xa96e,	// (0x0005387c) list_double_number_pane_cp2

0xa96e,	// (0x0005387c) list_double_pane_cp2_ParamLimits

0xa96e,	// (0x0005387c) list_double_pane_cp2

0xa97d,	// (0x0005388b) list_single_2graphic_pane_cp2_ParamLimits

0xa97d,	// (0x0005388b) list_single_2graphic_pane_cp2

0xa97d,	// (0x0005388b) list_single_graphic_heading_pane_cp2_ParamLimits

0xa97d,	// (0x0005388b) list_single_graphic_heading_pane_cp2

0xa97d,	// (0x0005388b) list_single_graphic_pane_cp2_ParamLimits

0xa97d,	// (0x0005388b) list_single_graphic_pane_cp2

0xa97d,	// (0x0005388b) list_single_heading_pane_cp2_ParamLimits

0xa97d,	// (0x0005388b) list_single_heading_pane_cp2

0xc059,	// (0x00054f67) list_single_large_graphic_pane_cp2_ParamLimits

0xc059,	// (0x00054f67) list_single_large_graphic_pane_cp2

0xa97d,	// (0x0005388b) list_single_number_heading_pane_cp2_ParamLimits

0xa97d,	// (0x0005388b) list_single_number_heading_pane_cp2

0xa97d,	// (0x0005388b) list_single_number_pane_cp2_ParamLimits

0xa97d,	// (0x0005388b) list_single_number_pane_cp2

0xa97d,	// (0x0005388b) list_single_pane_cp2_ParamLimits

0xa97d,	// (0x0005388b) list_single_pane_cp2

0xc073,	// (0x00054f81) bg_popup_sub_pane_cp22

0x0206,	// (0x00049114) popup_side_volume_key_window_g1

0x022a,	// (0x00049138) popup_side_volume_key_window_t1

0xaa45,	// (0x00053953) volume_small_pane_cp1

0x99bb,	// (0x000528c9) bg_popup_sub_pane_cp24_ParamLimits

0x99bb,	// (0x000528c9) bg_popup_sub_pane_cp24

0xc089,	// (0x00054f97) fep_china_uni_candidate_pane_ParamLimits

0xc089,	// (0x00054f97) fep_china_uni_candidate_pane

0xc09d,	// (0x00054fab) fep_china_uni_entry_pane

0xc0ad,	// (0x00054fbb) popup_fep_china_uni_window_g1

0xaa4d,	// (0x0005395b) fep_china_uni_entry_pane_g1

0xaa55,	// (0x00053963) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0005862b) fep_china_uni_entry_pane_g

0xe248,	// (0x00057156) fep_entry_item_pane

0xe252,	// (0x00057160) fep_candidate_item_pane

0xaa5d,	// (0x0005396b) fep_china_uni_candidate_pane_g1

0xe25a,	// (0x00057168) fep_china_uni_candidate_pane_g2

0xe262,	// (0x00057170) fep_china_uni_candidate_pane_g3

0xaa65,	// (0x00053973) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x00058630) fep_china_uni_candidate_pane_g

0x967a,	// (0x00052588) fep_entry_item_pane_g1

0xe26a,	// (0x00057178) fep_entry_item_pane_t1_ParamLimits

0xe26a,	// (0x00057178) fep_entry_item_pane_t1

0xe280,	// (0x0005718e) fep_candidate_item_pane_t1_ParamLimits

0xe280,	// (0x0005718e) fep_candidate_item_pane_t1

0xe295,	// (0x000571a3) fep_candidate_item_pane_t2_ParamLimits

0xe295,	// (0x000571a3) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x00058639) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x00058639) fep_candidate_item_pane_t

0x9a05,	// (0x00052913) list_highlight_pane_cp31_ParamLimits

0x9a05,	// (0x00052913) list_highlight_pane_cp31

0xe2a7,	// (0x000571b5) level_1_signal_lsc

0xe2b0,	// (0x000571be) level_2_signal_lsc

0xe2b9,	// (0x000571c7) level_3_signal_lsc

0xe2c2,	// (0x000571d0) level_4_signal_lsc

0xe2cb,	// (0x000571d9) level_5_signal_lsc

0xe2d4,	// (0x000571e2) level_6_signal_lsc

0xe2dd,	// (0x000571eb) level_7_signal_lsc

0xe2dd,	// (0x000571eb) level_1_battery_lsc

0xe2e6,	// (0x000571f4) level_2_battery_lsc

0xe2ef,	// (0x000571fd) level_3_battery_lsc

0xe2f8,	// (0x00057206) level_4_battery_lsc

0xe301,	// (0x0005720f) level_5_battery_lsc

0xe30a,	// (0x00057218) level_6_battery_lsc

0xe2a7,	// (0x000571b5) level_7_battery_lsc

0xe313,	// (0x00057221) scroll_handle_focus_pane_g1

0xe31c,	// (0x0005722a) scroll_handle_focus_pane_g2

0xe325,	// (0x00057233) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0005863e) scroll_handle_focus_pane_g

0x93d9,	// (0x000522e7) list_single_2graphic_pane_g1_ParamLimits

0x93d9,	// (0x000522e7) list_single_2graphic_pane_g1

0xa293,	// (0x000531a1) list_single_2graphic_pane_g2_ParamLimits

0xa293,	// (0x000531a1) list_single_2graphic_pane_g2

0xf397,	// (0x000582a5) list_single_2graphic_pane_g3_ParamLimits

0xf397,	// (0x000582a5) list_single_2graphic_pane_g3

0x93e5,	// (0x000522f3) list_single_2graphic_pane_g4_ParamLimits

0x93e5,	// (0x000522f3) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x00058645) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x00058645) list_single_2graphic_pane_g

0x93f1,	// (0x000522ff) list_single_2graphic_pane_t1_ParamLimits

0x93f1,	// (0x000522ff) list_single_2graphic_pane_t1

0xaa6d,	// (0x0005397b) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xaa6d,	// (0x0005397b) list_double2_graphic_large_graphic_pane_g1

0x9089,	// (0x00051f97) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9089,	// (0x00051f97) list_double2_graphic_large_graphic_pane_g2

0xa2b8,	// (0x000531c6) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa2b8,	// (0x000531c6) list_double2_graphic_large_graphic_pane_g3

0x941f,	// (0x0005232d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x941f,	// (0x0005232d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0005864e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0005864e) list_double2_graphic_large_graphic_pane_g

0x942b,	// (0x00052339) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x942b,	// (0x00052339) list_double2_graphic_large_graphic_pane_t1

0x9441,	// (0x0005234f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9441,	// (0x0005234f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x00058657) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x00058657) list_double2_graphic_large_graphic_pane_t

0xaaf2,	// (0x00053a00) popup_fast_swap_window_ParamLimits

0xaaf2,	// (0x00053a00) popup_fast_swap_window

0xab0e,	// (0x00053a1c) popup_side_volume_key_window

0xe3db,	// (0x000572e9) stacon_top_pane

0xe3e5,	// (0x000572f3) status_pane_ParamLimits

0xe3e5,	// (0x000572f3) status_pane

0xab28,	// (0x00053a36) status_small_pane

0x976a,	// (0x00052678) control_pane

0x976a,	// (0x00052678) stacon_bottom_pane

0xa318,	// (0x00053226) scroll_pane_cp121

0xa30f,	// (0x0005321d) set_content_pane

0xaa7f,	// (0x0005398d) bg_active_tab_pane_g1_cp1

0xaa88,	// (0x00053996) bg_active_tab_pane_g2_cp1

0xaa91,	// (0x0005399f) bg_active_tab_pane_g3_cp1

0xaa7f,	// (0x0005398d) bg_passive_tab_pane_g1_cp1

0xaa88,	// (0x00053996) bg_passive_tab_pane_g2_cp1

0xaa91,	// (0x0005399f) bg_passive_tab_pane_g3_cp1

0xaa9a,	// (0x000539a8) bg_active_tab_pane_g1_cp2

0xaa88,	// (0x00053996) bg_active_tab_pane_g2_cp2

0xaaa3,	// (0x000539b1) bg_active_tab_pane_g3_cp2

0xaa9a,	// (0x000539a8) bg_passive_tab_pane_g1_cp2

0xaa88,	// (0x00053996) bg_passive_tab_pane_g2_cp2

0xaaa3,	// (0x000539b1) bg_passive_tab_pane_g3_cp2

0xaaac,	// (0x000539ba) bg_active_tab_pane_g1_cp3

0xaa88,	// (0x00053996) bg_active_tab_pane_g2_cp3

0xaab5,	// (0x000539c3) bg_active_tab_pane_g3_cp3

0xaaac,	// (0x000539ba) bg_passive_tab_pane_g1_cp3

0xaa88,	// (0x00053996) bg_passive_tab_pane_g2_cp3

0xaab5,	// (0x000539c3) bg_passive_tab_pane_g3_cp3

0xaabe,	// (0x000539cc) bg_active_tab_pane_g1_cp4

0xaa88,	// (0x00053996) bg_active_tab_pane_g2_cp4

0xaac9,	// (0x000539d7) bg_active_tab_pane_g3_cp4

0xaabe,	// (0x000539cc) bg_passive_tab_pane_g1_cp4

0xaa88,	// (0x00053996) bg_passive_tab_pane_g2_cp4

0xaac9,	// (0x000539d7) bg_passive_tab_pane_g3_cp4

0xaad4,	// (0x000539e2) bg_active_tab_pane_g1_cp5

0xaa88,	// (0x00053996) bg_active_tab_pane_g2_cp5

0xaadd,	// (0x000539eb) bg_active_tab_pane_g3_cp5

0xaad4,	// (0x000539e2) bg_passive_tab_pane_g1_cp5

0xaa88,	// (0x00053996) bg_passive_tab_pane_g2_cp5

0xaadd,	// (0x000539eb) bg_passive_tab_pane_g3_cp5

0x4773,	// (0x0004d681) list_set_graphic_pane_ParamLimits

0x4773,	// (0x0004d681) list_set_graphic_pane

0x976a,	// (0x00052678) bg_set_opt_pane_cp4

0xe36c,	// (0x0005727a) list_set_graphic_pane_g1_ParamLimits

0xe36c,	// (0x0005727a) list_set_graphic_pane_g1

0xe378,	// (0x00057286) list_set_graphic_pane_g2_ParamLimits

0xe378,	// (0x00057286) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0005865c) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0005865c) list_set_graphic_pane_g

0x0009,

0xfad3,	// (0x000589e1) volume_small_pane_cp_g

0xaae6,	// (0x000539f4) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xaae6,	// (0x000539f4) list_double2_large_graphic_pane_g1_cp2

0xe39a,	// (0x000572a8) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xe39a,	// (0x000572a8) list_double2_large_graphic_pane_g2_cp2

0xe3ab,	// (0x000572b9) list_double2_large_graphic_pane_g3_cp2

0xe3b3,	// (0x000572c1) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xe3b3,	// (0x000572c1) list_double2_large_graphic_pane_t1_cp2

0xe3c9,	// (0x000572d7) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xe3c9,	// (0x000572d7) list_double2_large_graphic_pane_t2_cp2

0xca41,	// (0x0005594f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xca41,	// (0x0005594f) list_double_large_graphic_pane_g1_cp2

0x3d80,	// (0x0004cc8e) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3d80,	// (0x0004cc8e) list_double_large_graphic_pane_g2_cp2

0x058f,	// (0x0004949d) list_double_large_graphic_pane_g3_cp2

0x3d91,	// (0x0004cc9f) list_double_large_graphic_pane_g4_cp

0x3d99,	// (0x0004cca7) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3d99,	// (0x0004cca7) list_double_large_graphic_pane_t1_cp2

0x3db0,	// (0x0004ccbe) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3db0,	// (0x0004ccbe) list_double_large_graphic_pane_t2_cp2

0x048d,	// (0x0004939b) list_double2_graphic_pane_g1_cp2_ParamLimits

0x048d,	// (0x0004939b) list_double2_graphic_pane_g1_cp2

0x049b,	// (0x000493a9) list_double2_graphic_pane_g2_cp2_ParamLimits

0x049b,	// (0x000493a9) list_double2_graphic_pane_g2_cp2

0x04ac,	// (0x000493ba) list_double2_graphic_pane_g3_cp2

0x04b6,	// (0x000493c4) list_double2_graphic_pane_t1_cp2_ParamLimits

0x04b6,	// (0x000493c4) list_double2_graphic_pane_t1_cp2

0x04cc,	// (0x000493da) list_double2_graphic_pane_t2_cp2_ParamLimits

0x04cc,	// (0x000493da) list_double2_graphic_pane_t2_cp2

0xc0c9,	// (0x00054fd7) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc0c9,	// (0x00054fd7) list_single_number_heading_pane_g1_cp2

0x04de,	// (0x000493ec) list_single_number_heading_pane_g2_cp2

0x04e6,	// (0x000493f4) list_single_number_heading_pane_t1_cp2_ParamLimits

0x04e6,	// (0x000493f4) list_single_number_heading_pane_t1_cp2

0x04fc,	// (0x0004940a) list_single_number_heading_pane_t2_cp2_ParamLimits

0x04fc,	// (0x0004940a) list_single_number_heading_pane_t2_cp2

0x050e,	// (0x0004941c) list_single_number_heading_pane_t3_cp2_ParamLimits

0x050e,	// (0x0004941c) list_single_number_heading_pane_t3_cp2

0xc0c9,	// (0x00054fd7) list_single_heading_pane_g1_cp2_ParamLimits

0xc0c9,	// (0x00054fd7) list_single_heading_pane_g1_cp2

0x04de,	// (0x000493ec) list_single_heading_pane_g2_cp2

0x04e6,	// (0x000493f4) list_single_heading_pane_t1_cp2_ParamLimits

0x04e6,	// (0x000493f4) list_single_heading_pane_t1_cp2

0x3b79,	// (0x0004ca87) list_single_heading_pane_t2_cp2_ParamLimits

0x3b79,	// (0x0004ca87) list_single_heading_pane_t2_cp2

0x3ac1,	// (0x0004c9cf) list_double_graphic_pane_g1_cp2_ParamLimits

0x3ac1,	// (0x0004c9cf) list_double_graphic_pane_g1_cp2

0x3acd,	// (0x0004c9db) list_double_graphic_pane_g2_cp2_ParamLimits

0x3acd,	// (0x0004c9db) list_double_graphic_pane_g2_cp2

0x3adc,	// (0x0004c9ea) list_double_graphic_pane_g3_cp2

0x3ae4,	// (0x0004c9f2) list_double_graphic_pane_t1_cp2_ParamLimits

0x3ae4,	// (0x0004c9f2) list_double_graphic_pane_t1_cp2

0x3afa,	// (0x0004ca08) list_double_graphic_pane_t2_cp2_ParamLimits

0x3afa,	// (0x0004ca08) list_double_graphic_pane_t2_cp2

0x0583,	// (0x00049491) list_double_number_pane_g1_cp2_ParamLimits

0x0583,	// (0x00049491) list_double_number_pane_g1_cp2

0x058f,	// (0x0004949d) list_double_number_pane_g2_cp2

0x3a85,	// (0x0004c993) list_double_number_pane_t1_cp2_ParamLimits

0x3a85,	// (0x0004c993) list_double_number_pane_t1_cp2

0x3a99,	// (0x0004c9a7) list_double_number_pane_t2_cp2_ParamLimits

0x3a99,	// (0x0004c9a7) list_double_number_pane_t2_cp2

0x3aaf,	// (0x0004c9bd) list_double_number_pane_t3_cp2_ParamLimits

0x3aaf,	// (0x0004c9bd) list_double_number_pane_t3_cp2

0x396e,	// (0x0004c87c) list_single_graphic_pane_g1_cp2_ParamLimits

0x396e,	// (0x0004c87c) list_single_graphic_pane_g1_cp2

0x05e7,	// (0x000494f5) list_single_graphic_pane_g2_cp2_ParamLimits

0x05e7,	// (0x000494f5) list_single_graphic_pane_g2_cp2

0x2393,	// (0x0004b2a1) list_single_graphic_pane_g3_cp2

0x3944,	// (0x0004c852) list_single_graphic_pane_t1_cp2_ParamLimits

0x3944,	// (0x0004c852) list_single_graphic_pane_t1_cp2

0x05e7,	// (0x000494f5) list_single_number_pane_g1_cp2_ParamLimits

0x05e7,	// (0x000494f5) list_single_number_pane_g1_cp2

0x2393,	// (0x0004b2a1) list_single_number_pane_g2_cp2

0x3944,	// (0x0004c852) list_single_number_pane_t1_cp2_ParamLimits

0x3944,	// (0x0004c852) list_single_number_pane_t1_cp2

0x395a,	// (0x0004c868) list_single_number_pane_t2_cp2_ParamLimits

0x395a,	// (0x0004c868) list_single_number_pane_t2_cp2

0xe39a,	// (0x000572a8) list_double2_pane_g1_cp2_ParamLimits

0xe39a,	// (0x000572a8) list_double2_pane_g1_cp2

0xe3ab,	// (0x000572b9) list_double2_pane_g2_cp2

0x055b,	// (0x00049469) list_double2_pane_t1_cp2_ParamLimits

0x055b,	// (0x00049469) list_double2_pane_t1_cp2

0x0571,	// (0x0004947f) list_double2_pane_t2_cp2_ParamLimits

0x0571,	// (0x0004947f) list_double2_pane_t2_cp2

0x0583,	// (0x00049491) list_double_pane_g1_cp2_ParamLimits

0x0583,	// (0x00049491) list_double_pane_g1_cp2

0x058f,	// (0x0004949d) list_double_pane_g2_cp2

0x0597,	// (0x000494a5) list_double_pane_t1_cp2_ParamLimits

0x0597,	// (0x000494a5) list_double_pane_t1_cp2

0x05ad,	// (0x000494bb) list_double_pane_t2_cp2_ParamLimits

0x05ad,	// (0x000494bb) list_double_pane_t2_cp2

0xab33,	// (0x00053a41) list_single_pane_cp2_g3

0x05e7,	// (0x000494f5) list_single_pane_g1_cp2_ParamLimits

0x05e7,	// (0x000494f5) list_single_pane_g1_cp2

0x2393,	// (0x0004b2a1) list_single_pane_g2_cp2

0x239b,	// (0x0004b2a9) list_single_pane_t1_cp2_ParamLimits

0x239b,	// (0x0004b2a9) list_single_pane_t1_cp2

0xab3b,	// (0x00053a49) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xab3b,	// (0x00053a49) list_single_large_graphic_pane_g1_cp2

0x23bf,	// (0x0004b2cd) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x23bf,	// (0x0004b2cd) list_single_large_graphic_pane_g2_cp2

0x23cb,	// (0x0004b2d9) list_single_large_graphic_pane_g3_cp2

0xab47,	// (0x00053a55) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xab47,	// (0x00053a55) list_single_large_graphic_pane_g4_cp1

0x23ed,	// (0x0004b2fb) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x23ed,	// (0x0004b2fb) list_single_large_graphic_pane_t1_cp2

0x3910,	// (0x0004c81e) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3910,	// (0x0004c81e) list_single_graphic_heading_pane_g1_cp2

0x38dd,	// (0x0004c7eb) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x38dd,	// (0x0004c7eb) list_single_graphic_heading_pane_g4_cp2

0x2393,	// (0x0004b2a1) list_single_graphic_heading_pane_g5_cp2

0x391c,	// (0x0004c82a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x391c,	// (0x0004c82a) list_single_graphic_heading_pane_t1_cp2

0x3932,	// (0x0004c840) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3932,	// (0x0004c840) list_single_graphic_heading_pane_t2_cp2

0x38d1,	// (0x0004c7df) list_single_2graphic_pane_g1_cp2_ParamLimits

0x38d1,	// (0x0004c7df) list_single_2graphic_pane_g1_cp2

0x38dd,	// (0x0004c7eb) list_single_2graphic_pane_g2_cp2_ParamLimits

0x38dd,	// (0x0004c7eb) list_single_2graphic_pane_g2_cp2

0x2393,	// (0x0004b2a1) list_single_2graphic_pane_g3_cp2

0x38ee,	// (0x0004c7fc) list_single_2graphic_pane_g4_cp2_ParamLimits

0x38ee,	// (0x0004c7fc) list_single_2graphic_pane_g4_cp2

0x38fa,	// (0x0004c808) list_single_2graphic_pane_t1_cp2_ParamLimits

0x38fa,	// (0x0004c808) list_single_2graphic_pane_t1_cp2

0x967a,	// (0x00052588) list_highlight_pane_g10_cp1

0x34b9,	// (0x0004c3c7) list_highlight_pane_g1_cp1

0x34c1,	// (0x0004c3cf) list_highlight_pane_g2_cp1

0x34c9,	// (0x0004c3d7) list_highlight_pane_g3_cp1

0x34d1,	// (0x0004c3df) list_highlight_pane_g4_cp1

0x34d9,	// (0x0004c3e7) list_highlight_pane_g5_cp1

0x34e1,	// (0x0004c3ef) list_highlight_pane_g6_cp1

0x34e9,	// (0x0004c3f7) list_highlight_pane_g7_cp1

0x34f1,	// (0x0004c3ff) list_highlight_pane_g8_cp1

0x34f9,	// (0x0004c407) list_highlight_pane_g9_cp1

0xc7d6,	// (0x000556e4) form_field_slider_pane_t3

0xc7e4,	// (0x000556f2) form_field_slider_pane_t4

0x33fd,	// (0x0004c30b) slider_form_pane_ParamLimits

0x33fd,	// (0x0004c30b) slider_form_pane

0x976a,	// (0x00052678) control_abbreviations

0x976a,	// (0x00052678) control_conventions

0x976a,	// (0x00052678) control_definitions

0x976a,	// (0x00052678) format_table_attribute

0xca18,	// (0x00055926) bg_popup_preview_window_pane_g9

0x976a,	// (0x00052678) format_table_data2

0x976a,	// (0x00052678) format_table_data3

0x976a,	// (0x00052678) format_table_data_example

0x0008,

0x976a,	// (0x00052678) intro_purpose

0xf8de,	// (0x000587ec) bg_popup_preview_window_pane_g

0x976a,	// (0x00052678) texts_category

0x976a,	// (0x00052678) texts_graphics

0x2403,	// (0x0004b311) text_digital

0x2412,	// (0x0004b320) text_primary

0x2421,	// (0x0004b32f) text_primary_small

0x2430,	// (0x0004b33e) text_secondary

0x243f,	// (0x0004b34d) text_title

0xcd7d,	// (0x00055c8b) bg_passive_tab_pane_g1_cp3_srt

0xaa88,	// (0x00053996) bg_passive_tab_pane_g2_cp3_srt

0xcd86,	// (0x00055c94) bg_passive_tab_pane_g3_cp3_srt

0x99bb,	// (0x000528c9) bg_active_tab_pane_cp3_srt_ParamLimits

0x99bb,	// (0x000528c9) bg_active_tab_pane_cp3_srt

0xcd8f,	// (0x00055c9d) tabs_4_active_pane_srt_g1

0xcd97,	// (0x00055ca5) tabs_4_active_pane_srt_t1_ParamLimits

0xcd97,	// (0x00055ca5) tabs_4_active_pane_srt_t1

0xcd7d,	// (0x00055c8b) bg_active_tab_pane_g1_cp3_copy1

0xaa88,	// (0x00053996) bg_active_tab_pane_g2_cp3_copy1

0xcd86,	// (0x00055c94) bg_active_tab_pane_g3_cp3_copy1

0x9a05,	// (0x00052913) tabs_2_long_active_pane_srt_ParamLimits

0x9a05,	// (0x00052913) tabs_2_long_active_pane_srt

0x9a05,	// (0x00052913) tabs_2_long_passive_pane_srt_ParamLimits

0x9a05,	// (0x00052913) tabs_2_long_passive_pane_srt

0x2799,	// (0x0004b6a7) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2799,	// (0x0004b6a7) bg_passive_tab_pane_cp4_srt

0xcb30,	// (0x00055a3e) bg_passive_tab_pane_g1_cp4_srt

0xaa88,	// (0x00053996) bg_passive_tab_pane_g2_cp4_srt

0xcb39,	// (0x00055a47) bg_passive_tab_pane_g3_cp4_srt

0x9a05,	// (0x00052913) bg_active_tab_pane_cp4_srt_ParamLimits

0x9a05,	// (0x00052913) bg_active_tab_pane_cp4_srt

0xcb42,	// (0x00055a50) tabs_2_long_active_pane_srt_t1_ParamLimits

0xcb42,	// (0x00055a50) tabs_2_long_active_pane_srt_t1

0xcb30,	// (0x00055a3e) bg_active_tab_pane_g1_cp4_srt

0xaa88,	// (0x00053996) bg_active_tab_pane_g2_cp4_srt

0xcb39,	// (0x00055a47) bg_active_tab_pane_g3_cp4_srt

0x99bb,	// (0x000528c9) tabs_3_long_active_pane_srt_ParamLimits

0x99bb,	// (0x000528c9) tabs_3_long_active_pane_srt

0x99bb,	// (0x000528c9) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x99bb,	// (0x000528c9) tabs_3_long_passive_pane_cp_srt

0x99bb,	// (0x000528c9) tabs_3_long_passive_pane_srt_ParamLimits

0x99bb,	// (0x000528c9) tabs_3_long_passive_pane_srt

0x2799,	// (0x0004b6a7) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2799,	// (0x0004b6a7) bg_passive_tab_pane_cp5_srt

0xaad4,	// (0x000539e2) bg_passive_tab_pane_g1_cp5_srt

0xaa88,	// (0x00053996) bg_passive_tab_pane_g2_cp5_srt

0xaadd,	// (0x000539eb) bg_passive_tab_pane_g3_cp5_srt

0x9a05,	// (0x00052913) bg_active_tab_pane_cp5_srt_ParamLimits

0x9a05,	// (0x00052913) bg_active_tab_pane_cp5_srt

0xcb1a,	// (0x00055a28) tabs_3_long_active_pane_srt_t1_ParamLimits

0xcb1a,	// (0x00055a28) tabs_3_long_active_pane_srt_t1

0xaad4,	// (0x000539e2) bg_active_tab_pane_g1_cp5_srt

0xaa88,	// (0x00053996) bg_active_tab_pane_g2_cp5_srt

0xaadd,	// (0x000539eb) bg_active_tab_pane_g3_cp5_srt

0x3fc4,	// (0x0004ced2) navi_text_pane_srt_t1

0x3fbc,	// (0x0004ceca) navi_icon_pane_srt_g1

0x2610,	// (0x0004b51e) midp_editing_number_pane_srt

0x244e,	// (0x0004b35c) midp_ticker_pane_srt

0x2618,	// (0x0004b526) midp_ticker_pane_srt_g1

0x2620,	// (0x0004b52e) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0005867b) midp_ticker_pane_srt_g

0x2628,	// (0x0004b536) midp_ticker_pane_srt_t1

0x3fad,	// (0x0004cebb) midp_editing_number_pane_t1_copy1

0xab61,	// (0x00053a6f) listscroll_midp_pane

0xab61,	// (0x00053a6f) midp_form_pane

0xabcc,	// (0x00053ada) midp_info_popup_window_ParamLimits

0xabcc,	// (0x00053ada) midp_info_popup_window

0xa3d2,	// (0x000532e0) bg_popup_sub_pane_cp50_ParamLimits

0xa3d2,	// (0x000532e0) bg_popup_sub_pane_cp50

0x3101,	// (0x0004c00f) listscroll_midp_info_pane_ParamLimits

0x3101,	// (0x0004c00f) listscroll_midp_info_pane

0x30e1,	// (0x0004bfef) listscroll_form_midp_pane_ParamLimits

0x30e1,	// (0x0004bfef) listscroll_form_midp_pane

0x30ed,	// (0x0004bffb) scroll_bar_cp050

0x30e1,	// (0x0004bfef) list_midp_pane

0xcf39,	// (0x00055e47) signal_pane_g2_cp

0x2ffb,	// (0x0004bf09) listscroll_midp_info_pane_t1_ParamLimits

0x2ffb,	// (0x0004bf09) listscroll_midp_info_pane_t1

0xc610,	// (0x0005551e) listscroll_midp_info_pane_t2_ParamLimits

0xc610,	// (0x0005551e) listscroll_midp_info_pane_t2

0xc64e,	// (0x0005555c) listscroll_midp_info_pane_t3_ParamLimits

0xc64e,	// (0x0005555c) listscroll_midp_info_pane_t3

0xc688,	// (0x00055596) listscroll_midp_info_pane_t4_ParamLimits

0xc688,	// (0x00055596) listscroll_midp_info_pane_t4

0x0003,

0xf819,	// (0x00058727) listscroll_midp_info_pane_t_ParamLimits

0xf819,	// (0x00058727) listscroll_midp_info_pane_t

0xa494,	// (0x000533a2) scroll_pane_cp21

0x2f9b,	// (0x0004bea9) form_midp_field_choice_group_pane

0xc5d3,	// (0x000554e1) form_midp_field_text_pane

0x2fe1,	// (0x0004beef) form_midp_field_time_pane

0x2fe9,	// (0x0004bef7) form_midp_gauge_slider_pane

0x2ff2,	// (0x0004bf00) form_midp_gauge_wait_pane

0x976a,	// (0x00052678) form_midp_image_pane

0x9453,	// (0x00052361) list_single_midp_pane_ParamLimits

0x9453,	// (0x00052361) list_single_midp_pane

0xc5b1,	// (0x000554bf) form_midp_field_text_pane_t1

0x2d1a,	// (0x0004bc28) input_focus_pane_cp050

0x2f8a,	// (0x0004be98) list_midp_form_text_pane

0x2f1f,	// (0x0004be2d) form_midp_field_choice_group_pane_t1

0x2f2d,	// (0x0004be3b) input_focus_pane_cp051

0x2f41,	// (0x0004be4f) list_midp_choice_pane

0x976a,	// (0x00052678) status_idle_pane

0x2f03,	// (0x0004be11) form_midp_field_time_pane_t1

0x967a,	// (0x00052588) wait_anim_pane_g2_copy1

0x2f11,	// (0x0004be1f) form_midp_field_time_pane_t2

0x0001,

0x2578,	// (0x0004b486) aid_navinavi_width_2_pane

0xf814,	// (0x00058722) form_midp_field_time_pane_t

0x976a,	// (0x00052678) input_focus_pane_cp052

0x976a,	// (0x00052678) bg_input_focus_pane_cp040

0x2ec3,	// (0x0004bdd1) form_midp_gauge_slider_pane_t1

0x2ed1,	// (0x0004bddf) form_midp_gauge_slider_pane_t2

0xc595,	// (0x000554a3) form_midp_gauge_slider_pane_t3

0xc5a3,	// (0x000554b1) form_midp_gauge_slider_pane_t4

0x0003,

0xf80b,	// (0x00058719) form_midp_gauge_slider_pane_t

0x2efb,	// (0x0004be09) form_midp_slider_pane

0x9a05,	// (0x00052913) bg_input_focus_pane_cp041_ParamLimits

0x9a05,	// (0x00052913) bg_input_focus_pane_cp041

0x2e90,	// (0x0004bd9e) form_midp_gauge_wait_pane_t1_ParamLimits

0x2e90,	// (0x0004bd9e) form_midp_gauge_wait_pane_t1

0x2ea2,	// (0x0004bdb0) form_midp_gauge_wait_pane_t2_ParamLimits

0x2ea2,	// (0x0004bdb0) form_midp_gauge_wait_pane_t2

0x0001,

0xf806,	// (0x00058714) form_midp_gauge_wait_pane_t_ParamLimits

0xf806,	// (0x00058714) form_midp_gauge_wait_pane_t

0x2eb4,	// (0x0004bdc2) form_midp_wait_pane_ParamLimits

0x2eb4,	// (0x0004bdc2) form_midp_wait_pane

0xc55f,	// (0x0005546d) form_midp_image_pane_g1

0xc568,	// (0x00055476) form_midp_image_pane_t1

0xc577,	// (0x00055485) form_midp_image_pane_t2

0xc586,	// (0x00055494) form_midp_image_pane_t3

0x0002,

0xf7ff,	// (0x0005870d) form_midp_image_pane_t

0x2e51,	// (0x0004bd5f) list_single_midp_pane_g1

0xef20,	// (0x00057e2e) list_single_midp_pane_t1

0xc54a,	// (0x00055458) list_midp_form_item_pane_ParamLimits

0xc54a,	// (0x00055458) list_midp_form_item_pane

0x2520,	// (0x0004b42e) list_midp_form_item_pane_t1

0x252f,	// (0x0004b43d) midp_ticker_pane_g1

0x253b,	// (0x0004b449) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x00058661) midp_ticker_pane_g

0x2547,	// (0x0004b455) midp_ticker_pane_t1

0x41fa,	// (0x0004d108) midp_editing_number_pane_t1

0x41d8,	// (0x0004d0e6) midp_editing_number_pane

0x41e7,	// (0x0004d0f5) midp_ticker_pane

0x3f9d,	// (0x0004ceab) ai_message_heading_pane

0x976a,	// (0x00052678) bg_popup_window_pane_cp14

0x3fa5,	// (0x0004ceb3) listscroll_ai_message_pane

0x3f27,	// (0x0004ce35) ai_message_heading_pane_g1_ParamLimits

0x3f27,	// (0x0004ce35) ai_message_heading_pane_g1

0xcae2,	// (0x000559f0) ai_message_heading_pane_g2_ParamLimits

0xcae2,	// (0x000559f0) ai_message_heading_pane_g2

0x3f3f,	// (0x0004ce4d) ai_message_heading_pane_g3_ParamLimits

0x3f3f,	// (0x0004ce4d) ai_message_heading_pane_g3

0x3f4b,	// (0x0004ce59) ai_message_heading_pane_g4_ParamLimits

0x3f4b,	// (0x0004ce59) ai_message_heading_pane_g4

0x0003,

0xf940,	// (0x0005884e) ai_message_heading_pane_g_ParamLimits

0xf940,	// (0x0005884e) ai_message_heading_pane_g

0xcaee,	// (0x000559fc) ai_message_heading_pane_t1_ParamLimits

0xcaee,	// (0x000559fc) ai_message_heading_pane_t1

0xcb08,	// (0x00055a16) ai_message_heading_pane_t2_ParamLimits

0xcb08,	// (0x00055a16) ai_message_heading_pane_t2

0x0001,

0xf949,	// (0x00058857) ai_message_heading_pane_t_ParamLimits

0xf949,	// (0x00058857) ai_message_heading_pane_t

0x3f83,	// (0x0004ce91) bg_popup_heading_pane_cp1_ParamLimits

0x3f83,	// (0x0004ce91) bg_popup_heading_pane_cp1

0x3f15,	// (0x0004ce23) list_ai_message_pane_ParamLimits

0x3f15,	// (0x0004ce23) list_ai_message_pane

0xa494,	// (0x000533a2) scroll_pane_cp10

0x3eb1,	// (0x0004cdbf) list_ai_message_pane_g1

0x3eb9,	// (0x0004cdc7) list_ai_message_pane_g2

0x0001,

0xf91d,	// (0x0005882b) list_ai_message_pane_g

0x3ec1,	// (0x0004cdcf) list_ai_message_pane_t1_ParamLimits

0x3ec1,	// (0x0004cdcf) list_ai_message_pane_t1

0x3ed6,	// (0x0004cde4) list_ai_message_pane_t2_ParamLimits

0x3ed6,	// (0x0004cde4) list_ai_message_pane_t2

0x3eeb,	// (0x0004cdf9) list_ai_message_pane_t3_ParamLimits

0x3eeb,	// (0x0004cdf9) list_ai_message_pane_t3

0x3f00,	// (0x0004ce0e) list_ai_message_pane_t4_ParamLimits

0x3f00,	// (0x0004ce0e) list_ai_message_pane_t4

0x0003,

0xf922,	// (0x00058830) list_ai_message_pane_t_ParamLimits

0xf922,	// (0x00058830) list_ai_message_pane_t

0xcabe,	// (0x000559cc) cell_ai_soft_ind_pane_ParamLimits

0xcabe,	// (0x000559cc) cell_ai_soft_ind_pane

0x2559,	// (0x0004b467) cell_ai_soft_ind_pane_g1_ParamLimits

0x2559,	// (0x0004b467) cell_ai_soft_ind_pane_g1

0x976a,	// (0x00052678) grid_highlight_cp1

0x2566,	// (0x0004b474) text_secondary_cp56_ParamLimits

0x2566,	// (0x0004b474) text_secondary_cp56

0x3e71,	// (0x0004cd7f) example_general_pane_ParamLimits

0x3e71,	// (0x0004cd7f) example_general_pane

0x3e7d,	// (0x0004cd8b) example_parent_pane_g1_ParamLimits

0x3e7d,	// (0x0004cd8b) example_parent_pane_g1

0x3e89,	// (0x0004cd97) example_parent_pane_t1_ParamLimits

0x3e89,	// (0x0004cd97) example_parent_pane_t1

0xb2ea,	// (0x000541f8) popup_preview_text_window_ParamLimits

0xb2ea,	// (0x000541f8) popup_preview_text_window

0x05df,	// (0x000494ed) list_single_pane_cp2_g4

0x9e17,	// (0x00052d25) bg_popup_preview_window_pane_ParamLimits

0x9e17,	// (0x00052d25) bg_popup_preview_window_pane

0xca20,	// (0x0005592e) popup_preview_text_window_t1_ParamLimits

0xca20,	// (0x0005592e) popup_preview_text_window_t1

0x3be9,	// (0x0004caf7) popup_preview_text_window_t2_ParamLimits

0x3be9,	// (0x0004caf7) popup_preview_text_window_t2

0x3c32,	// (0x0004cb40) popup_preview_text_window_t3_ParamLimits

0x3c32,	// (0x0004cb40) popup_preview_text_window_t3

0x3c77,	// (0x0004cb85) popup_preview_text_window_t4_ParamLimits

0x3c77,	// (0x0004cb85) popup_preview_text_window_t4

0x0004,

0xf8f1,	// (0x000587ff) popup_preview_text_window_t_ParamLimits

0xf8f1,	// (0x000587ff) popup_preview_text_window_t

0x3cf5,	// (0x0004cc03) scroll_pane_cp11

0x2ca6,	// (0x0004bbb4) bg_popup_preview_window_pane_g1

0xc9e0,	// (0x000558ee) bg_popup_preview_window_pane_g2

0xc9e8,	// (0x000558f6) bg_popup_preview_window_pane_g3

0xc9f0,	// (0x000558fe) bg_popup_preview_window_pane_g4

0xc9f8,	// (0x00055906) bg_popup_preview_window_pane_g5

0xca00,	// (0x0005590e) bg_popup_preview_window_pane_g6

0xca08,	// (0x00055916) bg_popup_preview_window_pane_g7

0xca10,	// (0x0005591e) bg_popup_preview_window_pane_g8

0xed8d,	// (0x00057c9b) aid_popup_width_pane

0xb266,	// (0x00054174) popup_midp_note_alarm_window_ParamLimits

0xb266,	// (0x00054174) popup_midp_note_alarm_window

0xa329,	// (0x00053237) data_form_pane_ParamLimits

0x92ae,	// (0x000521bc) form_field_data_pane_g1

0x92b8,	// (0x000521c6) form_field_data_pane_t1_ParamLimits

0xa335,	// (0x00053243) input_focus_pane_ParamLimits

0xe1da,	// (0x000570e8) data_form_wide_pane_ParamLimits

0xe1eb,	// (0x000570f9) form_field_data_wide_pane_g1

0xe1f7,	// (0x00057105) form_field_data_wide_pane_t1_ParamLimits

0xa0b8,	// (0x00052fc6) input_focus_pane_cp6_ParamLimits

0xa43f,	// (0x0005334d) input_popup_find_pane_g1_ParamLimits

0xa43f,	// (0x0005334d) input_popup_find_pane_g1

0xf4c2,	// (0x000583d0) aid_navi_side_left_pane

0xf4d7,	// (0x000583e5) aid_navi_side_right_pane

0x35b4,	// (0x0004c4c2) bg_popup_window_pane_cp30_ParamLimits

0x35b4,	// (0x0004c4c2) bg_popup_window_pane_cp30

0x362e,	// (0x0004c53c) popup_midp_note_alarm_window_g1_ParamLimits

0x362e,	// (0x0004c53c) popup_midp_note_alarm_window_g1

0x365e,	// (0x0004c56c) popup_midp_note_alarm_window_t1_ParamLimits

0x365e,	// (0x0004c56c) popup_midp_note_alarm_window_t1

0xc829,	// (0x00055737) popup_midp_note_alarm_window_t2_ParamLimits

0xc829,	// (0x00055737) popup_midp_note_alarm_window_t2

0xc8d7,	// (0x000557e5) popup_midp_note_alarm_window_t3_ParamLimits

0xc8d7,	// (0x000557e5) popup_midp_note_alarm_window_t3

0xc8ff,	// (0x0005580d) popup_midp_note_alarm_window_t4_ParamLimits

0xc8ff,	// (0x0005580d) popup_midp_note_alarm_window_t4

0x37f5,	// (0x0004c703) popup_midp_note_alarm_window_t5_ParamLimits

0x37f5,	// (0x0004c703) popup_midp_note_alarm_window_t5

0x000a,

0xf88e,	// (0x0005879c) popup_midp_note_alarm_window_t_ParamLimits

0xf88e,	// (0x0005879c) popup_midp_note_alarm_window_t

0x38a1,	// (0x0004c7af) wait_bar_pane_cp1_ParamLimits

0x38a1,	// (0x0004c7af) wait_bar_pane_cp1

0x976a,	// (0x00052678) wait_anim_pane_copy1

0x976a,	// (0x00052678) wait_border_pane_copy1

0x32aa,	// (0x0004c1b8) wait_border_pane_g1_copy1

0xe211,	// (0x0005711f) form_field_popup_pane_g1

0x92d2,	// (0x000521e0) form_field_popup_pane_t1_ParamLimits

0xa335,	// (0x00053243) input_focus_pane_cp7_ParamLimits

0xa357,	// (0x00053265) list_form_pane_ParamLimits

0xe219,	// (0x00057127) form_field_popup_wide_pane_g1

0xe221,	// (0x0005712f) form_field_popup_wide_pane_t1_ParamLimits

0xa335,	// (0x00053243) input_focus_pane_cp8_ParamLimits

0xa363,	// (0x00053271) list_form_wide_pane_ParamLimits

0xcdf0,	// (0x00055cfe) aid_size_cell_graphic_pane

0x9351,	// (0x0005225f) data_form_pane_t1_ParamLimits

0x947b,	// (0x00052389) data_form_wide_pane_t1_ParamLimits

0xc1b9,	// (0x000550c7) bg_status_flat_pane

0x98f7,	// (0x00052805) title_pane_t1_ParamLimits

0x9983,	// (0x00052891) title_pane_t2_ParamLimits

0x99a9,	// (0x000528b7) title_pane_t3_ParamLimits

0xf557,	// (0x00058465) title_pane_t_ParamLimits

0xa947,	// (0x00053855) level_1_signal_ParamLimits

0xa954,	// (0x00053862) level_2_signal_ParamLimits

0xa961,	// (0x0005386f) level_3_signal_ParamLimits

0xbfce,	// (0x00054edc) level_4_signal_ParamLimits

0xbfdb,	// (0x00054ee9) level_5_signal_ParamLimits

0xbfe8,	// (0x00054ef6) level_6_signal_ParamLimits

0xbff5,	// (0x00054f03) level_7_signal_ParamLimits

0xa947,	// (0x00053855) level_1_battery_ParamLimits

0xa954,	// (0x00053862) level_2_battery_ParamLimits

0xa961,	// (0x0005386f) level_3_battery_ParamLimits

0xbfce,	// (0x00054edc) level_4_battery_ParamLimits

0xbfdb,	// (0x00054ee9) level_5_battery_ParamLimits

0xbfe8,	// (0x00054ef6) level_6_battery_ParamLimits

0xbff5,	// (0x00054f03) level_7_battery_ParamLimits

0x34b9,	// (0x0004c3c7) bg_status_flat_pane_g1

0x34c1,	// (0x0004c3cf) bg_status_flat_pane_g2

0x34c9,	// (0x0004c3d7) bg_status_flat_pane_g3

0x34d1,	// (0x0004c3df) bg_status_flat_pane_g4

0x34d9,	// (0x0004c3e7) bg_status_flat_pane_g5

0x34e1,	// (0x0004c3ef) bg_status_flat_pane_g6

0x34e9,	// (0x0004c3f7) bg_status_flat_pane_g7

0x99d1,	// (0x000528df) tabs_3_active_pane_t1_ParamLimits

0x99d1,	// (0x000528df) tabs_3_passive_pane_t1_ParamLimits

0x99eb,	// (0x000528f9) tabs_4_active_pane_t1_ParamLimits

0x99eb,	// (0x000528f9) tabs_4_1_passive_pane_t1_ParamLimits

0xa4d5,	// (0x000533e3) tabs_2_active_pane_t1_ParamLimits

0xa4d5,	// (0x000533e3) tabs_2_passive_pane_t1_ParamLimits

0x9a05,	// (0x00052913) bg_active_tab_pane_cp4_ParamLimits

0xa4e7,	// (0x000533f5) tabs_2_long_active_pane_t1_ParamLimits

0x2799,	// (0x0004b6a7) bg_passive_tab_pane_cp4_ParamLimits

0x0e46,	// (0x00049d54) list_single_midp_graphic_pane_t1_ParamLimits

0x9a05,	// (0x00052913) bg_active_tab_pane_cp5_ParamLimits

0xa4fa,	// (0x00053408) tabs_3_long_active_pane_t1_ParamLimits

0x2799,	// (0x0004b6a7) bg_passive_tab_pane_cp5_ParamLimits

0x0e46,	// (0x00049d54) list_single_midp_graphic_pane_t1

0xc1b9,	// (0x000550c7) bg_status_flat_pane_ParamLimits

0x2939,	// (0x0004b847) indicator_pane_cp2_ParamLimits

0x2939,	// (0x0004b847) indicator_pane_cp2

0xc337,	// (0x00055245) navi_pane_srt_ParamLimits

0xc337,	// (0x00055245) navi_pane_srt

0x2a88,	// (0x0004b996) popup_clock_digital_analogue_window_cp1

0x9ba5,	// (0x00052ab3) indicator_pane_t1

0x244e,	// (0x0004b35c) copy_highlight_pane

0x244e,	// (0x0004b35c) cursor_graphics_pane

0x244e,	// (0x0004b35c) graphic_within_text_pane

0x244e,	// (0x0004b35c) link_highlight_pane

0x3cb8,	// (0x0004cbc6) popup_preview_text_window_t5_ParamLimits

0x3cb8,	// (0x0004cbc6) popup_preview_text_window_t5

0x2580,	// (0x0004b48e) cursor_digital_pane

0x2580,	// (0x0004b48e) cursor_primary_pane

0x2591,	// (0x0004b49f) cursor_primary_small_pane

0x2599,	// (0x0004b4a7) cursor_secondary_pane

0x25a1,	// (0x0004b4af) cursor_title_pane

0x2580,	// (0x0004b48e) link_highlight_digital_pane

0x2588,	// (0x0004b496) link_highlight_primary_pane

0x2591,	// (0x0004b49f) link_highlight_primary_small_pane

0x2599,	// (0x0004b4a7) link_highlight_secondary_pane

0x25a1,	// (0x0004b4af) link_highlight_title_pane

0x2580,	// (0x0004b48e) copy_highlight_digital_pane

0x2580,	// (0x0004b48e) copy_highlight_primary_pane

0x2591,	// (0x0004b49f) copy_highlight_primary_small_pane

0x2599,	// (0x0004b4a7) copy_highlight_secondary_pane

0x25a1,	// (0x0004b4af) copy_highlight_title_pane

0x2599,	// (0x0004b4a7) graphic_text_digital_pane

0x3557,	// (0x0004c465) graphic_text_primary_pane

0x3560,	// (0x0004c46e) graphic_text_primary_small_pane

0x2591,	// (0x0004b49f) graphic_text_secondary_pane

0x2580,	// (0x0004b48e) graphic_text_title_pane

0xac1d,	// (0x00053b2b) cursor_primary_pane_g1

0x3549,	// (0x0004c457) cursor_text_primary_t1

0xc81f,	// (0x0005572d) cursor_primary_small_pane_g1

0x353b,	// (0x0004c449) cursor_text_primary_small_t1

0xc815,	// (0x00055723) cursor_primary_small_pane_g1_copy1

0x3523,	// (0x0004c431) cursor_text_primary_small_t1_copy1

0x3501,	// (0x0004c40f) cursor_text_title_t1

0xc80b,	// (0x00055719) cursor_title_pane_g1

0xac1d,	// (0x00053b2b) cursor_digital_pane_g1

0x25b3,	// (0x0004b4c1) cursor_text_digital_t1

0x25c1,	// (0x0004b4cf) link_highlight_primary_pane_g1

0x34aa,	// (0x0004c3b8) link_highlight_primary_pane_t1

0x25c1,	// (0x0004b4cf) link_highlight_primary_small_pane_g1

0x25c9,	// (0x0004b4d7) link_highlight_primary_small_pane_t1

0x25c1,	// (0x0004b4cf) link_highlight_secondary_pane_g1

0x25d8,	// (0x0004b4e6) link_highlight_secondary_pane_t1

0x340f,	// (0x0004c31d) link_highlight_title_pane_g1

0x3426,	// (0x0004c334) link_highlight_title_pane_t1

0x340f,	// (0x0004c31d) link_highlight_digital_pane_g1

0x3417,	// (0x0004c325) link_highlight_digital_pane_t1

0x32c9,	// (0x0004c1d7) copy_highlight_primary_pane_g1

0x32ef,	// (0x0004c1fd) copy_highlight_primary_pane_t1

0x32c9,	// (0x0004c1d7) copy_highlight_primary_small_pane_g1

0x32e0,	// (0x0004c1ee) copy_highlight_primary_small_pane_t1

0x25e7,	// (0x0004b4f5) copy_highlight_secondary_pane_g1

0x25ef,	// (0x0004b4fd) copy_highlight_secondary_pane_t1

0x32c9,	// (0x0004c1d7) copy_highlight_title_pane_g1

0x32d1,	// (0x0004c1df) copy_highlight_title_pane_t1

0x32c9,	// (0x0004c1d7) copy_highlight_digital_pane_g1

0x4517,	// (0x0004d425) copy_highlight_digital_pane_t1

0x446b,	// (0x0004d379) graphic_text_primary_pane_g1

0x44fb,	// (0x0004d409) graphic_text_primary_pane_t1

0x4509,	// (0x0004d417) graphic_text_primary_pane_t2

0x0001,

0xf9bd,	// (0x000588cb) graphic_text_primary_pane_t

0x44d7,	// (0x0004d3e5) graphic_text_primary_small_pane_g1

0x44df,	// (0x0004d3ed) graphic_text_primary_small_pane_t1

0x44ed,	// (0x0004d3fb) graphic_text_primary_small_pane_t2

0x0001,

0xf9b8,	// (0x000588c6) graphic_text_primary_small_pane_t

0x44b3,	// (0x0004d3c1) graphic_text_secondary_pane_g1

0x44bb,	// (0x0004d3c9) graphic_text_secondary_pane_t1

0x44c9,	// (0x0004d3d7) graphic_text_secondary_pane_t2

0x0001,

0xf9b3,	// (0x000588c1) graphic_text_secondary_pane_t

0x448f,	// (0x0004d39d) graphic_text_title_pane_g1

0x4497,	// (0x0004d3a5) graphic_text_title_pane_t1

0x44a5,	// (0x0004d3b3) graphic_text_title_pane_t2

0x0001,

0xf9ae,	// (0x000588bc) graphic_text_title_pane_t

0x446b,	// (0x0004d379) graphic_text_digital_pane_g1

0x4473,	// (0x0004d381) graphic_text_digital_pane_t1

0x4481,	// (0x0004d38f) graphic_text_digital_pane_t2

0x0001,

0xf9a9,	// (0x000588b7) graphic_text_digital_pane_t

0x9a05,	// (0x00052913) navi_icon_pane_srt_ParamLimits

0x9a05,	// (0x00052913) navi_icon_pane_srt

0x976a,	// (0x00052678) navi_midp_pane_srt

0x976a,	// (0x00052678) navi_navi_pane_srt

0x9a05,	// (0x00052913) navi_text_pane_srt_ParamLimits

0x9a05,	// (0x00052913) navi_text_pane_srt

0x4436,	// (0x0004d344) navi_navi_icon_text_pane_srt

0x443e,	// (0x0004d34c) navi_navi_pane_srt_g1_ParamLimits

0x443e,	// (0x0004d34c) navi_navi_pane_srt_g1

0x4450,	// (0x0004d35e) navi_navi_pane_srt_g2_ParamLimits

0x4450,	// (0x0004d35e) navi_navi_pane_srt_g2

0x0001,

0xf9a4,	// (0x000588b2) navi_navi_pane_srt_g_ParamLimits

0xf9a4,	// (0x000588b2) navi_navi_pane_srt_g

0x4462,	// (0x0004d370) navi_navi_tabs_pane_srt

0x4436,	// (0x0004d344) navi_navi_text_pane_srt

0x4436,	// (0x0004d344) navi_navi_volume_pane_srt

0x4427,	// (0x0004d335) navi_navi_text_pane_srt_t1

0x127a,	// (0x0004a188) navi_navi_volume_pane_srt_g1

0x1282,	// (0x0004a190) volume_small_pane_srt_ParamLimits

0x1282,	// (0x0004a190) volume_small_pane_srt

0x05f3,	// (0x00049501) volume_small_pane_srt_g1_ParamLimits

0x05f3,	// (0x00049501) volume_small_pane_srt_g1

0x0603,	// (0x00049511) volume_small_pane_srt_g2_ParamLimits

0x0603,	// (0x00049511) volume_small_pane_srt_g2

0x0614,	// (0x00049522) volume_small_pane_srt_g3_ParamLimits

0x0614,	// (0x00049522) volume_small_pane_srt_g3

0x0625,	// (0x00049533) volume_small_pane_srt_g4_ParamLimits

0x0625,	// (0x00049533) volume_small_pane_srt_g4

0x0636,	// (0x00049544) volume_small_pane_srt_g5_ParamLimits

0x0636,	// (0x00049544) volume_small_pane_srt_g5

0x0647,	// (0x00049555) volume_small_pane_srt_g6_ParamLimits

0x0647,	// (0x00049555) volume_small_pane_srt_g6

0x0658,	// (0x00049566) volume_small_pane_srt_g7_ParamLimits

0x0658,	// (0x00049566) volume_small_pane_srt_g7

0x0669,	// (0x00049577) volume_small_pane_srt_g8_ParamLimits

0x0669,	// (0x00049577) volume_small_pane_srt_g8

0x067a,	// (0x00049588) volume_small_pane_srt_g9_ParamLimits

0x067a,	// (0x00049588) volume_small_pane_srt_g9

0x068b,	// (0x00049599) volume_small_pane_srt_g10_ParamLimits

0x068b,	// (0x00049599) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x00058666) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x00058666) volume_small_pane_srt_g

0x9ec0,	// (0x00052dce) query_popup_data_pane_cp2

0x440d,	// (0x0004d31b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x440d,	// (0x0004d31b) navi_navi_icon_text_pane_srt_t1

0x3557,	// (0x0004c465) navi_tabs_2_long_pane_srt

0x3557,	// (0x0004c465) navi_tabs_2_pane_srt

0x3557,	// (0x0004c465) navi_tabs_3_long_pane_srt

0x3557,	// (0x0004c465) navi_tabs_3_pane_srt

0x3557,	// (0x0004c465) navi_tabs_4_pane_srt

0xb80d,	// (0x0005471b) tabs_2_active_pane_srt_ParamLimits

0xb80d,	// (0x0005471b) tabs_2_active_pane_srt

0xb81d,	// (0x0005472b) tabs_2_passive_pane_srt_ParamLimits

0xb81d,	// (0x0005472b) tabs_2_passive_pane_srt

0x2d1a,	// (0x0004bc28) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2d1a,	// (0x0004bc28) bg_passive_tab_pane_cp1_srt

0xce3a,	// (0x00055d48) bg_passive_tab_pane_g1_cp1_srt

0xaa88,	// (0x00053996) bg_passive_tab_pane_g2_cp1_srt

0xce43,	// (0x00055d51) bg_passive_tab_pane_g3_cp1_srt

0x99bb,	// (0x000528c9) bg_active_tab_pane_cp1_srt_ParamLimits

0x99bb,	// (0x000528c9) bg_active_tab_pane_cp1_srt

0xce4c,	// (0x00055d5a) tabs_2_active_pane_srt_g1

0xce54,	// (0x00055d62) tabs_2_active_pane_srt_t1_ParamLimits

0xce54,	// (0x00055d62) tabs_2_active_pane_srt_t1

0xce3a,	// (0x00055d48) bg_active_tab_pane_g1_cp1_srt

0xaa88,	// (0x00053996) bg_active_tab_pane_g2_cp1_srt

0xce43,	// (0x00055d51) bg_active_tab_pane_g3_cp1_srt

0xb7da,	// (0x000546e8) tabs_3_active_pane_srt_ParamLimits

0xb7da,	// (0x000546e8) tabs_3_active_pane_srt

0xb7eb,	// (0x000546f9) tabs_3_passive_pane_cp_srt_ParamLimits

0xb7eb,	// (0x000546f9) tabs_3_passive_pane_cp_srt

0xb7fc,	// (0x0005470a) tabs_3_passive_pane_srt_ParamLimits

0xb7fc,	// (0x0005470a) tabs_3_passive_pane_srt

0x2d1a,	// (0x0004bc28) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2d1a,	// (0x0004bc28) bg_passive_tab_pane_cp2_srt

0xac27,	// (0x00053b35) bg_passive_tab_pane_g1_cp2_srt

0xaa88,	// (0x00053996) bg_passive_tab_pane_g2_cp2_srt

0xac30,	// (0x00053b3e) bg_passive_tab_pane_g3_cp2_srt

0x99bb,	// (0x000528c9) bg_active_tab_pane_cp2_srt_ParamLimits

0x99bb,	// (0x000528c9) bg_active_tab_pane_cp2_srt

0xce1c,	// (0x00055d2a) tabs_3_active_pane_srt_g1

0xce24,	// (0x00055d32) tabs_3_active_pane_srt_t1_ParamLimits

0xce24,	// (0x00055d32) tabs_3_active_pane_srt_t1

0xac27,	// (0x00053b35) bg_active_tab_pane_g1_cp2_srt

0xaa88,	// (0x00053996) bg_active_tab_pane_g2_cp2_srt

0xac30,	// (0x00053b3e) bg_active_tab_pane_g3_cp2_srt

0x11df,	// (0x0004a0ed) tabs_4_active_pane_srt_ParamLimits

0x11df,	// (0x0004a0ed) tabs_4_active_pane_srt

0x11f1,	// (0x0004a0ff) tabs_4_passive_pane_cp2_srt_ParamLimits

0x11f1,	// (0x0004a0ff) tabs_4_passive_pane_cp2_srt

0x07fa,	// (0x00049708) aid_size_cell_toolbar

0x4055,	// (0x0004cf63) main_idle_act_pane_ParamLimits

0xb0a8,	// (0x00053fb6) popup_large_graphic_colour_window_ParamLimits

0xb59c,	// (0x000544aa) popup_toolbar_window_ParamLimits

0xb59c,	// (0x000544aa) popup_toolbar_window

0x4209,	// (0x0004d117) list_single_graphic_2heading_pane_ParamLimits

0x4209,	// (0x0004d117) list_single_graphic_2heading_pane

0xa6a7,	// (0x000535b5) aid_size_cell_apps_grid_lsc_pane

0xa6b9,	// (0x000535c7) aid_size_cell_apps_grid_prt_pane

0x2799,	// (0x0004b6a7) bg_wml_button_pane_cp1_ParamLimits

0x2799,	// (0x0004b6a7) bg_wml_button_pane_cp1

0xc5b1,	// (0x000554bf) form_midp_field_text_pane_t1_ParamLimits

0x2d1a,	// (0x0004bc28) input_focus_pane_cp050_ParamLimits

0x2f8a,	// (0x0004be98) list_midp_form_text_pane_ParamLimits

0x2f2d,	// (0x0004be3b) input_focus_pane_cp051_ParamLimits

0x2f41,	// (0x0004be4f) list_midp_choice_pane_ParamLimits

0xc516,	// (0x00055424) list_single_2graphic_pane_cp3_ParamLimits

0xc516,	// (0x00055424) list_single_2graphic_pane_cp3

0xc52a,	// (0x00055438) list_single_midp_graphic_pane_ParamLimits

0xc52a,	// (0x00055438) list_single_midp_graphic_pane

0xe403,	// (0x00057311) list_single_graphic_2heading_pane_g1_ParamLimits

0xe403,	// (0x00057311) list_single_graphic_2heading_pane_g1

0xe40f,	// (0x0005731d) list_single_graphic_2heading_pane_g4_ParamLimits

0xe40f,	// (0x0005731d) list_single_graphic_2heading_pane_g4

0xe41b,	// (0x00057329) list_single_graphic_2heading_pane_g5_ParamLimits

0xe41b,	// (0x00057329) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x000586b9) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x000586b9) list_single_graphic_2heading_pane_g

0xe427,	// (0x00057335) list_single_graphic_2heading_pane_t1_ParamLimits

0xe427,	// (0x00057335) list_single_graphic_2heading_pane_t1

0xe43b,	// (0x00057349) list_single_graphic_2heading_pane_t2_ParamLimits

0xe43b,	// (0x00057349) list_single_graphic_2heading_pane_t2

0xe455,	// (0x00057363) list_single_graphic_2heading_pane_t3_ParamLimits

0xe455,	// (0x00057363) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x000586c0) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x000586c0) list_single_graphic_2heading_pane_t

0x2be4,	// (0x0004baf2) bg_popup_sub_pane_cp2

0x2c0e,	// (0x0004bb1c) grid_toobar_pane

0x0dc9,	// (0x00049cd7) cell_toolbar_pane_ParamLimits

0x0dc9,	// (0x00049cd7) cell_toolbar_pane

0x2c4a,	// (0x0004bb58) cell_toolbar_pane_g1_ParamLimits

0x2c4a,	// (0x0004bb58) cell_toolbar_pane_g1

0xc4d6,	// (0x000553e4) cell_toolbar_pane_g2_ParamLimits

0xc4d6,	// (0x000553e4) cell_toolbar_pane_g2

0x0001,

0xf7b9,	// (0x000586c7) cell_toolbar_pane_g_ParamLimits

0xf7b9,	// (0x000586c7) cell_toolbar_pane_g

0x2c80,	// (0x0004bb8e) grid_highlight_pane_cp2_ParamLimits

0x2c80,	// (0x0004bb8e) grid_highlight_pane_cp2

0x2c9a,	// (0x0004bba8) toolbar_button_pane

0x2ca6,	// (0x0004bbb4) toolbar_button_pane_g1

0x2cae,	// (0x0004bbbc) toolbar_button_pane_g2

0x2cb6,	// (0x0004bbc4) toolbar_button_pane_g3

0x2cbe,	// (0x0004bbcc) toolbar_button_pane_g4

0x2cc6,	// (0x0004bbd4) toolbar_button_pane_g5

0x2cce,	// (0x0004bbdc) toolbar_button_pane_g6

0x2cd6,	// (0x0004bbe4) toolbar_button_pane_g7

0x2cde,	// (0x0004bbec) toolbar_button_pane_g8

0x2ce6,	// (0x0004bbf4) toolbar_button_pane_g9

0x0009,

0xf7be,	// (0x000586cc) toolbar_button_pane_g

0x0e01,	// (0x00049d0f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0e01,	// (0x00049d0f) list_single_2graphic_pane_g1_cp3

0xb649,	// (0x00054557) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb649,	// (0x00054557) list_single_2graphic_pane_g2_cp3

0x04de,	// (0x000493ec) list_single_2graphic_pane_g3_cp3

0x0e1e,	// (0x00049d2c) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0e1e,	// (0x00049d2c) list_single_2graphic_pane_g4_cp3

0xb65a,	// (0x00054568) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb65a,	// (0x00054568) list_single_2graphic_pane_t1_cp3

0xc0c9,	// (0x00054fd7) list_single_midp_graphic_pane_g2_ParamLimits

0xc0c9,	// (0x00054fd7) list_single_midp_graphic_pane_g2

0xe3f3,	// (0x00057301) aid_zoom_text_primary

0x0802,	// (0x00049710) aid_zoom_text_secondary

0xac87,	// (0x00053b95) status_small_pane_g7_ParamLimits

0xac87,	// (0x00053b95) status_small_pane_g7

0xacaa,	// (0x00053bb8) status_small_pane_t1_ParamLimits

0x98c7,	// (0x000527d5) title_pane_g2

0x0003,

0xf54e,	// (0x0005845c) title_pane_g

0x9f64,	// (0x00052e72) aid_size_cell_colour_1_pane_ParamLimits

0x9f64,	// (0x00052e72) aid_size_cell_colour_1_pane

0x9f78,	// (0x00052e86) aid_size_cell_colour_2_pane_ParamLimits

0x9f78,	// (0x00052e86) aid_size_cell_colour_2_pane

0x9f8c,	// (0x00052e9a) aid_size_cell_colour_3_pane_ParamLimits

0x9f8c,	// (0x00052e9a) aid_size_cell_colour_3_pane

0x9fa0,	// (0x00052eae) aid_size_cell_colour_4_pane_ParamLimits

0x9fa0,	// (0x00052eae) aid_size_cell_colour_4_pane

0xf3ff,	// (0x0005830d) title_pane_stacon_g1_ParamLimits

0xf3ff,	// (0x0005830d) title_pane_stacon_g1

0x3346,	// (0x0004c254) popup_note_wait_window_g3_ParamLimits

0x3346,	// (0x0004c254) popup_note_wait_window_g3

0x33bc,	// (0x0004c2ca) popup_note_wait_window_t5_ParamLimits

0x33bc,	// (0x0004c2ca) popup_note_wait_window_t5

0x976a,	// (0x00052678) main_feb_china_hwr_fs_writing_pane

0xaf2a,	// (0x00053e38) popup_feb_china_hwr_fs_window_ParamLimits

0xaf2a,	// (0x00053e38) popup_feb_china_hwr_fs_window

0xb676,	// (0x00054584) aid_size_cell_hwr_fs_ParamLimits

0xb676,	// (0x00054584) aid_size_cell_hwr_fs

0x2d1a,	// (0x0004bc28) bg_popup_sub_pane_cp3_ParamLimits

0x2d1a,	// (0x0004bc28) bg_popup_sub_pane_cp3

0xb68b,	// (0x00054599) grid_hwr_fs_pane_ParamLimits

0xb68b,	// (0x00054599) grid_hwr_fs_pane

0x0ea1,	// (0x00049daf) linegrid_hwr_fs_pane_ParamLimits

0x0ea1,	// (0x00049daf) linegrid_hwr_fs_pane

0xb6a3,	// (0x000545b1) cell_hwr_fs_pane_ParamLimits

0xb6a3,	// (0x000545b1) cell_hwr_fs_pane

0x2d26,	// (0x0004bc34) linegrid_hwr_fs_pane_g1_ParamLimits

0x2d26,	// (0x0004bc34) linegrid_hwr_fs_pane_g1

0xc4ea,	// (0x000553f8) linegrid_hwr_fs_pane_g2_ParamLimits

0xc4ea,	// (0x000553f8) linegrid_hwr_fs_pane_g2

0x2d44,	// (0x0004bc52) linegrid_hwr_fs_pane_g3_ParamLimits

0x2d44,	// (0x0004bc52) linegrid_hwr_fs_pane_g3

0xb6c9,	// (0x000545d7) linegrid_hwr_fs_pane_g4_ParamLimits

0xb6c9,	// (0x000545d7) linegrid_hwr_fs_pane_g4

0x0eed,	// (0x00049dfb) linegrid_hwr_fs_pane_g5_ParamLimits

0x0eed,	// (0x00049dfb) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e4,	// (0x000586f2) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e4,	// (0x000586f2) linegrid_hwr_fs_pane_g

0x2d50,	// (0x0004bc5e) cell_hwr_fs_pane_g1_ParamLimits

0x2d50,	// (0x0004bc5e) cell_hwr_fs_pane_g1

0x2b1e,	// (0x0004ba2c) cell_hwr_fs_pane_g2_ParamLimits

0x2b1e,	// (0x0004ba2c) cell_hwr_fs_pane_g2

0xc4fc,	// (0x0005540a) cell_hwr_fs_pane_g3_ParamLimits

0xc4fc,	// (0x0005540a) cell_hwr_fs_pane_g3

0xc509,	// (0x00055417) cell_hwr_fs_pane_g4_ParamLimits

0xc509,	// (0x00055417) cell_hwr_fs_pane_g4

0x0003,

0xf7ef,	// (0x000586fd) cell_hwr_fs_pane_g_ParamLimits

0xf7ef,	// (0x000586fd) cell_hwr_fs_pane_g

0xb6e3,	// (0x000545f1) cell_hwr_fs_pane_t1

0x976a,	// (0x00052678) grid_highlight_pane_cp6

0x976a,	// (0x00052678) main_idle_act2_pane

0xa47b,	// (0x00053389) aid_inside_area_popup_secondary

0xc93e,	// (0x0005584c) aid_inside_area_window_primary_ParamLimits

0xc93e,	// (0x0005584c) aid_inside_area_window_primary

0xce72,	// (0x00055d80) ai2_news_ticker_pane

0x452e,	// (0x0004d43c) aid_size_cell_ai1_link_ParamLimits

0x452e,	// (0x0004d43c) aid_size_cell_ai1_link

0xce7a,	// (0x00055d88) popup_ai2_data_window_ParamLimits

0xce7a,	// (0x00055d88) popup_ai2_data_window

0x455e,	// (0x0004d46c) popup_ai2_link_window_ParamLimits

0x455e,	// (0x0004d46c) popup_ai2_link_window

0x2d1a,	// (0x0004bc28) bg_popup_sub_pane_cp4_ParamLimits

0x2d1a,	// (0x0004bc28) bg_popup_sub_pane_cp4

0x4572,	// (0x0004d480) grid_ai2_link_pane_ParamLimits

0x4572,	// (0x0004d480) grid_ai2_link_pane

0x4589,	// (0x0004d497) popup_ai2_link_window_g1_ParamLimits

0x4589,	// (0x0004d497) popup_ai2_link_window_g1

0x4595,	// (0x0004d4a3) popup_ai2_link_window_g2_ParamLimits

0x4595,	// (0x0004d4a3) popup_ai2_link_window_g2

0x0001,

0xf9c2,	// (0x000588d0) popup_ai2_link_window_g_ParamLimits

0xf9c2,	// (0x000588d0) popup_ai2_link_window_g

0x45a4,	// (0x0004d4b2) ai2_mp_button_pane

0x45ac,	// (0x0004d4ba) ai2_mp_volume_pane

0x2f2d,	// (0x0004be3b) bg_popup_sub_pane_cp5_ParamLimits

0x2f2d,	// (0x0004be3b) bg_popup_sub_pane_cp5

0x45b4,	// (0x0004d4c2) heading_ai2_gene_pane_ParamLimits

0x45b4,	// (0x0004d4c2) heading_ai2_gene_pane

0x45c0,	// (0x0004d4ce) list_ai2_gene_pane_ParamLimits

0x45c0,	// (0x0004d4ce) list_ai2_gene_pane

0x4608,	// (0x0004d516) cell_ai2_link_pane_ParamLimits

0x4608,	// (0x0004d516) cell_ai2_link_pane

0x461e,	// (0x0004d52c) cell_ai2_link_pane_g1

0x976a,	// (0x00052678) grid_highlight_pane_cp7

0x1297,	// (0x0004a1a5) ai2_mp_volume_pane_g1

0x46ee,	// (0x0004d5fc) ai2_mp_volume_pane_g2

0x4663,	// (0x0004d571) list_ai2_gene_pane_t1

0x46f6,	// (0x0004d604) ai2_mp_volume_pane_g3

0x0002,

0xf9db,	// (0x000588e9) ai2_mp_volume_pane_g

0xb82d,	// (0x0005473b) volume_small_pane_cp3

0x46fe,	// (0x0004d60c) aid_size_cell_ai2_button

0x4706,	// (0x0004d614) grid_ai2_button_pane

0x470f,	// (0x0004d61d) cell_ai2_button_pane_ParamLimits

0x470f,	// (0x0004d61d) cell_ai2_button_pane

0x967a,	// (0x00052588) cell_ai2_button_pane_g1

0x976a,	// (0x00052678) grid_highlight_pane_cp8

0x46ae,	// (0x0004d5bc) ai2_gene_pane_t1_ParamLimits

0x46ae,	// (0x0004d5bc) ai2_gene_pane_t1

0xae78,	// (0x00053d86) aid_height_parent_landscape

0xcb8c,	// (0x00055a9a) aid_height_set_list

0x4055,	// (0x0004cf63) aid_size_parent

0xcdf0,	// (0x00055cfe) aid_size_cell_graphic_pane_ParamLimits

0x45d0,	// (0x0004d4de) popup_ai2_data_window_g1_ParamLimits

0x45d0,	// (0x0004d4de) popup_ai2_data_window_g1

0x45dc,	// (0x0004d4ea) ai2_news_ticker_pane_g1

0x45e4,	// (0x0004d4f2) ai2_news_ticker_pane_g2

0x0001,

0xf9c7,	// (0x000588d5) ai2_news_ticker_pane_g

0x45ec,	// (0x0004d4fa) ai2_news_ticker_pane_t1

0x45fa,	// (0x0004d508) ai2_news_ticker_pane_t2

0x0001,

0xf9cc,	// (0x000588da) ai2_news_ticker_pane_t

0x4627,	// (0x0004d535) heading_ai2_gene_pane_g1

0x462f,	// (0x0004d53d) heading_ai2_gene_pane_t1_ParamLimits

0x462f,	// (0x0004d53d) heading_ai2_gene_pane_t1

0x4644,	// (0x0004d552) list_highlight_pane_cp6

0x464c,	// (0x0004d55a) ai2_gene_pane_ParamLimits

0x464c,	// (0x0004d55a) ai2_gene_pane

0x4671,	// (0x0004d57f) list_ai2_gene_pane_t2

0x0001,

0xf9d1,	// (0x000588df) list_ai2_gene_pane_t

0x467f,	// (0x0004d58d) list_highlight_pane_cp8_ParamLimits

0x467f,	// (0x0004d58d) list_highlight_pane_cp8

0x4690,	// (0x0004d59e) ai2_gene_pane_g1_ParamLimits

0x4690,	// (0x0004d59e) ai2_gene_pane_g1

0x46a2,	// (0x0004d5b0) ai2_gene_pane_g2_ParamLimits

0x46a2,	// (0x0004d5b0) ai2_gene_pane_g2

0x0001,

0xf9d6,	// (0x000588e4) ai2_gene_pane_g_ParamLimits

0xf9d6,	// (0x000588e4) ai2_gene_pane_g

0xa270,	// (0x0005317e) scroll_pane_cp12

0xae35,	// (0x00053d43) control_pane_t3_ParamLimits

0xae35,	// (0x00053d43) control_pane_t3

0xac9b,	// (0x00053ba9) status_small_pane_g8_ParamLimits

0xac9b,	// (0x00053ba9) status_small_pane_g8

0xafed,	// (0x00053efb) popup_find_window_ParamLimits

0xb2a0,	// (0x000541ae) popup_note_image_window_ParamLimits

0xe17b,	// (0x00057089) list_double2_graphic_pane_vc_g1_ParamLimits

0xe17b,	// (0x00057089) list_double2_graphic_pane_vc_g1

0xf38b,	// (0x00058299) list_double2_graphic_pane_vc_g2_ParamLimits

0xf38b,	// (0x00058299) list_double2_graphic_pane_vc_g2

0xf397,	// (0x000582a5) list_double2_graphic_pane_vc_g3_ParamLimits

0xf397,	// (0x000582a5) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x000584cf) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x000584cf) list_double2_graphic_pane_vc_g

0xe187,	// (0x00057095) list_double2_graphic_pane_vc_t1_ParamLimits

0xe187,	// (0x00057095) list_double2_graphic_pane_vc_t1

0xf38b,	// (0x00058299) list_single_heading_pane_vc_g1_ParamLimits

0xf38b,	// (0x00058299) list_single_heading_pane_vc_g1

0xf397,	// (0x000582a5) list_single_heading_pane_vc_g2_ParamLimits

0xf397,	// (0x000582a5) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x000584e0) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x000584e0) list_single_heading_pane_vc_g

0xe46d,	// (0x0005737b) list_single_heading_pane_vc_t1_ParamLimits

0xe46d,	// (0x0005737b) list_single_heading_pane_vc_t1

0xe483,	// (0x00057391) list_single_heading_pane_vc_t2_ParamLimits

0xe483,	// (0x00057391) list_single_heading_pane_vc_t2

0x0001,

0xf7d3,	// (0x000586e1) list_single_heading_pane_vc_t_ParamLimits

0xf7d3,	// (0x000586e1) list_single_heading_pane_vc_t

0x0e5c,	// (0x00049d6a) list_setting_number_pane_vc_g1_ParamLimits

0x0e5c,	// (0x00049d6a) list_setting_number_pane_vc_g1

0x0e68,	// (0x00049d76) list_setting_number_pane_vc_g2_ParamLimits

0x0e68,	// (0x00049d76) list_setting_number_pane_vc_g2

0x0001,

0xf7d8,	// (0x000586e6) list_setting_number_pane_vc_g_ParamLimits

0xf7d8,	// (0x000586e6) list_setting_number_pane_vc_g

0xe495,	// (0x000573a3) list_setting_number_pane_vc_t1_ParamLimits

0xe495,	// (0x000573a3) list_setting_number_pane_vc_t1

0xe4a9,	// (0x000573b7) list_setting_number_pane_vc_t2_ParamLimits

0xe4a9,	// (0x000573b7) list_setting_number_pane_vc_t2

0xe4c5,	// (0x000573d3) list_setting_number_pane_vc_t3_ParamLimits

0xe4c5,	// (0x000573d3) list_setting_number_pane_vc_t3

0x0002,

0xf7dd,	// (0x000586eb) list_setting_number_pane_vc_t_ParamLimits

0xf7dd,	// (0x000586eb) list_setting_number_pane_vc_t

0xef10,	// (0x00057e1e) set_value_pane_vc_ParamLimits

0xef10,	// (0x00057e1e) set_value_pane_vc

0x4209,	// (0x0004d117) list_double2_graphic_pane_vc_ParamLimits

0x4209,	// (0x0004d117) list_double2_graphic_pane_vc

0x4209,	// (0x0004d117) list_double2_large_graphic_pane_vc_ParamLimits

0x4209,	// (0x0004d117) list_double2_large_graphic_pane_vc

0x4209,	// (0x0004d117) list_double2_pane_vc_ParamLimits

0x4209,	// (0x0004d117) list_double2_pane_vc

0x4209,	// (0x0004d117) list_double_graphic_heading_pane_vc_ParamLimits

0x4209,	// (0x0004d117) list_double_graphic_heading_pane_vc

0x4209,	// (0x0004d117) list_double_graphic_pane_vc_ParamLimits

0x4209,	// (0x0004d117) list_double_graphic_pane_vc

0x4209,	// (0x0004d117) list_double_heading_pane_vc_ParamLimits

0x4209,	// (0x0004d117) list_double_heading_pane_vc

0x421b,	// (0x0004d129) list_double_large_graphic_pane_vc_ParamLimits

0x421b,	// (0x0004d129) list_double_large_graphic_pane_vc

0x4209,	// (0x0004d117) list_double_number_pane_vc_ParamLimits

0x4209,	// (0x0004d117) list_double_number_pane_vc

0x4209,	// (0x0004d117) list_double_pane_vc_ParamLimits

0x4209,	// (0x0004d117) list_double_pane_vc

0x4209,	// (0x0004d117) list_double_time_pane_vc_ParamLimits

0x4209,	// (0x0004d117) list_double_time_pane_vc

0x4209,	// (0x0004d117) list_setting_number_pane_vc_ParamLimits

0x4209,	// (0x0004d117) list_setting_number_pane_vc

0x4209,	// (0x0004d117) list_setting_pane_vc_ParamLimits

0x4209,	// (0x0004d117) list_setting_pane_vc

0x4209,	// (0x0004d117) list_single_graphic_heading_pane_vc_ParamLimits

0x4209,	// (0x0004d117) list_single_graphic_heading_pane_vc

0x4209,	// (0x0004d117) list_single_heading_pane_vc_ParamLimits

0x4209,	// (0x0004d117) list_single_heading_pane_vc

0x4209,	// (0x0004d117) list_single_number_heading_pane_vc_ParamLimits

0x4209,	// (0x0004d117) list_single_number_heading_pane_vc

0xef2f,	// (0x00057e3d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xef2f,	// (0x00057e3d) list_double_graphic_heading_pane_vc_g1

0xf38b,	// (0x00058299) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xf38b,	// (0x00058299) list_double_graphic_heading_pane_vc_g2

0xf397,	// (0x000582a5) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xf397,	// (0x000582a5) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e2,	// (0x000588f0) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e2,	// (0x000588f0) list_double_graphic_heading_pane_vc_g

0xef3b,	// (0x00057e49) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xef3b,	// (0x00057e49) list_double_graphic_heading_pane_vc_t1

0xef4f,	// (0x00057e5d) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xef4f,	// (0x00057e5d) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e9,	// (0x000588f7) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e9,	// (0x000588f7) list_double_graphic_heading_pane_vc_t

0x0e5c,	// (0x00049d6a) list_setting_pane_vc_g1_ParamLimits

0x0e5c,	// (0x00049d6a) list_setting_pane_vc_g1

0x0e68,	// (0x00049d76) list_setting_pane_vc_g2_ParamLimits

0x0e68,	// (0x00049d76) list_setting_pane_vc_g2

0x0001,

0xf7d8,	// (0x000586e6) list_setting_pane_vc_g_ParamLimits

0xf7d8,	// (0x000586e6) list_setting_pane_vc_g

0xef67,	// (0x00057e75) list_setting_pane_vc_t1_ParamLimits

0xef67,	// (0x00057e75) list_setting_pane_vc_t1

0xef83,	// (0x00057e91) list_setting_pane_vc_t2_ParamLimits

0xef83,	// (0x00057e91) list_setting_pane_vc_t2

0x0001,

0xfa2c,	// (0x0005893a) list_setting_pane_vc_t_ParamLimits

0xfa2c,	// (0x0005893a) list_setting_pane_vc_t

0xef10,	// (0x00057e1e) set_value_pane_cp_vc_ParamLimits

0xef10,	// (0x00057e1e) set_value_pane_cp_vc

0xf38b,	// (0x00058299) list_single_number_heading_pane_vc_g1_ParamLimits

0xf38b,	// (0x00058299) list_single_number_heading_pane_vc_g1

0xf397,	// (0x000582a5) list_single_number_heading_pane_vc_g2_ParamLimits

0xf397,	// (0x000582a5) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x000584e0) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x000584e0) list_single_number_heading_pane_vc_g

0xef9d,	// (0x00057eab) list_single_number_heading_pane_vc_t1_ParamLimits

0xef9d,	// (0x00057eab) list_single_number_heading_pane_vc_t1

0xefb3,	// (0x00057ec1) list_single_number_heading_pane_vc_t2_ParamLimits

0xefb3,	// (0x00057ec1) list_single_number_heading_pane_vc_t2

0xefc5,	// (0x00057ed3) list_single_number_heading_pane_vc_t3_ParamLimits

0xefc5,	// (0x00057ed3) list_single_number_heading_pane_vc_t3

0x0002,

0xfa31,	// (0x0005893f) list_single_number_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x0005893f) list_single_number_heading_pane_vc_t

0xefd7,	// (0x00057ee5) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xefd7,	// (0x00057ee5) list_single_graphic_heading_pane_vc_g1

0xf38b,	// (0x00058299) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xf38b,	// (0x00058299) list_single_graphic_heading_pane_vc_g4

0xf397,	// (0x000582a5) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xf397,	// (0x000582a5) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa38,	// (0x00058946) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa38,	// (0x00058946) list_single_graphic_heading_pane_vc_g

0xe46d,	// (0x0005737b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe46d,	// (0x0005737b) list_single_graphic_heading_pane_vc_t1

0xefe3,	// (0x00057ef1) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xefe3,	// (0x00057ef1) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3f,	// (0x0005894d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3f,	// (0x0005894d) list_single_graphic_heading_pane_vc_t

0xf38b,	// (0x00058299) list_double2_pane_vc_g1_ParamLimits

0xf38b,	// (0x00058299) list_double2_pane_vc_g1

0xf397,	// (0x000582a5) list_double2_pane_vc_g2_ParamLimits

0xf397,	// (0x000582a5) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x000584e0) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x000584e0) list_double2_pane_vc_g

0xeff5,	// (0x00057f03) list_double2_pane_vc_t1_ParamLimits

0xeff5,	// (0x00057f03) list_double2_pane_vc_t1

0x12f9,	// (0x0004a207) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x12f9,	// (0x0004a207) list_double2_large_graphic_pane_vc_g1

0xf38b,	// (0x00058299) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xf38b,	// (0x00058299) list_double2_large_graphic_pane_vc_g2

0xf397,	// (0x000582a5) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xf397,	// (0x000582a5) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x000584f8) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x000584f8) list_double2_large_graphic_pane_vc_g

0xe187,	// (0x00057095) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe187,	// (0x00057095) list_double2_large_graphic_pane_vc_t1

0x1305,	// (0x0004a213) list_double_time_pane_vc_g1_ParamLimits

0x1305,	// (0x0004a213) list_double_time_pane_vc_g1

0x1311,	// (0x0004a21f) list_double_time_pane_vc_g2_ParamLimits

0x1311,	// (0x0004a21f) list_double_time_pane_vc_g2

0x0001,

0xfa44,	// (0x00058952) list_double_time_pane_vc_g_ParamLimits

0xfa44,	// (0x00058952) list_double_time_pane_vc_g

0xf00d,	// (0x00057f1b) list_double_time_pane_vc_t1_ParamLimits

0xf00d,	// (0x00057f1b) list_double_time_pane_vc_t1

0xf031,	// (0x00057f3f) list_double_time_pane_vc_t2_ParamLimits

0xf031,	// (0x00057f3f) list_double_time_pane_vc_t2

0xf080,	// (0x00057f8e) list_double_time_pane_vc_t3_ParamLimits

0xf080,	// (0x00057f8e) list_double_time_pane_vc_t3

0xf092,	// (0x00057fa0) list_double_time_pane_vc_t4_ParamLimits

0xf092,	// (0x00057fa0) list_double_time_pane_vc_t4

0x0003,

0xfa49,	// (0x00058957) list_double_time_pane_vc_t_ParamLimits

0xfa49,	// (0x00058957) list_double_time_pane_vc_t

0xf38b,	// (0x00058299) list_double_pane_vc_g1_ParamLimits

0xf38b,	// (0x00058299) list_double_pane_vc_g1

0xf397,	// (0x000582a5) list_double_pane_vc_g2_ParamLimits

0xf397,	// (0x000582a5) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x000584e0) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x000584e0) list_double_pane_vc_g

0xf0a6,	// (0x00057fb4) list_double_pane_vc_t1_ParamLimits

0xf0a6,	// (0x00057fb4) list_double_pane_vc_t1

0xf0ba,	// (0x00057fc8) list_double_pane_vc_t2_ParamLimits

0xf0ba,	// (0x00057fc8) list_double_pane_vc_t2

0x0001,

0xfa52,	// (0x00058960) list_double_pane_vc_t_ParamLimits

0xfa52,	// (0x00058960) list_double_pane_vc_t

0xf38b,	// (0x00058299) list_double_number_pane_vc_g1_ParamLimits

0xf38b,	// (0x00058299) list_double_number_pane_vc_g1

0xf397,	// (0x000582a5) list_double_number_pane_vc_g2_ParamLimits

0xf397,	// (0x000582a5) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x000584e0) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x000584e0) list_double_number_pane_vc_g

0xf0d2,	// (0x00057fe0) list_double_number_pane_vc_t1_ParamLimits

0xf0d2,	// (0x00057fe0) list_double_number_pane_vc_t1

0xf0a6,	// (0x00057fb4) list_double_number_pane_vc_t2_ParamLimits

0xf0a6,	// (0x00057fb4) list_double_number_pane_vc_t2

0xf0e4,	// (0x00057ff2) list_double_number_pane_vc_t3_ParamLimits

0xf0e4,	// (0x00057ff2) list_double_number_pane_vc_t3

0x0002,

0xfa57,	// (0x00058965) list_double_number_pane_vc_t_ParamLimits

0xfa57,	// (0x00058965) list_double_number_pane_vc_t

0x131d,	// (0x0004a22b) list_double_large_graphic_pane_vc_g1_ParamLimits

0x131d,	// (0x0004a22b) list_double_large_graphic_pane_vc_g1

0x133f,	// (0x0004a24d) list_double_large_graphic_pane_vc_g2_ParamLimits

0x133f,	// (0x0004a24d) list_double_large_graphic_pane_vc_g2

0x1353,	// (0x0004a261) list_double_large_graphic_pane_vc_g3_ParamLimits

0x1353,	// (0x0004a261) list_double_large_graphic_pane_vc_g3

0xf0fc,	// (0x0005800a) list_double_large_graphic_pane_vc_g4_ParamLimits

0xf0fc,	// (0x0005800a) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5e,	// (0x0005896c) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5e,	// (0x0005896c) list_double_large_graphic_pane_vc_g

0xf108,	// (0x00058016) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf108,	// (0x00058016) list_double_large_graphic_pane_vc_t1

0xf124,	// (0x00058032) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf124,	// (0x00058032) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa67,	// (0x00058975) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa67,	// (0x00058975) list_double_large_graphic_pane_vc_t

0xf38b,	// (0x00058299) list_double_heading_pane_vc_g1_ParamLimits

0xf38b,	// (0x00058299) list_double_heading_pane_vc_g1

0xf397,	// (0x000582a5) list_double_heading_pane_vc_g2_ParamLimits

0xf397,	// (0x000582a5) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x000584e0) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x000584e0) list_double_heading_pane_vc_g

0xf146,	// (0x00058054) list_double_heading_pane_vc_t1_ParamLimits

0xf146,	// (0x00058054) list_double_heading_pane_vc_t1

0xf15a,	// (0x00058068) list_double_heading_pane_vc_t2_ParamLimits

0xf15a,	// (0x00058068) list_double_heading_pane_vc_t2

0x0001,

0xfa6c,	// (0x0005897a) list_double_heading_pane_vc_t_ParamLimits

0xfa6c,	// (0x0005897a) list_double_heading_pane_vc_t

0xf172,	// (0x00058080) list_double_graphic_pane_vc_g1_ParamLimits

0xf172,	// (0x00058080) list_double_graphic_pane_vc_g1

0x1362,	// (0x0004a270) list_double_graphic_pane_vc_g2_ParamLimits

0x1362,	// (0x0004a270) list_double_graphic_pane_vc_g2

0xf38b,	// (0x00058299) list_double_graphic_pane_vc_g3_ParamLimits

0xf38b,	// (0x00058299) list_double_graphic_pane_vc_g3

0x0003,

0xfa71,	// (0x0005897f) list_double_graphic_pane_vc_g_ParamLimits

0xfa71,	// (0x0005897f) list_double_graphic_pane_vc_g

0xf185,	// (0x00058093) list_double_graphic_pane_vc_t1_ParamLimits

0xf185,	// (0x00058093) list_double_graphic_pane_vc_t1

0xf1a4,	// (0x000580b2) list_double_graphic_pane_vc_t2_ParamLimits

0xf1a4,	// (0x000580b2) list_double_graphic_pane_vc_t2

0x0001,

0xfa7a,	// (0x00058988) list_double_graphic_pane_vc_t_ParamLimits

0xfa7a,	// (0x00058988) list_double_graphic_pane_vc_t

0xed99,	// (0x00057ca7) aid_size_cell_fastswap

0x9684,	// (0x00052592) aid_size_cell_touch_ParamLimits

0x9684,	// (0x00052592) aid_size_cell_touch

0xeef0,	// (0x00057dfe) popup_fast_swap_wide_window_ParamLimits

0xeef0,	// (0x00057dfe) popup_fast_swap_wide_window

0x985e,	// (0x0005276c) touch_pane_ParamLimits

0x985e,	// (0x0005276c) touch_pane

0xa321,	// (0x0005322f) button_value_adjust_pane_cp2

0xe1b7,	// (0x000570c5) button_value_adjust_pane_cp4

0xe1bf,	// (0x000570cd) form_field_data_pane_cp2

0x9262,	// (0x00052170) form_field_data_wide_pane_cp2

0xa7b4,	// (0x000536c2) bg_scroll_pane_ParamLimits

0xa7d3,	// (0x000536e1) scroll_handle_pane_ParamLimits

0x004d,	// (0x00048f5b) scroll_sc2_down_pane_ParamLimits

0x004d,	// (0x00048f5b) scroll_sc2_down_pane

0xa7f9,	// (0x00053707) scroll_sc2_up_pane_ParamLimits

0xa7f9,	// (0x00053707) scroll_sc2_up_pane

0xcfc1,	// (0x00055ecf) grid_wheel_folder_pane_g1_ParamLimits

0xcfc1,	// (0x00055ecf) grid_wheel_folder_pane_g1

0x03a8,	// (0x000492b6) clock_nsta_pane_cp2_ParamLimits

0x03a8,	// (0x000492b6) clock_nsta_pane_cp2

0xab61,	// (0x00053a6f) listscroll_midp_pane_ParamLimits

0xab6d,	// (0x00053a7b) midp_canvas_pane

0x2746,	// (0x0004b654) nsta_clock_indic_pane

0x277f,	// (0x0004b68d) listscroll_form_pane_vc

0x2787,	// (0x0004b695) listscroll_set_pane_vc_ParamLimits

0x2787,	// (0x0004b695) listscroll_set_pane_vc

0xc1e1,	// (0x000550ef) clock_nsta_pane

0xc20b,	// (0x00055119) indicator_nsta_pane

0x2be4,	// (0x0004baf2) bg_popup_sub_pane_cp2_ParamLimits

0x2bf8,	// (0x0004bb06) find_pane_cp2_ParamLimits

0x2bf8,	// (0x0004bb06) find_pane_cp2

0x2c0e,	// (0x0004bb1c) grid_toobar_pane_ParamLimits

0x2cee,	// (0x0004bbfc) list_form_gen_pane_vc_ParamLimits

0x2cee,	// (0x0004bbfc) list_form_gen_pane_vc

0x2d04,	// (0x0004bc12) scroll_pane_cp8_vc_ParamLimits

0x2d04,	// (0x0004bc12) scroll_pane_cp8_vc

0x2d80,	// (0x0004bc8e) data_form_wide_pane_vc_ParamLimits

0x2d80,	// (0x0004bc8e) data_form_wide_pane_vc

0x2d8c,	// (0x0004bc9a) form_field_data_wide_pane_vc_g1

0x2d94,	// (0x0004bca2) form_field_data_wide_pane_vc_t1_ParamLimits

0x2d94,	// (0x0004bca2) form_field_data_wide_pane_vc_t1

0xa335,	// (0x00053243) input_focus_pane_cp6_vc_ParamLimits

0xa335,	// (0x00053243) input_focus_pane_cp6_vc

0x30e1,	// (0x0004bfef) list_midp_pane_ParamLimits

0x43b3,	// (0x0004d2c1) scroll_pane_cp16_ParamLimits

0x43b3,	// (0x0004d2c1) scroll_pane_cp16

0x3123,	// (0x0004c031) button_value_adjust_pane_ParamLimits

0x3123,	// (0x0004c031) button_value_adjust_pane

0xcb9d,	// (0x00055aab) button_value_adjust_pane_cp6_ParamLimits

0xcb9d,	// (0x00055aab) button_value_adjust_pane_cp6

0xccb7,	// (0x00055bc5) settings_code_pane_cp_ParamLimits

0xccb7,	// (0x00055bc5) settings_code_pane_cp

0x967a,	// (0x00052588) cell_touch_pane_g1

0x967a,	// (0x00052588) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0005860c) cell_touch_pane_g

0xce90,	// (0x00055d9e) cell_touch_pane_cp_ParamLimits

0xce90,	// (0x00055d9e) cell_touch_pane_cp

0xceac,	// (0x00055dba) cell_touch_pane_ParamLimits

0xceac,	// (0x00055dba) cell_touch_pane

0x967a,	// (0x00052588) scroll_sc2_down_pane_g1

0x967a,	// (0x00052588) scroll_sc2_up_pane_g1

0x976a,	// (0x00052678) bg_set_opt_pane_cp4_vc

0x4743,	// (0x0004d651) list_set_graphic_pane_vc_g1_ParamLimits

0x4743,	// (0x0004d651) list_set_graphic_pane_vc_g1

0x474f,	// (0x0004d65d) list_set_graphic_pane_vc_g2_ParamLimits

0x474f,	// (0x0004d65d) list_set_graphic_pane_vc_g2

0x0001,

0xf9ee,	// (0x000588fc) list_set_graphic_pane_vc_g_ParamLimits

0xf9ee,	// (0x000588fc) list_set_graphic_pane_vc_g

0x475b,	// (0x0004d669) text_primary_small_cp13_vc_ParamLimits

0x475b,	// (0x0004d669) text_primary_small_cp13_vc

0x4773,	// (0x0004d681) list_set_graphic_pane_vc_ParamLimits

0x4773,	// (0x0004d681) list_set_graphic_pane_vc

0x976a,	// (0x00052678) input_focus_pane_cp2_vc

0x967a,	// (0x00052588) setting_code_pane_vc_g1

0x9aa5,	// (0x000529b3) setting_code_pane_vc_t1

0x4786,	// (0x0004d694) set_text_pane_vc_t1_ParamLimits

0x4786,	// (0x0004d694) set_text_pane_vc_t1

0x976a,	// (0x00052678) input_focus_pane_cp1_vc

0x47a2,	// (0x0004d6b0) list_set_text_pane_vc

0x967a,	// (0x00052588) setting_text_pane_vc_g1

0x976a,	// (0x00052678) bg_set_opt_pane_cp2_vc

0x9a74,	// (0x00052982) setting_slider_graphic_pane_vc_g1

0x47ac,	// (0x0004d6ba) setting_slider_graphic_pane_vc_t1

0x47bc,	// (0x0004d6ca) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f3,	// (0x00058901) setting_slider_graphic_pane_vc_t

0x47cc,	// (0x0004d6da) slider_set_pane_cp_vc

0x47d4,	// (0x0004d6e2) slider_set_pane_vc_g1

0x47dd,	// (0x0004d6eb) slider_set_pane_vc_g2

0x0006,

0xf9f8,	// (0x00058906) slider_set_pane_vc_g

0xa381,	// (0x0005328f) set_opt_bg_pane_g1_copy1

0xa389,	// (0x00053297) set_opt_bg_pane_g2_copy1

0x4809,	// (0x0004d717) set_opt_bg_pane_g3_copy1

0xa399,	// (0x000532a7) set_opt_bg_pane_g4_copy1

0xa3a1,	// (0x000532af) set_opt_bg_pane_g5_copy1

0xa3a9,	// (0x000532b7) set_opt_bg_pane_g6_copy1

0x4811,	// (0x0004d71f) set_opt_bg_pane_g7_copy1

0x4819,	// (0x0004d727) set_opt_bg_pane_g8_copy1

0x4821,	// (0x0004d72f) set_opt_bg_pane_g9_copy1

0x976a,	// (0x00052678) bg_set_opt_pane_cp_vc

0x4829,	// (0x0004d737) setting_slider_pane_vc_t1

0x4838,	// (0x0004d746) setting_slider_pane_vc_t2

0x4848,	// (0x0004d756) setting_slider_pane_vc_t3

0x0002,

0xfa07,	// (0x00058915) setting_slider_pane_vc_t

0x4858,	// (0x0004d766) slider_set_pane_vc

0x0f11,	// (0x00049e1f) volume_set_pane_vc_g1

0x12a8,	// (0x0004a1b6) volume_set_pane_vc_g2

0x12b1,	// (0x0004a1bf) volume_set_pane_vc_g3

0x12ba,	// (0x0004a1c8) volume_set_pane_vc_g4

0x12c3,	// (0x0004a1d1) volume_set_pane_vc_g5

0x12cc,	// (0x0004a1da) volume_set_pane_vc_g6

0x12d5,	// (0x0004a1e3) volume_set_pane_vc_g7

0x12de,	// (0x0004a1ec) volume_set_pane_vc_g8

0x12e7,	// (0x0004a1f5) volume_set_pane_vc_g9

0x12f0,	// (0x0004a1fe) volume_set_pane_vc_g10

0x0009,

0xfa0e,	// (0x0005891c) volume_set_pane_vc_g

0x4860,	// (0x0004d76e) volume_set_pane_vc

0x4868,	// (0x0004d776) button_value_adjust_pane_cp1_vc

0x4872,	// (0x0004d780) list_highlight_pane_cp2_vc

0x487b,	// (0x0004d789) list_set_pane_vc_ParamLimits

0x487b,	// (0x0004d789) list_set_pane_vc

0x48d9,	// (0x0004d7e7) main_pane_set_vc_t1_ParamLimits

0x48d9,	// (0x0004d7e7) main_pane_set_vc_t1

0x48ee,	// (0x0004d7fc) main_pane_set_vc_t2_ParamLimits

0x48ee,	// (0x0004d7fc) main_pane_set_vc_t2

0x4900,	// (0x0004d80e) main_pane_set_vc_t3_ParamLimits

0x4900,	// (0x0004d80e) main_pane_set_vc_t3

0x4912,	// (0x0004d820) main_pane_set_vc_t4_ParamLimits

0x4912,	// (0x0004d820) main_pane_set_vc_t4

0x0003,

0xfa23,	// (0x00058931) main_pane_set_vc_t_ParamLimits

0xfa23,	// (0x00058931) main_pane_set_vc_t

0x4924,	// (0x0004d832) setting_code_pane_vc_ParamLimits

0x4924,	// (0x0004d832) setting_code_pane_vc

0x4933,	// (0x0004d841) setting_slider_graphic_pane_vc

0x4933,	// (0x0004d841) setting_slider_pane_vc

0x4933,	// (0x0004d841) setting_text_pane_vc

0x4933,	// (0x0004d841) setting_volume_pane_vc

0x493b,	// (0x0004d849) scroll_pane_cp121_vc

0xa30f,	// (0x0005321d) set_content_pane_vc

0x4943,	// (0x0004d851) button_value_adjust_pane_g1

0x494c,	// (0x0004d85a) button_value_adjust_pane_g2

0x0001,

0xfa7f,	// (0x0005898d) button_value_adjust_pane_g

0x4955,	// (0x0004d863) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4955,	// (0x0004d863) form_field_slider_wide_pane_vc_t1

0x4969,	// (0x0004d877) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4969,	// (0x0004d877) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa84,	// (0x00058992) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa84,	// (0x00058992) form_field_slider_wide_pane_vc_t

0x99bb,	// (0x000528c9) input_focus_pane_cp10_vc_ParamLimits

0x99bb,	// (0x000528c9) input_focus_pane_cp10_vc

0x4997,	// (0x0004d8a5) slider_cont_pane_cp1_vc_ParamLimits

0x4997,	// (0x0004d8a5) slider_cont_pane_cp1_vc

0x49a9,	// (0x0004d8b7) slider_form_pane_g1_cp2

0x47dd,	// (0x0004d6eb) slider_form_pane_g2_cp2

0x49d6,	// (0x0004d8e4) form_field_slider_pane_vc_t3

0x49e4,	// (0x0004d8f2) form_field_slider_pane_vc_t4

0x49f2,	// (0x0004d900) slider_form_pane_vc_ParamLimits

0x49f2,	// (0x0004d900) slider_form_pane_vc

0x49ff,	// (0x0004d90d) form_field_slider_pane_vc_t1_ParamLimits

0x49ff,	// (0x0004d90d) form_field_slider_pane_vc_t1

0x4969,	// (0x0004d877) form_field_slider_pane_vc_t2_ParamLimits

0x4969,	// (0x0004d877) form_field_slider_pane_vc_t2

0x0001,

0xfa96,	// (0x000589a4) form_field_slider_pane_vc_t_ParamLimits

0xfa96,	// (0x000589a4) form_field_slider_pane_vc_t

0x99bb,	// (0x000528c9) input_focus_pane_cp9_vc_ParamLimits

0x99bb,	// (0x000528c9) input_focus_pane_cp9_vc

0x4a1b,	// (0x0004d929) slider_cont_pane_vc_ParamLimits

0x4a1b,	// (0x0004d929) slider_cont_pane_vc

0x4a2f,	// (0x0004d93d) list_form_graphic_pane_cp_vc_ParamLimits

0x4a2f,	// (0x0004d93d) list_form_graphic_pane_cp_vc

0x2d8c,	// (0x0004bc9a) form_field_popup_wide_pane_vc_g1

0x4a44,	// (0x0004d952) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4a44,	// (0x0004d952) form_field_popup_wide_pane_vc_t1

0xa335,	// (0x00053243) input_focus_pane_cp8_vc_ParamLimits

0xa335,	// (0x00053243) input_focus_pane_cp8_vc

0x4a89,	// (0x0004d997) list_form_wide_pane_vc_ParamLimits

0x4a89,	// (0x0004d997) list_form_wide_pane_vc

0x4a95,	// (0x0004d9a3) list_form_graphic_pane_vc_g1

0x4a9d,	// (0x0004d9ab) list_form_graphic_pane_vc_t1_ParamLimits

0x4a9d,	// (0x0004d9ab) list_form_graphic_pane_vc_t1

0x9a05,	// (0x00052913) list_highlight_pane_cp5_vc_ParamLimits

0x9a05,	// (0x00052913) list_highlight_pane_cp5_vc

0x4ab9,	// (0x0004d9c7) list_form_graphic_pane_vc_ParamLimits

0x4ab9,	// (0x0004d9c7) list_form_graphic_pane_vc

0x2d8c,	// (0x0004bc9a) form_field_popup_pane_vc_g1

0x4acf,	// (0x0004d9dd) form_field_popup_pane_vc_t1_ParamLimits

0x4acf,	// (0x0004d9dd) form_field_popup_pane_vc_t1

0xa335,	// (0x00053243) input_focus_pane_cp7_vc_ParamLimits

0xa335,	// (0x00053243) input_focus_pane_cp7_vc

0x4ae6,	// (0x0004d9f4) list_form_pane_vc_ParamLimits

0x4ae6,	// (0x0004d9f4) list_form_pane_vc

0x4af2,	// (0x0004da00) data_form_pane_vc_t1_ParamLimits

0x4af2,	// (0x0004da00) data_form_pane_vc_t1

0xa381,	// (0x0005328f) input_focus_pane_vc_g1

0xa389,	// (0x00053297) input_focus_pane_vc_g2

0xa391,	// (0x0005329f) input_focus_pane_vc_g3

0xa399,	// (0x000532a7) input_focus_pane_vc_g4

0xa3a1,	// (0x000532af) input_focus_pane_vc_g5

0xa3a9,	// (0x000532b7) input_focus_pane_vc_g6

0xa3b1,	// (0x000532bf) input_focus_pane_vc_g7

0xa3b9,	// (0x000532c7) input_focus_pane_vc_g8

0xa3c1,	// (0x000532cf) input_focus_pane_vc_g9

0x967a,	// (0x00052588) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x00058595) input_focus_pane_vc_g

0x2d80,	// (0x0004bc8e) data_form_pane_vc_ParamLimits

0x2d80,	// (0x0004bc8e) data_form_pane_vc

0x2d8c,	// (0x0004bc9a) form_field_data_pane_vc_g1

0x4b0d,	// (0x0004da1b) form_field_data_pane_vc_t1_ParamLimits

0x4b0d,	// (0x0004da1b) form_field_data_pane_vc_t1

0xa335,	// (0x00053243) input_focus_pane_vc_ParamLimits

0xa335,	// (0x00053243) input_focus_pane_vc

0x4b27,	// (0x0004da35) button_value_adjust_pane_cp3_vc

0x4b2f,	// (0x0004da3d) button_value_adjust_pane_cp5_vc

0x4b37,	// (0x0004da45) form_field_data_pane_vc_ParamLimits

0x4b37,	// (0x0004da45) form_field_data_pane_vc

0x4b4e,	// (0x0004da5c) form_field_data_pane_vc_cp2

0x4b56,	// (0x0004da64) form_field_data_wide_pane_vc_ParamLimits

0x4b56,	// (0x0004da64) form_field_data_wide_pane_vc

0x4b6c,	// (0x0004da7a) form_field_data_wide_pane_vc_cp2

0x4b74,	// (0x0004da82) form_field_popup_pane_vc_ParamLimits

0x4b74,	// (0x0004da82) form_field_popup_pane_vc

0x4b8b,	// (0x0004da99) form_field_popup_wide_pane_vc_ParamLimits

0x4b8b,	// (0x0004da99) form_field_popup_wide_pane_vc

0x4ba1,	// (0x0004daaf) form_field_slider_pane_vc_ParamLimits

0x4ba1,	// (0x0004daaf) form_field_slider_pane_vc

0x4bb4,	// (0x0004dac2) form_field_slider_wide_pane_vc_ParamLimits

0x4bb4,	// (0x0004dac2) form_field_slider_wide_pane_vc

0xcec9,	// (0x00055dd7) grid_touch_1_pane_ParamLimits

0xcec9,	// (0x00055dd7) grid_touch_1_pane

0xcedd,	// (0x00055deb) grid_touch_2_pane_ParamLimits

0xcedd,	// (0x00055deb) grid_touch_2_pane

0x4c8e,	// (0x0004db9c) touch_pane_g1_ParamLimits

0x4c8e,	// (0x0004db9c) touch_pane_g1

0x4beb,	// (0x0004daf9) cell_app_pane_cp_wide_ParamLimits

0x4beb,	// (0x0004daf9) cell_app_pane_cp_wide

0x4bfc,	// (0x0004db0a) grid_popup_fast_wide_pane_ParamLimits

0x4bfc,	// (0x0004db0a) grid_popup_fast_wide_pane

0x4c1c,	// (0x0004db2a) scroll_pane_cp19_ParamLimits

0x4c1c,	// (0x0004db2a) scroll_pane_cp19

0x976a,	// (0x00052678) bg_popup_window_pane_cp20

0x4c30,	// (0x0004db3e) listscroll_popup_fast_wide_pane

0xcf07,	// (0x00055e15) grid_indicator_nsta_pane

0x4c38,	// (0x0004db46) clock_nsta_pane_g1

0x4c41,	// (0x0004db4f) clock_nsta_pane_t1

0xcf15,	// (0x00055e23) cell_indicator_nsta_pane_ParamLimits

0xcf15,	// (0x00055e23) cell_indicator_nsta_pane

0x4c8e,	// (0x0004db9c) cell_indicator_nsta_pane_g1

0xcf2c,	// (0x00055e3a) cell_indicator_nsta_pane_g2

0x0001,

0xfaa7,	// (0x000589b5) cell_indicator_nsta_pane_g

0x4ca9,	// (0x0004dbb7) clock_nsta_pane_cp

0x4cb1,	// (0x0004dbbf) indicator_nsta_pane_cp

0x4cb9,	// (0x0004dbc7) nsta_clock_indic_pane_g1

0x9b87,	// (0x00052a95) grid_indicator_pane

0xa8eb,	// (0x000537f9) scroll_pane_cp29

0x02f7,	// (0x00049205) indicator_nsta_pane_cp2_ParamLimits

0x02f7,	// (0x00049205) indicator_nsta_pane_cp2

0x9a05,	// (0x00052913) main_apps_wheel_pane

0xc5d3,	// (0x000554e1) form_midp_field_text_pane_ParamLimits

0x30ed,	// (0x0004bffb) scroll_bar_cp050_ParamLimits

0x4d09,	// (0x0004dc17) cell_indicator_pane_ParamLimits

0x4d09,	// (0x0004dc17) cell_indicator_pane

0x4d22,	// (0x0004dc30) cell_indicator_pane_g1

0xcf4b,	// (0x00055e59) grid_wheel_folder_pane_ParamLimits

0xcf4b,	// (0x00055e59) grid_wheel_folder_pane

0xcf59,	// (0x00055e67) list_wheel_apps_pane_ParamLimits

0xcf59,	// (0x00055e67) list_wheel_apps_pane

0xcf67,	// (0x00055e75) main_apps_wheel_pane_g1_ParamLimits

0xcf67,	// (0x00055e75) main_apps_wheel_pane_g1

0xcf73,	// (0x00055e81) main_apps_wheel_pane_g2_ParamLimits

0xcf73,	// (0x00055e81) main_apps_wheel_pane_g2

0x0001,

0xfac3,	// (0x000589d1) main_apps_wheel_pane_g_ParamLimits

0xfac3,	// (0x000589d1) main_apps_wheel_pane_g

0xcf81,	// (0x00055e8f) main_apps_wheel_pane_t1_ParamLimits

0xcf81,	// (0x00055e8f) main_apps_wheel_pane_t1

0xcf95,	// (0x00055ea3) list_wheel_apps_pane_g1

0xcf9d,	// (0x00055eab) list_wheel_apps_pane_g2

0xcfa5,	// (0x00055eb3) list_wheel_apps_pane_g3

0xcfad,	// (0x00055ebb) list_wheel_apps_pane_g4

0xcfb7,	// (0x00055ec5) list_wheel_apps_pane_g5

0x0004,

0xfac8,	// (0x000589d6) list_wheel_apps_pane_g

0x052e,	// (0x0004943c) navi_icon_text_pane

0xc0d5,	// (0x00054fe3) aid_fill_nsta

0x4de9,	// (0x0004dcf7) navi_icon_text_pane_g1

0x4df5,	// (0x0004dd03) navi_icon_text_pane_t1

0xe384,	// (0x00057292) list_set_graphic_pane_t1_ParamLimits

0xe384,	// (0x00057292) list_set_graphic_pane_t1

0x3824,	// (0x0004c732) popup_midp_note_alarm_window_t6_ParamLimits

0x3824,	// (0x0004c732) popup_midp_note_alarm_window_t6

0x3836,	// (0x0004c744) popup_midp_note_alarm_window_t7_ParamLimits

0x3836,	// (0x0004c744) popup_midp_note_alarm_window_t7

0x3848,	// (0x0004c756) popup_midp_note_alarm_window_t8_ParamLimits

0x3848,	// (0x0004c756) popup_midp_note_alarm_window_t8

0x385a,	// (0x0004c768) popup_midp_note_alarm_window_t9_ParamLimits

0x385a,	// (0x0004c768) popup_midp_note_alarm_window_t9

0x386c,	// (0x0004c77a) popup_midp_note_alarm_window_t10_ParamLimits

0x386c,	// (0x0004c77a) popup_midp_note_alarm_window_t10

0x387e,	// (0x0004c78c) popup_midp_note_alarm_window_t11_ParamLimits

0x387e,	// (0x0004c78c) popup_midp_note_alarm_window_t11

0xc91f,	// (0x0005582d) scroll_pane_cp17_ParamLimits

0xc91f,	// (0x0005582d) scroll_pane_cp17

0x0f11,	// (0x00049e1f) volume_small_pane_cp_g1

0x137f,	// (0x0004a28d) volume_small_pane_cp_g2

0x1388,	// (0x0004a296) volume_small_pane_cp_g3

0x1391,	// (0x0004a29f) volume_small_pane_cp_g4

0x139a,	// (0x0004a2a8) volume_small_pane_cp_g5

0x12c3,	// (0x0004a1d1) volume_small_pane_cp_g6

0x13a3,	// (0x0004a2b1) volume_small_pane_cp_g7

0x13ac,	// (0x0004a2ba) volume_small_pane_cp_g8

0x13b5,	// (0x0004a2c3) volume_small_pane_cp_g9

0x13be,	// (0x0004a2cc) volume_small_pane_cp_g10

0x252f,	// (0x0004b43d) midp_ticker_pane_g1_ParamLimits

0x253b,	// (0x0004b449) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x00058661) midp_ticker_pane_g_ParamLimits

0x2547,	// (0x0004b455) midp_ticker_pane_t1_ParamLimits

0xc0f9,	// (0x00055007) aid_fill_nsta_2

0x30d9,	// (0x0004bfe7) list_form2_midp_pane

0x41d8,	// (0x0004d0e6) midp_editing_number_pane_ParamLimits

0x41e7,	// (0x0004d0f5) midp_ticker_pane_ParamLimits

0x4e07,	// (0x0004dd15) form2_midp_field_pane

0x4e2b,	// (0x0004dd39) scroll_pane_cp51

0x4e4b,	// (0x0004dd59) form2_midp_button_pane_ParamLimits

0x4e4b,	// (0x0004dd59) form2_midp_button_pane

0x4e5d,	// (0x0004dd6b) form2_midp_content_pane_ParamLimits

0x4e5d,	// (0x0004dd6b) form2_midp_content_pane

0x4e77,	// (0x0004dd85) form2_midp_field_choice_group_pane

0x4e7f,	// (0x0004dd8d) form2_midp_field_pane_g1

0x4e87,	// (0x0004dd95) form2_midp_field_pane_g2

0x4e8f,	// (0x0004dd9d) form2_midp_field_pane_g3

0x4e97,	// (0x0004dda5) form2_midp_field_pane_g4

0x0003,

0xfaed,	// (0x000589fb) form2_midp_field_pane_g

0x4e9f,	// (0x0004ddad) form2_midp_gauge_slider_pane

0x4ea7,	// (0x0004ddb5) form2_midp_gauge_wait_pane

0x4eaf,	// (0x0004ddbd) form2_midp_image_pane_ParamLimits

0x4eaf,	// (0x0004ddbd) form2_midp_image_pane

0xcfea,	// (0x00055ef8) form2_midp_label_pane_ParamLimits

0xcfea,	// (0x00055ef8) form2_midp_label_pane

0xd003,	// (0x00055f11) form2_midp_label_pane_cp_ParamLimits

0xd003,	// (0x00055f11) form2_midp_label_pane_cp

0x4f04,	// (0x0004de12) form2_midp_string_pane_ParamLimits

0x4f04,	// (0x0004de12) form2_midp_string_pane

0x94bf,	// (0x000523cd) form2_midp_text_pane_ParamLimits

0x94bf,	// (0x000523cd) form2_midp_text_pane

0x4f16,	// (0x0004de24) form2_midp_time_pane

0x4f26,	// (0x0004de34) input_focus_pane_cp51_ParamLimits

0x4f26,	// (0x0004de34) input_focus_pane_cp51

0xd022,	// (0x00055f30) form2_midp_label_pane_t1_ParamLimits

0xd022,	// (0x00055f30) form2_midp_label_pane_t1

0x94d8,	// (0x000523e6) form2_mdip_text_pane_t1_ParamLimits

0x94d8,	// (0x000523e6) form2_mdip_text_pane_t1

0xf1ce,	// (0x000580dc) form2_midp_time_pane_t1

0x4f87,	// (0x0004de95) form2_midp_gauge_slider_pane_t1

0xd062,	// (0x00055f70) form2_midp_gauge_slider_pane_t2

0xd074,	// (0x00055f82) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf6,	// (0x00058a04) form2_midp_gauge_slider_pane_t

0x4fbd,	// (0x0004decb) form2_midp_slider_pane

0x4fc9,	// (0x0004ded7) form2_midp_gauge_wait_pane_t1

0x4fd7,	// (0x0004dee5) form2_midp_wait_pane_ParamLimits

0x4fd7,	// (0x0004dee5) form2_midp_wait_pane

0xd086,	// (0x00055f94) list_single_2graphic_pane_cp4_ParamLimits

0xd086,	// (0x00055f94) list_single_2graphic_pane_cp4

0xc52a,	// (0x00055438) list_single_midp_graphic_pane_cp_ParamLimits

0xc52a,	// (0x00055438) list_single_midp_graphic_pane_cp

0x976a,	// (0x00052678) list_highlight_pane_cp20

0x502a,	// (0x0004df38) list_single_2graphic_pane_g1_cp4

0x4627,	// (0x0004d535) list_single_2graphic_pane_g2_cp4

0x5032,	// (0x0004df40) list_single_2graphic_pane_t1_cp4

0x9a05,	// (0x00052913) list_highlight_pane_cp21

0x5041,	// (0x0004df4f) list_single_midp_graphic_pane_g4_cp

0x5050,	// (0x0004df5e) list_single_midp_graphic_pane_t1_cp

0xd09b,	// (0x00055fa9) form2_mdip_string_pane_t1_ParamLimits

0xd09b,	// (0x00055fa9) form2_mdip_string_pane_t1

0x976a,	// (0x00052678) bg_wml_button_pane_cp2

0x967a,	// (0x00052588) form2_midp_image_pane_g1

0xf3af,	// (0x000582bd) list_double_large_graphic_pane_g5_ParamLimits

0xf3af,	// (0x000582bd) list_double_large_graphic_pane_g5

0xab61,	// (0x00053a6f) midp_form_pane_ParamLimits

0x9a05,	// (0x00052913) main_apps_wheel_pane_ParamLimits

0xb327,	// (0x00054235) popup_preview_window_ParamLimits

0xb327,	// (0x00054235) popup_preview_window

0xb5f4,	// (0x00054502) popup_touch_info_window_ParamLimits

0xb5f4,	// (0x00054502) popup_touch_info_window

0xb612,	// (0x00054520) popup_touch_menu_window_ParamLimits

0xb612,	// (0x00054520) popup_touch_menu_window

0x9670,	// (0x0005257e) bg_popup_sub_pane_cp6

0x516c,	// (0x0004e07a) list_touch_menu_pane

0xd111,	// (0x0005601f) list_single_touch_menu_pane_ParamLimits

0xd111,	// (0x0005601f) list_single_touch_menu_pane

0xd125,	// (0x00056033) list_single_touch_menu_pane_t1

0x9a05,	// (0x00052913) bg_popup_sub_pane_cp7_ParamLimits

0x9a05,	// (0x00052913) bg_popup_sub_pane_cp7

0x5198,	// (0x0004e0a6) heading_sub_pane

0x51a0,	// (0x0004e0ae) list_touch_info_pane_ParamLimits

0x51a0,	// (0x0004e0ae) list_touch_info_pane

0x51af,	// (0x0004e0bd) list_single_touch_info_pane_ParamLimits

0x51af,	// (0x0004e0bd) list_single_touch_info_pane

0x51c1,	// (0x0004e0cf) list_single_touch_info_pane_t1

0x51cf,	// (0x0004e0dd) list_single_touch_info_pane_t2

0x0001,

0xfb04,	// (0x00058a12) list_single_touch_info_pane_t

0x244e,	// (0x0004b35c) bg_popup_heading_pane_cp

0x51dd,	// (0x0004e0eb) heading_sub_pane_t1

0x2d1a,	// (0x0004bc28) bg_popup_preview_window_pane_cp_ParamLimits

0x2d1a,	// (0x0004bc28) bg_popup_preview_window_pane_cp

0x5198,	// (0x0004e0a6) heading_preview_pane

0x51a0,	// (0x0004e0ae) list_preview_pane_ParamLimits

0x51a0,	// (0x0004e0ae) list_preview_pane

0x51eb,	// (0x0004e0f9) popup_preview_window_g1

0x51af,	// (0x0004e0bd) list_single_preview_pane_ParamLimits

0x51af,	// (0x0004e0bd) list_single_preview_pane

0x51f3,	// (0x0004e101) list_single_preview_pane_g1

0x51fb,	// (0x0004e109) list_single_preview_pane_t1

0x51c1,	// (0x0004e0cf) list_single_preview_pane_t2

0x0001,

0xfb09,	// (0x00058a17) list_single_preview_pane_t

0x5209,	// (0x0004e117) bg_popup_heading_pane_cp2_ParamLimits

0x5209,	// (0x0004e117) bg_popup_heading_pane_cp2

0x521f,	// (0x0004e12d) heading_preview_pane_g1

0x5227,	// (0x0004e135) heading_preview_pane_t1_ParamLimits

0x5227,	// (0x0004e135) heading_preview_pane_t1

0x9bb4,	// (0x00052ac2) soft_indicator_pane_t1_ParamLimits

0xa24d,	// (0x0005315b) scroll_pane_ParamLimits

0xa7e7,	// (0x000536f5) scroll_sc2_left_pane

0xa7f0,	// (0x000536fe) scroll_sc2_right_pane

0xa80f,	// (0x0005371d) scroll_bg_pane_g1_ParamLimits

0xa824,	// (0x00053732) scroll_bg_pane_g2_ParamLimits

0xa83c,	// (0x0005374a) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x000585ec) scroll_bg_pane_g_ParamLimits

0xa80f,	// (0x0005371d) scroll_handle_pane_g1_ParamLimits

0xa85e,	// (0x0005376c) scroll_handle_pane_g2_ParamLimits

0xa83c,	// (0x0005374a) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x000585f3) scroll_handle_pane_g_ParamLimits

0xaece,	// (0x00053ddc) popup_choice_list_window_ParamLimits

0xaece,	// (0x00053ddc) popup_choice_list_window

0x2bf0,	// (0x0004bafe) choice_list_pane

0x2c72,	// (0x0004bb80) cell_toolbar_pane_t1

0x2c9a,	// (0x0004bba8) toolbar_button_pane_ParamLimits

0x3d4a,	// (0x0004cc58) ai_gene_pane_1_t2_ParamLimits

0x3d4a,	// (0x0004cc58) ai_gene_pane_1_t2

0x0001,

0xf901,	// (0x0005880f) ai_gene_pane_1_t_ParamLimits

0xf901,	// (0x0005880f) ai_gene_pane_1_t

0x5244,	// (0x0004e152) scroll_sc2_left_pane_g1

0x5244,	// (0x0004e152) scroll_sc2_right_pane_g1

0x2799,	// (0x0004b6a7) bg_popup_sub_pane_cp10

0x524e,	// (0x0004e15c) list_choice_list_pane

0xd133,	// (0x00056041) list_single_choice_list_pane_ParamLimits

0xd133,	// (0x00056041) list_single_choice_list_pane

0xd147,	// (0x00056055) list_single_choice_list_pane_g1

0xa4b8,	// (0x000533c6) list_single_choice_list_pane_t1_ParamLimits

0xa4b8,	// (0x000533c6) list_single_choice_list_pane_t1

0x5282,	// (0x0004e190) choice_list_pane_g1

0xd14f,	// (0x0005605d) choice_list_pane_t1

0x9670,	// (0x0005257e) input_focus_pane_cp11

0xa672,	// (0x00053580) title_pane_stacon_g2_ParamLimits

0xa672,	// (0x00053580) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x000585d2) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x000585d2) title_pane_stacon_g

0x244e,	// (0x0004b35c) cursor_press_pane

0xaf75,	// (0x00053e83) popup_fep_hwr_window_ParamLimits

0xaf75,	// (0x00053e83) popup_fep_hwr_window

0x095c,	// (0x0004986a) popup_fep_vkb_window_ParamLimits

0x095c,	// (0x0004986a) popup_fep_vkb_window

0xd15d,	// (0x0005606b) cursor_press_pane_g1

0x0002,

0xfb32,	// (0x00058a40) fep_vkb_side_pane_g_ParamLimits

0x1400,	// (0x0004a30e) fep_hwr_candidate_pane_ParamLimits

0x1400,	// (0x0004a30e) fep_hwr_candidate_pane

0x142a,	// (0x0004a338) fep_hwr_side_pane_ParamLimits

0x142a,	// (0x0004a338) fep_hwr_side_pane

0x144a,	// (0x0004a358) fep_hwr_top_pane_ParamLimits

0x144a,	// (0x0004a358) fep_hwr_top_pane

0x1462,	// (0x0004a370) fep_hwr_write_pane_ParamLimits

0x1462,	// (0x0004a370) fep_hwr_write_pane

0xfb32,	// (0x00058a40) fep_vkb_side_pane_g

0x52a0,	// (0x0004e1ae) fep_hwr_top_pane_g1

0x52b2,	// (0x0004e1c0) fep_hwr_top_pane_g2

0x148e,	// (0x0004a39c) fep_hwr_top_pane_g3

0x0002,

0xfb0e,	// (0x00058a1c) fep_hwr_top_pane_g

0x14a3,	// (0x0004a3b1) fep_hwr_top_text_pane

0xc012,	// (0x00054f20) fep_hwr_top_text_pane_g1

0x52e8,	// (0x0004e1f6) fep_hwr_top_text_pane_t1

0x1599,	// (0x0004a4a7) fep_hwr_candidate_pane_g1

0x552d,	// (0x0004e43b) fep_vkb_keypad_pane_g3_ParamLimits

0x552d,	// (0x0004e43b) fep_vkb_keypad_pane_g3

0x5555,	// (0x0004e463) fep_vkb_keypad_pane_g4_ParamLimits

0x5555,	// (0x0004e463) fep_vkb_keypad_pane_g4

0x55c4,	// (0x0004e4d2) fep_vkb_bottom_pane_g2_ParamLimits

0x55c4,	// (0x0004e4d2) fep_vkb_bottom_pane_g2

0x0001,

0xfb39,	// (0x00058a47) fep_vkb_bottom_pane_g_ParamLimits

0xfb39,	// (0x00058a47) fep_vkb_bottom_pane_g

0x5244,	// (0x0004e152) cell_vkb_side_pane_g2

0x0001,

0xfb43,	// (0x00058a51) cell_vkb_side_pane_g

0x564f,	// (0x0004e55d) cell_vkb_side_pane_t1

0x565d,	// (0x0004e56b) cell_vkb_side_pane_t1_copy1

0x5244,	// (0x0004e152) bg_fep_vkb_candidate_pane_g2

0x5789,	// (0x0004e697) cell_vkb_candidate_pane_ParamLimits

0x52f6,	// (0x0004e204) aid_size_cell_vkb_ParamLimits

0x52f6,	// (0x0004e204) aid_size_cell_vkb

0x5789,	// (0x0004e697) cell_vkb_candidate_pane

0x15b3,	// (0x0004a4c1) bg_popup_fep_shadow_pane_g1

0xd19f,	// (0x000560ad) fep_vkb_bottom_pane_ParamLimits

0xd19f,	// (0x000560ad) fep_vkb_bottom_pane

0x53ba,	// (0x0004e2c8) fep_vkb_candidate_pane_ParamLimits

0x53ba,	// (0x0004e2c8) fep_vkb_candidate_pane

0xd1c4,	// (0x000560d2) fep_vkb_keypad_pane_ParamLimits

0xd1c4,	// (0x000560d2) fep_vkb_keypad_pane

0xd1f9,	// (0x00056107) fep_vkb_side_pane_ParamLimits

0xd1f9,	// (0x00056107) fep_vkb_side_pane

0xd235,	// (0x00056143) fep_vkb_top_pane_ParamLimits

0xd235,	// (0x00056143) fep_vkb_top_pane

0x5486,	// (0x0004e394) fep_vkb_top_pane_g1_ParamLimits

0x5486,	// (0x0004e394) fep_vkb_top_pane_g1

0x5495,	// (0x0004e3a3) fep_vkb_top_pane_g2_ParamLimits

0x5495,	// (0x0004e3a3) fep_vkb_top_pane_g2

0x54a4,	// (0x0004e3b2) fep_vkb_top_pane_g3_ParamLimits

0x54a4,	// (0x0004e3b2) fep_vkb_top_pane_g3

0x0003,

0xfb29,	// (0x00058a37) fep_vkb_top_pane_g_ParamLimits

0xfb29,	// (0x00058a37) fep_vkb_top_pane_g

0x54c2,	// (0x0004e3d0) fep_vkb_top_text_pane_ParamLimits

0x54c2,	// (0x0004e3d0) fep_vkb_top_text_pane

0xd26a,	// (0x00056178) fep_vkb_side_pane_g1_ParamLimits

0xd26a,	// (0x00056178) fep_vkb_side_pane_g1

0x551c,	// (0x0004e42a) grid_vkb_side_pane_ParamLimits

0x551c,	// (0x0004e42a) grid_vkb_side_pane

0x15bb,	// (0x0004a4c9) bg_popup_fep_shadow_pane_g2

0x15c4,	// (0x0004a4d2) bg_popup_fep_shadow_pane_g3

0x15cc,	// (0x0004a4da) bg_popup_fep_shadow_pane_g4

0x15d5,	// (0x0004a4e3) bg_popup_fep_shadow_pane_g5

0x15df,	// (0x0004a4ed) bg_popup_fep_shadow_pane_g6

0x15e7,	// (0x0004a4f5) bg_popup_fep_shadow_pane_g7

0xa3a1,	// (0x000532af) bg_popup_fep_shadow_pane_g8

0x5573,	// (0x0004e481) grid_vkb_keypad_number_pane_ParamLimits

0x5573,	// (0x0004e481) grid_vkb_keypad_number_pane

0x5583,	// (0x0004e491) grid_vkb_keypad_pane_ParamLimits

0x5583,	// (0x0004e491) grid_vkb_keypad_pane

0x55a9,	// (0x0004e4b7) fep_vkb_bottom_pane_g1_ParamLimits

0x55a9,	// (0x0004e4b7) fep_vkb_bottom_pane_g1

0x55d2,	// (0x0004e4e0) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x55d2,	// (0x0004e4e0) grid_vkb_keypad_bottom_left_pane

0x55e7,	// (0x0004e4f5) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x55e7,	// (0x0004e4f5) grid_vkb_keypad_bottom_right_pane

0x55fc,	// (0x0004e50a) fep_vkb_top_text_pane_g1

0xd2b1,	// (0x000561bf) fep_vkb_top_text_pane_t1

0xd2c3,	// (0x000561d1) cell_vkb_side_pane_ParamLimits

0xd2c3,	// (0x000561d1) cell_vkb_side_pane

0x5244,	// (0x0004e152) cell_vkb_side_pane_g1

0x566b,	// (0x0004e579) cell_vkb_keypad_pane_ParamLimits

0x566b,	// (0x0004e579) cell_vkb_keypad_pane

0x56e0,	// (0x0004e5ee) cell_vkb_keypad_pane_g1

0x0008,

0xfb56,	// (0x00058a64) bg_popup_fep_shadow_pane_g

0x5244,	// (0x0004e152) cell_hwr_side_pane_g1

0x5244,	// (0x0004e152) cell_hwr_side_pane_g2

0x56ea,	// (0x0004e5f8) cell_vkb_keypad_pane_t1

0xd2d9,	// (0x000561e7) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd2d9,	// (0x000561e7) cell_vkb_keypad_bottom_left_pane

0xd2ee,	// (0x000561fc) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd2ee,	// (0x000561fc) cell_vkb_keypad_bottom_right_pane

0x5244,	// (0x0004e152) cell_vkb_keypad_bottom_left_pane_g1

0x5244,	// (0x0004e152) cell_vkb_keypad_bottom_right_pane_g1

0x574e,	// (0x0004e65c) cell_vkb_keypad_number_pane_ParamLimits

0x574e,	// (0x0004e65c) cell_vkb_keypad_number_pane

0x576d,	// (0x0004e67b) cell_vkb_keypad_number_pane_g1

0x5777,	// (0x0004e685) cell_vkb_keypad_number_pane_g2

0x5780,	// (0x0004e68e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb48,	// (0x00058a56) cell_vkb_keypad_number_pane_g

0x56ea,	// (0x0004e5f8) cell_vkb_keypad_number_pane_t1

0x57a4,	// (0x0004e6b2) fep_vkb_candidate_pane_g1

0x0001,

0xfb43,	// (0x00058a51) cell_hwr_side_pane_g

0x57bd,	// (0x0004e6cb) cell_hwr_side_pane_t1

0x15f9,	// (0x0004a507) cell_hwr_side_pane_t1_copy1

0x54b4,	// (0x0004e3c2) cell_hwr_candidate_pane_g1

0x1607,	// (0x0004a515) cell_hwr_candidate_pane_t1

0x5244,	// (0x0004e152) cell_vkb_candidate_pane_g2

0x5843,	// (0x0004e751) cell_vkb_candidate_pane_t1

0x13c7,	// (0x0004a2d5) bg_popup_fep_shadow_pane_ParamLimits

0x13c7,	// (0x0004a2d5) bg_popup_fep_shadow_pane

0xd165,	// (0x00056073) bg_fep_hwr_top_pane_g4

0x52c4,	// (0x0004e1d2) bg_hwr_side_pane_g1_ParamLimits

0x52c4,	// (0x0004e1d2) bg_hwr_side_pane_g1

0xb84e,	// (0x0005475c) cell_hwr_side_pane_ParamLimits

0xb84e,	// (0x0005475c) cell_hwr_side_pane

0x151a,	// (0x0004a428) fep_hwr_write_pane_g1_ParamLimits

0x151a,	// (0x0004a428) fep_hwr_write_pane_g1

0x1527,	// (0x0004a435) fep_hwr_write_pane_g2_ParamLimits

0x1527,	// (0x0004a435) fep_hwr_write_pane_g2

0x1534,	// (0x0004a442) fep_hwr_write_pane_g3_ParamLimits

0x1534,	// (0x0004a442) fep_hwr_write_pane_g3

0xb86e,	// (0x0005477c) fep_hwr_write_pane_g4_ParamLimits

0xb86e,	// (0x0005477c) fep_hwr_write_pane_g4

0x0005,

0xfb15,	// (0x00058a23) fep_hwr_write_pane_g_ParamLimits

0xfb15,	// (0x00058a23) fep_hwr_write_pane_g

0xd165,	// (0x00056073) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd165,	// (0x00056073) bg_fep_hwr_candidate_pane_g2

0x1557,	// (0x0004a465) cell_hwr_candidate_pane_ParamLimits

0x1557,	// (0x0004a465) cell_hwr_candidate_pane

0x1599,	// (0x0004a4a7) fep_hwr_candidate_pane_g1_ParamLimits

0x5324,	// (0x0004e232) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5324,	// (0x0004e232) bg_popup_fep_shadow_pane_cp2

0x54b4,	// (0x0004e3c2) fep_vkb_top_pane_g4_ParamLimits

0x54b4,	// (0x0004e3c2) fep_vkb_top_pane_g4

0x54fa,	// (0x0004e408) fep_vkb_side_pane_g2_ParamLimits

0x54fa,	// (0x0004e408) fep_vkb_side_pane_g2

0x9170,	// (0x0005207e) list_setting_pane_t4_ParamLimits

0x9170,	// (0x0005207e) list_setting_pane_t4

0x920a,	// (0x00052118) list_setting_number_pane_t5_ParamLimits

0x920a,	// (0x00052118) list_setting_number_pane_t5

0xc049,	// (0x00054f57) list_double_heading_pane_cp2_ParamLimits

0xc049,	// (0x00054f57) list_double_heading_pane_cp2

0x4c10,	// (0x0004db1e) list_double_heading_pane_g1_cp2_ParamLimits

0x4c10,	// (0x0004db1e) list_double_heading_pane_g1_cp2

0x5851,	// (0x0004e75f) list_double_heading_pane_g2_cp2_ParamLimits

0x5851,	// (0x0004e75f) list_double_heading_pane_g2_cp2

0x5865,	// (0x0004e773) list_double_heading_pane_t1_cp2_ParamLimits

0x5865,	// (0x0004e773) list_double_heading_pane_t1_cp2

0x587b,	// (0x0004e789) list_double_heading_pane_t2_cp2_ParamLimits

0x587b,	// (0x0004e789) list_double_heading_pane_t2_cp2

0x9658,	// (0x00052566) aid_value_unit2

0xef06,	// (0x00057e14) popup_preview_fixed_window

0x9d6f,	// (0x00052c7d) bg_popup_preview_window_pane_cp02

0x588d,	// (0x0004e79b) list_preview_fixed_pane

0x58d3,	// (0x0004e7e1) list_empty_pane_fp_ParamLimits

0x58d3,	// (0x0004e7e1) list_empty_pane_fp

0x58d3,	// (0x0004e7e1) list_single_cale_day_pane_fp_ParamLimits

0x58d3,	// (0x0004e7e1) list_single_cale_day_pane_fp

0x58d3,	// (0x0004e7e1) list_single_graphic_heading_pane_fp_ParamLimits

0x58d3,	// (0x0004e7e1) list_single_graphic_heading_pane_fp

0x58d3,	// (0x0004e7e1) list_single_graphic_pane_fp_ParamLimits

0x58d3,	// (0x0004e7e1) list_single_graphic_pane_fp

0x58d3,	// (0x0004e7e1) list_single_heading_pane_fp_ParamLimits

0x58d3,	// (0x0004e7e1) list_single_heading_pane_fp

0x58d3,	// (0x0004e7e1) list_single_pane_fp_ParamLimits

0x58d3,	// (0x0004e7e1) list_single_pane_fp

0x58e9,	// (0x0004e7f7) list_single_pane_fp_g1_ParamLimits

0x58e9,	// (0x0004e7f7) list_single_pane_fp_g1

0x58f5,	// (0x0004e803) list_single_pane_fp_g2_ParamLimits

0x58f5,	// (0x0004e803) list_single_pane_fp_g2

0x5901,	// (0x0004e80f) list_single_pane_fp_g3_ParamLimits

0x5901,	// (0x0004e80f) list_single_pane_fp_g3

0x5915,	// (0x0004e823) list_single_pane_fp_g4_ParamLimits

0x5915,	// (0x0004e823) list_single_pane_fp_g4

0x0003,

0xfb77,	// (0x00058a85) list_single_pane_fp_g_ParamLimits

0xfb77,	// (0x00058a85) list_single_pane_fp_g

0xf1e1,	// (0x000580ef) list_single_pane_fp_t1_ParamLimits

0xf1e1,	// (0x000580ef) list_single_pane_fp_t1

0xf1f8,	// (0x00058106) list_single_graphic_pane_fp_g1_ParamLimits

0xf1f8,	// (0x00058106) list_single_graphic_pane_fp_g1

0x58e9,	// (0x0004e7f7) list_single_graphic_pane_fp_g2_ParamLimits

0x58e9,	// (0x0004e7f7) list_single_graphic_pane_fp_g2

0x58f5,	// (0x0004e803) list_single_graphic_pane_fp_g3_ParamLimits

0x58f5,	// (0x0004e803) list_single_graphic_pane_fp_g3

0x5901,	// (0x0004e80f) list_single_graphic_pane_fp_g4_ParamLimits

0x5901,	// (0x0004e80f) list_single_graphic_pane_fp_g4

0x5915,	// (0x0004e823) list_single_graphic_pane_fp_g5_ParamLimits

0x5915,	// (0x0004e823) list_single_graphic_pane_fp_g5

0x0004,

0xfb80,	// (0x00058a8e) list_single_graphic_pane_fp_g_ParamLimits

0xfb80,	// (0x00058a8e) list_single_graphic_pane_fp_g

0xf204,	// (0x00058112) list_single_graphic_pane_fp_t1_ParamLimits

0xf204,	// (0x00058112) list_single_graphic_pane_fp_t1

0xf1f8,	// (0x00058106) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf1f8,	// (0x00058106) list_single_graphic_heading_pane_fp_g1

0x58e9,	// (0x0004e7f7) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x58e9,	// (0x0004e7f7) list_single_graphic_heading_pane_fp_g2

0x58f5,	// (0x0004e803) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x58f5,	// (0x0004e803) list_single_graphic_heading_pane_fp_g3

0x5901,	// (0x0004e80f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5901,	// (0x0004e80f) list_single_graphic_heading_pane_fp_g4

0x5915,	// (0x0004e823) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5915,	// (0x0004e823) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb80,	// (0x00058a8e) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb80,	// (0x00058a8e) list_single_graphic_heading_pane_fp_g

0xf21a,	// (0x00058128) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf21a,	// (0x00058128) list_single_graphic_heading_pane_fp_t1

0xf230,	// (0x0005813e) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf230,	// (0x0005813e) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8b,	// (0x00058a99) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8b,	// (0x00058a99) list_single_graphic_heading_pane_fp_t

0xf242,	// (0x00058150) list_single_cale_day_pane_fp_g1_ParamLimits

0xf242,	// (0x00058150) list_single_cale_day_pane_fp_g1

0x5921,	// (0x0004e82f) list_single_cale_day_pane_fp_g2_ParamLimits

0x5921,	// (0x0004e82f) list_single_cale_day_pane_fp_g2

0x1625,	// (0x0004a533) list_single_cale_day_pane_fp_g3_ParamLimits

0x1625,	// (0x0004a533) list_single_cale_day_pane_fp_g3

0x164d,	// (0x0004a55b) list_single_cale_day_pane_fp_g4_ParamLimits

0x164d,	// (0x0004a55b) list_single_cale_day_pane_fp_g4

0x1671,	// (0x0004a57f) list_single_cale_day_pane_fp_g5_ParamLimits

0x1671,	// (0x0004a57f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb90,	// (0x00058a9e) list_single_cale_day_pane_fp_g_ParamLimits

0xfb90,	// (0x00058a9e) list_single_cale_day_pane_fp_g

0xf27a,	// (0x00058188) list_single_cale_day_pane_fp_t1_ParamLimits

0xf27a,	// (0x00058188) list_single_cale_day_pane_fp_t1

0xf2a0,	// (0x000581ae) list_single_cale_day_pane_fp_t2_ParamLimits

0xf2a0,	// (0x000581ae) list_single_cale_day_pane_fp_t2

0xf2b9,	// (0x000581c7) list_single_cale_day_pane_fp_t3_ParamLimits

0xf2b9,	// (0x000581c7) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9b,	// (0x00058aa9) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9b,	// (0x00058aa9) list_single_cale_day_pane_fp_t

0x58e9,	// (0x0004e7f7) list_empty_pane_fp_g1_ParamLimits

0x58e9,	// (0x0004e7f7) list_empty_pane_fp_g1

0xf2d2,	// (0x000581e0) list_empty_pane_fp_t1

0xf2e0,	// (0x000581ee) list_empty_pane_fp_t2

0x0001,

0xfba2,	// (0x00058ab0) list_empty_pane_fp_t

0x58e9,	// (0x0004e7f7) list_single_heading_pane_fp_g1_ParamLimits

0x58e9,	// (0x0004e7f7) list_single_heading_pane_fp_g1

0x58f5,	// (0x0004e803) list_single_heading_pane_fp_g2_ParamLimits

0x58f5,	// (0x0004e803) list_single_heading_pane_fp_g2

0x5901,	// (0x0004e80f) list_single_heading_pane_fp_g3_ParamLimits

0x5901,	// (0x0004e80f) list_single_heading_pane_fp_g3

0x0002,

0xfba7,	// (0x00058ab5) list_single_heading_pane_fp_g_ParamLimits

0xfba7,	// (0x00058ab5) list_single_heading_pane_fp_g

0xf2ee,	// (0x000581fc) list_single_heading_pane_fp_t1_ParamLimits

0xf2ee,	// (0x000581fc) list_single_heading_pane_fp_t1

0xf300,	// (0x0005820e) list_single_heading_pane_fp_t2_ParamLimits

0xf300,	// (0x0005820e) list_single_heading_pane_fp_t2

0x0001,

0xfbae,	// (0x00058abc) list_single_heading_pane_fp_t_ParamLimits

0xfbae,	// (0x00058abc) list_single_heading_pane_fp_t

0xa50c,	// (0x0005341a) aid_size_cell_fast

0x9cef,	// (0x00052bfd) soft_indicator_pane_cp1_t1

0xa546,	// (0x00053454) cell_app_pane_cp2_ParamLimits

0xa546,	// (0x00053454) cell_app_pane_cp2

0x13e9,	// (0x0004a2f7) fep_hwr_candidate_drop_down_list_pane

0xd173,	// (0x00056081) fep_hwr_candidate_pane_g3_ParamLimits

0xd173,	// (0x00056081) fep_hwr_candidate_pane_g3

0xd180,	// (0x0005608e) fep_hwr_candidate_pane_g4_ParamLimits

0xd180,	// (0x0005608e) fep_hwr_candidate_pane_g4

0x0002,

0xfb22,	// (0x00058a30) fep_hwr_candidate_pane_g_ParamLimits

0xfb22,	// (0x00058a30) fep_hwr_candidate_pane_g

0x53a9,	// (0x0004e2b7) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x53a9,	// (0x0004e2b7) fep_vkb_candidate_drop_down_list_pane

0x57ac,	// (0x0004e6ba) fep_vkb_candidate_pane_g3

0x57b4,	// (0x0004e6c2) fep_vkb_candidate_pane_g4

0x0002,

0xfb4f,	// (0x00058a5d) fep_vkb_candidate_pane_g

0x54b4,	// (0x0004e3c2) cell_hwr_candidate_pane_g1_ParamLimits

0x57cb,	// (0x0004e6d9) cell_hwr_candidate_pane_g3_ParamLimits

0x57cb,	// (0x0004e6d9) cell_hwr_candidate_pane_g3

0x57ec,	// (0x0004e6fa) cell_hwr_candidate_pane_g4_ParamLimits

0x57ec,	// (0x0004e6fa) cell_hwr_candidate_pane_g4

0x0002,

0xfb69,	// (0x00058a77) cell_hwr_candidate_pane_g_ParamLimits

0xfb69,	// (0x00058a77) cell_hwr_candidate_pane_g

0x580d,	// (0x0004e71b) cell_vkb_candidate_pane_g3_ParamLimits

0x580d,	// (0x0004e71b) cell_vkb_candidate_pane_g3

0x5828,	// (0x0004e736) cell_vkb_candidate_pane_g4_ParamLimits

0x5828,	// (0x0004e736) cell_vkb_candidate_pane_g4

0xd309,	// (0x00056217) cell_app_pane_cp2_g1_ParamLimits

0xd309,	// (0x00056217) cell_app_pane_cp2_g1

0x594b,	// (0x0004e859) cell_app_pane_cp2_g2_ParamLimits

0x594b,	// (0x0004e859) cell_app_pane_cp2_g2

0x0001,

0xfbb3,	// (0x00058ac1) cell_app_pane_cp2_g_ParamLimits

0xfbb3,	// (0x00058ac1) cell_app_pane_cp2_g

0x5957,	// (0x0004e865) cell_app_pane_cp2_t1_ParamLimits

0x5957,	// (0x0004e865) cell_app_pane_cp2_t1

0xa335,	// (0x00053243) grid_highlight_pane_cp1_ParamLimits

0xa335,	// (0x00053243) grid_highlight_pane_cp1

0x1695,	// (0x0004a5a3) cell_hwr_candidate_pane_cp1_ParamLimits

0x1695,	// (0x0004a5a3) cell_hwr_candidate_pane_cp1

0x54b4,	// (0x0004e3c2) fep_hwr_candidate_drop_down_list_pane_g1

0x5969,	// (0x0004e877) fep_hwr_candidate_drop_down_list_pane_g2

0x5976,	// (0x0004e884) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x00058ac6) fep_hwr_candidate_drop_down_list_pane_g

0x16b4,	// (0x0004a5c2) fep_hwr_candidate_drop_down_list_scroll_pane

0x16bd,	// (0x0004a5cb) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x16bd,	// (0x0004a5cb) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x16ca,	// (0x0004a5d8) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x16ca,	// (0x0004a5d8) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x16d7,	// (0x0004a5e5) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x16d7,	// (0x0004a5e5) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x580d,	// (0x0004e71b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x580d,	// (0x0004e71b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5828,	// (0x0004e736) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5828,	// (0x0004e736) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x16e4,	// (0x0004a5f2) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x16e4,	// (0x0004a5f2) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x16ff,	// (0x0004a60d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x16ff,	// (0x0004a60d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x171a,	// (0x0004a628) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x171a,	// (0x0004a628) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbf,	// (0x00058acd) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbf,	// (0x00058acd) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5983,	// (0x0004e891) cell_vkb_candidate_pane_cp1_ParamLimits

0x5983,	// (0x0004e891) cell_vkb_candidate_pane_cp1

0x54b4,	// (0x0004e3c2) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x54b4,	// (0x0004e3c2) fep_vkb_candidate_drop_down_list_pane_g1

0x5969,	// (0x0004e877) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5969,	// (0x0004e877) fep_vkb_candidate_drop_down_list_pane_g2

0x5976,	// (0x0004e884) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5976,	// (0x0004e884) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x00058ac6) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb8,	// (0x00058ac6) fep_vkb_candidate_drop_down_list_pane_g

0x59a3,	// (0x0004e8b1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x59a3,	// (0x0004e8b1) fep_vkb_candidate_drop_down_list_scroll_pane

0x59b0,	// (0x0004e8be) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x59b0,	// (0x0004e8be) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x59bd,	// (0x0004e8cb) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x59bd,	// (0x0004e8cb) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x59c9,	// (0x0004e8d7) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x59c9,	// (0x0004e8d7) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x57cb,	// (0x0004e6d9) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x57cb,	// (0x0004e6d9) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x57ec,	// (0x0004e6fa) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x57ec,	// (0x0004e6fa) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x59d5,	// (0x0004e8e3) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x59d5,	// (0x0004e8e3) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x59f6,	// (0x0004e904) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x59f6,	// (0x0004e904) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5a17,	// (0x0004e925) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5a17,	// (0x0004e925) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd0,	// (0x00058ade) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd0,	// (0x00058ade) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x98b4,	// (0x000527c2) title_pane_g1_ParamLimits

0x98c7,	// (0x000527d5) title_pane_g2_ParamLimits

0xf54e,	// (0x0005845c) title_pane_g_ParamLimits

0xc002,	// (0x00054f10) aid_call2_pane

0xc00a,	// (0x00054f18) aid_call_pane

0xc012,	// (0x00054f20) popup_clock_analogue_window_g1

0xc012,	// (0x00054f20) popup_clock_analogue_window_g2

0x00fb,	// (0x00049009) popup_clock_analogue_window_g3

0x0104,	// (0x00049012) popup_clock_analogue_window_g4

0x967a,	// (0x00052588) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x00058601) popup_clock_analogue_window_g

0x010c,	// (0x0004901a) popup_clock_analogue_window_t1

0x0144,	// (0x00049052) clock_digital_number_pane_ParamLimits

0x0144,	// (0x00049052) clock_digital_number_pane

0x0150,	// (0x0004905e) clock_digital_number_pane_cp02_ParamLimits

0x0150,	// (0x0004905e) clock_digital_number_pane_cp02

0x015c,	// (0x0004906a) clock_digital_number_pane_cp03_ParamLimits

0x015c,	// (0x0004906a) clock_digital_number_pane_cp03

0x0168,	// (0x00049076) clock_digital_number_pane_cp04_ParamLimits

0x0168,	// (0x00049076) clock_digital_number_pane_cp04

0x0174,	// (0x00049082) clock_digital_separator_pane_ParamLimits

0x0174,	// (0x00049082) clock_digital_separator_pane

0x0180,	// (0x0004908e) popup_clock_digital_window_t1_ParamLimits

0x0180,	// (0x0004908e) popup_clock_digital_window_t1

0x967a,	// (0x00052588) clock_digital_number_pane_g1

0x967a,	// (0x00052588) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0005860c) clock_digital_number_pane_g

0x967a,	// (0x00052588) clock_digital_separator_pane_g1

0x967a,	// (0x00052588) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0005860c) clock_digital_separator_pane_g

0xc0d5,	// (0x00054fe3) aid_fill_nsta_ParamLimits

0xc20b,	// (0x00055119) indicator_nsta_pane_ParamLimits

0x2a80,	// (0x0004b98e) popup_clock_analogue_window

0x2a80,	// (0x0004b98e) popup_clock_digital_window

0xcf07,	// (0x00055e15) grid_indicator_nsta_pane_ParamLimits

0x4c4f,	// (0x0004db5d) clock_nsta_pane_t2

0x0001,

0xfaa2,	// (0x000589b0) clock_nsta_pane_t

0x0026,	// (0x00048f34) aid_size_max_handle

0xa7ab,	// (0x000536b9) aid_size_min_handle

0x244e,	// (0x0004b35c) editor_scroll_pane

0x5a32,	// (0x0004e940) ex_editor_pane

0xa494,	// (0x000533a2) scroll_pane_cp13

0xa279,	// (0x00053187) scroll_pane_cp14

0xc041,	// (0x00054f4f) scroll_pane_cp36

0xa97d,	// (0x0005388b) list_single_graphic_hl_pane_cp2_ParamLimits

0xa97d,	// (0x0005388b) list_single_graphic_hl_pane_cp2

0xccf3,	// (0x00055c01) list_single_graphic_hl_pane_ParamLimits

0xccf3,	// (0x00055c01) list_single_graphic_hl_pane

0x94f2,	// (0x00052400) aid_size_min_hl_cp1

0x5a3a,	// (0x0004e948) list_highlight_pane_cp34_ParamLimits

0x5a3a,	// (0x0004e948) list_highlight_pane_cp34

0x5a4b,	// (0x0004e959) list_single_graphic_hl_pane_g1_ParamLimits

0x5a4b,	// (0x0004e959) list_single_graphic_hl_pane_g1

0x94fb,	// (0x00052409) list_single_graphic_hl_pane_g2_ParamLimits

0x94fb,	// (0x00052409) list_single_graphic_hl_pane_g2

0x94fb,	// (0x00052409) list_single_graphic_hl_pane_g3_ParamLimits

0x94fb,	// (0x00052409) list_single_graphic_hl_pane_g3

0x05e7,	// (0x000494f5) list_single_graphic_hl_pane_g4_ParamLimits

0x05e7,	// (0x000494f5) list_single_graphic_hl_pane_g4

0x5a88,	// (0x0004e996) list_single_graphic_hl_pane_g5_ParamLimits

0x5a88,	// (0x0004e996) list_single_graphic_hl_pane_g5

0x0004,

0xfbe1,	// (0x00058aef) list_single_graphic_hl_pane_g_ParamLimits

0xfbe1,	// (0x00058aef) list_single_graphic_hl_pane_g

0x9507,	// (0x00052415) list_single_graphic_hl_pane_t1_ParamLimits

0x9507,	// (0x00052415) list_single_graphic_hl_pane_t1

0x5a58,	// (0x0004e966) aid_size_min_hl_cp2

0x5a61,	// (0x0004e96f) list_highlight_pane_cp34_cp2_ParamLimits

0x5a61,	// (0x0004e96f) list_highlight_pane_cp34_cp2

0x5a4b,	// (0x0004e959) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5a4b,	// (0x0004e959) list_single_graphic_hl_pane_g1_cp2

0x5a6e,	// (0x0004e97c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5a6e,	// (0x0004e97c) list_single_graphic_hl_pane_g2_cp2

0xd327,	// (0x00056235) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd327,	// (0x00056235) list_single_graphic_hl_pane_g3_cp2

0x05e7,	// (0x000494f5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x05e7,	// (0x000494f5) list_single_graphic_hl_pane_g4_cp2

0x5a88,	// (0x0004e996) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5a88,	// (0x0004e996) list_single_graphic_hl_pane_g5_cp2

0xad32,	// (0x00053c40) control_pane_g4_ParamLimits

0xad32,	// (0x00053c40) control_pane_g4

0x2799,	// (0x0004b6a7) bg_popup_sub_pane_cp10_ParamLimits

0x524e,	// (0x0004e15c) list_choice_list_pane_ParamLimits

0x525d,	// (0x0004e16b) scroll_pane_cp23

0x9d6f,	// (0x00052c7d) bg_popup_preview_window_pane_cp02_ParamLimits

0x588d,	// (0x0004e79b) list_preview_fixed_pane_ParamLimits

0x58a3,	// (0x0004e7b1) list_preview_fixed_pane_cp_ParamLimits

0x58a3,	// (0x0004e7b1) list_preview_fixed_pane_cp

0x58af,	// (0x0004e7bd) popup_preview_fixed_window_g1_ParamLimits

0x58af,	// (0x0004e7bd) popup_preview_fixed_window_g1

0x58bb,	// (0x0004e7c9) popup_preview_fixed_window_g2_ParamLimits

0x58bb,	// (0x0004e7c9) popup_preview_fixed_window_g2

0x0002,

0xfb70,	// (0x00058a7e) popup_preview_fixed_window_g_ParamLimits

0xfb70,	// (0x00058a7e) popup_preview_fixed_window_g

0xf4c2,	// (0x000583d0) aid_navi_side_left_pane_ParamLimits

0xf4d7,	// (0x000583e5) aid_navi_side_right_pane_ParamLimits

0xf4ef,	// (0x000583fd) navi_icon_pane_stacon_ParamLimits

0xf503,	// (0x00058411) navi_navi_pane_stacon_ParamLimits

0xf4ef,	// (0x000583fd) navi_text_pane_stacon_ParamLimits

0x9670,	// (0x0005257e) main_text_info_pane

0x5ab2,	// (0x0004e9c0) listscroll_text_info_pane

0x5aba,	// (0x0004e9c8) list_text_info_pane_ParamLimits

0x5aba,	// (0x0004e9c8) list_text_info_pane

0x5ac9,	// (0x0004e9d7) scroll_pane_cp24_ParamLimits

0x5ac9,	// (0x0004e9d7) scroll_pane_cp24

0xd335,	// (0x00056243) list_text_info_pane_t1_ParamLimits

0xd335,	// (0x00056243) list_text_info_pane_t1

0xaeea,	// (0x00053df8) popup_fast_swap2_window_ParamLimits

0xaeea,	// (0x00053df8) popup_fast_swap2_window

0x5b1b,	// (0x0004ea29) aid_size_cell_fast2

0x9670,	// (0x0005257e) bg_popup_window_pane_cp17

0x310d,	// (0x0004c01b) heading_pane_cp2

0x9fbc,	// (0x00052eca) listscroll_fast2_pane

0x5b25,	// (0x0004ea33) grid_fast2_pane

0x5b2f,	// (0x0004ea3d) listscroll_fast2_pane_g1

0x5b37,	// (0x0004ea45) listscroll_fast2_pane_g2

0x0001,

0xfbec,	// (0x00058afa) listscroll_fast2_pane_g

0xa494,	// (0x000533a2) scroll_pane_cp26

0x5b41,	// (0x0004ea4f) cell_fast2_pane_ParamLimits

0x5b41,	// (0x0004ea4f) cell_fast2_pane

0x5b56,	// (0x0004ea64) cell_fast2_pane_g1

0x5b5f,	// (0x0004ea6d) cell_fast2_pane_g2

0x5b68,	// (0x0004ea76) cell_fast2_pane_g3

0x0002,

0xfbf1,	// (0x00058aff) cell_fast2_pane_g

0xa0a3,	// (0x00052fb1) grid_highlight_pane_cp9

0xa0b8,	// (0x00052fc6) main_eswt_pane_ParamLimits

0xa0b8,	// (0x00052fc6) main_eswt_pane

0x5ade,	// (0x0004e9ec) list_single_text_info_pane

0x5b70,	// (0x0004ea7e) eswt_ctrl_button_pane

0x5b70,	// (0x0004ea7e) eswt_ctrl_canvas_pane

0xd351,	// (0x0005625f) eswt_ctrl_combo_pane

0x5b70,	// (0x0004ea7e) eswt_ctrl_default_pane

0x5b70,	// (0x0004ea7e) eswt_ctrl_label_pane

0x5b80,	// (0x0004ea8e) eswt_ctrl_wait_pane

0xd359,	// (0x00056267) eswt_shell_pane

0x9670,	// (0x0005257e) listscroll_eswt_app_pane

0x5ba8,	// (0x0004eab6) popup_eswt_tasktip_window_ParamLimits

0x5ba8,	// (0x0004eab6) popup_eswt_tasktip_window

0x2d1a,	// (0x0004bc28) bg_popup_window_pane_cp18

0x5bb9,	// (0x0004eac7) eswt_control_pane_g1_ParamLimits

0x5bb9,	// (0x0004eac7) eswt_control_pane_g1

0x5bc6,	// (0x0004ead4) eswt_control_pane_g2_ParamLimits

0x5bc6,	// (0x0004ead4) eswt_control_pane_g2

0x5bd3,	// (0x0004eae1) eswt_control_pane_g3_ParamLimits

0x5bd3,	// (0x0004eae1) eswt_control_pane_g3

0x5be0,	// (0x0004eaee) eswt_control_pane_g4_ParamLimits

0x5be0,	// (0x0004eaee) eswt_control_pane_g4

0x0003,

0xfbf8,	// (0x00058b06) eswt_control_pane_g_ParamLimits

0xfbf8,	// (0x00058b06) eswt_control_pane_g

0xa335,	// (0x00053243) bg_button_pane_ParamLimits

0xa335,	// (0x00053243) bg_button_pane

0xa0b8,	// (0x00052fc6) common_borders_pane_copy2_ParamLimits

0xa0b8,	// (0x00052fc6) common_borders_pane_copy2

0x5bed,	// (0x0004eafb) control_button_pane_g1_ParamLimits

0x5bed,	// (0x0004eafb) control_button_pane_g1

0x5bf9,	// (0x0004eb07) control_button_pane_g2_ParamLimits

0x5bf9,	// (0x0004eb07) control_button_pane_g2

0x5c05,	// (0x0004eb13) control_button_pane_g3_ParamLimits

0x5c05,	// (0x0004eb13) control_button_pane_g3

0x0002,

0xfc01,	// (0x00058b0f) control_button_pane_g_ParamLimits

0xfc01,	// (0x00058b0f) control_button_pane_g

0x5c19,	// (0x0004eb27) control_button_pane_t1

0x5c27,	// (0x0004eb35) control_button_pane_t2

0x0001,

0xfc08,	// (0x00058b16) control_button_pane_t

0x2ca6,	// (0x0004bbb4) bg_button_pane_g1

0x2cae,	// (0x0004bbbc) bg_button_pane_g2

0x2cb6,	// (0x0004bbc4) bg_button_pane_g3

0x2cbe,	// (0x0004bbcc) bg_button_pane_g4

0x2cc6,	// (0x0004bbd4) bg_button_pane_g5

0x2cce,	// (0x0004bbdc) bg_button_pane_g6

0x2cd6,	// (0x0004bbe4) bg_button_pane_g7

0x2cde,	// (0x0004bbec) bg_button_pane_g8

0x2ce6,	// (0x0004bbf4) bg_button_pane_g9

0x0008,

0xf855,	// (0x00058763) bg_button_pane_g

0x5209,	// (0x0004e117) common_borders_pane_ParamLimits

0x5209,	// (0x0004e117) common_borders_pane

0x5bb9,	// (0x0004eac7) eswt_control_pane_g1_copy1_ParamLimits

0x5bb9,	// (0x0004eac7) eswt_control_pane_g1_copy1

0x5bc6,	// (0x0004ead4) eswt_control_pane_g2_copy1_ParamLimits

0x5bc6,	// (0x0004ead4) eswt_control_pane_g2_copy1

0x5bd3,	// (0x0004eae1) eswt_control_pane_g3_copy1_ParamLimits

0x5bd3,	// (0x0004eae1) eswt_control_pane_g3_copy1

0x5be0,	// (0x0004eaee) eswt_control_pane_g4_copy1_ParamLimits

0x5be0,	// (0x0004eaee) eswt_control_pane_g4_copy1

0x5244,	// (0x0004e152) bg_eswt_ctrl_canvas_pane_g1

0x5209,	// (0x0004e117) common_borders_pane_cp2_ParamLimits

0x5209,	// (0x0004e117) common_borders_pane_cp2

0x5209,	// (0x0004e117) common_borders_pane_cp3_ParamLimits

0x5209,	// (0x0004e117) common_borders_pane_cp3

0x5c35,	// (0x0004eb43) separator_horizontal_pane

0x5c3d,	// (0x0004eb4b) separator_vertical_pane

0x5bb9,	// (0x0004eac7) eswt_control_pane_g1_copy2_ParamLimits

0x5bb9,	// (0x0004eac7) eswt_control_pane_g1_copy2

0x5bc6,	// (0x0004ead4) eswt_control_pane_g2_copy2_ParamLimits

0x5bc6,	// (0x0004ead4) eswt_control_pane_g2_copy2

0x5bd3,	// (0x0004eae1) eswt_control_pane_g3_copy2_ParamLimits

0x5bd3,	// (0x0004eae1) eswt_control_pane_g3_copy2

0x5be0,	// (0x0004eaee) eswt_control_pane_g4_copy2_ParamLimits

0x5be0,	// (0x0004eaee) eswt_control_pane_g4_copy2

0x9670,	// (0x0005257e) common_borders_pane_cp4

0x5c46,	// (0x0004eb54) separator_horizontal_pane_g1

0x5c4f,	// (0x0004eb5d) separator_horizontal_pane_g2

0x5c58,	// (0x0004eb66) separator_horizontal_pane_g3

0x0002,

0xfc0d,	// (0x00058b1b) separator_horizontal_pane_g

0x5bb9,	// (0x0004eac7) eswt_control_pane_g1_copy3_ParamLimits

0x5bb9,	// (0x0004eac7) eswt_control_pane_g1_copy3

0x5bc6,	// (0x0004ead4) eswt_control_pane_g2_copy3_ParamLimits

0x5bc6,	// (0x0004ead4) eswt_control_pane_g2_copy3

0x5bd3,	// (0x0004eae1) eswt_control_pane_g3_copy3_ParamLimits

0x5bd3,	// (0x0004eae1) eswt_control_pane_g3_copy3

0x5be0,	// (0x0004eaee) eswt_control_pane_g4_copy3_ParamLimits

0x5be0,	// (0x0004eaee) eswt_control_pane_g4_copy3

0x9670,	// (0x0005257e) common_borders_pane_cp5

0x5c61,	// (0x0004eb6f) separator_vertical_pane_g1

0x5c6a,	// (0x0004eb78) separator_vertical_pane_g2

0x5c73,	// (0x0004eb81) separator_vertical_pane_g3

0x0002,

0xfc14,	// (0x00058b22) separator_vertical_pane_g

0x5bb9,	// (0x0004eac7) eswt_control_pane_g1_copy4_ParamLimits

0x5bb9,	// (0x0004eac7) eswt_control_pane_g1_copy4

0x5bc6,	// (0x0004ead4) eswt_control_pane_g2_copy4_ParamLimits

0x5bc6,	// (0x0004ead4) eswt_control_pane_g2_copy4

0x5bd3,	// (0x0004eae1) eswt_control_pane_g3_copy4_ParamLimits

0x5bd3,	// (0x0004eae1) eswt_control_pane_g3_copy4

0x5be0,	// (0x0004eaee) eswt_control_pane_g4_copy4_ParamLimits

0x5be0,	// (0x0004eaee) eswt_control_pane_g4_copy4

0xd379,	// (0x00056287) eswt_ctrl_combo_button_pane

0xd381,	// (0x0005628f) eswt_ctrl_input_pane

0xd389,	// (0x00056297) popup_choice_list_window_cp70

0xd391,	// (0x0005629f) eswt_ctrl_input_pane_t1

0x9670,	// (0x0005257e) input_focus_pane_cp70

0x5209,	// (0x0004e117) bg_button_pane_cp70_ParamLimits

0x5209,	// (0x0004e117) bg_button_pane_cp70

0xd39f,	// (0x000562ad) eswt_ctrl_combo_button_pane_g1

0x5caa,	// (0x0004ebb8) wait_bar_pane_cp70

0x2d1a,	// (0x0004bc28) bg_popup_window_pane_cp70_ParamLimits

0x2d1a,	// (0x0004bc28) bg_popup_window_pane_cp70

0x5cb2,	// (0x0004ebc0) popup_eswt_tasktip_window_t1

0x5cc8,	// (0x0004ebd6) wait_bar_pane_cp71_ParamLimits

0x5cc8,	// (0x0004ebd6) wait_bar_pane_cp71

0x5cd4,	// (0x0004ebe2) grid_eswt_app_pane

0xa7f0,	// (0x000536fe) scroll_pane_cp70

0xd3a7,	// (0x000562b5) cell_eswt_app_pane_ParamLimits

0xd3a7,	// (0x000562b5) cell_eswt_app_pane

0xd3d1,	// (0x000562df) cell_eswt_app_pane_g1_ParamLimits

0xd3d1,	// (0x000562df) cell_eswt_app_pane_g1

0xd400,	// (0x0005630e) cell_eswt_app_pane_g2_ParamLimits

0xd400,	// (0x0005630e) cell_eswt_app_pane_g2

0x0001,

0xfc1b,	// (0x00058b29) cell_eswt_app_pane_g_ParamLimits

0xfc1b,	// (0x00058b29) cell_eswt_app_pane_g

0xd424,	// (0x00056332) cell_eswt_app_pane_t1_ParamLimits

0xd424,	// (0x00056332) cell_eswt_app_pane_t1

0x5d92,	// (0x0004eca0) grid_highlight_pane_cp70_ParamLimits

0x5d92,	// (0x0004eca0) grid_highlight_pane_cp70

0x0583,	// (0x00049491) set_content_pane_g1

0xacc4,	// (0x00053bd2) status_small_volume_pane

0xb883,	// (0x00054791) status_small_volume_pane_g1

0xb88b,	// (0x00054799) volume_small2_pane

0xb894,	// (0x000547a2) volume_small2_pane_g1

0xb89d,	// (0x000547ab) volume_small2_pane_g2

0xb8a6,	// (0x000547b4) volume_small2_pane_g3

0xb8af,	// (0x000547bd) volume_small2_pane_g4

0xb8b8,	// (0x000547c6) volume_small2_pane_g5

0xb8c1,	// (0x000547cf) volume_small2_pane_g6

0xb8ca,	// (0x000547d8) volume_small2_pane_g7

0xb8d3,	// (0x000547e1) volume_small2_pane_g8

0xb8dc,	// (0x000547ea) volume_small2_pane_g9

0xb8e5,	// (0x000547f3) volume_small2_pane_g10

0x0009,

0xfc20,	// (0x00058b2e) volume_small2_pane_g

0x55fc,	// (0x0004e50a) fep_vkb_top_text_pane_g1_ParamLimits

0xd2b1,	// (0x000561bf) fep_vkb_top_text_pane_t1_ParamLimits

0x58c7,	// (0x0004e7d5) popup_preview_fixed_window_g3_ParamLimits

0x58c7,	// (0x0004e7d5) popup_preview_fixed_window_g3

0xb587,	// (0x00054495) popup_toolbar_trans_pane

0xcb8c,	// (0x00055a9a) aid_height_set_list_ParamLimits

0x4055,	// (0x0004cf63) aid_size_parent_ParamLimits

0x2799,	// (0x0004b6a7) list_highlight_pane_cp2_ParamLimits

0x0583,	// (0x00049491) set_content_pane_g1_ParamLimits

0xcd05,	// (0x00055c13) list_single_image_pane_ParamLimits

0xcd05,	// (0x00055c13) list_single_image_pane

0xd456,	// (0x00056364) aid_size_cell_image_ParamLimits

0xd456,	// (0x00056364) aid_size_cell_image

0xd463,	// (0x00056371) grid_single_image_pane_ParamLimits

0xd463,	// (0x00056371) grid_single_image_pane

0x58f5,	// (0x0004e803) list_single_image_pane_g1_ParamLimits

0x58f5,	// (0x0004e803) list_single_image_pane_g1

0x5901,	// (0x0004e80f) list_single_image_pane_g2_ParamLimits

0x5901,	// (0x0004e80f) list_single_image_pane_g2

0x0001,

0xfc35,	// (0x00058b43) list_single_image_pane_g_ParamLimits

0xfc35,	// (0x00058b43) list_single_image_pane_g

0x5db9,	// (0x0004ecc7) list_single_image_pane_t1_ParamLimits

0x5db9,	// (0x0004ecc7) list_single_image_pane_t1

0xd46f,	// (0x0005637d) cell_image_list_pane_ParamLimits

0xd46f,	// (0x0005637d) cell_image_list_pane

0xd483,	// (0x00056391) cell_image_list_pane_g1

0xd48c,	// (0x0005639a) cell_image_list_pane_g2

0x0001,

0xfc3a,	// (0x00058b48) cell_image_list_pane_g

0xd495,	// (0x000563a3) aid_size_cell_tb_trans_pane

0xa335,	// (0x00053243) bg_tb_trans_pane

0xd4a7,	// (0x000563b5) grid_tb_trans_pane

0x2ca6,	// (0x0004bbb4) bg_tb_trans_pane_g1

0x2cae,	// (0x0004bbbc) bg_tb_trans_pane_g2

0x2cb6,	// (0x0004bbc4) bg_tb_trans_pane_g3

0x2cbe,	// (0x0004bbcc) bg_tb_trans_pane_g4

0x2cc6,	// (0x0004bbd4) bg_tb_trans_pane_g5

0x2cde,	// (0x0004bbec) bg_tb_trans_pane_g6

0x2ce6,	// (0x0004bbf4) bg_tb_trans_pane_g7

0x2cce,	// (0x0004bbdc) bg_tb_trans_pane_g8

0x2cd6,	// (0x0004bbe4) bg_tb_trans_pane_g9

0x0008,

0xfc3f,	// (0x00058b4d) bg_tb_trans_pane_g

0xd4bb,	// (0x000563c9) cell_toolbar_trans_pane_ParamLimits

0xd4bb,	// (0x000563c9) cell_toolbar_trans_pane

0x5244,	// (0x0004e152) cell_toolbar_trans_pane_g1

0xcfce,	// (0x00055edc) list_form2_midp_pane_t1

0xcfdc,	// (0x00055eea) list_form2_midp_pane_t2

0x0001,

0xfae8,	// (0x000589f6) list_form2_midp_pane_t

0x4e2b,	// (0x0004dd39) scroll_pane_cp51_ParamLimits

0x4fe7,	// (0x0004def5) form2_midp_wait_pane_g1

0x4ff0,	// (0x0004defe) form2_midp_wait_pane_g2

0x4ff9,	// (0x0004df07) form2_midp_wait_pane_g3

0x0002,

0xfafd,	// (0x00058a0b) form2_midp_wait_pane_g

0x9a05,	// (0x00052913) list_highlight_pane_cp21_ParamLimits

0x5041,	// (0x0004df4f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5050,	// (0x0004df5e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4209,	// (0x0004d117) list_single_2graphic_im_pane_ParamLimits

0x4209,	// (0x0004d117) list_single_2graphic_im_pane

0xd4e1,	// (0x000563ef) list_single_2graphic_im_pane_g1_ParamLimits

0xd4e1,	// (0x000563ef) list_single_2graphic_im_pane_g1

0xd4f2,	// (0x00056400) list_single_2graphic_im_pane_g2_ParamLimits

0xd4f2,	// (0x00056400) list_single_2graphic_im_pane_g2

0xd4fe,	// (0x0005640c) list_single_2graphic_im_pane_g3_ParamLimits

0xd4fe,	// (0x0005640c) list_single_2graphic_im_pane_g3

0x0003,

0xfc52,	// (0x00058b60) list_single_2graphic_im_pane_g_ParamLimits

0xfc52,	// (0x00058b60) list_single_2graphic_im_pane_g

0xd512,	// (0x00056420) list_single_2graphic_im_pane_t1_ParamLimits

0xd512,	// (0x00056420) list_single_2graphic_im_pane_t1

0x58d3,	// (0x0004e7e1) list_single_graphic_2heading_pane_fp_ParamLimits

0x58d3,	// (0x0004e7e1) list_single_graphic_2heading_pane_fp

0xf1f8,	// (0x00058106) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf1f8,	// (0x00058106) list_single_graphic_2heading_pane_fp_g1

0x58e9,	// (0x0004e7f7) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x58e9,	// (0x0004e7f7) list_single_graphic_2heading_pane_fp_g2

0x58f5,	// (0x0004e803) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x58f5,	// (0x0004e803) list_single_graphic_2heading_pane_fp_g3

0x5901,	// (0x0004e80f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5901,	// (0x0004e80f) list_single_graphic_2heading_pane_fp_g4

0x5915,	// (0x0004e823) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5915,	// (0x0004e823) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb80,	// (0x00058a8e) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb80,	// (0x00058a8e) list_single_graphic_2heading_pane_fp_g

0xf316,	// (0x00058224) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf316,	// (0x00058224) list_single_graphic_2heading_pane_fp_t1

0xf230,	// (0x0005813e) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf230,	// (0x0005813e) list_single_graphic_2heading_pane_fp_t2

0xf32c,	// (0x0005823a) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf32c,	// (0x0005823a) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5b,	// (0x00058b69) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5b,	// (0x00058b69) list_single_graphic_2heading_pane_fp_t

0x52d0,	// (0x0004e1de) fep_hwr_write_pane_g5_ParamLimits

0x52d0,	// (0x0004e1de) fep_hwr_write_pane_g5

0x52dc,	// (0x0004e1ea) fep_hwr_write_pane_g6_ParamLimits

0x52dc,	// (0x0004e1ea) fep_hwr_write_pane_g6

0xd359,	// (0x00056267) eswt_shell_pane_ParamLimits

0x2d1a,	// (0x0004bc28) bg_popup_window_pane_cp18_ParamLimits

0x3f9d,	// (0x0004ceab) heading_pane_cp70

0x5cb2,	// (0x0004ebc0) popup_eswt_tasktip_window_t1_ParamLimits

0xc130,	// (0x0005503e) aid_touch_tab_arrow_left

0xc146,	// (0x00055054) aid_touch_tab_arrow_right

0x98df,	// (0x000527ed) title_pane_g3_ParamLimits

0x98df,	// (0x000527ed) title_pane_g3

0xa2f4,	// (0x00053202) set_value_pane_g1

0xb587,	// (0x00054495) popup_toolbar_trans_pane_ParamLimits

0xd495,	// (0x000563a3) aid_size_cell_tb_trans_pane_ParamLimits

0xa335,	// (0x00053243) bg_tb_trans_pane_ParamLimits

0xd4a7,	// (0x000563b5) grid_tb_trans_pane_ParamLimits

0x9d6f,	// (0x00052c7d) cont_note_pane_ParamLimits

0x9d6f,	// (0x00052c7d) cont_note_pane

0xa0b8,	// (0x00052fc6) cont_snote2_single_text_pane_ParamLimits

0xa0b8,	// (0x00052fc6) cont_snote2_single_text_pane

0xa0b8,	// (0x00052fc6) cont_snote2_single_graphic_pane_ParamLimits

0xa0b8,	// (0x00052fc6) cont_snote2_single_graphic_pane

0x3320,	// (0x0004c22e) cont_note_wait_pane_ParamLimits

0x3320,	// (0x0004c22e) cont_note_wait_pane

0x3320,	// (0x0004c22e) cont_note_image_pane_ParamLimits

0x3320,	// (0x0004c22e) cont_note_image_pane

0x5eaf,	// (0x0004edbd) popup_note2_window_g1_ParamLimits

0x5eaf,	// (0x0004edbd) popup_note2_window_g1

0xd550,	// (0x0005645e) popup_note2_window_t1_ParamLimits

0xd550,	// (0x0005645e) popup_note2_window_t1

0xd595,	// (0x000564a3) popup_note2_window_t2_ParamLimits

0xd595,	// (0x000564a3) popup_note2_window_t2

0xd5da,	// (0x000564e8) popup_note2_window_t3_ParamLimits

0xd5da,	// (0x000564e8) popup_note2_window_t3

0x5faf,	// (0x0004eebd) popup_note2_window_t4_ParamLimits

0x5faf,	// (0x0004eebd) popup_note2_window_t4

0x9df3,	// (0x00052d01) popup_note2_window_t5_ParamLimits

0x9df3,	// (0x00052d01) popup_note2_window_t5

0x0004,

0xfc67,	// (0x00058b75) popup_note2_window_t_ParamLimits

0xfc67,	// (0x00058b75) popup_note2_window_t

0x5fde,	// (0x0004eeec) popup_note2_image_window_g1_ParamLimits

0x5fde,	// (0x0004eeec) popup_note2_image_window_g1

0xd61f,	// (0x0005652d) popup_note2_image_window_g2_ParamLimits

0xd61f,	// (0x0005652d) popup_note2_image_window_g2

0x0001,

0xfc72,	// (0x00058b80) popup_note2_image_window_g_ParamLimits

0xfc72,	// (0x00058b80) popup_note2_image_window_g

0x5ffc,	// (0x0004ef0a) popup_note2_image_window_t1_ParamLimits

0x5ffc,	// (0x0004ef0a) popup_note2_image_window_t1

0x6014,	// (0x0004ef22) popup_note2_image_window_t2_ParamLimits

0x6014,	// (0x0004ef22) popup_note2_image_window_t2

0x602c,	// (0x0004ef3a) popup_note2_image_window_t3_ParamLimits

0x602c,	// (0x0004ef3a) popup_note2_image_window_t3

0x0002,

0xfc77,	// (0x00058b85) popup_note2_image_window_t_ParamLimits

0xfc77,	// (0x00058b85) popup_note2_image_window_t

0x332e,	// (0x0004c23c) popup_note2_wait_window_g1_ParamLimits

0x332e,	// (0x0004c23c) popup_note2_wait_window_g1

0x333a,	// (0x0004c248) popup_note2_wait_window_g2_ParamLimits

0x333a,	// (0x0004c248) popup_note2_wait_window_g2

0x3346,	// (0x0004c254) popup_note2_wait_window_g3_ParamLimits

0x3346,	// (0x0004c254) popup_note2_wait_window_g3

0x0002,

0xf837,	// (0x00058745) popup_note2_wait_window_g_ParamLimits

0xf837,	// (0x00058745) popup_note2_wait_window_g

0x6048,	// (0x0004ef56) popup_note2_wait_window_t1_ParamLimits

0x6048,	// (0x0004ef56) popup_note2_wait_window_t1

0x6066,	// (0x0004ef74) popup_note2_wait_window_t2_ParamLimits

0x6066,	// (0x0004ef74) popup_note2_wait_window_t2

0x6084,	// (0x0004ef92) popup_note2_wait_window_t3_ParamLimits

0x6084,	// (0x0004ef92) popup_note2_wait_window_t3

0x6096,	// (0x0004efa4) popup_note2_wait_window_t4_ParamLimits

0x6096,	// (0x0004efa4) popup_note2_wait_window_t4

0x0003,

0xfc7e,	// (0x00058b8c) popup_note2_wait_window_t_ParamLimits

0xfc7e,	// (0x00058b8c) popup_note2_wait_window_t

0x60a8,	// (0x0004efb6) wait_bar2_pane_ParamLimits

0x60a8,	// (0x0004efb6) wait_bar2_pane

0x60c0,	// (0x0004efce) popup_snote2_single_text_window_g1_ParamLimits

0x60c0,	// (0x0004efce) popup_snote2_single_text_window_g1

0x60e8,	// (0x0004eff6) popup_snote2_single_text_window_t1_ParamLimits

0x60e8,	// (0x0004eff6) popup_snote2_single_text_window_t1

0x6134,	// (0x0004f042) popup_snote2_single_text_window_t2_ParamLimits

0x6134,	// (0x0004f042) popup_snote2_single_text_window_t2

0x6180,	// (0x0004f08e) popup_snote2_single_text_window_t3_ParamLimits

0x6180,	// (0x0004f08e) popup_snote2_single_text_window_t3

0x61c1,	// (0x0004f0cf) popup_snote2_single_text_window_t4_ParamLimits

0x61c1,	// (0x0004f0cf) popup_snote2_single_text_window_t4

0x61f7,	// (0x0004f105) popup_snote2_single_text_window_t5_ParamLimits

0x61f7,	// (0x0004f105) popup_snote2_single_text_window_t5

0x0004,

0xfc87,	// (0x00058b95) popup_snote2_single_text_window_t_ParamLimits

0xfc87,	// (0x00058b95) popup_snote2_single_text_window_t

0xd631,	// (0x0005653f) popup_snote2_single_graphic_window_g1_ParamLimits

0xd631,	// (0x0005653f) popup_snote2_single_graphic_window_g1

0x624a,	// (0x0004f158) popup_snote2_single_graphic_window_g2_ParamLimits

0x624a,	// (0x0004f158) popup_snote2_single_graphic_window_g2

0x0001,

0xfc92,	// (0x00058ba0) popup_snote2_single_graphic_window_g_ParamLimits

0xfc92,	// (0x00058ba0) popup_snote2_single_graphic_window_g

0x6272,	// (0x0004f180) popup_snote2_single_graphic_window_t1_ParamLimits

0x6272,	// (0x0004f180) popup_snote2_single_graphic_window_t1

0x62be,	// (0x0004f1cc) popup_snote2_single_graphic_window_t2_ParamLimits

0x62be,	// (0x0004f1cc) popup_snote2_single_graphic_window_t2

0x6180,	// (0x0004f08e) popup_snote2_single_graphic_window_t3_ParamLimits

0x6180,	// (0x0004f08e) popup_snote2_single_graphic_window_t3

0x61c1,	// (0x0004f0cf) popup_snote2_single_graphic_window_t4_ParamLimits

0x61c1,	// (0x0004f0cf) popup_snote2_single_graphic_window_t4

0x61f7,	// (0x0004f105) popup_snote2_single_graphic_window_t5_ParamLimits

0x61f7,	// (0x0004f105) popup_snote2_single_graphic_window_t5

0x0004,

0xfc97,	// (0x00058ba5) popup_snote2_single_graphic_window_t_ParamLimits

0xfc97,	// (0x00058ba5) popup_snote2_single_graphic_window_t

0x4ce8,	// (0x0004dbf6) clock_nsta_pane_cp2_t1

0x4ce8,	// (0x0004dbf6) clock_nsta_pane_cp2_t2

0x0001,

0xfabe,	// (0x000589cc) clock_nsta_pane_cp2_t

0xe1eb,	// (0x000570f9) form_field_data_wide_pane_g1_ParamLimits

0xa2ac,	// (0x000531ba) form_field_data_wide_pane_g2_ParamLimits

0xa2ac,	// (0x000531ba) form_field_data_wide_pane_g2

0xa343,	// (0x00053251) form_field_data_wide_pane_g3_ParamLimits

0xa343,	// (0x00053251) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x00058584) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x00058584) form_field_data_wide_pane_g

0xcef1,	// (0x00055dff) grid_touch_3_pane_ParamLimits

0xcef1,	// (0x00055dff) grid_touch_3_pane

0xd659,	// (0x00056567) cell_touch_3_pane_ParamLimits

0xd659,	// (0x00056567) cell_touch_3_pane

0x5244,	// (0x0004e152) cell_touch_3_pane_g1

0x5244,	// (0x0004e152) cell_touch_3_pane_g2

0x0001,

0xfb43,	// (0x00058a51) cell_touch_3_pane_g

0x9e25,	// (0x00052d33) cont_query_data_pane

0x9e2d,	// (0x00052d3b) cont_query_data_pane_cp1

0x6338,	// (0x0004f246) button_value_adjust_pane_cp7

0x6340,	// (0x0004f24e) query_popup_pane_cp3

0xc073,	// (0x00054f81) bg_popup_sub_pane_cp22_ParamLimits

0xaa0a,	// (0x00053918) navi_navi_volume_pane_cp2

0xaa19,	// (0x00053927) popup_side_volume_key_window_g2

0xaa28,	// (0x00053936) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0005861a) popup_side_volume_key_window_g

0xaa37,	// (0x00053945) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x00058621) popup_side_volume_key_window_t

0xab0e,	// (0x00053a1c) popup_side_volume_key_window_ParamLimits

0x8fd6,	// (0x00051ee4) list_double_graphic_pane_g4_ParamLimits

0x8fd6,	// (0x00051ee4) list_double_graphic_pane_g4

0xb7c7,	// (0x000546d5) list_single_2heading_msg_pane_ParamLimits

0xb7c7,	// (0x000546d5) list_single_2heading_msg_pane

0xb8ee,	// (0x000547fc) list_single_2heading_msg_pane_g1_ParamLimits

0xb8ee,	// (0x000547fc) list_single_2heading_msg_pane_g1

0xb8fa,	// (0x00054808) list_single_2heading_msg_pane_g2_ParamLimits

0xb8fa,	// (0x00054808) list_single_2heading_msg_pane_g2

0xb90d,	// (0x0005481b) list_single_2heading_msg_pane_g3_ParamLimits

0xb90d,	// (0x0005481b) list_single_2heading_msg_pane_g3

0xb919,	// (0x00054827) list_single_2heading_msg_pane_g4_ParamLimits

0xb919,	// (0x00054827) list_single_2heading_msg_pane_g4

0x0003,

0xfca2,	// (0x00058bb0) list_single_2heading_msg_pane_g_ParamLimits

0xfca2,	// (0x00058bb0) list_single_2heading_msg_pane_g

0x951d,	// (0x0005242b) list_single_2heading_msg_pane_t1_ParamLimits

0x951d,	// (0x0005242b) list_single_2heading_msg_pane_t1

0x9545,	// (0x00052453) list_single_2heading_msg_pane_t2_ParamLimits

0x9545,	// (0x00052453) list_single_2heading_msg_pane_t2

0x95b0,	// (0x000524be) list_single_2heading_msg_pane_t3_ParamLimits

0x95b0,	// (0x000524be) list_single_2heading_msg_pane_t3

0xf34c,	// (0x0005825a) list_single_2heading_msg_pane_t4_ParamLimits

0xf34c,	// (0x0005825a) list_single_2heading_msg_pane_t4

0x0003,

0xfcab,	// (0x00058bb9) list_single_2heading_msg_pane_t_ParamLimits

0xfcab,	// (0x00058bb9) list_single_2heading_msg_pane_t

0x98eb,	// (0x000527f9) title_pane_g4_ParamLimits

0x98eb,	// (0x000527f9) title_pane_g4

0xf413,	// (0x00058321) title_pane_stacon_g3_ParamLimits

0xf413,	// (0x00058321) title_pane_stacon_g3

0x5e72,	// (0x0004ed80) list_single_2graphic_im_pane_g4_ParamLimits

0x5e72,	// (0x0004ed80) list_single_2graphic_im_pane_g4

0xca39,	// (0x00055947) popup_side_volume_key_window_cp

0x453a,	// (0x0004d448) main_idle_act2_pane_t1

0x0df9,	// (0x00049d07) toolbar_button_pane_g10

0xa243,	// (0x00053151) popup_toolbar_window_cp1

0x4cd9,	// (0x0004dbe7) clock_nsta_pane_cp_t1

0x4cd9,	// (0x0004dbe7) clock_nsta_pane_cp_t2

0x0001,

0xfab9,	// (0x000589c7) clock_nsta_pane_cp_t

0xaa0a,	// (0x00053918) navi_navi_volume_pane_cp2_ParamLimits

0x0206,	// (0x00049114) popup_side_volume_key_window_g1_ParamLimits

0xaa19,	// (0x00053927) popup_side_volume_key_window_g2_ParamLimits

0xaa28,	// (0x00053936) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0005861a) popup_side_volume_key_window_g_ParamLimits

0x13d5,	// (0x0004a2e3) fep_hwr_aid_pane

0xd165,	// (0x00056073) bg_fep_hwr_top_pane_g4_ParamLimits

0x52a0,	// (0x0004e1ae) fep_hwr_top_pane_g1_ParamLimits

0x52b2,	// (0x0004e1c0) fep_hwr_top_pane_g2_ParamLimits

0x148e,	// (0x0004a39c) fep_hwr_top_pane_g3_ParamLimits

0xfb0e,	// (0x00058a1c) fep_hwr_top_pane_g_ParamLimits

0x14a3,	// (0x0004a3b1) fep_hwr_top_text_pane_ParamLimits

0x3b2a,	// (0x0004ca38) aid_touch_tab_arrow_arrow_2

0x3b33,	// (0x0004ca41) aid_touch_tab_arrow_left_2

0x13e9,	// (0x0004a2f7) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1420,	// (0x0004a32e) fep_hwr_prediction_pane

0x540b,	// (0x0004e319) fep_vkb_prediction_pane

0xd291,	// (0x0005619f) fep_vkb_side_pane_g3_ParamLimits

0xd291,	// (0x0005619f) fep_vkb_side_pane_g3

0x54b4,	// (0x0004e3c2) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5969,	// (0x0004e877) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5976,	// (0x0004e884) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb8,	// (0x00058ac6) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6365,	// (0x0004f273) fep_hwr_prediction_pane_g1

0x17d0,	// (0x0004a6de) fep_hwr_prediction_pane_g2

0x17d8,	// (0x0004a6e6) fep_hwr_prediction_pane_g3

0x17e0,	// (0x0004a6ee) fep_hwr_prediction_pane_g4

0x0003,

0xfcb4,	// (0x00058bc2) fep_hwr_prediction_pane_g

0x6365,	// (0x0004f273) fep_vkb_prediction_pane_g1

0x636f,	// (0x0004f27d) fep_vkb_prediction_pane_g2

0x6377,	// (0x0004f285) fep_vkb_prediction_pane_g3

0x637f,	// (0x0004f28d) fep_vkb_prediction_pane_g4

0x0003,

0xfcbd,	// (0x00058bcb) fep_vkb_prediction_pane_g

0xb75d,	// (0x0005466b) slider_set_pane_g3

0xb771,	// (0x0005467f) slider_set_pane_g4

0xb789,	// (0x00054697) slider_set_pane_g5

0xb75d,	// (0x0005466b) slider_set_pane_g6

0xb79f,	// (0x000546ad) slider_set_pane_g7

0x41b6,	// (0x0004d0c4) slider_form_pane_g3

0x41bf,	// (0x0004d0cd) slider_form_pane_g4

0x41c7,	// (0x0004d0d5) slider_form_pane_g5

0x41b6,	// (0x0004d0c4) slider_form_pane_g6

0xccd7,	// (0x00055be5) slider_form_pane_g7

0x47e5,	// (0x0004d6f3) slider_set_pane_vc_g3

0x47ee,	// (0x0004d6fc) slider_set_pane_vc_g4

0x47f7,	// (0x0004d705) slider_set_pane_vc_g5

0x47e5,	// (0x0004d6f3) slider_set_pane_vc_g6

0x4800,	// (0x0004d70e) slider_set_pane_vc_g7

0x49b2,	// (0x0004d8c0) slider_form_pane_vc_g1

0x49bb,	// (0x0004d8c9) slider_form_pane_vc_g2

0x49c4,	// (0x0004d8d2) slider_form_pane_vc_g3

0x49b2,	// (0x0004d8c0) slider_form_pane_vc_g4

0x49cd,	// (0x0004d8db) slider_form_pane_vc_g5

0x0004,

0xfa8b,	// (0x00058999) slider_form_pane_vc_g

0x9670,	// (0x0005257e) main_idle_act3_pane

0x6387,	// (0x0004f295) ai3_links_pane

0xd6a2,	// (0x000565b0) popup_ai3_data_window_ParamLimits

0xd6a2,	// (0x000565b0) popup_ai3_data_window

0x9670,	// (0x0005257e) grid_ai3_links_pane

0xd6ba,	// (0x000565c8) cell_ai3_links_pane_ParamLimits

0xd6ba,	// (0x000565c8) cell_ai3_links_pane

0x63c0,	// (0x0004f2ce) bg_popup_sub_pane_cp11

0x63cd,	// (0x0004f2db) cell_ai3_links_pane_g1

0x9670,	// (0x0005257e) bg_popup_sub_pane_cp12

0x63f2,	// (0x0004f300) heading_ai3_data_pane

0x63fa,	// (0x0004f308) list_ai3_gene_pane

0x6406,	// (0x0004f314) popup_ai3_data_window_g1

0x640e,	// (0x0004f31c) heading_ai3_data_pane_g1

0x6416,	// (0x0004f324) heading_ai3_data_pane_t1

0xd6d4,	// (0x000565e2) list_double_ai3_gene_pane_ParamLimits

0xd6d4,	// (0x000565e2) list_double_ai3_gene_pane

0x6431,	// (0x0004f33f) list_single_ai3_gene_pane_ParamLimits

0x6431,	// (0x0004f33f) list_single_ai3_gene_pane

0x5209,	// (0x0004e117) list_highlight_pane_cp7_ParamLimits

0x5209,	// (0x0004e117) list_highlight_pane_cp7

0x643e,	// (0x0004f34c) list_single_a13_gene_pane_t1_ParamLimits

0x643e,	// (0x0004f34c) list_single_a13_gene_pane_t1

0x6455,	// (0x0004f363) list_single_ai3_gene_pane_g1

0x645e,	// (0x0004f36c) list_single_ai3_gene_pane_g2

0x0001,

0xfcc6,	// (0x00058bd4) list_single_ai3_gene_pane_g

0x6466,	// (0x0004f374) list_double_ai3_gene_pane_g1_ParamLimits

0x6466,	// (0x0004f374) list_double_ai3_gene_pane_g1

0xd6e1,	// (0x000565ef) list_double_ai3_gene_pane_t1_ParamLimits

0xd6e1,	// (0x000565ef) list_double_ai3_gene_pane_t1

0x648e,	// (0x0004f39c) list_double_ai3_gene_pane_t2_ParamLimits

0x648e,	// (0x0004f39c) list_double_ai3_gene_pane_t2

0x64a3,	// (0x0004f3b1) list_double_ai3_gene_pane_t3_ParamLimits

0x64a3,	// (0x0004f3b1) list_double_ai3_gene_pane_t3

0x0002,

0xfccb,	// (0x00058bd9) list_double_ai3_gene_pane_t_ParamLimits

0xfccb,	// (0x00058bd9) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf342,	// (0x00058250) aid_size_min_col_2

0xd68c,	// (0x0005659a) aid_size_min_msg_ParamLimits

0xd68c,	// (0x0005659a) aid_size_min_msg

0xd2a5,	// (0x000561b3) fep_vkb_top_text_pane_g2_ParamLimits

0xd2a5,	// (0x000561b3) fep_vkb_top_text_pane_g2

0x0001,

0xfb3e,	// (0x00058a4c) fep_vkb_top_text_pane_g_ParamLimits

0xfb3e,	// (0x00058a4c) fep_vkb_top_text_pane_g

0x9670,	// (0x0005257e) main_hc_apps_shell_pane

0x64c0,	// (0x0004f3ce) grid_hc_apps_pane_ParamLimits

0x64c0,	// (0x0004f3ce) grid_hc_apps_pane

0x64cf,	// (0x0004f3dd) list_hc_apps_pane

0x64d7,	// (0x0004f3e5) scroll_pane_cp37_ParamLimits

0x64d7,	// (0x0004f3e5) scroll_pane_cp37

0xd6fd,	// (0x0005660b) cell_hc_apps_pane_ParamLimits

0xd6fd,	// (0x0005660b) cell_hc_apps_pane

0xd7bb,	// (0x000566c9) cell_hc_apps_pane_g1_ParamLimits

0xd7bb,	// (0x000566c9) cell_hc_apps_pane_g1

0x65c2,	// (0x0004f4d0) cell_hc_apps_pane_g2_ParamLimits

0x65c2,	// (0x0004f4d0) cell_hc_apps_pane_g2

0x65de,	// (0x0004f4ec) cell_hc_apps_pane_g3_ParamLimits

0x65de,	// (0x0004f4ec) cell_hc_apps_pane_g3

0x0002,

0xfcd2,	// (0x00058be0) cell_hc_apps_pane_g_ParamLimits

0xfcd2,	// (0x00058be0) cell_hc_apps_pane_g

0xd7e8,	// (0x000566f6) cell_hc_apps_pane_t1_ParamLimits

0xd7e8,	// (0x000566f6) cell_hc_apps_pane_t1

0x9d6f,	// (0x00052c7d) grid_highlight_pane_cp10_ParamLimits

0x9d6f,	// (0x00052c7d) grid_highlight_pane_cp10

0xd826,	// (0x00056734) list_single_hc_apps_pane_ParamLimits

0xd826,	// (0x00056734) list_single_hc_apps_pane

0xd856,	// (0x00056764) list_single_hc_apps_pane_g1

0xb931,	// (0x0005483f) list_single_hc_apps_pane_g2

0x0001,

0xfcd9,	// (0x00058be7) list_single_hc_apps_pane_g

0xb94a,	// (0x00054858) list_single_hc_apps_pane_g2_copy1

0x961e,	// (0x0005252c) list_single_hc_apps_pane_t1

0x9a05,	// (0x00052913) bg_set_opt_pane_cp_ParamLimits

0x9a13,	// (0x00052921) setting_slider_pane_t1_ParamLimits

0x9a2c,	// (0x0005293a) setting_slider_pane_t2_ParamLimits

0x9a46,	// (0x00052954) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0005846c) setting_slider_pane_t_ParamLimits

0x9a5e,	// (0x0005296c) slider_set_pane_ParamLimits

0x06fe,	// (0x0004960c) control_pane_g5_ParamLimits

0x06fe,	// (0x0004960c) control_pane_g5

0xcb59,	// (0x00055a67) slider_set_pane_g1_ParamLimits

0x10df,	// (0x00049fed) slider_set_pane_g2_ParamLimits

0xb75d,	// (0x0005466b) slider_set_pane_g3_ParamLimits

0xb771,	// (0x0005467f) slider_set_pane_g4_ParamLimits

0xb789,	// (0x00054697) slider_set_pane_g5_ParamLimits

0xb75d,	// (0x0005466b) slider_set_pane_g6_ParamLimits

0xb79f,	// (0x000546ad) slider_set_pane_g7_ParamLimits

0xf953,	// (0x00058861) slider_set_pane_g_ParamLimits

0x052e,	// (0x0004943c) navi_icon_text_pane_ParamLimits

0xc0f9,	// (0x00055007) aid_fill_nsta_2_ParamLimits

0xc130,	// (0x0005503e) aid_touch_tab_arrow_left_ParamLimits

0xc146,	// (0x00055054) aid_touch_tab_arrow_right_ParamLimits

0xc1e1,	// (0x000550ef) clock_nsta_pane_ParamLimits

0x3b0c,	// (0x0004ca1a) navi_icon_pane_g1_ParamLimits

0x3b18,	// (0x0004ca26) navi_text_pane_t1_ParamLimits

0x4de9,	// (0x0004dcf7) navi_icon_text_pane_g1_ParamLimits

0x4df5,	// (0x0004dd03) navi_icon_text_pane_t1_ParamLimits

0xd856,	// (0x00056764) list_single_hc_apps_pane_g1_ParamLimits

0xb931,	// (0x0005483f) list_single_hc_apps_pane_g2_ParamLimits

0xfcd9,	// (0x00058be7) list_single_hc_apps_pane_g_ParamLimits

0xb94a,	// (0x00054858) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x961e,	// (0x0005252c) list_single_hc_apps_pane_t1_ParamLimits

0x97e4,	// (0x000526f2) popup_toolbar2_fixed_window_ParamLimits

0x97e4,	// (0x000526f2) popup_toolbar2_fixed_window

0xb57d,	// (0x0005448b) popup_toolbar2_float_window

0x9670,	// (0x0005257e) bg_popup_sub_pane_cp27

0x66bc,	// (0x0004f5ca) grid_toolbar2_float_pane

0x9670,	// (0x0005257e) bg_popup_sub_pane_cp26

0x66bc,	// (0x0004f5ca) grid_toolbar2_fixed_pane

0xd86f,	// (0x0005677d) cell_toolbar2_fixed_pane_ParamLimits

0xd86f,	// (0x0005677d) cell_toolbar2_fixed_pane

0xd889,	// (0x00056797) cell_toolbar2_fixed_pane_g1

0x2c26,	// (0x0004bb34) toolbar2_fixed_button_pane

0x2ca6,	// (0x0004bbb4) toolbar2_fixed_button_pane_g1

0x2cae,	// (0x0004bbbc) toolbar2_fixed_button_pane_g2

0x2cb6,	// (0x0004bbc4) toolbar2_fixed_button_pane_g3

0x2cbe,	// (0x0004bbcc) toolbar2_fixed_button_pane_g4

0x2cc6,	// (0x0004bbd4) toolbar2_fixed_button_pane_g5

0x2cce,	// (0x0004bbdc) toolbar2_fixed_button_pane_g6

0x2cd6,	// (0x0004bbe4) toolbar2_fixed_button_pane_g7

0x2cde,	// (0x0004bbec) toolbar2_fixed_button_pane_g8

0x2ce6,	// (0x0004bbf4) toolbar2_fixed_button_pane_g9

0x0008,

0xf855,	// (0x00058763) toolbar2_fixed_button_pane_g

0x66dd,	// (0x0004f5eb) cell_toolbar2_float_pane_ParamLimits

0x66dd,	// (0x0004f5eb) cell_toolbar2_float_pane

0x66ee,	// (0x0004f5fc) cell_toolbar2_float_pane_g1

0x2c26,	// (0x0004bb34) toolbar2_fixed_button_pane_cp

0xd18d,	// (0x0005609b) fep_vkb_accented_list_pane_ParamLimits

0xd18d,	// (0x0005609b) fep_vkb_accented_list_pane

0x15f1,	// (0x0004a4ff) bg_popup_fep_shadow_pane_g9

0x244e,	// (0x0004b35c) bg_popup_fep_shadow_pane_cp3

0xa47b,	// (0x00053389) list_accented_list_pane

0x66f7,	// (0x0004f605) list_single_accented_list_pane_ParamLimits

0x66f7,	// (0x0004f605) list_single_accented_list_pane

0x244e,	// (0x0004b35c) list_highlight_pane_cp10

0x6708,	// (0x0004f616) list_single_accented_list_pane_t1

0xb4a7,	// (0x000543b5) popup_slider_window_ParamLimits

0xb4a7,	// (0x000543b5) popup_slider_window

0x6348,	// (0x0004f256) aid_indentation_list_msg

0xd97e,	// (0x0005688c) bg_popup_window_pane_cp19

0x6828,	// (0x0004f736) popup_slider_window_g1

0x6844,	// (0x0004f752) popup_slider_window_g2

0x6860,	// (0x0004f76e) popup_slider_window_g3

0x0005,

0xfcde,	// (0x00058bec) popup_slider_window_g

0x68bc,	// (0x0004f7ca) popup_slider_window_t1

0x6930,	// (0x0004f83e) small_volume_slider_vertical_pane

0x5244,	// (0x0004e152) small_volume_slider_vertical_pane_g1

0x5244,	// (0x0004e152) small_volume_slider_vertical_pane_g2

0x694c,	// (0x0004f85a) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf0,	// (0x00058bfe) small_volume_slider_vertical_pane_g

0x9728,	// (0x00052636) area_side_right_pane_ParamLimits

0x9728,	// (0x00052636) area_side_right_pane

0xb966,	// (0x00054874) aid_size_side_button_ParamLimits

0xb966,	// (0x00054874) aid_size_side_button

0xb97f,	// (0x0005488d) grid_sctrl_middle_pane_ParamLimits

0xb97f,	// (0x0005488d) grid_sctrl_middle_pane

0x1850,	// (0x0004a75e) sctrl_sk_bottom_pane

0x1861,	// (0x0004a76f) sctrl_sk_top_pane

0x1873,	// (0x0004a781) aid_touch_sctrl_top

0x9d6f,	// (0x00052c7d) bg_sctrl_sk_pane_ParamLimits

0x9d6f,	// (0x00052c7d) bg_sctrl_sk_pane

0x1880,	// (0x0004a78e) sctrl_sk_top_pane_g1

0x188d,	// (0x0004a79b) sctrl_sk_top_pane_t1

0x1873,	// (0x0004a781) aid_touch_sctrl_bottom

0x9d6f,	// (0x00052c7d) bg_sctrl_sk_pane_cp_ParamLimits

0x9d6f,	// (0x00052c7d) bg_sctrl_sk_pane_cp

0x18a8,	// (0x0004a7b6) sctrl_sk_bottom_pane_g1

0x188d,	// (0x0004a79b) sctrl_sk_bottom_pane_t1

0xb999,	// (0x000548a7) cell_sctrl_middle_pane_ParamLimits

0xb999,	// (0x000548a7) cell_sctrl_middle_pane

0xb9aa,	// (0x000548b8) aid_touch_sctrl_middle_ParamLimits

0xb9aa,	// (0x000548b8) aid_touch_sctrl_middle

0xb9b7,	// (0x000548c5) bg_sctrl_middle_pane_ParamLimits

0xb9b7,	// (0x000548c5) bg_sctrl_middle_pane

0x69d4,	// (0x0004f8e2) cell_sctrl_middle_pane_g1_ParamLimits

0x69d4,	// (0x0004f8e2) cell_sctrl_middle_pane_g1

0xb9c5,	// (0x000548d3) cell_sctrl_middle_pane_g2_ParamLimits

0xb9c5,	// (0x000548d3) cell_sctrl_middle_pane_g2

0x0001,

0xfcfc,	// (0x00058c0a) cell_sctrl_middle_pane_g_ParamLimits

0xfcfc,	// (0x00058c0a) cell_sctrl_middle_pane_g

0x2ca6,	// (0x0004bbb4) bg_sctrl_middle_pane_g1

0x2cae,	// (0x0004bbbc) bg_sctrl_middle_pane_g2

0x2cb6,	// (0x0004bbc4) bg_sctrl_middle_pane_g3

0x2cbe,	// (0x0004bbcc) bg_sctrl_middle_pane_g4

0x2cc6,	// (0x0004bbd4) bg_sctrl_middle_pane_g5

0x2cce,	// (0x0004bbdc) bg_sctrl_middle_pane_g6

0x2cd6,	// (0x0004bbe4) bg_sctrl_middle_pane_g7

0x2cde,	// (0x0004bbec) bg_sctrl_middle_pane_g8

0x0007,

0xfd01,	// (0x00058c0f) bg_sctrl_middle_pane_g

0x2ce6,	// (0x0004bbf4) bg_sctrl_middle_pane_g8_copy1

0x2ca6,	// (0x0004bbb4) bg_sctrl_sk_pane_g1

0x2cae,	// (0x0004bbbc) bg_sctrl_sk_pane_g2

0x2cb6,	// (0x0004bbc4) bg_sctrl_sk_pane_g3

0x0008,

0xf855,	// (0x00058763) bg_sctrl_sk_pane_g

0xa209,	// (0x00053117) aid_size_touch_scroll_bar

0x2cbe,	// (0x0004bbcc) bg_sctrl_sk_pane_g4

0x2cc6,	// (0x0004bbd4) bg_sctrl_sk_pane_g5

0x2cce,	// (0x0004bbdc) bg_sctrl_sk_pane_g6

0x2cd6,	// (0x0004bbe4) bg_sctrl_sk_pane_g7

0x2cde,	// (0x0004bbec) bg_sctrl_sk_pane_g8

0x2ce6,	// (0x0004bbf4) bg_sctrl_sk_pane_g9

0x08b6,	// (0x000497c4) popup_fep_china_hwr2_fs_candidate_window

0xaf47,	// (0x00053e55) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xaf47,	// (0x00053e55) popup_fep_china_hwr2_fs_control_window

0x54b4,	// (0x0004e3c2) sctrl_sk_top_pane_g2

0x0001,

0xfcf7,	// (0x00058c05) sctrl_sk_top_pane_g

0xda36,	// (0x00056944) aid_fep_china_hwr2_fs_cell_ParamLimits

0xda36,	// (0x00056944) aid_fep_china_hwr2_fs_cell

0xda4a,	// (0x00056958) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda4a,	// (0x00056958) bg_popup_fep_shadow_pane_cp4

0xda61,	// (0x0005696f) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda61,	// (0x0005696f) bg_popup_fep_shadow_pane_cp5

0xda73,	// (0x00056981) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda73,	// (0x00056981) popup_fep_china_hwr2_fs_control_bar_grid

0xda87,	// (0x00056995) popup_fep_china_hwr2_fs_control_funtion_grid

0x69a8,	// (0x0004f8b6) aid_fep_china_hwr2_fs_candi_cell

0x9670,	// (0x0005257e) bg_popup_fep_shadow_pane_cp6

0x69b2,	// (0x0004f8c0) popup_fep_china_hwr2_fs_candidate_grid

0xda8f,	// (0x0005699d) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda8f,	// (0x0005699d) cell_fep_china_hwr2_fs_funtion_grid

0x5244,	// (0x0004e152) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x69d4,	// (0x0004f8e2) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x69d4,	// (0x0004f8e2) cell_fep_china_hwr2_fs_funtion_grid_g1

0x69e2,	// (0x0004f8f0) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x69e2,	// (0x0004f8f0) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd12,	// (0x00058c20) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd12,	// (0x00058c20) cell_fep_china_hwr2_fs_funtion_grid_g

0xdaa7,	// (0x000569b5) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdaa7,	// (0x000569b5) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdabc,	// (0x000569ca) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdabc,	// (0x000569ca) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd17,	// (0x00058c25) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd17,	// (0x00058c25) cell_fep_china_hwr2_fs_funtion_grid_t

0x6a29,	// (0x0004f937) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6a31,	// (0x0004f93f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6a39,	// (0x0004f947) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1c,	// (0x00058c2a) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6a41,	// (0x0004f94f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6a41,	// (0x0004f94f) cell_fep_china_hwr2_fs_candidate_grid

0x6a5a,	// (0x0004f968) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6a62,	// (0x0004f970) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5244,	// (0x0004e152) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5244,	// (0x0004e152) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb43,	// (0x00058a51) cell_fep_china_hwr2_fs_candidate_grid_g

0x6a6a,	// (0x0004f978) cell_fep_china_hwr2_fs_candidate_grid_t1

0x289f,	// (0x0004b7ad) clock_nsta_pane_cp_24_ParamLimits

0x289f,	// (0x0004b7ad) clock_nsta_pane_cp_24

0x291d,	// (0x0004b82b) indicator_nsta_pane_cp_24_ParamLimits

0x291d,	// (0x0004b82b) indicator_nsta_pane_cp_24

0x3988,	// (0x0004c896) heading_pane_g1

0x0001,

0xf8ba,	// (0x000587c8) heading_pane_g

0x4383,	// (0x0004d291) grid_sct_catagory_button_pane

0x43b3,	// (0x0004d2c1) scroll_pane_cp5_ParamLimits

0x4e37,	// (0x0004dd45) button_value_adjust_pane_cp5_ParamLimits

0x4e37,	// (0x0004dd45) button_value_adjust_pane_cp5

0x4f16,	// (0x0004de24) form2_midp_time_pane_ParamLimits

0x6a78,	// (0x0004f986) cell_sct_catagory_button_pane_ParamLimits

0x6a78,	// (0x0004f986) cell_sct_catagory_button_pane

0x5209,	// (0x0004e117) bg_button_pane_cp01_ParamLimits

0x5209,	// (0x0004e117) bg_button_pane_cp01

0x5244,	// (0x0004e152) cell_sct_catagory_button_pane_g1

0xb520,	// (0x0005442e) popup_tb_extension_window

0xdad8,	// (0x000569e6) aid_size_cell_ext_ParamLimits

0xdad8,	// (0x000569e6) aid_size_cell_ext

0xa0b8,	// (0x00052fc6) bg_tb_trans_pane_cp1_ParamLimits

0xa0b8,	// (0x00052fc6) bg_tb_trans_pane_cp1

0xdafe,	// (0x00056a0c) grid_tb_ext_pane_ParamLimits

0xdafe,	// (0x00056a0c) grid_tb_ext_pane

0xdb3d,	// (0x00056a4b) cell_tb_ext_pane_ParamLimits

0xdb3d,	// (0x00056a4b) cell_tb_ext_pane

0xdb65,	// (0x00056a73) cell_tb_ext_pane_g1_ParamLimits

0xdb65,	// (0x00056a73) cell_tb_ext_pane_g1

0x6b0e,	// (0x0004fa1c) cell_tb_ext_pane_t1

0x9d6f,	// (0x00052c7d) list_highlight_pane_cp11_ParamLimits

0x9d6f,	// (0x00052c7d) list_highlight_pane_cp11

0x97f9,	// (0x00052707) popup_uni_indicator_window_ParamLimits

0x97f9,	// (0x00052707) popup_uni_indicator_window

0xa335,	// (0x00053243) bg_popup_sub_pane_cp14

0xdb82,	// (0x00056a90) list_uniindi_pane

0xdb8e,	// (0x00056a9c) uniindi_top_pane

0x9d6f,	// (0x00052c7d) bg_uniindi_top_pane

0xdbad,	// (0x00056abb) uniindi_top_pane_g1

0xdbc3,	// (0x00056ad1) uniindi_top_pane_g2

0x0003,

0xfd23,	// (0x00058c31) uniindi_top_pane_g

0xdbe0,	// (0x00056aee) uniindi_top_pane_t1

0x6bbf,	// (0x0004facd) list_single_uniindi_pane_ParamLimits

0x6bbf,	// (0x0004facd) list_single_uniindi_pane

0x5244,	// (0x0004e152) bg_uniindi_top_pane_g1

0x6bd1,	// (0x0004fadf) list_single_uniindi_pane_g1

0x6be4,	// (0x0004faf2) list_single_uniindi_pane_t1

0x9670,	// (0x0005257e) control_bg_pane

0x6c09,	// (0x0004fb17) bg_sctrl_sk_pane_cp1

0x6c12,	// (0x0004fb20) bg_sctrl_sk_pane_cp2

0x6c1b,	// (0x0004fb29) control_bg_pane_g1

0x6c24,	// (0x0004fb32) control_bg_pane_g2

0x0001,

0xfd2c,	// (0x00058c3a) control_bg_pane_g

0x4c8e,	// (0x0004db9c) cell_indicator_nsta_pane_g1_ParamLimits

0xcf2c,	// (0x00055e3a) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa7,	// (0x000589b5) cell_indicator_nsta_pane_g_ParamLimits

0xf1ce,	// (0x000580dc) form2_midp_time_pane_t1_ParamLimits

0x13c7,	// (0x0004a2d5) main_idle_act4_pane_ParamLimits

0x13c7,	// (0x0004a2d5) main_idle_act4_pane

0xb520,	// (0x0005442e) popup_tb_extension_window_ParamLimits

0xdb23,	// (0x00056a31) tb_ext_find_pane_ParamLimits

0xdb23,	// (0x00056a31) tb_ext_find_pane

0x6c2d,	// (0x0004fb3b) ai_gene_pane_1_cp1

0x2599,	// (0x0004b4a7) ai_gene_pane_2_cp1

0xdc0a,	// (0x00056b18) list_single_idle_plugin_calendar_pane

0x6c3e,	// (0x0004fb4c) list_single_idle_plugin_notification_pane

0x6c47,	// (0x0004fb55) list_single_idle_plugin_player_pane

0xdc13,	// (0x00056b21) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdc13,	// (0x00056b21) list_single_idle_plugin_shortcut_pane

0xdc3b,	// (0x00056b49) main_idle_act4_pane_t1

0xdc52,	// (0x00056b60) main_idle_act4_pane_t2

0x0001,

0xfd31,	// (0x00058c3f) main_idle_act4_pane_t

0xdc69,	// (0x00056b77) middle_sk_idle_act4_pane_ParamLimits

0xdc69,	// (0x00056b77) middle_sk_idle_act4_pane

0xdc85,	// (0x00056b93) popup_clock_digital_analogue_window_cp2

0xdcb1,	// (0x00056bbf) shortcut_wheel_idle_act4_pane_ParamLimits

0xdcb1,	// (0x00056bbf) shortcut_wheel_idle_act4_pane

0x5244,	// (0x0004e152) shortcut_wheel_idle_act4_pane_g1

0x5244,	// (0x0004e152) shortcut_wheel_idle_act4_pane_g2

0x5244,	// (0x0004e152) shortcut_wheel_idle_act4_pane_g3

0x5244,	// (0x0004e152) shortcut_wheel_idle_act4_pane_g4

0x5244,	// (0x0004e152) shortcut_wheel_idle_act4_pane_g5

0x6cda,	// (0x0004fbe8) shortcut_wheel_idle_act4_pane_g6

0x6ce2,	// (0x0004fbf0) shortcut_wheel_idle_act4_pane_g7

0x6cea,	// (0x0004fbf8) shortcut_wheel_idle_act4_pane_g8

0x6cf2,	// (0x0004fc00) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd36,	// (0x00058c44) shortcut_wheel_idle_act4_pane_g

0xd165,	// (0x00056073) middle_sk_idle_act4_pane_g1_ParamLimits

0xd165,	// (0x00056073) middle_sk_idle_act4_pane_g1

0xdd2e,	// (0x00056c3c) middle_sk_idle_act4_pane_g2_ParamLimits

0xdd2e,	// (0x00056c3c) middle_sk_idle_act4_pane_g2

0x0001,

0xfd59,	// (0x00058c67) middle_sk_idle_act4_pane_g_ParamLimits

0xfd59,	// (0x00058c67) middle_sk_idle_act4_pane_g

0xdd46,	// (0x00056c54) middle_sk_idle_act4_pane_t1_ParamLimits

0xdd46,	// (0x00056c54) middle_sk_idle_act4_pane_t1

0xdd75,	// (0x00056c83) grid_ai_shortcut_pane_ParamLimits

0xdd75,	// (0x00056c83) grid_ai_shortcut_pane

0xdd92,	// (0x00056ca0) list_highlight_pane_cp16_ParamLimits

0xdd92,	// (0x00056ca0) list_highlight_pane_cp16

0xdd9f,	// (0x00056cad) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdd9f,	// (0x00056cad) list_single_idle_plugin_shortcut_pane_g1

0xddab,	// (0x00056cb9) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xddab,	// (0x00056cb9) list_single_idle_plugin_shortcut_pane_g2

0xddc7,	// (0x00056cd5) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xddc7,	// (0x00056cd5) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5e,	// (0x00058c6c) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5e,	// (0x00058c6c) list_single_idle_plugin_shortcut_pane_g

0xdddc,	// (0x00056cea) cell_ai_shortcut_pane_ParamLimits

0xdddc,	// (0x00056cea) cell_ai_shortcut_pane

0xddf2,	// (0x00056d00) cell_ai_shortcut_pane_g1_ParamLimits

0xddf2,	// (0x00056d00) cell_ai_shortcut_pane_g1

0x6c2d,	// (0x0004fb3b) ai_gene_pane_1_cp2

0x6e22,	// (0x0004fd30) ai_gene_pane_2_cp2

0x6e2a,	// (0x0004fd38) list_highlight_pane_cp15

0xde14,	// (0x00056d22) list_single_idle_plugin_calendar_pane_g1

0x6e2a,	// (0x0004fd38) list_highlight_pane_cp17

0x6e3b,	// (0x0004fd49) list_single_idle_plugin_calendar_pane_g1_copy1

0x6e43,	// (0x0004fd51) list_single_idle_plugin_player_pane_g1

0x45dc,	// (0x0004d4ea) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd65,	// (0x00058c73) list_single_idle_plugin_player_pane_g

0x6e4b,	// (0x0004fd59) list_single_idle_plugin_player_pane_t1

0x6e59,	// (0x0004fd67) list_single_idle_plugin_player_pane_t2

0x6e67,	// (0x0004fd75) list_single_idle_plugin_player_pane_t3

0x6e75,	// (0x0004fd83) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6a,	// (0x00058c78) list_single_idle_plugin_player_pane_t

0x6e83,	// (0x0004fd91) wait_bar_pane_cp15

0x6e8b,	// (0x0004fd99) grid_ai_notification_pane

0x45dc,	// (0x0004d4ea) list_single_idle_plugin_notification_pane_g1

0xde1c,	// (0x00056d2a) cell_ai_notification_pane_ParamLimits

0xde1c,	// (0x00056d2a) cell_ai_notification_pane

0x6ea1,	// (0x0004fdaf) cell_ai_notification_pane_g1

0x6ea9,	// (0x0004fdb7) cell_ai_notification_pane_t1

0xde29,	// (0x00056d37) tb_ext_find_button_pane

0xde31,	// (0x00056d3f) tb_ext_find_pane_g1

0xde39,	// (0x00056d47) tb_ext_find_pane_t1

0xc012,	// (0x00054f20) tb_ext_find_button_pane_g1

0xde47,	// (0x00056d55) tb_ext_find_button_pane_g2

0x0001,

0xfd73,	// (0x00058c81) tb_ext_find_button_pane_g

0xdc3b,	// (0x00056b49) main_idle_act4_pane_t1_ParamLimits

0xdc52,	// (0x00056b60) main_idle_act4_pane_t2_ParamLimits

0xfd31,	// (0x00058c3f) main_idle_act4_pane_t_ParamLimits

0xdc85,	// (0x00056b93) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdc9d,	// (0x00056bab) sat_plugin_idle_act4_pane_ParamLimits

0xdc9d,	// (0x00056bab) sat_plugin_idle_act4_pane

0xde50,	// (0x00056d5e) sat_plugin_idle_act4_pane_t1_ParamLimits

0xde50,	// (0x00056d5e) sat_plugin_idle_act4_pane_t1

0xde68,	// (0x00056d76) sat_plugin_idle_act4_pane_t2_ParamLimits

0xde68,	// (0x00056d76) sat_plugin_idle_act4_pane_t2

0xde80,	// (0x00056d8e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xde80,	// (0x00056d8e) sat_plugin_idle_act4_pane_t3

0xde98,	// (0x00056da6) sat_plugin_idle_act4_pane_t4_ParamLimits

0xde98,	// (0x00056da6) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd78,	// (0x00058c86) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd78,	// (0x00058c86) sat_plugin_idle_act4_pane_t

0x9774,	// (0x00052682) popup_battery_window_ParamLimits

0x9774,	// (0x00052682) popup_battery_window

0x9d6f,	// (0x00052c7d) bg_popup_sub_pane_cp25_ParamLimits

0x9d6f,	// (0x00052c7d) bg_popup_sub_pane_cp25

0x6f2a,	// (0x0004fe38) popup_battery_window_g1_ParamLimits

0x6f2a,	// (0x0004fe38) popup_battery_window_g1

0x6f36,	// (0x0004fe44) popup_battery_window_t1_ParamLimits

0x6f36,	// (0x0004fe44) popup_battery_window_t1

0x6f48,	// (0x0004fe56) popup_battery_window_t2_ParamLimits

0x6f48,	// (0x0004fe56) popup_battery_window_t2

0x0001,

0xfd81,	// (0x00058c8f) popup_battery_window_t_ParamLimits

0xfd81,	// (0x00058c8f) popup_battery_window_t

0xab6d,	// (0x00053a7b) midp_canvas_pane_ParamLimits

0xabdf,	// (0x00053aed) midp_keypad_pane_ParamLimits

0xabdf,	// (0x00053aed) midp_keypad_pane

0x2799,	// (0x0004b6a7) main_midp_pane_ParamLimits

0xcf39,	// (0x00055e47) signal_pane_g2_cp_ParamLimits

0xdeb0,	// (0x00056dbe) aid_size_cell_midp_keypad_ParamLimits

0xdeb0,	// (0x00056dbe) aid_size_cell_midp_keypad

0xdece,	// (0x00056ddc) midp_keyp_game_grid_pane_ParamLimits

0xdece,	// (0x00056ddc) midp_keyp_game_grid_pane

0xdef5,	// (0x00056e03) midp_keyp_rocker_pane_ParamLimits

0xdef5,	// (0x00056e03) midp_keyp_rocker_pane

0xdf46,	// (0x00056e54) midp_keyp_sk_left_pane_ParamLimits

0xdf46,	// (0x00056e54) midp_keyp_sk_left_pane

0xdf9a,	// (0x00056ea8) midp_keyp_sk_right_pane_ParamLimits

0xdf9a,	// (0x00056ea8) midp_keyp_sk_right_pane

0x9670,	// (0x0005257e) bg_button_pane_cp03

0xdfee,	// (0x00056efc) midp_keyp_sk_left_pane_g1

0x9670,	// (0x0005257e) bg_button_pane_cp04

0xdfee,	// (0x00056efc) midp_keyp_sk_right_pane_g1

0x5244,	// (0x0004e152) midp_keyp_rocker_pane_g1

0xdff7,	// (0x00056f05) keyp_game_cell_pane_ParamLimits

0xdff7,	// (0x00056f05) keyp_game_cell_pane

0x9670,	// (0x0005257e) bg_button_pane_cp02

0xe01b,	// (0x00056f29) keyp_game_cell_pane_g1

0x9794,	// (0x000526a2) popup_fep_vkb2_window_ParamLimits

0x9794,	// (0x000526a2) popup_fep_vkb2_window

0xb9d1,	// (0x000548df) aid_size_cell_vkb2_ParamLimits

0xb9d1,	// (0x000548df) aid_size_cell_vkb2

0xba0f,	// (0x0005491d) popup_fep_vkb2_window_g1_ParamLimits

0xba0f,	// (0x0005491d) popup_fep_vkb2_window_g1

0xba5f,	// (0x0005496d) vkb2_area_bottom_pane_ParamLimits

0xba5f,	// (0x0005496d) vkb2_area_bottom_pane

0xbab3,	// (0x000549c1) vkb2_area_keypad_pane_ParamLimits

0xbab3,	// (0x000549c1) vkb2_area_keypad_pane

0xbafb,	// (0x00054a09) vkb2_area_top_pane_ParamLimits

0xbafb,	// (0x00054a09) vkb2_area_top_pane

0xbb81,	// (0x00054a8f) vkb2_top_entry_pane_ParamLimits

0xbb81,	// (0x00054a8f) vkb2_top_entry_pane

0xbbae,	// (0x00054abc) vkb2_top_grid_left_pane_ParamLimits

0xbbae,	// (0x00054abc) vkb2_top_grid_left_pane

0xbbce,	// (0x00054adc) vkb2_top_grid_right_pane_ParamLimits

0xbbce,	// (0x00054adc) vkb2_top_grid_right_pane

0x1b06,	// (0x0004aa14) vkb2_cell_keypad_pane_ParamLimits

0x1b06,	// (0x0004aa14) vkb2_cell_keypad_pane

0xbc14,	// (0x00054b22) vkb2_area_bottom_grid_pane_ParamLimits

0xbc14,	// (0x00054b22) vkb2_area_bottom_grid_pane

0xbc3e,	// (0x00054b4c) vkb2_area_bottom_pane_g1_ParamLimits

0xbc3e,	// (0x00054b4c) vkb2_area_bottom_pane_g1

0xbc64,	// (0x00054b72) vkb2_area_bottom_pane_g2_ParamLimits

0xbc64,	// (0x00054b72) vkb2_area_bottom_pane_g2

0xbc95,	// (0x00054ba3) vkb2_area_bottom_pane_g3_ParamLimits

0xbc95,	// (0x00054ba3) vkb2_area_bottom_pane_g3

0x0002,

0xfd86,	// (0x00058c94) vkb2_area_bottom_pane_g_ParamLimits

0xfd86,	// (0x00058c94) vkb2_area_bottom_pane_g

0x1cb0,	// (0x0004abbe) vkb2_top_cell_left_pane_ParamLimits

0x1cb0,	// (0x0004abbe) vkb2_top_cell_left_pane

0xe024,	// (0x00056f32) vkb2_top_entry_pane_g1_ParamLimits

0xe024,	// (0x00056f32) vkb2_top_entry_pane_g1

0xe032,	// (0x00056f40) vkb2_top_entry_pane_t1_ParamLimits

0xe032,	// (0x00056f40) vkb2_top_entry_pane_t1

0x70f9,	// (0x00050007) vkb2_top_entry_pane_t2_ParamLimits

0x70f9,	// (0x00050007) vkb2_top_entry_pane_t2

0x712b,	// (0x00050039) vkb2_top_entry_pane_t3_ParamLimits

0x712b,	// (0x00050039) vkb2_top_entry_pane_t3

0x0002,

0xfd8d,	// (0x00058c9b) vkb2_top_entry_pane_t_ParamLimits

0xfd8d,	// (0x00058c9b) vkb2_top_entry_pane_t

0xbcff,	// (0x00054c0d) vkb2_top_grid_right_pane_g1_ParamLimits

0xbcff,	// (0x00054c0d) vkb2_top_grid_right_pane_g1

0x1d13,	// (0x0004ac21) vkb2_top_grid_right_pane_g2_ParamLimits

0x1d13,	// (0x0004ac21) vkb2_top_grid_right_pane_g2

0x1d2b,	// (0x0004ac39) vkb2_top_grid_right_pane_g3_ParamLimits

0x1d2b,	// (0x0004ac39) vkb2_top_grid_right_pane_g3

0xbd15,	// (0x00054c23) vkb2_top_grid_right_pane_g4_ParamLimits

0xbd15,	// (0x00054c23) vkb2_top_grid_right_pane_g4

0x0003,

0xfd94,	// (0x00058ca2) vkb2_top_grid_right_pane_g_ParamLimits

0xfd94,	// (0x00058ca2) vkb2_top_grid_right_pane_g

0x1d59,	// (0x0004ac67) vkb2_top_cell_left_pane_g1

0x1d70,	// (0x0004ac7e) vkb2_cell_keypad_pane_g1_ParamLimits

0x1d70,	// (0x0004ac7e) vkb2_cell_keypad_pane_g1

0x714f,	// (0x0005005d) vkb2_cell_keypad_pane_t1_ParamLimits

0x714f,	// (0x0005005d) vkb2_cell_keypad_pane_t1

0x1d7e,	// (0x0004ac8c) vkb2_cell_bottom_grid_pane_ParamLimits

0x1d7e,	// (0x0004ac8c) vkb2_cell_bottom_grid_pane

0x1db7,	// (0x0004acc5) vkb2_cell_bottom_grid_pane_g1

0xdcd2,	// (0x00056be0) aid_call2_pane_cp02

0xdcda,	// (0x00056be8) aid_call_pane_cp02

0xdce2,	// (0x00056bf0) clock_digital_number_pane_cp10

0xdcea,	// (0x00056bf8) clock_digital_number_pane_cp11

0xdcf2,	// (0x00056c00) clock_digital_number_pane_cp12

0xdcfa,	// (0x00056c08) clock_digital_number_pane_cp13

0xdd02,	// (0x00056c10) clock_digital_separator_pane_cp10

0xc012,	// (0x00054f20) popup_clock_digital_analogue_window_cp2_g1

0xc012,	// (0x00054f20) popup_clock_digital_analogue_window_cp2_g2

0xdd0a,	// (0x00056c18) popup_clock_digital_analogue_window_cp2_g3

0xc012,	// (0x00054f20) popup_clock_digital_analogue_window_cp2_g4

0xdd0a,	// (0x00056c18) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd49,	// (0x00058c57) popup_clock_digital_analogue_window_cp2_g

0xdd12,	// (0x00056c20) popup_clock_digital_analogue_window_cp2_t1

0xdd20,	// (0x00056c2e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd54,	// (0x00058c62) popup_clock_digital_analogue_window_cp2_t

0x5244,	// (0x0004e152) clock_digital_number_pane_cp10_g1

0x5244,	// (0x0004e152) clock_digital_number_pane_cp10_g2

0x0001,

0xfb43,	// (0x00058a51) clock_digital_number_pane_cp10_g

0x5244,	// (0x0004e152) clock_digital_separator_pane_cp10_g1

0x5244,	// (0x0004e152) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb43,	// (0x00058a51) clock_digital_separator_pane_cp10_g

0xdbcf,	// (0x00056add) uniindi_top_pane_g3

0x6b88,	// (0x0004fa96) uniindi_top_pane_g4

0x1b91,	// (0x0004aa9f) vkb2_row_keypad_pane_ParamLimits

0x1b91,	// (0x0004aa9f) vkb2_row_keypad_pane

0x1dd3,	// (0x0004ace1) vkb2_cell_t_keypad_pane_ParamLimits

0x1dd3,	// (0x0004ace1) vkb2_cell_t_keypad_pane

0x1de3,	// (0x0004acf1) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1de3,	// (0x0004acf1) vkb2_cell_t_keypad_pane_cp08

0x1df6,	// (0x0004ad04) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1df6,	// (0x0004ad04) vkb2_cell_t_keypad_pane_cp09

0x1e0a,	// (0x0004ad18) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1e0a,	// (0x0004ad18) vkb2_cell_t_keypad_pane_cp01

0x1e1b,	// (0x0004ad29) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1e1b,	// (0x0004ad29) vkb2_cell_t_keypad_pane_cp02

0x1e2c,	// (0x0004ad3a) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1e2c,	// (0x0004ad3a) vkb2_cell_t_keypad_pane_cp03

0x1e3d,	// (0x0004ad4b) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1e3d,	// (0x0004ad4b) vkb2_cell_t_keypad_pane_cp04

0x1e4e,	// (0x0004ad5c) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1e4e,	// (0x0004ad5c) vkb2_cell_t_keypad_pane_cp05

0x1e5f,	// (0x0004ad6d) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1e5f,	// (0x0004ad6d) vkb2_cell_t_keypad_pane_cp06

0x1e70,	// (0x0004ad7e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1e70,	// (0x0004ad7e) vkb2_cell_t_keypad_pane_cp07

0x1e81,	// (0x0004ad8f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1e81,	// (0x0004ad8f) vkb2_cell_t_keypad_pane_cp10

0x54b4,	// (0x0004e3c2) vkb2_cell_t_keypad_pane_g1

0x7166,	// (0x00050074) vkb2_cell_t_keypad_pane_t1

0x9670,	// (0x0005257e) popup_grid_graphic2_window

0xe06b,	// (0x00056f79) aid_size_cell_graphic2_ParamLimits

0xe06b,	// (0x00056f79) aid_size_cell_graphic2

0xe0a9,	// (0x00056fb7) bg_popup_window_pane_cp21_ParamLimits

0xe0a9,	// (0x00056fb7) bg_popup_window_pane_cp21

0xe0b7,	// (0x00056fc5) graphic2_pages_pane_ParamLimits

0xe0b7,	// (0x00056fc5) graphic2_pages_pane

0xe10d,	// (0x0005701b) grid_graphic2_control_pane_ParamLimits

0xe10d,	// (0x0005701b) grid_graphic2_control_pane

0xe4ef,	// (0x000573fd) grid_graphic2_pane_ParamLimits

0xe4ef,	// (0x000573fd) grid_graphic2_pane

0xe576,	// (0x00057484) cell_graphic2_pane

0x9670,	// (0x0005257e) main_comp_mode_pane

0x63fa,	// (0x0004f308) list_ai3_gene_pane_ParamLimits

0xd97e,	// (0x0005688c) bg_popup_window_pane_cp19_ParamLimits

0x67ca,	// (0x0004f6d8) bg_touch_area_indi_pane_ParamLimits

0x67ca,	// (0x0004f6d8) bg_touch_area_indi_pane

0x67e0,	// (0x0004f6ee) bg_touch_area_indi_pane_cp01_ParamLimits

0x67e0,	// (0x0004f6ee) bg_touch_area_indi_pane_cp01

0x67f6,	// (0x0004f704) bg_touch_area_indi_pane_cp02_ParamLimits

0x67f6,	// (0x0004f704) bg_touch_area_indi_pane_cp02

0x680e,	// (0x0004f71c) bg_touch_area_indi_pane_cp03_ParamLimits

0x680e,	// (0x0004f71c) bg_touch_area_indi_pane_cp03

0x6828,	// (0x0004f736) popup_slider_window_g1_ParamLimits

0x6844,	// (0x0004f752) popup_slider_window_g2_ParamLimits

0x6860,	// (0x0004f76e) popup_slider_window_g3_ParamLimits

0xfcde,	// (0x00058bec) popup_slider_window_g_ParamLimits

0x68bc,	// (0x0004f7ca) popup_slider_window_t1_ParamLimits

0x6930,	// (0x0004f83e) small_volume_slider_vertical_pane_ParamLimits

0xe576,	// (0x00057484) cell_graphic2_pane_ParamLimits

0xe5d1,	// (0x000574df) bg_button_pane_cp10_ParamLimits

0xe5d1,	// (0x000574df) bg_button_pane_cp10

0xe5e4,	// (0x000574f2) bg_button_pane_cp11_ParamLimits

0xe5e4,	// (0x000574f2) bg_button_pane_cp11

0xe5f7,	// (0x00057505) graphic2_pages_pane_g1_ParamLimits

0xe5f7,	// (0x00057505) graphic2_pages_pane_g1

0xe612,	// (0x00057520) graphic2_pages_pane_g2_ParamLimits

0xe612,	// (0x00057520) graphic2_pages_pane_g2

0x0001,

0xfda2,	// (0x00058cb0) graphic2_pages_pane_g_ParamLimits

0xfda2,	// (0x00058cb0) graphic2_pages_pane_g

0xe62a,	// (0x00057538) graphic2_pages_pane_t1_ParamLimits

0xe62a,	// (0x00057538) graphic2_pages_pane_t1

0xe642,	// (0x00057550) cell_graphic2_control_pane_ParamLimits

0xe642,	// (0x00057550) cell_graphic2_control_pane

0xe674,	// (0x00057582) cell_graphic2_pane_g1_ParamLimits

0xe674,	// (0x00057582) cell_graphic2_pane_g1

0xd173,	// (0x00056081) cell_graphic2_pane_g2_ParamLimits

0xd173,	// (0x00056081) cell_graphic2_pane_g2

0xe155,	// (0x00057063) cell_graphic2_pane_g3_ParamLimits

0xe155,	// (0x00057063) cell_graphic2_pane_g3

0xd180,	// (0x0005608e) cell_graphic2_pane_g4_ParamLimits

0xd180,	// (0x0005608e) cell_graphic2_pane_g4

0xe681,	// (0x0005758f) cell_graphic2_pane_g5_ParamLimits

0xe681,	// (0x0005758f) cell_graphic2_pane_g5

0x0004,

0xfda7,	// (0x00058cb5) cell_graphic2_pane_g_ParamLimits

0xfda7,	// (0x00058cb5) cell_graphic2_pane_g

0xe6a1,	// (0x000575af) cell_graphic2_pane_t1_ParamLimits

0xe6a1,	// (0x000575af) cell_graphic2_pane_t1

0x397c,	// (0x0004c88a) grid_highlight_pane_cp11_ParamLimits

0x397c,	// (0x0004c88a) grid_highlight_pane_cp11

0x9d6f,	// (0x00052c7d) bg_button_pane_cp05

0xe6ed,	// (0x000575fb) cell_graphic2_control_pane_g1

0x5244,	// (0x0004e152) bg_touch_area_indi_pane_g1

0x7442,	// (0x00050350) aid_cmod_rocker_key_size

0x744c,	// (0x0005035a) aid_cmode_itu_key_size

0x7456,	// (0x00050364) main_cmode_video_pane

0x7460,	// (0x0005036e) main_comp_mode_itu_pane

0x748d,	// (0x0005039b) main_comp_mode_rocker_pane

0x7499,	// (0x000503a7) cell_cmode_rocker_pane_ParamLimits

0x7499,	// (0x000503a7) cell_cmode_rocker_pane

0x74ab,	// (0x000503b9) cell_cmode_itu_pane_ParamLimits

0x74ab,	// (0x000503b9) cell_cmode_itu_pane

0xa335,	// (0x00053243) bg_button_pane_cp06_ParamLimits

0xa335,	// (0x00053243) bg_button_pane_cp06

0x54b4,	// (0x0004e3c2) cell_cmode_rocker_pane_g1_ParamLimits

0x54b4,	// (0x0004e3c2) cell_cmode_rocker_pane_g1

0x69d4,	// (0x0004f8e2) cell_cmode_rocker_pane_g2_ParamLimits

0x69d4,	// (0x0004f8e2) cell_cmode_rocker_pane_g2

0x0001,

0xfdb7,	// (0x00058cc5) cell_cmode_rocker_pane_g_ParamLimits

0xfdb7,	// (0x00058cc5) cell_cmode_rocker_pane_g

0x9670,	// (0x0005257e) bg_button_pane_cp07

0x74c0,	// (0x000503ce) cell_cmode_itu_pane_g1

0x74c9,	// (0x000503d7) cell_cmode_itu_pane_t1

0x74d7,	// (0x000503e5) cell_cmode_itu_pane_t2

0x0001,

0xfdbc,	// (0x00058cca) cell_cmode_itu_pane_t

0x6bf9,	// (0x0004fb07) aid_touch_ctrl_left

0x6c01,	// (0x0004fb0f) aid_touch_ctrl_right

0x9670,	// (0x0005257e) compa_mode_pane

0xe713,	// (0x00057621) aid_cmod_rocker_key_size_cp

0xe71d,	// (0x0005762b) aid_cmode_itu_key_size_cp

0x74f9,	// (0x00050407) compa_mode_pane_g1

0x7501,	// (0x0005040f) compa_mode_pane_g2

0x7509,	// (0x00050417) compa_mode_pane_g3

0x0002,

0xfdc1,	// (0x00058ccf) compa_mode_pane_g

0xe727,	// (0x00057635) main_comp_mode_itu_pane_cp

0xe72f,	// (0x0005763d) main_comp_mode_rocker_pane_cp

0xe737,	// (0x00057645) cell_cmode_itu_pane_cp_ParamLimits

0xe737,	// (0x00057645) cell_cmode_itu_pane_cp

0xe74c,	// (0x0005765a) cell_cmode_rocker_pane_cp_ParamLimits

0xe74c,	// (0x0005765a) cell_cmode_rocker_pane_cp

0xa335,	// (0x00053243) bg_button_pane_cp06_cp_ParamLimits

0xa335,	// (0x00053243) bg_button_pane_cp06_cp

0x54b4,	// (0x0004e3c2) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x54b4,	// (0x0004e3c2) cell_cmode_rocker_pane_g1_cp

0x5244,	// (0x0004e152) cell_cmode_rocker_pane_g2_cp

0x9670,	// (0x0005257e) bg_button_pane_cp07_cp

0xe75e,	// (0x0005766c) cell_cmode_itu_pane_g1_cp

0xe767,	// (0x00057675) cell_cmode_itu_pane_t1_cp

0xe767,	// (0x00057675) cell_cmode_itu_pane_t2_cp

0xcccd,	// (0x00055bdb) settings_code_pane_cp2

0x9a05,	// (0x00052913) bg_popup_window_pane_cp3_ParamLimits

0x9f49,	// (0x00052e57) heading_pane_cp3_ParamLimits

0x9f55,	// (0x00052e63) listscroll_popup_graphic_pane_ParamLimits

0x13d5,	// (0x0004a2e3) fep_hwr_aid_pane_ParamLimits

0x1873,	// (0x0004a781) aid_touch_sctrl_top_ParamLimits

0x1880,	// (0x0004a78e) sctrl_sk_top_pane_g1_ParamLimits

0x54b4,	// (0x0004e3c2) sctrl_sk_top_pane_g2_ParamLimits

0xfcf7,	// (0x00058c05) sctrl_sk_top_pane_g_ParamLimits

0x188d,	// (0x0004a79b) sctrl_sk_top_pane_t1_ParamLimits

0x1873,	// (0x0004a781) aid_touch_sctrl_bottom_ParamLimits

0x188d,	// (0x0004a79b) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb9b,	// (0x00056aa9) aid_area_touch_clock

0xbb43,	// (0x00054a51) aid_vkb2_area_top_pane_cell_ParamLimits

0xbb43,	// (0x00054a51) aid_vkb2_area_top_pane_cell

0xbbee,	// (0x00054afc) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbbee,	// (0x00054afc) aid_vkb2_area_bottom_pane_cell

0x70b1,	// (0x0004ffbf) popup_char_count_window

0x755f,	// (0x0005046d) popup_char_count_window_g1

0x7568,	// (0x00050476) popup_char_count_window_g2

0x7571,	// (0x0005047f) popup_char_count_window_g3

0x0002,

0xfdc8,	// (0x00058cd6) popup_char_count_window_g

0x757a,	// (0x00050488) popup_char_count_window_t1

0x192e,	// (0x0004a83c) popup_fep_char_preview_window_ParamLimits

0x192e,	// (0x0004a83c) popup_fep_char_preview_window

0xbb63,	// (0x00054a71) vkb2_top_candi_pane_ParamLimits

0xbb63,	// (0x00054a71) vkb2_top_candi_pane

0xe775,	// (0x00057683) cell_vkb2_top_candi_pane_ParamLimits

0xe775,	// (0x00057683) cell_vkb2_top_candi_pane

0x3320,	// (0x0004c22e) bg_popup_fep_char_preview_window_ParamLimits

0x3320,	// (0x0004c22e) bg_popup_fep_char_preview_window

0x1e96,	// (0x0004ada4) popup_fep_char_preview_window_t1_ParamLimits

0x1e96,	// (0x0004ada4) popup_fep_char_preview_window_t1

0x75d5,	// (0x000504e3) bg_popup_fep_char_preview_window_g1

0x75dd,	// (0x000504eb) bg_popup_fep_char_preview_window_g2

0x75e5,	// (0x000504f3) bg_popup_fep_char_preview_window_g3

0x75ed,	// (0x000504fb) bg_popup_fep_char_preview_window_g4

0x75f5,	// (0x00050503) bg_popup_fep_char_preview_window_g5

0x1ed0,	// (0x0004adde) bg_popup_fep_char_preview_window_g6

0x75fd,	// (0x0005050b) bg_popup_fep_char_preview_window_g7

0x7605,	// (0x00050513) bg_popup_fep_char_preview_window_g8

0x760d,	// (0x0005051b) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcf,	// (0x00058cdd) bg_popup_fep_char_preview_window_g

0x54b4,	// (0x0004e3c2) cell_vkb2_top_candi_pane_g1_ParamLimits

0x54b4,	// (0x0004e3c2) cell_vkb2_top_candi_pane_g1

0x57cb,	// (0x0004e6d9) cell_vkb2_top_candi_pane_g2_ParamLimits

0x57cb,	// (0x0004e6d9) cell_vkb2_top_candi_pane_g2

0x57ec,	// (0x0004e6fa) cell_vkb2_top_candi_pane_g3_ParamLimits

0x57ec,	// (0x0004e6fa) cell_vkb2_top_candi_pane_g3

0x1ed8,	// (0x0004ade6) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1ed8,	// (0x0004ade6) cell_vkb2_top_candi_pane_g4

0x746c,	// (0x0005037a) cell_vkb2_top_candi_pane_g5_ParamLimits

0x746c,	// (0x0005037a) cell_vkb2_top_candi_pane_g5

0x69d4,	// (0x0004f8e2) cell_vkb2_top_candi_pane_g6_ParamLimits

0x69d4,	// (0x0004f8e2) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde2,	// (0x00058cf0) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde2,	// (0x00058cf0) cell_vkb2_top_candi_pane_g

0x1ef9,	// (0x0004ae07) cell_vkb2_top_candi_pane_t1

0xb749,	// (0x00054657) aid_size_touch_slider_mark_ParamLimits

0xb749,	// (0x00054657) aid_size_touch_slider_mark

0xe0f3,	// (0x00057001) grid_graphic2_catg_pane_ParamLimits

0xe0f3,	// (0x00057001) grid_graphic2_catg_pane

0xe549,	// (0x00057457) popup_grid_graphic2_window_t1_ParamLimits

0xe549,	// (0x00057457) popup_grid_graphic2_window_t1

0xe55f,	// (0x0005746d) popup_grid_graphic2_window_t2_ParamLimits

0xe55f,	// (0x0005746d) popup_grid_graphic2_window_t2

0x0001,

0xfd9d,	// (0x00058cab) popup_grid_graphic2_window_t_ParamLimits

0xfd9d,	// (0x00058cab) popup_grid_graphic2_window_t

0x9d6f,	// (0x00052c7d) bg_button_pane_cp05_ParamLimits

0xe6ed,	// (0x000575fb) cell_graphic2_control_pane_g1_ParamLimits

0xe7db,	// (0x000576e9) cell_graphic2_catg_pane_ParamLimits

0xe7db,	// (0x000576e9) cell_graphic2_catg_pane

0x9670,	// (0x0005257e) bg_button_pane_cp12

0xe7ed,	// (0x000576fb) cell_graphic2_catg_pane_g1

0x6b0e,	// (0x0004fa1c) cell_tb_ext_pane_t1_ParamLimits

0x1cd0,	// (0x0004abde) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1cd0,	// (0x0004abde) vkb2_top_cell_right_narrow_pane

0x1ce8,	// (0x0004abf6) vkb2_top_cell_right_wide_pane_ParamLimits

0x1ce8,	// (0x0004abf6) vkb2_top_cell_right_wide_pane

0x13c7,	// (0x0004a2d5) bg_vkb2_func_pane_ParamLimits

0x13c7,	// (0x0004a2d5) bg_vkb2_func_pane

0x1d59,	// (0x0004ac67) vkb2_top_cell_left_pane_g1_ParamLimits

0x13c7,	// (0x0004a2d5) bg_vkb2_fuc_pane_cp03_ParamLimits

0x13c7,	// (0x0004a2d5) bg_vkb2_fuc_pane_cp03

0x1db7,	// (0x0004acc5) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2cae,	// (0x0004bbbc) bg_vkb2_func_pane_g1

0x2cb6,	// (0x0004bbc4) bg_vkb2_func_pane_g2

0x2cc6,	// (0x0004bbd4) bg_vkb2_func_pane_g3

0x2cbe,	// (0x0004bbcc) bg_vkb2_func_pane_g4

0x2cce,	// (0x0004bbdc) bg_vkb2_func_pane_g5

0x2cd6,	// (0x0004bbe4) bg_vkb2_func_pane_g6

0x2cde,	// (0x0004bbec) bg_vkb2_func_pane_g7

0x2ce6,	// (0x0004bbf4) bg_vkb2_func_pane_g8

0x2ca6,	// (0x0004bbb4) bg_vkb2_func_pane_g9

0x0008,

0xfdef,	// (0x00058cfd) bg_vkb2_func_pane_g

0x13c7,	// (0x0004a2d5) bg_vkb2_fuc_pane_cp01_ParamLimits

0x13c7,	// (0x0004a2d5) bg_vkb2_fuc_pane_cp01

0x1d59,	// (0x0004ac67) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1d59,	// (0x0004ac67) vkb2_top_cell_right_wide_pane_g1

0x13c7,	// (0x0004a2d5) bg_vkb2_fuc_pane_cp02_ParamLimits

0x13c7,	// (0x0004a2d5) bg_vkb2_fuc_pane_cp02

0x1db7,	// (0x0004acc5) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1db7,	// (0x0004acc5) vkb2_top_cell_right_narrow_pane_g1

0xd8bc,	// (0x000567ca) aid_touch_area_decrease_ParamLimits

0xd8bc,	// (0x000567ca) aid_touch_area_decrease

0xd8f2,	// (0x00056800) aid_touch_area_increase_ParamLimits

0xd8f2,	// (0x00056800) aid_touch_area_increase

0xd91a,	// (0x00056828) aid_touch_area_mute_ParamLimits

0xd91a,	// (0x00056828) aid_touch_area_mute

0xd94a,	// (0x00056858) aid_touch_area_slider_ParamLimits

0xd94a,	// (0x00056858) aid_touch_area_slider

0xd98a,	// (0x00056898) popup_slider_window_g4_ParamLimits

0xd98a,	// (0x00056898) popup_slider_window_g4

0xd9b2,	// (0x000568c0) popup_slider_window_g5_ParamLimits

0xd9b2,	// (0x000568c0) popup_slider_window_g5

0xd9e6,	// (0x000568f4) popup_slider_window_g6_ParamLimits

0xd9e6,	// (0x000568f4) popup_slider_window_g6

0x68ea,	// (0x0004f7f8) popup_slider_window_t2_ParamLimits

0x68ea,	// (0x0004f7f8) popup_slider_window_t2

0x0001,

0xfceb,	// (0x00058bf9) popup_slider_window_t_ParamLimits

0xfceb,	// (0x00058bf9) popup_slider_window_t

0xda02,	// (0x00056910) slider_pane_ParamLimits

0xda02,	// (0x00056910) slider_pane

0x7630,	// (0x0005053e) slider_pane_g1_ParamLimits

0x7630,	// (0x0005053e) slider_pane_g1

0x7644,	// (0x00050552) slider_pane_g2_ParamLimits

0x7644,	// (0x00050552) slider_pane_g2

0x765a,	// (0x00050568) slider_pane_g3_ParamLimits

0x765a,	// (0x00050568) slider_pane_g3

0x0003,

0xfe02,	// (0x00058d10) slider_pane_g_ParamLimits

0xfe02,	// (0x00058d10) slider_pane_g

0xb568,	// (0x00054476) popup_tb_float_extension_window_ParamLimits

0xb568,	// (0x00054476) popup_tb_float_extension_window

0x7686,	// (0x00050594) aid_size_cell_tb_float_ext

0x9670,	// (0x0005257e) bg_popup_sub_window_cp28

0xe7f6,	// (0x00057704) grid_tb_float_ext_pane

0xe800,	// (0x0005770e) cell_tb_float_ext_pane_ParamLimits

0xe800,	// (0x0005770e) cell_tb_float_ext_pane

0xe81a,	// (0x00057728) cell_tb_float_ext_pane_g1

0xe823,	// (0x00057731) grid_highlight_pane_cp12

0xb861,	// (0x0005476f) cell_last_hwr_side_pane_ParamLimits

0xb861,	// (0x0005476f) cell_last_hwr_side_pane

0x5244,	// (0x0004e152) cell_last_hwr_side_pane_g1

0x76c8,	// (0x000505d6) cell_last_hwr_side_pane_g2

0x0001,

0xfe0b,	// (0x00058d19) cell_last_hwr_side_pane_g

0xbcca,	// (0x00054bd8) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbcca,	// (0x00054bd8) vkb2_area_bottom_space_btn_pane

0x54b4,	// (0x0004e3c2) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7166,	// (0x00050074) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1ef9,	// (0x0004ae07) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1f18,	// (0x0004ae26) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1f18,	// (0x0004ae26) vkb2_area_bottom_space_btn_pane_g1

0x1f52,	// (0x0004ae60) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1f52,	// (0x0004ae60) vkb2_area_bottom_space_btn_pane_g2

0x1f88,	// (0x0004ae96) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1f88,	// (0x0004ae96) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe10,	// (0x00058d1e) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe10,	// (0x00058d1e) vkb2_area_bottom_space_btn_pane_g

0x147c,	// (0x0004a38a) cel_fep_hwr_func_pane_ParamLimits

0x147c,	// (0x0004a38a) cel_fep_hwr_func_pane

0xb836,	// (0x00054744) cell_hwr_side_button_pane_ParamLimits

0xb836,	// (0x00054744) cell_hwr_side_button_pane

0xdb9b,	// (0x00056aa9) aid_area_touch_clock_ParamLimits

0x9d6f,	// (0x00052c7d) bg_uniindi_top_pane_ParamLimits

0xdbad,	// (0x00056abb) uniindi_top_pane_g1_ParamLimits

0xdbc3,	// (0x00056ad1) uniindi_top_pane_g2_ParamLimits

0xdbcf,	// (0x00056add) uniindi_top_pane_g3_ParamLimits

0x6b88,	// (0x0004fa96) uniindi_top_pane_g4_ParamLimits

0xfd23,	// (0x00058c31) uniindi_top_pane_g_ParamLimits

0xdbe0,	// (0x00056aee) uniindi_top_pane_t1_ParamLimits

0x9d6f,	// (0x00052c7d) bg_vkb2_func_pane_cp01_ParamLimits

0x9d6f,	// (0x00052c7d) bg_vkb2_func_pane_cp01

0x76d1,	// (0x000505df) cel_fep_hwr_func_pane_g1_ParamLimits

0x76d1,	// (0x000505df) cel_fep_hwr_func_pane_g1

0x9d6f,	// (0x00052c7d) bg_vkb2_func_pane_cp02_ParamLimits

0x9d6f,	// (0x00052c7d) bg_vkb2_func_pane_cp02

0x76d1,	// (0x000505df) cell_hwr_side_button_pane_g1_ParamLimits

0x76d1,	// (0x000505df) cell_hwr_side_button_pane_g1

0x2b2a,	// (0x0004ba38) status_pane_g4_ParamLimits

0x2b2a,	// (0x0004ba38) status_pane_g4

0x2b44,	// (0x0004ba52) status_pane_t1

0x4f7f,	// (0x0004de8d) form2_midp_gauge_slider_cont_pane

0x4f87,	// (0x0004de95) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd062,	// (0x00055f70) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd074,	// (0x00055f82) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf6,	// (0x00058a04) form2_midp_gauge_slider_pane_t_ParamLimits

0x4fbd,	// (0x0004decb) form2_midp_slider_pane_ParamLimits

0x18ee,	// (0x0004a7fc) aid_size_cell_func_vkb2_ParamLimits

0x18ee,	// (0x0004a7fc) aid_size_cell_func_vkb2

0x7672,	// (0x00050580) slider_pane_g4_ParamLimits

0x7672,	// (0x00050580) slider_pane_g4

0xbd2b,	// (0x00054c39) form2_midp_gauge_slider_pane_t2_cp01

0xbd39,	// (0x00054c47) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbd39,	// (0x00054c47) form2_midp_gauge_slider_pane_t3_cp01

0x1ffd,	// (0x0004af0b) form2_midp_slider_pane_cp01

0x9670,	// (0x0005257e) navi_smil_pane

0x770a,	// (0x00050618) navi_smil_pane_g1

0x7712,	// (0x00050620) navi_smil_pane_t1

0x76df,	// (0x000505ed) form2_midp_slider_pane_g1

0x76e8,	// (0x000505f6) form2_midp_slider_pane_g2

0x76f0,	// (0x000505fe) form2_midp_slider_pane_g3

0x76df,	// (0x000505ed) form2_midp_slider_pane_g4

0xe82c,	// (0x0005773a) form2_midp_slider_pane_g5

0x0004,

0xfe19,	// (0x00058d27) form2_midp_slider_pane_g

0x1fc2,	// (0x0004aed0) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1fc2,	// (0x0004aed0) vkb2_area_bottom_space_btn_pane_g4

0xc22c,	// (0x0005513a) lc0_navi_pane_ParamLimits

0xc22c,	// (0x0005513a) lc0_navi_pane

0xc296,	// (0x000551a4) lc0_stat_indi_pane_ParamLimits

0xc296,	// (0x000551a4) lc0_stat_indi_pane

0xc2ab,	// (0x000551b9) ls0_title_pane_ParamLimits

0xc2ab,	// (0x000551b9) ls0_title_pane

0xa335,	// (0x00053243) bg_popup_sub_pane_cp14_ParamLimits

0xdb82,	// (0x00056a90) list_uniindi_pane_ParamLimits

0xdb8e,	// (0x00056a9c) uniindi_top_pane_ParamLimits

0x6bd1,	// (0x0004fadf) list_single_uniindi_pane_g1_ParamLimits

0x6be4,	// (0x0004faf2) list_single_uniindi_pane_t1_ParamLimits

0xbd56,	// (0x00054c64) lc0_stat_clock_pane_ParamLimits

0xbd56,	// (0x00054c64) lc0_stat_clock_pane

0xe837,	// (0x00057745) lc0_stat_indi_pane_g1_ParamLimits

0xe837,	// (0x00057745) lc0_stat_indi_pane_g1

0xe844,	// (0x00057752) lc0_stat_indi_pane_g2_ParamLimits

0xe844,	// (0x00057752) lc0_stat_indi_pane_g2

0x0001,

0xfe24,	// (0x00058d32) lc0_stat_indi_pane_g_ParamLimits

0xfe24,	// (0x00058d32) lc0_stat_indi_pane_g

0xbd66,	// (0x00054c74) lc0_uni_indicator_pane_ParamLimits

0xbd66,	// (0x00054c74) lc0_uni_indicator_pane

0xe851,	// (0x0005775f) ls0_title_pane_g1_ParamLimits

0xe851,	// (0x0005775f) ls0_title_pane_g1

0xe865,	// (0x00057773) ls0_title_pane_t1_ParamLimits

0xe865,	// (0x00057773) ls0_title_pane_t1

0xbd76,	// (0x00054c84) lc0_uni_indicator_pane_g1_ParamLimits

0xbd76,	// (0x00054c84) lc0_uni_indicator_pane_g1

0x7784,	// (0x00050692) lc0_stat_clock_pane_t1

0x9670,	// (0x0005257e) main_ai5_pane

0x7792,	// (0x000506a0) ai5_sk_pane_ParamLimits

0x7792,	// (0x000506a0) ai5_sk_pane

0xe893,	// (0x000577a1) cell_ai5_widget_pane_ParamLimits

0xe893,	// (0x000577a1) cell_ai5_widget_pane

0x7851,	// (0x0005075f) aid_size_cell_widget_grid

0x785f,	// (0x0005076d) bg_ai5_widget_pane_ParamLimits

0x785f,	// (0x0005076d) bg_ai5_widget_pane

0x78d3,	// (0x000507e1) cell_ai5_widget_pane_g2

0x78e3,	// (0x000507f1) cell_ai5_widget_pane_g3

0x78fa,	// (0x00050808) cell_ai5_widget_pane_g4

0x7906,	// (0x00050814) cell_ai5_widget_pane_g5

0x7912,	// (0x00050820) cell_ai5_widget_pane_g6

0x791e,	// (0x0005082c) cell_ai5_widget_pane_g7

0x7966,	// (0x00050874) cell_ai5_widget_pane_t1_ParamLimits

0x7966,	// (0x00050874) cell_ai5_widget_pane_t1

0x7983,	// (0x00050891) cell_ai5_widget_pane_t2_ParamLimits

0x7983,	// (0x00050891) cell_ai5_widget_pane_t2

0x799b,	// (0x000508a9) cell_ai5_widget_pane_t3_ParamLimits

0x799b,	// (0x000508a9) cell_ai5_widget_pane_t3

0x79b3,	// (0x000508c1) cell_ai5_widget_pane_t4_ParamLimits

0x79b3,	// (0x000508c1) cell_ai5_widget_pane_t4

0x79d0,	// (0x000508de) cell_ai5_widget_pane_t5_ParamLimits

0x79d0,	// (0x000508de) cell_ai5_widget_pane_t5

0x79ef,	// (0x000508fd) cell_ai5_widget_pane_t6_ParamLimits

0x79ef,	// (0x000508fd) cell_ai5_widget_pane_t6

0x7a01,	// (0x0005090f) cell_ai5_widget_pane_t7_ParamLimits

0x7a01,	// (0x0005090f) cell_ai5_widget_pane_t7

0x7a1a,	// (0x00050928) cell_ai5_widget_pane_t8_ParamLimits

0x7a1a,	// (0x00050928) cell_ai5_widget_pane_t8

0x0009,

0xfe3e,	// (0x00058d4c) cell_ai5_widget_pane_t_ParamLimits

0xfe3e,	// (0x00058d4c) cell_ai5_widget_pane_t

0x7a6e,	// (0x0005097c) grid_ai5_widget_pane

0xa335,	// (0x00053243) highlight_cell_ai5_widget_pane_ParamLimits

0xa335,	// (0x00053243) highlight_cell_ai5_widget_pane

0xe8f9,	// (0x00057807) ai5_sk_left_pane

0xe903,	// (0x00057811) ai5_sk_middle_pane

0xe90d,	// (0x0005781b) ai5_sk_right_pane

0x7a9a,	// (0x000509a8) bg_ai5_widget_pane_g1_ParamLimits

0x7a9a,	// (0x000509a8) bg_ai5_widget_pane_g1

0x7aa6,	// (0x000509b4) bg_ai5_widget_pane_g2_ParamLimits

0x7aa6,	// (0x000509b4) bg_ai5_widget_pane_g2

0x7ab2,	// (0x000509c0) bg_ai5_widget_pane_g3_ParamLimits

0x7ab2,	// (0x000509c0) bg_ai5_widget_pane_g3

0x7abe,	// (0x000509cc) bg_ai5_widget_pane_g4_ParamLimits

0x7abe,	// (0x000509cc) bg_ai5_widget_pane_g4

0x7aca,	// (0x000509d8) bg_ai5_widget_pane_g5_ParamLimits

0x7aca,	// (0x000509d8) bg_ai5_widget_pane_g5

0x7ad6,	// (0x000509e4) bg_ai5_widget_pane_g6_ParamLimits

0x7ad6,	// (0x000509e4) bg_ai5_widget_pane_g6

0x7ae2,	// (0x000509f0) bg_ai5_widget_pane_g7_ParamLimits

0x7ae2,	// (0x000509f0) bg_ai5_widget_pane_g7

0x7aee,	// (0x000509fc) bg_ai5_widget_pane_g8_ParamLimits

0x7aee,	// (0x000509fc) bg_ai5_widget_pane_g8

0x7afa,	// (0x00050a08) bg_ai5_widget_pane_g9_ParamLimits

0x7afa,	// (0x00050a08) bg_ai5_widget_pane_g9

0x0008,

0xfe53,	// (0x00058d61) bg_ai5_widget_pane_g_ParamLimits

0xfe53,	// (0x00058d61) bg_ai5_widget_pane_g

0x7b2c,	// (0x00050a3a) cell_shortcut_ai5_widget_pane_ParamLimits

0x7b2c,	// (0x00050a3a) cell_shortcut_ai5_widget_pane

0x244e,	// (0x0004b35c) bg_cell_shortcut_ai5_widget_pane

0x7b3d,	// (0x00050a4b) cell_grid_ai5_widget_pane_g1

0x244e,	// (0x0004b35c) highlight_cell_shortcut_ai5_widget_pane

0x2cb6,	// (0x0004bbc4) ai5_sk_left_pane_g1

0x7b46,	// (0x00050a54) ai5_sk_left_pane_g2

0x7b4e,	// (0x00050a5c) ai5_sk_left_pane_g3

0x7b56,	// (0x00050a64) ai5_sk_left_pane_g4

0x0003,

0xfe66,	// (0x00058d74) ai5_sk_left_pane_g

0x7b5e,	// (0x00050a6c) ai5_sk_left_pane_t1

0x2cae,	// (0x0004bbbc) ai5_sk_right_pane_g1

0x7b6c,	// (0x00050a7a) ai5_sk_right_pane_g2

0x7b74,	// (0x00050a82) ai5_sk_right_pane_g3

0x7b7c,	// (0x00050a8a) ai5_sk_right_pane_g4

0x0003,

0xfe6f,	// (0x00058d7d) ai5_sk_right_pane_g

0x7b84,	// (0x00050a92) ai5_sk_right_pane_t1

0x2cae,	// (0x0004bbbc) ai5_sk_middle_pane_g1

0x2cb6,	// (0x0004bbc4) ai5_sk_middle_pane_g2

0x2cce,	// (0x0004bbdc) ai5_sk_middle_pane_g3

0x7b74,	// (0x00050a82) ai5_sk_middle_pane_g4

0x7b4e,	// (0x00050a5c) ai5_sk_middle_pane_g5

0x7b92,	// (0x00050aa0) ai5_sk_middle_pane_g6

0xe917,	// (0x00057825) ai5_sk_middle_pane_g7

0x0006,

0xfe78,	// (0x00058d86) ai5_sk_middle_pane_g

0xc118,	// (0x00055026) aid_touch_area_size_lc0_ParamLimits

0xc118,	// (0x00055026) aid_touch_area_size_lc0

0x1607,	// (0x0004a515) cell_hwr_candidate_pane_t1_ParamLimits

0x27fb,	// (0x0004b709) aid_touch_navi_pane

0xc3a4,	// (0x000552b2) status_dt_navi_pane_ParamLimits

0xc3a4,	// (0x000552b2) status_dt_navi_pane

0xc3bc,	// (0x000552ca) status_dt_sta_pane_ParamLimits

0xc3bc,	// (0x000552ca) status_dt_sta_pane

0xe91f,	// (0x0005782d) dt_sta_controll_pane

0xe92c,	// (0x0005783a) dt_sta_indi_pane

0xe939,	// (0x00057847) dt_sta_title_pane

0x9d6f,	// (0x00052c7d) bg_dt_sta_indi_pane_ParamLimits

0x9d6f,	// (0x00052c7d) bg_dt_sta_indi_pane

0xe94b,	// (0x00057859) dt_sta_battery_pane

0xe953,	// (0x00057861) dt_sta_indi_pane_g1

0x7be4,	// (0x00050af2) dt_sta_indi_pane_g2

0x7bed,	// (0x00050afb) dt_sta_indi_pane_g3

0x0002,

0xfe87,	// (0x00058d95) dt_sta_indi_pane_g

0x7bf6,	// (0x00050b04) dt_sta_signal_pane

0xa335,	// (0x00053243) bg_dt_sta_title_pane_ParamLimits

0xa335,	// (0x00053243) bg_dt_sta_title_pane

0x3adc,	// (0x0004c9ea) dt_sta_title_pane_g1

0xe95c,	// (0x0005786a) dt_sta_title_pane_t1_ParamLimits

0xe95c,	// (0x0005786a) dt_sta_title_pane_t1

0x9670,	// (0x0005257e) bg_dt_sta_control_pane

0xe971,	// (0x0005787f) dt_sta_controll_pane_g1

0xe97a,	// (0x00057888) bg_dt_sta_title_pane_g1

0xe983,	// (0x00057891) bg_dt_sta_title_pane_g2

0xe98c,	// (0x0005789a) bg_dt_sta_title_pane_g3

0x0002,

0xfe8e,	// (0x00058d9c) bg_dt_sta_title_pane_g

0x5244,	// (0x0004e152) bg_dt_sta_indi_pane_g1

0x7c38,	// (0x00050b46) dt_sta_signal_pane_g1

0x7c40,	// (0x00050b4e) dt_sta_signal_pane_g2

0x0001,

0xfe95,	// (0x00058da3) dt_sta_signal_pane_g

0x7c48,	// (0x00050b56) dt_sta_battery_pane_g1

0x7c51,	// (0x00050b5f) dt_sta_battery_pane_t1

0x5244,	// (0x0004e152) bg_dt_sta_control_pane_g1

0xc095,	// (0x00054fa3) fep_china_uni_eep_pane

0xc09d,	// (0x00054fab) fep_china_uni_entry_pane_ParamLimits

0xc0ad,	// (0x00054fbb) popup_fep_china_uni_window_g1_ParamLimits

0xc0bd,	// (0x00054fcb) popup_fep_china_uni_window_g2_ParamLimits

0xc0bd,	// (0x00054fcb) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x00058626) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x00058626) popup_fep_china_uni_window_g

0x7c60,	// (0x00050b6e) fep_china_uni_eep_pane_g1

0x7c68,	// (0x00050b76) fep_china_uni_eep_pane_t1

0x7701,	// (0x0005060f) aid_touch_area_size_smil_player

0x2951,	// (0x0004b85f) lc0_clock_pane

0x2b38,	// (0x0004ba46) status_pane_g5_ParamLimits

0x2b38,	// (0x0004ba46) status_pane_g5

0xb09e,	// (0x00053fac) popup_keymap_window

0x2af6,	// (0x0004ba04) status_icon_pane

0x78e3,	// (0x000507f1) cell_ai5_widget_pane_g3_ParamLimits

0x78fa,	// (0x00050808) cell_ai5_widget_pane_g4_ParamLimits

0x7906,	// (0x00050814) cell_ai5_widget_pane_g5_ParamLimits

0x792a,	// (0x00050838) cell_ai5_widget_pane_g8_ParamLimits

0x792a,	// (0x00050838) cell_ai5_widget_pane_g8

0x793e,	// (0x0005084c) cell_ai5_widget_pane_g9_ParamLimits

0x793e,	// (0x0005084c) cell_ai5_widget_pane_g9

0x7952,	// (0x00050860) cell_ai5_widget_pane_g10_ParamLimits

0x7952,	// (0x00050860) cell_ai5_widget_pane_g10

0x7c77,	// (0x00050b85) status_icon_pane_g1

0x9670,	// (0x0005257e) bg_popup_sub_pane_cp13

0x7c7f,	// (0x00050b8d) popup_keymap_window_t1

0xad4a,	// (0x00053c58) control_pane_g6_ParamLimits

0xad4a,	// (0x00053c58) control_pane_g6

0xad57,	// (0x00053c65) control_pane_g7_ParamLimits

0xad57,	// (0x00053c65) control_pane_g7

0xad64,	// (0x00053c72) control_pane_g8_ParamLimits

0xad64,	// (0x00053c72) control_pane_g8

0xe91f,	// (0x0005782d) dt_sta_controll_pane_ParamLimits

0xe92c,	// (0x0005783a) dt_sta_indi_pane_ParamLimits

0xe939,	// (0x00057847) dt_sta_title_pane_ParamLimits

0xa212,	// (0x00053120) aid_size_touch_scroll_bar_cale

0x9788,	// (0x00052696) popup_discreet_window_ParamLimits

0x9788,	// (0x00052696) popup_discreet_window

0x97da,	// (0x000526e8) popup_sk_window

0x3320,	// (0x0004c22e) bg_popup_sub_pane_cp28_ParamLimits

0x3320,	// (0x0004c22e) bg_popup_sub_pane_cp28

0x7c8d,	// (0x00050b9b) popup_discreet_window_g1_ParamLimits

0x7c8d,	// (0x00050b9b) popup_discreet_window_g1

0xe995,	// (0x000578a3) popup_discreet_window_t1_ParamLimits

0xe995,	// (0x000578a3) popup_discreet_window_t1

0x7ccb,	// (0x00050bd9) popup_discreet_window_t2_ParamLimits

0x7ccb,	// (0x00050bd9) popup_discreet_window_t2

0x0002,

0xfe9a,	// (0x00058da8) popup_discreet_window_t_ParamLimits

0xfe9a,	// (0x00058da8) popup_discreet_window_t

0x2034,	// (0x0004af42) popup_sk_window_g1

0x203e,	// (0x0004af4c) popup_sk_window_g2

0x0001,

0xfea1,	// (0x00058daf) popup_sk_window_g

0xbda1,	// (0x00054caf) popup_sk_window_t1

0xbdaf,	// (0x00054cbd) popup_sk_window_t1_copy1

0x78d3,	// (0x000507e1) cell_ai5_widget_pane_g2_ParamLimits

0x7a2c,	// (0x0005093a) cell_ai5_widget_pane_t9_ParamLimits

0x7a2c,	// (0x0005093a) cell_ai5_widget_pane_t9

0x9670,	// (0x0005257e) main_fep_fshwr2_pane

0xbdbd,	// (0x00054ccb) aid_fshwr2_btn_pane

0xbdcf,	// (0x00054cdd) aid_fshwr2_syb_pane

0xbde1,	// (0x00054cef) aid_fshwr2_txt_pane

0xbdf0,	// (0x00054cfe) fshwr2_func_candi_pane

0xbe0f,	// (0x00054d1d) fshwr2_hwr_syb_pane

0xbe2a,	// (0x00054d38) fshwr2_icf_pane

0x9670,	// (0x0005257e) fshwr2_icf_bg_pane

0x20e3,	// (0x0004aff1) fshwr2_icf_pane_t1_ParamLimits

0x20e3,	// (0x0004aff1) fshwr2_icf_pane_t1

0xc012,	// (0x00054f20) fshwr2_func_candi_pane_g1

0xe9b3,	// (0x000578c1) fshwr2_func_candi_row_pane_ParamLimits

0xe9b3,	// (0x000578c1) fshwr2_func_candi_row_pane

0xbe56,	// (0x00054d64) cell_fshwr2_syb_pane_ParamLimits

0xbe56,	// (0x00054d64) cell_fshwr2_syb_pane

0x54b4,	// (0x0004e3c2) fshwr2_hwr_syb_pane_g1_ParamLimits

0x54b4,	// (0x0004e3c2) fshwr2_hwr_syb_pane_g1

0x9670,	// (0x0005257e) bg_popup_call_pane_cp01

0xbe6c,	// (0x00054d7a) fshwr2_func_candi_cell_pane_ParamLimits

0xbe6c,	// (0x00054d7a) fshwr2_func_candi_cell_pane

0xe9d6,	// (0x000578e4) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe9d6,	// (0x000578e4) fshwr2_func_candi_cell_bg_pane

0xbeb7,	// (0x00054dc5) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xbeb7,	// (0x00054dc5) fshwr2_func_candi_cell_pane_g1

0xbeee,	// (0x00054dfc) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xbeee,	// (0x00054dfc) fshwr2_func_candi_cell_pane_t1

0x9670,	// (0x0005257e) bg_button_pane_cp08

0x7d2d,	// (0x00050c3b) cell_fshwr2_syb_bg_pane

0xbf09,	// (0x00054e17) cell_fshwr2_syb_bg_pane_g1

0xbf11,	// (0x00054e1f) cell_fshwr2_syb_bg_pane_t1

0xa335,	// (0x00053243) main_tmo_pane

0xca7f,	// (0x0005598d) uni_indicator_pane_g1_ParamLimits

0xca95,	// (0x000559a3) uni_indicator_pane_g2_ParamLimits

0xcaab,	// (0x000559b9) uni_indicator_pane_g3_ParamLimits

0x3e49,	// (0x0004cd57) uni_indicator_pane_g4_ParamLimits

0x3e49,	// (0x0004cd57) uni_indicator_pane_g4

0x3e5d,	// (0x0004cd6b) uni_indicator_pane_g5_ParamLimits

0x3e5d,	// (0x0004cd6b) uni_indicator_pane_g5

0x3e5d,	// (0x0004cd6b) uni_indicator_pane_g6_ParamLimits

0x3e5d,	// (0x0004cd6b) uni_indicator_pane_g6

0xf910,	// (0x0005881e) uni_indicator_pane_g_ParamLimits

0xd89e,	// (0x000567ac) popup_tmo_note_window_ParamLimits

0xd89e,	// (0x000567ac) popup_tmo_note_window

0xa335,	// (0x00053243) fshwr2_bg_pane

0xbedf,	// (0x00054ded) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xbedf,	// (0x00054ded) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea6,	// (0x00058db4) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea6,	// (0x00058db4) fshwr2_func_candi_cell_pane_g

0x5244,	// (0x0004e152) bg_popup_window_pane_cp01

0x21af,	// (0x0004b0bd) bg_popup_window_pane_g1_cp01

0x7d35,	// (0x00050c43) bg_popup_window_pane_cp22_ParamLimits

0x7d35,	// (0x00050c43) bg_popup_window_pane_cp22

0xe9e2,	// (0x000578f0) listscroll_tmo_link_pane_ParamLimits

0xe9e2,	// (0x000578f0) listscroll_tmo_link_pane

0x7d83,	// (0x00050c91) popup_tmo_note_window_g1_ParamLimits

0x7d83,	// (0x00050c91) popup_tmo_note_window_g1

0xea22,	// (0x00057930) tmo_note_info_pane_ParamLimits

0xea22,	// (0x00057930) tmo_note_info_pane

0xea3c,	// (0x0005794a) list_tmo_note_info_pane_g1_ParamLimits

0xea3c,	// (0x0005794a) list_tmo_note_info_pane_g1

0x7dc1,	// (0x00050ccf) list_tmo_note_info_pane_g2_ParamLimits

0x7dc1,	// (0x00050ccf) list_tmo_note_info_pane_g2

0x0001,

0xfeab,	// (0x00058db9) list_tmo_note_info_pane_g_ParamLimits

0xfeab,	// (0x00058db9) list_tmo_note_info_pane_g

0x7ddd,	// (0x00050ceb) list_tmo_note_info_text_pane_ParamLimits

0x7ddd,	// (0x00050ceb) list_tmo_note_info_text_pane

0x7e5e,	// (0x00050d6c) list_tmo_link_pane

0x7e6b,	// (0x00050d79) scroll_pane_cp20

0x7e78,	// (0x00050d86) list_single_tmo_link_pane_ParamLimits

0x7e78,	// (0x00050d86) list_single_tmo_link_pane

0x7e88,	// (0x00050d96) list_single_tmo_link_pane_t1

0x7e96,	// (0x00050da4) list_tmo_note_info_text_pane_t1_ParamLimits

0x7e96,	// (0x00050da4) list_tmo_note_info_text_pane_t1

0xa3e0,	// (0x000532ee) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa3e0,	// (0x000532ee) aid_size_touch_scroll_bar_cp01

0x92ec,	// (0x000521fa) aid_size_touch_slider_marker

0x97ca,	// (0x000526d8) popup_settings_window_ParamLimits

0x97ca,	// (0x000526d8) popup_settings_window

0xe3fb,	// (0x00057309) popup_candi_list_indi_window

0x27fb,	// (0x0004b709) aid_touch_navi_pane_ParamLimits

0x1847,	// (0x0004a755) rs_clock_indi_pane

0x1850,	// (0x0004a75e) sctrl_sk_bottom_pane_ParamLimits

0x1861,	// (0x0004a76f) sctrl_sk_top_pane_ParamLimits

0xba07,	// (0x00054915) popup_fep_tooltip_window

0x7851,	// (0x0005075f) aid_size_cell_widget_grid_ParamLimits

0x78be,	// (0x000507cc) cell_ai5_widget_pane_g1_ParamLimits

0x78be,	// (0x000507cc) cell_ai5_widget_pane_g1

0x7912,	// (0x00050820) cell_ai5_widget_pane_g6_ParamLimits

0x791e,	// (0x0005082c) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe29,	// (0x00058d37) cell_ai5_widget_pane_g_ParamLimits

0xfe29,	// (0x00058d37) cell_ai5_widget_pane_g

0x7a50,	// (0x0005095e) cell_ai5_widget_pane_t10_ParamLimits

0x7a50,	// (0x0005095e) cell_ai5_widget_pane_t10

0x7a6e,	// (0x0005097c) grid_ai5_widget_pane_ParamLimits

0x7b06,	// (0x00050a14) cell_contacts_ai5_widget_pane_ParamLimits

0x7b06,	// (0x00050a14) cell_contacts_ai5_widget_pane

0x7ce0,	// (0x00050bee) popup_discreet_window_t3_ParamLimits

0x7ce0,	// (0x00050bee) popup_discreet_window_t3

0xbe42,	// (0x00054d50) popup_fshwr2_char_preview_window_ParamLimits

0xbe42,	// (0x00054d50) popup_fshwr2_char_preview_window

0xea53,	// (0x00057961) tmo_note_info_pane_t1

0xea68,	// (0x00057976) tmo_note_info_pane_t2

0xea7f,	// (0x0005798d) tmo_note_info_pane_t3

0x7e3a,	// (0x00050d48) tmo_note_info_pane_t4

0x7e4c,	// (0x00050d5a) tmo_note_info_pane_t5

0x0004,

0xfeb0,	// (0x00058dbe) tmo_note_info_pane_t

0x7e5e,	// (0x00050d6c) list_tmo_link_pane_ParamLimits

0x7e6b,	// (0x00050d79) scroll_pane_cp20_ParamLimits

0x9670,	// (0x0005257e) bg_popup_fep_char_preview_window_cp01

0xea94,	// (0x000579a2) popup_fshwr2_char_preview_window_t1

0x7ebd,	// (0x00050dcb) popup_candi_list_indi_window_g1

0x7ec6,	// (0x00050dd4) bg_cell_contacts_ai5_widget_pane

0x7ed2,	// (0x00050de0) cell_contacts_ai5_widget_pane_g1

0x594b,	// (0x0004e859) cell_contacts_ai5_widget_pane_g2

0x7ee7,	// (0x00050df5) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebb,	// (0x00058dc9) cell_contacts_ai5_widget_pane_g

0x7ef3,	// (0x00050e01) cell_contacts_ai5_widget_pane_t1

0xa335,	// (0x00053243) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7f6a,	// (0x00050e78) settings_container_pane

0x244e,	// (0x0004b35c) listscroll_set_pane_copy1

0x493b,	// (0x0004d849) scroll_pane_cp121_copy1

0x30d9,	// (0x0004bfe7) set_content_pane_copy1

0xeb07,	// (0x00057a15) aid_height_set_list_copy1_ParamLimits

0xeb07,	// (0x00057a15) aid_height_set_list_copy1

0x4055,	// (0x0004cf63) aid_size_parent_copy1_ParamLimits

0x4055,	// (0x0004cf63) aid_size_parent_copy1

0xeb13,	// (0x00057a21) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeb13,	// (0x00057a21) button_value_adjust_pane_cp6_copy1

0x2799,	// (0x0004b6a7) list_highlight_pane_cp2_copy1_ParamLimits

0x2799,	// (0x0004b6a7) list_highlight_pane_cp2_copy1

0xeb27,	// (0x00057a35) list_set_pane_copy1_ParamLimits

0xeb27,	// (0x00057a35) list_set_pane_copy1

0xeaa2,	// (0x000579b0) main_pane_set_t1_copy1_ParamLimits

0xeaa2,	// (0x000579b0) main_pane_set_t1_copy1

0xeadc,	// (0x000579ea) main_pane_set_t2_copy1_ParamLimits

0xeadc,	// (0x000579ea) main_pane_set_t2_copy1

0xebd4,	// (0x00057ae2) main_pane_set_t3_copy1

0xebe2,	// (0x00057af0) main_pane_set_t4_copy1

0xeafb,	// (0x00057a09) set_content_pane_g1_copy1_ParamLimits

0xeafb,	// (0x00057a09) set_content_pane_g1_copy1

0xebf0,	// (0x00057afe) setting_code_pane_copy1

0x8067,	// (0x00050f75) setting_slider_graphic_pane_copy1

0x8067,	// (0x00050f75) setting_slider_pane_copy1

0x8067,	// (0x00050f75) setting_text_pane_copy1

0x8067,	// (0x00050f75) setting_volume_pane_copy1

0xebf0,	// (0x00057afe) settings_code_pane_cp2_copy1

0xebf8,	// (0x00057b06) settings_code_pane_cp_copy1_ParamLimits

0xebf8,	// (0x00057b06) settings_code_pane_cp_copy1

0xbf20,	// (0x00054e2e) volume_set_pane_copy1

0xec0c,	// (0x00057b1a) volume_set_pane_g10_copy1

0xec14,	// (0x00057b22) volume_set_pane_g1_copy1

0xec1c,	// (0x00057b2a) volume_set_pane_g2_copy1

0xec24,	// (0x00057b32) volume_set_pane_g3_copy1

0xec2c,	// (0x00057b3a) volume_set_pane_g4_copy1

0xec34,	// (0x00057b42) volume_set_pane_g5_copy1

0xec3c,	// (0x00057b4a) volume_set_pane_g6_copy1

0xec44,	// (0x00057b52) volume_set_pane_g7_copy1

0xec4c,	// (0x00057b5a) volume_set_pane_g8_copy1

0xec54,	// (0x00057b62) volume_set_pane_g9_copy1

0x9a05,	// (0x00052913) bg_set_opt_pane_cp_copy1_ParamLimits

0x9a05,	// (0x00052913) bg_set_opt_pane_cp_copy1

0xbf28,	// (0x00054e36) setting_slider_pane_t1_copy1_ParamLimits

0xbf28,	// (0x00054e36) setting_slider_pane_t1_copy1

0xbf46,	// (0x00054e54) setting_slider_pane_t2_copy1_ParamLimits

0xbf46,	// (0x00054e54) setting_slider_pane_t2_copy1

0xbf60,	// (0x00054e6e) setting_slider_pane_t3_copy1_ParamLimits

0xbf60,	// (0x00054e6e) setting_slider_pane_t3_copy1

0xbf78,	// (0x00054e86) slider_set_pane_copy1_ParamLimits

0xbf78,	// (0x00054e86) slider_set_pane_copy1

0xa381,	// (0x0005328f) set_opt_bg_pane_g1_copy2

0xa389,	// (0x00053297) set_opt_bg_pane_g2_copy2

0x80d3,	// (0x00050fe1) set_opt_bg_pane_g3_copy2

0xa399,	// (0x000532a7) set_opt_bg_pane_g4_copy2

0xa3a1,	// (0x000532af) set_opt_bg_pane_g5_copy2

0xa3a9,	// (0x000532b7) set_opt_bg_pane_g6_copy2

0xec5c,	// (0x00057b6a) set_opt_bg_pane_g7_copy2

0x80e5,	// (0x00050ff3) set_opt_bg_pane_g8_copy2

0x80ef,	// (0x00050ffd) set_opt_bg_pane_g9_copy2

0xbf8e,	// (0x00054e9c) aid_size_touch_slider_mark_copy1_ParamLimits

0xbf8e,	// (0x00054e9c) aid_size_touch_slider_mark_copy1

0xec64,	// (0x00057b72) slider_set_pane_g1_copy1

0x223a,	// (0x0004b148) slider_set_pane_g2_copy1

0xb75d,	// (0x0005466b) slider_set_pane_g3_copy1_ParamLimits

0xb75d,	// (0x0005466b) slider_set_pane_g3_copy1

0xb771,	// (0x0005467f) slider_set_pane_g4_copy1_ParamLimits

0xb771,	// (0x0005467f) slider_set_pane_g4_copy1

0xb789,	// (0x00054697) slider_set_pane_g5_copy1_ParamLimits

0xb789,	// (0x00054697) slider_set_pane_g5_copy1

0xb75d,	// (0x0005466b) slider_set_pane_g6_copy1_ParamLimits

0xb75d,	// (0x0005466b) slider_set_pane_g6_copy1

0xbfa2,	// (0x00054eb0) slider_set_pane_g7_copy1_ParamLimits

0xbfa2,	// (0x00054eb0) slider_set_pane_g7_copy1

0x976a,	// (0x00052678) bg_set_opt_pane_cp2_copy1

0xec6d,	// (0x00057b7b) setting_slider_graphic_pane_g1_copy1

0xec76,	// (0x00057b84) setting_slider_graphic_pane_t1_copy1

0xec86,	// (0x00057b94) setting_slider_graphic_pane_t2_copy1

0xec96,	// (0x00057ba4) slider_set_pane_cp_copy1

0x813b,	// (0x00051049) input_focus_pane_cp1_copy1

0x8144,	// (0x00051052) list_set_text_pane_copy1

0x814c,	// (0x0005105a) setting_text_pane_g1_copy1

0xf371,	// (0x0005827f) set_text_pane_t1_copy1

0x813b,	// (0x00051049) input_focus_pane_cp2_copy1

0x814c,	// (0x0005105a) setting_code_pane_g1_copy1

0x8155,	// (0x00051063) setting_code_pane_t1_copy1

0x8163,	// (0x00051071) list_set_graphic_pane_copy1

0x976a,	// (0x00052678) bg_set_opt_pane_cp4_copy1

0xe36c,	// (0x0005727a) list_set_graphic_pane_g1_copy1_ParamLimits

0xe36c,	// (0x0005727a) list_set_graphic_pane_g1_copy1

0x8177,	// (0x00051085) list_set_graphic_pane_g2_copy1

0xe384,	// (0x00057292) list_set_graphic_pane_t1_copy1_ParamLimits

0xe384,	// (0x00057292) list_set_graphic_pane_t1_copy1

0x5244,	// (0x0004e152) rs_clock_indi_pane_g1

0x817f,	// (0x0005108d) rs_clock_indi_pane_t1

0x818d,	// (0x0005109b) rs_indi_pane

0x8195,	// (0x000510a3) rs_indi_pane_g1

0x819e,	// (0x000510ac) rs_indi_pane_g2

0x7ebd,	// (0x00050dcb) rs_indi_pane_g3

0x0002,

0xfec2,	// (0x00058dd0) rs_indi_pane_g

0x244e,	// (0x0004b35c) bg_popup_preview_window_pane_cp03

0x81a7,	// (0x000510b5) popup_fep_tooltip_window_t1

0xd543,	// (0x00056451) popup_note2_window_g2_ParamLimits

0xd543,	// (0x00056451) popup_note2_window_g2

0x0001,

0xfc62,	// (0x00058b70) popup_note2_window_g_ParamLimits

0xfc62,	// (0x00058b70) popup_note2_window_g

0x63c0,	// (0x0004f2ce) bg_popup_sub_pane_cp11_ParamLimits

0x63cd,	// (0x0004f2db) cell_ai3_links_pane_g1_ParamLimits

0x63e4,	// (0x0004f2f2) cell_ai3_links_pane_t1

0xf371,	// (0x0005827f) set_text_pane_t1_copy1_ParamLimits

0x05bf,	// (0x000494cd) cell_graphic_popup_pane_cp2_ParamLimits

0x05bf,	// (0x000494cd) cell_graphic_popup_pane_cp2

0xeca6,	// (0x00057bb4) cell_graphic_popup_pane_g1_cp2

0xa092,	// (0x00052fa0) cell_graphic_popup_pane_g2_cp2

0x81bd,	// (0x000510cb) cell_graphic_popup_pane_g3_cp2

0xecae,	// (0x00057bbc) cell_graphic_popup_pane_t2_cp2

0xa0a3,	// (0x00052fb1) grid_highlight_pane_cp3_cp2

0xa6a7,	// (0x000535b5) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xa335,	// (0x00053243) main_tmo_pane_ParamLimits

0xd892,	// (0x000567a0) popup_tmo_big_image_note_window

0x78ad,	// (0x000507bb) cell_ai5_widget_list_pane

0x78b5,	// (0x000507c3) cell_ai5_widget_lrg_icon_pane

0xea53,	// (0x00057961) tmo_note_info_pane_t1_ParamLimits

0xea68,	// (0x00057976) tmo_note_info_pane_t2_ParamLimits

0xea7f,	// (0x0005798d) tmo_note_info_pane_t3_ParamLimits

0x7e3a,	// (0x00050d48) tmo_note_info_pane_t4_ParamLimits

0x7e4c,	// (0x00050d5a) tmo_note_info_pane_t5_ParamLimits

0xfeb0,	// (0x00058dbe) tmo_note_info_pane_t_ParamLimits

0x7f6a,	// (0x00050e78) settings_container_pane_ParamLimits

0xec9e,	// (0x00057bac) indicator_popup_pane_cp5

0xec9e,	// (0x00057bac) indicator_popup_pane_cp6

0x8163,	// (0x00051071) list_set_graphic_pane_copy1_ParamLimits

0x9670,	// (0x0005257e) bg_popup_window_pane_cp23

0x81d3,	// (0x000510e1) popup_tmo_big_image_note_window_g1

0x81dc,	// (0x000510ea) popup_tmo_big_image_note_window_t1

0x81ec,	// (0x000510fa) popup_tmo_big_image_note_window_t2

0x81fc,	// (0x0005110a) popup_tmo_big_image_note_window_t3

0x0002,

0xfec9,	// (0x00058dd7) popup_tmo_big_image_note_window_t

0x5244,	// (0x0004e152) cell_ai5_widget_lrg_icon_pane_g1

0x820c,	// (0x0005111a) cell_ai5_widget_lrg_icon_pane_t1

0x821a,	// (0x00051128) cell_ai5_widget_list_row_pane_ParamLimits

0x821a,	// (0x00051128) cell_ai5_widget_list_row_pane

0x8231,	// (0x0005113f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x8231,	// (0x0005113f) cell_ai5_widget_list_row_pane_g1

0xecbc,	// (0x00057bca) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xecbc,	// (0x00057bca) cell_ai5_widget_list_row_pane_t1

0x8269,	// (0x00051177) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x8269,	// (0x00051177) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed0,	// (0x00058dde) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed0,	// (0x00058dde) cell_ai5_widget_list_row_pane_t

0x9670,	// (0x0005257e) main_fep_vtchi_ss_pane

0x82ad,	// (0x000511bb) popup_fep_char_pre_window

0x82b5,	// (0x000511c3) popup_fep_ituss_window

0xecfc,	// (0x00057c0a) popup_fep_vkbss_window

0xed09,	// (0x00057c17) grid_vkbss_keypad_pane_ParamLimits

0xed09,	// (0x00057c17) grid_vkbss_keypad_pane

0x8310,	// (0x0005121e) ituss_keypad_pane

0x2264,	// (0x0004b172) aid_vkbss_key_offset_ParamLimits

0x2264,	// (0x0004b172) aid_vkbss_key_offset

0xbfb8,	// (0x00054ec6) cell_vkbss_key_pane_ParamLimits

0xbfb8,	// (0x00054ec6) cell_vkbss_key_pane

0x2b12,	// (0x0004ba20) bg_cell_vkbss_key_g1_ParamLimits

0x2b12,	// (0x0004ba20) bg_cell_vkbss_key_g1

0xed19,	// (0x00057c27) cell_vkbss_key_3p_pane_ParamLimits

0xed19,	// (0x00057c27) cell_vkbss_key_3p_pane

0xed33,	// (0x00057c41) cell_vkbss_key_g1_ParamLimits

0xed33,	// (0x00057c41) cell_vkbss_key_g1

0xed4d,	// (0x00057c5b) cell_vkbss_key_t1_ParamLimits

0xed4d,	// (0x00057c5b) cell_vkbss_key_t1

0x2286,	// (0x0004b194) cell_ituss_key_pane_ParamLimits

0x2286,	// (0x0004b194) cell_ituss_key_pane

0x8372,	// (0x00051280) bg_cell_ituss_key_g1_ParamLimits

0x8372,	// (0x00051280) bg_cell_ituss_key_g1

0x837e,	// (0x0005128c) cell_ituss_key_pane_g1_ParamLimits

0x837e,	// (0x0005128c) cell_ituss_key_pane_g1

0x2297,	// (0x0004b1a5) cell_ituss_key_pane_g2_ParamLimits

0x2297,	// (0x0004b1a5) cell_ituss_key_pane_g2

0x0002,

0xfed7,	// (0x00058de5) cell_ituss_key_pane_g_ParamLimits

0xfed7,	// (0x00058de5) cell_ituss_key_pane_g

0x22c3,	// (0x0004b1d1) cell_ituss_key_t1_ParamLimits

0x22c3,	// (0x0004b1d1) cell_ituss_key_t1

0x22fd,	// (0x0004b20b) cell_ituss_key_t2_ParamLimits

0x22fd,	// (0x0004b20b) cell_ituss_key_t2

0x232e,	// (0x0004b23c) cell_ituss_key_t3_ParamLimits

0x232e,	// (0x0004b23c) cell_ituss_key_t3

0x22fd,	// (0x0004b20b) cell_ituss_key_t4_ParamLimits

0x22fd,	// (0x0004b20b) cell_ituss_key_t4

0x0004,

0xfede,	// (0x00058dec) cell_ituss_key_t_ParamLimits

0xfede,	// (0x00058dec) cell_ituss_key_t

0x83a4,	// (0x000512b2) cell_vkbss_key_3p_pane_g1

0x83ac,	// (0x000512ba) cell_vkbss_key_3p_pane_g2

0x83b4,	// (0x000512c2) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee9,	// (0x00058df7) cell_vkbss_key_3p_pane_g

0x9670,	// (0x0005257e) bg_popup_fep_char_preview_window_cp02

0x2371,	// (0x0004b27f) popup_fep_char_pre_window_t1

0xe8ef,	// (0x000577fd) main_ai5_sk_pane

0x7ec6,	// (0x00050dd4) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7ed2,	// (0x00050de0) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x594b,	// (0x0004e859) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7ee7,	// (0x00050df5) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebb,	// (0x00058dc9) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7ef3,	// (0x00050e01) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xa335,	// (0x00053243) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xed78,	// (0x00057c86) main_ai5_sk_pane_g1

0xc6d8,	// (0x000555e6) popup_query_code_window_g1

0x82cb,	// (0x000511d9) popup_fep_vkb_icf_pane

0x82ea,	// (0x000511f8) popup_fep_vtchi_icf_pane

0x83c5,	// (0x000512d3) bg_icf_pane

0x83d1,	// (0x000512df) list_vkb_icf_pane

0x83e0,	// (0x000512ee) bg_icf_pane_cp01

0x83f3,	// (0x00051301) vtchi_icf_list_pane

0x8403,	// (0x00051311) list_vkb_icf_pane_t1_ParamLimits

0x8403,	// (0x00051311) list_vkb_icf_pane_t1

0x841a,	// (0x00051328) vtchi_icf_list_pane_t1_ParamLimits

0x841a,	// (0x00051328) vtchi_icf_list_pane_t1

0x82b5,	// (0x000511c3) popup_fep_ituss_window_ParamLimits

0x82ea,	// (0x000511f8) popup_fep_vtchi_icf_pane_ParamLimits

0x8310,	// (0x0005121e) ituss_keypad_pane_ParamLimits

0x2258,	// (0x0004b166) ituss_sks_pane

0x83c5,	// (0x000512d3) bg_icf_pane_ParamLimits

0xeced,	// (0x00057bfb) icf_edit_indi_pane_ParamLimits

0xeced,	// (0x00057bfb) icf_edit_indi_pane

0x83d1,	// (0x000512df) list_vkb_icf_pane_ParamLimits

0x83e0,	// (0x000512ee) bg_icf_pane_cp01_ParamLimits

0x82a0,	// (0x000511ae) icf_edit_indi_pane_cp01_ParamLimits

0x82a0,	// (0x000511ae) icf_edit_indi_pane_cp01

0x83fb,	// (0x00051309) vtchi_query_pane

0x54b4,	// (0x0004e3c2) icf_edit_indi_pane_g1_ParamLimits

0x54b4,	// (0x0004e3c2) icf_edit_indi_pane_g1

0x848f,	// (0x0005139d) icf_edit_indi_pane_g2_ParamLimits

0x848f,	// (0x0005139d) icf_edit_indi_pane_g2

0x0001,

0xff01,	// (0x00058e0f) icf_edit_indi_pane_g_ParamLimits

0xff01,	// (0x00058e0f) icf_edit_indi_pane_g

0x849e,	// (0x000513ac) icf_edit_indi_pane_t1

0x8438,	// (0x00051346) bg_input_focus_pane_cp042

0xa209,	// (0x00053117) vtchi_button_pane

0x8441,	// (0x0005134f) vtchi_query_pane_t1

0x844f,	// (0x0005135d) vtchi_query_pane_t2

0x845d,	// (0x0005136b) vtchi_query_pane_t3

0x0002,

0xfef0,	// (0x00058dfe) vtchi_query_pane_t

0x9670,	// (0x0005257e) bg_button_pane_cp13

0x846b,	// (0x00051379) vtchi_button_pane_g1

0x2380,	// (0x0004b28e) ituss_sks_pane_g1

0x238b,	// (0x0004b299) ituss_sks_pane_g2

0x0001,

0xfef7,	// (0x00058e05) ituss_sks_pane_g

0x8473,	// (0x00051381) ituss_sks_pane_t1

0x8481,	// (0x0005138f) ituss_sks_pane_t2

0x0001,

0xfefc,	// (0x00058e0a) ituss_sks_pane_t

0x4cc1,	// (0x0004dbcf) indicator_nsta_pane_cp_g1

0x4cc9,	// (0x0004dbd7) indicator_nsta_pane_cp_g2

0x4cd1,	// (0x0004dbdf) indicator_nsta_pane_cp_g3

0x4cc1,	// (0x0004dbcf) indicator_nsta_pane_cp_g4

0x4cc9,	// (0x0004dbd7) indicator_nsta_pane_cp_g5

0x4cd1,	// (0x0004dbdf) indicator_nsta_pane_cp_g6

0x0005,

0xfaac,	// (0x000589ba) indicator_nsta_pane_cp_g

0xe6cc,	// (0x000575da) cell_graphic2_pane_t2_ParamLimits

0xe6cc,	// (0x000575da) cell_graphic2_pane_t2

0x0001,

0xfdb2,	// (0x00058cc0) cell_graphic2_pane_t_ParamLimits

0xfdb2,	// (0x00058cc0) cell_graphic2_pane_t

0xe705,	// (0x00057613) cell_graphic2_control_pane_t1

0xa9de,	// (0x000538ec) signal_pane_g3_ParamLimits

0xa9de,	// (0x000538ec) signal_pane_g3

0xa9f2,	// (0x00053900) signal_pane_g4_ParamLimits

0xa9f2,	// (0x00053900) signal_pane_g4

0x827b,	// (0x00051189) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x827b,	// (0x00051189) cell_ai5_widget_list_row_pane_t3

0x8392,	// (0x000512a0) cell_ituss_key_pane_t1_ParamLimits

0x8392,	// (0x000512a0) cell_ituss_key_pane_t1

0x2da8,	// (0x0004bcb6) form_field_data_wide_pane_vc_t2_ParamLimits

0x2da8,	// (0x0004bcb6) form_field_data_wide_pane_vc_t2

0x2dbc,	// (0x0004bcca) form_field_data_wide_pane_vc_t3_ParamLimits

0x2dbc,	// (0x0004bcca) form_field_data_wide_pane_vc_t3

0x0002,

0xf7f8,	// (0x00058706) form_field_data_wide_pane_vc_t_ParamLimits

0xf7f8,	// (0x00058706) form_field_data_wide_pane_vc_t

0x497d,	// (0x0004d88b) form_field_slider_wide_pane_vc_t3_ParamLimits

0x497d,	// (0x0004d88b) form_field_slider_wide_pane_vc_t3

0x4a5b,	// (0x0004d969) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4a5b,	// (0x0004d969) form_field_popup_wide_pane_vc_t2

0x4a72,	// (0x0004d980) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4a72,	// (0x0004d980) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9b,	// (0x000589a9) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9b,	// (0x000589a9) form_field_popup_wide_pane_vc_t

0xbdbd,	// (0x00054ccb) aid_fshwr2_btn_pane_ParamLimits

0xbdcf,	// (0x00054cdd) aid_fshwr2_syb_pane_ParamLimits

0xbde1,	// (0x00054cef) aid_fshwr2_txt_pane_ParamLimits

0xa335,	// (0x00053243) fshwr2_bg_pane_ParamLimits

0xbdf0,	// (0x00054cfe) fshwr2_func_candi_pane_ParamLimits

0xbe0f,	// (0x00054d1d) fshwr2_hwr_syb_pane_ParamLimits

0xbe2a,	// (0x00054d38) fshwr2_icf_pane_ParamLimits

0x1373,	// (0x0004a281) list_double_graphic_pane_vc_g4_ParamLimits

0x1373,	// (0x0004a281) list_double_graphic_pane_vc_g4

0x22b7,	// (0x0004b1c5) cell_ituss_key_pane_g3_ParamLimits

0x22b7,	// (0x0004b1c5) cell_ituss_key_pane_g3

0x235f,	// (0x0004b26d) cell_ituss_key_t5_ParamLimits

0x235f,	// (0x0004b26d) cell_ituss_key_t5

0xecfc,	// (0x00057c0a) popup_fep_vkbss_window_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large

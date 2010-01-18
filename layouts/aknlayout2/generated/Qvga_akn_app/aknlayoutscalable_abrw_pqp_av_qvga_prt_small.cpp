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

#include "aknlayoutscalable_abrw_pqp_av_qvga_prt_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0001a9cb };

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
0x8b75,	// (0x00023540) Screen

0x8b7f,	// (0x0002354a) application_window_ParamLimits

0x8b7f,	// (0x0002354a) application_window

0x5f32,	// (0x000208fd) screen_g1

0x8bc8,	// (0x00023593) area_bottom_pane_ParamLimits

0x8bc8,	// (0x00023593) area_bottom_pane

0x5f3c,	// (0x00020907) area_top_pane_ParamLimits

0x5f3c,	// (0x00020907) area_top_pane

0x8c80,	// (0x0002364b) main_pane_ParamLimits

0x8c80,	// (0x0002364b) main_pane

0x5fb4,	// (0x0002097f) misc_graphics

0x9dea,	// (0x000247b5) battery_pane_ParamLimits

0x9dea,	// (0x000247b5) battery_pane

0x7d8a,	// (0x00022755) bg_status_flat_pane_g8

0x7d92,	// (0x0002275d) bg_status_flat_pane_g9

0x74ea,	// (0x00021eb5) context_pane_ParamLimits

0x74ea,	// (0x00021eb5) context_pane

0x9f1c,	// (0x000248e7) navi_pane_ParamLimits

0x9f1c,	// (0x000248e7) navi_pane

0x9f88,	// (0x00024953) signal_pane_ParamLimits

0x9f88,	// (0x00024953) signal_pane

0x0008,

0xf885,	// (0x0002a250) bg_status_flat_pane_g

0x9fe9,	// (0x000249b4) status_pane_g1_ParamLimits

0x9fe9,	// (0x000249b4) status_pane_g1

0x9ff5,	// (0x000249c0) status_pane_g2_ParamLimits

0x9ff5,	// (0x000249c0) status_pane_g2

0x7550,	// (0x00021f1b) status_pane_g3_ParamLimits

0x7550,	// (0x00021f1b) status_pane_g3

0x0004,

0xf7b3,	// (0x0002a17e) status_pane_g_ParamLimits

0xf7b3,	// (0x0002a17e) status_pane_g

0xa001,	// (0x000249cc) title_pane_ParamLimits

0xa001,	// (0x000249cc) title_pane

0xa03e,	// (0x00024a09) uni_indicator_pane_ParamLimits

0xa03e,	// (0x00024a09) uni_indicator_pane

0x734c,	// (0x00021d17) bg_list_pane_ParamLimits

0x734c,	// (0x00021d17) bg_list_pane

0xd51d,	// (0x00027ee8) find_pane

0x99f6,	// (0x000243c1) listscroll_app_pane_ParamLimits

0x99f6,	// (0x000243c1) listscroll_app_pane

0x736c,	// (0x00021d37) listscroll_form_pane

0xd525,	// (0x00027ef0) listscroll_gen_pane_ParamLimits

0xd525,	// (0x00027ef0) listscroll_gen_pane

0x736c,	// (0x00021d37) listscroll_set_pane

0x9204,	// (0x00023bcf) main_idle_act_pane

0x7122,	// (0x00021aed) main_idle_trad_pane

0x7122,	// (0x00021aed) main_list_empty_pane

0x6aca,	// (0x00021495) main_midp_pane

0x7386,	// (0x00021d51) main_pane_g1_ParamLimits

0x7386,	// (0x00021d51) main_pane_g1

0x9a02,	// (0x000243cd) popup_ai_message_window_ParamLimits

0x9a02,	// (0x000243cd) popup_ai_message_window

0x9a76,	// (0x00024441) popup_fep_china_uni_window_ParamLimits

0x9a76,	// (0x00024441) popup_fep_china_uni_window

0x73b6,	// (0x00021d81) popup_fep_japan_candidate_window_ParamLimits

0x73b6,	// (0x00021d81) popup_fep_japan_candidate_window

0x73d4,	// (0x00021d9f) popup_fep_japan_predictive_window_ParamLimits

0x73d4,	// (0x00021d9f) popup_fep_japan_predictive_window

0x9ab4,	// (0x0002447f) popup_find_window

0x9ac1,	// (0x0002448c) popup_grid_graphic_window_ParamLimits

0x9ac1,	// (0x0002448c) popup_grid_graphic_window

0x7400,	// (0x00021dcb) popup_large_graphic_colour_window

0x9adf,	// (0x000244aa) popup_menu_window_ParamLimits

0x9adf,	// (0x000244aa) popup_menu_window

0x9c17,	// (0x000245e2) popup_note_image_window

0x9c05,	// (0x000245d0) popup_note_wait_window_ParamLimits

0x9c05,	// (0x000245d0) popup_note_wait_window

0x9c05,	// (0x000245d0) popup_note_window_ParamLimits

0x9c05,	// (0x000245d0) popup_note_window

0x9c6b,	// (0x00024636) popup_query_code_window_ParamLimits

0x9c6b,	// (0x00024636) popup_query_code_window

0x741f,	// (0x00021dea) popup_query_data_code_window_ParamLimits

0x741f,	// (0x00021dea) popup_query_data_code_window

0x9c7d,	// (0x00024648) popup_query_data_window_ParamLimits

0x9c7d,	// (0x00024648) popup_query_data_window

0x9c93,	// (0x0002465e) popup_query_sat_info_window_ParamLimits

0x9c93,	// (0x0002465e) popup_query_sat_info_window

0x9cc4,	// (0x0002468f) popup_snote_single_graphic_window_ParamLimits

0x9cc4,	// (0x0002468f) popup_snote_single_graphic_window

0x9cc4,	// (0x0002468f) popup_snote_single_text_window_ParamLimits

0x9cc4,	// (0x0002468f) popup_snote_single_text_window

0x7434,	// (0x00021dff) popup_sub_window_general

0x7476,	// (0x00021e41) popup_window_general_ParamLimits

0x7476,	// (0x00021e41) popup_window_general

0x7489,	// (0x00021e54) power_save_pane

0x987a,	// (0x00024245) control_pane_g1_ParamLimits

0x987a,	// (0x00024245) control_pane_g1

0x989b,	// (0x00024266) control_pane_g2_ParamLimits

0x989b,	// (0x00024266) control_pane_g2

0x732e,	// (0x00021cf9) control_pane_g3_ParamLimits

0x732e,	// (0x00021cf9) control_pane_g3

0x0007,

0xf79b,	// (0x0002a166) control_pane_g_ParamLimits

0xf79b,	// (0x0002a166) control_pane_g

0x9905,	// (0x000242d0) control_pane_t1_ParamLimits

0x9905,	// (0x000242d0) control_pane_t1

0x9957,	// (0x00024322) control_pane_t2_ParamLimits

0x9957,	// (0x00024322) control_pane_t2

0x0002,

0xf7ac,	// (0x0002a177) control_pane_t_ParamLimits

0xf7ac,	// (0x0002a177) control_pane_t

0x7251,	// (0x00021c1c) navi_navi_volume_pane_cp1

0x725a,	// (0x00021c25) status_small_icon_pane

0x7262,	// (0x00021c2d) status_small_pane_g1_ParamLimits

0x7262,	// (0x00021c2d) status_small_pane_g1

0x7296,	// (0x00021c61) status_small_pane_g2_ParamLimits

0x7296,	// (0x00021c61) status_small_pane_g2

0x72a2,	// (0x00021c6d) status_small_pane_g3_ParamLimits

0x72a2,	// (0x00021c6d) status_small_pane_g3

0x72ae,	// (0x00021c79) status_small_pane_g4_ParamLimits

0x72ae,	// (0x00021c79) status_small_pane_g4

0x72ba,	// (0x00021c85) status_small_pane_g5_ParamLimits

0x72ba,	// (0x00021c85) status_small_pane_g5

0x72c7,	// (0x00021c92) status_small_pane_g6_ParamLimits

0x72c7,	// (0x00021c92) status_small_pane_g6

0x0007,

0xf78a,	// (0x0002a155) status_small_pane_g_ParamLimits

0xf78a,	// (0x0002a155) status_small_pane_g

0x72f7,	// (0x00021cc2) status_small_pane_t1

0x731a,	// (0x00021ce5) status_small_wait_pane_ParamLimits

0x731a,	// (0x00021ce5) status_small_wait_pane

0x9508,	// (0x00023ed3) aid_levels_signal_ParamLimits

0x9508,	// (0x00023ed3) aid_levels_signal

0x9519,	// (0x00023ee4) signal_pane_g1_ParamLimits

0x9519,	// (0x00023ee4) signal_pane_g1

0x952f,	// (0x00023efa) signal_pane_g2_ParamLimits

0x952f,	// (0x00023efa) signal_pane_g2

0x0001,

0xf71f,	// (0x0002a0ea) signal_pane_g_ParamLimits

0xf71f,	// (0x0002a0ea) signal_pane_g

0x6cc7,	// (0x00021692) context_pane_g1

0x8e7f,	// (0x0002384a) title_pane_g1

0x8ea9,	// (0x00023874) title_pane_t1

0x5fca,	// (0x00020995) title_pane_t2

0x5ff0,	// (0x000209bb) title_pane_t3

0x0002,

0xf573,	// (0x00029f3e) title_pane_t

0xa054,	// (0x00024a1f) aid_levels_battery_ParamLimits

0xa054,	// (0x00024a1f) aid_levels_battery

0xa067,	// (0x00024a32) battery_pane_g1_ParamLimits

0xa067,	// (0x00024a32) battery_pane_g1

0xa07c,	// (0x00024a47) battery_pane_g2_ParamLimits

0xa07c,	// (0x00024a47) battery_pane_g2

0x0001,

0xf7be,	// (0x0002a189) battery_pane_g_ParamLimits

0xf7be,	// (0x0002a189) battery_pane_g

0xe048,	// (0x00028a13) uni_indicator_pane_g1

0xe05d,	// (0x00028a28) uni_indicator_pane_g2

0xe073,	// (0x00028a3e) uni_indicator_pane_g3

0x0005,

0xf92d,	// (0x0002a2f8) uni_indicator_pane_g

0x6678,	// (0x00021043) navi_icon_pane_ParamLimits

0x6678,	// (0x00021043) navi_icon_pane

0x5fb4,	// (0x0002097f) navi_midp_pane

0x5fb4,	// (0x0002097f) navi_navi_pane

0x6678,	// (0x00021043) navi_text_pane_ParamLimits

0x6678,	// (0x00021043) navi_text_pane

0x5f32,	// (0x000208fd) status_small_wait_pane_g1

0x630b,	// (0x00020cd6) status_small_wait_pane_g2

0x0001,

0xf928,	// (0x0002a2f3) status_small_wait_pane_g

0xb3af,	// (0x00025d7a) navi_navi_icon_text_pane

0xb3b7,	// (0x00025d82) navi_navi_pane_g1_ParamLimits

0xb3b7,	// (0x00025d82) navi_navi_pane_g1

0xb3c9,	// (0x00025d94) navi_navi_pane_g2_ParamLimits

0xb3c9,	// (0x00025d94) navi_navi_pane_g2

0x0001,

0xf8f6,	// (0x0002a2c1) navi_navi_pane_g_ParamLimits

0xf8f6,	// (0x0002a2c1) navi_navi_pane_g

0xb3db,	// (0x00025da6) navi_navi_tabs_pane

0xb3af,	// (0x00025d7a) navi_navi_text_pane

0xb3af,	// (0x00025d7a) navi_navi_volume_pane

0xb38b,	// (0x00025d56) navi_text_pane_t1

0xb37f,	// (0x00025d4a) navi_icon_pane_g1

0xb2d3,	// (0x00025c9e) navi_navi_text_pane_t1

0xa406,	// (0x00024dd1) navi_navi_volume_pane_g1

0xa40e,	// (0x00024dd9) volume_small_pane

0xdf95,	// (0x00028960) navi_navi_icon_text_pane_g1

0xdf9d,	// (0x00028968) navi_navi_icon_text_pane_t1

0x7dd2,	// (0x0002279d) navi_tabs_2_long_pane

0x7dd2,	// (0x0002279d) navi_tabs_2_pane

0x7dd2,	// (0x0002279d) navi_tabs_3_long_pane

0x7dd2,	// (0x0002279d) navi_tabs_3_pane

0x7dd2,	// (0x0002279d) navi_tabs_4_pane

0xa3e6,	// (0x00024db1) tabs_2_active_pane_ParamLimits

0xa3e6,	// (0x00024db1) tabs_2_active_pane

0xa3f6,	// (0x00024dc1) tabs_2_passive_pane_ParamLimits

0xa3f6,	// (0x00024dc1) tabs_2_passive_pane

0xa3b4,	// (0x00024d7f) tabs_3_active_pane_ParamLimits

0xa3b4,	// (0x00024d7f) tabs_3_active_pane

0xa3c4,	// (0x00024d8f) tabs_3_passive_pane_ParamLimits

0xa3c4,	// (0x00024d8f) tabs_3_passive_pane

0xa3d5,	// (0x00024da0) tabs_3_passive_pane_cp_ParamLimits

0xa3d5,	// (0x00024da0) tabs_3_passive_pane_cp

0xa370,	// (0x00024d3b) tabs_4_active_pane_ParamLimits

0xa370,	// (0x00024d3b) tabs_4_active_pane

0xa381,	// (0x00024d4c) tabs_4_passive_pane_ParamLimits

0xa381,	// (0x00024d4c) tabs_4_passive_pane

0xa392,	// (0x00024d5d) tabs_4_passive_pane_cp_ParamLimits

0xa392,	// (0x00024d5d) tabs_4_passive_pane_cp

0xa3a3,	// (0x00024d6e) tabs_4_passive_pane_cp2_ParamLimits

0xa3a3,	// (0x00024d6e) tabs_4_passive_pane_cp2

0xa350,	// (0x00024d1b) tabs_2_long_active_pane_ParamLimits

0xa350,	// (0x00024d1b) tabs_2_long_active_pane

0xa360,	// (0x00024d2b) tabs_2_long_passive_pane_ParamLimits

0xa360,	// (0x00024d2b) tabs_2_long_passive_pane

0xa31b,	// (0x00024ce6) tabs_3_long_active_pane_ParamLimits

0xa31b,	// (0x00024ce6) tabs_3_long_active_pane

0xa32c,	// (0x00024cf7) tabs_3_long_passive_pane_ParamLimits

0xa32c,	// (0x00024cf7) tabs_3_long_passive_pane

0xa33f,	// (0x00024d0a) tabs_3_long_passive_pane_cp_ParamLimits

0xa33f,	// (0x00024d0a) tabs_3_long_passive_pane_cp

0xa2c1,	// (0x00024c8c) volume_small_pane_g1

0xa2ca,	// (0x00024c95) volume_small_pane_g2

0xa2d3,	// (0x00024c9e) volume_small_pane_g3

0xa2dc,	// (0x00024ca7) volume_small_pane_g4

0xa2e5,	// (0x00024cb0) volume_small_pane_g5

0xa2ee,	// (0x00024cb9) volume_small_pane_g6

0xa2f7,	// (0x00024cc2) volume_small_pane_g7

0xa300,	// (0x00024ccb) volume_small_pane_g8

0xa309,	// (0x00024cd4) volume_small_pane_g9

0xa312,	// (0x00024cdd) volume_small_pane_g10

0x0009,

0xf8c2,	// (0x0002a28d) volume_small_pane_g

0x6018,	// (0x000209e3) bg_active_tab_pane_cp2_ParamLimits

0x6018,	// (0x000209e3) bg_active_tab_pane_cp2

0x6010,	// (0x000209db) tabs_3_active_pane_g1

0x8f11,	// (0x000238dc) tabs_3_active_pane_t1

0x6018,	// (0x000209e3) bg_passive_tab_pane_cp2_ParamLimits

0x6018,	// (0x000209e3) bg_passive_tab_pane_cp2

0x6010,	// (0x000209db) tabs_3_passive_pane_g1

0x8f11,	// (0x000238dc) tabs_3_passive_pane_t1

0x6018,	// (0x000209e3) bg_active_tab_pane_cp3_ParamLimits

0x6018,	// (0x000209e3) bg_active_tab_pane_cp3

0x8f23,	// (0x000238ee) tabs_4_active_pane_g1

0x8f2b,	// (0x000238f6) tabs_4_active_pane_t1

0x6018,	// (0x000209e3) bg_passive_tab_pane_cp3_ParamLimits

0x6018,	// (0x000209e3) bg_passive_tab_pane_cp3

0x8f23,	// (0x000238ee) tabs_4_1_passive_pane_g1

0x8f2b,	// (0x000238f6) tabs_4_1_passive_pane_t1

0x6aca,	// (0x00021495) list_highlight_pane_cp2

0xe0c9,	// (0x00028a94) list_set_pane_ParamLimits

0xe0c9,	// (0x00028a94) list_set_pane

0xe157,	// (0x00028b22) main_pane_set_t1_ParamLimits

0xe157,	// (0x00028b22) main_pane_set_t1

0xe177,	// (0x00028b42) main_pane_set_t2_ParamLimits

0xe177,	// (0x00028b42) main_pane_set_t2

0xe189,	// (0x00028b54) main_pane_set_t3_ParamLimits

0xe189,	// (0x00028b54) main_pane_set_t3

0xe19b,	// (0x00028b66) main_pane_set_t4_ParamLimits

0xe19b,	// (0x00028b66) main_pane_set_t4

0x0003,

0xf992,	// (0x0002a35d) main_pane_set_t_ParamLimits

0xf992,	// (0x0002a35d) main_pane_set_t

0xe1ad,	// (0x00028b78) setting_code_pane

0xe1b5,	// (0x00028b80) setting_slider_graphic_pane

0xe1b5,	// (0x00028b80) setting_slider_pane

0xe1b5,	// (0x00028b80) setting_text_pane

0xe1b5,	// (0x00028b80) setting_volume_pane

0x8f3d,	// (0x00023908) volume_set_pane

0x6018,	// (0x000209e3) bg_set_opt_pane_cp

0x8f45,	// (0x00023910) setting_slider_pane_t1

0x8f5b,	// (0x00023926) setting_slider_pane_t2

0x8f74,	// (0x0002393f) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x00029f45) setting_slider_pane_t

0x8f8b,	// (0x00023956) slider_set_pane

0x5fb4,	// (0x0002097f) bg_set_opt_pane_cp2

0x6052,	// (0x00020a1d) setting_slider_graphic_pane_g1

0x8fa1,	// (0x0002396c) setting_slider_graphic_pane_t1

0x8fb0,	// (0x0002397b) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x00029f4c) setting_slider_graphic_pane_t

0x8fbf,	// (0x0002398a) slider_set_pane_cp

0x5fb4,	// (0x0002097f) input_focus_pane_cp1

0xb810,	// (0x000261db) list_set_text_pane

0x5f32,	// (0x000208fd) setting_text_pane_g1

0x5fb4,	// (0x0002097f) input_focus_pane_cp2

0x5f32,	// (0x000208fd) setting_code_pane_g1

0x605b,	// (0x00020a26) setting_code_pane_t1

0xcdfb,	// (0x000277c6) set_text_pane_t1_ParamLimits

0xcdfb,	// (0x000277c6) set_text_pane_t1

0x6613,	// (0x00020fde) set_opt_bg_pane_g1

0x661b,	// (0x00020fe6) set_opt_bg_pane_g2

0xe089,	// (0x00028a54) set_opt_bg_pane_g3

0x662b,	// (0x00020ff6) set_opt_bg_pane_g4

0x6633,	// (0x00020ffe) set_opt_bg_pane_g5

0x663b,	// (0x00021006) set_opt_bg_pane_g6

0xe091,	// (0x00028a5c) set_opt_bg_pane_g7

0xe099,	// (0x00028a64) set_opt_bg_pane_g8

0xe0a1,	// (0x00028a6c) set_opt_bg_pane_g9

0x0008,

0xf97f,	// (0x0002a34a) set_opt_bg_pane_g

0xb803,	// (0x000261ce) slider_set_pane_g1

0xa47b,	// (0x00024e46) slider_set_pane_g2

0x0006,

0xf970,	// (0x0002a33b) slider_set_pane_g

0xa417,	// (0x00024de2) volume_set_pane_g1

0xa41f,	// (0x00024dea) volume_set_pane_g2

0xa427,	// (0x00024df2) volume_set_pane_g3

0xa42f,	// (0x00024dfa) volume_set_pane_g4

0xa437,	// (0x00024e02) volume_set_pane_g5

0xa43f,	// (0x00024e0a) volume_set_pane_g6

0xa447,	// (0x00024e12) volume_set_pane_g7

0xa44f,	// (0x00024e1a) volume_set_pane_g8

0xa457,	// (0x00024e22) volume_set_pane_g9

0xa45f,	// (0x00024e2a) volume_set_pane_g10

0x0009,

0xf948,	// (0x0002a313) volume_set_pane_g

0x8fc7,	// (0x00023992) indicator_pane_ParamLimits

0x8fc7,	// (0x00023992) indicator_pane

0x8fd3,	// (0x0002399e) main_idle_pane_g2_ParamLimits

0x8fd3,	// (0x0002399e) main_idle_pane_g2

0x8ff7,	// (0x000239c2) main_pane_idle_g1_ParamLimits

0x8ff7,	// (0x000239c2) main_pane_idle_g1

0x6069,	// (0x00020a34) popup_clock_digital_analogue_window_ParamLimits

0x6069,	// (0x00020a34) popup_clock_digital_analogue_window

0x9004,	// (0x000239cf) soft_indicator_pane_ParamLimits

0x9004,	// (0x000239cf) soft_indicator_pane

0x9010,	// (0x000239db) wallpaper_pane_ParamLimits

0x9010,	// (0x000239db) wallpaper_pane

0x5f32,	// (0x000208fd) wallpaper_pane_g1

0x901c,	// (0x000239e7) indicator_pane_g1_ParamLimits

0x901c,	// (0x000239e7) indicator_pane_g1

0xb938,	// (0x00026303) navi_navi_icon_text_pane_srt_g1

0x6097,	// (0x00020a62) soft_indicator_pane_t1

0x60b1,	// (0x00020a7c) aid_ps_area_pane

0x9028,	// (0x000239f3) aid_ps_clock_pane

0x60c2,	// (0x00020a8d) aid_ps_indicator_pane

0x60ce,	// (0x00020a99) indicator_ps_pane_ParamLimits

0x60ce,	// (0x00020a99) indicator_ps_pane

0x60dd,	// (0x00020aa8) power_save_pane_g1_ParamLimits

0x60dd,	// (0x00020aa8) power_save_pane_g1

0x60e9,	// (0x00020ab4) power_save_pane_g2_ParamLimits

0x60e9,	// (0x00020ab4) power_save_pane_g2

0x8b8d,	// (0x00023558) aid_navinavi_width_pane

0x60b1,	// (0x00020a7c) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x00029f51) power_save_pane_g_ParamLimits

0xf586,	// (0x00029f51) power_save_pane_g

0x60f7,	// (0x00020ac2) power_save_pane_t1_ParamLimits

0x60f7,	// (0x00020ac2) power_save_pane_t1

0x9028,	// (0x000239f3) aid_ps_clock_pane_ParamLimits

0x60c2,	// (0x00020a8d) aid_ps_indicator_pane_ParamLimits

0x6109,	// (0x00020ad4) power_save_pane_t4_ParamLimits

0x6109,	// (0x00020ad4) power_save_pane_t4

0x0001,

0xf58b,	// (0x00029f56) power_save_pane_t_ParamLimits

0xf58b,	// (0x00029f56) power_save_pane_t

0x6133,	// (0x00020afe) power_save_t3_ParamLimits

0x6133,	// (0x00020afe) power_save_t3

0x611e,	// (0x00020ae9) power_save_t2_ParamLimits

0x611e,	// (0x00020ae9) power_save_t2

0x6148,	// (0x00020b13) indicator_ps_pane_g1

0x9034,	// (0x000239ff) ai_gene_pane_ParamLimits

0x9034,	// (0x000239ff) ai_gene_pane

0x9040,	// (0x00023a0b) ai_links_pane_ParamLimits

0x9040,	// (0x00023a0b) ai_links_pane

0x904c,	// (0x00023a17) indicator_pane_cp1_ParamLimits

0x904c,	// (0x00023a17) indicator_pane_cp1

0x9058,	// (0x00023a23) main_pane_idle_g1_cp_ParamLimits

0x9058,	// (0x00023a23) main_pane_idle_g1_cp

0x6151,	// (0x00020b1c) popup_ai_links_title_window

0x9064,	// (0x00023a2f) soft_indicator_pane_cp1_ParamLimits

0x9064,	// (0x00023a2f) soft_indicator_pane_cp1

0xb645,	// (0x00026010) ai_links_pane_g1

0xb64e,	// (0x00026019) grid_ai_links_pane

0xe03f,	// (0x00028a0a) ai_gene_pane_1

0xb633,	// (0x00025ffe) ai_gene_pane_2

0xb63c,	// (0x00026007) list_highlight_pane_cp4

0xe023,	// (0x000289ee) cell_ai_link_pane_ParamLimits

0xe023,	// (0x000289ee) cell_ai_link_pane

0xb62b,	// (0x00025ff6) cell_ai_link_pane_g1

0x630b,	// (0x00020cd6) cell_ai_link_pane_g2

0x0001,

0xf923,	// (0x0002a2ee) cell_ai_link_pane_g

0x5fb4,	// (0x0002097f) grid_highlight_cp2

0x5fb4,	// (0x0002097f) bg_popup_sub_pane_cp1

0x6168,	// (0x00020b33) popup_ai_links_title_window_t1

0xb57d,	// (0x00025f48) ai_gene_pane_1_g1_ParamLimits

0xb57d,	// (0x00025f48) ai_gene_pane_1_g1

0xb589,	// (0x00025f54) ai_gene_pane_1_g2_ParamLimits

0xb589,	// (0x00025f54) ai_gene_pane_1_g2

0x0001,

0xf919,	// (0x0002a2e4) ai_gene_pane_1_g_ParamLimits

0xf919,	// (0x0002a2e4) ai_gene_pane_1_g

0xb596,	// (0x00025f61) ai_gene_pane_1_t1_ParamLimits

0xb596,	// (0x00025f61) ai_gene_pane_1_t1

0xb5ca,	// (0x00025f95) grid_ai_soft_ind_pane

0xb568,	// (0x00025f33) ai_gene_pane_2_t1_ParamLimits

0xb568,	// (0x00025f33) ai_gene_pane_2_t1

0x9070,	// (0x00023a3b) main_pane_empty_t1_ParamLimits

0x9070,	// (0x00023a3b) main_pane_empty_t1

0x908d,	// (0x00023a58) main_pane_empty_t2_ParamLimits

0x908d,	// (0x00023a58) main_pane_empty_t2

0x90a5,	// (0x00023a70) main_pane_empty_t3_ParamLimits

0x90a5,	// (0x00023a70) main_pane_empty_t3

0x90b8,	// (0x00023a83) main_pane_empty_t4_ParamLimits

0x90b8,	// (0x00023a83) main_pane_empty_t4

0x90cb,	// (0x00023a96) main_pane_empty_t5_ParamLimits

0x90cb,	// (0x00023a96) main_pane_empty_t5

0x0004,

0xf590,	// (0x00029f5b) main_pane_empty_t_ParamLimits

0xf590,	// (0x00029f5b) main_pane_empty_t

0x6678,	// (0x00021043) bg_popup_window_pane_ParamLimits

0x6678,	// (0x00021043) bg_popup_window_pane

0xb2e2,	// (0x00025cad) find_popup_pane_cp2_ParamLimits

0xb2e2,	// (0x00025cad) find_popup_pane_cp2

0xb2ee,	// (0x00025cb9) heading_pane_ParamLimits

0xb2ee,	// (0x00025cb9) heading_pane

0x5fb4,	// (0x0002097f) bg_popup_sub_pane

0xdfb7,	// (0x00028982) bg_popup_window_pane_g1_ParamLimits

0xdfb7,	// (0x00028982) bg_popup_window_pane_g1

0xdfc3,	// (0x0002898e) bg_popup_window_pane_g2_ParamLimits

0xdfc3,	// (0x0002898e) bg_popup_window_pane_g2

0xdfcf,	// (0x0002899a) bg_popup_window_pane_g3_ParamLimits

0xdfcf,	// (0x0002899a) bg_popup_window_pane_g3

0xdfdb,	// (0x000289a6) bg_popup_window_pane_g4_ParamLimits

0xdfdb,	// (0x000289a6) bg_popup_window_pane_g4

0xdfe7,	// (0x000289b2) bg_popup_window_pane_g5_ParamLimits

0xdfe7,	// (0x000289b2) bg_popup_window_pane_g5

0xdff3,	// (0x000289be) bg_popup_window_pane_g6_ParamLimits

0xdff3,	// (0x000289be) bg_popup_window_pane_g6

0xdfff,	// (0x000289ca) bg_popup_window_pane_g7_ParamLimits

0xdfff,	// (0x000289ca) bg_popup_window_pane_g7

0xe00b,	// (0x000289d6) bg_popup_window_pane_g8_ParamLimits

0xe00b,	// (0x000289d6) bg_popup_window_pane_g8

0xe017,	// (0x000289e2) bg_popup_window_pane_g9_ParamLimits

0xe017,	// (0x000289e2) bg_popup_window_pane_g9

0xb2c7,	// (0x00025c92) bg_popup_window_pane_g10_ParamLimits

0xb2c7,	// (0x00025c92) bg_popup_window_pane_g10

0x0009,

0xf8e1,	// (0x0002a2ac) bg_popup_window_pane_g_ParamLimits

0xf8e1,	// (0x0002a2ac) bg_popup_window_pane_g

0xb27e,	// (0x00025c49) bg_popup_heading_pane_ParamLimits

0xb27e,	// (0x00025c49) bg_popup_heading_pane

0xa503,	// (0x00024ece) tabs_4_passive_pane_cp_srt_ParamLimits

0xa503,	// (0x00024ece) tabs_4_passive_pane_cp_srt

0xa515,	// (0x00024ee0) tabs_4_passive_pane_srt_ParamLimits

0xb292,	// (0x00025c5d) heading_pane_g2

0xa515,	// (0x00024ee0) tabs_4_passive_pane_srt

0x6aca,	// (0x00021495) bg_passive_tab_pane_cp3_srt_ParamLimits

0x6aca,	// (0x00021495) bg_passive_tab_pane_cp3_srt

0xb29a,	// (0x00025c65) heading_pane_t1_ParamLimits

0xb29a,	// (0x00025c65) heading_pane_t1

0xb2b1,	// (0x00025c7c) heading_pane_t2_ParamLimits

0xb2b1,	// (0x00025c7c) heading_pane_t2

0x0001,

0xf8dc,	// (0x0002a2a7) heading_pane_t_ParamLimits

0xf8dc,	// (0x0002a2a7) heading_pane_t

0x7d52,	// (0x0002271d) bg_popup_heading_pane_g1

0x7de3,	// (0x000227ae) bg_popup_heading_pane_g2

0x7deb,	// (0x000227b6) bg_popup_heading_pane_g3

0x7df3,	// (0x000227be) bg_popup_heading_pane_g4

0x7dfb,	// (0x000227c6) bg_popup_heading_pane_g5

0x7e03,	// (0x000227ce) bg_popup_heading_pane_g6

0x7e0b,	// (0x000227d6) bg_popup_heading_pane_g7

0x7e13,	// (0x000227de) bg_popup_heading_pane_g8

0x7e1b,	// (0x000227e6) bg_popup_heading_pane_g9

0x0008,

0xf898,	// (0x0002a263) bg_popup_heading_pane_g

0x7638,	// (0x00022003) bg_popup_sub_pane_g1

0x7640,	// (0x0002200b) bg_popup_sub_pane_g2

0x7648,	// (0x00022013) bg_popup_sub_pane_g3

0x7650,	// (0x0002201b) bg_popup_sub_pane_g4

0x7658,	// (0x00022023) bg_popup_sub_pane_g5

0x7660,	// (0x0002202b) bg_popup_sub_pane_g6

0x7668,	// (0x00022033) bg_popup_sub_pane_g7

0x7670,	// (0x0002203b) bg_popup_sub_pane_g8

0x7678,	// (0x00022043) bg_popup_sub_pane_g9

0x0008,

0xf872,	// (0x0002a23d) bg_popup_sub_pane_g

0x6002,	// (0x000209cd) bg_popup_window_pane_cp5_ParamLimits

0x6002,	// (0x000209cd) bg_popup_window_pane_cp5

0x6185,	// (0x00020b50) popup_note_window_g1_ParamLimits

0x6185,	// (0x00020b50) popup_note_window_g1

0x6191,	// (0x00020b5c) popup_note_window_t1_ParamLimits

0x6191,	// (0x00020b5c) popup_note_window_t1

0x61a7,	// (0x00020b72) popup_note_window_t2_ParamLimits

0x61a7,	// (0x00020b72) popup_note_window_t2

0x61bd,	// (0x00020b88) popup_note_window_t3_ParamLimits

0x61bd,	// (0x00020b88) popup_note_window_t3

0x61d3,	// (0x00020b9e) popup_note_window_t4_ParamLimits

0x61d3,	// (0x00020b9e) popup_note_window_t4

0x61fb,	// (0x00020bc6) popup_note_window_t5_ParamLimits

0x61fb,	// (0x00020bc6) popup_note_window_t5

0x0004,

0xf59b,	// (0x00029f66) popup_note_window_t_ParamLimits

0xf59b,	// (0x00029f66) popup_note_window_t

0x621f,	// (0x00020bea) bg_popup_window_pane_cp6_ParamLimits

0x621f,	// (0x00020bea) bg_popup_window_pane_cp6

0x7cce,	// (0x00022699) popup_note_image_window_g1_ParamLimits

0x7cce,	// (0x00022699) popup_note_image_window_g1

0x7cda,	// (0x000226a5) popup_note_image_window_g2_ParamLimits

0x7cda,	// (0x000226a5) popup_note_image_window_g2

0x0001,

0xf866,	// (0x0002a231) popup_note_image_window_g_ParamLimits

0xf866,	// (0x0002a231) popup_note_image_window_g

0x7cf3,	// (0x000226be) popup_note_image_window_t1_ParamLimits

0x7cf3,	// (0x000226be) popup_note_image_window_t1

0x7d0c,	// (0x000226d7) popup_note_image_window_t2_ParamLimits

0x7d0c,	// (0x000226d7) popup_note_image_window_t2

0x7d25,	// (0x000226f0) popup_note_image_window_t3_ParamLimits

0x7d25,	// (0x000226f0) popup_note_image_window_t3

0x0002,

0xf86b,	// (0x0002a236) popup_note_image_window_t_ParamLimits

0xf86b,	// (0x0002a236) popup_note_image_window_t

0x7bb9,	// (0x00022584) bg_popup_window_pane_cp7_ParamLimits

0x7bb9,	// (0x00022584) bg_popup_window_pane_cp7

0x7be9,	// (0x000225b4) popup_note_wait_window_g1_ParamLimits

0x7be9,	// (0x000225b4) popup_note_wait_window_g1

0x7bf5,	// (0x000225c0) popup_note_wait_window_g2_ParamLimits

0x7bf5,	// (0x000225c0) popup_note_wait_window_g2

0x0002,

0xf854,	// (0x0002a21f) popup_note_wait_window_g_ParamLimits

0xf854,	// (0x0002a21f) popup_note_wait_window_g

0x7c0d,	// (0x000225d8) popup_note_wait_window_t1_ParamLimits

0x7c0d,	// (0x000225d8) popup_note_wait_window_t1

0x7c34,	// (0x000225ff) popup_note_wait_window_t2_ParamLimits

0x7c34,	// (0x000225ff) popup_note_wait_window_t2

0x7c51,	// (0x0002261c) popup_note_wait_window_t3_ParamLimits

0x7c51,	// (0x0002261c) popup_note_wait_window_t3

0x7c64,	// (0x0002262f) popup_note_wait_window_t4_ParamLimits

0x7c64,	// (0x0002262f) popup_note_wait_window_t4

0x0004,

0xf85b,	// (0x0002a226) popup_note_wait_window_t_ParamLimits

0xf85b,	// (0x0002a226) popup_note_wait_window_t

0x7c89,	// (0x00022654) wait_bar_pane_ParamLimits

0x7c89,	// (0x00022654) wait_bar_pane

0x5fb4,	// (0x0002097f) wait_anim_pane

0x5fb4,	// (0x0002097f) wait_border_pane

0x5f32,	// (0x000208fd) wait_anim_pane_g1

0x5f32,	// (0x000208fd) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x0002a0e5) wait_anim_pane_g

0x7b69,	// (0x00022534) wait_border_pane_g1

0x7b72,	// (0x0002253d) wait_border_pane_g2

0x7b7b,	// (0x00022546) wait_border_pane_g3

0x0002,

0xf84d,	// (0x0002a218) wait_border_pane_g

0x79d9,	// (0x000223a4) bg_popup_window_pane_cp16_ParamLimits

0x79d9,	// (0x000223a4) bg_popup_window_pane_cp16

0x7ad9,	// (0x000224a4) indicator_popup_pane_cp4_ParamLimits

0x7ad9,	// (0x000224a4) indicator_popup_pane_cp4

0x7aed,	// (0x000224b8) popup_query_data_window_t1_ParamLimits

0x7aed,	// (0x000224b8) popup_query_data_window_t1

0x7aff,	// (0x000224ca) popup_query_data_window_t2_ParamLimits

0x7aff,	// (0x000224ca) popup_query_data_window_t2

0x7b18,	// (0x000224e3) popup_query_data_window_t3_ParamLimits

0x7b18,	// (0x000224e3) popup_query_data_window_t3

0x0002,

0xf846,	// (0x0002a211) popup_query_data_window_t_ParamLimits

0xf846,	// (0x0002a211) popup_query_data_window_t

0x7b32,	// (0x000224fd) query_popup_data_pane_ParamLimits

0x7b32,	// (0x000224fd) query_popup_data_pane

0x7b46,	// (0x00022511) query_popup_data_pane_cp1_ParamLimits

0x7b46,	// (0x00022511) query_popup_data_pane_cp1

0x79d9,	// (0x000223a4) bg_popup_window_pane_cp10_ParamLimits

0x79d9,	// (0x000223a4) bg_popup_window_pane_cp10

0x7a0b,	// (0x000223d6) indicator_popup_pane_ParamLimits

0x7a0b,	// (0x000223d6) indicator_popup_pane

0x7a2d,	// (0x000223f8) popup_query_code_window_t1_ParamLimits

0x7a2d,	// (0x000223f8) popup_query_code_window_t1

0x7a47,	// (0x00022412) popup_query_code_window_t2_ParamLimits

0x7a47,	// (0x00022412) popup_query_code_window_t2

0x7a90,	// (0x0002245b) popup_query_code_window_t3_ParamLimits

0x7a90,	// (0x0002245b) popup_query_code_window_t3

0x0002,

0xf83f,	// (0x0002a20a) popup_query_code_window_t_ParamLimits

0xf83f,	// (0x0002a20a) popup_query_code_window_t

0x7abf,	// (0x0002248a) query_popup_pane_ParamLimits

0x7abf,	// (0x0002248a) query_popup_pane

0x621f,	// (0x00020bea) bg_popup_window_pane_cp15_ParamLimits

0x621f,	// (0x00020bea) bg_popup_window_pane_cp15

0x623d,	// (0x00020c08) indicator_popup_pane_cp1_ParamLimits

0x623d,	// (0x00020c08) indicator_popup_pane_cp1

0x6250,	// (0x00020c1b) indicator_popup_pane_cp2_ParamLimits

0x6250,	// (0x00020c1b) indicator_popup_pane_cp2

0x6263,	// (0x00020c2e) popup_query_data_code_window_g1_ParamLimits

0x6263,	// (0x00020c2e) popup_query_data_code_window_g1

0x6276,	// (0x00020c41) popup_query_data_code_window_t1_ParamLimits

0x6276,	// (0x00020c41) popup_query_data_code_window_t1

0x6288,	// (0x00020c53) popup_query_data_code_window_t2_ParamLimits

0x6288,	// (0x00020c53) popup_query_data_code_window_t2

0x629a,	// (0x00020c65) popup_query_data_code_window_t3_ParamLimits

0x629a,	// (0x00020c65) popup_query_data_code_window_t3

0x62b0,	// (0x00020c7b) popup_query_data_code_window_t4_ParamLimits

0x62b0,	// (0x00020c7b) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x00029f71) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x00029f71) popup_query_data_code_window_t

0xa0db,	// (0x00024aa6) list_single_midp_graphic_pane_g3

0x62c8,	// (0x00020c93) query_popup_data_pane_cp2_ParamLimits

0x62db,	// (0x00020ca6) query_popup_pane_cp2_ParamLimits

0x62db,	// (0x00020ca6) query_popup_pane_cp2

0x5fb4,	// (0x0002097f) bg_popup_window_pane_cp11

0x79d1,	// (0x0002239c) heading_pane_cp5

0x6367,	// (0x00020d32) listscroll_popup_info_pane

0x5fb4,	// (0x0002097f) input_focus_pane_cp3

0x62ee,	// (0x00020cb9) query_popup_pane_t1

0x62fc,	// (0x00020cc7) list_popup_info_pane_ParamLimits

0x62fc,	// (0x00020cc7) list_popup_info_pane

0x630b,	// (0x00020cd6) listscroll_popup_info_pane_g1

0x6313,	// (0x00020cde) scroll_pane_cp7

0x631b,	// (0x00020ce6) popup_info_list_pane_t1_ParamLimits

0x631b,	// (0x00020ce6) popup_info_list_pane_t1

0x6335,	// (0x00020d00) popup_info_list_pane_t2_ParamLimits

0x6335,	// (0x00020d00) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x00029f7a) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x00029f7a) popup_info_list_pane_t

0x5fb4,	// (0x0002097f) bg_popup_window_pane_cp12

0xb952,	// (0x0002631d) find_popup_pane

0x6018,	// (0x000209e3) bg_popup_window_pane_cp3

0x634f,	// (0x00020d1a) heading_pane_cp3

0x635b,	// (0x00020d26) listscroll_popup_graphic_pane

0x5fb4,	// (0x0002097f) bg_popup_window_pane_cp4

0x912e,	// (0x00023af9) heading_pane_cp4

0x6367,	// (0x00020d32) listscroll_popup_colour_pane

0x636f,	// (0x00020d3a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x636f,	// (0x00020d3a) cell_large_graphic_colour_none_popup_pane

0x9136,	// (0x00023b01) grid_large_graphic_colour_popup_pane_ParamLimits

0x9136,	// (0x00023b01) grid_large_graphic_colour_popup_pane

0x9152,	// (0x00023b1d) listscroll_popup_colour_pane_g1_ParamLimits

0x9152,	// (0x00023b1d) listscroll_popup_colour_pane_g1

0x9169,	// (0x00023b34) listscroll_popup_colour_pane_g2_ParamLimits

0x9169,	// (0x00023b34) listscroll_popup_colour_pane_g2

0x637f,	// (0x00020d4a) listscroll_popup_colour_pane_g3_ParamLimits

0x637f,	// (0x00020d4a) listscroll_popup_colour_pane_g3

0x917d,	// (0x00023b48) listscroll_popup_colour_pane_g4_ParamLimits

0x917d,	// (0x00023b48) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x00029f7f) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x00029f7f) listscroll_popup_colour_pane_g

0x638f,	// (0x00020d5a) scroll_pane_cp6_ParamLimits

0x638f,	// (0x00020d5a) scroll_pane_cp6

0x918c,	// (0x00023b57) cell_large_graphic_colour_popup_pane_ParamLimits

0x918c,	// (0x00023b57) cell_large_graphic_colour_popup_pane

0x63a1,	// (0x00020d6c) cell_large_graphic_colour_none_popup_pane_t1

0x5fb4,	// (0x0002097f) grid_highlight_pane_cp5

0x63b0,	// (0x00020d7b) cell_large_graphic_colour_popup_pane_g1

0x63b8,	// (0x00020d83) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x00029f88) cell_large_graphic_colour_popup_pane_g

0x63c0,	// (0x00020d8b) cell_large_graphic_colour_popup_pane_g2_copy1

0x63c9,	// (0x00020d94) grid_highlight_pane_cp4

0x63d1,	// (0x00020d9c) bg_popup_window_pane_cp8_ParamLimits

0x63d1,	// (0x00020d9c) bg_popup_window_pane_cp8

0x63ec,	// (0x00020db7) popup_snote_single_text_window_g1_ParamLimits

0x63ec,	// (0x00020db7) popup_snote_single_text_window_g1

0x63fe,	// (0x00020dc9) popup_snote_single_text_window_t1_ParamLimits

0x63fe,	// (0x00020dc9) popup_snote_single_text_window_t1

0x6411,	// (0x00020ddc) popup_snote_single_text_window_t2_ParamLimits

0x6411,	// (0x00020ddc) popup_snote_single_text_window_t2

0x6424,	// (0x00020def) popup_snote_single_text_window_t3_ParamLimits

0x6424,	// (0x00020def) popup_snote_single_text_window_t3

0x645d,	// (0x00020e28) popup_snote_single_text_window_t4_ParamLimits

0x645d,	// (0x00020e28) popup_snote_single_text_window_t4

0x6491,	// (0x00020e5c) popup_snote_single_text_window_t5_ParamLimits

0x6491,	// (0x00020e5c) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x00029f8d) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x00029f8d) popup_snote_single_text_window_t

0x64c0,	// (0x00020e8b) bg_popup_window_pane_cp9_ParamLimits

0x64c0,	// (0x00020e8b) bg_popup_window_pane_cp9

0x63ec,	// (0x00020db7) popup_snote_single_graphic_window_g1_ParamLimits

0x63ec,	// (0x00020db7) popup_snote_single_graphic_window_g1

0x64ce,	// (0x00020e99) popup_snote_single_graphic_window_g2_ParamLimits

0x64ce,	// (0x00020e99) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x00029f98) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x00029f98) popup_snote_single_graphic_window_g

0x64da,	// (0x00020ea5) popup_snote_single_graphic_window_t1_ParamLimits

0x64da,	// (0x00020ea5) popup_snote_single_graphic_window_t1

0x64ed,	// (0x00020eb8) popup_snote_single_graphic_window_t2_ParamLimits

0x64ed,	// (0x00020eb8) popup_snote_single_graphic_window_t2

0x6424,	// (0x00020def) popup_snote_single_graphic_window_t3_ParamLimits

0x6424,	// (0x00020def) popup_snote_single_graphic_window_t3

0x645d,	// (0x00020e28) popup_snote_single_graphic_window_t4_ParamLimits

0x645d,	// (0x00020e28) popup_snote_single_graphic_window_t4

0x6491,	// (0x00020e5c) popup_snote_single_graphic_window_t5_ParamLimits

0x6491,	// (0x00020e5c) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x00029f9d) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x00029f9d) popup_snote_single_graphic_window_t

0xe2a8,	// (0x00028c73) grid_graphic_popup_pane_ParamLimits

0xe2a8,	// (0x00028c73) grid_graphic_popup_pane

0xe2cb,	// (0x00028c96) listscroll_popup_graphic_pane_g1_ParamLimits

0xe2cb,	// (0x00028c96) listscroll_popup_graphic_pane_g1

0xe2df,	// (0x00028caa) listscroll_popup_graphic_pane_g2_ParamLimits

0xe2df,	// (0x00028caa) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bc,	// (0x0002a387) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bc,	// (0x0002a387) listscroll_popup_graphic_pane_g

0xb90a,	// (0x000262d5) scroll_pane_cp5

0xe261,	// (0x00028c2c) cell_graphic_popup_pane_ParamLimits

0xe261,	// (0x00028c2c) cell_graphic_popup_pane

0xb8d5,	// (0x000262a0) cell_graphic_popup_pane_g1

0xb8dd,	// (0x000262a8) cell_graphic_popup_pane_g2

0x63c0,	// (0x00020d8b) cell_graphic_popup_pane_g3

0x0002,

0xf9b5,	// (0x0002a380) cell_graphic_popup_pane_g

0xb8e6,	// (0x000262b1) cell_graphic_popup_pane_t2

0x63c9,	// (0x00020d94) grid_highlight_pane_cp3

0x6512,	// (0x00020edd) list_gen_pane_ParamLimits

0x6512,	// (0x00020edd) list_gen_pane

0x653b,	// (0x00020f06) scroll_pane

0xe232,	// (0x00028bfd) bg_list_pane_g1_ParamLimits

0xe232,	// (0x00028bfd) bg_list_pane_g1

0xb884,	// (0x0002624f) bg_list_pane_g2_ParamLimits

0xb884,	// (0x0002624f) bg_list_pane_g2

0xb897,	// (0x00026262) bg_list_pane_g3_ParamLimits

0xb897,	// (0x00026262) bg_list_pane_g3

0xb8a9,	// (0x00026274) bg_list_pane_g4_ParamLimits

0xb8a9,	// (0x00026274) bg_list_pane_g4

0xe249,	// (0x00028c14) bg_list_pane_g5_ParamLimits

0xe249,	// (0x00028c14) bg_list_pane_g5

0x0004,

0xf9aa,	// (0x0002a375) bg_list_pane_g_ParamLimits

0xf9aa,	// (0x0002a375) bg_list_pane_g

0xe1e2,	// (0x00028bad) list_double2_graphic_large_graphic_pane_ParamLimits

0xe1e2,	// (0x00028bad) list_double2_graphic_large_graphic_pane

0xe1e2,	// (0x00028bad) list_double2_graphic_pane_ParamLimits

0xe1e2,	// (0x00028bad) list_double2_graphic_pane

0xe1e2,	// (0x00028bad) list_double2_large_graphic_pane_ParamLimits

0xe1e2,	// (0x00028bad) list_double2_large_graphic_pane

0xe1e2,	// (0x00028bad) list_double2_pane_ParamLimits

0xe1e2,	// (0x00028bad) list_double2_pane

0xe1e2,	// (0x00028bad) list_double_graphic_heading_pane_ParamLimits

0xe1e2,	// (0x00028bad) list_double_graphic_heading_pane

0xe1e2,	// (0x00028bad) list_double_graphic_pane_ParamLimits

0xe1e2,	// (0x00028bad) list_double_graphic_pane

0xe1e2,	// (0x00028bad) list_double_heading_pane_ParamLimits

0xe1e2,	// (0x00028bad) list_double_heading_pane

0xe1e2,	// (0x00028bad) list_double_large_graphic_pane_ParamLimits

0xe1e2,	// (0x00028bad) list_double_large_graphic_pane

0xe1e2,	// (0x00028bad) list_double_number_pane_ParamLimits

0xe1e2,	// (0x00028bad) list_double_number_pane

0xe1e2,	// (0x00028bad) list_double_pane_ParamLimits

0xe1e2,	// (0x00028bad) list_double_pane

0xe1e2,	// (0x00028bad) list_double_time_pane_ParamLimits

0xe1e2,	// (0x00028bad) list_double_time_pane

0xe1e2,	// (0x00028bad) list_setting_number_pane_ParamLimits

0xe1e2,	// (0x00028bad) list_setting_number_pane

0xe1e2,	// (0x00028bad) list_setting_pane_ParamLimits

0xe1e2,	// (0x00028bad) list_setting_pane

0xd63f,	// (0x0002800a) list_single_2graphic_pane_ParamLimits

0xd63f,	// (0x0002800a) list_single_2graphic_pane

0xd63f,	// (0x0002800a) list_single_graphic_heading_pane_ParamLimits

0xd63f,	// (0x0002800a) list_single_graphic_heading_pane

0xd63f,	// (0x0002800a) list_single_graphic_pane_ParamLimits

0xd63f,	// (0x0002800a) list_single_graphic_pane

0xd63f,	// (0x0002800a) list_single_heading_pane_ParamLimits

0xd63f,	// (0x0002800a) list_single_heading_pane

0xd656,	// (0x00028021) list_single_large_graphic_pane_ParamLimits

0xd656,	// (0x00028021) list_single_large_graphic_pane

0xd63f,	// (0x0002800a) list_single_number_heading_pane_ParamLimits

0xd63f,	// (0x0002800a) list_single_number_heading_pane

0xd63f,	// (0x0002800a) list_single_number_pane_ParamLimits

0xd63f,	// (0x0002800a) list_single_number_pane

0xd63f,	// (0x0002800a) list_single_pane_ParamLimits

0xd63f,	// (0x0002800a) list_single_pane

0x5fb4,	// (0x0002097f) list_highlight_pane_cp1

0xce23,	// (0x000277ee) list_single_pane_g1_ParamLimits

0xce23,	// (0x000277ee) list_single_pane_g1

0xce2f,	// (0x000277fa) list_single_pane_g2_ParamLimits

0xce2f,	// (0x000277fa) list_single_pane_g2

0x0001,

0xf5e4,	// (0x00029faf) list_single_pane_g_ParamLimits

0xf5e4,	// (0x00029faf) list_single_pane_g

0xd5ff,	// (0x00027fca) list_single_pane_t1_ParamLimits

0xd5ff,	// (0x00027fca) list_single_pane_t1

0xce23,	// (0x000277ee) list_single_number_pane_g1_ParamLimits

0xce23,	// (0x000277ee) list_single_number_pane_g1

0xce2f,	// (0x000277fa) list_single_number_pane_g2_ParamLimits

0xce2f,	// (0x000277fa) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x00029faf) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x00029faf) list_single_number_pane_g

0xce3b,	// (0x00027806) list_single_number_pane_t1_ParamLimits

0xce3b,	// (0x00027806) list_single_number_pane_t1

0xd5c0,	// (0x00027f8b) list_single_number_pane_t2_ParamLimits

0xd5c0,	// (0x00027f8b) list_single_number_pane_t2

0x0001,

0xf96b,	// (0x0002a336) list_single_number_pane_t_ParamLimits

0xf96b,	// (0x0002a336) list_single_number_pane_t

0xce17,	// (0x000277e2) list_single_graphic_pane_g1_ParamLimits

0xce17,	// (0x000277e2) list_single_graphic_pane_g1

0xce23,	// (0x000277ee) list_single_graphic_pane_g2_ParamLimits

0xce23,	// (0x000277ee) list_single_graphic_pane_g2

0xce2f,	// (0x000277fa) list_single_graphic_pane_g3_ParamLimits

0xce2f,	// (0x000277fa) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x00029fa8) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x00029fa8) list_single_graphic_pane_g

0xce3b,	// (0x00027806) list_single_graphic_pane_t1_ParamLimits

0xce3b,	// (0x00027806) list_single_graphic_pane_t1

0xce23,	// (0x000277ee) list_single_heading_pane_g1_ParamLimits

0xce23,	// (0x000277ee) list_single_heading_pane_g1

0xce2f,	// (0x000277fa) list_single_heading_pane_g2_ParamLimits

0xce2f,	// (0x000277fa) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x00029faf) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x00029faf) list_single_heading_pane_g

0xce51,	// (0x0002781c) list_single_heading_pane_t1_ParamLimits

0xce51,	// (0x0002781c) list_single_heading_pane_t1

0xce67,	// (0x00027832) list_single_heading_pane_t2_ParamLimits

0xce67,	// (0x00027832) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x00029fb4) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x00029fb4) list_single_heading_pane_t

0xce23,	// (0x000277ee) list_single_number_heading_pane_g1_ParamLimits

0xce23,	// (0x000277ee) list_single_number_heading_pane_g1

0xce2f,	// (0x000277fa) list_single_number_heading_pane_g2_ParamLimits

0xce2f,	// (0x000277fa) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x00029faf) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x00029faf) list_single_number_heading_pane_g

0xce51,	// (0x0002781c) list_single_number_heading_pane_t1_ParamLimits

0xce51,	// (0x0002781c) list_single_number_heading_pane_t1

0xce79,	// (0x00027844) list_single_number_heading_pane_t2_ParamLimits

0xce79,	// (0x00027844) list_single_number_heading_pane_t2

0xce8b,	// (0x00027856) list_single_number_heading_pane_t3_ParamLimits

0xce8b,	// (0x00027856) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x00029fb9) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x00029fb9) list_single_number_heading_pane_t

0xce17,	// (0x000277e2) list_single_graphic_heading_pane_g1_ParamLimits

0xce17,	// (0x000277e2) list_single_graphic_heading_pane_g1

0xce9d,	// (0x00027868) list_single_graphic_heading_pane_g4_ParamLimits

0xce9d,	// (0x00027868) list_single_graphic_heading_pane_g4

0xce2f,	// (0x000277fa) list_single_graphic_heading_pane_g5_ParamLimits

0xce2f,	// (0x000277fa) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x00029fc0) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x00029fc0) list_single_graphic_heading_pane_g

0xce51,	// (0x0002781c) list_single_graphic_heading_pane_t1_ParamLimits

0xce51,	// (0x0002781c) list_single_graphic_heading_pane_t1

0xceac,	// (0x00027877) list_single_graphic_heading_pane_t2_ParamLimits

0xceac,	// (0x00027877) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x00029fc7) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x00029fc7) list_single_graphic_heading_pane_t

0xcebe,	// (0x00027889) list_single_large_graphic_pane_g1_ParamLimits

0xcebe,	// (0x00027889) list_single_large_graphic_pane_g1

0xceca,	// (0x00027895) list_single_large_graphic_pane_g2_ParamLimits

0xceca,	// (0x00027895) list_single_large_graphic_pane_g2

0xced6,	// (0x000278a1) list_single_large_graphic_pane_g3_ParamLimits

0xced6,	// (0x000278a1) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x00029fcc) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00029fcc) list_single_large_graphic_pane_g

0x7b72,	// (0x0002253d) wait_border_pane_g2_copy1

0xcee2,	// (0x000278ad) list_single_large_graphic_pane_g4_cp2

0xceea,	// (0x000278b5) list_single_large_graphic_pane_t1_ParamLimits

0xceea,	// (0x000278b5) list_single_large_graphic_pane_t1

0xcf00,	// (0x000278cb) list_double_pane_g1_ParamLimits

0xcf00,	// (0x000278cb) list_double_pane_g1

0xcf0c,	// (0x000278d7) list_double_pane_g2_ParamLimits

0xcf0c,	// (0x000278d7) list_double_pane_g2

0x0001,

0xf608,	// (0x00029fd3) list_double_pane_g_ParamLimits

0xf608,	// (0x00029fd3) list_double_pane_g

0xcf18,	// (0x000278e3) list_double_pane_t1_ParamLimits

0xcf18,	// (0x000278e3) list_double_pane_t1

0xcf2e,	// (0x000278f9) list_double_pane_t2_ParamLimits

0xcf2e,	// (0x000278f9) list_double_pane_t2

0x0001,

0xf60d,	// (0x00029fd8) list_double_pane_t_ParamLimits

0xf60d,	// (0x00029fd8) list_double_pane_t

0xcf40,	// (0x0002790b) list_double2_pane_g1_ParamLimits

0xcf40,	// (0x0002790b) list_double2_pane_g1

0xcf0c,	// (0x000278d7) list_double2_pane_g2_ParamLimits

0xcf0c,	// (0x000278d7) list_double2_pane_g2

0x0001,

0xf612,	// (0x00029fdd) list_double2_pane_g_ParamLimits

0xf612,	// (0x00029fdd) list_double2_pane_g

0xcf18,	// (0x000278e3) list_double2_pane_t1_ParamLimits

0xcf18,	// (0x000278e3) list_double2_pane_t1

0xcf4f,	// (0x0002791a) list_double2_pane_t2_ParamLimits

0xcf4f,	// (0x0002791a) list_double2_pane_t2

0x0001,

0xf617,	// (0x00029fe2) list_double2_pane_t_ParamLimits

0xf617,	// (0x00029fe2) list_double2_pane_t

0xcf00,	// (0x000278cb) list_double_number_pane_g1_ParamLimits

0xcf00,	// (0x000278cb) list_double_number_pane_g1

0xcf0c,	// (0x000278d7) list_double_number_pane_g2_ParamLimits

0xcf0c,	// (0x000278d7) list_double_number_pane_g2

0x0001,

0xf608,	// (0x00029fd3) list_double_number_pane_g_ParamLimits

0xf608,	// (0x00029fd3) list_double_number_pane_g

0xcf61,	// (0x0002792c) list_double_number_pane_t1_ParamLimits

0xcf61,	// (0x0002792c) list_double_number_pane_t1

0xcf73,	// (0x0002793e) list_double_number_pane_t2_ParamLimits

0xcf73,	// (0x0002793e) list_double_number_pane_t2

0xcf89,	// (0x00027954) list_double_number_pane_t3_ParamLimits

0xcf89,	// (0x00027954) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x00029fe7) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x00029fe7) list_double_number_pane_t

0xcf9b,	// (0x00027966) list_double_graphic_pane_g1_ParamLimits

0xcf9b,	// (0x00027966) list_double_graphic_pane_g1

0xcfa7,	// (0x00027972) list_double_graphic_pane_g2_ParamLimits

0xcfa7,	// (0x00027972) list_double_graphic_pane_g2

0xcfb6,	// (0x00027981) list_double_graphic_pane_g3_ParamLimits

0xcfb6,	// (0x00027981) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x00029fee) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x00029fee) list_double_graphic_pane_g

0xcfce,	// (0x00027999) list_double_graphic_pane_t1_ParamLimits

0xcfce,	// (0x00027999) list_double_graphic_pane_t1

0xcfe4,	// (0x000279af) list_double_graphic_pane_t2_ParamLimits

0xcfe4,	// (0x000279af) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x00029ff7) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x00029ff7) list_double_graphic_pane_t

0xcf9b,	// (0x00027966) list_double2_graphic_pane_g1_ParamLimits

0xcf9b,	// (0x00027966) list_double2_graphic_pane_g1

0xcff6,	// (0x000279c1) list_double2_graphic_pane_g2_ParamLimits

0xcff6,	// (0x000279c1) list_double2_graphic_pane_g2

0xd002,	// (0x000279cd) list_double2_graphic_pane_g3_ParamLimits

0xd002,	// (0x000279cd) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x00029ffc) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x00029ffc) list_double2_graphic_pane_g

0xcf73,	// (0x0002793e) list_double2_graphic_pane_t1_ParamLimits

0xcf73,	// (0x0002793e) list_double2_graphic_pane_t1

0xd00e,	// (0x000279d9) list_double2_graphic_pane_t2_ParamLimits

0xd00e,	// (0x000279d9) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0002a003) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0002a003) list_double2_graphic_pane_t

0xd020,	// (0x000279eb) list_double_large_graphic_pane_g1_ParamLimits

0xd020,	// (0x000279eb) list_double_large_graphic_pane_g1

0xcf40,	// (0x0002790b) list_double_large_graphic_pane_g2_ParamLimits

0xcf40,	// (0x0002790b) list_double_large_graphic_pane_g2

0xcf0c,	// (0x000278d7) list_double_large_graphic_pane_g3_ParamLimits

0xcf0c,	// (0x000278d7) list_double_large_graphic_pane_g3

0xd049,	// (0x00027a14) list_double_large_graphic_pane_g4_ParamLimits

0xd049,	// (0x00027a14) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0002a008) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0002a008) list_double_large_graphic_pane_g

0xd06f,	// (0x00027a3a) list_double_large_graphic_pane_t1_ParamLimits

0xd06f,	// (0x00027a3a) list_double_large_graphic_pane_t1

0xd088,	// (0x00027a53) list_double_large_graphic_pane_t2_ParamLimits

0xd088,	// (0x00027a53) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0002a013) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0002a013) list_double_large_graphic_pane_t

0xd09a,	// (0x00027a65) list_double2_large_graphic_pane_g1_ParamLimits

0xd09a,	// (0x00027a65) list_double2_large_graphic_pane_g1

0xcf40,	// (0x0002790b) list_double2_large_graphic_pane_g2_ParamLimits

0xcf40,	// (0x0002790b) list_double2_large_graphic_pane_g2

0xcf0c,	// (0x000278d7) list_double2_large_graphic_pane_g3_ParamLimits

0xcf0c,	// (0x000278d7) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0002a018) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0002a018) list_double2_large_graphic_pane_g

0xd0a6,	// (0x00027a71) list_double2_large_graphic_pane_t1_ParamLimits

0xd0a6,	// (0x00027a71) list_double2_large_graphic_pane_t1

0xd0bc,	// (0x00027a87) list_double2_large_graphic_pane_t2_ParamLimits

0xd0bc,	// (0x00027a87) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0002a01f) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0002a01f) list_double2_large_graphic_pane_t

0xd0ce,	// (0x00027a99) list_double_heading_pane_g1_ParamLimits

0xd0ce,	// (0x00027a99) list_double_heading_pane_g1

0xd0dd,	// (0x00027aa8) list_double_heading_pane_g2_ParamLimits

0xd0dd,	// (0x00027aa8) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0002a024) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0002a024) list_double_heading_pane_g

0xd0e9,	// (0x00027ab4) list_double_heading_pane_t1_ParamLimits

0xd0e9,	// (0x00027ab4) list_double_heading_pane_t1

0xd0ff,	// (0x00027aca) list_double_heading_pane_t2_ParamLimits

0xd0ff,	// (0x00027aca) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0002a029) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0002a029) list_double_heading_pane_t

0xd111,	// (0x00027adc) list_double_graphic_heading_pane_g1_ParamLimits

0xd111,	// (0x00027adc) list_double_graphic_heading_pane_g1

0xd0ce,	// (0x00027a99) list_double_graphic_heading_pane_g2_ParamLimits

0xd0ce,	// (0x00027a99) list_double_graphic_heading_pane_g2

0xd0dd,	// (0x00027aa8) list_double_graphic_heading_pane_g3_ParamLimits

0xd0dd,	// (0x00027aa8) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0002a02e) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0002a02e) list_double_graphic_heading_pane_g

0xd11d,	// (0x00027ae8) list_double_graphic_heading_pane_t1_ParamLimits

0xd11d,	// (0x00027ae8) list_double_graphic_heading_pane_t1

0xd133,	// (0x00027afe) list_double_graphic_heading_pane_t2_ParamLimits

0xd133,	// (0x00027afe) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0002a035) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0002a035) list_double_graphic_heading_pane_t

0xcf40,	// (0x0002790b) list_double_time_pane_g1_ParamLimits

0xcf40,	// (0x0002790b) list_double_time_pane_g1

0xcf0c,	// (0x000278d7) list_double_time_pane_g2_ParamLimits

0xcf0c,	// (0x000278d7) list_double_time_pane_g2

0x0001,

0xf612,	// (0x00029fdd) list_double_time_pane_g_ParamLimits

0xf612,	// (0x00029fdd) list_double_time_pane_g

0xd0a6,	// (0x00027a71) list_double_time_pane_t1_ParamLimits

0xd0a6,	// (0x00027a71) list_double_time_pane_t1

0xd145,	// (0x00027b10) list_double_time_pane_t2_ParamLimits

0xd145,	// (0x00027b10) list_double_time_pane_t2

0xd157,	// (0x00027b22) list_double_time_pane_t3_ParamLimits

0xd157,	// (0x00027b22) list_double_time_pane_t3

0xd169,	// (0x00027b34) list_double_time_pane_t4_ParamLimits

0xd169,	// (0x00027b34) list_double_time_pane_t4

0x0003,

0xf66f,	// (0x0002a03a) list_double_time_pane_t_ParamLimits

0xf66f,	// (0x0002a03a) list_double_time_pane_t

0xd17b,	// (0x00027b46) list_setting_pane_g1_ParamLimits

0xd17b,	// (0x00027b46) list_setting_pane_g1

0xd187,	// (0x00027b52) list_setting_pane_g2_ParamLimits

0xd187,	// (0x00027b52) list_setting_pane_g2

0x0001,

0xf678,	// (0x0002a043) list_setting_pane_g_ParamLimits

0xf678,	// (0x0002a043) list_setting_pane_g

0xd193,	// (0x00027b5e) list_setting_pane_t1_ParamLimits

0xd193,	// (0x00027b5e) list_setting_pane_t1

0xd1aa,	// (0x00027b75) list_setting_pane_t2_ParamLimits

0xd1aa,	// (0x00027b75) list_setting_pane_t2

0x0002,

0xf67d,	// (0x0002a048) list_setting_pane_t_ParamLimits

0xf67d,	// (0x0002a048) list_setting_pane_t

0xd1e7,	// (0x00027bb2) set_value_pane_cp_ParamLimits

0xd1e7,	// (0x00027bb2) set_value_pane_cp

0xd1f3,	// (0x00027bbe) list_setting_number_pane_g1_ParamLimits

0xd1f3,	// (0x00027bbe) list_setting_number_pane_g1

0xd1ff,	// (0x00027bca) list_setting_number_pane_g2_ParamLimits

0xd1ff,	// (0x00027bca) list_setting_number_pane_g2

0x0001,

0xf684,	// (0x0002a04f) list_setting_number_pane_g_ParamLimits

0xf684,	// (0x0002a04f) list_setting_number_pane_g

0xd20b,	// (0x00027bd6) list_setting_number_pane_t1_ParamLimits

0xd20b,	// (0x00027bd6) list_setting_number_pane_t1

0xd21d,	// (0x00027be8) list_setting_number_pane_t2_ParamLimits

0xd21d,	// (0x00027be8) list_setting_number_pane_t2

0xd234,	// (0x00027bff) list_setting_number_pane_t3_ParamLimits

0xd234,	// (0x00027bff) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x0002a054) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x0002a054) list_setting_number_pane_t

0xd1e7,	// (0x00027bb2) set_value_pane_ParamLimits

0xd1e7,	// (0x00027bb2) set_value_pane

0x6570,	// (0x00020f3b) bg_set_opt_pane_ParamLimits

0x6570,	// (0x00020f3b) bg_set_opt_pane

0xd275,	// (0x00027c40) set_value_pane_t1

0x6591,	// (0x00020f5c) slider_set_pane_cp3

0x659a,	// (0x00020f65) volume_small_pane_cp

0x65a3,	// (0x00020f6e) list_form_gen_pane

0x655f,	// (0x00020f2a) scroll_pane_cp8

0xd28b,	// (0x00027c56) form_field_data_pane_ParamLimits

0xd28b,	// (0x00027c56) form_field_data_pane

0xd2ab,	// (0x00027c76) form_field_data_wide_pane_ParamLimits

0xd2ab,	// (0x00027c76) form_field_data_wide_pane

0xd2ca,	// (0x00027c95) form_field_popup_pane_ParamLimits

0xd2ca,	// (0x00027c95) form_field_popup_pane

0xd2e2,	// (0x00027cad) form_field_popup_wide_pane_ParamLimits

0xd2e2,	// (0x00027cad) form_field_popup_wide_pane

0xd2f9,	// (0x00027cc4) form_field_slider_pane_ParamLimits

0xd2f9,	// (0x00027cc4) form_field_slider_pane

0xd30c,	// (0x00027cd7) form_field_slider_wide_pane_ParamLimits

0xd30c,	// (0x00027cd7) form_field_slider_wide_pane

0x65ac,	// (0x00020f77) data_form_pane

0x91b3,	// (0x00023b7e) form_field_data_pane_t1

0x65b8,	// (0x00020f83) input_focus_pane

0x65c6,	// (0x00020f91) data_form_wide_pane

0xd333,	// (0x00027cfe) form_field_data_wide_pane_t1

0x63de,	// (0x00020da9) input_focus_pane_cp6

0xd355,	// (0x00027d20) form_field_popup_pane_t1

0x65b8,	// (0x00020f83) input_focus_pane_cp7

0x65ac,	// (0x00020f77) list_form_pane

0xd375,	// (0x00027d40) form_field_popup_wide_pane_t1

0x65b8,	// (0x00020f83) input_focus_pane_cp8

0x65f2,	// (0x00020fbd) list_form_wide_pane

0xd392,	// (0x00027d5d) form_field_slider_pane_t1_ParamLimits

0xd392,	// (0x00027d5d) form_field_slider_pane_t1

0xd3a4,	// (0x00027d6f) form_field_slider_pane_t2_ParamLimits

0xd3a4,	// (0x00027d6f) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x0002a064) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x0002a064) form_field_slider_pane_t

0x6002,	// (0x000209cd) input_focus_pane_cp9_ParamLimits

0x6002,	// (0x000209cd) input_focus_pane_cp9

0xd3b6,	// (0x00027d81) slider_cont_pane_ParamLimits

0xd3b6,	// (0x00027d81) slider_cont_pane

0x6601,	// (0x00020fcc) form_field_slider_wide_pane_t1_ParamLimits

0x6601,	// (0x00020fcc) form_field_slider_wide_pane_t1

0xd3ca,	// (0x00027d95) form_field_slider_wide_pane_t2_ParamLimits

0xd3ca,	// (0x00027d95) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x0002a069) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x0002a069) form_field_slider_wide_pane_t

0x6002,	// (0x000209cd) input_focus_pane_cp10_ParamLimits

0x6002,	// (0x000209cd) input_focus_pane_cp10

0xd3dc,	// (0x00027da7) slider_cont_pane_cp1_ParamLimits

0xd3dc,	// (0x00027da7) slider_cont_pane_cp1

0xd3f2,	// (0x00027dbd) slider_form_pane_cp

0x6613,	// (0x00020fde) input_focus_pane_g1

0x661b,	// (0x00020fe6) input_focus_pane_g2

0x6623,	// (0x00020fee) input_focus_pane_g3

0x662b,	// (0x00020ff6) input_focus_pane_g4

0x6633,	// (0x00020ffe) input_focus_pane_g5

0x663b,	// (0x00021006) input_focus_pane_g6

0x6643,	// (0x0002100e) input_focus_pane_g7

0x664b,	// (0x00021016) input_focus_pane_g8

0x6653,	// (0x0002101e) input_focus_pane_g9

0x5f32,	// (0x000208fd) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x0002a06e) input_focus_pane_g

0x7b7b,	// (0x00022546) wait_border_pane_g3_copy1

0xd3fa,	// (0x00027dc5) data_form_pane_t1

0x5f32,	// (0x000208fd) wait_anim_pane_g1_copy1

0xd5d2,	// (0x00027f9d) data_form_wide_pane_t1

0xd414,	// (0x00027ddf) list_form_graphic_pane_cp_ParamLimits

0xd414,	// (0x00027ddf) list_form_graphic_pane_cp

0xb82a,	// (0x000261f5) slider_form_pane_g1

0xb833,	// (0x000261fe) slider_form_pane_g2

0x0006,

0xf99b,	// (0x0002a366) slider_form_pane_g

0xd414,	// (0x00027ddf) list_form_graphic_pane_ParamLimits

0xd414,	// (0x00027ddf) list_form_graphic_pane

0xd42a,	// (0x00027df5) list_form_graphic_pane_g1

0xd432,	// (0x00027dfd) list_form_graphic_pane_t1_ParamLimits

0xd432,	// (0x00027dfd) list_form_graphic_pane_t1

0x6018,	// (0x000209e3) list_highlight_pane_cp5_ParamLimits

0x6018,	// (0x000209e3) list_highlight_pane_cp5

0xd447,	// (0x00027e12) find_pane_g1

0x666f,	// (0x0002103a) input_find_pane

0xd450,	// (0x00027e1b) input_find_pane_g1_ParamLimits

0xd450,	// (0x00027e1b) input_find_pane_g1

0xd45c,	// (0x00027e27) input_find_pane_t1_ParamLimits

0xd45c,	// (0x00027e27) input_find_pane_t1

0xd471,	// (0x00027e3c) input_find_pane_t2_ParamLimits

0xd471,	// (0x00027e3c) input_find_pane_t2

0x0001,

0xf6b8,	// (0x0002a083) input_find_pane_t_ParamLimits

0xf6b8,	// (0x0002a083) input_find_pane_t

0x6678,	// (0x00021043) input_focus_pane_cp5_ParamLimits

0x6678,	// (0x00021043) input_focus_pane_cp5

0x6002,	// (0x000209cd) bg_popup_window_pane_cp2_ParamLimits

0x6002,	// (0x000209cd) bg_popup_window_pane_cp2

0x6692,	// (0x0002105d) listscroll_menu_pane_ParamLimits

0x6692,	// (0x0002105d) listscroll_menu_pane

0x669e,	// (0x00021069) popup_submenu_window_ParamLimits

0x669e,	// (0x00021069) popup_submenu_window

0x66c2,	// (0x0002108d) find_popup_pane_g1

0x66ca,	// (0x00021095) input_popup_find_pane_cp

0x6678,	// (0x00021043) input_focus_pane_cp4_ParamLimits

0x6678,	// (0x00021043) input_focus_pane_cp4

0x66d4,	// (0x0002109f) input_popup_find_pane_t1_ParamLimits

0x66d4,	// (0x0002109f) input_popup_find_pane_t1

0x5fb4,	// (0x0002097f) bg_popup_sub_pane_cp

0x6702,	// (0x000210cd) listscroll_popup_sub_pane

0x670a,	// (0x000210d5) list_submenu_pane_ParamLimits

0x670a,	// (0x000210d5) list_submenu_pane

0x671b,	// (0x000210e6) scroll_pane_cp4

0x665b,	// (0x00021026) list_single_popup_submenu_pane_ParamLimits

0x665b,	// (0x00021026) list_single_popup_submenu_pane

0x6723,	// (0x000210ee) list_single_popup_submenu_pane_g1

0x672b,	// (0x000210f6) list_single_popup_submenu_pane_t1_ParamLimits

0x672b,	// (0x000210f6) list_single_popup_submenu_pane_t1

0x6018,	// (0x000209e3) bg_active_tab_pane_cp1_ParamLimits

0x6018,	// (0x000209e3) bg_active_tab_pane_cp1

0x91d7,	// (0x00023ba2) tabs_2_active_pane_g1

0x91df,	// (0x00023baa) tabs_2_active_pane_t1

0x6018,	// (0x000209e3) bg_passive_tab_pane_cp1_ParamLimits

0x6018,	// (0x000209e3) bg_passive_tab_pane_cp1

0x91d7,	// (0x00023ba2) tabs_2_passive_pane_g1

0x91df,	// (0x00023baa) tabs_2_passive_pane_t1

0x6923,	// (0x000212ee) bg_active_tab_pane_cp4

0x91f1,	// (0x00023bbc) tabs_2_long_active_pane_t1

0x9204,	// (0x00023bcf) bg_passive_tab_pane_cp4

0xa0e3,	// (0x00024aae) list_single_midp_graphic_pane_g4_ParamLimits

0x6923,	// (0x000212ee) bg_active_tab_pane_cp5

0x9210,	// (0x00023bdb) tabs_3_long_active_pane_t1

0x9204,	// (0x00023bcf) bg_passive_tab_pane_cp5

0xa0e3,	// (0x00024aae) list_single_midp_graphic_pane_g4

0x6018,	// (0x000209e3) bg_popup_window_pane_cp13_ParamLimits

0x6018,	// (0x000209e3) bg_popup_window_pane_cp13

0x6749,	// (0x00021114) listscroll_popup_fast_pane_ParamLimits

0x6749,	// (0x00021114) listscroll_popup_fast_pane

0x6758,	// (0x00021123) grid_popup_fast_pane_ParamLimits

0x6758,	// (0x00021123) grid_popup_fast_pane

0x676a,	// (0x00021135) scroll_pane_cp9_ParamLimits

0x676a,	// (0x00021135) scroll_pane_cp9

0xca93,	// (0x0002745e) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xca93,	// (0x0002745e) list_single_graphic_hl_pane_t1_cp2

0x678e,	// (0x00021159) input_focus_pane_cp20_ParamLimits

0x678e,	// (0x00021159) input_focus_pane_cp20

0x679c,	// (0x00021167) query_popup_data_pane_t1_ParamLimits

0x679c,	// (0x00021167) query_popup_data_pane_t1

0x67af,	// (0x0002117a) query_popup_data_pane_t2_ParamLimits

0x67af,	// (0x0002117a) query_popup_data_pane_t2

0x67f5,	// (0x000211c0) query_popup_data_pane_t3_ParamLimits

0x67f5,	// (0x000211c0) query_popup_data_pane_t3

0x6836,	// (0x00021201) query_popup_data_pane_t4_ParamLimits

0x6836,	// (0x00021201) query_popup_data_pane_t4

0x6872,	// (0x0002123d) query_popup_data_pane_t5_ParamLimits

0x6872,	// (0x0002123d) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x0002a088) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x0002a088) query_popup_data_pane_t

0x6613,	// (0x00020fde) bg_set_opt_pane_g1

0x661b,	// (0x00020fe6) bg_set_opt_pane_g2

0x6623,	// (0x00020fee) bg_set_opt_pane_g3

0x662b,	// (0x00020ff6) bg_set_opt_pane_g4

0x6633,	// (0x00020ffe) bg_set_opt_pane_g5

0x663b,	// (0x00021006) bg_set_opt_pane_g6

0x6643,	// (0x0002100e) bg_set_opt_pane_g7

0x664b,	// (0x00021016) bg_set_opt_pane_g8

0x6653,	// (0x0002101e) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x0002a093) bg_set_opt_pane_g

0x95e1,	// (0x00023fac) control_top_pane_stacon_ParamLimits

0x95e1,	// (0x00023fac) control_top_pane_stacon

0x9634,	// (0x00023fff) signal_pane_stacon_ParamLimits

0x9634,	// (0x00023fff) signal_pane_stacon

0x6e35,	// (0x00021800) stacon_top_pane_g1_ParamLimits

0x6e35,	// (0x00021800) stacon_top_pane_g1

0x9659,	// (0x00024024) title_pane_stacon_ParamLimits

0x9659,	// (0x00024024) title_pane_stacon

0x967b,	// (0x00024046) uni_indicator_pane_stacon_ParamLimits

0x967b,	// (0x00024046) uni_indicator_pane_stacon

0x9690,	// (0x0002405b) battery_pane_stacon_ParamLimits

0x9690,	// (0x0002405b) battery_pane_stacon

0x96d0,	// (0x0002409b) control_bottom_pane_stacon_ParamLimits

0x96d0,	// (0x0002409b) control_bottom_pane_stacon

0x96ef,	// (0x000240ba) navi_pane_stacon_ParamLimits

0x96ef,	// (0x000240ba) navi_pane_stacon

0x6e57,	// (0x00021822) stacon_bottom_pane_g1_ParamLimits

0x6e57,	// (0x00021822) stacon_bottom_pane_g1

0x68a9,	// (0x00021274) aid_levels_signal_lsc_ParamLimits

0x68a9,	// (0x00021274) aid_levels_signal_lsc

0x9222,	// (0x00023bed) signal_pane_stacon_g1_ParamLimits

0x9222,	// (0x00023bed) signal_pane_stacon_g1

0x922e,	// (0x00023bf9) signal_pane_stacon_g2_ParamLimits

0x922e,	// (0x00023bf9) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x0002a0a6) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x0002a0a6) signal_pane_stacon_g

0x9262,	// (0x00023c2d) title_pane_stacon_t1_ParamLimits

0x9262,	// (0x00023c2d) title_pane_stacon_t1

0x68d7,	// (0x000212a2) uni_indicator_pane_stacon_g1

0x68e1,	// (0x000212ac) uni_indicator_pane_stacon_g2

0x68c3,	// (0x0002128e) uni_indicator_pane_stacon_g3

0x68cd,	// (0x00021298) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x0002a0b2) uni_indicator_pane_stacon_g

0x9287,	// (0x00023c52) control_top_pane_stacon_g1

0x928f,	// (0x00023c5a) control_top_pane_stacon_t1_ParamLimits

0x928f,	// (0x00023c5a) control_top_pane_stacon_t1

0x68eb,	// (0x000212b6) aid_levels_battery_lsc_ParamLimits

0x68eb,	// (0x000212b6) aid_levels_battery_lsc

0x92c0,	// (0x00023c8b) battery_pane_stacon_g1_ParamLimits

0x92c0,	// (0x00023c8b) battery_pane_stacon_g1

0x92cc,	// (0x00023c97) battery_pane_stacon_g2_ParamLimits

0x92cc,	// (0x00023c97) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x0002a0bb) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x0002a0bb) battery_pane_stacon_g

0x92fb,	// (0x00023cc6) navi_icon_pane_stacon

0x930b,	// (0x00023cd6) navi_navi_pane_stacon

0x92fb,	// (0x00023cc6) navi_text_pane_stacon

0x9287,	// (0x00023c52) control_bottom_pane_stacon_g1

0x931b,	// (0x00023ce6) control_bottom_pane_stacon_t1_ParamLimits

0x931b,	// (0x00023ce6) control_bottom_pane_stacon_t1

0x934c,	// (0x00023d17) grid_app_pane_ParamLimits

0x934c,	// (0x00023d17) grid_app_pane

0x9368,	// (0x00023d33) scroll_pane_cp15_ParamLimits

0x9368,	// (0x00023d33) scroll_pane_cp15

0x937b,	// (0x00023d46) cell_app_pane_ParamLimits

0x937b,	// (0x00023d46) cell_app_pane

0x939d,	// (0x00023d68) cell_app_pane_g1_ParamLimits

0x939d,	// (0x00023d68) cell_app_pane_g1

0x6ad6,	// (0x000214a1) cell_app_pane_g2_ParamLimits

0x6ad6,	// (0x000214a1) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x0002a0c0) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x0002a0c0) cell_app_pane_g

0x6ae2,	// (0x000214ad) cell_app_pane_t1_ParamLimits

0x6ae2,	// (0x000214ad) cell_app_pane_t1

0x6af4,	// (0x000214bf) grid_highlight_pane_ParamLimits

0x6af4,	// (0x000214bf) grid_highlight_pane

0x6613,	// (0x00020fde) cell_highlight_pane_g1

0x661b,	// (0x00020fe6) cell_highlight_pane_g2

0x6623,	// (0x00020fee) cell_highlight_pane_g3

0x662b,	// (0x00020ff6) cell_highlight_pane_g4

0x6633,	// (0x00020ffe) cell_highlight_pane_g5

0x663b,	// (0x00021006) cell_highlight_pane_g6

0x6643,	// (0x0002100e) cell_highlight_pane_g7

0x664b,	// (0x00021016) cell_highlight_pane_g8

0x6653,	// (0x0002101e) cell_highlight_pane_g9

0x5f32,	// (0x000208fd) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x0002a06e) cell_highlight_pane_g

0x6b05,	// (0x000214d0) bg_scroll_pane

0x93d4,	// (0x00023d9f) scroll_handle_pane

0x6b4c,	// (0x00021517) scroll_bg_pane_g1

0x6b61,	// (0x0002152c) scroll_bg_pane_g2

0x6b79,	// (0x00021544) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x0002a0c5) scroll_bg_pane_g

0x6b8e,	// (0x00021559) scroll_handle_focus_pane_ParamLimits

0x6b8e,	// (0x00021559) scroll_handle_focus_pane

0x6b4c,	// (0x00021517) scroll_handle_pane_g1

0x6b9b,	// (0x00021566) scroll_handle_pane_g2

0x6b79,	// (0x00021544) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x0002a0cc) scroll_handle_pane_g

0x6678,	// (0x00021043) bg_popup_sub_pane_cp21_ParamLimits

0x6678,	// (0x00021043) bg_popup_sub_pane_cp21

0x6baf,	// (0x0002157a) popup_fep_japan_predictive_window_t1_ParamLimits

0x6baf,	// (0x0002157a) popup_fep_japan_predictive_window_t1

0x6bc6,	// (0x00021591) popup_fep_japan_predictive_window_t2_ParamLimits

0x6bc6,	// (0x00021591) popup_fep_japan_predictive_window_t2

0x6bf9,	// (0x000215c4) popup_fep_japan_predictive_window_t3_ParamLimits

0x6bf9,	// (0x000215c4) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x0002a0d3) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x0002a0d3) popup_fep_japan_predictive_window_t

0x5fb4,	// (0x0002097f) bg_popup_sub_pane_cp23

0x6c30,	// (0x000215fb) listscroll_japin_cand_pane

0x6c38,	// (0x00021603) popup_fep_japan_candidate_window_t1

0x6c46,	// (0x00021611) candidate_pane_ParamLimits

0x6c46,	// (0x00021611) candidate_pane

0x6c59,	// (0x00021624) scroll_pane_cp30

0x6c61,	// (0x0002162c) list_single_popup_jap_candidate_pane_ParamLimits

0x6c61,	// (0x0002162c) list_single_popup_jap_candidate_pane

0x5fb4,	// (0x0002097f) list_highlight_pane_cp30

0x6c76,	// (0x00021641) list_single_popup_jap_candidate_pane_t1

0x93fd,	// (0x00023dc8) level_1_signal

0x940a,	// (0x00023dd5) level_2_signal

0x9417,	// (0x00023de2) level_3_signal

0x9424,	// (0x00023def) level_4_signal

0x9431,	// (0x00023dfc) level_5_signal

0x943e,	// (0x00023e09) level_6_signal

0x944b,	// (0x00023e16) level_7_signal

0x93fd,	// (0x00023dc8) level_1_battery

0x940a,	// (0x00023dd5) level_2_battery

0x9417,	// (0x00023de2) level_3_battery

0x9424,	// (0x00023def) level_4_battery

0x9431,	// (0x00023dfc) level_5_battery

0x943e,	// (0x00023e09) level_6_battery

0x944b,	// (0x00023e16) level_7_battery

0x6c9d,	// (0x00021668) list_menu_pane_ParamLimits

0x6c9d,	// (0x00021668) list_menu_pane

0x6cae,	// (0x00021679) scroll_pane_cp25_ParamLimits

0x6cae,	// (0x00021679) scroll_pane_cp25

0x9477,	// (0x00023e42) list_double2_graphic_pane_cp2_ParamLimits

0x9477,	// (0x00023e42) list_double2_graphic_pane_cp2

0x9477,	// (0x00023e42) list_double2_large_graphic_pane_cp2_ParamLimits

0x9477,	// (0x00023e42) list_double2_large_graphic_pane_cp2

0x9477,	// (0x00023e42) list_double2_pane_cp2_ParamLimits

0x9477,	// (0x00023e42) list_double2_pane_cp2

0x9477,	// (0x00023e42) list_double_graphic_pane_cp2_ParamLimits

0x9477,	// (0x00023e42) list_double_graphic_pane_cp2

0x9477,	// (0x00023e42) list_double_large_graphic_pane_cp2_ParamLimits

0x9477,	// (0x00023e42) list_double_large_graphic_pane_cp2

0x9477,	// (0x00023e42) list_double_number_pane_cp2_ParamLimits

0x9477,	// (0x00023e42) list_double_number_pane_cp2

0x9477,	// (0x00023e42) list_double_pane_cp2_ParamLimits

0x9477,	// (0x00023e42) list_double_pane_cp2

0x9487,	// (0x00023e52) list_single_2graphic_pane_cp2_ParamLimits

0x9487,	// (0x00023e52) list_single_2graphic_pane_cp2

0x9487,	// (0x00023e52) list_single_graphic_heading_pane_cp2_ParamLimits

0x9487,	// (0x00023e52) list_single_graphic_heading_pane_cp2

0x9487,	// (0x00023e52) list_single_graphic_pane_cp2_ParamLimits

0x9487,	// (0x00023e52) list_single_graphic_pane_cp2

0x9487,	// (0x00023e52) list_single_heading_pane_cp2_ParamLimits

0x9487,	// (0x00023e52) list_single_heading_pane_cp2

0x949c,	// (0x00023e67) list_single_large_graphic_pane_cp2_ParamLimits

0x949c,	// (0x00023e67) list_single_large_graphic_pane_cp2

0x9487,	// (0x00023e52) list_single_number_heading_pane_cp2_ParamLimits

0x9487,	// (0x00023e52) list_single_number_heading_pane_cp2

0x9487,	// (0x00023e52) list_single_number_pane_cp2_ParamLimits

0x9487,	// (0x00023e52) list_single_number_pane_cp2

0x9487,	// (0x00023e52) list_single_pane_cp2_ParamLimits

0x9487,	// (0x00023e52) list_single_pane_cp2

0x6cd0,	// (0x0002169b) bg_popup_sub_pane_cp22

0x9551,	// (0x00023f1c) popup_side_volume_key_window_g1

0x9575,	// (0x00023f40) popup_side_volume_key_window_t1

0x9591,	// (0x00023f5c) volume_small_pane_cp1

0x6002,	// (0x000209cd) bg_popup_sub_pane_cp24_ParamLimits

0x6002,	// (0x000209cd) bg_popup_sub_pane_cp24

0x6ce6,	// (0x000216b1) fep_china_uni_candidate_pane_ParamLimits

0x6ce6,	// (0x000216b1) fep_china_uni_candidate_pane

0x6cfa,	// (0x000216c5) fep_china_uni_entry_pane

0x6d0a,	// (0x000216d5) popup_fep_china_uni_window_g1

0x6d26,	// (0x000216f1) fep_china_uni_entry_pane_g1

0x6d2e,	// (0x000216f9) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0002a100) fep_china_uni_entry_pane_g

0x6d36,	// (0x00021701) fep_entry_item_pane

0x6d40,	// (0x0002170b) fep_candidate_item_pane

0x6d48,	// (0x00021713) fep_china_uni_candidate_pane_g1

0x6d50,	// (0x0002171b) fep_china_uni_candidate_pane_g2

0x6d58,	// (0x00021723) fep_china_uni_candidate_pane_g3

0x6d60,	// (0x0002172b) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0002a105) fep_china_uni_candidate_pane_g

0x5f32,	// (0x000208fd) fep_entry_item_pane_g1

0x6d68,	// (0x00021733) fep_entry_item_pane_t1_ParamLimits

0x6d68,	// (0x00021733) fep_entry_item_pane_t1

0x6d7e,	// (0x00021749) fep_candidate_item_pane_t1_ParamLimits

0x6d7e,	// (0x00021749) fep_candidate_item_pane_t1

0x6d93,	// (0x0002175e) fep_candidate_item_pane_t2_ParamLimits

0x6d93,	// (0x0002175e) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0002a10e) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0002a10e) fep_candidate_item_pane_t

0x6018,	// (0x000209e3) list_highlight_pane_cp31_ParamLimits

0x6018,	// (0x000209e3) list_highlight_pane_cp31

0x6da5,	// (0x00021770) level_1_signal_lsc

0x6dae,	// (0x00021779) level_2_signal_lsc

0x6db7,	// (0x00021782) level_3_signal_lsc

0x6dc0,	// (0x0002178b) level_4_signal_lsc

0x6dc9,	// (0x00021794) level_5_signal_lsc

0x6dd2,	// (0x0002179d) level_6_signal_lsc

0x6ddb,	// (0x000217a6) level_7_signal_lsc

0x6ddb,	// (0x000217a6) level_1_battery_lsc

0x6de4,	// (0x000217af) level_2_battery_lsc

0x6ded,	// (0x000217b8) level_3_battery_lsc

0x6df6,	// (0x000217c1) level_4_battery_lsc

0x6dff,	// (0x000217ca) level_5_battery_lsc

0x6e08,	// (0x000217d3) level_6_battery_lsc

0x6da5,	// (0x00021770) level_7_battery_lsc

0x6e11,	// (0x000217dc) scroll_handle_focus_pane_g1

0x6e1a,	// (0x000217e5) scroll_handle_focus_pane_g2

0x6e23,	// (0x000217ee) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0002a113) scroll_handle_focus_pane_g

0xd486,	// (0x00027e51) list_single_2graphic_pane_g1_ParamLimits

0xd486,	// (0x00027e51) list_single_2graphic_pane_g1

0xce9d,	// (0x00027868) list_single_2graphic_pane_g2_ParamLimits

0xce9d,	// (0x00027868) list_single_2graphic_pane_g2

0xce2f,	// (0x000277fa) list_single_2graphic_pane_g3_ParamLimits

0xce2f,	// (0x000277fa) list_single_2graphic_pane_g3

0xd492,	// (0x00027e5d) list_single_2graphic_pane_g4_ParamLimits

0xd492,	// (0x00027e5d) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0002a11a) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0002a11a) list_single_2graphic_pane_g

0xd4a3,	// (0x00027e6e) list_single_2graphic_pane_t1_ParamLimits

0xd4a3,	// (0x00027e6e) list_single_2graphic_pane_t1

0xd4d1,	// (0x00027e9c) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd4d1,	// (0x00027e9c) list_double2_graphic_large_graphic_pane_g1

0xcf40,	// (0x0002790b) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xcf40,	// (0x0002790b) list_double2_graphic_large_graphic_pane_g2

0xcf0c,	// (0x000278d7) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xcf0c,	// (0x000278d7) list_double2_graphic_large_graphic_pane_g3

0xd4e1,	// (0x00027eac) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd4e1,	// (0x00027eac) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0002a123) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0002a123) list_double2_graphic_large_graphic_pane_g

0xd4ed,	// (0x00027eb8) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xd4ed,	// (0x00027eb8) list_double2_graphic_large_graphic_pane_t1

0xd503,	// (0x00027ece) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xd503,	// (0x00027ece) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0002a12c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0002a12c) list_double2_graphic_large_graphic_pane_t

0x6efe,	// (0x000218c9) popup_fast_swap_window_ParamLimits

0x6efe,	// (0x000218c9) popup_fast_swap_window

0x6f1a,	// (0x000218e5) popup_side_volume_key_window

0x6f34,	// (0x000218ff) stacon_top_pane

0x6f3e,	// (0x00021909) status_pane_ParamLimits

0x6f3e,	// (0x00021909) status_pane

0x6f34,	// (0x000218ff) status_small_pane

0x5fb4,	// (0x0002097f) control_pane

0x5fb4,	// (0x0002097f) stacon_bottom_pane

0x655f,	// (0x00020f2a) scroll_pane_cp121

0x65a3,	// (0x00020f6e) set_content_pane

0x9599,	// (0x00023f64) bg_active_tab_pane_g1_cp1

0x6e2c,	// (0x000217f7) bg_active_tab_pane_g2_cp1

0x95a2,	// (0x00023f6d) bg_active_tab_pane_g3_cp1

0x9599,	// (0x00023f64) bg_passive_tab_pane_g1_cp1

0x6e2c,	// (0x000217f7) bg_passive_tab_pane_g2_cp1

0x95a2,	// (0x00023f6d) bg_passive_tab_pane_g3_cp1

0x95ab,	// (0x00023f76) bg_active_tab_pane_g1_cp2

0x6e2c,	// (0x000217f7) bg_active_tab_pane_g2_cp2

0x95b4,	// (0x00023f7f) bg_active_tab_pane_g3_cp2

0x95ab,	// (0x00023f76) bg_passive_tab_pane_g1_cp2

0x6e2c,	// (0x000217f7) bg_passive_tab_pane_g2_cp2

0x95b4,	// (0x00023f7f) bg_passive_tab_pane_g3_cp2

0x95bd,	// (0x00023f88) bg_active_tab_pane_g1_cp3

0x6e2c,	// (0x000217f7) bg_active_tab_pane_g2_cp3

0x95c6,	// (0x00023f91) bg_active_tab_pane_g3_cp3

0x95bd,	// (0x00023f88) bg_passive_tab_pane_g1_cp3

0x6e2c,	// (0x000217f7) bg_passive_tab_pane_g2_cp3

0x95c6,	// (0x00023f91) bg_passive_tab_pane_g3_cp3

0x95cf,	// (0x00023f9a) bg_active_tab_pane_g1_cp4

0x6e2c,	// (0x000217f7) bg_active_tab_pane_g2_cp4

0x95d8,	// (0x00023fa3) bg_active_tab_pane_g3_cp4

0x95cf,	// (0x00023f9a) bg_passive_tab_pane_g1_cp4

0x6e2c,	// (0x000217f7) bg_passive_tab_pane_g2_cp4

0x95d8,	// (0x00023fa3) bg_passive_tab_pane_g3_cp4

0x6e7c,	// (0x00021847) bg_active_tab_pane_g1_cp5

0x6e2c,	// (0x000217f7) bg_active_tab_pane_g2_cp5

0x6e73,	// (0x0002183e) bg_active_tab_pane_g3_cp5

0x6e7c,	// (0x00021847) bg_passive_tab_pane_g1_cp5

0x6e2c,	// (0x000217f7) bg_passive_tab_pane_g2_cp5

0x6e73,	// (0x0002183e) bg_passive_tab_pane_g3_cp5

0x970e,	// (0x000240d9) list_set_graphic_pane_ParamLimits

0x970e,	// (0x000240d9) list_set_graphic_pane

0x5fb4,	// (0x0002097f) bg_set_opt_pane_cp4

0x6e85,	// (0x00021850) list_set_graphic_pane_g1_ParamLimits

0x6e85,	// (0x00021850) list_set_graphic_pane_g1

0x6e91,	// (0x0002185c) list_set_graphic_pane_g2_ParamLimits

0x6e91,	// (0x0002185c) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0002a131) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0002a131) list_set_graphic_pane_g

0x0009,

0xfae0,	// (0x0002a4ab) volume_small_pane_cp_g

0x6eb3,	// (0x0002187e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6eb3,	// (0x0002187e) list_double2_large_graphic_pane_g1_cp2

0x6ebf,	// (0x0002188a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x6ebf,	// (0x0002188a) list_double2_large_graphic_pane_g2_cp2

0x6ece,	// (0x00021899) list_double2_large_graphic_pane_g3_cp2

0x6ed6,	// (0x000218a1) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x6ed6,	// (0x000218a1) list_double2_large_graphic_pane_t1_cp2

0x6eec,	// (0x000218b7) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x6eec,	// (0x000218b7) list_double2_large_graphic_pane_t2_cp2

0xb5da,	// (0x00025fa5) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb5da,	// (0x00025fa5) list_double_large_graphic_pane_g1_cp2

0xb5eb,	// (0x00025fb6) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xb5eb,	// (0x00025fb6) list_double_large_graphic_pane_g2_cp2

0x7019,	// (0x000219e4) list_double_large_graphic_pane_g3_cp2

0xb5fa,	// (0x00025fc5) list_double_large_graphic_pane_g4_cp

0xb602,	// (0x00025fcd) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xb602,	// (0x00025fcd) list_double_large_graphic_pane_t1_cp2

0xb619,	// (0x00025fe4) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xb619,	// (0x00025fe4) list_double_large_graphic_pane_t2_cp2

0x6f4c,	// (0x00021917) list_double2_graphic_pane_g1_cp2_ParamLimits

0x6f4c,	// (0x00021917) list_double2_graphic_pane_g1_cp2

0x6f58,	// (0x00021923) list_double2_graphic_pane_g2_cp2_ParamLimits

0x6f58,	// (0x00021923) list_double2_graphic_pane_g2_cp2

0x6f67,	// (0x00021932) list_double2_graphic_pane_g3_cp2

0x6f6f,	// (0x0002193a) list_double2_graphic_pane_t1_cp2_ParamLimits

0x6f6f,	// (0x0002193a) list_double2_graphic_pane_t1_cp2

0x6f85,	// (0x00021950) list_double2_graphic_pane_t2_cp2_ParamLimits

0x6f85,	// (0x00021950) list_double2_graphic_pane_t2_cp2

0x6f97,	// (0x00021962) list_single_number_heading_pane_g1_cp2_ParamLimits

0x6f97,	// (0x00021962) list_single_number_heading_pane_g1_cp2

0x6fa3,	// (0x0002196e) list_single_number_heading_pane_g2_cp2

0x6fab,	// (0x00021976) list_single_number_heading_pane_t1_cp2_ParamLimits

0x6fab,	// (0x00021976) list_single_number_heading_pane_t1_cp2

0x6fc1,	// (0x0002198c) list_single_number_heading_pane_t2_cp2_ParamLimits

0x6fc1,	// (0x0002198c) list_single_number_heading_pane_t2_cp2

0x6fd3,	// (0x0002199e) list_single_number_heading_pane_t3_cp2_ParamLimits

0x6fd3,	// (0x0002199e) list_single_number_heading_pane_t3_cp2

0x6f97,	// (0x00021962) list_single_heading_pane_g1_cp2_ParamLimits

0x6f97,	// (0x00021962) list_single_heading_pane_g1_cp2

0x6fa3,	// (0x0002196e) list_single_heading_pane_g2_cp2

0x6fab,	// (0x00021976) list_single_heading_pane_t1_cp2_ParamLimits

0x6fab,	// (0x00021976) list_single_heading_pane_t1_cp2

0xb3e4,	// (0x00025daf) list_single_heading_pane_t2_cp2_ParamLimits

0xb3e4,	// (0x00025daf) list_single_heading_pane_t2_cp2

0xb334,	// (0x00025cff) list_double_graphic_pane_g1_cp2_ParamLimits

0xb334,	// (0x00025cff) list_double_graphic_pane_g1_cp2

0xb340,	// (0x00025d0b) list_double_graphic_pane_g2_cp2_ParamLimits

0xb340,	// (0x00025d0b) list_double_graphic_pane_g2_cp2

0xb34f,	// (0x00025d1a) list_double_graphic_pane_g3_cp2

0xb357,	// (0x00025d22) list_double_graphic_pane_t1_cp2_ParamLimits

0xb357,	// (0x00025d22) list_double_graphic_pane_t1_cp2

0xb36d,	// (0x00025d38) list_double_graphic_pane_t2_cp2_ParamLimits

0xb36d,	// (0x00025d38) list_double_graphic_pane_t2_cp2

0x700d,	// (0x000219d8) list_double_number_pane_g1_cp2_ParamLimits

0x700d,	// (0x000219d8) list_double_number_pane_g1_cp2

0x7019,	// (0x000219e4) list_double_number_pane_g2_cp2

0xb2fa,	// (0x00025cc5) list_double_number_pane_t1_cp2_ParamLimits

0xb2fa,	// (0x00025cc5) list_double_number_pane_t1_cp2

0xb30c,	// (0x00025cd7) list_double_number_pane_t2_cp2_ParamLimits

0xb30c,	// (0x00025cd7) list_double_number_pane_t2_cp2

0xb322,	// (0x00025ced) list_double_number_pane_t3_cp2_ParamLimits

0xb322,	// (0x00025ced) list_double_number_pane_t3_cp2

0xb272,	// (0x00025c3d) list_single_graphic_pane_g1_cp2_ParamLimits

0xb272,	// (0x00025c3d) list_single_graphic_pane_g1_cp2

0x6f97,	// (0x00021962) list_single_graphic_pane_g2_cp2_ParamLimits

0x6f97,	// (0x00021962) list_single_graphic_pane_g2_cp2

0x6fa3,	// (0x0002196e) list_single_graphic_pane_g3_cp2

0xb24a,	// (0x00025c15) list_single_graphic_pane_t1_cp2_ParamLimits

0xb24a,	// (0x00025c15) list_single_graphic_pane_t1_cp2

0x6f97,	// (0x00021962) list_single_number_pane_g1_cp2_ParamLimits

0x6f97,	// (0x00021962) list_single_number_pane_g1_cp2

0x6fa3,	// (0x0002196e) list_single_number_pane_g2_cp2

0xb24a,	// (0x00025c15) list_single_number_pane_t1_cp2_ParamLimits

0xb24a,	// (0x00025c15) list_single_number_pane_t1_cp2

0xb260,	// (0x00025c2b) list_single_number_pane_t2_cp2_ParamLimits

0xb260,	// (0x00025c2b) list_single_number_pane_t2_cp2

0x6ebf,	// (0x0002188a) list_double2_pane_g1_cp2_ParamLimits

0x6ebf,	// (0x0002188a) list_double2_pane_g1_cp2

0x6ece,	// (0x00021899) list_double2_pane_g2_cp2

0x6fe5,	// (0x000219b0) list_double2_pane_t1_cp2_ParamLimits

0x6fe5,	// (0x000219b0) list_double2_pane_t1_cp2

0x6ffb,	// (0x000219c6) list_double2_pane_t2_cp2_ParamLimits

0x6ffb,	// (0x000219c6) list_double2_pane_t2_cp2

0x700d,	// (0x000219d8) list_double_pane_g1_cp2_ParamLimits

0x700d,	// (0x000219d8) list_double_pane_g1_cp2

0x7019,	// (0x000219e4) list_double_pane_g2_cp2

0x7021,	// (0x000219ec) list_double_pane_t1_cp2_ParamLimits

0x7021,	// (0x000219ec) list_double_pane_t1_cp2

0x7037,	// (0x00021a02) list_double_pane_t2_cp2_ParamLimits

0x7037,	// (0x00021a02) list_double_pane_t2_cp2

0x705f,	// (0x00021a2a) list_single_pane_cp2_g3

0x6f97,	// (0x00021962) list_single_pane_g1_cp2_ParamLimits

0x6f97,	// (0x00021962) list_single_pane_g1_cp2

0x6fa3,	// (0x0002196e) list_single_pane_g2_cp2

0x706f,	// (0x00021a3a) list_single_pane_t1_cp2_ParamLimits

0x706f,	// (0x00021a3a) list_single_pane_t1_cp2

0x7087,	// (0x00021a52) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7087,	// (0x00021a52) list_single_large_graphic_pane_g1_cp2

0x7093,	// (0x00021a5e) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x7093,	// (0x00021a5e) list_single_large_graphic_pane_g2_cp2

0x709f,	// (0x00021a6a) list_single_large_graphic_pane_g3_cp2

0x70a7,	// (0x00021a72) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x70a7,	// (0x00021a72) list_single_large_graphic_pane_g4_cp1

0x70c1,	// (0x00021a8c) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x70c1,	// (0x00021a8c) list_single_large_graphic_pane_t1_cp2

0x8171,	// (0x00022b3c) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x8171,	// (0x00022b3c) list_single_graphic_heading_pane_g1_cp2

0x814c,	// (0x00022b17) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x814c,	// (0x00022b17) list_single_graphic_heading_pane_g4_cp2

0x6fa3,	// (0x0002196e) list_single_graphic_heading_pane_g5_cp2

0x6fab,	// (0x00021976) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x6fab,	// (0x00021976) list_single_graphic_heading_pane_t1_cp2

0x817d,	// (0x00022b48) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x817d,	// (0x00022b48) list_single_graphic_heading_pane_t2_cp2

0x8140,	// (0x00022b0b) list_single_2graphic_pane_g1_cp2_ParamLimits

0x8140,	// (0x00022b0b) list_single_2graphic_pane_g1_cp2

0x814c,	// (0x00022b17) list_single_2graphic_pane_g2_cp2_ParamLimits

0x814c,	// (0x00022b17) list_single_2graphic_pane_g2_cp2

0x6fa3,	// (0x0002196e) list_single_2graphic_pane_g3_cp2

0x7680,	// (0x0002204b) list_single_2graphic_pane_g4_cp2_ParamLimits

0x7680,	// (0x0002204b) list_single_2graphic_pane_g4_cp2

0x815b,	// (0x00022b26) list_single_2graphic_pane_t1_cp2_ParamLimits

0x815b,	// (0x00022b26) list_single_2graphic_pane_t1_cp2

0x5f32,	// (0x000208fd) list_highlight_pane_g10_cp1

0x7d52,	// (0x0002271d) list_highlight_pane_g1_cp1

0x7d5a,	// (0x00022725) list_highlight_pane_g2_cp1

0x7d62,	// (0x0002272d) list_highlight_pane_g3_cp1

0x7d6a,	// (0x00022735) list_highlight_pane_g4_cp1

0x7d72,	// (0x0002273d) list_highlight_pane_g5_cp1

0x7d7a,	// (0x00022745) list_highlight_pane_g6_cp1

0x7d82,	// (0x0002274d) list_highlight_pane_g7_cp1

0x7d8a,	// (0x00022755) list_highlight_pane_g8_cp1

0x7d92,	// (0x0002275d) list_highlight_pane_g9_cp1

0xa28d,	// (0x00024c58) form_field_slider_pane_t3

0xa29b,	// (0x00024c66) form_field_slider_pane_t4

0x7c9c,	// (0x00022667) slider_form_pane_ParamLimits

0x7c9c,	// (0x00022667) slider_form_pane

0x5fb4,	// (0x0002097f) control_abbreviations

0x5fb4,	// (0x0002097f) control_conventions

0x5fb4,	// (0x0002097f) control_definitions

0x5fb4,	// (0x0002097f) format_table_attribute

0xb42e,	// (0x00025df9) bg_popup_preview_window_pane_g9

0x5fb4,	// (0x0002097f) format_table_data2

0x5fb4,	// (0x0002097f) format_table_data3

0x5fb4,	// (0x0002097f) format_table_data_example

0x0008,

0x5fb4,	// (0x0002097f) intro_purpose

0xf8fb,	// (0x0002a2c6) bg_popup_preview_window_pane_g

0x5fb4,	// (0x0002097f) texts_category

0x5fb4,	// (0x0002097f) texts_graphics

0x70d7,	// (0x00021aa2) text_digital

0x70e6,	// (0x00021ab1) text_primary

0x70f5,	// (0x00021ac0) text_primary_small

0x7104,	// (0x00021acf) text_secondary

0x7113,	// (0x00021ade) text_title

0xb8bb,	// (0x00026286) bg_passive_tab_pane_g1_cp3_srt

0x6e2c,	// (0x000217f7) bg_passive_tab_pane_g2_cp3_srt

0xb8c4,	// (0x0002628f) bg_passive_tab_pane_g3_cp3_srt

0x6018,	// (0x000209e3) bg_active_tab_pane_cp3_srt_ParamLimits

0x6018,	// (0x000209e3) bg_active_tab_pane_cp3_srt

0xb8cd,	// (0x00026298) tabs_4_active_pane_srt_g1

0x8f2b,	// (0x000238f6) tabs_4_active_pane_srt_t1_ParamLimits

0x8f2b,	// (0x000238f6) tabs_4_active_pane_srt_t1

0xb8bb,	// (0x00026286) bg_active_tab_pane_g1_cp3_copy1

0x6e2c,	// (0x000217f7) bg_active_tab_pane_g2_cp3_copy1

0xb8c4,	// (0x0002628f) bg_active_tab_pane_g3_cp3_copy1

0x6018,	// (0x000209e3) tabs_2_long_active_pane_srt_ParamLimits

0x6018,	// (0x000209e3) tabs_2_long_active_pane_srt

0x6018,	// (0x000209e3) tabs_2_long_passive_pane_srt_ParamLimits

0x6018,	// (0x000209e3) tabs_2_long_passive_pane_srt

0x9204,	// (0x00023bcf) bg_passive_tab_pane_cp4_srt_ParamLimits

0x9204,	// (0x00023bcf) bg_passive_tab_pane_cp4_srt

0xb7f1,	// (0x000261bc) bg_passive_tab_pane_g1_cp4_srt

0x6e2c,	// (0x000217f7) bg_passive_tab_pane_g2_cp4_srt

0xb7fa,	// (0x000261c5) bg_passive_tab_pane_g3_cp4_srt

0x6923,	// (0x000212ee) bg_active_tab_pane_cp4_srt_ParamLimits

0x6923,	// (0x000212ee) bg_active_tab_pane_cp4_srt

0x91f1,	// (0x00023bbc) tabs_2_long_active_pane_srt_t1_ParamLimits

0x91f1,	// (0x00023bbc) tabs_2_long_active_pane_srt_t1

0xb7f1,	// (0x000261bc) bg_active_tab_pane_g1_cp4_srt

0x6e2c,	// (0x000217f7) bg_active_tab_pane_g2_cp4_srt

0xb7fa,	// (0x000261c5) bg_active_tab_pane_g3_cp4_srt

0x6002,	// (0x000209cd) tabs_3_long_active_pane_srt_ParamLimits

0x6002,	// (0x000209cd) tabs_3_long_active_pane_srt

0x6002,	// (0x000209cd) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x6002,	// (0x000209cd) tabs_3_long_passive_pane_cp_srt

0x6002,	// (0x000209cd) tabs_3_long_passive_pane_srt_ParamLimits

0x6002,	// (0x000209cd) tabs_3_long_passive_pane_srt

0x9204,	// (0x00023bcf) bg_passive_tab_pane_cp5_srt_ParamLimits

0x9204,	// (0x00023bcf) bg_passive_tab_pane_cp5_srt

0x6e7c,	// (0x00021847) bg_passive_tab_pane_g1_cp5_srt

0x6e2c,	// (0x000217f7) bg_passive_tab_pane_g2_cp5_srt

0x6e73,	// (0x0002183e) bg_passive_tab_pane_g3_cp5_srt

0x6923,	// (0x000212ee) bg_active_tab_pane_cp5_srt_ParamLimits

0x6923,	// (0x000212ee) bg_active_tab_pane_cp5_srt

0x9210,	// (0x00023bdb) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9210,	// (0x00023bdb) tabs_3_long_active_pane_srt_t1

0x6e7c,	// (0x00021847) bg_active_tab_pane_g1_cp5_srt

0x6e2c,	// (0x000217f7) bg_active_tab_pane_g2_cp5_srt

0x6e73,	// (0x0002183e) bg_active_tab_pane_g3_cp5_srt

0xb7e3,	// (0x000261ae) navi_text_pane_srt_t1

0xb7db,	// (0x000261a6) navi_icon_pane_srt_g1

0x722b,	// (0x00021bf6) midp_editing_number_pane_srt

0x7122,	// (0x00021aed) midp_ticker_pane_srt

0x7233,	// (0x00021bfe) midp_ticker_pane_srt_g1

0x723b,	// (0x00021c06) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0002a150) midp_ticker_pane_srt_g

0x7243,	// (0x00021c0e) midp_ticker_pane_srt_t1

0xb7cc,	// (0x00026197) midp_editing_number_pane_t1_copy1

0x9724,	// (0x000240ef) listscroll_midp_pane

0x9724,	// (0x000240ef) midp_form_pane

0x712a,	// (0x00021af5) midp_info_popup_window_ParamLimits

0x712a,	// (0x00021af5) midp_info_popup_window

0x6678,	// (0x00021043) bg_popup_sub_pane_cp50_ParamLimits

0x6678,	// (0x00021043) bg_popup_sub_pane_cp50

0x79c5,	// (0x00022390) listscroll_midp_info_pane_ParamLimits

0x79c5,	// (0x00022390) listscroll_midp_info_pane

0x79ad,	// (0x00022378) listscroll_form_midp_pane_ParamLimits

0x79ad,	// (0x00022378) listscroll_form_midp_pane

0x79b9,	// (0x00022384) scroll_bar_cp050

0xa275,	// (0x00024c40) list_midp_pane

0xc0c1,	// (0x00026a8c) signal_pane_g2_cp

0x78df,	// (0x000222aa) listscroll_midp_info_pane_t1_ParamLimits

0x78df,	// (0x000222aa) listscroll_midp_info_pane_t1

0x78f7,	// (0x000222c2) listscroll_midp_info_pane_t2_ParamLimits

0x78f7,	// (0x000222c2) listscroll_midp_info_pane_t2

0x7935,	// (0x00022300) listscroll_midp_info_pane_t3_ParamLimits

0x7935,	// (0x00022300) listscroll_midp_info_pane_t3

0x796f,	// (0x0002233a) listscroll_midp_info_pane_t4_ParamLimits

0x796f,	// (0x0002233a) listscroll_midp_info_pane_t4

0x0003,

0xf836,	// (0x0002a201) listscroll_midp_info_pane_t_ParamLimits

0xf836,	// (0x0002a201) listscroll_midp_info_pane_t

0x671b,	// (0x000210e6) scroll_pane_cp21

0x7883,	// (0x0002224e) form_midp_field_choice_group_pane

0x788c,	// (0x00022257) form_midp_field_text_pane

0x78c5,	// (0x00022290) form_midp_field_time_pane

0x78cd,	// (0x00022298) form_midp_gauge_slider_pane

0x78d6,	// (0x000222a1) form_midp_gauge_wait_pane

0x5fb4,	// (0x0002097f) form_midp_image_pane

0xd5a7,	// (0x00027f72) list_single_midp_pane_ParamLimits

0xd5a7,	// (0x00027f72) list_single_midp_pane

0xa252,	// (0x00024c1d) form_midp_field_text_pane_t1

0x7732,	// (0x000220fd) input_focus_pane_cp050

0x7872,	// (0x0002223d) list_midp_form_text_pane

0x7841,	// (0x0002220c) form_midp_field_choice_group_pane_t1

0x784f,	// (0x0002221a) input_focus_pane_cp051

0x7863,	// (0x0002222e) list_midp_choice_pane

0x5fb4,	// (0x0002097f) status_idle_pane

0x7825,	// (0x000221f0) form_midp_field_time_pane_t1

0x5f32,	// (0x000208fd) wait_anim_pane_g2_copy1

0x7833,	// (0x000221fe) form_midp_field_time_pane_t2

0x0001,

0x7195,	// (0x00021b60) aid_navinavi_width_2_pane

0xf831,	// (0x0002a1fc) form_midp_field_time_pane_t

0x5fb4,	// (0x0002097f) input_focus_pane_cp052

0x5fb4,	// (0x0002097f) bg_input_focus_pane_cp040

0x7801,	// (0x000221cc) form_midp_gauge_slider_pane_t1

0x780f,	// (0x000221da) form_midp_gauge_slider_pane_t2

0xa236,	// (0x00024c01) form_midp_gauge_slider_pane_t3

0xa244,	// (0x00024c0f) form_midp_gauge_slider_pane_t4

0x0003,

0xf828,	// (0x0002a1f3) form_midp_gauge_slider_pane_t

0x781d,	// (0x000221e8) form_midp_slider_pane

0x6018,	// (0x000209e3) bg_input_focus_pane_cp041_ParamLimits

0x6018,	// (0x000209e3) bg_input_focus_pane_cp041

0x77d1,	// (0x0002219c) form_midp_gauge_wait_pane_t1_ParamLimits

0x77d1,	// (0x0002219c) form_midp_gauge_wait_pane_t1

0x77e3,	// (0x000221ae) form_midp_gauge_wait_pane_t2_ParamLimits

0x77e3,	// (0x000221ae) form_midp_gauge_wait_pane_t2

0x0001,

0xf823,	// (0x0002a1ee) form_midp_gauge_wait_pane_t_ParamLimits

0xf823,	// (0x0002a1ee) form_midp_gauge_wait_pane_t

0x77f5,	// (0x000221c0) form_midp_wait_pane_ParamLimits

0x77f5,	// (0x000221c0) form_midp_wait_pane

0x779b,	// (0x00022166) form_midp_image_pane_g1

0x77a4,	// (0x0002216f) form_midp_image_pane_t1

0x77b3,	// (0x0002217e) form_midp_image_pane_t2

0x77c2,	// (0x0002218d) form_midp_image_pane_t3

0x0002,

0xf81c,	// (0x0002a1e7) form_midp_image_pane_t

0x7792,	// (0x0002215d) list_single_midp_pane_g1

0xd598,	// (0x00027f63) list_single_midp_pane_t1

0xa220,	// (0x00024beb) list_midp_form_item_pane_ParamLimits

0xa220,	// (0x00024beb) list_midp_form_item_pane

0x713d,	// (0x00021b08) list_midp_form_item_pane_t1

0x714c,	// (0x00021b17) midp_ticker_pane_g1

0x7158,	// (0x00021b23) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0002a136) midp_ticker_pane_g

0x7164,	// (0x00021b2f) midp_ticker_pane_t1

0xb7cc,	// (0x00026197) midp_editing_number_pane_t1

0xb854,	// (0x0002621f) midp_editing_number_pane

0xb860,	// (0x0002622b) midp_ticker_pane

0xb7bc,	// (0x00026187) ai_message_heading_pane

0x5fb4,	// (0x0002097f) bg_popup_window_pane_cp14

0xb7c4,	// (0x0002618f) listscroll_ai_message_pane

0xb746,	// (0x00026111) ai_message_heading_pane_g1_ParamLimits

0xb746,	// (0x00026111) ai_message_heading_pane_g1

0xb752,	// (0x0002611d) ai_message_heading_pane_g2_ParamLimits

0xb752,	// (0x0002611d) ai_message_heading_pane_g2

0xb75e,	// (0x00026129) ai_message_heading_pane_g3_ParamLimits

0xb75e,	// (0x00026129) ai_message_heading_pane_g3

0xb76a,	// (0x00026135) ai_message_heading_pane_g4_ParamLimits

0xb76a,	// (0x00026135) ai_message_heading_pane_g4

0x0003,

0xf95d,	// (0x0002a328) ai_message_heading_pane_g_ParamLimits

0xf95d,	// (0x0002a328) ai_message_heading_pane_g

0xb776,	// (0x00026141) ai_message_heading_pane_t1_ParamLimits

0xb776,	// (0x00026141) ai_message_heading_pane_t1

0xb790,	// (0x0002615b) ai_message_heading_pane_t2_ParamLimits

0xb790,	// (0x0002615b) ai_message_heading_pane_t2

0x0001,

0xf966,	// (0x0002a331) ai_message_heading_pane_t_ParamLimits

0xf966,	// (0x0002a331) ai_message_heading_pane_t

0xb7a2,	// (0x0002616d) bg_popup_heading_pane_cp1_ParamLimits

0xb7a2,	// (0x0002616d) bg_popup_heading_pane_cp1

0xb734,	// (0x000260ff) list_ai_message_pane_ParamLimits

0xb734,	// (0x000260ff) list_ai_message_pane

0x671b,	// (0x000210e6) scroll_pane_cp10

0xb6d0,	// (0x0002609b) list_ai_message_pane_g1

0xb6d8,	// (0x000260a3) list_ai_message_pane_g2

0x0001,

0xf93a,	// (0x0002a305) list_ai_message_pane_g

0xb6e0,	// (0x000260ab) list_ai_message_pane_t1_ParamLimits

0xb6e0,	// (0x000260ab) list_ai_message_pane_t1

0xb6f5,	// (0x000260c0) list_ai_message_pane_t2_ParamLimits

0xb6f5,	// (0x000260c0) list_ai_message_pane_t2

0xb70a,	// (0x000260d5) list_ai_message_pane_t3_ParamLimits

0xb70a,	// (0x000260d5) list_ai_message_pane_t3

0xb71f,	// (0x000260ea) list_ai_message_pane_t4_ParamLimits

0xb71f,	// (0x000260ea) list_ai_message_pane_t4

0x0003,

0xf93f,	// (0x0002a30a) list_ai_message_pane_t_ParamLimits

0xf93f,	// (0x0002a30a) list_ai_message_pane_t

0xb6be,	// (0x00026089) cell_ai_soft_ind_pane_ParamLimits

0xb6be,	// (0x00026089) cell_ai_soft_ind_pane

0x7176,	// (0x00021b41) cell_ai_soft_ind_pane_g1_ParamLimits

0x7176,	// (0x00021b41) cell_ai_soft_ind_pane_g1

0x5fb4,	// (0x0002097f) grid_highlight_cp1

0x7183,	// (0x00021b4e) text_secondary_cp56_ParamLimits

0x7183,	// (0x00021b4e) text_secondary_cp56

0xb693,	// (0x0002605e) example_general_pane_ParamLimits

0xb693,	// (0x0002605e) example_general_pane

0xb69f,	// (0x0002606a) example_parent_pane_g1_ParamLimits

0xb69f,	// (0x0002606a) example_parent_pane_g1

0xb6ab,	// (0x00026076) example_parent_pane_t1_ParamLimits

0xb6ab,	// (0x00026076) example_parent_pane_t1

0x9c23,	// (0x000245ee) popup_preview_text_window_ParamLimits

0x9c23,	// (0x000245ee) popup_preview_text_window

0x7067,	// (0x00021a32) list_single_pane_cp2_g4

0x621f,	// (0x00020bea) bg_popup_preview_window_pane_ParamLimits

0x621f,	// (0x00020bea) bg_popup_preview_window_pane

0xb436,	// (0x00025e01) popup_preview_text_window_t1_ParamLimits

0xb436,	// (0x00025e01) popup_preview_text_window_t1

0xb454,	// (0x00025e1f) popup_preview_text_window_t2_ParamLimits

0xb454,	// (0x00025e1f) popup_preview_text_window_t2

0xb49d,	// (0x00025e68) popup_preview_text_window_t3_ParamLimits

0xb49d,	// (0x00025e68) popup_preview_text_window_t3

0xb4e2,	// (0x00025ead) popup_preview_text_window_t4_ParamLimits

0xb4e2,	// (0x00025ead) popup_preview_text_window_t4

0x0004,

0xf90e,	// (0x0002a2d9) popup_preview_text_window_t_ParamLimits

0xf90e,	// (0x0002a2d9) popup_preview_text_window_t

0xb560,	// (0x00025f2b) scroll_pane_cp11

0x7638,	// (0x00022003) bg_popup_preview_window_pane_g1

0xb3f6,	// (0x00025dc1) bg_popup_preview_window_pane_g2

0xb3fe,	// (0x00025dc9) bg_popup_preview_window_pane_g3

0xb406,	// (0x00025dd1) bg_popup_preview_window_pane_g4

0xb40e,	// (0x00025dd9) bg_popup_preview_window_pane_g5

0xb416,	// (0x00025de1) bg_popup_preview_window_pane_g6

0xb41e,	// (0x00025de9) bg_popup_preview_window_pane_g7

0xb426,	// (0x00025df1) bg_popup_preview_window_pane_g8

0x8b95,	// (0x00023560) aid_popup_width_pane

0x9c05,	// (0x000245d0) popup_midp_note_alarm_window_ParamLimits

0x9c05,	// (0x000245d0) popup_midp_note_alarm_window

0x65ac,	// (0x00020f77) data_form_pane_ParamLimits

0xd31f,	// (0x00027cea) form_field_data_pane_g1

0x91b3,	// (0x00023b7e) form_field_data_pane_t1_ParamLimits

0x65b8,	// (0x00020f83) input_focus_pane_ParamLimits

0x65c6,	// (0x00020f91) data_form_wide_pane_ParamLimits

0xd327,	// (0x00027cf2) form_field_data_wide_pane_g1

0xd333,	// (0x00027cfe) form_field_data_wide_pane_t1_ParamLimits

0x63de,	// (0x00020da9) input_focus_pane_cp6_ParamLimits

0x91cb,	// (0x00023b96) input_popup_find_pane_g1_ParamLimits

0x91cb,	// (0x00023b96) input_popup_find_pane_g1

0x92dc,	// (0x00023ca7) aid_navi_side_left_pane

0x92ec,	// (0x00023cb7) aid_navi_side_right_pane

0x7e23,	// (0x000227ee) bg_popup_window_pane_cp30_ParamLimits

0x7e23,	// (0x000227ee) bg_popup_window_pane_cp30

0x7e9d,	// (0x00022868) popup_midp_note_alarm_window_g1_ParamLimits

0x7e9d,	// (0x00022868) popup_midp_note_alarm_window_g1

0x7ecd,	// (0x00022898) popup_midp_note_alarm_window_t1_ParamLimits

0x7ecd,	// (0x00022898) popup_midp_note_alarm_window_t1

0x7f6e,	// (0x00022939) popup_midp_note_alarm_window_t2_ParamLimits

0x7f6e,	// (0x00022939) popup_midp_note_alarm_window_t2

0x801c,	// (0x000229e7) popup_midp_note_alarm_window_t3_ParamLimits

0x801c,	// (0x000229e7) popup_midp_note_alarm_window_t3

0x8044,	// (0x00022a0f) popup_midp_note_alarm_window_t4_ParamLimits

0x8044,	// (0x00022a0f) popup_midp_note_alarm_window_t4

0x8064,	// (0x00022a2f) popup_midp_note_alarm_window_t5_ParamLimits

0x8064,	// (0x00022a2f) popup_midp_note_alarm_window_t5

0x000a,

0xf8ab,	// (0x0002a276) popup_midp_note_alarm_window_t_ParamLimits

0xf8ab,	// (0x0002a276) popup_midp_note_alarm_window_t

0x8110,	// (0x00022adb) wait_bar_pane_cp1_ParamLimits

0x8110,	// (0x00022adb) wait_bar_pane_cp1

0x5fb4,	// (0x0002097f) wait_anim_pane_copy1

0x5fb4,	// (0x0002097f) wait_border_pane_copy1

0x7b69,	// (0x00022534) wait_border_pane_g1_copy1

0xd34d,	// (0x00027d18) form_field_popup_pane_g1

0xd355,	// (0x00027d20) form_field_popup_pane_t1_ParamLimits

0x65b8,	// (0x00020f83) input_focus_pane_cp7_ParamLimits

0x65ac,	// (0x00020f77) list_form_pane_ParamLimits

0xd36d,	// (0x00027d38) form_field_popup_wide_pane_g1

0xd375,	// (0x00027d40) form_field_popup_wide_pane_t1_ParamLimits

0x65b8,	// (0x00020f83) input_focus_pane_cp8_ParamLimits

0x65f2,	// (0x00020fbd) list_form_wide_pane_ParamLimits

0xb8f4,	// (0x000262bf) aid_size_cell_graphic_pane

0xd3fa,	// (0x00027dc5) data_form_pane_t1_ParamLimits

0xd5d2,	// (0x00027f9d) data_form_wide_pane_t1_ParamLimits

0x9e29,	// (0x000247f4) bg_status_flat_pane

0x8ea9,	// (0x00023874) title_pane_t1_ParamLimits

0x5fca,	// (0x00020995) title_pane_t2_ParamLimits

0x5ff0,	// (0x000209bb) title_pane_t3_ParamLimits

0xf573,	// (0x00029f3e) title_pane_t_ParamLimits

0x93fd,	// (0x00023dc8) level_1_signal_ParamLimits

0x940a,	// (0x00023dd5) level_2_signal_ParamLimits

0x9417,	// (0x00023de2) level_3_signal_ParamLimits

0x9424,	// (0x00023def) level_4_signal_ParamLimits

0x9431,	// (0x00023dfc) level_5_signal_ParamLimits

0x943e,	// (0x00023e09) level_6_signal_ParamLimits

0x944b,	// (0x00023e16) level_7_signal_ParamLimits

0x93fd,	// (0x00023dc8) level_1_battery_ParamLimits

0x940a,	// (0x00023dd5) level_2_battery_ParamLimits

0x9417,	// (0x00023de2) level_3_battery_ParamLimits

0x9424,	// (0x00023def) level_4_battery_ParamLimits

0x9431,	// (0x00023dfc) level_5_battery_ParamLimits

0x943e,	// (0x00023e09) level_6_battery_ParamLimits

0x944b,	// (0x00023e16) level_7_battery_ParamLimits

0x7d52,	// (0x0002271d) bg_status_flat_pane_g1

0x7d5a,	// (0x00022725) bg_status_flat_pane_g2

0x7d62,	// (0x0002272d) bg_status_flat_pane_g3

0x7d6a,	// (0x00022735) bg_status_flat_pane_g4

0x7d72,	// (0x0002273d) bg_status_flat_pane_g5

0x7d7a,	// (0x00022745) bg_status_flat_pane_g6

0x7d82,	// (0x0002274d) bg_status_flat_pane_g7

0x8f11,	// (0x000238dc) tabs_3_active_pane_t1_ParamLimits

0x8f11,	// (0x000238dc) tabs_3_passive_pane_t1_ParamLimits

0x8f2b,	// (0x000238f6) tabs_4_active_pane_t1_ParamLimits

0x8f2b,	// (0x000238f6) tabs_4_1_passive_pane_t1_ParamLimits

0x91df,	// (0x00023baa) tabs_2_active_pane_t1_ParamLimits

0x91df,	// (0x00023baa) tabs_2_passive_pane_t1_ParamLimits

0x6923,	// (0x000212ee) bg_active_tab_pane_cp4_ParamLimits

0x91f1,	// (0x00023bbc) tabs_2_long_active_pane_t1_ParamLimits

0x9204,	// (0x00023bcf) bg_passive_tab_pane_cp4_ParamLimits

0xa115,	// (0x00024ae0) list_single_midp_graphic_pane_t1_ParamLimits

0x6923,	// (0x000212ee) bg_active_tab_pane_cp5_ParamLimits

0x9210,	// (0x00023bdb) tabs_3_long_active_pane_t1_ParamLimits

0x9204,	// (0x00023bcf) bg_passive_tab_pane_cp5_ParamLimits

0xa115,	// (0x00024ae0) list_single_midp_graphic_pane_t1

0x9e29,	// (0x000247f4) bg_status_flat_pane_ParamLimits

0x7517,	// (0x00021ee2) indicator_pane_cp2_ParamLimits

0x7517,	// (0x00021ee2) indicator_pane_cp2

0x9f6c,	// (0x00024937) navi_pane_srt_ParamLimits

0x9f6c,	// (0x00024937) navi_pane_srt

0x753f,	// (0x00021f0a) popup_clock_digital_analogue_window_cp1

0x6088,	// (0x00020a53) indicator_pane_t1

0x7122,	// (0x00021aed) copy_highlight_pane

0x7122,	// (0x00021aed) cursor_graphics_pane

0x7122,	// (0x00021aed) graphic_within_text_pane

0x7122,	// (0x00021aed) link_highlight_pane

0xb523,	// (0x00025eee) popup_preview_text_window_t5_ParamLimits

0xb523,	// (0x00025eee) popup_preview_text_window_t5

0x719d,	// (0x00021b68) cursor_digital_pane

0x719d,	// (0x00021b68) cursor_primary_pane

0x71ae,	// (0x00021b79) cursor_primary_small_pane

0x71b6,	// (0x00021b81) cursor_secondary_pane

0x71be,	// (0x00021b89) cursor_title_pane

0x719d,	// (0x00021b68) link_highlight_digital_pane

0x71a5,	// (0x00021b70) link_highlight_primary_pane

0x71ae,	// (0x00021b79) link_highlight_primary_small_pane

0x71b6,	// (0x00021b81) link_highlight_secondary_pane

0x71be,	// (0x00021b89) link_highlight_title_pane

0x719d,	// (0x00021b68) copy_highlight_digital_pane

0x719d,	// (0x00021b68) copy_highlight_primary_pane

0x71ae,	// (0x00021b79) copy_highlight_primary_small_pane

0x71b6,	// (0x00021b81) copy_highlight_secondary_pane

0x71be,	// (0x00021b89) copy_highlight_title_pane

0x71b6,	// (0x00021b81) graphic_text_digital_pane

0x7dd2,	// (0x0002279d) graphic_text_primary_pane

0x7ddb,	// (0x000227a6) graphic_text_primary_small_pane

0x71ae,	// (0x00021b79) graphic_text_secondary_pane

0x719d,	// (0x00021b68) graphic_text_title_pane

0x97c9,	// (0x00024194) cursor_primary_pane_g1

0x7dc4,	// (0x0002278f) cursor_text_primary_t1

0xa2b9,	// (0x00024c84) cursor_primary_small_pane_g1

0x7db6,	// (0x00022781) cursor_text_primary_small_t1

0xa2b1,	// (0x00024c7c) cursor_primary_small_pane_g1_copy1

0x7da8,	// (0x00022773) cursor_text_primary_small_t1_copy1

0x7d9a,	// (0x00022765) cursor_text_title_t1

0xa2a9,	// (0x00024c74) cursor_title_pane_g1

0x97c9,	// (0x00024194) cursor_digital_pane_g1

0x71c6,	// (0x00021b91) cursor_text_digital_t1

0x71d4,	// (0x00021b9f) link_highlight_primary_pane_g1

0x7d43,	// (0x0002270e) link_highlight_primary_pane_t1

0x71d4,	// (0x00021b9f) link_highlight_primary_small_pane_g1

0x71dc,	// (0x00021ba7) link_highlight_primary_small_pane_t1

0x71eb,	// (0x00021bb6) link_highlight_secondary_pane_g1

0x71f3,	// (0x00021bbe) link_highlight_secondary_pane_t1

0x7ca8,	// (0x00022673) link_highlight_title_pane_g1

0x7cbf,	// (0x0002268a) link_highlight_title_pane_t1

0x7ca8,	// (0x00022673) link_highlight_digital_pane_g1

0x7cb0,	// (0x0002267b) link_highlight_digital_pane_t1

0x7b84,	// (0x0002254f) copy_highlight_primary_pane_g1

0x7baa,	// (0x00022575) copy_highlight_primary_pane_t1

0x7b84,	// (0x0002254f) copy_highlight_primary_small_pane_g1

0x7b9b,	// (0x00022566) copy_highlight_primary_small_pane_t1

0x7202,	// (0x00021bcd) copy_highlight_secondary_pane_g1

0x720a,	// (0x00021bd5) copy_highlight_secondary_pane_t1

0x7b84,	// (0x0002254f) copy_highlight_title_pane_g1

0x7b8c,	// (0x00022557) copy_highlight_title_pane_t1

0x7b84,	// (0x0002254f) copy_highlight_digital_pane_g1

0xba15,	// (0x000263e0) copy_highlight_digital_pane_t1

0xb969,	// (0x00026334) graphic_text_primary_pane_g1

0xb9f9,	// (0x000263c4) graphic_text_primary_pane_t1

0xba07,	// (0x000263d2) graphic_text_primary_pane_t2

0x0001,

0xf9d5,	// (0x0002a3a0) graphic_text_primary_pane_t

0xb9d5,	// (0x000263a0) graphic_text_primary_small_pane_g1

0xb9dd,	// (0x000263a8) graphic_text_primary_small_pane_t1

0xb9eb,	// (0x000263b6) graphic_text_primary_small_pane_t2

0x0001,

0xf9d0,	// (0x0002a39b) graphic_text_primary_small_pane_t

0xb9b1,	// (0x0002637c) graphic_text_secondary_pane_g1

0xb9b9,	// (0x00026384) graphic_text_secondary_pane_t1

0xb9c7,	// (0x00026392) graphic_text_secondary_pane_t2

0x0001,

0xf9cb,	// (0x0002a396) graphic_text_secondary_pane_t

0xb98d,	// (0x00026358) graphic_text_title_pane_g1

0xb995,	// (0x00026360) graphic_text_title_pane_t1

0xb9a3,	// (0x0002636e) graphic_text_title_pane_t2

0x0001,

0xf9c6,	// (0x0002a391) graphic_text_title_pane_t

0xb969,	// (0x00026334) graphic_text_digital_pane_g1

0xb971,	// (0x0002633c) graphic_text_digital_pane_t1

0xb97f,	// (0x0002634a) graphic_text_digital_pane_t2

0x0001,

0xf9c1,	// (0x0002a38c) graphic_text_digital_pane_t

0x6018,	// (0x000209e3) navi_icon_pane_srt_ParamLimits

0x6018,	// (0x000209e3) navi_icon_pane_srt

0x5fb4,	// (0x0002097f) navi_midp_pane_srt

0x5fb4,	// (0x0002097f) navi_navi_pane_srt

0x6018,	// (0x000209e3) navi_text_pane_srt_ParamLimits

0x6018,	// (0x000209e3) navi_text_pane_srt

0xb3af,	// (0x00025d7a) navi_navi_icon_text_pane_srt

0xb3b7,	// (0x00025d82) navi_navi_pane_srt_g1_ParamLimits

0xb3b7,	// (0x00025d82) navi_navi_pane_srt_g1

0xb3c9,	// (0x00025d94) navi_navi_pane_srt_g2_ParamLimits

0xb3c9,	// (0x00025d94) navi_navi_pane_srt_g2

0x0001,

0xf8f6,	// (0x0002a2c1) navi_navi_pane_srt_g_ParamLimits

0xf8f6,	// (0x0002a2c1) navi_navi_pane_srt_g

0xb3db,	// (0x00025da6) navi_navi_tabs_pane_srt

0xb3af,	// (0x00025d7a) navi_navi_text_pane_srt

0xb3af,	// (0x00025d7a) navi_navi_volume_pane_srt

0xb95a,	// (0x00026325) navi_navi_text_pane_srt_t1

0xa57a,	// (0x00024f45) navi_navi_volume_pane_srt_g1

0xa582,	// (0x00024f4d) volume_small_pane_srt_ParamLimits

0xa582,	// (0x00024f4d) volume_small_pane_srt

0x97d1,	// (0x0002419c) volume_small_pane_srt_g1_ParamLimits

0x97d1,	// (0x0002419c) volume_small_pane_srt_g1

0x97e1,	// (0x000241ac) volume_small_pane_srt_g2_ParamLimits

0x97e1,	// (0x000241ac) volume_small_pane_srt_g2

0x97f2,	// (0x000241bd) volume_small_pane_srt_g3_ParamLimits

0x97f2,	// (0x000241bd) volume_small_pane_srt_g3

0x9803,	// (0x000241ce) volume_small_pane_srt_g4_ParamLimits

0x9803,	// (0x000241ce) volume_small_pane_srt_g4

0x9814,	// (0x000241df) volume_small_pane_srt_g5_ParamLimits

0x9814,	// (0x000241df) volume_small_pane_srt_g5

0x9825,	// (0x000241f0) volume_small_pane_srt_g6_ParamLimits

0x9825,	// (0x000241f0) volume_small_pane_srt_g6

0x9836,	// (0x00024201) volume_small_pane_srt_g7_ParamLimits

0x9836,	// (0x00024201) volume_small_pane_srt_g7

0x9847,	// (0x00024212) volume_small_pane_srt_g8_ParamLimits

0x9847,	// (0x00024212) volume_small_pane_srt_g8

0x9858,	// (0x00024223) volume_small_pane_srt_g9_ParamLimits

0x9858,	// (0x00024223) volume_small_pane_srt_g9

0x9869,	// (0x00024234) volume_small_pane_srt_g10_ParamLimits

0x9869,	// (0x00024234) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0002a13b) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0002a13b) volume_small_pane_srt_g

0x62c8,	// (0x00020c93) query_popup_data_pane_cp2

0xb940,	// (0x0002630b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb940,	// (0x0002630b) navi_navi_icon_text_pane_srt_t1

0x7dd2,	// (0x0002279d) navi_tabs_2_long_pane_srt

0x7dd2,	// (0x0002279d) navi_tabs_2_pane_srt

0x7dd2,	// (0x0002279d) navi_tabs_3_long_pane_srt

0x7dd2,	// (0x0002279d) navi_tabs_3_pane_srt

0x7dd2,	// (0x0002279d) navi_tabs_4_pane_srt

0xa55a,	// (0x00024f25) tabs_2_active_pane_srt_ParamLimits

0xa55a,	// (0x00024f25) tabs_2_active_pane_srt

0xa56a,	// (0x00024f35) tabs_2_passive_pane_srt_ParamLimits

0xa56a,	// (0x00024f35) tabs_2_passive_pane_srt

0x6aca,	// (0x00021495) bg_passive_tab_pane_cp1_srt_ParamLimits

0x6aca,	// (0x00021495) bg_passive_tab_pane_cp1_srt

0xb91e,	// (0x000262e9) bg_passive_tab_pane_g1_cp1_srt

0x6e2c,	// (0x000217f7) bg_passive_tab_pane_g2_cp1_srt

0xb927,	// (0x000262f2) bg_passive_tab_pane_g3_cp1_srt

0x6018,	// (0x000209e3) bg_active_tab_pane_cp1_srt_ParamLimits

0x6018,	// (0x000209e3) bg_active_tab_pane_cp1_srt

0xb930,	// (0x000262fb) tabs_2_active_pane_srt_g1

0x91df,	// (0x00023baa) tabs_2_active_pane_srt_t1_ParamLimits

0x91df,	// (0x00023baa) tabs_2_active_pane_srt_t1

0xb91e,	// (0x000262e9) bg_active_tab_pane_g1_cp1_srt

0x6e2c,	// (0x000217f7) bg_active_tab_pane_g2_cp1_srt

0xb927,	// (0x000262f2) bg_active_tab_pane_g3_cp1_srt

0xa527,	// (0x00024ef2) tabs_3_active_pane_srt_ParamLimits

0xa527,	// (0x00024ef2) tabs_3_active_pane_srt

0xa538,	// (0x00024f03) tabs_3_passive_pane_cp_srt_ParamLimits

0xa538,	// (0x00024f03) tabs_3_passive_pane_cp_srt

0xa549,	// (0x00024f14) tabs_3_passive_pane_srt_ParamLimits

0xa549,	// (0x00024f14) tabs_3_passive_pane_srt

0x6aca,	// (0x00021495) bg_passive_tab_pane_cp2_srt_ParamLimits

0x6aca,	// (0x00021495) bg_passive_tab_pane_cp2_srt

0x7222,	// (0x00021bed) bg_passive_tab_pane_g1_cp2_srt

0x6e2c,	// (0x000217f7) bg_passive_tab_pane_g2_cp2_srt

0x7219,	// (0x00021be4) bg_passive_tab_pane_g3_cp2_srt

0x6018,	// (0x000209e3) bg_active_tab_pane_cp2_srt_ParamLimits

0x6018,	// (0x000209e3) bg_active_tab_pane_cp2_srt

0xb916,	// (0x000262e1) tabs_3_active_pane_srt_g1

0x8f11,	// (0x000238dc) tabs_3_active_pane_srt_t1_ParamLimits

0x8f11,	// (0x000238dc) tabs_3_active_pane_srt_t1

0x7222,	// (0x00021bed) bg_active_tab_pane_g1_cp2_srt

0x6e2c,	// (0x000217f7) bg_active_tab_pane_g2_cp2_srt

0x7219,	// (0x00021be4) bg_active_tab_pane_g3_cp2_srt

0xa4df,	// (0x00024eaa) tabs_4_active_pane_srt_ParamLimits

0xa4df,	// (0x00024eaa) tabs_4_active_pane_srt

0xa4f1,	// (0x00024ebc) tabs_4_passive_pane_cp2_srt_ParamLimits

0xa4f1,	// (0x00024ebc) tabs_4_passive_pane_cp2_srt

0x733c,	// (0x00021d07) aid_size_cell_toolbar

0x9204,	// (0x00023bcf) main_idle_act_pane_ParamLimits

0x7400,	// (0x00021dcb) popup_large_graphic_colour_window_ParamLimits

0x9d57,	// (0x00024722) popup_toolbar_window_ParamLimits

0x9d57,	// (0x00024722) popup_toolbar_window

0xd615,	// (0x00027fe0) list_single_graphic_2heading_pane_ParamLimits

0xd615,	// (0x00027fe0) list_single_graphic_2heading_pane

0x68f9,	// (0x000212c4) aid_size_cell_apps_grid_lsc_pane

0x690b,	// (0x000212d6) aid_size_cell_apps_grid_prt_pane

0x6aca,	// (0x00021495) bg_wml_button_pane_cp1_ParamLimits

0x6aca,	// (0x00021495) bg_wml_button_pane_cp1

0xa252,	// (0x00024c1d) form_midp_field_text_pane_t1_ParamLimits

0x7732,	// (0x000220fd) input_focus_pane_cp050_ParamLimits

0x7872,	// (0x0002223d) list_midp_form_text_pane_ParamLimits

0x784f,	// (0x0002221a) input_focus_pane_cp051_ParamLimits

0x7863,	// (0x0002222e) list_midp_choice_pane_ParamLimits

0xa1ec,	// (0x00024bb7) list_single_2graphic_pane_cp3_ParamLimits

0xa1ec,	// (0x00024bb7) list_single_2graphic_pane_cp3

0xa200,	// (0x00024bcb) list_single_midp_graphic_pane_ParamLimits

0xa200,	// (0x00024bcb) list_single_midp_graphic_pane

0x8b0b,	// (0x000234d6) list_single_graphic_2heading_pane_g1_ParamLimits

0x8b0b,	// (0x000234d6) list_single_graphic_2heading_pane_g1

0x8b17,	// (0x000234e2) list_single_graphic_2heading_pane_g4_ParamLimits

0x8b17,	// (0x000234e2) list_single_graphic_2heading_pane_g4

0x8b23,	// (0x000234ee) list_single_graphic_2heading_pane_g5_ParamLimits

0x8b23,	// (0x000234ee) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0002a18e) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0002a18e) list_single_graphic_2heading_pane_g

0x8b2f,	// (0x000234fa) list_single_graphic_2heading_pane_t1_ParamLimits

0x8b2f,	// (0x000234fa) list_single_graphic_2heading_pane_t1

0x8b43,	// (0x0002350e) list_single_graphic_2heading_pane_t2_ParamLimits

0x8b43,	// (0x0002350e) list_single_graphic_2heading_pane_t2

0x8b5d,	// (0x00023528) list_single_graphic_2heading_pane_t3_ParamLimits

0x8b5d,	// (0x00023528) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0002a195) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0002a195) list_single_graphic_2heading_pane_t

0x7582,	// (0x00021f4d) bg_popup_sub_pane_cp2

0x75a8,	// (0x00021f73) grid_toobar_pane

0xa091,	// (0x00024a5c) cell_toolbar_pane_ParamLimits

0xa091,	// (0x00024a5c) cell_toolbar_pane

0x75de,	// (0x00021fa9) cell_toolbar_pane_g1_ParamLimits

0x75de,	// (0x00021fa9) cell_toolbar_pane_g1

0x75f0,	// (0x00021fbb) cell_toolbar_pane_g2_ParamLimits

0x75f0,	// (0x00021fbb) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x0002a1a3) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x0002a1a3) cell_toolbar_pane_g

0x7612,	// (0x00021fdd) grid_highlight_pane_cp2_ParamLimits

0x7612,	// (0x00021fdd) grid_highlight_pane_cp2

0x762c,	// (0x00021ff7) toolbar_button_pane

0x7638,	// (0x00022003) toolbar_button_pane_g1

0x7648,	// (0x00022013) toolbar_button_pane_g2

0x7640,	// (0x0002200b) toolbar_button_pane_g3

0x7658,	// (0x00022023) toolbar_button_pane_g4

0x7650,	// (0x0002201b) toolbar_button_pane_g5

0x7660,	// (0x0002202b) toolbar_button_pane_g6

0x7668,	// (0x00022033) toolbar_button_pane_g7

0x7678,	// (0x00022043) toolbar_button_pane_g8

0x7670,	// (0x0002203b) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x0002a1a8) toolbar_button_pane_g

0xa0c0,	// (0x00024a8b) list_single_2graphic_pane_g1_cp3_ParamLimits

0xa0c0,	// (0x00024a8b) list_single_2graphic_pane_g1_cp3

0xa0cc,	// (0x00024a97) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa0cc,	// (0x00024a97) list_single_2graphic_pane_g2_cp3

0xa0db,	// (0x00024aa6) list_single_2graphic_pane_g3_cp3

0xa0e3,	// (0x00024aae) list_single_2graphic_pane_g4_cp3_ParamLimits

0xa0e3,	// (0x00024aae) list_single_2graphic_pane_g4_cp3

0xa0ef,	// (0x00024aba) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa0ef,	// (0x00024aba) list_single_2graphic_pane_t1_cp3

0xa109,	// (0x00024ad4) list_single_midp_graphic_pane_g2_ParamLimits

0xa109,	// (0x00024ad4) list_single_midp_graphic_pane_g2

0x7344,	// (0x00021d0f) aid_zoom_text_primary

0xd515,	// (0x00027ee0) aid_zoom_text_secondary

0x72d4,	// (0x00021c9f) status_small_pane_g7_ParamLimits

0x72d4,	// (0x00021c9f) status_small_pane_g7

0x72f7,	// (0x00021cc2) status_small_pane_t1_ParamLimits

0x8e8c,	// (0x00023857) title_pane_g2

0x0003,

0xf56a,	// (0x00029f35) title_pane_g

0x90de,	// (0x00023aa9) aid_size_cell_colour_1_pane_ParamLimits

0x90de,	// (0x00023aa9) aid_size_cell_colour_1_pane

0x90f2,	// (0x00023abd) aid_size_cell_colour_2_pane_ParamLimits

0x90f2,	// (0x00023abd) aid_size_cell_colour_2_pane

0x9106,	// (0x00023ad1) aid_size_cell_colour_3_pane_ParamLimits

0x9106,	// (0x00023ad1) aid_size_cell_colour_3_pane

0x911a,	// (0x00023ae5) aid_size_cell_colour_4_pane_ParamLimits

0x911a,	// (0x00023ae5) aid_size_cell_colour_4_pane

0x923e,	// (0x00023c09) title_pane_stacon_g1_ParamLimits

0x923e,	// (0x00023c09) title_pane_stacon_g1

0x7c01,	// (0x000225cc) popup_note_wait_window_g3_ParamLimits

0x7c01,	// (0x000225cc) popup_note_wait_window_g3

0x7c77,	// (0x00022642) popup_note_wait_window_t5_ParamLimits

0x7c77,	// (0x00022642) popup_note_wait_window_t5

0x5fb4,	// (0x0002097f) main_feb_china_hwr_fs_writing_pane

0x9a46,	// (0x00024411) popup_feb_china_hwr_fs_window_ParamLimits

0x9a46,	// (0x00024411) popup_feb_china_hwr_fs_window

0xa12b,	// (0x00024af6) aid_size_cell_hwr_fs_ParamLimits

0xa12b,	// (0x00024af6) aid_size_cell_hwr_fs

0x7732,	// (0x000220fd) bg_popup_sub_pane_cp3_ParamLimits

0x7732,	// (0x000220fd) bg_popup_sub_pane_cp3

0xa140,	// (0x00024b0b) grid_hwr_fs_pane_ParamLimits

0xa140,	// (0x00024b0b) grid_hwr_fs_pane

0xa154,	// (0x00024b1f) linegrid_hwr_fs_pane_ParamLimits

0xa154,	// (0x00024b1f) linegrid_hwr_fs_pane

0xa164,	// (0x00024b2f) cell_hwr_fs_pane_ParamLimits

0xa164,	// (0x00024b2f) cell_hwr_fs_pane

0x773e,	// (0x00022109) linegrid_hwr_fs_pane_g1_ParamLimits

0x773e,	// (0x00022109) linegrid_hwr_fs_pane_g1

0xa182,	// (0x00024b4d) linegrid_hwr_fs_pane_g2_ParamLimits

0xa182,	// (0x00024b4d) linegrid_hwr_fs_pane_g2

0x774a,	// (0x00022115) linegrid_hwr_fs_pane_g3_ParamLimits

0x774a,	// (0x00022115) linegrid_hwr_fs_pane_g3

0xa194,	// (0x00024b5f) linegrid_hwr_fs_pane_g4_ParamLimits

0xa194,	// (0x00024b5f) linegrid_hwr_fs_pane_g4

0xa1ae,	// (0x00024b79) linegrid_hwr_fs_pane_g5_ParamLimits

0xa1ae,	// (0x00024b79) linegrid_hwr_fs_pane_g5

0x0004,

0xf808,	// (0x0002a1d3) linegrid_hwr_fs_pane_g_ParamLimits

0xf808,	// (0x0002a1d3) linegrid_hwr_fs_pane_g

0x7756,	// (0x00022121) cell_hwr_fs_pane_g1_ParamLimits

0x7756,	// (0x00022121) cell_hwr_fs_pane_g1

0x7550,	// (0x00021f1b) cell_hwr_fs_pane_g2_ParamLimits

0x7550,	// (0x00021f1b) cell_hwr_fs_pane_g2

0xa1c4,	// (0x00024b8f) cell_hwr_fs_pane_g3_ParamLimits

0xa1c4,	// (0x00024b8f) cell_hwr_fs_pane_g3

0xa1d1,	// (0x00024b9c) cell_hwr_fs_pane_g4_ParamLimits

0xa1d1,	// (0x00024b9c) cell_hwr_fs_pane_g4

0x0003,

0xf813,	// (0x0002a1de) cell_hwr_fs_pane_g_ParamLimits

0xf813,	// (0x0002a1de) cell_hwr_fs_pane_g

0xa1de,	// (0x00024ba9) cell_hwr_fs_pane_t1

0x5fb4,	// (0x0002097f) grid_highlight_pane_cp6

0x5fb4,	// (0x0002097f) main_idle_act2_pane

0x6702,	// (0x000210cd) aid_inside_area_popup_secondary

0xdfab,	// (0x00028976) aid_inside_area_window_primary_ParamLimits

0xdfab,	// (0x00028976) aid_inside_area_window_primary

0xba24,	// (0x000263ef) ai2_news_ticker_pane

0xba2c,	// (0x000263f7) aid_size_cell_ai1_link_ParamLimits

0xba2c,	// (0x000263f7) aid_size_cell_ai1_link

0xe2f3,	// (0x00028cbe) popup_ai2_data_window_ParamLimits

0xe2f3,	// (0x00028cbe) popup_ai2_data_window

0xba46,	// (0x00026411) popup_ai2_link_window_ParamLimits

0xba46,	// (0x00026411) popup_ai2_link_window

0x7732,	// (0x000220fd) bg_popup_sub_pane_cp4_ParamLimits

0x7732,	// (0x000220fd) bg_popup_sub_pane_cp4

0xba5a,	// (0x00026425) grid_ai2_link_pane_ParamLimits

0xba5a,	// (0x00026425) grid_ai2_link_pane

0xba71,	// (0x0002643c) popup_ai2_link_window_g1_ParamLimits

0xba71,	// (0x0002643c) popup_ai2_link_window_g1

0xba7d,	// (0x00026448) popup_ai2_link_window_g2_ParamLimits

0xba7d,	// (0x00026448) popup_ai2_link_window_g2

0x0001,

0xf9da,	// (0x0002a3a5) popup_ai2_link_window_g_ParamLimits

0xf9da,	// (0x0002a3a5) popup_ai2_link_window_g

0xba8c,	// (0x00026457) ai2_mp_button_pane

0xba94,	// (0x0002645f) ai2_mp_volume_pane

0x784f,	// (0x0002221a) bg_popup_sub_pane_cp5_ParamLimits

0x784f,	// (0x0002221a) bg_popup_sub_pane_cp5

0xba9c,	// (0x00026467) heading_ai2_gene_pane_ParamLimits

0xba9c,	// (0x00026467) heading_ai2_gene_pane

0xbaa8,	// (0x00026473) list_ai2_gene_pane_ParamLimits

0xbaa8,	// (0x00026473) list_ai2_gene_pane

0xbaf0,	// (0x000264bb) cell_ai2_link_pane_ParamLimits

0xbaf0,	// (0x000264bb) cell_ai2_link_pane

0xbb06,	// (0x000264d1) cell_ai2_link_pane_g1

0x5fb4,	// (0x0002097f) grid_highlight_pane_cp7

0xa597,	// (0x00024f62) ai2_mp_volume_pane_g1

0xbb9b,	// (0x00026566) ai2_mp_volume_pane_g2

0xe31e,	// (0x00028ce9) list_ai2_gene_pane_t1

0xbba3,	// (0x0002656e) ai2_mp_volume_pane_g3

0x0002,

0xf9f3,	// (0x0002a3be) ai2_mp_volume_pane_g

0xa59f,	// (0x00024f6a) volume_small_pane_cp3

0xbbab,	// (0x00026576) aid_size_cell_ai2_button

0xbbb3,	// (0x0002657e) grid_ai2_button_pane

0xbbbc,	// (0x00026587) cell_ai2_button_pane_ParamLimits

0xbbbc,	// (0x00026587) cell_ai2_button_pane

0x5f32,	// (0x000208fd) cell_ai2_button_pane_g1

0x5fb4,	// (0x0002097f) grid_highlight_pane_cp8

0xbb5b,	// (0x00026526) ai2_gene_pane_t1_ParamLimits

0xbb5b,	// (0x00026526) ai2_gene_pane_t1

0x99ec,	// (0x000243b7) aid_height_parent_landscape

0xe0a9,	// (0x00028a74) aid_height_set_list

0xb818,	// (0x000261e3) aid_size_parent

0xb8f4,	// (0x000262bf) aid_size_cell_graphic_pane_ParamLimits

0xbab8,	// (0x00026483) popup_ai2_data_window_g1_ParamLimits

0xbab8,	// (0x00026483) popup_ai2_data_window_g1

0xbac4,	// (0x0002648f) ai2_news_ticker_pane_g1

0xbacc,	// (0x00026497) ai2_news_ticker_pane_g2

0x0001,

0xf9df,	// (0x0002a3aa) ai2_news_ticker_pane_g

0xbad4,	// (0x0002649f) ai2_news_ticker_pane_t1

0xbae2,	// (0x000264ad) ai2_news_ticker_pane_t2

0x0001,

0xf9e4,	// (0x0002a3af) ai2_news_ticker_pane_t

0xb8d5,	// (0x000262a0) heading_ai2_gene_pane_g1

0xbb0f,	// (0x000264da) heading_ai2_gene_pane_t1_ParamLimits

0xbb0f,	// (0x000264da) heading_ai2_gene_pane_t1

0xbb24,	// (0x000264ef) list_highlight_pane_cp6

0xe307,	// (0x00028cd2) ai2_gene_pane_ParamLimits

0xe307,	// (0x00028cd2) ai2_gene_pane

0xe32c,	// (0x00028cf7) list_ai2_gene_pane_t2

0x0001,

0xf9e9,	// (0x0002a3b4) list_ai2_gene_pane_t

0xbb2c,	// (0x000264f7) list_highlight_pane_cp8_ParamLimits

0xbb2c,	// (0x000264f7) list_highlight_pane_cp8

0xbb3d,	// (0x00026508) ai2_gene_pane_g1_ParamLimits

0xbb3d,	// (0x00026508) ai2_gene_pane_g1

0xbb4f,	// (0x0002651a) ai2_gene_pane_g2_ParamLimits

0xbb4f,	// (0x0002651a) ai2_gene_pane_g2

0x0001,

0xf9ee,	// (0x0002a3b9) ai2_gene_pane_g_ParamLimits

0xf9ee,	// (0x0002a3b9) ai2_gene_pane_g

0x655f,	// (0x00020f2a) scroll_pane_cp12

0x99a3,	// (0x0002436e) control_pane_t3_ParamLimits

0x99a3,	// (0x0002436e) control_pane_t3

0x72e8,	// (0x00021cb3) status_small_pane_g8_ParamLimits

0x72e8,	// (0x00021cb3) status_small_pane_g8

0x9ab4,	// (0x0002447f) popup_find_window_ParamLimits

0x9c17,	// (0x000245e2) popup_note_image_window_ParamLimits

0xce17,	// (0x000277e2) list_double2_graphic_pane_vc_g1_ParamLimits

0xce17,	// (0x000277e2) list_double2_graphic_pane_vc_g1

0xd542,	// (0x00027f0d) list_double2_graphic_pane_vc_g2_ParamLimits

0xd542,	// (0x00027f0d) list_double2_graphic_pane_vc_g2

0xd54e,	// (0x00027f19) list_double2_graphic_pane_vc_g3_ParamLimits

0xd54e,	// (0x00027f19) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x0002a19c) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x0002a19c) list_double2_graphic_pane_vc_g

0xd55a,	// (0x00027f25) list_double2_graphic_pane_vc_t1_ParamLimits

0xd55a,	// (0x00027f25) list_double2_graphic_pane_vc_t1

0xd542,	// (0x00027f0d) list_single_heading_pane_vc_g1_ParamLimits

0xd542,	// (0x00027f0d) list_single_heading_pane_vc_g1

0xd54e,	// (0x00027f19) list_single_heading_pane_vc_g2_ParamLimits

0xd54e,	// (0x00027f19) list_single_heading_pane_vc_g2

0x0001,

0xf7f2,	// (0x0002a1bd) list_single_heading_pane_vc_g_ParamLimits

0xf7f2,	// (0x0002a1bd) list_single_heading_pane_vc_g

0xd570,	// (0x00027f3b) list_single_heading_pane_vc_t1_ParamLimits

0xd570,	// (0x00027f3b) list_single_heading_pane_vc_t1

0xd586,	// (0x00027f51) list_single_heading_pane_vc_t2_ParamLimits

0xd586,	// (0x00027f51) list_single_heading_pane_vc_t2

0x0001,

0xf7f7,	// (0x0002a1c2) list_single_heading_pane_vc_t_ParamLimits

0xf7f7,	// (0x0002a1c2) list_single_heading_pane_vc_t

0x768c,	// (0x00022057) list_setting_number_pane_vc_g1_ParamLimits

0x768c,	// (0x00022057) list_setting_number_pane_vc_g1

0x7698,	// (0x00022063) list_setting_number_pane_vc_g2_ParamLimits

0x7698,	// (0x00022063) list_setting_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x0002a1c7) list_setting_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x0002a1c7) list_setting_number_pane_vc_g

0x76a4,	// (0x0002206f) list_setting_number_pane_vc_t1_ParamLimits

0x76a4,	// (0x0002206f) list_setting_number_pane_vc_t1

0x76b8,	// (0x00022083) list_setting_number_pane_vc_t2_ParamLimits

0x76b8,	// (0x00022083) list_setting_number_pane_vc_t2

0x76d4,	// (0x0002209f) list_setting_number_pane_vc_t3_ParamLimits

0x76d4,	// (0x0002209f) list_setting_number_pane_vc_t3

0x0002,

0xf801,	// (0x0002a1cc) list_setting_number_pane_vc_t_ParamLimits

0xf801,	// (0x0002a1cc) list_setting_number_pane_vc_t

0x76fa,	// (0x000220c5) set_value_pane_vc_ParamLimits

0x76fa,	// (0x000220c5) set_value_pane_vc

0xd615,	// (0x00027fe0) list_double2_graphic_pane_vc_ParamLimits

0xd615,	// (0x00027fe0) list_double2_graphic_pane_vc

0xb873,	// (0x0002623e) list_double2_large_graphic_pane_vc_ParamLimits

0xb873,	// (0x0002623e) list_double2_large_graphic_pane_vc

0xd615,	// (0x00027fe0) list_double2_pane_vc_ParamLimits

0xd615,	// (0x00027fe0) list_double2_pane_vc

0xd615,	// (0x00027fe0) list_double_graphic_heading_pane_vc_ParamLimits

0xd615,	// (0x00027fe0) list_double_graphic_heading_pane_vc

0xd615,	// (0x00027fe0) list_double_graphic_pane_vc_ParamLimits

0xd615,	// (0x00027fe0) list_double_graphic_pane_vc

0xd615,	// (0x00027fe0) list_double_heading_pane_vc_ParamLimits

0xd615,	// (0x00027fe0) list_double_heading_pane_vc

0xb873,	// (0x0002623e) list_double_large_graphic_pane_vc_ParamLimits

0xb873,	// (0x0002623e) list_double_large_graphic_pane_vc

0xd615,	// (0x00027fe0) list_double_number_pane_vc_ParamLimits

0xd615,	// (0x00027fe0) list_double_number_pane_vc

0xd615,	// (0x00027fe0) list_double_pane_vc_ParamLimits

0xd615,	// (0x00027fe0) list_double_pane_vc

0xd615,	// (0x00027fe0) list_double_time_pane_vc_ParamLimits

0xd615,	// (0x00027fe0) list_double_time_pane_vc

0xd615,	// (0x00027fe0) list_setting_number_pane_vc_ParamLimits

0xd615,	// (0x00027fe0) list_setting_number_pane_vc

0xd615,	// (0x00027fe0) list_setting_pane_vc_ParamLimits

0xd615,	// (0x00027fe0) list_setting_pane_vc

0xd615,	// (0x00027fe0) list_single_graphic_heading_pane_vc_ParamLimits

0xd615,	// (0x00027fe0) list_single_graphic_heading_pane_vc

0xd615,	// (0x00027fe0) list_single_heading_pane_vc_ParamLimits

0xd615,	// (0x00027fe0) list_single_heading_pane_vc

0xd629,	// (0x00027ff4) list_single_number_heading_pane_vc_ParamLimits

0xd629,	// (0x00027ff4) list_single_number_heading_pane_vc

0xd66d,	// (0x00028038) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xd66d,	// (0x00028038) list_double_graphic_heading_pane_vc_g1

0xd542,	// (0x00027f0d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xd542,	// (0x00027f0d) list_double_graphic_heading_pane_vc_g2

0xd54e,	// (0x00027f19) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xd54e,	// (0x00027f19) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9fa,	// (0x0002a3c5) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9fa,	// (0x0002a3c5) list_double_graphic_heading_pane_vc_g

0xd679,	// (0x00028044) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xd679,	// (0x00028044) list_double_graphic_heading_pane_vc_t1

0xd570,	// (0x00027f3b) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xd570,	// (0x00027f3b) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa01,	// (0x0002a3cc) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x0002a3cc) list_double_graphic_heading_pane_vc_t

0x768c,	// (0x00022057) list_setting_pane_vc_g1_ParamLimits

0x768c,	// (0x00022057) list_setting_pane_vc_g1

0x7698,	// (0x00022063) list_setting_pane_vc_g2_ParamLimits

0x7698,	// (0x00022063) list_setting_pane_vc_g2

0x0001,

0xf7fc,	// (0x0002a1c7) list_setting_pane_vc_g_ParamLimits

0xf7fc,	// (0x0002a1c7) list_setting_pane_vc_g

0xbdab,	// (0x00026776) list_setting_pane_vc_t1_ParamLimits

0xbdab,	// (0x00026776) list_setting_pane_vc_t1

0xbdbf,	// (0x0002678a) list_setting_pane_vc_t2_ParamLimits

0xbdbf,	// (0x0002678a) list_setting_pane_vc_t2

0x0001,

0xfa44,	// (0x0002a40f) list_setting_pane_vc_t_ParamLimits

0xfa44,	// (0x0002a40f) list_setting_pane_vc_t

0x76fa,	// (0x000220c5) set_value_pane_cp_vc_ParamLimits

0x76fa,	// (0x000220c5) set_value_pane_cp_vc

0xd542,	// (0x00027f0d) list_single_number_heading_pane_vc_g1_ParamLimits

0xd542,	// (0x00027f0d) list_single_number_heading_pane_vc_g1

0xd54e,	// (0x00027f19) list_single_number_heading_pane_vc_g2_ParamLimits

0xd54e,	// (0x00027f19) list_single_number_heading_pane_vc_g2

0x0001,

0xf7f2,	// (0x0002a1bd) list_single_number_heading_pane_vc_g_ParamLimits

0xf7f2,	// (0x0002a1bd) list_single_number_heading_pane_vc_g

0xd570,	// (0x00027f3b) list_single_number_heading_pane_vc_t1_ParamLimits

0xd570,	// (0x00027f3b) list_single_number_heading_pane_vc_t1

0xd68b,	// (0x00028056) list_single_number_heading_pane_vc_t2_ParamLimits

0xd68b,	// (0x00028056) list_single_number_heading_pane_vc_t2

0xd69d,	// (0x00028068) list_single_number_heading_pane_vc_t3_ParamLimits

0xd69d,	// (0x00028068) list_single_number_heading_pane_vc_t3

0x0002,

0xfa49,	// (0x0002a414) list_single_number_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0002a414) list_single_number_heading_pane_vc_t

0xce17,	// (0x000277e2) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xce17,	// (0x000277e2) list_single_graphic_heading_pane_vc_g1

0xd542,	// (0x00027f0d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xd542,	// (0x00027f0d) list_single_graphic_heading_pane_vc_g4

0xd54e,	// (0x00027f19) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xd54e,	// (0x00027f19) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7d1,	// (0x0002a19c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x0002a19c) list_single_graphic_heading_pane_vc_g

0xd570,	// (0x00027f3b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xd570,	// (0x00027f3b) list_single_graphic_heading_pane_vc_t1

0xd6af,	// (0x0002807a) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xd6af,	// (0x0002807a) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa50,	// (0x0002a41b) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa50,	// (0x0002a41b) list_single_graphic_heading_pane_vc_t

0xd542,	// (0x00027f0d) list_double2_pane_vc_g1_ParamLimits

0xd542,	// (0x00027f0d) list_double2_pane_vc_g1

0xd54e,	// (0x00027f19) list_double2_pane_vc_g2_ParamLimits

0xd54e,	// (0x00027f19) list_double2_pane_vc_g2

0x0001,

0xf7f2,	// (0x0002a1bd) list_double2_pane_vc_g_ParamLimits

0xf7f2,	// (0x0002a1bd) list_double2_pane_vc_g

0xd6c1,	// (0x0002808c) list_double2_pane_vc_t1_ParamLimits

0xd6c1,	// (0x0002808c) list_double2_pane_vc_t1

0xd6d7,	// (0x000280a2) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xd6d7,	// (0x000280a2) list_double2_large_graphic_pane_vc_g1

0xd6e3,	// (0x000280ae) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xd6e3,	// (0x000280ae) list_double2_large_graphic_pane_vc_g2

0xd6ef,	// (0x000280ba) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xd6ef,	// (0x000280ba) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa55,	// (0x0002a420) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0002a420) list_double2_large_graphic_pane_vc_g

0xd6fb,	// (0x000280c6) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xd6fb,	// (0x000280c6) list_double2_large_graphic_pane_vc_t1

0xd711,	// (0x000280dc) list_double_time_pane_vc_g1_ParamLimits

0xd711,	// (0x000280dc) list_double_time_pane_vc_g1

0xd71d,	// (0x000280e8) list_double_time_pane_vc_g2_ParamLimits

0xd71d,	// (0x000280e8) list_double_time_pane_vc_g2

0x0001,

0xfa5c,	// (0x0002a427) list_double_time_pane_vc_g_ParamLimits

0xfa5c,	// (0x0002a427) list_double_time_pane_vc_g

0xd729,	// (0x000280f4) list_double_time_pane_vc_t1_ParamLimits

0xd729,	// (0x000280f4) list_double_time_pane_vc_t1

0xd742,	// (0x0002810d) list_double_time_pane_vc_t2_ParamLimits

0xd742,	// (0x0002810d) list_double_time_pane_vc_t2

0xd77b,	// (0x00028146) list_double_time_pane_vc_t3_ParamLimits

0xd77b,	// (0x00028146) list_double_time_pane_vc_t3

0xd793,	// (0x0002815e) list_double_time_pane_vc_t4_ParamLimits

0xd793,	// (0x0002815e) list_double_time_pane_vc_t4

0x0003,

0xfa61,	// (0x0002a42c) list_double_time_pane_vc_t_ParamLimits

0xfa61,	// (0x0002a42c) list_double_time_pane_vc_t

0xd542,	// (0x00027f0d) list_double_pane_vc_g1_ParamLimits

0xd542,	// (0x00027f0d) list_double_pane_vc_g1

0xd54e,	// (0x00027f19) list_double_pane_vc_g2_ParamLimits

0xd54e,	// (0x00027f19) list_double_pane_vc_g2

0x0001,

0xf7f2,	// (0x0002a1bd) list_double_pane_vc_g_ParamLimits

0xf7f2,	// (0x0002a1bd) list_double_pane_vc_g

0xd7a5,	// (0x00028170) list_double_pane_vc_t1_ParamLimits

0xd7a5,	// (0x00028170) list_double_pane_vc_t1

0xd7b7,	// (0x00028182) list_double_pane_vc_t2_ParamLimits

0xd7b7,	// (0x00028182) list_double_pane_vc_t2

0x0001,

0xfa6a,	// (0x0002a435) list_double_pane_vc_t_ParamLimits

0xfa6a,	// (0x0002a435) list_double_pane_vc_t

0xd542,	// (0x00027f0d) list_double_number_pane_vc_g1_ParamLimits

0xd542,	// (0x00027f0d) list_double_number_pane_vc_g1

0xd54e,	// (0x00027f19) list_double_number_pane_vc_g2_ParamLimits

0xd54e,	// (0x00027f19) list_double_number_pane_vc_g2

0x0001,

0xf7f2,	// (0x0002a1bd) list_double_number_pane_vc_g_ParamLimits

0xf7f2,	// (0x0002a1bd) list_double_number_pane_vc_g

0xd7cd,	// (0x00028198) list_double_number_pane_vc_t1_ParamLimits

0xd7cd,	// (0x00028198) list_double_number_pane_vc_t1

0xd7e1,	// (0x000281ac) list_double_number_pane_vc_t2_ParamLimits

0xd7e1,	// (0x000281ac) list_double_number_pane_vc_t2

0xd7b7,	// (0x00028182) list_double_number_pane_vc_t3_ParamLimits

0xd7b7,	// (0x00028182) list_double_number_pane_vc_t3

0x0002,

0xfa6f,	// (0x0002a43a) list_double_number_pane_vc_t_ParamLimits

0xfa6f,	// (0x0002a43a) list_double_number_pane_vc_t

0xd7f3,	// (0x000281be) list_double_large_graphic_pane_vc_g1_ParamLimits

0xd7f3,	// (0x000281be) list_double_large_graphic_pane_vc_g1

0xd7ff,	// (0x000281ca) list_double_large_graphic_pane_vc_g2_ParamLimits

0xd7ff,	// (0x000281ca) list_double_large_graphic_pane_vc_g2

0xd6ef,	// (0x000280ba) list_double_large_graphic_pane_vc_g3_ParamLimits

0xd6ef,	// (0x000280ba) list_double_large_graphic_pane_vc_g3

0xd80e,	// (0x000281d9) list_double_large_graphic_pane_vc_g4_ParamLimits

0xd80e,	// (0x000281d9) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa76,	// (0x0002a441) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x0002a441) list_double_large_graphic_pane_vc_g

0xd81a,	// (0x000281e5) list_double_large_graphic_pane_vc_t1_ParamLimits

0xd81a,	// (0x000281e5) list_double_large_graphic_pane_vc_t1

0xd82c,	// (0x000281f7) list_double_large_graphic_pane_vc_t2_ParamLimits

0xd82c,	// (0x000281f7) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa7f,	// (0x0002a44a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa7f,	// (0x0002a44a) list_double_large_graphic_pane_vc_t

0xd542,	// (0x00027f0d) list_double_heading_pane_vc_g1_ParamLimits

0xd542,	// (0x00027f0d) list_double_heading_pane_vc_g1

0xd54e,	// (0x00027f19) list_double_heading_pane_vc_g2_ParamLimits

0xd54e,	// (0x00027f19) list_double_heading_pane_vc_g2

0x0001,

0xf7f2,	// (0x0002a1bd) list_double_heading_pane_vc_g_ParamLimits

0xf7f2,	// (0x0002a1bd) list_double_heading_pane_vc_g

0xd843,	// (0x0002820e) list_double_heading_pane_vc_t1_ParamLimits

0xd843,	// (0x0002820e) list_double_heading_pane_vc_t1

0xd570,	// (0x00027f3b) list_double_heading_pane_vc_t2_ParamLimits

0xd570,	// (0x00027f3b) list_double_heading_pane_vc_t2

0x0001,

0xfa84,	// (0x0002a44f) list_double_heading_pane_vc_t_ParamLimits

0xfa84,	// (0x0002a44f) list_double_heading_pane_vc_t

0xd855,	// (0x00028220) list_double_graphic_pane_vc_g1_ParamLimits

0xd855,	// (0x00028220) list_double_graphic_pane_vc_g1

0xd865,	// (0x00028230) list_double_graphic_pane_vc_g2_ParamLimits

0xd865,	// (0x00028230) list_double_graphic_pane_vc_g2

0xd874,	// (0x0002823f) list_double_graphic_pane_vc_g3_ParamLimits

0xd874,	// (0x0002823f) list_double_graphic_pane_vc_g3

0x0002,

0xfa89,	// (0x0002a454) list_double_graphic_pane_vc_g_ParamLimits

0xfa89,	// (0x0002a454) list_double_graphic_pane_vc_g

0xd880,	// (0x0002824b) list_double_graphic_pane_vc_t1_ParamLimits

0xd880,	// (0x0002824b) list_double_graphic_pane_vc_t1

0xd7b7,	// (0x00028182) list_double_graphic_pane_vc_t2_ParamLimits

0xd7b7,	// (0x00028182) list_double_graphic_pane_vc_t2

0x0001,

0xfa90,	// (0x0002a45b) list_double_graphic_pane_vc_t_ParamLimits

0xfa90,	// (0x0002a45b) list_double_graphic_pane_vc_t

0x8b9d,	// (0x00023568) aid_size_cell_fastswap

0x8ba5,	// (0x00023570) aid_size_cell_touch_ParamLimits

0x8ba5,	// (0x00023570) aid_size_cell_touch

0x8d59,	// (0x00023724) popup_fast_swap_wide_window_ParamLimits

0x8d59,	// (0x00023724) popup_fast_swap_wide_window

0x8e1f,	// (0x000237ea) touch_pane_ParamLimits

0x8e1f,	// (0x000237ea) touch_pane

0xd283,	// (0x00027c4e) button_value_adjust_pane_cp2

0xb242,	// (0x00025c0d) button_value_adjust_pane_cp4

0xd2a3,	// (0x00027c6e) form_field_data_pane_cp2

0xd2c2,	// (0x00027c8d) form_field_data_wide_pane_cp2

0x6b05,	// (0x000214d0) bg_scroll_pane_ParamLimits

0x93d4,	// (0x00023d9f) scroll_handle_pane_ParamLimits

0x93e8,	// (0x00023db3) scroll_sc2_down_pane_ParamLimits

0x93e8,	// (0x00023db3) scroll_sc2_down_pane

0x6b36,	// (0x00021501) scroll_sc2_up_pane_ParamLimits

0x6b36,	// (0x00021501) scroll_sc2_up_pane

0xe67a,	// (0x00029045) grid_wheel_folder_pane_g1_ParamLimits

0xe67a,	// (0x00029045) grid_wheel_folder_pane_g1

0x96b2,	// (0x0002407d) clock_nsta_pane_cp2_ParamLimits

0x96b2,	// (0x0002407d) clock_nsta_pane_cp2

0x9724,	// (0x000240ef) listscroll_midp_pane_ParamLimits

0x9730,	// (0x000240fb) midp_canvas_pane

0x99e4,	// (0x000243af) nsta_clock_indic_pane

0x736c,	// (0x00021d37) listscroll_form_pane_vc

0x7374,	// (0x00021d3f) listscroll_set_pane_vc_ParamLimits

0x7374,	// (0x00021d3f) listscroll_set_pane_vc

0x9e45,	// (0x00024810) clock_nsta_pane

0x9e52,	// (0x0002481d) indicator_nsta_pane

0x7582,	// (0x00021f4d) bg_popup_sub_pane_cp2_ParamLimits

0x7596,	// (0x00021f61) find_pane_cp2_ParamLimits

0x7596,	// (0x00021f61) find_pane_cp2

0x75a8,	// (0x00021f73) grid_toobar_pane_ParamLimits

0x7706,	// (0x000220d1) list_form_gen_pane_vc_ParamLimits

0x7706,	// (0x000220d1) list_form_gen_pane_vc

0x771c,	// (0x000220e7) scroll_pane_cp8_vc_ParamLimits

0x771c,	// (0x000220e7) scroll_pane_cp8_vc

0x776c,	// (0x00022137) data_form_wide_pane_vc_ParamLimits

0x776c,	// (0x00022137) data_form_wide_pane_vc

0x7778,	// (0x00022143) form_field_data_wide_pane_vc_g1

0x7780,	// (0x0002214b) form_field_data_wide_pane_vc_t1_ParamLimits

0x7780,	// (0x0002214b) form_field_data_wide_pane_vc_t1

0x65b8,	// (0x00020f83) input_focus_pane_cp6_vc_ParamLimits

0x65b8,	// (0x00020f83) input_focus_pane_cp6_vc

0xa275,	// (0x00024c40) list_midp_pane_ParamLimits

0xa281,	// (0x00024c4c) scroll_pane_cp16_ParamLimits

0xa281,	// (0x00024c4c) scroll_pane_cp16

0x79e7,	// (0x000223b2) button_value_adjust_pane_ParamLimits

0x79e7,	// (0x000223b2) button_value_adjust_pane

0xe0b5,	// (0x00028a80) button_value_adjust_pane_cp6_ParamLimits

0xe0b5,	// (0x00028a80) button_value_adjust_pane_cp6

0xe1bd,	// (0x00028b88) settings_code_pane_cp_ParamLimits

0xe1bd,	// (0x00028b88) settings_code_pane_cp

0x5f32,	// (0x000208fd) cell_touch_pane_g1

0x5f32,	// (0x000208fd) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x0002a0e5) cell_touch_pane_g

0xe557,	// (0x00028f22) cell_touch_pane_cp_ParamLimits

0xe557,	// (0x00028f22) cell_touch_pane_cp

0xe567,	// (0x00028f32) cell_touch_pane_ParamLimits

0xe567,	// (0x00028f32) cell_touch_pane

0x5f32,	// (0x000208fd) scroll_sc2_down_pane_g1

0x5f32,	// (0x000208fd) scroll_sc2_up_pane_g1

0x5fb4,	// (0x0002097f) bg_set_opt_pane_cp4_vc

0xbbce,	// (0x00026599) list_set_graphic_pane_vc_g1_ParamLimits

0xbbce,	// (0x00026599) list_set_graphic_pane_vc_g1

0xbbda,	// (0x000265a5) list_set_graphic_pane_vc_g2_ParamLimits

0xbbda,	// (0x000265a5) list_set_graphic_pane_vc_g2

0x0001,

0xfa06,	// (0x0002a3d1) list_set_graphic_pane_vc_g_ParamLimits

0xfa06,	// (0x0002a3d1) list_set_graphic_pane_vc_g

0xbbe6,	// (0x000265b1) text_primary_small_cp13_vc_ParamLimits

0xbbe6,	// (0x000265b1) text_primary_small_cp13_vc

0xbbfe,	// (0x000265c9) list_set_graphic_pane_vc_ParamLimits

0xbbfe,	// (0x000265c9) list_set_graphic_pane_vc

0x5fb4,	// (0x0002097f) input_focus_pane_cp2_vc

0x5f32,	// (0x000208fd) setting_code_pane_vc_g1

0xbc11,	// (0x000265dc) setting_code_pane_vc_t1

0xbc1f,	// (0x000265ea) set_text_pane_vc_t1_ParamLimits

0xbc1f,	// (0x000265ea) set_text_pane_vc_t1

0x5fb4,	// (0x0002097f) input_focus_pane_cp1_vc

0xbc3a,	// (0x00026605) list_set_text_pane_vc

0x5f32,	// (0x000208fd) setting_text_pane_vc_g1

0x5fb4,	// (0x0002097f) bg_set_opt_pane_cp2_vc

0xbc44,	// (0x0002660f) setting_slider_graphic_pane_vc_g1

0xbc4c,	// (0x00026617) setting_slider_graphic_pane_vc_t1

0xbc5a,	// (0x00026625) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0b,	// (0x0002a3d6) setting_slider_graphic_pane_vc_t

0xbc68,	// (0x00026633) slider_set_pane_cp_vc

0xbc70,	// (0x0002663b) slider_set_pane_vc_g1

0xbc79,	// (0x00026644) slider_set_pane_vc_g2

0x0006,

0xfa10,	// (0x0002a3db) slider_set_pane_vc_g

0x6613,	// (0x00020fde) set_opt_bg_pane_g1_copy1

0x661b,	// (0x00020fe6) set_opt_bg_pane_g2_copy1

0xbca5,	// (0x00026670) set_opt_bg_pane_g3_copy1

0x662b,	// (0x00020ff6) set_opt_bg_pane_g4_copy1

0x6633,	// (0x00020ffe) set_opt_bg_pane_g5_copy1

0x663b,	// (0x00021006) set_opt_bg_pane_g6_copy1

0xbcad,	// (0x00026678) set_opt_bg_pane_g7_copy1

0xbcb5,	// (0x00026680) set_opt_bg_pane_g8_copy1

0xbcbd,	// (0x00026688) set_opt_bg_pane_g9_copy1

0x5fb4,	// (0x0002097f) bg_set_opt_pane_cp_vc

0xbcc5,	// (0x00026690) setting_slider_pane_vc_t1

0xbc4c,	// (0x00026617) setting_slider_pane_vc_t2

0xbc5a,	// (0x00026625) setting_slider_pane_vc_t3

0x0002,

0xfa1f,	// (0x0002a3ea) setting_slider_pane_vc_t

0xbc68,	// (0x00026633) slider_set_pane_vc

0xa2c1,	// (0x00024c8c) volume_set_pane_vc_g1

0xa5a8,	// (0x00024f73) volume_set_pane_vc_g2

0xa5b1,	// (0x00024f7c) volume_set_pane_vc_g3

0xa5ba,	// (0x00024f85) volume_set_pane_vc_g4

0xa5c3,	// (0x00024f8e) volume_set_pane_vc_g5

0xa5cc,	// (0x00024f97) volume_set_pane_vc_g6

0xa5d5,	// (0x00024fa0) volume_set_pane_vc_g7

0xa5de,	// (0x00024fa9) volume_set_pane_vc_g8

0xa5e7,	// (0x00024fb2) volume_set_pane_vc_g9

0xa5f0,	// (0x00024fbb) volume_set_pane_vc_g10

0x0009,

0xfa26,	// (0x0002a3f1) volume_set_pane_vc_g

0xbcd4,	// (0x0002669f) volume_set_pane_vc

0xbcdc,	// (0x000266a7) button_value_adjust_pane_cp1_vc

0xbce6,	// (0x000266b1) list_highlight_pane_cp2_vc

0xbcef,	// (0x000266ba) list_set_pane_vc_ParamLimits

0xbcef,	// (0x000266ba) list_set_pane_vc

0xbd41,	// (0x0002670c) main_pane_set_vc_t1_ParamLimits

0xbd41,	// (0x0002670c) main_pane_set_vc_t1

0xbd56,	// (0x00026721) main_pane_set_vc_t2_ParamLimits

0xbd56,	// (0x00026721) main_pane_set_vc_t2

0xbd68,	// (0x00026733) main_pane_set_vc_t3_ParamLimits

0xbd68,	// (0x00026733) main_pane_set_vc_t3

0xbd7a,	// (0x00026745) main_pane_set_vc_t4_ParamLimits

0xbd7a,	// (0x00026745) main_pane_set_vc_t4

0x0003,

0xfa3b,	// (0x0002a406) main_pane_set_vc_t_ParamLimits

0xfa3b,	// (0x0002a406) main_pane_set_vc_t

0xbd8c,	// (0x00026757) setting_code_pane_vc_ParamLimits

0xbd8c,	// (0x00026757) setting_code_pane_vc

0xbd9b,	// (0x00026766) setting_slider_graphic_pane_vc

0xbd9b,	// (0x00026766) setting_slider_pane_vc

0xbd9b,	// (0x00026766) setting_text_pane_vc

0xbd9b,	// (0x00026766) setting_volume_pane_vc

0xbda3,	// (0x0002676e) scroll_pane_cp121_vc

0x65a3,	// (0x00020f6e) set_content_pane_vc

0xbde1,	// (0x000267ac) button_value_adjust_pane_g1

0xbdea,	// (0x000267b5) button_value_adjust_pane_g2

0x0001,

0xfa95,	// (0x0002a460) button_value_adjust_pane_g

0xbdf3,	// (0x000267be) form_field_slider_wide_pane_vc_t1_ParamLimits

0xbdf3,	// (0x000267be) form_field_slider_wide_pane_vc_t1

0xbe09,	// (0x000267d4) form_field_slider_wide_pane_vc_t2_ParamLimits

0xbe09,	// (0x000267d4) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa9a,	// (0x0002a465) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa9a,	// (0x0002a465) form_field_slider_wide_pane_vc_t

0x6002,	// (0x000209cd) input_focus_pane_cp10_vc_ParamLimits

0x6002,	// (0x000209cd) input_focus_pane_cp10_vc

0xbe1e,	// (0x000267e9) slider_cont_pane_cp1_vc_ParamLimits

0xbe1e,	// (0x000267e9) slider_cont_pane_cp1_vc

0xbc70,	// (0x0002663b) slider_form_pane_g1_cp2

0xbc79,	// (0x00026644) slider_form_pane_g2_cp2

0xbe39,	// (0x00026804) form_field_slider_pane_vc_t3

0xbe47,	// (0x00026812) form_field_slider_pane_vc_t4

0xbe55,	// (0x00026820) slider_form_pane_vc_ParamLimits

0xbe55,	// (0x00026820) slider_form_pane_vc

0xbe62,	// (0x0002682d) form_field_slider_pane_vc_t1_ParamLimits

0xbe62,	// (0x0002682d) form_field_slider_pane_vc_t1

0xbe78,	// (0x00026843) form_field_slider_pane_vc_t2_ParamLimits

0xbe78,	// (0x00026843) form_field_slider_pane_vc_t2

0x0001,

0xfaaa,	// (0x0002a475) form_field_slider_pane_vc_t_ParamLimits

0xfaaa,	// (0x0002a475) form_field_slider_pane_vc_t

0x6002,	// (0x000209cd) input_focus_pane_cp9_vc_ParamLimits

0x6002,	// (0x000209cd) input_focus_pane_cp9_vc

0xbe8a,	// (0x00026855) slider_cont_pane_vc_ParamLimits

0xbe8a,	// (0x00026855) slider_cont_pane_vc

0xbe9c,	// (0x00026867) list_form_graphic_pane_cp_vc_ParamLimits

0xbe9c,	// (0x00026867) list_form_graphic_pane_cp_vc

0x7778,	// (0x00022143) form_field_popup_wide_pane_vc_g1

0xbeb1,	// (0x0002687c) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbeb1,	// (0x0002687c) form_field_popup_wide_pane_vc_t1

0x65b8,	// (0x00020f83) input_focus_pane_cp8_vc_ParamLimits

0x65b8,	// (0x00020f83) input_focus_pane_cp8_vc

0xbec6,	// (0x00026891) list_form_wide_pane_vc_ParamLimits

0xbec6,	// (0x00026891) list_form_wide_pane_vc

0xbed2,	// (0x0002689d) list_form_graphic_pane_vc_g1

0xbeda,	// (0x000268a5) list_form_graphic_pane_vc_t1_ParamLimits

0xbeda,	// (0x000268a5) list_form_graphic_pane_vc_t1

0x6018,	// (0x000209e3) list_highlight_pane_cp5_vc_ParamLimits

0x6018,	// (0x000209e3) list_highlight_pane_cp5_vc

0xbef6,	// (0x000268c1) list_form_graphic_pane_vc_ParamLimits

0xbef6,	// (0x000268c1) list_form_graphic_pane_vc

0x7778,	// (0x00022143) form_field_popup_pane_vc_g1

0xbf0c,	// (0x000268d7) form_field_popup_pane_vc_t1_ParamLimits

0xbf0c,	// (0x000268d7) form_field_popup_pane_vc_t1

0x65b8,	// (0x00020f83) input_focus_pane_cp7_vc_ParamLimits

0x65b8,	// (0x00020f83) input_focus_pane_cp7_vc

0xbf21,	// (0x000268ec) list_form_pane_vc_ParamLimits

0xbf21,	// (0x000268ec) list_form_pane_vc

0xbf2d,	// (0x000268f8) data_form_pane_vc_t1_ParamLimits

0xbf2d,	// (0x000268f8) data_form_pane_vc_t1

0x6613,	// (0x00020fde) input_focus_pane_vc_g1

0x661b,	// (0x00020fe6) input_focus_pane_vc_g2

0x6623,	// (0x00020fee) input_focus_pane_vc_g3

0x662b,	// (0x00020ff6) input_focus_pane_vc_g4

0x6633,	// (0x00020ffe) input_focus_pane_vc_g5

0x663b,	// (0x00021006) input_focus_pane_vc_g6

0x6643,	// (0x0002100e) input_focus_pane_vc_g7

0x664b,	// (0x00021016) input_focus_pane_vc_g8

0x6653,	// (0x0002101e) input_focus_pane_vc_g9

0x5f32,	// (0x000208fd) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x0002a06e) input_focus_pane_vc_g

0x776c,	// (0x00022137) data_form_pane_vc_ParamLimits

0x776c,	// (0x00022137) data_form_pane_vc

0x7778,	// (0x00022143) form_field_data_pane_vc_g1

0xbf48,	// (0x00026913) form_field_data_pane_vc_t1_ParamLimits

0xbf48,	// (0x00026913) form_field_data_pane_vc_t1

0x65b8,	// (0x00020f83) input_focus_pane_vc_ParamLimits

0x65b8,	// (0x00020f83) input_focus_pane_vc

0x6913,	// (0x000212de) button_value_adjust_pane_cp3_vc

0xb242,	// (0x00025c0d) button_value_adjust_pane_cp5_vc

0xbf5e,	// (0x00026929) form_field_data_pane_vc_ParamLimits

0xbf5e,	// (0x00026929) form_field_data_pane_vc

0x691b,	// (0x000212e6) form_field_data_pane_vc_cp2

0xbf75,	// (0x00026940) form_field_data_wide_pane_vc_ParamLimits

0xbf75,	// (0x00026940) form_field_data_wide_pane_vc

0xbf8b,	// (0x00026956) form_field_data_wide_pane_vc_cp2

0xbf93,	// (0x0002695e) form_field_popup_pane_vc_ParamLimits

0xbf93,	// (0x0002695e) form_field_popup_pane_vc

0xbfaa,	// (0x00026975) form_field_popup_wide_pane_vc_ParamLimits

0xbfaa,	// (0x00026975) form_field_popup_wide_pane_vc

0xbfc0,	// (0x0002698b) form_field_slider_pane_vc_ParamLimits

0xbfc0,	// (0x0002698b) form_field_slider_pane_vc

0xbfd3,	// (0x0002699e) form_field_slider_wide_pane_vc_ParamLimits

0xbfd3,	// (0x0002699e) form_field_slider_wide_pane_vc

0xe579,	// (0x00028f44) grid_touch_1_pane_ParamLimits

0xe579,	// (0x00028f44) grid_touch_1_pane

0xe585,	// (0x00028f50) grid_touch_2_pane_ParamLimits

0xe585,	// (0x00028f50) grid_touch_2_pane

0x732e,	// (0x00021cf9) touch_pane_g1_ParamLimits

0x732e,	// (0x00021cf9) touch_pane_g1

0xbfe6,	// (0x000269b1) cell_app_pane_cp_wide_ParamLimits

0xbfe6,	// (0x000269b1) cell_app_pane_cp_wide

0xbff6,	// (0x000269c1) grid_popup_fast_wide_pane_ParamLimits

0xbff6,	// (0x000269c1) grid_popup_fast_wide_pane

0xc00a,	// (0x000269d5) scroll_pane_cp19_ParamLimits

0xc00a,	// (0x000269d5) scroll_pane_cp19

0x5fb4,	// (0x0002097f) bg_popup_window_pane_cp20

0xc01e,	// (0x000269e9) listscroll_popup_fast_wide_pane

0x6018,	// (0x000209e3) grid_indicator_nsta_pane

0xc026,	// (0x000269f1) clock_nsta_pane_g1

0xc02f,	// (0x000269fa) clock_nsta_pane_t1

0xe59d,	// (0x00028f68) cell_indicator_nsta_pane_ParamLimits

0xe59d,	// (0x00028f68) cell_indicator_nsta_pane

0xc04b,	// (0x00026a16) cell_indicator_nsta_pane_g1

0xe5d5,	// (0x00028fa0) cell_indicator_nsta_pane_g2

0x0001,

0xfab4,	// (0x0002a47f) cell_indicator_nsta_pane_g

0xc059,	// (0x00026a24) clock_nsta_pane_cp

0xc061,	// (0x00026a2c) indicator_nsta_pane_cp

0xc06a,	// (0x00026a35) nsta_clock_indic_pane_g1

0x6080,	// (0x00020a4b) grid_indicator_pane

0x6c28,	// (0x000215f3) scroll_pane_cp29

0x9609,	// (0x00023fd4) indicator_nsta_pane_cp2_ParamLimits

0x9609,	// (0x00023fd4) indicator_nsta_pane_cp2

0x6018,	// (0x000209e3) main_apps_wheel_pane

0x788c,	// (0x00022257) form_midp_field_text_pane_ParamLimits

0x79b9,	// (0x00022384) scroll_bar_cp050_ParamLimits

0xc0d3,	// (0x00026a9e) cell_indicator_pane_ParamLimits

0xc0d3,	// (0x00026a9e) cell_indicator_pane

0xc0e9,	// (0x00026ab4) cell_indicator_pane_g1

0xe5ea,	// (0x00028fb5) grid_wheel_folder_pane_ParamLimits

0xe5ea,	// (0x00028fb5) grid_wheel_folder_pane

0xe5fc,	// (0x00028fc7) list_wheel_apps_pane_ParamLimits

0xe5fc,	// (0x00028fc7) list_wheel_apps_pane

0xe60b,	// (0x00028fd6) main_apps_wheel_pane_g1_ParamLimits

0xe60b,	// (0x00028fd6) main_apps_wheel_pane_g1

0xe61f,	// (0x00028fea) main_apps_wheel_pane_g2_ParamLimits

0xe61f,	// (0x00028fea) main_apps_wheel_pane_g2

0x0001,

0xfad0,	// (0x0002a49b) main_apps_wheel_pane_g_ParamLimits

0xfad0,	// (0x0002a49b) main_apps_wheel_pane_g

0xe633,	// (0x00028ffe) main_apps_wheel_pane_t1_ParamLimits

0xe633,	// (0x00028ffe) main_apps_wheel_pane_t1

0xe652,	// (0x0002901d) list_wheel_apps_pane_g1

0xe65a,	// (0x00029025) list_wheel_apps_pane_g2

0xe662,	// (0x0002902d) list_wheel_apps_pane_g3

0xe66a,	// (0x00029035) list_wheel_apps_pane_g4

0xe672,	// (0x0002903d) list_wheel_apps_pane_g5

0x0004,

0xfad5,	// (0x0002a4a0) list_wheel_apps_pane_g

0x6018,	// (0x000209e3) navi_icon_text_pane

0x9d99,	// (0x00024764) aid_fill_nsta

0xc0f3,	// (0x00026abe) navi_icon_text_pane_g1

0xc0ff,	// (0x00026aca) navi_icon_text_pane_t1

0x6e9d,	// (0x00021868) list_set_graphic_pane_t1_ParamLimits

0x6e9d,	// (0x00021868) list_set_graphic_pane_t1

0x8093,	// (0x00022a5e) popup_midp_note_alarm_window_t6_ParamLimits

0x8093,	// (0x00022a5e) popup_midp_note_alarm_window_t6

0x80a5,	// (0x00022a70) popup_midp_note_alarm_window_t7_ParamLimits

0x80a5,	// (0x00022a70) popup_midp_note_alarm_window_t7

0x80b7,	// (0x00022a82) popup_midp_note_alarm_window_t8_ParamLimits

0x80b7,	// (0x00022a82) popup_midp_note_alarm_window_t8

0x80c9,	// (0x00022a94) popup_midp_note_alarm_window_t9_ParamLimits

0x80c9,	// (0x00022a94) popup_midp_note_alarm_window_t9

0x80db,	// (0x00022aa6) popup_midp_note_alarm_window_t10_ParamLimits

0x80db,	// (0x00022aa6) popup_midp_note_alarm_window_t10

0x80ed,	// (0x00022ab8) popup_midp_note_alarm_window_t11_ParamLimits

0x80ed,	// (0x00022ab8) popup_midp_note_alarm_window_t11

0x80ff,	// (0x00022aca) scroll_pane_cp17_ParamLimits

0x80ff,	// (0x00022aca) scroll_pane_cp17

0xa2c1,	// (0x00024c8c) volume_small_pane_cp_g1

0xa5f9,	// (0x00024fc4) volume_small_pane_cp_g2

0xa602,	// (0x00024fcd) volume_small_pane_cp_g3

0xa60b,	// (0x00024fd6) volume_small_pane_cp_g4

0xa2ee,	// (0x00024cb9) volume_small_pane_cp_g5

0xa614,	// (0x00024fdf) volume_small_pane_cp_g6

0xa61d,	// (0x00024fe8) volume_small_pane_cp_g7

0xa626,	// (0x00024ff1) volume_small_pane_cp_g8

0xa62f,	// (0x00024ffa) volume_small_pane_cp_g9

0xa638,	// (0x00025003) volume_small_pane_cp_g10

0x714c,	// (0x00021b17) midp_ticker_pane_g1_ParamLimits

0x7158,	// (0x00021b23) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0002a136) midp_ticker_pane_g_ParamLimits

0x7164,	// (0x00021b2f) midp_ticker_pane_t1_ParamLimits

0x9da9,	// (0x00024774) aid_fill_nsta_2

0x79a5,	// (0x00022370) list_form2_midp_pane

0xb854,	// (0x0002621f) midp_editing_number_pane_ParamLimits

0xb860,	// (0x0002622b) midp_ticker_pane_ParamLimits

0xc111,	// (0x00026adc) form2_midp_field_pane

0xc119,	// (0x00026ae4) scroll_pane_cp51

0xc139,	// (0x00026b04) form2_midp_button_pane_ParamLimits

0xc139,	// (0x00026b04) form2_midp_button_pane

0xc14b,	// (0x00026b16) form2_midp_content_pane_ParamLimits

0xc14b,	// (0x00026b16) form2_midp_content_pane

0xc165,	// (0x00026b30) form2_midp_field_choice_group_pane

0xc16d,	// (0x00026b38) form2_midp_field_pane_g1

0xc175,	// (0x00026b40) form2_midp_field_pane_g2

0xc17d,	// (0x00026b48) form2_midp_field_pane_g3

0xc185,	// (0x00026b50) form2_midp_field_pane_g4

0x0003,

0xfafa,	// (0x0002a4c5) form2_midp_field_pane_g

0xc18d,	// (0x00026b58) form2_midp_gauge_slider_pane

0xc195,	// (0x00026b60) form2_midp_gauge_wait_pane

0xc19d,	// (0x00026b68) form2_midp_image_pane_ParamLimits

0xc19d,	// (0x00026b68) form2_midp_image_pane

0xc1b8,	// (0x00026b83) form2_midp_label_pane_ParamLimits

0xc1b8,	// (0x00026b83) form2_midp_label_pane

0xe6ad,	// (0x00029078) form2_midp_label_pane_cp_ParamLimits

0xe6ad,	// (0x00029078) form2_midp_label_pane_cp

0xc1d1,	// (0x00026b9c) form2_midp_string_pane_ParamLimits

0xc1d1,	// (0x00026b9c) form2_midp_string_pane

0xd892,	// (0x0002825d) form2_midp_text_pane_ParamLimits

0xd892,	// (0x0002825d) form2_midp_text_pane

0xc1e3,	// (0x00026bae) form2_midp_time_pane

0xc1f3,	// (0x00026bbe) input_focus_pane_cp51_ParamLimits

0xc1f3,	// (0x00026bbe) input_focus_pane_cp51

0xc20b,	// (0x00026bd6) form2_midp_label_pane_t1_ParamLimits

0xc20b,	// (0x00026bd6) form2_midp_label_pane_t1

0xd8ab,	// (0x00028276) form2_mdip_text_pane_t1_ParamLimits

0xd8ab,	// (0x00028276) form2_mdip_text_pane_t1

0xd8c8,	// (0x00028293) form2_midp_time_pane_t1

0xc253,	// (0x00026c1e) form2_midp_gauge_slider_pane_t1

0xe6cc,	// (0x00029097) form2_midp_gauge_slider_pane_t2

0xe6de,	// (0x000290a9) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb03,	// (0x0002a4ce) form2_midp_gauge_slider_pane_t

0xc265,	// (0x00026c30) form2_midp_slider_pane

0xc271,	// (0x00026c3c) form2_midp_gauge_wait_pane_t1

0xc27f,	// (0x00026c4a) form2_midp_wait_pane_ParamLimits

0xc27f,	// (0x00026c4a) form2_midp_wait_pane

0x9487,	// (0x00023e52) list_single_2graphic_pane_cp4_ParamLimits

0x9487,	// (0x00023e52) list_single_2graphic_pane_cp4

0xa200,	// (0x00024bcb) list_single_midp_graphic_pane_cp_ParamLimits

0xa200,	// (0x00024bcb) list_single_midp_graphic_pane_cp

0x5fb4,	// (0x0002097f) list_highlight_pane_cp20

0xc2aa,	// (0x00026c75) list_single_2graphic_pane_g1_cp4

0xb8d5,	// (0x000262a0) list_single_2graphic_pane_g2_cp4

0xc2b2,	// (0x00026c7d) list_single_2graphic_pane_t1_cp4

0x6018,	// (0x000209e3) list_highlight_pane_cp21

0xc2c1,	// (0x00026c8c) list_single_midp_graphic_pane_g4_cp

0xc2d0,	// (0x00026c9b) list_single_midp_graphic_pane_t1_cp

0xe6f0,	// (0x000290bb) form2_mdip_string_pane_t1_ParamLimits

0xe6f0,	// (0x000290bb) form2_mdip_string_pane_t1

0x5fb4,	// (0x0002097f) bg_wml_button_pane_cp2

0x5f32,	// (0x000208fd) form2_midp_image_pane_g1

0xd05a,	// (0x00027a25) list_double_large_graphic_pane_g5_ParamLimits

0xd05a,	// (0x00027a25) list_double_large_graphic_pane_g5

0x9724,	// (0x000240ef) midp_form_pane_ParamLimits

0x6018,	// (0x000209e3) main_apps_wheel_pane_ParamLimits

0x9c3b,	// (0x00024606) popup_preview_window_ParamLimits

0x9c3b,	// (0x00024606) popup_preview_window

0x743c,	// (0x00021e07) popup_touch_info_window_ParamLimits

0x743c,	// (0x00021e07) popup_touch_info_window

0x745a,	// (0x00021e25) popup_touch_menu_window_ParamLimits

0x745a,	// (0x00021e25) popup_touch_menu_window

0x5f28,	// (0x000208f3) bg_popup_sub_pane_cp6

0xc2e5,	// (0x00026cb0) list_touch_menu_pane

0xc2ed,	// (0x00026cb8) list_single_touch_menu_pane_ParamLimits

0xc2ed,	// (0x00026cb8) list_single_touch_menu_pane

0xc304,	// (0x00026ccf) list_single_touch_menu_pane_t1

0x6018,	// (0x000209e3) bg_popup_sub_pane_cp7_ParamLimits

0x6018,	// (0x000209e3) bg_popup_sub_pane_cp7

0xc312,	// (0x00026cdd) heading_sub_pane

0xc31a,	// (0x00026ce5) list_touch_info_pane_ParamLimits

0xc31a,	// (0x00026ce5) list_touch_info_pane

0xc329,	// (0x00026cf4) list_single_touch_info_pane_ParamLimits

0xc329,	// (0x00026cf4) list_single_touch_info_pane

0xc33a,	// (0x00026d05) list_single_touch_info_pane_t1

0xc348,	// (0x00026d13) list_single_touch_info_pane_t2

0x0001,

0xfb11,	// (0x0002a4dc) list_single_touch_info_pane_t

0x7122,	// (0x00021aed) bg_popup_heading_pane_cp

0xc356,	// (0x00026d21) heading_sub_pane_t1

0x7732,	// (0x000220fd) bg_popup_preview_window_pane_cp_ParamLimits

0x7732,	// (0x000220fd) bg_popup_preview_window_pane_cp

0xc312,	// (0x00026cdd) heading_preview_pane

0xc31a,	// (0x00026ce5) list_preview_pane_ParamLimits

0xc31a,	// (0x00026ce5) list_preview_pane

0xc364,	// (0x00026d2f) popup_preview_window_g1

0xc329,	// (0x00026cf4) list_single_preview_pane_ParamLimits

0xc329,	// (0x00026cf4) list_single_preview_pane

0xc36c,	// (0x00026d37) list_single_preview_pane_g1

0xc374,	// (0x00026d3f) list_single_preview_pane_t1

0xc33a,	// (0x00026d05) list_single_preview_pane_t2

0x0001,

0xfb16,	// (0x0002a4e1) list_single_preview_pane_t

0xc382,	// (0x00026d4d) bg_popup_heading_pane_cp2_ParamLimits

0xc382,	// (0x00026d4d) bg_popup_heading_pane_cp2

0xc398,	// (0x00026d63) heading_preview_pane_g1

0xc3a0,	// (0x00026d6b) heading_preview_pane_t1_ParamLimits

0xc3a0,	// (0x00026d6b) heading_preview_pane_t1

0x6097,	// (0x00020a62) soft_indicator_pane_t1_ParamLimits

0x653b,	// (0x00020f06) scroll_pane_ParamLimits

0x6b2d,	// (0x000214f8) scroll_sc2_left_pane

0x6b24,	// (0x000214ef) scroll_sc2_right_pane

0x6b4c,	// (0x00021517) scroll_bg_pane_g1_ParamLimits

0x6b61,	// (0x0002152c) scroll_bg_pane_g2_ParamLimits

0x6b79,	// (0x00021544) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x0002a0c5) scroll_bg_pane_g_ParamLimits

0x6b4c,	// (0x00021517) scroll_handle_pane_g1_ParamLimits

0x6b9b,	// (0x00021566) scroll_handle_pane_g2_ParamLimits

0x6b79,	// (0x00021544) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x0002a0cc) scroll_handle_pane_g_ParamLimits

0x7394,	// (0x00021d5f) popup_choice_list_window_ParamLimits

0x7394,	// (0x00021d5f) popup_choice_list_window

0x758e,	// (0x00021f59) choice_list_pane

0x7604,	// (0x00021fcf) cell_toolbar_pane_t1

0x762c,	// (0x00021ff7) toolbar_button_pane_ParamLimits

0xb5b5,	// (0x00025f80) ai_gene_pane_1_t2_ParamLimits

0xb5b5,	// (0x00025f80) ai_gene_pane_1_t2

0x0001,

0xf91e,	// (0x0002a2e9) ai_gene_pane_1_t_ParamLimits

0xf91e,	// (0x0002a2e9) ai_gene_pane_1_t

0xc3bd,	// (0x00026d88) scroll_sc2_left_pane_g1

0xc3bd,	// (0x00026d88) scroll_sc2_right_pane_g1

0x6aca,	// (0x00021495) bg_popup_sub_pane_cp10

0xc3c7,	// (0x00026d92) list_choice_list_pane

0xc3de,	// (0x00026da9) list_single_choice_list_pane_ParamLimits

0xc3de,	// (0x00026da9) list_single_choice_list_pane

0xc3f2,	// (0x00026dbd) list_single_choice_list_pane_g1

0x672b,	// (0x000210f6) list_single_choice_list_pane_t1_ParamLimits

0x672b,	// (0x000210f6) list_single_choice_list_pane_t1

0xc3fa,	// (0x00026dc5) choice_list_pane_g1

0xc402,	// (0x00026dcd) choice_list_pane_t1

0x5f28,	// (0x000208f3) input_focus_pane_cp11

0x68b6,	// (0x00021281) title_pane_stacon_g2_ParamLimits

0x68b6,	// (0x00021281) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x0002a0ab) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0002a0ab) title_pane_stacon_g

0x7122,	// (0x00021aed) cursor_press_pane

0x9a88,	// (0x00024453) popup_fep_hwr_window_ParamLimits

0x9a88,	// (0x00024453) popup_fep_hwr_window

0x73e6,	// (0x00021db1) popup_fep_vkb_window_ParamLimits

0x73e6,	// (0x00021db1) popup_fep_vkb_window

0xc410,	// (0x00026ddb) cursor_press_pane_g1

0x0002,

0xfb3f,	// (0x0002a50a) fep_vkb_side_pane_g_ParamLimits

0xa676,	// (0x00025041) fep_hwr_candidate_pane_ParamLimits

0xa676,	// (0x00025041) fep_hwr_candidate_pane

0xa69e,	// (0x00025069) fep_hwr_side_pane_ParamLimits

0xa69e,	// (0x00025069) fep_hwr_side_pane

0xa6be,	// (0x00025089) fep_hwr_top_pane_ParamLimits

0xa6be,	// (0x00025089) fep_hwr_top_pane

0xa6d6,	// (0x000250a1) fep_hwr_write_pane_ParamLimits

0xa6d6,	// (0x000250a1) fep_hwr_write_pane

0xfb3f,	// (0x0002a50a) fep_vkb_side_pane_g

0xc418,	// (0x00026de3) fep_hwr_top_pane_g1

0xc42a,	// (0x00026df5) fep_hwr_top_pane_g2

0xa710,	// (0x000250db) fep_hwr_top_pane_g3

0x0002,

0xfb1b,	// (0x0002a4e6) fep_hwr_top_pane_g

0xa725,	// (0x000250f0) fep_hwr_top_text_pane

0x6c95,	// (0x00021660) fep_hwr_top_text_pane_g1

0xc460,	// (0x00026e2b) fep_hwr_top_text_pane_t1

0xa813,	// (0x000251de) fep_hwr_candidate_pane_g1

0xc629,	// (0x00026ff4) fep_vkb_keypad_pane_g3_ParamLimits

0xc629,	// (0x00026ff4) fep_vkb_keypad_pane_g3

0xc64b,	// (0x00027016) fep_vkb_keypad_pane_g4_ParamLimits

0xc64b,	// (0x00027016) fep_vkb_keypad_pane_g4

0xc6ba,	// (0x00027085) fep_vkb_bottom_pane_g2_ParamLimits

0xc6ba,	// (0x00027085) fep_vkb_bottom_pane_g2

0x0001,

0xfb46,	// (0x0002a511) fep_vkb_bottom_pane_g_ParamLimits

0xfb46,	// (0x0002a511) fep_vkb_bottom_pane_g

0xc3bd,	// (0x00026d88) cell_vkb_side_pane_g2

0x0001,

0xfb50,	// (0x0002a51b) cell_vkb_side_pane_g

0xc6fe,	// (0x000270c9) cell_vkb_side_pane_t1

0xc70c,	// (0x000270d7) cell_vkb_side_pane_t1_copy1

0xc3bd,	// (0x00026d88) bg_fep_vkb_candidate_pane_g2

0xc7da,	// (0x000271a5) cell_vkb_candidate_pane_ParamLimits

0xc46e,	// (0x00026e39) aid_size_cell_vkb_ParamLimits

0xc46e,	// (0x00026e39) aid_size_cell_vkb

0xc7da,	// (0x000271a5) cell_vkb_candidate_pane

0xa83a,	// (0x00025205) bg_popup_fep_shadow_pane_g1

0xc4d8,	// (0x00026ea3) fep_vkb_bottom_pane_ParamLimits

0xc4d8,	// (0x00026ea3) fep_vkb_bottom_pane

0xc515,	// (0x00026ee0) fep_vkb_candidate_pane_ParamLimits

0xc515,	// (0x00026ee0) fep_vkb_candidate_pane

0xc531,	// (0x00026efc) fep_vkb_keypad_pane_ParamLimits

0xc531,	// (0x00026efc) fep_vkb_keypad_pane

0xc565,	// (0x00026f30) fep_vkb_side_pane_ParamLimits

0xc565,	// (0x00026f30) fep_vkb_side_pane

0xc591,	// (0x00026f5c) fep_vkb_top_pane_ParamLimits

0xc591,	// (0x00026f5c) fep_vkb_top_pane

0xc5bd,	// (0x00026f88) fep_vkb_top_pane_g1_ParamLimits

0xc5bd,	// (0x00026f88) fep_vkb_top_pane_g1

0xc5cc,	// (0x00026f97) fep_vkb_top_pane_g2_ParamLimits

0xc5cc,	// (0x00026f97) fep_vkb_top_pane_g2

0xc5db,	// (0x00026fa6) fep_vkb_top_pane_g3_ParamLimits

0xc5db,	// (0x00026fa6) fep_vkb_top_pane_g3

0x0003,

0xfb36,	// (0x0002a501) fep_vkb_top_pane_g_ParamLimits

0xfb36,	// (0x0002a501) fep_vkb_top_pane_g

0xc5f9,	// (0x00026fc4) fep_vkb_top_text_pane_ParamLimits

0xc5f9,	// (0x00026fc4) fep_vkb_top_text_pane

0xe774,	// (0x0002913f) fep_vkb_side_pane_g1_ParamLimits

0xe774,	// (0x0002913f) fep_vkb_side_pane_g1

0xc618,	// (0x00026fe3) grid_vkb_side_pane_ParamLimits

0xc618,	// (0x00026fe3) grid_vkb_side_pane

0xa842,	// (0x0002520d) bg_popup_fep_shadow_pane_g2

0xa84b,	// (0x00025216) bg_popup_fep_shadow_pane_g3

0xa853,	// (0x0002521e) bg_popup_fep_shadow_pane_g4

0xa85c,	// (0x00025227) bg_popup_fep_shadow_pane_g5

0xa864,	// (0x0002522f) bg_popup_fep_shadow_pane_g6

0xa86c,	// (0x00025237) bg_popup_fep_shadow_pane_g7

0x662b,	// (0x00020ff6) bg_popup_fep_shadow_pane_g8

0xc669,	// (0x00027034) grid_vkb_keypad_number_pane_ParamLimits

0xc669,	// (0x00027034) grid_vkb_keypad_number_pane

0xc679,	// (0x00027044) grid_vkb_keypad_pane_ParamLimits

0xc679,	// (0x00027044) grid_vkb_keypad_pane

0xc69f,	// (0x0002706a) fep_vkb_bottom_pane_g1_ParamLimits

0xc69f,	// (0x0002706a) fep_vkb_bottom_pane_g1

0xc6c8,	// (0x00027093) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc6c8,	// (0x00027093) grid_vkb_keypad_bottom_left_pane

0xc6dd,	// (0x000270a8) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc6dd,	// (0x000270a8) grid_vkb_keypad_bottom_right_pane

0xc6f2,	// (0x000270bd) fep_vkb_top_text_pane_g1

0xe7be,	// (0x00029189) fep_vkb_top_text_pane_t1

0xe7d3,	// (0x0002919e) cell_vkb_side_pane_ParamLimits

0xe7d3,	// (0x0002919e) cell_vkb_side_pane

0xc3bd,	// (0x00026d88) cell_vkb_side_pane_g1

0xc71a,	// (0x000270e5) cell_vkb_keypad_pane_ParamLimits

0xc71a,	// (0x000270e5) cell_vkb_keypad_pane

0xc787,	// (0x00027152) cell_vkb_keypad_pane_g1

0x0008,

0xfb63,	// (0x0002a52e) bg_popup_fep_shadow_pane_g

0xa87c,	// (0x00025247) cell_hwr_side_pane_g1

0xa87c,	// (0x00025247) cell_hwr_side_pane_g2

0xc791,	// (0x0002715c) cell_vkb_keypad_pane_t1

0xe7f6,	// (0x000291c1) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe7f6,	// (0x000291c1) cell_vkb_keypad_bottom_left_pane

0xe813,	// (0x000291de) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe813,	// (0x000291de) cell_vkb_keypad_bottom_right_pane

0xc3bd,	// (0x00026d88) cell_vkb_keypad_bottom_left_pane_g1

0xc3bd,	// (0x00026d88) cell_vkb_keypad_bottom_right_pane_g1

0xc79f,	// (0x0002716a) cell_vkb_keypad_number_pane_ParamLimits

0xc79f,	// (0x0002716a) cell_vkb_keypad_number_pane

0xc7be,	// (0x00027189) cell_vkb_keypad_number_pane_g1

0xc7c8,	// (0x00027193) cell_vkb_keypad_number_pane_g2

0xc7d1,	// (0x0002719c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb55,	// (0x0002a520) cell_vkb_keypad_number_pane_g

0xc791,	// (0x0002715c) cell_vkb_keypad_number_pane_t1

0xc7f3,	// (0x000271be) fep_vkb_candidate_pane_g1

0x0001,

0xfb76,	// (0x0002a541) cell_hwr_side_pane_g

0xc80c,	// (0x000271d7) cell_hwr_side_pane_t1

0xa886,	// (0x00025251) cell_hwr_side_pane_t1_copy1

0xa894,	// (0x0002525f) cell_hwr_candidate_pane_g1

0xa8c3,	// (0x0002528e) cell_hwr_candidate_pane_t1

0xc3bd,	// (0x00026d88) cell_vkb_candidate_pane_g2

0xc850,	// (0x0002721b) cell_vkb_candidate_pane_t1

0xa641,	// (0x0002500c) bg_popup_fep_shadow_pane_ParamLimits

0xa641,	// (0x0002500c) bg_popup_fep_shadow_pane

0xa6f0,	// (0x000250bb) bg_fep_hwr_top_pane_g4

0xc43c,	// (0x00026e07) bg_hwr_side_pane_g1_ParamLimits

0xc43c,	// (0x00026e07) bg_hwr_side_pane_g1

0xa761,	// (0x0002512c) cell_hwr_side_pane_ParamLimits

0xa761,	// (0x0002512c) cell_hwr_side_pane

0xa79c,	// (0x00025167) fep_hwr_write_pane_g1_ParamLimits

0xa79c,	// (0x00025167) fep_hwr_write_pane_g1

0xa7a9,	// (0x00025174) fep_hwr_write_pane_g2_ParamLimits

0xa7a9,	// (0x00025174) fep_hwr_write_pane_g2

0xa7b6,	// (0x00025181) fep_hwr_write_pane_g3_ParamLimits

0xa7b6,	// (0x00025181) fep_hwr_write_pane_g3

0xa7c4,	// (0x0002518f) fep_hwr_write_pane_g4_ParamLimits

0xa7c4,	// (0x0002518f) fep_hwr_write_pane_g4

0x0005,

0xfb22,	// (0x0002a4ed) fep_hwr_write_pane_g_ParamLimits

0xfb22,	// (0x0002a4ed) fep_hwr_write_pane_g

0xa6f0,	// (0x000250bb) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xa6f0,	// (0x000250bb) bg_fep_hwr_candidate_pane_g2

0xa7d9,	// (0x000251a4) cell_hwr_candidate_pane_ParamLimits

0xa7d9,	// (0x000251a4) cell_hwr_candidate_pane

0xa813,	// (0x000251de) fep_hwr_candidate_pane_g1_ParamLimits

0xc49c,	// (0x00026e67) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc49c,	// (0x00026e67) bg_popup_fep_shadow_pane_cp2

0xc5eb,	// (0x00026fb6) fep_vkb_top_pane_g4_ParamLimits

0xc5eb,	// (0x00026fb6) fep_vkb_top_pane_g4

0xc60a,	// (0x00026fd5) fep_vkb_side_pane_g2_ParamLimits

0xc60a,	// (0x00026fd5) fep_vkb_side_pane_g2

0xd1bc,	// (0x00027b87) list_setting_pane_t4_ParamLimits

0xd1bc,	// (0x00027b87) list_setting_pane_t4

0xd24a,	// (0x00027c15) list_setting_number_pane_t5_ParamLimits

0xd24a,	// (0x00027c15) list_setting_number_pane_t5

0x9477,	// (0x00023e42) list_double_heading_pane_cp2_ParamLimits

0x9477,	// (0x00023e42) list_double_heading_pane_cp2

0x6f97,	// (0x00021962) list_double_heading_pane_g1_cp2_ParamLimits

0x6f97,	// (0x00021962) list_double_heading_pane_g1_cp2

0xc85e,	// (0x00027229) list_double_heading_pane_g2_cp2_ParamLimits

0xc85e,	// (0x00027229) list_double_heading_pane_g2_cp2

0xc872,	// (0x0002723d) list_double_heading_pane_t1_cp2_ParamLimits

0xc872,	// (0x0002723d) list_double_heading_pane_t1_cp2

0xc888,	// (0x00027253) list_double_heading_pane_t2_cp2_ParamLimits

0xc888,	// (0x00027253) list_double_heading_pane_t2_cp2

0x5f20,	// (0x000208eb) aid_value_unit2

0x8d95,	// (0x00023760) popup_preview_fixed_window

0x6177,	// (0x00020b42) bg_popup_preview_window_pane_cp02

0xc89a,	// (0x00027265) list_preview_fixed_pane

0xc8e0,	// (0x000272ab) list_empty_pane_fp_ParamLimits

0xc8e0,	// (0x000272ab) list_empty_pane_fp

0xc8e0,	// (0x000272ab) list_single_cale_day_pane_fp_ParamLimits

0xc8e0,	// (0x000272ab) list_single_cale_day_pane_fp

0xc8e0,	// (0x000272ab) list_single_graphic_heading_pane_fp_ParamLimits

0xc8e0,	// (0x000272ab) list_single_graphic_heading_pane_fp

0xc8e0,	// (0x000272ab) list_single_graphic_pane_fp_ParamLimits

0xc8e0,	// (0x000272ab) list_single_graphic_pane_fp

0xc8e0,	// (0x000272ab) list_single_heading_pane_fp_ParamLimits

0xc8e0,	// (0x000272ab) list_single_heading_pane_fp

0xc8e0,	// (0x000272ab) list_single_pane_fp_ParamLimits

0xc8e0,	// (0x000272ab) list_single_pane_fp

0xc8f4,	// (0x000272bf) list_single_pane_fp_g1_ParamLimits

0xc8f4,	// (0x000272bf) list_single_pane_fp_g1

0xd17b,	// (0x00027b46) list_single_pane_fp_g2_ParamLimits

0xd17b,	// (0x00027b46) list_single_pane_fp_g2

0xd8db,	// (0x000282a6) list_single_pane_fp_g3_ParamLimits

0xd8db,	// (0x000282a6) list_single_pane_fp_g3

0xc900,	// (0x000272cb) list_single_pane_fp_g4_ParamLimits

0xc900,	// (0x000272cb) list_single_pane_fp_g4

0x0003,

0xfb89,	// (0x0002a554) list_single_pane_fp_g_ParamLimits

0xfb89,	// (0x0002a554) list_single_pane_fp_g

0xd8ef,	// (0x000282ba) list_single_pane_fp_t1_ParamLimits

0xd8ef,	// (0x000282ba) list_single_pane_fp_t1

0xd906,	// (0x000282d1) list_single_graphic_pane_fp_g1_ParamLimits

0xd906,	// (0x000282d1) list_single_graphic_pane_fp_g1

0xc8f4,	// (0x000272bf) list_single_graphic_pane_fp_g2_ParamLimits

0xc8f4,	// (0x000272bf) list_single_graphic_pane_fp_g2

0xd17b,	// (0x00027b46) list_single_graphic_pane_fp_g3_ParamLimits

0xd17b,	// (0x00027b46) list_single_graphic_pane_fp_g3

0xd8db,	// (0x000282a6) list_single_graphic_pane_fp_g4_ParamLimits

0xd8db,	// (0x000282a6) list_single_graphic_pane_fp_g4

0xc900,	// (0x000272cb) list_single_graphic_pane_fp_g5_ParamLimits

0xc900,	// (0x000272cb) list_single_graphic_pane_fp_g5

0x0004,

0xfb92,	// (0x0002a55d) list_single_graphic_pane_fp_g_ParamLimits

0xfb92,	// (0x0002a55d) list_single_graphic_pane_fp_g

0xd912,	// (0x000282dd) list_single_graphic_pane_fp_t1_ParamLimits

0xd912,	// (0x000282dd) list_single_graphic_pane_fp_t1

0xd906,	// (0x000282d1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd906,	// (0x000282d1) list_single_graphic_heading_pane_fp_g1

0xc8f4,	// (0x000272bf) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc8f4,	// (0x000272bf) list_single_graphic_heading_pane_fp_g2

0xd17b,	// (0x00027b46) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd17b,	// (0x00027b46) list_single_graphic_heading_pane_fp_g3

0xd8db,	// (0x000282a6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd8db,	// (0x000282a6) list_single_graphic_heading_pane_fp_g4

0xc900,	// (0x000272cb) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc900,	// (0x000272cb) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb92,	// (0x0002a55d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb92,	// (0x0002a55d) list_single_graphic_heading_pane_fp_g

0xd928,	// (0x000282f3) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd928,	// (0x000282f3) list_single_graphic_heading_pane_fp_t1

0xd93e,	// (0x00028309) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd93e,	// (0x00028309) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9d,	// (0x0002a568) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9d,	// (0x0002a568) list_single_graphic_heading_pane_fp_t

0xd950,	// (0x0002831b) list_single_cale_day_pane_fp_g1_ParamLimits

0xd950,	// (0x0002831b) list_single_cale_day_pane_fp_g1

0xc90c,	// (0x000272d7) list_single_cale_day_pane_fp_g2_ParamLimits

0xc90c,	// (0x000272d7) list_single_cale_day_pane_fp_g2

0xd988,	// (0x00028353) list_single_cale_day_pane_fp_g3_ParamLimits

0xd988,	// (0x00028353) list_single_cale_day_pane_fp_g3

0xd9b0,	// (0x0002837b) list_single_cale_day_pane_fp_g4_ParamLimits

0xd9b0,	// (0x0002837b) list_single_cale_day_pane_fp_g4

0xd9d4,	// (0x0002839f) list_single_cale_day_pane_fp_g5_ParamLimits

0xd9d4,	// (0x0002839f) list_single_cale_day_pane_fp_g5

0x0004,

0xfba2,	// (0x0002a56d) list_single_cale_day_pane_fp_g_ParamLimits

0xfba2,	// (0x0002a56d) list_single_cale_day_pane_fp_g

0xd9f8,	// (0x000283c3) list_single_cale_day_pane_fp_t1_ParamLimits

0xd9f8,	// (0x000283c3) list_single_cale_day_pane_fp_t1

0xda1e,	// (0x000283e9) list_single_cale_day_pane_fp_t2_ParamLimits

0xda1e,	// (0x000283e9) list_single_cale_day_pane_fp_t2

0xda37,	// (0x00028402) list_single_cale_day_pane_fp_t3_ParamLimits

0xda37,	// (0x00028402) list_single_cale_day_pane_fp_t3

0x0002,

0xfbad,	// (0x0002a578) list_single_cale_day_pane_fp_t_ParamLimits

0xfbad,	// (0x0002a578) list_single_cale_day_pane_fp_t

0xc8f4,	// (0x000272bf) list_empty_pane_fp_g1_ParamLimits

0xc8f4,	// (0x000272bf) list_empty_pane_fp_g1

0xe33a,	// (0x00028d05) list_empty_pane_fp_t1

0xe348,	// (0x00028d13) list_empty_pane_fp_t2

0x0001,

0xfbb4,	// (0x0002a57f) list_empty_pane_fp_t

0xc8f4,	// (0x000272bf) list_single_heading_pane_fp_g1_ParamLimits

0xc8f4,	// (0x000272bf) list_single_heading_pane_fp_g1

0xd17b,	// (0x00027b46) list_single_heading_pane_fp_g2_ParamLimits

0xd17b,	// (0x00027b46) list_single_heading_pane_fp_g2

0xd8db,	// (0x000282a6) list_single_heading_pane_fp_g3_ParamLimits

0xd8db,	// (0x000282a6) list_single_heading_pane_fp_g3

0x0002,

0xfbb9,	// (0x0002a584) list_single_heading_pane_fp_g_ParamLimits

0xfbb9,	// (0x0002a584) list_single_heading_pane_fp_g

0xe356,	// (0x00028d21) list_single_heading_pane_fp_t1_ParamLimits

0xe356,	// (0x00028d21) list_single_heading_pane_fp_t1

0xe368,	// (0x00028d33) list_single_heading_pane_fp_t2_ParamLimits

0xe368,	// (0x00028d33) list_single_heading_pane_fp_t2

0x0001,

0xfbc0,	// (0x0002a58b) list_single_heading_pane_fp_t_ParamLimits

0xfbc0,	// (0x0002a58b) list_single_heading_pane_fp_t

0x6740,	// (0x0002110b) aid_size_cell_fast

0x615a,	// (0x00020b25) soft_indicator_pane_cp1_t1

0x677d,	// (0x00021148) cell_app_pane_cp2_ParamLimits

0x677d,	// (0x00021148) cell_app_pane_cp2

0xa663,	// (0x0002502e) fep_hwr_candidate_drop_down_list_pane

0xa82d,	// (0x000251f8) fep_hwr_candidate_pane_g3_ParamLimits

0xa82d,	// (0x000251f8) fep_hwr_candidate_pane_g3

0x5934,	// (0x000202ff) fep_hwr_candidate_pane_g4_ParamLimits

0x5934,	// (0x000202ff) fep_hwr_candidate_pane_g4

0x0002,

0xfb2f,	// (0x0002a4fa) fep_hwr_candidate_pane_g_ParamLimits

0xfb2f,	// (0x0002a4fa) fep_hwr_candidate_pane_g

0xc504,	// (0x00026ecf) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc504,	// (0x00026ecf) fep_vkb_candidate_drop_down_list_pane

0xc7fb,	// (0x000271c6) fep_vkb_candidate_pane_g3

0xc803,	// (0x000271ce) fep_vkb_candidate_pane_g4

0x0002,

0xfb5c,	// (0x0002a527) fep_vkb_candidate_pane_g

0xa894,	// (0x0002525f) cell_hwr_candidate_pane_g1_ParamLimits

0xa8a2,	// (0x0002526d) cell_hwr_candidate_pane_g3_ParamLimits

0xa8a2,	// (0x0002526d) cell_hwr_candidate_pane_g3

0x0937,	// (0x0001b302) cell_hwr_candidate_pane_g4_ParamLimits

0x0937,	// (0x0001b302) cell_hwr_candidate_pane_g4

0x0002,

0xfb7b,	// (0x0002a546) cell_hwr_candidate_pane_g_ParamLimits

0xfb7b,	// (0x0002a546) cell_hwr_candidate_pane_g

0xc81a,	// (0x000271e5) cell_vkb_candidate_pane_g3_ParamLimits

0xc81a,	// (0x000271e5) cell_vkb_candidate_pane_g3

0xc835,	// (0x00027200) cell_vkb_candidate_pane_g4_ParamLimits

0xc835,	// (0x00027200) cell_vkb_candidate_pane_g4

0xc918,	// (0x000272e3) cell_app_pane_cp2_g1_ParamLimits

0xc918,	// (0x000272e3) cell_app_pane_cp2_g1

0xc936,	// (0x00027301) cell_app_pane_cp2_g2_ParamLimits

0xc936,	// (0x00027301) cell_app_pane_cp2_g2

0x0001,

0xfbc5,	// (0x0002a590) cell_app_pane_cp2_g_ParamLimits

0xfbc5,	// (0x0002a590) cell_app_pane_cp2_g

0xc942,	// (0x0002730d) cell_app_pane_cp2_t1_ParamLimits

0xc942,	// (0x0002730d) cell_app_pane_cp2_t1

0x65b8,	// (0x00020f83) grid_highlight_pane_cp1_ParamLimits

0x65b8,	// (0x00020f83) grid_highlight_pane_cp1

0xa8e0,	// (0x000252ab) cell_hwr_candidate_pane_cp1_ParamLimits

0xa8e0,	// (0x000252ab) cell_hwr_candidate_pane_cp1

0xa894,	// (0x0002525f) fep_hwr_candidate_drop_down_list_pane_g1

0xa8fe,	// (0x000252c9) fep_hwr_candidate_drop_down_list_pane_g2

0xa90b,	// (0x000252d6) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbca,	// (0x0002a595) fep_hwr_candidate_drop_down_list_pane_g

0xa918,	// (0x000252e3) fep_hwr_candidate_drop_down_list_scroll_pane

0xa921,	// (0x000252ec) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xa921,	// (0x000252ec) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xa92e,	// (0x000252f9) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xa92e,	// (0x000252f9) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xa93b,	// (0x00025306) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xa93b,	// (0x00025306) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xa948,	// (0x00025313) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xa948,	// (0x00025313) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xa963,	// (0x0002532e) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xa963,	// (0x0002532e) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xa97e,	// (0x00025349) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xa97e,	// (0x00025349) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xa999,	// (0x00025364) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xa999,	// (0x00025364) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xa9b4,	// (0x0002537f) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xa9b4,	// (0x0002537f) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd1,	// (0x0002a59c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd1,	// (0x0002a59c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xe84c,	// (0x00029217) cell_vkb_candidate_pane_cp1_ParamLimits

0xe84c,	// (0x00029217) cell_vkb_candidate_pane_cp1

0xc5eb,	// (0x00026fb6) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc5eb,	// (0x00026fb6) fep_vkb_candidate_drop_down_list_pane_g1

0xc954,	// (0x0002731f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc954,	// (0x0002731f) fep_vkb_candidate_drop_down_list_pane_g2

0xc961,	// (0x0002732c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc961,	// (0x0002732c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe2,	// (0x0002a5ad) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe2,	// (0x0002a5ad) fep_vkb_candidate_drop_down_list_pane_g

0xc96e,	// (0x00027339) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc96e,	// (0x00027339) fep_vkb_candidate_drop_down_list_scroll_pane

0xc97b,	// (0x00027346) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc97b,	// (0x00027346) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc988,	// (0x00027353) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc988,	// (0x00027353) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc994,	// (0x0002735f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc994,	// (0x0002735f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc9a0,	// (0x0002736b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc9a0,	// (0x0002736b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc9c1,	// (0x0002738c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc9c1,	// (0x0002738c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc9e2,	// (0x000273ad) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc9e2,	// (0x000273ad) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca03,	// (0x000273ce) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca03,	// (0x000273ce) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca24,	// (0x000273ef) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca24,	// (0x000273ef) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe9,	// (0x0002a5b4) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe9,	// (0x0002a5b4) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8e7f,	// (0x0002384a) title_pane_g1_ParamLimits

0x8e8c,	// (0x00023857) title_pane_g2_ParamLimits

0xf56a,	// (0x00029f35) title_pane_g_ParamLimits

0x6c8d,	// (0x00021658) aid_call2_pane

0x6c85,	// (0x00021650) aid_call_pane

0x6c95,	// (0x00021660) popup_clock_analogue_window_g1

0x6c95,	// (0x00021660) popup_clock_analogue_window_g2

0x9458,	// (0x00023e23) popup_clock_analogue_window_g3

0x9461,	// (0x00023e2c) popup_clock_analogue_window_g4

0x5f32,	// (0x000208fd) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x0002a0da) popup_clock_analogue_window_g

0x9469,	// (0x00023e34) popup_clock_analogue_window_t1

0x94ad,	// (0x00023e78) clock_digital_number_pane_ParamLimits

0x94ad,	// (0x00023e78) clock_digital_number_pane

0x94b9,	// (0x00023e84) clock_digital_number_pane_cp02_ParamLimits

0x94b9,	// (0x00023e84) clock_digital_number_pane_cp02

0x94c5,	// (0x00023e90) clock_digital_number_pane_cp03_ParamLimits

0x94c5,	// (0x00023e90) clock_digital_number_pane_cp03

0x94d1,	// (0x00023e9c) clock_digital_number_pane_cp04_ParamLimits

0x94d1,	// (0x00023e9c) clock_digital_number_pane_cp04

0x94dd,	// (0x00023ea8) clock_digital_separator_pane_ParamLimits

0x94dd,	// (0x00023ea8) clock_digital_separator_pane

0x94e9,	// (0x00023eb4) popup_clock_digital_window_t1_ParamLimits

0x94e9,	// (0x00023eb4) popup_clock_digital_window_t1

0x5f32,	// (0x000208fd) clock_digital_number_pane_g1

0x5f32,	// (0x000208fd) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x0002a0e5) clock_digital_number_pane_g

0x5f32,	// (0x000208fd) clock_digital_separator_pane_g1

0x5f32,	// (0x000208fd) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x0002a0e5) clock_digital_separator_pane_g

0x9d99,	// (0x00024764) aid_fill_nsta_ParamLimits

0x9e52,	// (0x0002481d) indicator_nsta_pane_ParamLimits

0x7537,	// (0x00021f02) popup_clock_analogue_window

0x7537,	// (0x00021f02) popup_clock_digital_window

0x6018,	// (0x000209e3) grid_indicator_nsta_pane_ParamLimits

0xc03d,	// (0x00026a08) clock_nsta_pane_t2

0x0001,

0xfaaf,	// (0x0002a47a) clock_nsta_pane_t

0x93c1,	// (0x00023d8c) aid_size_max_handle

0x93cb,	// (0x00023d96) aid_size_min_handle

0x7122,	// (0x00021aed) editor_scroll_pane

0xca3f,	// (0x0002740a) ex_editor_pane

0x671b,	// (0x000210e6) scroll_pane_cp13

0x6568,	// (0x00020f33) scroll_pane_cp14

0x6cbf,	// (0x0002168a) scroll_pane_cp36

0x9487,	// (0x00023e52) list_single_graphic_hl_pane_cp2_ParamLimits

0x9487,	// (0x00023e52) list_single_graphic_hl_pane_cp2

0xe20b,	// (0x00028bd6) list_single_graphic_hl_pane_ParamLimits

0xe20b,	// (0x00028bd6) list_single_graphic_hl_pane

0xe37e,	// (0x00028d49) aid_size_min_hl_cp1

0xca47,	// (0x00027412) list_highlight_pane_cp34_ParamLimits

0xca47,	// (0x00027412) list_highlight_pane_cp34

0xca58,	// (0x00027423) list_single_graphic_hl_pane_g1_ParamLimits

0xca58,	// (0x00027423) list_single_graphic_hl_pane_g1

0xe387,	// (0x00028d52) list_single_graphic_hl_pane_g2_ParamLimits

0xe387,	// (0x00028d52) list_single_graphic_hl_pane_g2

0xe387,	// (0x00028d52) list_single_graphic_hl_pane_g3_ParamLimits

0xe387,	// (0x00028d52) list_single_graphic_hl_pane_g3

0xd542,	// (0x00027f0d) list_single_graphic_hl_pane_g4_ParamLimits

0xd542,	// (0x00027f0d) list_single_graphic_hl_pane_g4

0xe393,	// (0x00028d5e) list_single_graphic_hl_pane_g5_ParamLimits

0xe393,	// (0x00028d5e) list_single_graphic_hl_pane_g5

0x0004,

0xfbfa,	// (0x0002a5c5) list_single_graphic_hl_pane_g_ParamLimits

0xfbfa,	// (0x0002a5c5) list_single_graphic_hl_pane_g

0xe3a7,	// (0x00028d72) list_single_graphic_hl_pane_t1_ParamLimits

0xe3a7,	// (0x00028d72) list_single_graphic_hl_pane_t1

0xca65,	// (0x00027430) aid_size_min_hl_cp2

0xca6e,	// (0x00027439) list_highlight_pane_cp34_cp2_ParamLimits

0xca6e,	// (0x00027439) list_highlight_pane_cp34_cp2

0xca58,	// (0x00027423) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca58,	// (0x00027423) list_single_graphic_hl_pane_g1_cp2

0xca7b,	// (0x00027446) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xca7b,	// (0x00027446) list_single_graphic_hl_pane_g2_cp2

0xca87,	// (0x00027452) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xca87,	// (0x00027452) list_single_graphic_hl_pane_g3_cp2

0x6f97,	// (0x00021962) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x6f97,	// (0x00021962) list_single_graphic_hl_pane_g4_cp2

0xc85e,	// (0x00027229) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc85e,	// (0x00027229) list_single_graphic_hl_pane_g5_cp2

0x98bc,	// (0x00024287) control_pane_g4_ParamLimits

0x98bc,	// (0x00024287) control_pane_g4

0x6aca,	// (0x00021495) bg_popup_sub_pane_cp10_ParamLimits

0xc3c7,	// (0x00026d92) list_choice_list_pane_ParamLimits

0xc3d6,	// (0x00026da1) scroll_pane_cp23

0x6177,	// (0x00020b42) bg_popup_preview_window_pane_cp02_ParamLimits

0xc89a,	// (0x00027265) list_preview_fixed_pane_ParamLimits

0xc8b0,	// (0x0002727b) list_preview_fixed_pane_cp_ParamLimits

0xc8b0,	// (0x0002727b) list_preview_fixed_pane_cp

0xc8bc,	// (0x00027287) popup_preview_fixed_window_g1_ParamLimits

0xc8bc,	// (0x00027287) popup_preview_fixed_window_g1

0xc8c8,	// (0x00027293) popup_preview_fixed_window_g2_ParamLimits

0xc8c8,	// (0x00027293) popup_preview_fixed_window_g2

0x0002,

0xfb82,	// (0x0002a54d) popup_preview_fixed_window_g_ParamLimits

0xfb82,	// (0x0002a54d) popup_preview_fixed_window_g

0x92dc,	// (0x00023ca7) aid_navi_side_left_pane_ParamLimits

0x92ec,	// (0x00023cb7) aid_navi_side_right_pane_ParamLimits

0x92fb,	// (0x00023cc6) navi_icon_pane_stacon_ParamLimits

0x930b,	// (0x00023cd6) navi_navi_pane_stacon_ParamLimits

0x92fb,	// (0x00023cc6) navi_text_pane_stacon_ParamLimits

0x5f28,	// (0x000208f3) main_text_info_pane

0xcaa9,	// (0x00027474) listscroll_text_info_pane

0xcab1,	// (0x0002747c) list_text_info_pane_ParamLimits

0xcab1,	// (0x0002747c) list_text_info_pane

0xcac0,	// (0x0002748b) scroll_pane_cp24_ParamLimits

0xcac0,	// (0x0002748b) scroll_pane_cp24

0xe86f,	// (0x0002923a) list_text_info_pane_t1_ParamLimits

0xe86f,	// (0x0002923a) list_text_info_pane_t1

0x9a0e,	// (0x000243d9) popup_fast_swap2_window_ParamLimits

0x9a0e,	// (0x000243d9) popup_fast_swap2_window

0xcade,	// (0x000274a9) aid_size_cell_fast2

0x5f28,	// (0x000208f3) bg_popup_window_pane_cp17

0x79d1,	// (0x0002239c) heading_pane_cp2

0x6367,	// (0x00020d32) listscroll_fast2_pane

0xcae8,	// (0x000274b3) grid_fast2_pane

0xcaf0,	// (0x000274bb) listscroll_fast2_pane_g1

0xcaf8,	// (0x000274c3) listscroll_fast2_pane_g2

0x0001,

0xfc05,	// (0x0002a5d0) listscroll_fast2_pane_g

0x671b,	// (0x000210e6) scroll_pane_cp26

0xcb00,	// (0x000274cb) cell_fast2_pane_ParamLimits

0xcb00,	// (0x000274cb) cell_fast2_pane

0xcb16,	// (0x000274e1) cell_fast2_pane_g1

0xcb1f,	// (0x000274ea) cell_fast2_pane_g2

0xcb28,	// (0x000274f3) cell_fast2_pane_g3

0x0002,

0xfc0a,	// (0x0002a5d5) cell_fast2_pane_g

0x63c9,	// (0x00020d94) grid_highlight_pane_cp9

0x63de,	// (0x00020da9) main_eswt_pane_ParamLimits

0x63de,	// (0x00020da9) main_eswt_pane

0xcad5,	// (0x000274a0) list_single_text_info_pane

0xcb30,	// (0x000274fb) eswt_ctrl_button_pane

0xcb30,	// (0x000274fb) eswt_ctrl_canvas_pane

0xcb38,	// (0x00027503) eswt_ctrl_combo_pane

0xcb30,	// (0x000274fb) eswt_ctrl_default_pane

0xcb30,	// (0x000274fb) eswt_ctrl_label_pane

0xcb40,	// (0x0002750b) eswt_ctrl_wait_pane

0xcb48,	// (0x00027513) eswt_shell_pane

0x5f28,	// (0x000208f3) listscroll_eswt_app_pane

0xcb64,	// (0x0002752f) popup_eswt_tasktip_window_ParamLimits

0xcb64,	// (0x0002752f) popup_eswt_tasktip_window

0x7732,	// (0x000220fd) bg_popup_window_pane_cp18

0xcb75,	// (0x00027540) eswt_control_pane_g1_ParamLimits

0xcb75,	// (0x00027540) eswt_control_pane_g1

0xcb82,	// (0x0002754d) eswt_control_pane_g2_ParamLimits

0xcb82,	// (0x0002754d) eswt_control_pane_g2

0xcb8f,	// (0x0002755a) eswt_control_pane_g3_ParamLimits

0xcb8f,	// (0x0002755a) eswt_control_pane_g3

0xcb9c,	// (0x00027567) eswt_control_pane_g4_ParamLimits

0xcb9c,	// (0x00027567) eswt_control_pane_g4

0x0003,

0xfc11,	// (0x0002a5dc) eswt_control_pane_g_ParamLimits

0xfc11,	// (0x0002a5dc) eswt_control_pane_g

0x65b8,	// (0x00020f83) bg_button_pane_ParamLimits

0x65b8,	// (0x00020f83) bg_button_pane

0x63de,	// (0x00020da9) common_borders_pane_copy2_ParamLimits

0x63de,	// (0x00020da9) common_borders_pane_copy2

0xcba9,	// (0x00027574) control_button_pane_g1_ParamLimits

0xcba9,	// (0x00027574) control_button_pane_g1

0xcbb5,	// (0x00027580) control_button_pane_g2_ParamLimits

0xcbb5,	// (0x00027580) control_button_pane_g2

0xcbc1,	// (0x0002758c) control_button_pane_g3_ParamLimits

0xcbc1,	// (0x0002758c) control_button_pane_g3

0x0002,

0xfc1a,	// (0x0002a5e5) control_button_pane_g_ParamLimits

0xfc1a,	// (0x0002a5e5) control_button_pane_g

0xcbd5,	// (0x000275a0) control_button_pane_t1

0xcbe3,	// (0x000275ae) control_button_pane_t2

0x0001,

0xfc21,	// (0x0002a5ec) control_button_pane_t

0x7638,	// (0x00022003) bg_button_pane_g1

0x7640,	// (0x0002200b) bg_button_pane_g2

0x7648,	// (0x00022013) bg_button_pane_g3

0x7650,	// (0x0002201b) bg_button_pane_g4

0x7658,	// (0x00022023) bg_button_pane_g5

0x7660,	// (0x0002202b) bg_button_pane_g6

0x7668,	// (0x00022033) bg_button_pane_g7

0x7670,	// (0x0002203b) bg_button_pane_g8

0x7678,	// (0x00022043) bg_button_pane_g9

0x0008,

0xf872,	// (0x0002a23d) bg_button_pane_g

0xc382,	// (0x00026d4d) common_borders_pane_ParamLimits

0xc382,	// (0x00026d4d) common_borders_pane

0xcb75,	// (0x00027540) eswt_control_pane_g1_copy1_ParamLimits

0xcb75,	// (0x00027540) eswt_control_pane_g1_copy1

0xcb82,	// (0x0002754d) eswt_control_pane_g2_copy1_ParamLimits

0xcb82,	// (0x0002754d) eswt_control_pane_g2_copy1

0xcb8f,	// (0x0002755a) eswt_control_pane_g3_copy1_ParamLimits

0xcb8f,	// (0x0002755a) eswt_control_pane_g3_copy1

0xcb9c,	// (0x00027567) eswt_control_pane_g4_copy1_ParamLimits

0xcb9c,	// (0x00027567) eswt_control_pane_g4_copy1

0xc3bd,	// (0x00026d88) bg_eswt_ctrl_canvas_pane_g1

0xc382,	// (0x00026d4d) common_borders_pane_cp2_ParamLimits

0xc382,	// (0x00026d4d) common_borders_pane_cp2

0xc382,	// (0x00026d4d) common_borders_pane_cp3_ParamLimits

0xc382,	// (0x00026d4d) common_borders_pane_cp3

0xcbf1,	// (0x000275bc) separator_horizontal_pane

0x6b24,	// (0x000214ef) separator_vertical_pane

0xcb75,	// (0x00027540) eswt_control_pane_g1_copy2_ParamLimits

0xcb75,	// (0x00027540) eswt_control_pane_g1_copy2

0xcb82,	// (0x0002754d) eswt_control_pane_g2_copy2_ParamLimits

0xcb82,	// (0x0002754d) eswt_control_pane_g2_copy2

0xcb8f,	// (0x0002755a) eswt_control_pane_g3_copy2_ParamLimits

0xcb8f,	// (0x0002755a) eswt_control_pane_g3_copy2

0xcb9c,	// (0x00027567) eswt_control_pane_g4_copy2_ParamLimits

0xcb9c,	// (0x00027567) eswt_control_pane_g4_copy2

0x5f28,	// (0x000208f3) common_borders_pane_cp4

0xcbf9,	// (0x000275c4) separator_horizontal_pane_g1

0xcc02,	// (0x000275cd) separator_horizontal_pane_g2

0xcc0b,	// (0x000275d6) separator_horizontal_pane_g3

0x0002,

0xfc26,	// (0x0002a5f1) separator_horizontal_pane_g

0xcb75,	// (0x00027540) eswt_control_pane_g1_copy3_ParamLimits

0xcb75,	// (0x00027540) eswt_control_pane_g1_copy3

0xcb82,	// (0x0002754d) eswt_control_pane_g2_copy3_ParamLimits

0xcb82,	// (0x0002754d) eswt_control_pane_g2_copy3

0xcb8f,	// (0x0002755a) eswt_control_pane_g3_copy3_ParamLimits

0xcb8f,	// (0x0002755a) eswt_control_pane_g3_copy3

0xcb9c,	// (0x00027567) eswt_control_pane_g4_copy3_ParamLimits

0xcb9c,	// (0x00027567) eswt_control_pane_g4_copy3

0x5f28,	// (0x000208f3) common_borders_pane_cp5

0xcc14,	// (0x000275df) separator_vertical_pane_g1

0xcc1d,	// (0x000275e8) separator_vertical_pane_g2

0xcc26,	// (0x000275f1) separator_vertical_pane_g3

0x0002,

0xfc2d,	// (0x0002a5f8) separator_vertical_pane_g

0xcb75,	// (0x00027540) eswt_control_pane_g1_copy4_ParamLimits

0xcb75,	// (0x00027540) eswt_control_pane_g1_copy4

0xcb82,	// (0x0002754d) eswt_control_pane_g2_copy4_ParamLimits

0xcb82,	// (0x0002754d) eswt_control_pane_g2_copy4

0xcb8f,	// (0x0002755a) eswt_control_pane_g3_copy4_ParamLimits

0xcb8f,	// (0x0002755a) eswt_control_pane_g3_copy4

0xcb9c,	// (0x00027567) eswt_control_pane_g4_copy4_ParamLimits

0xcb9c,	// (0x00027567) eswt_control_pane_g4_copy4

0xe88c,	// (0x00029257) eswt_ctrl_combo_button_pane

0xe894,	// (0x0002925f) eswt_ctrl_input_pane

0xe89c,	// (0x00029267) popup_choice_list_window_cp70

0xe8a4,	// (0x0002926f) eswt_ctrl_input_pane_t1

0x5f28,	// (0x000208f3) input_focus_pane_cp70

0xc382,	// (0x00026d4d) bg_button_pane_cp70_ParamLimits

0xc382,	// (0x00026d4d) bg_button_pane_cp70

0xe8b2,	// (0x0002927d) eswt_ctrl_combo_button_pane_g1

0xcc2f,	// (0x000275fa) wait_bar_pane_cp70

0x7732,	// (0x000220fd) bg_popup_window_pane_cp70_ParamLimits

0x7732,	// (0x000220fd) bg_popup_window_pane_cp70

0xcc37,	// (0x00027602) popup_eswt_tasktip_window_t1

0xcc4d,	// (0x00027618) wait_bar_pane_cp71_ParamLimits

0xcc4d,	// (0x00027618) wait_bar_pane_cp71

0xcc59,	// (0x00027624) grid_eswt_app_pane

0x6b2d,	// (0x000214f8) scroll_pane_cp70

0xe8ba,	// (0x00029285) cell_eswt_app_pane_ParamLimits

0xe8ba,	// (0x00029285) cell_eswt_app_pane

0xe8e2,	// (0x000292ad) cell_eswt_app_pane_g1_ParamLimits

0xe8e2,	// (0x000292ad) cell_eswt_app_pane_g1

0xe911,	// (0x000292dc) cell_eswt_app_pane_g2_ParamLimits

0xe911,	// (0x000292dc) cell_eswt_app_pane_g2

0x0001,

0xfc34,	// (0x0002a5ff) cell_eswt_app_pane_g_ParamLimits

0xfc34,	// (0x0002a5ff) cell_eswt_app_pane_g

0xe93a,	// (0x00029305) cell_eswt_app_pane_t1_ParamLimits

0xe93a,	// (0x00029305) cell_eswt_app_pane_t1

0xcc62,	// (0x0002762d) grid_highlight_pane_cp70_ParamLimits

0xcc62,	// (0x0002762d) grid_highlight_pane_cp70

0x65d2,	// (0x00020f9d) set_content_pane_g1

0x7311,	// (0x00021cdc) status_small_volume_pane

0xa9cf,	// (0x0002539a) status_small_volume_pane_g1

0xa9d7,	// (0x000253a2) volume_small2_pane

0xa9e0,	// (0x000253ab) volume_small2_pane_g1

0xa9e9,	// (0x000253b4) volume_small2_pane_g2

0xa9f2,	// (0x000253bd) volume_small2_pane_g3

0xa9fb,	// (0x000253c6) volume_small2_pane_g4

0xaa04,	// (0x000253cf) volume_small2_pane_g5

0xaa0d,	// (0x000253d8) volume_small2_pane_g6

0xaa16,	// (0x000253e1) volume_small2_pane_g7

0xaa1f,	// (0x000253ea) volume_small2_pane_g8

0xaa28,	// (0x000253f3) volume_small2_pane_g9

0xaa31,	// (0x000253fc) volume_small2_pane_g10

0x0009,

0xfc39,	// (0x0002a604) volume_small2_pane_g

0xc6f2,	// (0x000270bd) fep_vkb_top_text_pane_g1_ParamLimits

0xe7be,	// (0x00029189) fep_vkb_top_text_pane_t1_ParamLimits

0xc8d4,	// (0x0002729f) popup_preview_fixed_window_g3_ParamLimits

0xc8d4,	// (0x0002729f) popup_preview_fixed_window_g3

0x9d42,	// (0x0002470d) popup_toolbar_trans_pane

0xe0a9,	// (0x00028a74) aid_height_set_list_ParamLimits

0xb818,	// (0x000261e3) aid_size_parent_ParamLimits

0x6aca,	// (0x00021495) list_highlight_pane_cp2_ParamLimits

0x65d2,	// (0x00020f9d) set_content_pane_g1_ParamLimits

0xe220,	// (0x00028beb) list_single_image_pane_ParamLimits

0xe220,	// (0x00028beb) list_single_image_pane

0xe96c,	// (0x00029337) aid_size_cell_image_ParamLimits

0xe96c,	// (0x00029337) aid_size_cell_image

0xe979,	// (0x00029344) grid_single_image_pane_ParamLimits

0xe979,	// (0x00029344) grid_single_image_pane

0x65d2,	// (0x00020f9d) list_single_image_pane_g1_ParamLimits

0x65d2,	// (0x00020f9d) list_single_image_pane_g1

0x65de,	// (0x00020fa9) list_single_image_pane_g2_ParamLimits

0x65de,	// (0x00020fa9) list_single_image_pane_g2

0x0001,

0xfc4e,	// (0x0002a619) list_single_image_pane_g_ParamLimits

0xfc4e,	// (0x0002a619) list_single_image_pane_g

0xcc6e,	// (0x00027639) list_single_image_pane_t1_ParamLimits

0xcc6e,	// (0x00027639) list_single_image_pane_t1

0xe985,	// (0x00029350) cell_image_list_pane_ParamLimits

0xe985,	// (0x00029350) cell_image_list_pane

0xe998,	// (0x00029363) cell_image_list_pane_g1

0xe9a1,	// (0x0002936c) cell_image_list_pane_g2

0x0001,

0xfc53,	// (0x0002a61e) cell_image_list_pane_g

0xcc84,	// (0x0002764f) aid_size_cell_tb_trans_pane

0x65b8,	// (0x00020f83) bg_tb_trans_pane

0xcc96,	// (0x00027661) grid_tb_trans_pane

0x7638,	// (0x00022003) bg_tb_trans_pane_g1

0x7640,	// (0x0002200b) bg_tb_trans_pane_g2

0x7648,	// (0x00022013) bg_tb_trans_pane_g3

0x7650,	// (0x0002201b) bg_tb_trans_pane_g4

0x7658,	// (0x00022023) bg_tb_trans_pane_g5

0x7670,	// (0x0002203b) bg_tb_trans_pane_g6

0x7678,	// (0x00022043) bg_tb_trans_pane_g7

0x7660,	// (0x0002202b) bg_tb_trans_pane_g8

0x7668,	// (0x00022033) bg_tb_trans_pane_g9

0x0008,

0xfc58,	// (0x0002a623) bg_tb_trans_pane_g

0xccaa,	// (0x00027675) cell_toolbar_trans_pane_ParamLimits

0xccaa,	// (0x00027675) cell_toolbar_trans_pane

0xc3bd,	// (0x00026d88) cell_toolbar_trans_pane_g1

0xe691,	// (0x0002905c) list_form2_midp_pane_t1

0xe69f,	// (0x0002906a) list_form2_midp_pane_t2

0x0001,

0xfaf5,	// (0x0002a4c0) list_form2_midp_pane_t

0xc119,	// (0x00026ae4) scroll_pane_cp51_ParamLimits

0xc28f,	// (0x00026c5a) form2_midp_wait_pane_g1

0xc298,	// (0x00026c63) form2_midp_wait_pane_g2

0xc2a1,	// (0x00026c6c) form2_midp_wait_pane_g3

0x0002,

0xfb0a,	// (0x0002a4d5) form2_midp_wait_pane_g

0x6018,	// (0x000209e3) list_highlight_pane_cp21_ParamLimits

0xc2c1,	// (0x00026c8c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc2d0,	// (0x00026c9b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd629,	// (0x00027ff4) list_single_2graphic_im_pane_ParamLimits

0xd629,	// (0x00027ff4) list_single_2graphic_im_pane

0xe9aa,	// (0x00029375) list_single_2graphic_im_pane_g1_ParamLimits

0xe9aa,	// (0x00029375) list_single_2graphic_im_pane_g1

0xe9bb,	// (0x00029386) list_single_2graphic_im_pane_g2_ParamLimits

0xe9bb,	// (0x00029386) list_single_2graphic_im_pane_g2

0xe9c7,	// (0x00029392) list_single_2graphic_im_pane_g3_ParamLimits

0xe9c7,	// (0x00029392) list_single_2graphic_im_pane_g3

0x0003,

0xfc6b,	// (0x0002a636) list_single_2graphic_im_pane_g_ParamLimits

0xfc6b,	// (0x0002a636) list_single_2graphic_im_pane_g

0xe9db,	// (0x000293a6) list_single_2graphic_im_pane_t1_ParamLimits

0xe9db,	// (0x000293a6) list_single_2graphic_im_pane_t1

0xc8e0,	// (0x000272ab) list_single_graphic_2heading_pane_fp_ParamLimits

0xc8e0,	// (0x000272ab) list_single_graphic_2heading_pane_fp

0xd906,	// (0x000282d1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd906,	// (0x000282d1) list_single_graphic_2heading_pane_fp_g1

0xc8f4,	// (0x000272bf) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc8f4,	// (0x000272bf) list_single_graphic_2heading_pane_fp_g2

0xd17b,	// (0x00027b46) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd17b,	// (0x00027b46) list_single_graphic_2heading_pane_fp_g3

0xd8db,	// (0x000282a6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd8db,	// (0x000282a6) list_single_graphic_2heading_pane_fp_g4

0xc900,	// (0x000272cb) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc900,	// (0x000272cb) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb92,	// (0x0002a55d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb92,	// (0x0002a55d) list_single_graphic_2heading_pane_fp_g

0xe3bd,	// (0x00028d88) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe3bd,	// (0x00028d88) list_single_graphic_2heading_pane_fp_t1

0xd93e,	// (0x00028309) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd93e,	// (0x00028309) list_single_graphic_2heading_pane_fp_t2

0xe3d3,	// (0x00028d9e) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe3d3,	// (0x00028d9e) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc74,	// (0x0002a63f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc74,	// (0x0002a63f) list_single_graphic_2heading_pane_fp_t

0xc448,	// (0x00026e13) fep_hwr_write_pane_g5_ParamLimits

0xc448,	// (0x00026e13) fep_hwr_write_pane_g5

0xc454,	// (0x00026e1f) fep_hwr_write_pane_g6_ParamLimits

0xc454,	// (0x00026e1f) fep_hwr_write_pane_g6

0xcb48,	// (0x00027513) eswt_shell_pane_ParamLimits

0x7732,	// (0x000220fd) bg_popup_window_pane_cp18_ParamLimits

0xb7bc,	// (0x00026187) heading_pane_cp70

0xcc37,	// (0x00027602) popup_eswt_tasktip_window_t1_ParamLimits

0x9dcf,	// (0x0002479a) aid_touch_tab_arrow_left

0x9ddb,	// (0x000247a6) aid_touch_tab_arrow_right

0x8e9d,	// (0x00023868) title_pane_g3_ParamLimits

0x8e9d,	// (0x00023868) title_pane_g3

0x6588,	// (0x00020f53) set_value_pane_g1

0x9d42,	// (0x0002470d) popup_toolbar_trans_pane_ParamLimits

0xcc84,	// (0x0002764f) aid_size_cell_tb_trans_pane_ParamLimits

0x65b8,	// (0x00020f83) bg_tb_trans_pane_ParamLimits

0xcc96,	// (0x00027661) grid_tb_trans_pane_ParamLimits

0x6177,	// (0x00020b42) cont_note_pane_ParamLimits

0x6177,	// (0x00020b42) cont_note_pane

0x63de,	// (0x00020da9) cont_snote2_single_text_pane_ParamLimits

0x63de,	// (0x00020da9) cont_snote2_single_text_pane

0x63de,	// (0x00020da9) cont_snote2_single_graphic_pane_ParamLimits

0x63de,	// (0x00020da9) cont_snote2_single_graphic_pane

0x7bdb,	// (0x000225a6) cont_note_wait_pane_ParamLimits

0x7bdb,	// (0x000225a6) cont_note_wait_pane

0x7bdb,	// (0x000225a6) cont_note_image_pane_ParamLimits

0x7bdb,	// (0x000225a6) cont_note_image_pane

0xccdc,	// (0x000276a7) popup_note2_window_g1_ParamLimits

0xccdc,	// (0x000276a7) popup_note2_window_g1

0xcd0d,	// (0x000276d8) popup_note2_window_t1_ParamLimits

0xcd0d,	// (0x000276d8) popup_note2_window_t1

0xcd52,	// (0x0002771d) popup_note2_window_t2_ParamLimits

0xcd52,	// (0x0002771d) popup_note2_window_t2

0xda50,	// (0x0002841b) popup_note2_window_t3_ParamLimits

0xda50,	// (0x0002841b) popup_note2_window_t3

0xda95,	// (0x00028460) popup_note2_window_t4_ParamLimits

0xda95,	// (0x00028460) popup_note2_window_t4

0x61fb,	// (0x00020bc6) popup_note2_window_t5_ParamLimits

0x61fb,	// (0x00020bc6) popup_note2_window_t5

0x0004,

0xfc80,	// (0x0002a64b) popup_note2_window_t_ParamLimits

0xfc80,	// (0x0002a64b) popup_note2_window_t

0xdac4,	// (0x0002848f) popup_note2_image_window_g1_ParamLimits

0xdac4,	// (0x0002848f) popup_note2_image_window_g1

0xdad0,	// (0x0002849b) popup_note2_image_window_g2_ParamLimits

0xdad0,	// (0x0002849b) popup_note2_image_window_g2

0x0001,

0xfc8b,	// (0x0002a656) popup_note2_image_window_g_ParamLimits

0xfc8b,	// (0x0002a656) popup_note2_image_window_g

0xdae2,	// (0x000284ad) popup_note2_image_window_t1_ParamLimits

0xdae2,	// (0x000284ad) popup_note2_image_window_t1

0xdafa,	// (0x000284c5) popup_note2_image_window_t2_ParamLimits

0xdafa,	// (0x000284c5) popup_note2_image_window_t2

0xdb12,	// (0x000284dd) popup_note2_image_window_t3_ParamLimits

0xdb12,	// (0x000284dd) popup_note2_image_window_t3

0x0002,

0xfc90,	// (0x0002a65b) popup_note2_image_window_t_ParamLimits

0xfc90,	// (0x0002a65b) popup_note2_image_window_t

0x7be9,	// (0x000225b4) popup_note2_wait_window_g1_ParamLimits

0x7be9,	// (0x000225b4) popup_note2_wait_window_g1

0x7bf5,	// (0x000225c0) popup_note2_wait_window_g2_ParamLimits

0x7bf5,	// (0x000225c0) popup_note2_wait_window_g2

0x7c01,	// (0x000225cc) popup_note2_wait_window_g3_ParamLimits

0x7c01,	// (0x000225cc) popup_note2_wait_window_g3

0x0002,

0xf854,	// (0x0002a21f) popup_note2_wait_window_g_ParamLimits

0xf854,	// (0x0002a21f) popup_note2_wait_window_g

0xdb2e,	// (0x000284f9) popup_note2_wait_window_t1_ParamLimits

0xdb2e,	// (0x000284f9) popup_note2_wait_window_t1

0xdb4c,	// (0x00028517) popup_note2_wait_window_t2_ParamLimits

0xdb4c,	// (0x00028517) popup_note2_wait_window_t2

0xdb6a,	// (0x00028535) popup_note2_wait_window_t3_ParamLimits

0xdb6a,	// (0x00028535) popup_note2_wait_window_t3

0xdb7c,	// (0x00028547) popup_note2_wait_window_t4_ParamLimits

0xdb7c,	// (0x00028547) popup_note2_wait_window_t4

0x0003,

0xfc97,	// (0x0002a662) popup_note2_wait_window_t_ParamLimits

0xfc97,	// (0x0002a662) popup_note2_wait_window_t

0xdb8e,	// (0x00028559) wait_bar2_pane_ParamLimits

0xdb8e,	// (0x00028559) wait_bar2_pane

0xdba6,	// (0x00028571) popup_snote2_single_text_window_g1_ParamLimits

0xdba6,	// (0x00028571) popup_snote2_single_text_window_g1

0xdbce,	// (0x00028599) popup_snote2_single_text_window_t1_ParamLimits

0xdbce,	// (0x00028599) popup_snote2_single_text_window_t1

0xdc1a,	// (0x000285e5) popup_snote2_single_text_window_t2_ParamLimits

0xdc1a,	// (0x000285e5) popup_snote2_single_text_window_t2

0xdc66,	// (0x00028631) popup_snote2_single_text_window_t3_ParamLimits

0xdc66,	// (0x00028631) popup_snote2_single_text_window_t3

0xdca7,	// (0x00028672) popup_snote2_single_text_window_t4_ParamLimits

0xdca7,	// (0x00028672) popup_snote2_single_text_window_t4

0xdcdd,	// (0x000286a8) popup_snote2_single_text_window_t5_ParamLimits

0xdcdd,	// (0x000286a8) popup_snote2_single_text_window_t5

0x0004,

0xfca0,	// (0x0002a66b) popup_snote2_single_text_window_t_ParamLimits

0xfca0,	// (0x0002a66b) popup_snote2_single_text_window_t

0xdd08,	// (0x000286d3) popup_snote2_single_graphic_window_g1_ParamLimits

0xdd08,	// (0x000286d3) popup_snote2_single_graphic_window_g1

0xdd30,	// (0x000286fb) popup_snote2_single_graphic_window_g2_ParamLimits

0xdd30,	// (0x000286fb) popup_snote2_single_graphic_window_g2

0x0001,

0xfcab,	// (0x0002a676) popup_snote2_single_graphic_window_g_ParamLimits

0xfcab,	// (0x0002a676) popup_snote2_single_graphic_window_g

0xdd58,	// (0x00028723) popup_snote2_single_graphic_window_t1_ParamLimits

0xdd58,	// (0x00028723) popup_snote2_single_graphic_window_t1

0xdda4,	// (0x0002876f) popup_snote2_single_graphic_window_t2_ParamLimits

0xdda4,	// (0x0002876f) popup_snote2_single_graphic_window_t2

0xdc66,	// (0x00028631) popup_snote2_single_graphic_window_t3_ParamLimits

0xdc66,	// (0x00028631) popup_snote2_single_graphic_window_t3

0xdca7,	// (0x00028672) popup_snote2_single_graphic_window_t4_ParamLimits

0xdca7,	// (0x00028672) popup_snote2_single_graphic_window_t4

0xdcdd,	// (0x000286a8) popup_snote2_single_graphic_window_t5_ParamLimits

0xdcdd,	// (0x000286a8) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb0,	// (0x0002a67b) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb0,	// (0x0002a67b) popup_snote2_single_graphic_window_t

0xc0b2,	// (0x00026a7d) clock_nsta_pane_cp2_t1

0xc0b2,	// (0x00026a7d) clock_nsta_pane_cp2_t2

0x0001,

0xfacb,	// (0x0002a496) clock_nsta_pane_cp2_t

0xd327,	// (0x00027cf2) form_field_data_wide_pane_g1_ParamLimits

0x65d2,	// (0x00020f9d) form_field_data_wide_pane_g2_ParamLimits

0x65d2,	// (0x00020f9d) form_field_data_wide_pane_g2

0x65de,	// (0x00020fa9) form_field_data_wide_pane_g3_ParamLimits

0x65de,	// (0x00020fa9) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x0002a05d) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x0002a05d) form_field_data_wide_pane_g

0xe591,	// (0x00028f5c) grid_touch_3_pane_ParamLimits

0xe591,	// (0x00028f5c) grid_touch_3_pane

0xea0c,	// (0x000293d7) cell_touch_3_pane_ParamLimits

0xea0c,	// (0x000293d7) cell_touch_3_pane

0xc3bd,	// (0x00026d88) cell_touch_3_pane_g1

0xc3bd,	// (0x00026d88) cell_touch_3_pane_g2

0x0001,

0xfb50,	// (0x0002a51b) cell_touch_3_pane_g

0x622d,	// (0x00020bf8) cont_query_data_pane

0x6235,	// (0x00020c00) cont_query_data_pane_cp1

0xddf0,	// (0x000287bb) button_value_adjust_pane_cp7

0xddf8,	// (0x000287c3) query_popup_pane_cp3

0x6cd0,	// (0x0002169b) bg_popup_sub_pane_cp22_ParamLimits

0x9545,	// (0x00023f10) navi_navi_volume_pane_cp2

0x955d,	// (0x00023f28) popup_side_volume_key_window_g2

0x9569,	// (0x00023f34) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0002a0ef) popup_side_volume_key_window_g

0x9583,	// (0x00023f4e) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0002a0f6) popup_side_volume_key_window_t

0x6f1a,	// (0x000218e5) popup_side_volume_key_window_ParamLimits

0xcfc2,	// (0x0002798d) list_double_graphic_pane_g4_ParamLimits

0xcfc2,	// (0x0002798d) list_double_graphic_pane_g4

0xe1f4,	// (0x00028bbf) list_single_2heading_msg_pane_ParamLimits

0xe1f4,	// (0x00028bbf) list_single_2heading_msg_pane

0xe3f1,	// (0x00028dbc) list_single_2heading_msg_pane_g1_ParamLimits

0xe3f1,	// (0x00028dbc) list_single_2heading_msg_pane_g1

0xce23,	// (0x000277ee) list_single_2heading_msg_pane_g2_ParamLimits

0xce23,	// (0x000277ee) list_single_2heading_msg_pane_g2

0xe3fd,	// (0x00028dc8) list_single_2heading_msg_pane_g3_ParamLimits

0xe3fd,	// (0x00028dc8) list_single_2heading_msg_pane_g3

0xe409,	// (0x00028dd4) list_single_2heading_msg_pane_g4_ParamLimits

0xe409,	// (0x00028dd4) list_single_2heading_msg_pane_g4

0x0003,

0xfcbb,	// (0x0002a686) list_single_2heading_msg_pane_g_ParamLimits

0xfcbb,	// (0x0002a686) list_single_2heading_msg_pane_g

0xe421,	// (0x00028dec) list_single_2heading_msg_pane_t1_ParamLimits

0xe421,	// (0x00028dec) list_single_2heading_msg_pane_t1

0xe449,	// (0x00028e14) list_single_2heading_msg_pane_t2_ParamLimits

0xe449,	// (0x00028e14) list_single_2heading_msg_pane_t2

0xe47d,	// (0x00028e48) list_single_2heading_msg_pane_t3_ParamLimits

0xe47d,	// (0x00028e48) list_single_2heading_msg_pane_t3

0xe4b6,	// (0x00028e81) list_single_2heading_msg_pane_t4_ParamLimits

0xe4b6,	// (0x00028e81) list_single_2heading_msg_pane_t4

0x0003,

0xfcc4,	// (0x0002a68f) list_single_2heading_msg_pane_t_ParamLimits

0xfcc4,	// (0x0002a68f) list_single_2heading_msg_pane_t

0x5fbe,	// (0x00020989) title_pane_g4_ParamLimits

0x5fbe,	// (0x00020989) title_pane_g4

0x9252,	// (0x00023c1d) title_pane_stacon_g3_ParamLimits

0x9252,	// (0x00023c1d) title_pane_stacon_g3

0xccd0,	// (0x0002769b) list_single_2graphic_im_pane_g4_ParamLimits

0xccd0,	// (0x0002769b) list_single_2graphic_im_pane_g4

0xb5d2,	// (0x00025f9d) popup_side_volume_key_window_cp

0xba38,	// (0x00026403) main_idle_act2_pane_t1

0xa0b8,	// (0x00024a83) toolbar_button_pane_g10

0x91ab,	// (0x00023b76) popup_toolbar_window_cp1

0xc0a3,	// (0x00026a6e) clock_nsta_pane_cp_t1

0xc0a3,	// (0x00026a6e) clock_nsta_pane_cp_t2

0x0001,

0xfac6,	// (0x0002a491) clock_nsta_pane_cp_t

0x9545,	// (0x00023f10) navi_navi_volume_pane_cp2_ParamLimits

0x9551,	// (0x00023f1c) popup_side_volume_key_window_g1_ParamLimits

0x955d,	// (0x00023f28) popup_side_volume_key_window_g2_ParamLimits

0x9569,	// (0x00023f34) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0002a0ef) popup_side_volume_key_window_g_ParamLimits

0xa64f,	// (0x0002501a) fep_hwr_aid_pane

0xa6f0,	// (0x000250bb) bg_fep_hwr_top_pane_g4_ParamLimits

0xc418,	// (0x00026de3) fep_hwr_top_pane_g1_ParamLimits

0xc42a,	// (0x00026df5) fep_hwr_top_pane_g2_ParamLimits

0xa710,	// (0x000250db) fep_hwr_top_pane_g3_ParamLimits

0xfb1b,	// (0x0002a4e6) fep_hwr_top_pane_g_ParamLimits

0xa725,	// (0x000250f0) fep_hwr_top_text_pane_ParamLimits

0xb39d,	// (0x00025d68) aid_touch_tab_arrow_arrow_2

0xb3a6,	// (0x00025d71) aid_touch_tab_arrow_left_2

0xa663,	// (0x0002502e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xa696,	// (0x00025061) fep_hwr_prediction_pane

0xc55d,	// (0x00026f28) fep_vkb_prediction_pane

0xe79b,	// (0x00029166) fep_vkb_side_pane_g3_ParamLimits

0xe79b,	// (0x00029166) fep_vkb_side_pane_g3

0xa894,	// (0x0002525f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xa8fe,	// (0x000252c9) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xa90b,	// (0x000252d6) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbca,	// (0x0002a595) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xaa3a,	// (0x00025405) fep_hwr_prediction_pane_g1

0xaa44,	// (0x0002540f) fep_hwr_prediction_pane_g2

0xaa4c,	// (0x00025417) fep_hwr_prediction_pane_g3

0xaa54,	// (0x0002541f) fep_hwr_prediction_pane_g4

0x0003,

0xfccd,	// (0x0002a698) fep_hwr_prediction_pane_g

0xde09,	// (0x000287d4) fep_vkb_prediction_pane_g1

0xde13,	// (0x000287de) fep_vkb_prediction_pane_g2

0xde1b,	// (0x000287e6) fep_vkb_prediction_pane_g3

0xde23,	// (0x000287ee) fep_vkb_prediction_pane_g4

0x0003,

0xfcd6,	// (0x0002a6a1) fep_vkb_prediction_pane_g

0xa487,	// (0x00024e52) slider_set_pane_g3

0xa49b,	// (0x00024e66) slider_set_pane_g4

0xa4b3,	// (0x00024e7e) slider_set_pane_g5

0xa487,	// (0x00024e52) slider_set_pane_g6

0xa4c9,	// (0x00024e94) slider_set_pane_g7

0xb83b,	// (0x00026206) slider_form_pane_g3

0xb844,	// (0x0002620f) slider_form_pane_g4

0xb84c,	// (0x00026217) slider_form_pane_g5

0xb83b,	// (0x00026206) slider_form_pane_g6

0xe1d9,	// (0x00028ba4) slider_form_pane_g7

0xbc81,	// (0x0002664c) slider_set_pane_vc_g3

0xbc8a,	// (0x00026655) slider_set_pane_vc_g4

0xbc93,	// (0x0002665e) slider_set_pane_vc_g5

0xbc81,	// (0x0002664c) slider_set_pane_vc_g6

0xbc9c,	// (0x00026667) slider_set_pane_vc_g7

0xbc81,	// (0x0002664c) slider_form_pane_vc_g1

0xbc8a,	// (0x00026655) slider_form_pane_vc_g2

0xbc93,	// (0x0002665e) slider_form_pane_vc_g3

0xbc81,	// (0x0002664c) slider_form_pane_vc_g4

0xbe30,	// (0x000267fb) slider_form_pane_vc_g5

0x0004,

0xfa9f,	// (0x0002a46a) slider_form_pane_vc_g

0x5f28,	// (0x000208f3) main_idle_act3_pane

0xde2b,	// (0x000287f6) ai3_links_pane

0xea4d,	// (0x00029418) popup_ai3_data_window_ParamLimits

0xea4d,	// (0x00029418) popup_ai3_data_window

0x5f28,	// (0x000208f3) grid_ai3_links_pane

0xea65,	// (0x00029430) cell_ai3_links_pane_ParamLimits

0xea65,	// (0x00029430) cell_ai3_links_pane

0xde34,	// (0x000287ff) bg_popup_sub_pane_cp11

0xde41,	// (0x0002880c) cell_ai3_links_pane_g1

0x5f28,	// (0x000208f3) bg_popup_sub_pane_cp12

0xde66,	// (0x00028831) heading_ai3_data_pane

0xde6e,	// (0x00028839) list_ai3_gene_pane

0xde7a,	// (0x00028845) popup_ai3_data_window_g1

0xde82,	// (0x0002884d) heading_ai3_data_pane_g1

0xde8a,	// (0x00028855) heading_ai3_data_pane_t1

0xde98,	// (0x00028863) list_double_ai3_gene_pane_ParamLimits

0xde98,	// (0x00028863) list_double_ai3_gene_pane

0xdea5,	// (0x00028870) list_single_ai3_gene_pane_ParamLimits

0xdea5,	// (0x00028870) list_single_ai3_gene_pane

0xc382,	// (0x00026d4d) list_highlight_pane_cp7_ParamLimits

0xc382,	// (0x00026d4d) list_highlight_pane_cp7

0xdeb2,	// (0x0002887d) list_single_a13_gene_pane_t1_ParamLimits

0xdeb2,	// (0x0002887d) list_single_a13_gene_pane_t1

0xdec9,	// (0x00028894) list_single_ai3_gene_pane_g1

0xded2,	// (0x0002889d) list_single_ai3_gene_pane_g2

0x0001,

0xfcdf,	// (0x0002a6aa) list_single_ai3_gene_pane_g

0xdeda,	// (0x000288a5) list_double_ai3_gene_pane_g1_ParamLimits

0xdeda,	// (0x000288a5) list_double_ai3_gene_pane_g1

0xdee6,	// (0x000288b1) list_double_ai3_gene_pane_t1_ParamLimits

0xdee6,	// (0x000288b1) list_double_ai3_gene_pane_t1

0xdf02,	// (0x000288cd) list_double_ai3_gene_pane_t2_ParamLimits

0xdf02,	// (0x000288cd) list_double_ai3_gene_pane_t2

0xdf17,	// (0x000288e2) list_double_ai3_gene_pane_t3_ParamLimits

0xdf17,	// (0x000288e2) list_double_ai3_gene_pane_t3

0x0002,

0xfce4,	// (0x0002a6af) list_double_ai3_gene_pane_t_ParamLimits

0xfce4,	// (0x0002a6af) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe3e9,	// (0x00028db4) aid_size_min_col_2

0xea39,	// (0x00029404) aid_size_min_msg_ParamLimits

0xea39,	// (0x00029404) aid_size_min_msg

0xe7af,	// (0x0002917a) fep_vkb_top_text_pane_g2_ParamLimits

0xe7af,	// (0x0002917a) fep_vkb_top_text_pane_g2

0x0001,

0xfb4b,	// (0x0002a516) fep_vkb_top_text_pane_g_ParamLimits

0xfb4b,	// (0x0002a516) fep_vkb_top_text_pane_g

0x5f28,	// (0x000208f3) main_hc_apps_shell_pane

0xdf34,	// (0x000288ff) grid_hc_apps_pane_ParamLimits

0xdf34,	// (0x000288ff) grid_hc_apps_pane

0xdf43,	// (0x0002890e) list_hc_apps_pane

0xdf4b,	// (0x00028916) scroll_pane_cp37_ParamLimits

0xdf4b,	// (0x00028916) scroll_pane_cp37

0xea79,	// (0x00029444) cell_hc_apps_pane_ParamLimits

0xea79,	// (0x00029444) cell_hc_apps_pane

0xeb07,	// (0x000294d2) cell_hc_apps_pane_g1_ParamLimits

0xeb07,	// (0x000294d2) cell_hc_apps_pane_g1

0xdf57,	// (0x00028922) cell_hc_apps_pane_g2_ParamLimits

0xdf57,	// (0x00028922) cell_hc_apps_pane_g2

0xdf73,	// (0x0002893e) cell_hc_apps_pane_g3_ParamLimits

0xdf73,	// (0x0002893e) cell_hc_apps_pane_g3

0x0002,

0xfceb,	// (0x0002a6b6) cell_hc_apps_pane_g_ParamLimits

0xfceb,	// (0x0002a6b6) cell_hc_apps_pane_g

0xeb34,	// (0x000294ff) cell_hc_apps_pane_t1_ParamLimits

0xeb34,	// (0x000294ff) cell_hc_apps_pane_t1

0x6177,	// (0x00020b42) grid_highlight_pane_cp10_ParamLimits

0x6177,	// (0x00020b42) grid_highlight_pane_cp10

0xeb72,	// (0x0002953d) list_single_hc_apps_pane_ParamLimits

0xeb72,	// (0x0002953d) list_single_hc_apps_pane

0xeba2,	// (0x0002956d) list_single_hc_apps_pane_g1

0xe4db,	// (0x00028ea6) list_single_hc_apps_pane_g2

0x0001,

0xfcf2,	// (0x0002a6bd) list_single_hc_apps_pane_g

0xe4f4,	// (0x00028ebf) list_single_hc_apps_pane_g2_copy1

0xe510,	// (0x00028edb) list_single_hc_apps_pane_t1

0x6018,	// (0x000209e3) bg_set_opt_pane_cp_ParamLimits

0x8f45,	// (0x00023910) setting_slider_pane_t1_ParamLimits

0x8f5b,	// (0x00023926) setting_slider_pane_t2_ParamLimits

0x8f74,	// (0x0002393f) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x00029f45) setting_slider_pane_t_ParamLimits

0x8f8b,	// (0x00023956) slider_set_pane_ParamLimits

0x98d1,	// (0x0002429c) control_pane_g5_ParamLimits

0x98d1,	// (0x0002429c) control_pane_g5

0xb803,	// (0x000261ce) slider_set_pane_g1_ParamLimits

0xa47b,	// (0x00024e46) slider_set_pane_g2_ParamLimits

0xa487,	// (0x00024e52) slider_set_pane_g3_ParamLimits

0xa49b,	// (0x00024e66) slider_set_pane_g4_ParamLimits

0xa4b3,	// (0x00024e7e) slider_set_pane_g5_ParamLimits

0xa487,	// (0x00024e52) slider_set_pane_g6_ParamLimits

0xa4c9,	// (0x00024e94) slider_set_pane_g7_ParamLimits

0xf970,	// (0x0002a33b) slider_set_pane_g_ParamLimits

0x6018,	// (0x000209e3) navi_icon_text_pane_ParamLimits

0x9da9,	// (0x00024774) aid_fill_nsta_2_ParamLimits

0x9dcf,	// (0x0002479a) aid_touch_tab_arrow_left_ParamLimits

0x9ddb,	// (0x000247a6) aid_touch_tab_arrow_right_ParamLimits

0x9e45,	// (0x00024810) clock_nsta_pane_ParamLimits

0xb37f,	// (0x00025d4a) navi_icon_pane_g1_ParamLimits

0xb38b,	// (0x00025d56) navi_text_pane_t1_ParamLimits

0xc0f3,	// (0x00026abe) navi_icon_text_pane_g1_ParamLimits

0xc0ff,	// (0x00026aca) navi_icon_text_pane_t1_ParamLimits

0xeba2,	// (0x0002956d) list_single_hc_apps_pane_g1_ParamLimits

0xe4db,	// (0x00028ea6) list_single_hc_apps_pane_g2_ParamLimits

0xfcf2,	// (0x0002a6bd) list_single_hc_apps_pane_g_ParamLimits

0xe4f4,	// (0x00028ebf) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xe510,	// (0x00028edb) list_single_hc_apps_pane_t1_ParamLimits

0x8db9,	// (0x00023784) popup_toolbar2_fixed_window_ParamLimits

0x8db9,	// (0x00023784) popup_toolbar2_fixed_window

0x9d3a,	// (0x00024705) popup_toolbar2_float_window

0x5f28,	// (0x000208f3) bg_popup_sub_pane_cp27

0xebbb,	// (0x00029586) grid_toolbar2_float_pane

0x5f28,	// (0x000208f3) bg_popup_sub_pane_cp26

0xebbb,	// (0x00029586) grid_toolbar2_fixed_pane

0xebc3,	// (0x0002958e) cell_toolbar2_fixed_pane_ParamLimits

0xebc3,	// (0x0002958e) cell_toolbar2_fixed_pane

0xebd4,	// (0x0002959f) cell_toolbar2_fixed_pane_g1

0xebdd,	// (0x000295a8) toolbar2_fixed_button_pane

0x7638,	// (0x00022003) toolbar2_fixed_button_pane_g1

0x7640,	// (0x0002200b) toolbar2_fixed_button_pane_g2

0x7648,	// (0x00022013) toolbar2_fixed_button_pane_g3

0x7650,	// (0x0002201b) toolbar2_fixed_button_pane_g4

0x7658,	// (0x00022023) toolbar2_fixed_button_pane_g5

0x7660,	// (0x0002202b) toolbar2_fixed_button_pane_g6

0x7668,	// (0x00022033) toolbar2_fixed_button_pane_g7

0x7670,	// (0x0002203b) toolbar2_fixed_button_pane_g8

0x7678,	// (0x00022043) toolbar2_fixed_button_pane_g9

0x0008,

0xf872,	// (0x0002a23d) toolbar2_fixed_button_pane_g

0xebe5,	// (0x000295b0) cell_toolbar2_float_pane_ParamLimits

0xebe5,	// (0x000295b0) cell_toolbar2_float_pane

0xebf6,	// (0x000295c1) cell_toolbar2_float_pane_g1

0xebdd,	// (0x000295a8) toolbar2_fixed_button_pane_cp

0xe768,	// (0x00029133) fep_vkb_accented_list_pane_ParamLimits

0xe768,	// (0x00029133) fep_vkb_accented_list_pane

0xa874,	// (0x0002523f) bg_popup_fep_shadow_pane_g9

0x7122,	// (0x00021aed) bg_popup_fep_shadow_pane_cp3

0x6702,	// (0x000210cd) list_accented_list_pane

0xebff,	// (0x000295ca) list_single_accented_list_pane_ParamLimits

0xebff,	// (0x000295ca) list_single_accented_list_pane

0x7122,	// (0x00021aed) list_highlight_pane_cp10

0xec10,	// (0x000295db) list_single_accented_list_pane_t1

0x9ca8,	// (0x00024673) popup_slider_window_ParamLimits

0x9ca8,	// (0x00024673) popup_slider_window

0xde00,	// (0x000287cb) aid_indentation_list_msg

0xecb0,	// (0x0002967b) bg_popup_window_pane_cp19

0xed14,	// (0x000296df) popup_slider_window_g1

0xed30,	// (0x000296fb) popup_slider_window_g2

0xed4c,	// (0x00029717) popup_slider_window_g3

0x0005,

0xfcf7,	// (0x0002a6c2) popup_slider_window_g

0xeda8,	// (0x00029773) popup_slider_window_t1

0xee1a,	// (0x000297e5) small_volume_slider_vertical_pane

0xc3bd,	// (0x00026d88) small_volume_slider_vertical_pane_g1

0xc3bd,	// (0x00026d88) small_volume_slider_vertical_pane_g2

0xee36,	// (0x00029801) small_volume_slider_vertical_pane_g3

0x0002,

0xfd09,	// (0x0002a6d4) small_volume_slider_vertical_pane_g

0x8c2d,	// (0x000235f8) area_side_right_pane_ParamLimits

0x8c2d,	// (0x000235f8) area_side_right_pane

0xaa5c,	// (0x00025427) aid_size_side_button_ParamLimits

0xaa5c,	// (0x00025427) aid_size_side_button

0xaa70,	// (0x0002543b) grid_sctrl_middle_pane_ParamLimits

0xaa70,	// (0x0002543b) grid_sctrl_middle_pane

0xaa8c,	// (0x00025457) sctrl_sk_bottom_pane

0xaa9d,	// (0x00025468) sctrl_sk_top_pane

0xaaaf,	// (0x0002547a) aid_touch_sctrl_top

0xaabc,	// (0x00025487) bg_sctrl_sk_pane_ParamLimits

0xaabc,	// (0x00025487) bg_sctrl_sk_pane

0xaaca,	// (0x00025495) sctrl_sk_top_pane_g1

0xaad7,	// (0x000254a2) sctrl_sk_top_pane_t1

0xaaaf,	// (0x0002547a) aid_touch_sctrl_bottom

0xaabc,	// (0x00025487) bg_sctrl_sk_pane_cp_ParamLimits

0xaabc,	// (0x00025487) bg_sctrl_sk_pane_cp

0xaaf2,	// (0x000254bd) sctrl_sk_bottom_pane_g1

0xaad7,	// (0x000254a2) sctrl_sk_bottom_pane_t1

0xaafb,	// (0x000254c6) cell_sctrl_middle_pane_ParamLimits

0xaafb,	// (0x000254c6) cell_sctrl_middle_pane

0xab16,	// (0x000254e1) aid_touch_sctrl_middle_ParamLimits

0xab16,	// (0x000254e1) aid_touch_sctrl_middle

0xab27,	// (0x000254f2) bg_sctrl_middle_pane_ParamLimits

0xab27,	// (0x000254f2) bg_sctrl_middle_pane

0xa894,	// (0x0002525f) cell_sctrl_middle_pane_g1_ParamLimits

0xa894,	// (0x0002525f) cell_sctrl_middle_pane_g1

0xab35,	// (0x00025500) cell_sctrl_middle_pane_g2_ParamLimits

0xab35,	// (0x00025500) cell_sctrl_middle_pane_g2

0x0001,

0xfd15,	// (0x0002a6e0) cell_sctrl_middle_pane_g_ParamLimits

0xfd15,	// (0x0002a6e0) cell_sctrl_middle_pane_g

0x7638,	// (0x00022003) bg_sctrl_middle_pane_g1

0x7648,	// (0x00022013) bg_sctrl_middle_pane_g2

0x7640,	// (0x0002200b) bg_sctrl_middle_pane_g3

0x7658,	// (0x00022023) bg_sctrl_middle_pane_g4

0x7650,	// (0x0002201b) bg_sctrl_middle_pane_g5

0x7660,	// (0x0002202b) bg_sctrl_middle_pane_g6

0x7668,	// (0x00022033) bg_sctrl_middle_pane_g7

0x7678,	// (0x00022043) bg_sctrl_middle_pane_g8

0x0007,

0xfd1a,	// (0x0002a6e5) bg_sctrl_middle_pane_g

0x7670,	// (0x0002203b) bg_sctrl_middle_pane_g8_copy1

0x7638,	// (0x00022003) bg_sctrl_sk_pane_g1

0x7640,	// (0x0002200b) bg_sctrl_sk_pane_g2

0x7648,	// (0x00022013) bg_sctrl_sk_pane_g3

0x0008,

0xf872,	// (0x0002a23d) bg_sctrl_sk_pane_g

0x6500,	// (0x00020ecb) aid_size_touch_scroll_bar

0x7650,	// (0x0002201b) bg_sctrl_sk_pane_g4

0x7658,	// (0x00022023) bg_sctrl_sk_pane_g5

0x7660,	// (0x0002202b) bg_sctrl_sk_pane_g6

0x7668,	// (0x00022033) bg_sctrl_sk_pane_g7

0x7670,	// (0x0002203b) bg_sctrl_sk_pane_g8

0x7678,	// (0x00022043) bg_sctrl_sk_pane_g9

0x73ae,	// (0x00021d79) popup_fep_china_hwr2_fs_candidate_window

0x9a64,	// (0x0002442f) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9a64,	// (0x0002442f) popup_fep_china_hwr2_fs_control_window

0xa894,	// (0x0002525f) sctrl_sk_top_pane_g2

0x0001,

0xfd10,	// (0x0002a6db) sctrl_sk_top_pane_g

0xee3f,	// (0x0002980a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xee3f,	// (0x0002980a) aid_fep_china_hwr2_fs_cell

0xee50,	// (0x0002981b) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xee50,	// (0x0002981b) bg_popup_fep_shadow_pane_cp4

0xee67,	// (0x00029832) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xee67,	// (0x00029832) bg_popup_fep_shadow_pane_cp5

0xee79,	// (0x00029844) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xee79,	// (0x00029844) popup_fep_china_hwr2_fs_control_bar_grid

0xee89,	// (0x00029854) popup_fep_china_hwr2_fs_control_funtion_grid

0xee91,	// (0x0002985c) aid_fep_china_hwr2_fs_candi_cell

0x5f28,	// (0x000208f3) bg_popup_fep_shadow_pane_cp6

0xee9b,	// (0x00029866) popup_fep_china_hwr2_fs_candidate_grid

0xeea3,	// (0x0002986e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xeea3,	// (0x0002986e) cell_fep_china_hwr2_fs_funtion_grid

0xc3bd,	// (0x00026d88) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xeebb,	// (0x00029886) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xeebb,	// (0x00029886) cell_fep_china_hwr2_fs_funtion_grid_g1

0xeec9,	// (0x00029894) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xeec9,	// (0x00029894) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2b,	// (0x0002a6f6) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2b,	// (0x0002a6f6) cell_fep_china_hwr2_fs_funtion_grid_g

0xeedf,	// (0x000298aa) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xeedf,	// (0x000298aa) cell_fep_china_hwr2_fs_funtion_grid_t1

0xeef4,	// (0x000298bf) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xeef4,	// (0x000298bf) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd30,	// (0x0002a6fb) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd30,	// (0x0002a6fb) cell_fep_china_hwr2_fs_funtion_grid_t

0xef10,	// (0x000298db) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xef18,	// (0x000298e3) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xef20,	// (0x000298eb) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd35,	// (0x0002a700) popup_fep_china_hwr2_fs_control_bar_grid_g

0xef28,	// (0x000298f3) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xef28,	// (0x000298f3) cell_fep_china_hwr2_fs_candidate_grid

0xef41,	// (0x0002990c) popup_fep_china_hwr2_fs_candidate_grid_g20

0xef49,	// (0x00029914) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc3bd,	// (0x00026d88) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc3bd,	// (0x00026d88) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb50,	// (0x0002a51b) cell_fep_china_hwr2_fs_candidate_grid_g

0xef51,	// (0x0002991c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x749d,	// (0x00021e68) clock_nsta_pane_cp_24_ParamLimits

0x749d,	// (0x00021e68) clock_nsta_pane_cp_24

0x74fa,	// (0x00021ec5) indicator_nsta_pane_cp_24_ParamLimits

0x74fa,	// (0x00021ec5) indicator_nsta_pane_cp_24

0xb28a,	// (0x00025c55) heading_pane_g1

0x0001,

0xf8d7,	// (0x0002a2a2) heading_pane_g

0xe2c3,	// (0x00028c8e) grid_sct_catagory_button_pane

0xb90a,	// (0x000262d5) scroll_pane_cp5_ParamLimits

0xc125,	// (0x00026af0) button_value_adjust_pane_cp5_ParamLimits

0xc125,	// (0x00026af0) button_value_adjust_pane_cp5

0xc1e3,	// (0x00026bae) form2_midp_time_pane_ParamLimits

0xef5f,	// (0x0002992a) cell_sct_catagory_button_pane_ParamLimits

0xef5f,	// (0x0002992a) cell_sct_catagory_button_pane

0xc382,	// (0x00026d4d) bg_button_pane_cp01_ParamLimits

0xc382,	// (0x00026d4d) bg_button_pane_cp01

0xc3bd,	// (0x00026d88) cell_sct_catagory_button_pane_g1

0x9cd7,	// (0x000246a2) popup_tb_extension_window

0xef71,	// (0x0002993c) aid_size_cell_ext_ParamLimits

0xef71,	// (0x0002993c) aid_size_cell_ext

0x6177,	// (0x00020b42) bg_tb_trans_pane_cp1_ParamLimits

0x6177,	// (0x00020b42) bg_tb_trans_pane_cp1

0xef91,	// (0x0002995c) grid_tb_ext_pane_ParamLimits

0xef91,	// (0x0002995c) grid_tb_ext_pane

0xefb7,	// (0x00029982) cell_tb_ext_pane_ParamLimits

0xefb7,	// (0x00029982) cell_tb_ext_pane

0xefcc,	// (0x00029997) cell_tb_ext_pane_g1_ParamLimits

0xefcc,	// (0x00029997) cell_tb_ext_pane_g1

0xefe9,	// (0x000299b4) cell_tb_ext_pane_t1

0x6177,	// (0x00020b42) list_highlight_pane_cp11_ParamLimits

0x6177,	// (0x00020b42) list_highlight_pane_cp11

0x8dd8,	// (0x000237a3) popup_uni_indicator_window_ParamLimits

0x8dd8,	// (0x000237a3) popup_uni_indicator_window

0x65b8,	// (0x00020f83) bg_popup_sub_pane_cp14

0xf004,	// (0x000299cf) list_uniindi_pane

0xf010,	// (0x000299db) uniindi_top_pane

0x6177,	// (0x00020b42) bg_uniindi_top_pane

0xf02f,	// (0x000299fa) uniindi_top_pane_g1

0xf045,	// (0x00029a10) uniindi_top_pane_g2

0x0003,

0xfd3c,	// (0x0002a707) uniindi_top_pane_g

0xf06f,	// (0x00029a3a) uniindi_top_pane_t1

0xf099,	// (0x00029a64) list_single_uniindi_pane_ParamLimits

0xf099,	// (0x00029a64) list_single_uniindi_pane

0xc3bd,	// (0x00026d88) bg_uniindi_top_pane_g1

0xf0ab,	// (0x00029a76) list_single_uniindi_pane_g1

0xf0be,	// (0x00029a89) list_single_uniindi_pane_t1

0x8c76,	// (0x00023641) control_bg_pane

0xf0e3,	// (0x00029aae) bg_sctrl_sk_pane_cp1

0xf0ec,	// (0x00029ab7) bg_sctrl_sk_pane_cp2

0xf0f5,	// (0x00029ac0) control_bg_pane_g1

0xf0fe,	// (0x00029ac9) control_bg_pane_g2

0x0001,

0xfd45,	// (0x0002a710) control_bg_pane_g

0xc04b,	// (0x00026a16) cell_indicator_nsta_pane_g1_ParamLimits

0xe5d5,	// (0x00028fa0) cell_indicator_nsta_pane_g2_ParamLimits

0xfab4,	// (0x0002a47f) cell_indicator_nsta_pane_g_ParamLimits

0xd8c8,	// (0x00028293) form2_midp_time_pane_t1_ParamLimits

0x63de,	// (0x00020da9) main_idle_act4_pane_ParamLimits

0x63de,	// (0x00020da9) main_idle_act4_pane

0x9cd7,	// (0x000246a2) popup_tb_extension_window_ParamLimits

0xefab,	// (0x00029976) tb_ext_find_pane_ParamLimits

0xefab,	// (0x00029976) tb_ext_find_pane

0xf107,	// (0x00029ad2) ai_gene_pane_1_cp1

0x71b6,	// (0x00021b81) ai_gene_pane_2_cp1

0xf10f,	// (0x00029ada) list_single_idle_plugin_calendar_pane

0xf118,	// (0x00029ae3) list_single_idle_plugin_notification_pane

0xf121,	// (0x00029aec) list_single_idle_plugin_player_pane

0xf12a,	// (0x00029af5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xf12a,	// (0x00029af5) list_single_idle_plugin_shortcut_pane

0xf14c,	// (0x00029b17) main_idle_act4_pane_t1

0xf15e,	// (0x00029b29) main_idle_act4_pane_t2

0x0001,

0xfd4a,	// (0x0002a715) main_idle_act4_pane_t

0xf170,	// (0x00029b3b) middle_sk_idle_act4_pane_ParamLimits

0xf170,	// (0x00029b3b) middle_sk_idle_act4_pane

0xf186,	// (0x00029b51) popup_clock_digital_analogue_window_cp2

0xf1a0,	// (0x00029b6b) shortcut_wheel_idle_act4_pane_ParamLimits

0xf1a0,	// (0x00029b6b) shortcut_wheel_idle_act4_pane

0xc3bd,	// (0x00026d88) shortcut_wheel_idle_act4_pane_g1

0xc3bd,	// (0x00026d88) shortcut_wheel_idle_act4_pane_g2

0xc3bd,	// (0x00026d88) shortcut_wheel_idle_act4_pane_g3

0xc3bd,	// (0x00026d88) shortcut_wheel_idle_act4_pane_g4

0xc3bd,	// (0x00026d88) shortcut_wheel_idle_act4_pane_g5

0xf1b4,	// (0x00029b7f) shortcut_wheel_idle_act4_pane_g6

0xf1bc,	// (0x00029b87) shortcut_wheel_idle_act4_pane_g7

0xf1c4,	// (0x00029b8f) shortcut_wheel_idle_act4_pane_g8

0xf1cc,	// (0x00029b97) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4f,	// (0x0002a71a) shortcut_wheel_idle_act4_pane_g

0xc5eb,	// (0x00026fb6) middle_sk_idle_act4_pane_g1_ParamLimits

0xc5eb,	// (0x00026fb6) middle_sk_idle_act4_pane_g1

0xf230,	// (0x00029bfb) middle_sk_idle_act4_pane_g2_ParamLimits

0xf230,	// (0x00029bfb) middle_sk_idle_act4_pane_g2

0x0001,

0xfd72,	// (0x0002a73d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd72,	// (0x0002a73d) middle_sk_idle_act4_pane_g

0xf23c,	// (0x00029c07) middle_sk_idle_act4_pane_t1_ParamLimits

0xf23c,	// (0x00029c07) middle_sk_idle_act4_pane_t1

0xf259,	// (0x00029c24) grid_ai_shortcut_pane_ParamLimits

0xf259,	// (0x00029c24) grid_ai_shortcut_pane

0xf272,	// (0x00029c3d) list_highlight_pane_cp16_ParamLimits

0xf272,	// (0x00029c3d) list_highlight_pane_cp16

0xf27f,	// (0x00029c4a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xf27f,	// (0x00029c4a) list_single_idle_plugin_shortcut_pane_g1

0xf28b,	// (0x00029c56) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xf28b,	// (0x00029c56) list_single_idle_plugin_shortcut_pane_g2

0xf2a3,	// (0x00029c6e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xf2a3,	// (0x00029c6e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd77,	// (0x0002a742) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd77,	// (0x0002a742) list_single_idle_plugin_shortcut_pane_g

0xf2b6,	// (0x00029c81) cell_ai_shortcut_pane_ParamLimits

0xf2b6,	// (0x00029c81) cell_ai_shortcut_pane

0xf2d7,	// (0x00029ca2) cell_ai_shortcut_pane_g1_ParamLimits

0xf2d7,	// (0x00029ca2) cell_ai_shortcut_pane_g1

0xf107,	// (0x00029ad2) ai_gene_pane_1_cp2

0xf2f9,	// (0x00029cc4) ai_gene_pane_2_cp2

0xf301,	// (0x00029ccc) list_highlight_pane_cp15

0xf30a,	// (0x00029cd5) list_single_idle_plugin_calendar_pane_g1

0xf301,	// (0x00029ccc) list_highlight_pane_cp17

0xf312,	// (0x00029cdd) list_single_idle_plugin_calendar_pane_g1_copy1

0xf31a,	// (0x00029ce5) list_single_idle_plugin_player_pane_g1

0xbac4,	// (0x0002648f) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7e,	// (0x0002a749) list_single_idle_plugin_player_pane_g

0xf322,	// (0x00029ced) list_single_idle_plugin_player_pane_t1

0xf330,	// (0x00029cfb) list_single_idle_plugin_player_pane_t2

0xf33e,	// (0x00029d09) list_single_idle_plugin_player_pane_t3

0xf34c,	// (0x00029d17) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd83,	// (0x0002a74e) list_single_idle_plugin_player_pane_t

0xf35a,	// (0x00029d25) wait_bar_pane_cp15

0xf362,	// (0x00029d2d) grid_ai_notification_pane

0xbac4,	// (0x0002648f) list_single_idle_plugin_notification_pane_g1

0xf36b,	// (0x00029d36) cell_ai_notification_pane_ParamLimits

0xf36b,	// (0x00029d36) cell_ai_notification_pane

0xf378,	// (0x00029d43) cell_ai_notification_pane_g1

0xf380,	// (0x00029d4b) cell_ai_notification_pane_t1

0xf38e,	// (0x00029d59) tb_ext_find_button_pane

0xf396,	// (0x00029d61) tb_ext_find_pane_g1

0xf39e,	// (0x00029d69) tb_ext_find_pane_t1

0x6c95,	// (0x00021660) tb_ext_find_button_pane_g1

0xf3ac,	// (0x00029d77) tb_ext_find_button_pane_g2

0x0001,

0xfd8c,	// (0x0002a757) tb_ext_find_button_pane_g

0xf14c,	// (0x00029b17) main_idle_act4_pane_t1_ParamLimits

0xf15e,	// (0x00029b29) main_idle_act4_pane_t2_ParamLimits

0xfd4a,	// (0x0002a715) main_idle_act4_pane_t_ParamLimits

0xf186,	// (0x00029b51) popup_clock_digital_analogue_window_cp2_ParamLimits

0xf194,	// (0x00029b5f) sat_plugin_idle_act4_pane_ParamLimits

0xf194,	// (0x00029b5f) sat_plugin_idle_act4_pane

0xf3b5,	// (0x00029d80) sat_plugin_idle_act4_pane_t1_ParamLimits

0xf3b5,	// (0x00029d80) sat_plugin_idle_act4_pane_t1

0xf3c8,	// (0x00029d93) sat_plugin_idle_act4_pane_t2_ParamLimits

0xf3c8,	// (0x00029d93) sat_plugin_idle_act4_pane_t2

0xf3db,	// (0x00029da6) sat_plugin_idle_act4_pane_t3_ParamLimits

0xf3db,	// (0x00029da6) sat_plugin_idle_act4_pane_t3

0xf3ee,	// (0x00029db9) sat_plugin_idle_act4_pane_t4_ParamLimits

0xf3ee,	// (0x00029db9) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd91,	// (0x0002a75c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd91,	// (0x0002a75c) sat_plugin_idle_act4_pane_t

0x8d39,	// (0x00023704) popup_battery_window_ParamLimits

0x8d39,	// (0x00023704) popup_battery_window

0x6177,	// (0x00020b42) bg_popup_sub_pane_cp25_ParamLimits

0x6177,	// (0x00020b42) bg_popup_sub_pane_cp25

0xf401,	// (0x00029dcc) popup_battery_window_g1_ParamLimits

0xf401,	// (0x00029dcc) popup_battery_window_g1

0xf40d,	// (0x00029dd8) popup_battery_window_t1_ParamLimits

0xf40d,	// (0x00029dd8) popup_battery_window_t1

0xf41f,	// (0x00029dea) popup_battery_window_t2_ParamLimits

0xf41f,	// (0x00029dea) popup_battery_window_t2

0x0001,

0xfd9a,	// (0x0002a765) popup_battery_window_t_ParamLimits

0xfd9a,	// (0x0002a765) popup_battery_window_t

0x9730,	// (0x000240fb) midp_canvas_pane_ParamLimits

0x978c,	// (0x00024157) midp_keypad_pane_ParamLimits

0x978c,	// (0x00024157) midp_keypad_pane

0x6aca,	// (0x00021495) main_midp_pane_ParamLimits

0xc0c1,	// (0x00026a8c) signal_pane_g2_cp_ParamLimits

0xf43c,	// (0x00029e07) aid_size_cell_midp_keypad_ParamLimits

0xf43c,	// (0x00029e07) aid_size_cell_midp_keypad

0xf456,	// (0x00029e21) midp_keyp_game_grid_pane_ParamLimits

0xf456,	// (0x00029e21) midp_keyp_game_grid_pane

0xf470,	// (0x00029e3b) midp_keyp_rocker_pane_ParamLimits

0xf470,	// (0x00029e3b) midp_keyp_rocker_pane

0xf49d,	// (0x00029e68) midp_keyp_sk_left_pane_ParamLimits

0xf49d,	// (0x00029e68) midp_keyp_sk_left_pane

0xf4f5,	// (0x00029ec0) midp_keyp_sk_right_pane_ParamLimits

0xf4f5,	// (0x00029ec0) midp_keyp_sk_right_pane

0x5f28,	// (0x000208f3) bg_button_pane_cp03

0xf547,	// (0x00029f12) midp_keyp_sk_left_pane_g1

0x5f28,	// (0x000208f3) bg_button_pane_cp04

0xf547,	// (0x00029f12) midp_keyp_sk_right_pane_g1

0xc3bd,	// (0x00026d88) midp_keyp_rocker_pane_g1

0xf550,	// (0x00029f1b) keyp_game_cell_pane_ParamLimits

0xf550,	// (0x00029f1b) keyp_game_cell_pane

0x5f28,	// (0x000208f3) bg_button_pane_cp02

0xf561,	// (0x00029f2c) keyp_game_cell_pane_g1

0x8d6f,	// (0x0002373a) popup_fep_vkb2_window_ParamLimits

0x8d6f,	// (0x0002373a) popup_fep_vkb2_window

0xab59,	// (0x00025524) aid_size_cell_vkb2_ParamLimits

0xab59,	// (0x00025524) aid_size_cell_vkb2

0xabad,	// (0x00025578) popup_fep_vkb2_window_g1_ParamLimits

0xabad,	// (0x00025578) popup_fep_vkb2_window_g1

0xabf5,	// (0x000255c0) vkb2_area_bottom_pane_ParamLimits

0xabf5,	// (0x000255c0) vkb2_area_bottom_pane

0xac2d,	// (0x000255f8) vkb2_area_keypad_pane_ParamLimits

0xac2d,	// (0x000255f8) vkb2_area_keypad_pane

0xac65,	// (0x00025630) vkb2_area_top_pane_ParamLimits

0xac65,	// (0x00025630) vkb2_area_top_pane

0xacd5,	// (0x000256a0) vkb2_top_entry_pane_ParamLimits

0xacd5,	// (0x000256a0) vkb2_top_entry_pane

0xacff,	// (0x000256ca) vkb2_top_grid_left_pane_ParamLimits

0xacff,	// (0x000256ca) vkb2_top_grid_left_pane

0xad1d,	// (0x000256e8) vkb2_top_grid_right_pane_ParamLimits

0xad1d,	// (0x000256e8) vkb2_top_grid_right_pane

0xad3b,	// (0x00025706) vkb2_cell_keypad_pane_ParamLimits

0xad3b,	// (0x00025706) vkb2_cell_keypad_pane

0xadec,	// (0x000257b7) vkb2_area_bottom_grid_pane_ParamLimits

0xadec,	// (0x000257b7) vkb2_area_bottom_grid_pane

0xae10,	// (0x000257db) vkb2_area_bottom_pane_g1_ParamLimits

0xae10,	// (0x000257db) vkb2_area_bottom_pane_g1

0xae34,	// (0x000257ff) vkb2_area_bottom_pane_g2_ParamLimits

0xae34,	// (0x000257ff) vkb2_area_bottom_pane_g2

0xae62,	// (0x0002582d) vkb2_area_bottom_pane_g3_ParamLimits

0xae62,	// (0x0002582d) vkb2_area_bottom_pane_g3

0x0002,

0xfd9f,	// (0x0002a76a) vkb2_area_bottom_pane_g_ParamLimits

0xfd9f,	// (0x0002a76a) vkb2_area_bottom_pane_g

0xaeb3,	// (0x0002587e) vkb2_top_cell_left_pane_ParamLimits

0xaeb3,	// (0x0002587e) vkb2_top_cell_left_pane

0x02ae,	// (0x0001ac79) vkb2_top_entry_pane_g1_ParamLimits

0x02ae,	// (0x0001ac79) vkb2_top_entry_pane_g1

0x02bc,	// (0x0001ac87) vkb2_top_entry_pane_t1_ParamLimits

0x02bc,	// (0x0001ac87) vkb2_top_entry_pane_t1

0x02ee,	// (0x0001acb9) vkb2_top_entry_pane_t2_ParamLimits

0x02ee,	// (0x0001acb9) vkb2_top_entry_pane_t2

0x0320,	// (0x0001aceb) vkb2_top_entry_pane_t3_ParamLimits

0x0320,	// (0x0001aceb) vkb2_top_entry_pane_t3

0x0002,

0xfda6,	// (0x0002a771) vkb2_top_entry_pane_t_ParamLimits

0xfda6,	// (0x0002a771) vkb2_top_entry_pane_t

0xaf00,	// (0x000258cb) vkb2_top_grid_right_pane_g1_ParamLimits

0xaf00,	// (0x000258cb) vkb2_top_grid_right_pane_g1

0xaf16,	// (0x000258e1) vkb2_top_grid_right_pane_g2_ParamLimits

0xaf16,	// (0x000258e1) vkb2_top_grid_right_pane_g2

0xaf2e,	// (0x000258f9) vkb2_top_grid_right_pane_g3_ParamLimits

0xaf2e,	// (0x000258f9) vkb2_top_grid_right_pane_g3

0xaf46,	// (0x00025911) vkb2_top_grid_right_pane_g4_ParamLimits

0xaf46,	// (0x00025911) vkb2_top_grid_right_pane_g4

0x0003,

0xfdad,	// (0x0002a778) vkb2_top_grid_right_pane_g_ParamLimits

0xfdad,	// (0x0002a778) vkb2_top_grid_right_pane_g

0xaf5c,	// (0x00025927) vkb2_top_cell_left_pane_g1

0xaf73,	// (0x0002593e) vkb2_cell_keypad_pane_g1_ParamLimits

0xaf73,	// (0x0002593e) vkb2_cell_keypad_pane_g1

0x03e4,	// (0x0001adaf) vkb2_cell_keypad_pane_t1_ParamLimits

0x03e4,	// (0x0001adaf) vkb2_cell_keypad_pane_t1

0xaf81,	// (0x0002594c) vkb2_cell_bottom_grid_pane_ParamLimits

0xaf81,	// (0x0002594c) vkb2_cell_bottom_grid_pane

0xafba,	// (0x00025985) vkb2_cell_bottom_grid_pane_g1

0xf1d4,	// (0x00029b9f) aid_call2_pane_cp02

0xf1dc,	// (0x00029ba7) aid_call_pane_cp02

0xf1e4,	// (0x00029baf) clock_digital_number_pane_cp10

0xf1ec,	// (0x00029bb7) clock_digital_number_pane_cp11

0xf1f4,	// (0x00029bbf) clock_digital_number_pane_cp12

0xf1fc,	// (0x00029bc7) clock_digital_number_pane_cp13

0xf204,	// (0x00029bcf) clock_digital_separator_pane_cp10

0x6c95,	// (0x00021660) popup_clock_digital_analogue_window_cp2_g1

0x6c95,	// (0x00021660) popup_clock_digital_analogue_window_cp2_g2

0xf20c,	// (0x00029bd7) popup_clock_digital_analogue_window_cp2_g3

0x6c95,	// (0x00021660) popup_clock_digital_analogue_window_cp2_g4

0xf20c,	// (0x00029bd7) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd62,	// (0x0002a72d) popup_clock_digital_analogue_window_cp2_g

0xf214,	// (0x00029bdf) popup_clock_digital_analogue_window_cp2_t1

0xf222,	// (0x00029bed) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6d,	// (0x0002a738) popup_clock_digital_analogue_window_cp2_t

0xc3bd,	// (0x00026d88) clock_digital_number_pane_cp10_g1

0xc3bd,	// (0x00026d88) clock_digital_number_pane_cp10_g2

0x0001,

0xfb50,	// (0x0002a51b) clock_digital_number_pane_cp10_g

0xc3bd,	// (0x00026d88) clock_digital_separator_pane_cp10_g1

0xc3bd,	// (0x00026d88) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb50,	// (0x0002a51b) clock_digital_separator_pane_cp10_g

0xf051,	// (0x00029a1c) uniindi_top_pane_g3

0xf062,	// (0x00029a2d) uniindi_top_pane_g4

0xada6,	// (0x00025771) vkb2_row_keypad_pane_ParamLimits

0xada6,	// (0x00025771) vkb2_row_keypad_pane

0xafd6,	// (0x000259a1) vkb2_cell_t_keypad_pane_ParamLimits

0xafd6,	// (0x000259a1) vkb2_cell_t_keypad_pane

0xafe3,	// (0x000259ae) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xafe3,	// (0x000259ae) vkb2_cell_t_keypad_pane_cp08

0xaff3,	// (0x000259be) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xaff3,	// (0x000259be) vkb2_cell_t_keypad_pane_cp09

0xb004,	// (0x000259cf) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xb004,	// (0x000259cf) vkb2_cell_t_keypad_pane_cp01

0xb014,	// (0x000259df) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xb014,	// (0x000259df) vkb2_cell_t_keypad_pane_cp02

0xb024,	// (0x000259ef) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xb024,	// (0x000259ef) vkb2_cell_t_keypad_pane_cp03

0xb034,	// (0x000259ff) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xb034,	// (0x000259ff) vkb2_cell_t_keypad_pane_cp04

0xb044,	// (0x00025a0f) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xb044,	// (0x00025a0f) vkb2_cell_t_keypad_pane_cp05

0xb054,	// (0x00025a1f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xb054,	// (0x00025a1f) vkb2_cell_t_keypad_pane_cp06

0xb064,	// (0x00025a2f) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xb064,	// (0x00025a2f) vkb2_cell_t_keypad_pane_cp07

0xb074,	// (0x00025a3f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xb074,	// (0x00025a3f) vkb2_cell_t_keypad_pane_cp10

0xa894,	// (0x0002525f) vkb2_cell_t_keypad_pane_g1

0x0503,	// (0x0001aece) vkb2_cell_t_keypad_pane_t1

0x8c76,	// (0x00023641) popup_grid_graphic2_window

0x0515,	// (0x0001aee0) aid_size_cell_graphic2_ParamLimits

0x0515,	// (0x0001aee0) aid_size_cell_graphic2

0xcd97,	// (0x00027762) bg_popup_window_pane_cp21_ParamLimits

0xcd97,	// (0x00027762) bg_popup_window_pane_cp21

0x0541,	// (0x0001af0c) graphic2_pages_pane_ParamLimits

0x0541,	// (0x0001af0c) graphic2_pages_pane

0x057b,	// (0x0001af46) grid_graphic2_control_pane_ParamLimits

0x057b,	// (0x0001af46) grid_graphic2_control_pane

0x05a3,	// (0x0001af6e) grid_graphic2_pane_ParamLimits

0x05a3,	// (0x0001af6e) grid_graphic2_pane

0x05f3,	// (0x0001afbe) cell_graphic2_pane

0x5f28,	// (0x000208f3) main_comp_mode_pane

0xde6e,	// (0x00028839) list_ai3_gene_pane_ParamLimits

0xecb0,	// (0x0002967b) bg_popup_window_pane_cp19_ParamLimits

0xecbc,	// (0x00029687) bg_touch_area_indi_pane_ParamLimits

0xecbc,	// (0x00029687) bg_touch_area_indi_pane

0xecd2,	// (0x0002969d) bg_touch_area_indi_pane_cp01_ParamLimits

0xecd2,	// (0x0002969d) bg_touch_area_indi_pane_cp01

0xece8,	// (0x000296b3) bg_touch_area_indi_pane_cp02_ParamLimits

0xece8,	// (0x000296b3) bg_touch_area_indi_pane_cp02

0xecfe,	// (0x000296c9) bg_touch_area_indi_pane_cp03_ParamLimits

0xecfe,	// (0x000296c9) bg_touch_area_indi_pane_cp03

0xed14,	// (0x000296df) popup_slider_window_g1_ParamLimits

0xed30,	// (0x000296fb) popup_slider_window_g2_ParamLimits

0xed4c,	// (0x00029717) popup_slider_window_g3_ParamLimits

0xfcf7,	// (0x0002a6c2) popup_slider_window_g_ParamLimits

0xeda8,	// (0x00029773) popup_slider_window_t1_ParamLimits

0xee1a,	// (0x000297e5) small_volume_slider_vertical_pane_ParamLimits

0x05f3,	// (0x0001afbe) cell_graphic2_pane_ParamLimits

0x0630,	// (0x0001affb) bg_button_pane_cp10_ParamLimits

0x0630,	// (0x0001affb) bg_button_pane_cp10

0x0641,	// (0x0001b00c) bg_button_pane_cp11_ParamLimits

0x0641,	// (0x0001b00c) bg_button_pane_cp11

0x0652,	// (0x0001b01d) graphic2_pages_pane_g1_ParamLimits

0x0652,	// (0x0001b01d) graphic2_pages_pane_g1

0x0665,	// (0x0001b030) graphic2_pages_pane_g2_ParamLimits

0x0665,	// (0x0001b030) graphic2_pages_pane_g2

0x0001,

0xfdbb,	// (0x0002a786) graphic2_pages_pane_g_ParamLimits

0xfdbb,	// (0x0002a786) graphic2_pages_pane_g

0x067b,	// (0x0001b046) graphic2_pages_pane_t1_ParamLimits

0x067b,	// (0x0001b046) graphic2_pages_pane_t1

0x0691,	// (0x0001b05c) cell_graphic2_control_pane_ParamLimits

0x0691,	// (0x0001b05c) cell_graphic2_control_pane

0x06ab,	// (0x0001b076) cell_graphic2_pane_g1_ParamLimits

0x06ab,	// (0x0001b076) cell_graphic2_pane_g1

0x06b8,	// (0x0001b083) cell_graphic2_pane_g2_ParamLimits

0x06b8,	// (0x0001b083) cell_graphic2_pane_g2

0x06c5,	// (0x0001b090) cell_graphic2_pane_g3_ParamLimits

0x06c5,	// (0x0001b090) cell_graphic2_pane_g3

0x06d2,	// (0x0001b09d) cell_graphic2_pane_g4_ParamLimits

0x06d2,	// (0x0001b09d) cell_graphic2_pane_g4

0x06df,	// (0x0001b0aa) cell_graphic2_pane_g5_ParamLimits

0x06df,	// (0x0001b0aa) cell_graphic2_pane_g5

0x0004,

0xfdc0,	// (0x0002a78b) cell_graphic2_pane_g_ParamLimits

0xfdc0,	// (0x0002a78b) cell_graphic2_pane_g

0x06fa,	// (0x0001b0c5) cell_graphic2_pane_t1_ParamLimits

0x06fa,	// (0x0001b0c5) cell_graphic2_pane_t1

0x7732,	// (0x000220fd) grid_highlight_pane_cp11_ParamLimits

0x7732,	// (0x000220fd) grid_highlight_pane_cp11

0x65b8,	// (0x00020f83) bg_button_pane_cp05

0x0723,	// (0x0001b0ee) cell_graphic2_control_pane_g1

0xc3bd,	// (0x00026d88) bg_touch_area_indi_pane_g1

0x0730,	// (0x0001b0fb) aid_cmod_rocker_key_size

0x073a,	// (0x0001b105) aid_cmode_itu_key_size

0x0744,	// (0x0001b10f) main_cmode_video_pane

0x074c,	// (0x0001b117) main_comp_mode_itu_pane

0x0756,	// (0x0001b121) main_comp_mode_rocker_pane

0x075e,	// (0x0001b129) cell_cmode_rocker_pane_ParamLimits

0x075e,	// (0x0001b129) cell_cmode_rocker_pane

0x0770,	// (0x0001b13b) cell_cmode_itu_pane_ParamLimits

0x0770,	// (0x0001b13b) cell_cmode_itu_pane

0x65b8,	// (0x00020f83) bg_button_pane_cp06_ParamLimits

0x65b8,	// (0x00020f83) bg_button_pane_cp06

0xc5eb,	// (0x00026fb6) cell_cmode_rocker_pane_g1_ParamLimits

0xc5eb,	// (0x00026fb6) cell_cmode_rocker_pane_g1

0xeebb,	// (0x00029886) cell_cmode_rocker_pane_g2_ParamLimits

0xeebb,	// (0x00029886) cell_cmode_rocker_pane_g2

0x0001,

0xfdd0,	// (0x0002a79b) cell_cmode_rocker_pane_g_ParamLimits

0xfdd0,	// (0x0002a79b) cell_cmode_rocker_pane_g

0x5f28,	// (0x000208f3) bg_button_pane_cp07

0x0785,	// (0x0001b150) cell_cmode_itu_pane_g1

0x078e,	// (0x0001b159) cell_cmode_itu_pane_t1

0x079c,	// (0x0001b167) cell_cmode_itu_pane_t2

0x0001,

0xfdd5,	// (0x0002a7a0) cell_cmode_itu_pane_t

0xf0d3,	// (0x00029a9e) aid_touch_ctrl_left

0xf0db,	// (0x00029aa6) aid_touch_ctrl_right

0x5f28,	// (0x000208f3) compa_mode_pane

0x07aa,	// (0x0001b175) aid_cmod_rocker_key_size_cp

0x07b4,	// (0x0001b17f) aid_cmode_itu_key_size_cp

0x07be,	// (0x0001b189) compa_mode_pane_g1

0x07c6,	// (0x0001b191) compa_mode_pane_g2

0x07ce,	// (0x0001b199) compa_mode_pane_g3

0x0002,

0xfdda,	// (0x0002a7a5) compa_mode_pane_g

0x07d6,	// (0x0001b1a1) main_comp_mode_itu_pane_cp

0x07de,	// (0x0001b1a9) main_comp_mode_rocker_pane_cp

0x07e6,	// (0x0001b1b1) cell_cmode_itu_pane_cp_ParamLimits

0x07e6,	// (0x0001b1b1) cell_cmode_itu_pane_cp

0x07fb,	// (0x0001b1c6) cell_cmode_rocker_pane_cp_ParamLimits

0x07fb,	// (0x0001b1c6) cell_cmode_rocker_pane_cp

0x65b8,	// (0x00020f83) bg_button_pane_cp06_cp_ParamLimits

0x65b8,	// (0x00020f83) bg_button_pane_cp06_cp

0xc5eb,	// (0x00026fb6) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc5eb,	// (0x00026fb6) cell_cmode_rocker_pane_g1_cp

0xc3bd,	// (0x00026d88) cell_cmode_rocker_pane_g2_cp

0x5f28,	// (0x000208f3) bg_button_pane_cp07_cp

0x080d,	// (0x0001b1d8) cell_cmode_itu_pane_g1_cp

0x0816,	// (0x0001b1e1) cell_cmode_itu_pane_t1_cp

0x0824,	// (0x0001b1ef) cell_cmode_itu_pane_t2_cp

0xe1d1,	// (0x00028b9c) settings_code_pane_cp2

0x6018,	// (0x000209e3) bg_popup_window_pane_cp3_ParamLimits

0x634f,	// (0x00020d1a) heading_pane_cp3_ParamLimits

0x635b,	// (0x00020d26) listscroll_popup_graphic_pane_ParamLimits

0xa64f,	// (0x0002501a) fep_hwr_aid_pane_ParamLimits

0xaaaf,	// (0x0002547a) aid_touch_sctrl_top_ParamLimits

0xaaca,	// (0x00025495) sctrl_sk_top_pane_g1_ParamLimits

0xa894,	// (0x0002525f) sctrl_sk_top_pane_g2_ParamLimits

0xfd10,	// (0x0002a6db) sctrl_sk_top_pane_g_ParamLimits

0xaad7,	// (0x000254a2) sctrl_sk_top_pane_t1_ParamLimits

0xaaaf,	// (0x0002547a) aid_touch_sctrl_bottom_ParamLimits

0xaad7,	// (0x000254a2) sctrl_sk_bottom_pane_t1_ParamLimits

0xf01d,	// (0x000299e8) aid_area_touch_clock

0xac9d,	// (0x00025668) aid_vkb2_area_top_pane_cell_ParamLimits

0xac9d,	// (0x00025668) aid_vkb2_area_top_pane_cell

0xadc8,	// (0x00025793) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xadc8,	// (0x00025793) aid_vkb2_area_bottom_pane_cell

0x02a6,	// (0x0001ac71) popup_char_count_window

0x0832,	// (0x0001b1fd) popup_char_count_window_g1

0x083b,	// (0x0001b206) popup_char_count_window_g2

0x0844,	// (0x0001b20f) popup_char_count_window_g3

0x0002,

0xfde1,	// (0x0002a7ac) popup_char_count_window_g

0x084d,	// (0x0001b218) popup_char_count_window_t1

0xab8b,	// (0x00025556) popup_fep_char_preview_window_ParamLimits

0xab8b,	// (0x00025556) popup_fep_char_preview_window

0xacbb,	// (0x00025686) vkb2_top_candi_pane_ParamLimits

0xacbb,	// (0x00025686) vkb2_top_candi_pane

0x085b,	// (0x0001b226) cell_vkb2_top_candi_pane_ParamLimits

0x085b,	// (0x0001b226) cell_vkb2_top_candi_pane

0xb089,	// (0x00025a54) bg_popup_fep_char_preview_window_ParamLimits

0xb089,	// (0x00025a54) bg_popup_fep_char_preview_window

0xb097,	// (0x00025a62) popup_fep_char_preview_window_t1_ParamLimits

0xb097,	// (0x00025a62) popup_fep_char_preview_window_t1

0x08de,	// (0x0001b2a9) bg_popup_fep_char_preview_window_g1

0x08d6,	// (0x0001b2a1) bg_popup_fep_char_preview_window_g2

0x08ce,	// (0x0001b299) bg_popup_fep_char_preview_window_g3

0x0906,	// (0x0001b2d1) bg_popup_fep_char_preview_window_g4

0x08fe,	// (0x0001b2c9) bg_popup_fep_char_preview_window_g5

0xb0d1,	// (0x00025a9c) bg_popup_fep_char_preview_window_g6

0x08ee,	// (0x0001b2b9) bg_popup_fep_char_preview_window_g7

0x08e6,	// (0x0001b2b1) bg_popup_fep_char_preview_window_g8

0x090e,	// (0x0001b2d9) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde8,	// (0x0002a7b3) bg_popup_fep_char_preview_window_g

0xa894,	// (0x0002525f) cell_vkb2_top_candi_pane_g1_ParamLimits

0xa894,	// (0x0002525f) cell_vkb2_top_candi_pane_g1

0xa8a2,	// (0x0002526d) cell_vkb2_top_candi_pane_g2_ParamLimits

0xa8a2,	// (0x0002526d) cell_vkb2_top_candi_pane_g2

0x0937,	// (0x0001b302) cell_vkb2_top_candi_pane_g3_ParamLimits

0x0937,	// (0x0001b302) cell_vkb2_top_candi_pane_g3

0xb0d9,	// (0x00025aa4) cell_vkb2_top_candi_pane_g4_ParamLimits

0xb0d9,	// (0x00025aa4) cell_vkb2_top_candi_pane_g4

0xc9c1,	// (0x0002738c) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc9c1,	// (0x0002738c) cell_vkb2_top_candi_pane_g5

0xb0fa,	// (0x00025ac5) cell_vkb2_top_candi_pane_g6_ParamLimits

0xb0fa,	// (0x00025ac5) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfb,	// (0x0002a7c6) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfb,	// (0x0002a7c6) cell_vkb2_top_candi_pane_g

0xb108,	// (0x00025ad3) cell_vkb2_top_candi_pane_t1

0xa467,	// (0x00024e32) aid_size_touch_slider_mark_ParamLimits

0xa467,	// (0x00024e32) aid_size_touch_slider_mark

0x056f,	// (0x0001af3a) grid_graphic2_catg_pane_ParamLimits

0x056f,	// (0x0001af3a) grid_graphic2_catg_pane

0x05cf,	// (0x0001af9a) popup_grid_graphic2_window_t1_ParamLimits

0x05cf,	// (0x0001af9a) popup_grid_graphic2_window_t1

0x05e1,	// (0x0001afac) popup_grid_graphic2_window_t2_ParamLimits

0x05e1,	// (0x0001afac) popup_grid_graphic2_window_t2

0x0001,

0xfdb6,	// (0x0002a781) popup_grid_graphic2_window_t_ParamLimits

0xfdb6,	// (0x0002a781) popup_grid_graphic2_window_t

0x65b8,	// (0x00020f83) bg_button_pane_cp05_ParamLimits

0x0723,	// (0x0001b0ee) cell_graphic2_control_pane_g1_ParamLimits

0x096e,	// (0x0001b339) cell_graphic2_catg_pane_ParamLimits

0x096e,	// (0x0001b339) cell_graphic2_catg_pane

0x5f28,	// (0x000208f3) bg_button_pane_cp12

0x0980,	// (0x0001b34b) cell_graphic2_catg_pane_g1

0xefe9,	// (0x000299b4) cell_tb_ext_pane_t1_ParamLimits

0xaed3,	// (0x0002589e) vkb2_top_cell_right_narrow_pane_ParamLimits

0xaed3,	// (0x0002589e) vkb2_top_cell_right_narrow_pane

0xaeeb,	// (0x000258b6) vkb2_top_cell_right_wide_pane_ParamLimits

0xaeeb,	// (0x000258b6) vkb2_top_cell_right_wide_pane

0xa641,	// (0x0002500c) bg_vkb2_func_pane_ParamLimits

0xa641,	// (0x0002500c) bg_vkb2_func_pane

0xaf5c,	// (0x00025927) vkb2_top_cell_left_pane_g1_ParamLimits

0xa641,	// (0x0002500c) bg_vkb2_fuc_pane_cp03_ParamLimits

0xa641,	// (0x0002500c) bg_vkb2_fuc_pane_cp03

0xafba,	// (0x00025985) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x7648,	// (0x00022013) bg_vkb2_func_pane_g1

0x7640,	// (0x0002200b) bg_vkb2_func_pane_g2

0x7650,	// (0x0002201b) bg_vkb2_func_pane_g3

0x7658,	// (0x00022023) bg_vkb2_func_pane_g4

0x7660,	// (0x0002202b) bg_vkb2_func_pane_g5

0x7668,	// (0x00022033) bg_vkb2_func_pane_g6

0x7678,	// (0x00022043) bg_vkb2_func_pane_g7

0x7670,	// (0x0002203b) bg_vkb2_func_pane_g8

0x7638,	// (0x00022003) bg_vkb2_func_pane_g9

0x0008,

0xfe08,	// (0x0002a7d3) bg_vkb2_func_pane_g

0xa641,	// (0x0002500c) bg_vkb2_fuc_pane_cp01_ParamLimits

0xa641,	// (0x0002500c) bg_vkb2_fuc_pane_cp01

0xaf5c,	// (0x00025927) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xaf5c,	// (0x00025927) vkb2_top_cell_right_wide_pane_g1

0xa641,	// (0x0002500c) bg_vkb2_fuc_pane_cp02_ParamLimits

0xa641,	// (0x0002500c) bg_vkb2_fuc_pane_cp02

0xafba,	// (0x00025985) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xafba,	// (0x00025985) vkb2_top_cell_right_narrow_pane_g1

0xec42,	// (0x0002960d) aid_touch_area_decrease_ParamLimits

0xec42,	// (0x0002960d) aid_touch_area_decrease

0xec5a,	// (0x00029625) aid_touch_area_increase_ParamLimits

0xec5a,	// (0x00029625) aid_touch_area_increase

0xec66,	// (0x00029631) aid_touch_area_mute_ParamLimits

0xec66,	// (0x00029631) aid_touch_area_mute

0xec82,	// (0x0002964d) aid_touch_area_slider_ParamLimits

0xec82,	// (0x0002964d) aid_touch_area_slider

0xed68,	// (0x00029733) popup_slider_window_g4_ParamLimits

0xed68,	// (0x00029733) popup_slider_window_g4

0xed74,	// (0x0002973f) popup_slider_window_g5_ParamLimits

0xed74,	// (0x0002973f) popup_slider_window_g5

0xed96,	// (0x00029761) popup_slider_window_g6_ParamLimits

0xed96,	// (0x00029761) popup_slider_window_g6

0xedd4,	// (0x0002979f) popup_slider_window_t2_ParamLimits

0xedd4,	// (0x0002979f) popup_slider_window_t2

0x0001,

0xfd04,	// (0x0002a6cf) popup_slider_window_t_ParamLimits

0xfd04,	// (0x0002a6cf) popup_slider_window_t

0xedec,	// (0x000297b7) slider_pane_ParamLimits

0xedec,	// (0x000297b7) slider_pane

0x0989,	// (0x0001b354) slider_pane_g1_ParamLimits

0x0989,	// (0x0001b354) slider_pane_g1

0x099d,	// (0x0001b368) slider_pane_g2_ParamLimits

0x099d,	// (0x0001b368) slider_pane_g2

0x09b3,	// (0x0001b37e) slider_pane_g3_ParamLimits

0x09b3,	// (0x0001b37e) slider_pane_g3

0x0003,

0xfe1b,	// (0x0002a7e6) slider_pane_g_ParamLimits

0xfe1b,	// (0x0002a7e6) slider_pane_g

0x9d27,	// (0x000246f2) popup_tb_float_extension_window_ParamLimits

0x9d27,	// (0x000246f2) popup_tb_float_extension_window

0x09df,	// (0x0001b3aa) aid_size_cell_tb_float_ext

0x5f28,	// (0x000208f3) bg_popup_sub_window_cp28

0x09ea,	// (0x0001b3b5) grid_tb_float_ext_pane

0x09f2,	// (0x0001b3bd) cell_tb_float_ext_pane_ParamLimits

0x09f2,	// (0x0001b3bd) cell_tb_float_ext_pane

0x0a0a,	// (0x0001b3d5) cell_tb_float_ext_pane_g1

0x0a13,	// (0x0001b3de) grid_highlight_pane_cp12

0xa78a,	// (0x00025155) cell_last_hwr_side_pane_ParamLimits

0xa78a,	// (0x00025155) cell_last_hwr_side_pane

0xc3bd,	// (0x00026d88) cell_last_hwr_side_pane_g1

0x0a1c,	// (0x0001b3e7) cell_last_hwr_side_pane_g2

0x0001,

0xfe24,	// (0x0002a7ef) cell_last_hwr_side_pane_g

0xae90,	// (0x0002585b) vkb2_area_bottom_space_btn_pane_ParamLimits

0xae90,	// (0x0002585b) vkb2_area_bottom_space_btn_pane

0xa894,	// (0x0002525f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x0503,	// (0x0001aece) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xb108,	// (0x00025ad3) cell_vkb2_top_candi_pane_t1_ParamLimits

0xb11e,	// (0x00025ae9) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xb11e,	// (0x00025ae9) vkb2_area_bottom_space_btn_pane_g1

0xb154,	// (0x00025b1f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xb154,	// (0x00025b1f) vkb2_area_bottom_space_btn_pane_g2

0xb18a,	// (0x00025b55) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xb18a,	// (0x00025b55) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe29,	// (0x0002a7f4) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe29,	// (0x0002a7f4) vkb2_area_bottom_space_btn_pane_g

0xa6fe,	// (0x000250c9) cel_fep_hwr_func_pane_ParamLimits

0xa6fe,	// (0x000250c9) cel_fep_hwr_func_pane

0xa73a,	// (0x00025105) cell_hwr_side_button_pane_ParamLimits

0xa73a,	// (0x00025105) cell_hwr_side_button_pane

0xf01d,	// (0x000299e8) aid_area_touch_clock_ParamLimits

0x6177,	// (0x00020b42) bg_uniindi_top_pane_ParamLimits

0xf02f,	// (0x000299fa) uniindi_top_pane_g1_ParamLimits

0xf045,	// (0x00029a10) uniindi_top_pane_g2_ParamLimits

0xf051,	// (0x00029a1c) uniindi_top_pane_g3_ParamLimits

0xf062,	// (0x00029a2d) uniindi_top_pane_g4_ParamLimits

0xfd3c,	// (0x0002a707) uniindi_top_pane_g_ParamLimits

0xf06f,	// (0x00029a3a) uniindi_top_pane_t1_ParamLimits

0x6177,	// (0x00020b42) bg_vkb2_func_pane_cp01_ParamLimits

0x6177,	// (0x00020b42) bg_vkb2_func_pane_cp01

0x0ad7,	// (0x0001b4a2) cel_fep_hwr_func_pane_g1_ParamLimits

0x0ad7,	// (0x0001b4a2) cel_fep_hwr_func_pane_g1

0x6177,	// (0x00020b42) bg_vkb2_func_pane_cp02_ParamLimits

0x6177,	// (0x00020b42) bg_vkb2_func_pane_cp02

0x0ad7,	// (0x0001b4a2) cell_hwr_side_button_pane_g1_ParamLimits

0x0ad7,	// (0x0001b4a2) cell_hwr_side_button_pane_g1

0x755c,	// (0x00021f27) status_pane_g4_ParamLimits

0x755c,	// (0x00021f27) status_pane_g4

0x7574,	// (0x00021f3f) status_pane_t1

0xc24b,	// (0x00026c16) form2_midp_gauge_slider_cont_pane

0xc253,	// (0x00026c1e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe6cc,	// (0x00029097) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe6de,	// (0x000290a9) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb03,	// (0x0002a4ce) form2_midp_gauge_slider_pane_t_ParamLimits

0xc265,	// (0x00026c30) form2_midp_slider_pane_ParamLimits

0xab4b,	// (0x00025516) aid_size_cell_func_vkb2_ParamLimits

0xab4b,	// (0x00025516) aid_size_cell_func_vkb2

0x09cb,	// (0x0001b396) slider_pane_g4_ParamLimits

0x09cb,	// (0x0001b396) slider_pane_g4

0xb1d0,	// (0x00025b9b) form2_midp_gauge_slider_pane_t2_cp01

0xb1de,	// (0x00025ba9) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb1de,	// (0x00025ba9) form2_midp_gauge_slider_pane_t3_cp01

0xb1fb,	// (0x00025bc6) form2_midp_slider_pane_cp01

0x5f28,	// (0x000208f3) navi_smil_pane

0x0b44,	// (0x0001b50f) navi_smil_pane_g1

0x0b4c,	// (0x0001b517) navi_smil_pane_t1

0x0b19,	// (0x0001b4e4) form2_midp_slider_pane_g1

0x0b22,	// (0x0001b4ed) form2_midp_slider_pane_g2

0x0b2a,	// (0x0001b4f5) form2_midp_slider_pane_g3

0x0b19,	// (0x0001b4e4) form2_midp_slider_pane_g4

0x0b32,	// (0x0001b4fd) form2_midp_slider_pane_g5

0x0004,

0xfe32,	// (0x0002a7fd) form2_midp_slider_pane_g

0xb1c0,	// (0x00025b8b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xb1c0,	// (0x00025b8b) vkb2_area_bottom_space_btn_pane_g4

0x9e68,	// (0x00024833) lc0_navi_pane_ParamLimits

0x9e68,	// (0x00024833) lc0_navi_pane

0x9ede,	// (0x000248a9) lc0_stat_indi_pane_ParamLimits

0x9ede,	// (0x000248a9) lc0_stat_indi_pane

0x9ef5,	// (0x000248c0) ls0_title_pane_ParamLimits

0x9ef5,	// (0x000248c0) ls0_title_pane

0x65b8,	// (0x00020f83) bg_popup_sub_pane_cp14_ParamLimits

0xf004,	// (0x000299cf) list_uniindi_pane_ParamLimits

0xf010,	// (0x000299db) uniindi_top_pane_ParamLimits

0xf0ab,	// (0x00029a76) list_single_uniindi_pane_g1_ParamLimits

0xf0be,	// (0x00029a89) list_single_uniindi_pane_t1_ParamLimits

0xb204,	// (0x00025bcf) lc0_stat_clock_pane_ParamLimits

0xb204,	// (0x00025bcf) lc0_stat_clock_pane

0x0b74,	// (0x0001b53f) lc0_stat_indi_pane_g1_ParamLimits

0x0b74,	// (0x0001b53f) lc0_stat_indi_pane_g1

0x0b67,	// (0x0001b532) lc0_stat_indi_pane_g2_ParamLimits

0x0b67,	// (0x0001b532) lc0_stat_indi_pane_g2

0x0001,

0xfe3d,	// (0x0002a808) lc0_stat_indi_pane_g_ParamLimits

0xfe3d,	// (0x0002a808) lc0_stat_indi_pane_g

0xb211,	// (0x00025bdc) lc0_uni_indicator_pane_ParamLimits

0xb211,	// (0x00025bdc) lc0_uni_indicator_pane

0x0b8e,	// (0x0001b559) ls0_title_pane_g1_ParamLimits

0x0b8e,	// (0x0001b559) ls0_title_pane_g1

0x0ba2,	// (0x0001b56d) ls0_title_pane_t1_ParamLimits

0x0ba2,	// (0x0001b56d) ls0_title_pane_t1

0xb21e,	// (0x00025be9) lc0_uni_indicator_pane_g1_ParamLimits

0xb21e,	// (0x00025be9) lc0_uni_indicator_pane_g1

0x0bea,	// (0x0001b5b5) lc0_stat_clock_pane_t1

0x5f28,	// (0x000208f3) main_ai5_pane

0x0bf8,	// (0x0001b5c3) ai5_sk_pane_ParamLimits

0x0bf8,	// (0x0001b5c3) ai5_sk_pane

0x0c05,	// (0x0001b5d0) cell_ai5_widget_pane_ParamLimits

0x0c05,	// (0x0001b5d0) cell_ai5_widget_pane

0x0c5e,	// (0x0001b629) aid_size_cell_widget_grid

0x0c70,	// (0x0001b63b) bg_ai5_widget_pane_ParamLimits

0x0c70,	// (0x0001b63b) bg_ai5_widget_pane

0x0c98,	// (0x0001b663) cell_ai5_widget_pane_g2

0x0ca8,	// (0x0001b673) cell_ai5_widget_pane_g3

0x0cc7,	// (0x0001b692) cell_ai5_widget_pane_g4

0x0cd3,	// (0x0001b69e) cell_ai5_widget_pane_g5

0x0cdf,	// (0x0001b6aa) cell_ai5_widget_pane_g6

0x0ceb,	// (0x0001b6b6) cell_ai5_widget_pane_g7

0x0d33,	// (0x0001b6fe) cell_ai5_widget_pane_t1_ParamLimits

0x0d33,	// (0x0001b6fe) cell_ai5_widget_pane_t1

0x0d50,	// (0x0001b71b) cell_ai5_widget_pane_t2_ParamLimits

0x0d50,	// (0x0001b71b) cell_ai5_widget_pane_t2

0x0d68,	// (0x0001b733) cell_ai5_widget_pane_t3_ParamLimits

0x0d68,	// (0x0001b733) cell_ai5_widget_pane_t3

0x0d80,	// (0x0001b74b) cell_ai5_widget_pane_t4_ParamLimits

0x0d80,	// (0x0001b74b) cell_ai5_widget_pane_t4

0x0d9a,	// (0x0001b765) cell_ai5_widget_pane_t5_ParamLimits

0x0d9a,	// (0x0001b765) cell_ai5_widget_pane_t5

0x0db9,	// (0x0001b784) cell_ai5_widget_pane_t6_ParamLimits

0x0db9,	// (0x0001b784) cell_ai5_widget_pane_t6

0x0dcb,	// (0x0001b796) cell_ai5_widget_pane_t7_ParamLimits

0x0dcb,	// (0x0001b796) cell_ai5_widget_pane_t7

0x0de4,	// (0x0001b7af) cell_ai5_widget_pane_t8_ParamLimits

0x0de4,	// (0x0001b7af) cell_ai5_widget_pane_t8

0x0009,

0xfe57,	// (0x0002a822) cell_ai5_widget_pane_t_ParamLimits

0xfe57,	// (0x0002a822) cell_ai5_widget_pane_t

0x0e2f,	// (0x0001b7fa) grid_ai5_widget_pane

0x65b8,	// (0x00020f83) highlight_cell_ai5_widget_pane_ParamLimits

0x65b8,	// (0x00020f83) highlight_cell_ai5_widget_pane

0x0e43,	// (0x0001b80e) ai5_sk_left_pane

0x0e4d,	// (0x0001b818) ai5_sk_middle_pane

0x0e57,	// (0x0001b822) ai5_sk_right_pane

0x0e61,	// (0x0001b82c) bg_ai5_widget_pane_g1_ParamLimits

0x0e61,	// (0x0001b82c) bg_ai5_widget_pane_g1

0x0e6d,	// (0x0001b838) bg_ai5_widget_pane_g2_ParamLimits

0x0e6d,	// (0x0001b838) bg_ai5_widget_pane_g2

0x0e79,	// (0x0001b844) bg_ai5_widget_pane_g3_ParamLimits

0x0e79,	// (0x0001b844) bg_ai5_widget_pane_g3

0x0e85,	// (0x0001b850) bg_ai5_widget_pane_g4_ParamLimits

0x0e85,	// (0x0001b850) bg_ai5_widget_pane_g4

0x0e91,	// (0x0001b85c) bg_ai5_widget_pane_g5_ParamLimits

0x0e91,	// (0x0001b85c) bg_ai5_widget_pane_g5

0x0e9d,	// (0x0001b868) bg_ai5_widget_pane_g6_ParamLimits

0x0e9d,	// (0x0001b868) bg_ai5_widget_pane_g6

0x0ea9,	// (0x0001b874) bg_ai5_widget_pane_g7_ParamLimits

0x0ea9,	// (0x0001b874) bg_ai5_widget_pane_g7

0x0eb5,	// (0x0001b880) bg_ai5_widget_pane_g8_ParamLimits

0x0eb5,	// (0x0001b880) bg_ai5_widget_pane_g8

0x0ec1,	// (0x0001b88c) bg_ai5_widget_pane_g9_ParamLimits

0x0ec1,	// (0x0001b88c) bg_ai5_widget_pane_g9

0x0008,

0xfe6c,	// (0x0002a837) bg_ai5_widget_pane_g_ParamLimits

0xfe6c,	// (0x0002a837) bg_ai5_widget_pane_g

0x0ef3,	// (0x0001b8be) cell_shortcut_ai5_widget_pane_ParamLimits

0x0ef3,	// (0x0001b8be) cell_shortcut_ai5_widget_pane

0x6080,	// (0x00020a4b) bg_cell_shortcut_ai5_widget_pane

0x0eff,	// (0x0001b8ca) cell_grid_ai5_widget_pane_g1

0x0f08,	// (0x0001b8d3) highlight_cell_shortcut_ai5_widget_pane

0x7648,	// (0x00022013) ai5_sk_left_pane_g1

0x0f10,	// (0x0001b8db) ai5_sk_left_pane_g2

0x0f18,	// (0x0001b8e3) ai5_sk_left_pane_g3

0x0f20,	// (0x0001b8eb) ai5_sk_left_pane_g4

0x0003,

0xfe7f,	// (0x0002a84a) ai5_sk_left_pane_g

0x0f28,	// (0x0001b8f3) ai5_sk_left_pane_t1

0x7640,	// (0x0002200b) ai5_sk_right_pane_g1

0x0f36,	// (0x0001b901) ai5_sk_right_pane_g2

0x0f3e,	// (0x0001b909) ai5_sk_right_pane_g3

0x0f46,	// (0x0001b911) ai5_sk_right_pane_g4

0x0003,

0xfe88,	// (0x0002a853) ai5_sk_right_pane_g

0x0f4e,	// (0x0001b919) ai5_sk_right_pane_t1

0x7640,	// (0x0002200b) ai5_sk_middle_pane_g1

0x7648,	// (0x00022013) ai5_sk_middle_pane_g2

0x7660,	// (0x0002202b) ai5_sk_middle_pane_g3

0x0f3e,	// (0x0001b909) ai5_sk_middle_pane_g4

0x0f18,	// (0x0001b8e3) ai5_sk_middle_pane_g5

0x0f5c,	// (0x0001b927) ai5_sk_middle_pane_g6

0x0f64,	// (0x0001b92f) ai5_sk_middle_pane_g7

0x0006,

0xfe91,	// (0x0002a85c) ai5_sk_middle_pane_g

0x9db5,	// (0x00024780) aid_touch_area_size_lc0_ParamLimits

0x9db5,	// (0x00024780) aid_touch_area_size_lc0

0xa8c3,	// (0x0002528e) cell_hwr_candidate_pane_t1_ParamLimits

0x7491,	// (0x00021e5c) aid_touch_navi_pane

0x9fc7,	// (0x00024992) status_dt_navi_pane_ParamLimits

0x9fc7,	// (0x00024992) status_dt_navi_pane

0x9fd4,	// (0x0002499f) status_dt_sta_pane_ParamLimits

0x9fd4,	// (0x0002499f) status_dt_sta_pane

0x0f6c,	// (0x0001b937) dt_sta_controll_pane

0x0f79,	// (0x0001b944) dt_sta_indi_pane

0x0f8a,	// (0x0001b955) dt_sta_title_pane

0x6177,	// (0x00020b42) bg_dt_sta_indi_pane_ParamLimits

0x6177,	// (0x00020b42) bg_dt_sta_indi_pane

0x0f9d,	// (0x0001b968) dt_sta_battery_pane

0x0fa5,	// (0x0001b970) dt_sta_indi_pane_g1

0x0fae,	// (0x0001b979) dt_sta_indi_pane_g2

0x0fb7,	// (0x0001b982) dt_sta_indi_pane_g3

0x0002,

0xfea0,	// (0x0002a86b) dt_sta_indi_pane_g

0x0fc0,	// (0x0001b98b) dt_sta_signal_pane

0x65b8,	// (0x00020f83) bg_dt_sta_title_pane_ParamLimits

0x65b8,	// (0x00020f83) bg_dt_sta_title_pane

0x0fc9,	// (0x0001b994) dt_sta_title_pane_g1

0x0fd1,	// (0x0001b99c) dt_sta_title_pane_t1_ParamLimits

0x0fd1,	// (0x0001b99c) dt_sta_title_pane_t1

0x5f28,	// (0x000208f3) bg_dt_sta_control_pane

0x0fe6,	// (0x0001b9b1) dt_sta_controll_pane_g1

0x0fef,	// (0x0001b9ba) bg_dt_sta_title_pane_g1

0x0ff8,	// (0x0001b9c3) bg_dt_sta_title_pane_g2

0x1001,	// (0x0001b9cc) bg_dt_sta_title_pane_g3

0x0002,

0xfea7,	// (0x0002a872) bg_dt_sta_title_pane_g

0xc3bd,	// (0x00026d88) bg_dt_sta_indi_pane_g1

0x100a,	// (0x0001b9d5) dt_sta_signal_pane_g1

0x1012,	// (0x0001b9dd) dt_sta_signal_pane_g2

0x0001,

0xfeae,	// (0x0002a879) dt_sta_signal_pane_g

0x101a,	// (0x0001b9e5) dt_sta_battery_pane_g1

0x1023,	// (0x0001b9ee) dt_sta_battery_pane_t1

0xc3bd,	// (0x00026d88) bg_dt_sta_control_pane_g1

0x6cf2,	// (0x000216bd) fep_china_uni_eep_pane

0x6cfa,	// (0x000216c5) fep_china_uni_entry_pane_ParamLimits

0x6d0a,	// (0x000216d5) popup_fep_china_uni_window_g1_ParamLimits

0x6d1a,	// (0x000216e5) popup_fep_china_uni_window_g2_ParamLimits

0x6d1a,	// (0x000216e5) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0002a0fb) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0002a0fb) popup_fep_china_uni_window_g

0x1032,	// (0x0001b9fd) fep_china_uni_eep_pane_g1

0x103a,	// (0x0001ba05) fep_china_uni_eep_pane_t1

0x0b3b,	// (0x0001b506) aid_touch_area_size_smil_player

0x752f,	// (0x00021efa) lc0_clock_pane

0x7568,	// (0x00021f33) status_pane_g5_ParamLimits

0x7568,	// (0x00021f33) status_pane_g5

0x9ad7,	// (0x000244a2) popup_keymap_window

0x7548,	// (0x00021f13) status_icon_pane

0x0ca8,	// (0x0001b673) cell_ai5_widget_pane_g3_ParamLimits

0x0cc7,	// (0x0001b692) cell_ai5_widget_pane_g4_ParamLimits

0x0cd3,	// (0x0001b69e) cell_ai5_widget_pane_g5_ParamLimits

0x0cf7,	// (0x0001b6c2) cell_ai5_widget_pane_g8_ParamLimits

0x0cf7,	// (0x0001b6c2) cell_ai5_widget_pane_g8

0x0d0b,	// (0x0001b6d6) cell_ai5_widget_pane_g9_ParamLimits

0x0d0b,	// (0x0001b6d6) cell_ai5_widget_pane_g9

0x0d1f,	// (0x0001b6ea) cell_ai5_widget_pane_g10_ParamLimits

0x0d1f,	// (0x0001b6ea) cell_ai5_widget_pane_g10

0x1049,	// (0x0001ba14) status_icon_pane_g1

0x5f28,	// (0x000208f3) bg_popup_sub_pane_cp13

0x1051,	// (0x0001ba1c) popup_keymap_window_t1

0x98de,	// (0x000242a9) control_pane_g6_ParamLimits

0x98de,	// (0x000242a9) control_pane_g6

0x98eb,	// (0x000242b6) control_pane_g7_ParamLimits

0x98eb,	// (0x000242b6) control_pane_g7

0x98f8,	// (0x000242c3) control_pane_g8_ParamLimits

0x98f8,	// (0x000242c3) control_pane_g8

0x0f6c,	// (0x0001b937) dt_sta_controll_pane_ParamLimits

0x0f79,	// (0x0001b944) dt_sta_indi_pane_ParamLimits

0x0f8a,	// (0x0001b955) dt_sta_title_pane_ParamLimits

0x6509,	// (0x00020ed4) aid_size_touch_scroll_bar_cale

0x8d4d,	// (0x00023718) popup_discreet_window_ParamLimits

0x8d4d,	// (0x00023718) popup_discreet_window

0x8db1,	// (0x0002377c) popup_sk_window

0x7bdb,	// (0x000225a6) bg_popup_sub_pane_cp28_ParamLimits

0x7bdb,	// (0x000225a6) bg_popup_sub_pane_cp28

0x105f,	// (0x0001ba2a) popup_discreet_window_g1_ParamLimits

0x105f,	// (0x0001ba2a) popup_discreet_window_g1

0x107f,	// (0x0001ba4a) popup_discreet_window_t1_ParamLimits

0x107f,	// (0x0001ba4a) popup_discreet_window_t1

0x109d,	// (0x0001ba68) popup_discreet_window_t2_ParamLimits

0x109d,	// (0x0001ba68) popup_discreet_window_t2

0x0002,

0xfeb3,	// (0x0002a87e) popup_discreet_window_t_ParamLimits

0xfeb3,	// (0x0002a87e) popup_discreet_window_t

0xb230,	// (0x00025bfb) popup_sk_window_g1

0xb239,	// (0x00025c04) popup_sk_window_g2

0x0001,

0xfeba,	// (0x0002a885) popup_sk_window_g

0x110f,	// (0x0001bada) popup_sk_window_t1

0x1101,	// (0x0001bacc) popup_sk_window_t1_copy1

0x0c98,	// (0x0001b663) cell_ai5_widget_pane_g2_ParamLimits

0x0df6,	// (0x0001b7c1) cell_ai5_widget_pane_t9_ParamLimits

0x0df6,	// (0x0001b7c1) cell_ai5_widget_pane_t9

0x5f28,	// (0x000208f3) main_fep_fshwr2_pane

0x111d,	// (0x0001bae8) aid_fshwr2_btn_pane

0x1125,	// (0x0001baf0) aid_fshwr2_syb_pane

0x112d,	// (0x0001baf8) aid_fshwr2_txt_pane

0x1135,	// (0x0001bb00) fshwr2_func_candi_pane

0x113d,	// (0x0001bb08) fshwr2_hwr_syb_pane

0x1145,	// (0x0001bb10) fshwr2_icf_pane

0x5f28,	// (0x000208f3) fshwr2_icf_bg_pane

0x115f,	// (0x0001bb2a) fshwr2_icf_pane_t1_ParamLimits

0x115f,	// (0x0001bb2a) fshwr2_icf_pane_t1

0xc3bd,	// (0x00026d88) fshwr2_func_candi_pane_g1

0x1176,	// (0x0001bb41) fshwr2_func_candi_row_pane_ParamLimits

0x1176,	// (0x0001bb41) fshwr2_func_candi_row_pane

0x1187,	// (0x0001bb52) cell_fshwr2_syb_pane_ParamLimits

0x1187,	// (0x0001bb52) cell_fshwr2_syb_pane

0xc5eb,	// (0x00026fb6) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc5eb,	// (0x00026fb6) fshwr2_hwr_syb_pane_g1

0x5f28,	// (0x000208f3) bg_popup_call_pane_cp01

0x119e,	// (0x0001bb69) fshwr2_func_candi_cell_pane_ParamLimits

0x119e,	// (0x0001bb69) fshwr2_func_candi_cell_pane

0x11c9,	// (0x0001bb94) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x11c9,	// (0x0001bb94) fshwr2_func_candi_cell_bg_pane

0x11e3,	// (0x0001bbae) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x11e3,	// (0x0001bbae) fshwr2_func_candi_cell_pane_g1

0x1203,	// (0x0001bbce) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x1203,	// (0x0001bbce) fshwr2_func_candi_cell_pane_t1

0x5f28,	// (0x000208f3) bg_button_pane_cp08

0x7122,	// (0x00021aed) cell_fshwr2_syb_bg_pane

0x1216,	// (0x0001bbe1) cell_fshwr2_syb_bg_pane_g1

0x121e,	// (0x0001bbe9) cell_fshwr2_syb_bg_pane_t1

0x65b8,	// (0x00020f83) main_tmo_pane

0xe048,	// (0x00028a13) uni_indicator_pane_g1_ParamLimits

0xe05d,	// (0x00028a28) uni_indicator_pane_g2_ParamLimits

0xe073,	// (0x00028a3e) uni_indicator_pane_g3_ParamLimits

0xb657,	// (0x00026022) uni_indicator_pane_g4_ParamLimits

0xb657,	// (0x00026022) uni_indicator_pane_g4

0xb66b,	// (0x00026036) uni_indicator_pane_g5_ParamLimits

0xb66b,	// (0x00026036) uni_indicator_pane_g5

0xb67f,	// (0x0002604a) uni_indicator_pane_g6_ParamLimits

0xb67f,	// (0x0002604a) uni_indicator_pane_g6

0xf92d,	// (0x0002a2f8) uni_indicator_pane_g_ParamLimits

0xec26,	// (0x000295f1) popup_tmo_note_window_ParamLimits

0xec26,	// (0x000295f1) popup_tmo_note_window

0x5f28,	// (0x000208f3) fshwr2_bg_pane

0x11f4,	// (0x0001bbbf) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x11f4,	// (0x0001bbbf) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebf,	// (0x0002a88a) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebf,	// (0x0002a88a) fshwr2_func_candi_cell_pane_g

0xc3bd,	// (0x00026d88) bg_popup_window_pane_cp01

0x122d,	// (0x0001bbf8) bg_popup_window_pane_g1_cp01

0x1236,	// (0x0001bc01) bg_popup_window_pane_cp22_ParamLimits

0x1236,	// (0x0001bc01) bg_popup_window_pane_cp22

0x1244,	// (0x0001bc0f) listscroll_tmo_link_pane_ParamLimits

0x1244,	// (0x0001bc0f) listscroll_tmo_link_pane

0x1284,	// (0x0001bc4f) popup_tmo_note_window_g1_ParamLimits

0x1284,	// (0x0001bc4f) popup_tmo_note_window_g1

0x1291,	// (0x0001bc5c) tmo_note_info_pane_ParamLimits

0x1291,	// (0x0001bc5c) tmo_note_info_pane

0x12ab,	// (0x0001bc76) list_tmo_note_info_pane_g1_ParamLimits

0x12ab,	// (0x0001bc76) list_tmo_note_info_pane_g1

0x12c2,	// (0x0001bc8d) list_tmo_note_info_pane_g2_ParamLimits

0x12c2,	// (0x0001bc8d) list_tmo_note_info_pane_g2

0x0001,

0xfec4,	// (0x0002a88f) list_tmo_note_info_pane_g_ParamLimits

0xfec4,	// (0x0002a88f) list_tmo_note_info_pane_g

0x12de,	// (0x0001bca9) list_tmo_note_info_text_pane_ParamLimits

0x12de,	// (0x0001bca9) list_tmo_note_info_text_pane

0x135f,	// (0x0001bd2a) list_tmo_link_pane

0x136c,	// (0x0001bd37) scroll_pane_cp20

0x1379,	// (0x0001bd44) list_single_tmo_link_pane_ParamLimits

0x1379,	// (0x0001bd44) list_single_tmo_link_pane

0x1389,	// (0x0001bd54) list_single_tmo_link_pane_t1

0x1397,	// (0x0001bd62) list_tmo_note_info_text_pane_t1_ParamLimits

0x1397,	// (0x0001bd62) list_tmo_note_info_text_pane_t1

0x6686,	// (0x00021051) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6686,	// (0x00021051) aid_size_touch_scroll_bar_cp01

0xd38a,	// (0x00027d55) aid_size_touch_slider_marker

0x8d9d,	// (0x00023768) popup_settings_window_ParamLimits

0x8d9d,	// (0x00023768) popup_settings_window

0xd53a,	// (0x00027f05) popup_candi_list_indi_window

0x7491,	// (0x00021e5c) aid_touch_navi_pane_ParamLimits

0xaa83,	// (0x0002544e) rs_clock_indi_pane

0xaa8c,	// (0x00025457) sctrl_sk_bottom_pane_ParamLimits

0xaa9d,	// (0x00025468) sctrl_sk_top_pane_ParamLimits

0xaba5,	// (0x00025570) popup_fep_tooltip_window

0x0c5e,	// (0x0001b629) aid_size_cell_widget_grid_ParamLimits

0x0c8c,	// (0x0001b657) cell_ai5_widget_pane_g1_ParamLimits

0x0c8c,	// (0x0001b657) cell_ai5_widget_pane_g1

0x0cdf,	// (0x0001b6aa) cell_ai5_widget_pane_g6_ParamLimits

0x0ceb,	// (0x0001b6b6) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe42,	// (0x0002a80d) cell_ai5_widget_pane_g_ParamLimits

0xfe42,	// (0x0002a80d) cell_ai5_widget_pane_g

0x0e1a,	// (0x0001b7e5) cell_ai5_widget_pane_t10_ParamLimits

0x0e1a,	// (0x0001b7e5) cell_ai5_widget_pane_t10

0x0e2f,	// (0x0001b7fa) grid_ai5_widget_pane_ParamLimits

0x0ecd,	// (0x0001b898) cell_contacts_ai5_widget_pane_ParamLimits

0x0ecd,	// (0x0001b898) cell_contacts_ai5_widget_pane

0x10b2,	// (0x0001ba7d) popup_discreet_window_t3_ParamLimits

0x10b2,	// (0x0001ba7d) popup_discreet_window_t3

0x114d,	// (0x0001bb18) popup_fshwr2_char_preview_window_ParamLimits

0x114d,	// (0x0001bb18) popup_fshwr2_char_preview_window

0x12fc,	// (0x0001bcc7) tmo_note_info_pane_t1

0x1311,	// (0x0001bcdc) tmo_note_info_pane_t2

0x1326,	// (0x0001bcf1) tmo_note_info_pane_t3

0x133b,	// (0x0001bd06) tmo_note_info_pane_t4

0x134d,	// (0x0001bd18) tmo_note_info_pane_t5

0x0004,

0xfec9,	// (0x0002a894) tmo_note_info_pane_t

0x135f,	// (0x0001bd2a) list_tmo_link_pane_ParamLimits

0x136c,	// (0x0001bd37) scroll_pane_cp20_ParamLimits

0x5f28,	// (0x000208f3) bg_popup_fep_char_preview_window_cp01

0x13b0,	// (0x0001bd7b) popup_fshwr2_char_preview_window_t1

0x13be,	// (0x0001bd89) popup_candi_list_indi_window_g1

0x13c7,	// (0x0001bd92) bg_cell_contacts_ai5_widget_pane

0x13d3,	// (0x0001bd9e) cell_contacts_ai5_widget_pane_g1

0x13e7,	// (0x0001bdb2) cell_contacts_ai5_widget_pane_g2

0x13f6,	// (0x0001bdc1) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed4,	// (0x0002a89f) cell_contacts_ai5_widget_pane_g

0x1409,	// (0x0001bdd4) cell_contacts_ai5_widget_pane_t1

0x65b8,	// (0x00020f83) highlight_cell_shortcut_ai5_widget_pane_cp01

0x1481,	// (0x0001be4c) settings_container_pane

0x7122,	// (0x00021aed) listscroll_set_pane_copy1

0xbda3,	// (0x0002676e) scroll_pane_cp121_copy1

0x148d,	// (0x0001be58) set_content_pane_copy1

0x1495,	// (0x0001be60) aid_height_set_list_copy1_ParamLimits

0x1495,	// (0x0001be60) aid_height_set_list_copy1

0xb818,	// (0x000261e3) aid_size_parent_copy1_ParamLimits

0xb818,	// (0x000261e3) aid_size_parent_copy1

0x14a1,	// (0x0001be6c) button_value_adjust_pane_cp6_copy1_ParamLimits

0x14a1,	// (0x0001be6c) button_value_adjust_pane_cp6_copy1

0x6aca,	// (0x00021495) list_highlight_pane_cp2_copy1_ParamLimits

0x6aca,	// (0x00021495) list_highlight_pane_cp2_copy1

0x14b5,	// (0x0001be80) list_set_pane_copy1_ParamLimits

0x14b5,	// (0x0001be80) list_set_pane_copy1

0x141e,	// (0x0001bde9) main_pane_set_t1_copy1_ParamLimits

0x141e,	// (0x0001bde9) main_pane_set_t1_copy1

0x1458,	// (0x0001be23) main_pane_set_t2_copy1_ParamLimits

0x1458,	// (0x0001be23) main_pane_set_t2_copy1

0x1543,	// (0x0001bf0e) main_pane_set_t3_copy1

0x1551,	// (0x0001bf1c) main_pane_set_t4_copy1

0x1475,	// (0x0001be40) set_content_pane_g1_copy1_ParamLimits

0x1475,	// (0x0001be40) set_content_pane_g1_copy1

0x155f,	// (0x0001bf2a) setting_code_pane_copy1

0x1567,	// (0x0001bf32) setting_slider_graphic_pane_copy1

0x1567,	// (0x0001bf32) setting_slider_pane_copy1

0x1567,	// (0x0001bf32) setting_text_pane_copy1

0x1567,	// (0x0001bf32) setting_volume_pane_copy1

0x156f,	// (0x0001bf3a) settings_code_pane_cp2_copy1

0x1577,	// (0x0001bf42) settings_code_pane_cp_copy1_ParamLimits

0x1577,	// (0x0001bf42) settings_code_pane_cp_copy1

0x158b,	// (0x0001bf56) volume_set_pane_copy1

0x1593,	// (0x0001bf5e) volume_set_pane_g10_copy1

0x159b,	// (0x0001bf66) volume_set_pane_g1_copy1

0x15a3,	// (0x0001bf6e) volume_set_pane_g2_copy1

0x15ab,	// (0x0001bf76) volume_set_pane_g3_copy1

0x15b3,	// (0x0001bf7e) volume_set_pane_g4_copy1

0x15bb,	// (0x0001bf86) volume_set_pane_g5_copy1

0x15c3,	// (0x0001bf8e) volume_set_pane_g6_copy1

0x15cb,	// (0x0001bf96) volume_set_pane_g7_copy1

0x15d3,	// (0x0001bf9e) volume_set_pane_g8_copy1

0x15db,	// (0x0001bfa6) volume_set_pane_g9_copy1

0x6018,	// (0x000209e3) bg_set_opt_pane_cp_copy1_ParamLimits

0x6018,	// (0x000209e3) bg_set_opt_pane_cp_copy1

0x6026,	// (0x000209f1) setting_slider_pane_t1_copy1_ParamLimits

0x6026,	// (0x000209f1) setting_slider_pane_t1_copy1

0x15e3,	// (0x0001bfae) setting_slider_pane_t2_copy1_ParamLimits

0x15e3,	// (0x0001bfae) setting_slider_pane_t2_copy1

0x15fc,	// (0x0001bfc7) setting_slider_pane_t3_copy1_ParamLimits

0x15fc,	// (0x0001bfc7) setting_slider_pane_t3_copy1

0x603c,	// (0x00020a07) slider_set_pane_copy1_ParamLimits

0x603c,	// (0x00020a07) slider_set_pane_copy1

0x6613,	// (0x00020fde) set_opt_bg_pane_g1_copy2

0x661b,	// (0x00020fe6) set_opt_bg_pane_g2_copy2

0x1613,	// (0x0001bfde) set_opt_bg_pane_g3_copy2

0x662b,	// (0x00020ff6) set_opt_bg_pane_g4_copy2

0x6633,	// (0x00020ffe) set_opt_bg_pane_g5_copy2

0x663b,	// (0x00021006) set_opt_bg_pane_g6_copy2

0x161b,	// (0x0001bfe6) set_opt_bg_pane_g7_copy2

0x1623,	// (0x0001bfee) set_opt_bg_pane_g8_copy2

0x162b,	// (0x0001bff6) set_opt_bg_pane_g9_copy2

0xcda5,	// (0x00027770) aid_size_touch_slider_mark_copy1_ParamLimits

0xcda5,	// (0x00027770) aid_size_touch_slider_mark_copy1

0xb82a,	// (0x000261f5) slider_set_pane_g1_copy1

0xb833,	// (0x000261fe) slider_set_pane_g2_copy1

0xcdb9,	// (0x00027784) slider_set_pane_g3_copy1_ParamLimits

0xcdb9,	// (0x00027784) slider_set_pane_g3_copy1

0xcdcd,	// (0x00027798) slider_set_pane_g4_copy1_ParamLimits

0xcdcd,	// (0x00027798) slider_set_pane_g4_copy1

0xcde5,	// (0x000277b0) slider_set_pane_g5_copy1_ParamLimits

0xcde5,	// (0x000277b0) slider_set_pane_g5_copy1

0xcdb9,	// (0x00027784) slider_set_pane_g6_copy1_ParamLimits

0xcdb9,	// (0x00027784) slider_set_pane_g6_copy1

0x1633,	// (0x0001bffe) slider_set_pane_g7_copy1_ParamLimits

0x1633,	// (0x0001bffe) slider_set_pane_g7_copy1

0x5fb4,	// (0x0002097f) bg_set_opt_pane_cp2_copy1

0x6052,	// (0x00020a1d) setting_slider_graphic_pane_g1_copy1

0x1649,	// (0x0001c014) setting_slider_graphic_pane_t1_copy1

0x1658,	// (0x0001c023) setting_slider_graphic_pane_t2_copy1

0x1667,	// (0x0001c032) slider_set_pane_cp_copy1

0x1677,	// (0x0001c042) input_focus_pane_cp1_copy1

0x1680,	// (0x0001c04b) list_set_text_pane_copy1

0x1688,	// (0x0001c053) setting_text_pane_g1_copy1

0xe53e,	// (0x00028f09) set_text_pane_t1_copy1

0x1677,	// (0x0001c042) input_focus_pane_cp2_copy1

0x1688,	// (0x0001c053) setting_code_pane_g1_copy1

0x1691,	// (0x0001c05c) setting_code_pane_t1_copy1

0x169f,	// (0x0001c06a) list_set_graphic_pane_copy1

0x5fb4,	// (0x0002097f) bg_set_opt_pane_cp4_copy1

0x16b3,	// (0x0001c07e) list_set_graphic_pane_g1_copy1_ParamLimits

0x16b3,	// (0x0001c07e) list_set_graphic_pane_g1_copy1

0x16bf,	// (0x0001c08a) list_set_graphic_pane_g2_copy1

0x6e9d,	// (0x00021868) list_set_graphic_pane_t1_copy1_ParamLimits

0x6e9d,	// (0x00021868) list_set_graphic_pane_t1_copy1

0xc3bd,	// (0x00026d88) rs_clock_indi_pane_g1

0x16c7,	// (0x0001c092) rs_clock_indi_pane_t1

0x16d5,	// (0x0001c0a0) rs_indi_pane

0x16dd,	// (0x0001c0a8) rs_indi_pane_g1

0x16e6,	// (0x0001c0b1) rs_indi_pane_g2

0x13be,	// (0x0001bd89) rs_indi_pane_g3

0x0002,

0xfedb,	// (0x0002a8a6) rs_indi_pane_g

0x7122,	// (0x00021aed) bg_popup_preview_window_pane_cp03

0x16ef,	// (0x0001c0ba) popup_fep_tooltip_window_t1

0xcd00,	// (0x000276cb) popup_note2_window_g2_ParamLimits

0xcd00,	// (0x000276cb) popup_note2_window_g2

0x0001,

0xfc7b,	// (0x0002a646) popup_note2_window_g_ParamLimits

0xfc7b,	// (0x0002a646) popup_note2_window_g

0xde34,	// (0x000287ff) bg_popup_sub_pane_cp11_ParamLimits

0xde41,	// (0x0002880c) cell_ai3_links_pane_g1_ParamLimits

0xde58,	// (0x00028823) cell_ai3_links_pane_t1

0xe53e,	// (0x00028f09) set_text_pane_t1_copy1_ParamLimits

0x7049,	// (0x00021a14) cell_graphic_popup_pane_cp2_ParamLimits

0x7049,	// (0x00021a14) cell_graphic_popup_pane_cp2

0x16fd,	// (0x0001c0c8) cell_graphic_popup_pane_g1_cp2

0x63b8,	// (0x00020d83) cell_graphic_popup_pane_g2_cp2

0x1705,	// (0x0001c0d0) cell_graphic_popup_pane_g3_cp2

0x170d,	// (0x0001c0d8) cell_graphic_popup_pane_t2_cp2

0x63c9,	// (0x00020d94) grid_highlight_pane_cp3_cp2

0x68f9,	// (0x000212c4) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x65b8,	// (0x00020f83) main_tmo_pane_ParamLimits

0xec1e,	// (0x000295e9) popup_tmo_big_image_note_window

0x0c7c,	// (0x0001b647) cell_ai5_widget_list_pane

0x0c84,	// (0x0001b64f) cell_ai5_widget_lrg_icon_pane

0x12fc,	// (0x0001bcc7) tmo_note_info_pane_t1_ParamLimits

0x1311,	// (0x0001bcdc) tmo_note_info_pane_t2_ParamLimits

0x1326,	// (0x0001bcf1) tmo_note_info_pane_t3_ParamLimits

0x133b,	// (0x0001bd06) tmo_note_info_pane_t4_ParamLimits

0x134d,	// (0x0001bd18) tmo_note_info_pane_t5_ParamLimits

0xfec9,	// (0x0002a894) tmo_note_info_pane_t_ParamLimits

0x1481,	// (0x0001be4c) settings_container_pane_ParamLimits

0x166f,	// (0x0001c03a) indicator_popup_pane_cp5

0x166f,	// (0x0001c03a) indicator_popup_pane_cp6

0x169f,	// (0x0001c06a) list_set_graphic_pane_copy1_ParamLimits

0x5f28,	// (0x000208f3) bg_popup_window_pane_cp23

0x171b,	// (0x0001c0e6) popup_tmo_big_image_note_window_g1

0x1724,	// (0x0001c0ef) popup_tmo_big_image_note_window_t1

0x1732,	// (0x0001c0fd) popup_tmo_big_image_note_window_t2

0x1740,	// (0x0001c10b) popup_tmo_big_image_note_window_t3

0x0002,

0xfee2,	// (0x0002a8ad) popup_tmo_big_image_note_window_t

0x174e,	// (0x0001c119) cell_ai5_widget_lrg_icon_pane_g1

0x1756,	// (0x0001c121) cell_ai5_widget_lrg_icon_pane_t1

0x1764,	// (0x0001c12f) cell_ai5_widget_list_row_pane_ParamLimits

0x1764,	// (0x0001c12f) cell_ai5_widget_list_row_pane

0x177d,	// (0x0001c148) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x177d,	// (0x0001c148) cell_ai5_widget_list_row_pane_g1

0x178a,	// (0x0001c155) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x178a,	// (0x0001c155) cell_ai5_widget_list_row_pane_t1

0x17a2,	// (0x0001c16d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x17a2,	// (0x0001c16d) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee9,	// (0x0002a8b4) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee9,	// (0x0002a8b4) cell_ai5_widget_list_row_pane_t

0x8c76,	// (0x00023641) main_fep_vtchi_ss_pane

0x17b4,	// (0x0001c17f) popup_fep_char_pre_window

0x17bc,	// (0x0001c187) popup_fep_ituss_window

0x17d9,	// (0x0001c1a4) popup_fep_vkbss_window

0x17f8,	// (0x0001c1c3) grid_vkbss_keypad_pane_ParamLimits

0x17f8,	// (0x0001c1c3) grid_vkbss_keypad_pane

0x1808,	// (0x0001c1d3) ituss_keypad_pane

0x1821,	// (0x0001c1ec) aid_vkbss_key_offset_ParamLimits

0x1821,	// (0x0001c1ec) aid_vkbss_key_offset

0x182d,	// (0x0001c1f8) cell_vkbss_key_pane_ParamLimits

0x182d,	// (0x0001c1f8) cell_vkbss_key_pane

0x1843,	// (0x0001c20e) bg_cell_vkbss_key_g1_ParamLimits

0x1843,	// (0x0001c20e) bg_cell_vkbss_key_g1

0x184f,	// (0x0001c21a) cell_vkbss_key_3p_pane_ParamLimits

0x184f,	// (0x0001c21a) cell_vkbss_key_3p_pane

0x1869,	// (0x0001c234) cell_vkbss_key_g1_ParamLimits

0x1869,	// (0x0001c234) cell_vkbss_key_g1

0x1883,	// (0x0001c24e) cell_vkbss_key_t1_ParamLimits

0x1883,	// (0x0001c24e) cell_vkbss_key_t1

0x18ae,	// (0x0001c279) cell_ituss_key_pane_ParamLimits

0x18ae,	// (0x0001c279) cell_ituss_key_pane

0x18be,	// (0x0001c289) bg_cell_ituss_key_g1_ParamLimits

0x18be,	// (0x0001c289) bg_cell_ituss_key_g1

0x18ca,	// (0x0001c295) cell_ituss_key_pane_g1_ParamLimits

0x18ca,	// (0x0001c295) cell_ituss_key_pane_g1

0x18d6,	// (0x0001c2a1) cell_ituss_key_pane_g2_ParamLimits

0x18d6,	// (0x0001c2a1) cell_ituss_key_pane_g2

0x0001,

0xfeee,	// (0x0002a8b9) cell_ituss_key_pane_g_ParamLimits

0xfeee,	// (0x0002a8b9) cell_ituss_key_pane_g

0x18ef,	// (0x0001c2ba) cell_ituss_key_t1_ParamLimits

0x18ef,	// (0x0001c2ba) cell_ituss_key_t1

0x191d,	// (0x0001c2e8) cell_ituss_key_t2_ParamLimits

0x191d,	// (0x0001c2e8) cell_ituss_key_t2

0x194e,	// (0x0001c319) cell_ituss_key_t3_ParamLimits

0x194e,	// (0x0001c319) cell_ituss_key_t3

0x197f,	// (0x0001c34a) cell_ituss_key_t4_ParamLimits

0x197f,	// (0x0001c34a) cell_ituss_key_t4

0x0003,

0xfef3,	// (0x0002a8be) cell_ituss_key_t_ParamLimits

0xfef3,	// (0x0002a8be) cell_ituss_key_t

0x19b0,	// (0x0001c37b) cell_vkbss_key_3p_pane_g1

0x19b8,	// (0x0001c383) cell_vkbss_key_3p_pane_g2

0x19c0,	// (0x0001c38b) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefc,	// (0x0002a8c7) cell_vkbss_key_3p_pane_g

0x5f28,	// (0x000208f3) bg_popup_fep_char_preview_window_cp02

0x19c8,	// (0x0001c393) popup_fep_char_pre_window_t1

0x0c54,	// (0x0001b61f) main_ai5_sk_pane

0x13c7,	// (0x0001bd92) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x13d3,	// (0x0001bd9e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x13e7,	// (0x0001bdb2) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x13f6,	// (0x0001bdc1) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed4,	// (0x0002a89f) cell_contacts_ai5_widget_pane_g_ParamLimits

0x1409,	// (0x0001bdd4) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x65b8,	// (0x00020f83) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x19d7,	// (0x0001c3a2) main_ai5_sk_pane_g1

0x7a25,	// (0x000223f0) popup_query_code_window_g1

0x17ce,	// (0x0001c199) popup_fep_vkb_icf_pane

0x17e2,	// (0x0001c1ad) popup_fep_vtchi_icf_pane

0x65b8,	// (0x00020f83) bg_icf_pane

0x19ef,	// (0x0001c3ba) list_vkb_icf_pane

0x65b8,	// (0x00020f83) bg_icf_pane_cp01

0xebdd,	// (0x000295a8) vtchi_icf_list_pane

0x1a0f,	// (0x0001c3da) list_vkb_icf_pane_t1_ParamLimits

0x1a0f,	// (0x0001c3da) list_vkb_icf_pane_t1

0x1a26,	// (0x0001c3f1) vtchi_icf_list_pane_t1_ParamLimits

0x1a26,	// (0x0001c3f1) vtchi_icf_list_pane_t1

0x17bc,	// (0x0001c187) popup_fep_ituss_window_ParamLimits

0x17e2,	// (0x0001c1ad) popup_fep_vtchi_icf_pane_ParamLimits

0x1808,	// (0x0001c1d3) ituss_keypad_pane_ParamLimits

0x1818,	// (0x0001c1e3) ituss_sks_pane

0x65b8,	// (0x00020f83) bg_icf_pane_ParamLimits

0x19e0,	// (0x0001c3ab) icf_edit_indi_pane_ParamLimits

0x19e0,	// (0x0001c3ab) icf_edit_indi_pane

0x19ef,	// (0x0001c3ba) list_vkb_icf_pane_ParamLimits

0x65b8,	// (0x00020f83) bg_icf_pane_cp01_ParamLimits

0x19fb,	// (0x0001c3c6) icf_edit_indi_pane_cp01_ParamLimits

0x19fb,	// (0x0001c3c6) icf_edit_indi_pane_cp01

0x1a07,	// (0x0001c3d2) vtchi_query_pane

0xc5eb,	// (0x00026fb6) icf_edit_indi_pane_g1_ParamLimits

0xc5eb,	// (0x00026fb6) icf_edit_indi_pane_g1

0x1a3f,	// (0x0001c40a) icf_edit_indi_pane_g2_ParamLimits

0x1a3f,	// (0x0001c40a) icf_edit_indi_pane_g2

0x0001,

0xff03,	// (0x0002a8ce) icf_edit_indi_pane_g_ParamLimits

0xff03,	// (0x0002a8ce) icf_edit_indi_pane_g

0x1a4b,	// (0x0001c416) icf_edit_indi_pane_t1

0x1a59,	// (0x0001c424) bg_input_focus_pane_cp042

0x1a62,	// (0x0001c42d) vtchi_button_pane

0x1a6b,	// (0x0001c436) vtchi_query_pane_t1

0x1a79,	// (0x0001c444) vtchi_query_pane_t2

0x1a87,	// (0x0001c452) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x0002a8d3) vtchi_query_pane_t

0x5f28,	// (0x000208f3) bg_button_pane_cp13

0x1a95,	// (0x0001c460) vtchi_button_pane_g1

0xf0f5,	// (0x00029ac0) ituss_sks_pane_g1

0x1a9d,	// (0x0001c468) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x0002a8da) ituss_sks_pane_g

0x1aa6,	// (0x0001c471) ituss_sks_pane_t1

0x1ab4,	// (0x0001c47f) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x0002a8df) ituss_sks_pane_t

0xc072,	// (0x00026a3d) indicator_nsta_pane_cp_g1

0xc07b,	// (0x00026a46) indicator_nsta_pane_cp_g2

0xc083,	// (0x00026a4e) indicator_nsta_pane_cp_g3

0xc08b,	// (0x00026a56) indicator_nsta_pane_cp_g4

0xc093,	// (0x00026a5e) indicator_nsta_pane_cp_g5

0xc09b,	// (0x00026a66) indicator_nsta_pane_cp_g6

0x0005,

0xfab9,	// (0x0002a484) indicator_nsta_pane_cp_g

0x0710,	// (0x0001b0db) cell_graphic2_pane_t2_ParamLimits

0x0710,	// (0x0001b0db) cell_graphic2_pane_t2

0x0001,

0xfdcb,	// (0x0002a796) cell_graphic2_pane_t_ParamLimits

0xfdcb,	// (0x0002a796) cell_graphic2_pane_t
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
	};

} // end of namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Small

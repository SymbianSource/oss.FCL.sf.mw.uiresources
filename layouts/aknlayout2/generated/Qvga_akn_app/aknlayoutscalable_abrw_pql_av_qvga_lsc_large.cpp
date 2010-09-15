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

#include "aknlayoutscalable_abrw_pql_av_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0003abe1 };

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
0x2b4d,	// (0x0003d72e) Screen

0x2b57,	// (0x0003d738) application_window_ParamLimits

0x2b57,	// (0x0003d738) application_window

0x9492,	// (0x00044073) screen_g1

0x2b65,	// (0x0003d746) area_bottom_pane_ParamLimits

0x2b65,	// (0x0003d746) area_bottom_pane

0x94fe,	// (0x000440df) area_top_pane_ParamLimits

0x94fe,	// (0x000440df) area_top_pane

0x46e2,	// (0x0003f2c3) main_pane_ParamLimits

0x46e2,	// (0x0003f2c3) main_pane

0x9576,	// (0x00044157) misc_graphics

0x05c6,	// (0x0003b1a7) battery_pane_ParamLimits

0x05c6,	// (0x0003b1a7) battery_pane

0xc395,	// (0x00046f76) bg_status_flat_pane_g8

0xc39d,	// (0x00046f7e) bg_status_flat_pane_g9

0xbad0,	// (0x000466b1) context_pane_ParamLimits

0xbad0,	// (0x000466b1) context_pane

0x0720,	// (0x0003b301) navi_pane_ParamLimits

0x0720,	// (0x0003b301) navi_pane

0x0795,	// (0x0003b376) signal_pane_ParamLimits

0x0795,	// (0x0003b376) signal_pane

0x0008,

0xf84d,	// (0x0004a42e) bg_status_flat_pane_g

0x0821,	// (0x0003b402) status_pane_g1_ParamLimits

0x0821,	// (0x0003b402) status_pane_g1

0x082d,	// (0x0003b40e) status_pane_g2_ParamLimits

0x082d,	// (0x0003b40e) status_pane_g2

0xbb36,	// (0x00046717) status_pane_g3_ParamLimits

0xbb36,	// (0x00046717) status_pane_g3

0x0004,

0xf780,	// (0x0004a361) status_pane_g_ParamLimits

0xf780,	// (0x0004a361) status_pane_g

0x0839,	// (0x0003b41a) title_pane_ParamLimits

0x0839,	// (0x0003b41a) title_pane

0x0894,	// (0x0003b475) uni_indicator_pane_ParamLimits

0x0894,	// (0x0003b475) uni_indicator_pane

0xba27,	// (0x00046608) bg_list_pane_ParamLimits

0xba27,	// (0x00046608) bg_list_pane

0xf2df,	// (0x00049ec0) find_pane

0xa2fb,	// (0x00044edc) listscroll_app_pane_ParamLimits

0xa2fb,	// (0x00044edc) listscroll_app_pane

0xba47,	// (0x00046628) listscroll_form_pane

0xf2e7,	// (0x00049ec8) listscroll_gen_pane_ParamLimits

0xf2e7,	// (0x00049ec8) listscroll_gen_pane

0x4edd,	// (0x0003fabe) listscroll_set_pane

0xa30b,	// (0x00044eec) main_idle_act_pane

0xb845,	// (0x00046426) main_idle_trad_pane

0xb845,	// (0x00046426) main_list_empty_pane

0xb0cf,	// (0x00045cb0) main_midp_pane

0xba61,	// (0x00046642) main_pane_g1_ParamLimits

0xba61,	// (0x00046642) main_pane_g1

0xa31e,	// (0x00044eff) popup_ai_message_window_ParamLimits

0xa31e,	// (0x00044eff) popup_ai_message_window

0xa3a2,	// (0x00044f83) popup_fep_china_uni_window_ParamLimits

0xa3a2,	// (0x00044f83) popup_fep_china_uni_window

0x4fc7,	// (0x0003fba8) popup_fep_japan_candidate_window_ParamLimits

0x4fc7,	// (0x0003fba8) popup_fep_japan_candidate_window

0x4fe5,	// (0x0003fbc6) popup_fep_japan_predictive_window_ParamLimits

0x4fe5,	// (0x0003fbc6) popup_fep_japan_predictive_window

0xa3e0,	// (0x00044fc1) popup_find_window

0xa3f9,	// (0x00044fda) popup_grid_graphic_window_ParamLimits

0xa3f9,	// (0x00044fda) popup_grid_graphic_window

0x503c,	// (0x0003fc1d) popup_large_graphic_colour_window

0xa475,	// (0x00045056) popup_menu_window_ParamLimits

0xa475,	// (0x00045056) popup_menu_window

0xa5d3,	// (0x000451b4) popup_note_image_window

0xa59b,	// (0x0004517c) popup_note_wait_window_ParamLimits

0xa59b,	// (0x0004517c) popup_note_wait_window

0xa5e9,	// (0x000451ca) popup_note_window_ParamLimits

0xa5e9,	// (0x000451ca) popup_note_window

0xa67d,	// (0x0004525e) popup_query_code_window_ParamLimits

0xa67d,	// (0x0004525e) popup_query_code_window

0x51fc,	// (0x0003fddd) popup_query_data_code_window_ParamLimits

0x51fc,	// (0x0003fddd) popup_query_data_code_window

0xa6b5,	// (0x00045296) popup_query_data_window_ParamLimits

0xa6b5,	// (0x00045296) popup_query_data_window

0xa729,	// (0x0004530a) popup_query_sat_info_window_ParamLimits

0xa729,	// (0x0004530a) popup_query_sat_info_window

0xa7b6,	// (0x00045397) popup_snote_single_graphic_window_ParamLimits

0xa7b6,	// (0x00045397) popup_snote_single_graphic_window

0xa7b6,	// (0x00045397) popup_snote_single_text_window_ParamLimits

0xa7b6,	// (0x00045397) popup_snote_single_text_window

0x526b,	// (0x0003fe4c) popup_sub_window_general

0x536f,	// (0x0003ff50) popup_window_general_ParamLimits

0x536f,	// (0x0003ff50) popup_window_general

0xba6f,	// (0x00046650) power_save_pane

0xa1a1,	// (0x00044d82) control_pane_g1_ParamLimits

0xa1a1,	// (0x00044d82) control_pane_g1

0x4d96,	// (0x0003f977) control_pane_g2_ParamLimits

0x4d96,	// (0x0003f977) control_pane_g2

0xba19,	// (0x000465fa) control_pane_g3_ParamLimits

0xba19,	// (0x000465fa) control_pane_g3

0x0007,

0xf768,	// (0x0004a349) control_pane_g_ParamLimits

0xf768,	// (0x0004a349) control_pane_g

0xa1fd,	// (0x00044dde) control_pane_t1_ParamLimits

0xa1fd,	// (0x00044dde) control_pane_t1

0xa25b,	// (0x00044e3c) control_pane_t2_ParamLimits

0xa25b,	// (0x00044e3c) control_pane_t2

0x0002,

0xf779,	// (0x0004a35a) control_pane_t_ParamLimits

0xf779,	// (0x0004a35a) control_pane_t

0xb974,	// (0x00046555) navi_navi_volume_pane_cp1

0xb97c,	// (0x0004655d) status_small_icon_pane

0xb984,	// (0x00046565) status_small_pane_g1_ParamLimits

0xb984,	// (0x00046565) status_small_pane_g1

0xb9b8,	// (0x00046599) status_small_pane_g2_ParamLimits

0xb9b8,	// (0x00046599) status_small_pane_g2

0xb9c4,	// (0x000465a5) status_small_pane_g3_ParamLimits

0xb9c4,	// (0x000465a5) status_small_pane_g3

0xa16b,	// (0x00044d4c) status_small_pane_g4_ParamLimits

0xa16b,	// (0x00044d4c) status_small_pane_g4

0xa177,	// (0x00044d58) status_small_pane_g5_ParamLimits

0xa177,	// (0x00044d58) status_small_pane_g5

0xb9d0,	// (0x000465b1) status_small_pane_g6_ParamLimits

0xb9d0,	// (0x000465b1) status_small_pane_g6

0x0007,

0xf757,	// (0x0004a338) status_small_pane_g_ParamLimits

0xf757,	// (0x0004a338) status_small_pane_g

0xb9ff,	// (0x000465e0) status_small_pane_t1

0xa18d,	// (0x00044d6e) status_small_wait_pane_ParamLimits

0xa18d,	// (0x00044d6e) status_small_wait_pane

0xa01a,	// (0x00044bfb) aid_levels_signal_ParamLimits

0xa01a,	// (0x00044bfb) aid_levels_signal

0xa02e,	// (0x00044c0f) signal_pane_g1_ParamLimits

0xa02e,	// (0x00044c0f) signal_pane_g1

0xa048,	// (0x00044c29) signal_pane_g2_ParamLimits

0xa048,	// (0x00044c29) signal_pane_g2

0x0003,

0xf6e8,	// (0x0004a2c9) signal_pane_g_ParamLimits

0xf6e8,	// (0x0004a2c9) signal_pane_g

0xb3dd,	// (0x00045fbe) context_pane_g1

0x37ae,	// (0x0003e38f) title_pane_g1

0x37f0,	// (0x0003e3d1) title_pane_t1

0x9678,	// (0x00044259) title_pane_t2

0x969e,	// (0x0004427f) title_pane_t3

0x0002,

0xf532,	// (0x0004a113) title_pane_t

0x08ba,	// (0x0003b49b) aid_levels_battery_ParamLimits

0x08ba,	// (0x0003b49b) aid_levels_battery

0x08d2,	// (0x0003b4b3) battery_pane_g1_ParamLimits

0x08d2,	// (0x0003b4b3) battery_pane_g1

0x08ed,	// (0x0003b4ce) battery_pane_g2_ParamLimits

0x08ed,	// (0x0003b4ce) battery_pane_g2

0x0001,

0xf78b,	// (0x0004a36c) battery_pane_g_ParamLimits

0xf78b,	// (0x0004a36c) battery_pane_g

0x0bf5,	// (0x0003b7d6) uni_indicator_pane_g1

0x0c09,	// (0x0003b7ea) uni_indicator_pane_g2

0x0c1e,	// (0x0003b7ff) uni_indicator_pane_g3

0x0005,

0xf8f5,	// (0x0004a4d6) uni_indicator_pane_g

0x9dff,	// (0x000449e0) navi_icon_pane_ParamLimits

0x9dff,	// (0x000449e0) navi_icon_pane

0x9576,	// (0x00044157) navi_midp_pane

0x9576,	// (0x00044157) navi_navi_pane

0x9dff,	// (0x000449e0) navi_text_pane_ParamLimits

0x9dff,	// (0x000449e0) navi_text_pane

0x9492,	// (0x00044073) status_small_wait_pane_g1

0x9a11,	// (0x000445f2) status_small_wait_pane_g2

0x0001,

0xf8f0,	// (0x0004a4d1) status_small_wait_pane_g

0x0b9b,	// (0x0003b77c) navi_navi_icon_text_pane

0x0bb5,	// (0x0003b796) navi_navi_pane_g1_ParamLimits

0x0bb5,	// (0x0003b796) navi_navi_pane_g1

0x0ba3,	// (0x0003b784) navi_navi_pane_g2_ParamLimits

0x0ba3,	// (0x0003b784) navi_navi_pane_g2

0x0001,

0xf8be,	// (0x0004a49f) navi_navi_pane_g_ParamLimits

0xf8be,	// (0x0004a49f) navi_navi_pane_g

0x0bc7,	// (0x0003b7a8) navi_navi_tabs_pane

0x0b9b,	// (0x0003b77c) navi_navi_text_pane

0x0b9b,	// (0x0003b77c) navi_navi_volume_pane

0xc8d8,	// (0x000474b9) navi_text_pane_t1

0xc8cc,	// (0x000474ad) navi_icon_pane_g1

0xc82f,	// (0x00047410) navi_navi_text_pane_t1

0x55f6,	// (0x000401d7) navi_navi_volume_pane_g1

0xaa04,	// (0x000455e5) volume_small_pane

0x0aee,	// (0x0003b6cf) navi_navi_icon_text_pane_g1

0x0af6,	// (0x0003b6d7) navi_navi_icon_text_pane_t1

0xc3dd,	// (0x00046fbe) navi_tabs_2_long_pane

0xc3dd,	// (0x00046fbe) navi_tabs_2_pane

0xc3dd,	// (0x00046fbe) navi_tabs_3_long_pane

0xc3dd,	// (0x00046fbe) navi_tabs_3_pane

0xc3dd,	// (0x00046fbe) navi_tabs_4_pane

0xa9e4,	// (0x000455c5) tabs_2_active_pane_ParamLimits

0xa9e4,	// (0x000455c5) tabs_2_active_pane

0xa9f4,	// (0x000455d5) tabs_2_passive_pane_ParamLimits

0xa9f4,	// (0x000455d5) tabs_2_passive_pane

0xa9b2,	// (0x00045593) tabs_3_active_pane_ParamLimits

0xa9b2,	// (0x00045593) tabs_3_active_pane

0xa9c2,	// (0x000455a3) tabs_3_passive_pane_ParamLimits

0xa9c2,	// (0x000455a3) tabs_3_passive_pane

0xa9d3,	// (0x000455b4) tabs_3_passive_pane_cp_ParamLimits

0xa9d3,	// (0x000455b4) tabs_3_passive_pane_cp

0xa96e,	// (0x0004554f) tabs_4_active_pane_ParamLimits

0xa96e,	// (0x0004554f) tabs_4_active_pane

0xa97f,	// (0x00045560) tabs_4_passive_pane_ParamLimits

0xa97f,	// (0x00045560) tabs_4_passive_pane

0xa990,	// (0x00045571) tabs_4_passive_pane_cp_ParamLimits

0xa990,	// (0x00045571) tabs_4_passive_pane_cp

0xa9a1,	// (0x00045582) tabs_4_passive_pane_cp2_ParamLimits

0xa9a1,	// (0x00045582) tabs_4_passive_pane_cp2

0xa94e,	// (0x0004552f) tabs_2_long_active_pane_ParamLimits

0xa94e,	// (0x0004552f) tabs_2_long_active_pane

0xa95e,	// (0x0004553f) tabs_2_long_passive_pane_ParamLimits

0xa95e,	// (0x0004553f) tabs_2_long_passive_pane

0xa917,	// (0x000454f8) tabs_3_long_active_pane_ParamLimits

0xa917,	// (0x000454f8) tabs_3_long_active_pane

0xa92a,	// (0x0004550b) tabs_3_long_passive_pane_ParamLimits

0xa92a,	// (0x0004550b) tabs_3_long_passive_pane

0xa93b,	// (0x0004551c) tabs_3_long_passive_pane_cp_ParamLimits

0xa93b,	// (0x0004551c) tabs_3_long_passive_pane_cp

0x54b1,	// (0x00040092) volume_small_pane_g1

0x54ba,	// (0x0004009b) volume_small_pane_g2

0x54c3,	// (0x000400a4) volume_small_pane_g3

0x54cc,	// (0x000400ad) volume_small_pane_g4

0x54d5,	// (0x000400b6) volume_small_pane_g5

0x54de,	// (0x000400bf) volume_small_pane_g6

0x54e7,	// (0x000400c8) volume_small_pane_g7

0x54f0,	// (0x000400d1) volume_small_pane_g8

0x54f9,	// (0x000400da) volume_small_pane_g9

0x5502,	// (0x000400e3) volume_small_pane_g10

0x0009,

0xf88a,	// (0x0004a46b) volume_small_pane_g

0x96b0,	// (0x00044291) bg_active_tab_pane_cp2_ParamLimits

0x96b0,	// (0x00044291) bg_active_tab_pane_cp2

0x96be,	// (0x0004429f) tabs_3_active_pane_g1

0x387d,	// (0x0003e45e) tabs_3_active_pane_t1

0x96b0,	// (0x00044291) bg_passive_tab_pane_cp2_ParamLimits

0x96b0,	// (0x00044291) bg_passive_tab_pane_cp2

0x96be,	// (0x0004429f) tabs_3_passive_pane_g1

0x387d,	// (0x0003e45e) tabs_3_passive_pane_t1

0x96b0,	// (0x00044291) bg_active_tab_pane_cp3_ParamLimits

0x96b0,	// (0x00044291) bg_active_tab_pane_cp3

0xb0a4,	// (0x00045c85) tabs_4_active_pane_g1

0x3893,	// (0x0003e474) tabs_4_active_pane_t1

0x96b0,	// (0x00044291) bg_passive_tab_pane_cp3_ParamLimits

0x96b0,	// (0x00044291) bg_passive_tab_pane_cp3

0xb0a4,	// (0x00045c85) tabs_4_1_passive_pane_g1

0x3893,	// (0x0003e474) tabs_4_1_passive_pane_t1

0xb0cf,	// (0x00045cb0) list_highlight_pane_cp2

0x0ccd,	// (0x0003b8ae) list_set_pane_ParamLimits

0x0ccd,	// (0x0003b8ae) list_set_pane

0x0d5b,	// (0x0003b93c) main_pane_set_t1_ParamLimits

0x0d5b,	// (0x0003b93c) main_pane_set_t1

0x0d7b,	// (0x0003b95c) main_pane_set_t2_ParamLimits

0x0d7b,	// (0x0003b95c) main_pane_set_t2

0x0d8f,	// (0x0003b970) main_pane_set_t3_ParamLimits

0x0d8f,	// (0x0003b970) main_pane_set_t3

0x0da1,	// (0x0003b982) main_pane_set_t4_ParamLimits

0x0da1,	// (0x0003b982) main_pane_set_t4

0x0003,

0xf95a,	// (0x0004a53b) main_pane_set_t_ParamLimits

0xf95a,	// (0x0004a53b) main_pane_set_t

0x0db3,	// (0x0003b994) setting_code_pane

0x0dbb,	// (0x0003b99c) setting_slider_graphic_pane

0x0dbb,	// (0x0003b99c) setting_slider_pane

0x0dbb,	// (0x0003b99c) setting_text_pane

0x0dbb,	// (0x0003b99c) setting_volume_pane

0x96c6,	// (0x000442a7) volume_set_pane

0x96ce,	// (0x000442af) bg_set_opt_pane_cp

0x48e9,	// (0x0003f4ca) setting_slider_pane_t1

0x96dc,	// (0x000442bd) setting_slider_pane_t2

0x96f5,	// (0x000442d6) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0004a11a) setting_slider_pane_t

0x492f,	// (0x0003f510) slider_set_pane

0x9576,	// (0x00044157) bg_set_opt_pane_cp2

0x970c,	// (0x000442ed) setting_slider_graphic_pane_g1

0x9715,	// (0x000442f6) setting_slider_graphic_pane_t1

0x9724,	// (0x00044305) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0004a121) setting_slider_graphic_pane_t

0x9733,	// (0x00044314) slider_set_pane_cp

0x9576,	// (0x00044157) input_focus_pane_cp1

0xcd59,	// (0x0004793a) list_set_text_pane

0x9492,	// (0x00044073) setting_text_pane_g1

0x9576,	// (0x00044157) input_focus_pane_cp2

0x9492,	// (0x00044073) setting_code_pane_g1

0x973b,	// (0x0004431c) setting_code_pane_t1

0xed1e,	// (0x000498ff) set_text_pane_t1_ParamLimits

0xed1e,	// (0x000498ff) set_text_pane_t1

0x9d4d,	// (0x0004492e) set_opt_bg_pane_g1

0x9d55,	// (0x00044936) set_opt_bg_pane_g2

0x0c99,	// (0x0003b87a) set_opt_bg_pane_g3

0x9d65,	// (0x00044946) set_opt_bg_pane_g4

0x9d6d,	// (0x0004494e) set_opt_bg_pane_g5

0x9d75,	// (0x00044956) set_opt_bg_pane_g6

0x0ca1,	// (0x0003b882) set_opt_bg_pane_g7

0x0ca9,	// (0x0003b88a) set_opt_bg_pane_g8

0x0cb1,	// (0x0003b892) set_opt_bg_pane_g9

0x0008,

0xf947,	// (0x0004a528) set_opt_bg_pane_g

0xcd4c,	// (0x0004792d) slider_set_pane_g1

0x566b,	// (0x0004024c) slider_set_pane_g2

0x0006,

0xf938,	// (0x0004a519) slider_set_pane_g

0xaa0d,	// (0x000455ee) volume_set_pane_g1

0xaa15,	// (0x000455f6) volume_set_pane_g2

0xaa1d,	// (0x000455fe) volume_set_pane_g3

0xaa25,	// (0x00045606) volume_set_pane_g4

0xaa2d,	// (0x0004560e) volume_set_pane_g5

0xaa35,	// (0x00045616) volume_set_pane_g6

0xaa3d,	// (0x0004561e) volume_set_pane_g7

0xaa45,	// (0x00045626) volume_set_pane_g8

0xaa4d,	// (0x0004562e) volume_set_pane_g9

0xaa55,	// (0x00045636) volume_set_pane_g10

0x0009,

0xf910,	// (0x0004a4f1) volume_set_pane_g

0x38a9,	// (0x0003e48a) indicator_pane_ParamLimits

0x38a9,	// (0x0003e48a) indicator_pane

0x38d1,	// (0x0003e4b2) main_idle_pane_g2_ParamLimits

0x38d1,	// (0x0003e4b2) main_idle_pane_g2

0x3901,	// (0x0003e4e2) main_pane_idle_g1_ParamLimits

0x3901,	// (0x0003e4e2) main_pane_idle_g1

0x9749,	// (0x0004432a) popup_clock_digital_analogue_window_ParamLimits

0x9749,	// (0x0004432a) popup_clock_digital_analogue_window

0x3926,	// (0x0003e507) soft_indicator_pane_ParamLimits

0x3926,	// (0x0003e507) soft_indicator_pane

0x3940,	// (0x0003e521) wallpaper_pane_ParamLimits

0x3940,	// (0x0003e521) wallpaper_pane

0x9492,	// (0x00044073) wallpaper_pane_g1

0x3952,	// (0x0003e533) indicator_pane_g1_ParamLimits

0x3952,	// (0x0003e533) indicator_pane_g1

0xce4e,	// (0x00047a2f) navi_navi_icon_text_pane_srt_g1

0x9777,	// (0x00044358) soft_indicator_pane_t1

0x9791,	// (0x00044372) aid_ps_area_pane

0x396b,	// (0x0003e54c) aid_ps_clock_pane

0x97a2,	// (0x00044383) aid_ps_indicator_pane

0x97ae,	// (0x0004438f) indicator_ps_pane_ParamLimits

0x97ae,	// (0x0004438f) indicator_ps_pane

0x97bd,	// (0x0004439e) power_save_pane_g1_ParamLimits

0x97bd,	// (0x0004439e) power_save_pane_g1

0x97c9,	// (0x000443aa) power_save_pane_g2_ParamLimits

0x97c9,	// (0x000443aa) power_save_pane_g2

0x4654,	// (0x0003f235) aid_navinavi_width_pane

0x9791,	// (0x00044372) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0004a126) power_save_pane_g_ParamLimits

0xf545,	// (0x0004a126) power_save_pane_g

0x97d7,	// (0x000443b8) power_save_pane_t1_ParamLimits

0x97d7,	// (0x000443b8) power_save_pane_t1

0x396b,	// (0x0003e54c) aid_ps_clock_pane_ParamLimits

0x97a2,	// (0x00044383) aid_ps_indicator_pane_ParamLimits

0x97e9,	// (0x000443ca) power_save_pane_t4_ParamLimits

0x97e9,	// (0x000443ca) power_save_pane_t4

0x0001,

0xf54a,	// (0x0004a12b) power_save_pane_t_ParamLimits

0xf54a,	// (0x0004a12b) power_save_pane_t

0x9813,	// (0x000443f4) power_save_t3_ParamLimits

0x9813,	// (0x000443f4) power_save_t3

0x97fe,	// (0x000443df) power_save_t2_ParamLimits

0x97fe,	// (0x000443df) power_save_t2

0x9828,	// (0x00044409) indicator_ps_pane_g1

0x3977,	// (0x0003e558) ai_gene_pane_ParamLimits

0x3977,	// (0x0003e558) ai_gene_pane

0x398e,	// (0x0003e56f) ai_links_pane_ParamLimits

0x398e,	// (0x0003e56f) ai_links_pane

0x39a0,	// (0x0003e581) indicator_pane_cp1_ParamLimits

0x39a0,	// (0x0003e581) indicator_pane_cp1

0x39af,	// (0x0003e590) main_pane_idle_g1_cp_ParamLimits

0x39af,	// (0x0003e590) main_pane_idle_g1_cp

0x9831,	// (0x00044412) popup_ai_links_title_window

0x39c7,	// (0x0003e5a8) soft_indicator_pane_cp1_ParamLimits

0x39c7,	// (0x0003e5a8) soft_indicator_pane_cp1

0xcb5d,	// (0x0004773e) ai_links_pane_g1

0xcb66,	// (0x00047747) grid_ai_links_pane

0x0bec,	// (0x0003b7cd) ai_gene_pane_1

0xcb4b,	// (0x0004772c) ai_gene_pane_2

0xcb54,	// (0x00047735) list_highlight_pane_cp4

0x0bd0,	// (0x0003b7b1) cell_ai_link_pane_ParamLimits

0x0bd0,	// (0x0003b7b1) cell_ai_link_pane

0xcb43,	// (0x00047724) cell_ai_link_pane_g1

0x9a11,	// (0x000445f2) cell_ai_link_pane_g2

0x0001,

0xf8eb,	// (0x0004a4cc) cell_ai_link_pane_g

0x9576,	// (0x00044157) grid_highlight_cp2

0x9576,	// (0x00044157) bg_popup_sub_pane_cp1

0x9848,	// (0x00044429) popup_ai_links_title_window_t1

0xca95,	// (0x00047676) ai_gene_pane_1_g1_ParamLimits

0xca95,	// (0x00047676) ai_gene_pane_1_g1

0xcaa1,	// (0x00047682) ai_gene_pane_1_g2_ParamLimits

0xcaa1,	// (0x00047682) ai_gene_pane_1_g2

0x0001,

0xf8e1,	// (0x0004a4c2) ai_gene_pane_1_g_ParamLimits

0xf8e1,	// (0x0004a4c2) ai_gene_pane_1_g

0xcaae,	// (0x0004768f) ai_gene_pane_1_t1_ParamLimits

0xcaae,	// (0x0004768f) ai_gene_pane_1_t1

0xcae2,	// (0x000476c3) grid_ai_soft_ind_pane

0xca80,	// (0x00047661) ai_gene_pane_2_t1_ParamLimits

0xca80,	// (0x00047661) ai_gene_pane_2_t1

0x39db,	// (0x0003e5bc) main_pane_empty_t1_ParamLimits

0x39db,	// (0x0003e5bc) main_pane_empty_t1

0x39f8,	// (0x0003e5d9) main_pane_empty_t2_ParamLimits

0x39f8,	// (0x0003e5d9) main_pane_empty_t2

0x3a10,	// (0x0003e5f1) main_pane_empty_t3_ParamLimits

0x3a10,	// (0x0003e5f1) main_pane_empty_t3

0x3a23,	// (0x0003e604) main_pane_empty_t4_ParamLimits

0x3a23,	// (0x0003e604) main_pane_empty_t4

0x3a36,	// (0x0003e617) main_pane_empty_t5_ParamLimits

0x3a36,	// (0x0003e617) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0004a130) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0004a130) main_pane_empty_t

0x9dff,	// (0x000449e0) bg_popup_window_pane_ParamLimits

0x9dff,	// (0x000449e0) bg_popup_window_pane

0xc83e,	// (0x0004741f) find_popup_pane_cp2_ParamLimits

0xc83e,	// (0x0004741f) find_popup_pane_cp2

0xc84a,	// (0x0004742b) heading_pane_ParamLimits

0xc84a,	// (0x0004742b) heading_pane

0x9576,	// (0x00044157) bg_popup_sub_pane

0x0b13,	// (0x0003b6f4) bg_popup_window_pane_g1_ParamLimits

0x0b13,	// (0x0003b6f4) bg_popup_window_pane_g1

0x0b22,	// (0x0003b703) bg_popup_window_pane_g2_ParamLimits

0x0b22,	// (0x0003b703) bg_popup_window_pane_g2

0x0b2e,	// (0x0003b70f) bg_popup_window_pane_g3_ParamLimits

0x0b2e,	// (0x0003b70f) bg_popup_window_pane_g3

0x0b3a,	// (0x0003b71b) bg_popup_window_pane_g4_ParamLimits

0x0b3a,	// (0x0003b71b) bg_popup_window_pane_g4

0x0b49,	// (0x0003b72a) bg_popup_window_pane_g5_ParamLimits

0x0b49,	// (0x0003b72a) bg_popup_window_pane_g5

0x0b59,	// (0x0003b73a) bg_popup_window_pane_g6_ParamLimits

0x0b59,	// (0x0003b73a) bg_popup_window_pane_g6

0x0b65,	// (0x0003b746) bg_popup_window_pane_g7_ParamLimits

0x0b65,	// (0x0003b746) bg_popup_window_pane_g7

0x0b74,	// (0x0003b755) bg_popup_window_pane_g8_ParamLimits

0x0b74,	// (0x0003b755) bg_popup_window_pane_g8

0x0b83,	// (0x0003b764) bg_popup_window_pane_g9_ParamLimits

0x0b83,	// (0x0003b764) bg_popup_window_pane_g9

0xc823,	// (0x00047404) bg_popup_window_pane_g10_ParamLimits

0xc823,	// (0x00047404) bg_popup_window_pane_g10

0x0009,

0xf8a9,	// (0x0004a48a) bg_popup_window_pane_g_ParamLimits

0xf8a9,	// (0x0004a48a) bg_popup_window_pane_g

0xc7da,	// (0x000473bb) bg_popup_heading_pane_ParamLimits

0xc7da,	// (0x000473bb) bg_popup_heading_pane

0x56f3,	// (0x000402d4) tabs_4_passive_pane_cp_srt_ParamLimits

0x56f3,	// (0x000402d4) tabs_4_passive_pane_cp_srt

0x5705,	// (0x000402e6) tabs_4_passive_pane_srt_ParamLimits

0xc7ee,	// (0x000473cf) heading_pane_g2

0x5705,	// (0x000402e6) tabs_4_passive_pane_srt

0xbc92,	// (0x00046873) bg_passive_tab_pane_cp3_srt_ParamLimits

0xbc92,	// (0x00046873) bg_passive_tab_pane_cp3_srt

0xc7f6,	// (0x000473d7) heading_pane_t1_ParamLimits

0xc7f6,	// (0x000473d7) heading_pane_t1

0xc80d,	// (0x000473ee) heading_pane_t2_ParamLimits

0xc80d,	// (0x000473ee) heading_pane_t2

0x0001,

0xf8a4,	// (0x0004a485) heading_pane_t_ParamLimits

0xf8a4,	// (0x0004a485) heading_pane_t

0xc35d,	// (0x00046f3e) bg_popup_heading_pane_g1

0xc3ee,	// (0x00046fcf) bg_popup_heading_pane_g2

0xc3f6,	// (0x00046fd7) bg_popup_heading_pane_g3

0xc3fe,	// (0x00046fdf) bg_popup_heading_pane_g4

0xc406,	// (0x00046fe7) bg_popup_heading_pane_g5

0xc40e,	// (0x00046fef) bg_popup_heading_pane_g6

0xc416,	// (0x00046ff7) bg_popup_heading_pane_g7

0xc41e,	// (0x00046fff) bg_popup_heading_pane_g8

0xc426,	// (0x00047007) bg_popup_heading_pane_g9

0x0008,

0xf860,	// (0x0004a441) bg_popup_heading_pane_g

0xbc1e,	// (0x000467ff) bg_popup_sub_pane_g1

0xbc2e,	// (0x0004680f) bg_popup_sub_pane_g2

0xbc26,	// (0x00046807) bg_popup_sub_pane_g3

0xbc3e,	// (0x0004681f) bg_popup_sub_pane_g4

0xbc36,	// (0x00046817) bg_popup_sub_pane_g5

0xbc46,	// (0x00046827) bg_popup_sub_pane_g6

0xbc4e,	// (0x0004682f) bg_popup_sub_pane_g7

0xbc5e,	// (0x0004683f) bg_popup_sub_pane_g8

0xbc56,	// (0x00046837) bg_popup_sub_pane_g9

0x0008,

0xf83a,	// (0x0004a41b) bg_popup_sub_pane_g

0x96b0,	// (0x00044291) bg_popup_window_pane_cp5_ParamLimits

0x96b0,	// (0x00044291) bg_popup_window_pane_cp5

0x9865,	// (0x00044446) popup_note_window_g1_ParamLimits

0x9865,	// (0x00044446) popup_note_window_g1

0x9871,	// (0x00044452) popup_note_window_t1_ParamLimits

0x9871,	// (0x00044452) popup_note_window_t1

0x9887,	// (0x00044468) popup_note_window_t2_ParamLimits

0x9887,	// (0x00044468) popup_note_window_t2

0x989d,	// (0x0004447e) popup_note_window_t3_ParamLimits

0x989d,	// (0x0004447e) popup_note_window_t3

0x98b3,	// (0x00044494) popup_note_window_t4_ParamLimits

0x98b3,	// (0x00044494) popup_note_window_t4

0x98db,	// (0x000444bc) popup_note_window_t5_ParamLimits

0x98db,	// (0x000444bc) popup_note_window_t5

0x0004,

0xf55a,	// (0x0004a13b) popup_note_window_t_ParamLimits

0xf55a,	// (0x0004a13b) popup_note_window_t

0x9925,	// (0x00044506) bg_popup_window_pane_cp6_ParamLimits

0x9925,	// (0x00044506) bg_popup_window_pane_cp6

0xc2d9,	// (0x00046eba) popup_note_image_window_g1_ParamLimits

0xc2d9,	// (0x00046eba) popup_note_image_window_g1

0xc2e5,	// (0x00046ec6) popup_note_image_window_g2_ParamLimits

0xc2e5,	// (0x00046ec6) popup_note_image_window_g2

0x0001,

0xf82e,	// (0x0004a40f) popup_note_image_window_g_ParamLimits

0xf82e,	// (0x0004a40f) popup_note_image_window_g

0xc2fe,	// (0x00046edf) popup_note_image_window_t1_ParamLimits

0xc2fe,	// (0x00046edf) popup_note_image_window_t1

0xc317,	// (0x00046ef8) popup_note_image_window_t2_ParamLimits

0xc317,	// (0x00046ef8) popup_note_image_window_t2

0xc330,	// (0x00046f11) popup_note_image_window_t3_ParamLimits

0xc330,	// (0x00046f11) popup_note_image_window_t3

0x0002,

0xf833,	// (0x0004a414) popup_note_image_window_t_ParamLimits

0xf833,	// (0x0004a414) popup_note_image_window_t

0xc1c4,	// (0x00046da5) bg_popup_window_pane_cp7_ParamLimits

0xc1c4,	// (0x00046da5) bg_popup_window_pane_cp7

0xc1f4,	// (0x00046dd5) popup_note_wait_window_g1_ParamLimits

0xc1f4,	// (0x00046dd5) popup_note_wait_window_g1

0xc200,	// (0x00046de1) popup_note_wait_window_g2_ParamLimits

0xc200,	// (0x00046de1) popup_note_wait_window_g2

0x0002,

0xf81c,	// (0x0004a3fd) popup_note_wait_window_g_ParamLimits

0xf81c,	// (0x0004a3fd) popup_note_wait_window_g

0xc218,	// (0x00046df9) popup_note_wait_window_t1_ParamLimits

0xc218,	// (0x00046df9) popup_note_wait_window_t1

0xc23f,	// (0x00046e20) popup_note_wait_window_t2_ParamLimits

0xc23f,	// (0x00046e20) popup_note_wait_window_t2

0xc25c,	// (0x00046e3d) popup_note_wait_window_t3_ParamLimits

0xc25c,	// (0x00046e3d) popup_note_wait_window_t3

0xc26f,	// (0x00046e50) popup_note_wait_window_t4_ParamLimits

0xc26f,	// (0x00046e50) popup_note_wait_window_t4

0x0004,

0xf823,	// (0x0004a404) popup_note_wait_window_t_ParamLimits

0xf823,	// (0x0004a404) popup_note_wait_window_t

0xc294,	// (0x00046e75) wait_bar_pane_ParamLimits

0xc294,	// (0x00046e75) wait_bar_pane

0x9576,	// (0x00044157) wait_anim_pane

0x9576,	// (0x00044157) wait_border_pane

0x9492,	// (0x00044073) wait_anim_pane_g1

0x9492,	// (0x00044073) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x0004a2c4) wait_anim_pane_g

0xc174,	// (0x00046d55) wait_border_pane_g1

0xc17d,	// (0x00046d5e) wait_border_pane_g2

0xc186,	// (0x00046d67) wait_border_pane_g3

0x0002,

0xf815,	// (0x0004a3f6) wait_border_pane_g

0xbfe4,	// (0x00046bc5) bg_popup_window_pane_cp16_ParamLimits

0xbfe4,	// (0x00046bc5) bg_popup_window_pane_cp16

0xc0e4,	// (0x00046cc5) indicator_popup_pane_cp4_ParamLimits

0xc0e4,	// (0x00046cc5) indicator_popup_pane_cp4

0xc0f8,	// (0x00046cd9) popup_query_data_window_t1_ParamLimits

0xc0f8,	// (0x00046cd9) popup_query_data_window_t1

0xc10a,	// (0x00046ceb) popup_query_data_window_t2_ParamLimits

0xc10a,	// (0x00046ceb) popup_query_data_window_t2

0xc123,	// (0x00046d04) popup_query_data_window_t3_ParamLimits

0xc123,	// (0x00046d04) popup_query_data_window_t3

0x0002,

0xf80e,	// (0x0004a3ef) popup_query_data_window_t_ParamLimits

0xf80e,	// (0x0004a3ef) popup_query_data_window_t

0xc13d,	// (0x00046d1e) query_popup_data_pane_ParamLimits

0xc13d,	// (0x00046d1e) query_popup_data_pane

0xc151,	// (0x00046d32) query_popup_data_pane_cp1_ParamLimits

0xc151,	// (0x00046d32) query_popup_data_pane_cp1

0xbfe4,	// (0x00046bc5) bg_popup_window_pane_cp10_ParamLimits

0xbfe4,	// (0x00046bc5) bg_popup_window_pane_cp10

0xc016,	// (0x00046bf7) indicator_popup_pane_ParamLimits

0xc016,	// (0x00046bf7) indicator_popup_pane

0xc038,	// (0x00046c19) popup_query_code_window_t1_ParamLimits

0xc038,	// (0x00046c19) popup_query_code_window_t1

0xc052,	// (0x00046c33) popup_query_code_window_t2_ParamLimits

0xc052,	// (0x00046c33) popup_query_code_window_t2

0xc09b,	// (0x00046c7c) popup_query_code_window_t3_ParamLimits

0xc09b,	// (0x00046c7c) popup_query_code_window_t3

0x0002,

0xf807,	// (0x0004a3e8) popup_query_code_window_t_ParamLimits

0xf807,	// (0x0004a3e8) popup_query_code_window_t

0xc0ca,	// (0x00046cab) query_popup_pane_ParamLimits

0xc0ca,	// (0x00046cab) query_popup_pane

0x9925,	// (0x00044506) bg_popup_window_pane_cp15_ParamLimits

0x9925,	// (0x00044506) bg_popup_window_pane_cp15

0x9943,	// (0x00044524) indicator_popup_pane_cp1_ParamLimits

0x9943,	// (0x00044524) indicator_popup_pane_cp1

0x9956,	// (0x00044537) indicator_popup_pane_cp2_ParamLimits

0x9956,	// (0x00044537) indicator_popup_pane_cp2

0x9969,	// (0x0004454a) popup_query_data_code_window_g1_ParamLimits

0x9969,	// (0x0004454a) popup_query_data_code_window_g1

0x997c,	// (0x0004455d) popup_query_data_code_window_t1_ParamLimits

0x997c,	// (0x0004455d) popup_query_data_code_window_t1

0x998e,	// (0x0004456f) popup_query_data_code_window_t2_ParamLimits

0x998e,	// (0x0004456f) popup_query_data_code_window_t2

0x99a0,	// (0x00044581) popup_query_data_code_window_t3_ParamLimits

0x99a0,	// (0x00044581) popup_query_data_code_window_t3

0x99b6,	// (0x00044597) popup_query_data_code_window_t4_ParamLimits

0x99b6,	// (0x00044597) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0004a146) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0004a146) popup_query_data_code_window_t

0x53cc,	// (0x0003ffad) list_single_midp_graphic_pane_g3

0x99ce,	// (0x000445af) query_popup_data_pane_cp2_ParamLimits

0x99e1,	// (0x000445c2) query_popup_pane_cp2_ParamLimits

0x99e1,	// (0x000445c2) query_popup_pane_cp2

0x9576,	// (0x00044157) bg_popup_window_pane_cp11

0xbfc8,	// (0x00046ba9) heading_pane_cp5

0xbfd0,	// (0x00046bb1) listscroll_popup_info_pane

0x9576,	// (0x00044157) input_focus_pane_cp3

0x99f4,	// (0x000445d5) query_popup_pane_t1

0x9a02,	// (0x000445e3) list_popup_info_pane_ParamLimits

0x9a02,	// (0x000445e3) list_popup_info_pane

0x9a11,	// (0x000445f2) listscroll_popup_info_pane_g1

0x9a19,	// (0x000445fa) scroll_pane_cp7

0x9a21,	// (0x00044602) popup_info_list_pane_t1_ParamLimits

0x9a21,	// (0x00044602) popup_info_list_pane_t1

0x9a3b,	// (0x0004461c) popup_info_list_pane_t2_ParamLimits

0x9a3b,	// (0x0004461c) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0004a14f) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0004a14f) popup_info_list_pane_t

0x9576,	// (0x00044157) bg_popup_window_pane_cp12

0xce68,	// (0x00047a49) find_popup_pane

0x96ce,	// (0x000442af) bg_popup_window_pane_cp3

0x9a55,	// (0x00044636) heading_pane_cp3

0x9a64,	// (0x00044645) listscroll_popup_graphic_pane

0x9576,	// (0x00044157) bg_popup_window_pane_cp4

0x3a99,	// (0x0003e67a) heading_pane_cp4

0x9a73,	// (0x00044654) listscroll_popup_colour_pane

0x9a7b,	// (0x0004465c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9a7b,	// (0x0004465c) cell_large_graphic_colour_none_popup_pane

0x3aa1,	// (0x0003e682) grid_large_graphic_colour_popup_pane_ParamLimits

0x3aa1,	// (0x0003e682) grid_large_graphic_colour_popup_pane

0x9a8b,	// (0x0004466c) listscroll_popup_colour_pane_g1_ParamLimits

0x9a8b,	// (0x0004466c) listscroll_popup_colour_pane_g1

0x9aa2,	// (0x00044683) listscroll_popup_colour_pane_g2_ParamLimits

0x9aa2,	// (0x00044683) listscroll_popup_colour_pane_g2

0x9ab9,	// (0x0004469a) listscroll_popup_colour_pane_g3_ParamLimits

0x9ab9,	// (0x0004469a) listscroll_popup_colour_pane_g3

0x3abd,	// (0x0003e69e) listscroll_popup_colour_pane_g4_ParamLimits

0x3abd,	// (0x0003e69e) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0004a154) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0004a154) listscroll_popup_colour_pane_g

0x9ac9,	// (0x000446aa) scroll_pane_cp6_ParamLimits

0x9ac9,	// (0x000446aa) scroll_pane_cp6

0x3acc,	// (0x0003e6ad) cell_large_graphic_colour_popup_pane_ParamLimits

0x3acc,	// (0x0003e6ad) cell_large_graphic_colour_popup_pane

0x9adb,	// (0x000446bc) cell_large_graphic_colour_none_popup_pane_t1

0x9576,	// (0x00044157) grid_highlight_pane_cp5

0x9aea,	// (0x000446cb) cell_large_graphic_colour_popup_pane_g1

0x9af2,	// (0x000446d3) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0004a15d) cell_large_graphic_colour_popup_pane_g

0x9afa,	// (0x000446db) cell_large_graphic_colour_popup_pane_g2_copy1

0x9b03,	// (0x000446e4) grid_highlight_pane_cp4

0x9b0b,	// (0x000446ec) bg_popup_window_pane_cp8_ParamLimits

0x9b0b,	// (0x000446ec) bg_popup_window_pane_cp8

0x9b26,	// (0x00044707) popup_snote_single_text_window_g1_ParamLimits

0x9b26,	// (0x00044707) popup_snote_single_text_window_g1

0x9b38,	// (0x00044719) popup_snote_single_text_window_t1_ParamLimits

0x9b38,	// (0x00044719) popup_snote_single_text_window_t1

0x9b4b,	// (0x0004472c) popup_snote_single_text_window_t2_ParamLimits

0x9b4b,	// (0x0004472c) popup_snote_single_text_window_t2

0x9b5e,	// (0x0004473f) popup_snote_single_text_window_t3_ParamLimits

0x9b5e,	// (0x0004473f) popup_snote_single_text_window_t3

0x9b97,	// (0x00044778) popup_snote_single_text_window_t4_ParamLimits

0x9b97,	// (0x00044778) popup_snote_single_text_window_t4

0x9bcb,	// (0x000447ac) popup_snote_single_text_window_t5_ParamLimits

0x9bcb,	// (0x000447ac) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0004a162) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0004a162) popup_snote_single_text_window_t

0x9bfa,	// (0x000447db) bg_popup_window_pane_cp9_ParamLimits

0x9bfa,	// (0x000447db) bg_popup_window_pane_cp9

0x9b26,	// (0x00044707) popup_snote_single_graphic_window_g1_ParamLimits

0x9b26,	// (0x00044707) popup_snote_single_graphic_window_g1

0x9c08,	// (0x000447e9) popup_snote_single_graphic_window_g2_ParamLimits

0x9c08,	// (0x000447e9) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0004a16d) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0004a16d) popup_snote_single_graphic_window_g

0x9c14,	// (0x000447f5) popup_snote_single_graphic_window_t1_ParamLimits

0x9c14,	// (0x000447f5) popup_snote_single_graphic_window_t1

0x9c27,	// (0x00044808) popup_snote_single_graphic_window_t2_ParamLimits

0x9c27,	// (0x00044808) popup_snote_single_graphic_window_t2

0x9b5e,	// (0x0004473f) popup_snote_single_graphic_window_t3_ParamLimits

0x9b5e,	// (0x0004473f) popup_snote_single_graphic_window_t3

0x9b97,	// (0x00044778) popup_snote_single_graphic_window_t4_ParamLimits

0x9b97,	// (0x00044778) popup_snote_single_graphic_window_t4

0x9bcb,	// (0x000447ac) popup_snote_single_graphic_window_t5_ParamLimits

0x9bcb,	// (0x000447ac) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0004a172) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0004a172) popup_snote_single_graphic_window_t

0x0ea4,	// (0x0003ba85) grid_graphic_popup_pane_ParamLimits

0x0ea4,	// (0x0003ba85) grid_graphic_popup_pane

0x0ec7,	// (0x0003baa8) listscroll_popup_graphic_pane_g1_ParamLimits

0x0ec7,	// (0x0003baa8) listscroll_popup_graphic_pane_g1

0x0edb,	// (0x0003babc) listscroll_popup_graphic_pane_g2_ParamLimits

0x0edb,	// (0x0003babc) listscroll_popup_graphic_pane_g2

0x0001,

0xf984,	// (0x0004a565) listscroll_popup_graphic_pane_g_ParamLimits

0xf984,	// (0x0004a565) listscroll_popup_graphic_pane_g

0xbf90,	// (0x00046b71) scroll_pane_cp5

0x0e60,	// (0x0003ba41) cell_graphic_popup_pane_ParamLimits

0x0e60,	// (0x0003ba41) cell_graphic_popup_pane

0xce11,	// (0x000479f2) cell_graphic_popup_pane_g1

0xce19,	// (0x000479fa) cell_graphic_popup_pane_g2

0x9afa,	// (0x000446db) cell_graphic_popup_pane_g3

0x0002,

0xf97d,	// (0x0004a55e) cell_graphic_popup_pane_g

0xce22,	// (0x00047a03) cell_graphic_popup_pane_t2

0x9b03,	// (0x000446e4) grid_highlight_pane_cp3

0x9c4c,	// (0x0004482d) list_gen_pane_ParamLimits

0x9c4c,	// (0x0004482d) list_gen_pane

0x9c75,	// (0x00044856) scroll_pane

0x0e33,	// (0x0003ba14) bg_list_pane_g1_ParamLimits

0x0e33,	// (0x0003ba14) bg_list_pane_g1

0xcdc8,	// (0x000479a9) bg_list_pane_g2_ParamLimits

0xcdc8,	// (0x000479a9) bg_list_pane_g2

0xcddb,	// (0x000479bc) bg_list_pane_g3_ParamLimits

0xcddb,	// (0x000479bc) bg_list_pane_g3

0xcded,	// (0x000479ce) bg_list_pane_g4_ParamLimits

0xcded,	// (0x000479ce) bg_list_pane_g4

0x0e4e,	// (0x0003ba2f) bg_list_pane_g5_ParamLimits

0x0e4e,	// (0x0003ba2f) bg_list_pane_g5

0x0004,

0xf972,	// (0x0004a553) bg_list_pane_g_ParamLimits

0xf972,	// (0x0004a553) bg_list_pane_g

0x0de8,	// (0x0003b9c9) list_double2_graphic_large_graphic_pane_ParamLimits

0x0de8,	// (0x0003b9c9) list_double2_graphic_large_graphic_pane

0x0de8,	// (0x0003b9c9) list_double2_graphic_pane_ParamLimits

0x0de8,	// (0x0003b9c9) list_double2_graphic_pane

0x0de8,	// (0x0003b9c9) list_double2_large_graphic_pane_ParamLimits

0x0de8,	// (0x0003b9c9) list_double2_large_graphic_pane

0x0de8,	// (0x0003b9c9) list_double2_pane_ParamLimits

0x0de8,	// (0x0003b9c9) list_double2_pane

0x0de8,	// (0x0003b9c9) list_double_graphic_heading_pane_ParamLimits

0x0de8,	// (0x0003b9c9) list_double_graphic_heading_pane

0x0de8,	// (0x0003b9c9) list_double_graphic_pane_ParamLimits

0x0de8,	// (0x0003b9c9) list_double_graphic_pane

0x0de8,	// (0x0003b9c9) list_double_heading_pane_ParamLimits

0x0de8,	// (0x0003b9c9) list_double_heading_pane

0x0de8,	// (0x0003b9c9) list_double_large_graphic_pane_ParamLimits

0x0de8,	// (0x0003b9c9) list_double_large_graphic_pane

0x0de8,	// (0x0003b9c9) list_double_number_pane_ParamLimits

0x0de8,	// (0x0003b9c9) list_double_number_pane

0x0de8,	// (0x0003b9c9) list_double_pane_ParamLimits

0x0de8,	// (0x0003b9c9) list_double_pane

0x0de8,	// (0x0003b9c9) list_double_time_pane_ParamLimits

0x0de8,	// (0x0003b9c9) list_double_time_pane

0x0de8,	// (0x0003b9c9) list_setting_number_pane_ParamLimits

0x0de8,	// (0x0003b9c9) list_setting_number_pane

0x0de8,	// (0x0003b9c9) list_setting_pane_ParamLimits

0x0de8,	// (0x0003b9c9) list_setting_pane

0xf34a,	// (0x00049f2b) list_single_2graphic_pane_ParamLimits

0xf34a,	// (0x00049f2b) list_single_2graphic_pane

0xf34a,	// (0x00049f2b) list_single_graphic_heading_pane_ParamLimits

0xf34a,	// (0x00049f2b) list_single_graphic_heading_pane

0xf34a,	// (0x00049f2b) list_single_graphic_pane_ParamLimits

0xf34a,	// (0x00049f2b) list_single_graphic_pane

0xf34a,	// (0x00049f2b) list_single_heading_pane_ParamLimits

0xf34a,	// (0x00049f2b) list_single_heading_pane

0x0e21,	// (0x0003ba02) list_single_large_graphic_pane_ParamLimits

0x0e21,	// (0x0003ba02) list_single_large_graphic_pane

0xf34a,	// (0x00049f2b) list_single_number_heading_pane_ParamLimits

0xf34a,	// (0x00049f2b) list_single_number_heading_pane

0xf34a,	// (0x00049f2b) list_single_number_pane_ParamLimits

0xf34a,	// (0x00049f2b) list_single_number_pane

0xf34a,	// (0x00049f2b) list_single_pane_ParamLimits

0xf34a,	// (0x00049f2b) list_single_pane

0x9576,	// (0x00044157) list_highlight_pane_cp1

0x749d,	// (0x0004207e) list_single_pane_g1_ParamLimits

0x749d,	// (0x0004207e) list_single_pane_g1

0x74a9,	// (0x0004208a) list_single_pane_g2_ParamLimits

0x74a9,	// (0x0004208a) list_single_pane_g2

0x0001,

0xf5ad,	// (0x0004a18e) list_single_pane_g_ParamLimits

0xf5ad,	// (0x0004a18e) list_single_pane_g

0x7cbe,	// (0x0004289f) list_single_pane_t1_ParamLimits

0x7cbe,	// (0x0004289f) list_single_pane_t1

0x749d,	// (0x0004207e) list_single_number_pane_g1_ParamLimits

0x749d,	// (0x0004207e) list_single_number_pane_g1

0x74a9,	// (0x0004208a) list_single_number_pane_g2_ParamLimits

0x74a9,	// (0x0004208a) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x0004a18e) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x0004a18e) list_single_number_pane_g

0x74b5,	// (0x00042096) list_single_number_pane_t1_ParamLimits

0x74b5,	// (0x00042096) list_single_number_pane_t1

0xf311,	// (0x00049ef2) list_single_number_pane_t2_ParamLimits

0xf311,	// (0x00049ef2) list_single_number_pane_t2

0x0001,

0xf933,	// (0x0004a514) list_single_number_pane_t_ParamLimits

0xf933,	// (0x0004a514) list_single_number_pane_t

0x7491,	// (0x00042072) list_single_graphic_pane_g1_ParamLimits

0x7491,	// (0x00042072) list_single_graphic_pane_g1

0x749d,	// (0x0004207e) list_single_graphic_pane_g2_ParamLimits

0x749d,	// (0x0004207e) list_single_graphic_pane_g2

0x74a9,	// (0x0004208a) list_single_graphic_pane_g3_ParamLimits

0x74a9,	// (0x0004208a) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0004a17d) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0004a17d) list_single_graphic_pane_g

0x74b5,	// (0x00042096) list_single_graphic_pane_t1_ParamLimits

0x74b5,	// (0x00042096) list_single_graphic_pane_t1

0xed37,	// (0x00049918) list_single_heading_pane_g1_ParamLimits

0xed37,	// (0x00049918) list_single_heading_pane_g1

0x74a9,	// (0x0004208a) list_single_heading_pane_g2_ParamLimits

0x74a9,	// (0x0004208a) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0004a184) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0004a184) list_single_heading_pane_g

0xed4a,	// (0x0004992b) list_single_heading_pane_t1_ParamLimits

0xed4a,	// (0x0004992b) list_single_heading_pane_t1

0xed60,	// (0x00049941) list_single_heading_pane_t2_ParamLimits

0xed60,	// (0x00049941) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0004a189) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0004a189) list_single_heading_pane_t

0x749d,	// (0x0004207e) list_single_number_heading_pane_g1_ParamLimits

0x749d,	// (0x0004207e) list_single_number_heading_pane_g1

0x74a9,	// (0x0004208a) list_single_number_heading_pane_g2_ParamLimits

0x74a9,	// (0x0004208a) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x0004a18e) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x0004a18e) list_single_number_heading_pane_g

0x7586,	// (0x00042167) list_single_number_heading_pane_t1_ParamLimits

0x7586,	// (0x00042167) list_single_number_heading_pane_t1

0xed72,	// (0x00049953) list_single_number_heading_pane_t2_ParamLimits

0xed72,	// (0x00049953) list_single_number_heading_pane_t2

0x7c9a,	// (0x0004287b) list_single_number_heading_pane_t3_ParamLimits

0x7c9a,	// (0x0004287b) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x0004a193) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x0004a193) list_single_number_heading_pane_t

0xed84,	// (0x00049965) list_single_graphic_heading_pane_g1_ParamLimits

0xed84,	// (0x00049965) list_single_graphic_heading_pane_g1

0xf3a8,	// (0x00049f89) list_single_graphic_heading_pane_g4_ParamLimits

0xf3a8,	// (0x00049f89) list_single_graphic_heading_pane_g4

0x74a9,	// (0x0004208a) list_single_graphic_heading_pane_g5_ParamLimits

0x74a9,	// (0x0004208a) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x0004a19a) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x0004a19a) list_single_graphic_heading_pane_g

0x7586,	// (0x00042167) list_single_graphic_heading_pane_t1_ParamLimits

0x7586,	// (0x00042167) list_single_graphic_heading_pane_t1

0xed98,	// (0x00049979) list_single_graphic_heading_pane_t2_ParamLimits

0xed98,	// (0x00049979) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x0004a1a1) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x0004a1a1) list_single_graphic_heading_pane_t

0x7337,	// (0x00041f18) list_single_large_graphic_pane_g1_ParamLimits

0x7337,	// (0x00041f18) list_single_large_graphic_pane_g1

0x7343,	// (0x00041f24) list_single_large_graphic_pane_g2_ParamLimits

0x7343,	// (0x00041f24) list_single_large_graphic_pane_g2

0x734f,	// (0x00041f30) list_single_large_graphic_pane_g3_ParamLimits

0x734f,	// (0x00041f30) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x0004a1a6) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x0004a1a6) list_single_large_graphic_pane_g

0xc17d,	// (0x00046d5e) wait_border_pane_g2_copy1

0x735b,	// (0x00041f3c) list_single_large_graphic_pane_g4_cp2

0x7363,	// (0x00041f44) list_single_large_graphic_pane_t1_ParamLimits

0x7363,	// (0x00041f44) list_single_large_graphic_pane_t1

0xb0ac,	// (0x00045c8d) list_double_pane_g1_ParamLimits

0xb0ac,	// (0x00045c8d) list_double_pane_g1

0xf3b9,	// (0x00049f9a) list_double_pane_g2_ParamLimits

0xf3b9,	// (0x00049f9a) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0004a1ad) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0004a1ad) list_double_pane_g

0xedb0,	// (0x00049991) list_double_pane_t1_ParamLimits

0xedb0,	// (0x00049991) list_double_pane_t1

0xedc6,	// (0x000499a7) list_double_pane_t2_ParamLimits

0xedc6,	// (0x000499a7) list_double_pane_t2

0x0001,

0xf5d1,	// (0x0004a1b2) list_double_pane_t_ParamLimits

0xf5d1,	// (0x0004a1b2) list_double_pane_t

0xedd8,	// (0x000499b9) list_double2_pane_g1_ParamLimits

0xedd8,	// (0x000499b9) list_double2_pane_g1

0xede9,	// (0x000499ca) list_double2_pane_g2_ParamLimits

0xede9,	// (0x000499ca) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x0004a1b7) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x0004a1b7) list_double2_pane_g

0xedf5,	// (0x000499d6) list_double2_pane_t1_ParamLimits

0xedf5,	// (0x000499d6) list_double2_pane_t1

0xee0b,	// (0x000499ec) list_double2_pane_t2_ParamLimits

0xee0b,	// (0x000499ec) list_double2_pane_t2

0x0001,

0xf5db,	// (0x0004a1bc) list_double2_pane_t_ParamLimits

0xf5db,	// (0x0004a1bc) list_double2_pane_t

0xb0ac,	// (0x00045c8d) list_double_number_pane_g1_ParamLimits

0xb0ac,	// (0x00045c8d) list_double_number_pane_g1

0xf3b9,	// (0x00049f9a) list_double_number_pane_g2_ParamLimits

0xf3b9,	// (0x00049f9a) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0004a1ad) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0004a1ad) list_double_number_pane_g

0xee1d,	// (0x000499fe) list_double_number_pane_t1_ParamLimits

0xee1d,	// (0x000499fe) list_double_number_pane_t1

0xee2f,	// (0x00049a10) list_double_number_pane_t2_ParamLimits

0xee2f,	// (0x00049a10) list_double_number_pane_t2

0xee45,	// (0x00049a26) list_double_number_pane_t3_ParamLimits

0xee45,	// (0x00049a26) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x0004a1c1) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x0004a1c1) list_double_number_pane_t

0xee57,	// (0x00049a38) list_double_graphic_pane_g1_ParamLimits

0xee57,	// (0x00049a38) list_double_graphic_pane_g1

0xb0b8,	// (0x00045c99) list_double_graphic_pane_g2_ParamLimits

0xb0b8,	// (0x00045c99) list_double_graphic_pane_g2

0xf3c5,	// (0x00049fa6) list_double_graphic_pane_g3_ParamLimits

0xf3c5,	// (0x00049fa6) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x0004a1c8) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x0004a1c8) list_double_graphic_pane_g

0xee6f,	// (0x00049a50) list_double_graphic_pane_t1_ParamLimits

0xee6f,	// (0x00049a50) list_double_graphic_pane_t1

0xee85,	// (0x00049a66) list_double_graphic_pane_t2_ParamLimits

0xee85,	// (0x00049a66) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x0004a1d1) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x0004a1d1) list_double_graphic_pane_t

0x75df,	// (0x000421c0) list_double2_graphic_pane_g1_ParamLimits

0x75df,	// (0x000421c0) list_double2_graphic_pane_g1

0xf3d1,	// (0x00049fb2) list_double2_graphic_pane_g2_ParamLimits

0xf3d1,	// (0x00049fb2) list_double2_graphic_pane_g2

0xf3dd,	// (0x00049fbe) list_double2_graphic_pane_g3_ParamLimits

0xf3dd,	// (0x00049fbe) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x0004a1d6) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x0004a1d6) list_double2_graphic_pane_g

0xee97,	// (0x00049a78) list_double2_graphic_pane_t1_ParamLimits

0xee97,	// (0x00049a78) list_double2_graphic_pane_t1

0xeead,	// (0x00049a8e) list_double2_graphic_pane_t2_ParamLimits

0xeead,	// (0x00049a8e) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x0004a1dd) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x0004a1dd) list_double2_graphic_pane_t

0xeebf,	// (0x00049aa0) list_double_large_graphic_pane_g1_ParamLimits

0xeebf,	// (0x00049aa0) list_double_large_graphic_pane_g1

0xeee3,	// (0x00049ac4) list_double_large_graphic_pane_g2_ParamLimits

0xeee3,	// (0x00049ac4) list_double_large_graphic_pane_g2

0xf3b9,	// (0x00049f9a) list_double_large_graphic_pane_g3_ParamLimits

0xf3b9,	// (0x00049f9a) list_double_large_graphic_pane_g3

0xeef9,	// (0x00049ada) list_double_large_graphic_pane_g4_ParamLimits

0xeef9,	// (0x00049ada) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x0004a1e2) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0004a1e2) list_double_large_graphic_pane_g

0xef0a,	// (0x00049aeb) list_double_large_graphic_pane_t1_ParamLimits

0xef0a,	// (0x00049aeb) list_double_large_graphic_pane_t1

0xef23,	// (0x00049b04) list_double_large_graphic_pane_t2_ParamLimits

0xef23,	// (0x00049b04) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x0004a1ed) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x0004a1ed) list_double_large_graphic_pane_t

0xf3e9,	// (0x00049fca) list_double2_large_graphic_pane_g1_ParamLimits

0xf3e9,	// (0x00049fca) list_double2_large_graphic_pane_g1

0xf3f5,	// (0x00049fd6) list_double2_large_graphic_pane_g2_ParamLimits

0xf3f5,	// (0x00049fd6) list_double2_large_graphic_pane_g2

0xf3dd,	// (0x00049fbe) list_double2_large_graphic_pane_g3_ParamLimits

0xf3dd,	// (0x00049fbe) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x0004a1f2) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x0004a1f2) list_double2_large_graphic_pane_g

0xef35,	// (0x00049b16) list_double2_large_graphic_pane_t1_ParamLimits

0xef35,	// (0x00049b16) list_double2_large_graphic_pane_t1

0xef4b,	// (0x00049b2c) list_double2_large_graphic_pane_t2_ParamLimits

0xef4b,	// (0x00049b2c) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x0004a1f9) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x0004a1f9) list_double2_large_graphic_pane_t

0xef5d,	// (0x00049b3e) list_double_heading_pane_g1_ParamLimits

0xef5d,	// (0x00049b3e) list_double_heading_pane_g1

0x7265,	// (0x00041e46) list_double_heading_pane_g2_ParamLimits

0x7265,	// (0x00041e46) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x0004a1fe) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x0004a1fe) list_double_heading_pane_g

0xef6e,	// (0x00049b4f) list_double_heading_pane_t1_ParamLimits

0xef6e,	// (0x00049b4f) list_double_heading_pane_t1

0xee0b,	// (0x000499ec) list_double_heading_pane_t2_ParamLimits

0xee0b,	// (0x000499ec) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x0004a203) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x0004a203) list_double_heading_pane_t

0x75df,	// (0x000421c0) list_double_graphic_heading_pane_g1_ParamLimits

0x75df,	// (0x000421c0) list_double_graphic_heading_pane_g1

0xef5d,	// (0x00049b3e) list_double_graphic_heading_pane_g2_ParamLimits

0xef5d,	// (0x00049b3e) list_double_graphic_heading_pane_g2

0x7265,	// (0x00041e46) list_double_graphic_heading_pane_g3_ParamLimits

0x7265,	// (0x00041e46) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x0004a208) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x0004a208) list_double_graphic_heading_pane_g

0xef84,	// (0x00049b65) list_double_graphic_heading_pane_t1_ParamLimits

0xef84,	// (0x00049b65) list_double_graphic_heading_pane_t1

0xeead,	// (0x00049a8e) list_double_graphic_heading_pane_t2_ParamLimits

0xeead,	// (0x00049a8e) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x0004a20f) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x0004a20f) list_double_graphic_heading_pane_t

0xef9a,	// (0x00049b7b) list_double_time_pane_g1_ParamLimits

0xef9a,	// (0x00049b7b) list_double_time_pane_g1

0xefab,	// (0x00049b8c) list_double_time_pane_g2_ParamLimits

0xefab,	// (0x00049b8c) list_double_time_pane_g2

0x0001,

0xf633,	// (0x0004a214) list_double_time_pane_g_ParamLimits

0xf633,	// (0x0004a214) list_double_time_pane_g

0xefb7,	// (0x00049b98) list_double_time_pane_t1_ParamLimits

0xefb7,	// (0x00049b98) list_double_time_pane_t1

0xefcd,	// (0x00049bae) list_double_time_pane_t2_ParamLimits

0xefcd,	// (0x00049bae) list_double_time_pane_t2

0xefdf,	// (0x00049bc0) list_double_time_pane_t3_ParamLimits

0xefdf,	// (0x00049bc0) list_double_time_pane_t3

0xeff1,	// (0x00049bd2) list_double_time_pane_t4_ParamLimits

0xeff1,	// (0x00049bd2) list_double_time_pane_t4

0x0003,

0xf638,	// (0x0004a219) list_double_time_pane_t_ParamLimits

0xf638,	// (0x0004a219) list_double_time_pane_t

0xf003,	// (0x00049be4) list_setting_pane_g1_ParamLimits

0xf003,	// (0x00049be4) list_setting_pane_g1

0x7610,	// (0x000421f1) list_setting_pane_g2_ParamLimits

0x7610,	// (0x000421f1) list_setting_pane_g2

0x0001,

0xf641,	// (0x0004a222) list_setting_pane_g_ParamLimits

0xf641,	// (0x0004a222) list_setting_pane_g

0xf00f,	// (0x00049bf0) list_setting_pane_t1_ParamLimits

0xf00f,	// (0x00049bf0) list_setting_pane_t1

0xf029,	// (0x00049c0a) list_setting_pane_t2_ParamLimits

0xf029,	// (0x00049c0a) list_setting_pane_t2

0x0002,

0xf646,	// (0x0004a227) list_setting_pane_t_ParamLimits

0xf646,	// (0x0004a227) list_setting_pane_t

0xf066,	// (0x00049c47) set_value_pane_cp_ParamLimits

0xf066,	// (0x00049c47) set_value_pane_cp

0xf072,	// (0x00049c53) list_setting_number_pane_g1_ParamLimits

0xf072,	// (0x00049c53) list_setting_number_pane_g1

0xf07e,	// (0x00049c5f) list_setting_number_pane_g2_ParamLimits

0xf07e,	// (0x00049c5f) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x0004a22e) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x0004a22e) list_setting_number_pane_g

0xf08a,	// (0x00049c6b) list_setting_number_pane_t1_ParamLimits

0xf08a,	// (0x00049c6b) list_setting_number_pane_t1

0xf0a3,	// (0x00049c84) list_setting_number_pane_t2_ParamLimits

0xf0a3,	// (0x00049c84) list_setting_number_pane_t2

0xf0bd,	// (0x00049c9e) list_setting_number_pane_t3_ParamLimits

0xf0bd,	// (0x00049c9e) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x0004a233) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x0004a233) list_setting_number_pane_t

0xf066,	// (0x00049c47) set_value_pane_ParamLimits

0xf066,	// (0x00049c47) set_value_pane

0x9caa,	// (0x0004488b) bg_set_opt_pane_ParamLimits

0x9caa,	// (0x0004488b) bg_set_opt_pane

0x776d,	// (0x0004234e) set_value_pane_t1

0x9ccb,	// (0x000448ac) slider_set_pane_cp3

0x9cd4,	// (0x000448b5) volume_small_pane_cp

0x9cdd,	// (0x000448be) list_form_gen_pane

0x9c99,	// (0x0004487a) scroll_pane_cp8

0xf100,	// (0x00049ce1) form_field_data_pane_ParamLimits

0xf100,	// (0x00049ce1) form_field_data_pane

0xf117,	// (0x00049cf8) form_field_data_wide_pane_ParamLimits

0xf117,	// (0x00049cf8) form_field_data_wide_pane

0xf137,	// (0x00049d18) form_field_popup_pane_ParamLimits

0xf137,	// (0x00049d18) form_field_popup_pane

0xf14f,	// (0x00049d30) form_field_popup_wide_pane_ParamLimits

0xf14f,	// (0x00049d30) form_field_popup_wide_pane

0x77f9,	// (0x000423da) form_field_slider_pane_ParamLimits

0x77f9,	// (0x000423da) form_field_slider_pane

0x780c,	// (0x000423ed) form_field_slider_wide_pane_ParamLimits

0x780c,	// (0x000423ed) form_field_slider_wide_pane

0x9ce6,	// (0x000448c7) data_form_pane

0xf170,	// (0x00049d51) form_field_data_pane_t1

0x9cf2,	// (0x000448d3) input_focus_pane

0x9d00,	// (0x000448e1) data_form_wide_pane

0x784b,	// (0x0004242c) form_field_data_wide_pane_t1

0x9b18,	// (0x000446f9) input_focus_pane_cp6

0xf188,	// (0x00049d69) form_field_popup_pane_t1

0x9cf2,	// (0x000448d3) input_focus_pane_cp7

0x9ce6,	// (0x000448c7) list_form_pane

0x788d,	// (0x0004246e) form_field_popup_wide_pane_t1

0x9cf2,	// (0x000448d3) input_focus_pane_cp8

0x9d2c,	// (0x0004490d) list_form_wide_pane

0xf1a8,	// (0x00049d89) form_field_slider_pane_t1_ParamLimits

0xf1a8,	// (0x00049d89) form_field_slider_pane_t1

0xf1be,	// (0x00049d9f) form_field_slider_pane_t2_ParamLimits

0xf1be,	// (0x00049d9f) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x0004a243) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x0004a243) form_field_slider_pane_t

0x96b0,	// (0x00044291) input_focus_pane_cp9_ParamLimits

0x96b0,	// (0x00044291) input_focus_pane_cp9

0xf1d3,	// (0x00049db4) slider_cont_pane_ParamLimits

0xf1d3,	// (0x00049db4) slider_cont_pane

0x9d3b,	// (0x0004491c) form_field_slider_wide_pane_t1_ParamLimits

0x9d3b,	// (0x0004491c) form_field_slider_wide_pane_t1

0x78e9,	// (0x000424ca) form_field_slider_wide_pane_t2_ParamLimits

0x78e9,	// (0x000424ca) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x0004a248) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x0004a248) form_field_slider_wide_pane_t

0x96b0,	// (0x00044291) input_focus_pane_cp10_ParamLimits

0x96b0,	// (0x00044291) input_focus_pane_cp10

0xf1e7,	// (0x00049dc8) slider_cont_pane_cp1_ParamLimits

0xf1e7,	// (0x00049dc8) slider_cont_pane_cp1

0xf1fd,	// (0x00049dde) slider_form_pane_cp

0x9d4d,	// (0x0004492e) input_focus_pane_g1

0x9d55,	// (0x00044936) input_focus_pane_g2

0x9d5d,	// (0x0004493e) input_focus_pane_g3

0x9d65,	// (0x00044946) input_focus_pane_g4

0x9d6d,	// (0x0004494e) input_focus_pane_g5

0x9d75,	// (0x00044956) input_focus_pane_g6

0x9d7d,	// (0x0004495e) input_focus_pane_g7

0x9d85,	// (0x00044966) input_focus_pane_g8

0x9d8d,	// (0x0004496e) input_focus_pane_g9

0x9492,	// (0x00044073) input_focus_pane_g10

0x0009,

0xf66c,	// (0x0004a24d) input_focus_pane_g

0xc186,	// (0x00046d67) wait_border_pane_g3_copy1

0xf205,	// (0x00049de6) data_form_pane_t1

0x9492,	// (0x00044073) wait_anim_pane_g1_copy1

0xf323,	// (0x00049f04) data_form_wide_pane_t1

0xf21d,	// (0x00049dfe) list_form_graphic_pane_cp_ParamLimits

0xf21d,	// (0x00049dfe) list_form_graphic_pane_cp

0xcd7f,	// (0x00047960) slider_form_pane_g1

0xcd88,	// (0x00047969) slider_form_pane_g2

0x0006,

0xf963,	// (0x0004a544) slider_form_pane_g

0x7933,	// (0x00042514) list_form_graphic_pane_ParamLimits

0x7933,	// (0x00042514) list_form_graphic_pane

0x795d,	// (0x0004253e) list_form_graphic_pane_g1

0x7965,	// (0x00042546) list_form_graphic_pane_t1_ParamLimits

0x7965,	// (0x00042546) list_form_graphic_pane_t1

0x96ce,	// (0x000442af) list_highlight_pane_cp5_ParamLimits

0x96ce,	// (0x000442af) list_highlight_pane_cp5

0xf230,	// (0x00049e11) find_pane_g1

0x9d95,	// (0x00044976) input_find_pane

0xf23b,	// (0x00049e1c) input_find_pane_g1_ParamLimits

0xf23b,	// (0x00049e1c) input_find_pane_g1

0xf247,	// (0x00049e28) input_find_pane_t1_ParamLimits

0xf247,	// (0x00049e28) input_find_pane_t1

0xf25c,	// (0x00049e3d) input_find_pane_t2_ParamLimits

0xf25c,	// (0x00049e3d) input_find_pane_t2

0x0001,

0xf681,	// (0x0004a262) input_find_pane_t_ParamLimits

0xf681,	// (0x0004a262) input_find_pane_t

0x9d9e,	// (0x0004497f) input_focus_pane_cp5_ParamLimits

0x9d9e,	// (0x0004497f) input_focus_pane_cp5

0x96b0,	// (0x00044291) bg_popup_window_pane_cp2_ParamLimits

0x96b0,	// (0x00044291) bg_popup_window_pane_cp2

0x9dbd,	// (0x0004499e) listscroll_menu_pane_ParamLimits

0x9dbd,	// (0x0004499e) listscroll_menu_pane

0x9dc9,	// (0x000449aa) popup_submenu_window_ParamLimits

0x9dc9,	// (0x000449aa) popup_submenu_window

0x9ded,	// (0x000449ce) find_popup_pane_g1

0x9df5,	// (0x000449d6) input_popup_find_pane_cp

0x9dff,	// (0x000449e0) input_focus_pane_cp4_ParamLimits

0x9dff,	// (0x000449e0) input_focus_pane_cp4

0x9e0d,	// (0x000449ee) input_popup_find_pane_t1_ParamLimits

0x9e0d,	// (0x000449ee) input_popup_find_pane_t1

0x9576,	// (0x00044157) bg_popup_sub_pane_cp

0x9e3b,	// (0x00044a1c) listscroll_popup_sub_pane

0x9e43,	// (0x00044a24) list_submenu_pane_ParamLimits

0x9e43,	// (0x00044a24) list_submenu_pane

0x9e54,	// (0x00044a35) scroll_pane_cp4

0x9e5c,	// (0x00044a3d) list_single_popup_submenu_pane_ParamLimits

0x9e5c,	// (0x00044a3d) list_single_popup_submenu_pane

0x9e6e,	// (0x00044a4f) list_single_popup_submenu_pane_g1

0x9e76,	// (0x00044a57) list_single_popup_submenu_pane_t1_ParamLimits

0x9e76,	// (0x00044a57) list_single_popup_submenu_pane_t1

0x96b0,	// (0x00044291) bg_active_tab_pane_cp1_ParamLimits

0x96b0,	// (0x00044291) bg_active_tab_pane_cp1

0xb0c7,	// (0x00045ca8) tabs_2_active_pane_g1

0x3aff,	// (0x0003e6e0) tabs_2_active_pane_t1

0x96b0,	// (0x00044291) bg_passive_tab_pane_cp1_ParamLimits

0x96b0,	// (0x00044291) bg_passive_tab_pane_cp1

0xb0c7,	// (0x00045ca8) tabs_2_passive_pane_g1

0x3aff,	// (0x0003e6e0) tabs_2_passive_pane_t1

0x96ce,	// (0x000442af) bg_active_tab_pane_cp4

0x3b15,	// (0x0003e6f6) tabs_2_long_active_pane_t1

0xb0cf,	// (0x00045cb0) bg_passive_tab_pane_cp4

0x53d4,	// (0x0003ffb5) list_single_midp_graphic_pane_g4_ParamLimits

0x96ce,	// (0x000442af) bg_active_tab_pane_cp5

0x3b2c,	// (0x0003e70d) tabs_3_long_active_pane_t1

0xb0cf,	// (0x00045cb0) bg_passive_tab_pane_cp5

0x53d4,	// (0x0003ffb5) list_single_midp_graphic_pane_g4

0x96ce,	// (0x000442af) bg_popup_window_pane_cp13_ParamLimits

0x96ce,	// (0x000442af) bg_popup_window_pane_cp13

0x9e94,	// (0x00044a75) listscroll_popup_fast_pane_ParamLimits

0x9e94,	// (0x00044a75) listscroll_popup_fast_pane

0x9ea3,	// (0x00044a84) grid_popup_fast_pane_ParamLimits

0x9ea3,	// (0x00044a84) grid_popup_fast_pane

0x9eb5,	// (0x00044a96) scroll_pane_cp9_ParamLimits

0x9eb5,	// (0x00044a96) scroll_pane_cp9

0xe049,	// (0x00048c2a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xe049,	// (0x00048c2a) list_single_graphic_hl_pane_t1_cp2

0x9ed9,	// (0x00044aba) input_focus_pane_cp20_ParamLimits

0x9ed9,	// (0x00044aba) input_focus_pane_cp20

0x9ee7,	// (0x00044ac8) query_popup_data_pane_t1_ParamLimits

0x9ee7,	// (0x00044ac8) query_popup_data_pane_t1

0x9efa,	// (0x00044adb) query_popup_data_pane_t2_ParamLimits

0x9efa,	// (0x00044adb) query_popup_data_pane_t2

0xb0db,	// (0x00045cbc) query_popup_data_pane_t3_ParamLimits

0xb0db,	// (0x00045cbc) query_popup_data_pane_t3

0xb11c,	// (0x00045cfd) query_popup_data_pane_t4_ParamLimits

0xb11c,	// (0x00045cfd) query_popup_data_pane_t4

0xb158,	// (0x00045d39) query_popup_data_pane_t5_ParamLimits

0xb158,	// (0x00045d39) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x0004a267) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x0004a267) query_popup_data_pane_t

0x9d4d,	// (0x0004492e) bg_set_opt_pane_g1

0x9d55,	// (0x00044936) bg_set_opt_pane_g2

0x9d5d,	// (0x0004493e) bg_set_opt_pane_g3

0x9d65,	// (0x00044946) bg_set_opt_pane_g4

0x9d6d,	// (0x0004494e) bg_set_opt_pane_g5

0x9d75,	// (0x00044956) bg_set_opt_pane_g6

0x9d7d,	// (0x0004495e) bg_set_opt_pane_g7

0x9d85,	// (0x00044966) bg_set_opt_pane_g8

0x9d8d,	// (0x0004496e) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x0004a272) bg_set_opt_pane_g

0x4b9f,	// (0x0003f780) control_top_pane_stacon_ParamLimits

0x4b9f,	// (0x0003f780) control_top_pane_stacon

0x4bf2,	// (0x0003f7d3) signal_pane_stacon_ParamLimits

0x4bf2,	// (0x0003f7d3) signal_pane_stacon

0xb55d,	// (0x0004613e) stacon_top_pane_g1_ParamLimits

0xb55d,	// (0x0004613e) stacon_top_pane_g1

0x4c17,	// (0x0003f7f8) title_pane_stacon_ParamLimits

0x4c17,	// (0x0003f7f8) title_pane_stacon

0x4c39,	// (0x0003f81a) uni_indicator_pane_stacon_ParamLimits

0x4c39,	// (0x0003f81a) uni_indicator_pane_stacon

0x4c4e,	// (0x0003f82f) battery_pane_stacon_ParamLimits

0x4c4e,	// (0x0003f82f) battery_pane_stacon

0x4c8e,	// (0x0003f86f) control_bottom_pane_stacon_ParamLimits

0x4c8e,	// (0x0003f86f) control_bottom_pane_stacon

0x4cad,	// (0x0003f88e) navi_pane_stacon_ParamLimits

0x4cad,	// (0x0003f88e) navi_pane_stacon

0xb57f,	// (0x00046160) stacon_bottom_pane_g1_ParamLimits

0xb57f,	// (0x00046160) stacon_bottom_pane_g1

0xb18f,	// (0x00045d70) aid_levels_signal_lsc_ParamLimits

0xb18f,	// (0x00045d70) aid_levels_signal_lsc

0x496b,	// (0x0003f54c) signal_pane_stacon_g1_ParamLimits

0x496b,	// (0x0003f54c) signal_pane_stacon_g1

0x4977,	// (0x0003f558) signal_pane_stacon_g2_ParamLimits

0x4977,	// (0x0003f558) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x0004a285) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0004a285) signal_pane_stacon_g

0x49ab,	// (0x0003f58c) title_pane_stacon_t1_ParamLimits

0x49ab,	// (0x0003f58c) title_pane_stacon_t1

0xb1a9,	// (0x00045d8a) uni_indicator_pane_stacon_g1

0xb1b3,	// (0x00045d94) uni_indicator_pane_stacon_g2

0xb1bd,	// (0x00045d9e) uni_indicator_pane_stacon_g3

0xb1c7,	// (0x00045da8) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x0004a291) uni_indicator_pane_stacon_g

0x49d0,	// (0x0003f5b1) control_top_pane_stacon_g1

0x49d8,	// (0x0003f5b9) control_top_pane_stacon_t1_ParamLimits

0x49d8,	// (0x0003f5b9) control_top_pane_stacon_t1

0xb1d1,	// (0x00045db2) aid_levels_battery_lsc_ParamLimits

0xb1d1,	// (0x00045db2) aid_levels_battery_lsc

0x4a09,	// (0x0003f5ea) battery_pane_stacon_g1_ParamLimits

0x4a09,	// (0x0003f5ea) battery_pane_stacon_g1

0x4a15,	// (0x0003f5f6) battery_pane_stacon_g2_ParamLimits

0x4a15,	// (0x0003f5f6) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x0004a29a) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x0004a29a) battery_pane_stacon_g

0x4a44,	// (0x0003f625) navi_icon_pane_stacon

0x4a54,	// (0x0003f635) navi_navi_pane_stacon

0x4a44,	// (0x0003f625) navi_text_pane_stacon

0x49d0,	// (0x0003f5b1) control_bottom_pane_stacon_g1

0x4a64,	// (0x0003f645) control_bottom_pane_stacon_t1_ParamLimits

0x4a64,	// (0x0003f645) control_bottom_pane_stacon_t1

0x3b42,	// (0x0003e723) grid_app_pane_ParamLimits

0x3b42,	// (0x0003e723) grid_app_pane

0x3b70,	// (0x0003e751) scroll_pane_cp15_ParamLimits

0x3b70,	// (0x0003e751) scroll_pane_cp15

0x3b83,	// (0x0003e764) cell_app_pane_ParamLimits

0x3b83,	// (0x0003e764) cell_app_pane

0x3bc0,	// (0x0003e7a1) cell_app_pane_g1_ParamLimits

0x3bc0,	// (0x0003e7a1) cell_app_pane_g1

0xb1f9,	// (0x00045dda) cell_app_pane_g2_ParamLimits

0xb1f9,	// (0x00045dda) cell_app_pane_g2

0x0001,

0xf6be,	// (0x0004a29f) cell_app_pane_g_ParamLimits

0xf6be,	// (0x0004a29f) cell_app_pane_g

0x3be4,	// (0x0003e7c5) cell_app_pane_t1_ParamLimits

0x3be4,	// (0x0003e7c5) cell_app_pane_t1

0xb205,	// (0x00045de6) grid_highlight_pane_ParamLimits

0xb205,	// (0x00045de6) grid_highlight_pane

0x9d4d,	// (0x0004492e) cell_highlight_pane_g1

0x9d55,	// (0x00044936) cell_highlight_pane_g2

0x9d5d,	// (0x0004493e) cell_highlight_pane_g3

0x9d65,	// (0x00044946) cell_highlight_pane_g4

0x9d6d,	// (0x0004494e) cell_highlight_pane_g5

0x9d75,	// (0x00044956) cell_highlight_pane_g6

0x9d7d,	// (0x0004495e) cell_highlight_pane_g7

0x9d85,	// (0x00044966) cell_highlight_pane_g8

0x9d8d,	// (0x0004496e) cell_highlight_pane_g9

0x9492,	// (0x00044073) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x0004a24d) cell_highlight_pane_g

0xb216,	// (0x00045df7) bg_scroll_pane

0x4aa8,	// (0x0003f689) scroll_handle_pane

0xb25d,	// (0x00045e3e) scroll_bg_pane_g1

0xb272,	// (0x00045e53) scroll_bg_pane_g2

0xb28a,	// (0x00045e6b) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x0004a2a4) scroll_bg_pane_g

0xb29f,	// (0x00045e80) scroll_handle_focus_pane_ParamLimits

0xb29f,	// (0x00045e80) scroll_handle_focus_pane

0xb25d,	// (0x00045e3e) scroll_handle_pane_g1

0xb2ac,	// (0x00045e8d) scroll_handle_pane_g2

0xb28a,	// (0x00045e6b) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x0004a2ab) scroll_handle_pane_g

0x9dff,	// (0x000449e0) bg_popup_sub_pane_cp21_ParamLimits

0x9dff,	// (0x000449e0) bg_popup_sub_pane_cp21

0xb2c0,	// (0x00045ea1) popup_fep_japan_predictive_window_t1_ParamLimits

0xb2c0,	// (0x00045ea1) popup_fep_japan_predictive_window_t1

0xb2d7,	// (0x00045eb8) popup_fep_japan_predictive_window_t2_ParamLimits

0xb2d7,	// (0x00045eb8) popup_fep_japan_predictive_window_t2

0xb30a,	// (0x00045eeb) popup_fep_japan_predictive_window_t3_ParamLimits

0xb30a,	// (0x00045eeb) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x0004a2b2) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x0004a2b2) popup_fep_japan_predictive_window_t

0x9576,	// (0x00044157) bg_popup_sub_pane_cp23

0xb341,	// (0x00045f22) listscroll_japin_cand_pane

0xb349,	// (0x00045f2a) popup_fep_japan_candidate_window_t1

0xb357,	// (0x00045f38) candidate_pane_ParamLimits

0xb357,	// (0x00045f38) candidate_pane

0xb36a,	// (0x00045f4b) scroll_pane_cp30

0xb372,	// (0x00045f53) list_single_popup_jap_candidate_pane_ParamLimits

0xb372,	// (0x00045f53) list_single_popup_jap_candidate_pane

0x9576,	// (0x00044157) list_highlight_pane_cp30

0xb387,	// (0x00045f68) list_single_popup_jap_candidate_pane_t1

0x9f49,	// (0x00044b2a) level_1_signal

0x9f5b,	// (0x00044b3c) level_2_signal

0x9f6e,	// (0x00044b4f) level_3_signal

0x9f81,	// (0x00044b62) level_4_signal

0x9f94,	// (0x00044b75) level_5_signal

0x9fa7,	// (0x00044b88) level_6_signal

0x9fba,	// (0x00044b9b) level_7_signal

0x9f49,	// (0x00044b2a) level_1_battery

0x9f5b,	// (0x00044b3c) level_2_battery

0x9f6e,	// (0x00044b4f) level_3_battery

0x9f81,	// (0x00044b62) level_4_battery

0x9f94,	// (0x00044b75) level_5_battery

0x9fa7,	// (0x00044b88) level_6_battery

0x9fba,	// (0x00044b9b) level_7_battery

0xb3ae,	// (0x00045f8f) list_menu_pane_ParamLimits

0xb3ae,	// (0x00045f8f) list_menu_pane

0xb3c4,	// (0x00045fa5) scroll_pane_cp25_ParamLimits

0xb3c4,	// (0x00045fa5) scroll_pane_cp25

0x9fcd,	// (0x00044bae) list_double2_graphic_pane_cp2_ParamLimits

0x9fcd,	// (0x00044bae) list_double2_graphic_pane_cp2

0x9fcd,	// (0x00044bae) list_double2_large_graphic_pane_cp2_ParamLimits

0x9fcd,	// (0x00044bae) list_double2_large_graphic_pane_cp2

0x9fcd,	// (0x00044bae) list_double2_pane_cp2_ParamLimits

0x9fcd,	// (0x00044bae) list_double2_pane_cp2

0x9fcd,	// (0x00044bae) list_double_graphic_pane_cp2_ParamLimits

0x9fcd,	// (0x00044bae) list_double_graphic_pane_cp2

0x9fcd,	// (0x00044bae) list_double_large_graphic_pane_cp2_ParamLimits

0x9fcd,	// (0x00044bae) list_double_large_graphic_pane_cp2

0x9fcd,	// (0x00044bae) list_double_number_pane_cp2_ParamLimits

0x9fcd,	// (0x00044bae) list_double_number_pane_cp2

0x9fcd,	// (0x00044bae) list_double_pane_cp2_ParamLimits

0x9fcd,	// (0x00044bae) list_double_pane_cp2

0x9fe8,	// (0x00044bc9) list_single_2graphic_pane_cp2_ParamLimits

0x9fe8,	// (0x00044bc9) list_single_2graphic_pane_cp2

0x9fe8,	// (0x00044bc9) list_single_graphic_heading_pane_cp2_ParamLimits

0x9fe8,	// (0x00044bc9) list_single_graphic_heading_pane_cp2

0x9fe8,	// (0x00044bc9) list_single_graphic_pane_cp2_ParamLimits

0x9fe8,	// (0x00044bc9) list_single_graphic_pane_cp2

0x9fe8,	// (0x00044bc9) list_single_heading_pane_cp2_ParamLimits

0x9fe8,	// (0x00044bc9) list_single_heading_pane_cp2

0x9ff9,	// (0x00044bda) list_single_large_graphic_pane_cp2_ParamLimits

0x9ff9,	// (0x00044bda) list_single_large_graphic_pane_cp2

0x9fe8,	// (0x00044bc9) list_single_number_heading_pane_cp2_ParamLimits

0x9fe8,	// (0x00044bc9) list_single_number_heading_pane_cp2

0x9fe8,	// (0x00044bc9) list_single_number_pane_cp2_ParamLimits

0x9fe8,	// (0x00044bc9) list_single_number_pane_cp2

0xa009,	// (0x00044bea) list_single_pane_cp2_ParamLimits

0xa009,	// (0x00044bea) list_single_pane_cp2

0xb3e6,	// (0x00045fc7) bg_popup_sub_pane_cp22

0x4b57,	// (0x0003f738) popup_side_volume_key_window_g1

0x4b7b,	// (0x0003f75c) popup_side_volume_key_window_t1

0x4b97,	// (0x0003f778) volume_small_pane_cp1

0x96b0,	// (0x00044291) bg_popup_sub_pane_cp24_ParamLimits

0x96b0,	// (0x00044291) bg_popup_sub_pane_cp24

0xb3fc,	// (0x00045fdd) fep_china_uni_candidate_pane_ParamLimits

0xb3fc,	// (0x00045fdd) fep_china_uni_candidate_pane

0xb410,	// (0x00045ff1) fep_china_uni_entry_pane

0xb420,	// (0x00046001) popup_fep_china_uni_window_g1

0xb43c,	// (0x0004601d) fep_china_uni_entry_pane_g1

0xb444,	// (0x00046025) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x0004a2e3) fep_china_uni_entry_pane_g

0xb44c,	// (0x0004602d) fep_entry_item_pane

0xb456,	// (0x00046037) fep_candidate_item_pane

0xb45e,	// (0x0004603f) fep_china_uni_candidate_pane_g1

0xb466,	// (0x00046047) fep_china_uni_candidate_pane_g2

0xb46e,	// (0x0004604f) fep_china_uni_candidate_pane_g3

0xb476,	// (0x00046057) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x0004a2e8) fep_china_uni_candidate_pane_g

0x9492,	// (0x00044073) fep_entry_item_pane_g1

0xb47e,	// (0x0004605f) fep_entry_item_pane_t1_ParamLimits

0xb47e,	// (0x0004605f) fep_entry_item_pane_t1

0xb494,	// (0x00046075) fep_candidate_item_pane_t1_ParamLimits

0xb494,	// (0x00046075) fep_candidate_item_pane_t1

0xb4a9,	// (0x0004608a) fep_candidate_item_pane_t2_ParamLimits

0xb4a9,	// (0x0004608a) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x0004a2f1) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x0004a2f1) fep_candidate_item_pane_t

0x96ce,	// (0x000442af) list_highlight_pane_cp31_ParamLimits

0x96ce,	// (0x000442af) list_highlight_pane_cp31

0xb4bb,	// (0x0004609c) level_1_signal_lsc

0xb4c4,	// (0x000460a5) level_2_signal_lsc

0xb4cd,	// (0x000460ae) level_3_signal_lsc

0xb4d6,	// (0x000460b7) level_4_signal_lsc

0xb4df,	// (0x000460c0) level_5_signal_lsc

0xb4e8,	// (0x000460c9) level_6_signal_lsc

0xb4f1,	// (0x000460d2) level_7_signal_lsc

0xb4f1,	// (0x000460d2) level_1_battery_lsc

0xb4fa,	// (0x000460db) level_2_battery_lsc

0xb503,	// (0x000460e4) level_3_battery_lsc

0xb50c,	// (0x000460ed) level_4_battery_lsc

0xb515,	// (0x000460f6) level_5_battery_lsc

0xb51e,	// (0x000460ff) level_6_battery_lsc

0xb4bb,	// (0x0004609c) level_7_battery_lsc

0xb527,	// (0x00046108) scroll_handle_focus_pane_g1

0xb530,	// (0x00046111) scroll_handle_focus_pane_g2

0xb539,	// (0x0004611a) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x0004a2f6) scroll_handle_focus_pane_g

0xf271,	// (0x00049e52) list_single_2graphic_pane_g1_ParamLimits

0xf271,	// (0x00049e52) list_single_2graphic_pane_g1

0xf3a8,	// (0x00049f89) list_single_2graphic_pane_g2_ParamLimits

0xf3a8,	// (0x00049f89) list_single_2graphic_pane_g2

0x74a9,	// (0x0004208a) list_single_2graphic_pane_g3_ParamLimits

0x74a9,	// (0x0004208a) list_single_2graphic_pane_g3

0xf27d,	// (0x00049e5e) list_single_2graphic_pane_g4_ParamLimits

0xf27d,	// (0x00049e5e) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x0004a2fd) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x0004a2fd) list_single_2graphic_pane_g

0xf289,	// (0x00049e6a) list_single_2graphic_pane_t1_ParamLimits

0xf289,	// (0x00049e6a) list_single_2graphic_pane_t1

0xf406,	// (0x00049fe7) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xf406,	// (0x00049fe7) list_double2_graphic_large_graphic_pane_g1

0xf3f5,	// (0x00049fd6) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xf3f5,	// (0x00049fd6) list_double2_graphic_large_graphic_pane_g2

0xf3dd,	// (0x00049fbe) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xf3dd,	// (0x00049fbe) list_double2_graphic_large_graphic_pane_g3

0xf416,	// (0x00049ff7) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xf416,	// (0x00049ff7) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x0004a306) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x0004a306) list_double2_graphic_large_graphic_pane_g

0xf2b7,	// (0x00049e98) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xf2b7,	// (0x00049e98) list_double2_graphic_large_graphic_pane_t1

0xf2cd,	// (0x00049eae) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xf2cd,	// (0x00049eae) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x0004a30f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x0004a30f) list_double2_graphic_large_graphic_pane_t

0xb626,	// (0x00046207) popup_fast_swap_window_ParamLimits

0xb626,	// (0x00046207) popup_fast_swap_window

0xb642,	// (0x00046223) popup_side_volume_key_window

0xb65c,	// (0x0004623d) stacon_top_pane

0xb666,	// (0x00046247) status_pane_ParamLimits

0xb666,	// (0x00046247) status_pane

0x9488,	// (0x00044069) status_small_pane

0x9576,	// (0x00044157) control_pane

0x9576,	// (0x00044157) stacon_bottom_pane

0x9c99,	// (0x0004487a) scroll_pane_cp121

0x9cdd,	// (0x000448be) set_content_pane

0xb542,	// (0x00046123) bg_active_tab_pane_g1_cp1

0xb54b,	// (0x0004612c) bg_active_tab_pane_g2_cp1

0xb554,	// (0x00046135) bg_active_tab_pane_g3_cp1

0xb542,	// (0x00046123) bg_passive_tab_pane_g1_cp1

0xb54b,	// (0x0004612c) bg_passive_tab_pane_g2_cp1

0xb554,	// (0x00046135) bg_passive_tab_pane_g3_cp1

0xa08f,	// (0x00044c70) bg_active_tab_pane_g1_cp2

0xb54b,	// (0x0004612c) bg_active_tab_pane_g2_cp2

0xa098,	// (0x00044c79) bg_active_tab_pane_g3_cp2

0xa08f,	// (0x00044c70) bg_passive_tab_pane_g1_cp2

0xb54b,	// (0x0004612c) bg_passive_tab_pane_g2_cp2

0xa098,	// (0x00044c79) bg_passive_tab_pane_g3_cp2

0xa0a1,	// (0x00044c82) bg_active_tab_pane_g1_cp3

0xb54b,	// (0x0004612c) bg_active_tab_pane_g2_cp3

0xa0aa,	// (0x00044c8b) bg_active_tab_pane_g3_cp3

0xa0a1,	// (0x00044c82) bg_passive_tab_pane_g1_cp3

0xb54b,	// (0x0004612c) bg_passive_tab_pane_g2_cp3

0xa0aa,	// (0x00044c8b) bg_passive_tab_pane_g3_cp3

0xa0b3,	// (0x00044c94) bg_active_tab_pane_g1_cp4

0xb54b,	// (0x0004612c) bg_active_tab_pane_g2_cp4

0xa0bc,	// (0x00044c9d) bg_active_tab_pane_g3_cp4

0xa0b3,	// (0x00044c94) bg_passive_tab_pane_g1_cp4

0xb54b,	// (0x0004612c) bg_passive_tab_pane_g2_cp4

0xa0bc,	// (0x00044c9d) bg_passive_tab_pane_g3_cp4

0xb59b,	// (0x0004617c) bg_active_tab_pane_g1_cp5

0xb54b,	// (0x0004612c) bg_active_tab_pane_g2_cp5

0xb5a4,	// (0x00046185) bg_active_tab_pane_g3_cp5

0xb59b,	// (0x0004617c) bg_passive_tab_pane_g1_cp5

0xb54b,	// (0x0004612c) bg_passive_tab_pane_g2_cp5

0xb5a4,	// (0x00046185) bg_passive_tab_pane_g3_cp5

0x2bce,	// (0x0003d7af) list_set_graphic_pane_ParamLimits

0x2bce,	// (0x0003d7af) list_set_graphic_pane

0x9576,	// (0x00044157) bg_set_opt_pane_cp4

0xb5ad,	// (0x0004618e) list_set_graphic_pane_g1_ParamLimits

0xb5ad,	// (0x0004618e) list_set_graphic_pane_g1

0xb5b9,	// (0x0004619a) list_set_graphic_pane_g2_ParamLimits

0xb5b9,	// (0x0004619a) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x0004a314) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x0004a314) list_set_graphic_pane_g

0x0009,

0xfaaa,	// (0x0004a68b) volume_small_pane_cp_g

0xb5db,	// (0x000461bc) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xb5db,	// (0x000461bc) list_double2_large_graphic_pane_g1_cp2

0xb5e7,	// (0x000461c8) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xb5e7,	// (0x000461c8) list_double2_large_graphic_pane_g2_cp2

0xb5f6,	// (0x000461d7) list_double2_large_graphic_pane_g3_cp2

0xb5fe,	// (0x000461df) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xb5fe,	// (0x000461df) list_double2_large_graphic_pane_t1_cp2

0xb614,	// (0x000461f5) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xb614,	// (0x000461f5) list_double2_large_graphic_pane_t2_cp2

0xcaf2,	// (0x000476d3) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xcaf2,	// (0x000476d3) list_double_large_graphic_pane_g1_cp2

0xcb03,	// (0x000476e4) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xcb03,	// (0x000476e4) list_double_large_graphic_pane_g2_cp2

0xb735,	// (0x00046316) list_double_large_graphic_pane_g3_cp2

0xcb12,	// (0x000476f3) list_double_large_graphic_pane_g4_cp

0xcb1a,	// (0x000476fb) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xcb1a,	// (0x000476fb) list_double_large_graphic_pane_t1_cp2

0xcb31,	// (0x00047712) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xcb31,	// (0x00047712) list_double_large_graphic_pane_t2_cp2

0xb674,	// (0x00046255) list_double2_graphic_pane_g1_cp2_ParamLimits

0xb674,	// (0x00046255) list_double2_graphic_pane_g1_cp2

0xb680,	// (0x00046261) list_double2_graphic_pane_g2_cp2_ParamLimits

0xb680,	// (0x00046261) list_double2_graphic_pane_g2_cp2

0xb68f,	// (0x00046270) list_double2_graphic_pane_g3_cp2

0xb697,	// (0x00046278) list_double2_graphic_pane_t1_cp2_ParamLimits

0xb697,	// (0x00046278) list_double2_graphic_pane_t1_cp2

0xb6ad,	// (0x0004628e) list_double2_graphic_pane_t2_cp2_ParamLimits

0xb6ad,	// (0x0004628e) list_double2_graphic_pane_t2_cp2

0xb6bf,	// (0x000462a0) list_single_number_heading_pane_g1_cp2_ParamLimits

0xb6bf,	// (0x000462a0) list_single_number_heading_pane_g1_cp2

0xb6cb,	// (0x000462ac) list_single_number_heading_pane_g2_cp2

0xb6d3,	// (0x000462b4) list_single_number_heading_pane_t1_cp2_ParamLimits

0xb6d3,	// (0x000462b4) list_single_number_heading_pane_t1_cp2

0xb6e9,	// (0x000462ca) list_single_number_heading_pane_t2_cp2_ParamLimits

0xb6e9,	// (0x000462ca) list_single_number_heading_pane_t2_cp2

0xb6fb,	// (0x000462dc) list_single_number_heading_pane_t3_cp2_ParamLimits

0xb6fb,	// (0x000462dc) list_single_number_heading_pane_t3_cp2

0xb6bf,	// (0x000462a0) list_single_heading_pane_g1_cp2_ParamLimits

0xb6bf,	// (0x000462a0) list_single_heading_pane_g1_cp2

0xb6cb,	// (0x000462ac) list_single_heading_pane_g2_cp2

0xb6d3,	// (0x000462b4) list_single_heading_pane_t1_cp2_ParamLimits

0xb6d3,	// (0x000462b4) list_single_heading_pane_t1_cp2

0xc8fc,	// (0x000474dd) list_single_heading_pane_t2_cp2_ParamLimits

0xc8fc,	// (0x000474dd) list_single_heading_pane_t2_cp2

0xc890,	// (0x00047471) list_double_graphic_pane_g1_cp2_ParamLimits

0xc890,	// (0x00047471) list_double_graphic_pane_g1_cp2

0xb0b8,	// (0x00045c99) list_double_graphic_pane_g2_cp2_ParamLimits

0xb0b8,	// (0x00045c99) list_double_graphic_pane_g2_cp2

0xc89c,	// (0x0004747d) list_double_graphic_pane_g3_cp2

0xc8a4,	// (0x00047485) list_double_graphic_pane_t1_cp2_ParamLimits

0xc8a4,	// (0x00047485) list_double_graphic_pane_t1_cp2

0xc8ba,	// (0x0004749b) list_double_graphic_pane_t2_cp2_ParamLimits

0xc8ba,	// (0x0004749b) list_double_graphic_pane_t2_cp2

0xb0ac,	// (0x00045c8d) list_double_number_pane_g1_cp2_ParamLimits

0xb0ac,	// (0x00045c8d) list_double_number_pane_g1_cp2

0xb735,	// (0x00046316) list_double_number_pane_g2_cp2

0xc856,	// (0x00047437) list_double_number_pane_t1_cp2_ParamLimits

0xc856,	// (0x00047437) list_double_number_pane_t1_cp2

0xc868,	// (0x00047449) list_double_number_pane_t2_cp2_ParamLimits

0xc868,	// (0x00047449) list_double_number_pane_t2_cp2

0xc87e,	// (0x0004745f) list_double_number_pane_t3_cp2_ParamLimits

0xc87e,	// (0x0004745f) list_double_number_pane_t3_cp2

0xc7ce,	// (0x000473af) list_single_graphic_pane_g1_cp2_ParamLimits

0xc7ce,	// (0x000473af) list_single_graphic_pane_g1_cp2

0xb6bf,	// (0x000462a0) list_single_graphic_pane_g2_cp2_ParamLimits

0xb6bf,	// (0x000462a0) list_single_graphic_pane_g2_cp2

0xb6cb,	// (0x000462ac) list_single_graphic_pane_g3_cp2

0xc7a6,	// (0x00047387) list_single_graphic_pane_t1_cp2_ParamLimits

0xc7a6,	// (0x00047387) list_single_graphic_pane_t1_cp2

0xb6bf,	// (0x000462a0) list_single_number_pane_g1_cp2_ParamLimits

0xb6bf,	// (0x000462a0) list_single_number_pane_g1_cp2

0xb6cb,	// (0x000462ac) list_single_number_pane_g2_cp2

0xc7a6,	// (0x00047387) list_single_number_pane_t1_cp2_ParamLimits

0xc7a6,	// (0x00047387) list_single_number_pane_t1_cp2

0xc7bc,	// (0x0004739d) list_single_number_pane_t2_cp2_ParamLimits

0xc7bc,	// (0x0004739d) list_single_number_pane_t2_cp2

0xb5e7,	// (0x000461c8) list_double2_pane_g1_cp2_ParamLimits

0xb5e7,	// (0x000461c8) list_double2_pane_g1_cp2

0xb5f6,	// (0x000461d7) list_double2_pane_g2_cp2

0xb70d,	// (0x000462ee) list_double2_pane_t1_cp2_ParamLimits

0xb70d,	// (0x000462ee) list_double2_pane_t1_cp2

0xb723,	// (0x00046304) list_double2_pane_t2_cp2_ParamLimits

0xb723,	// (0x00046304) list_double2_pane_t2_cp2

0xb0ac,	// (0x00045c8d) list_double_pane_g1_cp2_ParamLimits

0xb0ac,	// (0x00045c8d) list_double_pane_g1_cp2

0xb735,	// (0x00046316) list_double_pane_g2_cp2

0xb73d,	// (0x0004631e) list_double_pane_t1_cp2_ParamLimits

0xb73d,	// (0x0004631e) list_double_pane_t1_cp2

0xb753,	// (0x00046334) list_double_pane_t2_cp2_ParamLimits

0xb753,	// (0x00046334) list_double_pane_t2_cp2

0xb782,	// (0x00046363) list_single_pane_cp2_g3

0xb6bf,	// (0x000462a0) list_single_pane_g1_cp2_ParamLimits

0xb6bf,	// (0x000462a0) list_single_pane_g1_cp2

0xb6cb,	// (0x000462ac) list_single_pane_g2_cp2

0xb792,	// (0x00046373) list_single_pane_t1_cp2_ParamLimits

0xb792,	// (0x00046373) list_single_pane_t1_cp2

0xb7aa,	// (0x0004638b) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xb7aa,	// (0x0004638b) list_single_large_graphic_pane_g1_cp2

0xb7b6,	// (0x00046397) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xb7b6,	// (0x00046397) list_single_large_graphic_pane_g2_cp2

0xb7c2,	// (0x000463a3) list_single_large_graphic_pane_g3_cp2

0xb7ca,	// (0x000463ab) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xb7ca,	// (0x000463ab) list_single_large_graphic_pane_g4_cp1

0xb7e4,	// (0x000463c5) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xb7e4,	// (0x000463c5) list_single_large_graphic_pane_t1_cp2

0xc788,	// (0x00047369) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xc788,	// (0x00047369) list_single_graphic_heading_pane_g1_cp2

0xc757,	// (0x00047338) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xc757,	// (0x00047338) list_single_graphic_heading_pane_g4_cp2

0xb6cb,	// (0x000462ac) list_single_graphic_heading_pane_g5_cp2

0xb6d3,	// (0x000462b4) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xb6d3,	// (0x000462b4) list_single_graphic_heading_pane_t1_cp2

0xc794,	// (0x00047375) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xc794,	// (0x00047375) list_single_graphic_heading_pane_t2_cp2

0xc74b,	// (0x0004732c) list_single_2graphic_pane_g1_cp2_ParamLimits

0xc74b,	// (0x0004732c) list_single_2graphic_pane_g1_cp2

0xc757,	// (0x00047338) list_single_2graphic_pane_g2_cp2_ParamLimits

0xc757,	// (0x00047338) list_single_2graphic_pane_g2_cp2

0xb6cb,	// (0x000462ac) list_single_2graphic_pane_g3_cp2

0xc766,	// (0x00047347) list_single_2graphic_pane_g4_cp2_ParamLimits

0xc766,	// (0x00047347) list_single_2graphic_pane_g4_cp2

0xc772,	// (0x00047353) list_single_2graphic_pane_t1_cp2_ParamLimits

0xc772,	// (0x00047353) list_single_2graphic_pane_t1_cp2

0x9492,	// (0x00044073) list_highlight_pane_g10_cp1

0xc35d,	// (0x00046f3e) list_highlight_pane_g1_cp1

0xc365,	// (0x00046f46) list_highlight_pane_g2_cp1

0xc36d,	// (0x00046f4e) list_highlight_pane_g3_cp1

0xc375,	// (0x00046f56) list_highlight_pane_g4_cp1

0xc37d,	// (0x00046f5e) list_highlight_pane_g5_cp1

0xc385,	// (0x00046f66) list_highlight_pane_g6_cp1

0xc38d,	// (0x00046f6e) list_highlight_pane_g7_cp1

0xc395,	// (0x00046f76) list_highlight_pane_g8_cp1

0xc39d,	// (0x00046f7e) list_highlight_pane_g9_cp1

0x09c7,	// (0x0003b5a8) form_field_slider_pane_t3

0x09d5,	// (0x0003b5b6) form_field_slider_pane_t4

0xc2a7,	// (0x00046e88) slider_form_pane_ParamLimits

0xc2a7,	// (0x00046e88) slider_form_pane

0x9576,	// (0x00044157) control_abbreviations

0x9576,	// (0x00044157) control_conventions

0x9576,	// (0x00044157) control_definitions

0x9576,	// (0x00044157) format_table_attribute

0xc946,	// (0x00047527) bg_popup_preview_window_pane_g9

0x9576,	// (0x00044157) format_table_data2

0x9576,	// (0x00044157) format_table_data3

0x9576,	// (0x00044157) format_table_data_example

0x0008,

0x9576,	// (0x00044157) intro_purpose

0xf8c3,	// (0x0004a4a4) bg_popup_preview_window_pane_g

0x9576,	// (0x00044157) texts_category

0x9576,	// (0x00044157) texts_graphics

0xb7fa,	// (0x000463db) text_digital

0xb809,	// (0x000463ea) text_primary

0xb818,	// (0x000463f9) text_primary_small

0xb827,	// (0x00046408) text_secondary

0xb836,	// (0x00046417) text_title

0xcdff,	// (0x000479e0) bg_passive_tab_pane_g1_cp3_srt

0xb54b,	// (0x0004612c) bg_passive_tab_pane_g2_cp3_srt

0xce08,	// (0x000479e9) bg_passive_tab_pane_g3_cp3_srt

0x96b0,	// (0x00044291) bg_active_tab_pane_cp3_srt_ParamLimits

0x96b0,	// (0x00044291) bg_active_tab_pane_cp3_srt

0xb0a4,	// (0x00045c85) tabs_4_active_pane_srt_g1

0x3893,	// (0x0003e474) tabs_4_active_pane_srt_t1_ParamLimits

0x3893,	// (0x0003e474) tabs_4_active_pane_srt_t1

0xcdff,	// (0x000479e0) bg_active_tab_pane_g1_cp3_copy1

0xb54b,	// (0x0004612c) bg_active_tab_pane_g2_cp3_copy1

0xce08,	// (0x000479e9) bg_active_tab_pane_g3_cp3_copy1

0x96ce,	// (0x000442af) tabs_2_long_active_pane_srt_ParamLimits

0x96ce,	// (0x000442af) tabs_2_long_active_pane_srt

0x96ce,	// (0x000442af) tabs_2_long_passive_pane_srt_ParamLimits

0x96ce,	// (0x000442af) tabs_2_long_passive_pane_srt

0xb0cf,	// (0x00045cb0) bg_passive_tab_pane_cp4_srt_ParamLimits

0xb0cf,	// (0x00045cb0) bg_passive_tab_pane_cp4_srt

0xcd3a,	// (0x0004791b) bg_passive_tab_pane_g1_cp4_srt

0xb54b,	// (0x0004612c) bg_passive_tab_pane_g2_cp4_srt

0xcd43,	// (0x00047924) bg_passive_tab_pane_g3_cp4_srt

0x96ce,	// (0x000442af) bg_active_tab_pane_cp4_srt_ParamLimits

0x96ce,	// (0x000442af) bg_active_tab_pane_cp4_srt

0x3b15,	// (0x0003e6f6) tabs_2_long_active_pane_srt_t1_ParamLimits

0x3b15,	// (0x0003e6f6) tabs_2_long_active_pane_srt_t1

0xcd3a,	// (0x0004791b) bg_active_tab_pane_g1_cp4_srt

0xb54b,	// (0x0004612c) bg_active_tab_pane_g2_cp4_srt

0xcd43,	// (0x00047924) bg_active_tab_pane_g3_cp4_srt

0x96b0,	// (0x00044291) tabs_3_long_active_pane_srt_ParamLimits

0x96b0,	// (0x00044291) tabs_3_long_active_pane_srt

0x96b0,	// (0x00044291) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x96b0,	// (0x00044291) tabs_3_long_passive_pane_cp_srt

0x96b0,	// (0x00044291) tabs_3_long_passive_pane_srt_ParamLimits

0x96b0,	// (0x00044291) tabs_3_long_passive_pane_srt

0xb0cf,	// (0x00045cb0) bg_passive_tab_pane_cp5_srt_ParamLimits

0xb0cf,	// (0x00045cb0) bg_passive_tab_pane_cp5_srt

0xb59b,	// (0x0004617c) bg_passive_tab_pane_g1_cp5_srt

0xb54b,	// (0x0004612c) bg_passive_tab_pane_g2_cp5_srt

0xb5a4,	// (0x00046185) bg_passive_tab_pane_g3_cp5_srt

0x96ce,	// (0x000442af) bg_active_tab_pane_cp5_srt_ParamLimits

0x96ce,	// (0x000442af) bg_active_tab_pane_cp5_srt

0x3b2c,	// (0x0003e70d) tabs_3_long_active_pane_srt_t1_ParamLimits

0x3b2c,	// (0x0003e70d) tabs_3_long_active_pane_srt_t1

0xb59b,	// (0x0004617c) bg_active_tab_pane_g1_cp5_srt

0xb54b,	// (0x0004612c) bg_active_tab_pane_g2_cp5_srt

0xb5a4,	// (0x00046185) bg_active_tab_pane_g3_cp5_srt

0xcd2c,	// (0x0004790d) navi_text_pane_srt_t1

0xcd24,	// (0x00047905) navi_icon_pane_srt_g1

0xb94e,	// (0x0004652f) midp_editing_number_pane_srt

0xb845,	// (0x00046426) midp_ticker_pane_srt

0xb956,	// (0x00046537) midp_ticker_pane_srt_g1

0xb95e,	// (0x0004653f) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x0004a333) midp_ticker_pane_srt_g

0xb966,	// (0x00046547) midp_ticker_pane_srt_t1

0xcd15,	// (0x000478f6) midp_editing_number_pane_t1_copy1

0xa0c5,	// (0x00044ca6) listscroll_midp_pane

0xa0c5,	// (0x00044ca6) midp_form_pane

0xb84d,	// (0x0004642e) midp_info_popup_window_ParamLimits

0xb84d,	// (0x0004642e) midp_info_popup_window

0x9dff,	// (0x000449e0) bg_popup_sub_pane_cp50_ParamLimits

0x9dff,	// (0x000449e0) bg_popup_sub_pane_cp50

0xbfbc,	// (0x00046b9d) listscroll_midp_info_pane_ParamLimits

0xbfbc,	// (0x00046b9d) listscroll_midp_info_pane

0xbfa4,	// (0x00046b85) listscroll_form_midp_pane_ParamLimits

0xbfa4,	// (0x00046b85) listscroll_form_midp_pane

0xbfb0,	// (0x00046b91) scroll_bar_cp050

0x09bb,	// (0x0003b59c) list_midp_pane

0xd5f1,	// (0x000481d2) signal_pane_g2_cp

0xbeca,	// (0x00046aab) listscroll_midp_info_pane_t1_ParamLimits

0xbeca,	// (0x00046aab) listscroll_midp_info_pane_t1

0xbee2,	// (0x00046ac3) listscroll_midp_info_pane_t2_ParamLimits

0xbee2,	// (0x00046ac3) listscroll_midp_info_pane_t2

0xbf20,	// (0x00046b01) listscroll_midp_info_pane_t3_ParamLimits

0xbf20,	// (0x00046b01) listscroll_midp_info_pane_t3

0xbf5a,	// (0x00046b3b) listscroll_midp_info_pane_t4_ParamLimits

0xbf5a,	// (0x00046b3b) listscroll_midp_info_pane_t4

0x0003,

0xf7fe,	// (0x0004a3df) listscroll_midp_info_pane_t_ParamLimits

0xf7fe,	// (0x0004a3df) listscroll_midp_info_pane_t

0x9e54,	// (0x00044a35) scroll_pane_cp21

0xbe6e,	// (0x00046a4f) form_midp_field_choice_group_pane

0xbe77,	// (0x00046a58) form_midp_field_text_pane

0xbeb0,	// (0x00046a91) form_midp_field_time_pane

0xbeb8,	// (0x00046a99) form_midp_gauge_slider_pane

0xbec1,	// (0x00046aa2) form_midp_gauge_wait_pane

0x9576,	// (0x00044157) form_midp_image_pane

0xf2fc,	// (0x00049edd) list_single_midp_pane_ParamLimits

0xf2fc,	// (0x00049edd) list_single_midp_pane

0xbe3c,	// (0x00046a1d) form_midp_field_text_pane_t1

0xbc92,	// (0x00046873) input_focus_pane_cp050

0xbe5d,	// (0x00046a3e) list_midp_form_text_pane

0xbe0b,	// (0x000469ec) form_midp_field_choice_group_pane_t1

0xbe19,	// (0x000469fa) input_focus_pane_cp051

0xbe2d,	// (0x00046a0e) list_midp_choice_pane

0x9576,	// (0x00044157) status_idle_pane

0xbdef,	// (0x000469d0) form_midp_field_time_pane_t1

0x9492,	// (0x00044073) wait_anim_pane_g2_copy1

0xbdfd,	// (0x000469de) form_midp_field_time_pane_t2

0x0001,

0xb8b8,	// (0x00046499) aid_navinavi_width_2_pane

0xf7f9,	// (0x0004a3da) form_midp_field_time_pane_t

0x9576,	// (0x00044157) input_focus_pane_cp052

0x9576,	// (0x00044157) bg_input_focus_pane_cp040

0xbdcb,	// (0x000469ac) form_midp_gauge_slider_pane_t1

0xbdd9,	// (0x000469ba) form_midp_gauge_slider_pane_t2

0x099f,	// (0x0003b580) form_midp_gauge_slider_pane_t3

0x09ad,	// (0x0003b58e) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f0,	// (0x0004a3d1) form_midp_gauge_slider_pane_t

0xbde7,	// (0x000469c8) form_midp_slider_pane

0x96ce,	// (0x000442af) bg_input_focus_pane_cp041_ParamLimits

0x96ce,	// (0x000442af) bg_input_focus_pane_cp041

0xbd9b,	// (0x0004697c) form_midp_gauge_wait_pane_t1_ParamLimits

0xbd9b,	// (0x0004697c) form_midp_gauge_wait_pane_t1

0xbdad,	// (0x0004698e) form_midp_gauge_wait_pane_t2_ParamLimits

0xbdad,	// (0x0004698e) form_midp_gauge_wait_pane_t2

0x0001,

0xf7eb,	// (0x0004a3cc) form_midp_gauge_wait_pane_t_ParamLimits

0xf7eb,	// (0x0004a3cc) form_midp_gauge_wait_pane_t

0xbdbf,	// (0x000469a0) form_midp_wait_pane_ParamLimits

0xbdbf,	// (0x000469a0) form_midp_wait_pane

0xbd65,	// (0x00046946) form_midp_image_pane_g1

0xbd6e,	// (0x0004694f) form_midp_image_pane_t1

0xbd7d,	// (0x0004695e) form_midp_image_pane_t2

0xbd8c,	// (0x0004696d) form_midp_image_pane_t3

0x0002,

0xf7e4,	// (0x0004a3c5) form_midp_image_pane_t

0xbd5c,	// (0x0004693d) list_single_midp_pane_g1

0x7b0c,	// (0x000426ed) list_single_midp_pane_t1

0xbd48,	// (0x00046929) list_midp_form_item_pane_ParamLimits

0xbd48,	// (0x00046929) list_midp_form_item_pane

0xb860,	// (0x00046441) list_midp_form_item_pane_t1

0xb86f,	// (0x00046450) midp_ticker_pane_g1

0xb87b,	// (0x0004645c) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x0004a319) midp_ticker_pane_g

0xb887,	// (0x00046468) midp_ticker_pane_t1

0xcd15,	// (0x000478f6) midp_editing_number_pane_t1

0xcda9,	// (0x0004798a) midp_editing_number_pane

0xcdb5,	// (0x00047996) midp_ticker_pane

0xcd05,	// (0x000478e6) ai_message_heading_pane

0x9576,	// (0x00044157) bg_popup_window_pane_cp14

0xcd0d,	// (0x000478ee) listscroll_ai_message_pane

0xcc4a,	// (0x0004782b) ai_message_heading_pane_g1_ParamLimits

0xcc4a,	// (0x0004782b) ai_message_heading_pane_g1

0xcc56,	// (0x00047837) ai_message_heading_pane_g2_ParamLimits

0xcc56,	// (0x00047837) ai_message_heading_pane_g2

0xcc62,	// (0x00047843) ai_message_heading_pane_g3_ParamLimits

0xcc62,	// (0x00047843) ai_message_heading_pane_g3

0xcc6e,	// (0x0004784f) ai_message_heading_pane_g4_ParamLimits

0xcc6e,	// (0x0004784f) ai_message_heading_pane_g4

0x0003,

0xf925,	// (0x0004a506) ai_message_heading_pane_g_ParamLimits

0xf925,	// (0x0004a506) ai_message_heading_pane_g

0xcc7a,	// (0x0004785b) ai_message_heading_pane_t1_ParamLimits

0xcc7a,	// (0x0004785b) ai_message_heading_pane_t1

0xccd9,	// (0x000478ba) ai_message_heading_pane_t2_ParamLimits

0xccd9,	// (0x000478ba) ai_message_heading_pane_t2

0x0001,

0xf92e,	// (0x0004a50f) ai_message_heading_pane_t_ParamLimits

0xf92e,	// (0x0004a50f) ai_message_heading_pane_t

0xcceb,	// (0x000478cc) bg_popup_heading_pane_cp1_ParamLimits

0xcceb,	// (0x000478cc) bg_popup_heading_pane_cp1

0xcc38,	// (0x00047819) list_ai_message_pane_ParamLimits

0xcc38,	// (0x00047819) list_ai_message_pane

0x9e54,	// (0x00044a35) scroll_pane_cp10

0xcbd4,	// (0x000477b5) list_ai_message_pane_g1

0xcbdc,	// (0x000477bd) list_ai_message_pane_g2

0x0001,

0xf902,	// (0x0004a4e3) list_ai_message_pane_g

0xcbe4,	// (0x000477c5) list_ai_message_pane_t1_ParamLimits

0xcbe4,	// (0x000477c5) list_ai_message_pane_t1

0xcbf9,	// (0x000477da) list_ai_message_pane_t2_ParamLimits

0xcbf9,	// (0x000477da) list_ai_message_pane_t2

0xcc0e,	// (0x000477ef) list_ai_message_pane_t3_ParamLimits

0xcc0e,	// (0x000477ef) list_ai_message_pane_t3

0xcc23,	// (0x00047804) list_ai_message_pane_t4_ParamLimits

0xcc23,	// (0x00047804) list_ai_message_pane_t4

0x0003,

0xf907,	// (0x0004a4e8) list_ai_message_pane_t_ParamLimits

0xf907,	// (0x0004a4e8) list_ai_message_pane_t

0xcbc2,	// (0x000477a3) cell_ai_soft_ind_pane_ParamLimits

0xcbc2,	// (0x000477a3) cell_ai_soft_ind_pane

0xb899,	// (0x0004647a) cell_ai_soft_ind_pane_g1_ParamLimits

0xb899,	// (0x0004647a) cell_ai_soft_ind_pane_g1

0x9576,	// (0x00044157) grid_highlight_cp1

0xb8a6,	// (0x00046487) text_secondary_cp56_ParamLimits

0xb8a6,	// (0x00046487) text_secondary_cp56

0xcb97,	// (0x00047778) example_general_pane_ParamLimits

0xcb97,	// (0x00047778) example_general_pane

0xcba3,	// (0x00047784) example_parent_pane_g1_ParamLimits

0xcba3,	// (0x00047784) example_parent_pane_g1

0xcbaf,	// (0x00047790) example_parent_pane_t1_ParamLimits

0xcbaf,	// (0x00047790) example_parent_pane_t1

0xa619,	// (0x000451fa) popup_preview_text_window_ParamLimits

0xa619,	// (0x000451fa) popup_preview_text_window

0xb78a,	// (0x0004636b) list_single_pane_cp2_g4

0x9925,	// (0x00044506) bg_popup_preview_window_pane_ParamLimits

0x9925,	// (0x00044506) bg_popup_preview_window_pane

0xc94e,	// (0x0004752f) popup_preview_text_window_t1_ParamLimits

0xc94e,	// (0x0004752f) popup_preview_text_window_t1

0xc96c,	// (0x0004754d) popup_preview_text_window_t2_ParamLimits

0xc96c,	// (0x0004754d) popup_preview_text_window_t2

0xc9b5,	// (0x00047596) popup_preview_text_window_t3_ParamLimits

0xc9b5,	// (0x00047596) popup_preview_text_window_t3

0xc9fa,	// (0x000475db) popup_preview_text_window_t4_ParamLimits

0xc9fa,	// (0x000475db) popup_preview_text_window_t4

0x0004,

0xf8d6,	// (0x0004a4b7) popup_preview_text_window_t_ParamLimits

0xf8d6,	// (0x0004a4b7) popup_preview_text_window_t

0xca78,	// (0x00047659) scroll_pane_cp11

0xbc1e,	// (0x000467ff) bg_popup_preview_window_pane_g1

0xc90e,	// (0x000474ef) bg_popup_preview_window_pane_g2

0xc916,	// (0x000474f7) bg_popup_preview_window_pane_g3

0xc91e,	// (0x000474ff) bg_popup_preview_window_pane_g4

0xc926,	// (0x00047507) bg_popup_preview_window_pane_g5

0xc92e,	// (0x0004750f) bg_popup_preview_window_pane_g6

0xc936,	// (0x00047517) bg_popup_preview_window_pane_g7

0xc93e,	// (0x0004751f) bg_popup_preview_window_pane_g8

0x465c,	// (0x0003f23d) aid_popup_width_pane

0xa59b,	// (0x0004517c) popup_midp_note_alarm_window_ParamLimits

0xa59b,	// (0x0004517c) popup_midp_note_alarm_window

0x9ce6,	// (0x000448c7) data_form_pane_ParamLimits

0xf166,	// (0x00049d47) form_field_data_pane_g1

0xf170,	// (0x00049d51) form_field_data_pane_t1_ParamLimits

0x9cf2,	// (0x000448d3) input_focus_pane_ParamLimits

0x9d00,	// (0x000448e1) data_form_wide_pane_ParamLimits

0x783f,	// (0x00042420) form_field_data_wide_pane_g1

0x784b,	// (0x0004242c) form_field_data_wide_pane_t1_ParamLimits

0x9b18,	// (0x000446f9) input_focus_pane_cp6_ParamLimits

0x3af3,	// (0x0003e6d4) input_popup_find_pane_g1_ParamLimits

0x3af3,	// (0x0003e6d4) input_popup_find_pane_g1

0x4a25,	// (0x0003f606) aid_navi_side_left_pane

0x4a35,	// (0x0003f616) aid_navi_side_right_pane

0xc42e,	// (0x0004700f) bg_popup_window_pane_cp30_ParamLimits

0xc42e,	// (0x0004700f) bg_popup_window_pane_cp30

0xc4a8,	// (0x00047089) popup_midp_note_alarm_window_g1_ParamLimits

0xc4a8,	// (0x00047089) popup_midp_note_alarm_window_g1

0xc4d8,	// (0x000470b9) popup_midp_note_alarm_window_t1_ParamLimits

0xc4d8,	// (0x000470b9) popup_midp_note_alarm_window_t1

0xc579,	// (0x0004715a) popup_midp_note_alarm_window_t2_ParamLimits

0xc579,	// (0x0004715a) popup_midp_note_alarm_window_t2

0xc627,	// (0x00047208) popup_midp_note_alarm_window_t3_ParamLimits

0xc627,	// (0x00047208) popup_midp_note_alarm_window_t3

0xc64f,	// (0x00047230) popup_midp_note_alarm_window_t4_ParamLimits

0xc64f,	// (0x00047230) popup_midp_note_alarm_window_t4

0xc66f,	// (0x00047250) popup_midp_note_alarm_window_t5_ParamLimits

0xc66f,	// (0x00047250) popup_midp_note_alarm_window_t5

0x000a,

0xf873,	// (0x0004a454) popup_midp_note_alarm_window_t_ParamLimits

0xf873,	// (0x0004a454) popup_midp_note_alarm_window_t

0xc71b,	// (0x000472fc) wait_bar_pane_cp1_ParamLimits

0xc71b,	// (0x000472fc) wait_bar_pane_cp1

0x9576,	// (0x00044157) wait_anim_pane_copy1

0x9576,	// (0x00044157) wait_border_pane_copy1

0xc174,	// (0x00046d55) wait_border_pane_g1_copy1

0x7865,	// (0x00042446) form_field_popup_pane_g1

0xf188,	// (0x00049d69) form_field_popup_pane_t1_ParamLimits

0x9cf2,	// (0x000448d3) input_focus_pane_cp7_ParamLimits

0x9ce6,	// (0x000448c7) list_form_pane_ParamLimits

0x7885,	// (0x00042466) form_field_popup_wide_pane_g1

0x788d,	// (0x0004246e) form_field_popup_wide_pane_t1_ParamLimits

0x9cf2,	// (0x000448d3) input_focus_pane_cp8_ParamLimits

0x9d2c,	// (0x0004490d) list_form_wide_pane_ParamLimits

0xce30,	// (0x00047a11) aid_size_cell_graphic_pane

0xf205,	// (0x00049de6) data_form_pane_t1_ParamLimits

0xf323,	// (0x00049f04) data_form_wide_pane_t1_ParamLimits

0x0623,	// (0x0003b204) bg_status_flat_pane

0x37f0,	// (0x0003e3d1) title_pane_t1_ParamLimits

0x9678,	// (0x00044259) title_pane_t2_ParamLimits

0x969e,	// (0x0004427f) title_pane_t3_ParamLimits

0xf532,	// (0x0004a113) title_pane_t_ParamLimits

0x9f49,	// (0x00044b2a) level_1_signal_ParamLimits

0x9f5b,	// (0x00044b3c) level_2_signal_ParamLimits

0x9f6e,	// (0x00044b4f) level_3_signal_ParamLimits

0x9f81,	// (0x00044b62) level_4_signal_ParamLimits

0x9f94,	// (0x00044b75) level_5_signal_ParamLimits

0x9fa7,	// (0x00044b88) level_6_signal_ParamLimits

0x9fba,	// (0x00044b9b) level_7_signal_ParamLimits

0x9f49,	// (0x00044b2a) level_1_battery_ParamLimits

0x9f5b,	// (0x00044b3c) level_2_battery_ParamLimits

0x9f6e,	// (0x00044b4f) level_3_battery_ParamLimits

0x9f81,	// (0x00044b62) level_4_battery_ParamLimits

0x9f94,	// (0x00044b75) level_5_battery_ParamLimits

0x9fa7,	// (0x00044b88) level_6_battery_ParamLimits

0x9fba,	// (0x00044b9b) level_7_battery_ParamLimits

0xc35d,	// (0x00046f3e) bg_status_flat_pane_g1

0xc365,	// (0x00046f46) bg_status_flat_pane_g2

0xc36d,	// (0x00046f4e) bg_status_flat_pane_g3

0xc375,	// (0x00046f56) bg_status_flat_pane_g4

0xc37d,	// (0x00046f5e) bg_status_flat_pane_g5

0xc385,	// (0x00046f66) bg_status_flat_pane_g6

0xc38d,	// (0x00046f6e) bg_status_flat_pane_g7

0x387d,	// (0x0003e45e) tabs_3_active_pane_t1_ParamLimits

0x387d,	// (0x0003e45e) tabs_3_passive_pane_t1_ParamLimits

0x3893,	// (0x0003e474) tabs_4_active_pane_t1_ParamLimits

0x3893,	// (0x0003e474) tabs_4_1_passive_pane_t1_ParamLimits

0x3aff,	// (0x0003e6e0) tabs_2_active_pane_t1_ParamLimits

0x3aff,	// (0x0003e6e0) tabs_2_passive_pane_t1_ParamLimits

0x96ce,	// (0x000442af) bg_active_tab_pane_cp4_ParamLimits

0x3b15,	// (0x0003e6f6) tabs_2_long_active_pane_t1_ParamLimits

0xb0cf,	// (0x00045cb0) bg_passive_tab_pane_cp4_ParamLimits

0x5406,	// (0x0003ffe7) list_single_midp_graphic_pane_t1_ParamLimits

0x96ce,	// (0x000442af) bg_active_tab_pane_cp5_ParamLimits

0x3b2c,	// (0x0003e70d) tabs_3_long_active_pane_t1_ParamLimits

0xb0cf,	// (0x00045cb0) bg_passive_tab_pane_cp5_ParamLimits

0x5406,	// (0x0003ffe7) list_single_midp_graphic_pane_t1

0x0623,	// (0x0003b204) bg_status_flat_pane_ParamLimits

0xbafd,	// (0x000466de) indicator_pane_cp2_ParamLimits

0xbafd,	// (0x000466de) indicator_pane_cp2

0x0789,	// (0x0003b36a) navi_pane_srt_ParamLimits

0x0789,	// (0x0003b36a) navi_pane_srt

0xbb25,	// (0x00046706) popup_clock_digital_analogue_window_cp1

0x9768,	// (0x00044349) indicator_pane_t1

0xb845,	// (0x00046426) copy_highlight_pane

0xb845,	// (0x00046426) cursor_graphics_pane

0xb845,	// (0x00046426) graphic_within_text_pane

0xb845,	// (0x00046426) link_highlight_pane

0xca3b,	// (0x0004761c) popup_preview_text_window_t5_ParamLimits

0xca3b,	// (0x0004761c) popup_preview_text_window_t5

0xb8c0,	// (0x000464a1) cursor_digital_pane

0xb8c0,	// (0x000464a1) cursor_primary_pane

0xb8d1,	// (0x000464b2) cursor_primary_small_pane

0xb8d9,	// (0x000464ba) cursor_secondary_pane

0xb8e1,	// (0x000464c2) cursor_title_pane

0xb8c0,	// (0x000464a1) link_highlight_digital_pane

0xb8c8,	// (0x000464a9) link_highlight_primary_pane

0xb8d1,	// (0x000464b2) link_highlight_primary_small_pane

0xb8d9,	// (0x000464ba) link_highlight_secondary_pane

0xb8e1,	// (0x000464c2) link_highlight_title_pane

0xb8c0,	// (0x000464a1) copy_highlight_digital_pane

0xb8c0,	// (0x000464a1) copy_highlight_primary_pane

0xb8d1,	// (0x000464b2) copy_highlight_primary_small_pane

0xb8d9,	// (0x000464ba) copy_highlight_secondary_pane

0xb8e1,	// (0x000464c2) copy_highlight_title_pane

0xb8d9,	// (0x000464ba) graphic_text_digital_pane

0xc3dd,	// (0x00046fbe) graphic_text_primary_pane

0xc3e6,	// (0x00046fc7) graphic_text_primary_small_pane

0xb8d1,	// (0x000464b2) graphic_text_secondary_pane

0xb8c0,	// (0x000464a1) graphic_text_title_pane

0xa161,	// (0x00044d42) cursor_primary_pane_g1

0xc3cf,	// (0x00046fb0) cursor_text_primary_t1

0x09f7,	// (0x0003b5d8) cursor_primary_small_pane_g1

0xc3c1,	// (0x00046fa2) cursor_text_primary_small_t1

0x09ed,	// (0x0003b5ce) cursor_primary_small_pane_g1_copy1

0xc3b3,	// (0x00046f94) cursor_text_primary_small_t1_copy1

0xc3a5,	// (0x00046f86) cursor_text_title_t1

0x09e3,	// (0x0003b5c4) cursor_title_pane_g1

0xa161,	// (0x00044d42) cursor_digital_pane_g1

0xb8e9,	// (0x000464ca) cursor_text_digital_t1

0xb8f7,	// (0x000464d8) link_highlight_primary_pane_g1

0xc34e,	// (0x00046f2f) link_highlight_primary_pane_t1

0xb8f7,	// (0x000464d8) link_highlight_primary_small_pane_g1

0xb8ff,	// (0x000464e0) link_highlight_primary_small_pane_t1

0xb90e,	// (0x000464ef) link_highlight_secondary_pane_g1

0xb916,	// (0x000464f7) link_highlight_secondary_pane_t1

0xc2b3,	// (0x00046e94) link_highlight_title_pane_g1

0xc2ca,	// (0x00046eab) link_highlight_title_pane_t1

0xc2b3,	// (0x00046e94) link_highlight_digital_pane_g1

0xc2bb,	// (0x00046e9c) link_highlight_digital_pane_t1

0xc18f,	// (0x00046d70) copy_highlight_primary_pane_g1

0xc1b5,	// (0x00046d96) copy_highlight_primary_pane_t1

0xc18f,	// (0x00046d70) copy_highlight_primary_small_pane_g1

0xc1a6,	// (0x00046d87) copy_highlight_primary_small_pane_t1

0xb925,	// (0x00046506) copy_highlight_secondary_pane_g1

0xb92d,	// (0x0004650e) copy_highlight_secondary_pane_t1

0xc18f,	// (0x00046d70) copy_highlight_title_pane_g1

0xc197,	// (0x00046d78) copy_highlight_title_pane_t1

0xc18f,	// (0x00046d70) copy_highlight_digital_pane_g1

0xcf2b,	// (0x00047b0c) copy_highlight_digital_pane_t1

0xce7f,	// (0x00047a60) graphic_text_primary_pane_g1

0xcf0f,	// (0x00047af0) graphic_text_primary_pane_t1

0xcf1d,	// (0x00047afe) graphic_text_primary_pane_t2

0x0001,

0xf9a2,	// (0x0004a583) graphic_text_primary_pane_t

0xceeb,	// (0x00047acc) graphic_text_primary_small_pane_g1

0xcef3,	// (0x00047ad4) graphic_text_primary_small_pane_t1

0xcf01,	// (0x00047ae2) graphic_text_primary_small_pane_t2

0x0001,

0xf99d,	// (0x0004a57e) graphic_text_primary_small_pane_t

0xcec7,	// (0x00047aa8) graphic_text_secondary_pane_g1

0xcecf,	// (0x00047ab0) graphic_text_secondary_pane_t1

0xcedd,	// (0x00047abe) graphic_text_secondary_pane_t2

0x0001,

0xf998,	// (0x0004a579) graphic_text_secondary_pane_t

0xcea3,	// (0x00047a84) graphic_text_title_pane_g1

0xceab,	// (0x00047a8c) graphic_text_title_pane_t1

0xceb9,	// (0x00047a9a) graphic_text_title_pane_t2

0x0001,

0xf993,	// (0x0004a574) graphic_text_title_pane_t

0xce7f,	// (0x00047a60) graphic_text_digital_pane_g1

0xce87,	// (0x00047a68) graphic_text_digital_pane_t1

0xce95,	// (0x00047a76) graphic_text_digital_pane_t2

0x0001,

0xf98e,	// (0x0004a56f) graphic_text_digital_pane_t

0x96ce,	// (0x000442af) navi_icon_pane_srt_ParamLimits

0x96ce,	// (0x000442af) navi_icon_pane_srt

0x9576,	// (0x00044157) navi_midp_pane_srt

0x9576,	// (0x00044157) navi_navi_pane_srt

0x96ce,	// (0x000442af) navi_text_pane_srt_ParamLimits

0x96ce,	// (0x000442af) navi_text_pane_srt

0xcc94,	// (0x00047875) navi_navi_icon_text_pane_srt

0xcc9c,	// (0x0004787d) navi_navi_pane_srt_g1_ParamLimits

0xcc9c,	// (0x0004787d) navi_navi_pane_srt_g1

0xccae,	// (0x0004788f) navi_navi_pane_srt_g2_ParamLimits

0xccae,	// (0x0004788f) navi_navi_pane_srt_g2

0x0001,

0xf989,	// (0x0004a56a) navi_navi_pane_srt_g_ParamLimits

0xf989,	// (0x0004a56a) navi_navi_pane_srt_g

0xccc0,	// (0x000478a1) navi_navi_tabs_pane_srt

0xcc94,	// (0x00047875) navi_navi_text_pane_srt

0xcc94,	// (0x00047875) navi_navi_volume_pane_srt

0xce70,	// (0x00047a51) navi_navi_text_pane_srt_t1

0x576a,	// (0x0004034b) navi_navi_volume_pane_srt_g1

0x5772,	// (0x00040353) volume_small_pane_srt_ParamLimits

0x5772,	// (0x00040353) volume_small_pane_srt

0x4ccc,	// (0x0003f8ad) volume_small_pane_srt_g1_ParamLimits

0x4ccc,	// (0x0003f8ad) volume_small_pane_srt_g1

0x4cdc,	// (0x0003f8bd) volume_small_pane_srt_g2_ParamLimits

0x4cdc,	// (0x0003f8bd) volume_small_pane_srt_g2

0x4ced,	// (0x0003f8ce) volume_small_pane_srt_g3_ParamLimits

0x4ced,	// (0x0003f8ce) volume_small_pane_srt_g3

0x4cfe,	// (0x0003f8df) volume_small_pane_srt_g4_ParamLimits

0x4cfe,	// (0x0003f8df) volume_small_pane_srt_g4

0x4d0f,	// (0x0003f8f0) volume_small_pane_srt_g5_ParamLimits

0x4d0f,	// (0x0003f8f0) volume_small_pane_srt_g5

0x4d20,	// (0x0003f901) volume_small_pane_srt_g6_ParamLimits

0x4d20,	// (0x0003f901) volume_small_pane_srt_g6

0x4d31,	// (0x0003f912) volume_small_pane_srt_g7_ParamLimits

0x4d31,	// (0x0003f912) volume_small_pane_srt_g7

0x4d42,	// (0x0003f923) volume_small_pane_srt_g8_ParamLimits

0x4d42,	// (0x0003f923) volume_small_pane_srt_g8

0x4d53,	// (0x0003f934) volume_small_pane_srt_g9_ParamLimits

0x4d53,	// (0x0003f934) volume_small_pane_srt_g9

0x4d64,	// (0x0003f945) volume_small_pane_srt_g10_ParamLimits

0x4d64,	// (0x0003f945) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x0004a31e) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x0004a31e) volume_small_pane_srt_g

0x99ce,	// (0x000445af) query_popup_data_pane_cp2

0xce56,	// (0x00047a37) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xce56,	// (0x00047a37) navi_navi_icon_text_pane_srt_t1

0xc3dd,	// (0x00046fbe) navi_tabs_2_long_pane_srt

0xc3dd,	// (0x00046fbe) navi_tabs_2_pane_srt

0xc3dd,	// (0x00046fbe) navi_tabs_3_long_pane_srt

0xc3dd,	// (0x00046fbe) navi_tabs_3_pane_srt

0xc3dd,	// (0x00046fbe) navi_tabs_4_pane_srt

0x574a,	// (0x0004032b) tabs_2_active_pane_srt_ParamLimits

0x574a,	// (0x0004032b) tabs_2_active_pane_srt

0x575a,	// (0x0004033b) tabs_2_passive_pane_srt_ParamLimits

0x575a,	// (0x0004033b) tabs_2_passive_pane_srt

0xbc92,	// (0x00046873) bg_passive_tab_pane_cp1_srt_ParamLimits

0xbc92,	// (0x00046873) bg_passive_tab_pane_cp1_srt

0xb542,	// (0x00046123) bg_passive_tab_pane_g1_cp1_srt

0xb54b,	// (0x0004612c) bg_passive_tab_pane_g2_cp1_srt

0xb554,	// (0x00046135) bg_passive_tab_pane_g3_cp1_srt

0x96b0,	// (0x00044291) bg_active_tab_pane_cp1_srt_ParamLimits

0x96b0,	// (0x00044291) bg_active_tab_pane_cp1_srt

0xb0c7,	// (0x00045ca8) tabs_2_active_pane_srt_g1

0x3aff,	// (0x0003e6e0) tabs_2_active_pane_srt_t1_ParamLimits

0x3aff,	// (0x0003e6e0) tabs_2_active_pane_srt_t1

0xb542,	// (0x00046123) bg_active_tab_pane_g1_cp1_srt

0xb54b,	// (0x0004612c) bg_active_tab_pane_g2_cp1_srt

0xb554,	// (0x00046135) bg_active_tab_pane_g3_cp1_srt

0x5717,	// (0x000402f8) tabs_3_active_pane_srt_ParamLimits

0x5717,	// (0x000402f8) tabs_3_active_pane_srt

0x5728,	// (0x00040309) tabs_3_passive_pane_cp_srt_ParamLimits

0x5728,	// (0x00040309) tabs_3_passive_pane_cp_srt

0x5739,	// (0x0004031a) tabs_3_passive_pane_srt_ParamLimits

0x5739,	// (0x0004031a) tabs_3_passive_pane_srt

0xbc92,	// (0x00046873) bg_passive_tab_pane_cp2_srt_ParamLimits

0xbc92,	// (0x00046873) bg_passive_tab_pane_cp2_srt

0xb93c,	// (0x0004651d) bg_passive_tab_pane_g1_cp2_srt

0xb54b,	// (0x0004612c) bg_passive_tab_pane_g2_cp2_srt

0xb945,	// (0x00046526) bg_passive_tab_pane_g3_cp2_srt

0x96b0,	// (0x00044291) bg_active_tab_pane_cp2_srt_ParamLimits

0x96b0,	// (0x00044291) bg_active_tab_pane_cp2_srt

0xce46,	// (0x00047a27) tabs_3_active_pane_srt_g1

0x387d,	// (0x0003e45e) tabs_3_active_pane_srt_t1_ParamLimits

0x387d,	// (0x0003e45e) tabs_3_active_pane_srt_t1

0xb93c,	// (0x0004651d) bg_active_tab_pane_g1_cp2_srt

0xb54b,	// (0x0004612c) bg_active_tab_pane_g2_cp2_srt

0xb945,	// (0x00046526) bg_active_tab_pane_g3_cp2_srt

0x56cf,	// (0x000402b0) tabs_4_active_pane_srt_ParamLimits

0x56cf,	// (0x000402b0) tabs_4_active_pane_srt

0x56e1,	// (0x000402c2) tabs_4_passive_pane_cp2_srt_ParamLimits

0x56e1,	// (0x000402c2) tabs_4_passive_pane_cp2_srt

0x4ecd,	// (0x0003faae) aid_size_cell_toolbar

0xa30b,	// (0x00044eec) main_idle_act_pane_ParamLimits

0x503c,	// (0x0003fc1d) popup_large_graphic_colour_window_ParamLimits

0xa869,	// (0x0004544a) popup_toolbar_window_ParamLimits

0xa869,	// (0x0004544a) popup_toolbar_window

0x7b87,	// (0x00042768) list_single_graphic_2heading_pane_ParamLimits

0x7b87,	// (0x00042768) list_single_graphic_2heading_pane

0xb1df,	// (0x00045dc0) aid_size_cell_apps_grid_lsc_pane

0xb1f1,	// (0x00045dd2) aid_size_cell_apps_grid_prt_pane

0xb0cf,	// (0x00045cb0) bg_wml_button_pane_cp1_ParamLimits

0xb0cf,	// (0x00045cb0) bg_wml_button_pane_cp1

0xbe3c,	// (0x00046a1d) form_midp_field_text_pane_t1_ParamLimits

0xbc92,	// (0x00046873) input_focus_pane_cp050_ParamLimits

0xbe5d,	// (0x00046a3e) list_midp_form_text_pane_ParamLimits

0xbe19,	// (0x000469fa) input_focus_pane_cp051_ParamLimits

0xbe2d,	// (0x00046a0e) list_midp_choice_pane_ParamLimits

0xbd16,	// (0x000468f7) list_single_2graphic_pane_cp3_ParamLimits

0xbd16,	// (0x000468f7) list_single_2graphic_pane_cp3

0xbd29,	// (0x0004690a) list_single_midp_graphic_pane_ParamLimits

0xbd29,	// (0x0004690a) list_single_midp_graphic_pane

0x45ea,	// (0x0003f1cb) list_single_graphic_2heading_pane_g1_ParamLimits

0x45ea,	// (0x0003f1cb) list_single_graphic_2heading_pane_g1

0x45f6,	// (0x0003f1d7) list_single_graphic_2heading_pane_g4_ParamLimits

0x45f6,	// (0x0003f1d7) list_single_graphic_2heading_pane_g4

0x4602,	// (0x0003f1e3) list_single_graphic_2heading_pane_g5_ParamLimits

0x4602,	// (0x0003f1e3) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x0004a371) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x0004a371) list_single_graphic_2heading_pane_g

0x460e,	// (0x0003f1ef) list_single_graphic_2heading_pane_t1_ParamLimits

0x460e,	// (0x0003f1ef) list_single_graphic_2heading_pane_t1

0x4622,	// (0x0003f203) list_single_graphic_2heading_pane_t2_ParamLimits

0x4622,	// (0x0003f203) list_single_graphic_2heading_pane_t2

0x463c,	// (0x0003f21d) list_single_graphic_2heading_pane_t3_ParamLimits

0x463c,	// (0x0003f21d) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x0004a378) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x0004a378) list_single_graphic_2heading_pane_t

0xbb68,	// (0x00046749) bg_popup_sub_pane_cp2

0xbb8e,	// (0x0004676f) grid_toobar_pane

0x5382,	// (0x0003ff63) cell_toolbar_pane_ParamLimits

0x5382,	// (0x0003ff63) cell_toolbar_pane

0xbbc4,	// (0x000467a5) cell_toolbar_pane_g1_ParamLimits

0xbbc4,	// (0x000467a5) cell_toolbar_pane_g1

0xbbd6,	// (0x000467b7) cell_toolbar_pane_g2_ParamLimits

0xbbd6,	// (0x000467b7) cell_toolbar_pane_g2

0x0001,

0xf79e,	// (0x0004a37f) cell_toolbar_pane_g_ParamLimits

0xf79e,	// (0x0004a37f) cell_toolbar_pane_g

0xbbf8,	// (0x000467d9) grid_highlight_pane_cp2_ParamLimits

0xbbf8,	// (0x000467d9) grid_highlight_pane_cp2

0xbc12,	// (0x000467f3) toolbar_button_pane

0xbc1e,	// (0x000467ff) toolbar_button_pane_g1

0xbc26,	// (0x00046807) toolbar_button_pane_g2

0xbc2e,	// (0x0004680f) toolbar_button_pane_g3

0xbc36,	// (0x00046817) toolbar_button_pane_g4

0xbc3e,	// (0x0004681f) toolbar_button_pane_g5

0xbc46,	// (0x00046827) toolbar_button_pane_g6

0xbc4e,	// (0x0004682f) toolbar_button_pane_g7

0xbc56,	// (0x00046837) toolbar_button_pane_g8

0xbc5e,	// (0x0004683f) toolbar_button_pane_g9

0x0009,

0xf7a3,	// (0x0004a384) toolbar_button_pane_g

0x53b1,	// (0x0003ff92) list_single_2graphic_pane_g1_cp3_ParamLimits

0x53b1,	// (0x0003ff92) list_single_2graphic_pane_g1_cp3

0xa8ab,	// (0x0004548c) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa8ab,	// (0x0004548c) list_single_2graphic_pane_g2_cp3

0x53cc,	// (0x0003ffad) list_single_2graphic_pane_g3_cp3

0x53d4,	// (0x0003ffb5) list_single_2graphic_pane_g4_cp3_ParamLimits

0x53d4,	// (0x0003ffb5) list_single_2graphic_pane_g4_cp3

0x53e0,	// (0x0003ffc1) list_single_2graphic_pane_t1_cp3_ParamLimits

0x53e0,	// (0x0003ffc1) list_single_2graphic_pane_t1_cp3

0x53fa,	// (0x0003ffdb) list_single_midp_graphic_pane_g2_ParamLimits

0x53fa,	// (0x0003ffdb) list_single_midp_graphic_pane_g2

0x45e2,	// (0x0003f1c3) aid_zoom_text_primary

0x4ed5,	// (0x0003fab6) aid_zoom_text_secondary

0xb9dc,	// (0x000465bd) status_small_pane_g7_ParamLimits

0xb9dc,	// (0x000465bd) status_small_pane_g7

0xb9ff,	// (0x000465e0) status_small_pane_t1_ParamLimits

0x37c5,	// (0x0003e3a6) title_pane_g2

0x0003,

0xf529,	// (0x0004a10a) title_pane_g

0x3a49,	// (0x0003e62a) aid_size_cell_colour_1_pane_ParamLimits

0x3a49,	// (0x0003e62a) aid_size_cell_colour_1_pane

0x3a5d,	// (0x0003e63e) aid_size_cell_colour_2_pane_ParamLimits

0x3a5d,	// (0x0003e63e) aid_size_cell_colour_2_pane

0x3a71,	// (0x0003e652) aid_size_cell_colour_3_pane_ParamLimits

0x3a71,	// (0x0003e652) aid_size_cell_colour_3_pane

0x3a85,	// (0x0003e666) aid_size_cell_colour_4_pane_ParamLimits

0x3a85,	// (0x0003e666) aid_size_cell_colour_4_pane

0x4987,	// (0x0003f568) title_pane_stacon_g1_ParamLimits

0x4987,	// (0x0003f568) title_pane_stacon_g1

0xc20c,	// (0x00046ded) popup_note_wait_window_g3_ParamLimits

0xc20c,	// (0x00046ded) popup_note_wait_window_g3

0xc282,	// (0x00046e63) popup_note_wait_window_t5_ParamLimits

0xc282,	// (0x00046e63) popup_note_wait_window_t5

0x9576,	// (0x00044157) main_feb_china_hwr_fs_writing_pane

0xa36c,	// (0x00044f4d) popup_feb_china_hwr_fs_window_ParamLimits

0xa36c,	// (0x00044f4d) popup_feb_china_hwr_fs_window

0xa8bc,	// (0x0004549d) aid_size_cell_hwr_fs_ParamLimits

0xa8bc,	// (0x0004549d) aid_size_cell_hwr_fs

0xbc92,	// (0x00046873) bg_popup_sub_pane_cp3_ParamLimits

0xbc92,	// (0x00046873) bg_popup_sub_pane_cp3

0xa8d1,	// (0x000454b2) grid_hwr_fs_pane_ParamLimits

0xa8d1,	// (0x000454b2) grid_hwr_fs_pane

0x5445,	// (0x00040026) linegrid_hwr_fs_pane_ParamLimits

0x5445,	// (0x00040026) linegrid_hwr_fs_pane

0xa8e9,	// (0x000454ca) cell_hwr_fs_pane_ParamLimits

0xa8e9,	// (0x000454ca) cell_hwr_fs_pane

0xbc9e,	// (0x0004687f) linegrid_hwr_fs_pane_g1_ParamLimits

0xbc9e,	// (0x0004687f) linegrid_hwr_fs_pane_g1

0x0965,	// (0x0003b546) linegrid_hwr_fs_pane_g2_ParamLimits

0x0965,	// (0x0003b546) linegrid_hwr_fs_pane_g2

0xbcaa,	// (0x0004688b) linegrid_hwr_fs_pane_g3_ParamLimits

0xbcaa,	// (0x0004688b) linegrid_hwr_fs_pane_g3

0x5473,	// (0x00040054) linegrid_hwr_fs_pane_g4_ParamLimits

0x5473,	// (0x00040054) linegrid_hwr_fs_pane_g4

0x548d,	// (0x0004006e) linegrid_hwr_fs_pane_g5_ParamLimits

0x548d,	// (0x0004006e) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c9,	// (0x0004a3aa) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c9,	// (0x0004a3aa) linegrid_hwr_fs_pane_g

0xbcb6,	// (0x00046897) cell_hwr_fs_pane_g1_ParamLimits

0xbcb6,	// (0x00046897) cell_hwr_fs_pane_g1

0xbb36,	// (0x00046717) cell_hwr_fs_pane_g2_ParamLimits

0xbb36,	// (0x00046717) cell_hwr_fs_pane_g2

0x0977,	// (0x0003b558) cell_hwr_fs_pane_g3_ParamLimits

0x0977,	// (0x0003b558) cell_hwr_fs_pane_g3

0x0984,	// (0x0003b565) cell_hwr_fs_pane_g4_ParamLimits

0x0984,	// (0x0003b565) cell_hwr_fs_pane_g4

0x0003,

0xf7d4,	// (0x0004a3b5) cell_hwr_fs_pane_g_ParamLimits

0xf7d4,	// (0x0004a3b5) cell_hwr_fs_pane_g

0xa909,	// (0x000454ea) cell_hwr_fs_pane_t1

0x9576,	// (0x00044157) grid_highlight_pane_cp6

0x9576,	// (0x00044157) main_idle_act2_pane

0x9e3b,	// (0x00044a1c) aid_inside_area_popup_secondary

0x0b04,	// (0x0003b6e5) aid_inside_area_window_primary_ParamLimits

0x0b04,	// (0x0003b6e5) aid_inside_area_window_primary

0xcf3a,	// (0x00047b1b) ai2_news_ticker_pane

0xcf42,	// (0x00047b23) aid_size_cell_ai1_link_ParamLimits

0xcf42,	// (0x00047b23) aid_size_cell_ai1_link

0x0eef,	// (0x0003bad0) popup_ai2_data_window_ParamLimits

0x0eef,	// (0x0003bad0) popup_ai2_data_window

0xcf5c,	// (0x00047b3d) popup_ai2_link_window_ParamLimits

0xcf5c,	// (0x00047b3d) popup_ai2_link_window

0xbc92,	// (0x00046873) bg_popup_sub_pane_cp4_ParamLimits

0xbc92,	// (0x00046873) bg_popup_sub_pane_cp4

0xcf70,	// (0x00047b51) grid_ai2_link_pane_ParamLimits

0xcf70,	// (0x00047b51) grid_ai2_link_pane

0xcf87,	// (0x00047b68) popup_ai2_link_window_g1_ParamLimits

0xcf87,	// (0x00047b68) popup_ai2_link_window_g1

0xcf93,	// (0x00047b74) popup_ai2_link_window_g2_ParamLimits

0xcf93,	// (0x00047b74) popup_ai2_link_window_g2

0x0001,

0xf9a7,	// (0x0004a588) popup_ai2_link_window_g_ParamLimits

0xf9a7,	// (0x0004a588) popup_ai2_link_window_g

0xcfa2,	// (0x00047b83) ai2_mp_button_pane

0xcfaa,	// (0x00047b8b) ai2_mp_volume_pane

0xbe19,	// (0x000469fa) bg_popup_sub_pane_cp5_ParamLimits

0xbe19,	// (0x000469fa) bg_popup_sub_pane_cp5

0xcfb2,	// (0x00047b93) heading_ai2_gene_pane_ParamLimits

0xcfb2,	// (0x00047b93) heading_ai2_gene_pane

0xcfbe,	// (0x00047b9f) list_ai2_gene_pane_ParamLimits

0xcfbe,	// (0x00047b9f) list_ai2_gene_pane

0xd006,	// (0x00047be7) cell_ai2_link_pane_ParamLimits

0xd006,	// (0x00047be7) cell_ai2_link_pane

0xd01c,	// (0x00047bfd) cell_ai2_link_pane_g1

0x9576,	// (0x00044157) grid_highlight_pane_cp7

0x5787,	// (0x00040368) ai2_mp_volume_pane_g1

0xd0b9,	// (0x00047c9a) ai2_mp_volume_pane_g2

0x0f19,	// (0x0003bafa) list_ai2_gene_pane_t1

0xd0c1,	// (0x00047ca2) ai2_mp_volume_pane_g3

0x0002,

0xf9c0,	// (0x0004a5a1) ai2_mp_volume_pane_g

0x578f,	// (0x00040370) volume_small_pane_cp3

0xd0c9,	// (0x00047caa) aid_size_cell_ai2_button

0xd0d1,	// (0x00047cb2) grid_ai2_button_pane

0xd0da,	// (0x00047cbb) cell_ai2_button_pane_ParamLimits

0xd0da,	// (0x00047cbb) cell_ai2_button_pane

0x9492,	// (0x00044073) cell_ai2_button_pane_g1

0x9576,	// (0x00044157) grid_highlight_pane_cp8

0xd079,	// (0x00047c5a) ai2_gene_pane_t1_ParamLimits

0xd079,	// (0x00047c5a) ai2_gene_pane_t1

0xa2f3,	// (0x00044ed4) aid_height_parent_landscape

0xcd61,	// (0x00047942) aid_height_set_list

0xcd6d,	// (0x0004794e) aid_size_parent

0xce30,	// (0x00047a11) aid_size_cell_graphic_pane_ParamLimits

0xcfce,	// (0x00047baf) popup_ai2_data_window_g1_ParamLimits

0xcfce,	// (0x00047baf) popup_ai2_data_window_g1

0xcfda,	// (0x00047bbb) ai2_news_ticker_pane_g1

0xcfe2,	// (0x00047bc3) ai2_news_ticker_pane_g2

0x0001,

0xf9ac,	// (0x0004a58d) ai2_news_ticker_pane_g

0xcfea,	// (0x00047bcb) ai2_news_ticker_pane_t1

0xcff8,	// (0x00047bd9) ai2_news_ticker_pane_t2

0x0001,

0xf9b1,	// (0x0004a592) ai2_news_ticker_pane_t

0xd025,	// (0x00047c06) heading_ai2_gene_pane_g1

0xd02d,	// (0x00047c0e) heading_ai2_gene_pane_t1_ParamLimits

0xd02d,	// (0x00047c0e) heading_ai2_gene_pane_t1

0xd042,	// (0x00047c23) list_highlight_pane_cp6

0x0f03,	// (0x0003bae4) ai2_gene_pane_ParamLimits

0x0f03,	// (0x0003bae4) ai2_gene_pane

0x0f27,	// (0x0003bb08) list_ai2_gene_pane_t2

0x0001,

0xf9b6,	// (0x0004a597) list_ai2_gene_pane_t

0xd04a,	// (0x00047c2b) list_highlight_pane_cp8_ParamLimits

0xd04a,	// (0x00047c2b) list_highlight_pane_cp8

0xd05b,	// (0x00047c3c) ai2_gene_pane_g1_ParamLimits

0xd05b,	// (0x00047c3c) ai2_gene_pane_g1

0xd06d,	// (0x00047c4e) ai2_gene_pane_g2_ParamLimits

0xd06d,	// (0x00047c4e) ai2_gene_pane_g2

0x0001,

0xf9bb,	// (0x0004a59c) ai2_gene_pane_g_ParamLimits

0xf9bb,	// (0x0004a59c) ai2_gene_pane_g

0x9c99,	// (0x0004487a) scroll_pane_cp12

0xa2b2,	// (0x00044e93) control_pane_t3_ParamLimits

0xa2b2,	// (0x00044e93) control_pane_t3

0xb9f0,	// (0x000465d1) status_small_pane_g8_ParamLimits

0xb9f0,	// (0x000465d1) status_small_pane_g8

0xa3e0,	// (0x00044fc1) popup_find_window_ParamLimits

0xa5d3,	// (0x000451b4) popup_note_image_window_ParamLimits

0x7491,	// (0x00042072) list_double2_graphic_pane_vc_g1_ParamLimits

0x7491,	// (0x00042072) list_double2_graphic_pane_vc_g1

0x749d,	// (0x0004207e) list_double2_graphic_pane_vc_g2_ParamLimits

0x749d,	// (0x0004207e) list_double2_graphic_pane_vc_g2

0x74a9,	// (0x0004208a) list_double2_graphic_pane_vc_g3_ParamLimits

0x74a9,	// (0x0004208a) list_double2_graphic_pane_vc_g3

0x0002,

0xf59c,	// (0x0004a17d) list_double2_graphic_pane_vc_g_ParamLimits

0xf59c,	// (0x0004a17d) list_double2_graphic_pane_vc_g

0x74b5,	// (0x00042096) list_double2_graphic_pane_vc_t1_ParamLimits

0x74b5,	// (0x00042096) list_double2_graphic_pane_vc_t1

0x749d,	// (0x0004207e) list_single_heading_pane_vc_g1_ParamLimits

0x749d,	// (0x0004207e) list_single_heading_pane_vc_g1

0x74a9,	// (0x0004208a) list_single_heading_pane_vc_g2_ParamLimits

0x74a9,	// (0x0004208a) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004a18e) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004a18e) list_single_heading_pane_vc_g

0x7a68,	// (0x00042649) list_single_heading_pane_vc_t1_ParamLimits

0x7a68,	// (0x00042649) list_single_heading_pane_vc_t1

0x7a7e,	// (0x0004265f) list_single_heading_pane_vc_t2_ParamLimits

0x7a7e,	// (0x0004265f) list_single_heading_pane_vc_t2

0x0001,

0xf7b8,	// (0x0004a399) list_single_heading_pane_vc_t_ParamLimits

0xf7b8,	// (0x0004a399) list_single_heading_pane_vc_t

0x7a90,	// (0x00042671) list_setting_number_pane_vc_g1_ParamLimits

0x7a90,	// (0x00042671) list_setting_number_pane_vc_g1

0x7a9c,	// (0x0004267d) list_setting_number_pane_vc_g2_ParamLimits

0x7a9c,	// (0x0004267d) list_setting_number_pane_vc_g2

0x0001,

0xf7bd,	// (0x0004a39e) list_setting_number_pane_vc_g_ParamLimits

0xf7bd,	// (0x0004a39e) list_setting_number_pane_vc_g

0x7aa8,	// (0x00042689) list_setting_number_pane_vc_t1_ParamLimits

0x7aa8,	// (0x00042689) list_setting_number_pane_vc_t1

0x7abc,	// (0x0004269d) list_setting_number_pane_vc_t2_ParamLimits

0x7abc,	// (0x0004269d) list_setting_number_pane_vc_t2

0x7ad8,	// (0x000426b9) list_setting_number_pane_vc_t3_ParamLimits

0x7ad8,	// (0x000426b9) list_setting_number_pane_vc_t3

0x0002,

0xf7c2,	// (0x0004a3a3) list_setting_number_pane_vc_t_ParamLimits

0xf7c2,	// (0x0004a3a3) list_setting_number_pane_vc_t

0x7b00,	// (0x000426e1) set_value_pane_vc_ParamLimits

0x7b00,	// (0x000426e1) set_value_pane_vc

0x7b87,	// (0x00042768) list_double2_graphic_pane_vc_ParamLimits

0x7b87,	// (0x00042768) list_double2_graphic_pane_vc

0x7b9a,	// (0x0004277b) list_double2_large_graphic_pane_vc_ParamLimits

0x7b9a,	// (0x0004277b) list_double2_large_graphic_pane_vc

0x7b87,	// (0x00042768) list_double2_pane_vc_ParamLimits

0x7b87,	// (0x00042768) list_double2_pane_vc

0x7b87,	// (0x00042768) list_double_graphic_heading_pane_vc_ParamLimits

0x7b87,	// (0x00042768) list_double_graphic_heading_pane_vc

0x7b87,	// (0x00042768) list_double_graphic_pane_vc_ParamLimits

0x7b87,	// (0x00042768) list_double_graphic_pane_vc

0x7b87,	// (0x00042768) list_double_heading_pane_vc_ParamLimits

0x7b87,	// (0x00042768) list_double_heading_pane_vc

0x7bab,	// (0x0004278c) list_double_large_graphic_pane_vc_ParamLimits

0x7bab,	// (0x0004278c) list_double_large_graphic_pane_vc

0x7b87,	// (0x00042768) list_double_number_pane_vc_ParamLimits

0x7b87,	// (0x00042768) list_double_number_pane_vc

0x7b87,	// (0x00042768) list_double_pane_vc_ParamLimits

0x7b87,	// (0x00042768) list_double_pane_vc

0x7b87,	// (0x00042768) list_double_time_pane_vc_ParamLimits

0x7b87,	// (0x00042768) list_double_time_pane_vc

0x7b87,	// (0x00042768) list_setting_number_pane_vc_ParamLimits

0x7b87,	// (0x00042768) list_setting_number_pane_vc

0x7b87,	// (0x00042768) list_setting_pane_vc_ParamLimits

0x7b87,	// (0x00042768) list_setting_pane_vc

0x7b87,	// (0x00042768) list_single_graphic_heading_pane_vc_ParamLimits

0x7b87,	// (0x00042768) list_single_graphic_heading_pane_vc

0x7b87,	// (0x00042768) list_single_heading_pane_vc_ParamLimits

0x7b87,	// (0x00042768) list_single_heading_pane_vc

0x7b87,	// (0x00042768) list_single_number_heading_pane_vc_ParamLimits

0x7b87,	// (0x00042768) list_single_number_heading_pane_vc

0x7491,	// (0x00042072) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x7491,	// (0x00042072) list_double_graphic_heading_pane_vc_g1

0x749d,	// (0x0004207e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x749d,	// (0x0004207e) list_double_graphic_heading_pane_vc_g2

0x74a9,	// (0x0004208a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x74a9,	// (0x0004208a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf59c,	// (0x0004a17d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf59c,	// (0x0004a17d) list_double_graphic_heading_pane_vc_g

0x7c32,	// (0x00042813) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x7c32,	// (0x00042813) list_double_graphic_heading_pane_vc_t1

0x7c48,	// (0x00042829) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x7c48,	// (0x00042829) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c7,	// (0x0004a5a8) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c7,	// (0x0004a5a8) list_double_graphic_heading_pane_vc_t

0x7a90,	// (0x00042671) list_setting_pane_vc_g1_ParamLimits

0x7a90,	// (0x00042671) list_setting_pane_vc_g1

0x7a9c,	// (0x0004267d) list_setting_pane_vc_g2_ParamLimits

0x7a9c,	// (0x0004267d) list_setting_pane_vc_g2

0x0001,

0xf7bd,	// (0x0004a39e) list_setting_pane_vc_g_ParamLimits

0xf7bd,	// (0x0004a39e) list_setting_pane_vc_g

0x7c60,	// (0x00042841) list_setting_pane_vc_t1_ParamLimits

0x7c60,	// (0x00042841) list_setting_pane_vc_t1

0x7c74,	// (0x00042855) list_setting_pane_vc_t2_ParamLimits

0x7c74,	// (0x00042855) list_setting_pane_vc_t2

0x0001,

0xfa0a,	// (0x0004a5eb) list_setting_pane_vc_t_ParamLimits

0xfa0a,	// (0x0004a5eb) list_setting_pane_vc_t

0x7b00,	// (0x000426e1) set_value_pane_cp_vc_ParamLimits

0x7b00,	// (0x000426e1) set_value_pane_cp_vc

0x749d,	// (0x0004207e) list_single_number_heading_pane_vc_g1_ParamLimits

0x749d,	// (0x0004207e) list_single_number_heading_pane_vc_g1

0x74a9,	// (0x0004208a) list_single_number_heading_pane_vc_g2_ParamLimits

0x74a9,	// (0x0004208a) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004a18e) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004a18e) list_single_number_heading_pane_vc_g

0x7a68,	// (0x00042649) list_single_number_heading_pane_vc_t1_ParamLimits

0x7a68,	// (0x00042649) list_single_number_heading_pane_vc_t1

0x7c88,	// (0x00042869) list_single_number_heading_pane_vc_t2_ParamLimits

0x7c88,	// (0x00042869) list_single_number_heading_pane_vc_t2

0x7c9a,	// (0x0004287b) list_single_number_heading_pane_vc_t3_ParamLimits

0x7c9a,	// (0x0004287b) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0f,	// (0x0004a5f0) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0f,	// (0x0004a5f0) list_single_number_heading_pane_vc_t

0x7491,	// (0x00042072) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x7491,	// (0x00042072) list_single_graphic_heading_pane_vc_g1

0x749d,	// (0x0004207e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x749d,	// (0x0004207e) list_single_graphic_heading_pane_vc_g4

0x74a9,	// (0x0004208a) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x74a9,	// (0x0004208a) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf59c,	// (0x0004a17d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf59c,	// (0x0004a17d) list_single_graphic_heading_pane_vc_g

0x7a68,	// (0x00042649) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x7a68,	// (0x00042649) list_single_graphic_heading_pane_vc_t1

0x7cac,	// (0x0004288d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x7cac,	// (0x0004288d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa16,	// (0x0004a5f7) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa16,	// (0x0004a5f7) list_single_graphic_heading_pane_vc_t

0x749d,	// (0x0004207e) list_double2_pane_vc_g1_ParamLimits

0x749d,	// (0x0004207e) list_double2_pane_vc_g1

0x74a9,	// (0x0004208a) list_double2_pane_vc_g2_ParamLimits

0x74a9,	// (0x0004208a) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004a18e) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004a18e) list_double2_pane_vc_g

0x7cbe,	// (0x0004289f) list_double2_pane_vc_t1_ParamLimits

0x7cbe,	// (0x0004289f) list_double2_pane_vc_t1

0x7337,	// (0x00041f18) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7337,	// (0x00041f18) list_double2_large_graphic_pane_vc_g1

0x7343,	// (0x00041f24) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x7343,	// (0x00041f24) list_double2_large_graphic_pane_vc_g2

0x734f,	// (0x00041f30) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x734f,	// (0x00041f30) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x0004a1a6) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x0004a1a6) list_double2_large_graphic_pane_vc_g

0x7363,	// (0x00041f44) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x7363,	// (0x00041f44) list_double2_large_graphic_pane_vc_t1

0x7cd4,	// (0x000428b5) list_double_time_pane_vc_g1_ParamLimits

0x7cd4,	// (0x000428b5) list_double_time_pane_vc_g1

0x7ce0,	// (0x000428c1) list_double_time_pane_vc_g2_ParamLimits

0x7ce0,	// (0x000428c1) list_double_time_pane_vc_g2

0x0001,

0xfa1b,	// (0x0004a5fc) list_double_time_pane_vc_g_ParamLimits

0xfa1b,	// (0x0004a5fc) list_double_time_pane_vc_g

0x7cec,	// (0x000428cd) list_double_time_pane_vc_t1_ParamLimits

0x7cec,	// (0x000428cd) list_double_time_pane_vc_t1

0x7d0a,	// (0x000428eb) list_double_time_pane_vc_t2_ParamLimits

0x7d0a,	// (0x000428eb) list_double_time_pane_vc_t2

0x7d53,	// (0x00042934) list_double_time_pane_vc_t3_ParamLimits

0x7d53,	// (0x00042934) list_double_time_pane_vc_t3

0x7d65,	// (0x00042946) list_double_time_pane_vc_t4_ParamLimits

0x7d65,	// (0x00042946) list_double_time_pane_vc_t4

0x0003,

0xfa20,	// (0x0004a601) list_double_time_pane_vc_t_ParamLimits

0xfa20,	// (0x0004a601) list_double_time_pane_vc_t

0x749d,	// (0x0004207e) list_double_pane_vc_g1_ParamLimits

0x749d,	// (0x0004207e) list_double_pane_vc_g1

0x74a9,	// (0x0004208a) list_double_pane_vc_g2_ParamLimits

0x74a9,	// (0x0004208a) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004a18e) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004a18e) list_double_pane_vc_g

0x7d77,	// (0x00042958) list_double_pane_vc_t1_ParamLimits

0x7d77,	// (0x00042958) list_double_pane_vc_t1

0x7d89,	// (0x0004296a) list_double_pane_vc_t2_ParamLimits

0x7d89,	// (0x0004296a) list_double_pane_vc_t2

0x0001,

0xfa29,	// (0x0004a60a) list_double_pane_vc_t_ParamLimits

0xfa29,	// (0x0004a60a) list_double_pane_vc_t

0x749d,	// (0x0004207e) list_double_number_pane_vc_g1_ParamLimits

0x749d,	// (0x0004207e) list_double_number_pane_vc_g1

0x74a9,	// (0x0004208a) list_double_number_pane_vc_g2_ParamLimits

0x74a9,	// (0x0004208a) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004a18e) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004a18e) list_double_number_pane_vc_g

0x7d9f,	// (0x00042980) list_double_number_pane_vc_t1_ParamLimits

0x7d9f,	// (0x00042980) list_double_number_pane_vc_t1

0x7db3,	// (0x00042994) list_double_number_pane_vc_t2_ParamLimits

0x7db3,	// (0x00042994) list_double_number_pane_vc_t2

0x7dc5,	// (0x000429a6) list_double_number_pane_vc_t3_ParamLimits

0x7dc5,	// (0x000429a6) list_double_number_pane_vc_t3

0x0002,

0xfa2e,	// (0x0004a60f) list_double_number_pane_vc_t_ParamLimits

0xfa2e,	// (0x0004a60f) list_double_number_pane_vc_t

0x818a,	// (0x00042d6b) list_double_large_graphic_pane_vc_g1_ParamLimits

0x818a,	// (0x00042d6b) list_double_large_graphic_pane_vc_g1

0x81b2,	// (0x00042d93) list_double_large_graphic_pane_vc_g2_ParamLimits

0x81b2,	// (0x00042d93) list_double_large_graphic_pane_vc_g2

0x81c6,	// (0x00042da7) list_double_large_graphic_pane_vc_g3_ParamLimits

0x81c6,	// (0x00042da7) list_double_large_graphic_pane_vc_g3

0x7ddb,	// (0x000429bc) list_double_large_graphic_pane_vc_g4_ParamLimits

0x7ddb,	// (0x000429bc) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa35,	// (0x0004a616) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa35,	// (0x0004a616) list_double_large_graphic_pane_vc_g

0x7deb,	// (0x000429cc) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7deb,	// (0x000429cc) list_double_large_graphic_pane_vc_t1

0x7e05,	// (0x000429e6) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7e05,	// (0x000429e6) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3e,	// (0x0004a61f) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3e,	// (0x0004a61f) list_double_large_graphic_pane_vc_t

0x749d,	// (0x0004207e) list_double_heading_pane_vc_g1_ParamLimits

0x749d,	// (0x0004207e) list_double_heading_pane_vc_g1

0x74a9,	// (0x0004208a) list_double_heading_pane_vc_g2_ParamLimits

0x74a9,	// (0x0004208a) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004a18e) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004a18e) list_double_heading_pane_vc_g

0x7e25,	// (0x00042a06) list_double_heading_pane_vc_t1_ParamLimits

0x7e25,	// (0x00042a06) list_double_heading_pane_vc_t1

0x7a68,	// (0x00042649) list_double_heading_pane_vc_t2_ParamLimits

0x7a68,	// (0x00042649) list_double_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x0004a624) list_double_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0004a624) list_double_heading_pane_vc_t

0x7e37,	// (0x00042a18) list_double_graphic_pane_vc_g1_ParamLimits

0x7e37,	// (0x00042a18) list_double_graphic_pane_vc_g1

0x7e43,	// (0x00042a24) list_double_graphic_pane_vc_g2_ParamLimits

0x7e43,	// (0x00042a24) list_double_graphic_pane_vc_g2

0x749d,	// (0x0004207e) list_double_graphic_pane_vc_g3_ParamLimits

0x749d,	// (0x0004207e) list_double_graphic_pane_vc_g3

0x0003,

0xfa48,	// (0x0004a629) list_double_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x0004a629) list_double_graphic_pane_vc_g

0x7e60,	// (0x00042a41) list_double_graphic_pane_vc_t1_ParamLimits

0x7e60,	// (0x00042a41) list_double_graphic_pane_vc_t1

0x7e7e,	// (0x00042a5f) list_double_graphic_pane_vc_t2_ParamLimits

0x7e7e,	// (0x00042a5f) list_double_graphic_pane_vc_t2

0x0001,

0xfa51,	// (0x0004a632) list_double_graphic_pane_vc_t_ParamLimits

0xfa51,	// (0x0004a632) list_double_graphic_pane_vc_t

0x4664,	// (0x0003f245) aid_size_cell_fastswap

0x949c,	// (0x0004407d) aid_size_cell_touch_ParamLimits

0x949c,	// (0x0004407d) aid_size_cell_touch

0x47bb,	// (0x0003f39c) popup_fast_swap_wide_window_ParamLimits

0x47bb,	// (0x0003f39c) popup_fast_swap_wide_window

0x9616,	// (0x000441f7) touch_pane_ParamLimits

0x9616,	// (0x000441f7) touch_pane

0x777b,	// (0x0004235c) button_value_adjust_pane_cp2

0x7783,	// (0x00042364) button_value_adjust_pane_cp4

0x77a3,	// (0x00042384) form_field_data_pane_cp2

0xf12d,	// (0x00049d0e) form_field_data_wide_pane_cp2

0xb216,	// (0x00045df7) bg_scroll_pane_ParamLimits

0x4aa8,	// (0x0003f689) scroll_handle_pane_ParamLimits

0x4abc,	// (0x0003f69d) scroll_sc2_down_pane_ParamLimits

0x4abc,	// (0x0003f69d) scroll_sc2_down_pane

0xb247,	// (0x00045e28) scroll_sc2_up_pane_ParamLimits

0xb247,	// (0x00045e28) scroll_sc2_up_pane

0x1049,	// (0x0003bc2a) grid_wheel_folder_pane_g1_ParamLimits

0x1049,	// (0x0003bc2a) grid_wheel_folder_pane_g1

0x4c70,	// (0x0003f851) clock_nsta_pane_cp2_ParamLimits

0x4c70,	// (0x0003f851) clock_nsta_pane_cp2

0xa0c5,	// (0x00044ca6) listscroll_midp_pane_ParamLimits

0xa0d4,	// (0x00044cb5) midp_canvas_pane

0x4ebb,	// (0x0003fa9c) nsta_clock_indic_pane

0xba47,	// (0x00046628) listscroll_form_pane_vc

0xba4f,	// (0x00046630) listscroll_set_pane_vc_ParamLimits

0xba4f,	// (0x00046630) listscroll_set_pane_vc

0x064b,	// (0x0003b22c) clock_nsta_pane

0x066e,	// (0x0003b24f) indicator_nsta_pane

0xbb68,	// (0x00046749) bg_popup_sub_pane_cp2_ParamLimits

0xbb7c,	// (0x0004675d) find_pane_cp2_ParamLimits

0xbb7c,	// (0x0004675d) find_pane_cp2

0xbb8e,	// (0x0004676f) grid_toobar_pane_ParamLimits

0xbc66,	// (0x00046847) list_form_gen_pane_vc_ParamLimits

0xbc66,	// (0x00046847) list_form_gen_pane_vc

0xbc7c,	// (0x0004685d) scroll_pane_cp8_vc_ParamLimits

0xbc7c,	// (0x0004685d) scroll_pane_cp8_vc

0xbccc,	// (0x000468ad) data_form_wide_pane_vc_ParamLimits

0xbccc,	// (0x000468ad) data_form_wide_pane_vc

0xbcd8,	// (0x000468b9) form_field_data_wide_pane_vc_g1

0xbce0,	// (0x000468c1) form_field_data_wide_pane_vc_t1_ParamLimits

0xbce0,	// (0x000468c1) form_field_data_wide_pane_vc_t1

0x9cf2,	// (0x000448d3) input_focus_pane_cp6_vc_ParamLimits

0x9cf2,	// (0x000448d3) input_focus_pane_cp6_vc

0x09bb,	// (0x0003b59c) list_midp_pane_ParamLimits

0xbf90,	// (0x00046b71) scroll_pane_cp16_ParamLimits

0xbf90,	// (0x00046b71) scroll_pane_cp16

0xbff2,	// (0x00046bd3) button_value_adjust_pane_ParamLimits

0xbff2,	// (0x00046bd3) button_value_adjust_pane

0x0cb9,	// (0x0003b89a) button_value_adjust_pane_cp6_ParamLimits

0x0cb9,	// (0x0003b89a) button_value_adjust_pane_cp6

0x0dc3,	// (0x0003b9a4) settings_code_pane_cp_ParamLimits

0x0dc3,	// (0x0003b9a4) settings_code_pane_cp

0x9492,	// (0x00044073) cell_touch_pane_g1

0x9492,	// (0x00044073) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x0004a2c4) cell_touch_pane_g

0x0f35,	// (0x0003bb16) cell_touch_pane_cp_ParamLimits

0x0f35,	// (0x0003bb16) cell_touch_pane_cp

0x0f51,	// (0x0003bb32) cell_touch_pane_ParamLimits

0x0f51,	// (0x0003bb32) cell_touch_pane

0x9492,	// (0x00044073) scroll_sc2_down_pane_g1

0x9492,	// (0x00044073) scroll_sc2_up_pane_g1

0x9576,	// (0x00044157) bg_set_opt_pane_cp4_vc

0xd0ec,	// (0x00047ccd) list_set_graphic_pane_vc_g1_ParamLimits

0xd0ec,	// (0x00047ccd) list_set_graphic_pane_vc_g1

0xd0f8,	// (0x00047cd9) list_set_graphic_pane_vc_g2_ParamLimits

0xd0f8,	// (0x00047cd9) list_set_graphic_pane_vc_g2

0x0001,

0xf9cc,	// (0x0004a5ad) list_set_graphic_pane_vc_g_ParamLimits

0xf9cc,	// (0x0004a5ad) list_set_graphic_pane_vc_g

0xd104,	// (0x00047ce5) text_primary_small_cp13_vc_ParamLimits

0xd104,	// (0x00047ce5) text_primary_small_cp13_vc

0xd11c,	// (0x00047cfd) list_set_graphic_pane_vc_ParamLimits

0xd11c,	// (0x00047cfd) list_set_graphic_pane_vc

0x9576,	// (0x00044157) input_focus_pane_cp2_vc

0x9492,	// (0x00044073) setting_code_pane_vc_g1

0xd12f,	// (0x00047d10) setting_code_pane_vc_t1

0xd13d,	// (0x00047d1e) set_text_pane_vc_t1_ParamLimits

0xd13d,	// (0x00047d1e) set_text_pane_vc_t1

0x9576,	// (0x00044157) input_focus_pane_cp1_vc

0xd158,	// (0x00047d39) list_set_text_pane_vc

0x9492,	// (0x00044073) setting_text_pane_vc_g1

0x9576,	// (0x00044157) bg_set_opt_pane_cp2_vc

0xd162,	// (0x00047d43) setting_slider_graphic_pane_vc_g1

0xd16a,	// (0x00047d4b) setting_slider_graphic_pane_vc_t1

0xd178,	// (0x00047d59) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d1,	// (0x0004a5b2) setting_slider_graphic_pane_vc_t

0xd186,	// (0x00047d67) slider_set_pane_cp_vc

0xd18e,	// (0x00047d6f) slider_set_pane_vc_g1

0xd197,	// (0x00047d78) slider_set_pane_vc_g2

0x0006,

0xf9d6,	// (0x0004a5b7) slider_set_pane_vc_g

0x9d4d,	// (0x0004492e) set_opt_bg_pane_g1_copy1

0x9d55,	// (0x00044936) set_opt_bg_pane_g2_copy1

0xd1c3,	// (0x00047da4) set_opt_bg_pane_g3_copy1

0x9d65,	// (0x00044946) set_opt_bg_pane_g4_copy1

0x9d6d,	// (0x0004494e) set_opt_bg_pane_g5_copy1

0x9d75,	// (0x00044956) set_opt_bg_pane_g6_copy1

0xd1cb,	// (0x00047dac) set_opt_bg_pane_g7_copy1

0xd1d3,	// (0x00047db4) set_opt_bg_pane_g8_copy1

0xd1db,	// (0x00047dbc) set_opt_bg_pane_g9_copy1

0x9576,	// (0x00044157) bg_set_opt_pane_cp_vc

0xd1e3,	// (0x00047dc4) setting_slider_pane_vc_t1

0xd16a,	// (0x00047d4b) setting_slider_pane_vc_t2

0xd178,	// (0x00047d59) setting_slider_pane_vc_t3

0x0002,

0xf9e5,	// (0x0004a5c6) setting_slider_pane_vc_t

0xd186,	// (0x00047d67) slider_set_pane_vc

0x54b1,	// (0x00040092) volume_set_pane_vc_g1

0x5798,	// (0x00040379) volume_set_pane_vc_g2

0x57a1,	// (0x00040382) volume_set_pane_vc_g3

0x57aa,	// (0x0004038b) volume_set_pane_vc_g4

0x57b3,	// (0x00040394) volume_set_pane_vc_g5

0x57bc,	// (0x0004039d) volume_set_pane_vc_g6

0x57c5,	// (0x000403a6) volume_set_pane_vc_g7

0x57ce,	// (0x000403af) volume_set_pane_vc_g8

0x57d7,	// (0x000403b8) volume_set_pane_vc_g9

0x57e0,	// (0x000403c1) volume_set_pane_vc_g10

0x0009,

0xf9ec,	// (0x0004a5cd) volume_set_pane_vc_g

0xd1f2,	// (0x00047dd3) volume_set_pane_vc

0xd1fa,	// (0x00047ddb) button_value_adjust_pane_cp1_vc

0xd204,	// (0x00047de5) list_highlight_pane_cp2_vc

0xd20d,	// (0x00047dee) list_set_pane_vc_ParamLimits

0xd20d,	// (0x00047dee) list_set_pane_vc

0xd25f,	// (0x00047e40) main_pane_set_vc_t1_ParamLimits

0xd25f,	// (0x00047e40) main_pane_set_vc_t1

0xd274,	// (0x00047e55) main_pane_set_vc_t2_ParamLimits

0xd274,	// (0x00047e55) main_pane_set_vc_t2

0xd286,	// (0x00047e67) main_pane_set_vc_t3_ParamLimits

0xd286,	// (0x00047e67) main_pane_set_vc_t3

0xd298,	// (0x00047e79) main_pane_set_vc_t4_ParamLimits

0xd298,	// (0x00047e79) main_pane_set_vc_t4

0x0003,

0xfa01,	// (0x0004a5e2) main_pane_set_vc_t_ParamLimits

0xfa01,	// (0x0004a5e2) main_pane_set_vc_t

0xd2aa,	// (0x00047e8b) setting_code_pane_vc_ParamLimits

0xd2aa,	// (0x00047e8b) setting_code_pane_vc

0xd2b9,	// (0x00047e9a) setting_slider_graphic_pane_vc

0xd2b9,	// (0x00047e9a) setting_slider_pane_vc

0xd2b9,	// (0x00047e9a) setting_text_pane_vc

0xd2b9,	// (0x00047e9a) setting_volume_pane_vc

0xd2c1,	// (0x00047ea2) scroll_pane_cp121_vc

0x9cdd,	// (0x000448be) set_content_pane_vc

0xd2c9,	// (0x00047eaa) button_value_adjust_pane_g1

0xd2d2,	// (0x00047eb3) button_value_adjust_pane_g2

0x0001,

0xfa56,	// (0x0004a637) button_value_adjust_pane_g

0xd2db,	// (0x00047ebc) form_field_slider_wide_pane_vc_t1_ParamLimits

0xd2db,	// (0x00047ebc) form_field_slider_wide_pane_vc_t1

0xd2f1,	// (0x00047ed2) form_field_slider_wide_pane_vc_t2_ParamLimits

0xd2f1,	// (0x00047ed2) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5b,	// (0x0004a63c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5b,	// (0x0004a63c) form_field_slider_wide_pane_vc_t

0x96b0,	// (0x00044291) input_focus_pane_cp10_vc_ParamLimits

0x96b0,	// (0x00044291) input_focus_pane_cp10_vc

0xd31c,	// (0x00047efd) slider_cont_pane_cp1_vc_ParamLimits

0xd31c,	// (0x00047efd) slider_cont_pane_cp1_vc

0xd18e,	// (0x00047d6f) slider_form_pane_g1_cp2

0xd197,	// (0x00047d78) slider_form_pane_g2_cp2

0xd337,	// (0x00047f18) form_field_slider_pane_vc_t3

0xd345,	// (0x00047f26) form_field_slider_pane_vc_t4

0xd353,	// (0x00047f34) slider_form_pane_vc_ParamLimits

0xd353,	// (0x00047f34) slider_form_pane_vc

0xd360,	// (0x00047f41) form_field_slider_pane_vc_t1_ParamLimits

0xd360,	// (0x00047f41) form_field_slider_pane_vc_t1

0xd376,	// (0x00047f57) form_field_slider_pane_vc_t2_ParamLimits

0xd376,	// (0x00047f57) form_field_slider_pane_vc_t2

0x0001,

0xfa6d,	// (0x0004a64e) form_field_slider_pane_vc_t_ParamLimits

0xfa6d,	// (0x0004a64e) form_field_slider_pane_vc_t

0x96b0,	// (0x00044291) input_focus_pane_cp9_vc_ParamLimits

0x96b0,	// (0x00044291) input_focus_pane_cp9_vc

0xd388,	// (0x00047f69) slider_cont_pane_vc_ParamLimits

0xd388,	// (0x00047f69) slider_cont_pane_vc

0xd39a,	// (0x00047f7b) list_form_graphic_pane_cp_vc_ParamLimits

0xd39a,	// (0x00047f7b) list_form_graphic_pane_cp_vc

0xbcd8,	// (0x000468b9) form_field_popup_wide_pane_vc_g1

0xd3af,	// (0x00047f90) form_field_popup_wide_pane_vc_t1_ParamLimits

0xd3af,	// (0x00047f90) form_field_popup_wide_pane_vc_t1

0x9cf2,	// (0x000448d3) input_focus_pane_cp8_vc_ParamLimits

0x9cf2,	// (0x000448d3) input_focus_pane_cp8_vc

0xd3ee,	// (0x00047fcf) list_form_wide_pane_vc_ParamLimits

0xd3ee,	// (0x00047fcf) list_form_wide_pane_vc

0xd3fa,	// (0x00047fdb) list_form_graphic_pane_vc_g1

0xd402,	// (0x00047fe3) list_form_graphic_pane_vc_t1_ParamLimits

0xd402,	// (0x00047fe3) list_form_graphic_pane_vc_t1

0x96ce,	// (0x000442af) list_highlight_pane_cp5_vc_ParamLimits

0x96ce,	// (0x000442af) list_highlight_pane_cp5_vc

0xd41e,	// (0x00047fff) list_form_graphic_pane_vc_ParamLimits

0xd41e,	// (0x00047fff) list_form_graphic_pane_vc

0xbcd8,	// (0x000468b9) form_field_popup_pane_vc_g1

0xd434,	// (0x00048015) form_field_popup_pane_vc_t1_ParamLimits

0xd434,	// (0x00048015) form_field_popup_pane_vc_t1

0x9cf2,	// (0x000448d3) input_focus_pane_cp7_vc_ParamLimits

0x9cf2,	// (0x000448d3) input_focus_pane_cp7_vc

0xd449,	// (0x0004802a) list_form_pane_vc_ParamLimits

0xd449,	// (0x0004802a) list_form_pane_vc

0xd455,	// (0x00048036) data_form_pane_vc_t1_ParamLimits

0xd455,	// (0x00048036) data_form_pane_vc_t1

0x9d4d,	// (0x0004492e) input_focus_pane_vc_g1

0x9d55,	// (0x00044936) input_focus_pane_vc_g2

0x9d5d,	// (0x0004493e) input_focus_pane_vc_g3

0x9d65,	// (0x00044946) input_focus_pane_vc_g4

0x9d6d,	// (0x0004494e) input_focus_pane_vc_g5

0x9d75,	// (0x00044956) input_focus_pane_vc_g6

0x9d7d,	// (0x0004495e) input_focus_pane_vc_g7

0x9d85,	// (0x00044966) input_focus_pane_vc_g8

0x9d8d,	// (0x0004496e) input_focus_pane_vc_g9

0x9492,	// (0x00044073) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x0004a24d) input_focus_pane_vc_g

0xbccc,	// (0x000468ad) data_form_pane_vc_ParamLimits

0xbccc,	// (0x000468ad) data_form_pane_vc

0xbcd8,	// (0x000468b9) form_field_data_pane_vc_g1

0xd470,	// (0x00048051) form_field_data_pane_vc_t1_ParamLimits

0xd470,	// (0x00048051) form_field_data_pane_vc_t1

0x9cf2,	// (0x000448d3) input_focus_pane_vc_ParamLimits

0x9cf2,	// (0x000448d3) input_focus_pane_vc

0xccc9,	// (0x000478aa) button_value_adjust_pane_cp3_vc

0xd486,	// (0x00048067) button_value_adjust_pane_cp5_vc

0xd48e,	// (0x0004806f) form_field_data_pane_vc_ParamLimits

0xd48e,	// (0x0004806f) form_field_data_pane_vc

0xccd1,	// (0x000478b2) form_field_data_pane_vc_cp2

0xd4a5,	// (0x00048086) form_field_data_wide_pane_vc_ParamLimits

0xd4a5,	// (0x00048086) form_field_data_wide_pane_vc

0xd4bb,	// (0x0004809c) form_field_data_wide_pane_vc_cp2

0xd4c3,	// (0x000480a4) form_field_popup_pane_vc_ParamLimits

0xd4c3,	// (0x000480a4) form_field_popup_pane_vc

0xd4da,	// (0x000480bb) form_field_popup_wide_pane_vc_ParamLimits

0xd4da,	// (0x000480bb) form_field_popup_wide_pane_vc

0xd4f0,	// (0x000480d1) form_field_slider_pane_vc_ParamLimits

0xd4f0,	// (0x000480d1) form_field_slider_pane_vc

0xd503,	// (0x000480e4) form_field_slider_wide_pane_vc_ParamLimits

0xd503,	// (0x000480e4) form_field_slider_wide_pane_vc

0x0f6f,	// (0x0003bb50) grid_touch_1_pane_ParamLimits

0x0f6f,	// (0x0003bb50) grid_touch_1_pane

0x0f83,	// (0x0003bb64) grid_touch_2_pane_ParamLimits

0x0f83,	// (0x0003bb64) grid_touch_2_pane

0xd516,	// (0x000480f7) touch_pane_g1_ParamLimits

0xd516,	// (0x000480f7) touch_pane_g1

0xd524,	// (0x00048105) cell_app_pane_cp_wide_ParamLimits

0xd524,	// (0x00048105) cell_app_pane_cp_wide

0xd534,	// (0x00048115) grid_popup_fast_wide_pane_ParamLimits

0xd534,	// (0x00048115) grid_popup_fast_wide_pane

0xd548,	// (0x00048129) scroll_pane_cp19_ParamLimits

0xd548,	// (0x00048129) scroll_pane_cp19

0x9576,	// (0x00044157) bg_popup_window_pane_cp20

0xd55c,	// (0x0004813d) listscroll_popup_fast_wide_pane

0x0fad,	// (0x0003bb8e) grid_indicator_nsta_pane

0xd564,	// (0x00048145) clock_nsta_pane_g1

0xd56d,	// (0x0004814e) clock_nsta_pane_t1

0x0fb9,	// (0x0003bb9a) cell_indicator_nsta_pane_ParamLimits

0x0fb9,	// (0x0003bb9a) cell_indicator_nsta_pane

0xd516,	// (0x000480f7) cell_indicator_nsta_pane_g1

0x0fd0,	// (0x0003bbb1) cell_indicator_nsta_pane_g2

0x0001,

0xfa7e,	// (0x0004a65f) cell_indicator_nsta_pane_g

0xd589,	// (0x0004816a) clock_nsta_pane_cp

0xd591,	// (0x00048172) indicator_nsta_pane_cp

0xd59a,	// (0x0004817b) nsta_clock_indic_pane_g1

0x9760,	// (0x00044341) grid_indicator_pane

0xb339,	// (0x00045f1a) scroll_pane_cp29

0x4bc7,	// (0x0003f7a8) indicator_nsta_pane_cp2_ParamLimits

0x4bc7,	// (0x0003f7a8) indicator_nsta_pane_cp2

0x96ce,	// (0x000442af) main_apps_wheel_pane

0xbe77,	// (0x00046a58) form_midp_field_text_pane_ParamLimits

0xbfb0,	// (0x00046b91) scroll_bar_cp050_ParamLimits

0xd603,	// (0x000481e4) cell_indicator_pane_ParamLimits

0xd603,	// (0x000481e4) cell_indicator_pane

0xd619,	// (0x000481fa) cell_indicator_pane_g1

0x0fdd,	// (0x0003bbbe) grid_wheel_folder_pane_ParamLimits

0x0fdd,	// (0x0003bbbe) grid_wheel_folder_pane

0x0feb,	// (0x0003bbcc) list_wheel_apps_pane_ParamLimits

0x0feb,	// (0x0003bbcc) list_wheel_apps_pane

0x0ff7,	// (0x0003bbd8) main_apps_wheel_pane_g1_ParamLimits

0x0ff7,	// (0x0003bbd8) main_apps_wheel_pane_g1

0x1003,	// (0x0003bbe4) main_apps_wheel_pane_g2_ParamLimits

0x1003,	// (0x0003bbe4) main_apps_wheel_pane_g2

0x0001,

0xfa9a,	// (0x0004a67b) main_apps_wheel_pane_g_ParamLimits

0xfa9a,	// (0x0004a67b) main_apps_wheel_pane_g

0x100f,	// (0x0003bbf0) main_apps_wheel_pane_t1_ParamLimits

0x100f,	// (0x0003bbf0) main_apps_wheel_pane_t1

0x1021,	// (0x0003bc02) list_wheel_apps_pane_g1

0x1029,	// (0x0003bc0a) list_wheel_apps_pane_g2

0x1031,	// (0x0003bc12) list_wheel_apps_pane_g3

0x1039,	// (0x0003bc1a) list_wheel_apps_pane_g4

0x1041,	// (0x0003bc22) list_wheel_apps_pane_g5

0x0004,

0xfa9f,	// (0x0004a680) list_wheel_apps_pane_g

0x96ce,	// (0x000442af) navi_icon_text_pane

0x0557,	// (0x0003b138) aid_fill_nsta

0xd623,	// (0x00048204) navi_icon_text_pane_g1

0xd62f,	// (0x00048210) navi_icon_text_pane_t1

0xb5c5,	// (0x000461a6) list_set_graphic_pane_t1_ParamLimits

0xb5c5,	// (0x000461a6) list_set_graphic_pane_t1

0xc69e,	// (0x0004727f) popup_midp_note_alarm_window_t6_ParamLimits

0xc69e,	// (0x0004727f) popup_midp_note_alarm_window_t6

0xc6b0,	// (0x00047291) popup_midp_note_alarm_window_t7_ParamLimits

0xc6b0,	// (0x00047291) popup_midp_note_alarm_window_t7

0xc6c2,	// (0x000472a3) popup_midp_note_alarm_window_t8_ParamLimits

0xc6c2,	// (0x000472a3) popup_midp_note_alarm_window_t8

0xc6d4,	// (0x000472b5) popup_midp_note_alarm_window_t9_ParamLimits

0xc6d4,	// (0x000472b5) popup_midp_note_alarm_window_t9

0xc6e6,	// (0x000472c7) popup_midp_note_alarm_window_t10_ParamLimits

0xc6e6,	// (0x000472c7) popup_midp_note_alarm_window_t10

0xc6f8,	// (0x000472d9) popup_midp_note_alarm_window_t11_ParamLimits

0xc6f8,	// (0x000472d9) popup_midp_note_alarm_window_t11

0xc70a,	// (0x000472eb) scroll_pane_cp17_ParamLimits

0xc70a,	// (0x000472eb) scroll_pane_cp17

0x54b1,	// (0x00040092) volume_small_pane_cp_g1

0x57e9,	// (0x000403ca) volume_small_pane_cp_g2

0x57f2,	// (0x000403d3) volume_small_pane_cp_g3

0x57fb,	// (0x000403dc) volume_small_pane_cp_g4

0x54de,	// (0x000400bf) volume_small_pane_cp_g5

0x5804,	// (0x000403e5) volume_small_pane_cp_g6

0x580d,	// (0x000403ee) volume_small_pane_cp_g7

0x5816,	// (0x000403f7) volume_small_pane_cp_g8

0x581f,	// (0x00040400) volume_small_pane_cp_g9

0x5828,	// (0x00040409) volume_small_pane_cp_g10

0xb86f,	// (0x00046450) midp_ticker_pane_g1_ParamLimits

0xb87b,	// (0x0004645c) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x0004a319) midp_ticker_pane_g_ParamLimits

0xb887,	// (0x00046468) midp_ticker_pane_t1_ParamLimits

0x056d,	// (0x0003b14e) aid_fill_nsta_2

0xbf9c,	// (0x00046b7d) list_form2_midp_pane

0xcda9,	// (0x0004798a) midp_editing_number_pane_ParamLimits

0xcdb5,	// (0x00047996) midp_ticker_pane_ParamLimits

0xd641,	// (0x00048222) form2_midp_field_pane

0xd649,	// (0x0004822a) scroll_pane_cp51

0xd669,	// (0x0004824a) form2_midp_button_pane_ParamLimits

0xd669,	// (0x0004824a) form2_midp_button_pane

0xd67b,	// (0x0004825c) form2_midp_content_pane_ParamLimits

0xd67b,	// (0x0004825c) form2_midp_content_pane

0xd695,	// (0x00048276) form2_midp_field_choice_group_pane

0xd69d,	// (0x0004827e) form2_midp_field_pane_g1

0xd6a5,	// (0x00048286) form2_midp_field_pane_g2

0xd6ad,	// (0x0004828e) form2_midp_field_pane_g3

0xd6b5,	// (0x00048296) form2_midp_field_pane_g4

0x0003,

0xfac4,	// (0x0004a6a5) form2_midp_field_pane_g

0xd6bd,	// (0x0004829e) form2_midp_gauge_slider_pane

0xd6c5,	// (0x000482a6) form2_midp_gauge_wait_pane

0xd6cd,	// (0x000482ae) form2_midp_image_pane_ParamLimits

0xd6cd,	// (0x000482ae) form2_midp_image_pane

0xd6e8,	// (0x000482c9) form2_midp_label_pane_ParamLimits

0xd6e8,	// (0x000482c9) form2_midp_label_pane

0x1076,	// (0x0003bc57) form2_midp_label_pane_cp_ParamLimits

0x1076,	// (0x0003bc57) form2_midp_label_pane_cp

0xd701,	// (0x000482e2) form2_midp_string_pane_ParamLimits

0xd701,	// (0x000482e2) form2_midp_string_pane

0x7e9c,	// (0x00042a7d) form2_midp_text_pane_ParamLimits

0x7e9c,	// (0x00042a7d) form2_midp_text_pane

0xd713,	// (0x000482f4) form2_midp_time_pane

0xd723,	// (0x00048304) input_focus_pane_cp51_ParamLimits

0xd723,	// (0x00048304) input_focus_pane_cp51

0xd73b,	// (0x0004831c) form2_midp_label_pane_t1_ParamLimits

0xd73b,	// (0x0004831c) form2_midp_label_pane_t1

0x7eb5,	// (0x00042a96) form2_mdip_text_pane_t1_ParamLimits

0x7eb5,	// (0x00042a96) form2_mdip_text_pane_t1

0x7ece,	// (0x00042aaf) form2_midp_time_pane_t1

0xd783,	// (0x00048364) form2_midp_gauge_slider_pane_t1

0x1095,	// (0x0003bc76) form2_midp_gauge_slider_pane_t2

0x10a7,	// (0x0003bc88) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacd,	// (0x0004a6ae) form2_midp_gauge_slider_pane_t

0xd795,	// (0x00048376) form2_midp_slider_pane

0xd7a1,	// (0x00048382) form2_midp_gauge_wait_pane_t1

0xd7af,	// (0x00048390) form2_midp_wait_pane_ParamLimits

0xd7af,	// (0x00048390) form2_midp_wait_pane

0xbd16,	// (0x000468f7) list_single_2graphic_pane_cp4_ParamLimits

0xbd16,	// (0x000468f7) list_single_2graphic_pane_cp4

0xd7da,	// (0x000483bb) list_single_midp_graphic_pane_cp_ParamLimits

0xd7da,	// (0x000483bb) list_single_midp_graphic_pane_cp

0x9576,	// (0x00044157) list_highlight_pane_cp20

0xd7f8,	// (0x000483d9) list_single_2graphic_pane_g1_cp4

0xd025,	// (0x00047c06) list_single_2graphic_pane_g2_cp4

0xd800,	// (0x000483e1) list_single_2graphic_pane_t1_cp4

0x96ce,	// (0x000442af) list_highlight_pane_cp21

0xd80f,	// (0x000483f0) list_single_midp_graphic_pane_g4_cp

0xd81e,	// (0x000483ff) list_single_midp_graphic_pane_t1_cp

0xd833,	// (0x00048414) form2_mdip_string_pane_t1_ParamLimits

0xd833,	// (0x00048414) form2_mdip_string_pane_t1

0x9576,	// (0x00044157) bg_wml_button_pane_cp2

0x9492,	// (0x00044073) form2_midp_image_pane_g1

0x752b,	// (0x0004210c) list_double_large_graphic_pane_g5_ParamLimits

0x752b,	// (0x0004210c) list_double_large_graphic_pane_g5

0xa0c5,	// (0x00044ca6) midp_form_pane_ParamLimits

0x96ce,	// (0x000442af) main_apps_wheel_pane_ParamLimits

0xa64d,	// (0x0004522e) popup_preview_window_ParamLimits

0xa64d,	// (0x0004522e) popup_preview_window

0x5335,	// (0x0003ff16) popup_touch_info_window_ParamLimits

0x5335,	// (0x0003ff16) popup_touch_info_window

0x5353,	// (0x0003ff34) popup_touch_menu_window_ParamLimits

0x5353,	// (0x0003ff34) popup_touch_menu_window

0x9488,	// (0x00044069) bg_popup_sub_pane_cp6

0xd89d,	// (0x0004847e) list_touch_menu_pane

0xd8a5,	// (0x00048486) list_single_touch_menu_pane_ParamLimits

0xd8a5,	// (0x00048486) list_single_touch_menu_pane

0xd8bc,	// (0x0004849d) list_single_touch_menu_pane_t1

0x96ce,	// (0x000442af) bg_popup_sub_pane_cp7_ParamLimits

0x96ce,	// (0x000442af) bg_popup_sub_pane_cp7

0xd8ca,	// (0x000484ab) heading_sub_pane

0xd8d2,	// (0x000484b3) list_touch_info_pane_ParamLimits

0xd8d2,	// (0x000484b3) list_touch_info_pane

0xd8e1,	// (0x000484c2) list_single_touch_info_pane_ParamLimits

0xd8e1,	// (0x000484c2) list_single_touch_info_pane

0xd8f2,	// (0x000484d3) list_single_touch_info_pane_t1

0xd900,	// (0x000484e1) list_single_touch_info_pane_t2

0x0001,

0xfadb,	// (0x0004a6bc) list_single_touch_info_pane_t

0xb845,	// (0x00046426) bg_popup_heading_pane_cp

0xd90e,	// (0x000484ef) heading_sub_pane_t1

0xbc92,	// (0x00046873) bg_popup_preview_window_pane_cp_ParamLimits

0xbc92,	// (0x00046873) bg_popup_preview_window_pane_cp

0xd8ca,	// (0x000484ab) heading_preview_pane

0xd8d2,	// (0x000484b3) list_preview_pane_ParamLimits

0xd8d2,	// (0x000484b3) list_preview_pane

0xd91c,	// (0x000484fd) popup_preview_window_g1

0xd8e1,	// (0x000484c2) list_single_preview_pane_ParamLimits

0xd8e1,	// (0x000484c2) list_single_preview_pane

0xd924,	// (0x00048505) list_single_preview_pane_g1

0xd92c,	// (0x0004850d) list_single_preview_pane_t1

0xd8f2,	// (0x000484d3) list_single_preview_pane_t2

0x0001,

0xfae0,	// (0x0004a6c1) list_single_preview_pane_t

0xd93a,	// (0x0004851b) bg_popup_heading_pane_cp2_ParamLimits

0xd93a,	// (0x0004851b) bg_popup_heading_pane_cp2

0xd950,	// (0x00048531) heading_preview_pane_g1

0xd958,	// (0x00048539) heading_preview_pane_t1_ParamLimits

0xd958,	// (0x00048539) heading_preview_pane_t1

0x9777,	// (0x00044358) soft_indicator_pane_t1_ParamLimits

0x9c75,	// (0x00044856) scroll_pane_ParamLimits

0xb235,	// (0x00045e16) scroll_sc2_left_pane

0xb23e,	// (0x00045e1f) scroll_sc2_right_pane

0xb25d,	// (0x00045e3e) scroll_bg_pane_g1_ParamLimits

0xb272,	// (0x00045e53) scroll_bg_pane_g2_ParamLimits

0xb28a,	// (0x00045e6b) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x0004a2a4) scroll_bg_pane_g_ParamLimits

0xb25d,	// (0x00045e3e) scroll_handle_pane_g1_ParamLimits

0xb2ac,	// (0x00045e8d) scroll_handle_pane_g2_ParamLimits

0xb28a,	// (0x00045e6b) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x0004a2ab) scroll_handle_pane_g_ParamLimits

0x4eff,	// (0x0003fae0) popup_choice_list_window_ParamLimits

0x4eff,	// (0x0003fae0) popup_choice_list_window

0xbb74,	// (0x00046755) choice_list_pane

0xbbea,	// (0x000467cb) cell_toolbar_pane_t1

0xbc12,	// (0x000467f3) toolbar_button_pane_ParamLimits

0xcacd,	// (0x000476ae) ai_gene_pane_1_t2_ParamLimits

0xcacd,	// (0x000476ae) ai_gene_pane_1_t2

0x0001,

0xf8e6,	// (0x0004a4c7) ai_gene_pane_1_t_ParamLimits

0xf8e6,	// (0x0004a4c7) ai_gene_pane_1_t

0xd975,	// (0x00048556) scroll_sc2_left_pane_g1

0xd975,	// (0x00048556) scroll_sc2_right_pane_g1

0xb0cf,	// (0x00045cb0) bg_popup_sub_pane_cp10

0xd97f,	// (0x00048560) list_choice_list_pane

0xd996,	// (0x00048577) list_single_choice_list_pane_ParamLimits

0xd996,	// (0x00048577) list_single_choice_list_pane

0xd9a8,	// (0x00048589) list_single_choice_list_pane_g1

0x9e76,	// (0x00044a57) list_single_choice_list_pane_t1_ParamLimits

0x9e76,	// (0x00044a57) list_single_choice_list_pane_t1

0xd9b0,	// (0x00048591) choice_list_pane_g1

0xd9b8,	// (0x00048599) choice_list_pane_t1

0x9488,	// (0x00044069) input_focus_pane_cp11

0xb19c,	// (0x00045d7d) title_pane_stacon_g2_ParamLimits

0xb19c,	// (0x00045d7d) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x0004a28a) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x0004a28a) title_pane_stacon_g

0xb845,	// (0x00046426) cursor_press_pane

0xa3b4,	// (0x00044f95) popup_fep_hwr_window_ParamLimits

0xa3b4,	// (0x00044f95) popup_fep_hwr_window

0x4ff7,	// (0x0003fbd8) popup_fep_vkb_window_ParamLimits

0x4ff7,	// (0x0003fbd8) popup_fep_vkb_window

0xd9c6,	// (0x000485a7) cursor_press_pane_g1

0x0002,

0xfb09,	// (0x0004a6ea) fep_vkb_side_pane_g_ParamLimits

0x5866,	// (0x00040447) fep_hwr_candidate_pane_ParamLimits

0x5866,	// (0x00040447) fep_hwr_candidate_pane

0x588e,	// (0x0004046f) fep_hwr_side_pane_ParamLimits

0x588e,	// (0x0004046f) fep_hwr_side_pane

0x58ae,	// (0x0004048f) fep_hwr_top_pane_ParamLimits

0x58ae,	// (0x0004048f) fep_hwr_top_pane

0x58c6,	// (0x000404a7) fep_hwr_write_pane_ParamLimits

0x58c6,	// (0x000404a7) fep_hwr_write_pane

0xfb09,	// (0x0004a6ea) fep_vkb_side_pane_g

0xd9ce,	// (0x000485af) fep_hwr_top_pane_g1

0xd9e0,	// (0x000485c1) fep_hwr_top_pane_g2

0x5900,	// (0x000404e1) fep_hwr_top_pane_g3

0x0002,

0xfae5,	// (0x0004a6c6) fep_hwr_top_pane_g

0x5915,	// (0x000404f6) fep_hwr_top_text_pane

0xb3a6,	// (0x00045f87) fep_hwr_top_text_pane_g1

0xda16,	// (0x000485f7) fep_hwr_top_text_pane_t1

0x5a03,	// (0x000405e4) fep_hwr_candidate_pane_g1

0xdbdf,	// (0x000487c0) fep_vkb_keypad_pane_g3_ParamLimits

0xdbdf,	// (0x000487c0) fep_vkb_keypad_pane_g3

0xdc01,	// (0x000487e2) fep_vkb_keypad_pane_g4_ParamLimits

0xdc01,	// (0x000487e2) fep_vkb_keypad_pane_g4

0xdc70,	// (0x00048851) fep_vkb_bottom_pane_g2_ParamLimits

0xdc70,	// (0x00048851) fep_vkb_bottom_pane_g2

0x0001,

0xfb10,	// (0x0004a6f1) fep_vkb_bottom_pane_g_ParamLimits

0xfb10,	// (0x0004a6f1) fep_vkb_bottom_pane_g

0xd975,	// (0x00048556) cell_vkb_side_pane_g2

0x0001,

0xfb1a,	// (0x0004a6fb) cell_vkb_side_pane_g

0xdcb4,	// (0x00048895) cell_vkb_side_pane_t1

0xdcc2,	// (0x000488a3) cell_vkb_side_pane_t1_copy1

0xd975,	// (0x00048556) bg_fep_vkb_candidate_pane_g2

0xdd90,	// (0x00048971) cell_vkb_candidate_pane_ParamLimits

0xda24,	// (0x00048605) aid_size_cell_vkb_ParamLimits

0xda24,	// (0x00048605) aid_size_cell_vkb

0xdd90,	// (0x00048971) cell_vkb_candidate_pane

0x5b0e,	// (0x000406ef) bg_popup_fep_shadow_pane_g1

0xda8e,	// (0x0004866f) fep_vkb_bottom_pane_ParamLimits

0xda8e,	// (0x0004866f) fep_vkb_bottom_pane

0xdacb,	// (0x000486ac) fep_vkb_candidate_pane_ParamLimits

0xdacb,	// (0x000486ac) fep_vkb_candidate_pane

0xdae7,	// (0x000486c8) fep_vkb_keypad_pane_ParamLimits

0xdae7,	// (0x000486c8) fep_vkb_keypad_pane

0xdb1b,	// (0x000486fc) fep_vkb_side_pane_ParamLimits

0xdb1b,	// (0x000486fc) fep_vkb_side_pane

0xdb47,	// (0x00048728) fep_vkb_top_pane_ParamLimits

0xdb47,	// (0x00048728) fep_vkb_top_pane

0xdb73,	// (0x00048754) fep_vkb_top_pane_g1_ParamLimits

0xdb73,	// (0x00048754) fep_vkb_top_pane_g1

0xdb82,	// (0x00048763) fep_vkb_top_pane_g2_ParamLimits

0xdb82,	// (0x00048763) fep_vkb_top_pane_g2

0xdb91,	// (0x00048772) fep_vkb_top_pane_g3_ParamLimits

0xdb91,	// (0x00048772) fep_vkb_top_pane_g3

0x0003,

0xfb00,	// (0x0004a6e1) fep_vkb_top_pane_g_ParamLimits

0xfb00,	// (0x0004a6e1) fep_vkb_top_pane_g

0xdbaf,	// (0x00048790) fep_vkb_top_text_pane_ParamLimits

0xdbaf,	// (0x00048790) fep_vkb_top_text_pane

0x1116,	// (0x0003bcf7) fep_vkb_side_pane_g1_ParamLimits

0x1116,	// (0x0003bcf7) fep_vkb_side_pane_g1

0xdbce,	// (0x000487af) grid_vkb_side_pane_ParamLimits

0xdbce,	// (0x000487af) grid_vkb_side_pane

0x5b16,	// (0x000406f7) bg_popup_fep_shadow_pane_g2

0x5b1f,	// (0x00040700) bg_popup_fep_shadow_pane_g3

0x5b27,	// (0x00040708) bg_popup_fep_shadow_pane_g4

0x5b30,	// (0x00040711) bg_popup_fep_shadow_pane_g5

0x5b38,	// (0x00040719) bg_popup_fep_shadow_pane_g6

0x5b40,	// (0x00040721) bg_popup_fep_shadow_pane_g7

0x9d65,	// (0x00044946) bg_popup_fep_shadow_pane_g8

0xdc1f,	// (0x00048800) grid_vkb_keypad_number_pane_ParamLimits

0xdc1f,	// (0x00048800) grid_vkb_keypad_number_pane

0xdc2f,	// (0x00048810) grid_vkb_keypad_pane_ParamLimits

0xdc2f,	// (0x00048810) grid_vkb_keypad_pane

0xdc55,	// (0x00048836) fep_vkb_bottom_pane_g1_ParamLimits

0xdc55,	// (0x00048836) fep_vkb_bottom_pane_g1

0xdc7e,	// (0x0004885f) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xdc7e,	// (0x0004885f) grid_vkb_keypad_bottom_left_pane

0xdc93,	// (0x00048874) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xdc93,	// (0x00048874) grid_vkb_keypad_bottom_right_pane

0xdca8,	// (0x00048889) fep_vkb_top_text_pane_g1

0x115d,	// (0x0003bd3e) fep_vkb_top_text_pane_t1

0x116f,	// (0x0003bd50) cell_vkb_side_pane_ParamLimits

0x116f,	// (0x0003bd50) cell_vkb_side_pane

0xd975,	// (0x00048556) cell_vkb_side_pane_g1

0xdcd0,	// (0x000488b1) cell_vkb_keypad_pane_ParamLimits

0xdcd0,	// (0x000488b1) cell_vkb_keypad_pane

0xdd3d,	// (0x0004891e) cell_vkb_keypad_pane_g1

0x0008,

0xfb2d,	// (0x0004a70e) bg_popup_fep_shadow_pane_g

0x5b50,	// (0x00040731) cell_hwr_side_pane_g1

0x5b50,	// (0x00040731) cell_hwr_side_pane_g2

0xdd47,	// (0x00048928) cell_vkb_keypad_pane_t1

0x1185,	// (0x0003bd66) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x1185,	// (0x0003bd66) cell_vkb_keypad_bottom_left_pane

0x119a,	// (0x0003bd7b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x119a,	// (0x0003bd7b) cell_vkb_keypad_bottom_right_pane

0xd975,	// (0x00048556) cell_vkb_keypad_bottom_left_pane_g1

0xd975,	// (0x00048556) cell_vkb_keypad_bottom_right_pane_g1

0xdd55,	// (0x00048936) cell_vkb_keypad_number_pane_ParamLimits

0xdd55,	// (0x00048936) cell_vkb_keypad_number_pane

0xdd74,	// (0x00048955) cell_vkb_keypad_number_pane_g1

0xdd7e,	// (0x0004895f) cell_vkb_keypad_number_pane_g2

0xdd87,	// (0x00048968) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1f,	// (0x0004a700) cell_vkb_keypad_number_pane_g

0xdd47,	// (0x00048928) cell_vkb_keypad_number_pane_t1

0xdda9,	// (0x0004898a) fep_vkb_candidate_pane_g1

0x0001,

0xfb40,	// (0x0004a721) cell_hwr_side_pane_g

0xddc2,	// (0x000489a3) cell_hwr_side_pane_t1

0x5b5a,	// (0x0004073b) cell_hwr_side_pane_t1_copy1

0x5b68,	// (0x00040749) cell_hwr_candidate_pane_g1

0x5b97,	// (0x00040778) cell_hwr_candidate_pane_t1

0xd975,	// (0x00048556) cell_vkb_candidate_pane_g2

0xde06,	// (0x000489e7) cell_vkb_candidate_pane_t1

0x5831,	// (0x00040412) bg_popup_fep_shadow_pane_ParamLimits

0x5831,	// (0x00040412) bg_popup_fep_shadow_pane

0x58e0,	// (0x000404c1) bg_fep_hwr_top_pane_g4

0xd9f2,	// (0x000485d3) bg_hwr_side_pane_g1_ParamLimits

0xd9f2,	// (0x000485d3) bg_hwr_side_pane_g1

0xaa8b,	// (0x0004566c) cell_hwr_side_pane_ParamLimits

0xaa8b,	// (0x0004566c) cell_hwr_side_pane

0x598c,	// (0x0004056d) fep_hwr_write_pane_g1_ParamLimits

0x598c,	// (0x0004056d) fep_hwr_write_pane_g1

0x5999,	// (0x0004057a) fep_hwr_write_pane_g2_ParamLimits

0x5999,	// (0x0004057a) fep_hwr_write_pane_g2

0x59a6,	// (0x00040587) fep_hwr_write_pane_g3_ParamLimits

0x59a6,	// (0x00040587) fep_hwr_write_pane_g3

0xaaab,	// (0x0004568c) fep_hwr_write_pane_g4_ParamLimits

0xaaab,	// (0x0004568c) fep_hwr_write_pane_g4

0x0005,

0xfaec,	// (0x0004a6cd) fep_hwr_write_pane_g_ParamLimits

0xfaec,	// (0x0004a6cd) fep_hwr_write_pane_g

0x58e0,	// (0x000404c1) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x58e0,	// (0x000404c1) bg_fep_hwr_candidate_pane_g2

0x59c9,	// (0x000405aa) cell_hwr_candidate_pane_ParamLimits

0x59c9,	// (0x000405aa) cell_hwr_candidate_pane

0x5a03,	// (0x000405e4) fep_hwr_candidate_pane_g1_ParamLimits

0xda52,	// (0x00048633) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xda52,	// (0x00048633) bg_popup_fep_shadow_pane_cp2

0xdba1,	// (0x00048782) fep_vkb_top_pane_g4_ParamLimits

0xdba1,	// (0x00048782) fep_vkb_top_pane_g4

0xdbc0,	// (0x000487a1) fep_vkb_side_pane_g2_ParamLimits

0xdbc0,	// (0x000487a1) fep_vkb_side_pane_g2

0xf03b,	// (0x00049c1c) list_setting_pane_t4_ParamLimits

0xf03b,	// (0x00049c1c) list_setting_pane_t4

0xf0d5,	// (0x00049cb6) list_setting_number_pane_t5_ParamLimits

0xf0d5,	// (0x00049cb6) list_setting_number_pane_t5

0x9fdc,	// (0x00044bbd) list_double_heading_pane_cp2_ParamLimits

0x9fdc,	// (0x00044bbd) list_double_heading_pane_cp2

0xb6bf,	// (0x000462a0) list_double_heading_pane_g1_cp2_ParamLimits

0xb6bf,	// (0x000462a0) list_double_heading_pane_g1_cp2

0xde14,	// (0x000489f5) list_double_heading_pane_g2_cp2_ParamLimits

0xde14,	// (0x000489f5) list_double_heading_pane_g2_cp2

0xde28,	// (0x00048a09) list_double_heading_pane_t1_cp2_ParamLimits

0xde28,	// (0x00048a09) list_double_heading_pane_t1_cp2

0xde3e,	// (0x00048a1f) list_double_heading_pane_t2_cp2_ParamLimits

0xde3e,	// (0x00048a1f) list_double_heading_pane_t2_cp2

0x9480,	// (0x00044061) aid_value_unit2

0x47f7,	// (0x0003f3d8) popup_preview_fixed_window

0x9857,	// (0x00044438) bg_popup_preview_window_pane_cp02

0xde50,	// (0x00048a31) list_preview_fixed_pane

0xde96,	// (0x00048a77) list_empty_pane_fp_ParamLimits

0xde96,	// (0x00048a77) list_empty_pane_fp

0xde96,	// (0x00048a77) list_single_cale_day_pane_fp_ParamLimits

0xde96,	// (0x00048a77) list_single_cale_day_pane_fp

0xde96,	// (0x00048a77) list_single_graphic_heading_pane_fp_ParamLimits

0xde96,	// (0x00048a77) list_single_graphic_heading_pane_fp

0xde96,	// (0x00048a77) list_single_graphic_pane_fp_ParamLimits

0xde96,	// (0x00048a77) list_single_graphic_pane_fp

0xde96,	// (0x00048a77) list_single_heading_pane_fp_ParamLimits

0xde96,	// (0x00048a77) list_single_heading_pane_fp

0xde96,	// (0x00048a77) list_single_pane_fp_ParamLimits

0xde96,	// (0x00048a77) list_single_pane_fp

0xdeaa,	// (0x00048a8b) list_single_pane_fp_g1_ParamLimits

0xdeaa,	// (0x00048a8b) list_single_pane_fp_g1

0x749d,	// (0x0004207e) list_single_pane_fp_g2_ParamLimits

0x749d,	// (0x0004207e) list_single_pane_fp_g2

0x81d5,	// (0x00042db6) list_single_pane_fp_g3_ParamLimits

0x81d5,	// (0x00042db6) list_single_pane_fp_g3

0xdeb6,	// (0x00048a97) list_single_pane_fp_g4_ParamLimits

0xdeb6,	// (0x00048a97) list_single_pane_fp_g4

0x0003,

0xfb53,	// (0x0004a734) list_single_pane_fp_g_ParamLimits

0xfb53,	// (0x0004a734) list_single_pane_fp_g

0x7ee1,	// (0x00042ac2) list_single_pane_fp_t1_ParamLimits

0x7ee1,	// (0x00042ac2) list_single_pane_fp_t1

0x7ef8,	// (0x00042ad9) list_single_graphic_pane_fp_g1_ParamLimits

0x7ef8,	// (0x00042ad9) list_single_graphic_pane_fp_g1

0xdeaa,	// (0x00048a8b) list_single_graphic_pane_fp_g2_ParamLimits

0xdeaa,	// (0x00048a8b) list_single_graphic_pane_fp_g2

0x749d,	// (0x0004207e) list_single_graphic_pane_fp_g3_ParamLimits

0x749d,	// (0x0004207e) list_single_graphic_pane_fp_g3

0x81d5,	// (0x00042db6) list_single_graphic_pane_fp_g4_ParamLimits

0x81d5,	// (0x00042db6) list_single_graphic_pane_fp_g4

0xdeb6,	// (0x00048a97) list_single_graphic_pane_fp_g5_ParamLimits

0xdeb6,	// (0x00048a97) list_single_graphic_pane_fp_g5

0x0004,

0xfb5c,	// (0x0004a73d) list_single_graphic_pane_fp_g_ParamLimits

0xfb5c,	// (0x0004a73d) list_single_graphic_pane_fp_g

0x7f04,	// (0x00042ae5) list_single_graphic_pane_fp_t1_ParamLimits

0x7f04,	// (0x00042ae5) list_single_graphic_pane_fp_t1

0x7ef8,	// (0x00042ad9) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7ef8,	// (0x00042ad9) list_single_graphic_heading_pane_fp_g1

0xdeaa,	// (0x00048a8b) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xdeaa,	// (0x00048a8b) list_single_graphic_heading_pane_fp_g2

0x749d,	// (0x0004207e) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x749d,	// (0x0004207e) list_single_graphic_heading_pane_fp_g3

0x81d5,	// (0x00042db6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x81d5,	// (0x00042db6) list_single_graphic_heading_pane_fp_g4

0xdeb6,	// (0x00048a97) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xdeb6,	// (0x00048a97) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x0004a73d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x0004a73d) list_single_graphic_heading_pane_fp_g

0x7f1a,	// (0x00042afb) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7f1a,	// (0x00042afb) list_single_graphic_heading_pane_fp_t1

0x7f30,	// (0x00042b11) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7f30,	// (0x00042b11) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb67,	// (0x0004a748) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb67,	// (0x0004a748) list_single_graphic_heading_pane_fp_t

0x7f42,	// (0x00042b23) list_single_cale_day_pane_fp_g1_ParamLimits

0x7f42,	// (0x00042b23) list_single_cale_day_pane_fp_g1

0xdec2,	// (0x00048aa3) list_single_cale_day_pane_fp_g2_ParamLimits

0xdec2,	// (0x00048aa3) list_single_cale_day_pane_fp_g2

0x81e9,	// (0x00042dca) list_single_cale_day_pane_fp_g3_ParamLimits

0x81e9,	// (0x00042dca) list_single_cale_day_pane_fp_g3

0x8211,	// (0x00042df2) list_single_cale_day_pane_fp_g4_ParamLimits

0x8211,	// (0x00042df2) list_single_cale_day_pane_fp_g4

0x8235,	// (0x00042e16) list_single_cale_day_pane_fp_g5_ParamLimits

0x8235,	// (0x00042e16) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6c,	// (0x0004a74d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6c,	// (0x0004a74d) list_single_cale_day_pane_fp_g

0x7f7a,	// (0x00042b5b) list_single_cale_day_pane_fp_t1_ParamLimits

0x7f7a,	// (0x00042b5b) list_single_cale_day_pane_fp_t1

0x7fa0,	// (0x00042b81) list_single_cale_day_pane_fp_t2_ParamLimits

0x7fa0,	// (0x00042b81) list_single_cale_day_pane_fp_t2

0x7fb9,	// (0x00042b9a) list_single_cale_day_pane_fp_t3_ParamLimits

0x7fb9,	// (0x00042b9a) list_single_cale_day_pane_fp_t3

0x0002,

0xfb77,	// (0x0004a758) list_single_cale_day_pane_fp_t_ParamLimits

0xfb77,	// (0x0004a758) list_single_cale_day_pane_fp_t

0xdeaa,	// (0x00048a8b) list_empty_pane_fp_g1_ParamLimits

0xdeaa,	// (0x00048a8b) list_empty_pane_fp_g1

0x7fd2,	// (0x00042bb3) list_empty_pane_fp_t1

0x7fe0,	// (0x00042bc1) list_empty_pane_fp_t2

0x0001,

0xfb7e,	// (0x0004a75f) list_empty_pane_fp_t

0xdeaa,	// (0x00048a8b) list_single_heading_pane_fp_g1_ParamLimits

0xdeaa,	// (0x00048a8b) list_single_heading_pane_fp_g1

0x749d,	// (0x0004207e) list_single_heading_pane_fp_g2_ParamLimits

0x749d,	// (0x0004207e) list_single_heading_pane_fp_g2

0x81d5,	// (0x00042db6) list_single_heading_pane_fp_g3_ParamLimits

0x81d5,	// (0x00042db6) list_single_heading_pane_fp_g3

0x0002,

0xfb83,	// (0x0004a764) list_single_heading_pane_fp_g_ParamLimits

0xfb83,	// (0x0004a764) list_single_heading_pane_fp_g

0x7fee,	// (0x00042bcf) list_single_heading_pane_fp_t1_ParamLimits

0x7fee,	// (0x00042bcf) list_single_heading_pane_fp_t1

0x8000,	// (0x00042be1) list_single_heading_pane_fp_t2_ParamLimits

0x8000,	// (0x00042be1) list_single_heading_pane_fp_t2

0x0001,

0xfb8a,	// (0x0004a76b) list_single_heading_pane_fp_t_ParamLimits

0xfb8a,	// (0x0004a76b) list_single_heading_pane_fp_t

0x9e8b,	// (0x00044a6c) aid_size_cell_fast

0x983a,	// (0x0004441b) soft_indicator_pane_cp1_t1

0x9ec8,	// (0x00044aa9) cell_app_pane_cp2_ParamLimits

0x9ec8,	// (0x00044aa9) cell_app_pane_cp2

0x5853,	// (0x00040434) fep_hwr_candidate_drop_down_list_pane

0x5a1d,	// (0x000405fe) fep_hwr_candidate_pane_g3_ParamLimits

0x5a1d,	// (0x000405fe) fep_hwr_candidate_pane_g3

0x22be,	// (0x0003ce9f) fep_hwr_candidate_pane_g4_ParamLimits

0x22be,	// (0x0003ce9f) fep_hwr_candidate_pane_g4

0x0002,

0xfaf9,	// (0x0004a6da) fep_hwr_candidate_pane_g_ParamLimits

0xfaf9,	// (0x0004a6da) fep_hwr_candidate_pane_g

0xdaba,	// (0x0004869b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xdaba,	// (0x0004869b) fep_vkb_candidate_drop_down_list_pane

0xddb1,	// (0x00048992) fep_vkb_candidate_pane_g3

0xddb9,	// (0x0004899a) fep_vkb_candidate_pane_g4

0x0002,

0xfb26,	// (0x0004a707) fep_vkb_candidate_pane_g

0x5b68,	// (0x00040749) cell_hwr_candidate_pane_g1_ParamLimits

0x5b76,	// (0x00040757) cell_hwr_candidate_pane_g3_ParamLimits

0x5b76,	// (0x00040757) cell_hwr_candidate_pane_g3

0x2cf8,	// (0x0003d8d9) cell_hwr_candidate_pane_g4_ParamLimits

0x2cf8,	// (0x0003d8d9) cell_hwr_candidate_pane_g4

0x0002,

0xfb45,	// (0x0004a726) cell_hwr_candidate_pane_g_ParamLimits

0xfb45,	// (0x0004a726) cell_hwr_candidate_pane_g

0xddd0,	// (0x000489b1) cell_vkb_candidate_pane_g3_ParamLimits

0xddd0,	// (0x000489b1) cell_vkb_candidate_pane_g3

0xddeb,	// (0x000489cc) cell_vkb_candidate_pane_g4_ParamLimits

0xddeb,	// (0x000489cc) cell_vkb_candidate_pane_g4

0xdece,	// (0x00048aaf) cell_app_pane_cp2_g1_ParamLimits

0xdece,	// (0x00048aaf) cell_app_pane_cp2_g1

0xdeec,	// (0x00048acd) cell_app_pane_cp2_g2_ParamLimits

0xdeec,	// (0x00048acd) cell_app_pane_cp2_g2

0x0001,

0xfb8f,	// (0x0004a770) cell_app_pane_cp2_g_ParamLimits

0xfb8f,	// (0x0004a770) cell_app_pane_cp2_g

0xdef8,	// (0x00048ad9) cell_app_pane_cp2_t1_ParamLimits

0xdef8,	// (0x00048ad9) cell_app_pane_cp2_t1

0x9cf2,	// (0x000448d3) grid_highlight_pane_cp1_ParamLimits

0x9cf2,	// (0x000448d3) grid_highlight_pane_cp1

0x5bb4,	// (0x00040795) cell_hwr_candidate_pane_cp1_ParamLimits

0x5bb4,	// (0x00040795) cell_hwr_candidate_pane_cp1

0x5b68,	// (0x00040749) fep_hwr_candidate_drop_down_list_pane_g1

0x5bd2,	// (0x000407b3) fep_hwr_candidate_drop_down_list_pane_g2

0x5bdf,	// (0x000407c0) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb94,	// (0x0004a775) fep_hwr_candidate_drop_down_list_pane_g

0x5bec,	// (0x000407cd) fep_hwr_candidate_drop_down_list_scroll_pane

0x5bf5,	// (0x000407d6) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5bf5,	// (0x000407d6) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5c02,	// (0x000407e3) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5c02,	// (0x000407e3) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5c0f,	// (0x000407f0) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5c0f,	// (0x000407f0) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5c1c,	// (0x000407fd) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5c1c,	// (0x000407fd) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5c37,	// (0x00040818) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5c37,	// (0x00040818) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5c52,	// (0x00040833) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5c52,	// (0x00040833) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5c6d,	// (0x0004084e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5c6d,	// (0x0004084e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5c88,	// (0x00040869) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5c88,	// (0x00040869) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9b,	// (0x0004a77c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9b,	// (0x0004a77c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x11b5,	// (0x0003bd96) cell_vkb_candidate_pane_cp1_ParamLimits

0x11b5,	// (0x0003bd96) cell_vkb_candidate_pane_cp1

0xdba1,	// (0x00048782) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xdba1,	// (0x00048782) fep_vkb_candidate_drop_down_list_pane_g1

0xdf0a,	// (0x00048aeb) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xdf0a,	// (0x00048aeb) fep_vkb_candidate_drop_down_list_pane_g2

0xdf17,	// (0x00048af8) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xdf17,	// (0x00048af8) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbac,	// (0x0004a78d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbac,	// (0x0004a78d) fep_vkb_candidate_drop_down_list_pane_g

0xdf24,	// (0x00048b05) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xdf24,	// (0x00048b05) fep_vkb_candidate_drop_down_list_scroll_pane

0xdf31,	// (0x00048b12) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xdf31,	// (0x00048b12) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xdf3e,	// (0x00048b1f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xdf3e,	// (0x00048b1f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xdf4a,	// (0x00048b2b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xdf4a,	// (0x00048b2b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xdf56,	// (0x00048b37) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xdf56,	// (0x00048b37) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xdf77,	// (0x00048b58) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xdf77,	// (0x00048b58) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xdf98,	// (0x00048b79) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xdf98,	// (0x00048b79) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xdfb9,	// (0x00048b9a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xdfb9,	// (0x00048b9a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xdfda,	// (0x00048bbb) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xdfda,	// (0x00048bbb) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb3,	// (0x0004a794) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb3,	// (0x0004a794) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x37ae,	// (0x0003e38f) title_pane_g1_ParamLimits

0x37c5,	// (0x0003e3a6) title_pane_g2_ParamLimits

0xf529,	// (0x0004a10a) title_pane_g_ParamLimits

0xb396,	// (0x00045f77) aid_call2_pane

0xb39e,	// (0x00045f7f) aid_call_pane

0xb3a6,	// (0x00045f87) popup_clock_analogue_window_g1

0xb3a6,	// (0x00045f87) popup_clock_analogue_window_g2

0x4ad1,	// (0x0003f6b2) popup_clock_analogue_window_g3

0x4ada,	// (0x0003f6bb) popup_clock_analogue_window_g4

0x9492,	// (0x00044073) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x0004a2b9) popup_clock_analogue_window_g

0x4ae2,	// (0x0003f6c3) popup_clock_analogue_window_t1

0x4af0,	// (0x0003f6d1) clock_digital_number_pane_ParamLimits

0x4af0,	// (0x0003f6d1) clock_digital_number_pane

0x4afc,	// (0x0003f6dd) clock_digital_number_pane_cp02_ParamLimits

0x4afc,	// (0x0003f6dd) clock_digital_number_pane_cp02

0x4b08,	// (0x0003f6e9) clock_digital_number_pane_cp03_ParamLimits

0x4b08,	// (0x0003f6e9) clock_digital_number_pane_cp03

0x4b14,	// (0x0003f6f5) clock_digital_number_pane_cp04_ParamLimits

0x4b14,	// (0x0003f6f5) clock_digital_number_pane_cp04

0x4b20,	// (0x0003f701) clock_digital_separator_pane_ParamLimits

0x4b20,	// (0x0003f701) clock_digital_separator_pane

0x4b2c,	// (0x0003f70d) popup_clock_digital_window_t1_ParamLimits

0x4b2c,	// (0x0003f70d) popup_clock_digital_window_t1

0x9492,	// (0x00044073) clock_digital_number_pane_g1

0x9492,	// (0x00044073) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x0004a2c4) clock_digital_number_pane_g

0x9492,	// (0x00044073) clock_digital_separator_pane_g1

0x9492,	// (0x00044073) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x0004a2c4) clock_digital_separator_pane_g

0x0557,	// (0x0003b138) aid_fill_nsta_ParamLimits

0x066e,	// (0x0003b24f) indicator_nsta_pane_ParamLimits

0xbb1d,	// (0x000466fe) popup_clock_analogue_window

0xbb1d,	// (0x000466fe) popup_clock_digital_window

0x0fad,	// (0x0003bb8e) grid_indicator_nsta_pane_ParamLimits

0xd57b,	// (0x0004815c) clock_nsta_pane_t2

0x0001,

0xfa79,	// (0x0004a65a) clock_nsta_pane_t

0x4a95,	// (0x0003f676) aid_size_max_handle

0x9f40,	// (0x00044b21) aid_size_min_handle

0xb845,	// (0x00046426) editor_scroll_pane

0xdff5,	// (0x00048bd6) ex_editor_pane

0x9e54,	// (0x00044a35) scroll_pane_cp13

0x9ca2,	// (0x00044883) scroll_pane_cp14

0xb3d5,	// (0x00045fb6) scroll_pane_cp36

0x9fe8,	// (0x00044bc9) list_single_graphic_hl_pane_cp2_ParamLimits

0x9fe8,	// (0x00044bc9) list_single_graphic_hl_pane_cp2

0x0e0e,	// (0x0003b9ef) list_single_graphic_hl_pane_ParamLimits

0x0e0e,	// (0x0003b9ef) list_single_graphic_hl_pane

0x8016,	// (0x00042bf7) aid_size_min_hl_cp1

0xdffd,	// (0x00048bde) list_highlight_pane_cp34_ParamLimits

0xdffd,	// (0x00048bde) list_highlight_pane_cp34

0xe00e,	// (0x00048bef) list_single_graphic_hl_pane_g1_ParamLimits

0xe00e,	// (0x00048bef) list_single_graphic_hl_pane_g1

0xf35e,	// (0x00049f3f) list_single_graphic_hl_pane_g2_ParamLimits

0xf35e,	// (0x00049f3f) list_single_graphic_hl_pane_g2

0xf35e,	// (0x00049f3f) list_single_graphic_hl_pane_g3_ParamLimits

0xf35e,	// (0x00049f3f) list_single_graphic_hl_pane_g3

0x9d0c,	// (0x000448ed) list_single_graphic_hl_pane_g4_ParamLimits

0x9d0c,	// (0x000448ed) list_single_graphic_hl_pane_g4

0x9d18,	// (0x000448f9) list_single_graphic_hl_pane_g5_ParamLimits

0x9d18,	// (0x000448f9) list_single_graphic_hl_pane_g5

0x0004,

0xfbc4,	// (0x0004a7a5) list_single_graphic_hl_pane_g_ParamLimits

0xfbc4,	// (0x0004a7a5) list_single_graphic_hl_pane_g

0xf36a,	// (0x00049f4b) list_single_graphic_hl_pane_t1_ParamLimits

0xf36a,	// (0x00049f4b) list_single_graphic_hl_pane_t1

0xe01b,	// (0x00048bfc) aid_size_min_hl_cp2

0xe024,	// (0x00048c05) list_highlight_pane_cp34_cp2_ParamLimits

0xe024,	// (0x00048c05) list_highlight_pane_cp34_cp2

0xe00e,	// (0x00048bef) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xe00e,	// (0x00048bef) list_single_graphic_hl_pane_g1_cp2

0xe031,	// (0x00048c12) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xe031,	// (0x00048c12) list_single_graphic_hl_pane_g2_cp2

0xe03d,	// (0x00048c1e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xe03d,	// (0x00048c1e) list_single_graphic_hl_pane_g3_cp2

0xb6bf,	// (0x000462a0) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xb6bf,	// (0x000462a0) list_single_graphic_hl_pane_g4_cp2

0xde14,	// (0x000489f5) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xde14,	// (0x000489f5) list_single_graphic_hl_pane_g5_cp2

0xa1c2,	// (0x00044da3) control_pane_g4_ParamLimits

0xa1c2,	// (0x00044da3) control_pane_g4

0xb0cf,	// (0x00045cb0) bg_popup_sub_pane_cp10_ParamLimits

0xd97f,	// (0x00048560) list_choice_list_pane_ParamLimits

0xd98e,	// (0x0004856f) scroll_pane_cp23

0x9857,	// (0x00044438) bg_popup_preview_window_pane_cp02_ParamLimits

0xde50,	// (0x00048a31) list_preview_fixed_pane_ParamLimits

0xde66,	// (0x00048a47) list_preview_fixed_pane_cp_ParamLimits

0xde66,	// (0x00048a47) list_preview_fixed_pane_cp

0xde72,	// (0x00048a53) popup_preview_fixed_window_g1_ParamLimits

0xde72,	// (0x00048a53) popup_preview_fixed_window_g1

0xde7e,	// (0x00048a5f) popup_preview_fixed_window_g2_ParamLimits

0xde7e,	// (0x00048a5f) popup_preview_fixed_window_g2

0x0002,

0xfb4c,	// (0x0004a72d) popup_preview_fixed_window_g_ParamLimits

0xfb4c,	// (0x0004a72d) popup_preview_fixed_window_g

0x4a25,	// (0x0003f606) aid_navi_side_left_pane_ParamLimits

0x4a35,	// (0x0003f616) aid_navi_side_right_pane_ParamLimits

0x4a44,	// (0x0003f625) navi_icon_pane_stacon_ParamLimits

0x4a54,	// (0x0003f635) navi_navi_pane_stacon_ParamLimits

0x4a44,	// (0x0003f625) navi_text_pane_stacon_ParamLimits

0x46d8,	// (0x0003f2b9) main_text_info_pane

0xe05f,	// (0x00048c40) listscroll_text_info_pane

0xe067,	// (0x00048c48) list_text_info_pane_ParamLimits

0xe067,	// (0x00048c48) list_text_info_pane

0xe076,	// (0x00048c57) scroll_pane_cp24_ParamLimits

0xe076,	// (0x00048c57) scroll_pane_cp24

0x11d5,	// (0x0003bdb6) list_text_info_pane_t1_ParamLimits

0x11d5,	// (0x0003bdb6) list_text_info_pane_t1

0xa334,	// (0x00044f15) popup_fast_swap2_window_ParamLimits

0xa334,	// (0x00044f15) popup_fast_swap2_window

0xe094,	// (0x00048c75) aid_size_cell_fast2

0x9488,	// (0x00044069) bg_popup_window_pane_cp17

0xbfc8,	// (0x00046ba9) heading_pane_cp2

0xbfd0,	// (0x00046bb1) listscroll_fast2_pane

0xe09e,	// (0x00048c7f) grid_fast2_pane

0xe0a6,	// (0x00048c87) listscroll_fast2_pane_g1

0xe0ae,	// (0x00048c8f) listscroll_fast2_pane_g2

0x0001,

0xfbcf,	// (0x0004a7b0) listscroll_fast2_pane_g

0x9e54,	// (0x00044a35) scroll_pane_cp26

0xe0b6,	// (0x00048c97) cell_fast2_pane_ParamLimits

0xe0b6,	// (0x00048c97) cell_fast2_pane

0xe0cc,	// (0x00048cad) cell_fast2_pane_g1

0xe0d5,	// (0x00048cb6) cell_fast2_pane_g2

0xe0de,	// (0x00048cbf) cell_fast2_pane_g3

0x0002,

0xfbd4,	// (0x0004a7b5) cell_fast2_pane_g

0x9b03,	// (0x000446e4) grid_highlight_pane_cp9

0x4ee5,	// (0x0003fac6) main_eswt_pane_ParamLimits

0x4ee5,	// (0x0003fac6) main_eswt_pane

0xe08b,	// (0x00048c6c) list_single_text_info_pane

0xe0e6,	// (0x00048cc7) eswt_ctrl_button_pane

0xe0e6,	// (0x00048cc7) eswt_ctrl_canvas_pane

0xe0ee,	// (0x00048ccf) eswt_ctrl_combo_pane

0xe0e6,	// (0x00048cc7) eswt_ctrl_default_pane

0xe0e6,	// (0x00048cc7) eswt_ctrl_label_pane

0xe0f6,	// (0x00048cd7) eswt_ctrl_wait_pane

0xe0fe,	// (0x00048cdf) eswt_shell_pane

0x9488,	// (0x00044069) listscroll_eswt_app_pane

0xe11a,	// (0x00048cfb) popup_eswt_tasktip_window_ParamLimits

0xe11a,	// (0x00048cfb) popup_eswt_tasktip_window

0xbc92,	// (0x00046873) bg_popup_window_pane_cp18

0xe12b,	// (0x00048d0c) eswt_control_pane_g1_ParamLimits

0xe12b,	// (0x00048d0c) eswt_control_pane_g1

0xe138,	// (0x00048d19) eswt_control_pane_g2_ParamLimits

0xe138,	// (0x00048d19) eswt_control_pane_g2

0xe145,	// (0x00048d26) eswt_control_pane_g3_ParamLimits

0xe145,	// (0x00048d26) eswt_control_pane_g3

0xe152,	// (0x00048d33) eswt_control_pane_g4_ParamLimits

0xe152,	// (0x00048d33) eswt_control_pane_g4

0x0003,

0xfbdb,	// (0x0004a7bc) eswt_control_pane_g_ParamLimits

0xfbdb,	// (0x0004a7bc) eswt_control_pane_g

0x9cf2,	// (0x000448d3) bg_button_pane_ParamLimits

0x9cf2,	// (0x000448d3) bg_button_pane

0x9b18,	// (0x000446f9) common_borders_pane_copy2_ParamLimits

0x9b18,	// (0x000446f9) common_borders_pane_copy2

0xe15f,	// (0x00048d40) control_button_pane_g1_ParamLimits

0xe15f,	// (0x00048d40) control_button_pane_g1

0xe16b,	// (0x00048d4c) control_button_pane_g2_ParamLimits

0xe16b,	// (0x00048d4c) control_button_pane_g2

0xe177,	// (0x00048d58) control_button_pane_g3_ParamLimits

0xe177,	// (0x00048d58) control_button_pane_g3

0x0002,

0xfbe4,	// (0x0004a7c5) control_button_pane_g_ParamLimits

0xfbe4,	// (0x0004a7c5) control_button_pane_g

0xe18b,	// (0x00048d6c) control_button_pane_t1

0xe199,	// (0x00048d7a) control_button_pane_t2

0x0001,

0xfbeb,	// (0x0004a7cc) control_button_pane_t

0xbc1e,	// (0x000467ff) bg_button_pane_g1

0xbc2e,	// (0x0004680f) bg_button_pane_g2

0xbc26,	// (0x00046807) bg_button_pane_g3

0xbc3e,	// (0x0004681f) bg_button_pane_g4

0xbc36,	// (0x00046817) bg_button_pane_g5

0xbc46,	// (0x00046827) bg_button_pane_g6

0xbc4e,	// (0x0004682f) bg_button_pane_g7

0xbc5e,	// (0x0004683f) bg_button_pane_g8

0xbc56,	// (0x00046837) bg_button_pane_g9

0x0008,

0xf83a,	// (0x0004a41b) bg_button_pane_g

0xd93a,	// (0x0004851b) common_borders_pane_ParamLimits

0xd93a,	// (0x0004851b) common_borders_pane

0xe12b,	// (0x00048d0c) eswt_control_pane_g1_copy1_ParamLimits

0xe12b,	// (0x00048d0c) eswt_control_pane_g1_copy1

0xe138,	// (0x00048d19) eswt_control_pane_g2_copy1_ParamLimits

0xe138,	// (0x00048d19) eswt_control_pane_g2_copy1

0xe145,	// (0x00048d26) eswt_control_pane_g3_copy1_ParamLimits

0xe145,	// (0x00048d26) eswt_control_pane_g3_copy1

0xe152,	// (0x00048d33) eswt_control_pane_g4_copy1_ParamLimits

0xe152,	// (0x00048d33) eswt_control_pane_g4_copy1

0xd975,	// (0x00048556) bg_eswt_ctrl_canvas_pane_g1

0xd93a,	// (0x0004851b) common_borders_pane_cp2_ParamLimits

0xd93a,	// (0x0004851b) common_borders_pane_cp2

0xd93a,	// (0x0004851b) common_borders_pane_cp3_ParamLimits

0xd93a,	// (0x0004851b) common_borders_pane_cp3

0xe1a7,	// (0x00048d88) separator_horizontal_pane

0xb23e,	// (0x00045e1f) separator_vertical_pane

0xe12b,	// (0x00048d0c) eswt_control_pane_g1_copy2_ParamLimits

0xe12b,	// (0x00048d0c) eswt_control_pane_g1_copy2

0xe138,	// (0x00048d19) eswt_control_pane_g2_copy2_ParamLimits

0xe138,	// (0x00048d19) eswt_control_pane_g2_copy2

0xe145,	// (0x00048d26) eswt_control_pane_g3_copy2_ParamLimits

0xe145,	// (0x00048d26) eswt_control_pane_g3_copy2

0xe152,	// (0x00048d33) eswt_control_pane_g4_copy2_ParamLimits

0xe152,	// (0x00048d33) eswt_control_pane_g4_copy2

0x9488,	// (0x00044069) common_borders_pane_cp4

0xe1af,	// (0x00048d90) separator_horizontal_pane_g1

0xe1b8,	// (0x00048d99) separator_horizontal_pane_g2

0xe1c1,	// (0x00048da2) separator_horizontal_pane_g3

0x0002,

0xfbf0,	// (0x0004a7d1) separator_horizontal_pane_g

0xe12b,	// (0x00048d0c) eswt_control_pane_g1_copy3_ParamLimits

0xe12b,	// (0x00048d0c) eswt_control_pane_g1_copy3

0xe138,	// (0x00048d19) eswt_control_pane_g2_copy3_ParamLimits

0xe138,	// (0x00048d19) eswt_control_pane_g2_copy3

0xe145,	// (0x00048d26) eswt_control_pane_g3_copy3_ParamLimits

0xe145,	// (0x00048d26) eswt_control_pane_g3_copy3

0xe152,	// (0x00048d33) eswt_control_pane_g4_copy3_ParamLimits

0xe152,	// (0x00048d33) eswt_control_pane_g4_copy3

0x9488,	// (0x00044069) common_borders_pane_cp5

0xe1ca,	// (0x00048dab) separator_vertical_pane_g1

0xe1d3,	// (0x00048db4) separator_vertical_pane_g2

0xe1dc,	// (0x00048dbd) separator_vertical_pane_g3

0x0002,

0xfbf7,	// (0x0004a7d8) separator_vertical_pane_g

0xe12b,	// (0x00048d0c) eswt_control_pane_g1_copy4_ParamLimits

0xe12b,	// (0x00048d0c) eswt_control_pane_g1_copy4

0xe138,	// (0x00048d19) eswt_control_pane_g2_copy4_ParamLimits

0xe138,	// (0x00048d19) eswt_control_pane_g2_copy4

0xe145,	// (0x00048d26) eswt_control_pane_g3_copy4_ParamLimits

0xe145,	// (0x00048d26) eswt_control_pane_g3_copy4

0xe152,	// (0x00048d33) eswt_control_pane_g4_copy4_ParamLimits

0xe152,	// (0x00048d33) eswt_control_pane_g4_copy4

0x11f0,	// (0x0003bdd1) eswt_ctrl_combo_button_pane

0x11f8,	// (0x0003bdd9) eswt_ctrl_input_pane

0x1200,	// (0x0003bde1) popup_choice_list_window_cp70

0x1208,	// (0x0003bde9) eswt_ctrl_input_pane_t1

0x9488,	// (0x00044069) input_focus_pane_cp70

0xd93a,	// (0x0004851b) bg_button_pane_cp70_ParamLimits

0xd93a,	// (0x0004851b) bg_button_pane_cp70

0xcfe2,	// (0x00047bc3) eswt_ctrl_combo_button_pane_g1

0xe1e5,	// (0x00048dc6) wait_bar_pane_cp70

0xbc92,	// (0x00046873) bg_popup_window_pane_cp70_ParamLimits

0xbc92,	// (0x00046873) bg_popup_window_pane_cp70

0xe1ed,	// (0x00048dce) popup_eswt_tasktip_window_t1

0xe203,	// (0x00048de4) wait_bar_pane_cp71_ParamLimits

0xe203,	// (0x00048de4) wait_bar_pane_cp71

0xe20f,	// (0x00048df0) grid_eswt_app_pane

0xb235,	// (0x00045e16) scroll_pane_cp70

0x1216,	// (0x0003bdf7) cell_eswt_app_pane_ParamLimits

0x1216,	// (0x0003bdf7) cell_eswt_app_pane

0x123e,	// (0x0003be1f) cell_eswt_app_pane_g1_ParamLimits

0x123e,	// (0x0003be1f) cell_eswt_app_pane_g1

0x126d,	// (0x0003be4e) cell_eswt_app_pane_g2_ParamLimits

0x126d,	// (0x0003be4e) cell_eswt_app_pane_g2

0x0001,

0xfbfe,	// (0x0004a7df) cell_eswt_app_pane_g_ParamLimits

0xfbfe,	// (0x0004a7df) cell_eswt_app_pane_g

0x1296,	// (0x0003be77) cell_eswt_app_pane_t1_ParamLimits

0x1296,	// (0x0003be77) cell_eswt_app_pane_t1

0xe218,	// (0x00048df9) grid_highlight_pane_cp70_ParamLimits

0xe218,	// (0x00048df9) grid_highlight_pane_cp70

0x9d0c,	// (0x000448ed) set_content_pane_g1

0xa185,	// (0x00044d66) status_small_volume_pane

0xaac0,	// (0x000456a1) status_small_volume_pane_g1

0xaac8,	// (0x000456a9) volume_small2_pane

0xaad1,	// (0x000456b2) volume_small2_pane_g1

0xaada,	// (0x000456bb) volume_small2_pane_g2

0xaae3,	// (0x000456c4) volume_small2_pane_g3

0xaaec,	// (0x000456cd) volume_small2_pane_g4

0xaaf5,	// (0x000456d6) volume_small2_pane_g5

0xaafe,	// (0x000456df) volume_small2_pane_g6

0xab07,	// (0x000456e8) volume_small2_pane_g7

0xab10,	// (0x000456f1) volume_small2_pane_g8

0xab19,	// (0x000456fa) volume_small2_pane_g9

0xab22,	// (0x00045703) volume_small2_pane_g10

0x0009,

0xfc03,	// (0x0004a7e4) volume_small2_pane_g

0xdca8,	// (0x00048889) fep_vkb_top_text_pane_g1_ParamLimits

0x115d,	// (0x0003bd3e) fep_vkb_top_text_pane_t1_ParamLimits

0xde8a,	// (0x00048a6b) popup_preview_fixed_window_g3_ParamLimits

0xde8a,	// (0x00048a6b) popup_preview_fixed_window_g3

0xa854,	// (0x00045435) popup_toolbar_trans_pane

0xcd61,	// (0x00047942) aid_height_set_list_ParamLimits

0xcd6d,	// (0x0004794e) aid_size_parent_ParamLimits

0xb0cf,	// (0x00045cb0) list_highlight_pane_cp2_ParamLimits

0x9d0c,	// (0x000448ed) set_content_pane_g1_ParamLimits

0x9ec8,	// (0x00044aa9) list_single_image_pane_ParamLimits

0x9ec8,	// (0x00044aa9) list_single_image_pane

0x1333,	// (0x0003bf14) aid_size_cell_image_ParamLimits

0x1333,	// (0x0003bf14) aid_size_cell_image

0x1340,	// (0x0003bf21) grid_single_image_pane_ParamLimits

0x1340,	// (0x0003bf21) grid_single_image_pane

0x9d0c,	// (0x000448ed) list_single_image_pane_g1_ParamLimits

0x9d0c,	// (0x000448ed) list_single_image_pane_g1

0x9d18,	// (0x000448f9) list_single_image_pane_g2_ParamLimits

0x9d18,	// (0x000448f9) list_single_image_pane_g2

0x0001,

0xfc18,	// (0x0004a7f9) list_single_image_pane_g_ParamLimits

0xfc18,	// (0x0004a7f9) list_single_image_pane_g

0xe224,	// (0x00048e05) list_single_image_pane_t1_ParamLimits

0xe224,	// (0x00048e05) list_single_image_pane_t1

0x134e,	// (0x0003bf2f) cell_image_list_pane_ParamLimits

0x134e,	// (0x0003bf2f) cell_image_list_pane

0x1362,	// (0x0003bf43) cell_image_list_pane_g1

0x136b,	// (0x0003bf4c) cell_image_list_pane_g2

0x0001,

0xfc1d,	// (0x0004a7fe) cell_image_list_pane_g

0xe23a,	// (0x00048e1b) aid_size_cell_tb_trans_pane

0x9cf2,	// (0x000448d3) bg_tb_trans_pane

0xe24c,	// (0x00048e2d) grid_tb_trans_pane

0xbc1e,	// (0x000467ff) bg_tb_trans_pane_g1

0xbc2e,	// (0x0004680f) bg_tb_trans_pane_g2

0xbc26,	// (0x00046807) bg_tb_trans_pane_g3

0xbc3e,	// (0x0004681f) bg_tb_trans_pane_g4

0xbc36,	// (0x00046817) bg_tb_trans_pane_g5

0xbc5e,	// (0x0004683f) bg_tb_trans_pane_g6

0xbc56,	// (0x00046837) bg_tb_trans_pane_g7

0xbc46,	// (0x00046827) bg_tb_trans_pane_g8

0xbc4e,	// (0x0004682f) bg_tb_trans_pane_g9

0x0008,

0xfc22,	// (0x0004a803) bg_tb_trans_pane_g

0xe260,	// (0x00048e41) cell_toolbar_trans_pane_ParamLimits

0xe260,	// (0x00048e41) cell_toolbar_trans_pane

0xd975,	// (0x00048556) cell_toolbar_trans_pane_g1

0x105a,	// (0x0003bc3b) list_form2_midp_pane_t1

0x1068,	// (0x0003bc49) list_form2_midp_pane_t2

0x0001,

0xfabf,	// (0x0004a6a0) list_form2_midp_pane_t

0xd649,	// (0x0004822a) scroll_pane_cp51_ParamLimits

0xd7bf,	// (0x000483a0) form2_midp_wait_pane_g1

0xd7c8,	// (0x000483a9) form2_midp_wait_pane_g2

0xd7d1,	// (0x000483b2) form2_midp_wait_pane_g3

0x0002,

0xfad4,	// (0x0004a6b5) form2_midp_wait_pane_g

0x96ce,	// (0x000442af) list_highlight_pane_cp21_ParamLimits

0xd80f,	// (0x000483f0) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xd81e,	// (0x000483ff) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x7b87,	// (0x00042768) list_single_2graphic_im_pane_ParamLimits

0x7b87,	// (0x00042768) list_single_2graphic_im_pane

0x1374,	// (0x0003bf55) list_single_2graphic_im_pane_g1_ParamLimits

0x1374,	// (0x0003bf55) list_single_2graphic_im_pane_g1

0x1385,	// (0x0003bf66) list_single_2graphic_im_pane_g2_ParamLimits

0x1385,	// (0x0003bf66) list_single_2graphic_im_pane_g2

0x1391,	// (0x0003bf72) list_single_2graphic_im_pane_g3_ParamLimits

0x1391,	// (0x0003bf72) list_single_2graphic_im_pane_g3

0x0003,

0xfc35,	// (0x0004a816) list_single_2graphic_im_pane_g_ParamLimits

0xfc35,	// (0x0004a816) list_single_2graphic_im_pane_g

0x13a5,	// (0x0003bf86) list_single_2graphic_im_pane_t1_ParamLimits

0x13a5,	// (0x0003bf86) list_single_2graphic_im_pane_t1

0xde96,	// (0x00048a77) list_single_graphic_2heading_pane_fp_ParamLimits

0xde96,	// (0x00048a77) list_single_graphic_2heading_pane_fp

0x7ef8,	// (0x00042ad9) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7ef8,	// (0x00042ad9) list_single_graphic_2heading_pane_fp_g1

0xdeaa,	// (0x00048a8b) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xdeaa,	// (0x00048a8b) list_single_graphic_2heading_pane_fp_g2

0x749d,	// (0x0004207e) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x749d,	// (0x0004207e) list_single_graphic_2heading_pane_fp_g3

0x81d5,	// (0x00042db6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x81d5,	// (0x00042db6) list_single_graphic_2heading_pane_fp_g4

0xdeb6,	// (0x00048a97) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xdeb6,	// (0x00048a97) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x0004a73d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x0004a73d) list_single_graphic_2heading_pane_fp_g

0x802b,	// (0x00042c0c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x802b,	// (0x00042c0c) list_single_graphic_2heading_pane_fp_t1

0x7f30,	// (0x00042b11) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7f30,	// (0x00042b11) list_single_graphic_2heading_pane_fp_t2

0x8041,	// (0x00042c22) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x8041,	// (0x00042c22) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3e,	// (0x0004a81f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3e,	// (0x0004a81f) list_single_graphic_2heading_pane_fp_t

0xd9fe,	// (0x000485df) fep_hwr_write_pane_g5_ParamLimits

0xd9fe,	// (0x000485df) fep_hwr_write_pane_g5

0xda0a,	// (0x000485eb) fep_hwr_write_pane_g6_ParamLimits

0xda0a,	// (0x000485eb) fep_hwr_write_pane_g6

0xe0fe,	// (0x00048cdf) eswt_shell_pane_ParamLimits

0xbc92,	// (0x00046873) bg_popup_window_pane_cp18_ParamLimits

0xcd05,	// (0x000478e6) heading_pane_cp70

0xe1ed,	// (0x00048dce) popup_eswt_tasktip_window_t1_ParamLimits

0x059b,	// (0x0003b17c) aid_touch_tab_arrow_left

0x05af,	// (0x0003b190) aid_touch_tab_arrow_right

0x37e4,	// (0x0003e3c5) title_pane_g3_ParamLimits

0x37e4,	// (0x0003e3c5) title_pane_g3

0x9cc2,	// (0x000448a3) set_value_pane_g1

0xa854,	// (0x00045435) popup_toolbar_trans_pane_ParamLimits

0xe23a,	// (0x00048e1b) aid_size_cell_tb_trans_pane_ParamLimits

0x9cf2,	// (0x000448d3) bg_tb_trans_pane_ParamLimits

0xe24c,	// (0x00048e2d) grid_tb_trans_pane_ParamLimits

0x9857,	// (0x00044438) cont_note_pane_ParamLimits

0x9857,	// (0x00044438) cont_note_pane

0x9b18,	// (0x000446f9) cont_snote2_single_text_pane_ParamLimits

0x9b18,	// (0x000446f9) cont_snote2_single_text_pane

0x9b18,	// (0x000446f9) cont_snote2_single_graphic_pane_ParamLimits

0x9b18,	// (0x000446f9) cont_snote2_single_graphic_pane

0xc1e6,	// (0x00046dc7) cont_note_wait_pane_ParamLimits

0xc1e6,	// (0x00046dc7) cont_note_wait_pane

0xc1e6,	// (0x00046dc7) cont_note_image_pane_ParamLimits

0xc1e6,	// (0x00046dc7) cont_note_image_pane

0xe292,	// (0x00048e73) popup_note2_window_g1_ParamLimits

0xe292,	// (0x00048e73) popup_note2_window_g1

0xe2c3,	// (0x00048ea4) popup_note2_window_t1_ParamLimits

0xe2c3,	// (0x00048ea4) popup_note2_window_t1

0xe308,	// (0x00048ee9) popup_note2_window_t2_ParamLimits

0xe308,	// (0x00048ee9) popup_note2_window_t2

0xe34d,	// (0x00048f2e) popup_note2_window_t3_ParamLimits

0xe34d,	// (0x00048f2e) popup_note2_window_t3

0xe392,	// (0x00048f73) popup_note2_window_t4_ParamLimits

0xe392,	// (0x00048f73) popup_note2_window_t4

0x98db,	// (0x000444bc) popup_note2_window_t5_ParamLimits

0x98db,	// (0x000444bc) popup_note2_window_t5

0x0004,

0xfc4a,	// (0x0004a82b) popup_note2_window_t_ParamLimits

0xfc4a,	// (0x0004a82b) popup_note2_window_t

0xe3c1,	// (0x00048fa2) popup_note2_image_window_g1_ParamLimits

0xe3c1,	// (0x00048fa2) popup_note2_image_window_g1

0xe3cd,	// (0x00048fae) popup_note2_image_window_g2_ParamLimits

0xe3cd,	// (0x00048fae) popup_note2_image_window_g2

0x0001,

0xfc55,	// (0x0004a836) popup_note2_image_window_g_ParamLimits

0xfc55,	// (0x0004a836) popup_note2_image_window_g

0xe3df,	// (0x00048fc0) popup_note2_image_window_t1_ParamLimits

0xe3df,	// (0x00048fc0) popup_note2_image_window_t1

0xe3f7,	// (0x00048fd8) popup_note2_image_window_t2_ParamLimits

0xe3f7,	// (0x00048fd8) popup_note2_image_window_t2

0xe40f,	// (0x00048ff0) popup_note2_image_window_t3_ParamLimits

0xe40f,	// (0x00048ff0) popup_note2_image_window_t3

0x0002,

0xfc5a,	// (0x0004a83b) popup_note2_image_window_t_ParamLimits

0xfc5a,	// (0x0004a83b) popup_note2_image_window_t

0xc1f4,	// (0x00046dd5) popup_note2_wait_window_g1_ParamLimits

0xc1f4,	// (0x00046dd5) popup_note2_wait_window_g1

0xc200,	// (0x00046de1) popup_note2_wait_window_g2_ParamLimits

0xc200,	// (0x00046de1) popup_note2_wait_window_g2

0xc20c,	// (0x00046ded) popup_note2_wait_window_g3_ParamLimits

0xc20c,	// (0x00046ded) popup_note2_wait_window_g3

0x0002,

0xf81c,	// (0x0004a3fd) popup_note2_wait_window_g_ParamLimits

0xf81c,	// (0x0004a3fd) popup_note2_wait_window_g

0xe42b,	// (0x0004900c) popup_note2_wait_window_t1_ParamLimits

0xe42b,	// (0x0004900c) popup_note2_wait_window_t1

0xe449,	// (0x0004902a) popup_note2_wait_window_t2_ParamLimits

0xe449,	// (0x0004902a) popup_note2_wait_window_t2

0xe467,	// (0x00049048) popup_note2_wait_window_t3_ParamLimits

0xe467,	// (0x00049048) popup_note2_wait_window_t3

0xe479,	// (0x0004905a) popup_note2_wait_window_t4_ParamLimits

0xe479,	// (0x0004905a) popup_note2_wait_window_t4

0x0003,

0xfc61,	// (0x0004a842) popup_note2_wait_window_t_ParamLimits

0xfc61,	// (0x0004a842) popup_note2_wait_window_t

0xe48b,	// (0x0004906c) wait_bar2_pane_ParamLimits

0xe48b,	// (0x0004906c) wait_bar2_pane

0xe4a3,	// (0x00049084) popup_snote2_single_text_window_g1_ParamLimits

0xe4a3,	// (0x00049084) popup_snote2_single_text_window_g1

0xe4cb,	// (0x000490ac) popup_snote2_single_text_window_t1_ParamLimits

0xe4cb,	// (0x000490ac) popup_snote2_single_text_window_t1

0xe517,	// (0x000490f8) popup_snote2_single_text_window_t2_ParamLimits

0xe517,	// (0x000490f8) popup_snote2_single_text_window_t2

0xe563,	// (0x00049144) popup_snote2_single_text_window_t3_ParamLimits

0xe563,	// (0x00049144) popup_snote2_single_text_window_t3

0xe5a4,	// (0x00049185) popup_snote2_single_text_window_t4_ParamLimits

0xe5a4,	// (0x00049185) popup_snote2_single_text_window_t4

0xe5da,	// (0x000491bb) popup_snote2_single_text_window_t5_ParamLimits

0xe5da,	// (0x000491bb) popup_snote2_single_text_window_t5

0x0004,

0xfc6a,	// (0x0004a84b) popup_snote2_single_text_window_t_ParamLimits

0xfc6a,	// (0x0004a84b) popup_snote2_single_text_window_t

0xe605,	// (0x000491e6) popup_snote2_single_graphic_window_g1_ParamLimits

0xe605,	// (0x000491e6) popup_snote2_single_graphic_window_g1

0xe62d,	// (0x0004920e) popup_snote2_single_graphic_window_g2_ParamLimits

0xe62d,	// (0x0004920e) popup_snote2_single_graphic_window_g2

0x0001,

0xfc75,	// (0x0004a856) popup_snote2_single_graphic_window_g_ParamLimits

0xfc75,	// (0x0004a856) popup_snote2_single_graphic_window_g

0xe655,	// (0x00049236) popup_snote2_single_graphic_window_t1_ParamLimits

0xe655,	// (0x00049236) popup_snote2_single_graphic_window_t1

0xe6a1,	// (0x00049282) popup_snote2_single_graphic_window_t2_ParamLimits

0xe6a1,	// (0x00049282) popup_snote2_single_graphic_window_t2

0xe563,	// (0x00049144) popup_snote2_single_graphic_window_t3_ParamLimits

0xe563,	// (0x00049144) popup_snote2_single_graphic_window_t3

0xe5a4,	// (0x00049185) popup_snote2_single_graphic_window_t4_ParamLimits

0xe5a4,	// (0x00049185) popup_snote2_single_graphic_window_t4

0xe5da,	// (0x000491bb) popup_snote2_single_graphic_window_t5_ParamLimits

0xe5da,	// (0x000491bb) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7a,	// (0x0004a85b) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7a,	// (0x0004a85b) popup_snote2_single_graphic_window_t

0xd5e2,	// (0x000481c3) clock_nsta_pane_cp2_t1

0xd5e2,	// (0x000481c3) clock_nsta_pane_cp2_t2

0x0001,

0xfa95,	// (0x0004a676) clock_nsta_pane_cp2_t

0x783f,	// (0x00042420) form_field_data_wide_pane_g1_ParamLimits

0x9d0c,	// (0x000448ed) form_field_data_wide_pane_g2_ParamLimits

0x9d0c,	// (0x000448ed) form_field_data_wide_pane_g2

0x9d18,	// (0x000448f9) form_field_data_wide_pane_g3_ParamLimits

0x9d18,	// (0x000448f9) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x0004a23c) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x0004a23c) form_field_data_wide_pane_g

0x0f97,	// (0x0003bb78) grid_touch_3_pane_ParamLimits

0x0f97,	// (0x0003bb78) grid_touch_3_pane

0x13d6,	// (0x0003bfb7) cell_touch_3_pane_ParamLimits

0x13d6,	// (0x0003bfb7) cell_touch_3_pane

0xd975,	// (0x00048556) cell_touch_3_pane_g1

0xd975,	// (0x00048556) cell_touch_3_pane_g2

0x0001,

0xfb1a,	// (0x0004a6fb) cell_touch_3_pane_g

0x9933,	// (0x00044514) cont_query_data_pane

0x993b,	// (0x0004451c) cont_query_data_pane_cp1

0xe6ed,	// (0x000492ce) button_value_adjust_pane_cp7

0xe6f5,	// (0x000492d6) query_popup_pane_cp3

0xb3e6,	// (0x00045fc7) bg_popup_sub_pane_cp22_ParamLimits

0x4b4b,	// (0x0003f72c) navi_navi_volume_pane_cp2

0x4b63,	// (0x0003f744) popup_side_volume_key_window_g2

0x4b6f,	// (0x0003f750) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x0004a2d2) popup_side_volume_key_window_g

0x4b89,	// (0x0003f76a) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x0004a2d9) popup_side_volume_key_window_t

0xb642,	// (0x00046223) popup_side_volume_key_window_ParamLimits

0xee63,	// (0x00049a44) list_double_graphic_pane_g4_ParamLimits

0xee63,	// (0x00049a44) list_double_graphic_pane_g4

0x0df9,	// (0x0003b9da) list_single_2heading_msg_pane_ParamLimits

0x0df9,	// (0x0003b9da) list_single_2heading_msg_pane

0x141d,	// (0x0003bffe) list_single_2heading_msg_pane_g1_ParamLimits

0x141d,	// (0x0003bffe) list_single_2heading_msg_pane_g1

0x1429,	// (0x0003c00a) list_single_2heading_msg_pane_g2_ParamLimits

0x1429,	// (0x0003c00a) list_single_2heading_msg_pane_g2

0x143c,	// (0x0003c01d) list_single_2heading_msg_pane_g3_ParamLimits

0x143c,	// (0x0003c01d) list_single_2heading_msg_pane_g3

0x1448,	// (0x0003c029) list_single_2heading_msg_pane_g4_ParamLimits

0x1448,	// (0x0003c029) list_single_2heading_msg_pane_g4

0x0003,

0xfc85,	// (0x0004a866) list_single_2heading_msg_pane_g_ParamLimits

0xfc85,	// (0x0004a866) list_single_2heading_msg_pane_g

0xf380,	// (0x00049f61) list_single_2heading_msg_pane_t1_ParamLimits

0xf380,	// (0x00049f61) list_single_2heading_msg_pane_t1

0xf422,	// (0x0004a003) list_single_2heading_msg_pane_t2_ParamLimits

0xf422,	// (0x0004a003) list_single_2heading_msg_pane_t2

0xf48d,	// (0x0004a06e) list_single_2heading_msg_pane_t3_ParamLimits

0xf48d,	// (0x0004a06e) list_single_2heading_msg_pane_t3

0x811f,	// (0x00042d00) list_single_2heading_msg_pane_t4_ParamLimits

0x811f,	// (0x00042d00) list_single_2heading_msg_pane_t4

0x0003,

0xfc8e,	// (0x0004a86f) list_single_2heading_msg_pane_t_ParamLimits

0xfc8e,	// (0x0004a86f) list_single_2heading_msg_pane_t

0x966c,	// (0x0004424d) title_pane_g4_ParamLimits

0x966c,	// (0x0004424d) title_pane_g4

0x499b,	// (0x0003f57c) title_pane_stacon_g3_ParamLimits

0x499b,	// (0x0003f57c) title_pane_stacon_g3

0xe286,	// (0x00048e67) list_single_2graphic_im_pane_g4_ParamLimits

0xe286,	// (0x00048e67) list_single_2graphic_im_pane_g4

0xcaea,	// (0x000476cb) popup_side_volume_key_window_cp

0xcf4e,	// (0x00047b2f) main_idle_act2_pane_t1

0x53a9,	// (0x0003ff8a) toolbar_button_pane_g10

0x3aeb,	// (0x0003e6cc) popup_toolbar_window_cp1

0xd5d3,	// (0x000481b4) clock_nsta_pane_cp_t1

0xd5d3,	// (0x000481b4) clock_nsta_pane_cp_t2

0x0001,

0xfa90,	// (0x0004a671) clock_nsta_pane_cp_t

0x4b4b,	// (0x0003f72c) navi_navi_volume_pane_cp2_ParamLimits

0x4b57,	// (0x0003f738) popup_side_volume_key_window_g1_ParamLimits

0x4b63,	// (0x0003f744) popup_side_volume_key_window_g2_ParamLimits

0x4b6f,	// (0x0003f750) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x0004a2d2) popup_side_volume_key_window_g_ParamLimits

0x583f,	// (0x00040420) fep_hwr_aid_pane

0x58e0,	// (0x000404c1) bg_fep_hwr_top_pane_g4_ParamLimits

0xd9ce,	// (0x000485af) fep_hwr_top_pane_g1_ParamLimits

0xd9e0,	// (0x000485c1) fep_hwr_top_pane_g2_ParamLimits

0x5900,	// (0x000404e1) fep_hwr_top_pane_g3_ParamLimits

0xfae5,	// (0x0004a6c6) fep_hwr_top_pane_g_ParamLimits

0x5915,	// (0x000404f6) fep_hwr_top_text_pane_ParamLimits

0xc8ea,	// (0x000474cb) aid_touch_tab_arrow_arrow_2

0xc8f3,	// (0x000474d4) aid_touch_tab_arrow_left_2

0x5853,	// (0x00040434) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5886,	// (0x00040467) fep_hwr_prediction_pane

0xdb13,	// (0x000486f4) fep_vkb_prediction_pane

0x113d,	// (0x0003bd1e) fep_vkb_side_pane_g3_ParamLimits

0x113d,	// (0x0003bd1e) fep_vkb_side_pane_g3

0x5b68,	// (0x00040749) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5bd2,	// (0x000407b3) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5bdf,	// (0x000407c0) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb94,	// (0x0004a775) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5f0f,	// (0x00040af0) fep_hwr_prediction_pane_g1

0x5f19,	// (0x00040afa) fep_hwr_prediction_pane_g2

0x5f21,	// (0x00040b02) fep_hwr_prediction_pane_g3

0x5f29,	// (0x00040b0a) fep_hwr_prediction_pane_g4

0x0003,

0xfc97,	// (0x0004a878) fep_hwr_prediction_pane_g

0xe706,	// (0x000492e7) fep_vkb_prediction_pane_g1

0xe710,	// (0x000492f1) fep_vkb_prediction_pane_g2

0xe718,	// (0x000492f9) fep_vkb_prediction_pane_g3

0xe720,	// (0x00049301) fep_vkb_prediction_pane_g4

0x0003,

0xfca0,	// (0x0004a881) fep_vkb_prediction_pane_g

0x5677,	// (0x00040258) slider_set_pane_g3

0x568b,	// (0x0004026c) slider_set_pane_g4

0x56a3,	// (0x00040284) slider_set_pane_g5

0x5677,	// (0x00040258) slider_set_pane_g6

0xaa5d,	// (0x0004563e) slider_set_pane_g7

0xcd90,	// (0x00047971) slider_form_pane_g3

0xcd99,	// (0x0004797a) slider_form_pane_g4

0xcda1,	// (0x00047982) slider_form_pane_g5

0xcd90,	// (0x00047971) slider_form_pane_g6

0x0ddf,	// (0x0003b9c0) slider_form_pane_g7

0xd19f,	// (0x00047d80) slider_set_pane_vc_g3

0xd1a8,	// (0x00047d89) slider_set_pane_vc_g4

0xd1b1,	// (0x00047d92) slider_set_pane_vc_g5

0xd19f,	// (0x00047d80) slider_set_pane_vc_g6

0xd1ba,	// (0x00047d9b) slider_set_pane_vc_g7

0xd19f,	// (0x00047d80) slider_form_pane_vc_g1

0xd1a8,	// (0x00047d89) slider_form_pane_vc_g2

0xd1b1,	// (0x00047d92) slider_form_pane_vc_g3

0xd19f,	// (0x00047d80) slider_form_pane_vc_g4

0xd32e,	// (0x00047f0f) slider_form_pane_vc_g5

0x0004,

0xfa62,	// (0x0004a643) slider_form_pane_vc_g

0x46d8,	// (0x0003f2b9) main_idle_act3_pane

0xe728,	// (0x00049309) ai3_links_pane

0x1460,	// (0x0003c041) popup_ai3_data_window_ParamLimits

0x1460,	// (0x0003c041) popup_ai3_data_window

0x9488,	// (0x00044069) grid_ai3_links_pane

0x1478,	// (0x0003c059) cell_ai3_links_pane_ParamLimits

0x1478,	// (0x0003c059) cell_ai3_links_pane

0xe731,	// (0x00049312) bg_popup_sub_pane_cp11

0xe73e,	// (0x0004931f) cell_ai3_links_pane_g1

0x9488,	// (0x00044069) bg_popup_sub_pane_cp12

0xe763,	// (0x00049344) heading_ai3_data_pane

0xe76b,	// (0x0004934c) list_ai3_gene_pane

0xe777,	// (0x00049358) popup_ai3_data_window_g1

0xe77f,	// (0x00049360) heading_ai3_data_pane_g1

0xe787,	// (0x00049368) heading_ai3_data_pane_t1

0xe795,	// (0x00049376) list_double_ai3_gene_pane_ParamLimits

0xe795,	// (0x00049376) list_double_ai3_gene_pane

0xe7a2,	// (0x00049383) list_single_ai3_gene_pane_ParamLimits

0xe7a2,	// (0x00049383) list_single_ai3_gene_pane

0xd93a,	// (0x0004851b) list_highlight_pane_cp7_ParamLimits

0xd93a,	// (0x0004851b) list_highlight_pane_cp7

0xe7af,	// (0x00049390) list_single_a13_gene_pane_t1_ParamLimits

0xe7af,	// (0x00049390) list_single_a13_gene_pane_t1

0xe7c6,	// (0x000493a7) list_single_ai3_gene_pane_g1

0xe7cf,	// (0x000493b0) list_single_ai3_gene_pane_g2

0x0001,

0xfca9,	// (0x0004a88a) list_single_ai3_gene_pane_g

0xe7d7,	// (0x000493b8) list_double_ai3_gene_pane_g1_ParamLimits

0xe7d7,	// (0x000493b8) list_double_ai3_gene_pane_g1

0xe7e3,	// (0x000493c4) list_double_ai3_gene_pane_t1_ParamLimits

0xe7e3,	// (0x000493c4) list_double_ai3_gene_pane_t1

0xe7ff,	// (0x000493e0) list_double_ai3_gene_pane_t2_ParamLimits

0xe7ff,	// (0x000493e0) list_double_ai3_gene_pane_t2

0xe814,	// (0x000493f5) list_double_ai3_gene_pane_t3_ParamLimits

0xe814,	// (0x000493f5) list_double_ai3_gene_pane_t3

0x0002,

0xfcae,	// (0x0004a88f) list_double_ai3_gene_pane_t_ParamLimits

0xfcae,	// (0x0004a88f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x8057,	// (0x00042c38) aid_size_min_col_2

0x1409,	// (0x0003bfea) aid_size_min_msg_ParamLimits

0x1409,	// (0x0003bfea) aid_size_min_msg

0x1151,	// (0x0003bd32) fep_vkb_top_text_pane_g2_ParamLimits

0x1151,	// (0x0003bd32) fep_vkb_top_text_pane_g2

0x0001,

0xfb15,	// (0x0004a6f6) fep_vkb_top_text_pane_g_ParamLimits

0xfb15,	// (0x0004a6f6) fep_vkb_top_text_pane_g

0x46d8,	// (0x0003f2b9) main_hc_apps_shell_pane

0xe831,	// (0x00049412) grid_hc_apps_pane_ParamLimits

0xe831,	// (0x00049412) grid_hc_apps_pane

0xe843,	// (0x00049424) list_hc_apps_pane

0xe84b,	// (0x0004942c) scroll_pane_cp37_ParamLimits

0xe84b,	// (0x0004942c) scroll_pane_cp37

0x148e,	// (0x0003c06f) cell_hc_apps_pane_ParamLimits

0x148e,	// (0x0003c06f) cell_hc_apps_pane

0x1528,	// (0x0003c109) cell_hc_apps_pane_g1_ParamLimits

0x1528,	// (0x0003c109) cell_hc_apps_pane_g1

0xe857,	// (0x00049438) cell_hc_apps_pane_g2_ParamLimits

0xe857,	// (0x00049438) cell_hc_apps_pane_g2

0xe873,	// (0x00049454) cell_hc_apps_pane_g3_ParamLimits

0xe873,	// (0x00049454) cell_hc_apps_pane_g3

0x0002,

0xfcb5,	// (0x0004a896) cell_hc_apps_pane_g_ParamLimits

0xfcb5,	// (0x0004a896) cell_hc_apps_pane_g

0x1554,	// (0x0003c135) cell_hc_apps_pane_t1_ParamLimits

0x1554,	// (0x0003c135) cell_hc_apps_pane_t1

0x9857,	// (0x00044438) grid_highlight_pane_cp10_ParamLimits

0x9857,	// (0x00044438) grid_highlight_pane_cp10

0x1592,	// (0x0003c173) list_single_hc_apps_pane_ParamLimits

0x1592,	// (0x0003c173) list_single_hc_apps_pane

0x15be,	// (0x0003c19f) list_single_hc_apps_pane_g1

0x15d7,	// (0x0003c1b8) list_single_hc_apps_pane_g2

0x0001,

0xfcbc,	// (0x0004a89d) list_single_hc_apps_pane_g

0x15f0,	// (0x0003c1d1) list_single_hc_apps_pane_g2_copy1

0xf4fb,	// (0x0004a0dc) list_single_hc_apps_pane_t1

0x96ce,	// (0x000442af) bg_set_opt_pane_cp_ParamLimits

0x48e9,	// (0x0003f4ca) setting_slider_pane_t1_ParamLimits

0x96dc,	// (0x000442bd) setting_slider_pane_t2_ParamLimits

0x96f5,	// (0x000442d6) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0004a11a) setting_slider_pane_t_ParamLimits

0x492f,	// (0x0003f510) slider_set_pane_ParamLimits

0x4dcb,	// (0x0003f9ac) control_pane_g5_ParamLimits

0x4dcb,	// (0x0003f9ac) control_pane_g5

0xcd4c,	// (0x0004792d) slider_set_pane_g1_ParamLimits

0x566b,	// (0x0004024c) slider_set_pane_g2_ParamLimits

0x5677,	// (0x00040258) slider_set_pane_g3_ParamLimits

0x568b,	// (0x0004026c) slider_set_pane_g4_ParamLimits

0x56a3,	// (0x00040284) slider_set_pane_g5_ParamLimits

0x5677,	// (0x00040258) slider_set_pane_g6_ParamLimits

0xaa5d,	// (0x0004563e) slider_set_pane_g7_ParamLimits

0xf938,	// (0x0004a519) slider_set_pane_g_ParamLimits

0x96ce,	// (0x000442af) navi_icon_text_pane_ParamLimits

0x056d,	// (0x0003b14e) aid_fill_nsta_2_ParamLimits

0x059b,	// (0x0003b17c) aid_touch_tab_arrow_left_ParamLimits

0x05af,	// (0x0003b190) aid_touch_tab_arrow_right_ParamLimits

0x064b,	// (0x0003b22c) clock_nsta_pane_ParamLimits

0xc8cc,	// (0x000474ad) navi_icon_pane_g1_ParamLimits

0xc8d8,	// (0x000474b9) navi_text_pane_t1_ParamLimits

0xd623,	// (0x00048204) navi_icon_text_pane_g1_ParamLimits

0xd62f,	// (0x00048210) navi_icon_text_pane_t1_ParamLimits

0x15be,	// (0x0003c19f) list_single_hc_apps_pane_g1_ParamLimits

0x15d7,	// (0x0003c1b8) list_single_hc_apps_pane_g2_ParamLimits

0xfcbc,	// (0x0004a89d) list_single_hc_apps_pane_g_ParamLimits

0x15f0,	// (0x0003c1d1) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xf4fb,	// (0x0004a0dc) list_single_hc_apps_pane_t1_ParamLimits

0x95ba,	// (0x0004419b) popup_toolbar2_fixed_window_ParamLimits

0x95ba,	// (0x0004419b) popup_toolbar2_fixed_window

0xa84c,	// (0x0004542d) popup_toolbar2_float_window

0x9488,	// (0x00044069) bg_popup_sub_pane_cp27

0xe895,	// (0x00049476) grid_toolbar2_float_pane

0x9488,	// (0x00044069) bg_popup_sub_pane_cp26

0xe895,	// (0x00049476) grid_toolbar2_fixed_pane

0x160c,	// (0x0003c1ed) cell_toolbar2_fixed_pane_ParamLimits

0x160c,	// (0x0003c1ed) cell_toolbar2_fixed_pane

0x1627,	// (0x0003c208) cell_toolbar2_fixed_pane_g1

0xe89d,	// (0x0004947e) toolbar2_fixed_button_pane

0xbc1e,	// (0x000467ff) toolbar2_fixed_button_pane_g1

0xbc2e,	// (0x0004680f) toolbar2_fixed_button_pane_g2

0xbc26,	// (0x00046807) toolbar2_fixed_button_pane_g3

0xbc3e,	// (0x0004681f) toolbar2_fixed_button_pane_g4

0xbc36,	// (0x00046817) toolbar2_fixed_button_pane_g5

0xbc46,	// (0x00046827) toolbar2_fixed_button_pane_g6

0xbc4e,	// (0x0004682f) toolbar2_fixed_button_pane_g7

0xbc5e,	// (0x0004683f) toolbar2_fixed_button_pane_g8

0xbc56,	// (0x00046837) toolbar2_fixed_button_pane_g9

0x0008,

0xf83a,	// (0x0004a41b) toolbar2_fixed_button_pane_g

0xe8a5,	// (0x00049486) cell_toolbar2_float_pane_ParamLimits

0xe8a5,	// (0x00049486) cell_toolbar2_float_pane

0xe8b6,	// (0x00049497) cell_toolbar2_float_pane_g1

0xe89d,	// (0x0004947e) toolbar2_fixed_button_pane_cp

0x1106,	// (0x0003bce7) fep_vkb_accented_list_pane_ParamLimits

0x1106,	// (0x0003bce7) fep_vkb_accented_list_pane

0x5b48,	// (0x00040729) bg_popup_fep_shadow_pane_g9

0xb845,	// (0x00046426) bg_popup_fep_shadow_pane_cp3

0x9e3b,	// (0x00044a1c) list_accented_list_pane

0xe8bf,	// (0x000494a0) list_single_accented_list_pane_ParamLimits

0xe8bf,	// (0x000494a0) list_single_accented_list_pane

0xb845,	// (0x00046426) list_highlight_pane_cp10

0xe8d0,	// (0x000494b1) list_single_accented_list_pane_t1

0xa78e,	// (0x0004536f) popup_slider_window_ParamLimits

0xa78e,	// (0x0004536f) popup_slider_window

0xe6fd,	// (0x000492de) aid_indentation_list_msg

0x1706,	// (0x0003c2e7) bg_popup_window_pane_cp19

0xe936,	// (0x00049517) popup_slider_window_g1

0xe952,	// (0x00049533) popup_slider_window_g2

0xe96e,	// (0x0004954f) popup_slider_window_g3

0x0005,

0xfcc1,	// (0x0004a8a2) popup_slider_window_g

0xe98a,	// (0x0004956b) popup_slider_window_t1

0xe9ce,	// (0x000495af) small_volume_slider_vertical_pane

0xd975,	// (0x00048556) small_volume_slider_vertical_pane_g1

0xd975,	// (0x00048556) small_volume_slider_vertical_pane_g2

0xe9ea,	// (0x000495cb) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd3,	// (0x0004a8b4) small_volume_slider_vertical_pane_g

0x94bc,	// (0x0004409d) area_side_right_pane_ParamLimits

0x94bc,	// (0x0004409d) area_side_right_pane

0xab2b,	// (0x0004570c) aid_size_side_button_ParamLimits

0xab2b,	// (0x0004570c) aid_size_side_button

0xab44,	// (0x00045725) grid_sctrl_middle_pane_ParamLimits

0xab44,	// (0x00045725) grid_sctrl_middle_pane

0x61f4,	// (0x00040dd5) sctrl_sk_bottom_pane

0x6205,	// (0x00040de6) sctrl_sk_top_pane

0x6217,	// (0x00040df8) aid_touch_sctrl_top

0x6224,	// (0x00040e05) bg_sctrl_sk_pane_ParamLimits

0x6224,	// (0x00040e05) bg_sctrl_sk_pane

0x6232,	// (0x00040e13) sctrl_sk_top_pane_g1

0x623f,	// (0x00040e20) sctrl_sk_top_pane_t1

0x6217,	// (0x00040df8) aid_touch_sctrl_bottom

0x6224,	// (0x00040e05) bg_sctrl_sk_pane_cp_ParamLimits

0x6224,	// (0x00040e05) bg_sctrl_sk_pane_cp

0x625a,	// (0x00040e3b) sctrl_sk_bottom_pane_g1

0x623f,	// (0x00040e20) sctrl_sk_bottom_pane_t1

0xab5a,	// (0x0004573b) cell_sctrl_middle_pane_ParamLimits

0xab5a,	// (0x0004573b) cell_sctrl_middle_pane

0xab6b,	// (0x0004574c) aid_touch_sctrl_middle_ParamLimits

0xab6b,	// (0x0004574c) aid_touch_sctrl_middle

0xab78,	// (0x00045759) bg_sctrl_middle_pane_ParamLimits

0xab78,	// (0x00045759) bg_sctrl_middle_pane

0x6d08,	// (0x000418e9) cell_sctrl_middle_pane_g1_ParamLimits

0x6d08,	// (0x000418e9) cell_sctrl_middle_pane_g1

0xab86,	// (0x00045767) cell_sctrl_middle_pane_g2_ParamLimits

0xab86,	// (0x00045767) cell_sctrl_middle_pane_g2

0x0001,

0xfcdf,	// (0x0004a8c0) cell_sctrl_middle_pane_g_ParamLimits

0xfcdf,	// (0x0004a8c0) cell_sctrl_middle_pane_g

0xbc1e,	// (0x000467ff) bg_sctrl_middle_pane_g1

0xbc26,	// (0x00046807) bg_sctrl_middle_pane_g2

0xbc2e,	// (0x0004680f) bg_sctrl_middle_pane_g3

0xbc36,	// (0x00046817) bg_sctrl_middle_pane_g4

0xbc3e,	// (0x0004681f) bg_sctrl_middle_pane_g5

0xbc46,	// (0x00046827) bg_sctrl_middle_pane_g6

0xbc4e,	// (0x0004682f) bg_sctrl_middle_pane_g7

0xbc56,	// (0x00046837) bg_sctrl_middle_pane_g8

0x0007,

0xfce4,	// (0x0004a8c5) bg_sctrl_middle_pane_g

0xbc5e,	// (0x0004683f) bg_sctrl_middle_pane_g8_copy1

0xbc1e,	// (0x000467ff) bg_sctrl_sk_pane_g1

0xbc2e,	// (0x0004680f) bg_sctrl_sk_pane_g2

0xbc26,	// (0x00046807) bg_sctrl_sk_pane_g3

0x0008,

0xf83a,	// (0x0004a41b) bg_sctrl_sk_pane_g

0x9c3a,	// (0x0004481b) aid_size_touch_scroll_bar

0xbc3e,	// (0x0004681f) bg_sctrl_sk_pane_g4

0xbc36,	// (0x00046817) bg_sctrl_sk_pane_g5

0xbc46,	// (0x00046827) bg_sctrl_sk_pane_g6

0xbc4e,	// (0x0004682f) bg_sctrl_sk_pane_g7

0xbc5e,	// (0x0004683f) bg_sctrl_sk_pane_g8

0xbc56,	// (0x00046837) bg_sctrl_sk_pane_g9

0x4f6f,	// (0x0003fb50) popup_fep_china_hwr2_fs_candidate_window

0xa389,	// (0x00044f6a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa389,	// (0x00044f6a) popup_fep_china_hwr2_fs_control_window

0x5b68,	// (0x00040749) sctrl_sk_top_pane_g2

0x0001,

0xfcda,	// (0x0004a8bb) sctrl_sk_top_pane_g

0x1826,	// (0x0003c407) aid_fep_china_hwr2_fs_cell_ParamLimits

0x1826,	// (0x0003c407) aid_fep_china_hwr2_fs_cell

0x183a,	// (0x0003c41b) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x183a,	// (0x0003c41b) bg_popup_fep_shadow_pane_cp4

0x1851,	// (0x0003c432) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x1851,	// (0x0003c432) bg_popup_fep_shadow_pane_cp5

0x1863,	// (0x0003c444) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x1863,	// (0x0003c444) popup_fep_china_hwr2_fs_control_bar_grid

0x1877,	// (0x0003c458) popup_fep_china_hwr2_fs_control_funtion_grid

0xe9f3,	// (0x000495d4) aid_fep_china_hwr2_fs_candi_cell

0x9488,	// (0x00044069) bg_popup_fep_shadow_pane_cp6

0xe9fd,	// (0x000495de) popup_fep_china_hwr2_fs_candidate_grid

0x187f,	// (0x0003c460) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x187f,	// (0x0003c460) cell_fep_china_hwr2_fs_funtion_grid

0xd975,	// (0x00048556) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xea05,	// (0x000495e6) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xea05,	// (0x000495e6) cell_fep_china_hwr2_fs_funtion_grid_g1

0xea13,	// (0x000495f4) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xea13,	// (0x000495f4) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf5,	// (0x0004a8d6) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf5,	// (0x0004a8d6) cell_fep_china_hwr2_fs_funtion_grid_g

0x1897,	// (0x0003c478) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x1897,	// (0x0003c478) cell_fep_china_hwr2_fs_funtion_grid_t1

0x18ac,	// (0x0003c48d) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x18ac,	// (0x0003c48d) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfa,	// (0x0004a8db) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfa,	// (0x0004a8db) cell_fep_china_hwr2_fs_funtion_grid_t

0xea29,	// (0x0004960a) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xea31,	// (0x00049612) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xea39,	// (0x0004961a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcff,	// (0x0004a8e0) popup_fep_china_hwr2_fs_control_bar_grid_g

0xea41,	// (0x00049622) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xea41,	// (0x00049622) cell_fep_china_hwr2_fs_candidate_grid

0xea5a,	// (0x0004963b) popup_fep_china_hwr2_fs_candidate_grid_g20

0xea62,	// (0x00049643) popup_fep_china_hwr2_fs_candidate_grid_g21

0xd975,	// (0x00048556) cell_fep_china_hwr2_fs_candidate_grid_g1

0xd975,	// (0x00048556) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1a,	// (0x0004a6fb) cell_fep_china_hwr2_fs_candidate_grid_g

0xea6a,	// (0x0004964b) cell_fep_china_hwr2_fs_candidate_grid_t1

0xba83,	// (0x00046664) clock_nsta_pane_cp_24_ParamLimits

0xba83,	// (0x00046664) clock_nsta_pane_cp_24

0xbae0,	// (0x000466c1) indicator_nsta_pane_cp_24_ParamLimits

0xbae0,	// (0x000466c1) indicator_nsta_pane_cp_24

0xc7e6,	// (0x000473c7) heading_pane_g1

0x0001,

0xf89f,	// (0x0004a480) heading_pane_g

0x0ebf,	// (0x0003baa0) grid_sct_catagory_button_pane

0xbf90,	// (0x00046b71) scroll_pane_cp5_ParamLimits

0xd655,	// (0x00048236) button_value_adjust_pane_cp5_ParamLimits

0xd655,	// (0x00048236) button_value_adjust_pane_cp5

0xd713,	// (0x000482f4) form2_midp_time_pane_ParamLimits

0xea78,	// (0x00049659) cell_sct_catagory_button_pane_ParamLimits

0xea78,	// (0x00049659) cell_sct_catagory_button_pane

0xd93a,	// (0x0004851b) bg_button_pane_cp01_ParamLimits

0xd93a,	// (0x0004851b) bg_button_pane_cp01

0xd975,	// (0x00048556) cell_sct_catagory_button_pane_g1

0xa7fd,	// (0x000453de) popup_tb_extension_window

0x18c8,	// (0x0003c4a9) aid_size_cell_ext_ParamLimits

0x18c8,	// (0x0003c4a9) aid_size_cell_ext

0x9b18,	// (0x000446f9) bg_tb_trans_pane_cp1_ParamLimits

0x9b18,	// (0x000446f9) bg_tb_trans_pane_cp1

0x18ee,	// (0x0003c4cf) grid_tb_ext_pane_ParamLimits

0x18ee,	// (0x0003c4cf) grid_tb_ext_pane

0x1924,	// (0x0003c505) cell_tb_ext_pane_ParamLimits

0x1924,	// (0x0003c505) cell_tb_ext_pane

0x1948,	// (0x0003c529) cell_tb_ext_pane_g1_ParamLimits

0x1948,	// (0x0003c529) cell_tb_ext_pane_g1

0xea8a,	// (0x0004966b) cell_tb_ext_pane_t1

0x9857,	// (0x00044438) list_highlight_pane_cp11_ParamLimits

0x9857,	// (0x00044438) list_highlight_pane_cp11

0x95cf,	// (0x000441b0) popup_uni_indicator_window_ParamLimits

0x95cf,	// (0x000441b0) popup_uni_indicator_window

0x9cf2,	// (0x000448d3) bg_popup_sub_pane_cp14

0xeaa5,	// (0x00049686) list_uniindi_pane

0xeab1,	// (0x00049692) uniindi_top_pane

0x9857,	// (0x00044438) bg_uniindi_top_pane

0xead0,	// (0x000496b1) uniindi_top_pane_g1

0xeae6,	// (0x000496c7) uniindi_top_pane_g2

0x0003,

0xfd06,	// (0x0004a8e7) uniindi_top_pane_g

0xeb10,	// (0x000496f1) uniindi_top_pane_t1

0xeb3a,	// (0x0004971b) list_single_uniindi_pane_ParamLimits

0xeb3a,	// (0x0004971b) list_single_uniindi_pane

0xd975,	// (0x00048556) bg_uniindi_top_pane_g1

0xeb4c,	// (0x0004972d) list_single_uniindi_pane_g1

0xeb5f,	// (0x00049740) list_single_uniindi_pane_t1

0x46d8,	// (0x0003f2b9) control_bg_pane

0xeb84,	// (0x00049765) bg_sctrl_sk_pane_cp1

0xeb8d,	// (0x0004976e) bg_sctrl_sk_pane_cp2

0xeb96,	// (0x00049777) control_bg_pane_g1

0xeb9f,	// (0x00049780) control_bg_pane_g2

0x0001,

0xfd0f,	// (0x0004a8f0) control_bg_pane_g

0xd516,	// (0x000480f7) cell_indicator_nsta_pane_g1_ParamLimits

0x0fd0,	// (0x0003bbb1) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7e,	// (0x0004a65f) cell_indicator_nsta_pane_g_ParamLimits

0x7ece,	// (0x00042aaf) form2_midp_time_pane_t1_ParamLimits

0x5831,	// (0x00040412) main_idle_act4_pane_ParamLimits

0x5831,	// (0x00040412) main_idle_act4_pane

0xa7fd,	// (0x000453de) popup_tb_extension_window_ParamLimits

0x190e,	// (0x0003c4ef) tb_ext_find_pane_ParamLimits

0x190e,	// (0x0003c4ef) tb_ext_find_pane

0xeba8,	// (0x00049789) ai_gene_pane_1_cp1

0xb8d9,	// (0x000464ba) ai_gene_pane_2_cp1

0xebb0,	// (0x00049791) list_single_idle_plugin_calendar_pane

0xebb9,	// (0x0004979a) list_single_idle_plugin_notification_pane

0xebc2,	// (0x000497a3) list_single_idle_plugin_player_pane

0x1965,	// (0x0003c546) list_single_idle_plugin_shortcut_pane_ParamLimits

0x1965,	// (0x0003c546) list_single_idle_plugin_shortcut_pane

0x198d,	// (0x0003c56e) main_idle_act4_pane_t1

0x19a3,	// (0x0003c584) main_idle_act4_pane_t2

0x0001,

0xfd14,	// (0x0004a8f5) main_idle_act4_pane_t

0x19b9,	// (0x0003c59a) middle_sk_idle_act4_pane_ParamLimits

0x19b9,	// (0x0003c59a) middle_sk_idle_act4_pane

0x19d5,	// (0x0003c5b6) popup_clock_digital_analogue_window_cp2

0x19fb,	// (0x0003c5dc) shortcut_wheel_idle_act4_pane_ParamLimits

0x19fb,	// (0x0003c5dc) shortcut_wheel_idle_act4_pane

0xd975,	// (0x00048556) shortcut_wheel_idle_act4_pane_g1

0xd975,	// (0x00048556) shortcut_wheel_idle_act4_pane_g2

0xd975,	// (0x00048556) shortcut_wheel_idle_act4_pane_g3

0xd975,	// (0x00048556) shortcut_wheel_idle_act4_pane_g4

0xd975,	// (0x00048556) shortcut_wheel_idle_act4_pane_g5

0xebcb,	// (0x000497ac) shortcut_wheel_idle_act4_pane_g6

0xebd3,	// (0x000497b4) shortcut_wheel_idle_act4_pane_g7

0xebdb,	// (0x000497bc) shortcut_wheel_idle_act4_pane_g8

0xebe3,	// (0x000497c4) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd19,	// (0x0004a8fa) shortcut_wheel_idle_act4_pane_g

0x3bfb,	// (0x0003e7dc) middle_sk_idle_act4_pane_g1_ParamLimits

0x3bfb,	// (0x0003e7dc) middle_sk_idle_act4_pane_g1

0x1a76,	// (0x0003c657) middle_sk_idle_act4_pane_g2_ParamLimits

0x1a76,	// (0x0003c657) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3c,	// (0x0004a91d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3c,	// (0x0004a91d) middle_sk_idle_act4_pane_g

0x1a8e,	// (0x0003c66f) middle_sk_idle_act4_pane_t1_ParamLimits

0x1a8e,	// (0x0003c66f) middle_sk_idle_act4_pane_t1

0x1abd,	// (0x0003c69e) grid_ai_shortcut_pane_ParamLimits

0x1abd,	// (0x0003c69e) grid_ai_shortcut_pane

0x1ada,	// (0x0003c6bb) list_highlight_pane_cp16_ParamLimits

0x1ada,	// (0x0003c6bb) list_highlight_pane_cp16

0x1ae7,	// (0x0003c6c8) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x1ae7,	// (0x0003c6c8) list_single_idle_plugin_shortcut_pane_g1

0x1af3,	// (0x0003c6d4) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x1af3,	// (0x0003c6d4) list_single_idle_plugin_shortcut_pane_g2

0x1b0f,	// (0x0003c6f0) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x1b0f,	// (0x0003c6f0) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd41,	// (0x0004a922) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd41,	// (0x0004a922) list_single_idle_plugin_shortcut_pane_g

0x1b24,	// (0x0003c705) cell_ai_shortcut_pane_ParamLimits

0x1b24,	// (0x0003c705) cell_ai_shortcut_pane

0x1b3a,	// (0x0003c71b) cell_ai_shortcut_pane_g1_ParamLimits

0x1b3a,	// (0x0003c71b) cell_ai_shortcut_pane_g1

0xeba8,	// (0x00049789) ai_gene_pane_1_cp2

0xebeb,	// (0x000497cc) ai_gene_pane_2_cp2

0xebf3,	// (0x000497d4) list_highlight_pane_cp15

0xebfc,	// (0x000497dd) list_single_idle_plugin_calendar_pane_g1

0xebf3,	// (0x000497d4) list_highlight_pane_cp17

0xec04,	// (0x000497e5) list_single_idle_plugin_calendar_pane_g1_copy1

0xec0c,	// (0x000497ed) list_single_idle_plugin_player_pane_g1

0xcfda,	// (0x00047bbb) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd48,	// (0x0004a929) list_single_idle_plugin_player_pane_g

0xec14,	// (0x000497f5) list_single_idle_plugin_player_pane_t1

0xec22,	// (0x00049803) list_single_idle_plugin_player_pane_t2

0xec30,	// (0x00049811) list_single_idle_plugin_player_pane_t3

0xec3e,	// (0x0004981f) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4d,	// (0x0004a92e) list_single_idle_plugin_player_pane_t

0xec4c,	// (0x0004982d) wait_bar_pane_cp15

0xec54,	// (0x00049835) grid_ai_notification_pane

0xcfda,	// (0x00047bbb) list_single_idle_plugin_notification_pane_g1

0x1b5c,	// (0x0003c73d) cell_ai_notification_pane_ParamLimits

0x1b5c,	// (0x0003c73d) cell_ai_notification_pane

0xec5d,	// (0x0004983e) cell_ai_notification_pane_g1

0xec65,	// (0x00049846) cell_ai_notification_pane_t1

0x1b69,	// (0x0003c74a) tb_ext_find_button_pane

0x1b71,	// (0x0003c752) tb_ext_find_pane_g1

0x1b79,	// (0x0003c75a) tb_ext_find_pane_t1

0xb3a6,	// (0x00045f87) tb_ext_find_button_pane_g1

0xec73,	// (0x00049854) tb_ext_find_button_pane_g2

0x0001,

0xfd56,	// (0x0004a937) tb_ext_find_button_pane_g

0x198d,	// (0x0003c56e) main_idle_act4_pane_t1_ParamLimits

0x19a3,	// (0x0003c584) main_idle_act4_pane_t2_ParamLimits

0xfd14,	// (0x0004a8f5) main_idle_act4_pane_t_ParamLimits

0x19d5,	// (0x0003c5b6) popup_clock_digital_analogue_window_cp2_ParamLimits

0x19eb,	// (0x0003c5cc) sat_plugin_idle_act4_pane_ParamLimits

0x19eb,	// (0x0003c5cc) sat_plugin_idle_act4_pane

0x1b87,	// (0x0003c768) sat_plugin_idle_act4_pane_t1_ParamLimits

0x1b87,	// (0x0003c768) sat_plugin_idle_act4_pane_t1

0x1b9f,	// (0x0003c780) sat_plugin_idle_act4_pane_t2_ParamLimits

0x1b9f,	// (0x0003c780) sat_plugin_idle_act4_pane_t2

0x1bb7,	// (0x0003c798) sat_plugin_idle_act4_pane_t3_ParamLimits

0x1bb7,	// (0x0003c798) sat_plugin_idle_act4_pane_t3

0x1bcf,	// (0x0003c7b0) sat_plugin_idle_act4_pane_t4_ParamLimits

0x1bcf,	// (0x0003c7b0) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5b,	// (0x0004a93c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5b,	// (0x0004a93c) sat_plugin_idle_act4_pane_t

0x479b,	// (0x0003f37c) popup_battery_window_ParamLimits

0x479b,	// (0x0003f37c) popup_battery_window

0x9857,	// (0x00044438) bg_popup_sub_pane_cp25_ParamLimits

0x9857,	// (0x00044438) bg_popup_sub_pane_cp25

0xec7c,	// (0x0004985d) popup_battery_window_g1_ParamLimits

0xec7c,	// (0x0004985d) popup_battery_window_g1

0xec88,	// (0x00049869) popup_battery_window_t1_ParamLimits

0xec88,	// (0x00049869) popup_battery_window_t1

0xec9a,	// (0x0004987b) popup_battery_window_t2_ParamLimits

0xec9a,	// (0x0004987b) popup_battery_window_t2

0x0001,

0xfd64,	// (0x0004a945) popup_battery_window_t_ParamLimits

0xfd64,	// (0x0004a945) popup_battery_window_t

0xa0d4,	// (0x00044cb5) midp_canvas_pane_ParamLimits

0xa129,	// (0x00044d0a) midp_keypad_pane_ParamLimits

0xa129,	// (0x00044d0a) midp_keypad_pane

0xb0cf,	// (0x00045cb0) main_midp_pane_ParamLimits

0xd5f1,	// (0x000481d2) signal_pane_g2_cp_ParamLimits

0x1be7,	// (0x0003c7c8) aid_size_cell_midp_keypad_ParamLimits

0x1be7,	// (0x0003c7c8) aid_size_cell_midp_keypad

0x1c05,	// (0x0003c7e6) midp_keyp_game_grid_pane_ParamLimits

0x1c05,	// (0x0003c7e6) midp_keyp_game_grid_pane

0x1c24,	// (0x0003c805) midp_keyp_rocker_pane_ParamLimits

0x1c24,	// (0x0003c805) midp_keyp_rocker_pane

0x1c65,	// (0x0003c846) midp_keyp_sk_left_pane_ParamLimits

0x1c65,	// (0x0003c846) midp_keyp_sk_left_pane

0x1cb7,	// (0x0003c898) midp_keyp_sk_right_pane_ParamLimits

0x1cb7,	// (0x0003c898) midp_keyp_sk_right_pane

0x9488,	// (0x00044069) bg_button_pane_cp03

0x1d03,	// (0x0003c8e4) midp_keyp_sk_left_pane_g1

0x9488,	// (0x00044069) bg_button_pane_cp04

0x1d03,	// (0x0003c8e4) midp_keyp_sk_right_pane_g1

0xd975,	// (0x00048556) midp_keyp_rocker_pane_g1

0x1d0c,	// (0x0003c8ed) keyp_game_cell_pane_ParamLimits

0x1d0c,	// (0x0003c8ed) keyp_game_cell_pane

0x9488,	// (0x00044069) bg_button_pane_cp02

0x1d2e,	// (0x0003c90f) keyp_game_cell_pane_g1

0x9580,	// (0x00044161) popup_fep_vkb2_window_ParamLimits

0x9580,	// (0x00044161) popup_fep_vkb2_window

0xab93,	// (0x00045774) aid_size_cell_vkb2_ParamLimits

0xab93,	// (0x00045774) aid_size_cell_vkb2

0xabbf,	// (0x000457a0) popup_fep_vkb2_window_g1_ParamLimits

0xabbf,	// (0x000457a0) popup_fep_vkb2_window_g1

0xac0f,	// (0x000457f0) vkb2_area_bottom_pane_ParamLimits

0xac0f,	// (0x000457f0) vkb2_area_bottom_pane

0xac4d,	// (0x0004582e) vkb2_area_keypad_pane_ParamLimits

0xac4d,	// (0x0004582e) vkb2_area_keypad_pane

0xac8b,	// (0x0004586c) vkb2_area_top_pane_ParamLimits

0xac8b,	// (0x0004586c) vkb2_area_top_pane

0xad0d,	// (0x000458ee) vkb2_top_entry_pane_ParamLimits

0xad0d,	// (0x000458ee) vkb2_top_entry_pane

0xad3a,	// (0x0004591b) vkb2_top_grid_left_pane_ParamLimits

0xad3a,	// (0x0004591b) vkb2_top_grid_left_pane

0xad5b,	// (0x0004593c) vkb2_top_grid_right_pane_ParamLimits

0xad5b,	// (0x0004593c) vkb2_top_grid_right_pane

0x6909,	// (0x000414ea) vkb2_cell_keypad_pane_ParamLimits

0x6909,	// (0x000414ea) vkb2_cell_keypad_pane

0xada3,	// (0x00045984) vkb2_area_bottom_grid_pane_ParamLimits

0xada3,	// (0x00045984) vkb2_area_bottom_grid_pane

0xadc9,	// (0x000459aa) vkb2_area_bottom_pane_g1_ParamLimits

0xadc9,	// (0x000459aa) vkb2_area_bottom_pane_g1

0xadef,	// (0x000459d0) vkb2_area_bottom_pane_g2_ParamLimits

0xadef,	// (0x000459d0) vkb2_area_bottom_pane_g2

0xae20,	// (0x00045a01) vkb2_area_bottom_pane_g3_ParamLimits

0xae20,	// (0x00045a01) vkb2_area_bottom_pane_g3

0x0002,

0xfd69,	// (0x0004a94a) vkb2_area_bottom_pane_g_ParamLimits

0xfd69,	// (0x0004a94a) vkb2_area_bottom_pane_g

0x6a81,	// (0x00041662) vkb2_top_cell_left_pane_ParamLimits

0x6a81,	// (0x00041662) vkb2_top_cell_left_pane

0x201a,	// (0x0003cbfb) vkb2_top_entry_pane_g1_ParamLimits

0x201a,	// (0x0003cbfb) vkb2_top_entry_pane_g1

0x2028,	// (0x0003cc09) vkb2_top_entry_pane_t1_ParamLimits

0x2028,	// (0x0003cc09) vkb2_top_entry_pane_t1

0xecbf,	// (0x000498a0) vkb2_top_entry_pane_t2_ParamLimits

0xecbf,	// (0x000498a0) vkb2_top_entry_pane_t2

0xecf1,	// (0x000498d2) vkb2_top_entry_pane_t3_ParamLimits

0xecf1,	// (0x000498d2) vkb2_top_entry_pane_t3

0x0002,

0xfd70,	// (0x0004a951) vkb2_top_entry_pane_t_ParamLimits

0xfd70,	// (0x0004a951) vkb2_top_entry_pane_t

0xae76,	// (0x00045a57) vkb2_top_grid_right_pane_g1_ParamLimits

0xae76,	// (0x00045a57) vkb2_top_grid_right_pane_g1

0x6b24,	// (0x00041705) vkb2_top_grid_right_pane_g2_ParamLimits

0x6b24,	// (0x00041705) vkb2_top_grid_right_pane_g2

0x6b3c,	// (0x0004171d) vkb2_top_grid_right_pane_g3_ParamLimits

0x6b3c,	// (0x0004171d) vkb2_top_grid_right_pane_g3

0xae8c,	// (0x00045a6d) vkb2_top_grid_right_pane_g4_ParamLimits

0xae8c,	// (0x00045a6d) vkb2_top_grid_right_pane_g4

0x0003,

0xfd77,	// (0x0004a958) vkb2_top_grid_right_pane_g_ParamLimits

0xfd77,	// (0x0004a958) vkb2_top_grid_right_pane_g

0x6b6a,	// (0x0004174b) vkb2_top_cell_left_pane_g1

0x6b81,	// (0x00041762) vkb2_cell_keypad_pane_g1_ParamLimits

0x6b81,	// (0x00041762) vkb2_cell_keypad_pane_g1

0xed07,	// (0x000498e8) vkb2_cell_keypad_pane_t1_ParamLimits

0xed07,	// (0x000498e8) vkb2_cell_keypad_pane_t1

0x6b8f,	// (0x00041770) vkb2_cell_bottom_grid_pane_ParamLimits

0x6b8f,	// (0x00041770) vkb2_cell_bottom_grid_pane

0x6bc8,	// (0x000417a9) vkb2_cell_bottom_grid_pane_g1

0x1a1a,	// (0x0003c5fb) aid_call2_pane_cp02

0x1a22,	// (0x0003c603) aid_call_pane_cp02

0x1a2a,	// (0x0003c60b) clock_digital_number_pane_cp10

0x1a32,	// (0x0003c613) clock_digital_number_pane_cp11

0x1a3a,	// (0x0003c61b) clock_digital_number_pane_cp12

0x1a42,	// (0x0003c623) clock_digital_number_pane_cp13

0x1a4a,	// (0x0003c62b) clock_digital_separator_pane_cp10

0xb3a6,	// (0x00045f87) popup_clock_digital_analogue_window_cp2_g1

0xb3a6,	// (0x00045f87) popup_clock_digital_analogue_window_cp2_g2

0x1a52,	// (0x0003c633) popup_clock_digital_analogue_window_cp2_g3

0xb3a6,	// (0x00045f87) popup_clock_digital_analogue_window_cp2_g4

0x1a52,	// (0x0003c633) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2c,	// (0x0004a90d) popup_clock_digital_analogue_window_cp2_g

0x1a5a,	// (0x0003c63b) popup_clock_digital_analogue_window_cp2_t1

0x1a68,	// (0x0003c649) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd37,	// (0x0004a918) popup_clock_digital_analogue_window_cp2_t

0xd975,	// (0x00048556) clock_digital_number_pane_cp10_g1

0xd975,	// (0x00048556) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0004a6fb) clock_digital_number_pane_cp10_g

0xd975,	// (0x00048556) clock_digital_separator_pane_cp10_g1

0xd975,	// (0x00048556) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0004a6fb) clock_digital_separator_pane_cp10_g

0xeaf2,	// (0x000496d3) uniindi_top_pane_g3

0xeb03,	// (0x000496e4) uniindi_top_pane_g4

0x6974,	// (0x00041555) vkb2_row_keypad_pane_ParamLimits

0x6974,	// (0x00041555) vkb2_row_keypad_pane

0x6be4,	// (0x000417c5) vkb2_cell_t_keypad_pane_ParamLimits

0x6be4,	// (0x000417c5) vkb2_cell_t_keypad_pane

0x6bf1,	// (0x000417d2) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6bf1,	// (0x000417d2) vkb2_cell_t_keypad_pane_cp08

0x6c01,	// (0x000417e2) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6c01,	// (0x000417e2) vkb2_cell_t_keypad_pane_cp09

0x6c12,	// (0x000417f3) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6c12,	// (0x000417f3) vkb2_cell_t_keypad_pane_cp01

0x6c22,	// (0x00041803) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6c22,	// (0x00041803) vkb2_cell_t_keypad_pane_cp02

0x6c32,	// (0x00041813) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6c32,	// (0x00041813) vkb2_cell_t_keypad_pane_cp03

0x6c42,	// (0x00041823) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6c42,	// (0x00041823) vkb2_cell_t_keypad_pane_cp04

0x6c52,	// (0x00041833) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6c52,	// (0x00041833) vkb2_cell_t_keypad_pane_cp05

0x6c62,	// (0x00041843) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6c62,	// (0x00041843) vkb2_cell_t_keypad_pane_cp06

0x6c72,	// (0x00041853) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6c72,	// (0x00041853) vkb2_cell_t_keypad_pane_cp07

0x6c82,	// (0x00041863) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6c82,	// (0x00041863) vkb2_cell_t_keypad_pane_cp10

0x5b68,	// (0x00040749) vkb2_cell_t_keypad_pane_g1

0x2be3,	// (0x0003d7c4) vkb2_cell_t_keypad_pane_t1

0x46d8,	// (0x0003f2b9) popup_grid_graphic2_window

0x208d,	// (0x0003cc6e) aid_size_cell_graphic2_ParamLimits

0x208d,	// (0x0003cc6e) aid_size_cell_graphic2

0x20cb,	// (0x0003ccac) bg_popup_window_pane_cp21_ParamLimits

0x20cb,	// (0x0003ccac) bg_popup_window_pane_cp21

0x20d9,	// (0x0003ccba) graphic2_pages_pane_ParamLimits

0x20d9,	// (0x0003ccba) graphic2_pages_pane

0x2122,	// (0x0003cd03) grid_graphic2_control_pane_ParamLimits

0x2122,	// (0x0003cd03) grid_graphic2_control_pane

0x2160,	// (0x0003cd41) grid_graphic2_pane_ParamLimits

0x2160,	// (0x0003cd41) grid_graphic2_pane

0x21cf,	// (0x0003cdb0) cell_graphic2_pane

0x46d8,	// (0x0003f2b9) main_comp_mode_pane

0xe76b,	// (0x0004934c) list_ai3_gene_pane_ParamLimits

0x1706,	// (0x0003c2e7) bg_popup_window_pane_cp19_ParamLimits

0xe8de,	// (0x000494bf) bg_touch_area_indi_pane_ParamLimits

0xe8de,	// (0x000494bf) bg_touch_area_indi_pane

0xe8f4,	// (0x000494d5) bg_touch_area_indi_pane_cp01_ParamLimits

0xe8f4,	// (0x000494d5) bg_touch_area_indi_pane_cp01

0xe90a,	// (0x000494eb) bg_touch_area_indi_pane_cp02_ParamLimits

0xe90a,	// (0x000494eb) bg_touch_area_indi_pane_cp02

0xe920,	// (0x00049501) bg_touch_area_indi_pane_cp03_ParamLimits

0xe920,	// (0x00049501) bg_touch_area_indi_pane_cp03

0xe936,	// (0x00049517) popup_slider_window_g1_ParamLimits

0xe952,	// (0x00049533) popup_slider_window_g2_ParamLimits

0xe96e,	// (0x0004954f) popup_slider_window_g3_ParamLimits

0xfcc1,	// (0x0004a8a2) popup_slider_window_g_ParamLimits

0xe98a,	// (0x0004956b) popup_slider_window_t1_ParamLimits

0xe9ce,	// (0x000495af) small_volume_slider_vertical_pane_ParamLimits

0x21cf,	// (0x0003cdb0) cell_graphic2_pane_ParamLimits

0x221a,	// (0x0003cdfb) bg_button_pane_cp10_ParamLimits

0x221a,	// (0x0003cdfb) bg_button_pane_cp10

0x222b,	// (0x0003ce0c) bg_button_pane_cp11_ParamLimits

0x222b,	// (0x0003ce0c) bg_button_pane_cp11

0x223c,	// (0x0003ce1d) graphic2_pages_pane_g1_ParamLimits

0x223c,	// (0x0003ce1d) graphic2_pages_pane_g1

0x2257,	// (0x0003ce38) graphic2_pages_pane_g2_ParamLimits

0x2257,	// (0x0003ce38) graphic2_pages_pane_g2

0x0001,

0xfd85,	// (0x0004a966) graphic2_pages_pane_g_ParamLimits

0xfd85,	// (0x0004a966) graphic2_pages_pane_g

0x226f,	// (0x0003ce50) graphic2_pages_pane_t1_ParamLimits

0x226f,	// (0x0003ce50) graphic2_pages_pane_t1

0x2287,	// (0x0003ce68) cell_graphic2_control_pane_ParamLimits

0x2287,	// (0x0003ce68) cell_graphic2_control_pane

0x22b1,	// (0x0003ce92) cell_graphic2_pane_g1_ParamLimits

0x22b1,	// (0x0003ce92) cell_graphic2_pane_g1

0xaea2,	// (0x00045a83) cell_graphic2_pane_g2_ParamLimits

0xaea2,	// (0x00045a83) cell_graphic2_pane_g2

0x22be,	// (0x0003ce9f) cell_graphic2_pane_g3_ParamLimits

0x22be,	// (0x0003ce9f) cell_graphic2_pane_g3

0xaeaf,	// (0x00045a90) cell_graphic2_pane_g4_ParamLimits

0xaeaf,	// (0x00045a90) cell_graphic2_pane_g4

0x22cb,	// (0x0003ceac) cell_graphic2_pane_g5_ParamLimits

0x22cb,	// (0x0003ceac) cell_graphic2_pane_g5

0x0004,

0xfd8a,	// (0x0004a96b) cell_graphic2_pane_g_ParamLimits

0xfd8a,	// (0x0004a96b) cell_graphic2_pane_g

0x22e8,	// (0x0003cec9) cell_graphic2_pane_t1_ParamLimits

0x22e8,	// (0x0003cec9) cell_graphic2_pane_t1

0xc7da,	// (0x000473bb) grid_highlight_pane_cp11_ParamLimits

0xc7da,	// (0x000473bb) grid_highlight_pane_cp11

0x9857,	// (0x00044438) bg_button_pane_cp05

0x231d,	// (0x0003cefe) cell_graphic2_control_pane_g1

0xd975,	// (0x00048556) bg_touch_area_indi_pane_g1

0x2bf5,	// (0x0003d7d6) aid_cmod_rocker_key_size

0x2bff,	// (0x0003d7e0) aid_cmode_itu_key_size

0x2c09,	// (0x0003d7ea) main_cmode_video_pane

0x2c11,	// (0x0003d7f2) main_comp_mode_itu_pane

0x2c1b,	// (0x0003d7fc) main_comp_mode_rocker_pane

0x2c23,	// (0x0003d804) cell_cmode_rocker_pane_ParamLimits

0x2c23,	// (0x0003d804) cell_cmode_rocker_pane

0x2c35,	// (0x0003d816) cell_cmode_itu_pane_ParamLimits

0x2c35,	// (0x0003d816) cell_cmode_itu_pane

0x9cf2,	// (0x000448d3) bg_button_pane_cp06_ParamLimits

0x9cf2,	// (0x000448d3) bg_button_pane_cp06

0xdba1,	// (0x00048782) cell_cmode_rocker_pane_g1_ParamLimits

0xdba1,	// (0x00048782) cell_cmode_rocker_pane_g1

0xea05,	// (0x000495e6) cell_cmode_rocker_pane_g2_ParamLimits

0xea05,	// (0x000495e6) cell_cmode_rocker_pane_g2

0x0001,

0xfd9a,	// (0x0004a97b) cell_cmode_rocker_pane_g_ParamLimits

0xfd9a,	// (0x0004a97b) cell_cmode_rocker_pane_g

0x9488,	// (0x00044069) bg_button_pane_cp07

0x2c4a,	// (0x0003d82b) cell_cmode_itu_pane_g1

0x2c53,	// (0x0003d834) cell_cmode_itu_pane_t1

0x2c61,	// (0x0003d842) cell_cmode_itu_pane_t2

0x0001,

0xfd9f,	// (0x0004a980) cell_cmode_itu_pane_t

0xeb74,	// (0x00049755) aid_touch_ctrl_left

0xeb7c,	// (0x0004975d) aid_touch_ctrl_right

0x9488,	// (0x00044069) compa_mode_pane

0x2345,	// (0x0003cf26) aid_cmod_rocker_key_size_cp

0x234f,	// (0x0003cf30) aid_cmode_itu_key_size_cp

0x2c6f,	// (0x0003d850) compa_mode_pane_g1

0x2c77,	// (0x0003d858) compa_mode_pane_g2

0x2c7f,	// (0x0003d860) compa_mode_pane_g3

0x0002,

0xfda4,	// (0x0004a985) compa_mode_pane_g

0x2359,	// (0x0003cf3a) main_comp_mode_itu_pane_cp

0x2363,	// (0x0003cf44) main_comp_mode_rocker_pane_cp

0x236d,	// (0x0003cf4e) cell_cmode_itu_pane_cp_ParamLimits

0x236d,	// (0x0003cf4e) cell_cmode_itu_pane_cp

0x2382,	// (0x0003cf63) cell_cmode_rocker_pane_cp_ParamLimits

0x2382,	// (0x0003cf63) cell_cmode_rocker_pane_cp

0x9cf2,	// (0x000448d3) bg_button_pane_cp06_cp_ParamLimits

0x9cf2,	// (0x000448d3) bg_button_pane_cp06_cp

0xdba1,	// (0x00048782) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xdba1,	// (0x00048782) cell_cmode_rocker_pane_g1_cp

0xd975,	// (0x00048556) cell_cmode_rocker_pane_g2_cp

0x9488,	// (0x00044069) bg_button_pane_cp07_cp

0x2394,	// (0x0003cf75) cell_cmode_itu_pane_g1_cp

0x239d,	// (0x0003cf7e) cell_cmode_itu_pane_t1_cp

0x23ab,	// (0x0003cf8c) cell_cmode_itu_pane_t2_cp

0x0dd7,	// (0x0003b9b8) settings_code_pane_cp2

0x96ce,	// (0x000442af) bg_popup_window_pane_cp3_ParamLimits

0x9a55,	// (0x00044636) heading_pane_cp3_ParamLimits

0x9a64,	// (0x00044645) listscroll_popup_graphic_pane_ParamLimits

0x583f,	// (0x00040420) fep_hwr_aid_pane_ParamLimits

0x6217,	// (0x00040df8) aid_touch_sctrl_top_ParamLimits

0x6232,	// (0x00040e13) sctrl_sk_top_pane_g1_ParamLimits

0x5b68,	// (0x00040749) sctrl_sk_top_pane_g2_ParamLimits

0xfcda,	// (0x0004a8bb) sctrl_sk_top_pane_g_ParamLimits

0x623f,	// (0x00040e20) sctrl_sk_top_pane_t1_ParamLimits

0x6217,	// (0x00040df8) aid_touch_sctrl_bottom_ParamLimits

0x623f,	// (0x00040e20) sctrl_sk_bottom_pane_t1_ParamLimits

0xeabe,	// (0x0004969f) aid_area_touch_clock

0xaccd,	// (0x000458ae) aid_vkb2_area_top_pane_cell_ParamLimits

0xaccd,	// (0x000458ae) aid_vkb2_area_top_pane_cell

0xad7c,	// (0x0004595d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xad7c,	// (0x0004595d) aid_vkb2_area_bottom_pane_cell

0xecb7,	// (0x00049898) popup_char_count_window

0x2c87,	// (0x0003d868) popup_char_count_window_g1

0x2c90,	// (0x0003d871) popup_char_count_window_g2

0x2c99,	// (0x0003d87a) popup_char_count_window_g3

0x0002,

0xfdab,	// (0x0004a98c) popup_char_count_window_g

0x2ca2,	// (0x0003d883) popup_char_count_window_t1

0x6752,	// (0x00041333) popup_fep_char_preview_window_ParamLimits

0x6752,	// (0x00041333) popup_fep_char_preview_window

0xaced,	// (0x000458ce) vkb2_top_candi_pane_ParamLimits

0xaced,	// (0x000458ce) vkb2_top_candi_pane

0x23b9,	// (0x0003cf9a) cell_vkb2_top_candi_pane_ParamLimits

0x23b9,	// (0x0003cf9a) cell_vkb2_top_candi_pane

0x6c97,	// (0x00041878) bg_popup_fep_char_preview_window_ParamLimits

0x6c97,	// (0x00041878) bg_popup_fep_char_preview_window

0x6ca5,	// (0x00041886) popup_fep_char_preview_window_t1_ParamLimits

0x6ca5,	// (0x00041886) popup_fep_char_preview_window_t1

0x2cc0,	// (0x0003d8a1) bg_popup_fep_char_preview_window_g1

0x2cb8,	// (0x0003d899) bg_popup_fep_char_preview_window_g2

0x2cb0,	// (0x0003d891) bg_popup_fep_char_preview_window_g3

0x2ce8,	// (0x0003d8c9) bg_popup_fep_char_preview_window_g4

0x2ce0,	// (0x0003d8c1) bg_popup_fep_char_preview_window_g5

0x2cd8,	// (0x0003d8b9) bg_popup_fep_char_preview_window_g6

0x2cd0,	// (0x0003d8b1) bg_popup_fep_char_preview_window_g7

0x2cc8,	// (0x0003d8a9) bg_popup_fep_char_preview_window_g8

0x2cf0,	// (0x0003d8d1) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb2,	// (0x0004a993) bg_popup_fep_char_preview_window_g

0x5b68,	// (0x00040749) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5b68,	// (0x00040749) cell_vkb2_top_candi_pane_g1

0x5b76,	// (0x00040757) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5b76,	// (0x00040757) cell_vkb2_top_candi_pane_g2

0x2cf8,	// (0x0003d8d9) cell_vkb2_top_candi_pane_g3_ParamLimits

0x2cf8,	// (0x0003d8d9) cell_vkb2_top_candi_pane_g3

0x6ce7,	// (0x000418c8) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6ce7,	// (0x000418c8) cell_vkb2_top_candi_pane_g4

0xdf77,	// (0x00048b58) cell_vkb2_top_candi_pane_g5_ParamLimits

0xdf77,	// (0x00048b58) cell_vkb2_top_candi_pane_g5

0x6d08,	// (0x000418e9) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6d08,	// (0x000418e9) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc7,	// (0x0004a9a8) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc7,	// (0x0004a9a8) cell_vkb2_top_candi_pane_g

0x6d16,	// (0x000418f7) cell_vkb2_top_candi_pane_t1

0x5657,	// (0x00040238) aid_size_touch_slider_mark_ParamLimits

0x5657,	// (0x00040238) aid_size_touch_slider_mark

0x210d,	// (0x0003ccee) grid_graphic2_catg_pane_ParamLimits

0x210d,	// (0x0003ccee) grid_graphic2_catg_pane

0x21a4,	// (0x0003cd85) popup_grid_graphic2_window_t1_ParamLimits

0x21a4,	// (0x0003cd85) popup_grid_graphic2_window_t1

0x21b9,	// (0x0003cd9a) popup_grid_graphic2_window_t2_ParamLimits

0x21b9,	// (0x0003cd9a) popup_grid_graphic2_window_t2

0x0001,

0xfd80,	// (0x0004a961) popup_grid_graphic2_window_t_ParamLimits

0xfd80,	// (0x0004a961) popup_grid_graphic2_window_t

0x9857,	// (0x00044438) bg_button_pane_cp05_ParamLimits

0x231d,	// (0x0003cefe) cell_graphic2_control_pane_g1_ParamLimits

0xeb3a,	// (0x0004971b) cell_graphic2_catg_pane_ParamLimits

0xeb3a,	// (0x0004971b) cell_graphic2_catg_pane

0x9488,	// (0x00044069) bg_button_pane_cp12

0x2405,	// (0x0003cfe6) cell_graphic2_catg_pane_g1

0xea8a,	// (0x0004966b) cell_tb_ext_pane_t1_ParamLimits

0x6ae1,	// (0x000416c2) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6ae1,	// (0x000416c2) vkb2_top_cell_right_narrow_pane

0x6af9,	// (0x000416da) vkb2_top_cell_right_wide_pane_ParamLimits

0x6af9,	// (0x000416da) vkb2_top_cell_right_wide_pane

0x5831,	// (0x00040412) bg_vkb2_func_pane_ParamLimits

0x5831,	// (0x00040412) bg_vkb2_func_pane

0x6b6a,	// (0x0004174b) vkb2_top_cell_left_pane_g1_ParamLimits

0x5831,	// (0x00040412) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5831,	// (0x00040412) bg_vkb2_fuc_pane_cp03

0x6bc8,	// (0x000417a9) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xbc26,	// (0x00046807) bg_vkb2_func_pane_g1

0xbc2e,	// (0x0004680f) bg_vkb2_func_pane_g2

0xbc3e,	// (0x0004681f) bg_vkb2_func_pane_g3

0xbc36,	// (0x00046817) bg_vkb2_func_pane_g4

0xbc46,	// (0x00046827) bg_vkb2_func_pane_g5

0xbc4e,	// (0x0004682f) bg_vkb2_func_pane_g6

0xbc56,	// (0x00046837) bg_vkb2_func_pane_g7

0xbc5e,	// (0x0004683f) bg_vkb2_func_pane_g8

0xbc1e,	// (0x000467ff) bg_vkb2_func_pane_g9

0x0008,

0xfdd4,	// (0x0004a9b5) bg_vkb2_func_pane_g

0x5831,	// (0x00040412) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5831,	// (0x00040412) bg_vkb2_fuc_pane_cp01

0x6b6a,	// (0x0004174b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6b6a,	// (0x0004174b) vkb2_top_cell_right_wide_pane_g1

0x5831,	// (0x00040412) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5831,	// (0x00040412) bg_vkb2_fuc_pane_cp02

0x6bc8,	// (0x000417a9) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6bc8,	// (0x000417a9) vkb2_top_cell_right_narrow_pane_g1

0x1654,	// (0x0003c235) aid_touch_area_decrease_ParamLimits

0x1654,	// (0x0003c235) aid_touch_area_decrease

0x1682,	// (0x0003c263) aid_touch_area_increase_ParamLimits

0x1682,	// (0x0003c263) aid_touch_area_increase

0x16aa,	// (0x0003c28b) aid_touch_area_mute_ParamLimits

0x16aa,	// (0x0003c28b) aid_touch_area_mute

0x16d2,	// (0x0003c2b3) aid_touch_area_slider_ParamLimits

0x16d2,	// (0x0003c2b3) aid_touch_area_slider

0x1712,	// (0x0003c2f3) popup_slider_window_g4_ParamLimits

0x1712,	// (0x0003c2f3) popup_slider_window_g4

0x173a,	// (0x0003c31b) popup_slider_window_g5_ParamLimits

0x173a,	// (0x0003c31b) popup_slider_window_g5

0x176e,	// (0x0003c34f) popup_slider_window_g6_ParamLimits

0x176e,	// (0x0003c34f) popup_slider_window_g6

0xe9b6,	// (0x00049597) popup_slider_window_t2_ParamLimits

0xe9b6,	// (0x00049597) popup_slider_window_t2

0x0001,

0xfcce,	// (0x0004a8af) popup_slider_window_t_ParamLimits

0xfcce,	// (0x0004a8af) popup_slider_window_t

0x178a,	// (0x0003c36b) slider_pane_ParamLimits

0x178a,	// (0x0003c36b) slider_pane

0x2d19,	// (0x0003d8fa) slider_pane_g1_ParamLimits

0x2d19,	// (0x0003d8fa) slider_pane_g1

0x2d2d,	// (0x0003d90e) slider_pane_g2_ParamLimits

0x2d2d,	// (0x0003d90e) slider_pane_g2

0x2d43,	// (0x0003d924) slider_pane_g3_ParamLimits

0x2d43,	// (0x0003d924) slider_pane_g3

0x0003,

0xfde7,	// (0x0004a9c8) slider_pane_g_ParamLimits

0xfde7,	// (0x0004a9c8) slider_pane_g

0xa839,	// (0x0004541a) popup_tb_float_extension_window_ParamLimits

0xa839,	// (0x0004541a) popup_tb_float_extension_window

0x2d6f,	// (0x0003d950) aid_size_cell_tb_float_ext

0x9488,	// (0x00044069) bg_popup_sub_window_cp28

0x2d7a,	// (0x0003d95b) grid_tb_float_ext_pane

0x2d82,	// (0x0003d963) cell_tb_float_ext_pane_ParamLimits

0x2d82,	// (0x0003d963) cell_tb_float_ext_pane

0x2d9a,	// (0x0003d97b) cell_tb_float_ext_pane_g1

0x2da3,	// (0x0003d984) grid_highlight_pane_cp12

0xaa9e,	// (0x0004567f) cell_last_hwr_side_pane_ParamLimits

0xaa9e,	// (0x0004567f) cell_last_hwr_side_pane

0xd975,	// (0x00048556) cell_last_hwr_side_pane_g1

0x2dac,	// (0x0003d98d) cell_last_hwr_side_pane_g2

0x0001,

0xfdf0,	// (0x0004a9d1) cell_last_hwr_side_pane_g

0xae51,	// (0x00045a32) vkb2_area_bottom_space_btn_pane_ParamLimits

0xae51,	// (0x00045a32) vkb2_area_bottom_space_btn_pane

0x5b68,	// (0x00040749) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x2be3,	// (0x0003d7c4) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6d16,	// (0x000418f7) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6d2d,	// (0x0004190e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6d2d,	// (0x0004190e) vkb2_area_bottom_space_btn_pane_g1

0x6d63,	// (0x00041944) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6d63,	// (0x00041944) vkb2_area_bottom_space_btn_pane_g2

0x6d99,	// (0x0004197a) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6d99,	// (0x0004197a) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf5,	// (0x0004a9d6) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf5,	// (0x0004a9d6) vkb2_area_bottom_space_btn_pane_g

0x58ee,	// (0x000404cf) cel_fep_hwr_func_pane_ParamLimits

0x58ee,	// (0x000404cf) cel_fep_hwr_func_pane

0xaa73,	// (0x00045654) cell_hwr_side_button_pane_ParamLimits

0xaa73,	// (0x00045654) cell_hwr_side_button_pane

0xeabe,	// (0x0004969f) aid_area_touch_clock_ParamLimits

0x9857,	// (0x00044438) bg_uniindi_top_pane_ParamLimits

0xead0,	// (0x000496b1) uniindi_top_pane_g1_ParamLimits

0xeae6,	// (0x000496c7) uniindi_top_pane_g2_ParamLimits

0xeaf2,	// (0x000496d3) uniindi_top_pane_g3_ParamLimits

0xeb03,	// (0x000496e4) uniindi_top_pane_g4_ParamLimits

0xfd06,	// (0x0004a8e7) uniindi_top_pane_g_ParamLimits

0xeb10,	// (0x000496f1) uniindi_top_pane_t1_ParamLimits

0x9857,	// (0x00044438) bg_vkb2_func_pane_cp01_ParamLimits

0x9857,	// (0x00044438) bg_vkb2_func_pane_cp01

0x2db5,	// (0x0003d996) cel_fep_hwr_func_pane_g1_ParamLimits

0x2db5,	// (0x0003d996) cel_fep_hwr_func_pane_g1

0x9857,	// (0x00044438) bg_vkb2_func_pane_cp02_ParamLimits

0x9857,	// (0x00044438) bg_vkb2_func_pane_cp02

0x2db5,	// (0x0003d996) cell_hwr_side_button_pane_g1_ParamLimits

0x2db5,	// (0x0003d996) cell_hwr_side_button_pane_g1

0xbb42,	// (0x00046723) status_pane_g4_ParamLimits

0xbb42,	// (0x00046723) status_pane_g4

0xbb5a,	// (0x0004673b) status_pane_t1

0xd77b,	// (0x0004835c) form2_midp_gauge_slider_cont_pane

0xd783,	// (0x00048364) form2_midp_gauge_slider_pane_t1_ParamLimits

0x1095,	// (0x0003bc76) form2_midp_gauge_slider_pane_t2_ParamLimits

0x10a7,	// (0x0003bc88) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacd,	// (0x0004a6ae) form2_midp_gauge_slider_pane_t_ParamLimits

0xd795,	// (0x00048376) form2_midp_slider_pane_ParamLimits

0x671a,	// (0x000412fb) aid_size_cell_func_vkb2_ParamLimits

0x671a,	// (0x000412fb) aid_size_cell_func_vkb2

0x2d5b,	// (0x0003d93c) slider_pane_g4_ParamLimits

0x2d5b,	// (0x0003d93c) slider_pane_g4

0xaec4,	// (0x00045aa5) form2_midp_gauge_slider_pane_t2_cp01

0xaed2,	// (0x00045ab3) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xaed2,	// (0x00045ab3) form2_midp_gauge_slider_pane_t3_cp01

0x6e0a,	// (0x000419eb) form2_midp_slider_pane_cp01

0x9488,	// (0x00044069) navi_smil_pane

0x2de5,	// (0x0003d9c6) navi_smil_pane_g1

0x2ded,	// (0x0003d9ce) navi_smil_pane_t1

0x2dc3,	// (0x0003d9a4) form2_midp_slider_pane_g1

0x2dcc,	// (0x0003d9ad) form2_midp_slider_pane_g2

0x2dd4,	// (0x0003d9b5) form2_midp_slider_pane_g3

0x2dc3,	// (0x0003d9a4) form2_midp_slider_pane_g4

0x2439,	// (0x0003d01a) form2_midp_slider_pane_g5

0x0004,

0xfdfe,	// (0x0004a9df) form2_midp_slider_pane_g

0x6dcf,	// (0x000419b0) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6dcf,	// (0x000419b0) vkb2_area_bottom_space_btn_pane_g4

0x0687,	// (0x0003b268) lc0_navi_pane_ParamLimits

0x0687,	// (0x0003b268) lc0_navi_pane

0x06f1,	// (0x0003b2d2) lc0_stat_indi_pane_ParamLimits

0x06f1,	// (0x0003b2d2) lc0_stat_indi_pane

0x0706,	// (0x0003b2e7) ls0_title_pane_ParamLimits

0x0706,	// (0x0003b2e7) ls0_title_pane

0x9cf2,	// (0x000448d3) bg_popup_sub_pane_cp14_ParamLimits

0xeaa5,	// (0x00049686) list_uniindi_pane_ParamLimits

0xeab1,	// (0x00049692) uniindi_top_pane_ParamLimits

0xeb4c,	// (0x0004972d) list_single_uniindi_pane_g1_ParamLimits

0xeb5f,	// (0x00049740) list_single_uniindi_pane_t1_ParamLimits

0xaeef,	// (0x00045ad0) lc0_stat_clock_pane_ParamLimits

0xaeef,	// (0x00045ad0) lc0_stat_clock_pane

0x245c,	// (0x0003d03d) lc0_stat_indi_pane_g1_ParamLimits

0x245c,	// (0x0003d03d) lc0_stat_indi_pane_g1

0x244f,	// (0x0003d030) lc0_stat_indi_pane_g2_ParamLimits

0x244f,	// (0x0003d030) lc0_stat_indi_pane_g2

0x0001,

0xfe09,	// (0x0004a9ea) lc0_stat_indi_pane_g_ParamLimits

0xfe09,	// (0x0004a9ea) lc0_stat_indi_pane_g

0xaefc,	// (0x00045add) lc0_uni_indicator_pane_ParamLimits

0xaefc,	// (0x00045add) lc0_uni_indicator_pane

0x2dfb,	// (0x0003d9dc) ls0_title_pane_g1_ParamLimits

0x2dfb,	// (0x0003d9dc) ls0_title_pane_g1

0x2476,	// (0x0003d057) ls0_title_pane_t1_ParamLimits

0x2476,	// (0x0003d057) ls0_title_pane_t1

0xaf09,	// (0x00045aea) lc0_uni_indicator_pane_g1_ParamLimits

0xaf09,	// (0x00045aea) lc0_uni_indicator_pane_g1

0x2e0f,	// (0x0003d9f0) lc0_stat_clock_pane_t1

0x46d8,	// (0x0003f2b9) main_ai5_pane

0x2e1d,	// (0x0003d9fe) ai5_sk_pane_ParamLimits

0x2e1d,	// (0x0003d9fe) ai5_sk_pane

0x24b9,	// (0x0003d09a) cell_ai5_widget_pane_ParamLimits

0x24b9,	// (0x0003d09a) cell_ai5_widget_pane

0x2e2a,	// (0x0003da0b) aid_size_cell_widget_grid

0x2e37,	// (0x0003da18) bg_ai5_widget_pane_ParamLimits

0x2e37,	// (0x0003da18) bg_ai5_widget_pane

0x2546,	// (0x0003d127) cell_ai5_widget_pane_g2

0x255a,	// (0x0003d13b) cell_ai5_widget_pane_g3

0x2574,	// (0x0003d155) cell_ai5_widget_pane_g4

0x2584,	// (0x0003d165) cell_ai5_widget_pane_g5

0x2594,	// (0x0003d175) cell_ai5_widget_pane_g6

0x25a0,	// (0x0003d181) cell_ai5_widget_pane_g7

0x260c,	// (0x0003d1ed) cell_ai5_widget_pane_t1_ParamLimits

0x260c,	// (0x0003d1ed) cell_ai5_widget_pane_t1

0x2629,	// (0x0003d20a) cell_ai5_widget_pane_t2_ParamLimits

0x2629,	// (0x0003d20a) cell_ai5_widget_pane_t2

0x2641,	// (0x0003d222) cell_ai5_widget_pane_t3_ParamLimits

0x2641,	// (0x0003d222) cell_ai5_widget_pane_t3

0x2659,	// (0x0003d23a) cell_ai5_widget_pane_t4_ParamLimits

0x2659,	// (0x0003d23a) cell_ai5_widget_pane_t4

0x267f,	// (0x0003d260) cell_ai5_widget_pane_t5_ParamLimits

0x267f,	// (0x0003d260) cell_ai5_widget_pane_t5

0x2e71,	// (0x0003da52) cell_ai5_widget_pane_t6_ParamLimits

0x2e71,	// (0x0003da52) cell_ai5_widget_pane_t6

0x2e83,	// (0x0003da64) cell_ai5_widget_pane_t7_ParamLimits

0x2e83,	// (0x0003da64) cell_ai5_widget_pane_t7

0x269e,	// (0x0003d27f) cell_ai5_widget_pane_t8_ParamLimits

0x269e,	// (0x0003d27f) cell_ai5_widget_pane_t8

0x000b,

0xfe29,	// (0x0004aa0a) cell_ai5_widget_pane_t_ParamLimits

0xfe29,	// (0x0004aa0a) cell_ai5_widget_pane_t

0x2722,	// (0x0003d303) grid_ai5_widget_pane

0x9cf2,	// (0x000448d3) highlight_cell_ai5_widget_pane_ParamLimits

0x9cf2,	// (0x000448d3) highlight_cell_ai5_widget_pane

0x272e,	// (0x0003d30f) ai5_sk_left_pane

0x2738,	// (0x0003d319) ai5_sk_middle_pane

0x2742,	// (0x0003d323) ai5_sk_right_pane

0x2ea2,	// (0x0003da83) bg_ai5_widget_pane_g1_ParamLimits

0x2ea2,	// (0x0003da83) bg_ai5_widget_pane_g1

0x2eae,	// (0x0003da8f) bg_ai5_widget_pane_g2_ParamLimits

0x2eae,	// (0x0003da8f) bg_ai5_widget_pane_g2

0x2eba,	// (0x0003da9b) bg_ai5_widget_pane_g3_ParamLimits

0x2eba,	// (0x0003da9b) bg_ai5_widget_pane_g3

0x2ec6,	// (0x0003daa7) bg_ai5_widget_pane_g4_ParamLimits

0x2ec6,	// (0x0003daa7) bg_ai5_widget_pane_g4

0x2ed2,	// (0x0003dab3) bg_ai5_widget_pane_g5_ParamLimits

0x2ed2,	// (0x0003dab3) bg_ai5_widget_pane_g5

0x2ede,	// (0x0003dabf) bg_ai5_widget_pane_g6_ParamLimits

0x2ede,	// (0x0003dabf) bg_ai5_widget_pane_g6

0x2eea,	// (0x0003dacb) bg_ai5_widget_pane_g7_ParamLimits

0x2eea,	// (0x0003dacb) bg_ai5_widget_pane_g7

0x2ef6,	// (0x0003dad7) bg_ai5_widget_pane_g8_ParamLimits

0x2ef6,	// (0x0003dad7) bg_ai5_widget_pane_g8

0x2f02,	// (0x0003dae3) bg_ai5_widget_pane_g9_ParamLimits

0x2f02,	// (0x0003dae3) bg_ai5_widget_pane_g9

0x0008,

0xfe42,	// (0x0004aa23) bg_ai5_widget_pane_g_ParamLimits

0xfe42,	// (0x0004aa23) bg_ai5_widget_pane_g

0x2f32,	// (0x0003db13) cell_shortcut_ai5_widget_pane_ParamLimits

0x2f32,	// (0x0003db13) cell_shortcut_ai5_widget_pane

0x2f43,	// (0x0003db24) bg_cell_shortcut_ai5_widget_pane

0x9a11,	// (0x000445f2) cell_grid_ai5_widget_pane_g1

0xb845,	// (0x00046426) highlight_cell_shortcut_ai5_widget_pane

0xbc26,	// (0x00046807) ai5_sk_left_pane_g1

0x2f4b,	// (0x0003db2c) ai5_sk_left_pane_g2

0x2f53,	// (0x0003db34) ai5_sk_left_pane_g3

0x2f5b,	// (0x0003db3c) ai5_sk_left_pane_g4

0x0003,

0xfe55,	// (0x0004aa36) ai5_sk_left_pane_g

0x2f63,	// (0x0003db44) ai5_sk_left_pane_t1

0xbc2e,	// (0x0004680f) ai5_sk_right_pane_g1

0x2f71,	// (0x0003db52) ai5_sk_right_pane_g2

0x2f79,	// (0x0003db5a) ai5_sk_right_pane_g3

0x2f81,	// (0x0003db62) ai5_sk_right_pane_g4

0x0003,

0xfe5e,	// (0x0004aa3f) ai5_sk_right_pane_g

0x2f89,	// (0x0003db6a) ai5_sk_right_pane_t1

0xbc2e,	// (0x0004680f) ai5_sk_middle_pane_g1

0xbc26,	// (0x00046807) ai5_sk_middle_pane_g2

0xbc46,	// (0x00046827) ai5_sk_middle_pane_g3

0x2f79,	// (0x0003db5a) ai5_sk_middle_pane_g4

0x2f53,	// (0x0003db34) ai5_sk_middle_pane_g5

0x2f97,	// (0x0003db78) ai5_sk_middle_pane_g6

0x274c,	// (0x0003d32d) ai5_sk_middle_pane_g7

0x0006,

0xfe67,	// (0x0004aa48) ai5_sk_middle_pane_g

0x0585,	// (0x0003b166) aid_touch_area_size_lc0_ParamLimits

0x0585,	// (0x0003b166) aid_touch_area_size_lc0

0x5b97,	// (0x00040778) cell_hwr_candidate_pane_t1_ParamLimits

0xba77,	// (0x00046658) aid_touch_navi_pane

0x07f2,	// (0x0003b3d3) status_dt_navi_pane_ParamLimits

0x07f2,	// (0x0003b3d3) status_dt_navi_pane

0x080a,	// (0x0003b3eb) status_dt_sta_pane_ParamLimits

0x080a,	// (0x0003b3eb) status_dt_sta_pane

0x2754,	// (0x0003d335) dt_sta_controll_pane

0x2761,	// (0x0003d342) dt_sta_indi_pane

0x276e,	// (0x0003d34f) dt_sta_title_pane

0x9857,	// (0x00044438) bg_dt_sta_indi_pane_ParamLimits

0x9857,	// (0x00044438) bg_dt_sta_indi_pane

0x2780,	// (0x0003d361) dt_sta_battery_pane

0x2788,	// (0x0003d369) dt_sta_indi_pane_g1

0x2791,	// (0x0003d372) dt_sta_indi_pane_g2

0x279a,	// (0x0003d37b) dt_sta_indi_pane_g3

0x0002,

0xfe76,	// (0x0004aa57) dt_sta_indi_pane_g

0x27a3,	// (0x0003d384) dt_sta_signal_pane

0x9cf2,	// (0x000448d3) bg_dt_sta_title_pane_ParamLimits

0x9cf2,	// (0x000448d3) bg_dt_sta_title_pane

0x27ac,	// (0x0003d38d) dt_sta_title_pane_g1

0x27b4,	// (0x0003d395) dt_sta_title_pane_t1_ParamLimits

0x27b4,	// (0x0003d395) dt_sta_title_pane_t1

0x9488,	// (0x00044069) bg_dt_sta_control_pane

0x27c9,	// (0x0003d3aa) dt_sta_controll_pane_g1

0x27d2,	// (0x0003d3b3) bg_dt_sta_title_pane_g1

0x27db,	// (0x0003d3bc) bg_dt_sta_title_pane_g2

0x27e4,	// (0x0003d3c5) bg_dt_sta_title_pane_g3

0x0002,

0xfe7d,	// (0x0004aa5e) bg_dt_sta_title_pane_g

0xd975,	// (0x00048556) bg_dt_sta_indi_pane_g1

0x27ed,	// (0x0003d3ce) dt_sta_signal_pane_g1

0x27f5,	// (0x0003d3d6) dt_sta_signal_pane_g2

0x0001,

0xfe84,	// (0x0004aa65) dt_sta_signal_pane_g

0x2f9f,	// (0x0003db80) dt_sta_battery_pane_g1

0x2fa8,	// (0x0003db89) dt_sta_battery_pane_t1

0xd975,	// (0x00048556) bg_dt_sta_control_pane_g1

0xb408,	// (0x00045fe9) fep_china_uni_eep_pane

0xb410,	// (0x00045ff1) fep_china_uni_entry_pane_ParamLimits

0xb420,	// (0x00046001) popup_fep_china_uni_window_g1_ParamLimits

0xb430,	// (0x00046011) popup_fep_china_uni_window_g2_ParamLimits

0xb430,	// (0x00046011) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x0004a2de) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x0004a2de) popup_fep_china_uni_window_g

0x2fb7,	// (0x0003db98) fep_china_uni_eep_pane_g1

0x2fbf,	// (0x0003dba0) fep_china_uni_eep_pane_t1

0x2ddc,	// (0x0003d9bd) aid_touch_area_size_smil_player

0xbb15,	// (0x000466f6) lc0_clock_pane

0xbb4e,	// (0x0004672f) status_pane_g5_ParamLimits

0xbb4e,	// (0x0004672f) status_pane_g5

0xa46d,	// (0x0004504e) popup_keymap_window

0xbb2e,	// (0x0004670f) status_icon_pane

0x255a,	// (0x0003d13b) cell_ai5_widget_pane_g3_ParamLimits

0x2574,	// (0x0003d155) cell_ai5_widget_pane_g4_ParamLimits

0x2584,	// (0x0003d165) cell_ai5_widget_pane_g5_ParamLimits

0x25ac,	// (0x0003d18d) cell_ai5_widget_pane_g8_ParamLimits

0x25ac,	// (0x0003d18d) cell_ai5_widget_pane_g8

0x25c0,	// (0x0003d1a1) cell_ai5_widget_pane_g9_ParamLimits

0x25c0,	// (0x0003d1a1) cell_ai5_widget_pane_g9

0x25d4,	// (0x0003d1b5) cell_ai5_widget_pane_g10_ParamLimits

0x25d4,	// (0x0003d1b5) cell_ai5_widget_pane_g10

0x2fce,	// (0x0003dbaf) status_icon_pane_g1

0x9488,	// (0x00044069) bg_popup_sub_pane_cp13

0x2fd6,	// (0x0003dbb7) popup_keymap_window_t1

0xa1d6,	// (0x00044db7) control_pane_g6_ParamLimits

0xa1d6,	// (0x00044db7) control_pane_g6

0xa1e3,	// (0x00044dc4) control_pane_g7_ParamLimits

0xa1e3,	// (0x00044dc4) control_pane_g7

0xa1f0,	// (0x00044dd1) control_pane_g8_ParamLimits

0xa1f0,	// (0x00044dd1) control_pane_g8

0x2754,	// (0x0003d335) dt_sta_controll_pane_ParamLimits

0x2761,	// (0x0003d342) dt_sta_indi_pane_ParamLimits

0x276e,	// (0x0003d34f) dt_sta_title_pane_ParamLimits

0x9c43,	// (0x00044824) aid_size_touch_scroll_bar_cale

0x47af,	// (0x0003f390) popup_discreet_window_ParamLimits

0x47af,	// (0x0003f390) popup_discreet_window

0x95b2,	// (0x00044193) popup_sk_window

0xc1e6,	// (0x00046dc7) bg_popup_sub_pane_cp28_ParamLimits

0xc1e6,	// (0x00046dc7) bg_popup_sub_pane_cp28

0x2fe4,	// (0x0003dbc5) popup_discreet_window_g1_ParamLimits

0x2fe4,	// (0x0003dbc5) popup_discreet_window_g1

0x3004,	// (0x0003dbe5) popup_discreet_window_t1_ParamLimits

0x3004,	// (0x0003dbe5) popup_discreet_window_t1

0x3022,	// (0x0003dc03) popup_discreet_window_t2_ParamLimits

0x3022,	// (0x0003dc03) popup_discreet_window_t2

0x0002,

0xfe89,	// (0x0004aa6a) popup_discreet_window_t_ParamLimits

0xfe89,	// (0x0004aa6a) popup_discreet_window_t

0x6e3f,	// (0x00041a20) popup_sk_window_g1

0x6e48,	// (0x00041a29) popup_sk_window_g2

0x0001,

0xfe90,	// (0x0004aa71) popup_sk_window_g

0x6e51,	// (0x00041a32) popup_sk_window_t1

0x6e5f,	// (0x00041a40) popup_sk_window_t1_copy1

0x2546,	// (0x0003d127) cell_ai5_widget_pane_g2_ParamLimits

0x26b0,	// (0x0003d291) cell_ai5_widget_pane_t9_ParamLimits

0x26b0,	// (0x0003d291) cell_ai5_widget_pane_t9

0x9488,	// (0x00044069) main_fep_fshwr2_pane

0xaf1e,	// (0x00045aff) aid_fshwr2_btn_pane

0xaf32,	// (0x00045b13) aid_fshwr2_syb_pane

0xaf46,	// (0x00045b27) aid_fshwr2_txt_pane

0xaf56,	// (0x00045b37) fshwr2_func_candi_pane

0xaf6e,	// (0x00045b4f) fshwr2_hwr_syb_pane

0xaf86,	// (0x00045b67) fshwr2_icf_pane

0x46d8,	// (0x0003f2b9) fshwr2_icf_bg_pane

0xafb0,	// (0x00045b91) fshwr2_icf_pane_t1_ParamLimits

0xafb0,	// (0x00045b91) fshwr2_icf_pane_t1

0xb3a6,	// (0x00045f87) fshwr2_func_candi_pane_g1

0x28a6,	// (0x0003d487) fshwr2_func_candi_row_pane_ParamLimits

0x28a6,	// (0x0003d487) fshwr2_func_candi_row_pane

0xafc7,	// (0x00045ba8) cell_fshwr2_syb_pane_ParamLimits

0xafc7,	// (0x00045ba8) cell_fshwr2_syb_pane

0x6f2a,	// (0x00041b0b) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6f2a,	// (0x00041b0b) fshwr2_hwr_syb_pane_g1

0x46d8,	// (0x0003f2b9) bg_popup_call_pane_cp01

0xafe9,	// (0x00045bca) fshwr2_func_candi_cell_pane_ParamLimits

0xafe9,	// (0x00045bca) fshwr2_func_candi_cell_pane

0xbfd8,	// (0x00046bb9) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xbfd8,	// (0x00046bb9) fshwr2_func_candi_cell_bg_pane

0xb028,	// (0x00045c09) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb028,	// (0x00045c09) fshwr2_func_candi_cell_pane_g1

0xb05f,	// (0x00045c40) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb05f,	// (0x00045c40) fshwr2_func_candi_cell_pane_t1

0x46d8,	// (0x0003f2b9) bg_button_pane_cp08

0xb0cf,	// (0x00045cb0) cell_fshwr2_syb_bg_pane

0xb07a,	// (0x00045c5b) cell_fshwr2_syb_bg_pane_g1

0xb08e,	// (0x00045c6f) cell_fshwr2_syb_bg_pane_t1

0x9cf2,	// (0x000448d3) main_tmo_pane

0x0bf5,	// (0x0003b7d6) uni_indicator_pane_g1_ParamLimits

0x0c09,	// (0x0003b7ea) uni_indicator_pane_g2_ParamLimits

0x0c1e,	// (0x0003b7ff) uni_indicator_pane_g3_ParamLimits

0xcb6f,	// (0x00047750) uni_indicator_pane_g4_ParamLimits

0xcb6f,	// (0x00047750) uni_indicator_pane_g4

0xcb83,	// (0x00047764) uni_indicator_pane_g5_ParamLimits

0xcb83,	// (0x00047764) uni_indicator_pane_g5

0xcb83,	// (0x00047764) uni_indicator_pane_g6_ParamLimits

0xcb83,	// (0x00047764) uni_indicator_pane_g6

0xf8f5,	// (0x0004a4d6) uni_indicator_pane_g_ParamLimits

0x1638,	// (0x0003c219) popup_tmo_note_window_ParamLimits

0x1638,	// (0x0003c219) popup_tmo_note_window

0x628f,	// (0x00040e70) fshwr2_bg_pane

0xb050,	// (0x00045c31) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb050,	// (0x00045c31) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe95,	// (0x0004aa76) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe95,	// (0x0004aa76) fshwr2_func_candi_cell_pane_g

0x5b50,	// (0x00040731) bg_popup_window_pane_cp01

0x6fdf,	// (0x00041bc0) bg_popup_window_pane_g1_cp01

0x3074,	// (0x0003dc55) bg_popup_window_pane_cp22_ParamLimits

0x3074,	// (0x0003dc55) bg_popup_window_pane_cp22

0x3082,	// (0x0003dc63) listscroll_tmo_link_pane_ParamLimits

0x3082,	// (0x0003dc63) listscroll_tmo_link_pane

0x30c2,	// (0x0003dca3) popup_tmo_note_window_g1_ParamLimits

0x30c2,	// (0x0003dca3) popup_tmo_note_window_g1

0x30cf,	// (0x0003dcb0) tmo_note_info_pane_ParamLimits

0x30cf,	// (0x0003dcb0) tmo_note_info_pane

0x29a6,	// (0x0003d587) list_tmo_note_info_pane_g1_ParamLimits

0x29a6,	// (0x0003d587) list_tmo_note_info_pane_g1

0x30e9,	// (0x0003dcca) list_tmo_note_info_pane_g2_ParamLimits

0x30e9,	// (0x0003dcca) list_tmo_note_info_pane_g2

0x0001,

0xfe9a,	// (0x0004aa7b) list_tmo_note_info_pane_g_ParamLimits

0xfe9a,	// (0x0004aa7b) list_tmo_note_info_pane_g

0x3105,	// (0x0003dce6) list_tmo_note_info_text_pane_ParamLimits

0x3105,	// (0x0003dce6) list_tmo_note_info_text_pane

0x3147,	// (0x0003dd28) list_tmo_link_pane

0x3154,	// (0x0003dd35) scroll_pane_cp20

0x3161,	// (0x0003dd42) list_single_tmo_link_pane_ParamLimits

0x3161,	// (0x0003dd42) list_single_tmo_link_pane

0x3171,	// (0x0003dd52) list_single_tmo_link_pane_t1

0x317f,	// (0x0003dd60) list_tmo_note_info_text_pane_t1_ParamLimits

0x317f,	// (0x0003dd60) list_tmo_note_info_text_pane_t1

0x9db1,	// (0x00044992) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9db1,	// (0x00044992) aid_size_touch_scroll_bar_cp01

0xf1a0,	// (0x00049d81) aid_size_touch_slider_marker

0x95a6,	// (0x00044187) popup_settings_window_ParamLimits

0x95a6,	// (0x00044187) popup_settings_window

0x7a60,	// (0x00042641) popup_candi_list_indi_window

0xba77,	// (0x00046658) aid_touch_navi_pane_ParamLimits

0x61eb,	// (0x00040dcc) rs_clock_indi_pane

0x61f4,	// (0x00040dd5) sctrl_sk_bottom_pane_ParamLimits

0x6205,	// (0x00040de6) sctrl_sk_top_pane_ParamLimits

0x676c,	// (0x0004134d) popup_fep_tooltip_window

0x2e2a,	// (0x0003da0b) aid_size_cell_widget_grid_ParamLimits

0x2532,	// (0x0003d113) cell_ai5_widget_pane_g1_ParamLimits

0x2532,	// (0x0003d113) cell_ai5_widget_pane_g1

0x2594,	// (0x0003d175) cell_ai5_widget_pane_g6_ParamLimits

0x25a0,	// (0x0003d181) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe0e,	// (0x0004a9ef) cell_ai5_widget_pane_g_ParamLimits

0xfe0e,	// (0x0004a9ef) cell_ai5_widget_pane_g

0x26df,	// (0x0003d2c0) cell_ai5_widget_pane_t10_ParamLimits

0x26df,	// (0x0003d2c0) cell_ai5_widget_pane_t10

0x2722,	// (0x0003d303) grid_ai5_widget_pane_ParamLimits

0x2f0e,	// (0x0003daef) cell_contacts_ai5_widget_pane_ParamLimits

0x2f0e,	// (0x0003daef) cell_contacts_ai5_widget_pane

0x3037,	// (0x0003dc18) popup_discreet_window_t3_ParamLimits

0x3037,	// (0x0003dc18) popup_discreet_window_t3

0xaf9e,	// (0x00045b7f) popup_fshwr2_char_preview_window_ParamLimits

0xaf9e,	// (0x00045b7f) popup_fshwr2_char_preview_window

0x29bd,	// (0x0003d59e) tmo_note_info_pane_t1

0x29d2,	// (0x0003d5b3) tmo_note_info_pane_t2

0x29e7,	// (0x0003d5c8) tmo_note_info_pane_t3

0x3123,	// (0x0003dd04) tmo_note_info_pane_t4

0x3135,	// (0x0003dd16) tmo_note_info_pane_t5

0x0004,

0xfe9f,	// (0x0004aa80) tmo_note_info_pane_t

0x3147,	// (0x0003dd28) list_tmo_link_pane_ParamLimits

0x3154,	// (0x0003dd35) scroll_pane_cp20_ParamLimits

0x46d8,	// (0x0003f2b9) bg_popup_fep_char_preview_window_cp01

0x3198,	// (0x0003dd79) popup_fshwr2_char_preview_window_t1

0x31a6,	// (0x0003dd87) popup_candi_list_indi_window_g1

0x31af,	// (0x0003dd90) bg_cell_contacts_ai5_widget_pane

0x31bb,	// (0x0003dd9c) cell_contacts_ai5_widget_pane_g1

0x31d0,	// (0x0003ddb1) cell_contacts_ai5_widget_pane_g2

0x31dc,	// (0x0003ddbd) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeaa,	// (0x0004aa8b) cell_contacts_ai5_widget_pane_g

0x31e8,	// (0x0003ddc9) cell_contacts_ai5_widget_pane_t1

0x9cf2,	// (0x000448d3) highlight_cell_shortcut_ai5_widget_pane_cp01

0x325d,	// (0x0003de3e) settings_container_pane

0xb845,	// (0x00046426) listscroll_set_pane_copy1

0xd2c1,	// (0x00047ea2) scroll_pane_cp121_copy1

0x3269,	// (0x0003de4a) set_content_pane_copy1

0x3271,	// (0x0003de52) aid_height_set_list_copy1_ParamLimits

0x3271,	// (0x0003de52) aid_height_set_list_copy1

0xcd6d,	// (0x0004794e) aid_size_parent_copy1_ParamLimits

0xcd6d,	// (0x0004794e) aid_size_parent_copy1

0x327d,	// (0x0003de5e) button_value_adjust_pane_cp6_copy1_ParamLimits

0x327d,	// (0x0003de5e) button_value_adjust_pane_cp6_copy1

0xb0cf,	// (0x00045cb0) list_highlight_pane_cp2_copy1_ParamLimits

0xb0cf,	// (0x00045cb0) list_highlight_pane_cp2_copy1

0x3291,	// (0x0003de72) list_set_pane_copy1_ParamLimits

0x3291,	// (0x0003de72) list_set_pane_copy1

0x31fa,	// (0x0003dddb) main_pane_set_t1_copy1_ParamLimits

0x31fa,	// (0x0003dddb) main_pane_set_t1_copy1

0x3234,	// (0x0003de15) main_pane_set_t2_copy1_ParamLimits

0x3234,	// (0x0003de15) main_pane_set_t2_copy1

0x331f,	// (0x0003df00) main_pane_set_t3_copy1

0x332d,	// (0x0003df0e) main_pane_set_t4_copy1

0x3251,	// (0x0003de32) set_content_pane_g1_copy1_ParamLimits

0x3251,	// (0x0003de32) set_content_pane_g1_copy1

0x333b,	// (0x0003df1c) setting_code_pane_copy1

0x3343,	// (0x0003df24) setting_slider_graphic_pane_copy1

0x3343,	// (0x0003df24) setting_slider_pane_copy1

0x3343,	// (0x0003df24) setting_text_pane_copy1

0x3343,	// (0x0003df24) setting_volume_pane_copy1

0x334b,	// (0x0003df2c) settings_code_pane_cp2_copy1

0x3353,	// (0x0003df34) settings_code_pane_cp_copy1_ParamLimits

0x3353,	// (0x0003df34) settings_code_pane_cp_copy1

0x6fe8,	// (0x00041bc9) volume_set_pane_copy1

0x3367,	// (0x0003df48) volume_set_pane_g10_copy1

0x336f,	// (0x0003df50) volume_set_pane_g1_copy1

0x3377,	// (0x0003df58) volume_set_pane_g2_copy1

0x337f,	// (0x0003df60) volume_set_pane_g3_copy1

0x3387,	// (0x0003df68) volume_set_pane_g4_copy1

0x338f,	// (0x0003df70) volume_set_pane_g5_copy1

0x3397,	// (0x0003df78) volume_set_pane_g6_copy1

0x339f,	// (0x0003df80) volume_set_pane_g7_copy1

0x33a7,	// (0x0003df88) volume_set_pane_g8_copy1

0x33af,	// (0x0003df90) volume_set_pane_g9_copy1

0x96ce,	// (0x000442af) bg_set_opt_pane_cp_copy1_ParamLimits

0x96ce,	// (0x000442af) bg_set_opt_pane_cp_copy1

0x6ff0,	// (0x00041bd1) setting_slider_pane_t1_copy1_ParamLimits

0x6ff0,	// (0x00041bd1) setting_slider_pane_t1_copy1

0x7007,	// (0x00041be8) setting_slider_pane_t2_copy1_ParamLimits

0x7007,	// (0x00041be8) setting_slider_pane_t2_copy1

0x7020,	// (0x00041c01) setting_slider_pane_t3_copy1_ParamLimits

0x7020,	// (0x00041c01) setting_slider_pane_t3_copy1

0x492f,	// (0x0003f510) slider_set_pane_copy1_ParamLimits

0x492f,	// (0x0003f510) slider_set_pane_copy1

0x9d4d,	// (0x0004492e) set_opt_bg_pane_g1_copy2

0x9d55,	// (0x00044936) set_opt_bg_pane_g2_copy2

0x33b7,	// (0x0003df98) set_opt_bg_pane_g3_copy2

0x9d65,	// (0x00044946) set_opt_bg_pane_g4_copy2

0x9d6d,	// (0x0004494e) set_opt_bg_pane_g5_copy2

0x9d75,	// (0x00044956) set_opt_bg_pane_g6_copy2

0x33bf,	// (0x0003dfa0) set_opt_bg_pane_g7_copy2

0x33c7,	// (0x0003dfa8) set_opt_bg_pane_g8_copy2

0x33cf,	// (0x0003dfb0) set_opt_bg_pane_g9_copy2

0x5657,	// (0x00040238) aid_size_touch_slider_mark_copy1_ParamLimits

0x5657,	// (0x00040238) aid_size_touch_slider_mark_copy1

0xcd7f,	// (0x00047960) slider_set_pane_g1_copy1

0xcda1,	// (0x00047982) slider_set_pane_g2_copy1

0x5677,	// (0x00040258) slider_set_pane_g3_copy1_ParamLimits

0x5677,	// (0x00040258) slider_set_pane_g3_copy1

0x568b,	// (0x0004026c) slider_set_pane_g4_copy1_ParamLimits

0x568b,	// (0x0004026c) slider_set_pane_g4_copy1

0x56a3,	// (0x00040284) slider_set_pane_g5_copy1_ParamLimits

0x56a3,	// (0x00040284) slider_set_pane_g5_copy1

0x5677,	// (0x00040258) slider_set_pane_g6_copy1_ParamLimits

0x5677,	// (0x00040258) slider_set_pane_g6_copy1

0x7037,	// (0x00041c18) slider_set_pane_g7_copy1_ParamLimits

0x7037,	// (0x00041c18) slider_set_pane_g7_copy1

0x9576,	// (0x00044157) bg_set_opt_pane_cp2_copy1

0x970c,	// (0x000442ed) setting_slider_graphic_pane_g1_copy1

0x704d,	// (0x00041c2e) setting_slider_graphic_pane_t1_copy1

0x705c,	// (0x00041c3d) setting_slider_graphic_pane_t2_copy1

0x706b,	// (0x00041c4c) slider_set_pane_cp_copy1

0x33df,	// (0x0003dfc0) input_focus_pane_cp1_copy1

0x33e8,	// (0x0003dfc9) list_set_text_pane_copy1

0x33f0,	// (0x0003dfd1) setting_text_pane_g1_copy1

0x8172,	// (0x00042d53) set_text_pane_t1_copy1

0x33df,	// (0x0003dfc0) input_focus_pane_cp2_copy1

0x33f0,	// (0x0003dfd1) setting_code_pane_g1_copy1

0x33f9,	// (0x0003dfda) setting_code_pane_t1_copy1

0x2bce,	// (0x0003d7af) list_set_graphic_pane_copy1

0x9576,	// (0x00044157) bg_set_opt_pane_cp4_copy1

0xb5ad,	// (0x0004618e) list_set_graphic_pane_g1_copy1_ParamLimits

0xb5ad,	// (0x0004618e) list_set_graphic_pane_g1_copy1

0x3407,	// (0x0003dfe8) list_set_graphic_pane_g2_copy1

0xb5c5,	// (0x000461a6) list_set_graphic_pane_t1_copy1_ParamLimits

0xb5c5,	// (0x000461a6) list_set_graphic_pane_t1_copy1

0xd975,	// (0x00048556) rs_clock_indi_pane_g1

0x340f,	// (0x0003dff0) rs_clock_indi_pane_t1

0x341d,	// (0x0003dffe) rs_indi_pane

0x3425,	// (0x0003e006) rs_indi_pane_g1

0x342e,	// (0x0003e00f) rs_indi_pane_g2

0x31a6,	// (0x0003dd87) rs_indi_pane_g3

0x0002,

0xfeb1,	// (0x0004aa92) rs_indi_pane_g

0xb845,	// (0x00046426) bg_popup_preview_window_pane_cp03

0x3437,	// (0x0003e018) popup_fep_tooltip_window_t1

0xe2b6,	// (0x00048e97) popup_note2_window_g2_ParamLimits

0xe2b6,	// (0x00048e97) popup_note2_window_g2

0x0001,

0xfc45,	// (0x0004a826) popup_note2_window_g_ParamLimits

0xfc45,	// (0x0004a826) popup_note2_window_g

0xe731,	// (0x00049312) bg_popup_sub_pane_cp11_ParamLimits

0xe73e,	// (0x0004931f) cell_ai3_links_pane_g1_ParamLimits

0xe755,	// (0x00049336) cell_ai3_links_pane_t1

0x8172,	// (0x00042d53) set_text_pane_t1_copy1_ParamLimits

0xb765,	// (0x00046346) cell_graphic_popup_pane_cp2_ParamLimits

0xb765,	// (0x00046346) cell_graphic_popup_pane_cp2

0x3445,	// (0x0003e026) cell_graphic_popup_pane_g1_cp2

0x9af2,	// (0x000446d3) cell_graphic_popup_pane_g2_cp2

0x344d,	// (0x0003e02e) cell_graphic_popup_pane_g3_cp2

0x3455,	// (0x0003e036) cell_graphic_popup_pane_t2_cp2

0x9b03,	// (0x000446e4) grid_highlight_pane_cp3_cp2

0xb1df,	// (0x00045dc0) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x9cf2,	// (0x000448d3) main_tmo_pane_ParamLimits

0x1630,	// (0x0003c211) popup_tmo_big_image_note_window

0x2e69,	// (0x0003da4a) cell_ai5_widget_list_pane

0x2529,	// (0x0003d10a) cell_ai5_widget_lrg_icon_pane

0x29bd,	// (0x0003d59e) tmo_note_info_pane_t1_ParamLimits

0x29d2,	// (0x0003d5b3) tmo_note_info_pane_t2_ParamLimits

0x29e7,	// (0x0003d5c8) tmo_note_info_pane_t3_ParamLimits

0x3123,	// (0x0003dd04) tmo_note_info_pane_t4_ParamLimits

0x3135,	// (0x0003dd16) tmo_note_info_pane_t5_ParamLimits

0xfe9f,	// (0x0004aa80) tmo_note_info_pane_t_ParamLimits

0x325d,	// (0x0003de3e) settings_container_pane_ParamLimits

0x33d7,	// (0x0003dfb8) indicator_popup_pane_cp5

0x33d7,	// (0x0003dfb8) indicator_popup_pane_cp6

0x2bce,	// (0x0003d7af) list_set_graphic_pane_copy1_ParamLimits

0x9488,	// (0x00044069) bg_popup_window_pane_cp23

0x3463,	// (0x0003e044) popup_tmo_big_image_note_window_g1

0x346c,	// (0x0003e04d) popup_tmo_big_image_note_window_t1

0x347a,	// (0x0003e05b) popup_tmo_big_image_note_window_t2

0x3488,	// (0x0003e069) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb8,	// (0x0004aa99) popup_tmo_big_image_note_window_t

0xd975,	// (0x00048556) cell_ai5_widget_lrg_icon_pane_g1

0x3496,	// (0x0003e077) cell_ai5_widget_lrg_icon_pane_t1

0x29fc,	// (0x0003d5dd) cell_ai5_widget_list_row_pane_ParamLimits

0x29fc,	// (0x0003d5dd) cell_ai5_widget_list_row_pane

0x2a13,	// (0x0003d5f4) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x2a13,	// (0x0003d5f4) cell_ai5_widget_list_row_pane_g1

0x2a20,	// (0x0003d601) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x2a20,	// (0x0003d601) cell_ai5_widget_list_row_pane_t1

0x2a51,	// (0x0003d632) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x2a51,	// (0x0003d632) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfebf,	// (0x0004aaa0) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfebf,	// (0x0004aaa0) cell_ai5_widget_list_row_pane_t

0x46d8,	// (0x0003f2b9) main_fep_vtchi_ss_pane

0x34b1,	// (0x0003e092) popup_fep_char_pre_window

0x34b9,	// (0x0003e09a) popup_fep_ituss_window

0x2aa2,	// (0x0003d683) popup_fep_vkbss_window

0x34f4,	// (0x0003e0d5) grid_vkbss_keypad_pane_ParamLimits

0x34f4,	// (0x0003e0d5) grid_vkbss_keypad_pane

0x3504,	// (0x0003e0e5) ituss_keypad_pane

0x707b,	// (0x00041c5c) aid_vkbss_key_offset_ParamLimits

0x707b,	// (0x00041c5c) aid_vkbss_key_offset

0x7087,	// (0x00041c68) cell_vkbss_key_pane_ParamLimits

0x7087,	// (0x00041c68) cell_vkbss_key_pane

0x3510,	// (0x0003e0f1) bg_cell_vkbss_key_g1_ParamLimits

0x3510,	// (0x0003e0f1) bg_cell_vkbss_key_g1

0x351c,	// (0x0003e0fd) cell_vkbss_key_3p_pane_ParamLimits

0x351c,	// (0x0003e0fd) cell_vkbss_key_3p_pane

0x3552,	// (0x0003e133) cell_vkbss_key_g1_ParamLimits

0x3552,	// (0x0003e133) cell_vkbss_key_g1

0x3588,	// (0x0003e169) cell_vkbss_key_t1_ParamLimits

0x3588,	// (0x0003e169) cell_vkbss_key_t1

0x70bb,	// (0x00041c9c) cell_ituss_key_pane_ParamLimits

0x70bb,	// (0x00041c9c) cell_ituss_key_pane

0x35f8,	// (0x0003e1d9) bg_cell_ituss_key_g1_ParamLimits

0x35f8,	// (0x0003e1d9) bg_cell_ituss_key_g1

0x3604,	// (0x0003e1e5) cell_ituss_key_pane_g1_ParamLimits

0x3604,	// (0x0003e1e5) cell_ituss_key_pane_g1

0x70cc,	// (0x00041cad) cell_ituss_key_pane_g2_ParamLimits

0x70cc,	// (0x00041cad) cell_ituss_key_pane_g2

0x0005,

0xfec6,	// (0x0004aaa7) cell_ituss_key_pane_g_ParamLimits

0xfec6,	// (0x0004aaa7) cell_ituss_key_pane_g

0x7150,	// (0x00041d31) cell_ituss_key_t1_ParamLimits

0x7150,	// (0x00041d31) cell_ituss_key_t1

0x7186,	// (0x00041d67) cell_ituss_key_t2_ParamLimits

0x7186,	// (0x00041d67) cell_ituss_key_t2

0x71b8,	// (0x00041d99) cell_ituss_key_t3_ParamLimits

0x71b8,	// (0x00041d99) cell_ituss_key_t3

0x71e9,	// (0x00041dca) cell_ituss_key_t4_ParamLimits

0x71e9,	// (0x00041dca) cell_ituss_key_t4

0x0004,

0xfed3,	// (0x0004aab4) cell_ituss_key_t_ParamLimits

0xfed3,	// (0x0004aab4) cell_ituss_key_t

0x363a,	// (0x0003e21b) cell_vkbss_key_3p_pane_g1

0x3632,	// (0x0003e213) cell_vkbss_key_3p_pane_g2

0x362a,	// (0x0003e20b) cell_vkbss_key_3p_pane_g3

0x0002,

0xfede,	// (0x0004aabf) cell_vkbss_key_3p_pane_g

0xb845,	// (0x00046426) bg_popup_fep_char_preview_window_cp02

0x3642,	// (0x0003e223) popup_fep_char_pre_window_t1

0x2516,	// (0x0003d0f7) main_ai5_sk_pane

0x31af,	// (0x0003dd90) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x31bb,	// (0x0003dd9c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x31d0,	// (0x0003ddb1) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x31dc,	// (0x0003ddbd) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeaa,	// (0x0004aa8b) cell_contacts_ai5_widget_pane_g_ParamLimits

0x31e8,	// (0x0003ddc9) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x9cf2,	// (0x000448d3) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x2aaf,	// (0x0003d690) main_ai5_sk_pane_g1

0xc030,	// (0x00046c11) popup_query_code_window_g1

0x2a94,	// (0x0003d675) popup_fep_vkb_icf_pane

0x34cb,	// (0x0003e0ac) popup_fep_vtchi_icf_pane

0x3650,	// (0x0003e231) bg_icf_pane

0x3650,	// (0x0003e231) list_vkb_icf_pane

0x365c,	// (0x0003e23d) bg_icf_pane_cp01

0x366f,	// (0x0003e250) vtchi_icf_list_pane

0x2b04,	// (0x0003d6e5) list_vkb_icf_pane_t1_ParamLimits

0x2b04,	// (0x0003d6e5) list_vkb_icf_pane_t1

0x367f,	// (0x0003e260) vtchi_icf_list_pane_t1_ParamLimits

0x367f,	// (0x0003e260) vtchi_icf_list_pane_t1

0x34b9,	// (0x0003e09a) popup_fep_ituss_window_ParamLimits

0x34cb,	// (0x0003e0ac) popup_fep_vtchi_icf_pane_ParamLimits

0x3504,	// (0x0003e0e5) ituss_keypad_pane_ParamLimits

0x7073,	// (0x00041c54) ituss_sks_pane

0x3650,	// (0x0003e231) bg_icf_pane_ParamLimits

0x2a79,	// (0x0003d65a) icf_edit_indi_pane_ParamLimits

0x2a79,	// (0x0003d65a) icf_edit_indi_pane

0x3650,	// (0x0003e231) list_vkb_icf_pane_ParamLimits

0x365c,	// (0x0003e23d) bg_icf_pane_cp01_ParamLimits

0x34a4,	// (0x0003e085) icf_edit_indi_pane_cp01_ParamLimits

0x34a4,	// (0x0003e085) icf_edit_indi_pane_cp01

0x3677,	// (0x0003e258) vtchi_query_pane

0x2db5,	// (0x0003d996) icf_edit_indi_pane_g1_ParamLimits

0x2db5,	// (0x0003d996) icf_edit_indi_pane_g1

0x2b1b,	// (0x0003d6fc) icf_edit_indi_pane_g2_ParamLimits

0x2b1b,	// (0x0003d6fc) icf_edit_indi_pane_g2

0x0001,

0xff09,	// (0x0004aaea) icf_edit_indi_pane_g_ParamLimits

0xff09,	// (0x0004aaea) icf_edit_indi_pane_g

0x2b2d,	// (0x0003d70e) icf_edit_indi_pane_t1

0x3697,	// (0x0003e278) bg_input_focus_pane_cp042

0x36a0,	// (0x0003e281) vtchi_button_pane

0x36a9,	// (0x0003e28a) vtchi_query_pane_t1

0x36b7,	// (0x0003e298) vtchi_query_pane_t2

0x36c5,	// (0x0003e2a6) vtchi_query_pane_t3

0x0002,

0xfef8,	// (0x0004aad9) vtchi_query_pane_t

0x46d8,	// (0x0003f2b9) bg_button_pane_cp13

0x36d3,	// (0x0003e2b4) vtchi_button_pane_g1

0x722c,	// (0x00041e0d) ituss_sks_pane_g1

0x7235,	// (0x00041e16) ituss_sks_pane_g2

0x0001,

0xfeff,	// (0x0004aae0) ituss_sks_pane_g

0x36e9,	// (0x0003e2ca) ituss_sks_pane_t1

0x36db,	// (0x0003e2bc) ituss_sks_pane_t2

0x0001,

0xff04,	// (0x0004aae5) ituss_sks_pane_t

0xd5a2,	// (0x00048183) indicator_nsta_pane_cp_g1

0xd5ab,	// (0x0004818c) indicator_nsta_pane_cp_g2

0xd5b3,	// (0x00048194) indicator_nsta_pane_cp_g3

0xd5bb,	// (0x0004819c) indicator_nsta_pane_cp_g4

0xd5c3,	// (0x000481a4) indicator_nsta_pane_cp_g5

0xd5cb,	// (0x000481ac) indicator_nsta_pane_cp_g6

0x0005,

0xfa83,	// (0x0004a664) indicator_nsta_pane_cp_g

0x22ff,	// (0x0003cee0) cell_graphic2_pane_t2_ParamLimits

0x22ff,	// (0x0003cee0) cell_graphic2_pane_t2

0x0001,

0xfd95,	// (0x0004a976) cell_graphic2_pane_t_ParamLimits

0xfd95,	// (0x0004a976) cell_graphic2_pane_t

0x2337,	// (0x0003cf18) cell_graphic2_control_pane_t1

0xa063,	// (0x00044c44) signal_pane_g3_ParamLimits

0xa063,	// (0x00044c44) signal_pane_g3

0xa077,	// (0x00044c58) signal_pane_g4_ParamLimits

0xa077,	// (0x00044c58) signal_pane_g4

0x2a63,	// (0x0003d644) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x2a63,	// (0x0003d644) cell_ai5_widget_list_row_pane_t3

0x3618,	// (0x0003e1f9) cell_ituss_key_pane_t1_ParamLimits

0x3618,	// (0x0003e1f9) cell_ituss_key_pane_t1

0xbcf2,	// (0x000468d3) form_field_data_wide_pane_vc_t2_ParamLimits

0xbcf2,	// (0x000468d3) form_field_data_wide_pane_vc_t2

0xbd04,	// (0x000468e5) form_field_data_wide_pane_vc_t3_ParamLimits

0xbd04,	// (0x000468e5) form_field_data_wide_pane_vc_t3

0x0002,

0xf7dd,	// (0x0004a3be) form_field_data_wide_pane_vc_t_ParamLimits

0xf7dd,	// (0x0004a3be) form_field_data_wide_pane_vc_t

0xd306,	// (0x00047ee7) form_field_slider_wide_pane_vc_t3_ParamLimits

0xd306,	// (0x00047ee7) form_field_slider_wide_pane_vc_t3

0xd3c4,	// (0x00047fa5) form_field_popup_wide_pane_vc_t2_ParamLimits

0xd3c4,	// (0x00047fa5) form_field_popup_wide_pane_vc_t2

0xd3d9,	// (0x00047fba) form_field_popup_wide_pane_vc_t3_ParamLimits

0xd3d9,	// (0x00047fba) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa72,	// (0x0004a653) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0004a653) form_field_popup_wide_pane_vc_t

0xaf1e,	// (0x00045aff) aid_fshwr2_btn_pane_ParamLimits

0xaf32,	// (0x00045b13) aid_fshwr2_syb_pane_ParamLimits

0xaf46,	// (0x00045b27) aid_fshwr2_txt_pane_ParamLimits

0x628f,	// (0x00040e70) fshwr2_bg_pane_ParamLimits

0xaf56,	// (0x00045b37) fshwr2_func_candi_pane_ParamLimits

0xaf6e,	// (0x00045b4f) fshwr2_hwr_syb_pane_ParamLimits

0xaf86,	// (0x00045b67) fshwr2_icf_pane_ParamLimits

0x7e54,	// (0x00042a35) list_double_graphic_pane_vc_g4_ParamLimits

0x7e54,	// (0x00042a35) list_double_graphic_pane_vc_g4

0x70ec,	// (0x00041ccd) cell_ituss_key_pane_g3_ParamLimits

0x70ec,	// (0x00041ccd) cell_ituss_key_pane_g3

0x721a,	// (0x00041dfb) cell_ituss_key_t5_ParamLimits

0x721a,	// (0x00041dfb) cell_ituss_key_t5

0x2aa2,	// (0x0003d683) popup_fep_vkbss_window_ParamLimits

0x2520,	// (0x0003d101) aid_cell_ai5_quarter

0x2b2d,	// (0x0003d70e) icf_edit_indi_pane_t1_ParamLimits

0x98ff,	// (0x000444e0) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x98ff,	// (0x000444e0) aid_tch_indicator_popup_pane_cp2

0x9912,	// (0x000444f3) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x9912,	// (0x000444f3) aid_tch_query_popup_data_pane_cp2

0xbfd8,	// (0x00046bb9) aid_tch_query_popup_pane_ParamLimits

0xbfd8,	// (0x00046bb9) aid_tch_query_popup_pane

0xbfd8,	// (0x00046bb9) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xbfd8,	// (0x00046bb9) aid_tch_query_popup_data_pane_cp1

0xb0cf,	// (0x00045cb0) cell_fshwr2_syb_bg_pane_ParamLimits

0xb07a,	// (0x00045c5b) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xb08e,	// (0x00045c6f) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0x2a94,	// (0x0003d675) popup_fep_vkb_icf_pane_ParamLimits

0xaebc,	// (0x00045a9d) bg_popup_fep_char_preview_window_g10

0x25e8,	// (0x0003d1c9) cell_ai5_widget_pane_g11_ParamLimits

0x25e8,	// (0x0003d1c9) cell_ai5_widget_pane_g11

0x25f4,	// (0x0003d1d5) cell_ai5_widget_pane_g12_ParamLimits

0x25f4,	// (0x0003d1d5) cell_ai5_widget_pane_g12

0x2600,	// (0x0003d1e1) cell_ai5_widget_pane_g13_ParamLimits

0x2600,	// (0x0003d1e1) cell_ai5_widget_pane_g13

0x26fe,	// (0x0003d2df) cell_ai5_widget_pane_t11_ParamLimits

0x26fe,	// (0x0003d2df) cell_ai5_widget_pane_t11

0x2710,	// (0x0003d2f1) cell_ai5_widget_pane_t12_ParamLimits

0x2710,	// (0x0003d2f1) cell_ai5_widget_pane_t12

0x70f8,	// (0x00041cd9) cell_ituss_key_pane_g4_ParamLimits

0x70f8,	// (0x00041cd9) cell_ituss_key_pane_g4

0x7114,	// (0x00041cf5) cell_ituss_key_pane_g5_ParamLimits

0x7114,	// (0x00041cf5) cell_ituss_key_pane_g5

0x7130,	// (0x00041d11) cell_ituss_key_pane_g6_ParamLimits

0x7130,	// (0x00041d11) cell_ituss_key_pane_g6

0xbc1e,	// (0x000467ff) bg_icf_pane_g1

0x2ab8,	// (0x0003d699) bg_icf_pane_g2

0x2ac2,	// (0x0003d6a3) bg_icf_pane_g3

0x2aca,	// (0x0003d6ab) bg_icf_pane_g4

0x2ad4,	// (0x0003d6b5) bg_icf_pane_g5

0x2ade,	// (0x0003d6bf) bg_icf_pane_g6

0x2ae8,	// (0x0003d6c9) bg_icf_pane_g7

0x2af0,	// (0x0003d6d1) bg_icf_pane_g8

0x2afa,	// (0x0003d6db) bg_icf_pane_g9

0x0008,

0xfee5,	// (0x0004aac6) bg_icf_pane_g

0x34e1,	// (0x0003e0c2) popup_hyb_candi_window_ParamLimits

0x34e1,	// (0x0003e0c2) popup_hyb_candi_window

0xbc92,	// (0x00046873) bg_popup_sub_pane_cp01_ParamLimits

0xbc92,	// (0x00046873) bg_popup_sub_pane_cp01

0x36f7,	// (0x0003e2d8) entry_hyb_candi_pane_ParamLimits

0x36f7,	// (0x0003e2d8) entry_hyb_candi_pane

0x3706,	// (0x0003e2e7) grid_hyb_candi_pane_ParamLimits

0x3706,	// (0x0003e2e7) grid_hyb_candi_pane

0x371b,	// (0x0003e2fc) grid_hyb_phrase_pane_ParamLimits

0x371b,	// (0x0003e2fc) grid_hyb_phrase_pane

0x372a,	// (0x0003e30b) cell_hyb_candi_pane_ParamLimits

0x372a,	// (0x0003e30b) cell_hyb_candi_pane

0x3742,	// (0x0003e323) cell_hyb_candi_scroll_pane

0xb3a6,	// (0x00045f87) cell_hyb_candi_pane_g1

0x374b,	// (0x0003e32c) cell_hyb_candi_pane_t1

0x3759,	// (0x0003e33a) cell_hyb_phrase_pane

0xb3a6,	// (0x00045f87) cell_hyb_phrase_pane_g1

0x3762,	// (0x0003e343) cell_hyb_phrase_pane_t1

0x3770,	// (0x0003e351) entry_hyb_candi_pane_t1

0xb845,	// (0x00046426) input_focus_pane_cp06

0x377e,	// (0x0003e35f) cell_hyb_candi_scroll_pane_g1

0x3786,	// (0x0003e367) cell_hyb_candi_scroll_pane_g1_aid

0x378e,	// (0x0003e36f) cell_hyb_candi_scroll_pane_g2

0x3796,	// (0x0003e377) cell_hyb_candi_scroll_pane_g2_aid

0x379e,	// (0x0003e37f) cell_hyb_candi_scroll_pane_g3

0x37a6,	// (0x0003e387) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Large

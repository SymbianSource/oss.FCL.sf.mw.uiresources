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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0003f093 };

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
0xae60,	// (0x00049ef3) Screen

0xae6c,	// (0x00049eff) application_window_ParamLimits

0xae6c,	// (0x00049eff) application_window

0x3891,	// (0x00042924) screen_g1

0x85dd,	// (0x00047670) area_bottom_pane_ParamLimits

0x85dd,	// (0x00047670) area_bottom_pane

0x869d,	// (0x00047730) area_top_pane_ParamLimits

0x869d,	// (0x00047730) area_top_pane

0x873b,	// (0x000477ce) main_pane_ParamLimits

0x873b,	// (0x000477ce) main_pane

0x389b,	// (0x0004292e) misc_graphics

0xb707,	// (0x0004a79a) battery_pane_ParamLimits

0xb707,	// (0x0004a79a) battery_pane

0x5b2e,	// (0x00044bc1) bg_status_flat_pane_g8

0x5b36,	// (0x00044bc9) bg_status_flat_pane_g9

0x52a4,	// (0x00044337) context_pane_ParamLimits

0x52a4,	// (0x00044337) context_pane

0xb83b,	// (0x0004a8ce) navi_pane_ParamLimits

0xb83b,	// (0x0004a8ce) navi_pane

0xb8a8,	// (0x0004a93b) signal_pane_ParamLimits

0xb8a8,	// (0x0004a93b) signal_pane

0x0008,

0xf87f,	// (0x0004e912) bg_status_flat_pane_g

0xb90d,	// (0x0004a9a0) status_pane_g1_ParamLimits

0xb90d,	// (0x0004a9a0) status_pane_g1

0x611b,	// (0x000451ae) status_pane_g2_ParamLimits

0x611b,	// (0x000451ae) status_pane_g2

0x5309,	// (0x0004439c) status_pane_g3_ParamLimits

0x5309,	// (0x0004439c) status_pane_g3

0x0004,

0xf7ab,	// (0x0004e83e) status_pane_g_ParamLimits

0xf7ab,	// (0x0004e83e) status_pane_g

0xb921,	// (0x0004a9b4) title_pane_ParamLimits

0xb921,	// (0x0004a9b4) title_pane

0xb95e,	// (0x0004a9f1) uni_indicator_pane_ParamLimits

0xb95e,	// (0x0004a9f1) uni_indicator_pane

0x51e7,	// (0x0004427a) bg_list_pane_ParamLimits

0x51e7,	// (0x0004427a) bg_list_pane

0xb68c,	// (0x0004a71f) find_pane

0xb694,	// (0x0004a727) listscroll_app_pane_ParamLimits

0xb694,	// (0x0004a727) listscroll_app_pane

0x5207,	// (0x0004429a) listscroll_form_pane

0x95de,	// (0x00048671) listscroll_gen_pane_ParamLimits

0x95de,	// (0x00048671) listscroll_gen_pane

0x5207,	// (0x0004429a) listscroll_set_pane

0xb310,	// (0x0004a3a3) main_idle_act_pane

0x4fcb,	// (0x0004405e) main_idle_trad_pane

0x4fcb,	// (0x0004405e) main_list_empty_pane

0x475f,	// (0x000437f2) main_midp_pane

0x5221,	// (0x000442b4) main_pane_g1_ParamLimits

0x5221,	// (0x000442b4) main_pane_g1

0x9600,	// (0x00048693) popup_ai_message_window_ParamLimits

0x9600,	// (0x00048693) popup_ai_message_window

0x96a4,	// (0x00048737) popup_fep_china_uni_window_ParamLimits

0x96a4,	// (0x00048737) popup_fep_china_uni_window

0x96fe,	// (0x00048791) popup_fep_japan_candidate_window_ParamLimits

0x96fe,	// (0x00048791) popup_fep_japan_candidate_window

0x971c,	// (0x000487af) popup_fep_japan_predictive_window_ParamLimits

0x971c,	// (0x000487af) popup_fep_japan_predictive_window

0x974c,	// (0x000487df) popup_find_window

0x9759,	// (0x000487ec) popup_grid_graphic_window_ParamLimits

0x9759,	// (0x000487ec) popup_grid_graphic_window

0x9781,	// (0x00048814) popup_large_graphic_colour_window

0x97a7,	// (0x0004883a) popup_menu_window_ParamLimits

0x97a7,	// (0x0004883a) popup_menu_window

0x9961,	// (0x000489f4) popup_note_image_window

0x994d,	// (0x000489e0) popup_note_wait_window_ParamLimits

0x994d,	// (0x000489e0) popup_note_wait_window

0x994d,	// (0x000489e0) popup_note_window_ParamLimits

0x994d,	// (0x000489e0) popup_note_window

0x99b7,	// (0x00048a4a) popup_query_code_window_ParamLimits

0x99b7,	// (0x00048a4a) popup_query_code_window

0x99cb,	// (0x00048a5e) popup_query_data_code_window_ParamLimits

0x99cb,	// (0x00048a5e) popup_query_data_code_window

0x99e6,	// (0x00048a79) popup_query_data_window_ParamLimits

0x99e6,	// (0x00048a79) popup_query_data_window

0x9a00,	// (0x00048a93) popup_query_sat_info_window_ParamLimits

0x9a00,	// (0x00048a93) popup_query_sat_info_window

0x9a39,	// (0x00048acc) popup_snote_single_graphic_window_ParamLimits

0x9a39,	// (0x00048acc) popup_snote_single_graphic_window

0x9a39,	// (0x00048acc) popup_snote_single_text_window_ParamLimits

0x9a39,	// (0x00048acc) popup_snote_single_text_window

0x9a4e,	// (0x00048ae1) popup_sub_window_general

0x9b7c,	// (0x00048c0f) popup_window_general_ParamLimits

0x9b7c,	// (0x00048c0f) popup_window_general

0x522f,	// (0x000442c2) power_save_pane

0x9484,	// (0x00048517) control_pane_g1_ParamLimits

0x9484,	// (0x00048517) control_pane_g1

0x94ab,	// (0x0004853e) control_pane_g2_ParamLimits

0x94ab,	// (0x0004853e) control_pane_g2

0x51d1,	// (0x00044264) control_pane_g3_ParamLimits

0x51d1,	// (0x00044264) control_pane_g3

0x0007,

0xf793,	// (0x0004e826) control_pane_g_ParamLimits

0xf793,	// (0x0004e826) control_pane_g

0x94f3,	// (0x00048586) control_pane_t1_ParamLimits

0x94f3,	// (0x00048586) control_pane_t1

0x953f,	// (0x000485d2) control_pane_t2_ParamLimits

0x953f,	// (0x000485d2) control_pane_t2

0x0002,

0xf7a4,	// (0x0004e837) control_pane_t_ParamLimits

0xf7a4,	// (0x0004e837) control_pane_t

0x50f2,	// (0x00044185) navi_navi_volume_pane_cp1

0x50fb,	// (0x0004418e) status_small_icon_pane

0x5103,	// (0x00044196) status_small_pane_g1_ParamLimits

0x5103,	// (0x00044196) status_small_pane_g1

0x5137,	// (0x000441ca) status_small_pane_g2_ParamLimits

0x5137,	// (0x000441ca) status_small_pane_g2

0x5143,	// (0x000441d6) status_small_pane_g3_ParamLimits

0x5143,	// (0x000441d6) status_small_pane_g3

0x514f,	// (0x000441e2) status_small_pane_g4_ParamLimits

0x514f,	// (0x000441e2) status_small_pane_g4

0x515b,	// (0x000441ee) status_small_pane_g5_ParamLimits

0x515b,	// (0x000441ee) status_small_pane_g5

0x516a,	// (0x000441fd) status_small_pane_g6_ParamLimits

0x516a,	// (0x000441fd) status_small_pane_g6

0x0007,

0xf782,	// (0x0004e815) status_small_pane_g_ParamLimits

0xf782,	// (0x0004e815) status_small_pane_g

0x519a,	// (0x0004422d) status_small_pane_t1

0x51bd,	// (0x00044250) status_small_wait_pane_ParamLimits

0x51bd,	// (0x00044250) status_small_wait_pane

0xb3ec,	// (0x0004a47f) aid_levels_signal_ParamLimits

0xb3ec,	// (0x0004a47f) aid_levels_signal

0xb3fe,	// (0x0004a491) signal_pane_g1_ParamLimits

0xb3fe,	// (0x0004a491) signal_pane_g1

0xb413,	// (0x0004a4a6) signal_pane_g2_ParamLimits

0xb413,	// (0x0004a4a6) signal_pane_g2

0x0003,

0xf713,	// (0x0004e7a6) signal_pane_g_ParamLimits

0xf713,	// (0x0004e7a6) signal_pane_g

0x4b81,	// (0x00043c14) context_pane_g1

0xae7c,	// (0x00049f0f) title_pane_g1

0xaea6,	// (0x00049f39) title_pane_t1

0x38b1,	// (0x00042944) title_pane_t2

0x38d7,	// (0x0004296a) title_pane_t3

0x0002,

0xf55d,	// (0x0004e5f0) title_pane_t

0xb976,	// (0x0004aa09) aid_levels_battery_ParamLimits

0xb976,	// (0x0004aa09) aid_levels_battery

0xb98a,	// (0x0004aa1d) battery_pane_g1_ParamLimits

0xb98a,	// (0x0004aa1d) battery_pane_g1

0xb9a0,	// (0x0004aa33) battery_pane_g2_ParamLimits

0xb9a0,	// (0x0004aa33) battery_pane_g2

0x0001,

0xf7b6,	// (0x0004e849) battery_pane_g_ParamLimits

0xf7b6,	// (0x0004e849) battery_pane_g

0xbd65,	// (0x0004adf8) uni_indicator_pane_g1

0xbd7a,	// (0x0004ae0d) uni_indicator_pane_g2

0x6329,	// (0x000453bc) uni_indicator_pane_g3

0x0005,

0xf927,	// (0x0004e9ba) uni_indicator_pane_g

0x4e61,	// (0x00043ef4) navi_icon_pane_ParamLimits

0x4e61,	// (0x00043ef4) navi_icon_pane

0x4de5,	// (0x00043e78) navi_midp_pane

0x4e7d,	// (0x00043f10) navi_navi_pane

0x4e87,	// (0x00043f1a) navi_text_pane_ParamLimits

0x4e87,	// (0x00043f1a) navi_text_pane

0x3891,	// (0x00042924) status_small_wait_pane_g1

0x3bb2,	// (0x00042c45) status_small_wait_pane_g2

0x0001,

0xf922,	// (0x0004e9b5) status_small_wait_pane_g

0x6072,	// (0x00045105) navi_navi_icon_text_pane

0x608c,	// (0x0004511f) navi_navi_pane_g1_ParamLimits

0x608c,	// (0x0004511f) navi_navi_pane_g1

0x607a,	// (0x0004510d) navi_navi_pane_g2_ParamLimits

0x607a,	// (0x0004510d) navi_navi_pane_g2

0x0001,

0xf8f0,	// (0x0004e983) navi_navi_pane_g_ParamLimits

0xf8f0,	// (0x0004e983) navi_navi_pane_g

0x609e,	// (0x00045131) navi_navi_tabs_pane

0x60a7,	// (0x0004513a) navi_navi_text_pane

0x6072,	// (0x00045105) navi_navi_volume_pane

0xbcf8,	// (0x0004ad8b) navi_text_pane_t1

0x6054,	// (0x000450e7) navi_icon_pane_g1

0x5fbb,	// (0x0004504e) navi_navi_text_pane_t1

0x9e20,	// (0x00048eb3) navi_navi_volume_pane_g1

0x9e28,	// (0x00048ebb) volume_small_pane

0xbc56,	// (0x0004ace9) navi_navi_icon_text_pane_g1

0xbc5e,	// (0x0004acf1) navi_navi_icon_text_pane_t1

0x4e7d,	// (0x00043f10) navi_tabs_2_long_pane

0x4e7d,	// (0x00043f10) navi_tabs_2_pane

0x4e7d,	// (0x00043f10) navi_tabs_3_long_pane

0x4e7d,	// (0x00043f10) navi_tabs_3_pane

0x4e7d,	// (0x00043f10) navi_tabs_4_pane

0x9e00,	// (0x00048e93) tabs_2_active_pane_ParamLimits

0x9e00,	// (0x00048e93) tabs_2_active_pane

0x9e10,	// (0x00048ea3) tabs_2_passive_pane_ParamLimits

0x9e10,	// (0x00048ea3) tabs_2_passive_pane

0x9dce,	// (0x00048e61) tabs_3_active_pane_ParamLimits

0x9dce,	// (0x00048e61) tabs_3_active_pane

0x9dde,	// (0x00048e71) tabs_3_passive_pane_ParamLimits

0x9dde,	// (0x00048e71) tabs_3_passive_pane

0x9def,	// (0x00048e82) tabs_3_passive_pane_cp_ParamLimits

0x9def,	// (0x00048e82) tabs_3_passive_pane_cp

0x9d8a,	// (0x00048e1d) tabs_4_active_pane_ParamLimits

0x9d8a,	// (0x00048e1d) tabs_4_active_pane

0x9d9b,	// (0x00048e2e) tabs_4_passive_pane_ParamLimits

0x9d9b,	// (0x00048e2e) tabs_4_passive_pane

0x9dac,	// (0x00048e3f) tabs_4_passive_pane_cp_ParamLimits

0x9dac,	// (0x00048e3f) tabs_4_passive_pane_cp

0x9dbd,	// (0x00048e50) tabs_4_passive_pane_cp2_ParamLimits

0x9dbd,	// (0x00048e50) tabs_4_passive_pane_cp2

0x9d66,	// (0x00048df9) tabs_2_long_active_pane_ParamLimits

0x9d66,	// (0x00048df9) tabs_2_long_active_pane

0x9d78,	// (0x00048e0b) tabs_2_long_passive_pane_ParamLimits

0x9d78,	// (0x00048e0b) tabs_2_long_passive_pane

0x9d2d,	// (0x00048dc0) tabs_3_long_active_pane_ParamLimits

0x9d2d,	// (0x00048dc0) tabs_3_long_active_pane

0x9d40,	// (0x00048dd3) tabs_3_long_passive_pane_ParamLimits

0x9d40,	// (0x00048dd3) tabs_3_long_passive_pane

0x9d53,	// (0x00048de6) tabs_3_long_passive_pane_cp_ParamLimits

0x9d53,	// (0x00048de6) tabs_3_long_passive_pane_cp

0x9cd3,	// (0x00048d66) volume_small_pane_g1

0x9cdc,	// (0x00048d6f) volume_small_pane_g2

0x9ce5,	// (0x00048d78) volume_small_pane_g3

0x9cee,	// (0x00048d81) volume_small_pane_g4

0x9cf7,	// (0x00048d8a) volume_small_pane_g5

0x9d00,	// (0x00048d93) volume_small_pane_g6

0x9d09,	// (0x00048d9c) volume_small_pane_g7

0x9d12,	// (0x00048da5) volume_small_pane_g8

0x9d1b,	// (0x00048dae) volume_small_pane_g9

0x9d24,	// (0x00048db7) volume_small_pane_g10

0x0009,

0xf8bc,	// (0x0004e94f) volume_small_pane_g

0x38f7,	// (0x0004298a) bg_active_tab_pane_cp2_ParamLimits

0x38f7,	// (0x0004298a) bg_active_tab_pane_cp2

0xaf0e,	// (0x00049fa1) tabs_3_active_pane_g1

0xaf16,	// (0x00049fa9) tabs_3_active_pane_t1

0x38f7,	// (0x0004298a) bg_passive_tab_pane_cp2_ParamLimits

0x38f7,	// (0x0004298a) bg_passive_tab_pane_cp2

0xaf0e,	// (0x00049fa1) tabs_3_passive_pane_g1

0xaf16,	// (0x00049fa9) tabs_3_passive_pane_t1

0x38f7,	// (0x0004298a) bg_active_tab_pane_cp3_ParamLimits

0x38f7,	// (0x0004298a) bg_active_tab_pane_cp3

0xaf28,	// (0x00049fbb) tabs_4_active_pane_g1

0xaf30,	// (0x00049fc3) tabs_4_active_pane_t1

0x38f7,	// (0x0004298a) bg_passive_tab_pane_cp3_ParamLimits

0x38f7,	// (0x0004298a) bg_passive_tab_pane_cp3

0xaf28,	// (0x00049fbb) tabs_4_1_passive_pane_g1

0xaf30,	// (0x00049fc3) tabs_4_1_passive_pane_t1

0x475f,	// (0x000437f2) list_highlight_pane_cp2

0xbe04,	// (0x0004ae97) list_set_pane_ParamLimits

0xbe04,	// (0x0004ae97) list_set_pane

0xc404,	// (0x0004b497) main_pane_set_t1_ParamLimits

0xc404,	// (0x0004b497) main_pane_set_t1

0xc424,	// (0x0004b4b7) main_pane_set_t2_ParamLimits

0xc424,	// (0x0004b4b7) main_pane_set_t2

0xc438,	// (0x0004b4cb) main_pane_set_t3_ParamLimits

0xc438,	// (0x0004b4cb) main_pane_set_t3

0xc44a,	// (0x0004b4dd) main_pane_set_t4_ParamLimits

0xc44a,	// (0x0004b4dd) main_pane_set_t4

0x0003,

0xf98c,	// (0x0004ea1f) main_pane_set_t_ParamLimits

0xf98c,	// (0x0004ea1f) main_pane_set_t

0xc45c,	// (0x0004b4ef) setting_code_pane

0xc466,	// (0x0004b4f9) setting_slider_graphic_pane

0xc466,	// (0x0004b4f9) setting_slider_pane

0xc466,	// (0x0004b4f9) setting_text_pane

0xc466,	// (0x0004b4f9) setting_volume_pane

0x8972,	// (0x00047a05) volume_set_pane

0x38f7,	// (0x0004298a) bg_set_opt_pane_cp

0x897a,	// (0x00047a0d) setting_slider_pane_t1

0x8993,	// (0x00047a26) setting_slider_pane_t2

0x89ad,	// (0x00047a40) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0004e5f7) setting_slider_pane_t

0x89c5,	// (0x00047a58) slider_set_pane

0x389b,	// (0x0004292e) bg_set_opt_pane_cp2

0x3905,	// (0x00042998) setting_slider_graphic_pane_g1

0x89db,	// (0x00047a6e) setting_slider_graphic_pane_t1

0x89eb,	// (0x00047a7e) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0004e5fe) setting_slider_graphic_pane_t

0x89fb,	// (0x00047a8e) slider_set_pane_cp

0x389b,	// (0x0004292e) input_focus_pane_cp1

0x6506,	// (0x00045599) list_set_text_pane

0x3891,	// (0x00042924) setting_text_pane_g1

0x389b,	// (0x0004292e) input_focus_pane_cp2

0x3891,	// (0x00042924) setting_code_pane_g1

0x390e,	// (0x000429a1) setting_code_pane_t1

0x8a03,	// (0x00047a96) set_text_pane_t1_ParamLimits

0x8a03,	// (0x00047a96) set_text_pane_t1

0x4655,	// (0x000436e8) set_opt_bg_pane_g1

0x465d,	// (0x000436f0) set_opt_bg_pane_g2

0x64e6,	// (0x00045579) set_opt_bg_pane_g3

0x466d,	// (0x00043700) set_opt_bg_pane_g4

0x4675,	// (0x00043708) set_opt_bg_pane_g5

0x467d,	// (0x00043710) set_opt_bg_pane_g6

0x64ee,	// (0x00045581) set_opt_bg_pane_g7

0x64f6,	// (0x00045589) set_opt_bg_pane_g8

0x64fe,	// (0x00045591) set_opt_bg_pane_g9

0x0008,

0xf979,	// (0x0004ea0c) set_opt_bg_pane_g

0x64d9,	// (0x0004556c) slider_set_pane_g1

0x9e95,	// (0x00048f28) slider_set_pane_g2

0x0006,

0xf96a,	// (0x0004e9fd) slider_set_pane_g

0x9e31,	// (0x00048ec4) volume_set_pane_g1

0x9e39,	// (0x00048ecc) volume_set_pane_g2

0x9e41,	// (0x00048ed4) volume_set_pane_g3

0x9e49,	// (0x00048edc) volume_set_pane_g4

0x9e51,	// (0x00048ee4) volume_set_pane_g5

0x9e59,	// (0x00048eec) volume_set_pane_g6

0x9e61,	// (0x00048ef4) volume_set_pane_g7

0x9e69,	// (0x00048efc) volume_set_pane_g8

0x9e71,	// (0x00048f04) volume_set_pane_g9

0x9e79,	// (0x00048f0c) volume_set_pane_g10

0x0009,

0xf942,	// (0x0004e9d5) volume_set_pane_g

0xaf42,	// (0x00049fd5) indicator_pane_ParamLimits

0xaf42,	// (0x00049fd5) indicator_pane

0xaf4e,	// (0x00049fe1) main_idle_pane_g2_ParamLimits

0xaf4e,	// (0x00049fe1) main_idle_pane_g2

0xaf76,	// (0x0004a009) main_pane_idle_g1_ParamLimits

0xaf76,	// (0x0004a009) main_pane_idle_g1

0x391c,	// (0x000429af) popup_clock_digital_analogue_window_ParamLimits

0x391c,	// (0x000429af) popup_clock_digital_analogue_window

0xaf83,	// (0x0004a016) soft_indicator_pane_ParamLimits

0xaf83,	// (0x0004a016) soft_indicator_pane

0xaf8f,	// (0x0004a022) wallpaper_pane_ParamLimits

0xaf8f,	// (0x0004a022) wallpaper_pane

0x3891,	// (0x00042924) wallpaper_pane_g1

0xaf9b,	// (0x0004a02e) indicator_pane_g1_ParamLimits

0xaf9b,	// (0x0004a02e) indicator_pane_g1

0x6658,	// (0x000456eb) navi_navi_icon_text_pane_srt_g1

0x394a,	// (0x000429dd) soft_indicator_pane_t1

0x3964,	// (0x000429f7) aid_ps_area_pane

0xafa7,	// (0x0004a03a) aid_ps_clock_pane

0x3975,	// (0x00042a08) aid_ps_indicator_pane

0x3981,	// (0x00042a14) indicator_ps_pane_ParamLimits

0x3981,	// (0x00042a14) indicator_ps_pane

0x3990,	// (0x00042a23) power_save_pane_g1_ParamLimits

0x3990,	// (0x00042a23) power_save_pane_g1

0x399c,	// (0x00042a2f) power_save_pane_g2_ParamLimits

0x399c,	// (0x00042a2f) power_save_pane_g2

0x8591,	// (0x00047624) aid_navinavi_width_pane

0x3964,	// (0x000429f7) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0004e603) power_save_pane_g_ParamLimits

0xf570,	// (0x0004e603) power_save_pane_g

0x39aa,	// (0x00042a3d) power_save_pane_t1_ParamLimits

0x39aa,	// (0x00042a3d) power_save_pane_t1

0xafa7,	// (0x0004a03a) aid_ps_clock_pane_ParamLimits

0x3975,	// (0x00042a08) aid_ps_indicator_pane_ParamLimits

0x39bc,	// (0x00042a4f) power_save_pane_t4_ParamLimits

0x39bc,	// (0x00042a4f) power_save_pane_t4

0x0001,

0xf575,	// (0x0004e608) power_save_pane_t_ParamLimits

0xf575,	// (0x0004e608) power_save_pane_t

0x39e6,	// (0x00042a79) power_save_t3_ParamLimits

0x39e6,	// (0x00042a79) power_save_t3

0x39d1,	// (0x00042a64) power_save_t2_ParamLimits

0x39d1,	// (0x00042a64) power_save_t2

0x39fb,	// (0x00042a8e) indicator_ps_pane_g1

0xafb5,	// (0x0004a048) ai_gene_pane_ParamLimits

0xafb5,	// (0x0004a048) ai_gene_pane

0xafc1,	// (0x0004a054) ai_links_pane_ParamLimits

0xafc1,	// (0x0004a054) ai_links_pane

0xafcd,	// (0x0004a060) indicator_pane_cp1_ParamLimits

0xafcd,	// (0x0004a060) indicator_pane_cp1

0xafd9,	// (0x0004a06c) main_pane_idle_g1_cp_ParamLimits

0xafd9,	// (0x0004a06c) main_pane_idle_g1_cp

0x3a04,	// (0x00042a97) popup_ai_links_title_window

0xafe5,	// (0x0004a078) soft_indicator_pane_cp1_ParamLimits

0xafe5,	// (0x0004a078) soft_indicator_pane_cp1

0x6317,	// (0x000453aa) ai_links_pane_g1

0x6320,	// (0x000453b3) grid_ai_links_pane

0xbd5a,	// (0x0004aded) ai_gene_pane_1

0x6305,	// (0x00045398) ai_gene_pane_2

0x630e,	// (0x000453a1) list_highlight_pane_cp4

0xbd3e,	// (0x0004add1) cell_ai_link_pane_ParamLimits

0xbd3e,	// (0x0004add1) cell_ai_link_pane

0x62fd,	// (0x00045390) cell_ai_link_pane_g1

0x3bb2,	// (0x00042c45) cell_ai_link_pane_g2

0x0001,

0xf91d,	// (0x0004e9b0) cell_ai_link_pane_g

0x389b,	// (0x0004292e) grid_highlight_cp2

0x389b,	// (0x0004292e) bg_popup_sub_pane_cp1

0x3a1b,	// (0x00042aae) popup_ai_links_title_window_t1

0x626f,	// (0x00045302) ai_gene_pane_1_g1_ParamLimits

0x626f,	// (0x00045302) ai_gene_pane_1_g1

0x627b,	// (0x0004530e) ai_gene_pane_1_g2_ParamLimits

0x627b,	// (0x0004530e) ai_gene_pane_1_g2

0x0001,

0xf913,	// (0x0004e9a6) ai_gene_pane_1_g_ParamLimits

0xf913,	// (0x0004e9a6) ai_gene_pane_1_g

0x6288,	// (0x0004531b) ai_gene_pane_1_t1_ParamLimits

0x6288,	// (0x0004531b) ai_gene_pane_1_t1

0x62bc,	// (0x0004534f) grid_ai_soft_ind_pane

0x625a,	// (0x000452ed) ai_gene_pane_2_t1_ParamLimits

0x625a,	// (0x000452ed) ai_gene_pane_2_t1

0xaff1,	// (0x0004a084) main_pane_empty_t1_ParamLimits

0xaff1,	// (0x0004a084) main_pane_empty_t1

0xb009,	// (0x0004a09c) main_pane_empty_t2_ParamLimits

0xb009,	// (0x0004a09c) main_pane_empty_t2

0xb01e,	// (0x0004a0b1) main_pane_empty_t3_ParamLimits

0xb01e,	// (0x0004a0b1) main_pane_empty_t3

0xb030,	// (0x0004a0c3) main_pane_empty_t4_ParamLimits

0xb030,	// (0x0004a0c3) main_pane_empty_t4

0xb042,	// (0x0004a0d5) main_pane_empty_t5_ParamLimits

0xb042,	// (0x0004a0d5) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0004e60d) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0004e60d) main_pane_empty_t

0x46a6,	// (0x00043739) bg_popup_window_pane_ParamLimits

0x46a6,	// (0x00043739) bg_popup_window_pane

0x5fc9,	// (0x0004505c) find_popup_pane_cp2_ParamLimits

0x5fc9,	// (0x0004505c) find_popup_pane_cp2

0x5fd5,	// (0x00045068) heading_pane_ParamLimits

0x5fd5,	// (0x00045068) heading_pane

0x389b,	// (0x0004292e) bg_popup_sub_pane

0xbc78,	// (0x0004ad0b) bg_popup_window_pane_g1_ParamLimits

0xbc78,	// (0x0004ad0b) bg_popup_window_pane_g1

0xbc84,	// (0x0004ad17) bg_popup_window_pane_g2_ParamLimits

0xbc84,	// (0x0004ad17) bg_popup_window_pane_g2

0xbc90,	// (0x0004ad23) bg_popup_window_pane_g3_ParamLimits

0xbc90,	// (0x0004ad23) bg_popup_window_pane_g3

0xbc9c,	// (0x0004ad2f) bg_popup_window_pane_g4_ParamLimits

0xbc9c,	// (0x0004ad2f) bg_popup_window_pane_g4

0xbca8,	// (0x0004ad3b) bg_popup_window_pane_g5_ParamLimits

0xbca8,	// (0x0004ad3b) bg_popup_window_pane_g5

0xbcb4,	// (0x0004ad47) bg_popup_window_pane_g6_ParamLimits

0xbcb4,	// (0x0004ad47) bg_popup_window_pane_g6

0xbcc0,	// (0x0004ad53) bg_popup_window_pane_g7_ParamLimits

0xbcc0,	// (0x0004ad53) bg_popup_window_pane_g7

0xbccc,	// (0x0004ad5f) bg_popup_window_pane_g8_ParamLimits

0xbccc,	// (0x0004ad5f) bg_popup_window_pane_g8

0xbcd8,	// (0x0004ad6b) bg_popup_window_pane_g9_ParamLimits

0xbcd8,	// (0x0004ad6b) bg_popup_window_pane_g9

0x5faf,	// (0x00045042) bg_popup_window_pane_g10_ParamLimits

0x5faf,	// (0x00045042) bg_popup_window_pane_g10

0x0009,

0xf8db,	// (0x0004e96e) bg_popup_window_pane_g_ParamLimits

0xf8db,	// (0x0004e96e) bg_popup_window_pane_g

0x5f66,	// (0x00044ff9) bg_popup_heading_pane_ParamLimits

0x5f66,	// (0x00044ff9) bg_popup_heading_pane

0x9f1d,	// (0x00048fb0) tabs_4_passive_pane_cp_srt_ParamLimits

0x9f1d,	// (0x00048fb0) tabs_4_passive_pane_cp_srt

0x9f2f,	// (0x00048fc2) tabs_4_passive_pane_srt_ParamLimits

0x5f7a,	// (0x0004500d) heading_pane_g2

0x9f2f,	// (0x00048fc2) tabs_4_passive_pane_srt

0x475f,	// (0x000437f2) bg_passive_tab_pane_cp3_srt_ParamLimits

0x475f,	// (0x000437f2) bg_passive_tab_pane_cp3_srt

0x5f82,	// (0x00045015) heading_pane_t1_ParamLimits

0x5f82,	// (0x00045015) heading_pane_t1

0x5f99,	// (0x0004502c) heading_pane_t2_ParamLimits

0x5f99,	// (0x0004502c) heading_pane_t2

0x0001,

0xf8d6,	// (0x0004e969) heading_pane_t_ParamLimits

0xf8d6,	// (0x0004e969) heading_pane_t

0x5af6,	// (0x00044b89) bg_popup_heading_pane_g1

0x5b87,	// (0x00044c1a) bg_popup_heading_pane_g2

0x5b91,	// (0x00044c24) bg_popup_heading_pane_g3

0x5b9b,	// (0x00044c2e) bg_popup_heading_pane_g4

0x5ba5,	// (0x00044c38) bg_popup_heading_pane_g5

0x5baf,	// (0x00044c42) bg_popup_heading_pane_g6

0x5bb7,	// (0x00044c4a) bg_popup_heading_pane_g7

0x5bbf,	// (0x00044c52) bg_popup_heading_pane_g8

0x5bc9,	// (0x00044c5c) bg_popup_heading_pane_g9

0x0008,

0xf892,	// (0x0004e925) bg_popup_heading_pane_g

0x5411,	// (0x000444a4) bg_popup_sub_pane_g1

0x5419,	// (0x000444ac) bg_popup_sub_pane_g2

0x5421,	// (0x000444b4) bg_popup_sub_pane_g3

0x5429,	// (0x000444bc) bg_popup_sub_pane_g4

0x5431,	// (0x000444c4) bg_popup_sub_pane_g5

0x5439,	// (0x000444cc) bg_popup_sub_pane_g6

0x5441,	// (0x000444d4) bg_popup_sub_pane_g7

0x5449,	// (0x000444dc) bg_popup_sub_pane_g8

0x5451,	// (0x000444e4) bg_popup_sub_pane_g9

0x0008,

0xf86c,	// (0x0004e8ff) bg_popup_sub_pane_g

0x38e9,	// (0x0004297c) bg_popup_window_pane_cp5_ParamLimits

0x38e9,	// (0x0004297c) bg_popup_window_pane_cp5

0x3a38,	// (0x00042acb) popup_note_window_g1_ParamLimits

0x3a38,	// (0x00042acb) popup_note_window_g1

0x3a44,	// (0x00042ad7) popup_note_window_t1_ParamLimits

0x3a44,	// (0x00042ad7) popup_note_window_t1

0x3a56,	// (0x00042ae9) popup_note_window_t2_ParamLimits

0x3a56,	// (0x00042ae9) popup_note_window_t2

0x3a68,	// (0x00042afb) popup_note_window_t3_ParamLimits

0x3a68,	// (0x00042afb) popup_note_window_t3

0x3a7a,	// (0x00042b0d) popup_note_window_t4_ParamLimits

0x3a7a,	// (0x00042b0d) popup_note_window_t4

0x3aa2,	// (0x00042b35) popup_note_window_t5_ParamLimits

0x3aa2,	// (0x00042b35) popup_note_window_t5

0x0004,

0xf585,	// (0x0004e618) popup_note_window_t_ParamLimits

0xf585,	// (0x0004e618) popup_note_window_t

0x3ac6,	// (0x00042b59) bg_popup_window_pane_cp6_ParamLimits

0x3ac6,	// (0x00042b59) bg_popup_window_pane_cp6

0x5a6a,	// (0x00044afd) popup_note_image_window_g1_ParamLimits

0x5a6a,	// (0x00044afd) popup_note_image_window_g1

0x5a76,	// (0x00044b09) popup_note_image_window_g2_ParamLimits

0x5a76,	// (0x00044b09) popup_note_image_window_g2

0x0001,

0xf860,	// (0x0004e8f3) popup_note_image_window_g_ParamLimits

0xf860,	// (0x0004e8f3) popup_note_image_window_g

0x5a8f,	// (0x00044b22) popup_note_image_window_t1_ParamLimits

0x5a8f,	// (0x00044b22) popup_note_image_window_t1

0x5aa8,	// (0x00044b3b) popup_note_image_window_t2_ParamLimits

0x5aa8,	// (0x00044b3b) popup_note_image_window_t2

0x5ac1,	// (0x00044b54) popup_note_image_window_t3_ParamLimits

0x5ac1,	// (0x00044b54) popup_note_image_window_t3

0x0002,

0xf865,	// (0x0004e8f8) popup_note_image_window_t_ParamLimits

0xf865,	// (0x0004e8f8) popup_note_image_window_t

0x5947,	// (0x000449da) bg_popup_window_pane_cp7_ParamLimits

0x5947,	// (0x000449da) bg_popup_window_pane_cp7

0x5977,	// (0x00044a0a) popup_note_wait_window_g1_ParamLimits

0x5977,	// (0x00044a0a) popup_note_wait_window_g1

0x5983,	// (0x00044a16) popup_note_wait_window_g2_ParamLimits

0x5983,	// (0x00044a16) popup_note_wait_window_g2

0x0002,

0xf84e,	// (0x0004e8e1) popup_note_wait_window_g_ParamLimits

0xf84e,	// (0x0004e8e1) popup_note_wait_window_g

0x599b,	// (0x00044a2e) popup_note_wait_window_t1_ParamLimits

0x599b,	// (0x00044a2e) popup_note_wait_window_t1

0x59c2,	// (0x00044a55) popup_note_wait_window_t2_ParamLimits

0x59c2,	// (0x00044a55) popup_note_wait_window_t2

0x59df,	// (0x00044a72) popup_note_wait_window_t3_ParamLimits

0x59df,	// (0x00044a72) popup_note_wait_window_t3

0x59f2,	// (0x00044a85) popup_note_wait_window_t4_ParamLimits

0x59f2,	// (0x00044a85) popup_note_wait_window_t4

0x0004,

0xf855,	// (0x0004e8e8) popup_note_wait_window_t_ParamLimits

0xf855,	// (0x0004e8e8) popup_note_wait_window_t

0x5a17,	// (0x00044aaa) wait_bar_pane_ParamLimits

0x5a17,	// (0x00044aaa) wait_bar_pane

0x389b,	// (0x0004292e) wait_anim_pane

0x389b,	// (0x0004292e) wait_border_pane

0x3891,	// (0x00042924) wait_anim_pane_g1

0x3891,	// (0x00042924) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x0004e7a1) wait_anim_pane_g

0x58eb,	// (0x0004497e) wait_border_pane_g1

0x58f6,	// (0x00044989) wait_border_pane_g2

0x58ff,	// (0x00044992) wait_border_pane_g3

0x0002,

0xf847,	// (0x0004e8da) wait_border_pane_g

0x575b,	// (0x000447ee) bg_popup_window_pane_cp16_ParamLimits

0x575b,	// (0x000447ee) bg_popup_window_pane_cp16

0x585b,	// (0x000448ee) indicator_popup_pane_cp4_ParamLimits

0x585b,	// (0x000448ee) indicator_popup_pane_cp4

0x586f,	// (0x00044902) popup_query_data_window_t1_ParamLimits

0x586f,	// (0x00044902) popup_query_data_window_t1

0x5881,	// (0x00044914) popup_query_data_window_t2_ParamLimits

0x5881,	// (0x00044914) popup_query_data_window_t2

0x589a,	// (0x0004492d) popup_query_data_window_t3_ParamLimits

0x589a,	// (0x0004492d) popup_query_data_window_t3

0x0002,

0xf840,	// (0x0004e8d3) popup_query_data_window_t_ParamLimits

0xf840,	// (0x0004e8d3) popup_query_data_window_t

0x58b4,	// (0x00044947) query_popup_data_pane_ParamLimits

0x58b4,	// (0x00044947) query_popup_data_pane

0x58c8,	// (0x0004495b) query_popup_data_pane_cp1_ParamLimits

0x58c8,	// (0x0004495b) query_popup_data_pane_cp1

0x575b,	// (0x000447ee) bg_popup_window_pane_cp10_ParamLimits

0x575b,	// (0x000447ee) bg_popup_window_pane_cp10

0x578d,	// (0x00044820) indicator_popup_pane_ParamLimits

0x578d,	// (0x00044820) indicator_popup_pane

0x57af,	// (0x00044842) popup_query_code_window_t1_ParamLimits

0x57af,	// (0x00044842) popup_query_code_window_t1

0x57c9,	// (0x0004485c) popup_query_code_window_t2_ParamLimits

0x57c9,	// (0x0004485c) popup_query_code_window_t2

0x5812,	// (0x000448a5) popup_query_code_window_t3_ParamLimits

0x5812,	// (0x000448a5) popup_query_code_window_t3

0x0002,

0xf839,	// (0x0004e8cc) popup_query_code_window_t_ParamLimits

0xf839,	// (0x0004e8cc) popup_query_code_window_t

0x5841,	// (0x000448d4) query_popup_pane_ParamLimits

0x5841,	// (0x000448d4) query_popup_pane

0x3ac6,	// (0x00042b59) bg_popup_window_pane_cp15_ParamLimits

0x3ac6,	// (0x00042b59) bg_popup_window_pane_cp15

0x3ae4,	// (0x00042b77) indicator_popup_pane_cp1_ParamLimits

0x3ae4,	// (0x00042b77) indicator_popup_pane_cp1

0x3af7,	// (0x00042b8a) indicator_popup_pane_cp2_ParamLimits

0x3af7,	// (0x00042b8a) indicator_popup_pane_cp2

0x3b0a,	// (0x00042b9d) popup_query_data_code_window_g1_ParamLimits

0x3b0a,	// (0x00042b9d) popup_query_data_code_window_g1

0x3b1d,	// (0x00042bb0) popup_query_data_code_window_t1_ParamLimits

0x3b1d,	// (0x00042bb0) popup_query_data_code_window_t1

0x3b2f,	// (0x00042bc2) popup_query_data_code_window_t2_ParamLimits

0x3b2f,	// (0x00042bc2) popup_query_data_code_window_t2

0x3b41,	// (0x00042bd4) popup_query_data_code_window_t3_ParamLimits

0x3b41,	// (0x00042bd4) popup_query_data_code_window_t3

0x3b57,	// (0x00042bea) popup_query_data_code_window_t4_ParamLimits

0x3b57,	// (0x00042bea) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0004e623) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0004e623) popup_query_data_code_window_t

0x9be6,	// (0x00048c79) list_single_midp_graphic_pane_g3

0x3b6f,	// (0x00042c02) query_popup_data_pane_cp2_ParamLimits

0x3b82,	// (0x00042c15) query_popup_pane_cp2_ParamLimits

0x3b82,	// (0x00042c15) query_popup_pane_cp2

0x389b,	// (0x0004292e) bg_popup_window_pane_cp11

0x5753,	// (0x000447e6) heading_pane_cp5

0x3c10,	// (0x00042ca3) listscroll_popup_info_pane

0x389b,	// (0x0004292e) input_focus_pane_cp3

0x3b95,	// (0x00042c28) query_popup_pane_t1

0x3ba3,	// (0x00042c36) list_popup_info_pane_ParamLimits

0x3ba3,	// (0x00042c36) list_popup_info_pane

0x3bb2,	// (0x00042c45) listscroll_popup_info_pane_g1

0x3bba,	// (0x00042c4d) scroll_pane_cp7

0x3bc4,	// (0x00042c57) popup_info_list_pane_t1_ParamLimits

0x3bc4,	// (0x00042c57) popup_info_list_pane_t1

0x3bde,	// (0x00042c71) popup_info_list_pane_t2_ParamLimits

0x3bde,	// (0x00042c71) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0004e62c) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0004e62c) popup_info_list_pane_t

0x389b,	// (0x0004292e) bg_popup_window_pane_cp12

0x6672,	// (0x00045705) find_popup_pane

0x38f7,	// (0x0004298a) bg_popup_window_pane_cp3

0x3bf8,	// (0x00042c8b) heading_pane_cp3

0x3c04,	// (0x00042c97) listscroll_popup_graphic_pane

0x389b,	// (0x0004292e) bg_popup_window_pane_cp4

0xb0a6,	// (0x0004a139) heading_pane_cp4

0x3c10,	// (0x00042ca3) listscroll_popup_colour_pane

0x3c18,	// (0x00042cab) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3c18,	// (0x00042cab) cell_large_graphic_colour_none_popup_pane

0xb0b0,	// (0x0004a143) grid_large_graphic_colour_popup_pane_ParamLimits

0xb0b0,	// (0x0004a143) grid_large_graphic_colour_popup_pane

0x3c2c,	// (0x00042cbf) listscroll_popup_colour_pane_g1_ParamLimits

0x3c2c,	// (0x00042cbf) listscroll_popup_colour_pane_g1

0x3c43,	// (0x00042cd6) listscroll_popup_colour_pane_g2_ParamLimits

0x3c43,	// (0x00042cd6) listscroll_popup_colour_pane_g2

0x3c5a,	// (0x00042ced) listscroll_popup_colour_pane_g3_ParamLimits

0x3c5a,	// (0x00042ced) listscroll_popup_colour_pane_g3

0xb0d8,	// (0x0004a16b) listscroll_popup_colour_pane_g4_ParamLimits

0xb0d8,	// (0x0004a16b) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0004e631) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0004e631) listscroll_popup_colour_pane_g

0x3c6a,	// (0x00042cfd) scroll_pane_cp6_ParamLimits

0x3c6a,	// (0x00042cfd) scroll_pane_cp6

0xb0e7,	// (0x0004a17a) cell_large_graphic_colour_popup_pane_ParamLimits

0xb0e7,	// (0x0004a17a) cell_large_graphic_colour_popup_pane

0x3c7c,	// (0x00042d0f) cell_large_graphic_colour_none_popup_pane_t1

0x389b,	// (0x0004292e) grid_highlight_pane_cp5

0x3c8b,	// (0x00042d1e) cell_large_graphic_colour_popup_pane_g1

0x3c93,	// (0x00042d26) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0004e63a) cell_large_graphic_colour_popup_pane_g

0x3c9b,	// (0x00042d2e) cell_large_graphic_colour_popup_pane_g2_copy1

0x3ca4,	// (0x00042d37) grid_highlight_pane_cp4

0x3cac,	// (0x00042d3f) bg_popup_window_pane_cp8_ParamLimits

0x3cac,	// (0x00042d3f) bg_popup_window_pane_cp8

0x3cc7,	// (0x00042d5a) popup_snote_single_text_window_g1_ParamLimits

0x3cc7,	// (0x00042d5a) popup_snote_single_text_window_g1

0x3cd9,	// (0x00042d6c) popup_snote_single_text_window_t1_ParamLimits

0x3cd9,	// (0x00042d6c) popup_snote_single_text_window_t1

0x3cec,	// (0x00042d7f) popup_snote_single_text_window_t2_ParamLimits

0x3cec,	// (0x00042d7f) popup_snote_single_text_window_t2

0x3cff,	// (0x00042d92) popup_snote_single_text_window_t3_ParamLimits

0x3cff,	// (0x00042d92) popup_snote_single_text_window_t3

0x3d38,	// (0x00042dcb) popup_snote_single_text_window_t4_ParamLimits

0x3d38,	// (0x00042dcb) popup_snote_single_text_window_t4

0x3d6c,	// (0x00042dff) popup_snote_single_text_window_t5_ParamLimits

0x3d6c,	// (0x00042dff) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0004e63f) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0004e63f) popup_snote_single_text_window_t

0x3d9b,	// (0x00042e2e) bg_popup_window_pane_cp9_ParamLimits

0x3d9b,	// (0x00042e2e) bg_popup_window_pane_cp9

0x3cc7,	// (0x00042d5a) popup_snote_single_graphic_window_g1_ParamLimits

0x3cc7,	// (0x00042d5a) popup_snote_single_graphic_window_g1

0x3da9,	// (0x00042e3c) popup_snote_single_graphic_window_g2_ParamLimits

0x3da9,	// (0x00042e3c) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0004e64a) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0004e64a) popup_snote_single_graphic_window_g

0x3db5,	// (0x00042e48) popup_snote_single_graphic_window_t1_ParamLimits

0x3db5,	// (0x00042e48) popup_snote_single_graphic_window_t1

0x3dc8,	// (0x00042e5b) popup_snote_single_graphic_window_t2_ParamLimits

0x3dc8,	// (0x00042e5b) popup_snote_single_graphic_window_t2

0x3ddb,	// (0x00042e6e) popup_snote_single_graphic_window_t3_ParamLimits

0x3ddb,	// (0x00042e6e) popup_snote_single_graphic_window_t3

0x3e14,	// (0x00042ea7) popup_snote_single_graphic_window_t4_ParamLimits

0x3e14,	// (0x00042ea7) popup_snote_single_graphic_window_t4

0x3e48,	// (0x00042edb) popup_snote_single_graphic_window_t5_ParamLimits

0x3e48,	// (0x00042edb) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0004e64f) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0004e64f) popup_snote_single_graphic_window_t

0x65fa,	// (0x0004568d) grid_graphic_popup_pane_ParamLimits

0x65fa,	// (0x0004568d) grid_graphic_popup_pane

0x6622,	// (0x000456b5) listscroll_popup_graphic_pane_g1_ParamLimits

0x6622,	// (0x000456b5) listscroll_popup_graphic_pane_g1

0xc617,	// (0x0004b6aa) listscroll_popup_graphic_pane_g2_ParamLimits

0xc617,	// (0x0004b6aa) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b6,	// (0x0004ea49) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b6,	// (0x0004ea49) listscroll_popup_graphic_pane_g

0x613a,	// (0x000451cd) scroll_pane_cp5

0xc5d8,	// (0x0004b66b) cell_graphic_popup_pane_ParamLimits

0xc5d8,	// (0x0004b66b) cell_graphic_popup_pane

0x65c5,	// (0x00045658) cell_graphic_popup_pane_g1

0x65cd,	// (0x00045660) cell_graphic_popup_pane_g2

0x3c9b,	// (0x00042d2e) cell_graphic_popup_pane_g3

0x0002,

0xf9af,	// (0x0004ea42) cell_graphic_popup_pane_g

0x65d6,	// (0x00045669) cell_graphic_popup_pane_t2

0x3ca4,	// (0x00042d37) grid_highlight_pane_cp3

0x3e89,	// (0x00042f1c) list_gen_pane_ParamLimits

0x3e89,	// (0x00042f1c) list_gen_pane

0x3eb1,	// (0x00042f44) scroll_pane

0xc58b,	// (0x0004b61e) bg_list_pane_g1_ParamLimits

0xc58b,	// (0x0004b61e) bg_list_pane_g1

0x6574,	// (0x00045607) bg_list_pane_g2_ParamLimits

0x6574,	// (0x00045607) bg_list_pane_g2

0x6587,	// (0x0004561a) bg_list_pane_g3_ParamLimits

0x6587,	// (0x0004561a) bg_list_pane_g3

0x6599,	// (0x0004562c) bg_list_pane_g4_ParamLimits

0x6599,	// (0x0004562c) bg_list_pane_g4

0xc5a6,	// (0x0004b639) bg_list_pane_g5_ParamLimits

0xc5a6,	// (0x0004b639) bg_list_pane_g5

0x0004,

0xf9a4,	// (0x0004ea37) bg_list_pane_g_ParamLimits

0xf9a4,	// (0x0004ea37) bg_list_pane_g

0xc497,	// (0x0004b52a) list_double2_graphic_large_graphic_pane_ParamLimits

0xc497,	// (0x0004b52a) list_double2_graphic_large_graphic_pane

0xc497,	// (0x0004b52a) list_double2_graphic_pane_ParamLimits

0xc497,	// (0x0004b52a) list_double2_graphic_pane

0xc497,	// (0x0004b52a) list_double2_large_graphic_pane_ParamLimits

0xc497,	// (0x0004b52a) list_double2_large_graphic_pane

0xc497,	// (0x0004b52a) list_double2_pane_ParamLimits

0xc497,	// (0x0004b52a) list_double2_pane

0xc497,	// (0x0004b52a) list_double_graphic_heading_pane_ParamLimits

0xc497,	// (0x0004b52a) list_double_graphic_heading_pane

0xc497,	// (0x0004b52a) list_double_graphic_pane_ParamLimits

0xc497,	// (0x0004b52a) list_double_graphic_pane

0xc497,	// (0x0004b52a) list_double_heading_pane_ParamLimits

0xc497,	// (0x0004b52a) list_double_heading_pane

0xc497,	// (0x0004b52a) list_double_large_graphic_pane_ParamLimits

0xc497,	// (0x0004b52a) list_double_large_graphic_pane

0xc497,	// (0x0004b52a) list_double_number_pane_ParamLimits

0xc497,	// (0x0004b52a) list_double_number_pane

0xc497,	// (0x0004b52a) list_double_pane_ParamLimits

0xc497,	// (0x0004b52a) list_double_pane

0xc497,	// (0x0004b52a) list_double_time_pane_ParamLimits

0xc497,	// (0x0004b52a) list_double_time_pane

0xc497,	// (0x0004b52a) list_setting_number_pane_ParamLimits

0xc497,	// (0x0004b52a) list_setting_number_pane

0xc497,	// (0x0004b52a) list_setting_pane_ParamLimits

0xc497,	// (0x0004b52a) list_setting_pane

0xc4e7,	// (0x0004b57a) list_single_2graphic_pane_ParamLimits

0xc4e7,	// (0x0004b57a) list_single_2graphic_pane

0xc4e7,	// (0x0004b57a) list_single_graphic_heading_pane_ParamLimits

0xc4e7,	// (0x0004b57a) list_single_graphic_heading_pane

0xc4e7,	// (0x0004b57a) list_single_graphic_pane_ParamLimits

0xc4e7,	// (0x0004b57a) list_single_graphic_pane

0xc4e7,	// (0x0004b57a) list_single_heading_pane_ParamLimits

0xc4e7,	// (0x0004b57a) list_single_heading_pane

0xc568,	// (0x0004b5fb) list_single_large_graphic_pane_ParamLimits

0xc568,	// (0x0004b5fb) list_single_large_graphic_pane

0xc4e7,	// (0x0004b57a) list_single_number_heading_pane_ParamLimits

0xc4e7,	// (0x0004b57a) list_single_number_heading_pane

0xc4e7,	// (0x0004b57a) list_single_number_pane_ParamLimits

0xc4e7,	// (0x0004b57a) list_single_number_pane

0xc4e7,	// (0x0004b57a) list_single_pane_ParamLimits

0xc4e7,	// (0x0004b57a) list_single_pane

0x389b,	// (0x0004292e) list_highlight_pane_cp1

0xb110,	// (0x0004a1a3) list_single_pane_g1_ParamLimits

0xb110,	// (0x0004a1a3) list_single_pane_g1

0xb11c,	// (0x0004a1af) list_single_pane_g2_ParamLimits

0xb11c,	// (0x0004a1af) list_single_pane_g2

0x0001,

0xf5d8,	// (0x0004e66b) list_single_pane_g_ParamLimits

0xf5d8,	// (0x0004e66b) list_single_pane_g

0xbeda,	// (0x0004af6d) list_single_pane_t1_ParamLimits

0xbeda,	// (0x0004af6d) list_single_pane_t1

0xb110,	// (0x0004a1a3) list_single_number_pane_g1_ParamLimits

0xb110,	// (0x0004a1a3) list_single_number_pane_g1

0xb11c,	// (0x0004a1af) list_single_number_pane_g2_ParamLimits

0xb11c,	// (0x0004a1af) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x0004e66b) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x0004e66b) list_single_number_pane_g

0xb9c2,	// (0x0004aa55) list_single_number_pane_t1_ParamLimits

0xb9c2,	// (0x0004aa55) list_single_number_pane_t1

0xbda6,	// (0x0004ae39) list_single_number_pane_t2_ParamLimits

0xbda6,	// (0x0004ae39) list_single_number_pane_t2

0x0001,

0xf965,	// (0x0004e9f8) list_single_number_pane_t_ParamLimits

0xf965,	// (0x0004e9f8) list_single_number_pane_t

0x8a1c,	// (0x00047aaf) list_single_graphic_pane_g1_ParamLimits

0x8a1c,	// (0x00047aaf) list_single_graphic_pane_g1

0xb110,	// (0x0004a1a3) list_single_graphic_pane_g2_ParamLimits

0xb110,	// (0x0004a1a3) list_single_graphic_pane_g2

0xb11c,	// (0x0004a1af) list_single_graphic_pane_g3_ParamLimits

0xb11c,	// (0x0004a1af) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0004e65a) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0004e65a) list_single_graphic_pane_g

0x8a28,	// (0x00047abb) list_single_graphic_pane_t1_ParamLimits

0x8a28,	// (0x00047abb) list_single_graphic_pane_t1

0x8a3e,	// (0x00047ad1) list_single_heading_pane_g1_ParamLimits

0x8a3e,	// (0x00047ad1) list_single_heading_pane_g1

0xb11c,	// (0x0004a1af) list_single_heading_pane_g2_ParamLimits

0xb11c,	// (0x0004a1af) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0004e661) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0004e661) list_single_heading_pane_g

0x8a51,	// (0x00047ae4) list_single_heading_pane_t1_ParamLimits

0x8a51,	// (0x00047ae4) list_single_heading_pane_t1

0xb128,	// (0x0004a1bb) list_single_heading_pane_t2_ParamLimits

0xb128,	// (0x0004a1bb) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0004e666) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0004e666) list_single_heading_pane_t

0xb110,	// (0x0004a1a3) list_single_number_heading_pane_g1_ParamLimits

0xb110,	// (0x0004a1a3) list_single_number_heading_pane_g1

0xb11c,	// (0x0004a1af) list_single_number_heading_pane_g2_ParamLimits

0xb11c,	// (0x0004a1af) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x0004e66b) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x0004e66b) list_single_number_heading_pane_g

0x8a67,	// (0x00047afa) list_single_number_heading_pane_t1_ParamLimits

0x8a67,	// (0x00047afa) list_single_number_heading_pane_t1

0x8a7d,	// (0x00047b10) list_single_number_heading_pane_t2_ParamLimits

0x8a7d,	// (0x00047b10) list_single_number_heading_pane_t2

0x8a8f,	// (0x00047b22) list_single_number_heading_pane_t3_ParamLimits

0x8a8f,	// (0x00047b22) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x0004e670) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x0004e670) list_single_number_heading_pane_t

0x8aa1,	// (0x00047b34) list_single_graphic_heading_pane_g1_ParamLimits

0x8aa1,	// (0x00047b34) list_single_graphic_heading_pane_g1

0x8ab7,	// (0x00047b4a) list_single_graphic_heading_pane_g4_ParamLimits

0x8ab7,	// (0x00047b4a) list_single_graphic_heading_pane_g4

0xb11c,	// (0x0004a1af) list_single_graphic_heading_pane_g5_ParamLimits

0xb11c,	// (0x0004a1af) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x0004e677) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x0004e677) list_single_graphic_heading_pane_g

0x8a67,	// (0x00047afa) list_single_graphic_heading_pane_t1_ParamLimits

0x8a67,	// (0x00047afa) list_single_graphic_heading_pane_t1

0x8ac8,	// (0x00047b5b) list_single_graphic_heading_pane_t2_ParamLimits

0x8ac8,	// (0x00047b5b) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x0004e67e) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x0004e67e) list_single_graphic_heading_pane_t

0xb13a,	// (0x0004a1cd) list_single_large_graphic_pane_g1_ParamLimits

0xb13a,	// (0x0004a1cd) list_single_large_graphic_pane_g1

0xb146,	// (0x0004a1d9) list_single_large_graphic_pane_g2_ParamLimits

0xb146,	// (0x0004a1d9) list_single_large_graphic_pane_g2

0xb152,	// (0x0004a1e5) list_single_large_graphic_pane_g3_ParamLimits

0xb152,	// (0x0004a1e5) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0004e683) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0004e683) list_single_large_graphic_pane_g

0x58f6,	// (0x00044989) wait_border_pane_g2_copy1

0xb15e,	// (0x0004a1f1) list_single_large_graphic_pane_g4_cp2

0x8ae0,	// (0x00047b73) list_single_large_graphic_pane_t1_ParamLimits

0x8ae0,	// (0x00047b73) list_single_large_graphic_pane_t1

0x8af6,	// (0x00047b89) list_double_pane_g1_ParamLimits

0x8af6,	// (0x00047b89) list_double_pane_g1

0x8b02,	// (0x00047b95) list_double_pane_g2_ParamLimits

0x8b02,	// (0x00047b95) list_double_pane_g2

0x0001,

0xf5f7,	// (0x0004e68a) list_double_pane_g_ParamLimits

0xf5f7,	// (0x0004e68a) list_double_pane_g

0x8b0e,	// (0x00047ba1) list_double_pane_t1_ParamLimits

0x8b0e,	// (0x00047ba1) list_double_pane_t1

0x8b24,	// (0x00047bb7) list_double_pane_t2_ParamLimits

0x8b24,	// (0x00047bb7) list_double_pane_t2

0x0001,

0xf5fc,	// (0x0004e68f) list_double_pane_t_ParamLimits

0xf5fc,	// (0x0004e68f) list_double_pane_t

0x8b36,	// (0x00047bc9) list_double2_pane_g1_ParamLimits

0x8b36,	// (0x00047bc9) list_double2_pane_g1

0x8b47,	// (0x00047bda) list_double2_pane_g2_ParamLimits

0x8b47,	// (0x00047bda) list_double2_pane_g2

0x0001,

0xf601,	// (0x0004e694) list_double2_pane_g_ParamLimits

0xf601,	// (0x0004e694) list_double2_pane_g

0x8b53,	// (0x00047be6) list_double2_pane_t1_ParamLimits

0x8b53,	// (0x00047be6) list_double2_pane_t1

0x8b69,	// (0x00047bfc) list_double2_pane_t2_ParamLimits

0x8b69,	// (0x00047bfc) list_double2_pane_t2

0x0001,

0xf606,	// (0x0004e699) list_double2_pane_t_ParamLimits

0xf606,	// (0x0004e699) list_double2_pane_t

0x8af6,	// (0x00047b89) list_double_number_pane_g1_ParamLimits

0x8af6,	// (0x00047b89) list_double_number_pane_g1

0x8b02,	// (0x00047b95) list_double_number_pane_g2_ParamLimits

0x8b02,	// (0x00047b95) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x0004e68a) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x0004e68a) list_double_number_pane_g

0x8b7b,	// (0x00047c0e) list_double_number_pane_t1_ParamLimits

0x8b7b,	// (0x00047c0e) list_double_number_pane_t1

0x8b8d,	// (0x00047c20) list_double_number_pane_t2_ParamLimits

0x8b8d,	// (0x00047c20) list_double_number_pane_t2

0x8ba3,	// (0x00047c36) list_double_number_pane_t3_ParamLimits

0x8ba3,	// (0x00047c36) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x0004e69e) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x0004e69e) list_double_number_pane_t

0x8bb5,	// (0x00047c48) list_double_graphic_pane_g1_ParamLimits

0x8bb5,	// (0x00047c48) list_double_graphic_pane_g1

0x8bc1,	// (0x00047c54) list_double_graphic_pane_g2_ParamLimits

0x8bc1,	// (0x00047c54) list_double_graphic_pane_g2

0x8bd0,	// (0x00047c63) list_double_graphic_pane_g3_ParamLimits

0x8bd0,	// (0x00047c63) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x0004e6a5) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x0004e6a5) list_double_graphic_pane_g

0x8bdc,	// (0x00047c6f) list_double_graphic_pane_t1_ParamLimits

0x8bdc,	// (0x00047c6f) list_double_graphic_pane_t1

0x8bf2,	// (0x00047c85) list_double_graphic_pane_t2_ParamLimits

0x8bf2,	// (0x00047c85) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x0004e6ae) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x0004e6ae) list_double_graphic_pane_t

0x8c04,	// (0x00047c97) list_double2_graphic_pane_g1_ParamLimits

0x8c04,	// (0x00047c97) list_double2_graphic_pane_g1

0x4608,	// (0x0004369b) list_double2_graphic_pane_g2_ParamLimits

0x4608,	// (0x0004369b) list_double2_graphic_pane_g2

0xb172,	// (0x0004a205) list_double2_graphic_pane_g3_ParamLimits

0xb172,	// (0x0004a205) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x0004e6b3) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x0004e6b3) list_double2_graphic_pane_g

0x8c10,	// (0x00047ca3) list_double2_graphic_pane_t1_ParamLimits

0x8c10,	// (0x00047ca3) list_double2_graphic_pane_t1

0x8c26,	// (0x00047cb9) list_double2_graphic_pane_t2_ParamLimits

0x8c26,	// (0x00047cb9) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x0004e6ba) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x0004e6ba) list_double2_graphic_pane_t

0x8c38,	// (0x00047ccb) list_double_large_graphic_pane_g1_ParamLimits

0x8c38,	// (0x00047ccb) list_double_large_graphic_pane_g1

0x8c63,	// (0x00047cf6) list_double_large_graphic_pane_g2_ParamLimits

0x8c63,	// (0x00047cf6) list_double_large_graphic_pane_g2

0x8b02,	// (0x00047b95) list_double_large_graphic_pane_g3_ParamLimits

0x8b02,	// (0x00047b95) list_double_large_graphic_pane_g3

0x8c79,	// (0x00047d0c) list_double_large_graphic_pane_g4_ParamLimits

0x8c79,	// (0x00047d0c) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x0004e6bf) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x0004e6bf) list_double_large_graphic_pane_g

0x8c8c,	// (0x00047d1f) list_double_large_graphic_pane_t1_ParamLimits

0x8c8c,	// (0x00047d1f) list_double_large_graphic_pane_t1

0x8ca5,	// (0x00047d38) list_double_large_graphic_pane_t2_ParamLimits

0x8ca5,	// (0x00047d38) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x0004e6ca) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x0004e6ca) list_double_large_graphic_pane_t

0xb193,	// (0x0004a226) list_double2_large_graphic_pane_g1_ParamLimits

0xb193,	// (0x0004a226) list_double2_large_graphic_pane_g1

0xb19f,	// (0x0004a232) list_double2_large_graphic_pane_g2_ParamLimits

0xb19f,	// (0x0004a232) list_double2_large_graphic_pane_g2

0xb172,	// (0x0004a205) list_double2_large_graphic_pane_g3_ParamLimits

0xb172,	// (0x0004a205) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x0004e6cf) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x0004e6cf) list_double2_large_graphic_pane_g

0x8cb7,	// (0x00047d4a) list_double2_large_graphic_pane_t1_ParamLimits

0x8cb7,	// (0x00047d4a) list_double2_large_graphic_pane_t1

0x8ccd,	// (0x00047d60) list_double2_large_graphic_pane_t2_ParamLimits

0x8ccd,	// (0x00047d60) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x0004e6d6) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x0004e6d6) list_double2_large_graphic_pane_t

0x8cdf,	// (0x00047d72) list_double_heading_pane_g1_ParamLimits

0x8cdf,	// (0x00047d72) list_double_heading_pane_g1

0xb1b0,	// (0x0004a243) list_double_heading_pane_g2_ParamLimits

0xb1b0,	// (0x0004a243) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x0004e6db) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x0004e6db) list_double_heading_pane_g

0x8cf0,	// (0x00047d83) list_double_heading_pane_t1_ParamLimits

0x8cf0,	// (0x00047d83) list_double_heading_pane_t1

0x8b69,	// (0x00047bfc) list_double_heading_pane_t2_ParamLimits

0x8b69,	// (0x00047bfc) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x0004e6e0) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x0004e6e0) list_double_heading_pane_t

0x8d06,	// (0x00047d99) list_double_graphic_heading_pane_g1_ParamLimits

0x8d06,	// (0x00047d99) list_double_graphic_heading_pane_g1

0x8cdf,	// (0x00047d72) list_double_graphic_heading_pane_g2_ParamLimits

0x8cdf,	// (0x00047d72) list_double_graphic_heading_pane_g2

0xb1b0,	// (0x0004a243) list_double_graphic_heading_pane_g3_ParamLimits

0xb1b0,	// (0x0004a243) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x0004e6e5) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x0004e6e5) list_double_graphic_heading_pane_g

0x8d12,	// (0x00047da5) list_double_graphic_heading_pane_t1_ParamLimits

0x8d12,	// (0x00047da5) list_double_graphic_heading_pane_t1

0x8c26,	// (0x00047cb9) list_double_graphic_heading_pane_t2_ParamLimits

0x8c26,	// (0x00047cb9) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x0004e6ec) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x0004e6ec) list_double_graphic_heading_pane_t

0x8d28,	// (0x00047dbb) list_double_time_pane_g1_ParamLimits

0x8d28,	// (0x00047dbb) list_double_time_pane_g1

0x8d39,	// (0x00047dcc) list_double_time_pane_g2_ParamLimits

0x8d39,	// (0x00047dcc) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x0004e6f1) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x0004e6f1) list_double_time_pane_g

0x8d45,	// (0x00047dd8) list_double_time_pane_t1_ParamLimits

0x8d45,	// (0x00047dd8) list_double_time_pane_t1

0x8d5b,	// (0x00047dee) list_double_time_pane_t2_ParamLimits

0x8d5b,	// (0x00047dee) list_double_time_pane_t2

0x8d6d,	// (0x00047e00) list_double_time_pane_t3_ParamLimits

0x8d6d,	// (0x00047e00) list_double_time_pane_t3

0x8d7f,	// (0x00047e12) list_double_time_pane_t4_ParamLimits

0x8d7f,	// (0x00047e12) list_double_time_pane_t4

0x0003,

0xf663,	// (0x0004e6f6) list_double_time_pane_t_ParamLimits

0xf663,	// (0x0004e6f6) list_double_time_pane_t

0x8d91,	// (0x00047e24) list_setting_pane_g1_ParamLimits

0x8d91,	// (0x00047e24) list_setting_pane_g1

0x8b47,	// (0x00047bda) list_setting_pane_g2_ParamLimits

0x8b47,	// (0x00047bda) list_setting_pane_g2

0x0001,

0xf66c,	// (0x0004e6ff) list_setting_pane_g_ParamLimits

0xf66c,	// (0x0004e6ff) list_setting_pane_g

0x8d9d,	// (0x00047e30) list_setting_pane_t1_ParamLimits

0x8d9d,	// (0x00047e30) list_setting_pane_t1

0x8db7,	// (0x00047e4a) list_setting_pane_t2_ParamLimits

0x8db7,	// (0x00047e4a) list_setting_pane_t2

0x0002,

0xf671,	// (0x0004e704) list_setting_pane_t_ParamLimits

0xf671,	// (0x0004e704) list_setting_pane_t

0x8df4,	// (0x00047e87) set_value_pane_cp_ParamLimits

0x8df4,	// (0x00047e87) set_value_pane_cp

0x8e00,	// (0x00047e93) list_setting_number_pane_g1_ParamLimits

0x8e00,	// (0x00047e93) list_setting_number_pane_g1

0x8e0c,	// (0x00047e9f) list_setting_number_pane_g2_ParamLimits

0x8e0c,	// (0x00047e9f) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x0004e70b) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x0004e70b) list_setting_number_pane_g

0x8e18,	// (0x00047eab) list_setting_number_pane_t1_ParamLimits

0x8e18,	// (0x00047eab) list_setting_number_pane_t1

0x8e31,	// (0x00047ec4) list_setting_number_pane_t2_ParamLimits

0x8e31,	// (0x00047ec4) list_setting_number_pane_t2

0x8e4b,	// (0x00047ede) list_setting_number_pane_t3_ParamLimits

0x8e4b,	// (0x00047ede) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x0004e710) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x0004e710) list_setting_number_pane_t

0x8df4,	// (0x00047e87) set_value_pane_ParamLimits

0x8df4,	// (0x00047e87) set_value_pane

0x3ee5,	// (0x00042f78) bg_set_opt_pane_ParamLimits

0x3ee5,	// (0x00042f78) bg_set_opt_pane

0x8e8e,	// (0x00047f21) set_value_pane_t1

0x3f06,	// (0x00042f99) slider_set_pane_cp3

0x3f0f,	// (0x00042fa2) volume_small_pane_cp

0x3f18,	// (0x00042fab) list_form_gen_pane

0x3f21,	// (0x00042fb4) scroll_pane_cp8

0x8ea4,	// (0x00047f37) form_field_data_pane_ParamLimits

0x8ea4,	// (0x00047f37) form_field_data_pane

0x8ec6,	// (0x00047f59) form_field_data_wide_pane_ParamLimits

0x8ec6,	// (0x00047f59) form_field_data_wide_pane

0x8ee7,	// (0x00047f7a) form_field_popup_pane_ParamLimits

0x8ee7,	// (0x00047f7a) form_field_popup_pane

0x8f07,	// (0x00047f9a) form_field_popup_wide_pane_ParamLimits

0x8f07,	// (0x00047f9a) form_field_popup_wide_pane

0x8f24,	// (0x00047fb7) form_field_slider_pane_ParamLimits

0x8f24,	// (0x00047fb7) form_field_slider_pane

0x8f37,	// (0x00047fca) form_field_slider_wide_pane_ParamLimits

0x8f37,	// (0x00047fca) form_field_slider_wide_pane

0x3f32,	// (0x00042fc5) data_form_pane

0x8f54,	// (0x00047fe7) form_field_data_pane_t1

0x45fa,	// (0x0004368d) input_focus_pane

0x8f6e,	// (0x00048001) data_form_wide_pane

0x8f8b,	// (0x0004801e) form_field_data_wide_pane_t1

0x3cb9,	// (0x00042d4c) input_focus_pane_cp6

0x8fad,	// (0x00048040) form_field_popup_pane_t1

0x45fa,	// (0x0004368d) input_focus_pane_cp7

0x4628,	// (0x000436bb) list_form_pane

0x8fcf,	// (0x00048062) form_field_popup_wide_pane_t1

0x45fa,	// (0x0004368d) input_focus_pane_cp8

0x4634,	// (0x000436c7) list_form_wide_pane

0x8fec,	// (0x0004807f) form_field_slider_pane_t1_ParamLimits

0x8fec,	// (0x0004807f) form_field_slider_pane_t1

0xb1bc,	// (0x0004a24f) form_field_slider_pane_t2_ParamLimits

0xb1bc,	// (0x0004a24f) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x0004e720) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x0004e720) form_field_slider_pane_t

0x38e9,	// (0x0004297c) input_focus_pane_cp9_ParamLimits

0x38e9,	// (0x0004297c) input_focus_pane_cp9

0xb1d1,	// (0x0004a264) slider_cont_pane_ParamLimits

0xb1d1,	// (0x0004a264) slider_cont_pane

0x4643,	// (0x000436d6) form_field_slider_wide_pane_t1_ParamLimits

0x4643,	// (0x000436d6) form_field_slider_wide_pane_t1

0xb1e5,	// (0x0004a278) form_field_slider_wide_pane_t2_ParamLimits

0xb1e5,	// (0x0004a278) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x0004e725) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x0004e725) form_field_slider_wide_pane_t

0x38e9,	// (0x0004297c) input_focus_pane_cp10_ParamLimits

0x38e9,	// (0x0004297c) input_focus_pane_cp10

0xb1f7,	// (0x0004a28a) slider_cont_pane_cp1_ParamLimits

0xb1f7,	// (0x0004a28a) slider_cont_pane_cp1

0xb20b,	// (0x0004a29e) slider_form_pane_cp

0x4655,	// (0x000436e8) input_focus_pane_g1

0x465d,	// (0x000436f0) input_focus_pane_g2

0x4665,	// (0x000436f8) input_focus_pane_g3

0x466d,	// (0x00043700) input_focus_pane_g4

0x4675,	// (0x00043708) input_focus_pane_g5

0x467d,	// (0x00043710) input_focus_pane_g6

0x4685,	// (0x00043718) input_focus_pane_g7

0x468d,	// (0x00043720) input_focus_pane_g8

0x4695,	// (0x00043728) input_focus_pane_g9

0x3891,	// (0x00042924) input_focus_pane_g10

0x0009,

0xf697,	// (0x0004e72a) input_focus_pane_g

0x58ff,	// (0x00044992) wait_border_pane_g3_copy1

0xb213,	// (0x0004a2a6) data_form_pane_t1

0x3891,	// (0x00042924) wait_anim_pane_g1_copy1

0xbeaa,	// (0x0004af3d) data_form_wide_pane_t1

0xb22e,	// (0x0004a2c1) list_form_graphic_pane_cp_ParamLimits

0xb22e,	// (0x0004a2c1) list_form_graphic_pane_cp

0x650e,	// (0x000455a1) slider_form_pane_g1

0x6517,	// (0x000455aa) slider_form_pane_g2

0x0006,

0xf995,	// (0x0004ea28) slider_form_pane_g

0xb22e,	// (0x0004a2c1) list_form_graphic_pane_ParamLimits

0xb22e,	// (0x0004a2c1) list_form_graphic_pane

0xb245,	// (0x0004a2d8) list_form_graphic_pane_g1

0xb24d,	// (0x0004a2e0) list_form_graphic_pane_t1_ParamLimits

0xb24d,	// (0x0004a2e0) list_form_graphic_pane_t1

0x38f7,	// (0x0004298a) list_highlight_pane_cp5_ParamLimits

0x38f7,	// (0x0004298a) list_highlight_pane_cp5

0xb262,	// (0x0004a2f5) find_pane_g1

0x469d,	// (0x00043730) input_find_pane

0xb26b,	// (0x0004a2fe) input_find_pane_g1_ParamLimits

0xb26b,	// (0x0004a2fe) input_find_pane_g1

0xb277,	// (0x0004a30a) input_find_pane_t1_ParamLimits

0xb277,	// (0x0004a30a) input_find_pane_t1

0xb28c,	// (0x0004a31f) input_find_pane_t2_ParamLimits

0xb28c,	// (0x0004a31f) input_find_pane_t2

0x0001,

0xf6ac,	// (0x0004e73f) input_find_pane_t_ParamLimits

0xf6ac,	// (0x0004e73f) input_find_pane_t

0x46a6,	// (0x00043739) input_focus_pane_cp5_ParamLimits

0x46a6,	// (0x00043739) input_focus_pane_cp5

0x46b4,	// (0x00043747) bg_popup_window_pane_cp2_ParamLimits

0x46b4,	// (0x00043747) bg_popup_window_pane_cp2

0x46c1,	// (0x00043754) listscroll_menu_pane_ParamLimits

0x46c1,	// (0x00043754) listscroll_menu_pane

0xb2ad,	// (0x0004a340) popup_submenu_window_ParamLimits

0xb2ad,	// (0x0004a340) popup_submenu_window

0x46cd,	// (0x00043760) find_popup_pane_g1

0x46d5,	// (0x00043768) input_popup_find_pane_cp

0x46a6,	// (0x00043739) input_focus_pane_cp4_ParamLimits

0x46a6,	// (0x00043739) input_focus_pane_cp4

0x46df,	// (0x00043772) input_popup_find_pane_t1_ParamLimits

0x46df,	// (0x00043772) input_popup_find_pane_t1

0x389b,	// (0x0004292e) bg_popup_sub_pane_cp

0x470d,	// (0x000437a0) listscroll_popup_sub_pane

0x4715,	// (0x000437a8) list_submenu_pane_ParamLimits

0x4715,	// (0x000437a8) list_submenu_pane

0x4726,	// (0x000437b9) scroll_pane_cp4

0x472e,	// (0x000437c1) list_single_popup_submenu_pane_ParamLimits

0x472e,	// (0x000437c1) list_single_popup_submenu_pane

0x4742,	// (0x000437d5) list_single_popup_submenu_pane_g1

0x474a,	// (0x000437dd) list_single_popup_submenu_pane_t1_ParamLimits

0x474a,	// (0x000437dd) list_single_popup_submenu_pane_t1

0x38f7,	// (0x0004298a) bg_active_tab_pane_cp1_ParamLimits

0x38f7,	// (0x0004298a) bg_active_tab_pane_cp1

0xb2e3,	// (0x0004a376) tabs_2_active_pane_g1

0xb2eb,	// (0x0004a37e) tabs_2_active_pane_t1

0x38f7,	// (0x0004298a) bg_passive_tab_pane_cp1_ParamLimits

0x38f7,	// (0x0004298a) bg_passive_tab_pane_cp1

0xb2e3,	// (0x0004a376) tabs_2_passive_pane_g1

0xb2eb,	// (0x0004a37e) tabs_2_passive_pane_t1

0x610d,	// (0x000451a0) bg_active_tab_pane_cp4

0xb2fd,	// (0x0004a390) tabs_2_long_active_pane_t1

0xb310,	// (0x0004a3a3) bg_passive_tab_pane_cp4

0x9bee,	// (0x00048c81) list_single_midp_graphic_pane_g4_ParamLimits

0x610d,	// (0x000451a0) bg_active_tab_pane_cp5

0xb31c,	// (0x0004a3af) tabs_3_long_active_pane_t1

0xb310,	// (0x0004a3a3) bg_passive_tab_pane_cp5

0x9bee,	// (0x00048c81) list_single_midp_graphic_pane_g4

0x38f7,	// (0x0004298a) bg_popup_window_pane_cp13_ParamLimits

0x38f7,	// (0x0004298a) bg_popup_window_pane_cp13

0x4774,	// (0x00043807) listscroll_popup_fast_pane_ParamLimits

0x4774,	// (0x00043807) listscroll_popup_fast_pane

0x4780,	// (0x00043813) grid_popup_fast_pane_ParamLimits

0x4780,	// (0x00043813) grid_popup_fast_pane

0x4792,	// (0x00043825) scroll_pane_cp9_ParamLimits

0x4792,	// (0x00043825) scroll_pane_cp9

0x7855,	// (0x000468e8) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7855,	// (0x000468e8) list_single_graphic_hl_pane_t1_cp2

0x47b6,	// (0x00043849) input_focus_pane_cp20_ParamLimits

0x47b6,	// (0x00043849) input_focus_pane_cp20

0x47c4,	// (0x00043857) query_popup_data_pane_t1_ParamLimits

0x47c4,	// (0x00043857) query_popup_data_pane_t1

0x47d7,	// (0x0004386a) query_popup_data_pane_t2_ParamLimits

0x47d7,	// (0x0004386a) query_popup_data_pane_t2

0x481d,	// (0x000438b0) query_popup_data_pane_t3_ParamLimits

0x481d,	// (0x000438b0) query_popup_data_pane_t3

0x485e,	// (0x000438f1) query_popup_data_pane_t4_ParamLimits

0x485e,	// (0x000438f1) query_popup_data_pane_t4

0x489a,	// (0x0004392d) query_popup_data_pane_t5_ParamLimits

0x489a,	// (0x0004392d) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x0004e744) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x0004e744) query_popup_data_pane_t

0x4655,	// (0x000436e8) bg_set_opt_pane_g1

0x465d,	// (0x000436f0) bg_set_opt_pane_g2

0x4665,	// (0x000436f8) bg_set_opt_pane_g3

0x466d,	// (0x00043700) bg_set_opt_pane_g4

0x4675,	// (0x00043708) bg_set_opt_pane_g5

0x467d,	// (0x00043710) bg_set_opt_pane_g6

0x4685,	// (0x00043718) bg_set_opt_pane_g7

0x468d,	// (0x00043720) bg_set_opt_pane_g8

0x4695,	// (0x00043728) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x0004e74f) bg_set_opt_pane_g

0x929a,	// (0x0004832d) control_top_pane_stacon_ParamLimits

0x929a,	// (0x0004832d) control_top_pane_stacon

0x92ed,	// (0x00048380) signal_pane_stacon_ParamLimits

0x92ed,	// (0x00048380) signal_pane_stacon

0x4d01,	// (0x00043d94) stacon_top_pane_g1_ParamLimits

0x4d01,	// (0x00043d94) stacon_top_pane_g1

0x9312,	// (0x000483a5) title_pane_stacon_ParamLimits

0x9312,	// (0x000483a5) title_pane_stacon

0x933c,	// (0x000483cf) uni_indicator_pane_stacon_ParamLimits

0x933c,	// (0x000483cf) uni_indicator_pane_stacon

0x9351,	// (0x000483e4) battery_pane_stacon_ParamLimits

0x9351,	// (0x000483e4) battery_pane_stacon

0x9395,	// (0x00048428) control_bottom_pane_stacon_ParamLimits

0x9395,	// (0x00048428) control_bottom_pane_stacon

0x93b8,	// (0x0004844b) navi_pane_stacon_ParamLimits

0x93b8,	// (0x0004844b) navi_pane_stacon

0x4d23,	// (0x00043db6) stacon_bottom_pane_g1_ParamLimits

0x4d23,	// (0x00043db6) stacon_bottom_pane_g1

0x9004,	// (0x00048097) aid_levels_signal_lsc_ParamLimits

0x9004,	// (0x00048097) aid_levels_signal_lsc

0x901b,	// (0x000480ae) signal_pane_stacon_g1_ParamLimits

0x901b,	// (0x000480ae) signal_pane_stacon_g1

0x902f,	// (0x000480c2) signal_pane_stacon_g2_ParamLimits

0x902f,	// (0x000480c2) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0004e762) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0004e762) signal_pane_stacon_g

0x9064,	// (0x000480f7) title_pane_stacon_t1_ParamLimits

0x9064,	// (0x000480f7) title_pane_stacon_t1

0x48f2,	// (0x00043985) uni_indicator_pane_stacon_g1

0x48fc,	// (0x0004398f) uni_indicator_pane_stacon_g2

0x48de,	// (0x00043971) uni_indicator_pane_stacon_g3

0x48e8,	// (0x0004397b) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x0004e76e) uni_indicator_pane_stacon_g

0x9089,	// (0x0004811c) control_top_pane_stacon_g1

0x9091,	// (0x00048124) control_top_pane_stacon_t1_ParamLimits

0x9091,	// (0x00048124) control_top_pane_stacon_t1

0x90c8,	// (0x0004815b) aid_levels_battery_lsc_ParamLimits

0x90c8,	// (0x0004815b) aid_levels_battery_lsc

0x90e0,	// (0x00048173) battery_pane_stacon_g1_ParamLimits

0x90e0,	// (0x00048173) battery_pane_stacon_g1

0x90f3,	// (0x00048186) battery_pane_stacon_g2_ParamLimits

0x90f3,	// (0x00048186) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x0004e777) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x0004e777) battery_pane_stacon_g

0x9131,	// (0x000481c4) navi_icon_pane_stacon

0x9145,	// (0x000481d8) navi_navi_pane_stacon

0x9131,	// (0x000481c4) navi_text_pane_stacon

0x9089,	// (0x0004811c) control_bottom_pane_stacon_g1

0x9159,	// (0x000481ec) control_bottom_pane_stacon_t1_ParamLimits

0x9159,	// (0x000481ec) control_bottom_pane_stacon_t1

0xb32e,	// (0x0004a3c1) grid_app_pane_ParamLimits

0xb32e,	// (0x0004a3c1) grid_app_pane

0xb350,	// (0x0004a3e3) scroll_pane_cp15_ParamLimits

0xb350,	// (0x0004a3e3) scroll_pane_cp15

0xb365,	// (0x0004a3f8) cell_app_pane_ParamLimits

0xb365,	// (0x0004a3f8) cell_app_pane

0xb38b,	// (0x0004a41e) cell_app_pane_g1_ParamLimits

0xb38b,	// (0x0004a41e) cell_app_pane_g1

0x4920,	// (0x000439b3) cell_app_pane_g2_ParamLimits

0x4920,	// (0x000439b3) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x0004e77c) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x0004e77c) cell_app_pane_g

0xb3ab,	// (0x0004a43e) cell_app_pane_t1_ParamLimits

0xb3ab,	// (0x0004a43e) cell_app_pane_t1

0x492c,	// (0x000439bf) grid_highlight_pane_ParamLimits

0x492c,	// (0x000439bf) grid_highlight_pane

0x4655,	// (0x000436e8) cell_highlight_pane_g1

0x465d,	// (0x000436f0) cell_highlight_pane_g2

0x4665,	// (0x000436f8) cell_highlight_pane_g3

0x466d,	// (0x00043700) cell_highlight_pane_g4

0x4675,	// (0x00043708) cell_highlight_pane_g5

0x467d,	// (0x00043710) cell_highlight_pane_g6

0x4685,	// (0x00043718) cell_highlight_pane_g7

0x468d,	// (0x00043720) cell_highlight_pane_g8

0x4695,	// (0x00043728) cell_highlight_pane_g9

0x3891,	// (0x00042924) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x0004e72a) cell_highlight_pane_g

0x493d,	// (0x000439d0) bg_scroll_pane

0x91a3,	// (0x00048236) scroll_handle_pane

0x4984,	// (0x00043a17) scroll_bg_pane_g1

0x4999,	// (0x00043a2c) scroll_bg_pane_g2

0x49b1,	// (0x00043a44) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x0004e781) scroll_bg_pane_g

0x49c6,	// (0x00043a59) scroll_handle_focus_pane_ParamLimits

0x49c6,	// (0x00043a59) scroll_handle_focus_pane

0x4984,	// (0x00043a17) scroll_handle_pane_g1

0x49d3,	// (0x00043a66) scroll_handle_pane_g2

0x49b1,	// (0x00043a44) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x0004e788) scroll_handle_pane_g

0x46a6,	// (0x00043739) bg_popup_sub_pane_cp21_ParamLimits

0x46a6,	// (0x00043739) bg_popup_sub_pane_cp21

0x49e7,	// (0x00043a7a) popup_fep_japan_predictive_window_t1_ParamLimits

0x49e7,	// (0x00043a7a) popup_fep_japan_predictive_window_t1

0x4a01,	// (0x00043a94) popup_fep_japan_predictive_window_t2_ParamLimits

0x4a01,	// (0x00043a94) popup_fep_japan_predictive_window_t2

0x4a34,	// (0x00043ac7) popup_fep_japan_predictive_window_t3_ParamLimits

0x4a34,	// (0x00043ac7) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x0004e78f) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x0004e78f) popup_fep_japan_predictive_window_t

0x389b,	// (0x0004292e) bg_popup_sub_pane_cp23

0x4a6b,	// (0x00043afe) listscroll_japin_cand_pane

0x4a73,	// (0x00043b06) popup_fep_japan_candidate_window_t1

0x4a81,	// (0x00043b14) candidate_pane_ParamLimits

0x4a81,	// (0x00043b14) candidate_pane

0x4a93,	// (0x00043b26) scroll_pane_cp30

0x4a9b,	// (0x00043b2e) list_single_popup_jap_candidate_pane_ParamLimits

0x4a9b,	// (0x00043b2e) list_single_popup_jap_candidate_pane

0x389b,	// (0x0004292e) list_highlight_pane_cp30

0x4aaf,	// (0x00043b42) list_single_popup_jap_candidate_pane_t1

0x4abe,	// (0x00043b51) level_1_signal

0x4acb,	// (0x00043b5e) level_2_signal

0x4ad8,	// (0x00043b6b) level_3_signal

0x4ae5,	// (0x00043b78) level_4_signal

0x4af2,	// (0x00043b85) level_5_signal

0x4aff,	// (0x00043b92) level_6_signal

0x4b0c,	// (0x00043b9f) level_7_signal

0x4abe,	// (0x00043b51) level_1_battery

0x4acb,	// (0x00043b5e) level_2_battery

0x4ad8,	// (0x00043b6b) level_3_battery

0x4ae5,	// (0x00043b78) level_4_battery

0x4af2,	// (0x00043b85) level_5_battery

0x4aff,	// (0x00043b92) level_6_battery

0x4b0c,	// (0x00043b9f) level_7_battery

0x4b31,	// (0x00043bc4) list_menu_pane_ParamLimits

0x4b31,	// (0x00043bc4) list_menu_pane

0x4b47,	// (0x00043bda) scroll_pane_cp25_ParamLimits

0x4b47,	// (0x00043bda) scroll_pane_cp25

0x4b60,	// (0x00043bf3) list_double2_graphic_pane_cp2_ParamLimits

0x4b60,	// (0x00043bf3) list_double2_graphic_pane_cp2

0x4b60,	// (0x00043bf3) list_double2_large_graphic_pane_cp2_ParamLimits

0x4b60,	// (0x00043bf3) list_double2_large_graphic_pane_cp2

0x4b60,	// (0x00043bf3) list_double2_pane_cp2_ParamLimits

0x4b60,	// (0x00043bf3) list_double2_pane_cp2

0x4b60,	// (0x00043bf3) list_double_graphic_pane_cp2_ParamLimits

0x4b60,	// (0x00043bf3) list_double_graphic_pane_cp2

0x4b60,	// (0x00043bf3) list_double_large_graphic_pane_cp2_ParamLimits

0x4b60,	// (0x00043bf3) list_double_large_graphic_pane_cp2

0x4b60,	// (0x00043bf3) list_double_number_pane_cp2_ParamLimits

0x4b60,	// (0x00043bf3) list_double_number_pane_cp2

0x4b60,	// (0x00043bf3) list_double_pane_cp2_ParamLimits

0x4b60,	// (0x00043bf3) list_double_pane_cp2

0xb3d6,	// (0x0004a469) list_single_2graphic_pane_cp2_ParamLimits

0xb3d6,	// (0x0004a469) list_single_2graphic_pane_cp2

0xb3d6,	// (0x0004a469) list_single_graphic_heading_pane_cp2_ParamLimits

0xb3d6,	// (0x0004a469) list_single_graphic_heading_pane_cp2

0xb3d6,	// (0x0004a469) list_single_graphic_pane_cp2_ParamLimits

0xb3d6,	// (0x0004a469) list_single_graphic_pane_cp2

0xb3d6,	// (0x0004a469) list_single_heading_pane_cp2_ParamLimits

0xb3d6,	// (0x0004a469) list_single_heading_pane_cp2

0x4b70,	// (0x00043c03) list_single_large_graphic_pane_cp2_ParamLimits

0x4b70,	// (0x00043c03) list_single_large_graphic_pane_cp2

0xb3d6,	// (0x0004a469) list_single_number_heading_pane_cp2_ParamLimits

0xb3d6,	// (0x0004a469) list_single_number_heading_pane_cp2

0xb3d6,	// (0x0004a469) list_single_number_pane_cp2_ParamLimits

0xb3d6,	// (0x0004a469) list_single_number_pane_cp2

0xb3d6,	// (0x0004a469) list_single_pane_cp2_ParamLimits

0xb3d6,	// (0x0004a469) list_single_pane_cp2

0x4b8a,	// (0x00043c1d) bg_popup_sub_pane_cp22

0x9252,	// (0x000482e5) popup_side_volume_key_window_g1

0x9276,	// (0x00048309) popup_side_volume_key_window_t1

0x9292,	// (0x00048325) volume_small_pane_cp1

0x38e9,	// (0x0004297c) bg_popup_sub_pane_cp24_ParamLimits

0x38e9,	// (0x0004297c) bg_popup_sub_pane_cp24

0x4ba0,	// (0x00043c33) fep_china_uni_candidate_pane_ParamLimits

0x4ba0,	// (0x00043c33) fep_china_uni_candidate_pane

0x4bb4,	// (0x00043c47) fep_china_uni_entry_pane

0x4bc4,	// (0x00043c57) popup_fep_china_uni_window_g1

0x4be0,	// (0x00043c73) fep_china_uni_entry_pane_g1

0x4be8,	// (0x00043c7b) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x0004e7c0) fep_china_uni_entry_pane_g

0x4bf0,	// (0x00043c83) fep_entry_item_pane

0x4bfa,	// (0x00043c8d) fep_candidate_item_pane

0x4c02,	// (0x00043c95) fep_china_uni_candidate_pane_g1

0x4c0a,	// (0x00043c9d) fep_china_uni_candidate_pane_g2

0x4c12,	// (0x00043ca5) fep_china_uni_candidate_pane_g3

0x4c1a,	// (0x00043cad) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x0004e7c5) fep_china_uni_candidate_pane_g

0x3891,	// (0x00042924) fep_entry_item_pane_g1

0x4c22,	// (0x00043cb5) fep_entry_item_pane_t1_ParamLimits

0x4c22,	// (0x00043cb5) fep_entry_item_pane_t1

0x4c38,	// (0x00043ccb) fep_candidate_item_pane_t1_ParamLimits

0x4c38,	// (0x00043ccb) fep_candidate_item_pane_t1

0x4c4d,	// (0x00043ce0) fep_candidate_item_pane_t2_ParamLimits

0x4c4d,	// (0x00043ce0) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x0004e7ce) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x0004e7ce) fep_candidate_item_pane_t

0x38f7,	// (0x0004298a) list_highlight_pane_cp31_ParamLimits

0x38f7,	// (0x0004298a) list_highlight_pane_cp31

0x4c5f,	// (0x00043cf2) level_1_signal_lsc

0x4c68,	// (0x00043cfb) level_2_signal_lsc

0x4c71,	// (0x00043d04) level_3_signal_lsc

0x4c7a,	// (0x00043d0d) level_4_signal_lsc

0x4c83,	// (0x00043d16) level_5_signal_lsc

0x4c8c,	// (0x00043d1f) level_6_signal_lsc

0x4c95,	// (0x00043d28) level_7_signal_lsc

0x4c95,	// (0x00043d28) level_1_battery_lsc

0x4c9e,	// (0x00043d31) level_2_battery_lsc

0x4ca7,	// (0x00043d3a) level_3_battery_lsc

0x4cb0,	// (0x00043d43) level_4_battery_lsc

0x4cb9,	// (0x00043d4c) level_5_battery_lsc

0x4cc2,	// (0x00043d55) level_6_battery_lsc

0x4c5f,	// (0x00043cf2) level_7_battery_lsc

0x4ccb,	// (0x00043d5e) scroll_handle_focus_pane_g1

0x4cd4,	// (0x00043d67) scroll_handle_focus_pane_g2

0x4cdd,	// (0x00043d70) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x0004e7d3) scroll_handle_focus_pane_g

0xb44d,	// (0x0004a4e0) list_single_2graphic_pane_g1_ParamLimits

0xb44d,	// (0x0004a4e0) list_single_2graphic_pane_g1

0x8ab7,	// (0x00047b4a) list_single_2graphic_pane_g2_ParamLimits

0x8ab7,	// (0x00047b4a) list_single_2graphic_pane_g2

0xb11c,	// (0x0004a1af) list_single_2graphic_pane_g3_ParamLimits

0xb11c,	// (0x0004a1af) list_single_2graphic_pane_g3

0xb459,	// (0x0004a4ec) list_single_2graphic_pane_g4_ParamLimits

0xb459,	// (0x0004a4ec) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x0004e7da) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x0004e7da) list_single_2graphic_pane_g

0xb46a,	// (0x0004a4fd) list_single_2graphic_pane_t1_ParamLimits

0xb46a,	// (0x0004a4fd) list_single_2graphic_pane_t1

0xb498,	// (0x0004a52b) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb498,	// (0x0004a52b) list_double2_graphic_large_graphic_pane_g1

0xb19f,	// (0x0004a232) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb19f,	// (0x0004a232) list_double2_graphic_large_graphic_pane_g2

0xb172,	// (0x0004a205) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb172,	// (0x0004a205) list_double2_graphic_large_graphic_pane_g3

0xb4a8,	// (0x0004a53b) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb4a8,	// (0x0004a53b) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x0004e7e3) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x0004e7e3) list_double2_graphic_large_graphic_pane_g

0xb4b4,	// (0x0004a547) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb4b4,	// (0x0004a547) list_double2_graphic_large_graphic_pane_t1

0xb4ca,	// (0x0004a55d) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb4ca,	// (0x0004a55d) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x0004e7ec) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x0004e7ec) list_double2_graphic_large_graphic_pane_t

0x4daf,	// (0x00043e42) popup_fast_swap_window_ParamLimits

0x4daf,	// (0x00043e42) popup_fast_swap_window

0x4dcb,	// (0x00043e5e) popup_side_volume_key_window

0x4de5,	// (0x00043e78) stacon_top_pane

0x4def,	// (0x00043e82) status_pane_ParamLimits

0x4def,	// (0x00043e82) status_pane

0x4de5,	// (0x00043e78) status_small_pane

0x389b,	// (0x0004292e) control_pane

0x389b,	// (0x0004292e) stacon_bottom_pane

0x3f21,	// (0x00042fb4) scroll_pane_cp121

0x3f18,	// (0x00042fab) set_content_pane

0xb4dc,	// (0x0004a56f) bg_active_tab_pane_g1_cp1

0x4cef,	// (0x00043d82) bg_active_tab_pane_g2_cp1

0xb4e5,	// (0x0004a578) bg_active_tab_pane_g3_cp1

0xb4dc,	// (0x0004a56f) bg_passive_tab_pane_g1_cp1

0x4cef,	// (0x00043d82) bg_passive_tab_pane_g2_cp1

0xb4e5,	// (0x0004a578) bg_passive_tab_pane_g3_cp1

0x4cf8,	// (0x00043d8b) bg_active_tab_pane_g1_cp2

0x4cef,	// (0x00043d82) bg_active_tab_pane_g2_cp2

0x4ce6,	// (0x00043d79) bg_active_tab_pane_g3_cp2

0x4cf8,	// (0x00043d8b) bg_passive_tab_pane_g1_cp2

0x4cef,	// (0x00043d82) bg_passive_tab_pane_g2_cp2

0x4ce6,	// (0x00043d79) bg_passive_tab_pane_g3_cp2

0xb4ee,	// (0x0004a581) bg_active_tab_pane_g1_cp3

0x4cef,	// (0x00043d82) bg_active_tab_pane_g2_cp3

0xb4f7,	// (0x0004a58a) bg_active_tab_pane_g3_cp3

0xb4ee,	// (0x0004a581) bg_passive_tab_pane_g1_cp3

0x4cef,	// (0x00043d82) bg_passive_tab_pane_g2_cp3

0xb4f7,	// (0x0004a58a) bg_passive_tab_pane_g3_cp3

0xb500,	// (0x0004a593) bg_active_tab_pane_g1_cp4

0x4cef,	// (0x00043d82) bg_active_tab_pane_g2_cp4

0xb50b,	// (0x0004a59e) bg_active_tab_pane_g3_cp4

0xb500,	// (0x0004a593) bg_passive_tab_pane_g1_cp4

0x4cef,	// (0x00043d82) bg_passive_tab_pane_g2_cp4

0xb50b,	// (0x0004a59e) bg_passive_tab_pane_g3_cp4

0x4d48,	// (0x00043ddb) bg_active_tab_pane_g1_cp5

0x4cef,	// (0x00043d82) bg_active_tab_pane_g2_cp5

0x4d3f,	// (0x00043dd2) bg_active_tab_pane_g3_cp5

0x4d48,	// (0x00043ddb) bg_passive_tab_pane_g1_cp5

0x4cef,	// (0x00043d82) bg_passive_tab_pane_g2_cp5

0x4d3f,	// (0x00043dd2) bg_passive_tab_pane_g3_cp5

0xb516,	// (0x0004a5a9) list_set_graphic_pane_ParamLimits

0xb516,	// (0x0004a5a9) list_set_graphic_pane

0x389b,	// (0x0004292e) bg_set_opt_pane_cp4

0x4d51,	// (0x00043de4) list_set_graphic_pane_g1_ParamLimits

0x4d51,	// (0x00043de4) list_set_graphic_pane_g1

0x4d5d,	// (0x00043df0) list_set_graphic_pane_g2_ParamLimits

0x4d5d,	// (0x00043df0) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x0004e7f1) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x0004e7f1) list_set_graphic_pane_g

0x0009,

0xfae1,	// (0x0004eb74) volume_small_pane_cp_g

0xb536,	// (0x0004a5c9) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xb536,	// (0x0004a5c9) list_double2_large_graphic_pane_g1_cp2

0xb542,	// (0x0004a5d5) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xb542,	// (0x0004a5d5) list_double2_large_graphic_pane_g2_cp2

0x4d7f,	// (0x00043e12) list_double2_large_graphic_pane_g3_cp2

0x4d87,	// (0x00043e1a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4d87,	// (0x00043e1a) list_double2_large_graphic_pane_t1_cp2

0x4d9d,	// (0x00043e30) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4d9d,	// (0x00043e30) list_double2_large_graphic_pane_t2_cp2

0xbd1c,	// (0x0004adaf) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xbd1c,	// (0x0004adaf) list_double_large_graphic_pane_g1_cp2

0xbd2d,	// (0x0004adc0) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xbd2d,	// (0x0004adc0) list_double_large_graphic_pane_g2_cp2

0x4ed0,	// (0x00043f63) list_double_large_graphic_pane_g3_cp2

0x62cc,	// (0x0004535f) list_double_large_graphic_pane_g4_cp

0x62d4,	// (0x00045367) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x62d4,	// (0x00045367) list_double_large_graphic_pane_t1_cp2

0x62eb,	// (0x0004537e) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x62eb,	// (0x0004537e) list_double_large_graphic_pane_t2_cp2

0xb553,	// (0x0004a5e6) list_double2_graphic_pane_g1_cp2_ParamLimits

0xb553,	// (0x0004a5e6) list_double2_graphic_pane_g1_cp2

0xb561,	// (0x0004a5f4) list_double2_graphic_pane_g2_cp2_ParamLimits

0xb561,	// (0x0004a5f4) list_double2_graphic_pane_g2_cp2

0xb572,	// (0x0004a605) list_double2_graphic_pane_g3_cp2

0x4dfd,	// (0x00043e90) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4dfd,	// (0x00043e90) list_double2_graphic_pane_t1_cp2

0x4e13,	// (0x00043ea6) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4e13,	// (0x00043ea6) list_double2_graphic_pane_t2_cp2

0x4e25,	// (0x00043eb8) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4e25,	// (0x00043eb8) list_single_number_heading_pane_g1_cp2

0x4e31,	// (0x00043ec4) list_single_number_heading_pane_g2_cp2

0x4e39,	// (0x00043ecc) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4e39,	// (0x00043ecc) list_single_number_heading_pane_t1_cp2

0xb57c,	// (0x0004a60f) list_single_number_heading_pane_t2_cp2_ParamLimits

0xb57c,	// (0x0004a60f) list_single_number_heading_pane_t2_cp2

0x4e4f,	// (0x00043ee2) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4e4f,	// (0x00043ee2) list_single_number_heading_pane_t3_cp2

0x4e25,	// (0x00043eb8) list_single_heading_pane_g1_cp2_ParamLimits

0x4e25,	// (0x00043eb8) list_single_heading_pane_g1_cp2

0x4e31,	// (0x00043ec4) list_single_heading_pane_g2_cp2

0x4e39,	// (0x00043ecc) list_single_heading_pane_t1_cp2_ParamLimits

0x4e39,	// (0x00043ecc) list_single_heading_pane_t1_cp2

0xbd0a,	// (0x0004ad9d) list_single_heading_pane_t2_cp2_ParamLimits

0xbd0a,	// (0x0004ad9d) list_single_heading_pane_t2_cp2

0x6009,	// (0x0004509c) list_double_graphic_pane_g1_cp2_ParamLimits

0x6009,	// (0x0004509c) list_double_graphic_pane_g1_cp2

0x6015,	// (0x000450a8) list_double_graphic_pane_g2_cp2_ParamLimits

0x6015,	// (0x000450a8) list_double_graphic_pane_g2_cp2

0x6024,	// (0x000450b7) list_double_graphic_pane_g3_cp2

0x602c,	// (0x000450bf) list_double_graphic_pane_t1_cp2_ParamLimits

0x602c,	// (0x000450bf) list_double_graphic_pane_t1_cp2

0x6042,	// (0x000450d5) list_double_graphic_pane_t2_cp2_ParamLimits

0x6042,	// (0x000450d5) list_double_graphic_pane_t2_cp2

0x4ec4,	// (0x00043f57) list_double_number_pane_g1_cp2_ParamLimits

0x4ec4,	// (0x00043f57) list_double_number_pane_g1_cp2

0x4ed0,	// (0x00043f63) list_double_number_pane_g2_cp2

0xbce4,	// (0x0004ad77) list_double_number_pane_t1_cp2_ParamLimits

0xbce4,	// (0x0004ad77) list_double_number_pane_t1_cp2

0x5fe1,	// (0x00045074) list_double_number_pane_t2_cp2_ParamLimits

0x5fe1,	// (0x00045074) list_double_number_pane_t2_cp2

0x5ff7,	// (0x0004508a) list_double_number_pane_t3_cp2_ParamLimits

0x5ff7,	// (0x0004508a) list_double_number_pane_t3_cp2

0xbc48,	// (0x0004acdb) list_single_graphic_pane_g1_cp2_ParamLimits

0xbc48,	// (0x0004acdb) list_single_graphic_pane_g1_cp2

0x4f10,	// (0x00043fa3) list_single_graphic_pane_g2_cp2_ParamLimits

0x4f10,	// (0x00043fa3) list_single_graphic_pane_g2_cp2

0x4f1c,	// (0x00043faf) list_single_graphic_pane_g3_cp2

0x5f50,	// (0x00044fe3) list_single_graphic_pane_t1_cp2_ParamLimits

0x5f50,	// (0x00044fe3) list_single_graphic_pane_t1_cp2

0x4f10,	// (0x00043fa3) list_single_number_pane_g1_cp2_ParamLimits

0x4f10,	// (0x00043fa3) list_single_number_pane_g1_cp2

0x4f1c,	// (0x00043faf) list_single_number_pane_g2_cp2

0x5f50,	// (0x00044fe3) list_single_number_pane_t1_cp2_ParamLimits

0x5f50,	// (0x00044fe3) list_single_number_pane_t1_cp2

0xbc34,	// (0x0004acc7) list_single_number_pane_t2_cp2_ParamLimits

0xbc34,	// (0x0004acc7) list_single_number_pane_t2_cp2

0xb542,	// (0x0004a5d5) list_double2_pane_g1_cp2_ParamLimits

0xb542,	// (0x0004a5d5) list_double2_pane_g1_cp2

0x4d7f,	// (0x00043e12) list_double2_pane_g2_cp2

0x4e9c,	// (0x00043f2f) list_double2_pane_t1_cp2_ParamLimits

0x4e9c,	// (0x00043f2f) list_double2_pane_t1_cp2

0x4eb2,	// (0x00043f45) list_double2_pane_t2_cp2_ParamLimits

0x4eb2,	// (0x00043f45) list_double2_pane_t2_cp2

0x4ec4,	// (0x00043f57) list_double_pane_g1_cp2_ParamLimits

0x4ec4,	// (0x00043f57) list_double_pane_g1_cp2

0x4ed0,	// (0x00043f63) list_double_pane_g2_cp2

0x4ed8,	// (0x00043f6b) list_double_pane_t1_cp2_ParamLimits

0x4ed8,	// (0x00043f6b) list_double_pane_t1_cp2

0x4eee,	// (0x00043f81) list_double_pane_t2_cp2_ParamLimits

0x4eee,	// (0x00043f81) list_double_pane_t2_cp2

0x4f00,	// (0x00043f93) list_single_pane_cp2_g3

0x4f10,	// (0x00043fa3) list_single_pane_g1_cp2_ParamLimits

0x4f10,	// (0x00043fa3) list_single_pane_g1_cp2

0x4f1c,	// (0x00043faf) list_single_pane_g2_cp2

0x4f24,	// (0x00043fb7) list_single_pane_t1_cp2_ParamLimits

0x4f24,	// (0x00043fb7) list_single_pane_t1_cp2

0xb5a6,	// (0x0004a639) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xb5a6,	// (0x0004a639) list_single_large_graphic_pane_g1_cp2

0x4f3c,	// (0x00043fcf) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4f3c,	// (0x00043fcf) list_single_large_graphic_pane_g2_cp2

0x4f48,	// (0x00043fdb) list_single_large_graphic_pane_g3_cp2

0x4f50,	// (0x00043fe3) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4f50,	// (0x00043fe3) list_single_large_graphic_pane_g4_cp1

0x4f6a,	// (0x00043ffd) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4f6a,	// (0x00043ffd) list_single_large_graphic_pane_t1_cp2

0x5f2e,	// (0x00044fc1) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5f2e,	// (0x00044fc1) list_single_graphic_heading_pane_g1_cp2

0xbc11,	// (0x0004aca4) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xbc11,	// (0x0004aca4) list_single_graphic_heading_pane_g4_cp2

0x4f1c,	// (0x00043faf) list_single_graphic_heading_pane_g5_cp2

0x5f3a,	// (0x00044fcd) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5f3a,	// (0x00044fcd) list_single_graphic_heading_pane_t1_cp2

0xbc22,	// (0x0004acb5) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xbc22,	// (0x0004acb5) list_single_graphic_heading_pane_t2_cp2

0x5f00,	// (0x00044f93) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5f00,	// (0x00044f93) list_single_2graphic_pane_g1_cp2

0xbc11,	// (0x0004aca4) list_single_2graphic_pane_g2_cp2_ParamLimits

0xbc11,	// (0x0004aca4) list_single_2graphic_pane_g2_cp2

0x4f1c,	// (0x00043faf) list_single_2graphic_pane_g3_cp2

0x5f0c,	// (0x00044f9f) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5f0c,	// (0x00044f9f) list_single_2graphic_pane_g4_cp2

0x5f18,	// (0x00044fab) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5f18,	// (0x00044fab) list_single_2graphic_pane_t1_cp2

0x3891,	// (0x00042924) list_highlight_pane_g10_cp1

0x5af6,	// (0x00044b89) list_highlight_pane_g1_cp1

0x5afe,	// (0x00044b91) list_highlight_pane_g2_cp1

0x5b06,	// (0x00044b99) list_highlight_pane_g3_cp1

0x5b0e,	// (0x00044ba1) list_highlight_pane_g4_cp1

0x5b16,	// (0x00044ba9) list_highlight_pane_g5_cp1

0x5b1e,	// (0x00044bb1) list_highlight_pane_g6_cp1

0x5b26,	// (0x00044bb9) list_highlight_pane_g7_cp1

0x5b2e,	// (0x00044bc1) list_highlight_pane_g8_cp1

0x5b36,	// (0x00044bc9) list_highlight_pane_g9_cp1

0xbbd7,	// (0x0004ac6a) form_field_slider_pane_t3

0xbbe5,	// (0x0004ac78) form_field_slider_pane_t4

0x5a2a,	// (0x00044abd) slider_form_pane_ParamLimits

0x5a2a,	// (0x00044abd) slider_form_pane

0x389b,	// (0x0004292e) control_abbreviations

0x389b,	// (0x0004292e) control_conventions

0x389b,	// (0x0004292e) control_definitions

0x389b,	// (0x0004292e) format_table_attribute

0x60e7,	// (0x0004517a) bg_popup_preview_window_pane_g9

0x389b,	// (0x0004292e) format_table_data2

0x389b,	// (0x0004292e) format_table_data3

0x389b,	// (0x0004292e) format_table_data_example

0x0008,

0x389b,	// (0x0004292e) intro_purpose

0xf8f5,	// (0x0004e988) bg_popup_preview_window_pane_g

0x389b,	// (0x0004292e) texts_category

0x389b,	// (0x0004292e) texts_graphics

0x4f80,	// (0x00044013) text_digital

0x4f8f,	// (0x00044022) text_primary

0x4f9e,	// (0x00044031) text_primary_small

0x4fad,	// (0x00044040) text_secondary

0x4fbc,	// (0x0004404f) text_title

0x65b4,	// (0x00045647) bg_passive_tab_pane_g1_cp3_srt

0x4cef,	// (0x00043d82) bg_passive_tab_pane_g2_cp3_srt

0x65ab,	// (0x0004563e) bg_passive_tab_pane_g3_cp3_srt

0x38f7,	// (0x0004298a) bg_active_tab_pane_cp3_srt_ParamLimits

0x38f7,	// (0x0004298a) bg_active_tab_pane_cp3_srt

0x65bd,	// (0x00045650) tabs_4_active_pane_srt_g1

0xc5c6,	// (0x0004b659) tabs_4_active_pane_srt_t1_ParamLimits

0xc5c6,	// (0x0004b659) tabs_4_active_pane_srt_t1

0x65b4,	// (0x00045647) bg_active_tab_pane_g1_cp3_copy1

0x4cef,	// (0x00043d82) bg_active_tab_pane_g2_cp3_copy1

0x65ab,	// (0x0004563e) bg_active_tab_pane_g3_cp3_copy1

0x38f7,	// (0x0004298a) tabs_2_long_active_pane_srt_ParamLimits

0x38f7,	// (0x0004298a) tabs_2_long_active_pane_srt

0x38f7,	// (0x0004298a) tabs_2_long_passive_pane_srt_ParamLimits

0x38f7,	// (0x0004298a) tabs_2_long_passive_pane_srt

0xb310,	// (0x0004a3a3) bg_passive_tab_pane_cp4_srt_ParamLimits

0xb310,	// (0x0004a3a3) bg_passive_tab_pane_cp4_srt

0x64d0,	// (0x00045563) bg_passive_tab_pane_g1_cp4_srt

0x4cef,	// (0x00043d82) bg_passive_tab_pane_g2_cp4_srt

0x64c7,	// (0x0004555a) bg_passive_tab_pane_g3_cp4_srt

0x610d,	// (0x000451a0) bg_active_tab_pane_cp4_srt_ParamLimits

0x610d,	// (0x000451a0) bg_active_tab_pane_cp4_srt

0xbdca,	// (0x0004ae5d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbdca,	// (0x0004ae5d) tabs_2_long_active_pane_srt_t1

0x64d0,	// (0x00045563) bg_active_tab_pane_g1_cp4_srt

0x4cef,	// (0x00043d82) bg_active_tab_pane_g2_cp4_srt

0x64c7,	// (0x0004555a) bg_active_tab_pane_g3_cp4_srt

0x38e9,	// (0x0004297c) tabs_3_long_active_pane_srt_ParamLimits

0x38e9,	// (0x0004297c) tabs_3_long_active_pane_srt

0x38e9,	// (0x0004297c) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x38e9,	// (0x0004297c) tabs_3_long_passive_pane_cp_srt

0x38e9,	// (0x0004297c) tabs_3_long_passive_pane_srt_ParamLimits

0x38e9,	// (0x0004297c) tabs_3_long_passive_pane_srt

0xb310,	// (0x0004a3a3) bg_passive_tab_pane_cp5_srt_ParamLimits

0xb310,	// (0x0004a3a3) bg_passive_tab_pane_cp5_srt

0x4d48,	// (0x00043ddb) bg_passive_tab_pane_g1_cp5_srt

0x4cef,	// (0x00043d82) bg_passive_tab_pane_g2_cp5_srt

0x4d3f,	// (0x00043dd2) bg_passive_tab_pane_g3_cp5_srt

0x610d,	// (0x000451a0) bg_active_tab_pane_cp5_srt_ParamLimits

0x610d,	// (0x000451a0) bg_active_tab_pane_cp5_srt

0xbdb8,	// (0x0004ae4b) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbdb8,	// (0x0004ae4b) tabs_3_long_active_pane_srt_t1

0x4d48,	// (0x00043ddb) bg_active_tab_pane_g1_cp5_srt

0x4cef,	// (0x00043d82) bg_active_tab_pane_g2_cp5_srt

0x4d3f,	// (0x00043dd2) bg_active_tab_pane_g3_cp5_srt

0x64b9,	// (0x0004554c) navi_text_pane_srt_t1

0x64b1,	// (0x00045544) navi_icon_pane_srt_g1

0x50cc,	// (0x0004415f) midp_editing_number_pane_srt

0x4fcb,	// (0x0004405e) midp_ticker_pane_srt

0x50d4,	// (0x00044167) midp_ticker_pane_srt_g1

0x50dc,	// (0x0004416f) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x0004e810) midp_ticker_pane_srt_g

0x50e4,	// (0x00044177) midp_ticker_pane_srt_t1

0x64a2,	// (0x00045535) midp_editing_number_pane_t1_copy1

0xb310,	// (0x0004a3a3) listscroll_midp_pane

0xb310,	// (0x0004a3a3) midp_form_pane

0x4fd3,	// (0x00044066) midp_info_popup_window_ParamLimits

0x4fd3,	// (0x00044066) midp_info_popup_window

0x46a6,	// (0x00043739) bg_popup_sub_pane_cp50_ParamLimits

0x46a6,	// (0x00043739) bg_popup_sub_pane_cp50

0x5747,	// (0x000447da) listscroll_midp_info_pane_ParamLimits

0x5747,	// (0x000447da) listscroll_midp_info_pane

0x572f,	// (0x000447c2) listscroll_form_midp_pane_ParamLimits

0x572f,	// (0x000447c2) listscroll_form_midp_pane

0x573b,	// (0x000447ce) scroll_bar_cp050

0xbbbf,	// (0x0004ac52) list_midp_pane

0x6ef6,	// (0x00045f89) signal_pane_g2_cp

0x5661,	// (0x000446f4) listscroll_midp_info_pane_t1_ParamLimits

0x5661,	// (0x000446f4) listscroll_midp_info_pane_t1

0x5679,	// (0x0004470c) listscroll_midp_info_pane_t2_ParamLimits

0x5679,	// (0x0004470c) listscroll_midp_info_pane_t2

0x56b7,	// (0x0004474a) listscroll_midp_info_pane_t3_ParamLimits

0x56b7,	// (0x0004474a) listscroll_midp_info_pane_t3

0x56f1,	// (0x00044784) listscroll_midp_info_pane_t4_ParamLimits

0x56f1,	// (0x00044784) listscroll_midp_info_pane_t4

0x0003,

0xf830,	// (0x0004e8c3) listscroll_midp_info_pane_t_ParamLimits

0xf830,	// (0x0004e8c3) listscroll_midp_info_pane_t

0x4726,	// (0x000437b9) scroll_pane_cp21

0x5603,	// (0x00044696) form_midp_field_choice_group_pane

0x560c,	// (0x0004469f) form_midp_field_text_pane

0x5647,	// (0x000446da) form_midp_field_time_pane

0x564f,	// (0x000446e2) form_midp_gauge_slider_pane

0x5658,	// (0x000446eb) form_midp_gauge_wait_pane

0x389b,	// (0x0004292e) form_midp_image_pane

0xbb8d,	// (0x0004ac20) list_single_midp_pane_ParamLimits

0xbb8d,	// (0x0004ac20) list_single_midp_pane

0xbb52,	// (0x0004abe5) form_midp_field_text_pane_t1

0x5485,	// (0x00044518) input_focus_pane_cp050

0x55f2,	// (0x00044685) list_midp_form_text_pane

0x55c1,	// (0x00044654) form_midp_field_choice_group_pane_t1

0x55cf,	// (0x00044662) input_focus_pane_cp051

0x55e3,	// (0x00044676) list_midp_choice_pane

0x389b,	// (0x0004292e) status_idle_pane

0x55a5,	// (0x00044638) form_midp_field_time_pane_t1

0x3891,	// (0x00042924) wait_anim_pane_g2_copy1

0x55b3,	// (0x00044646) form_midp_field_time_pane_t2

0x0001,

0x503e,	// (0x000440d1) aid_navinavi_width_2_pane

0xf82b,	// (0x0004e8be) form_midp_field_time_pane_t

0x389b,	// (0x0004292e) input_focus_pane_cp052

0x389b,	// (0x0004292e) bg_input_focus_pane_cp040

0x5581,	// (0x00044614) form_midp_gauge_slider_pane_t1

0x558f,	// (0x00044622) form_midp_gauge_slider_pane_t2

0xbb36,	// (0x0004abc9) form_midp_gauge_slider_pane_t3

0xbb44,	// (0x0004abd7) form_midp_gauge_slider_pane_t4

0x0003,

0xf822,	// (0x0004e8b5) form_midp_gauge_slider_pane_t

0x559d,	// (0x00044630) form_midp_slider_pane

0x38f7,	// (0x0004298a) bg_input_focus_pane_cp041_ParamLimits

0x38f7,	// (0x0004298a) bg_input_focus_pane_cp041

0x554e,	// (0x000445e1) form_midp_gauge_wait_pane_t1_ParamLimits

0x554e,	// (0x000445e1) form_midp_gauge_wait_pane_t1

0x5560,	// (0x000445f3) form_midp_gauge_wait_pane_t2_ParamLimits

0x5560,	// (0x000445f3) form_midp_gauge_wait_pane_t2

0x0001,

0xf81d,	// (0x0004e8b0) form_midp_gauge_wait_pane_t_ParamLimits

0xf81d,	// (0x0004e8b0) form_midp_gauge_wait_pane_t

0x5572,	// (0x00044605) form_midp_wait_pane_ParamLimits

0x5572,	// (0x00044605) form_midp_wait_pane

0x5518,	// (0x000445ab) form_midp_image_pane_g1

0x5521,	// (0x000445b4) form_midp_image_pane_t1

0x5530,	// (0x000445c3) form_midp_image_pane_t2

0x553f,	// (0x000445d2) form_midp_image_pane_t3

0x0002,

0xf816,	// (0x0004e8a9) form_midp_image_pane_t

0x550f,	// (0x000445a2) list_single_midp_pane_g1

0xbb27,	// (0x0004abba) list_single_midp_pane_t1

0xbaf8,	// (0x0004ab8b) list_midp_form_item_pane_ParamLimits

0xbaf8,	// (0x0004ab8b) list_midp_form_item_pane

0x4fe6,	// (0x00044079) list_midp_form_item_pane_t1

0x4ff5,	// (0x00044088) midp_ticker_pane_g1

0x5001,	// (0x00044094) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x0004e7f6) midp_ticker_pane_g

0x500d,	// (0x000440a0) midp_ticker_pane_t1

0x6552,	// (0x000455e5) midp_editing_number_pane_t1

0x6530,	// (0x000455c3) midp_editing_number_pane

0x653f,	// (0x000455d2) midp_ticker_pane

0x6492,	// (0x00045525) ai_message_heading_pane

0x389b,	// (0x0004292e) bg_popup_window_pane_cp14

0x649a,	// (0x0004552d) listscroll_ai_message_pane

0x641c,	// (0x000454af) ai_message_heading_pane_g1_ParamLimits

0x641c,	// (0x000454af) ai_message_heading_pane_g1

0x6428,	// (0x000454bb) ai_message_heading_pane_g2_ParamLimits

0x6428,	// (0x000454bb) ai_message_heading_pane_g2

0x6434,	// (0x000454c7) ai_message_heading_pane_g3_ParamLimits

0x6434,	// (0x000454c7) ai_message_heading_pane_g3

0x6440,	// (0x000454d3) ai_message_heading_pane_g4_ParamLimits

0x6440,	// (0x000454d3) ai_message_heading_pane_g4

0x0003,

0xf957,	// (0x0004e9ea) ai_message_heading_pane_g_ParamLimits

0xf957,	// (0x0004e9ea) ai_message_heading_pane_g

0x644c,	// (0x000454df) ai_message_heading_pane_t1_ParamLimits

0x644c,	// (0x000454df) ai_message_heading_pane_t1

0x6466,	// (0x000454f9) ai_message_heading_pane_t2_ParamLimits

0x6466,	// (0x000454f9) ai_message_heading_pane_t2

0x0001,

0xf960,	// (0x0004e9f3) ai_message_heading_pane_t_ParamLimits

0xf960,	// (0x0004e9f3) ai_message_heading_pane_t

0x6478,	// (0x0004550b) bg_popup_heading_pane_cp1_ParamLimits

0x6478,	// (0x0004550b) bg_popup_heading_pane_cp1

0x640a,	// (0x0004549d) list_ai_message_pane_ParamLimits

0x640a,	// (0x0004549d) list_ai_message_pane

0x4726,	// (0x000437b9) scroll_pane_cp10

0x63a6,	// (0x00045439) list_ai_message_pane_g1

0x63ae,	// (0x00045441) list_ai_message_pane_g2

0x0001,

0xf934,	// (0x0004e9c7) list_ai_message_pane_g

0x63b6,	// (0x00045449) list_ai_message_pane_t1_ParamLimits

0x63b6,	// (0x00045449) list_ai_message_pane_t1

0x63cb,	// (0x0004545e) list_ai_message_pane_t2_ParamLimits

0x63cb,	// (0x0004545e) list_ai_message_pane_t2

0x63e0,	// (0x00045473) list_ai_message_pane_t3_ParamLimits

0x63e0,	// (0x00045473) list_ai_message_pane_t3

0x63f5,	// (0x00045488) list_ai_message_pane_t4_ParamLimits

0x63f5,	// (0x00045488) list_ai_message_pane_t4

0x0003,

0xf939,	// (0x0004e9cc) list_ai_message_pane_t_ParamLimits

0xf939,	// (0x0004e9cc) list_ai_message_pane_t

0xbd90,	// (0x0004ae23) cell_ai_soft_ind_pane_ParamLimits

0xbd90,	// (0x0004ae23) cell_ai_soft_ind_pane

0x501f,	// (0x000440b2) cell_ai_soft_ind_pane_g1_ParamLimits

0x501f,	// (0x000440b2) cell_ai_soft_ind_pane_g1

0x389b,	// (0x0004292e) grid_highlight_cp1

0x502c,	// (0x000440bf) text_secondary_cp56_ParamLimits

0x502c,	// (0x000440bf) text_secondary_cp56

0x637b,	// (0x0004540e) example_general_pane_ParamLimits

0x637b,	// (0x0004540e) example_general_pane

0x6387,	// (0x0004541a) example_parent_pane_g1_ParamLimits

0x6387,	// (0x0004541a) example_parent_pane_g1

0x6393,	// (0x00045426) example_parent_pane_t1_ParamLimits

0x6393,	// (0x00045426) example_parent_pane_t1

0x996f,	// (0x00048a02) popup_preview_text_window_ParamLimits

0x996f,	// (0x00048a02) popup_preview_text_window

0x4f08,	// (0x00043f9b) list_single_pane_cp2_g4

0x3ac6,	// (0x00042b59) bg_popup_preview_window_pane_ParamLimits

0x3ac6,	// (0x00042b59) bg_popup_preview_window_pane

0x60ef,	// (0x00045182) popup_preview_text_window_t1_ParamLimits

0x60ef,	// (0x00045182) popup_preview_text_window_t1

0x6146,	// (0x000451d9) popup_preview_text_window_t2_ParamLimits

0x6146,	// (0x000451d9) popup_preview_text_window_t2

0x618f,	// (0x00045222) popup_preview_text_window_t3_ParamLimits

0x618f,	// (0x00045222) popup_preview_text_window_t3

0x61d4,	// (0x00045267) popup_preview_text_window_t4_ParamLimits

0x61d4,	// (0x00045267) popup_preview_text_window_t4

0x0004,

0xf908,	// (0x0004e99b) popup_preview_text_window_t_ParamLimits

0xf908,	// (0x0004e99b) popup_preview_text_window_t

0x6252,	// (0x000452e5) scroll_pane_cp11

0x5411,	// (0x000444a4) bg_popup_preview_window_pane_g1

0x60af,	// (0x00045142) bg_popup_preview_window_pane_g2

0x60b7,	// (0x0004514a) bg_popup_preview_window_pane_g3

0x60bf,	// (0x00045152) bg_popup_preview_window_pane_g4

0x60c7,	// (0x0004515a) bg_popup_preview_window_pane_g5

0x60cf,	// (0x00045162) bg_popup_preview_window_pane_g6

0x60d7,	// (0x0004516a) bg_popup_preview_window_pane_g7

0x60df,	// (0x00045172) bg_popup_preview_window_pane_g8

0x859d,	// (0x00047630) aid_popup_width_pane

0x994d,	// (0x000489e0) popup_midp_note_alarm_window_ParamLimits

0x994d,	// (0x000489e0) popup_midp_note_alarm_window

0x3f32,	// (0x00042fc5) data_form_pane_ParamLimits

0x8f4a,	// (0x00047fdd) form_field_data_pane_g1

0x8f54,	// (0x00047fe7) form_field_data_pane_t1_ParamLimits

0x45fa,	// (0x0004368d) input_focus_pane_ParamLimits

0x8f6e,	// (0x00048001) data_form_wide_pane_ParamLimits

0x8f7f,	// (0x00048012) form_field_data_wide_pane_g1

0x8f8b,	// (0x0004801e) form_field_data_wide_pane_t1_ParamLimits

0x3cb9,	// (0x00042d4c) input_focus_pane_cp6_ParamLimits

0xb2d5,	// (0x0004a368) input_popup_find_pane_g1_ParamLimits

0xb2d5,	// (0x0004a368) input_popup_find_pane_g1

0x9104,	// (0x00048197) aid_navi_side_left_pane

0x9119,	// (0x000481ac) aid_navi_side_right_pane

0x5bd3,	// (0x00044c66) bg_popup_window_pane_cp30_ParamLimits

0x5bd3,	// (0x00044c66) bg_popup_window_pane_cp30

0x5c4d,	// (0x00044ce0) popup_midp_note_alarm_window_g1_ParamLimits

0x5c4d,	// (0x00044ce0) popup_midp_note_alarm_window_g1

0x5c7d,	// (0x00044d10) popup_midp_note_alarm_window_t1_ParamLimits

0x5c7d,	// (0x00044d10) popup_midp_note_alarm_window_t1

0x5d1e,	// (0x00044db1) popup_midp_note_alarm_window_t2_ParamLimits

0x5d1e,	// (0x00044db1) popup_midp_note_alarm_window_t2

0x5dcc,	// (0x00044e5f) popup_midp_note_alarm_window_t3_ParamLimits

0x5dcc,	// (0x00044e5f) popup_midp_note_alarm_window_t3

0x5dfe,	// (0x00044e91) popup_midp_note_alarm_window_t4_ParamLimits

0x5dfe,	// (0x00044e91) popup_midp_note_alarm_window_t4

0x5e24,	// (0x00044eb7) popup_midp_note_alarm_window_t5_ParamLimits

0x5e24,	// (0x00044eb7) popup_midp_note_alarm_window_t5

0x000a,

0xf8a5,	// (0x0004e938) popup_midp_note_alarm_window_t_ParamLimits

0xf8a5,	// (0x0004e938) popup_midp_note_alarm_window_t

0x5ed0,	// (0x00044f63) wait_bar_pane_cp1_ParamLimits

0x5ed0,	// (0x00044f63) wait_bar_pane_cp1

0x389b,	// (0x0004292e) wait_anim_pane_copy1

0x389b,	// (0x0004292e) wait_border_pane_copy1

0x58eb,	// (0x0004497e) wait_border_pane_g1_copy1

0x8fa5,	// (0x00048038) form_field_popup_pane_g1

0x8fad,	// (0x00048040) form_field_popup_pane_t1_ParamLimits

0x45fa,	// (0x0004368d) input_focus_pane_cp7_ParamLimits

0x4628,	// (0x000436bb) list_form_pane_ParamLimits

0x8fc7,	// (0x0004805a) form_field_popup_wide_pane_g1

0x8fcf,	// (0x00048062) form_field_popup_wide_pane_t1_ParamLimits

0x45fa,	// (0x0004368d) input_focus_pane_cp8_ParamLimits

0x4634,	// (0x000436c7) list_form_wide_pane_ParamLimits

0x65e4,	// (0x00045677) aid_size_cell_graphic_pane

0xb213,	// (0x0004a2a6) data_form_pane_t1_ParamLimits

0xbeaa,	// (0x0004af3d) data_form_wide_pane_t1_ParamLimits

0xb748,	// (0x0004a7db) bg_status_flat_pane

0xaea6,	// (0x00049f39) title_pane_t1_ParamLimits

0x38b1,	// (0x00042944) title_pane_t2_ParamLimits

0x38d7,	// (0x0004296a) title_pane_t3_ParamLimits

0xf55d,	// (0x0004e5f0) title_pane_t_ParamLimits

0x4abe,	// (0x00043b51) level_1_signal_ParamLimits

0x4acb,	// (0x00043b5e) level_2_signal_ParamLimits

0x4ad8,	// (0x00043b6b) level_3_signal_ParamLimits

0x4ae5,	// (0x00043b78) level_4_signal_ParamLimits

0x4af2,	// (0x00043b85) level_5_signal_ParamLimits

0x4aff,	// (0x00043b92) level_6_signal_ParamLimits

0x4b0c,	// (0x00043b9f) level_7_signal_ParamLimits

0x4abe,	// (0x00043b51) level_1_battery_ParamLimits

0x4acb,	// (0x00043b5e) level_2_battery_ParamLimits

0x4ad8,	// (0x00043b6b) level_3_battery_ParamLimits

0x4ae5,	// (0x00043b78) level_4_battery_ParamLimits

0x4af2,	// (0x00043b85) level_5_battery_ParamLimits

0x4aff,	// (0x00043b92) level_6_battery_ParamLimits

0x4b0c,	// (0x00043b9f) level_7_battery_ParamLimits

0x5af6,	// (0x00044b89) bg_status_flat_pane_g1

0x5afe,	// (0x00044b91) bg_status_flat_pane_g2

0x5b06,	// (0x00044b99) bg_status_flat_pane_g3

0x5b0e,	// (0x00044ba1) bg_status_flat_pane_g4

0x5b16,	// (0x00044ba9) bg_status_flat_pane_g5

0x5b1e,	// (0x00044bb1) bg_status_flat_pane_g6

0x5b26,	// (0x00044bb9) bg_status_flat_pane_g7

0xaf16,	// (0x00049fa9) tabs_3_active_pane_t1_ParamLimits

0xaf16,	// (0x00049fa9) tabs_3_passive_pane_t1_ParamLimits

0xaf30,	// (0x00049fc3) tabs_4_active_pane_t1_ParamLimits

0xaf30,	// (0x00049fc3) tabs_4_1_passive_pane_t1_ParamLimits

0xb2eb,	// (0x0004a37e) tabs_2_active_pane_t1_ParamLimits

0xb2eb,	// (0x0004a37e) tabs_2_passive_pane_t1_ParamLimits

0x610d,	// (0x000451a0) bg_active_tab_pane_cp4_ParamLimits

0xb2fd,	// (0x0004a390) tabs_2_long_active_pane_t1_ParamLimits

0xb310,	// (0x0004a3a3) bg_passive_tab_pane_cp4_ParamLimits

0x9c20,	// (0x00048cb3) list_single_midp_graphic_pane_t1_ParamLimits

0x610d,	// (0x000451a0) bg_active_tab_pane_cp5_ParamLimits

0xb31c,	// (0x0004a3af) tabs_3_long_active_pane_t1_ParamLimits

0xb310,	// (0x0004a3a3) bg_passive_tab_pane_cp5_ParamLimits

0x9c20,	// (0x00048cb3) list_single_midp_graphic_pane_t1

0xb748,	// (0x0004a7db) bg_status_flat_pane_ParamLimits

0x52d0,	// (0x00044363) indicator_pane_cp2_ParamLimits

0x52d0,	// (0x00044363) indicator_pane_cp2

0xb88c,	// (0x0004a91f) navi_pane_srt_ParamLimits

0xb88c,	// (0x0004a91f) navi_pane_srt

0x52f8,	// (0x0004438b) popup_clock_digital_analogue_window_cp1

0x393b,	// (0x000429ce) indicator_pane_t1

0x4fcb,	// (0x0004405e) copy_highlight_pane

0x4fcb,	// (0x0004405e) cursor_graphics_pane

0x4fcb,	// (0x0004405e) graphic_within_text_pane

0x4fcb,	// (0x0004405e) link_highlight_pane

0x6215,	// (0x000452a8) popup_preview_text_window_t5_ParamLimits

0x6215,	// (0x000452a8) popup_preview_text_window_t5

0x5046,	// (0x000440d9) cursor_digital_pane

0x5046,	// (0x000440d9) cursor_primary_pane

0x5057,	// (0x000440ea) cursor_primary_small_pane

0x505f,	// (0x000440f2) cursor_secondary_pane

0x5067,	// (0x000440fa) cursor_title_pane

0x5046,	// (0x000440d9) link_highlight_digital_pane

0x504e,	// (0x000440e1) link_highlight_primary_pane

0x5057,	// (0x000440ea) link_highlight_primary_small_pane

0x505f,	// (0x000440f2) link_highlight_secondary_pane

0x5067,	// (0x000440fa) link_highlight_title_pane

0x5046,	// (0x000440d9) copy_highlight_digital_pane

0x5046,	// (0x000440d9) copy_highlight_primary_pane

0x5057,	// (0x000440ea) copy_highlight_primary_small_pane

0x505f,	// (0x000440f2) copy_highlight_secondary_pane

0x5067,	// (0x000440fa) copy_highlight_title_pane

0x505f,	// (0x000440f2) graphic_text_digital_pane

0x5b76,	// (0x00044c09) graphic_text_primary_pane

0x5b7f,	// (0x00044c12) graphic_text_primary_small_pane

0x5057,	// (0x000440ea) graphic_text_secondary_pane

0x5046,	// (0x000440d9) graphic_text_title_pane

0xb65b,	// (0x0004a6ee) cursor_primary_pane_g1

0x5b68,	// (0x00044bfb) cursor_text_primary_t1

0xbc07,	// (0x0004ac9a) cursor_primary_small_pane_g1

0x5b5a,	// (0x00044bed) cursor_text_primary_small_t1

0xbbfd,	// (0x0004ac90) cursor_primary_small_pane_g1_copy1

0x5b4c,	// (0x00044bdf) cursor_text_primary_small_t1_copy1

0x5b3e,	// (0x00044bd1) cursor_text_title_t1

0xbbf3,	// (0x0004ac86) cursor_title_pane_g1

0xb65b,	// (0x0004a6ee) cursor_digital_pane_g1

0x506f,	// (0x00044102) cursor_text_digital_t1

0x5adf,	// (0x00044b72) link_highlight_primary_pane_g1

0x5ae7,	// (0x00044b7a) link_highlight_primary_pane_t1

0x507d,	// (0x00044110) link_highlight_primary_small_pane_g1

0x5085,	// (0x00044118) link_highlight_primary_small_pane_t1

0x507d,	// (0x00044110) link_highlight_secondary_pane_g1

0x5094,	// (0x00044127) link_highlight_secondary_pane_t1

0x5a53,	// (0x00044ae6) link_highlight_title_pane_g1

0x5a5b,	// (0x00044aee) link_highlight_title_pane_t1

0x5a3c,	// (0x00044acf) link_highlight_digital_pane_g1

0x5a44,	// (0x00044ad7) link_highlight_digital_pane_t1

0x5930,	// (0x000449c3) copy_highlight_primary_pane_g1

0x5938,	// (0x000449cb) copy_highlight_primary_pane_t1

0x590a,	// (0x0004499d) copy_highlight_primary_small_pane_g1

0x5921,	// (0x000449b4) copy_highlight_primary_small_pane_t1

0x50a3,	// (0x00044136) copy_highlight_secondary_pane_g1

0x50ab,	// (0x0004413e) copy_highlight_secondary_pane_t1

0x590a,	// (0x0004499d) copy_highlight_title_pane_g1

0x5912,	// (0x000449a5) copy_highlight_title_pane_t1

0x5930,	// (0x000449c3) copy_highlight_digital_pane_g1

0x676a,	// (0x000457fd) copy_highlight_digital_pane_t1

0x66be,	// (0x00045751) graphic_text_primary_pane_g1

0x674e,	// (0x000457e1) graphic_text_primary_pane_t1

0x675c,	// (0x000457ef) graphic_text_primary_pane_t2

0x0001,

0xf9d4,	// (0x0004ea67) graphic_text_primary_pane_t

0x672a,	// (0x000457bd) graphic_text_primary_small_pane_g1

0x6732,	// (0x000457c5) graphic_text_primary_small_pane_t1

0x6740,	// (0x000457d3) graphic_text_primary_small_pane_t2

0x0001,

0xf9cf,	// (0x0004ea62) graphic_text_primary_small_pane_t

0x6706,	// (0x00045799) graphic_text_secondary_pane_g1

0x670e,	// (0x000457a1) graphic_text_secondary_pane_t1

0x671c,	// (0x000457af) graphic_text_secondary_pane_t2

0x0001,

0xf9ca,	// (0x0004ea5d) graphic_text_secondary_pane_t

0x66e2,	// (0x00045775) graphic_text_title_pane_g1

0x66ea,	// (0x0004577d) graphic_text_title_pane_t1

0x66f8,	// (0x0004578b) graphic_text_title_pane_t2

0x0001,

0xf9c5,	// (0x0004ea58) graphic_text_title_pane_t

0x66be,	// (0x00045751) graphic_text_digital_pane_g1

0x66c6,	// (0x00045759) graphic_text_digital_pane_t1

0x66d4,	// (0x00045767) graphic_text_digital_pane_t2

0x0001,

0xf9c0,	// (0x0004ea53) graphic_text_digital_pane_t

0x38f7,	// (0x0004298a) navi_icon_pane_srt_ParamLimits

0x38f7,	// (0x0004298a) navi_icon_pane_srt

0x389b,	// (0x0004292e) navi_midp_pane_srt

0x389b,	// (0x0004292e) navi_navi_pane_srt

0x38f7,	// (0x0004298a) navi_text_pane_srt_ParamLimits

0x38f7,	// (0x0004298a) navi_text_pane_srt

0x6689,	// (0x0004571c) navi_navi_icon_text_pane_srt

0x66a3,	// (0x00045736) navi_navi_pane_srt_g1_ParamLimits

0x66a3,	// (0x00045736) navi_navi_pane_srt_g1

0x6691,	// (0x00045724) navi_navi_pane_srt_g2_ParamLimits

0x6691,	// (0x00045724) navi_navi_pane_srt_g2

0x0001,

0xf9bb,	// (0x0004ea4e) navi_navi_pane_srt_g_ParamLimits

0xf9bb,	// (0x0004ea4e) navi_navi_pane_srt_g

0x66b5,	// (0x00045748) navi_navi_tabs_pane_srt

0x6689,	// (0x0004571c) navi_navi_text_pane_srt

0x6689,	// (0x0004571c) navi_navi_volume_pane_srt

0x667a,	// (0x0004570d) navi_navi_text_pane_srt_t1

0x9f94,	// (0x00049027) navi_navi_volume_pane_srt_g1

0x9f9c,	// (0x0004902f) volume_small_pane_srt_ParamLimits

0x9f9c,	// (0x0004902f) volume_small_pane_srt

0x93db,	// (0x0004846e) volume_small_pane_srt_g1_ParamLimits

0x93db,	// (0x0004846e) volume_small_pane_srt_g1

0x93eb,	// (0x0004847e) volume_small_pane_srt_g2_ParamLimits

0x93eb,	// (0x0004847e) volume_small_pane_srt_g2

0x93fc,	// (0x0004848f) volume_small_pane_srt_g3_ParamLimits

0x93fc,	// (0x0004848f) volume_small_pane_srt_g3

0x940d,	// (0x000484a0) volume_small_pane_srt_g4_ParamLimits

0x940d,	// (0x000484a0) volume_small_pane_srt_g4

0x941e,	// (0x000484b1) volume_small_pane_srt_g5_ParamLimits

0x941e,	// (0x000484b1) volume_small_pane_srt_g5

0x942f,	// (0x000484c2) volume_small_pane_srt_g6_ParamLimits

0x942f,	// (0x000484c2) volume_small_pane_srt_g6

0x9440,	// (0x000484d3) volume_small_pane_srt_g7_ParamLimits

0x9440,	// (0x000484d3) volume_small_pane_srt_g7

0x9451,	// (0x000484e4) volume_small_pane_srt_g8_ParamLimits

0x9451,	// (0x000484e4) volume_small_pane_srt_g8

0x9462,	// (0x000484f5) volume_small_pane_srt_g9_ParamLimits

0x9462,	// (0x000484f5) volume_small_pane_srt_g9

0x9473,	// (0x00048506) volume_small_pane_srt_g10_ParamLimits

0x9473,	// (0x00048506) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x0004e7fb) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x0004e7fb) volume_small_pane_srt_g

0x3b6f,	// (0x00042c02) query_popup_data_pane_cp2

0x6660,	// (0x000456f3) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6660,	// (0x000456f3) navi_navi_icon_text_pane_srt_t1

0x5b76,	// (0x00044c09) navi_tabs_2_long_pane_srt

0x5b76,	// (0x00044c09) navi_tabs_2_pane_srt

0x5b76,	// (0x00044c09) navi_tabs_3_long_pane_srt

0x5b76,	// (0x00044c09) navi_tabs_3_pane_srt

0x5b76,	// (0x00044c09) navi_tabs_4_pane_srt

0x9f74,	// (0x00049007) tabs_2_active_pane_srt_ParamLimits

0x9f74,	// (0x00049007) tabs_2_active_pane_srt

0x9f84,	// (0x00049017) tabs_2_passive_pane_srt_ParamLimits

0x9f84,	// (0x00049017) tabs_2_passive_pane_srt

0x475f,	// (0x000437f2) bg_passive_tab_pane_cp1_srt_ParamLimits

0x475f,	// (0x000437f2) bg_passive_tab_pane_cp1_srt

0x6647,	// (0x000456da) bg_passive_tab_pane_g1_cp1_srt

0x4cef,	// (0x00043d82) bg_passive_tab_pane_g2_cp1_srt

0x663e,	// (0x000456d1) bg_passive_tab_pane_g3_cp1_srt

0x38f7,	// (0x0004298a) bg_active_tab_pane_cp1_srt_ParamLimits

0x38f7,	// (0x0004298a) bg_active_tab_pane_cp1_srt

0x6650,	// (0x000456e3) tabs_2_active_pane_srt_g1

0xc63d,	// (0x0004b6d0) tabs_2_active_pane_srt_t1_ParamLimits

0xc63d,	// (0x0004b6d0) tabs_2_active_pane_srt_t1

0x6647,	// (0x000456da) bg_active_tab_pane_g1_cp1_srt

0x4cef,	// (0x00043d82) bg_active_tab_pane_g2_cp1_srt

0x663e,	// (0x000456d1) bg_active_tab_pane_g3_cp1_srt

0x9f41,	// (0x00048fd4) tabs_3_active_pane_srt_ParamLimits

0x9f41,	// (0x00048fd4) tabs_3_active_pane_srt

0x9f52,	// (0x00048fe5) tabs_3_passive_pane_cp_srt_ParamLimits

0x9f52,	// (0x00048fe5) tabs_3_passive_pane_cp_srt

0x9f63,	// (0x00048ff6) tabs_3_passive_pane_srt_ParamLimits

0x9f63,	// (0x00048ff6) tabs_3_passive_pane_srt

0x475f,	// (0x000437f2) bg_passive_tab_pane_cp2_srt_ParamLimits

0x475f,	// (0x000437f2) bg_passive_tab_pane_cp2_srt

0x50c3,	// (0x00044156) bg_passive_tab_pane_g1_cp2_srt

0x4cef,	// (0x00043d82) bg_passive_tab_pane_g2_cp2_srt

0x50ba,	// (0x0004414d) bg_passive_tab_pane_g3_cp2_srt

0x38f7,	// (0x0004298a) bg_active_tab_pane_cp2_srt_ParamLimits

0x38f7,	// (0x0004298a) bg_active_tab_pane_cp2_srt

0x6636,	// (0x000456c9) tabs_3_active_pane_srt_g1

0xc62b,	// (0x0004b6be) tabs_3_active_pane_srt_t1_ParamLimits

0xc62b,	// (0x0004b6be) tabs_3_active_pane_srt_t1

0x50c3,	// (0x00044156) bg_active_tab_pane_g1_cp2_srt

0x4cef,	// (0x00043d82) bg_active_tab_pane_g2_cp2_srt

0x50ba,	// (0x0004414d) bg_active_tab_pane_g3_cp2_srt

0x9ef9,	// (0x00048f8c) tabs_4_active_pane_srt_ParamLimits

0x9ef9,	// (0x00048f8c) tabs_4_active_pane_srt

0x9f0b,	// (0x00048f9e) tabs_4_passive_pane_cp2_srt_ParamLimits

0x9f0b,	// (0x00048f9e) tabs_4_passive_pane_cp2_srt

0x95d6,	// (0x00048669) aid_size_cell_toolbar

0xb310,	// (0x0004a3a3) main_idle_act_pane_ParamLimits

0x9781,	// (0x00048814) popup_large_graphic_colour_window_ParamLimits

0x9ae6,	// (0x00048b79) popup_toolbar_window_ParamLimits

0x9ae6,	// (0x00048b79) popup_toolbar_window

0x6561,	// (0x000455f4) list_single_graphic_2heading_pane_ParamLimits

0x6561,	// (0x000455f4) list_single_graphic_2heading_pane

0x4906,	// (0x00043999) aid_size_cell_apps_grid_lsc_pane

0x4918,	// (0x000439ab) aid_size_cell_apps_grid_prt_pane

0x475f,	// (0x000437f2) bg_wml_button_pane_cp1_ParamLimits

0x475f,	// (0x000437f2) bg_wml_button_pane_cp1

0xbb52,	// (0x0004abe5) form_midp_field_text_pane_t1_ParamLimits

0x5485,	// (0x00044518) input_focus_pane_cp050_ParamLimits

0x55f2,	// (0x00044685) list_midp_form_text_pane_ParamLimits

0x55cf,	// (0x00044662) input_focus_pane_cp051_ParamLimits

0x55e3,	// (0x00044676) list_midp_choice_pane_ParamLimits

0xba94,	// (0x0004ab27) list_single_2graphic_pane_cp3_ParamLimits

0xba94,	// (0x0004ab27) list_single_2graphic_pane_cp3

0xbabf,	// (0x0004ab52) list_single_midp_graphic_pane_ParamLimits

0xbabf,	// (0x0004ab52) list_single_midp_graphic_pane

0x8525,	// (0x000475b8) list_single_graphic_2heading_pane_g1_ParamLimits

0x8525,	// (0x000475b8) list_single_graphic_2heading_pane_g1

0x8531,	// (0x000475c4) list_single_graphic_2heading_pane_g4_ParamLimits

0x8531,	// (0x000475c4) list_single_graphic_2heading_pane_g4

0x853d,	// (0x000475d0) list_single_graphic_2heading_pane_g5_ParamLimits

0x853d,	// (0x000475d0) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x0004e84e) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x0004e84e) list_single_graphic_2heading_pane_g

0x8549,	// (0x000475dc) list_single_graphic_2heading_pane_t1_ParamLimits

0x8549,	// (0x000475dc) list_single_graphic_2heading_pane_t1

0x855d,	// (0x000475f0) list_single_graphic_2heading_pane_t2_ParamLimits

0x855d,	// (0x000475f0) list_single_graphic_2heading_pane_t2

0x8579,	// (0x0004760c) list_single_graphic_2heading_pane_t3_ParamLimits

0x8579,	// (0x0004760c) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x0004e855) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x0004e855) list_single_graphic_2heading_pane_t

0x533d,	// (0x000443d0) bg_popup_sub_pane_cp2

0x5367,	// (0x000443fa) grid_toobar_pane

0x9b91,	// (0x00048c24) cell_toolbar_pane_ParamLimits

0x9b91,	// (0x00048c24) cell_toolbar_pane

0x53b5,	// (0x00044448) cell_toolbar_pane_g1_ParamLimits

0x53b5,	// (0x00044448) cell_toolbar_pane_g1

0x53c9,	// (0x0004445c) cell_toolbar_pane_g2_ParamLimits

0x53c9,	// (0x0004445c) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x0004e863) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x0004e863) cell_toolbar_pane_g

0x53eb,	// (0x0004447e) grid_highlight_pane_cp2_ParamLimits

0x53eb,	// (0x0004447e) grid_highlight_pane_cp2

0x5405,	// (0x00044498) toolbar_button_pane

0x5411,	// (0x000444a4) toolbar_button_pane_g1

0x5421,	// (0x000444b4) toolbar_button_pane_g2

0x5419,	// (0x000444ac) toolbar_button_pane_g3

0x5431,	// (0x000444c4) toolbar_button_pane_g4

0x5429,	// (0x000444bc) toolbar_button_pane_g5

0x5439,	// (0x000444cc) toolbar_button_pane_g6

0x5441,	// (0x000444d4) toolbar_button_pane_g7

0x5451,	// (0x000444e4) toolbar_button_pane_g8

0x5449,	// (0x000444dc) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x0004e868) toolbar_button_pane_g

0x9bc9,	// (0x00048c5c) list_single_2graphic_pane_g1_cp3_ParamLimits

0x9bc9,	// (0x00048c5c) list_single_2graphic_pane_g1_cp3

0x9bd5,	// (0x00048c68) list_single_2graphic_pane_g2_cp3_ParamLimits

0x9bd5,	// (0x00048c68) list_single_2graphic_pane_g2_cp3

0x9be6,	// (0x00048c79) list_single_2graphic_pane_g3_cp3

0x9bee,	// (0x00048c81) list_single_2graphic_pane_g4_cp3_ParamLimits

0x9bee,	// (0x00048c81) list_single_2graphic_pane_g4_cp3

0x9bfa,	// (0x00048c8d) list_single_2graphic_pane_t1_cp3_ParamLimits

0x9bfa,	// (0x00048c8d) list_single_2graphic_pane_t1_cp3

0x9c14,	// (0x00048ca7) list_single_midp_graphic_pane_g2_ParamLimits

0x9c14,	// (0x00048ca7) list_single_midp_graphic_pane_g2

0x8515,	// (0x000475a8) aid_zoom_text_primary

0x851d,	// (0x000475b0) aid_zoom_text_secondary

0x5177,	// (0x0004420a) status_small_pane_g7_ParamLimits

0x5177,	// (0x0004420a) status_small_pane_g7

0x519a,	// (0x0004422d) status_small_pane_t1_ParamLimits

0xae89,	// (0x00049f1c) title_pane_g2

0x0003,

0xf554,	// (0x0004e5e7) title_pane_g

0xb056,	// (0x0004a0e9) aid_size_cell_colour_1_pane_ParamLimits

0xb056,	// (0x0004a0e9) aid_size_cell_colour_1_pane

0xb06a,	// (0x0004a0fd) aid_size_cell_colour_2_pane_ParamLimits

0xb06a,	// (0x0004a0fd) aid_size_cell_colour_2_pane

0xb07e,	// (0x0004a111) aid_size_cell_colour_3_pane_ParamLimits

0xb07e,	// (0x0004a111) aid_size_cell_colour_3_pane

0xb092,	// (0x0004a125) aid_size_cell_colour_4_pane_ParamLimits

0xb092,	// (0x0004a125) aid_size_cell_colour_4_pane

0x9040,	// (0x000480d3) title_pane_stacon_g1_ParamLimits

0x9040,	// (0x000480d3) title_pane_stacon_g1

0x598f,	// (0x00044a22) popup_note_wait_window_g3_ParamLimits

0x598f,	// (0x00044a22) popup_note_wait_window_g3

0x5a05,	// (0x00044a98) popup_note_wait_window_t5_ParamLimits

0x5a05,	// (0x00044a98) popup_note_wait_window_t5

0x389b,	// (0x0004292e) main_feb_china_hwr_fs_writing_pane

0x966a,	// (0x000486fd) popup_feb_china_hwr_fs_window_ParamLimits

0x966a,	// (0x000486fd) popup_feb_china_hwr_fs_window

0x9c36,	// (0x00048cc9) aid_size_cell_hwr_fs_ParamLimits

0x9c36,	// (0x00048cc9) aid_size_cell_hwr_fs

0x5485,	// (0x00044518) bg_popup_sub_pane_cp3_ParamLimits

0x5485,	// (0x00044518) bg_popup_sub_pane_cp3

0x9c4b,	// (0x00048cde) grid_hwr_fs_pane_ParamLimits

0x9c4b,	// (0x00048cde) grid_hwr_fs_pane

0x9c63,	// (0x00048cf6) linegrid_hwr_fs_pane_ParamLimits

0x9c63,	// (0x00048cf6) linegrid_hwr_fs_pane

0x9c73,	// (0x00048d06) cell_hwr_fs_pane_ParamLimits

0x9c73,	// (0x00048d06) cell_hwr_fs_pane

0x5491,	// (0x00044524) linegrid_hwr_fs_pane_g1_ParamLimits

0x5491,	// (0x00044524) linegrid_hwr_fs_pane_g1

0xba68,	// (0x0004aafb) linegrid_hwr_fs_pane_g2_ParamLimits

0xba68,	// (0x0004aafb) linegrid_hwr_fs_pane_g2

0x549d,	// (0x00044530) linegrid_hwr_fs_pane_g3_ParamLimits

0x549d,	// (0x00044530) linegrid_hwr_fs_pane_g3

0x9c95,	// (0x00048d28) linegrid_hwr_fs_pane_g4_ParamLimits

0x9c95,	// (0x00048d28) linegrid_hwr_fs_pane_g4

0x9caf,	// (0x00048d42) linegrid_hwr_fs_pane_g5_ParamLimits

0x9caf,	// (0x00048d42) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fb,	// (0x0004e88e) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0004e88e) linegrid_hwr_fs_pane_g

0x54a9,	// (0x0004453c) cell_hwr_fs_pane_g1_ParamLimits

0x54a9,	// (0x0004453c) cell_hwr_fs_pane_g1

0x5309,	// (0x0004439c) cell_hwr_fs_pane_g2_ParamLimits

0x5309,	// (0x0004439c) cell_hwr_fs_pane_g2

0xba7a,	// (0x0004ab0d) cell_hwr_fs_pane_g3_ParamLimits

0xba7a,	// (0x0004ab0d) cell_hwr_fs_pane_g3

0xba87,	// (0x0004ab1a) cell_hwr_fs_pane_g4_ParamLimits

0xba87,	// (0x0004ab1a) cell_hwr_fs_pane_g4

0x0003,

0xf806,	// (0x0004e899) cell_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x0004e899) cell_hwr_fs_pane_g

0x9cc5,	// (0x00048d58) cell_hwr_fs_pane_t1

0x389b,	// (0x0004292e) grid_highlight_pane_cp6

0x389b,	// (0x0004292e) main_idle_act2_pane

0x470d,	// (0x000437a0) aid_inside_area_popup_secondary

0xbc6c,	// (0x0004acff) aid_inside_area_window_primary_ParamLimits

0xbc6c,	// (0x0004acff) aid_inside_area_window_primary

0x6779,	// (0x0004580c) ai2_news_ticker_pane

0x6781,	// (0x00045814) aid_size_cell_ai1_link_ParamLimits

0x6781,	// (0x00045814) aid_size_cell_ai1_link

0x679b,	// (0x0004582e) popup_ai2_data_window_ParamLimits

0x679b,	// (0x0004582e) popup_ai2_data_window

0x67af,	// (0x00045842) popup_ai2_link_window_ParamLimits

0x67af,	// (0x00045842) popup_ai2_link_window

0x5485,	// (0x00044518) bg_popup_sub_pane_cp4_ParamLimits

0x5485,	// (0x00044518) bg_popup_sub_pane_cp4

0x67c3,	// (0x00045856) grid_ai2_link_pane_ParamLimits

0x67c3,	// (0x00045856) grid_ai2_link_pane

0x67da,	// (0x0004586d) popup_ai2_link_window_g1_ParamLimits

0x67da,	// (0x0004586d) popup_ai2_link_window_g1

0x67e6,	// (0x00045879) popup_ai2_link_window_g2_ParamLimits

0x67e6,	// (0x00045879) popup_ai2_link_window_g2

0x0001,

0xf9d9,	// (0x0004ea6c) popup_ai2_link_window_g_ParamLimits

0xf9d9,	// (0x0004ea6c) popup_ai2_link_window_g

0x67f5,	// (0x00045888) ai2_mp_button_pane

0x67fd,	// (0x00045890) ai2_mp_volume_pane

0x55cf,	// (0x00044662) bg_popup_sub_pane_cp5_ParamLimits

0x55cf,	// (0x00044662) bg_popup_sub_pane_cp5

0x6805,	// (0x00045898) heading_ai2_gene_pane_ParamLimits

0x6805,	// (0x00045898) heading_ai2_gene_pane

0x6811,	// (0x000458a4) list_ai2_gene_pane_ParamLimits

0x6811,	// (0x000458a4) list_ai2_gene_pane

0x6859,	// (0x000458ec) cell_ai2_link_pane_ParamLimits

0x6859,	// (0x000458ec) cell_ai2_link_pane

0x686f,	// (0x00045902) cell_ai2_link_pane_g1

0x389b,	// (0x0004292e) grid_highlight_pane_cp7

0x9fb1,	// (0x00049044) ai2_mp_volume_pane_g1

0x6948,	// (0x000459db) ai2_mp_volume_pane_g2

0x68b5,	// (0x00045948) list_ai2_gene_pane_t1

0x6940,	// (0x000459d3) ai2_mp_volume_pane_g3

0x0002,

0xf9f2,	// (0x0004ea85) ai2_mp_volume_pane_g

0x9fb9,	// (0x0004904c) volume_small_pane_cp3

0x6950,	// (0x000459e3) aid_size_cell_ai2_button

0x6958,	// (0x000459eb) grid_ai2_button_pane

0x6961,	// (0x000459f4) cell_ai2_button_pane_ParamLimits

0x6961,	// (0x000459f4) cell_ai2_button_pane

0x3891,	// (0x00042924) cell_ai2_button_pane_g1

0x389b,	// (0x0004292e) grid_highlight_pane_cp8

0x6900,	// (0x00045993) ai2_gene_pane_t1_ParamLimits

0x6900,	// (0x00045993) ai2_gene_pane_t1

0x95cc,	// (0x0004865f) aid_height_parent_landscape

0xbddd,	// (0x0004ae70) aid_height_set_list

0x53a3,	// (0x00044436) aid_size_parent

0x65e4,	// (0x00045677) aid_size_cell_graphic_pane_ParamLimits

0x6821,	// (0x000458b4) popup_ai2_data_window_g1_ParamLimits

0x6821,	// (0x000458b4) popup_ai2_data_window_g1

0x682d,	// (0x000458c0) ai2_news_ticker_pane_g1

0x6835,	// (0x000458c8) ai2_news_ticker_pane_g2

0x0001,

0xf9de,	// (0x0004ea71) ai2_news_ticker_pane_g

0x683d,	// (0x000458d0) ai2_news_ticker_pane_t1

0x684b,	// (0x000458de) ai2_news_ticker_pane_t2

0x0001,

0xf9e3,	// (0x0004ea76) ai2_news_ticker_pane_t

0x6878,	// (0x0004590b) heading_ai2_gene_pane_g1

0x6880,	// (0x00045913) heading_ai2_gene_pane_t1_ParamLimits

0x6880,	// (0x00045913) heading_ai2_gene_pane_t1

0x6895,	// (0x00045928) list_highlight_pane_cp6

0x689d,	// (0x00045930) ai2_gene_pane_ParamLimits

0x689d,	// (0x00045930) ai2_gene_pane

0x68c3,	// (0x00045956) list_ai2_gene_pane_t2

0x0001,

0xf9e8,	// (0x0004ea7b) list_ai2_gene_pane_t

0x68d1,	// (0x00045964) list_highlight_pane_cp8_ParamLimits

0x68d1,	// (0x00045964) list_highlight_pane_cp8

0x68e2,	// (0x00045975) ai2_gene_pane_g1_ParamLimits

0x68e2,	// (0x00045975) ai2_gene_pane_g1

0x68f4,	// (0x00045987) ai2_gene_pane_g2_ParamLimits

0x68f4,	// (0x00045987) ai2_gene_pane_g2

0x0001,

0xf9ed,	// (0x0004ea80) ai2_gene_pane_g_ParamLimits

0xf9ed,	// (0x0004ea80) ai2_gene_pane_g

0x3ed4,	// (0x00042f67) scroll_pane_cp12

0x958b,	// (0x0004861e) control_pane_t3_ParamLimits

0x958b,	// (0x0004861e) control_pane_t3

0x518b,	// (0x0004421e) status_small_pane_g8_ParamLimits

0x518b,	// (0x0004421e) status_small_pane_g8

0x974c,	// (0x000487df) popup_find_window_ParamLimits

0x9961,	// (0x000489f4) popup_note_image_window_ParamLimits

0xb9b6,	// (0x0004aa49) list_double2_graphic_pane_vc_g1_ParamLimits

0xb9b6,	// (0x0004aa49) list_double2_graphic_pane_vc_g1

0xb110,	// (0x0004a1a3) list_double2_graphic_pane_vc_g2_ParamLimits

0xb110,	// (0x0004a1a3) list_double2_graphic_pane_vc_g2

0xb11c,	// (0x0004a1af) list_double2_graphic_pane_vc_g3_ParamLimits

0xb11c,	// (0x0004a1af) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x0004e85c) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x0004e85c) list_double2_graphic_pane_vc_g

0xb9c2,	// (0x0004aa55) list_double2_graphic_pane_vc_t1_ParamLimits

0xb9c2,	// (0x0004aa55) list_double2_graphic_pane_vc_t1

0xb110,	// (0x0004a1a3) list_single_heading_pane_vc_g1_ParamLimits

0xb110,	// (0x0004a1a3) list_single_heading_pane_vc_g1

0xb11c,	// (0x0004a1af) list_single_heading_pane_vc_g2_ParamLimits

0xb11c,	// (0x0004a1af) list_single_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004e66b) list_single_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004e66b) list_single_heading_pane_vc_g

0xb9d8,	// (0x0004aa6b) list_single_heading_pane_vc_t1_ParamLimits

0xb9d8,	// (0x0004aa6b) list_single_heading_pane_vc_t1

0xb9ee,	// (0x0004aa81) list_single_heading_pane_vc_t2_ParamLimits

0xb9ee,	// (0x0004aa81) list_single_heading_pane_vc_t2

0x0001,

0xf7ea,	// (0x0004e87d) list_single_heading_pane_vc_t_ParamLimits

0xf7ea,	// (0x0004e87d) list_single_heading_pane_vc_t

0xef60,	// (0x0004dff3) list_setting_number_pane_vc_g1_ParamLimits

0xef60,	// (0x0004dff3) list_setting_number_pane_vc_g1

0xef6c,	// (0x0004dfff) list_setting_number_pane_vc_g2_ParamLimits

0xef6c,	// (0x0004dfff) list_setting_number_pane_vc_g2

0x0001,

0xf7ef,	// (0x0004e882) list_setting_number_pane_vc_g_ParamLimits

0xf7ef,	// (0x0004e882) list_setting_number_pane_vc_g

0xba02,	// (0x0004aa95) list_setting_number_pane_vc_t1_ParamLimits

0xba02,	// (0x0004aa95) list_setting_number_pane_vc_t1

0xba16,	// (0x0004aaa9) list_setting_number_pane_vc_t2_ParamLimits

0xba16,	// (0x0004aaa9) list_setting_number_pane_vc_t2

0xba30,	// (0x0004aac3) list_setting_number_pane_vc_t3_ParamLimits

0xba30,	// (0x0004aac3) list_setting_number_pane_vc_t3

0x0002,

0xf7f4,	// (0x0004e887) list_setting_number_pane_vc_t_ParamLimits

0xf7f4,	// (0x0004e887) list_setting_number_pane_vc_t

0xba58,	// (0x0004aaeb) set_value_pane_vc_ParamLimits

0xba58,	// (0x0004aaeb) set_value_pane_vc

0x6561,	// (0x000455f4) list_double2_graphic_pane_vc_ParamLimits

0x6561,	// (0x000455f4) list_double2_graphic_pane_vc

0xc4b3,	// (0x0004b546) list_double2_large_graphic_pane_vc_ParamLimits

0xc4b3,	// (0x0004b546) list_double2_large_graphic_pane_vc

0x6561,	// (0x000455f4) list_double2_pane_vc_ParamLimits

0x6561,	// (0x000455f4) list_double2_pane_vc

0x6561,	// (0x000455f4) list_double_graphic_heading_pane_vc_ParamLimits

0x6561,	// (0x000455f4) list_double_graphic_heading_pane_vc

0x6561,	// (0x000455f4) list_double_graphic_pane_vc_ParamLimits

0x6561,	// (0x000455f4) list_double_graphic_pane_vc

0x6561,	// (0x000455f4) list_double_heading_pane_vc_ParamLimits

0x6561,	// (0x000455f4) list_double_heading_pane_vc

0xc4b3,	// (0x0004b546) list_double_large_graphic_pane_vc_ParamLimits

0xc4b3,	// (0x0004b546) list_double_large_graphic_pane_vc

0x6561,	// (0x000455f4) list_double_number_pane_vc_ParamLimits

0x6561,	// (0x000455f4) list_double_number_pane_vc

0x6561,	// (0x000455f4) list_double_pane_vc_ParamLimits

0x6561,	// (0x000455f4) list_double_pane_vc

0x6561,	// (0x000455f4) list_double_time_pane_vc_ParamLimits

0x6561,	// (0x000455f4) list_double_time_pane_vc

0x6561,	// (0x000455f4) list_setting_number_pane_vc_ParamLimits

0x6561,	// (0x000455f4) list_setting_number_pane_vc

0x6561,	// (0x000455f4) list_setting_pane_vc_ParamLimits

0x6561,	// (0x000455f4) list_setting_pane_vc

0x6561,	// (0x000455f4) list_single_graphic_heading_pane_vc_ParamLimits

0x6561,	// (0x000455f4) list_single_graphic_heading_pane_vc

0x6561,	// (0x000455f4) list_single_heading_pane_vc_ParamLimits

0x6561,	// (0x000455f4) list_single_heading_pane_vc

0xc4c5,	// (0x0004b558) list_single_number_heading_pane_vc_ParamLimits

0xc4c5,	// (0x0004b558) list_single_number_heading_pane_vc

0xb9b6,	// (0x0004aa49) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xb9b6,	// (0x0004aa49) list_double_graphic_heading_pane_vc_g1

0xb110,	// (0x0004a1a3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xb110,	// (0x0004a1a3) list_double_graphic_heading_pane_vc_g2

0xb11c,	// (0x0004a1af) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xb11c,	// (0x0004a1af) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c9,	// (0x0004e85c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0004e85c) list_double_graphic_heading_pane_vc_g

0xbef0,	// (0x0004af83) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xbef0,	// (0x0004af83) list_double_graphic_heading_pane_vc_t1

0xbf0c,	// (0x0004af9f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xbf0c,	// (0x0004af9f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f9,	// (0x0004ea8c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f9,	// (0x0004ea8c) list_double_graphic_heading_pane_vc_t

0xef60,	// (0x0004dff3) list_setting_pane_vc_g1_ParamLimits

0xef60,	// (0x0004dff3) list_setting_pane_vc_g1

0xef6c,	// (0x0004dfff) list_setting_pane_vc_g2_ParamLimits

0xef6c,	// (0x0004dfff) list_setting_pane_vc_g2

0x0001,

0xf7ef,	// (0x0004e882) list_setting_pane_vc_g_ParamLimits

0xf7ef,	// (0x0004e882) list_setting_pane_vc_g

0xbf24,	// (0x0004afb7) list_setting_pane_vc_t1_ParamLimits

0xbf24,	// (0x0004afb7) list_setting_pane_vc_t1

0xbf3e,	// (0x0004afd1) list_setting_pane_vc_t2_ParamLimits

0xbf3e,	// (0x0004afd1) list_setting_pane_vc_t2

0x0001,

0xfa3c,	// (0x0004eacf) list_setting_pane_vc_t_ParamLimits

0xfa3c,	// (0x0004eacf) list_setting_pane_vc_t

0xba58,	// (0x0004aaeb) set_value_pane_cp_vc_ParamLimits

0xba58,	// (0x0004aaeb) set_value_pane_cp_vc

0xb110,	// (0x0004a1a3) list_single_number_heading_pane_vc_g1_ParamLimits

0xb110,	// (0x0004a1a3) list_single_number_heading_pane_vc_g1

0xb11c,	// (0x0004a1af) list_single_number_heading_pane_vc_g2_ParamLimits

0xb11c,	// (0x0004a1af) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004e66b) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004e66b) list_single_number_heading_pane_vc_g

0xb9d8,	// (0x0004aa6b) list_single_number_heading_pane_vc_t1_ParamLimits

0xb9d8,	// (0x0004aa6b) list_single_number_heading_pane_vc_t1

0xbf56,	// (0x0004afe9) list_single_number_heading_pane_vc_t2_ParamLimits

0xbf56,	// (0x0004afe9) list_single_number_heading_pane_vc_t2

0x8a8f,	// (0x00047b22) list_single_number_heading_pane_vc_t3_ParamLimits

0x8a8f,	// (0x00047b22) list_single_number_heading_pane_vc_t3

0x0002,

0xfa41,	// (0x0004ead4) list_single_number_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x0004ead4) list_single_number_heading_pane_vc_t

0xb9b6,	// (0x0004aa49) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xb9b6,	// (0x0004aa49) list_single_graphic_heading_pane_vc_g1

0xb110,	// (0x0004a1a3) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xb110,	// (0x0004a1a3) list_single_graphic_heading_pane_vc_g4

0xb11c,	// (0x0004a1af) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xb11c,	// (0x0004a1af) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x0004e85c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0004e85c) list_single_graphic_heading_pane_vc_g

0xb9d8,	// (0x0004aa6b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb9d8,	// (0x0004aa6b) list_single_graphic_heading_pane_vc_t1

0xbf6a,	// (0x0004affd) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xbf6a,	// (0x0004affd) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa48,	// (0x0004eadb) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa48,	// (0x0004eadb) list_single_graphic_heading_pane_vc_t

0xb110,	// (0x0004a1a3) list_double2_pane_vc_g1_ParamLimits

0xb110,	// (0x0004a1a3) list_double2_pane_vc_g1

0xb11c,	// (0x0004a1af) list_double2_pane_vc_g2_ParamLimits

0xb11c,	// (0x0004a1af) list_double2_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004e66b) list_double2_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004e66b) list_double2_pane_vc_g

0xbeda,	// (0x0004af6d) list_double2_pane_vc_t1_ParamLimits

0xbeda,	// (0x0004af6d) list_double2_pane_vc_t1

0xc670,	// (0x0004b703) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xc670,	// (0x0004b703) list_double2_large_graphic_pane_vc_g1

0xc67c,	// (0x0004b70f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xc67c,	// (0x0004b70f) list_double2_large_graphic_pane_vc_g2

0xc688,	// (0x0004b71b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xc688,	// (0x0004b71b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4d,	// (0x0004eae0) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4d,	// (0x0004eae0) list_double2_large_graphic_pane_vc_g

0xbf7e,	// (0x0004b011) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xbf7e,	// (0x0004b011) list_double2_large_graphic_pane_vc_t1

0xbf94,	// (0x0004b027) list_double_time_pane_vc_g1_ParamLimits

0xbf94,	// (0x0004b027) list_double_time_pane_vc_g1

0xbfa0,	// (0x0004b033) list_double_time_pane_vc_g2_ParamLimits

0xbfa0,	// (0x0004b033) list_double_time_pane_vc_g2

0x0001,

0xfa54,	// (0x0004eae7) list_double_time_pane_vc_g_ParamLimits

0xfa54,	// (0x0004eae7) list_double_time_pane_vc_g

0xbfac,	// (0x0004b03f) list_double_time_pane_vc_t1_ParamLimits

0xbfac,	// (0x0004b03f) list_double_time_pane_vc_t1

0xbfd0,	// (0x0004b063) list_double_time_pane_vc_t2_ParamLimits

0xbfd0,	// (0x0004b063) list_double_time_pane_vc_t2

0xc01a,	// (0x0004b0ad) list_double_time_pane_vc_t3_ParamLimits

0xc01a,	// (0x0004b0ad) list_double_time_pane_vc_t3

0xc02c,	// (0x0004b0bf) list_double_time_pane_vc_t4_ParamLimits

0xc02c,	// (0x0004b0bf) list_double_time_pane_vc_t4

0x0003,

0xfa59,	// (0x0004eaec) list_double_time_pane_vc_t_ParamLimits

0xfa59,	// (0x0004eaec) list_double_time_pane_vc_t

0xb110,	// (0x0004a1a3) list_double_pane_vc_g1_ParamLimits

0xb110,	// (0x0004a1a3) list_double_pane_vc_g1

0xb11c,	// (0x0004a1af) list_double_pane_vc_g2_ParamLimits

0xb11c,	// (0x0004a1af) list_double_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004e66b) list_double_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004e66b) list_double_pane_vc_g

0xc040,	// (0x0004b0d3) list_double_pane_vc_t1_ParamLimits

0xc040,	// (0x0004b0d3) list_double_pane_vc_t1

0xc054,	// (0x0004b0e7) list_double_pane_vc_t2_ParamLimits

0xc054,	// (0x0004b0e7) list_double_pane_vc_t2

0x0001,

0xfa62,	// (0x0004eaf5) list_double_pane_vc_t_ParamLimits

0xfa62,	// (0x0004eaf5) list_double_pane_vc_t

0xb110,	// (0x0004a1a3) list_double_number_pane_vc_g1_ParamLimits

0xb110,	// (0x0004a1a3) list_double_number_pane_vc_g1

0xb11c,	// (0x0004a1af) list_double_number_pane_vc_g2_ParamLimits

0xb11c,	// (0x0004a1af) list_double_number_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004e66b) list_double_number_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004e66b) list_double_number_pane_vc_g

0xc06c,	// (0x0004b0ff) list_double_number_pane_vc_t1_ParamLimits

0xc06c,	// (0x0004b0ff) list_double_number_pane_vc_t1

0xc080,	// (0x0004b113) list_double_number_pane_vc_t2_ParamLimits

0xc080,	// (0x0004b113) list_double_number_pane_vc_t2

0xc054,	// (0x0004b0e7) list_double_number_pane_vc_t3_ParamLimits

0xc054,	// (0x0004b0e7) list_double_number_pane_vc_t3

0x0002,

0xfa67,	// (0x0004eafa) list_double_number_pane_vc_t_ParamLimits

0xfa67,	// (0x0004eafa) list_double_number_pane_vc_t

0xc694,	// (0x0004b727) list_double_large_graphic_pane_vc_g1_ParamLimits

0xc694,	// (0x0004b727) list_double_large_graphic_pane_vc_g1

0xc6a5,	// (0x0004b738) list_double_large_graphic_pane_vc_g2_ParamLimits

0xc6a5,	// (0x0004b738) list_double_large_graphic_pane_vc_g2

0xc688,	// (0x0004b71b) list_double_large_graphic_pane_vc_g3_ParamLimits

0xc688,	// (0x0004b71b) list_double_large_graphic_pane_vc_g3

0xc094,	// (0x0004b127) list_double_large_graphic_pane_vc_g4_ParamLimits

0xc094,	// (0x0004b127) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6e,	// (0x0004eb01) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6e,	// (0x0004eb01) list_double_large_graphic_pane_vc_g

0xc0a0,	// (0x0004b133) list_double_large_graphic_pane_vc_t1_ParamLimits

0xc0a0,	// (0x0004b133) list_double_large_graphic_pane_vc_t1

0xc0b9,	// (0x0004b14c) list_double_large_graphic_pane_vc_t2_ParamLimits

0xc0b9,	// (0x0004b14c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa77,	// (0x0004eb0a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa77,	// (0x0004eb0a) list_double_large_graphic_pane_vc_t

0xb110,	// (0x0004a1a3) list_double_heading_pane_vc_g1_ParamLimits

0xb110,	// (0x0004a1a3) list_double_heading_pane_vc_g1

0xb11c,	// (0x0004a1af) list_double_heading_pane_vc_g2_ParamLimits

0xb11c,	// (0x0004a1af) list_double_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004e66b) list_double_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004e66b) list_double_heading_pane_vc_g

0xc0d2,	// (0x0004b165) list_double_heading_pane_vc_t1_ParamLimits

0xc0d2,	// (0x0004b165) list_double_heading_pane_vc_t1

0xb9d8,	// (0x0004aa6b) list_double_heading_pane_vc_t2_ParamLimits

0xb9d8,	// (0x0004aa6b) list_double_heading_pane_vc_t2

0x0001,

0xfa7c,	// (0x0004eb0f) list_double_heading_pane_vc_t_ParamLimits

0xfa7c,	// (0x0004eb0f) list_double_heading_pane_vc_t

0xb9b6,	// (0x0004aa49) list_double_graphic_pane_vc_g1_ParamLimits

0xb9b6,	// (0x0004aa49) list_double_graphic_pane_vc_g1

0xc0e6,	// (0x0004b179) list_double_graphic_pane_vc_g2_ParamLimits

0xc0e6,	// (0x0004b179) list_double_graphic_pane_vc_g2

0x697f,	// (0x00045a12) list_double_graphic_pane_vc_g3_ParamLimits

0x697f,	// (0x00045a12) list_double_graphic_pane_vc_g3

0x0002,

0xfa81,	// (0x0004eb14) list_double_graphic_pane_vc_g_ParamLimits

0xfa81,	// (0x0004eb14) list_double_graphic_pane_vc_g

0xc0f5,	// (0x0004b188) list_double_graphic_pane_vc_t1_ParamLimits

0xc0f5,	// (0x0004b188) list_double_graphic_pane_vc_t1

0xc109,	// (0x0004b19c) list_double_graphic_pane_vc_t2_ParamLimits

0xc109,	// (0x0004b19c) list_double_graphic_pane_vc_t2

0x0001,

0xfa88,	// (0x0004eb1b) list_double_graphic_pane_vc_t_ParamLimits

0xfa88,	// (0x0004eb1b) list_double_graphic_pane_vc_t

0x85a9,	// (0x0004763c) aid_size_cell_fastswap

0x85b1,	// (0x00047644) aid_size_cell_touch_ParamLimits

0x85b1,	// (0x00047644) aid_size_cell_touch

0x8816,	// (0x000478a9) popup_fast_swap_wide_window_ParamLimits

0x8816,	// (0x000478a9) popup_fast_swap_wide_window

0x8912,	// (0x000479a5) touch_pane_ParamLimits

0x8912,	// (0x000479a5) touch_pane

0x3f2a,	// (0x00042fbd) button_value_adjust_pane_cp2

0x8e9c,	// (0x00047f2f) button_value_adjust_pane_cp4

0x8ebe,	// (0x00047f51) form_field_data_pane_cp2

0x8edd,	// (0x00047f70) form_field_data_wide_pane_cp2

0x493d,	// (0x000439d0) bg_scroll_pane_ParamLimits

0x91a3,	// (0x00048236) scroll_handle_pane_ParamLimits

0x91b7,	// (0x0004824a) scroll_sc2_down_pane_ParamLimits

0x91b7,	// (0x0004824a) scroll_sc2_down_pane

0x496e,	// (0x00043a01) scroll_sc2_up_pane_ParamLimits

0x496e,	// (0x00043a01) scroll_sc2_up_pane

0xc7ca,	// (0x0004b85d) grid_wheel_folder_pane_g1_ParamLimits

0xc7ca,	// (0x0004b85d) grid_wheel_folder_pane_g1

0x9373,	// (0x00048406) clock_nsta_pane_cp2_ParamLimits

0x9373,	// (0x00048406) clock_nsta_pane_cp2

0xb310,	// (0x0004a3a3) listscroll_midp_pane_ParamLimits

0xb5b2,	// (0x0004a645) midp_canvas_pane

0x51df,	// (0x00044272) nsta_clock_indic_pane

0x5207,	// (0x0004429a) listscroll_form_pane_vc

0x520f,	// (0x000442a2) listscroll_set_pane_vc_ParamLimits

0x520f,	// (0x000442a2) listscroll_set_pane_vc

0xb764,	// (0x0004a7f7) clock_nsta_pane

0xb771,	// (0x0004a804) indicator_nsta_pane

0x533d,	// (0x000443d0) bg_popup_sub_pane_cp2_ParamLimits

0x5351,	// (0x000443e4) find_pane_cp2_ParamLimits

0x5351,	// (0x000443e4) find_pane_cp2

0x5367,	// (0x000443fa) grid_toobar_pane_ParamLimits

0x5459,	// (0x000444ec) list_form_gen_pane_vc_ParamLimits

0x5459,	// (0x000444ec) list_form_gen_pane_vc

0x546f,	// (0x00044502) scroll_pane_cp8_vc_ParamLimits

0x546f,	// (0x00044502) scroll_pane_cp8_vc

0x54bf,	// (0x00044552) data_form_wide_pane_vc_ParamLimits

0x54bf,	// (0x00044552) data_form_wide_pane_vc

0x54cb,	// (0x0004455e) form_field_data_wide_pane_vc_g1

0x54d3,	// (0x00044566) form_field_data_wide_pane_vc_t1_ParamLimits

0x54d3,	// (0x00044566) form_field_data_wide_pane_vc_t1

0x45fa,	// (0x0004368d) input_focus_pane_cp6_vc_ParamLimits

0x45fa,	// (0x0004368d) input_focus_pane_cp6_vc

0xbbbf,	// (0x0004ac52) list_midp_pane_ParamLimits

0xbbcb,	// (0x0004ac5e) scroll_pane_cp16_ParamLimits

0xbbcb,	// (0x0004ac5e) scroll_pane_cp16

0x5769,	// (0x000447fc) button_value_adjust_pane_ParamLimits

0x5769,	// (0x000447fc) button_value_adjust_pane

0xbdee,	// (0x0004ae81) button_value_adjust_pane_cp6_ParamLimits

0xbdee,	// (0x0004ae81) button_value_adjust_pane_cp6

0xc46e,	// (0x0004b501) settings_code_pane_cp_ParamLimits

0xc46e,	// (0x0004b501) settings_code_pane_cp

0x3891,	// (0x00042924) cell_touch_pane_g1

0x3891,	// (0x00042924) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x0004e7a1) cell_touch_pane_g

0xc64f,	// (0x0004b6e2) cell_touch_pane_cp_ParamLimits

0xc64f,	// (0x0004b6e2) cell_touch_pane_cp

0xc65f,	// (0x0004b6f2) cell_touch_pane_ParamLimits

0xc65f,	// (0x0004b6f2) cell_touch_pane

0x3891,	// (0x00042924) scroll_sc2_down_pane_g1

0x3891,	// (0x00042924) scroll_sc2_up_pane_g1

0x389b,	// (0x0004292e) bg_set_opt_pane_cp4_vc

0x6973,	// (0x00045a06) list_set_graphic_pane_vc_g1_ParamLimits

0x6973,	// (0x00045a06) list_set_graphic_pane_vc_g1

0x697f,	// (0x00045a12) list_set_graphic_pane_vc_g2_ParamLimits

0x697f,	// (0x00045a12) list_set_graphic_pane_vc_g2

0x0001,

0xf9fe,	// (0x0004ea91) list_set_graphic_pane_vc_g_ParamLimits

0xf9fe,	// (0x0004ea91) list_set_graphic_pane_vc_g

0x698b,	// (0x00045a1e) text_primary_small_cp13_vc_ParamLimits

0x698b,	// (0x00045a1e) text_primary_small_cp13_vc

0x6127,	// (0x000451ba) list_set_graphic_pane_vc_ParamLimits

0x6127,	// (0x000451ba) list_set_graphic_pane_vc

0x389b,	// (0x0004292e) input_focus_pane_cp2_vc

0x3891,	// (0x00042924) setting_code_pane_vc_g1

0x390e,	// (0x000429a1) setting_code_pane_vc_t1

0x69a3,	// (0x00045a36) set_text_pane_vc_t1_ParamLimits

0x69a3,	// (0x00045a36) set_text_pane_vc_t1

0x389b,	// (0x0004292e) input_focus_pane_cp1_vc

0x69c0,	// (0x00045a53) list_set_text_pane_vc

0x3891,	// (0x00042924) setting_text_pane_vc_g1

0x389b,	// (0x0004292e) bg_set_opt_pane_cp2_vc

0x3905,	// (0x00042998) setting_slider_graphic_pane_vc_g1

0x69ca,	// (0x00045a5d) setting_slider_graphic_pane_vc_t1

0x69da,	// (0x00045a6d) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa03,	// (0x0004ea96) setting_slider_graphic_pane_vc_t

0x69ea,	// (0x00045a7d) slider_set_pane_cp_vc

0x69f2,	// (0x00045a85) slider_set_pane_vc_g1

0x69fb,	// (0x00045a8e) slider_set_pane_vc_g2

0x0006,

0xfa08,	// (0x0004ea9b) slider_set_pane_vc_g

0x4655,	// (0x000436e8) set_opt_bg_pane_g1_copy1

0x465d,	// (0x000436f0) set_opt_bg_pane_g2_copy1

0x6a27,	// (0x00045aba) set_opt_bg_pane_g3_copy1

0x466d,	// (0x00043700) set_opt_bg_pane_g4_copy1

0x4675,	// (0x00043708) set_opt_bg_pane_g5_copy1

0x467d,	// (0x00043710) set_opt_bg_pane_g6_copy1

0x6a2f,	// (0x00045ac2) set_opt_bg_pane_g7_copy1

0x6a39,	// (0x00045acc) set_opt_bg_pane_g8_copy1

0x6a41,	// (0x00045ad4) set_opt_bg_pane_g9_copy1

0x389b,	// (0x0004292e) bg_set_opt_pane_cp_vc

0x6a49,	// (0x00045adc) setting_slider_pane_vc_t1

0x6a58,	// (0x00045aeb) setting_slider_pane_vc_t2

0x6a68,	// (0x00045afb) setting_slider_pane_vc_t3

0x0002,

0xfa17,	// (0x0004eaaa) setting_slider_pane_vc_t

0x6a78,	// (0x00045b0b) slider_set_pane_vc

0x9cd3,	// (0x00048d66) volume_set_pane_vc_g1

0x9fc2,	// (0x00049055) volume_set_pane_vc_g2

0x9fcb,	// (0x0004905e) volume_set_pane_vc_g3

0x9fd4,	// (0x00049067) volume_set_pane_vc_g4

0x9fdd,	// (0x00049070) volume_set_pane_vc_g5

0x9fe6,	// (0x00049079) volume_set_pane_vc_g6

0x9d00,	// (0x00048d93) volume_set_pane_vc_g7

0x9fef,	// (0x00049082) volume_set_pane_vc_g8

0x9ff8,	// (0x0004908b) volume_set_pane_vc_g9

0xa001,	// (0x00049094) volume_set_pane_vc_g10

0x0009,

0xfa1e,	// (0x0004eab1) volume_set_pane_vc_g

0x6a80,	// (0x00045b13) volume_set_pane_vc

0x6a88,	// (0x00045b1b) button_value_adjust_pane_cp1_vc

0x6a92,	// (0x00045b25) list_highlight_pane_cp2_vc

0x6a9b,	// (0x00045b2e) list_set_pane_vc_ParamLimits

0x6a9b,	// (0x00045b2e) list_set_pane_vc

0x6af9,	// (0x00045b8c) main_pane_set_vc_t1_ParamLimits

0x6af9,	// (0x00045b8c) main_pane_set_vc_t1

0x6b0e,	// (0x00045ba1) main_pane_set_vc_t2_ParamLimits

0x6b0e,	// (0x00045ba1) main_pane_set_vc_t2

0x6b20,	// (0x00045bb3) main_pane_set_vc_t3_ParamLimits

0x6b20,	// (0x00045bb3) main_pane_set_vc_t3

0x6b32,	// (0x00045bc5) main_pane_set_vc_t4_ParamLimits

0x6b32,	// (0x00045bc5) main_pane_set_vc_t4

0x0003,

0xfa33,	// (0x0004eac6) main_pane_set_vc_t_ParamLimits

0xfa33,	// (0x0004eac6) main_pane_set_vc_t

0x6b44,	// (0x00045bd7) setting_code_pane_vc_ParamLimits

0x6b44,	// (0x00045bd7) setting_code_pane_vc

0x6b53,	// (0x00045be6) setting_slider_graphic_pane_vc

0x6b53,	// (0x00045be6) setting_slider_pane_vc

0x6b53,	// (0x00045be6) setting_text_pane_vc

0x6b53,	// (0x00045be6) setting_volume_pane_vc

0x6b5b,	// (0x00045bee) scroll_pane_cp121_vc

0x3f18,	// (0x00042fab) set_content_pane_vc

0x6b63,	// (0x00045bf6) button_value_adjust_pane_g1

0x6b6c,	// (0x00045bff) button_value_adjust_pane_g2

0x0001,

0xfa8d,	// (0x0004eb20) button_value_adjust_pane_g

0x6b75,	// (0x00045c08) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6b75,	// (0x00045c08) form_field_slider_wide_pane_vc_t1

0x6b89,	// (0x00045c1c) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6b89,	// (0x00045c1c) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa92,	// (0x0004eb25) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa92,	// (0x0004eb25) form_field_slider_wide_pane_vc_t

0x38e9,	// (0x0004297c) input_focus_pane_cp10_vc_ParamLimits

0x38e9,	// (0x0004297c) input_focus_pane_cp10_vc

0x6bb5,	// (0x00045c48) slider_cont_pane_cp1_vc_ParamLimits

0x6bb5,	// (0x00045c48) slider_cont_pane_cp1_vc

0x6bc5,	// (0x00045c58) slider_form_pane_g1_cp2

0x69fb,	// (0x00045a8e) slider_form_pane_g2_cp2

0x6bf2,	// (0x00045c85) form_field_slider_pane_vc_t3

0x6c00,	// (0x00045c93) form_field_slider_pane_vc_t4

0x6c0e,	// (0x00045ca1) slider_form_pane_vc_ParamLimits

0x6c0e,	// (0x00045ca1) slider_form_pane_vc

0x6c1b,	// (0x00045cae) form_field_slider_pane_vc_t1_ParamLimits

0x6c1b,	// (0x00045cae) form_field_slider_pane_vc_t1

0x6b89,	// (0x00045c1c) form_field_slider_pane_vc_t2_ParamLimits

0x6b89,	// (0x00045c1c) form_field_slider_pane_vc_t2

0x0001,

0xfaa4,	// (0x0004eb37) form_field_slider_pane_vc_t_ParamLimits

0xfaa4,	// (0x0004eb37) form_field_slider_pane_vc_t

0x38e9,	// (0x0004297c) input_focus_pane_cp9_vc_ParamLimits

0x38e9,	// (0x0004297c) input_focus_pane_cp9_vc

0x6c37,	// (0x00045cca) slider_cont_pane_vc_ParamLimits

0x6c37,	// (0x00045cca) slider_cont_pane_vc

0x6c49,	// (0x00045cdc) list_form_graphic_pane_cp_vc_ParamLimits

0x6c49,	// (0x00045cdc) list_form_graphic_pane_cp_vc

0x54cb,	// (0x0004455e) form_field_popup_wide_pane_vc_g1

0x6c5e,	// (0x00045cf1) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6c5e,	// (0x00045cf1) form_field_popup_wide_pane_vc_t1

0x45fa,	// (0x0004368d) input_focus_pane_cp8_vc_ParamLimits

0x45fa,	// (0x0004368d) input_focus_pane_cp8_vc

0x6ca3,	// (0x00045d36) list_form_wide_pane_vc_ParamLimits

0x6ca3,	// (0x00045d36) list_form_wide_pane_vc

0x6caf,	// (0x00045d42) list_form_graphic_pane_vc_g1

0x6cb7,	// (0x00045d4a) list_form_graphic_pane_vc_t1_ParamLimits

0x6cb7,	// (0x00045d4a) list_form_graphic_pane_vc_t1

0x38f7,	// (0x0004298a) list_highlight_pane_cp5_vc_ParamLimits

0x38f7,	// (0x0004298a) list_highlight_pane_cp5_vc

0x6cd3,	// (0x00045d66) list_form_graphic_pane_vc_ParamLimits

0x6cd3,	// (0x00045d66) list_form_graphic_pane_vc

0x54cb,	// (0x0004455e) form_field_popup_pane_vc_g1

0x6ce9,	// (0x00045d7c) form_field_popup_pane_vc_t1_ParamLimits

0x6ce9,	// (0x00045d7c) form_field_popup_pane_vc_t1

0x45fa,	// (0x0004368d) input_focus_pane_cp7_vc_ParamLimits

0x45fa,	// (0x0004368d) input_focus_pane_cp7_vc

0x6d00,	// (0x00045d93) list_form_pane_vc_ParamLimits

0x6d00,	// (0x00045d93) list_form_pane_vc

0x6d0c,	// (0x00045d9f) data_form_pane_vc_t1_ParamLimits

0x6d0c,	// (0x00045d9f) data_form_pane_vc_t1

0x4655,	// (0x000436e8) input_focus_pane_vc_g1

0x465d,	// (0x000436f0) input_focus_pane_vc_g2

0x4665,	// (0x000436f8) input_focus_pane_vc_g3

0x466d,	// (0x00043700) input_focus_pane_vc_g4

0x4675,	// (0x00043708) input_focus_pane_vc_g5

0x467d,	// (0x00043710) input_focus_pane_vc_g6

0x4685,	// (0x00043718) input_focus_pane_vc_g7

0x468d,	// (0x00043720) input_focus_pane_vc_g8

0x4695,	// (0x00043728) input_focus_pane_vc_g9

0x3891,	// (0x00042924) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x0004e72a) input_focus_pane_vc_g

0x54bf,	// (0x00044552) data_form_pane_vc_ParamLimits

0x54bf,	// (0x00044552) data_form_pane_vc

0x54cb,	// (0x0004455e) form_field_data_pane_vc_g1

0x6d27,	// (0x00045dba) form_field_data_pane_vc_t1_ParamLimits

0x6d27,	// (0x00045dba) form_field_data_pane_vc_t1

0x45fa,	// (0x0004368d) input_focus_pane_vc_ParamLimits

0x45fa,	// (0x0004368d) input_focus_pane_vc

0x6d41,	// (0x00045dd4) button_value_adjust_pane_cp3_vc

0x6d49,	// (0x00045ddc) button_value_adjust_pane_cp5_vc

0x6d51,	// (0x00045de4) form_field_data_pane_vc_ParamLimits

0x6d51,	// (0x00045de4) form_field_data_pane_vc

0x6d68,	// (0x00045dfb) form_field_data_pane_vc_cp2

0x6d70,	// (0x00045e03) form_field_data_wide_pane_vc_ParamLimits

0x6d70,	// (0x00045e03) form_field_data_wide_pane_vc

0x6d86,	// (0x00045e19) form_field_data_wide_pane_vc_cp2

0x6d8e,	// (0x00045e21) form_field_popup_pane_vc_ParamLimits

0x6d8e,	// (0x00045e21) form_field_popup_pane_vc

0x6da5,	// (0x00045e38) form_field_popup_wide_pane_vc_ParamLimits

0x6da5,	// (0x00045e38) form_field_popup_wide_pane_vc

0x6dbb,	// (0x00045e4e) form_field_slider_pane_vc_ParamLimits

0x6dbb,	// (0x00045e4e) form_field_slider_pane_vc

0x6dce,	// (0x00045e61) form_field_slider_wide_pane_vc_ParamLimits

0x6dce,	// (0x00045e61) form_field_slider_wide_pane_vc

0xc6b4,	// (0x0004b747) grid_touch_1_pane_ParamLimits

0xc6b4,	// (0x0004b747) grid_touch_1_pane

0xc6c0,	// (0x0004b753) grid_touch_2_pane_ParamLimits

0xc6c0,	// (0x0004b753) grid_touch_2_pane

0x51d1,	// (0x00044264) touch_pane_g1_ParamLimits

0x51d1,	// (0x00044264) touch_pane_g1

0x6def,	// (0x00045e82) cell_app_pane_cp_wide_ParamLimits

0x6def,	// (0x00045e82) cell_app_pane_cp_wide

0x6e00,	// (0x00045e93) grid_popup_fast_wide_pane_ParamLimits

0x6e00,	// (0x00045e93) grid_popup_fast_wide_pane

0x6e14,	// (0x00045ea7) scroll_pane_cp19_ParamLimits

0x6e14,	// (0x00045ea7) scroll_pane_cp19

0x389b,	// (0x0004292e) bg_popup_window_pane_cp20

0x6e28,	// (0x00045ebb) listscroll_popup_fast_wide_pane

0x38f7,	// (0x0004298a) grid_indicator_nsta_pane

0x6e30,	// (0x00045ec3) clock_nsta_pane_g1

0x6e39,	// (0x00045ecc) clock_nsta_pane_t1

0xc6d8,	// (0x0004b76b) cell_indicator_nsta_pane_ParamLimits

0xc6d8,	// (0x0004b76b) cell_indicator_nsta_pane

0x6de1,	// (0x00045e74) cell_indicator_nsta_pane_g1

0xc710,	// (0x0004b7a3) cell_indicator_nsta_pane_g2

0x0001,

0xfab5,	// (0x0004eb48) cell_indicator_nsta_pane_g

0x6e55,	// (0x00045ee8) clock_nsta_pane_cp

0x6e5d,	// (0x00045ef0) indicator_nsta_pane_cp

0x6e65,	// (0x00045ef8) nsta_clock_indic_pane_g1

0x3933,	// (0x000429c6) grid_indicator_pane

0x4a63,	// (0x00043af6) scroll_pane_cp29

0x92c2,	// (0x00048355) indicator_nsta_pane_cp2_ParamLimits

0x92c2,	// (0x00048355) indicator_nsta_pane_cp2

0x38f7,	// (0x0004298a) main_apps_wheel_pane

0x560c,	// (0x0004469f) form_midp_field_text_pane_ParamLimits

0x573b,	// (0x000447ce) scroll_bar_cp050_ParamLimits

0x6f08,	// (0x00045f9b) cell_indicator_pane_ParamLimits

0x6f08,	// (0x00045f9b) cell_indicator_pane

0x6f23,	// (0x00045fb6) cell_indicator_pane_g1

0xc726,	// (0x0004b7b9) grid_wheel_folder_pane_ParamLimits

0xc726,	// (0x0004b7b9) grid_wheel_folder_pane

0xc73c,	// (0x0004b7cf) list_wheel_apps_pane_ParamLimits

0xc73c,	// (0x0004b7cf) list_wheel_apps_pane

0xc74d,	// (0x0004b7e0) main_apps_wheel_pane_g1_ParamLimits

0xc74d,	// (0x0004b7e0) main_apps_wheel_pane_g1

0xc761,	// (0x0004b7f4) main_apps_wheel_pane_g2_ParamLimits

0xc761,	// (0x0004b7f4) main_apps_wheel_pane_g2

0x0001,

0xfad1,	// (0x0004eb64) main_apps_wheel_pane_g_ParamLimits

0xfad1,	// (0x0004eb64) main_apps_wheel_pane_g

0xc779,	// (0x0004b80c) main_apps_wheel_pane_t1_ParamLimits

0xc779,	// (0x0004b80c) main_apps_wheel_pane_t1

0xc79c,	// (0x0004b82f) list_wheel_apps_pane_g1

0xc7a4,	// (0x0004b837) list_wheel_apps_pane_g2

0xc7ac,	// (0x0004b83f) list_wheel_apps_pane_g3

0xc7b6,	// (0x0004b849) list_wheel_apps_pane_g4

0xc7c0,	// (0x0004b853) list_wheel_apps_pane_g5

0x0004,

0xfad6,	// (0x0004eb69) list_wheel_apps_pane_g

0x4e6f,	// (0x00043f02) navi_icon_text_pane

0xb6a8,	// (0x0004a73b) aid_fill_nsta

0x6f2d,	// (0x00045fc0) navi_icon_text_pane_g1

0x6f39,	// (0x00045fcc) navi_icon_text_pane_t1

0x4d69,	// (0x00043dfc) list_set_graphic_pane_t1_ParamLimits

0x4d69,	// (0x00043dfc) list_set_graphic_pane_t1

0x5e53,	// (0x00044ee6) popup_midp_note_alarm_window_t6_ParamLimits

0x5e53,	// (0x00044ee6) popup_midp_note_alarm_window_t6

0x5e65,	// (0x00044ef8) popup_midp_note_alarm_window_t7_ParamLimits

0x5e65,	// (0x00044ef8) popup_midp_note_alarm_window_t7

0x5e77,	// (0x00044f0a) popup_midp_note_alarm_window_t8_ParamLimits

0x5e77,	// (0x00044f0a) popup_midp_note_alarm_window_t8

0x5e89,	// (0x00044f1c) popup_midp_note_alarm_window_t9_ParamLimits

0x5e89,	// (0x00044f1c) popup_midp_note_alarm_window_t9

0x5e9b,	// (0x00044f2e) popup_midp_note_alarm_window_t10_ParamLimits

0x5e9b,	// (0x00044f2e) popup_midp_note_alarm_window_t10

0x5ead,	// (0x00044f40) popup_midp_note_alarm_window_t11_ParamLimits

0x5ead,	// (0x00044f40) popup_midp_note_alarm_window_t11

0x5ebf,	// (0x00044f52) scroll_pane_cp17_ParamLimits

0x5ebf,	// (0x00044f52) scroll_pane_cp17

0x9cd3,	// (0x00048d66) volume_small_pane_cp_g1

0xa00a,	// (0x0004909d) volume_small_pane_cp_g2

0xa013,	// (0x000490a6) volume_small_pane_cp_g3

0x9ce5,	// (0x00048d78) volume_small_pane_cp_g4

0xa01c,	// (0x000490af) volume_small_pane_cp_g5

0x9fdd,	// (0x00049070) volume_small_pane_cp_g6

0x9cf7,	// (0x00048d8a) volume_small_pane_cp_g7

0xa025,	// (0x000490b8) volume_small_pane_cp_g8

0xa02e,	// (0x000490c1) volume_small_pane_cp_g9

0x9d09,	// (0x00048d9c) volume_small_pane_cp_g10

0x4ff5,	// (0x00044088) midp_ticker_pane_g1_ParamLimits

0x5001,	// (0x00044094) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x0004e7f6) midp_ticker_pane_g_ParamLimits

0x500d,	// (0x000440a0) midp_ticker_pane_t1_ParamLimits

0xb6be,	// (0x0004a751) aid_fill_nsta_2

0x5727,	// (0x000447ba) list_form2_midp_pane

0x6530,	// (0x000455c3) midp_editing_number_pane_ParamLimits

0x653f,	// (0x000455d2) midp_ticker_pane_ParamLimits

0x6f4b,	// (0x00045fde) form2_midp_field_pane

0x6f53,	// (0x00045fe6) scroll_pane_cp51

0x6f73,	// (0x00046006) form2_midp_button_pane_ParamLimits

0x6f73,	// (0x00046006) form2_midp_button_pane

0x6f85,	// (0x00046018) form2_midp_content_pane_ParamLimits

0x6f85,	// (0x00046018) form2_midp_content_pane

0x6f9f,	// (0x00046032) form2_midp_field_choice_group_pane

0x6fa7,	// (0x0004603a) form2_midp_field_pane_g1

0x6faf,	// (0x00046042) form2_midp_field_pane_g2

0x6fb7,	// (0x0004604a) form2_midp_field_pane_g3

0x6fbf,	// (0x00046052) form2_midp_field_pane_g4

0x0003,

0xfafb,	// (0x0004eb8e) form2_midp_field_pane_g

0x6fc7,	// (0x0004605a) form2_midp_gauge_slider_pane

0x6fcf,	// (0x00046062) form2_midp_gauge_wait_pane

0x6fd7,	// (0x0004606a) form2_midp_image_pane_ParamLimits

0x6fd7,	// (0x0004606a) form2_midp_image_pane

0x6ff2,	// (0x00046085) form2_midp_label_pane_ParamLimits

0x6ff2,	// (0x00046085) form2_midp_label_pane

0xc7ff,	// (0x0004b892) form2_midp_label_pane_cp_ParamLimits

0xc7ff,	// (0x0004b892) form2_midp_label_pane_cp

0x700b,	// (0x0004609e) form2_midp_string_pane_ParamLimits

0x700b,	// (0x0004609e) form2_midp_string_pane

0xc121,	// (0x0004b1b4) form2_midp_text_pane_ParamLimits

0xc121,	// (0x0004b1b4) form2_midp_text_pane

0x701d,	// (0x000460b0) form2_midp_time_pane

0x702d,	// (0x000460c0) input_focus_pane_cp51_ParamLimits

0x702d,	// (0x000460c0) input_focus_pane_cp51

0x7045,	// (0x000460d8) form2_midp_label_pane_t1_ParamLimits

0x7045,	// (0x000460d8) form2_midp_label_pane_t1

0xc13c,	// (0x0004b1cf) form2_mdip_text_pane_t1_ParamLimits

0xc13c,	// (0x0004b1cf) form2_mdip_text_pane_t1

0xc158,	// (0x0004b1eb) form2_midp_time_pane_t1

0x708d,	// (0x00046120) form2_midp_gauge_slider_pane_t1

0xc820,	// (0x0004b8b3) form2_midp_gauge_slider_pane_t2

0xc832,	// (0x0004b8c5) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb04,	// (0x0004eb97) form2_midp_gauge_slider_pane_t

0x709f,	// (0x00046132) form2_midp_slider_pane

0x70ab,	// (0x0004613e) form2_midp_gauge_wait_pane_t1

0x70b9,	// (0x0004614c) form2_midp_wait_pane_ParamLimits

0x70b9,	// (0x0004614c) form2_midp_wait_pane

0xc844,	// (0x0004b8d7) list_single_2graphic_pane_cp4_ParamLimits

0xc844,	// (0x0004b8d7) list_single_2graphic_pane_cp4

0xbabf,	// (0x0004ab52) list_single_midp_graphic_pane_cp_ParamLimits

0xbabf,	// (0x0004ab52) list_single_midp_graphic_pane_cp

0x389b,	// (0x0004292e) list_highlight_pane_cp20

0x70e5,	// (0x00046178) list_single_2graphic_pane_g1_cp4

0x6878,	// (0x0004590b) list_single_2graphic_pane_g2_cp4

0x70ed,	// (0x00046180) list_single_2graphic_pane_t1_cp4

0x38f7,	// (0x0004298a) list_highlight_pane_cp21

0x70fc,	// (0x0004618f) list_single_midp_graphic_pane_g4_cp

0x710b,	// (0x0004619e) list_single_midp_graphic_pane_t1_cp

0xc872,	// (0x0004b905) form2_mdip_string_pane_t1_ParamLimits

0xc872,	// (0x0004b905) form2_mdip_string_pane_t1

0x389b,	// (0x0004292e) bg_wml_button_pane_cp2

0x3891,	// (0x00042924) form2_midp_image_pane_g1

0xb17e,	// (0x0004a211) list_double_large_graphic_pane_g5_ParamLimits

0xb17e,	// (0x0004a211) list_double_large_graphic_pane_g5

0xb310,	// (0x0004a3a3) midp_form_pane_ParamLimits

0x38f7,	// (0x0004298a) main_apps_wheel_pane_ParamLimits

0x9987,	// (0x00048a1a) popup_preview_window_ParamLimits

0x9987,	// (0x00048a1a) popup_preview_window

0x9b3e,	// (0x00048bd1) popup_touch_info_window_ParamLimits

0x9b3e,	// (0x00048bd1) popup_touch_info_window

0x9b5c,	// (0x00048bef) popup_touch_menu_window_ParamLimits

0x9b5c,	// (0x00048bef) popup_touch_menu_window

0x3887,	// (0x0004291a) bg_popup_sub_pane_cp6

0x7120,	// (0x000461b3) list_touch_menu_pane

0x7128,	// (0x000461bb) list_single_touch_menu_pane_ParamLimits

0x7128,	// (0x000461bb) list_single_touch_menu_pane

0x713c,	// (0x000461cf) list_single_touch_menu_pane_t1

0x38f7,	// (0x0004298a) bg_popup_sub_pane_cp7_ParamLimits

0x38f7,	// (0x0004298a) bg_popup_sub_pane_cp7

0x714a,	// (0x000461dd) heading_sub_pane

0x7152,	// (0x000461e5) list_touch_info_pane_ParamLimits

0x7152,	// (0x000461e5) list_touch_info_pane

0x7161,	// (0x000461f4) list_single_touch_info_pane_ParamLimits

0x7161,	// (0x000461f4) list_single_touch_info_pane

0x7173,	// (0x00046206) list_single_touch_info_pane_t1

0x7181,	// (0x00046214) list_single_touch_info_pane_t2

0x0001,

0xfb12,	// (0x0004eba5) list_single_touch_info_pane_t

0x4fcb,	// (0x0004405e) bg_popup_heading_pane_cp

0x718f,	// (0x00046222) heading_sub_pane_t1

0x5485,	// (0x00044518) bg_popup_preview_window_pane_cp_ParamLimits

0x5485,	// (0x00044518) bg_popup_preview_window_pane_cp

0x714a,	// (0x000461dd) heading_preview_pane

0x7152,	// (0x000461e5) list_preview_pane_ParamLimits

0x7152,	// (0x000461e5) list_preview_pane

0x719d,	// (0x00046230) popup_preview_window_g1

0x7161,	// (0x000461f4) list_single_preview_pane_ParamLimits

0x7161,	// (0x000461f4) list_single_preview_pane

0x71a5,	// (0x00046238) list_single_preview_pane_g1

0x71ad,	// (0x00046240) list_single_preview_pane_t1

0x7173,	// (0x00046206) list_single_preview_pane_t2

0x0001,

0xfb17,	// (0x0004ebaa) list_single_preview_pane_t

0x71bb,	// (0x0004624e) bg_popup_heading_pane_cp2_ParamLimits

0x71bb,	// (0x0004624e) bg_popup_heading_pane_cp2

0x71d1,	// (0x00046264) heading_preview_pane_g1

0x71d9,	// (0x0004626c) heading_preview_pane_t1_ParamLimits

0x71d9,	// (0x0004626c) heading_preview_pane_t1

0x394a,	// (0x000429dd) soft_indicator_pane_t1_ParamLimits

0x3eb1,	// (0x00042f44) scroll_pane_ParamLimits

0x4965,	// (0x000439f8) scroll_sc2_left_pane

0x495c,	// (0x000439ef) scroll_sc2_right_pane

0x4984,	// (0x00043a17) scroll_bg_pane_g1_ParamLimits

0x4999,	// (0x00043a2c) scroll_bg_pane_g2_ParamLimits

0x49b1,	// (0x00043a44) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x0004e781) scroll_bg_pane_g_ParamLimits

0x4984,	// (0x00043a17) scroll_handle_pane_g1_ParamLimits

0x49d3,	// (0x00043a66) scroll_handle_pane_g2_ParamLimits

0x49b1,	// (0x00043a44) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x0004e788) scroll_handle_pane_g_ParamLimits

0x960e,	// (0x000486a1) popup_choice_list_window_ParamLimits

0x960e,	// (0x000486a1) popup_choice_list_window

0x5349,	// (0x000443dc) choice_list_pane

0x53dd,	// (0x00044470) cell_toolbar_pane_t1

0x5405,	// (0x00044498) toolbar_button_pane_ParamLimits

0x62a7,	// (0x0004533a) ai_gene_pane_1_t2_ParamLimits

0x62a7,	// (0x0004533a) ai_gene_pane_1_t2

0x0001,

0xf918,	// (0x0004e9ab) ai_gene_pane_1_t_ParamLimits

0xf918,	// (0x0004e9ab) ai_gene_pane_1_t

0x71f6,	// (0x00046289) scroll_sc2_left_pane_g1

0x71f6,	// (0x00046289) scroll_sc2_right_pane_g1

0x475f,	// (0x000437f2) bg_popup_sub_pane_cp10

0x7200,	// (0x00046293) list_choice_list_pane

0x7219,	// (0x000462ac) list_single_choice_list_pane_ParamLimits

0x7219,	// (0x000462ac) list_single_choice_list_pane

0x722c,	// (0x000462bf) list_single_choice_list_pane_g1

0x474a,	// (0x000437dd) list_single_choice_list_pane_t1_ParamLimits

0x474a,	// (0x000437dd) list_single_choice_list_pane_t1

0x7234,	// (0x000462c7) choice_list_pane_g1

0x723c,	// (0x000462cf) choice_list_pane_t1

0x3887,	// (0x0004291a) input_focus_pane_cp11

0x48d1,	// (0x00043964) title_pane_stacon_g2_ParamLimits

0x48d1,	// (0x00043964) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x0004e767) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0004e767) title_pane_stacon_g

0x4fcb,	// (0x0004405e) cursor_press_pane

0x96b6,	// (0x00048749) popup_fep_hwr_window_ParamLimits

0x96b6,	// (0x00048749) popup_fep_hwr_window

0x972e,	// (0x000487c1) popup_fep_vkb_window_ParamLimits

0x972e,	// (0x000487c1) popup_fep_vkb_window

0x724a,	// (0x000462dd) cursor_press_pane_g1

0x0002,

0xfb40,	// (0x0004ebd3) fep_vkb_side_pane_g_ParamLimits

0xa070,	// (0x00049103) fep_hwr_candidate_pane_ParamLimits

0xa070,	// (0x00049103) fep_hwr_candidate_pane

0xa09a,	// (0x0004912d) fep_hwr_side_pane_ParamLimits

0xa09a,	// (0x0004912d) fep_hwr_side_pane

0xa0ba,	// (0x0004914d) fep_hwr_top_pane_ParamLimits

0xa0ba,	// (0x0004914d) fep_hwr_top_pane

0xa0d2,	// (0x00049165) fep_hwr_write_pane_ParamLimits

0xa0d2,	// (0x00049165) fep_hwr_write_pane

0xfb40,	// (0x0004ebd3) fep_vkb_side_pane_g

0x7264,	// (0x000462f7) fep_hwr_top_pane_g1

0x7252,	// (0x000462e5) fep_hwr_top_pane_g2

0xa10c,	// (0x0004919f) fep_hwr_top_pane_g3

0x0002,

0xfb1c,	// (0x0004ebaf) fep_hwr_top_pane_g

0xa121,	// (0x000491b4) fep_hwr_top_text_pane

0x4b29,	// (0x00043bbc) fep_hwr_top_text_pane_g1

0x729a,	// (0x0004632d) fep_hwr_top_text_pane_t1

0xa217,	// (0x000492aa) fep_hwr_candidate_pane_g1

0x73c5,	// (0x00046458) fep_vkb_keypad_pane_g3_ParamLimits

0x73c5,	// (0x00046458) fep_vkb_keypad_pane_g3

0x73ed,	// (0x00046480) fep_vkb_keypad_pane_g4_ParamLimits

0x73ed,	// (0x00046480) fep_vkb_keypad_pane_g4

0x745c,	// (0x000464ef) fep_vkb_bottom_pane_g2_ParamLimits

0x745c,	// (0x000464ef) fep_vkb_bottom_pane_g2

0x0001,

0xfb47,	// (0x0004ebda) fep_vkb_bottom_pane_g_ParamLimits

0xfb47,	// (0x0004ebda) fep_vkb_bottom_pane_g

0x71f6,	// (0x00046289) cell_vkb_side_pane_g2

0x0001,

0xfb51,	// (0x0004ebe4) cell_vkb_side_pane_g

0x74a0,	// (0x00046533) cell_vkb_side_pane_t1

0x74ae,	// (0x00046541) cell_vkb_side_pane_t1_copy1

0x71f6,	// (0x00046289) bg_fep_vkb_candidate_pane_g2

0x7584,	// (0x00046617) cell_vkb_candidate_pane_ParamLimits

0x72a8,	// (0x0004633b) aid_size_cell_vkb_ParamLimits

0x72a8,	// (0x0004633b) aid_size_cell_vkb

0x7584,	// (0x00046617) cell_vkb_candidate_pane

0xa23e,	// (0x000492d1) bg_popup_fep_shadow_pane_g1

0xc9a7,	// (0x0004ba3a) fep_vkb_bottom_pane_ParamLimits

0xc9a7,	// (0x0004ba3a) fep_vkb_bottom_pane

0x7333,	// (0x000463c6) fep_vkb_candidate_pane_ParamLimits

0x7333,	// (0x000463c6) fep_vkb_candidate_pane

0xc9cc,	// (0x0004ba5f) fep_vkb_keypad_pane_ParamLimits

0xc9cc,	// (0x0004ba5f) fep_vkb_keypad_pane

0xca01,	// (0x0004ba94) fep_vkb_side_pane_ParamLimits

0xca01,	// (0x0004ba94) fep_vkb_side_pane

0xca3d,	// (0x0004bad0) fep_vkb_top_pane_ParamLimits

0xca3d,	// (0x0004bad0) fep_vkb_top_pane

0x7359,	// (0x000463ec) fep_vkb_top_pane_g1_ParamLimits

0x7359,	// (0x000463ec) fep_vkb_top_pane_g1

0x7368,	// (0x000463fb) fep_vkb_top_pane_g2_ParamLimits

0x7368,	// (0x000463fb) fep_vkb_top_pane_g2

0x7377,	// (0x0004640a) fep_vkb_top_pane_g3_ParamLimits

0x7377,	// (0x0004640a) fep_vkb_top_pane_g3

0x0003,

0xfb37,	// (0x0004ebca) fep_vkb_top_pane_g_ParamLimits

0xfb37,	// (0x0004ebca) fep_vkb_top_pane_g

0x7395,	// (0x00046428) fep_vkb_top_text_pane_ParamLimits

0x7395,	// (0x00046428) fep_vkb_top_text_pane

0xca72,	// (0x0004bb05) fep_vkb_side_pane_g1_ParamLimits

0xca72,	// (0x0004bb05) fep_vkb_side_pane_g1

0x73b4,	// (0x00046447) grid_vkb_side_pane_ParamLimits

0x73b4,	// (0x00046447) grid_vkb_side_pane

0xa246,	// (0x000492d9) bg_popup_fep_shadow_pane_g2

0xa24f,	// (0x000492e2) bg_popup_fep_shadow_pane_g3

0xa257,	// (0x000492ea) bg_popup_fep_shadow_pane_g4

0xa260,	// (0x000492f3) bg_popup_fep_shadow_pane_g5

0xa26a,	// (0x000492fd) bg_popup_fep_shadow_pane_g6

0xa272,	// (0x00049305) bg_popup_fep_shadow_pane_g7

0x466d,	// (0x00043700) bg_popup_fep_shadow_pane_g8

0x740b,	// (0x0004649e) grid_vkb_keypad_number_pane_ParamLimits

0x740b,	// (0x0004649e) grid_vkb_keypad_number_pane

0x741b,	// (0x000464ae) grid_vkb_keypad_pane_ParamLimits

0x741b,	// (0x000464ae) grid_vkb_keypad_pane

0x7441,	// (0x000464d4) fep_vkb_bottom_pane_g1_ParamLimits

0x7441,	// (0x000464d4) fep_vkb_bottom_pane_g1

0x746a,	// (0x000464fd) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x746a,	// (0x000464fd) grid_vkb_keypad_bottom_left_pane

0x747f,	// (0x00046512) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x747f,	// (0x00046512) grid_vkb_keypad_bottom_right_pane

0x7494,	// (0x00046527) fep_vkb_top_text_pane_g1

0xcabc,	// (0x0004bb4f) fep_vkb_top_text_pane_t1

0xcad1,	// (0x0004bb64) cell_vkb_side_pane_ParamLimits

0xcad1,	// (0x0004bb64) cell_vkb_side_pane

0x71f6,	// (0x00046289) cell_vkb_side_pane_g1

0x74bc,	// (0x0004654f) cell_vkb_keypad_pane_ParamLimits

0x74bc,	// (0x0004654f) cell_vkb_keypad_pane

0x7531,	// (0x000465c4) cell_vkb_keypad_pane_g1

0x0008,

0xfb64,	// (0x0004ebf7) bg_popup_fep_shadow_pane_g

0xa284,	// (0x00049317) cell_hwr_side_pane_g1

0xa284,	// (0x00049317) cell_hwr_side_pane_g2

0x753b,	// (0x000465ce) cell_vkb_keypad_pane_t1

0xcaf4,	// (0x0004bb87) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcaf4,	// (0x0004bb87) cell_vkb_keypad_bottom_left_pane

0xcb11,	// (0x0004bba4) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcb11,	// (0x0004bba4) cell_vkb_keypad_bottom_right_pane

0x71f6,	// (0x00046289) cell_vkb_keypad_bottom_left_pane_g1

0x71f6,	// (0x00046289) cell_vkb_keypad_bottom_right_pane_g1

0x7549,	// (0x000465dc) cell_vkb_keypad_number_pane_ParamLimits

0x7549,	// (0x000465dc) cell_vkb_keypad_number_pane

0x7568,	// (0x000465fb) cell_vkb_keypad_number_pane_g1

0x7572,	// (0x00046605) cell_vkb_keypad_number_pane_g2

0x757b,	// (0x0004660e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb56,	// (0x0004ebe9) cell_vkb_keypad_number_pane_g

0x753b,	// (0x000465ce) cell_vkb_keypad_number_pane_t1

0x759f,	// (0x00046632) fep_vkb_candidate_pane_g1

0x0001,

0xfb77,	// (0x0004ec0a) cell_hwr_side_pane_g

0x75b8,	// (0x0004664b) cell_hwr_side_pane_t1

0xa28e,	// (0x00049321) cell_hwr_side_pane_t1_copy1

0xa29c,	// (0x0004932f) cell_hwr_candidate_pane_g1

0xa2cb,	// (0x0004935e) cell_hwr_candidate_pane_t1

0x71f6,	// (0x00046289) cell_vkb_candidate_pane_g2

0x763e,	// (0x000466d1) cell_vkb_candidate_pane_t1

0xa037,	// (0x000490ca) bg_popup_fep_shadow_pane_ParamLimits

0xa037,	// (0x000490ca) bg_popup_fep_shadow_pane

0xa0ec,	// (0x0004917f) bg_fep_hwr_top_pane_g4

0x7276,	// (0x00046309) bg_hwr_side_pane_g1_ParamLimits

0x7276,	// (0x00046309) bg_hwr_side_pane_g1

0xa15d,	// (0x000491f0) cell_hwr_side_pane_ParamLimits

0xa15d,	// (0x000491f0) cell_hwr_side_pane

0xa198,	// (0x0004922b) fep_hwr_write_pane_g1_ParamLimits

0xa198,	// (0x0004922b) fep_hwr_write_pane_g1

0xa1a5,	// (0x00049238) fep_hwr_write_pane_g2_ParamLimits

0xa1a5,	// (0x00049238) fep_hwr_write_pane_g2

0xa1b2,	// (0x00049245) fep_hwr_write_pane_g3_ParamLimits

0xa1b2,	// (0x00049245) fep_hwr_write_pane_g3

0xa1c0,	// (0x00049253) fep_hwr_write_pane_g4_ParamLimits

0xa1c0,	// (0x00049253) fep_hwr_write_pane_g4

0x0005,

0xfb23,	// (0x0004ebb6) fep_hwr_write_pane_g_ParamLimits

0xfb23,	// (0x0004ebb6) fep_hwr_write_pane_g

0xa0ec,	// (0x0004917f) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xa0ec,	// (0x0004917f) bg_fep_hwr_candidate_pane_g2

0xa1d5,	// (0x00049268) cell_hwr_candidate_pane_ParamLimits

0xa1d5,	// (0x00049268) cell_hwr_candidate_pane

0xa217,	// (0x000492aa) fep_hwr_candidate_pane_g1_ParamLimits

0x72d6,	// (0x00046369) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x72d6,	// (0x00046369) bg_popup_fep_shadow_pane_cp2

0x7387,	// (0x0004641a) fep_vkb_top_pane_g4_ParamLimits

0x7387,	// (0x0004641a) fep_vkb_top_pane_g4

0x73a6,	// (0x00046439) fep_vkb_side_pane_g2_ParamLimits

0x73a6,	// (0x00046439) fep_vkb_side_pane_g2

0x8dc9,	// (0x00047e5c) list_setting_pane_t4_ParamLimits

0x8dc9,	// (0x00047e5c) list_setting_pane_t4

0x8e63,	// (0x00047ef6) list_setting_number_pane_t5_ParamLimits

0x8e63,	// (0x00047ef6) list_setting_number_pane_t5

0xb3c2,	// (0x0004a455) list_double_heading_pane_cp2_ParamLimits

0xb3c2,	// (0x0004a455) list_double_heading_pane_cp2

0x4608,	// (0x0004369b) list_double_heading_pane_g1_cp2_ParamLimits

0x4608,	// (0x0004369b) list_double_heading_pane_g1_cp2

0x4614,	// (0x000436a7) list_double_heading_pane_g2_cp2_ParamLimits

0x4614,	// (0x000436a7) list_double_heading_pane_g2_cp2

0x764c,	// (0x000466df) list_double_heading_pane_t1_cp2_ParamLimits

0x764c,	// (0x000466df) list_double_heading_pane_t1_cp2

0x7662,	// (0x000466f5) list_double_heading_pane_t2_cp2_ParamLimits

0x7662,	// (0x000466f5) list_double_heading_pane_t2_cp2

0x387f,	// (0x00042912) aid_value_unit2

0x8862,	// (0x000478f5) popup_preview_fixed_window

0x3a2a,	// (0x00042abd) bg_popup_preview_window_pane_cp02

0x7674,	// (0x00046707) list_preview_fixed_pane

0x76ba,	// (0x0004674d) list_empty_pane_fp_ParamLimits

0x76ba,	// (0x0004674d) list_empty_pane_fp

0x76ba,	// (0x0004674d) list_single_cale_day_pane_fp_ParamLimits

0x76ba,	// (0x0004674d) list_single_cale_day_pane_fp

0x76ba,	// (0x0004674d) list_single_graphic_heading_pane_fp_ParamLimits

0x76ba,	// (0x0004674d) list_single_graphic_heading_pane_fp

0x76ba,	// (0x0004674d) list_single_graphic_pane_fp_ParamLimits

0x76ba,	// (0x0004674d) list_single_graphic_pane_fp

0x76ba,	// (0x0004674d) list_single_heading_pane_fp_ParamLimits

0x76ba,	// (0x0004674d) list_single_heading_pane_fp

0x76ba,	// (0x0004674d) list_single_pane_fp_ParamLimits

0x76ba,	// (0x0004674d) list_single_pane_fp

0x76d0,	// (0x00046763) list_single_pane_fp_g1_ParamLimits

0x76d0,	// (0x00046763) list_single_pane_fp_g1

0x4608,	// (0x0004369b) list_single_pane_fp_g2_ParamLimits

0x4608,	// (0x0004369b) list_single_pane_fp_g2

0x4614,	// (0x000436a7) list_single_pane_fp_g3_ParamLimits

0x4614,	// (0x000436a7) list_single_pane_fp_g3

0x76dc,	// (0x0004676f) list_single_pane_fp_g4_ParamLimits

0x76dc,	// (0x0004676f) list_single_pane_fp_g4

0x0003,

0xfb8a,	// (0x0004ec1d) list_single_pane_fp_g_ParamLimits

0xfb8a,	// (0x0004ec1d) list_single_pane_fp_g

0xc16b,	// (0x0004b1fe) list_single_pane_fp_t1_ParamLimits

0xc16b,	// (0x0004b1fe) list_single_pane_fp_t1

0xc182,	// (0x0004b215) list_single_graphic_pane_fp_g1_ParamLimits

0xc182,	// (0x0004b215) list_single_graphic_pane_fp_g1

0x76d0,	// (0x00046763) list_single_graphic_pane_fp_g2_ParamLimits

0x76d0,	// (0x00046763) list_single_graphic_pane_fp_g2

0x4608,	// (0x0004369b) list_single_graphic_pane_fp_g3_ParamLimits

0x4608,	// (0x0004369b) list_single_graphic_pane_fp_g3

0x4614,	// (0x000436a7) list_single_graphic_pane_fp_g4_ParamLimits

0x4614,	// (0x000436a7) list_single_graphic_pane_fp_g4

0x76dc,	// (0x0004676f) list_single_graphic_pane_fp_g5_ParamLimits

0x76dc,	// (0x0004676f) list_single_graphic_pane_fp_g5

0x0004,

0xfb93,	// (0x0004ec26) list_single_graphic_pane_fp_g_ParamLimits

0xfb93,	// (0x0004ec26) list_single_graphic_pane_fp_g

0xc18e,	// (0x0004b221) list_single_graphic_pane_fp_t1_ParamLimits

0xc18e,	// (0x0004b221) list_single_graphic_pane_fp_t1

0xc182,	// (0x0004b215) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc182,	// (0x0004b215) list_single_graphic_heading_pane_fp_g1

0x76d0,	// (0x00046763) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x76d0,	// (0x00046763) list_single_graphic_heading_pane_fp_g2

0x4608,	// (0x0004369b) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4608,	// (0x0004369b) list_single_graphic_heading_pane_fp_g3

0x4614,	// (0x000436a7) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4614,	// (0x000436a7) list_single_graphic_heading_pane_fp_g4

0x76dc,	// (0x0004676f) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x76dc,	// (0x0004676f) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb93,	// (0x0004ec26) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb93,	// (0x0004ec26) list_single_graphic_heading_pane_fp_g

0xc1a4,	// (0x0004b237) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc1a4,	// (0x0004b237) list_single_graphic_heading_pane_fp_t1

0xc1ba,	// (0x0004b24d) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc1ba,	// (0x0004b24d) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9e,	// (0x0004ec31) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9e,	// (0x0004ec31) list_single_graphic_heading_pane_fp_t

0xc1cc,	// (0x0004b25f) list_single_cale_day_pane_fp_g1_ParamLimits

0xc1cc,	// (0x0004b25f) list_single_cale_day_pane_fp_g1

0x76e8,	// (0x0004677b) list_single_cale_day_pane_fp_g2_ParamLimits

0x76e8,	// (0x0004677b) list_single_cale_day_pane_fp_g2

0xcb4a,	// (0x0004bbdd) list_single_cale_day_pane_fp_g3_ParamLimits

0xcb4a,	// (0x0004bbdd) list_single_cale_day_pane_fp_g3

0xcb72,	// (0x0004bc05) list_single_cale_day_pane_fp_g4_ParamLimits

0xcb72,	// (0x0004bc05) list_single_cale_day_pane_fp_g4

0xcb96,	// (0x0004bc29) list_single_cale_day_pane_fp_g5_ParamLimits

0xcb96,	// (0x0004bc29) list_single_cale_day_pane_fp_g5

0x0004,

0xfba3,	// (0x0004ec36) list_single_cale_day_pane_fp_g_ParamLimits

0xfba3,	// (0x0004ec36) list_single_cale_day_pane_fp_g

0xc204,	// (0x0004b297) list_single_cale_day_pane_fp_t1_ParamLimits

0xc204,	// (0x0004b297) list_single_cale_day_pane_fp_t1

0xc22a,	// (0x0004b2bd) list_single_cale_day_pane_fp_t2_ParamLimits

0xc22a,	// (0x0004b2bd) list_single_cale_day_pane_fp_t2

0xc243,	// (0x0004b2d6) list_single_cale_day_pane_fp_t3_ParamLimits

0xc243,	// (0x0004b2d6) list_single_cale_day_pane_fp_t3

0x0002,

0xfbae,	// (0x0004ec41) list_single_cale_day_pane_fp_t_ParamLimits

0xfbae,	// (0x0004ec41) list_single_cale_day_pane_fp_t

0x76d0,	// (0x00046763) list_empty_pane_fp_g1_ParamLimits

0x76d0,	// (0x00046763) list_empty_pane_fp_g1

0xc25c,	// (0x0004b2ef) list_empty_pane_fp_t1

0xc26a,	// (0x0004b2fd) list_empty_pane_fp_t2

0x0001,

0xfbb5,	// (0x0004ec48) list_empty_pane_fp_t

0x76d0,	// (0x00046763) list_single_heading_pane_fp_g1_ParamLimits

0x76d0,	// (0x00046763) list_single_heading_pane_fp_g1

0x4608,	// (0x0004369b) list_single_heading_pane_fp_g2_ParamLimits

0x4608,	// (0x0004369b) list_single_heading_pane_fp_g2

0x4614,	// (0x000436a7) list_single_heading_pane_fp_g3_ParamLimits

0x4614,	// (0x000436a7) list_single_heading_pane_fp_g3

0x0002,

0xfbba,	// (0x0004ec4d) list_single_heading_pane_fp_g_ParamLimits

0xfbba,	// (0x0004ec4d) list_single_heading_pane_fp_g

0xc278,	// (0x0004b30b) list_single_heading_pane_fp_t1_ParamLimits

0xc278,	// (0x0004b30b) list_single_heading_pane_fp_t1

0xc28a,	// (0x0004b31d) list_single_heading_pane_fp_t2_ParamLimits

0xc28a,	// (0x0004b31d) list_single_heading_pane_fp_t2

0x0001,

0xfbc1,	// (0x0004ec54) list_single_heading_pane_fp_t_ParamLimits

0xfbc1,	// (0x0004ec54) list_single_heading_pane_fp_t

0x476b,	// (0x000437fe) aid_size_cell_fast

0x3a0d,	// (0x00042aa0) soft_indicator_pane_cp1_t1

0x47a5,	// (0x00043838) cell_app_pane_cp2_ParamLimits

0x47a5,	// (0x00043838) cell_app_pane_cp2

0xa059,	// (0x000490ec) fep_hwr_candidate_drop_down_list_pane

0xa231,	// (0x000492c4) fep_hwr_candidate_pane_g3_ParamLimits

0xa231,	// (0x000492c4) fep_hwr_candidate_pane_g3

0x21e9,	// (0x0004127c) fep_hwr_candidate_pane_g4_ParamLimits

0x21e9,	// (0x0004127c) fep_hwr_candidate_pane_g4

0x0002,

0xfb30,	// (0x0004ebc3) fep_hwr_candidate_pane_g_ParamLimits

0xfb30,	// (0x0004ebc3) fep_hwr_candidate_pane_g

0x7322,	// (0x000463b5) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7322,	// (0x000463b5) fep_vkb_candidate_drop_down_list_pane

0x75a7,	// (0x0004663a) fep_vkb_candidate_pane_g3

0x75af,	// (0x00046642) fep_vkb_candidate_pane_g4

0x0002,

0xfb5d,	// (0x0004ebf0) fep_vkb_candidate_pane_g

0xa29c,	// (0x0004932f) cell_hwr_candidate_pane_g1_ParamLimits

0xa2aa,	// (0x0004933d) cell_hwr_candidate_pane_g3_ParamLimits

0xa2aa,	// (0x0004933d) cell_hwr_candidate_pane_g3

0xdb75,	// (0x0004cc08) cell_hwr_candidate_pane_g4_ParamLimits

0xdb75,	// (0x0004cc08) cell_hwr_candidate_pane_g4

0x0002,

0xfb7c,	// (0x0004ec0f) cell_hwr_candidate_pane_g_ParamLimits

0xfb7c,	// (0x0004ec0f) cell_hwr_candidate_pane_g

0x7608,	// (0x0004669b) cell_vkb_candidate_pane_g3_ParamLimits

0x7608,	// (0x0004669b) cell_vkb_candidate_pane_g3

0x7623,	// (0x000466b6) cell_vkb_candidate_pane_g4_ParamLimits

0x7623,	// (0x000466b6) cell_vkb_candidate_pane_g4

0x76f4,	// (0x00046787) cell_app_pane_cp2_g1_ParamLimits

0x76f4,	// (0x00046787) cell_app_pane_cp2_g1

0x7712,	// (0x000467a5) cell_app_pane_cp2_g2_ParamLimits

0x7712,	// (0x000467a5) cell_app_pane_cp2_g2

0x0001,

0xfbc6,	// (0x0004ec59) cell_app_pane_cp2_g_ParamLimits

0xfbc6,	// (0x0004ec59) cell_app_pane_cp2_g

0x771e,	// (0x000467b1) cell_app_pane_cp2_t1_ParamLimits

0x771e,	// (0x000467b1) cell_app_pane_cp2_t1

0x45fa,	// (0x0004368d) grid_highlight_pane_cp1_ParamLimits

0x45fa,	// (0x0004368d) grid_highlight_pane_cp1

0xa2e9,	// (0x0004937c) cell_hwr_candidate_pane_cp1_ParamLimits

0xa2e9,	// (0x0004937c) cell_hwr_candidate_pane_cp1

0xa29c,	// (0x0004932f) fep_hwr_candidate_drop_down_list_pane_g1

0xa308,	// (0x0004939b) fep_hwr_candidate_drop_down_list_pane_g2

0xa315,	// (0x000493a8) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcb,	// (0x0004ec5e) fep_hwr_candidate_drop_down_list_pane_g

0xa322,	// (0x000493b5) fep_hwr_candidate_drop_down_list_scroll_pane

0xa32b,	// (0x000493be) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xa32b,	// (0x000493be) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xa338,	// (0x000493cb) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xa338,	// (0x000493cb) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xa345,	// (0x000493d8) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xa345,	// (0x000493d8) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xa352,	// (0x000493e5) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xa352,	// (0x000493e5) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xa36d,	// (0x00049400) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xa36d,	// (0x00049400) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xa388,	// (0x0004941b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xa388,	// (0x0004941b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xa3a3,	// (0x00049436) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xa3a3,	// (0x00049436) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xa3be,	// (0x00049451) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xa3be,	// (0x00049451) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x0004ec65) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x0004ec65) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x774a,	// (0x000467dd) cell_vkb_candidate_pane_cp1_ParamLimits

0x774a,	// (0x000467dd) cell_vkb_candidate_pane_cp1

0x7387,	// (0x0004641a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7387,	// (0x0004641a) fep_vkb_candidate_drop_down_list_pane_g1

0x7730,	// (0x000467c3) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7730,	// (0x000467c3) fep_vkb_candidate_drop_down_list_pane_g2

0x773d,	// (0x000467d0) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x773d,	// (0x000467d0) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe3,	// (0x0004ec76) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe3,	// (0x0004ec76) fep_vkb_candidate_drop_down_list_pane_g

0x776a,	// (0x000467fd) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x776a,	// (0x000467fd) fep_vkb_candidate_drop_down_list_scroll_pane

0x7777,	// (0x0004680a) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7777,	// (0x0004680a) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7784,	// (0x00046817) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7784,	// (0x00046817) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7790,	// (0x00046823) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7790,	// (0x00046823) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x75c6,	// (0x00046659) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x75c6,	// (0x00046659) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x75e7,	// (0x0004667a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x75e7,	// (0x0004667a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x779c,	// (0x0004682f) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x779c,	// (0x0004682f) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x77bd,	// (0x00046850) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x77bd,	// (0x00046850) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x77de,	// (0x00046871) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x77de,	// (0x00046871) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbea,	// (0x0004ec7d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbea,	// (0x0004ec7d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xae7c,	// (0x00049f0f) title_pane_g1_ParamLimits

0xae89,	// (0x00049f1c) title_pane_g2_ParamLimits

0xf554,	// (0x0004e5e7) title_pane_g_ParamLimits

0x4b21,	// (0x00043bb4) aid_call2_pane

0x4b19,	// (0x00043bac) aid_call_pane

0x4b29,	// (0x00043bbc) popup_clock_analogue_window_g1

0x4b29,	// (0x00043bbc) popup_clock_analogue_window_g2

0x91cc,	// (0x0004825f) popup_clock_analogue_window_g3

0x91d5,	// (0x00048268) popup_clock_analogue_window_g4

0x3891,	// (0x00042924) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x0004e796) popup_clock_analogue_window_g

0x91dd,	// (0x00048270) popup_clock_analogue_window_t1

0x91eb,	// (0x0004827e) clock_digital_number_pane_ParamLimits

0x91eb,	// (0x0004827e) clock_digital_number_pane

0x91f7,	// (0x0004828a) clock_digital_number_pane_cp02_ParamLimits

0x91f7,	// (0x0004828a) clock_digital_number_pane_cp02

0x9203,	// (0x00048296) clock_digital_number_pane_cp03_ParamLimits

0x9203,	// (0x00048296) clock_digital_number_pane_cp03

0x920f,	// (0x000482a2) clock_digital_number_pane_cp04_ParamLimits

0x920f,	// (0x000482a2) clock_digital_number_pane_cp04

0x921b,	// (0x000482ae) clock_digital_separator_pane_ParamLimits

0x921b,	// (0x000482ae) clock_digital_separator_pane

0x9227,	// (0x000482ba) popup_clock_digital_window_t1_ParamLimits

0x9227,	// (0x000482ba) popup_clock_digital_window_t1

0x3891,	// (0x00042924) clock_digital_number_pane_g1

0x3891,	// (0x00042924) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x0004e7a1) clock_digital_number_pane_g

0x3891,	// (0x00042924) clock_digital_separator_pane_g1

0x3891,	// (0x00042924) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x0004e7a1) clock_digital_separator_pane_g

0xb6a8,	// (0x0004a73b) aid_fill_nsta_ParamLimits

0xb771,	// (0x0004a804) indicator_nsta_pane_ParamLimits

0x52f0,	// (0x00044383) popup_clock_analogue_window

0x52f0,	// (0x00044383) popup_clock_digital_window

0x38f7,	// (0x0004298a) grid_indicator_nsta_pane_ParamLimits

0x6e47,	// (0x00045eda) clock_nsta_pane_t2

0x0001,

0xfab0,	// (0x0004eb43) clock_nsta_pane_t

0x9190,	// (0x00048223) aid_size_max_handle

0x919a,	// (0x0004822d) aid_size_min_handle

0x4fcb,	// (0x0004405e) editor_scroll_pane

0x77f9,	// (0x0004688c) ex_editor_pane

0x4726,	// (0x000437b9) scroll_pane_cp13

0x3edd,	// (0x00042f70) scroll_pane_cp14

0x4b58,	// (0x00043beb) scroll_pane_cp36

0xb3d6,	// (0x0004a469) list_single_graphic_hl_pane_cp2_ParamLimits

0xb3d6,	// (0x0004a469) list_single_graphic_hl_pane_cp2

0xc52d,	// (0x0004b5c0) list_single_graphic_hl_pane_ParamLimits

0xc52d,	// (0x0004b5c0) list_single_graphic_hl_pane

0xc2a0,	// (0x0004b333) aid_size_min_hl_cp1

0x7801,	// (0x00046894) list_highlight_pane_cp34_ParamLimits

0x7801,	// (0x00046894) list_highlight_pane_cp34

0x7812,	// (0x000468a5) list_single_graphic_hl_pane_g1_ParamLimits

0x7812,	// (0x000468a5) list_single_graphic_hl_pane_g1

0xc2a9,	// (0x0004b33c) list_single_graphic_hl_pane_g2_ParamLimits

0xc2a9,	// (0x0004b33c) list_single_graphic_hl_pane_g2

0xc2a9,	// (0x0004b33c) list_single_graphic_hl_pane_g3_ParamLimits

0xc2a9,	// (0x0004b33c) list_single_graphic_hl_pane_g3

0xb110,	// (0x0004a1a3) list_single_graphic_hl_pane_g4_ParamLimits

0xb110,	// (0x0004a1a3) list_single_graphic_hl_pane_g4

0xcbba,	// (0x0004bc4d) list_single_graphic_hl_pane_g5_ParamLimits

0xcbba,	// (0x0004bc4d) list_single_graphic_hl_pane_g5

0x0004,

0xfbfb,	// (0x0004ec8e) list_single_graphic_hl_pane_g_ParamLimits

0xfbfb,	// (0x0004ec8e) list_single_graphic_hl_pane_g

0xc2b5,	// (0x0004b348) list_single_graphic_hl_pane_t1_ParamLimits

0xc2b5,	// (0x0004b348) list_single_graphic_hl_pane_t1

0x781f,	// (0x000468b2) aid_size_min_hl_cp2

0x7828,	// (0x000468bb) list_highlight_pane_cp34_cp2_ParamLimits

0x7828,	// (0x000468bb) list_highlight_pane_cp34_cp2

0x7812,	// (0x000468a5) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7812,	// (0x000468a5) list_single_graphic_hl_pane_g1_cp2

0x7835,	// (0x000468c8) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7835,	// (0x000468c8) list_single_graphic_hl_pane_g2_cp2

0xcbce,	// (0x0004bc61) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcbce,	// (0x0004bc61) list_single_graphic_hl_pane_g3_cp2

0x4f10,	// (0x00043fa3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4f10,	// (0x00043fa3) list_single_graphic_hl_pane_g4_cp2

0x7841,	// (0x000468d4) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7841,	// (0x000468d4) list_single_graphic_hl_pane_g5_cp2

0x94d2,	// (0x00048565) control_pane_g4_ParamLimits

0x94d2,	// (0x00048565) control_pane_g4

0x475f,	// (0x000437f2) bg_popup_sub_pane_cp10_ParamLimits

0x7200,	// (0x00046293) list_choice_list_pane_ParamLimits

0x720f,	// (0x000462a2) scroll_pane_cp23

0x3a2a,	// (0x00042abd) bg_popup_preview_window_pane_cp02_ParamLimits

0x7674,	// (0x00046707) list_preview_fixed_pane_ParamLimits

0x768a,	// (0x0004671d) list_preview_fixed_pane_cp_ParamLimits

0x768a,	// (0x0004671d) list_preview_fixed_pane_cp

0x7696,	// (0x00046729) popup_preview_fixed_window_g1_ParamLimits

0x7696,	// (0x00046729) popup_preview_fixed_window_g1

0x76a2,	// (0x00046735) popup_preview_fixed_window_g2_ParamLimits

0x76a2,	// (0x00046735) popup_preview_fixed_window_g2

0x0002,

0xfb83,	// (0x0004ec16) popup_preview_fixed_window_g_ParamLimits

0xfb83,	// (0x0004ec16) popup_preview_fixed_window_g

0x9104,	// (0x00048197) aid_navi_side_left_pane_ParamLimits

0x9119,	// (0x000481ac) aid_navi_side_right_pane_ParamLimits

0x9131,	// (0x000481c4) navi_icon_pane_stacon_ParamLimits

0x9145,	// (0x000481d8) navi_navi_pane_stacon_ParamLimits

0x9131,	// (0x000481c4) navi_text_pane_stacon_ParamLimits

0x8731,	// (0x000477c4) main_text_info_pane

0x786b,	// (0x000468fe) listscroll_text_info_pane

0x7873,	// (0x00046906) list_text_info_pane_ParamLimits

0x7873,	// (0x00046906) list_text_info_pane

0x7882,	// (0x00046915) scroll_pane_cp24_ParamLimits

0x7882,	// (0x00046915) scroll_pane_cp24

0xcbdc,	// (0x0004bc6f) list_text_info_pane_t1_ParamLimits

0xcbdc,	// (0x0004bc6f) list_text_info_pane_t1

0x962a,	// (0x000486bd) popup_fast_swap2_window_ParamLimits

0x962a,	// (0x000486bd) popup_fast_swap2_window

0x78a0,	// (0x00046933) aid_size_cell_fast2

0x3887,	// (0x0004291a) bg_popup_window_pane_cp17

0x5753,	// (0x000447e6) heading_pane_cp2

0x3c10,	// (0x00042ca3) listscroll_fast2_pane

0x78aa,	// (0x0004693d) grid_fast2_pane

0x78b4,	// (0x00046947) listscroll_fast2_pane_g1

0x78bc,	// (0x0004694f) listscroll_fast2_pane_g2

0x0001,

0xfc06,	// (0x0004ec99) listscroll_fast2_pane_g

0x4726,	// (0x000437b9) scroll_pane_cp26

0x78c6,	// (0x00046959) cell_fast2_pane_ParamLimits

0x78c6,	// (0x00046959) cell_fast2_pane

0x78db,	// (0x0004696e) cell_fast2_pane_g1

0x78e4,	// (0x00046977) cell_fast2_pane_g2

0x78ed,	// (0x00046980) cell_fast2_pane_g3

0x0002,

0xfc0b,	// (0x0004ec9e) cell_fast2_pane_g

0x3ca4,	// (0x00042d37) grid_highlight_pane_cp9

0x95f2,	// (0x00048685) main_eswt_pane_ParamLimits

0x95f2,	// (0x00048685) main_eswt_pane

0x7897,	// (0x0004692a) list_single_text_info_pane

0x78f5,	// (0x00046988) eswt_ctrl_button_pane

0x78f5,	// (0x00046988) eswt_ctrl_canvas_pane

0x78fd,	// (0x00046990) eswt_ctrl_combo_pane

0x78f5,	// (0x00046988) eswt_ctrl_default_pane

0x78f5,	// (0x00046988) eswt_ctrl_label_pane

0x7905,	// (0x00046998) eswt_ctrl_wait_pane

0x790d,	// (0x000469a0) eswt_shell_pane

0x3887,	// (0x0004291a) listscroll_eswt_app_pane

0x792d,	// (0x000469c0) popup_eswt_tasktip_window_ParamLimits

0x792d,	// (0x000469c0) popup_eswt_tasktip_window

0x5485,	// (0x00044518) bg_popup_window_pane_cp18

0x793e,	// (0x000469d1) eswt_control_pane_g1_ParamLimits

0x793e,	// (0x000469d1) eswt_control_pane_g1

0x794b,	// (0x000469de) eswt_control_pane_g2_ParamLimits

0x794b,	// (0x000469de) eswt_control_pane_g2

0x7958,	// (0x000469eb) eswt_control_pane_g3_ParamLimits

0x7958,	// (0x000469eb) eswt_control_pane_g3

0x7965,	// (0x000469f8) eswt_control_pane_g4_ParamLimits

0x7965,	// (0x000469f8) eswt_control_pane_g4

0x0003,

0xfc12,	// (0x0004eca5) eswt_control_pane_g_ParamLimits

0xfc12,	// (0x0004eca5) eswt_control_pane_g

0x45fa,	// (0x0004368d) bg_button_pane_ParamLimits

0x45fa,	// (0x0004368d) bg_button_pane

0x3cb9,	// (0x00042d4c) common_borders_pane_copy2_ParamLimits

0x3cb9,	// (0x00042d4c) common_borders_pane_copy2

0x7972,	// (0x00046a05) control_button_pane_g1_ParamLimits

0x7972,	// (0x00046a05) control_button_pane_g1

0x797e,	// (0x00046a11) control_button_pane_g2_ParamLimits

0x797e,	// (0x00046a11) control_button_pane_g2

0x798a,	// (0x00046a1d) control_button_pane_g3_ParamLimits

0x798a,	// (0x00046a1d) control_button_pane_g3

0x0002,

0xfc1b,	// (0x0004ecae) control_button_pane_g_ParamLimits

0xfc1b,	// (0x0004ecae) control_button_pane_g

0x799e,	// (0x00046a31) control_button_pane_t1

0x79ac,	// (0x00046a3f) control_button_pane_t2

0x0001,

0xfc22,	// (0x0004ecb5) control_button_pane_t

0x5411,	// (0x000444a4) bg_button_pane_g1

0x5419,	// (0x000444ac) bg_button_pane_g2

0x5421,	// (0x000444b4) bg_button_pane_g3

0x5429,	// (0x000444bc) bg_button_pane_g4

0x5431,	// (0x000444c4) bg_button_pane_g5

0x5439,	// (0x000444cc) bg_button_pane_g6

0x5441,	// (0x000444d4) bg_button_pane_g7

0x5449,	// (0x000444dc) bg_button_pane_g8

0x5451,	// (0x000444e4) bg_button_pane_g9

0x0008,

0xf86c,	// (0x0004e8ff) bg_button_pane_g

0x71bb,	// (0x0004624e) common_borders_pane_ParamLimits

0x71bb,	// (0x0004624e) common_borders_pane

0x793e,	// (0x000469d1) eswt_control_pane_g1_copy1_ParamLimits

0x793e,	// (0x000469d1) eswt_control_pane_g1_copy1

0x794b,	// (0x000469de) eswt_control_pane_g2_copy1_ParamLimits

0x794b,	// (0x000469de) eswt_control_pane_g2_copy1

0x7958,	// (0x000469eb) eswt_control_pane_g3_copy1_ParamLimits

0x7958,	// (0x000469eb) eswt_control_pane_g3_copy1

0x7965,	// (0x000469f8) eswt_control_pane_g4_copy1_ParamLimits

0x7965,	// (0x000469f8) eswt_control_pane_g4_copy1

0x71f6,	// (0x00046289) bg_eswt_ctrl_canvas_pane_g1

0x71bb,	// (0x0004624e) common_borders_pane_cp2_ParamLimits

0x71bb,	// (0x0004624e) common_borders_pane_cp2

0x71bb,	// (0x0004624e) common_borders_pane_cp3_ParamLimits

0x71bb,	// (0x0004624e) common_borders_pane_cp3

0x79ba,	// (0x00046a4d) separator_horizontal_pane

0x79c2,	// (0x00046a55) separator_vertical_pane

0x793e,	// (0x000469d1) eswt_control_pane_g1_copy2_ParamLimits

0x793e,	// (0x000469d1) eswt_control_pane_g1_copy2

0x794b,	// (0x000469de) eswt_control_pane_g2_copy2_ParamLimits

0x794b,	// (0x000469de) eswt_control_pane_g2_copy2

0x7958,	// (0x000469eb) eswt_control_pane_g3_copy2_ParamLimits

0x7958,	// (0x000469eb) eswt_control_pane_g3_copy2

0x7965,	// (0x000469f8) eswt_control_pane_g4_copy2_ParamLimits

0x7965,	// (0x000469f8) eswt_control_pane_g4_copy2

0x3887,	// (0x0004291a) common_borders_pane_cp4

0x79cb,	// (0x00046a5e) separator_horizontal_pane_g1

0x79d4,	// (0x00046a67) separator_horizontal_pane_g2

0x79dd,	// (0x00046a70) separator_horizontal_pane_g3

0x0002,

0xfc27,	// (0x0004ecba) separator_horizontal_pane_g

0x793e,	// (0x000469d1) eswt_control_pane_g1_copy3_ParamLimits

0x793e,	// (0x000469d1) eswt_control_pane_g1_copy3

0x794b,	// (0x000469de) eswt_control_pane_g2_copy3_ParamLimits

0x794b,	// (0x000469de) eswt_control_pane_g2_copy3

0x7958,	// (0x000469eb) eswt_control_pane_g3_copy3_ParamLimits

0x7958,	// (0x000469eb) eswt_control_pane_g3_copy3

0x7965,	// (0x000469f8) eswt_control_pane_g4_copy3_ParamLimits

0x7965,	// (0x000469f8) eswt_control_pane_g4_copy3

0x3887,	// (0x0004291a) common_borders_pane_cp5

0x79e6,	// (0x00046a79) separator_vertical_pane_g1

0x79ef,	// (0x00046a82) separator_vertical_pane_g2

0x79f8,	// (0x00046a8b) separator_vertical_pane_g3

0x0002,

0xfc2e,	// (0x0004ecc1) separator_vertical_pane_g

0x793e,	// (0x000469d1) eswt_control_pane_g1_copy4_ParamLimits

0x793e,	// (0x000469d1) eswt_control_pane_g1_copy4

0x794b,	// (0x000469de) eswt_control_pane_g2_copy4_ParamLimits

0x794b,	// (0x000469de) eswt_control_pane_g2_copy4

0x7958,	// (0x000469eb) eswt_control_pane_g3_copy4_ParamLimits

0x7958,	// (0x000469eb) eswt_control_pane_g3_copy4

0x7965,	// (0x000469f8) eswt_control_pane_g4_copy4_ParamLimits

0x7965,	// (0x000469f8) eswt_control_pane_g4_copy4

0x7a01,	// (0x00046a94) eswt_ctrl_combo_button_pane

0x7a09,	// (0x00046a9c) eswt_ctrl_input_pane

0x7a11,	// (0x00046aa4) popup_choice_list_window_cp70

0x7a19,	// (0x00046aac) eswt_ctrl_input_pane_t1

0x3887,	// (0x0004291a) input_focus_pane_cp70

0x71bb,	// (0x0004624e) bg_button_pane_cp70_ParamLimits

0x71bb,	// (0x0004624e) bg_button_pane_cp70

0x7a27,	// (0x00046aba) eswt_ctrl_combo_button_pane_g1

0x7a2f,	// (0x00046ac2) wait_bar_pane_cp70

0x5485,	// (0x00044518) bg_popup_window_pane_cp70_ParamLimits

0x5485,	// (0x00044518) bg_popup_window_pane_cp70

0x7a37,	// (0x00046aca) popup_eswt_tasktip_window_t1

0x7a4d,	// (0x00046ae0) wait_bar_pane_cp71_ParamLimits

0x7a4d,	// (0x00046ae0) wait_bar_pane_cp71

0x7a59,	// (0x00046aec) grid_eswt_app_pane

0x4965,	// (0x000439f8) scroll_pane_cp70

0xcc11,	// (0x0004bca4) cell_eswt_app_pane_ParamLimits

0xcc11,	// (0x0004bca4) cell_eswt_app_pane

0xcc45,	// (0x0004bcd8) cell_eswt_app_pane_g1_ParamLimits

0xcc45,	// (0x0004bcd8) cell_eswt_app_pane_g1

0xcc74,	// (0x0004bd07) cell_eswt_app_pane_g2_ParamLimits

0xcc74,	// (0x0004bd07) cell_eswt_app_pane_g2

0x0001,

0xfc35,	// (0x0004ecc8) cell_eswt_app_pane_g_ParamLimits

0xfc35,	// (0x0004ecc8) cell_eswt_app_pane_g

0xcc98,	// (0x0004bd2b) cell_eswt_app_pane_t1_ParamLimits

0xcc98,	// (0x0004bd2b) cell_eswt_app_pane_t1

0x7a62,	// (0x00046af5) grid_highlight_pane_cp70_ParamLimits

0x7a62,	// (0x00046af5) grid_highlight_pane_cp70

0x4ec4,	// (0x00043f57) set_content_pane_g1

0x51b4,	// (0x00044247) status_small_volume_pane

0xa3d9,	// (0x0004946c) status_small_volume_pane_g1

0xa3e1,	// (0x00049474) volume_small2_pane

0xa3ea,	// (0x0004947d) volume_small2_pane_g1

0xa3f3,	// (0x00049486) volume_small2_pane_g2

0xa3fc,	// (0x0004948f) volume_small2_pane_g3

0xa405,	// (0x00049498) volume_small2_pane_g4

0xa40e,	// (0x000494a1) volume_small2_pane_g5

0xa417,	// (0x000494aa) volume_small2_pane_g6

0xa420,	// (0x000494b3) volume_small2_pane_g7

0xa429,	// (0x000494bc) volume_small2_pane_g8

0xa432,	// (0x000494c5) volume_small2_pane_g9

0xa43b,	// (0x000494ce) volume_small2_pane_g10

0x0009,

0xfc3a,	// (0x0004eccd) volume_small2_pane_g

0x7494,	// (0x00046527) fep_vkb_top_text_pane_g1_ParamLimits

0xcabc,	// (0x0004bb4f) fep_vkb_top_text_pane_t1_ParamLimits

0x76ae,	// (0x00046741) popup_preview_fixed_window_g3_ParamLimits

0x76ae,	// (0x00046741) popup_preview_fixed_window_g3

0x9ad1,	// (0x00048b64) popup_toolbar_trans_pane

0xbddd,	// (0x0004ae70) aid_height_set_list_ParamLimits

0x53a3,	// (0x00044436) aid_size_parent_ParamLimits

0x475f,	// (0x000437f2) list_highlight_pane_cp2_ParamLimits

0x4ec4,	// (0x00043f57) set_content_pane_g1_ParamLimits

0xc54c,	// (0x0004b5df) list_single_image_pane_ParamLimits

0xc54c,	// (0x0004b5df) list_single_image_pane

0xccca,	// (0x0004bd5d) aid_size_cell_image_ParamLimits

0xccca,	// (0x0004bd5d) aid_size_cell_image

0xccd7,	// (0x0004bd6a) grid_single_image_pane_ParamLimits

0xccd7,	// (0x0004bd6a) grid_single_image_pane

0x7a6e,	// (0x00046b01) list_single_image_pane_g1_ParamLimits

0x7a6e,	// (0x00046b01) list_single_image_pane_g1

0x7a7a,	// (0x00046b0d) list_single_image_pane_g2_ParamLimits

0x7a7a,	// (0x00046b0d) list_single_image_pane_g2

0x0001,

0xfc4f,	// (0x0004ece2) list_single_image_pane_g_ParamLimits

0xfc4f,	// (0x0004ece2) list_single_image_pane_g

0x7a8e,	// (0x00046b21) list_single_image_pane_t1_ParamLimits

0x7a8e,	// (0x00046b21) list_single_image_pane_t1

0xcce3,	// (0x0004bd76) cell_image_list_pane_ParamLimits

0xcce3,	// (0x0004bd76) cell_image_list_pane

0xccf7,	// (0x0004bd8a) cell_image_list_pane_g1

0xcd00,	// (0x0004bd93) cell_image_list_pane_g2

0x0001,

0xfc54,	// (0x0004ece7) cell_image_list_pane_g

0x7aa4,	// (0x00046b37) aid_size_cell_tb_trans_pane

0x45fa,	// (0x0004368d) bg_tb_trans_pane

0x7ab6,	// (0x00046b49) grid_tb_trans_pane

0x5411,	// (0x000444a4) bg_tb_trans_pane_g1

0x5419,	// (0x000444ac) bg_tb_trans_pane_g2

0x5421,	// (0x000444b4) bg_tb_trans_pane_g3

0x5429,	// (0x000444bc) bg_tb_trans_pane_g4

0x5431,	// (0x000444c4) bg_tb_trans_pane_g5

0x5449,	// (0x000444dc) bg_tb_trans_pane_g6

0x5451,	// (0x000444e4) bg_tb_trans_pane_g7

0x5439,	// (0x000444cc) bg_tb_trans_pane_g8

0x5441,	// (0x000444d4) bg_tb_trans_pane_g9

0x0008,

0xfc59,	// (0x0004ecec) bg_tb_trans_pane_g

0x7aca,	// (0x00046b5d) cell_toolbar_trans_pane_ParamLimits

0x7aca,	// (0x00046b5d) cell_toolbar_trans_pane

0x71f6,	// (0x00046289) cell_toolbar_trans_pane_g1

0xc7e3,	// (0x0004b876) list_form2_midp_pane_t1

0xc7f1,	// (0x0004b884) list_form2_midp_pane_t2

0x0001,

0xfaf6,	// (0x0004eb89) list_form2_midp_pane_t

0x6f53,	// (0x00045fe6) scroll_pane_cp51_ParamLimits

0x70ca,	// (0x0004615d) form2_midp_wait_pane_g1

0x70d3,	// (0x00046166) form2_midp_wait_pane_g2

0x70dc,	// (0x0004616f) form2_midp_wait_pane_g3

0x0002,

0xfb0b,	// (0x0004eb9e) form2_midp_wait_pane_g

0x38f7,	// (0x0004298a) list_highlight_pane_cp21_ParamLimits

0x70fc,	// (0x0004618f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x710b,	// (0x0004619e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xc4c5,	// (0x0004b558) list_single_2graphic_im_pane_ParamLimits

0xc4c5,	// (0x0004b558) list_single_2graphic_im_pane

0x7af0,	// (0x00046b83) list_single_2graphic_im_pane_g1_ParamLimits

0x7af0,	// (0x00046b83) list_single_2graphic_im_pane_g1

0x7b01,	// (0x00046b94) list_single_2graphic_im_pane_g2_ParamLimits

0x7b01,	// (0x00046b94) list_single_2graphic_im_pane_g2

0x7b0d,	// (0x00046ba0) list_single_2graphic_im_pane_g3_ParamLimits

0x7b0d,	// (0x00046ba0) list_single_2graphic_im_pane_g3

0x0003,

0xfc6c,	// (0x0004ecff) list_single_2graphic_im_pane_g_ParamLimits

0xfc6c,	// (0x0004ecff) list_single_2graphic_im_pane_g

0x7b2d,	// (0x00046bc0) list_single_2graphic_im_pane_t1_ParamLimits

0x7b2d,	// (0x00046bc0) list_single_2graphic_im_pane_t1

0x76ba,	// (0x0004674d) list_single_graphic_2heading_pane_fp_ParamLimits

0x76ba,	// (0x0004674d) list_single_graphic_2heading_pane_fp

0xc182,	// (0x0004b215) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc182,	// (0x0004b215) list_single_graphic_2heading_pane_fp_g1

0x76d0,	// (0x00046763) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x76d0,	// (0x00046763) list_single_graphic_2heading_pane_fp_g2

0x4608,	// (0x0004369b) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4608,	// (0x0004369b) list_single_graphic_2heading_pane_fp_g3

0x4614,	// (0x000436a7) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4614,	// (0x000436a7) list_single_graphic_2heading_pane_fp_g4

0x76dc,	// (0x0004676f) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x76dc,	// (0x0004676f) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb93,	// (0x0004ec26) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb93,	// (0x0004ec26) list_single_graphic_2heading_pane_fp_g

0xc2cb,	// (0x0004b35e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc2cb,	// (0x0004b35e) list_single_graphic_2heading_pane_fp_t1

0xc1ba,	// (0x0004b24d) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc1ba,	// (0x0004b24d) list_single_graphic_2heading_pane_fp_t2

0xc2e1,	// (0x0004b374) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc2e1,	// (0x0004b374) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc75,	// (0x0004ed08) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc75,	// (0x0004ed08) list_single_graphic_2heading_pane_fp_t

0x7282,	// (0x00046315) fep_hwr_write_pane_g5_ParamLimits

0x7282,	// (0x00046315) fep_hwr_write_pane_g5

0x728e,	// (0x00046321) fep_hwr_write_pane_g6_ParamLimits

0x728e,	// (0x00046321) fep_hwr_write_pane_g6

0x790d,	// (0x000469a0) eswt_shell_pane_ParamLimits

0x5485,	// (0x00044518) bg_popup_window_pane_cp18_ParamLimits

0x6492,	// (0x00045525) heading_pane_cp70

0x7a37,	// (0x00046aca) popup_eswt_tasktip_window_t1_ParamLimits

0xb6e8,	// (0x0004a77b) aid_touch_tab_arrow_left

0xb6f7,	// (0x0004a78a) aid_touch_tab_arrow_right

0xae9a,	// (0x00049f2d) title_pane_g3_ParamLimits

0xae9a,	// (0x00049f2d) title_pane_g3

0x3efd,	// (0x00042f90) set_value_pane_g1

0x9ad1,	// (0x00048b64) popup_toolbar_trans_pane_ParamLimits

0x7aa4,	// (0x00046b37) aid_size_cell_tb_trans_pane_ParamLimits

0x45fa,	// (0x0004368d) bg_tb_trans_pane_ParamLimits

0x7ab6,	// (0x00046b49) grid_tb_trans_pane_ParamLimits

0x3a2a,	// (0x00042abd) cont_note_pane_ParamLimits

0x3a2a,	// (0x00042abd) cont_note_pane

0x3cb9,	// (0x00042d4c) cont_snote2_single_text_pane_ParamLimits

0x3cb9,	// (0x00042d4c) cont_snote2_single_text_pane

0x3cb9,	// (0x00042d4c) cont_snote2_single_graphic_pane_ParamLimits

0x3cb9,	// (0x00042d4c) cont_snote2_single_graphic_pane

0x5969,	// (0x000449fc) cont_note_wait_pane_ParamLimits

0x5969,	// (0x000449fc) cont_note_wait_pane

0x5969,	// (0x000449fc) cont_note_image_pane_ParamLimits

0x5969,	// (0x000449fc) cont_note_image_pane

0xcd09,	// (0x0004bd9c) popup_note2_window_g1_ParamLimits

0xcd09,	// (0x0004bd9c) popup_note2_window_g1

0xcd3a,	// (0x0004bdcd) popup_note2_window_t1_ParamLimits

0xcd3a,	// (0x0004bdcd) popup_note2_window_t1

0xcd7f,	// (0x0004be12) popup_note2_window_t2_ParamLimits

0xcd7f,	// (0x0004be12) popup_note2_window_t2

0xcdc4,	// (0x0004be57) popup_note2_window_t3_ParamLimits

0xcdc4,	// (0x0004be57) popup_note2_window_t3

0xce09,	// (0x0004be9c) popup_note2_window_t4_ParamLimits

0xce09,	// (0x0004be9c) popup_note2_window_t4

0x3aa2,	// (0x00042b35) popup_note2_window_t5_ParamLimits

0x3aa2,	// (0x00042b35) popup_note2_window_t5

0x0004,

0xfc81,	// (0x0004ed14) popup_note2_window_t_ParamLimits

0xfc81,	// (0x0004ed14) popup_note2_window_t

0xce38,	// (0x0004becb) popup_note2_image_window_g1_ParamLimits

0xce38,	// (0x0004becb) popup_note2_image_window_g1

0xce44,	// (0x0004bed7) popup_note2_image_window_g2_ParamLimits

0xce44,	// (0x0004bed7) popup_note2_image_window_g2

0x0001,

0xfc8c,	// (0x0004ed1f) popup_note2_image_window_g_ParamLimits

0xfc8c,	// (0x0004ed1f) popup_note2_image_window_g

0xce56,	// (0x0004bee9) popup_note2_image_window_t1_ParamLimits

0xce56,	// (0x0004bee9) popup_note2_image_window_t1

0xce6e,	// (0x0004bf01) popup_note2_image_window_t2_ParamLimits

0xce6e,	// (0x0004bf01) popup_note2_image_window_t2

0xce86,	// (0x0004bf19) popup_note2_image_window_t3_ParamLimits

0xce86,	// (0x0004bf19) popup_note2_image_window_t3

0x0002,

0xfc91,	// (0x0004ed24) popup_note2_image_window_t_ParamLimits

0xfc91,	// (0x0004ed24) popup_note2_image_window_t

0x5977,	// (0x00044a0a) popup_note2_wait_window_g1_ParamLimits

0x5977,	// (0x00044a0a) popup_note2_wait_window_g1

0xcea2,	// (0x0004bf35) popup_note2_wait_window_g2_ParamLimits

0xcea2,	// (0x0004bf35) popup_note2_wait_window_g2

0x598f,	// (0x00044a22) popup_note2_wait_window_g3_ParamLimits

0x598f,	// (0x00044a22) popup_note2_wait_window_g3

0x0002,

0xfc98,	// (0x0004ed2b) popup_note2_wait_window_g_ParamLimits

0xfc98,	// (0x0004ed2b) popup_note2_wait_window_g

0xceae,	// (0x0004bf41) popup_note2_wait_window_t1_ParamLimits

0xceae,	// (0x0004bf41) popup_note2_wait_window_t1

0xcecc,	// (0x0004bf5f) popup_note2_wait_window_t2_ParamLimits

0xcecc,	// (0x0004bf5f) popup_note2_wait_window_t2

0xceea,	// (0x0004bf7d) popup_note2_wait_window_t3_ParamLimits

0xceea,	// (0x0004bf7d) popup_note2_wait_window_t3

0xcefc,	// (0x0004bf8f) popup_note2_wait_window_t4_ParamLimits

0xcefc,	// (0x0004bf8f) popup_note2_wait_window_t4

0x0003,

0xfc9f,	// (0x0004ed32) popup_note2_wait_window_t_ParamLimits

0xfc9f,	// (0x0004ed32) popup_note2_wait_window_t

0xcf0e,	// (0x0004bfa1) wait_bar2_pane_ParamLimits

0xcf0e,	// (0x0004bfa1) wait_bar2_pane

0xcf26,	// (0x0004bfb9) popup_snote2_single_text_window_g1_ParamLimits

0xcf26,	// (0x0004bfb9) popup_snote2_single_text_window_g1

0xcf4e,	// (0x0004bfe1) popup_snote2_single_text_window_t1_ParamLimits

0xcf4e,	// (0x0004bfe1) popup_snote2_single_text_window_t1

0xcf9a,	// (0x0004c02d) popup_snote2_single_text_window_t2_ParamLimits

0xcf9a,	// (0x0004c02d) popup_snote2_single_text_window_t2

0xcfe6,	// (0x0004c079) popup_snote2_single_text_window_t3_ParamLimits

0xcfe6,	// (0x0004c079) popup_snote2_single_text_window_t3

0xd027,	// (0x0004c0ba) popup_snote2_single_text_window_t4_ParamLimits

0xd027,	// (0x0004c0ba) popup_snote2_single_text_window_t4

0xd05d,	// (0x0004c0f0) popup_snote2_single_text_window_t5_ParamLimits

0xd05d,	// (0x0004c0f0) popup_snote2_single_text_window_t5

0x0004,

0xfca8,	// (0x0004ed3b) popup_snote2_single_text_window_t_ParamLimits

0xfca8,	// (0x0004ed3b) popup_snote2_single_text_window_t

0xd088,	// (0x0004c11b) popup_snote2_single_graphic_window_g1_ParamLimits

0xd088,	// (0x0004c11b) popup_snote2_single_graphic_window_g1

0xd0b0,	// (0x0004c143) popup_snote2_single_graphic_window_g2_ParamLimits

0xd0b0,	// (0x0004c143) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb3,	// (0x0004ed46) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb3,	// (0x0004ed46) popup_snote2_single_graphic_window_g

0xd0d8,	// (0x0004c16b) popup_snote2_single_graphic_window_t1_ParamLimits

0xd0d8,	// (0x0004c16b) popup_snote2_single_graphic_window_t1

0xd124,	// (0x0004c1b7) popup_snote2_single_graphic_window_t2_ParamLimits

0xd124,	// (0x0004c1b7) popup_snote2_single_graphic_window_t2

0xcfe6,	// (0x0004c079) popup_snote2_single_graphic_window_t3_ParamLimits

0xcfe6,	// (0x0004c079) popup_snote2_single_graphic_window_t3

0xd027,	// (0x0004c0ba) popup_snote2_single_graphic_window_t4_ParamLimits

0xd027,	// (0x0004c0ba) popup_snote2_single_graphic_window_t4

0xd05d,	// (0x0004c0f0) popup_snote2_single_graphic_window_t5_ParamLimits

0xd05d,	// (0x0004c0f0) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb8,	// (0x0004ed4b) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb8,	// (0x0004ed4b) popup_snote2_single_graphic_window_t

0x6ee7,	// (0x00045f7a) clock_nsta_pane_cp2_t1

0x6ee7,	// (0x00045f7a) clock_nsta_pane_cp2_t2

0x0001,

0xfacc,	// (0x0004eb5f) clock_nsta_pane_cp2_t

0x8f7f,	// (0x00048012) form_field_data_wide_pane_g1_ParamLimits

0x4608,	// (0x0004369b) form_field_data_wide_pane_g2_ParamLimits

0x4608,	// (0x0004369b) form_field_data_wide_pane_g2

0x4614,	// (0x000436a7) form_field_data_wide_pane_g3_ParamLimits

0x4614,	// (0x000436a7) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x0004e719) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x0004e719) form_field_data_wide_pane_g

0xc6cc,	// (0x0004b75f) grid_touch_3_pane_ParamLimits

0xc6cc,	// (0x0004b75f) grid_touch_3_pane

0xd49e,	// (0x0004c531) cell_touch_3_pane_ParamLimits

0xd49e,	// (0x0004c531) cell_touch_3_pane

0x71f6,	// (0x00046289) cell_touch_3_pane_g1

0x71f6,	// (0x00046289) cell_touch_3_pane_g2

0x0001,

0xfb51,	// (0x0004ebe4) cell_touch_3_pane_g

0x3ad4,	// (0x00042b67) cont_query_data_pane

0x3adc,	// (0x00042b6f) cont_query_data_pane_cp1

0xd170,	// (0x0004c203) button_value_adjust_pane_cp7

0xd178,	// (0x0004c20b) query_popup_pane_cp3

0x4b8a,	// (0x00043c1d) bg_popup_sub_pane_cp22_ParamLimits

0x9246,	// (0x000482d9) navi_navi_volume_pane_cp2

0x925e,	// (0x000482f1) popup_side_volume_key_window_g2

0x926a,	// (0x000482fd) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x0004e7af) popup_side_volume_key_window_g

0x9284,	// (0x00048317) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x0004e7b6) popup_side_volume_key_window_t

0x4dcb,	// (0x00043e5e) popup_side_volume_key_window_ParamLimits

0xb166,	// (0x0004a1f9) list_double_graphic_pane_g4_ParamLimits

0xb166,	// (0x0004a1f9) list_double_graphic_pane_g4

0xc50a,	// (0x0004b59d) list_single_2heading_msg_pane_ParamLimits

0xc50a,	// (0x0004b59d) list_single_2heading_msg_pane

0xd189,	// (0x0004c21c) list_single_2heading_msg_pane_g1_ParamLimits

0xd189,	// (0x0004c21c) list_single_2heading_msg_pane_g1

0x4f10,	// (0x00043fa3) list_single_2heading_msg_pane_g2_ParamLimits

0x4f10,	// (0x00043fa3) list_single_2heading_msg_pane_g2

0xd195,	// (0x0004c228) list_single_2heading_msg_pane_g3_ParamLimits

0xd195,	// (0x0004c228) list_single_2heading_msg_pane_g3

0xd1a1,	// (0x0004c234) list_single_2heading_msg_pane_g4_ParamLimits

0xd1a1,	// (0x0004c234) list_single_2heading_msg_pane_g4

0x0003,

0xfcc3,	// (0x0004ed56) list_single_2heading_msg_pane_g_ParamLimits

0xfcc3,	// (0x0004ed56) list_single_2heading_msg_pane_g

0xc301,	// (0x0004b394) list_single_2heading_msg_pane_t1_ParamLimits

0xc301,	// (0x0004b394) list_single_2heading_msg_pane_t1

0xc329,	// (0x0004b3bc) list_single_2heading_msg_pane_t2_ParamLimits

0xc329,	// (0x0004b3bc) list_single_2heading_msg_pane_t2

0xc35d,	// (0x0004b3f0) list_single_2heading_msg_pane_t3_ParamLimits

0xc35d,	// (0x0004b3f0) list_single_2heading_msg_pane_t3

0xc396,	// (0x0004b429) list_single_2heading_msg_pane_t4_ParamLimits

0xc396,	// (0x0004b429) list_single_2heading_msg_pane_t4

0x0003,

0xfccc,	// (0x0004ed5f) list_single_2heading_msg_pane_t_ParamLimits

0xfccc,	// (0x0004ed5f) list_single_2heading_msg_pane_t

0x38a5,	// (0x00042938) title_pane_g4_ParamLimits

0x38a5,	// (0x00042938) title_pane_g4

0x9054,	// (0x000480e7) title_pane_stacon_g3_ParamLimits

0x9054,	// (0x000480e7) title_pane_stacon_g3

0x7b21,	// (0x00046bb4) list_single_2graphic_im_pane_g4_ParamLimits

0x7b21,	// (0x00046bb4) list_single_2graphic_im_pane_g4

0x62c4,	// (0x00045357) popup_side_volume_key_window_cp

0x678d,	// (0x00045820) main_idle_act2_pane_t1

0x9bc1,	// (0x00048c54) toolbar_button_pane_g10

0xb106,	// (0x0004a199) popup_toolbar_window_cp1

0x6e96,	// (0x00045f29) clock_nsta_pane_cp_t1

0x6e96,	// (0x00045f29) clock_nsta_pane_cp_t2

0x0001,

0xfac7,	// (0x0004eb5a) clock_nsta_pane_cp_t

0x9246,	// (0x000482d9) navi_navi_volume_pane_cp2_ParamLimits

0x9252,	// (0x000482e5) popup_side_volume_key_window_g1_ParamLimits

0x925e,	// (0x000482f1) popup_side_volume_key_window_g2_ParamLimits

0x926a,	// (0x000482fd) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x0004e7af) popup_side_volume_key_window_g_ParamLimits

0xa045,	// (0x000490d8) fep_hwr_aid_pane

0xa0ec,	// (0x0004917f) bg_fep_hwr_top_pane_g4_ParamLimits

0x7264,	// (0x000462f7) fep_hwr_top_pane_g1_ParamLimits

0x7252,	// (0x000462e5) fep_hwr_top_pane_g2_ParamLimits

0xa10c,	// (0x0004919f) fep_hwr_top_pane_g3_ParamLimits

0xfb1c,	// (0x0004ebaf) fep_hwr_top_pane_g_ParamLimits

0xa121,	// (0x000491b4) fep_hwr_top_text_pane_ParamLimits

0x6069,	// (0x000450fc) aid_touch_tab_arrow_arrow_2

0x6060,	// (0x000450f3) aid_touch_tab_arrow_left_2

0xa059,	// (0x000490ec) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xa090,	// (0x00049123) fep_hwr_prediction_pane

0x734f,	// (0x000463e2) fep_vkb_prediction_pane

0xca99,	// (0x0004bb2c) fep_vkb_side_pane_g3_ParamLimits

0xca99,	// (0x0004bb2c) fep_vkb_side_pane_g3

0xa29c,	// (0x0004932f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xa308,	// (0x0004939b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xa315,	// (0x000493a8) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcb,	// (0x0004ec5e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xa444,	// (0x000494d7) fep_hwr_prediction_pane_g1

0xa44e,	// (0x000494e1) fep_hwr_prediction_pane_g2

0xa456,	// (0x000494e9) fep_hwr_prediction_pane_g3

0xa45e,	// (0x000494f1) fep_hwr_prediction_pane_g4

0x0003,

0xfcd5,	// (0x0004ed68) fep_hwr_prediction_pane_g

0xd1b9,	// (0x0004c24c) fep_vkb_prediction_pane_g1

0xd1c3,	// (0x0004c256) fep_vkb_prediction_pane_g2

0xd1cb,	// (0x0004c25e) fep_vkb_prediction_pane_g3

0xd1d3,	// (0x0004c266) fep_vkb_prediction_pane_g4

0x0003,

0xfcde,	// (0x0004ed71) fep_vkb_prediction_pane_g

0x9ea1,	// (0x00048f34) slider_set_pane_g3

0x9eb5,	// (0x00048f48) slider_set_pane_g4

0x9ecd,	// (0x00048f60) slider_set_pane_g5

0x9ea1,	// (0x00048f34) slider_set_pane_g6

0x9ee3,	// (0x00048f76) slider_set_pane_g7

0x6517,	// (0x000455aa) slider_form_pane_g3

0x6520,	// (0x000455b3) slider_form_pane_g4

0x6528,	// (0x000455bb) slider_form_pane_g5

0x6517,	// (0x000455aa) slider_form_pane_g6

0xc48e,	// (0x0004b521) slider_form_pane_g7

0x6a03,	// (0x00045a96) slider_set_pane_vc_g3

0x6a0c,	// (0x00045a9f) slider_set_pane_vc_g4

0x6a15,	// (0x00045aa8) slider_set_pane_vc_g5

0x6a03,	// (0x00045a96) slider_set_pane_vc_g6

0x6a1e,	// (0x00045ab1) slider_set_pane_vc_g7

0x6bce,	// (0x00045c61) slider_form_pane_vc_g1

0x6bd7,	// (0x00045c6a) slider_form_pane_vc_g2

0x6be0,	// (0x00045c73) slider_form_pane_vc_g3

0x6bce,	// (0x00045c61) slider_form_pane_vc_g4

0x6be9,	// (0x00045c7c) slider_form_pane_vc_g5

0x0004,

0xfa99,	// (0x0004eb2c) slider_form_pane_vc_g

0x8731,	// (0x000477c4) main_idle_act3_pane

0xd1db,	// (0x0004c26e) ai3_links_pane

0xd4e3,	// (0x0004c576) popup_ai3_data_window_ParamLimits

0xd4e3,	// (0x0004c576) popup_ai3_data_window

0x3887,	// (0x0004291a) grid_ai3_links_pane

0xd4fb,	// (0x0004c58e) cell_ai3_links_pane_ParamLimits

0xd4fb,	// (0x0004c58e) cell_ai3_links_pane

0xd1e4,	// (0x0004c277) bg_popup_sub_pane_cp11

0xd1f1,	// (0x0004c284) cell_ai3_links_pane_g1

0x3887,	// (0x0004291a) bg_popup_sub_pane_cp12

0xd216,	// (0x0004c2a9) heading_ai3_data_pane

0xd21e,	// (0x0004c2b1) list_ai3_gene_pane

0xd22a,	// (0x0004c2bd) popup_ai3_data_window_g1

0xd232,	// (0x0004c2c5) heading_ai3_data_pane_g1

0xd23a,	// (0x0004c2cd) heading_ai3_data_pane_t1

0xd248,	// (0x0004c2db) list_double_ai3_gene_pane_ParamLimits

0xd248,	// (0x0004c2db) list_double_ai3_gene_pane

0xd255,	// (0x0004c2e8) list_single_ai3_gene_pane_ParamLimits

0xd255,	// (0x0004c2e8) list_single_ai3_gene_pane

0x71bb,	// (0x0004624e) list_highlight_pane_cp7_ParamLimits

0x71bb,	// (0x0004624e) list_highlight_pane_cp7

0xd262,	// (0x0004c2f5) list_single_a13_gene_pane_t1_ParamLimits

0xd262,	// (0x0004c2f5) list_single_a13_gene_pane_t1

0xd279,	// (0x0004c30c) list_single_ai3_gene_pane_g1

0xd282,	// (0x0004c315) list_single_ai3_gene_pane_g2

0x0001,

0xfce7,	// (0x0004ed7a) list_single_ai3_gene_pane_g

0xd28a,	// (0x0004c31d) list_double_ai3_gene_pane_g1_ParamLimits

0xd28a,	// (0x0004c31d) list_double_ai3_gene_pane_g1

0xd296,	// (0x0004c329) list_double_ai3_gene_pane_t1_ParamLimits

0xd296,	// (0x0004c329) list_double_ai3_gene_pane_t1

0xd2b2,	// (0x0004c345) list_double_ai3_gene_pane_t2_ParamLimits

0xd2b2,	// (0x0004c345) list_double_ai3_gene_pane_t2

0xd2c7,	// (0x0004c35a) list_double_ai3_gene_pane_t3_ParamLimits

0xd2c7,	// (0x0004c35a) list_double_ai3_gene_pane_t3

0x0002,

0xfcec,	// (0x0004ed7f) list_double_ai3_gene_pane_t_ParamLimits

0xfcec,	// (0x0004ed7f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc2f7,	// (0x0004b38a) aid_size_min_col_2

0xd4cf,	// (0x0004c562) aid_size_min_msg_ParamLimits

0xd4cf,	// (0x0004c562) aid_size_min_msg

0xcaad,	// (0x0004bb40) fep_vkb_top_text_pane_g2_ParamLimits

0xcaad,	// (0x0004bb40) fep_vkb_top_text_pane_g2

0x0001,

0xfb4c,	// (0x0004ebdf) fep_vkb_top_text_pane_g_ParamLimits

0xfb4c,	// (0x0004ebdf) fep_vkb_top_text_pane_g

0x8731,	// (0x000477c4) main_hc_apps_shell_pane

0xd2e4,	// (0x0004c377) grid_hc_apps_pane_ParamLimits

0xd2e4,	// (0x0004c377) grid_hc_apps_pane

0xd2f3,	// (0x0004c386) list_hc_apps_pane

0xd2fb,	// (0x0004c38e) scroll_pane_cp37_ParamLimits

0xd2fb,	// (0x0004c38e) scroll_pane_cp37

0xd513,	// (0x0004c5a6) cell_hc_apps_pane_ParamLimits

0xd513,	// (0x0004c5a6) cell_hc_apps_pane

0xd5c1,	// (0x0004c654) cell_hc_apps_pane_g1_ParamLimits

0xd5c1,	// (0x0004c654) cell_hc_apps_pane_g1

0xd307,	// (0x0004c39a) cell_hc_apps_pane_g2_ParamLimits

0xd307,	// (0x0004c39a) cell_hc_apps_pane_g2

0xd323,	// (0x0004c3b6) cell_hc_apps_pane_g3_ParamLimits

0xd323,	// (0x0004c3b6) cell_hc_apps_pane_g3

0x0002,

0xfcf3,	// (0x0004ed86) cell_hc_apps_pane_g_ParamLimits

0xfcf3,	// (0x0004ed86) cell_hc_apps_pane_g

0xd5f2,	// (0x0004c685) cell_hc_apps_pane_t1_ParamLimits

0xd5f2,	// (0x0004c685) cell_hc_apps_pane_t1

0x3a2a,	// (0x00042abd) grid_highlight_pane_cp10_ParamLimits

0x3a2a,	// (0x00042abd) grid_highlight_pane_cp10

0xdb96,	// (0x0004cc29) list_single_hc_apps_pane_ParamLimits

0xdb96,	// (0x0004cc29) list_single_hc_apps_pane

0xdbfe,	// (0x0004cc91) list_single_hc_apps_pane_g1

0xd345,	// (0x0004c3d8) list_single_hc_apps_pane_g2

0x0001,

0xfcfa,	// (0x0004ed8d) list_single_hc_apps_pane_g

0xd35e,	// (0x0004c3f1) list_single_hc_apps_pane_g2_copy1

0xc3bb,	// (0x0004b44e) list_single_hc_apps_pane_t1

0x38f7,	// (0x0004298a) bg_set_opt_pane_cp_ParamLimits

0x897a,	// (0x00047a0d) setting_slider_pane_t1_ParamLimits

0x8993,	// (0x00047a26) setting_slider_pane_t2_ParamLimits

0x89ad,	// (0x00047a40) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0004e5f7) setting_slider_pane_t_ParamLimits

0x89c5,	// (0x00047a58) slider_set_pane_ParamLimits

0x94e6,	// (0x00048579) control_pane_g5_ParamLimits

0x94e6,	// (0x00048579) control_pane_g5

0x64d9,	// (0x0004556c) slider_set_pane_g1_ParamLimits

0x9e95,	// (0x00048f28) slider_set_pane_g2_ParamLimits

0x9ea1,	// (0x00048f34) slider_set_pane_g3_ParamLimits

0x9eb5,	// (0x00048f48) slider_set_pane_g4_ParamLimits

0x9ecd,	// (0x00048f60) slider_set_pane_g5_ParamLimits

0x9ea1,	// (0x00048f34) slider_set_pane_g6_ParamLimits

0x9ee3,	// (0x00048f76) slider_set_pane_g7_ParamLimits

0xf96a,	// (0x0004e9fd) slider_set_pane_g_ParamLimits

0x4e6f,	// (0x00043f02) navi_icon_text_pane_ParamLimits

0xb6be,	// (0x0004a751) aid_fill_nsta_2_ParamLimits

0xb6e8,	// (0x0004a77b) aid_touch_tab_arrow_left_ParamLimits

0xb6f7,	// (0x0004a78a) aid_touch_tab_arrow_right_ParamLimits

0xb764,	// (0x0004a7f7) clock_nsta_pane_ParamLimits

0x6054,	// (0x000450e7) navi_icon_pane_g1_ParamLimits

0xbcf8,	// (0x0004ad8b) navi_text_pane_t1_ParamLimits

0x6f2d,	// (0x00045fc0) navi_icon_text_pane_g1_ParamLimits

0x6f39,	// (0x00045fcc) navi_icon_text_pane_t1_ParamLimits

0xdbfe,	// (0x0004cc91) list_single_hc_apps_pane_g1_ParamLimits

0xd345,	// (0x0004c3d8) list_single_hc_apps_pane_g2_ParamLimits

0xfcfa,	// (0x0004ed8d) list_single_hc_apps_pane_g_ParamLimits

0xd35e,	// (0x0004c3f1) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc3bb,	// (0x0004b44e) list_single_hc_apps_pane_t1_ParamLimits

0x888e,	// (0x00047921) popup_toolbar2_fixed_window_ParamLimits

0x888e,	// (0x00047921) popup_toolbar2_fixed_window

0x9ac7,	// (0x00048b5a) popup_toolbar2_float_window

0x3887,	// (0x0004291a) bg_popup_sub_pane_cp27

0xd37a,	// (0x0004c40d) grid_toolbar2_float_pane

0x3887,	// (0x0004291a) bg_popup_sub_pane_cp26

0xd37a,	// (0x0004c40d) grid_toolbar2_fixed_pane

0xdc17,	// (0x0004ccaa) cell_toolbar2_fixed_pane_ParamLimits

0xdc17,	// (0x0004ccaa) cell_toolbar2_fixed_pane

0xdc28,	// (0x0004ccbb) cell_toolbar2_fixed_pane_g1

0x537f,	// (0x00044412) toolbar2_fixed_button_pane

0x5411,	// (0x000444a4) toolbar2_fixed_button_pane_g1

0x5419,	// (0x000444ac) toolbar2_fixed_button_pane_g2

0x5421,	// (0x000444b4) toolbar2_fixed_button_pane_g3

0x5429,	// (0x000444bc) toolbar2_fixed_button_pane_g4

0x5431,	// (0x000444c4) toolbar2_fixed_button_pane_g5

0x5439,	// (0x000444cc) toolbar2_fixed_button_pane_g6

0x5441,	// (0x000444d4) toolbar2_fixed_button_pane_g7

0x5449,	// (0x000444dc) toolbar2_fixed_button_pane_g8

0x5451,	// (0x000444e4) toolbar2_fixed_button_pane_g9

0x0008,

0xf86c,	// (0x0004e8ff) toolbar2_fixed_button_pane_g

0xd382,	// (0x0004c415) cell_toolbar2_float_pane_ParamLimits

0xd382,	// (0x0004c415) cell_toolbar2_float_pane

0xd396,	// (0x0004c429) cell_toolbar2_float_pane_g1

0x537f,	// (0x00044412) toolbar2_fixed_button_pane_cp

0xc995,	// (0x0004ba28) fep_vkb_accented_list_pane_ParamLimits

0xc995,	// (0x0004ba28) fep_vkb_accented_list_pane

0xa27c,	// (0x0004930f) bg_popup_fep_shadow_pane_g9

0x4fcb,	// (0x0004405e) bg_popup_fep_shadow_pane_cp3

0x470d,	// (0x000437a0) list_accented_list_pane

0xd39f,	// (0x0004c432) list_single_accented_list_pane_ParamLimits

0xd39f,	// (0x0004c432) list_single_accented_list_pane

0x4fcb,	// (0x0004405e) list_highlight_pane_cp10

0xd3b0,	// (0x0004c443) list_single_accented_list_pane_t1

0x9a17,	// (0x00048aaa) popup_slider_window_ParamLimits

0x9a17,	// (0x00048aaa) popup_slider_window

0xd180,	// (0x0004c213) aid_indentation_list_msg

0xdcdd,	// (0x0004cd70) bg_popup_window_pane_cp19

0xd41c,	// (0x0004c4af) popup_slider_window_g1

0xd438,	// (0x0004c4cb) popup_slider_window_g2

0xd454,	// (0x0004c4e7) popup_slider_window_g3

0x0005,

0xfcff,	// (0x0004ed92) popup_slider_window_g

0xd470,	// (0x0004c503) popup_slider_window_t1

0xd64a,	// (0x0004c6dd) small_volume_slider_vertical_pane

0x71f6,	// (0x00046289) small_volume_slider_vertical_pane_g1

0x71f6,	// (0x00046289) small_volume_slider_vertical_pane_g2

0xd666,	// (0x0004c6f9) small_volume_slider_vertical_pane_g3

0x0002,

0xfd11,	// (0x0004eda4) small_volume_slider_vertical_pane_g

0x8654,	// (0x000476e7) area_side_right_pane_ParamLimits

0x8654,	// (0x000476e7) area_side_right_pane

0xa466,	// (0x000494f9) aid_size_side_button_ParamLimits

0xa466,	// (0x000494f9) aid_size_side_button

0xa47a,	// (0x0004950d) grid_sctrl_middle_pane_ParamLimits

0xa47a,	// (0x0004950d) grid_sctrl_middle_pane

0xa499,	// (0x0004952c) sctrl_sk_bottom_pane

0xa4aa,	// (0x0004953d) sctrl_sk_top_pane

0xa4bc,	// (0x0004954f) aid_touch_sctrl_top

0xa4c9,	// (0x0004955c) bg_sctrl_sk_pane_ParamLimits

0xa4c9,	// (0x0004955c) bg_sctrl_sk_pane

0xa4d7,	// (0x0004956a) sctrl_sk_top_pane_g1

0xa4e4,	// (0x00049577) sctrl_sk_top_pane_t1

0xa4bc,	// (0x0004954f) aid_touch_sctrl_bottom

0xa4c9,	// (0x0004955c) bg_sctrl_sk_pane_cp_ParamLimits

0xa4c9,	// (0x0004955c) bg_sctrl_sk_pane_cp

0xa4ff,	// (0x00049592) sctrl_sk_bottom_pane_g1

0xa4e4,	// (0x00049577) sctrl_sk_bottom_pane_t1

0xa508,	// (0x0004959b) cell_sctrl_middle_pane_ParamLimits

0xa508,	// (0x0004959b) cell_sctrl_middle_pane

0xa523,	// (0x000495b6) aid_touch_sctrl_middle_ParamLimits

0xa523,	// (0x000495b6) aid_touch_sctrl_middle

0xa535,	// (0x000495c8) bg_sctrl_middle_pane_ParamLimits

0xa535,	// (0x000495c8) bg_sctrl_middle_pane

0xa29c,	// (0x0004932f) cell_sctrl_middle_pane_g1_ParamLimits

0xa29c,	// (0x0004932f) cell_sctrl_middle_pane_g1

0xa543,	// (0x000495d6) cell_sctrl_middle_pane_g2_ParamLimits

0xa543,	// (0x000495d6) cell_sctrl_middle_pane_g2

0x0001,

0xfd1d,	// (0x0004edb0) cell_sctrl_middle_pane_g_ParamLimits

0xfd1d,	// (0x0004edb0) cell_sctrl_middle_pane_g

0x5411,	// (0x000444a4) bg_sctrl_middle_pane_g1

0x5421,	// (0x000444b4) bg_sctrl_middle_pane_g2

0x5419,	// (0x000444ac) bg_sctrl_middle_pane_g3

0x5431,	// (0x000444c4) bg_sctrl_middle_pane_g4

0x5429,	// (0x000444bc) bg_sctrl_middle_pane_g5

0x5439,	// (0x000444cc) bg_sctrl_middle_pane_g6

0x5441,	// (0x000444d4) bg_sctrl_middle_pane_g7

0x5451,	// (0x000444e4) bg_sctrl_middle_pane_g8

0x0007,

0xfd22,	// (0x0004edb5) bg_sctrl_middle_pane_g

0x5449,	// (0x000444dc) bg_sctrl_middle_pane_g8_copy1

0x5411,	// (0x000444a4) bg_sctrl_sk_pane_g1

0x5419,	// (0x000444ac) bg_sctrl_sk_pane_g2

0x5421,	// (0x000444b4) bg_sctrl_sk_pane_g3

0x0008,

0xf86c,	// (0x0004e8ff) bg_sctrl_sk_pane_g

0x3e77,	// (0x00042f0a) aid_size_touch_scroll_bar

0x5429,	// (0x000444bc) bg_sctrl_sk_pane_g4

0x5431,	// (0x000444c4) bg_sctrl_sk_pane_g5

0x5439,	// (0x000444cc) bg_sctrl_sk_pane_g6

0x5441,	// (0x000444d4) bg_sctrl_sk_pane_g7

0x5449,	// (0x000444dc) bg_sctrl_sk_pane_g8

0x5451,	// (0x000444e4) bg_sctrl_sk_pane_g9

0x9688,	// (0x0004871b) popup_fep_china_hwr2_fs_candidate_window

0x9692,	// (0x00048725) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9692,	// (0x00048725) popup_fep_china_hwr2_fs_control_window

0xa29c,	// (0x0004932f) sctrl_sk_top_pane_g2

0x0001,

0xfd18,	// (0x0004edab) sctrl_sk_top_pane_g

0xdd57,	// (0x0004cdea) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdd57,	// (0x0004cdea) aid_fep_china_hwr2_fs_cell

0xdd69,	// (0x0004cdfc) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdd69,	// (0x0004cdfc) bg_popup_fep_shadow_pane_cp4

0xdd80,	// (0x0004ce13) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdd80,	// (0x0004ce13) bg_popup_fep_shadow_pane_cp5

0xdd92,	// (0x0004ce25) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdd92,	// (0x0004ce25) popup_fep_china_hwr2_fs_control_bar_grid

0xdda2,	// (0x0004ce35) popup_fep_china_hwr2_fs_control_funtion_grid

0xd66f,	// (0x0004c702) aid_fep_china_hwr2_fs_candi_cell

0x3887,	// (0x0004291a) bg_popup_fep_shadow_pane_cp6

0xd679,	// (0x0004c70c) popup_fep_china_hwr2_fs_candidate_grid

0xddaa,	// (0x0004ce3d) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xddaa,	// (0x0004ce3d) cell_fep_china_hwr2_fs_funtion_grid

0x71f6,	// (0x00046289) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd683,	// (0x0004c716) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd683,	// (0x0004c716) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd691,	// (0x0004c724) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd691,	// (0x0004c724) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd33,	// (0x0004edc6) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd33,	// (0x0004edc6) cell_fep_china_hwr2_fs_funtion_grid_g

0xddc2,	// (0x0004ce55) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xddc2,	// (0x0004ce55) cell_fep_china_hwr2_fs_funtion_grid_t1

0xddd7,	// (0x0004ce6a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xddd7,	// (0x0004ce6a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd38,	// (0x0004edcb) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd38,	// (0x0004edcb) cell_fep_china_hwr2_fs_funtion_grid_t

0xd6a7,	// (0x0004c73a) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd6af,	// (0x0004c742) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd6b7,	// (0x0004c74a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3d,	// (0x0004edd0) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd6bf,	// (0x0004c752) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd6bf,	// (0x0004c752) cell_fep_china_hwr2_fs_candidate_grid

0xd6d8,	// (0x0004c76b) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd6e0,	// (0x0004c773) popup_fep_china_hwr2_fs_candidate_grid_g21

0x71f6,	// (0x00046289) cell_fep_china_hwr2_fs_candidate_grid_g1

0x71f6,	// (0x00046289) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb51,	// (0x0004ebe4) cell_fep_china_hwr2_fs_candidate_grid_g

0xd6e8,	// (0x0004c77b) cell_fep_china_hwr2_fs_candidate_grid_t1

0x524c,	// (0x000442df) clock_nsta_pane_cp_24_ParamLimits

0x524c,	// (0x000442df) clock_nsta_pane_cp_24

0x52b4,	// (0x00044347) indicator_nsta_pane_cp_24_ParamLimits

0x52b4,	// (0x00044347) indicator_nsta_pane_cp_24

0x5f72,	// (0x00045005) heading_pane_g1

0x0001,

0xf8d1,	// (0x0004e964) heading_pane_g

0x661a,	// (0x000456ad) grid_sct_catagory_button_pane

0x613a,	// (0x000451cd) scroll_pane_cp5_ParamLimits

0x6f5f,	// (0x00045ff2) button_value_adjust_pane_cp5_ParamLimits

0x6f5f,	// (0x00045ff2) button_value_adjust_pane_cp5

0x701d,	// (0x000460b0) form2_midp_time_pane_ParamLimits

0xd6f6,	// (0x0004c789) cell_sct_catagory_button_pane_ParamLimits

0xd6f6,	// (0x0004c789) cell_sct_catagory_button_pane

0x71bb,	// (0x0004624e) bg_button_pane_cp01_ParamLimits

0x71bb,	// (0x0004624e) bg_button_pane_cp01

0x71f6,	// (0x00046289) cell_sct_catagory_button_pane_g1

0x9a56,	// (0x00048ae9) popup_tb_extension_window

0xddf3,	// (0x0004ce86) aid_size_cell_ext_ParamLimits

0xddf3,	// (0x0004ce86) aid_size_cell_ext

0x3a2a,	// (0x00042abd) bg_tb_trans_pane_cp1_ParamLimits

0x3a2a,	// (0x00042abd) bg_tb_trans_pane_cp1

0xde13,	// (0x0004cea6) grid_tb_ext_pane_ParamLimits

0xde13,	// (0x0004cea6) grid_tb_ext_pane

0xde45,	// (0x0004ced8) cell_tb_ext_pane_ParamLimits

0xde45,	// (0x0004ced8) cell_tb_ext_pane

0xde5c,	// (0x0004ceef) cell_tb_ext_pane_g1_ParamLimits

0xde5c,	// (0x0004ceef) cell_tb_ext_pane_g1

0xd708,	// (0x0004c79b) cell_tb_ext_pane_t1

0x3a2a,	// (0x00042abd) list_highlight_pane_cp11_ParamLimits

0x3a2a,	// (0x00042abd) list_highlight_pane_cp11

0x88ad,	// (0x00047940) popup_uni_indicator_window_ParamLimits

0x88ad,	// (0x00047940) popup_uni_indicator_window

0x45fa,	// (0x0004368d) bg_popup_sub_pane_cp14

0xd723,	// (0x0004c7b6) list_uniindi_pane

0xd72f,	// (0x0004c7c2) uniindi_top_pane

0x3a2a,	// (0x00042abd) bg_uniindi_top_pane

0xd74e,	// (0x0004c7e1) uniindi_top_pane_g1

0xd764,	// (0x0004c7f7) uniindi_top_pane_g2

0x0003,

0xfd44,	// (0x0004edd7) uniindi_top_pane_g

0xd78e,	// (0x0004c821) uniindi_top_pane_t1

0xd7b8,	// (0x0004c84b) list_single_uniindi_pane_ParamLimits

0xd7b8,	// (0x0004c84b) list_single_uniindi_pane

0x71f6,	// (0x00046289) bg_uniindi_top_pane_g1

0xd7cb,	// (0x0004c85e) list_single_uniindi_pane_g1

0xd7de,	// (0x0004c871) list_single_uniindi_pane_t1

0x8731,	// (0x000477c4) control_bg_pane

0xd803,	// (0x0004c896) bg_sctrl_sk_pane_cp1

0xd80c,	// (0x0004c89f) bg_sctrl_sk_pane_cp2

0xd815,	// (0x0004c8a8) control_bg_pane_g1

0xd81e,	// (0x0004c8b1) control_bg_pane_g2

0x0001,

0xfd4d,	// (0x0004ede0) control_bg_pane_g

0x6de1,	// (0x00045e74) cell_indicator_nsta_pane_g1_ParamLimits

0xc710,	// (0x0004b7a3) cell_indicator_nsta_pane_g2_ParamLimits

0xfab5,	// (0x0004eb48) cell_indicator_nsta_pane_g_ParamLimits

0xc158,	// (0x0004b1eb) form2_midp_time_pane_t1_ParamLimits

0x95f2,	// (0x00048685) main_idle_act4_pane_ParamLimits

0x95f2,	// (0x00048685) main_idle_act4_pane

0x9a56,	// (0x00048ae9) popup_tb_extension_window_ParamLimits

0xde35,	// (0x0004cec8) tb_ext_find_pane_ParamLimits

0xde35,	// (0x0004cec8) tb_ext_find_pane

0xd827,	// (0x0004c8ba) ai_gene_pane_1_cp1

0x505f,	// (0x000440f2) ai_gene_pane_2_cp1

0xd82f,	// (0x0004c8c2) list_single_idle_plugin_calendar_pane

0xd838,	// (0x0004c8cb) list_single_idle_plugin_notification_pane

0xd841,	// (0x0004c8d4) list_single_idle_plugin_player_pane

0xde79,	// (0x0004cf0c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xde79,	// (0x0004cf0c) list_single_idle_plugin_shortcut_pane

0xde9b,	// (0x0004cf2e) main_idle_act4_pane_t1

0xdead,	// (0x0004cf40) main_idle_act4_pane_t2

0x0001,

0xfd52,	// (0x0004ede5) main_idle_act4_pane_t

0xdebf,	// (0x0004cf52) middle_sk_idle_act4_pane_ParamLimits

0xdebf,	// (0x0004cf52) middle_sk_idle_act4_pane

0xded5,	// (0x0004cf68) popup_clock_digital_analogue_window_cp2

0xdeef,	// (0x0004cf82) shortcut_wheel_idle_act4_pane_ParamLimits

0xdeef,	// (0x0004cf82) shortcut_wheel_idle_act4_pane

0x71f6,	// (0x00046289) shortcut_wheel_idle_act4_pane_g1

0x71f6,	// (0x00046289) shortcut_wheel_idle_act4_pane_g2

0x71f6,	// (0x00046289) shortcut_wheel_idle_act4_pane_g3

0x71f6,	// (0x00046289) shortcut_wheel_idle_act4_pane_g4

0x71f6,	// (0x00046289) shortcut_wheel_idle_act4_pane_g5

0xd84a,	// (0x0004c8dd) shortcut_wheel_idle_act4_pane_g6

0xd852,	// (0x0004c8e5) shortcut_wheel_idle_act4_pane_g7

0xd85a,	// (0x0004c8ed) shortcut_wheel_idle_act4_pane_g8

0xd862,	// (0x0004c8f5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd57,	// (0x0004edea) shortcut_wheel_idle_act4_pane_g

0x7387,	// (0x0004641a) middle_sk_idle_act4_pane_g1_ParamLimits

0x7387,	// (0x0004641a) middle_sk_idle_act4_pane_g1

0xdf5f,	// (0x0004cff2) middle_sk_idle_act4_pane_g2_ParamLimits

0xdf5f,	// (0x0004cff2) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7a,	// (0x0004ee0d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7a,	// (0x0004ee0d) middle_sk_idle_act4_pane_g

0xdf6b,	// (0x0004cffe) middle_sk_idle_act4_pane_t1_ParamLimits

0xdf6b,	// (0x0004cffe) middle_sk_idle_act4_pane_t1

0xdf88,	// (0x0004d01b) grid_ai_shortcut_pane_ParamLimits

0xdf88,	// (0x0004d01b) grid_ai_shortcut_pane

0xdfa1,	// (0x0004d034) list_highlight_pane_cp16_ParamLimits

0xdfa1,	// (0x0004d034) list_highlight_pane_cp16

0xdfae,	// (0x0004d041) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdfae,	// (0x0004d041) list_single_idle_plugin_shortcut_pane_g1

0xdfba,	// (0x0004d04d) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdfba,	// (0x0004d04d) list_single_idle_plugin_shortcut_pane_g2

0xdfd2,	// (0x0004d065) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdfd2,	// (0x0004d065) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7f,	// (0x0004ee12) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7f,	// (0x0004ee12) list_single_idle_plugin_shortcut_pane_g

0xdfe5,	// (0x0004d078) cell_ai_shortcut_pane_ParamLimits

0xdfe5,	// (0x0004d078) cell_ai_shortcut_pane

0xef78,	// (0x0004e00b) cell_ai_shortcut_pane_g1_ParamLimits

0xef78,	// (0x0004e00b) cell_ai_shortcut_pane_g1

0xd827,	// (0x0004c8ba) ai_gene_pane_1_cp2

0xd86a,	// (0x0004c8fd) ai_gene_pane_2_cp2

0xd872,	// (0x0004c905) list_highlight_pane_cp15

0xd87b,	// (0x0004c90e) list_single_idle_plugin_calendar_pane_g1

0xd872,	// (0x0004c905) list_highlight_pane_cp17

0xd883,	// (0x0004c916) list_single_idle_plugin_calendar_pane_g1_copy1

0xd88b,	// (0x0004c91e) list_single_idle_plugin_player_pane_g1

0x682d,	// (0x000458c0) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd86,	// (0x0004ee19) list_single_idle_plugin_player_pane_g

0xd893,	// (0x0004c926) list_single_idle_plugin_player_pane_t1

0xd8a1,	// (0x0004c934) list_single_idle_plugin_player_pane_t2

0xd8af,	// (0x0004c942) list_single_idle_plugin_player_pane_t3

0xd8bd,	// (0x0004c950) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd8b,	// (0x0004ee1e) list_single_idle_plugin_player_pane_t

0xd8cb,	// (0x0004c95e) wait_bar_pane_cp15

0xd8d3,	// (0x0004c966) grid_ai_notification_pane

0x682d,	// (0x000458c0) list_single_idle_plugin_notification_pane_g1

0xef9a,	// (0x0004e02d) cell_ai_notification_pane_ParamLimits

0xef9a,	// (0x0004e02d) cell_ai_notification_pane

0xd8dc,	// (0x0004c96f) cell_ai_notification_pane_g1

0xd8e4,	// (0x0004c977) cell_ai_notification_pane_t1

0xefa7,	// (0x0004e03a) tb_ext_find_button_pane

0xefaf,	// (0x0004e042) tb_ext_find_pane_g1

0xefb7,	// (0x0004e04a) tb_ext_find_pane_t1

0x4b29,	// (0x00043bbc) tb_ext_find_button_pane_g1

0xe006,	// (0x0004d099) tb_ext_find_button_pane_g2

0x0001,

0xfd94,	// (0x0004ee27) tb_ext_find_button_pane_g

0xde9b,	// (0x0004cf2e) main_idle_act4_pane_t1_ParamLimits

0xdead,	// (0x0004cf40) main_idle_act4_pane_t2_ParamLimits

0xfd52,	// (0x0004ede5) main_idle_act4_pane_t_ParamLimits

0xded5,	// (0x0004cf68) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdee3,	// (0x0004cf76) sat_plugin_idle_act4_pane_ParamLimits

0xdee3,	// (0x0004cf76) sat_plugin_idle_act4_pane

0xefc5,	// (0x0004e058) sat_plugin_idle_act4_pane_t1_ParamLimits

0xefc5,	// (0x0004e058) sat_plugin_idle_act4_pane_t1

0xefd8,	// (0x0004e06b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xefd8,	// (0x0004e06b) sat_plugin_idle_act4_pane_t2

0xefeb,	// (0x0004e07e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xefeb,	// (0x0004e07e) sat_plugin_idle_act4_pane_t3

0xeffe,	// (0x0004e091) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeffe,	// (0x0004e091) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd99,	// (0x0004ee2c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd99,	// (0x0004ee2c) sat_plugin_idle_act4_pane_t

0x87f6,	// (0x00047889) popup_battery_window_ParamLimits

0x87f6,	// (0x00047889) popup_battery_window

0x3a2a,	// (0x00042abd) bg_popup_sub_pane_cp25_ParamLimits

0x3a2a,	// (0x00042abd) bg_popup_sub_pane_cp25

0xe00f,	// (0x0004d0a2) popup_battery_window_g1_ParamLimits

0xe00f,	// (0x0004d0a2) popup_battery_window_g1

0xe01b,	// (0x0004d0ae) popup_battery_window_t1_ParamLimits

0xe01b,	// (0x0004d0ae) popup_battery_window_t1

0xe02d,	// (0x0004d0c0) popup_battery_window_t2_ParamLimits

0xe02d,	// (0x0004d0c0) popup_battery_window_t2

0x0001,

0xfda2,	// (0x0004ee35) popup_battery_window_t_ParamLimits

0xfda2,	// (0x0004ee35) popup_battery_window_t

0xb5b2,	// (0x0004a645) midp_canvas_pane_ParamLimits

0xb616,	// (0x0004a6a9) midp_keypad_pane_ParamLimits

0xb616,	// (0x0004a6a9) midp_keypad_pane

0x475f,	// (0x000437f2) main_midp_pane_ParamLimits

0x6ef6,	// (0x00045f89) signal_pane_g2_cp_ParamLimits

0xf011,	// (0x0004e0a4) aid_size_cell_midp_keypad_ParamLimits

0xf011,	// (0x0004e0a4) aid_size_cell_midp_keypad

0xf02b,	// (0x0004e0be) midp_keyp_game_grid_pane_ParamLimits

0xf02b,	// (0x0004e0be) midp_keyp_game_grid_pane

0xf04b,	// (0x0004e0de) midp_keyp_rocker_pane_ParamLimits

0xf04b,	// (0x0004e0de) midp_keyp_rocker_pane

0xf080,	// (0x0004e113) midp_keyp_sk_left_pane_ParamLimits

0xf080,	// (0x0004e113) midp_keyp_sk_left_pane

0xf0d8,	// (0x0004e16b) midp_keyp_sk_right_pane_ParamLimits

0xf0d8,	// (0x0004e16b) midp_keyp_sk_right_pane

0x3887,	// (0x0004291a) bg_button_pane_cp03

0xf130,	// (0x0004e1c3) midp_keyp_sk_left_pane_g1

0x3887,	// (0x0004291a) bg_button_pane_cp04

0xf130,	// (0x0004e1c3) midp_keyp_sk_right_pane_g1

0x71f6,	// (0x00046289) midp_keyp_rocker_pane_g1

0xf139,	// (0x0004e1cc) keyp_game_cell_pane_ParamLimits

0xf139,	// (0x0004e1cc) keyp_game_cell_pane

0x3887,	// (0x0004291a) bg_button_pane_cp02

0xf14c,	// (0x0004e1df) keyp_game_cell_pane_g1

0x882c,	// (0x000478bf) popup_fep_vkb2_window_ParamLimits

0x882c,	// (0x000478bf) popup_fep_vkb2_window

0xa561,	// (0x000495f4) aid_size_cell_vkb2_ParamLimits

0xa561,	// (0x000495f4) aid_size_cell_vkb2

0xa5b5,	// (0x00049648) popup_fep_vkb2_window_g1_ParamLimits

0xa5b5,	// (0x00049648) popup_fep_vkb2_window_g1

0xa5fd,	// (0x00049690) vkb2_area_bottom_pane_ParamLimits

0xa5fd,	// (0x00049690) vkb2_area_bottom_pane

0xa649,	// (0x000496dc) vkb2_area_keypad_pane_ParamLimits

0xa649,	// (0x000496dc) vkb2_area_keypad_pane

0xa68b,	// (0x0004971e) vkb2_area_top_pane_ParamLimits

0xa68b,	// (0x0004971e) vkb2_area_top_pane

0xa705,	// (0x00049798) vkb2_top_entry_pane_ParamLimits

0xa705,	// (0x00049798) vkb2_top_entry_pane

0xa72f,	// (0x000497c2) vkb2_top_grid_left_pane_ParamLimits

0xa72f,	// (0x000497c2) vkb2_top_grid_left_pane

0xa74d,	// (0x000497e0) vkb2_top_grid_right_pane_ParamLimits

0xa74d,	// (0x000497e0) vkb2_top_grid_right_pane

0xa76b,	// (0x000497fe) vkb2_cell_keypad_pane_ParamLimits

0xa76b,	// (0x000497fe) vkb2_cell_keypad_pane

0xa83c,	// (0x000498cf) vkb2_area_bottom_grid_pane_ParamLimits

0xa83c,	// (0x000498cf) vkb2_area_bottom_grid_pane

0xa862,	// (0x000498f5) vkb2_area_bottom_pane_g1_ParamLimits

0xa862,	// (0x000498f5) vkb2_area_bottom_pane_g1

0xa886,	// (0x00049919) vkb2_area_bottom_pane_g2_ParamLimits

0xa886,	// (0x00049919) vkb2_area_bottom_pane_g2

0xa8b4,	// (0x00049947) vkb2_area_bottom_pane_g3_ParamLimits

0xa8b4,	// (0x00049947) vkb2_area_bottom_pane_g3

0x0002,

0xfda7,	// (0x0004ee3a) vkb2_area_bottom_pane_g_ParamLimits

0xfda7,	// (0x0004ee3a) vkb2_area_bottom_pane_g

0xa915,	// (0x000499a8) vkb2_top_cell_left_pane_ParamLimits

0xa915,	// (0x000499a8) vkb2_top_cell_left_pane

0xf155,	// (0x0004e1e8) vkb2_top_entry_pane_g1_ParamLimits

0xf155,	// (0x0004e1e8) vkb2_top_entry_pane_g1

0xf163,	// (0x0004e1f6) vkb2_top_entry_pane_t1_ParamLimits

0xf163,	// (0x0004e1f6) vkb2_top_entry_pane_t1

0xe052,	// (0x0004d0e5) vkb2_top_entry_pane_t2_ParamLimits

0xe052,	// (0x0004d0e5) vkb2_top_entry_pane_t2

0xe084,	// (0x0004d117) vkb2_top_entry_pane_t3_ParamLimits

0xe084,	// (0x0004d117) vkb2_top_entry_pane_t3

0x0002,

0xfdae,	// (0x0004ee41) vkb2_top_entry_pane_t_ParamLimits

0xfdae,	// (0x0004ee41) vkb2_top_entry_pane_t

0xa962,	// (0x000499f5) vkb2_top_grid_right_pane_g1_ParamLimits

0xa962,	// (0x000499f5) vkb2_top_grid_right_pane_g1

0xa978,	// (0x00049a0b) vkb2_top_grid_right_pane_g2_ParamLimits

0xa978,	// (0x00049a0b) vkb2_top_grid_right_pane_g2

0xa990,	// (0x00049a23) vkb2_top_grid_right_pane_g3_ParamLimits

0xa990,	// (0x00049a23) vkb2_top_grid_right_pane_g3

0xa9a8,	// (0x00049a3b) vkb2_top_grid_right_pane_g4_ParamLimits

0xa9a8,	// (0x00049a3b) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb5,	// (0x0004ee48) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb5,	// (0x0004ee48) vkb2_top_grid_right_pane_g

0xa9be,	// (0x00049a51) vkb2_top_cell_left_pane_g1

0xa9d5,	// (0x00049a68) vkb2_cell_keypad_pane_g1_ParamLimits

0xa9d5,	// (0x00049a68) vkb2_cell_keypad_pane_g1

0xe0a8,	// (0x0004d13b) vkb2_cell_keypad_pane_t1_ParamLimits

0xe0a8,	// (0x0004d13b) vkb2_cell_keypad_pane_t1

0xa9e3,	// (0x00049a76) vkb2_cell_bottom_grid_pane_ParamLimits

0xa9e3,	// (0x00049a76) vkb2_cell_bottom_grid_pane

0xaa1c,	// (0x00049aaf) vkb2_cell_bottom_grid_pane_g1

0xdf03,	// (0x0004cf96) aid_call2_pane_cp02

0xdf0b,	// (0x0004cf9e) aid_call_pane_cp02

0xdf13,	// (0x0004cfa6) clock_digital_number_pane_cp10

0xdf1b,	// (0x0004cfae) clock_digital_number_pane_cp11

0xdf23,	// (0x0004cfb6) clock_digital_number_pane_cp12

0xdf2b,	// (0x0004cfbe) clock_digital_number_pane_cp13

0xdf33,	// (0x0004cfc6) clock_digital_separator_pane_cp10

0x4b29,	// (0x00043bbc) popup_clock_digital_analogue_window_cp2_g1

0x4b29,	// (0x00043bbc) popup_clock_digital_analogue_window_cp2_g2

0xdf3b,	// (0x0004cfce) popup_clock_digital_analogue_window_cp2_g3

0x4b29,	// (0x00043bbc) popup_clock_digital_analogue_window_cp2_g4

0xdf3b,	// (0x0004cfce) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6a,	// (0x0004edfd) popup_clock_digital_analogue_window_cp2_g

0xdf43,	// (0x0004cfd6) popup_clock_digital_analogue_window_cp2_t1

0xdf51,	// (0x0004cfe4) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd75,	// (0x0004ee08) popup_clock_digital_analogue_window_cp2_t

0x71f6,	// (0x00046289) clock_digital_number_pane_cp10_g1

0x71f6,	// (0x00046289) clock_digital_number_pane_cp10_g2

0x0001,

0xfb51,	// (0x0004ebe4) clock_digital_number_pane_cp10_g

0x71f6,	// (0x00046289) clock_digital_separator_pane_cp10_g1

0x71f6,	// (0x00046289) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb51,	// (0x0004ebe4) clock_digital_separator_pane_cp10_g

0xd770,	// (0x0004c803) uniindi_top_pane_g3

0xd781,	// (0x0004c814) uniindi_top_pane_g4

0xa7f6,	// (0x00049889) vkb2_row_keypad_pane_ParamLimits

0xa7f6,	// (0x00049889) vkb2_row_keypad_pane

0xaa3c,	// (0x00049acf) vkb2_cell_t_keypad_pane_ParamLimits

0xaa3c,	// (0x00049acf) vkb2_cell_t_keypad_pane

0xaa4c,	// (0x00049adf) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xaa4c,	// (0x00049adf) vkb2_cell_t_keypad_pane_cp08

0xaa5f,	// (0x00049af2) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xaa5f,	// (0x00049af2) vkb2_cell_t_keypad_pane_cp09

0xaa73,	// (0x00049b06) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xaa73,	// (0x00049b06) vkb2_cell_t_keypad_pane_cp01

0xaa84,	// (0x00049b17) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xaa84,	// (0x00049b17) vkb2_cell_t_keypad_pane_cp02

0xaa95,	// (0x00049b28) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xaa95,	// (0x00049b28) vkb2_cell_t_keypad_pane_cp03

0xaaa6,	// (0x00049b39) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xaaa6,	// (0x00049b39) vkb2_cell_t_keypad_pane_cp04

0xaab7,	// (0x00049b4a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xaab7,	// (0x00049b4a) vkb2_cell_t_keypad_pane_cp05

0xaac8,	// (0x00049b5b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xaac8,	// (0x00049b5b) vkb2_cell_t_keypad_pane_cp06

0xaad9,	// (0x00049b6c) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xaad9,	// (0x00049b6c) vkb2_cell_t_keypad_pane_cp07

0xaaea,	// (0x00049b7d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xaaea,	// (0x00049b7d) vkb2_cell_t_keypad_pane_cp10

0xa29c,	// (0x0004932f) vkb2_cell_t_keypad_pane_g1

0xe0bf,	// (0x0004d152) vkb2_cell_t_keypad_pane_t1

0x8731,	// (0x000477c4) popup_grid_graphic2_window

0xf195,	// (0x0004e228) aid_size_cell_graphic2_ParamLimits

0xf195,	// (0x0004e228) aid_size_cell_graphic2

0xf1cd,	// (0x0004e260) bg_popup_window_pane_cp21_ParamLimits

0xf1cd,	// (0x0004e260) bg_popup_window_pane_cp21

0xf1db,	// (0x0004e26e) graphic2_pages_pane_ParamLimits

0xf1db,	// (0x0004e26e) graphic2_pages_pane

0xf221,	// (0x0004e2b4) grid_graphic2_control_pane_ParamLimits

0xf221,	// (0x0004e2b4) grid_graphic2_control_pane

0xf25f,	// (0x0004e2f2) grid_graphic2_pane_ParamLimits

0xf25f,	// (0x0004e2f2) grid_graphic2_pane

0xf2d3,	// (0x0004e366) cell_graphic2_pane

0x8731,	// (0x000477c4) main_comp_mode_pane

0xd21e,	// (0x0004c2b1) list_ai3_gene_pane_ParamLimits

0xdcdd,	// (0x0004cd70) bg_popup_window_pane_cp19_ParamLimits

0xd3be,	// (0x0004c451) bg_touch_area_indi_pane_ParamLimits

0xd3be,	// (0x0004c451) bg_touch_area_indi_pane

0xd3d4,	// (0x0004c467) bg_touch_area_indi_pane_cp01_ParamLimits

0xd3d4,	// (0x0004c467) bg_touch_area_indi_pane_cp01

0xd3ea,	// (0x0004c47d) bg_touch_area_indi_pane_cp02_ParamLimits

0xd3ea,	// (0x0004c47d) bg_touch_area_indi_pane_cp02

0xd402,	// (0x0004c495) bg_touch_area_indi_pane_cp03_ParamLimits

0xd402,	// (0x0004c495) bg_touch_area_indi_pane_cp03

0xd41c,	// (0x0004c4af) popup_slider_window_g1_ParamLimits

0xd438,	// (0x0004c4cb) popup_slider_window_g2_ParamLimits

0xd454,	// (0x0004c4e7) popup_slider_window_g3_ParamLimits

0xfcff,	// (0x0004ed92) popup_slider_window_g_ParamLimits

0xd470,	// (0x0004c503) popup_slider_window_t1_ParamLimits

0xd64a,	// (0x0004c6dd) small_volume_slider_vertical_pane_ParamLimits

0xf2d3,	// (0x0004e366) cell_graphic2_pane_ParamLimits

0xf321,	// (0x0004e3b4) bg_button_pane_cp10_ParamLimits

0xf321,	// (0x0004e3b4) bg_button_pane_cp10

0xf334,	// (0x0004e3c7) bg_button_pane_cp11_ParamLimits

0xf334,	// (0x0004e3c7) bg_button_pane_cp11

0xf347,	// (0x0004e3da) graphic2_pages_pane_g1_ParamLimits

0xf347,	// (0x0004e3da) graphic2_pages_pane_g1

0xf362,	// (0x0004e3f5) graphic2_pages_pane_g2_ParamLimits

0xf362,	// (0x0004e3f5) graphic2_pages_pane_g2

0x0001,

0xfdc3,	// (0x0004ee56) graphic2_pages_pane_g_ParamLimits

0xfdc3,	// (0x0004ee56) graphic2_pages_pane_g

0xf37a,	// (0x0004e40d) graphic2_pages_pane_t1_ParamLimits

0xf37a,	// (0x0004e40d) graphic2_pages_pane_t1

0xf390,	// (0x0004e423) cell_graphic2_control_pane_ParamLimits

0xf390,	// (0x0004e423) cell_graphic2_control_pane

0xf3b1,	// (0x0004e444) cell_graphic2_pane_g1_ParamLimits

0xf3b1,	// (0x0004e444) cell_graphic2_pane_g1

0xf3be,	// (0x0004e451) cell_graphic2_pane_g2_ParamLimits

0xf3be,	// (0x0004e451) cell_graphic2_pane_g2

0xf3cb,	// (0x0004e45e) cell_graphic2_pane_g3_ParamLimits

0xf3cb,	// (0x0004e45e) cell_graphic2_pane_g3

0xf3d8,	// (0x0004e46b) cell_graphic2_pane_g4_ParamLimits

0xf3d8,	// (0x0004e46b) cell_graphic2_pane_g4

0xf3e5,	// (0x0004e478) cell_graphic2_pane_g5_ParamLimits

0xf3e5,	// (0x0004e478) cell_graphic2_pane_g5

0x0004,

0xfdc8,	// (0x0004ee5b) cell_graphic2_pane_g_ParamLimits

0xfdc8,	// (0x0004ee5b) cell_graphic2_pane_g

0xf400,	// (0x0004e493) cell_graphic2_pane_t1_ParamLimits

0xf400,	// (0x0004e493) cell_graphic2_pane_t1

0x5485,	// (0x00044518) grid_highlight_pane_cp11_ParamLimits

0x5485,	// (0x00044518) grid_highlight_pane_cp11

0x3a2a,	// (0x00042abd) bg_button_pane_cp05

0xf429,	// (0x0004e4bc) cell_graphic2_control_pane_g1

0x71f6,	// (0x00046289) bg_touch_area_indi_pane_g1

0xe0d1,	// (0x0004d164) aid_cmod_rocker_key_size

0xe0db,	// (0x0004d16e) aid_cmode_itu_key_size

0xe0e5,	// (0x0004d178) main_cmode_video_pane

0xe0ef,	// (0x0004d182) main_comp_mode_itu_pane

0xe0fb,	// (0x0004d18e) main_comp_mode_rocker_pane

0xe107,	// (0x0004d19a) cell_cmode_rocker_pane_ParamLimits

0xe107,	// (0x0004d19a) cell_cmode_rocker_pane

0xe119,	// (0x0004d1ac) cell_cmode_itu_pane_ParamLimits

0xe119,	// (0x0004d1ac) cell_cmode_itu_pane

0x45fa,	// (0x0004368d) bg_button_pane_cp06_ParamLimits

0x45fa,	// (0x0004368d) bg_button_pane_cp06

0x7387,	// (0x0004641a) cell_cmode_rocker_pane_g1_ParamLimits

0x7387,	// (0x0004641a) cell_cmode_rocker_pane_g1

0xd683,	// (0x0004c716) cell_cmode_rocker_pane_g2_ParamLimits

0xd683,	// (0x0004c716) cell_cmode_rocker_pane_g2

0x0001,

0xfdd8,	// (0x0004ee6b) cell_cmode_rocker_pane_g_ParamLimits

0xfdd8,	// (0x0004ee6b) cell_cmode_rocker_pane_g

0x3887,	// (0x0004291a) bg_button_pane_cp07

0xe12e,	// (0x0004d1c1) cell_cmode_itu_pane_g1

0xe137,	// (0x0004d1ca) cell_cmode_itu_pane_t1

0xe145,	// (0x0004d1d8) cell_cmode_itu_pane_t2

0x0001,

0xfddd,	// (0x0004ee70) cell_cmode_itu_pane_t

0xd7f3,	// (0x0004c886) aid_touch_ctrl_left

0xd7fb,	// (0x0004c88e) aid_touch_ctrl_right

0x3887,	// (0x0004291a) compa_mode_pane

0xf451,	// (0x0004e4e4) aid_cmod_rocker_key_size_cp

0xf45b,	// (0x0004e4ee) aid_cmode_itu_key_size_cp

0xe153,	// (0x0004d1e6) compa_mode_pane_g1

0xe15b,	// (0x0004d1ee) compa_mode_pane_g2

0xe163,	// (0x0004d1f6) compa_mode_pane_g3

0x0002,

0xfde2,	// (0x0004ee75) compa_mode_pane_g

0xf465,	// (0x0004e4f8) main_comp_mode_itu_pane_cp

0xf46d,	// (0x0004e500) main_comp_mode_rocker_pane_cp

0xf475,	// (0x0004e508) cell_cmode_itu_pane_cp_ParamLimits

0xf475,	// (0x0004e508) cell_cmode_itu_pane_cp

0xf48a,	// (0x0004e51d) cell_cmode_rocker_pane_cp_ParamLimits

0xf48a,	// (0x0004e51d) cell_cmode_rocker_pane_cp

0x45fa,	// (0x0004368d) bg_button_pane_cp06_cp_ParamLimits

0x45fa,	// (0x0004368d) bg_button_pane_cp06_cp

0x7387,	// (0x0004641a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7387,	// (0x0004641a) cell_cmode_rocker_pane_g1_cp

0x71f6,	// (0x00046289) cell_cmode_rocker_pane_g2_cp

0x3887,	// (0x0004291a) bg_button_pane_cp07_cp

0xf49c,	// (0x0004e52f) cell_cmode_itu_pane_g1_cp

0xf4a5,	// (0x0004e538) cell_cmode_itu_pane_t1_cp

0xf4a5,	// (0x0004e538) cell_cmode_itu_pane_t2_cp

0xc484,	// (0x0004b517) settings_code_pane_cp2

0x38f7,	// (0x0004298a) bg_popup_window_pane_cp3_ParamLimits

0x3bf8,	// (0x00042c8b) heading_pane_cp3_ParamLimits

0x3c04,	// (0x00042c97) listscroll_popup_graphic_pane_ParamLimits

0xa045,	// (0x000490d8) fep_hwr_aid_pane_ParamLimits

0xa4bc,	// (0x0004954f) aid_touch_sctrl_top_ParamLimits

0xa4d7,	// (0x0004956a) sctrl_sk_top_pane_g1_ParamLimits

0xa29c,	// (0x0004932f) sctrl_sk_top_pane_g2_ParamLimits

0xfd18,	// (0x0004edab) sctrl_sk_top_pane_g_ParamLimits

0xa4e4,	// (0x00049577) sctrl_sk_top_pane_t1_ParamLimits

0xa4bc,	// (0x0004954f) aid_touch_sctrl_bottom_ParamLimits

0xa4e4,	// (0x00049577) sctrl_sk_bottom_pane_t1_ParamLimits

0xd73c,	// (0x0004c7cf) aid_area_touch_clock

0xa6cd,	// (0x00049760) aid_vkb2_area_top_pane_cell_ParamLimits

0xa6cd,	// (0x00049760) aid_vkb2_area_top_pane_cell

0xa818,	// (0x000498ab) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xa818,	// (0x000498ab) aid_vkb2_area_bottom_pane_cell

0xe04a,	// (0x0004d0dd) popup_char_count_window

0xe16b,	// (0x0004d1fe) popup_char_count_window_g1

0xe174,	// (0x0004d207) popup_char_count_window_g2

0xe17d,	// (0x0004d210) popup_char_count_window_g3

0x0002,

0xfde9,	// (0x0004ee7c) popup_char_count_window_g

0xe186,	// (0x0004d219) popup_char_count_window_t1

0xa593,	// (0x00049626) popup_fep_char_preview_window_ParamLimits

0xa593,	// (0x00049626) popup_fep_char_preview_window

0xa6eb,	// (0x0004977e) vkb2_top_candi_pane_ParamLimits

0xa6eb,	// (0x0004977e) vkb2_top_candi_pane

0xf4b3,	// (0x0004e546) cell_vkb2_top_candi_pane_ParamLimits

0xf4b3,	// (0x0004e546) cell_vkb2_top_candi_pane

0xaaff,	// (0x00049b92) bg_popup_fep_char_preview_window_ParamLimits

0xaaff,	// (0x00049b92) bg_popup_fep_char_preview_window

0xab0d,	// (0x00049ba0) popup_fep_char_preview_window_t1_ParamLimits

0xab0d,	// (0x00049ba0) popup_fep_char_preview_window_t1

0xe194,	// (0x0004d227) bg_popup_fep_char_preview_window_g1

0xe19c,	// (0x0004d22f) bg_popup_fep_char_preview_window_g2

0xe1a4,	// (0x0004d237) bg_popup_fep_char_preview_window_g3

0xe1ac,	// (0x0004d23f) bg_popup_fep_char_preview_window_g4

0xe1b4,	// (0x0004d247) bg_popup_fep_char_preview_window_g5

0xab47,	// (0x00049bda) bg_popup_fep_char_preview_window_g6

0xe1bc,	// (0x0004d24f) bg_popup_fep_char_preview_window_g7

0xe1c4,	// (0x0004d257) bg_popup_fep_char_preview_window_g8

0xe1cc,	// (0x0004d25f) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf0,	// (0x0004ee83) bg_popup_fep_char_preview_window_g

0xa29c,	// (0x0004932f) cell_vkb2_top_candi_pane_g1_ParamLimits

0xa29c,	// (0x0004932f) cell_vkb2_top_candi_pane_g1

0xa2aa,	// (0x0004933d) cell_vkb2_top_candi_pane_g2_ParamLimits

0xa2aa,	// (0x0004933d) cell_vkb2_top_candi_pane_g2

0xdb75,	// (0x0004cc08) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdb75,	// (0x0004cc08) cell_vkb2_top_candi_pane_g3

0xab4f,	// (0x00049be2) cell_vkb2_top_candi_pane_g4_ParamLimits

0xab4f,	// (0x00049be2) cell_vkb2_top_candi_pane_g4

0x75e7,	// (0x0004667a) cell_vkb2_top_candi_pane_g5_ParamLimits

0x75e7,	// (0x0004667a) cell_vkb2_top_candi_pane_g5

0xab70,	// (0x00049c03) cell_vkb2_top_candi_pane_g6_ParamLimits

0xab70,	// (0x00049c03) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe03,	// (0x0004ee96) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe03,	// (0x0004ee96) cell_vkb2_top_candi_pane_g

0xab7e,	// (0x00049c11) cell_vkb2_top_candi_pane_t1

0x9e81,	// (0x00048f14) aid_size_touch_slider_mark_ParamLimits

0x9e81,	// (0x00048f14) aid_size_touch_slider_mark

0xf211,	// (0x0004e2a4) grid_graphic2_catg_pane_ParamLimits

0xf211,	// (0x0004e2a4) grid_graphic2_catg_pane

0xf2af,	// (0x0004e342) popup_grid_graphic2_window_t1_ParamLimits

0xf2af,	// (0x0004e342) popup_grid_graphic2_window_t1

0xf2c1,	// (0x0004e354) popup_grid_graphic2_window_t2_ParamLimits

0xf2c1,	// (0x0004e354) popup_grid_graphic2_window_t2

0x0001,

0xfdbe,	// (0x0004ee51) popup_grid_graphic2_window_t_ParamLimits

0xfdbe,	// (0x0004ee51) popup_grid_graphic2_window_t

0x3a2a,	// (0x00042abd) bg_button_pane_cp05_ParamLimits

0xf429,	// (0x0004e4bc) cell_graphic2_control_pane_g1_ParamLimits

0xf500,	// (0x0004e593) cell_graphic2_catg_pane_ParamLimits

0xf500,	// (0x0004e593) cell_graphic2_catg_pane

0x3887,	// (0x0004291a) bg_button_pane_cp12

0xf512,	// (0x0004e5a5) cell_graphic2_catg_pane_g1

0xd708,	// (0x0004c79b) cell_tb_ext_pane_t1_ParamLimits

0xa935,	// (0x000499c8) vkb2_top_cell_right_narrow_pane_ParamLimits

0xa935,	// (0x000499c8) vkb2_top_cell_right_narrow_pane

0xa94d,	// (0x000499e0) vkb2_top_cell_right_wide_pane_ParamLimits

0xa94d,	// (0x000499e0) vkb2_top_cell_right_wide_pane

0xa037,	// (0x000490ca) bg_vkb2_func_pane_ParamLimits

0xa037,	// (0x000490ca) bg_vkb2_func_pane

0xa9be,	// (0x00049a51) vkb2_top_cell_left_pane_g1_ParamLimits

0xa037,	// (0x000490ca) bg_vkb2_fuc_pane_cp03_ParamLimits

0xa037,	// (0x000490ca) bg_vkb2_fuc_pane_cp03

0xaa1c,	// (0x00049aaf) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5421,	// (0x000444b4) bg_vkb2_func_pane_g1

0x5419,	// (0x000444ac) bg_vkb2_func_pane_g2

0x5429,	// (0x000444bc) bg_vkb2_func_pane_g3

0x5431,	// (0x000444c4) bg_vkb2_func_pane_g4

0x5439,	// (0x000444cc) bg_vkb2_func_pane_g5

0x5441,	// (0x000444d4) bg_vkb2_func_pane_g6

0x5451,	// (0x000444e4) bg_vkb2_func_pane_g7

0x5449,	// (0x000444dc) bg_vkb2_func_pane_g8

0x5411,	// (0x000444a4) bg_vkb2_func_pane_g9

0x0008,

0xfe10,	// (0x0004eea3) bg_vkb2_func_pane_g

0xa037,	// (0x000490ca) bg_vkb2_fuc_pane_cp01_ParamLimits

0xa037,	// (0x000490ca) bg_vkb2_fuc_pane_cp01

0xa9be,	// (0x00049a51) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xa9be,	// (0x00049a51) vkb2_top_cell_right_wide_pane_g1

0xa037,	// (0x000490ca) bg_vkb2_fuc_pane_cp02_ParamLimits

0xa037,	// (0x000490ca) bg_vkb2_fuc_pane_cp02

0xaa1c,	// (0x00049aaf) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xaa1c,	// (0x00049aaf) vkb2_top_cell_right_narrow_pane_g1

0xdc5b,	// (0x0004ccee) aid_touch_area_decrease_ParamLimits

0xdc5b,	// (0x0004ccee) aid_touch_area_decrease

0xdc7f,	// (0x0004cd12) aid_touch_area_increase_ParamLimits

0xdc7f,	// (0x0004cd12) aid_touch_area_increase

0xdc8b,	// (0x0004cd1e) aid_touch_area_mute_ParamLimits

0xdc8b,	// (0x0004cd1e) aid_touch_area_mute

0xdcaf,	// (0x0004cd42) aid_touch_area_slider_ParamLimits

0xdcaf,	// (0x0004cd42) aid_touch_area_slider

0xdce9,	// (0x0004cd7c) popup_slider_window_g4_ParamLimits

0xdce9,	// (0x0004cd7c) popup_slider_window_g4

0xdcf5,	// (0x0004cd88) popup_slider_window_g5_ParamLimits

0xdcf5,	// (0x0004cd88) popup_slider_window_g5

0xdd17,	// (0x0004cdaa) popup_slider_window_g6_ParamLimits

0xdd17,	// (0x0004cdaa) popup_slider_window_g6

0xd632,	// (0x0004c6c5) popup_slider_window_t2_ParamLimits

0xd632,	// (0x0004c6c5) popup_slider_window_t2

0x0001,

0xfd0c,	// (0x0004ed9f) popup_slider_window_t_ParamLimits

0xfd0c,	// (0x0004ed9f) popup_slider_window_t

0xdd29,	// (0x0004cdbc) slider_pane_ParamLimits

0xdd29,	// (0x0004cdbc) slider_pane

0xe1d4,	// (0x0004d267) slider_pane_g1_ParamLimits

0xe1d4,	// (0x0004d267) slider_pane_g1

0xe1e8,	// (0x0004d27b) slider_pane_g2_ParamLimits

0xe1e8,	// (0x0004d27b) slider_pane_g2

0xe1fe,	// (0x0004d291) slider_pane_g3_ParamLimits

0xe1fe,	// (0x0004d291) slider_pane_g3

0x0003,

0x0224,	// (0x0003f2b7) slider_pane_g_ParamLimits

0x0224,	// (0x0003f2b7) slider_pane_g

0x9ab2,	// (0x00048b45) popup_tb_float_extension_window_ParamLimits

0x9ab2,	// (0x00048b45) popup_tb_float_extension_window

0xe22a,	// (0x0004d2bd) aid_size_cell_tb_float_ext

0x3887,	// (0x0004291a) bg_popup_sub_window_cp28

0xe236,	// (0x0004d2c9) grid_tb_float_ext_pane

0xe240,	// (0x0004d2d3) cell_tb_float_ext_pane_ParamLimits

0xe240,	// (0x0004d2d3) cell_tb_float_ext_pane

0xe25a,	// (0x0004d2ed) cell_tb_float_ext_pane_g1

0xe263,	// (0x0004d2f6) grid_highlight_pane_cp12

0xa186,	// (0x00049219) cell_last_hwr_side_pane_ParamLimits

0xa186,	// (0x00049219) cell_last_hwr_side_pane

0x71f6,	// (0x00046289) cell_last_hwr_side_pane_g1

0xe26c,	// (0x0004d2ff) cell_last_hwr_side_pane_g2

0x0001,

0xfe23,	// (0x0004eeb6) cell_last_hwr_side_pane_g

0xa8e4,	// (0x00049977) vkb2_area_bottom_space_btn_pane_ParamLimits

0xa8e4,	// (0x00049977) vkb2_area_bottom_space_btn_pane

0xa29c,	// (0x0004932f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe0bf,	// (0x0004d152) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xab7e,	// (0x00049c11) cell_vkb2_top_candi_pane_t1_ParamLimits

0xab9d,	// (0x00049c30) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xab9d,	// (0x00049c30) vkb2_area_bottom_space_btn_pane_g1

0xabd7,	// (0x00049c6a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xabd7,	// (0x00049c6a) vkb2_area_bottom_space_btn_pane_g2

0xac0d,	// (0x00049ca0) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xac0d,	// (0x00049ca0) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe28,	// (0x0004eebb) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe28,	// (0x0004eebb) vkb2_area_bottom_space_btn_pane_g

0xa0fa,	// (0x0004918d) cel_fep_hwr_func_pane_ParamLimits

0xa0fa,	// (0x0004918d) cel_fep_hwr_func_pane

0xa136,	// (0x000491c9) cell_hwr_side_button_pane_ParamLimits

0xa136,	// (0x000491c9) cell_hwr_side_button_pane

0xd73c,	// (0x0004c7cf) aid_area_touch_clock_ParamLimits

0x3a2a,	// (0x00042abd) bg_uniindi_top_pane_ParamLimits

0xd74e,	// (0x0004c7e1) uniindi_top_pane_g1_ParamLimits

0xd764,	// (0x0004c7f7) uniindi_top_pane_g2_ParamLimits

0xd770,	// (0x0004c803) uniindi_top_pane_g3_ParamLimits

0xd781,	// (0x0004c814) uniindi_top_pane_g4_ParamLimits

0xfd44,	// (0x0004edd7) uniindi_top_pane_g_ParamLimits

0xd78e,	// (0x0004c821) uniindi_top_pane_t1_ParamLimits

0x3a2a,	// (0x00042abd) bg_vkb2_func_pane_cp01_ParamLimits

0x3a2a,	// (0x00042abd) bg_vkb2_func_pane_cp01

0xe275,	// (0x0004d308) cel_fep_hwr_func_pane_g1_ParamLimits

0xe275,	// (0x0004d308) cel_fep_hwr_func_pane_g1

0x3a2a,	// (0x00042abd) bg_vkb2_func_pane_cp02_ParamLimits

0x3a2a,	// (0x00042abd) bg_vkb2_func_pane_cp02

0xe275,	// (0x0004d308) cell_hwr_side_button_pane_g1_ParamLimits

0xe275,	// (0x0004d308) cell_hwr_side_button_pane_g1

0x5315,	// (0x000443a8) status_pane_g4_ParamLimits

0x5315,	// (0x000443a8) status_pane_g4

0x532f,	// (0x000443c2) status_pane_t1

0x7085,	// (0x00046118) form2_midp_gauge_slider_cont_pane

0x708d,	// (0x00046120) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc820,	// (0x0004b8b3) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc832,	// (0x0004b8c5) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb04,	// (0x0004eb97) form2_midp_gauge_slider_pane_t_ParamLimits

0x709f,	// (0x00046132) form2_midp_slider_pane_ParamLimits

0xa553,	// (0x000495e6) aid_size_cell_func_vkb2_ParamLimits

0xa553,	// (0x000495e6) aid_size_cell_func_vkb2

0xe216,	// (0x0004d2a9) slider_pane_g4_ParamLimits

0xe216,	// (0x0004d2a9) slider_pane_g4

0xac57,	// (0x00049cea) form2_midp_gauge_slider_pane_t2_cp01

0xac65,	// (0x00049cf8) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xac65,	// (0x00049cf8) form2_midp_gauge_slider_pane_t3_cp01

0xac82,	// (0x00049d15) form2_midp_slider_pane_cp01

0x3887,	// (0x0004291a) navi_smil_pane

0xe2a5,	// (0x0004d338) navi_smil_pane_g1

0xe2ad,	// (0x0004d340) navi_smil_pane_t1

0xe283,	// (0x0004d316) form2_midp_slider_pane_g1

0xe28c,	// (0x0004d31f) form2_midp_slider_pane_g2

0xe294,	// (0x0004d327) form2_midp_slider_pane_g3

0xe283,	// (0x0004d316) form2_midp_slider_pane_g4

0xd8f2,	// (0x0004c985) form2_midp_slider_pane_g5

0x0004,

0xfe31,	// (0x0004eec4) form2_midp_slider_pane_g

0xac47,	// (0x00049cda) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xac47,	// (0x00049cda) vkb2_area_bottom_space_btn_pane_g4

0xb787,	// (0x0004a81a) lc0_navi_pane_ParamLimits

0xb787,	// (0x0004a81a) lc0_navi_pane

0xb7fd,	// (0x0004a890) lc0_stat_indi_pane_ParamLimits

0xb7fd,	// (0x0004a890) lc0_stat_indi_pane

0xb814,	// (0x0004a8a7) ls0_title_pane_ParamLimits

0xb814,	// (0x0004a8a7) ls0_title_pane

0x45fa,	// (0x0004368d) bg_popup_sub_pane_cp14_ParamLimits

0xd723,	// (0x0004c7b6) list_uniindi_pane_ParamLimits

0xd72f,	// (0x0004c7c2) uniindi_top_pane_ParamLimits

0xd7cb,	// (0x0004c85e) list_single_uniindi_pane_g1_ParamLimits

0xd7de,	// (0x0004c871) list_single_uniindi_pane_t1_ParamLimits

0xac8b,	// (0x00049d1e) lc0_stat_clock_pane_ParamLimits

0xac8b,	// (0x00049d1e) lc0_stat_clock_pane

0xd8fb,	// (0x0004c98e) lc0_stat_indi_pane_g1_ParamLimits

0xd8fb,	// (0x0004c98e) lc0_stat_indi_pane_g1

0xd908,	// (0x0004c99b) lc0_stat_indi_pane_g2_ParamLimits

0xd908,	// (0x0004c99b) lc0_stat_indi_pane_g2

0x0001,

0xfe3c,	// (0x0004eecf) lc0_stat_indi_pane_g_ParamLimits

0xfe3c,	// (0x0004eecf) lc0_stat_indi_pane_g

0xac98,	// (0x00049d2b) lc0_uni_indicator_pane_ParamLimits

0xac98,	// (0x00049d2b) lc0_uni_indicator_pane

0xd915,	// (0x0004c9a8) ls0_title_pane_g1_ParamLimits

0xd915,	// (0x0004c9a8) ls0_title_pane_g1

0xd929,	// (0x0004c9bc) ls0_title_pane_t1_ParamLimits

0xd929,	// (0x0004c9bc) ls0_title_pane_t1

0xaca5,	// (0x00049d38) lc0_uni_indicator_pane_g1_ParamLimits

0xaca5,	// (0x00049d38) lc0_uni_indicator_pane_g1

0xe2bb,	// (0x0004d34e) lc0_stat_clock_pane_t1

0x8731,	// (0x000477c4) main_ai5_pane

0xe2c9,	// (0x0004d35c) ai5_sk_pane_ParamLimits

0xe2c9,	// (0x0004d35c) ai5_sk_pane

0xd95f,	// (0x0004c9f2) cell_ai5_widget_pane_ParamLimits

0xd95f,	// (0x0004c9f2) cell_ai5_widget_pane

0xe2d6,	// (0x0004d369) aid_size_cell_widget_grid

0xe2ec,	// (0x0004d37f) bg_ai5_widget_pane_ParamLimits

0xe2ec,	// (0x0004d37f) bg_ai5_widget_pane

0xe356,	// (0x0004d3e9) cell_ai5_widget_pane_g2

0xe366,	// (0x0004d3f9) cell_ai5_widget_pane_g3

0xe385,	// (0x0004d418) cell_ai5_widget_pane_g4

0xe391,	// (0x0004d424) cell_ai5_widget_pane_g5

0xe39d,	// (0x0004d430) cell_ai5_widget_pane_g6

0xe3a9,	// (0x0004d43c) cell_ai5_widget_pane_g7

0xe3f1,	// (0x0004d484) cell_ai5_widget_pane_t1_ParamLimits

0xe3f1,	// (0x0004d484) cell_ai5_widget_pane_t1

0xe40e,	// (0x0004d4a1) cell_ai5_widget_pane_t2_ParamLimits

0xe40e,	// (0x0004d4a1) cell_ai5_widget_pane_t2

0xe426,	// (0x0004d4b9) cell_ai5_widget_pane_t3_ParamLimits

0xe426,	// (0x0004d4b9) cell_ai5_widget_pane_t3

0xe43e,	// (0x0004d4d1) cell_ai5_widget_pane_t4_ParamLimits

0xe43e,	// (0x0004d4d1) cell_ai5_widget_pane_t4

0xe458,	// (0x0004d4eb) cell_ai5_widget_pane_t5_ParamLimits

0xe458,	// (0x0004d4eb) cell_ai5_widget_pane_t5

0xe477,	// (0x0004d50a) cell_ai5_widget_pane_t6_ParamLimits

0xe477,	// (0x0004d50a) cell_ai5_widget_pane_t6

0xe489,	// (0x0004d51c) cell_ai5_widget_pane_t7_ParamLimits

0xe489,	// (0x0004d51c) cell_ai5_widget_pane_t7

0xe4a2,	// (0x0004d535) cell_ai5_widget_pane_t8_ParamLimits

0xe4a2,	// (0x0004d535) cell_ai5_widget_pane_t8

0x0009,

0x0260,	// (0x0003f2f3) cell_ai5_widget_pane_t_ParamLimits

0x0260,	// (0x0003f2f3) cell_ai5_widget_pane_t

0xe4ee,	// (0x0004d581) grid_ai5_widget_pane

0x45fa,	// (0x0004368d) highlight_cell_ai5_widget_pane_ParamLimits

0x45fa,	// (0x0004368d) highlight_cell_ai5_widget_pane

0xda29,	// (0x0004cabc) ai5_sk_left_pane

0xda33,	// (0x0004cac6) ai5_sk_middle_pane

0xda3d,	// (0x0004cad0) ai5_sk_right_pane

0xe506,	// (0x0004d599) bg_ai5_widget_pane_g1_ParamLimits

0xe506,	// (0x0004d599) bg_ai5_widget_pane_g1

0xe512,	// (0x0004d5a5) bg_ai5_widget_pane_g2_ParamLimits

0xe512,	// (0x0004d5a5) bg_ai5_widget_pane_g2

0xe51e,	// (0x0004d5b1) bg_ai5_widget_pane_g3_ParamLimits

0xe51e,	// (0x0004d5b1) bg_ai5_widget_pane_g3

0xe52a,	// (0x0004d5bd) bg_ai5_widget_pane_g4_ParamLimits

0xe52a,	// (0x0004d5bd) bg_ai5_widget_pane_g4

0xe536,	// (0x0004d5c9) bg_ai5_widget_pane_g5_ParamLimits

0xe536,	// (0x0004d5c9) bg_ai5_widget_pane_g5

0xe542,	// (0x0004d5d5) bg_ai5_widget_pane_g6_ParamLimits

0xe542,	// (0x0004d5d5) bg_ai5_widget_pane_g6

0xe54e,	// (0x0004d5e1) bg_ai5_widget_pane_g7_ParamLimits

0xe54e,	// (0x0004d5e1) bg_ai5_widget_pane_g7

0xe55a,	// (0x0004d5ed) bg_ai5_widget_pane_g8_ParamLimits

0xe55a,	// (0x0004d5ed) bg_ai5_widget_pane_g8

0xe566,	// (0x0004d5f9) bg_ai5_widget_pane_g9_ParamLimits

0xe566,	// (0x0004d5f9) bg_ai5_widget_pane_g9

0x0008,

0x0275,	// (0x0003f308) bg_ai5_widget_pane_g_ParamLimits

0x0275,	// (0x0003f308) bg_ai5_widget_pane_g

0xe599,	// (0x0004d62c) cell_shortcut_ai5_widget_pane_ParamLimits

0xe599,	// (0x0004d62c) cell_shortcut_ai5_widget_pane

0x4fcb,	// (0x0004405e) bg_cell_shortcut_ai5_widget_pane

0xe5aa,	// (0x0004d63d) cell_grid_ai5_widget_pane_g1

0xe5b3,	// (0x0004d646) highlight_cell_shortcut_ai5_widget_pane

0x5421,	// (0x000444b4) ai5_sk_left_pane_g1

0xe5bb,	// (0x0004d64e) ai5_sk_left_pane_g2

0xe5c3,	// (0x0004d656) ai5_sk_left_pane_g3

0xe5cb,	// (0x0004d65e) ai5_sk_left_pane_g4

0x0003,

0xfe41,	// (0x0004eed4) ai5_sk_left_pane_g

0xe5d3,	// (0x0004d666) ai5_sk_left_pane_t1

0x5419,	// (0x000444ac) ai5_sk_right_pane_g1

0xe5e1,	// (0x0004d674) ai5_sk_right_pane_g2

0xe5e9,	// (0x0004d67c) ai5_sk_right_pane_g3

0xe5f1,	// (0x0004d684) ai5_sk_right_pane_g4

0x0003,

0xfe4a,	// (0x0004eedd) ai5_sk_right_pane_g

0xe5f9,	// (0x0004d68c) ai5_sk_right_pane_t1

0x5419,	// (0x000444ac) ai5_sk_middle_pane_g1

0x5421,	// (0x000444b4) ai5_sk_middle_pane_g2

0x5439,	// (0x000444cc) ai5_sk_middle_pane_g3

0xe5e9,	// (0x0004d67c) ai5_sk_middle_pane_g4

0xe5c3,	// (0x0004d656) ai5_sk_middle_pane_g5

0xe607,	// (0x0004d69a) ai5_sk_middle_pane_g6

0xda47,	// (0x0004cada) ai5_sk_middle_pane_g7

0x0006,

0xfe53,	// (0x0004eee6) ai5_sk_middle_pane_g

0xb6cc,	// (0x0004a75f) aid_touch_area_size_lc0_ParamLimits

0xb6cc,	// (0x0004a75f) aid_touch_area_size_lc0

0xa2cb,	// (0x0004935e) cell_hwr_candidate_pane_t1_ParamLimits

0x5237,	// (0x000442ca) aid_touch_navi_pane

0xb8eb,	// (0x0004a97e) status_dt_navi_pane_ParamLimits

0xb8eb,	// (0x0004a97e) status_dt_navi_pane

0xb8f8,	// (0x0004a98b) status_dt_sta_pane_ParamLimits

0xb8f8,	// (0x0004a98b) status_dt_sta_pane

0xda4f,	// (0x0004cae2) dt_sta_controll_pane

0xda5c,	// (0x0004caef) dt_sta_indi_pane

0xda6d,	// (0x0004cb00) dt_sta_title_pane

0x3a2a,	// (0x00042abd) bg_dt_sta_indi_pane_ParamLimits

0x3a2a,	// (0x00042abd) bg_dt_sta_indi_pane

0xe60f,	// (0x0004d6a2) dt_sta_battery_pane

0xda80,	// (0x0004cb13) dt_sta_indi_pane_g1

0xda89,	// (0x0004cb1c) dt_sta_indi_pane_g2

0xda92,	// (0x0004cb25) dt_sta_indi_pane_g3

0x0002,

0xfe62,	// (0x0004eef5) dt_sta_indi_pane_g

0xda9b,	// (0x0004cb2e) dt_sta_signal_pane

0x45fa,	// (0x0004368d) bg_dt_sta_title_pane_ParamLimits

0x45fa,	// (0x0004368d) bg_dt_sta_title_pane

0xe617,	// (0x0004d6aa) dt_sta_title_pane_g1

0xdaa4,	// (0x0004cb37) dt_sta_title_pane_t1_ParamLimits

0xdaa4,	// (0x0004cb37) dt_sta_title_pane_t1

0x3887,	// (0x0004291a) bg_dt_sta_control_pane

0xdab9,	// (0x0004cb4c) dt_sta_controll_pane_g1

0xe61f,	// (0x0004d6b2) bg_dt_sta_title_pane_g1

0xe628,	// (0x0004d6bb) bg_dt_sta_title_pane_g2

0xe631,	// (0x0004d6c4) bg_dt_sta_title_pane_g3

0x0002,

0x02b0,	// (0x0003f343) bg_dt_sta_title_pane_g

0x71f6,	// (0x00046289) bg_dt_sta_indi_pane_g1

0xe63a,	// (0x0004d6cd) dt_sta_signal_pane_g1

0xe642,	// (0x0004d6d5) dt_sta_signal_pane_g2

0x0001,

0x02b7,	// (0x0003f34a) dt_sta_signal_pane_g

0xe64a,	// (0x0004d6dd) dt_sta_battery_pane_g1

0xe653,	// (0x0004d6e6) dt_sta_battery_pane_t1

0x71f6,	// (0x00046289) bg_dt_sta_control_pane_g1

0x4bac,	// (0x00043c3f) fep_china_uni_eep_pane

0x4bb4,	// (0x00043c47) fep_china_uni_entry_pane_ParamLimits

0x4bc4,	// (0x00043c57) popup_fep_china_uni_window_g1_ParamLimits

0x4bd4,	// (0x00043c67) popup_fep_china_uni_window_g2_ParamLimits

0x4bd4,	// (0x00043c67) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x0004e7bb) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x0004e7bb) popup_fep_china_uni_window_g

0xe662,	// (0x0004d6f5) fep_china_uni_eep_pane_g1

0xe66a,	// (0x0004d6fd) fep_china_uni_eep_pane_t1

0xe29c,	// (0x0004d32f) aid_touch_area_size_smil_player

0x52e8,	// (0x0004437b) lc0_clock_pane

0x5323,	// (0x000443b6) status_pane_g5_ParamLimits

0x5323,	// (0x000443b6) status_pane_g5

0x9779,	// (0x0004880c) popup_keymap_window

0x5301,	// (0x00044394) status_icon_pane

0xe366,	// (0x0004d3f9) cell_ai5_widget_pane_g3_ParamLimits

0xe385,	// (0x0004d418) cell_ai5_widget_pane_g4_ParamLimits

0xe391,	// (0x0004d424) cell_ai5_widget_pane_g5_ParamLimits

0xe3b5,	// (0x0004d448) cell_ai5_widget_pane_g8_ParamLimits

0xe3b5,	// (0x0004d448) cell_ai5_widget_pane_g8

0xe3c9,	// (0x0004d45c) cell_ai5_widget_pane_g9_ParamLimits

0xe3c9,	// (0x0004d45c) cell_ai5_widget_pane_g9

0xe3dd,	// (0x0004d470) cell_ai5_widget_pane_g10_ParamLimits

0xe3dd,	// (0x0004d470) cell_ai5_widget_pane_g10

0xe679,	// (0x0004d70c) status_icon_pane_g1

0x3887,	// (0x0004291a) bg_popup_sub_pane_cp13

0xe681,	// (0x0004d714) popup_keymap_window_t1

0xb665,	// (0x0004a6f8) control_pane_g6_ParamLimits

0xb665,	// (0x0004a6f8) control_pane_g6

0xb672,	// (0x0004a705) control_pane_g7_ParamLimits

0xb672,	// (0x0004a705) control_pane_g7

0xb67f,	// (0x0004a712) control_pane_g8_ParamLimits

0xb67f,	// (0x0004a712) control_pane_g8

0xda4f,	// (0x0004cae2) dt_sta_controll_pane_ParamLimits

0xda5c,	// (0x0004caef) dt_sta_indi_pane_ParamLimits

0xda6d,	// (0x0004cb00) dt_sta_title_pane_ParamLimits

0x3e80,	// (0x00042f13) aid_size_touch_scroll_bar_cale

0x880a,	// (0x0004789d) popup_discreet_window_ParamLimits

0x880a,	// (0x0004789d) popup_discreet_window

0x8884,	// (0x00047917) popup_sk_window

0x5969,	// (0x000449fc) bg_popup_sub_pane_cp28_ParamLimits

0x5969,	// (0x000449fc) bg_popup_sub_pane_cp28

0xe68f,	// (0x0004d722) popup_discreet_window_g1_ParamLimits

0xe68f,	// (0x0004d722) popup_discreet_window_g1

0xe6af,	// (0x0004d742) popup_discreet_window_t1_ParamLimits

0xe6af,	// (0x0004d742) popup_discreet_window_t1

0xe6cd,	// (0x0004d760) popup_discreet_window_t2_ParamLimits

0xe6cd,	// (0x0004d760) popup_discreet_window_t2

0x0002,

0x02bc,	// (0x0003f34f) popup_discreet_window_t_ParamLimits

0x02bc,	// (0x0003f34f) popup_discreet_window_t

0xacba,	// (0x00049d4d) popup_sk_window_g1

0xacc4,	// (0x00049d57) popup_sk_window_g2

0x0001,

0xfe69,	// (0x0004eefc) popup_sk_window_g

0xacce,	// (0x00049d61) popup_sk_window_t1

0xacdc,	// (0x00049d6f) popup_sk_window_t1_copy1

0xe356,	// (0x0004d3e9) cell_ai5_widget_pane_g2_ParamLimits

0xe4b4,	// (0x0004d547) cell_ai5_widget_pane_t9_ParamLimits

0xe4b4,	// (0x0004d547) cell_ai5_widget_pane_t9

0x3887,	// (0x0004291a) main_fep_fshwr2_pane

0xacea,	// (0x00049d7d) aid_fshwr2_btn_pane

0xacf6,	// (0x00049d89) aid_fshwr2_syb_pane

0xad02,	// (0x00049d95) aid_fshwr2_txt_pane

0xad0e,	// (0x00049da1) fshwr2_func_candi_pane

0xad23,	// (0x00049db6) fshwr2_hwr_syb_pane

0xad33,	// (0x00049dc6) fshwr2_icf_pane

0x3887,	// (0x0004291a) fshwr2_icf_bg_pane

0xdac2,	// (0x0004cb55) fshwr2_icf_pane_t1_ParamLimits

0xdac2,	// (0x0004cb55) fshwr2_icf_pane_t1

0x71f6,	// (0x00046289) fshwr2_func_candi_pane_g1

0xe71f,	// (0x0004d7b2) fshwr2_func_candi_row_pane_ParamLimits

0xe71f,	// (0x0004d7b2) fshwr2_func_candi_row_pane

0xdad9,	// (0x0004cb6c) cell_fshwr2_syb_pane_ParamLimits

0xdad9,	// (0x0004cb6c) cell_fshwr2_syb_pane

0x7387,	// (0x0004641a) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7387,	// (0x0004641a) fshwr2_hwr_syb_pane_g1

0x3887,	// (0x0004291a) bg_popup_call_pane_cp01

0xe730,	// (0x0004d7c3) fshwr2_func_candi_cell_pane_ParamLimits

0xe730,	// (0x0004d7c3) fshwr2_func_candi_cell_pane

0xe75e,	// (0x0004d7f1) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe75e,	// (0x0004d7f1) fshwr2_func_candi_cell_bg_pane

0xe778,	// (0x0004d80b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe778,	// (0x0004d80b) fshwr2_func_candi_cell_pane_g1

0xe798,	// (0x0004d82b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe798,	// (0x0004d82b) fshwr2_func_candi_cell_pane_t1

0x3887,	// (0x0004291a) bg_button_pane_cp08

0x4fcb,	// (0x0004405e) cell_fshwr2_syb_bg_pane

0xdaf5,	// (0x0004cb88) cell_fshwr2_syb_bg_pane_g1

0xdafd,	// (0x0004cb90) cell_fshwr2_syb_bg_pane_t1

0x45fa,	// (0x0004368d) main_tmo_pane

0xbd65,	// (0x0004adf8) uni_indicator_pane_g1_ParamLimits

0xbd7a,	// (0x0004ae0d) uni_indicator_pane_g2_ParamLimits

0x6329,	// (0x000453bc) uni_indicator_pane_g3_ParamLimits

0x633f,	// (0x000453d2) uni_indicator_pane_g4_ParamLimits

0x633f,	// (0x000453d2) uni_indicator_pane_g4

0x6353,	// (0x000453e6) uni_indicator_pane_g5_ParamLimits

0x6353,	// (0x000453e6) uni_indicator_pane_g5

0x6367,	// (0x000453fa) uni_indicator_pane_g6_ParamLimits

0x6367,	// (0x000453fa) uni_indicator_pane_g6

0xf927,	// (0x0004e9ba) uni_indicator_pane_g_ParamLimits

0xdc3d,	// (0x0004ccd0) popup_tmo_note_window_ParamLimits

0xdc3d,	// (0x0004ccd0) popup_tmo_note_window

0xa535,	// (0x000495c8) fshwr2_bg_pane

0xe789,	// (0x0004d81c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe789,	// (0x0004d81c) fshwr2_func_candi_cell_pane_g2

0x0001,

0x02c8,	// (0x0003f35b) fshwr2_func_candi_cell_pane_g_ParamLimits

0x02c8,	// (0x0003f35b) fshwr2_func_candi_cell_pane_g

0x71f6,	// (0x00046289) bg_popup_window_pane_cp01

0xe7ab,	// (0x0004d83e) bg_popup_window_pane_g1_cp01

0xe7b4,	// (0x0004d847) bg_popup_window_pane_cp22_ParamLimits

0xe7b4,	// (0x0004d847) bg_popup_window_pane_cp22

0xe7c2,	// (0x0004d855) listscroll_tmo_link_pane_ParamLimits

0xe7c2,	// (0x0004d855) listscroll_tmo_link_pane

0xe802,	// (0x0004d895) popup_tmo_note_window_g1_ParamLimits

0xe802,	// (0x0004d895) popup_tmo_note_window_g1

0xe80f,	// (0x0004d8a2) tmo_note_info_pane_ParamLimits

0xe80f,	// (0x0004d8a2) tmo_note_info_pane

0xdb0c,	// (0x0004cb9f) list_tmo_note_info_pane_g1_ParamLimits

0xdb0c,	// (0x0004cb9f) list_tmo_note_info_pane_g1

0xe829,	// (0x0004d8bc) list_tmo_note_info_pane_g2_ParamLimits

0xe829,	// (0x0004d8bc) list_tmo_note_info_pane_g2

0x0001,

0xfe6e,	// (0x0004ef01) list_tmo_note_info_pane_g_ParamLimits

0xfe6e,	// (0x0004ef01) list_tmo_note_info_pane_g

0xe845,	// (0x0004d8d8) list_tmo_note_info_text_pane_ParamLimits

0xe845,	// (0x0004d8d8) list_tmo_note_info_text_pane

0xe887,	// (0x0004d91a) list_tmo_link_pane

0xe894,	// (0x0004d927) scroll_pane_cp20

0xe8a1,	// (0x0004d934) list_single_tmo_link_pane_ParamLimits

0xe8a1,	// (0x0004d934) list_single_tmo_link_pane

0xe8b1,	// (0x0004d944) list_single_tmo_link_pane_t1

0xe8bf,	// (0x0004d952) list_tmo_note_info_text_pane_t1_ParamLimits

0xe8bf,	// (0x0004d952) list_tmo_note_info_text_pane_t1

0xb2a1,	// (0x0004a334) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb2a1,	// (0x0004a334) aid_size_touch_scroll_bar_cp01

0x8fe4,	// (0x00048077) aid_size_touch_slider_marker

0x886c,	// (0x000478ff) popup_settings_window_ParamLimits

0x886c,	// (0x000478ff) popup_settings_window

0xb6a0,	// (0x0004a733) popup_candi_list_indi_window

0x5237,	// (0x000442ca) aid_touch_navi_pane_ParamLimits

0xa490,	// (0x00049523) rs_clock_indi_pane

0xa499,	// (0x0004952c) sctrl_sk_bottom_pane_ParamLimits

0xa4aa,	// (0x0004953d) sctrl_sk_top_pane_ParamLimits

0xa5ad,	// (0x00049640) popup_fep_tooltip_window

0xe2d6,	// (0x0004d369) aid_size_cell_widget_grid_ParamLimits

0xe34a,	// (0x0004d3dd) cell_ai5_widget_pane_g1_ParamLimits

0xe34a,	// (0x0004d3dd) cell_ai5_widget_pane_g1

0xe39d,	// (0x0004d430) cell_ai5_widget_pane_g6_ParamLimits

0xe3a9,	// (0x0004d43c) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x024b,	// (0x0003f2de) cell_ai5_widget_pane_g_ParamLimits

0x024b,	// (0x0003f2de) cell_ai5_widget_pane_g

0xe4d8,	// (0x0004d56b) cell_ai5_widget_pane_t10_ParamLimits

0xe4d8,	// (0x0004d56b) cell_ai5_widget_pane_t10

0xe4ee,	// (0x0004d581) grid_ai5_widget_pane_ParamLimits

0xe572,	// (0x0004d605) cell_contacts_ai5_widget_pane_ParamLimits

0xe572,	// (0x0004d605) cell_contacts_ai5_widget_pane

0xe6e2,	// (0x0004d775) popup_discreet_window_t3_ParamLimits

0xe6e2,	// (0x0004d775) popup_discreet_window_t3

0xad48,	// (0x00049ddb) popup_fshwr2_char_preview_window_ParamLimits

0xad48,	// (0x00049ddb) popup_fshwr2_char_preview_window

0xdb23,	// (0x0004cbb6) tmo_note_info_pane_t1

0xdb38,	// (0x0004cbcb) tmo_note_info_pane_t2

0xdb4f,	// (0x0004cbe2) tmo_note_info_pane_t3

0xe863,	// (0x0004d8f6) tmo_note_info_pane_t4

0xe875,	// (0x0004d908) tmo_note_info_pane_t5

0x0004,

0xfe73,	// (0x0004ef06) tmo_note_info_pane_t

0xe887,	// (0x0004d91a) list_tmo_link_pane_ParamLimits

0xe894,	// (0x0004d927) scroll_pane_cp20_ParamLimits

0x3887,	// (0x0004291a) bg_popup_fep_char_preview_window_cp01

0xe8d8,	// (0x0004d96b) popup_fshwr2_char_preview_window_t1

0xe8e6,	// (0x0004d979) popup_candi_list_indi_window_g1

0xe8ef,	// (0x0004d982) bg_cell_contacts_ai5_widget_pane

0xe8fb,	// (0x0004d98e) cell_contacts_ai5_widget_pane_g1

0xe90e,	// (0x0004d9a1) cell_contacts_ai5_widget_pane_g2

0xe91a,	// (0x0004d9ad) cell_contacts_ai5_widget_pane_g3

0x0002,

0x02dd,	// (0x0003f370) cell_contacts_ai5_widget_pane_g

0xe92c,	// (0x0004d9bf) cell_contacts_ai5_widget_pane_t1

0x45fa,	// (0x0004368d) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe9a6,	// (0x0004da39) settings_container_pane

0x4fcb,	// (0x0004405e) listscroll_set_pane_copy1

0x6b5b,	// (0x00045bee) scroll_pane_cp121_copy1

0xe9b2,	// (0x0004da45) set_content_pane_copy1

0xe9ba,	// (0x0004da4d) aid_height_set_list_copy1_ParamLimits

0xe9ba,	// (0x0004da4d) aid_height_set_list_copy1

0x53a3,	// (0x00044436) aid_size_parent_copy1_ParamLimits

0x53a3,	// (0x00044436) aid_size_parent_copy1

0xe9c6,	// (0x0004da59) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe9c6,	// (0x0004da59) button_value_adjust_pane_cp6_copy1

0x475f,	// (0x000437f2) list_highlight_pane_cp2_copy1_ParamLimits

0x475f,	// (0x000437f2) list_highlight_pane_cp2_copy1

0xe9da,	// (0x0004da6d) list_set_pane_copy1_ParamLimits

0xe9da,	// (0x0004da6d) list_set_pane_copy1

0xe941,	// (0x0004d9d4) main_pane_set_t1_copy1_ParamLimits

0xe941,	// (0x0004d9d4) main_pane_set_t1_copy1

0xe97b,	// (0x0004da0e) main_pane_set_t2_copy1_ParamLimits

0xe97b,	// (0x0004da0e) main_pane_set_t2_copy1

0xea87,	// (0x0004db1a) main_pane_set_t3_copy1

0xea95,	// (0x0004db28) main_pane_set_t4_copy1

0xe99a,	// (0x0004da2d) set_content_pane_g1_copy1_ParamLimits

0xe99a,	// (0x0004da2d) set_content_pane_g1_copy1

0xeaa3,	// (0x0004db36) setting_code_pane_copy1

0xeaab,	// (0x0004db3e) setting_slider_graphic_pane_copy1

0xeaab,	// (0x0004db3e) setting_slider_pane_copy1

0xeaab,	// (0x0004db3e) setting_text_pane_copy1

0xeaab,	// (0x0004db3e) setting_volume_pane_copy1

0xeaa3,	// (0x0004db36) settings_code_pane_cp2_copy1

0xeab3,	// (0x0004db46) settings_code_pane_cp_copy1_ParamLimits

0xeab3,	// (0x0004db46) settings_code_pane_cp_copy1

0xad5c,	// (0x00049def) volume_set_pane_copy1

0xeac7,	// (0x0004db5a) volume_set_pane_g10_copy1

0xeacf,	// (0x0004db62) volume_set_pane_g1_copy1

0xead7,	// (0x0004db6a) volume_set_pane_g2_copy1

0xeadf,	// (0x0004db72) volume_set_pane_g3_copy1

0xeae7,	// (0x0004db7a) volume_set_pane_g4_copy1

0xeaef,	// (0x0004db82) volume_set_pane_g5_copy1

0xeaf7,	// (0x0004db8a) volume_set_pane_g6_copy1

0xeaff,	// (0x0004db92) volume_set_pane_g7_copy1

0xeb07,	// (0x0004db9a) volume_set_pane_g8_copy1

0xeb0f,	// (0x0004dba2) volume_set_pane_g9_copy1

0x38f7,	// (0x0004298a) bg_set_opt_pane_cp_copy1_ParamLimits

0x38f7,	// (0x0004298a) bg_set_opt_pane_cp_copy1

0xad64,	// (0x00049df7) setting_slider_pane_t1_copy1_ParamLimits

0xad64,	// (0x00049df7) setting_slider_pane_t1_copy1

0xad82,	// (0x00049e15) setting_slider_pane_t2_copy1_ParamLimits

0xad82,	// (0x00049e15) setting_slider_pane_t2_copy1

0xad9c,	// (0x00049e2f) setting_slider_pane_t3_copy1_ParamLimits

0xad9c,	// (0x00049e2f) setting_slider_pane_t3_copy1

0xadb4,	// (0x00049e47) slider_set_pane_copy1_ParamLimits

0xadb4,	// (0x00049e47) slider_set_pane_copy1

0x4655,	// (0x000436e8) set_opt_bg_pane_g1_copy2

0x465d,	// (0x000436f0) set_opt_bg_pane_g2_copy2

0xeb17,	// (0x0004dbaa) set_opt_bg_pane_g3_copy2

0x466d,	// (0x00043700) set_opt_bg_pane_g4_copy2

0x4675,	// (0x00043708) set_opt_bg_pane_g5_copy2

0x467d,	// (0x00043710) set_opt_bg_pane_g6_copy2

0xeb21,	// (0x0004dbb4) set_opt_bg_pane_g7_copy2

0xeb29,	// (0x0004dbbc) set_opt_bg_pane_g8_copy2

0xeb33,	// (0x0004dbc6) set_opt_bg_pane_g9_copy2

0xeb3d,	// (0x0004dbd0) aid_size_touch_slider_mark_copy1_ParamLimits

0xeb3d,	// (0x0004dbd0) aid_size_touch_slider_mark_copy1

0xeb51,	// (0x0004dbe4) slider_set_pane_g1_copy1

0xeb5a,	// (0x0004dbed) slider_set_pane_g2_copy1

0x6ea5,	// (0x00045f38) slider_set_pane_g3_copy1_ParamLimits

0x6ea5,	// (0x00045f38) slider_set_pane_g3_copy1

0x6eb9,	// (0x00045f4c) slider_set_pane_g4_copy1_ParamLimits

0x6eb9,	// (0x00045f4c) slider_set_pane_g4_copy1

0x6ed1,	// (0x00045f64) slider_set_pane_g5_copy1_ParamLimits

0x6ed1,	// (0x00045f64) slider_set_pane_g5_copy1

0x6ea5,	// (0x00045f38) slider_set_pane_g6_copy1_ParamLimits

0x6ea5,	// (0x00045f38) slider_set_pane_g6_copy1

0xeb62,	// (0x0004dbf5) slider_set_pane_g7_copy1_ParamLimits

0xeb62,	// (0x0004dbf5) slider_set_pane_g7_copy1

0x389b,	// (0x0004292e) bg_set_opt_pane_cp2_copy1

0xeb78,	// (0x0004dc0b) setting_slider_graphic_pane_g1_copy1

0xeb81,	// (0x0004dc14) setting_slider_graphic_pane_t1_copy1

0xeb91,	// (0x0004dc24) setting_slider_graphic_pane_t2_copy1

0xeba1,	// (0x0004dc34) slider_set_pane_cp_copy1

0xebb1,	// (0x0004dc44) input_focus_pane_cp1_copy1

0xebba,	// (0x0004dc4d) list_set_text_pane_copy1

0xebc2,	// (0x0004dc55) setting_text_pane_g1_copy1

0xc3e9,	// (0x0004b47c) set_text_pane_t1_copy1

0xebb1,	// (0x0004dc44) input_focus_pane_cp2_copy1

0xebc2,	// (0x0004dc55) setting_code_pane_g1_copy1

0xebcb,	// (0x0004dc5e) setting_code_pane_t1_copy1

0x6127,	// (0x000451ba) list_set_graphic_pane_copy1

0x389b,	// (0x0004292e) bg_set_opt_pane_cp4_copy1

0x4d51,	// (0x00043de4) list_set_graphic_pane_g1_copy1_ParamLimits

0x4d51,	// (0x00043de4) list_set_graphic_pane_g1_copy1

0xebd9,	// (0x0004dc6c) list_set_graphic_pane_g2_copy1

0x4d69,	// (0x00043dfc) list_set_graphic_pane_t1_copy1_ParamLimits

0x4d69,	// (0x00043dfc) list_set_graphic_pane_t1_copy1

0x71f6,	// (0x00046289) rs_clock_indi_pane_g1

0xebe1,	// (0x0004dc74) rs_clock_indi_pane_t1

0xebef,	// (0x0004dc82) rs_indi_pane

0xebf7,	// (0x0004dc8a) rs_indi_pane_g1

0xec00,	// (0x0004dc93) rs_indi_pane_g2

0xec09,	// (0x0004dc9c) rs_indi_pane_g3

0x0002,

0x02e4,	// (0x0003f377) rs_indi_pane_g

0x4fcb,	// (0x0004405e) bg_popup_preview_window_pane_cp03

0xec12,	// (0x0004dca5) popup_fep_tooltip_window_t1

0xcd2d,	// (0x0004bdc0) popup_note2_window_g2_ParamLimits

0xcd2d,	// (0x0004bdc0) popup_note2_window_g2

0x0001,

0xfc7c,	// (0x0004ed0f) popup_note2_window_g_ParamLimits

0xfc7c,	// (0x0004ed0f) popup_note2_window_g

0xd1e4,	// (0x0004c277) bg_popup_sub_pane_cp11_ParamLimits

0xd1f1,	// (0x0004c284) cell_ai3_links_pane_g1_ParamLimits

0xd208,	// (0x0004c29b) cell_ai3_links_pane_t1

0xc3e9,	// (0x0004b47c) set_text_pane_t1_copy1_ParamLimits

0xb58e,	// (0x0004a621) cell_graphic_popup_pane_cp2_ParamLimits

0xb58e,	// (0x0004a621) cell_graphic_popup_pane_cp2

0xdb64,	// (0x0004cbf7) cell_graphic_popup_pane_g1_cp2

0x3c93,	// (0x00042d26) cell_graphic_popup_pane_g2_cp2

0xec20,	// (0x0004dcb3) cell_graphic_popup_pane_g3_cp2

0xec28,	// (0x0004dcbb) cell_graphic_popup_pane_t2_cp2

0x3ca4,	// (0x00042d37) grid_highlight_pane_cp3_cp2

0x4906,	// (0x00043999) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x45fa,	// (0x0004368d) main_tmo_pane_ParamLimits

0xdc31,	// (0x0004ccc4) popup_tmo_big_image_note_window

0xe33a,	// (0x0004d3cd) cell_ai5_widget_list_pane

0xe342,	// (0x0004d3d5) cell_ai5_widget_lrg_icon_pane

0xdb23,	// (0x0004cbb6) tmo_note_info_pane_t1_ParamLimits

0xdb38,	// (0x0004cbcb) tmo_note_info_pane_t2_ParamLimits

0xdb4f,	// (0x0004cbe2) tmo_note_info_pane_t3_ParamLimits

0xe863,	// (0x0004d8f6) tmo_note_info_pane_t4_ParamLimits

0xe875,	// (0x0004d908) tmo_note_info_pane_t5_ParamLimits

0xfe73,	// (0x0004ef06) tmo_note_info_pane_t_ParamLimits

0xe9a6,	// (0x0004da39) settings_container_pane_ParamLimits

0xeba9,	// (0x0004dc3c) indicator_popup_pane_cp5

0xeba9,	// (0x0004dc3c) indicator_popup_pane_cp6

0x6127,	// (0x000451ba) list_set_graphic_pane_copy1_ParamLimits

0x3887,	// (0x0004291a) bg_popup_window_pane_cp23

0xec36,	// (0x0004dcc9) popup_tmo_big_image_note_window_g1

0xec3f,	// (0x0004dcd2) popup_tmo_big_image_note_window_t1

0xec4f,	// (0x0004dce2) popup_tmo_big_image_note_window_t2

0xec5f,	// (0x0004dcf2) popup_tmo_big_image_note_window_t3

0x0002,

0x02eb,	// (0x0003f37e) popup_tmo_big_image_note_window_t

0xec6f,	// (0x0004dd02) cell_ai5_widget_lrg_icon_pane_g1

0xec77,	// (0x0004dd0a) cell_ai5_widget_lrg_icon_pane_t1

0xec85,	// (0x0004dd18) cell_ai5_widget_list_row_pane_ParamLimits

0xec85,	// (0x0004dd18) cell_ai5_widget_list_row_pane

0xec9d,	// (0x0004dd30) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xec9d,	// (0x0004dd30) cell_ai5_widget_list_row_pane_g1

0xecaa,	// (0x0004dd3d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xecaa,	// (0x0004dd3d) cell_ai5_widget_list_row_pane_t1

0xecc2,	// (0x0004dd55) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xecc2,	// (0x0004dd55) cell_ai5_widget_list_row_pane_t2

0x0002,

0x02f2,	// (0x0003f385) cell_ai5_widget_list_row_pane_t_ParamLimits

0x02f2,	// (0x0003f385) cell_ai5_widget_list_row_pane_t

0x8731,	// (0x000477c4) main_fep_vtchi_ss_pane

0xadd9,	// (0x00049e6c) popup_fep_char_pre_window

0xade1,	// (0x00049e74) popup_fep_ituss_window

0xae02,	// (0x00049e95) popup_fep_vkbss_window

0xecea,	// (0x0004dd7d) grid_vkbss_keypad_pane_ParamLimits

0xecea,	// (0x0004dd7d) grid_vkbss_keypad_pane

0xecfa,	// (0x0004dd8d) ituss_keypad_pane

0xae2d,	// (0x00049ec0) aid_vkbss_key_offset_ParamLimits

0xae2d,	// (0x00049ec0) aid_vkbss_key_offset

0xae39,	// (0x00049ecc) cell_vkbss_key_pane_ParamLimits

0xae39,	// (0x00049ecc) cell_vkbss_key_pane

0x611b,	// (0x000451ae) bg_cell_vkbss_key_g1_ParamLimits

0x611b,	// (0x000451ae) bg_cell_vkbss_key_g1

0xed0a,	// (0x0004dd9d) cell_vkbss_key_3p_pane_ParamLimits

0xed0a,	// (0x0004dd9d) cell_vkbss_key_3p_pane

0xed24,	// (0x0004ddb7) cell_vkbss_key_g1_ParamLimits

0xed24,	// (0x0004ddb7) cell_vkbss_key_g1

0xed3e,	// (0x0004ddd1) cell_vkbss_key_t1_ParamLimits

0xed3e,	// (0x0004ddd1) cell_vkbss_key_t1

0xae4f,	// (0x00049ee2) cell_ituss_key_pane_ParamLimits

0xae4f,	// (0x00049ee2) cell_ituss_key_pane

0xed69,	// (0x0004ddfc) bg_cell_ituss_key_g1_ParamLimits

0xed69,	// (0x0004ddfc) bg_cell_ituss_key_g1

0xed75,	// (0x0004de08) cell_ituss_key_pane_g1_ParamLimits

0xed75,	// (0x0004de08) cell_ituss_key_pane_g1

0xed89,	// (0x0004de1c) cell_ituss_key_pane_g2_ParamLimits

0xed89,	// (0x0004de1c) cell_ituss_key_pane_g2

0x0001,

0x02f9,	// (0x0003f38c) cell_ituss_key_pane_g_ParamLimits

0x02f9,	// (0x0003f38c) cell_ituss_key_pane_g

0xedb7,	// (0x0004de4a) cell_ituss_key_t1_ParamLimits

0xedb7,	// (0x0004de4a) cell_ituss_key_t1

0xeded,	// (0x0004de80) cell_ituss_key_t2_ParamLimits

0xeded,	// (0x0004de80) cell_ituss_key_t2

0xee1e,	// (0x0004deb1) cell_ituss_key_t3_ParamLimits

0xee1e,	// (0x0004deb1) cell_ituss_key_t3

0xee58,	// (0x0004deeb) cell_ituss_key_t4_ParamLimits

0xee58,	// (0x0004deeb) cell_ituss_key_t4

0x0003,

0x02fe,	// (0x0003f391) cell_ituss_key_t_ParamLimits

0x02fe,	// (0x0003f391) cell_ituss_key_t

0xee92,	// (0x0004df25) cell_vkbss_key_3p_pane_g1

0xee9a,	// (0x0004df2d) cell_vkbss_key_3p_pane_g2

0xeea2,	// (0x0004df35) cell_vkbss_key_3p_pane_g3

0x0002,

0x0307,	// (0x0003f39a) cell_vkbss_key_3p_pane_g

0x3887,	// (0x0004291a) bg_popup_fep_char_preview_window_cp02

0xeeaa,	// (0x0004df3d) popup_fep_char_pre_window_t1

0xda1f,	// (0x0004cab2) main_ai5_sk_pane

0xe8ef,	// (0x0004d982) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe8fb,	// (0x0004d98e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe90e,	// (0x0004d9a1) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe91a,	// (0x0004d9ad) cell_contacts_ai5_widget_pane_g3_ParamLimits

0x02dd,	// (0x0003f370) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe92c,	// (0x0004d9bf) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x45fa,	// (0x0004368d) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xdb6c,	// (0x0004cbff) main_ai5_sk_pane_g1

0x57a7,	// (0x0004483a) popup_query_code_window_g1

0xadf7,	// (0x00049e8a) popup_fep_vkb_icf_pane

0xae0b,	// (0x00049e9e) popup_fep_vtchi_icf_pane

0x45fa,	// (0x0004368d) bg_icf_pane

0xeeb9,	// (0x0004df4c) list_vkb_icf_pane

0x45fa,	// (0x0004368d) bg_icf_pane_cp01

0xeec5,	// (0x0004df58) vtchi_icf_list_pane

0xeed6,	// (0x0004df69) list_vkb_icf_pane_t1_ParamLimits

0xeed6,	// (0x0004df69) list_vkb_icf_pane_t1

0xeeef,	// (0x0004df82) vtchi_icf_list_pane_t1_ParamLimits

0xeeef,	// (0x0004df82) vtchi_icf_list_pane_t1

0xade1,	// (0x00049e74) popup_fep_ituss_window_ParamLimits

0xae0b,	// (0x00049e9e) popup_fep_vtchi_icf_pane_ParamLimits

0xecfa,	// (0x0004dd8d) ituss_keypad_pane_ParamLimits

0xae21,	// (0x00049eb4) ituss_sks_pane

0x45fa,	// (0x0004368d) bg_icf_pane_ParamLimits

0xadca,	// (0x00049e5d) icf_edit_indi_pane_ParamLimits

0xadca,	// (0x00049e5d) icf_edit_indi_pane

0xeeb9,	// (0x0004df4c) list_vkb_icf_pane_ParamLimits

0x45fa,	// (0x0004368d) bg_icf_pane_cp01_ParamLimits

0xadca,	// (0x00049e5d) icf_edit_indi_pane_cp01_ParamLimits

0xadca,	// (0x00049e5d) icf_edit_indi_pane_cp01

0xeecd,	// (0x0004df60) vtchi_query_pane

0x7387,	// (0x0004641a) icf_edit_indi_pane_g1_ParamLimits

0x7387,	// (0x0004641a) icf_edit_indi_pane_g1

0xf537,	// (0x0004e5ca) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x0004e5ca) icf_edit_indi_pane_g2

0x0001,

0xfe83,	// (0x0004ef16) icf_edit_indi_pane_g_ParamLimits

0xfe83,	// (0x0004ef16) icf_edit_indi_pane_g

0xf546,	// (0x0004e5d9) icf_edit_indi_pane_t1

0xef12,	// (0x0004dfa5) bg_input_focus_pane_cp042

0x3e77,	// (0x00042f0a) vtchi_button_pane

0xef1b,	// (0x0004dfae) vtchi_query_pane_t1

0xef29,	// (0x0004dfbc) vtchi_query_pane_t2

0xef37,	// (0x0004dfca) vtchi_query_pane_t3

0x0002,

0x030e,	// (0x0003f3a1) vtchi_query_pane_t

0x3887,	// (0x0004291a) bg_button_pane_cp13

0xef45,	// (0x0004dfd8) vtchi_button_pane_g1

0xef4d,	// (0x0004dfe0) ituss_sks_pane_g1

0xef58,	// (0x0004dfeb) ituss_sks_pane_g2

0x0001,

0x0315,	// (0x0003f3a8) ituss_sks_pane_g

0xf51b,	// (0x0004e5ae) ituss_sks_pane_t1

0xf529,	// (0x0004e5bc) ituss_sks_pane_t2

0x0001,

0xfe7e,	// (0x0004ef11) ituss_sks_pane_t

0x6e6d,	// (0x00045f00) indicator_nsta_pane_cp_g1

0x6e76,	// (0x00045f09) indicator_nsta_pane_cp_g2

0x6e7e,	// (0x00045f11) indicator_nsta_pane_cp_g3

0x6e86,	// (0x00045f19) indicator_nsta_pane_cp_g4

0x6e8e,	// (0x00045f21) indicator_nsta_pane_cp_g5

0x6e8e,	// (0x00045f21) indicator_nsta_pane_cp_g6

0x0005,

0xfaba,	// (0x0004eb4d) indicator_nsta_pane_cp_g

0xf416,	// (0x0004e4a9) cell_graphic2_pane_t2_ParamLimits

0xf416,	// (0x0004e4a9) cell_graphic2_pane_t2

0x0001,

0xfdd3,	// (0x0004ee66) cell_graphic2_pane_t_ParamLimits

0xfdd3,	// (0x0004ee66) cell_graphic2_pane_t

0xf443,	// (0x0004e4d6) cell_graphic2_control_pane_t1

0xb428,	// (0x0004a4bb) signal_pane_g3_ParamLimits

0xb428,	// (0x0004a4bb) signal_pane_g3

0xb43a,	// (0x0004a4cd) signal_pane_g4_ParamLimits

0xb43a,	// (0x0004a4cd) signal_pane_g4

0xecd4,	// (0x0004dd67) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xecd4,	// (0x0004dd67) cell_ai5_widget_list_row_pane_t3

0xeda5,	// (0x0004de38) cell_ituss_key_pane_t1_ParamLimits

0xeda5,	// (0x0004de38) cell_ituss_key_pane_t1

0x54e7,	// (0x0004457a) form_field_data_wide_pane_vc_t2_ParamLimits

0x54e7,	// (0x0004457a) form_field_data_wide_pane_vc_t2

0x54fb,	// (0x0004458e) form_field_data_wide_pane_vc_t3_ParamLimits

0x54fb,	// (0x0004458e) form_field_data_wide_pane_vc_t3

0x0002,

0xf80f,	// (0x0004e8a2) form_field_data_wide_pane_vc_t_ParamLimits

0xf80f,	// (0x0004e8a2) form_field_data_wide_pane_vc_t

0x6b9b,	// (0x00045c2e) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6b9b,	// (0x00045c2e) form_field_slider_wide_pane_vc_t3

0x6c75,	// (0x00045d08) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6c75,	// (0x00045d08) form_field_popup_wide_pane_vc_t2

0x6c8c,	// (0x00045d1f) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6c8c,	// (0x00045d1f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa9,	// (0x0004eb3c) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa9,	// (0x0004eb3c) form_field_popup_wide_pane_vc_t

0xacea,	// (0x00049d7d) aid_fshwr2_btn_pane_ParamLimits

0xacf6,	// (0x00049d89) aid_fshwr2_syb_pane_ParamLimits

0xad02,	// (0x00049d95) aid_fshwr2_txt_pane_ParamLimits

0xa535,	// (0x000495c8) fshwr2_bg_pane_ParamLimits

0xad0e,	// (0x00049da1) fshwr2_func_candi_pane_ParamLimits

0xad23,	// (0x00049db6) fshwr2_hwr_syb_pane_ParamLimits

0xad33,	// (0x00049dc6) fshwr2_icf_pane_ParamLimits
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

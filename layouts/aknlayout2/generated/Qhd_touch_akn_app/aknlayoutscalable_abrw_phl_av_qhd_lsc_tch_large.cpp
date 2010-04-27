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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004f873 };

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
0xb30c,	// (0x0005ab7f) Screen

0xb318,	// (0x0005ab8b) application_window_ParamLimits

0xb318,	// (0x0005ab8b) application_window

0x2ba6,	// (0x00052419) screen_g1

0xb350,	// (0x0005abc3) area_bottom_pane_ParamLimits

0xb350,	// (0x0005abc3) area_bottom_pane

0xf333,	// (0x0005eba6) area_top_pane_ParamLimits

0xf333,	// (0x0005eba6) area_top_pane

0xf445,	// (0x0005ecb8) main_pane_ParamLimits

0xf445,	// (0x0005ecb8) main_pane

0x2bb0,	// (0x00052423) misc_graphics

0xd3b6,	// (0x0005cc29) battery_pane_ParamLimits

0xd3b6,	// (0x0005cc29) battery_pane

0x592c,	// (0x0005519f) bg_status_flat_pane_g8

0x5934,	// (0x000551a7) bg_status_flat_pane_g9

0x4d28,	// (0x0005459b) context_pane_ParamLimits

0x4d28,	// (0x0005459b) context_pane

0xd521,	// (0x0005cd94) navi_pane_ParamLimits

0xd521,	// (0x0005cd94) navi_pane

0xd59f,	// (0x0005ce12) signal_pane_ParamLimits

0xd59f,	// (0x0005ce12) signal_pane

0x0008,

0xf879,	// (0x0005f0ec) bg_status_flat_pane_g

0xd62f,	// (0x0005cea2) status_pane_g1_ParamLimits

0xd62f,	// (0x0005cea2) status_pane_g1

0xd645,	// (0x0005ceb8) status_pane_g2_ParamLimits

0xd645,	// (0x0005ceb8) status_pane_g2

0x4f4f,	// (0x000547c2) status_pane_g3_ParamLimits

0x4f4f,	// (0x000547c2) status_pane_g3

0x0004,

0xf7a5,	// (0x0005f018) status_pane_g_ParamLimits

0xf7a5,	// (0x0005f018) status_pane_g

0xd651,	// (0x0005cec4) title_pane_ParamLimits

0xd651,	// (0x0005cec4) title_pane

0xd6b4,	// (0x0005cf27) uni_indicator_pane_ParamLimits

0xd6b4,	// (0x0005cf27) uni_indicator_pane

0x4b8a,	// (0x000543fd) bg_list_pane_ParamLimits

0x4b8a,	// (0x000543fd) bg_list_pane

0xd329,	// (0x0005cb9c) find_pane

0xbd4a,	// (0x0005b5bd) listscroll_app_pane_ParamLimits

0xbd4a,	// (0x0005b5bd) listscroll_app_pane

0x4bb6,	// (0x00054429) listscroll_form_pane

0xbd5a,	// (0x0005b5cd) listscroll_gen_pane_ParamLimits

0xbd5a,	// (0x0005b5cd) listscroll_gen_pane

0x0e41,	// (0x000506b4) listscroll_set_pane

0x64ba,	// (0x00055d2d) main_idle_act_pane

0x4892,	// (0x00054105) main_idle_trad_pane

0x4892,	// (0x00054105) main_list_empty_pane

0x4bd0,	// (0x00054443) main_midp_pane

0x4bdc,	// (0x0005444f) main_pane_g1_ParamLimits

0x4bdc,	// (0x0005444f) main_pane_g1

0xbd6e,	// (0x0005b5e1) popup_ai_message_window_ParamLimits

0xbd6e,	// (0x0005b5e1) popup_ai_message_window

0xbdff,	// (0x0005b672) popup_fep_china_uni_window_ParamLimits

0xbdff,	// (0x0005b672) popup_fep_china_uni_window

0x0f61,	// (0x000507d4) popup_fep_japan_candidate_window_ParamLimits

0x0f61,	// (0x000507d4) popup_fep_japan_candidate_window

0x0f81,	// (0x000507f4) popup_fep_japan_predictive_window_ParamLimits

0x0f81,	// (0x000507f4) popup_fep_japan_predictive_window

0xbe5b,	// (0x0005b6ce) popup_find_window

0xbe78,	// (0x0005b6eb) popup_grid_graphic_window_ParamLimits

0xbe78,	// (0x0005b6eb) popup_grid_graphic_window

0x0fe8,	// (0x0005085b) popup_large_graphic_colour_window

0xbf16,	// (0x0005b789) popup_menu_window_ParamLimits

0xbf16,	// (0x0005b789) popup_menu_window

0xc0e8,	// (0x0005b95b) popup_note_image_window

0xc0ae,	// (0x0005b921) popup_note_wait_window_ParamLimits

0xc0ae,	// (0x0005b921) popup_note_wait_window

0xc100,	// (0x0005b973) popup_note_window_ParamLimits

0xc100,	// (0x0005b973) popup_note_window

0xc1a6,	// (0x0005ba19) popup_query_code_window_ParamLimits

0xc1a6,	// (0x0005ba19) popup_query_code_window

0x1230,	// (0x00050aa3) popup_query_data_code_window_ParamLimits

0x1230,	// (0x00050aa3) popup_query_data_code_window

0xc1e0,	// (0x0005ba53) popup_query_data_window_ParamLimits

0xc1e0,	// (0x0005ba53) popup_query_data_window

0xc262,	// (0x0005bad5) popup_query_sat_info_window_ParamLimits

0xc262,	// (0x0005bad5) popup_query_sat_info_window

0xc2f9,	// (0x0005bb6c) popup_snote_single_graphic_window_ParamLimits

0xc2f9,	// (0x0005bb6c) popup_snote_single_graphic_window

0xc2f9,	// (0x0005bb6c) popup_snote_single_text_window_ParamLimits

0xc2f9,	// (0x0005bb6c) popup_snote_single_text_window

0x12b7,	// (0x00050b2a) popup_sub_window_general

0x13e7,	// (0x00050c5a) popup_window_general_ParamLimits

0x13e7,	// (0x00050c5a) popup_window_general

0x4bea,	// (0x0005445d) power_save_pane

0xbbd9,	// (0x0005b44c) control_pane_g1_ParamLimits

0xbbd9,	// (0x0005b44c) control_pane_g1

0xbc02,	// (0x0005b475) control_pane_g2_ParamLimits

0xbc02,	// (0x0005b475) control_pane_g2

0x4b4d,	// (0x000543c0) control_pane_g3_ParamLimits

0x4b4d,	// (0x000543c0) control_pane_g3

0x0007,

0xf78d,	// (0x0005f000) control_pane_g_ParamLimits

0xf78d,	// (0x0005f000) control_pane_g

0xbc43,	// (0x0005b4b6) control_pane_t1_ParamLimits

0xbc43,	// (0x0005b4b6) control_pane_t1

0xbca1,	// (0x0005b514) control_pane_t2_ParamLimits

0xbca1,	// (0x0005b514) control_pane_t2

0x0002,

0xf79e,	// (0x0005f011) control_pane_t_ParamLimits

0xf79e,	// (0x0005f011) control_pane_t

0xd25b,	// (0x0005cace) navi_navi_volume_pane_cp1

0xd263,	// (0x0005cad6) status_small_icon_pane

0x4a82,	// (0x000542f5) status_small_pane_g1_ParamLimits

0x4a82,	// (0x000542f5) status_small_pane_g1

0xd26b,	// (0x0005cade) status_small_pane_g2_ParamLimits

0xd26b,	// (0x0005cade) status_small_pane_g2

0xd277,	// (0x0005caea) status_small_pane_g3_ParamLimits

0xd277,	// (0x0005caea) status_small_pane_g3

0xd283,	// (0x0005caf6) status_small_pane_g4_ParamLimits

0xd283,	// (0x0005caf6) status_small_pane_g4

0xd28f,	// (0x0005cb02) status_small_pane_g5_ParamLimits

0xd28f,	// (0x0005cb02) status_small_pane_g5

0xd29d,	// (0x0005cb10) status_small_pane_g6_ParamLimits

0xd29d,	// (0x0005cb10) status_small_pane_g6

0x0007,

0xf77c,	// (0x0005efef) status_small_pane_g_ParamLimits

0xf77c,	// (0x0005efef) status_small_pane_g

0xd2cc,	// (0x0005cb3f) status_small_pane_t1

0xd2ee,	// (0x0005cb61) status_small_wait_pane_ParamLimits

0xd2ee,	// (0x0005cb61) status_small_wait_pane

0xd102,	// (0x0005c975) aid_levels_signal_ParamLimits

0xd102,	// (0x0005c975) aid_levels_signal

0xd11a,	// (0x0005c98d) signal_pane_g1_ParamLimits

0xd11a,	// (0x0005c98d) signal_pane_g1

0xd135,	// (0x0005c9a8) signal_pane_g2_ParamLimits

0xd135,	// (0x0005c9a8) signal_pane_g2

0x0003,

0xf70d,	// (0x0005ef80) signal_pane_g_ParamLimits

0xf70d,	// (0x0005ef80) signal_pane_g

0x4366,	// (0x00053bd9) context_pane_g1

0xcc66,	// (0x0005c4d9) title_pane_g1

0xcc9d,	// (0x0005c510) title_pane_t1

0x2c58,	// (0x000524cb) title_pane_t2

0x2c7e,	// (0x000524f1) title_pane_t3

0x0002,

0xf557,	// (0x0005edca) title_pane_t

0xd6dc,	// (0x0005cf4f) aid_levels_battery_ParamLimits

0xd6dc,	// (0x0005cf4f) aid_levels_battery

0xd6f8,	// (0x0005cf6b) battery_pane_g1_ParamLimits

0xd6f8,	// (0x0005cf6b) battery_pane_g1

0xd715,	// (0x0005cf88) battery_pane_g2_ParamLimits

0xd715,	// (0x0005cf88) battery_pane_g2

0x0001,

0xf7b0,	// (0x0005f023) battery_pane_g_ParamLimits

0xf7b0,	// (0x0005f023) battery_pane_g

0xd97e,	// (0x0005d1f1) uni_indicator_pane_g1

0xd994,	// (0x0005d207) uni_indicator_pane_g2

0xd9aa,	// (0x0005d21d) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0005f194) uni_indicator_pane_g

0x4704,	// (0x00053f77) navi_icon_pane_ParamLimits

0x4704,	// (0x00053f77) navi_icon_pane

0x4642,	// (0x00053eb5) navi_midp_pane

0x4720,	// (0x00053f93) navi_navi_pane

0x472a,	// (0x00053f9d) navi_text_pane_ParamLimits

0x472a,	// (0x00053f9d) navi_text_pane

0x2ba6,	// (0x00052419) status_small_wait_pane_g1

0x37aa,	// (0x0005301d) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0005f18f) status_small_wait_pane_g

0x5f93,	// (0x00055806) navi_navi_icon_text_pane

0x5f9b,	// (0x0005580e) navi_navi_pane_g1_ParamLimits

0x5f9b,	// (0x0005580e) navi_navi_pane_g1

0x5fad,	// (0x00055820) navi_navi_pane_g2_ParamLimits

0x5fad,	// (0x00055820) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0005f15d) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0005f15d) navi_navi_pane_g

0x5fbf,	// (0x00055832) navi_navi_tabs_pane

0x5fc8,	// (0x0005583b) navi_navi_text_pane

0x5f93,	// (0x00055806) navi_navi_volume_pane

0x5f6f,	// (0x000557e2) navi_text_pane_t1

0x5f63,	// (0x000557d6) navi_icon_pane_g1

0x5eb6,	// (0x00055729) navi_navi_text_pane_t1

0x178f,	// (0x00051002) navi_navi_volume_pane_g1

0x1797,	// (0x0005100a) volume_small_pane

0x5e1c,	// (0x0005568f) navi_navi_icon_text_pane_g1

0x5e24,	// (0x00055697) navi_navi_icon_text_pane_t1

0x4720,	// (0x00053f93) navi_tabs_2_long_pane

0x4720,	// (0x00053f93) navi_tabs_2_pane

0x4720,	// (0x00053f93) navi_tabs_3_long_pane

0x4720,	// (0x00053f93) navi_tabs_3_pane

0x4720,	// (0x00053f93) navi_tabs_4_pane

0x176f,	// (0x00050fe2) tabs_2_active_pane_ParamLimits

0x176f,	// (0x00050fe2) tabs_2_active_pane

0x177f,	// (0x00050ff2) tabs_2_passive_pane_ParamLimits

0x177f,	// (0x00050ff2) tabs_2_passive_pane

0x173d,	// (0x00050fb0) tabs_3_active_pane_ParamLimits

0x173d,	// (0x00050fb0) tabs_3_active_pane

0x174d,	// (0x00050fc0) tabs_3_passive_pane_ParamLimits

0x174d,	// (0x00050fc0) tabs_3_passive_pane

0x175e,	// (0x00050fd1) tabs_3_passive_pane_cp_ParamLimits

0x175e,	// (0x00050fd1) tabs_3_passive_pane_cp

0x16f9,	// (0x00050f6c) tabs_4_active_pane_ParamLimits

0x16f9,	// (0x00050f6c) tabs_4_active_pane

0x170a,	// (0x00050f7d) tabs_4_passive_pane_ParamLimits

0x170a,	// (0x00050f7d) tabs_4_passive_pane

0x171b,	// (0x00050f8e) tabs_4_passive_pane_cp_ParamLimits

0x171b,	// (0x00050f8e) tabs_4_passive_pane_cp

0x172c,	// (0x00050f9f) tabs_4_passive_pane_cp2_ParamLimits

0x172c,	// (0x00050f9f) tabs_4_passive_pane_cp2

0x16d5,	// (0x00050f48) tabs_2_long_active_pane_ParamLimits

0x16d5,	// (0x00050f48) tabs_2_long_active_pane

0x16e7,	// (0x00050f5a) tabs_2_long_passive_pane_ParamLimits

0x16e7,	// (0x00050f5a) tabs_2_long_passive_pane

0x1696,	// (0x00050f09) tabs_3_long_active_pane_ParamLimits

0x1696,	// (0x00050f09) tabs_3_long_active_pane

0x16a9,	// (0x00050f1c) tabs_3_long_passive_pane_ParamLimits

0x16a9,	// (0x00050f1c) tabs_3_long_passive_pane

0x16c2,	// (0x00050f35) tabs_3_long_passive_pane_cp_ParamLimits

0x16c2,	// (0x00050f35) tabs_3_long_passive_pane_cp

0x163c,	// (0x00050eaf) volume_small_pane_g1

0x1645,	// (0x00050eb8) volume_small_pane_g2

0x164e,	// (0x00050ec1) volume_small_pane_g3

0x1657,	// (0x00050eca) volume_small_pane_g4

0x1660,	// (0x00050ed3) volume_small_pane_g5

0x1669,	// (0x00050edc) volume_small_pane_g6

0x1672,	// (0x00050ee5) volume_small_pane_g7

0x167b,	// (0x00050eee) volume_small_pane_g8

0x1684,	// (0x00050ef7) volume_small_pane_g9

0x168d,	// (0x00050f00) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0005f129) volume_small_pane_g

0x2f0b,	// (0x0005277e) bg_active_tab_pane_cp2_ParamLimits

0x2f0b,	// (0x0005277e) bg_active_tab_pane_cp2

0x2c9e,	// (0x00052511) tabs_3_active_pane_g1

0xcd29,	// (0x0005c59c) tabs_3_active_pane_t1

0x2f0b,	// (0x0005277e) bg_passive_tab_pane_cp2_ParamLimits

0x2f0b,	// (0x0005277e) bg_passive_tab_pane_cp2

0x2c9e,	// (0x00052511) tabs_3_passive_pane_g1

0xcd29,	// (0x0005c59c) tabs_3_passive_pane_t1

0x2f0b,	// (0x0005277e) bg_active_tab_pane_cp3_ParamLimits

0x2f0b,	// (0x0005277e) bg_active_tab_pane_cp3

0x2cb8,	// (0x0005252b) tabs_4_active_pane_g1

0xcd3b,	// (0x0005c5ae) tabs_4_active_pane_t1

0x2f0b,	// (0x0005277e) bg_passive_tab_pane_cp3_ParamLimits

0x2f0b,	// (0x0005277e) bg_passive_tab_pane_cp3

0x2cb8,	// (0x0005252b) tabs_4_1_passive_pane_g1

0xcd3b,	// (0x0005c5ae) tabs_4_1_passive_pane_t1

0x4bd0,	// (0x00054443) list_highlight_pane_cp2

0xda32,	// (0x0005d2a5) list_set_pane_ParamLimits

0xda32,	// (0x0005d2a5) list_set_pane

0xdacc,	// (0x0005d33f) main_pane_set_t1_ParamLimits

0xdacc,	// (0x0005d33f) main_pane_set_t1

0xdaec,	// (0x0005d35f) main_pane_set_t2_ParamLimits

0xdaec,	// (0x0005d35f) main_pane_set_t2

0xdb00,	// (0x0005d373) main_pane_set_t3_ParamLimits

0xdb00,	// (0x0005d373) main_pane_set_t3

0xdb12,	// (0x0005d385) main_pane_set_t4_ParamLimits

0xdb12,	// (0x0005d385) main_pane_set_t4

0x0003,

0xf986,	// (0x0005f1f9) main_pane_set_t_ParamLimits

0xf986,	// (0x0005f1f9) main_pane_set_t

0xdb24,	// (0x0005d397) setting_code_pane

0xdb2e,	// (0x0005d3a1) setting_slider_graphic_pane

0xdb2e,	// (0x0005d3a1) setting_slider_pane

0xdb2e,	// (0x0005d3a1) setting_text_pane

0xdb2e,	// (0x0005d3a1) setting_volume_pane

0x0070,	// (0x0004f8e3) volume_set_pane

0x2c90,	// (0x00052503) bg_set_opt_pane_cp

0x0078,	// (0x0004f8eb) setting_slider_pane_t1

0x0091,	// (0x0004f904) setting_slider_pane_t2

0x00ab,	// (0x0004f91e) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0005edd1) setting_slider_pane_t

0x00c3,	// (0x0004f936) slider_set_pane

0x2bb0,	// (0x00052423) bg_set_opt_pane_cp2

0x2cd2,	// (0x00052545) setting_slider_graphic_pane_g1

0x00d9,	// (0x0004f94c) setting_slider_graphic_pane_t1

0x00e9,	// (0x0004f95c) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0005edd8) setting_slider_graphic_pane_t

0x00f9,	// (0x0004f96c) slider_set_pane_cp

0x2bb0,	// (0x00052423) input_focus_pane_cp1

0x64a1,	// (0x00055d14) list_set_text_pane

0x2ba6,	// (0x00052419) setting_text_pane_g1

0x2bb0,	// (0x00052423) input_focus_pane_cp2

0x2ba6,	// (0x00052419) setting_code_pane_g1

0x2cdb,	// (0x0005254e) setting_code_pane_t1

0xef11,	// (0x0005e784) set_text_pane_t1_ParamLimits

0xef11,	// (0x0005e784) set_text_pane_t1

0x3c57,	// (0x000534ca) set_opt_bg_pane_g1

0x3c5f,	// (0x000534d2) set_opt_bg_pane_g2

0x647b,	// (0x00055cee) set_opt_bg_pane_g3

0x3c6f,	// (0x000534e2) set_opt_bg_pane_g4

0x3c77,	// (0x000534ea) set_opt_bg_pane_g5

0x3c7f,	// (0x000534f2) set_opt_bg_pane_g6

0x6485,	// (0x00055cf8) set_opt_bg_pane_g7

0x648d,	// (0x00055d00) set_opt_bg_pane_g8

0x6497,	// (0x00055d0a) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0005f1e6) set_opt_bg_pane_g

0x646e,	// (0x00055ce1) slider_set_pane_g1

0x182c,	// (0x0005109f) slider_set_pane_g2

0x0006,

0xf964,	// (0x0005f1d7) slider_set_pane_g

0x17a0,	// (0x00051013) volume_set_pane_g1

0x17a8,	// (0x0005101b) volume_set_pane_g2

0x17b0,	// (0x00051023) volume_set_pane_g3

0x17b8,	// (0x0005102b) volume_set_pane_g4

0x17c0,	// (0x00051033) volume_set_pane_g5

0x17c8,	// (0x0005103b) volume_set_pane_g6

0x17d0,	// (0x00051043) volume_set_pane_g7

0x17d8,	// (0x0005104b) volume_set_pane_g8

0x17e0,	// (0x00051053) volume_set_pane_g9

0x17e8,	// (0x0005105b) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0005f1af) volume_set_pane_g

0xcd4d,	// (0x0005c5c0) indicator_pane_ParamLimits

0xcd4d,	// (0x0005c5c0) indicator_pane

0xcd75,	// (0x0005c5e8) main_idle_pane_g2_ParamLimits

0xcd75,	// (0x0005c5e8) main_idle_pane_g2

0xcdad,	// (0x0005c620) main_pane_idle_g1_ParamLimits

0xcdad,	// (0x0005c620) main_pane_idle_g1

0x2d2a,	// (0x0005259d) popup_clock_digital_analogue_window_ParamLimits

0x2d2a,	// (0x0005259d) popup_clock_digital_analogue_window

0xcdd4,	// (0x0005c647) soft_indicator_pane_ParamLimits

0xcdd4,	// (0x0005c647) soft_indicator_pane

0xcdee,	// (0x0005c661) wallpaper_pane_ParamLimits

0xcdee,	// (0x0005c661) wallpaper_pane

0x2ba6,	// (0x00052419) wallpaper_pane_g1

0xce00,	// (0x0005c673) indicator_pane_g1_ParamLimits

0xce00,	// (0x0005c673) indicator_pane_g1

0x6850,	// (0x000560c3) navi_navi_icon_text_pane_srt_g1

0x2d7c,	// (0x000525ef) soft_indicator_pane_t1

0x2d96,	// (0x00052609) aid_ps_area_pane

0xce16,	// (0x0005c689) aid_ps_clock_pane

0x2db5,	// (0x00052628) aid_ps_indicator_pane

0x2dc1,	// (0x00052634) indicator_ps_pane_ParamLimits

0x2dc1,	// (0x00052634) indicator_ps_pane

0x2dd0,	// (0x00052643) power_save_pane_g1_ParamLimits

0x2dd0,	// (0x00052643) power_save_pane_g1

0x2ddc,	// (0x0005264f) power_save_pane_g2_ParamLimits

0x2ddc,	// (0x0005264f) power_save_pane_g2

0xf313,	// (0x0005eb86) aid_navinavi_width_pane

0x2d96,	// (0x00052609) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0005eddd) power_save_pane_g_ParamLimits

0xf56a,	// (0x0005eddd) power_save_pane_g

0x2dea,	// (0x0005265d) power_save_pane_t1_ParamLimits

0x2dea,	// (0x0005265d) power_save_pane_t1

0xce16,	// (0x0005c689) aid_ps_clock_pane_ParamLimits

0x2db5,	// (0x00052628) aid_ps_indicator_pane_ParamLimits

0x2dfc,	// (0x0005266f) power_save_pane_t4_ParamLimits

0x2dfc,	// (0x0005266f) power_save_pane_t4

0x0001,

0xf56f,	// (0x0005ede2) power_save_pane_t_ParamLimits

0xf56f,	// (0x0005ede2) power_save_pane_t

0x2e26,	// (0x00052699) power_save_t3_ParamLimits

0x2e26,	// (0x00052699) power_save_t3

0x2e11,	// (0x00052684) power_save_t2_ParamLimits

0x2e11,	// (0x00052684) power_save_t2

0x2e3b,	// (0x000526ae) indicator_ps_pane_g1

0xce24,	// (0x0005c697) ai_gene_pane_ParamLimits

0xce24,	// (0x0005c697) ai_gene_pane

0xce3b,	// (0x0005c6ae) ai_links_pane_ParamLimits

0xce3b,	// (0x0005c6ae) ai_links_pane

0xce53,	// (0x0005c6c6) indicator_pane_cp1_ParamLimits

0xce53,	// (0x0005c6c6) indicator_pane_cp1

0xce62,	// (0x0005c6d5) main_pane_idle_g1_cp_ParamLimits

0xce62,	// (0x0005c6d5) main_pane_idle_g1_cp

0x2e74,	// (0x000526e7) popup_ai_links_title_window

0xce7a,	// (0x0005c6ed) soft_indicator_pane_cp1_ParamLimits

0xce7a,	// (0x0005c6ed) soft_indicator_pane_cp1

0x625c,	// (0x00055acf) ai_links_pane_g1

0x6265,	// (0x00055ad8) grid_ai_links_pane

0xd975,	// (0x0005d1e8) ai_gene_pane_1

0x624a,	// (0x00055abd) ai_gene_pane_2

0x6253,	// (0x00055ac6) list_highlight_pane_cp4

0xd951,	// (0x0005d1c4) cell_ai_link_pane_ParamLimits

0xd951,	// (0x0005d1c4) cell_ai_link_pane

0x621b,	// (0x00055a8e) cell_ai_link_pane_g1

0x37aa,	// (0x0005301d) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0005f18a) cell_ai_link_pane_g

0x2bb0,	// (0x00052423) grid_highlight_cp2

0x2bb0,	// (0x00052423) bg_popup_sub_pane_cp1

0x2e97,	// (0x0005270a) popup_ai_links_title_window_t1

0x6169,	// (0x000559dc) ai_gene_pane_1_g1_ParamLimits

0x6169,	// (0x000559dc) ai_gene_pane_1_g1

0x6175,	// (0x000559e8) ai_gene_pane_1_g2_ParamLimits

0x6175,	// (0x000559e8) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0005f180) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0005f180) ai_gene_pane_1_g

0x6182,	// (0x000559f5) ai_gene_pane_1_t1_ParamLimits

0x6182,	// (0x000559f5) ai_gene_pane_1_t1

0x61b6,	// (0x00055a29) grid_ai_soft_ind_pane

0x6154,	// (0x000559c7) ai_gene_pane_2_t1_ParamLimits

0x6154,	// (0x000559c7) ai_gene_pane_2_t1

0xce8e,	// (0x0005c701) main_pane_empty_t1_ParamLimits

0xce8e,	// (0x0005c701) main_pane_empty_t1

0xcea6,	// (0x0005c719) main_pane_empty_t2_ParamLimits

0xcea6,	// (0x0005c719) main_pane_empty_t2

0xcebb,	// (0x0005c72e) main_pane_empty_t3_ParamLimits

0xcebb,	// (0x0005c72e) main_pane_empty_t3

0xcecd,	// (0x0005c740) main_pane_empty_t4_ParamLimits

0xcecd,	// (0x0005c740) main_pane_empty_t4

0xcedf,	// (0x0005c752) main_pane_empty_t5_ParamLimits

0xcedf,	// (0x0005c752) main_pane_empty_t5

0x0004,

0xf574,	// (0x0005ede7) main_pane_empty_t_ParamLimits

0xf574,	// (0x0005ede7) main_pane_empty_t

0x3ca8,	// (0x0005351b) bg_popup_window_pane_ParamLimits

0x3ca8,	// (0x0005351b) bg_popup_window_pane

0x5ec4,	// (0x00055737) find_popup_pane_cp2_ParamLimits

0x5ec4,	// (0x00055737) find_popup_pane_cp2

0x5ed0,	// (0x00055743) heading_pane_ParamLimits

0x5ed0,	// (0x00055743) heading_pane

0x2bb0,	// (0x00052423) bg_popup_sub_pane

0xd8d2,	// (0x0005d145) bg_popup_window_pane_g1_ParamLimits

0xd8d2,	// (0x0005d145) bg_popup_window_pane_g1

0xd8e1,	// (0x0005d154) bg_popup_window_pane_g2_ParamLimits

0xd8e1,	// (0x0005d154) bg_popup_window_pane_g2

0xd8ed,	// (0x0005d160) bg_popup_window_pane_g3_ParamLimits

0xd8ed,	// (0x0005d160) bg_popup_window_pane_g3

0xd8f9,	// (0x0005d16c) bg_popup_window_pane_g4_ParamLimits

0xd8f9,	// (0x0005d16c) bg_popup_window_pane_g4

0xd908,	// (0x0005d17b) bg_popup_window_pane_g5_ParamLimits

0xd908,	// (0x0005d17b) bg_popup_window_pane_g5

0xd918,	// (0x0005d18b) bg_popup_window_pane_g6_ParamLimits

0xd918,	// (0x0005d18b) bg_popup_window_pane_g6

0xd924,	// (0x0005d197) bg_popup_window_pane_g7_ParamLimits

0xd924,	// (0x0005d197) bg_popup_window_pane_g7

0xd933,	// (0x0005d1a6) bg_popup_window_pane_g8_ParamLimits

0xd933,	// (0x0005d1a6) bg_popup_window_pane_g8

0xd942,	// (0x0005d1b5) bg_popup_window_pane_g9_ParamLimits

0xd942,	// (0x0005d1b5) bg_popup_window_pane_g9

0x5eaa,	// (0x0005571d) bg_popup_window_pane_g10_ParamLimits

0x5eaa,	// (0x0005571d) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0005f148) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0005f148) bg_popup_window_pane_g

0x5dd3,	// (0x00055646) bg_popup_heading_pane_ParamLimits

0x5dd3,	// (0x00055646) bg_popup_heading_pane

0x195a,	// (0x000511cd) tabs_4_passive_pane_cp_srt_ParamLimits

0x195a,	// (0x000511cd) tabs_4_passive_pane_cp_srt

0x196c,	// (0x000511df) tabs_4_passive_pane_srt_ParamLimits

0x5de7,	// (0x0005565a) heading_pane_g2

0x196c,	// (0x000511df) tabs_4_passive_pane_srt

0x514e,	// (0x000549c1) bg_passive_tab_pane_cp3_srt_ParamLimits

0x514e,	// (0x000549c1) bg_passive_tab_pane_cp3_srt

0x5def,	// (0x00055662) heading_pane_t1_ParamLimits

0x5def,	// (0x00055662) heading_pane_t1

0x5e06,	// (0x00055679) heading_pane_t2_ParamLimits

0x5e06,	// (0x00055679) heading_pane_t2

0x0001,

0xf8d0,	// (0x0005f143) heading_pane_t_ParamLimits

0xf8d0,	// (0x0005f143) heading_pane_t

0x58f4,	// (0x00055167) bg_popup_heading_pane_g1

0x59af,	// (0x00055222) bg_popup_heading_pane_g2

0x59b9,	// (0x0005522c) bg_popup_heading_pane_g3

0x59c3,	// (0x00055236) bg_popup_heading_pane_g4

0x59cd,	// (0x00055240) bg_popup_heading_pane_g5

0x59d7,	// (0x0005524a) bg_popup_heading_pane_g6

0x59df,	// (0x00055252) bg_popup_heading_pane_g7

0x59e7,	// (0x0005525a) bg_popup_heading_pane_g8

0x59f1,	// (0x00055264) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0005f0ff) bg_popup_heading_pane_g

0x50da,	// (0x0005494d) bg_popup_sub_pane_g1

0x50ea,	// (0x0005495d) bg_popup_sub_pane_g2

0x50e2,	// (0x00054955) bg_popup_sub_pane_g3

0x50fa,	// (0x0005496d) bg_popup_sub_pane_g4

0x50f2,	// (0x00054965) bg_popup_sub_pane_g5

0x5102,	// (0x00054975) bg_popup_sub_pane_g6

0x510a,	// (0x0005497d) bg_popup_sub_pane_g7

0x511a,	// (0x0005498d) bg_popup_sub_pane_g8

0x5112,	// (0x00054985) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0005f0d9) bg_popup_sub_pane_g

0x2f0b,	// (0x0005277e) bg_popup_window_pane_cp5_ParamLimits

0x2f0b,	// (0x0005277e) bg_popup_window_pane_cp5

0x2f27,	// (0x0005279a) popup_note_window_g1_ParamLimits

0x2f27,	// (0x0005279a) popup_note_window_g1

0x2f33,	// (0x000527a6) popup_note_window_t1_ParamLimits

0x2f33,	// (0x000527a6) popup_note_window_t1

0x2f49,	// (0x000527bc) popup_note_window_t2_ParamLimits

0x2f49,	// (0x000527bc) popup_note_window_t2

0x2f5f,	// (0x000527d2) popup_note_window_t3_ParamLimits

0x2f5f,	// (0x000527d2) popup_note_window_t3

0x2f75,	// (0x000527e8) popup_note_window_t4_ParamLimits

0x2f75,	// (0x000527e8) popup_note_window_t4

0x2f9d,	// (0x00052810) popup_note_window_t5_ParamLimits

0x2f9d,	// (0x00052810) popup_note_window_t5

0x0004,

0xf57f,	// (0x0005edf2) popup_note_window_t_ParamLimits

0xf57f,	// (0x0005edf2) popup_note_window_t

0x2fc1,	// (0x00052834) bg_popup_window_pane_cp6_ParamLimits

0x2fc1,	// (0x00052834) bg_popup_window_pane_cp6

0x5870,	// (0x000550e3) popup_note_image_window_g1_ParamLimits

0x5870,	// (0x000550e3) popup_note_image_window_g1

0x587c,	// (0x000550ef) popup_note_image_window_g2_ParamLimits

0x587c,	// (0x000550ef) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0005f0cd) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0005f0cd) popup_note_image_window_g

0x5895,	// (0x00055108) popup_note_image_window_t1_ParamLimits

0x5895,	// (0x00055108) popup_note_image_window_t1

0x58ae,	// (0x00055121) popup_note_image_window_t2_ParamLimits

0x58ae,	// (0x00055121) popup_note_image_window_t2

0x58c7,	// (0x0005513a) popup_note_image_window_t3_ParamLimits

0x58c7,	// (0x0005513a) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0005f0d2) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0005f0d2) popup_note_image_window_t

0x5731,	// (0x00054fa4) bg_popup_window_pane_cp7_ParamLimits

0x5731,	// (0x00054fa4) bg_popup_window_pane_cp7

0x5761,	// (0x00054fd4) popup_note_wait_window_g1_ParamLimits

0x5761,	// (0x00054fd4) popup_note_wait_window_g1

0x576d,	// (0x00054fe0) popup_note_wait_window_g2_ParamLimits

0x576d,	// (0x00054fe0) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0005f0bb) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0005f0bb) popup_note_wait_window_g

0x5785,	// (0x00054ff8) popup_note_wait_window_t1_ParamLimits

0x5785,	// (0x00054ff8) popup_note_wait_window_t1

0x57ac,	// (0x0005501f) popup_note_wait_window_t2_ParamLimits

0x57ac,	// (0x0005501f) popup_note_wait_window_t2

0x57c9,	// (0x0005503c) popup_note_wait_window_t3_ParamLimits

0x57c9,	// (0x0005503c) popup_note_wait_window_t3

0x57dc,	// (0x0005504f) popup_note_wait_window_t4_ParamLimits

0x57dc,	// (0x0005504f) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0005f0c2) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0005f0c2) popup_note_wait_window_t

0x5801,	// (0x00055074) wait_bar_pane_ParamLimits

0x5801,	// (0x00055074) wait_bar_pane

0x2bb0,	// (0x00052423) wait_anim_pane

0x2bb0,	// (0x00052423) wait_border_pane

0x2ba6,	// (0x00052419) wait_anim_pane_g1

0x2ba6,	// (0x00052419) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0005ef7b) wait_anim_pane_g

0x56d5,	// (0x00054f48) wait_border_pane_g1

0x56e0,	// (0x00054f53) wait_border_pane_g2

0x56e9,	// (0x00054f5c) wait_border_pane_g3

0x0002,

0xf841,	// (0x0005f0b4) wait_border_pane_g

0x5540,	// (0x00054db3) bg_popup_window_pane_cp16_ParamLimits

0x5540,	// (0x00054db3) bg_popup_window_pane_cp16

0x5640,	// (0x00054eb3) indicator_popup_pane_cp4_ParamLimits

0x5640,	// (0x00054eb3) indicator_popup_pane_cp4

0x5654,	// (0x00054ec7) popup_query_data_window_t1_ParamLimits

0x5654,	// (0x00054ec7) popup_query_data_window_t1

0x5666,	// (0x00054ed9) popup_query_data_window_t2_ParamLimits

0x5666,	// (0x00054ed9) popup_query_data_window_t2

0x567f,	// (0x00054ef2) popup_query_data_window_t3_ParamLimits

0x567f,	// (0x00054ef2) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0005f0ad) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0005f0ad) popup_query_data_window_t

0x5699,	// (0x00054f0c) query_popup_data_pane_ParamLimits

0x5699,	// (0x00054f0c) query_popup_data_pane

0x56ad,	// (0x00054f20) query_popup_data_pane_cp1_ParamLimits

0x56ad,	// (0x00054f20) query_popup_data_pane_cp1

0x5540,	// (0x00054db3) bg_popup_window_pane_cp10_ParamLimits

0x5540,	// (0x00054db3) bg_popup_window_pane_cp10

0x5572,	// (0x00054de5) indicator_popup_pane_ParamLimits

0x5572,	// (0x00054de5) indicator_popup_pane

0x5594,	// (0x00054e07) popup_query_code_window_t1_ParamLimits

0x5594,	// (0x00054e07) popup_query_code_window_t1

0x55ae,	// (0x00054e21) popup_query_code_window_t2_ParamLimits

0x55ae,	// (0x00054e21) popup_query_code_window_t2

0x55f7,	// (0x00054e6a) popup_query_code_window_t3_ParamLimits

0x55f7,	// (0x00054e6a) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0005f0a6) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0005f0a6) popup_query_code_window_t

0x5626,	// (0x00054e99) query_popup_pane_ParamLimits

0x5626,	// (0x00054e99) query_popup_pane

0x2fc1,	// (0x00052834) bg_popup_window_pane_cp15_ParamLimits

0x2fc1,	// (0x00052834) bg_popup_window_pane_cp15

0x36dc,	// (0x00052f4f) indicator_popup_pane_cp1_ParamLimits

0x36dc,	// (0x00052f4f) indicator_popup_pane_cp1

0x36ef,	// (0x00052f62) indicator_popup_pane_cp2_ParamLimits

0x36ef,	// (0x00052f62) indicator_popup_pane_cp2

0x3702,	// (0x00052f75) popup_query_data_code_window_g1_ParamLimits

0x3702,	// (0x00052f75) popup_query_data_code_window_g1

0x3715,	// (0x00052f88) popup_query_data_code_window_t1_ParamLimits

0x3715,	// (0x00052f88) popup_query_data_code_window_t1

0x3727,	// (0x00052f9a) popup_query_data_code_window_t2_ParamLimits

0x3727,	// (0x00052f9a) popup_query_data_code_window_t2

0x3739,	// (0x00052fac) popup_query_data_code_window_t3_ParamLimits

0x3739,	// (0x00052fac) popup_query_data_code_window_t3

0x374f,	// (0x00052fc2) popup_query_data_code_window_t4_ParamLimits

0x374f,	// (0x00052fc2) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0005edfd) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0005edfd) popup_query_data_code_window_t

0x1473,	// (0x00050ce6) list_single_midp_graphic_pane_g3

0x3767,	// (0x00052fda) query_popup_data_pane_cp2_ParamLimits

0x377a,	// (0x00052fed) query_popup_pane_cp2_ParamLimits

0x377a,	// (0x00052fed) query_popup_pane_cp2

0x2bb0,	// (0x00052423) bg_popup_window_pane_cp11

0x5538,	// (0x00054dab) heading_pane_cp5

0x3865,	// (0x000530d8) listscroll_popup_info_pane

0x2bb0,	// (0x00052423) input_focus_pane_cp3

0x378d,	// (0x00053000) query_popup_pane_t1

0x379b,	// (0x0005300e) list_popup_info_pane_ParamLimits

0x379b,	// (0x0005300e) list_popup_info_pane

0x37aa,	// (0x0005301d) listscroll_popup_info_pane_g1

0x37b2,	// (0x00053025) scroll_pane_cp7

0x37bc,	// (0x0005302f) popup_info_list_pane_t1_ParamLimits

0x37bc,	// (0x0005302f) popup_info_list_pane_t1

0x37d6,	// (0x00053049) popup_info_list_pane_t2_ParamLimits

0x37d6,	// (0x00053049) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0005ee06) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0005ee06) popup_info_list_pane_t

0x2bb0,	// (0x00052423) bg_popup_window_pane_cp12

0x686a,	// (0x000560dd) find_popup_pane

0x2c90,	// (0x00052503) bg_popup_window_pane_cp3

0x37f0,	// (0x00053063) heading_pane_cp3

0x37fc,	// (0x0005306f) listscroll_popup_graphic_pane

0x2bb0,	// (0x00052423) bg_popup_window_pane_cp4

0xcf41,	// (0x0005c7b4) heading_pane_cp4

0x3865,	// (0x000530d8) listscroll_popup_colour_pane

0x386d,	// (0x000530e0) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x386d,	// (0x000530e0) cell_large_graphic_colour_none_popup_pane

0xcf49,	// (0x0005c7bc) grid_large_graphic_colour_popup_pane_ParamLimits

0xcf49,	// (0x0005c7bc) grid_large_graphic_colour_popup_pane

0x38ad,	// (0x00053120) listscroll_popup_colour_pane_g1_ParamLimits

0x38ad,	// (0x00053120) listscroll_popup_colour_pane_g1

0x38c4,	// (0x00053137) listscroll_popup_colour_pane_g2_ParamLimits

0x38c4,	// (0x00053137) listscroll_popup_colour_pane_g2

0x38db,	// (0x0005314e) listscroll_popup_colour_pane_g3_ParamLimits

0x38db,	// (0x0005314e) listscroll_popup_colour_pane_g3

0xcf6d,	// (0x0005c7e0) listscroll_popup_colour_pane_g4_ParamLimits

0xcf6d,	// (0x0005c7e0) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0005ee0b) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0005ee0b) listscroll_popup_colour_pane_g

0x38ff,	// (0x00053172) scroll_pane_cp6_ParamLimits

0x38ff,	// (0x00053172) scroll_pane_cp6

0xcf7d,	// (0x0005c7f0) cell_large_graphic_colour_popup_pane_ParamLimits

0xcf7d,	// (0x0005c7f0) cell_large_graphic_colour_popup_pane

0x3930,	// (0x000531a3) cell_large_graphic_colour_none_popup_pane_t1

0x2bb0,	// (0x00052423) grid_highlight_pane_cp5

0x393f,	// (0x000531b2) cell_large_graphic_colour_popup_pane_g1

0x3947,	// (0x000531ba) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0005ee14) cell_large_graphic_colour_popup_pane_g

0x394f,	// (0x000531c2) cell_large_graphic_colour_popup_pane_g2_copy1

0x3958,	// (0x000531cb) grid_highlight_pane_cp4

0x3960,	// (0x000531d3) bg_popup_window_pane_cp8_ParamLimits

0x3960,	// (0x000531d3) bg_popup_window_pane_cp8

0x397b,	// (0x000531ee) popup_snote_single_text_window_g1_ParamLimits

0x397b,	// (0x000531ee) popup_snote_single_text_window_g1

0x398d,	// (0x00053200) popup_snote_single_text_window_t1_ParamLimits

0x398d,	// (0x00053200) popup_snote_single_text_window_t1

0x39a0,	// (0x00053213) popup_snote_single_text_window_t2_ParamLimits

0x39a0,	// (0x00053213) popup_snote_single_text_window_t2

0x39b3,	// (0x00053226) popup_snote_single_text_window_t3_ParamLimits

0x39b3,	// (0x00053226) popup_snote_single_text_window_t3

0x39ec,	// (0x0005325f) popup_snote_single_text_window_t4_ParamLimits

0x39ec,	// (0x0005325f) popup_snote_single_text_window_t4

0x3a20,	// (0x00053293) popup_snote_single_text_window_t5_ParamLimits

0x3a20,	// (0x00053293) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0005ee19) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0005ee19) popup_snote_single_text_window_t

0x3a4f,	// (0x000532c2) bg_popup_window_pane_cp9_ParamLimits

0x3a4f,	// (0x000532c2) bg_popup_window_pane_cp9

0x397b,	// (0x000531ee) popup_snote_single_graphic_window_g1_ParamLimits

0x397b,	// (0x000531ee) popup_snote_single_graphic_window_g1

0x3a5d,	// (0x000532d0) popup_snote_single_graphic_window_g2_ParamLimits

0x3a5d,	// (0x000532d0) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0005ee24) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0005ee24) popup_snote_single_graphic_window_g

0x3a69,	// (0x000532dc) popup_snote_single_graphic_window_t1_ParamLimits

0x3a69,	// (0x000532dc) popup_snote_single_graphic_window_t1

0x3a7c,	// (0x000532ef) popup_snote_single_graphic_window_t2_ParamLimits

0x3a7c,	// (0x000532ef) popup_snote_single_graphic_window_t2

0x3a8f,	// (0x00053302) popup_snote_single_graphic_window_t3_ParamLimits

0x3a8f,	// (0x00053302) popup_snote_single_graphic_window_t3

0x3ac8,	// (0x0005333b) popup_snote_single_graphic_window_t4_ParamLimits

0x3ac8,	// (0x0005333b) popup_snote_single_graphic_window_t4

0x3afc,	// (0x0005336f) popup_snote_single_graphic_window_t5_ParamLimits

0x3afc,	// (0x0005336f) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0005ee29) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0005ee29) popup_snote_single_graphic_window_t

0x67ae,	// (0x00056021) grid_graphic_popup_pane_ParamLimits

0x67ae,	// (0x00056021) grid_graphic_popup_pane

0x67d6,	// (0x00056049) listscroll_popup_graphic_pane_g1_ParamLimits

0x67d6,	// (0x00056049) listscroll_popup_graphic_pane_g1

0xdc26,	// (0x0005d499) listscroll_popup_graphic_pane_g2_ParamLimits

0xdc26,	// (0x0005d499) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0005f223) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0005f223) listscroll_popup_graphic_pane_g

0x67fe,	// (0x00056071) scroll_pane_cp5

0xdbe2,	// (0x0005d455) cell_graphic_popup_pane_ParamLimits

0xdbe2,	// (0x0005d455) cell_graphic_popup_pane

0x672c,	// (0x00055f9f) cell_graphic_popup_pane_g1

0x6734,	// (0x00055fa7) cell_graphic_popup_pane_g2

0x394f,	// (0x000531c2) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0005f21c) cell_graphic_popup_pane_g

0x673d,	// (0x00055fb0) cell_graphic_popup_pane_t2

0x3958,	// (0x000531cb) grid_highlight_pane_cp3

0x3b3d,	// (0x000533b0) list_gen_pane_ParamLimits

0x3b3d,	// (0x000533b0) list_gen_pane

0x3b6f,	// (0x000533e2) scroll_pane

0xdb99,	// (0x0005d40c) bg_list_pane_g1_ParamLimits

0xdb99,	// (0x0005d40c) bg_list_pane_g1

0x66a1,	// (0x00055f14) bg_list_pane_g2_ParamLimits

0x66a1,	// (0x00055f14) bg_list_pane_g2

0x66b6,	// (0x00055f29) bg_list_pane_g3_ParamLimits

0x66b6,	// (0x00055f29) bg_list_pane_g3

0x66ca,	// (0x00055f3d) bg_list_pane_g4_ParamLimits

0x66ca,	// (0x00055f3d) bg_list_pane_g4

0xdbb6,	// (0x0005d429) bg_list_pane_g5_ParamLimits

0xdbb6,	// (0x0005d429) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0005f211) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0005f211) bg_list_pane_g

0xdb61,	// (0x0005d3d4) list_double2_graphic_large_graphic_pane_ParamLimits

0xdb61,	// (0x0005d3d4) list_double2_graphic_large_graphic_pane

0xdb61,	// (0x0005d3d4) list_double2_graphic_pane_ParamLimits

0xdb61,	// (0x0005d3d4) list_double2_graphic_pane

0xdb61,	// (0x0005d3d4) list_double2_large_graphic_pane_ParamLimits

0xdb61,	// (0x0005d3d4) list_double2_large_graphic_pane

0xdb61,	// (0x0005d3d4) list_double2_pane_ParamLimits

0xdb61,	// (0x0005d3d4) list_double2_pane

0xdb61,	// (0x0005d3d4) list_double_graphic_heading_pane_ParamLimits

0xdb61,	// (0x0005d3d4) list_double_graphic_heading_pane

0xdb61,	// (0x0005d3d4) list_double_graphic_pane_ParamLimits

0xdb61,	// (0x0005d3d4) list_double_graphic_pane

0xdb61,	// (0x0005d3d4) list_double_heading_pane_ParamLimits

0xdb61,	// (0x0005d3d4) list_double_heading_pane

0xdb61,	// (0x0005d3d4) list_double_large_graphic_pane_ParamLimits

0xdb61,	// (0x0005d3d4) list_double_large_graphic_pane

0xdb61,	// (0x0005d3d4) list_double_number_pane_ParamLimits

0xdb61,	// (0x0005d3d4) list_double_number_pane

0xdb61,	// (0x0005d3d4) list_double_pane_ParamLimits

0xdb61,	// (0x0005d3d4) list_double_pane

0xdb61,	// (0x0005d3d4) list_double_time_pane_ParamLimits

0xdb61,	// (0x0005d3d4) list_double_time_pane

0xdb61,	// (0x0005d3d4) list_setting_number_pane_ParamLimits

0xdb61,	// (0x0005d3d4) list_setting_number_pane

0xdb61,	// (0x0005d3d4) list_setting_pane_ParamLimits

0xdb61,	// (0x0005d3d4) list_setting_pane

0xdb73,	// (0x0005d3e6) list_single_2graphic_pane_ParamLimits

0xdb73,	// (0x0005d3e6) list_single_2graphic_pane

0xdb73,	// (0x0005d3e6) list_single_graphic_heading_pane_ParamLimits

0xdb73,	// (0x0005d3e6) list_single_graphic_heading_pane

0xdb73,	// (0x0005d3e6) list_single_graphic_pane_ParamLimits

0xdb73,	// (0x0005d3e6) list_single_graphic_pane

0xdb73,	// (0x0005d3e6) list_single_heading_pane_ParamLimits

0xdb73,	// (0x0005d3e6) list_single_heading_pane

0xdb61,	// (0x0005d3d4) list_single_large_graphic_pane_ParamLimits

0xdb61,	// (0x0005d3d4) list_single_large_graphic_pane

0xdb73,	// (0x0005d3e6) list_single_number_heading_pane_ParamLimits

0xdb73,	// (0x0005d3e6) list_single_number_heading_pane

0xdb73,	// (0x0005d3e6) list_single_number_pane_ParamLimits

0xdb73,	// (0x0005d3e6) list_single_number_pane

0xdb73,	// (0x0005d3e6) list_single_pane_ParamLimits

0xdb73,	// (0x0005d3e6) list_single_pane

0x2bb0,	// (0x00052423) list_highlight_pane_cp1

0x47cb,	// (0x0005403e) list_single_pane_g1_ParamLimits

0x47cb,	// (0x0005403e) list_single_pane_g1

0x30af,	// (0x00052922) list_single_pane_g2_ParamLimits

0x30af,	// (0x00052922) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0005ee45) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0005ee45) list_single_pane_g

0x1aab,	// (0x0005131e) list_single_pane_t1_ParamLimits

0x1aab,	// (0x0005131e) list_single_pane_t1

0x47cb,	// (0x0005403e) list_single_number_pane_g1_ParamLimits

0x47cb,	// (0x0005403e) list_single_number_pane_g1

0x30af,	// (0x00052922) list_single_number_pane_g2_ParamLimits

0x30af,	// (0x00052922) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0005ee45) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0005ee45) list_single_number_pane_g

0x1438,	// (0x00050cab) list_single_number_pane_t1_ParamLimits

0x1438,	// (0x00050cab) list_single_number_pane_t1

0xc49e,	// (0x0005bd11) list_single_number_pane_t2_ParamLimits

0xc49e,	// (0x0005bd11) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0005f1d2) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0005f1d2) list_single_number_pane_t

0xb52e,	// (0x0005ada1) list_single_graphic_pane_g1_ParamLimits

0xb52e,	// (0x0005ada1) list_single_graphic_pane_g1

0x47cb,	// (0x0005403e) list_single_graphic_pane_g2_ParamLimits

0x47cb,	// (0x0005403e) list_single_graphic_pane_g2

0x30af,	// (0x00052922) list_single_graphic_pane_g3_ParamLimits

0x30af,	// (0x00052922) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0005ee34) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0005ee34) list_single_graphic_pane_g

0xb53a,	// (0x0005adad) list_single_graphic_pane_t1_ParamLimits

0xb53a,	// (0x0005adad) list_single_graphic_pane_t1

0xb550,	// (0x0005adc3) list_single_heading_pane_g1_ParamLimits

0xb550,	// (0x0005adc3) list_single_heading_pane_g1

0x30af,	// (0x00052922) list_single_heading_pane_g2_ParamLimits

0x30af,	// (0x00052922) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0005ee3b) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0005ee3b) list_single_heading_pane_g

0xb563,	// (0x0005add6) list_single_heading_pane_t1_ParamLimits

0xb563,	// (0x0005add6) list_single_heading_pane_t1

0xb579,	// (0x0005adec) list_single_heading_pane_t2_ParamLimits

0xb579,	// (0x0005adec) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0005ee40) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0005ee40) list_single_heading_pane_t

0x47cb,	// (0x0005403e) list_single_number_heading_pane_g1_ParamLimits

0x47cb,	// (0x0005403e) list_single_number_heading_pane_g1

0x30af,	// (0x00052922) list_single_number_heading_pane_g2_ParamLimits

0x30af,	// (0x00052922) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0005ee45) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0005ee45) list_single_number_heading_pane_g

0xb58b,	// (0x0005adfe) list_single_number_heading_pane_t1_ParamLimits

0xb58b,	// (0x0005adfe) list_single_number_heading_pane_t1

0xb5a1,	// (0x0005ae14) list_single_number_heading_pane_t2_ParamLimits

0xb5a1,	// (0x0005ae14) list_single_number_heading_pane_t2

0x1a85,	// (0x000512f8) list_single_number_heading_pane_t3_ParamLimits

0x1a85,	// (0x000512f8) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0005ee4a) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0005ee4a) list_single_number_heading_pane_t

0xb5b3,	// (0x0005ae26) list_single_graphic_heading_pane_g1_ParamLimits

0xb5b3,	// (0x0005ae26) list_single_graphic_heading_pane_g1

0xb5cb,	// (0x0005ae3e) list_single_graphic_heading_pane_g4_ParamLimits

0xb5cb,	// (0x0005ae3e) list_single_graphic_heading_pane_g4

0x30af,	// (0x00052922) list_single_graphic_heading_pane_g5_ParamLimits

0x30af,	// (0x00052922) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0005ee51) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0005ee51) list_single_graphic_heading_pane_g

0xb58b,	// (0x0005adfe) list_single_graphic_heading_pane_t1_ParamLimits

0xb58b,	// (0x0005adfe) list_single_graphic_heading_pane_t1

0xb5dc,	// (0x0005ae4f) list_single_graphic_heading_pane_t2_ParamLimits

0xb5dc,	// (0x0005ae4f) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0005ee58) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0005ee58) list_single_graphic_heading_pane_t

0x1ac1,	// (0x00051334) list_single_large_graphic_pane_g1_ParamLimits

0x1ac1,	// (0x00051334) list_single_large_graphic_pane_g1

0x1acd,	// (0x00051340) list_single_large_graphic_pane_g2_ParamLimits

0x1acd,	// (0x00051340) list_single_large_graphic_pane_g2

0x1ad9,	// (0x0005134c) list_single_large_graphic_pane_g3_ParamLimits

0x1ad9,	// (0x0005134c) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0005ee5d) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0005ee5d) list_single_large_graphic_pane_g

0x56e0,	// (0x00054f53) wait_border_pane_g2_copy1

0x303e,	// (0x000528b1) list_single_large_graphic_pane_g4_cp2

0x1ae5,	// (0x00051358) list_single_large_graphic_pane_t1_ParamLimits

0x1ae5,	// (0x00051358) list_single_large_graphic_pane_t1

0x46b6,	// (0x00053f29) list_double_pane_g1_ParamLimits

0x46b6,	// (0x00053f29) list_double_pane_g1

0xb5f2,	// (0x0005ae65) list_double_pane_g2_ParamLimits

0xb5f2,	// (0x0005ae65) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0005ee64) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0005ee64) list_double_pane_g

0xb5fe,	// (0x0005ae71) list_double_pane_t1_ParamLimits

0xb5fe,	// (0x0005ae71) list_double_pane_t1

0xb614,	// (0x0005ae87) list_double_pane_t2_ParamLimits

0xb614,	// (0x0005ae87) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0005ee69) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0005ee69) list_double_pane_t

0xb626,	// (0x0005ae99) list_double2_pane_g1_ParamLimits

0xb626,	// (0x0005ae99) list_double2_pane_g1

0xb637,	// (0x0005aeaa) list_double2_pane_g2_ParamLimits

0xb637,	// (0x0005aeaa) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0005ee6e) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0005ee6e) list_double2_pane_g

0xb643,	// (0x0005aeb6) list_double2_pane_t1_ParamLimits

0xb643,	// (0x0005aeb6) list_double2_pane_t1

0xb659,	// (0x0005aecc) list_double2_pane_t2_ParamLimits

0xb659,	// (0x0005aecc) list_double2_pane_t2

0x0001,

0xf600,	// (0x0005ee73) list_double2_pane_t_ParamLimits

0xf600,	// (0x0005ee73) list_double2_pane_t

0x46b6,	// (0x00053f29) list_double_number_pane_g1_ParamLimits

0x46b6,	// (0x00053f29) list_double_number_pane_g1

0xb5f2,	// (0x0005ae65) list_double_number_pane_g2_ParamLimits

0xb5f2,	// (0x0005ae65) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0005ee64) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0005ee64) list_double_number_pane_g

0xb66b,	// (0x0005aede) list_double_number_pane_t1_ParamLimits

0xb66b,	// (0x0005aede) list_double_number_pane_t1

0xb67d,	// (0x0005aef0) list_double_number_pane_t2_ParamLimits

0xb67d,	// (0x0005aef0) list_double_number_pane_t2

0xb693,	// (0x0005af06) list_double_number_pane_t3_ParamLimits

0xb693,	// (0x0005af06) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0005ee78) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0005ee78) list_double_number_pane_t

0xb6a5,	// (0x0005af18) list_double_graphic_pane_g1_ParamLimits

0xb6a5,	// (0x0005af18) list_double_graphic_pane_g1

0xb6b1,	// (0x0005af24) list_double_graphic_pane_g2_ParamLimits

0xb6b1,	// (0x0005af24) list_double_graphic_pane_g2

0xb6c0,	// (0x0005af33) list_double_graphic_pane_g3_ParamLimits

0xb6c0,	// (0x0005af33) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0005ee7f) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0005ee7f) list_double_graphic_pane_g

0xb6d8,	// (0x0005af4b) list_double_graphic_pane_t1_ParamLimits

0xb6d8,	// (0x0005af4b) list_double_graphic_pane_t1

0xb6ee,	// (0x0005af61) list_double_graphic_pane_t2_ParamLimits

0xb6ee,	// (0x0005af61) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0005ee88) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0005ee88) list_double_graphic_pane_t

0xb700,	// (0x0005af73) list_double2_graphic_pane_g1_ParamLimits

0xb700,	// (0x0005af73) list_double2_graphic_pane_g1

0xb70c,	// (0x0005af7f) list_double2_graphic_pane_g2_ParamLimits

0xb70c,	// (0x0005af7f) list_double2_graphic_pane_g2

0xb718,	// (0x0005af8b) list_double2_graphic_pane_g3_ParamLimits

0xb718,	// (0x0005af8b) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0005ee8d) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0005ee8d) list_double2_graphic_pane_g

0xb724,	// (0x0005af97) list_double2_graphic_pane_t1_ParamLimits

0xb724,	// (0x0005af97) list_double2_graphic_pane_t1

0xb73a,	// (0x0005afad) list_double2_graphic_pane_t2_ParamLimits

0xb73a,	// (0x0005afad) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0005ee94) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0005ee94) list_double2_graphic_pane_t

0xb74c,	// (0x0005afbf) list_double_large_graphic_pane_g1_ParamLimits

0xb74c,	// (0x0005afbf) list_double_large_graphic_pane_g1

0xb76b,	// (0x0005afde) list_double_large_graphic_pane_g2_ParamLimits

0xb76b,	// (0x0005afde) list_double_large_graphic_pane_g2

0xb5f2,	// (0x0005ae65) list_double_large_graphic_pane_g3_ParamLimits

0xb5f2,	// (0x0005ae65) list_double_large_graphic_pane_g3

0xb781,	// (0x0005aff4) list_double_large_graphic_pane_g4_ParamLimits

0xb781,	// (0x0005aff4) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0005ee99) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0005ee99) list_double_large_graphic_pane_g

0xb793,	// (0x0005b006) list_double_large_graphic_pane_t1_ParamLimits

0xb793,	// (0x0005b006) list_double_large_graphic_pane_t1

0xb7ac,	// (0x0005b01f) list_double_large_graphic_pane_t2_ParamLimits

0xb7ac,	// (0x0005b01f) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0005eea4) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0005eea4) list_double_large_graphic_pane_t

0xb7be,	// (0x0005b031) list_double2_large_graphic_pane_g1_ParamLimits

0xb7be,	// (0x0005b031) list_double2_large_graphic_pane_g1

0xb7ca,	// (0x0005b03d) list_double2_large_graphic_pane_g2_ParamLimits

0xb7ca,	// (0x0005b03d) list_double2_large_graphic_pane_g2

0xb718,	// (0x0005af8b) list_double2_large_graphic_pane_g3_ParamLimits

0xb718,	// (0x0005af8b) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0005eea9) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0005eea9) list_double2_large_graphic_pane_g

0xb7db,	// (0x0005b04e) list_double2_large_graphic_pane_t1_ParamLimits

0xb7db,	// (0x0005b04e) list_double2_large_graphic_pane_t1

0xb7f1,	// (0x0005b064) list_double2_large_graphic_pane_t2_ParamLimits

0xb7f1,	// (0x0005b064) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0005eeb0) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0005eeb0) list_double2_large_graphic_pane_t

0xb803,	// (0x0005b076) list_double_heading_pane_g1_ParamLimits

0xb803,	// (0x0005b076) list_double_heading_pane_g1

0xb814,	// (0x0005b087) list_double_heading_pane_g2_ParamLimits

0xb814,	// (0x0005b087) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0005eeb5) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0005eeb5) list_double_heading_pane_g

0xb820,	// (0x0005b093) list_double_heading_pane_t1_ParamLimits

0xb820,	// (0x0005b093) list_double_heading_pane_t1

0xb659,	// (0x0005aecc) list_double_heading_pane_t2_ParamLimits

0xb659,	// (0x0005aecc) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0005eeba) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0005eeba) list_double_heading_pane_t

0xb836,	// (0x0005b0a9) list_double_graphic_heading_pane_g1_ParamLimits

0xb836,	// (0x0005b0a9) list_double_graphic_heading_pane_g1

0xb803,	// (0x0005b076) list_double_graphic_heading_pane_g2_ParamLimits

0xb803,	// (0x0005b076) list_double_graphic_heading_pane_g2

0xb814,	// (0x0005b087) list_double_graphic_heading_pane_g3_ParamLimits

0xb814,	// (0x0005b087) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0005eebf) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0005eebf) list_double_graphic_heading_pane_g

0xb842,	// (0x0005b0b5) list_double_graphic_heading_pane_t1_ParamLimits

0xb842,	// (0x0005b0b5) list_double_graphic_heading_pane_t1

0xb73a,	// (0x0005afad) list_double_graphic_heading_pane_t2_ParamLimits

0xb73a,	// (0x0005afad) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0005eec6) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0005eec6) list_double_graphic_heading_pane_t

0xb858,	// (0x0005b0cb) list_double_time_pane_g1_ParamLimits

0xb858,	// (0x0005b0cb) list_double_time_pane_g1

0xb869,	// (0x0005b0dc) list_double_time_pane_g2_ParamLimits

0xb869,	// (0x0005b0dc) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0005eecb) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0005eecb) list_double_time_pane_g

0xb875,	// (0x0005b0e8) list_double_time_pane_t1_ParamLimits

0xb875,	// (0x0005b0e8) list_double_time_pane_t1

0xb88b,	// (0x0005b0fe) list_double_time_pane_t2_ParamLimits

0xb88b,	// (0x0005b0fe) list_double_time_pane_t2

0xb89d,	// (0x0005b110) list_double_time_pane_t3_ParamLimits

0xb89d,	// (0x0005b110) list_double_time_pane_t3

0xb8af,	// (0x0005b122) list_double_time_pane_t4_ParamLimits

0xb8af,	// (0x0005b122) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0005eed0) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0005eed0) list_double_time_pane_t

0xb8c1,	// (0x0005b134) list_setting_pane_g1_ParamLimits

0xb8c1,	// (0x0005b134) list_setting_pane_g1

0xb637,	// (0x0005aeaa) list_setting_pane_g2_ParamLimits

0xb637,	// (0x0005aeaa) list_setting_pane_g2

0x0001,

0xf666,	// (0x0005eed9) list_setting_pane_g_ParamLimits

0xf666,	// (0x0005eed9) list_setting_pane_g

0xb8cd,	// (0x0005b140) list_setting_pane_t1_ParamLimits

0xb8cd,	// (0x0005b140) list_setting_pane_t1

0xb8e7,	// (0x0005b15a) list_setting_pane_t2_ParamLimits

0xb8e7,	// (0x0005b15a) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0005eede) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0005eede) list_setting_pane_t

0xb926,	// (0x0005b199) set_value_pane_cp_ParamLimits

0xb926,	// (0x0005b199) set_value_pane_cp

0xb932,	// (0x0005b1a5) list_setting_number_pane_g1_ParamLimits

0xb932,	// (0x0005b1a5) list_setting_number_pane_g1

0xb93e,	// (0x0005b1b1) list_setting_number_pane_g2_ParamLimits

0xb93e,	// (0x0005b1b1) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0005eee5) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0005eee5) list_setting_number_pane_g

0xb94a,	// (0x0005b1bd) list_setting_number_pane_t1_ParamLimits

0xb94a,	// (0x0005b1bd) list_setting_number_pane_t1

0xb963,	// (0x0005b1d6) list_setting_number_pane_t2_ParamLimits

0xb963,	// (0x0005b1d6) list_setting_number_pane_t2

0xb97d,	// (0x0005b1f0) list_setting_number_pane_t3_ParamLimits

0xb97d,	// (0x0005b1f0) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0005eeea) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0005eeea) list_setting_number_pane_t

0xb926,	// (0x0005b199) set_value_pane_ParamLimits

0xb926,	// (0x0005b199) set_value_pane

0x3baf,	// (0x00053422) bg_set_opt_pane_ParamLimits

0x3baf,	// (0x00053422) bg_set_opt_pane

0x055b,	// (0x0004fdce) set_value_pane_t1

0x3bd0,	// (0x00053443) slider_set_pane_cp3

0x3bd9,	// (0x0005344c) volume_small_pane_cp

0x3be2,	// (0x00053455) list_form_gen_pane

0x3beb,	// (0x0005345e) scroll_pane_cp8

0xb9c0,	// (0x0005b233) form_field_data_pane_ParamLimits

0xb9c0,	// (0x0005b233) form_field_data_pane

0xb9d7,	// (0x0005b24a) form_field_data_wide_pane_ParamLimits

0xb9d7,	// (0x0005b24a) form_field_data_wide_pane

0xb9f7,	// (0x0005b26a) form_field_popup_pane_ParamLimits

0xb9f7,	// (0x0005b26a) form_field_popup_pane

0xba0f,	// (0x0005b282) form_field_popup_wide_pane_ParamLimits

0xba0f,	// (0x0005b282) form_field_popup_wide_pane

0x05f7,	// (0x0004fe6a) form_field_slider_pane_ParamLimits

0x05f7,	// (0x0004fe6a) form_field_slider_pane

0x060a,	// (0x0004fe7d) form_field_slider_wide_pane_ParamLimits

0x060a,	// (0x0004fe7d) form_field_slider_wide_pane

0x3bfc,	// (0x0005346f) data_form_pane

0xba30,	// (0x0005b2a3) form_field_data_pane_t1

0x3c08,	// (0x0005347b) input_focus_pane

0x063f,	// (0x0004feb2) data_form_wide_pane

0x065c,	// (0x0004fecf) form_field_data_wide_pane_t1

0x396d,	// (0x000531e0) input_focus_pane_cp6

0xba4a,	// (0x0005b2bd) form_field_popup_pane_t1

0x3c08,	// (0x0005347b) input_focus_pane_cp7

0x3c2a,	// (0x0005349d) list_form_pane

0x069e,	// (0x0004ff11) form_field_popup_wide_pane_t1

0x3c08,	// (0x0005347b) input_focus_pane_cp8

0x3c36,	// (0x000534a9) list_form_wide_pane

0xba6c,	// (0x0005b2df) form_field_slider_pane_t1_ParamLimits

0xba6c,	// (0x0005b2df) form_field_slider_pane_t1

0xba84,	// (0x0005b2f7) form_field_slider_pane_t2_ParamLimits

0xba84,	// (0x0005b2f7) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0005eefa) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0005eefa) form_field_slider_pane_t

0x2f0b,	// (0x0005277e) input_focus_pane_cp9_ParamLimits

0x2f0b,	// (0x0005277e) input_focus_pane_cp9

0xba99,	// (0x0005b30c) slider_cont_pane_ParamLimits

0xba99,	// (0x0005b30c) slider_cont_pane

0x3c45,	// (0x000534b8) form_field_slider_wide_pane_t1_ParamLimits

0x3c45,	// (0x000534b8) form_field_slider_wide_pane_t1

0x06fa,	// (0x0004ff6d) form_field_slider_wide_pane_t2_ParamLimits

0x06fa,	// (0x0004ff6d) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0005eeff) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0005eeff) form_field_slider_wide_pane_t

0x2f0b,	// (0x0005277e) input_focus_pane_cp10_ParamLimits

0x2f0b,	// (0x0005277e) input_focus_pane_cp10

0xbaad,	// (0x0005b320) slider_cont_pane_cp1_ParamLimits

0xbaad,	// (0x0005b320) slider_cont_pane_cp1

0xbac1,	// (0x0005b334) slider_form_pane_cp

0x3c57,	// (0x000534ca) input_focus_pane_g1

0x3c5f,	// (0x000534d2) input_focus_pane_g2

0x3c67,	// (0x000534da) input_focus_pane_g3

0x3c6f,	// (0x000534e2) input_focus_pane_g4

0x3c77,	// (0x000534ea) input_focus_pane_g5

0x3c7f,	// (0x000534f2) input_focus_pane_g6

0x3c87,	// (0x000534fa) input_focus_pane_g7

0x3c8f,	// (0x00053502) input_focus_pane_g8

0x3c97,	// (0x0005350a) input_focus_pane_g9

0x2ba6,	// (0x00052419) input_focus_pane_g10

0x0009,

0xf691,	// (0x0005ef04) input_focus_pane_g

0x56e9,	// (0x00054f5c) wait_border_pane_g3_copy1

0xbac9,	// (0x0005b33c) data_form_pane_t1

0x2ba6,	// (0x00052419) wait_anim_pane_g1_copy1

0xc4b0,	// (0x0005bd23) data_form_wide_pane_t1

0xbae2,	// (0x0005b355) list_form_graphic_pane_cp_ParamLimits

0xbae2,	// (0x0005b355) list_form_graphic_pane_cp

0x6616,	// (0x00055e89) slider_form_pane_g1

0x661f,	// (0x00055e92) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0005f202) slider_form_pane_g

0xbaf3,	// (0x0005b366) list_form_graphic_pane_ParamLimits

0xbaf3,	// (0x0005b366) list_form_graphic_pane

0x0778,	// (0x0004ffeb) list_form_graphic_pane_g1

0x0780,	// (0x0004fff3) list_form_graphic_pane_t1_ParamLimits

0x0780,	// (0x0004fff3) list_form_graphic_pane_t1

0x2c90,	// (0x00052503) list_highlight_pane_cp5_ParamLimits

0x2c90,	// (0x00052503) list_highlight_pane_cp5

0xbb05,	// (0x0005b378) find_pane_g1

0x3c9f,	// (0x00053512) input_find_pane

0xbb0e,	// (0x0005b381) input_find_pane_g1_ParamLimits

0xbb0e,	// (0x0005b381) input_find_pane_g1

0xbb1a,	// (0x0005b38d) input_find_pane_t1_ParamLimits

0xbb1a,	// (0x0005b38d) input_find_pane_t1

0xbb2f,	// (0x0005b3a2) input_find_pane_t2_ParamLimits

0xbb2f,	// (0x0005b3a2) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0005ef19) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0005ef19) input_find_pane_t

0x3ca8,	// (0x0005351b) input_focus_pane_cp5_ParamLimits

0x3ca8,	// (0x0005351b) input_focus_pane_cp5

0x3cc2,	// (0x00053535) bg_popup_window_pane_cp2_ParamLimits

0x3cc2,	// (0x00053535) bg_popup_window_pane_cp2

0x3ccf,	// (0x00053542) listscroll_menu_pane_ParamLimits

0x3ccf,	// (0x00053542) listscroll_menu_pane

0xcfb2,	// (0x0005c825) popup_submenu_window_ParamLimits

0xcfb2,	// (0x0005c825) popup_submenu_window

0x3d07,	// (0x0005357a) find_popup_pane_g1

0x3d0f,	// (0x00053582) input_popup_find_pane_cp

0x3ca8,	// (0x0005351b) input_focus_pane_cp4_ParamLimits

0x3ca8,	// (0x0005351b) input_focus_pane_cp4

0x3d25,	// (0x00053598) input_popup_find_pane_t1_ParamLimits

0x3d25,	// (0x00053598) input_popup_find_pane_t1

0x2bb0,	// (0x00052423) bg_popup_sub_pane_cp

0x3d53,	// (0x000535c6) listscroll_popup_sub_pane

0x3d5b,	// (0x000535ce) list_submenu_pane_ParamLimits

0x3d5b,	// (0x000535ce) list_submenu_pane

0x3d6c,	// (0x000535df) scroll_pane_cp4

0x3d74,	// (0x000535e7) list_single_popup_submenu_pane_ParamLimits

0x3d74,	// (0x000535e7) list_single_popup_submenu_pane

0x3d88,	// (0x000535fb) list_single_popup_submenu_pane_g1

0x3d90,	// (0x00053603) list_single_popup_submenu_pane_t1_ParamLimits

0x3d90,	// (0x00053603) list_single_popup_submenu_pane_t1

0x2f0b,	// (0x0005277e) bg_active_tab_pane_cp1_ParamLimits

0x2f0b,	// (0x0005277e) bg_active_tab_pane_cp1

0x3da5,	// (0x00053618) tabs_2_active_pane_g1

0xcfec,	// (0x0005c85f) tabs_2_active_pane_t1

0x2f0b,	// (0x0005277e) bg_passive_tab_pane_cp1_ParamLimits

0x2f0b,	// (0x0005277e) bg_passive_tab_pane_cp1

0x3da5,	// (0x00053618) tabs_2_passive_pane_g1

0xcfec,	// (0x0005c85f) tabs_2_passive_pane_t1

0x2c90,	// (0x00052503) bg_active_tab_pane_cp4

0xcffe,	// (0x0005c871) tabs_2_long_active_pane_t1

0x4bd0,	// (0x00054443) bg_passive_tab_pane_cp4

0x147b,	// (0x00050cee) list_single_midp_graphic_pane_g4_ParamLimits

0x2c90,	// (0x00052503) bg_active_tab_pane_cp5

0xd011,	// (0x0005c884) tabs_3_long_active_pane_t1

0x4bd0,	// (0x00054443) bg_passive_tab_pane_cp5

0x147b,	// (0x00050cee) list_single_midp_graphic_pane_g4

0x2c90,	// (0x00052503) bg_popup_window_pane_cp13_ParamLimits

0x2c90,	// (0x00052503) bg_popup_window_pane_cp13

0x3e07,	// (0x0005367a) listscroll_popup_fast_pane_ParamLimits

0x3e07,	// (0x0005367a) listscroll_popup_fast_pane

0x3e16,	// (0x00053689) grid_popup_fast_pane_ParamLimits

0x3e16,	// (0x00053689) grid_popup_fast_pane

0x3e28,	// (0x0005369b) scroll_pane_cp9_ParamLimits

0x3e28,	// (0x0005369b) scroll_pane_cp9

0x7edc,	// (0x0005774f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7edc,	// (0x0005774f) list_single_graphic_hl_pane_t1_cp2

0x3e4c,	// (0x000536bf) input_focus_pane_cp20_ParamLimits

0x3e4c,	// (0x000536bf) input_focus_pane_cp20

0x3e5a,	// (0x000536cd) query_popup_data_pane_t1_ParamLimits

0x3e5a,	// (0x000536cd) query_popup_data_pane_t1

0x3e6d,	// (0x000536e0) query_popup_data_pane_t2_ParamLimits

0x3e6d,	// (0x000536e0) query_popup_data_pane_t2

0x3eb3,	// (0x00053726) query_popup_data_pane_t3_ParamLimits

0x3eb3,	// (0x00053726) query_popup_data_pane_t3

0x3ef4,	// (0x00053767) query_popup_data_pane_t4_ParamLimits

0x3ef4,	// (0x00053767) query_popup_data_pane_t4

0x3f30,	// (0x000537a3) query_popup_data_pane_t5_ParamLimits

0x3f30,	// (0x000537a3) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0005ef1e) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0005ef1e) query_popup_data_pane_t

0x3c57,	// (0x000534ca) bg_set_opt_pane_g1

0x3c5f,	// (0x000534d2) bg_set_opt_pane_g2

0x3c67,	// (0x000534da) bg_set_opt_pane_g3

0x3c6f,	// (0x000534e2) bg_set_opt_pane_g4

0x3c77,	// (0x000534ea) bg_set_opt_pane_g5

0x3c7f,	// (0x000534f2) bg_set_opt_pane_g6

0x3c87,	// (0x000534fa) bg_set_opt_pane_g7

0x3c8f,	// (0x00053502) bg_set_opt_pane_g8

0x3c97,	// (0x0005350a) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0005ef29) bg_set_opt_pane_g

0x0adf,	// (0x00050352) control_top_pane_stacon_ParamLimits

0x0adf,	// (0x00050352) control_top_pane_stacon

0x0b32,	// (0x000503a5) signal_pane_stacon_ParamLimits

0x0b32,	// (0x000503a5) signal_pane_stacon

0x4520,	// (0x00053d93) stacon_top_pane_g1_ParamLimits

0x4520,	// (0x00053d93) stacon_top_pane_g1

0x0b57,	// (0x000503ca) title_pane_stacon_ParamLimits

0x0b57,	// (0x000503ca) title_pane_stacon

0x0b81,	// (0x000503f4) uni_indicator_pane_stacon_ParamLimits

0x0b81,	// (0x000503f4) uni_indicator_pane_stacon

0x0b96,	// (0x00050409) battery_pane_stacon_ParamLimits

0x0b96,	// (0x00050409) battery_pane_stacon

0x0bda,	// (0x0005044d) control_bottom_pane_stacon_ParamLimits

0x0bda,	// (0x0005044d) control_bottom_pane_stacon

0x0bfd,	// (0x00050470) navi_pane_stacon_ParamLimits

0x0bfd,	// (0x00050470) navi_pane_stacon

0x4542,	// (0x00053db5) stacon_bottom_pane_g1_ParamLimits

0x4542,	// (0x00053db5) stacon_bottom_pane_g1

0x07d4,	// (0x00050047) aid_levels_signal_lsc_ParamLimits

0x07d4,	// (0x00050047) aid_levels_signal_lsc

0x07ea,	// (0x0005005d) signal_pane_stacon_g1_ParamLimits

0x07ea,	// (0x0005005d) signal_pane_stacon_g1

0x07fe,	// (0x00050071) signal_pane_stacon_g2_ParamLimits

0x07fe,	// (0x00050071) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0005ef3c) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0005ef3c) signal_pane_stacon_g

0x0833,	// (0x000500a6) title_pane_stacon_t1_ParamLimits

0x0833,	// (0x000500a6) title_pane_stacon_t1

0x3f74,	// (0x000537e7) uni_indicator_pane_stacon_g1

0x3f7e,	// (0x000537f1) uni_indicator_pane_stacon_g2

0x3f88,	// (0x000537fb) uni_indicator_pane_stacon_g3

0x3f92,	// (0x00053805) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0005ef48) uni_indicator_pane_stacon_g

0x0858,	// (0x000500cb) control_top_pane_stacon_g1

0x0860,	// (0x000500d3) control_top_pane_stacon_t1_ParamLimits

0x0860,	// (0x000500d3) control_top_pane_stacon_t1

0x0897,	// (0x0005010a) aid_levels_battery_lsc_ParamLimits

0x0897,	// (0x0005010a) aid_levels_battery_lsc

0x08ae,	// (0x00050121) battery_pane_stacon_g1_ParamLimits

0x08ae,	// (0x00050121) battery_pane_stacon_g1

0x08c1,	// (0x00050134) battery_pane_stacon_g2_ParamLimits

0x08c1,	// (0x00050134) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0005ef51) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0005ef51) battery_pane_stacon_g

0x08ff,	// (0x00050172) navi_icon_pane_stacon

0x0913,	// (0x00050186) navi_navi_pane_stacon

0x08ff,	// (0x00050172) navi_text_pane_stacon

0x0858,	// (0x000500cb) control_bottom_pane_stacon_g1

0x0927,	// (0x0005019a) control_bottom_pane_stacon_t1_ParamLimits

0x0927,	// (0x0005019a) control_bottom_pane_stacon_t1

0xd023,	// (0x0005c896) grid_app_pane_ParamLimits

0xd023,	// (0x0005c896) grid_app_pane

0xd05b,	// (0x0005c8ce) scroll_pane_cp15_ParamLimits

0xd05b,	// (0x0005c8ce) scroll_pane_cp15

0xd070,	// (0x0005c8e3) cell_app_pane_ParamLimits

0xd070,	// (0x0005c8e3) cell_app_pane

0xd0b5,	// (0x0005c928) cell_app_pane_g1_ParamLimits

0xd0b5,	// (0x0005c928) cell_app_pane_g1

0x4035,	// (0x000538a8) cell_app_pane_g2_ParamLimits

0x4035,	// (0x000538a8) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0005ef56) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0005ef56) cell_app_pane_g

0xd0d9,	// (0x0005c94c) cell_app_pane_t1_ParamLimits

0xd0d9,	// (0x0005c94c) cell_app_pane_t1

0x4058,	// (0x000538cb) grid_highlight_pane_ParamLimits

0x4058,	// (0x000538cb) grid_highlight_pane

0x3c57,	// (0x000534ca) cell_highlight_pane_g1

0x3c5f,	// (0x000534d2) cell_highlight_pane_g2

0x3c67,	// (0x000534da) cell_highlight_pane_g3

0x3c6f,	// (0x000534e2) cell_highlight_pane_g4

0x3c77,	// (0x000534ea) cell_highlight_pane_g5

0x3c7f,	// (0x000534f2) cell_highlight_pane_g6

0x3c87,	// (0x000534fa) cell_highlight_pane_g7

0x3c8f,	// (0x00053502) cell_highlight_pane_g8

0x3c97,	// (0x0005350a) cell_highlight_pane_g9

0x2ba6,	// (0x00052419) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0005ef04) cell_highlight_pane_g

0x4069,	// (0x000538dc) bg_scroll_pane

0x0971,	// (0x000501e4) scroll_handle_pane

0x40b0,	// (0x00053923) scroll_bg_pane_g1

0x40c5,	// (0x00053938) scroll_bg_pane_g2

0x40dd,	// (0x00053950) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0005ef5b) scroll_bg_pane_g

0x40f2,	// (0x00053965) scroll_handle_focus_pane_ParamLimits

0x40f2,	// (0x00053965) scroll_handle_focus_pane

0x40b0,	// (0x00053923) scroll_handle_pane_g1

0x40ff,	// (0x00053972) scroll_handle_pane_g2

0x40dd,	// (0x00053950) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0005ef62) scroll_handle_pane_g

0x3ca8,	// (0x0005351b) bg_popup_sub_pane_cp21_ParamLimits

0x3ca8,	// (0x0005351b) bg_popup_sub_pane_cp21

0x4113,	// (0x00053986) popup_fep_japan_predictive_window_t1_ParamLimits

0x4113,	// (0x00053986) popup_fep_japan_predictive_window_t1

0x412d,	// (0x000539a0) popup_fep_japan_predictive_window_t2_ParamLimits

0x412d,	// (0x000539a0) popup_fep_japan_predictive_window_t2

0x4160,	// (0x000539d3) popup_fep_japan_predictive_window_t3_ParamLimits

0x4160,	// (0x000539d3) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0005ef69) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0005ef69) popup_fep_japan_predictive_window_t

0x2bb0,	// (0x00052423) bg_popup_sub_pane_cp23

0x4197,	// (0x00053a0a) listscroll_japin_cand_pane

0x419f,	// (0x00053a12) popup_fep_japan_candidate_window_t1

0x41ad,	// (0x00053a20) candidate_pane_ParamLimits

0x41ad,	// (0x00053a20) candidate_pane

0x41bf,	// (0x00053a32) scroll_pane_cp30

0x41c7,	// (0x00053a3a) list_single_popup_jap_candidate_pane_ParamLimits

0x41c7,	// (0x00053a3a) list_single_popup_jap_candidate_pane

0x2bb0,	// (0x00052423) list_highlight_pane_cp30

0x41dc,	// (0x00053a4f) list_single_popup_jap_candidate_pane_t1

0x41eb,	// (0x00053a5e) level_1_signal

0x41fd,	// (0x00053a70) level_2_signal

0x4210,	// (0x00053a83) level_3_signal

0x4223,	// (0x00053a96) level_4_signal

0x4236,	// (0x00053aa9) level_5_signal

0x4249,	// (0x00053abc) level_6_signal

0x425c,	// (0x00053acf) level_7_signal

0x41eb,	// (0x00053a5e) level_1_battery

0x41fd,	// (0x00053a70) level_2_battery

0x4210,	// (0x00053a83) level_3_battery

0x4223,	// (0x00053a96) level_4_battery

0x4236,	// (0x00053aa9) level_5_battery

0x4249,	// (0x00053abc) level_6_battery

0x425c,	// (0x00053acf) level_7_battery

0x4287,	// (0x00053afa) list_menu_pane_ParamLimits

0x4287,	// (0x00053afa) list_menu_pane

0x429d,	// (0x00053b10) scroll_pane_cp25_ParamLimits

0x429d,	// (0x00053b10) scroll_pane_cp25

0x42b6,	// (0x00053b29) list_double2_graphic_pane_cp2_ParamLimits

0x42b6,	// (0x00053b29) list_double2_graphic_pane_cp2

0x42b6,	// (0x00053b29) list_double2_large_graphic_pane_cp2_ParamLimits

0x42b6,	// (0x00053b29) list_double2_large_graphic_pane_cp2

0x42b6,	// (0x00053b29) list_double2_pane_cp2_ParamLimits

0x42b6,	// (0x00053b29) list_double2_pane_cp2

0x42b6,	// (0x00053b29) list_double_graphic_pane_cp2_ParamLimits

0x42b6,	// (0x00053b29) list_double_graphic_pane_cp2

0x42b6,	// (0x00053b29) list_double_large_graphic_pane_cp2_ParamLimits

0x42b6,	// (0x00053b29) list_double_large_graphic_pane_cp2

0x42b6,	// (0x00053b29) list_double_number_pane_cp2_ParamLimits

0x42b6,	// (0x00053b29) list_double_number_pane_cp2

0x42b6,	// (0x00053b29) list_double_pane_cp2_ParamLimits

0x42b6,	// (0x00053b29) list_double_pane_cp2

0xd0f0,	// (0x0005c963) list_single_2graphic_pane_cp2_ParamLimits

0xd0f0,	// (0x0005c963) list_single_2graphic_pane_cp2

0xd0f0,	// (0x0005c963) list_single_graphic_heading_pane_cp2_ParamLimits

0xd0f0,	// (0x0005c963) list_single_graphic_heading_pane_cp2

0xd0f0,	// (0x0005c963) list_single_graphic_pane_cp2_ParamLimits

0xd0f0,	// (0x0005c963) list_single_graphic_pane_cp2

0xd0f0,	// (0x0005c963) list_single_heading_pane_cp2_ParamLimits

0xd0f0,	// (0x0005c963) list_single_heading_pane_cp2

0x42f3,	// (0x00053b66) list_single_large_graphic_pane_cp2_ParamLimits

0x42f3,	// (0x00053b66) list_single_large_graphic_pane_cp2

0xd0f0,	// (0x0005c963) list_single_number_heading_pane_cp2_ParamLimits

0xd0f0,	// (0x0005c963) list_single_number_heading_pane_cp2

0xd0f0,	// (0x0005c963) list_single_number_pane_cp2_ParamLimits

0xd0f0,	// (0x0005c963) list_single_number_pane_cp2

0xd0f0,	// (0x0005c963) list_single_pane_cp2_ParamLimits

0xd0f0,	// (0x0005c963) list_single_pane_cp2

0x436f,	// (0x00053be2) bg_popup_sub_pane_cp22

0x0a23,	// (0x00050296) popup_side_volume_key_window_g1

0x0a4d,	// (0x000502c0) popup_side_volume_key_window_t1

0x0a69,	// (0x000502dc) volume_small_pane_cp1

0x2f0b,	// (0x0005277e) bg_popup_sub_pane_cp24_ParamLimits

0x2f0b,	// (0x0005277e) bg_popup_sub_pane_cp24

0x4385,	// (0x00053bf8) fep_china_uni_candidate_pane_ParamLimits

0x4385,	// (0x00053bf8) fep_china_uni_candidate_pane

0x4399,	// (0x00053c0c) fep_china_uni_entry_pane

0x43a9,	// (0x00053c1c) popup_fep_china_uni_window_g1

0x43c5,	// (0x00053c38) fep_china_uni_entry_pane_g1

0x43cd,	// (0x00053c40) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0005ef9a) fep_china_uni_entry_pane_g

0x43d5,	// (0x00053c48) fep_entry_item_pane

0x43df,	// (0x00053c52) fep_candidate_item_pane

0x43e7,	// (0x00053c5a) fep_china_uni_candidate_pane_g1

0x43ef,	// (0x00053c62) fep_china_uni_candidate_pane_g2

0x43f7,	// (0x00053c6a) fep_china_uni_candidate_pane_g3

0x43ff,	// (0x00053c72) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0005ef9f) fep_china_uni_candidate_pane_g

0x2ba6,	// (0x00052419) fep_entry_item_pane_g1

0x4407,	// (0x00053c7a) fep_entry_item_pane_t1_ParamLimits

0x4407,	// (0x00053c7a) fep_entry_item_pane_t1

0x441d,	// (0x00053c90) fep_candidate_item_pane_t1_ParamLimits

0x441d,	// (0x00053c90) fep_candidate_item_pane_t1

0x4432,	// (0x00053ca5) fep_candidate_item_pane_t2_ParamLimits

0x4432,	// (0x00053ca5) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0005efa8) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0005efa8) fep_candidate_item_pane_t

0x2c90,	// (0x00052503) list_highlight_pane_cp31_ParamLimits

0x2c90,	// (0x00052503) list_highlight_pane_cp31

0x4444,	// (0x00053cb7) level_1_signal_lsc

0x444d,	// (0x00053cc0) level_2_signal_lsc

0x4456,	// (0x00053cc9) level_3_signal_lsc

0x445f,	// (0x00053cd2) level_4_signal_lsc

0x4468,	// (0x00053cdb) level_5_signal_lsc

0x4471,	// (0x00053ce4) level_6_signal_lsc

0x447a,	// (0x00053ced) level_7_signal_lsc

0x447a,	// (0x00053ced) level_1_battery_lsc

0x4483,	// (0x00053cf6) level_2_battery_lsc

0x448c,	// (0x00053cff) level_3_battery_lsc

0x4495,	// (0x00053d08) level_4_battery_lsc

0x449e,	// (0x00053d11) level_5_battery_lsc

0x44a7,	// (0x00053d1a) level_6_battery_lsc

0x4444,	// (0x00053cb7) level_7_battery_lsc

0x44b0,	// (0x00053d23) scroll_handle_focus_pane_g1

0x44b9,	// (0x00053d2c) scroll_handle_focus_pane_g2

0x44c2,	// (0x00053d35) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0005efad) scroll_handle_focus_pane_g

0xbb4d,	// (0x0005b3c0) list_single_2graphic_pane_g1_ParamLimits

0xbb4d,	// (0x0005b3c0) list_single_2graphic_pane_g1

0xb5cb,	// (0x0005ae3e) list_single_2graphic_pane_g2_ParamLimits

0xb5cb,	// (0x0005ae3e) list_single_2graphic_pane_g2

0x30af,	// (0x00052922) list_single_2graphic_pane_g3_ParamLimits

0x30af,	// (0x00052922) list_single_2graphic_pane_g3

0xbb59,	// (0x0005b3cc) list_single_2graphic_pane_g4_ParamLimits

0xbb59,	// (0x0005b3cc) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0005efb4) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0005efb4) list_single_2graphic_pane_g

0xbb65,	// (0x0005b3d8) list_single_2graphic_pane_t1_ParamLimits

0xbb65,	// (0x0005b3d8) list_single_2graphic_pane_t1

0xbb93,	// (0x0005b406) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbb93,	// (0x0005b406) list_double2_graphic_large_graphic_pane_g1

0xb7ca,	// (0x0005b03d) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb7ca,	// (0x0005b03d) list_double2_graphic_large_graphic_pane_g2

0xb718,	// (0x0005af8b) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb718,	// (0x0005af8b) list_double2_graphic_large_graphic_pane_g3

0xbba5,	// (0x0005b418) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbba5,	// (0x0005b418) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0005efbd) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0005efbd) list_double2_graphic_large_graphic_pane_g

0xbbb1,	// (0x0005b424) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbbb1,	// (0x0005b424) list_double2_graphic_large_graphic_pane_t1

0xbbc7,	// (0x0005b43a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbbc7,	// (0x0005b43a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0005efc6) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0005efc6) list_double2_graphic_large_graphic_pane_t

0x460a,	// (0x00053e7d) popup_fast_swap_window_ParamLimits

0x460a,	// (0x00053e7d) popup_fast_swap_window

0x4626,	// (0x00053e99) popup_side_volume_key_window

0x4642,	// (0x00053eb5) stacon_top_pane

0x464c,	// (0x00053ebf) status_pane_ParamLimits

0x464c,	// (0x00053ebf) status_pane

0xd1ad,	// (0x0005ca20) status_small_pane

0x2bb0,	// (0x00052423) control_pane

0x2bb0,	// (0x00052423) stacon_bottom_pane

0x3beb,	// (0x0005345e) scroll_pane_cp121

0x3be2,	// (0x00053455) set_content_pane

0x44cb,	// (0x00053d3e) bg_active_tab_pane_g1_cp1

0x44d4,	// (0x00053d47) bg_active_tab_pane_g2_cp1

0x44dd,	// (0x00053d50) bg_active_tab_pane_g3_cp1

0x44cb,	// (0x00053d3e) bg_passive_tab_pane_g1_cp1

0x44d4,	// (0x00053d47) bg_passive_tab_pane_g2_cp1

0x44dd,	// (0x00053d50) bg_passive_tab_pane_g3_cp1

0x44e6,	// (0x00053d59) bg_active_tab_pane_g1_cp2

0x44d4,	// (0x00053d47) bg_active_tab_pane_g2_cp2

0x44ef,	// (0x00053d62) bg_active_tab_pane_g3_cp2

0x44e6,	// (0x00053d59) bg_passive_tab_pane_g1_cp2

0x44d4,	// (0x00053d47) bg_passive_tab_pane_g2_cp2

0x44ef,	// (0x00053d62) bg_passive_tab_pane_g3_cp2

0x44f8,	// (0x00053d6b) bg_active_tab_pane_g1_cp3

0x44d4,	// (0x00053d47) bg_active_tab_pane_g2_cp3

0x4501,	// (0x00053d74) bg_active_tab_pane_g3_cp3

0x44f8,	// (0x00053d6b) bg_passive_tab_pane_g1_cp3

0x44d4,	// (0x00053d47) bg_passive_tab_pane_g2_cp3

0x4501,	// (0x00053d74) bg_passive_tab_pane_g3_cp3

0x450a,	// (0x00053d7d) bg_active_tab_pane_g1_cp4

0x44d4,	// (0x00053d47) bg_active_tab_pane_g2_cp4

0x4515,	// (0x00053d88) bg_active_tab_pane_g3_cp4

0x450a,	// (0x00053d7d) bg_passive_tab_pane_g1_cp4

0x44d4,	// (0x00053d47) bg_passive_tab_pane_g2_cp4

0x4515,	// (0x00053d88) bg_passive_tab_pane_g3_cp4

0x455e,	// (0x00053dd1) bg_active_tab_pane_g1_cp5

0x44d4,	// (0x00053d47) bg_active_tab_pane_g2_cp5

0x4567,	// (0x00053dda) bg_active_tab_pane_g3_cp5

0x455e,	// (0x00053dd1) bg_passive_tab_pane_g1_cp5

0x44d4,	// (0x00053d47) bg_passive_tab_pane_g2_cp5

0x4567,	// (0x00053dda) bg_passive_tab_pane_g3_cp5

0x6bbe,	// (0x00056431) list_set_graphic_pane_ParamLimits

0x6bbe,	// (0x00056431) list_set_graphic_pane

0x2bb0,	// (0x00052423) bg_set_opt_pane_cp4

0xd17d,	// (0x0005c9f0) list_set_graphic_pane_g1_ParamLimits

0xd17d,	// (0x0005c9f0) list_set_graphic_pane_g1

0xd189,	// (0x0005c9fc) list_set_graphic_pane_g2_ParamLimits

0xd189,	// (0x0005c9fc) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0005efcb) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0005efcb) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x0005f334) volume_small_pane_cp_g

0x45bd,	// (0x00053e30) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x45bd,	// (0x00053e30) list_double2_large_graphic_pane_g1_cp2

0x45c9,	// (0x00053e3c) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x45c9,	// (0x00053e3c) list_double2_large_graphic_pane_g2_cp2

0x45da,	// (0x00053e4d) list_double2_large_graphic_pane_g3_cp2

0x45e2,	// (0x00053e55) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x45e2,	// (0x00053e55) list_double2_large_graphic_pane_t1_cp2

0x45f8,	// (0x00053e6b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x45f8,	// (0x00053e6b) list_double2_large_graphic_pane_t2_cp2

0x61c8,	// (0x00055a3b) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x61c8,	// (0x00055a3b) list_double_large_graphic_pane_g1_cp2

0x61d9,	// (0x00055a4c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x61d9,	// (0x00055a4c) list_double_large_graphic_pane_g2_cp2

0x4773,	// (0x00053fe6) list_double_large_graphic_pane_g3_cp2

0x61ea,	// (0x00055a5d) list_double_large_graphic_pane_g4_cp

0x61f2,	// (0x00055a65) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x61f2,	// (0x00055a65) list_double_large_graphic_pane_t1_cp2

0x6209,	// (0x00055a7c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6209,	// (0x00055a7c) list_double_large_graphic_pane_t2_cp2

0x4665,	// (0x00053ed8) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4665,	// (0x00053ed8) list_double2_graphic_pane_g1_cp2

0x4673,	// (0x00053ee6) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4673,	// (0x00053ee6) list_double2_graphic_pane_g2_cp2

0x4684,	// (0x00053ef7) list_double2_graphic_pane_g3_cp2

0x468e,	// (0x00053f01) list_double2_graphic_pane_t1_cp2_ParamLimits

0x468e,	// (0x00053f01) list_double2_graphic_pane_t1_cp2

0x46a4,	// (0x00053f17) list_double2_graphic_pane_t2_cp2_ParamLimits

0x46a4,	// (0x00053f17) list_double2_graphic_pane_t2_cp2

0x46b6,	// (0x00053f29) list_single_number_heading_pane_g1_cp2_ParamLimits

0x46b6,	// (0x00053f29) list_single_number_heading_pane_g1_cp2

0x46c2,	// (0x00053f35) list_single_number_heading_pane_g2_cp2

0x46ca,	// (0x00053f3d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x46ca,	// (0x00053f3d) list_single_number_heading_pane_t1_cp2

0x46e0,	// (0x00053f53) list_single_number_heading_pane_t2_cp2_ParamLimits

0x46e0,	// (0x00053f53) list_single_number_heading_pane_t2_cp2

0x46f2,	// (0x00053f65) list_single_number_heading_pane_t3_cp2_ParamLimits

0x46f2,	// (0x00053f65) list_single_number_heading_pane_t3_cp2

0x46b6,	// (0x00053f29) list_single_heading_pane_g1_cp2_ParamLimits

0x46b6,	// (0x00053f29) list_single_heading_pane_g1_cp2

0x46c2,	// (0x00053f35) list_single_heading_pane_g2_cp2

0x46ca,	// (0x00053f3d) list_single_heading_pane_t1_cp2_ParamLimits

0x46ca,	// (0x00053f3d) list_single_heading_pane_t1_cp2

0x5fd0,	// (0x00055843) list_single_heading_pane_t2_cp2_ParamLimits

0x5fd0,	// (0x00055843) list_single_heading_pane_t2_cp2

0x5f18,	// (0x0005578b) list_double_graphic_pane_g1_cp2_ParamLimits

0x5f18,	// (0x0005578b) list_double_graphic_pane_g1_cp2

0x5f24,	// (0x00055797) list_double_graphic_pane_g2_cp2_ParamLimits

0x5f24,	// (0x00055797) list_double_graphic_pane_g2_cp2

0x5f33,	// (0x000557a6) list_double_graphic_pane_g3_cp2

0x5f3b,	// (0x000557ae) list_double_graphic_pane_t1_cp2_ParamLimits

0x5f3b,	// (0x000557ae) list_double_graphic_pane_t1_cp2

0x5f51,	// (0x000557c4) list_double_graphic_pane_t2_cp2_ParamLimits

0x5f51,	// (0x000557c4) list_double_graphic_pane_t2_cp2

0x4767,	// (0x00053fda) list_double_number_pane_g1_cp2_ParamLimits

0x4767,	// (0x00053fda) list_double_number_pane_g1_cp2

0x4773,	// (0x00053fe6) list_double_number_pane_g2_cp2

0x5edc,	// (0x0005574f) list_double_number_pane_t1_cp2_ParamLimits

0x5edc,	// (0x0005574f) list_double_number_pane_t1_cp2

0x5ef0,	// (0x00055763) list_double_number_pane_t2_cp2_ParamLimits

0x5ef0,	// (0x00055763) list_double_number_pane_t2_cp2

0x5f06,	// (0x00055779) list_double_number_pane_t3_cp2_ParamLimits

0x5f06,	// (0x00055779) list_double_number_pane_t3_cp2

0x5dc5,	// (0x00055638) list_single_graphic_pane_g1_cp2_ParamLimits

0x5dc5,	// (0x00055638) list_single_graphic_pane_g1_cp2

0x47cb,	// (0x0005403e) list_single_graphic_pane_g2_cp2_ParamLimits

0x47cb,	// (0x0005403e) list_single_graphic_pane_g2_cp2

0x47d7,	// (0x0005404a) list_single_graphic_pane_g3_cp2

0x5d9b,	// (0x0005560e) list_single_graphic_pane_t1_cp2_ParamLimits

0x5d9b,	// (0x0005560e) list_single_graphic_pane_t1_cp2

0x47cb,	// (0x0005403e) list_single_number_pane_g1_cp2_ParamLimits

0x47cb,	// (0x0005403e) list_single_number_pane_g1_cp2

0x47d7,	// (0x0005404a) list_single_number_pane_g2_cp2

0x5d9b,	// (0x0005560e) list_single_number_pane_t1_cp2_ParamLimits

0x5d9b,	// (0x0005560e) list_single_number_pane_t1_cp2

0x5db1,	// (0x00055624) list_single_number_pane_t2_cp2_ParamLimits

0x5db1,	// (0x00055624) list_single_number_pane_t2_cp2

0x45c9,	// (0x00053e3c) list_double2_pane_g1_cp2_ParamLimits

0x45c9,	// (0x00053e3c) list_double2_pane_g1_cp2

0x45da,	// (0x00053e4d) list_double2_pane_g2_cp2

0x473f,	// (0x00053fb2) list_double2_pane_t1_cp2_ParamLimits

0x473f,	// (0x00053fb2) list_double2_pane_t1_cp2

0x4755,	// (0x00053fc8) list_double2_pane_t2_cp2_ParamLimits

0x4755,	// (0x00053fc8) list_double2_pane_t2_cp2

0x4767,	// (0x00053fda) list_double_pane_g1_cp2_ParamLimits

0x4767,	// (0x00053fda) list_double_pane_g1_cp2

0x4773,	// (0x00053fe6) list_double_pane_g2_cp2

0x477b,	// (0x00053fee) list_double_pane_t1_cp2_ParamLimits

0x477b,	// (0x00053fee) list_double_pane_t1_cp2

0x4791,	// (0x00054004) list_double_pane_t2_cp2_ParamLimits

0x4791,	// (0x00054004) list_double_pane_t2_cp2

0x47bb,	// (0x0005402e) list_single_pane_cp2_g3

0x47cb,	// (0x0005403e) list_single_pane_g1_cp2_ParamLimits

0x47cb,	// (0x0005403e) list_single_pane_g1_cp2

0x47d7,	// (0x0005404a) list_single_pane_g2_cp2

0x47df,	// (0x00054052) list_single_pane_t1_cp2_ParamLimits

0x47df,	// (0x00054052) list_single_pane_t1_cp2

0x47f7,	// (0x0005406a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x47f7,	// (0x0005406a) list_single_large_graphic_pane_g1_cp2

0x4803,	// (0x00054076) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4803,	// (0x00054076) list_single_large_graphic_pane_g2_cp2

0x480f,	// (0x00054082) list_single_large_graphic_pane_g3_cp2

0x4817,	// (0x0005408a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4817,	// (0x0005408a) list_single_large_graphic_pane_g4_cp1

0x4831,	// (0x000540a4) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4831,	// (0x000540a4) list_single_large_graphic_pane_t1_cp2

0x5d67,	// (0x000555da) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5d67,	// (0x000555da) list_single_graphic_heading_pane_g1_cp2

0x5d34,	// (0x000555a7) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5d34,	// (0x000555a7) list_single_graphic_heading_pane_g4_cp2

0x47d7,	// (0x0005404a) list_single_graphic_heading_pane_g5_cp2

0x5d73,	// (0x000555e6) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5d73,	// (0x000555e6) list_single_graphic_heading_pane_t1_cp2

0x5d89,	// (0x000555fc) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5d89,	// (0x000555fc) list_single_graphic_heading_pane_t2_cp2

0x5d28,	// (0x0005559b) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5d28,	// (0x0005559b) list_single_2graphic_pane_g1_cp2

0x5d34,	// (0x000555a7) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5d34,	// (0x000555a7) list_single_2graphic_pane_g2_cp2

0x47d7,	// (0x0005404a) list_single_2graphic_pane_g3_cp2

0x5d45,	// (0x000555b8) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5d45,	// (0x000555b8) list_single_2graphic_pane_g4_cp2

0x5d51,	// (0x000555c4) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5d51,	// (0x000555c4) list_single_2graphic_pane_t1_cp2

0x2ba6,	// (0x00052419) list_highlight_pane_g10_cp1

0x58f4,	// (0x00055167) list_highlight_pane_g1_cp1

0x58fc,	// (0x0005516f) list_highlight_pane_g2_cp1

0x5904,	// (0x00055177) list_highlight_pane_g3_cp1

0x590c,	// (0x0005517f) list_highlight_pane_g4_cp1

0x5914,	// (0x00055187) list_highlight_pane_g5_cp1

0x591c,	// (0x0005518f) list_highlight_pane_g6_cp1

0x5924,	// (0x00055197) list_highlight_pane_g7_cp1

0x592c,	// (0x0005519f) list_highlight_pane_g8_cp1

0x5934,	// (0x000551a7) list_highlight_pane_g9_cp1

0xd889,	// (0x0005d0fc) form_field_slider_pane_t3

0xd897,	// (0x0005d10a) form_field_slider_pane_t4

0x5830,	// (0x000550a3) slider_form_pane_ParamLimits

0x5830,	// (0x000550a3) slider_form_pane

0x2bb0,	// (0x00052423) control_abbreviations

0x2bb0,	// (0x00052423) control_conventions

0x2bb0,	// (0x00052423) control_definitions

0x2bb0,	// (0x00052423) format_table_attribute

0x601a,	// (0x0005588d) bg_popup_preview_window_pane_g9

0x2bb0,	// (0x00052423) format_table_data2

0x2bb0,	// (0x00052423) format_table_data3

0x2bb0,	// (0x00052423) format_table_data_example

0x0008,

0x2bb0,	// (0x00052423) intro_purpose

0xf8ef,	// (0x0005f162) bg_popup_preview_window_pane_g

0x2bb0,	// (0x00052423) texts_category

0x2bb0,	// (0x00052423) texts_graphics

0x4847,	// (0x000540ba) text_digital

0x4856,	// (0x000540c9) text_primary

0x4865,	// (0x000540d8) text_primary_small

0x4874,	// (0x000540e7) text_secondary

0x4883,	// (0x000540f6) text_title

0x6700,	// (0x00055f73) bg_passive_tab_pane_g1_cp3_srt

0x44d4,	// (0x00053d47) bg_passive_tab_pane_g2_cp3_srt

0x6709,	// (0x00055f7c) bg_passive_tab_pane_g3_cp3_srt

0x2f0b,	// (0x0005277e) bg_active_tab_pane_cp3_srt_ParamLimits

0x2f0b,	// (0x0005277e) bg_active_tab_pane_cp3_srt

0x6712,	// (0x00055f85) tabs_4_active_pane_srt_g1

0xdbcc,	// (0x0005d43f) tabs_4_active_pane_srt_t1_ParamLimits

0xdbcc,	// (0x0005d43f) tabs_4_active_pane_srt_t1

0x6700,	// (0x00055f73) bg_active_tab_pane_g1_cp3_copy1

0x44d4,	// (0x00053d47) bg_active_tab_pane_g2_cp3_copy1

0x6709,	// (0x00055f7c) bg_active_tab_pane_g3_cp3_copy1

0x2c90,	// (0x00052503) tabs_2_long_active_pane_srt_ParamLimits

0x2c90,	// (0x00052503) tabs_2_long_active_pane_srt

0x2c90,	// (0x00052503) tabs_2_long_passive_pane_srt_ParamLimits

0x2c90,	// (0x00052503) tabs_2_long_passive_pane_srt

0x4bd0,	// (0x00054443) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4bd0,	// (0x00054443) bg_passive_tab_pane_cp4_srt

0x6449,	// (0x00055cbc) bg_passive_tab_pane_g1_cp4_srt

0x44d4,	// (0x00053d47) bg_passive_tab_pane_g2_cp4_srt

0x6452,	// (0x00055cc5) bg_passive_tab_pane_g3_cp4_srt

0x2c90,	// (0x00052503) bg_active_tab_pane_cp4_srt_ParamLimits

0x2c90,	// (0x00052503) bg_active_tab_pane_cp4_srt

0xd9f6,	// (0x0005d269) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd9f6,	// (0x0005d269) tabs_2_long_active_pane_srt_t1

0x6449,	// (0x00055cbc) bg_active_tab_pane_g1_cp4_srt

0x44d4,	// (0x00053d47) bg_active_tab_pane_g2_cp4_srt

0x6452,	// (0x00055cc5) bg_active_tab_pane_g3_cp4_srt

0x2f0b,	// (0x0005277e) tabs_3_long_active_pane_srt_ParamLimits

0x2f0b,	// (0x0005277e) tabs_3_long_active_pane_srt

0x2f0b,	// (0x0005277e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2f0b,	// (0x0005277e) tabs_3_long_passive_pane_cp_srt

0x2f0b,	// (0x0005277e) tabs_3_long_passive_pane_srt_ParamLimits

0x2f0b,	// (0x0005277e) tabs_3_long_passive_pane_srt

0x4bd0,	// (0x00054443) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4bd0,	// (0x00054443) bg_passive_tab_pane_cp5_srt

0x455e,	// (0x00053dd1) bg_passive_tab_pane_g1_cp5_srt

0x44d4,	// (0x00053d47) bg_passive_tab_pane_g2_cp5_srt

0x4567,	// (0x00053dda) bg_passive_tab_pane_g3_cp5_srt

0x2c90,	// (0x00052503) bg_active_tab_pane_cp5_srt_ParamLimits

0x2c90,	// (0x00052503) bg_active_tab_pane_cp5_srt

0xd9e0,	// (0x0005d253) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd9e0,	// (0x0005d253) tabs_3_long_active_pane_srt_t1

0x455e,	// (0x00053dd1) bg_active_tab_pane_g1_cp5_srt

0x44d4,	// (0x00053d47) bg_active_tab_pane_g2_cp5_srt

0x4567,	// (0x00053dda) bg_active_tab_pane_g3_cp5_srt

0x6429,	// (0x00055c9c) navi_text_pane_srt_t1

0x6421,	// (0x00055c94) navi_icon_pane_srt_g1

0x4a4c,	// (0x000542bf) midp_editing_number_pane_srt

0x4892,	// (0x00054105) midp_ticker_pane_srt

0x4a54,	// (0x000542c7) midp_ticker_pane_srt_g1

0x4a5c,	// (0x000542cf) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0005efea) midp_ticker_pane_srt_g

0x4a64,	// (0x000542d7) midp_ticker_pane_srt_t1

0x6412,	// (0x00055c85) midp_editing_number_pane_t1_copy1

0x4bd0,	// (0x00054443) listscroll_midp_pane

0x4bd0,	// (0x00054443) midp_form_pane

0x48fe,	// (0x00054171) midp_info_popup_window_ParamLimits

0x48fe,	// (0x00054171) midp_info_popup_window

0x3ca8,	// (0x0005351b) bg_popup_sub_pane_cp50_ParamLimits

0x3ca8,	// (0x0005351b) bg_popup_sub_pane_cp50

0x552c,	// (0x00054d9f) listscroll_midp_info_pane_ParamLimits

0x552c,	// (0x00054d9f) listscroll_midp_info_pane

0x5514,	// (0x00054d87) listscroll_form_midp_pane_ParamLimits

0x5514,	// (0x00054d87) listscroll_form_midp_pane

0x5520,	// (0x00054d93) scroll_bar_cp050

0xd87d,	// (0x0005d0f0) list_midp_pane

0x7155,	// (0x000569c8) signal_pane_g2_cp

0x542e,	// (0x00054ca1) listscroll_midp_info_pane_t1_ParamLimits

0x542e,	// (0x00054ca1) listscroll_midp_info_pane_t1

0x5446,	// (0x00054cb9) listscroll_midp_info_pane_t2_ParamLimits

0x5446,	// (0x00054cb9) listscroll_midp_info_pane_t2

0x5484,	// (0x00054cf7) listscroll_midp_info_pane_t3_ParamLimits

0x5484,	// (0x00054cf7) listscroll_midp_info_pane_t3

0x54be,	// (0x00054d31) listscroll_midp_info_pane_t4_ParamLimits

0x54be,	// (0x00054d31) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0005f09d) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0005f09d) listscroll_midp_info_pane_t

0x3d6c,	// (0x000535df) scroll_pane_cp21

0x53cc,	// (0x00054c3f) form_midp_field_choice_group_pane

0x53d5,	// (0x00054c48) form_midp_field_text_pane

0x5414,	// (0x00054c87) form_midp_field_time_pane

0x541c,	// (0x00054c8f) form_midp_gauge_slider_pane

0x5425,	// (0x00054c98) form_midp_gauge_wait_pane

0x2bb0,	// (0x00052423) form_midp_image_pane

0xc488,	// (0x0005bcfb) list_single_midp_pane_ParamLimits

0xc488,	// (0x0005bcfb) list_single_midp_pane

0xd85b,	// (0x0005d0ce) form_midp_field_text_pane_t1

0x514e,	// (0x000549c1) input_focus_pane_cp050

0x53bb,	// (0x00054c2e) list_midp_form_text_pane

0x5353,	// (0x00054bc6) form_midp_field_choice_group_pane_t1

0x5361,	// (0x00054bd4) input_focus_pane_cp051

0x5375,	// (0x00054be8) list_midp_choice_pane

0x2bb0,	// (0x00052423) status_idle_pane

0x5337,	// (0x00054baa) form_midp_field_time_pane_t1

0x2ba6,	// (0x00052419) wait_anim_pane_g2_copy1

0x5345,	// (0x00054bb8) form_midp_field_time_pane_t2

0x0001,

0x49ac,	// (0x0005421f) aid_navinavi_width_2_pane

0xf825,	// (0x0005f098) form_midp_field_time_pane_t

0x2bb0,	// (0x00052423) input_focus_pane_cp052

0x2bb0,	// (0x00052423) bg_input_focus_pane_cp040

0x52f7,	// (0x00054b6a) form_midp_gauge_slider_pane_t1

0x5305,	// (0x00054b78) form_midp_gauge_slider_pane_t2

0xd83f,	// (0x0005d0b2) form_midp_gauge_slider_pane_t3

0xd84d,	// (0x0005d0c0) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0005f08f) form_midp_gauge_slider_pane_t

0x532f,	// (0x00054ba2) form_midp_slider_pane

0x2c90,	// (0x00052503) bg_input_focus_pane_cp041_ParamLimits

0x2c90,	// (0x00052503) bg_input_focus_pane_cp041

0x52c4,	// (0x00054b37) form_midp_gauge_wait_pane_t1_ParamLimits

0x52c4,	// (0x00054b37) form_midp_gauge_wait_pane_t1

0x52d6,	// (0x00054b49) form_midp_gauge_wait_pane_t2_ParamLimits

0x52d6,	// (0x00054b49) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0005f08a) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0005f08a) form_midp_gauge_wait_pane_t

0x52e8,	// (0x00054b5b) form_midp_wait_pane_ParamLimits

0x52e8,	// (0x00054b5b) form_midp_wait_pane

0x528e,	// (0x00054b01) form_midp_image_pane_g1

0x5297,	// (0x00054b0a) form_midp_image_pane_t1

0x52a6,	// (0x00054b19) form_midp_image_pane_t2

0x52b5,	// (0x00054b28) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0005f083) form_midp_image_pane_t

0x5285,	// (0x00054af8) list_single_midp_pane_g1

0x1602,	// (0x00050e75) list_single_midp_pane_t1

0xd82a,	// (0x0005d09d) list_midp_form_item_pane_ParamLimits

0xd82a,	// (0x0005d09d) list_midp_form_item_pane

0x4954,	// (0x000541c7) list_midp_form_item_pane_t1

0x4963,	// (0x000541d6) midp_ticker_pane_g1

0x496f,	// (0x000541e2) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0005efd0) midp_ticker_pane_g

0x497b,	// (0x000541ee) midp_ticker_pane_t1

0x6663,	// (0x00055ed6) midp_editing_number_pane_t1

0x6641,	// (0x00055eb4) midp_editing_number_pane

0x6650,	// (0x00055ec3) midp_ticker_pane

0x6402,	// (0x00055c75) ai_message_heading_pane

0x2bb0,	// (0x00052423) bg_popup_window_pane_cp14

0x640a,	// (0x00055c7d) listscroll_ai_message_pane

0x638c,	// (0x00055bff) ai_message_heading_pane_g1_ParamLimits

0x638c,	// (0x00055bff) ai_message_heading_pane_g1

0x6398,	// (0x00055c0b) ai_message_heading_pane_g2_ParamLimits

0x6398,	// (0x00055c0b) ai_message_heading_pane_g2

0x63a4,	// (0x00055c17) ai_message_heading_pane_g3_ParamLimits

0x63a4,	// (0x00055c17) ai_message_heading_pane_g3

0x63b0,	// (0x00055c23) ai_message_heading_pane_g4_ParamLimits

0x63b0,	// (0x00055c23) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0005f1c4) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0005f1c4) ai_message_heading_pane_g

0x63bc,	// (0x00055c2f) ai_message_heading_pane_t1_ParamLimits

0x63bc,	// (0x00055c2f) ai_message_heading_pane_t1

0x63d6,	// (0x00055c49) ai_message_heading_pane_t2_ParamLimits

0x63d6,	// (0x00055c49) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0005f1cd) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0005f1cd) ai_message_heading_pane_t

0x63e8,	// (0x00055c5b) bg_popup_heading_pane_cp1_ParamLimits

0x63e8,	// (0x00055c5b) bg_popup_heading_pane_cp1

0x637a,	// (0x00055bed) list_ai_message_pane_ParamLimits

0x637a,	// (0x00055bed) list_ai_message_pane

0x3d6c,	// (0x000535df) scroll_pane_cp10

0x6316,	// (0x00055b89) list_ai_message_pane_g1

0x631e,	// (0x00055b91) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0005f1a1) list_ai_message_pane_g

0x6326,	// (0x00055b99) list_ai_message_pane_t1_ParamLimits

0x6326,	// (0x00055b99) list_ai_message_pane_t1

0x633b,	// (0x00055bae) list_ai_message_pane_t2_ParamLimits

0x633b,	// (0x00055bae) list_ai_message_pane_t2

0x6350,	// (0x00055bc3) list_ai_message_pane_t3_ParamLimits

0x6350,	// (0x00055bc3) list_ai_message_pane_t3

0x6365,	// (0x00055bd8) list_ai_message_pane_t4_ParamLimits

0x6365,	// (0x00055bd8) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0005f1a6) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0005f1a6) list_ai_message_pane_t

0xd9bf,	// (0x0005d232) cell_ai_soft_ind_pane_ParamLimits

0xd9bf,	// (0x0005d232) cell_ai_soft_ind_pane

0x498d,	// (0x00054200) cell_ai_soft_ind_pane_g1_ParamLimits

0x498d,	// (0x00054200) cell_ai_soft_ind_pane_g1

0x2bb0,	// (0x00052423) grid_highlight_cp1

0x499a,	// (0x0005420d) text_secondary_cp56_ParamLimits

0x499a,	// (0x0005420d) text_secondary_cp56

0x62d6,	// (0x00055b49) example_general_pane_ParamLimits

0x62d6,	// (0x00055b49) example_general_pane

0x62e2,	// (0x00055b55) example_parent_pane_g1_ParamLimits

0x62e2,	// (0x00055b55) example_parent_pane_g1

0x62ee,	// (0x00055b61) example_parent_pane_t1_ParamLimits

0x62ee,	// (0x00055b61) example_parent_pane_t1

0xc132,	// (0x0005b9a5) popup_preview_text_window_ParamLimits

0xc132,	// (0x0005b9a5) popup_preview_text_window

0x47c3,	// (0x00054036) list_single_pane_cp2_g4

0x2fc1,	// (0x00052834) bg_popup_preview_window_pane_ParamLimits

0x2fc1,	// (0x00052834) bg_popup_preview_window_pane

0x6022,	// (0x00055895) popup_preview_text_window_t1_ParamLimits

0x6022,	// (0x00055895) popup_preview_text_window_t1

0x6040,	// (0x000558b3) popup_preview_text_window_t2_ParamLimits

0x6040,	// (0x000558b3) popup_preview_text_window_t2

0x6089,	// (0x000558fc) popup_preview_text_window_t3_ParamLimits

0x6089,	// (0x000558fc) popup_preview_text_window_t3

0x60ce,	// (0x00055941) popup_preview_text_window_t4_ParamLimits

0x60ce,	// (0x00055941) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0005f175) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0005f175) popup_preview_text_window_t

0x614c,	// (0x000559bf) scroll_pane_cp11

0x50da,	// (0x0005494d) bg_popup_preview_window_pane_g1

0x5fe2,	// (0x00055855) bg_popup_preview_window_pane_g2

0x5fea,	// (0x0005585d) bg_popup_preview_window_pane_g3

0x5ff2,	// (0x00055865) bg_popup_preview_window_pane_g4

0x5ffa,	// (0x0005586d) bg_popup_preview_window_pane_g5

0x6002,	// (0x00055875) bg_popup_preview_window_pane_g6

0x600a,	// (0x0005587d) bg_popup_preview_window_pane_g7

0x6012,	// (0x00055885) bg_popup_preview_window_pane_g8

0xf31f,	// (0x0005eb92) aid_popup_width_pane

0xc0ae,	// (0x0005b921) popup_midp_note_alarm_window_ParamLimits

0xc0ae,	// (0x0005b921) popup_midp_note_alarm_window

0x3bfc,	// (0x0005346f) data_form_pane_ParamLimits

0xba26,	// (0x0005b299) form_field_data_pane_g1

0xba30,	// (0x0005b2a3) form_field_data_pane_t1_ParamLimits

0x3c08,	// (0x0005347b) input_focus_pane_ParamLimits

0x063f,	// (0x0004feb2) data_form_wide_pane_ParamLimits

0x0650,	// (0x0004fec3) form_field_data_wide_pane_g1

0x065c,	// (0x0004fecf) form_field_data_wide_pane_t1_ParamLimits

0x396d,	// (0x000531e0) input_focus_pane_cp6_ParamLimits

0xcfde,	// (0x0005c851) input_popup_find_pane_g1_ParamLimits

0xcfde,	// (0x0005c851) input_popup_find_pane_g1

0x08d2,	// (0x00050145) aid_navi_side_left_pane

0x08e7,	// (0x0005015a) aid_navi_side_right_pane

0x59fb,	// (0x0005526e) bg_popup_window_pane_cp30_ParamLimits

0x59fb,	// (0x0005526e) bg_popup_window_pane_cp30

0x5a75,	// (0x000552e8) popup_midp_note_alarm_window_g1_ParamLimits

0x5a75,	// (0x000552e8) popup_midp_note_alarm_window_g1

0x5aa5,	// (0x00055318) popup_midp_note_alarm_window_t1_ParamLimits

0x5aa5,	// (0x00055318) popup_midp_note_alarm_window_t1

0x5b46,	// (0x000553b9) popup_midp_note_alarm_window_t2_ParamLimits

0x5b46,	// (0x000553b9) popup_midp_note_alarm_window_t2

0x5bf4,	// (0x00055467) popup_midp_note_alarm_window_t3_ParamLimits

0x5bf4,	// (0x00055467) popup_midp_note_alarm_window_t3

0x5c26,	// (0x00055499) popup_midp_note_alarm_window_t4_ParamLimits

0x5c26,	// (0x00055499) popup_midp_note_alarm_window_t4

0x5c4c,	// (0x000554bf) popup_midp_note_alarm_window_t5_ParamLimits

0x5c4c,	// (0x000554bf) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0005f112) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0005f112) popup_midp_note_alarm_window_t

0x5cf8,	// (0x0005556b) wait_bar_pane_cp1_ParamLimits

0x5cf8,	// (0x0005556b) wait_bar_pane_cp1

0x2bb0,	// (0x00052423) wait_anim_pane_copy1

0x2bb0,	// (0x00052423) wait_border_pane_copy1

0x56d5,	// (0x00054f48) wait_border_pane_g1_copy1

0x0676,	// (0x0004fee9) form_field_popup_pane_g1

0xba4a,	// (0x0005b2bd) form_field_popup_pane_t1_ParamLimits

0x3c08,	// (0x0005347b) input_focus_pane_cp7_ParamLimits

0x3c2a,	// (0x0005349d) list_form_pane_ParamLimits

0x0696,	// (0x0004ff09) form_field_popup_wide_pane_g1

0x069e,	// (0x0004ff11) form_field_popup_wide_pane_t1_ParamLimits

0x3c08,	// (0x0005347b) input_focus_pane_cp8_ParamLimits

0x3c36,	// (0x000534a9) list_form_wide_pane_ParamLimits

0x6798,	// (0x0005600b) aid_size_cell_graphic_pane

0xbac9,	// (0x0005b33c) data_form_pane_t1_ParamLimits

0xc4b0,	// (0x0005bd23) data_form_wide_pane_t1_ParamLimits

0xd415,	// (0x0005cc88) bg_status_flat_pane

0xcc9d,	// (0x0005c510) title_pane_t1_ParamLimits

0x2c58,	// (0x000524cb) title_pane_t2_ParamLimits

0x2c7e,	// (0x000524f1) title_pane_t3_ParamLimits

0xf557,	// (0x0005edca) title_pane_t_ParamLimits

0x41eb,	// (0x00053a5e) level_1_signal_ParamLimits

0x41fd,	// (0x00053a70) level_2_signal_ParamLimits

0x4210,	// (0x00053a83) level_3_signal_ParamLimits

0x4223,	// (0x00053a96) level_4_signal_ParamLimits

0x4236,	// (0x00053aa9) level_5_signal_ParamLimits

0x4249,	// (0x00053abc) level_6_signal_ParamLimits

0x425c,	// (0x00053acf) level_7_signal_ParamLimits

0x41eb,	// (0x00053a5e) level_1_battery_ParamLimits

0x41fd,	// (0x00053a70) level_2_battery_ParamLimits

0x4210,	// (0x00053a83) level_3_battery_ParamLimits

0x4223,	// (0x00053a96) level_4_battery_ParamLimits

0x4236,	// (0x00053aa9) level_5_battery_ParamLimits

0x4249,	// (0x00053abc) level_6_battery_ParamLimits

0x425c,	// (0x00053acf) level_7_battery_ParamLimits

0x58f4,	// (0x00055167) bg_status_flat_pane_g1

0x58fc,	// (0x0005516f) bg_status_flat_pane_g2

0x5904,	// (0x00055177) bg_status_flat_pane_g3

0x590c,	// (0x0005517f) bg_status_flat_pane_g4

0x5914,	// (0x00055187) bg_status_flat_pane_g5

0x591c,	// (0x0005518f) bg_status_flat_pane_g6

0x5924,	// (0x00055197) bg_status_flat_pane_g7

0xcd29,	// (0x0005c59c) tabs_3_active_pane_t1_ParamLimits

0xcd29,	// (0x0005c59c) tabs_3_passive_pane_t1_ParamLimits

0xcd3b,	// (0x0005c5ae) tabs_4_active_pane_t1_ParamLimits

0xcd3b,	// (0x0005c5ae) tabs_4_1_passive_pane_t1_ParamLimits

0xcfec,	// (0x0005c85f) tabs_2_active_pane_t1_ParamLimits

0xcfec,	// (0x0005c85f) tabs_2_passive_pane_t1_ParamLimits

0x2c90,	// (0x00052503) bg_active_tab_pane_cp4_ParamLimits

0xcffe,	// (0x0005c871) tabs_2_long_active_pane_t1_ParamLimits

0x4bd0,	// (0x00054443) bg_passive_tab_pane_cp4_ParamLimits

0x14e3,	// (0x00050d56) list_single_midp_graphic_pane_t1_ParamLimits

0x2c90,	// (0x00052503) bg_active_tab_pane_cp5_ParamLimits

0xd011,	// (0x0005c884) tabs_3_long_active_pane_t1_ParamLimits

0x4bd0,	// (0x00054443) bg_passive_tab_pane_cp5_ParamLimits

0x14e3,	// (0x00050d56) list_single_midp_graphic_pane_t1

0xd415,	// (0x0005cc88) bg_status_flat_pane_ParamLimits

0x4d6a,	// (0x000545dd) indicator_pane_cp2_ParamLimits

0x4d6a,	// (0x000545dd) indicator_pane_cp2

0xd593,	// (0x0005ce06) navi_pane_srt_ParamLimits

0xd593,	// (0x0005ce06) navi_pane_srt

0x4eb9,	// (0x0005472c) popup_clock_digital_analogue_window_cp1

0x2d6d,	// (0x000525e0) indicator_pane_t1

0x4892,	// (0x00054105) copy_highlight_pane

0x4892,	// (0x00054105) cursor_graphics_pane

0x4892,	// (0x00054105) graphic_within_text_pane

0x4892,	// (0x00054105) link_highlight_pane

0x610f,	// (0x00055982) popup_preview_text_window_t5_ParamLimits

0x610f,	// (0x00055982) popup_preview_text_window_t5

0x49b4,	// (0x00054227) cursor_digital_pane

0x49b4,	// (0x00054227) cursor_primary_pane

0x49c5,	// (0x00054238) cursor_primary_small_pane

0x49cd,	// (0x00054240) cursor_secondary_pane

0x49d5,	// (0x00054248) cursor_title_pane

0x49b4,	// (0x00054227) link_highlight_digital_pane

0x49bc,	// (0x0005422f) link_highlight_primary_pane

0x49c5,	// (0x00054238) link_highlight_primary_small_pane

0x49cd,	// (0x00054240) link_highlight_secondary_pane

0x49d5,	// (0x00054248) link_highlight_title_pane

0x49b4,	// (0x00054227) copy_highlight_digital_pane

0x49b4,	// (0x00054227) copy_highlight_primary_pane

0x49c5,	// (0x00054238) copy_highlight_primary_small_pane

0x49cd,	// (0x00054240) copy_highlight_secondary_pane

0x49d5,	// (0x00054248) copy_highlight_title_pane

0x49cd,	// (0x00054240) graphic_text_digital_pane

0x599e,	// (0x00055211) graphic_text_primary_pane

0x59a7,	// (0x0005521a) graphic_text_primary_small_pane

0x49c5,	// (0x00054238) graphic_text_secondary_pane

0x49b4,	// (0x00054227) graphic_text_title_pane

0xd251,	// (0x0005cac4) cursor_primary_pane_g1

0x5990,	// (0x00055203) cursor_text_primary_t1

0xd8b9,	// (0x0005d12c) cursor_primary_small_pane_g1

0x5982,	// (0x000551f5) cursor_text_primary_small_t1

0xd8af,	// (0x0005d122) cursor_primary_small_pane_g1_copy1

0x595e,	// (0x000551d1) cursor_text_primary_small_t1_copy1

0x593c,	// (0x000551af) cursor_text_title_t1

0xd8a5,	// (0x0005d118) cursor_title_pane_g1

0xd251,	// (0x0005cac4) cursor_digital_pane_g1

0x49e7,	// (0x0005425a) cursor_text_digital_t1

0x4a0c,	// (0x0005427f) link_highlight_primary_pane_g1

0x58e5,	// (0x00055158) link_highlight_primary_pane_t1

0x49f5,	// (0x00054268) link_highlight_primary_small_pane_g1

0x49fd,	// (0x00054270) link_highlight_primary_small_pane_t1

0x4a0c,	// (0x0005427f) link_highlight_secondary_pane_g1

0x4a14,	// (0x00054287) link_highlight_secondary_pane_t1

0x5859,	// (0x000550cc) link_highlight_title_pane_g1

0x5861,	// (0x000550d4) link_highlight_title_pane_t1

0x5842,	// (0x000550b5) link_highlight_digital_pane_g1

0x584a,	// (0x000550bd) link_highlight_digital_pane_t1

0x571a,	// (0x00054f8d) copy_highlight_primary_pane_g1

0x5722,	// (0x00054f95) copy_highlight_primary_pane_t1

0x56f4,	// (0x00054f67) copy_highlight_primary_small_pane_g1

0x570b,	// (0x00054f7e) copy_highlight_primary_small_pane_t1

0x4a23,	// (0x00054296) copy_highlight_secondary_pane_g1

0x4a2b,	// (0x0005429e) copy_highlight_secondary_pane_t1

0x56f4,	// (0x00054f67) copy_highlight_title_pane_g1

0x56fc,	// (0x00054f6f) copy_highlight_title_pane_t1

0x571a,	// (0x00054f8d) copy_highlight_digital_pane_g1

0x6962,	// (0x000561d5) copy_highlight_digital_pane_t1

0x68b6,	// (0x00056129) graphic_text_primary_pane_g1

0x6946,	// (0x000561b9) graphic_text_primary_pane_t1

0x6954,	// (0x000561c7) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0005f241) graphic_text_primary_pane_t

0x6922,	// (0x00056195) graphic_text_primary_small_pane_g1

0x692a,	// (0x0005619d) graphic_text_primary_small_pane_t1

0x6938,	// (0x000561ab) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0005f23c) graphic_text_primary_small_pane_t

0x68fe,	// (0x00056171) graphic_text_secondary_pane_g1

0x6906,	// (0x00056179) graphic_text_secondary_pane_t1

0x6914,	// (0x00056187) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0005f237) graphic_text_secondary_pane_t

0x68da,	// (0x0005614d) graphic_text_title_pane_g1

0x68e2,	// (0x00056155) graphic_text_title_pane_t1

0x68f0,	// (0x00056163) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0005f232) graphic_text_title_pane_t

0x68b6,	// (0x00056129) graphic_text_digital_pane_g1

0x68be,	// (0x00056131) graphic_text_digital_pane_t1

0x68cc,	// (0x0005613f) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0005f22d) graphic_text_digital_pane_t

0x2c90,	// (0x00052503) navi_icon_pane_srt_ParamLimits

0x2c90,	// (0x00052503) navi_icon_pane_srt

0x2bb0,	// (0x00052423) navi_midp_pane_srt

0x2bb0,	// (0x00052423) navi_navi_pane_srt

0x2c90,	// (0x00052503) navi_text_pane_srt_ParamLimits

0x2c90,	// (0x00052503) navi_text_pane_srt

0x6881,	// (0x000560f4) navi_navi_icon_text_pane_srt

0x6889,	// (0x000560fc) navi_navi_pane_srt_g1_ParamLimits

0x6889,	// (0x000560fc) navi_navi_pane_srt_g1

0x689b,	// (0x0005610e) navi_navi_pane_srt_g2_ParamLimits

0x689b,	// (0x0005610e) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0005f228) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0005f228) navi_navi_pane_srt_g

0x68ad,	// (0x00056120) navi_navi_tabs_pane_srt

0x6881,	// (0x000560f4) navi_navi_text_pane_srt

0x6881,	// (0x000560f4) navi_navi_volume_pane_srt

0x6872,	// (0x000560e5) navi_navi_text_pane_srt_t1

0x19d1,	// (0x00051244) navi_navi_volume_pane_srt_g1

0x19d9,	// (0x0005124c) volume_small_pane_srt_ParamLimits

0x19d9,	// (0x0005124c) volume_small_pane_srt

0x0c20,	// (0x00050493) volume_small_pane_srt_g1_ParamLimits

0x0c20,	// (0x00050493) volume_small_pane_srt_g1

0x0c30,	// (0x000504a3) volume_small_pane_srt_g2_ParamLimits

0x0c30,	// (0x000504a3) volume_small_pane_srt_g2

0x0c41,	// (0x000504b4) volume_small_pane_srt_g3_ParamLimits

0x0c41,	// (0x000504b4) volume_small_pane_srt_g3

0x0c52,	// (0x000504c5) volume_small_pane_srt_g4_ParamLimits

0x0c52,	// (0x000504c5) volume_small_pane_srt_g4

0x0c63,	// (0x000504d6) volume_small_pane_srt_g5_ParamLimits

0x0c63,	// (0x000504d6) volume_small_pane_srt_g5

0x0c74,	// (0x000504e7) volume_small_pane_srt_g6_ParamLimits

0x0c74,	// (0x000504e7) volume_small_pane_srt_g6

0x0c85,	// (0x000504f8) volume_small_pane_srt_g7_ParamLimits

0x0c85,	// (0x000504f8) volume_small_pane_srt_g7

0x0c96,	// (0x00050509) volume_small_pane_srt_g8_ParamLimits

0x0c96,	// (0x00050509) volume_small_pane_srt_g8

0x0ca7,	// (0x0005051a) volume_small_pane_srt_g9_ParamLimits

0x0ca7,	// (0x0005051a) volume_small_pane_srt_g9

0x0cb8,	// (0x0005052b) volume_small_pane_srt_g10_ParamLimits

0x0cb8,	// (0x0005052b) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0005efd5) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0005efd5) volume_small_pane_srt_g

0x3767,	// (0x00052fda) query_popup_data_pane_cp2

0x6858,	// (0x000560cb) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6858,	// (0x000560cb) navi_navi_icon_text_pane_srt_t1

0x599e,	// (0x00055211) navi_tabs_2_long_pane_srt

0x599e,	// (0x00055211) navi_tabs_2_pane_srt

0x599e,	// (0x00055211) navi_tabs_3_long_pane_srt

0x599e,	// (0x00055211) navi_tabs_3_pane_srt

0x599e,	// (0x00055211) navi_tabs_4_pane_srt

0x19b1,	// (0x00051224) tabs_2_active_pane_srt_ParamLimits

0x19b1,	// (0x00051224) tabs_2_active_pane_srt

0x19c1,	// (0x00051234) tabs_2_passive_pane_srt_ParamLimits

0x19c1,	// (0x00051234) tabs_2_passive_pane_srt

0x514e,	// (0x000549c1) bg_passive_tab_pane_cp1_srt_ParamLimits

0x514e,	// (0x000549c1) bg_passive_tab_pane_cp1_srt

0x6824,	// (0x00056097) bg_passive_tab_pane_g1_cp1_srt

0x44d4,	// (0x00053d47) bg_passive_tab_pane_g2_cp1_srt

0x682d,	// (0x000560a0) bg_passive_tab_pane_g3_cp1_srt

0x2f0b,	// (0x0005277e) bg_active_tab_pane_cp1_srt_ParamLimits

0x2f0b,	// (0x0005277e) bg_active_tab_pane_cp1_srt

0x6836,	// (0x000560a9) tabs_2_active_pane_srt_g1

0xdc50,	// (0x0005d4c3) tabs_2_active_pane_srt_t1_ParamLimits

0xdc50,	// (0x0005d4c3) tabs_2_active_pane_srt_t1

0x6824,	// (0x00056097) bg_active_tab_pane_g1_cp1_srt

0x44d4,	// (0x00053d47) bg_active_tab_pane_g2_cp1_srt

0x682d,	// (0x000560a0) bg_active_tab_pane_g3_cp1_srt

0x197e,	// (0x000511f1) tabs_3_active_pane_srt_ParamLimits

0x197e,	// (0x000511f1) tabs_3_active_pane_srt

0x198f,	// (0x00051202) tabs_3_passive_pane_cp_srt_ParamLimits

0x198f,	// (0x00051202) tabs_3_passive_pane_cp_srt

0x19a0,	// (0x00051213) tabs_3_passive_pane_srt_ParamLimits

0x19a0,	// (0x00051213) tabs_3_passive_pane_srt

0x514e,	// (0x000549c1) bg_passive_tab_pane_cp2_srt_ParamLimits

0x514e,	// (0x000549c1) bg_passive_tab_pane_cp2_srt

0x4a3a,	// (0x000542ad) bg_passive_tab_pane_g1_cp2_srt

0x44d4,	// (0x00053d47) bg_passive_tab_pane_g2_cp2_srt

0x4a43,	// (0x000542b6) bg_passive_tab_pane_g3_cp2_srt

0x2f0b,	// (0x0005277e) bg_active_tab_pane_cp2_srt_ParamLimits

0x2f0b,	// (0x0005277e) bg_active_tab_pane_cp2_srt

0x680a,	// (0x0005607d) tabs_3_active_pane_srt_g1

0xdc3a,	// (0x0005d4ad) tabs_3_active_pane_srt_t1_ParamLimits

0xdc3a,	// (0x0005d4ad) tabs_3_active_pane_srt_t1

0x4a3a,	// (0x000542ad) bg_active_tab_pane_g1_cp2_srt

0x44d4,	// (0x00053d47) bg_active_tab_pane_g2_cp2_srt

0x4a43,	// (0x000542b6) bg_active_tab_pane_g3_cp2_srt

0x1936,	// (0x000511a9) tabs_4_active_pane_srt_ParamLimits

0x1936,	// (0x000511a9) tabs_4_active_pane_srt

0x1948,	// (0x000511bb) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1948,	// (0x000511bb) tabs_4_passive_pane_cp2_srt

0x0e1d,	// (0x00050690) aid_size_cell_toolbar

0x64ba,	// (0x00055d2d) main_idle_act_pane_ParamLimits

0x0fe8,	// (0x0005085b) popup_large_graphic_colour_window_ParamLimits

0xc3be,	// (0x0005bc31) popup_toolbar_window_ParamLimits

0xc3be,	// (0x0005bc31) popup_toolbar_window

0x6672,	// (0x00055ee5) list_single_graphic_2heading_pane_ParamLimits

0x6672,	// (0x00055ee5) list_single_graphic_2heading_pane

0x3f9c,	// (0x0005380f) aid_size_cell_apps_grid_lsc_pane

0x3fae,	// (0x00053821) aid_size_cell_apps_grid_prt_pane

0x4bd0,	// (0x00054443) bg_wml_button_pane_cp1_ParamLimits

0x4bd0,	// (0x00054443) bg_wml_button_pane_cp1

0xd85b,	// (0x0005d0ce) form_midp_field_text_pane_t1_ParamLimits

0x514e,	// (0x000549c1) input_focus_pane_cp050_ParamLimits

0x53bb,	// (0x00054c2e) list_midp_form_text_pane_ParamLimits

0x5361,	// (0x00054bd4) input_focus_pane_cp051_ParamLimits

0x5375,	// (0x00054be8) list_midp_choice_pane_ParamLimits

0xd7f8,	// (0x0005d06b) list_single_2graphic_pane_cp3_ParamLimits

0xd7f8,	// (0x0005d06b) list_single_2graphic_pane_cp3

0xd80b,	// (0x0005d07e) list_single_midp_graphic_pane_ParamLimits

0xd80b,	// (0x0005d07e) list_single_midp_graphic_pane

0xf3cf,	// (0x0005ec42) list_single_graphic_2heading_pane_g1_ParamLimits

0xf3cf,	// (0x0005ec42) list_single_graphic_2heading_pane_g1

0xf3db,	// (0x0005ec4e) list_single_graphic_2heading_pane_g4_ParamLimits

0xf3db,	// (0x0005ec4e) list_single_graphic_2heading_pane_g4

0xf3e7,	// (0x0005ec5a) list_single_graphic_2heading_pane_g5_ParamLimits

0xf3e7,	// (0x0005ec5a) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0005f028) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0005f028) list_single_graphic_2heading_pane_g

0xf3f3,	// (0x0005ec66) list_single_graphic_2heading_pane_t1_ParamLimits

0xf3f3,	// (0x0005ec66) list_single_graphic_2heading_pane_t1

0xf407,	// (0x0005ec7a) list_single_graphic_2heading_pane_t2_ParamLimits

0xf407,	// (0x0005ec7a) list_single_graphic_2heading_pane_t2

0xf423,	// (0x0005ec96) list_single_graphic_2heading_pane_t3_ParamLimits

0xf423,	// (0x0005ec96) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0005f02f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0005f02f) list_single_graphic_2heading_pane_t

0x5018,	// (0x0005488b) bg_popup_sub_pane_cp2

0x5042,	// (0x000548b5) grid_toobar_pane

0x13fc,	// (0x00050c6f) cell_toolbar_pane_ParamLimits

0x13fc,	// (0x00050c6f) cell_toolbar_pane

0x507e,	// (0x000548f1) cell_toolbar_pane_g1_ParamLimits

0x507e,	// (0x000548f1) cell_toolbar_pane_g1

0x5092,	// (0x00054905) cell_toolbar_pane_g2_ParamLimits

0x5092,	// (0x00054905) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0005f03d) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0005f03d) cell_toolbar_pane_g

0x50b4,	// (0x00054927) grid_highlight_pane_cp2_ParamLimits

0x50b4,	// (0x00054927) grid_highlight_pane_cp2

0x50ce,	// (0x00054941) toolbar_button_pane

0x50da,	// (0x0005494d) toolbar_button_pane_g1

0x50e2,	// (0x00054955) toolbar_button_pane_g2

0x50ea,	// (0x0005495d) toolbar_button_pane_g3

0x50f2,	// (0x00054965) toolbar_button_pane_g4

0x50fa,	// (0x0005496d) toolbar_button_pane_g5

0x5102,	// (0x00054975) toolbar_button_pane_g6

0x510a,	// (0x0005497d) toolbar_button_pane_g7

0x5112,	// (0x00054985) toolbar_button_pane_g8

0x511a,	// (0x0005498d) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0005f042) toolbar_button_pane_g

0x1456,	// (0x00050cc9) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1456,	// (0x00050cc9) list_single_2graphic_pane_g1_cp3

0xc416,	// (0x0005bc89) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc416,	// (0x0005bc89) list_single_2graphic_pane_g2_cp3

0x1473,	// (0x00050ce6) list_single_2graphic_pane_g3_cp3

0x147b,	// (0x00050cee) list_single_2graphic_pane_g4_cp3_ParamLimits

0x147b,	// (0x00050cee) list_single_2graphic_pane_g4_cp3

0x1487,	// (0x00050cfa) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1487,	// (0x00050cfa) list_single_2graphic_pane_t1_cp3

0x14d7,	// (0x00050d4a) list_single_midp_graphic_pane_g2_ParamLimits

0x14d7,	// (0x00050d4a) list_single_midp_graphic_pane_g2

0xf3c7,	// (0x0005ec3a) aid_zoom_text_primary

0x0e25,	// (0x00050698) aid_zoom_text_secondary

0xd2a9,	// (0x0005cb1c) status_small_pane_g7_ParamLimits

0xd2a9,	// (0x0005cb1c) status_small_pane_g7

0xd2cc,	// (0x0005cb3f) status_small_pane_t1_ParamLimits

0xcc79,	// (0x0005c4ec) title_pane_g2

0x0003,

0xf54e,	// (0x0005edc1) title_pane_g

0xcef1,	// (0x0005c764) aid_size_cell_colour_1_pane_ParamLimits

0xcef1,	// (0x0005c764) aid_size_cell_colour_1_pane

0xcf05,	// (0x0005c778) aid_size_cell_colour_2_pane_ParamLimits

0xcf05,	// (0x0005c778) aid_size_cell_colour_2_pane

0xcf19,	// (0x0005c78c) aid_size_cell_colour_3_pane_ParamLimits

0xcf19,	// (0x0005c78c) aid_size_cell_colour_3_pane

0xcf2d,	// (0x0005c7a0) aid_size_cell_colour_4_pane_ParamLimits

0xcf2d,	// (0x0005c7a0) aid_size_cell_colour_4_pane

0x080f,	// (0x00050082) title_pane_stacon_g1_ParamLimits

0x080f,	// (0x00050082) title_pane_stacon_g1

0x5779,	// (0x00054fec) popup_note_wait_window_g3_ParamLimits

0x5779,	// (0x00054fec) popup_note_wait_window_g3

0x57ef,	// (0x00055062) popup_note_wait_window_t5_ParamLimits

0x57ef,	// (0x00055062) popup_note_wait_window_t5

0x2bb0,	// (0x00052423) main_feb_china_hwr_fs_writing_pane

0xbdc6,	// (0x0005b639) popup_feb_china_hwr_fs_window_ParamLimits

0xbdc6,	// (0x0005b639) popup_feb_china_hwr_fs_window

0xc427,	// (0x0005bc9a) aid_size_cell_hwr_fs_ParamLimits

0xc427,	// (0x0005bc9a) aid_size_cell_hwr_fs

0x514e,	// (0x000549c1) bg_popup_sub_pane_cp3_ParamLimits

0x514e,	// (0x000549c1) bg_popup_sub_pane_cp3

0xc43c,	// (0x0005bcaf) grid_hwr_fs_pane_ParamLimits

0xc43c,	// (0x0005bcaf) grid_hwr_fs_pane

0x1592,	// (0x00050e05) linegrid_hwr_fs_pane_ParamLimits

0x1592,	// (0x00050e05) linegrid_hwr_fs_pane

0xc454,	// (0x0005bcc7) cell_hwr_fs_pane_ParamLimits

0xc454,	// (0x0005bcc7) cell_hwr_fs_pane

0x515a,	// (0x000549cd) linegrid_hwr_fs_pane_g1_ParamLimits

0x515a,	// (0x000549cd) linegrid_hwr_fs_pane_g1

0xd732,	// (0x0005cfa5) linegrid_hwr_fs_pane_g2_ParamLimits

0xd732,	// (0x0005cfa5) linegrid_hwr_fs_pane_g2

0x5178,	// (0x000549eb) linegrid_hwr_fs_pane_g3_ParamLimits

0x5178,	// (0x000549eb) linegrid_hwr_fs_pane_g3

0x15c4,	// (0x00050e37) linegrid_hwr_fs_pane_g4_ParamLimits

0x15c4,	// (0x00050e37) linegrid_hwr_fs_pane_g4

0x15de,	// (0x00050e51) linegrid_hwr_fs_pane_g5_ParamLimits

0x15de,	// (0x00050e51) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0005f068) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0005f068) linegrid_hwr_fs_pane_g

0x5184,	// (0x000549f7) cell_hwr_fs_pane_g1_ParamLimits

0x5184,	// (0x000549f7) cell_hwr_fs_pane_g1

0x4f4f,	// (0x000547c2) cell_hwr_fs_pane_g2_ParamLimits

0x4f4f,	// (0x000547c2) cell_hwr_fs_pane_g2

0xd7de,	// (0x0005d051) cell_hwr_fs_pane_g3_ParamLimits

0xd7de,	// (0x0005d051) cell_hwr_fs_pane_g3

0xd7eb,	// (0x0005d05e) cell_hwr_fs_pane_g4_ParamLimits

0xd7eb,	// (0x0005d05e) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0005f073) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0005f073) cell_hwr_fs_pane_g

0xc47a,	// (0x0005bced) cell_hwr_fs_pane_t1

0x2bb0,	// (0x00052423) grid_highlight_pane_cp6

0x2bb0,	// (0x00052423) main_idle_act2_pane

0x3d53,	// (0x000535c6) aid_inside_area_popup_secondary

0xd8c3,	// (0x0005d136) aid_inside_area_window_primary_ParamLimits

0xd8c3,	// (0x0005d136) aid_inside_area_window_primary

0x6971,	// (0x000561e4) ai2_news_ticker_pane

0x6979,	// (0x000561ec) aid_size_cell_ai1_link_ParamLimits

0x6979,	// (0x000561ec) aid_size_cell_ai1_link

0xdc66,	// (0x0005d4d9) popup_ai2_data_window_ParamLimits

0xdc66,	// (0x0005d4d9) popup_ai2_data_window

0x69a9,	// (0x0005621c) popup_ai2_link_window_ParamLimits

0x69a9,	// (0x0005621c) popup_ai2_link_window

0x514e,	// (0x000549c1) bg_popup_sub_pane_cp4_ParamLimits

0x514e,	// (0x000549c1) bg_popup_sub_pane_cp4

0x69bd,	// (0x00056230) grid_ai2_link_pane_ParamLimits

0x69bd,	// (0x00056230) grid_ai2_link_pane

0x69d4,	// (0x00056247) popup_ai2_link_window_g1_ParamLimits

0x69d4,	// (0x00056247) popup_ai2_link_window_g1

0x69e0,	// (0x00056253) popup_ai2_link_window_g2_ParamLimits

0x69e0,	// (0x00056253) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0005f246) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0005f246) popup_ai2_link_window_g

0x69ef,	// (0x00056262) ai2_mp_button_pane

0x69f7,	// (0x0005626a) ai2_mp_volume_pane

0x5361,	// (0x00054bd4) bg_popup_sub_pane_cp5_ParamLimits

0x5361,	// (0x00054bd4) bg_popup_sub_pane_cp5

0x69ff,	// (0x00056272) heading_ai2_gene_pane_ParamLimits

0x69ff,	// (0x00056272) heading_ai2_gene_pane

0x6a0b,	// (0x0005627e) list_ai2_gene_pane_ParamLimits

0x6a0b,	// (0x0005627e) list_ai2_gene_pane

0x6a53,	// (0x000562c6) cell_ai2_link_pane_ParamLimits

0x6a53,	// (0x000562c6) cell_ai2_link_pane

0x6a69,	// (0x000562dc) cell_ai2_link_pane_g1

0x2bb0,	// (0x00052423) grid_highlight_pane_cp7

0x19ee,	// (0x00051261) ai2_mp_volume_pane_g1

0x6b39,	// (0x000563ac) ai2_mp_volume_pane_g2

0xdc90,	// (0x0005d503) list_ai2_gene_pane_t1

0x6b41,	// (0x000563b4) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0005f25f) ai2_mp_volume_pane_g

0x19f6,	// (0x00051269) volume_small_pane_cp3

0x6b49,	// (0x000563bc) aid_size_cell_ai2_button

0x6b51,	// (0x000563c4) grid_ai2_button_pane

0x6b5a,	// (0x000563cd) cell_ai2_button_pane_ParamLimits

0x6b5a,	// (0x000563cd) cell_ai2_button_pane

0x2ba6,	// (0x00052419) cell_ai2_button_pane_g1

0x2bb0,	// (0x00052423) grid_highlight_pane_cp8

0x6af9,	// (0x0005636c) ai2_gene_pane_t1_ParamLimits

0x6af9,	// (0x0005636c) ai2_gene_pane_t1

0xbd40,	// (0x0005b5b3) aid_height_parent_landscape

0xda0d,	// (0x0005d280) aid_height_set_list

0x64ba,	// (0x00055d2d) aid_size_parent

0x6798,	// (0x0005600b) aid_size_cell_graphic_pane_ParamLimits

0x6a1b,	// (0x0005628e) popup_ai2_data_window_g1_ParamLimits

0x6a1b,	// (0x0005628e) popup_ai2_data_window_g1

0x6a27,	// (0x0005629a) ai2_news_ticker_pane_g1

0x6a2f,	// (0x000562a2) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0005f24b) ai2_news_ticker_pane_g

0x6a37,	// (0x000562aa) ai2_news_ticker_pane_t1

0x6a45,	// (0x000562b8) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0005f250) ai2_news_ticker_pane_t

0x6a72,	// (0x000562e5) heading_ai2_gene_pane_g1

0x6a7a,	// (0x000562ed) heading_ai2_gene_pane_t1_ParamLimits

0x6a7a,	// (0x000562ed) heading_ai2_gene_pane_t1

0x6a8f,	// (0x00056302) list_highlight_pane_cp6

0xdc7a,	// (0x0005d4ed) ai2_gene_pane_ParamLimits

0xdc7a,	// (0x0005d4ed) ai2_gene_pane

0xdc9e,	// (0x0005d511) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0005f255) list_ai2_gene_pane_t

0x6aca,	// (0x0005633d) list_highlight_pane_cp8_ParamLimits

0x6aca,	// (0x0005633d) list_highlight_pane_cp8

0x6adb,	// (0x0005634e) ai2_gene_pane_g1_ParamLimits

0x6adb,	// (0x0005634e) ai2_gene_pane_g1

0x6aed,	// (0x00056360) ai2_gene_pane_g2_ParamLimits

0x6aed,	// (0x00056360) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0005f25a) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0005f25a) ai2_gene_pane_g

0x3b92,	// (0x00053405) scroll_pane_cp12

0xbcff,	// (0x0005b572) control_pane_t3_ParamLimits

0xbcff,	// (0x0005b572) control_pane_t3

0xd2bd,	// (0x0005cb30) status_small_pane_g8_ParamLimits

0xd2bd,	// (0x0005cb30) status_small_pane_g8

0xbe5b,	// (0x0005b6ce) popup_find_window_ParamLimits

0xc0e8,	// (0x0005b95b) popup_note_image_window_ParamLimits

0x142c,	// (0x00050c9f) list_double2_graphic_pane_vc_g1_ParamLimits

0x142c,	// (0x00050c9f) list_double2_graphic_pane_vc_g1

0x47cb,	// (0x0005403e) list_double2_graphic_pane_vc_g2_ParamLimits

0x47cb,	// (0x0005403e) list_double2_graphic_pane_vc_g2

0x30af,	// (0x00052922) list_double2_graphic_pane_vc_g3_ParamLimits

0x30af,	// (0x00052922) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0005f036) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005f036) list_double2_graphic_pane_vc_g

0x1438,	// (0x00050cab) list_double2_graphic_pane_vc_t1_ParamLimits

0x1438,	// (0x00050cab) list_double2_graphic_pane_vc_t1

0x47cb,	// (0x0005403e) list_single_heading_pane_vc_g1_ParamLimits

0x47cb,	// (0x0005403e) list_single_heading_pane_vc_g1

0x30af,	// (0x00052922) list_single_heading_pane_vc_g2_ParamLimits

0x30af,	// (0x00052922) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005ee45) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005ee45) list_single_heading_pane_vc_g

0x14a3,	// (0x00050d16) list_single_heading_pane_vc_t1_ParamLimits

0x14a3,	// (0x00050d16) list_single_heading_pane_vc_t1

0x14bb,	// (0x00050d2e) list_single_heading_pane_vc_t2_ParamLimits

0x14bb,	// (0x00050d2e) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0005f057) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0005f057) list_single_heading_pane_vc_t

0x30bb,	// (0x0005292e) list_setting_number_pane_vc_g1_ParamLimits

0x30bb,	// (0x0005292e) list_setting_number_pane_vc_g1

0x30c7,	// (0x0005293a) list_setting_number_pane_vc_g2_ParamLimits

0x30c7,	// (0x0005293a) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0005f05c) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0005f05c) list_setting_number_pane_vc_g

0x14f9,	// (0x00050d6c) list_setting_number_pane_vc_t1_ParamLimits

0x14f9,	// (0x00050d6c) list_setting_number_pane_vc_t1

0x150d,	// (0x00050d80) list_setting_number_pane_vc_t2_ParamLimits

0x150d,	// (0x00050d80) list_setting_number_pane_vc_t2

0x1529,	// (0x00050d9c) list_setting_number_pane_vc_t3_ParamLimits

0x1529,	// (0x00050d9c) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0005f061) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0005f061) list_setting_number_pane_vc_t

0x1555,	// (0x00050dc8) set_value_pane_vc_ParamLimits

0x1555,	// (0x00050dc8) set_value_pane_vc

0x6672,	// (0x00055ee5) list_double2_graphic_pane_vc_ParamLimits

0x6672,	// (0x00055ee5) list_double2_graphic_pane_vc

0x18d6,	// (0x00051149) list_double2_large_graphic_pane_vc_ParamLimits

0x18d6,	// (0x00051149) list_double2_large_graphic_pane_vc

0x6672,	// (0x00055ee5) list_double2_pane_vc_ParamLimits

0x6672,	// (0x00055ee5) list_double2_pane_vc

0x6672,	// (0x00055ee5) list_double_graphic_heading_pane_vc_ParamLimits

0x6672,	// (0x00055ee5) list_double_graphic_heading_pane_vc

0x6672,	// (0x00055ee5) list_double_graphic_pane_vc_ParamLimits

0x6672,	// (0x00055ee5) list_double_graphic_pane_vc

0x6672,	// (0x00055ee5) list_double_heading_pane_vc_ParamLimits

0x6672,	// (0x00055ee5) list_double_heading_pane_vc

0x18e7,	// (0x0005115a) list_double_large_graphic_pane_vc_ParamLimits

0x18e7,	// (0x0005115a) list_double_large_graphic_pane_vc

0x6672,	// (0x00055ee5) list_double_number_pane_vc_ParamLimits

0x6672,	// (0x00055ee5) list_double_number_pane_vc

0x6672,	// (0x00055ee5) list_double_pane_vc_ParamLimits

0x6672,	// (0x00055ee5) list_double_pane_vc

0x6672,	// (0x00055ee5) list_double_time_pane_vc_ParamLimits

0x6672,	// (0x00055ee5) list_double_time_pane_vc

0x6672,	// (0x00055ee5) list_setting_number_pane_vc_ParamLimits

0x6672,	// (0x00055ee5) list_setting_number_pane_vc

0x6672,	// (0x00055ee5) list_setting_pane_vc_ParamLimits

0x6672,	// (0x00055ee5) list_setting_pane_vc

0x6672,	// (0x00055ee5) list_single_graphic_heading_pane_vc_ParamLimits

0x6672,	// (0x00055ee5) list_single_graphic_heading_pane_vc

0x6672,	// (0x00055ee5) list_single_heading_pane_vc_ParamLimits

0x6672,	// (0x00055ee5) list_single_heading_pane_vc

0x6672,	// (0x00055ee5) list_single_number_heading_pane_vc_ParamLimits

0x6672,	// (0x00055ee5) list_single_number_heading_pane_vc

0x142c,	// (0x00050c9f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x142c,	// (0x00050c9f) list_double_graphic_heading_pane_vc_g1

0x47cb,	// (0x0005403e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x47cb,	// (0x0005403e) list_double_graphic_heading_pane_vc_g2

0x30af,	// (0x00052922) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x30af,	// (0x00052922) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0005f036) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005f036) list_double_graphic_heading_pane_vc_g

0x19ff,	// (0x00051272) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x19ff,	// (0x00051272) list_double_graphic_heading_pane_vc_t1

0x1a1b,	// (0x0005128e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x1a1b,	// (0x0005128e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0005f266) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0005f266) list_double_graphic_heading_pane_vc_t

0x30bb,	// (0x0005292e) list_setting_pane_vc_g1_ParamLimits

0x30bb,	// (0x0005292e) list_setting_pane_vc_g1

0x30c7,	// (0x0005293a) list_setting_pane_vc_g2_ParamLimits

0x30c7,	// (0x0005293a) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0005f05c) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0005f05c) list_setting_pane_vc_g

0x1a39,	// (0x000512ac) list_setting_pane_vc_t1_ParamLimits

0x1a39,	// (0x000512ac) list_setting_pane_vc_t1

0x1a55,	// (0x000512c8) list_setting_pane_vc_t2_ParamLimits

0x1a55,	// (0x000512c8) list_setting_pane_vc_t2

0x0001,

0xfa21,	// (0x0005f294) list_setting_pane_vc_t_ParamLimits

0xfa21,	// (0x0005f294) list_setting_pane_vc_t

0x1555,	// (0x00050dc8) set_value_pane_cp_vc_ParamLimits

0x1555,	// (0x00050dc8) set_value_pane_cp_vc

0x47cb,	// (0x0005403e) list_single_number_heading_pane_vc_g1_ParamLimits

0x47cb,	// (0x0005403e) list_single_number_heading_pane_vc_g1

0x30af,	// (0x00052922) list_single_number_heading_pane_vc_g2_ParamLimits

0x30af,	// (0x00052922) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005ee45) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005ee45) list_single_number_heading_pane_vc_g

0x14a3,	// (0x00050d16) list_single_number_heading_pane_vc_t1_ParamLimits

0x14a3,	// (0x00050d16) list_single_number_heading_pane_vc_t1

0x1a71,	// (0x000512e4) list_single_number_heading_pane_vc_t2_ParamLimits

0x1a71,	// (0x000512e4) list_single_number_heading_pane_vc_t2

0x1a85,	// (0x000512f8) list_single_number_heading_pane_vc_t3_ParamLimits

0x1a85,	// (0x000512f8) list_single_number_heading_pane_vc_t3

0x0002,

0xfa26,	// (0x0005f299) list_single_number_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0005f299) list_single_number_heading_pane_vc_t

0x142c,	// (0x00050c9f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x142c,	// (0x00050c9f) list_single_graphic_heading_pane_vc_g1

0x47cb,	// (0x0005403e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x47cb,	// (0x0005403e) list_single_graphic_heading_pane_vc_g4

0x30af,	// (0x00052922) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x30af,	// (0x00052922) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0005f036) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005f036) list_single_graphic_heading_pane_vc_g

0x14a3,	// (0x00050d16) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x14a3,	// (0x00050d16) list_single_graphic_heading_pane_vc_t1

0x1a97,	// (0x0005130a) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x1a97,	// (0x0005130a) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2d,	// (0x0005f2a0) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2d,	// (0x0005f2a0) list_single_graphic_heading_pane_vc_t

0x47cb,	// (0x0005403e) list_double2_pane_vc_g1_ParamLimits

0x47cb,	// (0x0005403e) list_double2_pane_vc_g1

0x30af,	// (0x00052922) list_double2_pane_vc_g2_ParamLimits

0x30af,	// (0x00052922) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005ee45) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005ee45) list_double2_pane_vc_g

0x1aab,	// (0x0005131e) list_double2_pane_vc_t1_ParamLimits

0x1aab,	// (0x0005131e) list_double2_pane_vc_t1

0x1ac1,	// (0x00051334) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x1ac1,	// (0x00051334) list_double2_large_graphic_pane_vc_g1

0x1acd,	// (0x00051340) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x1acd,	// (0x00051340) list_double2_large_graphic_pane_vc_g2

0x1ad9,	// (0x0005134c) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x1ad9,	// (0x0005134c) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0005ee5d) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0005ee5d) list_double2_large_graphic_pane_vc_g

0x1ae5,	// (0x00051358) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x1ae5,	// (0x00051358) list_double2_large_graphic_pane_vc_t1

0x3169,	// (0x000529dc) list_double_time_pane_vc_g1_ParamLimits

0x3169,	// (0x000529dc) list_double_time_pane_vc_g1

0x3175,	// (0x000529e8) list_double_time_pane_vc_g2_ParamLimits

0x3175,	// (0x000529e8) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x0005f2a5) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x0005f2a5) list_double_time_pane_vc_g

0x1afb,	// (0x0005136e) list_double_time_pane_vc_t1_ParamLimits

0x1afb,	// (0x0005136e) list_double_time_pane_vc_t1

0x1b1f,	// (0x00051392) list_double_time_pane_vc_t2_ParamLimits

0x1b1f,	// (0x00051392) list_double_time_pane_vc_t2

0x3181,	// (0x000529f4) list_double_time_pane_vc_t3_ParamLimits

0x3181,	// (0x000529f4) list_double_time_pane_vc_t3

0x3193,	// (0x00052a06) list_double_time_pane_vc_t4_ParamLimits

0x3193,	// (0x00052a06) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x0005f2aa) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x0005f2aa) list_double_time_pane_vc_t

0x47cb,	// (0x0005403e) list_double_pane_vc_g1_ParamLimits

0x47cb,	// (0x0005403e) list_double_pane_vc_g1

0x30af,	// (0x00052922) list_double_pane_vc_g2_ParamLimits

0x30af,	// (0x00052922) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005ee45) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005ee45) list_double_pane_vc_g

0x31a7,	// (0x00052a1a) list_double_pane_vc_t1_ParamLimits

0x31a7,	// (0x00052a1a) list_double_pane_vc_t1

0x31bb,	// (0x00052a2e) list_double_pane_vc_t2_ParamLimits

0x31bb,	// (0x00052a2e) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x0005f2b3) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x0005f2b3) list_double_pane_vc_t

0x47cb,	// (0x0005403e) list_double_number_pane_vc_g1_ParamLimits

0x47cb,	// (0x0005403e) list_double_number_pane_vc_g1

0x30af,	// (0x00052922) list_double_number_pane_vc_g2_ParamLimits

0x30af,	// (0x00052922) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005ee45) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005ee45) list_double_number_pane_vc_g

0x31d3,	// (0x00052a46) list_double_number_pane_vc_t1_ParamLimits

0x31d3,	// (0x00052a46) list_double_number_pane_vc_t1

0x31e5,	// (0x00052a58) list_double_number_pane_vc_t2_ParamLimits

0x31e5,	// (0x00052a58) list_double_number_pane_vc_t2

0x31f9,	// (0x00052a6c) list_double_number_pane_vc_t3_ParamLimits

0x31f9,	// (0x00052a6c) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x0005f2b8) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x0005f2b8) list_double_number_pane_vc_t

0x3211,	// (0x00052a84) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3211,	// (0x00052a84) list_double_large_graphic_pane_vc_g1

0x3233,	// (0x00052aa6) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3233,	// (0x00052aa6) list_double_large_graphic_pane_vc_g2

0x3247,	// (0x00052aba) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3247,	// (0x00052aba) list_double_large_graphic_pane_vc_g3

0x3256,	// (0x00052ac9) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3256,	// (0x00052ac9) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x0005f2bf) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x0005f2bf) list_double_large_graphic_pane_vc_g

0x3262,	// (0x00052ad5) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3262,	// (0x00052ad5) list_double_large_graphic_pane_vc_t1

0x327e,	// (0x00052af1) list_double_large_graphic_pane_vc_t2_ParamLimits

0x327e,	// (0x00052af1) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x0005f2c8) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x0005f2c8) list_double_large_graphic_pane_vc_t

0x47cb,	// (0x0005403e) list_double_heading_pane_vc_g1_ParamLimits

0x47cb,	// (0x0005403e) list_double_heading_pane_vc_g1

0x30af,	// (0x00052922) list_double_heading_pane_vc_g2_ParamLimits

0x30af,	// (0x00052922) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005ee45) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005ee45) list_double_heading_pane_vc_g

0x32a0,	// (0x00052b13) list_double_heading_pane_vc_t1_ParamLimits

0x32a0,	// (0x00052b13) list_double_heading_pane_vc_t1

0x14a3,	// (0x00050d16) list_double_heading_pane_vc_t2_ParamLimits

0x14a3,	// (0x00050d16) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x0005f2cd) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x0005f2cd) list_double_heading_pane_vc_t

0x32b4,	// (0x00052b27) list_double_graphic_pane_vc_g1_ParamLimits

0x32b4,	// (0x00052b27) list_double_graphic_pane_vc_g1

0x32c0,	// (0x00052b33) list_double_graphic_pane_vc_g2_ParamLimits

0x32c0,	// (0x00052b33) list_double_graphic_pane_vc_g2

0x47cb,	// (0x0005403e) list_double_graphic_pane_vc_g3_ParamLimits

0x47cb,	// (0x0005403e) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x0005f2d2) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x0005f2d2) list_double_graphic_pane_vc_g

0x32dd,	// (0x00052b50) list_double_graphic_pane_vc_t1_ParamLimits

0x32dd,	// (0x00052b50) list_double_graphic_pane_vc_t1

0x3307,	// (0x00052b7a) list_double_graphic_pane_vc_t2_ParamLimits

0x3307,	// (0x00052b7a) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x0005f2db) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x0005f2db) list_double_graphic_pane_vc_t

0xf32b,	// (0x0005eb9e) aid_size_cell_fastswap

0xb328,	// (0x0005ab9b) aid_size_cell_touch_ParamLimits

0xb328,	// (0x0005ab9b) aid_size_cell_touch

0xf520,	// (0x0005ed93) popup_fast_swap_wide_window_ParamLimits

0xf520,	// (0x0005ed93) popup_fast_swap_wide_window

0xb4d8,	// (0x0005ad4b) touch_pane_ParamLimits

0xb4d8,	// (0x0005ad4b) touch_pane

0x3bf4,	// (0x00053467) button_value_adjust_pane_cp2

0x0569,	// (0x0004fddc) button_value_adjust_pane_cp4

0x058d,	// (0x0004fe00) form_field_data_pane_cp2

0xb9ed,	// (0x0005b260) form_field_data_wide_pane_cp2

0x4069,	// (0x000538dc) bg_scroll_pane_ParamLimits

0x0971,	// (0x000501e4) scroll_handle_pane_ParamLimits

0x0985,	// (0x000501f8) scroll_sc2_down_pane_ParamLimits

0x0985,	// (0x000501f8) scroll_sc2_down_pane

0x409a,	// (0x0005390d) scroll_sc2_up_pane_ParamLimits

0x409a,	// (0x0005390d) scroll_sc2_up_pane

0xddbe,	// (0x0005d631) grid_wheel_folder_pane_g1_ParamLimits

0xddbe,	// (0x0005d631) grid_wheel_folder_pane_g1

0x0bb8,	// (0x0005042b) clock_nsta_pane_cp2_ParamLimits

0x0bb8,	// (0x0005042b) clock_nsta_pane_cp2

0x4bd0,	// (0x00054443) listscroll_midp_pane_ParamLimits

0xd1b8,	// (0x0005ca2b) midp_canvas_pane

0x4b82,	// (0x000543f5) nsta_clock_indic_pane

0x4bb6,	// (0x00054429) listscroll_form_pane_vc

0x4bbe,	// (0x00054431) listscroll_set_pane_vc_ParamLimits

0x4bbe,	// (0x00054431) listscroll_set_pane_vc

0xd43d,	// (0x0005ccb0) clock_nsta_pane

0xd467,	// (0x0005ccda) indicator_nsta_pane

0x5018,	// (0x0005488b) bg_popup_sub_pane_cp2_ParamLimits

0x502c,	// (0x0005489f) find_pane_cp2_ParamLimits

0x502c,	// (0x0005489f) find_pane_cp2

0x5042,	// (0x000548b5) grid_toobar_pane_ParamLimits

0x5122,	// (0x00054995) list_form_gen_pane_vc_ParamLimits

0x5122,	// (0x00054995) list_form_gen_pane_vc

0x5138,	// (0x000549ab) scroll_pane_cp8_vc_ParamLimits

0x5138,	// (0x000549ab) scroll_pane_cp8_vc

0x51b4,	// (0x00054a27) data_form_wide_pane_vc_ParamLimits

0x51b4,	// (0x00054a27) data_form_wide_pane_vc

0x51c0,	// (0x00054a33) form_field_data_wide_pane_vc_g1

0x51c8,	// (0x00054a3b) form_field_data_wide_pane_vc_t1_ParamLimits

0x51c8,	// (0x00054a3b) form_field_data_wide_pane_vc_t1

0x3c08,	// (0x0005347b) input_focus_pane_cp6_vc_ParamLimits

0x3c08,	// (0x0005347b) input_focus_pane_cp6_vc

0xd87d,	// (0x0005d0f0) list_midp_pane_ParamLimits

0x67fe,	// (0x00056071) scroll_pane_cp16_ParamLimits

0x67fe,	// (0x00056071) scroll_pane_cp16

0x554e,	// (0x00054dc1) button_value_adjust_pane_ParamLimits

0x554e,	// (0x00054dc1) button_value_adjust_pane

0xda1e,	// (0x0005d291) button_value_adjust_pane_cp6_ParamLimits

0xda1e,	// (0x0005d291) button_value_adjust_pane_cp6

0xdb38,	// (0x0005d3ab) settings_code_pane_cp_ParamLimits

0xdb38,	// (0x0005d3ab) settings_code_pane_cp

0x2ba6,	// (0x00052419) cell_touch_pane_g1

0x2ba6,	// (0x00052419) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0005ef7b) cell_touch_pane_g

0xdcac,	// (0x0005d51f) cell_touch_pane_cp_ParamLimits

0xdcac,	// (0x0005d51f) cell_touch_pane_cp

0xdcc8,	// (0x0005d53b) cell_touch_pane_ParamLimits

0xdcc8,	// (0x0005d53b) cell_touch_pane

0x2ba6,	// (0x00052419) scroll_sc2_down_pane_g1

0x2ba6,	// (0x00052419) scroll_sc2_up_pane_g1

0x2bb0,	// (0x00052423) bg_set_opt_pane_cp4_vc

0x6b8e,	// (0x00056401) list_set_graphic_pane_vc_g1_ParamLimits

0x6b8e,	// (0x00056401) list_set_graphic_pane_vc_g1

0x6b9a,	// (0x0005640d) list_set_graphic_pane_vc_g2_ParamLimits

0x6b9a,	// (0x0005640d) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0005f26b) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0005f26b) list_set_graphic_pane_vc_g

0x6ba6,	// (0x00056419) text_primary_small_cp13_vc_ParamLimits

0x6ba6,	// (0x00056419) text_primary_small_cp13_vc

0x6bbe,	// (0x00056431) list_set_graphic_pane_vc_ParamLimits

0x6bbe,	// (0x00056431) list_set_graphic_pane_vc

0x2bb0,	// (0x00052423) input_focus_pane_cp2_vc

0x2ba6,	// (0x00052419) setting_code_pane_vc_g1

0x2cdb,	// (0x0005254e) setting_code_pane_vc_t1

0x6bd1,	// (0x00056444) set_text_pane_vc_t1_ParamLimits

0x6bd1,	// (0x00056444) set_text_pane_vc_t1

0x2bb0,	// (0x00052423) input_focus_pane_cp1_vc

0x6bed,	// (0x00056460) list_set_text_pane_vc

0x2ba6,	// (0x00052419) setting_text_pane_vc_g1

0x2bb0,	// (0x00052423) bg_set_opt_pane_cp2_vc

0x2cd2,	// (0x00052545) setting_slider_graphic_pane_vc_g1

0x6bf7,	// (0x0005646a) setting_slider_graphic_pane_vc_t1

0x6c07,	// (0x0005647a) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0005f270) setting_slider_graphic_pane_vc_t

0x6c17,	// (0x0005648a) slider_set_pane_cp_vc

0x6c1f,	// (0x00056492) slider_set_pane_vc_g1

0x6c28,	// (0x0005649b) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0005f275) slider_set_pane_vc_g

0x3c57,	// (0x000534ca) set_opt_bg_pane_g1_copy1

0x3c5f,	// (0x000534d2) set_opt_bg_pane_g2_copy1

0x6c54,	// (0x000564c7) set_opt_bg_pane_g3_copy1

0x3c6f,	// (0x000534e2) set_opt_bg_pane_g4_copy1

0x3c77,	// (0x000534ea) set_opt_bg_pane_g5_copy1

0x3c7f,	// (0x000534f2) set_opt_bg_pane_g6_copy1

0x6c5e,	// (0x000564d1) set_opt_bg_pane_g7_copy1

0x6c66,	// (0x000564d9) set_opt_bg_pane_g8_copy1

0x6c70,	// (0x000564e3) set_opt_bg_pane_g9_copy1

0x2bb0,	// (0x00052423) bg_set_opt_pane_cp_vc

0x6c7a,	// (0x000564ed) setting_slider_pane_vc_t1

0x6c89,	// (0x000564fc) setting_slider_pane_vc_t2

0x6c99,	// (0x0005650c) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0005f284) setting_slider_pane_vc_t

0x6ca9,	// (0x0005651c) slider_set_pane_vc

0x163c,	// (0x00050eaf) volume_set_pane_vc_g1

0x1645,	// (0x00050eb8) volume_set_pane_vc_g2

0x164e,	// (0x00050ec1) volume_set_pane_vc_g3

0x1657,	// (0x00050eca) volume_set_pane_vc_g4

0x1660,	// (0x00050ed3) volume_set_pane_vc_g5

0x1669,	// (0x00050edc) volume_set_pane_vc_g6

0x1672,	// (0x00050ee5) volume_set_pane_vc_g7

0x167b,	// (0x00050eee) volume_set_pane_vc_g8

0x1684,	// (0x00050ef7) volume_set_pane_vc_g9

0x168d,	// (0x00050f00) volume_set_pane_vc_g10

0x0009,

0xf8b6,	// (0x0005f129) volume_set_pane_vc_g

0x6cb1,	// (0x00056524) volume_set_pane_vc

0x6cb9,	// (0x0005652c) button_value_adjust_pane_cp1_vc

0x6cc3,	// (0x00056536) list_highlight_pane_cp2_vc

0x6ccc,	// (0x0005653f) list_set_pane_vc_ParamLimits

0x6ccc,	// (0x0005653f) list_set_pane_vc

0x6d2a,	// (0x0005659d) main_pane_set_vc_t1_ParamLimits

0x6d2a,	// (0x0005659d) main_pane_set_vc_t1

0x6d3f,	// (0x000565b2) main_pane_set_vc_t2_ParamLimits

0x6d3f,	// (0x000565b2) main_pane_set_vc_t2

0x6d51,	// (0x000565c4) main_pane_set_vc_t3_ParamLimits

0x6d51,	// (0x000565c4) main_pane_set_vc_t3

0x6d65,	// (0x000565d8) main_pane_set_vc_t4_ParamLimits

0x6d65,	// (0x000565d8) main_pane_set_vc_t4

0x0003,

0xfa18,	// (0x0005f28b) main_pane_set_vc_t_ParamLimits

0xfa18,	// (0x0005f28b) main_pane_set_vc_t

0x6d79,	// (0x000565ec) setting_code_pane_vc_ParamLimits

0x6d79,	// (0x000565ec) setting_code_pane_vc

0x6d8a,	// (0x000565fd) setting_slider_graphic_pane_vc

0x6d8a,	// (0x000565fd) setting_slider_pane_vc

0x6d8a,	// (0x000565fd) setting_text_pane_vc

0x6d8a,	// (0x000565fd) setting_volume_pane_vc

0x6d94,	// (0x00056607) scroll_pane_cp121_vc

0x3be2,	// (0x00053455) set_content_pane_vc

0x6d9c,	// (0x0005660f) button_value_adjust_pane_g1

0x6da5,	// (0x00056618) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x0005f2e0) button_value_adjust_pane_g

0x6dae,	// (0x00056621) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6dae,	// (0x00056621) form_field_slider_wide_pane_vc_t1

0x6dc2,	// (0x00056635) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6dc2,	// (0x00056635) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x0005f2e5) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0005f2e5) form_field_slider_wide_pane_vc_t

0x2f0b,	// (0x0005277e) input_focus_pane_cp10_vc_ParamLimits

0x2f0b,	// (0x0005277e) input_focus_pane_cp10_vc

0x6df0,	// (0x00056663) slider_cont_pane_cp1_vc_ParamLimits

0x6df0,	// (0x00056663) slider_cont_pane_cp1_vc

0x6e02,	// (0x00056675) slider_form_pane_g1_cp2

0x6c28,	// (0x0005649b) slider_form_pane_g2_cp2

0x6e2f,	// (0x000566a2) form_field_slider_pane_vc_t3

0x6e3d,	// (0x000566b0) form_field_slider_pane_vc_t4

0x6e4b,	// (0x000566be) slider_form_pane_vc_ParamLimits

0x6e4b,	// (0x000566be) slider_form_pane_vc

0x6e58,	// (0x000566cb) form_field_slider_pane_vc_t1_ParamLimits

0x6e58,	// (0x000566cb) form_field_slider_pane_vc_t1

0x6dc2,	// (0x00056635) form_field_slider_pane_vc_t2_ParamLimits

0x6dc2,	// (0x00056635) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x0005f2f7) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x0005f2f7) form_field_slider_pane_vc_t

0x2f0b,	// (0x0005277e) input_focus_pane_cp9_vc_ParamLimits

0x2f0b,	// (0x0005277e) input_focus_pane_cp9_vc

0x6e74,	// (0x000566e7) slider_cont_pane_vc_ParamLimits

0x6e74,	// (0x000566e7) slider_cont_pane_vc

0x6e88,	// (0x000566fb) list_form_graphic_pane_cp_vc_ParamLimits

0x6e88,	// (0x000566fb) list_form_graphic_pane_cp_vc

0x51c0,	// (0x00054a33) form_field_popup_wide_pane_vc_g1

0x6e9d,	// (0x00056710) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6e9d,	// (0x00056710) form_field_popup_wide_pane_vc_t1

0x3c08,	// (0x0005347b) input_focus_pane_cp8_vc_ParamLimits

0x3c08,	// (0x0005347b) input_focus_pane_cp8_vc

0x6ee2,	// (0x00056755) list_form_wide_pane_vc_ParamLimits

0x6ee2,	// (0x00056755) list_form_wide_pane_vc

0x6eee,	// (0x00056761) list_form_graphic_pane_vc_g1

0x6ef6,	// (0x00056769) list_form_graphic_pane_vc_t1_ParamLimits

0x6ef6,	// (0x00056769) list_form_graphic_pane_vc_t1

0x2c90,	// (0x00052503) list_highlight_pane_cp5_vc_ParamLimits

0x2c90,	// (0x00052503) list_highlight_pane_cp5_vc

0x6f12,	// (0x00056785) list_form_graphic_pane_vc_ParamLimits

0x6f12,	// (0x00056785) list_form_graphic_pane_vc

0x51c0,	// (0x00054a33) form_field_popup_pane_vc_g1

0x6f28,	// (0x0005679b) form_field_popup_pane_vc_t1_ParamLimits

0x6f28,	// (0x0005679b) form_field_popup_pane_vc_t1

0x3c08,	// (0x0005347b) input_focus_pane_cp7_vc_ParamLimits

0x3c08,	// (0x0005347b) input_focus_pane_cp7_vc

0x6f3f,	// (0x000567b2) list_form_pane_vc_ParamLimits

0x6f3f,	// (0x000567b2) list_form_pane_vc

0x6f4b,	// (0x000567be) data_form_pane_vc_t1_ParamLimits

0x6f4b,	// (0x000567be) data_form_pane_vc_t1

0x3c57,	// (0x000534ca) input_focus_pane_vc_g1

0x3c5f,	// (0x000534d2) input_focus_pane_vc_g2

0x3c67,	// (0x000534da) input_focus_pane_vc_g3

0x3c6f,	// (0x000534e2) input_focus_pane_vc_g4

0x3c77,	// (0x000534ea) input_focus_pane_vc_g5

0x3c7f,	// (0x000534f2) input_focus_pane_vc_g6

0x3c87,	// (0x000534fa) input_focus_pane_vc_g7

0x3c8f,	// (0x00053502) input_focus_pane_vc_g8

0x3c97,	// (0x0005350a) input_focus_pane_vc_g9

0x2ba6,	// (0x00052419) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0005ef04) input_focus_pane_vc_g

0x51b4,	// (0x00054a27) data_form_pane_vc_ParamLimits

0x51b4,	// (0x00054a27) data_form_pane_vc

0x51c0,	// (0x00054a33) form_field_data_pane_vc_g1

0x6f66,	// (0x000567d9) form_field_data_pane_vc_t1_ParamLimits

0x6f66,	// (0x000567d9) form_field_data_pane_vc_t1

0x3c08,	// (0x0005347b) input_focus_pane_vc_ParamLimits

0x3c08,	// (0x0005347b) input_focus_pane_vc

0x6f80,	// (0x000567f3) button_value_adjust_pane_cp3_vc

0x6f88,	// (0x000567fb) button_value_adjust_pane_cp5_vc

0x6f90,	// (0x00056803) form_field_data_pane_vc_ParamLimits

0x6f90,	// (0x00056803) form_field_data_pane_vc

0x6fa7,	// (0x0005681a) form_field_data_pane_vc_cp2

0x6faf,	// (0x00056822) form_field_data_wide_pane_vc_ParamLimits

0x6faf,	// (0x00056822) form_field_data_wide_pane_vc

0x6fc5,	// (0x00056838) form_field_data_wide_pane_vc_cp2

0x6fcd,	// (0x00056840) form_field_popup_pane_vc_ParamLimits

0x6fcd,	// (0x00056840) form_field_popup_pane_vc

0x6fe4,	// (0x00056857) form_field_popup_wide_pane_vc_ParamLimits

0x6fe4,	// (0x00056857) form_field_popup_wide_pane_vc

0x6ffa,	// (0x0005686d) form_field_slider_pane_vc_ParamLimits

0x6ffa,	// (0x0005686d) form_field_slider_pane_vc

0x700d,	// (0x00056880) form_field_slider_wide_pane_vc_ParamLimits

0x700d,	// (0x00056880) form_field_slider_wide_pane_vc

0xdce6,	// (0x0005d559) grid_touch_1_pane_ParamLimits

0xdce6,	// (0x0005d559) grid_touch_1_pane

0xdcfa,	// (0x0005d56d) grid_touch_2_pane_ParamLimits

0xdcfa,	// (0x0005d56d) grid_touch_2_pane

0x70db,	// (0x0005694e) touch_pane_g1_ParamLimits

0x70db,	// (0x0005694e) touch_pane_g1

0x7044,	// (0x000568b7) cell_app_pane_cp_wide_ParamLimits

0x7044,	// (0x000568b7) cell_app_pane_cp_wide

0x7055,	// (0x000568c8) grid_popup_fast_wide_pane_ParamLimits

0x7055,	// (0x000568c8) grid_popup_fast_wide_pane

0x7069,	// (0x000568dc) scroll_pane_cp19_ParamLimits

0x7069,	// (0x000568dc) scroll_pane_cp19

0x2bb0,	// (0x00052423) bg_popup_window_pane_cp20

0x707d,	// (0x000568f0) listscroll_popup_fast_wide_pane

0x3dbf,	// (0x00053632) grid_indicator_nsta_pane

0x7085,	// (0x000568f8) clock_nsta_pane_g1

0x708e,	// (0x00056901) clock_nsta_pane_t1

0xdd24,	// (0x0005d597) cell_indicator_nsta_pane_ParamLimits

0xdd24,	// (0x0005d597) cell_indicator_nsta_pane

0x70db,	// (0x0005694e) cell_indicator_nsta_pane_g1

0xdd3b,	// (0x0005d5ae) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x0005f308) cell_indicator_nsta_pane_g

0x70f6,	// (0x00056969) clock_nsta_pane_cp

0x70fe,	// (0x00056971) indicator_nsta_pane_cp

0x7106,	// (0x00056979) nsta_clock_indic_pane_g1

0x2d59,	// (0x000525cc) grid_indicator_pane

0x418f,	// (0x00053a02) scroll_pane_cp29

0x0b07,	// (0x0005037a) indicator_nsta_pane_cp2_ParamLimits

0x0b07,	// (0x0005037a) indicator_nsta_pane_cp2

0x2c90,	// (0x00052503) main_apps_wheel_pane

0x53d5,	// (0x00054c48) form_midp_field_text_pane_ParamLimits

0x5520,	// (0x00054d93) scroll_bar_cp050_ParamLimits

0x7167,	// (0x000569da) cell_indicator_pane_ParamLimits

0x7167,	// (0x000569da) cell_indicator_pane

0x717e,	// (0x000569f1) cell_indicator_pane_g1

0xdd48,	// (0x0005d5bb) grid_wheel_folder_pane_ParamLimits

0xdd48,	// (0x0005d5bb) grid_wheel_folder_pane

0xdd56,	// (0x0005d5c9) list_wheel_apps_pane_ParamLimits

0xdd56,	// (0x0005d5c9) list_wheel_apps_pane

0xdd64,	// (0x0005d5d7) main_apps_wheel_pane_g1_ParamLimits

0xdd64,	// (0x0005d5d7) main_apps_wheel_pane_g1

0xdd70,	// (0x0005d5e3) main_apps_wheel_pane_g2_ParamLimits

0xdd70,	// (0x0005d5e3) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x0005f324) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x0005f324) main_apps_wheel_pane_g

0xdd7e,	// (0x0005d5f1) main_apps_wheel_pane_t1_ParamLimits

0xdd7e,	// (0x0005d5f1) main_apps_wheel_pane_t1

0xdd92,	// (0x0005d605) list_wheel_apps_pane_g1

0xdd9a,	// (0x0005d60d) list_wheel_apps_pane_g2

0xdda2,	// (0x0005d615) list_wheel_apps_pane_g3

0xddaa,	// (0x0005d61d) list_wheel_apps_pane_g4

0xddb4,	// (0x0005d627) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x0005f329) list_wheel_apps_pane_g

0x4712,	// (0x00053f85) navi_icon_text_pane

0xd331,	// (0x0005cba4) aid_fill_nsta

0x7243,	// (0x00056ab6) navi_icon_text_pane_g1

0x724f,	// (0x00056ac2) navi_icon_text_pane_t1

0xd195,	// (0x0005ca08) list_set_graphic_pane_t1_ParamLimits

0xd195,	// (0x0005ca08) list_set_graphic_pane_t1

0x5c7b,	// (0x000554ee) popup_midp_note_alarm_window_t6_ParamLimits

0x5c7b,	// (0x000554ee) popup_midp_note_alarm_window_t6

0x5c8d,	// (0x00055500) popup_midp_note_alarm_window_t7_ParamLimits

0x5c8d,	// (0x00055500) popup_midp_note_alarm_window_t7

0x5c9f,	// (0x00055512) popup_midp_note_alarm_window_t8_ParamLimits

0x5c9f,	// (0x00055512) popup_midp_note_alarm_window_t8

0x5cb1,	// (0x00055524) popup_midp_note_alarm_window_t9_ParamLimits

0x5cb1,	// (0x00055524) popup_midp_note_alarm_window_t9

0x5cc3,	// (0x00055536) popup_midp_note_alarm_window_t10_ParamLimits

0x5cc3,	// (0x00055536) popup_midp_note_alarm_window_t10

0x5cd5,	// (0x00055548) popup_midp_note_alarm_window_t11_ParamLimits

0x5cd5,	// (0x00055548) popup_midp_note_alarm_window_t11

0x5ce7,	// (0x0005555a) scroll_pane_cp17_ParamLimits

0x5ce7,	// (0x0005555a) scroll_pane_cp17

0x163c,	// (0x00050eaf) volume_small_pane_cp_g1

0x1b6e,	// (0x000513e1) volume_small_pane_cp_g2

0x1b77,	// (0x000513ea) volume_small_pane_cp_g3

0x1b80,	// (0x000513f3) volume_small_pane_cp_g4

0x1b89,	// (0x000513fc) volume_small_pane_cp_g5

0x1b92,	// (0x00051405) volume_small_pane_cp_g6

0x1b9b,	// (0x0005140e) volume_small_pane_cp_g7

0x1ba4,	// (0x00051417) volume_small_pane_cp_g8

0x1bad,	// (0x00051420) volume_small_pane_cp_g9

0x1bb6,	// (0x00051429) volume_small_pane_cp_g10

0x4963,	// (0x000541d6) midp_ticker_pane_g1_ParamLimits

0x496f,	// (0x000541e2) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0005efd0) midp_ticker_pane_g_ParamLimits

0x497b,	// (0x000541ee) midp_ticker_pane_t1_ParamLimits

0xd355,	// (0x0005cbc8) aid_fill_nsta_2

0x550c,	// (0x00054d7f) list_form2_midp_pane

0x6641,	// (0x00055eb4) midp_editing_number_pane_ParamLimits

0x6650,	// (0x00055ec3) midp_ticker_pane_ParamLimits

0x7261,	// (0x00056ad4) form2_midp_field_pane

0x7285,	// (0x00056af8) scroll_pane_cp51

0x72a5,	// (0x00056b18) form2_midp_button_pane_ParamLimits

0x72a5,	// (0x00056b18) form2_midp_button_pane

0x72b7,	// (0x00056b2a) form2_midp_content_pane_ParamLimits

0x72b7,	// (0x00056b2a) form2_midp_content_pane

0x72d1,	// (0x00056b44) form2_midp_field_choice_group_pane

0x72d9,	// (0x00056b4c) form2_midp_field_pane_g1

0x72e1,	// (0x00056b54) form2_midp_field_pane_g2

0x72e9,	// (0x00056b5c) form2_midp_field_pane_g3

0x72f1,	// (0x00056b64) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x0005f34e) form2_midp_field_pane_g

0x72f9,	// (0x00056b6c) form2_midp_gauge_slider_pane

0x7301,	// (0x00056b74) form2_midp_gauge_wait_pane

0x7309,	// (0x00056b7c) form2_midp_image_pane_ParamLimits

0x7309,	// (0x00056b7c) form2_midp_image_pane

0x7324,	// (0x00056b97) form2_midp_label_pane_ParamLimits

0x7324,	// (0x00056b97) form2_midp_label_pane

0xdde7,	// (0x0005d65a) form2_midp_label_pane_cp_ParamLimits

0xdde7,	// (0x0005d65a) form2_midp_label_pane_cp

0x735e,	// (0x00056bd1) form2_midp_string_pane_ParamLimits

0x735e,	// (0x00056bd1) form2_midp_string_pane

0xc4dc,	// (0x0005bd4f) form2_midp_text_pane_ParamLimits

0xc4dc,	// (0x0005bd4f) form2_midp_text_pane

0x7370,	// (0x00056be3) form2_midp_time_pane

0x7380,	// (0x00056bf3) input_focus_pane_cp51_ParamLimits

0x7380,	// (0x00056bf3) input_focus_pane_cp51

0x7398,	// (0x00056c0b) form2_midp_label_pane_t1_ParamLimits

0x7398,	// (0x00056c0b) form2_midp_label_pane_t1

0xc4fb,	// (0x0005bd6e) form2_mdip_text_pane_t1_ParamLimits

0xc4fb,	// (0x0005bd6e) form2_mdip_text_pane_t1

0x336e,	// (0x00052be1) form2_midp_time_pane_t1

0x73e1,	// (0x00056c54) form2_midp_gauge_slider_pane_t1

0xde06,	// (0x0005d679) form2_midp_gauge_slider_pane_t2

0xde18,	// (0x0005d68b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x0005f357) form2_midp_gauge_slider_pane_t

0x7417,	// (0x00056c8a) form2_midp_slider_pane

0x7423,	// (0x00056c96) form2_midp_gauge_wait_pane_t1

0x7431,	// (0x00056ca4) form2_midp_wait_pane_ParamLimits

0x7431,	// (0x00056ca4) form2_midp_wait_pane

0xde2a,	// (0x0005d69d) list_single_2graphic_pane_cp4_ParamLimits

0xde2a,	// (0x0005d69d) list_single_2graphic_pane_cp4

0xd80b,	// (0x0005d07e) list_single_midp_graphic_pane_cp_ParamLimits

0xd80b,	// (0x0005d07e) list_single_midp_graphic_pane_cp

0x2bb0,	// (0x00052423) list_highlight_pane_cp20

0x748b,	// (0x00056cfe) list_single_2graphic_pane_g1_cp4

0x7493,	// (0x00056d06) list_single_2graphic_pane_g2_cp4

0x749b,	// (0x00056d0e) list_single_2graphic_pane_t1_cp4

0x2c90,	// (0x00052503) list_highlight_pane_cp21

0x74aa,	// (0x00056d1d) list_single_midp_graphic_pane_g4_cp

0x74b9,	// (0x00056d2c) list_single_midp_graphic_pane_t1_cp

0xde3e,	// (0x0005d6b1) form2_mdip_string_pane_t1_ParamLimits

0xde3e,	// (0x0005d6b1) form2_mdip_string_pane_t1

0x2bb0,	// (0x00052423) bg_wml_button_pane_cp2

0x2ba6,	// (0x00052419) form2_midp_image_pane_g1

0x305e,	// (0x000528d1) list_double_large_graphic_pane_g5_ParamLimits

0x305e,	// (0x000528d1) list_double_large_graphic_pane_g5

0x4bd0,	// (0x00054443) midp_form_pane_ParamLimits

0x2c90,	// (0x00052503) main_apps_wheel_pane_ParamLimits

0xc166,	// (0x0005b9d9) popup_preview_window_ParamLimits

0xc166,	// (0x0005b9d9) popup_preview_window

0x13a7,	// (0x00050c1a) popup_touch_info_window_ParamLimits

0x13a7,	// (0x00050c1a) popup_touch_info_window

0x13c5,	// (0x00050c38) popup_touch_menu_window_ParamLimits

0x13c5,	// (0x00050c38) popup_touch_menu_window

0x2b9c,	// (0x0005240f) bg_popup_sub_pane_cp6

0x75c7,	// (0x00056e3a) list_touch_menu_pane

0x75cf,	// (0x00056e42) list_single_touch_menu_pane_ParamLimits

0x75cf,	// (0x00056e42) list_single_touch_menu_pane

0x75e5,	// (0x00056e58) list_single_touch_menu_pane_t1

0x2c90,	// (0x00052503) bg_popup_sub_pane_cp7_ParamLimits

0x2c90,	// (0x00052503) bg_popup_sub_pane_cp7

0x75f3,	// (0x00056e66) heading_sub_pane

0x75fb,	// (0x00056e6e) list_touch_info_pane_ParamLimits

0x75fb,	// (0x00056e6e) list_touch_info_pane

0x760a,	// (0x00056e7d) list_single_touch_info_pane_ParamLimits

0x760a,	// (0x00056e7d) list_single_touch_info_pane

0x761c,	// (0x00056e8f) list_single_touch_info_pane_t1

0x762a,	// (0x00056e9d) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x0005f365) list_single_touch_info_pane_t

0x4892,	// (0x00054105) bg_popup_heading_pane_cp

0x7638,	// (0x00056eab) heading_sub_pane_t1

0x514e,	// (0x000549c1) bg_popup_preview_window_pane_cp_ParamLimits

0x514e,	// (0x000549c1) bg_popup_preview_window_pane_cp

0x75f3,	// (0x00056e66) heading_preview_pane

0x75fb,	// (0x00056e6e) list_preview_pane_ParamLimits

0x75fb,	// (0x00056e6e) list_preview_pane

0x7646,	// (0x00056eb9) popup_preview_window_g1

0x760a,	// (0x00056e7d) list_single_preview_pane_ParamLimits

0x760a,	// (0x00056e7d) list_single_preview_pane

0x764e,	// (0x00056ec1) list_single_preview_pane_g1

0x7656,	// (0x00056ec9) list_single_preview_pane_t1

0x761c,	// (0x00056e8f) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x0005f36a) list_single_preview_pane_t

0x7664,	// (0x00056ed7) bg_popup_heading_pane_cp2_ParamLimits

0x7664,	// (0x00056ed7) bg_popup_heading_pane_cp2

0x767a,	// (0x00056eed) heading_preview_pane_g1

0x7682,	// (0x00056ef5) heading_preview_pane_t1_ParamLimits

0x7682,	// (0x00056ef5) heading_preview_pane_t1

0x2d7c,	// (0x000525ef) soft_indicator_pane_t1_ParamLimits

0x3b6f,	// (0x000533e2) scroll_pane_ParamLimits

0x4088,	// (0x000538fb) scroll_sc2_left_pane

0x4091,	// (0x00053904) scroll_sc2_right_pane

0x40b0,	// (0x00053923) scroll_bg_pane_g1_ParamLimits

0x40c5,	// (0x00053938) scroll_bg_pane_g2_ParamLimits

0x40dd,	// (0x00053950) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0005ef5b) scroll_bg_pane_g_ParamLimits

0x40b0,	// (0x00053923) scroll_handle_pane_g1_ParamLimits

0x40ff,	// (0x00053972) scroll_handle_pane_g2_ParamLimits

0x40dd,	// (0x00053950) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0005ef62) scroll_handle_pane_g_ParamLimits

0x0e6d,	// (0x000506e0) popup_choice_list_window_ParamLimits

0x0e6d,	// (0x000506e0) popup_choice_list_window

0x5024,	// (0x00054897) choice_list_pane

0x50a6,	// (0x00054919) cell_toolbar_pane_t1

0x50ce,	// (0x00054941) toolbar_button_pane_ParamLimits

0x61a1,	// (0x00055a14) ai_gene_pane_1_t2_ParamLimits

0x61a1,	// (0x00055a14) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0005f185) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0005f185) ai_gene_pane_1_t

0x769f,	// (0x00056f12) scroll_sc2_left_pane_g1

0x769f,	// (0x00056f12) scroll_sc2_right_pane_g1

0x4bd0,	// (0x00054443) bg_popup_sub_pane_cp10

0x76a9,	// (0x00056f1c) list_choice_list_pane

0x76c2,	// (0x00056f35) list_single_choice_list_pane_ParamLimits

0x76c2,	// (0x00056f35) list_single_choice_list_pane

0x76d5,	// (0x00056f48) list_single_choice_list_pane_g1

0x3d90,	// (0x00053603) list_single_choice_list_pane_t1_ParamLimits

0x3d90,	// (0x00053603) list_single_choice_list_pane_t1

0x76dd,	// (0x00056f50) choice_list_pane_g1

0x76e5,	// (0x00056f58) choice_list_pane_t1

0x2b9c,	// (0x0005240f) input_focus_pane_cp11

0x3f67,	// (0x000537da) title_pane_stacon_g2_ParamLimits

0x3f67,	// (0x000537da) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0005ef41) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0005ef41) title_pane_stacon_g

0x4892,	// (0x00054105) cursor_press_pane

0xbe13,	// (0x0005b686) popup_fep_hwr_window_ParamLimits

0xbe13,	// (0x0005b686) popup_fep_hwr_window

0x0f93,	// (0x00050806) popup_fep_vkb_window_ParamLimits

0x0f93,	// (0x00050806) popup_fep_vkb_window

0x76f3,	// (0x00056f66) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x0005f393) fep_vkb_side_pane_g_ParamLimits

0x1bf8,	// (0x0005146b) fep_hwr_candidate_pane_ParamLimits

0x1bf8,	// (0x0005146b) fep_hwr_candidate_pane

0x1c22,	// (0x00051495) fep_hwr_side_pane_ParamLimits

0x1c22,	// (0x00051495) fep_hwr_side_pane

0x1c42,	// (0x000514b5) fep_hwr_top_pane_ParamLimits

0x1c42,	// (0x000514b5) fep_hwr_top_pane

0x1c5a,	// (0x000514cd) fep_hwr_write_pane_ParamLimits

0x1c5a,	// (0x000514cd) fep_hwr_write_pane

0xfb20,	// (0x0005f393) fep_vkb_side_pane_g

0x76fb,	// (0x00056f6e) fep_hwr_top_pane_g1

0x770d,	// (0x00056f80) fep_hwr_top_pane_g2

0x1c94,	// (0x00051507) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x0005f36f) fep_hwr_top_pane_g

0x1ca9,	// (0x0005151c) fep_hwr_top_text_pane

0x427f,	// (0x00053af2) fep_hwr_top_text_pane_g1

0x7743,	// (0x00056fb6) fep_hwr_top_text_pane_t1

0x1d9f,	// (0x00051612) fep_hwr_candidate_pane_g1

0x7996,	// (0x00057209) fep_vkb_keypad_pane_g3_ParamLimits

0x7996,	// (0x00057209) fep_vkb_keypad_pane_g3

0x79be,	// (0x00057231) fep_vkb_keypad_pane_g4_ParamLimits

0x79be,	// (0x00057231) fep_vkb_keypad_pane_g4

0x7a2d,	// (0x000572a0) fep_vkb_bottom_pane_g2_ParamLimits

0x7a2d,	// (0x000572a0) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x0005f39a) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x0005f39a) fep_vkb_bottom_pane_g

0x769f,	// (0x00056f12) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x0005f3a4) cell_vkb_side_pane_g

0x7ab8,	// (0x0005732b) cell_vkb_side_pane_t1

0x7ac6,	// (0x00057339) cell_vkb_side_pane_t1_copy1

0x769f,	// (0x00056f12) bg_fep_vkb_candidate_pane_g2

0x7bfe,	// (0x00057471) cell_vkb_candidate_pane_ParamLimits

0x7751,	// (0x00056fc4) aid_size_cell_vkb_ParamLimits

0x7751,	// (0x00056fc4) aid_size_cell_vkb

0x7bfe,	// (0x00057471) cell_vkb_candidate_pane

0x1dc6,	// (0x00051639) bg_popup_fep_shadow_pane_g1

0xdecf,	// (0x0005d742) fep_vkb_bottom_pane_ParamLimits

0xdecf,	// (0x0005d742) fep_vkb_bottom_pane

0x7815,	// (0x00057088) fep_vkb_candidate_pane_ParamLimits

0x7815,	// (0x00057088) fep_vkb_candidate_pane

0xdef4,	// (0x0005d767) fep_vkb_keypad_pane_ParamLimits

0xdef4,	// (0x0005d767) fep_vkb_keypad_pane

0xdf30,	// (0x0005d7a3) fep_vkb_side_pane_ParamLimits

0xdf30,	// (0x0005d7a3) fep_vkb_side_pane

0xdf6c,	// (0x0005d7df) fep_vkb_top_pane_ParamLimits

0xdf6c,	// (0x0005d7df) fep_vkb_top_pane

0x78ef,	// (0x00057162) fep_vkb_top_pane_g1_ParamLimits

0x78ef,	// (0x00057162) fep_vkb_top_pane_g1

0x78fe,	// (0x00057171) fep_vkb_top_pane_g2_ParamLimits

0x78fe,	// (0x00057171) fep_vkb_top_pane_g2

0x790d,	// (0x00057180) fep_vkb_top_pane_g3_ParamLimits

0x790d,	// (0x00057180) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x0005f38a) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x0005f38a) fep_vkb_top_pane_g

0x792b,	// (0x0005719e) fep_vkb_top_text_pane_ParamLimits

0x792b,	// (0x0005719e) fep_vkb_top_text_pane

0xdfa8,	// (0x0005d81b) fep_vkb_side_pane_g1_ParamLimits

0xdfa8,	// (0x0005d81b) fep_vkb_side_pane_g1

0x7985,	// (0x000571f8) grid_vkb_side_pane_ParamLimits

0x7985,	// (0x000571f8) grid_vkb_side_pane

0x1dce,	// (0x00051641) bg_popup_fep_shadow_pane_g2

0x1dd7,	// (0x0005164a) bg_popup_fep_shadow_pane_g3

0x1ddf,	// (0x00051652) bg_popup_fep_shadow_pane_g4

0x1de8,	// (0x0005165b) bg_popup_fep_shadow_pane_g5

0x1df2,	// (0x00051665) bg_popup_fep_shadow_pane_g6

0x1dfa,	// (0x0005166d) bg_popup_fep_shadow_pane_g7

0x3c6f,	// (0x000534e2) bg_popup_fep_shadow_pane_g8

0x79dc,	// (0x0005724f) grid_vkb_keypad_number_pane_ParamLimits

0x79dc,	// (0x0005724f) grid_vkb_keypad_number_pane

0x79ec,	// (0x0005725f) grid_vkb_keypad_pane_ParamLimits

0x79ec,	// (0x0005725f) grid_vkb_keypad_pane

0x7a12,	// (0x00057285) fep_vkb_bottom_pane_g1_ParamLimits

0x7a12,	// (0x00057285) fep_vkb_bottom_pane_g1

0x7a3b,	// (0x000572ae) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7a3b,	// (0x000572ae) grid_vkb_keypad_bottom_left_pane

0x7a50,	// (0x000572c3) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7a50,	// (0x000572c3) grid_vkb_keypad_bottom_right_pane

0x7a65,	// (0x000572d8) fep_vkb_top_text_pane_g1

0xdfef,	// (0x0005d862) fep_vkb_top_text_pane_t1

0xe001,	// (0x0005d874) cell_vkb_side_pane_ParamLimits

0xe001,	// (0x0005d874) cell_vkb_side_pane

0x769f,	// (0x00056f12) cell_vkb_side_pane_g1

0x7ad4,	// (0x00057347) cell_vkb_keypad_pane_ParamLimits

0x7ad4,	// (0x00057347) cell_vkb_keypad_pane

0x7b49,	// (0x000573bc) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x0005f3b7) bg_popup_fep_shadow_pane_g

0x1e0c,	// (0x0005167f) cell_hwr_side_pane_g1

0x1e0c,	// (0x0005167f) cell_hwr_side_pane_g2

0x7b53,	// (0x000573c6) cell_vkb_keypad_pane_t1

0xe017,	// (0x0005d88a) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe017,	// (0x0005d88a) cell_vkb_keypad_bottom_left_pane

0xe02c,	// (0x0005d89f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe02c,	// (0x0005d89f) cell_vkb_keypad_bottom_right_pane

0x769f,	// (0x00056f12) cell_vkb_keypad_bottom_left_pane_g1

0x769f,	// (0x00056f12) cell_vkb_keypad_bottom_right_pane_g1

0x7bc3,	// (0x00057436) cell_vkb_keypad_number_pane_ParamLimits

0x7bc3,	// (0x00057436) cell_vkb_keypad_number_pane

0x7be2,	// (0x00057455) cell_vkb_keypad_number_pane_g1

0x7bec,	// (0x0005745f) cell_vkb_keypad_number_pane_g2

0x7bf5,	// (0x00057468) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x0005f3a9) cell_vkb_keypad_number_pane_g

0x7b53,	// (0x000573c6) cell_vkb_keypad_number_pane_t1

0x7c19,	// (0x0005748c) fep_vkb_candidate_pane_g1

0x0001,

0xfb57,	// (0x0005f3ca) cell_hwr_side_pane_g

0x7c32,	// (0x000574a5) cell_hwr_side_pane_t1

0x1e16,	// (0x00051689) cell_hwr_side_pane_t1_copy1

0x1e24,	// (0x00051697) cell_hwr_candidate_pane_g1

0x1e53,	// (0x000516c6) cell_hwr_candidate_pane_t1

0x769f,	// (0x00056f12) cell_vkb_candidate_pane_g2

0x7c76,	// (0x000574e9) cell_vkb_candidate_pane_t1

0x1bbf,	// (0x00051432) bg_popup_fep_shadow_pane_ParamLimits

0x1bbf,	// (0x00051432) bg_popup_fep_shadow_pane

0x1c74,	// (0x000514e7) bg_fep_hwr_top_pane_g4

0x771f,	// (0x00056f92) bg_hwr_side_pane_g1_ParamLimits

0x771f,	// (0x00056f92) bg_hwr_side_pane_g1

0xc52d,	// (0x0005bda0) cell_hwr_side_pane_ParamLimits

0xc52d,	// (0x0005bda0) cell_hwr_side_pane

0x1d20,	// (0x00051593) fep_hwr_write_pane_g1_ParamLimits

0x1d20,	// (0x00051593) fep_hwr_write_pane_g1

0x1d2d,	// (0x000515a0) fep_hwr_write_pane_g2_ParamLimits

0x1d2d,	// (0x000515a0) fep_hwr_write_pane_g2

0x1d3a,	// (0x000515ad) fep_hwr_write_pane_g3_ParamLimits

0x1d3a,	// (0x000515ad) fep_hwr_write_pane_g3

0xc54d,	// (0x0005bdc0) fep_hwr_write_pane_g4_ParamLimits

0xc54d,	// (0x0005bdc0) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x0005f376) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x0005f376) fep_hwr_write_pane_g

0x1c74,	// (0x000514e7) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1c74,	// (0x000514e7) bg_fep_hwr_candidate_pane_g2

0x1d5d,	// (0x000515d0) cell_hwr_candidate_pane_ParamLimits

0x1d5d,	// (0x000515d0) cell_hwr_candidate_pane

0x1d9f,	// (0x00051612) fep_hwr_candidate_pane_g1_ParamLimits

0x777f,	// (0x00056ff2) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x777f,	// (0x00056ff2) bg_popup_fep_shadow_pane_cp2

0x791d,	// (0x00057190) fep_vkb_top_pane_g4_ParamLimits

0x791d,	// (0x00057190) fep_vkb_top_pane_g4

0x7963,	// (0x000571d6) fep_vkb_side_pane_g2_ParamLimits

0x7963,	// (0x000571d6) fep_vkb_side_pane_g2

0xb8fb,	// (0x0005b16e) list_setting_pane_t4_ParamLimits

0xb8fb,	// (0x0005b16e) list_setting_pane_t4

0xb995,	// (0x0005b208) list_setting_number_pane_t5_ParamLimits

0xb995,	// (0x0005b208) list_setting_number_pane_t5

0x42b6,	// (0x00053b29) list_double_heading_pane_cp2_ParamLimits

0x42b6,	// (0x00053b29) list_double_heading_pane_cp2

0x3ba3,	// (0x00053416) list_double_heading_pane_g1_cp2_ParamLimits

0x3ba3,	// (0x00053416) list_double_heading_pane_g1_cp2

0x3c16,	// (0x00053489) list_double_heading_pane_g2_cp2_ParamLimits

0x3c16,	// (0x00053489) list_double_heading_pane_g2_cp2

0x7c84,	// (0x000574f7) list_double_heading_pane_t1_cp2_ParamLimits

0x7c84,	// (0x000574f7) list_double_heading_pane_t1_cp2

0x7c9a,	// (0x0005750d) list_double_heading_pane_t2_cp2_ParamLimits

0x7c9a,	// (0x0005750d) list_double_heading_pane_t2_cp2

0x2b84,	// (0x000523f7) aid_value_unit2

0xf544,	// (0x0005edb7) popup_preview_fixed_window

0x2f19,	// (0x0005278c) bg_popup_preview_window_pane_cp02

0x7cac,	// (0x0005751f) list_preview_fixed_pane

0x7cf2,	// (0x00057565) list_empty_pane_fp_ParamLimits

0x7cf2,	// (0x00057565) list_empty_pane_fp

0x7cf2,	// (0x00057565) list_single_cale_day_pane_fp_ParamLimits

0x7cf2,	// (0x00057565) list_single_cale_day_pane_fp

0x7cf2,	// (0x00057565) list_single_graphic_heading_pane_fp_ParamLimits

0x7cf2,	// (0x00057565) list_single_graphic_heading_pane_fp

0x7cf2,	// (0x00057565) list_single_graphic_pane_fp_ParamLimits

0x7cf2,	// (0x00057565) list_single_graphic_pane_fp

0x7cf2,	// (0x00057565) list_single_heading_pane_fp_ParamLimits

0x7cf2,	// (0x00057565) list_single_heading_pane_fp

0x7cf2,	// (0x00057565) list_single_pane_fp_ParamLimits

0x7cf2,	// (0x00057565) list_single_pane_fp

0x7d07,	// (0x0005757a) list_single_pane_fp_g1_ParamLimits

0x7d07,	// (0x0005757a) list_single_pane_fp_g1

0x3ba3,	// (0x00053416) list_single_pane_fp_g2_ParamLimits

0x3ba3,	// (0x00053416) list_single_pane_fp_g2

0x3c16,	// (0x00053489) list_single_pane_fp_g3_ParamLimits

0x3c16,	// (0x00053489) list_single_pane_fp_g3

0x7d13,	// (0x00057586) list_single_pane_fp_g4_ParamLimits

0x7d13,	// (0x00057586) list_single_pane_fp_g4

0x0003,

0xfb6a,	// (0x0005f3dd) list_single_pane_fp_g_ParamLimits

0xfb6a,	// (0x0005f3dd) list_single_pane_fp_g

0x3381,	// (0x00052bf4) list_single_pane_fp_t1_ParamLimits

0x3381,	// (0x00052bf4) list_single_pane_fp_t1

0x3398,	// (0x00052c0b) list_single_graphic_pane_fp_g1_ParamLimits

0x3398,	// (0x00052c0b) list_single_graphic_pane_fp_g1

0x7d07,	// (0x0005757a) list_single_graphic_pane_fp_g2_ParamLimits

0x7d07,	// (0x0005757a) list_single_graphic_pane_fp_g2

0x3ba3,	// (0x00053416) list_single_graphic_pane_fp_g3_ParamLimits

0x3ba3,	// (0x00053416) list_single_graphic_pane_fp_g3

0x3c16,	// (0x00053489) list_single_graphic_pane_fp_g4_ParamLimits

0x3c16,	// (0x00053489) list_single_graphic_pane_fp_g4

0x7d13,	// (0x00057586) list_single_graphic_pane_fp_g5_ParamLimits

0x7d13,	// (0x00057586) list_single_graphic_pane_fp_g5

0x0004,

0xfb73,	// (0x0005f3e6) list_single_graphic_pane_fp_g_ParamLimits

0xfb73,	// (0x0005f3e6) list_single_graphic_pane_fp_g

0x33a4,	// (0x00052c17) list_single_graphic_pane_fp_t1_ParamLimits

0x33a4,	// (0x00052c17) list_single_graphic_pane_fp_t1

0x3398,	// (0x00052c0b) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3398,	// (0x00052c0b) list_single_graphic_heading_pane_fp_g1

0x7d07,	// (0x0005757a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7d07,	// (0x0005757a) list_single_graphic_heading_pane_fp_g2

0x3ba3,	// (0x00053416) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3ba3,	// (0x00053416) list_single_graphic_heading_pane_fp_g3

0x3c16,	// (0x00053489) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3c16,	// (0x00053489) list_single_graphic_heading_pane_fp_g4

0x7d13,	// (0x00057586) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7d13,	// (0x00057586) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb73,	// (0x0005f3e6) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb73,	// (0x0005f3e6) list_single_graphic_heading_pane_fp_g

0x33ba,	// (0x00052c2d) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x33ba,	// (0x00052c2d) list_single_graphic_heading_pane_fp_t1

0x33d0,	// (0x00052c43) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x33d0,	// (0x00052c43) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb7e,	// (0x0005f3f1) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb7e,	// (0x0005f3f1) list_single_graphic_heading_pane_fp_t

0x33e2,	// (0x00052c55) list_single_cale_day_pane_fp_g1_ParamLimits

0x33e2,	// (0x00052c55) list_single_cale_day_pane_fp_g1

0x7d1f,	// (0x00057592) list_single_cale_day_pane_fp_g2_ParamLimits

0x7d1f,	// (0x00057592) list_single_cale_day_pane_fp_g2

0x341a,	// (0x00052c8d) list_single_cale_day_pane_fp_g3_ParamLimits

0x341a,	// (0x00052c8d) list_single_cale_day_pane_fp_g3

0x3442,	// (0x00052cb5) list_single_cale_day_pane_fp_g4_ParamLimits

0x3442,	// (0x00052cb5) list_single_cale_day_pane_fp_g4

0x3466,	// (0x00052cd9) list_single_cale_day_pane_fp_g5_ParamLimits

0x3466,	// (0x00052cd9) list_single_cale_day_pane_fp_g5

0x0004,

0xfb83,	// (0x0005f3f6) list_single_cale_day_pane_fp_g_ParamLimits

0xfb83,	// (0x0005f3f6) list_single_cale_day_pane_fp_g

0x348a,	// (0x00052cfd) list_single_cale_day_pane_fp_t1_ParamLimits

0x348a,	// (0x00052cfd) list_single_cale_day_pane_fp_t1

0x34b0,	// (0x00052d23) list_single_cale_day_pane_fp_t2_ParamLimits

0x34b0,	// (0x00052d23) list_single_cale_day_pane_fp_t2

0x34c9,	// (0x00052d3c) list_single_cale_day_pane_fp_t3_ParamLimits

0x34c9,	// (0x00052d3c) list_single_cale_day_pane_fp_t3

0x0002,

0xfb8e,	// (0x0005f401) list_single_cale_day_pane_fp_t_ParamLimits

0xfb8e,	// (0x0005f401) list_single_cale_day_pane_fp_t

0x7d07,	// (0x0005757a) list_empty_pane_fp_g1_ParamLimits

0x7d07,	// (0x0005757a) list_empty_pane_fp_g1

0x34e2,	// (0x00052d55) list_empty_pane_fp_t1

0x34f0,	// (0x00052d63) list_empty_pane_fp_t2

0x0001,

0xfb95,	// (0x0005f408) list_empty_pane_fp_t

0x7d07,	// (0x0005757a) list_single_heading_pane_fp_g1_ParamLimits

0x7d07,	// (0x0005757a) list_single_heading_pane_fp_g1

0x3ba3,	// (0x00053416) list_single_heading_pane_fp_g2_ParamLimits

0x3ba3,	// (0x00053416) list_single_heading_pane_fp_g2

0x3c16,	// (0x00053489) list_single_heading_pane_fp_g3_ParamLimits

0x3c16,	// (0x00053489) list_single_heading_pane_fp_g3

0x0002,

0xfb9a,	// (0x0005f40d) list_single_heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x0005f40d) list_single_heading_pane_fp_g

0x34fe,	// (0x00052d71) list_single_heading_pane_fp_t1_ParamLimits

0x34fe,	// (0x00052d71) list_single_heading_pane_fp_t1

0x3510,	// (0x00052d83) list_single_heading_pane_fp_t2_ParamLimits

0x3510,	// (0x00052d83) list_single_heading_pane_fp_t2

0x0001,

0xfba1,	// (0x0005f414) list_single_heading_pane_fp_t_ParamLimits

0xfba1,	// (0x0005f414) list_single_heading_pane_fp_t

0x3dfe,	// (0x00053671) aid_size_cell_fast

0x2e89,	// (0x000526fc) soft_indicator_pane_cp1_t1

0x3e3b,	// (0x000536ae) cell_app_pane_cp2_ParamLimits

0x3e3b,	// (0x000536ae) cell_app_pane_cp2

0x1be1,	// (0x00051454) fep_hwr_candidate_drop_down_list_pane

0x1db9,	// (0x0005162c) fep_hwr_candidate_pane_g3_ParamLimits

0x1db9,	// (0x0005162c) fep_hwr_candidate_pane_g3

0xdeb0,	// (0x0005d723) fep_hwr_candidate_pane_g4_ParamLimits

0xdeb0,	// (0x0005d723) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x0005f383) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x0005f383) fep_hwr_candidate_pane_g

0x7804,	// (0x00057077) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7804,	// (0x00057077) fep_vkb_candidate_drop_down_list_pane

0x7c21,	// (0x00057494) fep_vkb_candidate_pane_g3

0x7c29,	// (0x0005749c) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x0005f3b0) fep_vkb_candidate_pane_g

0x1e24,	// (0x00051697) cell_hwr_candidate_pane_g1_ParamLimits

0x1e32,	// (0x000516a5) cell_hwr_candidate_pane_g3_ParamLimits

0x1e32,	// (0x000516a5) cell_hwr_candidate_pane_g3

0x876a,	// (0x00057fdd) cell_hwr_candidate_pane_g4_ParamLimits

0x876a,	// (0x00057fdd) cell_hwr_candidate_pane_g4

0x0002,

0xfb5c,	// (0x0005f3cf) cell_hwr_candidate_pane_g_ParamLimits

0xfb5c,	// (0x0005f3cf) cell_hwr_candidate_pane_g

0x7c40,	// (0x000574b3) cell_vkb_candidate_pane_g3_ParamLimits

0x7c40,	// (0x000574b3) cell_vkb_candidate_pane_g3

0x7c5b,	// (0x000574ce) cell_vkb_candidate_pane_g4_ParamLimits

0x7c5b,	// (0x000574ce) cell_vkb_candidate_pane_g4

0x7d2b,	// (0x0005759e) cell_app_pane_cp2_g1_ParamLimits

0x7d2b,	// (0x0005759e) cell_app_pane_cp2_g1

0x7d49,	// (0x000575bc) cell_app_pane_cp2_g2_ParamLimits

0x7d49,	// (0x000575bc) cell_app_pane_cp2_g2

0x0001,

0xfba6,	// (0x0005f419) cell_app_pane_cp2_g_ParamLimits

0xfba6,	// (0x0005f419) cell_app_pane_cp2_g

0x7d55,	// (0x000575c8) cell_app_pane_cp2_t1_ParamLimits

0x7d55,	// (0x000575c8) cell_app_pane_cp2_t1

0x3c08,	// (0x0005347b) grid_highlight_pane_cp1_ParamLimits

0x3c08,	// (0x0005347b) grid_highlight_pane_cp1

0x1e71,	// (0x000516e4) cell_hwr_candidate_pane_cp1_ParamLimits

0x1e71,	// (0x000516e4) cell_hwr_candidate_pane_cp1

0x1e24,	// (0x00051697) fep_hwr_candidate_drop_down_list_pane_g1

0x1e90,	// (0x00051703) fep_hwr_candidate_drop_down_list_pane_g2

0x1e9d,	// (0x00051710) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbab,	// (0x0005f41e) fep_hwr_candidate_drop_down_list_pane_g

0x1eaa,	// (0x0005171d) fep_hwr_candidate_drop_down_list_scroll_pane

0x1eb3,	// (0x00051726) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1eb3,	// (0x00051726) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1ec0,	// (0x00051733) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1ec0,	// (0x00051733) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1ecd,	// (0x00051740) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1ecd,	// (0x00051740) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1eda,	// (0x0005174d) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1eda,	// (0x0005174d) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1ef5,	// (0x00051768) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1ef5,	// (0x00051768) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1f10,	// (0x00051783) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1f10,	// (0x00051783) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1f2b,	// (0x0005179e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1f2b,	// (0x0005179e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1f46,	// (0x000517b9) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1f46,	// (0x000517b9) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb2,	// (0x0005f425) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb2,	// (0x0005f425) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7d67,	// (0x000575da) cell_vkb_candidate_pane_cp1_ParamLimits

0x7d67,	// (0x000575da) cell_vkb_candidate_pane_cp1

0x791d,	// (0x00057190) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x791d,	// (0x00057190) fep_vkb_candidate_drop_down_list_pane_g1

0x7d87,	// (0x000575fa) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7d87,	// (0x000575fa) fep_vkb_candidate_drop_down_list_pane_g2

0x7d94,	// (0x00057607) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7d94,	// (0x00057607) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x0005f436) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc3,	// (0x0005f436) fep_vkb_candidate_drop_down_list_pane_g

0x7da1,	// (0x00057614) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7da1,	// (0x00057614) fep_vkb_candidate_drop_down_list_scroll_pane

0x7dae,	// (0x00057621) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7dae,	// (0x00057621) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7dbb,	// (0x0005762e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7dbb,	// (0x0005762e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7dc7,	// (0x0005763a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7dc7,	// (0x0005763a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7dd3,	// (0x00057646) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7dd3,	// (0x00057646) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7df4,	// (0x00057667) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7df4,	// (0x00057667) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7e15,	// (0x00057688) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7e15,	// (0x00057688) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7e36,	// (0x000576a9) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7e36,	// (0x000576a9) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7e57,	// (0x000576ca) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7e57,	// (0x000576ca) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x0005f43d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x0005f43d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xcc66,	// (0x0005c4d9) title_pane_g1_ParamLimits

0xcc79,	// (0x0005c4ec) title_pane_g2_ParamLimits

0xf54e,	// (0x0005edc1) title_pane_g_ParamLimits

0x426f,	// (0x00053ae2) aid_call2_pane

0x4277,	// (0x00053aea) aid_call_pane

0x427f,	// (0x00053af2) popup_clock_analogue_window_g1

0x427f,	// (0x00053af2) popup_clock_analogue_window_g2

0x099a,	// (0x0005020d) popup_clock_analogue_window_g3

0x09a3,	// (0x00050216) popup_clock_analogue_window_g4

0x2ba6,	// (0x00052419) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0005ef70) popup_clock_analogue_window_g

0x09ab,	// (0x0005021e) popup_clock_analogue_window_t1

0x09b9,	// (0x0005022c) clock_digital_number_pane_ParamLimits

0x09b9,	// (0x0005022c) clock_digital_number_pane

0x09c5,	// (0x00050238) clock_digital_number_pane_cp02_ParamLimits

0x09c5,	// (0x00050238) clock_digital_number_pane_cp02

0x09d1,	// (0x00050244) clock_digital_number_pane_cp03_ParamLimits

0x09d1,	// (0x00050244) clock_digital_number_pane_cp03

0x09dd,	// (0x00050250) clock_digital_number_pane_cp04_ParamLimits

0x09dd,	// (0x00050250) clock_digital_number_pane_cp04

0x09e9,	// (0x0005025c) clock_digital_separator_pane_ParamLimits

0x09e9,	// (0x0005025c) clock_digital_separator_pane

0x09f5,	// (0x00050268) popup_clock_digital_window_t1_ParamLimits

0x09f5,	// (0x00050268) popup_clock_digital_window_t1

0x2ba6,	// (0x00052419) clock_digital_number_pane_g1

0x2ba6,	// (0x00052419) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0005ef7b) clock_digital_number_pane_g

0x2ba6,	// (0x00052419) clock_digital_separator_pane_g1

0x2ba6,	// (0x00052419) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0005ef7b) clock_digital_separator_pane_g

0xd331,	// (0x0005cba4) aid_fill_nsta_ParamLimits

0xd467,	// (0x0005ccda) indicator_nsta_pane_ParamLimits

0x4eb1,	// (0x00054724) popup_clock_analogue_window

0x4eb1,	// (0x00054724) popup_clock_digital_window

0x3dbf,	// (0x00053632) grid_indicator_nsta_pane_ParamLimits

0x709c,	// (0x0005690f) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x0005f303) clock_nsta_pane_t

0x095e,	// (0x000501d1) aid_size_max_handle

0xbb44,	// (0x0005b3b7) aid_size_min_handle

0x4892,	// (0x00054105) editor_scroll_pane

0x7e72,	// (0x000576e5) ex_editor_pane

0x3d6c,	// (0x000535df) scroll_pane_cp13

0x3b9b,	// (0x0005340e) scroll_pane_cp14

0x42ae,	// (0x00053b21) scroll_pane_cp36

0xd0f0,	// (0x0005c963) list_single_graphic_hl_pane_cp2_ParamLimits

0xd0f0,	// (0x0005c963) list_single_graphic_hl_pane_cp2

0xd744,	// (0x0005cfb7) list_single_graphic_hl_pane_ParamLimits

0xd744,	// (0x0005cfb7) list_single_graphic_hl_pane

0x3526,	// (0x00052d99) aid_size_min_hl_cp1

0x7e7a,	// (0x000576ed) list_highlight_pane_cp34_ParamLimits

0x7e7a,	// (0x000576ed) list_highlight_pane_cp34

0x7e8b,	// (0x000576fe) list_single_graphic_hl_pane_g1_ParamLimits

0x7e8b,	// (0x000576fe) list_single_graphic_hl_pane_g1

0xc562,	// (0x0005bdd5) list_single_graphic_hl_pane_g2_ParamLimits

0xc562,	// (0x0005bdd5) list_single_graphic_hl_pane_g2

0xc562,	// (0x0005bdd5) list_single_graphic_hl_pane_g3_ParamLimits

0xc562,	// (0x0005bdd5) list_single_graphic_hl_pane_g3

0x4803,	// (0x00054076) list_single_graphic_hl_pane_g4_ParamLimits

0x4803,	// (0x00054076) list_single_graphic_hl_pane_g4

0x353b,	// (0x00052dae) list_single_graphic_hl_pane_g5_ParamLimits

0x353b,	// (0x00052dae) list_single_graphic_hl_pane_g5

0x0004,

0xfbdb,	// (0x0005f44e) list_single_graphic_hl_pane_g_ParamLimits

0xfbdb,	// (0x0005f44e) list_single_graphic_hl_pane_g

0xc56e,	// (0x0005bde1) list_single_graphic_hl_pane_t1_ParamLimits

0xc56e,	// (0x0005bde1) list_single_graphic_hl_pane_t1

0x7e98,	// (0x0005770b) aid_size_min_hl_cp2

0x7ea1,	// (0x00057714) list_highlight_pane_cp34_cp2_ParamLimits

0x7ea1,	// (0x00057714) list_highlight_pane_cp34_cp2

0x7e8b,	// (0x000576fe) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7e8b,	// (0x000576fe) list_single_graphic_hl_pane_g1_cp2

0x7eae,	// (0x00057721) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7eae,	// (0x00057721) list_single_graphic_hl_pane_g2_cp2

0x7eba,	// (0x0005772d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7eba,	// (0x0005772d) list_single_graphic_hl_pane_g3_cp2

0x7bb7,	// (0x0005742a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7bb7,	// (0x0005742a) list_single_graphic_hl_pane_g4_cp2

0x7ec8,	// (0x0005773b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7ec8,	// (0x0005773b) list_single_graphic_hl_pane_g5_cp2

0xbc2b,	// (0x0005b49e) control_pane_g4_ParamLimits

0xbc2b,	// (0x0005b49e) control_pane_g4

0x4bd0,	// (0x00054443) bg_popup_sub_pane_cp10_ParamLimits

0x76a9,	// (0x00056f1c) list_choice_list_pane_ParamLimits

0x76b8,	// (0x00056f2b) scroll_pane_cp23

0x2f19,	// (0x0005278c) bg_popup_preview_window_pane_cp02_ParamLimits

0x7cac,	// (0x0005751f) list_preview_fixed_pane_ParamLimits

0x7cc2,	// (0x00057535) list_preview_fixed_pane_cp_ParamLimits

0x7cc2,	// (0x00057535) list_preview_fixed_pane_cp

0x7cce,	// (0x00057541) popup_preview_fixed_window_g1_ParamLimits

0x7cce,	// (0x00057541) popup_preview_fixed_window_g1

0x7cda,	// (0x0005754d) popup_preview_fixed_window_g2_ParamLimits

0x7cda,	// (0x0005754d) popup_preview_fixed_window_g2

0x0002,

0xfb63,	// (0x0005f3d6) popup_preview_fixed_window_g_ParamLimits

0xfb63,	// (0x0005f3d6) popup_preview_fixed_window_g

0x08d2,	// (0x00050145) aid_navi_side_left_pane_ParamLimits

0x08e7,	// (0x0005015a) aid_navi_side_right_pane_ParamLimits

0x08ff,	// (0x00050172) navi_icon_pane_stacon_ParamLimits

0x0913,	// (0x00050186) navi_navi_pane_stacon_ParamLimits

0x08ff,	// (0x00050172) navi_text_pane_stacon_ParamLimits

0xf43b,	// (0x0005ecae) main_text_info_pane

0x7ef2,	// (0x00057765) listscroll_text_info_pane

0x7efa,	// (0x0005776d) list_text_info_pane_ParamLimits

0x7efa,	// (0x0005776d) list_text_info_pane

0x7f09,	// (0x0005777c) scroll_pane_cp24_ParamLimits

0x7f09,	// (0x0005777c) scroll_pane_cp24

0xe047,	// (0x0005d8ba) list_text_info_pane_t1_ParamLimits

0xe047,	// (0x0005d8ba) list_text_info_pane_t1

0xbd86,	// (0x0005b5f9) popup_fast_swap2_window_ParamLimits

0xbd86,	// (0x0005b5f9) popup_fast_swap2_window

0x7f58,	// (0x000577cb) aid_size_cell_fast2

0x2b9c,	// (0x0005240f) bg_popup_window_pane_cp17

0x5538,	// (0x00054dab) heading_pane_cp2

0x3865,	// (0x000530d8) listscroll_fast2_pane

0x7f62,	// (0x000577d5) grid_fast2_pane

0x7f6c,	// (0x000577df) listscroll_fast2_pane_g1

0x7f74,	// (0x000577e7) listscroll_fast2_pane_g2

0x0001,

0xfbe6,	// (0x0005f459) listscroll_fast2_pane_g

0x3d6c,	// (0x000535df) scroll_pane_cp26

0x7f7e,	// (0x000577f1) cell_fast2_pane_ParamLimits

0x7f7e,	// (0x000577f1) cell_fast2_pane

0x7f93,	// (0x00057806) cell_fast2_pane_g1

0x7f9c,	// (0x0005780f) cell_fast2_pane_g2

0x7fa5,	// (0x00057818) cell_fast2_pane_g3

0x0002,

0xfbeb,	// (0x0005f45e) cell_fast2_pane_g

0x3958,	// (0x000531cb) grid_highlight_pane_cp9

0x0e49,	// (0x000506bc) main_eswt_pane_ParamLimits

0x0e49,	// (0x000506bc) main_eswt_pane

0x7f1e,	// (0x00057791) list_single_text_info_pane

0x7fad,	// (0x00057820) eswt_ctrl_button_pane

0x7fad,	// (0x00057820) eswt_ctrl_canvas_pane

0x7fb5,	// (0x00057828) eswt_ctrl_combo_pane

0x7fad,	// (0x00057820) eswt_ctrl_default_pane

0x7fad,	// (0x00057820) eswt_ctrl_label_pane

0x7fbd,	// (0x00057830) eswt_ctrl_wait_pane

0x7fc5,	// (0x00057838) eswt_shell_pane

0x2b9c,	// (0x0005240f) listscroll_eswt_app_pane

0x7fe5,	// (0x00057858) popup_eswt_tasktip_window_ParamLimits

0x7fe5,	// (0x00057858) popup_eswt_tasktip_window

0x514e,	// (0x000549c1) bg_popup_window_pane_cp18

0x7ff6,	// (0x00057869) eswt_control_pane_g1_ParamLimits

0x7ff6,	// (0x00057869) eswt_control_pane_g1

0x8003,	// (0x00057876) eswt_control_pane_g2_ParamLimits

0x8003,	// (0x00057876) eswt_control_pane_g2

0x8010,	// (0x00057883) eswt_control_pane_g3_ParamLimits

0x8010,	// (0x00057883) eswt_control_pane_g3

0x801d,	// (0x00057890) eswt_control_pane_g4_ParamLimits

0x801d,	// (0x00057890) eswt_control_pane_g4

0x0003,

0xfbf2,	// (0x0005f465) eswt_control_pane_g_ParamLimits

0xfbf2,	// (0x0005f465) eswt_control_pane_g

0x3c08,	// (0x0005347b) bg_button_pane_ParamLimits

0x3c08,	// (0x0005347b) bg_button_pane

0x396d,	// (0x000531e0) common_borders_pane_copy2_ParamLimits

0x396d,	// (0x000531e0) common_borders_pane_copy2

0x802a,	// (0x0005789d) control_button_pane_g1_ParamLimits

0x802a,	// (0x0005789d) control_button_pane_g1

0x8036,	// (0x000578a9) control_button_pane_g2_ParamLimits

0x8036,	// (0x000578a9) control_button_pane_g2

0x8042,	// (0x000578b5) control_button_pane_g3_ParamLimits

0x8042,	// (0x000578b5) control_button_pane_g3

0x0002,

0xfbfb,	// (0x0005f46e) control_button_pane_g_ParamLimits

0xfbfb,	// (0x0005f46e) control_button_pane_g

0x8056,	// (0x000578c9) control_button_pane_t1

0x8064,	// (0x000578d7) control_button_pane_t2

0x0001,

0xfc02,	// (0x0005f475) control_button_pane_t

0x50da,	// (0x0005494d) bg_button_pane_g1

0x50ea,	// (0x0005495d) bg_button_pane_g2

0x50e2,	// (0x00054955) bg_button_pane_g3

0x50fa,	// (0x0005496d) bg_button_pane_g4

0x50f2,	// (0x00054965) bg_button_pane_g5

0x5102,	// (0x00054975) bg_button_pane_g6

0x510a,	// (0x0005497d) bg_button_pane_g7

0x511a,	// (0x0005498d) bg_button_pane_g8

0x5112,	// (0x00054985) bg_button_pane_g9

0x0008,

0xf866,	// (0x0005f0d9) bg_button_pane_g

0x7664,	// (0x00056ed7) common_borders_pane_ParamLimits

0x7664,	// (0x00056ed7) common_borders_pane

0x7ff6,	// (0x00057869) eswt_control_pane_g1_copy1_ParamLimits

0x7ff6,	// (0x00057869) eswt_control_pane_g1_copy1

0x8003,	// (0x00057876) eswt_control_pane_g2_copy1_ParamLimits

0x8003,	// (0x00057876) eswt_control_pane_g2_copy1

0x8010,	// (0x00057883) eswt_control_pane_g3_copy1_ParamLimits

0x8010,	// (0x00057883) eswt_control_pane_g3_copy1

0x801d,	// (0x00057890) eswt_control_pane_g4_copy1_ParamLimits

0x801d,	// (0x00057890) eswt_control_pane_g4_copy1

0x769f,	// (0x00056f12) bg_eswt_ctrl_canvas_pane_g1

0x7664,	// (0x00056ed7) common_borders_pane_cp2_ParamLimits

0x7664,	// (0x00056ed7) common_borders_pane_cp2

0x7664,	// (0x00056ed7) common_borders_pane_cp3_ParamLimits

0x7664,	// (0x00056ed7) common_borders_pane_cp3

0x8072,	// (0x000578e5) separator_horizontal_pane

0x807a,	// (0x000578ed) separator_vertical_pane

0x7ff6,	// (0x00057869) eswt_control_pane_g1_copy2_ParamLimits

0x7ff6,	// (0x00057869) eswt_control_pane_g1_copy2

0x8003,	// (0x00057876) eswt_control_pane_g2_copy2_ParamLimits

0x8003,	// (0x00057876) eswt_control_pane_g2_copy2

0x8010,	// (0x00057883) eswt_control_pane_g3_copy2_ParamLimits

0x8010,	// (0x00057883) eswt_control_pane_g3_copy2

0x801d,	// (0x00057890) eswt_control_pane_g4_copy2_ParamLimits

0x801d,	// (0x00057890) eswt_control_pane_g4_copy2

0x2b9c,	// (0x0005240f) common_borders_pane_cp4

0x8083,	// (0x000578f6) separator_horizontal_pane_g1

0x808c,	// (0x000578ff) separator_horizontal_pane_g2

0x8095,	// (0x00057908) separator_horizontal_pane_g3

0x0002,

0xfc07,	// (0x0005f47a) separator_horizontal_pane_g

0x7ff6,	// (0x00057869) eswt_control_pane_g1_copy3_ParamLimits

0x7ff6,	// (0x00057869) eswt_control_pane_g1_copy3

0x8003,	// (0x00057876) eswt_control_pane_g2_copy3_ParamLimits

0x8003,	// (0x00057876) eswt_control_pane_g2_copy3

0x8010,	// (0x00057883) eswt_control_pane_g3_copy3_ParamLimits

0x8010,	// (0x00057883) eswt_control_pane_g3_copy3

0x801d,	// (0x00057890) eswt_control_pane_g4_copy3_ParamLimits

0x801d,	// (0x00057890) eswt_control_pane_g4_copy3

0x2b9c,	// (0x0005240f) common_borders_pane_cp5

0x809e,	// (0x00057911) separator_vertical_pane_g1

0x80a7,	// (0x0005791a) separator_vertical_pane_g2

0x80b0,	// (0x00057923) separator_vertical_pane_g3

0x0002,

0xfc0e,	// (0x0005f481) separator_vertical_pane_g

0x7ff6,	// (0x00057869) eswt_control_pane_g1_copy4_ParamLimits

0x7ff6,	// (0x00057869) eswt_control_pane_g1_copy4

0x8003,	// (0x00057876) eswt_control_pane_g2_copy4_ParamLimits

0x8003,	// (0x00057876) eswt_control_pane_g2_copy4

0x8010,	// (0x00057883) eswt_control_pane_g3_copy4_ParamLimits

0x8010,	// (0x00057883) eswt_control_pane_g3_copy4

0x801d,	// (0x00057890) eswt_control_pane_g4_copy4_ParamLimits

0x801d,	// (0x00057890) eswt_control_pane_g4_copy4

0xe062,	// (0x0005d8d5) eswt_ctrl_combo_button_pane

0xe06a,	// (0x0005d8dd) eswt_ctrl_input_pane

0xe072,	// (0x0005d8e5) popup_choice_list_window_cp70

0xe07a,	// (0x0005d8ed) eswt_ctrl_input_pane_t1

0x2b9c,	// (0x0005240f) input_focus_pane_cp70

0x7664,	// (0x00056ed7) bg_button_pane_cp70_ParamLimits

0x7664,	// (0x00056ed7) bg_button_pane_cp70

0xe088,	// (0x0005d8fb) eswt_ctrl_combo_button_pane_g1

0x80e7,	// (0x0005795a) wait_bar_pane_cp70

0x514e,	// (0x000549c1) bg_popup_window_pane_cp70_ParamLimits

0x514e,	// (0x000549c1) bg_popup_window_pane_cp70

0x80ef,	// (0x00057962) popup_eswt_tasktip_window_t1

0x8105,	// (0x00057978) wait_bar_pane_cp71_ParamLimits

0x8105,	// (0x00057978) wait_bar_pane_cp71

0x8111,	// (0x00057984) grid_eswt_app_pane

0x4088,	// (0x000538fb) scroll_pane_cp70

0xe090,	// (0x0005d903) cell_eswt_app_pane_ParamLimits

0xe090,	// (0x0005d903) cell_eswt_app_pane

0xe0ba,	// (0x0005d92d) cell_eswt_app_pane_g1_ParamLimits

0xe0ba,	// (0x0005d92d) cell_eswt_app_pane_g1

0xe0e9,	// (0x0005d95c) cell_eswt_app_pane_g2_ParamLimits

0xe0e9,	// (0x0005d95c) cell_eswt_app_pane_g2

0x0001,

0xfc15,	// (0x0005f488) cell_eswt_app_pane_g_ParamLimits

0xfc15,	// (0x0005f488) cell_eswt_app_pane_g

0xe112,	// (0x0005d985) cell_eswt_app_pane_t1_ParamLimits

0xe112,	// (0x0005d985) cell_eswt_app_pane_t1

0x81d4,	// (0x00057a47) grid_highlight_pane_cp70_ParamLimits

0x81d4,	// (0x00057a47) grid_highlight_pane_cp70

0x4767,	// (0x00053fda) set_content_pane_g1

0xd2e6,	// (0x0005cb59) status_small_volume_pane

0x1f61,	// (0x000517d4) status_small_volume_pane_g1

0x1f69,	// (0x000517dc) volume_small2_pane

0x1f72,	// (0x000517e5) volume_small2_pane_g1

0x1f7b,	// (0x000517ee) volume_small2_pane_g2

0x1f84,	// (0x000517f7) volume_small2_pane_g3

0x1f8d,	// (0x00051800) volume_small2_pane_g4

0x1f96,	// (0x00051809) volume_small2_pane_g5

0x1f9f,	// (0x00051812) volume_small2_pane_g6

0x1fa8,	// (0x0005181b) volume_small2_pane_g7

0x1fb1,	// (0x00051824) volume_small2_pane_g8

0x1fba,	// (0x0005182d) volume_small2_pane_g9

0x1fc3,	// (0x00051836) volume_small2_pane_g10

0x0009,

0xfc1a,	// (0x0005f48d) volume_small2_pane_g

0x7a65,	// (0x000572d8) fep_vkb_top_text_pane_g1_ParamLimits

0xdfef,	// (0x0005d862) fep_vkb_top_text_pane_t1_ParamLimits

0x7ce6,	// (0x00057559) popup_preview_fixed_window_g3_ParamLimits

0x7ce6,	// (0x00057559) popup_preview_fixed_window_g3

0xc3a9,	// (0x0005bc1c) popup_toolbar_trans_pane

0xda0d,	// (0x0005d280) aid_height_set_list_ParamLimits

0x64ba,	// (0x00055d2d) aid_size_parent_ParamLimits

0x4bd0,	// (0x00054443) list_highlight_pane_cp2_ParamLimits

0x4767,	// (0x00053fda) set_content_pane_g1_ParamLimits

0xd755,	// (0x0005cfc8) list_single_image_pane_ParamLimits

0xd755,	// (0x0005cfc8) list_single_image_pane

0xe144,	// (0x0005d9b7) aid_size_cell_image_ParamLimits

0xe144,	// (0x0005d9b7) aid_size_cell_image

0xe151,	// (0x0005d9c4) grid_single_image_pane_ParamLimits

0xe151,	// (0x0005d9c4) grid_single_image_pane

0x596c,	// (0x000551df) list_single_image_pane_g1_ParamLimits

0x596c,	// (0x000551df) list_single_image_pane_g1

0x81f9,	// (0x00057a6c) list_single_image_pane_g2_ParamLimits

0x81f9,	// (0x00057a6c) list_single_image_pane_g2

0x0001,

0xfc2f,	// (0x0005f4a2) list_single_image_pane_g_ParamLimits

0xfc2f,	// (0x0005f4a2) list_single_image_pane_g

0x820d,	// (0x00057a80) list_single_image_pane_t1_ParamLimits

0x820d,	// (0x00057a80) list_single_image_pane_t1

0xe15f,	// (0x0005d9d2) cell_image_list_pane_ParamLimits

0xe15f,	// (0x0005d9d2) cell_image_list_pane

0xe175,	// (0x0005d9e8) cell_image_list_pane_g1

0xe17e,	// (0x0005d9f1) cell_image_list_pane_g2

0x0001,

0xfc34,	// (0x0005f4a7) cell_image_list_pane_g

0x8249,	// (0x00057abc) aid_size_cell_tb_trans_pane

0x3c08,	// (0x0005347b) bg_tb_trans_pane

0x825b,	// (0x00057ace) grid_tb_trans_pane

0x50da,	// (0x0005494d) bg_tb_trans_pane_g1

0x50ea,	// (0x0005495d) bg_tb_trans_pane_g2

0x50e2,	// (0x00054955) bg_tb_trans_pane_g3

0x50fa,	// (0x0005496d) bg_tb_trans_pane_g4

0x50f2,	// (0x00054965) bg_tb_trans_pane_g5

0x511a,	// (0x0005498d) bg_tb_trans_pane_g6

0x5112,	// (0x00054985) bg_tb_trans_pane_g7

0x5102,	// (0x00054975) bg_tb_trans_pane_g8

0x510a,	// (0x0005497d) bg_tb_trans_pane_g9

0x0008,

0xfc39,	// (0x0005f4ac) bg_tb_trans_pane_g

0x826f,	// (0x00057ae2) cell_toolbar_trans_pane_ParamLimits

0x826f,	// (0x00057ae2) cell_toolbar_trans_pane

0x769f,	// (0x00056f12) cell_toolbar_trans_pane_g1

0xddcb,	// (0x0005d63e) list_form2_midp_pane_t1

0xddd9,	// (0x0005d64c) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x0005f349) list_form2_midp_pane_t

0x7285,	// (0x00056af8) scroll_pane_cp51_ParamLimits

0x7441,	// (0x00056cb4) form2_midp_wait_pane_g1

0x744a,	// (0x00056cbd) form2_midp_wait_pane_g2

0x7453,	// (0x00056cc6) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x0005f35e) form2_midp_wait_pane_g

0x2c90,	// (0x00052503) list_highlight_pane_cp21_ParamLimits

0x74aa,	// (0x00056d1d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x74b9,	// (0x00056d2c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6672,	// (0x00055ee5) list_single_2graphic_im_pane_ParamLimits

0x6672,	// (0x00055ee5) list_single_2graphic_im_pane

0xe187,	// (0x0005d9fa) list_single_2graphic_im_pane_g1_ParamLimits

0xe187,	// (0x0005d9fa) list_single_2graphic_im_pane_g1

0xe198,	// (0x0005da0b) list_single_2graphic_im_pane_g2_ParamLimits

0xe198,	// (0x0005da0b) list_single_2graphic_im_pane_g2

0xe1a4,	// (0x0005da17) list_single_2graphic_im_pane_g3_ParamLimits

0xe1a4,	// (0x0005da17) list_single_2graphic_im_pane_g3

0x0003,

0xfc4c,	// (0x0005f4bf) list_single_2graphic_im_pane_g_ParamLimits

0xfc4c,	// (0x0005f4bf) list_single_2graphic_im_pane_g

0xe1b8,	// (0x0005da2b) list_single_2graphic_im_pane_t1_ParamLimits

0xe1b8,	// (0x0005da2b) list_single_2graphic_im_pane_t1

0x7cf2,	// (0x00057565) list_single_graphic_2heading_pane_fp_ParamLimits

0x7cf2,	// (0x00057565) list_single_graphic_2heading_pane_fp

0x3398,	// (0x00052c0b) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3398,	// (0x00052c0b) list_single_graphic_2heading_pane_fp_g1

0x7d07,	// (0x0005757a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7d07,	// (0x0005757a) list_single_graphic_2heading_pane_fp_g2

0x3ba3,	// (0x00053416) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3ba3,	// (0x00053416) list_single_graphic_2heading_pane_fp_g3

0x3c16,	// (0x00053489) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3c16,	// (0x00053489) list_single_graphic_2heading_pane_fp_g4

0x7d13,	// (0x00057586) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7d13,	// (0x00057586) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb73,	// (0x0005f3e6) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb73,	// (0x0005f3e6) list_single_graphic_2heading_pane_fp_g

0x3565,	// (0x00052dd8) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x3565,	// (0x00052dd8) list_single_graphic_2heading_pane_fp_t1

0x33d0,	// (0x00052c43) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x33d0,	// (0x00052c43) list_single_graphic_2heading_pane_fp_t2

0x357b,	// (0x00052dee) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x357b,	// (0x00052dee) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc55,	// (0x0005f4c8) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc55,	// (0x0005f4c8) list_single_graphic_2heading_pane_fp_t

0x772b,	// (0x00056f9e) fep_hwr_write_pane_g5_ParamLimits

0x772b,	// (0x00056f9e) fep_hwr_write_pane_g5

0x7737,	// (0x00056faa) fep_hwr_write_pane_g6_ParamLimits

0x7737,	// (0x00056faa) fep_hwr_write_pane_g6

0x7fc5,	// (0x00057838) eswt_shell_pane_ParamLimits

0x514e,	// (0x000549c1) bg_popup_window_pane_cp18_ParamLimits

0x6402,	// (0x00055c75) heading_pane_cp70

0x80ef,	// (0x00057962) popup_eswt_tasktip_window_t1_ParamLimits

0xd38c,	// (0x0005cbff) aid_touch_tab_arrow_left

0xd3a2,	// (0x0005cc15) aid_touch_tab_arrow_right

0xcc91,	// (0x0005c504) title_pane_g3_ParamLimits

0xcc91,	// (0x0005c504) title_pane_g3

0x3bc7,	// (0x0005343a) set_value_pane_g1

0xc3a9,	// (0x0005bc1c) popup_toolbar_trans_pane_ParamLimits

0x8249,	// (0x00057abc) aid_size_cell_tb_trans_pane_ParamLimits

0x3c08,	// (0x0005347b) bg_tb_trans_pane_ParamLimits

0x825b,	// (0x00057ace) grid_tb_trans_pane_ParamLimits

0x2f19,	// (0x0005278c) cont_note_pane_ParamLimits

0x2f19,	// (0x0005278c) cont_note_pane

0x396d,	// (0x000531e0) cont_snote2_single_text_pane_ParamLimits

0x396d,	// (0x000531e0) cont_snote2_single_text_pane

0x396d,	// (0x000531e0) cont_snote2_single_graphic_pane_ParamLimits

0x396d,	// (0x000531e0) cont_snote2_single_graphic_pane

0x5753,	// (0x00054fc6) cont_note_wait_pane_ParamLimits

0x5753,	// (0x00054fc6) cont_note_wait_pane

0x5753,	// (0x00054fc6) cont_note_image_pane_ParamLimits

0x5753,	// (0x00054fc6) cont_note_image_pane

0x8303,	// (0x00057b76) popup_note2_window_g1_ParamLimits

0x8303,	// (0x00057b76) popup_note2_window_g1

0x8334,	// (0x00057ba7) popup_note2_window_t1_ParamLimits

0x8334,	// (0x00057ba7) popup_note2_window_t1

0x8379,	// (0x00057bec) popup_note2_window_t2_ParamLimits

0x8379,	// (0x00057bec) popup_note2_window_t2

0x83be,	// (0x00057c31) popup_note2_window_t3_ParamLimits

0x83be,	// (0x00057c31) popup_note2_window_t3

0x8403,	// (0x00057c76) popup_note2_window_t4_ParamLimits

0x8403,	// (0x00057c76) popup_note2_window_t4

0x2f9d,	// (0x00052810) popup_note2_window_t5_ParamLimits

0x2f9d,	// (0x00052810) popup_note2_window_t5

0x0004,

0xfc61,	// (0x0005f4d4) popup_note2_window_t_ParamLimits

0xfc61,	// (0x0005f4d4) popup_note2_window_t

0x8432,	// (0x00057ca5) popup_note2_image_window_g1_ParamLimits

0x8432,	// (0x00057ca5) popup_note2_image_window_g1

0x843e,	// (0x00057cb1) popup_note2_image_window_g2_ParamLimits

0x843e,	// (0x00057cb1) popup_note2_image_window_g2

0x0001,

0xfc6c,	// (0x0005f4df) popup_note2_image_window_g_ParamLimits

0xfc6c,	// (0x0005f4df) popup_note2_image_window_g

0x8450,	// (0x00057cc3) popup_note2_image_window_t1_ParamLimits

0x8450,	// (0x00057cc3) popup_note2_image_window_t1

0x8468,	// (0x00057cdb) popup_note2_image_window_t2_ParamLimits

0x8468,	// (0x00057cdb) popup_note2_image_window_t2

0x8480,	// (0x00057cf3) popup_note2_image_window_t3_ParamLimits

0x8480,	// (0x00057cf3) popup_note2_image_window_t3

0x0002,

0xfc71,	// (0x0005f4e4) popup_note2_image_window_t_ParamLimits

0xfc71,	// (0x0005f4e4) popup_note2_image_window_t

0x5761,	// (0x00054fd4) popup_note2_wait_window_g1_ParamLimits

0x5761,	// (0x00054fd4) popup_note2_wait_window_g1

0x849c,	// (0x00057d0f) popup_note2_wait_window_g2_ParamLimits

0x849c,	// (0x00057d0f) popup_note2_wait_window_g2

0x5779,	// (0x00054fec) popup_note2_wait_window_g3_ParamLimits

0x5779,	// (0x00054fec) popup_note2_wait_window_g3

0x0002,

0xfc78,	// (0x0005f4eb) popup_note2_wait_window_g_ParamLimits

0xfc78,	// (0x0005f4eb) popup_note2_wait_window_g

0x84a8,	// (0x00057d1b) popup_note2_wait_window_t1_ParamLimits

0x84a8,	// (0x00057d1b) popup_note2_wait_window_t1

0x84c6,	// (0x00057d39) popup_note2_wait_window_t2_ParamLimits

0x84c6,	// (0x00057d39) popup_note2_wait_window_t2

0x84e4,	// (0x00057d57) popup_note2_wait_window_t3_ParamLimits

0x84e4,	// (0x00057d57) popup_note2_wait_window_t3

0x84f6,	// (0x00057d69) popup_note2_wait_window_t4_ParamLimits

0x84f6,	// (0x00057d69) popup_note2_wait_window_t4

0x0003,

0xfc7f,	// (0x0005f4f2) popup_note2_wait_window_t_ParamLimits

0xfc7f,	// (0x0005f4f2) popup_note2_wait_window_t

0x8508,	// (0x00057d7b) wait_bar2_pane_ParamLimits

0x8508,	// (0x00057d7b) wait_bar2_pane

0x8520,	// (0x00057d93) popup_snote2_single_text_window_g1_ParamLimits

0x8520,	// (0x00057d93) popup_snote2_single_text_window_g1

0x8548,	// (0x00057dbb) popup_snote2_single_text_window_t1_ParamLimits

0x8548,	// (0x00057dbb) popup_snote2_single_text_window_t1

0x8594,	// (0x00057e07) popup_snote2_single_text_window_t2_ParamLimits

0x8594,	// (0x00057e07) popup_snote2_single_text_window_t2

0x85e0,	// (0x00057e53) popup_snote2_single_text_window_t3_ParamLimits

0x85e0,	// (0x00057e53) popup_snote2_single_text_window_t3

0x8621,	// (0x00057e94) popup_snote2_single_text_window_t4_ParamLimits

0x8621,	// (0x00057e94) popup_snote2_single_text_window_t4

0x8657,	// (0x00057eca) popup_snote2_single_text_window_t5_ParamLimits

0x8657,	// (0x00057eca) popup_snote2_single_text_window_t5

0x0004,

0xfc88,	// (0x0005f4fb) popup_snote2_single_text_window_t_ParamLimits

0xfc88,	// (0x0005f4fb) popup_snote2_single_text_window_t

0x8682,	// (0x00057ef5) popup_snote2_single_graphic_window_g1_ParamLimits

0x8682,	// (0x00057ef5) popup_snote2_single_graphic_window_g1

0x86aa,	// (0x00057f1d) popup_snote2_single_graphic_window_g2_ParamLimits

0x86aa,	// (0x00057f1d) popup_snote2_single_graphic_window_g2

0x0001,

0xfc93,	// (0x0005f506) popup_snote2_single_graphic_window_g_ParamLimits

0xfc93,	// (0x0005f506) popup_snote2_single_graphic_window_g

0x86d2,	// (0x00057f45) popup_snote2_single_graphic_window_t1_ParamLimits

0x86d2,	// (0x00057f45) popup_snote2_single_graphic_window_t1

0x871e,	// (0x00057f91) popup_snote2_single_graphic_window_t2_ParamLimits

0x871e,	// (0x00057f91) popup_snote2_single_graphic_window_t2

0x85e0,	// (0x00057e53) popup_snote2_single_graphic_window_t3_ParamLimits

0x85e0,	// (0x00057e53) popup_snote2_single_graphic_window_t3

0x8621,	// (0x00057e94) popup_snote2_single_graphic_window_t4_ParamLimits

0x8621,	// (0x00057e94) popup_snote2_single_graphic_window_t4

0x8657,	// (0x00057eca) popup_snote2_single_graphic_window_t5_ParamLimits

0x8657,	// (0x00057eca) popup_snote2_single_graphic_window_t5

0x0004,

0xfc98,	// (0x0005f50b) popup_snote2_single_graphic_window_t_ParamLimits

0xfc98,	// (0x0005f50b) popup_snote2_single_graphic_window_t

0x7146,	// (0x000569b9) clock_nsta_pane_cp2_t1

0x7146,	// (0x000569b9) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x0005f31f) clock_nsta_pane_cp2_t

0x0650,	// (0x0004fec3) form_field_data_wide_pane_g1_ParamLimits

0x3ba3,	// (0x00053416) form_field_data_wide_pane_g2_ParamLimits

0x3ba3,	// (0x00053416) form_field_data_wide_pane_g2

0x3c16,	// (0x00053489) form_field_data_wide_pane_g3_ParamLimits

0x3c16,	// (0x00053489) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0005eef3) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0005eef3) form_field_data_wide_pane_g

0xdd0e,	// (0x0005d581) grid_touch_3_pane_ParamLimits

0xdd0e,	// (0x0005d581) grid_touch_3_pane

0xe1e9,	// (0x0005da5c) cell_touch_3_pane_ParamLimits

0xe1e9,	// (0x0005da5c) cell_touch_3_pane

0x769f,	// (0x00056f12) cell_touch_3_pane_g1

0x769f,	// (0x00056f12) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x0005f3a4) cell_touch_3_pane_g

0x2fcf,	// (0x00052842) cont_query_data_pane

0x2fd7,	// (0x0005284a) cont_query_data_pane_cp1

0x87b9,	// (0x0005802c) button_value_adjust_pane_cp7

0x87c1,	// (0x00058034) query_popup_pane_cp3

0x436f,	// (0x00053be2) bg_popup_sub_pane_cp22_ParamLimits

0x0a14,	// (0x00050287) navi_navi_volume_pane_cp2

0x0a2f,	// (0x000502a2) popup_side_volume_key_window_g2

0x0a3e,	// (0x000502b1) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0005ef89) popup_side_volume_key_window_g

0x0a5b,	// (0x000502ce) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0005ef90) popup_side_volume_key_window_t

0x4626,	// (0x00053e99) popup_side_volume_key_window_ParamLimits

0xb6cc,	// (0x0005af3f) list_double_graphic_pane_g4_ParamLimits

0xb6cc,	// (0x0005af3f) list_double_graphic_pane_g4

0xdb86,	// (0x0005d3f9) list_single_2heading_msg_pane_ParamLimits

0xdb86,	// (0x0005d3f9) list_single_2heading_msg_pane

0xd766,	// (0x0005cfd9) list_single_2heading_msg_pane_g1_ParamLimits

0xd766,	// (0x0005cfd9) list_single_2heading_msg_pane_g1

0xd772,	// (0x0005cfe5) list_single_2heading_msg_pane_g2_ParamLimits

0xd772,	// (0x0005cfe5) list_single_2heading_msg_pane_g2

0xd785,	// (0x0005cff8) list_single_2heading_msg_pane_g3_ParamLimits

0xd785,	// (0x0005cff8) list_single_2heading_msg_pane_g3

0xd791,	// (0x0005d004) list_single_2heading_msg_pane_g4_ParamLimits

0xd791,	// (0x0005d004) list_single_2heading_msg_pane_g4

0x0003,

0xfca3,	// (0x0005f516) list_single_2heading_msg_pane_g_ParamLimits

0xfca3,	// (0x0005f516) list_single_2heading_msg_pane_g

0xc584,	// (0x0005bdf7) list_single_2heading_msg_pane_t1_ParamLimits

0xc584,	// (0x0005bdf7) list_single_2heading_msg_pane_t1

0xc5ac,	// (0x0005be1f) list_single_2heading_msg_pane_t2_ParamLimits

0xc5ac,	// (0x0005be1f) list_single_2heading_msg_pane_t2

0xc617,	// (0x0005be8a) list_single_2heading_msg_pane_t3_ParamLimits

0xc617,	// (0x0005be8a) list_single_2heading_msg_pane_t3

0x3654,	// (0x00052ec7) list_single_2heading_msg_pane_t4_ParamLimits

0x3654,	// (0x00052ec7) list_single_2heading_msg_pane_t4

0x0003,

0xfcac,	// (0x0005f51f) list_single_2heading_msg_pane_t_ParamLimits

0xfcac,	// (0x0005f51f) list_single_2heading_msg_pane_t

0x2be4,	// (0x00052457) title_pane_g4_ParamLimits

0x2be4,	// (0x00052457) title_pane_g4

0x0823,	// (0x00050096) title_pane_stacon_g3_ParamLimits

0x0823,	// (0x00050096) title_pane_stacon_g3

0x82c6,	// (0x00057b39) list_single_2graphic_im_pane_g4_ParamLimits

0x82c6,	// (0x00057b39) list_single_2graphic_im_pane_g4

0x61be,	// (0x00055a31) popup_side_volume_key_window_cp

0x6985,	// (0x000561f8) main_idle_act2_pane_t1

0x144e,	// (0x00050cc1) toolbar_button_pane_g10

0xcf9c,	// (0x0005c80f) popup_toolbar_window_cp1

0x7137,	// (0x000569aa) clock_nsta_pane_cp_t1

0x7137,	// (0x000569aa) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x0005f31a) clock_nsta_pane_cp_t

0x0a14,	// (0x00050287) navi_navi_volume_pane_cp2_ParamLimits

0x0a23,	// (0x00050296) popup_side_volume_key_window_g1_ParamLimits

0x0a2f,	// (0x000502a2) popup_side_volume_key_window_g2_ParamLimits

0x0a3e,	// (0x000502b1) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0005ef89) popup_side_volume_key_window_g_ParamLimits

0x1bcd,	// (0x00051440) fep_hwr_aid_pane

0x1c74,	// (0x000514e7) bg_fep_hwr_top_pane_g4_ParamLimits

0x76fb,	// (0x00056f6e) fep_hwr_top_pane_g1_ParamLimits

0x770d,	// (0x00056f80) fep_hwr_top_pane_g2_ParamLimits

0x1c94,	// (0x00051507) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x0005f36f) fep_hwr_top_pane_g_ParamLimits

0x1ca9,	// (0x0005151c) fep_hwr_top_text_pane_ParamLimits

0x5f81,	// (0x000557f4) aid_touch_tab_arrow_arrow_2

0x5f8a,	// (0x000557fd) aid_touch_tab_arrow_left_2

0x1be1,	// (0x00051454) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1c18,	// (0x0005148b) fep_hwr_prediction_pane

0x786d,	// (0x000570e0) fep_vkb_prediction_pane

0xdfcf,	// (0x0005d842) fep_vkb_side_pane_g3_ParamLimits

0xdfcf,	// (0x0005d842) fep_vkb_side_pane_g3

0x1e24,	// (0x00051697) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1e90,	// (0x00051703) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1e9d,	// (0x00051710) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbab,	// (0x0005f41e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1fcc,	// (0x0005183f) fep_hwr_prediction_pane_g1

0x1fd6,	// (0x00051849) fep_hwr_prediction_pane_g2

0x1fde,	// (0x00051851) fep_hwr_prediction_pane_g3

0x1fe6,	// (0x00051859) fep_hwr_prediction_pane_g4

0x0003,

0xfcb5,	// (0x0005f528) fep_hwr_prediction_pane_g

0x87e6,	// (0x00058059) fep_vkb_prediction_pane_g1

0x87f0,	// (0x00058063) fep_vkb_prediction_pane_g2

0x87f8,	// (0x0005806b) fep_vkb_prediction_pane_g3

0x8800,	// (0x00058073) fep_vkb_prediction_pane_g4

0x0003,

0xfcbe,	// (0x0005f531) fep_vkb_prediction_pane_g

0x1838,	// (0x000510ab) slider_set_pane_g3

0x184c,	// (0x000510bf) slider_set_pane_g4

0x1864,	// (0x000510d7) slider_set_pane_g5

0x1838,	// (0x000510ab) slider_set_pane_g6

0x187a,	// (0x000510ed) slider_set_pane_g7

0x661f,	// (0x00055e92) slider_form_pane_g3

0x6628,	// (0x00055e9b) slider_form_pane_g4

0x6630,	// (0x00055ea3) slider_form_pane_g5

0x661f,	// (0x00055e92) slider_form_pane_g6

0xdb58,	// (0x0005d3cb) slider_form_pane_g7

0x6c30,	// (0x000564a3) slider_set_pane_vc_g3

0x6c39,	// (0x000564ac) slider_set_pane_vc_g4

0x6c42,	// (0x000564b5) slider_set_pane_vc_g5

0x6c30,	// (0x000564a3) slider_set_pane_vc_g6

0x6c4b,	// (0x000564be) slider_set_pane_vc_g7

0x6e0b,	// (0x0005667e) slider_form_pane_vc_g1

0x6e14,	// (0x00056687) slider_form_pane_vc_g2

0x6e1d,	// (0x00056690) slider_form_pane_vc_g3

0x6e0b,	// (0x0005667e) slider_form_pane_vc_g4

0x6e26,	// (0x00056699) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x0005f2ec) slider_form_pane_vc_g

0xf43b,	// (0x0005ecae) main_idle_act3_pane

0x8808,	// (0x0005807b) ai3_links_pane

0xe231,	// (0x0005daa4) popup_ai3_data_window_ParamLimits

0xe231,	// (0x0005daa4) popup_ai3_data_window

0x2b9c,	// (0x0005240f) grid_ai3_links_pane

0xe24b,	// (0x0005dabe) cell_ai3_links_pane_ParamLimits

0xe24b,	// (0x0005dabe) cell_ai3_links_pane

0x8843,	// (0x000580b6) bg_popup_sub_pane_cp11

0x8850,	// (0x000580c3) cell_ai3_links_pane_g1

0x2b9c,	// (0x0005240f) bg_popup_sub_pane_cp12

0x8875,	// (0x000580e8) heading_ai3_data_pane

0x887d,	// (0x000580f0) list_ai3_gene_pane

0x8889,	// (0x000580fc) popup_ai3_data_window_g1

0x8891,	// (0x00058104) heading_ai3_data_pane_g1

0x8899,	// (0x0005810c) heading_ai3_data_pane_t1

0x88a7,	// (0x0005811a) list_double_ai3_gene_pane_ParamLimits

0x88a7,	// (0x0005811a) list_double_ai3_gene_pane

0x88b4,	// (0x00058127) list_single_ai3_gene_pane_ParamLimits

0x88b4,	// (0x00058127) list_single_ai3_gene_pane

0x7664,	// (0x00056ed7) list_highlight_pane_cp7_ParamLimits

0x7664,	// (0x00056ed7) list_highlight_pane_cp7

0x88c1,	// (0x00058134) list_single_a13_gene_pane_t1_ParamLimits

0x88c1,	// (0x00058134) list_single_a13_gene_pane_t1

0x88d8,	// (0x0005814b) list_single_ai3_gene_pane_g1

0x88e1,	// (0x00058154) list_single_ai3_gene_pane_g2

0x0001,

0xfcc7,	// (0x0005f53a) list_single_ai3_gene_pane_g

0x88e9,	// (0x0005815c) list_double_ai3_gene_pane_g1_ParamLimits

0x88e9,	// (0x0005815c) list_double_ai3_gene_pane_g1

0x88f5,	// (0x00058168) list_double_ai3_gene_pane_t1_ParamLimits

0x88f5,	// (0x00058168) list_double_ai3_gene_pane_t1

0x8911,	// (0x00058184) list_double_ai3_gene_pane_t2_ParamLimits

0x8911,	// (0x00058184) list_double_ai3_gene_pane_t2

0x8927,	// (0x0005819a) list_double_ai3_gene_pane_t3_ParamLimits

0x8927,	// (0x0005819a) list_double_ai3_gene_pane_t3

0x0002,

0xfccc,	// (0x0005f53f) list_double_ai3_gene_pane_t_ParamLimits

0xfccc,	// (0x0005f53f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3591,	// (0x00052e04) aid_size_min_col_2

0xe21b,	// (0x0005da8e) aid_size_min_msg_ParamLimits

0xe21b,	// (0x0005da8e) aid_size_min_msg

0xdfe3,	// (0x0005d856) fep_vkb_top_text_pane_g2_ParamLimits

0xdfe3,	// (0x0005d856) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x0005f39f) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x0005f39f) fep_vkb_top_text_pane_g

0xf43b,	// (0x0005ecae) main_hc_apps_shell_pane

0x8944,	// (0x000581b7) grid_hc_apps_pane_ParamLimits

0x8944,	// (0x000581b7) grid_hc_apps_pane

0x8953,	// (0x000581c6) list_hc_apps_pane

0x895b,	// (0x000581ce) scroll_pane_cp37_ParamLimits

0x895b,	// (0x000581ce) scroll_pane_cp37

0xe265,	// (0x0005dad8) cell_hc_apps_pane_ParamLimits

0xe265,	// (0x0005dad8) cell_hc_apps_pane

0xe323,	// (0x0005db96) cell_hc_apps_pane_g1_ParamLimits

0xe323,	// (0x0005db96) cell_hc_apps_pane_g1

0x8a46,	// (0x000582b9) cell_hc_apps_pane_g2_ParamLimits

0x8a46,	// (0x000582b9) cell_hc_apps_pane_g2

0x8a62,	// (0x000582d5) cell_hc_apps_pane_g3_ParamLimits

0x8a62,	// (0x000582d5) cell_hc_apps_pane_g3

0x0002,

0xfcd3,	// (0x0005f546) cell_hc_apps_pane_g_ParamLimits

0xfcd3,	// (0x0005f546) cell_hc_apps_pane_g

0xe378,	// (0x0005dbeb) cell_hc_apps_pane_t1_ParamLimits

0xe378,	// (0x0005dbeb) cell_hc_apps_pane_t1

0x2f19,	// (0x0005278c) grid_highlight_pane_cp10_ParamLimits

0x2f19,	// (0x0005278c) grid_highlight_pane_cp10

0xe3b6,	// (0x0005dc29) list_single_hc_apps_pane_ParamLimits

0xe3b6,	// (0x0005dc29) list_single_hc_apps_pane

0xe3e3,	// (0x0005dc56) list_single_hc_apps_pane_g1

0xd7a9,	// (0x0005d01c) list_single_hc_apps_pane_g2

0x0001,

0xfcda,	// (0x0005f54d) list_single_hc_apps_pane_g

0xd7c2,	// (0x0005d035) list_single_hc_apps_pane_g2_copy1

0x36ae,	// (0x00052f21) list_single_hc_apps_pane_t1

0x2c90,	// (0x00052503) bg_set_opt_pane_cp_ParamLimits

0x0078,	// (0x0004f8eb) setting_slider_pane_t1_ParamLimits

0x0091,	// (0x0004f904) setting_slider_pane_t2_ParamLimits

0x00ab,	// (0x0004f91e) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0005edd1) setting_slider_pane_t_ParamLimits

0x00c3,	// (0x0004f936) slider_set_pane_ParamLimits

0x0d2b,	// (0x0005059e) control_pane_g5_ParamLimits

0x0d2b,	// (0x0005059e) control_pane_g5

0x646e,	// (0x00055ce1) slider_set_pane_g1_ParamLimits

0x182c,	// (0x0005109f) slider_set_pane_g2_ParamLimits

0x1838,	// (0x000510ab) slider_set_pane_g3_ParamLimits

0x184c,	// (0x000510bf) slider_set_pane_g4_ParamLimits

0x1864,	// (0x000510d7) slider_set_pane_g5_ParamLimits

0x1838,	// (0x000510ab) slider_set_pane_g6_ParamLimits

0x187a,	// (0x000510ed) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0005f1d7) slider_set_pane_g_ParamLimits

0x4712,	// (0x00053f85) navi_icon_text_pane_ParamLimits

0xd355,	// (0x0005cbc8) aid_fill_nsta_2_ParamLimits

0xd38c,	// (0x0005cbff) aid_touch_tab_arrow_left_ParamLimits

0xd3a2,	// (0x0005cc15) aid_touch_tab_arrow_right_ParamLimits

0xd43d,	// (0x0005ccb0) clock_nsta_pane_ParamLimits

0x5f63,	// (0x000557d6) navi_icon_pane_g1_ParamLimits

0x5f6f,	// (0x000557e2) navi_text_pane_t1_ParamLimits

0x7243,	// (0x00056ab6) navi_icon_text_pane_g1_ParamLimits

0x724f,	// (0x00056ac2) navi_icon_text_pane_t1_ParamLimits

0xe3e3,	// (0x0005dc56) list_single_hc_apps_pane_g1_ParamLimits

0xd7a9,	// (0x0005d01c) list_single_hc_apps_pane_g2_ParamLimits

0xfcda,	// (0x0005f54d) list_single_hc_apps_pane_g_ParamLimits

0xd7c2,	// (0x0005d035) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x36ae,	// (0x00052f21) list_single_hc_apps_pane_t1_ParamLimits

0xb45e,	// (0x0005acd1) popup_toolbar2_fixed_window_ParamLimits

0xb45e,	// (0x0005acd1) popup_toolbar2_fixed_window

0xc39f,	// (0x0005bc12) popup_toolbar2_float_window

0x2b9c,	// (0x0005240f) bg_popup_sub_pane_cp27

0x8b39,	// (0x000583ac) grid_toolbar2_float_pane

0x2b9c,	// (0x0005240f) bg_popup_sub_pane_cp26

0x8b39,	// (0x000583ac) grid_toolbar2_fixed_pane

0xe3fc,	// (0x0005dc6f) cell_toolbar2_fixed_pane_ParamLimits

0xe3fc,	// (0x0005dc6f) cell_toolbar2_fixed_pane

0xe416,	// (0x0005dc89) cell_toolbar2_fixed_pane_g1

0x8b5a,	// (0x000583cd) toolbar2_fixed_button_pane

0x50da,	// (0x0005494d) toolbar2_fixed_button_pane_g1

0x50ea,	// (0x0005495d) toolbar2_fixed_button_pane_g2

0x50e2,	// (0x00054955) toolbar2_fixed_button_pane_g3

0x50fa,	// (0x0005496d) toolbar2_fixed_button_pane_g4

0x50f2,	// (0x00054965) toolbar2_fixed_button_pane_g5

0x5102,	// (0x00054975) toolbar2_fixed_button_pane_g6

0x510a,	// (0x0005497d) toolbar2_fixed_button_pane_g7

0x511a,	// (0x0005498d) toolbar2_fixed_button_pane_g8

0x5112,	// (0x00054985) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0005f0d9) toolbar2_fixed_button_pane_g

0x8b62,	// (0x000583d5) cell_toolbar2_float_pane_ParamLimits

0x8b62,	// (0x000583d5) cell_toolbar2_float_pane

0x8b73,	// (0x000583e6) cell_toolbar2_float_pane_g1

0x8b5a,	// (0x000583cd) toolbar2_fixed_button_pane_cp

0xdebd,	// (0x0005d730) fep_vkb_accented_list_pane_ParamLimits

0xdebd,	// (0x0005d730) fep_vkb_accented_list_pane

0x1e04,	// (0x00051677) bg_popup_fep_shadow_pane_g9

0x4892,	// (0x00054105) bg_popup_fep_shadow_pane_cp3

0x3d53,	// (0x000535c6) list_accented_list_pane

0x8b7c,	// (0x000583ef) list_single_accented_list_pane_ParamLimits

0x8b7c,	// (0x000583ef) list_single_accented_list_pane

0x4892,	// (0x00054105) list_highlight_pane_cp10

0x8b8d,	// (0x00058400) list_single_accented_list_pane_t1

0xc2c9,	// (0x0005bb3c) popup_slider_window_ParamLimits

0xc2c9,	// (0x0005bb3c) popup_slider_window

0x87c9,	// (0x0005803c) aid_indentation_list_msg

0xe50f,	// (0x0005dd82) bg_popup_window_pane_cp19

0x8cb1,	// (0x00058524) popup_slider_window_g1

0x8ccd,	// (0x00058540) popup_slider_window_g2

0x8ce9,	// (0x0005855c) popup_slider_window_g3

0x0005,

0xfcdf,	// (0x0005f552) popup_slider_window_g

0x8d45,	// (0x000585b8) popup_slider_window_t1

0x8db9,	// (0x0005862c) small_volume_slider_vertical_pane

0x769f,	// (0x00056f12) small_volume_slider_vertical_pane_g1

0x769f,	// (0x00056f12) small_volume_slider_vertical_pane_g2

0x8dd5,	// (0x00058648) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf1,	// (0x0005f564) small_volume_slider_vertical_pane_g

0xb3cc,	// (0x0005ac3f) area_side_right_pane_ParamLimits

0xb3cc,	// (0x0005ac3f) area_side_right_pane

0xc685,	// (0x0005bef8) aid_size_side_button_ParamLimits

0xc685,	// (0x0005bef8) aid_size_side_button

0xc69e,	// (0x0005bf11) grid_sctrl_middle_pane_ParamLimits

0xc69e,	// (0x0005bf11) grid_sctrl_middle_pane

0x2021,	// (0x00051894) sctrl_sk_bottom_pane

0x2032,	// (0x000518a5) sctrl_sk_top_pane

0x2044,	// (0x000518b7) aid_touch_sctrl_top

0x2051,	// (0x000518c4) bg_sctrl_sk_pane_ParamLimits

0x2051,	// (0x000518c4) bg_sctrl_sk_pane

0x205f,	// (0x000518d2) sctrl_sk_top_pane_g1

0x206c,	// (0x000518df) sctrl_sk_top_pane_t1

0x2044,	// (0x000518b7) aid_touch_sctrl_bottom

0x2051,	// (0x000518c4) bg_sctrl_sk_pane_cp_ParamLimits

0x2051,	// (0x000518c4) bg_sctrl_sk_pane_cp

0x2087,	// (0x000518fa) sctrl_sk_bottom_pane_g1

0x206c,	// (0x000518df) sctrl_sk_bottom_pane_t1

0xc6b8,	// (0x0005bf2b) cell_sctrl_middle_pane_ParamLimits

0xc6b8,	// (0x0005bf2b) cell_sctrl_middle_pane

0xc6c9,	// (0x0005bf3c) aid_touch_sctrl_middle_ParamLimits

0xc6c9,	// (0x0005bf3c) aid_touch_sctrl_middle

0xc6d6,	// (0x0005bf49) bg_sctrl_middle_pane_ParamLimits

0xc6d6,	// (0x0005bf49) bg_sctrl_middle_pane

0x26f4,	// (0x00051f67) cell_sctrl_middle_pane_g1_ParamLimits

0x26f4,	// (0x00051f67) cell_sctrl_middle_pane_g1

0xc6e4,	// (0x0005bf57) cell_sctrl_middle_pane_g2_ParamLimits

0xc6e4,	// (0x0005bf57) cell_sctrl_middle_pane_g2

0x0001,

0xfcfd,	// (0x0005f570) cell_sctrl_middle_pane_g_ParamLimits

0xfcfd,	// (0x0005f570) cell_sctrl_middle_pane_g

0x50da,	// (0x0005494d) bg_sctrl_middle_pane_g1

0x50e2,	// (0x00054955) bg_sctrl_middle_pane_g2

0x50ea,	// (0x0005495d) bg_sctrl_middle_pane_g3

0x50f2,	// (0x00054965) bg_sctrl_middle_pane_g4

0x50fa,	// (0x0005496d) bg_sctrl_middle_pane_g5

0x5102,	// (0x00054975) bg_sctrl_middle_pane_g6

0x510a,	// (0x0005497d) bg_sctrl_middle_pane_g7

0x5112,	// (0x00054985) bg_sctrl_middle_pane_g8

0x0007,

0xfd02,	// (0x0005f575) bg_sctrl_middle_pane_g

0x511a,	// (0x0005498d) bg_sctrl_middle_pane_g8_copy1

0x50da,	// (0x0005494d) bg_sctrl_sk_pane_g1

0x50ea,	// (0x0005495d) bg_sctrl_sk_pane_g2

0x50e2,	// (0x00054955) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0005f0d9) bg_sctrl_sk_pane_g

0x3b2b,	// (0x0005339e) aid_size_touch_scroll_bar

0x50fa,	// (0x0005496d) bg_sctrl_sk_pane_g4

0x50f2,	// (0x00054965) bg_sctrl_sk_pane_g5

0x5102,	// (0x00054975) bg_sctrl_sk_pane_g6

0x510a,	// (0x0005497d) bg_sctrl_sk_pane_g7

0x511a,	// (0x0005498d) bg_sctrl_sk_pane_g8

0x5112,	// (0x00054985) bg_sctrl_sk_pane_g9

0x0ee9,	// (0x0005075c) popup_fep_china_hwr2_fs_candidate_window

0xbde3,	// (0x0005b656) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbde3,	// (0x0005b656) popup_fep_china_hwr2_fs_control_window

0x1e24,	// (0x00051697) sctrl_sk_top_pane_g2

0x0001,

0xfcf8,	// (0x0005f56b) sctrl_sk_top_pane_g

0xe5c7,	// (0x0005de3a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe5c7,	// (0x0005de3a) aid_fep_china_hwr2_fs_cell

0xe5db,	// (0x0005de4e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe5db,	// (0x0005de4e) bg_popup_fep_shadow_pane_cp4

0xe5f2,	// (0x0005de65) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe5f2,	// (0x0005de65) bg_popup_fep_shadow_pane_cp5

0xe604,	// (0x0005de77) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe604,	// (0x0005de77) popup_fep_china_hwr2_fs_control_bar_grid

0xe618,	// (0x0005de8b) popup_fep_china_hwr2_fs_control_funtion_grid

0x8e31,	// (0x000586a4) aid_fep_china_hwr2_fs_candi_cell

0x2b9c,	// (0x0005240f) bg_popup_fep_shadow_pane_cp6

0x8e3b,	// (0x000586ae) popup_fep_china_hwr2_fs_candidate_grid

0xe620,	// (0x0005de93) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe620,	// (0x0005de93) cell_fep_china_hwr2_fs_funtion_grid

0x769f,	// (0x00056f12) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8e5d,	// (0x000586d0) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8e5d,	// (0x000586d0) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8e6b,	// (0x000586de) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8e6b,	// (0x000586de) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd13,	// (0x0005f586) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd13,	// (0x0005f586) cell_fep_china_hwr2_fs_funtion_grid_g

0xe638,	// (0x0005deab) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe638,	// (0x0005deab) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe64d,	// (0x0005dec0) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe64d,	// (0x0005dec0) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd18,	// (0x0005f58b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd18,	// (0x0005f58b) cell_fep_china_hwr2_fs_funtion_grid_t

0x8eb2,	// (0x00058725) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8eba,	// (0x0005872d) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8ec2,	// (0x00058735) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1d,	// (0x0005f590) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8eca,	// (0x0005873d) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8eca,	// (0x0005873d) cell_fep_china_hwr2_fs_candidate_grid

0x8ee3,	// (0x00058756) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8eeb,	// (0x0005875e) popup_fep_china_hwr2_fs_candidate_grid_g21

0x769f,	// (0x00056f12) cell_fep_china_hwr2_fs_candidate_grid_g1

0x769f,	// (0x00056f12) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x0005f3a4) cell_fep_china_hwr2_fs_candidate_grid_g

0x8ef3,	// (0x00058766) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4cd0,	// (0x00054543) clock_nsta_pane_cp_24_ParamLimits

0x4cd0,	// (0x00054543) clock_nsta_pane_cp_24

0x4d4e,	// (0x000545c1) indicator_nsta_pane_cp_24_ParamLimits

0x4d4e,	// (0x000545c1) indicator_nsta_pane_cp_24

0x5ddf,	// (0x00055652) heading_pane_g1

0x0001,

0xf8cb,	// (0x0005f13e) heading_pane_g

0x67ce,	// (0x00056041) grid_sct_catagory_button_pane

0x67fe,	// (0x00056071) scroll_pane_cp5_ParamLimits

0x7291,	// (0x00056b04) button_value_adjust_pane_cp5_ParamLimits

0x7291,	// (0x00056b04) button_value_adjust_pane_cp5

0x7370,	// (0x00056be3) form2_midp_time_pane_ParamLimits

0x8f01,	// (0x00058774) cell_sct_catagory_button_pane_ParamLimits

0x8f01,	// (0x00058774) cell_sct_catagory_button_pane

0x7664,	// (0x00056ed7) bg_button_pane_cp01_ParamLimits

0x7664,	// (0x00056ed7) bg_button_pane_cp01

0x769f,	// (0x00056f12) cell_sct_catagory_button_pane_g1

0xc342,	// (0x0005bbb5) popup_tb_extension_window

0xe669,	// (0x0005dedc) aid_size_cell_ext_ParamLimits

0xe669,	// (0x0005dedc) aid_size_cell_ext

0x396d,	// (0x000531e0) bg_tb_trans_pane_cp1_ParamLimits

0x396d,	// (0x000531e0) bg_tb_trans_pane_cp1

0xe68f,	// (0x0005df02) grid_tb_ext_pane_ParamLimits

0xe68f,	// (0x0005df02) grid_tb_ext_pane

0xe6ca,	// (0x0005df3d) cell_tb_ext_pane_ParamLimits

0xe6ca,	// (0x0005df3d) cell_tb_ext_pane

0xe6f2,	// (0x0005df65) cell_tb_ext_pane_g1_ParamLimits

0xe6f2,	// (0x0005df65) cell_tb_ext_pane_g1

0x8f95,	// (0x00058808) cell_tb_ext_pane_t1

0x2f19,	// (0x0005278c) list_highlight_pane_cp11_ParamLimits

0x2f19,	// (0x0005278c) list_highlight_pane_cp11

0xb473,	// (0x0005ace6) popup_uni_indicator_window_ParamLimits

0xb473,	// (0x0005ace6) popup_uni_indicator_window

0x3c08,	// (0x0005347b) bg_popup_sub_pane_cp14

0x8fb0,	// (0x00058823) list_uniindi_pane

0x8fbc,	// (0x0005882f) uniindi_top_pane

0x2f19,	// (0x0005278c) bg_uniindi_top_pane

0x8fdb,	// (0x0005884e) uniindi_top_pane_g1

0x8ff1,	// (0x00058864) uniindi_top_pane_g2

0x0003,

0xfd24,	// (0x0005f597) uniindi_top_pane_g

0x901b,	// (0x0005888e) uniindi_top_pane_t1

0x9045,	// (0x000588b8) list_single_uniindi_pane_ParamLimits

0x9045,	// (0x000588b8) list_single_uniindi_pane

0x769f,	// (0x00056f12) bg_uniindi_top_pane_g1

0x9058,	// (0x000588cb) list_single_uniindi_pane_g1

0x906b,	// (0x000588de) list_single_uniindi_pane_t1

0xf43b,	// (0x0005ecae) control_bg_pane

0x9090,	// (0x00058903) bg_sctrl_sk_pane_cp1

0x9099,	// (0x0005890c) bg_sctrl_sk_pane_cp2

0x90a2,	// (0x00058915) control_bg_pane_g1

0x90ab,	// (0x0005891e) control_bg_pane_g2

0x0001,

0xfd2d,	// (0x0005f5a0) control_bg_pane_g

0x70db,	// (0x0005694e) cell_indicator_nsta_pane_g1_ParamLimits

0xdd3b,	// (0x0005d5ae) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x0005f308) cell_indicator_nsta_pane_g_ParamLimits

0x336e,	// (0x00052be1) form2_midp_time_pane_t1_ParamLimits

0x1bbf,	// (0x00051432) main_idle_act4_pane_ParamLimits

0x1bbf,	// (0x00051432) main_idle_act4_pane

0xc342,	// (0x0005bbb5) popup_tb_extension_window_ParamLimits

0xe6b1,	// (0x0005df24) tb_ext_find_pane_ParamLimits

0xe6b1,	// (0x0005df24) tb_ext_find_pane

0x90b4,	// (0x00058927) ai_gene_pane_1_cp1

0x49cd,	// (0x00054240) ai_gene_pane_2_cp1

0x90bc,	// (0x0005892f) list_single_idle_plugin_calendar_pane

0x90c5,	// (0x00058938) list_single_idle_plugin_notification_pane

0x90ce,	// (0x00058941) list_single_idle_plugin_player_pane

0xe70f,	// (0x0005df82) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe70f,	// (0x0005df82) list_single_idle_plugin_shortcut_pane

0xe737,	// (0x0005dfaa) main_idle_act4_pane_t1

0xe74d,	// (0x0005dfc0) main_idle_act4_pane_t2

0x0001,

0xfd32,	// (0x0005f5a5) main_idle_act4_pane_t

0xe763,	// (0x0005dfd6) middle_sk_idle_act4_pane_ParamLimits

0xe763,	// (0x0005dfd6) middle_sk_idle_act4_pane

0xe77f,	// (0x0005dff2) popup_clock_digital_analogue_window_cp2

0xe7a7,	// (0x0005e01a) shortcut_wheel_idle_act4_pane_ParamLimits

0xe7a7,	// (0x0005e01a) shortcut_wheel_idle_act4_pane

0x769f,	// (0x00056f12) shortcut_wheel_idle_act4_pane_g1

0x769f,	// (0x00056f12) shortcut_wheel_idle_act4_pane_g2

0x769f,	// (0x00056f12) shortcut_wheel_idle_act4_pane_g3

0x769f,	// (0x00056f12) shortcut_wheel_idle_act4_pane_g4

0x769f,	// (0x00056f12) shortcut_wheel_idle_act4_pane_g5

0x9161,	// (0x000589d4) shortcut_wheel_idle_act4_pane_g6

0x9169,	// (0x000589dc) shortcut_wheel_idle_act4_pane_g7

0x9171,	// (0x000589e4) shortcut_wheel_idle_act4_pane_g8

0x9179,	// (0x000589ec) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd37,	// (0x0005f5aa) shortcut_wheel_idle_act4_pane_g

0xe350,	// (0x0005dbc3) middle_sk_idle_act4_pane_g1_ParamLimits

0xe350,	// (0x0005dbc3) middle_sk_idle_act4_pane_g1

0xe824,	// (0x0005e097) middle_sk_idle_act4_pane_g2_ParamLimits

0xe824,	// (0x0005e097) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5a,	// (0x0005f5cd) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5a,	// (0x0005f5cd) middle_sk_idle_act4_pane_g

0xe83c,	// (0x0005e0af) middle_sk_idle_act4_pane_t1_ParamLimits

0xe83c,	// (0x0005e0af) middle_sk_idle_act4_pane_t1

0xe86b,	// (0x0005e0de) grid_ai_shortcut_pane_ParamLimits

0xe86b,	// (0x0005e0de) grid_ai_shortcut_pane

0xe888,	// (0x0005e0fb) list_highlight_pane_cp16_ParamLimits

0xe888,	// (0x0005e0fb) list_highlight_pane_cp16

0xe895,	// (0x0005e108) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe895,	// (0x0005e108) list_single_idle_plugin_shortcut_pane_g1

0xe8a1,	// (0x0005e114) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe8a1,	// (0x0005e114) list_single_idle_plugin_shortcut_pane_g2

0xe8bd,	// (0x0005e130) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe8bd,	// (0x0005e130) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5f,	// (0x0005f5d2) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5f,	// (0x0005f5d2) list_single_idle_plugin_shortcut_pane_g

0xe8d2,	// (0x0005e145) cell_ai_shortcut_pane_ParamLimits

0xe8d2,	// (0x0005e145) cell_ai_shortcut_pane

0xe8e8,	// (0x0005e15b) cell_ai_shortcut_pane_g1_ParamLimits

0xe8e8,	// (0x0005e15b) cell_ai_shortcut_pane_g1

0x90b4,	// (0x00058927) ai_gene_pane_1_cp2

0x92a9,	// (0x00058b1c) ai_gene_pane_2_cp2

0x92b1,	// (0x00058b24) list_highlight_pane_cp15

0x92ba,	// (0x00058b2d) list_single_idle_plugin_calendar_pane_g1

0x92b1,	// (0x00058b24) list_highlight_pane_cp17

0x92c2,	// (0x00058b35) list_single_idle_plugin_calendar_pane_g1_copy1

0x92ca,	// (0x00058b3d) list_single_idle_plugin_player_pane_g1

0x6a27,	// (0x0005629a) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd66,	// (0x0005f5d9) list_single_idle_plugin_player_pane_g

0x92d2,	// (0x00058b45) list_single_idle_plugin_player_pane_t1

0x92e0,	// (0x00058b53) list_single_idle_plugin_player_pane_t2

0x92ee,	// (0x00058b61) list_single_idle_plugin_player_pane_t3

0x92fc,	// (0x00058b6f) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6b,	// (0x0005f5de) list_single_idle_plugin_player_pane_t

0x930a,	// (0x00058b7d) wait_bar_pane_cp15

0x9312,	// (0x00058b85) grid_ai_notification_pane

0x6a27,	// (0x0005629a) list_single_idle_plugin_notification_pane_g1

0xe90a,	// (0x0005e17d) cell_ai_notification_pane_ParamLimits

0xe90a,	// (0x0005e17d) cell_ai_notification_pane

0x9328,	// (0x00058b9b) cell_ai_notification_pane_g1

0x9330,	// (0x00058ba3) cell_ai_notification_pane_t1

0xe917,	// (0x0005e18a) tb_ext_find_button_pane

0xe91f,	// (0x0005e192) tb_ext_find_pane_g1

0xe927,	// (0x0005e19a) tb_ext_find_pane_t1

0x427f,	// (0x00053af2) tb_ext_find_button_pane_g1

0x935c,	// (0x00058bcf) tb_ext_find_button_pane_g2

0x0001,

0xfd74,	// (0x0005f5e7) tb_ext_find_button_pane_g

0xe737,	// (0x0005dfaa) main_idle_act4_pane_t1_ParamLimits

0xe74d,	// (0x0005dfc0) main_idle_act4_pane_t2_ParamLimits

0xfd32,	// (0x0005f5a5) main_idle_act4_pane_t_ParamLimits

0xe77f,	// (0x0005dff2) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe797,	// (0x0005e00a) sat_plugin_idle_act4_pane_ParamLimits

0xe797,	// (0x0005e00a) sat_plugin_idle_act4_pane

0xe935,	// (0x0005e1a8) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe935,	// (0x0005e1a8) sat_plugin_idle_act4_pane_t1

0xe94d,	// (0x0005e1c0) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe94d,	// (0x0005e1c0) sat_plugin_idle_act4_pane_t2

0xe965,	// (0x0005e1d8) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe965,	// (0x0005e1d8) sat_plugin_idle_act4_pane_t3

0xe97d,	// (0x0005e1f0) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe97d,	// (0x0005e1f0) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd79,	// (0x0005f5ec) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd79,	// (0x0005f5ec) sat_plugin_idle_act4_pane_t

0xf500,	// (0x0005ed73) popup_battery_window_ParamLimits

0xf500,	// (0x0005ed73) popup_battery_window

0x2f19,	// (0x0005278c) bg_popup_sub_pane_cp25_ParamLimits

0x2f19,	// (0x0005278c) bg_popup_sub_pane_cp25

0x93b1,	// (0x00058c24) popup_battery_window_g1_ParamLimits

0x93b1,	// (0x00058c24) popup_battery_window_g1

0x93bd,	// (0x00058c30) popup_battery_window_t1_ParamLimits

0x93bd,	// (0x00058c30) popup_battery_window_t1

0x93cf,	// (0x00058c42) popup_battery_window_t2_ParamLimits

0x93cf,	// (0x00058c42) popup_battery_window_t2

0x0001,

0xfd82,	// (0x0005f5f5) popup_battery_window_t_ParamLimits

0xfd82,	// (0x0005f5f5) popup_battery_window_t

0xd1b8,	// (0x0005ca2b) midp_canvas_pane_ParamLimits

0xd215,	// (0x0005ca88) midp_keypad_pane_ParamLimits

0xd215,	// (0x0005ca88) midp_keypad_pane

0x4bd0,	// (0x00054443) main_midp_pane_ParamLimits

0x7155,	// (0x000569c8) signal_pane_g2_cp_ParamLimits

0xe995,	// (0x0005e208) aid_size_cell_midp_keypad_ParamLimits

0xe995,	// (0x0005e208) aid_size_cell_midp_keypad

0xe9b3,	// (0x0005e226) midp_keyp_game_grid_pane_ParamLimits

0xe9b3,	// (0x0005e226) midp_keyp_game_grid_pane

0xe9da,	// (0x0005e24d) midp_keyp_rocker_pane_ParamLimits

0xe9da,	// (0x0005e24d) midp_keyp_rocker_pane

0xea2b,	// (0x0005e29e) midp_keyp_sk_left_pane_ParamLimits

0xea2b,	// (0x0005e29e) midp_keyp_sk_left_pane

0xea7f,	// (0x0005e2f2) midp_keyp_sk_right_pane_ParamLimits

0xea7f,	// (0x0005e2f2) midp_keyp_sk_right_pane

0x2b9c,	// (0x0005240f) bg_button_pane_cp03

0xead3,	// (0x0005e346) midp_keyp_sk_left_pane_g1

0x2b9c,	// (0x0005240f) bg_button_pane_cp04

0xead3,	// (0x0005e346) midp_keyp_sk_right_pane_g1

0x769f,	// (0x00056f12) midp_keyp_rocker_pane_g1

0xeadc,	// (0x0005e34f) keyp_game_cell_pane_ParamLimits

0xeadc,	// (0x0005e34f) keyp_game_cell_pane

0x2b9c,	// (0x0005240f) bg_button_pane_cp02

0xeb00,	// (0x0005e373) keyp_game_cell_pane_g1

0xb40e,	// (0x0005ac81) popup_fep_vkb2_window_ParamLimits

0xb40e,	// (0x0005ac81) popup_fep_vkb2_window

0xc6f0,	// (0x0005bf63) aid_size_cell_vkb2_ParamLimits

0xc6f0,	// (0x0005bf63) aid_size_cell_vkb2

0xc726,	// (0x0005bf99) popup_fep_vkb2_window_g1_ParamLimits

0xc726,	// (0x0005bf99) popup_fep_vkb2_window_g1

0xc776,	// (0x0005bfe9) vkb2_area_bottom_pane_ParamLimits

0xc776,	// (0x0005bfe9) vkb2_area_bottom_pane

0xc7ca,	// (0x0005c03d) vkb2_area_keypad_pane_ParamLimits

0xc7ca,	// (0x0005c03d) vkb2_area_keypad_pane

0xc812,	// (0x0005c085) vkb2_area_top_pane_ParamLimits

0xc812,	// (0x0005c085) vkb2_area_top_pane

0xc898,	// (0x0005c10b) vkb2_top_entry_pane_ParamLimits

0xc898,	// (0x0005c10b) vkb2_top_entry_pane

0xc8c5,	// (0x0005c138) vkb2_top_grid_left_pane_ParamLimits

0xc8c5,	// (0x0005c138) vkb2_top_grid_left_pane

0xc8e5,	// (0x0005c158) vkb2_top_grid_right_pane_ParamLimits

0xc8e5,	// (0x0005c158) vkb2_top_grid_right_pane

0x22f3,	// (0x00051b66) vkb2_cell_keypad_pane_ParamLimits

0x22f3,	// (0x00051b66) vkb2_cell_keypad_pane

0xc92b,	// (0x0005c19e) vkb2_area_bottom_grid_pane_ParamLimits

0xc92b,	// (0x0005c19e) vkb2_area_bottom_grid_pane

0xc955,	// (0x0005c1c8) vkb2_area_bottom_pane_g1_ParamLimits

0xc955,	// (0x0005c1c8) vkb2_area_bottom_pane_g1

0xc97b,	// (0x0005c1ee) vkb2_area_bottom_pane_g2_ParamLimits

0xc97b,	// (0x0005c1ee) vkb2_area_bottom_pane_g2

0xc9ac,	// (0x0005c21f) vkb2_area_bottom_pane_g3_ParamLimits

0xc9ac,	// (0x0005c21f) vkb2_area_bottom_pane_g3

0x0002,

0xfd87,	// (0x0005f5fa) vkb2_area_bottom_pane_g_ParamLimits

0xfd87,	// (0x0005f5fa) vkb2_area_bottom_pane_g

0x249d,	// (0x00051d10) vkb2_top_cell_left_pane_ParamLimits

0x249d,	// (0x00051d10) vkb2_top_cell_left_pane

0xeb09,	// (0x0005e37c) vkb2_top_entry_pane_g1_ParamLimits

0xeb09,	// (0x0005e37c) vkb2_top_entry_pane_g1

0xeb17,	// (0x0005e38a) vkb2_top_entry_pane_t1_ParamLimits

0xeb17,	// (0x0005e38a) vkb2_top_entry_pane_t1

0x9580,	// (0x00058df3) vkb2_top_entry_pane_t2_ParamLimits

0x9580,	// (0x00058df3) vkb2_top_entry_pane_t2

0x95b2,	// (0x00058e25) vkb2_top_entry_pane_t3_ParamLimits

0x95b2,	// (0x00058e25) vkb2_top_entry_pane_t3

0x0002,

0xfd8e,	// (0x0005f601) vkb2_top_entry_pane_t_ParamLimits

0xfd8e,	// (0x0005f601) vkb2_top_entry_pane_t

0xca16,	// (0x0005c289) vkb2_top_grid_right_pane_g1_ParamLimits

0xca16,	// (0x0005c289) vkb2_top_grid_right_pane_g1

0x2500,	// (0x00051d73) vkb2_top_grid_right_pane_g2_ParamLimits

0x2500,	// (0x00051d73) vkb2_top_grid_right_pane_g2

0x2518,	// (0x00051d8b) vkb2_top_grid_right_pane_g3_ParamLimits

0x2518,	// (0x00051d8b) vkb2_top_grid_right_pane_g3

0xca2c,	// (0x0005c29f) vkb2_top_grid_right_pane_g4_ParamLimits

0xca2c,	// (0x0005c29f) vkb2_top_grid_right_pane_g4

0x0003,

0xfd95,	// (0x0005f608) vkb2_top_grid_right_pane_g_ParamLimits

0xfd95,	// (0x0005f608) vkb2_top_grid_right_pane_g

0x2546,	// (0x00051db9) vkb2_top_cell_left_pane_g1

0x255d,	// (0x00051dd0) vkb2_cell_keypad_pane_g1_ParamLimits

0x255d,	// (0x00051dd0) vkb2_cell_keypad_pane_g1

0x95d6,	// (0x00058e49) vkb2_cell_keypad_pane_t1_ParamLimits

0x95d6,	// (0x00058e49) vkb2_cell_keypad_pane_t1

0x256b,	// (0x00051dde) vkb2_cell_bottom_grid_pane_ParamLimits

0x256b,	// (0x00051dde) vkb2_cell_bottom_grid_pane

0x25a4,	// (0x00051e17) vkb2_cell_bottom_grid_pane_g1

0xe7c8,	// (0x0005e03b) aid_call2_pane_cp02

0xe7d0,	// (0x0005e043) aid_call_pane_cp02

0xe7d8,	// (0x0005e04b) clock_digital_number_pane_cp10

0xe7e0,	// (0x0005e053) clock_digital_number_pane_cp11

0xe7e8,	// (0x0005e05b) clock_digital_number_pane_cp12

0xe7f0,	// (0x0005e063) clock_digital_number_pane_cp13

0xe7f8,	// (0x0005e06b) clock_digital_separator_pane_cp10

0x427f,	// (0x00053af2) popup_clock_digital_analogue_window_cp2_g1

0x427f,	// (0x00053af2) popup_clock_digital_analogue_window_cp2_g2

0xe800,	// (0x0005e073) popup_clock_digital_analogue_window_cp2_g3

0x427f,	// (0x00053af2) popup_clock_digital_analogue_window_cp2_g4

0xe800,	// (0x0005e073) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4a,	// (0x0005f5bd) popup_clock_digital_analogue_window_cp2_g

0xe808,	// (0x0005e07b) popup_clock_digital_analogue_window_cp2_t1

0xe816,	// (0x0005e089) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd55,	// (0x0005f5c8) popup_clock_digital_analogue_window_cp2_t

0x769f,	// (0x00056f12) clock_digital_number_pane_cp10_g1

0x769f,	// (0x00056f12) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x0005f3a4) clock_digital_number_pane_cp10_g

0x769f,	// (0x00056f12) clock_digital_separator_pane_cp10_g1

0x769f,	// (0x00056f12) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x0005f3a4) clock_digital_separator_pane_cp10_g

0x8ffd,	// (0x00058870) uniindi_top_pane_g3

0x900e,	// (0x00058881) uniindi_top_pane_g4

0x237e,	// (0x00051bf1) vkb2_row_keypad_pane_ParamLimits

0x237e,	// (0x00051bf1) vkb2_row_keypad_pane

0x25c0,	// (0x00051e33) vkb2_cell_t_keypad_pane_ParamLimits

0x25c0,	// (0x00051e33) vkb2_cell_t_keypad_pane

0x25d0,	// (0x00051e43) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x25d0,	// (0x00051e43) vkb2_cell_t_keypad_pane_cp08

0x25e3,	// (0x00051e56) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x25e3,	// (0x00051e56) vkb2_cell_t_keypad_pane_cp09

0x25f7,	// (0x00051e6a) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x25f7,	// (0x00051e6a) vkb2_cell_t_keypad_pane_cp01

0x2608,	// (0x00051e7b) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2608,	// (0x00051e7b) vkb2_cell_t_keypad_pane_cp02

0x2619,	// (0x00051e8c) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2619,	// (0x00051e8c) vkb2_cell_t_keypad_pane_cp03

0x262a,	// (0x00051e9d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x262a,	// (0x00051e9d) vkb2_cell_t_keypad_pane_cp04

0x263b,	// (0x00051eae) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x263b,	// (0x00051eae) vkb2_cell_t_keypad_pane_cp05

0x264c,	// (0x00051ebf) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x264c,	// (0x00051ebf) vkb2_cell_t_keypad_pane_cp06

0x265d,	// (0x00051ed0) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x265d,	// (0x00051ed0) vkb2_cell_t_keypad_pane_cp07

0x266e,	// (0x00051ee1) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x266e,	// (0x00051ee1) vkb2_cell_t_keypad_pane_cp10

0x1e24,	// (0x00051697) vkb2_cell_t_keypad_pane_g1

0x95ed,	// (0x00058e60) vkb2_cell_t_keypad_pane_t1

0xf43b,	// (0x0005ecae) popup_grid_graphic2_window

0xeb50,	// (0x0005e3c3) aid_size_cell_graphic2_ParamLimits

0xeb50,	// (0x0005e3c3) aid_size_cell_graphic2

0xeb8e,	// (0x0005e401) bg_popup_window_pane_cp21_ParamLimits

0xeb8e,	// (0x0005e401) bg_popup_window_pane_cp21

0xeb9c,	// (0x0005e40f) graphic2_pages_pane_ParamLimits

0xeb9c,	// (0x0005e40f) graphic2_pages_pane

0xebf2,	// (0x0005e465) grid_graphic2_control_pane_ParamLimits

0xebf2,	// (0x0005e465) grid_graphic2_control_pane

0xec3a,	// (0x0005e4ad) grid_graphic2_pane_ParamLimits

0xec3a,	// (0x0005e4ad) grid_graphic2_pane

0xecc1,	// (0x0005e534) cell_graphic2_pane

0xf43b,	// (0x0005ecae) main_comp_mode_pane

0x887d,	// (0x000580f0) list_ai3_gene_pane_ParamLimits

0xe50f,	// (0x0005dd82) bg_popup_window_pane_cp19_ParamLimits

0x8c53,	// (0x000584c6) bg_touch_area_indi_pane_ParamLimits

0x8c53,	// (0x000584c6) bg_touch_area_indi_pane

0x8c69,	// (0x000584dc) bg_touch_area_indi_pane_cp01_ParamLimits

0x8c69,	// (0x000584dc) bg_touch_area_indi_pane_cp01

0x8c7f,	// (0x000584f2) bg_touch_area_indi_pane_cp02_ParamLimits

0x8c7f,	// (0x000584f2) bg_touch_area_indi_pane_cp02

0x8c97,	// (0x0005850a) bg_touch_area_indi_pane_cp03_ParamLimits

0x8c97,	// (0x0005850a) bg_touch_area_indi_pane_cp03

0x8cb1,	// (0x00058524) popup_slider_window_g1_ParamLimits

0x8ccd,	// (0x00058540) popup_slider_window_g2_ParamLimits

0x8ce9,	// (0x0005855c) popup_slider_window_g3_ParamLimits

0xfcdf,	// (0x0005f552) popup_slider_window_g_ParamLimits

0x8d45,	// (0x000585b8) popup_slider_window_t1_ParamLimits

0x8db9,	// (0x0005862c) small_volume_slider_vertical_pane_ParamLimits

0xecc1,	// (0x0005e534) cell_graphic2_pane_ParamLimits

0xed1e,	// (0x0005e591) bg_button_pane_cp10_ParamLimits

0xed1e,	// (0x0005e591) bg_button_pane_cp10

0xed31,	// (0x0005e5a4) bg_button_pane_cp11_ParamLimits

0xed31,	// (0x0005e5a4) bg_button_pane_cp11

0xed44,	// (0x0005e5b7) graphic2_pages_pane_g1_ParamLimits

0xed44,	// (0x0005e5b7) graphic2_pages_pane_g1

0xed5f,	// (0x0005e5d2) graphic2_pages_pane_g2_ParamLimits

0xed5f,	// (0x0005e5d2) graphic2_pages_pane_g2

0x0001,

0xfda3,	// (0x0005f616) graphic2_pages_pane_g_ParamLimits

0xfda3,	// (0x0005f616) graphic2_pages_pane_g

0xed77,	// (0x0005e5ea) graphic2_pages_pane_t1_ParamLimits

0xed77,	// (0x0005e5ea) graphic2_pages_pane_t1

0xed8f,	// (0x0005e602) cell_graphic2_control_pane_ParamLimits

0xed8f,	// (0x0005e602) cell_graphic2_control_pane

0xedc1,	// (0x0005e634) cell_graphic2_pane_g1_ParamLimits

0xedc1,	// (0x0005e634) cell_graphic2_pane_g1

0xe35e,	// (0x0005dbd1) cell_graphic2_pane_g2_ParamLimits

0xe35e,	// (0x0005dbd1) cell_graphic2_pane_g2

0xdeb0,	// (0x0005d723) cell_graphic2_pane_g3_ParamLimits

0xdeb0,	// (0x0005d723) cell_graphic2_pane_g3

0xe36b,	// (0x0005dbde) cell_graphic2_pane_g4_ParamLimits

0xe36b,	// (0x0005dbde) cell_graphic2_pane_g4

0xedce,	// (0x0005e641) cell_graphic2_pane_g5_ParamLimits

0xedce,	// (0x0005e641) cell_graphic2_pane_g5

0x0004,

0xfda8,	// (0x0005f61b) cell_graphic2_pane_g_ParamLimits

0xfda8,	// (0x0005f61b) cell_graphic2_pane_g

0xedee,	// (0x0005e661) cell_graphic2_pane_t1_ParamLimits

0xedee,	// (0x0005e661) cell_graphic2_pane_t1

0x5dd3,	// (0x00055646) grid_highlight_pane_cp11_ParamLimits

0x5dd3,	// (0x00055646) grid_highlight_pane_cp11

0x2f19,	// (0x0005278c) bg_button_pane_cp05

0xee23,	// (0x0005e696) cell_graphic2_control_pane_g1

0x769f,	// (0x00056f12) bg_touch_area_indi_pane_g1

0x98bd,	// (0x00059130) aid_cmod_rocker_key_size

0x98c7,	// (0x0005913a) aid_cmode_itu_key_size

0x98d1,	// (0x00059144) main_cmode_video_pane

0x98db,	// (0x0005914e) main_comp_mode_itu_pane

0x98e7,	// (0x0005915a) main_comp_mode_rocker_pane

0x98f3,	// (0x00059166) cell_cmode_rocker_pane_ParamLimits

0x98f3,	// (0x00059166) cell_cmode_rocker_pane

0x9905,	// (0x00059178) cell_cmode_itu_pane_ParamLimits

0x9905,	// (0x00059178) cell_cmode_itu_pane

0x3c08,	// (0x0005347b) bg_button_pane_cp06_ParamLimits

0x3c08,	// (0x0005347b) bg_button_pane_cp06

0x791d,	// (0x00057190) cell_cmode_rocker_pane_g1_ParamLimits

0x791d,	// (0x00057190) cell_cmode_rocker_pane_g1

0x8e5d,	// (0x000586d0) cell_cmode_rocker_pane_g2_ParamLimits

0x8e5d,	// (0x000586d0) cell_cmode_rocker_pane_g2

0x0001,

0xfdb8,	// (0x0005f62b) cell_cmode_rocker_pane_g_ParamLimits

0xfdb8,	// (0x0005f62b) cell_cmode_rocker_pane_g

0x2b9c,	// (0x0005240f) bg_button_pane_cp07

0x991a,	// (0x0005918d) cell_cmode_itu_pane_g1

0x9923,	// (0x00059196) cell_cmode_itu_pane_t1

0x9931,	// (0x000591a4) cell_cmode_itu_pane_t2

0x0001,

0xfdbd,	// (0x0005f630) cell_cmode_itu_pane_t

0x9080,	// (0x000588f3) aid_touch_ctrl_left

0x9088,	// (0x000588fb) aid_touch_ctrl_right

0x2b9c,	// (0x0005240f) compa_mode_pane

0xee49,	// (0x0005e6bc) aid_cmod_rocker_key_size_cp

0xee53,	// (0x0005e6c6) aid_cmode_itu_key_size_cp

0x9953,	// (0x000591c6) compa_mode_pane_g1

0x995b,	// (0x000591ce) compa_mode_pane_g2

0x9963,	// (0x000591d6) compa_mode_pane_g3

0x0002,

0xfdc2,	// (0x0005f635) compa_mode_pane_g

0xee5d,	// (0x0005e6d0) main_comp_mode_itu_pane_cp

0xee65,	// (0x0005e6d8) main_comp_mode_rocker_pane_cp

0xee6d,	// (0x0005e6e0) cell_cmode_itu_pane_cp_ParamLimits

0xee6d,	// (0x0005e6e0) cell_cmode_itu_pane_cp

0xee82,	// (0x0005e6f5) cell_cmode_rocker_pane_cp_ParamLimits

0xee82,	// (0x0005e6f5) cell_cmode_rocker_pane_cp

0x3c08,	// (0x0005347b) bg_button_pane_cp06_cp_ParamLimits

0x3c08,	// (0x0005347b) bg_button_pane_cp06_cp

0x791d,	// (0x00057190) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x791d,	// (0x00057190) cell_cmode_rocker_pane_g1_cp

0x769f,	// (0x00056f12) cell_cmode_rocker_pane_g2_cp

0x2b9c,	// (0x0005240f) bg_button_pane_cp07_cp

0xee94,	// (0x0005e707) cell_cmode_itu_pane_g1_cp

0xee9d,	// (0x0005e710) cell_cmode_itu_pane_t1_cp

0xee9d,	// (0x0005e710) cell_cmode_itu_pane_t2_cp

0xdb4e,	// (0x0005d3c1) settings_code_pane_cp2

0x2c90,	// (0x00052503) bg_popup_window_pane_cp3_ParamLimits

0x37f0,	// (0x00053063) heading_pane_cp3_ParamLimits

0x37fc,	// (0x0005306f) listscroll_popup_graphic_pane_ParamLimits

0x1bcd,	// (0x00051440) fep_hwr_aid_pane_ParamLimits

0x2044,	// (0x000518b7) aid_touch_sctrl_top_ParamLimits

0x205f,	// (0x000518d2) sctrl_sk_top_pane_g1_ParamLimits

0x1e24,	// (0x00051697) sctrl_sk_top_pane_g2_ParamLimits

0xfcf8,	// (0x0005f56b) sctrl_sk_top_pane_g_ParamLimits

0x206c,	// (0x000518df) sctrl_sk_top_pane_t1_ParamLimits

0x2044,	// (0x000518b7) aid_touch_sctrl_bottom_ParamLimits

0x206c,	// (0x000518df) sctrl_sk_bottom_pane_t1_ParamLimits

0x8fc9,	// (0x0005883c) aid_area_touch_clock

0xc85a,	// (0x0005c0cd) aid_vkb2_area_top_pane_cell_ParamLimits

0xc85a,	// (0x0005c0cd) aid_vkb2_area_top_pane_cell

0xc905,	// (0x0005c178) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc905,	// (0x0005c178) aid_vkb2_area_bottom_pane_cell

0x9538,	// (0x00058dab) popup_char_count_window

0x99b0,	// (0x00059223) popup_char_count_window_g1

0x99b9,	// (0x0005922c) popup_char_count_window_g2

0x99c2,	// (0x00059235) popup_char_count_window_g3

0x0002,

0xfdc9,	// (0x0005f63c) popup_char_count_window_g

0x99cb,	// (0x0005923e) popup_char_count_window_t1

0x211b,	// (0x0005198e) popup_fep_char_preview_window_ParamLimits

0x211b,	// (0x0005198e) popup_fep_char_preview_window

0xc87a,	// (0x0005c0ed) vkb2_top_candi_pane_ParamLimits

0xc87a,	// (0x0005c0ed) vkb2_top_candi_pane

0xeeab,	// (0x0005e71e) cell_vkb2_top_candi_pane_ParamLimits

0xeeab,	// (0x0005e71e) cell_vkb2_top_candi_pane

0x2683,	// (0x00051ef6) bg_popup_fep_char_preview_window_ParamLimits

0x2683,	// (0x00051ef6) bg_popup_fep_char_preview_window

0x2691,	// (0x00051f04) popup_fep_char_preview_window_t1_ParamLimits

0x2691,	// (0x00051f04) popup_fep_char_preview_window_t1

0x9a26,	// (0x00059299) bg_popup_fep_char_preview_window_g1

0x9a2e,	// (0x000592a1) bg_popup_fep_char_preview_window_g2

0x9a36,	// (0x000592a9) bg_popup_fep_char_preview_window_g3

0x9a3e,	// (0x000592b1) bg_popup_fep_char_preview_window_g4

0x9a46,	// (0x000592b9) bg_popup_fep_char_preview_window_g5

0x26cb,	// (0x00051f3e) bg_popup_fep_char_preview_window_g6

0x9a4e,	// (0x000592c1) bg_popup_fep_char_preview_window_g7

0x9a56,	// (0x000592c9) bg_popup_fep_char_preview_window_g8

0x9a5e,	// (0x000592d1) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd0,	// (0x0005f643) bg_popup_fep_char_preview_window_g

0x1e24,	// (0x00051697) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1e24,	// (0x00051697) cell_vkb2_top_candi_pane_g1

0x1e32,	// (0x000516a5) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1e32,	// (0x000516a5) cell_vkb2_top_candi_pane_g2

0x876a,	// (0x00057fdd) cell_vkb2_top_candi_pane_g3_ParamLimits

0x876a,	// (0x00057fdd) cell_vkb2_top_candi_pane_g3

0x26d3,	// (0x00051f46) cell_vkb2_top_candi_pane_g4_ParamLimits

0x26d3,	// (0x00051f46) cell_vkb2_top_candi_pane_g4

0x7df4,	// (0x00057667) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7df4,	// (0x00057667) cell_vkb2_top_candi_pane_g5

0x26f4,	// (0x00051f67) cell_vkb2_top_candi_pane_g6_ParamLimits

0x26f4,	// (0x00051f67) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde3,	// (0x0005f656) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde3,	// (0x0005f656) cell_vkb2_top_candi_pane_g

0x2702,	// (0x00051f75) cell_vkb2_top_candi_pane_t1

0x1818,	// (0x0005108b) aid_size_touch_slider_mark_ParamLimits

0x1818,	// (0x0005108b) aid_size_touch_slider_mark

0xebd8,	// (0x0005e44b) grid_graphic2_catg_pane_ParamLimits

0xebd8,	// (0x0005e44b) grid_graphic2_catg_pane

0xec94,	// (0x0005e507) popup_grid_graphic2_window_t1_ParamLimits

0xec94,	// (0x0005e507) popup_grid_graphic2_window_t1

0xecaa,	// (0x0005e51d) popup_grid_graphic2_window_t2_ParamLimits

0xecaa,	// (0x0005e51d) popup_grid_graphic2_window_t2

0x0001,

0xfd9e,	// (0x0005f611) popup_grid_graphic2_window_t_ParamLimits

0xfd9e,	// (0x0005f611) popup_grid_graphic2_window_t

0x2f19,	// (0x0005278c) bg_button_pane_cp05_ParamLimits

0xee23,	// (0x0005e696) cell_graphic2_control_pane_g1_ParamLimits

0xef2a,	// (0x0005e79d) cell_graphic2_catg_pane_ParamLimits

0xef2a,	// (0x0005e79d) cell_graphic2_catg_pane

0x2b9c,	// (0x0005240f) bg_button_pane_cp12

0xef3c,	// (0x0005e7af) cell_graphic2_catg_pane_g1

0x8f95,	// (0x00058808) cell_tb_ext_pane_t1_ParamLimits

0x24bd,	// (0x00051d30) vkb2_top_cell_right_narrow_pane_ParamLimits

0x24bd,	// (0x00051d30) vkb2_top_cell_right_narrow_pane

0x24d5,	// (0x00051d48) vkb2_top_cell_right_wide_pane_ParamLimits

0x24d5,	// (0x00051d48) vkb2_top_cell_right_wide_pane

0x1bbf,	// (0x00051432) bg_vkb2_func_pane_ParamLimits

0x1bbf,	// (0x00051432) bg_vkb2_func_pane

0x2546,	// (0x00051db9) vkb2_top_cell_left_pane_g1_ParamLimits

0x1bbf,	// (0x00051432) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1bbf,	// (0x00051432) bg_vkb2_fuc_pane_cp03

0x25a4,	// (0x00051e17) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x50e2,	// (0x00054955) bg_vkb2_func_pane_g1

0x50ea,	// (0x0005495d) bg_vkb2_func_pane_g2

0x50fa,	// (0x0005496d) bg_vkb2_func_pane_g3

0x50f2,	// (0x00054965) bg_vkb2_func_pane_g4

0x5102,	// (0x00054975) bg_vkb2_func_pane_g5

0x510a,	// (0x0005497d) bg_vkb2_func_pane_g6

0x5112,	// (0x00054985) bg_vkb2_func_pane_g7

0x511a,	// (0x0005498d) bg_vkb2_func_pane_g8

0x50da,	// (0x0005494d) bg_vkb2_func_pane_g9

0x0008,

0xfdf0,	// (0x0005f663) bg_vkb2_func_pane_g

0x1bbf,	// (0x00051432) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1bbf,	// (0x00051432) bg_vkb2_fuc_pane_cp01

0x2546,	// (0x00051db9) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2546,	// (0x00051db9) vkb2_top_cell_right_wide_pane_g1

0x1bbf,	// (0x00051432) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1bbf,	// (0x00051432) bg_vkb2_fuc_pane_cp02

0x25a4,	// (0x00051e17) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x25a4,	// (0x00051e17) vkb2_top_cell_right_narrow_pane_g1

0xe44f,	// (0x0005dcc2) aid_touch_area_decrease_ParamLimits

0xe44f,	// (0x0005dcc2) aid_touch_area_decrease

0xe483,	// (0x0005dcf6) aid_touch_area_increase_ParamLimits

0xe483,	// (0x0005dcf6) aid_touch_area_increase

0xe4ab,	// (0x0005dd1e) aid_touch_area_mute_ParamLimits

0xe4ab,	// (0x0005dd1e) aid_touch_area_mute

0xe4db,	// (0x0005dd4e) aid_touch_area_slider_ParamLimits

0xe4db,	// (0x0005dd4e) aid_touch_area_slider

0xe51b,	// (0x0005dd8e) popup_slider_window_g4_ParamLimits

0xe51b,	// (0x0005dd8e) popup_slider_window_g4

0xe543,	// (0x0005ddb6) popup_slider_window_g5_ParamLimits

0xe543,	// (0x0005ddb6) popup_slider_window_g5

0xe577,	// (0x0005ddea) popup_slider_window_g6_ParamLimits

0xe577,	// (0x0005ddea) popup_slider_window_g6

0x8d73,	// (0x000585e6) popup_slider_window_t2_ParamLimits

0x8d73,	// (0x000585e6) popup_slider_window_t2

0x0001,

0xfcec,	// (0x0005f55f) popup_slider_window_t_ParamLimits

0xfcec,	// (0x0005f55f) popup_slider_window_t

0xe593,	// (0x0005de06) slider_pane_ParamLimits

0xe593,	// (0x0005de06) slider_pane

0x9a81,	// (0x000592f4) slider_pane_g1_ParamLimits

0x9a81,	// (0x000592f4) slider_pane_g1

0x9a95,	// (0x00059308) slider_pane_g2_ParamLimits

0x9a95,	// (0x00059308) slider_pane_g2

0x9aab,	// (0x0005931e) slider_pane_g3_ParamLimits

0x9aab,	// (0x0005931e) slider_pane_g3

0x0003,

0xfe03,	// (0x0005f676) slider_pane_g_ParamLimits

0xfe03,	// (0x0005f676) slider_pane_g

0xc38a,	// (0x0005bbfd) popup_tb_float_extension_window_ParamLimits

0xc38a,	// (0x0005bbfd) popup_tb_float_extension_window

0x9ad7,	// (0x0005934a) aid_size_cell_tb_float_ext

0x2b9c,	// (0x0005240f) bg_popup_sub_window_cp28

0x9ae3,	// (0x00059356) grid_tb_float_ext_pane

0x9aed,	// (0x00059360) cell_tb_float_ext_pane_ParamLimits

0x9aed,	// (0x00059360) cell_tb_float_ext_pane

0x9b07,	// (0x0005937a) cell_tb_float_ext_pane_g1

0x9b10,	// (0x00059383) grid_highlight_pane_cp12

0xc540,	// (0x0005bdb3) cell_last_hwr_side_pane_ParamLimits

0xc540,	// (0x0005bdb3) cell_last_hwr_side_pane

0x769f,	// (0x00056f12) cell_last_hwr_side_pane_g1

0x9b19,	// (0x0005938c) cell_last_hwr_side_pane_g2

0x0001,

0xfe0c,	// (0x0005f67f) cell_last_hwr_side_pane_g

0xc9e1,	// (0x0005c254) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc9e1,	// (0x0005c254) vkb2_area_bottom_space_btn_pane

0x1e24,	// (0x00051697) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x95ed,	// (0x00058e60) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2702,	// (0x00051f75) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2721,	// (0x00051f94) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2721,	// (0x00051f94) vkb2_area_bottom_space_btn_pane_g1

0x275b,	// (0x00051fce) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x275b,	// (0x00051fce) vkb2_area_bottom_space_btn_pane_g2

0x2791,	// (0x00052004) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2791,	// (0x00052004) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe11,	// (0x0005f684) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe11,	// (0x0005f684) vkb2_area_bottom_space_btn_pane_g

0x1c82,	// (0x000514f5) cel_fep_hwr_func_pane_ParamLimits

0x1c82,	// (0x000514f5) cel_fep_hwr_func_pane

0xc515,	// (0x0005bd88) cell_hwr_side_button_pane_ParamLimits

0xc515,	// (0x0005bd88) cell_hwr_side_button_pane

0x8fc9,	// (0x0005883c) aid_area_touch_clock_ParamLimits

0x2f19,	// (0x0005278c) bg_uniindi_top_pane_ParamLimits

0x8fdb,	// (0x0005884e) uniindi_top_pane_g1_ParamLimits

0x8ff1,	// (0x00058864) uniindi_top_pane_g2_ParamLimits

0x8ffd,	// (0x00058870) uniindi_top_pane_g3_ParamLimits

0x900e,	// (0x00058881) uniindi_top_pane_g4_ParamLimits

0xfd24,	// (0x0005f597) uniindi_top_pane_g_ParamLimits

0x901b,	// (0x0005888e) uniindi_top_pane_t1_ParamLimits

0x2f19,	// (0x0005278c) bg_vkb2_func_pane_cp01_ParamLimits

0x2f19,	// (0x0005278c) bg_vkb2_func_pane_cp01

0x9b22,	// (0x00059395) cel_fep_hwr_func_pane_g1_ParamLimits

0x9b22,	// (0x00059395) cel_fep_hwr_func_pane_g1

0x2f19,	// (0x0005278c) bg_vkb2_func_pane_cp02_ParamLimits

0x2f19,	// (0x0005278c) bg_vkb2_func_pane_cp02

0x9b22,	// (0x00059395) cell_hwr_side_button_pane_g1_ParamLimits

0x9b22,	// (0x00059395) cell_hwr_side_button_pane_g1

0x4f5b,	// (0x000547ce) status_pane_g4_ParamLimits

0x4f5b,	// (0x000547ce) status_pane_g4

0x4f75,	// (0x000547e8) status_pane_t1

0x73d9,	// (0x00056c4c) form2_midp_gauge_slider_cont_pane

0x73e1,	// (0x00056c54) form2_midp_gauge_slider_pane_t1_ParamLimits

0xde06,	// (0x0005d679) form2_midp_gauge_slider_pane_t2_ParamLimits

0xde18,	// (0x0005d68b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x0005f357) form2_midp_gauge_slider_pane_t_ParamLimits

0x7417,	// (0x00056c8a) form2_midp_slider_pane_ParamLimits

0x20db,	// (0x0005194e) aid_size_cell_func_vkb2_ParamLimits

0x20db,	// (0x0005194e) aid_size_cell_func_vkb2

0x9ac3,	// (0x00059336) slider_pane_g4_ParamLimits

0x9ac3,	// (0x00059336) slider_pane_g4

0xca42,	// (0x0005c2b5) form2_midp_gauge_slider_pane_t2_cp01

0xca50,	// (0x0005c2c3) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xca50,	// (0x0005c2c3) form2_midp_gauge_slider_pane_t3_cp01

0x2806,	// (0x00052079) form2_midp_slider_pane_cp01

0x2b9c,	// (0x0005240f) navi_smil_pane

0x9b5b,	// (0x000593ce) navi_smil_pane_g1

0x9b63,	// (0x000593d6) navi_smil_pane_t1

0x9b30,	// (0x000593a3) form2_midp_slider_pane_g1

0x9b39,	// (0x000593ac) form2_midp_slider_pane_g2

0x9b41,	// (0x000593b4) form2_midp_slider_pane_g3

0x9b30,	// (0x000593a3) form2_midp_slider_pane_g4

0xef45,	// (0x0005e7b8) form2_midp_slider_pane_g5

0x0004,

0xfe1a,	// (0x0005f68d) form2_midp_slider_pane_g

0x27cb,	// (0x0005203e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x27cb,	// (0x0005203e) vkb2_area_bottom_space_btn_pane_g4

0xd488,	// (0x0005ccfb) lc0_navi_pane_ParamLimits

0xd488,	// (0x0005ccfb) lc0_navi_pane

0xd4f2,	// (0x0005cd65) lc0_stat_indi_pane_ParamLimits

0xd4f2,	// (0x0005cd65) lc0_stat_indi_pane

0xd507,	// (0x0005cd7a) ls0_title_pane_ParamLimits

0xd507,	// (0x0005cd7a) ls0_title_pane

0x3c08,	// (0x0005347b) bg_popup_sub_pane_cp14_ParamLimits

0x8fb0,	// (0x00058823) list_uniindi_pane_ParamLimits

0x8fbc,	// (0x0005882f) uniindi_top_pane_ParamLimits

0x9058,	// (0x000588cb) list_single_uniindi_pane_g1_ParamLimits

0x906b,	// (0x000588de) list_single_uniindi_pane_t1_ParamLimits

0xca6d,	// (0x0005c2e0) lc0_stat_clock_pane_ParamLimits

0xca6d,	// (0x0005c2e0) lc0_stat_clock_pane

0xef50,	// (0x0005e7c3) lc0_stat_indi_pane_g1_ParamLimits

0xef50,	// (0x0005e7c3) lc0_stat_indi_pane_g1

0xef5d,	// (0x0005e7d0) lc0_stat_indi_pane_g2_ParamLimits

0xef5d,	// (0x0005e7d0) lc0_stat_indi_pane_g2

0x0001,

0xfe25,	// (0x0005f698) lc0_stat_indi_pane_g_ParamLimits

0xfe25,	// (0x0005f698) lc0_stat_indi_pane_g

0xca7a,	// (0x0005c2ed) lc0_uni_indicator_pane_ParamLimits

0xca7a,	// (0x0005c2ed) lc0_uni_indicator_pane

0xef6a,	// (0x0005e7dd) ls0_title_pane_g1_ParamLimits

0xef6a,	// (0x0005e7dd) ls0_title_pane_g1

0xef7e,	// (0x0005e7f1) ls0_title_pane_t1_ParamLimits

0xef7e,	// (0x0005e7f1) ls0_title_pane_t1

0xca87,	// (0x0005c2fa) lc0_uni_indicator_pane_g1_ParamLimits

0xca87,	// (0x0005c2fa) lc0_uni_indicator_pane_g1

0x9bd5,	// (0x00059448) lc0_stat_clock_pane_t1

0xf43b,	// (0x0005ecae) main_ai5_pane

0x9be3,	// (0x00059456) ai5_sk_pane_ParamLimits

0x9be3,	// (0x00059456) ai5_sk_pane

0xefac,	// (0x0005e81f) cell_ai5_widget_pane_ParamLimits

0xefac,	// (0x0005e81f) cell_ai5_widget_pane

0x9ca6,	// (0x00059519) aid_size_cell_widget_grid

0x9cbc,	// (0x0005952f) bg_ai5_widget_pane_ParamLimits

0x9cbc,	// (0x0005952f) bg_ai5_widget_pane

0x9d30,	// (0x000595a3) cell_ai5_widget_pane_g2

0x9d40,	// (0x000595b3) cell_ai5_widget_pane_g3

0x9d57,	// (0x000595ca) cell_ai5_widget_pane_g4

0x9d63,	// (0x000595d6) cell_ai5_widget_pane_g5

0x9d6f,	// (0x000595e2) cell_ai5_widget_pane_g6

0x9d7b,	// (0x000595ee) cell_ai5_widget_pane_g7

0x9dc3,	// (0x00059636) cell_ai5_widget_pane_t1_ParamLimits

0x9dc3,	// (0x00059636) cell_ai5_widget_pane_t1

0x9de0,	// (0x00059653) cell_ai5_widget_pane_t2_ParamLimits

0x9de0,	// (0x00059653) cell_ai5_widget_pane_t2

0x9df8,	// (0x0005966b) cell_ai5_widget_pane_t3_ParamLimits

0x9df8,	// (0x0005966b) cell_ai5_widget_pane_t3

0x9e10,	// (0x00059683) cell_ai5_widget_pane_t4_ParamLimits

0x9e10,	// (0x00059683) cell_ai5_widget_pane_t4

0x9e2d,	// (0x000596a0) cell_ai5_widget_pane_t5_ParamLimits

0x9e2d,	// (0x000596a0) cell_ai5_widget_pane_t5

0x9e4c,	// (0x000596bf) cell_ai5_widget_pane_t6_ParamLimits

0x9e4c,	// (0x000596bf) cell_ai5_widget_pane_t6

0x9e5e,	// (0x000596d1) cell_ai5_widget_pane_t7_ParamLimits

0x9e5e,	// (0x000596d1) cell_ai5_widget_pane_t7

0x9e77,	// (0x000596ea) cell_ai5_widget_pane_t8_ParamLimits

0x9e77,	// (0x000596ea) cell_ai5_widget_pane_t8

0x0009,

0xfe3f,	// (0x0005f6b2) cell_ai5_widget_pane_t_ParamLimits

0xfe3f,	// (0x0005f6b2) cell_ai5_widget_pane_t

0x9ecb,	// (0x0005973e) grid_ai5_widget_pane

0x3c08,	// (0x0005347b) highlight_cell_ai5_widget_pane_ParamLimits

0x3c08,	// (0x0005347b) highlight_cell_ai5_widget_pane

0xf016,	// (0x0005e889) ai5_sk_left_pane

0xf020,	// (0x0005e893) ai5_sk_middle_pane

0xf02a,	// (0x0005e89d) ai5_sk_right_pane

0x9f00,	// (0x00059773) bg_ai5_widget_pane_g1_ParamLimits

0x9f00,	// (0x00059773) bg_ai5_widget_pane_g1

0x9f0c,	// (0x0005977f) bg_ai5_widget_pane_g2_ParamLimits

0x9f0c,	// (0x0005977f) bg_ai5_widget_pane_g2

0x9f18,	// (0x0005978b) bg_ai5_widget_pane_g3_ParamLimits

0x9f18,	// (0x0005978b) bg_ai5_widget_pane_g3

0x9f24,	// (0x00059797) bg_ai5_widget_pane_g4_ParamLimits

0x9f24,	// (0x00059797) bg_ai5_widget_pane_g4

0x9f30,	// (0x000597a3) bg_ai5_widget_pane_g5_ParamLimits

0x9f30,	// (0x000597a3) bg_ai5_widget_pane_g5

0x9f3c,	// (0x000597af) bg_ai5_widget_pane_g6_ParamLimits

0x9f3c,	// (0x000597af) bg_ai5_widget_pane_g6

0x9f48,	// (0x000597bb) bg_ai5_widget_pane_g7_ParamLimits

0x9f48,	// (0x000597bb) bg_ai5_widget_pane_g7

0x9f54,	// (0x000597c7) bg_ai5_widget_pane_g8_ParamLimits

0x9f54,	// (0x000597c7) bg_ai5_widget_pane_g8

0x9f60,	// (0x000597d3) bg_ai5_widget_pane_g9_ParamLimits

0x9f60,	// (0x000597d3) bg_ai5_widget_pane_g9

0x0008,

0xfe54,	// (0x0005f6c7) bg_ai5_widget_pane_g_ParamLimits

0xfe54,	// (0x0005f6c7) bg_ai5_widget_pane_g

0x9f92,	// (0x00059805) cell_shortcut_ai5_widget_pane_ParamLimits

0x9f92,	// (0x00059805) cell_shortcut_ai5_widget_pane

0x4892,	// (0x00054105) bg_cell_shortcut_ai5_widget_pane

0x9fa3,	// (0x00059816) cell_grid_ai5_widget_pane_g1

0x4892,	// (0x00054105) highlight_cell_shortcut_ai5_widget_pane

0x50e2,	// (0x00054955) ai5_sk_left_pane_g1

0x9fac,	// (0x0005981f) ai5_sk_left_pane_g2

0x9fb4,	// (0x00059827) ai5_sk_left_pane_g3

0x9fbc,	// (0x0005982f) ai5_sk_left_pane_g4

0x0003,

0xfe67,	// (0x0005f6da) ai5_sk_left_pane_g

0x9fc4,	// (0x00059837) ai5_sk_left_pane_t1

0x50ea,	// (0x0005495d) ai5_sk_right_pane_g1

0x9fd2,	// (0x00059845) ai5_sk_right_pane_g2

0x9fda,	// (0x0005984d) ai5_sk_right_pane_g3

0x9fe2,	// (0x00059855) ai5_sk_right_pane_g4

0x0003,

0xfe70,	// (0x0005f6e3) ai5_sk_right_pane_g

0x9fea,	// (0x0005985d) ai5_sk_right_pane_t1

0x50ea,	// (0x0005495d) ai5_sk_middle_pane_g1

0x50e2,	// (0x00054955) ai5_sk_middle_pane_g2

0x5102,	// (0x00054975) ai5_sk_middle_pane_g3

0x9fda,	// (0x0005984d) ai5_sk_middle_pane_g4

0x9fb4,	// (0x00059827) ai5_sk_middle_pane_g5

0x9ff8,	// (0x0005986b) ai5_sk_middle_pane_g6

0xf034,	// (0x0005e8a7) ai5_sk_middle_pane_g7

0x0006,

0xfe79,	// (0x0005f6ec) ai5_sk_middle_pane_g

0xd374,	// (0x0005cbe7) aid_touch_area_size_lc0_ParamLimits

0xd374,	// (0x0005cbe7) aid_touch_area_size_lc0

0x1e53,	// (0x000516c6) cell_hwr_candidate_pane_t1_ParamLimits

0x4c32,	// (0x000544a5) aid_touch_navi_pane

0xd600,	// (0x0005ce73) status_dt_navi_pane_ParamLimits

0xd600,	// (0x0005ce73) status_dt_navi_pane

0xd618,	// (0x0005ce8b) status_dt_sta_pane_ParamLimits

0xd618,	// (0x0005ce8b) status_dt_sta_pane

0xf03c,	// (0x0005e8af) dt_sta_controll_pane

0xf049,	// (0x0005e8bc) dt_sta_indi_pane

0xf056,	// (0x0005e8c9) dt_sta_title_pane

0x2f19,	// (0x0005278c) bg_dt_sta_indi_pane_ParamLimits

0x2f19,	// (0x0005278c) bg_dt_sta_indi_pane

0xf068,	// (0x0005e8db) dt_sta_battery_pane

0xf070,	// (0x0005e8e3) dt_sta_indi_pane_g1

0xa04a,	// (0x000598bd) dt_sta_indi_pane_g2

0xa053,	// (0x000598c6) dt_sta_indi_pane_g3

0x0002,

0xfe88,	// (0x0005f6fb) dt_sta_indi_pane_g

0xa05c,	// (0x000598cf) dt_sta_signal_pane

0x3c08,	// (0x0005347b) bg_dt_sta_title_pane_ParamLimits

0x3c08,	// (0x0005347b) bg_dt_sta_title_pane

0xa065,	// (0x000598d8) dt_sta_title_pane_g1

0xa06d,	// (0x000598e0) dt_sta_title_pane_t1_ParamLimits

0xa06d,	// (0x000598e0) dt_sta_title_pane_t1

0x2b9c,	// (0x0005240f) bg_dt_sta_control_pane

0xf079,	// (0x0005e8ec) dt_sta_controll_pane_g1

0xa08b,	// (0x000598fe) bg_dt_sta_title_pane_g1

0xa094,	// (0x00059907) bg_dt_sta_title_pane_g2

0xa09d,	// (0x00059910) bg_dt_sta_title_pane_g3

0x0002,

0xfe8f,	// (0x0005f702) bg_dt_sta_title_pane_g

0x769f,	// (0x00056f12) bg_dt_sta_indi_pane_g1

0xa0a6,	// (0x00059919) dt_sta_signal_pane_g1

0xa0ae,	// (0x00059921) dt_sta_signal_pane_g2

0x0001,

0xfe96,	// (0x0005f709) dt_sta_signal_pane_g

0xa0b6,	// (0x00059929) dt_sta_battery_pane_g1

0xa0bf,	// (0x00059932) dt_sta_battery_pane_t1

0x769f,	// (0x00056f12) bg_dt_sta_control_pane_g1

0x4391,	// (0x00053c04) fep_china_uni_eep_pane

0x4399,	// (0x00053c0c) fep_china_uni_entry_pane_ParamLimits

0x43a9,	// (0x00053c1c) popup_fep_china_uni_window_g1_ParamLimits

0x43b9,	// (0x00053c2c) popup_fep_china_uni_window_g2_ParamLimits

0x43b9,	// (0x00053c2c) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0005ef95) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0005ef95) popup_fep_china_uni_window_g

0xa0ce,	// (0x00059941) fep_china_uni_eep_pane_g1

0xa0d6,	// (0x00059949) fep_china_uni_eep_pane_t1

0x9b52,	// (0x000593c5) aid_touch_area_size_smil_player

0x4d82,	// (0x000545f5) lc0_clock_pane

0x4f69,	// (0x000547dc) status_pane_g5_ParamLimits

0x4f69,	// (0x000547dc) status_pane_g5

0xbf0c,	// (0x0005b77f) popup_keymap_window

0x4f27,	// (0x0005479a) status_icon_pane

0x9d40,	// (0x000595b3) cell_ai5_widget_pane_g3_ParamLimits

0x9d57,	// (0x000595ca) cell_ai5_widget_pane_g4_ParamLimits

0x9d63,	// (0x000595d6) cell_ai5_widget_pane_g5_ParamLimits

0x9d87,	// (0x000595fa) cell_ai5_widget_pane_g8_ParamLimits

0x9d87,	// (0x000595fa) cell_ai5_widget_pane_g8

0x9d9b,	// (0x0005960e) cell_ai5_widget_pane_g9_ParamLimits

0x9d9b,	// (0x0005960e) cell_ai5_widget_pane_g9

0x9daf,	// (0x00059622) cell_ai5_widget_pane_g10_ParamLimits

0x9daf,	// (0x00059622) cell_ai5_widget_pane_g10

0xa0e5,	// (0x00059958) status_icon_pane_g1

0x2b9c,	// (0x0005240f) bg_popup_sub_pane_cp13

0xa0ed,	// (0x00059960) popup_keymap_window_t1

0xd302,	// (0x0005cb75) control_pane_g6_ParamLimits

0xd302,	// (0x0005cb75) control_pane_g6

0xd30f,	// (0x0005cb82) control_pane_g7_ParamLimits

0xd30f,	// (0x0005cb82) control_pane_g7

0xd31c,	// (0x0005cb8f) control_pane_g8_ParamLimits

0xd31c,	// (0x0005cb8f) control_pane_g8

0xf03c,	// (0x0005e8af) dt_sta_controll_pane_ParamLimits

0xf049,	// (0x0005e8bc) dt_sta_indi_pane_ParamLimits

0xf056,	// (0x0005e8c9) dt_sta_title_pane_ParamLimits

0x3b34,	// (0x000533a7) aid_size_touch_scroll_bar_cale

0xf514,	// (0x0005ed87) popup_discreet_window_ParamLimits

0xf514,	// (0x0005ed87) popup_discreet_window

0xb454,	// (0x0005acc7) popup_sk_window

0x5753,	// (0x00054fc6) bg_popup_sub_pane_cp28_ParamLimits

0x5753,	// (0x00054fc6) bg_popup_sub_pane_cp28

0xa0fb,	// (0x0005996e) popup_discreet_window_g1_ParamLimits

0xa0fb,	// (0x0005996e) popup_discreet_window_g1

0xa11b,	// (0x0005998e) popup_discreet_window_t1_ParamLimits

0xa11b,	// (0x0005998e) popup_discreet_window_t1

0xa139,	// (0x000599ac) popup_discreet_window_t2_ParamLimits

0xa139,	// (0x000599ac) popup_discreet_window_t2

0x0002,

0xfe9b,	// (0x0005f70e) popup_discreet_window_t_ParamLimits

0xfe9b,	// (0x0005f70e) popup_discreet_window_t

0x283d,	// (0x000520b0) popup_sk_window_g1

0x2847,	// (0x000520ba) popup_sk_window_g2

0x0001,

0xfea2,	// (0x0005f715) popup_sk_window_g

0x2851,	// (0x000520c4) popup_sk_window_t1

0x285f,	// (0x000520d2) popup_sk_window_t1_copy1

0x9d30,	// (0x000595a3) cell_ai5_widget_pane_g2_ParamLimits

0x9e89,	// (0x000596fc) cell_ai5_widget_pane_t9_ParamLimits

0x9e89,	// (0x000596fc) cell_ai5_widget_pane_t9

0x2b9c,	// (0x0005240f) main_fep_fshwr2_pane

0xcaae,	// (0x0005c321) aid_fshwr2_btn_pane

0xcabf,	// (0x0005c332) aid_fshwr2_syb_pane

0xcad0,	// (0x0005c343) aid_fshwr2_txt_pane

0xcadc,	// (0x0005c34f) fshwr2_func_candi_pane

0xcafb,	// (0x0005c36e) fshwr2_hwr_syb_pane

0xcb16,	// (0x0005c389) fshwr2_icf_pane

0xf43b,	// (0x0005ecae) fshwr2_icf_bg_pane

0x28df,	// (0x00052152) fshwr2_icf_pane_t1_ParamLimits

0x28df,	// (0x00052152) fshwr2_icf_pane_t1

0x427f,	// (0x00053af2) fshwr2_func_candi_pane_g1

0xf082,	// (0x0005e8f5) fshwr2_func_candi_row_pane_ParamLimits

0xf082,	// (0x0005e8f5) fshwr2_func_candi_row_pane

0xcb42,	// (0x0005c3b5) cell_fshwr2_syb_pane_ParamLimits

0xcb42,	// (0x0005c3b5) cell_fshwr2_syb_pane

0x1e24,	// (0x00051697) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1e24,	// (0x00051697) fshwr2_hwr_syb_pane_g1

0xf43b,	// (0x0005ecae) bg_popup_call_pane_cp01

0xcb58,	// (0x0005c3cb) fshwr2_func_candi_cell_pane_ParamLimits

0xcb58,	// (0x0005c3cb) fshwr2_func_candi_cell_pane

0xf09a,	// (0x0005e90d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf09a,	// (0x0005e90d) fshwr2_func_candi_cell_bg_pane

0xcb8d,	// (0x0005c400) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcb8d,	// (0x0005c400) fshwr2_func_candi_cell_pane_g1

0xcbbc,	// (0x0005c42f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcbbc,	// (0x0005c42f) fshwr2_func_candi_cell_pane_t1

0xf43b,	// (0x0005ecae) bg_button_pane_cp08

0xa1a7,	// (0x00059a1a) cell_fshwr2_syb_bg_pane

0xcbcf,	// (0x0005c442) cell_fshwr2_syb_bg_pane_g1

0xcbd7,	// (0x0005c44a) cell_fshwr2_syb_bg_pane_t1

0x3c08,	// (0x0005347b) main_tmo_pane

0xd97e,	// (0x0005d1f1) uni_indicator_pane_g1_ParamLimits

0xd994,	// (0x0005d207) uni_indicator_pane_g2_ParamLimits

0xd9aa,	// (0x0005d21d) uni_indicator_pane_g3_ParamLimits

0x62ae,	// (0x00055b21) uni_indicator_pane_g4_ParamLimits

0x62ae,	// (0x00055b21) uni_indicator_pane_g4

0x62c2,	// (0x00055b35) uni_indicator_pane_g5_ParamLimits

0x62c2,	// (0x00055b35) uni_indicator_pane_g5

0x62c2,	// (0x00055b35) uni_indicator_pane_g6_ParamLimits

0x62c2,	// (0x00055b35) uni_indicator_pane_g6

0xf921,	// (0x0005f194) uni_indicator_pane_g_ParamLimits

0xe42b,	// (0x0005dc9e) popup_tmo_note_window_ParamLimits

0xe42b,	// (0x0005dc9e) popup_tmo_note_window

0x20bd,	// (0x00051930) fshwr2_bg_pane

0xcbad,	// (0x0005c420) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcbad,	// (0x0005c420) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea7,	// (0x0005f71a) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea7,	// (0x0005f71a) fshwr2_func_candi_cell_pane_g

0x1e0c,	// (0x0005167f) bg_popup_window_pane_cp01

0x2994,	// (0x00052207) bg_popup_window_pane_g1_cp01

0xa1af,	// (0x00059a22) bg_popup_window_pane_cp22_ParamLimits

0xa1af,	// (0x00059a22) bg_popup_window_pane_cp22

0xa1bd,	// (0x00059a30) listscroll_tmo_link_pane_ParamLimits

0xa1bd,	// (0x00059a30) listscroll_tmo_link_pane

0xa1fd,	// (0x00059a70) popup_tmo_note_window_g1_ParamLimits

0xa1fd,	// (0x00059a70) popup_tmo_note_window_g1

0xa20a,	// (0x00059a7d) tmo_note_info_pane_ParamLimits

0xa20a,	// (0x00059a7d) tmo_note_info_pane

0xf0a6,	// (0x0005e919) list_tmo_note_info_pane_g1_ParamLimits

0xf0a6,	// (0x0005e919) list_tmo_note_info_pane_g1

0xa23b,	// (0x00059aae) list_tmo_note_info_pane_g2_ParamLimits

0xa23b,	// (0x00059aae) list_tmo_note_info_pane_g2

0x0001,

0xfeac,	// (0x0005f71f) list_tmo_note_info_pane_g_ParamLimits

0xfeac,	// (0x0005f71f) list_tmo_note_info_pane_g

0xa257,	// (0x00059aca) list_tmo_note_info_text_pane_ParamLimits

0xa257,	// (0x00059aca) list_tmo_note_info_text_pane

0xa2d8,	// (0x00059b4b) list_tmo_link_pane

0xa2e5,	// (0x00059b58) scroll_pane_cp20

0xa2f2,	// (0x00059b65) list_single_tmo_link_pane_ParamLimits

0xa2f2,	// (0x00059b65) list_single_tmo_link_pane

0xa302,	// (0x00059b75) list_single_tmo_link_pane_t1

0xa310,	// (0x00059b83) list_tmo_note_info_text_pane_t1_ParamLimits

0xa310,	// (0x00059b83) list_tmo_note_info_text_pane_t1

0xcfa6,	// (0x0005c819) aid_size_touch_scroll_bar_cp01_ParamLimits

0xcfa6,	// (0x0005c819) aid_size_touch_scroll_bar_cp01

0xba64,	// (0x0005b2d7) aid_size_touch_slider_marker

0xb444,	// (0x0005acb7) popup_settings_window_ParamLimits

0xb444,	// (0x0005acb7) popup_settings_window

0x0e65,	// (0x000506d8) popup_candi_list_indi_window

0x4c32,	// (0x000544a5) aid_touch_navi_pane_ParamLimits

0x2018,	// (0x0005188b) rs_clock_indi_pane

0x2021,	// (0x00051894) sctrl_sk_bottom_pane_ParamLimits

0x2032,	// (0x000518a5) sctrl_sk_top_pane_ParamLimits

0x2135,	// (0x000519a8) popup_fep_tooltip_window

0x9ca6,	// (0x00059519) aid_size_cell_widget_grid_ParamLimits

0x9d1b,	// (0x0005958e) cell_ai5_widget_pane_g1_ParamLimits

0x9d1b,	// (0x0005958e) cell_ai5_widget_pane_g1

0x9d6f,	// (0x000595e2) cell_ai5_widget_pane_g6_ParamLimits

0x9d7b,	// (0x000595ee) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2a,	// (0x0005f69d) cell_ai5_widget_pane_g_ParamLimits

0xfe2a,	// (0x0005f69d) cell_ai5_widget_pane_g

0x9ead,	// (0x00059720) cell_ai5_widget_pane_t10_ParamLimits

0x9ead,	// (0x00059720) cell_ai5_widget_pane_t10

0x9ecb,	// (0x0005973e) grid_ai5_widget_pane_ParamLimits

0x9f6c,	// (0x000597df) cell_contacts_ai5_widget_pane_ParamLimits

0x9f6c,	// (0x000597df) cell_contacts_ai5_widget_pane

0xa14e,	// (0x000599c1) popup_discreet_window_t3_ParamLimits

0xa14e,	// (0x000599c1) popup_discreet_window_t3

0xcb2e,	// (0x0005c3a1) popup_fshwr2_char_preview_window_ParamLimits

0xcb2e,	// (0x0005c3a1) popup_fshwr2_char_preview_window

0xf0bd,	// (0x0005e930) tmo_note_info_pane_t1

0xf0d2,	// (0x0005e945) tmo_note_info_pane_t2

0xf0e9,	// (0x0005e95c) tmo_note_info_pane_t3

0xa2b4,	// (0x00059b27) tmo_note_info_pane_t4

0xa2c6,	// (0x00059b39) tmo_note_info_pane_t5

0x0004,

0xfeb1,	// (0x0005f724) tmo_note_info_pane_t

0xa2d8,	// (0x00059b4b) list_tmo_link_pane_ParamLimits

0xa2e5,	// (0x00059b58) scroll_pane_cp20_ParamLimits

0xf43b,	// (0x0005ecae) bg_popup_fep_char_preview_window_cp01

0xa329,	// (0x00059b9c) popup_fshwr2_char_preview_window_t1

0xa337,	// (0x00059baa) popup_candi_list_indi_window_g1

0xa340,	// (0x00059bb3) bg_cell_contacts_ai5_widget_pane

0xa34c,	// (0x00059bbf) cell_contacts_ai5_widget_pane_g1

0x7d49,	// (0x000575bc) cell_contacts_ai5_widget_pane_g2

0xa361,	// (0x00059bd4) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebc,	// (0x0005f72f) cell_contacts_ai5_widget_pane_g

0xa36d,	// (0x00059be0) cell_contacts_ai5_widget_pane_t1

0x3c08,	// (0x0005347b) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf163,	// (0x0005e9d6) settings_container_pane

0x4892,	// (0x00054105) listscroll_set_pane_copy1

0x6d94,	// (0x00056607) scroll_pane_cp121_copy1

0xa3f0,	// (0x00059c63) set_content_pane_copy1

0xf16f,	// (0x0005e9e2) aid_height_set_list_copy1_ParamLimits

0xf16f,	// (0x0005e9e2) aid_height_set_list_copy1

0x64ba,	// (0x00055d2d) aid_size_parent_copy1_ParamLimits

0x64ba,	// (0x00055d2d) aid_size_parent_copy1

0xf17b,	// (0x0005e9ee) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf17b,	// (0x0005e9ee) button_value_adjust_pane_cp6_copy1

0x4bd0,	// (0x00054443) list_highlight_pane_cp2_copy1_ParamLimits

0x4bd0,	// (0x00054443) list_highlight_pane_cp2_copy1

0xf18f,	// (0x0005ea02) list_set_pane_copy1_ParamLimits

0xf18f,	// (0x0005ea02) list_set_pane_copy1

0xf0fe,	// (0x0005e971) main_pane_set_t1_copy1_ParamLimits

0xf0fe,	// (0x0005e971) main_pane_set_t1_copy1

0xf138,	// (0x0005e9ab) main_pane_set_t2_copy1_ParamLimits

0xf138,	// (0x0005e9ab) main_pane_set_t2_copy1

0xf23c,	// (0x0005eaaf) main_pane_set_t3_copy1

0xf24a,	// (0x0005eabd) main_pane_set_t4_copy1

0xf157,	// (0x0005e9ca) set_content_pane_g1_copy1_ParamLimits

0xf157,	// (0x0005e9ca) set_content_pane_g1_copy1

0xf258,	// (0x0005eacb) setting_code_pane_copy1

0xa4e9,	// (0x00059d5c) setting_slider_graphic_pane_copy1

0xa4e9,	// (0x00059d5c) setting_slider_pane_copy1

0xa4e9,	// (0x00059d5c) setting_text_pane_copy1

0xa4e9,	// (0x00059d5c) setting_volume_pane_copy1

0xf258,	// (0x0005eacb) settings_code_pane_cp2_copy1

0xf260,	// (0x0005ead3) settings_code_pane_cp_copy1_ParamLimits

0xf260,	// (0x0005ead3) settings_code_pane_cp_copy1

0xcbe6,	// (0x0005c459) volume_set_pane_copy1

0xf274,	// (0x0005eae7) volume_set_pane_g10_copy1

0xf27c,	// (0x0005eaef) volume_set_pane_g1_copy1

0xf284,	// (0x0005eaf7) volume_set_pane_g2_copy1

0xf28c,	// (0x0005eaff) volume_set_pane_g3_copy1

0xf294,	// (0x0005eb07) volume_set_pane_g4_copy1

0xf29c,	// (0x0005eb0f) volume_set_pane_g5_copy1

0xf2a4,	// (0x0005eb17) volume_set_pane_g6_copy1

0xf2ac,	// (0x0005eb1f) volume_set_pane_g7_copy1

0xf2b4,	// (0x0005eb27) volume_set_pane_g8_copy1

0xf2bc,	// (0x0005eb2f) volume_set_pane_g9_copy1

0x2c90,	// (0x00052503) bg_set_opt_pane_cp_copy1_ParamLimits

0x2c90,	// (0x00052503) bg_set_opt_pane_cp_copy1

0x29a5,	// (0x00052218) setting_slider_pane_t1_copy1_ParamLimits

0x29a5,	// (0x00052218) setting_slider_pane_t1_copy1

0xcbee,	// (0x0005c461) setting_slider_pane_t2_copy1_ParamLimits

0xcbee,	// (0x0005c461) setting_slider_pane_t2_copy1

0xcc08,	// (0x0005c47b) setting_slider_pane_t3_copy1_ParamLimits

0xcc08,	// (0x0005c47b) setting_slider_pane_t3_copy1

0xcc20,	// (0x0005c493) slider_set_pane_copy1_ParamLimits

0xcc20,	// (0x0005c493) slider_set_pane_copy1

0x3c57,	// (0x000534ca) set_opt_bg_pane_g1_copy2

0x3c5f,	// (0x000534d2) set_opt_bg_pane_g2_copy2

0xa555,	// (0x00059dc8) set_opt_bg_pane_g3_copy2

0x3c6f,	// (0x000534e2) set_opt_bg_pane_g4_copy2

0x3c77,	// (0x000534ea) set_opt_bg_pane_g5_copy2

0x3c7f,	// (0x000534f2) set_opt_bg_pane_g6_copy2

0xf2c4,	// (0x0005eb37) set_opt_bg_pane_g7_copy2

0xa567,	// (0x00059dda) set_opt_bg_pane_g8_copy2

0xa571,	// (0x00059de4) set_opt_bg_pane_g9_copy2

0x2a0b,	// (0x0005227e) aid_size_touch_slider_mark_copy1_ParamLimits

0x2a0b,	// (0x0005227e) aid_size_touch_slider_mark_copy1

0xa57b,	// (0x00059dee) slider_set_pane_g1_copy1

0x2a1f,	// (0x00052292) slider_set_pane_g2_copy1

0x1838,	// (0x000510ab) slider_set_pane_g3_copy1_ParamLimits

0x1838,	// (0x000510ab) slider_set_pane_g3_copy1

0x184c,	// (0x000510bf) slider_set_pane_g4_copy1_ParamLimits

0x184c,	// (0x000510bf) slider_set_pane_g4_copy1

0x1864,	// (0x000510d7) slider_set_pane_g5_copy1_ParamLimits

0x1864,	// (0x000510d7) slider_set_pane_g5_copy1

0x1838,	// (0x000510ab) slider_set_pane_g6_copy1_ParamLimits

0x1838,	// (0x000510ab) slider_set_pane_g6_copy1

0xcc36,	// (0x0005c4a9) slider_set_pane_g7_copy1_ParamLimits

0xcc36,	// (0x0005c4a9) slider_set_pane_g7_copy1

0x2bb0,	// (0x00052423) bg_set_opt_pane_cp2_copy1

0xa584,	// (0x00059df7) setting_slider_graphic_pane_g1_copy1

0xf2cc,	// (0x0005eb3f) setting_slider_graphic_pane_t1_copy1

0xf2dc,	// (0x0005eb4f) setting_slider_graphic_pane_t2_copy1

0xf2ec,	// (0x0005eb5f) slider_set_pane_cp_copy1

0xa5bd,	// (0x00059e30) input_focus_pane_cp1_copy1

0xa5c6,	// (0x00059e39) list_set_text_pane_copy1

0xa5ce,	// (0x00059e41) setting_text_pane_g1_copy1

0xcc4c,	// (0x0005c4bf) set_text_pane_t1_copy1

0xa5bd,	// (0x00059e30) input_focus_pane_cp2_copy1

0xa5ce,	// (0x00059e41) setting_code_pane_g1_copy1

0xf2f4,	// (0x0005eb67) setting_code_pane_t1_copy1

0x6bbe,	// (0x00056431) list_set_graphic_pane_copy1

0x2bb0,	// (0x00052423) bg_set_opt_pane_cp4_copy1

0xd17d,	// (0x0005c9f0) list_set_graphic_pane_g1_copy1_ParamLimits

0xd17d,	// (0x0005c9f0) list_set_graphic_pane_g1_copy1

0xf302,	// (0x0005eb75) list_set_graphic_pane_g2_copy1

0xd195,	// (0x0005ca08) list_set_graphic_pane_t1_copy1_ParamLimits

0xd195,	// (0x0005ca08) list_set_graphic_pane_t1_copy1

0x769f,	// (0x00056f12) rs_clock_indi_pane_g1

0xa5ff,	// (0x00059e72) rs_clock_indi_pane_t1

0xa60d,	// (0x00059e80) rs_indi_pane

0xa615,	// (0x00059e88) rs_indi_pane_g1

0xa61e,	// (0x00059e91) rs_indi_pane_g2

0xa627,	// (0x00059e9a) rs_indi_pane_g3

0x0002,

0xfec3,	// (0x0005f736) rs_indi_pane_g

0x4892,	// (0x00054105) bg_popup_preview_window_pane_cp03

0xa630,	// (0x00059ea3) popup_fep_tooltip_window_t1

0x8327,	// (0x00057b9a) popup_note2_window_g2_ParamLimits

0x8327,	// (0x00057b9a) popup_note2_window_g2

0x0001,

0xfc5c,	// (0x0005f4cf) popup_note2_window_g_ParamLimits

0xfc5c,	// (0x0005f4cf) popup_note2_window_g

0x8843,	// (0x000580b6) bg_popup_sub_pane_cp11_ParamLimits

0x8850,	// (0x000580c3) cell_ai3_links_pane_g1_ParamLimits

0x8867,	// (0x000580da) cell_ai3_links_pane_t1

0xcc4c,	// (0x0005c4bf) set_text_pane_t1_copy1_ParamLimits

0x47a3,	// (0x00054016) cell_graphic_popup_pane_cp2_ParamLimits

0x47a3,	// (0x00054016) cell_graphic_popup_pane_cp2

0xa63e,	// (0x00059eb1) cell_graphic_popup_pane_g1_cp2

0x3947,	// (0x000531ba) cell_graphic_popup_pane_g2_cp2

0xa646,	// (0x00059eb9) cell_graphic_popup_pane_g3_cp2

0xa64e,	// (0x00059ec1) cell_graphic_popup_pane_t2_cp2

0x3958,	// (0x000531cb) grid_highlight_pane_cp3_cp2

0x3f9c,	// (0x0005380f) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3c08,	// (0x0005347b) main_tmo_pane_ParamLimits

0xe41f,	// (0x0005dc92) popup_tmo_big_image_note_window

0x9d0a,	// (0x0005957d) cell_ai5_widget_list_pane

0x9d12,	// (0x00059585) cell_ai5_widget_lrg_icon_pane

0xf0bd,	// (0x0005e930) tmo_note_info_pane_t1_ParamLimits

0xf0d2,	// (0x0005e945) tmo_note_info_pane_t2_ParamLimits

0xf0e9,	// (0x0005e95c) tmo_note_info_pane_t3_ParamLimits

0xa2b4,	// (0x00059b27) tmo_note_info_pane_t4_ParamLimits

0xa2c6,	// (0x00059b39) tmo_note_info_pane_t5_ParamLimits

0xfeb1,	// (0x0005f724) tmo_note_info_pane_t_ParamLimits

0xf163,	// (0x0005e9d6) settings_container_pane_ParamLimits

0xa5b5,	// (0x00059e28) indicator_popup_pane_cp5

0xa5b5,	// (0x00059e28) indicator_popup_pane_cp6

0x6bbe,	// (0x00056431) list_set_graphic_pane_copy1_ParamLimits

0x2b9c,	// (0x0005240f) bg_popup_window_pane_cp23

0xa65c,	// (0x00059ecf) popup_tmo_big_image_note_window_g1

0xa666,	// (0x00059ed9) popup_tmo_big_image_note_window_t1

0xa676,	// (0x00059ee9) popup_tmo_big_image_note_window_t2

0xa686,	// (0x00059ef9) popup_tmo_big_image_note_window_t3

0x0002,

0xfeca,	// (0x0005f73d) popup_tmo_big_image_note_window_t

0x769f,	// (0x00056f12) cell_ai5_widget_lrg_icon_pane_g1

0xa696,	// (0x00059f09) cell_ai5_widget_lrg_icon_pane_t1

0xa6a4,	// (0x00059f17) cell_ai5_widget_list_row_pane_ParamLimits

0xa6a4,	// (0x00059f17) cell_ai5_widget_list_row_pane

0xa6bb,	// (0x00059f2e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa6bb,	// (0x00059f2e) cell_ai5_widget_list_row_pane_g1

0xa6c8,	// (0x00059f3b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa6c8,	// (0x00059f3b) cell_ai5_widget_list_row_pane_t1

0xa6f9,	// (0x00059f6c) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa6f9,	// (0x00059f6c) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed1,	// (0x0005f744) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed1,	// (0x0005f744) cell_ai5_widget_list_row_pane_t

0xf43b,	// (0x0005ecae) main_fep_vtchi_ss_pane

0xa73d,	// (0x00059fb0) popup_fep_char_pre_window

0xa745,	// (0x00059fb8) popup_fep_ituss_window

0xa766,	// (0x00059fd9) popup_fep_vkbss_window

0xa785,	// (0x00059ff8) grid_vkbss_keypad_pane_ParamLimits

0xa785,	// (0x00059ff8) grid_vkbss_keypad_pane

0xa795,	// (0x0005a008) ituss_keypad_pane

0x2a49,	// (0x000522bc) aid_vkbss_key_offset_ParamLimits

0x2a49,	// (0x000522bc) aid_vkbss_key_offset

0x2a55,	// (0x000522c8) cell_vkbss_key_pane_ParamLimits

0x2a55,	// (0x000522c8) cell_vkbss_key_pane

0xa7a4,	// (0x0005a017) bg_cell_vkbss_key_g1_ParamLimits

0xa7a4,	// (0x0005a017) bg_cell_vkbss_key_g1

0xa7b0,	// (0x0005a023) cell_vkbss_key_3p_pane_ParamLimits

0xa7b0,	// (0x0005a023) cell_vkbss_key_3p_pane

0xa7ca,	// (0x0005a03d) cell_vkbss_key_g1_ParamLimits

0xa7ca,	// (0x0005a03d) cell_vkbss_key_g1

0xa7e4,	// (0x0005a057) cell_vkbss_key_t1_ParamLimits

0xa7e4,	// (0x0005a057) cell_vkbss_key_t1

0x2a6b,	// (0x000522de) cell_ituss_key_pane_ParamLimits

0x2a6b,	// (0x000522de) cell_ituss_key_pane

0xa80f,	// (0x0005a082) bg_cell_ituss_key_g1_ParamLimits

0xa80f,	// (0x0005a082) bg_cell_ituss_key_g1

0xa81b,	// (0x0005a08e) cell_ituss_key_pane_g1_ParamLimits

0xa81b,	// (0x0005a08e) cell_ituss_key_pane_g1

0x2a7c,	// (0x000522ef) cell_ituss_key_pane_g2_ParamLimits

0x2a7c,	// (0x000522ef) cell_ituss_key_pane_g2

0x0002,

0xfed8,	// (0x0005f74b) cell_ituss_key_pane_g_ParamLimits

0xfed8,	// (0x0005f74b) cell_ituss_key_pane_g

0x2aa8,	// (0x0005231b) cell_ituss_key_t1_ParamLimits

0x2aa8,	// (0x0005231b) cell_ituss_key_t1

0x2ae2,	// (0x00052355) cell_ituss_key_t2_ParamLimits

0x2ae2,	// (0x00052355) cell_ituss_key_t2

0x2b13,	// (0x00052386) cell_ituss_key_t3_ParamLimits

0x2b13,	// (0x00052386) cell_ituss_key_t3

0x2ae2,	// (0x00052355) cell_ituss_key_t4_ParamLimits

0x2ae2,	// (0x00052355) cell_ituss_key_t4

0x0004,

0xfedf,	// (0x0005f752) cell_ituss_key_t_ParamLimits

0xfedf,	// (0x0005f752) cell_ituss_key_t

0xa847,	// (0x0005a0ba) cell_vkbss_key_3p_pane_g1

0xa84f,	// (0x0005a0c2) cell_vkbss_key_3p_pane_g2

0xa857,	// (0x0005a0ca) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeea,	// (0x0005f75d) cell_vkbss_key_3p_pane_g

0xf43b,	// (0x0005ecae) bg_popup_fep_char_preview_window_cp02

0x2b56,	// (0x000523c9) popup_fep_char_pre_window_t1

0xf00c,	// (0x0005e87f) main_ai5_sk_pane

0xa340,	// (0x00059bb3) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa34c,	// (0x00059bbf) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7d49,	// (0x000575bc) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa361,	// (0x00059bd4) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebc,	// (0x0005f72f) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa36d,	// (0x00059be0) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3c08,	// (0x0005347b) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf30a,	// (0x0005eb7d) main_ai5_sk_pane_g1

0x558c,	// (0x00054dff) popup_query_code_window_g1

0xa75b,	// (0x00059fce) popup_fep_vkb_icf_pane

0xa76f,	// (0x00059fe2) popup_fep_vtchi_icf_pane

0xa868,	// (0x0005a0db) bg_icf_pane

0xa874,	// (0x0005a0e7) list_vkb_icf_pane

0xa880,	// (0x0005a0f3) bg_icf_pane_cp01

0xa893,	// (0x0005a106) vtchi_icf_list_pane

0xa8a3,	// (0x0005a116) list_vkb_icf_pane_t1_ParamLimits

0xa8a3,	// (0x0005a116) list_vkb_icf_pane_t1

0xa8b9,	// (0x0005a12c) vtchi_icf_list_pane_t1_ParamLimits

0xa8b9,	// (0x0005a12c) vtchi_icf_list_pane_t1

0xa745,	// (0x00059fb8) popup_fep_ituss_window_ParamLimits

0xa76f,	// (0x00059fe2) popup_fep_vtchi_icf_pane_ParamLimits

0xa795,	// (0x0005a008) ituss_keypad_pane_ParamLimits

0x2a3d,	// (0x000522b0) ituss_sks_pane

0xa868,	// (0x0005a0db) bg_icf_pane_ParamLimits

0xa721,	// (0x00059f94) icf_edit_indi_pane_ParamLimits

0xa721,	// (0x00059f94) icf_edit_indi_pane

0xa874,	// (0x0005a0e7) list_vkb_icf_pane_ParamLimits

0xa880,	// (0x0005a0f3) bg_icf_pane_cp01_ParamLimits

0xa730,	// (0x00059fa3) icf_edit_indi_pane_cp01_ParamLimits

0xa730,	// (0x00059fa3) icf_edit_indi_pane_cp01

0xa89b,	// (0x0005a10e) vtchi_query_pane

0x791d,	// (0x00057190) icf_edit_indi_pane_g1_ParamLimits

0x791d,	// (0x00057190) icf_edit_indi_pane_g1

0xa92a,	// (0x0005a19d) icf_edit_indi_pane_g2_ParamLimits

0xa92a,	// (0x0005a19d) icf_edit_indi_pane_g2

0x0001,

0xff02,	// (0x0005f775) icf_edit_indi_pane_g_ParamLimits

0xff02,	// (0x0005f775) icf_edit_indi_pane_g

0xa939,	// (0x0005a1ac) icf_edit_indi_pane_t1

0xa8d3,	// (0x0005a146) bg_input_focus_pane_cp042

0x3b2b,	// (0x0005339e) vtchi_button_pane

0xa8dc,	// (0x0005a14f) vtchi_query_pane_t1

0xa8ea,	// (0x0005a15d) vtchi_query_pane_t2

0xa8f8,	// (0x0005a16b) vtchi_query_pane_t3

0x0002,

0xfef1,	// (0x0005f764) vtchi_query_pane_t

0xf43b,	// (0x0005ecae) bg_button_pane_cp13

0xa906,	// (0x0005a179) vtchi_button_pane_g1

0x2b65,	// (0x000523d8) ituss_sks_pane_g1

0x2b70,	// (0x000523e3) ituss_sks_pane_g2

0x0001,

0xfef8,	// (0x0005f76b) ituss_sks_pane_g

0xa90e,	// (0x0005a181) ituss_sks_pane_t1

0xa91c,	// (0x0005a18f) ituss_sks_pane_t2

0x0001,

0xfefd,	// (0x0005f770) ituss_sks_pane_t

0x710e,	// (0x00056981) indicator_nsta_pane_cp_g1

0x7117,	// (0x0005698a) indicator_nsta_pane_cp_g2

0x711f,	// (0x00056992) indicator_nsta_pane_cp_g3

0x7127,	// (0x0005699a) indicator_nsta_pane_cp_g4

0x712f,	// (0x000569a2) indicator_nsta_pane_cp_g5

0x712f,	// (0x000569a2) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x0005f30d) indicator_nsta_pane_cp_g

0xee05,	// (0x0005e678) cell_graphic2_pane_t2_ParamLimits

0xee05,	// (0x0005e678) cell_graphic2_pane_t2

0x0001,

0xfdb3,	// (0x0005f626) cell_graphic2_pane_t_ParamLimits

0xfdb3,	// (0x0005f626) cell_graphic2_pane_t

0xee3b,	// (0x0005e6ae) cell_graphic2_control_pane_t1

0xd151,	// (0x0005c9c4) signal_pane_g3_ParamLimits

0xd151,	// (0x0005c9c4) signal_pane_g3

0xd165,	// (0x0005c9d8) signal_pane_g4_ParamLimits

0xd165,	// (0x0005c9d8) signal_pane_g4

0xa70b,	// (0x00059f7e) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa70b,	// (0x00059f7e) cell_ai5_widget_list_row_pane_t3

0xa835,	// (0x0005a0a8) cell_ituss_key_pane_t1_ParamLimits

0xa835,	// (0x0005a0a8) cell_ituss_key_pane_t1

0x51df,	// (0x00054a52) form_field_data_wide_pane_vc_t2_ParamLimits

0x51df,	// (0x00054a52) form_field_data_wide_pane_vc_t2

0x51f3,	// (0x00054a66) form_field_data_wide_pane_vc_t3_ParamLimits

0x51f3,	// (0x00054a66) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0005f07c) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0005f07c) form_field_data_wide_pane_vc_t

0x6dd6,	// (0x00056649) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6dd6,	// (0x00056649) form_field_slider_wide_pane_vc_t3

0x6eb4,	// (0x00056727) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6eb4,	// (0x00056727) form_field_popup_wide_pane_vc_t2

0x6ecb,	// (0x0005673e) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6ecb,	// (0x0005673e) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x0005f2fc) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0005f2fc) form_field_popup_wide_pane_vc_t

0xcaae,	// (0x0005c321) aid_fshwr2_btn_pane_ParamLimits

0xcabf,	// (0x0005c332) aid_fshwr2_syb_pane_ParamLimits

0xcad0,	// (0x0005c343) aid_fshwr2_txt_pane_ParamLimits

0x20bd,	// (0x00051930) fshwr2_bg_pane_ParamLimits

0xcadc,	// (0x0005c34f) fshwr2_func_candi_pane_ParamLimits

0xcafb,	// (0x0005c36e) fshwr2_hwr_syb_pane_ParamLimits

0xcb16,	// (0x0005c389) fshwr2_icf_pane_ParamLimits

0x32d1,	// (0x00052b44) list_double_graphic_pane_vc_g4_ParamLimits

0x32d1,	// (0x00052b44) list_double_graphic_pane_vc_g4

0x2a9c,	// (0x0005230f) cell_ituss_key_pane_g3_ParamLimits

0x2a9c,	// (0x0005230f) cell_ituss_key_pane_g3

0x2b44,	// (0x000523b7) cell_ituss_key_t5_ParamLimits

0x2b44,	// (0x000523b7) cell_ituss_key_t5
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

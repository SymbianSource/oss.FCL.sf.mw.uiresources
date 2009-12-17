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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002744f };

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
0x7367,	// (0x0002e7b6) Screen

0x7373,	// (0x0002e7c2) application_window_ParamLimits

0x7373,	// (0x0002e7c2) application_window

0xae56,	// (0x000322a5) screen_g1

0x73ab,	// (0x0002e7fa) area_bottom_pane_ParamLimits

0x73ab,	// (0x0002e7fa) area_bottom_pane

0x0433,	// (0x00027882) area_top_pane_ParamLimits

0x0433,	// (0x00027882) area_top_pane

0x04d1,	// (0x00027920) main_pane_ParamLimits

0x04d1,	// (0x00027920) main_pane

0xae60,	// (0x000322af) misc_graphics

0x92fc,	// (0x0003074b) battery_pane_ParamLimits

0x92fc,	// (0x0003074b) battery_pane

0xd1f5,	// (0x00034644) bg_status_flat_pane_g8

0xd1fd,	// (0x0003464c) bg_status_flat_pane_g9

0xc926,	// (0x00033d75) context_pane_ParamLimits

0xc926,	// (0x00033d75) context_pane

0x9467,	// (0x000308b6) navi_pane_ParamLimits

0x9467,	// (0x000308b6) navi_pane

0x94de,	// (0x0003092d) signal_pane_ParamLimits

0x94de,	// (0x0003092d) signal_pane

0x0008,

0xf8ad,	// (0x00036cfc) bg_status_flat_pane_g

0x956e,	// (0x000309bd) status_pane_g1_ParamLimits

0x956e,	// (0x000309bd) status_pane_g1

0x9584,	// (0x000309d3) status_pane_g2_ParamLimits

0x9584,	// (0x000309d3) status_pane_g2

0xc98b,	// (0x00033dda) status_pane_g3_ParamLimits

0xc98b,	// (0x00033dda) status_pane_g3

0x0004,

0xf7e0,	// (0x00036c2f) status_pane_g_ParamLimits

0xf7e0,	// (0x00036c2f) status_pane_g

0x9590,	// (0x000309df) title_pane_ParamLimits

0x9590,	// (0x000309df) title_pane

0x95f1,	// (0x00030a40) uni_indicator_pane_ParamLimits

0x95f1,	// (0x00030a40) uni_indicator_pane

0xc755,	// (0x00033ba4) bg_list_pane_ParamLimits

0xc755,	// (0x00033ba4) bg_list_pane

0x8a5c,	// (0x0002feab) find_pane

0x8a64,	// (0x0002feb3) listscroll_app_pane_ParamLimits

0x8a64,	// (0x0002feb3) listscroll_app_pane

0xc775,	// (0x00033bc4) listscroll_form_pane

0x8a70,	// (0x0002febf) listscroll_gen_pane_ParamLimits

0x8a70,	// (0x0002febf) listscroll_gen_pane

0xc775,	// (0x00033bc4) listscroll_set_pane

0xd7ed,	// (0x00034c3c) main_idle_act_pane

0xc533,	// (0x00033982) main_idle_trad_pane

0xc533,	// (0x00033982) main_list_empty_pane

0xbc66,	// (0x000330b5) main_midp_pane

0xc78f,	// (0x00033bde) main_pane_g1_ParamLimits

0xc78f,	// (0x00033bde) main_pane_g1

0x8a84,	// (0x0002fed3) popup_ai_message_window_ParamLimits

0x8a84,	// (0x0002fed3) popup_ai_message_window

0x8b15,	// (0x0002ff64) popup_fep_china_uni_window_ParamLimits

0x8b15,	// (0x0002ff64) popup_fep_china_uni_window

0xc7c1,	// (0x00033c10) popup_fep_japan_candidate_window_ParamLimits

0xc7c1,	// (0x00033c10) popup_fep_japan_candidate_window

0xc7e1,	// (0x00033c30) popup_fep_japan_predictive_window_ParamLimits

0xc7e1,	// (0x00033c30) popup_fep_japan_predictive_window

0x8b71,	// (0x0002ffc0) popup_find_window

0x8b8e,	// (0x0002ffdd) popup_grid_graphic_window_ParamLimits

0x8b8e,	// (0x0002ffdd) popup_grid_graphic_window

0xc811,	// (0x00033c60) popup_large_graphic_colour_window

0x8c26,	// (0x00030075) popup_menu_window_ParamLimits

0x8c26,	// (0x00030075) popup_menu_window

0x8de0,	// (0x0003022f) popup_note_image_window

0x8da6,	// (0x000301f5) popup_note_wait_window_ParamLimits

0x8da6,	// (0x000301f5) popup_note_wait_window

0x8df8,	// (0x00030247) popup_note_window_ParamLimits

0x8df8,	// (0x00030247) popup_note_window

0x8e9e,	// (0x000302ed) popup_query_code_window_ParamLimits

0x8e9e,	// (0x000302ed) popup_query_code_window

0xc837,	// (0x00033c86) popup_query_data_code_window_ParamLimits

0xc837,	// (0x00033c86) popup_query_data_code_window

0x8ed8,	// (0x00030327) popup_query_data_window_ParamLimits

0x8ed8,	// (0x00030327) popup_query_data_window

0x90ca,	// (0x00030519) popup_query_sat_info_window_ParamLimits

0x90ca,	// (0x00030519) popup_query_sat_info_window

0x9161,	// (0x000305b0) popup_snote_single_graphic_window_ParamLimits

0x9161,	// (0x000305b0) popup_snote_single_graphic_window

0x9161,	// (0x000305b0) popup_snote_single_text_window_ParamLimits

0x9161,	// (0x000305b0) popup_snote_single_text_window

0xc854,	// (0x00033ca3) popup_sub_window_general

0xc89c,	// (0x00033ceb) popup_window_general_ParamLimits

0xc89c,	// (0x00033ceb) popup_window_general

0xc8b1,	// (0x00033d00) power_save_pane

0x7b08,	// (0x0002ef57) control_pane_g1_ParamLimits

0x7b08,	// (0x0002ef57) control_pane_g1

0x122c,	// (0x0002867b) control_pane_g2_ParamLimits

0x122c,	// (0x0002867b) control_pane_g2

0xc72f,	// (0x00033b7e) control_pane_g3_ParamLimits

0xc72f,	// (0x00033b7e) control_pane_g3

0x0007,

0xf7c8,	// (0x00036c17) control_pane_g_ParamLimits

0xf7c8,	// (0x00036c17) control_pane_g

0x7b3f,	// (0x0002ef8e) control_pane_t1_ParamLimits

0x7b3f,	// (0x0002ef8e) control_pane_t1

0x7b9d,	// (0x0002efec) control_pane_t2_ParamLimits

0x7b9d,	// (0x0002efec) control_pane_t2

0x0002,

0xf7d9,	// (0x00036c28) control_pane_t_ParamLimits

0xf7d9,	// (0x00036c28) control_pane_t

0xc650,	// (0x00033a9f) navi_navi_volume_pane_cp1

0xc659,	// (0x00033aa8) status_small_icon_pane

0xc661,	// (0x00033ab0) status_small_pane_g1_ParamLimits

0xc661,	// (0x00033ab0) status_small_pane_g1

0xc695,	// (0x00033ae4) status_small_pane_g2_ParamLimits

0xc695,	// (0x00033ae4) status_small_pane_g2

0xc6a1,	// (0x00033af0) status_small_pane_g3_ParamLimits

0xc6a1,	// (0x00033af0) status_small_pane_g3

0xc6ad,	// (0x00033afc) status_small_pane_g4_ParamLimits

0xc6ad,	// (0x00033afc) status_small_pane_g4

0xc6b9,	// (0x00033b08) status_small_pane_g5_ParamLimits

0xc6b9,	// (0x00033b08) status_small_pane_g5

0xc6c8,	// (0x00033b17) status_small_pane_g6_ParamLimits

0xc6c8,	// (0x00033b17) status_small_pane_g6

0x0007,

0xf7b7,	// (0x00036c06) status_small_pane_g_ParamLimits

0xf7b7,	// (0x00036c06) status_small_pane_g

0xc6f8,	// (0x00033b47) status_small_pane_t1

0xc71b,	// (0x00033b6a) status_small_wait_pane_ParamLimits

0xc71b,	// (0x00033b6a) status_small_wait_pane

0x88b2,	// (0x0002fd01) aid_levels_signal_ParamLimits

0x88b2,	// (0x0002fd01) aid_levels_signal

0x88ca,	// (0x0002fd19) signal_pane_g1_ParamLimits

0x88ca,	// (0x0002fd19) signal_pane_g1

0x88e5,	// (0x0002fd34) signal_pane_g2_ParamLimits

0x88e5,	// (0x0002fd34) signal_pane_g2

0x0001,

0xf74c,	// (0x00036b9b) signal_pane_g_ParamLimits

0xf74c,	// (0x00036b9b) signal_pane_g

0xc099,	// (0x000334e8) context_pane_g1

0x8386,	// (0x0002f7d5) title_pane_g1

0x83bb,	// (0x0002f80a) title_pane_t1

0xae76,	// (0x000322c5) title_pane_t2

0xae9c,	// (0x000322eb) title_pane_t3

0x0002,

0xf59b,	// (0x000369ea) title_pane_t

0x9619,	// (0x00030a68) aid_levels_battery_ParamLimits

0x9619,	// (0x00030a68) aid_levels_battery

0x9635,	// (0x00030a84) battery_pane_g1_ParamLimits

0x9635,	// (0x00030a84) battery_pane_g1

0x9652,	// (0x00030aa1) battery_pane_g2_ParamLimits

0x9652,	// (0x00030aa1) battery_pane_g2

0x0001,

0xf7eb,	// (0x00036c3a) battery_pane_g_ParamLimits

0xf7eb,	// (0x00036c3a) battery_pane_g

0x9857,	// (0x00030ca6) uni_indicator_pane_g1

0x986c,	// (0x00030cbb) uni_indicator_pane_g2

0x9881,	// (0x00030cd0) uni_indicator_pane_g3

0x0005,

0xf955,	// (0x00036da4) uni_indicator_pane_g

0xc3a5,	// (0x000337f4) navi_icon_pane_ParamLimits

0xc3a5,	// (0x000337f4) navi_icon_pane

0xc2ee,	// (0x0003373d) navi_midp_pane

0xc3c1,	// (0x00033810) navi_navi_pane

0xc3cb,	// (0x0003381a) navi_text_pane_ParamLimits

0xc3cb,	// (0x0003381a) navi_text_pane

0xae56,	// (0x000322a5) status_small_wait_pane_g1

0xb7d4,	// (0x00032c23) status_small_wait_pane_g2

0x0001,

0xf950,	// (0x00036d9f) status_small_wait_pane_g

0xd786,	// (0x00034bd5) navi_navi_icon_text_pane

0xd78e,	// (0x00034bdd) navi_navi_pane_g1_ParamLimits

0xd78e,	// (0x00034bdd) navi_navi_pane_g1

0xd7a0,	// (0x00034bef) navi_navi_pane_g2_ParamLimits

0xd7a0,	// (0x00034bef) navi_navi_pane_g2

0x0001,

0xf91e,	// (0x00036d6d) navi_navi_pane_g_ParamLimits

0xf91e,	// (0x00036d6d) navi_navi_pane_g

0xd7b2,	// (0x00034c01) navi_navi_tabs_pane

0xd7bb,	// (0x00034c0a) navi_navi_text_pane

0xd786,	// (0x00034bd5) navi_navi_volume_pane

0x9818,	// (0x00030c67) navi_text_pane_t1

0x980c,	// (0x00030c5b) navi_icon_pane_g1

0xd6c7,	// (0x00034b16) navi_navi_text_pane_t1

0x7e04,	// (0x0002f253) navi_navi_volume_pane_g1

0x7e0c,	// (0x0002f25b) volume_small_pane

0x9768,	// (0x00030bb7) navi_navi_icon_text_pane_g1

0x9770,	// (0x00030bbf) navi_navi_icon_text_pane_t1

0xc3c1,	// (0x00033810) navi_tabs_2_long_pane

0xc3c1,	// (0x00033810) navi_tabs_2_pane

0xc3c1,	// (0x00033810) navi_tabs_3_long_pane

0xc3c1,	// (0x00033810) navi_tabs_3_pane

0xc3c1,	// (0x00033810) navi_tabs_4_pane

0x7de4,	// (0x0002f233) tabs_2_active_pane_ParamLimits

0x7de4,	// (0x0002f233) tabs_2_active_pane

0x7df4,	// (0x0002f243) tabs_2_passive_pane_ParamLimits

0x7df4,	// (0x0002f243) tabs_2_passive_pane

0x7db2,	// (0x0002f201) tabs_3_active_pane_ParamLimits

0x7db2,	// (0x0002f201) tabs_3_active_pane

0x7dc2,	// (0x0002f211) tabs_3_passive_pane_ParamLimits

0x7dc2,	// (0x0002f211) tabs_3_passive_pane

0x7dd3,	// (0x0002f222) tabs_3_passive_pane_cp_ParamLimits

0x7dd3,	// (0x0002f222) tabs_3_passive_pane_cp

0x7d6e,	// (0x0002f1bd) tabs_4_active_pane_ParamLimits

0x7d6e,	// (0x0002f1bd) tabs_4_active_pane

0x7d7f,	// (0x0002f1ce) tabs_4_passive_pane_ParamLimits

0x7d7f,	// (0x0002f1ce) tabs_4_passive_pane

0x7d90,	// (0x0002f1df) tabs_4_passive_pane_cp_ParamLimits

0x7d90,	// (0x0002f1df) tabs_4_passive_pane_cp

0x7da1,	// (0x0002f1f0) tabs_4_passive_pane_cp2_ParamLimits

0x7da1,	// (0x0002f1f0) tabs_4_passive_pane_cp2

0x7d4e,	// (0x0002f19d) tabs_2_long_active_pane_ParamLimits

0x7d4e,	// (0x0002f19d) tabs_2_long_active_pane

0x7d5e,	// (0x0002f1ad) tabs_2_long_passive_pane_ParamLimits

0x7d5e,	// (0x0002f1ad) tabs_2_long_passive_pane

0x7d1b,	// (0x0002f16a) tabs_3_long_active_pane_ParamLimits

0x7d1b,	// (0x0002f16a) tabs_3_long_active_pane

0x7d2c,	// (0x0002f17b) tabs_3_long_passive_pane_ParamLimits

0x7d2c,	// (0x0002f17b) tabs_3_long_passive_pane

0x7d3d,	// (0x0002f18c) tabs_3_long_passive_pane_cp_ParamLimits

0x7d3d,	// (0x0002f18c) tabs_3_long_passive_pane_cp

0x1db7,	// (0x00029206) volume_small_pane_g1

0x7cca,	// (0x0002f119) volume_small_pane_g2

0x7cd3,	// (0x0002f122) volume_small_pane_g3

0x7cdc,	// (0x0002f12b) volume_small_pane_g4

0x7ce5,	// (0x0002f134) volume_small_pane_g5

0x7cee,	// (0x0002f13d) volume_small_pane_g6

0x7cf7,	// (0x0002f146) volume_small_pane_g7

0x7d00,	// (0x0002f14f) volume_small_pane_g8

0x7d09,	// (0x0002f158) volume_small_pane_g9

0x7d12,	// (0x0002f161) volume_small_pane_g10

0x0009,

0xf8ea,	// (0x00036d39) volume_small_pane_g

0xaeae,	// (0x000322fd) bg_active_tab_pane_cp2_ParamLimits

0xaeae,	// (0x000322fd) bg_active_tab_pane_cp2

0x8447,	// (0x0002f896) tabs_3_active_pane_g1

0x844f,	// (0x0002f89e) tabs_3_active_pane_t1

0xaeae,	// (0x000322fd) bg_passive_tab_pane_cp2_ParamLimits

0xaeae,	// (0x000322fd) bg_passive_tab_pane_cp2

0x8447,	// (0x0002f896) tabs_3_passive_pane_g1

0x844f,	// (0x0002f89e) tabs_3_passive_pane_t1

0xaeae,	// (0x000322fd) bg_active_tab_pane_cp3_ParamLimits

0xaeae,	// (0x000322fd) bg_active_tab_pane_cp3

0x8461,	// (0x0002f8b0) tabs_4_active_pane_g1

0x8469,	// (0x0002f8b8) tabs_4_active_pane_t1

0xaeae,	// (0x000322fd) bg_passive_tab_pane_cp3_ParamLimits

0xaeae,	// (0x000322fd) bg_passive_tab_pane_cp3

0x8461,	// (0x0002f8b0) tabs_4_1_passive_pane_g1

0x8469,	// (0x0002f8b8) tabs_4_1_passive_pane_t1

0xbc66,	// (0x000330b5) list_highlight_pane_cp2

0x990a,	// (0x00030d59) list_set_pane_ParamLimits

0x990a,	// (0x00030d59) list_set_pane

0x99a4,	// (0x00030df3) main_pane_set_t1_ParamLimits

0x99a4,	// (0x00030df3) main_pane_set_t1

0x99c4,	// (0x00030e13) main_pane_set_t2_ParamLimits

0x99c4,	// (0x00030e13) main_pane_set_t2

0x99d8,	// (0x00030e27) main_pane_set_t3_ParamLimits

0x99d8,	// (0x00030e27) main_pane_set_t3

0x99ea,	// (0x00030e39) main_pane_set_t4_ParamLimits

0x99ea,	// (0x00030e39) main_pane_set_t4

0x0003,

0xf9ba,	// (0x00036e09) main_pane_set_t_ParamLimits

0xf9ba,	// (0x00036e09) main_pane_set_t

0x99fc,	// (0x00030e4b) setting_code_pane

0x9a06,	// (0x00030e55) setting_slider_graphic_pane

0x9a06,	// (0x00030e55) setting_slider_pane

0x9a06,	// (0x00030e55) setting_text_pane

0x9a06,	// (0x00030e55) setting_volume_pane

0x07dc,	// (0x00027c2b) volume_set_pane

0xaebc,	// (0x0003230b) bg_set_opt_pane_cp

0x07e4,	// (0x00027c33) setting_slider_pane_t1

0x07fd,	// (0x00027c4c) setting_slider_pane_t2

0x0817,	// (0x00027c66) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x000369f1) setting_slider_pane_t

0x082f,	// (0x00027c7e) slider_set_pane

0xae60,	// (0x000322af) bg_set_opt_pane_cp2

0xaeca,	// (0x00032319) setting_slider_graphic_pane_g1

0x0845,	// (0x00027c94) setting_slider_graphic_pane_t1

0x0855,	// (0x00027ca4) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x000369f8) setting_slider_graphic_pane_t

0x0865,	// (0x00027cb4) slider_set_pane_cp

0xae60,	// (0x000322af) input_focus_pane_cp1

0xdc25,	// (0x00035074) list_set_text_pane

0xae56,	// (0x000322a5) setting_text_pane_g1

0xae60,	// (0x000322af) input_focus_pane_cp2

0xae56,	// (0x000322a5) setting_code_pane_g1

0xaed3,	// (0x00032322) setting_code_pane_t1

0x40f8,	// (0x0002b547) set_text_pane_t1_ParamLimits

0x40f8,	// (0x0002b547) set_text_pane_t1

0xbb75,	// (0x00032fc4) set_opt_bg_pane_g1

0xbb7d,	// (0x00032fcc) set_opt_bg_pane_g2

0xdbff,	// (0x0003504e) set_opt_bg_pane_g3

0xbb8d,	// (0x00032fdc) set_opt_bg_pane_g4

0xbb95,	// (0x00032fe4) set_opt_bg_pane_g5

0xbb9d,	// (0x00032fec) set_opt_bg_pane_g6

0xdc09,	// (0x00035058) set_opt_bg_pane_g7

0xdc11,	// (0x00035060) set_opt_bg_pane_g8

0xdc1b,	// (0x0003506a) set_opt_bg_pane_g9

0x0008,

0xf9a7,	// (0x00036df6) set_opt_bg_pane_g

0xdbf2,	// (0x00035041) slider_set_pane_g1

0x20d3,	// (0x00029522) slider_set_pane_g2

0x0006,

0xf998,	// (0x00036de7) slider_set_pane_g

0x204a,	// (0x00029499) volume_set_pane_g1

0x2052,	// (0x000294a1) volume_set_pane_g2

0x205a,	// (0x000294a9) volume_set_pane_g3

0x2062,	// (0x000294b1) volume_set_pane_g4

0x206a,	// (0x000294b9) volume_set_pane_g5

0x2072,	// (0x000294c1) volume_set_pane_g6

0x207a,	// (0x000294c9) volume_set_pane_g7

0x2082,	// (0x000294d1) volume_set_pane_g8

0x208a,	// (0x000294d9) volume_set_pane_g9

0x2092,	// (0x000294e1) volume_set_pane_g10

0x0009,

0xf970,	// (0x00036dbf) volume_set_pane_g

0x847b,	// (0x0002f8ca) indicator_pane_ParamLimits

0x847b,	// (0x0002f8ca) indicator_pane

0x84a3,	// (0x0002f8f2) main_idle_pane_g2_ParamLimits

0x84a3,	// (0x0002f8f2) main_idle_pane_g2

0x84db,	// (0x0002f92a) main_pane_idle_g1_ParamLimits

0x84db,	// (0x0002f92a) main_pane_idle_g1

0xb532,	// (0x00032981) popup_clock_digital_analogue_window_ParamLimits

0xb532,	// (0x00032981) popup_clock_digital_analogue_window

0x8502,	// (0x0002f951) soft_indicator_pane_ParamLimits

0x8502,	// (0x0002f951) soft_indicator_pane

0x851c,	// (0x0002f96b) wallpaper_pane_ParamLimits

0x851c,	// (0x0002f96b) wallpaper_pane

0xae56,	// (0x000322a5) wallpaper_pane_g1

0x852e,	// (0x0002f97d) indicator_pane_g1_ParamLimits

0x852e,	// (0x0002f97d) indicator_pane_g1

0xdd67,	// (0x000351b6) navi_navi_icon_text_pane_srt_g1

0xb560,	// (0x000329af) soft_indicator_pane_t1

0xb57a,	// (0x000329c9) aid_ps_area_pane

0x8544,	// (0x0002f993) aid_ps_clock_pane

0xb58b,	// (0x000329da) aid_ps_indicator_pane

0xb597,	// (0x000329e6) indicator_ps_pane_ParamLimits

0xb597,	// (0x000329e6) indicator_ps_pane

0xb5a6,	// (0x000329f5) power_save_pane_g1_ParamLimits

0xb5a6,	// (0x000329f5) power_save_pane_g1

0xb5b2,	// (0x00032a01) power_save_pane_g2_ParamLimits

0xb5b2,	// (0x00032a01) power_save_pane_g2

0x0327,	// (0x00027776) aid_navinavi_width_pane

0xb57a,	// (0x000329c9) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x000369fd) power_save_pane_g_ParamLimits

0xf5ae,	// (0x000369fd) power_save_pane_g

0xb5c0,	// (0x00032a0f) power_save_pane_t1_ParamLimits

0xb5c0,	// (0x00032a0f) power_save_pane_t1

0x8544,	// (0x0002f993) aid_ps_clock_pane_ParamLimits

0xb58b,	// (0x000329da) aid_ps_indicator_pane_ParamLimits

0xb5d2,	// (0x00032a21) power_save_pane_t4_ParamLimits

0xb5d2,	// (0x00032a21) power_save_pane_t4

0x0001,

0xf5b3,	// (0x00036a02) power_save_pane_t_ParamLimits

0xf5b3,	// (0x00036a02) power_save_pane_t

0xb5fc,	// (0x00032a4b) power_save_t3_ParamLimits

0xb5fc,	// (0x00032a4b) power_save_t3

0xb5e7,	// (0x00032a36) power_save_t2_ParamLimits

0xb5e7,	// (0x00032a36) power_save_t2

0xb611,	// (0x00032a60) indicator_ps_pane_g1

0x8552,	// (0x0002f9a1) ai_gene_pane_ParamLimits

0x8552,	// (0x0002f9a1) ai_gene_pane

0x8569,	// (0x0002f9b8) ai_links_pane_ParamLimits

0x8569,	// (0x0002f9b8) ai_links_pane

0x8581,	// (0x0002f9d0) indicator_pane_cp1_ParamLimits

0x8581,	// (0x0002f9d0) indicator_pane_cp1

0x8590,	// (0x0002f9df) main_pane_idle_g1_cp_ParamLimits

0x8590,	// (0x0002f9df) main_pane_idle_g1_cp

0xb61a,	// (0x00032a69) popup_ai_links_title_window

0x85a8,	// (0x0002f9f7) soft_indicator_pane_cp1_ParamLimits

0x85a8,	// (0x0002f9f7) soft_indicator_pane_cp1

0xda46,	// (0x00034e95) ai_links_pane_g1

0xda4f,	// (0x00034e9e) grid_ai_links_pane

0x984e,	// (0x00030c9d) ai_gene_pane_1

0xda34,	// (0x00034e83) ai_gene_pane_2

0xda3d,	// (0x00034e8c) list_highlight_pane_cp4

0x982a,	// (0x00030c79) cell_ai_link_pane_ParamLimits

0x982a,	// (0x00030c79) cell_ai_link_pane

0xda2c,	// (0x00034e7b) cell_ai_link_pane_g1

0xb7d4,	// (0x00032c23) cell_ai_link_pane_g2

0x0001,

0xf94b,	// (0x00036d9a) cell_ai_link_pane_g

0xae60,	// (0x000322af) grid_highlight_cp2

0xae60,	// (0x000322af) bg_popup_sub_pane_cp1

0xb631,	// (0x00032a80) popup_ai_links_title_window_t1

0xd97a,	// (0x00034dc9) ai_gene_pane_1_g1_ParamLimits

0xd97a,	// (0x00034dc9) ai_gene_pane_1_g1

0xd986,	// (0x00034dd5) ai_gene_pane_1_g2_ParamLimits

0xd986,	// (0x00034dd5) ai_gene_pane_1_g2

0x0001,

0xf941,	// (0x00036d90) ai_gene_pane_1_g_ParamLimits

0xf941,	// (0x00036d90) ai_gene_pane_1_g

0xd993,	// (0x00034de2) ai_gene_pane_1_t1_ParamLimits

0xd993,	// (0x00034de2) ai_gene_pane_1_t1

0xd9c7,	// (0x00034e16) grid_ai_soft_ind_pane

0xd965,	// (0x00034db4) ai_gene_pane_2_t1_ParamLimits

0xd965,	// (0x00034db4) ai_gene_pane_2_t1

0x85bc,	// (0x0002fa0b) main_pane_empty_t1_ParamLimits

0x85bc,	// (0x0002fa0b) main_pane_empty_t1

0x85d4,	// (0x0002fa23) main_pane_empty_t2_ParamLimits

0x85d4,	// (0x0002fa23) main_pane_empty_t2

0x85e9,	// (0x0002fa38) main_pane_empty_t3_ParamLimits

0x85e9,	// (0x0002fa38) main_pane_empty_t3

0x85fb,	// (0x0002fa4a) main_pane_empty_t4_ParamLimits

0x85fb,	// (0x0002fa4a) main_pane_empty_t4

0x860d,	// (0x0002fa5c) main_pane_empty_t5_ParamLimits

0x860d,	// (0x0002fa5c) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x00036a07) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x00036a07) main_pane_empty_t

0xbbc6,	// (0x00033015) bg_popup_window_pane_ParamLimits

0xbbc6,	// (0x00033015) bg_popup_window_pane

0xd6d5,	// (0x00034b24) find_popup_pane_cp2_ParamLimits

0xd6d5,	// (0x00034b24) find_popup_pane_cp2

0xd6e1,	// (0x00034b30) heading_pane_ParamLimits

0xd6e1,	// (0x00034b30) heading_pane

0xae60,	// (0x000322af) bg_popup_sub_pane

0x978d,	// (0x00030bdc) bg_popup_window_pane_g1_ParamLimits

0x978d,	// (0x00030bdc) bg_popup_window_pane_g1

0x979c,	// (0x00030beb) bg_popup_window_pane_g2_ParamLimits

0x979c,	// (0x00030beb) bg_popup_window_pane_g2

0x97a8,	// (0x00030bf7) bg_popup_window_pane_g3_ParamLimits

0x97a8,	// (0x00030bf7) bg_popup_window_pane_g3

0x97b4,	// (0x00030c03) bg_popup_window_pane_g4_ParamLimits

0x97b4,	// (0x00030c03) bg_popup_window_pane_g4

0x97c3,	// (0x00030c12) bg_popup_window_pane_g5_ParamLimits

0x97c3,	// (0x00030c12) bg_popup_window_pane_g5

0x97d3,	// (0x00030c22) bg_popup_window_pane_g6_ParamLimits

0x97d3,	// (0x00030c22) bg_popup_window_pane_g6

0x97df,	// (0x00030c2e) bg_popup_window_pane_g7_ParamLimits

0x97df,	// (0x00030c2e) bg_popup_window_pane_g7

0x97ee,	// (0x00030c3d) bg_popup_window_pane_g8_ParamLimits

0x97ee,	// (0x00030c3d) bg_popup_window_pane_g8

0x97fd,	// (0x00030c4c) bg_popup_window_pane_g9_ParamLimits

0x97fd,	// (0x00030c4c) bg_popup_window_pane_g9

0xd6bb,	// (0x00034b0a) bg_popup_window_pane_g10_ParamLimits

0xd6bb,	// (0x00034b0a) bg_popup_window_pane_g10

0x0009,

0xf909,	// (0x00036d58) bg_popup_window_pane_g_ParamLimits

0xf909,	// (0x00036d58) bg_popup_window_pane_g

0xd672,	// (0x00034ac1) bg_popup_heading_pane_ParamLimits

0xd672,	// (0x00034ac1) bg_popup_heading_pane

0x23a7,	// (0x000297f6) tabs_4_passive_pane_cp_srt_ParamLimits

0x23a7,	// (0x000297f6) tabs_4_passive_pane_cp_srt

0x23b9,	// (0x00029808) tabs_4_passive_pane_srt_ParamLimits

0xd686,	// (0x00034ad5) heading_pane_g2

0x23b9,	// (0x00029808) tabs_4_passive_pane_srt

0xcba1,	// (0x00033ff0) bg_passive_tab_pane_cp3_srt_ParamLimits

0xcba1,	// (0x00033ff0) bg_passive_tab_pane_cp3_srt

0xd68e,	// (0x00034add) heading_pane_t1_ParamLimits

0xd68e,	// (0x00034add) heading_pane_t1

0xd6a5,	// (0x00034af4) heading_pane_t2_ParamLimits

0xd6a5,	// (0x00034af4) heading_pane_t2

0x0001,

0xf904,	// (0x00036d53) heading_pane_t_ParamLimits

0xf904,	// (0x00036d53) heading_pane_t

0xd1bd,	// (0x0003460c) bg_popup_heading_pane_g1

0xd24e,	// (0x0003469d) bg_popup_heading_pane_g2

0xd258,	// (0x000346a7) bg_popup_heading_pane_g3

0xd262,	// (0x000346b1) bg_popup_heading_pane_g4

0xd26c,	// (0x000346bb) bg_popup_heading_pane_g5

0xd276,	// (0x000346c5) bg_popup_heading_pane_g6

0xd27e,	// (0x000346cd) bg_popup_heading_pane_g7

0xd286,	// (0x000346d5) bg_popup_heading_pane_g8

0xd290,	// (0x000346df) bg_popup_heading_pane_g9

0x0008,

0xf8c0,	// (0x00036d0f) bg_popup_heading_pane_g

0xcab1,	// (0x00033f00) bg_popup_sub_pane_g1

0xcac1,	// (0x00033f10) bg_popup_sub_pane_g2

0xcab9,	// (0x00033f08) bg_popup_sub_pane_g3

0xcad1,	// (0x00033f20) bg_popup_sub_pane_g4

0xcac9,	// (0x00033f18) bg_popup_sub_pane_g5

0xcad9,	// (0x00033f28) bg_popup_sub_pane_g6

0xcae1,	// (0x00033f30) bg_popup_sub_pane_g7

0xcaf1,	// (0x00033f40) bg_popup_sub_pane_g8

0xcae9,	// (0x00033f38) bg_popup_sub_pane_g9

0x0008,

0xf89a,	// (0x00036ce9) bg_popup_sub_pane_g

0xaeae,	// (0x000322fd) bg_popup_window_pane_cp5_ParamLimits

0xaeae,	// (0x000322fd) bg_popup_window_pane_cp5

0xb64e,	// (0x00032a9d) popup_note_window_g1_ParamLimits

0xb64e,	// (0x00032a9d) popup_note_window_g1

0xb65a,	// (0x00032aa9) popup_note_window_t1_ParamLimits

0xb65a,	// (0x00032aa9) popup_note_window_t1

0xb670,	// (0x00032abf) popup_note_window_t2_ParamLimits

0xb670,	// (0x00032abf) popup_note_window_t2

0xb686,	// (0x00032ad5) popup_note_window_t3_ParamLimits

0xb686,	// (0x00032ad5) popup_note_window_t3

0xb69c,	// (0x00032aeb) popup_note_window_t4_ParamLimits

0xb69c,	// (0x00032aeb) popup_note_window_t4

0xb6c4,	// (0x00032b13) popup_note_window_t5_ParamLimits

0xb6c4,	// (0x00032b13) popup_note_window_t5

0x0004,

0xf5c3,	// (0x00036a12) popup_note_window_t_ParamLimits

0xf5c3,	// (0x00036a12) popup_note_window_t

0xb6e8,	// (0x00032b37) bg_popup_window_pane_cp6_ParamLimits

0xb6e8,	// (0x00032b37) bg_popup_window_pane_cp6

0xd139,	// (0x00034588) popup_note_image_window_g1_ParamLimits

0xd139,	// (0x00034588) popup_note_image_window_g1

0xd145,	// (0x00034594) popup_note_image_window_g2_ParamLimits

0xd145,	// (0x00034594) popup_note_image_window_g2

0x0001,

0xf88e,	// (0x00036cdd) popup_note_image_window_g_ParamLimits

0xf88e,	// (0x00036cdd) popup_note_image_window_g

0xd15e,	// (0x000345ad) popup_note_image_window_t1_ParamLimits

0xd15e,	// (0x000345ad) popup_note_image_window_t1

0xd177,	// (0x000345c6) popup_note_image_window_t2_ParamLimits

0xd177,	// (0x000345c6) popup_note_image_window_t2

0xd190,	// (0x000345df) popup_note_image_window_t3_ParamLimits

0xd190,	// (0x000345df) popup_note_image_window_t3

0x0002,

0xf893,	// (0x00036ce2) popup_note_image_window_t_ParamLimits

0xf893,	// (0x00036ce2) popup_note_image_window_t

0xd016,	// (0x00034465) bg_popup_window_pane_cp7_ParamLimits

0xd016,	// (0x00034465) bg_popup_window_pane_cp7

0xd046,	// (0x00034495) popup_note_wait_window_g1_ParamLimits

0xd046,	// (0x00034495) popup_note_wait_window_g1

0xd052,	// (0x000344a1) popup_note_wait_window_g2_ParamLimits

0xd052,	// (0x000344a1) popup_note_wait_window_g2

0x0002,

0xf87c,	// (0x00036ccb) popup_note_wait_window_g_ParamLimits

0xf87c,	// (0x00036ccb) popup_note_wait_window_g

0xd06a,	// (0x000344b9) popup_note_wait_window_t1_ParamLimits

0xd06a,	// (0x000344b9) popup_note_wait_window_t1

0xd091,	// (0x000344e0) popup_note_wait_window_t2_ParamLimits

0xd091,	// (0x000344e0) popup_note_wait_window_t2

0xd0ae,	// (0x000344fd) popup_note_wait_window_t3_ParamLimits

0xd0ae,	// (0x000344fd) popup_note_wait_window_t3

0xd0c1,	// (0x00034510) popup_note_wait_window_t4_ParamLimits

0xd0c1,	// (0x00034510) popup_note_wait_window_t4

0x0004,

0xf883,	// (0x00036cd2) popup_note_wait_window_t_ParamLimits

0xf883,	// (0x00036cd2) popup_note_wait_window_t

0xd0e6,	// (0x00034535) wait_bar_pane_ParamLimits

0xd0e6,	// (0x00034535) wait_bar_pane

0xae60,	// (0x000322af) wait_anim_pane

0xae60,	// (0x000322af) wait_border_pane

0xae56,	// (0x000322a5) wait_anim_pane_g1

0xae56,	// (0x000322a5) wait_anim_pane_g2

0x0001,

0xf747,	// (0x00036b96) wait_anim_pane_g

0xcfba,	// (0x00034409) wait_border_pane_g1

0xcfc5,	// (0x00034414) wait_border_pane_g2

0xcfce,	// (0x0003441d) wait_border_pane_g3

0x0002,

0xf875,	// (0x00036cc4) wait_border_pane_g

0xcf17,	// (0x00034366) bg_popup_window_pane_cp16_ParamLimits

0xcf17,	// (0x00034366) bg_popup_window_pane_cp16

0xcf25,	// (0x00034374) indicator_popup_pane_cp4_ParamLimits

0xcf25,	// (0x00034374) indicator_popup_pane_cp4

0xcf39,	// (0x00034388) popup_query_data_window_t1_ParamLimits

0xcf39,	// (0x00034388) popup_query_data_window_t1

0xcf4b,	// (0x0003439a) popup_query_data_window_t2_ParamLimits

0xcf4b,	// (0x0003439a) popup_query_data_window_t2

0xcf64,	// (0x000343b3) popup_query_data_window_t3_ParamLimits

0xcf64,	// (0x000343b3) popup_query_data_window_t3

0x0002,

0xf86e,	// (0x00036cbd) popup_query_data_window_t_ParamLimits

0xf86e,	// (0x00036cbd) popup_query_data_window_t

0xcf7e,	// (0x000343cd) query_popup_data_pane_ParamLimits

0xcf7e,	// (0x000343cd) query_popup_data_pane

0xcf92,	// (0x000343e1) query_popup_data_pane_cp1_ParamLimits

0xcf92,	// (0x000343e1) query_popup_data_pane_cp1

0xb6e8,	// (0x00032b37) bg_popup_window_pane_cp10_ParamLimits

0xb6e8,	// (0x00032b37) bg_popup_window_pane_cp10

0xce7a,	// (0x000342c9) indicator_popup_pane_ParamLimits

0xce7a,	// (0x000342c9) indicator_popup_pane

0xb73f,	// (0x00032b8e) popup_query_code_window_t1_ParamLimits

0xb73f,	// (0x00032b8e) popup_query_code_window_t1

0xce92,	// (0x000342e1) popup_query_code_window_t2_ParamLimits

0xce92,	// (0x000342e1) popup_query_code_window_t2

0xced0,	// (0x0003431f) popup_query_code_window_t3_ParamLimits

0xced0,	// (0x0003431f) popup_query_code_window_t3

0x0002,

0xf867,	// (0x00036cb6) popup_query_code_window_t_ParamLimits

0xf867,	// (0x00036cb6) popup_query_code_window_t

0xceff,	// (0x0003434e) query_popup_pane_ParamLimits

0xceff,	// (0x0003434e) query_popup_pane

0xb6e8,	// (0x00032b37) bg_popup_window_pane_cp15_ParamLimits

0xb6e8,	// (0x00032b37) bg_popup_window_pane_cp15

0xb706,	// (0x00032b55) indicator_popup_pane_cp1_ParamLimits

0xb706,	// (0x00032b55) indicator_popup_pane_cp1

0xb719,	// (0x00032b68) indicator_popup_pane_cp2_ParamLimits

0xb719,	// (0x00032b68) indicator_popup_pane_cp2

0xb72c,	// (0x00032b7b) popup_query_data_code_window_g1_ParamLimits

0xb72c,	// (0x00032b7b) popup_query_data_code_window_g1

0xb73f,	// (0x00032b8e) popup_query_data_code_window_t1_ParamLimits

0xb73f,	// (0x00032b8e) popup_query_data_code_window_t1

0xb751,	// (0x00032ba0) popup_query_data_code_window_t2_ParamLimits

0xb751,	// (0x00032ba0) popup_query_data_code_window_t2

0xb763,	// (0x00032bb2) popup_query_data_code_window_t3_ParamLimits

0xb763,	// (0x00032bb2) popup_query_data_code_window_t3

0xb779,	// (0x00032bc8) popup_query_data_code_window_t4_ParamLimits

0xb779,	// (0x00032bc8) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x00036a1d) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x00036a1d) popup_query_data_code_window_t

0x1b79,	// (0x00028fc8) list_single_midp_graphic_pane_g3

0xb791,	// (0x00032be0) query_popup_data_pane_cp2_ParamLimits

0xb7a4,	// (0x00032bf3) query_popup_pane_cp2_ParamLimits

0xb7a4,	// (0x00032bf3) query_popup_pane_cp2

0xae60,	// (0x000322af) bg_popup_window_pane_cp11

0xce4e,	// (0x0003429d) heading_pane_cp5

0xb832,	// (0x00032c81) listscroll_popup_info_pane

0xae60,	// (0x000322af) input_focus_pane_cp3

0xb7b7,	// (0x00032c06) query_popup_pane_t1

0xb7c5,	// (0x00032c14) list_popup_info_pane_ParamLimits

0xb7c5,	// (0x00032c14) list_popup_info_pane

0xb7d4,	// (0x00032c23) listscroll_popup_info_pane_g1

0xb7dc,	// (0x00032c2b) scroll_pane_cp7

0xb7e6,	// (0x00032c35) popup_info_list_pane_t1_ParamLimits

0xb7e6,	// (0x00032c35) popup_info_list_pane_t1

0xb800,	// (0x00032c4f) popup_info_list_pane_t2_ParamLimits

0xb800,	// (0x00032c4f) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x00036a26) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x00036a26) popup_info_list_pane_t

0xae60,	// (0x000322af) bg_popup_window_pane_cp12

0xdd81,	// (0x000351d0) find_popup_pane

0xaebc,	// (0x0003230b) bg_popup_window_pane_cp3

0xb81a,	// (0x00032c69) heading_pane_cp3

0xb826,	// (0x00032c75) listscroll_popup_graphic_pane

0xae60,	// (0x000322af) bg_popup_window_pane_cp4

0x866f,	// (0x0002fabe) heading_pane_cp4

0xb832,	// (0x00032c81) listscroll_popup_colour_pane

0x8677,	// (0x0002fac6) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8677,	// (0x0002fac6) cell_large_graphic_colour_none_popup_pane

0x868b,	// (0x0002fada) grid_large_graphic_colour_popup_pane_ParamLimits

0x868b,	// (0x0002fada) grid_large_graphic_colour_popup_pane

0x86af,	// (0x0002fafe) listscroll_popup_colour_pane_g1_ParamLimits

0x86af,	// (0x0002fafe) listscroll_popup_colour_pane_g1

0x86c6,	// (0x0002fb15) listscroll_popup_colour_pane_g2_ParamLimits

0x86c6,	// (0x0002fb15) listscroll_popup_colour_pane_g2

0x86dd,	// (0x0002fb2c) listscroll_popup_colour_pane_g3_ParamLimits

0x86dd,	// (0x0002fb2c) listscroll_popup_colour_pane_g3

0x86ed,	// (0x0002fb3c) listscroll_popup_colour_pane_g4_ParamLimits

0x86ed,	// (0x0002fb3c) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x00036a2b) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x00036a2b) listscroll_popup_colour_pane_g

0xb83a,	// (0x00032c89) scroll_pane_cp6_ParamLimits

0xb83a,	// (0x00032c89) scroll_pane_cp6

0x86fd,	// (0x0002fb4c) cell_large_graphic_colour_popup_pane_ParamLimits

0x86fd,	// (0x0002fb4c) cell_large_graphic_colour_popup_pane

0xb84c,	// (0x00032c9b) cell_large_graphic_colour_none_popup_pane_t1

0xae60,	// (0x000322af) grid_highlight_pane_cp5

0xb85b,	// (0x00032caa) cell_large_graphic_colour_popup_pane_g1

0xb863,	// (0x00032cb2) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x00036a34) cell_large_graphic_colour_popup_pane_g

0xb86b,	// (0x00032cba) cell_large_graphic_colour_popup_pane_g2_copy1

0xb874,	// (0x00032cc3) grid_highlight_pane_cp4

0xb87c,	// (0x00032ccb) bg_popup_window_pane_cp8_ParamLimits

0xb87c,	// (0x00032ccb) bg_popup_window_pane_cp8

0xb897,	// (0x00032ce6) popup_snote_single_text_window_g1_ParamLimits

0xb897,	// (0x00032ce6) popup_snote_single_text_window_g1

0xb8a9,	// (0x00032cf8) popup_snote_single_text_window_t1_ParamLimits

0xb8a9,	// (0x00032cf8) popup_snote_single_text_window_t1

0xb8bc,	// (0x00032d0b) popup_snote_single_text_window_t2_ParamLimits

0xb8bc,	// (0x00032d0b) popup_snote_single_text_window_t2

0xb8cf,	// (0x00032d1e) popup_snote_single_text_window_t3_ParamLimits

0xb8cf,	// (0x00032d1e) popup_snote_single_text_window_t3

0xb908,	// (0x00032d57) popup_snote_single_text_window_t4_ParamLimits

0xb908,	// (0x00032d57) popup_snote_single_text_window_t4

0xb93c,	// (0x00032d8b) popup_snote_single_text_window_t5_ParamLimits

0xb93c,	// (0x00032d8b) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x00036a39) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x00036a39) popup_snote_single_text_window_t

0xb96b,	// (0x00032dba) bg_popup_window_pane_cp9_ParamLimits

0xb96b,	// (0x00032dba) bg_popup_window_pane_cp9

0xb897,	// (0x00032ce6) popup_snote_single_graphic_window_g1_ParamLimits

0xb897,	// (0x00032ce6) popup_snote_single_graphic_window_g1

0xb979,	// (0x00032dc8) popup_snote_single_graphic_window_g2_ParamLimits

0xb979,	// (0x00032dc8) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x00036a44) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x00036a44) popup_snote_single_graphic_window_g

0xb985,	// (0x00032dd4) popup_snote_single_graphic_window_t1_ParamLimits

0xb985,	// (0x00032dd4) popup_snote_single_graphic_window_t1

0xb998,	// (0x00032de7) popup_snote_single_graphic_window_t2_ParamLimits

0xb998,	// (0x00032de7) popup_snote_single_graphic_window_t2

0xb9ab,	// (0x00032dfa) popup_snote_single_graphic_window_t3_ParamLimits

0xb9ab,	// (0x00032dfa) popup_snote_single_graphic_window_t3

0xb9e4,	// (0x00032e33) popup_snote_single_graphic_window_t4_ParamLimits

0xb9e4,	// (0x00032e33) popup_snote_single_graphic_window_t4

0xba18,	// (0x00032e67) popup_snote_single_graphic_window_t5_ParamLimits

0xba18,	// (0x00032e67) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x00036a49) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x00036a49) popup_snote_single_graphic_window_t

0xdd09,	// (0x00035158) grid_graphic_popup_pane_ParamLimits

0xdd09,	// (0x00035158) grid_graphic_popup_pane

0xdd31,	// (0x00035180) listscroll_popup_graphic_pane_g1_ParamLimits

0xdd31,	// (0x00035180) listscroll_popup_graphic_pane_g1

0x9b12,	// (0x00030f61) listscroll_popup_graphic_pane_g2_ParamLimits

0x9b12,	// (0x00030f61) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e4,	// (0x00036e33) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e4,	// (0x00036e33) listscroll_popup_graphic_pane_g

0xd7ff,	// (0x00034c4e) scroll_pane_cp5

0x9ad6,	// (0x00030f25) cell_graphic_popup_pane_ParamLimits

0x9ad6,	// (0x00030f25) cell_graphic_popup_pane

0xdcd4,	// (0x00035123) cell_graphic_popup_pane_g1

0xdcdc,	// (0x0003512b) cell_graphic_popup_pane_g2

0xb86b,	// (0x00032cba) cell_graphic_popup_pane_g3

0x0002,

0xf9dd,	// (0x00036e2c) cell_graphic_popup_pane_g

0xdce5,	// (0x00035134) cell_graphic_popup_pane_t2

0xb874,	// (0x00032cc3) grid_highlight_pane_cp3

0xba59,	// (0x00032ea8) list_gen_pane_ParamLimits

0xba59,	// (0x00032ea8) list_gen_pane

0xba81,	// (0x00032ed0) scroll_pane

0x9a91,	// (0x00030ee0) bg_list_pane_g1_ParamLimits

0x9a91,	// (0x00030ee0) bg_list_pane_g1

0xdc83,	// (0x000350d2) bg_list_pane_g2_ParamLimits

0xdc83,	// (0x000350d2) bg_list_pane_g2

0xdc96,	// (0x000350e5) bg_list_pane_g3_ParamLimits

0xdc96,	// (0x000350e5) bg_list_pane_g3

0xdca8,	// (0x000350f7) bg_list_pane_g4_ParamLimits

0xdca8,	// (0x000350f7) bg_list_pane_g4

0x9aac,	// (0x00030efb) bg_list_pane_g5_ParamLimits

0x9aac,	// (0x00030efb) bg_list_pane_g5

0x0004,

0xf9d2,	// (0x00036e21) bg_list_pane_g_ParamLimits

0xf9d2,	// (0x00036e21) bg_list_pane_g

0x9a48,	// (0x00030e97) list_double2_graphic_large_graphic_pane_ParamLimits

0x9a48,	// (0x00030e97) list_double2_graphic_large_graphic_pane

0x9a48,	// (0x00030e97) list_double2_graphic_pane_ParamLimits

0x9a48,	// (0x00030e97) list_double2_graphic_pane

0x9a48,	// (0x00030e97) list_double2_large_graphic_pane_ParamLimits

0x9a48,	// (0x00030e97) list_double2_large_graphic_pane

0x9a48,	// (0x00030e97) list_double2_pane_ParamLimits

0x9a48,	// (0x00030e97) list_double2_pane

0x9a48,	// (0x00030e97) list_double_graphic_heading_pane_ParamLimits

0x9a48,	// (0x00030e97) list_double_graphic_heading_pane

0x9a48,	// (0x00030e97) list_double_graphic_pane_ParamLimits

0x9a48,	// (0x00030e97) list_double_graphic_pane

0x9a48,	// (0x00030e97) list_double_heading_pane_ParamLimits

0x9a48,	// (0x00030e97) list_double_heading_pane

0x9a48,	// (0x00030e97) list_double_large_graphic_pane_ParamLimits

0x9a48,	// (0x00030e97) list_double_large_graphic_pane

0x9a48,	// (0x00030e97) list_double_number_pane_ParamLimits

0x9a48,	// (0x00030e97) list_double_number_pane

0x9a48,	// (0x00030e97) list_double_pane_ParamLimits

0x9a48,	// (0x00030e97) list_double_pane

0x9a48,	// (0x00030e97) list_double_time_pane_ParamLimits

0x9a48,	// (0x00030e97) list_double_time_pane

0x9a48,	// (0x00030e97) list_setting_number_pane_ParamLimits

0x9a48,	// (0x00030e97) list_setting_number_pane

0x9a48,	// (0x00030e97) list_setting_pane_ParamLimits

0x9a48,	// (0x00030e97) list_setting_pane

0x9a5a,	// (0x00030ea9) list_single_2graphic_pane_ParamLimits

0x9a5a,	// (0x00030ea9) list_single_2graphic_pane

0x9a5a,	// (0x00030ea9) list_single_graphic_heading_pane_ParamLimits

0x9a5a,	// (0x00030ea9) list_single_graphic_heading_pane

0x9a5a,	// (0x00030ea9) list_single_graphic_pane_ParamLimits

0x9a5a,	// (0x00030ea9) list_single_graphic_pane

0x9a5a,	// (0x00030ea9) list_single_heading_pane_ParamLimits

0x9a5a,	// (0x00030ea9) list_single_heading_pane

0x9a5a,	// (0x00030ea9) list_single_large_graphic_pane_ParamLimits

0x9a5a,	// (0x00030ea9) list_single_large_graphic_pane

0x9a5a,	// (0x00030ea9) list_single_number_heading_pane_ParamLimits

0x9a5a,	// (0x00030ea9) list_single_number_heading_pane

0x9a5a,	// (0x00030ea9) list_single_number_pane_ParamLimits

0x9a5a,	// (0x00030ea9) list_single_number_pane

0x9a5a,	// (0x00030ea9) list_single_pane_ParamLimits

0x9a5a,	// (0x00030ea9) list_single_pane

0xae60,	// (0x000322af) list_highlight_pane_cp1

0x4929,	// (0x0002bd78) list_single_pane_g1_ParamLimits

0x4929,	// (0x0002bd78) list_single_pane_g1

0x4935,	// (0x0002bd84) list_single_pane_g2_ParamLimits

0x4935,	// (0x0002bd84) list_single_pane_g2

0x0001,

0xf60c,	// (0x00036a5b) list_single_pane_g_ParamLimits

0xf60c,	// (0x00036a5b) list_single_pane_g

0x4b2a,	// (0x0002bf79) list_single_pane_t1_ParamLimits

0x4b2a,	// (0x0002bf79) list_single_pane_t1

0x4929,	// (0x0002bd78) list_single_number_pane_g1_ParamLimits

0x4929,	// (0x0002bd78) list_single_number_pane_g1

0x4935,	// (0x0002bd84) list_single_number_pane_g2_ParamLimits

0x4935,	// (0x0002bd84) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x00036a5b) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x00036a5b) list_single_number_pane_g

0x4913,	// (0x0002bd62) list_single_number_pane_t1_ParamLimits

0x4913,	// (0x0002bd62) list_single_number_pane_t1

0x7e15,	// (0x0002f264) list_single_number_pane_t2_ParamLimits

0x7e15,	// (0x0002f264) list_single_number_pane_t2

0x0001,

0xf993,	// (0x00036de2) list_single_number_pane_t_ParamLimits

0xf993,	// (0x00036de2) list_single_number_pane_t

0x4f28,	// (0x0002c377) list_single_graphic_pane_g1_ParamLimits

0x4f28,	// (0x0002c377) list_single_graphic_pane_g1

0x4929,	// (0x0002bd78) list_single_graphic_pane_g2_ParamLimits

0x4929,	// (0x0002bd78) list_single_graphic_pane_g2

0x4935,	// (0x0002bd84) list_single_graphic_pane_g3_ParamLimits

0x4935,	// (0x0002bd84) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x00036a54) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x00036a54) list_single_graphic_pane_g

0x7524,	// (0x0002e973) list_single_graphic_pane_t1_ParamLimits

0x7524,	// (0x0002e973) list_single_graphic_pane_t1

0x4929,	// (0x0002bd78) list_single_heading_pane_g1_ParamLimits

0x4929,	// (0x0002bd78) list_single_heading_pane_g1

0x4935,	// (0x0002bd84) list_single_heading_pane_g2_ParamLimits

0x4935,	// (0x0002bd84) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x00036a5b) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x00036a5b) list_single_heading_pane_g

0x4b4c,	// (0x0002bf9b) list_single_heading_pane_t1_ParamLimits

0x4b4c,	// (0x0002bf9b) list_single_heading_pane_t1

0x753a,	// (0x0002e989) list_single_heading_pane_t2_ParamLimits

0x753a,	// (0x0002e989) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x00036a60) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x00036a60) list_single_heading_pane_t

0x4929,	// (0x0002bd78) list_single_number_heading_pane_g1_ParamLimits

0x4929,	// (0x0002bd78) list_single_number_heading_pane_g1

0x4935,	// (0x0002bd84) list_single_number_heading_pane_g2_ParamLimits

0x4935,	// (0x0002bd84) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x00036a5b) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x00036a5b) list_single_number_heading_pane_g

0x4b4c,	// (0x0002bf9b) list_single_number_heading_pane_t1_ParamLimits

0x4b4c,	// (0x0002bf9b) list_single_number_heading_pane_t1

0x754c,	// (0x0002e99b) list_single_number_heading_pane_t2_ParamLimits

0x754c,	// (0x0002e99b) list_single_number_heading_pane_t2

0x4b04,	// (0x0002bf53) list_single_number_heading_pane_t3_ParamLimits

0x4b04,	// (0x0002bf53) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x00036a65) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x00036a65) list_single_number_heading_pane_t

0x48ef,	// (0x0002bd3e) list_single_graphic_heading_pane_g1_ParamLimits

0x48ef,	// (0x0002bd3e) list_single_graphic_heading_pane_g1

0x755e,	// (0x0002e9ad) list_single_graphic_heading_pane_g4_ParamLimits

0x755e,	// (0x0002e9ad) list_single_graphic_heading_pane_g4

0x4935,	// (0x0002bd84) list_single_graphic_heading_pane_g5_ParamLimits

0x4935,	// (0x0002bd84) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x00036a6c) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x00036a6c) list_single_graphic_heading_pane_g

0x4b4c,	// (0x0002bf9b) list_single_graphic_heading_pane_t1_ParamLimits

0x4b4c,	// (0x0002bf9b) list_single_graphic_heading_pane_t1

0x756f,	// (0x0002e9be) list_single_graphic_heading_pane_t2_ParamLimits

0x756f,	// (0x0002e9be) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x00036a73) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x00036a73) list_single_graphic_heading_pane_t

0x4b40,	// (0x0002bf8f) list_single_large_graphic_pane_g1_ParamLimits

0x4b40,	// (0x0002bf8f) list_single_large_graphic_pane_g1

0x4929,	// (0x0002bd78) list_single_large_graphic_pane_g2_ParamLimits

0x4929,	// (0x0002bd78) list_single_large_graphic_pane_g2

0x4935,	// (0x0002bd84) list_single_large_graphic_pane_g3_ParamLimits

0x4935,	// (0x0002bd84) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x00036a78) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x00036a78) list_single_large_graphic_pane_g

0xcfc5,	// (0x00034414) wait_border_pane_g2_copy1

0x7581,	// (0x0002e9d0) list_single_large_graphic_pane_g4_cp2

0x4b4c,	// (0x0002bf9b) list_single_large_graphic_pane_t1_ParamLimits

0x4b4c,	// (0x0002bf9b) list_single_large_graphic_pane_t1

0x4d5a,	// (0x0002c1a9) list_double_pane_g1_ParamLimits

0x4d5a,	// (0x0002c1a9) list_double_pane_g1

0x7589,	// (0x0002e9d8) list_double_pane_g2_ParamLimits

0x7589,	// (0x0002e9d8) list_double_pane_g2

0x0001,

0xf630,	// (0x00036a7f) list_double_pane_g_ParamLimits

0xf630,	// (0x00036a7f) list_double_pane_g

0x7595,	// (0x0002e9e4) list_double_pane_t1_ParamLimits

0x7595,	// (0x0002e9e4) list_double_pane_t1

0x75ab,	// (0x0002e9fa) list_double_pane_t2_ParamLimits

0x75ab,	// (0x0002e9fa) list_double_pane_t2

0x0001,

0xf635,	// (0x00036a84) list_double_pane_t_ParamLimits

0xf635,	// (0x00036a84) list_double_pane_t

0x75bd,	// (0x0002ea0c) list_double2_pane_g1_ParamLimits

0x75bd,	// (0x0002ea0c) list_double2_pane_g1

0x4450,	// (0x0002b89f) list_double2_pane_g2_ParamLimits

0x4450,	// (0x0002b89f) list_double2_pane_g2

0x0001,

0xf63a,	// (0x00036a89) list_double2_pane_g_ParamLimits

0xf63a,	// (0x00036a89) list_double2_pane_g

0x75ce,	// (0x0002ea1d) list_double2_pane_t1_ParamLimits

0x75ce,	// (0x0002ea1d) list_double2_pane_t1

0x75e4,	// (0x0002ea33) list_double2_pane_t2_ParamLimits

0x75e4,	// (0x0002ea33) list_double2_pane_t2

0x0001,

0xf63f,	// (0x00036a8e) list_double2_pane_t_ParamLimits

0xf63f,	// (0x00036a8e) list_double2_pane_t

0x4d5a,	// (0x0002c1a9) list_double_number_pane_g1_ParamLimits

0x4d5a,	// (0x0002c1a9) list_double_number_pane_g1

0x7589,	// (0x0002e9d8) list_double_number_pane_g2_ParamLimits

0x7589,	// (0x0002e9d8) list_double_number_pane_g2

0x0001,

0xf630,	// (0x00036a7f) list_double_number_pane_g_ParamLimits

0xf630,	// (0x00036a7f) list_double_number_pane_g

0x75f6,	// (0x0002ea45) list_double_number_pane_t1_ParamLimits

0x75f6,	// (0x0002ea45) list_double_number_pane_t1

0x7608,	// (0x0002ea57) list_double_number_pane_t2_ParamLimits

0x7608,	// (0x0002ea57) list_double_number_pane_t2

0x761e,	// (0x0002ea6d) list_double_number_pane_t3_ParamLimits

0x761e,	// (0x0002ea6d) list_double_number_pane_t3

0x0002,

0xf644,	// (0x00036a93) list_double_number_pane_t_ParamLimits

0xf644,	// (0x00036a93) list_double_number_pane_t

0x7630,	// (0x0002ea7f) list_double_graphic_pane_g1_ParamLimits

0x7630,	// (0x0002ea7f) list_double_graphic_pane_g1

0x763c,	// (0x0002ea8b) list_double_graphic_pane_g2_ParamLimits

0x763c,	// (0x0002ea8b) list_double_graphic_pane_g2

0x764b,	// (0x0002ea9a) list_double_graphic_pane_g3_ParamLimits

0x764b,	// (0x0002ea9a) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x00036a9a) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x00036a9a) list_double_graphic_pane_g

0x7663,	// (0x0002eab2) list_double_graphic_pane_t1_ParamLimits

0x7663,	// (0x0002eab2) list_double_graphic_pane_t1

0x7679,	// (0x0002eac8) list_double_graphic_pane_t2_ParamLimits

0x7679,	// (0x0002eac8) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x00036aa3) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x00036aa3) list_double_graphic_pane_t

0x768b,	// (0x0002eada) list_double2_graphic_pane_g1_ParamLimits

0x768b,	// (0x0002eada) list_double2_graphic_pane_g1

0x7697,	// (0x0002eae6) list_double2_graphic_pane_g2_ParamLimits

0x7697,	// (0x0002eae6) list_double2_graphic_pane_g2

0x4450,	// (0x0002b89f) list_double2_graphic_pane_g3_ParamLimits

0x4450,	// (0x0002b89f) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x00036aa8) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x00036aa8) list_double2_graphic_pane_g

0x76a3,	// (0x0002eaf2) list_double2_graphic_pane_t1_ParamLimits

0x76a3,	// (0x0002eaf2) list_double2_graphic_pane_t1

0x76b9,	// (0x0002eb08) list_double2_graphic_pane_t2_ParamLimits

0x76b9,	// (0x0002eb08) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x00036aaf) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x00036aaf) list_double2_graphic_pane_t

0x76cb,	// (0x0002eb1a) list_double_large_graphic_pane_g1_ParamLimits

0x76cb,	// (0x0002eb1a) list_double_large_graphic_pane_g1

0x76f6,	// (0x0002eb45) list_double_large_graphic_pane_g2_ParamLimits

0x76f6,	// (0x0002eb45) list_double_large_graphic_pane_g2

0x7589,	// (0x0002e9d8) list_double_large_graphic_pane_g3_ParamLimits

0x7589,	// (0x0002e9d8) list_double_large_graphic_pane_g3

0x7707,	// (0x0002eb56) list_double_large_graphic_pane_g4_ParamLimits

0x7707,	// (0x0002eb56) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x00036ab4) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x00036ab4) list_double_large_graphic_pane_g

0x7719,	// (0x0002eb68) list_double_large_graphic_pane_t1_ParamLimits

0x7719,	// (0x0002eb68) list_double_large_graphic_pane_t1

0x7732,	// (0x0002eb81) list_double_large_graphic_pane_t2_ParamLimits

0x7732,	// (0x0002eb81) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x00036abf) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x00036abf) list_double_large_graphic_pane_t

0x7744,	// (0x0002eb93) list_double2_large_graphic_pane_g1_ParamLimits

0x7744,	// (0x0002eb93) list_double2_large_graphic_pane_g1

0x75bd,	// (0x0002ea0c) list_double2_large_graphic_pane_g2_ParamLimits

0x75bd,	// (0x0002ea0c) list_double2_large_graphic_pane_g2

0x4450,	// (0x0002b89f) list_double2_large_graphic_pane_g3_ParamLimits

0x4450,	// (0x0002b89f) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x00036ac4) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x00036ac4) list_double2_large_graphic_pane_g

0x7750,	// (0x0002eb9f) list_double2_large_graphic_pane_t1_ParamLimits

0x7750,	// (0x0002eb9f) list_double2_large_graphic_pane_t1

0x7766,	// (0x0002ebb5) list_double2_large_graphic_pane_t2_ParamLimits

0x7766,	// (0x0002ebb5) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x00036acb) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x00036acb) list_double2_large_graphic_pane_t

0x7778,	// (0x0002ebc7) list_double_heading_pane_g1_ParamLimits

0x7778,	// (0x0002ebc7) list_double_heading_pane_g1

0x425b,	// (0x0002b6aa) list_double_heading_pane_g2_ParamLimits

0x425b,	// (0x0002b6aa) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x00036ad0) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x00036ad0) list_double_heading_pane_g

0x7789,	// (0x0002ebd8) list_double_heading_pane_t1_ParamLimits

0x7789,	// (0x0002ebd8) list_double_heading_pane_t1

0x75e4,	// (0x0002ea33) list_double_heading_pane_t2_ParamLimits

0x75e4,	// (0x0002ea33) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x00036ad5) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x00036ad5) list_double_heading_pane_t

0x7630,	// (0x0002ea7f) list_double_graphic_heading_pane_g1_ParamLimits

0x7630,	// (0x0002ea7f) list_double_graphic_heading_pane_g1

0x7778,	// (0x0002ebc7) list_double_graphic_heading_pane_g2_ParamLimits

0x7778,	// (0x0002ebc7) list_double_graphic_heading_pane_g2

0x425b,	// (0x0002b6aa) list_double_graphic_heading_pane_g3_ParamLimits

0x425b,	// (0x0002b6aa) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x00036ada) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x00036ada) list_double_graphic_heading_pane_g

0x779f,	// (0x0002ebee) list_double_graphic_heading_pane_t1_ParamLimits

0x779f,	// (0x0002ebee) list_double_graphic_heading_pane_t1

0x76b9,	// (0x0002eb08) list_double_graphic_heading_pane_t2_ParamLimits

0x76b9,	// (0x0002eb08) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x00036ae1) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x00036ae1) list_double_graphic_heading_pane_t

0x76f6,	// (0x0002eb45) list_double_time_pane_g1_ParamLimits

0x76f6,	// (0x0002eb45) list_double_time_pane_g1

0x7589,	// (0x0002e9d8) list_double_time_pane_g2_ParamLimits

0x7589,	// (0x0002e9d8) list_double_time_pane_g2

0x0001,

0xf697,	// (0x00036ae6) list_double_time_pane_g_ParamLimits

0xf697,	// (0x00036ae6) list_double_time_pane_g

0x77b5,	// (0x0002ec04) list_double_time_pane_t1_ParamLimits

0x77b5,	// (0x0002ec04) list_double_time_pane_t1

0x77cb,	// (0x0002ec1a) list_double_time_pane_t2_ParamLimits

0x77cb,	// (0x0002ec1a) list_double_time_pane_t2

0x77dd,	// (0x0002ec2c) list_double_time_pane_t3_ParamLimits

0x77dd,	// (0x0002ec2c) list_double_time_pane_t3

0x77ef,	// (0x0002ec3e) list_double_time_pane_t4_ParamLimits

0x77ef,	// (0x0002ec3e) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x00036aeb) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x00036aeb) list_double_time_pane_t

0x7801,	// (0x0002ec50) list_setting_pane_g1_ParamLimits

0x7801,	// (0x0002ec50) list_setting_pane_g1

0x780d,	// (0x0002ec5c) list_setting_pane_g2_ParamLimits

0x780d,	// (0x0002ec5c) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x00036af4) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x00036af4) list_setting_pane_g

0x7819,	// (0x0002ec68) list_setting_pane_t1_ParamLimits

0x7819,	// (0x0002ec68) list_setting_pane_t1

0x7833,	// (0x0002ec82) list_setting_pane_t2_ParamLimits

0x7833,	// (0x0002ec82) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x00036af9) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x00036af9) list_setting_pane_t

0x7872,	// (0x0002ecc1) set_value_pane_cp_ParamLimits

0x7872,	// (0x0002ecc1) set_value_pane_cp

0x787e,	// (0x0002eccd) list_setting_number_pane_g1_ParamLimits

0x787e,	// (0x0002eccd) list_setting_number_pane_g1

0x788a,	// (0x0002ecd9) list_setting_number_pane_g2_ParamLimits

0x788a,	// (0x0002ecd9) list_setting_number_pane_g2

0x0001,

0xf6b1,	// (0x00036b00) list_setting_number_pane_g_ParamLimits

0xf6b1,	// (0x00036b00) list_setting_number_pane_g

0x7896,	// (0x0002ece5) list_setting_number_pane_t1_ParamLimits

0x7896,	// (0x0002ece5) list_setting_number_pane_t1

0x78af,	// (0x0002ecfe) list_setting_number_pane_t2_ParamLimits

0x78af,	// (0x0002ecfe) list_setting_number_pane_t2

0x78c9,	// (0x0002ed18) list_setting_number_pane_t3_ParamLimits

0x78c9,	// (0x0002ed18) list_setting_number_pane_t3

0x0003,

0xf6b6,	// (0x00036b05) list_setting_number_pane_t_ParamLimits

0xf6b6,	// (0x00036b05) list_setting_number_pane_t

0x7872,	// (0x0002ecc1) set_value_pane_ParamLimits

0x7872,	// (0x0002ecc1) set_value_pane

0xbab5,	// (0x00032f04) bg_set_opt_pane_ParamLimits

0xbab5,	// (0x00032f04) bg_set_opt_pane

0x45d9,	// (0x0002ba28) set_value_pane_t1

0xbad6,	// (0x00032f25) slider_set_pane_cp3

0xbadf,	// (0x00032f2e) volume_small_pane_cp

0xbae8,	// (0x00032f37) list_form_gen_pane

0xbaf1,	// (0x00032f40) scroll_pane_cp8

0x790c,	// (0x0002ed5b) form_field_data_pane_ParamLimits

0x790c,	// (0x0002ed5b) form_field_data_pane

0x7923,	// (0x0002ed72) form_field_data_wide_pane_ParamLimits

0x7923,	// (0x0002ed72) form_field_data_wide_pane

0x7943,	// (0x0002ed92) form_field_popup_pane_ParamLimits

0x7943,	// (0x0002ed92) form_field_popup_pane

0x795b,	// (0x0002edaa) form_field_popup_wide_pane_ParamLimits

0x795b,	// (0x0002edaa) form_field_popup_wide_pane

0x466d,	// (0x0002babc) form_field_slider_pane_ParamLimits

0x466d,	// (0x0002babc) form_field_slider_pane

0x4680,	// (0x0002bacf) form_field_slider_wide_pane_ParamLimits

0x4680,	// (0x0002bacf) form_field_slider_wide_pane

0xbb02,	// (0x00032f51) data_form_pane

0x797c,	// (0x0002edcb) form_field_data_pane_t1

0xbb0e,	// (0x00032f5d) input_focus_pane

0xbb1c,	// (0x00032f6b) data_form_wide_pane

0x46c1,	// (0x0002bb10) form_field_data_wide_pane_t1

0xb889,	// (0x00032cd8) input_focus_pane_cp6

0x7996,	// (0x0002ede5) form_field_popup_pane_t1

0xbb0e,	// (0x00032f5d) input_focus_pane_cp7

0xbb48,	// (0x00032f97) list_form_pane

0x4703,	// (0x0002bb52) form_field_popup_wide_pane_t1

0xbb0e,	// (0x00032f5d) input_focus_pane_cp8

0xbb54,	// (0x00032fa3) list_form_wide_pane

0x79b8,	// (0x0002ee07) form_field_slider_pane_t1_ParamLimits

0x79b8,	// (0x0002ee07) form_field_slider_pane_t1

0x79d0,	// (0x0002ee1f) form_field_slider_pane_t2_ParamLimits

0x79d0,	// (0x0002ee1f) form_field_slider_pane_t2

0x0001,

0xf6c6,	// (0x00036b15) form_field_slider_pane_t_ParamLimits

0xf6c6,	// (0x00036b15) form_field_slider_pane_t

0xaeae,	// (0x000322fd) input_focus_pane_cp9_ParamLimits

0xaeae,	// (0x000322fd) input_focus_pane_cp9

0x79e5,	// (0x0002ee34) slider_cont_pane_ParamLimits

0x79e5,	// (0x0002ee34) slider_cont_pane

0xbb63,	// (0x00032fb2) form_field_slider_wide_pane_t1_ParamLimits

0xbb63,	// (0x00032fb2) form_field_slider_wide_pane_t1

0x475f,	// (0x0002bbae) form_field_slider_wide_pane_t2_ParamLimits

0x475f,	// (0x0002bbae) form_field_slider_wide_pane_t2

0x0001,

0xf6cb,	// (0x00036b1a) form_field_slider_wide_pane_t_ParamLimits

0xf6cb,	// (0x00036b1a) form_field_slider_wide_pane_t

0xaeae,	// (0x000322fd) input_focus_pane_cp10_ParamLimits

0xaeae,	// (0x000322fd) input_focus_pane_cp10

0x79f9,	// (0x0002ee48) slider_cont_pane_cp1_ParamLimits

0x79f9,	// (0x0002ee48) slider_cont_pane_cp1

0x7a0d,	// (0x0002ee5c) slider_form_pane_cp

0xbb75,	// (0x00032fc4) input_focus_pane_g1

0xbb7d,	// (0x00032fcc) input_focus_pane_g2

0xbb85,	// (0x00032fd4) input_focus_pane_g3

0xbb8d,	// (0x00032fdc) input_focus_pane_g4

0xbb95,	// (0x00032fe4) input_focus_pane_g5

0xbb9d,	// (0x00032fec) input_focus_pane_g6

0xbba5,	// (0x00032ff4) input_focus_pane_g7

0xbbad,	// (0x00032ffc) input_focus_pane_g8

0xbbb5,	// (0x00033004) input_focus_pane_g9

0xae56,	// (0x000322a5) input_focus_pane_g10

0x0009,

0xf6d0,	// (0x00036b1f) input_focus_pane_g

0xcfce,	// (0x0003441d) wait_border_pane_g3_copy1

0x7a15,	// (0x0002ee64) data_form_pane_t1

0xae56,	// (0x000322a5) wait_anim_pane_g1_copy1

0x7e27,	// (0x0002f276) data_form_wide_pane_t1

0x8726,	// (0x0002fb75) list_form_graphic_pane_cp_ParamLimits

0x8726,	// (0x0002fb75) list_form_graphic_pane_cp

0xdc2d,	// (0x0003507c) slider_form_pane_g1

0xdc36,	// (0x00035085) slider_form_pane_g2

0x0006,

0xf9c3,	// (0x00036e12) slider_form_pane_g

0x8726,	// (0x0002fb75) list_form_graphic_pane_ParamLimits

0x8726,	// (0x0002fb75) list_form_graphic_pane

0x47dd,	// (0x0002bc2c) list_form_graphic_pane_g1

0x47e5,	// (0x0002bc34) list_form_graphic_pane_t1_ParamLimits

0x47e5,	// (0x0002bc34) list_form_graphic_pane_t1

0xaebc,	// (0x0003230b) list_highlight_pane_cp5_ParamLimits

0xaebc,	// (0x0003230b) list_highlight_pane_cp5

0x7a2f,	// (0x0002ee7e) find_pane_g1

0xbbbd,	// (0x0003300c) input_find_pane

0x7a38,	// (0x0002ee87) input_find_pane_g1_ParamLimits

0x7a38,	// (0x0002ee87) input_find_pane_g1

0x7a44,	// (0x0002ee93) input_find_pane_t1_ParamLimits

0x7a44,	// (0x0002ee93) input_find_pane_t1

0x7a59,	// (0x0002eea8) input_find_pane_t2_ParamLimits

0x7a59,	// (0x0002eea8) input_find_pane_t2

0x0001,

0xf6e5,	// (0x00036b34) input_find_pane_t_ParamLimits

0xf6e5,	// (0x00036b34) input_find_pane_t

0xbbc6,	// (0x00033015) input_focus_pane_cp5_ParamLimits

0xbbc6,	// (0x00033015) input_focus_pane_cp5

0x8744,	// (0x0002fb93) bg_popup_window_pane_cp2_ParamLimits

0x8744,	// (0x0002fb93) bg_popup_window_pane_cp2

0x8751,	// (0x0002fba0) listscroll_menu_pane_ParamLimits

0x8751,	// (0x0002fba0) listscroll_menu_pane

0x875d,	// (0x0002fbac) popup_submenu_window_ParamLimits

0x875d,	// (0x0002fbac) popup_submenu_window

0xbbd4,	// (0x00033023) find_popup_pane_g1

0xbbdc,	// (0x0003302b) input_popup_find_pane_cp

0xbbc6,	// (0x00033015) input_focus_pane_cp4_ParamLimits

0xbbc6,	// (0x00033015) input_focus_pane_cp4

0xbbe6,	// (0x00033035) input_popup_find_pane_t1_ParamLimits

0xbbe6,	// (0x00033035) input_popup_find_pane_t1

0xae60,	// (0x000322af) bg_popup_sub_pane_cp

0xbc14,	// (0x00033063) listscroll_popup_sub_pane

0xbc1c,	// (0x0003306b) list_submenu_pane_ParamLimits

0xbc1c,	// (0x0003306b) list_submenu_pane

0xbc2d,	// (0x0003307c) scroll_pane_cp4

0xbc35,	// (0x00033084) list_single_popup_submenu_pane_ParamLimits

0xbc35,	// (0x00033084) list_single_popup_submenu_pane

0xbc49,	// (0x00033098) list_single_popup_submenu_pane_g1

0xbc51,	// (0x000330a0) list_single_popup_submenu_pane_t1_ParamLimits

0xbc51,	// (0x000330a0) list_single_popup_submenu_pane_t1

0xaeae,	// (0x000322fd) bg_active_tab_pane_cp1_ParamLimits

0xaeae,	// (0x000322fd) bg_active_tab_pane_cp1

0x8795,	// (0x0002fbe4) tabs_2_active_pane_g1

0x879d,	// (0x0002fbec) tabs_2_active_pane_t1

0xaeae,	// (0x000322fd) bg_passive_tab_pane_cp1_ParamLimits

0xaeae,	// (0x000322fd) bg_passive_tab_pane_cp1

0x8795,	// (0x0002fbe4) tabs_2_passive_pane_g1

0x879d,	// (0x0002fbec) tabs_2_passive_pane_t1

0xaebc,	// (0x0003230b) bg_active_tab_pane_cp4

0x87af,	// (0x0002fbfe) tabs_2_long_active_pane_t1

0xbc66,	// (0x000330b5) bg_passive_tab_pane_cp4

0x1b81,	// (0x00028fd0) list_single_midp_graphic_pane_g4_ParamLimits

0xaebc,	// (0x0003230b) bg_active_tab_pane_cp5

0x87c2,	// (0x0002fc11) tabs_3_long_active_pane_t1

0xbc66,	// (0x000330b5) bg_passive_tab_pane_cp5

0x1b81,	// (0x00028fd0) list_single_midp_graphic_pane_g4

0xaebc,	// (0x0003230b) bg_popup_window_pane_cp13_ParamLimits

0xaebc,	// (0x0003230b) bg_popup_window_pane_cp13

0xbc7b,	// (0x000330ca) listscroll_popup_fast_pane_ParamLimits

0xbc7b,	// (0x000330ca) listscroll_popup_fast_pane

0xbc8a,	// (0x000330d9) grid_popup_fast_pane_ParamLimits

0xbc8a,	// (0x000330d9) grid_popup_fast_pane

0xbc9c,	// (0x000330eb) scroll_pane_cp9_ParamLimits

0xbc9c,	// (0x000330eb) scroll_pane_cp9

0xeeb5,	// (0x00036304) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xeeb5,	// (0x00036304) list_single_graphic_hl_pane_t1_cp2

0xbcc0,	// (0x0003310f) input_focus_pane_cp20_ParamLimits

0xbcc0,	// (0x0003310f) input_focus_pane_cp20

0xbcce,	// (0x0003311d) query_popup_data_pane_t1_ParamLimits

0xbcce,	// (0x0003311d) query_popup_data_pane_t1

0xbce1,	// (0x00033130) query_popup_data_pane_t2_ParamLimits

0xbce1,	// (0x00033130) query_popup_data_pane_t2

0xbd27,	// (0x00033176) query_popup_data_pane_t3_ParamLimits

0xbd27,	// (0x00033176) query_popup_data_pane_t3

0xbd68,	// (0x000331b7) query_popup_data_pane_t4_ParamLimits

0xbd68,	// (0x000331b7) query_popup_data_pane_t4

0xbda4,	// (0x000331f3) query_popup_data_pane_t5_ParamLimits

0xbda4,	// (0x000331f3) query_popup_data_pane_t5

0x0004,

0xf6ea,	// (0x00036b39) query_popup_data_pane_t_ParamLimits

0xf6ea,	// (0x00036b39) query_popup_data_pane_t

0xbb75,	// (0x00032fc4) bg_set_opt_pane_g1

0xbb7d,	// (0x00032fcc) bg_set_opt_pane_g2

0xbb85,	// (0x00032fd4) bg_set_opt_pane_g3

0xbb8d,	// (0x00032fdc) bg_set_opt_pane_g4

0xbb95,	// (0x00032fe4) bg_set_opt_pane_g5

0xbb9d,	// (0x00032fec) bg_set_opt_pane_g6

0xbba5,	// (0x00032ff4) bg_set_opt_pane_g7

0xbbad,	// (0x00032ffc) bg_set_opt_pane_g8

0xbbb5,	// (0x00033004) bg_set_opt_pane_g9

0x0008,

0xf6f5,	// (0x00036b44) bg_set_opt_pane_g

0x0eff,	// (0x0002834e) control_top_pane_stacon_ParamLimits

0x0eff,	// (0x0002834e) control_top_pane_stacon

0x0f52,	// (0x000283a1) signal_pane_stacon_ParamLimits

0x0f52,	// (0x000283a1) signal_pane_stacon

0xc219,	// (0x00033668) stacon_top_pane_g1_ParamLimits

0xc219,	// (0x00033668) stacon_top_pane_g1

0x0f77,	// (0x000283c6) title_pane_stacon_ParamLimits

0x0f77,	// (0x000283c6) title_pane_stacon

0x0fa1,	// (0x000283f0) uni_indicator_pane_stacon_ParamLimits

0x0fa1,	// (0x000283f0) uni_indicator_pane_stacon

0x0fb6,	// (0x00028405) battery_pane_stacon_ParamLimits

0x0fb6,	// (0x00028405) battery_pane_stacon

0x0ffa,	// (0x00028449) control_bottom_pane_stacon_ParamLimits

0x0ffa,	// (0x00028449) control_bottom_pane_stacon

0x101d,	// (0x0002846c) navi_pane_stacon_ParamLimits

0x101d,	// (0x0002846c) navi_pane_stacon

0xc23b,	// (0x0003368a) stacon_bottom_pane_g1_ParamLimits

0xc23b,	// (0x0003368a) stacon_bottom_pane_g1

0x0b3c,	// (0x00027f8b) aid_levels_signal_lsc_ParamLimits

0x0b3c,	// (0x00027f8b) aid_levels_signal_lsc

0x0b53,	// (0x00027fa2) signal_pane_stacon_g1_ParamLimits

0x0b53,	// (0x00027fa2) signal_pane_stacon_g1

0x0b67,	// (0x00027fb6) signal_pane_stacon_g2_ParamLimits

0x0b67,	// (0x00027fb6) signal_pane_stacon_g2

0x0001,

0xf708,	// (0x00036b57) signal_pane_stacon_g_ParamLimits

0xf708,	// (0x00036b57) signal_pane_stacon_g

0x0b9c,	// (0x00027feb) title_pane_stacon_t1_ParamLimits

0x0b9c,	// (0x00027feb) title_pane_stacon_t1

0xbde8,	// (0x00033237) uni_indicator_pane_stacon_g1

0xbdf2,	// (0x00033241) uni_indicator_pane_stacon_g2

0xbdfc,	// (0x0003324b) uni_indicator_pane_stacon_g3

0xbe06,	// (0x00033255) uni_indicator_pane_stacon_g4

0x0003,

0xf714,	// (0x00036b63) uni_indicator_pane_stacon_g

0x0bc1,	// (0x00028010) control_top_pane_stacon_g1

0x0bc9,	// (0x00028018) control_top_pane_stacon_t1_ParamLimits

0x0bc9,	// (0x00028018) control_top_pane_stacon_t1

0x0c00,	// (0x0002804f) aid_levels_battery_lsc_ParamLimits

0x0c00,	// (0x0002804f) aid_levels_battery_lsc

0x0c18,	// (0x00028067) battery_pane_stacon_g1_ParamLimits

0x0c18,	// (0x00028067) battery_pane_stacon_g1

0x0c2b,	// (0x0002807a) battery_pane_stacon_g2_ParamLimits

0x0c2b,	// (0x0002807a) battery_pane_stacon_g2

0x0001,

0xf71d,	// (0x00036b6c) battery_pane_stacon_g_ParamLimits

0xf71d,	// (0x00036b6c) battery_pane_stacon_g

0x0c69,	// (0x000280b8) navi_icon_pane_stacon

0x0c7d,	// (0x000280cc) navi_navi_pane_stacon

0x0c69,	// (0x000280b8) navi_text_pane_stacon

0x0bc1,	// (0x00028010) control_bottom_pane_stacon_g1

0x0c91,	// (0x000280e0) control_bottom_pane_stacon_t1_ParamLimits

0x0c91,	// (0x000280e0) control_bottom_pane_stacon_t1

0x87d4,	// (0x0002fc23) grid_app_pane_ParamLimits

0x87d4,	// (0x0002fc23) grid_app_pane

0x880c,	// (0x0002fc5b) scroll_pane_cp15_ParamLimits

0x880c,	// (0x0002fc5b) scroll_pane_cp15

0x8829,	// (0x0002fc78) cell_app_pane_ParamLimits

0x8829,	// (0x0002fc78) cell_app_pane

0x886e,	// (0x0002fcbd) cell_app_pane_g1_ParamLimits

0x886e,	// (0x0002fcbd) cell_app_pane_g1

0xbe2a,	// (0x00033279) cell_app_pane_g2_ParamLimits

0xbe2a,	// (0x00033279) cell_app_pane_g2

0x0001,

0xf722,	// (0x00036b71) cell_app_pane_g_ParamLimits

0xf722,	// (0x00036b71) cell_app_pane_g

0xbe36,	// (0x00033285) cell_app_pane_t1_ParamLimits

0xbe36,	// (0x00033285) cell_app_pane_t1

0xbe48,	// (0x00033297) grid_highlight_pane_ParamLimits

0xbe48,	// (0x00033297) grid_highlight_pane

0xbb75,	// (0x00032fc4) cell_highlight_pane_g1

0xbb7d,	// (0x00032fcc) cell_highlight_pane_g2

0xbb85,	// (0x00032fd4) cell_highlight_pane_g3

0xbb8d,	// (0x00032fdc) cell_highlight_pane_g4

0xbb95,	// (0x00032fe4) cell_highlight_pane_g5

0xbb9d,	// (0x00032fec) cell_highlight_pane_g6

0xbba5,	// (0x00032ff4) cell_highlight_pane_g7

0xbbad,	// (0x00032ffc) cell_highlight_pane_g8

0xbbb5,	// (0x00033004) cell_highlight_pane_g9

0xae56,	// (0x000322a5) cell_highlight_pane_g10

0x0009,

0xf6d0,	// (0x00036b1f) cell_highlight_pane_g

0xbe59,	// (0x000332a8) bg_scroll_pane

0x0d5c,	// (0x000281ab) scroll_handle_pane

0xbea0,	// (0x000332ef) scroll_bg_pane_g1

0xbeb5,	// (0x00033304) scroll_bg_pane_g2

0xbecd,	// (0x0003331c) scroll_bg_pane_g3

0x0002,

0xf727,	// (0x00036b76) scroll_bg_pane_g

0xbee2,	// (0x00033331) scroll_handle_focus_pane_ParamLimits

0xbee2,	// (0x00033331) scroll_handle_focus_pane

0xbea0,	// (0x000332ef) scroll_handle_pane_g1

0xbeef,	// (0x0003333e) scroll_handle_pane_g2

0xbecd,	// (0x0003331c) scroll_handle_pane_g3

0x0002,

0xf72e,	// (0x00036b7d) scroll_handle_pane_g

0xbbc6,	// (0x00033015) bg_popup_sub_pane_cp21_ParamLimits

0xbbc6,	// (0x00033015) bg_popup_sub_pane_cp21

0xbf03,	// (0x00033352) popup_fep_japan_predictive_window_t1_ParamLimits

0xbf03,	// (0x00033352) popup_fep_japan_predictive_window_t1

0xbf1d,	// (0x0003336c) popup_fep_japan_predictive_window_t2_ParamLimits

0xbf1d,	// (0x0003336c) popup_fep_japan_predictive_window_t2

0xbf50,	// (0x0003339f) popup_fep_japan_predictive_window_t3_ParamLimits

0xbf50,	// (0x0003339f) popup_fep_japan_predictive_window_t3

0x0002,

0xf735,	// (0x00036b84) popup_fep_japan_predictive_window_t_ParamLimits

0xf735,	// (0x00036b84) popup_fep_japan_predictive_window_t

0xae60,	// (0x000322af) bg_popup_sub_pane_cp23

0xbf87,	// (0x000333d6) listscroll_japin_cand_pane

0xbf8f,	// (0x000333de) popup_fep_japan_candidate_window_t1

0xbf9d,	// (0x000333ec) candidate_pane_ParamLimits

0xbf9d,	// (0x000333ec) candidate_pane

0xbfaf,	// (0x000333fe) scroll_pane_cp30

0xbfb7,	// (0x00033406) list_single_popup_jap_candidate_pane_ParamLimits

0xbfb7,	// (0x00033406) list_single_popup_jap_candidate_pane

0xae60,	// (0x000322af) list_highlight_pane_cp30

0xbfcc,	// (0x0003341b) list_single_popup_jap_candidate_pane_t1

0xbfdb,	// (0x0003342a) level_1_signal

0xbfe8,	// (0x00033437) level_2_signal

0xbff5,	// (0x00033444) level_3_signal

0xc002,	// (0x00033451) level_4_signal

0xc00f,	// (0x0003345e) level_5_signal

0xc01c,	// (0x0003346b) level_6_signal

0xc029,	// (0x00033478) level_7_signal

0xbfdb,	// (0x0003342a) level_1_battery

0xbfe8,	// (0x00033437) level_2_battery

0xbff5,	// (0x00033444) level_3_battery

0xc002,	// (0x00033451) level_4_battery

0xc00f,	// (0x0003345e) level_5_battery

0xc01c,	// (0x0003346b) level_6_battery

0xc029,	// (0x00033478) level_7_battery

0xc04e,	// (0x0003349d) list_menu_pane_ParamLimits

0xc04e,	// (0x0003349d) list_menu_pane

0xc05f,	// (0x000334ae) scroll_pane_cp25_ParamLimits

0xc05f,	// (0x000334ae) scroll_pane_cp25

0xc078,	// (0x000334c7) list_double2_graphic_pane_cp2_ParamLimits

0xc078,	// (0x000334c7) list_double2_graphic_pane_cp2

0xc078,	// (0x000334c7) list_double2_large_graphic_pane_cp2_ParamLimits

0xc078,	// (0x000334c7) list_double2_large_graphic_pane_cp2

0xc078,	// (0x000334c7) list_double2_pane_cp2_ParamLimits

0xc078,	// (0x000334c7) list_double2_pane_cp2

0xc078,	// (0x000334c7) list_double_graphic_pane_cp2_ParamLimits

0xc078,	// (0x000334c7) list_double_graphic_pane_cp2

0xc078,	// (0x000334c7) list_double_large_graphic_pane_cp2_ParamLimits

0xc078,	// (0x000334c7) list_double_large_graphic_pane_cp2

0xc078,	// (0x000334c7) list_double_number_pane_cp2_ParamLimits

0xc078,	// (0x000334c7) list_double_number_pane_cp2

0xc078,	// (0x000334c7) list_double_pane_cp2_ParamLimits

0xc078,	// (0x000334c7) list_double_pane_cp2

0x88a1,	// (0x0002fcf0) list_single_2graphic_pane_cp2_ParamLimits

0x88a1,	// (0x0002fcf0) list_single_2graphic_pane_cp2

0x88a1,	// (0x0002fcf0) list_single_graphic_heading_pane_cp2_ParamLimits

0x88a1,	// (0x0002fcf0) list_single_graphic_heading_pane_cp2

0x88a1,	// (0x0002fcf0) list_single_graphic_pane_cp2_ParamLimits

0x88a1,	// (0x0002fcf0) list_single_graphic_pane_cp2

0x88a1,	// (0x0002fcf0) list_single_heading_pane_cp2_ParamLimits

0x88a1,	// (0x0002fcf0) list_single_heading_pane_cp2

0xc088,	// (0x000334d7) list_single_large_graphic_pane_cp2_ParamLimits

0xc088,	// (0x000334d7) list_single_large_graphic_pane_cp2

0x88a1,	// (0x0002fcf0) list_single_number_heading_pane_cp2_ParamLimits

0x88a1,	// (0x0002fcf0) list_single_number_heading_pane_cp2

0x88a1,	// (0x0002fcf0) list_single_number_pane_cp2_ParamLimits

0x88a1,	// (0x0002fcf0) list_single_number_pane_cp2

0x88a1,	// (0x0002fcf0) list_single_pane_cp2_ParamLimits

0x88a1,	// (0x0002fcf0) list_single_pane_cp2

0xc0a2,	// (0x000334f1) bg_popup_sub_pane_cp22

0x0e77,	// (0x000282c6) popup_side_volume_key_window_g1

0x0ea1,	// (0x000282f0) popup_side_volume_key_window_t1

0x0ebd,	// (0x0002830c) volume_small_pane_cp1

0xaeae,	// (0x000322fd) bg_popup_sub_pane_cp24_ParamLimits

0xaeae,	// (0x000322fd) bg_popup_sub_pane_cp24

0xc0b8,	// (0x00033507) fep_china_uni_candidate_pane_ParamLimits

0xc0b8,	// (0x00033507) fep_china_uni_candidate_pane

0xc0cc,	// (0x0003351b) fep_china_uni_entry_pane

0xc0dc,	// (0x0003352b) popup_fep_china_uni_window_g1

0xc0f8,	// (0x00033547) fep_china_uni_entry_pane_g1

0xc100,	// (0x0003354f) fep_china_uni_entry_pane_g2

0x0001,

0xf762,	// (0x00036bb1) fep_china_uni_entry_pane_g

0xc108,	// (0x00033557) fep_entry_item_pane

0xc112,	// (0x00033561) fep_candidate_item_pane

0xc11a,	// (0x00033569) fep_china_uni_candidate_pane_g1

0xc122,	// (0x00033571) fep_china_uni_candidate_pane_g2

0xc12a,	// (0x00033579) fep_china_uni_candidate_pane_g3

0xc132,	// (0x00033581) fep_china_uni_candidate_pane_g4

0x0003,

0xf767,	// (0x00036bb6) fep_china_uni_candidate_pane_g

0xae56,	// (0x000322a5) fep_entry_item_pane_g1

0xc13a,	// (0x00033589) fep_entry_item_pane_t1_ParamLimits

0xc13a,	// (0x00033589) fep_entry_item_pane_t1

0xc150,	// (0x0003359f) fep_candidate_item_pane_t1_ParamLimits

0xc150,	// (0x0003359f) fep_candidate_item_pane_t1

0xc165,	// (0x000335b4) fep_candidate_item_pane_t2_ParamLimits

0xc165,	// (0x000335b4) fep_candidate_item_pane_t2

0x0001,

0xf770,	// (0x00036bbf) fep_candidate_item_pane_t_ParamLimits

0xf770,	// (0x00036bbf) fep_candidate_item_pane_t

0xaebc,	// (0x0003230b) list_highlight_pane_cp31_ParamLimits

0xaebc,	// (0x0003230b) list_highlight_pane_cp31

0xc177,	// (0x000335c6) level_1_signal_lsc

0xc180,	// (0x000335cf) level_2_signal_lsc

0xc189,	// (0x000335d8) level_3_signal_lsc

0xc192,	// (0x000335e1) level_4_signal_lsc

0xc19b,	// (0x000335ea) level_5_signal_lsc

0xc1a4,	// (0x000335f3) level_6_signal_lsc

0xc1ad,	// (0x000335fc) level_7_signal_lsc

0xc1ad,	// (0x000335fc) level_1_battery_lsc

0xc1b6,	// (0x00033605) level_2_battery_lsc

0xc1bf,	// (0x0003360e) level_3_battery_lsc

0xc1c8,	// (0x00033617) level_4_battery_lsc

0xc1d1,	// (0x00033620) level_5_battery_lsc

0xc1da,	// (0x00033629) level_6_battery_lsc

0xc177,	// (0x000335c6) level_7_battery_lsc

0xc1e3,	// (0x00033632) scroll_handle_focus_pane_g1

0xc1ec,	// (0x0003363b) scroll_handle_focus_pane_g2

0xc1f5,	// (0x00033644) scroll_handle_focus_pane_g3

0x0002,

0xf775,	// (0x00036bc4) scroll_handle_focus_pane_g

0x7a77,	// (0x0002eec6) list_single_2graphic_pane_g1_ParamLimits

0x7a77,	// (0x0002eec6) list_single_2graphic_pane_g1

0x755e,	// (0x0002e9ad) list_single_2graphic_pane_g2_ParamLimits

0x755e,	// (0x0002e9ad) list_single_2graphic_pane_g2

0x4935,	// (0x0002bd84) list_single_2graphic_pane_g3_ParamLimits

0x4935,	// (0x0002bd84) list_single_2graphic_pane_g3

0x7a83,	// (0x0002eed2) list_single_2graphic_pane_g4_ParamLimits

0x7a83,	// (0x0002eed2) list_single_2graphic_pane_g4

0x0003,

0xf77c,	// (0x00036bcb) list_single_2graphic_pane_g_ParamLimits

0xf77c,	// (0x00036bcb) list_single_2graphic_pane_g

0x7a94,	// (0x0002eee3) list_single_2graphic_pane_t1_ParamLimits

0x7a94,	// (0x0002eee3) list_single_2graphic_pane_t1

0x7ac2,	// (0x0002ef11) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7ac2,	// (0x0002ef11) list_double2_graphic_large_graphic_pane_g1

0x75bd,	// (0x0002ea0c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x75bd,	// (0x0002ea0c) list_double2_graphic_large_graphic_pane_g2

0x4450,	// (0x0002b89f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4450,	// (0x0002b89f) list_double2_graphic_large_graphic_pane_g3

0x7ad4,	// (0x0002ef23) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7ad4,	// (0x0002ef23) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf785,	// (0x00036bd4) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf785,	// (0x00036bd4) list_double2_graphic_large_graphic_pane_g

0x7ae0,	// (0x0002ef2f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x7ae0,	// (0x0002ef2f) list_double2_graphic_large_graphic_pane_t1

0x7af6,	// (0x0002ef45) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x7af6,	// (0x0002ef45) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf78e,	// (0x00036bdd) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf78e,	// (0x00036bdd) list_double2_graphic_large_graphic_pane_t

0xc2b6,	// (0x00033705) popup_fast_swap_window_ParamLimits

0xc2b6,	// (0x00033705) popup_fast_swap_window

0xc2d2,	// (0x00033721) popup_side_volume_key_window

0xc2ee,	// (0x0003373d) stacon_top_pane

0xc2f8,	// (0x00033747) status_pane_ParamLimits

0xc2f8,	// (0x00033747) status_pane

0xc2ee,	// (0x0003373d) status_small_pane

0xae60,	// (0x000322af) control_pane

0xae60,	// (0x000322af) stacon_bottom_pane

0xbaf1,	// (0x00032f40) scroll_pane_cp121

0xbae8,	// (0x00032f37) set_content_pane

0xc1fe,	// (0x0003364d) bg_active_tab_pane_g1_cp1

0xc207,	// (0x00033656) bg_active_tab_pane_g2_cp1

0xc210,	// (0x0003365f) bg_active_tab_pane_g3_cp1

0xc1fe,	// (0x0003364d) bg_passive_tab_pane_g1_cp1

0xc207,	// (0x00033656) bg_passive_tab_pane_g2_cp1

0xc210,	// (0x0003365f) bg_passive_tab_pane_g3_cp1

0x8901,	// (0x0002fd50) bg_active_tab_pane_g1_cp2

0xc207,	// (0x00033656) bg_active_tab_pane_g2_cp2

0x890a,	// (0x0002fd59) bg_active_tab_pane_g3_cp2

0x8901,	// (0x0002fd50) bg_passive_tab_pane_g1_cp2

0xc207,	// (0x00033656) bg_passive_tab_pane_g2_cp2

0x890a,	// (0x0002fd59) bg_passive_tab_pane_g3_cp2

0x8913,	// (0x0002fd62) bg_active_tab_pane_g1_cp3

0xc207,	// (0x00033656) bg_active_tab_pane_g2_cp3

0x891c,	// (0x0002fd6b) bg_active_tab_pane_g3_cp3

0x8913,	// (0x0002fd62) bg_passive_tab_pane_g1_cp3

0xc207,	// (0x00033656) bg_passive_tab_pane_g2_cp3

0x891c,	// (0x0002fd6b) bg_passive_tab_pane_g3_cp3

0x8925,	// (0x0002fd74) bg_active_tab_pane_g1_cp4

0xc207,	// (0x00033656) bg_active_tab_pane_g2_cp4

0x892e,	// (0x0002fd7d) bg_active_tab_pane_g3_cp4

0x8925,	// (0x0002fd74) bg_passive_tab_pane_g1_cp4

0xc207,	// (0x00033656) bg_passive_tab_pane_g2_cp4

0x892e,	// (0x0002fd7d) bg_passive_tab_pane_g3_cp4

0xc257,	// (0x000336a6) bg_active_tab_pane_g1_cp5

0xc207,	// (0x00033656) bg_active_tab_pane_g2_cp5

0xc260,	// (0x000336af) bg_active_tab_pane_g3_cp5

0xc257,	// (0x000336a6) bg_passive_tab_pane_g1_cp5

0xc207,	// (0x00033656) bg_passive_tab_pane_g2_cp5

0xc260,	// (0x000336af) bg_passive_tab_pane_g3_cp5

0x8726,	// (0x0002fb75) list_set_graphic_pane_ParamLimits

0x8726,	// (0x0002fb75) list_set_graphic_pane

0xae60,	// (0x000322af) bg_set_opt_pane_cp4

0x8937,	// (0x0002fd86) list_set_graphic_pane_g1_ParamLimits

0x8937,	// (0x0002fd86) list_set_graphic_pane_g1

0x8943,	// (0x0002fd92) list_set_graphic_pane_g2_ParamLimits

0x8943,	// (0x0002fd92) list_set_graphic_pane_g2

0x0001,

0xf793,	// (0x00036be2) list_set_graphic_pane_g_ParamLimits

0xf793,	// (0x00036be2) list_set_graphic_pane_g

0x0009,

0xfb00,	// (0x00036f4f) volume_small_pane_cp_g

0xc269,	// (0x000336b8) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc269,	// (0x000336b8) list_double2_large_graphic_pane_g1_cp2

0xc275,	// (0x000336c4) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc275,	// (0x000336c4) list_double2_large_graphic_pane_g2_cp2

0xc286,	// (0x000336d5) list_double2_large_graphic_pane_g3_cp2

0xc28e,	// (0x000336dd) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc28e,	// (0x000336dd) list_double2_large_graphic_pane_t1_cp2

0xc2a4,	// (0x000336f3) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc2a4,	// (0x000336f3) list_double2_large_graphic_pane_t2_cp2

0xd9d9,	// (0x00034e28) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd9d9,	// (0x00034e28) list_double_large_graphic_pane_g1_cp2

0xd9ea,	// (0x00034e39) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd9ea,	// (0x00034e39) list_double_large_graphic_pane_g2_cp2

0xc414,	// (0x00033863) list_double_large_graphic_pane_g3_cp2

0xd9fb,	// (0x00034e4a) list_double_large_graphic_pane_g4_cp

0xda03,	// (0x00034e52) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xda03,	// (0x00034e52) list_double_large_graphic_pane_t1_cp2

0xda1a,	// (0x00034e69) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xda1a,	// (0x00034e69) list_double_large_graphic_pane_t2_cp2

0xc306,	// (0x00033755) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc306,	// (0x00033755) list_double2_graphic_pane_g1_cp2

0xc314,	// (0x00033763) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc314,	// (0x00033763) list_double2_graphic_pane_g2_cp2

0xc325,	// (0x00033774) list_double2_graphic_pane_g3_cp2

0xc32f,	// (0x0003377e) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc32f,	// (0x0003377e) list_double2_graphic_pane_t1_cp2

0xc345,	// (0x00033794) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc345,	// (0x00033794) list_double2_graphic_pane_t2_cp2

0xc357,	// (0x000337a6) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc357,	// (0x000337a6) list_single_number_heading_pane_g1_cp2

0xc363,	// (0x000337b2) list_single_number_heading_pane_g2_cp2

0xc36b,	// (0x000337ba) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc36b,	// (0x000337ba) list_single_number_heading_pane_t1_cp2

0xc381,	// (0x000337d0) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc381,	// (0x000337d0) list_single_number_heading_pane_t2_cp2

0xc393,	// (0x000337e2) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc393,	// (0x000337e2) list_single_number_heading_pane_t3_cp2

0xc357,	// (0x000337a6) list_single_heading_pane_g1_cp2_ParamLimits

0xc357,	// (0x000337a6) list_single_heading_pane_g1_cp2

0xc363,	// (0x000337b2) list_single_heading_pane_g2_cp2

0xc36b,	// (0x000337ba) list_single_heading_pane_t1_cp2_ParamLimits

0xc36b,	// (0x000337ba) list_single_heading_pane_t1_cp2

0xd7c3,	// (0x00034c12) list_single_heading_pane_t2_cp2_ParamLimits

0xd7c3,	// (0x00034c12) list_single_heading_pane_t2_cp2

0xd729,	// (0x00034b78) list_double_graphic_pane_g1_cp2_ParamLimits

0xd729,	// (0x00034b78) list_double_graphic_pane_g1_cp2

0xd735,	// (0x00034b84) list_double_graphic_pane_g2_cp2_ParamLimits

0xd735,	// (0x00034b84) list_double_graphic_pane_g2_cp2

0xd744,	// (0x00034b93) list_double_graphic_pane_g3_cp2

0xd74c,	// (0x00034b9b) list_double_graphic_pane_t1_cp2_ParamLimits

0xd74c,	// (0x00034b9b) list_double_graphic_pane_t1_cp2

0xd762,	// (0x00034bb1) list_double_graphic_pane_t2_cp2_ParamLimits

0xd762,	// (0x00034bb1) list_double_graphic_pane_t2_cp2

0xc408,	// (0x00033857) list_double_number_pane_g1_cp2_ParamLimits

0xc408,	// (0x00033857) list_double_number_pane_g1_cp2

0xc414,	// (0x00033863) list_double_number_pane_g2_cp2

0xd6ed,	// (0x00034b3c) list_double_number_pane_t1_cp2_ParamLimits

0xd6ed,	// (0x00034b3c) list_double_number_pane_t1_cp2

0xd701,	// (0x00034b50) list_double_number_pane_t2_cp2_ParamLimits

0xd701,	// (0x00034b50) list_double_number_pane_t2_cp2

0xd717,	// (0x00034b66) list_double_number_pane_t3_cp2_ParamLimits

0xd717,	// (0x00034b66) list_double_number_pane_t3_cp2

0xd664,	// (0x00034ab3) list_single_graphic_pane_g1_cp2_ParamLimits

0xd664,	// (0x00034ab3) list_single_graphic_pane_g1_cp2

0xc46c,	// (0x000338bb) list_single_graphic_pane_g2_cp2_ParamLimits

0xc46c,	// (0x000338bb) list_single_graphic_pane_g2_cp2

0xc478,	// (0x000338c7) list_single_graphic_pane_g3_cp2

0xd63a,	// (0x00034a89) list_single_graphic_pane_t1_cp2_ParamLimits

0xd63a,	// (0x00034a89) list_single_graphic_pane_t1_cp2

0xc46c,	// (0x000338bb) list_single_number_pane_g1_cp2_ParamLimits

0xc46c,	// (0x000338bb) list_single_number_pane_g1_cp2

0xc478,	// (0x000338c7) list_single_number_pane_g2_cp2

0xd63a,	// (0x00034a89) list_single_number_pane_t1_cp2_ParamLimits

0xd63a,	// (0x00034a89) list_single_number_pane_t1_cp2

0xd650,	// (0x00034a9f) list_single_number_pane_t2_cp2_ParamLimits

0xd650,	// (0x00034a9f) list_single_number_pane_t2_cp2

0xc275,	// (0x000336c4) list_double2_pane_g1_cp2_ParamLimits

0xc275,	// (0x000336c4) list_double2_pane_g1_cp2

0xc286,	// (0x000336d5) list_double2_pane_g2_cp2

0xc3e0,	// (0x0003382f) list_double2_pane_t1_cp2_ParamLimits

0xc3e0,	// (0x0003382f) list_double2_pane_t1_cp2

0xc3f6,	// (0x00033845) list_double2_pane_t2_cp2_ParamLimits

0xc3f6,	// (0x00033845) list_double2_pane_t2_cp2

0xc408,	// (0x00033857) list_double_pane_g1_cp2_ParamLimits

0xc408,	// (0x00033857) list_double_pane_g1_cp2

0xc414,	// (0x00033863) list_double_pane_g2_cp2

0xc41c,	// (0x0003386b) list_double_pane_t1_cp2_ParamLimits

0xc41c,	// (0x0003386b) list_double_pane_t1_cp2

0xc432,	// (0x00033881) list_double_pane_t2_cp2_ParamLimits

0xc432,	// (0x00033881) list_double_pane_t2_cp2

0xc45c,	// (0x000338ab) list_single_pane_cp2_g3

0xc46c,	// (0x000338bb) list_single_pane_g1_cp2_ParamLimits

0xc46c,	// (0x000338bb) list_single_pane_g1_cp2

0xc478,	// (0x000338c7) list_single_pane_g2_cp2

0xc480,	// (0x000338cf) list_single_pane_t1_cp2_ParamLimits

0xc480,	// (0x000338cf) list_single_pane_t1_cp2

0xc498,	// (0x000338e7) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xc498,	// (0x000338e7) list_single_large_graphic_pane_g1_cp2

0xc4a4,	// (0x000338f3) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc4a4,	// (0x000338f3) list_single_large_graphic_pane_g2_cp2

0xc4b0,	// (0x000338ff) list_single_large_graphic_pane_g3_cp2

0xc4b8,	// (0x00033907) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc4b8,	// (0x00033907) list_single_large_graphic_pane_g4_cp1

0xc4d2,	// (0x00033921) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc4d2,	// (0x00033921) list_single_large_graphic_pane_t1_cp2

0xd606,	// (0x00034a55) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xd606,	// (0x00034a55) list_single_graphic_heading_pane_g1_cp2

0xd5d3,	// (0x00034a22) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd5d3,	// (0x00034a22) list_single_graphic_heading_pane_g4_cp2

0xc478,	// (0x000338c7) list_single_graphic_heading_pane_g5_cp2

0xd612,	// (0x00034a61) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xd612,	// (0x00034a61) list_single_graphic_heading_pane_t1_cp2

0xd628,	// (0x00034a77) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xd628,	// (0x00034a77) list_single_graphic_heading_pane_t2_cp2

0xd5c7,	// (0x00034a16) list_single_2graphic_pane_g1_cp2_ParamLimits

0xd5c7,	// (0x00034a16) list_single_2graphic_pane_g1_cp2

0xd5d3,	// (0x00034a22) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd5d3,	// (0x00034a22) list_single_2graphic_pane_g2_cp2

0xc478,	// (0x000338c7) list_single_2graphic_pane_g3_cp2

0xd5e4,	// (0x00034a33) list_single_2graphic_pane_g4_cp2_ParamLimits

0xd5e4,	// (0x00034a33) list_single_2graphic_pane_g4_cp2

0xd5f0,	// (0x00034a3f) list_single_2graphic_pane_t1_cp2_ParamLimits

0xd5f0,	// (0x00034a3f) list_single_2graphic_pane_t1_cp2

0xae56,	// (0x000322a5) list_highlight_pane_g10_cp1

0xd1bd,	// (0x0003460c) list_highlight_pane_g1_cp1

0xd1c5,	// (0x00034614) list_highlight_pane_g2_cp1

0xd1cd,	// (0x0003461c) list_highlight_pane_g3_cp1

0xd1d5,	// (0x00034624) list_highlight_pane_g4_cp1

0xd1dd,	// (0x0003462c) list_highlight_pane_g5_cp1

0xd1e5,	// (0x00034634) list_highlight_pane_g6_cp1

0xd1ed,	// (0x0003463c) list_highlight_pane_g7_cp1

0xd1f5,	// (0x00034644) list_highlight_pane_g8_cp1

0xd1fd,	// (0x0003464c) list_highlight_pane_g9_cp1

0x972e,	// (0x00030b7d) form_field_slider_pane_t3

0x973c,	// (0x00030b8b) form_field_slider_pane_t4

0xd0f9,	// (0x00034548) slider_form_pane_ParamLimits

0xd0f9,	// (0x00034548) slider_form_pane

0xae60,	// (0x000322af) control_abbreviations

0xae60,	// (0x000322af) control_conventions

0xae60,	// (0x000322af) control_definitions

0xae60,	// (0x000322af) format_table_attribute

0xd82b,	// (0x00034c7a) bg_popup_preview_window_pane_g9

0xae60,	// (0x000322af) format_table_data2

0xae60,	// (0x000322af) format_table_data3

0xae60,	// (0x000322af) format_table_data_example

0x0008,

0xae60,	// (0x000322af) intro_purpose

0xf923,	// (0x00036d72) bg_popup_preview_window_pane_g

0xae60,	// (0x000322af) texts_category

0xae60,	// (0x000322af) texts_graphics

0xc4e8,	// (0x00033937) text_digital

0xc4f7,	// (0x00033946) text_primary

0xc506,	// (0x00033955) text_primary_small

0xc515,	// (0x00033964) text_secondary

0xc524,	// (0x00033973) text_title

0xdcba,	// (0x00035109) bg_passive_tab_pane_g1_cp3_srt

0xc207,	// (0x00033656) bg_passive_tab_pane_g2_cp3_srt

0xdcc3,	// (0x00035112) bg_passive_tab_pane_g3_cp3_srt

0xaeae,	// (0x000322fd) bg_active_tab_pane_cp3_srt_ParamLimits

0xaeae,	// (0x000322fd) bg_active_tab_pane_cp3_srt

0xdccc,	// (0x0003511b) tabs_4_active_pane_srt_g1

0x9ac0,	// (0x00030f0f) tabs_4_active_pane_srt_t1_ParamLimits

0x9ac0,	// (0x00030f0f) tabs_4_active_pane_srt_t1

0xdcba,	// (0x00035109) bg_active_tab_pane_g1_cp3_copy1

0xc207,	// (0x00033656) bg_active_tab_pane_g2_cp3_copy1

0xdcc3,	// (0x00035112) bg_active_tab_pane_g3_cp3_copy1

0xaebc,	// (0x0003230b) tabs_2_long_active_pane_srt_ParamLimits

0xaebc,	// (0x0003230b) tabs_2_long_active_pane_srt

0xaebc,	// (0x0003230b) tabs_2_long_passive_pane_srt_ParamLimits

0xaebc,	// (0x0003230b) tabs_2_long_passive_pane_srt

0xbc66,	// (0x000330b5) bg_passive_tab_pane_cp4_srt_ParamLimits

0xbc66,	// (0x000330b5) bg_passive_tab_pane_cp4_srt

0xdbe0,	// (0x0003502f) bg_passive_tab_pane_g1_cp4_srt

0xc207,	// (0x00033656) bg_passive_tab_pane_g2_cp4_srt

0xdbe9,	// (0x00035038) bg_passive_tab_pane_g3_cp4_srt

0xaebc,	// (0x0003230b) bg_active_tab_pane_cp4_srt_ParamLimits

0xaebc,	// (0x0003230b) bg_active_tab_pane_cp4_srt

0x98ce,	// (0x00030d1d) tabs_2_long_active_pane_srt_t1_ParamLimits

0x98ce,	// (0x00030d1d) tabs_2_long_active_pane_srt_t1

0xdbe0,	// (0x0003502f) bg_active_tab_pane_g1_cp4_srt

0xc207,	// (0x00033656) bg_active_tab_pane_g2_cp4_srt

0xdbe9,	// (0x00035038) bg_active_tab_pane_g3_cp4_srt

0xaeae,	// (0x000322fd) tabs_3_long_active_pane_srt_ParamLimits

0xaeae,	// (0x000322fd) tabs_3_long_active_pane_srt

0xaeae,	// (0x000322fd) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xaeae,	// (0x000322fd) tabs_3_long_passive_pane_cp_srt

0xaeae,	// (0x000322fd) tabs_3_long_passive_pane_srt_ParamLimits

0xaeae,	// (0x000322fd) tabs_3_long_passive_pane_srt

0xbc66,	// (0x000330b5) bg_passive_tab_pane_cp5_srt_ParamLimits

0xbc66,	// (0x000330b5) bg_passive_tab_pane_cp5_srt

0xc257,	// (0x000336a6) bg_passive_tab_pane_g1_cp5_srt

0xc207,	// (0x00033656) bg_passive_tab_pane_g2_cp5_srt

0xc260,	// (0x000336af) bg_passive_tab_pane_g3_cp5_srt

0xaebc,	// (0x0003230b) bg_active_tab_pane_cp5_srt_ParamLimits

0xaebc,	// (0x0003230b) bg_active_tab_pane_cp5_srt

0x98b8,	// (0x00030d07) tabs_3_long_active_pane_srt_t1_ParamLimits

0x98b8,	// (0x00030d07) tabs_3_long_active_pane_srt_t1

0xc257,	// (0x000336a6) bg_active_tab_pane_g1_cp5_srt

0xc207,	// (0x00033656) bg_active_tab_pane_g2_cp5_srt

0xc260,	// (0x000336af) bg_active_tab_pane_g3_cp5_srt

0xdbd2,	// (0x00035021) navi_text_pane_srt_t1

0xdbca,	// (0x00035019) navi_icon_pane_srt_g1

0xc62a,	// (0x00033a79) midp_editing_number_pane_srt

0xc533,	// (0x00033982) midp_ticker_pane_srt

0xc632,	// (0x00033a81) midp_ticker_pane_srt_g1

0xc63a,	// (0x00033a89) midp_ticker_pane_srt_g2

0x0001,

0xf7b2,	// (0x00036c01) midp_ticker_pane_srt_g

0xc642,	// (0x00033a91) midp_ticker_pane_srt_t1

0xdbbb,	// (0x0003500a) midp_editing_number_pane_t1_copy1

0x8967,	// (0x0002fdb6) listscroll_midp_pane

0x8967,	// (0x0002fdb6) midp_form_pane

0xc53b,	// (0x0003398a) midp_info_popup_window_ParamLimits

0xc53b,	// (0x0003398a) midp_info_popup_window

0xbbc6,	// (0x00033015) bg_popup_sub_pane_cp50_ParamLimits

0xbbc6,	// (0x00033015) bg_popup_sub_pane_cp50

0xce42,	// (0x00034291) listscroll_midp_info_pane_ParamLimits

0xce42,	// (0x00034291) listscroll_midp_info_pane

0xce2a,	// (0x00034279) listscroll_form_midp_pane_ParamLimits

0xce2a,	// (0x00034279) listscroll_form_midp_pane

0xce36,	// (0x00034285) scroll_bar_cp050

0x9722,	// (0x00030b71) list_midp_pane

0xe53c,	// (0x0003598b) signal_pane_g2_cp

0xcd5c,	// (0x000341ab) listscroll_midp_info_pane_t1_ParamLimits

0xcd5c,	// (0x000341ab) listscroll_midp_info_pane_t1

0xcd74,	// (0x000341c3) listscroll_midp_info_pane_t2_ParamLimits

0xcd74,	// (0x000341c3) listscroll_midp_info_pane_t2

0xcdb2,	// (0x00034201) listscroll_midp_info_pane_t3_ParamLimits

0xcdb2,	// (0x00034201) listscroll_midp_info_pane_t3

0xcdec,	// (0x0003423b) listscroll_midp_info_pane_t4_ParamLimits

0xcdec,	// (0x0003423b) listscroll_midp_info_pane_t4

0x0003,

0xf85e,	// (0x00036cad) listscroll_midp_info_pane_t_ParamLimits

0xf85e,	// (0x00036cad) listscroll_midp_info_pane_t

0xbc2d,	// (0x0003307c) scroll_pane_cp21

0xccfa,	// (0x00034149) form_midp_field_choice_group_pane

0xcd03,	// (0x00034152) form_midp_field_text_pane

0xcd42,	// (0x00034191) form_midp_field_time_pane

0xcd4a,	// (0x00034199) form_midp_gauge_slider_pane

0xcd53,	// (0x000341a2) form_midp_gauge_wait_pane

0xae60,	// (0x000322af) form_midp_image_pane

0x7cb0,	// (0x0002f0ff) list_single_midp_pane_ParamLimits

0x7cb0,	// (0x0002f0ff) list_single_midp_pane

0x9700,	// (0x00030b4f) form_midp_field_text_pane_t1

0xcba1,	// (0x00033ff0) input_focus_pane_cp050

0xcce9,	// (0x00034138) list_midp_form_text_pane

0xccb8,	// (0x00034107) form_midp_field_choice_group_pane_t1

0xccc6,	// (0x00034115) input_focus_pane_cp051

0xccda,	// (0x00034129) list_midp_choice_pane

0xae60,	// (0x000322af) status_idle_pane

0xcc9c,	// (0x000340eb) form_midp_field_time_pane_t1

0xae56,	// (0x000322a5) wait_anim_pane_g2_copy1

0xccaa,	// (0x000340f9) form_midp_field_time_pane_t2

0x0001,

0xc594,	// (0x000339e3) aid_navinavi_width_2_pane

0xf859,	// (0x00036ca8) form_midp_field_time_pane_t

0xae60,	// (0x000322af) input_focus_pane_cp052

0xae60,	// (0x000322af) bg_input_focus_pane_cp040

0xcc78,	// (0x000340c7) form_midp_gauge_slider_pane_t1

0xcc86,	// (0x000340d5) form_midp_gauge_slider_pane_t2

0x96e4,	// (0x00030b33) form_midp_gauge_slider_pane_t3

0x96f2,	// (0x00030b41) form_midp_gauge_slider_pane_t4

0x0003,

0xf850,	// (0x00036c9f) form_midp_gauge_slider_pane_t

0xcc94,	// (0x000340e3) form_midp_slider_pane

0xaebc,	// (0x0003230b) bg_input_focus_pane_cp041_ParamLimits

0xaebc,	// (0x0003230b) bg_input_focus_pane_cp041

0xcc45,	// (0x00034094) form_midp_gauge_wait_pane_t1_ParamLimits

0xcc45,	// (0x00034094) form_midp_gauge_wait_pane_t1

0xcc57,	// (0x000340a6) form_midp_gauge_wait_pane_t2_ParamLimits

0xcc57,	// (0x000340a6) form_midp_gauge_wait_pane_t2

0x0001,

0xf84b,	// (0x00036c9a) form_midp_gauge_wait_pane_t_ParamLimits

0xf84b,	// (0x00036c9a) form_midp_gauge_wait_pane_t

0xcc69,	// (0x000340b8) form_midp_wait_pane_ParamLimits

0xcc69,	// (0x000340b8) form_midp_wait_pane

0xcc0f,	// (0x0003405e) form_midp_image_pane_g1

0xcc18,	// (0x00034067) form_midp_image_pane_t1

0xcc27,	// (0x00034076) form_midp_image_pane_t2

0xcc36,	// (0x00034085) form_midp_image_pane_t3

0x0002,

0xf844,	// (0x00036c93) form_midp_image_pane_t

0xcc06,	// (0x00034055) list_single_midp_pane_g1

0x496b,	// (0x0002bdba) list_single_midp_pane_t1

0x96cf,	// (0x00030b1e) list_midp_form_item_pane_ParamLimits

0x96cf,	// (0x00030b1e) list_midp_form_item_pane

0xc54e,	// (0x0003399d) list_midp_form_item_pane_t1

0xc55d,	// (0x000339ac) midp_ticker_pane_g1

0xc569,	// (0x000339b8) midp_ticker_pane_g2

0x0001,

0xf798,	// (0x00036be7) midp_ticker_pane_g

0x8a0f,	// (0x0002fe5e) midp_ticker_pane_t1

0x9a39,	// (0x00030e88) midp_editing_number_pane_t1

0xdc4f,	// (0x0003509e) midp_editing_number_pane

0xdc5e,	// (0x000350ad) midp_ticker_pane

0xdbab,	// (0x00034ffa) ai_message_heading_pane

0xae60,	// (0x000322af) bg_popup_window_pane_cp14

0xdbb3,	// (0x00035002) listscroll_ai_message_pane

0xdb35,	// (0x00034f84) ai_message_heading_pane_g1_ParamLimits

0xdb35,	// (0x00034f84) ai_message_heading_pane_g1

0xdb41,	// (0x00034f90) ai_message_heading_pane_g2_ParamLimits

0xdb41,	// (0x00034f90) ai_message_heading_pane_g2

0xdb4d,	// (0x00034f9c) ai_message_heading_pane_g3_ParamLimits

0xdb4d,	// (0x00034f9c) ai_message_heading_pane_g3

0xdb59,	// (0x00034fa8) ai_message_heading_pane_g4_ParamLimits

0xdb59,	// (0x00034fa8) ai_message_heading_pane_g4

0x0003,

0xf985,	// (0x00036dd4) ai_message_heading_pane_g_ParamLimits

0xf985,	// (0x00036dd4) ai_message_heading_pane_g

0xdb65,	// (0x00034fb4) ai_message_heading_pane_t1_ParamLimits

0xdb65,	// (0x00034fb4) ai_message_heading_pane_t1

0xdb7f,	// (0x00034fce) ai_message_heading_pane_t2_ParamLimits

0xdb7f,	// (0x00034fce) ai_message_heading_pane_t2

0x0001,

0xf98e,	// (0x00036ddd) ai_message_heading_pane_t_ParamLimits

0xf98e,	// (0x00036ddd) ai_message_heading_pane_t

0xdb91,	// (0x00034fe0) bg_popup_heading_pane_cp1_ParamLimits

0xdb91,	// (0x00034fe0) bg_popup_heading_pane_cp1

0xdb23,	// (0x00034f72) list_ai_message_pane_ParamLimits

0xdb23,	// (0x00034f72) list_ai_message_pane

0xbc2d,	// (0x0003307c) scroll_pane_cp10

0xdabf,	// (0x00034f0e) list_ai_message_pane_g1

0xdac7,	// (0x00034f16) list_ai_message_pane_g2

0x0001,

0xf962,	// (0x00036db1) list_ai_message_pane_g

0xdacf,	// (0x00034f1e) list_ai_message_pane_t1_ParamLimits

0xdacf,	// (0x00034f1e) list_ai_message_pane_t1

0xdae4,	// (0x00034f33) list_ai_message_pane_t2_ParamLimits

0xdae4,	// (0x00034f33) list_ai_message_pane_t2

0xdaf9,	// (0x00034f48) list_ai_message_pane_t3_ParamLimits

0xdaf9,	// (0x00034f48) list_ai_message_pane_t3

0xdb0e,	// (0x00034f5d) list_ai_message_pane_t4_ParamLimits

0xdb0e,	// (0x00034f5d) list_ai_message_pane_t4

0x0003,

0xf967,	// (0x00036db6) list_ai_message_pane_t_ParamLimits

0xf967,	// (0x00036db6) list_ai_message_pane_t

0x9897,	// (0x00030ce6) cell_ai_soft_ind_pane_ParamLimits

0x9897,	// (0x00030ce6) cell_ai_soft_ind_pane

0xc575,	// (0x000339c4) cell_ai_soft_ind_pane_g1_ParamLimits

0xc575,	// (0x000339c4) cell_ai_soft_ind_pane_g1

0xae60,	// (0x000322af) grid_highlight_cp1

0xc582,	// (0x000339d1) text_secondary_cp56_ParamLimits

0xc582,	// (0x000339d1) text_secondary_cp56

0xda94,	// (0x00034ee3) example_general_pane_ParamLimits

0xda94,	// (0x00034ee3) example_general_pane

0xdaa0,	// (0x00034eef) example_parent_pane_g1_ParamLimits

0xdaa0,	// (0x00034eef) example_parent_pane_g1

0xdaac,	// (0x00034efb) example_parent_pane_t1_ParamLimits

0xdaac,	// (0x00034efb) example_parent_pane_t1

0x8e2a,	// (0x00030279) popup_preview_text_window_ParamLimits

0x8e2a,	// (0x00030279) popup_preview_text_window

0xc464,	// (0x000338b3) list_single_pane_cp2_g4

0xb6e8,	// (0x00032b37) bg_popup_preview_window_pane_ParamLimits

0xb6e8,	// (0x00032b37) bg_popup_preview_window_pane

0xd833,	// (0x00034c82) popup_preview_text_window_t1_ParamLimits

0xd833,	// (0x00034c82) popup_preview_text_window_t1

0xd851,	// (0x00034ca0) popup_preview_text_window_t2_ParamLimits

0xd851,	// (0x00034ca0) popup_preview_text_window_t2

0xd89a,	// (0x00034ce9) popup_preview_text_window_t3_ParamLimits

0xd89a,	// (0x00034ce9) popup_preview_text_window_t3

0xd8df,	// (0x00034d2e) popup_preview_text_window_t4_ParamLimits

0xd8df,	// (0x00034d2e) popup_preview_text_window_t4

0x0004,

0xf936,	// (0x00036d85) popup_preview_text_window_t_ParamLimits

0xf936,	// (0x00036d85) popup_preview_text_window_t

0xd95d,	// (0x00034dac) scroll_pane_cp11

0xcab1,	// (0x00033f00) bg_popup_preview_window_pane_g1

0xd7d5,	// (0x00034c24) bg_popup_preview_window_pane_g2

0xd7dd,	// (0x00034c2c) bg_popup_preview_window_pane_g3

0xd7e5,	// (0x00034c34) bg_popup_preview_window_pane_g4

0xd80b,	// (0x00034c5a) bg_popup_preview_window_pane_g5

0xd813,	// (0x00034c62) bg_popup_preview_window_pane_g6

0xd81b,	// (0x00034c6a) bg_popup_preview_window_pane_g7

0xd823,	// (0x00034c72) bg_popup_preview_window_pane_g8

0x0333,	// (0x00027782) aid_popup_width_pane

0x8da6,	// (0x000301f5) popup_midp_note_alarm_window_ParamLimits

0x8da6,	// (0x000301f5) popup_midp_note_alarm_window

0xbb02,	// (0x00032f51) data_form_pane_ParamLimits

0x7972,	// (0x0002edc1) form_field_data_pane_g1

0x797c,	// (0x0002edcb) form_field_data_pane_t1_ParamLimits

0xbb0e,	// (0x00032f5d) input_focus_pane_ParamLimits

0xbb1c,	// (0x00032f6b) data_form_wide_pane_ParamLimits

0x46b5,	// (0x0002bb04) form_field_data_wide_pane_g1

0x46c1,	// (0x0002bb10) form_field_data_wide_pane_t1_ParamLimits

0xb889,	// (0x00032cd8) input_focus_pane_cp6_ParamLimits

0x8787,	// (0x0002fbd6) input_popup_find_pane_g1_ParamLimits

0x8787,	// (0x0002fbd6) input_popup_find_pane_g1

0x0c3c,	// (0x0002808b) aid_navi_side_left_pane

0x0c51,	// (0x000280a0) aid_navi_side_right_pane

0xd29a,	// (0x000346e9) bg_popup_window_pane_cp30_ParamLimits

0xd29a,	// (0x000346e9) bg_popup_window_pane_cp30

0xd314,	// (0x00034763) popup_midp_note_alarm_window_g1_ParamLimits

0xd314,	// (0x00034763) popup_midp_note_alarm_window_g1

0xd344,	// (0x00034793) popup_midp_note_alarm_window_t1_ParamLimits

0xd344,	// (0x00034793) popup_midp_note_alarm_window_t1

0xd3e5,	// (0x00034834) popup_midp_note_alarm_window_t2_ParamLimits

0xd3e5,	// (0x00034834) popup_midp_note_alarm_window_t2

0xd493,	// (0x000348e2) popup_midp_note_alarm_window_t3_ParamLimits

0xd493,	// (0x000348e2) popup_midp_note_alarm_window_t3

0xd4c5,	// (0x00034914) popup_midp_note_alarm_window_t4_ParamLimits

0xd4c5,	// (0x00034914) popup_midp_note_alarm_window_t4

0xd4eb,	// (0x0003493a) popup_midp_note_alarm_window_t5_ParamLimits

0xd4eb,	// (0x0003493a) popup_midp_note_alarm_window_t5

0x000a,

0xf8d3,	// (0x00036d22) popup_midp_note_alarm_window_t_ParamLimits

0xf8d3,	// (0x00036d22) popup_midp_note_alarm_window_t

0xd597,	// (0x000349e6) wait_bar_pane_cp1_ParamLimits

0xd597,	// (0x000349e6) wait_bar_pane_cp1

0xae60,	// (0x000322af) wait_anim_pane_copy1

0xae60,	// (0x000322af) wait_border_pane_copy1

0xcfba,	// (0x00034409) wait_border_pane_g1_copy1

0x46db,	// (0x0002bb2a) form_field_popup_pane_g1

0x7996,	// (0x0002ede5) form_field_popup_pane_t1_ParamLimits

0xbb0e,	// (0x00032f5d) input_focus_pane_cp7_ParamLimits

0xbb48,	// (0x00032f97) list_form_pane_ParamLimits

0x46fb,	// (0x0002bb4a) form_field_popup_wide_pane_g1

0x4703,	// (0x0002bb52) form_field_popup_wide_pane_t1_ParamLimits

0xbb0e,	// (0x00032f5d) input_focus_pane_cp8_ParamLimits

0xbb54,	// (0x00032fa3) list_form_wide_pane_ParamLimits

0xdcf3,	// (0x00035142) aid_size_cell_graphic_pane

0x7a15,	// (0x0002ee64) data_form_pane_t1_ParamLimits

0x7e27,	// (0x0002f276) data_form_wide_pane_t1_ParamLimits

0x935b,	// (0x000307aa) bg_status_flat_pane

0x83bb,	// (0x0002f80a) title_pane_t1_ParamLimits

0xae76,	// (0x000322c5) title_pane_t2_ParamLimits

0xae9c,	// (0x000322eb) title_pane_t3_ParamLimits

0xf59b,	// (0x000369ea) title_pane_t_ParamLimits

0xbfdb,	// (0x0003342a) level_1_signal_ParamLimits

0xbfe8,	// (0x00033437) level_2_signal_ParamLimits

0xbff5,	// (0x00033444) level_3_signal_ParamLimits

0xc002,	// (0x00033451) level_4_signal_ParamLimits

0xc00f,	// (0x0003345e) level_5_signal_ParamLimits

0xc01c,	// (0x0003346b) level_6_signal_ParamLimits

0xc029,	// (0x00033478) level_7_signal_ParamLimits

0xbfdb,	// (0x0003342a) level_1_battery_ParamLimits

0xbfe8,	// (0x00033437) level_2_battery_ParamLimits

0xbff5,	// (0x00033444) level_3_battery_ParamLimits

0xc002,	// (0x00033451) level_4_battery_ParamLimits

0xc00f,	// (0x0003345e) level_5_battery_ParamLimits

0xc01c,	// (0x0003346b) level_6_battery_ParamLimits

0xc029,	// (0x00033478) level_7_battery_ParamLimits

0xd1bd,	// (0x0003460c) bg_status_flat_pane_g1

0xd1c5,	// (0x00034614) bg_status_flat_pane_g2

0xd1cd,	// (0x0003461c) bg_status_flat_pane_g3

0xd1d5,	// (0x00034624) bg_status_flat_pane_g4

0xd1dd,	// (0x0003462c) bg_status_flat_pane_g5

0xd1e5,	// (0x00034634) bg_status_flat_pane_g6

0xd1ed,	// (0x0003463c) bg_status_flat_pane_g7

0x844f,	// (0x0002f89e) tabs_3_active_pane_t1_ParamLimits

0x844f,	// (0x0002f89e) tabs_3_passive_pane_t1_ParamLimits

0x8469,	// (0x0002f8b8) tabs_4_active_pane_t1_ParamLimits

0x8469,	// (0x0002f8b8) tabs_4_1_passive_pane_t1_ParamLimits

0x879d,	// (0x0002fbec) tabs_2_active_pane_t1_ParamLimits

0x879d,	// (0x0002fbec) tabs_2_passive_pane_t1_ParamLimits

0xaebc,	// (0x0003230b) bg_active_tab_pane_cp4_ParamLimits

0x87af,	// (0x0002fbfe) tabs_2_long_active_pane_t1_ParamLimits

0xbc66,	// (0x000330b5) bg_passive_tab_pane_cp4_ParamLimits

0x1bb5,	// (0x00029004) list_single_midp_graphic_pane_t1_ParamLimits

0xaebc,	// (0x0003230b) bg_active_tab_pane_cp5_ParamLimits

0x87c2,	// (0x0002fc11) tabs_3_long_active_pane_t1_ParamLimits

0xbc66,	// (0x000330b5) bg_passive_tab_pane_cp5_ParamLimits

0x1bb5,	// (0x00029004) list_single_midp_graphic_pane_t1

0x935b,	// (0x000307aa) bg_status_flat_pane_ParamLimits

0xc952,	// (0x00033da1) indicator_pane_cp2_ParamLimits

0xc952,	// (0x00033da1) indicator_pane_cp2

0x94d2,	// (0x00030921) navi_pane_srt_ParamLimits

0x94d2,	// (0x00030921) navi_pane_srt

0xc97a,	// (0x00033dc9) popup_clock_digital_analogue_window_cp1

0xb551,	// (0x000329a0) indicator_pane_t1

0xc533,	// (0x00033982) copy_highlight_pane

0xc533,	// (0x00033982) cursor_graphics_pane

0xc533,	// (0x00033982) graphic_within_text_pane

0xc533,	// (0x00033982) link_highlight_pane

0xd920,	// (0x00034d6f) popup_preview_text_window_t5_ParamLimits

0xd920,	// (0x00034d6f) popup_preview_text_window_t5

0xc59c,	// (0x000339eb) cursor_digital_pane

0xc59c,	// (0x000339eb) cursor_primary_pane

0xc5ad,	// (0x000339fc) cursor_primary_small_pane

0xc5b5,	// (0x00033a04) cursor_secondary_pane

0xc5bd,	// (0x00033a0c) cursor_title_pane

0xc59c,	// (0x000339eb) link_highlight_digital_pane

0xc5a4,	// (0x000339f3) link_highlight_primary_pane

0xc5ad,	// (0x000339fc) link_highlight_primary_small_pane

0xc5b5,	// (0x00033a04) link_highlight_secondary_pane

0xc5bd,	// (0x00033a0c) link_highlight_title_pane

0xc59c,	// (0x000339eb) copy_highlight_digital_pane

0xc59c,	// (0x000339eb) copy_highlight_primary_pane

0xc5ad,	// (0x000339fc) copy_highlight_primary_small_pane

0xc5b5,	// (0x00033a04) copy_highlight_secondary_pane

0xc5bd,	// (0x00033a0c) copy_highlight_title_pane

0xc5b5,	// (0x00033a04) graphic_text_digital_pane

0xd23d,	// (0x0003468c) graphic_text_primary_pane

0xd246,	// (0x00034695) graphic_text_primary_small_pane

0xc5ad,	// (0x000339fc) graphic_text_secondary_pane

0xc59c,	// (0x000339eb) graphic_text_title_pane

0x8a21,	// (0x0002fe70) cursor_primary_pane_g1

0xd22f,	// (0x0003467e) cursor_text_primary_t1

0x975e,	// (0x00030bad) cursor_primary_small_pane_g1

0xd221,	// (0x00034670) cursor_text_primary_small_t1

0x9754,	// (0x00030ba3) cursor_primary_small_pane_g1_copy1

0xd213,	// (0x00034662) cursor_text_primary_small_t1_copy1

0xd205,	// (0x00034654) cursor_text_title_t1

0x974a,	// (0x00030b99) cursor_title_pane_g1

0x8a21,	// (0x0002fe70) cursor_digital_pane_g1

0xc5c5,	// (0x00033a14) cursor_text_digital_t1

0xc5ea,	// (0x00033a39) link_highlight_primary_pane_g1

0xd1ae,	// (0x000345fd) link_highlight_primary_pane_t1

0xc5d3,	// (0x00033a22) link_highlight_primary_small_pane_g1

0xc5db,	// (0x00033a2a) link_highlight_primary_small_pane_t1

0xc5ea,	// (0x00033a39) link_highlight_secondary_pane_g1

0xc5f2,	// (0x00033a41) link_highlight_secondary_pane_t1

0xd122,	// (0x00034571) link_highlight_title_pane_g1

0xd12a,	// (0x00034579) link_highlight_title_pane_t1

0xd10b,	// (0x0003455a) link_highlight_digital_pane_g1

0xd113,	// (0x00034562) link_highlight_digital_pane_t1

0xcfff,	// (0x0003444e) copy_highlight_primary_pane_g1

0xd007,	// (0x00034456) copy_highlight_primary_pane_t1

0xcfd9,	// (0x00034428) copy_highlight_primary_small_pane_g1

0xcff0,	// (0x0003443f) copy_highlight_primary_small_pane_t1

0xc601,	// (0x00033a50) copy_highlight_secondary_pane_g1

0xc609,	// (0x00033a58) copy_highlight_secondary_pane_t1

0xcfd9,	// (0x00034428) copy_highlight_title_pane_g1

0xcfe1,	// (0x00034430) copy_highlight_title_pane_t1

0xcfff,	// (0x0003444e) copy_highlight_digital_pane_g1

0xde79,	// (0x000352c8) copy_highlight_digital_pane_t1

0xddcd,	// (0x0003521c) graphic_text_primary_pane_g1

0xde5d,	// (0x000352ac) graphic_text_primary_pane_t1

0xde6b,	// (0x000352ba) graphic_text_primary_pane_t2

0x0001,

0xfa02,	// (0x00036e51) graphic_text_primary_pane_t

0xde39,	// (0x00035288) graphic_text_primary_small_pane_g1

0xde41,	// (0x00035290) graphic_text_primary_small_pane_t1

0xde4f,	// (0x0003529e) graphic_text_primary_small_pane_t2

0x0001,

0xf9fd,	// (0x00036e4c) graphic_text_primary_small_pane_t

0xde15,	// (0x00035264) graphic_text_secondary_pane_g1

0xde1d,	// (0x0003526c) graphic_text_secondary_pane_t1

0xde2b,	// (0x0003527a) graphic_text_secondary_pane_t2

0x0001,

0xf9f8,	// (0x00036e47) graphic_text_secondary_pane_t

0xddf1,	// (0x00035240) graphic_text_title_pane_g1

0xddf9,	// (0x00035248) graphic_text_title_pane_t1

0xde07,	// (0x00035256) graphic_text_title_pane_t2

0x0001,

0xf9f3,	// (0x00036e42) graphic_text_title_pane_t

0xddcd,	// (0x0003521c) graphic_text_digital_pane_g1

0xddd5,	// (0x00035224) graphic_text_digital_pane_t1

0xdde3,	// (0x00035232) graphic_text_digital_pane_t2

0x0001,

0xf9ee,	// (0x00036e3d) graphic_text_digital_pane_t

0xaebc,	// (0x0003230b) navi_icon_pane_srt_ParamLimits

0xaebc,	// (0x0003230b) navi_icon_pane_srt

0xae60,	// (0x000322af) navi_midp_pane_srt

0xae60,	// (0x000322af) navi_navi_pane_srt

0xaebc,	// (0x0003230b) navi_text_pane_srt_ParamLimits

0xaebc,	// (0x0003230b) navi_text_pane_srt

0xdd98,	// (0x000351e7) navi_navi_icon_text_pane_srt

0xdda0,	// (0x000351ef) navi_navi_pane_srt_g1_ParamLimits

0xdda0,	// (0x000351ef) navi_navi_pane_srt_g1

0xddb2,	// (0x00035201) navi_navi_pane_srt_g2_ParamLimits

0xddb2,	// (0x00035201) navi_navi_pane_srt_g2

0x0001,

0xf9e9,	// (0x00036e38) navi_navi_pane_srt_g_ParamLimits

0xf9e9,	// (0x00036e38) navi_navi_pane_srt_g

0xddc4,	// (0x00035213) navi_navi_tabs_pane_srt

0xdd98,	// (0x000351e7) navi_navi_text_pane_srt

0xdd98,	// (0x000351e7) navi_navi_volume_pane_srt

0xdd89,	// (0x000351d8) navi_navi_text_pane_srt_t1

0x2442,	// (0x00029891) navi_navi_volume_pane_srt_g1

0x244a,	// (0x00029899) volume_small_pane_srt_ParamLimits

0x244a,	// (0x00029899) volume_small_pane_srt

0x115a,	// (0x000285a9) volume_small_pane_srt_g1_ParamLimits

0x115a,	// (0x000285a9) volume_small_pane_srt_g1

0x116a,	// (0x000285b9) volume_small_pane_srt_g2_ParamLimits

0x116a,	// (0x000285b9) volume_small_pane_srt_g2

0x117b,	// (0x000285ca) volume_small_pane_srt_g3_ParamLimits

0x117b,	// (0x000285ca) volume_small_pane_srt_g3

0x118c,	// (0x000285db) volume_small_pane_srt_g4_ParamLimits

0x118c,	// (0x000285db) volume_small_pane_srt_g4

0x119d,	// (0x000285ec) volume_small_pane_srt_g5_ParamLimits

0x119d,	// (0x000285ec) volume_small_pane_srt_g5

0x11ae,	// (0x000285fd) volume_small_pane_srt_g6_ParamLimits

0x11ae,	// (0x000285fd) volume_small_pane_srt_g6

0x11bf,	// (0x0002860e) volume_small_pane_srt_g7_ParamLimits

0x11bf,	// (0x0002860e) volume_small_pane_srt_g7

0x11d0,	// (0x0002861f) volume_small_pane_srt_g8_ParamLimits

0x11d0,	// (0x0002861f) volume_small_pane_srt_g8

0x11e1,	// (0x00028630) volume_small_pane_srt_g9_ParamLimits

0x11e1,	// (0x00028630) volume_small_pane_srt_g9

0x11f2,	// (0x00028641) volume_small_pane_srt_g10_ParamLimits

0x11f2,	// (0x00028641) volume_small_pane_srt_g10

0x0009,

0xf79d,	// (0x00036bec) volume_small_pane_srt_g_ParamLimits

0xf79d,	// (0x00036bec) volume_small_pane_srt_g

0xb791,	// (0x00032be0) query_popup_data_pane_cp2

0xdd6f,	// (0x000351be) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xdd6f,	// (0x000351be) navi_navi_icon_text_pane_srt_t1

0xd23d,	// (0x0003468c) navi_tabs_2_long_pane_srt

0xd23d,	// (0x0003468c) navi_tabs_2_pane_srt

0xd23d,	// (0x0003468c) navi_tabs_3_long_pane_srt

0xd23d,	// (0x0003468c) navi_tabs_3_pane_srt

0xd23d,	// (0x0003468c) navi_tabs_4_pane_srt

0x2422,	// (0x00029871) tabs_2_active_pane_srt_ParamLimits

0x2422,	// (0x00029871) tabs_2_active_pane_srt

0x2432,	// (0x00029881) tabs_2_passive_pane_srt_ParamLimits

0x2432,	// (0x00029881) tabs_2_passive_pane_srt

0xcba1,	// (0x00033ff0) bg_passive_tab_pane_cp1_srt_ParamLimits

0xcba1,	// (0x00033ff0) bg_passive_tab_pane_cp1_srt

0xdd4d,	// (0x0003519c) bg_passive_tab_pane_g1_cp1_srt

0xc207,	// (0x00033656) bg_passive_tab_pane_g2_cp1_srt

0xdd56,	// (0x000351a5) bg_passive_tab_pane_g3_cp1_srt

0xaeae,	// (0x000322fd) bg_active_tab_pane_cp1_srt_ParamLimits

0xaeae,	// (0x000322fd) bg_active_tab_pane_cp1_srt

0xdd5f,	// (0x000351ae) tabs_2_active_pane_srt_g1

0x9b3c,	// (0x00030f8b) tabs_2_active_pane_srt_t1_ParamLimits

0x9b3c,	// (0x00030f8b) tabs_2_active_pane_srt_t1

0xdd4d,	// (0x0003519c) bg_active_tab_pane_g1_cp1_srt

0xc207,	// (0x00033656) bg_active_tab_pane_g2_cp1_srt

0xdd56,	// (0x000351a5) bg_active_tab_pane_g3_cp1_srt

0x23dd,	// (0x0002982c) tabs_3_active_pane_srt_ParamLimits

0x23dd,	// (0x0002982c) tabs_3_active_pane_srt

0x23ee,	// (0x0002983d) tabs_3_passive_pane_cp_srt_ParamLimits

0x23ee,	// (0x0002983d) tabs_3_passive_pane_cp_srt

0x23ff,	// (0x0002984e) tabs_3_passive_pane_srt_ParamLimits

0x23ff,	// (0x0002984e) tabs_3_passive_pane_srt

0xcba1,	// (0x00033ff0) bg_passive_tab_pane_cp2_srt_ParamLimits

0xcba1,	// (0x00033ff0) bg_passive_tab_pane_cp2_srt

0xc618,	// (0x00033a67) bg_passive_tab_pane_g1_cp2_srt

0xc207,	// (0x00033656) bg_passive_tab_pane_g2_cp2_srt

0xc621,	// (0x00033a70) bg_passive_tab_pane_g3_cp2_srt

0xaeae,	// (0x000322fd) bg_active_tab_pane_cp2_srt_ParamLimits

0xaeae,	// (0x000322fd) bg_active_tab_pane_cp2_srt

0xdd45,	// (0x00035194) tabs_3_active_pane_srt_g1

0x9b26,	// (0x00030f75) tabs_3_active_pane_srt_t1_ParamLimits

0x9b26,	// (0x00030f75) tabs_3_active_pane_srt_t1

0xc618,	// (0x00033a67) bg_active_tab_pane_g1_cp2_srt

0xc207,	// (0x00033656) bg_active_tab_pane_g2_cp2_srt

0xc621,	// (0x00033a70) bg_active_tab_pane_g3_cp2_srt

0x2383,	// (0x000297d2) tabs_4_active_pane_srt_ParamLimits

0x2383,	// (0x000297d2) tabs_4_active_pane_srt

0x2395,	// (0x000297e4) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2395,	// (0x000297e4) tabs_4_passive_pane_cp2_srt

0xc745,	// (0x00033b94) aid_size_cell_toolbar

0xd7ed,	// (0x00034c3c) main_idle_act_pane_ParamLimits

0xc811,	// (0x00033c60) popup_large_graphic_colour_window_ParamLimits

0x9226,	// (0x00030675) popup_toolbar_window_ParamLimits

0x9226,	// (0x00030675) popup_toolbar_window

0xdc71,	// (0x000350c0) list_single_graphic_2heading_pane_ParamLimits

0xdc71,	// (0x000350c0) list_single_graphic_2heading_pane

0xbe10,	// (0x0003325f) aid_size_cell_apps_grid_lsc_pane

0xbe22,	// (0x00033271) aid_size_cell_apps_grid_prt_pane

0xbc66,	// (0x000330b5) bg_wml_button_pane_cp1_ParamLimits

0xbc66,	// (0x000330b5) bg_wml_button_pane_cp1

0x9700,	// (0x00030b4f) form_midp_field_text_pane_t1_ParamLimits

0xcba1,	// (0x00033ff0) input_focus_pane_cp050_ParamLimits

0xcce9,	// (0x00034138) list_midp_form_text_pane_ParamLimits

0xccc6,	// (0x00034115) input_focus_pane_cp051_ParamLimits

0xccda,	// (0x00034129) list_midp_choice_pane_ParamLimits

0x969b,	// (0x00030aea) list_single_2graphic_pane_cp3_ParamLimits

0x969b,	// (0x00030aea) list_single_2graphic_pane_cp3

0x96af,	// (0x00030afe) list_single_midp_graphic_pane_ParamLimits

0x96af,	// (0x00030afe) list_single_midp_graphic_pane

0x029f,	// (0x000276ee) list_single_graphic_2heading_pane_g1_ParamLimits

0x029f,	// (0x000276ee) list_single_graphic_2heading_pane_g1

0x02ab,	// (0x000276fa) list_single_graphic_2heading_pane_g4_ParamLimits

0x02ab,	// (0x000276fa) list_single_graphic_2heading_pane_g4

0x02b7,	// (0x00027706) list_single_graphic_2heading_pane_g5_ParamLimits

0x02b7,	// (0x00027706) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f0,	// (0x00036c3f) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f0,	// (0x00036c3f) list_single_graphic_2heading_pane_g

0x02c3,	// (0x00027712) list_single_graphic_2heading_pane_t1_ParamLimits

0x02c3,	// (0x00027712) list_single_graphic_2heading_pane_t1

0x02d7,	// (0x00027726) list_single_graphic_2heading_pane_t2_ParamLimits

0x02d7,	// (0x00027726) list_single_graphic_2heading_pane_t2

0x02f3,	// (0x00027742) list_single_graphic_2heading_pane_t3_ParamLimits

0x02f3,	// (0x00027742) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f7,	// (0x00036c46) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f7,	// (0x00036c46) list_single_graphic_2heading_pane_t

0xc9bf,	// (0x00033e0e) bg_popup_sub_pane_cp2

0xca19,	// (0x00033e68) grid_toobar_pane

0x1b24,	// (0x00028f73) cell_toolbar_pane_ParamLimits

0x1b24,	// (0x00028f73) cell_toolbar_pane

0xca55,	// (0x00033ea4) cell_toolbar_pane_g1_ParamLimits

0xca55,	// (0x00033ea4) cell_toolbar_pane_g1

0xca69,	// (0x00033eb8) cell_toolbar_pane_g2_ParamLimits

0xca69,	// (0x00033eb8) cell_toolbar_pane_g2

0x0001,

0xf805,	// (0x00036c54) cell_toolbar_pane_g_ParamLimits

0xf805,	// (0x00036c54) cell_toolbar_pane_g

0xca8b,	// (0x00033eda) grid_highlight_pane_cp2_ParamLimits

0xca8b,	// (0x00033eda) grid_highlight_pane_cp2

0xcaa5,	// (0x00033ef4) toolbar_button_pane

0xcab1,	// (0x00033f00) toolbar_button_pane_g1

0xcab9,	// (0x00033f08) toolbar_button_pane_g2

0xcac1,	// (0x00033f10) toolbar_button_pane_g3

0xcac9,	// (0x00033f18) toolbar_button_pane_g4

0xcad1,	// (0x00033f20) toolbar_button_pane_g5

0xcad9,	// (0x00033f28) toolbar_button_pane_g6

0xcae1,	// (0x00033f30) toolbar_button_pane_g7

0xcae9,	// (0x00033f38) toolbar_button_pane_g8

0xcaf1,	// (0x00033f40) toolbar_button_pane_g9

0x0009,

0xf80a,	// (0x00036c59) toolbar_button_pane_g

0x1b5c,	// (0x00028fab) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1b5c,	// (0x00028fab) list_single_2graphic_pane_g1_cp3

0x7c3e,	// (0x0002f08d) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7c3e,	// (0x0002f08d) list_single_2graphic_pane_g2_cp3

0x1b79,	// (0x00028fc8) list_single_2graphic_pane_g3_cp3

0x1b81,	// (0x00028fd0) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1b81,	// (0x00028fd0) list_single_2graphic_pane_g4_cp3

0x1b8d,	// (0x00028fdc) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1b8d,	// (0x00028fdc) list_single_2graphic_pane_t1_cp3

0x1ba9,	// (0x00028ff8) list_single_midp_graphic_pane_g2_ParamLimits

0x1ba9,	// (0x00028ff8) list_single_midp_graphic_pane_g2

0xc74d,	// (0x00033b9c) aid_zoom_text_primary

0x48c3,	// (0x0002bd12) aid_zoom_text_secondary

0xc6d5,	// (0x00033b24) status_small_pane_g7_ParamLimits

0xc6d5,	// (0x00033b24) status_small_pane_g7

0xc6f8,	// (0x00033b47) status_small_pane_t1_ParamLimits

0x8397,	// (0x0002f7e6) title_pane_g2

0x0003,

0xf592,	// (0x000369e1) title_pane_g

0x861f,	// (0x0002fa6e) aid_size_cell_colour_1_pane_ParamLimits

0x861f,	// (0x0002fa6e) aid_size_cell_colour_1_pane

0x8633,	// (0x0002fa82) aid_size_cell_colour_2_pane_ParamLimits

0x8633,	// (0x0002fa82) aid_size_cell_colour_2_pane

0x8647,	// (0x0002fa96) aid_size_cell_colour_3_pane_ParamLimits

0x8647,	// (0x0002fa96) aid_size_cell_colour_3_pane

0x865b,	// (0x0002faaa) aid_size_cell_colour_4_pane_ParamLimits

0x865b,	// (0x0002faaa) aid_size_cell_colour_4_pane

0x0b78,	// (0x00027fc7) title_pane_stacon_g1_ParamLimits

0x0b78,	// (0x00027fc7) title_pane_stacon_g1

0xd05e,	// (0x000344ad) popup_note_wait_window_g3_ParamLimits

0xd05e,	// (0x000344ad) popup_note_wait_window_g3

0xd0d4,	// (0x00034523) popup_note_wait_window_t5_ParamLimits

0xd0d4,	// (0x00034523) popup_note_wait_window_t5

0xae60,	// (0x000322af) main_feb_china_hwr_fs_writing_pane

0x8adc,	// (0x0002ff2b) popup_feb_china_hwr_fs_window_ParamLimits

0x8adc,	// (0x0002ff2b) popup_feb_china_hwr_fs_window

0x7c4f,	// (0x0002f09e) aid_size_cell_hwr_fs_ParamLimits

0x7c4f,	// (0x0002f09e) aid_size_cell_hwr_fs

0xcba1,	// (0x00033ff0) bg_popup_sub_pane_cp3_ParamLimits

0xcba1,	// (0x00033ff0) bg_popup_sub_pane_cp3

0x7c64,	// (0x0002f0b3) grid_hwr_fs_pane_ParamLimits

0x7c64,	// (0x0002f0b3) grid_hwr_fs_pane

0x1bf8,	// (0x00029047) linegrid_hwr_fs_pane_ParamLimits

0x1bf8,	// (0x00029047) linegrid_hwr_fs_pane

0x7c7c,	// (0x0002f0cb) cell_hwr_fs_pane_ParamLimits

0x7c7c,	// (0x0002f0cb) cell_hwr_fs_pane

0xcbad,	// (0x00033ffc) linegrid_hwr_fs_pane_g1_ParamLimits

0xcbad,	// (0x00033ffc) linegrid_hwr_fs_pane_g1

0x966f,	// (0x00030abe) linegrid_hwr_fs_pane_g2_ParamLimits

0x966f,	// (0x00030abe) linegrid_hwr_fs_pane_g2

0xcbb9,	// (0x00034008) linegrid_hwr_fs_pane_g3_ParamLimits

0xcbb9,	// (0x00034008) linegrid_hwr_fs_pane_g3

0x1c3c,	// (0x0002908b) linegrid_hwr_fs_pane_g4_ParamLimits

0x1c3c,	// (0x0002908b) linegrid_hwr_fs_pane_g4

0x1c56,	// (0x000290a5) linegrid_hwr_fs_pane_g5_ParamLimits

0x1c56,	// (0x000290a5) linegrid_hwr_fs_pane_g5

0x0004,

0xf830,	// (0x00036c7f) linegrid_hwr_fs_pane_g_ParamLimits

0xf830,	// (0x00036c7f) linegrid_hwr_fs_pane_g

0xcbc5,	// (0x00034014) cell_hwr_fs_pane_g1_ParamLimits

0xcbc5,	// (0x00034014) cell_hwr_fs_pane_g1

0xc98b,	// (0x00033dda) cell_hwr_fs_pane_g2_ParamLimits

0xc98b,	// (0x00033dda) cell_hwr_fs_pane_g2

0x9681,	// (0x00030ad0) cell_hwr_fs_pane_g3_ParamLimits

0x9681,	// (0x00030ad0) cell_hwr_fs_pane_g3

0x968e,	// (0x00030add) cell_hwr_fs_pane_g4_ParamLimits

0x968e,	// (0x00030add) cell_hwr_fs_pane_g4

0x0003,

0xf83b,	// (0x00036c8a) cell_hwr_fs_pane_g_ParamLimits

0xf83b,	// (0x00036c8a) cell_hwr_fs_pane_g

0x7ca2,	// (0x0002f0f1) cell_hwr_fs_pane_t1

0xae60,	// (0x000322af) grid_highlight_pane_cp6

0xae60,	// (0x000322af) main_idle_act2_pane

0xbc14,	// (0x00033063) aid_inside_area_popup_secondary

0x977e,	// (0x00030bcd) aid_inside_area_window_primary_ParamLimits

0x977e,	// (0x00030bcd) aid_inside_area_window_primary

0xde88,	// (0x000352d7) ai2_news_ticker_pane

0xde90,	// (0x000352df) aid_size_cell_ai1_link_ParamLimits

0xde90,	// (0x000352df) aid_size_cell_ai1_link

0x9b52,	// (0x00030fa1) popup_ai2_data_window_ParamLimits

0x9b52,	// (0x00030fa1) popup_ai2_data_window

0xdeaa,	// (0x000352f9) popup_ai2_link_window_ParamLimits

0xdeaa,	// (0x000352f9) popup_ai2_link_window

0xcba1,	// (0x00033ff0) bg_popup_sub_pane_cp4_ParamLimits

0xcba1,	// (0x00033ff0) bg_popup_sub_pane_cp4

0xdebe,	// (0x0003530d) grid_ai2_link_pane_ParamLimits

0xdebe,	// (0x0003530d) grid_ai2_link_pane

0xdee1,	// (0x00035330) popup_ai2_link_window_g1_ParamLimits

0xdee1,	// (0x00035330) popup_ai2_link_window_g1

0xdeed,	// (0x0003533c) popup_ai2_link_window_g2_ParamLimits

0xdeed,	// (0x0003533c) popup_ai2_link_window_g2

0x0001,

0xfa07,	// (0x00036e56) popup_ai2_link_window_g_ParamLimits

0xfa07,	// (0x00036e56) popup_ai2_link_window_g

0xdefc,	// (0x0003534b) ai2_mp_button_pane

0xdf04,	// (0x00035353) ai2_mp_volume_pane

0xccc6,	// (0x00034115) bg_popup_sub_pane_cp5_ParamLimits

0xccc6,	// (0x00034115) bg_popup_sub_pane_cp5

0xdf0c,	// (0x0003535b) heading_ai2_gene_pane_ParamLimits

0xdf0c,	// (0x0003535b) heading_ai2_gene_pane

0xdf18,	// (0x00035367) list_ai2_gene_pane_ParamLimits

0xdf18,	// (0x00035367) list_ai2_gene_pane

0xdf60,	// (0x000353af) cell_ai2_link_pane_ParamLimits

0xdf60,	// (0x000353af) cell_ai2_link_pane

0xdf76,	// (0x000353c5) cell_ai2_link_pane_g1

0xae60,	// (0x000322af) grid_highlight_pane_cp7

0x24a8,	// (0x000298f7) ai2_mp_volume_pane_g1

0xe013,	// (0x00035462) ai2_mp_volume_pane_g2

0x9b7c,	// (0x00030fcb) list_ai2_gene_pane_t1

0xe01b,	// (0x0003546a) ai2_mp_volume_pane_g3

0x0002,

0xfa20,	// (0x00036e6f) ai2_mp_volume_pane_g

0x24b0,	// (0x000298ff) volume_small_pane_cp3

0xe023,	// (0x00035472) aid_size_cell_ai2_button

0xe02b,	// (0x0003547a) grid_ai2_button_pane

0xe034,	// (0x00035483) cell_ai2_button_pane_ParamLimits

0xe034,	// (0x00035483) cell_ai2_button_pane

0xae56,	// (0x000322a5) cell_ai2_button_pane_g1

0xae60,	// (0x000322af) grid_highlight_pane_cp8

0xdfd3,	// (0x00035422) ai2_gene_pane_t1_ParamLimits

0xdfd3,	// (0x00035422) ai2_gene_pane_t1

0x8a52,	// (0x0002fea1) aid_height_parent_landscape

0x98e5,	// (0x00030d34) aid_height_set_list

0xd7ed,	// (0x00034c3c) aid_size_parent

0xdcf3,	// (0x00035142) aid_size_cell_graphic_pane_ParamLimits

0xdf28,	// (0x00035377) popup_ai2_data_window_g1_ParamLimits

0xdf28,	// (0x00035377) popup_ai2_data_window_g1

0xdf34,	// (0x00035383) ai2_news_ticker_pane_g1

0xdf3c,	// (0x0003538b) ai2_news_ticker_pane_g2

0x0001,

0xfa0c,	// (0x00036e5b) ai2_news_ticker_pane_g

0xdf44,	// (0x00035393) ai2_news_ticker_pane_t1

0xdf52,	// (0x000353a1) ai2_news_ticker_pane_t2

0x0001,

0xfa11,	// (0x00036e60) ai2_news_ticker_pane_t

0xdf7f,	// (0x000353ce) heading_ai2_gene_pane_g1

0xdf87,	// (0x000353d6) heading_ai2_gene_pane_t1_ParamLimits

0xdf87,	// (0x000353d6) heading_ai2_gene_pane_t1

0xdf9c,	// (0x000353eb) list_highlight_pane_cp6

0x9b66,	// (0x00030fb5) ai2_gene_pane_ParamLimits

0x9b66,	// (0x00030fb5) ai2_gene_pane

0x9b8a,	// (0x00030fd9) list_ai2_gene_pane_t2

0x0001,

0xfa16,	// (0x00036e65) list_ai2_gene_pane_t

0xdfa4,	// (0x000353f3) list_highlight_pane_cp8_ParamLimits

0xdfa4,	// (0x000353f3) list_highlight_pane_cp8

0xdfb5,	// (0x00035404) ai2_gene_pane_g1_ParamLimits

0xdfb5,	// (0x00035404) ai2_gene_pane_g1

0xdfc7,	// (0x00035416) ai2_gene_pane_g2_ParamLimits

0xdfc7,	// (0x00035416) ai2_gene_pane_g2

0x0001,

0xfa1b,	// (0x00036e6a) ai2_gene_pane_g_ParamLimits

0xfa1b,	// (0x00036e6a) ai2_gene_pane_g

0xbaa4,	// (0x00032ef3) scroll_pane_cp12

0x7bfb,	// (0x0002f04a) control_pane_t3_ParamLimits

0x7bfb,	// (0x0002f04a) control_pane_t3

0xc6e9,	// (0x00033b38) status_small_pane_g8_ParamLimits

0xc6e9,	// (0x00033b38) status_small_pane_g8

0x8b71,	// (0x0002ffc0) popup_find_window_ParamLimits

0x8de0,	// (0x0003022f) popup_note_image_window_ParamLimits

0x48ef,	// (0x0002bd3e) list_double2_graphic_pane_vc_g1_ParamLimits

0x48ef,	// (0x0002bd3e) list_double2_graphic_pane_vc_g1

0x48fb,	// (0x0002bd4a) list_double2_graphic_pane_vc_g2_ParamLimits

0x48fb,	// (0x0002bd4a) list_double2_graphic_pane_vc_g2

0x4907,	// (0x0002bd56) list_double2_graphic_pane_vc_g3_ParamLimits

0x4907,	// (0x0002bd56) list_double2_graphic_pane_vc_g3

0x0002,

0xf7fe,	// (0x00036c4d) list_double2_graphic_pane_vc_g_ParamLimits

0xf7fe,	// (0x00036c4d) list_double2_graphic_pane_vc_g

0x4913,	// (0x0002bd62) list_double2_graphic_pane_vc_t1_ParamLimits

0x4913,	// (0x0002bd62) list_double2_graphic_pane_vc_t1

0x4929,	// (0x0002bd78) list_single_heading_pane_vc_g1_ParamLimits

0x4929,	// (0x0002bd78) list_single_heading_pane_vc_g1

0x4935,	// (0x0002bd84) list_single_heading_pane_vc_g2_ParamLimits

0x4935,	// (0x0002bd84) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x00036a5b) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x00036a5b) list_single_heading_pane_vc_g

0x4941,	// (0x0002bd90) list_single_heading_pane_vc_t1_ParamLimits

0x4941,	// (0x0002bd90) list_single_heading_pane_vc_t1

0x4957,	// (0x0002bda6) list_single_heading_pane_vc_t2_ParamLimits

0x4957,	// (0x0002bda6) list_single_heading_pane_vc_t2

0x0001,

0xf81f,	// (0x00036c6e) list_single_heading_pane_vc_t_ParamLimits

0xf81f,	// (0x00036c6e) list_single_heading_pane_vc_t

0xcaf9,	// (0x00033f48) list_setting_number_pane_vc_g1_ParamLimits

0xcaf9,	// (0x00033f48) list_setting_number_pane_vc_g1

0xcb05,	// (0x00033f54) list_setting_number_pane_vc_g2_ParamLimits

0xcb05,	// (0x00033f54) list_setting_number_pane_vc_g2

0x0001,

0xf824,	// (0x00036c73) list_setting_number_pane_vc_g_ParamLimits

0xf824,	// (0x00036c73) list_setting_number_pane_vc_g

0xcb11,	// (0x00033f60) list_setting_number_pane_vc_t1_ParamLimits

0xcb11,	// (0x00033f60) list_setting_number_pane_vc_t1

0xcb25,	// (0x00033f74) list_setting_number_pane_vc_t2_ParamLimits

0xcb25,	// (0x00033f74) list_setting_number_pane_vc_t2

0xcb41,	// (0x00033f90) list_setting_number_pane_vc_t3_ParamLimits

0xcb41,	// (0x00033f90) list_setting_number_pane_vc_t3

0x0002,

0xf829,	// (0x00036c78) list_setting_number_pane_vc_t_ParamLimits

0xf829,	// (0x00036c78) list_setting_number_pane_vc_t

0xcb67,	// (0x00033fb6) set_value_pane_vc_ParamLimits

0xcb67,	// (0x00033fb6) set_value_pane_vc

0xdc71,	// (0x000350c0) list_double2_graphic_pane_vc_ParamLimits

0xdc71,	// (0x000350c0) list_double2_graphic_pane_vc

0xdc71,	// (0x000350c0) list_double2_large_graphic_pane_vc_ParamLimits

0xdc71,	// (0x000350c0) list_double2_large_graphic_pane_vc

0xdc71,	// (0x000350c0) list_double2_pane_vc_ParamLimits

0xdc71,	// (0x000350c0) list_double2_pane_vc

0xdc71,	// (0x000350c0) list_double_graphic_heading_pane_vc_ParamLimits

0xdc71,	// (0x000350c0) list_double_graphic_heading_pane_vc

0xdc71,	// (0x000350c0) list_double_graphic_pane_vc_ParamLimits

0xdc71,	// (0x000350c0) list_double_graphic_pane_vc

0xdc71,	// (0x000350c0) list_double_heading_pane_vc_ParamLimits

0xdc71,	// (0x000350c0) list_double_heading_pane_vc

0xdc71,	// (0x000350c0) list_double_large_graphic_pane_vc_ParamLimits

0xdc71,	// (0x000350c0) list_double_large_graphic_pane_vc

0xdc71,	// (0x000350c0) list_double_number_pane_vc_ParamLimits

0xdc71,	// (0x000350c0) list_double_number_pane_vc

0xdc71,	// (0x000350c0) list_double_pane_vc_ParamLimits

0xdc71,	// (0x000350c0) list_double_pane_vc

0xdc71,	// (0x000350c0) list_double_time_pane_vc_ParamLimits

0xdc71,	// (0x000350c0) list_double_time_pane_vc

0xdc71,	// (0x000350c0) list_setting_number_pane_vc_ParamLimits

0xdc71,	// (0x000350c0) list_setting_number_pane_vc

0xdc71,	// (0x000350c0) list_setting_pane_vc_ParamLimits

0xdc71,	// (0x000350c0) list_setting_pane_vc

0xdc71,	// (0x000350c0) list_single_graphic_heading_pane_vc_ParamLimits

0xdc71,	// (0x000350c0) list_single_graphic_heading_pane_vc

0xdc71,	// (0x000350c0) list_single_heading_pane_vc_ParamLimits

0xdc71,	// (0x000350c0) list_single_heading_pane_vc

0xdc71,	// (0x000350c0) list_single_number_heading_pane_vc_ParamLimits

0xdc71,	// (0x000350c0) list_single_number_heading_pane_vc

0x4ad0,	// (0x0002bf1f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4ad0,	// (0x0002bf1f) list_double_graphic_heading_pane_vc_g1

0x4929,	// (0x0002bd78) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4929,	// (0x0002bd78) list_double_graphic_heading_pane_vc_g2

0x4935,	// (0x0002bd84) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4935,	// (0x0002bd84) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa27,	// (0x00036e76) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa27,	// (0x00036e76) list_double_graphic_heading_pane_vc_g

0x4adc,	// (0x0002bf2b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4adc,	// (0x0002bf2b) list_double_graphic_heading_pane_vc_t1

0x4941,	// (0x0002bd90) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4941,	// (0x0002bd90) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa2e,	// (0x00036e7d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa2e,	// (0x00036e7d) list_double_graphic_heading_pane_vc_t

0xcaf9,	// (0x00033f48) list_setting_pane_vc_g1_ParamLimits

0xcaf9,	// (0x00033f48) list_setting_pane_vc_g1

0xcb05,	// (0x00033f54) list_setting_pane_vc_g2_ParamLimits

0xcb05,	// (0x00033f54) list_setting_pane_vc_g2

0x0001,

0xf824,	// (0x00036c73) list_setting_pane_vc_g_ParamLimits

0xf824,	// (0x00036c73) list_setting_pane_vc_g

0xe24a,	// (0x00035699) list_setting_pane_vc_t1_ParamLimits

0xe24a,	// (0x00035699) list_setting_pane_vc_t1

0xe25e,	// (0x000356ad) list_setting_pane_vc_t2_ParamLimits

0xe25e,	// (0x000356ad) list_setting_pane_vc_t2

0x0001,

0xfa71,	// (0x00036ec0) list_setting_pane_vc_t_ParamLimits

0xfa71,	// (0x00036ec0) list_setting_pane_vc_t

0xcb67,	// (0x00033fb6) set_value_pane_cp_vc_ParamLimits

0xcb67,	// (0x00033fb6) set_value_pane_cp_vc

0x4929,	// (0x0002bd78) list_single_number_heading_pane_vc_g1_ParamLimits

0x4929,	// (0x0002bd78) list_single_number_heading_pane_vc_g1

0x4935,	// (0x0002bd84) list_single_number_heading_pane_vc_g2_ParamLimits

0x4935,	// (0x0002bd84) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x00036a5b) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x00036a5b) list_single_number_heading_pane_vc_g

0x4941,	// (0x0002bd90) list_single_number_heading_pane_vc_t1_ParamLimits

0x4941,	// (0x0002bd90) list_single_number_heading_pane_vc_t1

0x4af0,	// (0x0002bf3f) list_single_number_heading_pane_vc_t2_ParamLimits

0x4af0,	// (0x0002bf3f) list_single_number_heading_pane_vc_t2

0x4b04,	// (0x0002bf53) list_single_number_heading_pane_vc_t3_ParamLimits

0x4b04,	// (0x0002bf53) list_single_number_heading_pane_vc_t3

0x0002,

0xfa76,	// (0x00036ec5) list_single_number_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x00036ec5) list_single_number_heading_pane_vc_t

0x48ef,	// (0x0002bd3e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x48ef,	// (0x0002bd3e) list_single_graphic_heading_pane_vc_g1

0x4929,	// (0x0002bd78) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4929,	// (0x0002bd78) list_single_graphic_heading_pane_vc_g4

0x4935,	// (0x0002bd84) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4935,	// (0x0002bd84) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa7d,	// (0x00036ecc) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa7d,	// (0x00036ecc) list_single_graphic_heading_pane_vc_g

0x4941,	// (0x0002bd90) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4941,	// (0x0002bd90) list_single_graphic_heading_pane_vc_t1

0x4b16,	// (0x0002bf65) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x4b16,	// (0x0002bf65) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa84,	// (0x00036ed3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa84,	// (0x00036ed3) list_single_graphic_heading_pane_vc_t

0x4929,	// (0x0002bd78) list_double2_pane_vc_g1_ParamLimits

0x4929,	// (0x0002bd78) list_double2_pane_vc_g1

0x4935,	// (0x0002bd84) list_double2_pane_vc_g2_ParamLimits

0x4935,	// (0x0002bd84) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x00036a5b) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x00036a5b) list_double2_pane_vc_g

0x4b2a,	// (0x0002bf79) list_double2_pane_vc_t1_ParamLimits

0x4b2a,	// (0x0002bf79) list_double2_pane_vc_t1

0x4b40,	// (0x0002bf8f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x4b40,	// (0x0002bf8f) list_double2_large_graphic_pane_vc_g1

0x4929,	// (0x0002bd78) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4929,	// (0x0002bd78) list_double2_large_graphic_pane_vc_g2

0x4935,	// (0x0002bd84) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4935,	// (0x0002bd84) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf629,	// (0x00036a78) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf629,	// (0x00036a78) list_double2_large_graphic_pane_vc_g

0x4b4c,	// (0x0002bf9b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x4b4c,	// (0x0002bf9b) list_double2_large_graphic_pane_vc_t1

0x4b62,	// (0x0002bfb1) list_double_time_pane_vc_g1_ParamLimits

0x4b62,	// (0x0002bfb1) list_double_time_pane_vc_g1

0x4b6e,	// (0x0002bfbd) list_double_time_pane_vc_g2_ParamLimits

0x4b6e,	// (0x0002bfbd) list_double_time_pane_vc_g2

0x0001,

0xfa89,	// (0x00036ed8) list_double_time_pane_vc_g_ParamLimits

0xfa89,	// (0x00036ed8) list_double_time_pane_vc_g

0x4b7a,	// (0x0002bfc9) list_double_time_pane_vc_t1_ParamLimits

0x4b7a,	// (0x0002bfc9) list_double_time_pane_vc_t1

0x4b93,	// (0x0002bfe2) list_double_time_pane_vc_t2_ParamLimits

0x4b93,	// (0x0002bfe2) list_double_time_pane_vc_t2

0x4bce,	// (0x0002c01d) list_double_time_pane_vc_t3_ParamLimits

0x4bce,	// (0x0002c01d) list_double_time_pane_vc_t3

0x4be6,	// (0x0002c035) list_double_time_pane_vc_t4_ParamLimits

0x4be6,	// (0x0002c035) list_double_time_pane_vc_t4

0x0003,

0xfa8e,	// (0x00036edd) list_double_time_pane_vc_t_ParamLimits

0xfa8e,	// (0x00036edd) list_double_time_pane_vc_t

0x4929,	// (0x0002bd78) list_double_pane_vc_g1_ParamLimits

0x4929,	// (0x0002bd78) list_double_pane_vc_g1

0x4935,	// (0x0002bd84) list_double_pane_vc_g2_ParamLimits

0x4935,	// (0x0002bd84) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x00036a5b) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x00036a5b) list_double_pane_vc_g

0x4bfa,	// (0x0002c049) list_double_pane_vc_t1_ParamLimits

0x4bfa,	// (0x0002c049) list_double_pane_vc_t1

0x4c0c,	// (0x0002c05b) list_double_pane_vc_t2_ParamLimits

0x4c0c,	// (0x0002c05b) list_double_pane_vc_t2

0x0001,

0xfa97,	// (0x00036ee6) list_double_pane_vc_t_ParamLimits

0xfa97,	// (0x00036ee6) list_double_pane_vc_t

0x4929,	// (0x0002bd78) list_double_number_pane_vc_g1_ParamLimits

0x4929,	// (0x0002bd78) list_double_number_pane_vc_g1

0x4935,	// (0x0002bd84) list_double_number_pane_vc_g2_ParamLimits

0x4935,	// (0x0002bd84) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x00036a5b) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x00036a5b) list_double_number_pane_vc_g

0x4c24,	// (0x0002c073) list_double_number_pane_vc_t1_ParamLimits

0x4c24,	// (0x0002c073) list_double_number_pane_vc_t1

0x4c38,	// (0x0002c087) list_double_number_pane_vc_t2_ParamLimits

0x4c38,	// (0x0002c087) list_double_number_pane_vc_t2

0x4c0c,	// (0x0002c05b) list_double_number_pane_vc_t3_ParamLimits

0x4c0c,	// (0x0002c05b) list_double_number_pane_vc_t3

0x0002,

0xfa9c,	// (0x00036eeb) list_double_number_pane_vc_t_ParamLimits

0xfa9c,	// (0x00036eeb) list_double_number_pane_vc_t

0x4c4a,	// (0x0002c099) list_double_large_graphic_pane_vc_g1_ParamLimits

0x4c4a,	// (0x0002c099) list_double_large_graphic_pane_vc_g1

0x4c56,	// (0x0002c0a5) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4c56,	// (0x0002c0a5) list_double_large_graphic_pane_vc_g2

0x4935,	// (0x0002bd84) list_double_large_graphic_pane_vc_g3_ParamLimits

0x4935,	// (0x0002bd84) list_double_large_graphic_pane_vc_g3

0x4c65,	// (0x0002c0b4) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4c65,	// (0x0002c0b4) list_double_large_graphic_pane_vc_g4

0x0003,

0xfaa3,	// (0x00036ef2) list_double_large_graphic_pane_vc_g_ParamLimits

0xfaa3,	// (0x00036ef2) list_double_large_graphic_pane_vc_g

0x4c71,	// (0x0002c0c0) list_double_large_graphic_pane_vc_t1_ParamLimits

0x4c71,	// (0x0002c0c0) list_double_large_graphic_pane_vc_t1

0x4c83,	// (0x0002c0d2) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4c83,	// (0x0002c0d2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaac,	// (0x00036efb) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaac,	// (0x00036efb) list_double_large_graphic_pane_vc_t

0x4929,	// (0x0002bd78) list_double_heading_pane_vc_g1_ParamLimits

0x4929,	// (0x0002bd78) list_double_heading_pane_vc_g1

0x4935,	// (0x0002bd84) list_double_heading_pane_vc_g2_ParamLimits

0x4935,	// (0x0002bd84) list_double_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x00036a5b) list_double_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x00036a5b) list_double_heading_pane_vc_g

0x4c9c,	// (0x0002c0eb) list_double_heading_pane_vc_t1_ParamLimits

0x4c9c,	// (0x0002c0eb) list_double_heading_pane_vc_t1

0x4941,	// (0x0002bd90) list_double_heading_pane_vc_t2_ParamLimits

0x4941,	// (0x0002bd90) list_double_heading_pane_vc_t2

0x0001,

0xfab1,	// (0x00036f00) list_double_heading_pane_vc_t_ParamLimits

0xfab1,	// (0x00036f00) list_double_heading_pane_vc_t

0x4cb0,	// (0x0002c0ff) list_double_graphic_pane_vc_g1_ParamLimits

0x4cb0,	// (0x0002c0ff) list_double_graphic_pane_vc_g1

0x4cc0,	// (0x0002c10f) list_double_graphic_pane_vc_g2_ParamLimits

0x4cc0,	// (0x0002c10f) list_double_graphic_pane_vc_g2

0x4ccf,	// (0x0002c11e) list_double_graphic_pane_vc_g3_ParamLimits

0x4ccf,	// (0x0002c11e) list_double_graphic_pane_vc_g3

0x0002,

0xfab6,	// (0x00036f05) list_double_graphic_pane_vc_g_ParamLimits

0xfab6,	// (0x00036f05) list_double_graphic_pane_vc_g

0x4cdb,	// (0x0002c12a) list_double_graphic_pane_vc_t1_ParamLimits

0x4cdb,	// (0x0002c12a) list_double_graphic_pane_vc_t1

0x4c0c,	// (0x0002c05b) list_double_graphic_pane_vc_t2_ParamLimits

0x4c0c,	// (0x0002c05b) list_double_graphic_pane_vc_t2

0x0001,

0xfabd,	// (0x00036f0c) list_double_graphic_pane_vc_t_ParamLimits

0xfabd,	// (0x00036f0c) list_double_graphic_pane_vc_t

0x033f,	// (0x0002778e) aid_size_cell_fastswap

0x7383,	// (0x0002e7d2) aid_size_cell_touch_ParamLimits

0x7383,	// (0x0002e7d2) aid_size_cell_touch

0x05ac,	// (0x000279fb) popup_fast_swap_wide_window_ParamLimits

0x05ac,	// (0x000279fb) popup_fast_swap_wide_window

0x74ce,	// (0x0002e91d) touch_pane_ParamLimits

0x74ce,	// (0x0002e91d) touch_pane

0xbafa,	// (0x00032f49) button_value_adjust_pane_cp2

0x45e7,	// (0x0002ba36) button_value_adjust_pane_cp4

0x4607,	// (0x0002ba56) form_field_data_pane_cp2

0x7939,	// (0x0002ed88) form_field_data_wide_pane_cp2

0xbe59,	// (0x000332a8) bg_scroll_pane_ParamLimits

0x0d5c,	// (0x000281ab) scroll_handle_pane_ParamLimits

0x0d70,	// (0x000281bf) scroll_sc2_down_pane_ParamLimits

0x0d70,	// (0x000281bf) scroll_sc2_down_pane

0xbe8a,	// (0x000332d9) scroll_sc2_up_pane_ParamLimits

0xbe8a,	// (0x000332d9) scroll_sc2_up_pane

0x9cb5,	// (0x00031104) grid_wheel_folder_pane_g1_ParamLimits

0x9cb5,	// (0x00031104) grid_wheel_folder_pane_g1

0x0fd8,	// (0x00028427) clock_nsta_pane_cp2_ParamLimits

0x0fd8,	// (0x00028427) clock_nsta_pane_cp2

0x8967,	// (0x0002fdb6) listscroll_midp_pane_ParamLimits

0x8978,	// (0x0002fdc7) midp_canvas_pane

0xc73d,	// (0x00033b8c) nsta_clock_indic_pane

0xc775,	// (0x00033bc4) listscroll_form_pane_vc

0xc77d,	// (0x00033bcc) listscroll_set_pane_vc_ParamLimits

0xc77d,	// (0x00033bcc) listscroll_set_pane_vc

0x9383,	// (0x000307d2) clock_nsta_pane

0x93ad,	// (0x000307fc) indicator_nsta_pane

0xc9bf,	// (0x00033e0e) bg_popup_sub_pane_cp2_ParamLimits

0xc9d3,	// (0x00033e22) find_pane_cp2_ParamLimits

0xc9d3,	// (0x00033e22) find_pane_cp2

0xca19,	// (0x00033e68) grid_toobar_pane_ParamLimits

0xcb75,	// (0x00033fc4) list_form_gen_pane_vc_ParamLimits

0xcb75,	// (0x00033fc4) list_form_gen_pane_vc

0xcb8b,	// (0x00033fda) scroll_pane_cp8_vc_ParamLimits

0xcb8b,	// (0x00033fda) scroll_pane_cp8_vc

0xcbdb,	// (0x0003402a) data_form_wide_pane_vc_ParamLimits

0xcbdb,	// (0x0003402a) data_form_wide_pane_vc

0xcbe7,	// (0x00034036) form_field_data_wide_pane_vc_g1

0xcbef,	// (0x0003403e) form_field_data_wide_pane_vc_t1_ParamLimits

0xcbef,	// (0x0003403e) form_field_data_wide_pane_vc_t1

0xbb0e,	// (0x00032f5d) input_focus_pane_cp6_vc_ParamLimits

0xbb0e,	// (0x00032f5d) input_focus_pane_cp6_vc

0x9722,	// (0x00030b71) list_midp_pane_ParamLimits

0xd7ff,	// (0x00034c4e) scroll_pane_cp16_ParamLimits

0xd7ff,	// (0x00034c4e) scroll_pane_cp16

0xce56,	// (0x000342a5) button_value_adjust_pane_ParamLimits

0xce56,	// (0x000342a5) button_value_adjust_pane

0x98f6,	// (0x00030d45) button_value_adjust_pane_cp6_ParamLimits

0x98f6,	// (0x00030d45) button_value_adjust_pane_cp6

0x9a10,	// (0x00030e5f) settings_code_pane_cp_ParamLimits

0x9a10,	// (0x00030e5f) settings_code_pane_cp

0xae56,	// (0x000322a5) cell_touch_pane_g1

0xae56,	// (0x000322a5) cell_touch_pane_g2

0x0001,

0xf747,	// (0x00036b96) cell_touch_pane_g

0x9b98,	// (0x00030fe7) cell_touch_pane_cp_ParamLimits

0x9b98,	// (0x00030fe7) cell_touch_pane_cp

0x9bb4,	// (0x00031003) cell_touch_pane_ParamLimits

0x9bb4,	// (0x00031003) cell_touch_pane

0xae56,	// (0x000322a5) scroll_sc2_down_pane_g1

0xae56,	// (0x000322a5) scroll_sc2_up_pane_g1

0xae60,	// (0x000322af) bg_set_opt_pane_cp4_vc

0xe046,	// (0x00035495) list_set_graphic_pane_vc_g1_ParamLimits

0xe046,	// (0x00035495) list_set_graphic_pane_vc_g1

0xe052,	// (0x000354a1) list_set_graphic_pane_vc_g2_ParamLimits

0xe052,	// (0x000354a1) list_set_graphic_pane_vc_g2

0x0001,

0xfa33,	// (0x00036e82) list_set_graphic_pane_vc_g_ParamLimits

0xfa33,	// (0x00036e82) list_set_graphic_pane_vc_g

0xe05e,	// (0x000354ad) text_primary_small_cp13_vc_ParamLimits

0xe05e,	// (0x000354ad) text_primary_small_cp13_vc

0xe076,	// (0x000354c5) list_set_graphic_pane_vc_ParamLimits

0xe076,	// (0x000354c5) list_set_graphic_pane_vc

0xae60,	// (0x000322af) input_focus_pane_cp2_vc

0xae56,	// (0x000322a5) setting_code_pane_vc_g1

0xe08a,	// (0x000354d9) setting_code_pane_vc_t1

0xe098,	// (0x000354e7) set_text_pane_vc_t1_ParamLimits

0xe098,	// (0x000354e7) set_text_pane_vc_t1

0xae60,	// (0x000322af) input_focus_pane_cp1_vc

0xe0b3,	// (0x00035502) list_set_text_pane_vc

0xae56,	// (0x000322a5) setting_text_pane_vc_g1

0xae60,	// (0x000322af) bg_set_opt_pane_cp2_vc

0xe0bd,	// (0x0003550c) setting_slider_graphic_pane_vc_g1

0xe0c5,	// (0x00035514) setting_slider_graphic_pane_vc_t1

0xe0d3,	// (0x00035522) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa38,	// (0x00036e87) setting_slider_graphic_pane_vc_t

0xe0e1,	// (0x00035530) slider_set_pane_cp_vc

0xe0e9,	// (0x00035538) slider_set_pane_vc_g1

0xe0f2,	// (0x00035541) slider_set_pane_vc_g2

0x0006,

0xfa3d,	// (0x00036e8c) slider_set_pane_vc_g

0xbb75,	// (0x00032fc4) set_opt_bg_pane_g1_copy1

0xbb7d,	// (0x00032fcc) set_opt_bg_pane_g2_copy1

0xe11e,	// (0x0003556d) set_opt_bg_pane_g3_copy1

0xbb8d,	// (0x00032fdc) set_opt_bg_pane_g4_copy1

0xbb95,	// (0x00032fe4) set_opt_bg_pane_g5_copy1

0xbb9d,	// (0x00032fec) set_opt_bg_pane_g6_copy1

0xe128,	// (0x00035577) set_opt_bg_pane_g7_copy1

0xe130,	// (0x0003557f) set_opt_bg_pane_g8_copy1

0xe13a,	// (0x00035589) set_opt_bg_pane_g9_copy1

0xae60,	// (0x000322af) bg_set_opt_pane_cp_vc

0xe144,	// (0x00035593) setting_slider_pane_vc_t1

0xe0c5,	// (0x00035514) setting_slider_pane_vc_t2

0xe0d3,	// (0x00035522) setting_slider_pane_vc_t3

0x0002,

0xfa4c,	// (0x00036e9b) setting_slider_pane_vc_t

0xe0e1,	// (0x00035530) slider_set_pane_vc

0x1db7,	// (0x00029206) volume_set_pane_vc_g1

0x1dc0,	// (0x0002920f) volume_set_pane_vc_g2

0x1dc9,	// (0x00029218) volume_set_pane_vc_g3

0x1dd2,	// (0x00029221) volume_set_pane_vc_g4

0x1ddb,	// (0x0002922a) volume_set_pane_vc_g5

0x1de4,	// (0x00029233) volume_set_pane_vc_g6

0x1ded,	// (0x0002923c) volume_set_pane_vc_g7

0x1df6,	// (0x00029245) volume_set_pane_vc_g8

0x1dff,	// (0x0002924e) volume_set_pane_vc_g9

0x1e08,	// (0x00029257) volume_set_pane_vc_g10

0x0009,

0xfa53,	// (0x00036ea2) volume_set_pane_vc_g

0xe153,	// (0x000355a2) volume_set_pane_vc

0xe15b,	// (0x000355aa) button_value_adjust_pane_cp1_vc

0xe165,	// (0x000355b4) list_highlight_pane_cp2_vc

0xe16e,	// (0x000355bd) list_set_pane_vc_ParamLimits

0xe16e,	// (0x000355bd) list_set_pane_vc

0xe1d8,	// (0x00035627) main_pane_set_vc_t1_ParamLimits

0xe1d8,	// (0x00035627) main_pane_set_vc_t1

0xe1ed,	// (0x0003563c) main_pane_set_vc_t2_ParamLimits

0xe1ed,	// (0x0003563c) main_pane_set_vc_t2

0xe1ff,	// (0x0003564e) main_pane_set_vc_t3_ParamLimits

0xe1ff,	// (0x0003564e) main_pane_set_vc_t3

0xe213,	// (0x00035662) main_pane_set_vc_t4_ParamLimits

0xe213,	// (0x00035662) main_pane_set_vc_t4

0x0003,

0xfa68,	// (0x00036eb7) main_pane_set_vc_t_ParamLimits

0xfa68,	// (0x00036eb7) main_pane_set_vc_t

0xe227,	// (0x00035676) setting_code_pane_vc_ParamLimits

0xe227,	// (0x00035676) setting_code_pane_vc

0xe238,	// (0x00035687) setting_slider_graphic_pane_vc

0xe238,	// (0x00035687) setting_slider_pane_vc

0xe238,	// (0x00035687) setting_text_pane_vc

0xe238,	// (0x00035687) setting_volume_pane_vc

0xe242,	// (0x00035691) scroll_pane_cp121_vc

0xbae8,	// (0x00032f37) set_content_pane_vc

0xe280,	// (0x000356cf) button_value_adjust_pane_g1

0xe289,	// (0x000356d8) button_value_adjust_pane_g2

0x0001,

0xfac2,	// (0x00036f11) button_value_adjust_pane_g

0xe292,	// (0x000356e1) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe292,	// (0x000356e1) form_field_slider_wide_pane_vc_t1

0xe2a6,	// (0x000356f5) form_field_slider_wide_pane_vc_t2_ParamLimits

0xe2a6,	// (0x000356f5) form_field_slider_wide_pane_vc_t2

0x0001,

0xfac7,	// (0x00036f16) form_field_slider_wide_pane_vc_t_ParamLimits

0xfac7,	// (0x00036f16) form_field_slider_wide_pane_vc_t

0xaeae,	// (0x000322fd) input_focus_pane_cp10_vc_ParamLimits

0xaeae,	// (0x000322fd) input_focus_pane_cp10_vc

0xe2b8,	// (0x00035707) slider_cont_pane_cp1_vc_ParamLimits

0xe2b8,	// (0x00035707) slider_cont_pane_cp1_vc

0xe0e9,	// (0x00035538) slider_form_pane_g1_cp2

0xe0f2,	// (0x00035541) slider_form_pane_g2_cp2

0xe2d1,	// (0x00035720) form_field_slider_pane_vc_t3

0xe2df,	// (0x0003572e) form_field_slider_pane_vc_t4

0xe2ed,	// (0x0003573c) slider_form_pane_vc_ParamLimits

0xe2ed,	// (0x0003573c) slider_form_pane_vc

0xe2fa,	// (0x00035749) form_field_slider_pane_vc_t1_ParamLimits

0xe2fa,	// (0x00035749) form_field_slider_pane_vc_t1

0xe2a6,	// (0x000356f5) form_field_slider_pane_vc_t2_ParamLimits

0xe2a6,	// (0x000356f5) form_field_slider_pane_vc_t2

0x0001,

0xfad7,	// (0x00036f26) form_field_slider_pane_vc_t_ParamLimits

0xfad7,	// (0x00036f26) form_field_slider_pane_vc_t

0xaeae,	// (0x000322fd) input_focus_pane_cp9_vc_ParamLimits

0xaeae,	// (0x000322fd) input_focus_pane_cp9_vc

0xe316,	// (0x00035765) slider_cont_pane_vc_ParamLimits

0xe316,	// (0x00035765) slider_cont_pane_vc

0xe328,	// (0x00035777) list_form_graphic_pane_cp_vc_ParamLimits

0xe328,	// (0x00035777) list_form_graphic_pane_cp_vc

0xcbe7,	// (0x00034036) form_field_popup_wide_pane_vc_g1

0xe33d,	// (0x0003578c) form_field_popup_wide_pane_vc_t1_ParamLimits

0xe33d,	// (0x0003578c) form_field_popup_wide_pane_vc_t1

0xbb0e,	// (0x00032f5d) input_focus_pane_cp8_vc_ParamLimits

0xbb0e,	// (0x00032f5d) input_focus_pane_cp8_vc

0xe354,	// (0x000357a3) list_form_wide_pane_vc_ParamLimits

0xe354,	// (0x000357a3) list_form_wide_pane_vc

0xe360,	// (0x000357af) list_form_graphic_pane_vc_g1

0xe368,	// (0x000357b7) list_form_graphic_pane_vc_t1_ParamLimits

0xe368,	// (0x000357b7) list_form_graphic_pane_vc_t1

0xaebc,	// (0x0003230b) list_highlight_pane_cp5_vc_ParamLimits

0xaebc,	// (0x0003230b) list_highlight_pane_cp5_vc

0xe384,	// (0x000357d3) list_form_graphic_pane_vc_ParamLimits

0xe384,	// (0x000357d3) list_form_graphic_pane_vc

0xcbe7,	// (0x00034036) form_field_popup_pane_vc_g1

0xe39a,	// (0x000357e9) form_field_popup_pane_vc_t1_ParamLimits

0xe39a,	// (0x000357e9) form_field_popup_pane_vc_t1

0xbb0e,	// (0x00032f5d) input_focus_pane_cp7_vc_ParamLimits

0xbb0e,	// (0x00032f5d) input_focus_pane_cp7_vc

0xe3b1,	// (0x00035800) list_form_pane_vc_ParamLimits

0xe3b1,	// (0x00035800) list_form_pane_vc

0xe3bd,	// (0x0003580c) data_form_pane_vc_t1_ParamLimits

0xe3bd,	// (0x0003580c) data_form_pane_vc_t1

0xbb75,	// (0x00032fc4) input_focus_pane_vc_g1

0xbb7d,	// (0x00032fcc) input_focus_pane_vc_g2

0xbb85,	// (0x00032fd4) input_focus_pane_vc_g3

0xbb8d,	// (0x00032fdc) input_focus_pane_vc_g4

0xbb95,	// (0x00032fe4) input_focus_pane_vc_g5

0xbb9d,	// (0x00032fec) input_focus_pane_vc_g6

0xbba5,	// (0x00032ff4) input_focus_pane_vc_g7

0xbbad,	// (0x00032ffc) input_focus_pane_vc_g8

0xbbb5,	// (0x00033004) input_focus_pane_vc_g9

0xae56,	// (0x000322a5) input_focus_pane_vc_g10

0x0009,

0xf6d0,	// (0x00036b1f) input_focus_pane_vc_g

0xcbdb,	// (0x0003402a) data_form_pane_vc_ParamLimits

0xcbdb,	// (0x0003402a) data_form_pane_vc

0xcbe7,	// (0x00034036) form_field_data_pane_vc_g1

0xe3d8,	// (0x00035827) form_field_data_pane_vc_t1_ParamLimits

0xe3d8,	// (0x00035827) form_field_data_pane_vc_t1

0xbb0e,	// (0x00032f5d) input_focus_pane_vc_ParamLimits

0xbb0e,	// (0x00032f5d) input_focus_pane_vc

0xe3f2,	// (0x00035841) button_value_adjust_pane_cp3_vc

0xe3fa,	// (0x00035849) button_value_adjust_pane_cp5_vc

0xe402,	// (0x00035851) form_field_data_pane_vc_ParamLimits

0xe402,	// (0x00035851) form_field_data_pane_vc

0xe419,	// (0x00035868) form_field_data_pane_vc_cp2

0xe421,	// (0x00035870) form_field_data_wide_pane_vc_ParamLimits

0xe421,	// (0x00035870) form_field_data_wide_pane_vc

0xe437,	// (0x00035886) form_field_data_wide_pane_vc_cp2

0xe43f,	// (0x0003588e) form_field_popup_pane_vc_ParamLimits

0xe43f,	// (0x0003588e) form_field_popup_pane_vc

0xe456,	// (0x000358a5) form_field_popup_wide_pane_vc_ParamLimits

0xe456,	// (0x000358a5) form_field_popup_wide_pane_vc

0xe46c,	// (0x000358bb) form_field_slider_pane_vc_ParamLimits

0xe46c,	// (0x000358bb) form_field_slider_pane_vc

0xe47f,	// (0x000358ce) form_field_slider_wide_pane_vc_ParamLimits

0xe47f,	// (0x000358ce) form_field_slider_wide_pane_vc

0x9bd2,	// (0x00031021) grid_touch_1_pane_ParamLimits

0x9bd2,	// (0x00031021) grid_touch_1_pane

0x9be6,	// (0x00031035) grid_touch_2_pane_ParamLimits

0x9be6,	// (0x00031035) grid_touch_2_pane

0xe492,	// (0x000358e1) touch_pane_g1_ParamLimits

0xe492,	// (0x000358e1) touch_pane_g1

0xe4a0,	// (0x000358ef) cell_app_pane_cp_wide_ParamLimits

0xe4a0,	// (0x000358ef) cell_app_pane_cp_wide

0xe4b1,	// (0x00035900) grid_popup_fast_wide_pane_ParamLimits

0xe4b1,	// (0x00035900) grid_popup_fast_wide_pane

0xe4c5,	// (0x00035914) scroll_pane_cp19_ParamLimits

0xe4c5,	// (0x00035914) scroll_pane_cp19

0xae60,	// (0x000322af) bg_popup_window_pane_cp20

0xe4d9,	// (0x00035928) listscroll_popup_fast_wide_pane

0xc9e9,	// (0x00033e38) grid_indicator_nsta_pane

0xe4e1,	// (0x00035930) clock_nsta_pane_g1

0xe4ea,	// (0x00035939) clock_nsta_pane_t1

0x9c10,	// (0x0003105f) cell_indicator_nsta_pane_ParamLimits

0x9c10,	// (0x0003105f) cell_indicator_nsta_pane

0xe492,	// (0x000358e1) cell_indicator_nsta_pane_g1

0x9c29,	// (0x00031078) cell_indicator_nsta_pane_g2

0x0001,

0xfae1,	// (0x00036f30) cell_indicator_nsta_pane_g

0xe506,	// (0x00035955) clock_nsta_pane_cp

0xe50e,	// (0x0003595d) indicator_nsta_pane_cp

0xe516,	// (0x00035965) nsta_clock_indic_pane_g1

0xb549,	// (0x00032998) grid_indicator_pane

0xbf7f,	// (0x000333ce) scroll_pane_cp29

0x0f27,	// (0x00028376) indicator_nsta_pane_cp2_ParamLimits

0x0f27,	// (0x00028376) indicator_nsta_pane_cp2

0xaebc,	// (0x0003230b) main_apps_wheel_pane

0xcd03,	// (0x00034152) form_midp_field_text_pane_ParamLimits

0xce36,	// (0x00034285) scroll_bar_cp050_ParamLimits

0xe54e,	// (0x0003599d) cell_indicator_pane_ParamLimits

0xe54e,	// (0x0003599d) cell_indicator_pane

0xe565,	// (0x000359b4) cell_indicator_pane_g1

0x9c3f,	// (0x0003108e) grid_wheel_folder_pane_ParamLimits

0x9c3f,	// (0x0003108e) grid_wheel_folder_pane

0x9c4d,	// (0x0003109c) list_wheel_apps_pane_ParamLimits

0x9c4d,	// (0x0003109c) list_wheel_apps_pane

0x9c5b,	// (0x000310aa) main_apps_wheel_pane_g1_ParamLimits

0x9c5b,	// (0x000310aa) main_apps_wheel_pane_g1

0x9c67,	// (0x000310b6) main_apps_wheel_pane_g2_ParamLimits

0x9c67,	// (0x000310b6) main_apps_wheel_pane_g2

0x0001,

0xfaf0,	// (0x00036f3f) main_apps_wheel_pane_g_ParamLimits

0xfaf0,	// (0x00036f3f) main_apps_wheel_pane_g

0x9c75,	// (0x000310c4) main_apps_wheel_pane_t1_ParamLimits

0x9c75,	// (0x000310c4) main_apps_wheel_pane_t1

0x9c89,	// (0x000310d8) list_wheel_apps_pane_g1

0x9c91,	// (0x000310e0) list_wheel_apps_pane_g2

0x9c99,	// (0x000310e8) list_wheel_apps_pane_g3

0x9ca1,	// (0x000310f0) list_wheel_apps_pane_g4

0x9cab,	// (0x000310fa) list_wheel_apps_pane_g5

0x0004,

0xfaf5,	// (0x00036f44) list_wheel_apps_pane_g

0xc3b3,	// (0x00033802) navi_icon_text_pane

0x927e,	// (0x000306cd) aid_fill_nsta

0x9cc2,	// (0x00031111) navi_icon_text_pane_g1

0x9cce,	// (0x0003111d) navi_icon_text_pane_t1

0x894f,	// (0x0002fd9e) list_set_graphic_pane_t1_ParamLimits

0x894f,	// (0x0002fd9e) list_set_graphic_pane_t1

0xd51a,	// (0x00034969) popup_midp_note_alarm_window_t6_ParamLimits

0xd51a,	// (0x00034969) popup_midp_note_alarm_window_t6

0xd52c,	// (0x0003497b) popup_midp_note_alarm_window_t7_ParamLimits

0xd52c,	// (0x0003497b) popup_midp_note_alarm_window_t7

0xd53e,	// (0x0003498d) popup_midp_note_alarm_window_t8_ParamLimits

0xd53e,	// (0x0003498d) popup_midp_note_alarm_window_t8

0xd550,	// (0x0003499f) popup_midp_note_alarm_window_t9_ParamLimits

0xd550,	// (0x0003499f) popup_midp_note_alarm_window_t9

0xd562,	// (0x000349b1) popup_midp_note_alarm_window_t10_ParamLimits

0xd562,	// (0x000349b1) popup_midp_note_alarm_window_t10

0xd574,	// (0x000349c3) popup_midp_note_alarm_window_t11_ParamLimits

0xd574,	// (0x000349c3) popup_midp_note_alarm_window_t11

0xd586,	// (0x000349d5) scroll_pane_cp17_ParamLimits

0xd586,	// (0x000349d5) scroll_pane_cp17

0x1db7,	// (0x00029206) volume_small_pane_cp_g1

0x262a,	// (0x00029a79) volume_small_pane_cp_g2

0x2633,	// (0x00029a82) volume_small_pane_cp_g3

0x263c,	// (0x00029a8b) volume_small_pane_cp_g4

0x2645,	// (0x00029a94) volume_small_pane_cp_g5

0x264e,	// (0x00029a9d) volume_small_pane_cp_g6

0x2657,	// (0x00029aa6) volume_small_pane_cp_g7

0x2660,	// (0x00029aaf) volume_small_pane_cp_g8

0x2669,	// (0x00029ab8) volume_small_pane_cp_g9

0x2672,	// (0x00029ac1) volume_small_pane_cp_g10

0xc55d,	// (0x000339ac) midp_ticker_pane_g1_ParamLimits

0xc569,	// (0x000339b8) midp_ticker_pane_g2_ParamLimits

0xf798,	// (0x00036be7) midp_ticker_pane_g_ParamLimits

0x8a0f,	// (0x0002fe5e) midp_ticker_pane_t1_ParamLimits

0x929e,	// (0x000306ed) aid_fill_nsta_2

0xce22,	// (0x00034271) list_form2_midp_pane

0xdc4f,	// (0x0003509e) midp_editing_number_pane_ParamLimits

0xdc5e,	// (0x000350ad) midp_ticker_pane_ParamLimits

0xe56f,	// (0x000359be) form2_midp_field_pane

0xe577,	// (0x000359c6) scroll_pane_cp51

0xe597,	// (0x000359e6) form2_midp_button_pane_ParamLimits

0xe597,	// (0x000359e6) form2_midp_button_pane

0xe5a9,	// (0x000359f8) form2_midp_content_pane_ParamLimits

0xe5a9,	// (0x000359f8) form2_midp_content_pane

0xe5d1,	// (0x00035a20) form2_midp_field_choice_group_pane

0xe5d9,	// (0x00035a28) form2_midp_field_pane_g1

0xe5e1,	// (0x00035a30) form2_midp_field_pane_g2

0xe5e9,	// (0x00035a38) form2_midp_field_pane_g3

0xe5f1,	// (0x00035a40) form2_midp_field_pane_g4

0x0003,

0xfb1a,	// (0x00036f69) form2_midp_field_pane_g

0xe5f9,	// (0x00035a48) form2_midp_gauge_slider_pane

0xe601,	// (0x00035a50) form2_midp_gauge_wait_pane

0xe609,	// (0x00035a58) form2_midp_image_pane_ParamLimits

0xe609,	// (0x00035a58) form2_midp_image_pane

0xe624,	// (0x00035a73) form2_midp_label_pane_ParamLimits

0xe624,	// (0x00035a73) form2_midp_label_pane

0x9cfc,	// (0x0003114b) form2_midp_label_pane_cp_ParamLimits

0x9cfc,	// (0x0003114b) form2_midp_label_pane_cp

0xe63d,	// (0x00035a8c) form2_midp_string_pane_ParamLimits

0xe63d,	// (0x00035a8c) form2_midp_string_pane

0x4ced,	// (0x0002c13c) form2_midp_text_pane_ParamLimits

0x4ced,	// (0x0002c13c) form2_midp_text_pane

0xe64f,	// (0x00035a9e) form2_midp_time_pane

0xe65f,	// (0x00035aae) input_focus_pane_cp51_ParamLimits

0xe65f,	// (0x00035aae) input_focus_pane_cp51

0xe677,	// (0x00035ac6) form2_midp_label_pane_t1_ParamLimits

0xe677,	// (0x00035ac6) form2_midp_label_pane_t1

0x4d08,	// (0x0002c157) form2_mdip_text_pane_t1_ParamLimits

0x4d08,	// (0x0002c157) form2_mdip_text_pane_t1

0x4d26,	// (0x0002c175) form2_midp_time_pane_t1

0xe6c0,	// (0x00035b0f) form2_midp_gauge_slider_pane_t1

0x9d1d,	// (0x0003116c) form2_midp_gauge_slider_pane_t2

0x9d2f,	// (0x0003117e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb23,	// (0x00036f72) form2_midp_gauge_slider_pane_t

0xe6d2,	// (0x00035b21) form2_midp_slider_pane

0xe6de,	// (0x00035b2d) form2_midp_gauge_wait_pane_t1

0xe6ec,	// (0x00035b3b) form2_midp_wait_pane_ParamLimits

0xe6ec,	// (0x00035b3b) form2_midp_wait_pane

0x9d41,	// (0x00031190) list_single_2graphic_pane_cp4_ParamLimits

0x9d41,	// (0x00031190) list_single_2graphic_pane_cp4

0x96af,	// (0x00030afe) list_single_midp_graphic_pane_cp_ParamLimits

0x96af,	// (0x00030afe) list_single_midp_graphic_pane_cp

0xae60,	// (0x000322af) list_highlight_pane_cp20

0xe717,	// (0x00035b66) list_single_2graphic_pane_g1_cp4

0xe71f,	// (0x00035b6e) list_single_2graphic_pane_g2_cp4

0xe727,	// (0x00035b76) list_single_2graphic_pane_t1_cp4

0xaebc,	// (0x0003230b) list_highlight_pane_cp21

0xe736,	// (0x00035b85) list_single_midp_graphic_pane_g4_cp

0xe745,	// (0x00035b94) list_single_midp_graphic_pane_t1_cp

0x9d56,	// (0x000311a5) form2_mdip_string_pane_t1_ParamLimits

0x9d56,	// (0x000311a5) form2_mdip_string_pane_t1

0xae60,	// (0x000322af) bg_wml_button_pane_cp2

0xae56,	// (0x000322a5) form2_midp_image_pane_g1

0x43ba,	// (0x0002b809) list_double_large_graphic_pane_g5_ParamLimits

0x43ba,	// (0x0002b809) list_double_large_graphic_pane_g5

0x8967,	// (0x0002fdb6) midp_form_pane_ParamLimits

0xaebc,	// (0x0003230b) main_apps_wheel_pane_ParamLimits

0x8e5e,	// (0x000302ad) popup_preview_window_ParamLimits

0x8e5e,	// (0x000302ad) popup_preview_window

0xc85c,	// (0x00033cab) popup_touch_info_window_ParamLimits

0xc85c,	// (0x00033cab) popup_touch_info_window

0xc87a,	// (0x00033cc9) popup_touch_menu_window_ParamLimits

0xc87a,	// (0x00033cc9) popup_touch_menu_window

0xae4c,	// (0x0003229b) bg_popup_sub_pane_cp6

0xe75a,	// (0x00035ba9) list_touch_menu_pane

0xe762,	// (0x00035bb1) list_single_touch_menu_pane_ParamLimits

0xe762,	// (0x00035bb1) list_single_touch_menu_pane

0xe779,	// (0x00035bc8) list_single_touch_menu_pane_t1

0xaebc,	// (0x0003230b) bg_popup_sub_pane_cp7_ParamLimits

0xaebc,	// (0x0003230b) bg_popup_sub_pane_cp7

0xe787,	// (0x00035bd6) heading_sub_pane

0xe78f,	// (0x00035bde) list_touch_info_pane_ParamLimits

0xe78f,	// (0x00035bde) list_touch_info_pane

0xe79e,	// (0x00035bed) list_single_touch_info_pane_ParamLimits

0xe79e,	// (0x00035bed) list_single_touch_info_pane

0xe7b0,	// (0x00035bff) list_single_touch_info_pane_t1

0xe7be,	// (0x00035c0d) list_single_touch_info_pane_t2

0x0001,

0xfb31,	// (0x00036f80) list_single_touch_info_pane_t

0xc533,	// (0x00033982) bg_popup_heading_pane_cp

0xe7cc,	// (0x00035c1b) heading_sub_pane_t1

0xcba1,	// (0x00033ff0) bg_popup_preview_window_pane_cp_ParamLimits

0xcba1,	// (0x00033ff0) bg_popup_preview_window_pane_cp

0xe787,	// (0x00035bd6) heading_preview_pane

0xe78f,	// (0x00035bde) list_preview_pane_ParamLimits

0xe78f,	// (0x00035bde) list_preview_pane

0xe7da,	// (0x00035c29) popup_preview_window_g1

0xe79e,	// (0x00035bed) list_single_preview_pane_ParamLimits

0xe79e,	// (0x00035bed) list_single_preview_pane

0xe7e2,	// (0x00035c31) list_single_preview_pane_g1

0xe7ea,	// (0x00035c39) list_single_preview_pane_t1

0xe7b0,	// (0x00035bff) list_single_preview_pane_t2

0x0001,

0xfb36,	// (0x00036f85) list_single_preview_pane_t

0xe7f8,	// (0x00035c47) bg_popup_heading_pane_cp2_ParamLimits

0xe7f8,	// (0x00035c47) bg_popup_heading_pane_cp2

0xe80e,	// (0x00035c5d) heading_preview_pane_g1

0xe816,	// (0x00035c65) heading_preview_pane_t1_ParamLimits

0xe816,	// (0x00035c65) heading_preview_pane_t1

0xb560,	// (0x000329af) soft_indicator_pane_t1_ParamLimits

0xba81,	// (0x00032ed0) scroll_pane_ParamLimits

0xbe78,	// (0x000332c7) scroll_sc2_left_pane

0xbe81,	// (0x000332d0) scroll_sc2_right_pane

0xbea0,	// (0x000332ef) scroll_bg_pane_g1_ParamLimits

0xbeb5,	// (0x00033304) scroll_bg_pane_g2_ParamLimits

0xbecd,	// (0x0003331c) scroll_bg_pane_g3_ParamLimits

0xf727,	// (0x00036b76) scroll_bg_pane_g_ParamLimits

0xbea0,	// (0x000332ef) scroll_handle_pane_g1_ParamLimits

0xbeef,	// (0x0003333e) scroll_handle_pane_g2_ParamLimits

0xbecd,	// (0x0003331c) scroll_handle_pane_g3_ParamLimits

0xf72e,	// (0x00036b7d) scroll_handle_pane_g_ParamLimits

0xc79d,	// (0x00033bec) popup_choice_list_window_ParamLimits

0xc79d,	// (0x00033bec) popup_choice_list_window

0xc9cb,	// (0x00033e1a) choice_list_pane

0xca7d,	// (0x00033ecc) cell_toolbar_pane_t1

0xcaa5,	// (0x00033ef4) toolbar_button_pane_ParamLimits

0xd9b2,	// (0x00034e01) ai_gene_pane_1_t2_ParamLimits

0xd9b2,	// (0x00034e01) ai_gene_pane_1_t2

0x0001,

0xf946,	// (0x00036d95) ai_gene_pane_1_t_ParamLimits

0xf946,	// (0x00036d95) ai_gene_pane_1_t

0xe833,	// (0x00035c82) scroll_sc2_left_pane_g1

0xe833,	// (0x00035c82) scroll_sc2_right_pane_g1

0xbc66,	// (0x000330b5) bg_popup_sub_pane_cp10

0xe83d,	// (0x00035c8c) list_choice_list_pane

0xe854,	// (0x00035ca3) list_single_choice_list_pane_ParamLimits

0xe854,	// (0x00035ca3) list_single_choice_list_pane

0xe868,	// (0x00035cb7) list_single_choice_list_pane_g1

0xe870,	// (0x00035cbf) list_single_choice_list_pane_t1_ParamLimits

0xe870,	// (0x00035cbf) list_single_choice_list_pane_t1

0xe885,	// (0x00035cd4) choice_list_pane_g1

0xe88d,	// (0x00035cdc) choice_list_pane_t1

0xae4c,	// (0x0003229b) input_focus_pane_cp11

0xbddb,	// (0x0003322a) title_pane_stacon_g2_ParamLimits

0xbddb,	// (0x0003322a) title_pane_stacon_g2

0x0002,

0xf70d,	// (0x00036b5c) title_pane_stacon_g_ParamLimits

0xf70d,	// (0x00036b5c) title_pane_stacon_g

0xc533,	// (0x00033982) cursor_press_pane

0x8b29,	// (0x0002ff78) popup_fep_hwr_window_ParamLimits

0x8b29,	// (0x0002ff78) popup_fep_hwr_window

0xc7f3,	// (0x00033c42) popup_fep_vkb_window_ParamLimits

0xc7f3,	// (0x00033c42) popup_fep_vkb_window

0xe89b,	// (0x00035cea) cursor_press_pane_g1

0x0002,

0xfb5f,	// (0x00036fae) fep_vkb_side_pane_g_ParamLimits

0x283d,	// (0x00029c8c) fep_hwr_candidate_pane_ParamLimits

0x283d,	// (0x00029c8c) fep_hwr_candidate_pane

0x2867,	// (0x00029cb6) fep_hwr_side_pane_ParamLimits

0x2867,	// (0x00029cb6) fep_hwr_side_pane

0x2887,	// (0x00029cd6) fep_hwr_top_pane_ParamLimits

0x2887,	// (0x00029cd6) fep_hwr_top_pane

0x289f,	// (0x00029cee) fep_hwr_write_pane_ParamLimits

0x289f,	// (0x00029cee) fep_hwr_write_pane

0xfb5f,	// (0x00036fae) fep_vkb_side_pane_g

0xe8a3,	// (0x00035cf2) fep_hwr_top_pane_g1

0xe8b5,	// (0x00035d04) fep_hwr_top_pane_g2

0x28d9,	// (0x00029d28) fep_hwr_top_pane_g3

0x0002,

0xfb3b,	// (0x00036f8a) fep_hwr_top_pane_g

0x28ee,	// (0x00029d3d) fep_hwr_top_text_pane

0xc046,	// (0x00033495) fep_hwr_top_text_pane_g1

0xe8eb,	// (0x00035d3a) fep_hwr_top_text_pane_t1

0x29e4,	// (0x00029e33) fep_hwr_candidate_pane_g1

0xea18,	// (0x00035e67) fep_vkb_keypad_pane_g3_ParamLimits

0xea18,	// (0x00035e67) fep_vkb_keypad_pane_g3

0xea40,	// (0x00035e8f) fep_vkb_keypad_pane_g4_ParamLimits

0xea40,	// (0x00035e8f) fep_vkb_keypad_pane_g4

0xeaaf,	// (0x00035efe) fep_vkb_bottom_pane_g2_ParamLimits

0xeaaf,	// (0x00035efe) fep_vkb_bottom_pane_g2

0x0001,

0xfb66,	// (0x00036fb5) fep_vkb_bottom_pane_g_ParamLimits

0xfb66,	// (0x00036fb5) fep_vkb_bottom_pane_g

0xe833,	// (0x00035c82) cell_vkb_side_pane_g2

0x0001,

0xfb70,	// (0x00036fbf) cell_vkb_side_pane_g

0xeaf3,	// (0x00035f42) cell_vkb_side_pane_t1

0xeb01,	// (0x00035f50) cell_vkb_side_pane_t1_copy1

0xe833,	// (0x00035c82) bg_fep_vkb_candidate_pane_g2

0xebd7,	// (0x00036026) cell_vkb_candidate_pane_ParamLimits

0xe8f9,	// (0x00035d48) aid_size_cell_vkb_ParamLimits

0xe8f9,	// (0x00035d48) aid_size_cell_vkb

0xebd7,	// (0x00036026) cell_vkb_candidate_pane

0x2bce,	// (0x0002a01d) bg_popup_fep_shadow_pane_g1

0x9de4,	// (0x00031233) fep_vkb_bottom_pane_ParamLimits

0x9de4,	// (0x00031233) fep_vkb_bottom_pane

0xe986,	// (0x00035dd5) fep_vkb_candidate_pane_ParamLimits

0xe986,	// (0x00035dd5) fep_vkb_candidate_pane

0x9e09,	// (0x00031258) fep_vkb_keypad_pane_ParamLimits

0x9e09,	// (0x00031258) fep_vkb_keypad_pane

0x9e45,	// (0x00031294) fep_vkb_side_pane_ParamLimits

0x9e45,	// (0x00031294) fep_vkb_side_pane

0x9e81,	// (0x000312d0) fep_vkb_top_pane_ParamLimits

0x9e81,	// (0x000312d0) fep_vkb_top_pane

0xe9ac,	// (0x00035dfb) fep_vkb_top_pane_g1_ParamLimits

0xe9ac,	// (0x00035dfb) fep_vkb_top_pane_g1

0xe9bb,	// (0x00035e0a) fep_vkb_top_pane_g2_ParamLimits

0xe9bb,	// (0x00035e0a) fep_vkb_top_pane_g2

0xe9ca,	// (0x00035e19) fep_vkb_top_pane_g3_ParamLimits

0xe9ca,	// (0x00035e19) fep_vkb_top_pane_g3

0x0003,

0xfb56,	// (0x00036fa5) fep_vkb_top_pane_g_ParamLimits

0xfb56,	// (0x00036fa5) fep_vkb_top_pane_g

0xe9e8,	// (0x00035e37) fep_vkb_top_text_pane_ParamLimits

0xe9e8,	// (0x00035e37) fep_vkb_top_text_pane

0x9ebd,	// (0x0003130c) fep_vkb_side_pane_g1_ParamLimits

0x9ebd,	// (0x0003130c) fep_vkb_side_pane_g1

0xea07,	// (0x00035e56) grid_vkb_side_pane_ParamLimits

0xea07,	// (0x00035e56) grid_vkb_side_pane

0x2bd6,	// (0x0002a025) bg_popup_fep_shadow_pane_g2

0x2bdf,	// (0x0002a02e) bg_popup_fep_shadow_pane_g3

0x2be7,	// (0x0002a036) bg_popup_fep_shadow_pane_g4

0x2bf0,	// (0x0002a03f) bg_popup_fep_shadow_pane_g5

0x2bfa,	// (0x0002a049) bg_popup_fep_shadow_pane_g6

0x2c02,	// (0x0002a051) bg_popup_fep_shadow_pane_g7

0xbb8d,	// (0x00032fdc) bg_popup_fep_shadow_pane_g8

0xea5e,	// (0x00035ead) grid_vkb_keypad_number_pane_ParamLimits

0xea5e,	// (0x00035ead) grid_vkb_keypad_number_pane

0xea6e,	// (0x00035ebd) grid_vkb_keypad_pane_ParamLimits

0xea6e,	// (0x00035ebd) grid_vkb_keypad_pane

0xea94,	// (0x00035ee3) fep_vkb_bottom_pane_g1_ParamLimits

0xea94,	// (0x00035ee3) fep_vkb_bottom_pane_g1

0xeabd,	// (0x00035f0c) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xeabd,	// (0x00035f0c) grid_vkb_keypad_bottom_left_pane

0xead2,	// (0x00035f21) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xead2,	// (0x00035f21) grid_vkb_keypad_bottom_right_pane

0xeae7,	// (0x00035f36) fep_vkb_top_text_pane_g1

0x9f04,	// (0x00031353) fep_vkb_top_text_pane_t1

0x9f16,	// (0x00031365) cell_vkb_side_pane_ParamLimits

0x9f16,	// (0x00031365) cell_vkb_side_pane

0xe833,	// (0x00035c82) cell_vkb_side_pane_g1

0xeb0f,	// (0x00035f5e) cell_vkb_keypad_pane_ParamLimits

0xeb0f,	// (0x00035f5e) cell_vkb_keypad_pane

0xeb84,	// (0x00035fd3) cell_vkb_keypad_pane_g1

0x0008,

0xfb83,	// (0x00036fd2) bg_popup_fep_shadow_pane_g

0x2c14,	// (0x0002a063) cell_hwr_side_pane_g1

0x2c14,	// (0x0002a063) cell_hwr_side_pane_g2

0xeb8e,	// (0x00035fdd) cell_vkb_keypad_pane_t1

0x9f2c,	// (0x0003137b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x9f2c,	// (0x0003137b) cell_vkb_keypad_bottom_left_pane

0x9f41,	// (0x00031390) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x9f41,	// (0x00031390) cell_vkb_keypad_bottom_right_pane

0xe833,	// (0x00035c82) cell_vkb_keypad_bottom_left_pane_g1

0xe833,	// (0x00035c82) cell_vkb_keypad_bottom_right_pane_g1

0xeb9c,	// (0x00035feb) cell_vkb_keypad_number_pane_ParamLimits

0xeb9c,	// (0x00035feb) cell_vkb_keypad_number_pane

0xebbb,	// (0x0003600a) cell_vkb_keypad_number_pane_g1

0xebc5,	// (0x00036014) cell_vkb_keypad_number_pane_g2

0xebce,	// (0x0003601d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb75,	// (0x00036fc4) cell_vkb_keypad_number_pane_g

0xeb8e,	// (0x00035fdd) cell_vkb_keypad_number_pane_t1

0xebf2,	// (0x00036041) fep_vkb_candidate_pane_g1

0x0001,

0xfb96,	// (0x00036fe5) cell_hwr_side_pane_g

0xec0b,	// (0x0003605a) cell_hwr_side_pane_t1

0x2c1e,	// (0x0002a06d) cell_hwr_side_pane_t1_copy1

0x2c2c,	// (0x0002a07b) cell_hwr_candidate_pane_g1

0x2c5b,	// (0x0002a0aa) cell_hwr_candidate_pane_t1

0xe833,	// (0x00035c82) cell_vkb_candidate_pane_g2

0xec4f,	// (0x0003609e) cell_vkb_candidate_pane_t1

0x2804,	// (0x00029c53) bg_popup_fep_shadow_pane_ParamLimits

0x2804,	// (0x00029c53) bg_popup_fep_shadow_pane

0x28b9,	// (0x00029d08) bg_fep_hwr_top_pane_g4

0xe8c7,	// (0x00035d16) bg_hwr_side_pane_g1_ParamLimits

0xe8c7,	// (0x00035d16) bg_hwr_side_pane_g1

0x7e7d,	// (0x0002f2cc) cell_hwr_side_pane_ParamLimits

0x7e7d,	// (0x0002f2cc) cell_hwr_side_pane

0x2965,	// (0x00029db4) fep_hwr_write_pane_g1_ParamLimits

0x2965,	// (0x00029db4) fep_hwr_write_pane_g1

0x2972,	// (0x00029dc1) fep_hwr_write_pane_g2_ParamLimits

0x2972,	// (0x00029dc1) fep_hwr_write_pane_g2

0x297f,	// (0x00029dce) fep_hwr_write_pane_g3_ParamLimits

0x297f,	// (0x00029dce) fep_hwr_write_pane_g3

0x7e9d,	// (0x0002f2ec) fep_hwr_write_pane_g4_ParamLimits

0x7e9d,	// (0x0002f2ec) fep_hwr_write_pane_g4

0x0005,

0xfb42,	// (0x00036f91) fep_hwr_write_pane_g_ParamLimits

0xfb42,	// (0x00036f91) fep_hwr_write_pane_g

0x28b9,	// (0x00029d08) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x28b9,	// (0x00029d08) bg_fep_hwr_candidate_pane_g2

0x29a2,	// (0x00029df1) cell_hwr_candidate_pane_ParamLimits

0x29a2,	// (0x00029df1) cell_hwr_candidate_pane

0x29e4,	// (0x00029e33) fep_hwr_candidate_pane_g1_ParamLimits

0xe927,	// (0x00035d76) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xe927,	// (0x00035d76) bg_popup_fep_shadow_pane_cp2

0xe9da,	// (0x00035e29) fep_vkb_top_pane_g4_ParamLimits

0xe9da,	// (0x00035e29) fep_vkb_top_pane_g4

0xe9f9,	// (0x00035e48) fep_vkb_side_pane_g2_ParamLimits

0xe9f9,	// (0x00035e48) fep_vkb_side_pane_g2

0x7847,	// (0x0002ec96) list_setting_pane_t4_ParamLimits

0x7847,	// (0x0002ec96) list_setting_pane_t4

0x78e1,	// (0x0002ed30) list_setting_number_pane_t5_ParamLimits

0x78e1,	// (0x0002ed30) list_setting_number_pane_t5

0x8892,	// (0x0002fce1) list_double_heading_pane_cp2_ParamLimits

0x8892,	// (0x0002fce1) list_double_heading_pane_cp2

0xbb28,	// (0x00032f77) list_double_heading_pane_g1_cp2_ParamLimits

0xbb28,	// (0x00032f77) list_double_heading_pane_g1_cp2

0xbb34,	// (0x00032f83) list_double_heading_pane_g2_cp2_ParamLimits

0xbb34,	// (0x00032f83) list_double_heading_pane_g2_cp2

0xec5d,	// (0x000360ac) list_double_heading_pane_t1_cp2_ParamLimits

0xec5d,	// (0x000360ac) list_double_heading_pane_t1_cp2

0xecb5,	// (0x00036104) list_double_heading_pane_t2_cp2_ParamLimits

0xecb5,	// (0x00036104) list_double_heading_pane_t2_cp2

0xae44,	// (0x00032293) aid_value_unit2

0x0606,	// (0x00027a55) popup_preview_fixed_window

0xb640,	// (0x00032a8f) bg_popup_preview_window_pane_cp02

0xecc7,	// (0x00036116) list_preview_fixed_pane

0xed0d,	// (0x0003615c) list_empty_pane_fp_ParamLimits

0xed0d,	// (0x0003615c) list_empty_pane_fp

0xed0d,	// (0x0003615c) list_single_cale_day_pane_fp_ParamLimits

0xed0d,	// (0x0003615c) list_single_cale_day_pane_fp

0xed0d,	// (0x0003615c) list_single_graphic_heading_pane_fp_ParamLimits

0xed0d,	// (0x0003615c) list_single_graphic_heading_pane_fp

0xed0d,	// (0x0003615c) list_single_graphic_pane_fp_ParamLimits

0xed0d,	// (0x0003615c) list_single_graphic_pane_fp

0xed0d,	// (0x0003615c) list_single_heading_pane_fp_ParamLimits

0xed0d,	// (0x0003615c) list_single_heading_pane_fp

0xed0d,	// (0x0003615c) list_single_pane_fp_ParamLimits

0xed0d,	// (0x0003615c) list_single_pane_fp

0xed22,	// (0x00036171) list_single_pane_fp_g1_ParamLimits

0xed22,	// (0x00036171) list_single_pane_fp_g1

0x4d5a,	// (0x0002c1a9) list_single_pane_fp_g2_ParamLimits

0x4d5a,	// (0x0002c1a9) list_single_pane_fp_g2

0x4d66,	// (0x0002c1b5) list_single_pane_fp_g3_ParamLimits

0x4d66,	// (0x0002c1b5) list_single_pane_fp_g3

0xed2e,	// (0x0003617d) list_single_pane_fp_g4_ParamLimits

0xed2e,	// (0x0003617d) list_single_pane_fp_g4

0x0003,

0xfba9,	// (0x00036ff8) list_single_pane_fp_g_ParamLimits

0xfba9,	// (0x00036ff8) list_single_pane_fp_g

0x4d7a,	// (0x0002c1c9) list_single_pane_fp_t1_ParamLimits

0x4d7a,	// (0x0002c1c9) list_single_pane_fp_t1

0x4d91,	// (0x0002c1e0) list_single_graphic_pane_fp_g1_ParamLimits

0x4d91,	// (0x0002c1e0) list_single_graphic_pane_fp_g1

0xed22,	// (0x00036171) list_single_graphic_pane_fp_g2_ParamLimits

0xed22,	// (0x00036171) list_single_graphic_pane_fp_g2

0x4d5a,	// (0x0002c1a9) list_single_graphic_pane_fp_g3_ParamLimits

0x4d5a,	// (0x0002c1a9) list_single_graphic_pane_fp_g3

0x4d66,	// (0x0002c1b5) list_single_graphic_pane_fp_g4_ParamLimits

0x4d66,	// (0x0002c1b5) list_single_graphic_pane_fp_g4

0xed2e,	// (0x0003617d) list_single_graphic_pane_fp_g5_ParamLimits

0xed2e,	// (0x0003617d) list_single_graphic_pane_fp_g5

0x0004,

0xfbb2,	// (0x00037001) list_single_graphic_pane_fp_g_ParamLimits

0xfbb2,	// (0x00037001) list_single_graphic_pane_fp_g

0x4d9d,	// (0x0002c1ec) list_single_graphic_pane_fp_t1_ParamLimits

0x4d9d,	// (0x0002c1ec) list_single_graphic_pane_fp_t1

0x4d91,	// (0x0002c1e0) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4d91,	// (0x0002c1e0) list_single_graphic_heading_pane_fp_g1

0xed22,	// (0x00036171) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xed22,	// (0x00036171) list_single_graphic_heading_pane_fp_g2

0x4d5a,	// (0x0002c1a9) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4d5a,	// (0x0002c1a9) list_single_graphic_heading_pane_fp_g3

0x4d66,	// (0x0002c1b5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4d66,	// (0x0002c1b5) list_single_graphic_heading_pane_fp_g4

0xed2e,	// (0x0003617d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xed2e,	// (0x0003617d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfbb2,	// (0x00037001) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfbb2,	// (0x00037001) list_single_graphic_heading_pane_fp_g

0x4db3,	// (0x0002c202) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4db3,	// (0x0002c202) list_single_graphic_heading_pane_fp_t1

0x4dc9,	// (0x0002c218) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4dc9,	// (0x0002c218) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbbd,	// (0x0003700c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbbd,	// (0x0003700c) list_single_graphic_heading_pane_fp_t

0x4ddb,	// (0x0002c22a) list_single_cale_day_pane_fp_g1_ParamLimits

0x4ddb,	// (0x0002c22a) list_single_cale_day_pane_fp_g1

0xed3a,	// (0x00036189) list_single_cale_day_pane_fp_g2_ParamLimits

0xed3a,	// (0x00036189) list_single_cale_day_pane_fp_g2

0x4e13,	// (0x0002c262) list_single_cale_day_pane_fp_g3_ParamLimits

0x4e13,	// (0x0002c262) list_single_cale_day_pane_fp_g3

0x4e3b,	// (0x0002c28a) list_single_cale_day_pane_fp_g4_ParamLimits

0x4e3b,	// (0x0002c28a) list_single_cale_day_pane_fp_g4

0x4e5f,	// (0x0002c2ae) list_single_cale_day_pane_fp_g5_ParamLimits

0x4e5f,	// (0x0002c2ae) list_single_cale_day_pane_fp_g5

0x0004,

0xfbc2,	// (0x00037011) list_single_cale_day_pane_fp_g_ParamLimits

0xfbc2,	// (0x00037011) list_single_cale_day_pane_fp_g

0x4e83,	// (0x0002c2d2) list_single_cale_day_pane_fp_t1_ParamLimits

0x4e83,	// (0x0002c2d2) list_single_cale_day_pane_fp_t1

0x4ea9,	// (0x0002c2f8) list_single_cale_day_pane_fp_t2_ParamLimits

0x4ea9,	// (0x0002c2f8) list_single_cale_day_pane_fp_t2

0x4ec2,	// (0x0002c311) list_single_cale_day_pane_fp_t3_ParamLimits

0x4ec2,	// (0x0002c311) list_single_cale_day_pane_fp_t3

0x0002,

0xfbcd,	// (0x0003701c) list_single_cale_day_pane_fp_t_ParamLimits

0xfbcd,	// (0x0003701c) list_single_cale_day_pane_fp_t

0xed22,	// (0x00036171) list_empty_pane_fp_g1_ParamLimits

0xed22,	// (0x00036171) list_empty_pane_fp_g1

0x4edb,	// (0x0002c32a) list_empty_pane_fp_t1

0x4ee9,	// (0x0002c338) list_empty_pane_fp_t2

0x0001,

0xfbd4,	// (0x00037023) list_empty_pane_fp_t

0xed22,	// (0x00036171) list_single_heading_pane_fp_g1_ParamLimits

0xed22,	// (0x00036171) list_single_heading_pane_fp_g1

0x4d5a,	// (0x0002c1a9) list_single_heading_pane_fp_g2_ParamLimits

0x4d5a,	// (0x0002c1a9) list_single_heading_pane_fp_g2

0x4d66,	// (0x0002c1b5) list_single_heading_pane_fp_g3_ParamLimits

0x4d66,	// (0x0002c1b5) list_single_heading_pane_fp_g3

0x0002,

0xfbd9,	// (0x00037028) list_single_heading_pane_fp_g_ParamLimits

0xfbd9,	// (0x00037028) list_single_heading_pane_fp_g

0x4ef7,	// (0x0002c346) list_single_heading_pane_fp_t1_ParamLimits

0x4ef7,	// (0x0002c346) list_single_heading_pane_fp_t1

0x4f09,	// (0x0002c358) list_single_heading_pane_fp_t2_ParamLimits

0x4f09,	// (0x0002c358) list_single_heading_pane_fp_t2

0x0001,

0xfbe0,	// (0x0003702f) list_single_heading_pane_fp_t_ParamLimits

0xfbe0,	// (0x0003702f) list_single_heading_pane_fp_t

0xbc72,	// (0x000330c1) aid_size_cell_fast

0xb623,	// (0x00032a72) soft_indicator_pane_cp1_t1

0xbcaf,	// (0x000330fe) cell_app_pane_cp2_ParamLimits

0xbcaf,	// (0x000330fe) cell_app_pane_cp2

0x2826,	// (0x00029c75) fep_hwr_candidate_drop_down_list_pane

0x29fe,	// (0x00029e4d) fep_hwr_candidate_pane_g3_ParamLimits

0x29fe,	// (0x00029e4d) fep_hwr_candidate_pane_g3

0xa73b,	// (0x00031b8a) fep_hwr_candidate_pane_g4_ParamLimits

0xa73b,	// (0x00031b8a) fep_hwr_candidate_pane_g4

0x0002,

0xfb4f,	// (0x00036f9e) fep_hwr_candidate_pane_g_ParamLimits

0xfb4f,	// (0x00036f9e) fep_hwr_candidate_pane_g

0xe975,	// (0x00035dc4) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xe975,	// (0x00035dc4) fep_vkb_candidate_drop_down_list_pane

0xebfa,	// (0x00036049) fep_vkb_candidate_pane_g3

0xec02,	// (0x00036051) fep_vkb_candidate_pane_g4

0x0002,

0xfb7c,	// (0x00036fcb) fep_vkb_candidate_pane_g

0x2c2c,	// (0x0002a07b) cell_hwr_candidate_pane_g1_ParamLimits

0x2c3a,	// (0x0002a089) cell_hwr_candidate_pane_g3_ParamLimits

0x2c3a,	// (0x0002a089) cell_hwr_candidate_pane_g3

0x4d39,	// (0x0002c188) cell_hwr_candidate_pane_g4_ParamLimits

0x4d39,	// (0x0002c188) cell_hwr_candidate_pane_g4

0x0002,

0xfb9b,	// (0x00036fea) cell_hwr_candidate_pane_g_ParamLimits

0xfb9b,	// (0x00036fea) cell_hwr_candidate_pane_g

0xec19,	// (0x00036068) cell_vkb_candidate_pane_g3_ParamLimits

0xec19,	// (0x00036068) cell_vkb_candidate_pane_g3

0xec34,	// (0x00036083) cell_vkb_candidate_pane_g4_ParamLimits

0xec34,	// (0x00036083) cell_vkb_candidate_pane_g4

0xed46,	// (0x00036195) cell_app_pane_cp2_g1_ParamLimits

0xed46,	// (0x00036195) cell_app_pane_cp2_g1

0xed64,	// (0x000361b3) cell_app_pane_cp2_g2_ParamLimits

0xed64,	// (0x000361b3) cell_app_pane_cp2_g2

0x0001,

0xfbe5,	// (0x00037034) cell_app_pane_cp2_g_ParamLimits

0xfbe5,	// (0x00037034) cell_app_pane_cp2_g

0xed70,	// (0x000361bf) cell_app_pane_cp2_t1_ParamLimits

0xed70,	// (0x000361bf) cell_app_pane_cp2_t1

0xbb0e,	// (0x00032f5d) grid_highlight_pane_cp1_ParamLimits

0xbb0e,	// (0x00032f5d) grid_highlight_pane_cp1

0x2c79,	// (0x0002a0c8) cell_hwr_candidate_pane_cp1_ParamLimits

0x2c79,	// (0x0002a0c8) cell_hwr_candidate_pane_cp1

0x2c2c,	// (0x0002a07b) fep_hwr_candidate_drop_down_list_pane_g1

0x2c98,	// (0x0002a0e7) fep_hwr_candidate_drop_down_list_pane_g2

0x2ca5,	// (0x0002a0f4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbea,	// (0x00037039) fep_hwr_candidate_drop_down_list_pane_g

0x2cb2,	// (0x0002a101) fep_hwr_candidate_drop_down_list_scroll_pane

0x2cbb,	// (0x0002a10a) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2cbb,	// (0x0002a10a) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2cc8,	// (0x0002a117) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2cc8,	// (0x0002a117) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2cd5,	// (0x0002a124) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2cd5,	// (0x0002a124) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x2ce2,	// (0x0002a131) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x2ce2,	// (0x0002a131) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x2cfd,	// (0x0002a14c) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x2cfd,	// (0x0002a14c) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2d18,	// (0x0002a167) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2d18,	// (0x0002a167) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2d33,	// (0x0002a182) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2d33,	// (0x0002a182) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2d4e,	// (0x0002a19d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2d4e,	// (0x0002a19d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf1,	// (0x00037040) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf1,	// (0x00037040) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xed82,	// (0x000361d1) cell_vkb_candidate_pane_cp1_ParamLimits

0xed82,	// (0x000361d1) cell_vkb_candidate_pane_cp1

0xe9da,	// (0x00035e29) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xe9da,	// (0x00035e29) fep_vkb_candidate_drop_down_list_pane_g1

0xeda2,	// (0x000361f1) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xeda2,	// (0x000361f1) fep_vkb_candidate_drop_down_list_pane_g2

0xedaf,	// (0x000361fe) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xedaf,	// (0x000361fe) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfc02,	// (0x00037051) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfc02,	// (0x00037051) fep_vkb_candidate_drop_down_list_pane_g

0xedbc,	// (0x0003620b) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xedbc,	// (0x0003620b) fep_vkb_candidate_drop_down_list_scroll_pane

0xedc9,	// (0x00036218) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xedc9,	// (0x00036218) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xedd6,	// (0x00036225) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xedd6,	// (0x00036225) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xede2,	// (0x00036231) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xede2,	// (0x00036231) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xec73,	// (0x000360c2) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xec73,	// (0x000360c2) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xec94,	// (0x000360e3) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xec94,	// (0x000360e3) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xedee,	// (0x0003623d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xedee,	// (0x0003623d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xee0f,	// (0x0003625e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xee0f,	// (0x0003625e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xee30,	// (0x0003627f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xee30,	// (0x0003627f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfc09,	// (0x00037058) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfc09,	// (0x00037058) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8386,	// (0x0002f7d5) title_pane_g1_ParamLimits

0x8397,	// (0x0002f7e6) title_pane_g2_ParamLimits

0xf592,	// (0x000369e1) title_pane_g_ParamLimits

0xc036,	// (0x00033485) aid_call2_pane

0xc03e,	// (0x0003348d) aid_call_pane

0xc046,	// (0x00033495) popup_clock_analogue_window_g1

0xc046,	// (0x00033495) popup_clock_analogue_window_g2

0x0d85,	// (0x000281d4) popup_clock_analogue_window_g3

0x0d8e,	// (0x000281dd) popup_clock_analogue_window_g4

0xae56,	// (0x000322a5) popup_clock_analogue_window_g5

0x0004,

0xf73c,	// (0x00036b8b) popup_clock_analogue_window_g

0x0d96,	// (0x000281e5) popup_clock_analogue_window_t1

0x0dd1,	// (0x00028220) clock_digital_number_pane_ParamLimits

0x0dd1,	// (0x00028220) clock_digital_number_pane

0x0ddd,	// (0x0002822c) clock_digital_number_pane_cp02_ParamLimits

0x0ddd,	// (0x0002822c) clock_digital_number_pane_cp02

0x0de9,	// (0x00028238) clock_digital_number_pane_cp03_ParamLimits

0x0de9,	// (0x00028238) clock_digital_number_pane_cp03

0x0df5,	// (0x00028244) clock_digital_number_pane_cp04_ParamLimits

0x0df5,	// (0x00028244) clock_digital_number_pane_cp04

0x0e01,	// (0x00028250) clock_digital_separator_pane_ParamLimits

0x0e01,	// (0x00028250) clock_digital_separator_pane

0x0e0d,	// (0x0002825c) popup_clock_digital_window_t1_ParamLimits

0x0e0d,	// (0x0002825c) popup_clock_digital_window_t1

0xae56,	// (0x000322a5) clock_digital_number_pane_g1

0xae56,	// (0x000322a5) clock_digital_number_pane_g2

0x0001,

0xf747,	// (0x00036b96) clock_digital_number_pane_g

0xae56,	// (0x000322a5) clock_digital_separator_pane_g1

0xae56,	// (0x000322a5) clock_digital_separator_pane_g2

0x0001,

0xf747,	// (0x00036b96) clock_digital_separator_pane_g

0x927e,	// (0x000306cd) aid_fill_nsta_ParamLimits

0x93ad,	// (0x000307fc) indicator_nsta_pane_ParamLimits

0xc972,	// (0x00033dc1) popup_clock_analogue_window

0xc972,	// (0x00033dc1) popup_clock_digital_window

0xc9e9,	// (0x00033e38) grid_indicator_nsta_pane_ParamLimits

0xe4f8,	// (0x00035947) clock_nsta_pane_t2

0x0001,

0xfadc,	// (0x00036f2b) clock_nsta_pane_t

0x0d49,	// (0x00028198) aid_size_max_handle

0x7a6e,	// (0x0002eebd) aid_size_min_handle

0xc533,	// (0x00033982) editor_scroll_pane

0xee4b,	// (0x0003629a) ex_editor_pane

0xbc2d,	// (0x0003307c) scroll_pane_cp13

0xbaad,	// (0x00032efc) scroll_pane_cp14

0xc070,	// (0x000334bf) scroll_pane_cp36

0x88a1,	// (0x0002fcf0) list_single_graphic_hl_pane_cp2_ParamLimits

0x88a1,	// (0x0002fcf0) list_single_graphic_hl_pane_cp2

0x7e53,	// (0x0002f2a2) list_single_graphic_hl_pane_ParamLimits

0x7e53,	// (0x0002f2a2) list_single_graphic_hl_pane

0x4f1f,	// (0x0002c36e) aid_size_min_hl_cp1

0xee53,	// (0x000362a2) list_highlight_pane_cp34_ParamLimits

0xee53,	// (0x000362a2) list_highlight_pane_cp34

0xee64,	// (0x000362b3) list_single_graphic_hl_pane_g1_ParamLimits

0xee64,	// (0x000362b3) list_single_graphic_hl_pane_g1

0x7eb2,	// (0x0002f301) list_single_graphic_hl_pane_g2_ParamLimits

0x7eb2,	// (0x0002f301) list_single_graphic_hl_pane_g2

0x7eb2,	// (0x0002f301) list_single_graphic_hl_pane_g3_ParamLimits

0x7eb2,	// (0x0002f301) list_single_graphic_hl_pane_g3

0x7ebe,	// (0x0002f30d) list_single_graphic_hl_pane_g4_ParamLimits

0x7ebe,	// (0x0002f30d) list_single_graphic_hl_pane_g4

0x7eca,	// (0x0002f319) list_single_graphic_hl_pane_g5_ParamLimits

0x7eca,	// (0x0002f319) list_single_graphic_hl_pane_g5

0x0004,

0xfc1a,	// (0x00037069) list_single_graphic_hl_pane_g_ParamLimits

0xfc1a,	// (0x00037069) list_single_graphic_hl_pane_g

0x7ede,	// (0x0002f32d) list_single_graphic_hl_pane_t1_ParamLimits

0x7ede,	// (0x0002f32d) list_single_graphic_hl_pane_t1

0xee71,	// (0x000362c0) aid_size_min_hl_cp2

0xee7a,	// (0x000362c9) list_highlight_pane_cp34_cp2_ParamLimits

0xee7a,	// (0x000362c9) list_highlight_pane_cp34_cp2

0xee64,	// (0x000362b3) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xee64,	// (0x000362b3) list_single_graphic_hl_pane_g1_cp2

0xee87,	// (0x000362d6) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xee87,	// (0x000362d6) list_single_graphic_hl_pane_g2_cp2

0xee93,	// (0x000362e2) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xee93,	// (0x000362e2) list_single_graphic_hl_pane_g3_cp2

0xded5,	// (0x00035324) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xded5,	// (0x00035324) list_single_graphic_hl_pane_g4_cp2

0xeea1,	// (0x000362f0) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xeea1,	// (0x000362f0) list_single_graphic_hl_pane_g5_cp2

0x7b31,	// (0x0002ef80) control_pane_g4_ParamLimits

0x7b31,	// (0x0002ef80) control_pane_g4

0xbc66,	// (0x000330b5) bg_popup_sub_pane_cp10_ParamLimits

0xe83d,	// (0x00035c8c) list_choice_list_pane_ParamLimits

0xe84c,	// (0x00035c9b) scroll_pane_cp23

0xb640,	// (0x00032a8f) bg_popup_preview_window_pane_cp02_ParamLimits

0xecc7,	// (0x00036116) list_preview_fixed_pane_ParamLimits

0xecdd,	// (0x0003612c) list_preview_fixed_pane_cp_ParamLimits

0xecdd,	// (0x0003612c) list_preview_fixed_pane_cp

0xece9,	// (0x00036138) popup_preview_fixed_window_g1_ParamLimits

0xece9,	// (0x00036138) popup_preview_fixed_window_g1

0xecf5,	// (0x00036144) popup_preview_fixed_window_g2_ParamLimits

0xecf5,	// (0x00036144) popup_preview_fixed_window_g2

0x0002,

0xfba2,	// (0x00036ff1) popup_preview_fixed_window_g_ParamLimits

0xfba2,	// (0x00036ff1) popup_preview_fixed_window_g

0x0c3c,	// (0x0002808b) aid_navi_side_left_pane_ParamLimits

0x0c51,	// (0x000280a0) aid_navi_side_right_pane_ParamLimits

0x0c69,	// (0x000280b8) navi_icon_pane_stacon_ParamLimits

0x0c7d,	// (0x000280cc) navi_navi_pane_stacon_ParamLimits

0x0c69,	// (0x000280b8) navi_text_pane_stacon_ParamLimits

0xae4c,	// (0x0003229b) main_text_info_pane

0xeecb,	// (0x0003631a) listscroll_text_info_pane

0xeed3,	// (0x00036322) list_text_info_pane_ParamLimits

0xeed3,	// (0x00036322) list_text_info_pane

0xeee2,	// (0x00036331) scroll_pane_cp24_ParamLimits

0xeee2,	// (0x00036331) scroll_pane_cp24

0x9f5c,	// (0x000313ab) list_text_info_pane_t1_ParamLimits

0x9f5c,	// (0x000313ab) list_text_info_pane_t1

0x8a9c,	// (0x0002feeb) popup_fast_swap2_window_ParamLimits

0x8a9c,	// (0x0002feeb) popup_fast_swap2_window

0xef00,	// (0x0003634f) aid_size_cell_fast2

0xae4c,	// (0x0003229b) bg_popup_window_pane_cp17

0xce4e,	// (0x0003429d) heading_pane_cp2

0xb832,	// (0x00032c81) listscroll_fast2_pane

0xef0a,	// (0x00036359) grid_fast2_pane

0xef14,	// (0x00036363) listscroll_fast2_pane_g1

0xef1c,	// (0x0003636b) listscroll_fast2_pane_g2

0x0001,

0xfc25,	// (0x00037074) listscroll_fast2_pane_g

0xbc2d,	// (0x0003307c) scroll_pane_cp26

0xef26,	// (0x00036375) cell_fast2_pane_ParamLimits

0xef26,	// (0x00036375) cell_fast2_pane

0xef3b,	// (0x0003638a) cell_fast2_pane_g1

0xef44,	// (0x00036393) cell_fast2_pane_g2

0xef4d,	// (0x0003639c) cell_fast2_pane_g3

0x0002,

0xfc2a,	// (0x00037079) cell_fast2_pane_g

0xb874,	// (0x00032cc3) grid_highlight_pane_cp9

0xb889,	// (0x00032cd8) main_eswt_pane_ParamLimits

0xb889,	// (0x00032cd8) main_eswt_pane

0xeef7,	// (0x00036346) list_single_text_info_pane

0xef55,	// (0x000363a4) eswt_ctrl_button_pane

0xef55,	// (0x000363a4) eswt_ctrl_canvas_pane

0xef5d,	// (0x000363ac) eswt_ctrl_combo_pane

0xef55,	// (0x000363a4) eswt_ctrl_default_pane

0xef55,	// (0x000363a4) eswt_ctrl_label_pane

0xef65,	// (0x000363b4) eswt_ctrl_wait_pane

0xef6d,	// (0x000363bc) eswt_shell_pane

0xae4c,	// (0x0003229b) listscroll_eswt_app_pane

0xef8d,	// (0x000363dc) popup_eswt_tasktip_window_ParamLimits

0xef8d,	// (0x000363dc) popup_eswt_tasktip_window

0xcba1,	// (0x00033ff0) bg_popup_window_pane_cp18

0xef9e,	// (0x000363ed) eswt_control_pane_g1_ParamLimits

0xef9e,	// (0x000363ed) eswt_control_pane_g1

0xefab,	// (0x000363fa) eswt_control_pane_g2_ParamLimits

0xefab,	// (0x000363fa) eswt_control_pane_g2

0xefb8,	// (0x00036407) eswt_control_pane_g3_ParamLimits

0xefb8,	// (0x00036407) eswt_control_pane_g3

0xefc5,	// (0x00036414) eswt_control_pane_g4_ParamLimits

0xefc5,	// (0x00036414) eswt_control_pane_g4

0x0003,

0xfc31,	// (0x00037080) eswt_control_pane_g_ParamLimits

0xfc31,	// (0x00037080) eswt_control_pane_g

0xbb0e,	// (0x00032f5d) bg_button_pane_ParamLimits

0xbb0e,	// (0x00032f5d) bg_button_pane

0xb889,	// (0x00032cd8) common_borders_pane_copy2_ParamLimits

0xb889,	// (0x00032cd8) common_borders_pane_copy2

0xefd2,	// (0x00036421) control_button_pane_g1_ParamLimits

0xefd2,	// (0x00036421) control_button_pane_g1

0xefde,	// (0x0003642d) control_button_pane_g2_ParamLimits

0xefde,	// (0x0003642d) control_button_pane_g2

0xefea,	// (0x00036439) control_button_pane_g3_ParamLimits

0xefea,	// (0x00036439) control_button_pane_g3

0x0002,

0xfc3a,	// (0x00037089) control_button_pane_g_ParamLimits

0xfc3a,	// (0x00037089) control_button_pane_g

0xeffe,	// (0x0003644d) control_button_pane_t1

0xf00c,	// (0x0003645b) control_button_pane_t2

0x0001,

0xfc41,	// (0x00037090) control_button_pane_t

0xcab1,	// (0x00033f00) bg_button_pane_g1

0xcac1,	// (0x00033f10) bg_button_pane_g2

0xcab9,	// (0x00033f08) bg_button_pane_g3

0xcad1,	// (0x00033f20) bg_button_pane_g4

0xcac9,	// (0x00033f18) bg_button_pane_g5

0xcad9,	// (0x00033f28) bg_button_pane_g6

0xcae1,	// (0x00033f30) bg_button_pane_g7

0xcaf1,	// (0x00033f40) bg_button_pane_g8

0xcae9,	// (0x00033f38) bg_button_pane_g9

0x0008,

0xf89a,	// (0x00036ce9) bg_button_pane_g

0xe7f8,	// (0x00035c47) common_borders_pane_ParamLimits

0xe7f8,	// (0x00035c47) common_borders_pane

0xef9e,	// (0x000363ed) eswt_control_pane_g1_copy1_ParamLimits

0xef9e,	// (0x000363ed) eswt_control_pane_g1_copy1

0xefab,	// (0x000363fa) eswt_control_pane_g2_copy1_ParamLimits

0xefab,	// (0x000363fa) eswt_control_pane_g2_copy1

0xefb8,	// (0x00036407) eswt_control_pane_g3_copy1_ParamLimits

0xefb8,	// (0x00036407) eswt_control_pane_g3_copy1

0xefc5,	// (0x00036414) eswt_control_pane_g4_copy1_ParamLimits

0xefc5,	// (0x00036414) eswt_control_pane_g4_copy1

0xe833,	// (0x00035c82) bg_eswt_ctrl_canvas_pane_g1

0xe7f8,	// (0x00035c47) common_borders_pane_cp2_ParamLimits

0xe7f8,	// (0x00035c47) common_borders_pane_cp2

0xe7f8,	// (0x00035c47) common_borders_pane_cp3_ParamLimits

0xe7f8,	// (0x00035c47) common_borders_pane_cp3

0xf01a,	// (0x00036469) separator_horizontal_pane

0xf022,	// (0x00036471) separator_vertical_pane

0xef9e,	// (0x000363ed) eswt_control_pane_g1_copy2_ParamLimits

0xef9e,	// (0x000363ed) eswt_control_pane_g1_copy2

0xefab,	// (0x000363fa) eswt_control_pane_g2_copy2_ParamLimits

0xefab,	// (0x000363fa) eswt_control_pane_g2_copy2

0xefb8,	// (0x00036407) eswt_control_pane_g3_copy2_ParamLimits

0xefb8,	// (0x00036407) eswt_control_pane_g3_copy2

0xefc5,	// (0x00036414) eswt_control_pane_g4_copy2_ParamLimits

0xefc5,	// (0x00036414) eswt_control_pane_g4_copy2

0xae4c,	// (0x0003229b) common_borders_pane_cp4

0xf02b,	// (0x0003647a) separator_horizontal_pane_g1

0xf034,	// (0x00036483) separator_horizontal_pane_g2

0xf03d,	// (0x0003648c) separator_horizontal_pane_g3

0x0002,

0xfc46,	// (0x00037095) separator_horizontal_pane_g

0xef9e,	// (0x000363ed) eswt_control_pane_g1_copy3_ParamLimits

0xef9e,	// (0x000363ed) eswt_control_pane_g1_copy3

0xefab,	// (0x000363fa) eswt_control_pane_g2_copy3_ParamLimits

0xefab,	// (0x000363fa) eswt_control_pane_g2_copy3

0xefb8,	// (0x00036407) eswt_control_pane_g3_copy3_ParamLimits

0xefb8,	// (0x00036407) eswt_control_pane_g3_copy3

0xefc5,	// (0x00036414) eswt_control_pane_g4_copy3_ParamLimits

0xefc5,	// (0x00036414) eswt_control_pane_g4_copy3

0xae4c,	// (0x0003229b) common_borders_pane_cp5

0xf046,	// (0x00036495) separator_vertical_pane_g1

0xf04f,	// (0x0003649e) separator_vertical_pane_g2

0xf058,	// (0x000364a7) separator_vertical_pane_g3

0x0002,

0xfc4d,	// (0x0003709c) separator_vertical_pane_g

0xef9e,	// (0x000363ed) eswt_control_pane_g1_copy4_ParamLimits

0xef9e,	// (0x000363ed) eswt_control_pane_g1_copy4

0xefab,	// (0x000363fa) eswt_control_pane_g2_copy4_ParamLimits

0xefab,	// (0x000363fa) eswt_control_pane_g2_copy4

0xefb8,	// (0x00036407) eswt_control_pane_g3_copy4_ParamLimits

0xefb8,	// (0x00036407) eswt_control_pane_g3_copy4

0xefc5,	// (0x00036414) eswt_control_pane_g4_copy4_ParamLimits

0xefc5,	// (0x00036414) eswt_control_pane_g4_copy4

0x9f77,	// (0x000313c6) eswt_ctrl_combo_button_pane

0x9f7f,	// (0x000313ce) eswt_ctrl_input_pane

0x9f87,	// (0x000313d6) popup_choice_list_window_cp70

0x9f8f,	// (0x000313de) eswt_ctrl_input_pane_t1

0xae4c,	// (0x0003229b) input_focus_pane_cp70

0xe7f8,	// (0x00035c47) bg_button_pane_cp70_ParamLimits

0xe7f8,	// (0x00035c47) bg_button_pane_cp70

0x9f9d,	// (0x000313ec) eswt_ctrl_combo_button_pane_g1

0xf061,	// (0x000364b0) wait_bar_pane_cp70

0xcba1,	// (0x00033ff0) bg_popup_window_pane_cp70_ParamLimits

0xcba1,	// (0x00033ff0) bg_popup_window_pane_cp70

0xf069,	// (0x000364b8) popup_eswt_tasktip_window_t1

0xf07f,	// (0x000364ce) wait_bar_pane_cp71_ParamLimits

0xf07f,	// (0x000364ce) wait_bar_pane_cp71

0xf08b,	// (0x000364da) grid_eswt_app_pane

0xbe78,	// (0x000332c7) scroll_pane_cp70

0x9fa5,	// (0x000313f4) cell_eswt_app_pane_ParamLimits

0x9fa5,	// (0x000313f4) cell_eswt_app_pane

0x9fcf,	// (0x0003141e) cell_eswt_app_pane_g1_ParamLimits

0x9fcf,	// (0x0003141e) cell_eswt_app_pane_g1

0x9ffe,	// (0x0003144d) cell_eswt_app_pane_g2_ParamLimits

0x9ffe,	// (0x0003144d) cell_eswt_app_pane_g2

0x0001,

0xfc54,	// (0x000370a3) cell_eswt_app_pane_g_ParamLimits

0xfc54,	// (0x000370a3) cell_eswt_app_pane_g

0xa027,	// (0x00031476) cell_eswt_app_pane_t1_ParamLimits

0xa027,	// (0x00031476) cell_eswt_app_pane_t1

0xf094,	// (0x000364e3) grid_highlight_pane_cp70_ParamLimits

0xf094,	// (0x000364e3) grid_highlight_pane_cp70

0xc408,	// (0x00033857) set_content_pane_g1

0xc712,	// (0x00033b61) status_small_volume_pane

0x2e82,	// (0x0002a2d1) status_small_volume_pane_g1

0x2e8a,	// (0x0002a2d9) volume_small2_pane

0x2e93,	// (0x0002a2e2) volume_small2_pane_g1

0x2e9c,	// (0x0002a2eb) volume_small2_pane_g2

0x2ea5,	// (0x0002a2f4) volume_small2_pane_g3

0x2eae,	// (0x0002a2fd) volume_small2_pane_g4

0x2eb7,	// (0x0002a306) volume_small2_pane_g5

0x2ec0,	// (0x0002a30f) volume_small2_pane_g6

0x2ec9,	// (0x0002a318) volume_small2_pane_g7

0x2ed2,	// (0x0002a321) volume_small2_pane_g8

0x2edb,	// (0x0002a32a) volume_small2_pane_g9

0x2ee4,	// (0x0002a333) volume_small2_pane_g10

0x0009,

0xfc59,	// (0x000370a8) volume_small2_pane_g

0xeae7,	// (0x00035f36) fep_vkb_top_text_pane_g1_ParamLimits

0x9f04,	// (0x00031353) fep_vkb_top_text_pane_t1_ParamLimits

0xed01,	// (0x00036150) popup_preview_fixed_window_g3_ParamLimits

0xed01,	// (0x00036150) popup_preview_fixed_window_g3

0x9211,	// (0x00030660) popup_toolbar_trans_pane

0x98e5,	// (0x00030d34) aid_height_set_list_ParamLimits

0xd7ed,	// (0x00034c3c) aid_size_parent_ParamLimits

0xbc66,	// (0x000330b5) list_highlight_pane_cp2_ParamLimits

0xc408,	// (0x00033857) set_content_pane_g1_ParamLimits

0x9a80,	// (0x00030ecf) list_single_image_pane_ParamLimits

0x9a80,	// (0x00030ecf) list_single_image_pane

0xf0a0,	// (0x000364ef) aid_size_cell_image_ParamLimits

0xf0a0,	// (0x000364ef) aid_size_cell_image

0xa059,	// (0x000314a8) grid_single_image_pane_ParamLimits

0xa059,	// (0x000314a8) grid_single_image_pane

0xc9f7,	// (0x00033e46) list_single_image_pane_g1_ParamLimits

0xc9f7,	// (0x00033e46) list_single_image_pane_g1

0xf0ad,	// (0x000364fc) list_single_image_pane_g2_ParamLimits

0xf0ad,	// (0x000364fc) list_single_image_pane_g2

0x0001,

0xfc6e,	// (0x000370bd) list_single_image_pane_g_ParamLimits

0xfc6e,	// (0x000370bd) list_single_image_pane_g

0xca03,	// (0x00033e52) list_single_image_pane_t1_ParamLimits

0xca03,	// (0x00033e52) list_single_image_pane_t1

0xa067,	// (0x000314b6) cell_image_list_pane_ParamLimits

0xa067,	// (0x000314b6) cell_image_list_pane

0xf0c1,	// (0x00036510) cell_image_list_pane_g1

0xf0ca,	// (0x00036519) cell_image_list_pane_g2

0x0001,

0xfc73,	// (0x000370c2) cell_image_list_pane_g

0xf0d3,	// (0x00036522) aid_size_cell_tb_trans_pane

0xbb0e,	// (0x00032f5d) bg_tb_trans_pane

0xf0e5,	// (0x00036534) grid_tb_trans_pane

0xcab1,	// (0x00033f00) bg_tb_trans_pane_g1

0xcac1,	// (0x00033f10) bg_tb_trans_pane_g2

0xcab9,	// (0x00033f08) bg_tb_trans_pane_g3

0xcad1,	// (0x00033f20) bg_tb_trans_pane_g4

0xcac9,	// (0x00033f18) bg_tb_trans_pane_g5

0xcaf1,	// (0x00033f40) bg_tb_trans_pane_g6

0xcae9,	// (0x00033f38) bg_tb_trans_pane_g7

0xcad9,	// (0x00033f28) bg_tb_trans_pane_g8

0xcae1,	// (0x00033f30) bg_tb_trans_pane_g9

0x0008,

0xfc78,	// (0x000370c7) bg_tb_trans_pane_g

0xf0f9,	// (0x00036548) cell_toolbar_trans_pane_ParamLimits

0xf0f9,	// (0x00036548) cell_toolbar_trans_pane

0xe833,	// (0x00035c82) cell_toolbar_trans_pane_g1

0x9ce0,	// (0x0003112f) list_form2_midp_pane_t1

0x9cee,	// (0x0003113d) list_form2_midp_pane_t2

0x0001,

0xfb15,	// (0x00036f64) list_form2_midp_pane_t

0xe577,	// (0x000359c6) scroll_pane_cp51_ParamLimits

0xe6fc,	// (0x00035b4b) form2_midp_wait_pane_g1

0xe705,	// (0x00035b54) form2_midp_wait_pane_g2

0xe70e,	// (0x00035b5d) form2_midp_wait_pane_g3

0x0002,

0xfb2a,	// (0x00036f79) form2_midp_wait_pane_g

0xaebc,	// (0x0003230b) list_highlight_pane_cp21_ParamLimits

0xe736,	// (0x00035b85) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xe745,	// (0x00035b94) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xdc71,	// (0x000350c0) list_single_2graphic_im_pane_ParamLimits

0xdc71,	// (0x000350c0) list_single_2graphic_im_pane

0xa07d,	// (0x000314cc) list_single_2graphic_im_pane_g1_ParamLimits

0xa07d,	// (0x000314cc) list_single_2graphic_im_pane_g1

0xa08e,	// (0x000314dd) list_single_2graphic_im_pane_g2_ParamLimits

0xa08e,	// (0x000314dd) list_single_2graphic_im_pane_g2

0xa09a,	// (0x000314e9) list_single_2graphic_im_pane_g3_ParamLimits

0xa09a,	// (0x000314e9) list_single_2graphic_im_pane_g3

0x0003,

0xfc8b,	// (0x000370da) list_single_2graphic_im_pane_g_ParamLimits

0xfc8b,	// (0x000370da) list_single_2graphic_im_pane_g

0xa0ae,	// (0x000314fd) list_single_2graphic_im_pane_t1_ParamLimits

0xa0ae,	// (0x000314fd) list_single_2graphic_im_pane_t1

0xed0d,	// (0x0003615c) list_single_graphic_2heading_pane_fp_ParamLimits

0xed0d,	// (0x0003615c) list_single_graphic_2heading_pane_fp

0x4d91,	// (0x0002c1e0) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4d91,	// (0x0002c1e0) list_single_graphic_2heading_pane_fp_g1

0xed22,	// (0x00036171) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xed22,	// (0x00036171) list_single_graphic_2heading_pane_fp_g2

0x4d5a,	// (0x0002c1a9) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4d5a,	// (0x0002c1a9) list_single_graphic_2heading_pane_fp_g3

0x4d66,	// (0x0002c1b5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4d66,	// (0x0002c1b5) list_single_graphic_2heading_pane_fp_g4

0xed2e,	// (0x0003617d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xed2e,	// (0x0003617d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfbb2,	// (0x00037001) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfbb2,	// (0x00037001) list_single_graphic_2heading_pane_fp_g

0x4f5e,	// (0x0002c3ad) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4f5e,	// (0x0002c3ad) list_single_graphic_2heading_pane_fp_t1

0x4dc9,	// (0x0002c218) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4dc9,	// (0x0002c218) list_single_graphic_2heading_pane_fp_t2

0x4f74,	// (0x0002c3c3) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4f74,	// (0x0002c3c3) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc94,	// (0x000370e3) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc94,	// (0x000370e3) list_single_graphic_2heading_pane_fp_t

0xe8d3,	// (0x00035d22) fep_hwr_write_pane_g5_ParamLimits

0xe8d3,	// (0x00035d22) fep_hwr_write_pane_g5

0xe8df,	// (0x00035d2e) fep_hwr_write_pane_g6_ParamLimits

0xe8df,	// (0x00035d2e) fep_hwr_write_pane_g6

0xef6d,	// (0x000363bc) eswt_shell_pane_ParamLimits

0xcba1,	// (0x00033ff0) bg_popup_window_pane_cp18_ParamLimits

0xdbab,	// (0x00034ffa) heading_pane_cp70

0xf069,	// (0x000364b8) popup_eswt_tasktip_window_t1_ParamLimits

0x92d2,	// (0x00030721) aid_touch_tab_arrow_left

0x92e8,	// (0x00030737) aid_touch_tab_arrow_right

0x83af,	// (0x0002f7fe) title_pane_g3_ParamLimits

0x83af,	// (0x0002f7fe) title_pane_g3

0xbacd,	// (0x00032f1c) set_value_pane_g1

0x9211,	// (0x00030660) popup_toolbar_trans_pane_ParamLimits

0xf0d3,	// (0x00036522) aid_size_cell_tb_trans_pane_ParamLimits

0xbb0e,	// (0x00032f5d) bg_tb_trans_pane_ParamLimits

0xf0e5,	// (0x00036534) grid_tb_trans_pane_ParamLimits

0xb640,	// (0x00032a8f) cont_note_pane_ParamLimits

0xb640,	// (0x00032a8f) cont_note_pane

0xb889,	// (0x00032cd8) cont_snote2_single_text_pane_ParamLimits

0xb889,	// (0x00032cd8) cont_snote2_single_text_pane

0xb889,	// (0x00032cd8) cont_snote2_single_graphic_pane_ParamLimits

0xb889,	// (0x00032cd8) cont_snote2_single_graphic_pane

0xd038,	// (0x00034487) cont_note_wait_pane_ParamLimits

0xd038,	// (0x00034487) cont_note_wait_pane

0xd038,	// (0x00034487) cont_note_image_pane_ParamLimits

0xd038,	// (0x00034487) cont_note_image_pane

0xf12b,	// (0x0003657a) popup_note2_window_g1_ParamLimits

0xf12b,	// (0x0003657a) popup_note2_window_g1

0xf15c,	// (0x000365ab) popup_note2_window_t1_ParamLimits

0xf15c,	// (0x000365ab) popup_note2_window_t1

0xf1a1,	// (0x000365f0) popup_note2_window_t2_ParamLimits

0xf1a1,	// (0x000365f0) popup_note2_window_t2

0xf1e6,	// (0x00036635) popup_note2_window_t3_ParamLimits

0xf1e6,	// (0x00036635) popup_note2_window_t3

0xf22b,	// (0x0003667a) popup_note2_window_t4_ParamLimits

0xf22b,	// (0x0003667a) popup_note2_window_t4

0xb6c4,	// (0x00032b13) popup_note2_window_t5_ParamLimits

0xb6c4,	// (0x00032b13) popup_note2_window_t5

0x0004,

0xfc9b,	// (0x000370ea) popup_note2_window_t_ParamLimits

0xfc9b,	// (0x000370ea) popup_note2_window_t

0xf25a,	// (0x000366a9) popup_note2_image_window_g1_ParamLimits

0xf25a,	// (0x000366a9) popup_note2_image_window_g1

0xf266,	// (0x000366b5) popup_note2_image_window_g2_ParamLimits

0xf266,	// (0x000366b5) popup_note2_image_window_g2

0x0001,

0x0025,	// (0x00027474) popup_note2_image_window_g_ParamLimits

0x0025,	// (0x00027474) popup_note2_image_window_g

0xf278,	// (0x000366c7) popup_note2_image_window_t1_ParamLimits

0xf278,	// (0x000366c7) popup_note2_image_window_t1

0xf290,	// (0x000366df) popup_note2_image_window_t2_ParamLimits

0xf290,	// (0x000366df) popup_note2_image_window_t2

0xf2a8,	// (0x000366f7) popup_note2_image_window_t3_ParamLimits

0xf2a8,	// (0x000366f7) popup_note2_image_window_t3

0x0002,

0x002a,	// (0x00027479) popup_note2_image_window_t_ParamLimits

0x002a,	// (0x00027479) popup_note2_image_window_t

0xd046,	// (0x00034495) popup_note2_wait_window_g1_ParamLimits

0xd046,	// (0x00034495) popup_note2_wait_window_g1

0xf2c4,	// (0x00036713) popup_note2_wait_window_g2_ParamLimits

0xf2c4,	// (0x00036713) popup_note2_wait_window_g2

0xd05e,	// (0x000344ad) popup_note2_wait_window_g3_ParamLimits

0xd05e,	// (0x000344ad) popup_note2_wait_window_g3

0x0002,

0x0031,	// (0x00027480) popup_note2_wait_window_g_ParamLimits

0x0031,	// (0x00027480) popup_note2_wait_window_g

0xf2d0,	// (0x0003671f) popup_note2_wait_window_t1_ParamLimits

0xf2d0,	// (0x0003671f) popup_note2_wait_window_t1

0xf2ee,	// (0x0003673d) popup_note2_wait_window_t2_ParamLimits

0xf2ee,	// (0x0003673d) popup_note2_wait_window_t2

0xf30c,	// (0x0003675b) popup_note2_wait_window_t3_ParamLimits

0xf30c,	// (0x0003675b) popup_note2_wait_window_t3

0xf31e,	// (0x0003676d) popup_note2_wait_window_t4_ParamLimits

0xf31e,	// (0x0003676d) popup_note2_wait_window_t4

0x0003,

0x0038,	// (0x00027487) popup_note2_wait_window_t_ParamLimits

0x0038,	// (0x00027487) popup_note2_wait_window_t

0xf330,	// (0x0003677f) wait_bar2_pane_ParamLimits

0xf330,	// (0x0003677f) wait_bar2_pane

0xf348,	// (0x00036797) popup_snote2_single_text_window_g1_ParamLimits

0xf348,	// (0x00036797) popup_snote2_single_text_window_g1

0xf370,	// (0x000367bf) popup_snote2_single_text_window_t1_ParamLimits

0xf370,	// (0x000367bf) popup_snote2_single_text_window_t1

0xf3bc,	// (0x0003680b) popup_snote2_single_text_window_t2_ParamLimits

0xf3bc,	// (0x0003680b) popup_snote2_single_text_window_t2

0xf408,	// (0x00036857) popup_snote2_single_text_window_t3_ParamLimits

0xf408,	// (0x00036857) popup_snote2_single_text_window_t3

0xf449,	// (0x00036898) popup_snote2_single_text_window_t4_ParamLimits

0xf449,	// (0x00036898) popup_snote2_single_text_window_t4

0xf47f,	// (0x000368ce) popup_snote2_single_text_window_t5_ParamLimits

0xf47f,	// (0x000368ce) popup_snote2_single_text_window_t5

0x0004,

0x0041,	// (0x00027490) popup_snote2_single_text_window_t_ParamLimits

0x0041,	// (0x00027490) popup_snote2_single_text_window_t

0xf4aa,	// (0x000368f9) popup_snote2_single_graphic_window_g1_ParamLimits

0xf4aa,	// (0x000368f9) popup_snote2_single_graphic_window_g1

0xf4d2,	// (0x00036921) popup_snote2_single_graphic_window_g2_ParamLimits

0xf4d2,	// (0x00036921) popup_snote2_single_graphic_window_g2

0x0001,

0x004c,	// (0x0002749b) popup_snote2_single_graphic_window_g_ParamLimits

0x004c,	// (0x0002749b) popup_snote2_single_graphic_window_g

0xf4fa,	// (0x00036949) popup_snote2_single_graphic_window_t1_ParamLimits

0xf4fa,	// (0x00036949) popup_snote2_single_graphic_window_t1

0xf546,	// (0x00036995) popup_snote2_single_graphic_window_t2_ParamLimits

0xf546,	// (0x00036995) popup_snote2_single_graphic_window_t2

0xf408,	// (0x00036857) popup_snote2_single_graphic_window_t3_ParamLimits

0xf408,	// (0x00036857) popup_snote2_single_graphic_window_t3

0xf449,	// (0x00036898) popup_snote2_single_graphic_window_t4_ParamLimits

0xf449,	// (0x00036898) popup_snote2_single_graphic_window_t4

0xf47f,	// (0x000368ce) popup_snote2_single_graphic_window_t5_ParamLimits

0xf47f,	// (0x000368ce) popup_snote2_single_graphic_window_t5

0x0004,

0x0051,	// (0x000274a0) popup_snote2_single_graphic_window_t_ParamLimits

0x0051,	// (0x000274a0) popup_snote2_single_graphic_window_t

0xe52d,	// (0x0003597c) clock_nsta_pane_cp2_t1

0xe52d,	// (0x0003597c) clock_nsta_pane_cp2_t2

0x0001,

0xfaeb,	// (0x00036f3a) clock_nsta_pane_cp2_t

0x46b5,	// (0x0002bb04) form_field_data_wide_pane_g1_ParamLimits

0xbb28,	// (0x00032f77) form_field_data_wide_pane_g2_ParamLimits

0xbb28,	// (0x00032f77) form_field_data_wide_pane_g2

0xbb34,	// (0x00032f83) form_field_data_wide_pane_g3_ParamLimits

0xbb34,	// (0x00032f83) form_field_data_wide_pane_g3

0x0002,

0xf6bf,	// (0x00036b0e) form_field_data_wide_pane_g_ParamLimits

0xf6bf,	// (0x00036b0e) form_field_data_wide_pane_g

0x9bfa,	// (0x00031049) grid_touch_3_pane_ParamLimits

0x9bfa,	// (0x00031049) grid_touch_3_pane

0xa0df,	// (0x0003152e) cell_touch_3_pane_ParamLimits

0xa0df,	// (0x0003152e) cell_touch_3_pane

0xe833,	// (0x00035c82) cell_touch_3_pane_g1

0xe833,	// (0x00035c82) cell_touch_3_pane_g2

0x0001,

0xfb70,	// (0x00036fbf) cell_touch_3_pane_g

0xb6f6,	// (0x00032b45) cont_query_data_pane

0xb6fe,	// (0x00032b4d) cont_query_data_pane_cp1

0x2f9e,	// (0x0002a3ed) button_value_adjust_pane_cp7

0x2fa6,	// (0x0002a3f5) query_popup_pane_cp3

0xc0a2,	// (0x000334f1) bg_popup_sub_pane_cp22_ParamLimits

0x0e68,	// (0x000282b7) navi_navi_volume_pane_cp2

0x0e83,	// (0x000282d2) popup_side_volume_key_window_g2

0x0e92,	// (0x000282e1) popup_side_volume_key_window_g3

0x0002,

0xf751,	// (0x00036ba0) popup_side_volume_key_window_g

0x0eaf,	// (0x000282fe) popup_side_volume_key_window_t2

0x0001,

0xf758,	// (0x00036ba7) popup_side_volume_key_window_t

0xc2d2,	// (0x00033721) popup_side_volume_key_window_ParamLimits

0x7657,	// (0x0002eaa6) list_double_graphic_pane_g4_ParamLimits

0x7657,	// (0x0002eaa6) list_double_graphic_pane_g4

0x9a6d,	// (0x00030ebc) list_single_2heading_msg_pane_ParamLimits

0x9a6d,	// (0x00030ebc) list_single_2heading_msg_pane

0x7ef4,	// (0x0002f343) list_single_2heading_msg_pane_g1_ParamLimits

0x7ef4,	// (0x0002f343) list_single_2heading_msg_pane_g1

0x7f00,	// (0x0002f34f) list_single_2heading_msg_pane_g2_ParamLimits

0x7f00,	// (0x0002f34f) list_single_2heading_msg_pane_g2

0x7f13,	// (0x0002f362) list_single_2heading_msg_pane_g3_ParamLimits

0x7f13,	// (0x0002f362) list_single_2heading_msg_pane_g3

0x8f4e,	// (0x0003039d) list_single_2heading_msg_pane_g4_ParamLimits

0x8f4e,	// (0x0003039d) list_single_2heading_msg_pane_g4

0x0003,

0xfca6,	// (0x000370f5) list_single_2heading_msg_pane_g_ParamLimits

0xfca6,	// (0x000370f5) list_single_2heading_msg_pane_g

0x8f66,	// (0x000303b5) list_single_2heading_msg_pane_t1_ParamLimits

0x8f66,	// (0x000303b5) list_single_2heading_msg_pane_t1

0x8f8e,	// (0x000303dd) list_single_2heading_msg_pane_t2_ParamLimits

0x8f8e,	// (0x000303dd) list_single_2heading_msg_pane_t2

0x8ff9,	// (0x00030448) list_single_2heading_msg_pane_t3_ParamLimits

0x8ff9,	// (0x00030448) list_single_2heading_msg_pane_t3

0x5059,	// (0x0002c4a8) list_single_2heading_msg_pane_t4_ParamLimits

0x5059,	// (0x0002c4a8) list_single_2heading_msg_pane_t4

0x0003,

0xfcaf,	// (0x000370fe) list_single_2heading_msg_pane_t_ParamLimits

0xfcaf,	// (0x000370fe) list_single_2heading_msg_pane_t

0xae6a,	// (0x000322b9) title_pane_g4_ParamLimits

0xae6a,	// (0x000322b9) title_pane_g4

0x0b8c,	// (0x00027fdb) title_pane_stacon_g3_ParamLimits

0x0b8c,	// (0x00027fdb) title_pane_stacon_g3

0xf11f,	// (0x0003656e) list_single_2graphic_im_pane_g4_ParamLimits

0xf11f,	// (0x0003656e) list_single_2graphic_im_pane_g4

0xd9cf,	// (0x00034e1e) popup_side_volume_key_window_cp

0xde9c,	// (0x000352eb) main_idle_act2_pane_t1

0x1b54,	// (0x00028fa3) toolbar_button_pane_g10

0x871c,	// (0x0002fb6b) popup_toolbar_window_cp1

0xe51e,	// (0x0003596d) clock_nsta_pane_cp_t1

0xe51e,	// (0x0003596d) clock_nsta_pane_cp_t2

0x0001,

0xfae6,	// (0x00036f35) clock_nsta_pane_cp_t

0x0e68,	// (0x000282b7) navi_navi_volume_pane_cp2_ParamLimits

0x0e77,	// (0x000282c6) popup_side_volume_key_window_g1_ParamLimits

0x0e83,	// (0x000282d2) popup_side_volume_key_window_g2_ParamLimits

0x0e92,	// (0x000282e1) popup_side_volume_key_window_g3_ParamLimits

0xf751,	// (0x00036ba0) popup_side_volume_key_window_g_ParamLimits

0x2812,	// (0x00029c61) fep_hwr_aid_pane

0x28b9,	// (0x00029d08) bg_fep_hwr_top_pane_g4_ParamLimits

0xe8a3,	// (0x00035cf2) fep_hwr_top_pane_g1_ParamLimits

0xe8b5,	// (0x00035d04) fep_hwr_top_pane_g2_ParamLimits

0x28d9,	// (0x00029d28) fep_hwr_top_pane_g3_ParamLimits

0xfb3b,	// (0x00036f8a) fep_hwr_top_pane_g_ParamLimits

0x28ee,	// (0x00029d3d) fep_hwr_top_text_pane_ParamLimits

0xd774,	// (0x00034bc3) aid_touch_tab_arrow_arrow_2

0xd77d,	// (0x00034bcc) aid_touch_tab_arrow_left_2

0x2826,	// (0x00029c75) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x285d,	// (0x00029cac) fep_hwr_prediction_pane

0xe9a2,	// (0x00035df1) fep_vkb_prediction_pane

0x9ee4,	// (0x00031333) fep_vkb_side_pane_g3_ParamLimits

0x9ee4,	// (0x00031333) fep_vkb_side_pane_g3

0x2c2c,	// (0x0002a07b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x2c98,	// (0x0002a0e7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x2ca5,	// (0x0002a0f4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbea,	// (0x00037039) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x2fcb,	// (0x0002a41a) fep_hwr_prediction_pane_g1

0x2fd5,	// (0x0002a424) fep_hwr_prediction_pane_g2

0x2fdd,	// (0x0002a42c) fep_hwr_prediction_pane_g3

0x2fe5,	// (0x0002a434) fep_hwr_prediction_pane_g4

0x0003,

0xfcb8,	// (0x00037107) fep_hwr_prediction_pane_g

0x2fed,	// (0x0002a43c) fep_vkb_prediction_pane_g1

0x2ff7,	// (0x0002a446) fep_vkb_prediction_pane_g2

0x2fff,	// (0x0002a44e) fep_vkb_prediction_pane_g3

0x3007,	// (0x0002a456) fep_vkb_prediction_pane_g4

0x0003,

0xfcc1,	// (0x00037110) fep_vkb_prediction_pane_g

0x20df,	// (0x0002952e) slider_set_pane_g3

0x20f3,	// (0x00029542) slider_set_pane_g4

0x210b,	// (0x0002955a) slider_set_pane_g5

0x20df,	// (0x0002952e) slider_set_pane_g6

0x2121,	// (0x00029570) slider_set_pane_g7

0xdc36,	// (0x00035085) slider_form_pane_g3

0xdc3f,	// (0x0003508e) slider_form_pane_g4

0xdc47,	// (0x00035096) slider_form_pane_g5

0xdc36,	// (0x00035085) slider_form_pane_g6

0x9a30,	// (0x00030e7f) slider_form_pane_g7

0xe0fa,	// (0x00035549) slider_set_pane_vc_g3

0xe103,	// (0x00035552) slider_set_pane_vc_g4

0xe10c,	// (0x0003555b) slider_set_pane_vc_g5

0xe0fa,	// (0x00035549) slider_set_pane_vc_g6

0xe115,	// (0x00035564) slider_set_pane_vc_g7

0xe0fa,	// (0x00035549) slider_form_pane_vc_g1

0xe103,	// (0x00035552) slider_form_pane_vc_g2

0xe10c,	// (0x0003555b) slider_form_pane_vc_g3

0xe0fa,	// (0x00035549) slider_form_pane_vc_g4

0xe2c8,	// (0x00035717) slider_form_pane_vc_g5

0x0004,

0xfacc,	// (0x00036f1b) slider_form_pane_vc_g

0xae4c,	// (0x0003229b) main_idle_act3_pane

0x300f,	// (0x0002a45e) ai3_links_pane

0xa128,	// (0x00031577) popup_ai3_data_window_ParamLimits

0xa128,	// (0x00031577) popup_ai3_data_window

0xae4c,	// (0x0003229b) grid_ai3_links_pane

0xa142,	// (0x00031591) cell_ai3_links_pane_ParamLimits

0xa142,	// (0x00031591) cell_ai3_links_pane

0x304a,	// (0x0002a499) bg_popup_sub_pane_cp11

0x3057,	// (0x0002a4a6) cell_ai3_links_pane_g1

0xae4c,	// (0x0003229b) bg_popup_sub_pane_cp12

0x307c,	// (0x0002a4cb) heading_ai3_data_pane

0x3084,	// (0x0002a4d3) list_ai3_gene_pane

0x3090,	// (0x0002a4df) popup_ai3_data_window_g1

0x3098,	// (0x0002a4e7) heading_ai3_data_pane_g1

0x30a0,	// (0x0002a4ef) heading_ai3_data_pane_t1

0x30ae,	// (0x0002a4fd) list_double_ai3_gene_pane_ParamLimits

0x30ae,	// (0x0002a4fd) list_double_ai3_gene_pane

0x30bb,	// (0x0002a50a) list_single_ai3_gene_pane_ParamLimits

0x30bb,	// (0x0002a50a) list_single_ai3_gene_pane

0xe7f8,	// (0x00035c47) list_highlight_pane_cp7_ParamLimits

0xe7f8,	// (0x00035c47) list_highlight_pane_cp7

0x30c8,	// (0x0002a517) list_single_a13_gene_pane_t1_ParamLimits

0x30c8,	// (0x0002a517) list_single_a13_gene_pane_t1

0x30df,	// (0x0002a52e) list_single_ai3_gene_pane_g1

0x30e8,	// (0x0002a537) list_single_ai3_gene_pane_g2

0x0001,

0xfcca,	// (0x00037119) list_single_ai3_gene_pane_g

0x30f0,	// (0x0002a53f) list_double_ai3_gene_pane_g1_ParamLimits

0x30f0,	// (0x0002a53f) list_double_ai3_gene_pane_g1

0x30fc,	// (0x0002a54b) list_double_ai3_gene_pane_t1_ParamLimits

0x30fc,	// (0x0002a54b) list_double_ai3_gene_pane_t1

0x3118,	// (0x0002a567) list_double_ai3_gene_pane_t2_ParamLimits

0x3118,	// (0x0002a567) list_double_ai3_gene_pane_t2

0x312e,	// (0x0002a57d) list_double_ai3_gene_pane_t3_ParamLimits

0x312e,	// (0x0002a57d) list_double_ai3_gene_pane_t3

0x0002,

0xfccf,	// (0x0003711e) list_double_ai3_gene_pane_t_ParamLimits

0xfccf,	// (0x0003711e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4f8a,	// (0x0002c3d9) aid_size_min_col_2

0xa112,	// (0x00031561) aid_size_min_msg_ParamLimits

0xa112,	// (0x00031561) aid_size_min_msg

0x9ef8,	// (0x00031347) fep_vkb_top_text_pane_g2_ParamLimits

0x9ef8,	// (0x00031347) fep_vkb_top_text_pane_g2

0x0001,

0xfb6b,	// (0x00036fba) fep_vkb_top_text_pane_g_ParamLimits

0xfb6b,	// (0x00036fba) fep_vkb_top_text_pane_g

0xae4c,	// (0x0003229b) main_hc_apps_shell_pane

0x314b,	// (0x0002a59a) grid_hc_apps_pane_ParamLimits

0x314b,	// (0x0002a59a) grid_hc_apps_pane

0x315a,	// (0x0002a5a9) list_hc_apps_pane

0x3162,	// (0x0002a5b1) scroll_pane_cp37_ParamLimits

0x3162,	// (0x0002a5b1) scroll_pane_cp37

0xa15c,	// (0x000315ab) cell_hc_apps_pane_ParamLimits

0xa15c,	// (0x000315ab) cell_hc_apps_pane

0xa21a,	// (0x00031669) cell_hc_apps_pane_g1_ParamLimits

0xa21a,	// (0x00031669) cell_hc_apps_pane_g1

0x324d,	// (0x0002a69c) cell_hc_apps_pane_g2_ParamLimits

0x324d,	// (0x0002a69c) cell_hc_apps_pane_g2

0x3269,	// (0x0002a6b8) cell_hc_apps_pane_g3_ParamLimits

0x3269,	// (0x0002a6b8) cell_hc_apps_pane_g3

0x0002,

0xfcd6,	// (0x00037125) cell_hc_apps_pane_g_ParamLimits

0xfcd6,	// (0x00037125) cell_hc_apps_pane_g

0xa247,	// (0x00031696) cell_hc_apps_pane_t1_ParamLimits

0xa247,	// (0x00031696) cell_hc_apps_pane_t1

0xb640,	// (0x00032a8f) grid_highlight_pane_cp10_ParamLimits

0xb640,	// (0x00032a8f) grid_highlight_pane_cp10

0xa285,	// (0x000316d4) list_single_hc_apps_pane_ParamLimits

0xa285,	// (0x000316d4) list_single_hc_apps_pane

0xa2b2,	// (0x00031701) list_single_hc_apps_pane_g1

0x9067,	// (0x000304b6) list_single_hc_apps_pane_g2

0x0001,

0xfcdd,	// (0x0003712c) list_single_hc_apps_pane_g

0x9080,	// (0x000304cf) list_single_hc_apps_pane_g2_copy1

0x909c,	// (0x000304eb) list_single_hc_apps_pane_t1

0xaebc,	// (0x0003230b) bg_set_opt_pane_cp_ParamLimits

0x07e4,	// (0x00027c33) setting_slider_pane_t1_ParamLimits

0x07fd,	// (0x00027c4c) setting_slider_pane_t2_ParamLimits

0x0817,	// (0x00027c66) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x000369f1) setting_slider_pane_t_ParamLimits

0x082f,	// (0x00027c7e) slider_set_pane_ParamLimits

0x125b,	// (0x000286aa) control_pane_g5_ParamLimits

0x125b,	// (0x000286aa) control_pane_g5

0xdbf2,	// (0x00035041) slider_set_pane_g1_ParamLimits

0x20d3,	// (0x00029522) slider_set_pane_g2_ParamLimits

0x20df,	// (0x0002952e) slider_set_pane_g3_ParamLimits

0x20f3,	// (0x00029542) slider_set_pane_g4_ParamLimits

0x210b,	// (0x0002955a) slider_set_pane_g5_ParamLimits

0x20df,	// (0x0002952e) slider_set_pane_g6_ParamLimits

0x2121,	// (0x00029570) slider_set_pane_g7_ParamLimits

0xf998,	// (0x00036de7) slider_set_pane_g_ParamLimits

0xc3b3,	// (0x00033802) navi_icon_text_pane_ParamLimits

0x929e,	// (0x000306ed) aid_fill_nsta_2_ParamLimits

0x92d2,	// (0x00030721) aid_touch_tab_arrow_left_ParamLimits

0x92e8,	// (0x00030737) aid_touch_tab_arrow_right_ParamLimits

0x9383,	// (0x000307d2) clock_nsta_pane_ParamLimits

0x980c,	// (0x00030c5b) navi_icon_pane_g1_ParamLimits

0x9818,	// (0x00030c67) navi_text_pane_t1_ParamLimits

0x9cc2,	// (0x00031111) navi_icon_text_pane_g1_ParamLimits

0x9cce,	// (0x0003111d) navi_icon_text_pane_t1_ParamLimits

0xa2b2,	// (0x00031701) list_single_hc_apps_pane_g1_ParamLimits

0x9067,	// (0x000304b6) list_single_hc_apps_pane_g2_ParamLimits

0xfcdd,	// (0x0003712c) list_single_hc_apps_pane_g_ParamLimits

0x9080,	// (0x000304cf) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x909c,	// (0x000304eb) list_single_hc_apps_pane_t1_ParamLimits

0x74b9,	// (0x0002e908) popup_toolbar2_fixed_window_ParamLimits

0x74b9,	// (0x0002e908) popup_toolbar2_fixed_window

0x9207,	// (0x00030656) popup_toolbar2_float_window

0xae4c,	// (0x0003229b) bg_popup_sub_pane_cp27

0x3340,	// (0x0002a78f) grid_toolbar2_float_pane

0xae4c,	// (0x0003229b) bg_popup_sub_pane_cp26

0x3340,	// (0x0002a78f) grid_toolbar2_fixed_pane

0xa2cb,	// (0x0003171a) cell_toolbar2_fixed_pane_ParamLimits

0xa2cb,	// (0x0003171a) cell_toolbar2_fixed_pane

0xa2e6,	// (0x00031735) cell_toolbar2_fixed_pane_g1

0x3361,	// (0x0002a7b0) toolbar2_fixed_button_pane

0xcab1,	// (0x00033f00) toolbar2_fixed_button_pane_g1

0xcac1,	// (0x00033f10) toolbar2_fixed_button_pane_g2

0xcab9,	// (0x00033f08) toolbar2_fixed_button_pane_g3

0xcad1,	// (0x00033f20) toolbar2_fixed_button_pane_g4

0xcac9,	// (0x00033f18) toolbar2_fixed_button_pane_g5

0xcad9,	// (0x00033f28) toolbar2_fixed_button_pane_g6

0xcae1,	// (0x00033f30) toolbar2_fixed_button_pane_g7

0xcaf1,	// (0x00033f40) toolbar2_fixed_button_pane_g8

0xcae9,	// (0x00033f38) toolbar2_fixed_button_pane_g9

0x0008,

0xf89a,	// (0x00036ce9) toolbar2_fixed_button_pane_g

0x3369,	// (0x0002a7b8) cell_toolbar2_float_pane_ParamLimits

0x3369,	// (0x0002a7b8) cell_toolbar2_float_pane

0x337a,	// (0x0002a7c9) cell_toolbar2_float_pane_g1

0x3361,	// (0x0002a7b0) toolbar2_fixed_button_pane_cp

0x9dd2,	// (0x00031221) fep_vkb_accented_list_pane_ParamLimits

0x9dd2,	// (0x00031221) fep_vkb_accented_list_pane

0x2c0c,	// (0x0002a05b) bg_popup_fep_shadow_pane_g9

0xc533,	// (0x00033982) bg_popup_fep_shadow_pane_cp3

0xbc14,	// (0x00033063) list_accented_list_pane

0x3383,	// (0x0002a7d2) list_single_accented_list_pane_ParamLimits

0x3383,	// (0x0002a7d2) list_single_accented_list_pane

0xc533,	// (0x00033982) list_highlight_pane_cp10

0x3394,	// (0x0002a7e3) list_single_accented_list_pane_t1

0x9131,	// (0x00030580) popup_slider_window_ParamLimits

0x9131,	// (0x00030580) popup_slider_window

0x2fae,	// (0x0002a3fd) aid_indentation_list_msg

0xa3df,	// (0x0003182e) bg_popup_window_pane_cp19

0x34b8,	// (0x0002a907) popup_slider_window_g1

0x34d4,	// (0x0002a923) popup_slider_window_g2

0x34f0,	// (0x0002a93f) popup_slider_window_g3

0x0005,

0xfce2,	// (0x00037131) popup_slider_window_g

0x354c,	// (0x0002a99b) popup_slider_window_t1

0x35c0,	// (0x0002aa0f) small_volume_slider_vertical_pane

0xe833,	// (0x00035c82) small_volume_slider_vertical_pane_g1

0xe833,	// (0x00035c82) small_volume_slider_vertical_pane_g2

0x35dc,	// (0x0002aa2b) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf4,	// (0x00037143) small_volume_slider_vertical_pane_g

0x7427,	// (0x0002e876) area_side_right_pane_ParamLimits

0x7427,	// (0x0002e876) area_side_right_pane

0x7f1f,	// (0x0002f36e) aid_size_side_button_ParamLimits

0x7f1f,	// (0x0002f36e) aid_size_side_button

0x7f38,	// (0x0002f387) grid_sctrl_middle_pane_ParamLimits

0x7f38,	// (0x0002f387) grid_sctrl_middle_pane

0x3619,	// (0x0002aa68) sctrl_sk_bottom_pane

0x362a,	// (0x0002aa79) sctrl_sk_top_pane

0x363c,	// (0x0002aa8b) aid_touch_sctrl_top

0x3649,	// (0x0002aa98) bg_sctrl_sk_pane_ParamLimits

0x3649,	// (0x0002aa98) bg_sctrl_sk_pane

0x3657,	// (0x0002aaa6) sctrl_sk_top_pane_g1

0x3664,	// (0x0002aab3) sctrl_sk_top_pane_t1

0x363c,	// (0x0002aa8b) aid_touch_sctrl_bottom

0x3649,	// (0x0002aa98) bg_sctrl_sk_pane_cp_ParamLimits

0x3649,	// (0x0002aa98) bg_sctrl_sk_pane_cp

0x367f,	// (0x0002aace) sctrl_sk_bottom_pane_g1

0x3664,	// (0x0002aab3) sctrl_sk_bottom_pane_t1

0x7f52,	// (0x0002f3a1) cell_sctrl_middle_pane_ParamLimits

0x7f52,	// (0x0002f3a1) cell_sctrl_middle_pane

0x7f63,	// (0x0002f3b2) aid_touch_sctrl_middle_ParamLimits

0x7f63,	// (0x0002f3b2) aid_touch_sctrl_middle

0x7f70,	// (0x0002f3bf) bg_sctrl_middle_pane_ParamLimits

0x7f70,	// (0x0002f3bf) bg_sctrl_middle_pane

0x3f69,	// (0x0002b3b8) cell_sctrl_middle_pane_g1_ParamLimits

0x3f69,	// (0x0002b3b8) cell_sctrl_middle_pane_g1

0x7f7e,	// (0x0002f3cd) cell_sctrl_middle_pane_g2_ParamLimits

0x7f7e,	// (0x0002f3cd) cell_sctrl_middle_pane_g2

0x0001,

0xfd00,	// (0x0003714f) cell_sctrl_middle_pane_g_ParamLimits

0xfd00,	// (0x0003714f) cell_sctrl_middle_pane_g

0xcab1,	// (0x00033f00) bg_sctrl_middle_pane_g1

0xcab9,	// (0x00033f08) bg_sctrl_middle_pane_g2

0xcac1,	// (0x00033f10) bg_sctrl_middle_pane_g3

0xcac9,	// (0x00033f18) bg_sctrl_middle_pane_g4

0xcad1,	// (0x00033f20) bg_sctrl_middle_pane_g5

0xcad9,	// (0x00033f28) bg_sctrl_middle_pane_g6

0xcae1,	// (0x00033f30) bg_sctrl_middle_pane_g7

0xcae9,	// (0x00033f38) bg_sctrl_middle_pane_g8

0x0007,

0x00bb,	// (0x0002750a) bg_sctrl_middle_pane_g

0xcaf1,	// (0x00033f40) bg_sctrl_middle_pane_g8_copy1

0xcab1,	// (0x00033f00) bg_sctrl_sk_pane_g1

0xcac1,	// (0x00033f10) bg_sctrl_sk_pane_g2

0xcab9,	// (0x00033f08) bg_sctrl_sk_pane_g3

0x0008,

0xf89a,	// (0x00036ce9) bg_sctrl_sk_pane_g

0xba47,	// (0x00032e96) aid_size_touch_scroll_bar

0xcad1,	// (0x00033f20) bg_sctrl_sk_pane_g4

0xcac9,	// (0x00033f18) bg_sctrl_sk_pane_g5

0xcad9,	// (0x00033f28) bg_sctrl_sk_pane_g6

0xcae1,	// (0x00033f30) bg_sctrl_sk_pane_g7

0xcaf1,	// (0x00033f40) bg_sctrl_sk_pane_g8

0xcae9,	// (0x00033f38) bg_sctrl_sk_pane_g9

0xc7b7,	// (0x00033c06) popup_fep_china_hwr2_fs_candidate_window

0x8af9,	// (0x0002ff48) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8af9,	// (0x0002ff48) popup_fep_china_hwr2_fs_control_window

0x2c2c,	// (0x0002a07b) sctrl_sk_top_pane_g2

0x0001,

0xfcfb,	// (0x0003714a) sctrl_sk_top_pane_g

0xa497,	// (0x000318e6) aid_fep_china_hwr2_fs_cell_ParamLimits

0xa497,	// (0x000318e6) aid_fep_china_hwr2_fs_cell

0xa4ab,	// (0x000318fa) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xa4ab,	// (0x000318fa) bg_popup_fep_shadow_pane_cp4

0xa4c2,	// (0x00031911) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xa4c2,	// (0x00031911) bg_popup_fep_shadow_pane_cp5

0xa4d4,	// (0x00031923) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xa4d4,	// (0x00031923) popup_fep_china_hwr2_fs_control_bar_grid

0xa4e8,	// (0x00031937) popup_fep_china_hwr2_fs_control_funtion_grid

0x3729,	// (0x0002ab78) aid_fep_china_hwr2_fs_candi_cell

0xae4c,	// (0x0003229b) bg_popup_fep_shadow_pane_cp6

0x3733,	// (0x0002ab82) popup_fep_china_hwr2_fs_candidate_grid

0xa4f0,	// (0x0003193f) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xa4f0,	// (0x0003193f) cell_fep_china_hwr2_fs_funtion_grid

0xe833,	// (0x00035c82) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x3755,	// (0x0002aba4) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x3755,	// (0x0002aba4) cell_fep_china_hwr2_fs_funtion_grid_g1

0x3763,	// (0x0002abb2) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x3763,	// (0x0002abb2) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd05,	// (0x00037154) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd05,	// (0x00037154) cell_fep_china_hwr2_fs_funtion_grid_g

0xa508,	// (0x00031957) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xa508,	// (0x00031957) cell_fep_china_hwr2_fs_funtion_grid_t1

0xa51d,	// (0x0003196c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xa51d,	// (0x0003196c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0a,	// (0x00037159) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0a,	// (0x00037159) cell_fep_china_hwr2_fs_funtion_grid_t

0x37aa,	// (0x0002abf9) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x37b2,	// (0x0002ac01) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x37ba,	// (0x0002ac09) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0f,	// (0x0003715e) popup_fep_china_hwr2_fs_control_bar_grid_g

0x37c2,	// (0x0002ac11) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x37c2,	// (0x0002ac11) cell_fep_china_hwr2_fs_candidate_grid

0x37db,	// (0x0002ac2a) popup_fep_china_hwr2_fs_candidate_grid_g20

0x37e3,	// (0x0002ac32) popup_fep_china_hwr2_fs_candidate_grid_g21

0xe833,	// (0x00035c82) cell_fep_china_hwr2_fs_candidate_grid_g1

0xe833,	// (0x00035c82) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb70,	// (0x00036fbf) cell_fep_china_hwr2_fs_candidate_grid_g

0x37eb,	// (0x0002ac3a) cell_fep_china_hwr2_fs_candidate_grid_t1

0xc8ce,	// (0x00033d1d) clock_nsta_pane_cp_24_ParamLimits

0xc8ce,	// (0x00033d1d) clock_nsta_pane_cp_24

0xc936,	// (0x00033d85) indicator_nsta_pane_cp_24_ParamLimits

0xc936,	// (0x00033d85) indicator_nsta_pane_cp_24

0xd67e,	// (0x00034acd) heading_pane_g1

0x0001,

0xf8ff,	// (0x00036d4e) heading_pane_g

0xdd29,	// (0x00035178) grid_sct_catagory_button_pane

0xd7ff,	// (0x00034c4e) scroll_pane_cp5_ParamLimits

0xe583,	// (0x000359d2) button_value_adjust_pane_cp5_ParamLimits

0xe583,	// (0x000359d2) button_value_adjust_pane_cp5

0xe64f,	// (0x00035a9e) form2_midp_time_pane_ParamLimits

0x37f9,	// (0x0002ac48) cell_sct_catagory_button_pane_ParamLimits

0x37f9,	// (0x0002ac48) cell_sct_catagory_button_pane

0xe7f8,	// (0x00035c47) bg_button_pane_cp01_ParamLimits

0xe7f8,	// (0x00035c47) bg_button_pane_cp01

0xe833,	// (0x00035c82) cell_sct_catagory_button_pane_g1

0x91aa,	// (0x000305f9) popup_tb_extension_window

0xa539,	// (0x00031988) aid_size_cell_ext_ParamLimits

0xa539,	// (0x00031988) aid_size_cell_ext

0xb889,	// (0x00032cd8) bg_tb_trans_pane_cp1_ParamLimits

0xb889,	// (0x00032cd8) bg_tb_trans_pane_cp1

0xa55f,	// (0x000319ae) grid_tb_ext_pane_ParamLimits

0xa55f,	// (0x000319ae) grid_tb_ext_pane

0xa59a,	// (0x000319e9) cell_tb_ext_pane_ParamLimits

0xa59a,	// (0x000319e9) cell_tb_ext_pane

0xa5c2,	// (0x00031a11) cell_tb_ext_pane_g1_ParamLimits

0xa5c2,	// (0x00031a11) cell_tb_ext_pane_g1

0x388d,	// (0x0002acdc) cell_tb_ext_pane_t1

0xb640,	// (0x00032a8f) list_highlight_pane_cp11_ParamLimits

0xb640,	// (0x00032a8f) list_highlight_pane_cp11

0x0651,	// (0x00027aa0) popup_uni_indicator_window_ParamLimits

0x0651,	// (0x00027aa0) popup_uni_indicator_window

0xbb0e,	// (0x00032f5d) bg_popup_sub_pane_cp14

0x38a8,	// (0x0002acf7) list_uniindi_pane

0x38b4,	// (0x0002ad03) uniindi_top_pane

0xb640,	// (0x00032a8f) bg_uniindi_top_pane

0x38d3,	// (0x0002ad22) uniindi_top_pane_g1

0x38e9,	// (0x0002ad38) uniindi_top_pane_g2

0x0003,

0xfd16,	// (0x00037165) uniindi_top_pane_g

0x3913,	// (0x0002ad62) uniindi_top_pane_t1

0x393d,	// (0x0002ad8c) list_single_uniindi_pane_ParamLimits

0x393d,	// (0x0002ad8c) list_single_uniindi_pane

0xe833,	// (0x00035c82) bg_uniindi_top_pane_g1

0x507e,	// (0x0002c4cd) list_single_uniindi_pane_g1

0x5091,	// (0x0002c4e0) list_single_uniindi_pane_t1

0x04c7,	// (0x00027916) control_bg_pane

0x50b6,	// (0x0002c505) bg_sctrl_sk_pane_cp1

0x50bf,	// (0x0002c50e) bg_sctrl_sk_pane_cp2

0x50c8,	// (0x0002c517) control_bg_pane_g1

0x50d1,	// (0x0002c520) control_bg_pane_g2

0x0001,

0xfd1f,	// (0x0003716e) control_bg_pane_g

0xe492,	// (0x000358e1) cell_indicator_nsta_pane_g1_ParamLimits

0x9c29,	// (0x00031078) cell_indicator_nsta_pane_g2_ParamLimits

0xfae1,	// (0x00036f30) cell_indicator_nsta_pane_g_ParamLimits

0x4d26,	// (0x0002c175) form2_midp_time_pane_t1_ParamLimits

0xe5c3,	// (0x00035a12) main_idle_act4_pane_ParamLimits

0xe5c3,	// (0x00035a12) main_idle_act4_pane

0x91aa,	// (0x000305f9) popup_tb_extension_window_ParamLimits

0xa581,	// (0x000319d0) tb_ext_find_pane_ParamLimits

0xa581,	// (0x000319d0) tb_ext_find_pane

0x50da,	// (0x0002c529) ai_gene_pane_1_cp1

0xc5b5,	// (0x00033a04) ai_gene_pane_2_cp1

0x50e2,	// (0x0002c531) list_single_idle_plugin_calendar_pane

0x50eb,	// (0x0002c53a) list_single_idle_plugin_notification_pane

0x50f4,	// (0x0002c543) list_single_idle_plugin_player_pane

0xa5df,	// (0x00031a2e) list_single_idle_plugin_shortcut_pane_ParamLimits

0xa5df,	// (0x00031a2e) list_single_idle_plugin_shortcut_pane

0xa607,	// (0x00031a56) main_idle_act4_pane_t1

0xa61d,	// (0x00031a6c) main_idle_act4_pane_t2

0x0001,

0xfd24,	// (0x00037173) main_idle_act4_pane_t

0xa633,	// (0x00031a82) middle_sk_idle_act4_pane_ParamLimits

0xa633,	// (0x00031a82) middle_sk_idle_act4_pane

0xa64f,	// (0x00031a9e) popup_clock_digital_analogue_window_cp2

0xa677,	// (0x00031ac6) shortcut_wheel_idle_act4_pane_ParamLimits

0xa677,	// (0x00031ac6) shortcut_wheel_idle_act4_pane

0xe833,	// (0x00035c82) shortcut_wheel_idle_act4_pane_g1

0xe833,	// (0x00035c82) shortcut_wheel_idle_act4_pane_g2

0xe833,	// (0x00035c82) shortcut_wheel_idle_act4_pane_g3

0xe833,	// (0x00035c82) shortcut_wheel_idle_act4_pane_g4

0xe833,	// (0x00035c82) shortcut_wheel_idle_act4_pane_g5

0x5187,	// (0x0002c5d6) shortcut_wheel_idle_act4_pane_g6

0x518f,	// (0x0002c5de) shortcut_wheel_idle_act4_pane_g7

0x5197,	// (0x0002c5e6) shortcut_wheel_idle_act4_pane_g8

0x519f,	// (0x0002c5ee) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd29,	// (0x00037178) shortcut_wheel_idle_act4_pane_g

0x7f8a,	// (0x0002f3d9) middle_sk_idle_act4_pane_g1_ParamLimits

0x7f8a,	// (0x0002f3d9) middle_sk_idle_act4_pane_g1

0xa6f4,	// (0x00031b43) middle_sk_idle_act4_pane_g2_ParamLimits

0xa6f4,	// (0x00031b43) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4c,	// (0x0003719b) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4c,	// (0x0003719b) middle_sk_idle_act4_pane_g

0xa70c,	// (0x00031b5b) middle_sk_idle_act4_pane_t1_ParamLimits

0xa70c,	// (0x00031b5b) middle_sk_idle_act4_pane_t1

0xa748,	// (0x00031b97) grid_ai_shortcut_pane_ParamLimits

0xa748,	// (0x00031b97) grid_ai_shortcut_pane

0xa765,	// (0x00031bb4) list_highlight_pane_cp16_ParamLimits

0xa765,	// (0x00031bb4) list_highlight_pane_cp16

0xa772,	// (0x00031bc1) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xa772,	// (0x00031bc1) list_single_idle_plugin_shortcut_pane_g1

0xa77e,	// (0x00031bcd) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xa77e,	// (0x00031bcd) list_single_idle_plugin_shortcut_pane_g2

0xa79a,	// (0x00031be9) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xa79a,	// (0x00031be9) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd51,	// (0x000371a0) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd51,	// (0x000371a0) list_single_idle_plugin_shortcut_pane_g

0xa7af,	// (0x00031bfe) cell_ai_shortcut_pane_ParamLimits

0xa7af,	// (0x00031bfe) cell_ai_shortcut_pane

0xa7c5,	// (0x00031c14) cell_ai_shortcut_pane_g1_ParamLimits

0xa7c5,	// (0x00031c14) cell_ai_shortcut_pane_g1

0x50da,	// (0x0002c529) ai_gene_pane_1_cp2

0x52cf,	// (0x0002c71e) ai_gene_pane_2_cp2

0x52d7,	// (0x0002c726) list_highlight_pane_cp15

0x52e0,	// (0x0002c72f) list_single_idle_plugin_calendar_pane_g1

0x52d7,	// (0x0002c726) list_highlight_pane_cp17

0x52e8,	// (0x0002c737) list_single_idle_plugin_calendar_pane_g1_copy1

0x52f0,	// (0x0002c73f) list_single_idle_plugin_player_pane_g1

0xdf34,	// (0x00035383) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd58,	// (0x000371a7) list_single_idle_plugin_player_pane_g

0x52f8,	// (0x0002c747) list_single_idle_plugin_player_pane_t1

0x5306,	// (0x0002c755) list_single_idle_plugin_player_pane_t2

0x5314,	// (0x0002c763) list_single_idle_plugin_player_pane_t3

0x5322,	// (0x0002c771) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5d,	// (0x000371ac) list_single_idle_plugin_player_pane_t

0x5330,	// (0x0002c77f) wait_bar_pane_cp15

0x5338,	// (0x0002c787) grid_ai_notification_pane

0xdf34,	// (0x00035383) list_single_idle_plugin_notification_pane_g1

0xa7e7,	// (0x00031c36) cell_ai_notification_pane_ParamLimits

0xa7e7,	// (0x00031c36) cell_ai_notification_pane

0x534e,	// (0x0002c79d) cell_ai_notification_pane_g1

0x5356,	// (0x0002c7a5) cell_ai_notification_pane_t1

0xa7f4,	// (0x00031c43) tb_ext_find_button_pane

0xa7fc,	// (0x00031c4b) tb_ext_find_pane_g1

0xa804,	// (0x00031c53) tb_ext_find_pane_t1

0xc046,	// (0x00033495) tb_ext_find_button_pane_g1

0x5382,	// (0x0002c7d1) tb_ext_find_button_pane_g2

0x0001,

0xfd66,	// (0x000371b5) tb_ext_find_button_pane_g

0xa607,	// (0x00031a56) main_idle_act4_pane_t1_ParamLimits

0xa61d,	// (0x00031a6c) main_idle_act4_pane_t2_ParamLimits

0xfd24,	// (0x00037173) main_idle_act4_pane_t_ParamLimits

0xa64f,	// (0x00031a9e) popup_clock_digital_analogue_window_cp2_ParamLimits

0xa667,	// (0x00031ab6) sat_plugin_idle_act4_pane_ParamLimits

0xa667,	// (0x00031ab6) sat_plugin_idle_act4_pane

0xa812,	// (0x00031c61) sat_plugin_idle_act4_pane_t1_ParamLimits

0xa812,	// (0x00031c61) sat_plugin_idle_act4_pane_t1

0xa82a,	// (0x00031c79) sat_plugin_idle_act4_pane_t2_ParamLimits

0xa82a,	// (0x00031c79) sat_plugin_idle_act4_pane_t2

0xa842,	// (0x00031c91) sat_plugin_idle_act4_pane_t3_ParamLimits

0xa842,	// (0x00031c91) sat_plugin_idle_act4_pane_t3

0xa85a,	// (0x00031ca9) sat_plugin_idle_act4_pane_t4_ParamLimits

0xa85a,	// (0x00031ca9) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6b,	// (0x000371ba) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6b,	// (0x000371ba) sat_plugin_idle_act4_pane_t

0x058c,	// (0x000279db) popup_battery_window_ParamLimits

0x058c,	// (0x000279db) popup_battery_window

0xb640,	// (0x00032a8f) bg_popup_sub_pane_cp25_ParamLimits

0xb640,	// (0x00032a8f) bg_popup_sub_pane_cp25

0x53d7,	// (0x0002c826) popup_battery_window_g1_ParamLimits

0x53d7,	// (0x0002c826) popup_battery_window_g1

0x53e3,	// (0x0002c832) popup_battery_window_t1_ParamLimits

0x53e3,	// (0x0002c832) popup_battery_window_t1

0x53f5,	// (0x0002c844) popup_battery_window_t2_ParamLimits

0x53f5,	// (0x0002c844) popup_battery_window_t2

0x0001,

0xfd74,	// (0x000371c3) popup_battery_window_t_ParamLimits

0xfd74,	// (0x000371c3) popup_battery_window_t

0x8978,	// (0x0002fdc7) midp_canvas_pane_ParamLimits

0x89d3,	// (0x0002fe22) midp_keypad_pane_ParamLimits

0x89d3,	// (0x0002fe22) midp_keypad_pane

0xbc66,	// (0x000330b5) main_midp_pane_ParamLimits

0xe53c,	// (0x0003598b) signal_pane_g2_cp_ParamLimits

0xa872,	// (0x00031cc1) aid_size_cell_midp_keypad_ParamLimits

0xa872,	// (0x00031cc1) aid_size_cell_midp_keypad

0xa890,	// (0x00031cdf) midp_keyp_game_grid_pane_ParamLimits

0xa890,	// (0x00031cdf) midp_keyp_game_grid_pane

0xa8b7,	// (0x00031d06) midp_keyp_rocker_pane_ParamLimits

0xa8b7,	// (0x00031d06) midp_keyp_rocker_pane

0xa910,	// (0x00031d5f) midp_keyp_sk_left_pane_ParamLimits

0xa910,	// (0x00031d5f) midp_keyp_sk_left_pane

0xa964,	// (0x00031db3) midp_keyp_sk_right_pane_ParamLimits

0xa964,	// (0x00031db3) midp_keyp_sk_right_pane

0xae4c,	// (0x0003229b) bg_button_pane_cp03

0xa9b8,	// (0x00031e07) midp_keyp_sk_left_pane_g1

0xae4c,	// (0x0003229b) bg_button_pane_cp04

0xa9b8,	// (0x00031e07) midp_keyp_sk_right_pane_g1

0xe833,	// (0x00035c82) midp_keyp_rocker_pane_g1

0xa9c1,	// (0x00031e10) keyp_game_cell_pane_ParamLimits

0xa9c1,	// (0x00031e10) keyp_game_cell_pane

0xae4c,	// (0x0003229b) bg_button_pane_cp02

0xa9e5,	// (0x00031e34) keyp_game_cell_pane_g1

0x7469,	// (0x0002e8b8) popup_fep_vkb2_window_ParamLimits

0x7469,	// (0x0002e8b8) popup_fep_vkb2_window

0x7f98,	// (0x0002f3e7) aid_size_cell_vkb2_ParamLimits

0x7f98,	// (0x0002f3e7) aid_size_cell_vkb2

0x7fce,	// (0x0002f41d) popup_fep_vkb2_window_g1_ParamLimits

0x7fce,	// (0x0002f41d) popup_fep_vkb2_window_g1

0x801e,	// (0x0002f46d) vkb2_area_bottom_pane_ParamLimits

0x801e,	// (0x0002f46d) vkb2_area_bottom_pane

0x8072,	// (0x0002f4c1) vkb2_area_keypad_pane_ParamLimits

0x8072,	// (0x0002f4c1) vkb2_area_keypad_pane

0x80ba,	// (0x0002f509) vkb2_area_top_pane_ParamLimits

0x80ba,	// (0x0002f509) vkb2_area_top_pane

0x8140,	// (0x0002f58f) vkb2_top_entry_pane_ParamLimits

0x8140,	// (0x0002f58f) vkb2_top_entry_pane

0x816d,	// (0x0002f5bc) vkb2_top_grid_left_pane_ParamLimits

0x816d,	// (0x0002f5bc) vkb2_top_grid_left_pane

0x818d,	// (0x0002f5dc) vkb2_top_grid_right_pane_ParamLimits

0x818d,	// (0x0002f5dc) vkb2_top_grid_right_pane

0x3b68,	// (0x0002afb7) vkb2_cell_keypad_pane_ParamLimits

0x3b68,	// (0x0002afb7) vkb2_cell_keypad_pane

0x81d3,	// (0x0002f622) vkb2_area_bottom_grid_pane_ParamLimits

0x81d3,	// (0x0002f622) vkb2_area_bottom_grid_pane

0x81fd,	// (0x0002f64c) vkb2_area_bottom_pane_g1_ParamLimits

0x81fd,	// (0x0002f64c) vkb2_area_bottom_pane_g1

0x8223,	// (0x0002f672) vkb2_area_bottom_pane_g2_ParamLimits

0x8223,	// (0x0002f672) vkb2_area_bottom_pane_g2

0x8254,	// (0x0002f6a3) vkb2_area_bottom_pane_g3_ParamLimits

0x8254,	// (0x0002f6a3) vkb2_area_bottom_pane_g3

0x0002,

0xfd79,	// (0x000371c8) vkb2_area_bottom_pane_g_ParamLimits

0xfd79,	// (0x000371c8) vkb2_area_bottom_pane_g

0x3d12,	// (0x0002b161) vkb2_top_cell_left_pane_ParamLimits

0x3d12,	// (0x0002b161) vkb2_top_cell_left_pane

0xa9ee,	// (0x00031e3d) vkb2_top_entry_pane_g1_ParamLimits

0xa9ee,	// (0x00031e3d) vkb2_top_entry_pane_g1

0xa9fc,	// (0x00031e4b) vkb2_top_entry_pane_t1_ParamLimits

0xa9fc,	// (0x00031e4b) vkb2_top_entry_pane_t1

0x55a6,	// (0x0002c9f5) vkb2_top_entry_pane_t2_ParamLimits

0x55a6,	// (0x0002c9f5) vkb2_top_entry_pane_t2

0x55d8,	// (0x0002ca27) vkb2_top_entry_pane_t3_ParamLimits

0x55d8,	// (0x0002ca27) vkb2_top_entry_pane_t3

0x0002,

0xfd80,	// (0x000371cf) vkb2_top_entry_pane_t_ParamLimits

0xfd80,	// (0x000371cf) vkb2_top_entry_pane_t

0x82be,	// (0x0002f70d) vkb2_top_grid_right_pane_g1_ParamLimits

0x82be,	// (0x0002f70d) vkb2_top_grid_right_pane_g1

0x3d75,	// (0x0002b1c4) vkb2_top_grid_right_pane_g2_ParamLimits

0x3d75,	// (0x0002b1c4) vkb2_top_grid_right_pane_g2

0x3d8d,	// (0x0002b1dc) vkb2_top_grid_right_pane_g3_ParamLimits

0x3d8d,	// (0x0002b1dc) vkb2_top_grid_right_pane_g3

0x82d4,	// (0x0002f723) vkb2_top_grid_right_pane_g4_ParamLimits

0x82d4,	// (0x0002f723) vkb2_top_grid_right_pane_g4

0x0003,

0xfd87,	// (0x000371d6) vkb2_top_grid_right_pane_g_ParamLimits

0xfd87,	// (0x000371d6) vkb2_top_grid_right_pane_g

0x3dbb,	// (0x0002b20a) vkb2_top_cell_left_pane_g1

0x3dd2,	// (0x0002b221) vkb2_cell_keypad_pane_g1_ParamLimits

0x3dd2,	// (0x0002b221) vkb2_cell_keypad_pane_g1

0x55ee,	// (0x0002ca3d) vkb2_cell_keypad_pane_t1_ParamLimits

0x55ee,	// (0x0002ca3d) vkb2_cell_keypad_pane_t1

0x3de0,	// (0x0002b22f) vkb2_cell_bottom_grid_pane_ParamLimits

0x3de0,	// (0x0002b22f) vkb2_cell_bottom_grid_pane

0x3e19,	// (0x0002b268) vkb2_cell_bottom_grid_pane_g1

0xa698,	// (0x00031ae7) aid_call2_pane_cp02

0xa6a0,	// (0x00031aef) aid_call_pane_cp02

0xa6a8,	// (0x00031af7) clock_digital_number_pane_cp10

0xa6b0,	// (0x00031aff) clock_digital_number_pane_cp11

0xa6b8,	// (0x00031b07) clock_digital_number_pane_cp12

0xa6c0,	// (0x00031b0f) clock_digital_number_pane_cp13

0xa6c8,	// (0x00031b17) clock_digital_separator_pane_cp10

0xc046,	// (0x00033495) popup_clock_digital_analogue_window_cp2_g1

0xc046,	// (0x00033495) popup_clock_digital_analogue_window_cp2_g2

0xa6d0,	// (0x00031b1f) popup_clock_digital_analogue_window_cp2_g3

0xc046,	// (0x00033495) popup_clock_digital_analogue_window_cp2_g4

0xa6d0,	// (0x00031b1f) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3c,	// (0x0003718b) popup_clock_digital_analogue_window_cp2_g

0xa6d8,	// (0x00031b27) popup_clock_digital_analogue_window_cp2_t1

0xa6e6,	// (0x00031b35) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd47,	// (0x00037196) popup_clock_digital_analogue_window_cp2_t

0xe833,	// (0x00035c82) clock_digital_number_pane_cp10_g1

0xe833,	// (0x00035c82) clock_digital_number_pane_cp10_g2

0x0001,

0xfb70,	// (0x00036fbf) clock_digital_number_pane_cp10_g

0xe833,	// (0x00035c82) clock_digital_separator_pane_cp10_g1

0xe833,	// (0x00035c82) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb70,	// (0x00036fbf) clock_digital_separator_pane_cp10_g

0x38f5,	// (0x0002ad44) uniindi_top_pane_g3

0x3906,	// (0x0002ad55) uniindi_top_pane_g4

0x3bf3,	// (0x0002b042) vkb2_row_keypad_pane_ParamLimits

0x3bf3,	// (0x0002b042) vkb2_row_keypad_pane

0x3e35,	// (0x0002b284) vkb2_cell_t_keypad_pane_ParamLimits

0x3e35,	// (0x0002b284) vkb2_cell_t_keypad_pane

0x3e45,	// (0x0002b294) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x3e45,	// (0x0002b294) vkb2_cell_t_keypad_pane_cp08

0x3e58,	// (0x0002b2a7) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x3e58,	// (0x0002b2a7) vkb2_cell_t_keypad_pane_cp09

0x3e6c,	// (0x0002b2bb) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x3e6c,	// (0x0002b2bb) vkb2_cell_t_keypad_pane_cp01

0x3e7d,	// (0x0002b2cc) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x3e7d,	// (0x0002b2cc) vkb2_cell_t_keypad_pane_cp02

0x3e8e,	// (0x0002b2dd) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x3e8e,	// (0x0002b2dd) vkb2_cell_t_keypad_pane_cp03

0x3e9f,	// (0x0002b2ee) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x3e9f,	// (0x0002b2ee) vkb2_cell_t_keypad_pane_cp04

0x3eb0,	// (0x0002b2ff) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x3eb0,	// (0x0002b2ff) vkb2_cell_t_keypad_pane_cp05

0x3ec1,	// (0x0002b310) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x3ec1,	// (0x0002b310) vkb2_cell_t_keypad_pane_cp06

0x3ed2,	// (0x0002b321) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x3ed2,	// (0x0002b321) vkb2_cell_t_keypad_pane_cp07

0x3ee3,	// (0x0002b332) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x3ee3,	// (0x0002b332) vkb2_cell_t_keypad_pane_cp10

0x2c2c,	// (0x0002a07b) vkb2_cell_t_keypad_pane_g1

0x5605,	// (0x0002ca54) vkb2_cell_t_keypad_pane_t1

0x04c7,	// (0x00027916) popup_grid_graphic2_window

0xaa35,	// (0x00031e84) aid_size_cell_graphic2_ParamLimits

0xaa35,	// (0x00031e84) aid_size_cell_graphic2

0xd038,	// (0x00034487) bg_popup_window_pane_cp21_ParamLimits

0xd038,	// (0x00034487) bg_popup_window_pane_cp21

0xaa67,	// (0x00031eb6) graphic2_pages_pane_ParamLimits

0xaa67,	// (0x00031eb6) graphic2_pages_pane

0xaabd,	// (0x00031f0c) grid_graphic2_control_pane_ParamLimits

0xaabd,	// (0x00031f0c) grid_graphic2_control_pane

0xaaf1,	// (0x00031f40) grid_graphic2_pane_ParamLimits

0xaaf1,	// (0x00031f40) grid_graphic2_pane

0xab64,	// (0x00031fb3) cell_graphic2_pane

0xae4c,	// (0x0003229b) main_comp_mode_pane

0x3084,	// (0x0002a4d3) list_ai3_gene_pane_ParamLimits

0xa3df,	// (0x0003182e) bg_popup_window_pane_cp19_ParamLimits

0x345a,	// (0x0002a8a9) bg_touch_area_indi_pane_ParamLimits

0x345a,	// (0x0002a8a9) bg_touch_area_indi_pane

0x3470,	// (0x0002a8bf) bg_touch_area_indi_pane_cp01_ParamLimits

0x3470,	// (0x0002a8bf) bg_touch_area_indi_pane_cp01

0x3486,	// (0x0002a8d5) bg_touch_area_indi_pane_cp02_ParamLimits

0x3486,	// (0x0002a8d5) bg_touch_area_indi_pane_cp02

0x349e,	// (0x0002a8ed) bg_touch_area_indi_pane_cp03_ParamLimits

0x349e,	// (0x0002a8ed) bg_touch_area_indi_pane_cp03

0x34b8,	// (0x0002a907) popup_slider_window_g1_ParamLimits

0x34d4,	// (0x0002a923) popup_slider_window_g2_ParamLimits

0x34f0,	// (0x0002a93f) popup_slider_window_g3_ParamLimits

0xfce2,	// (0x00037131) popup_slider_window_g_ParamLimits

0x354c,	// (0x0002a99b) popup_slider_window_t1_ParamLimits

0x35c0,	// (0x0002aa0f) small_volume_slider_vertical_pane_ParamLimits

0xab64,	// (0x00031fb3) cell_graphic2_pane_ParamLimits

0xabbf,	// (0x0003200e) bg_button_pane_cp10_ParamLimits

0xabbf,	// (0x0003200e) bg_button_pane_cp10

0xabd2,	// (0x00032021) bg_button_pane_cp11_ParamLimits

0xabd2,	// (0x00032021) bg_button_pane_cp11

0xabe5,	// (0x00032034) graphic2_pages_pane_g1_ParamLimits

0xabe5,	// (0x00032034) graphic2_pages_pane_g1

0xac00,	// (0x0003204f) graphic2_pages_pane_g2_ParamLimits

0xac00,	// (0x0003204f) graphic2_pages_pane_g2

0x0001,

0xfd95,	// (0x000371e4) graphic2_pages_pane_g_ParamLimits

0xfd95,	// (0x000371e4) graphic2_pages_pane_g

0xac18,	// (0x00032067) graphic2_pages_pane_t1_ParamLimits

0xac18,	// (0x00032067) graphic2_pages_pane_t1

0xac30,	// (0x0003207f) cell_graphic2_control_pane_ParamLimits

0xac30,	// (0x0003207f) cell_graphic2_control_pane

0xac4a,	// (0x00032099) cell_graphic2_pane_g1_ParamLimits

0xac4a,	// (0x00032099) cell_graphic2_pane_g1

0x82ea,	// (0x0002f739) cell_graphic2_pane_g2_ParamLimits

0x82ea,	// (0x0002f739) cell_graphic2_pane_g2

0xa73b,	// (0x00031b8a) cell_graphic2_pane_g3_ParamLimits

0xa73b,	// (0x00031b8a) cell_graphic2_pane_g3

0x82f7,	// (0x0002f746) cell_graphic2_pane_g4_ParamLimits

0x82f7,	// (0x0002f746) cell_graphic2_pane_g4

0xac57,	// (0x000320a6) cell_graphic2_pane_g5_ParamLimits

0xac57,	// (0x000320a6) cell_graphic2_pane_g5

0x0004,

0xfd9a,	// (0x000371e9) cell_graphic2_pane_g_ParamLimits

0xfd9a,	// (0x000371e9) cell_graphic2_pane_g

0xac77,	// (0x000320c6) cell_graphic2_pane_t1_ParamLimits

0xac77,	// (0x000320c6) cell_graphic2_pane_t1

0xd672,	// (0x00034ac1) grid_highlight_pane_cp11_ParamLimits

0xd672,	// (0x00034ac1) grid_highlight_pane_cp11

0xbb0e,	// (0x00032f5d) bg_button_pane_cp05

0xac8e,	// (0x000320dd) cell_graphic2_control_pane_g1

0xe833,	// (0x00035c82) bg_touch_area_indi_pane_g1

0x5863,	// (0x0002ccb2) aid_cmod_rocker_key_size

0x586d,	// (0x0002ccbc) aid_cmode_itu_key_size

0x5877,	// (0x0002ccc6) main_cmode_video_pane

0x5881,	// (0x0002ccd0) main_comp_mode_itu_pane

0x588d,	// (0x0002ccdc) main_comp_mode_rocker_pane

0x5899,	// (0x0002cce8) cell_cmode_rocker_pane_ParamLimits

0x5899,	// (0x0002cce8) cell_cmode_rocker_pane

0x58ab,	// (0x0002ccfa) cell_cmode_itu_pane_ParamLimits

0x58ab,	// (0x0002ccfa) cell_cmode_itu_pane

0xbb0e,	// (0x00032f5d) bg_button_pane_cp06_ParamLimits

0xbb0e,	// (0x00032f5d) bg_button_pane_cp06

0xe9da,	// (0x00035e29) cell_cmode_rocker_pane_g1_ParamLimits

0xe9da,	// (0x00035e29) cell_cmode_rocker_pane_g1

0x3755,	// (0x0002aba4) cell_cmode_rocker_pane_g2_ParamLimits

0x3755,	// (0x0002aba4) cell_cmode_rocker_pane_g2

0x0001,

0xfda5,	// (0x000371f4) cell_cmode_rocker_pane_g_ParamLimits

0xfda5,	// (0x000371f4) cell_cmode_rocker_pane_g

0xae4c,	// (0x0003229b) bg_button_pane_cp07

0x58c0,	// (0x0002cd0f) cell_cmode_itu_pane_g1

0x58c9,	// (0x0002cd18) cell_cmode_itu_pane_t1

0x58d7,	// (0x0002cd26) cell_cmode_itu_pane_t2

0x0001,

0xfdaa,	// (0x000371f9) cell_cmode_itu_pane_t

0x50a6,	// (0x0002c4f5) aid_touch_ctrl_left

0x50ae,	// (0x0002c4fd) aid_touch_ctrl_right

0xae4c,	// (0x0003229b) compa_mode_pane

0xac9b,	// (0x000320ea) aid_cmod_rocker_key_size_cp

0xaca5,	// (0x000320f4) aid_cmode_itu_key_size_cp

0x58f9,	// (0x0002cd48) compa_mode_pane_g1

0x5901,	// (0x0002cd50) compa_mode_pane_g2

0x5909,	// (0x0002cd58) compa_mode_pane_g3

0x0002,

0xfdaf,	// (0x000371fe) compa_mode_pane_g

0xacaf,	// (0x000320fe) main_comp_mode_itu_pane_cp

0xacb7,	// (0x00032106) main_comp_mode_rocker_pane_cp

0xacbf,	// (0x0003210e) cell_cmode_itu_pane_cp_ParamLimits

0xacbf,	// (0x0003210e) cell_cmode_itu_pane_cp

0xacd4,	// (0x00032123) cell_cmode_rocker_pane_cp_ParamLimits

0xacd4,	// (0x00032123) cell_cmode_rocker_pane_cp

0xbb0e,	// (0x00032f5d) bg_button_pane_cp06_cp_ParamLimits

0xbb0e,	// (0x00032f5d) bg_button_pane_cp06_cp

0xe9da,	// (0x00035e29) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xe9da,	// (0x00035e29) cell_cmode_rocker_pane_g1_cp

0xe833,	// (0x00035c82) cell_cmode_rocker_pane_g2_cp

0xae4c,	// (0x0003229b) bg_button_pane_cp07_cp

0xace6,	// (0x00032135) cell_cmode_itu_pane_g1_cp

0xacef,	// (0x0003213e) cell_cmode_itu_pane_t1_cp

0xacef,	// (0x0003213e) cell_cmode_itu_pane_t2_cp

0x9a26,	// (0x00030e75) settings_code_pane_cp2

0xaebc,	// (0x0003230b) bg_popup_window_pane_cp3_ParamLimits

0xb81a,	// (0x00032c69) heading_pane_cp3_ParamLimits

0xb826,	// (0x00032c75) listscroll_popup_graphic_pane_ParamLimits

0x2812,	// (0x00029c61) fep_hwr_aid_pane_ParamLimits

0x363c,	// (0x0002aa8b) aid_touch_sctrl_top_ParamLimits

0x3657,	// (0x0002aaa6) sctrl_sk_top_pane_g1_ParamLimits

0x2c2c,	// (0x0002a07b) sctrl_sk_top_pane_g2_ParamLimits

0xfcfb,	// (0x0003714a) sctrl_sk_top_pane_g_ParamLimits

0x3664,	// (0x0002aab3) sctrl_sk_top_pane_t1_ParamLimits

0x363c,	// (0x0002aa8b) aid_touch_sctrl_bottom_ParamLimits

0x3664,	// (0x0002aab3) sctrl_sk_bottom_pane_t1_ParamLimits

0x38c1,	// (0x0002ad10) aid_area_touch_clock

0x8102,	// (0x0002f551) aid_vkb2_area_top_pane_cell_ParamLimits

0x8102,	// (0x0002f551) aid_vkb2_area_top_pane_cell

0x81ad,	// (0x0002f5fc) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x81ad,	// (0x0002f5fc) aid_vkb2_area_bottom_pane_cell

0x555e,	// (0x0002c9ad) popup_char_count_window

0x5956,	// (0x0002cda5) popup_char_count_window_g1

0x595f,	// (0x0002cdae) popup_char_count_window_g2

0x5968,	// (0x0002cdb7) popup_char_count_window_g3

0x0002,

0xfdb6,	// (0x00037205) popup_char_count_window_g

0x5971,	// (0x0002cdc0) popup_char_count_window_t1

0x3990,	// (0x0002addf) popup_fep_char_preview_window_ParamLimits

0x3990,	// (0x0002addf) popup_fep_char_preview_window

0x8122,	// (0x0002f571) vkb2_top_candi_pane_ParamLimits

0x8122,	// (0x0002f571) vkb2_top_candi_pane

0xacfd,	// (0x0003214c) cell_vkb2_top_candi_pane_ParamLimits

0xacfd,	// (0x0003214c) cell_vkb2_top_candi_pane

0x3ef8,	// (0x0002b347) bg_popup_fep_char_preview_window_ParamLimits

0x3ef8,	// (0x0002b347) bg_popup_fep_char_preview_window

0x3f06,	// (0x0002b355) popup_fep_char_preview_window_t1_ParamLimits

0x3f06,	// (0x0002b355) popup_fep_char_preview_window_t1

0x59cc,	// (0x0002ce1b) bg_popup_fep_char_preview_window_g1

0x59d4,	// (0x0002ce23) bg_popup_fep_char_preview_window_g2

0x59dc,	// (0x0002ce2b) bg_popup_fep_char_preview_window_g3

0x59e4,	// (0x0002ce33) bg_popup_fep_char_preview_window_g4

0x59ec,	// (0x0002ce3b) bg_popup_fep_char_preview_window_g5

0x3f40,	// (0x0002b38f) bg_popup_fep_char_preview_window_g6

0x59f4,	// (0x0002ce43) bg_popup_fep_char_preview_window_g7

0x59fc,	// (0x0002ce4b) bg_popup_fep_char_preview_window_g8

0x5a04,	// (0x0002ce53) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdbd,	// (0x0003720c) bg_popup_fep_char_preview_window_g

0x2c2c,	// (0x0002a07b) cell_vkb2_top_candi_pane_g1_ParamLimits

0x2c2c,	// (0x0002a07b) cell_vkb2_top_candi_pane_g1

0x2c3a,	// (0x0002a089) cell_vkb2_top_candi_pane_g2_ParamLimits

0x2c3a,	// (0x0002a089) cell_vkb2_top_candi_pane_g2

0x4d39,	// (0x0002c188) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4d39,	// (0x0002c188) cell_vkb2_top_candi_pane_g3

0x3f48,	// (0x0002b397) cell_vkb2_top_candi_pane_g4_ParamLimits

0x3f48,	// (0x0002b397) cell_vkb2_top_candi_pane_g4

0xec94,	// (0x000360e3) cell_vkb2_top_candi_pane_g5_ParamLimits

0xec94,	// (0x000360e3) cell_vkb2_top_candi_pane_g5

0x3f69,	// (0x0002b3b8) cell_vkb2_top_candi_pane_g6_ParamLimits

0x3f69,	// (0x0002b3b8) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd0,	// (0x0003721f) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd0,	// (0x0003721f) cell_vkb2_top_candi_pane_g

0x3f77,	// (0x0002b3c6) cell_vkb2_top_candi_pane_t1

0x20bf,	// (0x0002950e) aid_size_touch_slider_mark_ParamLimits

0x20bf,	// (0x0002950e) aid_size_touch_slider_mark

0xaaa3,	// (0x00031ef2) grid_graphic2_catg_pane_ParamLimits

0xaaa3,	// (0x00031ef2) grid_graphic2_catg_pane

0xab37,	// (0x00031f86) popup_grid_graphic2_window_t1_ParamLimits

0xab37,	// (0x00031f86) popup_grid_graphic2_window_t1

0xab4d,	// (0x00031f9c) popup_grid_graphic2_window_t2_ParamLimits

0xab4d,	// (0x00031f9c) popup_grid_graphic2_window_t2

0x0001,

0xfd90,	// (0x000371df) popup_grid_graphic2_window_t_ParamLimits

0xfd90,	// (0x000371df) popup_grid_graphic2_window_t

0xbb0e,	// (0x00032f5d) bg_button_pane_cp05_ParamLimits

0xac8e,	// (0x000320dd) cell_graphic2_control_pane_g1_ParamLimits

0xad63,	// (0x000321b2) cell_graphic2_catg_pane_ParamLimits

0xad63,	// (0x000321b2) cell_graphic2_catg_pane

0xae4c,	// (0x0003229b) bg_button_pane_cp12

0xad75,	// (0x000321c4) cell_graphic2_catg_pane_g1

0x388d,	// (0x0002acdc) cell_tb_ext_pane_t1_ParamLimits

0x3d32,	// (0x0002b181) vkb2_top_cell_right_narrow_pane_ParamLimits

0x3d32,	// (0x0002b181) vkb2_top_cell_right_narrow_pane

0x3d4a,	// (0x0002b199) vkb2_top_cell_right_wide_pane_ParamLimits

0x3d4a,	// (0x0002b199) vkb2_top_cell_right_wide_pane

0x2804,	// (0x00029c53) bg_vkb2_func_pane_ParamLimits

0x2804,	// (0x00029c53) bg_vkb2_func_pane

0x3dbb,	// (0x0002b20a) vkb2_top_cell_left_pane_g1_ParamLimits

0x2804,	// (0x00029c53) bg_vkb2_fuc_pane_cp03_ParamLimits

0x2804,	// (0x00029c53) bg_vkb2_fuc_pane_cp03

0x3e19,	// (0x0002b268) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xcab9,	// (0x00033f08) bg_vkb2_func_pane_g1

0xcac1,	// (0x00033f10) bg_vkb2_func_pane_g2

0xcad1,	// (0x00033f20) bg_vkb2_func_pane_g3

0xcac9,	// (0x00033f18) bg_vkb2_func_pane_g4

0xcad9,	// (0x00033f28) bg_vkb2_func_pane_g5

0xcae1,	// (0x00033f30) bg_vkb2_func_pane_g6

0xcae9,	// (0x00033f38) bg_vkb2_func_pane_g7

0xcaf1,	// (0x00033f40) bg_vkb2_func_pane_g8

0xcab1,	// (0x00033f00) bg_vkb2_func_pane_g9

0x0008,

0x01a4,	// (0x000275f3) bg_vkb2_func_pane_g

0x2804,	// (0x00029c53) bg_vkb2_fuc_pane_cp01_ParamLimits

0x2804,	// (0x00029c53) bg_vkb2_fuc_pane_cp01

0x3dbb,	// (0x0002b20a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x3dbb,	// (0x0002b20a) vkb2_top_cell_right_wide_pane_g1

0x2804,	// (0x00029c53) bg_vkb2_fuc_pane_cp02_ParamLimits

0x2804,	// (0x00029c53) bg_vkb2_fuc_pane_cp02

0x3e19,	// (0x0002b268) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x3e19,	// (0x0002b268) vkb2_top_cell_right_narrow_pane_g1

0xa31f,	// (0x0003176e) aid_touch_area_decrease_ParamLimits

0xa31f,	// (0x0003176e) aid_touch_area_decrease

0xa353,	// (0x000317a2) aid_touch_area_increase_ParamLimits

0xa353,	// (0x000317a2) aid_touch_area_increase

0xa37b,	// (0x000317ca) aid_touch_area_mute_ParamLimits

0xa37b,	// (0x000317ca) aid_touch_area_mute

0xa3ab,	// (0x000317fa) aid_touch_area_slider_ParamLimits

0xa3ab,	// (0x000317fa) aid_touch_area_slider

0xa3eb,	// (0x0003183a) popup_slider_window_g4_ParamLimits

0xa3eb,	// (0x0003183a) popup_slider_window_g4

0xa413,	// (0x00031862) popup_slider_window_g5_ParamLimits

0xa413,	// (0x00031862) popup_slider_window_g5

0xa447,	// (0x00031896) popup_slider_window_g6_ParamLimits

0xa447,	// (0x00031896) popup_slider_window_g6

0x357a,	// (0x0002a9c9) popup_slider_window_t2_ParamLimits

0x357a,	// (0x0002a9c9) popup_slider_window_t2

0x0001,

0xfcef,	// (0x0003713e) popup_slider_window_t_ParamLimits

0xfcef,	// (0x0003713e) popup_slider_window_t

0xa463,	// (0x000318b2) slider_pane_ParamLimits

0xa463,	// (0x000318b2) slider_pane

0x5a27,	// (0x0002ce76) slider_pane_g1_ParamLimits

0x5a27,	// (0x0002ce76) slider_pane_g1

0x5a3b,	// (0x0002ce8a) slider_pane_g2_ParamLimits

0x5a3b,	// (0x0002ce8a) slider_pane_g2

0x5a51,	// (0x0002cea0) slider_pane_g3_ParamLimits

0x5a51,	// (0x0002cea0) slider_pane_g3

0x0003,

0xfddd,	// (0x0003722c) slider_pane_g_ParamLimits

0xfddd,	// (0x0003722c) slider_pane_g

0x91f2,	// (0x00030641) popup_tb_float_extension_window_ParamLimits

0x91f2,	// (0x00030641) popup_tb_float_extension_window

0x5a7d,	// (0x0002cecc) aid_size_cell_tb_float_ext

0xae4c,	// (0x0003229b) bg_popup_sub_window_cp28

0x5a89,	// (0x0002ced8) grid_tb_float_ext_pane

0x5a93,	// (0x0002cee2) cell_tb_float_ext_pane_ParamLimits

0x5a93,	// (0x0002cee2) cell_tb_float_ext_pane

0x5aad,	// (0x0002cefc) cell_tb_float_ext_pane_g1

0x5ab6,	// (0x0002cf05) grid_highlight_pane_cp12

0x7e90,	// (0x0002f2df) cell_last_hwr_side_pane_ParamLimits

0x7e90,	// (0x0002f2df) cell_last_hwr_side_pane

0xe833,	// (0x00035c82) cell_last_hwr_side_pane_g1

0x5abf,	// (0x0002cf0e) cell_last_hwr_side_pane_g2

0x0001,

0xfde6,	// (0x00037235) cell_last_hwr_side_pane_g

0x8289,	// (0x0002f6d8) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8289,	// (0x0002f6d8) vkb2_area_bottom_space_btn_pane

0x2c2c,	// (0x0002a07b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x5605,	// (0x0002ca54) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x3f77,	// (0x0002b3c6) cell_vkb2_top_candi_pane_t1_ParamLimits

0x3f96,	// (0x0002b3e5) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x3f96,	// (0x0002b3e5) vkb2_area_bottom_space_btn_pane_g1

0x3fd0,	// (0x0002b41f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x3fd0,	// (0x0002b41f) vkb2_area_bottom_space_btn_pane_g2

0x4006,	// (0x0002b455) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x4006,	// (0x0002b455) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdeb,	// (0x0003723a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdeb,	// (0x0003723a) vkb2_area_bottom_space_btn_pane_g

0x28c7,	// (0x00029d16) cel_fep_hwr_func_pane_ParamLimits

0x28c7,	// (0x00029d16) cel_fep_hwr_func_pane

0x7e65,	// (0x0002f2b4) cell_hwr_side_button_pane_ParamLimits

0x7e65,	// (0x0002f2b4) cell_hwr_side_button_pane

0x38c1,	// (0x0002ad10) aid_area_touch_clock_ParamLimits

0xb640,	// (0x00032a8f) bg_uniindi_top_pane_ParamLimits

0x38d3,	// (0x0002ad22) uniindi_top_pane_g1_ParamLimits

0x38e9,	// (0x0002ad38) uniindi_top_pane_g2_ParamLimits

0x38f5,	// (0x0002ad44) uniindi_top_pane_g3_ParamLimits

0x3906,	// (0x0002ad55) uniindi_top_pane_g4_ParamLimits

0xfd16,	// (0x00037165) uniindi_top_pane_g_ParamLimits

0x3913,	// (0x0002ad62) uniindi_top_pane_t1_ParamLimits

0xb640,	// (0x00032a8f) bg_vkb2_func_pane_cp01_ParamLimits

0xb640,	// (0x00032a8f) bg_vkb2_func_pane_cp01

0x5ac8,	// (0x0002cf17) cel_fep_hwr_func_pane_g1_ParamLimits

0x5ac8,	// (0x0002cf17) cel_fep_hwr_func_pane_g1

0xb640,	// (0x00032a8f) bg_vkb2_func_pane_cp02_ParamLimits

0xb640,	// (0x00032a8f) bg_vkb2_func_pane_cp02

0x5ac8,	// (0x0002cf17) cell_hwr_side_button_pane_g1_ParamLimits

0x5ac8,	// (0x0002cf17) cell_hwr_side_button_pane_g1

0xc997,	// (0x00033de6) status_pane_g4_ParamLimits

0xc997,	// (0x00033de6) status_pane_g4

0xc9b1,	// (0x00033e00) status_pane_t1

0xe6b8,	// (0x00035b07) form2_midp_gauge_slider_cont_pane

0xe6c0,	// (0x00035b0f) form2_midp_gauge_slider_pane_t1_ParamLimits

0x9d1d,	// (0x0003116c) form2_midp_gauge_slider_pane_t2_ParamLimits

0x9d2f,	// (0x0003117e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb23,	// (0x00036f72) form2_midp_gauge_slider_pane_t_ParamLimits

0xe6d2,	// (0x00035b21) form2_midp_slider_pane_ParamLimits

0x3950,	// (0x0002ad9f) aid_size_cell_func_vkb2_ParamLimits

0x3950,	// (0x0002ad9f) aid_size_cell_func_vkb2

0x5a69,	// (0x0002ceb8) slider_pane_g4_ParamLimits

0x5a69,	// (0x0002ceb8) slider_pane_g4

0x8304,	// (0x0002f753) form2_midp_gauge_slider_pane_t2_cp01

0x8312,	// (0x0002f761) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8312,	// (0x0002f761) form2_midp_gauge_slider_pane_t3_cp01

0x407b,	// (0x0002b4ca) form2_midp_slider_pane_cp01

0xae4c,	// (0x0003229b) navi_smil_pane

0x5af8,	// (0x0002cf47) navi_smil_pane_g1

0x5b00,	// (0x0002cf4f) navi_smil_pane_t1

0x5ad6,	// (0x0002cf25) form2_midp_slider_pane_g1

0x5adf,	// (0x0002cf2e) form2_midp_slider_pane_g2

0x5ae7,	// (0x0002cf36) form2_midp_slider_pane_g3

0x5ad6,	// (0x0002cf25) form2_midp_slider_pane_g4

0xad7e,	// (0x000321cd) form2_midp_slider_pane_g5

0x0004,

0xfdf4,	// (0x00037243) form2_midp_slider_pane_g

0x4040,	// (0x0002b48f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x4040,	// (0x0002b48f) vkb2_area_bottom_space_btn_pane_g4

0x93ce,	// (0x0003081d) lc0_navi_pane_ParamLimits

0x93ce,	// (0x0003081d) lc0_navi_pane

0x9438,	// (0x00030887) lc0_stat_indi_pane_ParamLimits

0x9438,	// (0x00030887) lc0_stat_indi_pane

0x944d,	// (0x0003089c) ls0_title_pane_ParamLimits

0x944d,	// (0x0003089c) ls0_title_pane

0xbb0e,	// (0x00032f5d) bg_popup_sub_pane_cp14_ParamLimits

0x38a8,	// (0x0002acf7) list_uniindi_pane_ParamLimits

0x38b4,	// (0x0002ad03) uniindi_top_pane_ParamLimits

0x507e,	// (0x0002c4cd) list_single_uniindi_pane_g1_ParamLimits

0x5091,	// (0x0002c4e0) list_single_uniindi_pane_t1_ParamLimits

0x832f,	// (0x0002f77e) lc0_stat_clock_pane_ParamLimits

0x832f,	// (0x0002f77e) lc0_stat_clock_pane

0xad87,	// (0x000321d6) lc0_stat_indi_pane_g1_ParamLimits

0xad87,	// (0x000321d6) lc0_stat_indi_pane_g1

0xad94,	// (0x000321e3) lc0_stat_indi_pane_g2_ParamLimits

0xad94,	// (0x000321e3) lc0_stat_indi_pane_g2

0x0001,

0xfdff,	// (0x0003724e) lc0_stat_indi_pane_g_ParamLimits

0xfdff,	// (0x0003724e) lc0_stat_indi_pane_g

0x833c,	// (0x0002f78b) lc0_uni_indicator_pane_ParamLimits

0x833c,	// (0x0002f78b) lc0_uni_indicator_pane

0x5b0e,	// (0x0002cf5d) ls0_title_pane_g1_ParamLimits

0x5b0e,	// (0x0002cf5d) ls0_title_pane_g1

0xada1,	// (0x000321f0) ls0_title_pane_t1_ParamLimits

0xada1,	// (0x000321f0) ls0_title_pane_t1

0x8349,	// (0x0002f798) lc0_uni_indicator_pane_g1_ParamLimits

0x8349,	// (0x0002f798) lc0_uni_indicator_pane_g1

0x5b22,	// (0x0002cf71) lc0_stat_clock_pane_t1

0xae4c,	// (0x0003229b) main_ai5_pane

0x5b30,	// (0x0002cf7f) ai5_sk_pane_ParamLimits

0x5b30,	// (0x0002cf7f) ai5_sk_pane

0xadcf,	// (0x0003221e) cell_ai5_widget_pane_ParamLimits

0xadcf,	// (0x0003221e) cell_ai5_widget_pane

0x5b3d,	// (0x0002cf8c) aid_size_cell_widget_grid

0x5b4f,	// (0x0002cf9e) bg_ai5_widget_pane_ParamLimits

0x5b4f,	// (0x0002cf9e) bg_ai5_widget_pane

0xaef5,	// (0x00032344) cell_ai5_widget_pane_g2

0xaf05,	// (0x00032354) cell_ai5_widget_pane_g3

0xaf19,	// (0x00032368) cell_ai5_widget_pane_g4

0xaf25,	// (0x00032374) cell_ai5_widget_pane_g5

0xaf31,	// (0x00032380) cell_ai5_widget_pane_g6

0xaf3d,	// (0x0003238c) cell_ai5_widget_pane_g7

0xaf85,	// (0x000323d4) cell_ai5_widget_pane_t1_ParamLimits

0xaf85,	// (0x000323d4) cell_ai5_widget_pane_t1

0xafa2,	// (0x000323f1) cell_ai5_widget_pane_t2_ParamLimits

0xafa2,	// (0x000323f1) cell_ai5_widget_pane_t2

0xafba,	// (0x00032409) cell_ai5_widget_pane_t3_ParamLimits

0xafba,	// (0x00032409) cell_ai5_widget_pane_t3

0xafd2,	// (0x00032421) cell_ai5_widget_pane_t4_ParamLimits

0xafd2,	// (0x00032421) cell_ai5_widget_pane_t4

0xafec,	// (0x0003243b) cell_ai5_widget_pane_t5_ParamLimits

0xafec,	// (0x0003243b) cell_ai5_widget_pane_t5

0x5b5b,	// (0x0002cfaa) cell_ai5_widget_pane_t6_ParamLimits

0x5b5b,	// (0x0002cfaa) cell_ai5_widget_pane_t6

0x5b6d,	// (0x0002cfbc) cell_ai5_widget_pane_t7_ParamLimits

0x5b6d,	// (0x0002cfbc) cell_ai5_widget_pane_t7

0xb00b,	// (0x0003245a) cell_ai5_widget_pane_t8_ParamLimits

0xb00b,	// (0x0003245a) cell_ai5_widget_pane_t8

0x0009,

0xfe19,	// (0x00037268) cell_ai5_widget_pane_t_ParamLimits

0xfe19,	// (0x00037268) cell_ai5_widget_pane_t

0xb053,	// (0x000324a2) grid_ai5_widget_pane

0xbb0e,	// (0x00032f5d) highlight_cell_ai5_widget_pane_ParamLimits

0xbb0e,	// (0x00032f5d) highlight_cell_ai5_widget_pane

0xb06b,	// (0x000324ba) ai5_sk_left_pane

0xb075,	// (0x000324c4) ai5_sk_middle_pane

0xb07f,	// (0x000324ce) ai5_sk_right_pane

0x5b86,	// (0x0002cfd5) bg_ai5_widget_pane_g1_ParamLimits

0x5b86,	// (0x0002cfd5) bg_ai5_widget_pane_g1

0x5b92,	// (0x0002cfe1) bg_ai5_widget_pane_g2_ParamLimits

0x5b92,	// (0x0002cfe1) bg_ai5_widget_pane_g2

0x5b9e,	// (0x0002cfed) bg_ai5_widget_pane_g3_ParamLimits

0x5b9e,	// (0x0002cfed) bg_ai5_widget_pane_g3

0x5baa,	// (0x0002cff9) bg_ai5_widget_pane_g4_ParamLimits

0x5baa,	// (0x0002cff9) bg_ai5_widget_pane_g4

0x5bb6,	// (0x0002d005) bg_ai5_widget_pane_g5_ParamLimits

0x5bb6,	// (0x0002d005) bg_ai5_widget_pane_g5

0x5bc2,	// (0x0002d011) bg_ai5_widget_pane_g6_ParamLimits

0x5bc2,	// (0x0002d011) bg_ai5_widget_pane_g6

0x5bce,	// (0x0002d01d) bg_ai5_widget_pane_g7_ParamLimits

0x5bce,	// (0x0002d01d) bg_ai5_widget_pane_g7

0x5bda,	// (0x0002d029) bg_ai5_widget_pane_g8_ParamLimits

0x5bda,	// (0x0002d029) bg_ai5_widget_pane_g8

0x5be6,	// (0x0002d035) bg_ai5_widget_pane_g9_ParamLimits

0x5be6,	// (0x0002d035) bg_ai5_widget_pane_g9

0x0008,

0xfe2e,	// (0x0003727d) bg_ai5_widget_pane_g_ParamLimits

0xfe2e,	// (0x0003727d) bg_ai5_widget_pane_g

0x5bf2,	// (0x0002d041) cell_shortcut_ai5_widget_pane_ParamLimits

0x5bf2,	// (0x0002d041) cell_shortcut_ai5_widget_pane

0xb549,	// (0x00032998) bg_cell_shortcut_ai5_widget_pane

0x5c04,	// (0x0002d053) cell_grid_ai5_widget_pane_g1

0x5c0d,	// (0x0002d05c) highlight_cell_shortcut_ai5_widget_pane

0xcab9,	// (0x00033f08) ai5_sk_left_pane_g1

0x5c15,	// (0x0002d064) ai5_sk_left_pane_g2

0x5c1d,	// (0x0002d06c) ai5_sk_left_pane_g3

0x5c25,	// (0x0002d074) ai5_sk_left_pane_g4

0x0003,

0xfe41,	// (0x00037290) ai5_sk_left_pane_g

0x5c2d,	// (0x0002d07c) ai5_sk_left_pane_t1

0xcac1,	// (0x00033f10) ai5_sk_right_pane_g1

0x5c3b,	// (0x0002d08a) ai5_sk_right_pane_g2

0x5c43,	// (0x0002d092) ai5_sk_right_pane_g3

0x5c4b,	// (0x0002d09a) ai5_sk_right_pane_g4

0x0003,

0xfe4a,	// (0x00037299) ai5_sk_right_pane_g

0x5c53,	// (0x0002d0a2) ai5_sk_right_pane_t1

0xcac1,	// (0x00033f10) ai5_sk_middle_pane_g1

0xcab9,	// (0x00033f08) ai5_sk_middle_pane_g2

0xcad9,	// (0x00033f28) ai5_sk_middle_pane_g3

0x5c43,	// (0x0002d092) ai5_sk_middle_pane_g4

0x5c1d,	// (0x0002d06c) ai5_sk_middle_pane_g5

0x5c61,	// (0x0002d0b0) ai5_sk_middle_pane_g6

0xb0a6,	// (0x000324f5) ai5_sk_middle_pane_g7

0x0006,

0xfe53,	// (0x000372a2) ai5_sk_middle_pane_g

0x92ba,	// (0x00030709) aid_touch_area_size_lc0_ParamLimits

0x92ba,	// (0x00030709) aid_touch_area_size_lc0

0x2c5b,	// (0x0002a0aa) cell_hwr_candidate_pane_t1_ParamLimits

0xc8b9,	// (0x00033d08) aid_touch_navi_pane

0x953f,	// (0x0003098e) status_dt_navi_pane_ParamLimits

0x953f,	// (0x0003098e) status_dt_navi_pane

0x9557,	// (0x000309a6) status_dt_sta_pane_ParamLimits

0x9557,	// (0x000309a6) status_dt_sta_pane

0xb0ae,	// (0x000324fd) dt_sta_controll_pane

0xb0bb,	// (0x0003250a) dt_sta_indi_pane

0xb0c8,	// (0x00032517) dt_sta_title_pane

0xb640,	// (0x00032a8f) bg_dt_sta_indi_pane_ParamLimits

0xb640,	// (0x00032a8f) bg_dt_sta_indi_pane

0x5c69,	// (0x0002d0b8) dt_sta_battery_pane

0xb0da,	// (0x00032529) dt_sta_indi_pane_g1

0xb0e3,	// (0x00032532) dt_sta_indi_pane_g2

0xb0ec,	// (0x0003253b) dt_sta_indi_pane_g3

0x0002,

0xfe62,	// (0x000372b1) dt_sta_indi_pane_g

0xb0f5,	// (0x00032544) dt_sta_signal_pane

0xbb0e,	// (0x00032f5d) bg_dt_sta_title_pane_ParamLimits

0xbb0e,	// (0x00032f5d) bg_dt_sta_title_pane

0xd744,	// (0x00034b93) dt_sta_title_pane_g1

0xb0fe,	// (0x0003254d) dt_sta_title_pane_t1_ParamLimits

0xb0fe,	// (0x0003254d) dt_sta_title_pane_t1

0xae4c,	// (0x0003229b) bg_dt_sta_control_pane

0xb113,	// (0x00032562) dt_sta_controll_pane_g1

0xb11c,	// (0x0003256b) bg_dt_sta_title_pane_g1

0xb125,	// (0x00032574) bg_dt_sta_title_pane_g2

0xb12e,	// (0x0003257d) bg_dt_sta_title_pane_g3

0x0002,

0xfe69,	// (0x000372b8) bg_dt_sta_title_pane_g

0xe833,	// (0x00035c82) bg_dt_sta_indi_pane_g1

0x5c71,	// (0x0002d0c0) dt_sta_signal_pane_g1

0x5c79,	// (0x0002d0c8) dt_sta_signal_pane_g2

0x0001,

0xfe70,	// (0x000372bf) dt_sta_signal_pane_g

0x5c81,	// (0x0002d0d0) dt_sta_battery_pane_g1

0x5c8a,	// (0x0002d0d9) dt_sta_battery_pane_t1

0xe833,	// (0x00035c82) bg_dt_sta_control_pane_g1

0xc0c4,	// (0x00033513) fep_china_uni_eep_pane

0xc0cc,	// (0x0003351b) fep_china_uni_entry_pane_ParamLimits

0xc0dc,	// (0x0003352b) popup_fep_china_uni_window_g1_ParamLimits

0xc0ec,	// (0x0003353b) popup_fep_china_uni_window_g2_ParamLimits

0xc0ec,	// (0x0003353b) popup_fep_china_uni_window_g2

0x0001,

0xf75d,	// (0x00036bac) popup_fep_china_uni_window_g_ParamLimits

0xf75d,	// (0x00036bac) popup_fep_china_uni_window_g

0x5c99,	// (0x0002d0e8) fep_china_uni_eep_pane_g1

0x5ca1,	// (0x0002d0f0) fep_china_uni_eep_pane_t1

0x5aef,	// (0x0002cf3e) aid_touch_area_size_smil_player

0xc96a,	// (0x00033db9) lc0_clock_pane

0xc9a5,	// (0x00033df4) status_pane_g5_ParamLimits

0xc9a5,	// (0x00033df4) status_pane_g5

0x8c1c,	// (0x0003006b) popup_keymap_window

0xc983,	// (0x00033dd2) status_icon_pane

0xaf05,	// (0x00032354) cell_ai5_widget_pane_g3_ParamLimits

0xaf19,	// (0x00032368) cell_ai5_widget_pane_g4_ParamLimits

0xaf25,	// (0x00032374) cell_ai5_widget_pane_g5_ParamLimits

0xaf49,	// (0x00032398) cell_ai5_widget_pane_g8_ParamLimits

0xaf49,	// (0x00032398) cell_ai5_widget_pane_g8

0xaf5d,	// (0x000323ac) cell_ai5_widget_pane_g9_ParamLimits

0xaf5d,	// (0x000323ac) cell_ai5_widget_pane_g9

0xaf71,	// (0x000323c0) cell_ai5_widget_pane_g10_ParamLimits

0xaf71,	// (0x000323c0) cell_ai5_widget_pane_g10

0x5cb0,	// (0x0002d0ff) status_icon_pane_g1

0xae4c,	// (0x0003229b) bg_popup_sub_pane_cp13

0x5cb8,	// (0x0002d107) popup_keymap_window_t1

0x8a2b,	// (0x0002fe7a) control_pane_g6_ParamLimits

0x8a2b,	// (0x0002fe7a) control_pane_g6

0x8a38,	// (0x0002fe87) control_pane_g7_ParamLimits

0x8a38,	// (0x0002fe87) control_pane_g7

0x8a45,	// (0x0002fe94) control_pane_g8_ParamLimits

0x8a45,	// (0x0002fe94) control_pane_g8

0xb0ae,	// (0x000324fd) dt_sta_controll_pane_ParamLimits

0xb0bb,	// (0x0003250a) dt_sta_indi_pane_ParamLimits

0xb0c8,	// (0x00032517) dt_sta_title_pane_ParamLimits

0xba50,	// (0x00032e9f) aid_size_touch_scroll_bar_cale

0x05a0,	// (0x000279ef) popup_discreet_window_ParamLimits

0x05a0,	// (0x000279ef) popup_discreet_window

0x74af,	// (0x0002e8fe) popup_sk_window

0xd038,	// (0x00034487) bg_popup_sub_pane_cp28_ParamLimits

0xd038,	// (0x00034487) bg_popup_sub_pane_cp28

0x5cc6,	// (0x0002d115) popup_discreet_window_g1_ParamLimits

0x5cc6,	// (0x0002d115) popup_discreet_window_g1

0x5ce6,	// (0x0002d135) popup_discreet_window_t1_ParamLimits

0x5ce6,	// (0x0002d135) popup_discreet_window_t1

0x5d04,	// (0x0002d153) popup_discreet_window_t2_ParamLimits

0x5d04,	// (0x0002d153) popup_discreet_window_t2

0x0002,

0xfe75,	// (0x000372c4) popup_discreet_window_t_ParamLimits

0xfe75,	// (0x000372c4) popup_discreet_window_t

0x40b2,	// (0x0002b501) popup_sk_window_g1

0x40bc,	// (0x0002b50b) popup_sk_window_g2

0x0001,

0xfe7c,	// (0x000372cb) popup_sk_window_g

0x5d56,	// (0x0002d1a5) popup_sk_window_t1

0x5d64,	// (0x0002d1b3) popup_sk_window_t1_copy1

0xaef5,	// (0x00032344) cell_ai5_widget_pane_g2_ParamLimits

0xb01d,	// (0x0003246c) cell_ai5_widget_pane_t9_ParamLimits

0xb01d,	// (0x0003246c) cell_ai5_widget_pane_t9

0xae4c,	// (0x0003229b) main_fep_fshwr2_pane

0xb137,	// (0x00032586) aid_fshwr2_btn_pane

0xb13f,	// (0x0003258e) aid_fshwr2_syb_pane

0xb147,	// (0x00032596) aid_fshwr2_txt_pane

0xb14f,	// (0x0003259e) fshwr2_func_candi_pane

0xb159,	// (0x000325a8) fshwr2_hwr_syb_pane

0xb167,	// (0x000325b6) fshwr2_icf_pane

0xae4c,	// (0x0003229b) fshwr2_icf_bg_pane

0xb171,	// (0x000325c0) fshwr2_icf_pane_t1_ParamLimits

0xb171,	// (0x000325c0) fshwr2_icf_pane_t1

0xe833,	// (0x00035c82) fshwr2_func_candi_pane_g1

0x5d86,	// (0x0002d1d5) fshwr2_func_candi_row_pane_ParamLimits

0x5d86,	// (0x0002d1d5) fshwr2_func_candi_row_pane

0xb189,	// (0x000325d8) cell_fshwr2_syb_pane_ParamLimits

0xb189,	// (0x000325d8) cell_fshwr2_syb_pane

0xe9da,	// (0x00035e29) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe9da,	// (0x00035e29) fshwr2_hwr_syb_pane_g1

0xae4c,	// (0x0003229b) bg_popup_call_pane_cp01

0x5d97,	// (0x0002d1e6) fshwr2_func_candi_cell_pane_ParamLimits

0x5d97,	// (0x0002d1e6) fshwr2_func_candi_cell_pane

0x5dc8,	// (0x0002d217) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x5dc8,	// (0x0002d217) fshwr2_func_candi_cell_bg_pane

0x5de2,	// (0x0002d231) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x5de2,	// (0x0002d231) fshwr2_func_candi_cell_pane_g1

0x5e0a,	// (0x0002d259) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x5e0a,	// (0x0002d259) fshwr2_func_candi_cell_pane_t1

0xae4c,	// (0x0003229b) bg_button_pane_cp08

0xc533,	// (0x00033982) cell_fshwr2_syb_bg_pane

0xb1a3,	// (0x000325f2) cell_fshwr2_syb_bg_pane_g1

0xb1ab,	// (0x000325fa) cell_fshwr2_syb_bg_pane_t1

0xbb0e,	// (0x00032f5d) main_tmo_pane

0x9857,	// (0x00030ca6) uni_indicator_pane_g1_ParamLimits

0x986c,	// (0x00030cbb) uni_indicator_pane_g2_ParamLimits

0x9881,	// (0x00030cd0) uni_indicator_pane_g3_ParamLimits

0xda58,	// (0x00034ea7) uni_indicator_pane_g4_ParamLimits

0xda58,	// (0x00034ea7) uni_indicator_pane_g4

0xda6c,	// (0x00034ebb) uni_indicator_pane_g5_ParamLimits

0xda6c,	// (0x00034ebb) uni_indicator_pane_g5

0xda80,	// (0x00034ecf) uni_indicator_pane_g6_ParamLimits

0xda80,	// (0x00034ecf) uni_indicator_pane_g6

0xf955,	// (0x00036da4) uni_indicator_pane_g_ParamLimits

0xa2fb,	// (0x0003174a) popup_tmo_note_window_ParamLimits

0xa2fb,	// (0x0003174a) popup_tmo_note_window

0xae4c,	// (0x0003229b) fshwr2_bg_pane

0x5dfb,	// (0x0002d24a) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x5dfb,	// (0x0002d24a) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe81,	// (0x000372d0) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe81,	// (0x000372d0) fshwr2_func_candi_cell_pane_g

0xe833,	// (0x00035c82) bg_popup_window_pane_cp01

0x5e1d,	// (0x0002d26c) bg_popup_window_pane_g1_cp01

0x5e26,	// (0x0002d275) bg_popup_window_pane_cp22_ParamLimits

0x5e26,	// (0x0002d275) bg_popup_window_pane_cp22

0x5e34,	// (0x0002d283) listscroll_tmo_link_pane_ParamLimits

0x5e34,	// (0x0002d283) listscroll_tmo_link_pane

0x5e74,	// (0x0002d2c3) popup_tmo_note_window_g1_ParamLimits

0x5e74,	// (0x0002d2c3) popup_tmo_note_window_g1

0x5e81,	// (0x0002d2d0) tmo_note_info_pane_ParamLimits

0x5e81,	// (0x0002d2d0) tmo_note_info_pane

0xb1ba,	// (0x00032609) list_tmo_note_info_pane_g1_ParamLimits

0xb1ba,	// (0x00032609) list_tmo_note_info_pane_g1

0x5e9b,	// (0x0002d2ea) list_tmo_note_info_pane_g2_ParamLimits

0x5e9b,	// (0x0002d2ea) list_tmo_note_info_pane_g2

0x0001,

0xfe86,	// (0x000372d5) list_tmo_note_info_pane_g_ParamLimits

0xfe86,	// (0x000372d5) list_tmo_note_info_pane_g

0x5eb7,	// (0x0002d306) list_tmo_note_info_text_pane_ParamLimits

0x5eb7,	// (0x0002d306) list_tmo_note_info_text_pane

0x5ef9,	// (0x0002d348) list_tmo_link_pane

0x5f06,	// (0x0002d355) scroll_pane_cp20

0x5f13,	// (0x0002d362) list_single_tmo_link_pane_ParamLimits

0x5f13,	// (0x0002d362) list_single_tmo_link_pane

0x5f23,	// (0x0002d372) list_single_tmo_link_pane_t1

0x5f31,	// (0x0002d380) list_tmo_note_info_text_pane_t1_ParamLimits

0x5f31,	// (0x0002d380) list_tmo_note_info_text_pane_t1

0x8738,	// (0x0002fb87) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8738,	// (0x0002fb87) aid_size_touch_scroll_bar_cp01

0x79b0,	// (0x0002edff) aid_size_touch_slider_marker

0x749f,	// (0x0002e8ee) popup_settings_window_ParamLimits

0x749f,	// (0x0002e8ee) popup_settings_window

0x48e7,	// (0x0002bd36) popup_candi_list_indi_window

0xc8b9,	// (0x00033d08) aid_touch_navi_pane_ParamLimits

0x3610,	// (0x0002aa5f) rs_clock_indi_pane

0x3619,	// (0x0002aa68) sctrl_sk_bottom_pane_ParamLimits

0x362a,	// (0x0002aa79) sctrl_sk_top_pane_ParamLimits

0x39aa,	// (0x0002adf9) popup_fep_tooltip_window

0x5b3d,	// (0x0002cf8c) aid_size_cell_widget_grid_ParamLimits

0xaee9,	// (0x00032338) cell_ai5_widget_pane_g1_ParamLimits

0xaee9,	// (0x00032338) cell_ai5_widget_pane_g1

0xaf31,	// (0x00032380) cell_ai5_widget_pane_g6_ParamLimits

0xaf3d,	// (0x0003238c) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe04,	// (0x00037253) cell_ai5_widget_pane_g_ParamLimits

0xfe04,	// (0x00037253) cell_ai5_widget_pane_g

0xb041,	// (0x00032490) cell_ai5_widget_pane_t10_ParamLimits

0xb041,	// (0x00032490) cell_ai5_widget_pane_t10

0xb053,	// (0x000324a2) grid_ai5_widget_pane_ParamLimits

0xb089,	// (0x000324d8) cell_contacts_ai5_widget_pane_ParamLimits

0xb089,	// (0x000324d8) cell_contacts_ai5_widget_pane

0x5d19,	// (0x0002d168) popup_discreet_window_t3_ParamLimits

0x5d19,	// (0x0002d168) popup_discreet_window_t3

0x5d72,	// (0x0002d1c1) popup_fshwr2_char_preview_window_ParamLimits

0x5d72,	// (0x0002d1c1) popup_fshwr2_char_preview_window

0xb1d1,	// (0x00032620) tmo_note_info_pane_t1

0xb1e6,	// (0x00032635) tmo_note_info_pane_t2

0xb1fd,	// (0x0003264c) tmo_note_info_pane_t3

0x5ed5,	// (0x0002d324) tmo_note_info_pane_t4

0x5ee7,	// (0x0002d336) tmo_note_info_pane_t5

0x0004,

0xfe8b,	// (0x000372da) tmo_note_info_pane_t

0x5ef9,	// (0x0002d348) list_tmo_link_pane_ParamLimits

0x5f06,	// (0x0002d355) scroll_pane_cp20_ParamLimits

0xae4c,	// (0x0003229b) bg_popup_fep_char_preview_window_cp01

0x5f4a,	// (0x0002d399) popup_fshwr2_char_preview_window_t1

0x5f58,	// (0x0002d3a7) popup_candi_list_indi_window_g1

0x5f61,	// (0x0002d3b0) bg_cell_contacts_ai5_widget_pane

0xb212,	// (0x00032661) cell_contacts_ai5_widget_pane_g1

0xb226,	// (0x00032675) cell_contacts_ai5_widget_pane_g2

0xb235,	// (0x00032684) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe96,	// (0x000372e5) cell_contacts_ai5_widget_pane_g

0xb248,	// (0x00032697) cell_contacts_ai5_widget_pane_t1

0xbb0e,	// (0x00032f5d) highlight_cell_shortcut_ai5_widget_pane_cp01

0xb2c2,	// (0x00032711) settings_container_pane

0xc533,	// (0x00033982) listscroll_set_pane_copy1

0xe242,	// (0x00035691) scroll_pane_cp121_copy1

0x5f6d,	// (0x0002d3bc) set_content_pane_copy1

0xb2ce,	// (0x0003271d) aid_height_set_list_copy1_ParamLimits

0xb2ce,	// (0x0003271d) aid_height_set_list_copy1

0xd7ed,	// (0x00034c3c) aid_size_parent_copy1_ParamLimits

0xd7ed,	// (0x00034c3c) aid_size_parent_copy1

0xb2da,	// (0x00032729) button_value_adjust_pane_cp6_copy1_ParamLimits

0xb2da,	// (0x00032729) button_value_adjust_pane_cp6_copy1

0xbc66,	// (0x000330b5) list_highlight_pane_cp2_copy1_ParamLimits

0xbc66,	// (0x000330b5) list_highlight_pane_cp2_copy1

0xb2ee,	// (0x0003273d) list_set_pane_copy1_ParamLimits

0xb2ee,	// (0x0003273d) list_set_pane_copy1

0xb25d,	// (0x000326ac) main_pane_set_t1_copy1_ParamLimits

0xb25d,	// (0x000326ac) main_pane_set_t1_copy1

0xb297,	// (0x000326e6) main_pane_set_t2_copy1_ParamLimits

0xb297,	// (0x000326e6) main_pane_set_t2_copy1

0xb39b,	// (0x000327ea) main_pane_set_t3_copy1

0xb3a9,	// (0x000327f8) main_pane_set_t4_copy1

0xb2b6,	// (0x00032705) set_content_pane_g1_copy1_ParamLimits

0xb2b6,	// (0x00032705) set_content_pane_g1_copy1

0xb3b7,	// (0x00032806) setting_code_pane_copy1

0x5f75,	// (0x0002d3c4) setting_slider_graphic_pane_copy1

0x5f75,	// (0x0002d3c4) setting_slider_pane_copy1

0x5f7f,	// (0x0002d3ce) setting_text_pane_copy1

0x5f89,	// (0x0002d3d8) setting_volume_pane_copy1

0xb3c1,	// (0x00032810) settings_code_pane_cp2_copy1

0xb3c9,	// (0x00032818) settings_code_pane_cp_copy1_ParamLimits

0xb3c9,	// (0x00032818) settings_code_pane_cp_copy1

0xb3dd,	// (0x0003282c) volume_set_pane_copy1

0xb3e5,	// (0x00032834) volume_set_pane_g10_copy1

0xb3ed,	// (0x0003283c) volume_set_pane_g1_copy1

0xb3f5,	// (0x00032844) volume_set_pane_g2_copy1

0xb3fd,	// (0x0003284c) volume_set_pane_g3_copy1

0xb405,	// (0x00032854) volume_set_pane_g4_copy1

0xb40d,	// (0x0003285c) volume_set_pane_g5_copy1

0xb415,	// (0x00032864) volume_set_pane_g6_copy1

0xb41d,	// (0x0003286c) volume_set_pane_g7_copy1

0xb425,	// (0x00032874) volume_set_pane_g8_copy1

0xb42d,	// (0x0003287c) volume_set_pane_g9_copy1

0xaebc,	// (0x0003230b) bg_set_opt_pane_cp_copy1_ParamLimits

0xaebc,	// (0x0003230b) bg_set_opt_pane_cp_copy1

0x5f92,	// (0x0002d3e1) setting_slider_pane_t1_copy1_ParamLimits

0x5f92,	// (0x0002d3e1) setting_slider_pane_t1_copy1

0xb435,	// (0x00032884) setting_slider_pane_t2_copy1_ParamLimits

0xb435,	// (0x00032884) setting_slider_pane_t2_copy1

0xb44f,	// (0x0003289e) setting_slider_pane_t3_copy1_ParamLimits

0xb44f,	// (0x0003289e) setting_slider_pane_t3_copy1

0xb467,	// (0x000328b6) slider_set_pane_copy1_ParamLimits

0xb467,	// (0x000328b6) slider_set_pane_copy1

0xbb75,	// (0x00032fc4) set_opt_bg_pane_g1_copy2

0xbb7d,	// (0x00032fcc) set_opt_bg_pane_g2_copy2

0x5fb0,	// (0x0002d3ff) set_opt_bg_pane_g3_copy2

0xbb8d,	// (0x00032fdc) set_opt_bg_pane_g4_copy2

0xbb95,	// (0x00032fe4) set_opt_bg_pane_g5_copy2

0xbb9d,	// (0x00032fec) set_opt_bg_pane_g6_copy2

0xb47d,	// (0x000328cc) set_opt_bg_pane_g7_copy2

0x5fba,	// (0x0002d409) set_opt_bg_pane_g8_copy2

0x5fc4,	// (0x0002d413) set_opt_bg_pane_g9_copy2

0x40c6,	// (0x0002b515) aid_size_touch_slider_mark_copy1_ParamLimits

0x40c6,	// (0x0002b515) aid_size_touch_slider_mark_copy1

0x5fce,	// (0x0002d41d) slider_set_pane_g1_copy1

0x40da,	// (0x0002b529) slider_set_pane_g2_copy1

0x20df,	// (0x0002952e) slider_set_pane_g3_copy1_ParamLimits

0x20df,	// (0x0002952e) slider_set_pane_g3_copy1

0x20f3,	// (0x00029542) slider_set_pane_g4_copy1_ParamLimits

0x20f3,	// (0x00029542) slider_set_pane_g4_copy1

0x210b,	// (0x0002955a) slider_set_pane_g5_copy1_ParamLimits

0x210b,	// (0x0002955a) slider_set_pane_g5_copy1

0x20df,	// (0x0002952e) slider_set_pane_g6_copy1_ParamLimits

0x20df,	// (0x0002952e) slider_set_pane_g6_copy1

0x8370,	// (0x0002f7bf) slider_set_pane_g7_copy1_ParamLimits

0x8370,	// (0x0002f7bf) slider_set_pane_g7_copy1

0xae60,	// (0x000322af) bg_set_opt_pane_cp2_copy1

0x5fd7,	// (0x0002d426) setting_slider_graphic_pane_g1_copy1

0xb485,	// (0x000328d4) setting_slider_graphic_pane_t1_copy1

0xb495,	// (0x000328e4) setting_slider_graphic_pane_t2_copy1

0xb4a5,	// (0x000328f4) slider_set_pane_cp_copy1

0x5fe8,	// (0x0002d437) input_focus_pane_cp1_copy1

0x5ff1,	// (0x0002d440) list_set_text_pane_copy1

0x5ff9,	// (0x0002d448) setting_text_pane_g1_copy1

0x40f8,	// (0x0002b547) set_text_pane_t1_copy1

0x5fe8,	// (0x0002d437) input_focus_pane_cp2_copy1

0x5ff9,	// (0x0002d448) setting_code_pane_g1_copy1

0xb4ad,	// (0x000328fc) setting_code_pane_t1_copy1

0x8726,	// (0x0002fb75) list_set_graphic_pane_copy1

0xae60,	// (0x000322af) bg_set_opt_pane_cp4_copy1

0x8937,	// (0x0002fd86) list_set_graphic_pane_g1_copy1_ParamLimits

0x8937,	// (0x0002fd86) list_set_graphic_pane_g1_copy1

0xb4bb,	// (0x0003290a) list_set_graphic_pane_g2_copy1

0x894f,	// (0x0002fd9e) list_set_graphic_pane_t1_copy1_ParamLimits

0x894f,	// (0x0002fd9e) list_set_graphic_pane_t1_copy1

0xe833,	// (0x00035c82) rs_clock_indi_pane_g1

0x6002,	// (0x0002d451) rs_clock_indi_pane_t1

0x5c69,	// (0x0002d0b8) rs_indi_pane

0x6010,	// (0x0002d45f) rs_indi_pane_g1

0x6019,	// (0x0002d468) rs_indi_pane_g2

0x6022,	// (0x0002d471) rs_indi_pane_g3

0x0002,

0xfe9d,	// (0x000372ec) rs_indi_pane_g

0xc533,	// (0x00033982) bg_popup_preview_window_pane_cp03

0x602b,	// (0x0002d47a) popup_fep_tooltip_window_t1

0xf14f,	// (0x0003659e) popup_note2_window_g2_ParamLimits

0xf14f,	// (0x0003659e) popup_note2_window_g2

0x0001,

0x0015,	// (0x00027464) popup_note2_window_g_ParamLimits

0x0015,	// (0x00027464) popup_note2_window_g

0x304a,	// (0x0002a499) bg_popup_sub_pane_cp11_ParamLimits

0x3057,	// (0x0002a4a6) cell_ai3_links_pane_g1_ParamLimits

0x306e,	// (0x0002a4bd) cell_ai3_links_pane_t1

0x40f8,	// (0x0002b547) set_text_pane_t1_copy1_ParamLimits

0xc444,	// (0x00033893) cell_graphic_popup_pane_cp2_ParamLimits

0xc444,	// (0x00033893) cell_graphic_popup_pane_cp2

0x6039,	// (0x0002d488) cell_graphic_popup_pane_g1_cp2

0xb863,	// (0x00032cb2) cell_graphic_popup_pane_g2_cp2

0x6041,	// (0x0002d490) cell_graphic_popup_pane_g3_cp2

0x6049,	// (0x0002d498) cell_graphic_popup_pane_t2_cp2

0xb874,	// (0x00032cc3) grid_highlight_pane_cp3_cp2

0xbe10,	// (0x0003325f) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xbb0e,	// (0x00032f5d) main_tmo_pane_ParamLimits

0xa2ef,	// (0x0003173e) popup_tmo_big_image_note_window

0xae3c,	// (0x0003228b) cell_ai5_widget_list_pane

0xaee1,	// (0x00032330) cell_ai5_widget_lrg_icon_pane

0xb1d1,	// (0x00032620) tmo_note_info_pane_t1_ParamLimits

0xb1e6,	// (0x00032635) tmo_note_info_pane_t2_ParamLimits

0xb1fd,	// (0x0003264c) tmo_note_info_pane_t3_ParamLimits

0x5ed5,	// (0x0002d324) tmo_note_info_pane_t4_ParamLimits

0x5ee7,	// (0x0002d336) tmo_note_info_pane_t5_ParamLimits

0xfe8b,	// (0x000372da) tmo_note_info_pane_t_ParamLimits

0xb2c2,	// (0x00032711) settings_container_pane_ParamLimits

0x5fe0,	// (0x0002d42f) indicator_popup_pane_cp5

0x5fe0,	// (0x0002d42f) indicator_popup_pane_cp6

0x8726,	// (0x0002fb75) list_set_graphic_pane_copy1_ParamLimits

0xae4c,	// (0x0003229b) bg_popup_window_pane_cp23

0x6057,	// (0x0002d4a6) popup_tmo_big_image_note_window_g1

0x6061,	// (0x0002d4b0) popup_tmo_big_image_note_window_t1

0x6071,	// (0x0002d4c0) popup_tmo_big_image_note_window_t2

0x6081,	// (0x0002d4d0) popup_tmo_big_image_note_window_t3

0x0002,

0xfea4,	// (0x000372f3) popup_tmo_big_image_note_window_t

0xb4c3,	// (0x00032912) cell_ai5_widget_lrg_icon_pane_g1

0xb4cb,	// (0x0003291a) cell_ai5_widget_lrg_icon_pane_t1

0xb4d9,	// (0x00032928) cell_ai5_widget_list_row_pane_ParamLimits

0xb4d9,	// (0x00032928) cell_ai5_widget_list_row_pane

0xb4f2,	// (0x00032941) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xb4f2,	// (0x00032941) cell_ai5_widget_list_row_pane_g1

0xb4ff,	// (0x0003294e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xb4ff,	// (0x0003294e) cell_ai5_widget_list_row_pane_t1

0xb517,	// (0x00032966) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xb517,	// (0x00032966) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeab,	// (0x000372fa) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeab,	// (0x000372fa) cell_ai5_widget_list_row_pane_t

0x04c7,	// (0x00027916) main_fep_vtchi_ss_pane

0x6091,	// (0x0002d4e0) popup_fep_char_pre_window

0x6099,	// (0x0002d4e8) popup_fep_ituss_window

0x60a4,	// (0x0002d4f3) popup_fep_vkbss_window

0x60ad,	// (0x0002d4fc) grid_vkbss_keypad_pane_ParamLimits

0x60ad,	// (0x0002d4fc) grid_vkbss_keypad_pane

0x60bd,	// (0x0002d50c) ituss_keypad_pane

0x60c5,	// (0x0002d514) aid_vkbss_key_offset_ParamLimits

0x60c5,	// (0x0002d514) aid_vkbss_key_offset

0x60d4,	// (0x0002d523) cell_vkbss_key_pane_ParamLimits

0x60d4,	// (0x0002d523) cell_vkbss_key_pane

0x60ea,	// (0x0002d539) bg_cell_vkbss_key_g1_ParamLimits

0x60ea,	// (0x0002d539) bg_cell_vkbss_key_g1

0x60f6,	// (0x0002d545) cell_vkbss_key_3p_pane_ParamLimits

0x60f6,	// (0x0002d545) cell_vkbss_key_3p_pane

0x6110,	// (0x0002d55f) cell_vkbss_key_g1_ParamLimits

0x6110,	// (0x0002d55f) cell_vkbss_key_g1

0x612a,	// (0x0002d579) cell_vkbss_key_t1_ParamLimits

0x612a,	// (0x0002d579) cell_vkbss_key_t1

0x6155,	// (0x0002d5a4) cell_ituss_key_pane_ParamLimits

0x6155,	// (0x0002d5a4) cell_ituss_key_pane

0x6164,	// (0x0002d5b3) bg_cell_ituss_key_g1_ParamLimits

0x6164,	// (0x0002d5b3) bg_cell_ituss_key_g1

0x6170,	// (0x0002d5bf) cell_ituss_key_pane_g1_ParamLimits

0x6170,	// (0x0002d5bf) cell_ituss_key_pane_g1

0x617c,	// (0x0002d5cb) cell_ituss_key_pane_g2_ParamLimits

0x617c,	// (0x0002d5cb) cell_ituss_key_pane_g2

0x0001,

0xfeb0,	// (0x000372ff) cell_ituss_key_pane_g_ParamLimits

0xfeb0,	// (0x000372ff) cell_ituss_key_pane_g

0x618f,	// (0x0002d5de) cell_ituss_key_t1_ParamLimits

0x618f,	// (0x0002d5de) cell_ituss_key_t1

0x61ad,	// (0x0002d5fc) cell_ituss_key_t2_ParamLimits

0x61ad,	// (0x0002d5fc) cell_ituss_key_t2

0x61cc,	// (0x0002d61b) cell_ituss_key_t3_ParamLimits

0x61cc,	// (0x0002d61b) cell_ituss_key_t3

0x61eb,	// (0x0002d63a) cell_ituss_key_t4_ParamLimits

0x61eb,	// (0x0002d63a) cell_ituss_key_t4

0x0003,

0xfeb5,	// (0x00037304) cell_ituss_key_t_ParamLimits

0xfeb5,	// (0x00037304) cell_ituss_key_t

0x620a,	// (0x0002d659) cell_vkbss_key_3p_pane_g1

0x6212,	// (0x0002d661) cell_vkbss_key_3p_pane_g2

0x621a,	// (0x0002d669) cell_vkbss_key_3p_pane_g3

0x0002,

0xfebe,	// (0x0003730d) cell_vkbss_key_3p_pane_g

0xae4c,	// (0x0003229b) bg_popup_fep_char_preview_window_cp02

0x6222,	// (0x0002d671) popup_fep_char_pre_window_t1

0xae32,	// (0x00032281) main_ai5_sk_pane

0x5f61,	// (0x0002d3b0) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xb212,	// (0x00032661) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xb226,	// (0x00032675) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xb235,	// (0x00032684) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe96,	// (0x000372e5) cell_contacts_ai5_widget_pane_g_ParamLimits

0xb248,	// (0x00032697) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xbb0e,	// (0x00032f5d) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xb529,	// (0x00032978) main_ai5_sk_pane_g1
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small
